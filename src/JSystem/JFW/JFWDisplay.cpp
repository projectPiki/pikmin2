#include "types.h"

/*
 * --INFO--
 * Address:	........
 * Size:	0000A0
 */
void JFWDisplay::ctor_subroutine(bool)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000E0
 */
JFWDisplay::JFWDisplay(JKRHeap*, JUTXfb::EXfbNumber, bool)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000D0
 */
JFWDisplay::JFWDisplay(void*, bool)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000E0
 */
JFWDisplay::JFWDisplay(void*, void*, bool)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000F0
 */
JFWDisplay::JFWDisplay(void*, void*, void*, bool)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80089AAC
 * Size:	00007C
 */
JFWDisplay::~JFWDisplay()
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
	  beq-      .loc_0x60
	  lis       r4, 0x804A
	  addi      r0, r4, 0x3080
	  stw       r0, 0x0(r30)
	  lwz       r0, -0x76E0(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0x40
	  li        r4, 0x2
	  bl        0xAF0

	.loc_0x40:
	  bl        -0x5A9C8
	  bl        -0x55D38
	  li        r3, 0
	  extsh.    r0, r31
	  stw       r3, 0x10(r30)
	  ble-      .loc_0x60
	  mr        r3, r30
	  bl        -0x65A54

	.loc_0x60:
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
 * Address:	80089B28
 * Size:	00011C
 */
void JFWDisplay::createManager(const _GXRenderModeObj*, JKRHeap*,
                               JUTXfb::EXfbNumber, bool)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  mr.       r0, r3
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  mr        r30, r6
	  stw       r29, 0x14(r1)
	  mr        r29, r5
	  stw       r28, 0x10(r1)
	  mr        r28, r4
	  beq-      .loc_0x3C
	  lwz       r3, -0x76E0(r13)
	  mr        r4, r0
	  bl        -0x55EF0

	.loc_0x3C:
	  lwz       r0, -0x7618(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0xF8
	  li        r3, 0x3C
	  bl        -0x65CD0
	  mr.       r31, r3
	  beq-      .loc_0xF4
	  lis       r4, 0x804A
	  lis       r3, 0x100
	  addi      r4, r4, 0x3080
	  li        r0, -0x1
	  stw       r4, 0x0(r31)
	  li        r5, 0x3
	  li        r4, 0
	  subi      r3, r3, 0x1
	  stw       r0, 0x8(r31)
	  li        r0, 0x1
	  lfs       f0, -0x7850(r2)
	  stb       r30, 0x24(r31)
	  sth       r5, 0x26(r31)
	  stb       r4, 0x8(r31)
	  stb       r4, 0x9(r31)
	  stb       r4, 0xA(r31)
	  stb       r4, 0xB(r31)
	  stw       r3, 0xC(r31)
	  sth       r4, 0x14(r31)
	  stw       r4, 0x4(r31)
	  sth       r0, 0x1C(r31)
	  stw       r4, 0x20(r31)
	  stfs      f0, 0x28(r31)
	  stw       r4, 0x30(r31)
	  bl        0x68FC8
	  stw       r3, 0x2C(r31)
	  li        r0, 0
	  mr        r3, r31
	  stw       r0, 0x34(r31)
	  sth       r0, 0x38(r31)
	  stb       r0, 0x3A(r31)
	  stw       r0, 0x18(r31)
	  bl        0xC44
	  bl        -0x5AC10
	  bl        -0x5AAA4
	  mr        r3, r28
	  mr        r4, r29
	  bl        -0x55F04
	  stw       r3, 0x10(r31)

	.loc_0xF4:
	  stw       r31, -0x7618(r13)

	.loc_0xF8:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  lwz       r3, -0x7618(r13)
	  lwz       r28, 0x10(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00010C
 */
void JFWDisplay::createManager(const _GXRenderModeObj*, void*, bool)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00011C
 */
void JFWDisplay::createManager(const _GXRenderModeObj*, void*, void*, bool)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00010C
 */
void JFWDisplay::createManager(const _GXRenderModeObj*, void*, void*, void*,
                               bool)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80089C44
 * Size:	000044
 */
void JFWDisplay::destroyManager()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, -0x7618(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x2C
	  lwz       r12, 0x0(r3)
	  li        r4, 0x1
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl

	.loc_0x2C:
	  li        r0, 0
	  stw       r0, -0x7618(r13)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000058
 */
void callDirectDraw()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000104
 */
void JFWDisplay::prepareCopyDisp()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00010C
 */
void JFWDisplay::drawendXfb_single()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0001E0
 */
void JFWDisplay::exchangeXfb_double()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000A8
 */
void JFWDisplay::exchangeXfb_triple()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000124
 */
void JFWDisplay::copyXfb_triple()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000094
 */
void JFWDisplay::preGX()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00010C
 */
void JFWDisplay::endGX()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80089C88
 * Size:	000478
 */
void JFWDisplay::beginRender()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  stfd      f31, 0x38(r1)
	  stmw      r27, 0x24(r1)
	  mr        r30, r3
	  lwz       r29, -0x7708(r13)
	  bl        0x68F04
	  lis       r5, 0x8000
	  lis       r4, 0x431C
	  lwz       r0, 0xF8(r5)
	  subi      r4, r4, 0x217D
	  lwz       r5, 0x50(r29)
	  rlwinm    r0,r0,30,2,31
	  mulhwu    r0, r4, r0
	  sub       r3, r3, r5
	  rlwinm    r3,r3,3,0,28
	  rlwinm    r0,r0,17,15,31
	  divwu     r0, r3, r0
	  stw       r0, 0x54(r29)
	  lwz       r0, 0x54(r29)
	  cmplwi    r0, 0
	  bne-      .loc_0x64
	  li        r0, 0x1
	  stw       r0, 0x54(r29)

	.loc_0x64:
	  lwz       r27, -0x7708(r13)
	  li        r4, 0xFF
	  li        r3, 0x81
	  li        r0, 0x1E
	  stb       r4, 0x60(r27)
	  stb       r3, 0x61(r27)
	  stb       r0, 0x62(r27)
	  bl        0x68EA0
	  stw       r3, 0x50(r27)
	  li        r4, 0xFF
	  li        r3, 0x81
	  li        r0, 0x1E
	  lwz       r27, -0x7708(r13)
	  stb       r4, 0x10(r27)
	  stb       r3, 0x11(r27)
	  stb       r0, 0x12(r27)
	  bl        0x68E7C
	  stw       r3, 0x0(r27)
	  lwz       r3, 0x20(r30)
	  lhz       r4, 0x1C(r30)
	  bl        0x8EC
	  lwz       r3, -0x76E0(r13)
	  bl        -0x5605C
	  bl        0x68E60
	  lwz       r0, 0x2C(r30)
	  sub       r0, r3, r0
	  stw       r0, 0x30(r30)
	  stw       r3, 0x2C(r30)
	  lwz       r3, -0x76DC(r13)
	  lwz       r0, 0x2C(r30)
	  sub       r0, r0, r3
	  stw       r0, 0x34(r30)
	  lwz       r29, -0x7708(r13)
	  bl        0x68E38
	  lis       r5, 0x8000
	  lis       r4, 0x431C
	  lwz       r0, 0xF8(r5)
	  subi      r4, r4, 0x217D
	  lwz       r5, 0x0(r29)
	  rlwinm    r0,r0,30,2,31
	  mulhwu    r0, r4, r0
	  sub       r3, r3, r5
	  rlwinm    r3,r3,3,0,28
	  rlwinm    r0,r0,17,15,31
	  divwu     r0, r3, r0
	  stw       r0, 0x4(r29)
	  lwz       r0, 0x4(r29)
	  cmplwi    r0, 0
	  bne-      .loc_0x130
	  li        r0, 0x1
	  stw       r0, 0x4(r29)

	.loc_0x130:
	  lwz       r27, -0x7708(r13)
	  li        r4, 0xFF
	  li        r3, 0x81
	  li        r0, 0x1E
	  stb       r4, 0x24(r27)
	  stb       r3, 0x25(r27)
	  stb       r0, 0x26(r27)
	  bl        0x68DD4
	  stw       r3, 0x14(r27)
	  lwz       r31, -0x76C8(r13)
	  lwz       r0, 0x10(r31)
	  cmpwi     r0, 0x2
	  beq-      .loc_0x1C0
	  bge-      .loc_0x174
	  cmpwi     r0, 0x1
	  bge-      .loc_0x180
	  b         .loc_0x3F4

	.loc_0x174:
	  cmpwi     r0, 0x4
	  bge-      .loc_0x3F4
	  b         .loc_0x374

	.loc_0x180:
	  lwz       r0, 0x1C(r31)
	  cmpwi     r0, 0x2
	  beq-      .loc_0x1AC
	  li        r0, 0x1
	  mr        r3, r30
	  stw       r0, 0x1C(r31)
	  addi      r4, r1, 0x10
	  lwz       r0, 0x8(r30)
	  stw       r0, 0x10(r1)
	  bl        0xA8C
	  b         .loc_0x1B4

	.loc_0x1AC:
	  li        r0, 0x1
	  stw       r0, 0x1C(r31)

	.loc_0x1B4:
	  lha       r0, 0x38(r30)
	  sth       r0, 0x14(r31)
	  b         .loc_0x3F4

	.loc_0x1C0:
	  lha       r3, 0x16(r31)
	  lha       r0, 0x18(r31)
	  cmpw      r3, r0
	  bne-      .loc_0x348
	  lha       r0, 0x14(r31)
	  cmpwi     r0, 0
	  blt-      .loc_0x328
	  lwz       r3, -0x76E0(r13)
	  lwz       r3, 0x4(r3)
	  lhz       r27, 0x6(r3)
	  lhz       r28, 0x4(r3)
	  lhz       r4, 0x8(r3)
	  mr        r3, r27
	  bl        0x5C130
	  fmr       f31, f1
	  mr        r3, r27
	  bl        0x5C094
	  lwz       r0, 0x8(r30)
	  mr        r29, r3
	  addi      r3, r1, 0x8
	  stw       r0, 0x8(r1)
	  lwz       r4, 0xC(r30)
	  bl        0x5C410
	  mr        r5, r28
	  mr        r6, r27
	  li        r3, 0
	  li        r4, 0
	  bl        0x5BD90
	  mr        r3, r28
	  mr        r4, r29
	  bl        0x5BE7C
	  fmr       f1, f31
	  bl        0x5C31C
	  bl        0x48058
	  lwz       r3, -0x76E0(r13)
	  li        r5, 0x1
	  lwz       r4, 0x4(r3)
	  lbz       r3, 0x19(r4)
	  addi      r6, r4, 0x32
	  addi      r4, r4, 0x1A
	  bl        0x5C440
	  lhz       r3, 0x26(r30)
	  bl        0x5BFD4
	  lhz       r3, 0x14(r30)
	  bl        0x5C638
	  li        r3, 0x1
	  li        r4, 0x3
	  li        r5, 0x1
	  bl        0x5F27C
	  lbz       r0, 0x24(r30)
	  cmplwi    r0, 0
	  beq-      .loc_0x298
	  li        r3, 0x1
	  bl        0x5F23C

	.loc_0x298:
	  lha       r3, 0x14(r31)
	  extsh.    r0, r3
	  blt-      .loc_0x2B0
	  rlwinm    r0,r3,2,0,29
	  lwzx      r3, r31, r0
	  b         .loc_0x2B4

	.loc_0x2B0:
	  li        r3, 0

	.loc_0x2B4:
	  li        r4, 0x1
	  bl        0x5C604
	  lwz       r0, 0x18(r30)
	  cmpwi     r0, 0
	  bne-      .loc_0x2DC
	  lha       r0, 0x14(r31)
	  sth       r0, 0x16(r31)
	  bl        0x5B5E4
	  bl        -0x563CC
	  b         .loc_0x2E0

	.loc_0x2DC:
	  bl        -0x563FC

	.loc_0x2E0:
	  lwz       r0, 0x18(r30)
	  cmpwi     r0, 0
	  bne-      .loc_0x328
	  lwz       r7, -0x76C8(r13)
	  lwz       r3, -0x76E0(r13)
	  lha       r0, 0x14(r7)
	  lwz       r4, 0x4(r3)
	  cmpwi     r0, 0
	  lwz       r3, -0x7778(r13)
	  lhz       r5, 0x4(r4)
	  lhz       r6, 0x6(r4)
	  blt-      .loc_0x31C
	  rlwinm    r0,r0,2,0,29
	  lwzx      r4, r7, r0
	  b         .loc_0x320

	.loc_0x31C:
	  li        r4, 0

	.loc_0x320:
	  bl        -0x6001C
	  bl        -0x621E8

	.loc_0x328:
	  lha       r0, 0x14(r31)
	  rlwinm    r3,r0,1,31,31
	  sth       r0, 0x16(r31)
	  subi      r3, r3, 0x1
	  xori      r0, r0, 0x1
	  and       r0, r0, r3
	  sth       r0, 0x14(r31)
	  b         .loc_0x3F4

	.loc_0x348:
	  lwz       r0, 0x8(r30)
	  mr        r3, r30
	  addi      r4, r1, 0xC
	  stw       r0, 0xC(r1)
	  bl        0x8D8
	  lha       r0, 0x14(r31)
	  cmpwi     r0, 0
	  bge-      .loc_0x3F4
	  li        r0, 0
	  sth       r0, 0x14(r31)
	  b         .loc_0x3F4

	.loc_0x374:
	  lha       r7, 0x14(r31)
	  extsh.    r0, r7
	  blt-      .loc_0x3B4
	  lwz       r4, -0x76E0(r13)
	  extsh.    r0, r7
	  lwz       r3, -0x7778(r13)
	  lwz       r4, 0x4(r4)
	  lhz       r5, 0x4(r4)
	  lhz       r6, 0x6(r4)
	  blt-      .loc_0x3A8
	  rlwinm    r0,r7,2,0,29
	  lwzx      r4, r31, r0
	  b         .loc_0x3AC

	.loc_0x3A8:
	  li        r4, 0

	.loc_0x3AC:
	  bl        -0x600A8
	  bl        -0x62274

	.loc_0x3B4:
	  lha       r0, 0x14(r31)
	  sth       r0, 0x16(r31)
	  lha       r3, 0x14(r31)
	  lha       r4, 0x18(r31)
	  addi      r0, r3, 0x1
	  extsh     r3, r0

	.loc_0x3CC:
	  extsh     r0, r3
	  cmpwi     r0, 0x3
	  bge-      .loc_0x3E0
	  extsh.    r0, r3
	  bge-      .loc_0x3E4

	.loc_0x3E0:
	  li        r3, 0

	.loc_0x3E4:
	  extsh     r0, r3
	  cmpw      r0, r4
	  beq+      .loc_0x3CC
	  sth       r3, 0x14(r31)

	.loc_0x3F4:
	  bl        0x5D8E4
	  bl        0x5AC8C
	  lwz       r3, -0x76E0(r13)
	  lwz       r3, 0x4(r3)
	  lbz       r0, 0x19(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x428
	  li        r3, 0x2
	  li        r4, 0
	  bl        0x5F14C
	  li        r3, 0x1
	  bl        0x5F218
	  b         .loc_0x460

	.loc_0x428:
	  lbz       r0, 0x24(r30)
	  cmplwi    r0, 0
	  beq-      .loc_0x44C
	  li        r3, 0x1
	  li        r4, 0
	  bl        0x5F128
	  li        r3, 0x1
	  bl        0x5F1F4
	  b         .loc_0x460

	.loc_0x44C:
	  li        r3, 0
	  li        r4, 0
	  bl        0x5F110
	  li        r3, 0
	  bl        0x5F1DC

	.loc_0x460:
	  lfd       f31, 0x38(r1)
	  lmw       r27, 0x24(r1)
	  lwz       r0, 0x44(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8008A100
 * Size:	000340
 */
void JFWDisplay::endRender()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x120(r1)
	  mflr      r0
	  stw       r0, 0x124(r1)
	  stfd      f31, 0x110(r1)
	  psq_st    f31,0x118(r1),0,0
	  stmw      r27, 0xFC(r1)
	  lwz       r5, -0x76E0(r13)
	  lis       r4, 0x4330
	  lfs       f1, -0x7850(r2)
	  mr        r30, r3
	  lwz       r6, 0x4(r5)
	  addi      r3, r1, 0x10
	  stw       r4, 0xE8(r1)
	  fmr       f2, f1
	  lhz       r5, 0x4(r6)
	  lhz       r0, 0x6(r6)
	  stw       r5, 0xEC(r1)
	  lfd       f4, -0x7840(r2)
	  lfd       f0, 0xE8(r1)
	  stw       r0, 0xF4(r1)
	  fsubs     f3, f0, f4
	  lfs       f5, -0x784C(r2)
	  stw       r4, 0xF0(r1)
	  lfs       f6, -0x7848(r2)
	  lfd       f0, 0xF0(r1)
	  fsubs     f4, f0, f4
	  bl        -0x54B90
	  lwz       r0, 0x4(r30)
	  cmplwi    r0, 0
	  beq-      .loc_0x88
	  addi      r3, r1, 0x10
	  bl        -0x54AC0
	  lwz       r3, 0x4(r30)
	  bl        -0x5D27C

	.loc_0x88:
	  addi      r3, r1, 0x10
	  bl        -0x54AD0
	  lwz       r3, -0x7780(r13)
	  bl        -0x60BFC
	  lwz       r0, -0x7790(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0xB4
	  addi      r3, r1, 0x10
	  bl        -0x54AEC
	  lwz       r3, -0x7790(r13)
	  bl        -0x61178

	.loc_0xB4:
	  addi      r3, r1, 0x10
	  bl        -0x54AFC
	  lwz       r3, -0x7708(r13)
	  bl        -0x5AF8C
	  lwz       r0, 0x18(r30)
	  cmpwi     r0, 0
	  bne-      .loc_0xE0
	  lwz       r3, -0x76C8(r13)
	  lwz       r0, 0x10(r3)
	  cmpwi     r0, 0x1
	  bne-      .loc_0xE4

	.loc_0xE0:
	  bl        -0x62330

	.loc_0xE4:
	  bl        0x5AE88
	  lis       r4, 0x804A
	  lis       r3, 0x804A
	  addi      r0, r4, 0x600
	  lwz       r31, -0x76C8(r13)
	  stw       r0, 0x10(r1)
	  addi      r0, r3, 0x650
	  stw       r0, 0x10(r1)
	  lwz       r0, 0x10(r31)
	  cmpwi     r0, 0x2
	  beq-      .loc_0x2F8
	  bge-      .loc_0x120
	  cmpwi     r0, 0x1
	  bge-      .loc_0x12C
	  b         .loc_0x2F8

	.loc_0x120:
	  cmpwi     r0, 0x4
	  bge-      .loc_0x2F8
	  b         .loc_0x208

	.loc_0x12C:
	  lha       r0, 0x14(r31)
	  cmpwi     r0, 0
	  blt-      .loc_0x2F8
	  lwz       r3, -0x76E0(r13)
	  lwz       r3, 0x4(r3)
	  lhz       r27, 0x6(r3)
	  lhz       r28, 0x4(r3)
	  lhz       r4, 0x8(r3)
	  mr        r3, r27
	  bl        0x5BD5C
	  fmr       f31, f1
	  mr        r3, r27
	  bl        0x5BCC0
	  lwz       r0, 0x8(r30)
	  mr        r29, r3
	  addi      r3, r1, 0xC
	  stw       r0, 0xC(r1)
	  lwz       r4, 0xC(r30)
	  bl        0x5C03C
	  mr        r5, r28
	  mr        r6, r27
	  li        r3, 0
	  li        r4, 0
	  bl        0x5B9BC
	  mr        r3, r28
	  mr        r4, r29
	  bl        0x5BAA8
	  fmr       f1, f31
	  bl        0x5BF48
	  bl        0x47C84
	  lwz       r3, -0x76E0(r13)
	  li        r5, 0x1
	  lwz       r4, 0x4(r3)
	  lbz       r3, 0x19(r4)
	  addi      r6, r4, 0x32
	  addi      r4, r4, 0x1A
	  bl        0x5C06C
	  lhz       r3, 0x26(r30)
	  bl        0x5BC00
	  lhz       r3, 0x14(r30)
	  bl        0x5C264
	  li        r3, 0x1
	  li        r4, 0x3
	  li        r5, 0x1
	  bl        0x5EEA8
	  lbz       r0, 0x24(r30)
	  cmplwi    r0, 0
	  beq-      .loc_0x1F4
	  li        r3, 0x1
	  bl        0x5EE68

	.loc_0x1F4:
	  bl        0xA04
	  bl        0x5AD74
	  lha       r0, 0x14(r31)
	  sth       r0, 0x16(r31)
	  b         .loc_0x2F8

	.loc_0x208:
	  lha       r0, 0x14(r31)
	  cmpwi     r0, 0
	  blt-      .loc_0x2F8
	  lwz       r3, -0x76E0(r13)
	  lwz       r3, 0x4(r3)
	  lhz       r28, 0x6(r3)
	  lhz       r27, 0x4(r3)
	  lhz       r4, 0x8(r3)
	  mr        r3, r28
	  bl        0x5BC80
	  fmr       f31, f1
	  mr        r3, r28
	  bl        0x5BBE4
	  lwz       r0, 0x8(r30)
	  mr        r29, r3
	  addi      r3, r1, 0x8
	  stw       r0, 0x8(r1)
	  lwz       r4, 0xC(r30)
	  bl        0x5BF60
	  mr        r5, r27
	  mr        r6, r28
	  li        r3, 0
	  li        r4, 0
	  bl        0x5B8E0
	  mr        r3, r27
	  mr        r4, r29
	  bl        0x5B9CC
	  fmr       f1, f31
	  bl        0x5BE6C
	  bl        0x47BA8
	  lwz       r3, -0x76E0(r13)
	  li        r5, 0x1
	  lwz       r4, 0x4(r3)
	  lbz       r3, 0x19(r4)
	  addi      r6, r4, 0x32
	  addi      r4, r4, 0x1A
	  bl        0x5BF90
	  lhz       r3, 0x26(r30)
	  bl        0x5BB24
	  lhz       r3, 0x14(r30)
	  bl        0x5C188
	  li        r3, 0x1
	  li        r4, 0x3
	  li        r5, 0x1
	  bl        0x5EDCC
	  lbz       r0, 0x24(r30)
	  cmplwi    r0, 0
	  beq-      .loc_0x2D0
	  li        r3, 0x1
	  bl        0x5ED8C

	.loc_0x2D0:
	  lha       r3, 0x14(r31)
	  extsh.    r0, r3
	  blt-      .loc_0x2E8
	  rlwinm    r0,r3,2,0,29
	  lwzx      r3, r31, r0
	  b         .loc_0x2EC

	.loc_0x2E8:
	  li        r3, 0

	.loc_0x2EC:
	  li        r4, 0x1
	  bl        0x5C154
	  bl        0x5B1C8

	.loc_0x2F8:
	  lwz       r27, -0x7708(r13)
	  li        r4, 0xFF
	  li        r3, 0x81
	  li        r0, 0x1E
	  stb       r4, 0x38(r27)
	  stb       r3, 0x39(r27)
	  stb       r0, 0x3A(r27)
	  bl        0x68794
	  stw       r3, 0x28(r27)
	  mr        r3, r30
	  bl        0x84C
	  psq_l     f31,0x118(r1),0,0
	  lfd       f31, 0x110(r1)
	  lmw       r27, 0xFC(r1)
	  lwz       r0, 0x124(r1)
	  mtlr      r0
	  addi      r1, r1, 0x120
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8008A440
 * Size:	000198
 */
void JFWDisplay::endFrame()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  lwz       r31, -0x7708(r13)
	  bl        0x68754
	  lis       r5, 0x8000
	  lis       r4, 0x431C
	  lwz       r0, 0xF8(r5)
	  subi      r4, r4, 0x217D
	  lwz       r5, 0x28(r31)
	  rlwinm    r0,r0,30,2,31
	  mulhwu    r0, r4, r0
	  sub       r3, r3, r5
	  rlwinm    r3,r3,3,0,28
	  rlwinm    r0,r0,17,15,31
	  divwu     r0, r3, r0
	  stw       r0, 0x2C(r31)
	  lwz       r0, 0x2C(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x5C
	  li        r0, 0x1
	  stw       r0, 0x2C(r31)

	.loc_0x5C:
	  lwz       r31, -0x7708(r13)
	  li        r4, 0xFF
	  li        r3, 0x81
	  li        r0, 0x1E
	  stb       r4, 0x4C(r31)
	  stb       r3, 0x4D(r31)
	  stb       r0, 0x4E(r31)
	  bl        0x686F0
	  stw       r3, 0x3C(r31)
	  lwz       r3, -0x76C8(r13)
	  lwz       r0, 0x10(r3)
	  cmpwi     r0, 0x2
	  beq-      .loc_0xA4
	  bge-      .loc_0x98
	  b         .loc_0xB8

	.loc_0x98:
	  cmpwi     r0, 0x4
	  bge-      .loc_0xB8
	  b         .loc_0xB0

	.loc_0xA4:
	  bl        0x814
	  bl        0x5AB84
	  b         .loc_0xB8

	.loc_0xB0:
	  bl        0x808
	  bl        0x5AB78

	.loc_0xB8:
	  lwz       r31, -0x7708(r13)
	  bl        0x686AC
	  lis       r5, 0x8000
	  lis       r4, 0x431C
	  lwz       r0, 0xF8(r5)
	  subi      r4, r4, 0x217D
	  lwz       r5, 0x3C(r31)
	  rlwinm    r0,r0,30,2,31
	  mulhwu    r0, r4, r0
	  sub       r3, r3, r5
	  rlwinm    r3,r3,3,0,28
	  rlwinm    r0,r0,17,15,31
	  divwu     r0, r3, r0
	  stw       r0, 0x40(r31)
	  lwz       r0, 0x40(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x104
	  li        r0, 0x1
	  stw       r0, 0x40(r31)

	.loc_0x104:
	  lwz       r31, -0x7708(r13)
	  bl        0x68660
	  lis       r5, 0x8000
	  lis       r4, 0x431C
	  lwz       r0, 0xF8(r5)
	  subi      r4, r4, 0x217D
	  lwz       r5, 0x14(r31)
	  rlwinm    r0,r0,30,2,31
	  mulhwu    r0, r4, r0
	  sub       r3, r3, r5
	  rlwinm    r3,r3,3,0,28
	  rlwinm    r0,r0,17,15,31
	  divwu     r0, r3, r0
	  stw       r0, 0x18(r31)
	  lwz       r0, 0x18(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x150
	  li        r0, 0x1
	  stw       r0, 0x18(r31)

	.loc_0x150:
	  lbz       r0, -0x7610(r13)
	  extsb.    r0, r0
	  bne-      .loc_0x16C
	  bl        0x47BA8
	  li        r0, 0x1
	  stw       r3, -0x7614(r13)
	  stb       r0, -0x7610(r13)

	.loc_0x16C:
	  bl        0x47B98
	  lwz       r0, -0x7614(r13)
	  lwz       r4, -0x7708(r13)
	  sub       r0, r3, r0
	  stw       r0, 0x104(r4)
	  stw       r3, -0x7614(r13)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8008A5D8
 * Size:	000050
 */
void JFWDisplay::waitBlanking(int)
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
	  b         .loc_0x2C

	.loc_0x20:
	  lwz       r3, 0x20(r30)
	  lhz       r4, 0x1C(r30)
	  bl        .loc_0x50

	.loc_0x2C:
	  cmpwi     r31, 0
	  subi      r31, r31, 0x1
	  bgt+      .loc_0x20
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr

	.loc_0x50:
	*/
}

/*
 * --INFO--
 * Address:	8008A628
 * Size:	000120
 */
void waitForTick(unsigned long, unsigned short)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr.       r31, r3
	  stw       r30, 0x18(r1)
	  mr        r30, r4
	  beq-      .loc_0xA0
	  lbz       r0, -0x7600(r13)
	  extsb.    r0, r0
	  bne-      .loc_0x40
	  bl        0x6853C
	  li        r0, 0x1
	  stw       r4, -0x7604(r13)
	  stw       r3, -0x7608(r13)
	  stb       r0, -0x7600(r13)

	.loc_0x40:
	  bl        0x68528
	  mr        r8, r3
	  b         .loc_0x64

	.loc_0x4C:
	  subc      r6, r6, r4
	  lwz       r3, -0x7618(r13)
	  subfe     r5, r8, r7
	  bl        0x108
	  bl        0x6850C
	  mr        r8, r3

	.loc_0x64:
	  lwz       r7, -0x7608(r13)
	  xoris     r5, r8, 0x8000
	  lwz       r6, -0x7604(r13)
	  xoris     r3, r7, 0x8000
	  subc      r0, r4, r6
	  subfe     r3, r3, r5
	  subfe     r3, r5, r5
	  neg.      r3, r3
	  bne+      .loc_0x4C
	  addc      r3, r4, r31
	  li        r0, 0
	  adde      r0, r8, r0
	  stw       r3, -0x7604(r13)
	  stw       r0, -0x7608(r13)
	  b         .loc_0x108

	.loc_0xA0:
	  lbz       r0, -0x75F8(r13)
	  extsb.    r0, r0
	  bne-      .loc_0xBC
	  bl        0x47A70
	  li        r0, 0x1
	  stw       r3, -0x75FC(r13)
	  stb       r0, -0x75F8(r13)

	.loc_0xBC:
	  rlwinm.   r0,r30,0,16,31
	  li        r30, 0x1
	  beq-      .loc_0xCC
	  mr        r30, r0

	.loc_0xCC:
	  li        r31, 0

	.loc_0xD0:
	  lwz       r3, -0x76E0(r13)
	  addi      r4, r1, 0x8
	  li        r5, 0x1
	  addi      r3, r3, 0x38
	  bl        0x64EDC
	  cmpwi     r3, 0
	  bne-      .loc_0xF0
	  stw       r31, 0x8(r1)

	.loc_0xF0:
	  lwz       r0, -0x75FC(r13)
	  lwz       r3, 0x8(r1)
	  sub.      r0, r3, r0
	  blt+      .loc_0xD0
	  add       r0, r3, r30
	  stw       r0, -0x75FC(r13)

	.loc_0x108:
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
 * Address:	8008A748
 * Size:	000040
 */
void JFWThreadAlarmHandler(OSAlarm*, OSContext*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r4, 0x8051
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  addi      r3, r4, 0x2180
	  addi      r4, r31, 0x2C
	  bl        -0x63B44
	  lwz       r3, 0x28(r31)
	  bl        0x67D84
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8008A788
 * Size:	0000BC
 */
void JFWDisplay::threadSleep(long long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x60(r1)
	  mflr      r0
	  stw       r0, 0x64(r1)
	  addi      r4, r1, 0x8
	  stw       r31, 0x5C(r1)
	  addi      r31, r1, 0x34
	  mr        r3, r31
	  stw       r30, 0x58(r1)
	  stw       r29, 0x54(r1)
	  mr        r29, r5
	  stw       r28, 0x50(r1)
	  mr        r28, r6
	  bl        -0x64000
	  addi      r3, r1, 0x8
	  bl        0x6134C
	  bl        0x67200
	  stw       r3, 0x30(r1)
	  bl        0x6446C
	  lis       r4, 0x8051
	  mr        r30, r3
	  addi      r0, r4, 0x2180
	  mr        r4, r31
	  mr        r3, r0
	  bl        -0x63F00
	  lis       r3, 0x8009
	  mr        r6, r28
	  subi      r7, r3, 0x58B8
	  mr        r5, r29
	  addi      r3, r1, 0x8
	  bl        0x61570
	  lwz       r3, 0x30(r1)
	  bl        0x67F78
	  mr        r3, r30
	  bl        0x64454
	  cmplwi    r31, 0
	  beq-      .loc_0x9C
	  mr        r3, r31
	  li        r4, 0
	  bl        -0x64050

	.loc_0x9C:
	  lwz       r0, 0x64(r1)
	  lwz       r31, 0x5C(r1)
	  lwz       r30, 0x58(r1)
	  lwz       r29, 0x54(r1)
	  lwz       r28, 0x50(r1)
	  mtlr      r0
	  addi      r1, r1, 0x60
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000060
 */
JFWAlarm::~JFWAlarm()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000054
 */
void JSULink<JFWAlarm>::~JSULink()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000158
 */
void JFWDisplay::changeToSingleXfb(int)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000090
 */
void JFWDisplay::changeToDoubleXfb()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00019C
 */
void JFWDisplay::deleteToSingleXfb(int)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0001C8
 */
void JFWDisplay::deleteToSingleXfb(void*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000070
 */
void JFWDisplay::addToDoubleXfb(void*, bool)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000070
 */
void JFWDisplay::addToDoubleXfb(JKRHeap*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8008A844
 * Size:	000074
 */
void JFWDisplay::clearEfb_init()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r3, 0x804F
	  lis       r4, 0x804A
	  stw       r0, 0x14(r1)
	  addi      r3, r3, 0x52C
	  li        r5, 0x4
	  addi      r4, r4, 0x3040
	  li        r6, 0x4
	  li        r7, 0x16
	  li        r8, 0x1
	  li        r9, 0x1
	  li        r10, 0
	  bl        0x5C904
	  lfs       f1, -0x7850(r2)
	  lis       r3, 0x804F
	  addi      r3, r3, 0x52C
	  li        r4, 0
	  fmr       f2, f1
	  li        r5, 0
	  fmr       f3, f1
	  li        r6, 0
	  li        r7, 0
	  li        r8, 0
	  bl        0x5CB6C
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00002C
 */
void JFWDisplay::clearEfb()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8008A8B8
 * Size:	000044
 */
void JFWDisplay::clearEfb(_GXColor)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  addi      r8, r1, 0x8
	  lwz       r0, 0x0(r4)
	  li        r4, 0
	  lwz       r5, -0x76E0(r13)
	  lwz       r7, 0x4(r5)
	  li        r5, 0
	  lhz       r6, 0x4(r7)
	  lhz       r7, 0x6(r7)
	  stw       r0, 0x8(r1)
	  bl        .loc_0x44
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr

	.loc_0x44:
	*/
}

/*
 * --INFO--
 * Address:	8008A8FC
 * Size:	000370
 */
void JFWDisplay::clearEfb(int, int, int, int, _GXColor)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x90(r1)
	  mflr      r0
	  lfs       f1, -0x7850(r2)
	  stw       r0, 0x94(r1)
	  lis       r0, 0x4330
	  lfd       f4, -0x7840(r2)
	  fmr       f3, f1
	  stmw      r24, 0x70(r1)
	  mr        r29, r3
	  fmr       f5, f1
	  lfs       f6, -0x7848(r2)
	  stw       r0, 0x50(r1)
	  mr        r30, r4
	  mr        r31, r5
	  stw       r0, 0x58(r1)
	  mr        r24, r6
	  mr        r25, r7
	  mr        r26, r8
	  lwz       r9, -0x76E0(r13)
	  lwz       r3, 0x4(r9)
	  lhz       r28, 0x4(r3)
	  lhz       r27, 0x6(r3)
	  addi      r3, r1, 0xC
	  stw       r28, 0x5C(r1)
	  stw       r27, 0x54(r1)
	  lfd       f0, 0x58(r1)
	  lfd       f2, 0x50(r1)
	  fsubs     f2, f2, f4
	  fsubs     f4, f0, f4
	  bl        0x60468
	  addi      r3, r1, 0xC
	  li        r4, 0x1
	  bl        0x5EACC
	  lis       r0, 0x4330
	  lfs       f1, -0x7850(r2)
	  stw       r28, 0x64(r1)
	  lfd       f4, -0x7840(r2)
	  fmr       f2, f1
	  stw       r0, 0x60(r1)
	  fmr       f5, f1
	  lfs       f6, -0x7848(r2)
	  lfd       f0, 0x60(r1)
	  stw       r27, 0x6C(r1)
	  fsubs     f3, f0, f4
	  stw       r0, 0x68(r1)
	  lfd       f0, 0x68(r1)
	  fsubs     f4, f0, f4
	  bl        0x5EDD8
	  mr        r5, r28
	  mr        r6, r27
	  li        r3, 0
	  li        r4, 0
	  bl        0x5EE0C
	  lis       r3, 0x804A
	  li        r4, 0
	  addi      r3, r3, 0x3000
	  bl        0x5EB9C
	  li        r3, 0
	  bl        0x5EC34
	  bl        0x59CE8
	  li        r3, 0x9
	  li        r4, 0x1
	  bl        0x59890
	  li        r3, 0xD
	  li        r4, 0x1
	  bl        0x59884
	  li        r3, 0
	  li        r4, 0x9
	  li        r5, 0
	  li        r6, 0x2
	  li        r7, 0
	  bl        0x59CF0
	  li        r3, 0
	  li        r4, 0xD
	  li        r5, 0x1
	  li        r6, 0
	  li        r7, 0
	  bl        0x59CD8
	  li        r3, 0
	  bl        0x5C42C
	  li        r3, 0x4
	  li        r4, 0
	  li        r5, 0
	  li        r6, 0
	  li        r7, 0
	  li        r8, 0
	  li        r9, 0x2
	  bl        0x5C448
	  li        r3, 0x5
	  li        r4, 0
	  li        r5, 0
	  li        r6, 0
	  li        r7, 0
	  li        r8, 0
	  li        r9, 0x2
	  bl        0x5C428
	  li        r3, 0x1
	  bl        0x5A51C
	  li        r3, 0
	  li        r4, 0x1
	  li        r5, 0x4
	  li        r6, 0x3C
	  li        r7, 0
	  li        r8, 0x7D
	  bl        0x5A280
	  lis       r3, 0x804F
	  li        r4, 0
	  addi      r3, r3, 0x52C
	  bl        0x5CC64
	  li        r3, 0x1
	  bl        0x5E104
	  lwz       r0, 0x0(r26)
	  addi      r4, r1, 0x8
	  li        r3, 0x1
	  stw       r0, 0x8(r1)
	  bl        0x5DB98
	  li        r3, 0
	  li        r4, 0
	  li        r5, 0
	  li        r6, 0xFF
	  bl        0x5DF40
	  li        r3, 0
	  li        r4, 0xF
	  li        r5, 0xF
	  li        r6, 0xF
	  li        r7, 0x2
	  bl        0x5DA14
	  li        r3, 0
	  li        r4, 0
	  li        r5, 0
	  li        r6, 0
	  li        r7, 0x1
	  li        r8, 0
	  bl        0x5DA80
	  li        r3, 0
	  li        r4, 0x7
	  li        r5, 0x7
	  li        r6, 0x7
	  li        r7, 0x1
	  bl        0x5DA24
	  li        r3, 0
	  li        r4, 0
	  li        r5, 0
	  li        r6, 0
	  li        r7, 0x1
	  li        r8, 0
	  bl        0x5DAB4
	  li        r3, 0x7
	  li        r4, 0
	  li        r5, 0x1
	  li        r6, 0x7
	  li        r7, 0
	  bl        0x5DDF0
	  li        r3, 0x2
	  li        r4, 0x16
	  li        r5, 0
	  bl        0x5DE24
	  li        r3, 0
	  bl        0x5E644
	  li        r3, 0
	  li        r4, 0
	  li        r5, 0
	  li        r6, 0x5
	  bl        0x5E550
	  lbz       r0, 0x24(r29)
	  cmplwi    r0, 0
	  beq-      .loc_0x2B0
	  li        r3, 0x1
	  bl        0x5E5BC
	  li        r3, 0x1
	  li        r4, 0
	  bl        0x5E744

	.loc_0x2B0:
	  li        r3, 0x1
	  li        r4, 0x7
	  li        r5, 0x1
	  bl        0x5E5CC
	  li        r3, 0x2
	  bl        0x5AFE8
	  li        r3, 0x80
	  li        r4, 0
	  li        r5, 0x4
	  bl        0x5ADB8
	  lis       r7, 0xCC01
	  li        r6, 0
	  sth       r30, -0x8000(r7)
	  add       r8, r30, r24
	  li        r0, 0x1
	  add       r9, r31, r25
	  sth       r31, -0x8000(r7)
	  li        r3, 0
	  li        r4, 0x16
	  li        r5, 0
	  stb       r6, -0x8000(r7)
	  stb       r6, -0x8000(r7)
	  sth       r8, -0x8000(r7)
	  sth       r31, -0x8000(r7)
	  stb       r0, -0x8000(r7)
	  stb       r6, -0x8000(r7)
	  sth       r8, -0x8000(r7)
	  sth       r9, -0x8000(r7)
	  stb       r0, -0x8000(r7)
	  stb       r0, -0x8000(r7)
	  sth       r30, -0x8000(r7)
	  sth       r9, -0x8000(r7)
	  stb       r6, -0x8000(r7)
	  stb       r0, -0x8000(r7)
	  bl        0x5DD5C
	  li        r3, 0x1
	  bl        0x5E57C
	  lbz       r0, 0x24(r29)
	  cmplwi    r0, 0
	  beq-      .loc_0x35C
	  li        r3, 0
	  li        r4, 0
	  bl        0x5E698

	.loc_0x35C:
	  lmw       r24, 0x70(r1)
	  lwz       r0, 0x94(r1)
	  mtlr      r0
	  addi      r1, r1, 0x90
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0001D4
 */
void JFWDisplay::clearAllXfb()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8008AC6C
 * Size:	00008C
 */
void JFWDisplay::calcCombinationRatio()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  lwz       r5, -0x76D8(r13)
	  lwz       r6, 0x30(r3)
	  mr        r7, r5
	  rlwinm    r0,r6,1,0,30
	  b         .loc_0x1C

	.loc_0x18:
	  add       r7, r7, r5

	.loc_0x1C:
	  cmpw      r7, r0
	  blt+      .loc_0x18
	  lwz       r4, 0x34(r3)
	  sub       r0, r7, r0
	  sub.      r4, r0, r4
	  bge-      .loc_0x38
	  add       r4, r4, r5

	.loc_0x38:
	  lis       r0, 0x4330
	  xoris     r4, r4, 0x8000
	  stw       r4, 0xC(r1)
	  lfd       f1, -0x7838(r2)
	  stw       r0, 0x8(r1)
	  lfd       f2, -0x7840(r2)
	  lfd       f0, 0x8(r1)
	  stw       r6, 0x14(r1)
	  fsubs     f3, f0, f1
	  lfs       f0, -0x7848(r2)
	  stw       r0, 0x10(r1)
	  lfd       f1, 0x10(r1)
	  fsubs     f1, f1, f2
	  fdivs     f1, f3, f1
	  stfs      f1, 0x28(r3)
	  lfs       f1, 0x28(r3)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x84
	  stfs      f0, 0x28(r3)

	.loc_0x84:
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000054
 */
void JFWDisplay::frameToTick(float)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8008ACF8
 * Size:	0000F0
 */
void JFWDrawDoneAlarm()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x60(r1)
	  mflr      r0
	  stw       r0, 0x64(r1)
	  addi      r4, r1, 0x8
	  stw       r31, 0x5C(r1)
	  addi      r31, r1, 0x34
	  mr        r3, r31
	  stw       r30, 0x58(r1)
	  bl        -0x64560
	  bl        0x63F1C
	  mr        r0, r3
	  addi      r3, r1, 0x8
	  mr        r30, r0
	  bl        0x60DE0
	  lis       r3, 0x8051
	  mr        r4, r31
	  addi      r3, r3, 0x2180
	  bl        -0x64458
	  mr        r3, r30
	  bl        0x63F1C
	  lis       r3, 0x8000
	  lis       r0, 0x4330
	  lwz       r3, 0xF8(r3)
	  stw       r0, 0x48(r1)
	  rlwinm    r0,r3,30,2,31
	  lfd       f1, -0x7840(r2)
	  stw       r0, 0x4C(r1)
	  lfd       f2, -0x7830(r2)
	  lfd       f0, 0x48(r1)
	  fsub      f0, f0, f1
	  fmul      f1, f2, f0
	  bl        0x37484
	  lis       r6, 0x8009
	  mr        r5, r3
	  subi      r7, r6, 0x5218
	  addi      r3, r1, 0x8
	  mr        r6, r4
	  bl        0x60FE0
	  bl        0x5A7AC
	  bl        0x63EA4
	  mr        r30, r3
	  addi      r3, r1, 0x8
	  bl        0x61034
	  lis       r3, 0x8051
	  mr        r4, r31
	  addi      r3, r3, 0x2180
	  bl        -0x6418C
	  mr        r3, r30
	  bl        0x63EA8
	  cmplwi    r31, 0
	  beq-      .loc_0xD8
	  mr        r3, r31
	  li        r4, 0
	  bl        -0x645FC

	.loc_0xD8:
	  lwz       r0, 0x64(r1)
	  lwz       r31, 0x5C(r1)
	  lwz       r30, 0x58(r1)
	  mtlr      r0
	  addi      r1, r1, 0x60
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8008ADE8
 * Size:	000040
 */
void JFWGXAbortAlarmHandler(OSAlarm*, OSContext*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        .loc_0x40
	  bl        0x5A43C
	  li        r0, 0x61
	  lis       r4, 0xCC01
	  lis       r3, 0x5800
	  stb       r0, -0x8000(r4)
	  addi      r0, r3, 0xF
	  stw       r0, -0x8000(r4)
	  bl        0x5A644
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr

	.loc_0x40:
	*/
}

/*
 * --INFO--
 * Address:	8008AE28
 * Size:	0001BC
 */
void diagnoseGpHang()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x50(r1)
	  mflr      r0
	  lis       r4, 0x8048
	  stw       r0, 0x54(r1)
	  addi      r3, r1, 0x24
	  addi      r5, r1, 0x1C
	  addi      r6, r1, 0x20
	  stmw      r27, 0x3C(r1)
	  subi      r31, r4, 0x7620
	  addi      r4, r1, 0x28
	  bl        0x5F38C
	  addi      r3, r1, 0x14
	  addi      r4, r1, 0x18
	  addi      r5, r1, 0xC
	  addi      r6, r1, 0x10
	  bl        0x5F378
	  lwz       r8, 0x20(r1)
	  addi      r3, r1, 0x8
	  lwz       r6, 0x10(r1)
	  mr        r4, r3
	  lwz       r10, 0x28(r1)
	  mr        r7, r3
	  sub       r8, r6, r8
	  lwz       r9, 0x18(r1)
	  neg       r6, r8
	  lwz       r5, 0x1C(r1)
	  lwz       r0, 0xC(r1)
	  or        r6, r6, r8
	  sub       r8, r9, r10
	  lwz       r9, 0x24(r1)
	  cntlzw    r10, r8
	  sub       r5, r0, r5
	  neg       r0, r5
	  lwz       r8, 0x14(r1)
	  or        r0, r0, r5
	  rlwinm    r5,r6,1,31,31
	  sub       r6, r8, r9
	  rlwinm    r30,r10,27,24,31
	  cntlzw    r6, r6
	  rlwinm    r0,r0,1,31,31
	  mr        r28, r5
	  addi      r5, r1, 0xA
	  rlwinm    r29,r6,27,24,31
	  mr        r27, r0
	  addi      r6, r1, 0x9
	  bl        0x590DC
	  lbz       r4, 0xA(r1)
	  mr        r6, r30
	  lbz       r5, 0x9(r1)
	  mr        r7, r29
	  mr        r8, r28
	  mr        r9, r27
	  addi      r3, r31, 0
	  crclr     6, 0x6
	  bl        0x627EC
	  cmplwi    r29, 0
	  bne-      .loc_0xFC
	  cmplwi    r28, 0
	  beq-      .loc_0xFC
	  addi      r3, r31, 0x1C
	  crclr     6, 0x6
	  bl        0x627D0
	  b         .loc_0x1A8

	.loc_0xFC:
	  cmplwi    r30, 0
	  bne-      .loc_0x124
	  cmplwi    r29, 0
	  beq-      .loc_0x124
	  cmplwi    r28, 0
	  beq-      .loc_0x124
	  addi      r3, r31, 0x3C
	  crclr     6, 0x6
	  bl        0x627A8
	  b         .loc_0x1A8

	.loc_0x124:
	  lbz       r3, 0x9(r1)
	  cmplwi    r3, 0
	  bne-      .loc_0x158
	  cmplwi    r30, 0
	  beq-      .loc_0x158
	  cmplwi    r29, 0
	  beq-      .loc_0x158
	  cmplwi    r28, 0
	  beq-      .loc_0x158
	  addi      r3, r31, 0x64
	  crclr     6, 0x6
	  bl        0x62774
	  b         .loc_0x1A8

	.loc_0x158:
	  lbz       r0, 0xA(r1)
	  cmplwi    r0, 0
	  beq-      .loc_0x19C
	  cmplwi    r3, 0
	  beq-      .loc_0x19C
	  cmplwi    r30, 0
	  beq-      .loc_0x19C
	  cmplwi    r29, 0
	  beq-      .loc_0x19C
	  cmplwi    r28, 0
	  beq-      .loc_0x19C
	  cmplwi    r27, 0
	  beq-      .loc_0x19C
	  addi      r3, r31, 0x8C
	  crclr     6, 0x6
	  bl        0x62730
	  b         .loc_0x1A8

	.loc_0x19C:
	  addi      r3, r31, 0xBC
	  crclr     6, 0x6
	  bl        0x62720

	.loc_0x1A8:
	  lmw       r27, 0x3C(r1)
	  lwz       r0, 0x54(r1)
	  mtlr      r0
	  addi      r1, r1, 0x50
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8008AFE4
 * Size:	000094
 */
void JFWDisplay::setForOSResetSystem()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r3, 0x8051
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  lwz       r31, 0x2180(r3)
	  b         .loc_0x28

	.loc_0x1C:
	  lwz       r3, 0x0(r31)
	  bl        0x60DD0
	  lwz       r31, 0xC(r31)

	.loc_0x28:
	  cmplwi    r31, 0
	  bne+      .loc_0x1C
	  bl        -0x57878
	  li        r3, 0x1
	  bl        0x470AC
	  bl        0x46F04
	  bl        0x46210
	  lwz       r3, -0x7618(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x80
	  li        r0, 0
	  stw       r0, 0x4(r3)
	  lwz       r3, -0x7618(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x78
	  lwz       r12, 0x0(r3)
	  li        r4, 0x1
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl

	.loc_0x78:
	  li        r0, 0
	  stw       r0, -0x7618(r13)

	.loc_0x80:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8008B078
 * Size:	000048
 */
void __sinit_JFWDisplay_cpp(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r3, 0x8051
	  li        r4, 0
	  stw       r0, 0x14(r1)
	  addi      r3, r3, 0x2180
	  bl        -0x64860
	  lis       r3, 0x8051
	  lis       r4, 0x8009
	  lis       r5, 0x804F
	  addi      r3, r3, 0x2180
	  subi      r4, r4, 0x4F40
	  addi      r5, r5, 0x520
	  bl        0x36654
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8008B0C0
 * Size:	000054
 */
void JSUList<JFWAlarm>::~JSUList()
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
	  beq-      .loc_0x38
	  li        r4, 0
	  bl        -0x6487C
	  extsh.    r0, r31
	  ble-      .loc_0x38
	  mr        r3, r30
	  bl        -0x67040

	.loc_0x38:
	  lwz       r0, 0x14(r1)
	  mr        r3, r30
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}
