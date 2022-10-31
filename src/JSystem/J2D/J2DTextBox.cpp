#include "JSystem/J2D/J2DMaterial.h"
#include "JSystem/J2D/J2DPane.h"
#include "JSystem/J2D/J2DTevBlock.h"
#include "JSystem/JUT/TColor.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__10J2DTextBox
    __vt__10J2DTextBox:
        .4byte 0
        .4byte 0
        .4byte __dt__10J2DTextBoxFv
        .4byte getTypeID__10J2DTextBoxCFv
        .4byte move__7J2DPaneFff
        .4byte add__7J2DPaneFff
        .4byte resize__10J2DTextBoxFff
        .4byte setCullBack__7J2DPaneFb
        .4byte setCullBack__7J2DPaneF11_GXCullMode
        .4byte setAlpha__7J2DPaneFUc
        .4byte setConnectParent__10J2DTextBoxFb
        .4byte calcMtx__7J2DPaneFv
        .4byte update__7J2DPaneFv
        .4byte drawSelf__10J2DTextBoxFff
        .4byte drawSelf__10J2DTextBoxFffPA3_A4_f
        .4byte search__7J2DPaneFUx
        .4byte searchUserInfo__7J2DPaneFUx
        .4byte makeMatrix__7J2DPaneFff
        .4byte makeMatrix__7J2DPaneFffff
        .4byte isUsed__10J2DTextBoxFPC7ResTIMG
        .4byte isUsed__10J2DTextBoxFPC7ResFONT
        .4byte clearAnmTransform__7J2DPaneFv
        .4byte rewriteAlpha__10J2DTextBoxFv
        .4byte setAnimation__7J2DPaneFP10J2DAnmBase
        .4byte setAnimation__7J2DPaneFP15J2DAnmTransform
        .4byte setAnimation__7J2DPaneFP11J2DAnmColor
        .4byte setAnimation__7J2DPaneFP16J2DAnmTexPattern
        .4byte setAnimation__7J2DPaneFP19J2DAnmTextureSRTKey
        .4byte setAnimation__7J2DPaneFP15J2DAnmTevRegKey
        .4byte setAnimation__7J2DPaneFP20J2DAnmVisibilityFull
        .4byte setAnimation__7J2DPaneFP14J2DAnmVtxColor
        .4byte animationTransform__7J2DPaneFPC15J2DAnmTransform
        .4byte setVisibileAnimation__7J2DPaneFP20J2DAnmVisibilityFull
        .4byte setAnimationVF__7J2DPaneFP20J2DAnmVisibilityFull
        .4byte setVtxColorAnimation__7J2DPaneFP14J2DAnmVtxColor
        .4byte setAnimationVC__7J2DPaneFP14J2DAnmVtxColor
        .4byte animationPane__7J2DPaneFPC15J2DAnmTransform
        .4byte draw__10J2DTextBoxFff
        .4byte draw__10J2DTextBoxFfff18J2DTextBoxHBinding
        .4byte setFont__10J2DTextBoxFP7JUTFont
        .4byte getFont__10J2DTextBoxCFv
        .4byte setBlack__10J2DTextBoxFQ28JUtility6TColor
        .4byte setWhite__10J2DTextBoxFQ28JUtility6TColor
        .4byte setBlackWhite__10J2DTextBoxFQ28JUtility6TColorQ28JUtility6TColor
        .4byte getBlack__10J2DTextBoxCFv
        .4byte getWhite__10J2DTextBoxCFv
        .4byte getMaterial__10J2DTextBoxCFv
        .4byte 0

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80516860
    lbl_80516860:
        .4byte 0x00000000
        .4byte 0x00000000
    .global lbl_80516868
    lbl_80516868:
        .4byte 0x43300000
        .4byte 0x80000000
    .global lbl_80516870
    lbl_80516870:
        .4byte 0x43300000
        .4byte 0x00000000
    .global lbl_80516878
    lbl_80516878:
        .4byte 0x25730000
    .global lbl_8051687C
    lbl_8051687C:
        .4byte 0x38D1B717
*/

/*
 * --INFO--
 * Address:	80040F74
 * Size:	000078
 */
