

/*
 * --INFO--
 * Address:	800280DC
 * Size:	000088
 */
void JUTConsole::create(unsigned int, unsigned int, JKRHeap*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stmw      r27, 0xC(r1)
	  mr        r27, r3
	  mr        r28, r4
	  mr        r29, r5
	  lwz       r30, -0x7790(r13)
	  bl        0x270
	  mr        r5, r29
	  li        r4, 0
	  bl        -0x4B28
	  mr        r0, r3
	  mr        r29, r0
	  mr.       r31, r29
	  beq-      .loc_0x54
	  mr        r4, r27
	  mr        r5, r28
	  li        r6, 0x1
	  bl        0xD4
	  mr        r31, r3

	.loc_0x54:
	  addi      r0, r29, 0x6C
	  mr        r3, r31
	  stw       r0, 0x28(r31)
	  bl        0x250
	  mr        r3, r30
	  mr        r4, r31
	  bl        0xDB8
	  mr        r3, r31
	  lmw       r27, 0xC(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80028164
 * Size:	000098
 */
void JUTConsole::create(unsigned int, void*, unsigned long)
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
	  mr        r28, r3
	  mr        r3, r5
	  lwz       r30, -0x7790(r13)
	  mr        r4, r28
	  bl        0x1E8
	  cmplwi    r29, 0
	  mr        r5, r3
	  mr        r31, r29
	  beq-      .loc_0x58
	  mr        r3, r29
	  mr        r4, r28
	  li        r6, 0
	  bl        .loc_0x98
	  mr        r31, r3

	.loc_0x58:
	  addi      r0, r29, 0x6C
	  mr        r3, r31
	  stw       r0, 0x28(r31)
	  bl        0x1C4
	  mr        r3, r30
	  mr        r4, r31
	  bl        0xD2C
	  lwz       r0, 0x24(r1)
	  mr        r3, r31
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  lwz       r28, 0x10(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr

	.loc_0x98:
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00005C
 */
void JUTConsole::destroy(JUTConsole*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800281FC
 * Size:	000100
 */
void JUTConsole::JUTConsole(unsigned int, unsigned int, bool)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r6
	  stw       r30, 0x18(r1)
	  mr        r30, r5
	  stw       r29, 0x14(r1)
	  mr        r29, r4
	  stw       r28, 0x10(r1)
	  mr        r28, r3
	  bl        -0xB25C
	  lis       r3, 0x804A
	  li        r6, 0
	  addi      r0, r3, 0xD0
	  li        r5, -0x1
	  stw       r0, 0x0(r28)
	  li        r4, 0x1E
	  li        r3, 0x32
	  li        r0, 0x14
	  stw       r6, 0x18(r28)
	  stw       r6, 0x1C(r28)
	  stw       r5, 0x5C(r28)
	  stw       r5, 0x60(r28)
	  stb       r31, 0x2C(r28)
	  stw       r29, 0x20(r28)
	  stw       r30, 0x24(r28)
	  stw       r4, 0x40(r28)
	  stw       r3, 0x44(r28)
	  stw       r0, 0x48(r28)
	  lwz       r0, 0x48(r28)
	  lwz       r3, 0x24(r28)
	  cmplw     r0, r3
	  ble-      .loc_0x8C
	  stw       r3, 0x48(r28)

	.loc_0x8C:
	  li        r7, 0
	  li        r6, 0x1
	  stw       r7, 0x4C(r28)
	  li        r5, 0x64
	  li        r4, 0xE6
	  li        r0, 0x8
	  stb       r6, 0x68(r28)
	  mr        r3, r28
	  stb       r7, 0x69(r28)
	  stb       r7, 0x6A(r28)
	  stb       r7, 0x6B(r28)
	  stw       r6, 0x58(r28)
	  stb       r7, 0x5C(r28)
	  stb       r7, 0x5D(r28)
	  stb       r7, 0x5E(r28)
	  stb       r5, 0x5F(r28)
	  stb       r7, 0x60(r28)
	  stb       r7, 0x61(r28)
	  stb       r7, 0x62(r28)
	  stb       r4, 0x63(r28)
	  stw       r0, 0x64(r28)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  lwz       r28, 0x10(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800282FC
 * Size:	000070
 */
void JUTConsole::~JUTConsole()
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
	  lis       r3, 0x804A
	  mr        r4, r30
	  addi      r0, r3, 0xD0
	  stw       r0, 0x0(r30)
	  lwz       r3, -0x7790(r13)
	  bl        0xC40
	  mr        r3, r30
	  li        r4, 0
	  bl        -0xB308
	  extsh.    r0, r31
	  ble-      .loc_0x54
	  mr        r3, r30
	  bl        -0x4298

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
 * Address:	8002836C
 * Size:	000010
 */
void JUTConsole::getObjectSizeFromBufferSize(unsigned int, unsigned int)
{
	/*
	.loc_0x0:
	  addi      r0, r3, 0x2
	  mullw     r3, r0, r4
	  addi      r3, r3, 0x6C
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8002837C
 * Size:	000010
 */
void JUTConsole::getLineFromObjectSize(unsigned long, unsigned int)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x6C
	  addi      r0, r4, 0x2
	  divwu     r3, r3, r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8002838C
 * Size:	00005C
 */
void JUTConsole::clear()
{
	/*
	.loc_0x0:
	  li        r6, 0
	  li        r7, 0
	  stw       r6, 0x30(r3)
	  stw       r6, 0x34(r3)
	  stw       r6, 0x38(r3)
	  stw       r6, 0x3C(r3)
	  b         .loc_0x34

	.loc_0x1C:
	  lwz       r4, 0x20(r3)
	  lwz       r5, 0x28(r3)
	  addi      r0, r4, 0x2
	  mullw     r0, r0, r7
	  addi      r7, r7, 0x1
	  stbx      r6, r5, r0

	.loc_0x34:
	  lwz       r0, 0x24(r3)
	  cmplw     r7, r0
	  blt+      .loc_0x1C
	  lwz       r4, 0x28(r3)
	  li        r5, 0xFF
	  li        r0, 0
	  stb       r5, 0x0(r4)
	  lwz       r3, 0x28(r3)
	  stb       r0, 0x1(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800283E8
 * Size:	00055C
 */
void JUTConsole::doDraw(JUTConsole::EConsoleType) const
{
	/*
	.loc_0x0:
	  stwu      r1, -0x2B0(r1)
	  mflr      r0
	  stw       r0, 0x2B4(r1)
	  stfd      f31, 0x2A0(r1)
	  psq_st    f31,0x2A8(r1),0,0
	  stfd      f30, 0x290(r1)
	  psq_st    f30,0x298(r1),0,0
	  stfd      f29, 0x280(r1)
	  psq_st    f29,0x288(r1),0,0
	  stfd      f28, 0x270(r1)
	  psq_st    f28,0x278(r1),0,0
	  stfd      f27, 0x260(r1)
	  psq_st    f27,0x268(r1),0,0
	  stmw      r20, 0x230(r1)
	  mr        r25, r3
	  mr        r26, r4
	  lbz       r0, 0x68(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x520
	  lwz       r0, 0x4C(r25)
	  cmplwi    r0, 0
	  bne-      .loc_0x60
	  cmpwi     r26, 0x2
	  bne-      .loc_0x520

	.loc_0x60:
	  lwz       r4, 0x48(r25)
	  cmplwi    r4, 0
	  beq-      .loc_0x520
	  lfs       f1, -0x7DF8(r2)
	  cntlzw    r0, r26
	  lfs       f0, 0x54(r25)
	  cmpwi     r26, 0x2
	  rlwinm    r30,r0,27,5,31
	  fadds     f31, f1, f0
	  beq-      .loc_0x354
	  lwz       r3, -0x76E0(r13)
	  cmplwi    r3, 0
	  bne-      .loc_0xD8
	  lfs       f1, -0x7DF4(r2)
	  addi      r3, r1, 0x108
	  lfs       f3, -0x7DF0(r2)
	  fmr       f2, f1
	  lfs       f4, -0x7DEC(r2)
	  lfs       f5, -0x7DE8(r2)
	  lfs       f6, -0x7DE4(r2)
	  bl        0xD140
	  addi      r3, r1, 0x108
	  bl        0xD21C
	  lis       r4, 0x804A
	  lis       r3, 0x804A
	  addi      r0, r4, 0x600
	  stw       r0, 0x108(r1)
	  addi      r0, r3, 0x650
	  stw       r0, 0x108(r1)
	  b         .loc_0x144

	.loc_0xD8:
	  lwz       r4, 0x4(r3)
	  lis       r0, 0x4330
	  lfs       f1, -0x7DF4(r2)
	  addi      r3, r1, 0x34
	  lhz       r5, 0x6(r4)
	  lhz       r4, 0x4(r4)
	  fmr       f2, f1
	  stw       r0, 0x1E0(r1)
	  lfd       f4, -0x7DD8(r2)
	  stw       r4, 0x1E4(r1)
	  lfs       f5, -0x7DE8(r2)
	  lfd       f0, 0x1E0(r1)
	  stw       r5, 0x1EC(r1)
	  fsubs     f3, f0, f4
	  lfs       f6, -0x7DE4(r2)
	  stw       r0, 0x1E8(r1)
	  lfd       f0, 0x1E8(r1)
	  fsubs     f4, f0, f4
	  bl        0xD0D0
	  addi      r3, r1, 0x34
	  bl        0xD1AC
	  lis       r4, 0x804A
	  lis       r3, 0x804A
	  addi      r0, r4, 0x600
	  stw       r0, 0x34(r1)
	  addi      r0, r3, 0x650
	  stw       r0, 0x34(r1)

	.loc_0x144:
	  rlwinm.   r0,r30,0,24,31
	  beq-      .loc_0x154
	  addi      r7, r25, 0x60
	  b         .loc_0x158

	.loc_0x154:
	  addi      r7, r25, 0x5C

	.loc_0x158:
	  lwz       r5, 0x44(r25)
	  lis       r6, 0x4330
	  lwz       r4, 0x20(r25)
	  addi      r3, r1, 0x30
	  lwz       r0, 0x48(r25)
	  xoris     r5, r5, 0x8000
	  stw       r5, 0x1E4(r1)
	  lwz       r5, 0x40(r25)
	  stw       r6, 0x1E0(r1)
	  lfd       f6, -0x7DD0(r2)
	  subi      r5, r5, 0x2
	  lfd       f0, 0x1E0(r1)
	  xoris     r5, r5, 0x8000
	  stw       r4, 0x204(r1)
	  fsubs     f1, f0, f6
	  lfd       f3, -0x7DD8(r2)
	  stw       r6, 0x200(r1)
	  lfs       f4, 0x50(r25)
	  lfd       f0, 0x200(r1)
	  fsubs     f5, f1, f31
	  stw       r0, 0x21C(r1)
	  fsubs     f2, f0, f3
	  lfs       f1, -0x7DE0(r2)
	  stw       r6, 0x218(r1)
	  fctiwz    f5, f5
	  lwz       r7, 0x0(r7)
	  lfd       f0, 0x218(r1)
	  fmadds    f1, f4, f2, f1
	  stfd      f5, 0x1F0(r1)
	  fsubs     f0, f0, f3
	  lwz       r0, 0x1F4(r1)
	  fctiwz    f1, f1
	  stw       r5, 0x1EC(r1)
	  fmuls     f0, f31, f0
	  xoris     r5, r0, 0x8000
	  stw       r6, 0x1E8(r1)
	  fctiwz    f0, f0
	  stfd      f1, 0x208(r1)
	  lfd       f1, 0x1E8(r1)
	  lwz       r0, 0x20C(r1)
	  stfd      f0, 0x220(r1)
	  fsubs     f1, f1, f6
	  xoris     r4, r0, 0x8000
	  lwz       r0, 0x224(r1)
	  stw       r5, 0x1FC(r1)
	  xoris     r0, r0, 0x8000
	  stw       r6, 0x1F8(r1)
	  lfd       f0, 0x1F8(r1)
	  stw       r4, 0x214(r1)
	  fsubs     f2, f0, f6
	  stw       r6, 0x210(r1)
	  lfd       f0, 0x210(r1)
	  stw       r0, 0x22C(r1)
	  fsubs     f3, f0, f6
	  stw       r6, 0x228(r1)
	  lfd       f0, 0x228(r1)
	  stw       r7, 0x30(r1)
	  fsubs     f4, f0, f6
	  bl        0xD3D0
	  lwz       r3, 0x4C(r25)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r30,0,24,31
	  beq-      .loc_0x324
	  lwz       r5, 0x30(r25)
	  lwz       r0, 0x38(r25)
	  lwz       r3, 0x48(r25)
	  sub.      r4, r0, r5
	  blt-      .loc_0x278
	  b         .loc_0x280

	.loc_0x278:
	  lwz       r0, 0x24(r25)
	  add       r4, r4, r0

	.loc_0x280:
	  sub       r3, r4, r3
	  addic.    r0, r3, 0x1
	  bgt-      .loc_0x2B8
	  li        r0, 0xFF
	  lwz       r3, 0x4C(r25)
	  stb       r0, 0x28(r1)
	  addi      r4, r1, 0x2C
	  stb       r0, 0x29(r1)
	  stb       r0, 0x2A(r1)
	  stb       r0, 0x2B(r1)
	  lwz       r0, 0x28(r1)
	  stw       r0, 0x2C(r1)
	  bl        0x4B24
	  b         .loc_0x3CC

	.loc_0x2B8:
	  lwz       r0, 0x34(r25)
	  cmpw      r5, r0
	  bne-      .loc_0x2F4
	  li        r5, 0xFF
	  li        r0, 0xE6
	  stb       r5, 0x20(r1)
	  addi      r4, r1, 0x24
	  lwz       r3, 0x4C(r25)
	  stb       r0, 0x21(r1)
	  stb       r0, 0x22(r1)
	  stb       r5, 0x23(r1)
	  lwz       r0, 0x20(r1)
	  stw       r0, 0x24(r1)
	  bl        0x4AE8
	  b         .loc_0x3CC

	.loc_0x2F4:
	  li        r5, 0xE6
	  li        r0, 0xFF
	  stb       r5, 0x18(r1)
	  addi      r4, r1, 0x1C
	  lwz       r3, 0x4C(r25)
	  stb       r5, 0x19(r1)
	  stb       r0, 0x1A(r1)
	  stb       r0, 0x1B(r1)
	  lwz       r0, 0x18(r1)
	  stw       r0, 0x1C(r1)
	  bl        0x4AB8
	  b         .loc_0x3CC

	.loc_0x324:
	  li        r5, 0xE6
	  li        r0, 0xFF
	  stb       r5, 0x10(r1)
	  addi      r4, r1, 0x14
	  lwz       r3, 0x4C(r25)
	  stb       r5, 0x11(r1)
	  stb       r5, 0x12(r1)
	  stb       r0, 0x13(r1)
	  lwz       r0, 0x10(r1)
	  stw       r0, 0x14(r1)
	  bl        0x4A88
	  b         .loc_0x3CC

	.loc_0x354:
	  lis       r0, 0x4330
	  lwz       r3, 0x20(r25)
	  stw       r4, 0x22C(r1)
	  mulli     r3, r3, 0x6
	  lwz       r4, 0x40(r25)
	  stw       r0, 0x228(r1)
	  lfd       f1, -0x7DD8(r2)
	  subi      r4, r4, 0x3
	  lfd       f0, 0x228(r1)
	  lwz       r5, 0x44(r25)
	  addi      r6, r3, 0x6
	  fsubs     f0, f0, f1
	  lwz       r3, -0x7778(r13)
	  subi      r5, r5, 0x2
	  fmuls     f0, f31, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x220(r1)
	  lwz       r7, 0x224(r1)
	  addi      r7, r7, 0x4
	  bl        0x14B8
	  li        r0, 0xFF
	  lwz       r3, -0x7778(r13)
	  stb       r0, 0x8(r1)
	  addi      r4, r1, 0xC
	  stb       r0, 0x9(r1)
	  stb       r0, 0xA(r1)
	  stb       r0, 0xB(r1)
	  lwz       r0, 0x8(r1)
	  stw       r0, 0xC(r1)
	  bl        0x19B0

	.loc_0x3CC:
	  lwz       r21, 0x24(r25)
	  li        r27, 0
	  lwz       r3, 0x20(r25)
	  lwz       r28, 0x30(r25)
	  xoris     r22, r21, 0x8000
	  lwz       r23, 0x48(r25)
	  addi      r31, r3, 0x2
	  lwz       r24, 0x34(r25)
	  lwz       r30, 0x28(r25)

	.loc_0x3F0:
	  mullw     r3, r31, r28
	  addi      r29, r3, 0x1
	  add       r29, r30, r29
	  lbz       r0, -0x1(r29)
	  cmplwi    r0, 0
	  beq-      .loc_0x520
	  cmpwi     r26, 0x2
	  beq-      .loc_0x49C
	  lwz       r3, 0x44(r25)
	  lis       r5, 0x4330
	  xoris     r6, r27, 0x8000
	  lwz       r0, 0x40(r25)
	  xoris     r4, r3, 0x8000
	  stw       r6, 0x22C(r1)
	  xoris     r0, r0, 0x8000
	  lfd       f3, -0x7DD0(r2)
	  stw       r5, 0x228(r1)
	  mr        r3, r29
	  lfs       f27, 0x54(r25)
	  lfd       f0, 0x228(r1)
	  stw       r4, 0x224(r1)
	  fsubs     f2, f0, f3
	  lfs       f28, 0x50(r25)
	  stw       r5, 0x220(r1)
	  lwz       r20, 0x4C(r25)
	  lfd       f0, 0x220(r1)
	  stw       r0, 0x21C(r1)
	  fsubs     f1, f0, f3
	  stw       r5, 0x218(r1)
	  lfd       f0, 0x218(r1)
	  fmadds    f29, f2, f31, f1
	  fsubs     f30, f0, f3
	  bl        0xA20B8
	  fmr       f1, f30
	  mr        r5, r3
	  fmr       f2, f29
	  mr        r3, r20
	  fmr       f3, f28
	  mr        r4, r29
	  fmr       f4, f27
	  li        r6, 0x1
	  bl        0x49F8
	  b         .loc_0x4F4

	.loc_0x49C:
	  lwz       r0, 0x44(r25)
	  lis       r5, 0x4330
	  xoris     r3, r27, 0x8000
	  lwz       r4, 0x40(r25)
	  xoris     r0, r0, 0x8000
	  stw       r3, 0x22C(r1)
	  lfd       f2, -0x7DD0(r2)
	  mr        r6, r29
	  stw       r5, 0x228(r1)
	  rlwinm    r4,r4,0,16,31
	  lwz       r3, -0x7778(r13)
	  lfd       f0, 0x228(r1)
	  stw       r0, 0x224(r1)
	  fsubs     f1, f0, f2
	  stw       r5, 0x220(r1)
	  lfd       f0, 0x220(r1)
	  fsubs     f0, f0, f2
	  fmadds    f0, f1, f31, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x218(r1)
	  lwz       r5, 0x21C(r1)
	  bl        0x16E8

	.loc_0x4F4:
	  addi      r3, r28, 0x1
	  addi      r27, r27, 0x1
	  sub       r0, r3, r21
	  addc      r0, r0, r22
	  cmplw     r27, r23
	  subfe     r0, r0, r0
	  andc      r0, r3, r0
	  mr        r28, r0
	  bge-      .loc_0x520
	  cmpw      r0, r24
	  bne+      .loc_0x3F0

	.loc_0x520:
	  psq_l     f31,0x2A8(r1),0,0
	  lfd       f31, 0x2A0(r1)
	  psq_l     f30,0x298(r1),0,0
	  lfd       f30, 0x290(r1)
	  psq_l     f29,0x288(r1),0,0
	  lfd       f29, 0x280(r1)
	  psq_l     f28,0x278(r1),0,0
	  lfd       f28, 0x270(r1)
	  psq_l     f27,0x268(r1),0,0
	  lfd       f27, 0x260(r1)
	  lmw       r20, 0x230(r1)
	  lwz       r0, 0x2B4(r1)
	  mtlr      r0
	  addi      r1, r1, 0x2B0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80028944
 * Size:	00005C
 */
void J2DOrthoGraph::~J2DOrthoGraph()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr.       r31, r3
	  beq-      .loc_0x44
	  lis       r3, 0x804A
	  addi      r0, r3, 0x600
	  stw       r0, 0x0(r31)
	  beq-      .loc_0x34
	  lis       r3, 0x804A
	  addi      r0, r3, 0x650
	  stw       r0, 0x0(r31)

	.loc_0x34:
	  extsh.    r0, r4
	  ble-      .loc_0x44
	  mr        r3, r31
	  bl        -0x48D0

	.loc_0x44:
	  lwz       r0, 0x14(r1)
	  mr        r3, r31
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800289A0
 * Size:	00008C
 */
void JUTConsole::print_f(const char*, ...)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x80(r1)
	  mflr      r0
	  stw       r0, 0x84(r1)
	  stw       r31, 0x7C(r1)
	  bne-      cr1, .loc_0x34
	  stfd      f1, 0x28(r1)
	  stfd      f2, 0x30(r1)
	  stfd      f3, 0x38(r1)
	  stfd      f4, 0x40(r1)
	  stfd      f5, 0x48(r1)
	  stfd      f6, 0x50(r1)
	  stfd      f7, 0x58(r1)
	  stfd      f8, 0x60(r1)

	.loc_0x34:
	  addi      r11, r1, 0x88
	  addi      r0, r1, 0x8
	  lis       r12, 0x200
	  stw       r3, 0x8(r1)
	  addi      r31, r1, 0x68
	  stw       r5, 0x10(r1)
	  mr        r5, r31
	  stw       r4, 0xC(r1)
	  stw       r6, 0x14(r1)
	  stw       r7, 0x18(r1)
	  stw       r8, 0x1C(r1)
	  stw       r9, 0x20(r1)
	  stw       r10, 0x24(r1)
	  stw       r12, 0x68(r1)
	  stw       r11, 0x6C(r1)
	  stw       r0, 0x70(r1)
	  bl        0x318
	  lwz       r0, 0x84(r1)
	  lwz       r31, 0x7C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x80
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80028A2C
 * Size:	000300
 */
void JUTConsole::print(const char*)
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
	  lwz       r0, 0x58(r3)
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0x2E4
	  lwz       r5, 0x20(r29)
	  mr        r31, r4
	  lwz       r3, 0x38(r29)
	  addi      r4, r5, 0x2
	  lwz       r0, 0x3C(r29)
	  mullw     r3, r4, r3
	  lwz       r4, 0x28(r29)
	  addi      r3, r3, 0x1
	  add       r30, r3, r0
	  add       r30, r4, r30
	  b         .loc_0x2D0

	.loc_0x54:
	  lbz       r0, 0x6A(r29)
	  cmplwi    r0, 0
	  beq-      .loc_0x8C
	  lwz       r6, 0x38(r29)
	  lwz       r3, 0x24(r29)
	  addi      r6, r6, 0x1
	  lwz       r0, 0x34(r29)
	  xoris     r5, r3, 0x8000
	  sub       r3, r6, r3
	  addc      r3, r3, r5
	  subfe     r3, r3, r3
	  andc      r3, r6, r3
	  cmpw      r0, r3
	  beq-      .loc_0x2DC

	.loc_0x8C:
	  cmpwi     r4, 0xA
	  bne-      .loc_0xA4
	  lwz       r0, 0x20(r29)
	  addi      r31, r31, 0x1
	  stw       r0, 0x3C(r29)
	  b         .loc_0x19C

	.loc_0xA4:
	  cmpwi     r4, 0x9
	  bne-      .loc_0xF8
	  li        r5, 0x20
	  addi      r31, r31, 0x1
	  b         .loc_0xE4

	.loc_0xB8:
	  stb       r5, 0x0(r30)
	  addi      r30, r30, 0x1
	  lwz       r3, 0x3C(r29)
	  addi      r0, r3, 0x1
	  stw       r0, 0x3C(r29)
	  lwz       r4, 0x3C(r29)
	  lwz       r3, 0x64(r29)
	  divw      r0, r4, r3
	  mullw     r0, r0, r3
	  sub.      r0, r4, r0
	  beq-      .loc_0x19C

	.loc_0xE4:
	  lwz       r3, 0x3C(r29)
	  lwz       r0, 0x20(r29)
	  cmplw     r3, r0
	  blt+      .loc_0xB8
	  b         .loc_0x19C

	.loc_0xF8:
	  lwz       r3, 0x4C(r29)
	  cmplwi    r3, 0
	  beq-      .loc_0x180
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x40(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x180
	  lwz       r3, 0x3C(r29)
	  lwz       r0, 0x20(r29)
	  addi      r3, r3, 0x1
	  cmplw     r3, r0
	  bge-      .loc_0x164
	  lbz       r3, 0x0(r31)
	  lbz       r0, 0x1(r31)
	  addi      r31, r31, 0x2
	  stb       r3, 0x0(r30)
	  stb       r0, 0x1(r30)
	  addi      r30, r30, 0x2
	  lwz       r3, 0x3C(r29)
	  addi      r0, r3, 0x1
	  stw       r0, 0x3C(r29)
	  lwz       r3, 0x3C(r29)
	  addi      r0, r3, 0x1
	  stw       r0, 0x3C(r29)
	  b         .loc_0x19C

	.loc_0x164:
	  li        r0, 0
	  stb       r0, 0x0(r30)
	  addi      r30, r30, 0x1
	  lwz       r3, 0x3C(r29)
	  addi      r0, r3, 0x1
	  stw       r0, 0x3C(r29)
	  b         .loc_0x19C

	.loc_0x180:
	  lbz       r0, 0x0(r31)
	  addi      r31, r31, 0x1
	  stb       r0, 0x0(r30)
	  addi      r30, r30, 0x1
	  lwz       r3, 0x3C(r29)
	  addi      r0, r3, 0x1
	  stw       r0, 0x3C(r29)

	.loc_0x19C:
	  lwz       r3, 0x3C(r29)
	  lwz       r0, 0x20(r29)
	  cmplw     r3, r0
	  blt-      .loc_0x2D0
	  li        r6, 0
	  li        r5, 0xFF
	  stb       r6, 0x0(r30)
	  lwz       r4, 0x38(r29)
	  lwz       r0, 0x24(r29)
	  addi      r4, r4, 0x1
	  xoris     r3, r0, 0x8000
	  sub       r0, r4, r0
	  addc      r0, r0, r3
	  subfe     r0, r0, r0
	  andc      r0, r4, r0
	  stw       r0, 0x38(r29)
	  stw       r6, 0x3C(r29)
	  lwz       r3, 0x20(r29)
	  lwz       r0, 0x38(r29)
	  addi      r3, r3, 0x2
	  lwz       r4, 0x28(r29)
	  mullw     r0, r3, r0
	  stbx      r5, r4, r0
	  lwz       r3, 0x20(r29)
	  lwz       r0, 0x38(r29)
	  addi      r3, r3, 0x2
	  lwz       r4, 0x28(r29)
	  mullw     r3, r3, r0
	  addi      r3, r3, 0x1
	  add       r3, r4, r3
	  stb       r6, 0x0(r3)
	  mr        r30, r3
	  lwz       r4, 0x30(r29)
	  lwz       r0, 0x38(r29)
	  sub.      r3, r0, r4
	  blt-      .loc_0x230
	  b         .loc_0x238

	.loc_0x230:
	  lwz       r0, 0x24(r29)
	  add       r3, r3, r0

	.loc_0x238:
	  lwz       r0, 0x48(r29)
	  cmplw     r3, r0
	  bne-      .loc_0x264
	  lwz       r0, 0x24(r29)
	  addi      r4, r4, 0x1
	  xoris     r3, r0, 0x8000
	  sub       r0, r4, r0
	  addc      r0, r0, r3
	  subfe     r0, r0, r0
	  andc      r0, r4, r0
	  stw       r0, 0x30(r29)

	.loc_0x264:
	  lwz       r0, 0x38(r29)
	  lwz       r3, 0x34(r29)
	  cmpw      r0, r3
	  bne-      .loc_0x294
	  lwz       r0, 0x24(r29)
	  addi      r4, r3, 0x1
	  xoris     r3, r0, 0x8000
	  sub       r0, r4, r0
	  addc      r0, r0, r3
	  subfe     r0, r0, r0
	  andc      r0, r4, r0
	  stw       r0, 0x34(r29)

	.loc_0x294:
	  lwz       r0, 0x38(r29)
	  lwz       r3, 0x30(r29)
	  cmpw      r0, r3
	  bne-      .loc_0x2C4
	  lwz       r0, 0x24(r29)
	  addi      r4, r3, 0x1
	  xoris     r3, r0, 0x8000
	  sub       r0, r4, r0
	  addc      r0, r0, r3
	  subfe     r0, r0, r0
	  andc      r0, r4, r0
	  stw       r0, 0x30(r29)

	.loc_0x2C4:
	  lbz       r0, 0x6B(r29)
	  cmplwi    r0, 0
	  bne-      .loc_0x2DC

	.loc_0x2D0:
	  lbz       r4, 0x0(r31)
	  cmplwi    r4, 0
	  bne+      .loc_0x54

	.loc_0x2DC:
	  li        r0, 0
	  stb       r0, 0x0(r30)

	.loc_0x2E4:
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
 * Address:	80028D2C
 * Size:	000048
 */
void JUTConsole_print_f_va_(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x410(r1)
	  mflr      r0
	  mr        r6, r5
	  mr        r5, r4
	  stw       r0, 0x414(r1)
	  li        r4, 0x400
	  stw       r31, 0x40C(r1)
	  mr        r31, r3
	  addi      r3, r1, 0x8
	  bl        0x9E914
	  mr        r3, r31
	  addi      r4, r1, 0x8
	  bl        -0x330
	  lwz       r0, 0x414(r1)
	  lwz       r31, 0x40C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x410
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00012C
 */
void JUTConsole::dumpToTerminal(unsigned int)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000154
 */
void JUTConsole::dumpToConsole(JUTConsole*, unsigned int)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80028D74
 * Size:	0000DC
 */
void JUTConsole::scroll(int)
{
	/*
	.loc_0x0:
	  cmpwi     r4, 0
	  bge-      .loc_0x38
	  lwz       r5, 0x34(r3)
	  lwz       r0, 0x30(r3)
	  sub.      r5, r0, r5
	  blt-      .loc_0x1C
	  b         .loc_0x24

	.loc_0x1C:
	  lwz       r0, 0x24(r3)
	  add       r5, r5, r0

	.loc_0x24:
	  neg       r0, r5
	  cmpw      r4, r0
	  bge-      .loc_0x9C
	  mr        r4, r0
	  b         .loc_0x9C

	.loc_0x38:
	  ble-      .loc_0x9C
	  lwz       r0, 0x34(r3)
	  lwz       r6, 0x38(r3)
	  sub.      r5, r6, r0
	  blt-      .loc_0x50
	  b         .loc_0x58

	.loc_0x50:
	  lwz       r0, 0x24(r3)
	  add       r5, r5, r0

	.loc_0x58:
	  lwz       r7, 0x48(r3)
	  addi      r0, r5, 0x1
	  cmplw     r0, r7
	  bgt-      .loc_0x70
	  li        r4, 0
	  b         .loc_0x9C

	.loc_0x70:
	  lwz       r0, 0x30(r3)
	  sub.      r5, r6, r0
	  blt-      .loc_0x80
	  b         .loc_0x88

	.loc_0x80:
	  lwz       r0, 0x24(r3)
	  add       r5, r5, r0

	.loc_0x88:
	  sub       r5, r5, r7
	  addi      r0, r5, 0x1
	  cmpw      r4, r0
	  ble-      .loc_0x9C
	  mr        r4, r0

	.loc_0x9C:
	  lwz       r0, 0x30(r3)
	  add       r0, r0, r4
	  stw       r0, 0x30(r3)
	  lwz       r4, 0x30(r3)
	  cmpwi     r4, 0
	  bge-      .loc_0xC0
	  lwz       r0, 0x24(r3)
	  add       r0, r4, r0
	  stw       r0, 0x30(r3)

	.loc_0xC0:
	  lwz       r0, 0x30(r3)
	  lwz       r4, 0x24(r3)
	  cmplw     r0, r4
	  bltlr-
	  sub       r0, r0, r4
	  stw       r0, 0x30(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80028E50
 * Size:	000024
 */
void JUTConsole::getUsedLine() const
{
	/*
	.loc_0x0:
	  lwz       r4, 0x34(r3)
	  lwz       r0, 0x38(r3)
	  sub.      r4, r0, r4
	  blt-      .loc_0x18
	  mr        r3, r4
	  blr

	.loc_0x18:
	  lwz       r0, 0x24(r3)
	  add       r3, r4, r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80028E74
 * Size:	000024
 */
void JUTConsole::getLineOffset() const
{
	/*
	.loc_0x0:
	  lwz       r4, 0x34(r3)
	  lwz       r0, 0x30(r3)
	  sub.      r4, r0, r4
	  blt-      .loc_0x18
	  mr        r3, r4
	  blr

	.loc_0x18:
	  lwz       r0, 0x24(r3)
	  add       r3, r4, r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000028
 */
void JUTConsoleManager::JUTConsoleManager()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000054
 */
void __dt__Q27JGadget27TLinkList<JUTConsole, -24> Fv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000058
 */
void JUTConsoleManager::~JUTConsoleManager()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80028E98
 * Size:	000068
 */
void JUTConsoleManager::createManager(JKRHeap*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  cmplwi    r3, 0
	  stw       r0, 0x14(r1)
	  bne-      .loc_0x18
	  lwz       r3, -0x77D4(r13)

	.loc_0x18:
	  mr        r4, r3
	  li        r3, 0x14
	  li        r5, 0
	  bl        -0x4F7C
	  cmplwi    r3, 0
	  beq-      .loc_0x54
	  li        r4, 0
	  addi      r0, r3, 0x4
	  stw       r4, 0x4(r3)
	  stw       r4, 0x8(r3)
	  stw       r4, 0x0(r3)
	  stw       r0, 0x4(r3)
	  stw       r0, 0x8(r3)
	  stw       r4, 0xC(r3)
	  stw       r4, 0x10(r3)

	.loc_0x54:
	  stw       r3, -0x7790(r13)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000060
 */
void JUTConsoleManager::destroyManager(JUTConsoleManager*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80028F00
 * Size:	000070
 */
void JUTConsoleManager::appendConsole(JUTConsole*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  addi      r5, r1, 0x14
	  stw       r31, 0x2C(r1)
	  mr        r31, r4
	  addi      r6, r31, 0x18
	  stw       r30, 0x28(r1)
	  mr        r30, r3
	  addi      r0, r30, 0x4
	  addi      r3, r1, 0x10
	  stw       r0, 0xC(r1)
	  mr        r4, r30
	  stw       r0, 0x8(r1)
	  stw       r0, 0x1C(r1)
	  stw       r0, 0x18(r1)
	  stw       r0, 0x14(r1)
	  bl        -0x1C24
	  lwz       r0, 0xC(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0x58
	  stw       r31, 0xC(r30)

	.loc_0x58:
	  lwz       r0, 0x34(r1)
	  lwz       r31, 0x2C(r1)
	  lwz       r30, 0x28(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80028F70
 * Size:	0000C8
 */
void JUTConsoleManager::removeConsole(JUTConsole*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r4
	  stw       r30, 0x18(r1)
	  mr        r30, r3
	  lwz       r0, 0xC(r3)
	  cmplw     r0, r31
	  bne-      .loc_0x7C
	  lwz       r0, 0x0(r30)
	  cmplwi    r0, 0x1
	  bgt-      .loc_0x40
	  li        r0, 0
	  stw       r0, 0xC(r30)
	  b         .loc_0x7C

	.loc_0x40:
	  addi      r3, r30, 0x4
	  lwz       r4, 0x8(r30)
	  stw       r3, 0x14(r1)
	  subi      r0, r4, 0x18
	  cmplw     r31, r0
	  stw       r3, 0x10(r1)
	  beq-      .loc_0x68
	  lwz       r3, 0x18(r31)
	  subi      r0, r3, 0x18
	  b         .loc_0x78

	.loc_0x68:
	  lwz       r3, 0x4(r30)
	  stw       r3, 0xC(r1)
	  subi      r0, r3, 0x18
	  stw       r3, 0x8(r1)

	.loc_0x78:
	  stw       r0, 0xC(r30)

	.loc_0x7C:
	  bl        0x2D0
	  cmplw     r3, r31
	  bne-      .loc_0x90
	  li        r3, 0
	  bl        0x2B8

	.loc_0x90:
	  bl        0x2AC
	  cmplw     r3, r31
	  bne-      .loc_0xA4
	  li        r3, 0
	  bl        0x294

	.loc_0xA4:
	  mr        r3, r30
	  addi      r4, r31, 0x18
	  bl        -0x1CAC
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
 * Address:	........
 * Size:	000008
 */
void JUTConsoleManager::getConsoleNumber() const
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80029038
 * Size:	0000CC
 */
void JUTConsoleManager::draw() const
{
	/*
	.loc_0x0:
	  stwu      r1, -0x60(r1)
	  mflr      r0
	  stw       r0, 0x64(r1)
	  lwz       r0, 0x4(r3)
	  stw       r31, 0x5C(r1)
	  lwz       r31, 0xC(r3)
	  stw       r30, 0x58(r1)
	  stw       r29, 0x54(r1)
	  mr        r29, r3
	  addi      r30, r29, 0x4
	  stw       r30, 0xC(r1)
	  stw       r0, 0x14(r1)
	  stw       r0, 0x10(r1)
	  stw       r0, 0x34(r1)
	  stw       r0, 0x30(r1)
	  stw       r0, 0x1C(r1)
	  stw       r0, 0x44(r1)
	  stw       r30, 0x8(r1)
	  stw       r30, 0x2C(r1)
	  stw       r30, 0x28(r1)
	  stw       r30, 0x18(r1)
	  stw       r30, 0x40(r1)
	  stw       r30, 0x3C(r1)
	  stw       r30, 0x24(r1)
	  b         .loc_0x88

	.loc_0x64:
	  lwz       r3, 0x44(r1)
	  subi      r3, r3, 0x18
	  cmplw     r3, r31
	  beq-      .loc_0x7C
	  li        r4, 0x1
	  bl        -0xCC8

	.loc_0x7C:
	  lwz       r3, 0x44(r1)
	  lwz       r0, 0x0(r3)
	  stw       r0, 0x44(r1)

	.loc_0x88:
	  lwz       r0, 0x44(r1)
	  cmplw     r0, r30
	  stw       r0, 0x38(r1)
	  stw       r0, 0x20(r1)
	  bne+      .loc_0x64
	  lwz       r3, 0xC(r29)
	  cmplwi    r3, 0
	  beq-      .loc_0xB0
	  li        r4, 0
	  bl        -0xCFC

	.loc_0xB0:
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
 * Address:	80029104
 * Size:	00007C
 */
void JUTConsoleManager::drawDirect(bool) const
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  lwz       r0, 0x10(r3)
	  stw       r31, 0x1C(r1)
	  cmplwi    r0, 0
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  beq-      .loc_0x60
	  rlwinm.   r0,r4,0,24,31
	  beq-      .loc_0x54
	  bl        0xC5B18
	  mr        r30, r3
	  bl        0xA9008
	  mr        r31, r3

	.loc_0x40:
	  bl        0xA9000
	  cmplw     r31, r3
	  beq+      .loc_0x40
	  mr        r3, r30
	  bl        0xC5B0C

	.loc_0x54:
	  lwz       r3, 0x10(r29)
	  li        r4, 0x2
	  bl        -0xD78

	.loc_0x60:
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
 * Address:	80029180
 * Size:	000124
 */
void JUTConsoleManager::setDirectConsole(JUTConsole*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  stw       r31, 0x3C(r1)
	  stw       r30, 0x38(r1)
	  mr        r30, r4
	  stw       r29, 0x34(r1)
	  mr        r29, r3
	  lwz       r31, 0x10(r3)
	  cmplwi    r31, 0
	  beq-      .loc_0x68
	  addi      r0, r29, 0x4
	  mr        r4, r29
	  stw       r0, 0xC(r1)
	  addi      r3, r1, 0x20
	  addi      r5, r1, 0x24
	  addi      r6, r31, 0x18
	  stw       r0, 0x8(r1)
	  stw       r0, 0x2C(r1)
	  stw       r0, 0x28(r1)
	  stw       r0, 0x24(r1)
	  bl        -0x1EB4
	  lwz       r0, 0xC(r29)
	  cmplwi    r0, 0
	  bne-      .loc_0x68
	  stw       r31, 0xC(r29)

	.loc_0x68:
	  cmplwi    r30, 0
	  beq-      .loc_0x104
	  lwz       r0, 0xC(r29)
	  cmplw     r0, r30
	  bne-      .loc_0xD0
	  lwz       r0, 0x0(r29)
	  cmplwi    r0, 0x1
	  bgt-      .loc_0x94
	  li        r0, 0
	  stw       r0, 0xC(r29)
	  b         .loc_0xD0

	.loc_0x94:
	  addi      r3, r29, 0x4
	  lwz       r4, 0x8(r29)
	  stw       r3, 0x1C(r1)
	  subi      r0, r4, 0x18
	  cmplw     r30, r0
	  stw       r3, 0x18(r1)
	  beq-      .loc_0xBC
	  lwz       r3, 0x18(r30)
	  subi      r0, r3, 0x18
	  b         .loc_0xCC

	.loc_0xBC:
	  lwz       r3, 0x4(r29)
	  stw       r3, 0x14(r1)
	  subi      r0, r3, 0x18
	  stw       r3, 0x10(r1)

	.loc_0xCC:
	  stw       r0, 0xC(r29)

	.loc_0xD0:
	  bl        0x6C
	  cmplw     r3, r30
	  bne-      .loc_0xE4
	  li        r3, 0
	  bl        0x54

	.loc_0xE4:
	  bl        0x48
	  cmplw     r3, r30
	  bne-      .loc_0xF8
	  li        r3, 0
	  bl        .loc_0x124

	.loc_0xF8:
	  mr        r3, r29
	  addi      r4, r30, 0x18
	  bl        -0x1F10

	.loc_0x104:
	  stw       r30, 0x10(r29)
	  lwz       r0, 0x44(r1)
	  lwz       r31, 0x3C(r1)
	  lwz       r30, 0x38(r1)
	  lwz       r29, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr

	.loc_0x124:
	*/
}

/*
 * --INFO--
 * Address:	800292A4
 * Size:	000008
 */
void JUTSetReportConsole(void)
{
	/*
	.loc_0x0:
	  stw       r3, -0x778C(r13)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800292AC
 * Size:	000008
 */
void JUTGetReportConsole(void)
{
	/*
	.loc_0x0:
	  lwz       r3, -0x778C(r13)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800292B4
 * Size:	000008
 */
void JUTSetWarningConsole(void)
{
	/*
	.loc_0x0:
	  stw       r3, -0x7788(r13)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800292BC
 * Size:	000008
 */
void JUTGetWarningConsole(void)
{
	/*
	.loc_0x0:
	  lwz       r3, -0x7788(r13)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00006C
 */
void JUTReportConsole_f_va(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800292C4
 * Size:	0000DC
 */
void JUTReportConsole_f(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x180(r1)
	  mflr      r0
	  stw       r0, 0x184(r1)
	  stw       r31, 0x17C(r1)
	  stw       r30, 0x178(r1)
	  bne-      cr1, .loc_0x38
	  stfd      f1, 0x28(r1)
	  stfd      f2, 0x30(r1)
	  stfd      f3, 0x38(r1)
	  stfd      f4, 0x40(r1)
	  stfd      f5, 0x48(r1)
	  stfd      f6, 0x50(r1)
	  stfd      f7, 0x58(r1)
	  stfd      f8, 0x60(r1)

	.loc_0x38:
	  lwz       r30, -0x778C(r13)
	  addi      r11, r1, 0x188
	  addi      r0, r1, 0x8
	  lis       r12, 0x100
	  cmplwi    r30, 0
	  stw       r3, 0x8(r1)
	  addi      r31, r1, 0x68
	  stw       r4, 0xC(r1)
	  stw       r5, 0x10(r1)
	  stw       r6, 0x14(r1)
	  stw       r7, 0x18(r1)
	  stw       r8, 0x1C(r1)
	  stw       r9, 0x20(r1)
	  stw       r10, 0x24(r1)
	  stw       r12, 0x68(r1)
	  stw       r11, 0x6C(r1)
	  stw       r0, 0x70(r1)
	  bne-      .loc_0x98
	  mr        r5, r3
	  mr        r6, r31
	  addi      r3, r1, 0x74
	  li        r4, 0x100
	  bl        0x9E310
	  b         .loc_0xC4

	.loc_0x98:
	  lwz       r0, 0x58(r30)
	  rlwinm.   r0,r0,0,30,31
	  beq-      .loc_0xC4
	  mr        r5, r3
	  mr        r6, r31
	  addi      r3, r1, 0x74
	  li        r4, 0x100
	  bl        0x9E2EC
	  lwz       r3, -0x778C(r13)
	  addi      r4, r1, 0x74
	  bl        -0x958

	.loc_0xC4:
	  lwz       r0, 0x184(r1)
	  lwz       r31, 0x17C(r1)
	  lwz       r30, 0x178(r1)
	  mtlr      r0
	  addi      r1, r1, 0x180
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800293A0
 * Size:	00002C
 */
void JUTReportConsole(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r4, r3
	  subi      r3, r2, 0x7DC8
	  stw       r0, 0x14(r1)
	  crclr     6, 0x6
	  bl        -0xF4
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00006C
 */
void JUTWarningConsole_f_va(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800293CC
 * Size:	0000DC
 */
void JUTWarningConsole_f(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x180(r1)
	  mflr      r0
	  stw       r0, 0x184(r1)
	  stw       r31, 0x17C(r1)
	  stw       r30, 0x178(r1)
	  bne-      cr1, .loc_0x38
	  stfd      f1, 0x28(r1)
	  stfd      f2, 0x30(r1)
	  stfd      f3, 0x38(r1)
	  stfd      f4, 0x40(r1)
	  stfd      f5, 0x48(r1)
	  stfd      f6, 0x50(r1)
	  stfd      f7, 0x58(r1)
	  stfd      f8, 0x60(r1)

	.loc_0x38:
	  lwz       r30, -0x778C(r13)
	  addi      r11, r1, 0x188
	  addi      r0, r1, 0x8
	  lis       r12, 0x100
	  cmplwi    r30, 0
	  stw       r3, 0x8(r1)
	  addi      r31, r1, 0x68
	  stw       r4, 0xC(r1)
	  stw       r5, 0x10(r1)
	  stw       r6, 0x14(r1)
	  stw       r7, 0x18(r1)
	  stw       r8, 0x1C(r1)
	  stw       r9, 0x20(r1)
	  stw       r10, 0x24(r1)
	  stw       r12, 0x68(r1)
	  stw       r11, 0x6C(r1)
	  stw       r0, 0x70(r1)
	  bne-      .loc_0x98
	  mr        r5, r3
	  mr        r6, r31
	  addi      r3, r1, 0x74
	  li        r4, 0x100
	  bl        0x9E208
	  b         .loc_0xC4

	.loc_0x98:
	  lwz       r0, 0x58(r30)
	  rlwinm.   r0,r0,0,30,31
	  beq-      .loc_0xC4
	  mr        r5, r3
	  mr        r6, r31
	  addi      r3, r1, 0x74
	  li        r4, 0x100
	  bl        0x9E1E4
	  lwz       r3, -0x778C(r13)
	  addi      r4, r1, 0x74
	  bl        -0xA60

	.loc_0xC4:
	  lwz       r0, 0x184(r1)
	  lwz       r31, 0x17C(r1)
	  lwz       r30, 0x178(r1)
	  mtlr      r0
	  addi      r1, r1, 0x180
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800294A8
 * Size:	00002C
 */
void JUTWarningConsole(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r4, r3
	  subi      r3, r2, 0x7DC8
	  stw       r0, 0x14(r1)
	  crclr     6, 0x6
	  bl        -0x1FC
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}
