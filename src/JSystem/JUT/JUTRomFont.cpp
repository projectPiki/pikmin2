#include "JSystem/JKR/JKRHeap.h"
#include "JSystem/JUT/JUTFont.h"
#include "types.h"

/*
    Generated from dpostproc

.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
lbl_80474280:
    .asciz "Font Encode Type %d\n"
.balign 4
lbl_80474298:
    .asciz "IPLROM fontdata size : %u\n"

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.global saoAboutEncoding___10JUTRomFont
saoAboutEncoding___10JUTRomFont:
    .4byte 0x00000000
    .4byte 0x00020120
    .4byte isLeadByte_1Byte__7JUTFontFi
    .4byte 0x00000002
    .4byte 0x00120F00
    .4byte isLeadByte_ShiftJIS__7JUTFontFi
.global __vt__10JUTRomFont
__vt__10JUTRomFont:
    .4byte 0
    .4byte 0
    .4byte __dt__10JUTRomFontFv
    .4byte setGX__10JUTRomFontFv
    .4byte setGX__7JUTFontFQ28JUtility6TColorQ28JUtility6TColor
    .4byte drawChar_scale__10JUTRomFontFffffib
    .4byte getLeading__10JUTRomFontCFv
    .4byte getAscent__10JUTRomFontCFv
    .4byte getDescent__10JUTRomFontCFv
    .4byte getHeight__10JUTRomFontCFv
    .4byte getWidth__10JUTRomFontCFv
    .4byte getWidthEntry__10JUTRomFontCFiPQ27JUTFont6TWidth
    .4byte getCellWidth__10JUTRomFontCFv
    .4byte getCellHeight__10JUTRomFontCFv
    .4byte getFontType__10JUTRomFontCFv
    .4byte getResFont__10JUTRomFontCFv
    .4byte isLeadByte__10JUTRomFontCFi

.section .sbss # 0x80514D80 - 0x80516360
.balign 8
.global spAboutEncoding___10JUTRomFont
spAboutEncoding___10JUTRomFont:
    .skip 0x4
.global spFontHeader___10JUTRomFont
spFontHeader___10JUTRomFont:
    .skip 0x4
.global suFontHeaderRefered___10JUTRomFont
suFontHeaderRefered___10JUTRomFont:
    .skip 0x4

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
lbl_805166F8:
    .float 0.0
lbl_805166FC:
    .float 0.5
.balign 8
lbl_80516700:
    .4byte 0x43300000
    .4byte 0x80000000
*/
JUTRomFont::AboutEncoding JUTRomFont::saoAboutEncoding_[2]
    = { 0, 0x00020120, &JUTFont::isLeadByte_1Byte, 2, 0x00120F00, &JUTFont::isLeadByte_ShiftJIS };
/*
 * --INFO--
 * Address:	........
 * Size:	00003C
 */
JUTRomFont::JUTRomFont()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8003264C
 * Size:	000054
 */
JUTRomFont::JUTRomFont(JKRHeap* heap) { initiate(heap); }

/*
 * --INFO--
 * Address:	800326A0
 * Size:	000054
 */
void JUTRomFont::initiate(JKRHeap* heap)
{
	_04 = false;
	JUTFont::initialize_state();
	JUTRomFont::loadImage(heap);
	_04 = true;
}

/*
 * --INFO--
 * Address:	800326F4
 * Size:	00009C
 */
JUTRomFont::~JUTRomFont()
{
	if (--suFontHeaderRefered_ == 0) {
		JKRHeap::free(spFontHeader_, nullptr);
		spFontHeader_    = nullptr;
		spAboutEncoding_ = nullptr;
	}
	_04 = false;
}

/*
 * --INFO--
 * Address:	80032790
 * Size:	0000CC
 */
void JUTRomFont::loadImage(JKRHeap* param_1)
{
	u32 byteCount;

	if (param_1 == nullptr) {
		param_1 = JKRHeap::sCurrentHeap;
	}
	if (spFontHeader_ == nullptr) {
		JUTReportConsole_f("Font Encode Type %d\n", OSGetFontEncode());
		spAboutEncoding_ = &saoAboutEncoding_[OSGetFontEncode()];
		byteCount        = (spAboutEncoding_->m_dataSize);
		JUTReportConsole_f("IPLROM fontdata size : %u\n", byteCount);
		spFontHeader_ = (FontHeader*)JKRHeap::alloc(byteCount, 0x20, param_1);
		OSInitFont();
		_08 = spFontHeader_->m_width;
	}
	suFontHeaderRefered_++;
}

