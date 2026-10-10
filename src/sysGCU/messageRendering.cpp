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
	{ { 255, 255, 255, 255 }, { 0, 166, 0, 0 } },       { { 255, 255, 255, 255 }, { 255, 0, 0, 0 } },
	{ { 0, 0, 0, 255 }, { 255, 255, 0, 0 } },           { { 0, 0, 0, 255 }, { 200, 200, 200, 0 } },
	{ { 0, 0, 0, 255 }, { 200, 200, 200, 0 } },         { { 0, 0, 255, 255 }, { 255, 255, 255, 0 } },
	{ { 0, 0, 0, 255 }, { 200, 200, 200, 0 } },         { { 0, 0, 0, 255 }, { 200, 200, 200, 0 } },
	{ { 225, 225, 225, 255 }, { 136, 136, 136, 255 } }, { { 225, 225, 225, 255 }, { 136, 136, 136, 255 } },
	{ { 225, 225, 225, 255 }, { 136, 136, 136, 255 } },
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
    , mXOffset(0.0f)
    , mYOffset(0.0f)
    , mImageColorA(0)
    , mImageColorB(0xFFFFFFFF)
    , mColorData1(255, 255, 255, 255)
    , mColorData2(255, 255, 255, 255)
    , mColorData3(255, 255, 255, 255)
    , mColorData4(255, 255, 255, 255)
    , mColorData5(255, 255, 255, 255)
    , mBaseAlphaModifier(1.0f)
    , mMesgBounds(1.0f, 1.0f, 1.0f, 1.0f)
    , mLocate(0.0f, 0.0f, 0.0f, 0.0f)
    , mCurrLine(0)
    , mParagraphNum(0)
    , mPageInfoNum(0)
    , mActiveCharWidth(0.0f)
    , mActiveLineHeight(42.0f)
    , mCharacterWidth(0.0f)
    , mLineHeight(42.0f)
    , mDefaultBlack(0, 0, 0, 0)
    , mDefaultWhite(255, 255, 255, 255)
    , mDefaultCharColor(255, 255, 255, 255)
    , mDefaultGradColor(255, 255, 255, 255)
    , mFontWidthAdjusted(1.0f)
    , mFontHeightAdjusted(1.0f)
    , mFontWidth(1.0f)
    , mFontHeight(1.0f)
    , mDoDrawRuby(false)
    , mRubyWidthModifier(0.5f)
{
	mFlags.clear();
	mFlags.unset(TProcFlag_Unk4 | TProcFlag_Unk5 | TProcFlag_Unk6);
	mFlags.set(TProcFlag_Unk4);
	mFlags.unset(TProcFlag_Unk8 | TProcFlag_Unk9 | TProcFlag_Unk10);
	mFlags.set(TProcFlag_Unk8);

	mLineWidths = new f32[0x40];
	resetLineWidth();
	mOnePageLines = new u8[0x40];
	resetOnePageLine();
	mRubyBuffer     = P2JME::sRubyDataBuffer;
	mLineWidthInfos = new LineWidthInfo[10];
}

/**
 * @note Address: N/A
 * @note Size: 0x7C
 */
void TRenderingProcessor::setDrawLocateX()
{
	if (mFlags.isSet(TProcFlag_Unk0)) {
		mLocate.i.x = mLocate.f.x;
		return;
	}

	if (mFlags.isSet(TProcFlag_Unk5)) {
		mLocate.i.x = 0.5f * (mTextBoxWidth - mLineWidths[mCurrLine]);
		return;
	}

	if (mFlags.isSet(TProcFlag_Unk6)) {
		mLocate.i.x = (mTextBoxWidth - mLineWidths[mCurrLine]);
		return;
	}

	mLocate.i.x = mLocate.f.x;
}

/**
 * @note Address: N/A
 * @note Size: 0x338
 */
