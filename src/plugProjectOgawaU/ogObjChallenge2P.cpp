#include "og/newScreen/Challenge.h"
#include "og/newScreen/Vs.h"
#include "trig.h"
#include "System.h"

namespace og {
namespace newScreen {

/**
 * @note Address: 0x8031EBE8
 * @note Size: 0x64
 */
ObjChallenge2P::ObjChallenge2P(const char* name)
{
	mName       = name;
	mDisp       = nullptr;
	mBloGroup   = nullptr;
	mPokoScreen = nullptr;
}

/**
 * @note Address: 0x8031EC4C
 * @note Size: 0x68
 */
ObjChallenge2P::~ObjChallenge2P() { }

/**
 * @note Address: 0x8031ECB4
 * @note Size: 0x6C4
 */
void ObjChallenge2P::doCreate(JKRArchive* arc)
{
	mScreenP1 = new ScreenSet;
	mScreenP2 = new ScreenSet;

	og::Screen::DispMemberChallenge2P* disp = static_cast<og::Screen::DispMemberChallenge2P*>(getDispMember());
	if (disp->isID(OWNER_OGA, MEMBER_CHALLENGE_2P)) {
		mDisp = disp;

	} else if (disp->isID(OWNER_OGA, MEMBER_DUMMY)) {
		mDisp = new og::Screen::DispMemberChallenge2P;

	} else {
		JUT_PANICLINE(151, "ERR! in ObjChallenge2P Create失敗！\n");
	}

	mPokoScreen = new P2DScreen::Mgr_tuning;
	mBloGroup   = new og::Screen::BloGroup(3);
	mBloGroup->addBlo("challenge_1P.blo", mScreenP1->mScreen, 0x1040000, arc);
	mBloGroup->addBlo("challenge_2P.blo", mScreenP2->mScreen, 0x1040000, arc);
	mBloGroup->addBlo("2P_challenge_poko.blo", mPokoScreen, 0x1040000, arc);
	mScreenP1->init(&mDisp->mOlimarData, arc, mDisp);
	mScreenP2->init(&mDisp->mLouieData, arc, mDisp);

	og::Screen::CallBack_CounterRV* counter = og::Screen::setCallBack_CounterRV(mPokoScreen, 'Ppoko1', &mDisp->mPokos, 6, 1, 1, arc);
	counter->mScaleUpSoundID                = PSSE_SY_REGI_SUM_UP;

	og::Screen::setCallBack_CounterRV(mPokoScreen, 'PdeadP1', &mDisp->mDeadPiki, 6, 1, 1, arc);
	mTimeLeftInt = mDisp->mTimeLimit;

	counter = og::Screen::setCallBack_CounterRV(mPokoScreen, 'Ptime1', &mTimeLeftInt, 6, 1, 1, arc);
	counter->setCenteringMode(og::Screen::CallBack_CounterRV::ECM_Unknown1);

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

	J2DPane* pane2       = mPokoScreen->search('Nmenu00');
	msVal.mMenu00        = pane2;
	msVal.mPokoXPos      = pane2->mOffset.x;
	msVal.mPokoYPos      = pane2->mOffset.y;
	msVal.mPokoXScale    = pane2->mScale.x;
	msVal.mPokoYScale    = pane2->mScale.y;
	msVal.mPokoXOffset   = 0.0f;
	msVal.mPokoYOffset   = 0.0f;
	msVal.mPokoXScaleMod = 1.0f;
	msVal.mPokoYScaleMod = 1.0f;
	if (pane2) {
		pane2->setOffset(msVal.mPokoXPos, 0.0f, msVal.mPokoYPos, 0.0f);
		msVal.mMenu00->updateScale(msVal.mPokoXScale * msVal.mPokoXScaleMod, msVal.mPokoYScale * msVal.mPokoYScaleMod);
	}

	J2DPane* pane3        = mPokoScreen->search('Nmenu02');
	msVal.mMenu02         = pane3;
	msVal.mPikisXPos      = pane3->mOffset.x;
	msVal.mPikisYPos      = pane3->mOffset.y;
	msVal.mPikisXScale    = pane3->mScale.x;
	msVal.mPikisYScale    = pane3->mScale.y;
	msVal.mPikisXOffset   = 0.0f;
	msVal.mPikisYOffset   = 0.0f;
	msVal.mPikisXScaleMod = 1.0f;
	msVal.mPikisYScaleMod = 1.0f;
	if (pane3) {
		pane3->setOffset(msVal.mPikisXPos, 0.0f, msVal.mPikisYPos, 0.0f);
		msVal.mMenu02->updateScale(msVal.mPikisXScale * msVal.mPikisXScaleMod, msVal.mPikisYScale * msVal.mPikisYScaleMod);
	}

	setSubLevel(mDisp->mDataGame.mFloorNum);
	doCreateAfter(arc, counter);
}

/**
 * @note Address: 0x8031F378
 * @note Size: 0x2BC
 */
void ObjChallenge2P::ScreenSet::init(og::Screen::DataNavi* data, JKRArchive* arc, og::Screen::DispMemberChallenge2P* disp)
{
	og::Screen::CallBack_CatchPiki* callback = new og::Screen::CallBack_CatchPiki;
	callback->init(mScreen, 'piki', &data->mNextThrowPiki, arc);
	mScreen->addCallBack('piki', callback);

	og::Screen::setCallBack_CounterRV(mScreen, 'c_mr', 'c_ml', 'c_ml', &data->mFollowPikis, 3, 2, 1, arc);
	og::Screen::CallBack_CounterRV* counter
	    = og::Screen::setCallBack_CounterRV(mScreen, 'c_lr', 'c_ll', 'c_ll', (u32*)&disp->mDataGame.mMapPikminCount, 3, 2, 1, arc);
	counter->mScaleUpSoundID   = PSSE_SY_PIKI_INCREMENT;
	counter->mScaleDownSoundID = PSSE_SY_PIKI_DECREMENT;

	counter = og::Screen::setCallBack_CounterRV(mScreen, 'dr_r', 'dr_l', 'dr_l', &data->mDope1Count, 3, 2, 1, arc);
	counter->setCenteringMode(og::Screen::CallBack_CounterRV::ECM_Unknown1);
	mScreen->search('dr_c')->hide();

	counter = og::Screen::setCallBack_CounterRV(mScreen, 'dy_r', 'dy_l', 'dy_l', &data->mDope0Count, 3, 2, 1, arc);
	counter->setCenteringMode(og::Screen::CallBack_CounterRV::ECM_Unknown1);
	mScreen->search('dy_c')->hide();

	mPaneToyo01 = og::Screen::TagSearch(mScreen, 'toyo_01');
	mPaneToyo00 = og::Screen::TagSearch(mScreen, 'toyo_00');

	mDoping->init(mPaneToyo01, mPaneToyo00, mScaleMgr1, mScaleMgr2);
	mLifeGauge->init(mScreen, data, og::Screen::CallBack_LifeGauge::LIFEGAUGE_OLIMAR);
	mScreen->addCallBack('back', mLifeGauge);
	mLifeGauge->setOffset(ObjVs::msVal.mLifeGaugeXOffs, ObjVs::msVal.mLifeGaugeYOffs);

	og::Screen::setCallBack_DrawAfter(mScreen, 'mete');
}

/**
 * @note Address: N/A
 * @note Size: 0xEC
 */
void ObjChallenge2P::ScreenSet::update(og::Screen::DataNavi& data)
{
	f32 scale1 = mScaleMgr1->calc();
	f32 scale2 = mScaleMgr2->calc();
	if (mPaneToyo01)
		mPaneToyo01->updateScale(scale1);
	if (mPaneToyo00)
		mPaneToyo00->updateScale(scale2);

	og::Screen::DopingCheck* dope = mDoping;
	dope->mNaviLifeRatio          = data.mNaviLifeRatio;
	dope->mFollowPiki             = data.mFollowPikis;
	dope->mNextThrowPiki          = data.mNextThrowPiki;
	dope->mSpicySprayCount        = data.mDope1Count;
	dope->mBitterSprayCount       = data.mDope0Count;
	dope->mActiveNaviID           = data.mActiveNaviID;
	dope->update();
}

/**
 * @note Address: 0x8031F634
 * @note Size: 0x260
 */
void ObjChallenge2P::commonUpdate()
{
	mScreenP1->update(mDisp->mOlimarData);
	mScreenP2->update(mDisp->mLouieData);

	f32 calc = (cosf(mScale * PI) + 1.0f) / 2;
	mScreenP1->mScreen->setXY(0.0f, calc * -300.0f);
	mScreenP2->mScreen->setXY(0.0f, calc * 300.0f);
	mPokoScreen->setXY(calc * 300.0f, 0.0f);

	updateTimer(mDisp->mTimeLimit, mDisp->mFloorExtendTimer);
	mBloGroup->update();
}

/**
 * @note Address: 0x8031F894
 * @note Size: 0x24
 */
bool ObjChallenge2P::doUpdate()
{
	commonUpdate();
	return false;
}

/**
 * @note Address: 0x8031F8B8
 * @note Size: 0x1F8
 */
void ObjChallenge2P::doDraw(Graphics& gfx)
{
	J2DPerspGraph* graf = &gfx.mPerspGraph;
	graf->setPort();

	JUtility::TColor color1 = msVal.mDividerBarColor;
	int test                = (f32)color1.a * mScale;
	color1.a                = test;
	graf->setColor(color1);

	JGeometry::TBox2f box = getDividerBar();
	graf->fillBox(box);

	JGeometry::TBox2f box2 = getDividerBar2();
	graf->fillBox(box2);

	mBloGroup->draw(graf);
}

/**
 * @note Address: 0x8031FAB0
 * @note Size: 0x4
 */
void ObjChallenge2P::doUpdateFadeinFinish() { }

/**
 * @note Address: 0x8031FAB4
 * @note Size: 0xC
 */
void ObjChallenge2P::doUpdateFinish() { mFadeLevel = 0.0f; }

/**
 * @note Address: 0x8031FAC0
 * @note Size: 0x4
 */
void ObjChallenge2P::doUpdateFadeoutFinish() { }

/**
 * @note Address: 0x8031FAC4
 * @note Size: 0x74
 */
bool ObjChallenge2P::doUpdateFadein()
{
	bool check = false;
	mFadeLevel += sys->mDeltaTime;

	if (mFadeLevel > msVal.mFadeinTime) {
		mFadeLevel = msVal.mFadeinTime;
		check      = true;
	}
	mScale = mFadeLevel / msVal.mFadeinTime;
	commonUpdate();
	return check;
}

/**
 * @note Address: 0x8031FB38
 * @note Size: 0x7C
 */
bool ObjChallenge2P::doUpdateFadeout()
{
	bool check = false;
	mFadeLevel += sys->mDeltaTime;
	if (mFadeLevel > msVal.mFadeoutTime) {
		mFadeLevel = msVal.mFadeoutTime;
		check      = true;
	}
	mScale = 1.0f - mFadeLevel / msVal.mFadeoutTime;
	commonUpdate();
	return check;
}

/**
 * @note Address: 0x8031FBB4
 * @note Size: 0x74
 */
bool ObjChallenge2P::doStart(::Screen::StartSceneArg const* arg)
{
	ObjChallengeBase::doStart(arg);
	if (arg && arg->getSceneType() == SCENE_CHALLENGE_2P) {
		SArgChallenge2P* challArg = static_cast<SArgChallenge2P*>((::Screen::StartSceneArg*)(arg));
		mIncTimeLeftDelay         = challArg->mTimeAddDelay;
	} else {
		mIncTimeLeftDelay = 0.0f;
	}
	return true;
}

ObjChallenge2P::StaticValues ObjChallenge2P::msVal;

} // namespace newScreen
} // namespace og
