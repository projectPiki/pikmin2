#include "types.h"

/*
 * --INFO--
 * Address:	80027DC0
 * Size:	000004
 */
void JUTAssertion::create() { }

/*
 * --INFO--
 * Address:	........
 * Size:	00003C
 */
void JUTAssertion::flush_subroutine()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80027DC4
 * Size:	0000EC
 */
void JUTAssertion::flushMessage()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  lwz       r3, -0x7798(r13)
	  cmplwi    r3, 0
	  bne-      .loc_0x24
	  li        r0, 0
	  b         .loc_0x48

	.loc_0x24:
	  addis     r0, r3, 0x1
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0x38
	  subi      r0, r3, 0x1
	  stw       r0, -0x7798(r13)

	.loc_0x38:
	  lwz       r0, -0x7798(r13)
	  cmplwi    r0, 0x5
	  bge-      .loc_0x48
	  li        r0, 0

	.loc_0x48:
	  cmplwi    r0, 0
	  beq-      .loc_0xD8
	  lbz       r0, -0x7FD8(r13)
	  cmplwi    r0, 0x1
	  bne-      .loc_0xD8
	  li        r5, 0xFF
	  li        r0, 0xC8
	  lwz       r31, -0x7778(r13)
	  addi      r4, r1, 0x10
	  stb       r5, 0xC(r1)
	  lwz       r6, 0x18(r31)
	  mr        r3, r31
	  stb       r0, 0xD(r1)
	  stb       r0, 0xE(r1)
	  stb       r5, 0xF(r1)
	  lwz       r0, 0xC(r1)
	  stw       r6, 0x14(r1)
	  stw       r0, 0x10(r1)
	  bl        0x230C
	  lis       r4, 0x804F
	  mr        r3, r31
	  subi      r6, r4, 0x38
	  li        r5, 0x10
	  li        r4, 0x10
	  bl        0x2154
	  lis       r4, 0x804F
	  mr        r3, r31
	  addi      r6, r4, 0x8
	  li        r5, 0x18
	  li        r4, 0x10
	  bl        0x213C
	  lwz       r0, 0x14(r1)
	  mr        r3, r31
	  addi      r4, r1, 0x8
	  stw       r0, 0x8(r1)
	  bl        0x22C8

	.loc_0xD8:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80027EB0
 * Size:	000214
 */
