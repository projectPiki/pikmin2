#include "JSystem/JUT/JUTFont.h"
#include "JSystem/JKR/JKRHeap.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global saoAboutEncoding___10JUTResFont
    saoAboutEncoding___10JUTResFont:
        .4byte isLeadByte_1Byte__7JUTFontFi
        .4byte isLeadByte_2Byte__7JUTFontFi
        .4byte isLeadByte_ShiftJIS__7JUTFontFi
    .global lbl_8047418C
    lbl_8047418C:
        .asciz "JUTResFont: Unknown data block\n"
    .global lbl_804741AC
    lbl_804741AC:
        .asciz "Unknown data block\n"
    .global halftofull$725
    halftofull$725:
        .2byte 0x8140
        .2byte 0x8149
        .2byte 0x8168
        .2byte 0x8194
        .2byte 0x8190
        .2byte 0x8193
        .2byte 0x8195
        .2byte 0x8166
        .2byte 0x8169
        .2byte 0x816A
        .2byte 0x8196
        .2byte 0x817B
        .2byte 0x8143
        .2byte 0x817C
        .2byte 0x8144
        .2byte 0x815E
        .2byte 0x824F
        .2byte 0x8250
        .2byte 0x8251
        .2byte 0x8252
        .2byte 0x8253
        .2byte 0x8254
        .2byte 0x8255
        .2byte 0x8256
        .2byte 0x8257
        .2byte 0x8258
        .2byte 0x8146
        .2byte 0x8147
        .2byte 0x8183
        .2byte 0x8181
        .2byte 0x8184
        .2byte 0x8148
        .2byte 0x8197
        .2byte 0x8260
        .2byte 0x8261
        .2byte 0x8262
        .2byte 0x8263
        .2byte 0x8264
        .2byte 0x8265
        .2byte 0x8266
        .2byte 0x8267
        .2byte 0x8268
        .2byte 0x8269
        .2byte 0x826A
        .2byte 0x826B
        .2byte 0x826C
        .2byte 0x826D
        .2byte 0x826E
        .2byte 0x826F
        .2byte 0x8270
        .2byte 0x8271
        .2byte 0x8272
        .2byte 0x8273
        .2byte 0x8274
        .2byte 0x8275
        .2byte 0x8276
        .2byte 0x8277
        .2byte 0x8278
        .2byte 0x8279
        .2byte 0x816D
        .2byte 0x818F
        .2byte 0x816E
        .2byte 0x814F
        .2byte 0x8151
        .2byte 0x8165
        .2byte 0x8281
        .2byte 0x8282
        .2byte 0x8283
        .2byte 0x8284
        .2byte 0x8285
        .2byte 0x8286
        .2byte 0x8287
        .2byte 0x8288
        .2byte 0x8289
        .2byte 0x828A
        .2byte 0x828B
        .2byte 0x828C
        .2byte 0x828D
        .2byte 0x828E
        .2byte 0x828F
        .2byte 0x8290
        .2byte 0x8291
        .2byte 0x8292
        .2byte 0x8293
        .2byte 0x8294
        .2byte 0x8295
        .2byte 0x8296
        .2byte 0x8297
        .2byte 0x8298
        .2byte 0x8299
        .2byte 0x829A
        .2byte 0x816F
        .2byte 0x8162
        .2byte 0x8170
        .2byte 0x8160

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__10JUTResFont
    __vt__10JUTResFont:
        .4byte 0
        .4byte 0
        .4byte __dt__10JUTResFontFv
        .4byte setGX__10JUTResFontFv
        .4byte setGX__10JUTResFontFQ28JUtility6TColorQ28JUtility6TColor
        .4byte drawChar_scale__10JUTResFontFffffib
        .4byte getLeading__10JUTResFontCFv
        .4byte getAscent__10JUTResFontCFv
        .4byte getDescent__10JUTResFontCFv
        .4byte getHeight__10JUTResFontCFv
        .4byte getWidth__10JUTResFontCFv
        .4byte getWidthEntry__10JUTResFontCFiPQ27JUTFont6TWidth
        .4byte getCellWidth__10JUTResFontCFv
        .4byte getCellHeight__10JUTResFontCFv
        .4byte getFontType__10JUTResFontCFv
        .4byte getResFont__10JUTResFontCFv
        .4byte isLeadByte__10JUTResFontCFi
        .4byte loadImage__10JUTResFontFi11_GXTexMapID
        .4byte setBlock__10JUTResFontFv

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .balign 8
    lbl_805166E0:
        .float 0.0
    .balign 8
    lbl_805166E8:
        .4byte 0x43300000
        .4byte 0x80000000
    .balign 8
    lbl_805166F0:
        .4byte 0x43300000
        .4byte 0x00000000
