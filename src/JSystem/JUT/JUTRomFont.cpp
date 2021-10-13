

/*
 * --INFO--
 * Address:	........
 * Size:	00003C
 */
void JUTRomFont::JUTRomFont()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8003264C
 * Size:	000054
 */
void JUTRomFont::JUTRomFont(JKRHeap*)
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
	  bl        -0x5524
	  lis       r4, 0x804A
	  mr        r3, r30
	  addi      r0, r4, 0x558
	  mr        r4, r31
	  stw       r0, 0x0(r30)
	  bl        .loc_0x54
	  lwz       r0, 0x14(r1)
	  mr        r3, r30
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr

	.loc_0x54:
	*/
}

/*
 * --INFO--
 * Address:	800326A0
 * Size:	000054
 */
void JUTRomFont::initiate(JKRHeap*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  li        r0, 0
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  stb       r0, 0x4(r3)
	  bl        -0x5554
	  mr        r3, r30
	  mr        r4, r31
	  bl        0xC0
	  li        r0, 0x1
	  stb       r0, 0x4(r30)
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
 * Address:	800326F4
 * Size:	00009C
 */
void JUTRomFont::~JUTRomFont()
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
	  beq-      .loc_0x80
	  lis       r3, 0x804A
	  addi      r0, r3, 0x558
	  stw       r0, 0x0(r30)
	  lwz       r3, -0x76E8(r13)
	  subic.    r0, r3, 0x1
	  stw       r0, -0x76E8(r13)
	  bne-      .loc_0x54
	  lwz       r3, -0x76EC(r13)
	  li        r4, 0
	  bl        -0xF0CC
	  li        r0, 0
	  stw       r0, -0x76EC(r13)
	  stw       r0, -0x76F0(r13)

	.loc_0x54:
	  li        r0, 0
	  cmplwi    r30, 0
	  stb       r0, 0x4(r30)
	  beq-      .loc_0x70
	  lis       r3, 0x804A
	  addi      r0, r3, 0x458
	  stw       r0, 0x0(r30)

	.loc_0x70:
	  extsh.    r0, r31
	  ble-      .loc_0x80
	  mr        r3, r30
	  bl        -0xE6BC

	.loc_0x80:
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
 * Address:	80032790
 * Size:	0000CC
 */
void JUTRomFont::loadImage(JKRHeap*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  mr.       r30, r4
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  bne-      .loc_0x28
	  lwz       r30, -0x77D4(r13)

	.loc_0x28:
	  lwz       r0, -0x76EC(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0xA4
	  bl        0xBB8E4
	  lis       r5, 0x8047
	  rlwinm    r4,r3,0,16,31
	  addi      r3, r5, 0x4280
	  crclr     6, 0x6
	  bl        -0x9514
	  bl        0xBB8CC
	  rlwinm    r0,r3,0,16,31
	  lis       r3, 0x8047
	  mulli     r5, r0, 0xC
	  lis       r4, 0x804A
	  addi      r3, r3, 0x4298
	  addi      r0, r4, 0x540
	  add       r4, r0, r5
	  stw       r4, -0x76F0(r13)
	  lwz       r31, 0x4(r4)
	  mr        r4, r31
	  crclr     6, 0x6
	  bl        -0x9548
	  mr        r3, r31
	  mr        r5, r30
	  li        r4, 0x20
	  bl        -0xF23C
	  stw       r3, -0x76EC(r13)
	  bl        0xBC04C
	  lwz       r3, -0x76EC(r13)
	  lhz       r0, 0xC(r3)
	  stw       r0, 0x8(r29)

	.loc_0xA4:
	  lwz       r3, -0x76E8(r13)
	  addi      r0, r3, 0x1
	  stw       r0, -0x76E8(r13)
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
 * Address:	8003285C
 * Size:	0000F8
 */
void JUTRomFont::setGX()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r3, 0x1
	  stw       r0, 0x14(r1)
	  bl        0xB45F8
	  li        r3, 0x1
	  bl        0xB6344
	  li        r3, 0x1
	  bl        0xB2720
	  li        r3, 0
	  li        r4, 0
	  li        r5, 0
	  li        r6, 0x4
	  bl        0xB618C
	  li        r3, 0x4
	  li        r4, 0
	  li        r5, 0
	  li        r6, 0x1
	  li        r7, 0
	  li        r8, 0
	  li        r9, 0x2
	  bl        0xB45F0
	  li        r3, 0
	  li        r4, 0
	  bl        0xB5BC0
	  li        r3, 0x1
	  li        r4, 0x4
	  li        r5, 0x5
	  li        r6, 0xF
	  bl        0xB6808
	  li        r3, 0
	  li        r4, 0x9
	  li        r5, 0x1
	  li        r6, 0x4
	  li        r7, 0
	  bl        0xB1E20
	  li        r3, 0
	  li        r4, 0xB
	  li        r5, 0x1
	  li        r6, 0x5
	  li        r7, 0
	  bl        0xB1E08
	  li        r3, 0
	  li        r4, 0xD
	  li        r5, 0x1
	  li        r6, 0x2
	  li        r7, 0xF
	  bl        0xB1DF0
	  bl        0xB1DB4
	  li        r3, 0x9
	  li        r4, 0x1
	  bl        0xB195C
	  li        r3, 0xB
	  li        r4, 0x1
	  bl        0xB1950
	  li        r3, 0xD
	  li        r4, 0x1
	  bl        0xB1944
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80032954
 * Size:	000480
 */
void JUTRomFont::drawChar_scale(float, float, float, float, int, bool)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x160(r1)
	  mflr      r0
	  stw       r0, 0x164(r1)
	  stfd      f31, 0x150(r1)
	  psq_st    f31,0x158(r1),0,0
	  stfd      f30, 0x140(r1)
	  psq_st    f30,0x148(r1),0,0
	  stfd      f29, 0x130(r1)
	  psq_st    f29,0x138(r1),0,0
	  stfd      f28, 0x120(r1)
	  psq_st    f28,0x128(r1),0,0
	  stfd      f27, 0x110(r1)
	  psq_st    f27,0x118(r1),0,0
	  stfd      f26, 0x100(r1)
	  psq_st    f26,0x108(r1),0,0
	  stmw      r26, 0xE8(r1)
	  mr.       r27, r4
	  fmr       f28, f1
	  fmr       f30, f2
	  mr        r26, r3
	  fmr       f27, f3
	  fmr       f26, f4
	  bne-      .loc_0x64
	  lfs       f1, -0x7C68(r2)
	  b         .loc_0x43C

	.loc_0x64:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x30(r12)
	  mtctr     r12
	  bctrl
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x44(r1)
	  mr        r3, r26
	  lwz       r12, 0x0(r26)
	  stw       r0, 0x40(r1)
	  lfd       f1, -0x7C60(r2)
	  lfd       f0, 0x40(r1)
	  lwz       r12, 0x34(r12)
	  fsubs     f0, f0, f1
	  fdivs     f31, f27, f0
	  mtctr     r12
	  bctrl
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x4C(r1)
	  cmpwi     r27, 0x100
	  lfd       f1, -0x7C60(r2)
	  addi      r3, r1, 0x8
	  stw       r0, 0x48(r1)
	  lfd       f0, 0x48(r1)
	  fsubs     f0, f0, f1
	  fdivs     f29, f26, f0
	  blt-      .loc_0xE0
	  srawi     r0, r27, 0x8
	  addi      r3, r3, 0x1
	  stb       r0, 0x8(r1)

	.loc_0xE0:
	  stb       r27, 0x0(r3)
	  addi      r3, r1, 0x8
	  addi      r4, r1, 0x14
	  addi      r5, r1, 0x10
	  addi      r6, r1, 0xC
	  addi      r7, r1, 0x18
	  bl        0xBBF04
	  lwz       r4, 0x14(r1)
	  addi      r3, r1, 0x1C
	  li        r5, 0x200
	  li        r6, 0x200
	  li        r7, 0
	  li        r8, 0
	  li        r9, 0
	  li        r10, 0
	  bl        0xB470C
	  lfs       f1, -0x7C68(r2)
	  addi      r3, r1, 0x1C
	  li        r4, 0x1
	  li        r5, 0x1
	  fmr       f2, f1
	  li        r6, 0
	  fmr       f3, f1
	  li        r7, 0
	  li        r8, 0
	  bl        0xB4978
	  addi      r3, r1, 0x1C
	  li        r4, 0
	  bl        0xB4C6C
	  lbz       r0, 0x5(r26)
	  cmplwi    r0, 0
	  beq-      .loc_0x170
	  lwz       r3, 0x18(r1)
	  lwz       r0, 0x8(r26)
	  sub       r31, r0, r3
	  b         .loc_0x174

	.loc_0x170:
	  li        r31, 0

	.loc_0x174:
	  lis       r4, 0x4330
	  xoris     r0, r31, 0x8000
	  stw       r0, 0x4C(r1)
	  mr        r3, r26
	  lwz       r0, 0x18(r1)
	  stw       r4, 0x48(r1)
	  lfd       f3, -0x7C60(r2)
	  xoris     r0, r0, 0x8000
	  lfd       f0, 0x48(r1)
	  lwz       r12, 0x0(r26)
	  fsubs     f0, f0, f3
	  stw       r0, 0x44(r1)
	  lfs       f1, -0x7C64(r2)
	  stw       r4, 0x40(r1)
	  fmuls     f2, f31, f0
	  lwz       r12, 0x1C(r12)
	  lfd       f0, 0x40(r1)
	  fmadds    f28, f2, f1, f28
	  fsubs     f0, f0, f3
	  fmadds    f27, f0, f31, f28
	  mtctr     r12
	  bctrl
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x54(r1)
	  mr        r3, r26
	  lwz       r12, 0x0(r26)
	  stw       r0, 0x50(r1)
	  lfd       f1, -0x7C60(r2)
	  lfd       f0, 0x50(r1)
	  lwz       r12, 0x20(r12)
	  fsubs     f0, f0, f1
	  fnmsubs   f26, f29, f0, f30
	  mtctr     r12
	  bctrl
	  xoris     r6, r3, 0x8000
	  lis       r5, 0x4330
	  lwz       r7, 0x10(r1)
	  mr        r3, r26
	  lwz       r0, 0x18(r1)
	  rlwinm    r4,r7,15,0,16
	  stw       r6, 0x5C(r1)
	  srawi     r4, r4, 0x9
	  add       r0, r7, r0
	  stw       r5, 0x58(r1)
	  addze     r30, r4
	  rlwinm    r4,r0,15,0,16
	  lwz       r0, 0xC(r1)
	  lwz       r12, 0x0(r26)
	  srawi     r4, r4, 0x9
	  lfd       f1, -0x7C60(r2)
	  addze     r29, r4
	  lfd       f0, 0x58(r1)
	  rlwinm    r0,r0,15,0,16
	  srawi     r0, r0, 0x9
	  lwz       r12, 0x24(r12)
	  fsubs     f0, f0, f1
	  addze     r28, r0
	  fmadds    f29, f29, f0, f30
	  mtctr     r12
	  bctrl
	  lwz       r0, 0xC(r1)
	  li        r4, 0
	  li        r5, 0x4
	  add       r0, r0, r3
	  li        r3, 0x80
	  rlwinm    r0,r0,15,0,16
	  srawi     r0, r0, 0x9
	  addze     r27, r0
	  bl        0xB2DAC
	  fctiwz    f7, f28
	  lis       r0, 0x4330
	  fctiwz    f2, f26
	  stw       r0, 0x68(r1)
	  fctiwz    f3, f27
	  lfd       f6, -0x7C60(r2)
	  stfd      f7, 0x60(r1)
	  fctiwz    f1, f29
	  lis       r3, 0xCC01
	  lfs       f4, -0x7C68(r2)
	  stfd      f2, 0x70(r1)
	  lwz       r5, 0x64(r1)
	  lwz       r4, 0x74(r1)
	  extsh     r5, r5
	  stw       r0, 0x78(r1)
	  xoris     r5, r5, 0x8000
	  extsh     r4, r4
	  stw       r5, 0x6C(r1)
	  xoris     r5, r4, 0x8000
	  lfd       f0, 0x68(r1)
	  stfd      f3, 0x80(r1)
	  fsubs     f5, f0, f6
	  stw       r5, 0x7C(r1)
	  lwz       r4, 0x84(r1)
	  lfd       f0, 0x78(r1)
	  extsh     r4, r4
	  stfs      f5, -0x8000(r3)
	  fsubs     f0, f0, f6
	  xoris     r5, r4, 0x8000
	  stfd      f2, 0x90(r1)
	  stfs      f0, -0x8000(r3)
	  lwz       r4, 0x94(r1)
	  stfs      f4, -0x8000(r3)
	  extsh     r4, r4
	  xoris     r6, r4, 0x8000
	  lwz       r4, 0xC(r26)
	  stw       r5, 0x8C(r1)
	  stw       r0, 0x88(r1)
	  stw       r4, -0x8000(r3)
	  lfd       f0, 0x88(r1)
	  sth       r30, -0x8000(r3)
	  fsubs     f2, f0, f6
	  sth       r28, -0x8000(r3)
	  stfd      f3, 0xA0(r1)
	  lwz       r5, 0xA4(r1)
	  stfd      f1, 0xB0(r1)
	  extsh     r5, r5
	  lwz       r4, 0xB4(r1)
	  xoris     r5, r5, 0x8000
	  stw       r6, 0x9C(r1)
	  extsh     r4, r4
	  stw       r0, 0x98(r1)
	  xoris     r4, r4, 0x8000
	  lfd       f0, 0x98(r1)
	  stfs      f2, -0x8000(r3)
	  fsubs     f0, f0, f6
	  stw       r5, 0xAC(r1)
	  stfs      f0, -0x8000(r3)
	  stfs      f4, -0x8000(r3)
	  lwz       r5, 0x10(r26)
	  stw       r0, 0xA8(r1)
	  stw       r5, -0x8000(r3)
	  lfd       f0, 0xA8(r1)
	  sth       r29, -0x8000(r3)
	  fsubs     f2, f0, f6
	  sth       r28, -0x8000(r3)
	  stw       r4, 0xBC(r1)
	  stw       r0, 0xB8(r1)
	  lfd       f0, 0xB8(r1)
	  stfs      f2, -0x8000(r3)
	  fsubs     f0, f0, f6
	  stfs      f0, -0x8000(r3)
	  stfd      f7, 0xC0(r1)
	  lwz       r4, 0xC4(r1)
	  stfs      f4, -0x8000(r3)
	  extsh     r5, r4
	  stfd      f1, 0xD0(r1)
	  xoris     r5, r5, 0x8000
	  lwz       r6, 0x18(r26)
	  lwz       r4, 0xD4(r1)
	  stw       r6, -0x8000(r3)
	  extsh     r4, r4
	  xoris     r4, r4, 0x8000
	  sth       r29, -0x8000(r3)
	  stw       r5, 0xCC(r1)
	  stw       r0, 0xC8(r1)
	  lfd       f0, 0xC8(r1)
	  stw       r4, 0xDC(r1)
	  fsubs     f1, f0, f6
	  stw       r0, 0xD8(r1)
	  lfd       f0, 0xD8(r1)
	  sth       r27, -0x8000(r3)
	  fsubs     f0, f0, f6
	  stfs      f1, -0x8000(r3)
	  stfs      f0, -0x8000(r3)
	  stfs      f4, -0x8000(r3)
	  stw       r0, 0xE0(r1)
	  lwz       r0, 0x14(r26)
	  stw       r0, -0x8000(r3)
	  sth       r30, -0x8000(r3)
	  sth       r27, -0x8000(r3)
	  lwz       r0, 0x18(r1)
	  add       r0, r0, r31
	  xoris     r0, r0, 0x8000
	  stw       r0, 0xE4(r1)
	  lfd       f0, 0xE0(r1)
	  fsubs     f0, f0, f6
	  fmuls     f1, f31, f0

	.loc_0x43C:
	  psq_l     f31,0x158(r1),0,0
	  lfd       f31, 0x150(r1)
	  psq_l     f30,0x148(r1),0,0
	  lfd       f30, 0x140(r1)
	  psq_l     f29,0x138(r1),0,0
	  lfd       f29, 0x130(r1)
	  psq_l     f28,0x128(r1),0,0
	  lfd       f28, 0x120(r1)
	  psq_l     f27,0x118(r1),0,0
	  lfd       f27, 0x110(r1)
	  psq_l     f26,0x108(r1),0,0
	  lfd       f26, 0x100(r1)
	  lmw       r26, 0xE8(r1)
	  lwz       r0, 0x164(r1)
	  mtlr      r0
	  addi      r1, r1, 0x160
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80032DD4
 * Size:	00005C
 */
void JUTRomFont::getHeight() const
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r31, r3
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  add       r3, r3, r31
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80032E30
 * Size:	00000C
 */
void JUTRomFont::getDescent() const
{
	/*
	.loc_0x0:
	  lwz       r3, -0x76EC(r13)
	  lhz       r3, 0xA(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80032E3C
 * Size:	00000C
 */
void JUTRomFont::getAscent() const
{
	/*
	.loc_0x0:
	  lwz       r3, -0x76EC(r13)
	  lhz       r3, 0x8(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80032E48
 * Size:	00000C
 */
void JUTRomFont::getCellHeight() const
{
	/*
	.loc_0x0:
	  lwz       r3, -0x76EC(r13)
	  lhz       r3, 0x12(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80032E54
 * Size:	00000C
 */
void JUTRomFont::getCellWidth() const
{
	/*
	.loc_0x0:
	  lwz       r3, -0x76EC(r13)
	  lhz       r3, 0x10(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80032E60
 * Size:	000060
 */
void JUTRomFont::getWidthEntry(int, JUTFont::TWidth*) const
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  cmpwi     r4, 0x100
	  stw       r0, 0x24(r1)
	  addi      r3, r1, 0x8
	  stw       r31, 0x1C(r1)
	  mr        r31, r5
	  blt-      .loc_0x2C
	  srawi     r0, r4, 0x8
	  addi      r3, r3, 0x1
	  stb       r0, 0x8(r1)

	.loc_0x2C:
	  stb       r4, 0x0(r3)
	  addi      r3, r1, 0x8
	  addi      r4, r1, 0xC
	  bl        0xBBC60
	  lwz       r3, 0xC(r1)
	  li        r0, 0
	  stb       r3, 0x1(r31)
	  stb       r0, 0x0(r31)
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80032EC0
 * Size:	000030
 */
void JUTRomFont::isLeadByte(int) const
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r3, r4
	  stw       r0, 0x14(r1)
	  lwz       r5, -0x76F0(r13)
	  lwz       r12, 0x8(r5)
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
 * Address:	80032EF0
 * Size:	00000C
 */
void JUTRomFont::getWidth() const
{
	/*
	.loc_0x0:
	  lwz       r3, -0x76EC(r13)
	  lhz       r3, 0xC(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80032EFC
 * Size:	00000C
 */
void JUTRomFont::getLeading() const
{
	/*
	.loc_0x0:
	  lwz       r3, -0x76EC(r13)
	  lhz       r3, 0xE(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80032F08
 * Size:	000008
 */
void JUTRomFont::getResFont() const
{
	/*
	.loc_0x0:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80032F10
 * Size:	00000C
 */
void JUTRomFont::getFontType() const
{
	/*
	.loc_0x0:
	  lwz       r3, -0x76F0(r13)
	  lwz       r3, 0x0(r3)
	  blr
	*/
}