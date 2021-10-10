

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
 * Size:	0000B8
 */
void P2JME::Movie::WindowPane::__ct(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80434F5C
 * Size:	000020
 */
void P2JME::Movie::WindowPane::doInit(void)
{
	/*
	.loc_0x0:
	  lwz       r4, 0x18(r3)
	  lfs       f0, 0x2458(r2)
	  lfs       f2, 0xD8(r4)
	  lfs       f1, 0xD4(r4)
	  stfs      f1, 0x28(r3)
	  stfs      f2, 0x2C(r3)
	  stfs      f0, 0x30(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80434F7C
 * Size:	000164
 */
void P2JME::Movie::WindowPane::update(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r0, 0x1C(r3)
	  cmpwi     r0, 0x2
	  beq-      .loc_0x14C
	  bge-      .loc_0x2C
	  cmpwi     r0, 0
	  beq-      .loc_0x3C
	  bge-      .loc_0x4C
	  b         .loc_0x14C

	.loc_0x2C:
	  cmpwi     r0, 0x4
	  beq-      .loc_0x3C
	  bge-      .loc_0x14C
	  b         .loc_0xF4

	.loc_0x3C:
	  lwz       r4, 0x18(r3)
	  li        r0, 0
	  stb       r0, 0xB0(r4)
	  b         .loc_0x14C

	.loc_0x4C:
	  lwz       r4, -0x6514(r13)
	  lfs       f1, 0x20(r3)
	  lfs       f0, 0x54(r4)
	  fadds     f0, f1, f0
	  stfs      f0, 0x20(r3)
	  lfs       f0, 0x20(r3)
	  lfs       f1, 0x24(r3)
	  fcmpo     cr0, f0, f1
	  ble-      .loc_0xD4
	  stfs      f1, 0x20(r3)
	  lfs       f1, 0x2458(r2)
	  lfs       f3, 0x44(r3)
	  lfs       f2, 0x48(r3)
	  fmuls     f0, f3, f3
	  lfs       f4, 0x4C(r3)
	  fmuls     f2, f2, f2
	  fmuls     f4, f4, f4
	  fadds     f0, f0, f2
	  fadds     f0, f4, f0
	  fcmpo     cr0, f0, f1
	  ble-      .loc_0xBC
	  fmadds    f0, f3, f3, f2
	  fadds     f2, f4, f0
	  fcmpo     cr0, f2, f1
	  ble-      .loc_0xC0
	  fsqrte    f0, f2
	  fmuls     f2, f0, f2
	  b         .loc_0xC0

	.loc_0xBC:
	  fmr       f2, f1

	.loc_0xC0:
	  lfs       f0, 0x245C(r2)
	  fcmpo     cr0, f2, f0
	  bge-      .loc_0xD4
	  li        r0, 0x2
	  stw       r0, 0x1C(r3)

	.loc_0xD4:
	  lfs       f1, 0x20(r3)
	  lfs       f0, 0x24(r3)
	  lfs       f2, 0x2464(r2)
	  fdivs     f1, f1, f0
	  lfs       f0, 0x2460(r2)
	  fmadds    f0, f2, f1, f0
	  stfs      f0, 0x34(r3)
	  b         .loc_0x14C

	.loc_0xF4:
	  lwz       r4, -0x6514(r13)
	  lfs       f1, 0x20(r3)
	  lfs       f0, 0x54(r4)
	  fadds     f0, f1, f0
	  stfs      f0, 0x20(r3)
	  lfs       f1, 0x20(r3)
	  lfs       f0, 0x24(r3)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x128
	  li        r0, 0x4
	  stw       r0, 0x1C(r3)
	  lfs       f0, 0x24(r3)
	  stfs      f0, 0x20(r3)

	.loc_0x128:
	  lfs       f1, 0x20(r3)
	  lfs       f0, 0x24(r3)
	  lfs       f2, 0x2468(r2)
	  fdivs     f1, f1, f0
	  lfs       f3, 0x2464(r2)
	  lfs       f0, 0x2460(r2)
	  fsubs     f1, f2, f1
	  fmadds    f0, f3, f1, f0
	  stfs      f0, 0x34(r3)

	.loc_0x14C:
	  li        r4, 0
	  bl        .loc_0x164
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr

	.loc_0x164:
	*/
}

/*
 * --INFO--
 * Address:	804350E0
 * Size:	000278
 */
void P2JME::Movie::WindowPane::moveWindow((bool))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x50(r1)
	  mflr      r0
	  stw       r0, 0x54(r1)
	  stfd      f31, 0x40(r1)
	  psq_st    f31,0x48(r1),0,0
	  stfd      f30, 0x30(r1)
	  psq_st    f30,0x38(r1),0,0
	  stw       r31, 0x2C(r1)
	  mr        r31, r3
	  lfs       f1, 0x2474(r2)
	  lfs       f0, 0x34(r3)
	  lfs       f2, 0x2470(r2)
	  fmuls     f1, f1, f0
	  lfs       f4, 0x28(r3)
	  lfs       f3, 0x246C(r2)
	  lfs       f0, 0x2458(r2)
	  fmuls     f5, f2, f1
	  lfs       f30, 0x2C(r3)
	  fadds     f31, f4, f3
	  fmr       f1, f5
	  fcmpo     cr0, f5, f0
	  bge-      .loc_0x5C
	  fneg      f1, f5

	.loc_0x5C:
	  lfs       f2, 0x2478(r2)
	  lis       r3, 0x8050
	  lfs       f0, 0x2458(r2)
	  addi      r5, r3, 0x71A0
	  fmuls     f1, f1, f2
	  lfs       f3, 0x246C(r2)
	  fcmpo     cr0, f5, f0
	  fctiwz    f0, f1
	  stfd      f0, 0x8(r1)
	  lwz       r0, 0xC(r1)
	  rlwinm    r0,r0,3,18,28
	  add       r3, r5, r0
	  lfs       f0, 0x4(r3)
	  fmadds    f4, f3, f0, f30
	  bge-      .loc_0xBC
	  lfs       f0, 0x247C(r2)
	  fmuls     f0, f5, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x10(r1)
	  lwz       r0, 0x14(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r5, r0
	  fneg      f0, f0
	  b         .loc_0xD4

	.loc_0xBC:
	  fmuls     f0, f5, f2
	  fctiwz    f0, f0
	  stfd      f0, 0x18(r1)
	  lwz       r0, 0x1C(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r5, r0

	.loc_0xD4:
	  rlwinm.   r0,r4,0,24,31
	  fmadds    f2, f3, f0, f31
	  beq-      .loc_0x100
	  stfs      f2, 0x38(r31)
	  lfs       f0, 0x2458(r2)
	  stfs      f4, 0x3C(r31)
	  stfs      f0, 0x40(r31)
	  stfs      f0, 0x44(r31)
	  stfs      f0, 0x48(r31)
	  stfs      f0, 0x4C(r31)
	  b         .loc_0x1A8

	.loc_0x100:
	  lfs       f1, 0x38(r31)
	  lfs       f0, 0x3C(r31)
	  fsubs     f5, f2, f1
	  lfs       f2, 0x2480(r2)
	  fsubs     f6, f4, f0
	  lfs       f0, 0x44(r31)
	  lfs       f3, 0x40(r31)
	  fmuls     f5, f5, f2
	  lfs       f4, 0x2458(r2)
	  fmuls     f6, f6, f2
	  lfs       f1, 0x2484(r2)
	  fadds     f0, f0, f5
	  fsubs     f3, f4, f3
	  stfs      f0, 0x44(r31)
	  fmuls     f3, f3, f2
	  lfs       f0, 0x48(r31)
	  fadds     f0, f0, f6
	  stfs      f0, 0x48(r31)
	  lfs       f0, 0x4C(r31)
	  fadds     f0, f0, f3
	  stfs      f0, 0x4C(r31)
	  lfs       f0, 0x44(r31)
	  fmuls     f0, f0, f1
	  stfs      f0, 0x44(r31)
	  lfs       f0, 0x48(r31)
	  fmuls     f0, f0, f1
	  stfs      f0, 0x48(r31)
	  lfs       f0, 0x4C(r31)
	  fmuls     f0, f0, f1
	  stfs      f0, 0x4C(r31)
	  lfs       f1, 0x38(r31)
	  lfs       f0, 0x44(r31)
	  fadds     f0, f1, f0
	  stfs      f0, 0x38(r31)
	  lfs       f1, 0x3C(r31)
	  lfs       f0, 0x48(r31)
	  fadds     f0, f1, f0
	  stfs      f0, 0x3C(r31)
	  lfs       f1, 0x40(r31)
	  lfs       f0, 0x4C(r31)
	  fadds     f0, f1, f0
	  stfs      f0, 0x40(r31)

	.loc_0x1A8:
	  lwz       r3, 0x18(r31)
	  lfs       f1, 0x3C(r31)
	  lfs       f0, 0x38(r31)
	  stfs      f0, 0xD4(r3)
	  stfs      f1, 0xD8(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
	  lfs       f1, 0x38(r31)
	  lis       r3, 0x8051
	  lfs       f0, 0x3C(r31)
	  subi      r3, r3, 0x2E20
	  fsubs     f1, f1, f31
	  fsubs     f2, f0, f30
	  bl        -0x4001BC
	  fmr       f30, f1
	  lfs       f1, 0x34(r31)
	  bl        -0x23700
	  lfs       f0, 0x2488(r2)
	  lfs       f2, 0x2464(r2)
	  fsubs     f3, f1, f0
	  lfs       f1, 0x248C(r2)
	  lfs       f0, 0x2460(r2)
	  lwz       r3, 0x18(r31)
	  fdivs     f3, f3, f2
	  lfs       f2, 0x2468(r2)
	  fmadds    f0, f1, f30, f0
	  fabs      f1, f3
	  stfs      f0, 0xC0(r3)
	  frsp      f0, f1
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x2C(r12)
	  fadds     f30, f2, f0
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x18(r31)
	  stfs      f30, 0xCC(r3)
	  stfs      f30, 0xD0(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
	  psq_l     f31,0x48(r1),0,0
	  lfd       f31, 0x40(r1)
	  psq_l     f30,0x38(r1),0,0
	  lfd       f30, 0x30(r1)
	  lwz       r0, 0x54(r1)
	  lwz       r31, 0x2C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x50
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80435358
 * Size:	000048
 */
void P2JME::Movie::WindowPane::open((float))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f2, 0x2458(r2)
	  li        r4, 0x1
	  stw       r0, 0x14(r1)
	  li        r0, 0x1
	  lfs       f0, 0x2460(r2)
	  lwz       r5, 0x18(r3)
	  stb       r0, 0xB0(r5)
	  stw       r0, 0x1C(r3)
	  stfs      f2, 0x20(r3)
	  stfs      f1, 0x24(r3)
	  stfs      f0, 0x34(r3)
	  bl        -0x2AC
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000024
 */
void P2JME::Movie::WindowPane::close((float))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000A4
 */
void P2JME::Movie::AbtnPane::__ct((unsigned char))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	804353A0
 * Size:	000054
 */
void P2JME::Movie::AbtnPane::doInit(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r4, 0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r3, 0x18(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x18(r31)
	  li        r4, 0x1
	  li        r0, 0
	  stb       r4, 0xB0(r3)
	  stw       r0, 0x1C(r31)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	804353F4
 * Size:	000170
 */
void P2JME::Movie::AbtnPane::update(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f2, 0x24A0(r2)
	  stw       r0, 0x14(r1)
	  lfs       f1, 0x2468(r2)
	  lfs       f0, 0x20(r3)
	  fmuls     f2, f2, f0
	  lfs       f0, 0x2458(r2)
	  fdivs     f1, f2, f1
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x30
	  fneg      f1, f1

	.loc_0x30:
	  lfs       f0, 0x2478(r2)
	  lis       r4, 0x8050
	  lwz       r0, 0x1C(r3)
	  addi      r5, r4, 0x71A0
	  fmuls     f0, f1, f0
	  lfs       f3, 0x2468(r2)
	  lfs       f1, 0x24A4(r2)
	  cmpwi     r0, 0x1
	  fctiwz    f0, f0
	  stfd      f0, 0x8(r1)
	  lwz       r4, 0xC(r1)
	  rlwinm    r4,r4,3,18,28
	  add       r4, r5, r4
	  lfs       f0, 0x4(r4)
	  fsubs     f0, f3, f0
	  fmuls     f4, f1, f0
	  beq-      .loc_0xB4
	  bge-      .loc_0xDC
	  cmpwi     r0, 0
	  bge-      .loc_0x84
	  b         .loc_0xDC

	.loc_0x84:
	  lwz       r4, -0x6514(r13)
	  lfs       f3, 0x24A8(r2)
	  lfs       f2, 0x54(r4)
	  lfs       f1, 0x24(r3)
	  lfs       f0, 0x2458(r2)
	  fnmsubs   f1, f3, f2, f1
	  stfs      f1, 0x24(r3)
	  lfs       f1, 0x24(r3)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0xDC
	  stfs      f0, 0x24(r3)
	  b         .loc_0xDC

	.loc_0xB4:
	  lwz       r4, -0x6514(r13)
	  lfs       f2, 0x24A8(r2)
	  lfs       f1, 0x54(r4)
	  lfs       f0, 0x24(r3)
	  fmadds    f0, f2, f1, f0
	  stfs      f0, 0x24(r3)
	  lfs       f0, 0x24(r3)
	  fcmpo     cr0, f0, f3
	  ble-      .loc_0xDC
	  stfs      f3, 0x24(r3)

	.loc_0xDC:
	  lwz       r4, -0x6514(r13)
	  lfs       f2, 0x20(r3)
	  lfs       f1, 0x54(r4)
	  lfs       f0, 0x2468(r2)
	  fadds     f1, f2, f1
	  stfs      f1, 0x20(r3)
	  lfs       f1, 0x20(r3)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x108
	  lfs       f0, 0x2458(r2)
	  stfs      f0, 0x20(r3)

	.loc_0x108:
	  lfs       f0, 0x2490(r2)
	  lfs       f1, 0x24(r3)
	  fmuls     f2, f0, f4
	  lfs       f0, 0x2458(r2)
	  lwz       r3, 0x18(r3)
	  fmuls     f1, f2, f1
	  fcmpo     cr0, f1, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x138
	  lfs       f0, 0x24A4(r2)
	  fadds     f0, f0, f1
	  b         .loc_0x140

	.loc_0x138:
	  lfs       f0, 0x24A4(r2)
	  fsubs     f0, f1, f0

	.loc_0x140:
	  fctiwz    f0, f0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  stfd      f0, 0x8(r1)
	  lwz       r0, 0xC(r1)
	  rlwinm    r4,r0,0,24,31
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
 * Address:	........
 * Size:	0000CC
 */
void P2JME::Movie::PodIconScreen::__ct(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000078
 */
void P2JME::Movie::PodIconScreen::setTrans(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000168
 */
void P2JME::Movie::PodIconScreen::reset(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000178
 */
void P2JME::Movie::PodIconScreen::appear(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0002A0
 */
void P2JME::Movie::PodIconScreen::disappear(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0001E0
 */
void P2JME::Movie::PodIconScreen::set((JKRArchive*))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80435564
 * Size:	000438
 */
void P2JME::Movie::PodIconScreen::update(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  lwz       r0, 0x148(r3)
	  cmpwi     r0, -0x1
	  beq-      .loc_0x41C
	  lfs       f1, 0x160(r31)
	  lis       r0, 0x4330
	  lfs       f0, 0x2468(r2)
	  stw       r0, 0x8(r1)
	  fadds     f0, f1, f0
	  lfd       f1, 0x24C0(r2)
	  stfs      f0, 0x160(r31)
	  lwz       r3, 0x15C(r31)
	  lfs       f2, 0x160(r31)
	  lha       r3, 0x6(r3)
	  xoris     r3, r3, 0x8000
	  stw       r3, 0xC(r1)
	  lfd       f0, 0x8(r1)
	  fsubs     f0, f0, f1
	  fcmpo     cr0, f2, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x7C
	  stw       r3, 0xC(r1)
	  stw       r0, 0x8(r1)
	  lfd       f0, 0x8(r1)
	  fsubs     f0, f0, f1
	  fsubs     f0, f2, f0
	  stfs      f0, 0x160(r31)

	.loc_0x7C:
	  lfs       f1, 0x160(r31)
	  lis       r0, 0x4330
	  lwz       r3, 0x15C(r31)
	  lfs       f0, 0x2468(r2)
	  stfs      f1, 0x8(r3)
	  lfd       f1, 0x24C0(r2)
	  lfs       f2, 0x158(r31)
	  stw       r0, 0x8(r1)
	  fadds     f0, f2, f0
	  stfs      f0, 0x158(r31)
	  lwz       r3, 0x154(r31)
	  lfs       f2, 0x158(r31)
	  lha       r3, 0x6(r3)
	  xoris     r3, r3, 0x8000
	  stw       r3, 0xC(r1)
	  lfd       f0, 0x8(r1)
	  fsubs     f0, f0, f1
	  fcmpo     cr0, f2, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0xE4
	  stw       r3, 0xC(r1)
	  stw       r0, 0x8(r1)
	  lfd       f0, 0x8(r1)
	  fsubs     f0, f0, f1
	  fsubs     f0, f2, f0
	  stfs      f0, 0x158(r31)

	.loc_0xE4:
	  lfs       f1, 0x158(r31)
	  lis       r0, 0x4330
	  lwz       r3, 0x154(r31)
	  lfs       f0, 0x2468(r2)
	  stfs      f1, 0x8(r3)
	  lfd       f1, 0x24C0(r2)
	  lfs       f2, 0x150(r31)
	  stw       r0, 0x8(r1)
	  fadds     f0, f2, f0
	  stfs      f0, 0x150(r31)
	  lwz       r3, 0x14C(r31)
	  lfs       f2, 0x150(r31)
	  lha       r3, 0x6(r3)
	  xoris     r3, r3, 0x8000
	  stw       r3, 0xC(r1)
	  lfd       f0, 0x8(r1)
	  fsubs     f0, f0, f1
	  fcmpo     cr0, f2, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x14C
	  stw       r3, 0xC(r1)
	  stw       r0, 0x8(r1)
	  lfd       f0, 0x8(r1)
	  fsubs     f0, f0, f1
	  fsubs     f0, f2, f0
	  stfs      f0, 0x150(r31)

	.loc_0x14C:
	  lfs       f0, 0x150(r31)
	  mr        r3, r31
	  lwz       r4, 0x14C(r31)
	  stfs      f0, 0x8(r4)
	  bl        -0x3F4B94
	  lfs       f1, 0x174(r31)
	  lfs       f0, 0x168(r31)
	  lfs       f3, 0x178(r31)
	  fsubs     f6, f1, f0
	  lfs       f2, 0x16C(r31)
	  lfs       f1, 0x170(r31)
	  lfs       f0, 0x164(r31)
	  fsubs     f11, f3, f2
	  fmuls     f2, f6, f6
	  fsubs     f3, f1, f0
	  lfs       f1, 0x2458(r2)
	  fmuls     f4, f11, f11
	  fmadds    f0, f3, f3, f2
	  fadds     f0, f4, f0
	  fcmpo     cr0, f0, f1
	  ble-      .loc_0x1B0
	  ble-      .loc_0x1B4
	  fsqrte    f1, f0
	  fmuls     f0, f1, f0
	  b         .loc_0x1B4

	.loc_0x1B0:
	  fmr       f0, f1

	.loc_0x1B4:
	  lfs       f1, 0x24DC(r2)
	  fcmpo     cr0, f0, f1
	  ble-      .loc_0x2FC
	  lfs       f9, 0x2468(r2)
	  lfs       f5, 0x180(r31)
	  fdivs     f10, f9, f0
	  lfs       f7, 0x17C(r31)
	  lfs       f8, 0x184(r31)
	  lfs       f1, 0x24A4(r2)
	  lfs       f4, 0x2480(r2)
	  lfs       f2, 0x17C(r31)
	  fmuls     f13, f6, f10
	  lfs       f6, 0x24E0(r2)
	  fmuls     f12, f3, f10
	  lfs       f3, 0x2458(r2)
	  fmuls     f10, f11, f10
	  fmuls     f5, f13, f5
	  fmadds    f5, f12, f7, f5
	  fmadds    f5, f10, f8, f5
	  fadds     f5, f9, f5
	  fmuls     f5, f5, f1
	  fsubs     f1, f9, f5
	  fmuls     f5, f5, f5
	  fadds     f1, f9, f1
	  fmuls     f5, f0, f5
	  fmuls     f4, f4, f1
	  fmuls     f1, f6, f5
	  fmuls     f12, f12, f4
	  fmuls     f13, f13, f4
	  fmuls     f10, f10, f4
	  fadds     f2, f2, f12
	  stfs      f2, 0x17C(r31)
	  lfs       f2, 0x180(r31)
	  fadds     f2, f2, f13
	  stfs      f2, 0x180(r31)
	  lfs       f2, 0x184(r31)
	  fadds     f2, f2, f10
	  stfs      f2, 0x184(r31)
	  lfs       f5, 0x17C(r31)
	  lfs       f4, 0x180(r31)
	  lfs       f6, 0x184(r31)
	  fmuls     f2, f5, f5
	  fmuls     f4, f4, f4
	  fmuls     f6, f6, f6
	  fadds     f2, f2, f4
	  fadds     f2, f6, f2
	  fcmpo     cr0, f2, f3
	  ble-      .loc_0x290
	  fmadds    f2, f5, f5, f4
	  fadds     f4, f6, f2
	  fcmpo     cr0, f4, f3
	  ble-      .loc_0x294
	  fsqrte    f2, f4
	  fmuls     f4, f2, f4
	  b         .loc_0x294

	.loc_0x290:
	  fmr       f4, f3

	.loc_0x294:
	  lfs       f2, 0x2458(r2)
	  fcmpo     cr0, f4, f2
	  ble-      .loc_0x2CC
	  lfs       f3, 0x2468(r2)
	  lfs       f2, 0x17C(r31)
	  fdivs     f3, f3, f4
	  fmuls     f2, f2, f3
	  stfs      f2, 0x17C(r31)
	  lfs       f2, 0x180(r31)
	  fmuls     f2, f2, f3
	  stfs      f2, 0x180(r31)
	  lfs       f2, 0x184(r31)
	  fmuls     f2, f2, f3
	  stfs      f2, 0x184(r31)

	.loc_0x2CC:
	  lfs       f3, 0x17C(r31)
	  lfs       f2, 0x164(r31)
	  fmadds    f2, f3, f1, f2
	  stfs      f2, 0x164(r31)
	  lfs       f3, 0x180(r31)
	  lfs       f2, 0x168(r31)
	  fmadds    f2, f3, f1, f2
	  stfs      f2, 0x168(r31)
	  lfs       f3, 0x184(r31)
	  lfs       f2, 0x16C(r31)
	  fmadds    f1, f3, f1, f2
	  stfs      f1, 0x16C(r31)

	.loc_0x2FC:
	  lfs       f3, 0x16C(r31)
	  lfs       f2, 0x24E4(r2)
	  lfs       f1, 0x24A4(r2)
	  fdivs     f2, f3, f2
	  fmr       f6, f2
	  fcmpo     cr0, f2, f1
	  bge-      .loc_0x31C
	  fmr       f6, f1

	.loc_0x31C:
	  lwz       r3, -0x6B70(r13)
	  lfs       f1, 0x2468(r2)
	  lbz       r0, 0x2F(r3)
	  fadds     f6, f6, f1
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0x368
	  lfs       f2, 0x164(r31)
	  lfs       f1, 0x24B8(r2)
	  lfs       f5, 0x168(r31)
	  lfs       f4, 0x24B4(r2)
	  fsubs     f3, f2, f1
	  lfs       f2, 0x243C(r2)
	  fsubs     f4, f5, f4
	  lfs       f1, 0x2440(r2)
	  fadds     f2, f3, f2
	  fadds     f1, f4, f1
	  stfs      f2, 0x140(r31)
	  stfs      f1, 0x144(r31)
	  b         .loc_0x398

	.loc_0x368:
	  lfs       f2, 0x164(r31)
	  lfs       f1, 0x24B8(r2)
	  lfs       f5, 0x168(r31)
	  lfs       f4, 0x245C(r2)
	  fsubs     f3, f2, f1
	  lfs       f2, 0x243C(r2)
	  fsubs     f4, f5, f4
	  lfs       f1, 0x2440(r2)
	  fadds     f2, f3, f2
	  fadds     f1, f4, f1
	  stfs      f2, 0x140(r31)
	  stfs      f1, 0x144(r31)

	.loc_0x398:
	  lfs       f1, 0x2434(r2)
	  lfs       f2, 0x2438(r2)
	  fmuls     f3, f6, f1
	  lfs       f1, 0x245C(r2)
	  fmuls     f2, f6, f2
	  fcmpo     cr0, f0, f1
	  stfs      f3, 0x138(r31)
	  stfs      f2, 0x13C(r31)
	  bge-      .loc_0x3F8
	  lwz       r0, 0x148(r31)
	  cmpwi     r0, 0x1
	  beq-      .loc_0x3F8
	  bge-      .loc_0x3D8
	  cmpwi     r0, 0
	  bge-      .loc_0x3E4
	  b         .loc_0x3F8

	.loc_0x3D8:
	  cmpwi     r0, 0x3
	  bge-      .loc_0x3F8
	  b         .loc_0x3F0

	.loc_0x3E4:
	  li        r0, 0x1
	  stw       r0, 0x148(r31)
	  b         .loc_0x3F8

	.loc_0x3F0:
	  li        r0, 0x3
	  stw       r0, 0x148(r31)

	.loc_0x3F8:
	  lwz       r0, 0x148(r31)
	  cmpwi     r0, 0
	  beq-      .loc_0x40C
	  cmpwi     r0, 0x1
	  bne-      .loc_0x41C

	.loc_0x40C:
	  lwz       r3, -0x67A8(r13)
	  li        r4, 0x4007
	  li        r5, 0
	  bl        -0xFD34C

	.loc_0x41C:
	  mr        r3, r31
	  bl        -0xCA4
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00003C
 */
void P2JME::Movie::MessageWindowScreen::__ct(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00026C
 */
void P2JME::Movie::MessageWindowScreen::set((JKRArchive*))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8043599C
 * Size:	000080
 */
void P2JME::Movie::TControl::__ct(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        0xA73C
	  lis       r3, 0x804F
	  li        r0, 0
	  subi      r4, r3, 0x39B4
	  mr        r3, r31
	  stw       r4, 0x0(r31)
	  stw       r0, 0x5C(r31)
	  stw       r0, 0x60(r31)
	  stw       r0, 0x64(r31)
	  stb       r0, 0x68(r31)
	  stw       r0, 0x6C(r31)
	  stb       r0, 0x70(r31)
	  stb       r0, 0x71(r31)
	  stb       r0, 0x72(r31)
	  stb       r0, 0x73(r31)
	  stb       r0, 0x70(r31)
	  stb       r0, 0x71(r31)
	  stb       r0, 0x72(r31)
	  stb       r0, 0x73(r31)
	  lwz       r0, 0x70(r31)
	  ori       r0, r0, 0x1
	  stw       r0, 0x70(r31)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80435A1C
 * Size:	000070
 */
void P2JME::Window::TControl::__dt(void)
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
	  subi      r0, r4, 0x33A4
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x44
	  lis       r5, 0x804F
	  li        r4, 0
	  subi      r0, r5, 0x3610
	  stw       r0, 0x0(r30)
	  bl        -0x42D674

	.loc_0x44:
	  extsh.    r0, r31
	  ble-      .loc_0x54
	  mr        r3, r30
	  bl        -0x4119B8

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
 * Address:	80435A8C
 * Size:	0007B0
 */
void P2JME::Movie::TControl::onInit(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  lis       r4, 0x804A
	  li        r5, 0
	  stw       r0, 0x44(r1)
	  stmw      r27, 0x2C(r1)
	  mr        r29, r3
	  subi      r31, r4, 0x5920
	  addi      r4, r31, 0x7C
	  lwz       r3, -0x6514(r13)
	  bl        -0x12758
	  lwz       r3, -0x6428(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x54
	  lwz       r4, 0x18(r3)
	  mr        r3, r29
	  bl        0x3000
	  lwz       r4, -0x6428(r13)
	  mr        r3, r29
	  lwz       r4, 0x18(r4)
	  bl        0x305C

	.loc_0x54:
	  lwz       r3, -0x6514(r13)
	  addi      r4, r31, 0x9C
	  li        r5, 0
	  bl        -0x12790
	  addi      r3, r31, 0xAC
	  li        r4, 0x1
	  li        r5, 0
	  li        r6, 0x1
	  bl        -0x41A9D0
	  mr.       r27, r3
	  beq-      .loc_0x364
	  li        r3, 0x158
	  bl        -0x411C6C
	  mr.       r28, r3
	  beq-      .loc_0xA0
	  bl        -0xD70
	  lis       r3, 0x804F
	  subi      r0, r3, 0x396C
	  stw       r0, 0x0(r28)

	.loc_0xA0:
	  stw       r28, 0x5C(r29)
	  mr        r6, r27
	  addi      r4, r31, 0x6C
	  li        r5, 0
	  lwz       r30, 0x5C(r29)
	  mr        r3, r30
	  bl        -0x3F6520
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0xD8
	  addi      r3, r31, 0x1C
	  addi      r5, r31, 0x30
	  li        r4, 0x22A
	  crclr     6, 0x6
	  bl        -0x40B520

	.loc_0xD8:
	  li        r3, 0x50
	  bl        -0x411CC4
	  mr.       r28, r3
	  beq-      .loc_0x170
	  bl        -0x247E4
	  lis       r3, 0x804D
	  lis       r5, 0x804D
	  addi      r0, r3, 0x7B0C
	  li        r6, 0
	  stw       r0, 0x0(r28)
	  lis       r4, 0x804F
	  addi      r5, r5, 0x7F2C
	  lfs       f0, 0x2458(r2)
	  stw       r6, 0x18(r28)
	  subi      r0, r4, 0x3810
	  lis       r3, 0x8051
	  stw       r5, 0x0(r28)
	  stw       r0, 0x0(r28)
	  stw       r6, 0x1C(r28)
	  stfs      f0, 0x20(r28)
	  lfsu      f0, 0x41E4(r3)
	  stfs      f0, 0x28(r28)
	  lfs       f0, 0x4(r3)
	  stfs      f0, 0x2C(r28)
	  lfs       f0, 0x8(r3)
	  stfs      f0, 0x30(r28)
	  lfs       f0, 0x0(r3)
	  stfs      f0, 0x38(r28)
	  lfs       f0, 0x4(r3)
	  stfs      f0, 0x3C(r28)
	  lfs       f0, 0x8(r3)
	  stfs      f0, 0x40(r28)
	  lfs       f0, 0x0(r3)
	  stfs      f0, 0x44(r28)
	  lfs       f0, 0x4(r3)
	  stfs      f0, 0x48(r28)
	  lfs       f0, 0x8(r3)
	  stfs      f0, 0x4C(r28)

	.loc_0x170:
	  stw       r28, 0x148(r30)
	  lis       r5, 0x6C6C
	  lis       r4, 0x6D67
	  mr        r3, r30
	  lwz       r7, 0x148(r30)
	  addi      r6, r5, 0x3030
	  addi      r5, r4, 0x6E75
	  bl        -0x10F4
	  li        r3, 0x28
	  bl        -0x411D7C
	  mr.       r28, r3
	  beq-      .loc_0x1E8
	  bl        -0x2489C
	  lis       r3, 0x804D
	  lis       r4, 0x804D
	  addi      r0, r3, 0x7B0C
	  lis       r3, 0x804F
	  stw       r0, 0x0(r28)
	  li        r5, 0
	  addi      r4, r4, 0x7F2C
	  subi      r0, r3, 0x382C
	  stw       r5, 0x18(r28)
	  lfs       f1, 0x2458(r2)
	  stw       r4, 0x0(r28)
	  lfs       f0, 0x24E8(r2)
	  stw       r0, 0x0(r28)
	  stw       r5, 0x1C(r28)
	  stfs      f1, 0x20(r28)
	  stfs      f1, 0x24(r28)
	  stfs      f0, 0x20(r28)

	.loc_0x1E8:
	  stw       r28, 0x14C(r30)
	  lis       r5, 0x6274
	  lis       r4, 0x6D67
	  mr        r3, r30
	  lwz       r7, 0x14C(r30)
	  addi      r6, r5, 0x6E5F
	  addi      r5, r4, 0x5F61
	  bl        -0x116C
	  li        r3, 0x28
	  bl        -0x411DF4
	  mr.       r28, r3
	  beq-      .loc_0x260
	  bl        -0x24914
	  lis       r3, 0x804D
	  lis       r4, 0x804D
	  addi      r0, r3, 0x7B0C
	  lis       r3, 0x804F
	  stw       r0, 0x0(r28)
	  li        r5, 0
	  addi      r4, r4, 0x7F2C
	  subi      r0, r3, 0x382C
	  stw       r5, 0x18(r28)
	  lfs       f1, 0x2458(r2)
	  stw       r4, 0x0(r28)
	  lfs       f0, 0x24E8(r2)
	  stw       r0, 0x0(r28)
	  stw       r5, 0x1C(r28)
	  stfs      f1, 0x20(r28)
	  stfs      f1, 0x24(r28)
	  stfs      f0, 0x20(r28)

	.loc_0x260:
	  stw       r28, 0x150(r30)
	  lis       r5, 0x7961
	  lis       r4, 0x6D
	  mr        r3, r30
	  lwz       r7, 0x150(r30)
	  addi      r6, r5, 0x6A69
	  addi      r5, r4, 0x675F
	  bl        -0x11E4
	  mr        r3, r30
	  lis       r5, 0x616A
	  lwz       r12, 0x0(r30)
	  lis       r4, 0x6D67
	  addi      r6, r5, 0x6931
	  lwz       r12, 0x3C(r12)
	  addi      r5, r4, 0x5F79
	  mtctr     r12
	  bctrl
	  li        r4, 0x1
	  li        r5, 0
	  bl        -0x3FCF8C
	  mr        r3, r30
	  lis       r5, 0x5F30
	  lwz       r12, 0x0(r30)
	  lis       r4, 0x5049
	  addi      r6, r5, 0x3031
	  lwz       r12, 0x3C(r12)
	  addi      r5, r4, 0x4354
	  mtctr     r12
	  bctrl
	  li        r4, 0x1
	  li        r5, 0
	  bl        -0x3FCFBC
	  lwz       r3, 0x5C(r29)
	  lis       r5, 0x656D
	  lis       r4, 0x6D67
	  lwz       r12, 0x0(r3)
	  addi      r6, r5, 0x6F5F
	  addi      r5, r4, 0x5F64
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  mr.       r27, r3
	  bne-      .loc_0x320
	  addi      r3, r31, 0x1C
	  addi      r5, r31, 0x30
	  li        r4, 0x278
	  crclr     6, 0x6
	  bl        -0x40B768

	.loc_0x320:
	  mr        r3, r27
	  lwz       r12, 0x0(r27)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  rlwinm    r0,r3,0,16,31
	  cmplwi    r0, 0x13
	  beq-      .loc_0x354
	  addi      r3, r31, 0x1C
	  addi      r5, r31, 0x30
	  li        r4, 0x279
	  crclr     6, 0x6
	  bl        -0x40B79C

	.loc_0x354:
	  stw       r27, 0x64(r29)
	  lwz       r3, 0x40(r29)
	  lwz       r4, 0x64(r29)
	  bl        0x7080

	.loc_0x364:
	  lwz       r3, -0x6514(r13)
	  addi      r4, r2, 0x24EC
	  li        r5, 0
	  bl        -0x12AA0
	  lwz       r3, -0x6B70(r13)
	  addi      r28, r31, 0x100
	  lbz       r0, 0x2F(r3)
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0x38C
	  addi      r28, r31, 0xD0

	.loc_0x38C:
	  mr        r3, r28
	  li        r4, 0x1
	  li        r5, 0
	  li        r6, 0x1
	  bl        -0x41ACF8
	  mr.       r30, r3
	  beq-      .loc_0x734
	  li        r3, 0x188
	  bl        -0x411F94
	  mr.       r4, r3
	  beq-      .loc_0x590
	  mr        r28, r4
	  bl        -0x109C
	  lis       r4, 0x804F
	  li        r3, -0x1
	  subi      r4, r4, 0x38CC
	  li        r0, 0
	  stw       r4, 0x0(r28)
	  lfs       f0, 0x2458(r2)
	  stw       r3, 0x148(r28)
	  stw       r0, 0x14C(r28)
	  stfs      f0, 0x150(r28)
	  stw       r0, 0x154(r28)
	  stfs      f0, 0x158(r28)
	  stw       r0, 0x15C(r28)
	  stfs      f0, 0x160(r28)
	  bl        -0x12C5C
	  lhz       r27, 0x6(r3)
	  bl        -0x12C64
	  lhz       r3, 0x4(r3)
	  lis       r0, 0x4330
	  stw       r0, 0x8(r1)
	  lfd       f3, 0x2498(r2)
	  stw       r3, 0xC(r1)
	  lfs       f2, 0x24AC(r2)
	  lfd       f0, 0x8(r1)
	  stw       r27, 0x14(r1)
	  fsubs     f1, f0, f3
	  lfs       f0, 0x24B0(r2)
	  stw       r0, 0x10(r1)
	  fmuls     f2, f2, f1
	  lfd       f1, 0x10(r1)
	  fsubs     f1, f1, f3
	  stfs      f2, 0x164(r28)
	  stfs      f1, 0x168(r28)
	  stfs      f0, 0x16C(r28)
	  bl        -0x36C930
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x1C(r1)
	  lfs       f0, 0x2468(r2)
	  stw       r0, 0x18(r1)
	  lfd       f3, 0x24C0(r2)
	  lfd       f1, 0x18(r1)
	  lfs       f2, 0x24BC(r2)
	  fsubs     f3, f1, f3
	  stfs      f0, 0x17C(r28)
	  lfs       f1, 0x2458(r2)
	  fdivs     f0, f3, f2
	  stfs      f0, 0x180(r28)
	  stfs      f1, 0x184(r28)
	  lfs       f3, 0x17C(r28)
	  lfs       f2, 0x180(r28)
	  lfs       f4, 0x184(r28)
	  fmuls     f0, f3, f3
	  fmuls     f2, f2, f2
	  fmuls     f4, f4, f4
	  fadds     f0, f0, f2
	  fadds     f0, f4, f0
	  fcmpo     cr0, f0, f1
	  ble-      .loc_0x4C4
	  fmadds    f0, f3, f3, f2
	  fadds     f2, f4, f0
	  fcmpo     cr0, f2, f1
	  ble-      .loc_0x4C8
	  fsqrte    f0, f2
	  fmuls     f2, f0, f2
	  b         .loc_0x4C8

	.loc_0x4C4:
	  fmr       f2, f1

	.loc_0x4C8:
	  lfs       f0, 0x2458(r2)
	  fcmpo     cr0, f2, f0
	  ble-      .loc_0x500
	  lfs       f1, 0x2468(r2)
	  lfs       f0, 0x17C(r28)
	  fdivs     f1, f1, f2
	  fmuls     f0, f0, f1
	  stfs      f0, 0x17C(r28)
	  lfs       f0, 0x180(r28)
	  fmuls     f0, f0, f1
	  stfs      f0, 0x180(r28)
	  lfs       f0, 0x184(r28)
	  fmuls     f0, f0, f1
	  stfs      f0, 0x184(r28)

	.loc_0x500:
	  lfs       f0, 0x2458(r2)
	  stfs      f0, 0x170(r28)
	  stfs      f0, 0x174(r28)
	  stfs      f0, 0x178(r28)
	  lwz       r3, -0x6B70(r13)
	  lbz       r0, 0x2F(r3)
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0x554
	  lfs       f1, 0x164(r28)
	  lfs       f0, 0x24B8(r2)
	  lfs       f4, 0x168(r28)
	  lfs       f3, 0x24B4(r2)
	  fsubs     f2, f1, f0
	  lfs       f1, 0x243C(r2)
	  fsubs     f3, f4, f3
	  lfs       f0, 0x2440(r2)
	  fadds     f1, f2, f1
	  fadds     f0, f3, f0
	  stfs      f1, 0x140(r28)
	  stfs      f0, 0x144(r28)
	  b         .loc_0x584

	.loc_0x554:
	  lfs       f1, 0x164(r28)
	  lfs       f0, 0x24B8(r2)
	  lfs       f4, 0x168(r28)
	  lfs       f3, 0x245C(r2)
	  fsubs     f2, f1, f0
	  lfs       f1, 0x243C(r2)
	  fsubs     f3, f4, f3
	  lfs       f0, 0x2440(r2)
	  fadds     f1, f2, f1
	  fadds     f0, f3, f0
	  stfs      f1, 0x140(r28)
	  stfs      f0, 0x144(r28)

	.loc_0x584:
	  li        r0, 0
	  mr        r4, r28
	  stb       r0, 0xB0(r28)

	.loc_0x590:
	  stw       r4, 0x60(r29)
	  mr        r6, r30
	  addi      r4, r2, 0x24D4
	  lis       r5, 0x4
	  lwz       r27, 0x60(r29)
	  mr        r3, r27
	  bl        -0x3F6A10
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x5C8
	  addi      r3, r31, 0x1C
	  addi      r5, r31, 0x30
	  li        r4, 0x1AC
	  crclr     6, 0x6
	  bl        -0x40BA10

	.loc_0x5C8:
	  mr        r3, r30
	  addi      r4, r31, 0x3C
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  mr.       r28, r3
	  bne-      .loc_0x5FC
	  addi      r3, r31, 0x1C
	  addi      r5, r31, 0x30
	  li        r4, 0x1B1
	  crclr     6, 0x6
	  bl        -0x40BA44

	.loc_0x5FC:
	  mr        r3, r28
	  bl        -0x3EE770
	  stw       r3, 0x15C(r27)
	  lwz       r0, 0x15C(r27)
	  cmplwi    r0, 0
	  bne-      .loc_0x628
	  addi      r3, r31, 0x1C
	  addi      r5, r31, 0x30
	  li        r4, 0x1B3
	  crclr     6, 0x6
	  bl        -0x40BA70

	.loc_0x628:
	  mr        r3, r27
	  lwz       r4, 0x15C(r27)
	  lwz       r12, 0x0(r27)
	  lwz       r12, 0x68(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r30
	  addi      r4, r31, 0x4C
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  mr.       r28, r3
	  bne-      .loc_0x674
	  addi      r3, r31, 0x1C
	  addi      r5, r31, 0x30
	  li        r4, 0x1B8
	  crclr     6, 0x6
	  bl        -0x40BABC

	.loc_0x674:
	  mr        r3, r28
	  bl        -0x3EE7E8
	  stw       r3, 0x154(r27)
	  lwz       r0, 0x154(r27)
	  cmplwi    r0, 0
	  bne-      .loc_0x6A0
	  addi      r3, r31, 0x1C
	  addi      r5, r31, 0x30
	  li        r4, 0x1BA
	  crclr     6, 0x6
	  bl        -0x40BAE8

	.loc_0x6A0:
	  mr        r3, r27
	  lwz       r4, 0x154(r27)
	  lwz       r12, 0x0(r27)
	  lwz       r12, 0x60(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r30
	  addi      r4, r31, 0x5C
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  mr.       r28, r3
	  bne-      .loc_0x6EC
	  addi      r3, r31, 0x1C
	  addi      r5, r31, 0x30
	  li        r4, 0x1BF
	  crclr     6, 0x6
	  bl        -0x40BB34

	.loc_0x6EC:
	  mr        r3, r28
	  bl        -0x3EE860
	  stw       r3, 0x14C(r27)
	  lwz       r0, 0x14C(r27)
	  cmplwi    r0, 0
	  bne-      .loc_0x718
	  addi      r3, r31, 0x1C
	  addi      r5, r31, 0x30
	  li        r4, 0x1C1
	  crclr     6, 0x6
	  bl        -0x40BB60

	.loc_0x718:
	  mr        r3, r27
	  lwz       r4, 0x14C(r27)
	  lwz       r12, 0x0(r27)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x74C

	.loc_0x734:
	  mr        r6, r28
	  addi      r3, r31, 0x1C
	  addi      r5, r31, 0x12C
	  li        r4, 0x292
	  crclr     6, 0x6
	  bl        -0x40BB94

	.loc_0x74C:
	  lwz       r3, -0x6514(r13)
	  addi      r4, r2, 0x24EC
	  bl        -0x12E7C
	  lwz       r3, -0x6514(r13)
	  addi      r4, r31, 0x9C
	  bl        -0x12E88
	  lwz       r3, -0x6514(r13)
	  addi      r4, r31, 0x140
	  li        r5, 0
	  bl        -0x12EA0
	  mr        r3, r29
	  li        r4, 0x400
	  bl        0x9F34
	  lwz       r3, -0x6514(r13)
	  addi      r4, r31, 0x140
	  bl        -0x12EB0
	  lwz       r3, -0x6514(r13)
	  addi      r4, r31, 0x7C
	  bl        -0x12EBC
	  lmw       r27, 0x2C(r1)
	  li        r3, 0x1
	  lwz       r0, 0x44(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8043623C
 * Size:	000038
 */
void P2JME::Movie::TControl::reset(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        0xA174
	  mr        r3, r31
	  li        r4, 0
	  bl        .loc_0x38
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr

	.loc_0x38:
	*/
}

/*
 * --INFO--
 * Address:	80436274
 * Size:	0004E0
 */
void P2JME::Movie::TControl::setMode((P2JME::Movie::TControl::EModeFlag))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  stfd      f31, 0x30(r1)
	  psq_st    f31,0x38(r1),0,0
	  stw       r31, 0x2C(r1)
	  stw       r30, 0x28(r1)
	  stw       r29, 0x24(r1)
	  stw       r28, 0x20(r1)
	  mr        r30, r3
	  cmpwi     r4, 0x2
	  lwz       r31, 0x6C(r3)
	  stw       r4, 0x6C(r3)
	  beq-      .loc_0x208
	  bge-      .loc_0x4C
	  cmpwi     r4, 0
	  beq-      .loc_0x58
	  bge-      .loc_0x84
	  b         .loc_0x4B4

	.loc_0x4C:
	  cmpwi     r4, 0x4
	  bge-      .loc_0x4B4
	  b         .loc_0x21C

	.loc_0x58:
	  li        r0, 0
	  stb       r0, 0x68(r30)
	  lwz       r3, 0x5C(r30)
	  lwz       r3, 0x148(r3)
	  lwz       r3, 0x18(r3)
	  stb       r0, 0xB0(r3)
	  lwz       r3, 0x3C(r30)
	  lwz       r0, 0x68(r3)
	  ori       r0, r0, 0x1
	  stw       r0, 0x68(r3)
	  b         .loc_0x4B4

	.loc_0x84:
	  lwz       r3, -0x67A8(r13)
	  li        r4, 0x186F
	  li        r5, 0
	  bl        -0xFDCD4
	  lwz       r3, 0x5C(r30)
	  lfs       f1, 0x24A4(r2)
	  bl        .loc_0x4E0
	  lwz       r29, 0x60(r30)
	  bl        -0x36CD78
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0xC(r1)
	  lfs       f0, 0x2468(r2)
	  stw       r0, 0x8(r1)
	  lfd       f3, 0x24C0(r2)
	  lfd       f1, 0x8(r1)
	  lfs       f2, 0x24BC(r2)
	  fsubs     f3, f1, f3
	  stfs      f0, 0x17C(r29)
	  lfs       f1, 0x2458(r2)
	  fdivs     f0, f3, f2
	  stfs      f0, 0x180(r29)
	  stfs      f1, 0x184(r29)
	  lfs       f3, 0x17C(r29)
	  lfs       f2, 0x180(r29)
	  lfs       f4, 0x184(r29)
	  fmuls     f0, f3, f3
	  fmuls     f2, f2, f2
	  fmuls     f4, f4, f4
	  fadds     f0, f0, f2
	  fadds     f0, f4, f0
	  fcmpo     cr0, f0, f1
	  ble-      .loc_0x124
	  fmadds    f0, f3, f3, f2
	  fadds     f2, f4, f0
	  fcmpo     cr0, f2, f1
	  ble-      .loc_0x128
	  fsqrte    f0, f2
	  fmuls     f2, f0, f2
	  b         .loc_0x128

	.loc_0x124:
	  fmr       f2, f1

	.loc_0x128:
	  lfs       f0, 0x2458(r2)
	  fcmpo     cr0, f2, f0
	  ble-      .loc_0x160
	  lfs       f1, 0x2468(r2)
	  lfs       f0, 0x17C(r29)
	  fdivs     f1, f1, f2
	  fmuls     f0, f0, f1
	  stfs      f0, 0x17C(r29)
	  lfs       f0, 0x180(r29)
	  fmuls     f0, f0, f1
	  stfs      f0, 0x180(r29)
	  lfs       f0, 0x184(r29)
	  fmuls     f0, f0, f1
	  stfs      f0, 0x184(r29)

	.loc_0x160:
	  lfs       f0, 0x2458(r2)
	  stfs      f0, 0x170(r29)
	  stfs      f0, 0x174(r29)
	  stfs      f0, 0x178(r29)
	  lwz       r3, -0x6B70(r13)
	  lbz       r0, 0x2F(r3)
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0x1B4
	  lfs       f1, 0x164(r29)
	  lfs       f0, 0x24B8(r2)
	  lfs       f4, 0x168(r29)
	  lfs       f3, 0x24B4(r2)
	  fsubs     f2, f1, f0
	  lfs       f1, 0x243C(r2)
	  fsubs     f3, f4, f3
	  lfs       f0, 0x2440(r2)
	  fadds     f1, f2, f1
	  fadds     f0, f3, f0
	  stfs      f1, 0x140(r29)
	  stfs      f0, 0x144(r29)
	  b         .loc_0x1E4

	.loc_0x1B4:
	  lfs       f1, 0x164(r29)
	  lfs       f0, 0x24B8(r2)
	  lfs       f4, 0x168(r29)
	  lfs       f3, 0x245C(r2)
	  fsubs     f2, f1, f0
	  lfs       f1, 0x243C(r2)
	  fsubs     f3, f4, f3
	  lfs       f0, 0x2440(r2)
	  fadds     f1, f2, f1
	  fadds     f0, f3, f0
	  stfs      f1, 0x140(r29)
	  stfs      f0, 0x144(r29)

	.loc_0x1E4:
	  li        r3, 0x1
	  li        r0, 0
	  stb       r3, 0xB0(r29)
	  stw       r0, 0x148(r29)
	  lwz       r3, 0x3C(r30)
	  lwz       r0, 0x68(r3)
	  ori       r0, r0, 0x1
	  stw       r0, 0x68(r3)
	  b         .loc_0x4B4

	.loc_0x208:
	  lwz       r3, 0x3C(r30)
	  lwz       r0, 0x68(r3)
	  rlwinm    r0,r0,0,0,30
	  stw       r0, 0x68(r3)
	  b         .loc_0x4B4

	.loc_0x21C:
	  lwz       r3, -0x67A8(r13)
	  li        r4, 0x1870
	  li        r5, 0
	  bl        -0xFDE6C
	  lwz       r3, 0x5C(r30)
	  li        r4, 0x1
	  li        r0, 0x3
	  lfs       f1, 0x2458(r2)
	  lwz       r5, 0x148(r3)
	  lfs       f0, 0x24A4(r2)
	  lwz       r3, 0x18(r5)
	  stb       r4, 0xB0(r3)
	  stw       r0, 0x1C(r5)
	  stfs      f1, 0x20(r5)
	  stfs      f0, 0x24(r5)
	  lwz       r29, 0x60(r30)
	  bl        -0x36CF30
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0xC(r1)
	  lfd       f3, 0x24C0(r2)
	  stw       r0, 0x8(r1)
	  lfs       f1, 0x24BC(r2)
	  lfd       f2, 0x8(r1)
	  lfs       f0, 0x24A8(r2)
	  fsubs     f2, f2, f3
	  fdivs     f1, f2, f1
	  fmuls     f0, f0, f1
	  fctiwz    f0, f0
	  stfd      f0, 0x10(r1)
	  lwz       r0, 0x14(r1)
	  cmpwi     r0, 0x1
	  beq-      .loc_0x340
	  bge-      .loc_0x3C4
	  cmpwi     r0, 0
	  bge-      .loc_0x2B0
	  b         .loc_0x3C4

	.loc_0x2B0:
	  bl        -0x13300
	  lhz       r30, 0x6(r3)
	  bl        -0x13308
	  lhz       r28, 0x4(r3)
	  bl        -0x36CF94
	  lis       r4, 0x4330
	  xoris     r0, r3, 0x8000
	  stw       r0, 0x14(r1)
	  neg       r0, r30
	  xoris     r0, r0, 0x8000
	  lfd       f5, 0x24C0(r2)
	  stw       r4, 0x10(r1)
	  lfs       f0, 0x24BC(r2)
	  lfd       f1, 0x10(r1)
	  stw       r28, 0xC(r1)
	  fsubs     f1, f1, f5
	  lfs       f4, 0x24A4(r2)
	  stw       r4, 0x8(r1)
	  lfs       f2, 0x24C8(r2)
	  fdivs     f6, f1, f0
	  stw       r0, 0x1C(r1)
	  lfd       f3, 0x2498(r2)
	  stw       r4, 0x18(r1)
	  lfd       f0, 0x8(r1)
	  lfd       f1, 0x18(r1)
	  fmadds    f4, f4, f6, f2
	  lfs       f2, 0x24CC(r2)
	  fsubs     f3, f0, f3
	  lfs       f0, 0x24B0(r2)
	  fsubs     f1, f1, f5
	  fmuls     f3, f4, f3
	  fmuls     f1, f2, f1
	  stfs      f3, 0x170(r29)
	  stfs      f1, 0x174(r29)
	  stfs      f0, 0x178(r29)
	  b         .loc_0x3C4

	.loc_0x340:
	  bl        -0x13390
	  lhz       r28, 0x6(r3)
	  bl        -0x13398
	  lhz       r30, 0x4(r3)
	  bl        -0x36D024
	  lis       r0, 0x4330
	  xoris     r3, r3, 0x8000
	  stw       r3, 0x1C(r1)
	  lfd       f2, 0x24C0(r2)
	  stw       r0, 0x18(r1)
	  lfs       f0, 0x24BC(r2)
	  lfd       f1, 0x18(r1)
	  stw       r30, 0x14(r1)
	  fsubs     f1, f1, f2
	  lfs       f3, 0x24A4(r2)
	  stw       r0, 0x10(r1)
	  lfs       f2, 0x24C8(r2)
	  fdivs     f5, f1, f0
	  stw       r28, 0xC(r1)
	  lfd       f4, 0x2498(r2)
	  stw       r0, 0x8(r1)
	  lfd       f0, 0x10(r1)
	  lfd       f1, 0x8(r1)
	  fmadds    f5, f3, f5, f2
	  lfs       f2, 0x24D0(r2)
	  fsubs     f3, f0, f4
	  lfs       f0, 0x24B0(r2)
	  fsubs     f1, f1, f4
	  fmuls     f3, f5, f3
	  fmuls     f1, f2, f1
	  stfs      f3, 0x170(r29)
	  stfs      f1, 0x174(r29)
	  stfs      f0, 0x178(r29)

	.loc_0x3C4:
	  bl        -0x36D098
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x1C(r1)
	  lfd       f2, 0x24C0(r2)
	  stw       r0, 0x18(r1)
	  lfs       f0, 0x24BC(r2)
	  lfd       f1, 0x18(r1)
	  fsubs     f1, f1, f2
	  fdivs     f31, f1, f0
	  bl        -0x36D0C0
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x14(r1)
	  lfd       f3, 0x24C0(r2)
	  stw       r0, 0x10(r1)
	  lfs       f2, 0x24BC(r2)
	  lfd       f1, 0x10(r1)
	  lfs       f0, 0x24A4(r2)
	  fsubs     f3, f1, f3
	  lfs       f1, 0x2458(r2)
	  fdivs     f2, f3, f2
	  fmadds    f0, f0, f2, f0
	  stfs      f0, 0x17C(r29)
	  stfs      f31, 0x180(r29)
	  stfs      f1, 0x184(r29)
	  lfs       f3, 0x17C(r29)
	  lfs       f2, 0x180(r29)
	  lfs       f4, 0x184(r29)
	  fmuls     f0, f3, f3
	  fmuls     f2, f2, f2
	  fmuls     f4, f4, f4
	  fadds     f0, f0, f2
	  fadds     f0, f4, f0
	  fcmpo     cr0, f0, f1
	  ble-      .loc_0x470
	  fmadds    f0, f3, f3, f2
	  fadds     f2, f4, f0
	  fcmpo     cr0, f2, f1
	  ble-      .loc_0x474
	  fsqrte    f0, f2
	  fmuls     f2, f0, f2
	  b         .loc_0x474

	.loc_0x470:
	  fmr       f2, f1

	.loc_0x474:
	  lfs       f0, 0x2458(r2)
	  fcmpo     cr0, f2, f0
	  ble-      .loc_0x4AC
	  lfs       f1, 0x2468(r2)
	  lfs       f0, 0x17C(r29)
	  fdivs     f1, f1, f2
	  fmuls     f0, f0, f1
	  stfs      f0, 0x17C(r29)
	  lfs       f0, 0x180(r29)
	  fmuls     f0, f0, f1
	  stfs      f0, 0x180(r29)
	  lfs       f0, 0x184(r29)
	  fmuls     f0, f0, f1
	  stfs      f0, 0x184(r29)

	.loc_0x4AC:
	  li        r0, 0x2
	  stw       r0, 0x148(r29)

	.loc_0x4B4:
	  mr        r3, r31
	  psq_l     f31,0x38(r1),0,0
	  lwz       r0, 0x44(r1)
	  lfd       f31, 0x30(r1)
	  lwz       r31, 0x2C(r1)
	  lwz       r30, 0x28(r1)
	  lwz       r29, 0x24(r1)
	  lwz       r28, 0x20(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr

	.loc_0x4E0:
	*/
}

/*
 * --INFO--
 * Address:	80436754
 * Size:	000024
 */
void P2JME::Movie::MessageWindowScreen::open((float))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x148(r3)
	  bl        -0x140C
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80436778
 * Size:	000228
 */
void P2JME::Movie::TControl::update((Controller*, Controller*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  stw       r30, 0x8(r1)
	  bl        0x9AAC
	  lwz       r0, 0x70(r31)
	  mr        r30, r3
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0x7C
	  lwz       r3, -0x64AC(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x7C
	  lwz       r0, 0x1F0(r3)
	  rlwinm.   r0,r0,0,30,30
	  beq-      .loc_0x7C
	  lbz       r0, 0x68(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x74
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, -0x64AC(r13)
	  li        r4, 0x1
	  li        r5, 0
	  bl        -0x8460

	.loc_0x74:
	  li        r3, 0x1
	  b         .loc_0x210

	.loc_0x7C:
	  lwz       r3, 0x5C(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x98
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x30(r12)
	  mtctr     r12
	  bctrl

	.loc_0x98:
	  lwz       r3, 0x60(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0xB4
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x30(r12)
	  mtctr     r12
	  bctrl

	.loc_0xB4:
	  lwz       r0, 0x6C(r31)
	  cmpwi     r0, 0x2
	  beq-      .loc_0x150
	  bge-      .loc_0xD4
	  cmpwi     r0, 0
	  beq-      .loc_0xE0
	  bge-      .loc_0x12C
	  b         .loc_0x1C8

	.loc_0xD4:
	  cmpwi     r0, 0x4
	  bge-      .loc_0x1C8
	  b         .loc_0x16C

	.loc_0xE0:
	  rlwinm.   r0,r30,0,24,31
	  beq-      .loc_0x120
	  lwz       r3, -0x6C18(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x108
	  li        r4, 0x1
	  addi      r5, r2, 0x24F4
	  li        r6, 0x3
	  bl        -0x2818E4
	  stb       r3, 0x74(r31)

	.loc_0x108:
	  mr        r3, r31
	  li        r4, 0x1
	  bl        -0x614
	  li        r0, 0x1
	  stb       r0, 0x68(r31)
	  b         .loc_0x1C8

	.loc_0x120:
	  li        r0, 0
	  stb       r0, 0x68(r31)
	  b         .loc_0x1C8

	.loc_0x12C:
	  lwz       r3, 0x5C(r31)
	  lwz       r3, 0x148(r3)
	  lwz       r0, 0x1C(r3)
	  cmpwi     r0, 0x2
	  bne-      .loc_0x1C8
	  mr        r3, r31
	  li        r4, 0x2
	  bl        -0x64C
	  b         .loc_0x1C8

	.loc_0x150:
	  lwz       r0, 0x4C(r31)
	  rlwinm.   r0,r0,0,30,30
	  beq-      .loc_0x1C8
	  mr        r3, r31
	  li        r4, 0x3
	  bl        -0x668
	  b         .loc_0x1C8

	.loc_0x16C:
	  lwz       r3, 0x5C(r31)
	  lwz       r3, 0x148(r3)
	  lwz       r0, 0x1C(r3)
	  cmpwi     r0, 0x4
	  bne-      .loc_0x1C8
	  lwz       r3, 0x60(r31)
	  lwz       r0, 0x148(r3)
	  cmpwi     r0, 0x3
	  bne-      .loc_0x1C8
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x70(r31)
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0x1C8
	  lwz       r3, -0x64AC(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x1C8
	  li        r4, 0x1
	  li        r5, 0x1
	  bl        -0x85B4

	.loc_0x1C8:
	  lwz       r3, 0x3C(r31)
	  lwz       r0, 0x68(r3)
	  rlwinm.   r0,r0,0,30,30
	  beq-      .loc_0x1F4
	  lwz       r4, 0x5C(r31)
	  li        r0, 0x1
	  lwz       r3, 0x14C(r4)
	  stw       r0, 0x1C(r3)
	  lwz       r3, 0x150(r4)
	  stw       r0, 0x1C(r3)
	  b         .loc_0x20C

	.loc_0x1F4:
	  lwz       r4, 0x5C(r31)
	  li        r0, 0
	  lwz       r3, 0x14C(r4)
	  stw       r0, 0x1C(r3)
	  lwz       r3, 0x150(r4)
	  stw       r0, 0x1C(r3)

	.loc_0x20C:
	  lbz       r3, 0x68(r31)

	.loc_0x210:
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
 * Address:	804369A0
 * Size:	0000CC
 */
void P2JME::Movie::TControl::draw((Graphics&))
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
	  lwz       r0, 0x5C(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0xB0
	  lwz       r0, 0x6C(r29)
	  cmpwi     r0, 0
	  beq-      .loc_0xB0
	  addi      r3, r30, 0x190
	  lwz       r12, 0x190(r30)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x5C(r29)
	  mr        r4, r30
	  addi      r5, r30, 0x190
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x9C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x64(r29)
	  cmplwi    r4, 0
	  beq-      .loc_0x94
	  addi      r31, r30, 0x210
	  mr        r3, r29
	  mr        r5, r31
	  addi      r4, r4, 0x80
	  bl        0x24D8
	  mr        r3, r31
	  li        r4, 0
	  bl        -0x34D4B8

	.loc_0x94:
	  lwz       r3, 0x60(r29)
	  mr        r4, r30
	  addi      r5, r30, 0x190
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x9C(r12)
	  mtctr     r12
	  bctrl

	.loc_0xB0:
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
 * Address:	80436A6C
 * Size:	000080
 */
void P2JME::Movie::TControl::__dt(void)
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
	  beq-      .loc_0x64
	  lis       r4, 0x804F
	  subi      r0, r4, 0x39B4
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x54
	  lis       r4, 0x804F
	  subi      r0, r4, 0x33A4
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x54
	  lis       r5, 0x804F
	  li        r4, 0
	  subi      r0, r5, 0x3610
	  stw       r0, 0x0(r30)
	  bl        -0x42E6D4

	.loc_0x54:
	  extsh.    r0, r31
	  ble-      .loc_0x64
	  mr        r3, r30
	  bl        -0x412A18

	.loc_0x64:
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
 * Address:	80436AEC
 * Size:	000020
 */
void P2JME::Window::TControl::draw((float (*)[4], float (*)[4]))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        0x2404
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80436B0C
 * Size:	00007C
 */
void P2JME::Window::TControl::createRenderingProcessor(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  li        r3, 0x144
	  bl        -0x412C84
	  mr.       r31, r3
	  beq-      .loc_0x60
	  lwz       r0, 0x38(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0x50
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x57BC
	  li        r4, 0x79
	  subi      r5, r5, 0x58F0
	  crclr     6, 0x6
	  bl        -0x40C518

	.loc_0x50:
	  lwz       r4, 0x38(r30)
	  mr        r3, r31
	  bl        0x8998
	  mr        r31, r3

	.loc_0x60:
	  stw       r31, 0x40(r30)
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
 * Address:	80436B88
 * Size:	000080
 */
void P2JME::Window::TControl::createSequenceProcessor(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  li        r3, 0x70
	  bl        -0x412D00
	  mr.       r31, r3
	  beq-      .loc_0x64
	  lwz       r0, 0x38(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0x50
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x57BC
	  li        r4, 0x79
	  subi      r5, r5, 0x58F0
	  crclr     6, 0x6
	  bl        -0x40C594

	.loc_0x50:
	  lwz       r4, 0x38(r30)
	  mr        r3, r31
	  mr        r5, r30
	  bl        0x86E4
	  mr        r31, r3

	.loc_0x64:
	  stw       r31, 0x3C(r30)
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
 * Address:	80436C08
 * Size:	000038
 */
void P2JME::TControl::setMessageID((unsigned long long))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  addi      r4, r1, 0x8
	  stw       r5, 0x8(r1)
	  stw       r6, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
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
 * Address:	80436C40
 * Size:	000010
 */
void P2JME::TControl::createReference(void)
{
	/*
	.loc_0x0:
	  lwz       r4, -0x6428(r13)
	  lwz       r0, 0x34(r4)
	  stw       r0, 0x38(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80436C50
 * Size:	000010
 */
void P2JME::TControl::createResourceContainer(void)
{
	/*
	.loc_0x0:
	  lwz       r4, -0x6428(r13)
	  lwz       r0, 0x30(r4)
	  stw       r0, 0x44(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80436C60
 * Size:	0000A4
 */
void P2JME::Movie::MessageWindowScreen::__dt(void)
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
	  beq-      .loc_0x88
	  lis       r3, 0x804F
	  subi      r0, r3, 0x396C
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x78
	  lis       r3, 0x804F
	  subi      r0, r3, 0x3B00
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x78
	  lis       r3, 0x804F
	  addic.    r0, r30, 0x118
	  subi      r0, r3, 0x3A60
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x6C
	  lis       r4, 0x804D
	  addi      r3, r30, 0x118
	  addi      r0, r4, 0x7B0C
	  li        r4, 0
	  stw       r0, 0x118(r30)
	  bl        -0x25740

	.loc_0x6C:
	  mr        r3, r30
	  li        r4, 0
	  bl        -0x3F77B8

	.loc_0x78:
	  extsh.    r0, r31
	  ble-      .loc_0x88
	  mr        r3, r30
	  bl        -0x412C30

	.loc_0x88:
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
 * Address:	80436D04
 * Size:	0000A4
 */
void P2JME::Movie::PodIconScreen::__dt(void)
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
	  beq-      .loc_0x88
	  lis       r3, 0x804F
	  subi      r0, r3, 0x38CC
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x78
	  lis       r3, 0x804F
	  subi      r0, r3, 0x3B00
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x78
	  lis       r3, 0x804F
	  addic.    r0, r30, 0x118
	  subi      r0, r3, 0x3A60
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x6C
	  lis       r4, 0x804D
	  addi      r3, r30, 0x118
	  addi      r0, r4, 0x7B0C
	  li        r4, 0
	  stw       r0, 0x118(r30)
	  bl        -0x257E4

	.loc_0x6C:
	  mr        r3, r30
	  li        r4, 0
	  bl        -0x3F785C

	.loc_0x78:
	  extsh.    r0, r31
	  ble-      .loc_0x88
	  mr        r3, r30
	  bl        -0x412CD4

	.loc_0x88:
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
 * Address:	80436DA8
 * Size:	000080
 */
void P2JME::Movie::AbtnPane::__dt(void)
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
	  beq-      .loc_0x64
	  lis       r4, 0x804F
	  subi      r0, r4, 0x382C
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x54
	  lis       r4, 0x804D
	  addi      r0, r4, 0x7F2C
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x54
	  lis       r5, 0x804D
	  li        r4, 0
	  addi      r0, r5, 0x7B0C
	  stw       r0, 0x0(r30)
	  bl        -0x25870

	.loc_0x54:
	  extsh.    r0, r31
	  ble-      .loc_0x64
	  mr        r3, r30
	  bl        -0x412D54

	.loc_0x64:
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
 * Address:	80436E28
 * Size:	000080
 */
void P2JME::Movie::WindowPane::__dt(void)
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
	  beq-      .loc_0x64
	  lis       r4, 0x804F
	  subi      r0, r4, 0x3810
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x54
	  lis       r4, 0x804D
	  addi      r0, r4, 0x7F2C
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x54
	  lis       r5, 0x804D
	  li        r4, 0
	  addi      r0, r5, 0x7B0C
	  stw       r0, 0x0(r30)
	  bl        -0x258F0

	.loc_0x54:
	  extsh.    r0, r31
	  ble-      .loc_0x64
	  mr        r3, r30
	  bl        -0x412DD4

	.loc_0x64:
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
 * Address:	80436EA8
 * Size:	000028
 */
void __sinit_movieMessage_cpp(void)
{
	/*
	.loc_0x0:
	  lis       r4, 0x8051
	  li        r0, -0x1
	  lfs       f0, 0x48B0(r4)
	  lis       r3, 0x804F
	  stw       r0, -0x6448(r13)
	  stfsu     f0, -0x39C0(r3)
	  stfs      f0, -0x6444(r13)
	  stfs      f0, 0x4(r3)
	  stfs      f0, 0x8(r3)
	  blr
	*/
}
