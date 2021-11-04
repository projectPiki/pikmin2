#include "types.h"

/*
 * --INFO--
 * Address:	80040F74
 * Size:	000078
 */
void J2DTextBox::J2DTextBox()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0xA498
	  lis       r3, 0x804A
	  li        r9, 0
	  addi      r3, r3, 0x990
	  li        r0, -0x1
	  stw       r3, 0x0(r31)
	  mr        r3, r31
	  li        r4, 0
	  li        r5, 0
	  stw       r9, 0x100(r31)
	  li        r6, 0
	  li        r7, 0x2
	  li        r8, 0x2
	  stw       r0, 0x104(r31)
	  stw       r0, 0x108(r31)
	  stw       r9, 0x124(r31)
	  stw       r0, 0x128(r31)
	  stw       r0, 0x12C(r31)
	  bl        0x5A8
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
 * Address:	80040FEC
 * Size:	000094
 */
void J2DTextBox::J2DTextBox(J2DPane*, JSURandomInputStream*, JKRArchive*)
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
	  bl        -0xA528
	  lis       r3, 0x804A
	  li        r7, 0
	  addi      r3, r3, 0x990
	  li        r0, -0x1
	  stw       r3, 0x0(r28)
	  mr        r3, r28
	  mr        r4, r29
	  mr        r5, r30
	  stw       r7, 0x100(r28)
	  mr        r6, r31
	  stw       r0, 0x104(r28)
	  stw       r0, 0x108(r28)
	  stw       r7, 0x124(r28)
	  stw       r0, 0x128(r28)
	  stw       r0, 0x12C(r28)
	  bl        0x748
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
 * Address:	80041080
 * Size:	000460
 */
