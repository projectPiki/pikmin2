#include "og/newScreen/Challenge.h"
#include "og/Screen/NaviLifeGauge.h"
#include "og/Screen/PikminCounter.h"
#include "trig.h"
#include "System.h"
#include "nans.h"

namespace og {
namespace newScreen {

static const char objChall1PUnusedArray[] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };

/**
 * @note Address: 0x80327D48
 * @note Size: 0x74
 */
ObjChallenge1P::ObjChallenge1P(const char* name)
{
	mName        = name;
	mDisp        = nullptr;
	mBloGroup    = nullptr;
	mDoping      = nullptr;
	mLifeGauge1  = nullptr;
	mLifeGauge2  = nullptr;
	mPikiCounter = nullptr;
	mPokoScreen  = nullptr;
}

/**
 * @note Address: 0x80327DBC
 * @note Size: 0x68
 */
ObjChallenge1P::~ObjChallenge1P() { }

/**
 * @note Address: 0x80327E24
 * @note Size: 0x678
 */
void ObjChallenge1P::doCreate(JKRArchive* arc)
{
	og::Screen::DispMemberChallenge1P* disp = static_cast<og::Screen::DispMemberChallenge1P*>(getDispMember());
	if (disp->isID(OWNER_OGA, MEMBER_CHALLENGE_1P)) {
		mDisp = disp;

	} else if (disp->isID(OWNER_OGA, MEMBER_DUMMY)) {
		mDisp = new og::Screen::DispMemberChallenge1P;

	} else {
		JUT_PANICLINE(122, "ERR! in ObjChallenge1P Create失敗！\n");
	}

	mDoping      = new og::Screen::DopingScreen;
	mLifeGauge1  = new og::Screen::NaviLifeGauge;
	mLifeGauge2  = new og::Screen::NaviLifeGauge;
	mPikiCounter = new og::Screen::PikminCounterChallenge1P;
	mPokoScreen  = new P2DScreen::Mgr_tuning;

	mBloGroup = new og::Screen::BloGroup(5);
	mBloGroup->addBlo("doping.blo", mDoping, 0x1040000, arc);
	mBloGroup->addBlo("orima.blo", mLifeGauge1, 0x1040000, arc);
	mBloGroup->addBlo("orima.blo", mLifeGauge2, 0x1040000, arc);
	mBloGroup->addBlo("cave_pikmin.blo", mPikiCounter, 0x1040000, arc);
	mBloGroup->addBlo("2P_challenge_poko.blo", mPokoScreen, 0x1040000, arc);

	mDoping->setCallBack(arc);
	mLifeGauge1->setCallBack(&mDisp->mOlimarData, og::Screen::CallBack_LifeGauge::LIFEGAUGE_OLIMAR);
	mLifeGauge2->setCallBack(&mDisp->mLouieData, og::Screen::CallBack_LifeGauge::LIFEGAUGE_LOUIE);
	mPikiCounter->setCallBack(arc);

	mDoping->setDopingEnable(true, true);
	og::Screen::CallBack_CounterRV* counter = og::Screen::setCallBack_CounterRV(mPokoScreen, 'Ppoko1', &mDisp->mPokoCount, 6, 1, 1, arc);
	counter->mScaleUpSoundID                = PSSE_SY_REGI_SUM_UP;
	og::Screen::setCallBack_CounterRV(mPokoScreen, 'PdeadP1', &mDisp->mDeadPikiCount, 6, 1, 1, arc);
	mTimeLeftInt = mTimeLeft;
	counter      = og::Screen::setCallBack_CounterRV(mPokoScreen, 'Ptime1', &mTimeLeftInt, 6, 1, 1, arc);
	counter->setCenteringMode(og::Screen::CallBack_CounterRV::ECM_Unknown1);

	// timer screen
	J2DPane* pane         = mPokoScreen->search('Nmenu01');
	msVal.mMenu01         = pane;
	msVal.mTimerXPos      = pane->mOffset.x;
	msVal.mTimerYPos      = pane->mOffset.y;
	msVal.mTimerXScale    = pane->mScale.x;
	msVal.mTimerYScale    = pane->mScale.y;
	msVal.mTimerXOffset   = 0.0f;
	msVal.mTimerYOffset   = 0.0f;
	msVal.mTimerXScaleMod = 1.0f;
	msVal.mTimerYScaleMod = 1.0f;
	if (pane) {
		pane->setOffset(msVal.mTimerXPos, 0.0f, msVal.mTimerYPos, 0.0f);
		msVal.mMenu01->updateScale(msVal.mTimerXScale * msVal.mTimerXScaleMod, msVal.mTimerYScale * msVal.mTimerYScaleMod);
	}

	// poko counter screen
	J2DPane* pane2       = mPokoScreen->search('Nmenu00');
	msVal.mMenu00        = pane2;
	msVal.mPokoXPos      = pane2->mOffset.x;
	msVal.mPokoYPos      = pane2->mOffset.y;
	msVal.mPokoXScale    = pane2->mScale.x;
	msVal.mPokoYScale    = pane2->mScale.y;
	msVal.mPokoXOffset   = -293.0f;
	msVal.mPokoYOffset   = -165.0f;
	msVal.mPokoXScaleMod = 1.0f;
	msVal.mPokoYScaleMod = 1.0f;
	if (pane2) {
		pane2->setOffset(msVal.mPokoXPos, -293.0f, msVal.mPokoYPos, -165.0f);
		msVal.mMenu00->updateScale(msVal.mPokoXScale * msVal.mPokoXScaleMod, msVal.mPokoYScale * msVal.mPokoYScaleMod);
	}

	// piki death screen
	J2DPane* pane3        = mPokoScreen->search('Nmenu02');
	msVal.mMenu02         = pane3;
	msVal.mPikisXPos      = pane3->mOffset.x;
	msVal.mPikisYPos      = pane3->mOffset.y;
	msVal.mPikisXScale    = pane3->mScale.x;
	msVal.mPikisYScale    = pane3->mScale.y;
	msVal.mPikisXOffset   = -160.0f;
	msVal.mPikisYOffset   = -200.0f;
	msVal.mPikisXScaleMod = 1.0f;
	msVal.mPikisYScaleMod = 1.0f;
	if (pane3) {
		pane3->setOffset(msVal.mPikisXPos, -160.0f, msVal.mPikisYPos, -200.0f);
		msVal.mMenu02->updateScale(msVal.mPikisXScale * msVal.mPikisXScaleMod, msVal.mPikisYScale * msVal.mPikisYScaleMod);
	}

	setSubLevel(mDisp->mDataGame.mFloorNum);
	doCreateAfter(arc, counter);
}

/**
 * @note Address: N/A
 * @note Size: 0x1CC
 */
void ObjChallenge1P::commonUpdate()
{
	og::Screen::DispMemberChallenge1P* disp = mDisp;
	if (disp) {
		updateTimer(disp->mTimeLimit, disp->mFloorExtendTimer);
		mDoping->setParam(mDisp->mOlimarData);
		disp = mDisp;
		if (disp->mOlimarData.mActiveNaviID) {
			mPikiCounter->setParam(disp->mDataGame, disp->mOlimarData);
		} else {
			mPikiCounter->setParam(disp->mDataGame, disp->mLouieData);
		}
	}

	P2DScreen::Mgr_tuning* screen = mPokoScreen;
	mPokoScreen->setXY((cosf(mScale * PI) + 1.0f) / 2 * 300.0f, 0.0f);

	u16 width  = System::getRenderModeObj()->fbWidth;
	u16 height = System::getRenderModeObj()->efbHeight;

	mBloGroup->rotate((f32)width / 2, (f32)height / 2, J2DROTATE_Z, 0.0f);

	f32 cosTheta = -(cosf((mScale + 1.0f) * PI / 2));
	mBloGroup->scale((1.0f - cosTheta) * 0.4f + 1.0f);
	mBloGroup->update();
}

/**
 * @note Address: 0x8032849C
 * @note Size: 0x1D4
 */
bool ObjChallenge1P::doUpdate()
{
	commonUpdate();
	return false;
}

/**
 * @note Address: 0x80328670
 * @note Size: 0x30
 */
void ObjChallenge1P::doDraw(Graphics& gfx)
{
	if (mBloGroup) {
		mBloGroup->draw(&gfx.mPerspGraph);
	}
}

/**
 * @note Address: 0x803286A0
 * @note Size: 0x228
 */
bool ObjChallenge1P::doUpdateFadein()
{
	bool check = false;
	mFadeLevel += sys->mDeltaTime;

	if (mFadeLevel > ObjChallengeBase::msBaseVal.mFadeinTime) {
		mFadeLevel = ObjChallengeBase::msBaseVal.mFadeinTime;
		check      = true;
	}
	mScale = mFadeLevel / ObjChallengeBase::msBaseVal.mFadeinTime;
	commonUpdate();
	return check;
}

/**
 * @note Address: 0x803288C8
 * @note Size: 0x4
 */
void ObjChallenge1P::doUpdateFadeinFinish() { }

/**
 * @note Address: 0x803288CC
 * @note Size: 0xC
 */
void ObjChallenge1P::doUpdateFinish() { mFadeLevel = 0.0f; }

/**
 * @note Address: 0x803288D8
 * @note Size: 0x230
 */
bool ObjChallenge1P::doUpdateFadeout()
{
	bool check = false;
	mFadeLevel += sys->mDeltaTime;
	if (mFadeLevel > ObjChallengeBase::msBaseVal.mFadeoutTime) {
		mFadeLevel = ObjChallengeBase::msBaseVal.mFadeoutTime;
		check      = true;
	}
	mScale = 1.0f - mFadeLevel / ObjChallengeBase::msBaseVal.mFadeoutTime;
	commonUpdate();
	return check;
}

/**
 * @note Address: 0x80328B08
 * @note Size: 0x4
 */
void ObjChallenge1P::doUpdateFadeoutFinish() { }

/**
 * @note Address: 0x80328B0C
 * @note Size: 0x74
 */
bool ObjChallenge1P::doStart(::Screen::StartSceneArg const* arg)
{
	ObjChallengeBase::doStart(arg);
	if (arg && arg->getSceneType() == SCENE_CHALLENGE_1P) {
		SArgChallenge1P* challArg = static_cast<SArgChallenge1P*>((::Screen::StartSceneArg*)(arg));
		mIncTimeLeftDelay         = challArg->mTimeAddDelay;
	} else {
		mIncTimeLeftDelay = 0.0f;
	}
	return true;
}

ObjChallenge1P::StaticValues ObjChallenge1P::msVal;

} // namespace newScreen
} // namespace og
