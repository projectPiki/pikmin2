

/*
 * --INFO--
 * Address:	800A2B78
 * Size:	000034
 */
void JASOscillator::init()
{
	/*
	.loc_0x0:
	  li        r0, 0
	  lfs       f0, -0x7588(r2)
	  stw       r0, 0x0(r3)
	  stb       r0, 0x1C(r3)
	  stb       r0, 0x1D(r3)
	  sth       r0, 0x18(r3)
	  stfs      f0, 0x4(r3)
	  stfs      f0, 0x8(r3)
	  stfs      f0, 0xC(r3)
	  stfs      f0, 0x10(r3)
	  sth       r0, 0x1A(r3)
	  stfs      f0, 0x14(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800A2BAC
 * Size:	000088
 */
void JASOscillator::initStart(const JASOscillator::Data*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  cmplwi    r4, 0
	  stw       r0, 0x14(r1)
	  bne-      .loc_0x20
	  li        r0, 0
	  stb       r0, 0x1C(r3)
	  b         .loc_0x78

	.loc_0x20:
	  li        r0, 0x1
	  li        r5, 0
	  stb       r0, 0x1C(r3)
	  stw       r4, 0x0(r3)
	  sth       r5, 0x1A(r3)
	  lwz       r4, 0x0(r3)
	  lwz       r0, 0x8(r4)
	  cmplwi    r0, 0
	  bne-      .loc_0x50
	  lfs       f0, -0x7588(r2)
	  stfs      f0, 0x8(r3)
	  b         .loc_0x78

	.loc_0x50:
	  sth       r5, 0x18(r3)
	  lfs       f0, -0x7588(r2)
	  stfs      f0, 0x4(r3)
	  stfs      f0, 0xC(r3)
	  lwz       r4, 0x0(r3)
	  lfs       f1, 0x4(r3)
	  lfs       f0, 0x4(r4)
	  fsubs     f0, f1, f0
	  stfs      f0, 0x4(r3)
	  bl        .loc_0x88

	.loc_0x78:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr

	.loc_0x88:
	*/
}

/*
 * --INFO--
 * Address:	800A2C34
 * Size:	0000C8
 */
void JASOscillator::incCounter()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lbz       r5, 0x1C(r3)
	  cmpwi     r5, 0x1
	  beq-      .loc_0x34
	  bge-      .loc_0x28
	  cmpwi     r5, 0
	  bge-      .loc_0xB8
	  b         .loc_0x34

	.loc_0x28:
	  cmpwi     r5, 0x3
	  bge-      .loc_0x34
	  b         .loc_0xB8

	.loc_0x34:
	  cmplwi    r5, 0x3
	  bne-      .loc_0x48
	  lwz       r4, 0x0(r3)
	  lwz       r4, 0xC(r4)
	  b         .loc_0x68

	.loc_0x48:
	  cmplwi    r5, 0x4
	  bne-      .loc_0x60
	  lis       r4, 0x8048
	  subi      r0, r4, 0x71F4
	  mr        r4, r0
	  b         .loc_0x68

	.loc_0x60:
	  lwz       r4, 0x0(r3)
	  lwz       r4, 0x8(r4)

	.loc_0x68:
	  cmplwi    r4, 0
	  bne-      .loc_0x84
	  cmplwi    r5, 0x5
	  beq-      .loc_0x84
	  lfs       f0, -0x7584(r2)
	  stfs      f0, 0x8(r3)
	  b         .loc_0xB8

	.loc_0x84:
	  cmplwi    r5, 0x4
	  bne-      .loc_0xA0
	  lfs       f1, 0x4(r3)
	  lfs       f0, -0x7584(r2)
	  fsubs     f0, f1, f0
	  stfs      f0, 0x4(r3)
	  b         .loc_0xB4

	.loc_0xA0:
	  lwz       r5, 0x0(r3)
	  lfs       f1, 0x4(r3)
	  lfs       f0, 0x4(r5)
	  fsubs     f0, f1, f0
	  stfs      f0, 0x4(r3)

	.loc_0xB4:
	  bl        0x1A8

	.loc_0xB8:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800A2CFC
 * Size:	00002C
 */
void JASOscillator::getValue() const
{
	/*
	.loc_0x0:
	  lbz       r0, 0x1C(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x14
	  lfs       f1, -0x7584(r2)
	  blr

	.loc_0x14:
	  lwz       r4, 0x0(r3)
	  lfs       f2, 0x8(r3)
	  lfs       f1, 0x10(r4)
	  lfs       f0, 0x14(r4)
	  fmadds    f1, f2, f1, f0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00003C
 */
void JASOscillator::forceStop()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800A2D28
 * Size:	000168
 */
void JASOscillator::release()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stfd      f31, 0x20(r1)
	  psq_st    f31,0x28(r1),0,0
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  lbz       r0, 0x1C(r3)
	  cmplwi    r0, 0x4
	  bne-      .loc_0x30
	  li        r3, 0
	  b         .loc_0x14C

	.loc_0x30:
	  lwz       r4, 0x0(r31)
	  lwz       r3, 0x8(r4)
	  lwz       r0, 0xC(r4)
	  cmplw     r3, r0
	  beq-      .loc_0x5C
	  li        r0, 0
	  lfs       f0, -0x7588(r2)
	  sth       r0, 0x18(r31)
	  stfs      f0, 0x4(r31)
	  lfs       f0, 0x8(r31)
	  stfs      f0, 0xC(r31)

	.loc_0x5C:
	  lwz       r3, 0x0(r31)
	  lwz       r0, 0xC(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x80
	  lhz       r0, 0x1A(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x80
	  li        r0, 0x10
	  sth       r0, 0x1A(r31)

	.loc_0x80:
	  lhz       r0, 0x1A(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x140
	  li        r3, 0x5
	  lis       r0, 0x4330
	  stb       r3, 0x1C(r31)
	  lfd       f1, -0x7578(r2)
	  lhz       r3, 0x1A(r31)
	  stw       r0, 0x8(r1)
	  rlwinm    r0,r3,18,30,31
	  stb       r0, 0x1D(r31)
	  lhz       r0, 0x1A(r31)
	  rlwinm    r0,r0,0,18,31
	  xoris     r0, r0, 0x8000
	  stw       r0, 0xC(r1)
	  lfd       f0, 0x8(r1)
	  fsubs     f31, f0, f1
	  bl        0x5404
	  lfs       f0, -0x7580(r2)
	  lfs       f2, -0x757C(r2)
	  fdivs     f1, f1, f0
	  lfs       f0, -0x7584(r2)
	  fdivs     f1, f1, f2
	  fmuls     f31, f31, f1
	  stfs      f31, 0x4(r31)
	  lfs       f1, 0x4(r31)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0xF4
	  stfs      f0, 0x4(r31)

	.loc_0xF4:
	  lfs       f1, 0x4(r31)
	  lfs       f0, -0x7588(r2)
	  stfs      f1, 0x14(r31)
	  stfs      f0, 0xC(r31)
	  lbz       r0, 0x1D(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x12C
	  lfs       f2, 0xC(r31)
	  lfs       f1, 0x8(r31)
	  lfs       f0, 0x4(r31)
	  fsubs     f1, f2, f1
	  fdivs     f0, f1, f0
	  stfs      f0, 0x10(r31)
	  b         .loc_0x148

	.loc_0x12C:
	  lfs       f1, 0xC(r31)
	  lfs       f0, 0x8(r31)
	  fsubs     f0, f1, f0
	  stfs      f0, 0x10(r31)
	  b         .loc_0x148

	.loc_0x140:
	  li        r0, 0x3
	  stb       r0, 0x1C(r31)

	.loc_0x148:
	  li        r3, 0x1

	.loc_0x14C:
	  psq_l     f31,0x28(r1),0,0
	  lwz       r0, 0x34(r1)
	  lfd       f31, 0x20(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800A2E90
 * Size:	000374
 */
void JASOscillator::calc(const short*)
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
	  stmw      r27, 0x1C(r1)
	  lis       r5, 0x8048
	  lfs       f31, -0x7588(r2)
	  mr        r29, r3
	  mr        r30, r4
	  subi      r31, r5, 0x72C0
	  b         .loc_0x1A8

	.loc_0x38:
	  lhz       r0, 0x18(r29)
	  lfs       f0, 0xC(r29)
	  mulli     r3, r0, 0x3
	  stfs      f0, 0x8(r29)
	  lbz       r0, 0x1C(r29)
	  cmplwi    r0, 0x5
	  bne-      .loc_0x60
	  li        r0, 0
	  stb       r0, 0x1C(r29)
	  b         .loc_0x1B8

	.loc_0x60:
	  rlwinm    r0,r3,1,0,30
	  add       r3, r30, r0
	  lha       r4, 0x0(r3)
	  lha       r28, 0x2(r3)
	  cmpwi     r4, 0xD
	  lha       r27, 0x4(r3)
	  bne-      .loc_0x84
	  sth       r27, 0x18(r29)
	  b         .loc_0x1A8

	.loc_0x84:
	  cmpwi     r4, 0xF
	  bne-      .loc_0x98
	  li        r0, 0
	  stb       r0, 0x1C(r29)
	  b         .loc_0x1B8

	.loc_0x98:
	  cmpwi     r4, 0xE
	  bne-      .loc_0xC0
	  li        r0, 0x2
	  stb       r0, 0x1C(r29)
	  lwz       r3, 0x0(r29)
	  lfs       f2, 0x8(r29)
	  lfs       f1, 0x10(r3)
	  lfs       f0, 0x14(r3)
	  fmadds    f1, f2, f1, f0
	  b         .loc_0x350

	.loc_0xC0:
	  extsh.    r0, r28
	  stb       r4, 0x1D(r29)
	  bne-      .loc_0x104
	  xoris     r3, r27, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0xC(r1)
	  lfd       f2, -0x7578(r2)
	  stw       r0, 0x8(r1)
	  lfs       f0, -0x7570(r2)
	  lfd       f1, 0x8(r1)
	  fsubs     f1, f1, f2
	  fdivs     f0, f1, f0
	  stfs      f0, 0xC(r29)
	  lhz       r3, 0x18(r29)
	  addi      r0, r3, 0x1
	  sth       r0, 0x18(r29)
	  b         .loc_0x1A8

	.loc_0x104:
	  bl        0x525C
	  lfs       f0, -0x7580(r2)
	  lis       r3, 0x4330
	  xoris     r0, r27, 0x8000
	  xoris     r4, r28, 0x8000
	  fdivs     f2, f1, f0
	  lfs       f1, -0x757C(r2)
	  stw       r0, 0x14(r1)
	  lfd       f3, -0x7578(r2)
	  stw       r3, 0x10(r1)
	  lfs       f0, -0x7570(r2)
	  fdivs     f4, f2, f1
	  lfd       f1, 0x10(r1)
	  stw       r4, 0xC(r1)
	  stw       r3, 0x8(r1)
	  lfd       f2, 0x8(r1)
	  fsubs     f1, f1, f3
	  fsubs     f2, f2, f3
	  fdivs     f0, f1, f0
	  fmuls     f1, f2, f4
	  stfs      f1, 0x4(r29)
	  lfs       f1, 0x4(r29)
	  stfs      f1, 0x14(r29)
	  stfs      f0, 0xC(r29)
	  lbz       r0, 0x1D(r29)
	  cmplwi    r0, 0
	  bne-      .loc_0x18C
	  lfs       f2, 0xC(r29)
	  lfs       f1, 0x8(r29)
	  lfs       f0, 0x4(r29)
	  fsubs     f1, f2, f1
	  fdivs     f0, f1, f0
	  stfs      f0, 0x10(r29)
	  b         .loc_0x19C

	.loc_0x18C:
	  lfs       f1, 0xC(r29)
	  lfs       f0, 0x8(r29)
	  fsubs     f0, f1, f0
	  stfs      f0, 0x10(r29)

	.loc_0x19C:
	  lhz       r3, 0x18(r29)
	  addi      r0, r3, 0x1
	  sth       r0, 0x18(r29)

	.loc_0x1A8:
	  lfs       f0, 0x4(r29)
	  fcmpo     cr0, f0, f31
	  cror      2, 0, 0x2
	  beq+      .loc_0x38

	.loc_0x1B8:
	  lwz       r3, 0x0(r29)
	  lfs       f1, -0x7588(r2)
	  lfs       f0, 0x10(r3)
	  fcmpu     cr0, f1, f0
	  bne-      .loc_0x1D4
	  lfs       f1, 0x14(r3)
	  b         .loc_0x350

	.loc_0x1D4:
	  lfd       f0, -0x7568(r2)
	  lfs       f2, 0x14(r29)
	  fcmpu     cr0, f0, f2
	  bne-      .loc_0x1F4
	  lfs       f0, 0xC(r29)
	  fmr       f2, f0
	  stfs      f0, 0x8(r29)
	  b         .loc_0x340

	.loc_0x1F4:
	  lbz       r0, 0x1D(r29)
	  cmplwi    r0, 0
	  beq-      .loc_0x20C
	  lfs       f31, 0x10(r29)
	  fcmpu     cr0, f1, f31
	  bne-      .loc_0x224

	.loc_0x20C:
	  lfs       f2, 0x10(r29)
	  lfs       f1, 0x4(r29)
	  lfs       f0, 0xC(r29)
	  fnmsubs   f2, f2, f1, f0
	  stfs      f2, 0x8(r29)
	  b         .loc_0x340

	.loc_0x224:
	  cmplwi    r0, 0x3
	  beq-      .loc_0x23C
	  cmplwi    r0, 0x1
	  beq-      .loc_0x23C
	  cmplwi    r0, 0x2
	  bne-      .loc_0x330

	.loc_0x23C:
	  cmpwi     r0, 0x2
	  li        r27, 0
	  beq-      .loc_0x270
	  bge-      .loc_0x258
	  cmpwi     r0, 0x1
	  bge-      .loc_0x268
	  b         .loc_0x274

	.loc_0x258:
	  cmpwi     r0, 0x4
	  bge-      .loc_0x274
	  addi      r27, r31, 0
	  b         .loc_0x274

	.loc_0x268:
	  addi      r27, r31, 0x88
	  b         .loc_0x274

	.loc_0x270:
	  addi      r27, r31, 0x44

	.loc_0x274:
	  lfs       f0, -0x7588(r2)
	  fcmpo     cr0, f31, f0
	  bge-      .loc_0x29C
	  lfs       f0, 0x4(r29)
	  lfs       f1, -0x7584(r2)
	  fdivs     f0, f0, f2
	  lfs       f2, -0x7560(r2)
	  fsubs     f0, f1, f0
	  fmuls     f30, f2, f0
	  b         .loc_0x2AC

	.loc_0x29C:
	  lfs       f0, 0x4(r29)
	  lfs       f1, -0x7560(r2)
	  fdivs     f0, f0, f2
	  fmuls     f30, f1, f0

	.loc_0x2AC:
	  fmr       f1, f30
	  bl        0x1EA0C
	  lis       r0, 0x4330
	  stw       r3, 0x14(r1)
	  lfd       f1, -0x7558(r2)
	  cmplwi    r3, 0x10
	  stw       r0, 0x10(r1)
	  lfd       f0, 0x10(r1)
	  fsubs     f0, f0, f1
	  fsubs     f4, f30, f0
	  blt-      .loc_0x2E0
	  li        r3, 0xF
	  lfs       f4, -0x7584(r2)

	.loc_0x2E0:
	  rlwinm    r0,r3,2,0,29
	  lfs       f3, 0x10(r29)
	  add       r3, r27, r0
	  lfs       f0, -0x7588(r2)
	  lfsx      f2, r27, r0
	  lfs       f1, 0x4(r3)
	  fcmpo     cr0, f3, f0
	  fsubs     f0, f1, f2
	  fmadds    f0, f4, f0, f2
	  fmuls     f0, f31, f0
	  fabs      f1, f0
	  bge-      .loc_0x31C
	  lfs       f0, 0xC(r29)
	  fadds     f2, f0, f1
	  b         .loc_0x328

	.loc_0x31C:
	  fsubs     f0, f3, f1
	  lfs       f1, 0xC(r29)
	  fsubs     f2, f1, f0

	.loc_0x328:
	  stfs      f2, 0x8(r29)
	  b         .loc_0x340

	.loc_0x330:
	  lfs       f1, 0x4(r29)
	  lfs       f0, 0xC(r29)
	  fnmsubs   f2, f31, f1, f0
	  stfs      f2, 0x8(r29)

	.loc_0x340:
	  lwz       r3, 0x0(r29)
	  lfs       f1, 0x10(r3)
	  lfs       f0, 0x14(r3)
	  fmadds    f1, f2, f1, f0

	.loc_0x350:
	  psq_l     f31,0x48(r1),0,0
	  lfd       f31, 0x40(r1)
	  psq_l     f30,0x38(r1),0,0
	  lfd       f30, 0x30(r1)
	  lmw       r27, 0x1C(r1)
	  lwz       r0, 0x54(r1)
	  mtlr      r0
	  addi      r1, r1, 0x50
	  blr
	*/
}
