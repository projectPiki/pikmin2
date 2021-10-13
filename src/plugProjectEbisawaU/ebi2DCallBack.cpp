

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
 * Address:	803D068C
 * Size:	000060
 */
void ebi::E2DCallBack_Purupuru::do_update(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r0, 0x18(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x4C
	  addi      r3, r31, 0x20
	  bl        -0xA772C
	  stfs      f1, 0x3C(r31)
	  lwz       r3, 0x18(r31)
	  lfs       f0, 0x3C(r31)
	  stfs      f0, 0xCC(r3)
	  stfs      f0, 0xD0(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x4C:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803D06EC
 * Size:	0002CC
 */
void ebi::E2DCallBack_BlinkFontColor::do_update(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x90(r1)
	  mflr      r0
	  stw       r0, 0x94(r1)
	  stfd      f31, 0x80(r1)
	  psq_st    f31,0x88(r1),0,0
	  stfd      f30, 0x70(r1)
	  psq_st    f30,0x78(r1),0,0
	  stmw      r26, 0x58(r1)
	  mr        r27, r3
	  lbz       r0, 0x49(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x40
	  lfs       f1, 0x40(r27)
	  lfs       f0, 0x1738(r2)
	  fcmpo     cr0, f1, f0
	  blt-      .loc_0xB0

	.loc_0x40:
	  lbz       r0, 0x48(r27)
	  cmplwi    r0, 0
	  beq-      .loc_0x80
	  lfs       f2, 0x40(r27)
	  lfs       f1, 0x44(r27)
	  lfs       f0, 0x173C(r2)
	  fadds     f1, f2, f1
	  stfs      f1, 0x40(r27)
	  lfs       f1, 0x40(r27)
	  fcmpo     cr0, f1, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0xB0
	  stfs      f0, 0x40(r27)
	  li        r0, 0
	  stb       r0, 0x48(r27)
	  b         .loc_0xB0

	.loc_0x80:
	  lfs       f2, 0x40(r27)
	  lfs       f1, 0x44(r27)
	  lfs       f0, 0x1740(r2)
	  fsubs     f1, f2, f1
	  stfs      f1, 0x40(r27)
	  lfs       f1, 0x40(r27)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0xB0
	  stfs      f0, 0x40(r27)
	  li        r0, 0x1
	  stb       r0, 0x48(r27)

	.loc_0xB0:
	  lwz       r3, 0x18(r27)
	  cmplwi    r3, 0
	  beq-      .loc_0x2A8
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  rlwinm    r0,r3,0,16,31
	  cmplwi    r0, 0x13
	  bne-      .loc_0x2A8
	  li        r0, -0x1
	  lfs       f0, 0x173C(r2)
	  stw       r0, 0x3C(r1)
	  addi      r3, r27, 0x20
	  addi      r4, r27, 0x30
	  addi      r5, r1, 0x3C
	  stw       r0, 0x38(r1)
	  stw       r0, 0x34(r1)
	  stw       r0, 0x30(r1)
	  lfs       f31, 0x40(r27)
	  fsubs     f30, f0, f31
	  fmr       f2, f31
	  fmr       f1, f30
	  bl        -0xEA58
	  fmr       f1, f30
	  addi      r3, r27, 0x24
	  fmr       f2, f31
	  addi      r4, r27, 0x34
	  addi      r5, r1, 0x38
	  bl        -0xEA70
	  fmr       f1, f30
	  addi      r3, r27, 0x28
	  fmr       f2, f31
	  addi      r4, r27, 0x38
	  addi      r5, r1, 0x34
	  bl        -0xEA88
	  fmr       f1, f30
	  addi      r3, r27, 0x2C
	  fmr       f2, f31
	  addi      r4, r27, 0x3C
	  addi      r5, r1, 0x30
	  bl        -0xEAA0
	  lwz       r0, 0x3C(r1)
	  li        r26, -0x1
	  lwz       r5, 0x38(r1)
	  addi      r4, r1, 0x18
	  stw       r0, 0x2C(r1)
	  lwz       r10, 0x30(r1)
	  stw       r26, 0x40(r1)
	  lbz       r3, 0x2C(r1)
	  lbz       r0, 0x2D(r1)
	  lbz       r8, 0x2E(r1)
	  lbz       r7, 0x2F(r1)
	  stb       r3, 0x40(r1)
	  lwz       r9, 0x34(r1)
	  stw       r5, 0x28(r1)
	  lwz       r31, 0x18(r27)
	  stb       r0, 0x41(r1)
	  lbz       r5, 0x28(r1)
	  mr        r3, r31
	  stw       r26, 0x44(r1)
	  lbz       r0, 0x29(r1)
	  lbz       r27, 0x2A(r1)
	  lbz       r6, 0x2B(r1)
	  stb       r8, 0x42(r1)
	  stb       r7, 0x43(r1)
	  stw       r9, 0x24(r1)
	  lwz       r7, 0x40(r1)
	  stb       r5, 0x44(r1)
	  lbz       r28, 0x24(r1)
	  stw       r7, 0xC(r1)
	  lbz       r29, 0x25(r1)
	  stw       r26, 0x48(r1)
	  lbz       r5, 0xC(r1)
	  lbz       r30, 0x26(r1)
	  stw       r10, 0x20(r1)
	  lbz       r12, 0x27(r1)
	  stb       r0, 0x45(r1)
	  lbz       r0, 0xD(r1)
	  stb       r5, 0x104(r31)
	  lbz       r5, 0xE(r1)
	  stb       r0, 0x105(r31)
	  lbz       r0, 0xF(r1)
	  stb       r5, 0x106(r31)
	  lbz       r11, 0x20(r1)
	  stw       r26, 0x4C(r1)
	  lbz       r10, 0x21(r1)
	  lbz       r9, 0x22(r1)
	  lbz       r8, 0x23(r1)
	  stb       r27, 0x46(r1)
	  stb       r6, 0x47(r1)
	  lwz       r6, 0x44(r1)
	  stb       r0, 0x107(r31)
	  stw       r6, 0x8(r1)
	  lbz       r5, 0x8(r1)
	  lbz       r0, 0x9(r1)
	  stb       r5, 0x108(r31)
	  lbz       r5, 0xA(r1)
	  stb       r0, 0x109(r31)
	  lbz       r0, 0xB(r1)
	  stb       r5, 0x10A(r31)
	  stb       r28, 0x48(r1)
	  stb       r29, 0x49(r1)
	  stb       r30, 0x4A(r1)
	  stb       r12, 0x4B(r1)
	  stb       r0, 0x10B(r31)
	  lwz       r0, 0x48(r1)
	  stb       r11, 0x4C(r1)
	  stw       r0, 0x18(r1)
	  lwz       r12, 0x0(r31)
	  stb       r10, 0x4D(r1)
	  lwz       r12, 0xA8(r12)
	  stb       r9, 0x4E(r1)
	  stb       r8, 0x4F(r1)
	  stw       r7, 0x10(r1)
	  stw       r6, 0x14(r1)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x4C(r1)
	  mr        r3, r31
	  addi      r4, r1, 0x1C
	  stw       r0, 0x1C(r1)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xA4(r12)
	  mtctr     r12
	  bctrl

	.loc_0x2A8:
	  psq_l     f31,0x88(r1),0,0
	  lfd       f31, 0x80(r1)
	  psq_l     f30,0x78(r1),0,0
	  lfd       f30, 0x70(r1)
	  lmw       r26, 0x58(r1)
	  lwz       r0, 0x94(r1)
	  mtlr      r0
	  addi      r1, r1, 0x90
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803D09B8
 * Size:	000118
 */
void ebi::E2DCallBack_BlinkAlpha::do_update(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  mr        r6, r3
	  stw       r0, 0x24(r1)
	  lbz       r0, 0x29(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x2C
	  lfs       f1, 0x20(r6)
	  lfs       f0, 0x1738(r2)
	  fcmpo     cr0, f1, f0
	  blt-      .loc_0x9C

	.loc_0x2C:
	  lbz       r0, 0x28(r6)
	  cmplwi    r0, 0
	  beq-      .loc_0x6C
	  lfs       f2, 0x20(r6)
	  lfs       f1, 0x24(r6)
	  lfs       f0, 0x173C(r2)
	  fadds     f1, f2, f1
	  stfs      f1, 0x20(r6)
	  lfs       f1, 0x20(r6)
	  fcmpo     cr0, f1, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x9C
	  stfs      f0, 0x20(r6)
	  li        r0, 0
	  stb       r0, 0x28(r6)
	  b         .loc_0x9C

	.loc_0x6C:
	  lfs       f2, 0x20(r6)
	  lfs       f1, 0x24(r6)
	  lfs       f0, 0x1740(r2)
	  fsubs     f1, f2, f1
	  stfs      f1, 0x20(r6)
	  lfs       f1, 0x20(r6)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x9C
	  stfs      f0, 0x20(r6)
	  li        r0, 0x1
	  stb       r0, 0x28(r6)

	.loc_0x9C:
	  lwz       r3, 0x18(r6)
	  cmplwi    r3, 0
	  beq-      .loc_0x108
	  lbz       r5, 0x2D(r6)
	  lis       r0, 0x4330
	  lbz       r4, 0x2C(r6)
	  lwz       r12, 0x0(r3)
	  sub       r4, r4, r5
	  stw       r0, 0x8(r1)
	  xoris     r4, r4, 0x8000
	  lfd       f2, 0x1748(r2)
	  stw       r4, 0xC(r1)
	  lfd       f1, 0x1750(r2)
	  lfd       f0, 0x8(r1)
	  stw       r5, 0x14(r1)
	  fsubs     f3, f0, f2
	  lfs       f2, 0x20(r6)
	  stw       r0, 0x10(r1)
	  lwz       r12, 0x24(r12)
	  lfd       f0, 0x10(r1)
	  fsubs     f0, f0, f1
	  fmadds    f0, f3, f2, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x18(r1)
	  lwz       r4, 0x1C(r1)
	  mtctr     r12
	  bctrl

	.loc_0x108:
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803D0AD0
 * Size:	0000C8
 */
void ebi::E2DCallBack_AnmBase::loadAnm((char*, JKRArchive*, long, long))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  mr        r30, r7
	  stw       r29, 0x14(r1)
	  mr        r29, r6
	  stw       r28, 0x10(r1)
	  mr        r28, r3
	  mr        r3, r4
	  mr        r4, r5
	  bl        -0x3ADAE8
	  mr.       r31, r3
	  bne-      .loc_0x58
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  addi      r3, r3, 0x6678
	  li        r4, 0x4A
	  addi      r5, r5, 0x668C
	  crclr     6, 0x6
	  bl        -0x3A64E4

	.loc_0x58:
	  mr        r3, r31
	  bl        -0x389210
	  extsh     r4, r29
	  lis       r0, 0x4330
	  xoris     r4, r4, 0x8000
	  stw       r3, 0x34(r28)
	  lfd       f1, 0x1748(r2)
	  stw       r4, 0xC(r1)
	  stw       r0, 0x8(r1)
	  lfd       f0, 0x8(r1)
	  sth       r29, 0x26(r28)
	  fsubs     f0, f0, f1
	  stfs      f0, 0x30(r28)
	  sth       r29, 0x2A(r28)
	  lwz       r3, 0x34(r28)
	  lha       r0, 0x6(r3)
	  cmpw      r0, r30
	  bge-      .loc_0xA4
	  mr        r30, r0

	.loc_0xA4:
	  sth       r30, 0x28(r28)
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
 * Address:	803D0B98
 * Size:	00010C
 */
void ebi::E2DCallBack_AnmBase::play((float, J3DAnmAttr, bool))
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
	  stw       r29, 0x14(r1)
	  mr        r31, r3
	  fmr       f31, f1
	  lwz       r0, 0x18(r3)
	  mr        r29, r4
	  mr        r30, r5
	  cmplwi    r0, 0
	  bne-      .loc_0x58
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  addi      r3, r3, 0x6678
	  li        r4, 0x5A
	  addi      r5, r5, 0x668C
	  crclr     6, 0x6
	  bl        -0x3A65AC

	.loc_0x58:
	  lwz       r0, 0x34(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x80
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  addi      r3, r3, 0x6678
	  li        r4, 0x5B
	  addi      r5, r5, 0x668C
	  crclr     6, 0x6
	  bl        -0x3A65D4

	.loc_0x80:
	  li        r0, 0x1
	  stb       r0, 0x1C(r31)
	  lwz       r3, 0x18(r31)
	  lwz       r4, 0x34(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x5C(r12)
	  mtctr     r12
	  bctrl
	  stb       r29, 0x24(r31)
	  rlwinm.   r0,r30,0,24,31
	  stfs      f31, 0x2C(r31)
	  beq-      .loc_0xD4
	  lha       r3, 0x26(r31)
	  lis       r0, 0x4330
	  stw       r0, 0x8(r1)
	  xoris     r0, r3, 0x8000
	  lfd       f1, 0x1748(r2)
	  stw       r0, 0xC(r1)
	  lfd       f0, 0x8(r1)
	  fsubs     f0, f0, f1
	  stfs      f0, 0x30(r31)

	.loc_0xD4:
	  lfs       f0, 0x30(r31)
	  li        r0, 0
	  lwz       r3, 0x34(r31)
	  stfs      f0, 0x8(r3)
	  stb       r0, 0x38(r31)
	  psq_l     f31,0x28(r1),0,0
	  lwz       r0, 0x34(r1)
	  lfd       f31, 0x20(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803D0CA4
 * Size:	000110
 */
void ebi::E2DCallBack_AnmBase::playBack((float, bool))
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
	  mr        r31, r3
	  fmr       f31, f1
	  lwz       r0, 0x18(r3)
	  mr        r30, r4
	  cmplwi    r0, 0
	  bne-      .loc_0x50
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  addi      r3, r3, 0x6678
	  li        r4, 0x6B
	  addi      r5, r5, 0x668C
	  crclr     6, 0x6
	  bl        -0x3A66B0

	.loc_0x50:
	  lwz       r0, 0x34(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x78
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  addi      r3, r3, 0x6678
	  li        r4, 0x6C
	  addi      r5, r5, 0x668C
	  crclr     6, 0x6
	  bl        -0x3A66D8

	.loc_0x78:
	  li        r0, 0x1
	  stb       r0, 0x1C(r31)
	  lwz       r3, 0x18(r31)
	  lwz       r4, 0x34(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x5C(r12)
	  mtctr     r12
	  bctrl
	  fabs      f0, f31
	  li        r3, 0x3
	  stb       r3, 0x24(r31)
	  rlwinm.   r0,r30,0,24,31
	  frsp      f0, f0
	  fneg      f0, f0
	  stfs      f0, 0x2C(r31)
	  beq-      .loc_0xDC
	  lha       r3, 0x28(r31)
	  lis       r0, 0x4330
	  stw       r0, 0x8(r1)
	  xoris     r0, r3, 0x8000
	  lfd       f1, 0x1748(r2)
	  stw       r0, 0xC(r1)
	  lfd       f0, 0x8(r1)
	  fsubs     f0, f0, f1
	  stfs      f0, 0x30(r31)

	.loc_0xDC:
	  lfs       f0, 0x30(r31)
	  li        r0, 0
	  lwz       r3, 0x34(r31)
	  stfs      f0, 0x8(r3)
	  stb       r0, 0x38(r31)
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

/*
 * --INFO--
 * Address:	803D0DB4
 * Size:	000014
 */
void ebi::E2DCallBack_AnmBase::stop(void)
{
	/*
	.loc_0x0:
	  li        r4, 0
	  li        r0, 0x1
	  stb       r4, 0x1C(r3)
	  stb       r0, 0x38(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000050
 */
void ebi::E2DCallBack_AnmBase::disconnect(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803D0DC8
 * Size:	00003C
 */
void ebi::E2DCallBack_AnmBase::setStartFrame(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  lis       r0, 0x4330
	  lfd       f1, 0x1748(r2)
	  lha       r4, 0x26(r3)
	  stw       r0, 0x8(r1)
	  xoris     r0, r4, 0x8000
	  stw       r0, 0xC(r1)
	  lfd       f0, 0x8(r1)
	  fsubs     f0, f0, f1
	  stfs      f0, 0x30(r3)
	  lfs       f0, 0x30(r3)
	  lwz       r3, 0x34(r3)
	  stfs      f0, 0x8(r3)
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803D0E04
 * Size:	00003C
 */
void ebi::E2DCallBack_AnmBase::setEndFrame(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  lis       r0, 0x4330
	  lfd       f1, 0x1748(r2)
	  lha       r4, 0x28(r3)
	  stw       r0, 0x8(r1)
	  xoris     r0, r4, 0x8000
	  stw       r0, 0xC(r1)
	  lfd       f0, 0x8(r1)
	  fsubs     f0, f0, f1
	  stfs      f0, 0x30(r3)
	  lfs       f0, 0x30(r3)
	  lwz       r3, 0x34(r3)
	  stfs      f0, 0x8(r3)
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803D0E40
 * Size:	0000C0
 */
void ebi::E2DCallBack_AnmBase::setRandFrame(void)
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
	  lis       r3, 0x4330
	  lha       r4, 0x26(r31)
	  lha       r0, 0x28(r31)
	  xoris     r4, r4, 0x8000
	  stw       r3, 0x8(r1)
	  xoris     r0, r0, 0x8000
	  lfd       f1, 0x1748(r2)
	  stw       r4, 0xC(r1)
	  lfd       f0, 0x8(r1)
	  stw       r0, 0x14(r1)
	  fsubs     f31, f0, f1
	  stw       r3, 0x10(r1)
	  lfd       f0, 0x10(r1)
	  fsubs     f30, f0, f1
	  bl        -0x3078FC
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x1C(r1)
	  fsubs     f0, f30, f31
	  lfd       f3, 0x1748(r2)
	  stw       r0, 0x18(r1)
	  lfs       f1, 0x1758(r2)
	  lfd       f2, 0x18(r1)
	  fsubs     f2, f2, f3
	  fdivs     f1, f2, f1
	  fmadds    f0, f0, f1, f31
	  stfs      f0, 0x30(r31)
	  lfs       f0, 0x30(r31)
	  lwz       r3, 0x34(r31)
	  stfs      f0, 0x8(r3)
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
 * Address:	803D0F00
 * Size:	000054
 */
void ebi::E2DCallBack_AnmBase::getPlayFinRate(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  lis       r4, 0x4330
	  lfd       f2, 0x1748(r2)
	  lha       r5, 0x26(r3)
	  lha       r0, 0x28(r3)
	  xoris     r5, r5, 0x8000
	  stw       r4, 0x8(r1)
	  xoris     r0, r0, 0x8000
	  lfs       f1, 0x30(r3)
	  stw       r5, 0xC(r1)
	  lfd       f0, 0x8(r1)
	  stw       r0, 0x14(r1)
	  fsubs     f3, f0, f2
	  stw       r4, 0x10(r1)
	  lfd       f0, 0x10(r1)
	  fsubs     f1, f1, f3
	  fsubs     f0, f0, f2
	  fsubs     f0, f0, f3
	  fdivs     f1, f1, f0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803D0F54
 * Size:	00005C
 */
void ebi::E2DCallBack_AnmBase::do_update(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r0, 0x18(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x34
	  addi      r3, r31, 0x20
	  bl        -0x3698D0
	  lfs       f0, 0x30(r31)
	  lwz       r3, 0x34(r31)
	  stfs      f0, 0x8(r3)

	.loc_0x34:
	  lbz       r0, 0x25(r31)
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0x48
	  li        r0, 0x1
	  stb       r0, 0x38(r31)

	.loc_0x48:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803D0FB0
 * Size:	000008
 */
void ebi::E2DCallBack_AnmBase::isFinish(void)
{
	/*
	.loc_0x0:
	  lbz       r3, 0x38(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803D0FB8
 * Size:	00014C
 */
void ebi::E2DCallBack_WindowCursor::do_update(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stw       r31, 0x2C(r1)
	  mr        r31, r3
	  lwz       r0, 0x18(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x138
	  lwz       r3, 0x40(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x34
	  subi      r0, r3, 0x1
	  stw       r0, 0x40(r31)

	.loc_0x34:
	  lwz       r4, 0x44(r31)
	  cmplwi    r4, 0
	  beq-      .loc_0x74
	  lwz       r3, 0x40(r31)
	  lis       r0, 0x4330
	  stw       r0, 0x18(r1)
	  lfd       f2, 0x1750(r2)
	  stw       r3, 0x1C(r1)
	  lfd       f0, 0x18(r1)
	  stw       r4, 0x24(r1)
	  fsubs     f1, f0, f2
	  stw       r0, 0x20(r1)
	  lfd       f0, 0x20(r1)
	  fsubs     f0, f0, f2
	  fdivs     f2, f1, f0
	  b         .loc_0x78

	.loc_0x74:
	  lfs       f2, 0x1740(r2)

	.loc_0x78:
	  lfs       f1, 0x173C(r2)
	  addi      r4, r1, 0x8
	  lfs       f3, 0x20(r31)
	  lfs       f0, 0x30(r31)
	  fsubs     f1, f1, f2
	  fsubs     f0, f0, f3
	  fmadds    f0, f1, f0, f3
	  stfs      f0, 0x8(r1)
	  lfs       f2, 0x24(r31)
	  lfs       f0, 0x34(r31)
	  fsubs     f0, f0, f2
	  fmadds    f0, f1, f0, f2
	  stfs      f0, 0xC(r1)
	  lfs       f2, 0x28(r31)
	  lfs       f0, 0x38(r31)
	  fsubs     f0, f0, f2
	  fmadds    f0, f1, f0, f2
	  stfs      f0, 0x10(r1)
	  lfs       f2, 0x2C(r31)
	  lfs       f0, 0x3C(r31)
	  fsubs     f0, f0, f2
	  fmadds    f0, f1, f0, f2
	  stfs      f0, 0x14(r1)
	  lwz       r3, 0x18(r31)
	  bl        -0x399158
	  addi      r3, r31, 0x48
	  bl        -0xA8114
	  stfs      f1, 0x64(r31)
	  lwz       r3, 0x18(r31)
	  lfs       f0, 0x64(r31)
	  stfs      f0, 0xCC(r3)
	  stfs      f0, 0xD0(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x68(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x138
	  lfs       f1, 0x175C(r2)
	  lfs       f0, 0x64(r31)
	  fmuls     f0, f1, f0
	  stfs      f0, 0xCC(r3)
	  stfs      f0, 0xD0(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x138:
	  lwz       r0, 0x34(r1)
	  lwz       r31, 0x2C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}
