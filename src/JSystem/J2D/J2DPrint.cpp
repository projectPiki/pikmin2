#include "JSystem/J2D/J2DPrint.h"
#include "JSystem/JKernel/JKRHeap.h"
#include "Dolphin/stl.h"

const u8* J2DPrint::mStrBuff;
size_t J2DPrint::mStrBuffSize;
bool J2DPrint::mHeapFlag;
bool J2DPrint::mBufferNotEnough;

/**
 * @note Address: 0x8003D750
 * @note Size: 0x94
 */
J2DPrint::J2DPrint(JUTFont* font, f32 a1)
{
	private_initiate(font, a1, 0.0f, JUtility::TColor(-1), JUtility::TColor(-1), JUtility::TColor(0), JUtility::TColor(-1), true);
}

/**
 * @note Address: 0x8003D7E4
 * @note Size: 0x98
 */
J2DPrint::J2DPrint(JUTFont* font, JUtility::TColor color1, JUtility::TColor color2)
{
	private_initiate(font, 0.0f, 0.0f, color1, color2, JUtility::TColor(0), JUtility::TColor(-1), true);
}

/**
 * @note Address: 0x8003D87C
 * @note Size: 0x94
 */
J2DPrint::J2DPrint(JUTFont* font, f32 a1, f32 a2, JUtility::TColor color1, JUtility::TColor color2, JUtility::TColor color3,
                   JUtility::TColor color4)
{
	private_initiate(font, a1, a2, color1, color2, color3, color4, false);
}

/**
 * @note Address: 0x8003D910
 * @note Size: 0x48
 */
J2DPrint::~J2DPrint() { }

/**
 * @note Address: 0x8003D958
 * @note Size: 0x54
 */
void J2DPrint::initiate()
{
	if (mFont) {
		mFont->setGX(mColorWhite, mColorBlack);
	}
}

/**
 * @note Address: 0x8003D9AC
 * @note Size: 0x1E8
 */
void J2DPrint::private_initiate(JUTFont* font, f32 width, f32 height, JUtility::TColor charColor, JUtility::TColor gradColor,
                                JUtility::TColor whiteColor, JUtility::TColor blackColor, bool doUseFontHeight)
{
	if (!mStrBuff) {
		setBuffer(0x400);
	}
	mFont       = font;
	mFontScaleX = width;
	mFontScaleY = 32.0f;
	if (mFont) {
		mFontScaleY = (!doUseFontHeight) ? height : mFont->getLeading();
	}
	_5A = true;
	locate(0.0f, 0.0f);

	mCharColor     = (charColor);
	mGradientColor = (gradColor);
	mColorWhite    = (whiteColor);
	mColorBlack    = (blackColor);

	if (!mFont) {
		mFontWidth = 80;
	} else {
		mFontWidth = mFont->getWidth() * 4;
	}

	if (mFont) {
		setFontSize();
		mFont->setGX(mColorWhite, mColorBlack);
	}

	initchar();
}

/**
 * @note Address: 0x8003DB94
 * @note Size: 0x44
 */
JUTFont* J2DPrint::setFont(JUTFont* font)
{
	JUTFont* old = mFont;
	if (font) {
		mFont = font;
	}

	if (!old) {
		setFontSize();
	}
	return old;
}

/**
 * @note Address: 0x8003DBD8
 * @note Size: 0x6C
 */
const u8* J2DPrint::setBuffer(u32 size)
{
	const u8* buffer = mStrBuff;
	if (mHeapFlag) {
		delete mStrBuff;
	}
	mStrBuff     = new (JKRGetSystemHeap(), 0) u8[size];
	mStrBuffSize = size;
	mHeapFlag    = true;
	return buffer;
}

/**
 * @note Address: 0x8003DC44
 * @note Size: 0x98
 */
void J2DPrint::setFontSize()
{
	if (mFont) {
		mGlyphWidth  = mFont->getCellWidth();
		mGlyphHeight = mFont->getCellHeight();
	}
}

/**
 * @note Address: 0x8003DCDC
 * @note Size: 0x1C
 */
void J2DPrint::locate(f32 x, f32 y)
{
	mPositionX = x;
	mPositionY = y;
	mCursorX   = x;
	mCursorY   = y;
	mRotation  = 0.0f;
}

/**
 * @note Address: 0x8003DCF8
 * @note Size: 0x114
 */
f32 J2DPrint::print(f32 x, f32 y, const char* format, ...)
{
	locate(x, y);

	va_list args;
	va_start(args, format);
	TSize size;

	initchar();
	int len = vsnprintf((char*)mStrBuff, mStrBuffSize, format, args);
	if (len < 0) {
		return 0.0f;
	} else {
		if (len >= mStrBuffSize) {
			len              = mStrBuffSize - 1;
			mBufferNotEnough = true;
		}
		parse(mStrBuff, len, 0x7fffffff, nullptr, size, 255, true);
	}
	return size.mWidth;
}

/**
 * @note Address: 0x8003DE0C
 * @note Size: 0x120
 */
f32 J2DPrint::print(f32 x, f32 y, u8 a, const char* format, ...)
{
	locate(x, y);

	va_list args;
	va_start(args, format);
	TSize size;

	initchar();
	int len = vsnprintf((char*)mStrBuff, mStrBuffSize, format, args);
	if (len < 0) {
		return 0.0f;
	} else {
		if (len >= mStrBuffSize) {
			len              = mStrBuffSize - 1;
			mBufferNotEnough = true;
		}
		parse(mStrBuff, len, 0x7fffffff, nullptr, size, a, true);
	}
	return size.mWidth;
}

/**
 * @note Address: 0x8003DF2C
 * @note Size: 0xEC
 */
f32 J2DPrint::getWidth(const char* format, ...)
{
	initchar();
	va_list args;
	va_start(args, format);
	TSize size;

	int len = vsnprintf((char*)mStrBuff, mStrBuffSize, format, args);
	if (len < 0 || len > mStrBuffSize) {
		len = mStrBuffSize;
	}
	parse(mStrBuff, len, 0x7fffffff, nullptr, size, 255, false);
	return size.mWidth;
}

/**
 * @note Address: 0x8003E018
 * @note Size: 0x31C
 */
