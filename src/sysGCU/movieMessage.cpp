#include "nans.h"
#include "P2JME/Movie.h"
#include "P2JME/P2JME.h"
#include "JSystem/J2D/J2DAnmLoader.h"
#include "PSSystem/PSSystemIF.h"
#include "trig.h"
#include "Game/MoviePlayer.h"
#include "Game/gamePlayData.h"
#include "Game/GameSystem.h"

static const int unusedArray[] = { 0, 0, 0 };
static const char name[]       = "movieMessage";

namespace P2JME {
namespace Movie {

/**
 * @note Address: N/A
 * @note Size: 0xB8
 */
WindowPane::WindowPane()
{
	mState           = WINDOWPANE_Inactive;
	mTimer           = 0.0f;
	mInitialPosition = Vector3f::zero;
	mNewPosition     = Vector3f::zero;
	mCurrPosition    = Vector3f::zero;
}

/**
 * @note Address: 0x80434F5C
 * @note Size: 0x20
 */
void WindowPane::doInit() { mInitialPosition = Vector3f(mPane->mOffset.x, mPane->mOffset.y, 0.0f); }

/**
 * @note Address: 0x80434F7C
 * @note Size: 0x164
 */
void WindowPane::update()
{
	switch (mState) {
	case WINDOWPANE_Inactive:
	case WINDOWPANE_4:
		mPane->hide();
		break;
	case WINDOWPANE_Appear:
		mTimer += sys->mDeltaTime;
		if (mTimer > mMaxTime) {
			mTimer = mMaxTime;
			if (mCurrPosition.length() < 10.0f) {
				mState = WINDOWPANE_2;
			}
		}
		mCurrAngle = (mTimer / mMaxTime) * 180.0f + 90.0f;
		break;
	case WINDOWPANE_Finish:
		mTimer += sys->mDeltaTime;
		if (mTimer > mMaxTime) {
			mState = WINDOWPANE_4;
			mTimer = mMaxTime;
		}
		mCurrAngle = (1.0f - mTimer / mMaxTime) * 180.0f + 90.0f;
		break;
	}
	moveWindow(false);
}

/**
 * @note Address: 0x804350E0
 * @note Size: 0x278
 * TODO: match!!!
 */
void WindowPane::moveWindow(bool flag)
{
	f32 xoff = 500.0f;
	Vector2f startPosition(mInitialPosition.x + xoff, mInitialPosition.y);
	f32 angleRadians = TORADIANS(mCurrAngle);

	Vector3f offset = Vector3f(sinf(angleRadians) * 500.0f + startPosition.x, cosf(angleRadians) * 500.0f + startPosition.y, 0.0f);

	if (flag) {
		mNewPosition  = offset;
		mCurrPosition = Vector3f(0.0f);
	} else {
		Vector3f diff = offset - mNewPosition;
		diff *= 0.2f;
		mCurrPosition += diff;
		mCurrPosition *= 0.72f;
		mNewPosition += mCurrPosition;
	}

	mPane->setOffset(mNewPosition.x, mNewPosition.y);

	f32 newangle = JMath::atanTable_.atan2_(mNewPosition.x - startPosition.x, mNewPosition.y - startPosition.y);
	f32 scale    = roundAng(mCurrAngle);
	f64 newScale = fabs((scale - 270.0f) / 180.f);
	scale        = (f32)newScale + 1.0f;
	mPane->setAngle(newangle * RAD2DEG + 90.0f);
	mPane->updateScale(scale);
}

/**
 * @note Address: 0x80435358
 * @note Size: 0x48
 */
void WindowPane::open(f32 duration)
{
	mPane->show();
	mState     = WINDOWPANE_Appear;
	mTimer     = 0.0f;
	mMaxTime   = duration;
	mCurrAngle = 90.0f;
	moveWindow(true);
}

/**
 * @note Address: N/A
 * @note Size: 0x24
 */
void WindowPane::close(f32 duration)
{
	mPane->show();
	mState     = WINDOWPANE_Finish;
	mTimer     = 0.0f;
	mMaxTime   = duration;
	mCurrAngle = 90.0f;
}

/**
 * @note Address: N/A
 * @note Size: 0xA4
 */
AbtnPane::AbtnPane(u8 state)
{
	mState  = state;
	mTimer1 = 0.0f;
	mTimer2 = 0.0f;
	mTimer1 = -0.0f;
}

/**
 * @note Address: 0x804353A0
 * @note Size: 0x54
 */
void AbtnPane::doInit()
{
	mPane->setAlpha(0);
	mPane->show();
	mState = 0;
}

/**
 * @note Address: 0x804353F4
 * @note Size: 0x170
 */
void AbtnPane::update()
{
	f32 one   = 1.0f;
	f32 alpha = (mTimer1 * TAU) / one;
	alpha     = cosf(alpha);
	alpha     = (1.0f - alpha) * 0.5f;
	switch (mState) {
	case 0:
		mTimer2 += -(sys->mDeltaTime * 2.0f);
		if (mTimer2 < 0.0f) {
			mTimer2 = 0.0f;
		}
		break;
	case 1:
		mTimer2 += sys->mDeltaTime * 2.0f;
		if (mTimer2 > 1.0f) {
			mTimer2 = 1.0f;
		}
		break;
	}

	mTimer1 += sys->mDeltaTime;
	if (mTimer1 > 1.0f) {
		mTimer1 = 0.0f;
	}

	J2DPane* pane = mPane;
	alpha         = alpha * 255.0f * mTimer2;
	pane->setAlphaFromFloat(alpha);
}

/**
 * @note Address: N/A
 * @note Size: 0xCC
 */
PodIconScreen::PodIconScreen()
    : mState(-1)
    , mAnmColor(nullptr)
    , mAnmColorTimer(0.0f)
    , mAnmTrans(nullptr)
    , mAnmTransTimer(0.0f)
    , mAnmTexPattern(nullptr)
    , mAnmTexPatternTimer(0.0f)
{
	u16 y = sys->getRenderModeHeight();
	u16 x = sys->getRenderModeWidth();
	mInitialPos.set(x * 0.75f, y, 100.0f);
	reset();

	mIsVisible = false;
}

/**
 * @note Address: N/A
 * @note Size: 0x78
 */
void PodIconScreen::setTrans()
{
	if (Game::playData->mStoryFlags & Game::STORY_DebtPaid) {
		setXY(mInitialPos.x - 250.0f, mInitialPos.y - 25.0f);
	} else {
		setXY(mInitialPos.x - 250.0f, mInitialPos.y - 10.0f);
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x168
 */
void PodIconScreen::reset()
{
	mMomentum.set(1.0f, randFloat(), 0.0f);
	mMomentum.normalise(); // Needs to be here, but we are reaching limits of inline complexity
	mPosition.set(0.0f, 0.0f, 0.0f);
	setTrans();
}

/**
 * @note Address: N/A
 * @note Size: 0x1E0
 */
void PodIconScreen::set(JKRArchive* arc)
{
	bool didLoad = J2DScreen::set("pod.blo", 0x40000, arc);
	P2ASSERTLINE(428, didLoad);

	void* file = arc->getResource("anim/pod.btp");
	P2ASSERTLINE(433, file);
	mAnmTexPattern = static_cast<J2DAnmTexPattern*>(J2DAnmLoaderDataBase::load(file));
	P2ASSERTLINE(435, mAnmTexPattern);
	setAnimation(mAnmTexPattern);

	file = arc->getResource("anim/pod.bck");
	P2ASSERTLINE(440, file);
	mAnmTrans = static_cast<J2DAnmTransform*>(J2DAnmLoaderDataBase::load(file));
	P2ASSERTLINE(442, mAnmTrans);
	setAnimation(mAnmTrans);

	file = arc->getResource("anim/pod.bpk");
	P2ASSERTLINE(447, file);
	mAnmColor = static_cast<J2DAnmColor*>(J2DAnmLoaderDataBase::load(file));
	P2ASSERTLINE(449, mAnmColor);
	setAnimation(mAnmColor);
}

/**
 * @note Address: 0x80435564
 * @note Size: 0x438
 */
void PodIconScreen::update()
{
	if (mState != -1) {
		mAnmTexPatternTimer += 1.0f;
		if (mAnmTexPatternTimer >= mAnmTexPattern->mTotalFrameCount) {
			mAnmTexPatternTimer -= mAnmTexPattern->mTotalFrameCount;
		}
		mAnmTexPattern->mCurrentFrame = mAnmTexPatternTimer;

		mAnmTransTimer += 1.0f;
		if (mAnmTransTimer >= mAnmTrans->mTotalFrameCount) {
			mAnmTransTimer -= mAnmTrans->mTotalFrameCount;
		}
		mAnmTrans->mCurrentFrame = mAnmTransTimer;

		mAnmColorTimer += 1.0f;
		if (mAnmColorTimer >= mAnmColor->mTotalFrameCount) {
			mAnmColorTimer -= mAnmColor->mTotalFrameCount;
		}
		mAnmColor->mCurrentFrame = mAnmColorTimer;

		animation();

		Vector3f diff = mPosition - mInitialPos;
		f32 length    = diff.length();

		if (length > 1.0E-4f) {
			f32 norm = 1.0f / length;
			Vector3f newDiff;
			newDiff = diff * norm;

			f32 factor        = (newDiff.x * mMomentum.x + newDiff.y * mMomentum.y + newDiff.z * mMomentum.z + 1.0f) * 0.5f;
			f32 momentumScale = ((1.0f - factor) + 1.0f) * 0.2f;

			factor = factor * factor * 0.35f * length;

			newDiff.x *= momentumScale;
			newDiff.y *= momentumScale;
			newDiff.z *= momentumScale;

			mMomentum += newDiff;

			mMomentum.normalise();

			mInitialPos.x += mMomentum.x * factor;
			mInitialPos.y += mMomentum.y * factor;
			mInitialPos.z += mMomentum.z * factor;
		}

		f32 scale = mInitialPos.z / 20.0f;
		if (scale < 0.5f) {
			scale = 0.5f;
		}

		scale += 1.0f;
		setTrans();
		scaleScreen(scale);
		// mScreenScaleX = (test) * 0.95f;
		// mScreenScaleY = (test) * 0.95f;

		if (length < 10.0f) {
			switch (mState) {
			case 0:
				mState = 1;
				break;
			case 2:
				mState = 3;
				break;
			}
		}

		if (mState == 0 || mState == 1) {
			PSSystem::spSysIF->playSystemSe(PSSE_POD_PC, 0);
		}
	}
	P2DScreen::Mgr::update();
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	lwz      r0, 0x148(r3)
	cmpwi    r0, -1
	beq      lbl_80435980
	lfs      f1, 0x160(r31)
	lis      r0, 0x4330
	lfs      f0, lbl_805207C8@sda21(r2)
	stw      r0, 8(r1)
	fadds    f0, f1, f0
	lfd      f1, lbl_80520820@sda21(r2)
	stfs     f0, 0x160(r31)
	lwz      r3, 0x15c(r31)
	lfs      f2, 0x160(r31)
	lha      r3, 6(r3)
	xoris    r3, r3, 0x8000
	stw      r3, 0xc(r1)
	lfd      f0, 8(r1)
	fsubs    f0, f0, f1
	fcmpo    cr0, f2, f0
	cror     2, 1, 2
	bne      lbl_804355E0
	stw      r3, 0xc(r1)
	stw      r0, 8(r1)
	lfd      f0, 8(r1)
	fsubs    f0, f0, f1
	fsubs    f0, f2, f0
	stfs     f0, 0x160(r31)

lbl_804355E0:
	lfs      f1, 0x160(r31)
	lis      r0, 0x4330
	lwz      r3, 0x15c(r31)
	lfs      f0, lbl_805207C8@sda21(r2)
	stfs     f1, 8(r3)
	lfd      f1, lbl_80520820@sda21(r2)
	lfs      f2, 0x158(r31)
	stw      r0, 8(r1)
	fadds    f0, f2, f0
	stfs     f0, 0x158(r31)
	lwz      r3, 0x154(r31)
	lfs      f2, 0x158(r31)
	lha      r3, 6(r3)
	xoris    r3, r3, 0x8000
	stw      r3, 0xc(r1)
	lfd      f0, 8(r1)
	fsubs    f0, f0, f1
	fcmpo    cr0, f2, f0
	cror     2, 1, 2
	bne      lbl_80435648
	stw      r3, 0xc(r1)
	stw      r0, 8(r1)
	lfd      f0, 8(r1)
	fsubs    f0, f0, f1
	fsubs    f0, f2, f0
	stfs     f0, 0x158(r31)

lbl_80435648:
	lfs      f1, 0x158(r31)
	lis      r0, 0x4330
	lwz      r3, 0x154(r31)
	lfs      f0, lbl_805207C8@sda21(r2)
	stfs     f1, 8(r3)
	lfd      f1, lbl_80520820@sda21(r2)
	lfs      f2, 0x150(r31)
	stw      r0, 8(r1)
	fadds    f0, f2, f0
	stfs     f0, 0x150(r31)
	lwz      r3, 0x14c(r31)
	lfs      f2, 0x150(r31)
	lha      r3, 6(r3)
	xoris    r3, r3, 0x8000
	stw      r3, 0xc(r1)
	lfd      f0, 8(r1)
	fsubs    f0, f0, f1
	fcmpo    cr0, f2, f0
	cror     2, 1, 2
	bne      lbl_804356B0
	stw      r3, 0xc(r1)
	stw      r0, 8(r1)
	lfd      f0, 8(r1)
	fsubs    f0, f0, f1
	fsubs    f0, f2, f0
	stfs     f0, 0x150(r31)

lbl_804356B0:
	lfs      f0, 0x150(r31)
	mr       r3, r31
	lwz      r4, 0x14c(r31)
	stfs     f0, 8(r4)
	bl       animation__9J2DScreenFv
	lfs      f1, 0x174(r31)
	lfs      f0, 0x168(r31)
	lfs      f3, 0x178(r31)
	fsubs    f6, f1, f0
	lfs      f2, 0x16c(r31)
	lfs      f1, 0x170(r31)
	lfs      f0, 0x164(r31)
	fsubs    f11, f3, f2
	fmuls    f2, f6, f6
	fsubs    f3, f1, f0
	lfs      f1, lbl_805207B8@sda21(r2)
	fmuls    f4, f11, f11
	fmadds   f0, f3, f3, f2
	fadds    f0, f4, f0
	fcmpo    cr0, f0, f1
	ble      lbl_80435714
	ble      lbl_80435718
	frsqrte  f1, f0
	fmuls    f0, f1, f0
	b        lbl_80435718

lbl_80435714:
	fmr      f0, f1

lbl_80435718:
	lfs      f1, lbl_8052083C@sda21(r2)
	fcmpo    cr0, f0, f1
	ble      lbl_80435860
	lfs      f9, lbl_805207C8@sda21(r2)
	lfs      f5, 0x180(r31)
	fdivs    f10, f9, f0
	lfs      f7, 0x17c(r31)
	lfs      f8, 0x184(r31)
	lfs      f1, lbl_80520804@sda21(r2)
	lfs      f4, lbl_805207E0@sda21(r2)
	lfs      f2, 0x17c(r31)
	fmuls    f13, f6, f10
	lfs      f6, lbl_80520840@sda21(r2)
	fmuls    f12, f3, f10
	lfs      f3, lbl_805207B8@sda21(r2)
	fmuls    f10, f11, f10
	fmuls    f5, f13, f5
	fmadds   f5, f12, f7, f5
	fmadds   f5, f10, f8, f5
	fadds    f5, f9, f5
	fmuls    f5, f5, f1
	fsubs    f1, f9, f5
	fmuls    f5, f5, f5
	fadds    f1, f9, f1
	fmuls    f5, f0, f5
	fmuls    f4, f4, f1
	fmuls    f1, f6, f5
	fmuls    f12, f12, f4
	fmuls    f13, f13, f4
	fmuls    f10, f10, f4
	fadds    f2, f2, f12
	stfs     f2, 0x17c(r31)
	lfs      f2, 0x180(r31)
	fadds    f2, f2, f13
	stfs     f2, 0x180(r31)
	lfs      f2, 0x184(r31)
	fadds    f2, f2, f10
	stfs     f2, 0x184(r31)
	lfs      f5, 0x17c(r31)
	lfs      f4, 0x180(r31)
	lfs      f6, 0x184(r31)
	fmuls    f2, f5, f5
	fmuls    f4, f4, f4
	fmuls    f6, f6, f6
	fadds    f2, f2, f4
	fadds    f2, f6, f2
	fcmpo    cr0, f2, f3
	ble      lbl_804357F4
	fmadds   f2, f5, f5, f4
	fadds    f4, f6, f2
	fcmpo    cr0, f4, f3
	ble      lbl_804357F8
	frsqrte  f2, f4
	fmuls    f4, f2, f4
	b        lbl_804357F8

lbl_804357F4:
	fmr      f4, f3

lbl_804357F8:
	lfs      f2, lbl_805207B8@sda21(r2)
	fcmpo    cr0, f4, f2
	ble      lbl_80435830
	lfs      f3, lbl_805207C8@sda21(r2)
	lfs      f2, 0x17c(r31)
	fdivs    f3, f3, f4
	fmuls    f2, f2, f3
	stfs     f2, 0x17c(r31)
	lfs      f2, 0x180(r31)
	fmuls    f2, f2, f3
	stfs     f2, 0x180(r31)
	lfs      f2, 0x184(r31)
	fmuls    f2, f2, f3
	stfs     f2, 0x184(r31)

lbl_80435830:
	lfs      f3, 0x17c(r31)
	lfs      f2, 0x164(r31)
	fmadds   f2, f3, f1, f2
	stfs     f2, 0x164(r31)
	lfs      f3, 0x180(r31)
	lfs      f2, 0x168(r31)
	fmadds   f2, f3, f1, f2
	stfs     f2, 0x168(r31)
	lfs      f3, 0x184(r31)
	lfs      f2, 0x16c(r31)
	fmadds   f1, f3, f1, f2
	stfs     f1, 0x16c(r31)

lbl_80435860:
	lfs      f3, 0x16c(r31)
	lfs      f2, lbl_80520844@sda21(r2)
	lfs      f1, lbl_80520804@sda21(r2)
	fdivs    f2, f3, f2
	fmr      f6, f2
	fcmpo    cr0, f2, f1
	bge      lbl_80435880
	fmr      f6, f1

lbl_80435880:
	lwz      r3, playData__4Game@sda21(r13)
	lfs      f1, lbl_805207C8@sda21(r2)
	lbz      r0, 0x2f(r3)
	fadds    f6, f6, f1
	clrlwi.  r0, r0, 0x1f
	beq      lbl_804358CC
	lfs      f2, 0x164(r31)
	lfs      f1, lbl_80520818@sda21(r2)
	lfs      f5, 0x168(r31)
	lfs      f4, lbl_80520814@sda21(r2)
	fsubs    f3, f2, f1
	lfs      f2, mstTuningTransX__Q29P2DScreen10Mgr_tuning@sda21(r2)
	fsubs    f4, f5, f4
	lfs      f1, mstTuningTransY__Q29P2DScreen10Mgr_tuning@sda21(r2)
	fadds    f2, f3, f2
	fadds    f1, f4, f1
	stfs     f2, 0x140(r31)
	stfs     f1, 0x144(r31)
	b        lbl_804358FC

lbl_804358CC:
	lfs      f2, 0x164(r31)
	lfs      f1, lbl_80520818@sda21(r2)
	lfs      f5, 0x168(r31)
	lfs      f4, lbl_805207BC@sda21(r2)
	fsubs    f3, f2, f1
	lfs      f2, mstTuningTransX__Q29P2DScreen10Mgr_tuning@sda21(r2)
	fsubs    f4, f5, f4
	lfs      f1, mstTuningTransY__Q29P2DScreen10Mgr_tuning@sda21(r2)
	fadds    f2, f3, f2
	fadds    f1, f4, f1
	stfs     f2, 0x140(r31)
	stfs     f1, 0x144(r31)

lbl_804358FC:
	lfs      f1, mstTuningScaleX__Q29P2DScreen10Mgr_tuning@sda21(r2)
	lfs      f2, mstTuningScaleY__Q29P2DScreen10Mgr_tuning@sda21(r2)
	fmuls    f3, f6, f1
	lfs      f1, lbl_805207BC@sda21(r2)
	fmuls    f2, f6, f2
	fcmpo    cr0, f0, f1
	stfs     f3, 0x138(r31)
	stfs     f2, 0x13c(r31)
	bge      lbl_8043595C
	lwz      r0, 0x148(r31)
	cmpwi    r0, 1
	beq      lbl_8043595C
	bge      lbl_8043593C
	cmpwi    r0, 0
	bge      lbl_80435948
	b        lbl_8043595C

lbl_8043593C:
	cmpwi    r0, 3
	bge      lbl_8043595C
	b        lbl_80435954

lbl_80435948:
	li       r0, 1
	stw      r0, 0x148(r31)
	b        lbl_8043595C

lbl_80435954:
	li       r0, 3
	stw      r0, 0x148(r31)

lbl_8043595C:
	lwz      r0, 0x148(r31)
	cmpwi    r0, 0
	beq      lbl_80435970
	cmpwi    r0, 1
	bne      lbl_80435980

lbl_80435970:
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	li       r4, 0x4007
	li       r5, 0
	bl       playSystemSe__Q28PSSystem5SysIFFUlUl

lbl_80435980:
	mr       r3, r31
	bl       update__Q29P2DScreen3MgrFv
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/**
 * @note Address: N/A
 * @note Size: 0x26C
 */
void MessageWindowScreen::set(JKRArchive* arc)
{
	bool didLoad = J2DScreen::set("mg_window.blo", 0, arc);
	P2ASSERTLINE(554, didLoad);
	mWindowPane = new WindowPane;
	addCallBack('mgnull00', mWindowPane);
	mAButton = new AbtnPane(0);
	addCallBack('mg_abtn_', mAButton);
	mArrowPane = new AbtnPane(0);
	addCallBack('mg_yaji', mArrowPane);
	search('mg_yaji1')->setInfluencedAlpha(true, false);
	search('PICT_001')->setInfluencedAlpha(true, false);
}

/**
 * @note Address: 0x8043599C
 * @note Size: 0x80
 */
TControl::TControl()
{
	mMessageWindow      = nullptr;
	mPodIcon            = nullptr;
	mPaneMgDemo         = nullptr;
	mIsActive           = false;
	mModeFlag           = MODEFLAG_Inactive;
	mFlags.bytesView[0] = 0;
	mFlags.bytesView[1] = 0;
	mFlags.bytesView[2] = 0;
	mFlags.bytesView[3] = 0;
	mFlags.bytesView[0] = 0;
	mFlags.bytesView[1] = 0;
	mFlags.bytesView[2] = 0;
	mFlags.bytesView[3] = 0;
	mFlags.dwordView |= 1;
}

/**
 * @note Address: 0x80435A8C
 * @note Size: 0x7B0
 */
bool TControl::onInit()
{
	sys->heapStatusStart("P2JME::Movie::TControl::onInit", nullptr);
	if (gP2JMEMgr) {
		setFont(gP2JMEMgr->mFont);
		setRubyFont(gP2JMEMgr->mFont);
	}
	sys->heapStatusStart("PMT_onInit_arc", nullptr);

	JKRArchive* arc = JKRMountArchive("new_screen/cmn/message_window.szs", JKRArchive::EMM_Mem, nullptr, JKRArchive::EMD_Head);
	if (arc) {
		mMessageWindow = new MessageWindowScreen;
		mMessageWindow->set(arc);

		J2DPane* demo = mMessageWindow->search('mg_demo_');
		P2ASSERTLINE(632, demo);
		P2ASSERTLINE(633, demo->getTypeID() == PANETYPE_TextBox);
		mPaneMgDemo = demo;
		mTextRenderProc->setTextBoxInfo(mPaneMgDemo);
	}

	sys->heapStatusStart("podIcon", nullptr);

	char* path = "new_screen/cmn/pod_for_message_window.szs";
	if (Game::playData->mStoryFlags & Game::STORY_DebtPaid) {
		path = "new_screen/cmn/gold_pod_for_message_window.szs";
	}
	arc = JKRMountArchive(path, JKRArchive::EMM_Mem, nullptr, JKRArchive::EMD_Head);
	if (arc) {
		mPodIcon = new PodIconScreen;
		mPodIcon->set(arc);
	} else {
		JUT_PANICLINE(658, "%s is not found.\n", path);
	}

	sys->heapStatusEnd("podIcon");
	sys->heapStatusEnd("PMT_onInit_arc");
	sys->heapStatusStart("PMT_onInit_initRenderingProcessor", nullptr);
	initRenderingProcessor(0x400);
	sys->heapStatusEnd("PMT_onInit_initRenderingProcessor");
	sys->heapStatusEnd("P2JME::Movie::TControl::onInit");
	// return 1;
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	lis      r4, lbl_8049A6E0@ha
	li       r5, 0
	stw      r0, 0x44(r1)
	stmw     r27, 0x2c(r1)
	mr       r29, r3
	addi     r31, r4, lbl_8049A6E0@l
	addi     r4, r31, 0x7c
	lwz      r3, sys@sda21(r13)
	bl       heapStatusStart__6SystemFPcP7JKRHeap
	lwz      r3, gP2JMEMgr@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_80435AE0
	lwz      r4, 0x18(r3)
	mr       r3, r29
	bl       setFont__Q25P2JME8TControlFP7JUTFont
	lwz      r4, gP2JMEMgr@sda21(r13)
	mr       r3, r29
	lwz      r4, 0x18(r4)
	bl       setRubyFont__Q25P2JME8TControlFP7JUTFont

lbl_80435AE0:
	lwz      r3, sys@sda21(r13)
	addi     r4, r31, 0x9c
	li       r5, 0
	bl       heapStatusStart__6SystemFPcP7JKRHeap
	addi     r3, r31, 0xac
	li       r4, 1
	li       r5, 0
	li       r6, 1
	bl
mount__10JKRArchiveFPCcQ210JKRArchive10EMountModeP7JKRHeapQ210JKRArchive15EMountDirection
	or.      r27, r3, r3
	beq      lbl_80435DF0
	li       r3, 0x158
	bl       __nw__FUl
	or.      r28, r3, r3
	beq      lbl_80435B2C
	bl       __ct__Q29P2DScreen10Mgr_tuningFv
	lis      r3, __vt__Q35P2JME5Movie19MessageWindowScreen@ha
	addi     r0, r3, __vt__Q35P2JME5Movie19MessageWindowScreen@l
	stw      r0, 0(r28)

lbl_80435B2C:
	stw      r28, 0x5c(r29)
	mr       r6, r27
	addi     r4, r31, 0x6c
	li       r5, 0
	lwz      r30, 0x5c(r29)
	mr       r3, r30
	bl       set__9J2DScreenFPCcUlP10JKRArchive
	clrlwi.  r0, r3, 0x18
	bne      lbl_80435B64
	addi     r3, r31, 0x1c
	addi     r5, r31, 0x30
	li       r4, 0x22a
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80435B64:
	li       r3, 0x50
	bl       __nw__FUl
	or.      r28, r3, r3
	beq      lbl_80435BFC
	bl       __ct__5CNodeFv
	lis      r3, __vt__Q29P2DScreen4Node@ha
	lis      r5, __vt__Q29P2DScreen12CallBackNode@ha
	addi     r0, r3, __vt__Q29P2DScreen4Node@l
	li       r6, 0
	stw      r0, 0(r28)
	lis      r4, __vt__Q35P2JME5Movie10WindowPane@ha
	addi     r5, r5, __vt__Q29P2DScreen12CallBackNode@l
	lfs      f0, lbl_805207B8@sda21(r2)
	stw      r6, 0x18(r28)
	addi     r0, r4, __vt__Q35P2JME5Movie10WindowPane@l
	lis      r3, "zero__10Vector3<f>"@ha
	stw      r5, 0(r28)
	stw      r0, 0(r28)
	stw      r6, 0x1c(r28)
	stfs     f0, 0x20(r28)
	lfsu     f0, "zero__10Vector3<f>"@l(r3)
	stfs     f0, 0x28(r28)
	lfs      f0, 4(r3)
	stfs     f0, 0x2c(r28)
	lfs      f0, 8(r3)
	stfs     f0, 0x30(r28)
	lfs      f0, 0(r3)
	stfs     f0, 0x38(r28)
	lfs      f0, 4(r3)
	stfs     f0, 0x3c(r28)
	lfs      f0, 8(r3)
	stfs     f0, 0x40(r28)
	lfs      f0, 0(r3)
	stfs     f0, 0x44(r28)
	lfs      f0, 4(r3)
	stfs     f0, 0x48(r28)
	lfs      f0, 8(r3)
	stfs     f0, 0x4c(r28)

lbl_80435BFC:
	stw      r28, 0x148(r30)
	lis      r5, 0x6C6C3030@ha
	lis      r4, 0x6D676E75@ha
	mr       r3, r30
	lwz      r7, 0x148(r30)
	addi     r6, r5, 0x6C6C3030@l
	addi     r5, r4, 0x6D676E75@l
	bl       addCallBack__Q29P2DScreen3MgrFUxPQ29P2DScreen4Node
	li       r3, 0x28
	bl       __nw__FUl
	or.      r28, r3, r3
	beq      lbl_80435C74
	bl       __ct__5CNodeFv
	lis      r3, __vt__Q29P2DScreen4Node@ha
	lis      r4, __vt__Q29P2DScreen12CallBackNode@ha
	addi     r0, r3, __vt__Q29P2DScreen4Node@l
	lis      r3, __vt__Q35P2JME5Movie8AbtnPane@ha
	stw      r0, 0(r28)
	li       r5, 0
	addi     r4, r4, __vt__Q29P2DScreen12CallBackNode@l
	addi     r0, r3, __vt__Q35P2JME5Movie8AbtnPane@l
	stw      r5, 0x18(r28)
	lfs      f1, lbl_805207B8@sda21(r2)
	stw      r4, 0(r28)
	lfs      f0, lbl_80520848@sda21(r2)
	stw      r0, 0(r28)
	stw      r5, 0x1c(r28)
	stfs     f1, 0x20(r28)
	stfs     f1, 0x24(r28)
	stfs     f0, 0x20(r28)

lbl_80435C74:
	stw      r28, 0x14c(r30)
	lis      r5, 0x62746E5F@ha
	lis      r4, 0x6D675F61@ha
	mr       r3, r30
	lwz      r7, 0x14c(r30)
	addi     r6, r5, 0x62746E5F@l
	addi     r5, r4, 0x6D675F61@l
	bl       addCallBack__Q29P2DScreen3MgrFUxPQ29P2DScreen4Node
	li       r3, 0x28
	bl       __nw__FUl
	or.      r28, r3, r3
	beq      lbl_80435CEC
	bl       __ct__5CNodeFv
	lis      r3, __vt__Q29P2DScreen4Node@ha
	lis      r4, __vt__Q29P2DScreen12CallBackNode@ha
	addi     r0, r3, __vt__Q29P2DScreen4Node@l
	lis      r3, __vt__Q35P2JME5Movie8AbtnPane@ha
	stw      r0, 0(r28)
	li       r5, 0
	addi     r4, r4, __vt__Q29P2DScreen12CallBackNode@l
	addi     r0, r3, __vt__Q35P2JME5Movie8AbtnPane@l
	stw      r5, 0x18(r28)
	lfs      f1, lbl_805207B8@sda21(r2)
	stw      r4, 0(r28)
	lfs      f0, lbl_80520848@sda21(r2)
	stw      r0, 0(r28)
	stw      r5, 0x1c(r28)
	stfs     f1, 0x20(r28)
	stfs     f1, 0x24(r28)
	stfs     f0, 0x20(r28)

lbl_80435CEC:
	stw      r28, 0x150(r30)
	lis      r5, 0x79616A69@ha
	lis      r4, 0x006D675F@ha
	mr       r3, r30
	lwz      r7, 0x150(r30)
	addi     r6, r5, 0x79616A69@l
	addi     r5, r4, 0x006D675F@l
	bl       addCallBack__Q29P2DScreen3MgrFUxPQ29P2DScreen4Node
	mr       r3, r30
	lis      r5, 0x616A6931@ha
	lwz      r12, 0(r30)
	lis      r4, 0x6D675F79@ha
	addi     r6, r5, 0x616A6931@l
	lwz      r12, 0x3c(r12)
	addi     r5, r4, 0x6D675F79@l
	mtctr    r12
	bctrl
	li       r4, 1
	li       r5, 0
	bl       setInfluencedAlpha__7J2DPaneFbb
	mr       r3, r30
	lis      r5, 0x5F303031@ha
	lwz      r12, 0(r30)
	lis      r4, 0x50494354@ha
	addi     r6, r5, 0x5F303031@l
	lwz      r12, 0x3c(r12)
	addi     r5, r4, 0x50494354@l
	mtctr    r12
	bctrl
	li       r4, 1
	li       r5, 0
	bl       setInfluencedAlpha__7J2DPaneFbb
	lwz      r3, 0x5c(r29)
	lis      r5, 0x656D6F5F@ha
	lis      r4, 0x6D675F64@ha
	lwz      r12, 0(r3)
	addi     r6, r5, 0x656D6F5F@l
	addi     r5, r4, 0x6D675F64@l
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	or.      r27, r3, r3
	bne      lbl_80435DAC
	addi     r3, r31, 0x1c
	addi     r5, r31, 0x30
	li       r4, 0x278
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80435DAC:
	mr       r3, r27
	lwz      r12, 0(r27)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	clrlwi   r0, r3, 0x10
	cmplwi   r0, 0x13
	beq      lbl_80435DE0
	addi     r3, r31, 0x1c
	addi     r5, r31, 0x30
	li       r4, 0x279
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80435DE0:
	stw      r27, 0x64(r29)
	lwz      r3, 0x40(r29)
	lwz      r4, 0x64(r29)
	bl       setTextBoxInfo__Q25P2JME19TRenderingProcessorFP7J2DPane

lbl_80435DF0:
	lwz      r3, sys@sda21(r13)
	addi     r4, r2, lbl_8052084C@sda21
	li       r5, 0
	bl       heapStatusStart__6SystemFPcP7JKRHeap
	lwz      r3, playData__4Game@sda21(r13)
	addi     r28, r31, 0x100
	lbz      r0, 0x2f(r3)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_80435E18
	addi     r28, r31, 0xd0

lbl_80435E18:
	mr       r3, r28
	li       r4, 1
	li       r5, 0
	li       r6, 1
	bl
mount__10JKRArchiveFPCcQ210JKRArchive10EMountModeP7JKRHeapQ210JKRArchive15EMountDirection
	or.      r30, r3, r3
	beq      lbl_804361C0
	li       r3, 0x188
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_8043601C
	mr       r28, r4
	bl       __ct__Q29P2DScreen10Mgr_tuningFv
	lis      r4, __vt__Q35P2JME5Movie13PodIconScreen@ha
	li       r3, -1
	addi     r4, r4, __vt__Q35P2JME5Movie13PodIconScreen@l
	li       r0, 0
	stw      r4, 0(r28)
	lfs      f0, lbl_805207B8@sda21(r2)
	stw      r3, 0x148(r28)
	stw      r0, 0x14c(r28)
	stfs     f0, 0x150(r28)
	stw      r0, 0x154(r28)
	stfs     f0, 0x158(r28)
	stw      r0, 0x15c(r28)
	stfs     f0, 0x160(r28)
	bl       getRenderModeObj__6SystemFv
	lhz      r27, 6(r3)
	bl       getRenderModeObj__6SystemFv
	lhz      r3, 4(r3)
	lis      r0, 0x4330
	stw      r0, 8(r1)
	lfd      f3, lbl_805207F8@sda21(r2)
	stw      r3, 0xc(r1)
	lfs      f2, lbl_8052080C@sda21(r2)
	lfd      f0, 8(r1)
	stw      r27, 0x14(r1)
	fsubs    f1, f0, f3
	lfs      f0, lbl_80520810@sda21(r2)
	stw      r0, 0x10(r1)
	fmuls    f2, f2, f1
	lfd      f1, 0x10(r1)
	fsubs    f1, f1, f3
	stfs     f2, 0x164(r28)
	stfs     f1, 0x168(r28)
	stfs     f0, 0x16c(r28)
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x1c(r1)
	lfs      f0, lbl_805207C8@sda21(r2)
	stw      r0, 0x18(r1)
	lfd      f3, lbl_80520820@sda21(r2)
	lfd      f1, 0x18(r1)
	lfs      f2, lbl_8052081C@sda21(r2)
	fsubs    f3, f1, f3
	stfs     f0, 0x17c(r28)
	lfs      f1, lbl_805207B8@sda21(r2)
	fdivs    f0, f3, f2
	stfs     f0, 0x180(r28)
	stfs     f1, 0x184(r28)
	lfs      f3, 0x17c(r28)
	lfs      f2, 0x180(r28)
	lfs      f4, 0x184(r28)
	fmuls    f0, f3, f3
	fmuls    f2, f2, f2
	fmuls    f4, f4, f4
	fadds    f0, f0, f2
	fadds    f0, f4, f0
	fcmpo    cr0, f0, f1
	ble      lbl_80435F50
	fmadds   f0, f3, f3, f2
	fadds    f2, f4, f0
	fcmpo    cr0, f2, f1
	ble      lbl_80435F54
	frsqrte  f0, f2
	fmuls    f2, f0, f2
	b        lbl_80435F54

lbl_80435F50:
	fmr      f2, f1

lbl_80435F54:
	lfs      f0, lbl_805207B8@sda21(r2)
	fcmpo    cr0, f2, f0
	ble      lbl_80435F8C
	lfs      f1, lbl_805207C8@sda21(r2)
	lfs      f0, 0x17c(r28)
	fdivs    f1, f1, f2
	fmuls    f0, f0, f1
	stfs     f0, 0x17c(r28)
	lfs      f0, 0x180(r28)
	fmuls    f0, f0, f1
	stfs     f0, 0x180(r28)
	lfs      f0, 0x184(r28)
	fmuls    f0, f0, f1
	stfs     f0, 0x184(r28)

lbl_80435F8C:
	lfs      f0, lbl_805207B8@sda21(r2)
	stfs     f0, 0x170(r28)
	stfs     f0, 0x174(r28)
	stfs     f0, 0x178(r28)
	lwz      r3, playData__4Game@sda21(r13)
	lbz      r0, 0x2f(r3)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_80435FE0
	lfs      f1, 0x164(r28)
	lfs      f0, lbl_80520818@sda21(r2)
	lfs      f4, 0x168(r28)
	lfs      f3, lbl_80520814@sda21(r2)
	fsubs    f2, f1, f0
	lfs      f1, mstTuningTransX__Q29P2DScreen10Mgr_tuning@sda21(r2)
	fsubs    f3, f4, f3
	lfs      f0, mstTuningTransY__Q29P2DScreen10Mgr_tuning@sda21(r2)
	fadds    f1, f2, f1
	fadds    f0, f3, f0
	stfs     f1, 0x140(r28)
	stfs     f0, 0x144(r28)
	b        lbl_80436010

lbl_80435FE0:
	lfs      f1, 0x164(r28)
	lfs      f0, lbl_80520818@sda21(r2)
	lfs      f4, 0x168(r28)
	lfs      f3, lbl_805207BC@sda21(r2)
	fsubs    f2, f1, f0
	lfs      f1, mstTuningTransX__Q29P2DScreen10Mgr_tuning@sda21(r2)
	fsubs    f3, f4, f3
	lfs      f0, mstTuningTransY__Q29P2DScreen10Mgr_tuning@sda21(r2)
	fadds    f1, f2, f1
	fadds    f0, f3, f0
	stfs     f1, 0x140(r28)
	stfs     f0, 0x144(r28)

lbl_80436010:
	li       r0, 0
	mr       r4, r28
	stb      r0, 0xb0(r28)

lbl_8043601C:
	stw      r4, 0x60(r29)
	mr       r6, r30
	addi     r4, r2, lbl_80520834@sda21
	lis      r5, 4
	lwz      r27, 0x60(r29)
	mr       r3, r27
	bl       set__9J2DScreenFPCcUlP10JKRArchive
	clrlwi.  r0, r3, 0x18
	bne      lbl_80436054
	addi     r3, r31, 0x1c
	addi     r5, r31, 0x30
	li       r4, 0x1ac
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80436054:
	mr       r3, r30
	addi     r4, r31, 0x3c
	lwz      r12, 0(r30)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	or.      r28, r3, r3
	bne      lbl_80436088
	addi     r3, r31, 0x1c
	addi     r5, r31, 0x30
	li       r4, 0x1b1
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80436088:
	mr       r3, r28
	bl       load__20J2DAnmLoaderDataBaseFPCv
	stw      r3, 0x15c(r27)
	lwz      r0, 0x15c(r27)
	cmplwi   r0, 0
	bne      lbl_804360B4
	addi     r3, r31, 0x1c
	addi     r5, r31, 0x30
	li       r4, 0x1b3
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_804360B4:
	mr       r3, r27
	lwz      r4, 0x15c(r27)
	lwz      r12, 0(r27)
	lwz      r12, 0x68(r12)
	mtctr    r12
	bctrl
	mr       r3, r30
	addi     r4, r31, 0x4c
	lwz      r12, 0(r30)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	or.      r28, r3, r3
	bne      lbl_80436100
	addi     r3, r31, 0x1c
	addi     r5, r31, 0x30
	li       r4, 0x1b8
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80436100:
	mr       r3, r28
	bl       load__20J2DAnmLoaderDataBaseFPCv
	stw      r3, 0x154(r27)
	lwz      r0, 0x154(r27)
	cmplwi   r0, 0
	bne      lbl_8043612C
	addi     r3, r31, 0x1c
	addi     r5, r31, 0x30
	li       r4, 0x1ba
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8043612C:
	mr       r3, r27
	lwz      r4, 0x154(r27)
	lwz      r12, 0(r27)
	lwz      r12, 0x60(r12)
	mtctr    r12
	bctrl
	mr       r3, r30
	addi     r4, r31, 0x5c
	lwz      r12, 0(r30)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	or.      r28, r3, r3
	bne      lbl_80436178
	addi     r3, r31, 0x1c
	addi     r5, r31, 0x30
	li       r4, 0x1bf
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80436178:
	mr       r3, r28
	bl       load__20J2DAnmLoaderDataBaseFPCv
	stw      r3, 0x14c(r27)
	lwz      r0, 0x14c(r27)
	cmplwi   r0, 0
	bne      lbl_804361A4
	addi     r3, r31, 0x1c
	addi     r5, r31, 0x30
	li       r4, 0x1c1
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_804361A4:
	mr       r3, r27
	lwz      r4, 0x14c(r27)
	lwz      r12, 0(r27)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	b        lbl_804361D8

lbl_804361C0:
	mr       r6, r28
	addi     r3, r31, 0x1c
	addi     r5, r31, 0x12c
	li       r4, 0x292
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_804361D8:
	lwz      r3, sys@sda21(r13)
	addi     r4, r2, lbl_8052084C@sda21
	bl       heapStatusEnd__6SystemFPc
	lwz      r3, sys@sda21(r13)
	addi     r4, r31, 0x9c
	bl       heapStatusEnd__6SystemFPc
	lwz      r3, sys@sda21(r13)
	addi     r4, r31, 0x140
	li       r5, 0
	bl       heapStatusStart__6SystemFPcP7JKRHeap
	mr       r3, r29
	li       r4, 0x400
	bl       initRenderingProcessor__Q35P2JME6Window8TControlFUl
	lwz      r3, sys@sda21(r13)
	addi     r4, r31, 0x140
	bl       heapStatusEnd__6SystemFPc
	lwz      r3, sys@sda21(r13)
	addi     r4, r31, 0x7c
	bl       heapStatusEnd__6SystemFPc
	lmw      r27, 0x2c(r1)
	li       r3, 1
	lwz      r0, 0x44(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/**
 * @note Address: 0x8043623C
 * @note Size: 0x38
 */
void TControl::reset()
{
	Window::TControl::reset();
	setMode(MODEFLAG_Inactive);
}

/**
 * @note Address: 0x80436274
 * @note Size: 0x4E0
 */
TControl::EModeFlag TControl::setMode(EModeFlag mode)
{
	EModeFlag oldMode = mModeFlag;
	mModeFlag         = mode;
	switch (mode) {
	case MODEFLAG_Inactive:
		mIsActive = false;
		mMessageWindow->mWindowPane->mPane->hide();
		mSequenceProc->mFlags.set(1);
		break;
	case MODEFLAG_Start:
		PSSystem::spSysIF->playSystemSe(PSSE_MP_SHIP_CALLING_01, 0);
		mMessageWindow->open(0.5f);
		mPodIcon->appear();
		mSequenceProc->mFlags.set(1);
		break;
	case MODEFLAG_Writing:
		mSequenceProc->mFlags.unset(1);
		break;
	case MODEFLAG_Finish:
		PSSystem::spSysIF->playSystemSe(PSSE_MP_SHIP_PERIOD_01, 0);
		WindowPane* windowPane = mMessageWindow->mWindowPane;
		windowPane->mPane->show();
		windowPane->mState           = 3;
		windowPane->mTimer           = 0.0f;
		windowPane->mMaxTime         = 0.5f;
		PodIconScreen* podIconScreen = mPodIcon;
		if ((randFloat() * 2.0f)) {
			_GXRenderModeObj* renderObj = System::getRenderModeObj();
			u16 efbHeight               = renderObj->efbHeight;
			renderObj                   = System::getRenderModeObj();
			u16 fbWidth                 = renderObj->fbWidth;
			podIconScreen->mPosition.x  = (randFloat() * 0.5f + 0.3f) * fbWidth;
			podIconScreen->mPosition.y  = efbHeight * 0.65f;
			podIconScreen->mPosition.z  = 100.0f;
		} else {
			_GXRenderModeObj* renderObj = System::getRenderModeObj();
			u16 efbHeight               = renderObj->efbHeight;
			renderObj                   = System::getRenderModeObj();
			u16 fbWidth                 = renderObj->fbWidth;
			podIconScreen->mPosition.x  = (randFloat() * 0.5f + 0.3f) * fbWidth;
			podIconScreen->mPosition.y  = efbHeight * 1.25f;
			podIconScreen->mPosition.z  = 100.0f;
		}
		podIconScreen->mMomentum.x = randFloat() * 0.5f + 0.5f;
		podIconScreen->mMomentum.y = rand();
		podIconScreen->mMomentum.z = 0.0f;
		podIconScreen->mMomentum.normalise();
		podIconScreen->mState = 2;
		mMessageWindow->mWindowPane->close(0.5f);
		break;
	}
	return oldMode;
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stfd     f31, 0x30(r1)
	psq_st   f31, 56(r1), 0, qr0
	stw      r31, 0x2c(r1)
	stw      r30, 0x28(r1)
	stw      r29, 0x24(r1)
	stw      r28, 0x20(r1)
	mr       r30, r3
	cmpwi    r4, 2
	lwz      r31, 0x6c(r3)
	stw      r4, 0x6c(r3)
	beq      lbl_8043647C
	bge      lbl_804362C0
	cmpwi    r4, 0
	beq      lbl_804362CC
	bge      lbl_804362F8
	b        lbl_80436728

lbl_804362C0:
	cmpwi    r4, 4
	bge      lbl_80436728
	b        lbl_80436490

lbl_804362CC:
	li       r0, 0
	stb      r0, 0x68(r30)
	lwz      r3, 0x5c(r30)
	lwz      r3, 0x148(r3)
	lwz      r3, 0x18(r3)
	stb      r0, 0xb0(r3)
	lwz      r3, 0x3c(r30)
	lwz      r0, 0x68(r3)
	ori      r0, r0, 1
	stw      r0, 0x68(r3)
	b        lbl_80436728

lbl_804362F8:
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	li       r4, 0x186f
	li       r5, 0
	bl       playSystemSe__Q28PSSystem5SysIFFUlUl
	lwz      r3, 0x5c(r30)
	lfs      f1, lbl_80520804@sda21(r2)
	bl       open__Q35P2JME5Movie19MessageWindowScreenFf
	lwz      r29, 0x60(r30)
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xc(r1)
	lfs      f0, lbl_805207C8@sda21(r2)
	stw      r0, 8(r1)
	lfd      f3, lbl_80520820@sda21(r2)
	lfd      f1, 8(r1)
	lfs      f2, lbl_8052081C@sda21(r2)
	fsubs    f3, f1, f3
	stfs     f0, 0x17c(r29)
	lfs      f1, lbl_805207B8@sda21(r2)
	fdivs    f0, f3, f2
	stfs     f0, 0x180(r29)
	stfs     f1, 0x184(r29)
	lfs      f3, 0x17c(r29)
	lfs      f2, 0x180(r29)
	lfs      f4, 0x184(r29)
	fmuls    f0, f3, f3
	fmuls    f2, f2, f2
	fmuls    f4, f4, f4
	fadds    f0, f0, f2
	fadds    f0, f4, f0
	fcmpo    cr0, f0, f1
	ble      lbl_80436398
	fmadds   f0, f3, f3, f2
	fadds    f2, f4, f0
	fcmpo    cr0, f2, f1
	ble      lbl_8043639C
	frsqrte  f0, f2
	fmuls    f2, f0, f2
	b        lbl_8043639C

lbl_80436398:
	fmr      f2, f1

lbl_8043639C:
	lfs      f0, lbl_805207B8@sda21(r2)
	fcmpo    cr0, f2, f0
	ble      lbl_804363D4
	lfs      f1, lbl_805207C8@sda21(r2)
	lfs      f0, 0x17c(r29)
	fdivs    f1, f1, f2
	fmuls    f0, f0, f1
	stfs     f0, 0x17c(r29)
	lfs      f0, 0x180(r29)
	fmuls    f0, f0, f1
	stfs     f0, 0x180(r29)
	lfs      f0, 0x184(r29)
	fmuls    f0, f0, f1
	stfs     f0, 0x184(r29)

lbl_804363D4:
	lfs      f0, lbl_805207B8@sda21(r2)
	stfs     f0, 0x170(r29)
	stfs     f0, 0x174(r29)
	stfs     f0, 0x178(r29)
	lwz      r3, playData__4Game@sda21(r13)
	lbz      r0, 0x2f(r3)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_80436428
	lfs      f1, 0x164(r29)
	lfs      f0, lbl_80520818@sda21(r2)
	lfs      f4, 0x168(r29)
	lfs      f3, lbl_80520814@sda21(r2)
	fsubs    f2, f1, f0
	lfs      f1, mstTuningTransX__Q29P2DScreen10Mgr_tuning@sda21(r2)
	fsubs    f3, f4, f3
	lfs      f0, mstTuningTransY__Q29P2DScreen10Mgr_tuning@sda21(r2)
	fadds    f1, f2, f1
	fadds    f0, f3, f0
	stfs     f1, 0x140(r29)
	stfs     f0, 0x144(r29)
	b        lbl_80436458

lbl_80436428:
	lfs      f1, 0x164(r29)
	lfs      f0, lbl_80520818@sda21(r2)
	lfs      f4, 0x168(r29)
	lfs      f3, lbl_805207BC@sda21(r2)
	fsubs    f2, f1, f0
	lfs      f1, mstTuningTransX__Q29P2DScreen10Mgr_tuning@sda21(r2)
	fsubs    f3, f4, f3
	lfs      f0, mstTuningTransY__Q29P2DScreen10Mgr_tuning@sda21(r2)
	fadds    f1, f2, f1
	fadds    f0, f3, f0
	stfs     f1, 0x140(r29)
	stfs     f0, 0x144(r29)

lbl_80436458:
	li       r3, 1
	li       r0, 0
	stb      r3, 0xb0(r29)
	stw      r0, 0x148(r29)
	lwz      r3, 0x3c(r30)
	lwz      r0, 0x68(r3)
	ori      r0, r0, 1
	stw      r0, 0x68(r3)
	b        lbl_80436728

lbl_8043647C:
	lwz      r3, 0x3c(r30)
	lwz      r0, 0x68(r3)
	rlwinm   r0, r0, 0, 0, 0x1e
	stw      r0, 0x68(r3)
	b        lbl_80436728

lbl_80436490:
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	li       r4, 0x1870
	li       r5, 0
	bl       playSystemSe__Q28PSSystem5SysIFFUlUl
	lwz      r3, 0x5c(r30)
	li       r4, 1
	li       r0, 3
	lfs      f1, lbl_805207B8@sda21(r2)
	lwz      r5, 0x148(r3)
	lfs      f0, lbl_80520804@sda21(r2)
	lwz      r3, 0x18(r5)
	stb      r4, 0xb0(r3)
	stw      r0, 0x1c(r5)
	stfs     f1, 0x20(r5)
	stfs     f0, 0x24(r5)
	lwz      r29, 0x60(r30)
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xc(r1)
	lfd      f3, lbl_80520820@sda21(r2)
	stw      r0, 8(r1)
	lfs      f1, lbl_8052081C@sda21(r2)
	lfd      f2, 8(r1)
	lfs      f0, lbl_80520808@sda21(r2)
	fsubs    f2, f2, f3
	fdivs    f1, f2, f1
	fmuls    f0, f0, f1
	fctiwz   f0, f0
	stfd     f0, 0x10(r1)
	lwz      r0, 0x14(r1)
	cmpwi    r0, 1
	beq      lbl_804365B4
	bge      lbl_80436638
	cmpwi    r0, 0
	bge      lbl_80436524
	b        lbl_80436638

lbl_80436524:
	bl       getRenderModeObj__6SystemFv
	lhz      r30, 6(r3)
	bl       getRenderModeObj__6SystemFv
	lhz      r28, 4(r3)
	bl       rand
	lis      r4, 0x4330
	xoris    r0, r3, 0x8000
	stw      r0, 0x14(r1)
	neg      r0, r30
	xoris    r0, r0, 0x8000
	lfd      f5, lbl_80520820@sda21(r2)
	stw      r4, 0x10(r1)
	lfs      f0, lbl_8052081C@sda21(r2)
	lfd      f1, 0x10(r1)
	stw      r28, 0xc(r1)
	fsubs    f1, f1, f5
	lfs      f4, lbl_80520804@sda21(r2)
	stw      r4, 8(r1)
	lfs      f2, lbl_80520828@sda21(r2)
	fdivs    f6, f1, f0
	stw      r0, 0x1c(r1)
	lfd      f3, lbl_805207F8@sda21(r2)
	stw      r4, 0x18(r1)
	lfd      f0, 8(r1)
	lfd      f1, 0x18(r1)
	fmadds   f4, f4, f6, f2
	lfs      f2, lbl_8052082C@sda21(r2)
	fsubs    f3, f0, f3
	lfs      f0, lbl_80520810@sda21(r2)
	fsubs    f1, f1, f5
	fmuls    f3, f4, f3
	fmuls    f1, f2, f1
	stfs     f3, 0x170(r29)
	stfs     f1, 0x174(r29)
	stfs     f0, 0x178(r29)
	b        lbl_80436638

lbl_804365B4:
	bl       getRenderModeObj__6SystemFv
	lhz      r28, 6(r3)
	bl       getRenderModeObj__6SystemFv
	lhz      r30, 4(r3)
	bl       rand
	lis      r0, 0x4330
	xoris    r3, r3, 0x8000
	stw      r3, 0x1c(r1)
	lfd      f2, lbl_80520820@sda21(r2)
	stw      r0, 0x18(r1)
	lfs      f0, lbl_8052081C@sda21(r2)
	lfd      f1, 0x18(r1)
	stw      r30, 0x14(r1)
	fsubs    f1, f1, f2
	lfs      f3, lbl_80520804@sda21(r2)
	stw      r0, 0x10(r1)
	lfs      f2, lbl_80520828@sda21(r2)
	fdivs    f5, f1, f0
	stw      r28, 0xc(r1)
	lfd      f4, lbl_805207F8@sda21(r2)
	stw      r0, 8(r1)
	lfd      f0, 0x10(r1)
	lfd      f1, 8(r1)
	fmadds   f5, f3, f5, f2
	lfs      f2, lbl_80520830@sda21(r2)
	fsubs    f3, f0, f4
	lfs      f0, lbl_80520810@sda21(r2)
	fsubs    f1, f1, f4
	fmuls    f3, f5, f3
	fmuls    f1, f2, f1
	stfs     f3, 0x170(r29)
	stfs     f1, 0x174(r29)
	stfs     f0, 0x178(r29)

lbl_80436638:
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x1c(r1)
	lfd      f2, lbl_80520820@sda21(r2)
	stw      r0, 0x18(r1)
	lfs      f0, lbl_8052081C@sda21(r2)
	lfd      f1, 0x18(r1)
	fsubs    f1, f1, f2
	fdivs    f31, f1, f0
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x14(r1)
	lfd      f3, lbl_80520820@sda21(r2)
	stw      r0, 0x10(r1)
	lfs      f2, lbl_8052081C@sda21(r2)
	lfd      f1, 0x10(r1)
	lfs      f0, lbl_80520804@sda21(r2)
	fsubs    f3, f1, f3
	lfs      f1, lbl_805207B8@sda21(r2)
	fdivs    f2, f3, f2
	fmadds   f0, f0, f2, f0
	stfs     f0, 0x17c(r29)
	stfs     f31, 0x180(r29)
	stfs     f1, 0x184(r29)
	lfs      f3, 0x17c(r29)
	lfs      f2, 0x180(r29)
	lfs      f4, 0x184(r29)
	fmuls    f0, f3, f3
	fmuls    f2, f2, f2
	fmuls    f4, f4, f4
	fadds    f0, f0, f2
	fadds    f0, f4, f0
	fcmpo    cr0, f0, f1
	ble      lbl_804366E4
	fmadds   f0, f3, f3, f2
	fadds    f2, f4, f0
	fcmpo    cr0, f2, f1
	ble      lbl_804366E8
	frsqrte  f0, f2
	fmuls    f2, f0, f2
	b        lbl_804366E8

lbl_804366E4:
	fmr      f2, f1

lbl_804366E8:
	lfs      f0, lbl_805207B8@sda21(r2)
	fcmpo    cr0, f2, f0
	ble      lbl_80436720
	lfs      f1, lbl_805207C8@sda21(r2)
	lfs      f0, 0x17c(r29)
	fdivs    f1, f1, f2
	fmuls    f0, f0, f1
	stfs     f0, 0x17c(r29)
	lfs      f0, 0x180(r29)
	fmuls    f0, f0, f1
	stfs     f0, 0x180(r29)
	lfs      f0, 0x184(r29)
	fmuls    f0, f0, f1
	stfs     f0, 0x184(r29)

lbl_80436720:
	li       r0, 2
	stw      r0, 0x148(r29)

lbl_80436728:
	mr       r3, r31
	psq_l    f31, 56(r1), 0, qr0
	lwz      r0, 0x44(r1)
	lfd      f31, 0x30(r1)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	lwz      r29, 0x24(r1)
	lwz      r28, 0x20(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/**
 * @note Address: 0x80436754
 * @note Size: 0x24
 */
void MessageWindowScreen::open(f32 duration) { mWindowPane->open(duration); }

/**
 * @note Address: 0x80436778
 * @note Size: 0x228
 */
bool TControl::update(Controller* pad1, Controller* pad2)
{
	bool ret = Window::TControl::update(pad1, pad2); // matching bs when this is bool
	if (mFlags.dwordView & 1 && Game::moviePlayer && (Game::moviePlayer->mFlags.isSet(2))) {
		if (mIsActive) {
			reset();
			Game::moviePlayer->unsuspend(1, false);
		}
		return true;
	} else {
		if (mMessageWindow) {
			mMessageWindow->update();
		}
		if (mPodIcon) {
			mPodIcon->update();
		}

		switch (mModeFlag) {
		case MODEFLAG_Inactive:
			if (ret) {
				if (Game::gameSystem) {
					mIsPaused = Game::gameSystem->setPause(1, "message", 3);
				}
				setMode(MODEFLAG_Start);
				mIsActive = true;
			} else {
				mIsActive = false;
			}
			break;
		case MODEFLAG_Start:
			if (mMessageWindow->mWindowPane->mState == 2) {
				setMode(MODEFLAG_Writing);
			}
			break;
		case MODEFLAG_Writing:
			if (mStatus.typeView & 2) {
				setMode(MODEFLAG_Finish);
			}
			break;
		case MODEFLAG_Finish:
			if (mMessageWindow->mWindowPane->mState == 4 && mPodIcon->mState == 3) {
				reset();
				if ((mFlags.dwordView & 1) && Game::moviePlayer) {
					Game::moviePlayer->unsuspend(1, true);
				}
			}
		}

		if (mSequenceProc->mFlags.isSet(2)) { // done writing, can press A
			MessageWindowScreen* window = mMessageWindow;
			window->mAButton->mState    = 1;
			window->mArrowPane->mState  = 1;
		} else {
			MessageWindowScreen* window = mMessageWindow;
			window->mAButton->mState    = 0;
			window->mArrowPane->mState  = 0;
		}
		return mIsActive;
	}

	return ret;
}

/**
 * @note Address: 0x804369A0
 * @note Size: 0xCC
 */
void TControl::draw(Graphics& gfx)
{
	if (mMessageWindow && mModeFlag != MODEFLAG_Inactive) {
		gfx.mPerspGraph.setPort();
		mMessageWindow->draw(gfx, gfx.mPerspGraph);
		if (mPaneMgDemo) {
			Mtx* mtx = &gfx.mPerspGraph.mPosMtx;
			P2JME::TControl::draw(mPaneMgDemo->mGlobalMtx, *mtx);
			GXLoadPosMtxImm(*mtx, 0);
		}
		mPodIcon->draw(gfx, gfx.mPerspGraph);
	}
}

} // namespace Movie
} // namespace P2JME
