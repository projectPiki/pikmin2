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

/**
 * @note Address: 0x8030DEB8
 * @note Size: 0x94
 */
ObjGround::ObjGround(char const* name)
    : mFadeLevel(0.0f)
    , mScale(0.0f)
{
	mName              = name;
	mDisp              = nullptr;
	mOtakara           = nullptr;
	mBloGroup          = nullptr;
	mSunMeter          = nullptr;
	mDoping            = nullptr;
	mLifeGauge1        = nullptr;
	mLifeGauge2        = nullptr;
	mPikiCounter       = nullptr;
	mSensorScreen      = nullptr;
	mIsTotalPokoActive = false;
	mPokos             = 0;
	mTotalPokoTimer    = 0.0f;
}

/**
 * @note Address: 0x8030DF4C
 * @note Size: 0xAC
 */
ObjGround::~ObjGround() { }

/**
 * @note Address: 0x8030DFF8
 * @note Size: 0x464
 */
void ObjGround::doCreate(JKRArchive* arc)
{
	og::Screen::DispMemberGround* disp = static_cast<og::Screen::DispMemberGround*>(getDispMember());
	if (disp->isID(OWNER_OGA, MEMBER_GROUND)) {
		mDisp = disp;

	} else if (disp->isID(OWNER_OGA, MEMBER_DUMMY)) {
		mDisp = new og::Screen::DispMemberGround;

	} else {
		JUT_PANICLINE(186, "ERR! in ObjCave Create失敗！\n"); // yes they used the wrong class name - lmao
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
	mPokos          = mDisp->mDataGame.mPokoCount;
	mTotalPokoTimer = 0.0f;

	mOtakara = new og::Screen::OtakaraSensor;
	mOtakara->init(mSensorScreen->search('Nhari'), mSensorScreen->search('Nsensor'), mDisp->mRadarState);
	mDoping->setDopingEnable(mDisp->mUnlockedSpicy, mDisp->mUnlockedBitter);
}

/**
 * @note Address: 0x8030E45C
 * @note Size: 0x29C
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
		mOtakara->setCompleteEfxOffset(ObjCave::msVal.mTreasureRadarCompEfxXPos, ObjCave::msVal.mTreasureRadarCompEfxYPos);
		mOtakara->setAppearEfxOffset(ObjCave::msVal.mTreasureRadarAppearEfxXPos, ObjCave::msVal.mTreasureRadarAppearEfxYPos);

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

/**
 * @note Address: 0x8030E6F8
 * @note Size: 0x24
 */
bool ObjGround::doUpdate()
{
	commonUpdate();
	return false;
}

/**
 * @note Address: 0x8030E71C
 * @note Size: 0x90
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

/**
 * @note Address: 0x8030E7AC
 * @note Size: 0x14
 */
bool ObjGround::doStart(::Screen::StartSceneArg const*)
{
	mFadeLevel = 0.0f;
	mScale     = 0.0f;
	return true;
}

/**
 * @note Address: 0x8030E7C0
 * @note Size: 0x10
 */
bool ObjGround::doEnd(::Screen::EndSceneArg const*)
{
	mFadeLevel = 0.0f;
	return true;
}

/**
 * @note Address: 0x8030E7D0
 * @note Size: 0x74
 */
bool ObjGround::doUpdateFadein()
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
 * @note Address: 0x8030E844
 * @note Size: 0x4
 */
void ObjGround::doUpdateFadeinFinish() { }

/**
 * @note Address: 0x8030E848
 * @note Size: 0xC
 */
void ObjGround::doUpdateFinish() { mFadeLevel = 0.0f; }

/**
 * @note Address: 0x8030E854
 * @note Size: 0x7C
 */
bool ObjGround::doUpdateFadeout()
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
 * @note Address: 0x8030E8D0
 * @note Size: 0x4
 */
void ObjGround::doUpdateFadeoutFinish() { }

ObjGround::StaticValues ObjGround::msVal;

} // namespace newScreen
} // namespace og