void J2DPrint::printReturn(const char* str, f32 x, f32 y, J2DTextBoxHBinding hbind, J2DTextBoxVBinding vbind, f32 x2, f32 y2, u8 a)
{
	if (!mFont) {
		return;
	}

	u16 buffer[256];
	initchar();
	mPositionX = mCursorX;
	mPositionY = mCursorY;
	int len    = strlen(str);
	if (len >= mStrBuffSize) {
		len              = mStrBuffSize - 1;
		mBufferNotEnough = true;
	}
	TSize size;
	f32 a2     = parse((const u8*)str, len, (int)x, buffer, size, a, false);
	f32 height = mGlyphHeight / mFont->getCellHeight();
	height *= mFont->getAscent();

	switch (vbind) {
	case J2DVBIND_Bottom:
		y2 += (int)(y - (a2 + height) - 0.5f);
		break;
	case J2DVBIND_Center:
		y2 += (int)((y - (a2 + height) - 0.5f)) / 2;
		break;
	}
	for (u16* i = buffer; *i != 0xffff; i++) {
		switch (hbind) {
		case J2DHBIND_Left:
			*i = 0;
			break;
		case J2DHBIND_Right:
			*i = int(x - *i);
			break;
		case J2DHBIND_Center:
			*i = (x - *i) / 2;
			break;
		}
	}
	initchar();
	mCursorX += x2;
	mCursorY += y2 + height;
	mPositionX = mCursorX;
	mPositionY = mCursorY;
	parse((const u8*)str, len, x, buffer, size, a, true);
	/*
	.loc_0x0:
	  stwu      r1, -0x2B0(r1)
	  mflr      r0
	  stw       r0, 0x2B4(r1)
	  stfd      f31, 0x2A0(r1)
	  psq_st    f31,0x2A8(r1),0,0
	  stfd      f30, 0x290(r1)
	  psq_st    f30,0x298(r1),0,0
	  stfd      f29, 0x280(r1)
	  psq_st    f29,0x288(r1),0,0
	  stfd      f28, 0x270(r1)
	  psq_st    f28,0x278(r1),0,0
	  stfd      f27, 0x260(r1)
	  psq_st    f27,0x268(r1),0,0
	  stfd      f26, 0x250(r1)
	  psq_st    f26,0x258(r1),0,0
	  stmw      r25, 0x234(r1)
	  mr        r26, r3
	  fmr       f28, f1
	  lwz       r0, 0x4(r3)
	  fmr       f26, f2
	  fmr       f29, f3
	  mr        r27, r4
	  fmr       f30, f4
	  cmplwi    r0, 0
	  mr        r28, r5
	  mr        r25, r6
	  mr        r29, r7
	  beq-      .loc_0x2D8
	  bl        0x1130
	  lfs       f0, 0x2C(r26)
	  mr        r3, r27
	  stfs      f0, 0x24(r26)
	  lfs       f0, 0x30(r26)
	  stfs      f0, 0x28(r26)
	  bl        0x8C870
	  lwz       r4, -0x76B8(r13)
	  mr        r5, r3
	  cmplw     r5, r4
	  blt-      .loc_0xA8
	  li        r0, 0x1
	  subi      r5, r4, 0x1
	  stb       r0, -0x76B4(r13)

	.loc_0xA8:
	  fctiwz    f0, f28
	  mr        r3, r26
	  mr        r4, r27
	  mr        r30, r5
	  mr        r9, r29
	  addi      r7, r1, 0x10
	  stfd      f0, 0x218(r1)
	  addi      r8, r1, 0x8
	  li        r10, 0
	  lwz       r31, 0x21C(r1)
	  mr        r6, r31
	  bl        .loc_0x31C
	  lwz       r3, 0x4(r26)
	  fmr       f27, f1
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x34(r12)
	  mtctr     r12
	  bctrl
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x224(r1)
	  lwz       r3, 0x4(r26)
	  stw       r0, 0x220(r1)
	  lfd       f2, -0x7B40(r2)
	  lfd       f1, 0x220(r1)
	  lfs       f0, 0x54(r26)
	  fsubs     f1, f1, f2
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  fdivs     f31, f0, f1
	  mtctr     r12
	  bctrl
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x22C(r1)
	  cmpwi     r25, 0x1
	  lfd       f2, -0x7B40(r2)
	  stw       r0, 0x228(r1)
	  lfd       f0, 0x228(r1)
	  fsubs     f0, f0, f2
	  fmuls     f31, f0, f31
	  fadds     f0, f27, f31
	  beq-      .loc_0x168
	  bge-      .loc_0x1D8
	  cmpwi     r25, 0
	  bge-      .loc_0x19C
	  b         .loc_0x1D8
	  b         .loc_0x1D8

	.loc_0x168:
	  fsubs     f1, f26, f0
	  lfs       f0, -0x7B38(r2)
	  stw       r0, 0x220(r1)
	  fsubs     f0, f1, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x228(r1)
	  lwz       r0, 0x22C(r1)
	  xoris     r0, r0, 0x8000
	  stw       r0, 0x224(r1)
	  lfd       f0, 0x220(r1)
	  fsubs     f0, f0, f2
	  fadds     f30, f30, f0
	  b         .loc_0x1D8

	.loc_0x19C:
	  fsubs     f1, f26, f0
	  lfs       f0, -0x7B38(r2)
	  stw       r0, 0x220(r1)
	  fsubs     f0, f1, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x228(r1)
	  lwz       r3, 0x22C(r1)
	  rlwinm    r0,r3,1,31,31
	  add       r0, r0, r3
	  srawi     r0, r0, 0x1
	  xoris     r0, r0, 0x8000
	  stw       r0, 0x224(r1)
	  lfd       f0, 0x220(r1)
	  fsubs     f0, f0, f2
	  fadds     f30, f30, f0

	.loc_0x1D8:
	  addi      r3, r1, 0x10
	  b         .loc_0x274

	.loc_0x1E0:
	  cmpwi     r28, 0x1
	  beq-      .loc_0x20C
	  bge-      .loc_0x1F8
	  cmpwi     r28, 0
	  bge-      .loc_0x23C
	  b         .loc_0x270

	.loc_0x1F8:
	  cmpwi     r28, 0x3
	  bge-      .loc_0x270
	  li        r0, 0
	  sth       r0, 0x0(r3)
	  b         .loc_0x270

	.loc_0x20C:
	  lis       r0, 0x4330
	  stw       r4, 0x22C(r1)
	  lfd       f1, -0x7B30(r2)
	  stw       r0, 0x228(r1)
	  lfd       f0, 0x228(r1)
	  fsubs     f0, f0, f1
	  fsubs     f0, f28, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x220(r1)
	  lwz       r0, 0x224(r1)
	  sth       r0, 0x0(r3)
	  b         .loc_0x270

	.loc_0x23C:
	  lis       r0, 0x4330
	  stw       r4, 0x22C(r1)
	  lfd       f2, -0x7B30(r2)
	  stw       r0, 0x228(r1)
	  lfs       f0, -0x7B38(r2)
	  lfd       f1, 0x228(r1)
	  fsubs     f1, f1, f2
	  fsubs     f1, f28, f1
	  fmuls     f0, f1, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x220(r1)
	  lwz       r0, 0x224(r1)
	  sth       r0, 0x0(r3)

	.loc_0x270:
	  addi      r3, r3, 0x2

	.loc_0x274:
	  lhz       r4, 0x0(r3)
	  cmplwi    r4, 0xFFFF
	  bne+      .loc_0x1E0
	  mr        r3, r26
	  bl        0xF1C
	  lfs       f1, 0x2C(r26)
	  fadds     f0, f30, f31
	  mr        r3, r26
	  mr        r4, r27
	  fadds     f1, f1, f29
	  mr        r5, r30
	  mr        r6, r31
	  mr        r9, r29
	  addi      r7, r1, 0x10
	  stfs      f1, 0x2C(r26)
	  addi      r8, r1, 0x8
	  li        r10, 0x1
	  lfs       f1, 0x30(r26)
	  fadds     f0, f1, f0
	  stfs      f0, 0x30(r26)
	  lfs       f0, 0x2C(r26)
	  stfs      f0, 0x24(r26)
	  lfs       f0, 0x30(r26)
	  stfs      f0, 0x28(r26)
	  bl        .loc_0x31C

	.loc_0x2D8:
	  psq_l     f31,0x2A8(r1),0,0
	  lfd       f31, 0x2A0(r1)
	  psq_l     f30,0x298(r1),0,0
	  lfd       f30, 0x290(r1)
	  psq_l     f29,0x288(r1),0,0
	  lfd       f29, 0x280(r1)
	  psq_l     f28,0x278(r1),0,0
	  lfd       f28, 0x270(r1)
	  psq_l     f27,0x268(r1),0,0
	  lfd       f27, 0x260(r1)
	  psq_l     f26,0x258(r1),0,0
	  lfd       f26, 0x250(r1)
	  lmw       r25, 0x234(r1)
	  lwz       r0, 0x2B4(r1)
	  mtlr      r0
	  addi      r1, r1, 0x2B0
	  blr

	.loc_0x31C:
	*/
}

