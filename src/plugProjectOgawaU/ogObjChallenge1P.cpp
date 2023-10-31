#include "og/newScreen/Challenge.h"
#include "og/Screen/NaviLifeGauge.h"
#include "og/Screen/PikminCounter.h"
#include "trig.h"
#include "System.h"
#include "nans.h"

namespace og {
namespace newScreen {

static const char objChall1PUnusedArray[] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };

/*
 * --INFO--
 * Address:	80327D48
 * Size:	000074
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

/*
 * --INFO--
 * Address:	80327DBC
 * Size:	000068
 */
ObjChallenge1P::~ObjChallenge1P() { }

/*
 * --INFO--
 * Address:	80327E24
 * Size:	000678
 */
void ObjChallenge1P::doCreate(JKRArchive* arc)
{
	og::Screen::DispMemberChallenge1P* disp = static_cast<og::Screen::DispMemberChallenge1P*>(getDispMember());
	if (disp->isID(OWNER_OGA, MEMBER_CHALLENGE_1P)) {
		mDisp = disp;

	} else if (disp->isID(OWNER_OGA, MEMBER_DUMMY)) {
		mDisp = new og::Screen::DispMemberChallenge1P;

	} else {
		JUT_PANICLINE(122, "ERR! in ObjChallenge1P CreateŽ¸”sI\n");
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

	J2DPane* pane = mPokoScreen->search('Nmenu01');
	msVal.mMenu01 = pane;
	msVal._28     = pane->mOffset.x;
	msVal._2C     = pane->mOffset.y;
	msVal._30     = pane->mScale.x;
	msVal._34     = pane->mScale.y;
	msVal._38     = 0.0f;
	msVal._3C     = 0.0f;
	msVal._40     = 1.0f;
	msVal._44     = 1.0f;
	if (pane) {
		pane->setOffset(msVal._28, 0.0f, msVal._2C, 0.0f);
		msVal.mMenu01->updateScale(msVal._30 * msVal._40, msVal._34 * msVal._44);
	}

	J2DPane* pane2 = mPokoScreen->search('Nmenu00');
	msVal.mMenu00  = pane2;
	msVal._04      = pane2->mOffset.x;
	msVal._08      = pane2->mOffset.y;
	msVal._0C      = pane2->mScale.x;
	msVal._10      = pane2->mScale.y;
	msVal._14      = -293.0f;
	msVal._18      = -165.0f;
	msVal._1C      = 1.0f;
	msVal._20      = 1.0f;
	if (pane2) {
		pane2->setOffset(msVal._04, -293.0f, msVal._08, -165.0f);
		msVal.mMenu00->updateScale(msVal._0C * msVal._1C, msVal._10 * msVal._20);
	}

	J2DPane* pane3 = mPokoScreen->search('Nmenu02');
	msVal.mMenu02  = pane3;
	msVal._4C      = pane3->mOffset.x;
	msVal._50      = pane3->mOffset.y;
	msVal._54      = pane3->mScale.x;
	msVal._58      = pane3->mScale.y;
	msVal._5C      = -160.0f;
	msVal._60      = -200.0f;
	msVal._64      = 1.0f;
	msVal._68      = 1.0f;
	if (pane3) {
		pane3->setOffset(msVal._4C, -160.0f, msVal._50, -200.0f);
		msVal.mMenu02->updateScale(msVal._54 * msVal._64, msVal._58 * msVal._68);
	}

	setSubLevel(mDisp->mDataGame.mFloorNum);
	doCreateAfter(arc, counter);
}

/*
 * --INFO--
 * Address:	........
 * Size:	0001CC
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

/*
 * --INFO--
 * Address:	8032849C
 * Size:	0001D4
 */
bool ObjChallenge1P::doUpdate()
{
	commonUpdate();
	return false;
}

/*
 * --INFO--
 * Address:	80328670
 * Size:	000030
 */
void ObjChallenge1P::doDraw(Graphics& gfx)
{
	if (mBloGroup) {
		mBloGroup->draw(&gfx.mPerspGraph);
	}
}

/*
 * --INFO--
 * Address:	803286A0
 * Size:	000228
 */
bool ObjChallenge1P::doUpdateFadein()
{
	bool check = false;
	mFadeLevel += sys->mDeltaTime;

	if (mFadeLevel > ObjChallengeBase::msBaseVal._00) {
		mFadeLevel = ObjChallengeBase::msBaseVal._00;
		check      = true;
	}
	mScale = mFadeLevel / ObjChallengeBase::msBaseVal._00;
	commonUpdate();
	return check;
}

/*
 * --INFO--
 * Address:	803288C8
 * Size:	000004
 */
void ObjChallenge1P::doUpdateFadeinFinish() { }

/*
 * --INFO--
 * Address:	803288CC
 * Size:	00000C
 */
void ObjChallenge1P::doUpdateFinish() { mFadeLevel = 0.0f; }

/*
 * --INFO--
 * Address:	803288D8
 * Size:	000230
 */
bool ObjChallenge1P::doUpdateFadeout()
{
	bool check = false;
	mFadeLevel += sys->mDeltaTime;
	if (mFadeLevel > ObjChallengeBase::msBaseVal._04) {
		mFadeLevel = ObjChallengeBase::msBaseVal._04;
		check      = true;
	}
	mScale = 1.0f - mFadeLevel / ObjChallengeBase::msBaseVal._04;
	commonUpdate();
	return check;
}

/*
 * --INFO--
 * Address:	80328B08
 * Size:	000004
 */
void ObjChallenge1P::doUpdateFadeoutFinish() { }

/*
 * --INFO--
 * Address:	80328B0C
 * Size:	000074
 */
bool ObjChallenge1P::doStart(::Screen::StartSceneArg const* arg)
{
	ObjChallengeBase::doStart(arg);
	if (arg && arg->getSceneType() == SCENE_CHALLENGE_1P) {
		SArgChallenge1P* challArg = static_cast<SArgChallenge1P*>((::Screen::StartSceneArg*)(arg));
		mIncTimeLeftDelay         = (challArg->_04);
	} else {
		mIncTimeLeftDelay = 0.0f;
	}
	return true;
}

ObjChallenge1P::StaticValues ObjChallenge1P::msVal;

} // namespace newScreen
} // namespace og
