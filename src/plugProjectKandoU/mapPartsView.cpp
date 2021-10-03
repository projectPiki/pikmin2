

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
 * Address:	........
 * Size:	00000C
 */
void Game::PartsView::getHalfX(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0002B0
 */
void Game::PartsView::getOffset(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8023233C
 * Size:	000140
 */
void Game::PartsView::__ct(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  mr        r31, r3
  stw       r30, 0x18(r1)
  stw       r29, 0x14(r1)
  bl        0x1DF038
  lis       r3, 0x804C
  li        r0, 0
  addi      r4, r3, 0x1340
  addi      r3, r31, 0x70
  stw       r4, 0x0(r31)
  stb       r0, 0x6E(r31)
  stb       r0, 0x6F(r31)
  bl        -0xBDDE8
  li        r4, 0
  li        r0, -0x1
  stb       r4, 0xB0(r31)
  addi      r3, r31, 0x110
  sth       r0, 0xAE(r31)
  sth       r0, 0xAC(r31)
  stw       r4, -0x6C7C(r13)
  stw       r4, 0x10C(r31)
  bl        -0x8E7BC
  addi      r30, r31, 0x118
  mr        r3, r30
  bl        0x1DEFE8
  lis       r3, 0x804B
  addi      r29, r30, 0x20
  addi      r0, r3, 0x5CEC
  stw       r0, 0x0(r30)
  mr        r3, r29
  bl        0x1DEFD0
  lis       r3, 0x804B
  lfs       f0, -0x3FB8(r2)
  addi      r0, r3, 0x60D4
  li        r7, 0x1
  stw       r0, 0x0(r29)
  li        r6, 0
  li        r0, 0x8
  addi      r3, r31, 0xAC
  stfs      f0, 0x18(r29)
  addi      r4, r31, 0x70
  li        r5, 0x80
  stb       r7, 0x20(r29)
  stw       r6, 0x1C(r30)
  stw       r6, 0x44(r30)
  stw       r6, 0x48(r30)
  stw       r6, 0x18(r31)
  stw       r6, 0x1C(r31)
  stw       r0, 0x60(r31)
  stw       r0, 0x5C(r31)
  stw       r6, 0x58(r31)
  stfs      f0, 0x50(r31)
  stfs      f0, 0x54(r31)
  bl        -0x8E8B4
  addi      r3, r31, 0x110
  addi      r4, r31, 0xAC
  bl        -0x8E83C
  li        r3, 0x1
  li        r0, 0
  sth       r3, 0x6C(r31)
  li        r3, 0x38
  stb       r0, 0x6E(r31)
  stb       r0, 0x6F(r31)
  bl        -0x20E5A0
  mr.       r0, r3
  beq-      .loc_0x11C
  bl        -0x5C3AC
  mr        r0, r3

.loc_0x11C:
  stw       r0, 0x168(r31)
  mr        r3, r31
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
 * Address:	........
 * Size:	00015C
 */
void Game::PartsView::__ct( (Game::MapUnit *, unsigned char *))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8023247C
 * Size:	000004
 */
void Game::PartsView::doDirectDraw( (Graphics &))
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	80232480
 * Size:	000074
 */
void Game::PartsView::doAnimation(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  lwz       r3, 0x1C(r3)
  cmplwi    r3, 0
  beq-      .loc_0x60
  lwz       r4, 0x8(r3)
  addi      r3, r31, 0x20
  addi      r4, r4, 0x24
  bl        -0x1481E0
  lwz       r3, 0x1C(r31)
  lwz       r3, 0x8(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x1C(r31)
  lwz       r3, 0x8(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     

.loc_0x60:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802324F4
 * Size:	000004
 */
void Game::PartsView::doEntry(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	802324F8
 * Size:	00002C
 */
void Game::PartsView::doSetView( (int))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r3, 0x1C(r3)
  cmplwi    r3, 0
  beq-      .loc_0x1C
  bl        0x20CBB0

.loc_0x1C:
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80232524
 * Size:	00002C
 */
void Game::PartsView::doViewCalc(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r3, 0x1C(r3)
  cmplwi    r3, 0
  beq-      .loc_0x1C
  bl        0x20CB1C

.loc_0x1C:
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80232550
 * Size:	000158
 */
void Game::PartsView::read( (Stream &))
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stmw      r27, 0xC(r1)
  mr        r30, r3
  mr        r31, r4
  li        r3, 0xF0
  bl        -0x20E6C8
  mr.       r0, r3
  beq-      .loc_0x30
  bl        -0x7BFA8
  mr        r0, r3

.loc_0x30:
  stw       r0, 0x18(r30)
  mr        r3, r31
  bl        0x1E2508
  mr        r29, r3
  mr        r3, r31
  li        r4, 0
  li        r5, 0
  bl        0x1E2B38
  stw       r3, 0x14(r30)
  mr        r4, r31
  lwz       r5, 0x18(r30)
  stw       r3, 0x8(r5)
  lwz       r3, 0x18(r30)
  bl        -0x7BF08
  mr        r3, r31
  bl        0x1E21A8
  cmplwi    r29, 0x1
  sth       r3, 0x6C(r30)
  blt-      .loc_0xA4
  li        r28, 0
  addi      r29, r30, 0x6E

.loc_0x84:
  mr        r3, r31
  bl        0x1E1EC4
  addi      r28, r28, 0x1
  stb       r3, 0x0(r29)
  cmplwi    r28, 0x2
  addi      r29, r29, 0x1
  blt+      .loc_0x84
  b         .loc_0xB0

.loc_0xA4:
  li        r0, 0
  stb       r0, 0x6E(r30)
  stb       r0, 0x6F(r30)

.loc_0xB0:
  mr        r3, r31
  bl        0x1E248C
  stw       r3, 0x114(r30)
  li        r29, 0
  b         .loc_0x138

.loc_0xC4:
  li        r3, 0x50
  bl        -0x20E774
  mr.       r28, r3
  beq-      .loc_0x11C
  bl        0x1DED6C
  lis       r3, 0x804B
  addi      r27, r28, 0x20
  addi      r0, r3, 0x5CEC
  stw       r0, 0x0(r28)
  mr        r3, r27
  bl        0x1DED54
  lis       r3, 0x804B
  lfs       f0, -0x3FB8(r2)
  addi      r0, r3, 0x60D4
  li        r3, 0x1
  stw       r0, 0x0(r27)
  li        r0, 0
  stfs      f0, 0x18(r27)
  stb       r3, 0x20(r27)
  stw       r0, 0x1C(r28)
  stw       r0, 0x44(r28)
  stw       r0, 0x48(r28)

.loc_0x11C:
  mr        r3, r28
  mr        r4, r31
  bl        -0x7C1A8
  mr        r4, r28
  addi      r3, r30, 0x118
  bl        0x1DED88
  addi      r29, r29, 0x1

.loc_0x138:
  lwz       r0, 0x114(r30)
  cmpw      r29, r0
  blt+      .loc_0xC4
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
 * Size:	000178
 */
void Game::PartsView::write( (Stream &))
{
	// UNUSED FUNCTION
}
