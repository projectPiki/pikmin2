#include "og/newScreen/Cave.h"
#include "og/Screen/DopingScreen.h"
#include "og/Screen/NaviLifeGauge.h"
#include "og/Screen/PikminCounter.h"
#include "og/Screen/TotalPokoScreen.h"
#include "og/Screen/BloGroup.h"
#include "og/Screen/ogScreen.h"
#include "trig.h"
#include "System.h"
#include "nans.h"

namespace og {
namespace newScreen {

static const char objCaveUnusedArray[] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };

/*
 * --INFO--
 * Address:	8031C008
 * Size:	00009C
 */
ObjCave::ObjCave(const char* name)
{
	mFadeLevel       = 0.0f;
	mScale           = 0.0f;
	mName            = name;
	mDisp            = nullptr;
	mOtakara         = nullptr;
	mBloGroup        = nullptr;
	mDoping          = nullptr;
	mLifeGauge1      = nullptr;
	mLifeGauge2      = nullptr;
	mPikiCounter     = nullptr;
	mTotalPoko       = nullptr;
	mSensorScreen    = nullptr;
	mTotalPokoActive = false;
	mPokos           = 0;
	mTotalPokoTimer  = 0.0f;
	mPaneChika       = nullptr;
	mPaneFinalf      = nullptr;
}

/*
 * --INFO--
 * Address:	8031C0A4
 * Size:	0000AC
 */
ObjCave::~ObjCave() { }

/*
 * --INFO--
 * Address:	8031C150
 * Size:	000518
 */
void ObjCave::doCreate(JKRArchive* arc)
{
	og::Screen::DispMemberCave* disp = static_cast<og::Screen::DispMemberCave*>(getDispMember());
	if (disp->isID(OWNER_OGA, MEMBER_CAVE)) {
		mDisp = disp;

	} else if (disp->isID(OWNER_OGA, MEMBER_DUMMY)) {
		mDisp = new og::Screen::DispMemberCave;

	} else {
		JUT_PANICLINE(189, "ERR! in ObjCave CreateŽ¸”sI\n");
	}

	mDoping       = new og::Screen::DopingScreen;
	mLifeGauge1   = new og::Screen::NaviLifeGauge;
	mLifeGauge2   = new og::Screen::NaviLifeGauge;
	mPikiCounter  = new og::Screen::PikminCounterCave;
	mTotalPoko    = new og::Screen::TotalPokoScreen;
	mSensorScreen = new P2DScreen::Mgr_tuning;

	mBloGroup = new og::Screen::BloGroup(6);
	mBloGroup->addBlo("doping.blo", mDoping, 0x1040000, arc);
	mBloGroup->addBlo("orima.blo", mLifeGauge1, 0x1040000, arc);
	mBloGroup->addBlo("orima.blo", mLifeGauge2, 0x1040000, arc);
	mBloGroup->addBlo("cave_pikmin.blo", mPikiCounter, 0x1040000, arc);
	mBloGroup->addBlo("grand_cave_poko.blo", mTotalPoko, 0x1040000, arc);
	mBloGroup->addBlo("sensor.blo", mSensorScreen, 0x1040000, arc);

	mDoping->setCallBack(arc);
	mLifeGauge1->setCallBack(&mDisp->mOlimarData, og::Screen::CallBack_LifeGauge::LIFEGAUGE_OLIMAR);
	disp = mDisp;
	if (disp->mPayDebt) {
		mLifeGauge2->setCallBack(&mDisp->mLouieData, og::Screen::CallBack_LifeGauge::LIFEGAUGE_PRESIDENT);
	} else {
		mLifeGauge2->setCallBack(&mDisp->mLouieData, og::Screen::CallBack_LifeGauge::LIFEGAUGE_LOUIE);
	}

	mPikiCounter->setCallBack(arc);
	mTotalPoko->setCallBack(arc, msVal._08, msVal._0C, msVal._10, msVal._14);
	mPaneChika  = og::Screen::TagSearch(mPikiCounter, 'Pchika');
	mPaneFinalf = og::Screen::TagSearch(mPikiCounter, 'Nfinalf');

	if (mDisp->mIsFinalFloor) {
		mPaneChika->mIsVisible  = false;
		mPaneFinalf->mIsVisible = true;
	} else {
		mPaneChika->mIsVisible  = true;
		mPaneFinalf->mIsVisible = false;
	}

	mPokos = mDisp->mDataGame.mPokoCount;
	mTotalPoko->setTotalPoko(mPokos);
	mTotalPokoTimer                  = 0.0f;
	mPikiCounter->mIsTotalPokoActive = false;
	mTotalPoko->closeTotalPoko();
	mTotalPoko->hideTotalPoko();

	mOtakara = new og::Screen::OtakaraSensor;

	mOtakara->init(mSensorScreen->search('Nhari'), mSensorScreen->search('Nsensor'), mDisp->mRadarState);
	mDoSensorEff = true;

	mOtakara->setSensorVec1(msVal._2C, msVal._30);
	mDoping->setDopingEnable(mDisp->mIsBitterUnlocked, mDisp->mIsSpicyUnlocked);
}

/*
 * --INFO--
 * Address:	8031C668
 * Size:	0003A4
 */
void ObjCave::commonUpdate()
{
	if (mDisp) {
		if (mDisp->mIsFinalFloor) {
			mPaneChika->hide();
			mPaneFinalf->show();

		} else {
			mPaneChika->show();
			mPaneFinalf->hide();
		}

		mDoping->setParam(mDisp->mOlimarData);

		og::Screen::DispMemberCave* disp = mDisp;
		if (disp->mOlimarData.mActiveNaviID) {
			mPikiCounter->setParam(disp->mDataGame, disp->mOlimarData);
		} else {
			mPikiCounter->setParam(disp->mDataGame, disp->mLouieData);
		}

		if (mTotalPokoActive) {
			mTotalPokoTimer += sys->mDeltaTime;
			if (mTotalPokoTimer > 2.0f) {
				mTotalPokoActive = false;
			}

			int pokos = mDisp->mDataGame.mPokoCount;
			if (pokos != mPokos) {
				mPokos = pokos;
				mTotalPoko->setTotalPoko(mPokos);
				mTotalPokoTimer = 0.0f;
			}

		} else if (mDisp->mDataGame.mPokoCount != mPokos) {
			mTotalPokoActive = true;
			mPokos           = mDisp->mDataGame.mPokoCount;
			mTotalPoko->setTotalPoko(mPokos);
			mTotalPokoTimer = 0.0f;
		}

		if (mTotalPokoActive) {
			mPikiCounter->mIsTotalPokoActive = true;
			mTotalPoko->showTotalPoko();

		} else {
			mPikiCounter->mIsTotalPokoActive = false;
			mTotalPoko->closeTotalPoko();
		}

		if (mDisp->mPayDebt) {
			mLifeGauge2->setType(og::Screen::CallBack_LifeGauge::LIFEGAUGE_PRESIDENT);

		} else {
			mLifeGauge2->setType(og::Screen::CallBack_LifeGauge::LIFEGAUGE_LOUIE);
		}
	}

	u16 width  = System::getRenderModeObj()->fbWidth;
	u16 height = System::getRenderModeObj()->efbHeight;

	mBloGroup->rotate((f32)width / 2, (f32)height / 2, J2DROTATE_Z, 0.0f);

	f32 cosTheta = -(cosf((mScale + 1.0f) * PI / 2));
	mBloGroup->scale((1.0f - cosTheta) * 0.4f + 1.0f);
	mBloGroup->update();

	if (mDisp->mDrawSensor && mDoSensorEff && mDisp->mAppearRadar) {
		mOtakara->startSensorEff();
		mDoSensorEff = false;
	}

	mOtakara->setParam(mDisp->mTreasureDist, mDisp->mRadarState, mDisp->mRadarEnabled, mDisp->mAllTreasureGotten);
	mOtakara->updateInit();

	if (mDisp->mDrawSensor) {
		mOtakara->show();
		mOtakara->update();
		mOtakara->adjPos(msVal._18, msVal._1C);
		mOtakara->adjScale(msVal._20);
		mOtakara->setSensorVec2(msVal._34, msVal._38);
		mOtakara->setSensorVec3(msVal._3C, msVal._40);

	} else {
		mOtakara->hide();
	}

	mDoping->setDopingEnable(mDisp->mIsBitterUnlocked, mDisp->mIsSpicyUnlocked);
	mDoping->adjPos(msVal._24, msVal._28);
}

/*
 * --INFO--
 * Address:	8031CA0C
 * Size:	000024
 */
bool ObjCave::doUpdate()
{
	commonUpdate();
	return false;
}

/*
 * --INFO--
 * Address:	8031CA30
 * Size:	000064
 */
void ObjCave::doDraw(Graphics& gfx)
{
	if (mBloGroup) {
		mBloGroup->draw(&gfx.mPerspGraph);
	}

	if (mDisp->mDrawSensor) {
		mOtakara->draw(gfx.mPerspGraph);
	}
}

/*
 * --INFO--
 * Address:	8031CA94
 * Size:	000014
 */
bool ObjCave::doStart(::Screen::StartSceneArg const*)
{
	mFadeLevel = 0.0f;
	mScale     = 0.0f;
	return true;
}

/*
 * --INFO--
 * Address:	8031CAA8
 * Size:	000010
 */
bool ObjCave::doEnd(::Screen::EndSceneArg const*)
{
	mFadeLevel = 0.0f;
	return true;
}

/*
 * --INFO--
 * Address:	8031CAB8
 * Size:	000074
 */
bool ObjCave::doUpdateFadein()
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
 * Address:	8031CB2C
 * Size:	000004
 */
void ObjCave::doUpdateFadeinFinish() { }

/*
 * --INFO--
 * Address:	8031CB30
 * Size:	00000C
 */
void ObjCave::doUpdateFinish() { mFadeLevel = 0.0f; }

/*
 * --INFO--
 * Address:	8031CB3C
 * Size:	00007C
 */
bool ObjCave::doUpdateFadeout()
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
 * Address:	8031CBB8
 * Size:	000004
 */
void ObjCave::doUpdateFadeoutFinish() { }

ObjCave::StaticValues ObjCave::msVal;

} // namespace newScreen
} // namespace og
