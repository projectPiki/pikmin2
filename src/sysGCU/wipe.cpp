#include "types.h"

/*
 * --INFO--
 * Address:	8042BD0C
 * Size:	00005C
 */
WipeBase::WipeBase()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x1A990
	  lis       r3, 0x804F
	  lfs       f1, 0x2288(r2)
	  subi      r0, r3, 0x407C
	  lfs       f0, 0x228C(r2)
	  stw       r0, 0x0(r31)
	  li        r4, 0
	  li        r0, 0x1
	  mr        r3, r31
	  stfs      f1, 0x18(r31)
	  stfs      f0, 0x1C(r31)
	  stb       r4, 0x20(r31)
	  stb       r0, 0x21(r31)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8042BD68
 * Size:	000040
 */
void WipeBase::start(float)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, 0x2288(r2)
	  stw       r0, 0x14(r1)
	  li        r0, 0x1
	  stfs      f0, 0x18(r3)
	  stfs      f1, 0x1C(r3)
	  stb       r0, 0x20(r3)
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
 * Address:	8042BDA8
 * Size:	000004
 */
void WipeBase::on_start() { }

/*
 * --INFO--
 * Address:	8042BDAC
 * Size:	000078
 */
void WipeBase::update()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lbz       r0, 0x20(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x64
	  lwz       r3, -0x6514(r13)
	  lfs       f0, 0x1C(r31)
	  lfs       f1, 0x54(r3)
	  lfs       f2, 0x18(r31)
	  fdivs     f1, f1, f0
	  lfs       f0, 0x228C(r2)
	  fadds     f1, f2, f1
	  stfs      f1, 0x18(r31)
	  lfs       f1, 0x18(r31)
	  fcmpo     cr0, f1, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x64
	  stfs      f0, 0x18(r31)

	.loc_0x64:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8042BE24
 * Size:	000060
 */
void WipeBase::draw()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lbz       r0, 0x20(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x4C
	  lwz       r12, 0x0(r3)
	  lfs       f1, 0x18(r31)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  lfs       f1, 0x228C(r2)
	  lfs       f0, 0x18(r31)
	  fcmpu     cr0, f1, f0
	  bne-      .loc_0x4C
	  li        r0, 0
	  stb       r0, 0x20(r31)

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
 * Address:	8042BE84
 * Size:	000004
 */
void WipeBase::do_draw(float) { }

/*
 * --INFO--
 * Address:	8042BE88
 * Size:	000018
 */
void WipeInFader::isWhite()
{
	/*
	.loc_0x0:
	  lfs       f1, 0x18(r3)
	  lfs       f0, 0x2290(r2)
	  fcmpo     cr0, f1, f0
	  mfcr      r0
	  rlwinm    r3,r0,2,31,31
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8042BEA0
 * Size:	000018
 */
void WipeInFader::isBlack()
{
	/*
	.loc_0x0:
	  lfs       f1, 0x18(r3)
	  lfs       f0, 0x2290(r2)
	  fcmpo     cr0, f1, f0
	  mfcr      r0
	  rlwinm    r3,r0,1,31,31
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8042BEB8
 * Size:	000078
 */
WipeInFader::WipeInFader()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x1AB3C
	  lis       r4, 0x804F
	  lis       r3, 0x804F
	  subi      r0, r4, 0x407C
	  lfs       f1, 0x2288(r2)
	  stw       r0, 0x0(r31)
	  li        r5, 0
	  lfs       f0, 0x228C(r2)
	  li        r4, 0x1
	  stfs      f1, 0x18(r31)
	  subi      r0, r3, 0x40A4
	  mr        r3, r31
	  stfs      f0, 0x1C(r31)
	  stb       r5, 0x20(r31)
	  stb       r4, 0x21(r31)
	  stw       r0, 0x0(r31)
	  stb       r5, 0x24(r31)
	  stb       r5, 0x25(r31)
	  stb       r5, 0x26(r31)
	  stb       r5, 0x27(r31)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8042BF30
 * Size:	000144
 */
void WipeInFader::do_draw(float)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x60(r1)
	  mflr      r0
	  stw       r0, 0x64(r1)
	  stfd      f31, 0x50(r1)
	  psq_st    f31,0x58(r1),0,0
	  stw       r31, 0x4C(r1)
	  stw       r30, 0x48(r1)
	  lwz       r4, -0x6514(r13)
	  mr        r30, r3
	  fmr       f31, f1
	  lwz       r31, 0x24(r4)
	  addi      r3, r31, 0xBC
	  lwz       r12, 0xBC(r31)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lfs       f0, 0x2294(r2)
	  addi      r31, r31, 0xBC
	  fcmpo     cr0, f31, f0
	  bge-      .loc_0x58
	  lfs       f1, 0x2288(r2)
	  b         .loc_0x64

	.loc_0x58:
	  fsubs     f1, f31, f0
	  lfs       f0, 0x2298(r2)
	  fdivs     f1, f1, f0

	.loc_0x64:
	  lfs       f0, 0x229C(r2)
	  mr        r3, r31
	  lbz       r0, 0x26(r30)
	  addi      r4, r1, 0x8
	  fmuls     f0, f0, f1
	  lbz       r6, 0x24(r30)
	  lbz       r7, 0x25(r30)
	  addi      r5, r1, 0xC
	  stb       r6, 0x18(r1)
	  addi      r6, r1, 0x10
	  fctiwz    f0, f0
	  stb       r7, 0x19(r1)
	  addi      r7, r1, 0x14
	  stb       r0, 0x1A(r1)
	  stfd      f0, 0x30(r1)
	  lwz       r0, 0x34(r1)
	  subfic    r0, r0, 0xFF
	  stb       r0, 0x1B(r1)
	  lwz       r0, 0x18(r1)
	  stw       r0, 0x14(r1)
	  stw       r0, 0x10(r1)
	  stw       r0, 0xC(r1)
	  stw       r0, 0x8(r1)
	  bl        -0x3F5964
	  bl        -0x8DD0
	  lhz       r30, 0x6(r3)
	  bl        -0x8DD8
	  lhz       r4, 0x4(r3)
	  lis       r0, 0x4330
	  lfs       f3, 0x2288(r2)
	  mr        r3, r31
	  stw       r4, 0x3C(r1)
	  addi      r4, r1, 0x1C
	  lfd       f2, 0x22A0(r2)
	  stw       r0, 0x38(r1)
	  lfd       f0, 0x38(r1)
	  stw       r30, 0x44(r1)
	  fsubs     f1, f0, f2
	  stw       r0, 0x40(r1)
	  lfd       f0, 0x40(r1)
	  fadds     f1, f3, f1
	  stfs      f3, 0x1C(r1)
	  fsubs     f0, f0, f2
	  stfs      f3, 0x20(r1)
	  fadds     f0, f3, f0
	  stfs      f1, 0x24(r1)
	  stfs      f0, 0x28(r1)
	  bl        -0x3F587C
	  psq_l     f31,0x58(r1),0,0
	  lwz       r0, 0x64(r1)
	  lfd       f31, 0x50(r1)
	  lwz       r31, 0x4C(r1)
	  lwz       r30, 0x48(r1)
	  mtlr      r0
	  addi      r1, r1, 0x60
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8042C074
 * Size:	000078
 */
WipeOutFader::WipeOutFader()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x1ACF8
	  lis       r4, 0x804F
	  lis       r3, 0x804F
	  subi      r0, r4, 0x407C
	  lfs       f1, 0x2288(r2)
	  stw       r0, 0x0(r31)
	  li        r5, 0
	  lfs       f0, 0x228C(r2)
	  li        r4, 0x1
	  stfs      f1, 0x18(r31)
	  subi      r0, r3, 0x40CC
	  mr        r3, r31
	  stfs      f0, 0x1C(r31)
	  stb       r5, 0x20(r31)
	  stb       r4, 0x21(r31)
	  stw       r0, 0x0(r31)
	  stb       r5, 0x24(r31)
	  stb       r5, 0x25(r31)
	  stb       r5, 0x26(r31)
	  stb       r5, 0x27(r31)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8042C0EC
 * Size:	000004
 */
void WipeOutFader::on_start() { }

/*
 * --INFO--
 * Address:	8042C0F0
 * Size:	000018
 */
void WipeOutFader::isWhite()
{
	/*
	.loc_0x0:
	  lfs       f1, 0x18(r3)
	  lfs       f0, 0x2290(r2)
	  fcmpo     cr0, f1, f0
	  mfcr      r0
	  rlwinm    r3,r0,1,31,31
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8042C108
 * Size:	000018
 */
void WipeOutFader::isBlack()
{
	/*
	.loc_0x0:
	  lfs       f1, 0x18(r3)
	  lfs       f0, 0x2290(r2)
	  fcmpo     cr0, f1, f0
	  mfcr      r0
	  rlwinm    r3,r0,2,31,31
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8042C120
 * Size:	000138
 */
void WipeOutFader::do_draw(float)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x60(r1)
	  mflr      r0
	  stw       r0, 0x64(r1)
	  stfd      f31, 0x50(r1)
	  psq_st    f31,0x58(r1),0,0
	  stw       r31, 0x4C(r1)
	  stw       r30, 0x48(r1)
	  lfs       f0, 0x2298(r2)
	  mr        r30, r3
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x34
	  lfs       f31, 0x228C(r2)
	  b         .loc_0x3C

	.loc_0x34:
	  lfs       f0, 0x22A8(r2)
	  fmuls     f31, f0, f1

	.loc_0x3C:
	  lwz       r3, -0x6514(r13)
	  lwz       r31, 0x24(r3)
	  addi      r3, r31, 0xBC
	  lwz       r12, 0xBC(r31)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lfs       f0, 0x229C(r2)
	  addi      r31, r31, 0xBC
	  lbz       r0, 0x26(r30)
	  mr        r3, r31
	  fmuls     f0, f0, f31
	  lbz       r5, 0x24(r30)
	  lbz       r6, 0x25(r30)
	  addi      r4, r1, 0x8
	  stb       r5, 0x18(r1)
	  addi      r5, r1, 0xC
	  fctiwz    f0, f0
	  stb       r6, 0x19(r1)
	  addi      r6, r1, 0x10
	  addi      r7, r1, 0x14
	  stb       r0, 0x1A(r1)
	  stfd      f0, 0x30(r1)
	  lwz       r0, 0x34(r1)
	  stb       r0, 0x1B(r1)
	  lwz       r0, 0x18(r1)
	  stw       r0, 0x14(r1)
	  stw       r0, 0x10(r1)
	  stw       r0, 0xC(r1)
	  stw       r0, 0x8(r1)
	  bl        -0x3F5B48
	  bl        -0x8FB4
	  lhz       r30, 0x6(r3)
	  bl        -0x8FBC
	  lhz       r4, 0x4(r3)
	  lis       r0, 0x4330
	  lfs       f3, 0x2288(r2)
	  mr        r3, r31
	  stw       r4, 0x3C(r1)
	  addi      r4, r1, 0x1C
	  lfd       f2, 0x22A0(r2)
	  stw       r0, 0x38(r1)
	  lfd       f0, 0x38(r1)
	  stw       r30, 0x44(r1)
	  fsubs     f1, f0, f2
	  stw       r0, 0x40(r1)
	  lfd       f0, 0x40(r1)
	  fadds     f1, f3, f1
	  stfs      f3, 0x1C(r1)
	  fsubs     f0, f0, f2
	  stfs      f3, 0x20(r1)
	  fadds     f0, f3, f0
	  stfs      f1, 0x24(r1)
	  stfs      f0, 0x28(r1)
	  bl        -0x3F5A60
	  psq_l     f31,0x58(r1),0,0
	  lwz       r0, 0x64(r1)
	  lfd       f31, 0x50(r1)
	  lwz       r31, 0x4C(r1)
	  lwz       r30, 0x48(r1)
	  mtlr      r0
	  addi      r1, r1, 0x60
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8042C258
 * Size:	000050
 */
void WipeOutInFader::on_start()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f1, 0x2288(r2)
	  mr        r4, r3
	  stw       r0, 0x14(r1)
	  li        r0, 0x1
	  lfs       f0, 0x22AC(r2)
	  stb       r0, 0x74(r3)
	  addi      r3, r4, 0x24
	  stfs      f1, 0x3C(r4)
	  stfs      f0, 0x40(r4)
	  stb       r0, 0x44(r4)
	  lwz       r12, 0x24(r4)
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
 * Address:	8042C2A8
 * Size:	00003C
 */
void WipeOutInFader::isWhite()
{
	/*
	.loc_0x0:
	  lbz       r0, 0x74(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x24
	  lfs       f1, 0x18(r3)
	  lfs       f0, 0x2290(r2)
	  fcmpo     cr0, f1, f0
	  mfcr      r0
	  rlwinm    r3,r0,1,31,31
	  blr

	.loc_0x24:
	  lfs       f1, 0x18(r3)
	  lfs       f0, 0x2290(r2)
	  fcmpo     cr0, f1, f0
	  mfcr      r0
	  rlwinm    r3,r0,2,31,31
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8042C2E4
 * Size:	000038
 */
void WipeOutInFader::isBlack()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  rlwinm    r0,r3,0,24,31
	  cntlzw    r0, r0
	  rlwinm    r3,r0,27,5,31
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8042C31C
 * Size:	0000A8
 */
void WipeOutInFader::do_draw(float)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lbz       r0, 0x74(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x80
	  lbz       r0, 0x44(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x68
	  li        r0, 0
	  lfs       f1, 0x22AC(r2)
	  stb       r0, 0x74(r31)
	  li        r0, 0x1
	  lfs       f0, 0x2288(r2)
	  addi      r3, r31, 0x4C
	  lfs       f2, 0x1C(r31)
	  fsubs     f1, f2, f1
	  stfs      f0, 0x64(r31)
	  stfs      f1, 0x68(r31)
	  stb       r0, 0x6C(r31)
	  lwz       r12, 0x4C(r31)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl

	.loc_0x68:
	  addi      r3, r31, 0x24
	  lwz       r12, 0x24(r31)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x94

	.loc_0x80:
	  addi      r3, r31, 0x4C
	  lwz       r12, 0x4C(r31)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl

	.loc_0x94:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8042C3C4
 * Size:	00007C
 */
BlackFader::BlackFader()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x1B048
	  lis       r4, 0x804F
	  lis       r3, 0x804F
	  subi      r0, r4, 0x407C
	  lfs       f1, 0x2288(r2)
	  stw       r0, 0x0(r31)
	  li        r5, 0
	  lfs       f0, 0x228C(r2)
	  li        r4, 0x1
	  stfs      f1, 0x18(r31)
	  subi      r0, r3, 0x411C
	  mr        r3, r31
	  stfs      f0, 0x1C(r31)
	  stb       r5, 0x20(r31)
	  stb       r4, 0x21(r31)
	  stw       r0, 0x0(r31)
	  stb       r5, 0x24(r31)
	  stb       r5, 0x25(r31)
	  stb       r5, 0x26(r31)
	  stb       r5, 0x27(r31)
	  stb       r4, 0x28(r31)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8042C440
 * Size:	000010
 */
void BlackFader::isWhite()
{
	/*
	.loc_0x0:
	  lbz       r0, 0x28(r3)
	  cntlzw    r0, r0
	  rlwinm    r3,r0,27,5,31
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8042C450
 * Size:	000008
 */
void BlackFader::isBlack()
{
	/*
	.loc_0x0:
	  lbz       r3, 0x28(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8042C458
 * Size:	000120
 */
void BlackFader::do_draw(float)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x50(r1)
	  mflr      r0
	  stw       r0, 0x54(r1)
	  stw       r31, 0x4C(r1)
	  stw       r30, 0x48(r1)
	  mr        r30, r3
	  lwz       r4, -0x6514(r13)
	  lwz       r31, 0x24(r4)
	  lwz       r12, 0xBC(r31)
	  addi      r3, r31, 0xBC
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lbz       r0, 0x28(r30)
	  li        r3, 0xFF
	  lbz       r4, 0x24(r30)
	  addi      r31, r31, 0xBC
	  lbz       r5, 0x25(r30)
	  cmplwi    r0, 0
	  lbz       r6, 0x26(r30)
	  stb       r4, 0x1C(r1)
	  stb       r5, 0x1D(r1)
	  stb       r6, 0x1E(r1)
	  stb       r3, 0x1F(r1)
	  bne-      .loc_0x78
	  li        r0, 0
	  stb       r4, 0x1C(r1)
	  stb       r5, 0x1D(r1)
	  stb       r6, 0x1E(r1)
	  stb       r0, 0x1F(r1)

	.loc_0x78:
	  lwz       r0, 0x1C(r1)
	  mr        r3, r31
	  addi      r4, r1, 0xC
	  addi      r5, r1, 0x10
	  stw       r0, 0x8(r1)
	  addi      r6, r1, 0x14
	  addi      r7, r1, 0x18
	  stw       r0, 0x18(r1)
	  stw       r0, 0x14(r1)
	  stw       r0, 0x10(r1)
	  stw       r0, 0xC(r1)
	  bl        -0x3F5E70
	  bl        -0x92DC
	  lhz       r30, 0x6(r3)
	  bl        -0x92E4
	  lhz       r4, 0x4(r3)
	  lis       r0, 0x4330
	  lfs       f3, 0x2288(r2)
	  mr        r3, r31
	  stw       r4, 0x34(r1)
	  addi      r4, r1, 0x20
	  lfd       f2, 0x22A0(r2)
	  stw       r0, 0x30(r1)
	  lfd       f0, 0x30(r1)
	  stw       r30, 0x3C(r1)
	  fsubs     f1, f0, f2
	  stw       r0, 0x38(r1)
	  lfd       f0, 0x38(r1)
	  fadds     f1, f3, f1
	  stfs      f3, 0x20(r1)
	  fsubs     f0, f0, f2
	  stfs      f3, 0x24(r1)
	  fadds     f0, f3, f0
	  stfs      f1, 0x28(r1)
	  stfs      f0, 0x2C(r1)
	  bl        -0x3F5D88
	  lwz       r0, 0x54(r1)
	  lwz       r31, 0x4C(r1)
	  lwz       r30, 0x48(r1)
	  mtlr      r0
	  addi      r1, r1, 0x50
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000164
 */
BallFader::BallFader(int)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000004
 */
BallFader::Ball::Ball(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000058
 */
void BallFader::on_start()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000050
 */
void BallFader::do_draw(float)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000048
 */
void BallFader::computeForces()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000180
 */
void BallFader::emitBalls(float)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00017C
 */
void drawBall(Graphics&, Vector2<float>, float)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000334
 */
void drawBall2(Graphics&, Vector2<float>, float)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000B0
 */
void BallFader::drawAll()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000A8
 */
void BallFader::simulate()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000324
 */
void BallFader::resolveCollision()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000048
 */
void BallFader::birth()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000070
 */
BallFader::~BallFader()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8042C578
 * Size:	000008
 */
u32 WipeBase::isWhite() { return 0x0; }

/*
 * --INFO--
 * Address:	8042C580
 * Size:	000008
 */
u32 WipeBase::isBlack() { return 0x0; }

/*
 * --INFO--
 * Address:	8042C588
 * Size:	000070
 */
BlackFader::~BlackFader()
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
	  subi      r0, r4, 0x411C
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x44
	  lis       r5, 0x804F
	  li        r4, 0
	  subi      r0, r5, 0x407C
	  stw       r0, 0x0(r30)
	  bl        -0x1B040

	.loc_0x44:
	  extsh.    r0, r31
	  ble-      .loc_0x54
	  mr        r3, r30
	  bl        -0x408524

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
 * Address:	8042C5F8
 * Size:	0000E0
 */
WipeOutInFader::~WipeOutInFader()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr.       r31, r3
	  stw       r30, 0x8(r1)
	  mr        r30, r4
	  beq-      .loc_0xC4
	  lis       r3, 0x804F
	  addic.    r0, r31, 0x4C
	  subi      r0, r3, 0x40F4
	  stw       r0, 0x0(r31)
	  beq-      .loc_0x60
	  lis       r3, 0x804F
	  addic.    r0, r31, 0x4C
	  subi      r0, r3, 0x40A4
	  stw       r0, 0x4C(r31)
	  beq-      .loc_0x60
	  lis       r4, 0x804F
	  addi      r3, r31, 0x4C
	  subi      r0, r4, 0x407C
	  li        r4, 0
	  stw       r0, 0x4C(r31)
	  bl        -0x1B0CC

	.loc_0x60:
	  addic.    r0, r31, 0x24
	  beq-      .loc_0x94
	  lis       r3, 0x804F
	  addic.    r0, r31, 0x24
	  subi      r0, r3, 0x40CC
	  stw       r0, 0x24(r31)
	  beq-      .loc_0x94
	  lis       r4, 0x804F
	  addi      r3, r31, 0x24
	  subi      r0, r4, 0x407C
	  li        r4, 0
	  stw       r0, 0x24(r31)
	  bl        -0x1B100

	.loc_0x94:
	  cmplwi    r31, 0
	  beq-      .loc_0xB4
	  lis       r4, 0x804F
	  mr        r3, r31
	  subi      r0, r4, 0x407C
	  li        r4, 0
	  stw       r0, 0x0(r31)
	  bl        -0x1B120

	.loc_0xB4:
	  extsh.    r0, r30
	  ble-      .loc_0xC4
	  mr        r3, r31
	  bl        -0x408604

	.loc_0xC4:
	  lwz       r0, 0x14(r1)
	  mr        r3, r31
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8042C6D8
 * Size:	000028
 */
void __sinit_wipe_cpp(void)
{
	/*
	.loc_0x0:
	  lis       r4, 0x8051
	  li        r0, -0x1
	  lfs       f0, 0x48B0(r4)
	  lis       r3, 0x804F
	  stw       r0, -0x64C0(r13)
	  stfsu     f0, -0x4128(r3)
	  stfs      f0, -0x64BC(r13)
	  stfs      f0, 0x4(r3)
	  stfs      f0, 0x8(r3)
	  blr
	*/
}