J2DTextBox::J2DTextBox()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       __ct__7J2DPaneFv
	lis      r3, __vt__10J2DTextBox@ha
	li       r9, 0
	addi     r3, r3, __vt__10J2DTextBox@l
	li       r0, -1
	stw      r3, 0(r31)
	mr       r3, r31
	li       r4, 0
	li       r5, 0
	stw      r9, 0x100(r31)
	li       r6, 0
	li       r7, 2
	li       r8, 2
	stw      r0, 0x104(r31)
	stw      r0, 0x108(r31)
	stw      r9, 0x124(r31)
	stw      r0, 0x128(r31)
	stw      r0, 0x12c(r31)
	bl
	initiate__10J2DTextBoxFPC7ResFONTPCcs18J2DTextBoxHBinding18J2DTextBoxVBinding
	lwz      r0, 0x14(r1)
	mr       r3, r31
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80040FEC
 * Size:	000094
 */
J2DTextBox::J2DTextBox(J2DPane*, JSURandomInputStream*, JKRArchive*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r6
	stw      r30, 0x18(r1)
	mr       r30, r5
	stw      r29, 0x14(r1)
	mr       r29, r4
	stw      r28, 0x10(r1)
	mr       r28, r3
	bl       __ct__7J2DPaneFv
	lis      r3, __vt__10J2DTextBox@ha
	li       r7, 0
	addi     r3, r3, __vt__10J2DTextBox@l
	li       r0, -1
	stw      r3, 0(r28)
	mr       r3, r28
	mr       r4, r29
	mr       r5, r30
	stw      r7, 0x100(r28)
	mr       r6, r31
	stw      r0, 0x104(r28)
	stw      r0, 0x108(r28)
	stw      r7, 0x124(r28)
	stw      r0, 0x128(r28)
	stw      r0, 0x12c(r28)
	bl
	private_readStream__10J2DTextBoxFP7J2DPaneP20JSURandomInputStreamP10JKRArchive
	lwz      r0, 0x24(r1)
	mr       r3, r28
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r28, 0x10(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80041080
 * Size:	000460
 */
J2DTextBox::J2DTextBox(J2DPane*, JSURandomInputStream*, unsigned long, J2DMaterial*)
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
JUTFont* J2DTevBlock::getFont() { return nullptr; }

/*
 * --INFO--
 * Address:	800414EC
 * Size:	00008C
 */
J2DTextBox::J2DTextBox(unsigned long long, const JGeometry::TBox2f&, const ResFONT*, const char*, short, J2DTextBoxHBinding,
                       J2DTextBoxVBinding)
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
void J2DTextBox::initiate(const ResFONT*, const char*, short, J2DTextBoxHBinding, J2DTextBoxVBinding)
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
void J2DTextBox::private_readStream(J2DPane*, JSURandomInputStream*, JKRArchive*)
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
J2DTextBox::~J2DTextBox()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_80041B6C
	lis      r3, __vt__10J2DTextBox@ha
	addi     r0, r3, __vt__10J2DTextBox@l
	stw      r0, 0(r30)
	lbz      r0, 0x131(r30)
	cmplwi   r0, 0
	beq      lbl_80041B48
	lwz      r3, 0x100(r30)
	cmplwi   r3, 0
	beq      lbl_80041B48
	lwz      r12, 0(r3)
	li       r4, 1
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl

lbl_80041B48:
	lwz      r3, 0x124(r30)
	bl       __dla__FPv
	mr       r3, r30
	li       r4, 0
	bl       __dt__7J2DPaneFv
	extsh.   r0, r31
	ble      lbl_80041B6C
	mr       r3, r30
	bl       __dl__FPv

lbl_80041B6C:
	lwz      r0, 0x14(r1)
	mr       r3, r30
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80041B88
 * Size:	000008
 */
JUTResFont* J2DTextBox::getFont() const
{
	/*
	lwz      r3, 0x100(r3)
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
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	or.      r31, r4, r4
	stw      r30, 8(r1)
	mr       r30, r3
	beq      lbl_80041BE8
	lbz      r0, 0x131(r30)
	cmplwi   r0, 0
	beq      lbl_80041BDC
	lwz      r3, 0x100(r30)
	cmplwi   r3, 0
	beq      lbl_80041BDC
	lwz      r12, 0(r3)
	li       r4, 1
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl

lbl_80041BDC:
	stw      r31, 0x100(r30)
	li       r0, 0
	stb      r0, 0x131(r30)

lbl_80041BE8:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
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
	stwu     r1, -0xd0(r1)
	mflr     r0
	stw      r0, 0xd4(r1)
	stfd     f31, 0xc0(r1)
	psq_st   f31, 200(r1), 0, qr0
	stfd     f30, 0xb0(r1)
	psq_st   f30, 184(r1), 0, qr0
	stw      r31, 0xac(r1)
	stw      r30, 0xa8(r1)
	mr       r30, r3
	fmr      f30, f1
	lbz      r0, 0xb0(r3)
	fmr      f31, f2
	cmplwi   r0, 0
	beq      lbl_80041D7C
	lwz      r0, 0x128(r30)
	addi     r3, r1, 0x48
	addi     r5, r1, 0x14
	addi     r6, r1, 0x10
	stw      r0, 8(r1)
	addi     r7, r1, 0xc
	addi     r8, r1, 8
	lwz      r0, 0x12c(r30)
	stw      r0, 0xc(r1)
	lwz      r0, 0x108(r30)
	stw      r0, 0x10(r1)
	lwz      r0, 0x104(r30)
	stw      r0, 0x14(r1)
	lwz      r4, 0x100(r30)
	lfs      f1, 0x114(r30)
	lfs      f2, 0x118(r30)
	bl
__ct__8J2DPrintFP7JUTFontffQ28JUtility6TColorQ28JUtility6TColorQ28JUtility6TColorQ28JUtility6TColor
	lfs      f1, 0x11c(r30)
	lfs      f0, lbl_80516860@sda21(r2)
	lfs      f2, 0x120(r30)
	fcmpo    cr0, f1, f0
	ble      lbl_80041C98
	b        lbl_80041C9C

lbl_80041C98:
	fmr      f1, f0

lbl_80041C9C:
	lfs      f0, lbl_80516860@sda21(r2)
	stfs     f1, 0x98(r1)
	fcmpo    cr0, f2, f0
	ble      lbl_80041CB0
	b        lbl_80041CB4

lbl_80041CB0:
	fmr      f2, f0

lbl_80041CB4:
	stfs     f2, 0x9c(r1)
	mr       r3, r30
	lfs      f3, lbl_80516860@sda21(r2)
	fmr      f1, f30
	lwz      r12, 0(r30)
	fmr      f2, f31
	fmr      f4, f3
	lwz      r12, 0x48(r12)
	mtctr    r12
	bctrl
	addi     r3, r30, 0x50
	li       r4, 0
	bl       GXLoadPosMtxImm
	li       r3, 0
	bl       GXSetCurrentMtx
	li       r3, 0
	bl       GXSetNumIndStages
	li       r31, 0

lbl_80041CFC:
	mr       r3, r31
	bl       GXSetTevDirect
	addi     r31, r31, 1
	cmpwi    r31, 0x10
	blt      lbl_80041CFC
	li       r3, 1
	bl       GXSetNumTexGens
	li       r3, 0
	li       r4, 1
	li       r5, 4
	li       r6, 0x3c
	li       r7, 0
	li       r8, 0x7d
	bl       GXSetTexCoordGen2
	lwz      r6, 0x124(r30)
	cmplwi   r6, 0
	beq      lbl_80041D5C
	lfs      f1, lbl_80516860@sda21(r2)
	addi     r3, r1, 0x48
	lbz      r4, 0xb2(r30)
	addi     r5, r2, lbl_80516878@sda21
	fmr      f2, f1
	crset    6
	bl       print__8J2DPrintFffUcPCce

lbl_80041D5C:
	addi     r3, r1, 0x18
	bl       PSMTXIdentity
	addi     r3, r1, 0x18
	li       r4, 0
	bl       GXLoadPosMtxImm
	addi     r3, r1, 0x48
	li       r4, -1
	bl       __dt__8J2DPrintFv

lbl_80041D7C:
	psq_l    f31, 200(r1), 0, qr0
	lfd      f31, 0xc0(r1)
	psq_l    f30, 184(r1), 0, qr0
	lfd      f30, 0xb0(r1)
	lwz      r31, 0xac(r1)
	lwz      r0, 0xd4(r1)
	lwz      r30, 0xa8(r1)
	mtlr     r0
	addi     r1, r1, 0xd0
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
	stwu     r1, -0xf0(r1)
	mflr     r0
	stw      r0, 0xf4(r1)
	stfd     f31, 0xe0(r1)
	psq_st   f31, 232(r1), 0, qr0
	stfd     f30, 0xd0(r1)
	psq_st   f30, 216(r1), 0, qr0
	stfd     f29, 0xc0(r1)
	psq_st   f29, 200(r1), 0, qr0
	stw      r31, 0xbc(r1)
	stw      r30, 0xb8(r1)
	stw      r29, 0xb4(r1)
	mr       r29, r3
	fmr      f29, f1
	lbz      r0, 0xb0(r3)
	fmr      f30, f2
	fmr      f31, f3
	mr       r30, r4
	cmplwi   r0, 0
	beq      lbl_80041F40
	lwz      r0, 0x128(r29)
	addi     r3, r1, 0x48
	addi     r5, r1, 0x14
	addi     r6, r1, 0x10
	stw      r0, 8(r1)
	addi     r7, r1, 0xc
	addi     r8, r1, 8
	lwz      r0, 0x12c(r29)
	stw      r0, 0xc(r1)
	lwz      r0, 0x108(r29)
	stw      r0, 0x10(r1)
	lwz      r0, 0x104(r29)
	stw      r0, 0x14(r1)
	lwz      r4, 0x100(r29)
	lfs      f1, 0x114(r29)
	lfs      f2, 0x118(r29)
	bl
__ct__8J2DPrintFP7JUTFontffQ28JUtility6TColorQ28JUtility6TColorQ28JUtility6TColorQ28JUtility6TColor
	lfs      f1, 0x11c(r29)
	lfs      f0, lbl_80516860@sda21(r2)
	lfs      f2, 0x120(r29)
	fcmpo    cr0, f1, f0
	ble      lbl_80041E50
	b        lbl_80041E54

lbl_80041E50:
	fmr      f1, f0

lbl_80041E54:
	lfs      f0, lbl_80516860@sda21(r2)
	stfs     f1, 0x98(r1)
	fcmpo    cr0, f2, f0
	ble      lbl_80041E68
	b        lbl_80041E6C

lbl_80041E68:
	fmr      f2, f0

lbl_80041E6C:
	stfs     f2, 0x9c(r1)
	mr       r3, r29
	lfs      f3, lbl_80516860@sda21(r2)
	fmr      f1, f29
	lwz      r12, 0(r29)
	fmr      f2, f30
	fmr      f4, f3
	lwz      r12, 0x48(r12)
	mtctr    r12
	bctrl
	addi     r3, r29, 0x50
	li       r4, 0
	bl       GXLoadPosMtxImm
	li       r3, 0
	bl       GXSetCurrentMtx
	li       r3, 0
	bl       GXSetNumIndStages
	li       r31, 0

lbl_80041EB4:
	mr       r3, r31
	bl       GXSetTevDirect
	addi     r31, r31, 1
	cmpwi    r31, 0x10
	blt      lbl_80041EB4
	li       r3, 1
	bl       GXSetNumTexGens
	li       r3, 0
	li       r4, 1
	li       r5, 4
	li       r6, 0x3c
	li       r7, 0
	li       r8, 0x7d
	bl       GXSetTexCoordGen2
	lwz      r4, 0x124(r29)
	cmplwi   r4, 0
	beq      lbl_80041F20
	lfs      f2, lbl_80516860@sda21(r2)
	fmr      f1, f31
	lfs      f0, 0x120(r29)
	mr       r5, r30
	fmr      f3, f2
	lbz      r7, 0xb2(r29)
	fneg     f4, f0
	addi     r3, r1, 0x48
	li       r6, 2
	bl printReturn__8J2DPrintFPCcff18J2DTextBoxHBinding18J2DTextBoxVBindingffUc

lbl_80041F20:
	addi     r3, r1, 0x18
	bl       PSMTXIdentity
	addi     r3, r1, 0x18
	li       r4, 0
	bl       GXLoadPosMtxImm
	addi     r3, r1, 0x48
	li       r4, -1
	bl       __dt__8J2DPrintFv

lbl_80041F40:
	psq_l    f31, 232(r1), 0, qr0
	lfd      f31, 0xe0(r1)
	psq_l    f30, 216(r1), 0, qr0
	lfd      f30, 0xd0(r1)
	psq_l    f29, 200(r1), 0, qr0
	lfd      f29, 0xc0(r1)
	lwz      r31, 0xbc(r1)
	lwz      r30, 0xb8(r1)
	lwz      r0, 0xf4(r1)
	lwz      r29, 0xb4(r1)
	mtlr     r0
	addi     r1, r1, 0xf0
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
	stwu     r1, -0x90(r1)
	mflr     r0
	stw      r0, 0x94(r1)
	stw      r31, 0x8c(r1)
	stw      r30, 0x88(r1)
	mr       r30, r4
	stw      r29, 0x84(r1)
	mr       r29, r3
	bne      cr1, lbl_80041FB8
	stfd     f1, 0x28(r1)
	stfd     f2, 0x30(r1)
	stfd     f3, 0x38(r1)
	stfd     f4, 0x40(r1)
	stfd     f5, 0x48(r1)
	stfd     f6, 0x50(r1)
	stfd     f7, 0x58(r1)
	stfd     f8, 0x60(r1)

lbl_80041FB8:
	stw      r3, 8(r1)
	addi     r11, r1, 0x98
	addi     r0, r1, 8
	lis      r3, 0x200
	stw      r4, 0xc(r1)
	stw      r5, 0x10(r1)
	stw      r6, 0x14(r1)
	stw      r7, 0x18(r1)
	stw      r8, 0x1c(r1)
	stw      r9, 0x20(r1)
	stw      r10, 0x24(r1)
	stw      r3, 0x68(r1)
	lwz      r3, 0x124(r29)
	stw      r11, 0x6c(r1)
	stw      r0, 0x70(r1)
	bl       __dla__FPv
	mr       r3, r30
	bl       strlen
	mr       r31, r3
	cmplwi   r31, 0xffff
	blt      lbl_80042014
	lis      r3, 0x0000FFFE@ha
	addi     r31, r3, 0x0000FFFE@l

lbl_80042014:
	li       r0, 0
	addi     r3, r31, 1
	sth      r0, 0x132(r29)
	bl       __nwa__FUl
	stw      r3, 0x124(r29)
	lwz      r0, 0x124(r29)
	cmplwi   r0, 0
	beq      lbl_80042048
	addi     r0, r31, 1
	mr       r4, r30
	sth      r0, 0x132(r29)
	lwz      r3, 0x124(r29)
	bl       strcpy

lbl_80042048:
	lwz      r0, 0x94(r1)
	mr       r3, r31
	lwz      r31, 0x8c(r1)
	lwz      r30, 0x88(r1)
	lwz      r29, 0x84(r1)
	mtlr     r0
	addi     r1, r1, 0x90
	blr
	*/
}

/*
 * --INFO--
 * Address:	80042068
 * Size:	000078
 */
bool J2DTextBox::setConnectParent(bool)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r3, 0xec(r3)
	cmplwi   r3, 0
	bne      lbl_80042098
	li       r3, 0
	b        lbl_800420C8

lbl_80042098:
	lwz      r3, 0xc(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	clrlwi   r0, r3, 0x10
	cmplwi   r0, 0x11
	beq      lbl_800420C0
	li       r3, 0
	b        lbl_800420C8

lbl_800420C0:
	stb      r31, 0xb5(r30)
	mr       r3, r31

lbl_800420C8:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
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
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	stfd     f31, 0x48(r1)
	fmr      f31, f2
	stfd     f30, 0x40(r1)
	fmr      f30, f1
	stw      r31, 0x3c(r1)
	mr       r31, r3
	addi     r3, r1, 8
	bl       PSMTXIdentity
	mr       r3, r31
	fmr      f1, f30
	lwz      r12, 0(r31)
	fmr      f2, f31
	addi     r4, r1, 8
	lwz      r12, 0x38(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x54(r1)
	lfd      f31, 0x48(r1)
	lfd      f30, 0x40(r1)
	lwz      r31, 0x3c(r1)
	mtlr     r0
	addi     r1, r1, 0x50
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
	stwu     r1, -0xd0(r1)
	mflr     r0
	stw      r0, 0xd4(r1)
	stfd     f31, 0xc0(r1)
	psq_st   f31, 200(r1), 0, qr0
	stfd     f30, 0xb0(r1)
	psq_st   f30, 184(r1), 0, qr0
	stw      r31, 0xac(r1)
	stw      r30, 0xa8(r1)
	mr       r30, r3
	fmr      f30, f1
	lwz      r0, 0x128(r3)
	fmr      f31, f2
	mr       r31, r4
	addi     r3, r1, 0x48
	stw      r0, 8(r1)
	addi     r5, r1, 0x14
	addi     r6, r1, 0x10
	lwz      r0, 0x12c(r30)
	addi     r7, r1, 0xc
	addi     r8, r1, 8
	stw      r0, 0xc(r1)
	lwz      r0, 0x108(r30)
	stw      r0, 0x10(r1)
	lwz      r0, 0x104(r30)
	stw      r0, 0x14(r1)
	lwz      r4, 0x100(r30)
	lfs      f1, 0x114(r30)
	lfs      f2, 0x118(r30)
	bl
__ct__8J2DPrintFP7JUTFontffQ28JUtility6TColorQ28JUtility6TColorQ28JUtility6TColorQ28JUtility6TColor
	lfs      f1, 0x11c(r30)
	lfs      f0, lbl_80516860@sda21(r2)
	lfs      f2, 0x120(r30)
	fcmpo    cr0, f1, f0
	ble      lbl_800421D8
	b        lbl_800421DC

lbl_800421D8:
	fmr      f1, f0

lbl_800421DC:
	lfs      f0, lbl_80516860@sda21(r2)
	stfs     f1, 0x98(r1)
	fcmpo    cr0, f2, f0
	ble      lbl_800421F0
	b        lbl_800421F4

lbl_800421F0:
	fmr      f2, f0

lbl_800421F4:
	stfs     f2, 0x9c(r1)
	mr       r3, r31
	addi     r4, r30, 0x80
	addi     r5, r1, 0x18
	bl       PSMTXConcat
	addi     r3, r1, 0x18
	li       r4, 0
	bl       GXLoadPosMtxImm
	li       r3, 0
	bl       GXSetNumIndStages
	li       r31, 0

lbl_80042220:
	mr       r3, r31
	bl       GXSetTevDirect
	addi     r31, r31, 1
	cmpwi    r31, 0x10
	blt      lbl_80042220
	li       r3, 1
	bl       GXSetNumTexGens
	li       r3, 0
	li       r4, 1
	li       r5, 4
	li       r6, 0x3c
	li       r7, 0
	li       r8, 0x7d
	bl       GXSetTexCoordGen2
	lfs      f1, 0x20(r30)
	addi     r3, r1, 0x48
	lfs      f0, 0x24(r30)
	fadds    f1, f30, f1
	fadds    f2, f31, f0
	bl       locate__8J2DPrintFff
	lwz      r4, 0x124(r30)
	cmplwi   r4, 0
	beq      lbl_800422BC
	lfs      f1, 0x28(r30)
	addi     r3, r1, 0x48
	lfs      f0, 0x20(r30)
	lbz      r0, 0x130(r30)
	fsubs    f1, f1, f0
	lfs      f3, lbl_8051687C@sda21(r2)
	lfs      f2, 0x2c(r30)
	rlwinm   r5, r0, 0x1e, 0x1e, 0x1f
	lfs      f0, 0x24(r30)
	clrlwi   r6, r0, 0x1e
	fadds    f1, f3, f1
	lfs      f3, 0x10c(r30)
	fsubs    f2, f2, f0
	lfs      f4, 0x110(r30)
	lbz      r7, 0xb3(r30)
	bl printReturn__8J2DPrintFPCcff18J2DTextBoxHBinding18J2DTextBoxVBindingffUc

lbl_800422BC:
	addi     r3, r1, 0x48
	li       r4, -1
	bl       __dt__8J2DPrintFv
	psq_l    f31, 200(r1), 0, qr0
	lfd      f31, 0xc0(r1)
	psq_l    f30, 184(r1), 0, qr0
	lfd      f30, 0xb0(r1)
	lwz      r31, 0xac(r1)
	lwz      r0, 0xd4(r1)
	lwz      r30, 0xa8(r1)
	mtlr     r0
	addi     r1, r1, 0xd0
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
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stfd     f31, 0x20(r1)
	psq_st   f31, 40(r1), 0, qr0
	stfd     f30, 0x10(r1)
	psq_st   f30, 24(r1), 0, qr0
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r30, r3
	fmr      f30, f1
	lbz      r0, 0xb5(r3)
	fmr      f31, f2
	cmplwi   r0, 0
	beq      lbl_800423BC
	addic.   r0, r30, 0xdc
	beq      lbl_800423BC
	lwz      r3, 0xec(r30)
	cmplwi   r3, 0
	beq      lbl_800423BC
	lwz      r31, 0xc(r3)
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	clrlwi   r0, r3, 0x10
	cmplwi   r0, 0x11
	bne      lbl_800423BC
	lfs      f3, 0x28(r30)
	mr       r3, r31
	lfs      f2, 0x20(r30)
	lfs      f1, 0x2c(r30)
	lfs      f0, 0x24(r30)
	fsubs    f2, f3, f2
	lfs      f4, 0x28(r31)
	fsubs    f0, f1, f0
	lfs      f3, 0x20(r31)
	lwz      r12, 0(r31)
	fsubs    f1, f30, f2
	fsubs    f4, f4, f3
	lfs      f3, 0x2c(r31)
	lfs      f2, 0x24(r31)
	fsubs    f0, f31, f0
	lwz      r12, 0x18(r12)
	fadds    f1, f4, f1
	fsubs    f2, f3, f2
	fadds    f2, f2, f0
	mtctr    r12
	bctrl
	b        lbl_800423CC

lbl_800423BC:
	fmr      f1, f30
	mr       r3, r30
	fmr      f2, f31
	bl       resize__7J2DPaneFff

lbl_800423CC:
	psq_l    f31, 40(r1), 0, qr0
	lfd      f31, 0x20(r1)
	psq_l    f30, 24(r1), 0, qr0
	lfd      f30, 0x10(r1)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x34(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	800423F4
 * Size:	00006C
 */
bool J2DTextBox::isUsed(const ResFONT*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r3, 0x100(r3)
	cmplwi   r3, 0
	beq      lbl_8004243C
	lwz      r12, 0(r3)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	cmplw    r3, r31
	bne      lbl_8004243C
	li       r3, 1
	b        lbl_80042448

lbl_8004243C:
	mr       r3, r30
	mr       r4, r31
	bl       isUsed__7J2DPaneFPC7ResFONT

lbl_80042448:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
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
	lbz      r5, 0(r4)
	lbz      r0, 1(r4)
	stb      r5, 0x12c(r3)
	lbz      r5, 2(r4)
	stb      r0, 0x12d(r3)
	lbz      r0, 3(r4)
	stb      r5, 0x12e(r3)
	stb      r0, 0x12f(r3)
	li       r3, 1
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
	lbz      r5, 0(r4)
	lbz      r0, 1(r4)
	stb      r5, 0x128(r3)
	lbz      r5, 2(r4)
	stb      r0, 0x129(r3)
	lbz      r0, 3(r4)
	stb      r5, 0x12a(r3)
	stb      r0, 0x12b(r3)
	li       r3, 1
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
	lbz      r6, 0(r4)
	lbz      r0, 1(r4)
	stb      r6, 0x12c(r3)
	lbz      r6, 2(r4)
	stb      r0, 0x12d(r3)
	lbz      r0, 3(r4)
	stb      r6, 0x12e(r3)
	lbz      r4, 0(r5)
	stb      r0, 0x12f(r3)
	lbz      r0, 1(r5)
	stb      r4, 0x128(r3)
	lbz      r4, 2(r5)
	stb      r0, 0x129(r3)
	lbz      r0, 3(r5)
	stb      r4, 0x12a(r3)
	stb      r0, 0x12b(r3)
	li       r3, 1
	blr
	*/
}

/*
 * --INFO--
 * Address:	80042500
 * Size:	00000C
 */
JUtility::TColor J2DTextBox::getBlack() const
{
	/*
	lwz      r0, 0x12c(r4)
	stw      r0, 0(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8004250C
 * Size:	00000C
 */
JUtility::TColor J2DTextBox::getWhite() const
{
	/*
	lwz      r0, 0x128(r4)
	stw      r0, 0(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80042518
 * Size:	000008
 */
J2DMaterial* J2DTextBox::getMaterial() const { return nullptr; }

/*
 * --INFO--
 * Address:	80042520
 * Size:	000020
 */
bool J2DTextBox::isUsed(const ResTIMG*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	bl       isUsed__7J2DPaneFPC7ResTIMG
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80042540
 * Size:	000004
 */
void J2DTextBox::rewriteAlpha() { }
