#include "Dolphin/gx.h"
#include "Dolphin/mtx.h"
#include "Dolphin/stl.h"
#include "JSystem/J2D/J2DMaterial.h"
#include "JSystem/J2D/J2DPane.h"
#include "JSystem/J2D/J2DPrint.h"
#include "JSystem/J2D/J2DTevBlock.h"
#include "JSystem/J2D/J2DTypes.h"
#include "JSystem/JSupport/JSUStream.h"
#include "JSystem/JUT/JUTFont.h"
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
    : J2DPane()
    , m_font(nullptr)
    , _104(0xFFFFFFFF)
    , _108(0xFFFFFFFF)
    , _124(nullptr)
    , m_white(0xFFFFFFFF)
    , m_black(0xFFFFFFFF)
{
	initiate(nullptr, nullptr, 0, J2DHBIND_Left, J2DVBIND_Top);
}

/*
 * --INFO--
 * Address:	........
 * Size:	000078
 */
J2DTextBox::J2DTextBox(unsigned long long tag, const JGeometry::TBox2<float>& box)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00009C
 */
J2DTextBox::J2DTextBox(const ResFONT*, const char*, short)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000A4
 */
J2DTextBox::J2DTextBox(const char*, const char*, short)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000088
 */
J2DTextBox::J2DTextBox(J2DPane* parent, JSURandomInputStream* input)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80040FEC
 * Size:	000094
 * __ct__10J2DTextBoxFP7J2DPaneP20JSURandomInputStreamP10JKRArchive
 */
J2DTextBox::J2DTextBox(J2DPane* parent, JSURandomInputStream* input, JKRArchive* archive)
    : J2DPane()
    , m_font(nullptr)
    , _104(0xFFFFFFFF)
    , _108(0xFFFFFFFF)
    , _124(nullptr)
    , m_white(0xFFFFFFFF)
    , m_black(0xFFFFFFFF)
{
	private_readStream(parent, input, archive);
}

/*
 * --INFO--
 * Address:	80041080
 * Size:	000460
 * __ct__10J2DTextBoxFP7J2DPaneP20JSURandomInputStreamUlP11J2DMaterial
 */