/**
 * @note Address: 0x8003E334
 * @note Size: 0x7BC
 */
f32 J2DPrint::parse(const u8*, int, int, u16*, J2DPrint::TSize&, u8, bool)
{
	if (!mFont) {
		return 0.0f;
	}
	mFontScaleX = 10000.0f; // temp for sdata2

	/*
	.loc_0x0:
	  stwu      r1, -0x120(r1)
	  mflr      r0
	  stw       r0, 0x124(r1)
	  stfd      f31, 0x110(r1)
	  psq_st    f31,0x118(r1),0,0
	  stfd      f30, 0x100(r1)
	  psq_st    f30,0x108(r1),0,0
	  stfd      f29, 0xF0(r1)
	  psq_st    f29,0xF8(r1),0,0
	  stfd      f28, 0xE0(r1)
	  psq_st    f28,0xE8(r1),0,0
	  stfd      f27, 0xD0(r1)
	  psq_st    f27,0xD8(r1),0,0
	  stfd      f26, 0xC0(r1)
	  psq_st    f26,0xC8(r1),0,0
	  stfd      f25, 0xB0(r1)
	  psq_st    f25,0xB8(r1),0,0
	  stfd      f24, 0xA0(r1)
	  psq_st    f24,0xA8(r1),0,0
	  stfd      f23, 0x90(r1)
	  psq_st    f23,0x98(r1),0,0
	  stfd      f22, 0x80(r1)
	  psq_st    f22,0x88(r1),0,0
	  stmw      r20, 0x50(r1)
	  stw       r4, 0x8(r1)
	  mr        r20, r3
	  mr        r21, r5
	  mr        r22, r6
	  lwz       r0, 0x4(r3)
	  mr        r23, r7
	  mr        r24, r8
	  mr        r25, r9
	  cmplwi    r0, 0
	  mr        r26, r10
	  bne-      .loc_0x94
	  lfs       f1, -0x7B48(r2)
	  b         .loc_0x758

	.loc_0x94:
	  lfs       f31, 0x2C(r20)
	  lis       r3, 0x8081
	  lfs       f30, 0x30(r20)
	  addi      r0, r4, 0x1
	  subi      r6, r3, 0x7F7F
	  mr        r31, r4
	  stw       r0, 0x8(r1)
	  rlwinm    r7,r25,0,24,31
	  fmr       f29, f31
	  addi      r3, r1, 0x1C
	  lfs       f0, 0x2C(r20)
	  fmr       f28, f30
	  lfs       f1, 0x30(r20)
	  li        r30, 0
	  lbz       r29, 0x0(r4)
	  fmr       f27, f0
	  lwz       r0, 0x8(r20)
	  fmr       f26, f0
	  fmr       f25, f1
	  stw       r0, 0x1C(r1)
	  fmr       f24, f1
	  lwz       r4, 0xC(r20)
	  lbz       r0, 0x1F(r1)
	  stw       r4, 0x18(r1)
	  mullw     r5, r0, r7
	  lbz       r0, 0x1B(r1)
	  mullw     r0, r0, r7
	  mulhw     r7, r6, r5
	  mulhw     r4, r6, r0
	  add       r5, r7, r5
	  srawi     r5, r5, 0x7
	  add       r0, r4, r0
	  rlwinm    r4,r5,1,31,31
	  add       r4, r5, r4
	  srawi     r0, r0, 0x7
	  stb       r4, 0x1F(r1)
	  rlwinm    r4,r0,1,31,31
	  add       r0, r0, r4
	  stb       r0, 0x1B(r1)
	  lbz       r0, 0x22(r20)
	  cmplwi    r0, 0
	  beq-      .loc_0x140
	  addi      r3, r1, 0x18

	.loc_0x140:
	  lwz       r3, 0x0(r3)
	  addi      r4, r1, 0x14
	  lwz       r0, 0x1C(r1)
	  addi      r5, r1, 0x10
	  stw       r3, 0x10(r1)
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x4(r20)
	  bl        -0x11280

	.loc_0x160:
	  lwz       r3, 0x4(r20)
	  mr        r4, r29
	  li        r28, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x40(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x1A0
	  lwz       r3, 0x8(r1)
	  rlwinm    r4,r29,8,0,23
	  li        r28, 0x1
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r1)
	  lbz       r0, 0x0(r3)
	  or        r29, r4, r0

	.loc_0x1A0:
	  cmpwi     r29, 0
	  beq-      .loc_0x1B8
	  lwz       r0, 0x8(r1)
	  sub       r3, r0, r31
	  cmplw     r3, r21
	  ble-      .loc_0x1EC

	.loc_0x1B8:
	  rlwinm.   r0,r26,0,24,31
	  bne-      .loc_0x1E4
	  cmplwi    r23, 0
	  beq-      .loc_0x1E4
	  lfs       f0, -0x7B38(r2)
	  rlwinm    r0,r30,1,15,30
	  fadds     f0, f0, f29
	  fctiwz    f0, f0
	  stfd      f0, 0x20(r1)
	  lwz       r3, 0x24(r1)
	  sthx      r3, r23, r0

	.loc_0x1E4:
	  addi      r30, r30, 0x1
	  b         .loc_0x6E8

	.loc_0x1EC:
	  cmpwi     r29, 0x20
	  lfs       f23, 0x2C(r20)
	  li        r27, 0x1
	  bge-      .loc_0x2D4
	  cmpwi     r29, 0x1B
	  bne-      .loc_0x278
	  mr        r3, r20
	  mr        r5, r25
	  addi      r4, r1, 0x8
	  bl        0x6D4
	  rlwinm    r0,r3,0,16,31
	  cmplwi    r0, 0x484D
	  bne-      .loc_0x268
	  rlwinm.   r0,r26,0,24,31
	  bne-      .loc_0x24C
	  cmplwi    r23, 0
	  beq-      .loc_0x24C
	  lfs       f0, -0x7B38(r2)
	  rlwinm    r0,r30,1,15,30
	  fadds     f0, f0, f29
	  fctiwz    f0, f0
	  stfd      f0, 0x20(r1)
	  lwz       r4, 0x24(r1)
	  sthx      r4, r23, r0

	.loc_0x24C:
	  addi      r30, r30, 0x1
	  stfs      f31, 0x2C(r20)
	  rlwinm    r0,r30,0,16,31
	  cmplwi    r0, 0x100
	  stfs      f30, 0x30(r20)
	  beq-      .loc_0x6E8
	  lfs       f29, -0x7B48(r2)

	.loc_0x268:
	  rlwinm.   r0,r3,0,16,31
	  beq-      .loc_0x5D8
	  li        r27, 0
	  b         .loc_0x5D8

	.loc_0x278:
	  mr        r3, r20
	  mr        r4, r29
	  bl        .loc_0x7BC
	  cmpwi     r29, 0xA
	  li        r27, 0
	  bne-      .loc_0x5D8
	  rlwinm.   r0,r26,0,24,31
	  bne-      .loc_0x2BC
	  cmplwi    r23, 0
	  beq-      .loc_0x2BC
	  lfs       f0, -0x7B38(r2)
	  rlwinm    r0,r30,1,15,30
	  fadds     f0, f0, f29
	  fctiwz    f0, f0
	  stfd      f0, 0x20(r1)
	  lwz       r3, 0x24(r1)
	  sthx      r3, r23, r0

	.loc_0x2BC:
	  addi      r30, r30, 0x1
	  rlwinm    r0,r30,0,16,31
	  cmplwi    r0, 0x100
	  beq-      .loc_0x6E8
	  lfs       f29, -0x7B48(r2)
	  b         .loc_0x5D8

	.loc_0x2D4:
	  rlwinm.   r0,r28,0,24,31
	  beq-      .loc_0x318
	  cmplw     r3, r21
	  ble-      .loc_0x318
	  rlwinm.   r0,r26,0,24,31
	  bne-      .loc_0x310
	  cmplwi    r23, 0
	  beq-      .loc_0x310
	  lfs       f0, -0x7B38(r2)
	  rlwinm    r0,r30,1,15,30
	  fadds     f0, f0, f29
	  fctiwz    f0, f0
	  stfd      f0, 0x20(r1)
	  lwz       r3, 0x24(r1)
	  sthx      r3, r23, r0

	.loc_0x310:
	  addi      r30, r30, 0x1
	  b         .loc_0x6E8

	.loc_0x318:
	  lwz       r3, 0x4(r20)
	  lbz       r0, 0x5(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x350
	  lwz       r3, 0x8(r3)
	  lis       r0, 0x4330
	  stw       r0, 0x20(r1)
	  xoris     r0, r3, 0x8000
	  lfd       f1, -0x7B40(r2)
	  stw       r0, 0x24(r1)
	  lfd       f0, 0x20(r1)
	  fsubs     f0, f0, f1
	  stfs      f0, 0x34(r20)
	  b         .loc_0x388

	.loc_0x350:
	  lwz       r12, 0x0(r3)
	  mr        r4, r29
	  addi      r5, r1, 0xC
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
	  lbz       r3, 0xD(r1)
	  lis       r0, 0x4330
	  stw       r0, 0x20(r1)
	  lfd       f1, -0x7B30(r2)
	  stw       r3, 0x24(r1)
	  lfd       f0, 0x20(r1)
	  fsubs     f0, f0, f1
	  stfs      f0, 0x34(r20)

	.loc_0x388:
	  lwz       r3, 0x4(r20)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x30(r12)
	  mtctr     r12
	  bctrl
	  lis       r4, 0x4330
	  xoris     r0, r3, 0x8000
	  stw       r0, 0x24(r1)
	  xoris     r0, r22, 0x8000
	  lfd       f5, -0x7B40(r2)
	  stw       r4, 0x20(r1)
	  lfs       f0, 0x18(r20)
	  lfd       f2, 0x20(r1)
	  lfs       f1, 0x34(r20)
	  fsubs     f2, f2, f5
	  lfs       f3, -0x7B28(r2)
	  stw       r4, 0x30(r1)
	  fdivs     f2, f0, f2
	  stw       r0, 0x3C(r1)
	  stw       r4, 0x38(r1)
	  lfd       f0, 0x38(r1)
	  fmuls     f1, f1, f2
	  fsubs     f0, f0, f5
	  stfs      f1, 0x34(r20)
	  lfs       f1, 0x2C(r20)
	  lfs       f4, 0x34(r20)
	  lfs       f2, 0x24(r20)
	  fadds     f4, f1, f4
	  fsubs     f2, f4, f2
	  fmuls     f2, f3, f2
	  fctiwz    f2, f2
	  stfd      f2, 0x28(r1)
	  lwz       r0, 0x2C(r1)
	  xoris     r0, r0, 0x8000
	  stw       r0, 0x34(r1)
	  lfd       f2, 0x30(r1)
	  fsubs     f2, f2, f5
	  fdivs     f2, f2, f3
	  fcmpo     cr0, f2, f0
	  ble-      .loc_0x4B0
	  fcmpo     cr0, f1, f31
	  ble-      .loc_0x4B0
	  rlwinm    r5,r28,0,24,31
	  rlwinm.   r0,r26,0,24,31
	  neg       r4, r5
	  lwz       r3, 0x8(r1)
	  or        r4, r4, r5
	  rlwinm    r4,r4,1,31,31
	  addi      r0, r4, 0x1
	  sub       r0, r3, r0
	  stw       r0, 0x8(r1)
	  lfs       f1, 0x30(r20)
	  lfs       f0, 0x14(r20)
	  fadds     f0, f1, f0
	  stfs      f0, 0x30(r20)
	  bne-      .loc_0x48C
	  cmplwi    r23, 0
	  beq-      .loc_0x48C
	  lfs       f0, -0x7B38(r2)
	  rlwinm    r0,r30,1,15,30
	  fadds     f0, f0, f29
	  fctiwz    f0, f0
	  stfd      f0, 0x38(r1)
	  lwz       r3, 0x3C(r1)
	  sthx      r3, r23, r0

	.loc_0x48C:
	  addi      r30, r30, 0x1
	  rlwinm    r0,r30,0,16,31
	  cmplwi    r0, 0x100
	  beq-      .loc_0x6E8
	  lfs       f0, 0x24(r20)
	  li        r27, 0
	  lfs       f29, -0x7B48(r2)
	  stfs      f0, 0x2C(r20)
	  b         .loc_0x5D8

	.loc_0x4B0:
	  rlwinm.   r0,r26,0,24,31
	  beq-      .loc_0x5C8
	  cmplwi    r23, 0
	  beq-      .loc_0x558
	  lfs       f2, 0x18(r20)
	  lis       r7, 0x4330
	  lfs       f0, 0x1C(r20)
	  rlwinm    r0,r30,1,15,30
	  fctiwz    f2, f2
	  lhzx      r0, r23, r0
	  fctiwz    f0, f0
	  lwz       r3, 0x4(r20)
	  extsh     r0, r0
	  stw       r7, 0x38(r1)
	  stfd      f2, 0x30(r1)
	  xoris     r0, r0, 0x8000
	  lwz       r12, 0x0(r3)
	  mr        r4, r29
	  lwz       r6, 0x34(r1)
	  li        r5, 0x1
	  stfd      f0, 0x20(r1)
	  xoris     r6, r6, 0x8000
	  lfd       f4, -0x7B40(r2)
	  stw       r0, 0x3C(r1)
	  lwz       r0, 0x24(r1)
	  lfd       f0, 0x38(r1)
	  xoris     r0, r0, 0x8000
	  stw       r6, 0x2C(r1)
	  fsubs     f3, f0, f4
	  lwz       r12, 0x14(r12)
	  stw       r7, 0x28(r1)
	  lfs       f2, 0x30(r20)
	  lfd       f0, 0x28(r1)
	  fadds     f1, f1, f3
	  stw       r0, 0x44(r1)
	  fsubs     f3, f0, f4
	  stw       r7, 0x40(r1)
	  lfd       f0, 0x40(r1)
	  fsubs     f4, f0, f4
	  mtctr     r12
	  bctrl
	  b         .loc_0x5C8

	.loc_0x558:
	  lfs       f2, 0x18(r20)
	  lis       r6, 0x4330
	  lfs       f0, 0x1C(r20)
	  mr        r4, r29
	  fctiwz    f2, f2
	  lwz       r3, 0x4(r20)
	  fctiwz    f0, f0
	  stw       r6, 0x38(r1)
	  lwz       r12, 0x0(r3)
	  li        r5, 0x1
	  stfd      f2, 0x40(r1)
	  lfd       f4, -0x7B40(r2)
	  stfd      f0, 0x30(r1)
	  lwz       r7, 0x44(r1)
	  lwz       r0, 0x34(r1)
	  xoris     r7, r7, 0x8000
	  stw       r6, 0x28(r1)
	  xoris     r0, r0, 0x8000
	  lwz       r12, 0x14(r12)
	  stw       r7, 0x3C(r1)
	  lfs       f2, 0x30(r20)
	  stw       r0, 0x2C(r1)
	  lfd       f3, 0x38(r1)
	  lfd       f0, 0x28(r1)
	  fsubs     f3, f3, f4
	  fsubs     f4, f0, f4
	  mtctr     r12
	  bctrl

	.loc_0x5C8:
	  lfs       f1, 0x2C(r20)
	  lfs       f0, 0x34(r20)
	  fadds     f0, f1, f0
	  stfs      f0, 0x2C(r20)

	.loc_0x5D8:
	  rlwinm.   r0,r27,0,24,31
	  beq-      .loc_0x6D4
	  lfs       f0, 0x2C(r20)
	  fsubs     f0, f0, f31
	  fcmpo     cr0, f0, f29
	  ble-      .loc_0x5F4
	  fmr       f29, f0

	.loc_0x5F4:
	  lfs       f1, 0x2C(r20)
	  lfs       f0, 0x10(r20)
	  fadds     f0, f1, f0
	  stfs      f0, 0x2C(r20)
	  lfs       f1, 0x34(r20)
	  lfs       f0, 0x10(r20)
	  fadds     f0, f1, f0
	  stfs      f0, 0x34(r20)
	  lwz       r3, 0x4(r20)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  xoris     r4, r3, 0x8000
	  lwz       r3, 0x4(r20)
	  lis       r0, 0x4330
	  stw       r4, 0x44(r1)
	  lwz       r12, 0x0(r3)
	  stw       r0, 0x40(r1)
	  lfd       f1, -0x7B40(r2)
	  lfd       f0, 0x40(r1)
	  lwz       r12, 0x24(r12)
	  fsubs     f22, f0, f1
	  mtctr     r12
	  bctrl
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x3C(r1)
	  lfd       f2, -0x7B40(r2)
	  stw       r0, 0x38(r1)
	  lfs       f0, 0x1C(r20)
	  lfd       f1, 0x38(r1)
	  lfs       f3, 0x30(r20)
	  fsubs     f1, f1, f2
	  fdivs     f0, f0, f1
	  fmuls     f0, f0, f22
	  fadds     f0, f3, f0
	  fcmpo     cr0, f28, f0
	  bge-      .loc_0x694
	  fmr       f28, f0

	.loc_0x694:
	  lfs       f0, 0x2C(r20)
	  fcmpo     cr0, f0, f26
	  ble-      .loc_0x6A4
	  fmr       f26, f0

	.loc_0x6A4:
	  fcmpo     cr0, f0, f27
	  bge-      .loc_0x6B0
	  fmr       f27, f0

	.loc_0x6B0:
	  fcmpo     cr0, f23, f27
	  bge-      .loc_0x6BC
	  fmr       f27, f23

	.loc_0x6BC:
	  fcmpo     cr0, f3, f24
	  ble-      .loc_0x6C8
	  fmr       f24, f3

	.loc_0x6C8:
	  fcmpo     cr0, f3, f25
	  bge-      .loc_0x6D4
	  fmr       f25, f3

	.loc_0x6D4:
	  lwz       r3, 0x8(r1)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r1)
	  lbz       r29, 0x0(r3)
	  b         .loc_0x160

	.loc_0x6E8:
	  cmplwi    r23, 0
	  beq-      .loc_0x700
	  lis       r3, 0x1
	  rlwinm    r0,r30,1,15,30
	  subi      r3, r3, 0x1
	  sthx      r3, r23, r0

	.loc_0x700:
	  fsubs     f0, f26, f27
	  stfs      f0, 0x0(r24)
	  lwz       r3, 0x4(r20)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  xoris     r0, r3, 0x8000
	  lis       r3, 0x4330
	  stw       r0, 0x44(r1)
	  fsubs     f0, f24, f25
	  lfd       f2, -0x7B40(r2)
	  rlwinm.   r0,r26,0,24,31
	  stw       r3, 0x40(r1)
	  lfd       f1, 0x40(r1)
	  fsubs     f1, f1, f2
	  fadds     f0, f0, f1
	  stfs      f0, 0x4(r24)
	  bne-      .loc_0x754
	  stfs      f31, 0x2C(r20)
	  stfs      f30, 0x30(r20)

	.loc_0x754:
	  fsubs     f1, f28, f30

	.loc_0x758:
	  psq_l     f31,0x118(r1),0,0
	  lfd       f31, 0x110(r1)
	  psq_l     f30,0x108(r1),0,0
	  lfd       f30, 0x100(r1)
	  psq_l     f29,0xF8(r1),0,0
	  lfd       f29, 0xF0(r1)
	  psq_l     f28,0xE8(r1),0,0
	  lfd       f28, 0xE0(r1)
	  psq_l     f27,0xD8(r1),0,0
	  lfd       f27, 0xD0(r1)
	  psq_l     f26,0xC8(r1),0,0
	  lfd       f26, 0xC0(r1)
	  psq_l     f25,0xB8(r1),0,0
	  lfd       f25, 0xB0(r1)
	  psq_l     f24,0xA8(r1),0,0
	  lfd       f24, 0xA0(r1)
	  psq_l     f23,0x98(r1),0,0
	  lfd       f23, 0x90(r1)
	  psq_l     f22,0x88(r1),0,0
	  lfd       f22, 0x80(r1)
	  lmw       r20, 0x50(r1)
	  lwz       r0, 0x124(r1)
	  mtlr      r0
	  addi      r1, r1, 0x120
	  blr

	.loc_0x7BC:
	*/
}

