#include "Game/IllustratedBook.h"
#include "Game/SingleGame.h"
#include "Game/Entities/PelletOtakara.h"
#include "Game/Entities/PelletItem.h"
#include "Game/Entities/PelletNumber.h"
#include "Game/Entities/ShijimiChou.h"
#include "Game/AIConstants.h"
#include "Game/MapMgr.h"
#include "Game/PikiMgr.h"
#include "Game/PikiState.h"
#include "Game/DynParticle.h"
#include "Game/Farm.h"
#include "Game/rumble.h"
#include "Game/generalEnemyMgr.h"
#include "Game/GameLight.h"
#include "Game/CameraMgr.h"
#include "Game/Navi.h"
#include "Morimura/Zukan.h"
#include "Dolphin/rand.h"
#include "Screen/Game2DMgr.h"
#include "TParticle2dMgr.h"
#include "PSSystem/PSGame.h"
#include "PSM/ObjMgr.h"
#include "PSSystem/PSSystemIF.h"
#include "PSGame/PikScene.h"
#include "PSM/Scene.h"
#include "Splitter.h"
#include "nans.h"

static int sParentHeapFreeSize;

static const int unusedArray[] = { 0, 0, 0 };
static const char name[]       = "SingleGS_Zukan";

static int unusedArray2[] = { 1, 2, 3, 0 };

namespace {
const char* sDirName[4] = { "tutorial", "forest", "yakushima", "last" };
};