void J2DTextBox::J2DTextBox(J2DPane*, JSURandomInputStream*, unsigned long,
                            J2DMaterial*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x90(r1)
	  mflr      r0
	  stw       r0, 0x94(r1)
	  stmw      r25, 0x74(r1)
	  mr        r27, r3
	  mr        r25, r4
	  mr        r28, r5
	  mr        r29, r6
	  mr        r26, r7
	  bl        -0xA5B4
	  lis       r3, 0x804A
	  li        r4, 0
	  addi      r3, r3, 0x990
	  li        r0, -0x1
	  stw       r3, 0x0(r27)
	  mr        r3, r28
	  stw       r4, 0x100(r27)
	  stw       r0, 0x104(r27)
	  stw       r0, 0x108(r27)
	  stw       r4, 0x124(r27)
	  stw       r0, 0x128(r27)
	  stw       r0, 0x12C(r27)
	  lwz       r12, 0x0(r28)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  mr        r31, r3
	  mr        r3, r28
	  addi      r4, r1, 0x28
	  li        r5, 0x8
	  bl        -0x1AD24
	  lis       r4, 0x5442
	  mr        r3, r28
	  addi      r0, r4, 0x5831
	  stw       r0, 0x8(r27)
	  lwz       r12, 0x0(r28)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  mr        r30, r3
	  mr        r3, r28
	  addi      r4, r1, 0x20
	  li        r5, 0x8
	  bl        -0x1AAE0
	  mr        r3, r27
	  mr        r4, r25
	  mr        r5, r28
	  bl        -0x8040
	  lwz       r0, 0x24(r1)
	  mr        r3, r28
	  li        r5, 0
	  add       r4, r30, r0
	  bl        -0x1AA48
	  mr        r3, r28
	  addi      r4, r1, 0x30
	  li        r5, 0x20
	  bl        -0x1AD8C
	  lhz       r0, 0x34(r1)
	  li        r30, 0
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0x144
	  mulli     r0, r0, 0x88
	  add.      r30, r26, r0
	  beq-      .loc_0x144
	  lwz       r3, 0x70(r30)
	  cmplwi    r3, 0
	  beq-      .loc_0x13C
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  cmplwi    r3, 0
	  beq-      .loc_0x13C
	  stw       r3, 0x100(r27)
	  lwz       r3, 0x70(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xB4(r12)
	  mtctr     r12
	  bctrl

	.loc_0x13C:
	  lbz       r0, 0x13(r30)
	  stb       r0, 0xB2(r27)

	.loc_0x144:
	  lha       r0, 0x36(r1)
	  lis       r4, 0x4330
	  stw       r4, 0x50(r1)
	  mr        r3, r27
	  xoris     r0, r0, 0x8000
	  lfd       f2, -0x7AF8(r2)
	  stw       r0, 0x54(r1)
	  lfd       f1, -0x7AF0(r2)
	  lfd       f0, 0x50(r1)
	  stw       r4, 0x58(r1)
	  fsubs     f0, f0, f2
	  stw       r4, 0x60(r1)
	  stfs      f0, 0x114(r27)
	  lha       r0, 0x38(r1)
	  stw       r4, 0x68(r1)
	  xoris     r0, r0, 0x8000
	  stw       r0, 0x5C(r1)
	  lfd       f0, 0x58(r1)
	  fsubs     f0, f0, f2
	  stfs      f0, 0x118(r27)
	  lhz       r0, 0x3A(r1)
	  stw       r0, 0x64(r1)
	  lfd       f0, 0x60(r1)
	  fsubs     f0, f0, f1
	  stfs      f0, 0x11C(r27)
	  lhz       r0, 0x3C(r1)
	  stw       r0, 0x6C(r1)
	  lfd       f0, 0x68(r1)
	  fsubs     f0, f0, f1
	  stfs      f0, 0x120(r27)
	  lbz       r4, 0x3E(r1)
	  lbz       r0, 0x3F(r1)
	  rlwinm    r4,r4,2,0,29
	  or        r0, r4, r0
	  stb       r0, 0x130(r27)
	  lwz       r0, 0x40(r1)
	  stw       r0, 0x1C(r1)
	  lbz       r4, 0x1C(r1)
	  lbz       r0, 0x1D(r1)
	  stb       r4, 0x104(r27)
	  lbz       r4, 0x1E(r1)
	  stb       r0, 0x105(r27)
	  lbz       r0, 0x1F(r1)
	  stb       r4, 0x106(r27)
	  stb       r0, 0x107(r27)
	  lwz       r0, 0x44(r1)
	  stw       r0, 0x18(r1)
	  lbz       r4, 0x18(r1)
	  lbz       r0, 0x19(r1)
	  stb       r4, 0x108(r27)
	  lbz       r4, 0x1A(r1)
	  stb       r0, 0x109(r27)
	  lbz       r0, 0x1B(r1)
	  stb       r4, 0x10A(r27)
	  stb       r0, 0x10B(r27)
	  lbz       r4, 0x48(r1)
	  lwz       r12, 0x0(r27)
	  neg       r0, r4
	  or        r0, r0, r4
	  lwz       r12, 0x28(r12)
	  rlwinm    r4,r0,1,31,31
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r29,0,6,6
	  li        r26, 0
	  bne-      .loc_0x26C
	  lhz       r3, 0x4C(r1)
	  extsh     r0, r3
	  mr        r26, r3
	  cmpwi     r0, -0x1
	  bne-      .loc_0x26C
	  lhz       r3, 0x4E(r1)
	  addi      r0, r3, 0x1
	  rlwinm    r26,r0,0,16,31

	.loc_0x26C:
	  li        r0, 0
	  rlwinm.   r3,r26,0,16,31
	  sth       r0, 0x132(r27)
	  stw       r0, 0x124(r27)
	  beq-      .loc_0x288
	  bl        -0x1D354
	  stw       r3, 0x124(r27)

	.loc_0x288:
	  lwz       r0, 0x124(r27)
	  cmplwi    r0, 0
	  beq-      .loc_0x2D0
	  sth       r26, 0x132(r27)
	  rlwinm    r3,r26,0,16,31
	  subi      r0, r3, 0x1
	  lhz       r26, 0x4E(r1)
	  cmpw      r0, r26
	  bge-      .loc_0x2B0
	  rlwinm    r26,r0,0,16,31

	.loc_0x2B0:
	  lwz       r4, 0x124(r27)
	  mr        r3, r28
	  rlwinm    r5,r26,0,16,31
	  bl        -0x1ACF0
	  lwz       r3, 0x124(r27)
	  rlwinm    r0,r26,0,16,31
	  li        r4, 0
	  stbx      r4, r3, r0

	.loc_0x2D0:
	  mr        r3, r28
	  lhz       r4, 0x4E(r1)
	  lwz       r12, 0x0(r28)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x2C(r1)
	  mr        r3, r28
	  li        r5, 0
	  add       r4, r31, r0
	  bl        -0x1AC70
	  li        r3, 0
	  li        r0, -0x1
	  stw       r3, 0x14(r1)
	  cmplwi    r30, 0
	  lbz       r3, 0x14(r1)
	  stw       r0, 0x10(r1)
	  lbz       r0, 0x15(r1)
	  stb       r3, 0x12C(r27)
	  lbz       r3, 0x16(r1)
	  stb       r0, 0x12D(r27)
	  lbz       r0, 0x17(r1)
	  stb       r3, 0x12E(r27)
	  lbz       r3, 0x10(r1)
	  stb       r0, 0x12F(r27)
	  lbz       r0, 0x11(r1)
	  stb       r3, 0x128(r27)
	  lbz       r3, 0x12(r1)
	  stb       r0, 0x129(r27)
	  lbz       r0, 0x13(r1)
	  stb       r3, 0x12A(r27)
	  stb       r0, 0x12B(r27)
	  beq-      .loc_0x434
	  lwz       r3, 0x70(r30)
	  cmplwi    r3, 0
	  beq-      .loc_0x434
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x58(r12)
	  mtctr     r12
	  bctrl
	  rlwinm    r0,r3,0,24,31
	  cmplwi    r0, 0x1
	  beq-      .loc_0x434
	  lwz       r3, 0x70(r30)
	  li        r4, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x38(r12)
	  mtctr     r12
	  bctrl
	  lha       r28, 0x0(r3)
	  li        r4, 0x1
	  lha       r29, 0x2(r3)
	  lha       r31, 0x4(r3)
	  lha       r26, 0x6(r3)
	  lwz       r3, 0x70(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x38(r12)
	  mtctr     r12
	  bctrl
	  rlwinm    r4,r29,16,8,15
	  lha       r0, 0x2(r3)
	  rlwimi    r4,r28,24,0,7
	  lha       r5, 0x0(r3)
	  rlwimi    r4,r31,8,16,23
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
	  stb       r3, 0x12C(r27)
	  lbz       r4, 0xE(r1)
	  stb       r5, 0x12D(r27)
	  lbz       r3, 0xF(r1)
	  stw       r0, 0x8(r1)
	  stb       r4, 0x12E(r27)
	  lbz       r0, 0x8(r1)
	  stb       r3, 0x12F(r27)
	  lbz       r4, 0x9(r1)
	  stb       r0, 0x128(r27)
	  lbz       r3, 0xA(r1)
	  stb       r4, 0x129(r27)
	  lbz       r0, 0xB(r1)
	  stb       r3, 0x12A(r27)
	  stb       r0, 0x12B(r27)

	.loc_0x434:
	  lfs       f0, -0x7B00(r2)
	  li        r0, 0x1
	  mr        r3, r27
	  stfs      f0, 0x10C(r27)
	  stfs      f0, 0x110(r27)
	  stb       r0, 0x131(r27)
	  lmw       r25, 0x74(r1)
	  lwz       r0, 0x94(r1)
	  mtlr      r0
	  addi      r1, r1, 0x90
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800414E0
 * Size:	000004
 */
void J2DTevBlock::setFontUndeleteFlag() { }

/*
 * --INFO--
 * Address:	800414E4
 * Size:	000008
 */
u32 J2DTevBlock::getFont() { return 0x0; }

/*
 * --INFO--
 * Address:	800414EC
 * Size:	00008C
 */
void J2DTextBox::J2DTextBox(unsigned long long, const JGeometry::TBox2<float>&,
                            const ResFONT*, const char*, short,
                            J2DTextBoxHBinding, J2DTextBoxVBinding)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stmw      r26, 0x8(r1)
	  mr        r26, r3
	  lwz       r30, 0x28(r1)
	  mr        r27, r8
	  lwz       r31, 0x2C(r1)
	  mr        r28, r9
	  mr        r29, r10
	  bl        -0xA6B8
	  lis       r3, 0x804A
	  li        r9, 0
	  addi      r3, r3, 0x990
	  li        r0, -0x1
	  stw       r3, 0x0(r26)
	  mr        r3, r26
	  mr        r4, r27
	  mr        r5, r28
	  stw       r9, 0x100(r26)
	  mr        r6, r29
	  mr        r7, r30
	  mr        r8, r31
	  stw       r0, 0x104(r26)
	  stw       r0, 0x108(r26)
	  stw       r9, 0x124(r26)
	  stw       r0, 0x128(r26)
	  stw       r0, 0x12C(r26)
	  bl        .loc_0x8C
	  mr        r3, r26
	  lmw       r26, 0x8(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr

	.loc_0x8C:
	*/
}

/*
 * --INFO--
 * Address:	80041578
 * Size:	000228
 */
void J2DTextBox::initiate(const ResFONT*, const char*, short,
                          J2DTextBoxHBinding, J2DTextBoxVBinding)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  stmw      r26, 0x28(r1)
	  mr.       r26, r4
	  mr        r29, r3
	  mr        r30, r5
	  mr        r31, r6
	  mr        r27, r7
	  mr        r28, r8
	  beq-      .loc_0x50
	  li        r3, 0x70
	  bl        -0x1D704
	  mr.       r0, r3
	  beq-      .loc_0x4C
	  mr        r4, r26
	  li        r5, 0
	  bl        -0x103F0
	  mr        r0, r3

	.loc_0x4C:
	  stw       r0, 0x100(r29)

	.loc_0x50:
	  li        r7, -0x1
	  li        r6, 0
	  stw       r6, 0xC(r1)
	  rlwinm    r0,r27,2,0,29
	  or        r0, r0, r28
	  cmplwi    r30, 0
	  stw       r7, 0x104(r29)
	  lbz       r4, 0xC(r1)
	  stw       r7, 0x108(r29)
	  lbz       r3, 0xD(r1)
	  stb       r4, 0x12C(r29)
	  lbz       r5, 0xE(r1)
	  stb       r3, 0x12D(r29)
	  lbz       r4, 0xF(r1)
	  stw       r7, 0x8(r1)
	  stb       r5, 0x12E(r29)
	  lbz       r3, 0x8(r1)
	  stb       r4, 0x12F(r29)
	  lbz       r5, 0x9(r1)
	  stb       r3, 0x128(r29)
	  lbz       r4, 0xA(r1)
	  stb       r5, 0x129(r29)
	  lbz       r3, 0xB(r1)
	  stb       r4, 0x12A(r29)
	  stb       r3, 0x12B(r29)
	  stb       r0, 0x130(r29)
	  sth       r6, 0x132(r29)
	  stw       r6, 0x124(r29)
	  beq-      .loc_0x13C
	  extsh.    r0, r31
	  beq-      .loc_0x13C
	  mr        r3, r30
	  bl        0x892C8
	  extsh     r0, r31
	  rlwinm    r28,r31,0,16,31
	  cmpwi     r0, -0x1
	  bne-      .loc_0xFC
	  cmplwi    r3, 0xFFFF
	  blt-      .loc_0xF4
	  lis       r3, 0x1
	  subi      r3, r3, 0x2

	.loc_0xF4:
	  addi      r0, r3, 0x1
	  rlwinm    r28,r0,0,16,31

	.loc_0xFC:
	  rlwinm    r3,r28,0,16,31
	  bl        -0x1D6CC
	  rlwinm.   r31,r28,0,16,31
	  stw       r3, 0x124(r29)
	  beq-      .loc_0x13C
	  lwz       r3, 0x124(r29)
	  cmplwi    r3, 0
	  beq-      .loc_0x13C
	  mr        r4, r30
	  subi      r5, r31, 0x1
	  bl        0x89178
	  lwz       r0, 0x124(r29)
	  li        r4, 0
	  add       r3, r0, r31
	  stb       r4, -0x1(r3)
	  sth       r28, 0x132(r29)

	.loc_0x13C:
	  lfs       f0, -0x7B00(r2)
	  stfs      f0, 0x10C(r29)
	  stfs      f0, 0x110(r29)
	  stfs      f0, 0x114(r29)
	  lwz       r3, 0x100(r29)
	  cmplwi    r3, 0
	  bne-      .loc_0x168
	  stfs      f0, 0x118(r29)
	  stfs      f0, 0x11C(r29)
	  stfs      f0, 0x120(r29)
	  b         .loc_0x200

	.loc_0x168:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x14(r1)
	  lfd       f1, -0x7AF8(r2)
	  stw       r0, 0x10(r1)
	  lfd       f0, 0x10(r1)
	  fsubs     f0, f0, f1
	  stfs      f0, 0x118(r29)
	  lwz       r3, 0x100(r29)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x28(r12)
	  mtctr     r12
	  bctrl
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x1C(r1)
	  lfd       f1, -0x7AF8(r2)
	  stw       r0, 0x18(r1)
	  lfd       f0, 0x18(r1)
	  fsubs     f0, f0, f1
	  stfs      f0, 0x11C(r29)
	  lwz       r3, 0x100(r29)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x24(r1)
	  lfd       f1, -0x7AF8(r2)
	  stw       r0, 0x20(r1)
	  lfd       f0, 0x20(r1)
	  fsubs     f0, f0, f1
	  stfs      f0, 0x120(r29)

	.loc_0x200:
	  lis       r3, 0x5442
	  li        r0, 0x1
	  addi      r3, r3, 0x5831
	  stw       r3, 0x8(r29)
	  stb       r0, 0x131(r29)
	  lmw       r26, 0x28(r1)
	  lwz       r0, 0x44(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800417A0
 * Size:	000350
 */
void J2DTextBox::private_readStream(J2DPane*, JSURandomInputStream*,
                                    JKRArchive*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x70(r1)
	  mflr      r0
	  stw       r0, 0x74(r1)
	  stmw      r26, 0x58(r1)
	  mr        r29, r5
	  mr        r28, r3
	  mr        r27, r4
	  mr        r3, r29
	  mr        r26, r6
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  mr        r31, r3
	  mr        r3, r29
	  addi      r4, r1, 0x30
	  li        r5, 0x8
	  bl        -0x1B410
	  lwz       r0, 0x30(r1)
	  mr        r3, r28
	  mr        r4, r27
	  mr        r5, r29
	  stw       r0, 0x8(r28)
	  bl        -0xA714
	  mr        r3, r29
	  addi      r4, r1, 0xA
	  li        r5, 0x1
	  bl        -0x1B438
	  lis       r5, 0x464F
	  lbz       r30, 0xA(r1)
	  mr        r3, r28
	  mr        r4, r29
	  mr        r6, r26
	  addi      r5, r5, 0x4E54
	  bl        -0x8468
	  mr.       r27, r3
	  beq-      .loc_0xB8
	  li        r3, 0x70
	  bl        -0x1D994
	  mr.       r0, r3
	  beq-      .loc_0xB4
	  mr        r4, r27
	  li        r5, 0
	  bl        -0x10680
	  mr        r0, r3

	.loc_0xB4:
	  stw       r0, 0x100(r28)

	.loc_0xB8:
	  mr        r3, r29
	  addi      r4, r1, 0x24
	  li        r5, 0x4
	  bl        -0x1B490
	  lwz       r0, 0x24(r1)
	  mr        r3, r29
	  addi      r4, r1, 0x20
	  li        r5, 0x4
	  stw       r0, 0x104(r28)
	  bl        -0x1B4A8
	  lwz       r0, 0x20(r1)
	  mr        r3, r29
	  addi      r4, r1, 0x9
	  li        r5, 0x1
	  stw       r0, 0x108(r28)
	  bl        -0x1B4C0
	  lbz       r0, 0x9(r1)
	  mr        r3, r29
	  addi      r4, r1, 0x14
	  li        r5, 0x2
	  stb       r0, 0x130(r28)
	  bl        -0x1B4D8
	  lha       r4, 0x14(r1)
	  lis       r0, 0x4330
	  stw       r0, 0x38(r1)
	  mr        r3, r29
	  xoris     r0, r4, 0x8000
	  lfd       f1, -0x7AF8(r2)
	  stw       r0, 0x3C(r1)
	  addi      r4, r1, 0x12
	  li        r5, 0x2
	  lfd       f0, 0x38(r1)
	  fsubs     f0, f0, f1
	  stfs      f0, 0x114(r28)
	  bl        -0x1B50C
	  lha       r4, 0x12(r1)
	  lis       r0, 0x4330
	  stw       r0, 0x40(r1)
	  mr        r3, r29
	  xoris     r0, r4, 0x8000
	  lfd       f1, -0x7AF8(r2)
	  stw       r0, 0x44(r1)
	  addi      r4, r1, 0x10
	  li        r5, 0x2
	  lfd       f0, 0x40(r1)
	  fsubs     f0, f0, f1
	  stfs      f0, 0x118(r28)
	  bl        -0x1B540
	  lhz       r5, 0x10(r1)
	  lis       r0, 0x4330
	  stw       r0, 0x48(r1)
	  mr        r3, r29
	  lfd       f1, -0x7AF0(r2)
	  addi      r4, r1, 0xE
	  stw       r5, 0x4C(r1)
	  li        r5, 0x2
	  lfd       f0, 0x48(r1)
	  fsubs     f0, f0, f1
	  stfs      f0, 0x11C(r28)
	  bl        -0x1B570
	  lhz       r5, 0xE(r1)
	  lis       r0, 0x4330
	  stw       r0, 0x50(r1)
	  mr        r3, r29
	  lfd       f1, -0x7AF0(r2)
	  addi      r4, r1, 0xC
	  stw       r5, 0x54(r1)
	  li        r5, 0x2
	  lfd       f0, 0x50(r1)
	  fsubs     f0, f0, f1
	  stfs      f0, 0x120(r28)
	  bl        -0x1B5A0
	  lhz       r0, 0xC(r1)
	  extsh     r26, r0
	  addi      r27, r26, 0x1
	  mr        r3, r27
	  bl        -0x1D9DC
	  stw       r3, 0x124(r28)
	  lwz       r4, 0x124(r28)
	  cmplwi    r4, 0
	  beq-      .loc_0x21C
	  mr        r3, r29
	  mr        r5, r26
	  bl        -0x1B5D0
	  lwz       r3, 0x124(r28)
	  li        r0, 0
	  stbx      r0, r3, r26
	  sth       r27, 0x132(r28)
	  b         .loc_0x23C

	.loc_0x21C:
	  mr        r3, r29
	  mr        r4, r26
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  li        r0, 0
	  sth       r0, 0x132(r28)

	.loc_0x23C:
	  subi      r30, r30, 0xA
	  rlwinm.   r0,r30,0,24,31
	  beq-      .loc_0x280
	  mr        r3, r29
	  addi      r4, r1, 0x8
	  li        r5, 0x1
	  bl        -0x1B620
	  lbz       r0, 0x8(r1)
	  cmplwi    r0, 0
	  beq-      .loc_0x27C
	  mr        r3, r28
	  li        r4, 0x1
	  lwz       r12, 0x0(r28)
	  lwz       r12, 0x28(r12)
	  mtctr     r12
	  bctrl

	.loc_0x27C:
	  subi      r30, r30, 0x1

	.loc_0x280:
	  li        r0, 0
	  li        r3, -0x1
	  stw       r0, 0x2C(r1)
	  rlwinm.   r0,r30,0,24,31
	  lbz       r4, 0x2C(r1)
	  stw       r3, 0x28(r1)
	  lbz       r0, 0x2D(r1)
	  stb       r4, 0x12C(r28)
	  lbz       r3, 0x2E(r1)
	  stb       r0, 0x12D(r28)
	  lbz       r0, 0x2F(r1)
	  stb       r3, 0x12E(r28)
	  lbz       r3, 0x28(r1)
	  stb       r0, 0x12F(r28)
	  lbz       r0, 0x29(r1)
	  stb       r3, 0x128(r28)
	  lbz       r3, 0x2A(r1)
	  stb       r0, 0x129(r28)
	  lbz       r0, 0x2B(r1)
	  stb       r3, 0x12A(r28)
	  stb       r0, 0x12B(r28)
	  beq-      .loc_0x2F4
	  mr        r3, r29
	  addi      r4, r1, 0x1C
	  li        r5, 0x4
	  bl        -0x1B6B0
	  lwz       r0, 0x1C(r1)
	  subi      r30, r30, 0x1
	  stw       r0, 0x12C(r28)

	.loc_0x2F4:
	  rlwinm.   r0,r30,0,24,31
	  beq-      .loc_0x314
	  mr        r3, r29
	  addi      r4, r1, 0x18
	  li        r5, 0x4
	  bl        -0x1B6D4
	  lwz       r0, 0x18(r1)
	  stw       r0, 0x128(r28)

	.loc_0x314:
	  lfs       f0, -0x7B00(r2)
	  mr        r3, r29
	  li        r5, 0
	  stfs      f0, 0x10C(r28)
	  stfs      f0, 0x110(r28)
	  lwz       r0, 0x34(r1)
	  add       r4, r31, r0
	  bl        -0x1B3C8
	  li        r0, 0x1
	  stb       r0, 0x131(r28)
	  lmw       r26, 0x58(r1)
	  lwz       r0, 0x74(r1)
	  mtlr      r0
	  addi      r1, r1, 0x70
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80041AF0
 * Size:	000098
 */
void J2DTextBox::~J2DTextBox()
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
	  beq-      .loc_0x7C
	  lis       r3, 0x804A
	  addi      r0, r3, 0x990
	  stw       r0, 0x0(r30)
	  lbz       r0, 0x131(r30)
	  cmplwi    r0, 0
	  beq-      .loc_0x58
	  lwz       r3, 0x100(r30)
	  cmplwi    r3, 0
	  beq-      .loc_0x58
	  lwz       r12, 0x0(r3)
	  li        r4, 0x1
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl

	.loc_0x58:
	  lwz       r3, 0x124(r30)
	  bl        -0x1DA74
	  mr        r3, r30
	  li        r4, 0
	  bl        -0xA574
	  extsh.    r0, r31
	  ble-      .loc_0x7C
	  mr        r3, r30
	  bl        -0x1DAB4

	.loc_0x7C:
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
 * Address:	80041B88
 * Size:	000008
 */
void J2DTextBox::getFont() const
{
	/*
	.loc_0x0:
	  lwz       r3, 0x100(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80041B90
 * Size:	000070
 */
void J2DTextBox::setFont(JUTFont*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr.       r31, r4
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  beq-      .loc_0x58
	  lbz       r0, 0x131(r30)
	  cmplwi    r0, 0
	  beq-      .loc_0x4C
	  lwz       r3, 0x100(r30)
	  cmplwi    r3, 0
	  beq-      .loc_0x4C
	  lwz       r12, 0x0(r3)
	  li        r4, 0x1
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl

	.loc_0x4C:
	  stw       r31, 0x100(r30)
	  li        r0, 0
	  stb       r0, 0x131(r30)

	.loc_0x58:
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
 * Address:	80041C00
 * Size:	0001A4
 */
void J2DTextBox::draw(float, float)
{
	/*
	.loc_0x0:
	  stwu      r1, -0xD0(r1)
	  mflr      r0
	  stw       r0, 0xD4(r1)
	  stfd      f31, 0xC0(r1)
	  psq_st    f31,0xC8(r1),0,0
	  stfd      f30, 0xB0(r1)
	  psq_st    f30,0xB8(r1),0,0
	  stw       r31, 0xAC(r1)
	  stw       r30, 0xA8(r1)
	  mr        r30, r3
	  fmr       f30, f1
	  lbz       r0, 0xB0(r3)
	  fmr       f31, f2
	  cmplwi    r0, 0
	  beq-      .loc_0x17C
	  lwz       r0, 0x128(r30)
	  addi      r3, r1, 0x48
	  addi      r5, r1, 0x14
	  addi      r6, r1, 0x10
	  stw       r0, 0x8(r1)
	  addi      r7, r1, 0xC
	  addi      r8, r1, 0x8
	  lwz       r0, 0x12C(r30)
	  stw       r0, 0xC(r1)
	  lwz       r0, 0x108(r30)
	  stw       r0, 0x10(r1)
	  lwz       r0, 0x104(r30)
	  stw       r0, 0x14(r1)
	  lwz       r4, 0x100(r30)
	  lfs       f1, 0x114(r30)
	  lfs       f2, 0x118(r30)
	  bl        -0x4400
	  lfs       f1, 0x11C(r30)
	  lfs       f0, -0x7B00(r2)
	  lfs       f2, 0x120(r30)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x98
	  b         .loc_0x9C

	.loc_0x98:
	  fmr       f1, f0

	.loc_0x9C:
	  lfs       f0, -0x7B00(r2)
	  stfs      f1, 0x98(r1)
	  fcmpo     cr0, f2, f0
	  ble-      .loc_0xB0
	  b         .loc_0xB4

	.loc_0xB0:
	  fmr       f2, f0

	.loc_0xB4:
	  stfs      f2, 0x9C(r1)
	  mr        r3, r30
	  lfs       f3, -0x7B00(r2)
	  fmr       f1, f30
	  lwz       r12, 0x0(r30)
	  fmr       f2, f31
	  fmr       f4, f3
	  lwz       r12, 0x48(r12)
	  mtctr     r12
	  bctrl
	  addi      r3, r30, 0x50
	  li        r4, 0
	  bl        0xA7894
	  li        r3, 0
	  bl        0xA792C
	  li        r3, 0
	  bl        0xA6660
	  li        r31, 0

	.loc_0xFC:
	  mr        r3, r31
	  bl        0xA6678
	  addi      r31, r31, 0x1
	  cmpwi     r31, 0x10
	  blt+      .loc_0xFC
	  li        r3, 0x1
	  bl        0xA3288
	  li        r3, 0
	  li        r4, 0x1
	  li        r5, 0x4
	  li        r6, 0x3C
	  li        r7, 0
	  li        r8, 0x7D
	  bl        0xA2FEC
	  lwz       r6, 0x124(r30)
	  cmplwi    r6, 0
	  beq-      .loc_0x15C
	  lfs       f1, -0x7B00(r2)
	  addi      r3, r1, 0x48
	  lbz       r4, 0xB2(r30)
	  subi      r5, r2, 0x7AE8
	  fmr       f2, f1
	  crset     6, 0x6
	  bl        -0x3F4C

	.loc_0x15C:
	  addi      r3, r1, 0x18
	  bl        0xA8540
	  addi      r3, r1, 0x18
	  li        r4, 0
	  bl        0xA780C
	  addi      r3, r1, 0x48
	  li        r4, -0x1
	  bl        -0x4468

	.loc_0x17C:
	  psq_l     f31,0xC8(r1),0,0
	  lfd       f31, 0xC0(r1)
	  psq_l     f30,0xB8(r1),0,0
	  lfd       f30, 0xB0(r1)
	  lwz       r31, 0xAC(r1)
	  lwz       r0, 0xD4(r1)
	  lwz       r30, 0xA8(r1)
	  mtlr      r0
	  addi      r1, r1, 0xD0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80041DA4
 * Size:	0001D0
 */
void J2DTextBox::draw(float, float, float, J2DTextBoxHBinding)
{
	/*
	.loc_0x0:
	  stwu      r1, -0xF0(r1)
	  mflr      r0
	  stw       r0, 0xF4(r1)
	  stfd      f31, 0xE0(r1)
	  psq_st    f31,0xE8(r1),0,0
	  stfd      f30, 0xD0(r1)
	  psq_st    f30,0xD8(r1),0,0
	  stfd      f29, 0xC0(r1)
	  psq_st    f29,0xC8(r1),0,0
	  stw       r31, 0xBC(r1)
	  stw       r30, 0xB8(r1)
	  stw       r29, 0xB4(r1)
	  mr        r29, r3
	  fmr       f29, f1
	  lbz       r0, 0xB0(r3)
	  fmr       f30, f2
	  fmr       f31, f3
	  mr        r30, r4
	  cmplwi    r0, 0
	  beq-      .loc_0x19C
	  lwz       r0, 0x128(r29)
	  addi      r3, r1, 0x48
	  addi      r5, r1, 0x14
	  addi      r6, r1, 0x10
	  stw       r0, 0x8(r1)
	  addi      r7, r1, 0xC
	  addi      r8, r1, 0x8
	  lwz       r0, 0x12C(r29)
	  stw       r0, 0xC(r1)
	  lwz       r0, 0x108(r29)
	  stw       r0, 0x10(r1)
	  lwz       r0, 0x104(r29)
	  stw       r0, 0x14(r1)
	  lwz       r4, 0x100(r29)
	  lfs       f1, 0x114(r29)
	  lfs       f2, 0x118(r29)
	  bl        -0x45B8
	  lfs       f1, 0x11C(r29)
	  lfs       f0, -0x7B00(r2)
	  lfs       f2, 0x120(r29)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0xAC
	  b         .loc_0xB0

	.loc_0xAC:
	  fmr       f1, f0

	.loc_0xB0:
	  lfs       f0, -0x7B00(r2)
	  stfs      f1, 0x98(r1)
	  fcmpo     cr0, f2, f0
	  ble-      .loc_0xC4
	  b         .loc_0xC8

	.loc_0xC4:
	  fmr       f2, f0

	.loc_0xC8:
	  stfs      f2, 0x9C(r1)
	  mr        r3, r29
	  lfs       f3, -0x7B00(r2)
	  fmr       f1, f29
	  lwz       r12, 0x0(r29)
	  fmr       f2, f30
	  fmr       f4, f3
	  lwz       r12, 0x48(r12)
	  mtctr     r12
	  bctrl
	  addi      r3, r29, 0x50
	  li        r4, 0
	  bl        0xA76DC
	  li        r3, 0
	  bl        0xA7774
	  li        r3, 0
	  bl        0xA64A8
	  li        r31, 0

	.loc_0x110:
	  mr        r3, r31
	  bl        0xA64C0
	  addi      r31, r31, 0x1
	  cmpwi     r31, 0x10
	  blt+      .loc_0x110
	  li        r3, 0x1
	  bl        0xA30D0
	  li        r3, 0
	  li        r4, 0x1
	  li        r5, 0x4
	  li        r6, 0x3C
	  li        r7, 0
	  li        r8, 0x7D
	  bl        0xA2E34
	  lwz       r4, 0x124(r29)
	  cmplwi    r4, 0
	  beq-      .loc_0x17C
	  lfs       f2, -0x7B00(r2)
	  fmr       f1, f31
	  lfs       f0, 0x120(r29)
	  mr        r5, r30
	  fmr       f3, f2
	  lbz       r7, 0xB2(r29)
	  fneg      f4, f0
	  addi      r3, r1, 0x48
	  li        r6, 0x2
	  bl        -0x3F04

	.loc_0x17C:
	  addi      r3, r1, 0x18
	  bl        0xA837C
	  addi      r3, r1, 0x18
	  li        r4, 0
	  bl        0xA7648
	  addi      r3, r1, 0x48
	  li        r4, -0x1
	  bl        -0x462C

	.loc_0x19C:
	  psq_l     f31,0xE8(r1),0,0
	  lfd       f31, 0xE0(r1)
	  psq_l     f30,0xD8(r1),0,0
	  lfd       f30, 0xD0(r1)
	  psq_l     f29,0xC8(r1),0,0
	  lfd       f29, 0xC0(r1)
	  lwz       r31, 0xBC(r1)
	  lwz       r30, 0xB8(r1)
	  lwz       r0, 0xF4(r1)
	  lwz       r29, 0xB4(r1)
	  mtlr      r0
	  addi      r1, r1, 0xF0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80041F74
 * Size:	0000F4
 */
void J2DTextBox::setString(const char*, ...)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x90(r1)
	  mflr      r0
	  stw       r0, 0x94(r1)
	  stw       r31, 0x8C(r1)
	  stw       r30, 0x88(r1)
	  mr        r30, r4
	  stw       r29, 0x84(r1)
	  mr        r29, r3
	  bne-      cr1, .loc_0x44
	  stfd      f1, 0x28(r1)
	  stfd      f2, 0x30(r1)
	  stfd      f3, 0x38(r1)
	  stfd      f4, 0x40(r1)
	  stfd      f5, 0x48(r1)
	  stfd      f6, 0x50(r1)
	  stfd      f7, 0x58(r1)
	  stfd      f8, 0x60(r1)

	.loc_0x44:
	  stw       r3, 0x8(r1)
	  addi      r11, r1, 0x98
	  addi      r0, r1, 0x8
	  lis       r3, 0x200
	  stw       r4, 0xC(r1)
	  stw       r5, 0x10(r1)
	  stw       r6, 0x14(r1)
	  stw       r7, 0x18(r1)
	  stw       r8, 0x1C(r1)
	  stw       r9, 0x20(r1)
	  stw       r10, 0x24(r1)
	  stw       r3, 0x68(r1)
	  lwz       r3, 0x124(r29)
	  stw       r11, 0x6C(r1)
	  stw       r0, 0x70(r1)
	  bl        -0x1DF1C
	  mr        r3, r30
	  bl        0x88914
	  mr        r31, r3
	  cmplwi    r31, 0xFFFF
	  blt-      .loc_0xA0
	  lis       r3, 0x1
	  subi      r31, r3, 0x2

	.loc_0xA0:
	  li        r0, 0
	  addi      r3, r31, 0x1
	  sth       r0, 0x132(r29)
	  bl        -0x1E074
	  stw       r3, 0x124(r29)
	  lwz       r0, 0x124(r29)
	  cmplwi    r0, 0
	  beq-      .loc_0xD4
	  addi      r0, r31, 0x1
	  mr        r4, r30
	  sth       r0, 0x132(r29)
	  lwz       r3, 0x124(r29)
	  bl        0x88814

	.loc_0xD4:
	  lwz       r0, 0x94(r1)
	  mr        r3, r31
	  lwz       r31, 0x8C(r1)
	  lwz       r30, 0x88(r1)
	  lwz       r29, 0x84(r1)
	  mtlr      r0
	  addi      r1, r1, 0x90
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80042068
 * Size:	000078
 */
void J2DTextBox::setConnectParent(bool)
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
	  lwz       r3, 0xEC(r3)
	  cmplwi    r3, 0
	  bne-      .loc_0x30
	  li        r3, 0
	  b         .loc_0x60

	.loc_0x30:
	  lwz       r3, 0xC(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  rlwinm    r0,r3,0,16,31
	  cmplwi    r0, 0x11
	  beq-      .loc_0x58
	  li        r3, 0
	  b         .loc_0x60

	.loc_0x58:
	  stb       r31, 0xB5(r30)
	  mr        r3, r31

	.loc_0x60:
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
 * Address:	800420E0
 * Size:	000068
 */
void J2DTextBox::drawSelf(float, float)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x50(r1)
	  mflr      r0
	  stw       r0, 0x54(r1)
	  stfd      f31, 0x48(r1)
	  fmr       f31, f2
	  stfd      f30, 0x40(r1)
	  fmr       f30, f1
	  stw       r31, 0x3C(r1)
	  mr        r31, r3
	  addi      r3, r1, 0x8
	  bl        0xA8198
	  mr        r3, r31
	  fmr       f1, f30
	  lwz       r12, 0x0(r31)
	  fmr       f2, f31
	  addi      r4, r1, 0x8
	  lwz       r12, 0x38(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x54(r1)
	  lfd       f31, 0x48(r1)
	  lfd       f30, 0x40(r1)
	  lwz       r31, 0x3C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x50
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80042148
 * Size:	0001A8
 */
void J2DTextBox::drawSelf(float, float, float (*)[3][4])
{
	/*
	.loc_0x0:
	  stwu      r1, -0xD0(r1)
	  mflr      r0
	  stw       r0, 0xD4(r1)
	  stfd      f31, 0xC0(r1)
	  psq_st    f31,0xC8(r1),0,0
	  stfd      f30, 0xB0(r1)
	  psq_st    f30,0xB8(r1),0,0
	  stw       r31, 0xAC(r1)
	  stw       r30, 0xA8(r1)
	  mr        r30, r3
	  fmr       f30, f1
	  lwz       r0, 0x128(r3)
	  fmr       f31, f2
	  mr        r31, r4
	  addi      r3, r1, 0x48
	  stw       r0, 0x8(r1)
	  addi      r5, r1, 0x14
	  addi      r6, r1, 0x10
	  lwz       r0, 0x12C(r30)
	  addi      r7, r1, 0xC
	  addi      r8, r1, 0x8
	  stw       r0, 0xC(r1)
	  lwz       r0, 0x108(r30)
	  stw       r0, 0x10(r1)
	  lwz       r0, 0x104(r30)
	  stw       r0, 0x14(r1)
	  lwz       r4, 0x100(r30)
	  lfs       f1, 0x114(r30)
	  lfs       f2, 0x118(r30)
	  bl        -0x4940
	  lfs       f1, 0x11C(r30)
	  lfs       f0, -0x7B00(r2)
	  lfs       f2, 0x120(r30)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x90
	  b         .loc_0x94

	.loc_0x90:
	  fmr       f1, f0

	.loc_0x94:
	  lfs       f0, -0x7B00(r2)
	  stfs      f1, 0x98(r1)
	  fcmpo     cr0, f2, f0
	  ble-      .loc_0xA8
	  b         .loc_0xAC

	.loc_0xA8:
	  fmr       f2, f0

	.loc_0xAC:
	  stfs      f2, 0x9C(r1)
	  mr        r3, r31
	  addi      r4, r30, 0x80
	  addi      r5, r1, 0x18
	  bl        0xA80FC
	  addi      r3, r1, 0x18
	  li        r4, 0
	  bl        0xA7368
	  li        r3, 0
	  bl        0xA613C
	  li        r31, 0

	.loc_0xD8:
	  mr        r3, r31
	  bl        0xA6154
	  addi      r31, r31, 0x1
	  cmpwi     r31, 0x10
	  blt+      .loc_0xD8
	  li        r3, 0x1
	  bl        0xA2D64
	  li        r3, 0
	  li        r4, 0x1
	  li        r5, 0x4
	  li        r6, 0x3C
	  li        r7, 0
	  li        r8, 0x7D
	  bl        0xA2AC8
	  lfs       f1, 0x20(r30)
	  addi      r3, r1, 0x48
	  lfs       f0, 0x24(r30)
	  fadds     f1, f30, f1
	  fadds     f2, f31, f0
	  bl        -0x4590
	  lwz       r4, 0x124(r30)
	  cmplwi    r4, 0
	  beq-      .loc_0x174
	  lfs       f1, 0x28(r30)
	  addi      r3, r1, 0x48
	  lfs       f0, 0x20(r30)
	  lbz       r0, 0x130(r30)
	  fsubs     f1, f1, f0
	  lfs       f3, -0x7AE4(r2)
	  lfs       f2, 0x2C(r30)
	  rlwinm    r5,r0,30,30,31
	  lfs       f0, 0x24(r30)
	  rlwinm    r6,r0,0,30,31
	  fadds     f1, f3, f1
	  lfs       f3, 0x10C(r30)
	  fsubs     f2, f2, f0
	  lfs       f4, 0x110(r30)
	  lbz       r7, 0xB3(r30)
	  bl        -0x42A0

	.loc_0x174:
	  addi      r3, r1, 0x48
	  li        r4, -0x1
	  bl        -0x49B4
	  psq_l     f31,0xC8(r1),0,0
	  lfd       f31, 0xC0(r1)
	  psq_l     f30,0xB8(r1),0,0
	  lfd       f30, 0xB0(r1)
	  lwz       r31, 0xAC(r1)
	  lwz       r0, 0xD4(r1)
	  lwz       r30, 0xA8(r1)
	  mtlr      r0
	  addi      r1, r1, 0xD0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800422F0
 * Size:	000104
 */
void J2DTextBox::resize(float, float)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stfd      f31, 0x20(r1)
	  psq_st    f31,0x28(r1),0,0
	  stfd      f30, 0x10(r1)
	  psq_st    f30,0x18(r1),0,0
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  fmr       f30, f1
	  lbz       r0, 0xB5(r3)
	  fmr       f31, f2
	  cmplwi    r0, 0
	  beq-      .loc_0xCC
	  addic.    r0, r30, 0xDC
	  beq-      .loc_0xCC
	  lwz       r3, 0xEC(r30)
	  cmplwi    r3, 0
	  beq-      .loc_0xCC
	  lwz       r31, 0xC(r3)
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  rlwinm    r0,r3,0,16,31
	  cmplwi    r0, 0x11
	  bne-      .loc_0xCC
	  lfs       f3, 0x28(r30)
	  mr        r3, r31
	  lfs       f2, 0x20(r30)
	  lfs       f1, 0x2C(r30)
	  lfs       f0, 0x24(r30)
	  fsubs     f2, f3, f2
	  lfs       f4, 0x28(r31)
	  fsubs     f0, f1, f0
	  lfs       f3, 0x20(r31)
	  lwz       r12, 0x0(r31)
	  fsubs     f1, f30, f2
	  fsubs     f4, f4, f3
	  lfs       f3, 0x2C(r31)
	  lfs       f2, 0x24(r31)
	  fsubs     f0, f31, f0
	  lwz       r12, 0x18(r12)
	  fadds     f1, f4, f1
	  fsubs     f2, f3, f2
	  fadds     f2, f2, f0
	  mtctr     r12
	  bctrl
	  b         .loc_0xDC

	.loc_0xCC:
	  fmr       f1, f30
	  mr        r3, r30
	  fmr       f2, f31
	  bl        -0xA1B0

	.loc_0xDC:
	  psq_l     f31,0x28(r1),0,0
	  lfd       f31, 0x20(r1)
	  psq_l     f30,0x18(r1),0,0
	  lfd       f30, 0x10(r1)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x34(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800423F4
 * Size:	00006C
 */
void J2DTextBox::isUsed(const ResFONT*)
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
	  lwz       r3, 0x100(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x48
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  cmplw     r3, r31
	  bne-      .loc_0x48
	  li        r3, 0x1
	  b         .loc_0x54

	.loc_0x48:
	  mr        r3, r30
	  mr        r4, r31
	  bl        -0x99C8

	.loc_0x54:
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
 * Address:	80042460
 * Size:	000008
 */
u32 J2DTextBox::getTypeID() const { return 0x13; }

/*
 * --INFO--
 * Address:	80042468
 * Size:	000028
 */
void J2DTextBox::setBlack(JUtility::TColor)
{
	/*
	.loc_0x0:
	  lbz       r5, 0x0(r4)
	  lbz       r0, 0x1(r4)
	  stb       r5, 0x12C(r3)
	  lbz       r5, 0x2(r4)
	  stb       r0, 0x12D(r3)
	  lbz       r0, 0x3(r4)
	  stb       r5, 0x12E(r3)
	  stb       r0, 0x12F(r3)
	  li        r3, 0x1
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80042490
 * Size:	000028
 */
void J2DTextBox::setWhite(JUtility::TColor)
{
	/*
	.loc_0x0:
	  lbz       r5, 0x0(r4)
	  lbz       r0, 0x1(r4)
	  stb       r5, 0x128(r3)
	  lbz       r5, 0x2(r4)
	  stb       r0, 0x129(r3)
	  lbz       r0, 0x3(r4)
	  stb       r5, 0x12A(r3)
	  stb       r0, 0x12B(r3)
	  li        r3, 0x1
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800424B8
 * Size:	000048
 */
void J2DTextBox::setBlackWhite(JUtility::TColor, JUtility::TColor)
{
	/*
	.loc_0x0:
	  lbz       r6, 0x0(r4)
	  lbz       r0, 0x1(r4)
	  stb       r6, 0x12C(r3)
	  lbz       r6, 0x2(r4)
	  stb       r0, 0x12D(r3)
	  lbz       r0, 0x3(r4)
	  stb       r6, 0x12E(r3)
	  lbz       r4, 0x0(r5)
	  stb       r0, 0x12F(r3)
	  lbz       r0, 0x1(r5)
	  stb       r4, 0x128(r3)
	  lbz       r4, 0x2(r5)
	  stb       r0, 0x129(r3)
	  lbz       r0, 0x3(r5)
	  stb       r4, 0x12A(r3)
	  stb       r0, 0x12B(r3)
	  li        r3, 0x1
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80042500
 * Size:	00000C
 */
void J2DTextBox::getBlack() const
{
	/*
	.loc_0x0:
	  lwz       r0, 0x12C(r4)
	  stw       r0, 0x0(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8004250C
 * Size:	00000C
 */
void J2DTextBox::getWhite() const
{
	/*
	.loc_0x0:
	  lwz       r0, 0x128(r4)
	  stw       r0, 0x0(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80042518
 * Size:	000008
 */
u32 J2DTextBox::getMaterial() const { return 0x0; }

/*
 * --INFO--
 * Address:	80042520
 * Size:	000020
 */
void J2DTextBox::isUsed(const ResTIMG*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        -0x9B38
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80042540
 * Size:	000004
 */
void J2DTextBox::rewriteAlpha() { }
