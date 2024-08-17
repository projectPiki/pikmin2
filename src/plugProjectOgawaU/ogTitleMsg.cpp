#include "og/newScreen/TitleMsg.h"
#include "og/Screen/ogScreen.h"
#include "P2JME/Analyzer.h"
#include "efx2d/T2DCvname.h"
#include "Dolphin/rand.h"
#include "og/ogLib2D.h"
#include "og/Sound.h"
#include "System.h"

namespace og {
namespace newScreen {

/**
 * @note Address: N/A
 * @note Size: 0x108
 */
TitleMessageAnalyzer::TitleMessageAnalyzer(const JMessage::TReference* ref)
    : Analyzer(ref)
{
	mCurrCharIndex = 0;

	for (int i = 0; i < 256; i++) {
		mCharBuffer[i] = 0;
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x18
 */
void TitleMessageAnalyzer::set2ByteString(char* data, int value)
{
	data[0] = (value & 0xff00) >> 8;
	data[1] = (u8)value;
	data[2] = 0;
}

/**
 * @note Address: 0x8032EAC8
 * @note Size: 0x228
 */
void TitleMessageAnalyzer::do_character(int data)
{
	u8 c          = data;
	char cChar[3] = { 0, 0, 0 };
	bool valid    = false;
	if (data == 0) {
		mCharBuffer[mCurrCharIndex] = 0;
	} else if ((data & 0xFF00) != 0) {
		set2ByteString(cChar, data);
		valid = true;
	} else if (c >= 'A' && c <= 'Z') {
		set2ByteString(cChar, data + 0x821f);
		valid = true;
	} else if (c >= 'a' && c <= 'z') {
		set2ByteString(cChar, data + 0x8220);
		valid = true;
	} else if (c >= 0xbf && c <= 0xff) {
		set2ByteString(cChar, data + 0xFE41);
		valid = true;
	} else if (c == ' ') {
		set2ByteString(cChar, 0x8140);
		valid = true;
	} else if (c == '!') {
		set2ByteString(cChar, 0x8149);
		valid = true;
	} else if (c == '?') {
		set2ByteString(cChar, 0x8148);
		valid = true;
	} else if (u8(c - '&') <= 1 || (u32)c == '-') {
		set2ByteString(cChar, c + 0xFF00);
		valid = true;
	}

	if (valid) {
		mCharBuffer[mCurrCharIndex] = cChar[0];
		mCurrCharIndex++;
		if (mCurrCharIndex >= 254) {
			mCurrCharIndex = 254;
		}

		mCharBuffer[mCurrCharIndex] = cChar[1];
		mCurrCharIndex++;
		if (mCurrCharIndex >= 254) {
			mCurrCharIndex = 254;
		}
		mCharBuffer[mCurrCharIndex] = 0;
	}
}

/**
 * @note Address: 0x8032ECF0
 * @note Size: 0x28C
 */
TitleMsg::TitleMsg(J2DScreen* screen, J2DPane* root, char* str)
    : mAnalyzer(og::gLib2D->mMessage->mProcessor->mReference)
{
	mAnalyzer.exec(str);
	char* string  = mAnalyzer.mCharBuffer;
	mRootPane     = root;
	mStringLength = strlen(string) >> 1;
	mCurrXpos     = 0.0f;
	mPanes1White.set(0, 0, 0, 255);
	mPanes2White.set(255, 255, 0, 255);
	mPanes2Black.set(255, 0, 0, 0);

	for (int i = 0; i < mStringLength; i++) {
		u64 tag = og::Screen::CharCodeToTag(string + (i * 2));
		char buf[16];
		og::Screen::TagToName(tag, buf);
		J2DPictureEx* pane = static_cast<J2DPictureEx*>(screen->search(tag));
		if (pane) {
			setFontPane(pane, i);
		} else {
			pane = static_cast<J2DPictureEx*>(screen->search('err'));
			if (pane)
				setFontPane(pane, i);
		}
	}

	setCentering(ECM_0);

	for (int i = 0; i < mStringLength; i++) {
		mDropFlags[i] = false;
		mTimers[i]    = 0.0f;
	}
	mYOffset = 0.0f;
	mXScale  = 1.0f;
}

/**
 * @note Address: 0x8032EFFC
 * @note Size: 0x154
 */
void TitleMsg::setFontPane(J2DPictureEx* pic, int id)
{
	mPanes1[id] = og::Screen::CopyPictureToPane(pic, mRootPane, mCurrXpos, -10.0f, 'tFont000' + id);
	mPanes1[id]->setBasePosition(J2DPOS_BottomCenter);
	mPanes1[id]->setWhite(mPanes1White);

	mPanes2[id]
	    = og::Screen::CopyPictureToPane(pic, mPanes1[id], (pic->getWidth() / 2) - 3.0f, (pic->getHeight() / 2) - 3.0f, 'tBody000' + id);
	mPanes2[id]->setBasePosition(J2DPOS_BottomCenter);
	mPanes2[id]->setWhite(mPanes2White);
	mPanes2[id]->setBlack(mPanes2Black);

	mCurrXpos += (mPanes1[id]->getWidth());
}

/**
 * @note Address: 0x8032F150
 * @note Size: 0x164
 */
void TitleMsg::setCentering(EnumCentering center)
{
	mCentering = center;
	f32 size;
	f32 cx     = mCurrXpos;
	f32 width  = mRootPane->getWidth();
	f32 scaleX = 1.0f;
	if (cx > width) {
		scaleX = width / cx;
	}

	switch (mCentering) {
	case ECM_0:
		size = 0.0f;
		break;
	case ECM_1:
		size = -(mCurrXpos * scaleX - width);
		break;
	case ECM_2:
		size = -(mCurrXpos * scaleX - width) / 2;
		break;
	default:
		size = 0.0f;
	}

#if BUILDTARGET == USADEMO1
	f32 currX = 0.0f; // f25
	for (int i = 0; i < mStringLength; i++) {
		J2DPane* pane = mPanes1[i];
		f32 paneWidth = pane->getWidth();
		f32 diff      = 0.5f * (paneWidth * (1.0f - scaleX));
		currX -= diff;
		pane->move(currX + size, 0.0f);

		mPanes1[i]->updateScale(scaleX, 1.0f);
		currX += (paneWidth - diff);
	}
	mXScale = scaleX;
#elif BUILDTARGET == USAFINAL
	f32 scaleY = 1.0f;
	f32 currX  = 0.0f;
	for (int i = 0; i < mStringLength; i++) {
		J2DPane* pane = mPanes1[i];
		pane->move(size + currX * scaleX, 0.0f);

		mPanes1[i]->updateScale(scaleX, scaleY);
		currX += mPanes1[i]->mBounds.getWidth();
	}
	mXScale = scaleX;
#endif
}

/**
 * @note Address: N/A
 * @note Size: 0x4
 */
void TitleMsg::drawMsgArea(J2DGrafContext&)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x8032F2B4
 * @note Size: 0xD0
 */
void TitleMsg::setColor(JUtility::TColor& col1, JUtility::TColor& col2)
{
	mPanes2White.setRGBA(col1);
	mPanes2Black.setRGBA(col2);
	for (int i = 0; i < mStringLength; i++) {
		mPanes2[i]->setWhite(col1);
		mPanes2[i]->setBlack(col2);
	}
}

/**
 * @note Address: 0x8032F384
 * @note Size: 0xF0
 */
TitleMsgDrop::TitleMsgDrop(J2DScreen* screen, J2DPane* pane, char* str)
    : TitleMsg(screen, pane, str)
{
	for (int i = 0; i < mStringLength; i++) {
		mEffects[i] = new efx2d::T2DCvnameCave;
	}
}

/**
 * @note Address: N/A
 * @note Size: 0xA0
 */
// TitleMsg::~TitleMsg()
//{
// UNUSED FUNCTION
//}

/**
 * @note Address: 0x8032F4CC
 * @note Size: 0x128
 */
void TitleMsgDrop::init()
{
	f32 mod        = 5.0f;
	f32 yoffs      = 200.0f;
	Motion* motion = &mMotions[0];
	for (int i = 0; i < mStringLength; i++) {
		motion->mRandTime = randFloat() * mod;
		motion->mYOffset  = yoffs;
		motion->mPos.x    = mPanes1[i]->mOffset.x;
		motion->mPos.y    = mPanes1[i]->mOffset.y;
		motion->mTimer    = i / (f32)mStringLength;
		motion++;
	}
}

/**
 * @note Address: 0x8032F5F4
 * @note Size: 0x230
 */
void TitleMsgDrop::update()
{
	Motion* motion = &mMotions[0];
	for (u32 i = 0; i < mStringLength; i++) {
		J2DPane* pane = mPanes1[i];
		if (motion->mTimer > 0.0f) {
			motion->mTimer -= sys->mDeltaTime;
		} else {
			motion->mRandTime -= 1.0f;
			motion->mYOffset += motion->mRandTime;
			if (motion->mYOffset < 0.0f) {
				motion->mRandTime *= -0.3f;
				motion->mYOffset = motion->mRandTime;
				if (!mDropFlags[i]) {
					mDropFlags[i] = true;
					mTimers[i]    = 1.0f;

					JGeometry::TVec3f pos1 = pane->getGlbVtx(GLBVTX_BtmLeft);
					JGeometry::TVec3f pos2 = pane->getGlbVtx(GLBVTX_TopRight);
					Vector2f argVec((pos1.x + pos2.x) / 2, (pos1.y + pos2.y) / 2 + mYOffset);
					efx2d::Arg arg(argVec);
					mEffects[i]->setGroup(2);
					mEffects[i]->create(&arg);

					ogSound->setFloorTitle();
				}
			}
		}

		if (mDropFlags[i]) {
			mTimers[i] -= sys->mDeltaTime;
			if (mTimers[i] < 0.0f) {
				mTimers[i] = 0.0f;
			}
		}
		pane->setOffset(motion->mPos.x, motion->mPos.y - motion->mYOffset);
		motion++;
	}
}

/**
 * @note Address: 0x8032F824
 * @note Size: 0x6C
 */
void TitleMsgDrop::end()
{
	for (u32 i = 0; i < mStringLength; i++) {
		mEffects[i]->fade();
	}
}

/**
 * @note Address: 0x8032F890
 * @note Size: 0x18C
 */
TitleMsgWave::TitleMsgWave(J2DScreen* screen, J2DPane* pane, char* str)
    : TitleMsg(screen, pane, str)
{
	mDelayTimer = 1.0f;
	mScaleup1   = 0.12f;
	mScaleup2   = 7.0f;
	mScaleup3   = 1.5f;
	mScaleup4   = 0.07f;

	for (int i = 0; i < 128; i++) {
		if ((u32)i < mStringLength) {
			mScaleMgrs[i] = new og::Screen::ScaleMgr;
		} else {
			mScaleMgrs[i] = nullptr;
		}
	}

	for (u32 i = 0; i < mStringLength; i++) {
		mEffects[i]   = new efx2d::T2DCvnameChal;
		mDropFlags[i] = false;
		mTimers[i]    = 0.0f;
	}
}

/**
 * @note Address: 0x8032FA1C
 * @note Size: 0x4
 */
void TitleMsgWave::init() { }

/**
 * @note Address: 0x8032FA20
 * @note Size: 0xB0
 */
void TitleMsgWave::start()
{
	for (int i = 0; i < mStringLength; i++) {
		mScaleMgrs[i]->up(mScaleup1, mScaleup2, mScaleup3, (f32)i * mScaleup4);
	}
	mDelayTimer = 3.0f;
}

/**
 * @note Address: 0x8032FAD0
 * @note Size: 0x2E0
 */
void TitleMsgWave::update()
{
	static f32 sFrame = 0.0f;

	for (u32 i = 0; i < mStringLength; i++) {

		f32 calc = mScaleMgrs[i]->calc();
		f32 mod  = 0.2f * (mStringLength - i) + sFrame;
		if (mod >= TAU) {
			mod -= TAU;
		}
		mod = sin(mod);
		mod = 1.0f + mod;
		mod /= 8;
		mPanes1[i]->updateScale(mXScale * ((mod / 4 + 1.0f) * calc), (1.0f + mod) * calc);

		if (!mDropFlags[i]) {
			mTimers[i] += sys->mDeltaTime;
			if (mTimers[i] > 0.1f) {
				mDropFlags[i]          = true;
				J2DPane* pane          = mPanes1[i];
				JGeometry::TVec3f pos1 = pane->getGlbVtx(GLBVTX_BtmLeft);
				JGeometry::TVec3f pos2 = pane->getGlbVtx(GLBVTX_TopRight);
				Vector2f argVec((pos1.x + pos2.x) / 2, (pos1.y + pos2.y) / 2 + mYOffset);
				efx2d::Arg arg(argVec);

				mEffects[i]->setGroup(2);
				mEffects[i]->create(&arg);
				mEffects[i]->setGlobalAlpha(100);
			}
		}
	}

	mDelayTimer -= sys->mDeltaTime;
	if (mDelayTimer < 0.0f) {
		start();
	}
	sFrame += 0.1f;
}

/**
 * @note Address: 0x8032FDB0
 * @note Size: 0x6C
 */
void TitleMsgWave::end()
{
	for (u32 i = 0; i < mStringLength; i++) {
		mEffects[i]->fade();
	}
}

/**
 * @note Address: 0x8032FE1C
 * @note Size: 0x14
 */
void TitleMsgWave::setParam(f32 s1, f32 s2, f32 s3, f32 s4)
{
	mScaleup1 = s1;
	mScaleup2 = s2;
	mScaleup3 = s3;
	mScaleup4 = s4;
}

/**
 * @note Address: 0x8032FE30
 * @note Size: 0xF8
 */
TitleMsgClash::TitleMsgClash(J2DScreen* screen, J2DPane* pane, char* str)
    : TitleMsg(screen, pane, str)
{
	f32 time   = 0.0f;
	mScaleMod  = 0.0f;
	mCurrScale = 50.0f;

	for (u32 i = 0; i < mStringLength; i++) {
		mEffects[i]   = new efx2d::T2DCvnameVs;
		mDropFlags[i] = false;
		mTimers[i]    = time;
	}
}

/**
 * @note Address: 0x8032FF28
 * @note Size: 0x14
 */
void TitleMsgClash::init()
{
	mScaleMod  = 0.0f;
	mCurrScale = 50.0f;
}

/**
 * @note Address: 0x8032FF3C
 * @note Size: 0x214
 */
void TitleMsgClash::update()
{
	mScaleMod = mScaleMod; // this or mCurrScale = mCurrScale fixes mr ordering
	mScaleMod -= 0.5f;
	mCurrScale += mScaleMod;
	if (mCurrScale < 1.0f) {
		mScaleMod  = mScaleMod; // teehee.
		mCurrScale = 1.0f;
		mScaleMod  = -mScaleMod * 0.4f;
	}
	ogSound->setVsTitle();

	for (u32 i = 0; i < mStringLength; i++) {
		mPanes1[i]->updateScale(mCurrScale * mXScale, 1.0f);
		if (!mDropFlags[i]) {
			mTimers[i] += sys->mDeltaTime;
			if (mTimers[i] > 1.0f) {
				mDropFlags[i]          = true;
				J2DPane* pane          = mPanes1[i];
				JGeometry::TVec3f pos1 = pane->getGlbVtx(GLBVTX_BtmLeft);
				JGeometry::TVec3f pos2 = pane->getGlbVtx(GLBVTX_TopRight);
				Vector2f argVec((pos1.x + pos2.x) / 2, (pos1.y + pos2.y) / 2 + mYOffset);
				efx2d::Arg arg(argVec);
				mEffects[i]->setGroup(2);
				mEffects[i]->create(&arg);
				mEffects[i]->setGlobalAlpha(130);
			}
		}
	}
}

/**
 * @note Address: 0x80330150
 * @note Size: 0x6C
 */
void TitleMsgClash::end()
{
	for (u32 i = 0; i < mStringLength; i++) {
		mEffects[i]->fade();
	}
}

} // namespace newScreen
} // namespace og