/*
 * --INFO--
 * Address:	8003285C
 * Size:	0000F8
 * TODO: finish GX enums
 */
void JUTRomFont::setGX(void)
{
	GXSetNumChans(1);
	GXSetNumTevStages(1);
	GXSetNumTexGens(1);
	GXSetTevOrder(GX_TEVSTAGE0, GX_TEXCOORD_NULL, GX_TEXMAP0, 4);
	GXSetChanCtrl(4, GX_DISABLE, 0, 1, 0, 0, 2);
	GXSetTevOp(0, 0);
	GXSetBlendMode(GX_BM_BLEND, GX_BL_SRCALPHA, GX_BL_INVSRCALPHA, GX_LO_SET);
	GXSetVtxAttrFmt(0, GX_VA_POS, GX_POS_XYZ, GX_F32, 0);
	GXSetVtxAttrFmt(0, GX_VA_CLR0, GX_POS_XYZ, GX_RGB565, 0);
	GXSetVtxAttrFmt(0, GX_VA_TEX0, GX_POS_XYZ, GX_U16, 0xf);
	GXClearVtxDesc();
	GXSetVtxDesc(9, 1);
	GXSetVtxDesc(0xb, 1);
	GXSetVtxDesc(0xd, 1);
}

/*
 * --INFO--
 * Address:	80032954
 * Size:	000480
 */
f32 JUTRomFont::drawChar_scale(f32 pos_x, f32 pos_y, f32 scale_x, f32 scale_y, int str_int, bool flag)
{
	GXTexObj sp1C_tex;
	s32 sp18_width;
	void* sp14_image;
	s32 sp10_x, spC_y;

	// 58
	if (str_int == 0) {
		return 0.0f;
	}

	// 64
	f32 _f31 = scale_x / getCellWidth();
	f32 _f29 = scale_y / getCellHeight();

	// d0
	char sp8_str[2];
	char* thing_p = sp8_str;
	if (str_int >= 0x100) {
		thing_p++;
		sp8_str[0] = str_int >> 8;
	}
	*thing_p = str_int;

	// f8
	// char* OSGetFontTexture(const char* string, void** image, s32 *x, s32 *y, s32* width);
	OSGetFontTexture(sp8_str, &sp14_image, &sp10_x, &spC_y, &sp18_width);
	// void GXInitTexObj(GXTexObj*, void*, u16, u16, GXTexFmt, GXTexWrapMode, GXTexWrapMode, GXBool);
	GXInitTexObj(&sp1C_tex, sp14_image, 0x200, 0x200, GX_TF_I4, GX_CLAMP, GX_CLAMP, GX_DISABLE);
	// void GXInitTexObjLOD(GXTexObj*, GXTexFilter, GXTexFilter, float, float, float, GXBool, GXBool, GXAnisotropy);
	GXInitTexObjLOD(&sp1C_tex, GX_LINEAR, GX_LINEAR, 0.0f, 0.0f, 0.0f, GX_DISABLE, GX_DISABLE, GX_ANISO_1);
	// void GXLoadTexObj(GXTexObj*, GXTexMapID);
	GXLoadTexObj(&sp1C_tex, GX_TEXMAP0);

	// 154
	s32 _r31;
	if (_05 != 0) {
		_r31 = _08 - sp18_width;
	} else {
		_r31 = 0;
	}

	// 174
	// 1ac
	// f32 _f2 = _f31 * _r31;
	// 1b8
	f32 _f28 = _f31 * _r31 / 2 + pos_x;
	// 1c0
	f32 _f27 = sp18_width * _f31 + _f28;

	// 1c4
	// 1f4
	f32 _f26 = pos_y - _f29 * getAscent();

	// 25c
	f32 _f29_2 = _f29 * getDescent() + pos_y;

	s32 _r30 = (sp10_x << 15) / 512;                // 228
	s32 _r29 = ((sp10_x + sp18_width) << 15) / 512; // 240
	s32 _r28 = (spC_y << 15) / 512;                 // 258
	s32 _r27 = ((spC_y + getHeight()) << 15) / 512; // 284

	// 288
	GXBegin(GX_QUADS, GX_VTXFMT0, 4);

	f32 _f4 = 0.0f;

	HW_REG(0xCC008000, f32) = (s16)_f28; // 2f4
	HW_REG(0xCC008000, f32) = (s16)_f26; // 304
	HW_REG(0xCC008000, f32) = _f4;       // 30c
	HW_REG(0xCC008000, u32) = _0C.asU32; // 324
	HW_REG(0xCC008000, s16) = _r30;      // 32c
	HW_REG(0xCC008000, s16) = _r28;      // 334

	HW_REG(0xCC008000, f32) = (s16)_f27; // 364
	HW_REG(0xCC008000, f32) = (s16)_f26; // 370
	HW_REG(0xCC008000, f32) = _f4;       // 374
	HW_REG(0xCC008000, u32) = _10.asU32; // 380
	HW_REG(0xCC008000, s16) = _r29;      // 388
	HW_REG(0xCC008000, s16) = _r28;      // 390

	HW_REG(0xCC008000, f32) = (s16)_f27;   // 3a0
	HW_REG(0xCC008000, f32) = (s16)_f29_2; // 3a8
	HW_REG(0xCC008000, f32) = _f4;         // 3b4
	HW_REG(0xCC008000, u32) = _18.asU32;   // 3cc
	HW_REG(0xCC008000, s16) = _r29;        // 3d8
	HW_REG(0xCC008000, s16) = _r27;        // 3f8

	HW_REG(0xCC008000, f32) = (s16)_f28;   // 400
	HW_REG(0xCC008000, f32) = (s16)_f29_2; // 404
	HW_REG(0xCC008000, f32) = _f4;         // 408
	HW_REG(0xCC008000, u32) = _14.asU32;   // 414
	HW_REG(0xCC008000, s16) = _r30;        // 418
	HW_REG(0xCC008000, s16) = _r27;        // 41c

	return _f31 * (sp18_width + _r31);
}

