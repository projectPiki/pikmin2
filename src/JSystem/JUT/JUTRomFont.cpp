#include "JSystem/JKR/JKRHeap.h"
#include "JSystem/JUT/JUTFont.h"
#include "JSystem/JUT/JUTConsole.h"
#include "types.h"

JUTRomFont::AboutEncoding* JUTRomFont::spAboutEncoding_;
JUTRomFont::FontHeader* JUTRomFont::spFontHeader_;
u32 JUTRomFont::suFontHeaderRefered_; // they misspelled referred
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
	GXSetTevOrder(GX_TEVSTAGE0, GX_TEXCOORD0, GX_TEXMAP0, GX_COLOR0A0);
	GXSetChanCtrl(GX_COLOR0A0, GX_DISABLE, GX_SRC_REG, GX_SRC_VTX, GX_LIGHT_NULL, GX_DF_NONE, GX_AF_NONE);
	GXSetTevOp(GX_TEVSTAGE0, GX_MODULATE);
	GXSetBlendMode(GX_BM_BLEND, GX_BL_SRCALPHA, GX_BL_INVSRCALPHA, GX_LO_SET);
	GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_POS, GX_POS_XYZ, GX_F32, 0);
	GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_CLR0, GX_POS_XYZ, GX_RGBA8, 0);
	GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_TEX0, GX_POS_XYZ, GX_U16, 0xf);
	GXClearVtxDesc();
	GXSetVtxDesc(GX_VA_POS, GX_DIRECT);
	GXSetVtxDesc(GX_VA_CLR0, GX_DIRECT);
	GXSetVtxDesc(GX_VA_TEX0, GX_DIRECT);
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
	HW_REG(0xCC008000, u32) = u32(_0C);  // 324
	HW_REG(0xCC008000, s16) = _r30;      // 32c
	HW_REG(0xCC008000, s16) = _r28;      // 334

	HW_REG(0xCC008000, f32) = (s16)_f27; // 364
	HW_REG(0xCC008000, f32) = (s16)_f26; // 370
	HW_REG(0xCC008000, f32) = _f4;       // 374
	HW_REG(0xCC008000, u32) = u32(_10);  // 380
	HW_REG(0xCC008000, s16) = _r29;      // 388
	HW_REG(0xCC008000, s16) = _r28;      // 390

	HW_REG(0xCC008000, f32) = (s16)_f27;   // 3a0
	HW_REG(0xCC008000, f32) = (s16)_f29_2; // 3a8
	HW_REG(0xCC008000, f32) = _f4;         // 3b4
	HW_REG(0xCC008000, u32) = u32(_18);    // 3cc
	HW_REG(0xCC008000, s16) = _r29;        // 3d8
	HW_REG(0xCC008000, s16) = _r27;        // 3f8

	HW_REG(0xCC008000, f32) = (s16)_f28;   // 400
	HW_REG(0xCC008000, f32) = (s16)_f29_2; // 404
	HW_REG(0xCC008000, f32) = _f4;         // 408
	HW_REG(0xCC008000, u32) = u32(_14);    // 414
	HW_REG(0xCC008000, s16) = _r30;        // 418
	HW_REG(0xCC008000, s16) = _r27;        // 41c

	return _f31 * (sp18_width + _r31);
}

/*
 * --INFO--
 * Address:	80032DD4
 * Size:	00005C
 * int JUTRomFont::getHeight() const { return getAscent() + getDescent(); }
 */

/*
 * --INFO--
 * Address:	80032E30
 * Size:	00000C
 * int JUTRomFont::getDescent() const { return spFontHeader_->m_descent; }
 * Weak function.
 */

/*
 * --INFO--
 * Address:	80032E3C
 * Size:	00000C
 * int JUTRomFont::getAscent() const { return spFontHeader_->m_ascent; }
 * Weak function.
 */

/*
 * --INFO--
 * Address:	80032E48
 * Size:	00000C
 * int JUTRomFont::getCellHeight() const { return spFontHeader_->m_cellHeight; }
 * Weak function.
 */

/*
 * --INFO--
 * Address:	80032E54
 * Size:	00000C
 * int JUTRomFont::getCellWidth() const { return spFontHeader_->m_cellWidth; }
 * Weak function.
 */

/*
 * --INFO--
 * Address:	80032E60
 * Size:	000060
 */
void JUTRomFont::getWidthEntry(int a, JUTFont::TWidth* width) const
{
	char sp8[2];
	s32 spC;
	char* phi_r3;

	phi_r3 = sp8;
	if (a >= 0x100) {
		sp8[0] = a >> 8;
		phi_r3++;
	}
	*phi_r3 = a;
	OSGetFontWidth(sp8, &spC);
	width->w1 = spC;
	width->w0 = 0;
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
 * int JUTRomFont::getWidth() const { return spFontHeader_->m_width; }
 * Weak function.
 */

/*
 * --INFO--
 * Address:	80032EFC
 * Size:	00000C
 * u16 JUTRomFont::getLeading() const { return spFontHeader_->m_leading; }
 * Weak function.
 */

/*
 * --INFO--
 * Address:	80032F08
 * Size:	000008
 * ResFONT* JUTRomFont::getResFont() const { return nullptr; }
 * Weak function.
 */

/*
 * --INFO--
 * Address:	80032F10
 * Size:	00000C
 * u32 JUTRomFont::getFontType() const { return spAboutEncoding_->m_fontType; }
 * Weak function.
 */