*/

JUTFont::IsLeadByte* const JUTResFont::saoAboutEncoding_[3]
    = { JUTFont::isLeadByte_1Byte, JUTFont::isLeadByte_2Byte, JUTFont::isLeadByte_ShiftJIS };

/*
 * --INFO--
 * Address:	80031180
 * Size:	00004C
 * Matches
 */
JUTResFont::JUTResFont()
{
	initialize_state();
	JUTFont::initialize_state();
}

/*
 * --INFO--
 * Address:	800311CC
 * Size:	000074
 * Matches
 */
JUTResFont::JUTResFont(const ResFONT* a, JKRHeap* b)
{
	initialize_state();
	JUTFont::initialize_state();
	JUTResFont::initiate(a, b);
}

/*
 * --INFO--
 * Address:	80031240
 * Size:	00008C
 * Matches
 */
JUTResFont::~JUTResFont()
{
	if (_04) {
		deleteMemBlocks_ResFont();
		initialize_state();
		JUTFont::initialize_state();
	}
}

/*
 * --INFO--
 * Address:	800312CC
 * Size:	000024
 * Matches
 */
void JUTResFont::deleteMemBlocks_ResFont(void) { delete[] m_memBlocks; }

/*
 * --INFO--
 * Address:	800312F0
 * Size:	00002C
 * Matches
 */
void JUTResFont::initialize_state(void)
{
	m_resource    = nullptr;
	m_memBlocks   = nullptr;
	m_widthBlocks = nullptr;
	m_glyphBlocks = nullptr;
	m_mapBlocks   = nullptr;
	_1C           = 0;
	_20           = 0;
	_44           = -1;
}

/*
 * --INFO--
 * Address:	8003131C
 * Size:	000080
 * Matches
 */
bool JUTResFont::initiate(const ResFONT* a, JKRHeap* b)
{
	if (!protected_initiate(a, b)) {
		deleteMemBlocks_ResFont();
		initialize_state();
		JUTFont::initialize_state();
		_04 = false;
		return false;
	}
	return true;
}

/*
 * --INFO--
 * Address:	8003139C
 * Size:	000138
 * Matches
 * TODO: give variables descriptive names.
 */
bool JUTResFont::protected_initiate(const ResFONT* a, JKRHeap* b)
{
	ResFONT** p;
	deleteMemBlocks_ResFont();
	initialize_state();
	JUTFont::initialize_state();
	if (!a) {
		return false;
	}
	m_resource = (ResFONT*)a;
	_04        = true;
	countBlock();
	u32 v = m_widthBlockCount + m_glyphBlockCount + m_mapBlockCount;
	// m_memBlocks = new(b,v);
	m_memBlocks = new (b, 0) ResFONT*[v];
	p           = m_memBlocks;
	if (m_memBlocks == nullptr) {
		return false;
	} else {
		if (m_widthBlockCount != 0) {
			m_widthBlocks = p;
			p += m_widthBlockCount;
		}

		if (m_glyphBlockCount != 0) {
			m_glyphBlocks = p;
			p += m_glyphBlockCount;
		}

		if (m_mapBlockCount != 0) {
			m_mapBlocks = p;
		}
	}
	setBlock();
	return true;
}

/*
 * --INFO--
 * Address:	800314D4
 * Size:	00010C
 * Matches
 */
void JUTResFont::countBlock()
{
	m_widthBlockCount = 0;
	m_glyphBlockCount = 0;
	m_mapBlockCount   = 0;
	ResFONT* ppvVar3  = (ResFONT*)&m_resource->m_data;
	for (u32 i = 0; m_resource->asU32 > i; i++, (u8*)ppvVar3 += ppvVar3->m_blockLength) {
		u32 pvVar1 = ppvVar3->m_rawType;
		switch (pvVar1) {
		case 'WID1':
			m_widthBlockCount++;
			break;
		case 'GLY1':
			m_glyphBlockCount++;
			break;
		case 'MAP1':
			m_mapBlockCount++;
			break;
		case 'INF1':
			// m_infoBlock;
			break;
		default:
			JUTReportConsole("JUTResFont: Unknown data block\n");
		}
	};
}

/*
 * --INFO--
 * Address:	800315E0
 * Size:	00013C
 */
