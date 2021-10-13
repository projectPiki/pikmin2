

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
 * Address:	801CBFE8
 * Size:	000100
 */
void Game::BaseItem::__ct((int))
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
	  bl        -0x91180
	  lis       r4, 0x804B
	  lis       r3, 0x804B
	  subi      r0, r4, 0x5994
	  lfs       f0, -0x4D48(r2)
	  stw       r0, 0x178(r30)
	  addi      r6, r3, 0x76E8
	  lis       r4, 0x804B
	  lis       r3, 0x804F
	  stw       r6, 0x0(r30)
	  addi      r6, r6, 0x1B0
	  subi      r5, r4, 0x4678
	  subi      r4, r3, 0x4200
	  stw       r6, 0x178(r30)
	  li        r0, 0
	  li        r3, 0x8
	  stw       r5, 0x1A8(r30)
	  stw       r4, 0x1A8(r30)
	  stb       r0, 0x1C0(r30)
	  stw       r0, 0x1B4(r30)
	  stw       r0, 0x1AC(r30)
	  stb       r0, 0x1C0(r30)
	  stw       r0, 0x1B8(r30)
	  sth       r31, 0x128(r30)
	  stfs      f0, 0x1D4(r30)
	  stw       r0, 0x180(r30)
	  stw       r0, 0x188(r30)
	  stw       r0, 0x184(r30)
	  stfs      f0, 0x190(r30)
	  stfs      f0, 0x194(r30)
	  stfs      f0, 0x198(r30)
	  stfs      f0, 0x19C(r30)
	  stfs      f0, 0x1A0(r30)
	  stfs      f0, 0x1A4(r30)
	  bl        -0x1A81E8
	  mr.       r0, r3
	  beq-      .loc_0xB8
	  bl        -0x9803C
	  mr        r0, r3

	.loc_0xB8:
	  lis       r3, 0x8051
	  stw       r0, 0x114(r30)
	  addi      r4, r3, 0x41E4
	  lfs       f0, -0x4D44(r2)
	  lfs       f1, 0x0(r4)
	  mr        r3, r30
	  stfs      f1, 0x1C4(r30)
	  lfs       f1, 0x4(r4)
	  stfs      f1, 0x1C8(r30)
	  lfs       f1, 0x8(r4)
	  stfs      f1, 0x1CC(r30)
	  stfs      f0, 0x1D0(r30)
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
 * Address:	801CC0E8
 * Size:	00004C
 */
