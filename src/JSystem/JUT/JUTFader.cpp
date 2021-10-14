

/*
 * --INFO--
 * Address:	8002CE5C
 * Size:	0000AC
 */
void JUTFader::JUTFader(int, int, int, int, JUtility::TColor)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  lis       r10, 0x4330
	  xoris     r0, r4, 0x8000
	  xoris     r9, r5, 0x8000
	  stw       r0, 0xC(r1)
	  add       r0, r4, r6
	  lis       r11, 0x804A
	  lfd       f3, -0x7D08(r2)
	  stw       r10, 0x8(r1)
	  addi      r11, r11, 0x440
	  xoris     r6, r0, 0x8000
	  add       r0, r5, r7
	  lfd       f0, 0x8(r1)
	  xoris     r5, r0, 0x8000
	  stw       r9, 0x14(r1)
	  li        r4, 0
	  lwz       r7, 0x0(r8)
	  fsubs     f1, f0, f3
	  stw       r10, 0x10(r1)
	  li        r0, -0x1
	  stw       r11, 0x0(r3)
	  lfd       f0, 0x10(r1)
	  stw       r7, 0xC(r3)
	  fsubs     f2, f0, f3
	  stfs      f1, 0x10(r3)
	  stw       r6, 0x1C(r1)
	  stw       r10, 0x18(r1)
	  lfd       f0, 0x18(r1)
	  stw       r5, 0x24(r1)
	  fsubs     f1, f0, f3
	  stw       r10, 0x20(r1)
	  lfd       f0, 0x20(r1)
	  stfs      f2, 0x14(r3)
	  fsubs     f0, f0, f3
	  stfs      f1, 0x18(r3)
	  stfs      f0, 0x1C(r3)
	  stw       r4, 0x4(r3)
	  sth       r4, 0x8(r3)
	  sth       r4, 0xA(r3)
	  stw       r4, 0x24(r3)
	  stw       r0, 0x20(r3)
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8002CF08
 * Size:	000100
 */
void JUTFader::control()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r4, 0x20(r3)
	  cmpwi     r4, 0
	  blt-      .loc_0x2C
	  subi      r0, r4, 0x1
	  stw       r0, 0x20(r3)
	  bne-      .loc_0x2C
	  lwz       r0, 0x24(r3)
	  stw       r0, 0x4(r3)

	.loc_0x2C:
	  lwz       r0, 0x4(r3)
	  cmpwi     r0, 0x1
	  beq-      .loc_0xF0
	  cmpwi     r0, 0x2
	  beq-      .loc_0x68
	  bge-      .loc_0x50
	  cmpwi     r0, 0
	  beq-      .loc_0x5C
	  b         .loc_0xE0

	.loc_0x50:
	  cmpwi     r0, 0x4
	  bge-      .loc_0xE0
	  b         .loc_0xA8

	.loc_0x5C:
	  li        r0, 0xFF
	  stb       r0, 0xF(r3)
	  b         .loc_0xE0

	.loc_0x68:
	  lhz       r4, 0xA(r3)
	  addi      r0, r4, 0x1
	  sth       r0, 0xA(r3)
	  rlwinm    r0,r0,0,16,31
	  mulli     r4, r0, 0xFF
	  lhz       r0, 0x8(r3)
	  divw      r0, r4, r0
	  subfic    r0, r0, 0xFF
	  stb       r0, 0xF(r3)
	  lhz       r4, 0xA(r3)
	  lhz       r0, 0x8(r3)
	  cmplw     r4, r0
	  blt-      .loc_0xE0
	  li        r0, 0x1
	  stw       r0, 0x4(r3)
	  b         .loc_0xE0

	.loc_0xA8:
	  lhz       r4, 0xA(r3)
	  addi      r0, r4, 0x1
	  sth       r0, 0xA(r3)
	  rlwinm    r0,r0,0,16,31
	  mulli     r4, r0, 0xFF
	  lhz       r0, 0x8(r3)
	  divw      r0, r4, r0
	  stb       r0, 0xF(r3)
	  lhz       r4, 0xA(r3)
	  lhz       r0, 0x8(r3)
	  cmplw     r4, r0
	  blt-      .loc_0xE0
	  li        r0, 0
	  stw       r0, 0x4(r3)

	.loc_0xE0:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl

	.loc_0xF0:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8002D008
 * Size:	000090
 */
void JUTFader::draw()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x100(r1)
	  mflr      r0
	  stw       r0, 0x104(r1)
	  stw       r31, 0xFC(r1)
	  mr        r31, r3
	  lbz       r0, 0xF(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x7C
	  addi      r3, r1, 0x1C
	  bl        0x8504
	  lwz       r0, 0xC(r31)
	  addi      r3, r1, 0x1C
	  addi      r4, r1, 0x8
	  addi      r5, r1, 0xC
	  stw       r0, 0x18(r1)
	  addi      r6, r1, 0x10
	  addi      r7, r1, 0x14
	  stw       r0, 0x14(r1)
	  stw       r0, 0x10(r1)
	  stw       r0, 0xC(r1)
	  stw       r0, 0x8(r1)
	  bl        0x9630
	  addi      r3, r1, 0x1C
	  addi      r4, r31, 0x10
	  bl        0x976C
	  lis       r4, 0x804A
	  lis       r3, 0x804A
	  addi      r0, r4, 0x600
	  stw       r0, 0x1C(r1)
	  addi      r0, r3, 0x650
	  stw       r0, 0x1C(r1)

	.loc_0x7C:
	  lwz       r0, 0x104(r1)
	  lwz       r31, 0xFC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x100
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00005C
 */
void JUTFader::start(int)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8002D098
 * Size:	000030
 */
void JUTFader::startFadeIn(int)
{
	/*
	.loc_0x0:
	  lwz       r0, 0x4(r3)
	  cntlzw    r5, r0
	  rlwinm.   r0,r5,27,24,31
	  rlwinm    r6,r5,27,5,31
	  beq-      .loc_0x28
	  li        r5, 0x2
	  li        r0, 0
	  stw       r5, 0x4(r3)
	  sth       r0, 0xA(r3)
	  sth       r4, 0x8(r3)

	.loc_0x28:
	  mr        r3, r6
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8002D0C8
 * Size:	000034
 */
void JUTFader::startFadeOut(int)
{
	/*
	.loc_0x0:
	  lwz       r0, 0x4(r3)
	  subfic    r0, r0, 0x1
	  cntlzw    r5, r0
	  rlwinm.   r0,r5,27,24,31
	  rlwinm    r6,r5,27,5,31
	  beq-      .loc_0x2C
	  li        r5, 0x3
	  li        r0, 0
	  stw       r5, 0x4(r3)
	  sth       r0, 0xA(r3)
	  sth       r4, 0x8(r3)

	.loc_0x2C:
	  mr        r3, r6
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000078
 */
void JUTFader::setStatus(JUTFader::EStatus, int)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8002D0FC
 * Size:	000048
 */
void JUTFader::~JUTFader()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr.       r31, r3
	  beq-      .loc_0x30
	  lis       r5, 0x804A
	  extsh.    r0, r4
	  addi      r0, r5, 0x440
	  stw       r0, 0x0(r31)
	  ble-      .loc_0x30
	  bl        -0x9074

	.loc_0x30:
	  lwz       r0, 0x14(r1)
	  mr        r3, r31
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}
