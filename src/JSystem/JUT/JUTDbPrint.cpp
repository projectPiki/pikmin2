#include "types.h"

/*
 * --INFO--
 * Address:	........
 * Size:	000048
 */
JUTDbPrint::JUTDbPrint(JUTFont*, JKRHeap*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000050
 */
JUTDbPrint::~JUTDbPrint()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800294D4
 * Size:	0000AC
 */
void JUTDbPrint::start(JUTFont*, JKRHeap*)
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
	  lwz       r0, -0x7780(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x90
	  cmplwi    r31, 0
	  bne-      .loc_0x34
	  lwz       r31, -0x77D4(r13)

	.loc_0x34:
	  li        r3, 0x14
	  bl        -0x5668
	  cmplwi    r3, 0
	  beq-      .loc_0x8C
	  li        r0, -0x1
	  cmplwi    r31, 0
	  stw       r0, 0x8(r3)
	  li        r0, 0
	  stw       r30, 0x4(r3)
	  stw       r0, 0x0(r3)
	  beq-      .loc_0x68
	  mr        r0, r31
	  b         .loc_0x6C

	.loc_0x68:
	  lwz       r0, -0x77D4(r13)

	.loc_0x6C:
	  stw       r0, 0x10(r3)
	  li        r4, 0xFF
	  li        r0, 0x1
	  stb       r4, 0x8(r3)
	  stb       r4, 0x9(r3)
	  stb       r4, 0xA(r3)
	  stb       r4, 0xB(r3)
	  stb       r0, 0xC(r3)

	.loc_0x8C:
	  stw       r3, -0x7780(r13)

	.loc_0x90:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  lwz       r3, -0x7780(r13)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80029580
 * Size:	000018
 */
void JUTDbPrint::changeFont(JUTFont*)
{
	/*
	.loc_0x0:
	  cmplwi    r4, 0
	  lwz       r0, 0x4(r3)
	  beq-      .loc_0x10
	  stw       r4, 0x4(r3)

	.loc_0x10:
	  mr        r3, r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000080
 */
void JUTDbPrint::enter(int, int, int, const char*, int)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000128
 */
void JUTDbPrint::print(int, int, const char*, ...)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000128
 */
void JUTDbPrint::print(int, int, int, const char*, ...)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000058
 */
void JUTDbPrint::reset()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80029598
 * Size:	000038
 */
void JUTDbPrint::flush()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r4, 0
	  li        r5, 0
	  stw       r0, 0x14(r1)
	  lwz       r6, -0x76E0(r13)
	  lwz       r6, 0x4(r6)
	  lhz       r7, 0x6(r6)
	  lhz       r6, 0x4(r6)
	  bl        .loc_0x38
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr

	.loc_0x38:
	*/
}

/*
 * --INFO--
 * Address:	800295D0
 * Size:	000174
 */
void JUTDbPrint::flush(int, int, int, int)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x110(r1)
	  mflr      r0
	  stw       r0, 0x114(r1)
	  stw       r31, 0x10C(r1)
	  stw       r30, 0x108(r1)
	  stw       r29, 0x104(r1)
	  stw       r28, 0x100(r1)
	  mr        r28, r3
	  mr        r31, r28
	  lwz       r0, 0x4(r3)
	  lwz       r30, 0x0(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x154
	  cmplwi    r30, 0
	  beq-      .loc_0x154
	  lis       r8, 0x4330
	  xoris     r3, r4, 0x8000
	  xoris     r5, r5, 0x8000
	  xoris     r4, r6, 0x8000
	  xoris     r0, r7, 0x8000
	  stw       r3, 0xE4(r1)
	  lfd       f4, -0x7DB8(r2)
	  addi      r3, r1, 0xC
	  stw       r8, 0xE0(r1)
	  lfs       f5, -0x7DC0(r2)
	  lfd       f0, 0xE0(r1)
	  stw       r5, 0xEC(r1)
	  fsubs     f1, f0, f4
	  lfs       f6, -0x7DBC(r2)
	  stw       r8, 0xE8(r1)
	  lfd       f0, 0xE8(r1)
	  stw       r4, 0xF4(r1)
	  fsubs     f2, f0, f4
	  stw       r8, 0xF0(r1)
	  lfd       f0, 0xF0(r1)
	  stw       r0, 0xFC(r1)
	  fsubs     f3, f0, f4
	  stw       r8, 0xF8(r1)
	  lfd       f0, 0xF8(r1)
	  fsubs     f4, f0, f4
	  bl        0xBF68
	  addi      r3, r1, 0xC
	  bl        0xC044
	  lwz       r3, 0x4(r28)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x8(r28)
	  addi      r4, r1, 0x8
	  stw       r0, 0x8(r1)
	  lwz       r3, 0x4(r28)
	  bl        0x3B1C
	  b         .loc_0x134

	.loc_0xD8:
	  lbz       r0, 0xC(r28)
	  cmplwi    r0, 0
	  beq-      .loc_0xFC
	  lha       r4, 0x4(r30)
	  mr        r3, r28
	  lha       r5, 0x6(r30)
	  addi      r7, r30, 0xC
	  lha       r6, 0xA(r30)
	  bl        .loc_0x174

	.loc_0xFC:
	  lha       r3, 0x8(r30)
	  subi      r3, r3, 0x1
	  extsh.    r0, r3
	  sth       r3, 0x8(r30)
	  bgt-      .loc_0x12C
	  lwz       r29, 0x0(r30)
	  mr        r3, r30
	  lwz       r4, 0x10(r28)
	  bl        -0x6080
	  stw       r29, 0x0(r31)
	  mr        r30, r29
	  b         .loc_0x134

	.loc_0x12C:
	  mr        r31, r30
	  lwz       r30, 0x0(r30)

	.loc_0x134:
	  cmplwi    r30, 0
	  bne+      .loc_0xD8
	  lis       r4, 0x804A
	  lis       r3, 0x804A
	  addi      r0, r4, 0x600
	  stw       r0, 0xC(r1)
	  addi      r0, r3, 0x650
	  stw       r0, 0xC(r1)

	.loc_0x154:
	  lwz       r0, 0x114(r1)
	  lwz       r31, 0x10C(r1)
	  lwz       r30, 0x108(r1)
	  lwz       r29, 0x104(r1)
	  lwz       r28, 0x100(r1)
	  mtlr      r0
	  addi      r1, r1, 0x110
	  blr

	.loc_0x174:
	*/
}

/*
 * --INFO--
 * Address:	80029744
 * Size:	0000E8
 */
void JUTDbPrint::drawString(int, int, int, const unsigned char*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x50(r1)
	  mflr      r0
	  stw       r0, 0x54(r1)
	  stfd      f31, 0x40(r1)
	  psq_st    f31,0x48(r1),0,0
	  stmw      r27, 0x2C(r1)
	  lwz       r31, 0x4(r3)
	  mr        r27, r4
	  mr        r28, r5
	  mr        r29, r6
	  mr        r3, r31
	  mr        r30, r7
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  xoris     r4, r3, 0x8000
	  lis       r0, 0x4330
	  mr        r3, r31
	  stw       r4, 0xC(r1)
	  lwz       r12, 0x0(r31)
	  stw       r0, 0x8(r1)
	  lfd       f1, -0x7DB8(r2)
	  lfd       f0, 0x8(r1)
	  lwz       r12, 0x28(r12)
	  fsubs     f31, f0, f1
	  mtctr     r12
	  bctrl
	  lis       r7, 0x4330
	  xoris     r0, r3, 0x8000
	  stw       r0, 0x14(r1)
	  xoris     r6, r27, 0x8000
	  xoris     r0, r28, 0x8000
	  lfd       f2, -0x7DB8(r2)
	  stw       r7, 0x10(r1)
	  fmr       f4, f31
	  mr        r3, r31
	  mr        r4, r30
	  lfd       f0, 0x10(r1)
	  mr        r5, r29
	  stw       r6, 0x1C(r1)
	  fsubs     f3, f0, f2
	  li        r6, 0x1
	  stw       r7, 0x18(r1)
	  lfd       f0, 0x18(r1)
	  stw       r0, 0x24(r1)
	  fsubs     f1, f0, f2
	  stw       r7, 0x20(r1)
	  lfd       f0, 0x20(r1)
	  fsubs     f2, f0, f2
	  bl        0x3A68
	  psq_l     f31,0x48(r1),0,0
	  lfd       f31, 0x40(r1)
	  lmw       r27, 0x2C(r1)
	  lwz       r0, 0x54(r1)
	  mtlr      r0
	  addi      r1, r1, 0x50
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000124
 */
void JUTReport(int, int, const char*, ...)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000128
 */
void JUTReport(int, int, int, const char*, ...)
{
	// UNUSED FUNCTION
}