void Game::BaseItem::constructor(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  li        r3, 0x70
	  bl        -0x1A825C
	  mr.       r0, r3
	  beq-      .loc_0x34
	  mr        r4, r31
	  li        r5, 0x2
	  bl        0x291690
	  mr        r0, r3

	.loc_0x34:
	  stw       r0, 0x17C(r31)
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801CC134
 * Size:	000014
 */
void Game::BaseItem::getJAIObject(void)
{
	/*
	.loc_0x0:
	  lwz       r3, 0x17C(r3)
	  cmplwi    r3, 0
	  beqlr-
	  addi      r3, r3, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801CC148
 * Size:	000008
 */
void Game::BaseItem::getPSCreature(void)
{
	/*
	.loc_0x0:
	  lwz       r3, 0x17C(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801CC150
 * Size:	00008C
 */
void Game::BaseItem::startSound((unsigned long))
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
	  lwz       r0, 0x17C(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x58
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1A8(r12)
	  mtctr     r12
	  bctrl
	  lis       r5, 0x8048
	  lis       r7, 0x8048
	  mr        r6, r3
	  li        r4, 0x106
	  addi      r3, r7, 0x390
	  addi      r5, r5, 0x39C
	  crclr     6, 0x6
	  bl        -0x1A1B64

	.loc_0x58:
	  lwz       r3, 0x17C(r30)
	  mr        r4, r31
	  li        r5, 0
	  lwz       r12, 0x28(r3)
	  lwz       r12, 0x7C(r12)
	  mtctr     r12
	  bctrl
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
 * Address:	801CC1DC
 * Size:	000108
 */
void Game::BaseItem::doAnimation(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  lwz       r0, 0x1B8(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x88
	  addi      r3, r30, 0x1A8
	  lwz       r4, -0x6514(r13)
	  lwz       r12, 0x1A8(r30)
	  lfs       f1, 0x1D4(r30)
	  lfs       f0, 0x54(r4)
	  lwz       r12, 0xC(r12)
	  fmuls     f1, f1, f0
	  mtctr     r12
	  bctrl
	  addi      r3, r30, 0x1A8
	  lwz       r31, 0x174(r30)
	  lwz       r12, 0x1A8(r30)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x8(r31)
	  lwz       r4, 0x4(r4)
	  lwz       r4, 0x28(r4)
	  lwz       r4, 0x0(r4)
	  stw       r3, 0x54(r4)
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x20C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x88:
	  lwz       r0, 0xB8(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0xA8
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x1C4(r12)
	  mtctr     r12
	  bctrl

	.loc_0xA8:
	  lwz       r3, 0x174(r30)
	  cmplwi    r3, 0
	  beq-      .loc_0xDC
	  lwz       r4, 0x8(r3)
	  addi      r3, r30, 0x138
	  addi      r4, r4, 0x24
	  bl        -0xE1FD0
	  lwz       r3, 0x174(r30)
	  lwz       r3, 0x8(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl

	.loc_0xDC:
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x214(r12)
	  mtctr     r12
	  bctrl
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
 * Address:	801CC2E4
 * Size:	00002C
 */
void Game::BaseItem::updateTrMatrix(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C4(r12)
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
 * Address:	801CC310
 * Size:	0000C4
 */
void Game::BaseItem::entryShape(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r3, 0x174(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0xB0
	  lbz       r0, 0xD8(r31)
	  rlwinm.   r0,r0,0,29,29
	  beq-      .loc_0x40
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x84

	.loc_0x40:
	  lbz       r0, -0x7B98(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0x74
	  lwz       r5, -0x6C18(r13)
	  li        r4, 0
	  lwz       r0, 0x44(r5)
	  cmpwi     r0, 0x1
	  beq-      .loc_0x68
	  cmpwi     r0, 0x3
	  bne-      .loc_0x6C

	.loc_0x68:
	  li        r4, 0x1

	.loc_0x6C:
	  rlwinm.   r0,r4,0,24,31
	  beq-      .loc_0xB0

	.loc_0x74:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl

	.loc_0x84:
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x1D0(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x174(r31)
	  lwz       r3, 0x8(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl

	.loc_0xB0:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801CC3D4
 * Size:	000038
 */
void Game::BaseItem::doEntry(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r0, 0xB8(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x28
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x218(r12)
	  mtctr     r12
	  bctrl

	.loc_0x28:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801CC40C
 * Size:	000074
 */
void Game::BaseItem::stimulate((Game::Interaction&))
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
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  mr        r4, r30
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x58
	  mr        r3, r31
	  mr        r4, r30
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x5C

	.loc_0x58:
	  li        r3, 0

	.loc_0x5C:
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
 * Address:	801CC480
 * Size:	000004
 */
void Game::BaseItem::doSimulation((float))
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801CC484
 * Size:	00002C
 */
void Game::BaseItem::makeTrMatrix(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r4, r3
	  stw       r0, 0x14(r1)
	  addi      r3, r4, 0x138
	  addi      r4, r4, 0x19C
	  bl        0x25C3A4
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801CC4B0
 * Size:	0000DC
 */
void Game::BaseItem::update(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C8(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x210(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x17C(r31)
	  lwz       r12, 0x28(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xC8
	  mr        r3, r31
	  bl        -0x907B4
	  lwz       r0, 0xDC(r31)
	  cmpwi     r0, 0
	  blt-      .loc_0x84
	  cmpwi     r0, 0xA
	  ble-      .loc_0xB4

	.loc_0x84:
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  addi      r3, r3, 0x390
	  li        r4, 0x16D
	  addi      r5, r5, 0x3B4
	  crclr     6, 0x6
	  bl        -0x1A1F20

	.loc_0xB4:
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x1D4(r12)
	  mtctr     r12
	  bctrl

	.loc_0xC8:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801CC58C
 * Size:	000004
 */
void Game::BaseItem::doAI(void)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801CC590
 * Size:	00007C
 */
void Game::BaseItem::do_updateLOD(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  addi      r3, r1, 0x8
	  bl        0xB260
	  mr        r3, r31
	  addi      r4, r1, 0x8
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x1D8(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  addi      r4, r1, 0x8
	  bl        0xB270
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xB8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x68
	  lbz       r0, 0xD8(r31)
	  ori       r0, r0, 0x34
	  stb       r0, 0xD8(r31)

	.loc_0x68:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801CC60C
 * Size:	00003C
 */
void Game::BaseItem::updateCollTree(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r3, 0x114(r3)
	  bl        -0x96B88
	  lwz       r3, 0x114(r31)
	  addi      r4, r31, 0x1C4
	  bl        -0x959F0
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801CC648
 * Size:	0001C4
 */
void Game::BaseItem::move((float))
{
	/*
	.loc_0x0:
	  stwu      r1, -0xE0(r1)
	  mflr      r0
	  stw       r0, 0xE4(r1)
	  stfd      f31, 0xD0(r1)
	  psq_st    f31,0xD8(r1),0,0
	  stfd      f30, 0xC0(r1)
	  psq_st    f30,0xC8(r1),0,0
	  stw       r31, 0xBC(r1)
	  stw       r30, 0xB8(r1)
	  lwz       r12, 0x0(r3)
	  fmr       f30, f1
	  mr        r30, r3
	  lwz       r12, 0x1DC(r12)
	  mtctr     r12
	  bctrl
	  fmr       f31, f1
	  lfs       f6, 0x1A0(r30)
	  lis       r3, 0x8050
	  lfs       f7, 0x1A4(r30)
	  lfs       f5, 0x19C(r30)
	  li        r5, 0
	  fadds     f6, f6, f31
	  addi      r3, r3, 0x71A0
	  stw       r5, 0x2C(r1)
	  addi      r7, r1, 0x8
	  lfs       f4, -0x4D44(r2)
	  addi      r6, r30, 0x190
	  lfs       f3, -0x4D48(r2)
	  li        r0, -0x1
	  lfs       f2, 0x800(r3)
	  fmr       f1, f30
	  lfs       f0, -0x4D40(r2)
	  addi      r4, r1, 0x18
	  stfs      f5, 0x8(r1)
	  lwz       r3, -0x6CF8(r13)
	  stfs      f6, 0xC(r1)
	  stfs      f7, 0x10(r1)
	  stfs      f31, 0x14(r1)
	  stw       r7, 0x18(r1)
	  stw       r6, 0x1C(r1)
	  stfs      f4, 0x20(r1)
	  stfs      f3, 0x24(r1)
	  stw       r5, 0x28(r1)
	  stw       r5, 0x5C(r1)
	  stb       r5, 0x8C(r1)
	  stb       r5, 0x31(r1)
	  stb       r5, 0x30(r1)
	  stw       r5, 0x60(r1)
	  stb       r5, 0xA8(r1)
	  stw       r5, 0xAC(r1)
	  stfs      f2, 0x44(r1)
	  stfs      f0, 0x48(r1)
	  stw       r0, 0xB0(r1)
	  stw       r5, 0x64(r1)
	  stb       r5, 0x32(r1)
	  stw       r30, 0x2C(r1)
	  lwz       r12, 0x4(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  fmr       f1, f30
	  lwz       r31, 0x5C(r1)
	  lwz       r3, -0x6BE0(r13)
	  addi      r4, r1, 0x18
	  bl        -0x6B90
	  lwz       r0, 0x18C(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0x170
	  cmplwi    r31, 0
	  bne-      .loc_0x150
	  lwz       r4, 0x5C(r1)
	  cmplwi    r4, 0
	  beq-      .loc_0x144
	  lwz       r12, 0x0(r30)
	  mr        r3, r30
	  lwz       r12, 0xE8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x5C(r1)
	  stw       r0, 0x18C(r30)
	  b         .loc_0x178

	.loc_0x144:
	  li        r0, 0
	  stw       r0, 0x18C(r30)
	  b         .loc_0x178

	.loc_0x150:
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0xE8(r12)
	  mtctr     r12
	  bctrl
	  stw       r31, 0x18C(r30)
	  b         .loc_0x178

	.loc_0x170:
	  li        r0, 0
	  stw       r0, 0x18C(r30)

	.loc_0x178:
	  lfs       f0, 0x8(r1)
	  stfs      f0, 0x19C(r30)
	  lfs       f0, 0xC(r1)
	  stfs      f0, 0x1A0(r30)
	  lfs       f0, 0x10(r1)
	  stfs      f0, 0x1A4(r30)
	  lfs       f0, 0x1A0(r30)
	  fsubs     f0, f0, f31
	  stfs      f0, 0x1A0(r30)
	  psq_l     f31,0xD8(r1),0,0
	  lfd       f31, 0xD0(r1)
	  psq_l     f30,0xC8(r1),0,0
	  lfd       f30, 0xC0(r1)
	  lwz       r31, 0xBC(r1)
	  lwz       r0, 0xE4(r1)
	  lwz       r30, 0xB8(r1)
	  mtlr      r0
	  addi      r1, r1, 0xE0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801CC80C
 * Size:	00007C
 */
void Game::BaseItem::movieStartAnimation((unsigned long))
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
	  lwz       r0, 0x1B8(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x54
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1A8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r31
	  addi      r3, r30, 0x1A8
	  li        r5, 0
	  bl        0x25C438
	  lfs       f0, -0x4D3C(r2)
	  stfs      f0, 0x1D4(r30)
	  b         .loc_0x64

	.loc_0x54:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1A8(r12)
	  mtctr     r12
	  bctrl

	.loc_0x64:
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
 * Address:	801CC888
 * Size:	000088
 */
void Game::BaseItem::movieStartDemoAnimation((SysShape::AnimInfo*))
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
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r31
	  addi      r3, r30, 0x1A8
	  bl        0x25C494
	  lfs       f0, -0x4D3C(r2)
	  addi      r3, r30, 0x1A8
	  stfs      f0, 0x1D4(r30)
	  lwz       r4, 0x174(r30)
	  bl        0x25C4E8
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x70
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  addi      r3, r3, 0x390
	  li        r4, 0x1F2
	  addi      r5, r5, 0x3D0
	  crclr     6, 0x6
	  bl        -0x1A22B4

	.loc_0x70:
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
 * Address:	801CC910
 * Size:	000024
 */
void Game::BaseItem::movieSetAnimationLastFrame(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  addi      r3, r3, 0x1A8
	  stw       r0, 0x14(r1)
	  bl        0x25C5E0
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801CC934
 * Size:	00001C
 */
void movieSetTranslation__Q24Game8BaseItemFR10Vector3<float> f(void)
{
	/*
	.loc_0x0:
	  lfs       f0, 0x0(r4)
	  stfs      f0, 0x19C(r3)
	  lfs       f0, 0x4(r4)
	  stfs      f0, 0x1A0(r3)
	  lfs       f0, 0x8(r4)
	  stfs      f0, 0x1A4(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801CC950
 * Size:	000050
 */
void Game::CFSMItem::constructor(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        .loc_0x50
	  li        r3, 0x70
	  bl        -0x1A8AC8
	  mr.       r0, r3
	  beq-      .loc_0x38
	  mr        r4, r31
	  li        r5, 0x2
	  bl        0x290E24
	  mr        r0, r3

	.loc_0x38:
	  stw       r0, 0x17C(r31)
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr

	.loc_0x50:
	*/
}

/*
 * --INFO--
 * Address:	801CC9A0
 * Size:	000054
 */
void Game::CFSMItem::initFSM(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x220(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x1D8(r31)
	  mr        r4, r31
	  lwz       r3, 0x1D8(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801CC9F4
 * Size:	000004
 */
void init__Q24Game30StateMachine<Game::CFSMItem> FPQ24Game8CFSMItem(void)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801CC9F8
 * Size:	000034
 */
void Game::CFSMItem::doAI(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r4, r3
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x1D8(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
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
 * Address:	801CCA2C
 * Size:	000008
 */
void setCurrState__Q24Game8CFSMItemFPQ24Game26FSMState<Game::CFSMItem>(void)
{
	/*
	.loc_0x0:
	  stw       r4, 0x1DC(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801CCA34
 * Size:	000008
 */
void Game::CFSMItem::getCurrState(void)
{
	/*
	.loc_0x0:
	  lwz       r3, 0x1DC(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801CCA3C
 * Size:	00001C
 */
void Game::CFSMItem::getStateID(void)
{
	/*
	.loc_0x0:
	  lwz       r3, 0x1DC(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x14
	  lwz       r3, 0x4(r3)
	  blr

	.loc_0x14:
	  li        r3, -0x1
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801CCA58
 * Size:	000044
 */
void Game::CFSMItem::bounceCallback((Sys::Triangle*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r6, r3
	  mr        r5, r4
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x1DC(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x34
	  lwz       r12, 0x0(r3)
	  mr        r4, r6
	  lwz       r12, 0x28(r12)
	  mtctr     r12
	  bctrl

	.loc_0x34:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801CCA9C
 * Size:	000004
 */
void Game::CItemState::onBounce((Game::CFSMItem*, Sys::Triangle*))
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801CCAA0
 * Size:	000044
 */
void Game::CFSMItem::collisionCallback((Game::CollEvent&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r6, r3
	  mr        r5, r4
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x1DC(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x34
	  lwz       r12, 0x0(r3)
	  mr        r4, r6
	  lwz       r12, 0x30(r12)
	  mtctr     r12
	  bctrl

	.loc_0x34:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801CCAE4
 * Size:	000004
 */
void Game::CItemState::onCollision((Game::CFSMItem*, Game::CollEvent&))
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801CCAE8
 * Size:	000044
 */
void Game::CFSMItem::platCallback((Game::PlatEvent&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r6, r3
	  mr        r5, r4
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x1DC(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x34
	  lwz       r12, 0x0(r3)
	  mr        r4, r6
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x34:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801CCB2C
 * Size:	000004
 */
void Game::CItemState::onPlatCollision((Game::CFSMItem*, Game::PlatEvent&))
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801CCB30
 * Size:	000044
 */
void Game::CFSMItem::onKeyEvent((SysShape::KeyEvent const&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r6, r3
	  mr        r5, r4
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x1DC(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x34
	  lwz       r12, 0x0(r3)
	  mr        r4, r6
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl

	.loc_0x34:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801CCB74
 * Size:	000004
 */
void Game::CItemState::onKeyEvent((Game::CFSMItem*, SysShape::KeyEvent const&))
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801CCB78
 * Size:	000038
 */
void Game::InteractAttack::actItem((Game::BaseItem*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  mr        r0, r3
	  mr        r3, r4
	  lwz       r12, 0x0(r4)
	  mr        r4, r0
	  lwz       r12, 0x1E0(r12)
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
 * Address:	801CCBB0
 * Size:	000038
 */
void Game::InteractBreakBridge::actItem((Game::BaseItem*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  mr        r0, r3
	  mr        r3, r4
	  lwz       r12, 0x0(r4)
	  mr        r4, r0
	  lwz       r12, 0x1E4(r12)
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
 * Address:	801CCBE8
 * Size:	000038
 */
void Game::InteractGotKey::actItem((Game::BaseItem*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  mr        r0, r3
	  mr        r3, r4
	  lwz       r12, 0x0(r4)
	  mr        r4, r0
	  lwz       r12, 0x200(r12)
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
 * Address:	801CCC20
 * Size:	000038
 */
void Game::InteractEat::actItem((Game::BaseItem*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  mr        r0, r3
	  mr        r3, r4
	  lwz       r12, 0x0(r4)
	  mr        r4, r0
	  lwz       r12, 0x1E8(r12)
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
 * Address:	801CCC58
 * Size:	000038
 */
void Game::InteractFlockAttack::actItem((Game::BaseItem*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  mr        r0, r3
	  mr        r3, r4
	  lwz       r12, 0x0(r4)
	  mr        r4, r0
	  lwz       r12, 0x1EC(r12)
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
 * Address:	801CCC90
 * Size:	000038
 */
void Game::InteractAbsorb::actItem((Game::BaseItem*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  mr        r0, r3
	  mr        r3, r4
	  lwz       r12, 0x0(r4)
	  mr        r4, r0
	  lwz       r12, 0x1F0(r12)
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
 * Address:	801CCCC8
 * Size:	000038
 */
void Game::InteractFue::actItem((Game::BaseItem*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  mr        r0, r3
	  mr        r3, r4
	  lwz       r12, 0x0(r4)
	  mr        r4, r0
	  lwz       r12, 0x1F4(r12)
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
 * Address:	801CCD00
 * Size:	000038
 */
void Game::InteractFarmKarero::actItem((Game::BaseItem*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  mr        r0, r3
	  mr        r3, r4
	  lwz       r12, 0x0(r4)
	  mr        r4, r0
	  lwz       r12, 0x1F8(r12)
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
 * Address:	801CCD38
 * Size:	000038
 */
void Game::InteractFarmHaero::actItem((Game::BaseItem*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  mr        r0, r3
	  mr        r3, r4
	  lwz       r12, 0x0(r4)
	  mr        r4, r0
	  lwz       r12, 0x1FC(r12)
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
 * Address:	801CCD70
 * Size:	00005C
 */
void Game::BaseItemMgr::__ct((int))
{
	/*
	.loc_0x0:
	  extsh.    r0, r4
	  beq-      .loc_0x10
	  addi      r0, r3, 0x30
	  stw       r0, 0x4(r3)

	.loc_0x10:
	  lis       r4, 0x804B
	  lis       r5, 0x804B
	  subi      r0, r4, 0x4A10
	  stw       r0, 0x0(r3)
	  addi      r6, r5, 0x7374
	  lis       r4, 0x8048
	  li        r5, 0
	  stw       r6, 0x0(r3)
	  addi      r0, r4, 0x3DC
	  stw       r5, 0x20(r3)
	  stw       r5, 0x24(r3)
	  stw       r5, 0x28(r3)
	  stw       r5, 0x2C(r3)
	  stw       r5, 0x1C(r3)
	  stw       r0, 0x8(r3)
	  stw       r5, 0xC(r3)
	  stw       r5, 0x10(r3)
	  stw       r5, 0x14(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801CCDCC
 * Size:	000108
 */
void Game::BaseItemMgr::setModelSize((int))
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
	  stw       r31, 0x18(r3)
	  rlwinm    r3,r4,2,0,29
	  bl        -0x1A8E44
	  cmpwi     r31, 0
	  stw       r3, 0x1C(r30)
	  li        r12, 0
	  ble-      .loc_0xF0
	  cmpwi     r31, 0x8
	  subi      r3, r31, 0x8
	  ble-      .loc_0xC8
	  addi      r0, r3, 0x7
	  li        r11, 0
	  rlwinm    r0,r0,29,3,31
	  mtctr     r0
	  cmpwi     r3, 0
	  ble-      .loc_0xC8

	.loc_0x5C:
	  lwz       r3, 0x1C(r30)
	  li        r10, 0
	  addi      r8, r11, 0x4
	  addi      r7, r11, 0x8
	  stwx      r10, r3, r11
	  addi      r6, r11, 0xC
	  addi      r5, r11, 0x10
	  addi      r4, r11, 0x14
	  lwz       r9, 0x1C(r30)
	  addi      r3, r11, 0x18
	  addi      r0, r11, 0x1C
	  addi      r11, r11, 0x20
	  stwx      r10, r9, r8
	  addi      r12, r12, 0x8
	  lwz       r8, 0x1C(r30)
	  stwx      r10, r8, r7
	  lwz       r7, 0x1C(r30)
	  stwx      r10, r7, r6
	  lwz       r6, 0x1C(r30)
	  stwx      r10, r6, r5
	  lwz       r5, 0x1C(r30)
	  stwx      r10, r5, r4
	  lwz       r4, 0x1C(r30)
	  stwx      r10, r4, r3
	  lwz       r3, 0x1C(r30)
	  stwx      r10, r3, r0
	  bdnz+     .loc_0x5C

	.loc_0xC8:
	  sub       r0, r31, r12
	  rlwinm    r5,r12,2,0,29
	  li        r4, 0
	  mtctr     r0
	  cmpw      r12, r31
	  bge-      .loc_0xF0

	.loc_0xE0:
	  lwz       r3, 0x1C(r30)
	  stwx      r4, r3, r5
	  addi      r5, r5, 0x4
	  bdnz+     .loc_0xE0

	.loc_0xF0:
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
 * Address:	801CCED4
 * Size:	00007C
 */
void Game::BaseItemMgr::loadArchive((char*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x240(r1)
	  mflr      r0
	  mr        r6, r4
	  subi      r4, r2, 0x4D38
	  stw       r0, 0x244(r1)
	  stw       r31, 0x23C(r1)
	  mr        r31, r3
	  lwz       r5, 0x28(r3)
	  addi      r3, r1, 0x38
	  crclr     6, 0x6
	  bl        -0x105AC4
	  addi      r3, r1, 0x8
	  addi      r4, r1, 0x38
	  bl        0x27F6D0
	  lwz       r0, -0x77D4(r13)
	  addi      r4, r1, 0x8
	  lwz       r3, -0x63D8(r13)
	  stw       r0, 0x20(r1)
	  bl        0x27F7F8
	  cmplwi    r3, 0
	  beq-      .loc_0x60
	  lwz       r0, 0x34(r3)
	  stw       r0, 0x2C(r31)
	  b         .loc_0x68

	.loc_0x60:
	  li        r0, 0
	  stw       r0, 0x2C(r31)

	.loc_0x68:
	  lwz       r0, 0x244(r1)
	  lwz       r31, 0x23C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x240
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801CCF50
 * Size:	0000AC
 */
void Game::BaseItemMgr::loadBmd((char*, int, unsigned long))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stmw      r27, 0xC(r1)
	  mr.       r29, r5
	  lis       r5, 0x8048
	  mr        r27, r3
	  mr        r28, r4
	  mr        r31, r6
	  addi      r30, r5, 0x390
	  li        r3, 0
	  blt-      .loc_0x40
	  lwz       r0, 0x18(r27)
	  cmpw      r29, r0
	  bge-      .loc_0x40
	  li        r3, 0x1

	.loc_0x40:
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x5C
	  addi      r3, r30, 0
	  addi      r5, r30, 0x40
	  li        r4, 0x2BE
	  crclr     6, 0x6
	  bl        -0x1A2968

	.loc_0x5C:
	  mr        r3, r28
	  li        r4, 0
	  bl        -0x1A9F9C
	  mr        r4, r31
	  bl        -0x15D728
	  mr.       r31, r3
	  bne-      .loc_0x8C
	  addi      r3, r30, 0
	  addi      r5, r30, 0x58
	  li        r4, 0x2C4
	  crclr     6, 0x6
	  bl        -0x1A2998

	.loc_0x8C:
	  lwz       r3, 0x1C(r27)
	  rlwinm    r0,r29,2,0,29
	  stwx      r31, r3, r0
	  lmw       r27, 0xC(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000A8
 */
void Game::BaseItemMgr::loadBdl((char*, int, unsigned long))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000084
 */
void Game::BaseItemMgr::loadAnimMgr((char*))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00004C
 */
void Game::BaseItemMgr::loadCollision((char*))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801CCFFC
 * Size:	000080
 */
void Game::BaseItemMgr::loadAnimMgr((JKRFileLoader*, char*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r5
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  lwz       r7, 0x1C(r3)
	  lwz       r6, 0x2C(r3)
	  mr        r3, r4
	  lwz       r5, 0x0(r7)
	  mr        r4, r31
	  li        r7, 0
	  bl        0x270D2C
	  stw       r3, 0x20(r30)
	  lwz       r0, 0x20(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0x68
	  lis       r3, 0x8048
	  lis       r4, 0x8048
	  addi      r5, r4, 0x3F8
	  mr        r6, r31
	  addi      r3, r3, 0x390
	  li        r4, 0x2F1
	  crclr     6, 0x6
	  bl        -0x1A2A20

	.loc_0x68:
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
 * Address:	801CD07C
 * Size:	000038
 */
void Game::BaseItemMgr::loadCollision((JKRFileLoader*, char*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  mr        r3, r4
	  mr        r4, r5
	  bl        -0x94754
	  stw       r3, 0x24(r31)
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801CD0B4
 * Size:	000038
 */
void Game::BaseItemMgr::generatorNewItemParm(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r3, 0x4
	  stw       r0, 0x14(r1)
	  bl        -0x1A9220
	  cmplwi    r3, 0
	  beq-      .loc_0x28
	  lis       r4, 0x804B
	  addi      r0, r4, 0x2624
	  stw       r0, 0x0(r3)

	.loc_0x28:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801CD0EC
 * Size:	000064
 */
void Game::BaseItemMgr::generatorGetShape((Game::GenItemParm*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  mr        r3, r4
	  lwz       r12, 0x0(r4)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  cmpwi     r3, 0
	  blt-      .loc_0x4C
	  lwz       r0, 0x18(r31)
	  cmpw      r3, r0
	  bge-      .loc_0x4C
	  lwz       r4, 0x1C(r31)
	  rlwinm    r0,r3,2,0,29
	  lwzx      r3, r4, r0
	  b         .loc_0x50

	.loc_0x4C:
	  li        r3, 0

	.loc_0x50:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801CD150
 * Size:	00007C
 */
void Game::BaseItemMgr::getModelData((int))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr.       r31, r4
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  li        r3, 0
	  blt-      .loc_0x34
	  lwz       r0, 0x18(r30)
	  cmpw      r31, r0
	  bge-      .loc_0x34
	  li        r3, 0x1

	.loc_0x34:
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x58
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  addi      r3, r3, 0x390
	  li        r4, 0x318
	  addi      r5, r5, 0x3D0
	  crclr     6, 0x6
	  bl        -0x1A2B64

	.loc_0x58:
	  lwz       r3, 0x1C(r30)
	  rlwinm    r0,r31,2,0,29
	  lwzx      r3, r3, r0
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
 * Address:	........
 * Size:	000118
 */
void Game::BaseItemMgr::setup((char*, char*, char*, char*))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000064
 */
void Game::BaseItemMgr::loadPlatform((char*))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000F4
 */
void Game::BaseItemMgr::loadPlatAttacher((char*))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801CD1CC
 * Size:	000084
 */
void Game::BaseItemMgr::openTextArc((char*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x240(r1)
	  mflr      r0
	  mr        r6, r4
	  subi      r4, r2, 0x4D38
	  stw       r0, 0x244(r1)
	  stw       r31, 0x23C(r1)
	  mr        r31, r3
	  lwz       r5, 0x28(r3)
	  addi      r3, r1, 0x38
	  crclr     6, 0x6
	  bl        -0x105DBC
	  addi      r3, r1, 0x8
	  addi      r4, r1, 0x38
	  bl        0x27F3D8
	  lwz       r5, -0x77D4(r13)
	  li        r0, 0x2
	  stw       r0, 0x24(r1)
	  addi      r4, r1, 0x8
	  lwz       r3, -0x63D8(r13)
	  stw       r5, 0x20(r1)
	  bl        0x27F4F8
	  stw       r3, 0xC(r31)
	  lwz       r3, 0xC(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x6C
	  lwz       r3, 0x34(r3)
	  b         .loc_0x70

	.loc_0x6C:
	  li        r3, 0

	.loc_0x70:
	  lwz       r0, 0x244(r1)
	  lwz       r31, 0x23C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x240
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801CD250
 * Size:	000050
 */
void Game::BaseItemMgr::closeTextArc((JKRArchive*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r3, 0xC(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x34
	  lwz       r12, 0x0(r3)
	  li        r4, 0x1
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl

	.loc_0x34:
	  li        r0, 0
	  stw       r0, 0xC(r31)
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000F8
 */
void Game::BaseItemMgr::setup((JKRArchive*, char*, char*, char*, char*))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801CD2A0
 * Size:	000068
 */
void Game::BaseItemMgr::loadPlatform((JKRFileLoader*, char*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  li        r3, 0x1C
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  mr        r30, r5
	  stw       r29, 0x14(r1)
	  mr        r29, r4
	  bl        -0x1A9420
	  mr.       r31, r3
	  beq-      .loc_0x38
	  bl        -0x99C28
	  mr        r31, r3

	.loc_0x38:
	  mr        r3, r31
	  mr        r4, r29
	  mr        r5, r30
	  bl        -0x99B30
	  lwz       r0, 0x24(r1)
	  mr        r3, r31
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
 * Address:	801CD308
 * Size:	0000BC
 */
void Game::BaseItemMgr::loadPlatAttacher((JKRFileLoader*, char*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x440(r1)
	  mflr      r0
	  li        r3, 0xC
	  stw       r0, 0x444(r1)
	  stw       r31, 0x43C(r1)
	  stw       r30, 0x438(r1)
	  mr        r30, r5
	  stw       r29, 0x434(r1)
	  mr        r29, r4
	  bl        -0x1A9488
	  mr.       r31, r3
	  beq-      .loc_0x38
	  bl        -0x99AD8
	  mr        r31, r3

	.loc_0x38:
	  mr        r3, r30
	  mr        r4, r29
	  bl        -0x1AA330
	  cmplwi    r3, 0
	  bne-      .loc_0x70
	  lis       r3, 0x8048
	  lis       r4, 0x8048
	  addi      r5, r4, 0x418
	  mr        r6, r30
	  addi      r3, r3, 0x390
	  li        r4, 0x404
	  crclr     6, 0x6
	  bl        -0x1A2D30
	  b         .loc_0xA0

	.loc_0x70:
	  mr        r4, r3
	  addi      r3, r1, 0x8
	  li        r5, -0x1
	  bl        0x248574
	  li        r0, 0
	  stw       r0, 0x14(r1)
	  b         .loc_0x90
	  stw       r0, 0x41C(r1)

	.loc_0x90:
	  mr        r3, r31
	  addi      r4, r1, 0x8
	  bl        -0x99A68
	  mr        r3, r31

	.loc_0xA0:
	  lwz       r0, 0x444(r1)
	  lwz       r31, 0x43C(r1)
	  lwz       r30, 0x438(r1)
	  lwz       r29, 0x434(r1)
	  mtlr      r0
	  addi      r1, r1, 0x440
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000074
 */
void Game::BaseItemMgr::allocUseCounts((int))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000074
 */
void Game::BaseItemMgr::clearUseCounts(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000A4
 */
void Game::BaseItemMgr::getUseCount((int))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801CD3C4
 * Size:	00002C
 */
void Game::BaseItemMgr::updateUseList((Game::GenItemParm*, int))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x54(r12)
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
 * Address:	801CD3F0
 * Size:	00002C
 */
void Game::BaseItemMgr::loadResources(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x48(r12)
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
 * Address:	801CD41C
 * Size:	000004
 */
void Game::BaseItemMgr::setupSoundViewerAndBas(void)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801CD420
 * Size:	00014C
 */
void Game::TNodeItemMgr::__ct(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  extsh.    r0, r4
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  beq-      .loc_0x2C
	  addi      r0, r31, 0x88
	  stw       r0, 0x4(r31)

	.loc_0x2C:
	  lis       r3, 0x804B
	  lis       r4, 0x804B
	  subi      r0, r3, 0x4A10
	  lis       r3, 0x8048
	  stw       r0, 0x0(r31)
	  addi      r0, r4, 0x7374
	  addi      r29, r31, 0x30
	  li        r4, 0
	  stw       r0, 0x0(r31)
	  addi      r0, r3, 0x3DC
	  mr        r3, r29
	  stw       r4, 0x20(r31)
	  stw       r4, 0x24(r31)
	  stw       r4, 0x28(r31)
	  stw       r4, 0x2C(r31)
	  stw       r4, 0x1C(r31)
	  stw       r0, 0x8(r31)
	  stw       r4, 0xC(r31)
	  stw       r4, 0x10(r31)
	  stw       r4, 0x14(r31)
	  bl        0x243EF4
	  lis       r3, 0x804B
	  li        r5, 0
	  subi      r0, r3, 0x5324
	  addi      r30, r31, 0x4C
	  lis       r3, 0x804B
	  stw       r0, 0x0(r29)
	  addi      r0, r3, 0x7348
	  stw       r0, 0x0(r29)
	  lis       r3, 0x804B
	  addi      r4, r3, 0x7180
	  stb       r5, 0x18(r29)
	  addi      r0, r4, 0x74
	  mr        r3, r30
	  stw       r4, 0x0(r31)
	  stw       r0, 0x30(r31)
	  bl        0x243EB4
	  lis       r4, 0x804B
	  lis       r3, 0x804B
	  subi      r0, r4, 0x5324
	  lis       r5, 0x804B
	  stw       r0, 0x0(r30)
	  addi      r0, r3, 0x7348
	  lis       r4, 0x804B
	  lis       r3, 0x804B
	  stw       r0, 0x0(r30)
	  li        r0, 0
	  addi      r6, r4, 0x72CC
	  addi      r4, r3, 0x724C
	  stb       r0, 0x18(r30)
	  subi      r0, r5, 0x4A10
	  addi      r29, r30, 0x20
	  addi      r5, r6, 0x2C
	  stw       r0, 0x1C(r30)
	  addi      r0, r4, 0x2C
	  mr        r3, r29
	  stw       r6, 0x0(r30)
	  stw       r5, 0x1C(r30)
	  stw       r4, 0x0(r30)
	  stw       r0, 0x1C(r30)
	  bl        0x243E54
	  lis       r4, 0x804B
	  mr        r3, r31
	  addi      r0, r4, 0x723C
	  stw       r0, 0x0(r29)
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
 * Address:	801CD56C
 * Size:	0000C8
 */
void NodeObjectMgr<Game::BaseItem>::~NodeObjectMgr()
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
	  addic.    r0, r30, 0x20
	  addi      r3, r3, 0x724C
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x2C
	  stw       r0, 0x1C(r30)
	  beq-      .loc_0x54
	  lis       r4, 0x804B
	  addi      r3, r30, 0x20
	  addi      r0, r4, 0x723C
	  li        r4, 0
	  stw       r0, 0x20(r30)
	  bl        0x243FCC

	.loc_0x54:
	  cmplwi    r30, 0
	  beq-      .loc_0x9C
	  lis       r3, 0x804B
	  addi      r3, r3, 0x72CC
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x2C
	  stw       r0, 0x1C(r30)
	  beq-      .loc_0x9C
	  lis       r3, 0x804B
	  addi      r0, r3, 0x7348
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x9C
	  lis       r4, 0x804B
	  mr        r3, r30
	  subi      r0, r4, 0x5324
	  li        r4, 0
	  stw       r0, 0x0(r30)
	  bl        0x243F84

	.loc_0x9C:
	  extsh.    r0, r31
	  ble-      .loc_0xAC
	  mr        r3, r30
	  bl        -0x1A9560

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
 * Address:	801CD634
 * Size:	000060
 */
void TObjectNode<Game::BaseItem>::~TObjectNode()
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
	  addi      r0, r5, 0x723C
	  stw       r0, 0x0(r30)
	  bl        0x243F24
	  extsh.    r0, r31
	  ble-      .loc_0x44
	  mr        r3, r30
	  bl        -0x1A95C0

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
 * Address:	801CD694
 * Size:	000088
 */
void ObjectMgr<Game::BaseItem>::~ObjectMgr()
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
	  beq-      .loc_0x6C
	  lis       r4, 0x804B
	  addi      r4, r4, 0x72CC
	  stw       r4, 0x0(r30)
	  addi      r0, r4, 0x2C
	  stw       r0, 0x1C(r30)
	  beq-      .loc_0x5C
	  lis       r4, 0x804B
	  addi      r0, r4, 0x7348
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x5C
	  lis       r5, 0x804B
	  li        r4, 0
	  subi      r0, r5, 0x5324
	  stw       r0, 0x0(r30)
	  bl        0x243E9C

	.loc_0x5C:
	  extsh.    r0, r31
	  ble-      .loc_0x6C
	  mr        r3, r30
	  bl        -0x1A9648

	.loc_0x6C:
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
 * Address:	801CD71C
 * Size:	000070
 */
void Container<Game::BaseItem>::~Container()
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
	  lis       r4, 0x804B
	  addi      r0, r4, 0x7348
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x44
	  lis       r5, 0x804B
	  li        r4, 0
	  subi      r0, r5, 0x5324
	  stw       r0, 0x0(r30)
	  bl        0x243E2C

	.loc_0x44:
	  extsh.    r0, r31
	  ble-      .loc_0x54
	  mr        r3, r30
	  bl        -0x1A96B8

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
 * Address:	801CD78C
 * Size:	00009C
 */
void Game::TNodeItemMgr::birth(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xA0(r12)
	  mtctr     r12
	  bctrl
	  mr        r0, r3
	  li        r3, 0x1C
	  mr        r30, r0
	  stw       r29, 0x180(r30)
	  bl        -0x1A9924
	  mr.       r31, r3
	  beq-      .loc_0x58
	  bl        0x243BBC
	  lis       r3, 0x804B
	  addi      r0, r3, 0x723C
	  stw       r0, 0x0(r31)

	.loc_0x58:
	  stw       r30, 0x18(r31)
	  mr        r4, r31
	  addi      r3, r29, 0x6C
	  bl        0x243C18
	  lwz       r3, 0x18(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x24(r1)
	  mr        r3, r30
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
 * Address:	801CD828
 * Size:	000084
 */
void Game::TNodeItemMgr::entry((Game::BaseItem*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  mr        r30, r4
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  li        r3, 0x1C
	  stw       r29, 0x180(r4)
	  bl        -0x1A99AC
	  mr.       r31, r3
	  beq-      .loc_0x44
	  bl        0x243B34
	  lis       r3, 0x804B
	  addi      r0, r3, 0x723C
	  stw       r0, 0x0(r31)

	.loc_0x44:
	  stw       r30, 0x18(r31)
	  mr        r4, r31
	  addi      r3, r29, 0x6C
	  bl        0x243B90
	  lwz       r3, 0x18(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
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
 * Address:	801CD8AC
 * Size:	0001E8
 */
void Game::TNodeItemMgr::initDependency(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r4, 0x804B
	  addi      r3, r3, 0x4C
	  stw       r0, 0x24(r1)
	  li        r0, 0
	  addi      r4, r4, 0x560
	  cmplwi    r0, 0
	  stw       r4, 0x8(r1)
	  stw       r0, 0x14(r1)
	  stw       r0, 0xC(r1)
	  stw       r3, 0x10(r1)
	  bne-      .loc_0x4C
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1B8

	.loc_0x4C:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0xB8

	.loc_0x64:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x1B8
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0xB8:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x64
	  b         .loc_0x1B8

	.loc_0xD8:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1BC(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x128
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1B8

	.loc_0x128:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x19C

	.loc_0x148:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x1B8
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0x19C:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x148

	.loc_0x1B8:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0xC(r1)
	  cmplw     r4, r3
	  bne+      .loc_0xD8
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801CDA94
 * Size:	0000A8
 */
void Game::TNodeItemMgr::killAll(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  li        r31, 0x1
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  stw       r28, 0x10(r1)
	  mr        r28, r3
	  lis       r3, 0x804B
	  lwz       r29, 0x7C(r28)
	  subi      r30, r3, 0x5D30
	  b         .loc_0x80

	.loc_0x34:
	  lwz       r3, 0x18(r29)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1A8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r29, 0x18(r29)
	  addi      r4, r1, 0x8
	  stw       r30, 0x8(r1)
	  mr        r3, r29
	  stw       r31, 0xC(r1)
	  bl        -0x92A00
	  lwz       r4, 0x17C(r29)
	  cmplwi    r4, 0
	  beq-      .loc_0x7C
	  lwz       r3, -0x6E44(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x7C
	  bl        -0x1A6EE8

	.loc_0x7C:
	  lwz       r29, 0x7C(r28)

	.loc_0x80:
	  cmplwi    r29, 0
	  bne+      .loc_0x34
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  lwz       r28, 0x10(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801CDB3C
 * Size:	0000C4
 */
void Game::ItemMgr::__ct(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  stw       r30, 0x8(r1)
	  bl        0x24383C
	  lis       r4, 0x804B
	  lis       r3, 0x804B
	  subi      r0, r4, 0x5324
	  lis       r5, 0x804B
	  stw       r0, 0x0(r31)
	  addi      r0, r3, 0x1CB0
	  lis       r4, 0x804B
	  lis       r3, 0x804B
	  stw       r0, 0x0(r31)
	  li        r0, 0
	  addi      r6, r4, 0x1C34
	  addi      r4, r3, 0x1BB4
	  stb       r0, 0x18(r31)
	  subi      r0, r5, 0x4A10
	  addi      r30, r31, 0x20
	  addi      r5, r6, 0x2C
	  stw       r0, 0x1C(r31)
	  addi      r0, r4, 0x2C
	  mr        r3, r30
	  stw       r6, 0x0(r31)
	  stw       r5, 0x1C(r31)
	  stw       r4, 0x0(r31)
	  stw       r0, 0x1C(r31)
	  bl        0x2437DC
	  lis       r3, 0x804B
	  lis       r4, 0x804B
	  addi      r0, r3, 0x1BA4
	  lis       r3, 0x8048
	  stw       r0, 0x0(r30)
	  addi      r5, r4, 0x70F8
	  addi      r4, r5, 0x2C
	  addi      r0, r3, 0x438
	  stw       r5, 0x0(r31)
	  mr        r3, r31
	  stw       r4, 0x1C(r31)
	  stw       r0, 0x14(r31)
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
 * Address:	801CDC00
 * Size:	0000E8
 */
void Game::ItemMgr::__dt(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr.       r31, r3
	  stw       r30, 0x8(r1)
	  mr        r30, r4
	  beq-      .loc_0xCC
	  lis       r4, 0x804B
	  addi      r4, r4, 0x70F8
	  stw       r4, 0x0(r31)
	  addi      r0, r4, 0x2C
	  stw       r0, 0x1C(r31)
	  bl        0x175C8
	  cmplwi    r31, 0
	  beq-      .loc_0xBC
	  lis       r3, 0x804B
	  addic.    r0, r31, 0x20
	  addi      r3, r3, 0x1BB4
	  stw       r3, 0x0(r31)
	  addi      r0, r3, 0x2C
	  stw       r0, 0x1C(r31)
	  beq-      .loc_0x74
	  lis       r4, 0x804B
	  addi      r3, r31, 0x20
	  addi      r0, r4, 0x1BA4
	  li        r4, 0
	  stw       r0, 0x20(r31)
	  bl        0x243918

	.loc_0x74:
	  cmplwi    r31, 0
	  beq-      .loc_0xBC
	  lis       r3, 0x804B
	  addi      r3, r3, 0x1C34
	  stw       r3, 0x0(r31)
	  addi      r0, r3, 0x2C
	  stw       r0, 0x1C(r31)
	  beq-      .loc_0xBC
	  lis       r3, 0x804B
	  addi      r0, r3, 0x1CB0
	  stw       r0, 0x0(r31)
	  beq-      .loc_0xBC
	  lis       r4, 0x804B
	  mr        r3, r31
	  subi      r0, r4, 0x5324
	  li        r4, 0
	  stw       r0, 0x0(r31)
	  bl        0x2438D0

	.loc_0xBC:
	  extsh.    r0, r30
	  ble-      .loc_0xCC
	  mr        r3, r31
	  bl        -0x1A9C14

	.loc_0xCC:
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
 * Address:	801CDCE8
 * Size:	00006C
 */
void Game::ItemMgr::addMgr((Game::BaseItemMgr*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  mr        r30, r4
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  li        r3, 0x1C
	  bl        -0x1A9E68
	  mr.       r31, r3
	  beq-      .loc_0x40
	  bl        0x243678
	  lis       r3, 0x804B
	  addi      r0, r3, 0x1BA4
	  stw       r0, 0x0(r31)

	.loc_0x40:
	  stw       r30, 0x18(r31)
	  mr        r4, r31
	  addi      r3, r29, 0x20
	  bl        0x2436D4
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
 * Address:	801CDD54
 * Size:	0001E4
 */
void Game::ItemMgr::initDependency(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r4, 0x804B
	  stw       r0, 0x24(r1)
	  li        r0, 0
	  addi      r4, r4, 0x1B5C
	  cmplwi    r0, 0
	  stw       r0, 0x14(r1)
	  stw       r4, 0x8(r1)
	  stw       r0, 0xC(r1)
	  stw       r3, 0x10(r1)
	  bne-      .loc_0x48
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1B4

	.loc_0x48:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0xB4

	.loc_0x60:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x1B4
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0xB4:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x60
	  b         .loc_0x1B4

	.loc_0xD4:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x38(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x124
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1B4

	.loc_0x124:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x198

	.loc_0x144:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x1B4
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0x198:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x144

	.loc_0x1B4:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0xC(r1)
	  cmplw     r4, r3
	  bne+      .loc_0xD4
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801CDF38
 * Size:	0001E4
 */
void Game::ItemMgr::doAnimation(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r4, 0x804B
	  stw       r0, 0x24(r1)
	  li        r0, 0
	  addi      r4, r4, 0x1B5C
	  cmplwi    r0, 0
	  stw       r0, 0x14(r1)
	  stw       r4, 0x8(r1)
	  stw       r0, 0xC(r1)
	  stw       r3, 0x10(r1)
	  bne-      .loc_0x48
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1B4

	.loc_0x48:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0xB4

	.loc_0x60:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x1B4
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0xB4:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x60
	  b         .loc_0x1B4

	.loc_0xD4:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x124
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1B4

	.loc_0x124:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x198

	.loc_0x144:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x1B4
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0x198:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x144

	.loc_0x1B4:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0xC(r1)
	  cmplw     r4, r3
	  bne+      .loc_0xD4
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801CE11C
 * Size:	0001E4
 */
void Game::ItemMgr::doEntry(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r4, 0x804B
	  stw       r0, 0x24(r1)
	  li        r0, 0
	  addi      r4, r4, 0x1B5C
	  cmplwi    r0, 0
	  stw       r0, 0x14(r1)
	  stw       r4, 0x8(r1)
	  stw       r0, 0xC(r1)
	  stw       r3, 0x10(r1)
	  bne-      .loc_0x48
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1B4

	.loc_0x48:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0xB4

	.loc_0x60:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x1B4
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0xB4:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x60
	  b         .loc_0x1B4

	.loc_0xD4:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x124
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1B4

	.loc_0x124:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x198

	.loc_0x144:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x1B4
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0x198:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x144

	.loc_0x1B4:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0xC(r1)
	  cmplw     r4, r3
	  bne+      .loc_0xD4
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801CE300
 * Size:	0001F4
 */
void Game::ItemMgr::doSetView((int))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r5, 0x804B
	  stw       r0, 0x24(r1)
	  li        r0, 0
	  addi      r5, r5, 0x1B5C
	  stw       r31, 0x1C(r1)
	  cmplwi    r0, 0
	  mr        r31, r4
	  stw       r0, 0x14(r1)
	  stw       r5, 0x8(r1)
	  stw       r0, 0xC(r1)
	  stw       r3, 0x10(r1)
	  bne-      .loc_0x50
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1C0

	.loc_0x50:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0xBC

	.loc_0x68:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x1C0
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0xBC:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x68
	  b         .loc_0x1C0

	.loc_0xDC:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  mr        r4, r31
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x130
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1C0

	.loc_0x130:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1A4

	.loc_0x150:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x1C0
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0x1A4:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x150

	.loc_0x1C0:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0xC(r1)
	  cmplw     r4, r3
	  bne+      .loc_0xDC
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801CE4F4
 * Size:	0001E4
 */
void Game::ItemMgr::doViewCalc(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r4, 0x804B
	  stw       r0, 0x24(r1)
	  li        r0, 0
	  addi      r4, r4, 0x1B5C
	  cmplwi    r0, 0
	  stw       r0, 0x14(r1)
	  stw       r4, 0x8(r1)
	  stw       r0, 0xC(r1)
	  stw       r3, 0x10(r1)
	  bne-      .loc_0x48
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1B4

	.loc_0x48:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0xB4

	.loc_0x60:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x1B4
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0xB4:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x60
	  b         .loc_0x1B4

	.loc_0xD4:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x124
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1B4

	.loc_0x124:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x198

	.loc_0x144:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x1B4
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0x198:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x144

	.loc_0x1B4:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0xC(r1)
	  cmplw     r4, r3
	  bne+      .loc_0xD4
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801CE6D8
 * Size:	0001F4
 */
void Game::ItemMgr::doSimulation((float))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r4, 0x804B
	  stw       r0, 0x24(r1)
	  li        r0, 0
	  addi      r4, r4, 0x1B5C
	  stfd      f31, 0x18(r1)
	  fmr       f31, f1
	  cmplwi    r0, 0
	  stw       r4, 0x8(r1)
	  stw       r0, 0x14(r1)
	  stw       r0, 0xC(r1)
	  stw       r3, 0x10(r1)
	  bne-      .loc_0x50
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1C0

	.loc_0x50:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0xBC

	.loc_0x68:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x1C0
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0xBC:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x68
	  b         .loc_0x1C0

	.loc_0xDC:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  fmr       f1, f31
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x130
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1C0

	.loc_0x130:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1A4

	.loc_0x150:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x1C0
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0x1A4:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x150

	.loc_0x1C0:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0xC(r1)
	  cmplw     r4, r3
	  bne+      .loc_0xDC
	  lwz       r0, 0x24(r1)
	  lfd       f31, 0x18(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801CE8CC
 * Size:	000004
 */
void Game::ItemMgr::doDirectDraw((Graphics&))
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801CE8D0
 * Size:	0001F4
 */
void Game::ItemMgr::doSimpleDraw((Viewport*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r5, 0x804B
	  stw       r0, 0x24(r1)
	  li        r0, 0
	  addi      r5, r5, 0x1B5C
	  stw       r31, 0x1C(r1)
	  cmplwi    r0, 0
	  mr        r31, r4
	  stw       r0, 0x14(r1)
	  stw       r5, 0x8(r1)
	  stw       r0, 0xC(r1)
	  stw       r3, 0x10(r1)
	  bne-      .loc_0x50
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1C0

	.loc_0x50:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0xBC

	.loc_0x68:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x1C0
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0xBC:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x68
	  b         .loc_0x1C0

	.loc_0xDC:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  mr        r4, r31
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x130
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1C0

	.loc_0x130:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1A4

	.loc_0x150:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x1C0
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0x1A4:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x150

	.loc_0x1C0:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0xC(r1)
	  cmplw     r4, r3
	  bne+      .loc_0xDC
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801CEAC4
 * Size:	0001E4
 */
void Game::ItemMgr::setupSoundViewerAndBas(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r4, 0x804B
	  stw       r0, 0x24(r1)
	  li        r0, 0
	  addi      r4, r4, 0x1B5C
	  cmplwi    r0, 0
	  stw       r0, 0x14(r1)
	  stw       r4, 0x8(r1)
	  stw       r0, 0xC(r1)
	  stw       r3, 0x10(r1)
	  bne-      .loc_0x48
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1B4

	.loc_0x48:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0xB4

	.loc_0x60:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x1B4
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0xB4:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x60
	  b         .loc_0x1B4

	.loc_0xD4:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x44(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x124
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1B4

	.loc_0x124:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x198

	.loc_0x144:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x1B4
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0x198:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x144

	.loc_0x1B4:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0xC(r1)
	  cmplw     r4, r3
	  bne+      .loc_0xD4
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801CECA8
 * Size:	0001E4
 */
void Game::ItemMgr::loadResources(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r4, 0x804B
	  stw       r0, 0x24(r1)
	  li        r0, 0
	  addi      r4, r4, 0x1B5C
	  cmplwi    r0, 0
	  stw       r0, 0x14(r1)
	  stw       r4, 0x8(r1)
	  stw       r0, 0xC(r1)
	  stw       r3, 0x10(r1)
	  bne-      .loc_0x48
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1B4

	.loc_0x48:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0xB4

	.loc_0x60:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x1B4
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0xB4:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x60
	  b         .loc_0x1B4

	.loc_0xD4:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x124
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1B4

	.loc_0x124:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x198

	.loc_0x144:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x1B4
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0x198:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x144

	.loc_0x1B4:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0xC(r1)
	  cmplw     r4, r3
	  bne+      .loc_0xD4
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801CEE8C
 * Size:	000204
 */
void Game::ItemMgr::getIndexByMgr((Game::BaseItemMgr*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r5, 0x804B
	  stw       r0, 0x24(r1)
	  li        r0, 0
	  addi      r5, r5, 0x1B5C
	  stw       r31, 0x1C(r1)
	  cmplwi    r0, 0
	  li        r31, 0
	  stw       r30, 0x18(r1)
	  mr        r30, r4
	  stw       r0, 0x14(r1)
	  stw       r5, 0x8(r1)
	  stw       r0, 0xC(r1)
	  stw       r3, 0x10(r1)
	  bne-      .loc_0x58
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1C8

	.loc_0x58:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0xC4

	.loc_0x70:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x1C8
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0xC4:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x70
	  b         .loc_0x1C8

	.loc_0xE4:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  cmplw     r3, r30
	  bne-      .loc_0x108
	  mr        r3, r31
	  b         .loc_0x1EC

	.loc_0x108:
	  lwz       r0, 0x14(r1)
	  addi      r31, r31, 0x1
	  cmplwi    r0, 0
	  bne-      .loc_0x138
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1C8

	.loc_0x138:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1AC

	.loc_0x158:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x1C8
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0x1AC:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x158

	.loc_0x1C8:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0xC(r1)
	  cmplw     r4, r3
	  bne+      .loc_0xE4
	  li        r3, -0x1

	.loc_0x1EC:
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
 * Address:	801CF090
 * Size:	000200
 */
void Game::ItemMgr::getMgrByIndex((int))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r5, 0x804B
	  stw       r0, 0x24(r1)
	  li        r0, 0
	  addi      r5, r5, 0x1B5C
	  stw       r31, 0x1C(r1)
	  cmplwi    r0, 0
	  li        r31, 0
	  stw       r30, 0x18(r1)
	  mr        r30, r4
	  stw       r0, 0x14(r1)
	  stw       r5, 0x8(r1)
	  stw       r0, 0xC(r1)
	  stw       r3, 0x10(r1)
	  bne-      .loc_0x58
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1C4

	.loc_0x58:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0xC4

	.loc_0x70:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x1C4
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0xC4:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x70
	  b         .loc_0x1C4

	.loc_0xE4:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  cmpw      r31, r30
	  bne-      .loc_0x104
	  b         .loc_0x1E8

	.loc_0x104:
	  lwz       r0, 0x14(r1)
	  addi      r31, r31, 0x1
	  cmplwi    r0, 0
	  bne-      .loc_0x134
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1C4

	.loc_0x134:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1A8

	.loc_0x154:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x1C4
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0x1A8:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x154

	.loc_0x1C4:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0xC(r1)
	  cmplw     r4, r3
	  bne+      .loc_0xE4
	  li        r3, 0

	.loc_0x1E8:
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
 * Address:	801CF290
 * Size:	000224
 */
void Game::ItemMgr::getMgrByID((ID32&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r5, 0x804B
	  stw       r0, 0x24(r1)
	  li        r0, 0
	  addi      r5, r5, 0x1B5C
	  stw       r31, 0x1C(r1)
	  cmplwi    r0, 0
	  stw       r30, 0x18(r1)
	  mr        r30, r4
	  stw       r0, 0x14(r1)
	  stw       r5, 0x8(r1)
	  stw       r0, 0xC(r1)
	  stw       r3, 0x10(r1)
	  bne-      .loc_0x54
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1E8

	.loc_0x54:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0xC0

	.loc_0x6C:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x1E8
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0xC0:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x6C
	  b         .loc_0x1E8

	.loc_0xE0:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  mr        r0, r3
	  mr        r31, r0
	  lwz       r12, 0x58(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  mr        r3, r30
	  li        r5, 0x2A
	  bl        0x243F54
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x12C
	  mr        r3, r31
	  b         .loc_0x20C

	.loc_0x12C:
	  lwz       r0, 0x14(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x158
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1E8

	.loc_0x158:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1CC

	.loc_0x178:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x1E8
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0x1CC:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x178

	.loc_0x1E8:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0xC(r1)
	  cmplw     r4, r3
	  bne+      .loc_0xE0
	  li        r3, 0

	.loc_0x20C:
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
 * Address:	801CF4B4
 * Size:	00011C
 */
void Game::TNodeItemMgr::__dt(void)
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
	  beq-      .loc_0x100
	  lis       r3, 0x804B
	  addic.    r0, r30, 0x4C
	  addi      r3, r3, 0x7180
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x74
	  stw       r0, 0x30(r30)
	  beq-      .loc_0xBC
	  lis       r4, 0x804B
	  addic.    r3, r30, 0x6C
	  addi      r4, r4, 0x724C
	  stw       r4, 0x4C(r30)
	  addi      r0, r4, 0x2C
	  stw       r0, 0x68(r30)
	  beq-      .loc_0x6C
	  lis       r4, 0x804B
	  addi      r0, r4, 0x723C
	  stw       r0, 0x6C(r30)
	  li        r4, 0
	  bl        0x24206C

	.loc_0x6C:
	  addic.    r0, r30, 0x4C
	  beq-      .loc_0xBC
	  lis       r3, 0x804B
	  addic.    r0, r30, 0x4C
	  addi      r3, r3, 0x72CC
	  stw       r3, 0x4C(r30)
	  addi      r0, r3, 0x2C
	  stw       r0, 0x68(r30)
	  beq-      .loc_0xBC
	  lis       r3, 0x804B
	  addic.    r0, r30, 0x4C
	  addi      r0, r3, 0x7348
	  stw       r0, 0x4C(r30)
	  beq-      .loc_0xBC
	  lis       r4, 0x804B
	  addi      r3, r30, 0x4C
	  subi      r0, r4, 0x5324
	  li        r4, 0
	  stw       r0, 0x4C(r30)
	  bl        0x24201C

	.loc_0xBC:
	  addic.    r0, r30, 0x30
	  beq-      .loc_0xF0
	  lis       r3, 0x804B
	  addic.    r0, r30, 0x30
	  addi      r0, r3, 0x7348
	  stw       r0, 0x30(r30)
	  beq-      .loc_0xF0
	  lis       r4, 0x804B
	  addi      r3, r30, 0x30
	  subi      r0, r4, 0x5324
	  li        r4, 0
	  stw       r0, 0x30(r30)
	  bl        0x241FE8

	.loc_0xF0:
	  extsh.    r0, r31
	  ble-      .loc_0x100
	  mr        r3, r30
	  bl        -0x1AB4FC

	.loc_0x100:
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
 * Address:	801CF5D0
 * Size:	000024
 */
void Game::TNodeItemMgr::kill((Game::BaseItem*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  addi      r3, r3, 0x4C
	  stw       r0, 0x14(r1)
	  bl        0x204
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801CF5F4
 * Size:	00002C
 */
void Game::TNodeItemMgr::doAnimation(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwzu      r12, 0x4C(r3)
	  lwz       r12, 0x64(r12)
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
 * Address:	801CF620
 * Size:	00002C
 */
void Game::TNodeItemMgr::doEntry(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwzu      r12, 0x4C(r3)
	  lwz       r12, 0x68(r12)
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
 * Address:	801CF64C
 * Size:	00002C
 */
void Game::TNodeItemMgr::doSetView((int))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwzu      r12, 0x4C(r3)
	  lwz       r12, 0x6C(r12)
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
 * Address:	801CF678
 * Size:	00002C
 */
void Game::TNodeItemMgr::doViewCalc(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwzu      r12, 0x4C(r3)
	  lwz       r12, 0x70(r12)
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
 * Address:	801CF6A4
 * Size:	00002C
 */
void Game::TNodeItemMgr::doSimulation((float))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwzu      r12, 0x4C(r3)
	  lwz       r12, 0x74(r12)
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
 * Address:	801CF6D0
 * Size:	00002C
 */
void Game::TNodeItemMgr::doDirectDraw((Graphics&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwzu      r12, 0x4C(r3)
	  lwz       r12, 0x78(r12)
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
 * Address:	801CF6FC
 * Size:	00002C
 */
void Game::TNodeItemMgr::getEnd(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwzu      r12, 0x4C(r3)
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
 * Address:	801CF728
 * Size:	000008
 */
void NodeObjectMgr<Game::BaseItem>::getEnd()
{
	/*
	.loc_0x0:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801CF730
 * Size:	00002C
 */
void Game::TNodeItemMgr::getStart(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwzu      r12, 0x4C(r3)
	  lwz       r12, 0x18(r12)
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
 * Address:	801CF75C
 * Size:	000008
 */
void NodeObjectMgr<Game::BaseItem>::getStart()
{
	/*
	.loc_0x0:
	  lwz       r3, 0x30(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801CF764
 * Size:	00002C
 */
void Game::TNodeItemMgr::getNext((void*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwzu      r12, 0x4C(r3)
	  lwz       r12, 0x14(r12)
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
 * Address:	801CF790
 * Size:	000008
 */
void NodeObjectMgr<Game::BaseItem>::getNext(void*)
{
	/*
	.loc_0x0:
	  lwz       r3, 0x4(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801CF798
 * Size:	00002C
 */
void Game::TNodeItemMgr::get((void*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwzu      r12, 0x4C(r3)
	  lwz       r12, 0x20(r12)
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
 * Address:	801CF7C4
 * Size:	000008
 */
void NodeObjectMgr<Game::BaseItem>::get(void*)
{
	/*
	.loc_0x0:
	  lwz       r3, 0x18(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801CF7CC
 * Size:	000004
 */
void Game::BaseItemMgr::doAnimation(void)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801CF7D0
 * Size:	000004
 */
void Game::BaseItemMgr::doEntry(void)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801CF7D4
 * Size:	000004
 */
void Game::BaseItemMgr::doSetView((int))
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801CF7D8
 * Size:	000004
 */
void Game::BaseItemMgr::doViewCalc(void)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801CF7DC
 * Size:	000004
 */
void Game::BaseItemMgr::doSimulation((float))
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801CF7E0
 * Size:	000004
 */
void Game::BaseItemMgr::doDirectDraw((Graphics&))
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801CF7E4
 * Size:	000044
 */
void NodeObjectMgr<Game::BaseItem>::delNode(Game::BaseItem*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x30(r3)
	  b         .loc_0x2C

	.loc_0x14:
	  lwz       r0, 0x18(r3)
	  cmplw     r0, r4
	  bne-      .loc_0x28
	  bl        0x241DCC
	  b         .loc_0x34

	.loc_0x28:
	  lwz       r3, 0x4(r3)

	.loc_0x2C:
	  cmplwi    r3, 0
	  bne+      .loc_0x14

	.loc_0x34:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801CF828
 * Size:	000018
 */
void NodeObjectMgr<Game::BaseItem>::resetMgr()
{
	/*
	.loc_0x0:
	  li        r0, 0
	  stw       r0, 0x30(r3)
	  stw       r0, 0x2C(r3)
	  stw       r0, 0x28(r3)
	  stw       r0, 0x24(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801CF840
 * Size:	0001E4
 */
void ObjectMgr<Game::BaseItem>::doAnimation()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r4, 0x804B
	  stw       r0, 0x24(r1)
	  li        r0, 0
	  addi      r4, r4, 0x560
	  cmplwi    r0, 0
	  stw       r0, 0x14(r1)
	  stw       r4, 0x8(r1)
	  stw       r0, 0xC(r1)
	  stw       r3, 0x10(r1)
	  bne-      .loc_0x48
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1B4

	.loc_0x48:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0xB4

	.loc_0x60:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x1B4
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0xB4:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x60
	  b         .loc_0x1B4

	.loc_0xD4:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x124
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1B4

	.loc_0x124:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x198

	.loc_0x144:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x1B4
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0x198:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x144

	.loc_0x1B4:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0xC(r1)
	  cmplw     r4, r3
	  bne+      .loc_0xD4
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801CFA24
 * Size:	0001E4
 */
void ObjectMgr<Game::BaseItem>::doEntry()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r4, 0x804B
	  stw       r0, 0x24(r1)
	  li        r0, 0
	  addi      r4, r4, 0x560
	  cmplwi    r0, 0
	  stw       r0, 0x14(r1)
	  stw       r4, 0x8(r1)
	  stw       r0, 0xC(r1)
	  stw       r3, 0x10(r1)
	  bne-      .loc_0x48
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1B4

	.loc_0x48:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0xB4

	.loc_0x60:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x1B4
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0xB4:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x60
	  b         .loc_0x1B4

	.loc_0xD4:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x40(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x124
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1B4

	.loc_0x124:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x198

	.loc_0x144:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x1B4
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0x198:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x144

	.loc_0x1B4:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0xC(r1)
	  cmplw     r4, r3
	  bne+      .loc_0xD4
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801CFC08
 * Size:	0001F4
 */
void ObjectMgr<Game::BaseItem>::doSetView(int)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r5, 0x804B
	  stw       r0, 0x24(r1)
	  li        r0, 0
	  addi      r5, r5, 0x560
	  stw       r31, 0x1C(r1)
	  cmplwi    r0, 0
	  mr        r31, r4
	  stw       r0, 0x14(r1)
	  stw       r5, 0x8(r1)
	  stw       r0, 0xC(r1)
	  stw       r3, 0x10(r1)
	  bne-      .loc_0x50
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1C0

	.loc_0x50:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0xBC

	.loc_0x68:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x1C0
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0xBC:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x68
	  b         .loc_0x1C0

	.loc_0xDC:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  mr        r4, r31
	  lwz       r12, 0x44(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x130
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1C0

	.loc_0x130:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1A4

	.loc_0x150:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x1C0
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0x1A4:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x150

	.loc_0x1C0:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0xC(r1)
	  cmplw     r4, r3
	  bne+      .loc_0xDC
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801CFDFC
 * Size:	0001E4
 */
void ObjectMgr<Game::BaseItem>::doViewCalc()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r4, 0x804B
	  stw       r0, 0x24(r1)
	  li        r0, 0
	  addi      r4, r4, 0x560
	  cmplwi    r0, 0
	  stw       r0, 0x14(r1)
	  stw       r4, 0x8(r1)
	  stw       r0, 0xC(r1)
	  stw       r3, 0x10(r1)
	  bne-      .loc_0x48
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1B4

	.loc_0x48:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0xB4

	.loc_0x60:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x1B4
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0xB4:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x60
	  b         .loc_0x1B4

	.loc_0xD4:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x48(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x124
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1B4

	.loc_0x124:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x198

	.loc_0x144:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x1B4
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0x198:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x144

	.loc_0x1B4:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0xC(r1)
	  cmplw     r4, r3
	  bne+      .loc_0xD4
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801CFFE0
 * Size:	0001F4
 */
void ObjectMgr<Game::BaseItem>::doSimulation(float)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r4, 0x804B
	  stw       r0, 0x24(r1)
	  li        r0, 0
	  addi      r4, r4, 0x560
	  stfd      f31, 0x18(r1)
	  fmr       f31, f1
	  cmplwi    r0, 0
	  stw       r4, 0x8(r1)
	  stw       r0, 0x14(r1)
	  stw       r0, 0xC(r1)
	  stw       r3, 0x10(r1)
	  bne-      .loc_0x50
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1C0

	.loc_0x50:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0xBC

	.loc_0x68:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x1C0
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0xBC:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x68
	  b         .loc_0x1C0

	.loc_0xDC:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  fmr       f1, f31
	  lwz       r12, 0x4C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x130
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1C0

	.loc_0x130:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1A4

	.loc_0x150:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x1C0
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0x1A4:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x150

	.loc_0x1C0:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0xC(r1)
	  cmplw     r4, r3
	  bne+      .loc_0xDC
	  lwz       r0, 0x24(r1)
	  lfd       f31, 0x18(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801D01D4
 * Size:	0001F4
 */
void ObjectMgr<Game::BaseItem>::doDirectDraw(Graphics&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r5, 0x804B
	  stw       r0, 0x24(r1)
	  li        r0, 0
	  addi      r5, r5, 0x560
	  stw       r31, 0x1C(r1)
	  cmplwi    r0, 0
	  mr        r31, r4
	  stw       r0, 0x14(r1)
	  stw       r5, 0x8(r1)
	  stw       r0, 0xC(r1)
	  stw       r3, 0x10(r1)
	  bne-      .loc_0x50
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1C0

	.loc_0x50:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0xBC

	.loc_0x68:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x1C0
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0xBC:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x68
	  b         .loc_0x1C0

	.loc_0xDC:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  mr        r4, r31
	  lwz       r12, 0x50(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x130
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1C0

	.loc_0x130:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1A4

	.loc_0x150:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x1C0
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0x1A4:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x150

	.loc_0x1C0:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0xC(r1)
	  cmplw     r4, r3
	  bne+      .loc_0xDC
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801D03C8
 * Size:	00002C
 */
void Container<Game::BaseItem>::getObject(void*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
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
 * Address:	801D03F4
 * Size:	000008
 */
void Container<Game::BaseItem>::getAt(int)
{
	/*
	.loc_0x0:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801D03FC
 * Size:	000008
 */
void Container<Game::BaseItem>::getTo()
{
	/*
	.loc_0x0:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801D0404
 * Size:	000038
 */
void exec__Q24Game30StateMachine<Game::CFSMItem> FPQ24Game8CFSMItem(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x1DC(r4)
	  cmplwi    r3, 0
	  beq-      .loc_0x28
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl

	.loc_0x28:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801D043C
 * Size:	000004
 */
void exec__Q24Game26FSMState<Game::CFSMItem> FPQ24Game8CFSMItem(void)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801D0440
 * Size:	000008
 */
void @376 @Game::CFSMItem::onKeyEvent((SysShape::KeyEvent const&))
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x178
	  b         -0x3914
	*/
}

/*
 * --INFO--
 * Address:	801D0448
 * Size:	000008
 */
void NodeObjectMgr<Game::BaseItem>::@28 @resetMgr()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x1C
	  b         -0xC24
	*/
}

/*
 * --INFO--
 * Address:	801D0450
 * Size:	000008
 */
void ObjectMgr<Game::BaseItem>::@28 @doDirectDraw(Graphics&)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x1C
	  b         -0x280
	*/
}

/*
 * --INFO--
 * Address:	801D0458
 * Size:	000008
 */
void ObjectMgr<Game::BaseItem>::@28 @doSimulation(float)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x1C
	  b         -0x47C
	*/
}

/*
 * --INFO--
 * Address:	801D0460
 * Size:	000008
 */
void ObjectMgr<Game::BaseItem>::@28 @doViewCalc()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x1C
	  b         -0x668
	*/
}

/*
 * --INFO--
 * Address:	801D0468
 * Size:	000008
 */
void ObjectMgr<Game::BaseItem>::@28 @doSetView(int)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x1C
	  b         -0x864
	*/
}

/*
 * --INFO--
 * Address:	801D0470
 * Size:	000008
 */
void ObjectMgr<Game::BaseItem>::@28 @doEntry()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x1C
	  b         -0xA50
	*/
}

/*
 * --INFO--
 * Address:	801D0478
 * Size:	000008
 */
void ObjectMgr<Game::BaseItem>::@28 @doAnimation()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x1C
	  b         -0xC3C
	*/
}

/*
 * --INFO--
 * Address:	801D0480
 * Size:	000008
 */
void @48 @Game::TNodeItemMgr::getEnd(void)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x30
	  b         -0xD88
	*/
}

/*
 * --INFO--
 * Address:	801D0488
 * Size:	000008
 */
void @48 @Game::TNodeItemMgr::getStart(void)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x30
	  b         -0xD5C
	*/
}

/*
 * --INFO--
 * Address:	801D0490
 * Size:	000008
 */
void @48 @Game::TNodeItemMgr::getNext((void*))
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x30
	  b         -0xD30
	*/
}

/*
 * --INFO--
 * Address:	801D0498
 * Size:	000008
 */
void @48 @Game::TNodeItemMgr::get((void*))
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x30
	  b         -0xD04
	*/
}

/*
 * --INFO--
 * Address:	801D04A0
 * Size:	000008
 */
void @48 @Game::TNodeItemMgr::__dt(void)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x30
	  b         -0xFF0
	*/
}

/*
 * --INFO--
 * Address:	801D04A8
 * Size:	000008
 */
void @28 @Game::ItemMgr::loadResources(void)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x1C
	  b         -0x1804
	*/
}

/*
 * --INFO--
 * Address:	801D04B0
 * Size:	000008
 */
void @28 @Game::ItemMgr::doSimpleDraw((Viewport*))
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x1C
	  b         -0x1BE4
	*/
}

/*
 * --INFO--
 * Address:	801D04B8
 * Size:	000008
 */
void @28 @Game::ItemMgr::doDirectDraw((Graphics&))
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x1C
	  b         -0x1BF0
	*/
}

/*
 * --INFO--
 * Address:	801D04C0
 * Size:	000008
 */
void @28 @Game::ItemMgr::doSimulation((float))
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x1C
	  b         -0x1DEC
	*/
}

/*
 * --INFO--
 * Address:	801D04C8
 * Size:	000008
 */
void @28 @Game::ItemMgr::doViewCalc(void)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x1C
	  b         -0x1FD8
	*/
}

/*
 * --INFO--
 * Address:	801D04D0
 * Size:	000008
 */
void @28 @Game::ItemMgr::doSetView((int))
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x1C
	  b         -0x21D4
	*/
}

/*
 * --INFO--
 * Address:	801D04D8
 * Size:	000008
 */
void @28 @Game::ItemMgr::doEntry(void)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x1C
	  b         -0x23C0
	*/
}

/*
 * --INFO--
 * Address:	801D04E0
 * Size:	000008
 */
void @28 @Game::ItemMgr::doAnimation(void)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x1C
	  b         -0x25AC
	*/
}
