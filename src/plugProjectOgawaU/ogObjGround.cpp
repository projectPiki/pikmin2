#include "og/newScreen/Ground.h"
#include "og/newScreen/Cave.h"
#include "og/newScreen/ogUtil.h"
#include "og/Screen/SunMeter.h"
#include "og/Screen/DopingScreen.h"
#include "og/Screen/NaviLifeGauge.h"
#include "og/Screen/PikminCounter.h"
#include "og/Screen/BloGroup.h"
#include "trig.h"
#include "System.h"
#include "nans.h"

namespace og {
namespace newScreen {

static const char unusedObjGroundArray[] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };

/*
 * --INFO--
 * Address:	8030DEB8
 * Size:	000094
 */
ObjGround::ObjGround(char const* name)
    : mFadeLevel(0.0f)
    , mScale(0.0f)
{
	mName         = name;
	mDisp         = nullptr;
	mOtakara      = nullptr;
	mBloGroup     = nullptr;
	mSunMeter     = nullptr;
	mDoping       = nullptr;
	mLifeGauge1   = nullptr;
	mLifeGauge2   = nullptr;
	mPikiCounter  = nullptr;
	mSensorScreen = nullptr;
	_64           = false;
	mPokos        = 0;
	_6C           = 0.0f;
}

/*
 * --INFO--
 * Address:	8030DF4C
 * Size:	0000AC
 */
ObjGround::~ObjGround() { }

/*
 * --INFO--
 * Address:	8030DFF8
 * Size:	000464
 */
void ObjGround::doCreate(JKRArchive* arc)
{
	og::Screen::DispMemberGround* disp = static_cast<og::Screen::DispMemberGround*>(getDispMember());
	if (disp->isID(OWNER_OGA, MEMBER_GROUND)) {
		mDisp = disp;

	} else if (disp->isID(OWNER_OGA, MEMBER_DUMMY)) {
		mDisp = new og::Screen::DispMemberGround;

	} else {
		JUT_PANICLINE(186, "ERR! in ObjCave CreateŽ¸”sI\n"); // yes they used the wrong class name - lmao
	}

	mSunMeter     = new og::Screen::SunMeter;
	mDoping       = new og::Screen::DopingScreen;
	mLifeGauge1   = new og::Screen::NaviLifeGauge;
	mLifeGauge2   = new og::Screen::NaviLifeGauge;
	mPikiCounter  = new og::Screen::PikminCounter;
	mSensorScreen = new P2DScreen::Mgr_tuning;

	mBloGroup = new og::Screen::BloGroup(6);
	mBloGroup->addBlo("sun_meter.blo", mSunMeter, 0x1040000, arc);
	mBloGroup->addBlo("doping.blo", mDoping, 0x1040000, arc);
	mBloGroup->addBlo("orima.blo", mLifeGauge1, 0x1040000, arc);
	mBloGroup->addBlo("orima.blo", mLifeGauge2, 0x1040000, arc);
	mBloGroup->addBlo("gr_pikmin.blo", mPikiCounter, 0x1040000, arc);
	mBloGroup->addBlo("sensor.blo", mSensorScreen, 0x1040000, arc);

	mSunMeter->setCallBack();
	mDoping->setCallBack(arc);
	mLifeGauge1->setCallBack(&mDisp->mOlimarData, og::Screen::CallBack_LifeGauge::LIFEGAUGE_OLIMAR);
	disp = mDisp;
	if (disp->mPayDebt) {
		mLifeGauge2->setCallBack(&mDisp->mLouieData, og::Screen::CallBack_LifeGauge::LIFEGAUGE_PRESIDENT);
	} else {
		mLifeGauge2->setCallBack(&mDisp->mLouieData, og::Screen::CallBack_LifeGauge::LIFEGAUGE_LOUIE);
	}
	mPikiCounter->setCallBack(arc);
	mPokos = mDisp->mDataGame.mPokoCount;
	_6C    = 0.0f;

	mOtakara = new og::Screen::OtakaraSensor;
	mOtakara->init(mSensorScreen->search('Nhari'), mSensorScreen->search('Nsensor'), mDisp->mRadarState);
	mDoping->setDopingEnable(mDisp->mUnlockedSpicy, mDisp->mUnlockedBitter);
}

/*
 * --INFO--
 * Address:	8030E45C
 * Size:	00029C
 */
void ObjGround::commonUpdate()
{
	if (!og::newScreen::checkMovieActive()) {
		mSunMeter->mCurrentTime = mDisp->mDataGame.mSunGaugeRatio;

		og::Screen::DispMemberGround* disp = mDisp;
		if (disp->mOlimarData.mActiveNaviID) {
			mDoping->setParam(disp->mOlimarData);
			mPikiCounter->setParam(mDisp->mDataGame, mDisp->mOlimarData);
		} else {
			mDoping->setParam(disp->mLouieData);
			mPikiCounter->setParam(mDisp->mDataGame, mDisp->mLouieData);
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

	mOtakara->setParam(mDisp->mTreasureDist, mDisp->mRadarState, mDisp->mRadarEnabled, mDisp->mAllTreasuresGotten);
	mOtakara->updateInit();

	if (mDisp->mHasRadar) {
		mOtakara->show();
		mOtakara->update();
		mOtakara->adjPos(msVal.mSensorX, msVal.mSensorY);
		mOtakara->adjScale(msVal.mSensorScale);
		mOtakara->setSensorVec2(ObjCave::msVal._34, ObjCave::msVal._38);
		mOtakara->setSensorVec3(ObjCave::msVal._3C, ObjCave::msVal._40);

	} else {
		mOtakara->hide();
	}

	if (mDisp->mHasBitter) {
		mDoping->openDopingUp();
		mDoping->openDopingKey();
	}

	if (mDisp->mHasSpicy) {
		mDoping->openDopingDown();
		mDoping->openDopingKey();
	}

	mDoping->adjPos(msVal.mDopingX, msVal.mDopingY);
}

/*
 * --INFO--
 * Address:	8030E6F8
 * Size:	000024
 */
bool ObjGround::doUpdate()
{
	commonUpdate();
	return false;
}

/*
 * --INFO--
 * Address:	8030E71C
 * Size:	000090
 */
void ObjGround::doDraw(Graphics& gfx)
{
	if (mDisp->mIsNotDay1) {
		mSunMeter->show();
	} else {
		mSunMeter->hide();
	}

	if (mBloGroup)
		mBloGroup->draw(&gfx.mPerspGraph);

	if (mDisp->mHasRadar)
		mOtakara->draw(gfx.mPerspGraph);
}

/*
 * --INFO--
 * Address:	8030E7AC
 * Size:	000014
 */
bool ObjGround::doStart(::Screen::StartSceneArg const*)
{
	mFadeLevel = 0.0f;
	mScale     = 0.0f;
	return true;
}

/*
 * --INFO--
 * Address:	8030E7C0
 * Size:	000010
 */
bool ObjGround::doEnd(::Screen::EndSceneArg const*)
{
	mFadeLevel = 0.0f;
	return true;
}

/*
 * --INFO--
 * Address:	8030E7D0
 * Size:	000074
 */
bool ObjGround::doUpdateFadein()
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
 * Address:	8030E844
 * Size:	000004
 */
void ObjGround::doUpdateFadeinFinish() { }

/*
 * --INFO--
 * Address:	8030E848
 * Size:	00000C
 */
void ObjGround::doUpdateFinish() { mFadeLevel = 0.0f; }

/*
 * --INFO--
 * Address:	8030E854
 * Size:	00007C
 */
bool ObjGround::doUpdateFadeout()
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
 * Address:	8030E8D0
 * Size:	000004
 */
void ObjGround::doUpdateFadeoutFinish() { }

ObjGround::StaticValues ObjGround::msVal;

} // namespace newScreen
} // namespace og
