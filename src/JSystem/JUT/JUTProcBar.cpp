

/*
 * --INFO--
 * Address:	........
 * Size:	000114
 */
void JUTProcBar::JUTProcBar()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8002EFE0
 * Size:	000014
 */
void JUTProcBar::CTime::__ct(void)
{
	/*
	.loc_0x0:
	  li        r0, 0
	  stw       r0, 0x4(r3)
	  stw       r0, 0x8(r3)
	  stw       r0, 0xC(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000044
 */
void JUTProcBar::~JUTProcBar()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8002EFF4
 * Size:	000130
 */
void JUTProcBar::create()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  lwz       r0, -0x7708(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x118
	  li        r3, 0x134
	  bl        -0xB170
	  mr.       r31, r3
	  beq-      .loc_0x114
	  li        r0, 0
	  lis       r3, 0x8003
	  stw       r0, 0x4(r31)
	  subi      r4, r3, 0x1020
	  addi      r3, r31, 0x64
	  li        r5, 0
	  stw       r0, 0x8(r31)
	  li        r6, 0x14
	  li        r7, 0x8
	  stw       r0, 0xC(r31)
	  stw       r0, 0x18(r31)
	  stw       r0, 0x1C(r31)
	  stw       r0, 0x20(r31)
	  stw       r0, 0x2C(r31)
	  stw       r0, 0x30(r31)
	  stw       r0, 0x34(r31)
	  stw       r0, 0x40(r31)
	  stw       r0, 0x44(r31)
	  stw       r0, 0x48(r31)
	  stw       r0, 0x54(r31)
	  stw       r0, 0x58(r31)
	  stw       r0, 0x5C(r31)
	  bl        0x927C4
	  li        r4, 0x1
	  li        r0, 0
	  stb       r4, 0x10C(r31)
	  stb       r4, 0x130(r31)
	  stw       r0, 0x108(r31)
	  lwz       r3, -0x76E0(r13)
	  lwz       r3, 0x4(r3)
	  lhz       r6, 0x6(r3)
	  cmpwi     r6, 0x190
	  ble-      .loc_0xDC
	  li        r0, 0x2
	  li        r5, 0x27
	  stw       r0, 0x114(r31)
	  subi      r4, r6, 0x28
	  li        r3, 0x232
	  subi      r0, r6, 0x46
	  stw       r5, 0x118(r31)
	  stw       r4, 0x11C(r31)
	  stw       r3, 0x120(r31)
	  stw       r0, 0x124(r31)
	  b         .loc_0x100

	.loc_0xDC:
	  stw       r4, 0x114(r31)
	  li        r0, 0x27
	  subi      r4, r6, 0x14
	  li        r3, 0x232
	  stw       r0, 0x118(r31)
	  subi      r0, r6, 0x23
	  stw       r4, 0x11C(r31)
	  stw       r3, 0x120(r31)
	  stw       r0, 0x124(r31)

	.loc_0x100:
	  li        r3, 0x1
	  li        r0, 0
	  stw       r3, 0x110(r31)
	  stw       r0, 0x128(r31)
	  stw       r0, 0x12C(r31)

	.loc_0x114:
	  stw       r31, -0x7708(r13)

	.loc_0x118:
	  lwz       r0, 0x14(r1)
	  lwz       r3, -0x7708(r13)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8002F124
 * Size:	000040
 */
void JUTProcBar::destroy()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, -0x7708(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x28
	  beq-      .loc_0x28
	  li        r0, 0
	  stw       r0, -0x7708(r13)
	  bl        -0xB094

	.loc_0x28:
	  li        r0, 0
	  stw       r0, -0x7708(r13)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8002F164
 * Size:	0000D0
 */
void JUTProcBar::clear()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r4, 0xFF
	  li        r3, 0x81
	  stw       r0, 0x14(r1)
	  li        r0, 0x1E
	  stw       r31, 0xC(r1)
	  lwz       r31, -0x7708(r13)
	  stb       r4, 0x10(r31)
	  stb       r3, 0x11(r31)
	  stb       r0, 0x12(r31)
	  bl        0xC3A18
	  stw       r3, 0x0(r31)
	  li        r4, 0xFF
	  li        r3, 0x81
	  li        r0, 0x1E
	  lwz       r31, -0x7708(r13)
	  stb       r4, 0x38(r31)
	  stb       r3, 0x39(r31)
	  stb       r0, 0x3A(r31)
	  bl        0xC39F4
	  stw       r3, 0x28(r31)
	  li        r4, 0xFF
	  li        r3, 0x81
	  li        r0, 0x1E
	  lwz       r31, -0x7708(r13)
	  stb       r4, 0x24(r31)
	  stb       r3, 0x25(r31)
	  stb       r0, 0x26(r31)
	  bl        0xC39D0
	  stw       r3, 0x14(r31)
	  li        r4, 0xFF
	  li        r3, 0x81
	  li        r0, 0x1E
	  lwz       r31, -0x7708(r13)
	  stb       r4, 0x60(r31)
	  stb       r3, 0x61(r31)
	  stb       r0, 0x62(r31)
	  bl        0xC39AC
	  stw       r3, 0x50(r31)
	  li        r0, 0
	  lfs       f1, -0x7CC8(r2)
	  lwz       r3, -0x7708(r13)
	  lfs       f0, -0x7CC4(r2)
	  stw       r0, 0x104(r3)
	  stfs      f1, -0x7FB0(r13)
	  stfs      f0, -0x7FAC(r13)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00018C
 */
void JUTProcBar::bar_subroutine(int, int, int, int, int, int, int,
                                JUtility::TColor, JUtility::TColor)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000144
 */
void JUTProcBar::adjustMeterLength(unsigned long, float*, float, float, int*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8002F234
 * Size:	000034
 */
void JUTProcBar::draw()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        .loc_0x34
	  mr        r3, r31
	  bl        0x182C
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr

	.loc_0x34:
	*/
}

/*
 * --INFO--
 * Address:	8002F268
 * Size:	001814
 */
void JUTProcBar::drawProcessBar()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x180(r1)
	  mflr      r0
	  stw       r0, 0x184(r1)
	  stfd      f31, 0x170(r1)
	  psq_st    f31,0x178(r1),0,0
	  stmw      r20, 0x140(r1)
	  mr        r30, r3
	  lbz       r0, 0x10C(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x17F8
	  lwz       r3, -0x76E0(r13)
	  li        r27, 0x411A
	  cmplwi    r3, 0
	  beq-      .loc_0x50
	  lwz       r3, 0x4(r3)
	  lwz       r0, 0x0(r3)
	  rlwinm    r0,r0,30,28,31
	  cmpwi     r0, 0x1
	  bne-      .loc_0x50
	  li        r27, 0x4E20

	.loc_0x50:
	  lbz       r0, -0x7700(r13)
	  extsb.    r0, r0
	  bne-      .loc_0x6C
	  li        r3, 0
	  li        r0, 0x1
	  stw       r3, -0x7704(r13)
	  stb       r0, -0x7700(r13)

	.loc_0x6C:
	  lwz       r5, 0x54(r30)
	  li        r4, 0
	  lfs       f0, -0x7FB0(r13)
	  lis       r3, 0x4330
	  lfs       f9, -0x7CB0(r2)
	  lfd       f8, -0x7C98(r2)
	  lfs       f7, -0x7CAC(r2)
	  lfd       f5, -0x7CB8(r2)
	  lfs       f4, -0x7CA8(r2)
	  lfs       f2, -0x7CA4(r2)
	  lfs       f1, -0x7C90(r2)
	  b         .loc_0xE8

	.loc_0x9C:
	  stw       r5, 0xFC(r1)
	  lwz       r0, 0x120(r30)
	  stw       r3, 0xF8(r1)
	  xoris     r0, r0, 0x8000
	  lfd       f3, 0xF8(r1)
	  stw       r0, 0x104(r1)
	  fsubs     f3, f3, f8
	  stw       r3, 0x100(r1)
	  fmuls     f6, f3, f0
	  lfd       f3, 0x100(r1)
	  fsubs     f3, f3, f5
	  fmuls     f6, f9, f6
	  fsubs     f3, f3, f4
	  fdivs     f6, f6, f7
	  fcmpo     cr0, f6, f3
	  cror      2, 0, 0x2
	  beq-      .loc_0xF0
	  fsubs     f0, f0, f2
	  li        r4, 0x1

	.loc_0xE8:
	  fcmpo     cr0, f0, f1
	  bgt+      .loc_0x9C

	.loc_0xF0:
	  lfs       f1, -0x7CC4(r2)
	  fcmpo     cr0, f0, f1
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x108
	  li        r0, 0
	  stw       r0, -0x7704(r13)

	.loc_0x108:
	  lfs       f1, -0x7C8C(r2)
	  fcmpo     cr0, f0, f1
	  ble-      .loc_0x194
	  lfs       f0, -0x7CC4(r2)
	  b         .loc_0x194

	.loc_0x11C:
	  lwz       r3, -0x7704(r13)
	  addi      r0, r3, 0x1
	  cmpwi     r0, 0x1E
	  stw       r0, -0x7704(r13)
	  blt-      .loc_0x1A8
	  lis       r3, 0x4330
	  lwz       r0, 0x120(r30)
	  stw       r5, 0x104(r1)
	  xoris     r0, r0, 0x8000
	  lfd       f2, -0x7C98(r2)
	  stw       r3, 0x100(r1)
	  lfs       f6, -0x7CB0(r2)
	  lfd       f1, 0x100(r1)
	  lfs       f4, -0x7CAC(r2)
	  fsubs     f1, f1, f2
	  stw       r0, 0xFC(r1)
	  lfd       f3, -0x7CB8(r2)
	  stw       r3, 0xF8(r1)
	  fmuls     f5, f1, f0
	  lfs       f1, -0x7C9C(r2)
	  lfd       f2, 0xF8(r1)
	  fmuls     f5, f6, f5
	  fsubs     f2, f2, f3
	  fdivs     f3, f5, f4
	  fsubs     f1, f2, f1
	  fcmpo     cr0, f3, f1
	  bge-      .loc_0x1A8
	  lfs       f1, -0x7CA0(r2)
	  fadds     f0, f0, f1
	  b         .loc_0x1A8

	.loc_0x194:
	  cmpwi     r4, 0
	  bne-      .loc_0x1A8
	  lfs       f1, -0x7CC4(r2)
	  fcmpo     cr0, f0, f1
	  blt+      .loc_0x11C

	.loc_0x1A8:
	  lfs       f1, -0x7CB0(r2)
	  stfs      f0, -0x7FB0(r13)
	  fmuls     f0, f1, f0
	  lwz       r5, 0x114(r30)
	  lwz       r3, 0xC(r30)
	  fctiwz    f0, f0
	  lwz       r4, 0x120(r30)
	  addi      r0, r3, 0x1
	  rlwinm    r25,r5,3,0,28
	  cmplwi    r0, 0x10
	  stw       r0, 0xC(r30)
	  stfd      f0, 0x100(r1)
	  mulli     r31, r5, 0xA
	  rlwinm    r24,r5,1,0,30
	  lwz       r26, 0x104(r1)
	  add       r3, r4, r26
	  subi      r0, r3, 0x4
	  divw      r23, r0, r26
	  bge-      .loc_0x204
	  lwz       r3, 0x4(r30)
	  lwz       r0, 0x8(r30)
	  cmplw     r3, r0
	  blt-      .loc_0x214

	.loc_0x204:
	  lwz       r3, 0x4(r30)
	  li        r0, 0
	  stw       r3, 0x8(r30)
	  stw       r0, 0xC(r30)

	.loc_0x214:
	  lwz       r3, 0x20(r30)
	  addi      r0, r3, 0x1
	  cmplwi    r0, 0x10
	  stw       r0, 0x20(r30)
	  bge-      .loc_0x238
	  lwz       r3, 0x18(r30)
	  lwz       r0, 0x1C(r30)
	  cmplw     r3, r0
	  blt-      .loc_0x248

	.loc_0x238:
	  lwz       r3, 0x18(r30)
	  li        r0, 0
	  stw       r3, 0x1C(r30)
	  stw       r0, 0x20(r30)

	.loc_0x248:
	  lwz       r3, 0x34(r30)
	  addi      r0, r3, 0x1
	  cmplwi    r0, 0x10
	  stw       r0, 0x34(r30)
	  bge-      .loc_0x26C
	  lwz       r3, 0x2C(r30)
	  lwz       r0, 0x30(r30)
	  cmplw     r3, r0
	  blt-      .loc_0x27C

	.loc_0x26C:
	  lwz       r3, 0x2C(r30)
	  li        r0, 0
	  stw       r3, 0x30(r30)
	  stw       r0, 0x34(r30)

	.loc_0x27C:
	  li        r3, 0
	  li        r5, 0x32
	  li        r4, 0xC8
	  stb       r3, 0xF0(r1)
	  lis       r6, 0x4330
	  xoris     r0, r25, 0x8000
	  stb       r3, 0xF1(r1)
	  addi      r3, r1, 0xF4
	  lwz       r8, 0x2C(r30)
	  stb       r5, 0xF2(r1)
	  lwz       r7, 0x40(r30)
	  stb       r4, 0xF3(r1)
	  lwz       r5, 0x18(r30)
	  lwz       r4, 0xF0(r1)
	  stw       r6, 0x100(r1)
	  sub       r28, r5, r7
	  lfd       f4, -0x7CB8(r2)
	  sub       r22, r28, r8
	  stw       r4, 0xF4(r1)
	  lwz       r7, 0x118(r30)
	  lwz       r5, 0x11C(r30)
	  lwz       r4, 0x120(r30)
	  xoris     r7, r7, 0x8000
	  xoris     r5, r5, 0x8000
	  stw       r7, 0x104(r1)
	  xoris     r4, r4, 0x8000
	  lfd       f0, 0x100(r1)
	  stw       r5, 0xFC(r1)
	  fsubs     f1, f0, f4
	  stw       r6, 0xF8(r1)
	  lfd       f0, 0xF8(r1)
	  stw       r4, 0x10C(r1)
	  fsubs     f2, f0, f4
	  stw       r6, 0x108(r1)
	  lfd       f0, 0x108(r1)
	  stw       r0, 0x114(r1)
	  fsubs     f3, f0, f4
	  stw       r6, 0x110(r1)
	  lfd       f0, 0x110(r1)
	  fsubs     f4, f0, f4
	  bl        0x6474
	  li        r3, 0x32
	  li        r6, 0x96
	  li        r5, 0xFF
	  stb       r3, 0xE8(r1)
	  lis       r7, 0x4330
	  xoris     r0, r25, 0x8000
	  stb       r3, 0xE9(r1)
	  addi      r3, r1, 0xEC
	  lfd       f4, -0x7CB8(r2)
	  li        r4, 0x6
	  stb       r6, 0xEA(r1)
	  stb       r5, 0xEB(r1)
	  lwz       r5, 0xE8(r1)
	  stw       r7, 0x118(r1)
	  stw       r5, 0xEC(r1)
	  lwz       r8, 0x118(r30)
	  lwz       r6, 0x11C(r30)
	  lwz       r5, 0x120(r30)
	  xoris     r8, r8, 0x8000
	  xoris     r6, r6, 0x8000
	  stw       r8, 0x11C(r1)
	  xoris     r5, r5, 0x8000
	  lfd       f0, 0x118(r1)
	  stw       r6, 0x124(r1)
	  fsubs     f1, f0, f4
	  stw       r7, 0x120(r1)
	  lfd       f0, 0x120(r1)
	  stw       r5, 0x12C(r1)
	  fsubs     f2, f0, f4
	  stw       r7, 0x128(r1)
	  lfd       f0, 0x128(r1)
	  stw       r0, 0x134(r1)
	  fsubs     f3, f0, f4
	  stw       r7, 0x130(r1)
	  lfd       f0, 0x130(r1)
	  fsubs     f4, f0, f4
	  bl        0x6630
	  lwz       r0, 0x104(r30)
	  cmpw      r0, r23
	  ble-      .loc_0x44C
	  li        r5, 0
	  li        r3, 0xFA
	  li        r0, 0xC8
	  stb       r3, 0xE0(r1)
	  lis       r6, 0x4330
	  addi      r4, r25, 0x1
	  stb       r5, 0xE1(r1)
	  addi      r3, r1, 0xE4
	  lfd       f3, -0x7CB8(r2)
	  stb       r5, 0xE2(r1)
	  lfs       f4, -0x7C90(r2)
	  stb       r0, 0xE3(r1)
	  lwz       r0, 0xE0(r1)
	  stw       r6, 0x130(r1)
	  stw       r0, 0xE4(r1)
	  lwz       r5, 0x11C(r30)
	  lwz       r7, 0x118(r30)
	  lwz       r0, 0x120(r30)
	  add       r4, r5, r4
	  xoris     r5, r7, 0x8000
	  stw       r6, 0x128(r1)
	  xoris     r4, r4, 0x8000
	  xoris     r0, r0, 0x8000
	  stw       r5, 0x134(r1)
	  stw       r4, 0x12C(r1)
	  lfd       f1, 0x130(r1)
	  lfd       f0, 0x128(r1)
	  stw       r0, 0x124(r1)
	  fsubs     f1, f1, f3
	  fsubs     f2, f0, f3
	  stw       r6, 0x120(r1)
	  lfd       f0, 0x120(r1)
	  fsubs     f3, f0, f3
	  bl        0x634C
	  b         .loc_0x4DC

	.loc_0x44C:
	  li        r4, 0xFA
	  li        r3, 0
	  li        r0, 0xC8
	  stb       r3, 0xD8(r1)
	  lis       r7, 0x4330
	  addi      r5, r25, 0x1
	  stb       r4, 0xD9(r1)
	  addi      r3, r1, 0xDC
	  lfd       f3, -0x7CB8(r2)
	  stb       r4, 0xDA(r1)
	  lfs       f4, -0x7C90(r2)
	  stb       r0, 0xDB(r1)
	  lwz       r0, 0xD8(r1)
	  stw       r7, 0x130(r1)
	  stw       r0, 0xDC(r1)
	  lwz       r0, 0x104(r30)
	  lwz       r6, 0x11C(r30)
	  mullw     r4, r0, r26
	  lwz       r8, 0x118(r30)
	  add       r0, r6, r5
	  stw       r7, 0x128(r1)
	  xoris     r6, r8, 0x8000
	  xoris     r5, r0, 0x8000
	  addi      r0, r4, 0x2
	  stw       r6, 0x134(r1)
	  xoris     r0, r0, 0x8000
	  stw       r5, 0x12C(r1)
	  lfd       f1, 0x130(r1)
	  lfd       f0, 0x128(r1)
	  stw       r0, 0x124(r1)
	  fsubs     f1, f1, f3
	  fsubs     f2, f0, f3
	  stw       r7, 0x120(r1)
	  lfd       f0, 0x120(r1)
	  fsubs     f3, f0, f3
	  bl        0x62B8

	.loc_0x4DC:
	  lwz       r3, 0x54(r30)
	  lwz       r0, 0x120(r30)
	  mullw     r3, r3, r26
	  divwu     r3, r3, r27
	  cmpw      r3, r0
	  ble-      .loc_0x578
	  li        r4, 0xFF
	  li        r3, 0x64
	  li        r0, 0
	  stb       r4, 0xD0(r1)
	  lis       r5, 0x4330
	  lfd       f3, -0x7CB8(r2)
	  stb       r3, 0xD1(r1)
	  addi      r3, r1, 0xD4
	  lfs       f4, -0x7C90(r2)
	  stb       r0, 0xD2(r1)
	  stb       r4, 0xD3(r1)
	  lwz       r0, 0xD0(r1)
	  stw       r5, 0x130(r1)
	  stw       r0, 0xD4(r1)
	  lwz       r6, 0x118(r30)
	  lwz       r4, 0x11C(r30)
	  lwz       r0, 0x120(r30)
	  xoris     r6, r6, 0x8000
	  xoris     r4, r4, 0x8000
	  stw       r6, 0x134(r1)
	  xoris     r0, r0, 0x8000
	  lfd       f0, 0x130(r1)
	  stw       r4, 0x12C(r1)
	  fsubs     f1, f0, f3
	  stw       r5, 0x128(r1)
	  lfd       f0, 0x128(r1)
	  stw       r0, 0x124(r1)
	  fsubs     f2, f0, f3
	  stw       r5, 0x120(r1)
	  lfd       f0, 0x120(r1)
	  fsubs     f3, f0, f3
	  bl        0x6220
	  b         .loc_0x5F4

	.loc_0x578:
	  li        r6, 0xFF
	  li        r0, 0x32
	  li        r4, 0
	  stb       r0, 0xC8(r1)
	  lis       r5, 0x4330
	  xoris     r0, r3, 0x8000
	  stb       r6, 0xC9(r1)
	  addi      r3, r1, 0xCC
	  lfd       f3, -0x7CB8(r2)
	  stb       r4, 0xCA(r1)
	  lfs       f4, -0x7C90(r2)
	  stb       r6, 0xCB(r1)
	  lwz       r4, 0xC8(r1)
	  stw       r5, 0x130(r1)
	  stw       r4, 0xCC(r1)
	  lwz       r6, 0x118(r30)
	  lwz       r4, 0x11C(r30)
	  xoris     r6, r6, 0x8000
	  stw       r5, 0x128(r1)
	  xoris     r4, r4, 0x8000
	  stw       r6, 0x134(r1)
	  stw       r4, 0x12C(r1)
	  lfd       f1, 0x130(r1)
	  lfd       f0, 0x128(r1)
	  stw       r0, 0x124(r1)
	  fsubs     f1, f1, f3
	  fsubs     f2, f0, f3
	  stw       r5, 0x120(r1)
	  lfd       f0, 0x120(r1)
	  fsubs     f3, f0, f3
	  bl        0x61A0

	.loc_0x5F4:
	  lwz       r0, 0x110(r30)
	  cmpwi     r0, 0
	  bne-      .loc_0xAE0
	  lwz       r0, 0x18(r30)
	  lis       r5, 0x4330
	  li        r9, 0xFF
	  li        r7, 0x50
	  mullw     r4, r0, r26
	  lwz       r3, 0x1C(r30)
	  lwz       r6, 0x118(r30)
	  xoris     r0, r24, 0x8000
	  li        r10, 0x64
	  lwz       r8, 0x11C(r30)
	  divw      r11, r4, r27
	  lwz       r4, 0x114(r30)
	  addi      r28, r6, 0x1
	  stw       r5, 0x130(r1)
	  add       r22, r8, r4
	  lfd       f4, -0x7CB8(r2)
	  mullw     r6, r3, r26
	  xoris     r4, r28, 0x8000
	  xoris     r3, r22, 0x8000
	  stw       r4, 0x134(r1)
	  xoris     r4, r11, 0x8000
	  lfd       f0, 0x130(r1)
	  li        r8, 0x78
	  stw       r3, 0x12C(r1)
	  divw      r29, r6, r27
	  fsubs     f1, f0, f4
	  stw       r5, 0x128(r1)
	  addi      r3, r1, 0x44
	  lfd       f0, 0x128(r1)
	  stw       r4, 0x124(r1)
	  stw       r5, 0x120(r1)
	  fsubs     f2, f0, f4
	  lfd       f0, 0x120(r1)
	  stw       r0, 0x11C(r1)
	  fsubs     f3, f0, f4
	  stw       r5, 0x118(r1)
	  lfd       f0, 0x118(r1)
	  stb       r7, 0xC4(r1)
	  fsubs     f4, f0, f4
	  stb       r9, 0xC5(r1)
	  stb       r7, 0xC6(r1)
	  stb       r9, 0xC7(r1)
	  lwz       r0, 0xC4(r1)
	  stb       r10, 0xC0(r1)
	  stb       r9, 0xC1(r1)
	  stb       r8, 0xC2(r1)
	  stb       r9, 0xC3(r1)
	  stw       r0, 0x44(r1)
	  bl        0x60D0
	  cmpwi     r29, 0
	  blt-      .loc_0x7A0
	  cmpwi     r29, 0x6
	  bge-      .loc_0x740
	  lis       r6, 0x4330
	  xoris     r3, r28, 0x8000
	  xoris     r5, r22, 0x8000
	  xoris     r4, r29, 0x8000
	  xoris     r0, r24, 0x8000
	  stw       r3, 0x134(r1)
	  lfd       f4, -0x7CB8(r2)
	  addi      r3, r1, 0x48
	  stw       r6, 0x130(r1)
	  lwz       r7, 0xC0(r1)
	  lfd       f0, 0x130(r1)
	  stw       r5, 0x12C(r1)
	  fsubs     f1, f0, f4
	  stw       r6, 0x128(r1)
	  lfd       f0, 0x128(r1)
	  stw       r4, 0x124(r1)
	  fsubs     f2, f0, f4
	  stw       r6, 0x120(r1)
	  lfd       f0, 0x120(r1)
	  stw       r0, 0x11C(r1)
	  fsubs     f3, f0, f4
	  stw       r6, 0x118(r1)
	  lfd       f0, 0x118(r1)
	  stw       r7, 0x48(r1)
	  fsubs     f4, f0, f4
	  bl        0x6058
	  b         .loc_0x7A0

	.loc_0x740:
	  subi      r0, r29, 0x6
	  lis       r5, 0x4330
	  add       r0, r28, r0
	  xoris     r4, r22, 0x8000
	  xoris     r3, r0, 0x8000
	  xoris     r0, r24, 0x8000
	  stw       r3, 0x134(r1)
	  addi      r3, r1, 0x4C
	  lwz       r6, 0xC0(r1)
	  stw       r5, 0x130(r1)
	  lfd       f4, -0x7CB8(r2)
	  lfd       f0, 0x130(r1)
	  stw       r4, 0x12C(r1)
	  fsubs     f1, f0, f4
	  lfs       f3, -0x7CC0(r2)
	  stw       r5, 0x128(r1)
	  lfd       f0, 0x128(r1)
	  stw       r0, 0x124(r1)
	  fsubs     f2, f0, f4
	  stw       r5, 0x120(r1)
	  lfd       f0, 0x120(r1)
	  stw       r6, 0x4C(r1)
	  fsubs     f4, f0, f4
	  bl        0x5FF4

	.loc_0x7A0:
	  lwz       r0, 0x2C(r30)
	  lis       r6, 0x4330
	  li        r11, 0xFF
	  li        r9, 0x50
	  mullw     r5, r0, r26
	  li        r10, 0x64
	  lwz       r4, 0x30(r30)
	  xoris     r0, r24, 0x8000
	  lwz       r7, 0x114(r30)
	  addi      r3, r1, 0x38
	  divw      r12, r5, r27
	  lwz       r5, 0x118(r30)
	  rlwinm    r7,r7,1,0,30
	  stw       r6, 0x130(r1)
	  addi      r29, r5, 0x1
	  lfd       f4, -0x7CB8(r2)
	  mullw     r8, r4, r26
	  add       r22, r22, r7
	  xoris     r7, r29, 0x8000
	  stw       r6, 0x128(r1)
	  xoris     r5, r22, 0x8000
	  xoris     r4, r12, 0x8000
	  stw       r7, 0x134(r1)
	  divw      r28, r8, r27
	  stw       r5, 0x12C(r1)
	  lfd       f1, 0x130(r1)
	  lfd       f0, 0x128(r1)
	  stw       r4, 0x124(r1)
	  fsubs     f1, f1, f4
	  stw       r6, 0x120(r1)
	  fsubs     f2, f0, f4
	  lfd       f0, 0x120(r1)
	  stw       r0, 0x11C(r1)
	  fsubs     f3, f0, f4
	  stw       r6, 0x118(r1)
	  lfd       f0, 0x118(r1)
	  stb       r11, 0xBC(r1)
	  fsubs     f4, f0, f4
	  stb       r9, 0xBD(r1)
	  stb       r9, 0xBE(r1)
	  stb       r11, 0xBF(r1)
	  lwz       r0, 0xBC(r1)
	  stb       r11, 0xB8(r1)
	  stb       r10, 0xB9(r1)
	  stb       r10, 0xBA(r1)
	  stb       r11, 0xBB(r1)
	  stw       r0, 0x38(r1)
	  bl        0x5F34
	  cmpwi     r28, 0
	  blt-      .loc_0x93C
	  cmpwi     r28, 0x6
	  bge-      .loc_0x8DC
	  lis       r6, 0x4330
	  xoris     r3, r29, 0x8000
	  xoris     r5, r22, 0x8000
	  xoris     r4, r28, 0x8000
	  xoris     r0, r24, 0x8000
	  stw       r3, 0x134(r1)
	  lfd       f4, -0x7CB8(r2)
	  addi      r3, r1, 0x3C
	  stw       r6, 0x130(r1)
	  lwz       r7, 0xB8(r1)
	  lfd       f0, 0x130(r1)
	  stw       r5, 0x12C(r1)
	  fsubs     f1, f0, f4
	  stw       r6, 0x128(r1)
	  lfd       f0, 0x128(r1)
	  stw       r4, 0x124(r1)
	  fsubs     f2, f0, f4
	  stw       r6, 0x120(r1)
	  lfd       f0, 0x120(r1)
	  stw       r0, 0x11C(r1)
	  fsubs     f3, f0, f4
	  stw       r6, 0x118(r1)
	  lfd       f0, 0x118(r1)
	  stw       r7, 0x3C(r1)
	  fsubs     f4, f0, f4
	  bl        0x5EBC
	  b         .loc_0x93C

	.loc_0x8DC:
	  subi      r0, r28, 0x6
	  lis       r5, 0x4330
	  add       r0, r29, r0
	  xoris     r4, r22, 0x8000
	  xoris     r3, r0, 0x8000
	  xoris     r0, r24, 0x8000
	  stw       r3, 0x134(r1)
	  addi      r3, r1, 0x40
	  lwz       r6, 0xB8(r1)
	  stw       r5, 0x130(r1)
	  lfd       f4, -0x7CB8(r2)
	  lfd       f0, 0x130(r1)
	  stw       r4, 0x12C(r1)
	  fsubs     f1, f0, f4
	  lfs       f3, -0x7CC0(r2)
	  stw       r5, 0x128(r1)
	  lfd       f0, 0x128(r1)
	  stw       r0, 0x124(r1)
	  fsubs     f2, f0, f4
	  stw       r5, 0x120(r1)
	  lfd       f0, 0x120(r1)
	  stw       r6, 0x40(r1)
	  fsubs     f4, f0, f4
	  bl        0x5E58

	.loc_0x93C:
	  lwz       r0, 0x4(r30)
	  lis       r6, 0x4330
	  li        r11, 0xC8
	  li        r10, 0xFF
	  mullw     r4, r0, r26
	  li        r9, 0xB4
	  lwz       r3, 0x8(r30)
	  xoris     r0, r24, 0x8000
	  lwz       r5, 0x114(r30)
	  li        r8, 0xA0
	  divw      r12, r4, r27
	  lwz       r4, 0x118(r30)
	  rlwinm    r5,r5,1,0,30
	  stw       r6, 0x130(r1)
	  addi      r29, r4, 0x1
	  lfd       f4, -0x7CB8(r2)
	  mullw     r7, r3, r26
	  add       r22, r22, r5
	  xoris     r3, r29, 0x8000
	  stw       r6, 0x128(r1)
	  xoris     r5, r22, 0x8000
	  xoris     r4, r12, 0x8000
	  stw       r3, 0x134(r1)
	  divw      r28, r7, r27
	  addi      r3, r1, 0x2C
	  stw       r5, 0x12C(r1)
	  lfd       f1, 0x130(r1)
	  lfd       f0, 0x128(r1)
	  stw       r4, 0x124(r1)
	  stw       r6, 0x120(r1)
	  fsubs     f1, f1, f4
	  fsubs     f2, f0, f4
	  lfd       f0, 0x120(r1)
	  stw       r0, 0x11C(r1)
	  fsubs     f3, f0, f4
	  stw       r6, 0x118(r1)
	  lfd       f0, 0x118(r1)
	  stb       r9, 0xB4(r1)
	  fsubs     f4, f0, f4
	  stb       r9, 0xB5(r1)
	  stb       r8, 0xB6(r1)
	  stb       r10, 0xB7(r1)
	  lwz       r0, 0xB4(r1)
	  stb       r11, 0xB0(r1)
	  stb       r11, 0xB1(r1)
	  stb       r11, 0xB2(r1)
	  stb       r10, 0xB3(r1)
	  stw       r0, 0x2C(r1)
	  bl        0x5D94
	  cmpwi     r28, 0
	  blt-      .loc_0x1030
	  cmpwi     r28, 0x6
	  bge-      .loc_0xA7C
	  lis       r6, 0x4330
	  xoris     r3, r29, 0x8000
	  xoris     r5, r22, 0x8000
	  xoris     r4, r28, 0x8000
	  xoris     r0, r24, 0x8000
	  stw       r3, 0x134(r1)
	  lfd       f4, -0x7CB8(r2)
	  addi      r3, r1, 0x30
	  stw       r6, 0x130(r1)
	  lwz       r7, 0xB0(r1)
	  lfd       f0, 0x130(r1)
	  stw       r5, 0x12C(r1)
	  fsubs     f1, f0, f4
	  stw       r6, 0x128(r1)
	  lfd       f0, 0x128(r1)
	  stw       r4, 0x124(r1)
	  fsubs     f2, f0, f4
	  stw       r6, 0x120(r1)
	  lfd       f0, 0x120(r1)
	  stw       r0, 0x11C(r1)
	  fsubs     f3, f0, f4
	  stw       r6, 0x118(r1)
	  lfd       f0, 0x118(r1)
	  stw       r7, 0x30(r1)
	  fsubs     f4, f0, f4
	  bl        0x5D1C
	  b         .loc_0x1030

	.loc_0xA7C:
	  subi      r0, r28, 0x6
	  lis       r5, 0x4330
	  add       r0, r29, r0
	  xoris     r4, r22, 0x8000
	  xoris     r3, r0, 0x8000
	  xoris     r0, r24, 0x8000
	  stw       r3, 0x134(r1)
	  addi      r3, r1, 0x34
	  lwz       r6, 0xB0(r1)
	  stw       r5, 0x130(r1)
	  lfd       f4, -0x7CB8(r2)
	  lfd       f0, 0x130(r1)
	  stw       r4, 0x12C(r1)
	  fsubs     f1, f0, f4
	  lfs       f3, -0x7CC0(r2)
	  stw       r5, 0x128(r1)
	  lfd       f0, 0x128(r1)
	  stw       r0, 0x124(r1)
	  fsubs     f2, f0, f4
	  stw       r5, 0x120(r1)
	  lfd       f0, 0x120(r1)
	  stw       r6, 0x34(r1)
	  fsubs     f4, f0, f4
	  bl        0x5CB8
	  b         .loc_0x1030

	.loc_0xAE0:
	  mullw     r0, r28, r26
	  lis       r6, 0x4330
	  li        r10, 0x50
	  lwz       r4, 0x118(r30)
	  li        r9, 0xFF
	  lwz       r7, 0x11C(r30)
	  divw      r3, r0, r27
	  neg       r8, r26
	  lwz       r5, 0x114(r30)
	  addi      r20, r4, 0x1
	  xoris     r0, r24, 0x8000
	  stw       r6, 0x130(r1)
	  add       r21, r7, r5
	  xoris     r7, r20, 0x8000
	  xoris     r5, r21, 0x8000
	  xoris     r4, r3, 0x8000
	  stw       r7, 0x134(r1)
	  divw      r29, r8, r27
	  lfd       f4, -0x7CB8(r2)
	  addi      r3, r1, 0x20
	  lfd       f0, 0x130(r1)
	  stw       r5, 0x12C(r1)
	  fsubs     f1, f0, f4
	  stw       r6, 0x128(r1)
	  lfd       f0, 0x128(r1)
	  stw       r4, 0x124(r1)
	  fsubs     f2, f0, f4
	  stw       r6, 0x120(r1)
	  lfd       f0, 0x120(r1)
	  stw       r0, 0x11C(r1)
	  fsubs     f3, f0, f4
	  stw       r6, 0x118(r1)
	  lfd       f0, 0x118(r1)
	  stb       r10, 0xAC(r1)
	  fsubs     f4, f0, f4
	  stb       r9, 0xAD(r1)
	  stb       r10, 0xAE(r1)
	  stb       r9, 0xAF(r1)
	  lwz       r0, 0xAC(r1)
	  stb       r10, 0xA8(r1)
	  stb       r9, 0xA9(r1)
	  stb       r10, 0xAA(r1)
	  stb       r9, 0xAB(r1)
	  stw       r0, 0x20(r1)
	  bl        0x5C00
	  cmpwi     r29, 0
	  blt-      .loc_0xC70
	  cmpwi     r29, 0x6
	  bge-      .loc_0xC10
	  lis       r6, 0x4330
	  xoris     r3, r20, 0x8000
	  xoris     r5, r21, 0x8000
	  xoris     r4, r29, 0x8000
	  xoris     r0, r24, 0x8000
	  stw       r3, 0x134(r1)
	  lfd       f4, -0x7CB8(r2)
	  addi      r3, r1, 0x24
	  stw       r6, 0x130(r1)
	  lwz       r7, 0xA8(r1)
	  lfd       f0, 0x130(r1)
	  stw       r5, 0x12C(r1)
	  fsubs     f1, f0, f4
	  stw       r6, 0x128(r1)
	  lfd       f0, 0x128(r1)
	  stw       r4, 0x124(r1)
	  fsubs     f2, f0, f4
	  stw       r6, 0x120(r1)
	  lfd       f0, 0x120(r1)
	  stw       r0, 0x11C(r1)
	  fsubs     f3, f0, f4
	  stw       r6, 0x118(r1)
	  lfd       f0, 0x118(r1)
	  stw       r7, 0x24(r1)
	  fsubs     f4, f0, f4
	  bl        0x5B88
	  b         .loc_0xC70

	.loc_0xC10:
	  subi      r0, r29, 0x6
	  lis       r5, 0x4330
	  add       r0, r20, r0
	  xoris     r4, r21, 0x8000
	  xoris     r3, r0, 0x8000
	  xoris     r0, r24, 0x8000
	  stw       r3, 0x134(r1)
	  addi      r3, r1, 0x28
	  lwz       r6, 0xA8(r1)
	  stw       r5, 0x130(r1)
	  lfd       f4, -0x7CB8(r2)
	  lfd       f0, 0x130(r1)
	  stw       r4, 0x12C(r1)
	  fsubs     f1, f0, f4
	  lfs       f3, -0x7CC0(r2)
	  stw       r5, 0x128(r1)
	  lfd       f0, 0x128(r1)
	  stw       r0, 0x124(r1)
	  fsubs     f2, f0, f4
	  stw       r5, 0x120(r1)
	  lfd       f0, 0x120(r1)
	  stw       r6, 0x28(r1)
	  fsubs     f4, f0, f4
	  bl        0x5B24

	.loc_0xC70:
	  li        r7, 0
	  li        r8, 0xFF
	  stb       r7, 0xA0(r1)
	  lis       r6, 0x4330
	  mullw     r4, r28, r26
	  xoris     r5, r21, 0x8000
	  stb       r8, 0xA1(r1)
	  xoris     r0, r24, 0x8000
	  lfd       f4, -0x7CB8(r2)
	  addi      r3, r1, 0xA4
	  stb       r7, 0xA2(r1)
	  divwu     r7, r4, r27
	  stb       r8, 0xA3(r1)
	  lwz       r4, 0xA0(r1)
	  stw       r6, 0x130(r1)
	  stw       r4, 0xA4(r1)
	  lwz       r4, 0x40(r30)
	  mullw     r4, r4, r26
	  add       r7, r20, r7
	  stw       r5, 0x12C(r1)
	  xoris     r5, r7, 0x8000
	  stw       r5, 0x134(r1)
	  divwu     r4, r4, r27
	  stw       r6, 0x128(r1)
	  lfd       f1, 0x130(r1)
	  lfd       f0, 0x128(r1)
	  stw       r6, 0x120(r1)
	  fsubs     f1, f1, f4
	  xoris     r4, r4, 0x8000
	  stw       r0, 0x11C(r1)
	  fsubs     f2, f0, f4
	  stw       r4, 0x124(r1)
	  stw       r6, 0x118(r1)
	  lfd       f3, 0x120(r1)
	  lfd       f0, 0x118(r1)
	  fsubs     f3, f3, f4
	  fsubs     f4, f0, f4
	  bl        0x5A8C
	  lwz       r0, 0x18(r30)
	  lis       r5, 0x4330
	  lwz       r4, 0x2C(r30)
	  li        r8, 0xFF
	  mullw     r10, r0, r26
	  li        r7, 0x50
	  lwz       r6, 0x114(r30)
	  xoris     r0, r24, 0x8000
	  stw       r5, 0x110(r1)
	  addi      r3, r1, 0x14
	  mullw     r9, r22, r26
	  rlwinm    r6,r6,1,0,30
	  stw       r5, 0x108(r1)
	  add       r21, r21, r6
	  lfd       f1, -0x7CB8(r2)
	  stw       r5, 0x100(r1)
	  mullw     r6, r4, r26
	  xoris     r4, r21, 0x8000
	  stw       r4, 0x10C(r1)
	  lfd       f0, 0x108(r1)
	  stw       r0, 0xFC(r1)
	  divwu     r0, r10, r27
	  stw       r5, 0xF8(r1)
	  fsubs     f2, f0, f1
	  lfd       f0, 0xF8(r1)
	  stb       r8, 0x9C(r1)
	  fsubs     f4, f0, f1
	  divw      r6, r6, r27
	  add       r22, r20, r0
	  stb       r7, 0x9D(r1)
	  stb       r7, 0x9E(r1)
	  stb       r8, 0x9F(r1)
	  lwz       r4, 0x9C(r1)
	  divwu     r5, r9, r27
	  xoris     r0, r6, 0x8000
	  stw       r0, 0x104(r1)
	  lfd       f0, 0x100(r1)
	  stb       r8, 0x98(r1)
	  fsubs     f3, f0, f1
	  add       r20, r20, r5
	  stb       r7, 0x99(r1)
	  xoris     r0, r20, 0x8000
	  stw       r0, 0x114(r1)
	  lfd       f0, 0x110(r1)
	  stb       r7, 0x9A(r1)
	  fsubs     f1, f0, f1
	  stb       r8, 0x9B(r1)
	  stw       r4, 0x14(r1)
	  bl        0x59C8
	  cmpwi     r29, 0
	  blt-      .loc_0xEA8
	  cmpwi     r29, 0x6
	  bge-      .loc_0xE48
	  lis       r6, 0x4330
	  xoris     r3, r20, 0x8000
	  xoris     r5, r21, 0x8000
	  xoris     r4, r29, 0x8000
	  xoris     r0, r24, 0x8000
	  stw       r3, 0x134(r1)
	  lfd       f4, -0x7CB8(r2)
	  addi      r3, r1, 0x18
	  stw       r6, 0x130(r1)
	  lwz       r7, 0x98(r1)
	  lfd       f0, 0x130(r1)
	  stw       r5, 0x12C(r1)
	  fsubs     f1, f0, f4
	  stw       r6, 0x128(r1)
	  lfd       f0, 0x128(r1)
	  stw       r4, 0x124(r1)
	  fsubs     f2, f0, f4
	  stw       r6, 0x120(r1)
	  lfd       f0, 0x120(r1)
	  stw       r0, 0x11C(r1)
	  fsubs     f3, f0, f4
	  stw       r6, 0x118(r1)
	  lfd       f0, 0x118(r1)
	  stw       r7, 0x18(r1)
	  fsubs     f4, f0, f4
	  bl        0x5950
	  b         .loc_0xEA8

	.loc_0xE48:
	  subi      r0, r29, 0x6
	  lis       r5, 0x4330
	  add       r0, r20, r0
	  xoris     r4, r21, 0x8000
	  xoris     r3, r0, 0x8000
	  xoris     r0, r24, 0x8000
	  stw       r3, 0x134(r1)
	  addi      r3, r1, 0x1C
	  lwz       r6, 0x98(r1)
	  stw       r5, 0x130(r1)
	  lfd       f4, -0x7CB8(r2)
	  lfd       f0, 0x130(r1)
	  stw       r4, 0x12C(r1)
	  fsubs     f1, f0, f4
	  lfs       f3, -0x7CC0(r2)
	  stw       r5, 0x128(r1)
	  lfd       f0, 0x128(r1)
	  stw       r0, 0x124(r1)
	  fsubs     f2, f0, f4
	  stw       r5, 0x120(r1)
	  lfd       f0, 0x120(r1)
	  stw       r6, 0x1C(r1)
	  fsubs     f4, f0, f4
	  bl        0x58EC

	.loc_0xEA8:
	  lwz       r0, 0x4(r30)
	  lis       r6, 0x4330
	  li        r9, 0xB4
	  li        r8, 0xA0
	  mullw     r4, r0, r26
	  li        r7, 0xFF
	  lwz       r5, 0x114(r30)
	  xoris     r3, r22, 0x8000
	  xoris     r0, r24, 0x8000
	  stw       r3, 0x134(r1)
	  divw      r10, r4, r27
	  rlwinm    r4,r5,1,0,30
	  stw       r6, 0x130(r1)
	  addi      r3, r1, 0x8
	  add       r21, r21, r4
	  lfd       f4, -0x7CB8(r2)
	  xoris     r5, r21, 0x8000
	  xoris     r4, r10, 0x8000
	  lfd       f0, 0x130(r1)
	  stw       r5, 0x12C(r1)
	  fsubs     f1, f0, f4
	  stw       r6, 0x128(r1)
	  lfd       f0, 0x128(r1)
	  stw       r4, 0x124(r1)
	  fsubs     f2, f0, f4
	  stw       r6, 0x120(r1)
	  lfd       f0, 0x120(r1)
	  stw       r0, 0x11C(r1)
	  fsubs     f3, f0, f4
	  stw       r6, 0x118(r1)
	  lfd       f0, 0x118(r1)
	  stb       r9, 0x94(r1)
	  fsubs     f4, f0, f4
	  stb       r9, 0x95(r1)
	  stb       r8, 0x96(r1)
	  stb       r7, 0x97(r1)
	  lwz       r0, 0x94(r1)
	  stb       r9, 0x90(r1)
	  stb       r9, 0x91(r1)
	  stb       r8, 0x92(r1)
	  stb       r7, 0x93(r1)
	  stw       r0, 0x8(r1)
	  bl        0x5840
	  cmpwi     r29, 0
	  blt-      .loc_0x1030
	  cmpwi     r29, 0x6
	  bge-      .loc_0xFD0
	  lis       r6, 0x4330
	  xoris     r3, r22, 0x8000
	  xoris     r5, r21, 0x8000
	  xoris     r4, r29, 0x8000
	  xoris     r0, r24, 0x8000
	  stw       r3, 0x134(r1)
	  lfd       f4, -0x7CB8(r2)
	  addi      r3, r1, 0xC
	  stw       r6, 0x130(r1)
	  lwz       r7, 0x90(r1)
	  lfd       f0, 0x130(r1)
	  stw       r5, 0x12C(r1)
	  fsubs     f1, f0, f4
	  stw       r6, 0x128(r1)
	  lfd       f0, 0x128(r1)
	  stw       r4, 0x124(r1)
	  fsubs     f2, f0, f4
	  stw       r6, 0x120(r1)
	  lfd       f0, 0x120(r1)
	  stw       r0, 0x11C(r1)
	  fsubs     f3, f0, f4
	  stw       r6, 0x118(r1)
	  lfd       f0, 0x118(r1)
	  stw       r7, 0xC(r1)
	  fsubs     f4, f0, f4
	  bl        0x57C8
	  b         .loc_0x1030

	.loc_0xFD0:
	  subi      r0, r29, 0x6
	  lis       r5, 0x4330
	  add       r0, r22, r0
	  xoris     r4, r21, 0x8000
	  xoris     r3, r0, 0x8000
	  xoris     r0, r24, 0x8000
	  stw       r3, 0x134(r1)
	  addi      r3, r1, 0x10
	  lwz       r6, 0x90(r1)
	  stw       r5, 0x130(r1)
	  lfd       f4, -0x7CB8(r2)
	  lfd       f0, 0x130(r1)
	  stw       r4, 0x12C(r1)
	  fsubs     f1, f0, f4
	  lfs       f3, -0x7CC0(r2)
	  stw       r5, 0x128(r1)
	  lfd       f0, 0x128(r1)
	  stw       r0, 0x124(r1)
	  fsubs     f2, f0, f4
	  stw       r5, 0x120(r1)
	  lfd       f0, 0x120(r1)
	  stw       r6, 0x10(r1)
	  fsubs     f4, f0, f4
	  bl        0x5764

	.loc_0x1030:
	  lis       r3, 0x6666
	  lfd       f31, -0x7CB8(r2)
	  mr        r28, r26
	  li        r20, 0x1
	  addi      r29, r3, 0x6667
	  lis       r21, 0x4330
	  b         .loc_0x112C

	.loc_0x104C:
	  mulhw     r0, r29, r20
	  lwz       r3, 0x118(r30)
	  addi      r5, r28, 0x1
	  add       r5, r3, r5
	  srawi     r0, r0, 0x1
	  rlwinm    r3,r0,1,31,31
	  add       r0, r0, r3
	  mulli     r0, r0, 0x5
	  sub.      r0, r20, r0
	  beq-      .loc_0x1094
	  li        r3, 0x64
	  li        r0, 0xFF
	  stb       r3, 0x88(r1)
	  addi      r4, r1, 0x88
	  stb       r3, 0x89(r1)
	  stb       r0, 0x8A(r1)
	  stb       r0, 0x8B(r1)
	  b         .loc_0x10B0

	.loc_0x1094:
	  li        r0, 0xFF
	  li        r3, 0xB4
	  stb       r3, 0x84(r1)
	  addi      r4, r1, 0x84
	  stb       r0, 0x85(r1)
	  stb       r0, 0x86(r1)
	  stb       r0, 0x87(r1)

	.loc_0x10B0:
	  lwz       r0, 0x0(r4)
	  xoris     r6, r5, 0x8000
	  stw       r6, 0x134(r1)
	  addi      r3, r1, 0x8C
	  li        r4, 0xC
	  stw       r0, 0x8C(r1)
	  lwz       r5, 0x11C(r30)
	  lwz       r7, 0x114(r30)
	  add       r0, r5, r25
	  stw       r21, 0x130(r1)
	  add       r5, r5, r7
	  sub       r0, r0, r7
	  stw       r21, 0x128(r1)
	  xoris     r5, r5, 0x8000
	  lfd       f0, 0x130(r1)
	  xoris     r0, r0, 0x8000
	  stw       r5, 0x12C(r1)
	  fsubs     f1, f0, f31
	  lfd       f0, 0x128(r1)
	  stw       r6, 0x124(r1)
	  fsubs     f2, f0, f31
	  stw       r21, 0x120(r1)
	  lfd       f0, 0x120(r1)
	  stw       r0, 0x11C(r1)
	  fsubs     f3, f0, f31
	  stw       r21, 0x118(r1)
	  lfd       f0, 0x118(r1)
	  fsubs     f4, f0, f31
	  bl        0x5508
	  add       r28, r28, r26
	  addi      r20, r20, 0x1

	.loc_0x112C:
	  cmpw      r20, r23
	  blt+      .loc_0x104C
	  li        r3, 0x4
	  mr        r6, r30
	  li        r0, 0
	  li        r7, 0
	  li        r4, 0
	  mtctr     r3

	.loc_0x114C:
	  lwz       r3, 0x70(r6)
	  addi      r3, r3, 0x1
	  cmplwi    r3, 0x10
	  stw       r3, 0x70(r6)
	  bge-      .loc_0x1170
	  lwz       r5, 0x68(r6)
	  lwz       r3, 0x6C(r6)
	  cmplw     r5, r3
	  ble-      .loc_0x117C

	.loc_0x1170:
	  lwz       r3, 0x68(r6)
	  stw       r3, 0x6C(r6)
	  stw       r4, 0x70(r6)

	.loc_0x117C:
	  lwz       r3, 0x6C(r6)
	  cmplw     r3, r0
	  ble-      .loc_0x118C
	  mr        r0, r3

	.loc_0x118C:
	  lwz       r3, 0x84(r6)
	  addi      r3, r3, 0x1
	  cmplwi    r3, 0x10
	  stw       r3, 0x84(r6)
	  bge-      .loc_0x11B0
	  lwz       r5, 0x7C(r6)
	  lwz       r3, 0x80(r6)
	  cmplw     r5, r3
	  ble-      .loc_0x11BC

	.loc_0x11B0:
	  lwz       r3, 0x7C(r6)
	  stw       r3, 0x80(r6)
	  stw       r4, 0x84(r6)

	.loc_0x11BC:
	  lwz       r3, 0x80(r6)
	  cmplw     r3, r0
	  ble-      .loc_0x11CC
	  mr        r0, r3

	.loc_0x11CC:
	  addi      r6, r6, 0x28
	  addi      r7, r7, 0x1
	  bdnz+     .loc_0x114C
	  neg       r3, r0
	  or        r3, r3, r0
	  rlwinm    r3,r3,1,31,31
	  cmplwi    r3, 0x1
	  bne-      .loc_0x17F0
	  lbz       r3, -0x76F8(r13)
	  extsb.    r3, r3
	  bne-      .loc_0x1208
	  li        r4, 0
	  li        r3, 0x1
	  stw       r4, -0x76FC(r13)
	  stb       r3, -0x76F8(r13)

	.loc_0x1208:
	  lfs       f0, -0x7FAC(r13)
	  li        r5, 0
	  lfs       f9, -0x7CB0(r2)
	  lis       r4, 0x4330
	  lfd       f8, -0x7C98(r2)
	  lfs       f7, -0x7CAC(r2)
	  lfd       f5, -0x7CB8(r2)
	  lfs       f4, -0x7CA8(r2)
	  lfs       f2, -0x7CA4(r2)
	  lfs       f1, -0x7C90(r2)
	  b         .loc_0x1280

	.loc_0x1234:
	  stw       r0, 0x134(r1)
	  lwz       r3, 0x120(r30)
	  stw       r4, 0x130(r1)
	  xoris     r3, r3, 0x8000
	  lfd       f3, 0x130(r1)
	  stw       r3, 0x12C(r1)
	  fsubs     f3, f3, f8
	  stw       r4, 0x128(r1)
	  fmuls     f6, f3, f0
	  lfd       f3, 0x128(r1)
	  fsubs     f3, f3, f5
	  fmuls     f6, f9, f6
	  fsubs     f3, f3, f4
	  fdivs     f6, f6, f7
	  fcmpo     cr0, f6, f3
	  cror      2, 0, 0x2
	  beq-      .loc_0x1288
	  fsubs     f0, f0, f2
	  li        r5, 0x1

	.loc_0x1280:
	  fcmpo     cr0, f0, f1
	  bgt+      .loc_0x1234

	.loc_0x1288:
	  lfs       f1, -0x7CC4(r2)
	  fcmpo     cr0, f0, f1
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x12A0
	  li        r3, 0
	  stw       r3, -0x76FC(r13)

	.loc_0x12A0:
	  lfs       f1, -0x7C8C(r2)
	  fcmpo     cr0, f0, f1
	  ble-      .loc_0x132C
	  lfs       f0, -0x7CC4(r2)
	  b         .loc_0x132C

	.loc_0x12B4:
	  lwz       r3, -0x76FC(r13)
	  addi      r3, r3, 0x1
	  cmpwi     r3, 0x1E
	  stw       r3, -0x76FC(r13)
	  blt-      .loc_0x1340
	  lis       r4, 0x4330
	  lwz       r3, 0x120(r30)
	  stw       r0, 0x134(r1)
	  xoris     r0, r3, 0x8000
	  lfd       f2, -0x7C98(r2)
	  stw       r4, 0x130(r1)
	  lfs       f6, -0x7CB0(r2)
	  lfd       f1, 0x130(r1)
	  lfs       f4, -0x7CAC(r2)
	  fsubs     f1, f1, f2
	  stw       r0, 0x12C(r1)
	  lfd       f3, -0x7CB8(r2)
	  stw       r4, 0x128(r1)
	  fmuls     f5, f1, f0
	  lfs       f1, -0x7C9C(r2)
	  lfd       f2, 0x128(r1)
	  fmuls     f5, f6, f5
	  fsubs     f2, f2, f3
	  fdivs     f3, f5, f4
	  fsubs     f1, f2, f1
	  fcmpo     cr0, f3, f1
	  bge-      .loc_0x1340
	  lfs       f1, -0x7CA0(r2)
	  fadds     f0, f0, f1
	  b         .loc_0x1340

	.loc_0x132C:
	  cmpwi     r5, 0
	  bne-      .loc_0x1340
	  lfs       f1, -0x7CC4(r2)
	  fcmpo     cr0, f0, f1
	  blt+      .loc_0x12B4

	.loc_0x1340:
	  li        r0, 0
	  li        r3, 0x32
	  li        r4, 0xC8
	  stb       r0, 0x7C(r1)
	  lis       r6, 0x4330
	  lfs       f1, -0x7CB0(r2)
	  stb       r0, 0x7D(r1)
	  xoris     r0, r31, 0x8000
	  fmuls     f1, f1, f0
	  lfd       f4, -0x7CB8(r2)
	  stb       r3, 0x7E(r1)
	  addi      r3, r1, 0x80
	  stb       r4, 0x7F(r1)
	  fctiwz    f1, f1
	  lwz       r4, 0x7C(r1)
	  stfs      f0, -0x7FAC(r13)
	  stw       r4, 0x80(r1)
	  lwz       r7, 0x118(r30)
	  lwz       r5, 0x124(r30)
	  lwz       r4, 0x120(r30)
	  xoris     r7, r7, 0x8000
	  xoris     r5, r5, 0x8000
	  stfd      f1, 0x130(r1)
	  xoris     r4, r4, 0x8000
	  stw       r7, 0x12C(r1)
	  lwz       r20, 0x134(r1)
	  stw       r6, 0x128(r1)
	  lfd       f0, 0x128(r1)
	  stw       r5, 0x124(r1)
	  fsubs     f1, f0, f4
	  stw       r6, 0x120(r1)
	  lfd       f0, 0x120(r1)
	  stw       r4, 0x11C(r1)
	  fsubs     f2, f0, f4
	  stw       r6, 0x118(r1)
	  lfd       f0, 0x118(r1)
	  stw       r0, 0x114(r1)
	  fsubs     f3, f0, f4
	  stw       r6, 0x110(r1)
	  lfd       f0, 0x110(r1)
	  fsubs     f4, f0, f4
	  bl        0x53AC
	  li        r3, 0x32
	  li        r6, 0x96
	  li        r5, 0xFF
	  stb       r3, 0x74(r1)
	  lis       r7, 0x4330
	  xoris     r0, r31, 0x8000
	  stb       r3, 0x75(r1)
	  addi      r3, r1, 0x78
	  lfd       f4, -0x7CB8(r2)
	  li        r4, 0x6
	  stb       r6, 0x76(r1)
	  stb       r5, 0x77(r1)
	  lwz       r5, 0x74(r1)
	  stw       r7, 0x108(r1)
	  stw       r5, 0x78(r1)
	  lwz       r8, 0x118(r30)
	  lwz       r6, 0x124(r30)
	  lwz       r5, 0x120(r30)
	  xoris     r8, r8, 0x8000
	  xoris     r6, r6, 0x8000
	  stw       r8, 0x10C(r1)
	  xoris     r5, r5, 0x8000
	  lfd       f0, 0x108(r1)
	  stw       r6, 0x104(r1)
	  fsubs     f1, f0, f4
	  stw       r7, 0x100(r1)
	  lfd       f0, 0x100(r1)
	  stw       r5, 0xFC(r1)
	  fsubs     f2, f0, f4
	  stw       r7, 0xF8(r1)
	  lfd       f0, 0xF8(r1)
	  stw       r0, 0x13C(r1)
	  fsubs     f3, f0, f4
	  stw       r7, 0x138(r1)
	  lfd       f0, 0x138(r1)
	  fsubs     f4, f0, f4
	  bl        0x5568
	  li        r21, 0
	  mr        r28, r30

	.loc_0x1484:
	  lwz       r3, 0x70(r28)
	  addi      r0, r3, 0x1
	  cmplwi    r0, 0x10
	  stw       r0, 0x70(r28)
	  bge-      .loc_0x14A8
	  lwz       r3, 0x68(r28)
	  lwz       r0, 0x6C(r28)
	  cmplw     r3, r0
	  ble-      .loc_0x14B8

	.loc_0x14A8:
	  lwz       r3, 0x68(r28)
	  li        r0, 0
	  stw       r3, 0x6C(r28)
	  stw       r0, 0x70(r28)

	.loc_0x14B8:
	  lwz       r3, 0x68(r28)
	  cmplwi    r3, 0
	  bne-      .loc_0x14D0
	  lwz       r0, 0x6C(r28)
	  cmplwi    r0, 0
	  beq-      .loc_0x16CC

	.loc_0x14D0:
	  mullw     r0, r3, r20
	  lis       r7, 0x4330
	  lwz       r4, 0x6C(r28)
	  li        r3, 0
	  li        r5, 0xFF
	  stw       r7, 0x138(r1)
	  stw       r3, 0x68(r28)
	  divwu     r0, r0, r27
	  lfd       f4, -0x7CB8(r2)
	  addi      r3, r1, 0x70
	  lbz       r10, 0x76(r28)
	  lbz       r9, 0x75(r28)
	  lbz       r6, 0x74(r28)
	  mullw     r8, r4, r20
	  xoris     r4, r0, 0x8000
	  stb       r6, 0x6C(r1)
	  stb       r9, 0x6D(r1)
	  stb       r10, 0x6E(r1)
	  divwu     r22, r8, r27
	  stb       r5, 0x6F(r1)
	  lwz       r0, 0x6C(r1)
	  stw       r7, 0x130(r1)
	  stw       r0, 0x70(r1)
	  lwz       r9, 0x114(r30)
	  mullw     r5, r21, r9
	  lwz       r8, 0x118(r30)
	  xoris     r0, r9, 0x8000
	  lwz       r6, 0x124(r30)
	  addi      r8, r8, 0x1
	  stw       r4, 0x12C(r1)
	  add       r4, r9, r5
	  xoris     r5, r8, 0x8000
	  add       r4, r6, r4
	  stw       r5, 0x13C(r1)
	  xoris     r4, r4, 0x8000
	  stw       r4, 0x134(r1)
	  lfd       f0, 0x138(r1)
	  stw       r7, 0x128(r1)
	  lfd       f2, 0x130(r1)
	  fsubs     f1, f0, f4
	  lfd       f0, 0x128(r1)
	  stw       r0, 0x124(r1)
	  fsubs     f2, f2, f4
	  fsubs     f3, f0, f4
	  stw       r7, 0x120(r1)
	  lfd       f0, 0x120(r1)
	  fsubs     f4, f0, f4
	  bl        0x5204
	  cmplwi    r22, 0x3
	  bge-      .loc_0x1638
	  li        r5, 0xFF
	  li        r3, 0xC8
	  li        r0, 0x32
	  stb       r5, 0x64(r1)
	  lis       r7, 0x4330
	  xoris     r4, r22, 0x8000
	  stb       r3, 0x65(r1)
	  addi      r3, r1, 0x68
	  lfd       f4, -0x7CB8(r2)
	  stb       r0, 0x66(r1)
	  stb       r5, 0x67(r1)
	  lwz       r0, 0x64(r1)
	  stw       r7, 0x138(r1)
	  stw       r0, 0x68(r1)
	  lwz       r9, 0x114(r30)
	  lwz       r6, 0x118(r30)
	  mullw     r5, r21, r9
	  xoris     r0, r9, 0x8000
	  xoris     r8, r6, 0x8000
	  lwz       r6, 0x124(r30)
	  stw       r8, 0x13C(r1)
	  lfd       f0, 0x138(r1)
	  add       r5, r9, r5
	  stw       r7, 0x130(r1)
	  add       r5, r6, r5
	  fsubs     f1, f0, f4
	  xoris     r5, r5, 0x8000
	  stw       r4, 0x12C(r1)
	  stw       r5, 0x134(r1)
	  stw       r7, 0x128(r1)
	  lfd       f2, 0x130(r1)
	  lfd       f0, 0x128(r1)
	  stw       r0, 0x124(r1)
	  fsubs     f2, f2, f4
	  fsubs     f3, f0, f4
	  stw       r7, 0x120(r1)
	  lfd       f0, 0x120(r1)
	  fsubs     f4, f0, f4
	  bl        0x5160
	  b         .loc_0x16CC

	.loc_0x1638:
	  li        r4, 0xFF
	  li        r3, 0xC8
	  li        r0, 0x32
	  stb       r4, 0x5C(r1)
	  lis       r6, 0x4330
	  subi      r5, r22, 0x3
	  stb       r3, 0x5D(r1)
	  addi      r3, r1, 0x60
	  lfd       f4, -0x7CB8(r2)
	  stb       r0, 0x5E(r1)
	  lfs       f3, -0x7C88(r2)
	  stb       r4, 0x5F(r1)
	  lwz       r0, 0x5C(r1)
	  stw       r6, 0x138(r1)
	  stw       r0, 0x60(r1)
	  lwz       r8, 0x114(r30)
	  lwz       r7, 0x118(r30)
	  mullw     r4, r21, r8
	  xoris     r0, r8, 0x8000
	  add       r7, r7, r5
	  lwz       r5, 0x124(r30)
	  stw       r6, 0x130(r1)
	  xoris     r7, r7, 0x8000
	  add       r4, r8, r4
	  stw       r7, 0x13C(r1)
	  add       r4, r5, r4
	  xoris     r4, r4, 0x8000
	  lfd       f0, 0x138(r1)
	  stw       r4, 0x134(r1)
	  fsubs     f1, f0, f4
	  lfd       f0, 0x130(r1)
	  stw       r0, 0x12C(r1)
	  fsubs     f2, f0, f4
	  stw       r6, 0x128(r1)
	  lfd       f0, 0x128(r1)
	  fsubs     f4, f0, f4
	  bl        0x50C8

	.loc_0x16CC:
	  addi      r21, r21, 0x1
	  addi      r28, r28, 0x14
	  cmpwi     r21, 0x8
	  blt+      .loc_0x1484
	  lwz       r0, 0x120(r30)
	  lis       r3, 0x6666
	  lfd       f31, -0x7CB8(r2)
	  mr        r28, r20
	  add       r4, r0, r20
	  addi      r29, r3, 0x6667
	  subi      r0, r4, 0x4
	  li        r22, 0x1
	  divw      r21, r0, r20
	  lis       r23, 0x4330
	  b         .loc_0x17E8

	.loc_0x1708:
	  mulhw     r0, r29, r22
	  lwz       r3, 0x118(r30)
	  addi      r5, r28, 0x1
	  add       r5, r3, r5
	  srawi     r0, r0, 0x1
	  rlwinm    r3,r0,1,31,31
	  add       r0, r0, r3
	  mulli     r0, r0, 0x5
	  sub.      r0, r22, r0
	  beq-      .loc_0x1750
	  li        r3, 0x64
	  li        r0, 0xFF
	  stb       r3, 0x54(r1)
	  addi      r4, r1, 0x54
	  stb       r3, 0x55(r1)
	  stb       r0, 0x56(r1)
	  stb       r0, 0x57(r1)
	  b         .loc_0x176C

	.loc_0x1750:
	  li        r0, 0xFF
	  li        r3, 0xB4
	  stb       r3, 0x50(r1)
	  addi      r4, r1, 0x50
	  stb       r0, 0x51(r1)
	  stb       r0, 0x52(r1)
	  stb       r0, 0x53(r1)

	.loc_0x176C:
	  lwz       r0, 0x0(r4)
	  xoris     r6, r5, 0x8000
	  stw       r6, 0x13C(r1)
	  addi      r3, r1, 0x58
	  li        r4, 0xC
	  stw       r0, 0x58(r1)
	  lwz       r5, 0x124(r30)
	  lwz       r7, 0x114(r30)
	  add       r0, r5, r31
	  stw       r23, 0x138(r1)
	  add       r5, r5, r7
	  sub       r0, r0, r7
	  stw       r23, 0x130(r1)
	  xoris     r5, r5, 0x8000
	  lfd       f0, 0x138(r1)
	  xoris     r0, r0, 0x8000
	  stw       r5, 0x134(r1)
	  fsubs     f1, f0, f31
	  lfd       f0, 0x130(r1)
	  stw       r6, 0x12C(r1)
	  fsubs     f2, f0, f31
	  stw       r23, 0x128(r1)
	  lfd       f0, 0x128(r1)
	  stw       r0, 0x124(r1)
	  fsubs     f3, f0, f31
	  stw       r23, 0x120(r1)
	  lfd       f0, 0x120(r1)
	  fsubs     f4, f0, f31
	  bl        0x4E4C
	  add       r28, r28, r20
	  addi      r22, r22, 0x1

	.loc_0x17E8:
	  cmpw      r22, r21
	  blt+      .loc_0x1708

	.loc_0x17F0:
	  li        r0, 0
	  stw       r0, 0x108(r30)

	.loc_0x17F8:
	  psq_l     f31,0x178(r1),0,0
	  lfd       f31, 0x170(r1)
	  lmw       r20, 0x140(r1)
	  lwz       r0, 0x184(r1)
	  mtlr      r0
	  addi      r1, r1, 0x180
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000D0
 */
void JUTProcBar::getUnuseUserBar()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000068
 */
void addrToXPos(void*, int)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000068
 */
void byteToXLen(int, int)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000264
 */
void heapBar(JKRHeap*, int, int, int, int, int)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80030A7C
 * Size:	000704
 */
void JUTProcBar::drawHeapBar()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x1A0(r1)
	  mflr      r0
	  stw       r0, 0x1A4(r1)
	  stmw      r26, 0x188(r1)
	  mr        r26, r3
	  lbz       r0, 0x130(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x6F0
	  lwz       r3, 0x114(r26)
	  lis       r6, 0x4330
	  lwz       r4, 0x11C(r26)
	  li        r10, 0x64
	  rlwinm    r0,r3,2,0,29
	  lwz       r28, 0x118(r26)
	  lwz       r27, 0x120(r26)
	  rlwinm    r31,r3,1,0,30
	  sub       r30, r4, r0
	  xoris     r3, r28, 0x8000
	  xoris     r5, r30, 0x8000
	  xoris     r4, r27, 0x8000
	  xoris     r0, r31, 0x8000
	  li        r9, 0
	  li        r8, 0x32
	  li        r7, 0xC8
	  stw       r3, 0x44(r1)
	  addi      r3, r1, 0x3C
	  lfd       f4, -0x7CB8(r2)
	  stw       r6, 0x40(r1)
	  lfd       f0, 0x40(r1)
	  stw       r5, 0x4C(r1)
	  fsubs     f1, f0, f4
	  stw       r6, 0x48(r1)
	  lfd       f0, 0x48(r1)
	  stw       r4, 0x54(r1)
	  fsubs     f2, f0, f4
	  stw       r6, 0x50(r1)
	  lfd       f0, 0x50(r1)
	  stw       r0, 0x5C(r1)
	  fsubs     f3, f0, f4
	  stw       r6, 0x58(r1)
	  lfd       f0, 0x58(r1)
	  stb       r10, 0x38(r1)
	  fsubs     f4, f0, f4
	  stb       r9, 0x39(r1)
	  stb       r8, 0x3A(r1)
	  stb       r7, 0x3B(r1)
	  lwz       r0, 0x38(r1)
	  stw       r0, 0x3C(r1)
	  bl        0x4EBC
	  lis       r7, 0x4330
	  xoris     r3, r28, 0x8000
	  xoris     r6, r30, 0x8000
	  xoris     r5, r27, 0x8000
	  xoris     r0, r31, 0x8000
	  li        r11, 0x64
	  li        r10, 0x32
	  li        r9, 0x96
	  li        r8, 0xFF
	  stw       r3, 0x64(r1)
	  lfd       f4, -0x7CB8(r2)
	  addi      r3, r1, 0x34
	  stw       r7, 0x60(r1)
	  li        r4, 0x6
	  lfd       f0, 0x60(r1)
	  stw       r6, 0x6C(r1)
	  fsubs     f1, f0, f4
	  stw       r7, 0x68(r1)
	  lfd       f0, 0x68(r1)
	  stw       r5, 0x74(r1)
	  fsubs     f2, f0, f4
	  stw       r7, 0x70(r1)
	  lfd       f0, 0x70(r1)
	  stw       r0, 0x7C(r1)
	  fsubs     f3, f0, f4
	  stw       r7, 0x78(r1)
	  lfd       f0, 0x78(r1)
	  stb       r11, 0x30(r1)
	  fsubs     f4, f0, f4
	  stb       r10, 0x31(r1)
	  stb       r9, 0x32(r1)
	  stb       r8, 0x33(r1)
	  lwz       r0, 0x30(r1)
	  stw       r0, 0x34(r1)
	  bl        0x5080
	  lwz       r4, -0x77C4(r13)
	  lis       r9, 0x4330
	  lwz       r11, -0x77B4(r13)
	  xoris     r10, r27, 0x8000
	  lwz       r3, -0x77C0(r13)
	  subis     r0, r4, 0x8000
	  stw       r0, 0x8C(r1)
	  li        r8, 0xFF
	  subis     r4, r3, 0x8000
	  xoris     r5, r30, 0x8000
	  stw       r9, 0x88(r1)
	  xoris     r0, r31, 0x8000
	  lfd       f4, -0x7C98(r2)
	  li        r7, 0x32
	  lfd       f0, 0x88(r1)
	  li        r6, 0x96
	  stw       r11, 0x94(r1)
	  addi      r3, r1, 0x2C
	  fsubs     f2, f0, f4
	  lfd       f5, -0x7CB8(r2)
	  stw       r9, 0x90(r1)
	  lfd       f0, 0x90(r1)
	  stw       r4, 0xBC(r1)
	  fsubs     f0, f0, f4
	  stw       r9, 0xB8(r1)
	  lfd       f1, 0xB8(r1)
	  fdivs     f3, f2, f0
	  stw       r11, 0xC4(r1)
	  stw       r9, 0xC0(r1)
	  lfd       f0, 0xC0(r1)
	  stw       r10, 0x84(r1)
	  stw       r9, 0x80(r1)
	  lfd       f2, 0x80(r1)
	  fsubs     f1, f1, f4
	  fsubs     f0, f0, f4
	  stw       r10, 0xB4(r1)
	  fsubs     f4, f2, f5
	  stw       r9, 0xB0(r1)
	  fdivs     f0, f1, f0
	  lfd       f1, 0xB0(r1)
	  stw       r9, 0xA0(r1)
	  stw       r5, 0xAC(r1)
	  stw       r9, 0xA8(r1)
	  lfd       f2, 0xA8(r1)
	  fsubs     f1, f1, f5
	  stw       r9, 0xD0(r1)
	  fmuls     f3, f4, f3
	  stw       r0, 0xDC(r1)
	  fsubs     f2, f2, f5
	  fmuls     f0, f1, f0
	  fctiwz    f3, f3
	  stw       r9, 0xD8(r1)
	  fctiwz    f1, f0
	  lfd       f0, 0xD8(r1)
	  stfd      f3, 0x98(r1)
	  fsubs     f4, f0, f5
	  stfd      f1, 0xC8(r1)
	  lwz       r4, 0x9C(r1)
	  lwz       r0, 0xCC(r1)
	  add       r4, r28, r4
	  stb       r8, 0x28(r1)
	  add       r0, r28, r0
	  sub       r0, r0, r4
	  xoris     r4, r4, 0x8000
	  xoris     r0, r0, 0x8000
	  stw       r4, 0xA4(r1)
	  stw       r0, 0xD4(r1)
	  lfd       f1, 0xA0(r1)
	  lfd       f0, 0xD0(r1)
	  stb       r7, 0x29(r1)
	  fsubs     f1, f1, f5
	  fsubs     f3, f0, f5
	  stb       r6, 0x2A(r1)
	  stb       r8, 0x2B(r1)
	  lwz       r0, 0x28(r1)
	  stw       r0, 0x2C(r1)
	  bl        0x4CFC
	  lwz       r4, -0x77BC(r13)
	  lis       r10, 0x4330
	  lwz       r12, -0x77B4(r13)
	  xoris     r11, r27, 0x8000
	  lwz       r3, -0x77B8(r13)
	  subis     r0, r4, 0x8000
	  stw       r0, 0xEC(r1)
	  xoris     r5, r30, 0x8000
	  subis     r4, r3, 0x8000
	  xoris     r0, r31, 0x8000
	  stw       r10, 0xE8(r1)
	  li        r9, 0
	  lfd       f4, -0x7C98(r2)
	  li        r8, 0x32
	  lfd       f0, 0xE8(r1)
	  li        r7, 0x96
	  stw       r12, 0xF4(r1)
	  li        r6, 0xFF
	  fsubs     f2, f0, f4
	  lfd       f5, -0x7CB8(r2)
	  stw       r10, 0xF0(r1)
	  addi      r3, r1, 0x24
	  lfd       f0, 0xF0(r1)
	  stw       r4, 0x11C(r1)
	  fsubs     f0, f0, f4
	  stw       r10, 0x118(r1)
	  lfd       f1, 0x118(r1)
	  fdivs     f3, f2, f0
	  stw       r12, 0x124(r1)
	  stw       r10, 0x120(r1)
	  lfd       f0, 0x120(r1)
	  stw       r11, 0xE4(r1)
	  stw       r10, 0xE0(r1)
	  lfd       f2, 0xE0(r1)
	  fsubs     f1, f1, f4
	  fsubs     f0, f0, f4
	  stw       r11, 0x114(r1)
	  fsubs     f4, f2, f5
	  stw       r10, 0x110(r1)
	  fdivs     f0, f1, f0
	  lfd       f1, 0x110(r1)
	  stw       r10, 0x100(r1)
	  stw       r5, 0x10C(r1)
	  stw       r10, 0x108(r1)
	  lfd       f2, 0x108(r1)
	  fsubs     f1, f1, f5
	  stw       r10, 0x130(r1)
	  fmuls     f3, f4, f3
	  stw       r0, 0x13C(r1)
	  fsubs     f2, f2, f5
	  fmuls     f0, f1, f0
	  fctiwz    f3, f3
	  stw       r10, 0x138(r1)
	  fctiwz    f1, f0
	  lfd       f0, 0x138(r1)
	  stfd      f3, 0xF8(r1)
	  fsubs     f4, f0, f5
	  stfd      f1, 0x128(r1)
	  lwz       r4, 0xFC(r1)
	  lwz       r0, 0x12C(r1)
	  add       r29, r28, r4
	  stb       r9, 0x20(r1)
	  add       r0, r28, r0
	  sub       r0, r0, r29
	  xoris     r4, r29, 0x8000
	  xoris     r0, r0, 0x8000
	  stw       r4, 0x104(r1)
	  stw       r0, 0x134(r1)
	  lfd       f1, 0x100(r1)
	  lfd       f0, 0x130(r1)
	  stb       r8, 0x21(r1)
	  fsubs     f1, f1, f5
	  fsubs     f3, f0, f5
	  stb       r7, 0x22(r1)
	  stb       r6, 0x23(r1)
	  lwz       r0, 0x20(r1)
	  stw       r0, 0x24(r1)
	  bl        0x4BC4
	  lwz       r3, -0x77D0(r13)
	  bl        -0xD65C
	  lwz       r4, -0x77B4(r13)
	  lis       r7, 0x4330
	  xoris     r0, r3, 0x8000
	  li        r9, 0xFA
	  stw       r0, 0x15C(r1)
	  xoris     r5, r27, 0x8000
	  rlwinm    r0,r31,1,31,31
	  xoris     r8, r29, 0x8000
	  stw       r7, 0x158(r1)
	  add       r0, r0, r31
	  lfd       f5, -0x7CB8(r2)
	  srawi     r29, r0, 0x1
	  lfd       f0, 0x158(r1)
	  xoris     r6, r30, 0x8000
	  stw       r4, 0x164(r1)
	  xoris     r0, r29, 0x8000
	  lfd       f1, -0x7C98(r2)
	  fsubs     f2, f0, f5
	  stw       r7, 0x160(r1)
	  li        r10, 0
	  li        r4, 0xFF
	  addi      r3, r1, 0x1C
	  lfd       f0, 0x160(r1)
	  stw       r5, 0x154(r1)
	  fsubs     f0, f0, f1
	  stw       r7, 0x150(r1)
	  fdivs     f0, f2, f0
	  lfd       f1, 0x150(r1)
	  stw       r8, 0x144(r1)
	  stw       r7, 0x140(r1)
	  lfd       f3, 0x140(r1)
	  stw       r6, 0x14C(r1)
	  fsubs     f2, f1, f5
	  stw       r7, 0x148(r1)
	  fsubs     f1, f3, f5
	  lfd       f3, 0x148(r1)
	  fmuls     f0, f2, f0
	  stw       r7, 0x170(r1)
	  fsubs     f2, f3, f5
	  stw       r0, 0x17C(r1)
	  fctiwz    f0, f0
	  stw       r7, 0x178(r1)
	  stfd      f0, 0x168(r1)
	  lfd       f0, 0x178(r1)
	  lwz       r0, 0x16C(r1)
	  stb       r10, 0x18(r1)
	  fsubs     f4, f0, f5
	  xoris     r0, r0, 0x8000
	  stw       r0, 0x174(r1)
	  lfd       f0, 0x170(r1)
	  stb       r9, 0x19(r1)
	  fsubs     f3, f0, f5
	  stb       r9, 0x1A(r1)
	  stb       r4, 0x1B(r1)
	  lwz       r0, 0x18(r1)
	  stw       r0, 0x1C(r1)
	  bl        0x4AD8
	  lwz       r0, 0x128(r26)
	  cmpwi     r0, 0
	  bne-      .loc_0x6F0
	  lwz       r3, 0x12C(r26)
	  cmplwi    r3, 0
	  beq-      .loc_0x4C4
	  b         .loc_0x4C8

	.loc_0x4C4:
	  lwz       r3, -0x77D4(r13)

	.loc_0x4C8:
	  lwz       r0, -0x77D8(r13)
	  cmplw     r3, r0
	  beq-      .loc_0x6F0
	  lwz       r5, 0x30(r3)
	  lis       r6, 0x4330
	  lwz       r8, -0x77B4(r13)
	  xoris     r7, r27, 0x8000
	  subis     r0, r5, 0x8000
	  stw       r6, 0x170(r1)
	  lfd       f3, -0x7C98(r2)
	  stw       r0, 0x174(r1)
	  lwz       r4, 0x34(r3)
	  lfd       f0, 0x170(r1)
	  stw       r8, 0x16C(r1)
	  subis     r0, r4, 0x8000
	  fsubs     f2, f0, f3
	  lfd       f5, -0x7CB8(r2)
	  stw       r6, 0x168(r1)
	  lfd       f0, 0x168(r1)
	  stw       r0, 0x154(r1)
	  fsubs     f0, f0, f3
	  stw       r6, 0x150(r1)
	  lfd       f1, 0x150(r1)
	  fdivs     f2, f2, f0
	  stw       r8, 0x14C(r1)
	  stw       r6, 0x148(r1)
	  lfd       f0, 0x148(r1)
	  stw       r7, 0x17C(r1)
	  stw       r6, 0x178(r1)
	  fsubs     f1, f1, f3
	  stw       r7, 0x15C(r1)
	  fsubs     f0, f0, f3
	  lfd       f4, 0x178(r1)
	  stw       r6, 0x158(r1)
	  fsubs     f3, f4, f5
	  fdivs     f0, f1, f0
	  lfd       f1, 0x158(r1)
	  fsubs     f1, f1, f5
	  fmuls     f2, f3, f2
	  fmuls     f0, f1, f0
	  fctiwz    f1, f2
	  fctiwz    f0, f0
	  stfd      f1, 0x160(r1)
	  stfd      f0, 0x140(r1)
	  lwz       r0, 0x164(r1)
	  lwz       r26, 0x144(r1)
	  add       r31, r28, r0
	  bl        -0xD820
	  lwz       r4, -0x77B4(r13)
	  lis       r10, 0x4330
	  xoris     r0, r3, 0x8000
	  li        r9, 0xFF
	  stw       r0, 0x134(r1)
	  xoris     r3, r27, 0x8000
	  add       r0, r28, r26
	  add       r30, r29, r30
	  stw       r10, 0x130(r1)
	  sub       r0, r0, r31
	  lfd       f5, -0x7CB8(r2)
	  xoris     r6, r31, 0x8000
	  lfd       f0, 0x130(r1)
	  xoris     r5, r30, 0x8000
	  stw       r4, 0x12C(r1)
	  xoris     r4, r0, 0x8000
	  lfd       f1, -0x7C98(r2)
	  fsubs     f2, f0, f5
	  stw       r10, 0x128(r1)
	  xoris     r0, r29, 0x8000
	  li        r8, 0
	  li        r7, 0xC8
	  lfd       f0, 0x128(r1)
	  stw       r3, 0x13C(r1)
	  addi      r3, r1, 0x8
	  fsubs     f0, f0, f1
	  stw       r10, 0x138(r1)
	  fdivs     f2, f2, f0
	  lfd       f1, 0x138(r1)
	  stw       r6, 0x11C(r1)
	  stw       r10, 0x118(r1)
	  lfd       f0, 0x118(r1)
	  stw       r5, 0x114(r1)
	  fsubs     f3, f1, f5
	  stw       r10, 0x110(r1)
	  fsubs     f1, f0, f5
	  lfd       f0, 0x110(r1)
	  fmuls     f3, f3, f2
	  stw       r4, 0x10C(r1)
	  fsubs     f2, f0, f5
	  stw       r10, 0x108(r1)
	  fctiwz    f4, f3
	  lfd       f0, 0x108(r1)
	  stw       r0, 0x104(r1)
	  fsubs     f3, f0, f5
	  stw       r10, 0x100(r1)
	  lfd       f0, 0x100(r1)
	  stfd      f4, 0x120(r1)
	  fsubs     f4, f0, f5
	  stb       r9, 0xC(r1)
	  lwz       r26, 0x124(r1)
	  stb       r8, 0xD(r1)
	  stb       r7, 0xE(r1)
	  stb       r9, 0xF(r1)
	  lwz       r0, 0xC(r1)
	  stw       r0, 0x8(r1)
	  bl        0x4914
	  lis       r6, 0x4330
	  xoris     r3, r31, 0x8000
	  li        r9, 0xFF
	  xoris     r5, r30, 0x8000
	  xoris     r4, r26, 0x8000
	  xoris     r0, r29, 0x8000
	  li        r8, 0xB4
	  li        r7, 0xFA
	  stw       r3, 0xFC(r1)
	  addi      r3, r1, 0x10
	  lfd       f4, -0x7CB8(r2)
	  stw       r6, 0xF8(r1)
	  lfd       f0, 0xF8(r1)
	  stw       r5, 0xF4(r1)
	  fsubs     f1, f0, f4
	  stw       r6, 0xF0(r1)
	  lfd       f0, 0xF0(r1)
	  stw       r4, 0xEC(r1)
	  fsubs     f2, f0, f4
	  stw       r6, 0xE8(r1)
	  lfd       f0, 0xE8(r1)
	  stw       r0, 0xE4(r1)
	  fsubs     f3, f0, f4
	  stw       r6, 0xE0(r1)
	  lfd       f0, 0xE0(r1)
	  stb       r9, 0x14(r1)
	  fsubs     f4, f0, f4
	  stb       r8, 0x15(r1)
	  stb       r7, 0x16(r1)
	  stb       r9, 0x17(r1)
	  lwz       r0, 0x14(r1)
	  stw       r0, 0x10(r1)
	  bl        0x4890

	.loc_0x6F0:
	  lmw       r26, 0x188(r1)
	  lwz       r0, 0x1A4(r1)
	  mtlr      r0
	  addi      r1, r1, 0x1A0
	  blr
	*/
}
