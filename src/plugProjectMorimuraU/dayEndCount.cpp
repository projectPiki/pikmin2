#include "Morimura/DayEndCount.h"
#include "trig.h"
#include "PSSystem/PSSystemIF.h"
#include "SoundID.h"

static const char name[] = "dayEndCount";

namespace Morimura {

u32 deTagName[COUNTDOWN_NUMBERS] = { 'cd00', 'cd01', 'cd02', 'cd03', 'cd04', 'cd05', 'cd06', 'cd07', 'cd08', 'cd09', 'cd10' };

bool TDayEndCount::mColorTest;
bool TDayEndCount::mTestChangeColor;
u8 TDayEndCount::mCountDownType;

f32 TDayEndCount::mWaitTime = 0.4f;
u8 TDayEndCount::mAlphaMax  = 200;
u8 TDayEndCount::mWaitAlpha = 100;

f32 TDayEndCount::mWaitScale       = 0.2f;
f32 TDayEndCount::mStopScale       = 1.0f;
f32 TDayEndCount::mScaleMax        = 2.0f;
f32 TDayEndCount::m2pScale         = 0.75f;
f32 TDayEndCount::m2pOffsetY       = 170.0f;
GXColor TDayEndCount::mColor       = { 0, 255, 0, 255 };
GXColor TDayEndCount::mNumberColor = { 255, 100, 0, 255 };

/**
 * @note Address: 0x80344088
 * @note Size: 0xE0
 */
TDayEndCount::TDayEndCount()
    : TTestBase("DayEndCount")
    , mScreenObj(nullptr)
    , mCurrNumberPane(nullptr)
    , mNumberPaneList(nullptr)
    , mTextPane(nullptr)
    , mCurrNumberValue(-1)
    , mMode(false)
{
	mSoundEnabled = true;
	mIsChallenge  = false;
	mScale        = 1.0f;
	mOffsetY      = 0.0f;

	mColor.r         = 0;
	mColor.g         = 255;
	mColor.b         = 0;
	mColor.a         = 255;
	mTestChangeColor = false;
}

/**
 * @note Address: 0x80344214
 * @note Size: 0x2EC
 */
void TDayEndCount::doCreate(JKRArchive* arc)
{
	mArchive  = arc;
	mAlphaMax = 200;

	og::Screen::DispMemberGround* dispfull = static_cast<og::Screen::DispMemberGround*>(getDispMember());
	if (dispfull->isID(OWNER_OGA, MEMBER_GROUND)) {
		mDispMember = &dispfull->mDayEndCount;
	} else if (dispfull->isID(OWNER_OGA, MEMBER_CHALLENGE_1P)) {
		mDispMember = &dispfull->mDayEndCount;
	} else if (dispfull->isID(OWNER_OGA, MEMBER_CHALLENGE_2P)) {
		mDispMember = &dispfull->mDayEndCount;
	} else {
		mDispMember = new og::Screen::DispMemberDayEndCount;
		mIsSection  = true;
	}

	mScreenObj = new P2DScreen::Mgr_tuning;
	mScreenObj->set("count.blo", 0x20000, arc);
	mTextPane = static_cast<J2DPicture*>(mScreenObj->search('gath'));
	P2ASSERTLINE(90, mTextPane);
	mTextPanePos.x = mTextPane->mOffset.x;
	mTextPanePos.y = mTextPane->mOffset.y;

	mNumberPaneList = new J2DPane*[COUNTDOWN_NUMBERS];
	for (int i = 0; i < COUNTDOWN_NUMBERS; i++) {
		mNumberPaneList[i] = mScreenObj->search(deTagName[i]);
		P2ASSERTLINE(100, mNumberPaneList[i]);
		mNumberPaneList[i]->setAlpha(0);
	}

	J2DPicture* pane = static_cast<J2DPicture*>(mScreenObj->search('cd10'));
	P2ASSERTLINE(105, pane);
	pane->setBasePosition(J2DPOS_Center);
	mNumberPanePos.x = pane->mOffset.x;
	mNumberPanePos.y = pane->mOffset.y + 25.0f;

	for (u8 i = 0; i < ARRAY_SIZE(mTexCoords1); i++) {
		mTexCoords1[i] = mTexCoords2[i] = *pane->getTexCoord(i);
	}

	reset();
}

/**
 * @note Address: 0x80344500
 * @note Size: 0xA88
 */
bool TDayEndCount::doUpdate()
{
	if (mIsSection) {
		mDispMember->mCurrSunRatio += 0.0001f;
		if (mDispMember->mCurrSunRatio > 1.0f) {
			mDispMember->mCurrSunRatio = mDispMember->mDuration;
		}
		if (mDispMember->mCurrSunRatio < mDispMember->mDuration) {
			mDispMember->mCurrSunRatio = mDispMember->mDuration;
		}
	}

	f32 calc = (1.0f - mDispMember->mCurrSunRatio) / (1.0f - mDispMember->mDuration);
	if (!mIsSection && calc < 0.01f) {
		return true;
	}

	f32 calc_2 = calc * 10.0f;
	if (calc_2 >= 10.0f) {
		reset();
		return false;
	}

	f32 calc2 = calc_2;
	calc2 *= 1.1f;
	if (calc2 >= 11.0f) {
		calc2 = 11.0f;
	}

	if (calc2 <= 0.0f) {
		calc2 = 0.0f;
	}

	int id = calc2;
	if (id >= 10)
		id = 10;

	if (mCurrNumberValue != id) {
		for (int i = id + 1; i < COUNTDOWN_NUMBERS; i++) {
			J2DPane* pane = mScreenObj->search(deTagName[i]);
			P2ASSERTLINE(164, pane);
			pane->hide();
		}
		mCurrNumberValue = id;
		mCurrNumberPane  = static_cast<J2DPicture*>(mScreenObj->search(deTagName[id]));
		P2ASSERTLINE(172, mCurrNumberPane);
		mCurrNumberPane->show();
		mDoPlaySE = true;
	}

	int alpha    = mAlphaMax;
	f32 scale    = mStopScale;
	f32 fraction = calc2 - id;
	f32 calc3    = 1.0f - fraction;
	f32 scaleMax = mScaleMax;
	f32 start    = 0.5f * (1.0f - mWaitTime);
	f32 end      = 0.5f * (1.0f + mWaitTime);
	if (calc3 < start) {
		u8 currentAlpha = mCurrNumberPane->getAlpha();
		int newAlpha    = calc3 * ((f32)(u8)alpha / start);
		alpha           = currentAlpha;
		if ((u8)newAlpha > currentAlpha) {
			alpha = newAlpha;
		}

		f32 newScale     = calc3 * (scale / start);
		f32 currentScale = mCurrNumberPane->mScale.x;
		scale            = currentScale;
		if (newScale > currentScale) {
			scale = newScale;
		}

		if (mMode) {
			f32 xOffset = mNumberPanePos.x - mCurrNumberPane->mOffset.x;
			f32 yOffset = mNumberPanePos.y - mCurrNumberPane->mOffset.y;
			mCurrNumberPane->add(xOffset * scale, yOffset * scale + mOffsetY);
		} else {
			mCurrNumberPane->setOffset(mNumberPanePos.x, mNumberPanePos.y + mOffsetY);
		}
	} else if (calc3 > end) {
		// f32 duration   = 1.0f - end;
		f32 alphaSlope = (f32)(u8)alpha / (1.0f - end);
		alpha          = -alphaSlope * calc3 + alphaSlope;
		scale          = calcLineValue(calc3, end, scale, scaleMax);
		mCurrNumberPane->setOffset(mNumberPanePos.x, mNumberPanePos.y + mOffsetY);
	} else {
		mCurrNumberPane->setOffset(mNumberPanePos.x, mNumberPanePos.y + mOffsetY);
	}

	if (scale == 1.0f && mSoundEnabled && mDoPlaySE) {
		P2ASSERTLINE(228, PSSystem::spSysIF);
		PSSystem::spSysIF->playSystemSe(PSSE_SY_DAYEND_COUNTDOWN, 0);
		mDoPlaySE = false;
	}

	u32 textAlpha = alpha;
	if (id >= 0 && (u8)textAlpha <= 100) {
		textAlpha = 100;
	}

	JUtility::TColor color;
	GXColor fadeColor;
	if ((u8)alpha < mAlphaMax && !mColorTest) {
		if (id <= 3) {
			mColor.r = 255;
			mColor.g = 100;
			mColor.b = 0;
		} else if (id <= 6) {
			mColor.r = 255;
			mColor.g = 255;
			mColor.b = 0;
		} else {
			mColor.r = 255;
			mColor.g = 255;
			mColor.b = 255;
		}

		f32 colorRatio = (u8)textAlpha / 100.0f - 1.0f;
		f32 whiteRatio = 1.0f - colorRatio;
		fadeColor.r    = (u8)(mColor.r * colorRatio + 255.0f * whiteRatio);
		fadeColor.g    = (u8)(mColor.g * colorRatio + 255.0f * whiteRatio);
		fadeColor.b    = (u8)(mColor.b * colorRatio + 255.0f * whiteRatio);
		fadeColor.a    = 255;
		color.set(fadeColor);
		mTextPane->setWhite(color);
	} else {
		color.set(mColor);
		mTextPane->setWhite(color);
	}

	J2DPicture* numPane = mCurrNumberPane;
	f32 angle           = TAU * 2.0f * (u8)alpha / mAlphaMax;
	f32 xoffs           = sinf(angle);
	f32 yoffs           = cosf(angle);
	mTexCoords1[0].set((int)(mTexCoords2[0].x - xoffs * 5.0f), (int)(mTexCoords2[0].y - yoffs * 5.0f));
	mTexCoords1[1].set((int)(mTexCoords2[1].x + xoffs * 5.0f), (int)(mTexCoords2[1].y - yoffs * 5.0f));
	mTexCoords1[2].set((int)(mTexCoords2[2].x + xoffs * 5.0f), (int)(mTexCoords2[2].y + yoffs * 5.0f));
	mTexCoords1[3].set((int)(mTexCoords2[3].x - xoffs * 5.0f), (int)(mTexCoords2[3].y + yoffs * 5.0f));
	numPane->setTexCoord(mTexCoords1);

	if (mMode) {
		u8 alpha = mWaitAlpha * mFadeFraction;
		for (int i = 0; i < mCurrNumberValue; i++) {
			mNumberPaneList[i]->setAlpha(alpha);
		}
	}

	mScreenObj->scaleScreen(mScale);
	if (mIsChallenge || mTestChangeColor) {
		mCurrNumberPane->setWhite(mNumberColor);
	}

	mCurrNumberPane->setAlpha((u8)alpha * mFadeFraction);
	mCurrNumberPane->updateScale(scale * mScale);
	mTextPane->setOffset(mTextPanePos.x, mTextPanePos.y + mOffsetY);
	mTextPane->setAlpha((u8)textAlpha * mFadeFraction);
	mScreenObj->update();
	return false;
}

/**
 * @note Address: 0x80344F88
 * @note Size: 0x78
 */
void TDayEndCount::doDraw(Graphics& gfx)
{
	if (!(mDispMember->mCurrSunRatio < mDispMember->mDuration)) {
		gfx.mPerspGraph.setPort();
		mScreenObj->draw(gfx, gfx.mPerspGraph);
	}
}

/**
 * @note Address: 0x80345000
 * @note Size: 0x414
 */
void TDayEndCount::reset()
{
	mColor.r = 255;
	mColor.g = 255;
	mColor.b = 255;
	mColor.a = 255;

	JUtility::TColor color;
	color.set(mColor);

	mTextPane->setWhite(color);
	mTextPane->setAlpha(0);
	J2DPane* pane = mScreenObj->search('cd10');
	P2ASSERTLINE(359, pane);
	if (mMode) {
		pane->updateScale(mWaitScale);
		pane->setAlpha(0);
	} else {
		pane->updateScale(0.0f);
		pane->setAlpha(0);
	}

	for (int i = 0; i < 10; i++) {
		f32 pos       = (TAU * (36.0f * i)) / 360.0f;
		J2DPane* pane = mScreenObj->search(deTagName[i]);
		P2ASSERTLINE(374, pane);
		if (mMode) {
			pane->setBasePosition(J2DPOS_Center);
			pane->setOffset(sinf(pos) * 80.0f + mNumberPanePos.x, -(cosf(pos) * 80.0f - mNumberPanePos.y));
			pane->show();
			pane->updateScale(mWaitScale * mScale);
			pane->setAlpha(0);
		} else {
			pane->setOffset(mNumberPanePos.x, mNumberPanePos.y);
			pane->hide();
			pane->updateScale(0.0f);
			pane->setAlpha(0);
		}
	}
	mCurrNumberPane = static_cast<J2DPicture*>(pane);

	mTexCoords1[0] = mTexCoords2[0];
	mTexCoords1[1] = mTexCoords2[1];
	mTexCoords1[2] = mTexCoords2[2];
	mTexCoords1[3] = mTexCoords2[3];
	mDoPlaySE      = true;
}

/**
 * @note Address: 0x80345414
 * @note Size: 0x104
 */
TChallengeEndCount::TChallengeEndCount()
{
	mName        = "challengeEndCount";
	mIsChallenge = true;
}

/**
 * @note Address: 0x803455DC
 * @note Size: 0x40
 */
void TChallengeEndCount::doCreate(JKRArchive* arc)
{
	TDayEndCount::doCreate(arc);
	mAlphaMax = 128;
	mTextPane->hide();
}

/**
 * @note Address: 0x8034561C
 * @note Size: 0x13C
 */
TChallengeEndCount1p::TChallengeEndCount1p()
{
	mName    = "challengeEndCount1p";
	mScale   = m2pScale;
	mOffsetY = -m2pOffsetY;
}

/**
 * @note Address: 0x80345834
 * @note Size: 0x34
 */
bool TChallengeEndCount1p::doUpdate()
{
	mScale   = m2pScale;
	mOffsetY = -m2pOffsetY;
	TDayEndCount::doUpdate();
}

/**
 * @note Address: 0x80345868
 * @note Size: 0x13C
 */
TChallengeEndCount2p::TChallengeEndCount2p()
{
	mName         = "challengeEndCount2p";
	mScale        = m2pScale;
	mOffsetY      = m2pOffsetY;
	mSoundEnabled = false;
}

/**
 * @note Address: 0x803459A4
 * @note Size: 0x30
 */
bool TChallengeEndCount2p::doUpdate()
{
	mScale   = m2pScale;
	mOffsetY = m2pOffsetY;
	TDayEndCount::doUpdate();
}

/**
 * @note Address: 0x803459D4
 * @note Size: 0x48C
 */
void TCountDownScene::doCreateObj(JKRArchive* arc)
{
	switch (TDayEndCount::mCountDownType) {
	case 0: {
		TDayEndCount* scene = new TDayEndCount;
		registObj(scene, arc);
		mObject = scene;
		break;
	}
	case 1: {
		TChallengeEndCount* scene = new TChallengeEndCount;
		registObj(scene, arc);
		mObject = scene;
		break;
	}
	case 2: {
		TChallengeEndCount1p* scene = new TChallengeEndCount1p;
		registObj(scene, arc);
		mObject = scene;

		mChallengeEndCount2p = new TChallengeEndCount2p;
		registObj(mChallengeEndCount2p, arc);
		break;
	}
	}
}

/**
 * @note Address: 0x80345E60
 * @note Size: 0x64
 */
bool TCountDownScene::doStart(Screen::StartSceneArg* arg)
{
	if (Screen::SceneBase::doStart(arg) && mChallengeEndCount2p) {
		return mChallengeEndCount2p->start(arg);
	}
}

}; // namespace Morimura