void JUTResFont::setBlock()
{
	int wid, gly, map;
	wid = gly = map  = 0;
	_68              = -1;
	ResFONT* ppvVar3 = (ResFONT*)&m_resource->m_data;
	// int enc = ppvVar3->m_encoding;

	for (u32 i = 0; m_resource->asU32 > i; i++, (u8*)ppvVar3 += ppvVar3->m_blockLength) {
		int pvVar1 = ppvVar3->m_rawType;
		switch (pvVar1) {
		case 'INF1':
			m_infoBlock  = ppvVar3;
			m_isLeadByte = (IsLeadByte*)&saoAboutEncoding_[m_infoBlock->m_encoding];
			break;
		case 'WID1':
			m_widthBlocks[wid] = ppvVar3;
			wid++;
			break;
		case 'GLY1':
			m_glyphBlocks[gly] = ppvVar3;
			gly++;
			break;
		case 'MAP1':
			m_mapBlocks[map] = ppvVar3;
			if (_68 > m_mapBlocks[map]->_0A) {
				_68 = m_mapBlocks[map]->_0A;
			}
			map++;
			break;
		default:
			JUTReportConsole("Unknown data block\n");
		}
		// ppvVar3+= ppvVar3->m_blockLength;
	};
}

/*
 * --INFO--
 * Address:	8003171C
 * Size:	0000F8
 * Matches
 */
void JUTResFont::setGX()
{
	GXSetNumChans(1);
	GXSetNumTevStages(1);
	GXSetNumTexGens(1);
	GXSetTevOrder(GX_TEVSTAGE0, GX_TEXCOORD0, GX_TEXMAP0, GX_COLOR0A0);
	GXSetChanCtrl(GX_COLOR0A0, GX_FALSE, GX_SRC_REG, GX_SRC_VTX, GX_LIGHT_NULL, GX_DF_NONE, GX_AF_NONE);
	GXSetTevOp(GX_TEVSTAGE0, GX_MODULATE);
	GXSetBlendMode(GX_BM_BLEND, GX_BL_SRCALPHA, GX_BL_INVSRCALPHA, GX_LO_SET);
	GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_POS, GX_CLR_RGBA, GX_RGBA4, 0);
	GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_CLR0, GX_CLR_RGBA, GX_RGBA8, 0);
	GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_TEX0, GX_CLR_RGBA, GX_RGBX8, 15);
	GXClearVtxDesc();
	GXSetVtxDesc(GX_VA_POS, GX_DIRECT);
	GXSetVtxDesc(GX_VA_CLR0, GX_DIRECT);
	GXSetVtxDesc(GX_VA_TEX0, GX_DIRECT);
}

/*
 * --INFO--
 * Address:	80031814
 * Size:	000240
 */
void JUTResFont::setGX(JUtility::TColor param_0, JUtility::TColor param_1)
{
	if (param_0.asU32 == 0 && param_1.asU32 == -1) {
		setGX();
	} else {
		GXSetNumChans(1);
		GXSetNumTevStages(2);
		GXSetNumTexGens(1);
		GXSetTevOrder(GX_TEVSTAGE0, GX_TEXCOORD0, GX_TEXMAP0, GX_COLOR_NULL);
		GXSetChanCtrl(GX_COLOR0A0, GX_FALSE, GX_SRC_REG, GX_SRC_VTX, GX_LIGHT_NULL, GX_DF_NONE, GX_AF_NONE);
		GXSetTevColor(GX_TEVREG0, param_0.asGXColor);
		GXSetTevColor(GX_TEVREG1, param_1.asGXColor);
		GXSetTevColorIn(GX_TEVSTAGE0, GX_CC_C0, GX_CC_C2, GX_CC_TEXC, GX_CC_ZERO);
		GXSetTevAlphaIn(GX_TEVSTAGE0, GX_CA_A0, GX_CA_A1, GX_CA_TEXA, GX_ZERO);
		GXSetTevColorOp(GX_TEVSTAGE0, GX_TEV_ADD, GX_TB_ZERO, GX_CS_SCALE_1, GX_TRUE, GX_TEVPREV);
		GXSetTevAlphaOp(GX_TEVSTAGE0, GX_TEV_ADD, GX_TB_ZERO, GX_CS_SCALE_1, GX_TRUE, GX_TEVPREV);
		GXSetTevOrder(GX_TEVSTAGE1, GX_TEXCOORD_NULL, GX_TEXMAP_NULL, GX_COLOR0A0);
		GXSetTevColorIn(GX_TEVSTAGE1, GX_CC_ZERO, GX_CC_CPREV, GX_CC_RASC, GX_CC_ZERO);
		GXSetTevAlphaIn(GX_TEVSTAGE1, GX_ZERO, GX_CA_APREV, GX_CA_RASA, GX_ZERO);
		GXSetTevColorOp(GX_TEVSTAGE1, GX_TEV_ADD, GX_TB_ZERO, GX_CS_SCALE_1, GX_TRUE, GX_TEVPREV);
		GXSetTevAlphaOp(GX_TEVSTAGE1, GX_TEV_ADD, GX_TB_ZERO, GX_CS_SCALE_1, GX_TRUE, GX_TEVPREV);
		GXSetBlendMode(GX_BM_BLEND, GX_BL_SRCALPHA, GX_BL_INVSRCALPHA, GX_LO_SET);
		GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_POS, GX_CLR_RGBA, GX_RGBA4, 0);
		GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_CLR0, GX_CLR_RGBA, GX_RGBA8, 0);
		GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_TEX0, GX_CLR_RGBA, GX_RGBX8, 15);
		GXClearVtxDesc();
		GXSetVtxDesc(GX_VA_POS, GX_DIRECT);
		GXSetVtxDesc(GX_VA_CLR0, GX_DIRECT);
		GXSetVtxDesc(GX_VA_TEX0, GX_DIRECT);
	}
}