/*
 * --INFO--
 * Address:	80032DD4
 * Size:	00005C
 */
int JUTRomFont::getHeight() const
{
	return getAscent() + getDescent();
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
 * Address:	80032E30
 * Size:	00000C
 */
int JUTRomFont::getDescent() const { return spFontHeader_->m_descent; }

/*
 * --INFO--
 * Address:	80032E3C
 * Size:	00000C
 */
int JUTRomFont::getAscent() const { return spFontHeader_->m_ascent; }

/*
 * --INFO--
 * Address:	80032E48
 * Size:	00000C
 */
int JUTRomFont::getCellHeight() const { return spFontHeader_->m_cellHeight; }

/*
 * --INFO--
 * Address:	80032E54
 * Size:	00000C
 */
int JUTRomFont::getCellWidth() const { return spFontHeader_->m_cellWidth; }

/*
 * --INFO--
 * Address:	80032E60
 * Size:	000060
 */
int JUTRomFont::getWidthEntry(int, JUTFont::TWidth*) const
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	cmpwi    r4, 0x100
	stw      r0, 0x24(r1)
	addi     r3, r1, 8
	stw      r31, 0x1c(r1)
	mr       r31, r5
	blt      lbl_80032E8C
	srawi    r0, r4, 8
	addi     r3, r3, 1
	stb      r0, 8(r1)

lbl_80032E8C:
	stb      r4, 0(r3)
	addi     r3, r1, 8
	addi     r4, r1, 0xc
	bl       OSGetFontWidth
	lwz      r3, 0xc(r1)
	li       r0, 0
	stb      r3, 1(r31)
	stb      r0, 0(r31)
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80032EC0
 * Size:	000030
 */
bool JUTRomFont::isLeadByte(int c) const { return spAboutEncoding_->m_isLeadByteFunction(c); }

/*
 * --INFO--
 * Address:	80032EF0
 * Size:	00000C
 */
int JUTRomFont::getWidth() const
{
	return spFontHeader_->m_width;
	/*
	lwz      r3, spFontHeader___10JUTRomFont@sda21(r13)
	lhz      r3, 0xc(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80032EFC
 * Size:	00000C
 */
int JUTRomFont::getLeading() const { return spFontHeader_->m_leading; }

/*
 * --INFO--
 * Address:	80032F08
 * Size:	000008
 */
ResFONT* JUTRomFont::getResFont() const { return nullptr; }

/*
 * --INFO--
 * Address:	80032F10
 * Size:	00000C
 */
u32 JUTRomFont::getFontType() const { return spAboutEncoding_->m_fontType; }
