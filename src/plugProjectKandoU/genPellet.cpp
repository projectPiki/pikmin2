

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
 * Size:	00009C
 */
void Game::GenPellet::__ct(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8020278C
 * Size:	00009C
 */
void makePellet()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r3, 0x40
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  bl        -0x1DE8FC
	  mr.       r31, r3
	  beq-      .loc_0x84
	  addi      r0, r31, 0x3C
	  lis       r5, 0x8048
	  lis       r4, 0x8048
	  lis       r8, 0x7065
	  addi      r6, r5, 0x1BA4
	  stw       r0, 0x0(r31)
	  addi      r7, r4, 0x1BB0
	  addi      r5, r8, 0x6C74
	  li        r4, 0
	  bl        -0x580EC
	  lis       r3, 0x804B
	  lis       r4, 0x804C
	  addi      r0, r3, 0x563C
	  li        r3, 0xFF
	  stw       r0, 0xC(r31)
	  subi      r4, r4, 0x1628
	  lfs       f0, -0x4620(r2)
	  li        r0, 0
	  stw       r4, 0xC(r31)
	  stb       r3, 0x24(r31)
	  stfs      f0, 0x30(r31)
	  stfs      f0, 0x2C(r31)
	  stfs      f0, 0x28(r31)
	  stw       r0, 0x34(r31)
	  stw       r0, 0x38(r31)

	.loc_0x84:
	  lwz       r0, 0x14(r1)
	  mr        r3, r31
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80202828
 * Size:	00008C
 */
void Game::GenPellet::initialise(void)
{
	/*
	.loc_0x0:
	  lwz       r8, -0x6C60(r13)
	  lwz       r5, 0x0(r8)
	  lwz       r0, 0x4(r8)
	  cmpw      r5, r0
	  bgelr-
	  lis       r4, 0x7065
	  lwz       r3, 0x8(r8)
	  addi      r4, r4, 0x6C74
	  rlwinm    r0,r5,4,0,27
	  stwx      r4, r3, r0
	  lis       r5, 0x8020
	  lis       r4, 0x8048
	  lis       r3, 0x3030
	  lwz       r0, 0x0(r8)
	  addi      r7, r5, 0x278C
	  lwz       r6, 0x8(r8)
	  addi      r5, r4, 0x1BC0
	  rlwinm    r0,r0,4,0,27
	  addi      r4, r3, 0x3030
	  add       r3, r6, r0
	  stw       r7, 0x4(r3)
	  lwz       r0, 0x0(r8)
	  lwz       r3, 0x8(r8)
	  rlwinm    r0,r0,4,0,27
	  add       r3, r3, r0
	  stw       r5, 0x8(r3)
	  lwz       r0, 0x0(r8)
	  lwz       r3, 0x8(r8)
	  rlwinm    r0,r0,4,0,27
	  add       r3, r3, r0
	  stw       r4, 0xC(r3)
	  lwz       r3, 0x0(r8)
	  addi      r0, r3, 0x1
	  stw       r0, 0x0(r8)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802028B4
 * Size:	00006C
 */
void Game::GenPellet::doEvent((unsigned long))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  addi      r0, r31, 0x24
	  cmplw     r4, r0
	  bne-      .loc_0x58
	  lwz       r3, 0x38(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x30
	  bl        -0x1DE82C

	.loc_0x30:
	  lwz       r3, -0x6CE0(r13)
	  lbz       r4, 0x24(r31)
	  bl        -0x93820
	  stw       r3, 0x34(r31)
	  lwz       r3, 0x34(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x84(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x38(r31)

	.loc_0x58:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80202920
 * Size:	000068
 */
void generatorMakeMatrix__Q24Game9GenPelletFR7MatrixfR10Vector3<float>(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lfs       f3, -0x4618(r2)
	  stw       r0, 0x24(r1)
	  mr        r0, r4
	  mr        r4, r5
	  lfs       f4, -0x461C(r2)
	  lfs       f2, 0x2C(r3)
	  addi      r5, r1, 0x8
	  lfs       f1, 0x30(r3)
	  lfs       f0, 0x28(r3)
	  fmuls     f2, f3, f2
	  fmuls     f1, f3, f1
	  mr        r3, r0
	  fmuls     f0, f3, f0
	  fmuls     f2, f4, f2
	  fmuls     f1, f4, f1
	  fmuls     f0, f4, f0
	  stfs      f2, 0xC(r1)
	  stfs      f0, 0x8(r1)
	  stfs      f1, 0x10(r1)
	  bl        0x225F14
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80202988
 * Size:	000050
 */
void Game::GenPellet::getShape(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r0, 0x34(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x3C
	  lwz       r4, 0x38(r3)
	  cmplwi    r4, 0
	  beq-      .loc_0x3C
	  mr        r3, r0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x80(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x40

	.loc_0x3C:
	  li        r3, 0

	.loc_0x40:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802029D8
 * Size:	000138
 */
void Game::GenPellet::doWrite((Stream&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  lis       r5, 0x8048
	  stw       r0, 0x34(r1)
	  stw       r31, 0x2C(r1)
	  addi      r31, r5, 0x1B98
	  stw       r30, 0x28(r1)
	  mr        r30, r4
	  stw       r29, 0x24(r1)
	  mr        r29, r3
	  lwz       r3, 0x34(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x11C
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x58(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  mr        r3, r30
	  bl        0x2115F8
	  lwz       r4, 0x414(r30)
	  mr        r3, r30
	  bl        0x211A04
	  lbz       r4, 0x24(r29)
	  mr        r3, r30
	  bl        0x212C34
	  mr        r3, r30
	  addi      r4, r31, 0x38
	  crclr     6, 0x6
	  bl        0x211790
	  lwz       r4, 0x414(r30)
	  mr        r3, r30
	  bl        0x2119DC
	  lfs       f1, 0x28(r29)
	  mr        r3, r30
	  bl        0x212DE4
	  lfs       f1, 0x2C(r29)
	  mr        r3, r30
	  bl        0x212DD8
	  lfs       f1, 0x30(r29)
	  mr        r3, r30
	  bl        0x212DCC
	  mr        r3, r30
	  addi      r4, r31, 0x44
	  crclr     6, 0x6
	  bl        0x211750
	  lwz       r3, 0x34(r29)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x7C(r12)
	  mtctr     r12
	  bctrl
	  mr        r0, r3
	  addi      r3, r1, 0x8
	  mr        r4, r0
	  bl        0x2107F8
	  mr        r4, r30
	  addi      r3, r1, 0x8
	  bl        0x2109A4
	  mr        r3, r30
	  addi      r4, r31, 0x54
	  crclr     6, 0x6
	  bl        0x211710
	  lwz       r3, 0x34(r29)
	  mr        r4, r30
	  lwz       r5, 0x38(r29)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x74(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r30
	  bl        0x2115B0

	.loc_0x11C:
	  lwz       r0, 0x34(r1)
	  lwz       r31, 0x2C(r1)
	  lwz       r30, 0x28(r1)
	  lwz       r29, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80202B10
 * Size:	000118
 */
void Game::GenPellet::doRead((Stream&))
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
	  lwz       r3, 0x38(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x34
	  bl        -0x1DEA84
	  li        r0, 0
	  stw       r0, 0x38(r30)

	.loc_0x34:
	  li        r0, 0
	  mr        r3, r31
	  stw       r0, 0x34(r30)
	  bl        0x21194C
	  stb       r3, 0x24(r30)
	  lwz       r3, -0x6CE0(r13)
	  lbz       r4, 0x24(r30)
	  bl        -0x93A94
	  stw       r3, 0x34(r30)
	  lwz       r0, 0x34(r30)
	  cmplwi    r0, 0
	  beq-      .loc_0x70
	  lbz       r0, 0x24(r30)
	  cmplwi    r0, 0xFF
	  bne-      .loc_0x90

	.loc_0x70:
	  lis       r3, 0x8048
	  lis       r4, 0x8048
	  addi      r5, r4, 0x1C18
	  lbz       r6, 0x24(r30)
	  addi      r3, r3, 0x1C08
	  li        r4, 0xA1
	  crclr     6, 0x6
	  bl        -0x1D855C

	.loc_0x90:
	  lwz       r3, 0x34(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x84(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x38(r30)
	  mr        r3, r31
	  bl        0x2121F0
	  stfs      f1, 0x28(r30)
	  mr        r3, r31
	  bl        0x2121E4
	  stfs      f1, 0x2C(r30)
	  mr        r3, r31
	  bl        0x2121D8
	  stfs      f1, 0x30(r30)
	  addi      r3, r1, 0x8
	  bl        0x210690
	  mr        r4, r31
	  addi      r3, r1, 0x8
	  bl        0x210904
	  lwz       r3, 0x34(r30)
	  mr        r4, r31
	  lwz       r5, 0x38(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r6, 0x10(r1)
	  lwz       r12, 0x78(r12)
	  mtctr     r12
	  bctrl
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
 * Address:	80202C28
 * Size:	000004
 */
void Game::GenPellet::ramSaveParameters((Stream&))
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80202C2C
 * Size:	000004
 */
void Game::GenPellet::ramLoadParameters((Stream&))
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80202C30
 * Size:	000058
 */
void Game::GenPellet::updateUseList((Game::Generator*, int))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r3, -0x6CE0(r13)
	  lbz       r4, 0x24(r31)
	  bl        -0x93B80
	  stw       r3, 0x34(r31)
	  lwz       r4, 0x38(r31)
	  lwz       r3, 0x34(r31)
	  lwz       r4, 0x0(r4)
	  bl        -0x96EA8
	  lwz       r4, 0x38(r31)
	  lwz       r3, 0x34(r31)
	  lwz       r4, 0x0(r4)
	  bl        -0x96EE8
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80202C88
 * Size:	000078
 */
void Game::GenPellet::generate((Game::Generator*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r6, 0x804B
	  lis       r5, 0x804B
	  stw       r0, 0x24(r1)
	  subi      r6, r6, 0x5D0C
	  subi      r0, r5, 0x242C
	  lfs       f1, 0x9C(r4)
	  lfs       f0, 0xA8(r4)
	  lfs       f3, 0x98(r4)
	  fadds     f4, f1, f0
	  lfs       f2, 0xA4(r4)
	  lfs       f1, 0x94(r4)
	  lfs       f0, 0xA0(r4)
	  fadds     f2, f3, f2
	  addi      r4, r1, 0x8
	  fadds     f0, f1, f0
	  stw       r6, 0x8(r1)
	  stw       r0, 0x8(r1)
	  stfs      f0, 0xC(r1)
	  stfs      f2, 0x10(r1)
	  stfs      f4, 0x14(r1)
	  lwz       r12, 0xC(r3)
	  lwz       r12, 0x34(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80202D00
 * Size:	000040
 */
void Game::GenPellet::getDebugInfo((char*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r5, 0x8048
	  stw       r0, 0x14(r1)
	  addi      r0, r5, 0x1C34
	  lwz       r6, 0x38(r3)
	  lbz       r5, 0x24(r3)
	  mr        r3, r4
	  lwz       r6, 0x0(r6)
	  mr        r4, r0
	  crclr     6, 0x6
	  bl        -0x13B8F4
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80202D40
 * Size:	0000D4
 */
void Game::GenPellet::birth((Game::GenArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  mr        r6, r3
	  stw       r0, 0x34(r1)
	  stw       r31, 0x2C(r1)
	  li        r31, 0
	  lwz       r3, 0x34(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0xBC
	  lfs       f0, 0x4(r4)
	  addi      r5, r1, 0x8
	  lfs       f3, -0x4618(r2)
	  stfs      f0, 0x14(r1)
	  lfs       f4, -0x461C(r2)
	  lfs       f0, 0x8(r4)
	  stfs      f0, 0x18(r1)
	  lfs       f0, 0xC(r4)
	  addi      r4, r1, 0x14
	  stfs      f0, 0x1C(r1)
	  lfs       f2, 0x30(r6)
	  lfs       f1, 0x2C(r6)
	  lfs       f0, 0x28(r6)
	  fmuls     f2, f3, f2
	  fmuls     f1, f3, f1
	  fmuls     f0, f3, f0
	  fmuls     f2, f4, f2
	  fmuls     f1, f4, f1
	  fmuls     f0, f4, f0
	  stfs      f2, 0x10(r1)
	  stfs      f0, 0x8(r1)
	  stfs      f1, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r6, 0x38(r6)
	  lwz       r12, 0x70(r12)
	  mtctr     r12
	  bctrl
	  mr.       r31, r3
	  beq-      .loc_0xA0
	  bl        -0x9AE60
	  b         .loc_0xBC

	.loc_0xA0:
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  addi      r3, r3, 0x1C08
	  li        r4, 0xF5
	  addi      r5, r5, 0x1C40
	  crclr     6, 0x6
	  bl        -0x1D87B8

	.loc_0xBC:
	  lwz       r0, 0x34(r1)
	  mr        r3, r31
	  lwz       r31, 0x2C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}
