#include "JSystem/JMessage/TProcessor.h"
#include "JSystem/JUtility/JUTFont.h"
#include "JSystem/JUtility/JUTTexture.h"
#include "P2JME/messageRendering.h"
#include "P2JME/P2JME.h"
#include "JSystem/J2D/J2DTextBox.h"
#include "Game/Data.h"
#include "P2Macros.h"
#include "stl/ctype.h"
#include "System.h"

namespace P2JME {

static char sRubyDataBuffer[33];

namespace {
	typedef struct {
		GXColor a;
		GXColor b;
	} doubleColorStruct;
	doubleColorStruct cBtnIconColor[11] = {
		{{ 255, 255, 255, 255 }, {   0, 166,   0,   0 }}, {{ 255, 255, 255, 255 }, { 255,   0,   0,   0 }},
		{{   0,   0,   0, 255 }, { 255, 255,   0,   0 }}, {{   0,   0,   0, 255 }, { 200, 200, 200,   0 }},
		{{   0,   0,   0, 255 }, { 200, 200, 200,   0 }}, {{   0,   0, 255, 255 }, { 255, 255, 255,   0 }},
		{{   0,   0,   0, 255 }, { 200, 200, 200,   0 }}, {{   0,   0,   0, 255 }, { 200, 200, 200,   0 }},
		{{ 225, 225, 225, 255 }, { 136, 136, 136, 255 }}, {{ 225, 225, 225, 255 }, { 136, 136, 136, 255 }},
		{{ 225, 225, 225, 255 }, { 136, 136, 136, 255 }},
	};
} // namespace

const u32 TRenderingProcessor::cPageInfoBufferNum = 10;

/**
 * @note Address: 0x804391F0
 * @note Size: 0x3C
 */
TRenderingProcessorBase::TRenderingProcessorBase(JMessage::TReference const* ref)
    : JMessage::TRenderingProcessor(ref)
{
}

/**
 * @note Address: 0x8043922C
 * @note Size: 0x174
 */
bool TRenderingProcessorBase::do_tag(u32 type, const void* a1, u32 a2)
{
	bool check = false;
	// Get byte1
	u8 argByte   = (u8)(type >> 16);
	u16 argShort = (u16)type;

	if (argByte < 0xC0) { // 192
		switch (argByte) {
		case 0:
			check = tagImage(argShort, a1, a2);
			break;
		case 1:
			check = tagColorEX(argShort, a1, a2);
			break;
		case 2:
			check = tagControl(argShort, a1, a2);
			break;
		case 3:
			check = tagPosition(argShort, a1, a2);
			break;
		default:
			check = true;
			break;
		}
	} else if (argByte == 0xFF) {
		switch (argShort) {
		case 0:
			check = tagColor(a1, a2);
			break;
		case 1:
			check = tagSize(a1, a2);
			break;
		case 2:
			check = tagRuby(a1, a2);
			break;
		case 3:
			check = tagFont(a1, a2);
			break;
		case 4:
			break;
		}
	}
	return check;
}

/**
 * @note Address: 0x804393E0
 * @note Size: 0x218
 */
TRenderingProcessor::TRenderingProcessor(JMessage::TReference const* ref)
    : TRenderingProcessorBase(ref)
    , mTextBoxWidth(100.0f)
    , mTextBoxHeight(100.0f)
    , mMtx1(nullptr)
    , mMtx2(nullptr)
    , mMainFont(nullptr)
    , mRubyFont(nullptr)
    , _54(0.0f)
    , _58(0.0f)
    , _5C(0)
    , _60(0xFFFFFFFF)
    , mColorData1(255, 255, 255, 255)
    , mColorData2(255, 255, 255, 255)
    , mColorData3(255, 255, 255, 255)
    , mColorData4(255, 255, 255, 255)
    , mColorData5(255, 255, 255, 255)
    , _78(1.0f)
    , mMesgBounds(1.0f, 1.0f, 1.0f, 1.0f)
    , mLocate(0.0f, 0.0f, 0.0f, 0.0f)
    , mCurrLine(0)
    , mParagraphNum(0)
    , mPageInfoNum(0)
    , _BC(0.0f)
    , _C0(42.0f)
    , _C4(0.0f)
    , mLineHeight(42.0f)
    , _CC(0, 0, 0, 0)
    , _D0(255, 255, 255, 255)
    , _D4(255, 255, 255, 255)
    , _D8(255, 255, 255, 255)
    , mFontWidthAdjusted(1.0f)
    , mFontHeightAdjusted(1.0f)
    , mFontWidth(1.0f)
    , mFontHeight(1.0f)
    , _F2(0)
    , _10C(0.5f)
{
	mFlags.clear();
	mFlags.unset(0x70);
	mFlags.set(0x10);
	mFlags.unset(0x700);
	mFlags.set(0x100);

	mLineWidths = new f32[0x40];
	resetLineWidth();
	mOnePageLines = new u8[0x40];
	resetOnePageLine();
	mRubyBuffer     = P2JME::sRubyDataBuffer;
	mPageInfoCounts = new u8[0x14];
}

/**
 * @note Address: N/A
 * @note Size: 0x7C
 */
void TRenderingProcessor::setDrawLocateX()
{
	if (mFlags.isSet(1)) {
		mLocate.i.x = mLocate.f.x;
	} else if (mFlags.isSet(0x20)) {
		mLocate.i.x = 0.5f * (mTextBoxWidth - mLineWidths[mCurrLine]);
	} else if (mFlags.isSet(0x40)) {
		mLocate.i.x = (mTextBoxWidth - mLineWidths[mCurrLine]);
	} else {
		mLocate.i.x = mLocate.f.x;
	}

	mLocate.setX(mLocate.i.x);
}

/**
 * @note Address: N/A
 * @note Size: 0x338
 */
void TRenderingProcessor::setDrawLocateY()
{
	if (mFlags.isSet(1)) {
		mLocate.setY(mFontHeightAdjusted * mParagraphNum + mLineHeight * mPageInfoNum + mFontHeight * mMainFont->getDescent()
		             + mLocate.f.y);
	} else if (mFlags.isSet(0x200)) {
		f32 totalFontHeight   = 0.0f;
		u8* lineWidthPtr      = (mOnePageLines + ((2 * mPageInfoNum) & 0x1FE));
		int lineWidthIndex    = lineWidthPtr[0];
		int lineWidthEndIndex = lineWidthPtr[1] + 1 - lineWidthIndex;

		while (lineWidthEndIndex > 0) {
			if (*(mLineWidths + 4 * lineWidthIndex) > 0.0f) {
				totalFontHeight += mFontHeightAdjusted;
			}
			lineWidthIndex++;
			lineWidthEndIndex--;
		}
	} else if (mFlags.isSet(0x400)) {
		f32 paragraphNumFloat = mOnePageLines[mParagraphNum] - (mPageInfoNum + 1);
		mLocate.setY(
		    -((mFontHeightAdjusted * paragraphNumFloat) - (mFontHeight * mMainFont->getDescent() + mLineHeight * (1.0f + mPageInfoNum))));
	} else {
		mLocate.setY(mFontHeightAdjusted * mParagraphNum + mLineHeight * mPageInfoNum + mFontHeight * mMainFont->getAscent() + mLocate.f.y);
	}
}

/**
 * @note Address: 0x80439658
 * @note Size: 0xE8
 */
void TRenderingProcessor::do_begin(const void* p1, char const* p2)
{
	mFontWidthAdjusted  = mFontWidth;
	mFontHeightAdjusted = mFontHeight;
	_F0                 = 0;
	_F1                 = 0;
	mCharacterNum       = 0;
	_40                 = 0;
	initRuby();
	f32 v1      = static_cast<const char*>(p1)[4];
	_BC         = v1;
	_C4         = v1;
	mLineHeight = _C0;
	mFlags.unset(0x10000000);
	mPageInfoNum  = 0;
	mCurrLine     = 0;
	mParagraphNum = 0;
	setDrawLocate();
	mMatrixType = 0;
	mMainFont->setGX(_CC, _D0);
}

/**
 * @note Address: 0x80439740
 * @note Size: 0x3B0
 */
void TRenderingProcessor::setDrawLocate()
{
	setDrawLocateX();
	setDrawLocateY();

	/*
	stwu     r1, -0x60(r1)
	mflr     r0
	stw      r0, 0x64(r1)
	stfd     f31, 0x50(r1)
	psq_st   f31, 88(r1), 0, qr0
	stfd     f30, 0x40(r1)
	psq_st   f30, 72(r1), 0, qr0
	stw      r31, 0x3c(r1)
	stw      r30, 0x38(r1)
	stw      r29, 0x34(r1)
	mr       r31, r3
	lwz      r3, 0x8c(r3)
	clrlwi.  r0, r3, 0x1f
	beq      lbl_80439784
	lfs      f0, 0x98(r31)
	stfs     f0, 0x90(r31)
	b        lbl_804397E4

lbl_80439784:
	rlwinm.  r0, r3, 0, 0x1a, 0x1a
	beq      lbl_804397B4
	lbz      r0, 0xa4(r31)
	lwz      r3, 0xa8(r31)
	slwi     r0, r0, 2
	lfs      f1, 0x38(r31)
	lfsx     f0, r3, r0
	lfs      f2, lbl_805208CC@sda21(r2)
	fsubs    f0, f1, f0
	fmuls    f0, f2, f0
	stfs     f0, 0x90(r31)
	b        lbl_804397E4

lbl_804397B4:
	rlwinm.  r0, r3, 0, 0x19, 0x19
	beq      lbl_804397DC
	lbz      r0, 0xa4(r31)
	lwz      r3, 0xa8(r31)
	slwi     r0, r0, 2
	lfs      f1, 0x38(r31)
	lfsx     f0, r3, r0
	fsubs    f0, f1, f0
	stfs     f0, 0x90(r31)
	b        lbl_804397E4

lbl_804397DC:
	lfs      f0, 0x98(r31)
	stfs     f0, 0x90(r31)

lbl_804397E4:
	lwz      r3, 0x8c(r31)
	clrlwi.  r0, r3, 0x1f
	beq      lbl_80439870
	lwz      r3, 0x4c(r31)
	lbz      r30, 0xa5(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lis      r4, 0x4330
	xoris    r0, r3, 0x8000
	stw      r0, 0xc(r1)
	lbz      r0, 0xa6(r31)
	stw      r4, 8(r1)
	lfd      f1, lbl_805208D0@sda21(r2)
	lfd      f0, 8(r1)
	stw      r0, 0x14(r1)
	fsubs    f4, f0, f1
	lfs      f2, 0xec(r31)
	stw      r4, 0x10(r1)
	lfs      f1, 0x9c(r31)
	lfd      f3, lbl_805208D8@sda21(r2)
	lfd      f0, 0x10(r1)
	fmadds   f5, f2, f4, f1
	stw      r30, 0x1c(r1)
	fsubs    f2, f0, f3
	lfs      f4, 0x3c(r31)
	stw      r4, 0x18(r1)
	lfs      f1, 0xc8(r31)
	lfd      f0, 0x18(r1)
	fmadds   f2, f4, f2, f5
	fsubs    f0, f0, f3
	fmadds   f0, f1, f0, f2
	stfs     f0, 0x94(r31)
	b        lbl_80439AC4

lbl_80439870:
	rlwinm.  r0, r3, 0, 0x16, 0x16
	beq      lbl_804399A0
	lbz      r29, 0xa6(r31)
	lwz      r3, 0xb0(r31)
	rlwinm   r0, r29, 1, 0x17, 0x1e
	lfs      f2, lbl_805208C0@sda21(r2)
	add      r3, r3, r0
	lbz      r5, 1(r3)
	fmr      f1, f2
	lbz      r3, 0(r3)
	addi     r0, r5, 1
	subf     r0, r3, r0
	slwi     r4, r3, 2
	mtctr    r0
	cmpw     r3, r5
	bgt      lbl_804398D0

lbl_804398B0:
	lwz      r3, 0xa8(r31)
	lfsx     f0, r3, r4
	fcmpo    cr0, f0, f1
	ble      lbl_804398C8
	lfs      f0, 0xc8(r31)
	fadds    f2, f2, f0

lbl_804398C8:
	addi     r4, r4, 4
	bdnz     lbl_804398B0

lbl_804398D0:
	lfs      f0, 0x3c(r31)
	lwz      r3, 0x4c(r31)
	fsubs    f0, f0, f2
	lfs      f1, lbl_805208CC@sda21(r2)
	lwz      r12, 0(r3)
	lbz      r30, 0xa5(r31)
	lwz      r12, 0x1c(r12)
	fmuls    f31, f1, f0
	mtctr    r12
	bctrl
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x1c(r1)
	lwz      r3, 0x4c(r31)
	stw      r0, 0x18(r1)
	lfd      f1, lbl_805208D0@sda21(r2)
	lfd      f0, 0x18(r1)
	lwz      r12, 0(r3)
	fsubs    f2, f0, f1
	lfs      f1, 0xec(r31)
	lfs      f0, 0x9c(r31)
	lwz      r12, 0x24(r12)
	fmadds   f30, f1, f2, f0
	mtctr    r12
	bctrl
	lis      r0, 0x4330
	xoris    r3, r3, 0x8000
	stw      r3, 0x14(r1)
	lfd      f2, lbl_805208D0@sda21(r2)
	stw      r0, 0x10(r1)
	lfs      f0, 0xec(r31)
	lfd      f1, 0x10(r1)
	lfs      f5, 0xc8(r31)
	fsubs    f2, f1, f2
	stw      r29, 0xc(r1)
	lfs      f1, lbl_805208CC@sda21(r2)
	stw      r0, 8(r1)
	fnmsubs  f3, f0, f2, f5
	lfd      f2, lbl_805208D8@sda21(r2)
	lfd      f0, 8(r1)
	stw      r30, 0x24(r1)
	fmadds   f4, f1, f3, f30
	lfs      f3, 0x3c(r31)
	stw      r0, 0x20(r1)
	fsubs    f1, f0, f2
	lfd      f0, 0x20(r1)
	fmadds   f1, f3, f1, f4
	fsubs    f0, f0, f2
	fmadds   f0, f5, f0, f31
	fadds    f0, f0, f1
	stfs     f0, 0x94(r31)
	b        lbl_80439AC4

lbl_804399A0:
	rlwinm.  r0, r3, 0, 0x15, 0x15
	beq      lbl_80439A48
	lwz      r3, 0x4c(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lbz      r0, 0xa6(r31)
	lis      r5, 0x4330
	neg      r4, r3
	lbz      r3, 0xa5(r31)
	stw      r0, 0x1c(r1)
	xoris    r6, r4, 0x8000
	lfd      f1, lbl_805208D8@sda21(r2)
	addi     r4, r3, 1
	stw      r5, 0x18(r1)
	lwz      r3, 0xac(r31)
	lfd      f0, 0x18(r1)
	lbz      r0, 0xa4(r31)
	fsubs    f0, f0, f1
	lfs      f1, lbl_805208C4@sda21(r2)
	lbzx     r0, r3, r0
	stw      r6, 0x24(r1)
	subf     r0, r4, r0
	fadds    f0, f1, f0
	stw      r5, 0x20(r1)
	xoris    r0, r0, 0x8000
	lfs      f1, 0x3c(r31)
	lfd      f5, lbl_805208D0@sda21(r2)
	lfd      f3, 0x20(r1)
	fmuls    f2, f1, f0
	stw      r0, 0x14(r1)
	fsubs    f4, f3, f5
	lfs      f3, 0xec(r31)
	stw      r5, 0x10(r1)
	lfs      f1, 0xc8(r31)
	lfd      f0, 0x10(r1)
	fmadds   f2, f3, f4, f2
	fsubs    f0, f0, f5
	fnmsubs  f0, f1, f0, f2
	stfs     f0, 0x94(r31)
	b        lbl_80439AC4

lbl_80439A48:
	lwz      r3, 0x4c(r31)
	lbz      r30, 0xa5(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lis      r4, 0x4330
	xoris    r0, r3, 0x8000
	stw      r0, 0x24(r1)
	lbz      r0, 0xa6(r31)
	stw      r4, 0x20(r1)
	lfd      f1, lbl_805208D0@sda21(r2)
	lfd      f0, 0x20(r1)
	stw      r0, 0x1c(r1)
	fsubs    f4, f0, f1
	lfs      f2, 0xec(r31)
	stw      r4, 0x18(r1)
	lfs      f1, 0x9c(r31)
	lfd      f3, lbl_805208D8@sda21(r2)
	lfd      f0, 0x18(r1)
	fmadds   f5, f2, f4, f1
	stw      r30, 0x14(r1)
	fsubs    f2, f0, f3
	lfs      f4, 0x3c(r31)
	stw      r4, 0x10(r1)
	lfs      f1, 0xc8(r31)
	lfd      f0, 0x10(r1)
	fmadds   f2, f4, f2, f5
	fsubs    f0, f0, f3
	fmadds   f0, f1, f0, f2
	stfs     f0, 0x94(r31)

lbl_80439AC4:
	psq_l    f31, 88(r1), 0, qr0
	lfd      f31, 0x50(r1)
	psq_l    f30, 72(r1), 0, qr0
	lfd      f30, 0x40(r1)
	lwz      r31, 0x3c(r1)
	lwz      r30, 0x38(r1)
	lwz      r0, 0x64(r1)
	lwz      r29, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x60
	blr
	*/
}

/**
 * @note Address: N/A
 * @note Size: 0x50
 */
void TRenderingProcessor::addDrawLines()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x80439AF0
 * @note Size: 0xDC
 */
void TRenderingProcessor::newParagraph()
{
	setLineWidth();
	mCurrLine++;
	P2ASSERTLINE(509, mCurrLine < 64);
	mParagraphNum++;
	if (mFlags.isSet(TProcFlag_PageFinished) != 0) {
		setPageInfo();
		setOnePageLine();
		mParagraphNum = 0;
		mPageInfoNum++;
		checkPageInfoNum();
		mFlags.unset(TProcFlag_PageFinished);
	}
	setDrawLocate();
}

/**
 * @note Address: 0x80439BCC
 * @note Size: 0x31C
 */
void TRenderingProcessor::do_character(int character)
{
	if (character == '\n') {
		newParagraph();
	} else {
		if (_F0 == 0) {
			mColorData1 = _D4;
		} else {
			u32 f0 = _F0;
			JUtility::TColor *colorArray = (JUtility::TColor*)getResourceContainer()->getResourceColor()->mBlock.getRaw();
			mColorData1.set(colorArray[f0 + 3]);
		}

		mColorData1.a = f32(mColorData1.a) * _78;

		if (_F1 == 0) {
			mColorData2 = _D8;
		} else {
			u32 f1 = _F1;
			JUtility::TColor *colorArray = (JUtility::TColor*)getResourceContainer()->getResourceColor()->mBlock.getRaw();
			mColorData2.set(colorArray[f1 + 3]);
		}

		mColorData2.a = f32(mColorData2.a) * _78;

		f32 xScale = mFontWidthAdjusted * (f32)mMainFont->getWidth();
		if (mFlags.isSet(1)) {
			mLocate.i.x += calcWidth(mMainFont, character, xScale, true);
		} else {
			mLocate.i.x += doDrawLetter(mLocate.i.x + _54, mLocate.i.y + _58, xScale, mFontHeightAdjusted * (f32)mMainFont->getHeight(),
			                            character, true);
		}
		mLocate.i.x += _C4;
		_40++;
	}

	if (sys->mPlayData->mIsRubyFont) {
		drawRuby();
	}

	mCharacterNum++;
}

/**
 * @note Address: N/A
 * @note Size: 0xB0
 */
void TRenderingProcessor::mf()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x80439EE8
 * @note Size: 0xB8
 */
void TRenderingProcessor::do_select_begin(u32)
{
	_A0         = 0;
	mLocate.i.x = mLocate.f.x + mMainFont->getWidth() * 3;
	mLocate.i.y = mLocate.f.y + (mMainFont->getHeight() * int(_A0 + 3));
}

/**
 * @note Address: 0x80439FA0
 * @note Size: 0x6C
 */
void TRenderingProcessor::do_select_end()
{
	mLocate.i.x = mLocate.f.x;
	mLocate.i.y = mLocate.f.y + mMainFont->getHeight();
}

/**
 * @note Address: 0x8043A00C
 * @note Size: 0xBC
 */
void TRenderingProcessor::do_select_separate()
{
	_A0++;
	mLocate.i.x = mLocate.f.x + mMainFont->getWidth() * 3;
	mLocate.i.y = mLocate.f.y + (mMainFont->getHeight() * int(_A0 + 3));
}

/**
 * @note Address: 0x8043A0C8
 * @note Size: 0x174
 */
bool TRenderingProcessor::do_tag(u32 type, const void* a1, u32 a2) { return TRenderingProcessorBase::do_tag(type, a1, a2); }

/**
 * @note Address: 0x8043A23C
 * @note Size: 0x8
 */
bool TRenderingProcessor::do_systemTagCode(u16, const void*, u32) { return false; }

/**
 * @note Address: 0x8043A244
 * @note Size: 0x2C
 */
bool TRenderingProcessor::tagColor(const void* p1, u32 p2)
{
	u8 v1 = *static_cast<const char*>(p1);
	if (v1 == 0) {
		_F0 = v1;
		_F1 = v1;
	} else {
		_F0 = v1;
		_F1 = v1 + 1;
	}
	return true;
}

/**
 * @note Address: 0x8043A270
 * @note Size: 0x3C
 */
bool TRenderingProcessor::tagSize(const void* p1, u32 p2)
{
	f32 v1              = *static_cast<const u16*>(p1) / 100.0f;
	mFontWidthAdjusted  = v1;
	mFontHeightAdjusted = v1;
	return true;
}

/**
 * @note Address: 0x8043A2AC
 * @note Size: 0x164
 */
bool TRenderingProcessor::tagRuby(const void* data, u32 size)
{
	if (sys->mPlayData->mIsRubyFont && !mFlags.isSet(1)) {

		P2ASSERTLINE(839, size < 33);
		strncpy(mRubyBuffer, (char*)data + 1, size - 1);

		mRubyBuffer[size - 1] = 0;
		_F2                   = 1;
		_F4                   = mCharacterNum - 1;
		_F8                   = ((u8*)data)[0];
		_FC                   = size - 1;
		_104                  = mLocate.i.x;

		f32 y = mFontHeightAdjusted * mMainFont->getAscent();
		y     = (y >= 0.0f) ? y + 0.5f : y - 0.5f;
		_108  = mLocate.i.y - (int)y;
	}

	return true;
}

/**
 * @note Address: 0x8043A410
 * @note Size: 0x8
 */
bool TRenderingProcessor::tagFont(const void*, u32) { return true; }

/**
 * @note Address: 0x8043A418
 * @note Size: 0x24
 */
bool TRenderingProcessor::tagColorEX(u16 id, const void* p1, u32)
{
	u8* data = (u8*)p1;
	switch (id) {
	case 0:
		_F0 = data[0];
		_F1 = data[1];
		break;
	}
	return true;
}

/**
 * @note Address: 0x8043A43C
 * @note Size: 0x6C
 */
bool TRenderingProcessor::tagControl(u16 p1, const void* p2, u32 p3)
{
	bool result = true;
	switch (p1) {
	case 0:
		result = doTagControlAbtnWait();
		break;
	case 1:
		break;
	case 2:
		mMatrixType = *static_cast<const u8*>(p2);
		break;
	}
	return result;
}

/**
 * @note Address: 0x8043A4A8
 * @note Size: 0x14
 */
bool TRenderingProcessor::doTagControlAbtnWait()
{
	mFlags.set(TProcFlag_PageFinished);
	return true;
}

/**
 * @note Address: 0x8043A4BC
 * @note Size: 0x71C
 */
bool TRenderingProcessor::tagPosition(u16 type, const void* data, u32)
{
	switch (type) {
	case 0:
		_C4 = _BC;
		break;
	case 1:
		_C4 = *(u8*)data;
		break;
	case 2:
		mLineHeight = _C0;
		setDrawLocateY();
		break;
	case 3:
		mLineHeight = *(u8*)data;
		setDrawLocateY();
		break;
	case 4:
		mFontHeightAdjusted = mFontHeight;
		break;
	case 5:
		mFontHeightAdjusted = (f32)(*(u32*)data) / 100.0f;
		break;
	case 6:
		mFontWidthAdjusted = mFontWidth;
		break;
	case 7:
		mFontWidthAdjusted = (f32)(*(u32*)data) / 100.0f;
		break;
	}
	/*
	.loc_0x0:
	  stwu      r1, -0x60(r1)
	  mflr      r0
	  stw       r0, 0x64(r1)
	  stfd      f31, 0x50(r1)
	  psq_st    f31,0x58(r1),0,0
	  stfd      f30, 0x40(r1)
	  psq_st    f30,0x48(r1),0,0
	  stw       r31, 0x3C(r1)
	  stw       r30, 0x38(r1)
	  stw       r29, 0x34(r1)
	  rlwinm    r0,r4,0,16,31
	  mr        r31, r3
	  cmplwi    r0, 0x7
	  bgt-      .loc_0x6EC
	  lis       r3, 0x804F
	  rlwinm    r0,r0,2,0,29
	  subi      r3, r3, 0x3570
	  lwzx      r0, r3, r0
	  mtctr     r0
	  bctr
	  lfs       f0, 0xBC(r31)
	  stfs      f0, 0xC4(r31)
	  b         .loc_0x6EC
	  lbz       r3, 0x0(r5)
	  lis       r0, 0x4330
	  stw       r0, 0x8(r1)
	  extsb     r0, r3
	  lfd       f1, 0x2570(r2)
	  xoris     r0, r0, 0x8000
	  stw       r0, 0xC(r1)
	  lfd       f0, 0x8(r1)
	  fsubs     f0, f0, f1
	  stfs      f0, 0xC4(r31)
	  b         .loc_0x6EC
	  lfs       f0, 0xC0(r31)
	  stfs      f0, 0xC8(r31)
	  lwz       r3, 0x8C(r31)
	  rlwinm.   r0,r3,0,31,31
	  beq-      .loc_0x11C
	  lwz       r3, 0x4C(r31)
	  lbz       r30, 0xA5(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lis       r4, 0x4330
	  xoris     r0, r3, 0x8000
	  stw       r0, 0xC(r1)
	  lbz       r0, 0xA6(r31)
	  stw       r4, 0x8(r1)
	  lfd       f1, 0x2570(r2)
	  lfd       f0, 0x8(r1)
	  stw       r0, 0x14(r1)
	  fsubs     f4, f0, f1
	  lfs       f2, 0xEC(r31)
	  stw       r4, 0x10(r1)
	  lfs       f1, 0x9C(r31)
	  lfd       f3, 0x2578(r2)
	  lfd       f0, 0x10(r1)
	  fmadds    f5, f2, f4, f1
	  stw       r30, 0x1C(r1)
	  fsubs     f2, f0, f3
	  lfs       f4, 0x3C(r31)
	  stw       r4, 0x18(r1)
	  lfs       f1, 0xC8(r31)
	  lfd       f0, 0x18(r1)
	  fmadds    f2, f4, f2, f5
	  fsubs     f0, f0, f3
	  fmadds    f0, f1, f0, f2
	  stfs      f0, 0x94(r31)
	  b         .loc_0x6EC

	.loc_0x11C:
	  rlwinm.   r0,r3,0,22,22
	  beq-      .loc_0x24C
	  lbz       r29, 0xA6(r31)
	  lwz       r3, 0xB0(r31)
	  rlwinm    r0,r29,1,23,30
	  lfs       f2, 0x2560(r2)
	  add       r3, r3, r0
	  lbz       r5, 0x1(r3)
	  fmr       f1, f2
	  lbz       r3, 0x0(r3)
	  addi      r0, r5, 0x1
	  sub       r0, r0, r3
	  rlwinm    r4,r3,2,0,29
	  mtctr     r0
	  cmpw      r3, r5
	  bgt-      .loc_0x17C

	.loc_0x15C:
	  lwz       r3, 0xA8(r31)
	  lfsx      f0, r3, r4
	  fcmpo     cr0, f0, f1
	  ble-      .loc_0x174
	  lfs       f0, 0xC8(r31)
	  fadds     f2, f2, f0

	.loc_0x174:
	  addi      r4, r4, 0x4
	  bdnz+     .loc_0x15C

	.loc_0x17C:
	  lfs       f0, 0x3C(r31)
	  lwz       r3, 0x4C(r31)
	  fsubs     f0, f0, f2
	  lfs       f1, 0x256C(r2)
	  lwz       r12, 0x0(r3)
	  lbz       r30, 0xA5(r31)
	  lwz       r12, 0x1C(r12)
	  fmuls     f31, f1, f0
	  mtctr     r12
	  bctrl
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x1C(r1)
	  lwz       r3, 0x4C(r31)
	  stw       r0, 0x18(r1)
	  lfd       f1, 0x2570(r2)
	  lfd       f0, 0x18(r1)
	  lwz       r12, 0x0(r3)
	  fsubs     f2, f0, f1
	  lfs       f1, 0xEC(r31)
	  lfs       f0, 0x9C(r31)
	  lwz       r12, 0x24(r12)
	  fmadds    f30, f1, f2, f0
	  mtctr     r12
	  bctrl
	  lis       r0, 0x4330
	  xoris     r3, r3, 0x8000
	  stw       r3, 0x14(r1)
	  lfd       f2, 0x2570(r2)
	  stw       r0, 0x10(r1)
	  lfs       f0, 0xEC(r31)
	  lfd       f1, 0x10(r1)
	  lfs       f5, 0xC8(r31)
	  fsubs     f2, f1, f2
	  stw       r29, 0xC(r1)
	  lfs       f1, 0x256C(r2)
	  stw       r0, 0x8(r1)
	  fnmsubs   f3, f0, f2, f5
	  lfd       f2, 0x2578(r2)
	  lfd       f0, 0x8(r1)
	  stw       r30, 0x24(r1)
	  fmadds    f4, f1, f3, f30
	  lfs       f3, 0x3C(r31)
	  stw       r0, 0x20(r1)
	  fsubs     f1, f0, f2
	  lfd       f0, 0x20(r1)
	  fmadds    f1, f3, f1, f4
	  fsubs     f0, f0, f2
	  fmadds    f0, f5, f0, f31
	  fadds     f0, f0, f1
	  stfs      f0, 0x94(r31)
	  b         .loc_0x6EC

	.loc_0x24C:
	  rlwinm.   r0,r3,0,21,21
	  beq-      .loc_0x2F4
	  lwz       r3, 0x4C(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lbz       r0, 0xA6(r31)
	  lis       r5, 0x4330
	  neg       r4, r3
	  lbz       r3, 0xA5(r31)
	  stw       r0, 0x1C(r1)
	  xoris     r6, r4, 0x8000
	  lfd       f1, 0x2578(r2)
	  addi      r4, r3, 0x1
	  stw       r5, 0x18(r1)
	  lwz       r3, 0xAC(r31)
	  lfd       f0, 0x18(r1)
	  lbz       r0, 0xA4(r31)
	  fsubs     f0, f0, f1
	  lfs       f1, 0x2564(r2)
	  lbzx      r0, r3, r0
	  stw       r6, 0x24(r1)
	  sub       r0, r0, r4
	  fadds     f0, f1, f0
	  stw       r5, 0x20(r1)
	  xoris     r0, r0, 0x8000
	  lfs       f1, 0x3C(r31)
	  lfd       f5, 0x2570(r2)
	  lfd       f3, 0x20(r1)
	  fmuls     f2, f1, f0
	  stw       r0, 0x14(r1)
	  fsubs     f4, f3, f5
	  lfs       f3, 0xEC(r31)
	  stw       r5, 0x10(r1)
	  lfs       f1, 0xC8(r31)
	  lfd       f0, 0x10(r1)
	  fmadds    f2, f3, f4, f2
	  fsubs     f0, f0, f5
	  fnmsubs   f0, f1, f0, f2
	  stfs      f0, 0x94(r31)
	  b         .loc_0x6EC

	.loc_0x2F4:
	  lwz       r3, 0x4C(r31)
	  lbz       r30, 0xA5(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lis       r4, 0x4330
	  xoris     r0, r3, 0x8000
	  stw       r0, 0x24(r1)
	  lbz       r0, 0xA6(r31)
	  stw       r4, 0x20(r1)
	  lfd       f1, 0x2570(r2)
	  lfd       f0, 0x20(r1)
	  stw       r0, 0x1C(r1)
	  fsubs     f4, f0, f1
	  lfs       f2, 0xEC(r31)
	  stw       r4, 0x18(r1)
	  lfs       f1, 0x9C(r31)
	  lfd       f3, 0x2578(r2)
	  lfd       f0, 0x18(r1)
	  fmadds    f5, f2, f4, f1
	  stw       r30, 0x14(r1)
	  fsubs     f2, f0, f3
	  lfs       f4, 0x3C(r31)
	  stw       r4, 0x10(r1)
	  lfs       f1, 0xC8(r31)
	  lfd       f0, 0x10(r1)
	  fmadds    f2, f4, f2, f5
	  fsubs     f0, f0, f3
	  fmadds    f0, f1, f0, f2
	  stfs      f0, 0x94(r31)
	  b         .loc_0x6EC
	  lbz       r3, 0x0(r5)
	  lis       r0, 0x4330
	  stw       r0, 0x20(r1)
	  extsb     r0, r3
	  lfd       f1, 0x2570(r2)
	  xoris     r0, r0, 0x8000
	  stw       r0, 0x24(r1)
	  lfd       f0, 0x20(r1)
	  fsubs     f0, f0, f1
	  stfs      f0, 0xC8(r31)
	  lwz       r3, 0x8C(r31)
	  rlwinm.   r0,r3,0,31,31
	  beq-      .loc_0x428
	  lwz       r3, 0x4C(r31)
	  lbz       r30, 0xA5(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lis       r4, 0x4330
	  xoris     r0, r3, 0x8000
	  stw       r0, 0x24(r1)
	  lbz       r0, 0xA6(r31)
	  stw       r4, 0x20(r1)
	  lfd       f1, 0x2570(r2)
	  lfd       f0, 0x20(r1)
	  stw       r0, 0x1C(r1)
	  fsubs     f4, f0, f1
	  lfs       f2, 0xEC(r31)
	  stw       r4, 0x18(r1)
	  lfs       f1, 0x9C(r31)
	  lfd       f3, 0x2578(r2)
	  lfd       f0, 0x18(r1)
	  fmadds    f5, f2, f4, f1
	  stw       r30, 0x14(r1)
	  fsubs     f2, f0, f3
	  lfs       f4, 0x3C(r31)
	  stw       r4, 0x10(r1)
	  lfs       f1, 0xC8(r31)
	  lfd       f0, 0x10(r1)
	  fmadds    f2, f4, f2, f5
	  fsubs     f0, f0, f3
	  fmadds    f0, f1, f0, f2
	  stfs      f0, 0x94(r31)
	  b         .loc_0x6EC

	.loc_0x428:
	  rlwinm.   r0,r3,0,22,22
	  beq-      .loc_0x558
	  lbz       r29, 0xA6(r31)
	  lwz       r3, 0xB0(r31)
	  rlwinm    r0,r29,1,23,30
	  lfs       f2, 0x2560(r2)
	  add       r3, r3, r0
	  lbz       r5, 0x1(r3)
	  fmr       f1, f2
	  lbz       r3, 0x0(r3)
	  addi      r0, r5, 0x1
	  sub       r0, r0, r3
	  rlwinm    r4,r3,2,0,29
	  mtctr     r0
	  cmpw      r3, r5
	  bgt-      .loc_0x488

	.loc_0x468:
	  lwz       r3, 0xA8(r31)
	  lfsx      f0, r3, r4
	  fcmpo     cr0, f0, f1
	  ble-      .loc_0x480
	  lfs       f0, 0xC8(r31)
	  fadds     f2, f2, f0

	.loc_0x480:
	  addi      r4, r4, 0x4
	  bdnz+     .loc_0x468

	.loc_0x488:
	  lfs       f0, 0x3C(r31)
	  lwz       r3, 0x4C(r31)
	  fsubs     f0, f0, f2
	  lfs       f1, 0x256C(r2)
	  lwz       r12, 0x0(r3)
	  lbz       r30, 0xA5(r31)
	  lwz       r12, 0x1C(r12)
	  fmuls     f31, f1, f0
	  mtctr     r12
	  bctrl
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x24(r1)
	  lwz       r3, 0x4C(r31)
	  stw       r0, 0x20(r1)
	  lfd       f1, 0x2570(r2)
	  lfd       f0, 0x20(r1)
	  lwz       r12, 0x0(r3)
	  fsubs     f2, f0, f1
	  lfs       f1, 0xEC(r31)
	  lfs       f0, 0x9C(r31)
	  lwz       r12, 0x24(r12)
	  fmadds    f30, f1, f2, f0
	  mtctr     r12
	  bctrl
	  lis       r0, 0x4330
	  xoris     r3, r3, 0x8000
	  stw       r3, 0x1C(r1)
	  lfd       f2, 0x2570(r2)
	  stw       r0, 0x18(r1)
	  lfs       f0, 0xEC(r31)
	  lfd       f1, 0x18(r1)
	  lfs       f5, 0xC8(r31)
	  fsubs     f2, f1, f2
	  stw       r29, 0x14(r1)
	  lfs       f1, 0x256C(r2)
	  stw       r0, 0x10(r1)
	  fnmsubs   f3, f0, f2, f5
	  lfd       f2, 0x2578(r2)
	  lfd       f0, 0x10(r1)
	  stw       r30, 0xC(r1)
	  fmadds    f4, f1, f3, f30
	  lfs       f3, 0x3C(r31)
	  stw       r0, 0x8(r1)
	  fsubs     f1, f0, f2
	  lfd       f0, 0x8(r1)
	  fmadds    f1, f3, f1, f4
	  fsubs     f0, f0, f2
	  fmadds    f0, f5, f0, f31
	  fadds     f0, f0, f1
	  stfs      f0, 0x94(r31)
	  b         .loc_0x6EC

	.loc_0x558:
	  rlwinm.   r0,r3,0,21,21
	  beq-      .loc_0x600
	  lwz       r3, 0x4C(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lbz       r0, 0xA6(r31)
	  lis       r5, 0x4330
	  neg       r4, r3
	  lbz       r3, 0xA5(r31)
	  stw       r0, 0x1C(r1)
	  xoris     r6, r4, 0x8000
	  lfd       f1, 0x2578(r2)
	  addi      r4, r3, 0x1
	  stw       r5, 0x18(r1)
	  lwz       r3, 0xAC(r31)
	  lfd       f0, 0x18(r1)
	  lbz       r0, 0xA4(r31)
	  fsubs     f0, f0, f1
	  lfs       f1, 0x2564(r2)
	  lbzx      r0, r3, r0
	  stw       r6, 0x24(r1)
	  sub       r0, r0, r4
	  fadds     f0, f1, f0
	  stw       r5, 0x20(r1)
	  xoris     r0, r0, 0x8000
	  lfs       f1, 0x3C(r31)
	  lfd       f5, 0x2570(r2)
	  lfd       f3, 0x20(r1)
	  fmuls     f2, f1, f0
	  stw       r0, 0x14(r1)
	  fsubs     f4, f3, f5
	  lfs       f3, 0xEC(r31)
	  stw       r5, 0x10(r1)
	  lfs       f1, 0xC8(r31)
	  lfd       f0, 0x10(r1)
	  fmadds    f2, f3, f4, f2
	  fsubs     f0, f0, f5
	  fnmsubs   f0, f1, f0, f2
	  stfs      f0, 0x94(r31)
	  b         .loc_0x6EC

	.loc_0x600:
	  lwz       r3, 0x4C(r31)
	  lbz       r30, 0xA5(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lis       r4, 0x4330
	  xoris     r0, r3, 0x8000
	  stw       r0, 0x24(r1)
	  lbz       r0, 0xA6(r31)
	  stw       r4, 0x20(r1)
	  lfd       f1, 0x2570(r2)
	  lfd       f0, 0x20(r1)
	  stw       r0, 0x1C(r1)
	  fsubs     f4, f0, f1
	  lfs       f2, 0xEC(r31)
	  stw       r4, 0x18(r1)
	  lfs       f1, 0x9C(r31)
	  lfd       f3, 0x2578(r2)
	  lfd       f0, 0x18(r1)
	  fmadds    f5, f2, f4, f1
	  stw       r30, 0x14(r1)
	  fsubs     f2, f0, f3
	  lfs       f4, 0x3C(r31)
	  stw       r4, 0x10(r1)
	  lfs       f1, 0xC8(r31)
	  lfd       f0, 0x10(r1)
	  fmadds    f2, f4, f2, f5
	  fsubs     f0, f0, f3
	  fmadds    f0, f1, f0, f2
	  stfs      f0, 0x94(r31)
	  b         .loc_0x6EC
	  lfs       f0, 0xEC(r31)
	  stfs      f0, 0xE4(r31)
	  b         .loc_0x6EC
	  lhz       r3, 0x0(r5)
	  lis       r0, 0x4330
	  stw       r0, 0x20(r1)
	  lfd       f2, 0x2578(r2)
	  stw       r3, 0x24(r1)
	  lfs       f0, 0x255C(r2)
	  lfd       f1, 0x20(r1)
	  fsubs     f1, f1, f2
	  fdivs     f0, f1, f0
	  stfs      f0, 0xE4(r31)
	  b         .loc_0x6EC
	  lfs       f0, 0xE8(r31)
	  stfs      f0, 0xE0(r31)
	  b         .loc_0x6EC
	  lhz       r3, 0x0(r5)
	  lis       r0, 0x4330
	  stw       r0, 0x20(r1)
	  lfd       f2, 0x2578(r2)
	  stw       r3, 0x24(r1)
	  lfs       f0, 0x255C(r2)
	  lfd       f1, 0x20(r1)
	  fsubs     f1, f1, f2
	  fdivs     f0, f1, f0
	  stfs      f0, 0xE0(r31)

	.loc_0x6EC:
	  li        r3, 0x1
	  psq_l     f31,0x58(r1),0,0
	  lfd       f31, 0x50(r1)
	  psq_l     f30,0x48(r1),0,0
	  lfd       f30, 0x40(r1)
	  lwz       r31, 0x3C(r1)
	  lwz       r30, 0x38(r1)
	  lwz       r0, 0x64(r1)
	  lwz       r29, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x60
	  blr
	*/
}

/**
 * @note Address: 0x8043ABD8
 * @note Size: 0x1C
 */
void TRenderingProcessor::initRuby()
{
	_F2          = 0;
	_F4          = 0;
	_F8          = 0;
	*mRubyBuffer = 0;
}

/**
 * @note Address: 0x8043ABF4
 * @note Size: 0x360
 */
void TRenderingProcessor::drawRuby()
{
	if (!_F2) {
		return;
	}

	if (mFlags.isSet(1)) {
		_F2 = false;
		return;
	}

	f32 height = mFontHeightAdjusted * f32(mMainFont->getAscent());
	f32 scale  = mLocate.i.y - (int)(f32(ROUND_F32_TO_U8(height)));
	if (_108 > scale) {
		_108 = scale;
	}

	if (mCharacterNum != (int)(_F4 + _F8)) {
		return;
	}

	int msgBuffer[33];
	f32 val31 = _10C;
	f32 val30 = val31 * f32(mRubyFont->getWidth());
	f32 val28 = 0.0f;
	f32 val27 = (mLocate.i.x - _C4) - _104;

	int msgLen = 0;
	for (int i = 0; i < _FC; i++, msgLen++) {
		int byte = mRubyBuffer[i];
		if (mRubyFont->isLeadByte(byte)) {
			byte >>= 4;
			byte |= (mRubyBuffer[++msgLen] >> 8);   // idk what this is meant to be
		} else if (byte <= 255 && !isspace(byte)) { // some ctype inline we don't have
			byte = '?';
		}

		val28 += calcWidth(mRubyFont, byte, val30, true);
		msgBuffer[i] = byte;
	}

	f32 len   = f32(msgLen + 1);
	f32 val29 = (val27 - val28) / len;
	if (val29 < _C4 * val31) {
		val29 = _C4 * val31;
	}

	_104 += val29 + 0.5f * (val27 - (val29 * len + val28));

	for (int i = 0; i < msgLen; i++) {
		_104 += doDrawRuby(_104 + _54, _108 + _58, val30, val31 * f32(mRubyFont->getHeight()), msgBuffer[i], true);
		_104 += val29;
		_40++;
	}
	_F2 = false;
	/*
	stwu     r1, -0x110(r1)
	mflr     r0
	stw      r0, 0x114(r1)
	stfd     f31, 0x100(r1)
	psq_st   f31, 264(r1), 0, qr0
	stfd     f30, 0xf0(r1)
	psq_st   f30, 248(r1), 0, qr0
	stfd     f29, 0xe0(r1)
	psq_st   f29, 232(r1), 0, qr0
	stfd     f28, 0xd0(r1)
	psq_st   f28, 216(r1), 0, qr0
	stfd     f27, 0xc0(r1)
	psq_st   f27, 200(r1), 0, qr0
	stmw     r26, 0xa8(r1)
	mr       r27, r3
	lbz      r0, 0xf2(r3)
	cmplwi   r0, 0
	beq      lbl_8043AF18
	lwz      r0, 0x8c(r27)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_8043AC54
	li       r0, 0
	stb      r0, 0xf2(r27)
	b        lbl_8043AF18

lbl_8043AC54:
	lwz      r3, 0x4c(r27)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x94(r1)
	lfd      f3, lbl_805208D0@sda21(r2)
	stw      r0, 0x90(r1)
	lfs      f1, 0xe4(r27)
	lfd      f2, 0x90(r1)
	lfs      f0, lbl_805208C0@sda21(r2)
	fsubs    f2, f2, f3
	lfs      f3, 0x94(r27)
	fmuls    f1, f1, f2
	fcmpo    cr0, f1, f0
	cror     2, 1, 2
	bne      lbl_8043ACAC
	lfs      f0, lbl_805208CC@sda21(r2)
	fadds    f0, f0, f1
	b        lbl_8043ACB4

lbl_8043ACAC:
	lfs      f0, lbl_805208CC@sda21(r2)
	fsubs    f0, f1, f0

lbl_8043ACB4:
	fctiwz   f0, f0
	lis      r0, 0x4330
	stw      r0, 0xa0(r1)
	lfd      f2, lbl_805208D0@sda21(r2)
	stfd     f0, 0x98(r1)
	lfs      f0, 0x108(r27)
	lwz      r0, 0x9c(r1)
	xoris    r0, r0, 0x8000
	stw      r0, 0xa4(r1)
	lfd      f1, 0xa0(r1)
	fsubs    f1, f1, f2
	fsubs    f1, f3, f1
	fcmpo    cr0, f0, f1
	ble      lbl_8043ACF0
	stfs     f1, 0x108(r27)

lbl_8043ACF0:
	lwz      r3, 0xf4(r27)
	lbz      r0, 0xf8(r27)
	lwz      r4, 0xb8(r27)
	add      r0, r3, r0
	cmpw     r4, r0
	bne      lbl_8043AF18
	lwz      r3, 0x50(r27)
	lfs      f31, 0x10c(r27)
	lwz      r12, 0(r3)
	lwz      r12, 0x28(r12)
	mtctr    r12
	bctrl
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xa4(r1)
	addi     r30, r1, 8
	lfd      f3, lbl_805208D0@sda21(r2)
	mr       r31, r30
	stw      r0, 0xa0(r1)
	li       r28, 0
	lfs      f2, 0x90(r27)
	li       r29, 0
	lfd      f0, 0xa0(r1)
	lfs      f1, 0xc4(r27)
	fsubs    f3, f0, f3
	lfs      f0, 0x104(r27)
	fsubs    f1, f2, f1
	lfs      f28, lbl_805208C0@sda21(r2)
	fmuls    f30, f31, f3
	fsubs    f27, f1, f0
	b        lbl_8043AE04

lbl_8043AD6C:
	lwz      r3, 0x50(r27)
	lwz      r4, 0x100(r27)
	lwz      r12, 0(r3)
	lbzx     r4, r4, r29
	lwz      r12, 0x40(r12)
	mr       r26, r4
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8043ADB4
	lwz      r3, 0x100(r27)
	addi     r0, r29, 1
	rlwinm   r4, r26, 8, 0x10, 0x17
	addi     r29, r29, 1
	lbzx     r0, r3, r0
	mr       r26, r4
	rlwimi   r26, r0, 0, 0x18, 0x1f
	b        lbl_8043ADD8

lbl_8043ADB4:
	cmpwi    r26, 0xff
	bgt      lbl_8043ADD8
	lis      r3, __ctype_map@ha
	clrlwi   r0, r26, 0x18
	addi     r3, r3, __ctype_map@l
	lbzx     r0, r3, r0
	andi.    r0, r0, 0xdc
	bne      lbl_8043ADD8
	li       r26, 0x3f

lbl_8043ADD8:
	fmr      f1, f30
	lwz      r4, 0x50(r27)
	mr       r3, r27
	mr       r5, r26
	li       r6, 1
	bl       calcWidth__Q25P2JME19TRenderingProcessorFP7JUTFontifb
	fadds    f28, f28, f1
	stw      r26, 0(r31)
	addi     r31, r31, 4
	addi     r28, r28, 1
	addi     r29, r29, 1

lbl_8043AE04:
	lwz      r0, 0xfc(r27)
	cmplw    r29, r0
	blt      lbl_8043AD6C
	addi     r3, r28, 1
	lis      r0, 0x4330
	xoris    r3, r3, 0x8000
	lfs      f0, 0xc4(r27)
	stw      r3, 0xa4(r1)
	fsubs    f1, f27, f28
	lfd      f2, lbl_805208D0@sda21(r2)
	fmuls    f3, f0, f31
	stw      r0, 0xa0(r1)
	lfd      f0, 0xa0(r1)
	fsubs    f0, f0, f2
	fdivs    f29, f1, f0
	fcmpo    cr0, f29, f3
	bge      lbl_8043AE4C
	fmr      f29, f3

lbl_8043AE4C:
	fmadds   f1, f29, f0, f28
	lfs      f2, lbl_805208CC@sda21(r2)
	lfs      f0, 0x104(r27)
	li       r31, 0
	lfd      f28, lbl_805208D0@sda21(r2)
	lis      r29, 0x4330
	fsubs    f1, f27, f1
	fmadds   f0, f2, f1, f0
	fadds    f0, f29, f0
	stfs     f0, 0x104(r27)
	b        lbl_8043AF08

lbl_8043AE78:
	lwz      r3, 0x50(r27)
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	xoris    r0, r3, 0x8000
	lwz      r12, 0(r27)
	stw      r0, 0xa4(r1)
	fmr      f3, f30
	lfs      f4, 0x104(r27)
	mr       r3, r27
	stw      r29, 0xa0(r1)
	li       r5, 1
	lfs      f1, 0x54(r27)
	lfd      f0, 0xa0(r1)
	lfs      f2, 0x108(r27)
	fadds    f1, f4, f1
	fsubs    f5, f0, f28
	lfs      f0, 0x58(r27)
	lwz      r12, 0x78(r12)
	fadds    f2, f2, f0
	lwz      r4, 0(r30)
	fmuls    f4, f31, f5
	mtctr    r12
	bctrl
	lfs      f0, 0x104(r27)
	addi     r30, r30, 4
	addi     r31, r31, 1
	fadds    f0, f0, f1
	stfs     f0, 0x104(r27)
	lfs      f0, 0x104(r27)
	fadds    f0, f0, f29
	stfs     f0, 0x104(r27)
	lwz      r3, 0x40(r27)
	addi     r0, r3, 1
	stw      r0, 0x40(r27)

lbl_8043AF08:
	cmpw     r31, r28
	blt      lbl_8043AE78
	li       r0, 0
	stb      r0, 0xf2(r27)

lbl_8043AF18:
	psq_l    f31, 264(r1), 0, qr0
	lfd      f31, 0x100(r1)
	psq_l    f30, 248(r1), 0, qr0
	lfd      f30, 0xf0(r1)
	psq_l    f29, 232(r1), 0, qr0
	lfd      f29, 0xe0(r1)
	psq_l    f28, 216(r1), 0, qr0
	lfd      f28, 0xd0(r1)
	psq_l    f27, 200(r1), 0, qr0
	lfd      f27, 0xc0(r1)
	lmw      r26, 0xa8(r1)
	lwz      r0, 0x114(r1)
	mtlr     r0
	addi     r1, r1, 0x110
	blr
	*/
}

/**
 * @note Address: 0x8043AF54
 * @note Size: 0x438
 */
bool TRenderingProcessor::tagImage(u16 p1, const void* p2, u32 p3)
{
	P2ASSERTLINE(1114, p3 == 1);
	int type;
	u8 firstByte = ((u8*)p2)[0]; // r29
	f32 width;
	f32 height;
	switch (p1) {
	case 0:
		type   = 0;
		width  = 32.0f * mFontWidthAdjusted;
		height = 32.0f * mFontHeightAdjusted;
		break;
	default:
		P2ASSERTLINE(1134, false);
		break;
	}

	if (gP2JMEMgr) {
		JUTTexture* img = gP2JMEMgr->getImage(ImageGroup::ID0, firstByte);
		if (img && !mFlags.isSet(0x1)) {
			JUtility::TColor color2(_60);
			JUtility::TColor color1(_5C);
			switch (type) {
			case 0:
				GXColor* colorA = &cBtnIconColor[firstByte].a;
				GXColor* colorB = &cBtnIconColor[firstByte].b;
				if (firstByte < 8) {
					_60.set(colorA->r, colorA->g, colorA->b, colorA->a);
					_5C.set(colorB->r, colorB->g, colorB->b, colorB->a);
					mColorData4.set(255, 255, 255, 255);
					mColorData5.set(205, 205, 205, 255);
				} else {
					mColorData4.set(colorA->r, colorA->g, colorA->b, colorA->a);
					mColorData5.set(colorB->r, colorB->g, colorB->b, colorB->a);
				}
				break;
			default:
				if (_F0 == 0) {
					mColorData4 = _D4;
				} else {
					u32 f0 = _F0;
					JUtility::TColor *colorArray = (JUtility::TColor*)getResourceContainer()->getResourceColor()->mBlock.getRaw();
					mColorData4.set(colorArray[f0 + 3]);
				}

				if (_F1 == 0) {
					mColorData5 = _D8;
				} else {
					u32 f1 = _F1;
					JUtility::TColor *colorArray = (JUtility::TColor*)getResourceContainer()->getResourceColor()->mBlock.getRaw();
					mColorData5.set(colorArray[f1 + 3]);
				}
				break;
			}

			mColorData4.a = f32(mColorData4.a) * _78;
			mColorData5.a = f32(mColorData5.a) * _78;
			doDrawImage(img, mLocate.i.x + _54, mLocate.i.y + _58, width, height);
			switch (type) {
			case 0:
				_60 = color2;
				_5C = color1;
				break;
			}
		}
	}

	mLocate.i.x += width;
	_40++;
	mMainFont->setGX(_CC, _D0);
	return true;
}

/**
 * @note Address: N/A
 * @note Size: 0x1B8
 */
void TRenderingProcessor::calcColorCoe(JUtility::TColor const& colorData, JUtility::TColor* outColor)
{
	f32 bottomRF = f32(colorData.r) * mMesgBounds.i.x;
	if (bottomRF > 255.0f) {
		bottomRF = 255.0f;
	}

	f32 bottomGF = f32(colorData.g) * mMesgBounds.i.y;
	if (bottomGF > 255.0f) {
		bottomGF = 255.0f;
	}

	f32 bottomBF = f32(colorData.b) * mMesgBounds.f.x;
	if (bottomBF > 255.0f) {
		bottomBF = 255.0f;
	}

	f32 bottomAF = f32(colorData.a) * mMesgBounds.f.y;
	if (bottomAF > 255.0f) {
		bottomAF = 255.0f;
	}

	u8 bottomR = u8(ROUND_F32_TO_U8(bottomRF)) & 0xFF;
	u8 bottomG = u8(ROUND_F32_TO_U8(bottomGF)) & 0xFF;
	u8 bottomB = u8(ROUND_F32_TO_U8(bottomBF)) & 0xFF;
	u8 bottomA = u8(ROUND_F32_TO_U8(bottomAF)) & 0xFF;

	outColor->r = bottomR;
	outColor->g = bottomG;
	outColor->b = bottomB;
	outColor->a = bottomA;
	// outColor->set(bottomR, bottomG, bottomB, bottomA);
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x8043B38C
 * @note Size: 0x440
 */
f32 TRenderingProcessor::doDrawLetter(f32 p1, f32 p2, f32 p3, f32 p4, int p5, bool p6)
{
	JUtility::TColor bottomColor;
	JUtility::TColor topColor;
	calcColorCoe(mColorData1, &bottomColor);
	calcColorCoe(mColorData2, &topColor);

	mMainFont->setGradColor(bottomColor, topColor);
	mMainFont->drawChar_scale(p1, p2, p3, p4, p5, p6);
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
	stfd     f28, 0xb0(r1)
	psq_st   f28, 184(r1), 0, qr0
	stw      r31, 0xac(r1)
	stw      r30, 0xa8(r1)
	stw      r29, 0xa4(r1)
	mr       r29, r3
	li       r6, -1
	lbz      r3, 0x64(r3)
	lis      r0, 0x4330
	stw      r0, 0x18(r1)
	fmr      f28, f1
	lfd      f5, lbl_805208D8@sda21(r2)
	fmr      f29, f2
	stw      r3, 0x1c(r1)
	fmr      f30, f3
	lfs      f0, 0x7c(r29)
	lfd      f2, 0x18(r1)
	fmr      f31, f4
	lfs      f1, lbl_805208E4@sda21(r2)
	mr       r30, r4
	fsubs    f2, f2, f5
	stw      r6, 0x14(r1)
	mr       r31, r5
	stw      r6, 0x10(r1)
	fmuls    f0, f2, f0
	fcmpo    cr0, f0, f1
	ble      lbl_8043B420
	fmr      f0, f1

lbl_8043B420:
	lbz      r3, 0x65(r29)
	lis      r0, 0x4330
	stw      r0, 0x20(r1)
	lfd      f4, lbl_805208D8@sda21(r2)
	stw      r3, 0x24(r1)
	lfs      f2, 0x80(r29)
	lfd      f3, 0x20(r1)
	lfs      f1, lbl_805208E4@sda21(r2)
	fsubs    f3, f3, f4
	fmuls    f6, f3, f2
	fcmpo    cr0, f6, f1
	ble      lbl_8043B454
	fmr      f6, f1

lbl_8043B454:
	lbz      r3, 0x66(r29)
	lis      r0, 0x4330
	stw      r0, 0x28(r1)
	lfd      f4, lbl_805208D8@sda21(r2)
	stw      r3, 0x2c(r1)
	lfs      f2, 0x84(r29)
	lfd      f3, 0x28(r1)
	lfs      f1, lbl_805208E4@sda21(r2)
	fsubs    f3, f3, f4
	fmuls    f5, f3, f2
	fcmpo    cr0, f5, f1
	ble      lbl_8043B488
	fmr      f5, f1

lbl_8043B488:
	lbz      r3, 0x67(r29)
	lis      r0, 0x4330
	stw      r0, 0x30(r1)
	lfd      f4, lbl_805208D8@sda21(r2)
	stw      r3, 0x34(r1)
	lfs      f2, 0x88(r29)
	lfd      f3, 0x30(r1)
	lfs      f1, lbl_805208E4@sda21(r2)
	fsubs    f3, f3, f4
	fmuls    f2, f3, f2
	fcmpo    cr0, f2, f1
	ble      lbl_8043B4BC
	fmr      f2, f1

lbl_8043B4BC:
	lfs      f1, lbl_805208C0@sda21(r2)
	fcmpo    cr0, f2, f1
	cror     2, 1, 2
	bne      lbl_8043B4D8
	lfs      f1, lbl_805208CC@sda21(r2)
	fadds    f1, f1, f2
	b        lbl_8043B4E0

lbl_8043B4D8:
	lfs      f1, lbl_805208CC@sda21(r2)
	fsubs    f1, f2, f1

lbl_8043B4E0:
	fctiwz   f2, f1
	lfs      f1, lbl_805208C0@sda21(r2)
	fcmpo    cr0, f5, f1
	stfd     f2, 0x38(r1)
	lwz      r0, 0x3c(r1)
	clrlwi   r6, r0, 0x18
	cror     2, 1, 2
	bne      lbl_8043B50C
	lfs      f1, lbl_805208CC@sda21(r2)
	fadds    f1, f1, f5
	b        lbl_8043B514

lbl_8043B50C:
	lfs      f1, lbl_805208CC@sda21(r2)
	fsubs    f1, f5, f1

lbl_8043B514:
	fctiwz   f2, f1
	lfs      f1, lbl_805208C0@sda21(r2)
	fcmpo    cr0, f6, f1
	stfd     f2, 0x40(r1)
	lwz      r0, 0x44(r1)
	clrlwi   r5, r0, 0x18
	cror     2, 1, 2
	bne      lbl_8043B540
	lfs      f1, lbl_805208CC@sda21(r2)
	fadds    f1, f1, f6
	b        lbl_8043B548

lbl_8043B540:
	lfs      f1, lbl_805208CC@sda21(r2)
	fsubs    f1, f6, f1

lbl_8043B548:
	fctiwz   f2, f1
	lfs      f1, lbl_805208C0@sda21(r2)
	fcmpo    cr0, f0, f1
	stfd     f2, 0x48(r1)
	lwz      r0, 0x4c(r1)
	clrlwi   r4, r0, 0x18
	cror     2, 1, 2
	bne      lbl_8043B574
	lfs      f1, lbl_805208CC@sda21(r2)
	fadds    f0, f1, f0
	b        lbl_8043B57C

lbl_8043B574:
	lfs      f1, lbl_805208CC@sda21(r2)
	fsubs    f0, f0, f1

lbl_8043B57C:
	lbz      r3, 0x68(r29)
	fctiwz   f3, f0
	lis      r0, 0x4330
	lfd      f2, lbl_805208D8@sda21(r2)
	stw      r0, 0x58(r1)
	lfs      f0, 0x7c(r29)
	stw      r3, 0x5c(r1)
	lfd      f1, 0x58(r1)
	stfd     f3, 0x50(r1)
	fsubs    f2, f1, f2
	lfs      f1, lbl_805208E4@sda21(r2)
	lwz      r0, 0x54(r1)
	stb      r4, 0x15(r1)
	fmuls    f0, f2, f0
	stb      r0, 0x14(r1)
	fcmpo    cr0, f0, f1
	stb      r5, 0x16(r1)
	stb      r6, 0x17(r1)
	ble      lbl_8043B5CC
	fmr      f0, f1

lbl_8043B5CC:
	lbz      r3, 0x69(r29)
	lis      r0, 0x4330
	stw      r0, 0x60(r1)
	lfd      f4, lbl_805208D8@sda21(r2)
	stw      r3, 0x64(r1)
	lfs      f2, 0x80(r29)
	lfd      f3, 0x60(r1)
	lfs      f1, lbl_805208E4@sda21(r2)
	fsubs    f3, f3, f4
	fmuls    f6, f3, f2
	fcmpo    cr0, f6, f1
	ble      lbl_8043B600
	fmr      f6, f1

lbl_8043B600:
	lbz      r3, 0x6a(r29)
	lis      r0, 0x4330
	stw      r0, 0x68(r1)
	lfd      f4, lbl_805208D8@sda21(r2)
	stw      r3, 0x6c(r1)
	lfs      f2, 0x84(r29)
	lfd      f3, 0x68(r1)
	lfs      f1, lbl_805208E4@sda21(r2)
	fsubs    f3, f3, f4
	fmuls    f5, f3, f2
	fcmpo    cr0, f5, f1
	ble      lbl_8043B634
	fmr      f5, f1

lbl_8043B634:
	lbz      r3, 0x6b(r29)
	lis      r0, 0x4330
	stw      r0, 0x70(r1)
	lfd      f4, lbl_805208D8@sda21(r2)
	stw      r3, 0x74(r1)
	lfs      f2, 0x88(r29)
	lfd      f3, 0x70(r1)
	lfs      f1, lbl_805208E4@sda21(r2)
	fsubs    f3, f3, f4
	fmuls    f2, f3, f2
	fcmpo    cr0, f2, f1
	ble      lbl_8043B668
	fmr      f2, f1

lbl_8043B668:
	lfs      f1, lbl_805208C0@sda21(r2)
	fcmpo    cr0, f2, f1
	cror     2, 1, 2
	bne      lbl_8043B684
	lfs      f1, lbl_805208CC@sda21(r2)
	fadds    f1, f1, f2
	b        lbl_8043B68C

lbl_8043B684:
	lfs      f1, lbl_805208CC@sda21(r2)
	fsubs    f1, f2, f1

lbl_8043B68C:
	fctiwz   f2, f1
	lfs      f1, lbl_805208C0@sda21(r2)
	fcmpo    cr0, f5, f1
	stfd     f2, 0x78(r1)
	lwz      r0, 0x7c(r1)
	clrlwi   r7, r0, 0x18
	cror     2, 1, 2
	bne      lbl_8043B6B8
	lfs      f1, lbl_805208CC@sda21(r2)
	fadds    f1, f1, f5
	b        lbl_8043B6C0

lbl_8043B6B8:
	lfs      f1, lbl_805208CC@sda21(r2)
	fsubs    f1, f5, f1

lbl_8043B6C0:
	fctiwz   f2, f1
	lfs      f1, lbl_805208C0@sda21(r2)
	fcmpo    cr0, f6, f1
	stfd     f2, 0x80(r1)
	lwz      r0, 0x84(r1)
	clrlwi   r6, r0, 0x18
	cror     2, 1, 2
	bne      lbl_8043B6EC
	lfs      f1, lbl_805208CC@sda21(r2)
	fadds    f1, f1, f6
	b        lbl_8043B6F4

lbl_8043B6EC:
	lfs      f1, lbl_805208CC@sda21(r2)
	fsubs    f1, f6, f1

lbl_8043B6F4:
	fctiwz   f2, f1
	lfs      f1, lbl_805208C0@sda21(r2)
	fcmpo    cr0, f0, f1
	stfd     f2, 0x88(r1)
	lwz      r0, 0x8c(r1)
	clrlwi   r3, r0, 0x18
	cror     2, 1, 2
	bne      lbl_8043B720
	lfs      f1, lbl_805208CC@sda21(r2)
	fadds    f0, f1, f0
	b        lbl_8043B728

lbl_8043B720:
	lfs      f1, lbl_805208CC@sda21(r2)
	fsubs    f0, f0, f1

lbl_8043B728:
	fctiwz   f0, f0
	lwz      r0, 0x14(r1)
	stb      r3, 0x11(r1)
	addi     r4, r1, 0xc
	addi     r5, r1, 8
	stfd     f0, 0x90(r1)
	lwz      r3, 0x94(r1)
	stb      r6, 0x12(r1)
	stb      r3, 0x10(r1)
	stb      r7, 0x13(r1)
	lwz      r3, 0x10(r1)
	stw      r0, 0xc(r1)
	stw      r3, 8(r1)
	lwz      r3, 0x4c(r29)
	bl       setGradColor__7JUTFontFQ28JUtility6TColorQ28JUtility6TColor
	lwz      r3, 0x4c(r29)
	fmr      f1, f28
	fmr      f2, f29
	mr       r4, r30
	lwz      r12, 0(r3)
	fmr      f3, f30
	fmr      f4, f31
	lwz      r12, 0x14(r12)
	mr       r5, r31
	mtctr    r12
	bctrl
	psq_l    f31, 232(r1), 0, qr0
	lfd      f31, 0xe0(r1)
	psq_l    f30, 216(r1), 0, qr0
	lfd      f30, 0xd0(r1)
	psq_l    f29, 200(r1), 0, qr0
	lfd      f29, 0xc0(r1)
	psq_l    f28, 184(r1), 0, qr0
	lfd      f28, 0xb0(r1)
	lwz      r31, 0xac(r1)
	lwz      r30, 0xa8(r1)
	lwz      r0, 0xf4(r1)
	lwz      r29, 0xa4(r1)
	mtlr     r0
	addi     r1, r1, 0xf0
	blr
	*/
}

/**
 * @note Address: 0x8043B7CC
 * @note Size: 0x29C
 */
f32 TRenderingProcessor::doDrawRuby(f32 p1, f32 p2, f32 p3, f32 p4, int p5, bool p6)
{
	JUtility::TColor charColor;
	mColorData3.a = 255.0f * _78;
	calcColorCoe(mColorData3, &charColor);
	mRubyFont->setCharColor(charColor);
	mRubyFont->drawChar_scale(p1, p2, p3, p4, p5, p6);
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
	stw      r31, 0x6c(r1)
	stw      r30, 0x68(r1)
	stw      r29, 0x64(r1)
	mr       r29, r3
	lis      r0, 0x4330
	lfs      f5, lbl_805208E4@sda21(r2)
	li       r3, -1
	lfs      f0, 0x78(r29)
	fmr      f28, f1
	stw      r0, 0x18(r1)
	fmr      f29, f2
	fmuls    f0, f5, f0
	lfd      f2, lbl_805208D8@sda21(r2)
	fmr      f30, f3
	fmr      f31, f4
	stw      r3, 0xc(r1)
	fctiwz   f0, f0
	mr       r30, r4
	mr       r31, r5
	stfd     f0, 0x10(r1)
	lwz      r0, 0x14(r1)
	stb      r0, 0x6f(r29)
	lbz      r0, 0x6c(r29)
	lfs      f0, 0x7c(r29)
	stw      r0, 0x1c(r1)
	lfd      f1, 0x18(r1)
	fsubs    f1, f1, f2
	fmuls    f0, f1, f0
	fcmpo    cr0, f0, f5
	ble      lbl_8043B874
	fmr      f0, f5

lbl_8043B874:
	lbz      r3, 0x6d(r29)
	lis      r0, 0x4330
	stw      r0, 0x20(r1)
	lfd      f4, lbl_805208D8@sda21(r2)
	stw      r3, 0x24(r1)
	lfs      f2, 0x80(r29)
	lfd      f3, 0x20(r1)
	lfs      f1, lbl_805208E4@sda21(r2)
	fsubs    f3, f3, f4
	fmuls    f6, f3, f2
	fcmpo    cr0, f6, f1
	ble      lbl_8043B8A8
	fmr      f6, f1

lbl_8043B8A8:
	lbz      r3, 0x6e(r29)
	lis      r0, 0x4330
	stw      r0, 0x28(r1)
	lfd      f4, lbl_805208D8@sda21(r2)
	stw      r3, 0x2c(r1)
	lfs      f2, 0x84(r29)
	lfd      f3, 0x28(r1)
	lfs      f1, lbl_805208E4@sda21(r2)
	fsubs    f3, f3, f4
	fmuls    f5, f3, f2
	fcmpo    cr0, f5, f1
	ble      lbl_8043B8DC
	fmr      f5, f1

lbl_8043B8DC:
	lbz      r3, 0x6f(r29)
	lis      r0, 0x4330
	stw      r0, 0x30(r1)
	lfd      f4, lbl_805208D8@sda21(r2)
	stw      r3, 0x34(r1)
	lfs      f2, 0x88(r29)
	lfd      f3, 0x30(r1)
	lfs      f1, lbl_805208E4@sda21(r2)
	fsubs    f3, f3, f4
	fmuls    f2, f3, f2
	fcmpo    cr0, f2, f1
	ble      lbl_8043B910
	fmr      f2, f1

lbl_8043B910:
	lfs      f1, lbl_805208C0@sda21(r2)
	fcmpo    cr0, f2, f1
	cror     2, 1, 2
	bne      lbl_8043B92C
	lfs      f1, lbl_805208CC@sda21(r2)
	fadds    f1, f1, f2
	b        lbl_8043B934

lbl_8043B92C:
	lfs      f1, lbl_805208CC@sda21(r2)
	fsubs    f1, f2, f1

lbl_8043B934:
	fctiwz   f2, f1
	lfs      f1, lbl_805208C0@sda21(r2)
	fcmpo    cr0, f5, f1
	stfd     f2, 0x38(r1)
	lwz      r0, 0x3c(r1)
	clrlwi   r5, r0, 0x18
	cror     2, 1, 2
	bne      lbl_8043B960
	lfs      f1, lbl_805208CC@sda21(r2)
	fadds    f1, f1, f5
	b        lbl_8043B968

lbl_8043B960:
	lfs      f1, lbl_805208CC@sda21(r2)
	fsubs    f1, f5, f1

lbl_8043B968:
	fctiwz   f2, f1
	lfs      f1, lbl_805208C0@sda21(r2)
	fcmpo    cr0, f6, f1
	stfd     f2, 0x40(r1)
	lwz      r0, 0x44(r1)
	clrlwi   r3, r0, 0x18
	cror     2, 1, 2
	bne      lbl_8043B994
	lfs      f1, lbl_805208CC@sda21(r2)
	fadds    f1, f1, f6
	b        lbl_8043B99C

lbl_8043B994:
	lfs      f1, lbl_805208CC@sda21(r2)
	fsubs    f1, f6, f1

lbl_8043B99C:
	fctiwz   f2, f1
	lfs      f1, lbl_805208C0@sda21(r2)
	fcmpo    cr0, f0, f1
	stfd     f2, 0x48(r1)
	lwz      r0, 0x4c(r1)
	clrlwi   r0, r0, 0x18
	cror     2, 1, 2
	bne      lbl_8043B9C8
	lfs      f1, lbl_805208CC@sda21(r2)
	fadds    f0, f1, f0
	b        lbl_8043B9D0

lbl_8043B9C8:
	lfs      f1, lbl_805208CC@sda21(r2)
	fsubs    f0, f0, f1

lbl_8043B9D0:
	fctiwz   f0, f0
	stb      r0, 0xd(r1)
	addi     r4, r1, 8
	stb      r3, 0xe(r1)
	stfd     f0, 0x50(r1)
	lwz      r0, 0x54(r1)
	stb      r5, 0xf(r1)
	stb      r0, 0xc(r1)
	lwz      r0, 0xc(r1)
	stw      r0, 8(r1)
	lwz      r3, 0x50(r29)
	bl       setCharColor__7JUTFontFQ28JUtility6TColor
	lwz      r3, 0x50(r29)
	fmr      f1, f28
	fmr      f2, f29
	mr       r4, r30
	lwz      r12, 0(r3)
	fmr      f3, f30
	fmr      f4, f31
	lwz      r12, 0x14(r12)
	mr       r5, r31
	mtctr    r12
	bctrl
	psq_l    f31, 168(r1), 0, qr0
	lfd      f31, 0xa0(r1)
	psq_l    f30, 152(r1), 0, qr0
	lfd      f30, 0x90(r1)
	psq_l    f29, 136(r1), 0, qr0
	lfd      f29, 0x80(r1)
	psq_l    f28, 120(r1), 0, qr0
	lfd      f28, 0x70(r1)
	lwz      r31, 0x6c(r1)
	lwz      r30, 0x68(r1)
	lwz      r0, 0xb4(r1)
	lwz      r29, 0x64(r1)
	mtlr     r0
	addi     r1, r1, 0xb0
	blr
	*/
}

/**
 * @note Address: 0x8043BA68
 * @note Size: 0x74
 */
void TRenderingProcessor::doDrawImage(JUTTexture* texture, f32 p2, f32 p3, f32 p4, f32 p5)
{
	setImageGX();
	drawImage(texture, p2, p3, p4, p5);
}

/**
 * @note Address: 0x8043BADC
 * @note Size: 0x334
 */
void TRenderingProcessor::setImageGX()
{
	if (*(u32*)&_5C == 0 && *(u32*)&_60 == -1) {
		GXSetNumChans(1);
		GXSetChanCtrl(GX_COLOR0A0, GX_FALSE, GX_SRC_VTX, GX_SRC_VTX, 1, GX_DF_CLAMP, GX_AF_NONE);
		GXClearVtxDesc();
		GXSetNumTevStages(1);
		GXSetTevOrder(GX_TEVSTAGE0, GX_TEXCOORD0, GX_TEXMAP0, GX_COLOR0A0);
		GXSetTevOp(GX_TEVSTAGE0, GX_MODULATE);
		GXSetNumTexGens(1);
		GXSetTexCoordGen2(GX_TEXCOORD0, GX_TG_MTX3X4, GX_TG_TEX0, 0x3c, GX_FALSE, 0x7d);
		GXSetVtxDesc(GX_VA_POS, GX_DIRECT);
		GXSetVtxDesc(GX_VA_CLR0, GX_DIRECT);
		GXSetVtxDesc(GX_VA_TEX0, GX_DIRECT);
		GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_POS, GX_POS_XYZ, GX_F32, 0);
		GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_CLR0, GX_POS_XYZ, GX_RGBA8, 0);
		GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_TEX0, GX_POS_XYZ, GX_S8, 4);
		GXSetCullMode(GX_CULL_BACK);
		GXSetZMode(GX_FALSE, GX_NEVER, GX_FALSE);
		GXSetBlendMode(GX_BM_BLEND, GX_BL_SRCALPHA, GX_BL_INVSRCALPHA, GX_LO_CLEAR);
		return;
	}

	GXSetNumChans(1);
	GXSetNumTevStages(2);
	GXSetNumTexGens(1);
	GXSetTevOrder(GX_TEVSTAGE0, GX_TEXCOORD0, GX_TEXMAP0, GX_COLOR_NULL);
	GXSetChanCtrl(GX_COLOR0A0, GX_FALSE, GX_SRC_REG, GX_SRC_VTX, 0, GX_DF_NONE, GX_AF_NONE);
	GXSetTevColor(GX_TEVREG0, *(GXColor*)&_5C);
	GXSetTevColor(GX_TEVREG1, *(GXColor*)&_60);
	GXSetTevColorIn(GX_TEVSTAGE0, GX_CC_C0, GX_CC_C2, GX_CC_TEXC, GX_CC_ZERO);
	GXSetTevAlphaIn(GX_TEVSTAGE0, GX_CA_A0, GX_CA_A1, GX_CA_TEXA, GX_CA_ZERO);
	GXSetTevColorOp(GX_TEVSTAGE0, GX_TEV_ADD, GX_TB_ZERO, GX_CS_SCALE_1, GX_TRUE, GX_TEVPREV);
	GXSetTevAlphaOp(GX_TEVSTAGE0, GX_TEV_ADD, GX_TB_ZERO, GX_CS_SCALE_1, GX_TRUE, GX_TEVPREV);
	GXSetTevOrder(GX_TEVSTAGE1, GX_TEXCOORD_NULL, GX_TEXMAP_NULL, GX_COLOR0A0);
	GXSetTevColorIn(GX_TEVSTAGE1, GX_CC_ZERO, GX_CC_CPREV, GX_CC_RASC, GX_CC_ZERO);
	GXSetTevAlphaIn(GX_TEVSTAGE1, GX_CA_ZERO, GX_CA_APREV, GX_CA_RASA, GX_CA_ZERO);
	GXSetTevColorOp(GX_TEVSTAGE1, GX_TEV_ADD, GX_TB_ZERO, GX_CS_SCALE_1, GX_TRUE, GX_TEVPREV);
	GXSetTevAlphaOp(GX_TEVSTAGE1, GX_TEV_ADD, GX_TB_ZERO, GX_CS_SCALE_1, GX_TRUE, GX_TEVPREV);
	GXSetBlendMode(GX_BM_BLEND, GX_BL_SRCALPHA, GX_BL_INVSRCALPHA, GX_LO_SET);
	GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_POS, GX_POS_XYZ, GX_F32, 0);
	GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_CLR0, GX_POS_XYZ, GX_RGBA8, 0);
	GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_TEX0, GX_POS_XYZ, GX_S8, 4);
	GXClearVtxDesc();
	GXSetVtxDesc(GX_VA_POS, GX_DIRECT);
	GXSetVtxDesc(GX_VA_CLR0, GX_DIRECT);
	GXSetVtxDesc(GX_VA_TEX0, GX_DIRECT);
}

