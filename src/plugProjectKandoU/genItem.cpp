

/*
 * --INFO--
 * Address:	........
 * Size:	0000E0
 */
void _Print(char*, ...)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801ACD20
 * Size:	00009C
 */
void makeItem()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r3, 0x40
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  bl        -0x188E90
	  mr.       r31, r3
	  beq-      .loc_0x84
	  addi      r0, r31, 0x3C
	  lis       r5, 0x8048
	  lis       r4, 0x8048
	  lis       r8, 0x6974
	  subi      r6, r5, 0x7F0
	  stw       r0, 0x0(r31)
	  subi      r7, r4, 0x7E4
	  addi      r5, r8, 0x656D
	  li        r4, 0
	  bl        -0x2680
	  lis       r3, 0x804B
	  lis       r4, 0x804B
	  addi      r0, r3, 0x563C
	  li        r3, -0x1
	  stw       r0, 0xC(r31)
	  addi      r4, r4, 0x5738
	  lfs       f0, -0x50A8(r2)
	  li        r0, 0
	  stw       r4, 0xC(r31)
	  stw       r3, 0x24(r31)
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
 * Address:	801ACDBC
 * Size:	00008C
 */
void Game::GenItem::initialise(void)
{
	/*
	.loc_0x0:
	  lwz       r8, -0x6C60(r13)
	  lwz       r5, 0x0(r8)
	  lwz       r0, 0x4(r8)
	  cmpw      r5, r0
	  bgelr-
	  lis       r4, 0x6974
	  lwz       r3, 0x8(r8)
	  addi      r4, r4, 0x656D
	  rlwinm    r0,r5,4,0,27
	  stwx      r4, r3, r0
	  lis       r5, 0x801B
	  lis       r4, 0x8048
	  lis       r3, 0x3030
	  lwz       r0, 0x0(r8)
	  subi      r7, r5, 0x32E0
	  lwz       r6, 0x8(r8)
	  subi      r5, r4, 0x7D4
	  rlwinm    r0,r0,4,0,27
	  addi      r4, r3, 0x3032
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
 * Address:	801ACE48
 * Size:	000038
 */
void Game::GenItem::updateUseList((Game::Generator*, int))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r3, -0x6BC8(r13)
	  lwz       r4, 0x24(r31)
	  bl        0x2222C
	  stw       r3, 0x34(r31)
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801ACE80
 * Size:	00006C
 */
void Game::GenItem::doEvent((unsigned long))
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
	  bl        -0x188DF8

	.loc_0x30:
	  lwz       r3, -0x6BC8(r13)
	  lwz       r4, 0x24(r31)
	  bl        0x221D8
	  stw       r3, 0x34(r31)
	  lwz       r3, 0x34(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x70(r12)
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
 * Address:	801ACEEC
 * Size:	000068
 */
void generatorMakeMatrix__Q24Game7GenItemFR7MatrixfR10Vector3<float>(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lfs       f3, -0x50A0(r2)
	  stw       r0, 0x24(r1)
	  mr        r0, r4
	  mr        r4, r5
	  lfs       f4, -0x50A4(r2)
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
	  bl        0x27B948
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801ACF54
 * Size:	000050
 */
void Game::GenItem::getShape(void)
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
	  lwz       r12, 0x6C(r12)
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
 * Address:	801ACFA4
 * Size:	000154
 */
void Game::GenItem::doWrite((Stream&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  lis       r5, 0x8048
	  stw       r0, 0x34(r1)
	  stw       r31, 0x2C(r1)
	  subi      r31, r5, 0x7F0
	  stw       r30, 0x28(r1)
	  mr        r30, r4
	  stw       r29, 0x24(r1)
	  mr        r29, r3
	  lwz       r3, 0x34(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x138
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x58(r12)
	  mtctr     r12
	  bctrl
	  mr        r0, r3
	  addi      r3, r1, 0x14
	  mr        r4, r0
	  bl        0x2662B4
	  mr        r3, r30
	  addi      r4, r1, 0x14
	  bl        0x26701C
	  lwz       r4, 0x414(r30)
	  mr        r3, r30
	  bl        0x267428
	  mr        r4, r30
	  addi      r3, r1, 0x14
	  bl        0x266448
	  mr        r3, r30
	  addi      r4, r31, 0x2C
	  crclr     6, 0x6
	  bl        0x2671B4
	  lwz       r4, 0x414(r30)
	  mr        r3, r30
	  bl        0x267400
	  lfs       f1, 0x28(r29)
	  mr        r3, r30
	  bl        0x268808
	  lfs       f1, 0x2C(r29)
	  mr        r3, r30
	  bl        0x2687FC
	  lfs       f1, 0x30(r29)
	  mr        r3, r30
	  bl        0x2687F0
	  mr        r3, r30
	  addi      r4, r31, 0x3C
	  crclr     6, 0x6
	  bl        0x267174
	  lwz       r3, 0x34(r29)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x68(r12)
	  mtctr     r12
	  bctrl
	  mr        r0, r3
	  addi      r3, r1, 0x8
	  mr        r4, r0
	  bl        0x26621C
	  lwz       r4, 0x414(r30)
	  mr        r3, r30
	  bl        0x26739C
	  mr        r4, r30
	  addi      r3, r1, 0x8
	  bl        0x2663BC
	  mr        r3, r30
	  addi      r4, r31, 0x4C
	  crclr     6, 0x6
	  bl        0x267128
	  lwz       r3, 0x34(r29)
	  mr        r4, r30
	  lwz       r5, 0x38(r29)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x60(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r30
	  bl        0x266FC8

	.loc_0x138:
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
 * Address:	801AD0F8
 * Size:	000004
 */
void Game::BaseItemMgr::generatorWrite((Stream&, Game::GenItemParm*))
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801AD0FC
 * Size:	00000C
 */
void Game::BaseItemMgr::generatorLocalVersion(void)
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
 * Address:	801AD108
 * Size:	000148
 */
void Game::GenItem::doRead((Stream&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stw       r31, 0x2C(r1)
	  mr        r31, r4
	  stw       r30, 0x28(r1)
	  mr        r30, r3
	  lwz       r3, 0x38(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x34
	  bl        -0x18907C
	  li        r0, 0
	  stw       r0, 0x38(r30)

	.loc_0x34:
	  li        r0, 0
	  addi      r3, r1, 0x14
	  stw       r0, 0x34(r30)
	  bl        0x266128
	  mr        r4, r31
	  addi      r3, r1, 0x14
	  bl        0x26639C
	  lwz       r3, -0x6BC8(r13)
	  addi      r4, r1, 0x14
	  bl        0x22130
	  stw       r3, 0x34(r30)
	  lwz       r3, -0x6BC8(r13)
	  lwz       r4, 0x34(r30)
	  bl        0x21D1C
	  stw       r3, 0x24(r30)
	  lwz       r0, 0x34(r30)
	  cmplwi    r0, 0
	  beq-      .loc_0x88
	  lwz       r0, 0x24(r30)
	  cmpwi     r0, -0x1
	  bne-      .loc_0xA8

	.loc_0x88:
	  lis       r3, 0x8048
	  lis       r4, 0x8048
	  subi      r5, r4, 0x780
	  addi      r6, r1, 0x14
	  subi      r3, r3, 0x78C
	  li        r4, 0xAF
	  crclr     6, 0x6
	  bl        -0x182B6C

	.loc_0xA8:
	  lwz       r3, 0x34(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x70(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x38(r30)
	  mr        r3, r31
	  bl        0x267BE0
	  stfs      f1, 0x28(r30)
	  mr        r3, r31
	  bl        0x267BD4
	  stfs      f1, 0x2C(r30)
	  mr        r3, r31
	  bl        0x267BC8
	  stfs      f1, 0x30(r30)
	  lis       r4, 0x3030
	  addi      r0, r4, 0x3032
	  lwz       r3, 0x14(r30)
	  addi      r6, r4, 0x3030
	  cmplw     r3, r0
	  blt-      .loc_0x114
	  addi      r3, r1, 0x8
	  bl        0x266068
	  mr        r4, r31
	  addi      r3, r1, 0x8
	  bl        0x2662DC
	  lwz       r6, 0x10(r1)

	.loc_0x114:
	  lwz       r3, 0x34(r30)
	  mr        r4, r31
	  lwz       r5, 0x38(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x34(r1)
	  lwz       r31, 0x2C(r1)
	  lwz       r30, 0x28(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801AD250
 * Size:	000004
 */
void Game::BaseItemMgr::generatorRead((Stream&, Game::GenItemParm*,
                                       unsigned long))
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801AD254
 * Size:	000004
 */
void Game::GenItem::ramSaveParameters((Stream&))
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801AD258
 * Size:	000004
 */
void Game::GenItem::ramLoadParameters((Stream&))
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801AD25C
 * Size:	000078
 */
void Game::GenItem::generate((Game::Generator*))
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
 * Address:	801AD2D4
 * Size:	0000A4
 */
void Game::GenItem::birth((Game::GenArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  mr        r6, r3
	  stw       r0, 0x24(r1)
	  li        r0, 0
	  lwz       r3, 0x34(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x90
	  lfs       f0, 0x4(r4)
	  addi      r5, r1, 0x8
	  lfs       f3, -0x50A0(r2)
	  stfs      f0, 0x14(r1)
	  lfs       f4, -0x50A4(r2)
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
	  lwz       r12, 0x5C(r12)
	  mtctr     r12
	  bctrl
	  mr        r0, r3

	.loc_0x90:
	  mr        r3, r0
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000088
 */
void makeObjectItem()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00008C
 */
void Game::GenObjectItem::initialise(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00004C
 */
void Game::GenObjectItem::doWrite((Stream&))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00004C
 */
void Game::GenObjectItem::doRead((Stream&))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000004
 */
void Game::GenObjectItem::ramSaveParameters((Stream&))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000004
 */
void Game::GenObjectItem::ramLoadParameters((Stream&))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000078
 */
void Game::GenObjectItem::generate((Game::Generator*))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000074
 */
void Game::GenObjectItem::birth((Game::GenArg*))
{
	// UNUSED FUNCTION
}
