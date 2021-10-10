

/*
 * --INFO--
 * Address:	........
 * Size:	00009C
 */
void J2DWindowEx::J2DWindowEx()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80044E34
 * Size:	0002E8
 */
void J2DWindowEx::J2DWindowEx(J2DPane*, JSURandomInputStream*, unsigned long,
                              J2DMaterial*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0xB0(r1)
	  mflr      r0
	  stw       r0, 0xB4(r1)
	  stmw      r26, 0x98(r1)
	  mr        r28, r3
	  mr        r26, r4
	  mr        r29, r5
	  mr        r30, r7
	  bl        -0x2910
	  lis       r3, 0x804A
	  li        r0, 0
	  addi      r4, r3, 0xB20
	  mr        r3, r29
	  stw       r4, 0x0(r28)
	  stw       r0, 0x174(r28)
	  stw       r0, 0x178(r28)
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  mr        r31, r3
	  mr        r3, r29
	  addi      r4, r1, 0x14
	  li        r5, 0x8
	  bl        -0x1EAC0
	  lwz       r0, 0x14(r1)
	  mr        r3, r29
	  stw       r0, 0x8(r28)
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  mr        r27, r3
	  mr        r3, r29
	  addi      r4, r1, 0xC
	  li        r5, 0x8
	  bl        -0x1E878
	  mr        r3, r28
	  mr        r4, r26
	  mr        r5, r29
	  bl        -0xBDD8
	  lwz       r0, 0x10(r1)
	  mr        r3, r29
	  li        r5, 0
	  add       r4, r27, r0
	  bl        -0x1E7E0
	  mr        r3, r29
	  addi      r4, r1, 0x2C
	  li        r5, 0x40
	  bl        -0x1EB24
	  lis       r3, 0x8048
	  addi      r7, r1, 0x2C
	  subi      r4, r3, 0x7B20
	  addi      r11, r28, 0x128
	  lwz       r0, 0x0(r4)
	  li        r3, 0
	  lwz       r5, 0x4(r4)
	  addi      r10, r28, 0x12C
	  stw       r0, 0x1C(r1)
	  addi      r9, r28, 0x130
	  lwz       r27, 0x8(r4)
	  addi      r8, r28, 0x134
	  lwz       r12, 0xC(r4)
	  li        r0, 0x4
	  stw       r5, 0x20(r1)
	  mr        r4, r3
	  mr        r5, r7
	  addi      r6, r1, 0x1C
	  stw       r27, 0x24(r1)
	  stw       r12, 0x28(r1)
	  stw       r11, 0x1C(r1)
	  stw       r10, 0x20(r1)
	  stw       r9, 0x24(r1)
	  stw       r8, 0x28(r1)
	  mtctr     r0

	.loc_0x12C:
	  lhz       r10, 0x10(r7)
	  addi      r9, r3, 0x158
	  addi      r8, r4, 0x148
	  li        r0, 0
	  sthx      r10, r28, r9
	  stwx      r0, r28, r8
	  lhzx      r0, r28, r9
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0x16C
	  mulli     r0, r0, 0x88
	  add       r0, r30, r0
	  stwx      r0, r28, r8
	  lhzx      r0, r28, r9
	  mulli     r8, r0, 0x88
	  addi      r0, r8, 0x4
	  stwx      r28, r30, r0

	.loc_0x16C:
	  lhz       r8, 0x28(r7)
	  addi      r0, r3, 0x168
	  lwz       r9, 0x0(r6)
	  addi      r7, r7, 0x2
	  sthx      r8, r28, r0
	  addi      r3, r3, 0x2
	  addi      r4, r4, 0x4
	  addi      r6, r6, 0x4
	  lwz       r0, 0x30(r5)
	  addi      r5, r5, 0x4
	  stw       r0, 0x8(r1)
	  lbz       r8, 0x8(r1)
	  lbz       r0, 0x9(r1)
	  stb       r8, 0x0(r9)
	  lbz       r8, 0xA(r1)
	  stb       r0, 0x1(r9)
	  lbz       r0, 0xB(r1)
	  stb       r8, 0x2(r9)
	  stb       r0, 0x3(r9)
	  bdnz+     .loc_0x12C
	  lbz       r3, 0x44(r1)
	  lis       r4, 0x4330
	  stw       r4, 0x80(r1)
	  li        r0, 0
	  lfd       f2, -0x7AB8(r2)
	  stb       r3, 0x144(r28)
	  lfd       f3, -0x7AC0(r2)
	  lhz       r7, 0x46(r1)
	  lhz       r6, 0x48(r1)
	  stw       r7, 0x84(r1)
	  lhz       r3, 0x4A(r1)
	  lhz       r5, 0x4C(r1)
	  add       r3, r7, r3
	  lfd       f0, 0x80(r1)
	  xoris     r3, r3, 0x8000
	  add       r5, r6, r5
	  fsubs     f1, f0, f2
	  xoris     r5, r5, 0x8000
	  stw       r6, 0x8C(r1)
	  stw       r4, 0x88(r1)
	  lfd       f0, 0x88(r1)
	  stw       r3, 0x7C(r1)
	  fsubs     f0, f0, f2
	  stw       r4, 0x78(r1)
	  lfd       f2, 0x78(r1)
	  stfs      f1, 0x114(r28)
	  fsubs     f1, f2, f3
	  stfs      f0, 0x118(r28)
	  stw       r5, 0x74(r1)
	  stw       r4, 0x70(r1)
	  lfd       f0, 0x70(r1)
	  stfs      f1, 0x11C(r28)
	  fsubs     f0, f0, f3
	  stfs      f0, 0x120(r28)
	  lhz       r3, 0x4E(r1)
	  sth       r3, 0x166(r28)
	  lhz       r3, 0x50(r1)
	  sth       r3, 0x164(r28)
	  stw       r0, 0x160(r28)
	  lhz       r0, 0x164(r28)
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0x280
	  mulli     r0, r0, 0x88
	  add       r0, r30, r0
	  stw       r0, 0x160(r28)
	  lhz       r0, 0x164(r28)
	  mulli     r0, r0, 0x88
	  add       r3, r30, r0
	  stw       r28, 0x4(r3)

	.loc_0x280:
	  lwz       r0, 0x18(r1)
	  mr        r3, r29
	  li        r5, 0
	  add       r4, r31, r0
	  bl        -0x1E9BC
	  mr        r3, r28
	  lwz       r12, 0x0(r28)
	  lwz       r12, 0x58(r12)
	  mtctr     r12
	  bctrl
	  li        r0, 0
	  mr        r3, r28
	  stw       r0, 0x100(r28)
	  stw       r0, 0x104(r28)
	  stw       r0, 0x108(r28)
	  stw       r0, 0x10C(r28)
	  stw       r0, 0x124(r28)
	  stw       r0, 0x110(r28)
	  stb       r0, 0x170(r28)
	  bl        0x3C
	  mr        r3, r28
	  lmw       r26, 0x98(r1)
	  lwz       r0, 0xB4(r1)
	  mtlr      r0
	  addi      r1, r1, 0xB0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000B0
 */
void J2DWindowEx::J2DWindowEx(const ResTIMG*, const ResTIMG*, const ResTIMG*,
                              const ResTIMG*, unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000D0
 */
void J2DWindowEx::J2DWindowEx(const char*, const char*, const char*,
                              const char*, unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000C4
 */
void J2DWindowEx::J2DWindowEx(const ResTIMG*, J2DTextureBase, unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000CC
 */
void J2DWindowEx::J2DWindowEx(const char*, J2DTextureBase, unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000B4
 */
void J2DWindowEx::J2DWindowEx(unsigned long long,
                              const JGeometry::TBox2<float>&, const ResTIMG*,
                              const ResTIMG*, const ResTIMG*, const ResTIMG*,
                              unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000D4
 */
void J2DWindowEx::J2DWindowEx(unsigned long long,
                              const JGeometry::TBox2<float>&, const char*,
                              const char*, const char*, const char*,
                              unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000B0
 */
void J2DWindowEx::J2DWindowEx(unsigned long long,
                              const JGeometry::TBox2<float>&, const ResTIMG*,
                              J2DTextureBase, unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000B8
 */
void J2DWindowEx::J2DWindowEx(unsigned long long,
                              const JGeometry::TBox2<float>&, const char*,
                              J2DTextureBase, unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000600
 */
void J2DWindowEx::initialize(unsigned long, const ResTIMG**,
                             const JGeometry::TBox2<float>*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8004511C
 * Size:	000008
 */
void J2DTevBlock::getTevStage(unsigned long)
{
	/*
	.loc_0x0:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80045124
 * Size:	000004
 */
void J2DTevBlock::setTevOrder(unsigned long, J2DTevOrder)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80045128
 * Size:	000008
 */
void J2DTevBlock::insertTexture(unsigned long, const ResTIMG*)
{
	/*
	.loc_0x0:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80045130
 * Size:	000004
 */
void J2DTevBlock::setTevKAlphaSel(unsigned long, unsigned char)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80045134
 * Size:	000004
 */
void J2DTevBlock::setTevKColorSel(unsigned long, unsigned char)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80045138
 * Size:	000004
 */
void J2DTevBlock::setTevStageNum(unsigned char)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8004513C
 * Size:	0001C4
 */
void J2DWindowEx::setMinSize()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  li        r0, 0x1
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  stw       r30, 0x8(r1)
	  sth       r0, 0x140(r3)
	  sth       r0, 0x142(r3)
	  lwz       r3, 0x148(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x1AC
	  lwz       r4, 0x14C(r31)
	  cmplwi    r4, 0
	  beq-      .loc_0x1AC
	  lwz       r5, 0x150(r31)
	  cmplwi    r5, 0
	  beq-      .loc_0x1AC
	  lwz       r6, 0x154(r31)
	  cmplwi    r6, 0
	  beq-      .loc_0x1AC
	  lwz       r3, 0x70(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x1AC
	  lwz       r0, 0x70(r4)
	  cmplwi    r0, 0
	  beq-      .loc_0x1AC
	  lwz       r0, 0x70(r5)
	  cmplwi    r0, 0
	  beq-      .loc_0x1AC
	  lwz       r0, 0x70(r6)
	  cmplwi    r0, 0
	  beq-      .loc_0x1AC
	  lwz       r12, 0x0(r3)
	  li        r4, 0
	  lwz       r12, 0xA0(r12)
	  mtctr     r12
	  bctrl
	  cmplwi    r3, 0
	  beq-      .loc_0x1AC
	  lwz       r3, 0x14C(r31)
	  li        r4, 0
	  lwz       r3, 0x70(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xA0(r12)
	  mtctr     r12
	  bctrl
	  cmplwi    r3, 0
	  beq-      .loc_0x1AC
	  lwz       r3, 0x150(r31)
	  li        r4, 0
	  lwz       r3, 0x70(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xA0(r12)
	  mtctr     r12
	  bctrl
	  cmplwi    r3, 0
	  beq-      .loc_0x1AC
	  lwz       r3, 0x154(r31)
	  li        r4, 0
	  lwz       r3, 0x70(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xA0(r12)
	  mtctr     r12
	  bctrl
	  cmplwi    r3, 0
	  beq-      .loc_0x1AC
	  lwz       r3, 0x14C(r31)
	  li        r4, 0
	  lwz       r3, 0x70(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xA0(r12)
	  mtctr     r12
	  bctrl
	  lwz       r5, 0x148(r31)
	  li        r4, 0
	  lwz       r6, 0x20(r3)
	  lwz       r3, 0x70(r5)
	  lhz       r30, 0x2(r6)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xA0(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x20(r3)
	  li        r4, 0
	  lhz       r0, 0x2(r3)
	  add       r0, r0, r30
	  sth       r0, 0x140(r31)
	  lwz       r3, 0x150(r31)
	  lwz       r3, 0x70(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xA0(r12)
	  mtctr     r12
	  bctrl
	  lwz       r5, 0x148(r31)
	  li        r4, 0
	  lwz       r6, 0x20(r3)
	  lwz       r3, 0x70(r5)
	  lhz       r30, 0x4(r6)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xA0(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x20(r3)
	  lhz       r0, 0x4(r3)
	  add       r0, r0, r30
	  sth       r0, 0x142(r31)

	.loc_0x1AC:
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
 * Address:	80045300
 * Size:	0000F8
 */
void J2DWindowEx::~J2DWindowEx()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  mr        r29, r4
	  stw       r28, 0x10(r1)
	  mr.       r28, r3
	  beq-      .loc_0xD4
	  lis       r3, 0x804A
	  li        r30, 0
	  addi      r0, r3, 0xB20
	  li        r31, 0x1
	  stw       r0, 0x0(r28)
	  b         .loc_0x80

	.loc_0x40:
	  rlwinm    r0,r30,0,24,31
	  lbz       r3, 0x170(r28)
	  slw       r0, r31, r0
	  and.      r0, r3, r0
	  beq-      .loc_0x7C
	  rlwinm    r3,r30,2,22,29
	  addi      r0, r3, 0x148
	  lwzx      r3, r28, r0
	  cmplwi    r3, 0
	  beq-      .loc_0x7C
	  lwz       r12, 0x0(r3)
	  li        r4, 0x1
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl

	.loc_0x7C:
	  addi      r30, r30, 0x1

	.loc_0x80:
	  rlwinm    r0,r30,0,24,31
	  cmplwi    r0, 0x4
	  blt+      .loc_0x40
	  lbz       r0, 0x170(r28)
	  rlwinm.   r0,r0,0,27,27
	  beq-      .loc_0xB8
	  lwz       r3, 0x160(r28)
	  cmplwi    r3, 0
	  beq-      .loc_0xB8
	  lwz       r12, 0x0(r3)
	  li        r4, 0x1
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl

	.loc_0xB8:
	  mr        r3, r28
	  li        r4, 0
	  bl        -0x2018
	  extsh.    r0, r29
	  ble-      .loc_0xD4
	  mr        r3, r28
	  bl        -0x2131C

	.loc_0xD4:
	  lwz       r0, 0x24(r1)
	  mr        r3, r28
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
 * Address:	800453F8
 * Size:	0000A0
 */
void J2DWindowEx::drawSelf(float, float, float (*)[3][4])
{
	/*
	.loc_0x0:
	  stwu      r1, -0x50(r1)
	  mflr      r0
	  stw       r0, 0x54(r1)
	  addi      r5, r1, 0x18
	  stw       r31, 0x4C(r1)
	  mr        r31, r3
	  lfs       f0, 0x20(r3)
	  mr        r3, r4
	  addi      r4, r31, 0x80
	  stfs      f0, 0x8(r1)
	  fadds     f4, f0, f1
	  lfs       f0, 0x24(r31)
	  stfs      f0, 0xC(r1)
	  fadds     f3, f0, f2
	  lfs       f0, 0x28(r31)
	  stfs      f0, 0x10(r1)
	  fadds     f1, f0, f1
	  lfs       f5, 0x2C(r31)
	  fadds     f0, f5, f2
	  stfs      f5, 0x14(r1)
	  stfs      f4, 0x8(r1)
	  stfs      f3, 0xC(r1)
	  stfs      f1, 0x10(r1)
	  stfs      f0, 0x14(r1)
	  bl        0xA4EA8
	  addi      r3, r1, 0x18
	  li        r4, 0
	  bl        0xA4114
	  mr        r3, r31
	  addi      r4, r1, 0x8
	  addi      r5, r31, 0x114
	  bl        .loc_0xA0
	  mr        r3, r31
	  addi      r4, r31, 0x114
	  bl        -0xCFF8
	  lwz       r0, 0x54(r1)
	  lwz       r31, 0x4C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x50
	  blr

	.loc_0xA0:
	*/
}

/*
 * --INFO--
 * Address:	80045498
 * Size:	0006F0
 */
void J2DWindowEx::draw_private(const JGeometry::TBox2<float>&,
                               const JGeometry::TBox2<float>&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x140(r1)
	  mflr      r0
	  stw       r0, 0x144(r1)
	  stfd      f31, 0x130(r1)
	  psq_st    f31,0x138(r1),0,0
	  stfd      f30, 0x120(r1)
	  psq_st    f30,0x128(r1),0,0
	  stfd      f29, 0x110(r1)
	  psq_st    f29,0x118(r1),0,0
	  stfd      f28, 0x100(r1)
	  psq_st    f28,0x108(r1),0,0
	  stfd      f27, 0xF0(r1)
	  psq_st    f27,0xF8(r1),0,0
	  stfd      f26, 0xE0(r1)
	  psq_st    f26,0xE8(r1),0,0
	  stfd      f25, 0xD0(r1)
	  psq_st    f25,0xD8(r1),0,0
	  stmw      r25, 0xB4(r1)
	  mr        r31, r3
	  mr        r30, r4
	  lha       r0, 0x140(r3)
	  lis       r3, 0x4330
	  stw       r3, 0x28(r1)
	  mr        r25, r5
	  xoris     r0, r0, 0x8000
	  lfs       f2, 0x8(r4)
	  stw       r0, 0x2C(r1)
	  lfs       f1, 0x0(r4)
	  lfd       f3, -0x7AC0(r2)
	  lfd       f0, 0x28(r1)
	  fsubs     f1, f2, f1
	  fsubs     f0, f0, f3
	  fcmpo     cr0, f1, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x6A4
	  lha       r0, 0x142(r31)
	  stw       r3, 0x28(r1)
	  xoris     r0, r0, 0x8000
	  lfs       f2, 0xC(r30)
	  stw       r0, 0x2C(r1)
	  lfs       f1, 0x4(r30)
	  lfd       f0, 0x28(r1)
	  fsubs     f1, f2, f1
	  fsubs     f0, f0, f3
	  fcmpo     cr0, f1, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x6A4
	  mr        r29, r31
	  addi      r28, r1, 0x18
	  li        r27, 0
	  li        r26, 0

	.loc_0xCC:
	  lwz       r3, 0x148(r29)
	  cmplwi    r3, 0
	  beq-      .loc_0x6A4
	  lwz       r3, 0x70(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x6A4
	  lwz       r12, 0x0(r3)
	  li        r4, 0
	  lwz       r12, 0xA0(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x0(r28)
	  lwz       r0, 0x0(r28)
	  cmplwi    r0, 0
	  bne-      .loc_0x10C
	  li        r27, 0x1

	.loc_0x10C:
	  addi      r26, r26, 0x1
	  addi      r28, r28, 0x4
	  cmpwi     r26, 0x4
	  addi      r29, r29, 0x4
	  blt+      .loc_0xCC
	  lfs       f2, 0x0(r25)
	  mr        r3, r31
	  lfs       f6, 0x4(r25)
	  addi      r4, r1, 0x8
	  lfs       f5, 0x8(r25)
	  lfs       f1, 0x0(r30)
	  lfs       f4, 0xC(r25)
	  lfs       f0, 0x4(r30)
	  fadds     f3, f2, f1
	  stfs      f2, 0x8(r1)
	  fadds     f1, f5, f1
	  fadds     f2, f6, f0
	  stfs      f6, 0xC(r1)
	  fadds     f0, f4, f0
	  stfs      f5, 0x10(r1)
	  stfs      f4, 0x14(r1)
	  stfs      f3, 0x8(r1)
	  stfs      f2, 0xC(r1)
	  stfs      f1, 0x10(r1)
	  stfs      f0, 0x14(r1)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xC8(r12)
	  mtctr     r12
	  bctrl
	  bl        0x9F0B8
	  li        r3, 0x9
	  li        r4, 0x1
	  bl        0x9EC60
	  li        r3, 0xB
	  li        r4, 0x1
	  bl        0x9EC54
	  li        r3, 0xD
	  li        r4, 0x1
	  bl        0x9EC48
	  rlwinm.   r0,r27,0,24,31
	  bne-      .loc_0x670
	  lwz       r5, 0x24(r1)
	  lis       r12, 0x4330
	  lwz       r4, 0x18(r1)
	  lis       r3, 0x1
	  lwz       r5, 0x20(r5)
	  subi      r7, r3, 0x8000
	  lwz       r6, 0x20(r4)
	  mr        r3, r31
	  lhz       r4, 0x2(r5)
	  li        r9, 0x1
	  lhz       r0, 0x4(r5)
	  xoris     r4, r4, 0x8000
	  lhz       r10, 0x2(r6)
	  stw       r4, 0x2C(r1)
	  xoris     r8, r0, 0x8000
	  xoris     r11, r10, 0x8000
	  lhz       r5, 0x4(r6)
	  stw       r12, 0x28(r1)
	  lfd       f5, -0x7AC0(r2)
	  xoris     r10, r5, 0x8000
	  lfd       f0, 0x28(r1)
	  stw       r8, 0x34(r1)
	  fsubs     f3, f0, f5
	  lfs       f6, 0x8(r30)
	  stw       r12, 0x30(r1)
	  lfs       f4, 0xC(r30)
	  lfd       f0, 0x30(r1)
	  fsubs     f29, f6, f3
	  stw       r11, 0x3C(r1)
	  fsubs     f3, f0, f5
	  lfs       f31, 0x0(r30)
	  stw       r12, 0x38(r1)
	  lbz       r0, 0x144(r31)
	  fmr       f1, f31
	  lfs       f30, 0x4(r30)
	  lfd       f0, 0x38(r1)
	  fsubs     f28, f4, f3
	  rlwinm    r4,r0,25,31,31
	  rlwinm    r0,r0,26,31,31
	  fsubs     f3, f0, f5
	  neg       r4, r4
	  neg       r0, r0
	  andc      r4, r7, r4
	  stw       r10, 0x44(r1)
	  andc      r5, r7, r0
	  stw       r12, 0x40(r1)
	  sub       r6, r7, r4
	  sub       r0, r7, r5
	  fadds     f27, f31, f3
	  lfd       f0, 0x40(r1)
	  fmr       f2, f30
	  stw       r11, 0x4C(r1)
	  rlwinm    r6,r6,0,16,31
	  fsubs     f3, f0, f5
	  stw       r12, 0x48(r1)
	  rlwinm    r7,r0,0,16,31
	  lwz       r8, 0x148(r31)
	  lfd       f0, 0x48(r1)
	  fadds     f26, f30, f3
	  stw       r10, 0x54(r1)
	  fsubs     f3, f0, f5
	  stw       r12, 0x50(r1)
	  lfd       f0, 0x50(r1)
	  fsubs     f4, f0, f5
	  bl        0x86C
	  lwz       r4, 0x24(r1)
	  lis       r10, 0x4330
	  lwz       r3, 0x18(r1)
	  lis       r5, 0x1
	  lwz       r4, 0x20(r4)
	  subi      r9, r5, 0x8000
	  lwz       r3, 0x20(r3)
	  fmr       f1, f29
	  lhz       r4, 0x2(r4)
	  fmr       f2, f30
	  lhz       r0, 0x4(r3)
	  mr        r3, r31
	  xoris     r4, r4, 0x8000
	  stw       r4, 0x5C(r1)
	  xoris     r7, r0, 0x8000
	  lbz       r11, 0x144(r31)
	  stw       r10, 0x58(r1)
	  lfd       f4, -0x7AC0(r2)
	  rlwinm    r5,r11,27,31,31
	  lfd       f0, 0x58(r1)
	  rlwinm    r0,r11,28,31,31
	  neg       r4, r5
	  stw       r7, 0x64(r1)
	  neg       r0, r0
	  lwz       r8, 0x14C(r31)
	  lwz       r6, 0x148(r31)
	  andc      r5, r9, r0
	  stw       r10, 0x60(r1)
	  fsubs     f3, f0, f4
	  andc      r4, r9, r4
	  sub       r11, r6, r8
	  sub       r0, r8, r6
	  lfd       f0, 0x60(r1)
	  sub       r6, r9, r4
	  or        r11, r11, r0
	  sub       r0, r9, r5
	  fsubs     f4, f0, f4
	  rlwinm    r9,r11,1,31,31
	  rlwinm    r6,r6,0,16,31
	  rlwinm    r7,r0,0,16,31
	  bl        0x7C8
	  lwz       r3, 0x18(r1)
	  lis       r0, 0x4330
	  lbz       r6, 0x144(r31)
	  fsubs     f25, f29, f27
	  lwz       r3, 0x20(r3)
	  lis       r5, 0x1
	  stw       r0, 0x68(r1)
	  rlwinm    r4,r6,28,31,31
	  lhz       r3, 0x4(r3)
	  rlwinm    r7,r6,27,31,31
	  lfd       f4, -0x7AC0(r2)
	  xoris     r0, r3, 0x8000
	  subi      r6, r5, 0x8000
	  stw       r0, 0x6C(r1)
	  neg       r3, r4
	  andc      r5, r6, r3
	  neg       r0, r7
	  lfd       f0, 0x68(r1)
	  and       r4, r6, r0
	  xori      r0, r5, 0x8000
	  fmr       f1, f27
	  fmr       f2, f30
	  lwz       r8, 0x14C(r31)
	  fmr       f3, f25
	  mr        r3, r31
	  fsubs     f4, f0, f4
	  mr        r6, r4
	  rlwinm    r7,r0,0,16,31
	  li        r9, 0
	  bl        0x750
	  lwz       r3, 0x24(r1)
	  lis       r7, 0x4330
	  lbz       r0, 0x144(r31)
	  lis       r4, 0x1
	  lwz       r9, 0x20(r3)
	  subi      r10, r4, 0x8000
	  rlwinm    r3,r0,31,31,31
	  rlwinm    r5,r0,0,31,31
	  lhz       r0, 0x2(r9)
	  neg       r4, r3
	  lhz       r6, 0x4(r9)
	  neg       r5, r5
	  xoris     r0, r0, 0x8000
	  stw       r7, 0x70(r1)
	  xoris     r3, r6, 0x8000
	  lfd       f4, -0x7AC0(r2)
	  stw       r0, 0x74(r1)
	  andc      r4, r10, r4
	  lwz       r8, 0x154(r31)
	  andc      r5, r10, r5
	  lwz       r9, 0x14C(r31)
	  fmr       f1, f29
	  lfd       f0, 0x70(r1)
	  fmr       f2, f28
	  stw       r3, 0x7C(r1)
	  sub       r6, r9, r8
	  sub       r0, r8, r9
	  or        r0, r6, r0
	  sub       r6, r10, r4
	  rlwinm    r9,r0,1,31,31
	  stw       r7, 0x78(r1)
	  fsubs     f3, f0, f4
	  sub       r0, r10, r5
	  lfd       f0, 0x78(r1)
	  mr        r3, r31
	  rlwinm    r6,r6,0,16,31
	  rlwinm    r7,r0,0,16,31
	  fsubs     f4, f0, f4
	  bl        0x6B4
	  lwz       r3, 0x24(r1)
	  lis       r0, 0x4330
	  lbz       r5, 0x144(r31)
	  lis       r4, 0x1
	  lwz       r3, 0x20(r3)
	  subi      r6, r4, 0x8000
	  rlwinm    r4,r5,0,31,31
	  stw       r0, 0x80(r1)
	  lhz       r3, 0x4(r3)
	  rlwinm    r7,r5,31,31,31
	  neg       r4, r4
	  lfd       f4, -0x7AC0(r2)
	  xoris     r3, r3, 0x8000
	  fmr       f1, f27
	  stw       r3, 0x84(r1)
	  andc      r5, r6, r4
	  neg       r4, r7
	  fmr       f2, f28
	  lfd       f0, 0x80(r1)
	  and       r4, r6, r4
	  xori      r0, r5, 0x8000
	  fmr       f3, f25
	  lwz       r8, 0x154(r31)
	  fsubs     f4, f0, f4
	  mr        r3, r31
	  mr        r6, r4
	  rlwinm    r7,r0,0,16,31
	  li        r9, 0
	  bl        0x640
	  lwz       r3, 0x24(r1)
	  lis       r0, 0x4330
	  lbz       r5, 0x144(r31)
	  fsubs     f25, f28, f26
	  lwz       r3, 0x20(r3)
	  lis       r4, 0x1
	  rlwinm    r6,r5,31,31,31
	  stw       r0, 0x88(r1)
	  lhz       r3, 0x2(r3)
	  lfd       f3, -0x7AC0(r2)
	  rlwinm    r5,r5,0,31,31
	  xoris     r0, r3, 0x8000
	  neg       r6, r6
	  stw       r0, 0x8C(r1)
	  subi      r3, r4, 0x8000
	  neg       r0, r5
	  fmr       f1, f29
	  lfd       f0, 0x88(r1)
	  and       r5, r3, r0
	  andc      r4, r3, r6
	  fmr       f2, f26
	  fmr       f4, f25
	  xori      r0, r4, 0x8000
	  fsubs     f3, f0, f3
	  lwz       r8, 0x154(r31)
	  mr        r3, r31
	  mr        r7, r5
	  rlwinm    r6,r0,0,16,31
	  li        r9, 0
	  bl        0x5C8
	  lwz       r4, 0x18(r1)
	  lis       r10, 0x4330
	  lwz       r3, 0x24(r1)
	  lis       r5, 0x1
	  lwz       r4, 0x20(r4)
	  subi      r9, r5, 0x8000
	  lwz       r3, 0x20(r3)
	  fmr       f1, f31
	  lhz       r4, 0x2(r4)
	  fmr       f2, f28
	  lhz       r0, 0x4(r3)
	  mr        r3, r31
	  xoris     r4, r4, 0x8000
	  stw       r4, 0x94(r1)
	  xoris     r7, r0, 0x8000
	  lbz       r11, 0x144(r31)
	  stw       r10, 0x90(r1)
	  lfd       f4, -0x7AC0(r2)
	  rlwinm    r5,r11,29,31,31
	  lfd       f0, 0x90(r1)
	  rlwinm    r0,r11,30,31,31
	  neg       r4, r5
	  stw       r7, 0x9C(r1)
	  neg       r0, r0
	  lwz       r8, 0x150(r31)
	  lwz       r6, 0x154(r31)
	  andc      r5, r9, r0
	  stw       r10, 0x98(r1)
	  fsubs     f3, f0, f4
	  andc      r4, r9, r4
	  sub       r11, r6, r8
	  sub       r0, r8, r6
	  lfd       f0, 0x98(r1)
	  sub       r6, r9, r4
	  or        r11, r11, r0
	  sub       r0, r9, r5
	  fsubs     f4, f0, f4
	  rlwinm    r9,r11,1,31,31
	  rlwinm    r6,r6,0,16,31
	  rlwinm    r7,r0,0,16,31
	  bl        0x524
	  lwz       r3, 0x18(r1)
	  lis       r0, 0x4330
	  lis       r4, 0x1
	  lbz       r5, 0x144(r31)
	  lwz       r3, 0x20(r3)
	  subi      r6, r4, 0x8000
	  rlwinm    r4,r5,29,31,31
	  rlwinm    r5,r5,30,31,31
	  lhz       r3, 0x2(r3)
	  neg       r4, r4
	  neg       r5, r5
	  stw       r0, 0xA0(r1)
	  xoris     r3, r3, 0x8000
	  andc      r4, r6, r4
	  stw       r3, 0xA4(r1)
	  and       r5, r6, r5
	  xori      r0, r4, 0x8000
	  lfd       f3, -0x7AC0(r2)
	  lfd       f0, 0xA0(r1)
	  fmr       f1, f31
	  fmr       f2, f26
	  lwz       r8, 0x150(r31)
	  fmr       f4, f25
	  mr        r3, r31
	  fsubs     f3, f0, f3
	  mr        r7, r5
	  rlwinm    r6,r0,0,16,31
	  li        r9, 0
	  bl        0x4B0

	.loc_0x670:
	  li        r3, 0
	  li        r4, 0x4
	  bl        0xA296C
	  li        r3, 0
	  li        r4, 0xFF
	  li        r5, 0xFF
	  li        r6, 0x4
	  bl        0xA2EF8
	  li        r3, 0
	  bl        0x9F470
	  li        r3, 0xD
	  li        r4, 0
	  bl        0x9E74C

	.loc_0x6A4:
	  psq_l     f31,0x138(r1),0,0
	  lfd       f31, 0x130(r1)
	  psq_l     f30,0x128(r1),0,0
	  lfd       f30, 0x120(r1)
	  psq_l     f29,0x118(r1),0,0
	  lfd       f29, 0x110(r1)
	  psq_l     f28,0x108(r1),0,0
	  lfd       f28, 0x100(r1)
	  psq_l     f27,0xF8(r1),0,0
	  lfd       f27, 0xF0(r1)
	  psq_l     f26,0xE8(r1),0,0
	  lfd       f26, 0xE0(r1)
	  psq_l     f25,0xD8(r1),0,0
	  lfd       f25, 0xD0(r1)
	  lmw       r25, 0xB4(r1)
	  lwz       r0, 0x144(r1)
	  mtlr      r0
	  addi      r1, r1, 0x140
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80045B88
 * Size:	00042C
 */
void J2DWindowEx::drawContents(const JGeometry::TBox2<float>&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x80(r1)
	  mflr      r0
	  stw       r0, 0x84(r1)
	  stfd      f31, 0x70(r1)
	  psq_st    f31,0x78(r1),0,0
	  stfd      f30, 0x60(r1)
	  psq_st    f30,0x68(r1),0,0
	  stfd      f29, 0x50(r1)
	  psq_st    f29,0x58(r1),0,0
	  stfd      f28, 0x40(r1)
	  psq_st    f28,0x48(r1),0,0
	  stw       r31, 0x3C(r1)
	  stw       r30, 0x38(r1)
	  stw       r29, 0x34(r1)
	  mr        r30, r4
	  mr        r29, r3
	  lfs       f1, 0x8(r4)
	  li        r0, 0
	  lfs       f0, 0x0(r4)
	  fcmpo     cr0, f1, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x70
	  lfs       f1, 0xC(r30)
	  lfs       f0, 0x4(r30)
	  fcmpo     cr0, f1, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x70
	  li        r0, 0x1

	.loc_0x70:
	  rlwinm.   r0,r0,0,24,31
	  beq-      .loc_0x3F0
	  lwz       r3, 0x160(r29)
	  cmplwi    r3, 0
	  bne-      .loc_0x88
	  b         .loc_0x3F0

	.loc_0x88:
	  lbz       r0, 0xE(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x3F0
	  bl        0xC62C
	  bl        0x9EAB0
	  li        r3, 0x9
	  li        r4, 0x1
	  bl        0x9E658
	  li        r3, 0xB
	  li        r4, 0x1
	  bl        0x9E64C
	  lwz       r7, 0x160(r29)
	  lwz       r6, 0x128(r29)
	  lhz       r0, 0x1C(r7)
	  lwz       r5, 0x130(r29)
	  rlwinm    r0,r0,0,31,31
	  lwz       r4, 0x12C(r29)
	  lwz       r3, 0x134(r29)
	  cmplwi    r0, 0x1
	  stw       r6, 0x1C(r1)
	  stw       r5, 0x18(r1)
	  stw       r4, 0x14(r1)
	  stw       r3, 0x10(r1)
	  bne-      .loc_0x184
	  lbz       r0, 0xF(r7)
	  cmpwi     r0, 0x1
	  bne-      .loc_0x1A8
	  lbz       r0, 0x1F(r1)
	  lis       r3, 0x8081
	  lbz       r7, 0xB3(r29)
	  subi      r9, r3, 0x7F7F
	  lbz       r4, 0x1B(r1)
	  mullw     r5, r0, r7
	  lbz       r0, 0x13(r1)
	  lbz       r3, 0x17(r1)
	  mullw     r6, r4, r7
	  mullw     r4, r3, r7
	  mullw     r0, r0, r7
	  mulhw     r7, r9, r5
	  mulhw     r3, r9, r6
	  add       r5, r7, r5
	  srawi     r7, r5, 0x7
	  mulhw     r5, r9, r4
	  rlwinm    r8,r7,1,31,31
	  add       r3, r3, r6
	  add       r7, r7, r8
	  srawi     r6, r3, 0x7
	  stb       r7, 0x1F(r1)
	  add       r4, r5, r4
	  rlwinm    r5,r6,1,31,31
	  mulhw     r3, r9, r0
	  add       r6, r6, r5
	  srawi     r4, r4, 0x7
	  stb       r6, 0x1B(r1)
	  rlwinm    r5,r4,1,31,31
	  add       r0, r3, r0
	  srawi     r0, r0, 0x7
	  add       r4, r4, r5
	  rlwinm    r3,r0,1,31,31
	  stb       r4, 0x17(r1)
	  add       r0, r0, r3
	  stb       r0, 0x13(r1)
	  b         .loc_0x1A8

	.loc_0x184:
	  lbz       r0, 0xB4(r29)
	  cmplwi    r0, 0
	  beq-      .loc_0x1A8
	  lbz       r0, 0xB3(r29)
	  addi      r4, r1, 0xC
	  li        r3, 0x2
	  stw       r0, 0x8(r1)
	  stw       r0, 0xC(r1)
	  bl        0xA1048

	.loc_0x1A8:
	  lwz       r3, 0x160(r29)
	  li        r31, 0
	  lwz       r3, 0x70(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x2B0
	  lwz       r12, 0x0(r3)
	  li        r4, 0
	  lwz       r12, 0xA0(r12)
	  mtctr     r12
	  bctrl
	  cmplwi    r3, 0
	  beq-      .loc_0x2B0
	  li        r31, 0x1
	  li        r3, 0xD
	  li        r4, 0x1
	  bl        0x9E518
	  lwz       r3, 0x160(r29)
	  li        r4, 0
	  lwz       r3, 0x70(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xA0(r12)
	  mtctr     r12
	  bctrl
	  lwz       r5, 0x20(r3)
	  lis       r0, 0x4330
	  lwz       r3, 0x160(r29)
	  li        r4, 0
	  lhz       r5, 0x2(r5)
	  lwz       r3, 0x70(r3)
	  xoris     r5, r5, 0x8000
	  stw       r0, 0x20(r1)
	  lwz       r12, 0x0(r3)
	  stw       r5, 0x24(r1)
	  lfd       f1, -0x7AC0(r2)
	  lfd       f0, 0x20(r1)
	  lwz       r12, 0xA0(r12)
	  fsubs     f28, f0, f1
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x20(r3)
	  lis       r0, 0x4330
	  stw       r0, 0x28(r1)
	  lhz       r0, 0x4(r3)
	  lfs       f1, 0x8(r30)
	  xoris     r0, r0, 0x8000
	  lfs       f0, 0x0(r30)
	  stw       r0, 0x2C(r1)
	  fsubs     f4, f1, f0
	  lfs       f3, 0xC(r30)
	  lfs       f2, 0x4(r30)
	  lfd       f1, -0x7AC0(r2)
	  lfd       f0, 0x28(r1)
	  fsubs     f2, f3, f2
	  fdivs     f5, f4, f28
	  lfs       f4, -0x7AAC(r2)
	  lfs       f3, -0x7AA8(r2)
	  fsubs     f0, f0, f1
	  fsubs     f1, f5, f4
	  fdivs     f2, f2, f0
	  fsubs     f0, f2, f4
	  fneg      f1, f1
	  fneg      f0, f0
	  fmuls     f31, f1, f3
	  fmuls     f29, f0, f3
	  fadds     f28, f31, f5
	  fadds     f30, f29, f2

	.loc_0x2B0:
	  li        r3, 0
	  li        r4, 0x9
	  li        r5, 0x1
	  li        r6, 0x4
	  li        r7, 0
	  bl        0x9E8BC
	  li        r3, 0
	  li        r4, 0xD
	  li        r5, 0x1
	  li        r6, 0x4
	  li        r7, 0
	  bl        0x9E8A4
	  li        r3, 0x80
	  li        r4, 0
	  li        r5, 0x4
	  bl        0x9FB14
	  lfs       f0, 0x0(r30)
	  lis       r3, 0xCC01
	  rlwinm.   r0,r31,0,24,31
	  lfs       f1, 0x4(r30)
	  stfs      f0, -0x8000(r3)
	  lfs       f0, -0x7AB0(r2)
	  stfs      f1, -0x8000(r3)
	  lwz       r0, 0x1C(r1)
	  stfs      f0, -0x8000(r3)
	  stw       r0, -0x8000(r3)
	  beq-      .loc_0x324
	  stfs      f31, -0x8000(r3)
	  stfs      f29, -0x8000(r3)

	.loc_0x324:
	  lfs       f0, 0x8(r30)
	  lis       r3, 0xCC01
	  rlwinm.   r0,r31,0,24,31
	  lfs       f1, 0x4(r30)
	  stfs      f0, -0x8000(r3)
	  lfs       f0, -0x7AB0(r2)
	  stfs      f1, -0x8000(r3)
	  lwz       r0, 0x14(r1)
	  stfs      f0, -0x8000(r3)
	  stw       r0, -0x8000(r3)
	  beq-      .loc_0x358
	  stfs      f28, -0x8000(r3)
	  stfs      f29, -0x8000(r3)

	.loc_0x358:
	  lfs       f0, 0x8(r30)
	  lis       r3, 0xCC01
	  rlwinm.   r0,r31,0,24,31
	  lfs       f1, 0xC(r30)
	  stfs      f0, -0x8000(r3)
	  lfs       f0, -0x7AB0(r2)
	  stfs      f1, -0x8000(r3)
	  lwz       r0, 0x10(r1)
	  stfs      f0, -0x8000(r3)
	  stw       r0, -0x8000(r3)
	  beq-      .loc_0x38C
	  stfs      f28, -0x8000(r3)
	  stfs      f30, -0x8000(r3)

	.loc_0x38C:
	  lfs       f0, 0x0(r30)
	  lis       r3, 0xCC01
	  rlwinm.   r0,r31,0,24,31
	  lfs       f1, 0xC(r30)
	  stfs      f0, -0x8000(r3)
	  lfs       f0, -0x7AB0(r2)
	  stfs      f1, -0x8000(r3)
	  lwz       r0, 0x18(r1)
	  stfs      f0, -0x8000(r3)
	  stw       r0, -0x8000(r3)
	  beq-      .loc_0x3C0
	  stfs      f31, -0x8000(r3)
	  stfs      f30, -0x8000(r3)

	.loc_0x3C0:
	  li        r3, 0
	  li        r4, 0xD
	  li        r5, 0x1
	  li        r6, 0x2
	  li        r7, 0xF
	  bl        0x9E7AC
	  li        r3, 0
	  li        r4, 0x9
	  li        r5, 0x1
	  li        r6, 0x3
	  li        r7, 0
	  bl        0x9E794

	.loc_0x3F0:
	  psq_l     f31,0x78(r1),0,0
	  lfd       f31, 0x70(r1)
	  psq_l     f30,0x68(r1),0,0
	  lfd       f30, 0x60(r1)
	  psq_l     f29,0x58(r1),0,0
	  lfd       f29, 0x50(r1)
	  psq_l     f28,0x48(r1),0,0
	  lfd       f28, 0x40(r1)
	  lwz       r31, 0x3C(r1)
	  lwz       r30, 0x38(r1)
	  lwz       r0, 0x84(r1)
	  lwz       r29, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x80
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80045FB4
 * Size:	000264
 */
void J2DWindowEx::drawFrameTexture(float, float, float, float, unsigned short,
                                   unsigned short, unsigned short,
                                   unsigned short, J2DMaterial*, bool)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x80(r1)
	  mflr      r0
	  stw       r0, 0x84(r1)
	  stfd      f31, 0x70(r1)
	  psq_st    f31,0x78(r1),0,0
	  stfd      f30, 0x60(r1)
	  psq_st    f30,0x68(r1),0,0
	  stfd      f29, 0x50(r1)
	  psq_st    f29,0x58(r1),0,0
	  stfd      f28, 0x40(r1)
	  psq_st    f28,0x48(r1),0,0
	  stmw      r25, 0x24(r1)
	  mr.       r31, r8
	  fmr       f28, f1
	  fmr       f29, f2
	  mr        r25, r3
	  mr        r27, r4
	  mr        r28, r5
	  mr        r29, r6
	  mr        r30, r7
	  mr        r26, r9
	  beq-      .loc_0x230
	  lbz       r0, 0xE(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x230
	  rlwinm.   r0,r26,0,24,31
	  fadds     f31, f28, f3
	  fadds     f30, f29, f4
	  beq-      .loc_0x7C
	  mr        r3, r31
	  bl        0xC21C

	.loc_0x7C:
	  li        r0, -0x1
	  mr        r3, r25
	  stw       r0, 0x14(r1)
	  bl        -0xCF5C
	  lhz       r0, 0x1C(r31)
	  rlwinm    r0,r0,0,31,31
	  cmplwi    r0, 0x1
	  bne-      .loc_0x128
	  lbz       r0, 0xF(r31)
	  cmpwi     r0, 0x1
	  bne-      .loc_0x184
	  addic.    r0, r31, 0x10
	  li        r4, 0xFF
	  beq-      .loc_0xB8
	  lbz       r4, 0x13(r31)

	.loc_0xB8:
	  cmplwi    r3, 0
	  beq-      .loc_0xF8
	  lbz       r0, 0xB4(r25)
	  cmplwi    r0, 0
	  beq-      .loc_0xF8
	  lbz       r0, 0xB3(r3)
	  rlwinm    r4,r4,0,24,31
	  lis       r3, 0x8081
	  mullw     r0, r4, r0
	  subi      r3, r3, 0x7F7F
	  mulhw     r3, r3, r0
	  add       r0, r3, r0
	  srawi     r0, r0, 0x7
	  rlwinm    r3,r0,1,31,31
	  add       r0, r0, r3
	  rlwinm    r4,r0,0,24,31

	.loc_0xF8:
	  li        r0, -0x100
	  rlwimi    r0,r4,0,24,31
	  stw       r0, 0x10(r1)
	  lbz       r5, 0x10(r1)
	  lbz       r4, 0x11(r1)
	  lbz       r3, 0x12(r1)
	  lbz       r0, 0x13(r1)
	  stb       r5, 0x14(r1)
	  stb       r4, 0x15(r1)
	  stb       r3, 0x16(r1)
	  stb       r0, 0x17(r1)
	  b         .loc_0x184

	.loc_0x128:
	  cmplwi    r3, 0
	  beq-      .loc_0x184
	  lbz       r0, 0xB4(r25)
	  cmplwi    r0, 0
	  beq-      .loc_0x184
	  rlwinm.   r0,r26,0,24,31
	  beq-      .loc_0x184
	  lbz       r0, 0xB3(r3)
	  lis       r3, 0x8081
	  lbz       r6, 0x13(r31)
	  subi      r5, r3, 0x7F7F
	  addi      r4, r1, 0xC
	  li        r3, 0x2
	  mullw     r0, r6, r0
	  mulhw     r5, r5, r0
	  add       r0, r5, r0
	  srawi     r0, r0, 0x7
	  rlwinm    r5,r0,1,31,31
	  add       r0, r0, r5
	  rlwinm    r0,r0,0,24,31
	  stw       r0, 0x8(r1)
	  stw       r0, 0xC(r1)
	  bl        0xA0C40

	.loc_0x184:
	  li        r3, 0
	  li        r4, 0x9
	  li        r5, 0x1
	  li        r6, 0x4
	  li        r7, 0
	  bl        0x9E5BC
	  li        r3, 0x80
	  li        r4, 0
	  li        r5, 0x4
	  bl        0x9F82C
	  lis       r8, 0xCC01
	  lfs       f0, -0x7AB0(r2)
	  stfs      f28, -0x8000(r8)
	  li        r3, 0
	  lwz       r0, 0x14(r1)
	  li        r4, 0x9
	  stfs      f29, -0x8000(r8)
	  li        r5, 0x1
	  li        r6, 0x3
	  li        r7, 0
	  stfs      f0, -0x8000(r8)
	  stw       r0, -0x8000(r8)
	  sth       r29, -0x8000(r8)
	  sth       r30, -0x8000(r8)
	  stfs      f31, -0x8000(r8)
	  stfs      f29, -0x8000(r8)
	  stfs      f0, -0x8000(r8)
	  stw       r0, -0x8000(r8)
	  sth       r27, -0x8000(r8)
	  sth       r30, -0x8000(r8)
	  stfs      f31, -0x8000(r8)
	  stfs      f30, -0x8000(r8)
	  stfs      f0, -0x8000(r8)
	  stw       r0, -0x8000(r8)
	  sth       r27, -0x8000(r8)
	  sth       r28, -0x8000(r8)
	  stfs      f28, -0x8000(r8)
	  stfs      f30, -0x8000(r8)
	  stfs      f0, -0x8000(r8)
	  stw       r0, -0x8000(r8)
	  sth       r29, -0x8000(r8)
	  sth       r28, -0x8000(r8)
	  bl        0x9E528

	.loc_0x230:
	  psq_l     f31,0x78(r1),0,0
	  lfd       f31, 0x70(r1)
	  psq_l     f30,0x68(r1),0,0
	  lfd       f30, 0x60(r1)
	  psq_l     f29,0x58(r1),0,0
	  lfd       f29, 0x50(r1)
	  psq_l     f28,0x48(r1),0,0
	  lfd       f28, 0x40(r1)
	  lmw       r25, 0x24(r1)
	  lwz       r0, 0x84(r1)
	  mtlr      r0
	  addi      r1, r1, 0x80
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80046218
 * Size:	000194
 */
void J2DWindowEx::draw(const JGeometry::TBox2<float>&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x60(r1)
	  mflr      r0
	  stw       r0, 0x64(r1)
	  stmw      r26, 0x48(r1)
	  mr        r30, r3
	  mr        r31, r4
	  addi      r28, r1, 0x18
	  mr        r29, r30
	  li        r27, 0
	  li        r26, 0

	.loc_0x28:
	  lwz       r3, 0x148(r29)
	  cmplwi    r3, 0
	  beq-      .loc_0x180
	  lwz       r3, 0x70(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x180
	  lwz       r12, 0x0(r3)
	  li        r4, 0
	  lwz       r12, 0xA0(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x0(r28)
	  lwz       r0, 0x0(r28)
	  cmplwi    r0, 0
	  bne-      .loc_0x68
	  li        r27, 0x1

	.loc_0x68:
	  addi      r26, r26, 0x1
	  addi      r28, r28, 0x4
	  cmpwi     r26, 0x4
	  addi      r29, r29, 0x4
	  blt+      .loc_0x28
	  rlwinm.   r0,r27,0,24,31
	  bne-      .loc_0x138
	  lwz       r4, 0x20(r1)
	  lis       r5, 0x4330
	  lwz       r3, 0x1C(r1)
	  lwz       r6, 0x20(r4)
	  lwz       r4, 0x20(r3)
	  lwz       r3, 0x18(r1)
	  lhz       r6, 0x4(r6)
	  lwz       r7, 0x20(r3)
	  lhz       r0, 0x2(r4)
	  xoris     r6, r6, 0x8000
	  lhz       r3, 0x4(r7)
	  xoris     r4, r0, 0x8000
	  lhz       r0, 0x2(r7)
	  xoris     r3, r3, 0x8000
	  stw       r6, 0x2C(r1)
	  xoris     r0, r0, 0x8000
	  lfs       f1, 0xC(r31)
	  stw       r5, 0x28(r1)
	  lfs       f0, 0x4(r31)
	  stw       r4, 0x34(r1)
	  lfd       f5, -0x7AC0(r2)
	  fsubs     f6, f1, f0
	  stw       r5, 0x30(r1)
	  lfd       f1, 0x28(r1)
	  lfd       f0, 0x30(r1)
	  fsubs     f4, f1, f5
	  lfs       f3, 0x8(r31)
	  lfs       f2, 0x0(r31)
	  fsubs     f1, f0, f5
	  stw       r3, 0x3C(r1)
	  fsubs     f2, f3, f2
	  stw       r5, 0x38(r1)
	  fsubs     f3, f6, f4
	  lfd       f0, 0x38(r1)
	  fsubs     f2, f2, f1
	  stw       r0, 0x44(r1)
	  fsubs     f1, f0, f5
	  stw       r5, 0x40(r1)
	  lfd       f0, 0x40(r1)
	  stfs      f1, 0xC(r1)
	  fsubs     f0, f0, f5
	  stfs      f2, 0x10(r1)
	  stfs      f0, 0x8(r1)
	  stfs      f3, 0x14(r1)
	  b         .loc_0x164

	.loc_0x138:
	  lfs       f3, 0xC(r31)
	  lfs       f1, 0x4(r31)
	  lfs       f2, 0x8(r31)
	  lfs       f0, -0x7AB0(r2)
	  fsubs     f3, f3, f1
	  lfs       f1, 0x0(r31)
	  stfs      f0, 0x8(r1)
	  fsubs     f1, f2, f1
	  stfs      f0, 0xC(r1)
	  stfs      f1, 0x10(r1)
	  stfs      f3, 0x14(r1)

	.loc_0x164:
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  addi      r5, r1, 0x8
	  lwz       r12, 0x98(r12)
	  mtctr     r12
	  bctrl

	.loc_0x180:
	  lmw       r26, 0x48(r1)
	  lwz       r0, 0x64(r1)
	  mtlr      r0
	  addi      r1, r1, 0x60
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800463AC
 * Size:	000128
 */
void J2DWindowEx::draw(const JGeometry::TBox2<float>&,
                       const JGeometry::TBox2<float>&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x60(r1)
	  mflr      r0
	  stw       r0, 0x64(r1)
	  stw       r31, 0x5C(r1)
	  mr        r31, r5
	  stw       r30, 0x58(r1)
	  mr        r30, r4
	  stw       r29, 0x54(r1)
	  mr        r29, r3
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x58(r12)
	  mtctr     r12
	  bctrl
	  lbz       r0, 0xB2(r29)
	  mr        r3, r29
	  lfs       f3, -0x7AB0(r2)
	  stb       r0, 0xB3(r29)
	  fmr       f4, f3
	  lfs       f1, 0x0(r30)
	  lwz       r12, 0x0(r29)
	  lfs       f2, 0x4(r30)
	  lwz       r12, 0x48(r12)
	  mtctr     r12
	  bctrl
	  addi      r3, r29, 0x50
	  li        r4, 0
	  bl        0xA3164
	  li        r3, 0
	  bl        0xA31FC
	  lfs       f3, 0xC(r30)
	  mr        r3, r29
	  lfs       f1, 0x4(r30)
	  mr        r5, r31
	  lfs       f2, 0x8(r30)
	  addi      r4, r1, 0x8
	  lfs       f0, -0x7AB0(r2)
	  fsubs     f3, f3, f1
	  lfs       f1, 0x0(r30)
	  stfs      f0, 0x8(r1)
	  fsubs     f1, f2, f1
	  stfs      f0, 0xC(r1)
	  stfs      f1, 0x10(r1)
	  stfs      f3, 0x14(r1)
	  bl        -0xFC0
	  li        r31, 0

	.loc_0xB4:
	  mr        r3, r31
	  li        r4, 0
	  li        r5, 0x1
	  li        r6, 0x2
	  li        r7, 0x3
	  bl        0xA2458
	  addi      r31, r31, 0x1
	  cmpwi     r31, 0x4
	  blt+      .loc_0xB4
	  li        r3, 0
	  bl        0xA1ECC
	  li        r31, 0

	.loc_0xE4:
	  mr        r3, r31
	  bl        0xA1EE4
	  addi      r31, r31, 0x1
	  cmpwi     r31, 0x10
	  blt+      .loc_0xE4
	  addi      r3, r1, 0x18
	  bl        0xA3DF8
	  addi      r3, r1, 0x18
	  li        r4, 0
	  bl        0xA30C4
	  lwz       r0, 0x64(r1)
	  lwz       r31, 0x5C(r1)
	  lwz       r30, 0x58(r1)
	  lwz       r29, 0x54(r1)
	  mtlr      r0
	  addi      r1, r1, 0x60
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000F8
 */
void J2DWindowEx::setTevOrder(bool)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800464D4
 * Size:	000124
 */
void J2DWindowEx::setTevStage(bool)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stmw      r27, 0xC(r1)
	  mr        r31, r3
	  rlwinm    r30,r4,0,24,31
	  li        r28, 0
	  mr        r29, r31

	.loc_0x20:
	  lwz       r3, 0x148(r29)
	  li        r4, 0
	  lwz       r3, 0x70(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x60(r12)
	  mtctr     r12
	  bctrl
	  lwz       r5, 0x148(r29)
	  mr        r27, r3
	  li        r4, 0
	  lwz       r3, 0x70(r5)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xA0(r12)
	  mtctr     r12
	  bctrl
	  cmplwi    r3, 0
	  li        r4, 0
	  beq-      .loc_0x90
	  lwz       r3, 0x20(r3)
	  lbz       r0, 0x0(r3)
	  cmpwi     r0, 0
	  beq-      .loc_0x80
	  cmpwi     r0, 0x1
	  bne-      .loc_0x90

	.loc_0x80:
	  lbz       r0, 0x1(r3)
	  cmpwi     r0, 0
	  bne-      .loc_0x90
	  li        r4, 0x1

	.loc_0x90:
	  cmplwi    r30, 0
	  bne-      .loc_0xB8
	  rlwinm    r5,r4,0,24,31
	  mr        r3, r31
	  neg       r0, r5
	  mr        r4, r27
	  or        r0, r0, r5
	  rlwinm    r5,r0,1,31,31
	  bl        .loc_0x124
	  b         .loc_0x100

	.loc_0xB8:
	  rlwinm.   r0,r4,0,24,31
	  mr        r3, r31
	  mr        r4, r27
	  li        r5, 0x3
	  beq-      .loc_0xD0
	  li        r5, 0x4

	.loc_0xD0:
	  bl        .loc_0x124
	  lwz       r3, 0x148(r29)
	  li        r4, 0x1
	  lwz       r3, 0x70(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x60(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  mr        r3, r31
	  li        r5, 0x2
	  bl        .loc_0x124

	.loc_0x100:
	  addi      r28, r28, 0x1
	  addi      r29, r29, 0x4
	  cmpwi     r28, 0x4
	  blt+      .loc_0x20
	  lmw       r27, 0xC(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr

	.loc_0x124:
	*/
}

/*
 * --INFO--
 * Address:	800465F8
 * Size:	0002BC
 */
void J2DWindowEx::setStage(J2DTevStage*, J2DWindowEx::stage_enum)
{
	/*
	.loc_0x0:
	  stwu      r1, -0xA0(r1)
	  lis       r3, 0x8048
	  stmw      r14, 0x58(r1)
	  subi      r17, r3, 0x7B20
	  rlwinm    r16,r5,2,0,29
	  addi      r14, r1, 0x40
	  mulli     r15, r5, 0x5
	  addi      r8, r1, 0x8
	  addi      r3, r1, 0xC
	  addi      r5, r1, 0xB
	  addi      r6, r1, 0xA
	  addi      r7, r1, 0x9
	  lwz       r18, 0x90(r17)
	  lwz       r19, 0x94(r17)
	  lwz       r20, 0x98(r17)
	  lwz       r21, 0x9C(r17)
	  lwz       r22, 0xA0(r17)
	  lwz       r23, 0xA4(r17)
	  stw       r18, 0x40(r1)
	  lwz       r24, 0xA8(r17)
	  lwz       r25, 0xAC(r17)
	  lwz       r26, 0xB0(r17)
	  lwz       r27, 0xB4(r17)
	  lwz       r28, 0xB8(r17)
	  lwz       r29, 0xBC(r17)
	  lwz       r30, 0xC0(r17)
	  lwz       r31, 0xC4(r17)
	  lwz       r12, 0xC8(r17)
	  lwz       r11, 0xCC(r17)
	  lwz       r10, 0xD0(r17)
	  lwz       r9, 0xD4(r17)
	  lwz       r0, 0xD8(r17)
	  lhz       r17, 0xDC(r17)
	  stw       r19, 0x44(r1)
	  stw       r20, 0x48(r1)
	  stw       r21, 0x4C(r1)
	  stw       r22, 0x50(r1)
	  stw       r23, 0x54(r1)
	  lbzx      r20, r14, r16
	  addi      r14, r1, 0x42
	  lbzx      r18, r14, r16
	  addi      r14, r1, 0x41
	  lbzx      r19, r14, r16
	  rlwinm    r20,r20,4,0,27
	  addi      r14, r1, 0x43
	  rlwinm    r18,r18,4,0,27
	  lbzx      r14, r14, r16
	  or        r19, r20, r19
	  stb       r19, 0x2(r4)
	  or        r14, r18, r14
	  stb       r14, 0x3(r4)
	  lbz       r14, 0x1(r4)
	  stw       r30, 0x8(r1)
	  rlwinm    r14,r14,0,30,28
	  stw       r31, 0xC(r1)
	  stw       r12, 0x10(r1)
	  stw       r11, 0x14(r1)
	  stw       r10, 0x18(r1)
	  stw       r9, 0x1C(r1)
	  stw       r0, 0x20(r1)
	  sth       r17, 0x24(r1)
	  lbzx      r11, r8, r15
	  stw       r24, 0x28(r1)
	  rlwinm    r0,r11,2,22,29
	  cmplwi    r11, 0x1
	  or        r10, r14, r0
	  stw       r25, 0x2C(r1)
	  lbzx      r9, r3, r15
	  stw       r26, 0x30(r1)
	  lbzx      r0, r5, r15
	  stw       r27, 0x34(r1)
	  lbzx      r14, r6, r15
	  stw       r28, 0x38(r1)
	  lbzx      r12, r7, r15
	  stw       r29, 0x3C(r1)
	  stb       r10, 0x1(r4)
	  bgt-      .loc_0x15C
	  lbz       r11, 0x1(r4)
	  rlwinm    r10,r14,4,20,27
	  rlwinm    r11,r11,0,28,25
	  or        r10, r11, r10
	  stb       r10, 0x1(r4)
	  lbz       r10, 0x1(r4)
	  rlwinm    r10,r10,0,0,29
	  or        r10, r10, r12
	  stb       r10, 0x1(r4)
	  b         .loc_0x178

	.loc_0x15C:
	  lbz       r10, 0x1(r4)
	  rlwimi    r10,r11,3,26,27
	  stb       r10, 0x1(r4)
	  lbz       r10, 0x1(r4)
	  rlwinm    r10,r10,0,0,29
	  ori       r10, r10, 0x3
	  stb       r10, 0x1(r4)

	.loc_0x178:
	  lbz       r10, 0x1(r4)
	  rlwinm    r11,r9,6,18,25
	  lbzx      r8, r8, r15
	  rlwinm    r0,r0,3,21,28
	  rlwinm    r10,r10,0,29,27
	  addi      r9, r1, 0x28
	  or        r10, r10, r0
	  lbzx      r0, r9, r16
	  stb       r10, 0x1(r4)
	  addi      r9, r1, 0x29
	  lbzx      r14, r9, r16
	  addi      r10, r1, 0x2B
	  lbz       r12, 0x1(r4)
	  addi      r9, r1, 0x2A
	  lbzx      r10, r10, r16
	  rlwinm    r0,r0,5,0,26
	  rlwimi    r11,r12,0,26,31
	  lbzx      r12, r9, r16
	  stb       r11, 0x1(r4)
	  rlwinm    r14,r14,2,22,29
	  rlwinm    r11,r12,7,17,24
	  rlwinm    r12,r12,31,25,31
	  lbz       r9, 0x6(r4)
	  rlwinm    r10,r10,4,20,27
	  cmplwi    r8, 0x1
	  lbzx      r3, r3, r15
	  rlwimi    r0,r9,0,27,31
	  rlwinm    r9,r8,2,22,29
	  stb       r0, 0x6(r4)
	  lbzx      r0, r5, r15
	  lbz       r16, 0x6(r4)
	  lbzx      r7, r7, r15
	  rlwinm    r5,r16,0,30,26
	  lbzx      r16, r6, r15
	  or        r5, r5, r14
	  stb       r5, 0x6(r4)
	  lbz       r5, 0x6(r4)
	  rlwinm    r5,r5,0,0,29
	  or        r5, r5, r12
	  stb       r5, 0x6(r4)
	  lbz       r5, 0x7(r4)
	  rlwimi    r11,r5,0,25,31
	  stb       r11, 0x7(r4)
	  lbz       r5, 0x7(r4)
	  rlwinm    r5,r5,0,28,24
	  or        r5, r5, r10
	  stb       r5, 0x7(r4)
	  lbz       r5, 0x5(r4)
	  rlwinm    r5,r5,0,30,28
	  or        r5, r5, r9
	  stb       r5, 0x5(r4)
	  bgt-      .loc_0x270
	  lbz       r6, 0x5(r4)
	  rlwinm    r5,r16,4,20,27
	  rlwinm    r6,r6,0,0,29
	  or        r6, r6, r7
	  stb       r6, 0x5(r4)
	  lbz       r6, 0x5(r4)
	  rlwinm    r6,r6,0,28,25
	  or        r5, r6, r5
	  stb       r5, 0x5(r4)
	  b         .loc_0x28C

	.loc_0x270:
	  lbz       r5, 0x5(r4)
	  rlwimi    r5,r8,3,26,27
	  stb       r5, 0x5(r4)
	  lbz       r5, 0x5(r4)
	  rlwinm    r5,r5,0,0,29
	  ori       r5, r5, 0x3
	  stb       r5, 0x5(r4)

	.loc_0x28C:
	  lbz       r5, 0x5(r4)
	  rlwinm    r0,r0,3,21,28
	  rlwinm    r3,r3,6,18,25
	  rlwinm    r5,r5,0,29,27
	  or        r0, r5, r0
	  stb       r0, 0x5(r4)
	  lbz       r0, 0x5(r4)
	  rlwimi    r3,r0,0,26,31
	  stb       r3, 0x5(r4)
	  lmw       r14, 0x58(r1)
	  addi      r1, r1, 0xA0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800468B4
 * Size:	000088
 */
void J2DWindowEx::setBlack(JUtility::TColor)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  li        r0, -0x1
	  addi      r5, r1, 0x10
	  stw       r31, 0x1C(r1)
	  mr        r31, r4
	  addi      r4, r1, 0x14
	  stw       r30, 0x18(r1)
	  mr        r30, r3
	  stw       r0, 0x14(r1)
	  stw       r0, 0x10(r1)
	  bl        0x3D0
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x44
	  li        r3, 0
	  b         .loc_0x70

	.loc_0x44:
	  lwz       r5, 0x10(r1)
	  mr        r3, r30
	  lwz       r0, 0x0(r31)
	  addi      r4, r1, 0xC
	  stw       r5, 0x8(r1)
	  addi      r5, r1, 0x8
	  stw       r0, 0xC(r1)
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl

	.loc_0x70:
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
 * Address:	8004693C
 * Size:	000088
 */
void J2DWindowEx::setWhite(JUtility::TColor)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  li        r0, -0x1
	  addi      r5, r1, 0x10
	  stw       r31, 0x1C(r1)
	  mr        r31, r4
	  addi      r4, r1, 0x14
	  stw       r30, 0x18(r1)
	  mr        r30, r3
	  stw       r0, 0x14(r1)
	  stw       r0, 0x10(r1)
	  bl        0x348
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x44
	  li        r3, 0
	  b         .loc_0x70

	.loc_0x44:
	  lwz       r5, 0x0(r31)
	  mr        r3, r30
	  lwz       r0, 0x14(r1)
	  addi      r4, r1, 0xC
	  stw       r5, 0x8(r1)
	  addi      r5, r1, 0x8
	  stw       r0, 0xC(r1)
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl

	.loc_0x70:
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
 * Address:	800469C4
 * Size:	0002EC
 */
void J2DWindowEx::setBlackWhite(JUtility::TColor, JUtility::TColor)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x60(r1)
	  mflr      r0
	  stw       r0, 0x64(r1)
	  stmw      r22, 0x38(r1)
	  mr        r29, r4
	  mr        r28, r3
	  mr        r30, r5
	  lwz       r4, 0x148(r3)
	  cmplwi    r4, 0
	  bne-      .loc_0x30
	  li        r3, 0
	  b         .loc_0x2D8

	.loc_0x30:
	  lwz       r0, 0x70(r4)
	  cmplwi    r0, 0
	  bne-      .loc_0x44
	  li        r3, 0
	  b         .loc_0x2D8

	.loc_0x44:
	  lwz       r4, 0x14C(r28)
	  cmplwi    r4, 0
	  bne-      .loc_0x58
	  li        r3, 0
	  b         .loc_0x2D8

	.loc_0x58:
	  lwz       r0, 0x70(r4)
	  cmplwi    r0, 0
	  bne-      .loc_0x6C
	  li        r3, 0
	  b         .loc_0x2D8

	.loc_0x6C:
	  lwz       r4, 0x150(r28)
	  cmplwi    r4, 0
	  bne-      .loc_0x80
	  li        r3, 0
	  b         .loc_0x2D8

	.loc_0x80:
	  lwz       r0, 0x70(r4)
	  cmplwi    r0, 0
	  bne-      .loc_0x94
	  li        r3, 0
	  b         .loc_0x2D8

	.loc_0x94:
	  lwz       r4, 0x154(r28)
	  cmplwi    r4, 0
	  bne-      .loc_0xA8
	  li        r3, 0
	  b         .loc_0x2D8

	.loc_0xA8:
	  lwz       r0, 0x70(r4)
	  cmplwi    r0, 0
	  bne-      .loc_0xBC
	  li        r3, 0
	  b         .loc_0x2D8

	.loc_0xBC:
	  lwz       r6, 0x0(r30)
	  addi      r4, r1, 0x18
	  lwz       r0, 0x0(r29)
	  addi      r5, r1, 0x14
	  stw       r6, 0x14(r1)
	  stw       r0, 0x18(r1)
	  bl        0x3B0
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0xE8
	  li        r3, 0
	  b         .loc_0x2D8

	.loc_0xE8:
	  lwz       r0, 0x0(r29)
	  li        r31, 0
	  cmplwi    r0, 0
	  bne-      .loc_0x108
	  lwz       r3, 0x0(r30)
	  addis     r0, r3, 0x1
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0x10C

	.loc_0x108:
	  li        r31, 0x1

	.loc_0x10C:
	  rlwinm    r3,r31,0,24,31
	  mr        r24, r28
	  neg       r0, r3
	  li        r23, 0
	  or        r0, r0, r3
	  rlwinm    r3,r0,1,31,31
	  addi      r0, r3, 0x1
	  rlwinm    r22,r0,0,24,31

	.loc_0x12C:
	  lwz       r3, 0x148(r24)
	  mr        r4, r22
	  lwz       r3, 0x70(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x54(r12)
	  mtctr     r12
	  bctrl
	  addi      r23, r23, 0x1
	  addi      r24, r24, 0x4
	  cmpwi     r23, 0x4
	  blt+      .loc_0x12C
	  rlwinm.   r0,r31,0,24,31
	  bne-      .loc_0x178
	  lis       r3, 0x1
	  li        r4, 0x4
	  subi      r0, r3, 0x1
	  sth       r4, 0x8(r1)
	  sth       r0, 0xA(r1)
	  b         .loc_0x18C

	.loc_0x178:
	  lis       r3, 0x1
	  li        r4, 0xFF
	  subi      r0, r3, 0xFC
	  sth       r4, 0x8(r1)
	  sth       r0, 0xA(r1)

	.loc_0x18C:
	  addi      r26, r1, 0x8
	  li        r24, 0
	  b         .loc_0x21C

	.loc_0x198:
	  rlwinm    r0,r24,1,23,30
	  rlwinm    r22,r24,0,24,31
	  lhzx      r3, r26, r0
	  mr        r23, r28
	  li        r25, 0
	  srawi     r0, r3, 0x8
	  stb       r3, 0xE(r1)
	  stb       r0, 0xC(r1)
	  stb       r0, 0xD(r1)
	  lwz       r27, 0xC(r1)

	.loc_0x1C0:
	  lwz       r3, 0x148(r23)
	  lwz       r3, 0x70(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  rlwinm    r0,r3,0,24,31
	  cmplw     r0, r22
	  ble-      .loc_0x208
	  stw       r27, 0x10(r1)
	  mr        r4, r22
	  addi      r5, r1, 0x10
	  lwz       r3, 0x148(r23)
	  lwz       r3, 0x70(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x208:
	  addi      r25, r25, 0x1
	  addi      r23, r23, 0x4
	  cmpwi     r25, 0x4
	  blt+      .loc_0x1C0
	  addi      r24, r24, 0x1

	.loc_0x21C:
	  rlwinm    r0,r24,0,24,31
	  cmplwi    r0, 0x2
	  blt+      .loc_0x198
	  mr        r3, r28
	  mr        r4, r31
	  bl        -0x720
	  rlwinm.   r0,r31,0,24,31
	  beq-      .loc_0x2D4
	  lbz       r24, 0x0(r29)
	  mr        r23, r28
	  lbz       r25, 0x1(r29)
	  li        r22, 0
	  lbz       r26, 0x2(r29)
	  lbz       r27, 0x3(r29)
	  lbz       r28, 0x0(r30)
	  lbz       r29, 0x1(r30)
	  lbz       r31, 0x2(r30)
	  lbz       r30, 0x3(r30)

	.loc_0x264:
	  sth       r24, 0x24(r1)
	  addi      r5, r1, 0x24
	  li        r4, 0
	  sth       r25, 0x26(r1)
	  sth       r26, 0x28(r1)
	  sth       r27, 0x2A(r1)
	  lwz       r3, 0x148(r23)
	  lwz       r3, 0x70(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x34(r12)
	  mtctr     r12
	  bctrl
	  sth       r28, 0x1C(r1)
	  addi      r5, r1, 0x1C
	  li        r4, 0x1
	  sth       r29, 0x1E(r1)
	  sth       r31, 0x20(r1)
	  sth       r30, 0x22(r1)
	  lwz       r3, 0x148(r23)
	  lwz       r3, 0x70(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x34(r12)
	  mtctr     r12
	  bctrl
	  addi      r22, r22, 0x1
	  addi      r23, r23, 0x4
	  cmpwi     r22, 0x4
	  blt+      .loc_0x264

	.loc_0x2D4:
	  li        r3, 0x1

	.loc_0x2D8:
	  lmw       r22, 0x38(r1)
	  lwz       r0, 0x64(r1)
	  mtlr      r0
	  addi      r1, r1, 0x60
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80046CB0
 * Size:	000004
 */
void J2DTevBlock::setTevColor(unsigned long, J2DGXColorS10)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80046CB4
 * Size:	000194
 */
void J2DWindowEx::getBlackWhite(JUtility::TColor*, JUtility::TColor*) const
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stmw      r26, 0x18(r1)
	  mr        r29, r3
	  lwz       r3, 0x148(r3)
	  mr        r30, r4
	  mr        r31, r5
	  cmplwi    r3, 0
	  bne-      .loc_0x30
	  li        r3, 0
	  b         .loc_0x180

	.loc_0x30:
	  lwz       r3, 0x70(r3)
	  cmplwi    r3, 0
	  bne-      .loc_0x44
	  li        r3, 0
	  b         .loc_0x180

	.loc_0x44:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x58(r12)
	  mtctr     r12
	  bctrl
	  li        r0, 0
	  rlwinm    r3,r3,0,24,31
	  stw       r0, 0x14(r1)
	  li        r0, -0x1
	  subfic    r5, r3, 0x1
	  subi      r4, r3, 0x1
	  lbz       r3, 0x14(r1)
	  or        r4, r5, r4
	  stw       r0, 0x10(r1)
	  rlwinm.   r4,r4,1,31,31
	  lbz       r0, 0x15(r1)
	  stb       r3, 0x0(r30)
	  lbz       r3, 0x16(r1)
	  stb       r0, 0x1(r30)
	  lbz       r0, 0x17(r1)
	  stb       r3, 0x2(r30)
	  lbz       r3, 0x10(r1)
	  stb       r0, 0x3(r30)
	  lbz       r0, 0x11(r1)
	  stb       r3, 0x0(r31)
	  lbz       r3, 0x12(r1)
	  stb       r0, 0x1(r31)
	  lbz       r0, 0x13(r1)
	  stb       r3, 0x2(r31)
	  stb       r0, 0x3(r31)
	  beq-      .loc_0x17C
	  lwz       r3, 0x148(r29)
	  li        r4, 0
	  lwz       r3, 0x70(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x38(r12)
	  mtctr     r12
	  bctrl
	  lwz       r5, 0x148(r29)
	  li        r4, 0x1
	  lha       r29, 0x0(r3)
	  lha       r28, 0x2(r3)
	  lha       r27, 0x4(r3)
	  lha       r26, 0x6(r3)
	  lwz       r3, 0x70(r5)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x38(r12)
	  mtctr     r12
	  bctrl
	  rlwinm    r4,r28,16,8,15
	  lha       r0, 0x2(r3)
	  rlwimi    r4,r29,24,0,7
	  lha       r5, 0x0(r3)
	  rlwimi    r4,r27,8,16,23
	  rlwinm    r0,r0,16,8,15
	  rlwimi    r4,r26,0,24,31
	  lha       r6, 0x4(r3)
	  stw       r4, 0xC(r1)
	  rlwimi    r0,r5,24,0,7
	  lha       r7, 0x6(r3)
	  rlwimi    r0,r6,8,16,23
	  lbz       r3, 0xC(r1)
	  lbz       r5, 0xD(r1)
	  rlwimi    r0,r7,0,24,31
	  stb       r3, 0x0(r30)
	  lbz       r4, 0xE(r1)
	  stb       r5, 0x1(r30)
	  lbz       r3, 0xF(r1)
	  stw       r0, 0x8(r1)
	  stb       r4, 0x2(r30)
	  lbz       r0, 0x8(r1)
	  stb       r3, 0x3(r30)
	  lbz       r4, 0x9(r1)
	  stb       r0, 0x0(r31)
	  lbz       r3, 0xA(r1)
	  stb       r4, 0x1(r31)
	  lbz       r0, 0xB(r1)
	  stb       r3, 0x2(r31)
	  stb       r0, 0x3(r31)

	.loc_0x17C:
	  li        r3, 0x1

	.loc_0x180:
	  lmw       r26, 0x18(r1)
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80046E48
 * Size:	000098
 */
void J2DWindowEx::isSetBlackWhite(JUtility::TColor, JUtility::TColor) const
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r0, 0x0(r4)
	  stw       r31, 0xC(r1)
	  cmplwi    r0, 0
	  stw       r30, 0x8(r1)
	  bne-      .loc_0x38
	  lwz       r4, 0x0(r5)
	  addis     r0, r4, 0x1
	  cmplwi    r0, 0xFFFF
	  bne-      .loc_0x38
	  li        r3, 0x1
	  b         .loc_0x80

	.loc_0x38:
	  li        r30, 0
	  mr        r31, r3

	.loc_0x40:
	  lwz       r3, 0x148(r31)
	  lwz       r3, 0x70(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  rlwinm    r0,r3,0,24,31
	  cmplwi    r0, 0x1
	  bne-      .loc_0x6C
	  li        r3, 0
	  b         .loc_0x80

	.loc_0x6C:
	  addi      r30, r30, 0x1
	  addi      r31, r31, 0x4
	  cmpwi     r30, 0x4
	  blt+      .loc_0x40
	  li        r3, 0x1

	.loc_0x80:
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
 * Address:	80046EE0
 * Size:	000060
 */
void J2DWindowEx::getBlack() const
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  li        r0, -0x1
	  addi      r5, r1, 0x8
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  mr        r3, r4
	  addi      r4, r1, 0xC
	  stw       r0, 0xC(r1)
	  stw       r0, 0x8(r1)
	  bl        -0x258
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x44
	  li        r0, 0
	  stw       r0, 0x0(r31)
	  b         .loc_0x4C

	.loc_0x44:
	  lwz       r0, 0xC(r1)
	  stw       r0, 0x0(r31)

	.loc_0x4C:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80046F40
 * Size:	000060
 */
void J2DWindowEx::getWhite() const
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  li        r0, -0x1
	  addi      r5, r1, 0x8
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  mr        r3, r4
	  addi      r4, r1, 0xC
	  stw       r0, 0xC(r1)
	  stw       r0, 0x8(r1)
	  bl        -0x2B8
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x44
	  li        r0, -0x1
	  stw       r0, 0x0(r31)
	  b         .loc_0x4C

	.loc_0x44:
	  lwz       r0, 0x8(r1)
	  stw       r0, 0x0(r31)

	.loc_0x4C:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80046FA0
 * Size:	000084
 */
void J2DWindowEx::setAlpha(unsigned char)
{
	/*
	.loc_0x0:
	  stb       r4, 0xB2(r3)
	  lwz       r6, 0x148(r3)
	  cmplwi    r6, 0
	  beq-      .loc_0x1C
	  addic.    r6, r6, 0x10
	  beq-      .loc_0x1C
	  stb       r4, 0x3(r6)

	.loc_0x1C:
	  lwz       r6, 0x14C(r3)
	  cmplwi    r6, 0
	  beq-      .loc_0x34
	  addic.    r6, r6, 0x10
	  beq-      .loc_0x34
	  stb       r4, 0x3(r6)

	.loc_0x34:
	  addi      r5, r3, 0x8
	  lwz       r6, 0x150(r3)
	  cmplwi    r6, 0
	  beq-      .loc_0x50
	  addic.    r6, r6, 0x10
	  beq-      .loc_0x50
	  stb       r4, 0x3(r6)

	.loc_0x50:
	  lwz       r6, 0x14C(r5)
	  cmplwi    r6, 0
	  beq-      .loc_0x68
	  addic.    r6, r6, 0x10
	  beq-      .loc_0x68
	  stb       r4, 0x3(r6)

	.loc_0x68:
	  lwz       r3, 0x160(r3)
	  cmplwi    r3, 0
	  beqlr-
	  addic.    r3, r3, 0x10
	  beqlr-
	  stb       r4, 0x3(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80047024
 * Size:	000078
 */
void J2DWindowEx::setCullBack(_GXCullMode)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stb       r4, 0xB1(r3)
	  lwz       r6, 0x148(r3)
	  cmplwi    r6, 0
	  beq-      .loc_0x20
	  stb       r4, 0x22(r6)

	.loc_0x20:
	  lwz       r6, 0x14C(r3)
	  cmplwi    r6, 0
	  beq-      .loc_0x30
	  stb       r4, 0x22(r6)

	.loc_0x30:
	  addi      r5, r3, 0x8
	  lwz       r6, 0x150(r3)
	  cmplwi    r6, 0
	  beq-      .loc_0x44
	  stb       r4, 0x22(r6)

	.loc_0x44:
	  lwz       r6, 0x14C(r5)
	  cmplwi    r6, 0
	  beq-      .loc_0x54
	  stb       r4, 0x22(r6)

	.loc_0x54:
	  lwz       r5, 0x160(r3)
	  cmplwi    r5, 0
	  beq-      .loc_0x64
	  stb       r4, 0x22(r5)

	.loc_0x64:
	  bl        -0xE444
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8004709C
 * Size:	000018
 */
void J2DWindowEx::rewriteAlpha()
{
	/*
	.loc_0x0:
	  lwz       r4, 0x160(r3)
	  cmplwi    r4, 0
	  beqlr-
	  lbz       r0, 0x13(r4)
	  stb       r0, 0xB2(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800470B4
 * Size:	000068
 */
void J2DWindowEx::getFrameTexture(unsigned char, unsigned char) const
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r5
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC0(r12)
	  mtctr     r12
	  bctrl
	  cmplwi    r3, 0
	  beq-      .loc_0x50
	  lwz       r3, 0x70(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x50
	  lwz       r12, 0x0(r3)
	  rlwinm    r4,r31,0,24,31
	  lwz       r12, 0xA0(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x54

	.loc_0x50:
	  li        r3, 0

	.loc_0x54:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8004711C
 * Size:	000024
 */
void J2DWindowEx::getFrameMaterial(unsigned char) const
{
	/*
	.loc_0x0:
	  rlwinm    r0,r4,0,24,31
	  cmplwi    r0, 0x4
	  blt-      .loc_0x14
	  li        r3, 0
	  blr

	.loc_0x14:
	  rlwinm    r0,r4,2,22,29
	  add       r3, r3, r0
	  lwz       r3, 0x148(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80047140
 * Size:	000068
 */
void J2DWindowEx::getContentsTexture(unsigned char) const
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC4(r12)
	  mtctr     r12
	  bctrl
	  cmplwi    r3, 0
	  beq-      .loc_0x50
	  lwz       r3, 0x70(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x50
	  lwz       r12, 0x0(r3)
	  rlwinm    r4,r31,0,24,31
	  lwz       r12, 0xA0(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x54

	.loc_0x50:
	  li        r3, 0

	.loc_0x54:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800471A8
 * Size:	000008
 */
void J2DWindowEx::getContentsMaterial() const
{
	/*
	.loc_0x0:
	  lwz       r3, 0x160(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800471B0
 * Size:	000118
 */
void J2DWindowEx::isUsed(const ResTIMG*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stmw      r27, 0xC(r1)
	  mr        r27, r3
	  mr        r28, r4
	  li        r30, 0
	  b         .loc_0x8C

	.loc_0x20:
	  rlwinm    r3,r30,2,22,29
	  addi      r31, r3, 0x148
	  lwzx      r3, r27, r31
	  cmplwi    r3, 0
	  beq-      .loc_0x88
	  lwz       r0, 0x70(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x88
	  li        r29, 0

	.loc_0x44:
	  lwzx      r3, r27, r31
	  mr        r4, r29
	  lwz       r3, 0x70(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xA0(r12)
	  mtctr     r12
	  bctrl
	  cmplwi    r3, 0
	  beq-      .loc_0x7C
	  lwz       r0, 0x20(r3)
	  cmplw     r0, r28
	  bne-      .loc_0x7C
	  li        r3, 0x1
	  b         .loc_0x104

	.loc_0x7C:
	  addi      r29, r29, 0x1
	  cmplwi    r29, 0x8
	  blt+      .loc_0x44

	.loc_0x88:
	  addi      r30, r30, 0x1

	.loc_0x8C:
	  rlwinm    r0,r30,0,24,31
	  cmplwi    r0, 0x4
	  blt+      .loc_0x20
	  lwz       r3, 0x160(r27)
	  cmplwi    r3, 0
	  beq-      .loc_0xF8
	  lwz       r0, 0x70(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0xF8
	  li        r29, 0

	.loc_0xB4:
	  lwz       r3, 0x160(r27)
	  mr        r4, r29
	  lwz       r3, 0x70(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xA0(r12)
	  mtctr     r12
	  bctrl
	  cmplwi    r3, 0
	  beq-      .loc_0xEC
	  lwz       r0, 0x20(r3)
	  cmplw     r0, r28
	  bne-      .loc_0xEC
	  li        r3, 0x1
	  b         .loc_0x104

	.loc_0xEC:
	  addi      r29, r29, 0x1
	  cmplwi    r29, 0x8
	  blt+      .loc_0xB4

	.loc_0xF8:
	  mr        r3, r27
	  mr        r4, r28
	  bl        -0xE8BC

	.loc_0x104:
	  lmw       r27, 0xC(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800472C8
 * Size:	000090
 */
void J2DWindowEx::setAnimation(J2DAnmColor*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  li        r31, 0
	  stw       r30, 0x18(r1)
	  mr        r30, r4
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  b         .loc_0x54

	.loc_0x28:
	  mr        r3, r29
	  mr        r4, r31
	  bl        0x210
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x50
	  rlwinm    r3,r31,2,22,29
	  mr        r4, r30
	  addi      r0, r3, 0x148
	  lwzx      r3, r29, r0
	  bl        0xB47C

	.loc_0x50:
	  addi      r31, r31, 0x1

	.loc_0x54:
	  rlwinm    r0,r31,0,24,31
	  cmplwi    r0, 0x4
	  blt+      .loc_0x28
	  lwz       r3, 0x160(r29)
	  cmplwi    r3, 0
	  beq-      .loc_0x74
	  mr        r4, r30
	  bl        0xB458

	.loc_0x74:
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
 * Address:	80047358
 * Size:	000090
 */
void J2DWindowEx::setAnimation(J2DAnmTextureSRTKey*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  li        r31, 0
	  stw       r30, 0x18(r1)
	  mr        r30, r4
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  b         .loc_0x54

	.loc_0x28:
	  mr        r3, r29
	  mr        r4, r31
	  bl        0x180
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x50
	  rlwinm    r3,r31,2,22,29
	  mr        r4, r30
	  addi      r0, r3, 0x148
	  lwzx      r3, r29, r0
	  bl        0xB530

	.loc_0x50:
	  addi      r31, r31, 0x1

	.loc_0x54:
	  rlwinm    r0,r31,0,24,31
	  cmplwi    r0, 0x4
	  blt+      .loc_0x28
	  lwz       r3, 0x160(r29)
	  cmplwi    r3, 0
	  beq-      .loc_0x74
	  mr        r4, r30
	  bl        0xB50C

	.loc_0x74:
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
 * Address:	800473E8
 * Size:	000090
 */
void J2DWindowEx::setAnimation(J2DAnmTexPattern*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  li        r31, 0
	  stw       r30, 0x18(r1)
	  mr        r30, r4
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  b         .loc_0x54

	.loc_0x28:
	  mr        r3, r29
	  mr        r4, r31
	  bl        0xF0
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x50
	  rlwinm    r3,r31,2,22,29
	  mr        r4, r30
	  addi      r0, r3, 0x148
	  lwzx      r3, r29, r0
	  bl        0xB644

	.loc_0x50:
	  addi      r31, r31, 0x1

	.loc_0x54:
	  rlwinm    r0,r31,0,24,31
	  cmplwi    r0, 0x4
	  blt+      .loc_0x28
	  lwz       r3, 0x160(r29)
	  cmplwi    r3, 0
	  beq-      .loc_0x74
	  mr        r4, r30
	  bl        0xB620

	.loc_0x74:
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
 * Address:	80047478
 * Size:	000090
 */
void J2DWindowEx::setAnimation(J2DAnmTevRegKey*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  li        r31, 0
	  stw       r30, 0x18(r1)
	  mr        r30, r4
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  b         .loc_0x54

	.loc_0x28:
	  mr        r3, r29
	  mr        r4, r31
	  bl        .loc_0x90
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x50
	  rlwinm    r3,r31,2,22,29
	  mr        r4, r30
	  addi      r0, r3, 0x148
	  lwzx      r3, r29, r0
	  bl        0xB748

	.loc_0x50:
	  addi      r31, r31, 0x1

	.loc_0x54:
	  rlwinm    r0,r31,0,24,31
	  cmplwi    r0, 0x4
	  blt+      .loc_0x28
	  lwz       r3, 0x160(r29)
	  cmplwi    r3, 0
	  beq-      .loc_0x74
	  mr        r4, r30
	  bl        0xB724

	.loc_0x74:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr

	.loc_0x90:
	*/
}

/*
 * --INFO--
 * Address:	80047508
 * Size:	00005C
 */
void J2DWindowEx::isNeedSetAnm(unsigned char)
{
	/*
	.loc_0x0:
	  rlwinm    r7,r4,2,22,29
	  rlwinm    r5,r4,0,24,31
	  addi      r6, r7, 0x148
	  li        r8, 0
	  b         .loc_0x38

	.loc_0x14:
	  rlwinm    r4,r8,2,22,29
	  lwzx      r0, r3, r6
	  addi      r4, r4, 0x148
	  lwzx      r4, r3, r4
	  cmplw     r4, r0
	  bne-      .loc_0x34
	  li        r3, 0
	  blr

	.loc_0x34:
	  addi      r8, r8, 0x1

	.loc_0x38:
	  rlwinm    r0,r8,0,24,31
	  cmplw     r0, r5
	  blt+      .loc_0x14
	  add       r3, r3, r7
	  lwz       r3, 0x148(r3)
	  neg       r0, r3
	  or        r0, r0, r3
	  rlwinm    r3,r0,1,31,31
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80047564
 * Size:	000008
 */
void J2DWindowEx::setAnimation(J2DAnmVisibilityFull*)
{
	/*
	.loc_0x0:
	  stw       r4, 0x174(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8004756C
 * Size:	0000E0
 */
void J2DWindowEx::setAnimation(J2DAnmVtxColor*)
{
	/*
	.loc_0x0:
	  stw       r4, 0x178(r3)
	  li        r0, 0
	  cmplwi    r4, 0
	  stb       r0, 0x17C(r3)
	  beq-      .loc_0xC8
	  lhz       r7, 0x10(r4)
	  li        r9, 0
	  b         .loc_0xBC

	.loc_0x20:
	  rlwinm    r5,r9,1,23,30
	  addi      r8, r5, 0x168
	  lhzx      r0, r3, r8
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0xB8
	  li        r10, 0
	  b         .loc_0xAC

	.loc_0x3C:
	  lwz       r6, 0x14(r4)
	  rlwinm    r0,r10,3,13,28
	  lwz       r5, 0x1C(r4)
	  li        r12, 0
	  add       r6, r6, r0
	  lwz       r0, 0x4(r6)
	  lhz       r6, 0x0(r6)
	  rlwinm    r0,r0,1,0,30
	  add       r11, r5, r0
	  b         .loc_0x9C

	.loc_0x64:
	  rlwinm    r0,r12,1,15,30
	  lhzx      r5, r3, r8
	  lhzx      r0, r11, r0
	  cmplw     r5, r0
	  bne-      .loc_0x98
	  stw       r4, 0x178(r3)
	  rlwinm    r0,r9,0,24,31
	  li        r5, 0x1
	  lbz       r6, 0x17C(r3)
	  slw       r0, r5, r0
	  or        r0, r6, r0
	  stb       r0, 0x17C(r3)
	  b         .loc_0xB8

	.loc_0x98:
	  addi      r12, r12, 0x1

	.loc_0x9C:
	  rlwinm    r0,r12,0,16,31
	  cmplw     r0, r6
	  blt+      .loc_0x64
	  addi      r10, r10, 0x1

	.loc_0xAC:
	  rlwinm    r0,r10,0,16,31
	  cmplw     r0, r7
	  blt+      .loc_0x3C

	.loc_0xB8:
	  addi      r9, r9, 0x1

	.loc_0xBC:
	  rlwinm    r0,r9,0,24,31
	  cmplwi    r0, 0x4
	  blt+      .loc_0x20

	.loc_0xC8:
	  lbz       r0, 0x17C(r3)
	  cmplwi    r0, 0
	  bnelr-
	  li        r0, 0
	  stw       r0, 0x178(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8004764C
 * Size:	0001AC
 */
void J2DWindowEx::animationPane(const J2DAnmTransform*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stw       r31, 0x2C(r1)
	  stw       r30, 0x28(r1)
	  stw       r29, 0x24(r1)
	  mr        r29, r4
	  stw       r28, 0x20(r1)
	  mr        r28, r3
	  lwz       r3, 0x174(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x64
	  lhz       r4, 0x166(r28)
	  cmplwi    r4, 0xFFFF
	  beq-      .loc_0x64
	  addi      r5, r1, 0x8
	  bl        0x1549C
	  lbz       r0, 0x8(r1)
	  cmplwi    r0, 0
	  beq-      .loc_0x5C
	  li        r0, 0x1
	  stb       r0, 0xB0(r28)
	  b         .loc_0x64

	.loc_0x5C:
	  li        r0, 0
	  stb       r0, 0xB0(r28)

	.loc_0x64:
	  lis       r3, 0x8048
	  lwz       r10, 0x178(r28)
	  subi      r6, r3, 0x7A40
	  addi      r5, r28, 0x128
	  lwz       r9, 0x0(r6)
	  cmplwi    r10, 0
	  lwz       r8, 0x4(r6)
	  addi      r4, r28, 0x12C
	  lwz       r7, 0x8(r6)
	  addi      r3, r28, 0x130
	  lwz       r6, 0xC(r6)
	  addi      r0, r28, 0x134
	  stw       r9, 0xC(r1)
	  stw       r8, 0x10(r1)
	  stw       r7, 0x14(r1)
	  stw       r6, 0x18(r1)
	  stw       r5, 0xC(r1)
	  stw       r4, 0x10(r1)
	  stw       r3, 0x14(r1)
	  stw       r0, 0x18(r1)
	  beq-      .loc_0x180
	  lhz       r31, 0x10(r10)
	  li        r30, 0
	  b         .loc_0x174

	.loc_0xC4:
	  rlwinm    r7,r30,0,24,31
	  li        r0, 0x1
	  lbz       r3, 0x17C(r28)
	  slw       r0, r0, r7
	  and.      r0, r3, r0
	  beq-      .loc_0x170
	  rlwinm    r3,r30,1,23,30
	  li        r5, 0
	  addi      r8, r3, 0x168
	  b         .loc_0x164

	.loc_0xEC:
	  lwz       r3, 0x178(r28)
	  rlwinm    r0,r5,3,13,28
	  li        r10, 0
	  lwz       r6, 0x14(r3)
	  lwz       r4, 0x1C(r3)
	  add       r6, r6, r0
	  lwz       r0, 0x4(r6)
	  lhz       r6, 0x0(r6)
	  rlwinm    r0,r0,1,0,30
	  add       r9, r4, r0
	  b         .loc_0x154

	.loc_0x118:
	  rlwinm    r0,r10,1,15,30
	  lhzx      r4, r28, r8
	  lhzx      r0, r9, r0
	  cmplw     r4, r0
	  bne-      .loc_0x150
	  lwz       r12, 0x0(r3)
	  rlwinm    r0,r7,2,0,29
	  addi      r4, r1, 0xC
	  lwz       r12, 0x10(r12)
	  lwzx      r6, r4, r0
	  li        r4, 0
	  mtctr     r12
	  bctrl
	  b         .loc_0x170

	.loc_0x150:
	  addi      r10, r10, 0x1

	.loc_0x154:
	  rlwinm    r0,r10,0,16,31
	  cmplw     r0, r6
	  blt+      .loc_0x118
	  addi      r5, r5, 0x1

	.loc_0x164:
	  rlwinm    r0,r5,0,16,31
	  cmplw     r0, r31
	  blt+      .loc_0xEC

	.loc_0x170:
	  addi      r30, r30, 0x1

	.loc_0x174:
	  rlwinm    r0,r30,0,24,31
	  cmplwi    r0, 0x4
	  blt+      .loc_0xC4

	.loc_0x180:
	  mr        r3, r28
	  mr        r4, r29
	  bl        -0xDF1C
	  lwz       r0, 0x34(r1)
	  lwz       r31, 0x2C(r1)
	  lwz       r30, 0x28(r1)
	  lwz       r29, 0x24(r1)
	  lwz       r28, 0x20(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800477F8
 * Size:	000004
 */
void J2DAnmVtxColor::getColor(unsigned char, unsigned short, _GXColor*) const
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800477FC
 * Size:	00002C
 */
void J2DWindowEx::getMaterial(J2DWindow::TMaterial&) const
{
	/*
	.loc_0x0:
	  lwz       r0, 0x148(r3)
	  lwz       r5, 0x14C(r3)
	  stw       r0, 0x0(r4)
	  lwz       r0, 0x150(r3)
	  stw       r5, 0x4(r4)
	  lwz       r5, 0x154(r3)
	  stw       r0, 0x8(r4)
	  lwz       r0, 0x160(r3)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x10(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80047828
 * Size:	000058
 */
void J2DWindowEx::draw(float, float, float, float)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  frsp      f6, f1
	  stfs      f1, 0x8(r1)
	  frsp      f5, f2
	  fadds     f1, f1, f3
	  addi      r4, r1, 0x10
	  stw       r0, 0x24(r1)
	  fadds     f0, f2, f4
	  stfs      f6, 0x10(r1)
	  stfs      f5, 0x14(r1)
	  stfs      f1, 0x18(r1)
	  stfs      f0, 0x1C(r1)
	  lwz       r12, 0x0(r3)
	  stfs      f2, 0xC(r1)
	  lwz       r12, 0x94(r12)
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
 * Address:	80047880
 * Size:	00003C
 */
void J2DWindowEx::setCullBack(bool)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  rlwinm.   r0,r4,0,24,31
	  li        r4, 0
	  beq-      .loc_0x1C
	  li        r4, 0x2

	.loc_0x1C:
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
 * Address:	800478BC
 * Size:	000020
 */
void J2DWindowEx::isUsed(const ResFONT*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        -0xEE4C
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800478DC
 * Size:	000020
 */
void J2DWindowEx::setAnimation(J2DAnmTransform*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        -0xE2F4
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800478FC
 * Size:	000020
 */
void J2DWindowEx::setAnimation(J2DAnmBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        -0xE3FC
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}