/*
 * --INFO--
 * Address:	80031A54
 * Size:	000404
 */
float JUTResFont::drawChar_scale(float, float, float, float, int, bool)
{
	/*
	stwu     r1, -0xb0(r1)
	mflr     r0
	stw      r0, 0xb4(r1)
	stfd     f31, 0xa0(r1)
	psq_st   f31, 168(r1), 0, qr0
	stfd     f30, 0x90(r1)
	psq_st   f30, 152(r1), 0, qr0
	stfd     f29, 0x80(r1)
	psq_st   f29, 136(r1), 0, qr0
	stfd     f28, 0x70(r1)
	psq_st   f28, 120(r1), 0, qr0
	stfd     f27, 0x60(r1)
	psq_st   f27, 104(r1), 0, qr0
	stfd     f26, 0x50(r1)
	psq_st   f26, 88(r1), 0, qr0
	stmw     r27, 0x3c(r1)
	fmr      f26, f1
	mr       r27, r5
	fmr      f27, f2
	mr       r31, r3
	fmr      f30, f3
	addi     r6, r1, 8
	fmr      f28, f4
	li       r5, 0
	bl       loadFont__10JUTResFontFi11_GXTexMapIDPQ27JUTFont6TWidth
	lbz      r0, 5(r31)
	cmplwi   r0, 0
	bne      lbl_80031ACC
	clrlwi.  r0, r27, 0x18
	bne      lbl_80031AD4

lbl_80031ACC:
	fmr      f31, f26
	b        lbl_80031B24

lbl_80031AD4:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x30(r12)
	mtctr    r12
	bctrl
	lis      r4, 0x4330
	xoris    r0, r3, 0x8000
	stw      r0, 0x14(r1)
	lbz      r0, 8(r1)
	stw      r4, 0x10(r1)
	lfd      f1, lbl_805166E8@sda21(r2)
	lfd      f0, 0x10(r1)
	stw      r0, 0x1c(r1)
	fsubs    f0, f0, f1
	lfd      f1, lbl_805166F0@sda21(r2)
	stw      r4, 0x18(r1)
	fdivs    f2, f30, f0
	lfd      f0, 0x18(r1)
	fsubs    f0, f0, f1
	fnmsubs  f31, f0, f2, f26

lbl_80031B24:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x30(r12)
	mtctr    r12
	bctrl
	lis      r4, 0x4330
	xoris    r0, r3, 0x8000
	stw      r0, 0x1c(r1)
	lwz      r0, 8(r31)
	stw      r4, 0x18(r1)
	lfd      f2, lbl_805166E8@sda21(r2)
	xoris    r3, r0, 0x8000
	lfd      f0, 0x18(r1)
	lbz      r0, 5(r31)
	fsubs    f0, f0, f2
	stw      r3, 0x14(r1)
	cmplwi   r0, 0
	stw      r4, 0x10(r1)
	fdivs    f1, f30, f0
	lfd      f0, 0x10(r1)
	fsubs    f0, f0, f2
	fmuls    f29, f0, f1
	bne      lbl_80031C34
	clrlwi.  r0, r27, 0x18
	bne      lbl_80031BE4
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x30(r12)
	mtctr    r12
	bctrl
	lis      r4, 0x4330
	xoris    r0, r3, 0x8000
	stw      r0, 0x1c(r1)
	lfd      f2, lbl_805166E8@sda21(r2)
	stw      r4, 0x18(r1)
	lbz      r3, 9(r1)
	lfd      f0, 0x18(r1)
	lbz      r0, 8(r1)
	fsubs    f0, f0, f2
	stw      r4, 0x10(r1)
	add      r0, r3, r0
	xoris    r0, r0, 0x8000
	fdivs    f1, f30, f0
	stw      r0, 0x14(r1)
	lfd      f0, 0x10(r1)
	fsubs    f0, f0, f2
	fmuls    f29, f0, f1
	b        lbl_80031C34

lbl_80031BE4:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x30(r12)
	mtctr    r12
	bctrl
	lis      r4, 0x4330
	xoris    r0, r3, 0x8000
	stw      r0, 0x1c(r1)
	lbz      r0, 9(r1)
	stw      r4, 0x18(r1)
	lfd      f1, lbl_805166E8@sda21(r2)
	lfd      f0, 0x18(r1)
	stw      r0, 0x14(r1)
	fsubs    f0, f0, f1
	lfd      f1, lbl_805166F0@sda21(r2)
	stw      r4, 0x10(r1)
	fdivs    f2, f30, f0
	lfd      f0, 0x10(r1)
	fsubs    f0, f0, f1
	fmuls    f29, f0, f2

lbl_80031C34:
	mr       r3, r31
	fadds    f30, f31, f30
	lwz      r12, 0(r31)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x1c(r1)
	mr       r3, r31
	lwz      r12, 0(r31)
	stw      r0, 0x18(r1)
	lfd      f1, lbl_805166E8@sda21(r2)
	lfd      f0, 0x18(r1)
	lwz      r12, 0x1c(r12)
	fsubs    f0, f0, f1
	fdivs    f26, f28, f0
	mtctr    r12
	bctrl
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x14(r1)
	mr       r3, r31
	lwz      r12, 0(r31)
	stw      r0, 0x10(r1)
	lfd      f1, lbl_805166E8@sda21(r2)
	lfd      f0, 0x10(r1)
	lwz      r12, 0x24(r12)
	fsubs    f0, f0, f1
	fnmsubs  f26, f0, f26, f27
	mtctr    r12
	bctrl
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x24(r1)
	mr       r3, r31
	lwz      r12, 0(r31)
	stw      r0, 0x20(r1)
	lfd      f1, lbl_805166E8@sda21(r2)
	lfd      f0, 0x20(r1)
	lwz      r12, 0x20(r12)
	fsubs    f0, f0, f1
	fdivs    f28, f28, f0
	mtctr    r12
	bctrl
	lhz      r0, 0x66(r31)
	xoris    r10, r3, 0x8000
	lwz      r3, 0x58(r31)
	lis      r7, 0x4330
	slwi     r0, r0, 2
	lwz      r11, 0x1c(r31)
	lwzx     r8, r3, r0
	li       r3, 0
	lwz      r12, 0x20(r31)
	slwi     r6, r11, 0xf
	lhz      r5, 0xc(r8)
	li       r4, 9
	lhz      r0, 0xe(r8)
	slwi     r9, r12, 0xf
	add      r5, r11, r5
	lhz      r11, 0x1a(r8)
	add      r0, r12, r0
	lhz      r12, 0x1c(r8)
	slwi     r8, r5, 0xf
	stw      r10, 0x2c(r1)
	slwi     r0, r0, 0xf
	lfd      f1, lbl_805166E8@sda21(r2)
	divw     r30, r6, r11
	stw      r7, 0x28(r1)
	li       r5, 1
	lfd      f0, 0x28(r1)
	li       r6, 4
	li       r7, 0
	fsubs    f0, f0, f1
	divw     r29, r9, r12
	fmadds   f27, f0, f28, f27
	divw     r28, r8, r11
	divw     r27, r0, r12
	bl       GXSetVtxAttrFmt
	li       r3, 0x80
	li       r4, 0
	li       r5, 4
	bl       GXBegin
	lis      r8, 0xCC008000@ha
	lfs      f0, lbl_805166E0@sda21(r2)
	stfs     f31, 0xCC008000@l(r8)
	li       r3, 0
	li       r4, 9
	li       r5, 1
	stfs     f26, -0x8000(r8)
	li       r6, 3
	li       r7, 0
	stfs     f0, -0x8000(r8)
	lwz      r0, 0xc(r31)
	stw      r0, -0x8000(r8)
	sth      r30, -0x8000(r8)
	sth      r29, -0x8000(r8)
	stfs     f30, -0x8000(r8)
	stfs     f26, -0x8000(r8)
	stfs     f0, -0x8000(r8)
	lwz      r0, 0x10(r31)
	stw      r0, -0x8000(r8)
	sth      r28, -0x8000(r8)
	sth      r29, -0x8000(r8)
	stfs     f30, -0x8000(r8)
	stfs     f27, -0x8000(r8)
	stfs     f0, -0x8000(r8)
	lwz      r0, 0x18(r31)
	stw      r0, -0x8000(r8)
	sth      r28, -0x8000(r8)
	sth      r27, -0x8000(r8)
	stfs     f31, -0x8000(r8)
	stfs     f27, -0x8000(r8)
	stfs     f0, -0x8000(r8)
	lwz      r0, 0x14(r31)
	stw      r0, -0x8000(r8)
	sth      r30, -0x8000(r8)
	sth      r27, -0x8000(r8)
	bl       GXSetVtxAttrFmt
	fmr      f1, f29
	psq_l    f31, 168(r1), 0, qr0
	lfd      f31, 0xa0(r1)
	psq_l    f30, 152(r1), 0, qr0
	lfd      f30, 0x90(r1)
	psq_l    f29, 136(r1), 0, qr0
	lfd      f29, 0x80(r1)
	psq_l    f28, 120(r1), 0, qr0
	lfd      f28, 0x70(r1)
	psq_l    f27, 104(r1), 0, qr0
	lfd      f27, 0x60(r1)
	psq_l    f26, 88(r1), 0, qr0
	lfd      f26, 0x50(r1)
	lmw      r27, 0x3c(r1)
	lwz      r0, 0xb4(r1)
	mtlr     r0
	addi     r1, r1, 0xb0
	blr
	*/
}

