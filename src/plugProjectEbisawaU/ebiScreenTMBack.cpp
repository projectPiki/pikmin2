

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
 * Address:	803E9C60
 * Size:	0000B4
 */
void ebi::Screen::TTMBack::doSetArchive((JKRArchive*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r5, 0x8049
	  stw       r0, 0x14(r1)
	  addi      r0, r5, 0x77F0
	  li        r5, 0
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r4, r0
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  lwz       r3, -0x6514(r13)
	  bl        0x396CC
	  li        r3, 0x148
	  bl        -0x3C5DF4
	  mr.       r0, r3
	  beq-      .loc_0x4C
	  bl        0x4B108
	  mr        r0, r3

	.loc_0x4C:
	  stw       r0, 0xC(r30)
	  lis       r3, 0x8049
	  addi      r4, r3, 0x780C
	  mr        r6, r31
	  lwz       r3, 0xC(r30)
	  lis       r5, 0x110
	  bl        -0x3AA6A0
	  lwz       r3, 0xC(r30)
	  li        r4, 0x1
	  bl        -0x1F8EC
	  lwz       r3, 0xC(r30)
	  li        r4, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  lis       r4, 0x8049
	  lwz       r3, -0x6514(r13)
	  addi      r4, r4, 0x77F0
	  bl        0x3966C
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
 * Address:	803E9D14
 * Size:	000070
 */
void ebi::Screen::TTMBack::doOpenScreen((ebi::Screen::ArgOpen*))
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
	  bne-      .loc_0x3C
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  addi      r3, r3, 0x7818
	  li        r4, 0x21
	  addi      r5, r5, 0x782C
	  crclr     6, 0x6
	  bl        -0x3BF70C

	.loc_0x3C:
	  lwz       r3, -0x6514(r13)
	  lfs       f1, 0x4(r31)
	  lfs       f0, 0x54(r3)
	  fdivs     f1, f1, f0
	  bl        -0x328214
	  stw       r3, 0x10(r30)
	  stw       r3, 0x14(r30)
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
 * Address:	803E9D84
 * Size:	000044
 */
void ebi::Screen::TTMBack::doCloseScreen((ebi::Screen::ArgClose*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f1, 0x1A98(r2)
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r4, -0x6514(r13)
	  lfs       f0, 0x54(r4)
	  fdivs     f1, f1, f0
	  bl        -0x32825C
	  stw       r3, 0x10(r31)
	  stw       r3, 0x14(r31)
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803E9DC8
 * Size:	0000DC
 */
void ebi::Screen::TTMBack::doUpdateStateOpen(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stw       r31, 0x2C(r1)
	  mr        r31, r3
	  lwz       r3, 0x10(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x28
	  subi      r0, r3, 0x1
	  stw       r0, 0x10(r31)

	.loc_0x28:
	  lwz       r4, 0x14(r31)
	  cmplwi    r4, 0
	  beq-      .loc_0x68
	  lwz       r3, 0x10(r31)
	  lis       r0, 0x4330
	  stw       r0, 0x8(r1)
	  lfd       f2, 0x1AA8(r2)
	  stw       r3, 0xC(r1)
	  lfd       f0, 0x8(r1)
	  stw       r4, 0x14(r1)
	  fsubs     f1, f0, f2
	  stw       r0, 0x10(r1)
	  lfd       f0, 0x10(r1)
	  fsubs     f0, f0, f2
	  fdivs     f1, f1, f0
	  b         .loc_0x6C

	.loc_0x68:
	  lfs       f1, 0x1A9C(r2)

	.loc_0x6C:
	  lfs       f0, 0x1AA4(r2)
	  lwz       r3, 0xC(r31)
	  fsubs     f0, f0, f1
	  lfs       f1, 0x1AA0(r2)
	  lwz       r12, 0x0(r3)
	  fmuls     f0, f1, f0
	  lwz       r12, 0x24(r12)
	  fctiwz    f0, f0
	  stfd      f0, 0x18(r1)
	  lwz       r4, 0x1C(r1)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0xC(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x30(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x10(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0xC4
	  li        r3, 0x1
	  b         .loc_0xC8

	.loc_0xC4:
	  li        r3, 0

	.loc_0xC8:
	  lwz       r0, 0x34(r1)
	  lwz       r31, 0x2C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803E9EA4
 * Size:	000034
 */
void ebi::Screen::TTMBack::doUpdateStateWait(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0xC(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x30(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  li        r3, 0
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803E9ED8
 * Size:	0000D4
 */
void ebi::Screen::TTMBack::doUpdateStateClose(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stw       r31, 0x2C(r1)
	  mr        r31, r3
	  lwz       r3, 0x10(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x28
	  subi      r0, r3, 0x1
	  stw       r0, 0x10(r31)

	.loc_0x28:
	  lwz       r4, 0x14(r31)
	  cmplwi    r4, 0
	  beq-      .loc_0x68
	  lwz       r3, 0x10(r31)
	  lis       r0, 0x4330
	  stw       r0, 0x8(r1)
	  lfd       f2, 0x1AA8(r2)
	  stw       r3, 0xC(r1)
	  lfd       f0, 0x8(r1)
	  stw       r4, 0x14(r1)
	  fsubs     f1, f0, f2
	  stw       r0, 0x10(r1)
	  lfd       f0, 0x10(r1)
	  fsubs     f0, f0, f2
	  fdivs     f1, f1, f0
	  b         .loc_0x6C

	.loc_0x68:
	  lfs       f1, 0x1A9C(r2)

	.loc_0x6C:
	  lfs       f0, 0x1AA0(r2)
	  lwz       r3, 0xC(r31)
	  fmuls     f0, f0, f1
	  lwz       r12, 0x0(r3)
	  fctiwz    f0, f0
	  lwz       r12, 0x24(r12)
	  stfd      f0, 0x18(r1)
	  lwz       r4, 0x1C(r1)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0xC(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x30(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x10(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0xBC
	  li        r3, 0x1
	  b         .loc_0xC0

	.loc_0xBC:
	  li        r3, 0

	.loc_0xC0:
	  lwz       r0, 0x34(r1)
	  lwz       r31, 0x2C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803E9FAC
 * Size:	000074
 */
void ebi::Screen::TTMBack::doDraw(void)
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
	  lwz       r4, -0x6514(r13)
	  lwz       r31, 0x24(r4)
	  addi      r30, r31, 0x190
	  lwz       r12, 0x0(r30)
	  mr        r3, r30
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0xC(r29)
	  mr        r4, r31
	  mr        r5, r30
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x9C(r12)
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
 * Address:	803EA020
 * Size:	000090
 */
void ebi::Screen::TNintendoLogo::doSetArchive((JKRArchive*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r5, 0x8049
	  stw       r0, 0x14(r1)
	  addi      r0, r5, 0x7838
	  li        r5, 0
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r4, r0
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  lwz       r3, -0x6514(r13)
	  bl        0x3930C
	  li        r3, 0x148
	  bl        -0x3C61B4
	  mr.       r0, r3
	  beq-      .loc_0x4C
	  bl        0x4AD48
	  mr        r0, r3

	.loc_0x4C:
	  stw       r0, 0xC(r30)
	  lis       r3, 0x8049
	  addi      r4, r3, 0x7858
	  mr        r6, r31
	  lwz       r3, 0xC(r30)
	  lis       r5, 0x110
	  bl        -0x3AAA60
	  lis       r4, 0x8049
	  lwz       r3, -0x6514(r13)
	  addi      r4, r4, 0x7838
	  bl        0x392D0
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
 * Address:	803EA0B0
 * Size:	000034
 */
void ebi::Screen::TNintendoLogo::doUpdateStateWait(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0xC(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x30(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  li        r3, 0
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803EA0E4
 * Size:	000074
 */
void ebi::Screen::TNintendoLogo::doDraw(void)
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
	  lwz       r4, -0x6514(r13)
	  lwz       r31, 0x24(r4)
	  addi      r30, r31, 0x190
	  lwz       r12, 0x0(r30)
	  mr        r3, r30
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0xC(r29)
	  mr        r4, r31
	  mr        r5, r30
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x9C(r12)
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
 * Address:	803EA158
 * Size:	00000C
 */
void ebi::Screen::TNintendoLogo::getName(void)
{
	/*
	.loc_0x0:
	  lis       r3, 0x8049
	  addi      r3, r3, 0x786C
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803EA164
 * Size:	00000C
 */
void ebi::Screen::TTMBack::getName(void)
{
	/*
	.loc_0x0:
	  lis       r3, 0x8049
	  addi      r3, r3, 0x786C
	  blr
	*/
}