/**
 * @note Address: 0x8003EAF0
 * @note Size: 0x128
 */
void J2DPrint::doCtrlCode(int code)
{
	switch (code) {
	case 8:
		mCursorX -= mRotation;
		mRotation = 0.0f;
		break;
	case 9:
		s16 temp = mActiveFontWidth;
		if (temp > 0) {
			f32 oldX  = mCursorX;
			mCursorX  = f32(temp + temp * ((int)mCursorX / temp));
			mRotation = mCursorX - oldX;
		}
		break;
	case 10:
		mRotation = 0.0f;
		mCursorX  = mPositionX;
		mCursorY  = mCursorY + mActiveScaleY;
		break;
	case 13:
		mRotation = 0.0f;
		mCursorX  = mPositionX;
		break;
	case 0x1C:
		mCursorX += 1.0f;
		break;
	case 0x1D:
		mCursorX -= 1.0f;
		break;
	case 0x1E:
		mCursorY -= 1.0f;
		break;
	case 0x1F:
		mCursorY += 1.0f;
		break;
	}
}

/**
 * @note Address: 0x8003EC18
 * @note Size: 0x5A0
 */
void J2DPrint::doEscapeCode(const u8**, u8)
{
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	stmw     r26, 0x38(r1)
	mr       r27, r4
	mr       r26, r3
	mr       r28, r5
	li       r30, 0
	li       r29, 0
	lwz      r31, 0(r4)

lbl_8003EC40:
	lwz      r3, 4(r26)
	lwz      r4, 0(r27)
	lwz      r12, 0(r3)
	lbz      r4, 0(r4)
	lwz      r12, 0x40(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8003EC84
	lwz      r3, 0(r27)
	lbz      r4, 0(r3)
	addi     r0, r3, 2
	lbz      r3, 1(r3)
	rlwimi   r3, r4, 8, 0x10, 0x17
	stw      r0, 0(r27)
	clrlwi   r4, r3, 0x10
	b        lbl_8003EC94

lbl_8003EC84:
	lwz      r3, 0(r27)
	lbz      r4, 0(r3)
	addi     r0, r3, 1
	stw      r0, 0(r27)

lbl_8003EC94:
	clrlwi   r0, r4, 0x10
	cmplwi   r0, 0x80
	bge      lbl_8003ECA8
	cmplwi   r0, 0x20
	bge      lbl_8003ECB4

lbl_8003ECA8:
	stw      r31, 0(r27)
	li       r3, 0
	b        lbl_8003F1A4

lbl_8003ECB4:
	addi     r29, r29, 1
	rlwinm   r0, r30, 8, 8, 0x17
	cmpwi    r29, 2
	or       r0, r0, r4
	clrlwi   r30, r0, 0x10
	blt      lbl_8003EC40
	lwz      r0, 8(r26)
	cmpwi    r30, 0x474d
	stw      r0, 0x2c(r1)
	lwz      r0, 0xc(r26)
	stw      r0, 0x28(r1)
	beq      lbl_8003F0E4
	bge      lbl_8003ED48
	cmpwi    r30, 0x4355
	beq      lbl_8003ED9C
	bge      lbl_8003ED24
	cmpwi    r30, 0x434c
	beq      lbl_8003EDEC
	bge      lbl_8003ED18
	cmpwi    r30, 0x4344
	beq      lbl_8003EDC4
	bge      lbl_8003F198
	cmpwi    r30, 0x4343
	bge      lbl_8003EE8C
	b        lbl_8003F198

lbl_8003ED18:
	cmpwi    r30, 0x4352
	beq      lbl_8003EE14
	b        lbl_8003F198

lbl_8003ED24:
	cmpwi    r30, 0x4659
	beq      lbl_8003F074
	bge      lbl_8003ED3C
	cmpwi    r30, 0x4658
	bge      lbl_8003F044
	b        lbl_8003F198

lbl_8003ED3C:
	cmpwi    r30, 0x4743
	beq      lbl_8003EF68
	b        lbl_8003F198

lbl_8003ED48:
	cmpwi    r30, 0x5348
	beq      lbl_8003F0A4
	bge      lbl_8003ED78
	cmpwi    r30, 0x4c44
	beq      lbl_8003EE50
	bge      lbl_8003ED6C
	cmpwi    r30, 0x484d
	beq      lbl_8003F1A0
	b        lbl_8003F198

lbl_8003ED6C:
	cmpwi    r30, 0x4c55
	beq      lbl_8003EE3C
	b        lbl_8003F198

lbl_8003ED78:
	cmpwi    r30, 0x5355
	beq      lbl_8003F198
	bge      lbl_8003ED90
	cmpwi    r30, 0x5354
	bge      lbl_8003EE64
	b        lbl_8003F198

lbl_8003ED90:
	cmpwi    r30, 0x5357
	bge      lbl_8003F198
	b        lbl_8003F0C4

lbl_8003ED9C:
	lfs      f1, lbl_8051683C@sda21(r2)
	mr       r3, r26
	lfs      f2, lbl_80516818@sda21(r2)
	mr       r4, r27
	li       r5, 0xa
	bl       getNumberF32__8J2DPrintFPPCUcffi
	lfs      f0, 0x30(r26)
	fsubs    f0, f0, f1
	stfs     f0, 0x30(r26)
	b        lbl_8003F1A0

lbl_8003EDC4:
	lfs      f1, lbl_8051683C@sda21(r2)
	mr       r3, r26
	lfs      f2, lbl_80516818@sda21(r2)
	mr       r4, r27
	li       r5, 0xa
	bl       getNumberF32__8J2DPrintFPPCUcffi
	lfs      f0, 0x30(r26)
	fadds    f0, f0, f1
	stfs     f0, 0x30(r26)
	b        lbl_8003F1A0

lbl_8003EDEC:
	lfs      f1, lbl_8051683C@sda21(r2)
	mr       r3, r26
	lfs      f2, lbl_80516818@sda21(r2)
	mr       r4, r27
	li       r5, 0xa
	bl       getNumberF32__8J2DPrintFPPCUcffi
	lfs      f0, 0x2c(r26)
	fsubs    f0, f0, f1
	stfs     f0, 0x2c(r26)
	b        lbl_8003F1A0

lbl_8003EE14:
	lfs      f1, lbl_8051683C@sda21(r2)
	mr       r3, r26
	lfs      f2, lbl_80516818@sda21(r2)
	mr       r4, r27
	li       r5, 0xa
	bl       getNumberF32__8J2DPrintFPPCUcffi
	lfs      f0, 0x2c(r26)
	fadds    f0, f0, f1
	stfs     f0, 0x2c(r26)
	b        lbl_8003F1A0

lbl_8003EE3C:
	lfs      f1, 0x30(r26)
	lfs      f0, 0x14(r26)
	fsubs    f0, f1, f0
	stfs     f0, 0x30(r26)
	b        lbl_8003F1A0

lbl_8003EE50:
	lfs      f1, 0x30(r26)
	lfs      f0, 0x14(r26)
	fadds    f0, f1, f0
	stfs     f0, 0x30(r26)
	b        lbl_8003F1A0

lbl_8003EE64:
	lha      r5, 0x20(r26)
	mr       r3, r26
	mr       r4, r27
	li       r7, 0xa
	mr       r6, r5
	bl       getNumberS32__8J2DPrintFPPCUclli
	cmpwi    r3, 0
	ble      lbl_8003F1A0
	sth      r3, 0x20(r26)
	b        lbl_8003F1A0

lbl_8003EE8C:
	lwz      r5, 0x40(r26)
	mr       r3, r26
	lwz      r6, 8(r26)
	mr       r4, r27
	li       r7, 0x10
	bl       getNumberS32__8J2DPrintFPPCUclli
	stw      r3, 0x24(r1)
	lis      r4, 0x80808081@ha
	addi     r5, r4, 0x80808081@l
	clrlwi   r7, r28, 0x18
	lbz      r6, 0x24(r1)
	addi     r3, r1, 0x2c
	lbz      r0, 0x25(r1)
	stb      r6, 8(r26)
	lbz      r4, 0x26(r1)
	stb      r0, 9(r26)
	lbz      r0, 0x27(r1)
	stb      r4, 0xa(r26)
	stb      r0, 0xb(r26)
	lbz      r4, 8(r26)
	lbz      r0, 0x2b(r1)
	stb      r4, 0x2c(r1)
	mullw    r0, r0, r7
	lbz      r4, 9(r26)
	stb      r4, 0x2d(r1)
	lbz      r6, 0xa(r26)
	mulhw    r4, r5, r0
	stb      r6, 0x2e(r1)
	lbz      r6, 0xb(r26)
	add      r0, r4, r0
	mullw    r4, r6, r7
	stb      r6, 0x2f(r1)
	mulhw    r5, r5, r4
	add      r4, r5, r4
	srawi    r4, r4, 7
	srwi     r5, r4, 0x1f
	srawi    r0, r0, 7
	add      r5, r4, r5
	srwi     r4, r0, 0x1f
	stb      r5, 0x2f(r1)
	add      r0, r0, r4
	stb      r0, 0x2b(r1)
	lbz      r0, 0x22(r26)
	cmplwi   r0, 0
	beq      lbl_8003EF44
	addi     r3, r1, 0x28

lbl_8003EF44:
	lwz      r3, 0(r3)
	addi     r4, r1, 0x20
	lwz      r0, 0x2c(r1)
	addi     r5, r1, 0x1c
	stw      r3, 0x1c(r1)
	stw      r0, 0x20(r1)
	lwz      r3, 4(r26)
	bl       setGradColor__7JUTFontFQ28JUtility6TColorQ28JUtility6TColor
	b        lbl_8003F1A0

lbl_8003EF68:
	lwz      r5, 0x44(r26)
	mr       r3, r26
	lwz      r6, 0xc(r26)
	mr       r4, r27
	li       r7, 0x10
	bl       getNumberS32__8J2DPrintFPPCUclli
	stw      r3, 0x18(r1)
	lis      r4, 0x80808081@ha
	addi     r7, r4, 0x80808081@l
	clrlwi   r6, r28, 0x18
	lbz      r5, 0x18(r1)
	addi     r3, r1, 0x2c
	lbz      r0, 0x19(r1)
	stb      r5, 0xc(r26)
	lbz      r4, 0x1a(r1)
	stb      r0, 0xd(r26)
	lbz      r0, 0x1b(r1)
	stb      r4, 0xe(r26)
	stb      r0, 0xf(r26)
	lbz      r4, 0xc(r26)
	lbz      r0, 0x2f(r1)
	stb      r4, 0x28(r1)
	mullw    r0, r0, r6
	lbz      r4, 0xd(r26)
	stb      r4, 0x29(r1)
	lbz      r5, 0xe(r26)
	mulhw    r4, r7, r0
	stb      r5, 0x2a(r1)
	lbz      r5, 0xf(r26)
	add      r4, r4, r0
	mullw    r0, r5, r6
	stb      r5, 0x2b(r1)
	srawi    r5, r4, 7
	srwi     r6, r5, 0x1f
	mulhw    r4, r7, r0
	add      r5, r5, r6
	stb      r5, 0x2f(r1)
	add      r0, r4, r0
	srawi    r0, r0, 7
	srwi     r4, r0, 0x1f
	add      r0, r0, r4
	stb      r0, 0x2b(r1)
	lbz      r0, 0x22(r26)
	cmplwi   r0, 0
	beq      lbl_8003F020
	addi     r3, r1, 0x28

lbl_8003F020:
	lwz      r3, 0(r3)
	addi     r4, r1, 0x14
	lwz      r0, 0x2c(r1)
	addi     r5, r1, 0x10
	stw      r3, 0x10(r1)
	stw      r0, 0x14(r1)
	lwz      r3, 4(r26)
	bl       setGradColor__7JUTFontFQ28JUtility6TColorQ28JUtility6TColor
	b        lbl_8003F1A0

lbl_8003F044:
	lfs      f1, 0x50(r26)
	mr       r3, r26
	lfs      f2, 0x18(r26)
	mr       r4, r27
	li       r5, 0xa
	bl       getNumberF32__8J2DPrintFPPCUcffi
	lfs      f0, lbl_80516818@sda21(r2)
	fcmpo    cr0, f1, f0
	cror     2, 1, 2
	bne      lbl_8003F1A0
	stfs     f1, 0x18(r26)
	b        lbl_8003F1A0

lbl_8003F074:
	lfs      f1, 0x54(r26)
	mr       r3, r26
	lfs      f2, 0x1c(r26)
	mr       r4, r27
	li       r5, 0xa
	bl       getNumberF32__8J2DPrintFPPCUcffi
	lfs      f0, lbl_80516818@sda21(r2)
	fcmpo    cr0, f1, f0
	cror     2, 1, 2
	bne      lbl_8003F1A0
	stfs     f1, 0x1c(r26)
	b        lbl_8003F1A0

lbl_8003F0A4:
	lfs      f1, 0x48(r26)
	mr       r3, r26
	lfs      f2, 0x10(r26)
	mr       r4, r27
	li       r5, 0xa
	bl       getNumberF32__8J2DPrintFPPCUcffi
	stfs     f1, 0x10(r26)
	b        lbl_8003F1A0

lbl_8003F0C4:
	lfs      f1, 0x4c(r26)
	mr       r3, r26
	lfs      f2, 0x14(r26)
	mr       r4, r27
	li       r5, 0xa
	bl       getNumberF32__8J2DPrintFPPCUcffi
	stfs     f1, 0x14(r26)
	b        lbl_8003F1A0

lbl_8003F0E4:
	lbz      r6, 0x22(r26)
	mr       r3, r26
	mr       r4, r27
	li       r7, 0xa
	cntlzw   r0, r6
	rlwinm   r5, r0, 0x1b, 0x18, 0x1f
	bl       getNumberS32__8J2DPrintFPPCUclli
	cntlzw   r0, r3
	lis      r3, 0x80808081@ha
	rlwinm   r0, r0, 0x1b, 0x18, 0x1f
	clrlwi   r7, r28, 0x18
	cntlzw   r0, r0
	addi     r6, r3, 0x80808081@l
	srwi     r0, r0, 5
	addi     r3, r1, 0x2c
	stb      r0, 0x22(r26)
	lbz      r4, 0x2f(r1)
	lbz      r0, 0x2b(r1)
	mullw    r5, r4, r7
	mullw    r0, r0, r7
	mulhw    r7, r6, r5
	mulhw    r4, r6, r0
	add      r5, r7, r5
	srawi    r5, r5, 7
	add      r0, r4, r0
	srwi     r4, r5, 0x1f
	add      r4, r5, r4
	srawi    r0, r0, 7
	stb      r4, 0x2f(r1)
	srwi     r4, r0, 0x1f
	add      r0, r0, r4
	stb      r0, 0x2b(r1)
	lbz      r0, 0x22(r26)
	cmplwi   r0, 0
	beq      lbl_8003F174
	addi     r3, r1, 0x28

lbl_8003F174:
	lwz      r3, 0(r3)
	addi     r4, r1, 0xc
	lwz      r0, 0x2c(r1)
	addi     r5, r1, 8
	stw      r3, 8(r1)
	stw      r0, 0xc(r1)
	lwz      r3, 4(r26)
	bl       setGradColor__7JUTFontFQ28JUtility6TColorQ28JUtility6TColor
	b        lbl_8003F1A0

lbl_8003F198:
	stw      r31, 0(r27)
	li       r30, 0

lbl_8003F1A0:
	mr       r3, r30

lbl_8003F1A4:
	lmw      r26, 0x38(r1)
	lwz      r0, 0x54(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

/**
 * @note Address: 0x8003F1B8
 * @note Size: 0x74
 */
void J2DPrint::initchar()
{
	mActiveCharColor = mCharColor;
	mActiveGradColor = mGradientColor;

	mActiveScaleX      = mFontScaleX;
	mActiveScaleY      = mFontScaleY;
	_22                = _5A;
	mActiveFontWidth   = mFontWidth;
	mActiveGlyphWidth  = mGlyphWidth;
	mActiveGlyphHeight = mGlyphHeight;
}

/**
 * @note Address: 0x8003F22C
 * @note Size: 0x114
 */
void J2DPrint::getNumberS32(const u8**, s32, s32, int)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r5
	stw      r30, 0x18(r1)
	mr       r30, r4
	stw      r29, 0x14(r1)
	stw      r28, 0x10(r1)
	mr       r28, r6
	lwz      r29, 0(r4)
	lbz      r0, 0(r29)
	cmpwi    r0, 0x5b
	beq      lbl_8003F26C
	mr       r3, r31
	b        lbl_8003F320

lbl_8003F26C:
	addi     r0, r29, 1
	cmpwi    r7, 0xa
	stw      r0, 0(r30)
	li       r3, 0
	bne      lbl_8003F294
	lwz      r3, 0(r30)
	mr       r5, r7
	addi     r4, r1, 8
	bl       strtol
	b        lbl_8003F2E0

lbl_8003F294:
	cmpwi    r7, 0x10
	bne      lbl_8003F2E0
	lwz      r3, 0(r30)
	mr       r5, r7
	addi     r4, r1, 8
	bl       strtoul
	lwz      r4, 0(r30)
	lwz      r0, 8(r1)
	subf     r0, r4, r0
	cmplwi   r0, 8
	beq      lbl_8003F2E0
	cmplwi   r0, 6
	bne      lbl_8003F2D4
	slwi     r0, r3, 8
	ori      r3, r0, 0xff
	b        lbl_8003F2E0

lbl_8003F2D4:
	stw      r29, 0(r30)
	mr       r3, r28
	b        lbl_8003F320

lbl_8003F2E0:
	lwz      r4, 8(r1)
	lbz      r0, 0(r4)
	cmpwi    r0, 0x5d
	beq      lbl_8003F2FC
	stw      r29, 0(r30)
	mr       r3, r28
	b        lbl_8003F320

lbl_8003F2FC:
	lwz      r0, 0(r30)
	cmplw    r0, r4
	bne      lbl_8003F318
	addi     r0, r4, 1
	mr       r3, r31
	stw      r0, 0(r30)
	b        lbl_8003F320

lbl_8003F318:
	addi     r0, r4, 1
	stw      r0, 0(r30)

lbl_8003F320:
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

/**
 * @note Address: 0x8003F340
 * @note Size: 0x134
 */
void J2DPrint::getNumberF32(const u8**, f32, f32, int)
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stfd     f31, 0x30(r1)
	psq_st   f31, 56(r1), 0, qr0
	stfd     f30, 0x20(r1)
	psq_st   f30, 40(r1), 0, qr0
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r31, r4
	fmr      f30, f1
	lwz      r30, 0(r4)
	fmr      f31, f2
	lbz      r0, 0(r30)
	cmpwi    r0, 0x5b
	beq      lbl_8003F384
	b        lbl_8003F44C

lbl_8003F384:
	addi     r0, r30, 1
	cmpwi    r5, 0xa
	stw      r0, 0(r31)
	li       r3, 0
	bne      lbl_8003F3A8
	lwz      r3, 0(r31)
	addi     r4, r1, 8
	bl       strtol
	b        lbl_8003F3F0

lbl_8003F3A8:
	cmpwi    r5, 0x10
	bne      lbl_8003F3F0
	lwz      r3, 0(r31)
	addi     r4, r1, 8
	bl       strtoul
	lwz      r4, 0(r31)
	lwz      r0, 8(r1)
	subf     r0, r4, r0
	cmplwi   r0, 8
	beq      lbl_8003F3F0
	cmplwi   r0, 6
	bne      lbl_8003F3E4
	slwi     r0, r3, 8
	ori      r3, r0, 0xff
	b        lbl_8003F3F0

lbl_8003F3E4:
	fmr      f1, f31
	stw      r30, 0(r31)
	b        lbl_8003F44C

lbl_8003F3F0:
	lwz      r4, 8(r1)
	lbz      r0, 0(r4)
	cmpwi    r0, 0x5d
	beq      lbl_8003F40C
	fmr      f1, f31
	stw      r30, 0(r31)
	b        lbl_8003F44C

lbl_8003F40C:
	lwz      r0, 0(r31)
	cmplw    r0, r4
	bne      lbl_8003F428
	addi     r0, r4, 1
	fmr      f1, f30
	stw      r0, 0(r31)
	b        lbl_8003F44C

lbl_8003F428:
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x14(r1)
	addi     r3, r4, 1
	lfd      f1, lbl_80516820@sda21(r2)
	stw      r0, 0x10(r1)
	lfd      f0, 0x10(r1)
	stw      r3, 0(r31)
	fsubs    f1, f0, f1

lbl_8003F44C:
	psq_l    f31, 56(r1), 0, qr0
	lfd      f31, 0x30(r1)
	psq_l    f30, 40(r1), 0, qr0
	lfd      f30, 0x20(r1)
	lwz      r31, 0x1c(r1)
	lwz      r0, 0x44(r1)
	lwz      r30, 0x18(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}
