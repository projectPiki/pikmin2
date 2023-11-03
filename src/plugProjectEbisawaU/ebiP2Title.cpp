#include "ebi/title/TTitle.h"
#include "JSystem/J3D/J3DDrawBuffer.h"
#include "Game/GameConfig.h"
#include "Dolphin/rand.h"
#include "Controller.h"
#include "trig.h"
#include "nans.h"

static const char idk[]  = "\0\0\0\0\0\0\0\0\0";
static const char name[] = "ebiP2Title";

namespace ebi {
namespace title {

TTitleMgr* titleMgr;
TTitleMgr* TTitleMgr::_instance;

/*
 * --INFO--
 * Address:	803BCD18
 * Size:	0005EC
 */
TTitleMgr::TTitleMgr()
    : CNode("TTitleMgr")
    , mCounterCommon(0)
    , mCounterCommonMax(0)
    , mCounter2(0)
    , mCounter2Max(0)
    , mCounterControl(0)
    , mCounterControlMax(0)
    , mCounterPressStart(0)
    , mCounterPressStartMax(0)
    , mLightMgr()
{
	_F54          = true;
	mState        = 0;
	mLevelSetting = Summer;

	u32 count         = 0.0f / sys->mDeltaTime;
	mCounterCommon    = count;
	mCounterCommonMax = count;

	count        = 0.0f / sys->mDeltaTime;
	mCounter2    = count;
	mCounter2Max = count;
	_F70         = 0;
	_F71         = 0;

	count              = 0.0f / sys->mDeltaTime;
	mCounterControl    = count;
	mCounterControlMax = count;

	count                 = 0.0f / sys->mDeltaTime;
	mCounterPressStart    = count;
	mCounterPressStartMax = count;

	mController  = nullptr;
	mDrawBufferA = nullptr;
	mDrawBufferA = nullptr; // Someone made an oopsie here
}

/*
 * --INFO--
 * Address:	803BE428
 * Size:	00034C
 */
TTitleMgr::~TTitleMgr()
{
	_instance = nullptr;
	titleMgr  = nullptr;
}

/*
 * --INFO--
 * Address:	803BE774
 * Size:	000024
 */
void TTitleMgr::globalInstance() { titleMgr = Instance(); }

/*
 * --INFO--
 * Address:	803BE798
 * Size:	000048
 */
TTitleMgr* TTitleMgr::Instance()
{
	if (!_instance) {
		_instance = new TTitleMgr;
	}
	return _instance;
}

/*
 * --INFO--
 * Address:	803BE7E0
 * Size:	000050
 */
void TTitleMgr::deleteInstance()
{
	if (_instance) {
		delete _instance;
		_instance = nullptr;
	}
	titleMgr = nullptr;
}

/*
 * --INFO--
 * Address:	803BE830
 * Size:	000228
 */
void TTitleMgr::init()
{
	sys->heapStatusStart("J3DDrawBuffer", nullptr);

	mDrawBufferA          = new J3DDrawBuffer(0x400);
	j3dSys.mDrawBuffer[0] = mDrawBufferA;

	mDrawBufferB                     = new J3DDrawBuffer(0x400);
	j3dSys.mDrawBuffer[1]            = mDrawBufferB;
	j3dSys.mDrawBuffer[1]->mSortType = J3DDrawBuffer::J3DSORT_Z;
	mDrawBufferA->frameInit();
	mDrawBufferB->frameInit();

	sys->heapStatusEnd("J3DDrawBuffer");

	mCameraMgr.mPosition.x = 0.0f;
	mCameraMgr.mPosition.y = 1.0f;
	mCameraMgr.mPosition.z = 0.0f;

	mCameraMgr._18C.x = 0.0f;
	mCameraMgr._18C.y = 0.0f;
	mCameraMgr._18C.z = -1.0f;

	mCameraMgr.mLookAtPosition = mCameraMgr.mPosition;
	mCameraMgr.mLookAtPosition.y -= 1.0f;
	mCameraMgr.mViewAngle = mCameraMgr.mParms.mFOVY.mValue;
	mCameraMgr.LookAtCamera::updateMatrix();

	Graphics* gfx = sys->mGfx;
	gfx->allocateViewports(1);
	mViewport.mCamera = &mCameraMgr;
	mViewport.updateCameraAspect();

	u16 y = sys->getRenderModeObj()->efbHeight;
	u16 x = sys->getRenderModeObj()->fbWidth;
	Rectf rect(0.0f, 0.0f, x, y);
	mViewport.setRect(rect);
	gfx->addViewport(&mViewport);

	add(&mLightMgr);
	add(&mFogMgr);
	add(&mCoordMgr[0]);
	mCoordMgr[0].mName = "TCoordMgr Main";
	add(&mCoordMgr[1]);
	mCoordMgr[1].mName = "TCoordMgr Sub";

	add(&mPikminMgr);
	add(&mKoganeMgr);
	add(&mChappyMgr);
}

/*
 * --INFO--
 * Address:	........
 * Size:	000038
 */
void TTitleMgr::setDestToPiki(long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000038
 */
void TTitleMgr::setPosToPiki(long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00003C
 */
Vector2f TTitleMgr::setStartPosToPiki()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803BEA58
 * Size:	000050
 */
void TTitleMgr::setLogo()
{
	mPikminMgr.forceArriveDest();
	mKoganeMgr.mObject->outOfCalc();
	mChappyMgr.mObject->outOfCalc();
	mBlackPlane.setLogo();
	mState = 1;
}

/*
 * --INFO--
 * Address:	........
 * Size:	0001D8
 */
void TTitleMgr::calcBreakupDestination()
{
	for (int i = 0; i < 500; i++) {
		f32 angle = 4.712388f * randEbisawaFloat() + -0.785398f;
		f32 max   = mTitleParms.mMaxPikminScatterRadius.mValue;
		f32 min   = mTitleParms.mMinPikminScatterRadius.mValue;
		f32 scale = (max - min) * randEbisawaFloat() + min;

		mPikiPosList[i] = Vector2f(scale * cosf(angle) + mTitleParms.mPikiScatterOriginX.mValue,
		                           scale * sinf(angle) + mTitleParms.mPikiScatterOriginY.mValue);
	}
}

/*
 * --INFO--
 * Address:	........
 * Size:	000208
 */
void TTitleMgr::calcDestination(long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000084
 */
bool TTitleMgr::isAssemble()
{
	if (!mPikminMgr.isAssemble()) {
		return false;
	} else if (mKoganeMgr.mObject->isCalc()) {
		return false;
	} else if (mChappyMgr.mObject->isCalc()) {
		return false;
	} else {
		return true;
	}
}

/*
 * --INFO--
 * Address:	803BEAA8
 * Size:	000300
 */
void TTitleMgr::loadResource()
{
	sys->heapStatusStart("TTitleMgr::loadResource()", nullptr);
	sys->heapStatusStart("TTitleMgr::loadResource--mount_arc", nullptr);

	JKRArchive* arc = JKRArchive::mount("user/Ebisawa/title/title.szs", JKRArchive::EMM_Mem, nullptr, JKRArchive::EMD_Head);
	P2ASSERTLINE(258, arc);

	sys->heapStatusEnd("TTitleMgr::loadResource--mount_arc");

	readTitleParam(arc, "param/param_title.txt");

	if (Game::gGameConfig.mParms.mE3version.mData) {
		mCoordMgr[0].readCoordinate(arc, "logo/coordinate_eng");
		mCoordMgr[1].readCoordinate(arc, "logo/coordinate_Nintendo");
	} else {
		switch (sys->mRegion) {
		case System::LANG_JAPANESE:
			if (Game::gGameConfig.mParms.mKFesVersion.mData) {
				mCoordMgr[0].readCoordinate(arc, "logo/coordinate_eng");
			} else {
				mCoordMgr[0].readCoordinate(arc, "logo/coordinate_jpn");
			}
			mCoordMgr[1].readCoordinate(arc, "logo/coordinate_Nintendo");
			break;
		default:
			mCoordMgr[0].readCoordinate(arc, "logo/coordinate_eng");
			mCoordMgr[1].readCoordinate(arc, "logo/coordinate_Nintendo");
			break;
		}
	}

	switch (mLevelSetting) {
	case Spring:
		mLightMgr.loadSettingFile(arc, "param/param_light_spring.txt");
		mFogMgr.loadSettingFile(arc, "param/param_fog_spring.txt");
		break;
	case Summer:
		mLightMgr.loadSettingFile(arc, "param/param_light_summer.txt");
		mFogMgr.loadSettingFile(arc, "param/param_fog_summer.txt");
		break;
	case Autumn:
		mLightMgr.loadSettingFile(arc, "param/param_light_autumn.txt");
		mFogMgr.loadSettingFile(arc, "param/param_fog_autumn.txt");
		break;
	case Winter:
		mLightMgr.loadSettingFile(arc, "param/param_light_winter.txt");
		mFogMgr.loadSettingFile(arc, "param/param_fog_winter.txt");
		break;
	}

	mPikminMgr.setArchive(arc);
	mKoganeMgr.setArchive(arc);
	mChappyMgr.setArchive(arc);

	char* path = "";
	switch (mLevelSetting) {
	case Spring:
		path = "user/Ebisawa/title/bg_spring.szs";
		break;
	case Summer:
		path = "user/Ebisawa/title/bg_summer.szs";
		break;
	case Autumn:
		path = "user/Ebisawa/title/bg_autumn.szs";
		break;
	case Winter:
		path = "user/Ebisawa/title/bg_winter.szs";
		break;
	}

	sys->heapStatusStart("TTitleMgr::loadResource--mount_arc", nullptr);
	JKRArchive* levelarc = JKRArchive::mount(path, JKRArchive::EMM_Mem, nullptr, JKRArchive::EMD_Head);
	P2ASSERTLINE(342, levelarc);
	sys->heapStatusEnd("TTitleMgr::loadResource--mount_arc");

	mBlackPlane.setArchive(levelarc);
	mMapBase.setArchive(levelarc);
	mBgEnemyBase.setArchive(levelarc);

	sys->heapStatusEnd("TTitleMgr::loadResource()");
}

/*
 * --INFO--
 * Address:	803BEDA8
 * Size:	000040
 */
void TTitleMgr::initAfterLoadRes()
{
	mPikminMgr.initUnit();
	mKoganeMgr.initUnit();
	mChappyMgr.initUnit();
}

/*
 * --INFO--
 * Address:	803BEDE8
 * Size:	000044
 */
void TTitleMgr::setController(Controller* control)
{
	mController = control;
	mKoganeMgr.mObject->setController(mController);
	mChappyMgr.mObject->setController(mController);
}

/*
 * --INFO--
 * Address:	........
 * Size:	00001C
 */
void TTitleMgr::setDrawBufferToJ3DSys()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000038
 */
void TTitleMgr::inField(Vector2f& pos)
{
	// This may or may not be correct, I was just trying to get startChappy/startKogane to not inline in update
	f32 angle = randEbisawaFloat() * TAU;
	f32 x     = mTitleParms.mMaxPikminScatterRadius.mValue;

	pos = Vector2f(x * cosf(angle), mTitleParms.mMaxPikminScatterRadius.mValue * sinf(angle));
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803BEE2C
 * Size:	000070
 */
bool TTitleMgr::inField(TObjBase* obj)
{
	if (obj->isCalc()) {
		EGECircle2f bounds;
		bounds.mCenter = 0.0f;
		bounds.mRadius = mTitleParms.mMaxPikminScatterRadius.mValue;
		return bounds.in(&obj->mPosition);
	}
}

/*
 * --INFO--
 * Address:	........
 * Size:	000044
 */
void TTitleMgr::inViewField(Vector2f&, f32)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803BEEA4
 * Size:	000080
 */
bool TTitleMgr::inViewField(TObjBase* obj)
{
	if (obj->isCalc()) {
		EGEBox2f bounds(mTitleParms.mBoundsMinX.mValue, mTitleParms.mBoundsMinY.mValue, mTitleParms.mBoundsMaxX.mValue,
		                mTitleParms.mBoundsMaxY.mValue);
		bounds.in(&obj->mPosition, obj->mParms[4]);
	}
}

/*
 * --INFO--
 * Address:	........
 * Size:	000044
 */
void TTitleMgr::isInViewField(Vector2f&, f32)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803BEF24
 * Size:	000088
 */
bool TTitleMgr::isInViewField(TObjBase* obj)
{
	if (obj->isCalc()) {
		EGEBox2f bounds(mTitleParms.mBoundsMinX.mValue, mTitleParms.mBoundsMinY.mValue, mTitleParms.mBoundsMaxX.mValue,
		                mTitleParms.mBoundsMaxY.mValue);
		return bounds.isIn(obj->mPosition, obj->mParms[4]);
	}
	return false;
}

/*
 * --INFO--
 * Address:	803BEFAC
 * Size:	000044
 */
bool TTitleMgr::isOutViewField(Vector2f& pos, f32 radius)
{
	EGEBox2f bounds(mTitleParms.mBoundsMinX.mValue, mTitleParms.mBoundsMinY.mValue, mTitleParms.mBoundsMaxX.mValue,
	                mTitleParms.mBoundsMaxY.mValue);
	return bounds.isOut(pos, radius);
}

/*
 * --INFO--
 * Address:	803BEFF0
 * Size:	000088
 */
bool TTitleMgr::isOutViewField(TObjBase* obj)
{
	if (obj->isCalc()) {
		EGEBox2f bounds(mTitleParms.mBoundsMinX.mValue, mTitleParms.mBoundsMinY.mValue, mTitleParms.mBoundsMaxX.mValue,
		                mTitleParms.mBoundsMaxY.mValue);
		return bounds.isOut(obj->mPosition, obj->mParms[4]);
	} else {
		return false;
	}
}

/*
 * --INFO--
 * Address:	803BF078
 * Size:	000020
 */
Vector2f TTitleMgr::getPosOutOfViewField()
{
	return Vector2f(mTitleParms.mBoundsMinX.mValue * 2.0f, mTitleParms.mBoundsMinY.mValue * 2.0f);
}

/*
 * --INFO--
 * Address:	803BF098
 * Size:	000408
 */
void TTitleMgr::start()
{
	j3dSys.reinitGX();
	mDrawBufferA->frameInit();
	mDrawBufferB->frameInit();

	calcBreakupDestination();

	mPikminMgr.setStartPos(mPikiPosList);

	calcBreakupDestination();

	mCoordMgr[0].copyCoordinate(mPikiPosList);
	mPikminMgr.setDestPos(mPikiPosList);

	mKoganeMgr.mObject->outOfCalc();
	mChappyMgr.mObject->outOfCalc();
	mBlackPlane.start();
	mBlackPlane.updateBeforeCamera();
	mCameraMgr.mPosition = mBlackPlane.getCameraPos();
	mCameraMgr.update();

	u32 count    = 10.0f / sys->mDeltaTime;
	mCounter2    = count;
	mCounter2Max = count;
	_F70         = 0;
	_F71         = 0;

	count              = mTitleParms.mCanOpenMenuDelay.mValue / sys->mDeltaTime;
	mCounterControl    = count;
	mCounterControlMax = count;

	count                 = mTitleParms.mPressStartDelay.mValue / sys->mDeltaTime;
	mCounterPressStart    = count;
	mCounterPressStartMax = count;

	mPikminMgr.startDemo();
	mBlackPlane.start();
	mBgEnemyBase.start();
	startState(STATE1);
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000AC
 */
void TTitleMgr::windBlow()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803BF4A0
 * Size:	00020C
 */
bool TTitleMgr::breakup()
{
	calcBreakupDestination();
	mPikminMgr.setDestPos(mPikiPosList);
	mPikminMgr.quickAssemble();
	mKoganeMgr.mObject->goHome();
	mChappyMgr.mObject->goHome();
	startState(STATE1);
	return true;
}

/*
 * --INFO--
 * Address:	803BF6AC
 * Size:	0001A0
 */
bool TTitleMgr::startKogane()
{
	if (!isAssemble()) {
		return false;
	} else {
		f32 angle = randEbisawaFloat() * TAU;
		f32 x     = mTitleParms.mMaxPikminScatterRadius.mValue;
		// this and startChappy refuse to not inline in update
		Vector2f pos1(x * cosf(angle), mTitleParms.mMaxPikminScatterRadius.mValue * sinf(angle));
		Vector2f pos2;
		pos2.x = 0.0f;
		pos2.y = 0.0f;
		mKoganeMgr.mObject->startZigzagWalk(pos1, pos2);
		startState(Enemy);
		return true;
	}
}

/*
 * --INFO--
 * Address:	803BF84C
 * Size:	0001A0
 */
bool TTitleMgr::startChappy()
{
	if (!isAssemble()) {
		return false;
	} else {
		f32 angle = randEbisawaFloat() * TAU;
		f32 x     = mTitleParms.mMaxPikminScatterRadius.mValue;

		Vector2f pos1(x * cosf(angle), mTitleParms.mMaxPikminScatterRadius.mValue * sinf(angle));
		Vector2f pos2;
		pos2.x = 0.0f;
		pos2.y = 0.0f;
		mChappyMgr.mObject->startZigzagWalk(pos1, pos2);
		startState(Enemy);
		return true;
	}
}

/*
 * --INFO--
 * Address:	803BF9EC
 * Size:	00023C
 */
bool TTitleMgr::boidToAssemble(long id)
{
	mKoganeMgr.mObject->goHome();
	mChappyMgr.mObject->goHome();

	calcBreakupDestination();

	if (id == 0) {
		mCoordMgr[0].copyCoordinate(mPikiPosList);
	} else if (id == 1) {
		mCoordMgr[1].copyCoordinate(mPikiPosList);
	}
	mPikminMgr.setDestPos(mPikiPosList);

	startState(BoidDisperse);
	_F70 = 0;
	return true;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000050
 */
void TTitleMgr::boid3ToAssemble()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803BFC28
 * Size:	00001C
 */
bool TTitleMgr::isControllerOK()
{
	if (controllerOK()) {
		return true;
	}
	return false;
}

/*
 * --INFO--
 * Address:	803BFC44
 * Size:	00001C
 */
bool TTitleMgr::isPressStart()
{
	if (pressStartOK()) {
		return true;
	}
	return false;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000058
 */
void TTitleMgr::isAnyKey()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803BFC60
 * Size:	000124
 */
void TTitleMgr::startState(enumState state)
{
	u32 count;
	mState = state;
	switch (state) {
	case BoidDisperse:
		mPikminMgr.startBoid1(mTitleParms.mBoidDurationDisperse);
		count             = mTitleParms.mBoidDurationDisperse.mValue / sys->mDeltaTime;
		mCounterCommon    = count;
		mCounterCommonMax = count;
		break;
	case BoidRegroup:
		mPikminMgr.startBoid2(mTitleParms.mBoidDurationRegroup);
		count             = mTitleParms.mBoidDurationRegroup.mValue / sys->mDeltaTime;
		mCounterCommon    = count;
		mCounterCommonMax = count;
		break;
	case BoidSwirl:
		mPikminMgr.startBoid3(mTitleParms.mBoidDurationSwirl);
		count             = mTitleParms.mBoidDurationSwirl.mValue / sys->mDeltaTime;
		mCounterCommon    = count;
		mCounterCommonMax = count;
		break;
	case StartWind:
		count             = mTitleParms.mWindMoveDuration.mValue / sys->mDeltaTime;
		mCounterCommon    = count;
		mCounterCommonMax = count;
		mMapBase.startWind(mTitleParms.mPlantMoveDuration.mValue);
		break;
	case Enemy:
		count             = mTitleParms.mEnemyStayDuration.mValue / sys->mDeltaTime;
		mCounterCommon    = count;
		mCounterCommonMax = count;
		break;
	}
}

/*
 * --INFO--
 * Address:	803BFD84
 * Size:	000458
 */
bool TTitleMgr::update()
{
	if (mState != 0) {
		if (mCounter2) {
			mCounter2--;
		}
		if (mCounterControl) {
			mCounterControl--;
		}
		if (mCounterPressStart) {
			mCounterPressStart--;
		}

		if (isAssemble()) {
			_F71 = true;
		}
		if (_F71 && mController) {
			u32 press = mController->mButton.mButtonDown;
			if (press & Controller::PRESS_L) {
				boidToAssemble(0);
			} else if (press & Controller::PRESS_R) {
				boidToAssemble(1);
			}
			press = mController->mButton.mButtonDown;
			if (press & Controller::PRESS_X) {
				if (!Game::gGameConfig.mParms.mE3version.mData) {
					startChappy();
				}
			} else if (press & Controller::PRESS_Y) {
				startKogane();
			}
		}
		if (!mCounter2) {
			bool flag = false;
			if (!_F70) {
				if (isAssemble()) {
					mState            = StartWind;
					u32 count         = mTitleParms.mWindMoveDuration.mValue / sys->mDeltaTime;
					mCounterCommon    = count;
					mCounterCommonMax = count;
					mMapBase.startWind(mTitleParms.mPlantMoveDuration.mValue);
					_F70 = true;
					flag = true;
				}
			} else {
				f32 test = randEbisawaFloat();
				if (test < 0.2f) {
					if (startKogane()) {
						flag = true;
					}
				} else if (test < 0.4f) {
					if (Game::gGameConfig.mParms.mE3version.mData) {
						if (startKogane()) {
							flag = true;
						}
					} else {
						if (startChappy()) {
							flag = true;
						}
					}
				} else if (test < 0.6f) {
					if (mState != Enemy) {
						mState = BoidSwirl;
						mPikminMgr.startBoid3(mTitleParms.mBoidDurationSwirl.mValue);
						u32 count         = mTitleParms.mBoidDurationSwirl.mValue / sys->mDeltaTime;
						mCounterCommon    = count;
						mCounterCommonMax = count;
						_F70              = false;
						flag              = true;
					}
				} else {
					if (isAssemble()) {
						mState            = StartWind;
						u32 count         = mTitleParms.mWindMoveDuration.mValue / sys->mDeltaTime;
						mCounterCommon    = count;
						mCounterCommonMax = count;
						mMapBase.startWind(mTitleParms.mPlantMoveDuration);
						flag = true;
					}
				}
			}
			if (flag) {
				u32 count    = 10.0f / sys->mDeltaTime;
				mCounter2    = count;
				mCounter2Max = count;
			} else {
				u32 count    = 3.0f / sys->mDeltaTime;
				mCounter2    = count;
				mCounter2Max = count;
			}
		}
	}
	updateState();
}

/*
 * --INFO--
 * Address:	803C01DC
 * Size:	00034C
 */
void TTitleMgr::updateState()
{
	switch (mState) {
	case 0:
		return;
	case 4:
		if (mCounterCommon) {
			mCounterCommon--;
		}
		if (!mCounterCommon) {
			mState = 5;
			mPikminMgr.startBoid2(mTitleParms.mBoidDurationRegroup.mValue);
			u32 count         = mTitleParms.mBoidDurationRegroup.mValue / sys->mDeltaTime;
			mCounterCommon    = count;
			mCounterCommonMax = count;
		}
		break;
	case 5:
		if (mCounterCommon) {
			mCounterCommon--;
		}
		if (!mCounterCommon) {
			mState = 6;
			mPikminMgr.startBoid3(mTitleParms.mBoidDurationSwirl.mValue);
			u32 count         = mTitleParms.mBoidDurationSwirl.mValue / sys->mDeltaTime;
			mCounterCommon    = count;
			mCounterCommonMax = count;
		}
		break;
	case 6:
		if (mCounterCommon) {
			mCounterCommon--;
		}
		if (!mCounterCommon) {
			mPikminMgr.assemble();
			mState = 1;
		}
		break;
	case 2:
		if (mCounterCommon) {
			mCounterCommon--;
		}
		u32 test = mCounterCommonMax;
		f32 calc;
		if (test) {
			calc = 0.0f;
		} else {
			calc = (f32)mCounterCommon / mCounterCommonMax;
		}
		EGEBox2f box((mTitleParms.mBoundsMaxX.mValue - mTitleParms.mBoundsMinX.mValue) * (1.0f - calc) + mTitleParms.mBoundsMinX.mValue,
		             mTitleParms.mBoundsMaxY.mValue,
		             mTitleParms.mBoundsMinY.mValue + (mTitleParms.mBoundsMaxX.mValue - mTitleParms.mBoundsMinX.mValue) / test,
		             mTitleParms.mBoundsMaxY.mValue);

		mPikminMgr.startWindBlow(box);
		if (!mCounterCommon) {
			mState = 1;
		}
		break;
	case 3:
		if (mCounterCommon) {
			mCounterCommon--;
		}
		if (mKoganeMgr.mObject->isController() || mChappyMgr.mObject->isController()) {
			u32 count         = 10.0f / sys->mDeltaTime;
			mCounterCommon    = count;
			mCounterCommonMax = count;
		}
		if (!mCounterCommon) {
			mKoganeMgr.mObject->goHome();
			mChappyMgr.mObject->goHome();
		}
		if (!mChappyMgr.mObject->isCalc() && !mKoganeMgr.mObject->isCalc()) {
			mPikminMgr.assemble();
			mState = 1;
		}
		break;
	}

	mLightMgr.update();
	mBlackPlane.updateBeforeCamera();
	mCameraMgr.mPosition = mBlackPlane.getCameraPos();
	mCameraMgr.update();
	PSMTXCopy(mCameraMgr.mViewMatrix->mMatrix.mtxView, j3dSys.mViewMtx);
	mBlackPlane.updateAfterCamera();
	mPikminMgr.update();
	mKoganeMgr.mObject->update();
	mChappyMgr.mObject->update();
	mMapBase.update();
	mBgEnemyBase.update();
	checkEncounter_();
	mPikminMgr.enemyPushOut(mKoganeMgr.mObject);
	mPikminMgr.enemyPushOut(mChappyMgr.mObject);
}

/*
 * --INFO--
 * Address:	803C0528
 * Size:	00022C
 */
void TTitleMgr::checkEncounter_()
{
	static bool init;
	static u32 boidCalcTimer;

	if (!init) {
		boidCalcTimer = 0;
		init          = true;
	}
	boidCalcTimer++;
	if (boidCalcTimer > 10) {
		boidCalcTimer = 0;
	}

	int i = (boidCalcTimer * 500) / 10;
	int max;
	if (boidCalcTimer == 9) {
		max = 500;
	} else {
		max = (boidCalcTimer + 1) * 500 / 10;
	}

	for (; i < max; i++) {
		Pikmin::TUnit* piki = mPikminMgr.getUnit(i);
		if (piki->isCalc()) {
			f32 distmax = 1000.0f;
			if (mKoganeMgr.mObject->isCalc()) {
				Vector2f dist = mKoganeMgr.mObject->mPosition - piki->mPosition;
				if (_lenVec2D(dist) < 1000.0f) {
					distmax         = _lenVec2D(dist);
					piki->mEnemyObj = mKoganeMgr.mObject;
				}
			}
			if (mChappyMgr.mObject->isCalc()) {
				Vector2f dist = mChappyMgr.mObject->mPosition - piki->mPosition;
				if (_lenVec2D(dist) < distmax) {
					piki->mEnemyObj = mChappyMgr.mObject;
				}
			}
		}
	}
}

/*
 * --INFO--
 * Address:	803C0754
 * Size:	000268
 */
void TTitleMgr::draw()
{
	if (mState != 0) {
		if (mLevelSetting == Winter) {
			J2DPerspGraph* graf = &sys->mGfx->mPerspGraph;
			graf->setPort();
			JUtility::TColor c(255, 255, 255, 255);
			graf->setColor(c);
			u32 y    = System::getRenderModeObj()->efbHeight;
			u32 x    = System::getRenderModeObj()->fbWidth;
			f32 zero = 0.0f;
			JGeometry::TBox2f box(0.0f, 0.0f, zero + x, zero + y);
			graf->fillBox(box);
		} else {
			J2DPerspGraph* graf = &sys->mGfx->mPerspGraph;
			graf->setPort();
			JUtility::TColor c(0, 0, 0, 255);
			graf->setColor(c);
			u32 y    = System::getRenderModeObj()->efbHeight;
			u32 x    = System::getRenderModeObj()->fbWidth;
			f32 zero = 0.0f;
			JGeometry::TBox2f box(0.0f, 0.0f, zero + x, zero + y);
			graf->fillBox(box);
		}
		Viewport* vp = sys->mGfx->getViewport(0);
		vp->setViewport();
		vp->setProjection();
		mCameraMgr.setProjection();
		mLightMgr.setCameraMtx(mCameraMgr.mLookMatrix.mMatrix.mtxView);
		mFogMgr.setGX(mCameraMgr);
		j3dSys.drawInit();
		j3dSys.mDrawMode = J3DSys::SYSDRAW_Unk3;
		mDrawBufferA->draw();
		j3dSys.mDrawMode = J3DSys::SYSDRAW_Unk4;
		mDrawBufferB->draw();
		j3dSys.reinitGX();
		mDrawBufferA->frameInit();
		mDrawBufferB->frameInit();
	}
}

/*
 * --INFO--
 * Address:	........
 * Size:	000004
 */
void TTitleMgr::showInfo(long, long, long, long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803C09BC
 * Size:	00007C
 */
void TTitleMgr::readTitleParam(JKRArchive* arc, char* path)
{
	void* file = arc->getResource(path);
	if (file) {
		RamStream stream(file, -1);
		stream.resetPosition(true, 1);
		mTitleParms.read(stream);
	}
}

/*
 * --INFO--
 * Address:	803C0A98
 * Size:	000024
 */
void TTitleCameraMgr::read(Stream& file) { mParms.read(file); }

} // namespace title
} // namespace ebi