namespace Game {
namespace IllustratedBook {

/**
 * @note Address: N/A
 * @note Size: 0x98
 */
DebugParms::DebugParms()
    : CNode("図鑑デバッグ") // "Illustrated Book Debugging"
{
	mFlags.clear();
	_18.set(32, 32, 10, 255);
	_1C[0] = 0.05f;
	_1C[1] = 40.0f;
	_1C[2] = -100.0f;
	_1C[3] = 1.0f;
	_1C[4] = 300.0f;
	_1C[5] = 100.0f;
}

/**
 * @note Address: N/A
 * @note Size: 0x44
 */
EnemyTexMgr::EnemyTexMgr()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0xF0
 */
void EnemyTexMgr::create()
{
	IconTexture::Mgr::create(EnemyTypeID::EnemyID_COUNT);
	mLoader.loadResource("/user/Yamashita/enemyTex/arc.szs");
	ResTIMG* backup = mLoader.getResTIMG("ZZDummy/texture.bti");
	P2ASSERTLINE(466, backup);
	for (int i = 0; i < EnemyTypeID::EnemyID_COUNT; i++) {
		char* name = EnemyInfoFunc::getEnemyName(i, 0xffff);
		if (name) {
			char buffer[256];
			sprintf(buffer, "%s/texture.bti", name);
			ResTIMG* tex = mLoader.getResTIMG(buffer);
			if (tex) {
				setTexture(i, tex);
			} else {
				setTexture(i, backup);
			}
		} else {
			setTexture(i, backup);
		}
	}
}

/**
 * @note Address: 0x80221028
 * @note Size: 0x284
 */
Camera::Camera(Controller* input)
    : mController(input)
    , mTargetObject(nullptr)
    , mBasePhysicalPosition(Vector3f::zero)
    , mTrueCurrentPhysicalPos(Vector3f::zero)
    , mCameraLastMoveDest(Vector3f::zero)
    , mHorizontalAngle(0.0f)
    , mObjectRadius(350.0f)
    , mCurrentHeight(500.0f)
    , mMinHeight(0.0f)
    , mMaxHeight(700.0f)
    , mGoalPosition(Vector3f::zero)
    , mObjectOffset(Vector3f::zero)
    , mMovementVelocity(Vector3f::zero)
    , mCurrentPositionIndex(0)
    , mHorizontalInputDampened(0.0f)
    , mCurrentHorizontalInput(0.0f)
    , mVerticalInputDampened(0.0f)
    , mCurrentVerticalInput(0.0f)
    , mCurrViewAngle(45.0f)
    , mMinViewAngle(0.1f)
    , mMaxViewAngle(90.0f)
    , mFocusLevel(0.0f)
    , mCurrentBlurLevel(0.0f)
    , mDefaultMaxFocus(0.8f)
    , mCurrentShakeMagnitude(Vector3f::zero)
    , mShakeTargetPosition(Vector3f::zero)
    , mShakeUpdateVelocity(Vector3f::zero)
    , mCameraShakeOffsetPos(Vector3f::zero)
    , mVibrationForce(1.0f, 0.0f, 0.0f)
{
	setName("図鑑カメラ"); // 'illustrated book camera'
	move(Vector3f::zero);
	mCameraShakeFrequency     = 0.5f;
	mCameraShakeBaseMagnitude = 0.5f;
	mPassiveShakeBlurLevel    = 0.05f;
	mStrongShakeChance        = 0.008f;
	mStrongShakePower         = 7.0f;
	mShakeAccelRate           = 0.12f;
	mShakeDecelRate           = 0.95f;
	mCStickMoveModifierX      = 0.1f;
	mCStickMoveModifierY      = 15.0f;
	mCStickMoveAccelRate      = 0.3f;
	mFovChangeSpeed           = 0.8f;
	mFovChangeAccel           = 0.35f;
	mAnalogMoveSpeed          = 0.15f;
	mAnalogMoveAccel          = 0.15f;
	mVibrationForceMultiplier = 0.63f;
	mVibrationModX            = 0.5f;
	mVibrationModY            = 0.77f;
	mVibrationModZ            = 0.5f;
}

/**
 * @note Address: 0x802212AC
 * @note Size: 0x1D8
 */
void Camera::startVibration(int type)
{
	f32 factor;
	f32 calc = type / 29.0f;
	Vector3f mod(randFloat() - 0.5f, (randFloat() + 1.0f) * (randFloat() < 0.5f ? -1.0f : 1.0f), randFloat() - 0.5f);
	mod.normalise();
	mod *= (calc * 10.0f);
	mVibrationForce += mod;
}

/**
 * @note Address: N/A
 * @note Size: 0x184
 */
void Camera::debugDraw(Graphics& gfx)
{
	OSReport("radius:%6.3f");
	OSReport("angle :%6.3f");
	OSReport("height:%6.3f");
	OSReport("fovy  :%6.3f");
	mHorizontalAngle = 30.0f;
	// just to line stuff up.
}

/**
 * @note Address: 0x80221484
 * @note Size: 0x88
 */
void Camera::move(const Vector3f& pos)
{
	mTargetObject           = nullptr;
	mGoalPosition           = pos;
	mCameraLastMoveDest     = mGoalPosition;
	mTrueCurrentPhysicalPos = mCameraLastMoveDest;
	mLookAtPosition         = mTrueCurrentPhysicalPos;
	resetControl();
}

/**
 * @note Address: 0x8022150C
 * @note Size: 0x128
 */
void Camera::setTarget(Creature* obj)
{
	if (obj) {
		mTargetObject = obj;
		Sys::Sphere bound;
		mTargetObject->getBoundingSphere(bound);
		mGoalPosition           = bound.mPosition;
		mCameraLastMoveDest     = mGoalPosition;
		mTrueCurrentPhysicalPos = mCameraLastMoveDest;
		mLookAtPosition         = mTrueCurrentPhysicalPos;
		resetControl();
	} else {
		move(Vector3f::zero);
	}
}

/**
 * @note Address: 0x80221634
 * @note Size: 0x274
 */
void Camera::resetControl()
{
	mMovementVelocity = Vector3f::zero;
	for (int i = 0; i < 10; i++) {
		mPositionList[i] = mLookAtPosition;
	}
	mCurrentPositionIndex    = 0;
	mCurrentHorizontalInput  = 0.0f;
	mHorizontalInputDampened = 0.0f;
	mCurrentVerticalInput    = 0.0f;
	mVerticalInputDampened   = 0.0f;

	mBasePhysicalPosition = Vector3f(mCameraLastMoveDest.x + mObjectRadius * sinf(mHorizontalAngle), mCameraLastMoveDest.y,
	                                 mCameraLastMoveDest.z + mObjectRadius * cosf(mHorizontalAngle));

	if (mapMgr) {
		mBasePhysicalPosition.y = mapMgr->getMinY(mBasePhysicalPosition) + mCurrentHeight;
	}
	mPosition             = mBasePhysicalPosition + mCameraShakeOffsetPos;
	mVibrationForce       = 0.0f;
	mCameraShakeOffsetPos = 0.0f;
}

/**
 * @note Address: N/A
 * @note Size: 0x1C
 */
void Camera::setAtOffset(const Vector3f& vec)
{
	mObjectOffset.x = vec.x;
	mObjectOffset.y = vec.y;
	mObjectOffset.z = vec.z;
}

/**
 * @note Address: 0x802218A8
 * @note Size: 0x904
 */
void Camera::doUpdate()
{
	Vector3f cameraPos = Vector3f::zero;
	Sys::Sphere targetSphere;
	if (mTargetObject) {
		mTargetObject->getBoundingSphere(targetSphere);
		f32 minY = mapMgr->getMinY(targetSphere.mPosition);
		if (targetSphere.mPosition.y < minY) {
			targetSphere.mPosition.y = minY;
		}
	} else {
		targetSphere.mPosition = mCameraLastMoveDest;
	}

	mGoalPosition += mMovementVelocity;
	mPositionList[mCurrentPositionIndex] = targetSphere.mPosition;

	if (++mCurrentPositionIndex >= 10) {
		mCurrentPositionIndex = 0;
	}

	for (int i = 0; i < 10; i++) {
		cameraPos += mPositionList[i];
	}

	cameraPos *= 0.1f;

	Vector3f delta = cameraPos - mGoalPosition;
	delta *= 0.1f;
	mMovementVelocity += delta;
	mMovementVelocity *= 0.6f;

	if (!Screen::gGame2DMgr->isAppearConfirmWindow()) {
		int fovInc = ((mController->getButton() / 4) & JUTGamePad::PRESS_DPAD_LEFT)
		           - ((mController->getButton() / 8) & JUTGamePad::PRESS_DPAD_LEFT);
		addFovy(fovInc);

		f32 angleRatio = (mViewAngle - mMinViewAngle) / (mMaxViewAngle - mMinViewAngle);

		mCurrentHeight += mCStickMoveModifierY * mController->getSubStickY();
		if (mCurrentHeight < mMinHeight) {
			mCurrentHeight = mMinHeight;
		}
		if (mCurrentHeight > mMaxHeight) {
			mCurrentHeight = mMaxHeight;
		}

		mHorizontalAngle += mCStickMoveModifierX * mController->getSubStickX();
		if (mHorizontalAngle > TAU) {
			mHorizontalAngle -= TAU;
		}

		if (mHorizontalAngle < 0.0f) {
			mHorizontalAngle += TAU;
		}

		if (Screen::gGame2DMgr->isZukanEnlargedWindow()) {
			mCurrentHorizontalInput = 100.0f * mController->getMainStickX();
			mCurrentVerticalInput   = 100.0f * mController->getMainStickY();
		} else {
			mCurrentHorizontalInput = 0.0f;
			mCurrentVerticalInput   = 0.0f;
		}

		f32 factor = (angleRatio * (mAnalogMoveSpeed - mAnalogMoveAccel) + mAnalogMoveAccel);
		mHorizontalInputDampened += factor * (mCurrentHorizontalInput - mHorizontalInputDampened);
		mVerticalInputDampened += factor * (mCurrentVerticalInput - mVerticalInputDampened);

		Vector3f pos = Vector3f(mObjectRadius * sinf(mHorizontalAngle) + mCameraLastMoveDest.x, mCameraLastMoveDest.y,
		                        mObjectRadius * cosf(mHorizontalAngle) + mCameraLastMoveDest.z);
		pos.y        = mCurrentHeight + mapMgr->getMinY(pos);

		Vector3f sep = pos - mBasePhysicalPosition;
		sep *= mCStickMoveAccelRate;
		mBasePhysicalPosition += sep;

		Sys::Sphere moveSphere(mBasePhysicalPosition, 10.0f);
		MoveInfo info(&moveSphere, &Vector3f::zero, 0.0f);

		mapMgr->traceMove(info, sys->mDeltaTime);

		f32 newMinY = mapMgr->getMinY(moveSphere.mPosition) + 10.0f;
		if (moveSphere.mPosition.y < newMinY) {
			moveSphere.mPosition.y = newMinY;
		}

		mBasePhysicalPosition = moveSphere.mPosition;
	}

	Vector3f sep = mGoalPosition - mPosition;
	f32 dist     = sep.length();
	if (dist > 0.0001f) {
		sep *= 1.0f / dist;
	} else {
		sep = Vector3f(0.0f, 0.0f, -1.0f);
	}

	Vector3f yAxis(0.0f, 1.0f, 0.0f);
	Vector3f crossVec  = sep.cross(yAxis);
	Vector3f crossVec2 = crossVec.cross(yAxis);

	f32 shakeX = mCurrentShakeMagnitude.x + mHorizontalInputDampened;
	f32 shakeY = mCurrentShakeMagnitude.y + mVerticalInputDampened;
	f32 shakeZ = mCurrentShakeMagnitude.z;

	mTrueCurrentPhysicalPos.x = crossVec2.x * shakeZ + ((yAxis.x * shakeY) + ((crossVec.x * shakeX) + (mGoalPosition.x + mObjectOffset.x)));
	mTrueCurrentPhysicalPos.y = crossVec2.y * shakeZ + ((yAxis.y * shakeY) + ((crossVec.y * shakeX) + (mGoalPosition.y + mObjectOffset.y)));
	mTrueCurrentPhysicalPos.z = crossVec2.z * shakeZ + ((yAxis.z * shakeY) + ((crossVec.z * shakeX) + (mGoalPosition.z + mObjectOffset.z)));

	updateCameraShake();
	updateFocus();

	Vector3f vec = Vector3f::zero;

	mVibrationForce.x *= 0.75f * mVibrationForceMultiplier;
	mVibrationForce.y *= mVibrationForceMultiplier;
	mVibrationForce.z *= 0.75f * mVibrationForceMultiplier;

	mCameraShakeOffsetPos += mVibrationForce;

	Vector3f newSep = mCameraShakeOffsetPos - vec;
	mVibrationForce.x -= mVibrationModX * newSep.x;
	mVibrationForce.y -= mVibrationModY * newSep.y;
	mVibrationForce.z -= mVibrationModZ * newSep.z;

	mFocusLevel += 0.05f * mVibrationForce.length();

	mPosition = mBasePhysicalPosition + mCameraShakeOffsetPos;

	Vector3f lookOffset = mCameraShakeOffsetPos;
	lookOffset *= 10.0f;
	mLookAtPosition = mTrueCurrentPhysicalPos + lookOffset;
}

/**
 * @note Address: 0x802221AC
 * @note Size: 0x204
 */
void Camera::updateCameraShake()
{
	if (randFloat() < mCameraShakeFrequency) {
		f32 strength = mCameraShakeBaseMagnitude;
		mFocusLevel += mPassiveShakeBlurLevel * randFloat();

		if (randFloat() < mStrongShakeChance) {
			strength += mStrongShakePower;
		}

		mShakeTargetPosition.x = strength * (randFloat() - 0.5f);
		mShakeTargetPosition.y = strength * (randFloat() - 0.5f);
	}

	Vector3f sep = mShakeTargetPosition - mCurrentShakeMagnitude;
	sep *= mShakeAccelRate;
	mShakeUpdateVelocity += sep;
	mShakeUpdateVelocity *= mShakeDecelRate;

	mCurrentShakeMagnitude += mShakeUpdateVelocity;
}

/**
 * @note Address: 0x802223B0
 * @note Size: 0xE8
 */
void Camera::updateFocus()
{
	f64 fovAbs = fabs(mCurrViewAngle - mViewAngle);
	f32 fov    = (f32)fovAbs;
	f64 yAbs   = fabs(mCurrentHorizontalInput - mHorizontalInputDampened);
	f32 y      = (f32)yAbs;
	f64 xAbs   = fabs(mCurrentVerticalInput - mVerticalInputDampened);
	f32 x      = (f32)xAbs;
	if (fov > 1.0f || x > 30.0f || y > 30.0f) {
		mFocusLevel += 0.05f;
	}

	mCurrentBlurLevel += (0.2f - mFocusLevel) * 0.02f;
	if (mCurrentBlurLevel > 0.5f) {
		mCurrentBlurLevel = 0.5f;
	}
	if (mCurrentBlurLevel < -0.5f) {
		mCurrentBlurLevel = -0.5f;
	}
	mCurrentBlurLevel *= mDefaultMaxFocus;
	mFocusLevel += mCurrentBlurLevel;
	if (mFocusLevel > 1.0f) {
		mFocusLevel = 1.0f;
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x20
 */
f32 Camera::getFocus()
{
	f32 focus = absF(mFocusLevel);
	if (focus > 0.9f) {
		focus = 0.9f;
	}

	return focus;
}

/**
 * @note Address: 0x80222498
 * @note Size: 0x54
 */
void Camera::addFovy(f32 fov)
{
	mCurrViewAngle += fov * mFovChangeSpeed;
	if (mCurrViewAngle < mMinViewAngle) {
		mCurrViewAngle = mMinViewAngle;
	}
	if (mCurrViewAngle > mMaxViewAngle) {
		mCurrViewAngle = mMaxViewAngle;
	}
	mViewAngle += mFovChangeAccel * (mCurrViewAngle - mViewAngle);
}

} // namespace IllustratedBook

namespace SingleGame {

/**
 * @note Address: 0x802224EC
 * @note Size: 0xEC
 */
ZukanState::ZukanState()
    : State(SGS_Zukan)
{
	mCurrMode         = ModeNone;
	mDebugParms       = nullptr;
	mMapIndex         = 0;
	mController       = new Controller(JUTGamePad::PORT_0);
	mParentHeap       = nullptr;
	mMainHeap         = nullptr;
	mCurrObjHeap      = nullptr;
	mTexture2         = nullptr;
	mTexture          = nullptr;
	mHeapSize         = 0;
	mExtraHeapFor2D   = nullptr;
	_108              = 0.0f;
	mChangeSelTimer   = 0.0f;
	mChangeSelMaxTime = 1.0f;
	mChangeSelState   = 0;
	_110              = -1;
	_114              = -1;
	setMode(ModeNone);
}

/**
 * @note Address: 0x802225D8
 * @note Size: 0x36C
 */
void ZukanState::init(SingleGameSection* game, StateArg* arg)
{
	mBackupHeap = JKRGetCurrentHeap();
	gameSystem->setFlag(GAMESYS_IsGameWorldActive);
	gameSystem->setPause(false, "zukan", 3);
	gameSystem->setMoviePause(false, "zukan");
	sParentHeapFreeSize = mBackupHeap->getFreeSize();
	mParentHeap         = JKRExpHeap::create(mBackupHeap->getFreeSize(), mBackupHeap, true);
	mParentHeap->becomeCurrentHeap();
	P2ASSERTLINE(1025, arg);
	mExtraHeapFor2D = JKRExpHeap::create(0x96000, JKRGetCurrentHeap(), true);
	JUT_ASSERTLINE(1031, mExtraHeapFor2D, "ExtraHeapFor2D null\n");
	mDebugParms = new IllustratedBook::DebugParms;
	game->addGenNode(mDebugParms);
	mDelegateLoadMain   = new Delegate<ZukanState>(this, dvdloadA);
	mDelegateLoadEnemy  = new Delegate<ZukanState>(this, dvdloadB_teki);
	mDelegateLoadPellet = new Delegate<ZukanState>(this, dvdloadB_pellet);
	game->mDisplayWiper = game->mWipeInFader;
	game->mWipeInFader->start(1.0f);
	game->refreshHIO();
	mGameSect           = game;
	mDoDraw             = false;
	shadowMgr           = nullptr;
	mCurrentEnemyIndex  = -1;
	mCurrentEnemy       = nullptr;
	mCurrentPelletIndex = -1;
	mCurrentPellet      = nullptr;
	gameSystem->mMode   = GSM_PIKLOPEDIA;
	sys->dvdLoadUseCallBack(&mDvdThread, mDelegateLoadMain);
	Screen::gGame2DMgr->setGamePad(mController);
	Arg* zarg = static_cast<Arg*>(arg);
	if (zarg->mStartMode != 0) {
		setMode(ModeStartTeki);
	} else {
		setMode(ModeStartPellet);
	}
	mMapIndex       = zarg->mCourseIndex;
	generalEnemyMgr = nullptr;
	gameSystem->mTimeMgr->resetFlag(1);
}

static const char* const modeNames[9]
    = { "StartTeki", "StartPellet", "ModeChangeToTeki", "Teki", "ChangeTeki", "ModeChangeToPellet", "Pellet", "ChangePellet", "None" };

/**
 * @note Address: N/A
 * @note Size: 0xE4
 */
bool ZukanState::startTekiMode(bool force)
{
	bool result = false;
	if (force || Screen::gGame2DMgr->isZukanItem()) {
		setMode(ModeChangeToTeki);
		Morimura::DispMemberZukanEnemy disp;
		disp.mDebugExpHeap  = mExtraHeapFor2D;
		disp.mTexture       = mTexture2;
		disp.mEnemyTexMgr   = mEnemyTexMgr;
		disp.mResultTexMgr  = mResultTexture;
		disp.mPrevSelection = &_110;
		Screen::gGame2DMgr->open_ZukanEnemy(disp);
		startWipe(0.0f);
		result = true;
	}
	return result;
}

/**
 * @note Address: N/A
 * @note Size: 0xE4
 */
bool ZukanState::startPelletMode(bool force)
{
	bool result = false;
	if (force || Screen::gGame2DMgr->isZukanEnemy()) {
		setMode(ModeChangeToPellet);
		Morimura::DispMemberZukanItem disp;
		disp.mDebugExpHeap  = mExtraHeapFor2D;
		disp.mTexture       = mTexture2;
		disp.mEnemyTexMgr   = mEnemyTexMgr;
		disp.mResultTexMgr  = mResultTexture;
		disp.mPrevSelection = &_114;
		Screen::gGame2DMgr->open_ZukanItem(disp);
		startWipe(0.0f);
		result = true;
	}
	return result;
}

/**
 * @note Address: 0x80222944
 * @note Size: 0x14
 */
void ZukanState::setMode(CMode mode)
{
	if (mCurrMode != mode) {
		mCurrMode = mode;
	}
}

/**
 * @note Address: 0x80222958
 * @note Size: 0x72C
 */
void ZukanState::exec(SingleGameSection* game)
{
	if (gameSystem->mTimeMgr->isDayTime()) {
		gameSystem->mTimeMgr->mSpeedFactor = 3.0f;
	} else {
		gameSystem->mTimeMgr->mSpeedFactor = 9.0f;
	}

	if (!(mDebugParms->mFlags.isSet(2))) {
		if (mCurrMode == ModeTeki) {
			// If in the enemy mode, and the conditions to need to load something are met
			if (mCurrentEnemyIndex >= 0 && mCurrentEnemyIndex < EnemyTypeID::EnemyID_COUNT && mDoDraw
			    && mCurrentEnemyIndex == Screen::gGame2DMgr->getZukanEnemyCurrSelectId()) {
				Screen::gGame2DMgr->requireZukanEffectOff();
			} else {
				Screen::gGame2DMgr->requireZukanRequest();
			}
		} else if (mCurrMode == ModePellet) {
			// If in the pellet mode, and the conditions to need to load something are met
			if (mCurrentPelletIndex >= 0 && mCurrentPelletIndex < (u32)getMaxPelletID() && mDoDraw
			    && mCurrentPelletIndex == Screen::gGame2DMgr->getZukanItemCurrSelectId()) {
				Screen::gGame2DMgr->requireZukanEffectOff();
			} else {
				Screen::gGame2DMgr->requireZukanRequest();
			}
		} else {
			Screen::gGame2DMgr->requireZukanRequest();
		}
	} else {
		Screen::gGame2DMgr->requireZukanEffectOff();
	}

	if (!Screen::gGame2DMgr->isAppearConfirmWindow() && !Screen::gGame2DMgr->isZukanEnlargedWindow()
	    && !Screen::gGame2DMgr->isZukanMemoWindow() && (mController->getButtonDown() & (Controller::PRESS_R | Controller::PRESS_L))) {
		switch (mCurrMode) {
		case ModeTeki:
		case ModeChangeTeki:
			if (startPelletMode(false)) {
				PSSystem::spSysIF->playSystemSe(PSSE_SY_PLAYER_CHANGE, 0);
			} else {
				PSSystem::spSysIF->playSystemSe(PSSE_SY_MENU_ERROR, 0);
			}
			break;

		case ModePellet:
		case ModeChangePellet:
			if (startTekiMode(false)) {
				PSSystem::spSysIF->playSystemSe(PSSE_SY_PLAYER_CHANGE, 0);
			} else {
				PSSystem::spSysIF->playSystemSe(PSSE_SY_MENU_ERROR, 0);
			}
			break;

		default:
			PSSystem::spSysIF->playSystemSe(PSSE_SY_MENU_ERROR, 0);
			break;
		}
	}

	if (!mDoDraw) {
		gameSystem->mTimeMgr->setFlag(TIMEFLAG_Stopped);
		Screen::gGame2DMgr->update();
		if (mCurrMode == ModeStartTeki || mCurrMode == ModeStartPellet) {
			if (mDvdThread.mMode != DvdThreadCommand::CM_Completed) {
				return;
			}

			if (mCurrMode == ModeStartTeki) {
				startTekiMode(true);
			} else {
				startPelletMode(true);
			}
			return;
		}

		if (mDvdThread.mMode == DvdThreadCommand::CM_Completed) {
			static_cast<PSM::Scene_Objects*>(PSMGetChildScene())->adaptObjMgr();
			mDoDraw = true;
			gameSystem->mTimeMgr->resetFlag(TIMEFLAG_Stopped);
		}

		return;
	}

	switch (mCurrMode) {
	case ModeChangeToTeki:
		execModeChange(game, ModeTeki);
		break;
	case ModeChangeToPellet:
		execModeChange(game, ModePellet);
		break;
	case ModeTeki:
		int enemyID;
		if (!sys->dvdLoadSyncAllNoBlock()
		    && Screen::gGame2DMgr->check_ZukanEnemyRequest(enemyID) == Screen::Game2DMgr::CHECK2D_Zukan_ExitFinished) {
			clearHeaps();
			transit(game, SGS_Select, nullptr);
		} else {
			execTeki(game);
		}
		break;
	case ModePellet:
		if (!sys->dvdLoadSyncAllNoBlock()
		    && Screen::gGame2DMgr->check_ZukanItemRequest(enemyID) == Screen::Game2DMgr::CHECK2D_Zukan_ExitFinished) {
			clearHeaps();
			transit(game, SGS_Select, nullptr);
		} else {
			execPellet(game);
		}
		break;
	case ModeChangeTeki:
		execChangeTeki(game);
		break;
	case ModeChangePellet:
		execChangePellet(game);
		break;
	default:
		JUT_PANICLINE(1401, "Unknown mode : %d \n", mCurrMode);
	}

	mParms->mColorSetting.update();
}

/**
 * @note Address: 0x80223084
 * @note Size: 0x16C
 */
void ZukanState::execModeChange(SingleGameSection* game, CMode mode)
{
	switch (mChangeSelState) {
	case 0:
		if (mChangeSelTimer >= mChangeSelMaxTime && sys->dvdLoadSyncAllNoBlock() == 0) {
			mChangeSelState = 1;
		}
		break;
	case 1:
		switch (mode) {
		case ModeTeki:
			mCurrentEnemyIndex = -1;
			createTeki(mCurrentEnemyIndex);
			break;
		case ModePellet:
			mCurrentPelletIndex = -1;
			createPellet(mCurrentPelletIndex);
			break;
		default:
			JUT_PANICLINE(1459, "Illegal next mode. %d \n", mode);
			break;
		}
		mChangeSelTimer = 0.0f;
		mChangeSelState = 2;
		break;
	case 2:
		if (mChangeSelTimer >= mChangeSelMaxTime) {
			mChangeSelTimer = mChangeSelMaxTime;
			if (sys->dvdLoadSyncAllNoBlock() == 0) {
				setMode(mode);
			}
		}
		break;
	}

	if (mDoDraw) {
		mChangeSelTimer += sys->mDeltaTime;
		game->BaseGameSection::doUpdate();
	}
}

/**
 * @note Address: 0x802231F0
 * @note Size: 0xE0
 */
void ZukanState::execChangeTeki(SingleGameSection* game)
{
	switch (mChangeSelState) {
	case 0:
		mChangeSelTimer = 0.0f;
		mChangeSelState = 1;
		break;
	case 1:
		createTeki(mCurrentEnemyIndex);
		mChangeSelTimer = 0.0f;
		mChangeSelState = 2;
		break;
	case 2:
		if (mChangeSelTimer > mChangeSelMaxTime) {
			setMode(ModeTeki);
			mChangeSelTimer = mChangeSelMaxTime;
		}
		break;
	}

	if (mDoDraw) {
		mChangeSelTimer += sys->mDeltaTime;
		game->BaseGameSection::doUpdate();
	}
}

/**
 * @note Address: 0x802232D0
 * @note Size: 0x5A4
 */
void ZukanState::execTeki(SingleGameSection* game)
{
	// LET'S MAKE CARROTS
	if (mController->getButtonDown() & Controller::PRESS_A && Screen::gGame2DMgr->getZukanEnemyCurrSelectId() != -1
	    && !Screen::gGame2DMgr->isAppearConfirmWindow()) {
		Piki* piki = pikiMgr->birth();
		if (piki) {
			PikiInitArg initArg(PIKISTATE_Carrot);
			piki->init(&initArg);
			piki->changeShape(Carrot);

			Vector3f lookAtPos = mCamera->getLookAtPosition();
			Vector3f cameraPos = mCamera->getPosition();

			Vector3f viewVec;
			viewVec = mCamera->getViewVector();
			viewVec.length(); // unused + regswaps

			f32 randAngle = TAU * randFloat();
			f32 randDist  = 100.0f * randFloat();

			Vector3f direction = Vector3f(randDist * sinf(randAngle), 0.0f, randDist * cosf(randAngle));
			Vector3f position  = cameraPos; // 0x58
			Vector3f velocity  = (lookAtPos + direction) - cameraPos;
			velocity *= mDebugParms->_1C[3];

			velocity.y = velocity.y + (mDebugParms->_1C[5] * randFloat() + mDebugParms->_1C[4]);
			piki->setVelocity(velocity);

			velocity.normalise();

			Vector3f yAxis(0.0f, 1.0f, 0.0f);
			Vector3f perpVec = velocity.cross(yAxis);
			perpVec *= mDebugParms->_1C[1];
			position += perpVec;
			position.y += mDebugParms->_1C[2];

			f32 minY = 10.0f + mapMgr->getMinY(position);
			if (position.y < minY) {
				position.y = minY;
			}

			piki->setPosition(position, false);

			piki->mFaceDir = TAU * randFloat();

			PSSystem::spSysIF->playSystemSe(PSSE_PK_CARROT_THROW, 0);
		}
	}

	if (!Screen::gGame2DMgr->isAppearConfirmWindow() && mController->getButtonDown() & Controller::PRESS_Z && generalEnemyMgr) {
		GeneralMgrIterator<EnemyBase> iterator(generalEnemyMgr);
		CI_LOOP(iterator)
		{
			EnemyBase* obj = iterator.getObject();
			InteractDope act(nullptr, SPRAY_TYPE_BITTER);
			obj->stimulate(act);
		}
	}

	int newID;
	switch (Screen::gGame2DMgr->check_ZukanEnemyRequest(newID)) {
	case 1:
		if (newID != mCurrentEnemyIndex && !mDebugParms->mFlags.isSet(2)) {
			createEnemy(newID);
		}
		break;
	case 0:
		break;
	}
	game->BaseGameSection::doUpdate();
}

/**
 * @note Address: 0x80223874
 * @note Size: 0x18
 */
void ZukanState::startWipe(f32 time)
{
	mChangeSelState   = 0;
	mChangeSelTimer   = 0.0f;
	mChangeSelMaxTime = time;
}

/**
 * @note Address: 0x8022388C
 * @note Size: 0x3C
 */
void ZukanState::createEnemy(int id)
{
	if (mCurrMode != ModeTeki) {
		return;
	}

	mCurrentEnemyIndex = id;

	setMode(ModeChangeTeki);
	mChangeSelState   = 0;
	mChangeSelTimer   = 0.0f;
	mChangeSelMaxTime = 0.0f;
}

/**
 * @note Address: N/A
 * @note Size: 0x3C
 */
void ZukanState::createItem(int)
{
	OSReport("READY:%d Enemy:%d Item:%d");
	OSReport("enemy:%d item:%d");
	OSReport("heapA %d");
	OSReport("heapB %d");
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x802238C8
 * @note Size: 0xEC
 */
void SingleGame::ZukanState::execChangePellet(SingleGameSection* game)
{
	switch (mChangeSelState) {
	case 0:
		if (mChangeSelTimer > mChangeSelMaxTime) {
			mChangeSelTimer = mChangeSelMaxTime;
			mChangeSelState = 1;
		}
		break;
	case 1:
		createPellet(mCurrentPelletIndex);
		mChangeSelTimer = 0.0f;
		mChangeSelState = 2;
		break;
	case 2:
		if (mChangeSelTimer > mChangeSelMaxTime) {
			setMode(ModePellet);
			mChangeSelTimer = mChangeSelMaxTime;
		}
		break;
	}

	if (mDoDraw) {
		mChangeSelTimer += sys->mDeltaTime;
		game->BaseGameSection::doUpdate();
	}
}

/**
 * @note Address: 0x802239B4
 * @note Size: 0xB4
 */
void ZukanState::execPellet(SingleGameSection* game)
{
	getMaxPelletID();
	int arg;
	int state = Screen::gGame2DMgr->check_ZukanItemRequest(arg);
	switch (state) {
	case 0:
		break;
	case 1:
		if (arg != mCurrentPelletIndex && !mDebugParms->mFlags.isSet(2) && mCurrMode == ModePellet) {
			mCurrentPelletIndex = arg;
			setMode(ModeChangePellet);
			mChangeSelState   = 0;
			mChangeSelTimer   = 0.0f;
			mChangeSelMaxTime = 0.0f;
		}
		break;
	}
	game->BaseGameSection::doUpdate();
}

/**
 * @note Address: 0x80223A68
 * @note Size: 0x3C
 */
int ZukanState::getMaxPelletID()
{
	int ota   = PelletList::Mgr::getCount(PelletList::PLK_Otakara);
	int items = PelletList::Mgr::getCount(PelletList::PLK_Item);
	return ota + items;
}

/**
 * @note Address: 0x80223AA4
 * @note Size: 0x7C
 */
PelletConfig* ZukanState::getCurrentPelletConfig(int id)
{
	PelletConfigList* list1 = PelletList::Mgr::getConfigList(PelletList::PLK_Otakara);
	PelletConfigList* list2 = PelletList::Mgr::getConfigList(PelletList::PLK_Item);
	int index;
	PelletList::cKind kind = convertPelletID(index, id);
	if (kind == PelletList::PLK_Otakara) {
		return list1->getPelletConfig(index);
	} else {
		return list2->getPelletConfig(index);
	}
}

/**
 * @note Address: 0x80223B20
 * @note Size: 0x80
 */
PelletList::cKind ZukanState::convertPelletID(int& ret, int id)
{
	PelletList::Mgr::getConfigList(PelletList::PLK_Otakara);
	PelletList::Mgr::getConfigList(PelletList::PLK_Item);
	int num = PelletList::Mgr::getCount(PelletList::PLK_Otakara);
	PelletList::Mgr::getCount(PelletList::PLK_Item);
	PelletList::cKind kind;
	if (id < num) {
		ret  = id;
		kind = PelletList::PLK_Otakara;
	} else {
		ret  = id - num;
		kind = PelletList::PLK_Item;
	}
	return kind;
}

/**
 * @note Address: 0x80223BA0
 * @note Size: 0x274
 */
void ZukanState::draw(SingleGameSection* game, Graphics& gfx)
{
	if (mDoDraw) {
		mCamera->update();
		gfx.setupJ2DOrthoGraphDefault();
		gfx.mOrthoGraph.setPort();
		J2DFillBox(0.0f, 0.0f, getWindowWidth(), getWindowHeight(), mParms->mColorSetting.getActiveBgTopColor(),
		           mParms->mColorSetting.getActiveBgTopColor(), mParms->mColorSetting.getActiveBgBottomColor(),
		           mParms->mColorSetting.getActiveBgBottomColor());
		game->BaseGameSection::draw3D(gfx);
		drawLightEffect(game, gfx);
		mTexture2->capture(0, 0, (GXTexFmt)mTexture2->mTexInfo->mTextureFormat, false, 0);
		drawGradationEffect(game, gfx);
		mTexture2->capture(0, 0, GX_TF_RGB565, false, 0);
	}

	gfx.mOrthoGraph.setPort();
	J2DFillBox(0.0f, 0.0f, (u16)sys->getRenderModeWidth(), (u16)sys->getRenderModeHeight(), JUtility::TColor(0, 0, 0, 255));
	j3dSys.drawInit();
	game->BaseGameSection::draw2D(gfx);
}

/**
 * @note Address: 0x80223E14
 * @note Size: 0x578
 */
void ZukanState::drawGradationEffect(SingleGameSection*, Graphics& gfx)
{
	f32 focus = mCamera->getFocus();
	if (focus > 1.0f) {
		focus = 1.0f;
	}
	JUTTexture* tex = mTexture;
	tex->init();
	GXInvalidateTexAll();
	tex->capture(0, 0, GX_TF_RGB565, true, GX_FALSE);
	tex->capture(0, 0, GX_TF_RGB565, true, GX_FALSE);

	f32 min = 3.0f;
	f32 max = -min;
	for (int i = 0; i < 4; i++) {
		J2DPicture pic(tex);
		JUtility::TColor color(255, 255, 255, 127);
		{
			JUtility::TColor color3 = color;
			JUtility::TColor color2 = color;
			JUtility::TColor color1 = color;
			JUtility::TColor color0 = color;
			pic.setCornerColorRef(color0, color1, color2, color3);
		}
		GXSetAlphaUpdate(GX_FALSE);
		pic.draw(min, min, mWindowBounds.getWidth(), mWindowBounds.getHeight(), false, false, false);

		color.a -= 16;
		{
			JUtility::TColor color3 = color;
			JUtility::TColor color2 = color;
			JUtility::TColor color1 = color;
			JUtility::TColor color0 = color;
			pic.setCornerColorRef(color0, color1, color2, color3);
		}
		pic.draw(max, min, mWindowBounds.getWidth(), mWindowBounds.getHeight(), false, false, false);

		color.a -= 16;
		{
			JUtility::TColor color3 = color;
			JUtility::TColor color2 = color;
			JUtility::TColor color1 = color;
			JUtility::TColor color0 = color;
			pic.setCornerColorRef(color0, color1, color2, color3);
		}
		pic.draw(min, max, mWindowBounds.getWidth(), mWindowBounds.getHeight(), false, false, false);

		color.a -= 16;
		{
			JUtility::TColor color3 = color;
			JUtility::TColor color2 = color;
			JUtility::TColor color1 = color;
			JUtility::TColor color0 = color;
			pic.setCornerColorRef(color0, color1, color2, color3);
		}
		pic.draw(max, max, mWindowBounds.getWidth(), mWindowBounds.getHeight(), false, false, false);

		GXInvalidateTexAll();
		tex->capture(0, 0, GX_TF_RGB565, true, GX_FALSE);
	}

	gfx.setupJ2DOrthoGraphDefault();
	gfx.mOrthoGraph.setPort();

	J2DPicture pic(mTexture2);
	J2DPicture* picPtr = &pic;
	picPtr->insert(tex, pic.mTextureCount, 1.0f);
	f32 inv = 1.0f - focus;
	picPtr->setBlendColorRatio(inv, focus, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
	picPtr->setBlendAlphaRatio(inv, focus, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
	picPtr->draw(0.0f, 0.0f, 0, false, false, false);
}

/**
 * @note Address: 0x8022438C
 * @note Size: 0x7C0
 */
void ZukanState::drawLightEffect(SingleGameSection* game, Graphics& gfx)
{
	GXInvalidateTexAll();
	mTexture->capture(0, 0, GX_TF_RGB565, true, GX_FALSE);
	gfx.setupJ2DOrthoGraphDefault();
	gfx.mOrthoGraph.setPort();

	Vector3f sep = mCamera->mLookAtPosition - mCamera->mPosition;
	sep.normalise();

	Color4 color; // r30, r29, r28, r27
	if (mCurrMode == ModePellet) {
		sep.y += JMath::sincosTable_.mTable[113].first;
		sep.y /= JMath::sincosTable_.mTable[56].first;
		sep.y += 0.1f;
		color = mParms->mColorSetting.mActiveGlowColor;
	} else {
		sep.y += JMath::sincosTable_.mTable[85].first;
		sep.y /= JMath::sincosTable_.mTable[56].first;
		color = mParms->mColorSetting.mActiveGlowColor;
	}

	if (sep.y < 0.0f) {
		sep.y = 0.0f;
	} else if (sep.y > 1.0f) {
		sep.y = 1.0f;
	}

	_108 += mDebugParms->_1C[0] * (sep.y - _108);

	if (_108 > 0.0f) {
		f32 x = mWindowBounds.getWidth();  // f27
		f32 y = mWindowBounds.getHeight(); // f26

		mTexture->load(GX_TEXMAP0);
		GXSetNumChans(1);
		GXSetNumTevStages(1);
		GXSetTevColorIn(GX_TEVSTAGE0, GX_CC_ZERO, GX_CC_C0, GX_CC_TEXC, GX_CC_ZERO);
		GXSetTevColorOp(GX_TEVSTAGE0, GX_TEV_ADD, GX_TB_ZERO, GX_CS_DIVIDE_2, GX_TRUE, GX_TEVPREV);
		GXSetTevAlphaIn(GX_TEVSTAGE0, GX_CA_ZERO, GX_CA_A0, GX_CA_TEXA, GX_CA_ZERO);
		GXSetTevAlphaOp(GX_TEVSTAGE0, GX_TEV_ADD, GX_TB_ZERO, GX_CS_SCALE_1, GX_TRUE, GX_TEVPREV);
		GXSetTevOrder(GX_TEVSTAGE0, GX_TEXCOORD0, GX_TEXMAP0, GX_COLOR0A0);
		GXSetChanCtrl(GX_COLOR0A0, GX_FALSE, GX_SRC_REG, GX_SRC_VTX, 0, GX_DF_NONE, GX_AF_NONE);
		GXClearVtxDesc();
		GXSetVtxDesc(GX_VA_POS, GX_DIRECT);
		GXSetVtxDesc(GX_VA_CLR0, GX_DIRECT);
		GXSetVtxDesc(GX_VA_TEX0, GX_DIRECT);
		GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_POS, GX_POS_XYZ, GX_F32, 0);
		GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_CLR0, GX_POS_XYZ, GX_RGBA8, 0);
		GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_TEX0, GX_POS_XYZ, GX_F32, 0);
		GXSetBlendMode(GX_BM_BLEND, GX_BL_SRCALPHA, GX_BL_ONE, GX_LO_SET);
		GXSetZMode(GX_FALSE, GX_LESS, GX_FALSE);
		GXSetCurrentMtx(0);
		GXSetNumTexGens(1);
		GXSetTexCoordGen2(GX_TEXCOORD0, GX_TG_MTX3X4, GX_TG_TEXCOORD0, GX_IDENTITY, GX_FALSE, GX_PTIDENTITY);

		for (int i = 0; i < 4; i++) {
			f32 thisFactor = (f32)i / 4;
			f32 nextFactor = (f32)(i + 1) / 4;
			f32 factor     = (_108 - thisFactor) / (nextFactor); // f2
			if (factor > 1.0f) {
				factor = 1.0f;
			}

			if (factor > 0.0f) {
				f32 alphaF = factor * (f32)color.a;
				int alphaI = (alphaF >= 0.0f) ? 0.5f + alphaF : alphaF - 0.5f;
				color.a    = alphaI;
				GXSetTevColor(GX_TEVREG0, color.toGXColor());

				f32 v;
				f32 onePlusV;
				f32 u    = 0.005f * (f32)(i + 1);
				f32 zero = 0.0f;
				f32 one  = 1.0f;
				v        = -u;

				GXBegin(GX_TRIANGLESTRIP, GX_VTXFMT0, 4);
				GXPosition3f32(zero, zero, zero);
				GXColor4u8(255, 255, 255, 255);
				GXPosition2f32(u, v);

				GXPosition3f32(x + zero, zero, zero);
				GXColor4u8(255, 255, 255, 255);
				GXPosition2f32(one + u, v);

				GXPosition3f32(zero, y + zero, zero);
				GXColor4u8(255, 255, 255, 255);
				GXPosition2f32(u, one + v);

				GXPosition3f32(x + zero, y + zero, zero);
				GXColor4u8(255, 255, 255, 255);
				GXPosition2f32(one + u, one + v);

				GXBegin(GX_TRIANGLESTRIP, GX_VTXFMT0, 4);
				f32 v2   = -u;
				onePlusV = one + v2;
				GXPosition3f32(zero, zero, zero);
				GXColor4u8(255, 255, 255, 255);
				GXPosition2f32(v, v);

				GXPosition3f32(x + zero, zero, zero);
				GXColor4u8(255, 255, 255, 255);
				GXPosition2f32(onePlusV, v);

				GXPosition3f32(zero, y + zero, zero);
				GXColor4u8(255, 255, 255, 255);
				GXPosition2f32(v, onePlusV);

				GXPosition3f32(x + zero, y + zero, zero);
				GXColor4u8(255, 255, 255, 255);
				GXPosition2f32(onePlusV, onePlusV);

				GXBegin(GX_TRIANGLESTRIP, GX_VTXFMT0, 4);
				GXPosition3f32(zero, zero, zero);
				GXColor4u8(255, 255, 255, 255);
				GXPosition2f32(u, u);

				GXPosition3f32(x + zero, zero, zero);
				GXColor4u8(255, 255, 255, 255);
				GXPosition2f32(one + u, u);

				GXPosition3f32(zero, y + zero, zero);
				GXColor4u8(255, 255, 255, 255);
				GXPosition2f32(u, one + u);

				GXPosition3f32(x + zero, y + zero, zero);
				GXColor4u8(255, 255, 255, 255);
				GXPosition2f32(one + u, one + u);

				GXBegin(GX_TRIANGLESTRIP, GX_VTXFMT0, 4);
				GXPosition3f32(zero, zero, zero);
				GXColor4u8(255, 255, 255, 255);
				GXPosition2f32(v, u);

				GXPosition3f32(x + zero, zero, zero);
				GXColor4u8(255, 255, 255, 255);
				GXPosition2f32(onePlusV, u);

				GXPosition3f32(zero, y + zero, zero);
				GXColor4u8(255, 255, 255, 255);
				GXPosition2f32(v, 1.0f + u);

				GXPosition3f32(x + zero, y + zero, zero);
				GXColor4u8(255, 255, 255, 255);
				GXPosition2f32(onePlusV, 1.0f + u);
			}
		}
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x404
 */
void ZukanState::debugDraw(Graphics&)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x80224B4C
 * @note Size: 0x994
 */
void ZukanState::dvdloadA()
{
	mMainHeap = JKRExpHeap::create(mParentHeap->getFreeSize(), mParentHeap, true);
	mMainHeap->becomeCurrentHeap();
	char path[PATH_MAX]; // 0x160
#if defined(VERSION_JP)
	const char* region = "jpn";
#elif defined(VERSION_PAL)
	const char* region = "pal";
#else
	const char* region = "us";
#endif
	sprintf(path, "user/Yamashita/zukan/%s/%s/arc.szs", region, sDirName[mMapIndex]);
	JKRArchive* arc = JKRMountArchive(path, JKRArchive::EMM_Mem, nullptr, JKRArchive::EMD_Tail);
	P2ASSERTLINE(2457, arc);
	mParms = new IllustratedBook::Parms;
	mParms->loadFile(arc);
	mGameSect->addGenNode(mParms);
	PSSystem::SingletonBase<PSM::ObjMgr>::newInstance();
	u16 width1    = sys->getRenderModeObj()->fbWidth;
	u16 width2    = sys->getRenderModeObj()->fbWidth;
	f32 quarter   = 0.25f;
	int newHeight = (int)((f32)width1 * 0.6f * 0.75f * quarter + 0.5f) * 4;
	int newWidth  = (int)((f32)width2 * 0.75f * quarter + 0.5f) * 4;
	Rectf bounds(0.0f, 0.0f, newWidth, newHeight);
	mWindowBounds = bounds;
	mCameraAspect = 0.0f;

	mTexture2             = new JUTTexture((int)getWindowWidth(), (int)getWindowHeight(), GX_TF_RGB565);
	mTexture2->mMinFilter = GX_NEAR;
	mTexture2->mMagFilter = GX_NEAR;
	mTexture              = new JUTTexture((int)getWindowWidth() / 2, (int)getWindowHeight() / 2, GX_TF_RGB565);
	mTexture->mMinFilter  = GX_NEAR;
	mTexture->mMagFilter  = GX_NEAR;
	mGameSect->useSpecificFBTexture(mTexture);
	mGameSect->setXfbBounds(mCameraAspect.x, mCameraAspect.y);

	Graphics* gfx = sys->mGfx;
	mCamera       = new IllustratedBook::Camera(mController);
	mDebugParms->add(mCamera);
	cameraMgr = new CameraMgr;
	cameraMgr->loadResource();
	cameraMgr->setZukanCamera(mCamera);
	mGameSect->addGenNode(cameraMgr);

	HorizonalSplitter* split = new HorizonalSplitter(gfx);
	split->split2(1.0f);
	Viewport* vp1 = gfx->getViewport(PLAYER1_VIEWPORT);
	Viewport* vp2 = gfx->getViewport(PLAYER2_VIEWPORT);
	vp1->mCamera  = mCamera;
	vp1->updateCameraAspect();
	vp2->mCamera = mCamera;
	vp2->updateCameraAspect();
	vp1->mOffset     = mCameraAspect;
	vp1->mSplitRatio = Vector2f(1.0f);
	vp1->setRect(mWindowBounds);

	particleMgr->setViewport(*gfx);
	particleMgr->start();
	shadowMgr = new ShadowMgr(2);

	gfx           = sys->mGfx;
	Viewport* vp3 = gfx->getViewport(PLAYER1_VIEWPORT);
	Viewport* vp4 = gfx->getViewport(PLAYER2_VIEWPORT);
	shadowMgr->setViewport(vp3, 0);
	shadowMgr->setViewport(vp4, 1);
	mGameSect->initLights();
	if (!rumbleMgr) {
		rumbleMgr = new RumbleMgr;
		rumbleMgr->loadResource();
		rumbleMgr->init();
		rumbleMgr->setZukanRumble(mController, &mCamera->mPosition);
		mGameSect->addGenNode(rumbleMgr);
	}

	PSGame::SceneInfo info;
	info.mCameras         = 1;
	info.mCam1Position[0] = mCamera->getSoundPositionPtr();
	info.mCam2Position[0] = mCamera->getSoundPositionPtr();
	info.mCameraMtx[0]    = mCamera->getSoundMatrixPtr();
	info.mBounds.i.set(-1000.0f, -1000.0f, -1000.0f);
	info.mBounds.f.set(1000.0f, 1000.0f, 1000.0f);
	info.setStageFlag(PSGame::SceneInfo::SCENEFLAG_Unk0, PSGame::SceneInfo::SFBS_1);
	info.mSceneType = PSGame::SceneInfo::PIKLOPEDIA;

	PSGame::PikSceneMgr* mgr = static_cast<PSGame::PikSceneMgr*>(PSSystem::getSceneMgr());
	mgr->newAndSetCurrentScene(info);

	mgr = static_cast<PSGame::PikSceneMgr*>(PSSystem::getSceneMgr());
	mgr->checkScene();
	mgr->mScenes->mChild->scene1stLoadSync();

	mgr = static_cast<PSGame::PikSceneMgr*>(PSSystem::getSceneMgr());
	mgr->checkScene();
	mgr->mScenes->mChild->startMainSeq();

	void* file = arc->getResource("course.txt");
	P2ASSERTLINE(2603, file);
	RamStream stream(file, -1);
	stream.setMode(STREAM_MODE_TEXT, 1);
	mCourseInfo = new CourseInfo;
	mCourseInfo->read(stream);
	mCourseInfo->dump();
	Stages::createMapMgr(mCourseInfo, nullptr);

	cellMgr     = new CellPyramid;
	platCellMgr = nullptr;
	BoundBox2d bound(12800000.0f, 12800000.0f, -12800000.0f, -12800000.0f);
	mapMgr->getBoundBox2d(bound);
	JKRGetCurrentHeap()->getFreeSize();
	cellMgr->create(bound, 64.0f);
	gameSystem->addObjectMgr(mapMgr);

	naviMgr->alloc(2);
	ResultTexMgr::Arg arg;
	arg.mHeap              = JKRGetCurrentHeap();
	arg.mOtakaraConfigList = PelletOtakara::mgr->mConfigList;
	arg.mItemConfigList    = PelletItem::mgr->mConfigList;
	mResultTexture         = new ResultTexMgr::Mgr;
	mResultTexture->create(arg);
	mEnemyTexMgr = new IllustratedBook::EnemyTexMgr;
	mEnemyTexMgr->create();

	IllustratedBook::Parms::sCamera     = mCamera;
	IllustratedBook::Parms::sZukanState = this;
	arc->unmount();
}

/**
 * @note Address: 0x802254E0
 * @note Size: 0xE4
 */
void ZukanState::createTeki(int)
{
	PSSystem::SceneMgr* mgr = PSSystem::getSceneMgr();
	PSSystem::validateSceneMgr(mgr);
	PSM::Scene_Objects* scene = static_cast<PSM::Scene_Objects*>(mgr->getChildScene());
	scene->detachObjMgr();

	sys->dvdLoadUseCallBack(&mDvdThread, mDelegateLoadEnemy);
	mDoDraw = false;
}

/**
 * @note Address: 0x802255C4
 * @note Size: 0x40
 */
void ZukanState::createPellet(int)
{
	sys->dvdLoadUseCallBack(&mDvdThread, mDelegateLoadPellet);
	mDoDraw = false;
}

/**
 * @note Address: N/A
 * @note Size: 0xE4
 */
void ZukanState::dvdloadB_common()
{
	if (mCurrObjHeap) {
		if (generalEnemyMgr) {
			clearHeapB_teki();
		} else if (mCurrentPellet) {
			clearHeapB_pellet();
		} else {
			clearHeapB_common();
			mMainHeap->becomeCurrentHeap();
		}
	}
	mHeapSize = mMainHeap->getFreeSize();
	OSReport("\n");
	OSReport("FreeSizeA :%d \n", mHeapSize);
	mCurrObjHeap = JKRExpHeap::create(mMainHeap->getFreeSize(), mMainHeap, true);
	mCurrObjHeap->becomeCurrentHeap();

	pikiMgr->alloc(MAX_PIKI_COUNT);
	particleMgr->mLightMgr = mGameSect->mLightMgr;
	particleMgr->start();
}

/**
 * @note Address: 0x80225604
 * @note Size: 0xCDC
 */
void ZukanState::dvdloadB_teki()
{
	dvdloadB_common();
	if (mCurrentEnemyIndex == Game::EnemyTypeID::EnemyID_Pelplant) {
		OSReport("ペレット草なのでペレットをロードします free:%d \n", JKRGetCurrentHeap()->getFreeSize()); // "pellet grass so load pellets"
		PelletNumber::mgr->setupResources();
		OSReport("だした free:%d \n", JKRGetCurrentHeap()->getFreeSize()); // "started"
	}
	P2ASSERTLINE(2747, !generalEnemyMgr);
	generalEnemyMgr = new GeneralEnemyMgr;
	gameSystem->addObjectMgr(generalEnemyMgr);
	if (mCurrentEnemyIndex != -1) {
		P2ASSERTBOUNDSLINE(2753, 0, mCurrentEnemyIndex, EnemyTypeID::EnemyID_COUNT);

		IllustratedBook::EnemyParms* parms = &mParms->mEnemyParms.mEnemyParms[mCurrentEnemyIndex];
		int id                             = 0;
		if (parms->mGroupID < 10) {
			id = parms->mGroupID;
		} else {
			parms->mGroupID = 0;
		}
		f32 range                                = parms->mParms.mAppearRange(); // f31
		IllustratedBook::PositionParms* posParms = &mParms->mPosParmsList.mParms[id];
		u8 count                                 = parms->mParms.mAppearNum(); // r25
		Vector3f posOffset;
		posOffset.set(posParms->mParms.mAppearPosX(), posParms->mParms.mAppearPosY(), posParms->mParms.mAppearPosZ()); // f30, f29, f28

		OSReport("敵をアロック %d匹　free:%d \n", count, JKRGetCurrentHeap()->getFreeSize());
		bool makeSpectralids = false;
		TekiStat::Info* info = playData->mTekiStatMgr.getTekiInfo(mCurrentEnemyIndex);
		if (info && info->mKilledTekiCount > 16) {
			makeSpectralids = true;
		}

		if (makeSpectralids) {
			switch (mCurrentEnemyIndex) {
			case EnemyTypeID::EnemyID_Chappy:
			case EnemyTypeID::EnemyID_BlueChappy:
			case EnemyTypeID::EnemyID_YellowChappy:
				generalEnemyMgr->addEnemyNum(EnemyTypeID::EnemyID_ShijimiChou, 5, nullptr);
				break;
			}
		}

		generalEnemyMgr->addEnemyNum(mCurrentEnemyIndex, count, nullptr);
		generalEnemyMgr->allocateEnemys(1, ENEMY_HEAP_SIZE_ZUKAN);
		generalEnemyMgr->setupSoundViewerAndBas();

		f32 size = 35.0f; // f27
		if (parms->mParms.mSize()) {
			size = parms->mParms.mSize();
		}

		Vector3f* spawnPositions = new Vector3f[count]; // r29
		Vector3f* tempPositions  = new Vector3f[count]; // r28
		for (int i = 0; i < count; i++) {
			// first enemy, set position to zero
			if (i == 0) {
				spawnPositions[i] = 0.0f;
				continue;
			}
			// other enemies, randomly distribute in circle of radius `range`
			f32 randAngle = TAU * randFloat(); // f26
			f32 radius    = range * randFloat();

			spawnPositions[i] = Vector3f(radius * sinf(randAngle), 0.0f, radius * cosf(randAngle));
		}

		// jitter positions (5 iterations)
		for (int i = 0; i < 5; i++) {
			// set temp vectors to zero
			for (int j = 0; j < count; j++) {
				tempPositions[j].setZero();
			}

			// jitter temp positions in pairs
			for (int j = 0; j < count; j++) {
				for (int k = j + 1; k < count; k++) {
					Vector3f sep = spawnPositions[j] - spawnPositions[k];
					f32 dist     = sep.magnitude();

					if (dist < size) {
						sep.normalise();

						f32 factor = 0.5f * (size - dist);
						sep *= factor;
						tempPositions[j] += sep;
						tempPositions[k] -= sep;
					}
				}
			}

			// update spawn positions with jittered positions (and make sure they're on the floor)
			for (int j = 0; j < count; j++) {
				spawnPositions[j] += tempPositions[j];
				spawnPositions[j].y = mapMgr->getMinY(spawnPositions[j]);
			}
		}

		// spawn enemies
		for (int i = 0; i < count; i++) {
			EnemyBirthArg arg;
			// first enemy faces set direction, others face randomly
			if (i == 0) {
				arg.mFaceDir = 0.0f;
			} else {
				arg.mFaceDir = TAU * randFloat();
			}

			arg.mPosition = spawnPositions[i];
			arg.mPosition += posOffset;

			// make sure enemies spawn on the floor
			arg.mPosition.y = mapMgr->getMinY(arg.mPosition);

			EnemyBase* enemy = generalEnemyMgr->birth(mCurrentEnemyIndex, arg);
			if (!enemy) {
				JUT_PANICLINE(2879, "** BIRTH FAILED !! ID:%d \n", mCurrentEnemyIndex);
			} else {
				enemy->init(nullptr);
				if (i == 0) { // make first enemy "current" enemy
					mCurrentEnemy = enemy;
				}
			}
		}

		delete spawnPositions;
		delete tempPositions;

		if (makeSpectralids) {
			switch (mCurrentEnemyIndex) {
			case EnemyTypeID::EnemyID_Chappy:
			case EnemyTypeID::EnemyID_BlueChappy:
			case EnemyTypeID::EnemyID_YellowChappy:
				ShijimiChou::Mgr* mgr = static_cast<ShijimiChou::Mgr*>(generalEnemyMgr->getEnemyMgr(EnemyTypeID::EnemyID_ShijimiChou));
				if (mgr) {
					EnemyBirthArg arg;
					arg.mPosition = mCurrentEnemy->getPosition();
					arg.mPosition.y += 45.0f;
					arg.mFaceDir = randFloat() * TAU;
					mgr->createGroupByEnemy(arg, mCurrentEnemy, 5, false);
				}
				break;
			}
		}

		mCamera->setTarget(mCurrentEnemy);
		mCamera->setAtOffset(
		    Vector3f(parms->mCameraParms.mParms.mOffsetX(), parms->mCameraParms.mParms.mOffsetY(), parms->mCameraParms.mParms.mOffsetZ()));
		mCamera->mObjectRadius  = parms->mCameraParms.mParms.mRadius();
		mCamera->mCurrentHeight = parms->mCameraParms.mParms.mInitialHeight();
		mCamera->setMinMaxHeight(parms->mCameraParms.mParms.mMinHeight(), parms->mCameraParms.mParms.mMaxHeight());
		mCamera->setViewAngleParms(parms->mCameraParms.mParms.mInitialViewAngle(), parms->mCameraParms.mParms.mMinViewAngle(),
		                           parms->mCameraParms.mParms.mMaxViewAngle());

		mCamera->mHorizontalAngle = TORADIANS(parms->mCameraParms.mParms.mInitialRotation());

		int initCarrotCount = 0;

		// buried enemies (snagrets and shears) spawn 10 carrots to start
		switch (mCurrentEnemyIndex) {
		case EnemyTypeID::EnemyID_SnakeCrow:
		case EnemyTypeID::EnemyID_SnakeWhole:
		case EnemyTypeID::EnemyID_UjiA:
		case EnemyTypeID::EnemyID_UjiB:
		case EnemyTypeID::EnemyID_Tobi:
			initCarrotCount = 10;
			break;
		}

		if (initCarrotCount <= 0) {
			return;
		}

		for (int i = 0; i < initCarrotCount; i++) {
			Piki* piki = pikiMgr->birth();
			if (piki) {
				PikiInitArg initArg(PIKISTATE_Carrot);
				piki->init(&initArg);
				piki->changeShape(Carrot);

				Vector3f lookAtPos = mCamera->getLookAtPosition();

				Vector3f viewVec;
				viewVec = mCamera->getViewVector();
				viewVec.length(); // unused + regswaps

				f32 randAngle = TAU * randFloat();
				f32 randDist  = 100.0f * randFloat();

				Vector3f direction = Vector3f(randDist * sinf(randAngle), 0.0f, randDist * cosf(randAngle));
				Vector3f position  = (lookAtPos + direction);
				position.y += 200.0f;

				piki->setPosition(position, false);

				piki->mFaceDir = TAU * randFloat();
			}
		}

		return;
	}

	IllustratedBook::EnemyParms* parm = mParms->mEnemyParms.mEnemyParms;
	Vector3f pos(mParms->mPosParmsList.mParms[0].mParms.mAppearPosX(), mParms->mPosParmsList.mParms[0].mParms.mAppearPosY(),
	             mParms->mPosParmsList.mParms[0].mParms.mAppearPosZ());
	mCamera->move(pos);
	mCamera->setAtOffset(
	    Vector3f(parm->mCameraParms.mParms.mOffsetX(), parm->mCameraParms.mParms.mOffsetY(), parm->mCameraParms.mParms.mOffsetZ()));
	mCamera->mObjectRadius  = parm->mCameraParms.mParms.mRadius();
	mCamera->mCurrentHeight = parm->mCameraParms.mParms.mInitialHeight();
	mCamera->setMinMaxHeight(parm->mCameraParms.mParms.mMinHeight(), parm->mCameraParms.mParms.mMaxHeight());
	mCamera->setViewAngleParms(parm->mCameraParms.mParms.mInitialViewAngle(), parm->mCameraParms.mParms.mMinViewAngle(),
	                           parm->mCameraParms.mParms.mMaxViewAngle());
	mCamera->mHorizontalAngle = TORADIANS(parm->mCameraParms.mParms.mInitialRotation());
}

/**
 * @note Address: 0x802262E0
 * @note Size: 0x4B0
 */
void ZukanState::dvdloadB_pellet()
{
	dvdloadB_common();
	IllustratedBook::ItemParms* parm;
	if (mCurrentPelletIndex != -1) {
		parm   = &mParms->mItemParms.mItemParms[mCurrentPelletIndex];
		int id = 0;
		if (parm->mGroupID < 10) {
			id = parm->mGroupID;
		} else {
			parm->mGroupID = 0;
		}
		IllustratedBook::PositionParms* posParms = &mParms->mPosParmsList.mParms[id];
		PelletInitArg arg;
		PelletConfig* config = getCurrentPelletConfig(mCurrentPelletIndex);
		int index;
		arg.mPelletType = convertPelletID(index, mCurrentPelletIndex);

		arg.mTextIdentifier = config->mParams.mName.mData;
		arg.mPelletColor    = 0;
		arg.mPelletIndex    = index;
		arg.mState          = PelBirthType_Piklopedia;
		pelletMgr->setUse(&arg);
		if (arg.mPelletType == PelletList::PLK_Otakara) {
			PelletOtakara::mgr->setupResources();
		} else {
			PelletItem::mgr->setupResources();
		}
		mCurrentPellet = pelletMgr->birth(&arg);
		if (mCurrentPellet) {
			Vector3f pos(posParms->mParms.mAppearPosX.mValue + parm->mParms.mOffsetX.mValue, posParms->mParms.mAppearPosY.mValue,
			             posParms->mParms.mAppearPosZ.mValue + parm->mParms.mOffsetZ.mValue);
			pos.y = parm->mParms.mOffsetY.mValue + (mCurrentPellet->getCylinderHeight() * 0.5f + mapMgr->getMinY(pos));
			mCurrentPellet->setPosition(pos, false);
			mCamera->setTarget(mCurrentPellet);
			mCamera->setAtOffset(Vector3f(parm->mCameraParms.mParms.mOffsetX.mValue, parm->mCameraParms.mParms.mOffsetY.mValue,
			                              parm->mCameraParms.mParms.mOffsetZ.mValue));
			mCamera->mObjectRadius  = parm->mCameraParms.mParms.mRadius.mValue;
			mCamera->mCurrentHeight = parm->mCameraParms.mParms.mInitialHeight.mValue;
			mCamera->setMinMaxHeight(parm->mCameraParms.mParms.mMinHeight.mValue, parm->mCameraParms.mParms.mMaxHeight.mValue);
			mCamera->setViewAngleParms(parm->mCameraParms.mParms.mInitialViewAngle.mValue, parm->mCameraParms.mParms.mMinViewAngle.mValue,
			                           parm->mCameraParms.mParms.mMaxViewAngle.mValue);
			mCamera->mHorizontalAngle = parm->mCameraParms.mParms.mInitialRotation.mValue * DEG2RAD * PI;
		}

	} else {
		IllustratedBook::Parms* mainParms = mParms;
		parm                              = &mainParms->mItemParms.mItemParms[0];
		mCurrentPellet                    = nullptr;
		Vector3f pos(mainParms->mPosParmsList.mParms[0].mParms.mAppearPosX.mValue + parm->mParms.mOffsetX.mValue,
		             mainParms->mPosParmsList.mParms[0].mParms.mAppearPosY.mValue + parm->mParms.mOffsetY.mValue,
		             mainParms->mPosParmsList.mParms[0].mParms.mAppearPosZ.mValue + parm->mParms.mOffsetZ.mValue);
		mCamera->move(pos);
	}

	mCamera->setAtOffset(Vector3f(parm->mCameraParms.mParms.mOffsetX.mValue, parm->mCameraParms.mParms.mOffsetY.mValue,
	                              parm->mCameraParms.mParms.mOffsetZ.mValue));
	mCamera->mObjectRadius  = parm->mCameraParms.mParms.mRadius.mValue;
	mCamera->mCurrentHeight = parm->mCameraParms.mParms.mInitialHeight.mValue;
	mCamera->setMinMaxHeight(parm->mCameraParms.mParms.mMinHeight.mValue, parm->mCameraParms.mParms.mMaxHeight.mValue);
	mCamera->setViewAngleParms(parm->mCameraParms.mParms.mInitialViewAngle.mValue, parm->mCameraParms.mParms.mMinViewAngle.mValue,
	                           parm->mCameraParms.mParms.mMaxViewAngle.mValue);
	mCamera->mHorizontalAngle = TORADIANS(parm->mCameraParms.mParms.mInitialRotation.mValue);
}

/**
 * @note Address: 0x80226790
 * @note Size: 0x90
 */
void ZukanState::clearHeapB_common()
{
	if (Farm::farmMgr) {
		Farm::farmMgr->initAllFarmObjectNodes();
	}
	pelletMgr->resetMgrs();
	cellMgr->clearAllCollBuffer();
	cellMgr->clear();
	particleMgr->killAll();
	particleMgr->reset();
	shadowMgr->killAll();
	rumbleMgr->stopRumble(RUMBLEID_Both);
	mCurrObjHeap->freeAll();
	mCurrObjHeap->destroy();
	mCurrObjHeap = nullptr;
}

/**
 * @note Address: 0x80226820
 * @note Size: 0x3BC
 */
void ZukanState::clearHeapB_teki()
{
	if (mCurrObjHeap) {
		Pellet* buffer[200];
		int i = 0;
		PelletIterator iterator;
		CI_LOOP(iterator)
		{
			// you know, just in case you had 200 pellets loaded at once
			Pellet* pelt = *iterator;
			if (i < 200) {
				buffer[i++] = pelt;
			} else {
				JUT_PANICLINE(3164, "too many pellet\n");
			}
		}
		for (int j = 0; j < i; j++) {
			buffer[j]->kill(nullptr);
		}
		pelletMgr->resetMgrs();
		dynParticleMgr->resetMgr();

		int j = 0;
		Piki* buffer2[200];
		Iterator<Piki> iterator2(pikiMgr);
		CI_LOOP(iterator2)
		{
			buffer2[j++] = *iterator2;
		}

		PikiKillArg arg(CKILL_DontCountAsDeath | CKILL_Unk17);
		for (int k = 0; k < j; k++) {
			buffer2[k]->kill(&arg);
		}
		pikiMgr->resetMgr();
		if (generalEnemyMgr) {
			generalEnemyMgr->killAll();
			gameSystem->detachObjectMgr(generalEnemyMgr);
			generalEnemyMgr = nullptr;
			mCurrentEnemy   = nullptr;
		}

		clearHeapB_common();
	}
	mMainHeap->becomeCurrentHeap();
}

/**
 * @note Address: 0x80226BDC
 * @note Size: 0x174
 */
void ZukanState::clearHeapB_pellet()
{
	if (mCurrObjHeap) {
		if (mCurrentPellet) {
			Pellet* buffer[200];
			int i = 0;
			PelletIterator iterator;
			CI_LOOP(iterator)
			{
				// you know, just in case you had 200 pellets loaded at once
				Pellet* pelt = *iterator;
				if (i < 200) {
					buffer[i++] = pelt;
				} else {
					JUT_PANICLINE(3221, "too many pellet\n");
				}
			}
			for (int j = 0; j < i; j++) {
				buffer[j]->kill(nullptr);
			}
			pelletMgr->resetMgrs();
			dynParticleMgr->resetMgr();
			mCurrentPellet = nullptr;
		}
		clearHeapB_common();
	}
	mMainHeap->becomeCurrentHeap();
}

/**
 * @note Address: 0x80226D50
 * @note Size: 0x3AC
 */
void ZukanState::clearHeaps()
{
	pikiMgr->resetMgr();
	if (mCurrentEnemy) {
		clearHeapB_teki();
	} else if (mCurrentPellet) {
		clearHeapB_pellet();
	} else {
		clearHeapB_common();
	}
	PSSystem::SceneMgr* mgr = PSSystem::getSceneMgr();
	PSSystem::validateSceneMgr(mgr);
	mgr->deleteCurrentScene();
	delete PSSystem::SingletonBase<PSM::ObjMgr>::sInstance;
	PSSystem::SingletonBase<PSM::ObjMgr>::sInstance = nullptr;
	if (mMainHeap) {
		mGameSect->restoreFBTexture();
		if (generalEnemyMgr) {
			gameSystem->detachObjectMgr(generalEnemyMgr);
			generalEnemyMgr = nullptr;
		}
		gameSystem->detachObjectMgr(mapMgr);
		mGameSect->mLightMgr->del();
		mGameSect->mLightMgr = nullptr;
		mapMgr               = nullptr;
		mCamera->del();
		mCamera = nullptr;
		cameraMgr->del();
		cameraMgr = nullptr;
		shadowMgr->del();
		shadowMgr = nullptr;
		rumbleMgr->del();
		rumbleMgr = nullptr;
		mGameSect = nullptr;
		sys->mGfx->deleteViewports();
		cellMgr = nullptr;
		naviMgr->resetMgr();
		mParms->del();
		mDebugParms->del();
		mMainHeap->destroy();
	}
	Screen::gGame2DMgr->mScreenMgr->reset();
	if (mParentHeap) {
		mExtraHeapFor2D->destroy();
		mExtraHeapFor2D = nullptr;
		mParentHeap->destroy();
	}
	mCurrObjHeap = nullptr;
	mMainHeap    = nullptr;
	mParentHeap  = nullptr;
}

/**
 * @note Address: 0x802270FC
 * @note Size: 0xA8
 */
void ZukanState::cleanup(SingleGameSection* game)
{
	Screen::gGame2DMgr->mScreenMgr->reset();
	gameSystem->resetFlag(GAMESYS_IsGameWorldActive);
	particle2dMgr->killAll();
	gameSystem->mMode                  = GSM_STORY_MODE;
	gameSystem->mTimeMgr->mSpeedFactor = 1.0f;
	mBackupHeap->becomeCurrentHeap();
	JUT_ASSERTLINE(3346, (int)mBackupHeap->getFreeSize() == sParentHeapFreeSize, "damek\n");
}

} // namespace SingleGame
} // namespace Game