/**
 * @note Address: 0x8043BE10
 * @note Size: 0x4F4
 */
void TRenderingProcessor::drawImage(JUTTexture* img, f32 p2, f32 p3, f32 p4, f32 p5)
{
	img->load(GX_TEXMAP0);

	p3 = mFontHeightAdjusted * f32(mMainFont->getDescent()) + p3;
	p4 = p2 + p4;
	p5 = p3 - p5;

	JUtility::TColor colorA;
	JUtility::TColor colorB;

	calcColorCoe(mColorData4, &colorA);
	calcColorCoe(mColorData5, &colorB);

	f32 zero = 0.0f;
	GXBegin(GX_QUADS, GX_VTXFMT0, 4);
	GXPosition3f32(p2, p3, zero);
	GXColor4u8(colorB.r, colorB.g, colorB.b, colorB.a);
	GXTexCoord2u8(0, 16);

	GXPosition3f32(p2, p5, zero);
	GXColor4u8(colorA.r, colorA.g, colorA.b, colorA.a);
	GXTexCoord2u8(0, 0);

	GXPosition3f32(p4, p5, zero);
	GXColor4u8(colorA.r, colorA.g, colorA.b, colorA.a);
	GXTexCoord2u8(16, 0);

	GXPosition3f32(p4, p3, zero);
	GXColor4u8(colorB.r, colorB.g, colorB.b, colorB.a);
	GXTexCoord2u8(16, 16);
	/*
	stwu     r1, -0xe0(r1)
	mflr     r0
	stw      r0, 0xe4(r1)
	stfd     f31, 0xd0(r1)
	psq_st   f31, 216(r1), 0, qr0
	stfd     f30, 0xc0(r1)
	psq_st   f30, 200(r1), 0, qr0
	stfd     f29, 0xb0(r1)
	psq_st   f29, 184(r1), 0, qr0
	stfd     f28, 0xa0(r1)
	psq_st   f28, 168(r1), 0, qr0
	stw      r31, 0x9c(r1)
	fmr      f28, f1
	mr       r31, r3
	fmr      f29, f2
	mr       r3, r4
	fmr      f31, f3
	li       r4, 0
	fmr      f30, f4
	bl       load__10JUTTextureF11_GXTexMapID
	lwz      r3, 0x4c(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lbz      r0, 0x70(r31)
	lis      r4, 0x4330
	xoris    r5, r3, 0x8000
	li       r3, -1
	stw      r5, 0x14(r1)
	fadds    f31, f28, f31
	lfd      f1, lbl_805208D0@sda21(r2)
	stw      r4, 0x10(r1)
	lfd      f3, lbl_805208D8@sda21(r2)
	lfd      f0, 0x10(r1)
	stw      r0, 0x1c(r1)
	fsubs    f4, f0, f1
	lfs      f1, 0xe4(r31)
	stw      r4, 0x18(r1)
	lfs      f0, 0x7c(r31)
	lfd      f2, 0x18(r1)
	fmadds   f29, f1, f4, f29
	lfs      f1, lbl_805208E4@sda21(r2)
	fsubs    f2, f2, f3
	stw      r3, 0xc(r1)
	fsubs    f30, f29, f30
	stw      r3, 8(r1)
	fmuls    f0, f2, f0
	fcmpo    cr0, f0, f1
	ble      lbl_8043BEDC
	fmr      f0, f1

lbl_8043BEDC:
	lbz      r3, 0x71(r31)
	lis      r0, 0x4330
	stw      r0, 0x20(r1)
	lfd      f4, lbl_805208D8@sda21(r2)
	stw      r3, 0x24(r1)
	lfs      f2, 0x80(r31)
	lfd      f3, 0x20(r1)
	lfs      f1, lbl_805208E4@sda21(r2)
	fsubs    f3, f3, f4
	fmuls    f6, f3, f2
	fcmpo    cr0, f6, f1
	ble      lbl_8043BF10
	fmr      f6, f1

lbl_8043BF10:
	lbz      r3, 0x72(r31)
	lis      r0, 0x4330
	stw      r0, 0x28(r1)
	lfd      f4, lbl_805208D8@sda21(r2)
	stw      r3, 0x2c(r1)
	lfs      f2, 0x84(r31)
	lfd      f3, 0x28(r1)
	lfs      f1, lbl_805208E4@sda21(r2)
	fsubs    f3, f3, f4
	fmuls    f5, f3, f2
	fcmpo    cr0, f5, f1
	ble      lbl_8043BF44
	fmr      f5, f1

lbl_8043BF44:
	lbz      r3, 0x73(r31)
	lis      r0, 0x4330
	stw      r0, 0x30(r1)
	lfd      f4, lbl_805208D8@sda21(r2)
	stw      r3, 0x34(r1)
	lfs      f2, 0x88(r31)
	lfd      f3, 0x30(r1)
	lfs      f1, lbl_805208E4@sda21(r2)
	fsubs    f3, f3, f4
	fmuls    f2, f3, f2
	fcmpo    cr0, f2, f1
	ble      lbl_8043BF78
	fmr      f2, f1

lbl_8043BF78:
	lfs      f1, lbl_805208C0@sda21(r2)
	fcmpo    cr0, f2, f1
	cror     2, 1, 2
	bne      lbl_8043BF94
	lfs      f1, lbl_805208CC@sda21(r2)
	fadds    f1, f1, f2
	b        lbl_8043BF9C

lbl_8043BF94:
	lfs      f1, lbl_805208CC@sda21(r2)
	fsubs    f1, f2, f1

lbl_8043BF9C:
	fctiwz   f2, f1
	lfs      f1, lbl_805208C0@sda21(r2)
	fcmpo    cr0, f5, f1
	stfd     f2, 0x38(r1)
	lwz      r0, 0x3c(r1)
	clrlwi   r6, r0, 0x18
	cror     2, 1, 2
	bne      lbl_8043BFC8
	lfs      f1, lbl_805208CC@sda21(r2)
	fadds    f1, f1, f5
	b        lbl_8043BFD0

lbl_8043BFC8:
	lfs      f1, lbl_805208CC@sda21(r2)
	fsubs    f1, f5, f1

lbl_8043BFD0:
	fctiwz   f2, f1
	lfs      f1, lbl_805208C0@sda21(r2)
	fcmpo    cr0, f6, f1
	stfd     f2, 0x40(r1)
	lwz      r0, 0x44(r1)
	clrlwi   r5, r0, 0x18
	cror     2, 1, 2
	bne      lbl_8043BFFC
	lfs      f1, lbl_805208CC@sda21(r2)
	fadds    f1, f1, f6
	b        lbl_8043C004

lbl_8043BFFC:
	lfs      f1, lbl_805208CC@sda21(r2)
	fsubs    f1, f6, f1

lbl_8043C004:
	fctiwz   f2, f1
	lfs      f1, lbl_805208C0@sda21(r2)
	fcmpo    cr0, f0, f1
	stfd     f2, 0x48(r1)
	lwz      r0, 0x4c(r1)
	clrlwi   r4, r0, 0x18
	cror     2, 1, 2
	bne      lbl_8043C030
	lfs      f1, lbl_805208CC@sda21(r2)
	fadds    f0, f1, f0
	b        lbl_8043C038

lbl_8043C030:
	lfs      f1, lbl_805208CC@sda21(r2)
	fsubs    f0, f0, f1

lbl_8043C038:
	lbz      r3, 0x74(r31)
	fctiwz   f3, f0
	lis      r0, 0x4330
	lfd      f2, lbl_805208D8@sda21(r2)
	stw      r0, 0x58(r1)
	lfs      f0, 0x7c(r31)
	stw      r3, 0x5c(r1)
	lfd      f1, 0x58(r1)
	stfd     f3, 0x50(r1)
	fsubs    f2, f1, f2
	lfs      f1, lbl_805208E4@sda21(r2)
	lwz      r0, 0x54(r1)
	stb      r4, 0xd(r1)
	fmuls    f0, f2, f0
	stb      r0, 0xc(r1)
	fcmpo    cr0, f0, f1
	stb      r5, 0xe(r1)
	stb      r6, 0xf(r1)
	ble      lbl_8043C088
	fmr      f0, f1

lbl_8043C088:
	lbz      r3, 0x75(r31)
	lis      r0, 0x4330
	stw      r0, 0x60(r1)
	lfd      f4, lbl_805208D8@sda21(r2)
	stw      r3, 0x64(r1)
	lfs      f2, 0x80(r31)
	lfd      f3, 0x60(r1)
	lfs      f1, lbl_805208E4@sda21(r2)
	fsubs    f3, f3, f4
	fmuls    f6, f3, f2
	fcmpo    cr0, f6, f1
	ble      lbl_8043C0BC
	fmr      f6, f1

lbl_8043C0BC:
	lbz      r3, 0x76(r31)
	lis      r0, 0x4330
	stw      r0, 0x68(r1)
	lfd      f4, lbl_805208D8@sda21(r2)
	stw      r3, 0x6c(r1)
	lfs      f2, 0x84(r31)
	lfd      f3, 0x68(r1)
	lfs      f1, lbl_805208E4@sda21(r2)
	fsubs    f3, f3, f4
	fmuls    f5, f3, f2
	fcmpo    cr0, f5, f1
	ble      lbl_8043C0F0
	fmr      f5, f1

lbl_8043C0F0:
	lbz      r3, 0x77(r31)
	lis      r0, 0x4330
	stw      r0, 0x70(r1)
	lfd      f4, lbl_805208D8@sda21(r2)
	stw      r3, 0x74(r1)
	lfs      f2, 0x88(r31)
	lfd      f3, 0x70(r1)
	lfs      f1, lbl_805208E4@sda21(r2)
	fsubs    f3, f3, f4
	fmuls    f2, f3, f2
	fcmpo    cr0, f2, f1
	ble      lbl_8043C124
	fmr      f2, f1

lbl_8043C124:
	lfs      f1, lbl_805208C0@sda21(r2)
	fcmpo    cr0, f2, f1
	cror     2, 1, 2
	bne      lbl_8043C140
	lfs      f1, lbl_805208CC@sda21(r2)
	fadds    f1, f1, f2
	b        lbl_8043C148

lbl_8043C140:
	lfs      f1, lbl_805208CC@sda21(r2)
	fsubs    f1, f2, f1

lbl_8043C148:
	fctiwz   f2, f1
	lfs      f1, lbl_805208C0@sda21(r2)
	fcmpo    cr0, f5, f1
	stfd     f2, 0x78(r1)
	lwz      r0, 0x7c(r1)
	clrlwi   r6, r0, 0x18
	cror     2, 1, 2
	bne      lbl_8043C174
	lfs      f1, lbl_805208CC@sda21(r2)
	fadds    f1, f1, f5
	b        lbl_8043C17C

lbl_8043C174:
	lfs      f1, lbl_805208CC@sda21(r2)
	fsubs    f1, f5, f1

lbl_8043C17C:
	fctiwz   f2, f1
	lfs      f1, lbl_805208C0@sda21(r2)
	fcmpo    cr0, f6, f1
	stfd     f2, 0x80(r1)
	lwz      r0, 0x84(r1)
	clrlwi   r5, r0, 0x18
	cror     2, 1, 2
	bne      lbl_8043C1A8
	lfs      f1, lbl_805208CC@sda21(r2)
	fadds    f1, f1, f6
	b        lbl_8043C1B0

lbl_8043C1A8:
	lfs      f1, lbl_805208CC@sda21(r2)
	fsubs    f1, f6, f1

lbl_8043C1B0:
	fctiwz   f2, f1
	lfs      f1, lbl_805208C0@sda21(r2)
	fcmpo    cr0, f0, f1
	stfd     f2, 0x88(r1)
	lwz      r0, 0x8c(r1)
	clrlwi   r0, r0, 0x18
	cror     2, 1, 2
	bne      lbl_8043C1DC
	lfs      f1, lbl_805208CC@sda21(r2)
	fadds    f0, f1, f0
	b        lbl_8043C1E4

lbl_8043C1DC:
	lfs      f1, lbl_805208CC@sda21(r2)
	fsubs    f0, f0, f1

lbl_8043C1E4:
	fctiwz   f0, f0
	stb      r5, 0xa(r1)
	li       r3, 0x80
	li       r4, 0
	stb      r0, 9(r1)
	li       r5, 4
	stfd     f0, 0x90(r1)
	lwz      r0, 0x94(r1)
	stb      r6, 0xb(r1)
	stb      r0, 8(r1)
	bl       GXBegin
	lis      r12, 0xCC008000@ha
	lfs      f0, lbl_805208C0@sda21(r2)
	stfs     f28, 0xCC008000@l(r12)
	li       r7, 0
	lbz      r11, 8(r1)
	li       r6, 0x10
	stfs     f29, -0x8000(r12)
	lbz      r10, 9(r1)
	stfs     f0, -0x8000(r12)
	lbz      r9, 0xa(r1)
	stb      r11, -0x8000(r12)
	lbz      r8, 0xb(r1)
	stb      r10, -0x8000(r12)
	lbz      r5, 0xc(r1)
	stb      r9, -0x8000(r12)
	lbz      r4, 0xd(r1)
	stb      r8, -0x8000(r12)
	lbz      r3, 0xe(r1)
	stb      r7, -0x8000(r12)
	lbz      r0, 0xf(r1)
	stb      r6, -0x8000(r12)
	stfs     f28, -0x8000(r12)
	stfs     f30, -0x8000(r12)
	stfs     f0, -0x8000(r12)
	stb      r5, -0x8000(r12)
	stb      r4, -0x8000(r12)
	stb      r3, -0x8000(r12)
	stb      r0, -0x8000(r12)
	stb      r7, -0x8000(r12)
	stb      r7, -0x8000(r12)
	stfs     f31, -0x8000(r12)
	stfs     f30, -0x8000(r12)
	stfs     f0, -0x8000(r12)
	stb      r5, -0x8000(r12)
	stb      r4, -0x8000(r12)
	stb      r3, -0x8000(r12)
	stb      r0, -0x8000(r12)
	stb      r6, -0x8000(r12)
	stb      r7, -0x8000(r12)
	stfs     f31, -0x8000(r12)
	stfs     f29, -0x8000(r12)
	stfs     f0, -0x8000(r12)
	stb      r11, -0x8000(r12)
	stb      r10, -0x8000(r12)
	stb      r9, -0x8000(r12)
	stb      r8, -0x8000(r12)
	stb      r6, -0x8000(r12)
	stb      r6, -0x8000(r12)
	psq_l    f31, 216(r1), 0, qr0
	lfd      f31, 0xd0(r1)
	psq_l    f30, 200(r1), 0, qr0
	lfd      f30, 0xc0(r1)
	psq_l    f29, 184(r1), 0, qr0
	lfd      f29, 0xb0(r1)
	psq_l    f28, 168(r1), 0, qr0
	lfd      f28, 0xa0(r1)
	lwz      r0, 0xe4(r1)
	lwz      r31, 0x9c(r1)
	mtlr     r0
	addi     r1, r1, 0xe0
	blr
	*/
}