/*
 * --INFO--
 * Address:	80031E58
 * Size:	00000C
 */
int JUTResFont::getDescent() const
{
	/*
	lwz      r3, 0x4c(r3)
	lhz      r3, 0xc(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80031E64
 * Size:	00005C
 */
int JUTResFont::getHeight() const
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r31, r3
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	add      r3, r3, r31
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80031EC0
 * Size:	00000C
 */
int JUTResFont::getAscent() const
{
	/*
	lwz      r3, 0x4c(r3)
	lhz      r3, 0xa(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80031ECC
 * Size:	000088
 */
void JUTResFont::loadFont(int, _GXTexMapID, JUTFont::TWidth*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	cmplwi   r6, 0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r5
	stw      r30, 0x18(r1)
	mr       r30, r4
	stw      r29, 0x14(r1)
	mr       r29, r3
	beq      lbl_80031F0C
	lwz      r12, 0(r3)
	mr       r5, r6
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl

lbl_80031F0C:
	mr       r3, r29
	mr       r4, r30
	bl       getFontCode__10JUTResFontCFi
	lwz      r12, 0(r29)
	mr       r0, r3
	mr       r3, r29
	mr       r5, r31
	lwz      r12, 0x44(r12)
	mr       r4, r0
	mtctr    r12
	bctrl
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80031F54
 * Size:	0000C0
 */
void JUTResFont::getWidthEntry(int, JUTFont::TWidth*) const
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r5
	stw      r30, 8(r1)
	mr       r30, r3
	bl       getFontCode__10JUTResFontCFi
	li       r0, 0
	lwz      r7, 0x54(r30)
	stb      r0, 0(r31)
	li       r8, 0
	lwz      r5, 0x4c(r30)
	mr       r4, r7
	lhz      r6, 0x60(r30)
	lhz      r0, 0xe(r5)
	stb      r0, 1(r31)
	mtctr    r6
	cmpwi    r6, 0
	ble      lbl_80031FFC

lbl_80031FA4:
	lwz      r5, 0(r4)
	lhz      r0, 8(r5)
	cmpw     r0, r3
	bgt      lbl_80031FF0
	lhz      r0, 0xa(r5)
	cmpw     r3, r0
	bgt      lbl_80031FF0
	slwi     r0, r8, 2
	lwzx     r4, r7, r0
	lhz      r0, 8(r4)
	subf     r0, r0, r3
	slwi     r3, r0, 1
	addi     r3, r3, 0xc
	add      r3, r4, r3
	lbz      r0, 0(r3)
	stb      r0, 0(r31)
	lbz      r0, 1(r3)
	stb      r0, 1(r31)
	b        lbl_80031FFC

lbl_80031FF0:
	addi     r4, r4, 4
	addi     r8, r8, 1
	bdnz     lbl_80031FA4

lbl_80031FFC:
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
 * Address:	80032014
 * Size:	00004C
 */
int JUTResFont::getCellWidth() const
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lwz      r4, 0x58(r3)
	stw      r0, 0x14(r1)
	cmplwi   r4, 0
	beq      lbl_80032040
	lwz      r4, 0(r4)
	cmplwi   r4, 0
	beq      lbl_80032040
	lhz      r3, 0xc(r4)
	b        lbl_80032050

lbl_80032040:
	lwz      r12, 0(r3)
	lwz      r12, 0x28(r12)
	mtctr    r12
	bctrl

lbl_80032050:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80032060
 * Size:	00000C
 */
int JUTResFont::getWidth() const
{
	/*
	lwz      r3, 0x4c(r3)
	lhz      r3, 0xe(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8003206C
 * Size:	00004C
 */
int JUTResFont::getCellHeight() const
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lwz      r4, 0x58(r3)
	stw      r0, 0x14(r1)
	cmplwi   r4, 0
	beq      lbl_80032098
	lwz      r4, 0(r4)
	cmplwi   r4, 0
	beq      lbl_80032098
	lhz      r3, 0xe(r4)
	b        lbl_800320A8

lbl_80032098:
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl

lbl_800320A8:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800320B8
 * Size:	000030
 */
bool JUTResFont::isLeadByte(int) const
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lwz      r5, 0x6c(r3)
	mr       r3, r4
	stw      r0, 0x14(r1)
	lwz      r12, 0(r5)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800320E8
 * Size:	0001AC
 */
u32 JUTResFont::getFontCode(int) const
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lwz      r5, 0x4c(r3)
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r30, r4
	stw      r29, 0x14(r1)
	mr       r29, r3
	lwz      r12, 0(r3)
	lhz      r31, 0x12(r5)
	lwz      r12, 0x38(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 2
	bne      lbl_80032158
	lhz      r0, 0x68(r29)
	cmplwi   r0, 0x8000
	blt      lbl_80032158
	cmpwi    r30, 0x20
	blt      lbl_80032158
	cmplwi   r30, 0x7f
	bge      lbl_80032158
	lis      r3, halftofull$725@ha
	slwi     r0, r30, 1
	addi     r3, r3, halftofull$725@l
	add      r3, r3, r0
	lhz      r30, -0x40(r3)

lbl_80032158:
	lwz      r5, 0x5c(r29)
	li       r6, 0
	lhz      r0, 0x64(r29)
	mr       r3, r5
	mtctr    r0
	cmpwi    r0, 0
	ble      lbl_80032274

lbl_80032174:
	lwz      r4, 0(r3)
	lhz      r0, 0xa(r4)
	cmpw     r0, r30
	bgt      lbl_80032268
	lhz      r0, 0xc(r4)
	cmpw     r30, r0
	bgt      lbl_80032268
	slwi     r0, r6, 2
	lwzx     r4, r5, r0
	lhz      r0, 8(r4)
	cmplwi   r0, 0
	bne      lbl_800321B0
	lhz      r0, 0xa(r4)
	subf     r31, r0, r30
	b        lbl_80032274

lbl_800321B0:
	cmplwi   r0, 2
	bne      lbl_800321D0
	lhz      r0, 0xa(r4)
	subf     r0, r0, r30
	slwi     r0, r0, 1
	add      r3, r4, r0
	lhz      r31, 0x10(r3)
	b        lbl_80032274

lbl_800321D0:
	cmplwi   r0, 3
	bne      lbl_80032238
	lhz      r3, 0xe(r4)
	addi     r4, r4, 0x10
	li       r5, 0
	addi     r6, r3, -1
	b        lbl_8003222C

lbl_800321EC:
	add      r3, r6, r5
	srwi     r0, r3, 0x1f
	add      r0, r0, r3
	srawi    r7, r0, 1
	slwi     r3, r7, 2
	lhzx     r0, r4, r3
	cmpw     r30, r0
	bge      lbl_80032214
	addi     r6, r7, -1
	b        lbl_8003222C

lbl_80032214:
	ble      lbl_80032220
	addi     r5, r7, 1
	b        lbl_8003222C

lbl_80032220:
	add      r3, r4, r3
	lhz      r31, 2(r3)
	b        lbl_80032274

lbl_8003222C:
	cmpw     r6, r5
	bge      lbl_800321EC
	b        lbl_80032274

lbl_80032238:
	cmplwi   r0, 1
	bne      lbl_80032274
	lhz      r0, 0xe(r4)
	li       r5, 0
	cmplwi   r0, 1
	bne      lbl_80032254
	addi     r5, r4, 0x10

lbl_80032254:
	mr       r3, r29
	mr       r4, r30
	bl       convertSjis__10JUTResFontCFiPUs
	mr       r31, r3
	b        lbl_80032274

lbl_80032268:
	addi     r3, r3, 4
	addi     r6, r6, 1
	bdnz     lbl_80032174

lbl_80032274:
	lwz      r0, 0x24(r1)
	mr       r3, r31
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80032294
 * Size:	00000C
 */
u32 JUTResFont::getFontType() const
{
	/*
	lwz      r3, 0x4c(r3)
	lhz      r3, 8(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	800322A0
 * Size:	000180
 */
void JUTResFont::loadImage(int, _GXTexMapID)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	li       r31, 0
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r5
	stw      r28, 0x10(r1)
	mr       r28, r3
	lhz      r7, 0x62(r3)
	li       r3, 0
	mtctr    r7
	cmpwi    r7, 0
	ble      lbl_8003231C

lbl_800322DC:
	lwz      r6, 0x58(r28)
	lwzx     r5, r6, r3
	lhz      r0, 8(r5)
	cmpw     r0, r4
	bgt      lbl_80032310
	lhz      r0, 0xa(r5)
	cmpw     r4, r0
	bgt      lbl_80032310
	slwi     r0, r31, 2
	lwzx     r3, r6, r0
	lhz      r0, 8(r3)
	subf     r4, r0, r4
	b        lbl_8003231C

lbl_80032310:
	addi     r3, r3, 4
	addi     r31, r31, 1
	bdnz     lbl_800322DC

lbl_8003231C:
	cmpw     r31, r7
	beq      lbl_80032400
	lwz      r3, 0x58(r28)
	slwi     r7, r31, 2
	lwzx     r5, r3, r7
	lhz      r6, 0x16(r5)
	lhz      r3, 0x18(r5)
	lhz      r0, 0xc(r5)
	mullw    r3, r6, r3
	divw     r30, r4, r3
	mullw    r3, r30, r3
	subf     r4, r3, r4
	divw     r5, r4, r6
	mullw    r3, r5, r6
	subf     r3, r3, r4
	mullw    r0, r3, r0
	stw      r0, 0x1c(r28)
	lwz      r3, 0x58(r28)
	lwzx     r3, r3, r7
	lhz      r0, 0xe(r3)
	mullw    r0, r5, r0
	stw      r0, 0x20(r28)
	lwz      r0, 0x44(r28)
	cmpw     r30, r0
	bne      lbl_8003238C
	lhz      r0, 0x66(r28)
	cmpw     r31, r0
	beq      lbl_800323F4

lbl_8003238C:
	lwz      r4, 0x58(r28)
	addi     r3, r28, 0x24
	li       r8, 0
	li       r9, 0
	lwzx     r11, r4, r7
	li       r10, 0
	lwz      r0, 0x10(r11)
	lhz      r5, 0x1a(r11)
	mullw    r4, r30, r0
	lhz      r6, 0x1c(r11)
	lhz      r7, 0x14(r11)
	addi     r4, r4, 0x20
	add      r4, r11, r4
	bl       GXInitTexObj
	lfs      f1, lbl_805166E0@sda21(r2)
	addi     r3, r28, 0x24
	li       r4, 1
	li       r5, 1
	fmr      f2, f1
	li       r6, 0
	fmr      f3, f1
	li       r7, 0
	li       r8, 0
	bl       GXInitTexObjLOD
	stw      r30, 0x44(r28)
	sth      r31, 0x66(r28)

lbl_800323F4:
	mr       r4, r29
	addi     r3, r28, 0x24
	bl       GXLoadTexObj

lbl_80032400:
	lwz      r0, 0x24(r1)
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
 * Address:	80032420
 * Size:	000044
 */
void JUTResFont::convertSjis(int, unsigned short*) const
{
	/*
	clrlwi   r3, r4, 0x18
	rlwinm   r4, r4, 0x18, 0x18, 0x1f
	addi     r6, r3, -64
	cmpwi    r6, 0x40
	blt      lbl_80032438
	addi     r6, r6, -1

lbl_80032438:
	cmplwi   r5, 0
	li       r3, 0x31c
	beq      lbl_80032448
	lhz      r3, 0(r5)

lbl_80032448:
	addi     r0, r4, -136
	clrlwi   r4, r3, 0x10
	mulli    r3, r0, 0xbc
	addi     r0, r3, -94
	add      r3, r0, r4
	add      r3, r6, r3
	blr
	*/
}

/*
 * --INFO--
 * Address:	80032464
 * Size:	000008
 */
ResFONT* JUTResFont::getResFont() const
{
	return m_resource;
	/*
	lwz      r3, 0x48(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8003246C
 * Size:	00000C
 */
int JUTResFont::getLeading() const
{
	/*
	lwz      r3, 0x4c(r3)
	lhz      r3, 0x10(r3)
	blr
	*/
}
