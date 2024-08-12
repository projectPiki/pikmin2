#include "ebi/title/TTitle.h"
#include "JSystem/J3D/J3DDrawBuffer.h"
#include "Game/GameConfig.h"
#include "Dolphin/rand.h"
#include "Controller.h"
#include "trig.h"
#include "nans.h"

static const char idk[] = "\0\0\0\0\0\0\0\0\0";
static const char name[] = "ebiP2Title";

namespace ebi {
namespace title {

TTitleMgr* titleMgr;
TTitleMgr* TTitleMgr::_instance;

/**
 * @note Address: 0x803BCD18
 * @note Size: 0x5EC
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
	mState        = TITLE_Inactive;
	mLevelSetting = LEVEL_Summer;

	u32 count         = 0.0f / sys->mDeltaTime;
	mCounterCommon    = count;
	mCounterCommonMax = count;

	count         = 0.0f / sys->mDeltaTime;
	mCounter2     = count;
	mCounter2Max  = count;
	mIsWindActive = 0;
	mCanInput     = 0;

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

/**
 * @note Address: 0x803BE428
 * @note Size: 0x34C
 */
TTitleMgr::~TTitleMgr()
{
	_instance = nullptr;
	titleMgr  = nullptr;
}

/**
 * @note Address: 0x803BE774
 * @note Size: 0x24
 */
void TTitleMgr::globalInstance() { titleMgr = Instance(); }

/**
 * @note Address: 0x803BE798
 * @note Size: 0x48
 */
TTitleMgr* TTitleMgr::Instance()
{
	if (!_instance) {
		_instance = new TTitleMgr;
	}
	return _instance;
}

/**
 * @note Address: 0x803BE7E0
 * @note Size: 0x50
 */
void TTitleMgr::deleteInstance()
{
	if (_instance) {
		delete _instance;
		_instance = nullptr;
	}
	titleMgr = nullptr;
}

/**
 * @note Address: 0x803BE830
 * @note Size: 0x228
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

	mCameraMgr.mLookAtRotation.x = 0.0f;
	mCameraMgr.mLookAtRotation.y = 0.0f;
	mCameraMgr.mLookAtRotation.z = -1.0f;

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
	add(&mCoordMgr[COORD_Main]);
	mCoordMgr[COORD_Main].mName = "TCoordMgr Main";
	add(&mCoordMgr[COORD_Sub]);
	mCoordMgr[COORD_Sub].mName = "TCoordMgr Sub";

	add(&mPikminMgr);
	add(&mKoganeMgr);
	add(&mChappyMgr);
}

/**
 * @note Address: N/A
 * @note Size: 0x38
 */
void TTitleMgr::setDestToPiki(s32 index)
{
	setPosToPiki(index);
	mPikminMgr.setDestPos(mPikiPosList);
}

/**
 * @note Address: N/A
 * @note Size: 0x38
 */
void TTitleMgr::setPosToPiki(s32 index)
{
	mCoordMgr[index].copyCoordinate(mPikiPosList);
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x3C
 */
Vector2f TTitleMgr::setStartPosToPiki()
{
	mPikminMgr.setStartPos(mPikiPosList);
	calcBreakupDestination();
}

/**
 * @note Address: 0x803BEA58
 * @note Size: 0x50
 */
void TTitleMgr::setLogo()
{
	mPikminMgr.forceArriveDest();
	mKoganeMgr.mObject->outOfCalc();
	mChappyMgr.mObject->outOfCalc();
	mBlackPlane.setLogo();
	mState = TITLE_Normal;
}

/**
 * @note Address: N/A
 * @note Size: 0x1D8
 */
void TTitleMgr::calcBreakupDestination()
{
	for (int i = 0; i < 500; i++) {
		f32 angle = 4.712389f * randEbisawaFloat() + -0.78539819f;
		f32 max   = mTitleParms.mMaxPikminScatterRadius();
		f32 min   = mTitleParms.mMinPikminScatterRadius();
		f32 scale = getBreakupDistance();

		mPikiPosList[i].set(scale * cosf(angle) + mTitleParms.mPikiScatterOriginX(),
		                    scale * sinf(angle) + mTitleParms.mPikiScatterOriginY());
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x208
 */
void TTitleMgr::calcDestination(s32)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x84
 */
bool TTitleMgr::isAssemble()
{
	if (!mPikminMgr.isAssemble()) {
		return false;
	} else if (mKoganeMgr.mObject->isCalc()) {
		return false;
	} else if (mChappyMgr.mObject->isCalc()) {
		return false;
	}

	return true;
}

/**
 * @note Address: 0x803BEAA8
 * @note Size: 0x300
 */
void TTitleMgr::loadResource()
{
	sys->heapStatusStart("TTitleMgr::loadResource()", nullptr);
	sys->heapStatusStart("TTitleMgr::loadResource--mount_arc", nullptr);

	JKRArchive* arc = JKRMountArchive("user/Ebisawa/title/title.szs", JKRArchive::EMM_Mem, nullptr, JKRArchive::EMD_Head);
	P2ASSERTLINE(258, arc);

	sys->heapStatusEnd("TTitleMgr::loadResource--mount_arc");

	readTitleParam(arc, "param/param_title.txt");

	if (Game::gGameConfig.mParms.mE3version.mData) {
		mCoordMgr[COORD_Main].readCoordinate(arc, "logo/coordinate_eng");
		mCoordMgr[COORD_Sub].readCoordinate(arc, "logo/coordinate_Nintendo");
	} else {
		switch (sys->mRegion) {
		case System::LANG_Japanese:
			if (Game::gGameConfig.mParms.mKFesVersion.mData) {
				mCoordMgr[COORD_Main].readCoordinate(arc, "logo/coordinate_eng");
			} else {
				mCoordMgr[COORD_Main].readCoordinate(arc, "logo/coordinate_jpn");
			}
			mCoordMgr[COORD_Sub].readCoordinate(arc, "logo/coordinate_Nintendo");
			break;
		default:
			mCoordMgr[COORD_Main].readCoordinate(arc, "logo/coordinate_eng");
			mCoordMgr[COORD_Sub].readCoordinate(arc, "logo/coordinate_Nintendo");
			break;
		}
	}

	switch (mLevelSetting) {
	case LEVEL_Spring:
		mLightMgr.loadSettingFile(arc, "param/param_light_spring.txt");
		mFogMgr.loadSettingFile(arc, "param/param_fog_spring.txt");
		break;
	case LEVEL_Summer:
		mLightMgr.loadSettingFile(arc, "param/param_light_summer.txt");
		mFogMgr.loadSettingFile(arc, "param/param_fog_summer.txt");
		break;
	case LEVEL_Autumn:
		mLightMgr.loadSettingFile(arc, "param/param_light_autumn.txt");
		mFogMgr.loadSettingFile(arc, "param/param_fog_autumn.txt");
		break;
	case LEVEL_Winter:
		mLightMgr.loadSettingFile(arc, "param/param_light_winter.txt");
		mFogMgr.loadSettingFile(arc, "param/param_fog_winter.txt");
		break;
	}

	mPikminMgr.setArchive(arc);
	mKoganeMgr.setArchive(arc);
	mChappyMgr.setArchive(arc);

	char* path = "";
	switch (mLevelSetting) {
	case LEVEL_Spring:
		path = "user/Ebisawa/title/bg_spring.szs";
		break;
	case LEVEL_Summer:
		path = "user/Ebisawa/title/bg_summer.szs";
		break;
	case LEVEL_Autumn:
		path = "user/Ebisawa/title/bg_autumn.szs";
		break;
	case LEVEL_Winter:
		path = "user/Ebisawa/title/bg_winter.szs";
		break;
	}

	sys->heapStatusStart("TTitleMgr::loadResource--mount_arc", nullptr);
	JKRArchive* levelarc = JKRMountArchive(path, JKRArchive::EMM_Mem, nullptr, JKRArchive::EMD_Head);
	P2ASSERTLINE(342, levelarc);
	sys->heapStatusEnd("TTitleMgr::loadResource--mount_arc");

	mBlackPlane.setArchive(levelarc);
	mMapBase.setArchive(levelarc);
	mBgEnemyBase.setArchive(levelarc);

	sys->heapStatusEnd("TTitleMgr::loadResource()");
}

/**
 * @note Address: 0x803BEDA8
 * @note Size: 0x40
 */
void TTitleMgr::initAfterLoadRes()
{
	mPikminMgr.initUnit();
	mKoganeMgr.initUnit();
	mChappyMgr.initUnit();
}

/**
 * @note Address: 0x803BEDE8
 * @note Size: 0x44
 */
void TTitleMgr::setController(Controller* control)
{
	mController = control;
	mKoganeMgr.mObject->setController(mController);
	mChappyMgr.mObject->setController(mController);
}

/**
 * @note Address: N/A
 * @note Size: 0x1C
 */
void TTitleMgr::setDrawBufferToJ3DSys()
{
	// this isnt right, i cant figure out what j3dsys related thing goes here and is only 0x1C long
	mDrawBufferA->frameInit();
	// mDrawBufferB->frameInit();
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x38
 */
bool TTitleMgr::inField(Vector2f& pos)
{
	EGECircle2f bounds;
	bounds.mCenter = 0.0f;
	bounds.mRadius = mTitleParms.mMaxPikminScatterRadius();
	return bounds.in(&pos);
}

/**
 * @note Address: 0x803BEE2C
 * @note Size: 0x70
 */
bool TTitleMgr::inField(TObjBase* obj)
{
	if (obj->isCalc()) {
		return inField(obj->mPosition);
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x44
 */
bool TTitleMgr::inViewField(Vector2f& pos, f32 radius)
{
	EGEBox2f bounds;
	JGeometry::TVec2f x(mTitleParms.mBoundsMaxX(), mTitleParms.mBoundsMaxY());
	bounds.setF(x);
	JGeometry::TVec2f y(mTitleParms.mBoundsMinX(), mTitleParms.mBoundsMinY());
	bounds.setI(y);

	bounds.in(&pos, radius);
}

/**
 * @note Address: 0x803BEEA4
 * @note Size: 0x80
 */
void TTitleMgr::inViewField(TObjBase* obj)
{
	if (obj->isCalc()) {
		inViewField(obj->mPosition, obj->mParms[4]);
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x44
 */
bool TTitleMgr::isInViewField(Vector2f& pos, f32 radius)
{
	EGEBox2f bounds;
	JGeometry::TVec2f x(mTitleParms.mBoundsMaxX(), mTitleParms.mBoundsMaxY());
	bounds.setF(x);
	JGeometry::TVec2f y(mTitleParms.mBoundsMinX(), mTitleParms.mBoundsMinY());
	bounds.setI(y);

	return bounds.isIn(pos, radius);
}

/**
 * @note Address: 0x803BEF24
 * @note Size: 0x88
 */
bool TTitleMgr::isInViewField(TObjBase* obj)
{
	if (obj->isCalc()) {
		return isInViewField(obj->mPosition, obj->mParms[4]);
	}
	return false;
}

/**
 * @note Address: 0x803BEFAC
 * @note Size: 0x44
 */
bool TTitleMgr::isOutViewField(Vector2f& pos, f32 radius)
{
	EGEBox2f bounds;
	JGeometry::TVec2f x(mTitleParms.mBoundsMaxX(), mTitleParms.mBoundsMaxY());
	bounds.setF(x);
	JGeometry::TVec2f y(mTitleParms.mBoundsMinX(), mTitleParms.mBoundsMinY());
	bounds.setI(y);

	return bounds.isOut(pos, radius);
}

/**
 * @note Address: 0x803BEFF0
 * @note Size: 0x88
 */
bool TTitleMgr::isOutViewField(TObjBase* obj)
{
	if (obj->isCalc()) {
		return isOutViewField(obj->mPosition, obj->mParms[4]);
	}
	return true;
}

/**
 * @note Address: 0x803BF078
 * @note Size: 0x20
 */
Vector2f TTitleMgr::getPosOutOfViewField()
{
	return Vector2f(mTitleParms.mBoundsMinX.mValue * 2.0f, mTitleParms.mBoundsMinY.mValue * 2.0f);
}

/**
 * @note Address: 0x803BF098
 * @note Size: 0x408
 */
void TTitleMgr::start()
{
	j3dSys.reinitGX();
	mDrawBufferA->frameInit();
	mDrawBufferB->frameInit();

	calcBreakupDestination();

	setStartPosToPiki();

	setDestToPiki(0);

	mKoganeMgr.mObject->outOfCalc();
	mChappyMgr.mObject->outOfCalc();
	mBlackPlane.start();
	updateCameras();

	u32 count     = 10.0f / sys->mDeltaTime;
	mCounter2     = count;
	mCounter2Max  = count;
	mIsWindActive = 0;
	mCanInput     = 0;

	count              = mTitleParms.mCanOpenMenuDelay.mValue / sys->mDeltaTime;
	mCounterControl    = count;
	mCounterControlMax = count;

	count                 = mTitleParms.mPressStartDelay.mValue / sys->mDeltaTime;
	mCounterPressStart    = count;
	mCounterPressStartMax = count;

	mPikminMgr.startDemo();
	mBlackPlane.start();
	mBgEnemyBase.start();
	startState(TITLE_Normal);
}

/**
 * @note Address: N/A
 * @note Size: 0xAC
 */
void TTitleMgr::windBlow()
{
	f32 ratio, maxX, minX;
	minX = mTitleParms.mBoundsMinX();
	maxX = mTitleParms.mBoundsMaxX() - minX;

	ratio    = maxX / f32(mCounterCommonMax);
	f32 calc = mCounterCommonMax ? mCounterCommon / (f32)mCounterCommonMax : 0.0f;

	f32 initX = maxX * (1.0f - (mCounterCommonMax ? mCounterCommon / f32(mCounterCommonMax) : 0.0f)) + minX;
	EGEBox2f box;
	JGeometry::TVec2f i(initX, mTitleParms.mBoundsMinY());
	box.setI(i);

	JGeometry::TVec2f f(initX + ratio, mTitleParms.mBoundsMaxY());
	box.setF(f);

	mPikminMgr.startWindBlow(box);
}

/**
 * @note Address: 0x803BF4A0
 * @note Size: 0x20C
 */
bool TTitleMgr::breakup()
{
	calcBreakupDestination();
	mPikminMgr.setDestPos(mPikiPosList);
	mPikminMgr.quickAssemble();
	mKoganeMgr.mObject->goHome();
	mChappyMgr.mObject->goHome();
	startState(TITLE_Normal);
	return true;
}

/**
 * @note Address: 0x803BF6AC
 * @note Size: 0x1A0
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
		startState(TITLE_Enemy);
		return true;
	}

	FORCE_DONT_INLINE;
}

/**
 * @note Address: 0x803BF84C
 * @note Size: 0x1A0
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
		startState(TITLE_Enemy);
		return true;
	}

	FORCE_DONT_INLINE;
}

/**
 * @note Address: 0x803BF9EC
 * @note Size: 0x23C
 */
bool TTitleMgr::boidToAssemble(s32 coordType)
{
	mKoganeMgr.mObject->goHome();
	mChappyMgr.mObject->goHome();

	calcBreakupDestination();

	if (coordType == COORD_Main) {
		setPosToPiki(COORD_Main);
	} else if (coordType == COORD_Sub) {
		setPosToPiki(COORD_Sub);
	}

	mPikminMgr.setDestPos(mPikiPosList);

	startState(TITLE_BoidDisperse);
	mIsWindActive = 0;
	return true;
}

/**
 * @note Address: N/A
 * @note Size: 0x50
 */
void TTitleMgr::boid3ToAssemble()
{
	mPikminMgr.startBoid3(mTitleParms.mBoidDurationSwirl.mValue);
	u32 count         = mTitleParms.mBoidDurationSwirl.mValue / sys->mDeltaTime;
	mCounterCommon    = count;
	mCounterCommonMax = count;
	//  UNUSED FUNCTION
}

/**
 * @note Address: 0x803BFC28
 * @note Size: 0x1C
 */
bool TTitleMgr::isControllerOK()
{
	if (controllerOK()) {
		return true;
	}
	return false;
}

/**
 * @note Address: 0x803BFC44
 * @note Size: 0x1C
 */
bool TTitleMgr::isPressStart()
{
	if (pressStartOK()) {
		return true;
	}
	return false;
}

/**
 * @note Address: N/A
 * @note Size: 0x58
 */
void TTitleMgr::isAnyKey()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x803BFC60
 * @note Size: 0x124
 */
void TTitleMgr::startState(enumState state)
{
	u32 count;
	mState = state;
	switch (state) {
	case TITLE_BoidDisperse:
		mPikminMgr.startBoid1(mTitleParms.mBoidDurationDisperse);
		count             = mTitleParms.mBoidDurationDisperse.mValue / sys->mDeltaTime;
		mCounterCommon    = count;
		mCounterCommonMax = count;
		break;
	case TITLE_BoidRegroup:
		mPikminMgr.startBoid2(mTitleParms.mBoidDurationRegroup);
		count             = mTitleParms.mBoidDurationRegroup.mValue / sys->mDeltaTime;
		mCounterCommon    = count;
		mCounterCommonMax = count;
		break;
	case TITLE_BoidSwirl:
		boid3ToAssemble();
		break;
	case TITLE_StartWind:
		count             = mTitleParms.mWindMoveDuration.mValue / sys->mDeltaTime;
		mCounterCommon    = count;
		mCounterCommonMax = count;
		mMapBase.startWind(mTitleParms.mPlantMoveDuration.mValue);
		break;
	case TITLE_Enemy:
		count             = mTitleParms.mEnemyStayDuration.mValue / sys->mDeltaTime;
		mCounterCommon    = count;
		mCounterCommonMax = count;
		break;
	}
}

/**
 * @note Address: 0x803BFD84
 * @note Size: 0x458
 */
bool TTitleMgr::update()
{
	if (mState != TITLE_Inactive) {
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
			mCanInput = true;
		}
		if (mCanInput && mController) {
			u32 press = mController->getButtonDown();
			if (press & Controller::PRESS_L) {
				boidToAssemble(COORD_Main); // "Pikmin 2"
			} else if (press & Controller::PRESS_R) {
				boidToAssemble(COORD_Sub); // "Nintendo"
			}

			press = mController->getButtonDown();
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
			if (!mIsWindActive) {
				bool assembleCheck;
				if (!isAssemble()) {
					assembleCheck = false;
				} else {
					mState            = TITLE_StartWind;
					u32 count         = mTitleParms.mWindMoveDuration.mValue / sys->mDeltaTime;
					mCounterCommon    = count;
					mCounterCommonMax = count;
					mMapBase.startWind(mTitleParms.mPlantMoveDuration.mValue);
					assembleCheck = true;
				}
				if (assembleCheck) {
					mIsWindActive = true;
					flag          = true;
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
					bool assembleCheck;
					if (mState == TITLE_Enemy) {
						assembleCheck = false;
					} else {
						mState = TITLE_BoidSwirl;
						boid3ToAssemble();
						mIsWindActive = false;
						assembleCheck = true;
					}
					if (assembleCheck) {
						flag = true;
					}
				} else {
					bool assembleCheck;
					if (!isAssemble()) {
						assembleCheck = false;
					} else {
						mState            = TITLE_StartWind;
						u32 count         = mTitleParms.mWindMoveDuration.mValue / sys->mDeltaTime;
						mCounterCommon    = count;
						mCounterCommonMax = count;
						mMapBase.startWind(mTitleParms.mPlantMoveDuration);
						assembleCheck = true;
					}
					if (assembleCheck) {
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

/**
 * @note Address: 0x803C01DC
 * @note Size: 0x34C
 */
void TTitleMgr::updateState()
{
	switch (mState) {
	case TITLE_Inactive:
		return;
	case TITLE_BoidDisperse:
		if (mCounterCommon) {
			mCounterCommon--;
		}
		if (mCounterCommon == 0) {
			startState(TITLE_BoidRegroup);
		}
		break;
	case TITLE_BoidRegroup:
		if (mCounterCommon) {
			mCounterCommon--;
		}
		if (mCounterCommon == 0) {
			startState(TITLE_BoidSwirl);
		}
		break;
	case TITLE_BoidSwirl:
		if (mCounterCommon) {
			mCounterCommon--;
		}
		if (mCounterCommon == 0) {
			mPikminMgr.assemble();
			startState(TITLE_Normal);
		}
		break;
	case TITLE_StartWind:
		if (mCounterCommon) {
			mCounterCommon--;
		}
		windBlow();
		if (mCounterCommon == 0) {
			startState(TITLE_Normal);
		}
		break;
	case TITLE_Enemy:
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
			startState(TITLE_Normal);
		}
		break;
	}

	mLightMgr.update();
	updateCameras();
	PSMTXCopy(mCameraMgr.mLookMatrix.mMatrix.mtxView, j3dSys.mViewMtx);
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

/**
 * @note Address: 0x803C0528
 * @note Size: 0x22C
 */
void TTitleMgr::checkEncounter_()
{
	static int boidCalcTimer = 0;

	boidCalcTimer++;
	if (boidCalcTimer >= 10) {
		boidCalcTimer = 0;
	}

	int start = (boidCalcTimer * 500) / 10;
	int max   = (boidCalcTimer == 9) ? 500 : (boidCalcTimer + 1) * 500 / 10;

	for (int i = start; i < max; i++) {
		Pikmin::TUnit* piki = mPikminMgr.getUnit(i);
		if (piki->isCalc()) {
			f32 distmax = 1000.0f;

			if (mKoganeMgr.mObject->isCalc()) {
				piki->checkClosestEnemy(mKoganeMgr.mObject, distmax);
			}
			if (mChappyMgr.mObject->isCalc()) {
				piki->checkClosestEnemy(mChappyMgr.mObject, distmax);
			}
			// if (mKoganeMgr.mObject->isCalc()) {
			// 	Vector2f dist = mKoganeMgr.mObject->mPosition - piki->mPosition;
			// 	if (dist.length() < distmax) {
			// 		distmax         = dist.length();
			// 		piki->mEnemyObj = mKoganeMgr.mObject;
			// 	}
			// }

			// if (mChappyMgr.mObject->isCalc()) {
			// 	Vector2f dist = mChappyMgr.mObject->mPosition - piki->mPosition;
			// 	if (dist.length() < distmax) {
			// 		distmax         = dist.length();
			// 		piki->mEnemyObj = mChappyMgr.mObject;
			// 	}
			// }
		}
	}
}

/**
 * @note Address: 0x803C0754
 * @note Size: 0x268
 */
void TTitleMgr::draw()
{
	if (mState != TITLE_Inactive) {
		if (mLevelSetting == LEVEL_Winter) {
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
		Viewport* vp = sys->mGfx->getViewport(PLAYER1_VIEWPORT);
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

/**
 * @note Address: N/A
 * @note Size: 0x4
 */
void TTitleMgr::showInfo(s32, s32, s32, s32)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x803C09BC
 * @note Size: 0x7C
 */
void TTitleMgr::readTitleParam(JKRArchive* arc, char* path)
{
	void* file = arc->getResource(path);
	if (file) {
		RamStream stream(file, -1);
		stream.setMode(STREAM_MODE_TEXT, 1);
		mTitleParms.read(stream);
	}
}

} // namespace title
} // namespace ebi