/**
 * @note Address: 0x8043C304
 * @note Size: 0x10
 */
void TRenderingProcessor::reset()
{
	_54 = 0.0f;
	_58 = 0.0f;
}

/**
 * @note Address: 0x8043C314
 * @note Size: 0x128
 */
f32 TRenderingProcessor::calcWidth(JUTFont* font, int p2, f32 p3, bool p4)
{
	f32 v1 = p3 / font->getCellWidth();
	if (font->mIsFixed) {
		return v1 * font->mFixedWidth;
	}
	JUTFont::TWidth width;
	font->getWidthEntry(p2, &width);

	return (!p4) ? (width.w1 + width.w0) * v1 : (width.w1) * v1;
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stfd     f31, 0x30(r1)
	psq_st   f31, 56(r1), 0, qr0
	stw      r31, 0x2c(r1)
	stw      r30, 0x28(r1)
	stw      r29, 0x24(r1)
	mr       r29, r4
	fmr      f31, f1
	mr       r3, r29
	mr       r30, r5
	lwz      r12, 0(r29)
	mr       r31, r6
	lwz      r12, 0x30(r12)
	mtctr    r12
	bctrl
	xoris    r0, r3, 0x8000
	lis      r3, 0x4330
	stw      r0, 0x14(r1)
	lbz      r0, 5(r29)
	stw      r3, 0x10(r1)
	lfd      f1, lbl_805208D0@sda21(r2)
	cmplwi   r0, 0
	lfd      f0, 0x10(r1)
	fsubs    f0, f0, f1
	fdivs    f31, f31, f0
	beq      lbl_8043C3A4
	lwz      r0, 8(r29)
	stw      r3, 0x10(r1)
	xoris    r0, r0, 0x8000
	stw      r0, 0x14(r1)
	lfd      f0, 0x10(r1)
	fsubs    f0, f0, f1
	fmuls    f1, f31, f0
	b        lbl_8043C418

lbl_8043C3A4:
	mr       r3, r29
	mr       r4, r30
	lwz      r12, 0(r29)
	addi     r5, r1, 8
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r31, 0x18
	bne      lbl_8043C3F8
	lbz      r4, 9(r1)
	lis      r0, 0x4330
	lbz      r3, 8(r1)
	stw      r0, 0x10(r1)
	add      r0, r4, r3
	lfd      f1, lbl_805208D0@sda21(r2)
	xoris    r0, r0, 0x8000
	stw      r0, 0x14(r1)
	lfd      f0, 0x10(r1)
	fsubs    f0, f0, f1
	fmuls    f1, f31, f0
	b        lbl_8043C418

lbl_8043C3F8:
	lbz      r3, 9(r1)
	lis      r0, 0x4330
	stw      r0, 0x10(r1)
	lfd      f1, lbl_805208D8@sda21(r2)
	stw      r3, 0x14(r1)
	lfd      f0, 0x10(r1)
	fsubs    f0, f0, f1
	fmuls    f1, f0, f31

lbl_8043C418:
	psq_l    f31, 56(r1), 0, qr0
	lwz      r0, 0x44(r1)
	lfd      f31, 0x30(r1)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	lwz      r29, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/**
 * @note Address: 0x8043C43C
 * @note Size: 0x24
 */
void TRenderingProcessor::setLineWidth()
{
	if (mFlags.isSet(1) == 0) {
		return;
	}
	mLineWidths[mCurrLine] = mLocate.i.x;
}

/**
 * @note Address: 0x8043C460
 * @note Size: 0xD8
 */
void TRenderingProcessor::resetLineWidth()
{
	for (int i = 0; i < 64; i++) {
		mLineWidths[i] = 0.0f;
	}
}

/**
 * @note Address: 0x8043C538
 * @note Size: 0x40
 */
void TRenderingProcessor::setOnePageLine()
{
	if (mFlags.isSet(1) == 0) {
		return;
	}
	for (int i = 0; i < mCurrLine; i++) {
		if (mOnePageLines[i] == 0) {
			mOnePageLines[i] = mParagraphNum;
		}
	}
}

/**
 * @note Address: 0x8043C578
 * @note Size: 0xD8
 */
void TRenderingProcessor::resetOnePageLine()
{
	for (int i = 0; i < 64; i++) {
		mOnePageLines[i] = 0;
	}
}

/**
 * @note Address: N/A
 * @note Size: 0xA0
 */
void TRenderingProcessor::resetPageInfo()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x8043C650
 * @note Size: 0x8C
 */
void TRenderingProcessor::setPageInfo()
{
	P2ASSERTLINE(1573, mPageInfoNum < 10);
	mPageInfoCounts[mPageInfoNum * 2 + 1] = mCurrLine - 1;
	if (mPageInfoNum < 9) {
		mPageInfoCounts[mPageInfoNum * 2 + 2] = mCurrLine;
	}
}

/**
 * @note Address: 0x8043C6DC
 * @note Size: 0x20
 */
void TRenderingProcessor::preProcCode(uint p1) { preProcCenteringCode(p1); }

/**
 * @note Address: 0x8043C6FC
 * @note Size: 0x20
 */
void TRenderingProcessor::preProcID(uint p1, uint p2) { preProcCenteringID(p1, p2); }

/**
 * @note Address: N/A
 * @note Size: 0x260
 */
void TRenderingProcessor::preProcCenteringPre()
{
	// UNUSED FUNCTION
	mFlags.set(1);
	mCurrLine = 0;
	resetLineWidth();
	resetOnePageLine();
	resetPageInfo();
	_B4 = 0.0f;
	reset_(nullptr);
}

/**
 * @note Address: N/A
 * @note Size: 0x11C
 */
void TRenderingProcessor::preProcCenteringPost()
{
	// UNUSED FUNCTION
	process(nullptr);
	setLineWidth();
	newParagraph();
	setOnePageLine();
	if (mFlags.isSet(TProcFlag_PageFinished) == 0) {
		setPageInfo();
	}
	mFlags.unset(1);
	_B4 = mLocate.i.y;
}

/**
 * @note Address: 0x8043C71C
 * @note Size: 0x39C
 */
void TRenderingProcessor::preProcCenteringCode(uint p1)
{
	preProcCenteringPre();
	setBegin_messageCode(p1 >> 16, p1);
	preProcCenteringPost();
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r10, 0
	lfs      f0, lbl_805208C0@sda21(r2)
	stw      r0, 0x14(r1)
	li       r0, 4
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r3, 0x8c(r3)
	ori      r3, r3, 1
	stw      r3, 0x8c(r30)
	stb      r10, 0xa4(r30)
	mtctr    r0

lbl_8043C758:
	lwz      r3, 0xa8(r30)
	addi     r9, r10, 4
	addi     r8, r10, 8
	addi     r7, r10, 0xc
	stfsx    f0, r3, r10
	addi     r6, r10, 0x10
	addi     r5, r10, 0x14
	addi     r4, r10, 0x18
	lwz      r3, 0xa8(r30)
	addi     r0, r10, 0x1c
	stfsx    f0, r3, r9
	addi     r9, r10, 0x24
	lwz      r3, 0xa8(r30)
	stfsx    f0, r3, r8
	addi     r8, r10, 0x28
	lwz      r3, 0xa8(r30)
	stfsx    f0, r3, r7
	addi     r7, r10, 0x2c
	lwz      r3, 0xa8(r30)
	stfsx    f0, r3, r6
	addi     r6, r10, 0x30
	lwz      r3, 0xa8(r30)
	stfsx    f0, r3, r5
	addi     r5, r10, 0x34
	lwz      r3, 0xa8(r30)
	stfsx    f0, r3, r4
	addi     r4, r10, 0x38
	lwz      r3, 0xa8(r30)
	stfsx    f0, r3, r0
	addi     r0, r10, 0x3c
	addi     r10, r10, 0x20
	lwz      r3, 0xa8(r30)
	stfsx    f0, r3, r10
	addi     r10, r10, 0x20
	lwz      r3, 0xa8(r30)
	stfsx    f0, r3, r9
	lwz      r3, 0xa8(r30)
	stfsx    f0, r3, r8
	lwz      r3, 0xa8(r30)
	stfsx    f0, r3, r7
	lwz      r3, 0xa8(r30)
	stfsx    f0, r3, r6
	lwz      r3, 0xa8(r30)
	stfsx    f0, r3, r5
	lwz      r3, 0xa8(r30)
	stfsx    f0, r3, r4
	lwz      r3, 0xa8(r30)
	stfsx    f0, r3, r0
	bdnz     lbl_8043C758
	li       r11, 0
	li       r0, 4
	stb      r11, 0xa5(r30)
	mtctr    r0

lbl_8043C82C:
	lwz      r4, 0xac(r30)
	li       r3, 0
	addi     r10, r11, 1
	addi     r9, r11, 2
	stbx     r3, r4, r11
	addi     r8, r11, 3
	addi     r7, r11, 4
	addi     r6, r11, 5
	lwz      r4, 0xac(r30)
	addi     r5, r11, 6
	addi     r0, r11, 7
	stbx     r3, r4, r10
	addi     r10, r11, 9
	lwz      r4, 0xac(r30)
	stbx     r3, r4, r9
	addi     r9, r11, 0xa
	lwz      r4, 0xac(r30)
	stbx     r3, r4, r8
	addi     r8, r11, 0xb
	lwz      r4, 0xac(r30)
	stbx     r3, r4, r7
	addi     r7, r11, 0xc
	lwz      r4, 0xac(r30)
	stbx     r3, r4, r6
	addi     r6, r11, 0xd
	lwz      r4, 0xac(r30)
	stbx     r3, r4, r5
	addi     r5, r11, 0xe
	lwz      r4, 0xac(r30)
	stbx     r3, r4, r0
	addi     r0, r11, 0xf
	addi     r11, r11, 8
	lwz      r4, 0xac(r30)
	stbx     r3, r4, r11
	addi     r11, r11, 8
	lwz      r4, 0xac(r30)
	stbx     r3, r4, r10
	lwz      r4, 0xac(r30)
	stbx     r3, r4, r9
	lwz      r4, 0xac(r30)
	stbx     r3, r4, r8
	lwz      r4, 0xac(r30)
	stbx     r3, r4, r7
	lwz      r4, 0xac(r30)
	stbx     r3, r4, r6
	lwz      r4, 0xac(r30)
	stbx     r3, r4, r5
	lwz      r4, 0xac(r30)
	stbx     r3, r4, r0
	bdnz     lbl_8043C82C
	li       r0, 2
	mtctr    r0

lbl_8043C8FC:
	lwz      r4, 0xb0(r30)
	li       r12, 0
	addi     r0, r3, 1
	addi     r10, r3, 2
	stbx     r12, r4, r3
	addi     r9, r3, 3
	addi     r8, r3, 4
	addi     r7, r3, 5
	lwz      r11, 0xb0(r30)
	addi     r6, r3, 6
	addi     r5, r3, 7
	addi     r4, r3, 8
	stbx     r12, r11, r0
	addi     r0, r3, 9
	addi     r3, r3, 0xa
	lwz      r11, 0xb0(r30)
	stbx     r12, r11, r10
	lwz      r10, 0xb0(r30)
	stbx     r12, r10, r9
	lwz      r9, 0xb0(r30)
	stbx     r12, r9, r8
	lwz      r8, 0xb0(r30)
	stbx     r12, r8, r7
	lwz      r7, 0xb0(r30)
	stbx     r12, r7, r6
	lwz      r6, 0xb0(r30)
	stbx     r12, r6, r5
	lwz      r5, 0xb0(r30)
	stbx     r12, r5, r4
	lwz      r4, 0xb0(r30)
	stbx     r12, r4, r0
	bdnz     lbl_8043C8FC
	lfs      f0, lbl_805208C0@sda21(r2)
	mr       r3, r30
	li       r4, 0
	stfs     f0, 0xb4(r30)
	bl       reset___Q28JMessage10TProcessorFPCc
	srwi     r4, r31, 0x10
	mr       r3, r30
	clrlwi   r5, r31, 0x10
	bl       setBegin_messageCode__Q28JMessage10TProcessorFUsUs
	mr       r3, r30
	li       r4, 0
	bl       process__Q28JMessage19TRenderingProcessorFPCc
	lwz      r0, 0x8c(r30)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_8043C9CC
	lbz      r0, 0xa4(r30)
	lfs      f0, 0x90(r30)
	lwz      r3, 0xa8(r30)
	slwi     r0, r0, 2
	stfsx    f0, r3, r0

lbl_8043C9CC:
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x70(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x8c(r30)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_8043CA1C
	li       r4, 0
	b        lbl_8043CA10

lbl_8043C9F4:
	lwz      r3, 0xac(r30)
	lbzx     r0, r3, r4
	cmplwi   r0, 0
	bne      lbl_8043CA0C
	lbz      r0, 0xa5(r30)
	stbx     r0, r3, r4

lbl_8043CA0C:
	addi     r4, r4, 1

lbl_8043CA10:
	lbz      r0, 0xa4(r30)
	cmpw     r4, r0
	blt      lbl_8043C9F4

lbl_8043CA1C:
	lwz      r0, 0x8c(r30)
	rlwinm.  r0, r0, 0, 3, 3
	bne      lbl_8043CA8C
	lbz      r0, 0xa6(r30)
	cmplwi   r0, 0xa
	blt      lbl_8043CA50
	lis      r3, lbl_8049ABE8@ha
	lis      r5, lbl_8049AC00@ha
	addi     r3, r3, lbl_8049ABE8@l
	li       r4, 0x625
	addi     r5, r5, lbl_8049AC00@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8043CA50:
	lbz      r0, 0xa6(r30)
	lbz      r4, 0xa4(r30)
	lwz      r3, 0xb0(r30)
	slwi     r0, r0, 1
	addi     r4, r4, -1
	add      r3, r3, r0
	stb      r4, 1(r3)
	lbz      r0, 0xa6(r30)
	cmplwi   r0, 9
	bge      lbl_8043CA8C
	lwz      r3, 0xb0(r30)
	rlwinm   r0, r0, 1, 0x17, 0x1e
	lbz      r4, 0xa4(r30)
	add      r3, r3, r0
	stb      r4, 2(r3)

lbl_8043CA8C:
	lwz      r0, 0x8c(r30)
	rlwinm   r0, r0, 0, 0, 0x1e
	stw      r0, 0x8c(r30)
	lfs      f0, 0x94(r30)
	stfs     f0, 0xb4(r30)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/**
 * @note Address: 0x8043CAB8
 * @note Size: 0x3AC
 */
void TRenderingProcessor::preProcCenteringID(uint p1, uint p2)
{
	preProcCenteringPre();
	setBegin_messageID(p1, p2, nullptr);
	preProcCenteringPost();
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	li       r10, 0
	lfs      f0, lbl_805208C0@sda21(r2)
	stw      r0, 0x24(r1)
	li       r0, 4
	stw      r31, 0x1c(r1)
	mr       r31, r5
	stw      r30, 0x18(r1)
	mr       r30, r4
	stw      r29, 0x14(r1)
	mr       r29, r3
	lwz      r3, 0x8c(r3)
	ori      r3, r3, 1
	stw      r3, 0x8c(r29)
	stb      r10, 0xa4(r29)
	mtctr    r0

lbl_8043CAFC:
	lwz      r3, 0xa8(r29)
	addi     r9, r10, 4
	addi     r8, r10, 8
	addi     r7, r10, 0xc
	stfsx    f0, r3, r10
	addi     r6, r10, 0x10
	addi     r5, r10, 0x14
	addi     r4, r10, 0x18
	lwz      r3, 0xa8(r29)
	addi     r0, r10, 0x1c
	stfsx    f0, r3, r9
	addi     r9, r10, 0x24
	lwz      r3, 0xa8(r29)
	stfsx    f0, r3, r8
	addi     r8, r10, 0x28
	lwz      r3, 0xa8(r29)
	stfsx    f0, r3, r7
	addi     r7, r10, 0x2c
	lwz      r3, 0xa8(r29)
	stfsx    f0, r3, r6
	addi     r6, r10, 0x30
	lwz      r3, 0xa8(r29)
	stfsx    f0, r3, r5
	addi     r5, r10, 0x34
	lwz      r3, 0xa8(r29)
	stfsx    f0, r3, r4
	addi     r4, r10, 0x38
	lwz      r3, 0xa8(r29)
	stfsx    f0, r3, r0
	addi     r0, r10, 0x3c
	addi     r10, r10, 0x20
	lwz      r3, 0xa8(r29)
	stfsx    f0, r3, r10
	addi     r10, r10, 0x20
	lwz      r3, 0xa8(r29)
	stfsx    f0, r3, r9
	lwz      r3, 0xa8(r29)
	stfsx    f0, r3, r8
	lwz      r3, 0xa8(r29)
	stfsx    f0, r3, r7
	lwz      r3, 0xa8(r29)
	stfsx    f0, r3, r6
	lwz      r3, 0xa8(r29)
	stfsx    f0, r3, r5
	lwz      r3, 0xa8(r29)
	stfsx    f0, r3, r4
	lwz      r3, 0xa8(r29)
	stfsx    f0, r3, r0
	bdnz     lbl_8043CAFC
	li       r11, 0
	li       r0, 4
	stb      r11, 0xa5(r29)
	mtctr    r0

lbl_8043CBD0:
	lwz      r4, 0xac(r29)
	li       r3, 0
	addi     r10, r11, 1
	addi     r9, r11, 2
	stbx     r3, r4, r11
	addi     r8, r11, 3
	addi     r7, r11, 4
	addi     r6, r11, 5
	lwz      r4, 0xac(r29)
	addi     r5, r11, 6
	addi     r0, r11, 7
	stbx     r3, r4, r10
	addi     r10, r11, 9
	lwz      r4, 0xac(r29)
	stbx     r3, r4, r9
	addi     r9, r11, 0xa
	lwz      r4, 0xac(r29)
	stbx     r3, r4, r8
	addi     r8, r11, 0xb
	lwz      r4, 0xac(r29)
	stbx     r3, r4, r7
	addi     r7, r11, 0xc
	lwz      r4, 0xac(r29)
	stbx     r3, r4, r6
	addi     r6, r11, 0xd
	lwz      r4, 0xac(r29)
	stbx     r3, r4, r5
	addi     r5, r11, 0xe
	lwz      r4, 0xac(r29)
	stbx     r3, r4, r0
	addi     r0, r11, 0xf
	addi     r11, r11, 8
	lwz      r4, 0xac(r29)
	stbx     r3, r4, r11
	addi     r11, r11, 8
	lwz      r4, 0xac(r29)
	stbx     r3, r4, r10
	lwz      r4, 0xac(r29)
	stbx     r3, r4, r9
	lwz      r4, 0xac(r29)
	stbx     r3, r4, r8
	lwz      r4, 0xac(r29)
	stbx     r3, r4, r7
	lwz      r4, 0xac(r29)
	stbx     r3, r4, r6
	lwz      r4, 0xac(r29)
	stbx     r3, r4, r5
	lwz      r4, 0xac(r29)
	stbx     r3, r4, r0
	bdnz     lbl_8043CBD0
	li       r0, 2
	mtctr    r0

lbl_8043CCA0:
	lwz      r4, 0xb0(r29)
	li       r12, 0
	addi     r0, r3, 1
	addi     r10, r3, 2
	stbx     r12, r4, r3
	addi     r9, r3, 3
	addi     r8, r3, 4
	addi     r7, r3, 5
	lwz      r11, 0xb0(r29)
	addi     r6, r3, 6
	addi     r5, r3, 7
	addi     r4, r3, 8
	stbx     r12, r11, r0
	addi     r0, r3, 9
	addi     r3, r3, 0xa
	lwz      r11, 0xb0(r29)
	stbx     r12, r11, r10
	lwz      r10, 0xb0(r29)
	stbx     r12, r10, r9
	lwz      r9, 0xb0(r29)
	stbx     r12, r9, r8
	lwz      r8, 0xb0(r29)
	stbx     r12, r8, r7
	lwz      r7, 0xb0(r29)
	stbx     r12, r7, r6
	lwz      r6, 0xb0(r29)
	stbx     r12, r6, r5
	lwz      r5, 0xb0(r29)
	stbx     r12, r5, r4
	lwz      r4, 0xb0(r29)
	stbx     r12, r4, r0
	bdnz     lbl_8043CCA0
	lfs      f0, lbl_805208C0@sda21(r2)
	mr       r3, r29
	li       r4, 0
	stfs     f0, 0xb4(r29)
	bl       reset___Q28JMessage10TProcessorFPCc
	mr       r3, r29
	mr       r4, r30
	mr       r5, r31
	li       r6, 0
	bl       setBegin_messageID__Q28JMessage10TProcessorFUlUlPb
	mr       r3, r29
	li       r4, 0
	bl       process__Q28JMessage19TRenderingProcessorFPCc
	lwz      r0, 0x8c(r29)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_8043CD74
	lbz      r0, 0xa4(r29)
	lfs      f0, 0x90(r29)
	lwz      r3, 0xa8(r29)
	slwi     r0, r0, 2
	stfsx    f0, r3, r0

lbl_8043CD74:
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0x70(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x8c(r29)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_8043CDC4
	li       r4, 0
	b        lbl_8043CDB8

lbl_8043CD9C:
	lwz      r3, 0xac(r29)
	lbzx     r0, r3, r4
	cmplwi   r0, 0
	bne      lbl_8043CDB4
	lbz      r0, 0xa5(r29)
	stbx     r0, r3, r4

lbl_8043CDB4:
	addi     r4, r4, 1

lbl_8043CDB8:
	lbz      r0, 0xa4(r29)
	cmpw     r4, r0
	blt      lbl_8043CD9C

lbl_8043CDC4:
	lwz      r0, 0x8c(r29)
	rlwinm.  r0, r0, 0, 3, 3
	bne      lbl_8043CE34
	lbz      r0, 0xa6(r29)
	cmplwi   r0, 0xa
	blt      lbl_8043CDF8
	lis      r3, lbl_8049ABE8@ha
	lis      r5, lbl_8049AC00@ha
	addi     r3, r3, lbl_8049ABE8@l
	li       r4, 0x625
	addi     r5, r5, lbl_8049AC00@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8043CDF8:
	lbz      r0, 0xa6(r29)
	lbz      r4, 0xa4(r29)
	lwz      r3, 0xb0(r29)
	slwi     r0, r0, 1
	addi     r4, r4, -1
	add      r3, r3, r0
	stb      r4, 1(r3)
	lbz      r0, 0xa6(r29)
	cmplwi   r0, 9
	bge      lbl_8043CE34
	lwz      r3, 0xb0(r29)
	rlwinm   r0, r0, 1, 0x17, 0x1e
	lbz      r4, 0xa4(r29)
	add      r3, r3, r0
	stb      r4, 2(r3)

lbl_8043CE34:
	lwz      r0, 0x8c(r29)
	rlwinm   r0, r0, 0, 0, 0x1e
	stw      r0, 0x8c(r29)
	lfs      f0, 0x94(r29)
	stfs     f0, 0xb4(r29)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/**
 * @note Address: 0x8043CE64
 * @note Size: 0x8
 */
void TRenderingProcessor::setFont(JUTFont* font) { mMainFont = font; }

/**
 * @note Address: 0x8043CE6C
 * @note Size: 0x44C
 */
void TRenderingProcessor::setTextBoxInfo(J2DPane* pane)
{
	P2ASSERTLINE(1687, pane->getTypeID() == PANETYPE_TextBox);

	if (pane->getTypeID() != PANETYPE_TextBox) {
		return;
	}

	J2DTextBoxEx* text = static_cast<J2DTextBoxEx*>(pane);

	JUtility::TColor black     = text->getBlack();
	JUtility::TColor white     = text->getWhite();
	JUtility::TColor chrcolor  = text->mCharColor;
	JUtility::TColor gradcolor = text->mGradientColor;

	_78 = (f32)text->mColorAlpha / 255.0f;
	_60 = black;
	_5C = white;
	_D4 = chrcolor;
	_D8 = gradcolor;
	_CC = white;
	_D0 = black;

	_BC            = text->mCharSpacing;
	_C4            = text->mCharSpacing;
	_C0            = text->mLineSpacing;
	mLineHeight    = text->mLineSpacing;
	mTextBoxWidth  = text->getWidth();
	mTextBoxHeight = text->getHeight();

	mFontWidth  = text->mFontSize.x / mMainFont->getWidth();
	mFontHeight = text->mFontSize.y / mMainFont->getHeight();

	/*
stwu     r1, -0x90(r1)
mflr     r0
stw      r0, 0x94(r1)
stfd     f31, 0x80(r1)
psq_st   f31, 136(r1), 0, qr0
stfd     f30, 0x70(r1)
psq_st   f30, 120(r1), 0, qr0
stw      r31, 0x6c(r1)
stw      r30, 0x68(r1)
stw      r29, 0x64(r1)
stw      r28, 0x60(r1)
mr       r31, r4
mr       r30, r3
mr       r3, r31
lwz      r12, 0(r31)
lwz      r12, 0xc(r12)
mtctr    r12
bctrl
clrlwi   r0, r3, 0x10
cmplwi   r0, 0x13
beq      lbl_8043CEDC
lis      r3, lbl_8049ABE8@ha
lis      r5, lbl_8049AC00@ha
addi     r3, r3, lbl_8049ABE8@l
li       r4, 0x697
addi     r5, r5, lbl_8049AC00@l
crclr    6
bl       panic_f__12JUTExceptionFPCciPCce

lbl_8043CEDC:
mr       r3, r31
lwz      r12, 0(r31)
lwz      r12, 0xc(r12)
mtctr    r12
bctrl
clrlwi   r0, r3, 0x10
cmplwi   r0, 0x13
bne      lbl_8043D288
mr       r4, r31
li       r28, -1
lwz      r12, 0(r31)
addi     r3, r1, 0x34
stw      r28, 0x40(r1)
lbz      r11, 0x104(r31)
lbz      r10, 0x105(r31)
lbz      r9, 0x106(r31)
lbz      r8, 0x107(r31)
stw      r28, 0x44(r1)
lbz      r7, 0x108(r31)
lbz      r6, 0x109(r31)
lbz      r5, 0x10a(r31)
lbz      r0, 0x10b(r31)
lwz      r12, 0xb0(r12)
stb      r11, 0x40(r1)
stb      r10, 0x41(r1)
stb      r9, 0x42(r1)
stb      r8, 0x43(r1)
stb      r7, 0x44(r1)
stb      r6, 0x45(r1)
stb      r5, 0x46(r1)
stb      r0, 0x47(r1)
stw      r28, 0x3c(r1)
stw      r28, 0x38(r1)
mtctr    r12
bctrl
mr       r4, r31
lbz      r7, 0x34(r1)
lwz      r12, 0(r31)
addi     r3, r1, 0x30
lbz      r6, 0x35(r1)
lbz      r5, 0x36(r1)
lbz      r0, 0x37(r1)
lwz      r12, 0xb4(r12)
stb      r7, 0x38(r1)
stb      r6, 0x39(r1)
stb      r5, 0x3a(r1)
stb      r0, 0x3b(r1)
mtctr    r12
bctrl
lbz      r3, 0xb3(r31)
lis      r0, 0x4330
lwz      r28, 0x38(r1)
stw      r3, 0x4c(r1)
lwz      r29, 0x40(r1)
stw      r0, 0x48(r1)
lfd      f2, lbl_805208D8@sda21(r2)
lfd      f1, 0x48(r1)
lfs      f0, lbl_805208E4@sda21(r2)
fsubs    f1, f1, f2
stw      r28, 0x18(r1)
lwz      r12, 0x44(r1)
stw      r29, 0x14(r1)
fdivs    f0, f1, f0
lbz      r5, 0x30(r1)
stw      r12, 0x10(r1)
lbz      r4, 0x31(r1)
stw      r28, 0xc(r1)
lbz      r3, 0x32(r1)
lbz      r0, 0x33(r1)
stb      r5, 0x3c(r1)
lbz      r5, 0x18(r1)
stb      r4, 0x3d(r1)
lbz      r4, 0x19(r1)
stb      r3, 0x3e(r1)
lbz      r3, 0x1a(r1)
stb      r0, 0x3f(r1)
lbz      r10, 0x1b(r1)
lwz      r0, 0x3c(r1)
stfs     f0, 0x78(r30)
lbz      r9, 0x14(r1)
stw      r0, 0x1c(r1)
lbz      r8, 0x15(r1)
lbz      r7, 0x1c(r1)
lbz      r6, 0x1d(r1)
stb      r7, 0x60(r30)
lbz      r7, 0x1e(r1)
stb      r6, 0x61(r30)
lbz      r6, 0x1f(r1)
stb      r7, 0x62(r30)
lbz      r7, 0x16(r1)
stb      r6, 0x63(r30)
lbz      r6, 0x17(r1)
stb      r5, 0x5c(r30)
lbz      r5, 0x10(r1)
stb      r4, 0x5d(r30)
lbz      r4, 0x11(r1)
stb      r3, 0x5e(r30)
lbz      r3, 0x12(r1)
stb      r10, 0x5f(r30)
lbz      r11, 0x13(r1)
stb      r9, 0xd4(r30)
lbz      r10, 0xc(r1)
stb      r8, 0xd5(r30)
lbz      r9, 0xd(r1)
stw      r0, 8(r1)
lbz      r8, 0xe(r1)
stb      r7, 0xd6(r30)
lbz      r7, 0xf(r1)
stb      r6, 0xd7(r30)
lbz      r6, 8(r1)
stb      r5, 0xd8(r30)
lbz      r5, 9(r1)
stb      r4, 0xd9(r30)
lbz      r4, 0xa(r1)
stb      r3, 0xda(r30)
lbz      r3, 0xb(r1)
stb      r11, 0xdb(r30)
stb      r10, 0xcc(r30)
stb      r9, 0xcd(r30)
stb      r8, 0xce(r30)
stb      r7, 0xcf(r30)
stb      r6, 0xd0(r30)
stb      r5, 0xd1(r30)
stb      r4, 0xd2(r30)
stb      r3, 0xd3(r30)
lfs      f0, 0x114(r31)
stw      r29, 0x2c(r1)
stfs     f0, 0xbc(r30)
stfs     f0, 0xc4(r30)
lfs      f0, 0x118(r31)
stw      r12, 0x28(r1)
stfs     f0, 0xc0(r30)
stfs     f0, 0xc8(r30)
lfs      f1, 0x28(r31)
lfs      f0, 0x20(r31)
stw      r28, 0x24(r1)
fsubs    f0, f1, f0
stw      r0, 0x20(r1)
stfs     f0, 0x38(r30)
lfs      f1, 0x2c(r31)
lfs      f0, 0x24(r31)
fsubs    f0, f1, f0
stfs     f0, 0x3c(r30)
lwz      r3, 0x4c(r30)
lfs      f31, 0x11c(r31)
lwz      r12, 0(r3)
lfs      f30, 0x120(r31)
lwz      r12, 0x28(r12)
mtctr    r12
bctrl
xoris    r3, r3, 0x8000
lis      r0, 0x4330
stw      r3, 0x54(r1)
lfd      f1, lbl_805208D0@sda21(r2)
stw      r0, 0x50(r1)
lfd      f0, 0x50(r1)
fsubs    f0, f0, f1
fdivs    f0, f31, f0
stfs     f0, 0xe8(r30)
lwz      r3, 0x4c(r30)
lwz      r12, 0(r3)
lwz      r12, 0x24(r12)
mtctr    r12
bctrl
xoris    r3, r3, 0x8000
lis      r0, 0x4330
stw      r3, 0x5c(r1)
lfd      f1, lbl_805208D0@sda21(r2)
stw      r0, 0x58(r1)
lfd      f0, 0x58(r1)
fsubs    f0, f0, f1
fdivs    f0, f30, f0
stfs     f0, 0xec(r30)
lbz      r0, 0x130(r31)
rlwinm   r0, r0, 0x1e, 0x1e, 0x1f
cmpwi    r0, 1
beq      lbl_8043D1F4
bge      lbl_8043D1B0
cmpwi    r0, 0
bge      lbl_8043D1BC
b        lbl_8043D20C

lbl_8043D1B0:
cmpwi    r0, 3
bge      lbl_8043D20C
b        lbl_8043D1D8

lbl_8043D1BC:
lwz      r0, 0x8c(r30)
rlwinm   r0, r0, 0, 0x1c, 0x18
stw      r0, 0x8c(r30)
lwz      r0, 0x8c(r30)
ori      r0, r0, 0x20
stw      r0, 0x8c(r30)
b        lbl_8043D20C

lbl_8043D1D8:
lwz      r0, 0x8c(r30)
rlwinm   r0, r0, 0, 0x1c, 0x18
stw      r0, 0x8c(r30)
lwz      r0, 0x8c(r30)
ori      r0, r0, 0x10
stw      r0, 0x8c(r30)
b        lbl_8043D20C

lbl_8043D1F4:
lwz      r0, 0x8c(r30)
rlwinm   r0, r0, 0, 0x1c, 0x18
stw      r0, 0x8c(r30)
lwz      r0, 0x8c(r30)
ori      r0, r0, 0x40
stw      r0, 0x8c(r30)

lbl_8043D20C:
lbz      r0, 0x130(r31)
clrlwi   r0, r0, 0x1e
cmpwi    r0, 1
beq      lbl_8043D254
bge      lbl_8043D22C
cmpwi    r0, 0
bge      lbl_8043D238
b        lbl_8043D288

lbl_8043D22C:
cmpwi    r0, 3
bge      lbl_8043D288
b        lbl_8043D270

lbl_8043D238:
lwz      r0, 0x8c(r30)
rlwinm   r0, r0, 0, 0x18, 0x14
stw      r0, 0x8c(r30)
lwz      r0, 0x8c(r30)
ori      r0, r0, 0x200
stw      r0, 0x8c(r30)
b        lbl_8043D288

lbl_8043D254:
lwz      r0, 0x8c(r30)
rlwinm   r0, r0, 0, 0x18, 0x14
stw      r0, 0x8c(r30)
lwz      r0, 0x8c(r30)
ori      r0, r0, 0x400
stw      r0, 0x8c(r30)
b        lbl_8043D288

lbl_8043D270:
lwz      r0, 0x8c(r30)
rlwinm   r0, r0, 0, 0x18, 0x14
stw      r0, 0x8c(r30)
lwz      r0, 0x8c(r30)
ori      r0, r0, 0x100
stw      r0, 0x8c(r30)

lbl_8043D288:
psq_l    f31, 136(r1), 0, qr0
lfd      f31, 0x80(r1)
psq_l    f30, 120(r1), 0, qr0
lfd      f30, 0x70(r1)
lwz      r31, 0x6c(r1)
lwz      r30, 0x68(r1)
lwz      r29, 0x64(r1)
lwz      r0, 0x94(r1)
lwz      r28, 0x60(r1)
mtlr     r0
addi     r1, r1, 0x90
blr
*/
}

} // namespace P2JME