J2DTextBox::J2DTextBox(J2DPane* parent, JSURandomInputStream* input, unsigned long flags, J2DMaterial* materials)
    : J2DPane()
    , m_font(nullptr)
    , _104(0xFFFFFFFF)
    , _108(0xFFFFFFFF)
    , _124(nullptr)
    , m_white(0xFFFFFFFF)
    , m_black(0xFFFFFFFF)
{
	int initialPosition = input->getPosition();
	J2DScrnBlockHeader header;
	input->read(&header, sizeof(header));
	m_bloBlockType = 'TBX1';

	int paneExHeaderPosition = input->getPosition();
	J2DScrnBlockHeader paneExHeader;
	input->peek(&paneExHeader, sizeof(paneExHeader));
	makePaneExStream(parent, input);
	input->seek(paneExHeaderPosition, SEEK_SET);

	J2DTextBoxBlock data;
	input->read(&data, sizeof(data));
	J2DMaterial* material = nullptr;
	if (data._04 != 0xFFFF) {
		material = materials + data._04;
		if (material != nullptr) {
			if (material->m_tevBlock != nullptr) {
				JUTResFont* font = static_cast<JUTResFont*>(material->m_tevBlock->getFont());
				if (font != nullptr) {
					m_font = font;
					material->m_tevBlock->setFontUndeleteFlag();
				}
			}
			m_alpha = material->m_colorBlock.m_colors[0].a;
		}
	}
	_114 = data._06;
	_118 = data._08;
	_11C = data._0A;
	_120 = data._0C;
	_130 = data._0E << 2 | data._0F;
	_104 = data._10;
	_108 = data._14;
	setConnectParent(data.m_doConnectParent);
	u32 strLength = 0;
	if ((flags & 0x2000000) == 0) {
		// int v1    = data._1C;
		strLength = data._1C;
		if ((s16)(strLength) == -1) {
			strLength = data._1E + 1 & 0xFFFF;
		}
	}
	_132 = 0;
	_124 = nullptr;
	if (strLength != 0) {
		_124 = new char[strLength];
	}
	if (_124 != nullptr) {
		_132   = strLength;
		u32 v1 = data._1E;
		if (strLength - 1 < v1) {
			v1 = strLength - 1 & 0xFFFF;
		}
		input->peek(_124, v1);
		_124[v1] = '\0';
	}
	input->skip(data._1E);
	input->seek(initialPosition + header.m_blockLength, SEEK_SET);
	m_black = 0;
	m_white = 0xFFFFFFFF;
	if (material != nullptr && material->m_tevBlock != nullptr && material->m_tevBlock->getTevStageNum() != 1) {
		J2DGXColorS10 black = *material->m_tevBlock->getTevColor(0);
		J2DGXColorS10 white = *material->m_tevBlock->getTevColor(1);
		m_black             = black;
		m_white             = white;
	}
	_10C = 0.0f;
	_110 = 0.0f;
	_131 = 1;
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
// void J2DTevBlock::setFontUndeleteFlag() { }

/*
 * --INFO--
 * Address:	800414E4
 * Size:	000008
 */
// JUTFont* J2DTevBlock::getFont() { return nullptr; }

/*
 * --INFO--
 * Address:	800414EC
 * Size:	00008C
 */
J2DTextBox::J2DTextBox(unsigned long long tag, const JGeometry::TBox2f& box, const ResFONT* resFont, const char* p4, short p5,
                       J2DTextBoxHBinding hb, J2DTextBoxVBinding vb)
    : J2DPane(tag, box)
    , m_font(nullptr)
    , _104(0xFFFFFFFF)
    , _108(0xFFFFFFFF)
    , _124(nullptr)
    , m_white(0xFFFFFFFF)
    , m_black(0xFFFFFFFF)
{
	initiate(resFont, p4, p5, hb, vb);
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
 * Address:	........
 * Size:	000094
 */
J2DTextBox::J2DTextBox(unsigned long long, const JGeometry::TBox2<float>&, const char*, const char*, short, J2DTextBoxHBinding,
                       J2DTextBoxVBinding)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80041578
 * Size:	000228
 */
void J2DTextBox::initiate(const ResFONT* resFont, const char* p2, short p3, J2DTextBoxHBinding hb, J2DTextBoxVBinding vb)
{
	if (resFont != nullptr) {
		m_font = new JUTResFont(resFont, nullptr);
	}
	_104.set(0xFFFFFFFF);
	_108.set(0xFFFFFFFF);
	m_black = 0;
	m_white = 0xFFFFFFFF;
	_130    = (hb << 2) | vb;
	_132    = 0;
	_124    = nullptr;
	if (p2 != nullptr && p3 != 0) {
		copyString(p2, p3);
	}
	_10C = 0.0f;
	_110 = 0.0f;
	_114 = 0.0f;
	if (m_font == nullptr) {
		_118 = 0.0f;
		_11C = 0.0f;
		_120 = 0.0f;
	} else {
		_118 = m_font->getLeading();
		_11C = m_font->getWidth();
		_120 = m_font->getHeight();
	}
	m_bloBlockType = 'TBX1';
	_131           = 1;
}

/*
 * --INFO--
 * Address:	800417A0
 * Size:	000350
 */
void J2DTextBox::private_readStream(J2DPane* parent, JSURandomInputStream* input, JKRArchive* archive)
{
	int initialPosition = input->getPosition();
	J2DScrnBlockHeader header;
	input->read(&header, sizeof(header));
	m_bloBlockType = header.m_bloBlockType;
	makePaneStream(parent, input);
	u8 bytesRemaining = input->readByte();
	ResFONT* resFont  = (ResFONT*)getPointer(input, 'FONT', archive);
	if (resFont != nullptr) {
		m_font = new JUTResFont(resFont, nullptr);
	}
	// input->read(&_104, sizeof(JUtility::TColor));
	// input->read(&_108, sizeof(JUtility::TColor));
	_104.set(input->readU32());
	_108.set(input->readU32());
	_130             = input->readByte();
	_114             = input->readS16ToFloat();
	_118             = input->readS16ToFloat();
	_11C             = input->readU16ToFloat();
	_120             = input->readU16ToFloat();
	s16 rawLength    = input->readU16();
	size_t strLength = rawLength + 1;
	_124             = new char[strLength];
	if (_124 != nullptr) {
		input->read(_124, strLength);
		_124[rawLength] = '\0';
		_132            = strLength;
	} else {
		input->skip(strLength);
		_132 = 0;
	}
	bytesRemaining -= 10;
	if (bytesRemaining != 0) {
		if (input->readByte() != 0) {
			setConnectParent(true);
		}
		bytesRemaining--;
	}
	m_black = 0;
	m_white = 0xFFFFFFFF;
	if (bytesRemaining != 0) {
		u32 black = input->readU32();
		bytesRemaining--;
		m_black.set(black);
	}
	if (bytesRemaining != 0) {
		u32 white = input->readU32();
		bytesRemaining--;
		m_white.set(white);
	}
	_10C = 0.0f;
	_110 = 0.0f;
	input->seek(initialPosition + header.m_blockLength, SEEK_SET);
	_131 = 1;
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
 * __dt__10J2DTextBoxFv
 */
J2DTextBox::~J2DTextBox()
{
	if (_131 != 0) {
		delete m_font;
	}
	delete[] _124;
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000C8
 */
void J2DTextBox::setFontSize()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80041B88
 * Size:	000008
 */
// JUTResFont* J2DTextBox::getFont() const { return m_font; }

/*
 * --INFO--
 * Address:	80041B90
 * Size:	000070
 * setFont__10J2DTextBoxFP7JUTFont
 */
void J2DTextBox::setFont(JUTFont* font)
{
	if (font == nullptr) {
		return;
	}
	if (_131 != 0) {
		delete m_font;
	}
	m_font = static_cast<JUTResFont*>(font);
	_131   = 0;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000084
 */
void J2DTextBox::setLineSpace()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80041C00
 * Size:	0001A4
 * draw__10J2DTextBoxFff
 */
void J2DTextBox::draw(float p1, float p2)
{
	if (isVisible() == false) {
		return;
	}
	J2DPrint printer(m_font, _114, _118, _104, _108, m_black, m_white);
	printer.setFontSize(_11C, _120);
	// printer.m_glyphWidth  = (_11C > 0.0f) ? _11C : 0.0f;
	// printer.m_glyphHeight = (_120 > 0.0f) ? _120 : 0.0f;
	makeMatrix(p1, p2, 0.0f, 0.0f);
	GXLoadPosMtxImm(m_positionMtx, 0);
	GXSetCurrentMtx(0);
	GXSetNumIndStages(0);
	for (int i = 0; i < 0x10; i++) {
		GXSetTevDirect((GXTevStageID)i);
	}
	GXSetNumTexGens(1);
	GXSetTexCoordGen2(GX_TEXCOORD0, GX_TG_MTX3X4, GX_TG_TEX0, 60, GX_FALSE, 125);
	if (_124 != nullptr) {
		printer.print(0.0f, 0.0f, m_alpha, "%s", _124);
	}
	Mtx mtx;
	PSMTXIdentity(mtx);
	GXLoadPosMtxImm(mtx, 0);
}

/*
 * --INFO--
 * Address:	80041DA4
 * Size:	0001D0
 * draw__10J2DTextBoxFfff18J2DTextBoxHBinding
 */
void J2DTextBox::draw(float p1, float p2, float p3, J2DTextBoxHBinding hb)
{
	if (isVisible() == false) {
		return;
	}
	J2DPrint printer(m_font, _114, _118, _104, _108, m_black, m_white);
	printer.setFontSize(_11C, _120);
	// printer.m_glyphWidth  = (_11C > 0.0f) ? _11C : 0.0f;
	// printer.m_glyphHeight = (_120 > 0.0f) ? _120 : 0.0f;
	makeMatrix(p1, p2, 0.0f, 0.0f);
	GXLoadPosMtxImm(m_positionMtx, 0);
	GXSetCurrentMtx(0);
	GXSetNumIndStages(0);
	for (int i = 0; i < 0x10; i++) {
		GXSetTevDirect((GXTevStageID)i);
	}
	GXSetNumTexGens(1);
	GXSetTexCoordGen2(GX_TEXCOORD0, GX_TG_MTX3X4, GX_TG_TEX0, 60, GX_FALSE, 125);
	if (_124 != nullptr) {
		printer.printReturn(_124, p3, 0.0f, hb, J2DVBIND_Top, 0.0f, -_120, m_alpha);
	}
	Mtx mtx;
	PSMTXIdentity(mtx);
	GXLoadPosMtxImm(mtx, 0);
}

/*
 * --INFO--
 * Address:	........
 * Size:	00004C
 */
void J2DTextBox::getString(char*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void J2DTextBox::getStringPtr() const
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80041F74
 * Size:	0000F4
 */
size_t J2DTextBox::setString(const char* format, ...)
{
	va_list args;
	va_start(args, format);

	delete[] _124;
	size_t length = strlen(format);
	if (length >= 0xFFFF) {
		length = 0xFFFE;
	}
	_132 = 0;
	_124 = new char[length + 1];
	if (_124 != nullptr) {
		_132 = length + 1;
		strcpy(_124, format);
	}

	va_end(args);
	return length;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000084
 */
void J2DTextBox::setString(short, const char*, ...)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80042068
 * Size:	000078
 */
bool J2DTextBox::setConnectParent(bool p1)
{
	if (getPaneTree()->getParent() == nullptr) {
		return false;
	}
	if (getPaneTree()->getParent()->getObject()->getTypeID() != 0x11) {
		return false;
	}
	m_isConnected = p1;
	return p1;
}

/*
 * --INFO--
 * Address:	800420E0
 * Size:	000068
 */
void J2DTextBox::drawSelf(float p1, float p2)
{
	Mtx mtx;
	PSMTXIdentity(mtx);
	drawSelf(p1, p2, &mtx);
}

/*
 * --INFO--
 * Address:	80042148
 * Size:	0001A8
 * drawSelf__10J2DTextBoxFffPA3_A4_f
 */
void J2DTextBox::drawSelf(float p1, float p2, float (*p3)[3][4])
{
	J2DPrint printer(m_font, _114, _118, _104, _108, m_black, m_white);
	printer.setFontSize(_11C, _120);
	Mtx v1;
	PSMTXConcat(*p3, m_globalMtx, v1);
	GXLoadPosMtxImm(v1, 0);
	GXSetNumIndStages(0);
	for (int i = 0; i < 0x10; i++) {
		GXSetTevDirect((GXTevStageID)i);
	}
	GXSetNumTexGens(1);
	GXSetTexCoordGen2(GX_TEXCOORD0, GX_TG_MTX3X4, GX_TG_TEX0, 60, GX_FALSE, 125);
	printer.locate(p1 + m_bounds.i.x, p2 + m_bounds.i.y);
	if (_124 != nullptr) {
		printer.printReturn(_124, m_bounds.getWidth() + 0.0001f, m_bounds.getHeight(), (J2DTextBoxHBinding)(_130 >> 2 & 3),
		                    (J2DTextBoxVBinding)(_130 & 3), _10C, _110, m_colorAlpha);
	}
}

/*
 * --INFO--
 * Address:	800422F0
 * Size:	000104
 */
void J2DTextBox::resize(float width, float height)
{
	if (m_isConnected != 0) {
		JSUTree<J2DPane>* jsuSomething = getPaneTree()->getParent();
		if (jsuSomething != nullptr) {
			J2DPane* other = jsuSomething->getObject();
			if (other->getTypeID() == 0x11) {
				f32 deltaX = other->m_bounds.getWidth() - m_bounds.getWidth();
				f32 deltaY = other->m_bounds.getHeight() - m_bounds.getHeight();
				other->resize(deltaX + width, deltaY + height);
				// other->resize(other->m_bounds.getWidth() - m_bounds.getWidth() + width, other->m_bounds.getHeight() -
				// m_bounds.getHeight() + height);
				return;
			}
		}
	}
	J2DPane::resize(width, height);
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
bool J2DTextBox::isUsed(const ResFONT* resFont)
{
	if (m_font != nullptr && m_font->getResFont() == resFont) {
		return true;
	}
	return J2DPane::isUsed(resFont);
}

/*
 * --INFO--
 * Address:	80042460
 * Size:	000008
 */
// u32 J2DTextBox::getTypeID() const { return 0x13; }

/*
 * --INFO--
 * Address:	80042468
 * Size:	000028
 */
// bool J2DTextBox::setBlack(JUtility::TColor black)
// {
// 	m_black = black;
// 	return true;
// }

/*
 * --INFO--
 * Address:	80042490
 * Size:	000028
 */
// bool J2DTextBox::setWhite(JUtility::TColor white)
// {
// 	m_white = white;
// 	return true;
// }

/*
 * --INFO--
 * Address:	800424B8
 * Size:	000048
 */
// bool J2DTextBox::setBlackWhite(JUtility::TColor black, JUtility::TColor white)
// {
// 	m_black = black;
// 	m_white = white;
// 	return true;
// }

/*
 * --INFO--
 * Address:	80042500
 * Size:	00000C
 */
// JUtility::TColor J2DTextBox::getBlack() const { return m_black; }

/*
 * --INFO--
 * Address:	8004250C
 * Size:	00000C
 */
// JUtility::TColor J2DTextBox::getWhite() const { return m_white; }

/*
 * --INFO--
 * Address:	80042518
 * Size:	000008
 */
// J2DMaterial* J2DTextBox::getMaterial() const { return nullptr; }

/*
 * --INFO--
 * Address:	80042520
 * Size:	000020
 * isUsed__10J2DTextBoxFPC7ResTIMG
 */
// bool J2DTextBox::isUsed(const ResTIMG* resource) { return J2DPane::isUsed(resource); }

/*
 * --INFO--
 * Address:	80042540
 * Size:	000004
 */
// void J2DTextBox::rewriteAlpha() { }
