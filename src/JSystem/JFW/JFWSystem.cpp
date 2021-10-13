

/*
 * --INFO--
 * Address:	........
 * Size:	000048
 */
void JFWSystem::firstInit()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8008975C
 * Size:	000350
 */
void JFWSystem::init()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stfd      f31, 0x20(r1)
	  psq_st    f31,0x28(r1),0,0
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  lwz       r0, -0x7638(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x54
	  bl        0x61AF8
	  bl        0x535A4
	  lwz       r3, -0x7F30(r13)
	  li        r4, 0
	  bl        -0x6994C
	  mr        r4, r3
	  lwz       r3, -0x7F2C(r13)
	  stw       r4, -0x7638(r13)
	  li        r5, 0
	  bl        -0x698E0
	  stw       r3, -0x7634(r13)

	.loc_0x54:
	  li        r0, 0x1
	  lwz       r3, -0x7F24(r13)
	  stb       r0, -0x761C(r13)
	  lwz       r4, -0x7F20(r13)
	  lwz       r5, -0x7F1C(r13)
	  lwz       r6, -0x7F18(r13)
	  lwz       r7, -0x7F14(r13)
	  bl        -0x71DBC
	  li        r3, 0x7C
	  bl        -0x65930
	  mr.       r30, r3
	  beq-      .loc_0x9C
	  bl        0x681E4
	  mr        r4, r3
	  mr        r3, r30
	  li        r5, 0x4
	  bl        -0x64060
	  mr        r30, r3

	.loc_0x9C:
	  stw       r30, -0x7630(r13)
	  lwz       r3, -0x7F0C(r13)
	  bl        -0x560BC
	  lwz       r31, -0x7F28(r13)
	  li        r3, 0x1C
	  bl        -0x65968
	  cmplwi    r3, 0
	  beq-      .loc_0xC4
	  mr        r4, r31
	  bl        -0x5ACE8

	.loc_0xC4:
	  bl        -0x5C20C
	  bl        -0x5FC58
	  mr        r30, r3
	  bl        -0x61A6C
	  mr        r3, r30
	  bl        -0x5F528
	  li        r3, 0x70
	  bl        -0x65998
	  mr.       r0, r3
	  beq-      .loc_0xFC
	  lwz       r4, -0x7F10(r13)
	  li        r5, 0
	  bl        -0x58684
	  mr        r0, r3

	.loc_0xFC:
	  stw       r0, -0x7628(r13)
	  li        r3, 0
	  li        r4, 0
	  bl        -0x60390
	  stw       r3, -0x762C(r13)
	  lwz       r4, -0x7628(r13)
	  bl        -0x602F0
	  li        r3, 0
	  bl        -0x609E0
	  stw       r3, -0x7624(r13)
	  li        r3, 0x3C
	  li        r4, 0xC8
	  li        r5, 0
	  bl        -0x617B0
	  mr        r31, r3
	  lwz       r3, -0x7628(r13)
	  stw       r31, -0x7620(r13)
	  mr        r30, r3
	  stw       r3, 0x4C(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  xoris     r4, r3, 0x8000
	  lis       r0, 0x4330
	  mr        r3, r30
	  stw       r4, 0xC(r1)
	  lwz       r12, 0x0(r30)
	  stw       r0, 0x8(r1)
	  lfd       f1, -0x7858(r2)
	  lfd       f0, 0x8(r1)
	  lwz       r12, 0x28(r12)
	  fsubs     f31, f0, f1
	  mtctr     r12
	  bctrl
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x14(r1)
	  lfd       f1, -0x7858(r2)
	  stw       r0, 0x10(r1)
	  lfd       f0, 0x10(r1)
	  fsubs     f0, f0, f1
	  stfs      f0, 0x50(r31)
	  stfs      f31, 0x54(r31)
	  lwz       r3, -0x7F0C(r13)
	  lhz       r0, 0x6(r3)
	  cmplwi    r0, 0x12C
	  bge-      .loc_0x250
	  lwz       r3, -0x7628(r13)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x14(r1)
	  lwz       r3, -0x7628(r13)
	  stw       r0, 0x10(r1)
	  lfd       f1, -0x7858(r2)
	  lfd       f0, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  fsubs     f1, f0, f1
	  lfs       f0, -0x7860(r2)
	  lwz       r12, 0x28(r12)
	  fmuls     f31, f0, f1
	  mtctr     r12
	  bctrl
	  xoris     r0, r3, 0x8000
	  lis       r4, 0x4330
	  stw       r0, 0xC(r1)
	  li        r3, 0x14
	  lfd       f2, -0x7858(r2)
	  li        r0, 0x19
	  stw       r4, 0x8(r1)
	  lfs       f0, -0x785C(r2)
	  lfd       f1, 0x8(r1)
	  lwz       r4, -0x7620(r13)
	  fsubs     f1, f1, f2
	  fmuls     f0, f0, f1
	  stfs      f0, 0x50(r4)
	  stfs      f31, 0x54(r4)
	  lwz       r4, -0x7620(r13)
	  stw       r3, 0x40(r4)
	  stw       r0, 0x44(r4)
	  b         .loc_0x2D0

	.loc_0x250:
	  lwz       r3, -0x7628(r13)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  xoris     r4, r3, 0x8000
	  lwz       r3, -0x7628(r13)
	  lis       r0, 0x4330
	  stw       r4, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  stw       r0, 0x10(r1)
	  lfd       f1, -0x7858(r2)
	  lfd       f0, 0x10(r1)
	  lwz       r12, 0x28(r12)
	  fsubs     f31, f0, f1
	  mtctr     r12
	  bctrl
	  xoris     r0, r3, 0x8000
	  lis       r4, 0x4330
	  stw       r0, 0xC(r1)
	  li        r3, 0x14
	  lfd       f1, -0x7858(r2)
	  li        r0, 0x32
	  stw       r4, 0x8(r1)
	  lwz       r4, -0x7620(r13)
	  lfd       f0, 0x8(r1)
	  fsubs     f0, f0, f1
	  stfs      f0, 0x50(r4)
	  stfs      f31, 0x54(r4)
	  lwz       r4, -0x7620(r13)
	  stw       r3, 0x40(r4)
	  stw       r0, 0x44(r4)

	.loc_0x2D0:
	  lwz       r3, -0x7620(r13)
	  li        r0, 0x19
	  stw       r0, 0x48(r3)
	  lwz       r0, 0x48(r3)
	  lwz       r4, 0x24(r3)
	  cmplw     r0, r4
	  ble-      .loc_0x2F0
	  stw       r4, 0x48(r3)

	.loc_0x2F0:
	  lwz       r3, -0x7620(r13)
	  li        r4, 0
	  li        r0, 0x3
	  stb       r4, 0x68(r3)
	  lwz       r3, -0x7620(r13)
	  stw       r0, 0x58(r3)
	  lwz       r3, -0x7620(r13)
	  bl        -0x607C4
	  lwz       r3, -0x7620(r13)
	  bl        -0x607BC
	  lwz       r3, -0x7634(r13)
	  li        r5, 0x4
	  lwz       r4, -0x7F08(r13)
	  bl        -0x66440
	  lwz       r4, -0x7F08(r13)
	  bl        -0x5CE28
	  psq_l     f31,0x28(r1),0,0
	  lwz       r0, 0x34(r1)
	  lfd       f31, 0x20(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}