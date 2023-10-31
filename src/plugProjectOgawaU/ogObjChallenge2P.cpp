#include "og/newScreen/Challenge.h"
#include "og/newScreen/Vs.h"
#include "trig.h"
#include "System.h"

namespace og {
namespace newScreen {

/*
 * --INFO--
 * Address:	8031EBE8
 * Size:	000064
 */
ObjChallenge2P::ObjChallenge2P(const char* name)
{
	mName       = name;
	mDisp       = nullptr;
	mBloGroup   = nullptr;
	mPokoScreen = nullptr;
}

/*
 * --INFO--
 * Address:	8031EC4C
 * Size:	000068
 */
ObjChallenge2P::~ObjChallenge2P() { }

/*
 * --INFO--
 * Address:	8031ECB4
 * Size:	0006C4
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
		JUT_PANICLINE(151, "ERR! in ObjChallenge2P CreateŽ¸”sI\n");
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

	J2DPane* pane = mPokoScreen->search('Nmenu01');
	msVal.mMenu01 = pane;
	msVal._48     = pane->mOffset.x;
	msVal._4C     = pane->mOffset.y;
	msVal._50     = pane->mScale.x;
	msVal._54     = pane->mScale.y;
	msVal._58     = 0.0f;
	msVal._5C     = 0.0f;
	msVal._60     = 1.0f;
	msVal._64     = 1.0f;
	if (pane) {
		pane->setOffset(msVal._48, 0.0f, msVal._4C, 0.0f);
		msVal.mMenu01->updateScale(msVal._50 * msVal._60, msVal._54 * msVal._64);
	}

	J2DPane* pane2 = mPokoScreen->search('Nmenu00');
	msVal.mMenu00  = pane2;
	msVal._24      = pane2->mOffset.x;
	msVal._28      = pane2->mOffset.y;
	msVal._2C      = pane2->mScale.x;
	msVal._30      = pane2->mScale.y;
	msVal._34      = 0.0f;
	msVal._38      = 0.0f;
	msVal._3C      = 1.0f;
	msVal._40      = 1.0f;
	if (pane2) {
		pane2->setOffset(msVal._24, 0.0f, msVal._28, 0.0f);
		msVal.mMenu00->updateScale(msVal._2C * msVal._3C, msVal._30 * msVal._40);
	}

	J2DPane* pane3 = mPokoScreen->search('Nmenu02');
	msVal.mMenu02  = pane3;
	msVal._6C      = pane3->mOffset.x;
	msVal._70      = pane3->mOffset.y;
	msVal._74      = pane3->mScale.x;
	msVal._78      = pane3->mScale.y;
	msVal._7C      = 0.0f;
	msVal._80      = 0.0f;
	msVal._84      = 1.0f;
	msVal._88      = 1.0f;
	if (pane3) {
		pane3->setOffset(msVal._6C, 0.0f, msVal._70, 0.0f);
		msVal.mMenu02->updateScale(msVal._74 * msVal._84, msVal._78 * msVal._88);
	}

	setSubLevel(mDisp->mDataGame.mFloorNum);
	doCreateAfter(arc, counter);
}

/*
 * --INFO--
 * Address:	8031F378
 * Size:	0002BC
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

/*
 * --INFO--
 * Address:	........
 * Size:	0000EC
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

/*
 * --INFO--
 * Address:	8031F634
 * Size:	000260
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

/*
 * --INFO--
 * Address:	8031F894
 * Size:	000024
 */
bool ObjChallenge2P::doUpdate()
{
	commonUpdate();
	return false;
}

/*
 * --INFO--
 * Address:	8031F8B8
 * Size:	0001F8
 */
void ObjChallenge2P::doDraw(Graphics& gfx)
{
	J2DPerspGraph* graf = &gfx.mPerspGraph;
	graf->setPort();

	JUtility::TColor color1 = msVal._20;
	int test                = (f32)color1.a * mScale;
	color1.a                = test;
	graf->setColor(color1);

	JGeometry::TBox2f box = getBox1();
	graf->fillBox(box);

	JGeometry::TBox2f box2 = getBox2();
	graf->fillBox(box2);

	mBloGroup->draw(graf);
}

/*
 * --INFO--
 * Address:	8031FAB0
 * Size:	000004
 */
void ObjChallenge2P::doUpdateFadeinFinish() { }

/*
 * --INFO--
 * Address:	8031FAB4
 * Size:	00000C
 */
void ObjChallenge2P::doUpdateFinish() { mFadeLevel = 0.0f; }

/*
 * --INFO--
 * Address:	8031FAC0
 * Size:	000004
 */
void ObjChallenge2P::doUpdateFadeoutFinish() { }

/*
 * --INFO--
 * Address:	8031FAC4
 * Size:	000074
 */
bool ObjChallenge2P::doUpdateFadein()
{
	bool check = false;
	mFadeLevel += sys->mDeltaTime;

	if (mFadeLevel > msVal._00) {
		mFadeLevel = msVal._00;
		check      = true;
	}
	mScale = mFadeLevel / msVal._00;
	commonUpdate();
	return check;
}

/*
 * --INFO--
 * Address:	8031FB38
 * Size:	00007C
 */
bool ObjChallenge2P::doUpdateFadeout()
{
	bool check = false;
	mFadeLevel += sys->mDeltaTime;
	if (mFadeLevel > msVal._04) {
		mFadeLevel = msVal._04;
		check      = true;
	}
	mScale = 1.0f - mFadeLevel / msVal._04;
	commonUpdate();
	return check;
}

/*
 * --INFO--
 * Address:	8031FBB4
 * Size:	000074
 */
bool ObjChallenge2P::doStart(::Screen::StartSceneArg const* arg)
{
	ObjChallengeBase::doStart(arg);
	if (arg && arg->getSceneType() == SCENE_CHALLENGE_2P) {
		SArgChallenge2P* challArg = static_cast<SArgChallenge2P*>((::Screen::StartSceneArg*)(arg));
		mIncTimeLeftDelay         = (challArg->_04);
	} else {
		mIncTimeLeftDelay = 0.0f;
	}
	return true;
}

ObjChallenge2P::StaticValues ObjChallenge2P::msVal;

} // namespace newScreen
} // namespace og