void JUTAssertion::flushMessage_dbPrint()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x50(r1)
	  mflr      r0
	  stw       r0, 0x54(r1)
	  stfd      f31, 0x40(r1)
	  psq_st    f31,0x48(r1),0,0
	  stw       r31, 0x3C(r1)
	  stw       r30, 0x38(r1)
	  lwz       r3, -0x7798(r13)
	  cmplwi    r3, 0
	  bne-      .loc_0x30
	  li        r0, 0
	  b         .loc_0x54

	.loc_0x30:
	  addis     r0, r3, 0x1
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0x44
	  subi      r0, r3, 0x1
	  stw       r0, -0x7798(r13)

	.loc_0x44:
	  lwz       r0, -0x7798(r13)
	  cmplwi    r0, 0x5
	  bge-      .loc_0x54
	  li        r0, 0

	.loc_0x54:
	  cmplwi    r0, 0
	  beq-      .loc_0x1F4
	  lbz       r0, -0x7FD8(r13)
	  cmplwi    r0, 0x1
	  bne-      .loc_0x1F4
	  lwz       r3, -0x7780(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x1F4
	  lwz       r31, 0x4(r3)
	  cmplwi    r31, 0
	  beq-      .loc_0x1F4
	  bl        0xAA214
	  lwz       r12, 0x0(r31)
	  rlwinm    r0,r3,2,24,27
	  ori       r0, r0, 0xF
	  mr        r3, r31
	  lwz       r12, 0xC(r12)
	  rlwinm    r30,r0,0,24,31
	  mtctr     r12
	  bctrl
	  li        r0, 0xFF
	  stb       r30, 0x9(r1)
	  mr        r3, r31
	  addi      r4, r1, 0xC
	  stb       r0, 0x8(r1)
	  stb       r30, 0xA(r1)
	  stb       r0, 0xB(r1)
	  lwz       r0, 0x8(r1)
	  stw       r0, 0xC(r1)
	  bl        0x5244
	  lis       r3, 0x804F
	  subi      r3, r3, 0x38
	  bl        0xA298C
	  lwz       r12, 0x0(r31)
	  mr        r30, r3
	  mr        r3, r31
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  xoris     r4, r3, 0x8000
	  lis       r0, 0x4330
	  mr        r3, r31
	  stw       r4, 0x14(r1)
	  lwz       r12, 0x0(r31)
	  stw       r0, 0x10(r1)
	  lfd       f1, -0x7E00(r2)
	  lfd       f0, 0x10(r1)
	  lwz       r12, 0x28(r12)
	  fsubs     f31, f0, f1
	  mtctr     r12
	  bctrl
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x1C(r1)
	  lis       r3, 0x804F
	  subi      r4, r3, 0x38
	  lfd       f3, -0x7E00(r2)
	  stw       r0, 0x18(r1)
	  fmr       f4, f31
	  lfs       f1, -0x7E10(r2)
	  mr        r3, r31
	  lfd       f0, 0x18(r1)
	  mr        r5, r30
	  lfs       f2, -0x7E0C(r2)
	  fsubs     f3, f0, f3
	  li        r6, 0x1
	  bl        0x5268
	  lis       r3, 0x804F
	  addi      r3, r3, 0x8
	  bl        0xA28F8
	  lwz       r12, 0x0(r31)
	  mr        r30, r3
	  mr        r3, r31
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  xoris     r4, r3, 0x8000
	  lis       r0, 0x4330
	  mr        r3, r31
	  stw       r4, 0x24(r1)
	  lwz       r12, 0x0(r31)
	  stw       r0, 0x20(r1)
	  lfd       f1, -0x7E00(r2)
	  lfd       f0, 0x20(r1)
	  lwz       r12, 0x28(r12)
	  fsubs     f31, f0, f1
	  mtctr     r12
	  bctrl
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x2C(r1)
	  lis       r3, 0x804F
	  addi      r4, r3, 0x8
	  lfd       f3, -0x7E00(r2)
	  stw       r0, 0x28(r1)
	  fmr       f4, f31
	  lfs       f1, -0x7E10(r2)
	  mr        r3, r31
	  lfd       f0, 0x28(r1)
	  mr        r5, r30
	  lfs       f2, -0x7E08(r2)
	  fsubs     f3, f0, f3
	  li        r6, 0x1
	  bl        0x51D4

	.loc_0x1F4:
	  psq_l     f31,0x48(r1),0,0
	  lwz       r0, 0x54(r1)
	  lfd       f31, 0x40(r1)
	  lwz       r31, 0x3C(r1)
	  lwz       r30, 0x38(r1)
	  mtlr      r0
	  addi      r1, r1, 0x50
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void JUTAssertion::getSDevice()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000DC
 */
void JUTAssertion::setConfirmMessage(unsigned long, char*, int, bool,
                                     const char*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0001B0
 */
void showAssert_f_va(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000210
 */
void JUTAssertion::showAssert_f(unsigned long, const char*, int, const char*,
                                ...)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000030
 */
void JUTAssertion::checkAssert(unsigned long, char*, int, bool, const char*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000100
 */
void setWarningMessage_f_va(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000158
 */
void JUTAssertion::setWarningMessage_f(unsigned long, char*, int, const char*,
                                       ...)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000FC
 */
void setLogMessage_f_va(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000154
 */
void JUTAssertion::setLogMessage_f(unsigned long, char*, int, const char*, ...)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void JUTAssertion::changeDisplayTime(unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void JUTAssertion::changeDevice(unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void JUTAssertion::setVisible(bool)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void JUTAssertion::getVisible()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800280C4
 * Size:	000018
 */
void JUTAssertion::setMessageCount(int)
{
	/*
	.loc_0x0:
	  neg       r0, r3
	  orc       r0, r3, r0
	  srawi     r0, r0, 0x1F
	  andc      r0, r3, r0
	  stw       r0, -0x7798(r13)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void JUTAssertion::setDeviceSynchro(bool)
{
	// UNUSED FUNCTION
}