void TRenderingProcessor::setDrawLocateY()
{
	if (mFlags.isSet(TProcFlag_Unk0)) {
		mLocate.i.y = (mLineHeight * getParagraphNum())
		            + ((mTextBoxHeight * mPageInfoNum) + ((mFontHeight * mMainFont->getAscent()) + mLocate.f.y));
		return;
	}

	if (mFlags.isSet(TProcFlag_Unk9)) {
		LineWidthInfo* lineWidthPtr = &mLineWidthInfos[mPageInfoNum];
		u8 pageInfoNum              = mPageInfoNum;
		f32 totalFontHeight         = 0.0f;

		for (int i = lineWidthPtr->mStartIndex; i <= lineWidthPtr->mEndIndex; i++) {
			if (mLineWidths[i] > 0.0f) {
				totalFontHeight += mLineHeight;
			}
		}

		f32 height = 0.5f * (mTextBoxHeight - totalFontHeight);
		u8 paraNum = mParagraphNum;
		f32 x = ((mTextBoxHeight * pageInfoNum)
		         + (0.5f * (mLineHeight - mFontHeight * mMainFont->getHeight()) + (mFontHeight * mMainFont->getAscent() + mLocate.f.y)));
		f32 y = (mLineHeight * paraNum + height);
		mLocate.i.y = y + x;

		return;
	}

	if (mFlags.isSet(TProcFlag_Unk10)) {
		f32 pageY   = f32(mTextBoxHeight * (1.0f + mPageInfoNum)) + mFontHeight * (-mMainFont->getDescent());
		mLocate.i.y = pageY - (mLineHeight * (mOnePageLines[mCurrLine] - (mParagraphNum + 1)));

		return;
	}

	mLocate.i.y
	    = (mLineHeight * getParagraphNum()) + ((mTextBoxHeight * mPageInfoNum) + ((mFontHeight * mMainFont->getAscent()) + mLocate.f.y));
}

/**
 * @note Address: 0x80439658
 * @note Size: 0xE8
 */
