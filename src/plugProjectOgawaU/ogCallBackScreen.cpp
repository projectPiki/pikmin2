

/*
 * --INFO--
 * Address:	8030B370
 * Size:	0000A4
 */
void og::Screen::CallBack_Screen::__ct((P2DScreen::Mgr*, unsigned long long))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stmw      r27, 0xC(r1)
	  mr        r27, r3
	  mr        r0, r27
	  mr        r29, r4
	  mr        r31, r5
	  mr        r30, r6
	  mr        r28, r0
	  bl        0x105FF8
	  lis       r3, 0x804D
	  lis       r4, 0x804D
	  addi      r0, r3, 0x7B0C
	  lis       r3, 0x804E
	  stw       r0, 0x0(r28)
	  li        r5, 0
	  addi      r4, r4, 0x7F2C
	  subi      r0, r3, 0x7E58
	  stw       r5, 0x18(r28)
	  mr        r6, r30
	  mr        r5, r31
	  stw       r4, 0x0(r28)
	  stw       r0, 0x0(r27)
	  stw       r29, 0x1C(r27)
	  lwz       r3, 0x1C(r27)
	  bl        -0x852C
	  stw       r3, 0x20(r27)
	  li        r0, 0
	  lfs       f1, -0xCC8(r2)
	  mr        r3, r27
	  stw       r0, 0x24(r27)
	  lfs       f0, -0xCC4(r2)
	  stfs      f1, 0x28(r27)
	  stfs      f0, 0x2C(r27)
	  stfs      f0, 0x30(r27)
	  lmw       r27, 0xC(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8030B414
 * Size:	000008
 */
void og::Screen::CallBack_Screen::getPartsScreen(void)
{
	/*
	.loc_0x0:
	  lwz       r3, 0x1C(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000044
 */
void og::Screen::CallBack_Screen::changeScreen((P2DScreen::Mgr*,
                                                unsigned long long))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8030B41C
 * Size:	000038
 */
void og::Screen::CallBack_Screen::update(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x1C(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x28
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x30(r12)
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
 * Address:	8030B454
 * Size:	0000D0
 */
void og::Screen::CallBack_Screen::draw((Graphics&, J2DGrafContext&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x80(r1)
	  mflr      r0
	  stw       r0, 0x84(r1)
	  stw       r31, 0x7C(r1)
	  stw       r30, 0x78(r1)
	  mr        r30, r5
	  stw       r29, 0x74(r1)
	  mr        r29, r4
	  stw       r28, 0x70(r1)
	  mr        r28, r3
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0xB0
	  lfs       f1, 0x28(r28)
	  addi      r3, r1, 0x38
	  lwz       r4, 0x24(r28)
	  fmr       f2, f1
	  lfs       f3, -0xCC4(r2)
	  addi      r31, r4, 0x80
	  bl        -0x220CCC
	  addi      r4, r1, 0x38
	  mr        r3, r31
	  mr        r5, r4
	  bl        -0x2211B0
	  lfs       f1, 0x2C(r28)
	  addi      r3, r1, 0x8
	  lfs       f2, 0x30(r28)
	  lfs       f3, -0xCC4(r2)
	  bl        -0x220D70
	  mr        r5, r31
	  addi      r3, r1, 0x38
	  addi      r4, r1, 0x8
	  bl        -0x2211D4
	  lwz       r4, 0x20(r28)
	  mr        r3, r31
	  addi      r4, r4, 0x50
	  bl        -0x221218
	  lwz       r3, 0x1C(r28)
	  mr        r4, r29
	  mr        r5, r30
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x9C(r12)
	  mtctr     r12
	  bctrl

	.loc_0xB0:
	  lwz       r0, 0x84(r1)
	  lwz       r31, 0x7C(r1)
	  lwz       r30, 0x78(r1)
	  lwz       r29, 0x74(r1)
	  lwz       r28, 0x70(r1)
	  mtlr      r0
	  addi      r1, r1, 0x80
	  blr
	*/
}
