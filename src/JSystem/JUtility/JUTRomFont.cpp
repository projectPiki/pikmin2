#include "JSystem/JKernel/JKRHeap.h"
#include "JSystem/JUtility/JUTFont.h"
#include "JSystem/JUtility/JUTConsole.h"
#include "types.h"

JUTRomFont::AboutEncoding* JUTRomFont::spAboutEncoding_;
OSFontHeader* JUTRomFont::spFontHeader_;
u32 JUTRomFont::suFontHeaderRefered_; // they misspelled referred
JUTRomFont::AboutEncoding JUTRomFont::saoAboutEncoding_[2]
    = { 0, 0x00020120, &JUTFont::isLeadByte_1Byte, 2, 0x00120F00, &JUTFont::isLeadByte_ShiftJIS };

/**
 * @note Address: N/A
 * @note Size: 0x3C
 */
JUTRomFont::JUTRomFont() { }

/**
 * @note Address: 0x8003264C
 * @note Size: 0x54
 */
JUTRomFont::JUTRomFont(JKRHeap* heap) { initiate(heap); }

/**
 * @note Address: 0x800326A0
 * @note Size: 0x54
 */
void JUTRomFont::initiate(JKRHeap* heap)
{
	mIsValid = false;
	JUTFont::initialize_state();
	JUTRomFont::loadImage(heap);
	mIsValid = true;
}

/**
 * @note Address: 0x800326F4
 * @note Size: 0x9C
 */
JUTRomFont::~JUTRomFont()
{
	if (--suFontHeaderRefered_ == 0) {
		JKRHeap::free(spFontHeader_, nullptr);
		spFontHeader_    = nullptr;
		spAboutEncoding_ = nullptr;
	}

	mIsValid = false;
}

/**
 * @note Address: 0x80032790
 * @note Size: 0xCC
 */
void JUTRomFont::loadImage(JKRHeap* heap)
{
	u32 byteCount;

	if (heap == nullptr) {
		heap = JKRHeap::getCurrentHeap();
	}

	if (spFontHeader_ == nullptr) {
		JUTReportConsole_f("Font Encode Type %d\n", OSGetFontEncode());
		spAboutEncoding_ = &saoAboutEncoding_[OSGetFontEncode()];
		byteCount        = (spAboutEncoding_->mDataSize);
		JUTReportConsole_f("IPLROM fontdata size : %u\n", byteCount);
		spFontHeader_ = (OSFontHeader*)JKRHeap::alloc(byteCount, 0x20, heap);
		OSInitFont(spFontHeader_);
		mFixedWidth = spFontHeader_->width;
	}
	suFontHeaderRefered_++;
}

/**
 * @note Address: 0x8003285C
 * @note Size: 0xF8
 */
void JUTRomFont::setGX()
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
	GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_TEX0, GX_POS_XYZ, GX_U16, 15);

	GXClearVtxDesc();
	GXSetVtxDesc(GX_VA_POS, GX_DIRECT);
	GXSetVtxDesc(GX_VA_CLR0, GX_DIRECT);
	GXSetVtxDesc(GX_VA_TEX0, GX_DIRECT);
}

/**
 * @note Address: 0x80032954
 * @note Size: 0x480
 */
f32 JUTRomFont::drawChar_scale(f32 pos_x, f32 pos_y, f32 scale_x, f32 scale_y, int chr, bool unused)
{
	GXTexObj texObj;
	s32 width;
	void* image;
	s32 fontX, fontY;

	if (chr == '\0') {
		return 0.0f;
	}

	f32 xScale = scale_x / getCellWidth();
	f32 yScale = scale_y / getCellHeight();

	char str[2];
	char* strPtr = str;
	if (chr >= 0x100) {
		strPtr++;
		str[0] = chr >> 8;
	}
	*strPtr = chr;

	OSGetFontTexture(str, &image, &fontX, &fontY, &width);
	GXInitTexObj(&texObj, image, 0x200, 0x200, GX_TF_I4, GX_CLAMP, GX_CLAMP, GX_DISABLE);
	GXInitTexObjLOD(&texObj, GX_LINEAR, GX_LINEAR, 0.0f, 0.0f, 0.0f, GX_DISABLE, GX_DISABLE, GX_ANISO_1);
	GXLoadTexObj(&texObj, GX_TEXMAP0);

	s32 shift;
	if (mIsFixed) {
		shift = mFixedWidth - width;
	} else {
		shift = 0;
	}

	f32 posMinX = xScale * shift / 2 + pos_x;
	f32 posMaxX = width * xScale + posMinX;
	f32 posMinY = pos_y - yScale * getAscent();
	f32 posMaxY = yScale * getDescent() + pos_y;

	s32 texMinX = (fontX << 15) / 512;
	s32 texMaxX = ((fontX + width) << 15) / 512;
	s32 texMinY = (fontY << 15) / 512;
	s32 texMaxY = ((fontY + getHeight()) << 15) / 512;

	GXBegin(GX_QUADS, GX_VTXFMT0, 4);

	f32 z = 0.0f;

	// Bottom left
	GXPosition3f32((s16)posMinX, (s16)posMinY, z);
	GXColor1u32(mColor1);
	GXPosition2u16(texMinX, texMinY);

	// Bottom right
	GXPosition3f32((s16)posMaxX, (s16)posMinY, z);
	GXColor1u32(mColor2);
	GXPosition2u16(texMaxX, texMinY);

	// Top right
	GXPosition3f32((s16)posMaxX, (s16)posMaxY, z);
	GXColor1u32(mColor4);
	GXPosition2u16(texMaxX, texMaxY);

	// Top left
	GXPosition3f32((s16)posMinX, (s16)posMaxY, z);
	GXColor1u32(mColor3);
	GXPosition2u16(texMinX, texMaxY);

	return xScale * (width + shift);
}

/**
 * @note Address: 0x80032E60
 * @note Size: 0x60
 */
void JUTRomFont::getWidthEntry(int chr, JUTFont::TWidth* width) const
{
	char str[2];
	s32 fontWidth;
	char* strPtr;

	strPtr = str;
	if (chr >= 0x100) {
		str[0] = chr >> 8;
		strPtr++;
	}
	*strPtr = chr;

	OSGetFontWidth(str, &fontWidth);
	width->w1 = fontWidth;
	width->w0 = 0;
}

/**
 * @note Address: 0x80032EC0
 * @note Size: 0x30
 */
bool JUTRomFont::isLeadByte(int chr) const { return spAboutEncoding_->mIsLeadByteFunction(chr); }