void TRenderingProcessor::do_begin(const void* p1, char const* p2)
{
	mFontWidthAdjusted   = mFontWidth;
	mFontHeightAdjusted  = mFontHeight;
	mCurrColorIndex      = 0;
	mSecondaryColorIndex = 0;
	mCharacterNum        = 0;
	mInfoIndex           = 0;
	initRuby();
	f32 wid          = static_cast<const char*>(p1)[4];
	mActiveCharWidth = wid;
	mCharacterWidth  = wid;
	mLineHeight      = mActiveLineHeight;
	mFlags.unset(TProcFlag_PageFinished);
	mPageInfoNum  = 0;
	mCurrLine     = 0;
	mParagraphNum = 0;
	setDrawLocate();
	mMatrixType = 0;
	mMainFont->setGX(mDefaultBlack, mDefaultWhite);
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
#if defined(VERSION_PAL)
	P2ASSERTLINE(512, mCurrLine < 64);
#else
	P2ASSERTLINE(509, mCurrLine < 64);
#endif
	mParagraphNum++;
	if (mFlags.isSet(TProcFlag_PageFinished) != 0) {
		setPageInfo();
		setOnePageLine();
		mParagraphNum = 0;
#if defined(VERSION_PAL)
		incPageInfoNum();
#else
		mPageInfoNum++;
		checkPageInfoNum();
#endif
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
		if (mCurrColorIndex == 0) {
			mColorData1 = mDefaultCharColor;
		} else {
			u32 f0                       = mCurrColorIndex;
			JUtility::TColor* colorArray = (JUtility::TColor*)getResourceContainer()->getResourceColor()->mBlock.getRaw();
			mColorData1.set(colorArray[f0 + 3]);
		}

		mColorData1.a = f32(mColorData1.a) * mBaseAlphaModifier;

		if (mSecondaryColorIndex == 0) {
			mColorData2 = mDefaultGradColor;
		} else {
			u32 f1                       = mSecondaryColorIndex;
			JUtility::TColor* colorArray = (JUtility::TColor*)getResourceContainer()->getResourceColor()->mBlock.getRaw();
			mColorData2.set(colorArray[f1 + 3]);
		}

		mColorData2.a = f32(mColorData2.a) * mBaseAlphaModifier;

		f32 xScale = mFontWidthAdjusted * (f32)mMainFont->getWidth();
		if (mFlags.isSet(TProcFlag_Unk0)) {
			mLocate.i.x += calcWidth(mMainFont, character, xScale, true);
		} else {
			mLocate.i.x += doDrawLetter(mLocate.i.x + mXOffset, mLocate.i.y + mYOffset, xScale,
			                            mFontHeightAdjusted * (f32)mMainFont->getHeight(), character, true);
		}
		mLocate.i.x += mCharacterWidth;
		mInfoIndex++;
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
	mSelectSeparateNum = 0;
	mLocate.i.x        = mLocate.f.x + mMainFont->getWidth() * 3;
	mLocate.i.y        = mLocate.f.y + (mMainFont->getHeight() * int(mSelectSeparateNum + 3));
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
	mSelectSeparateNum++;
	mLocate.i.x = mLocate.f.x + mMainFont->getWidth() * 3;
	mLocate.i.y = mLocate.f.y + (mMainFont->getHeight() * int(mSelectSeparateNum + 3));
}

/**
 * @note Address: 0x8043A0C8
 * @note Size: 0x174
 */
bool TRenderingProcessor::do_tag(u32 type, const void* a1, u32 a2)
{
	return TRenderingProcessorBase::do_tag(type, a1, a2);
}

/**
 * @note Address: 0x8043A23C
 * @note Size: 0x8
 */
bool TRenderingProcessor::do_systemTagCode(u16, const void*, u32)
{
	return false;
}

/**
 * @note Address: 0x8043A244
 * @note Size: 0x2C
 */
bool TRenderingProcessor::tagColor(const void* p1, u32 p2)
{
	u8 v1 = *static_cast<const char*>(p1);
	if (v1 == 0) {
		mCurrColorIndex      = v1;
		mSecondaryColorIndex = v1;
	} else {
		mCurrColorIndex      = v1;
		mSecondaryColorIndex = v1 + 1;
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
	if (sys->mPlayData->mIsRubyFont && !mFlags.isSet(TProcFlag_Unk0)) {

#if defined(VERSION_PAL)
		P2ASSERTLINE(842, size < 33);
#else
		P2ASSERTLINE(839, size < 33);
#endif
		strncpy(mRubyBuffer, (char*)data + 1, size - 1);

		mRubyBuffer[size - 1] = 0;

		mDoDrawRuby            = true;
		mRubyStartCharIndex    = mCharacterNum - 1;
		mRubyCurrentStringSize = ((u8*)data)[0];
		mRubyBufferCurrentSize = size - 1;

		mRubyCurrentXPos = mLocate.i.x;
		f32 y            = mFontHeightAdjusted * mMainFont->getAscent();
		mRubyCurrentYPos = mLocate.i.y - int(ROUND_F32_TO_U8(y));
	}

	return true;
}

/**
 * @note Address: 0x8043A410
 * @note Size: 0x8
 */
bool TRenderingProcessor::tagFont(const void*, u32)
{
	return true;
}

/**
 * @note Address: 0x8043A418
 * @note Size: 0x24
 */
bool TRenderingProcessor::tagColorEX(u16 id, const void* p1, u32)
{
	u8* data = (u8*)p1;
	switch (id) {
	case 0:
		mCurrColorIndex      = data[0];
		mSecondaryColorIndex = data[1];
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
		mCharacterWidth = mActiveCharWidth;
		break;
	case 1:
		mCharacterWidth = *(char*)data;
		break;
	case 2:
		mLineHeight = mActiveLineHeight;
		setDrawLocateY();
		break;
	case 3:
		mLineHeight = *(char*)data;
		setDrawLocateY();
		break;
	case 4:
		mFontHeightAdjusted = mFontHeight;
		break;
	case 5:
		mFontHeightAdjusted = (f32)(*(u16*)data) / 100.0f;
		break;
	case 6:
		mFontWidthAdjusted = mFontWidth;
		break;
	case 7:
		mFontWidthAdjusted = (f32)(*(u16*)data) / 100.0f;
		break;
	}

	return true;
}

/**
 * @note Address: 0x8043ABD8
 * @note Size: 0x1C
 */
void TRenderingProcessor::initRuby()
{
	mDoDrawRuby            = false;
	mRubyStartCharIndex    = 0;
	mRubyCurrentStringSize = 0;
	*mRubyBuffer           = 0;
}

/**
 * @note Address: 0x8043ABF4
 * @note Size: 0x360
 */
void TRenderingProcessor::drawRuby()
{
	if (!mDoDrawRuby) {
		return;
	}

	if (mFlags.isSet(TProcFlag_Unk0)) {
		mDoDrawRuby = false;
		return;
	}

	f32 height = mFontHeightAdjusted * f32(mMainFont->getAscent());
	f32 scale  = mLocate.i.y - (int)(f32(ROUND_F32_TO_U8(height)));
	if (mRubyCurrentYPos > scale) {
		mRubyCurrentYPos = scale;
	}

	if (mCharacterNum != (int)(mRubyStartCharIndex + mRubyCurrentStringSize)) {
		return;
	}

	f32 val31 = mRubyWidthModifier;
	f32 val30 = val31 * f32(mRubyFont->getWidth());
	int msgBuffer[33];
	f32 val28 = 0.0f;
	f32 val27 = (mLocate.i.x - mCharacterWidth) - mRubyCurrentXPos;

	int i;
	int msgLen;
	for (msgLen = 0, i = 0; i < mRubyBufferCurrentSize; msgLen++, i++) {
		u8 c     = (u8)mRubyBuffer[i];
		int byte = c;
		if (mRubyFont->isLeadByte(c)) {
			byte = ((byte << 8) & 0xFF00) | (*((u8*)mRubyBuffer + i++ + 1) & 0xFF);
		} else if (byte <= 255 && !isprintable(byte)) { // some ctype inline we don't have
			byte = '?';
		}

		val28 += calcWidth(mRubyFont, byte, val30, true);
		msgBuffer[msgLen] = byte;
	}

	f32 len   = f32(msgLen + 1);
	f32 val29 = (val27 - val28) / len;
	if (val29 < mCharacterWidth * val31) {
		val29 = mCharacterWidth * val31;
	}

	mRubyCurrentXPos = val29 + (0.5f * (val27 - (val29 * len + val28)) + mRubyCurrentXPos);

	for (i = 0; i < msgLen; i++) {
		mRubyCurrentXPos += doDrawRuby(mRubyCurrentXPos + mXOffset, mRubyCurrentYPos + mYOffset, val30, val31 * f32(mRubyFont->getHeight()),
		                               msgBuffer[i], true);
		mRubyCurrentXPos += val29;
		mInfoIndex++;
	}
	mDoDrawRuby = false;
}

/**
 * @note Address: 0x8043AF54
 * @note Size: 0x438
 */
bool TRenderingProcessor::tagImage(u16 p1, const void* p2, u32 p3)
{
#if defined(VERSION_PAL)
	P2ASSERTLINE(1117, p3 == 1);
#else
	P2ASSERTLINE(1114, p3 == 1);
#endif
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
#if defined(VERSION_PAL)
		P2ASSERTLINE(1137, false);
#else
		P2ASSERTLINE(1134, false);
#endif
		break;
	}

	if (gP2JMEMgr) {
		JUTTexture* img = gP2JMEMgr->getImage(ImageGroup::ID0, firstByte);
		if (img && !mFlags.isSet(TProcFlag_Unk0)) {
			JUtility::TColor color2(mImageColorB);
			JUtility::TColor color1(mImageColorA);
			switch (type) {
			case 0:
				GXColor* colorA = &cBtnIconColor[firstByte].a;
				GXColor* colorB = &cBtnIconColor[firstByte].b;
				if (firstByte < 8) {
					mImageColorB.set(colorA->r, colorA->g, colorA->b, colorA->a);
					mImageColorA.set(colorB->r, colorB->g, colorB->b, colorB->a);
					mColorData4.set(255, 255, 255, 255);
					mColorData5.set(205, 205, 205, 255);
				} else {
					mColorData4.set(colorA->r, colorA->g, colorA->b, colorA->a);
					mColorData5.set(colorB->r, colorB->g, colorB->b, colorB->a);
				}
				break;
			default:
				if (mCurrColorIndex == 0) {
					mColorData4 = mDefaultCharColor;
				} else {
					u32 f0                       = mCurrColorIndex;
					JUtility::TColor* colorArray = (JUtility::TColor*)getResourceContainer()->getResourceColor()->mBlock.getRaw();
					mColorData4.set(colorArray[f0 + 3]);
				}

				if (mSecondaryColorIndex == 0) {
					mColorData5 = mDefaultGradColor;
				} else {
					u32 f1                       = mSecondaryColorIndex;
					JUtility::TColor* colorArray = (JUtility::TColor*)getResourceContainer()->getResourceColor()->mBlock.getRaw();
					mColorData5.set(colorArray[f1 + 3]);
				}
				break;
			}

			mColorData4.a = f32(mColorData4.a) * mBaseAlphaModifier;
			mColorData5.a = f32(mColorData5.a) * mBaseAlphaModifier;
			doDrawImage(img, mLocate.i.x + mXOffset, mLocate.i.y + mYOffset, width, height);
			switch (type) {
			case 0:
				mImageColorB = color2;
				mImageColorA = color1;
				break;
			}
		}
	}

	mLocate.i.x += width;
	mInfoIndex++;
	mMainFont->setGX(mDefaultBlack, mDefaultWhite);
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

	*outColor = JUtility::TColor(u8(ROUND_F32_TO_U8(bottomRF)) & 0xFF, u8(ROUND_F32_TO_U8(bottomGF)) & 0xFF,
	                             u8(ROUND_F32_TO_U8(bottomBF)) & 0xFF, u8(ROUND_F32_TO_U8(bottomAF)) & 0xFF);
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
}

/**
 * @note Address: 0x8043B7CC
 * @note Size: 0x29C
 */
f32 TRenderingProcessor::doDrawRuby(f32 p1, f32 p2, f32 p3, f32 p4, int p5, bool p6)
{
	JUtility::TColor charColor;
	mColorData3.a = 255.0f * mBaseAlphaModifier;
	calcColorCoe(mColorData3, &charColor);
	mRubyFont->setCharColor(charColor);
	mRubyFont->drawChar_scale(p1, p2, p3, p4, p5, p6);
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
	if (mImageColorA.toUInt32() == 0 && mImageColorB.toUInt32() == -1) {
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
	GXSetTevColor(GX_TEVREG0, *(GXColor*)&mImageColorA);
	GXSetTevColor(GX_TEVREG1, *(GXColor*)&mImageColorB);
	GXSetTevColorIn(GX_TEVSTAGE0, GX_CC_C0, GX_CC_C1, GX_CC_TEXC, GX_CC_ZERO);
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
	f32 a = p4;
	f32 b = p5;
	img->load(GX_TEXMAP0);

	p3 = mFontHeightAdjusted * f32(mMainFont->getDescent()) + p3;
	a  = p2 + a;
	b  = p3 - b;

	JUtility::TColor colorA;
	JUtility::TColor colorB;

	calcColorCoe(mColorData4, &colorA);
	calcColorCoe(mColorData5, &colorB);

	f32 zero = 0.0f;
	GXBegin(GX_QUADS, GX_VTXFMT0, 4);
	GXPosition3f32(p2, p3, zero);
	GXColor4u8(colorB.r, colorB.g, colorB.b, colorB.a);
	GXTexCoord2u8(0, 16);

	GXPosition3f32(p2, b, zero);
	GXColor4u8(colorA.r, colorA.g, colorA.b, colorA.a);
	GXTexCoord2u8(0, 0);

	GXPosition3f32(a, b, zero);
	GXColor4u8(colorA.r, colorA.g, colorA.b, colorA.a);
	GXTexCoord2u8(16, 0);

	GXPosition3f32(a, p3, zero);
	GXColor4u8(colorB.r, colorB.g, colorB.b, colorB.a);
	GXTexCoord2u8(16, 16);
}

/**
 * @note Address: 0x8043C304
 * @note Size: 0x10
 */
void TRenderingProcessor::reset()
{
	mXOffset = 0.0f;
	mYOffset = 0.0f;
}

/**
 * @note Address: 0x8043C314
 * @note Size: 0x128
 */
f32 TRenderingProcessor::calcWidth(JUTFont* font, int p2, f32 p3, bool p4)
{
	f32 scale = p3 / font->getCellWidth();
	f32 width;
	if (font->mIsFixed) {
		width = scale * font->mFixedWidth;
	} else {
		JUTFont::TWidth widthEntry;
		font->getWidthEntry(p2, &widthEntry);
		if (!p4) {
			width = (widthEntry.w1 + widthEntry.w0) * scale;
		} else {
			width = widthEntry.w1 * scale;
		}
	}
	return width;
}

/**
 * @note Address: 0x8043C43C
 * @note Size: 0x24
 */
void TRenderingProcessor::setLineWidth()
{
	if (mFlags.isSet(TProcFlag_Unk0) == 0) {
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
	if (mFlags.isSet(TProcFlag_Unk0) == 0) {
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
	for (int i = 0; i < 10; i++) {
		mLineWidthInfos[i].mStartIndex = 0;
		mLineWidthInfos[i].mEndIndex   = 0;
	}
}

/**
 * @note Address: 0x8043C650
 * @note Size: 0x8C
 */
void TRenderingProcessor::setPageInfo()
{
#if defined(VERSION_PAL)
	P2ASSERTLINE(1576, mPageInfoNum < 10);
#else
	P2ASSERTLINE(1573, mPageInfoNum < 10);
#endif
	mLineWidthInfos[mPageInfoNum].mEndIndex = mCurrLine - 1;
	if (mPageInfoNum < 9) {
		mLineWidthInfos[mPageInfoNum + 1].mStartIndex = mCurrLine;
	}
}

/**
 * @note Address: 0x8043C6DC
 * @note Size: 0x20
 */
void TRenderingProcessor::preProcCode(uint p1)
{
	preProcCenteringCode(p1);
}

/**
 * @note Address: 0x8043C6FC
 * @note Size: 0x20
 */
void TRenderingProcessor::preProcID(uint p1, uint p2)
{
	preProcCenteringID(p1, p2);
}

/**
 * @note Address: N/A
 * @note Size: 0x260
 */
void TRenderingProcessor::preProcCenteringPre()
{
	// UNUSED FUNCTION
	mFlags.set(TProcFlag_Unk0);
	mCurrLine = 0;
	resetLineWidth();
	mParagraphNum = 0;
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
	mFlags.unset(TProcFlag_Unk0);
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
}

/**
 * @note Address: 0x8043CE64
 * @note Size: 0x8
 */
void TRenderingProcessor::setFont(JUTFont* font)
{
	mMainFont = font;
}

/**
 * @note Address: 0x8043CE6C
 * @note Size: 0x44C
 */
void TRenderingProcessor::setTextBoxInfo(J2DPane* pane)
{
#if defined(VERSION_PAL)
	P2ASSERTLINE(1690, pane->getTypeID() == PANETYPE_TextBox);
#else
	P2ASSERTLINE(1687, pane->getTypeID() == PANETYPE_TextBox);
#endif

	if (pane->getTypeID() != PANETYPE_TextBox) {
		return;
	}

	J2DTextBoxEx* text = static_cast<J2DTextBoxEx*>(pane);

	JUtility::TColor color[2];
	color[0].setRGBA(text->mCharColor);
	color[1].setRGBA(text->mGradientColor);

	JUtility::TColor white, black;
	black = text->getBlack();
	white = text->getWhite();

	mBaseAlphaModifier = text->getColorAlpha() / 255.0f;
	setImageColorB(white);
	setImageColorA(black);
	setDefaultCharColor(color[0]);
	setDefaultGradColor(color[1]);
	setDefaultBlack(black);
	setDefaultWhite(white);

	mCharacterWidth = mActiveCharWidth = text->mCharSpacing;
	mLineHeight = mActiveLineHeight = text->mLineSpacing;
	mTextBoxWidth                   = text->getWidth();
	mTextBoxHeight                  = text->getHeight();

	f32 fontWidth  = text->mFontSize.x;
	f32 fontHeight = text->mFontSize.y;
	mFontWidth     = fontWidth / mMainFont->getWidth();
	mFontHeight    = fontHeight / mMainFont->getHeight();

	switch ((text->mFlags) >> 2 & 3) {
	case 0:
		mFlags.typeView &= ~0x70;
		mFlags.typeView |= 0x20;
		break;
	case 2:
		mFlags.typeView &= ~0x70;
		mFlags.typeView |= 0x10;
		break;
	case 1:
		mFlags.typeView &= ~0x70;
		mFlags.typeView |= 0x40;
		break;
	}
	switch ((text->mFlags) & 3) {
	case 0:
		mFlags.typeView &= ~0x700;
		mFlags.typeView |= 0x200;
		break;
	case 1:
		mFlags.typeView &= ~0x700;
		mFlags.typeView |= 0x400;
		break;
	case 2:
		mFlags.typeView &= ~0x700;
		mFlags.typeView |= 0x100;
		break;
	}
}

#if defined(VERSION_PAL)
/**
 * @note Address: 0x8043D888 (PAL)
 * @note Size: 0x50
 * @note Fabricated name. Could be incrementPageInfoNum or something.
 */
void TRenderingProcessor::incPageInfoNum()
{
	mPageInfoNum++;
	if (mPageInfoNum >= 10) {
		JUT_PANICLINE(1771, "%d/%d", mPageInfoNum, 10);
	}
}
#endif

} // namespace P2JME
