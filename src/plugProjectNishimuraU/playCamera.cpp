#include "Game/CameraMgr.h"
#include "Game/Navi.h"
#include "Game/Stickers.h"
#include "Game/MapMgr.h"
#include "PSSystem/PSSystemIF.h"
#include "nans.h"

namespace Game {

/**
 * @note Address: 0x8023F3F0
 * @note Size: 0x138
 */
PlayCamera::PlayCamera(Navi* target)
{
	mTargetObj            = target;
	mChangePlayerState    = CAMCHANGE_None;
	mCameraZoomLevel      = CAMZOOM_Mid;
	mCameraSelAngle       = CAMANGLE_Behind;
	mCanInput             = true;
	mIsCollisionCamActive = false;

	mGoalTargetDistance = 100.0f;
	mCurrTargetDistance = 100.0f;
	mCameraAngleTarget  = 0.0f;
	mCameraAngleCurrent = 0.0f;
	mGoalVerticalAngle  = 0.0f;
	mCurrVerticalAngle  = 0.0f;

	mGoalFOV        = 30.0f;
	mViewAngle      = 30.0f;
	mNearZPlane     = 1.0f;
	mProjectionNear = 1.0f;
	mFarZPlane      = 12800.0f;
	mProjectionFar  = 12800.0f;
	mYOffset        = 0.0f;

	mDetachedWeight  = 0.0f;
	mDetachedParm    = 0.0f;
	mSmoothMoveSpeed = 0.0f;
	mFollowTime      = 0.0f;
	mHoldRTimer      = 0.0f;

	for (int i = 0; i < 3; i++) {
		mVibrateEnabled[i]   = false;
		mVibrateStrength[i]  = 0.0f;
		mVibrateScale[i]     = 0.0f;
		mVibrateDuration[i]  = 0.0f;
		mVibrateTimer[i]     = 0.0f;
		mVibrateAngle[i]     = 0.0f;
		mVibrateRollAngle[i] = 0.0f;
		mVibrateSpeed[i]     = 0.0f;
	}

	mCameraParms    = nullptr;
	mVibrationParms = nullptr;
	mName           = "PlayCamera";
}

/**
 * @note Address: 0x8023F528
 * @note Size: 0x8
 */
void PlayCamera::setCameraParms(CameraParms* parms) { mCameraParms = parms; }

/**
 * @note Address: 0x8023F530
 * @note Size: 0x8
 */
void PlayCamera::setVibrationParms(VibrationParms* parms) { mVibrationParms = parms; }

/**
 * @note Address: 0x8023F538
 * @note Size: 0x16C
 */
void PlayCamera::init()
{
	P2ASSERTLINE(120, mTargetObj);
	P2ASSERTLINE(121, mCameraParms);
	P2ASSERTLINE(122, mVibrationParms);
	mCanInput          = true;
	mChangePlayerState = CAMCHANGE_None;
	mCameraZoomLevel   = CAMZOOM_Mid; // (default to medium zoom)
	mCameraSelAngle    = CAMANGLE_Behind;
	setTargetParms();
	changeTargetAtPosition();
	mCurrTargetDistance = mGoalTargetDistance;

	f32 angle = mTargetObj->getFaceDir() + PI;
	clampAngle(angle);
	mCameraAngleTarget  = angle;
	mCameraAngleCurrent = angle;
	mCurrVerticalAngle  = mGoalVerticalAngle;
	mViewAngle          = mGoalFOV;
	mProjectionNear     = mNearZPlane;
	mProjectionFar      = mFarZPlane;
	mLookAtPosition     = mGoalPosition;
	updateMatrix();
}

/**
 * @note Address: 0x8023F6A4
 * @note Size: 0x34
 */
void PlayCamera::setCameraAngle(f32 angle)
{
	mCameraAngleTarget  = angle;
	mCameraAngleCurrent = angle;
	updateMatrix();
}

/**
 * @note Address: 0x8023F6D8
 * @note Size: 0x5C
 */
void PlayCamera::getCameraData(CameraData& data)
{
	data.mTargetDistance = mCurrTargetDistance;
	data.mCameraAngle    = mCameraAngleCurrent;
	data.mVerticalAngle  = mCurrVerticalAngle;
	data.mFieldofView    = mViewAngle;
	data.mNearZ          = mProjectionNear;
	data.mFarZ           = mProjectionFar;
	data.mLookAtPosition = mLookAtPosition;
	data.mZoomLevel      = mCameraZoomLevel;
	data.mSelAngle       = mCameraSelAngle;
}

/**
 * @note Address: 0x8023F734
 * @note Size: 0x5C
 */
void PlayCamera::setCameraData(CameraData& data)
{
	mCurrTargetDistance = data.mTargetDistance;
	mCameraAngleCurrent = data.mCameraAngle;
	mCurrVerticalAngle  = data.mVerticalAngle;
	mViewAngle          = data.mFieldofView;
	mProjectionNear     = data.mNearZ;
	mProjectionFar      = data.mFarZ;
	mLookAtPosition     = data.mLookAtPosition;
	mCameraZoomLevel    = data.mZoomLevel;
	mCameraSelAngle     = data.mSelAngle;
}

/**
 * @note Address: 0x8023F790
 * @note Size: 0x80
 */
void PlayCamera::changePlayerMode(bool doCenterCameraBehind)
{
	mChangePlayerState = CAMCHANGE_IsChanging;
	setTargetParms();
	changeTargetAtPosition();
	if (doCenterCameraBehind) {
		setTargetThetaToWhistle();
	} else {
		mCameraAngleTarget = mCameraAngleCurrent;
	}
	updateMatrix();
	setProjection();
}

/**
 * @note Address: 0x8023F810
 * @note Size: 0x4C
 * Returns true if the conditions to use the holding R camera are met
 */
bool PlayCamera::isSpecialCamera()
{
	if (mTargetObj->mController1 && mCanInput && (mChangePlayerState == CAMCHANGE_None) && mHoldRTimer >= 1.0f) {
		return true;
	}
	return false;
}

/**
 * @note Address: 0x8023F85C
 * @note Size: 0xE8
 */
void PlayCamera::doUpdate()
{
	u32 flags = updateCameraMode();
	if (flags & CAMFLAGS_StartZoomCam) {
		startZoomCamera();
	}
	if (flags & CAMFLAGS_EndZoomCam) {
		finishDemoCamera();
	}
	if (flags & (CAMFLAGS_ChangeZoomLevel | CAMFLAGS_ChangeSelAngle)) {
		startGameCamera(flags);
	}
	if (flags & CAMFLAGS_CenterBehind) {
		setFollowTime();
	}
	if (flags & CAMFLAGS_SmoothFollow) {
		setSmoothThetaSpeed();
	}
	changeTargetTheta();
	changeTargetAtPosition();
	setCollisionCameraTargetPhi(flags);
	updateParms(flags);
	for (int i = 0; i < 3; i++) {
		if (mVibrateEnabled[i]) {
			updateVibration(i);
		}
	}
	isModCameraFinished();
	return;
}

/**
 * @note Address: 0x8023F944
 * @note Size: 0xE0
 */
void PlayCamera::updateMatrix()
{
	Mtx mtx1, mtx2, mtx3, mtx4, mtx5;
	PSMTXRotRad(mtx1, 'Z', mVibrateRollAngle[0]);
	PSMTXRotRad(mtx2, 'Y', -mCameraAngleCurrent);
	PSMTXRotRad(mtx3, 'X', mCurrVerticalAngle);
	PSMTXTrans(mtx4, 0.0f, 0.0f, mVibrateRollAngle[2] - mCurrTargetDistance);
	PSMTXTrans(mtx5, -mLookAtPosition.x, -mVibrateRollAngle[1] - mLookAtPosition.y, -mLookAtPosition.z);

	PSMTXConcat(mtx3, mtx2, mLookMatrix.mMatrix.mtxView);
	PSMTXConcat(mtx1, mLookMatrix.mMatrix.mtxView, mLookMatrix.mMatrix.mtxView);
	PSMTXConcat(mtx4, mLookMatrix.mMatrix.mtxView, mLookMatrix.mMatrix.mtxView);
	PSMTXConcat(mLookMatrix.mMatrix.mtxView, mtx5, mLookMatrix.mMatrix.mtxView);
}

/**
 * @note Address: 0x8023FA24
 * @note Size: 0x7C
 */
void PlayCamera::noUpdate()
{
	PSMTX44Copy(mProjectionMtx, mBackupMtx);
	PSMTXCopy(getViewMatrix(0)->mMatrix.mtxView, mCurViewMatrix.mMatrix.mtxView);
	updateScreenConstants();
	updatePlanes();
}

/**
 * @note Address: 0x8023FAA0
 * @note Size: 0x44
 */
bool PlayCamera::isVibration()
{
	for (int i = 0; i < 3; i++) {
		if (mVibrateEnabled[i])
			return true;
	}
	return false;
}

/**
 * @note Address: 0x8023FAE4
 * @note Size: 0x208
 */
void PlayCamera::startVibration(int type, f32 scale)
{
	if (type == VIBTYPE_NaviDamage) {
		mVibrateEnabled[0]  = true;
		mVibrateTimer[0]    = 0.0f;
		mVibrateScale[0]    = scale;
		mVibrateStrength[0] = mVibrationParms->mAzimuthShortVib;
		mVibrateSpeed[0]    = mVibrationParms->mAzimuthShortSpeed;
		mVibrateDuration[0] = mVibrationParms->mAzimuthShortTime;
		otherVibFinished(0);
		return;
	}

	if (type == VIBTYPE_Boom) {
		mVibrateEnabled[2]  = true;
		mVibrateTimer[2]    = 0.0f;
		mVibrateScale[2]    = scale;
		mVibrateStrength[2] = mVibrationParms->mZoomShortVib;
		mVibrateSpeed[2]    = mVibrationParms->mZoomShortSpeed;
		mVibrateDuration[2] = mVibrationParms->mZoomShortTime;
		otherVibFinished(2);
		return;
	}

	mVibrateEnabled[1] = true;
	mVibrateTimer[1]   = 0.0f;
	mVibrateScale[1]   = scale;
	otherVibFinished(1);
	if (type == VIBTYPE_Crash) {
		mVibrateStrength[1] = mVibrationParms->mElevationHardVib2;
		mVibrateSpeed[1]    = mVibrationParms->mElevationHardSpeed;
		mVibrateDuration[1] = mVibrationParms->mElevationHardTime;
		return;
	}

	// strength
	if (type <= VIBTYPE_LIGHT) {
		mVibrateStrength[1] = mVibrationParms->mElevationLightVib;
	} else if (type <= VIBTYPE_MID) {
		mVibrateStrength[1] = mVibrationParms->mElevationMiddleVib;
	} else { // VIBTYPE_HARD
		mVibrateStrength[1] = mVibrationParms->mElevationHardVib;
	}

	// speed
	int speedType = (type / 3) % 3;
	if (speedType == 0) { // slow
		mVibrateSpeed[1] = mVibrationParms->mElevationSlowSpeed;
	} else if (speedType == 1) { // middle
		mVibrateSpeed[1] = mVibrationParms->mElevationMiddleSpeed;
	} else { // fast
		mVibrateSpeed[1] = mVibrationParms->mElevationFastSpeed;
	}

	// duration
	if (type % 3 == 0) {
		mVibrateDuration[1] = mVibrationParms->mElevationShortTime;
	} else if (type % 3 == 1) {
		mVibrateDuration[1] = mVibrationParms->mElevationMiddleTime;
	} else {
		mVibrateDuration[1] = mVibrationParms->mElevationLongTime;
	}
}

/**
 * @note Address: 0x8023FCEC
 * @note Size: 0xD0
 */
void PlayCamera::startDemoCamera(int type)
{
	switch (type) {
	case CAMDEMO_Test:
		mGoalTargetDistance = mCameraParms->mZoomDist;
		mGoalVerticalAngle  = mCameraParms->mZoomAngle.mValue * (0.017453292f);
		mGoalFOV            = mCameraParms->mZoomFOV;
		mNearZPlane         = 1.0f;
		mFarZPlane          = 12800.0f;
		mYOffset            = 10.0f;
		mDetachedWeight     = 1000.0f;
		mDetachedParm       = 27.5f;
		break;
	default:
		mGoalTargetDistance = mCameraParms->mNearLowDist;
		mGoalVerticalAngle  = mCameraParms->mNearLowAngle.mValue * (0.017453292f);
		mGoalFOV            = mCameraParms->mNearLowFOV;
		mNearZPlane         = mCameraParms->mNearLowNear;
		mFarZPlane          = mCameraParms->mNearLowFar;
		mYOffset            = mCameraParms->mNearLowOffset;
		mDetachedWeight     = mCameraParms->mNearLowWeight;
		mDetachedParm       = mCameraParms->mNearLowDetached;
		break;
	}
}

/**
 * @note Address: 0x8023FDBC
 * @note Size: 0x20
 */
void PlayCamera::finishDemoCamera() { setTargetParms(); }

/**
 * @note Address: 0x8023FDDC
 * @note Size: 0xEC
 */
u32 PlayCamera::updateCameraMode()
{
	Controller* pad = mTargetObj->mController1;
	u32 flags       = 0;
	if (pad && mCanInput) {
		if (mChangePlayerState == CAMCHANGE_None) {
			if (pad->getButton() & Controller::PRESS_R) {
				if (mHoldRTimer < 1.0f) {
					mHoldRTimer += sys->mDeltaTime;
					if (mHoldRTimer >= 1.0f) {
						flags |= (CAMFLAGS_StartZoomCam | CAMFLAGS_InZoomCam);
					}
				} else {
					flags |= CAMFLAGS_InZoomCam;
				}
			} else {
				if (mHoldRTimer >= 1.0f) {
					flags |= CAMFLAGS_EndZoomCam;
				}
				mHoldRTimer = 0.0f;
			}

			if (!(flags & CAMFLAGS_InZoomCam)) {
				if (pad->getButtonDown() & Controller::PRESS_R) {
					flags |= CAMFLAGS_ChangeZoomLevel;
				}
				if (pad->getButtonDown() & Controller::PRESS_Z) {
					flags |= CAMFLAGS_ChangeSelAngle;
				}
			}

			if (pad->getButtonDown() & Controller::PRESS_L) {
				flags |= CAMFLAGS_CenterBehind;
			} else {
				if (pad->mButton.mAnalogL > 0.1f) {
					flags |= CAMFLAGS_SmoothFollow;
				}
			}
		}
	}
	return flags;
}

/**
 * @note Address: 0x8023FEC8
 * @note Size: 0x80
 */
void PlayCamera::startZoomCamera()
{
	mGoalTargetDistance = mCameraParms->mZoomDist;
	mGoalVerticalAngle  = mCameraParms->mZoomAngle.mValue * (0.017453292f);
	mGoalFOV            = mCameraParms->mZoomFOV;
	mNearZPlane         = 1.0f;
	mFarZPlane          = 12800.0f;
	mYOffset            = 10.0f;
	mDetachedWeight     = 1000.0f;
	mDetachedParm       = 27.5f;
	PSSystem::spSysIF->playSystemSe(PSSE_SY_CAMERAVIEW_ROTATE, 0);
}

/**
 * @note Address: 0x8023FF48
 * @note Size: 0x84
 */
void PlayCamera::startGameCamera(int flag)
{
	if (flag & CAMFLAGS_ChangeZoomLevel) {
		mCameraZoomLevel++;
		if (mCameraZoomLevel > CAMZOOM_Far) { // only 3 zoom levels and they cycle
			mCameraZoomLevel = CAMZOOM_Near;
		}
	}
	if (flag & CAMFLAGS_ChangeSelAngle) {
		mCameraSelAngle       = mCameraSelAngle ^ 1;
		mIsCollisionCamActive = false;
	}
	PSSystem::spSysIF->playSystemSe(PSSE_SY_CAMERAVIEW_CHANGE, 0);
	setTargetParms();
}

/**
 * @note Address: 0x8023FFCC
 * @note Size: 0x2F8
 */
void PlayCamera::setTargetParms()
{
	mHoldRTimer = 0.0f;
	switch (mCameraSelAngle) {
	case CAMANGLE_Behind: {
		switch (mCameraZoomLevel) {
		case CAMZOOM_Near: // low zoom low angle
			mGoalTargetDistance = mCameraParms->mNearLowDist;
			mGoalVerticalAngle  = mCameraParms->mNearLowAngle.mValue * (0.017453292f);
			mGoalFOV            = mCameraParms->mNearLowFOV;
			mNearZPlane         = mCameraParms->mNearLowNear;
			mFarZPlane          = mCameraParms->mNearLowFar;
			mYOffset            = mCameraParms->mNearLowOffset;
			mDetachedWeight     = mCameraParms->mNearLowWeight;
			mDetachedParm       = mCameraParms->mNearLowDetached;
			break;
		case CAMZOOM_Mid: // medium zoom low angle
			mGoalTargetDistance = mCameraParms->mMidLowDist;
			mGoalVerticalAngle  = mCameraParms->mMidLowAngle.mValue * (0.017453292f);
			mGoalFOV            = mCameraParms->mMidLowFOV;
			mNearZPlane         = mCameraParms->mMidLowNear;
			mFarZPlane          = mCameraParms->mMidLowFar;
			mYOffset            = mCameraParms->mMidLowOffset;
			mDetachedWeight     = mCameraParms->mMidLowWeight;
			mDetachedParm       = mCameraParms->mMidLowDetached;
			break;
		case CAMZOOM_Far: // far zoom low angle
			mGoalTargetDistance = mCameraParms->mFarLowDist;
			mGoalVerticalAngle  = mCameraParms->mFarLowAngle.mValue * (0.017453292f);
			mGoalFOV            = mCameraParms->mFarLowFOV;
			mNearZPlane         = mCameraParms->mFarLowNear;
			mFarZPlane          = mCameraParms->mFarLowFar;
			mYOffset            = mCameraParms->mFarLowOffset;
			mDetachedWeight     = mCameraParms->mFarLowWeight;
			mDetachedParm       = mCameraParms->mFarLowDetached;
			break;
		}
		break;
	}
	case CAMANGLE_Overhead: {
		switch (mCameraZoomLevel) {
		case CAMZOOM_Near: // low zoom high angle
			mGoalTargetDistance = mCameraParms->mNearHighDist;
			mGoalVerticalAngle  = mCameraParms->mNearHighAngle.mValue * (0.017453292f);
			mGoalFOV            = mCameraParms->mNearHighFOV;
			mNearZPlane         = mCameraParms->mNearHighNear;
			mFarZPlane          = mCameraParms->mNearHighFar;
			mYOffset            = mCameraParms->mNearHighOffset;
			mDetachedWeight     = mCameraParms->mNearHighWeight;
			mDetachedParm       = mCameraParms->mNearHighDetached;
			break;
		case CAMZOOM_Mid: // medium zoom high angle
			mGoalTargetDistance = mCameraParms->mMidHighDist;
			mGoalVerticalAngle  = mCameraParms->mMidHighAngle.mValue * (0.017453292f);
			mGoalFOV            = mCameraParms->mMidHighFOV;
			mNearZPlane         = mCameraParms->mMidHighNear;
			mFarZPlane          = mCameraParms->mMidHighFar;
			mYOffset            = mCameraParms->mMidHighOffset;
			mDetachedWeight     = mCameraParms->mMidHighWeight;
			mDetachedParm       = mCameraParms->mMidHighDetached;
			break;
		case CAMZOOM_Far: // far zoom high angle
			mGoalTargetDistance = mCameraParms->mFarHighDist;
			mGoalVerticalAngle  = mCameraParms->mFarHighAngle.mValue * (0.017453292f);
			mGoalFOV            = mCameraParms->mFarHighFOV;
			mNearZPlane         = mCameraParms->mFarHighNear;
			mFarZPlane          = mCameraParms->mFarHighFar;
			mYOffset            = mCameraParms->mFarHighOffset;
			mDetachedWeight     = mCameraParms->mFarHighWeight;
			mDetachedParm       = mCameraParms->mFarHighDetached;
			break;
		}
		break;
	}
	}
}

/**
 * @note Address: 0x802402C4
 * @note Size: 0x70
 */
void PlayCamera::setTargetThetaToWhistle()
{
	Vector3f pos         = mTargetObj->getPosition();
	NaviWhistle* whistle = mTargetObj->mWhistle;
	mCameraAngleTarget   = JMAAtan2Radian(pos.x - whistle->mPosition.x, pos.z - whistle->mPosition.z);
}

/**
 * @note Address: 0x80240334
 * @note Size: 0x10
 */
void PlayCamera::setFollowTime() { mFollowTime = mCameraParms->mRotFollowTime; }

/**
 * @note Address: 0x80240344
 * @note Size: 0x68
 */
void PlayCamera::setSmoothThetaSpeed()
{
	Controller* pad = mTargetObj->mController1;
	if (pad) {
		f32 maxSpeed = mCameraParms->mMaxRotSpeed.mValue * sys->mDeltaTime;
		mSmoothMoveSpeed += pad->mMStick.mXPos * mCameraParms->mRotAccel.mValue;
		mSmoothMoveSpeed = boundAboveBelow(mSmoothMoveSpeed, maxSpeed);
	}
}

/**
 * @note Address: 0x802403AC
 * @note Size: 0xE0
 */
void PlayCamera::changeTargetTheta()
{
	if (mFollowTime > 0.0f) {
		mFollowTime -= sys->mDeltaTime;
		setTargetThetaToWhistle();
	} else {
		f32 angle = mCameraAngleTarget - mSmoothMoveSpeed;
		clampAngle(angle);
		mCameraAngleTarget = angle;
	}
	mSmoothMoveSpeed *= mCameraParms->mRotDampRate.mValue;
}

/**
 * @note Address: 0x8024048C
 * @note Size: 0x384
 */
void PlayCamera::changeTargetAtPosition()
{
	f32 M            = mDetachedWeight;
	Vector3f naviPos = mTargetObj->getPosition();
	Iterator<Creature> iterator((Stickers*)mTargetObj->mCPlateMgr);

	Vector3f newPos = naviPos * M;

	CI_LOOP(iterator)
	{
		Creature* obj = *iterator;
		if (obj) {
			Vector3f pos = obj->getPosition();
			newPos += pos;
			M += 1.0f;
		}
	}

	mGoalPosition = newPos / M;

	f32 distFromGoal = mGoalPosition.distance(naviPos);
	if (mDetachedParm < distFromGoal) {
		f32 ratio     = mDetachedParm / distFromGoal;
		f32 inv       = 1.0f - ratio;
		mGoalPosition = (naviPos * inv) + (mGoalPosition * ratio);
	}

	mGoalPosition.y += mYOffset;
}

/**
 * @note Address: 0x80240810
 * @note Size: 0x164
 */
void PlayCamera::updateParms(int flag)
{
	f32 rate            = mCameraParms->mSettingChangeSpeed.mValue;
	f32 invrate         = 1.0f - rate;
	mCurrTargetDistance = (mCurrTargetDistance * invrate) + (mGoalTargetDistance * rate);
	mCurrVerticalAngle  = (mCurrVerticalAngle * invrate) + (mGoalVerticalAngle * rate);
	mViewAngle          = (mViewAngle * invrate) + (mGoalFOV * rate);
	mProjectionNear     = (mProjectionNear * invrate) + (mNearZPlane * rate);
	mProjectionFar      = (mProjectionFar * invrate) + (mFarZPlane * rate);
	if (flag & CAMFLAGS_InZoomCam) {
		rate    = 0.175f;
		invrate = 0.825f;
	}
	mLookAtPosition = (mLookAtPosition * invrate) + (mGoalPosition * rate);

	CameraParms* parms = mCameraParms;

	f32 targetAngle = _normaliseAngle(mCameraAngleCurrent, mCameraAngleTarget); // this needs fixing

	mCameraAngleCurrent += parms->mRotSpeed.mValue * (targetAngle - mCameraAngleCurrent);

	f32 angle = mCameraAngleCurrent;
	clampAngle(angle);
	mCameraAngleCurrent = angle;
	/*
	lwz      r5, 0x24c(r3)
	rlwinm.  r0, r4, 0, 0x1a, 0x1a
	lfs      f1, lbl_8051A66C@sda21(r2)
	lfs      f0, 0x8bc(r5)
	lfs      f2, 0x1ac(r3)
	fsubs    f1, f1, f0
	lfs      f3, 0x1a8(r3)
	fmuls    f2, f2, f0
	fmadds   f2, f3, f1, f2
	stfs     f2, 0x1a8(r3)
	lfs      f2, 0x1bc(r3)
	lfs      f3, 0x1b8(r3)
	fmuls    f2, f2, f0
	fmadds   f2, f3, f1, f2
	stfs     f2, 0x1b8(r3)
	lfs      f2, 0x1c0(r3)
	lfs      f3, 0x28(r3)
	fmuls    f2, f2, f0
	fmadds   f2, f3, f1, f2
	stfs     f2, 0x28(r3)
	lfs      f2, 0x1c4(r3)
	lfs      f3, 0x70(r3)
	fmuls    f2, f2, f0
	fmadds   f2, f3, f1, f2
	stfs     f2, 0x70(r3)
	lfs      f2, 0x1c8(r3)
	lfs      f3, 0x74(r3)
	fmuls    f2, f2, f0
	fmadds   f2, f3, f1, f2
	stfs     f2, 0x74(r3)
	beq      lbl_80240894
	lfs      f0, lbl_8051A690@sda21(r2)
	lfs      f1, lbl_8051A694@sda21(r2)

lbl_80240894:
	lfs      f3, 0x180(r3)
	lfs      f2, 0x1e4(r3)
	lfs      f5, 0x184(r3)
	fmuls    f3, f3, f1
	fmuls    f2, f2, f0
	lfs      f4, 0x1e8(r3)
	lfs      f7, 0x188(r3)
	fmuls    f5, f5, f1
	fmuls    f4, f4, f0
	lfs      f6, 0x1ec(r3)
	fadds    f2, f3, f2
	fmuls    f1, f7, f1
	fmuls    f0, f6, f0
	fadds    f3, f5, f4
	stfs     f2, 0x180(r3)
	fadds    f0, f1, f0
	stfs     f3, 0x184(r3)
	stfs     f0, 0x188(r3)
	lfs      f4, 0x1b4(r3)
	lfs      f2, 0x1b0(r3)
	lwz      r4, 0x24c(r3)
	fcmpo    cr0, f4, f2
	cror     2, 1, 2
	bne      lbl_80240910
	fsubs    f3, f4, f2
	lfs      f1, lbl_8051A678@sda21(r2)
	fsubs    f0, f1, f3
	fcmpo    cr0, f0, f3
	bge      lbl_80240928
	fsubs    f4, f4, f1
	b        lbl_80240928

lbl_80240910:
	fsubs    f3, f2, f4
	lfs      f1, lbl_8051A678@sda21(r2)
	fsubs    f0, f1, f3
	fcmpo    cr0, f0, f3
	bge      lbl_80240928
	fadds    f4, f4, f1

lbl_80240928:
	fsubs    f2, f4, f2
	lfs      f3, 0x8e4(r4)
	lfs      f1, 0x1b0(r3)
	lfs      f0, lbl_8051A664@sda21(r2)
	fmadds   f1, f3, f2, f1
	stfs     f1, 0x1b0(r3)
	lfs      f1, 0x1b0(r3)
	fcmpo    cr0, f1, f0
	bge      lbl_80240958
	lfs      f0, lbl_8051A678@sda21(r2)
	fadds    f1, f0, f1
	b        lbl_8024096C

lbl_80240958:
	lfs      f0, lbl_8051A678@sda21(r2)
	fcmpo    cr0, f1, f0
	cror     2, 1, 2
	bne      lbl_8024096C
	fsubs    f1, f1, f0

lbl_8024096C:
	stfs     f1, 0x1b0(r3)
	blr
	*/
}

/**
 * @note Address: 0x80240974
 * @note Size: 0x12C
 */
void PlayCamera::updateVibration(int id)
{
	f32* vibrateTimer  = &mVibrateTimer[id];
	f32 newSpeed       = mVibrateSpeed[id] * sys->mDeltaTime;
	f32 packetStrength = 1.0f;
	mVibrateAngle[id] += newSpeed;
	mVibrateTimer[id] += sys->mDeltaTime;
	if (mVibrateAngle[id] > TAU) {
		mVibrateAngle[id] -= TAU;
	}

	if (mVibrateTimer[id] > mVibrateDuration[id]) {
		packetStrength -= (mVibrateTimer[id] - mVibrateDuration[id]) / 0.5f;
		if (packetStrength < 0.0f) {
			mVibrateEnabled[id] = false;
			mVibrateAngle[id]   = 0.0f;
			mVibrateTimer[id]   = 0.0f;
			packetStrength      = 0.0f;
		}
	}

	f32 angle             = mVibrateAngle[id];
	mVibrateRollAngle[id] = (packetStrength * mVibrateScale[id]) * mVibrateStrength[id] * sinf(angle);
}

/**
 * @note Address: 0x80240AA0
 * @note Size: 0x74
 */
void PlayCamera::otherVibFinished(int id)
{
	for (int i = 0; i < 3; i++) {
		if (mVibrateEnabled[i] && i != id) {
			mVibrateTimer[i] += 12800.0f;
		}
	}
}

/**
 * @note Address: 0x80240B14
 * @note Size: 0x174
 */
bool PlayCamera::isModCameraFinished()
{
	if (mChangePlayerState == CAMCHANGE_IsChanging) {
		f32 anglein  = mCameraAngleTarget;
		f32 angleout = mCameraAngleCurrent;
		if (anglein >= angleout) {
			if (TAU - (anglein - angleout) < (anglein - angleout)) {
				anglein -= TAU;
			}
		} else if (TAU - (angleout - anglein) < (angleout - anglein)) {
			anglein += TAU;
		}

		f32 anglediff = anglein - angleout;
		if (absVal(anglediff) < 0.1f && absVal(mGoalTargetDistance - mCurrTargetDistance) < 10.0f
		    && absVal(mGoalVerticalAngle - mCurrVerticalAngle) < 0.1f && absVal(mGoalFOV - mViewAngle) < 1.0f) {
			if (mGoalPosition.distance(mLookAtPosition) < 50.0f) {
				mChangePlayerState = CAMCHANGE_None;
				return true;
			}
		}
	}
	return false;
}

/**
 * @note Address: 0x80240C88
 * @note Size: 0x158
 */
void PlayCamera::setCollisionCameraTargetPhi(int flag)
{
	if (flag & CAMFLAGS_InZoomCam) {
		mGoalVerticalAngle = getCollisionCameraTargetPhi(mCameraParms->mZoomAngle(), mCameraParms->mZoomDist());
		return;
	}

	// collision camera only active in behind cam
	if (mCameraSelAngle != CAMANGLE_Behind) {
		return;
	}

	if (mIsCollisionCamActive) {
		f32 phi;
		switch (mCameraZoomLevel) {
		case CAMZOOM_Near:
			phi = getCollisionCameraTargetPhi(mCameraParms->mNearLowAngle(), mCameraParms->mCollRadius());
			break;
		case CAMZOOM_Mid:
			phi = getCollisionCameraTargetPhi(mCameraParms->mMidLowAngle(), mCameraParms->mCollRadius());
			break;
		case CAMZOOM_Far:
			phi = getCollisionCameraTargetPhi(mCameraParms->mFarLowAngle(), mCameraParms->mCollRadius());
			break;
		default:
			phi = getCollisionCameraTargetPhi(mCameraParms->mZoomAngle(), mCameraParms->mCollRadius());
			break;
		}

		f32 vertAngle;
		f32 interpSpeed = mCameraParms->mCollInterpSpeed();
		if (absVal(mGoalVerticalAngle - phi) < interpSpeed) {
			vertAngle = phi;
		} else if (mGoalVerticalAngle < phi) {
			vertAngle = mGoalVerticalAngle + interpSpeed;
		} else {
			vertAngle = mGoalVerticalAngle - interpSpeed;
		}

		mGoalVerticalAngle = vertAngle;
		return;
	}

	// if we're in behind cam and our vertical angle has settled, activate collision cam
	if (absVal(mCurrVerticalAngle - mGoalVerticalAngle) < 0.1f) {
		mIsCollisionCamActive = true;
	}
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	rlwinm.  r0, r4, 0, 0x1a, 0x1a
	stw      r31, 0xc(r1)
	mr       r31, r3
	beq      lbl_80240CBC
	lwz      r4, 0x24c(r31)
	lfs      f1, 0x7cc(r4)
	lfs      f2, 0x7a4(r4)
	bl       getCollisionCameraTargetPhi__Q24Game10PlayCameraFff
	stfs     f1, 0x1bc(r31)
	b        lbl_80240DCC

lbl_80240CBC:
	lwz      r0, 0x1a4(r31)
	cmpwi    r0, 0
	bne      lbl_80240DCC
	lbz      r0, 0x249(r31)
	cmplwi   r0, 0
	beq      lbl_80240D98
	lwz      r0, 0x1a0(r31)
	cmpwi    r0, 1
	beq      lbl_80240D10
	bge      lbl_80240CF0
	cmpwi    r0, 0
	bge      lbl_80240CFC
	b        lbl_80240D38

lbl_80240CF0:
	cmpwi    r0, 3
	bge      lbl_80240D38
	b        lbl_80240D24

lbl_80240CFC:
	lwz      r4, 0x24c(r31)
	lfs      f1, 0x4c(r4)
	lfs      f2, 0x81c(r4)
	bl       getCollisionCameraTargetPhi__Q24Game10PlayCameraFff
	b        lbl_80240D4C

lbl_80240D10:
	lwz      r4, 0x24c(r31)
	lfs      f1, 0x18c(r4)
	lfs      f2, 0x81c(r4)
	bl       getCollisionCameraTargetPhi__Q24Game10PlayCameraFff
	b        lbl_80240D4C

lbl_80240D24:
	lwz      r4, 0x24c(r31)
	lfs      f1, 0x2cc(r4)
	lfs      f2, 0x81c(r4)
	bl       getCollisionCameraTargetPhi__Q24Game10PlayCameraFff
	b        lbl_80240D4C

lbl_80240D38:
	lwz      r4, 0x24c(r31)
	mr       r3, r31
	lfs      f1, 0x7cc(r4)
	lfs      f2, 0x81c(r4)
	bl       getCollisionCameraTargetPhi__Q24Game10PlayCameraFff

lbl_80240D4C:
	lfs      f2, 0x1bc(r31)
	lwz      r3, 0x24c(r31)
	fsubs    f4, f2, f1
	lfs      f0, lbl_8051A664@sda21(r2)
	lfs      f3, 0x844(r3)
	fcmpo    cr0, f4, f0
	ble      lbl_80240D6C
	b        lbl_80240D70

lbl_80240D6C:
	fneg     f4, f4

lbl_80240D70:
	fcmpo    cr0, f4, f3
	bge      lbl_80240D7C
	b        lbl_80240D90

lbl_80240D7C:
	fcmpo    cr0, f2, f1
	bge      lbl_80240D8C
	fadds    f1, f2, f3
	b        lbl_80240D90

lbl_80240D8C:
	fsubs    f1, f2, f3

lbl_80240D90:
	stfs     f1, 0x1bc(r31)
	b        lbl_80240DCC

lbl_80240D98:
	lfs      f2, 0x1b8(r31)
	lfs      f1, 0x1bc(r31)
	lfs      f0, lbl_8051A664@sda21(r2)
	fsubs    f1, f2, f1
	fcmpo    cr0, f1, f0
	ble      lbl_80240DB4
	b        lbl_80240DB8

lbl_80240DB4:
	fneg     f1, f1

lbl_80240DB8:
	lfs      f0, lbl_8051A68C@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_80240DCC
	li       r0, 1
	stb      r0, 0x249(r31)

lbl_80240DCC:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/**
 * @note Address: 0x80240DE0
 * @note Size: 0x384
 */
f32 PlayCamera::getCollisionCameraTargetPhi(f32 angle, f32 dist)
{
	dist /= 15.0f; // f19
	angle *= (0.017453292f);

	f32 cosTheta = cosf(mCameraAngleTarget); // f22
	f32 sinTheta = sinf(mCameraAngleTarget); // f26
	f32 sinPhi   = sinf(angle);              // f24
	f32 cosPhi   = cosf(angle);              // f23

	for (int i = 1; i <= 15; i++) {
		f32 rad       = dist * (f32)i;
		f32 scaledSin = rad * cosPhi;                             // f6
		f32 scaledCos = rad * sinPhi;                             // f1
		f32 val       = (f32)i * mCameraParms->mCollCorrHeight(); // f20
		f32 y;
		Vector3f pos(sinTheta * scaledSin + mGoalPosition.x, mGoalPosition.y + scaledCos, cosTheta * scaledSin + mGoalPosition.z);
		CurrTriInfo info;
		info.mPosition        = pos;
		info.mUpdateOnNewMaxY = 0;
		mapMgr->getCurrTri(info);

		if (gameSystem && gameSystem->mIsInCave) {
			if (info.mTriangle) {
				val = val + info.mMaxY;
			} else {
				val = pos.y + mCameraParms->mNoCollHeight();
			}
		} else {
			val = val + info.mMinY;
		}

		if (val > pos.y) {
			f32 anglediff = JMAAtan2Radian(val - mGoalPosition.y, rad);
			if (anglediff > angle) {
				angle = anglediff;
			}
		}
	}

	return angle;
	/*
	stwu     r1, -0x160(r1)
	mflr     r0
	stw      r0, 0x164(r1)
	stfd     f31, 0x150(r1)
	psq_st   f31, 344(r1), 0, qr0
	stfd     f30, 0x140(r1)
	psq_st   f30, 328(r1), 0, qr0
	stfd     f29, 0x130(r1)
	psq_st   f29, 312(r1), 0, qr0
	stfd     f28, 0x120(r1)
	psq_st   f28, 296(r1), 0, qr0
	stfd     f27, 0x110(r1)
	psq_st   f27, 280(r1), 0, qr0
	stfd     f26, 0x100(r1)
	psq_st   f26, 264(r1), 0, qr0
	stfd     f25, 0xf0(r1)
	psq_st   f25, 248(r1), 0, qr0
	stfd     f24, 0xe0(r1)
	psq_st   f24, 232(r1), 0, qr0
	stfd     f23, 0xd0(r1)
	psq_st   f23, 216(r1), 0, qr0
	stfd     f22, 0xc0(r1)
	psq_st   f22, 200(r1), 0, qr0
	stfd     f21, 0xb0(r1)
	psq_st   f21, 184(r1), 0, qr0
	stfd     f20, 0xa0(r1)
	psq_st   f20, 168(r1), 0, qr0
	stfd     f19, 0x90(r1)
	psq_st   f19, 152(r1), 0, qr0
	stfd     f18, 0x80(r1)
	psq_st   f18, 136(r1), 0, qr0
	stw      r31, 0x7c(r1)
	stw      r30, 0x78(r1)
	stw      r29, 0x74(r1)
	lfs      f0, lbl_8051A6A8@sda21(r2)
	mr       r31, r3
	lfs      f3, lbl_8051A67C@sda21(r2)
	fdivs    f19, f2, f0
	lfs      f5, 0x1b4(r3)
	lfs      f0, lbl_8051A664@sda21(r2)
	fmr      f4, f5
	fcmpo    cr0, f5, f0
	fmuls    f18, f1, f3
	bge      lbl_80240E94
	fneg     f4, f5

lbl_80240E94:
	lfs      f2, lbl_8051A6A0@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	lfs      f0, lbl_8051A664@sda21(r2)
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f1, f4, f2
	addi     r4, r3, 4
	fcmpo    cr0, f5, f0
	fctiwz   f0, f1
	stfd     f0, 0x38(r1)
	lwz      r0, 0x3c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f22, r4, r0
	bge      lbl_80240EEC
	lfs      f0, lbl_8051A69C@sda21(r2)
	fmuls    f0, f5, f0
	fctiwz   f0, f0
	stfd     f0, 0x40(r1)
	lwz      r0, 0x44(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0
	fneg     f26, f0
	b        lbl_80240F04

lbl_80240EEC:
	fmuls    f0, f5, f2
	fctiwz   f0, f0
	stfd     f0, 0x48(r1)
	lwz      r0, 0x4c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f26, r3, r0

lbl_80240F04:
	lfs      f0, lbl_8051A664@sda21(r2)
	fcmpo    cr0, f18, f0
	bge      lbl_80240F3C
	lfs      f0, lbl_8051A69C@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f18, f0
	fctiwz   f0, f0
	stfd     f0, 0x50(r1)
	lwz      r0, 0x54(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0
	fneg     f24, f0
	b        lbl_80240F60

lbl_80240F3C:
	lfs      f0, lbl_8051A6A0@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f18, f0
	fctiwz   f0, f0
	stfd     f0, 0x58(r1)
	lwz      r0, 0x5c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f24, r3, r0

lbl_80240F60:
	lfs      f0, lbl_8051A664@sda21(r2)
	fmr      f1, f18
	fcmpo    cr0, f18, f0
	bge      lbl_80240F74
	fneg     f1, f18

lbl_80240F74:
	lfs      f0, lbl_8051A6A0@sda21(r2)
	li       r29, 1
	lfd      f27, lbl_8051A6B8@sda21(r2)
	lis      r30, 0x4330
	fmuls    f0, f1, f0
	lfs      f28, lbl_8051A6AC@sda21(r2)
	lfs      f29, lbl_8051A6B0@sda21(r2)
	lfs      f30, lbl_8051A664@sda21(r2)
	fctiwz   f0, f0
	lfs      f31, lbl_8051A66C@sda21(r2)
	stfd     f0, 0x60(r1)
	lwz      r0, 0x64(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f23, r4, r0

lbl_80240FAC:
	xoris    r6, r29, 0x8000
	lwz      r3, 0x24c(r31)
	stw      r6, 0x64(r1)
	li       r0, 1
	lfs      f3, 0x1ec(r31)
	li       r5, 0
	stw      r30, 0x60(r1)
	addi     r4, r1, 8
	lfs      f2, 0x1e8(r31)
	lfd      f1, 0x60(r1)
	lfs      f0, 0x1e4(r31)
	fsubs    f1, f1, f27
	lfs      f4, 0x86c(r3)
	stw      r6, 0x5c(r1)
	lwz      r3, mapMgr__4Game@sda21(r13)
	fmuls    f21, f19, f1
	stw      r30, 0x58(r1)
	stb      r0, 0x14(r1)
	fmuls    f6, f21, f23
	lfd      f5, 0x58(r1)
	fmuls    f1, f21, f24
	stw      r5, 0x1c(r1)
	fsubs    f5, f5, f27
	fmadds   f3, f22, f6, f3
	fadds    f25, f2, f1
	stfs     f28, 0x20(r1)
	fmadds   f0, f26, f6, f0
	stfs     f29, 0x24(r1)
	fmuls    f20, f5, f4
	stw      r5, 0x18(r1)
	stfs     f30, 0x28(r1)
	stfs     f31, 0x2c(r1)
	stfs     f30, 0x30(r1)
	stb      r5, 0x15(r1)
	stfs     f0, 8(r1)
	stfs     f25, 0xc(r1)
	stfs     f3, 0x10(r1)
	stb      r5, 0x14(r1)
	lwz      r12, 4(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	lwz      r3, gameSystem__4Game@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_80241094
	lbz      r0, 0x48(r3)
	cmplwi   r0, 0
	beq      lbl_80241094
	lwz      r0, 0x1c(r1)
	cmplwi   r0, 0
	beq      lbl_80241084
	lfs      f0, 0x20(r1)
	fadds    f20, f20, f0
	b        lbl_8024109C

lbl_80241084:
	lwz      r3, 0x24c(r31)
	lfs      f0, 0x894(r3)
	fadds    f20, f25, f0
	b        lbl_8024109C

lbl_80241094:
	lfs      f0, 0x24(r1)
	fadds    f20, f20, f0

lbl_8024109C:
	fcmpo    cr0, f20, f25
	ble      lbl_802410C8
	lfs      f0, 0x1e8(r31)
	lis      r3, atanTable___5JMath@ha
	fmr      f2, f21
	addi     r3, r3, atanTable___5JMath@l
	fsubs    f1, f20, f0
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	fcmpo    cr0, f1, f18
	ble      lbl_802410C8
	fmr      f18, f1

lbl_802410C8:
	addi     r29, r29, 1
	cmpwi    r29, 0xf
	ble      lbl_80240FAC
	fmr      f1, f18
	psq_l    f31, 344(r1), 0, qr0
	lfd      f31, 0x150(r1)
	psq_l    f30, 328(r1), 0, qr0
	lfd      f30, 0x140(r1)
	psq_l    f29, 312(r1), 0, qr0
	lfd      f29, 0x130(r1)
	psq_l    f28, 296(r1), 0, qr0
	lfd      f28, 0x120(r1)
	psq_l    f27, 280(r1), 0, qr0
	lfd      f27, 0x110(r1)
	psq_l    f26, 264(r1), 0, qr0
	lfd      f26, 0x100(r1)
	psq_l    f25, 248(r1), 0, qr0
	lfd      f25, 0xf0(r1)
	psq_l    f24, 232(r1), 0, qr0
	lfd      f24, 0xe0(r1)
	psq_l    f23, 216(r1), 0, qr0
	lfd      f23, 0xd0(r1)
	psq_l    f22, 200(r1), 0, qr0
	lfd      f22, 0xc0(r1)
	psq_l    f21, 184(r1), 0, qr0
	lfd      f21, 0xb0(r1)
	psq_l    f20, 168(r1), 0, qr0
	lfd      f20, 0xa0(r1)
	psq_l    f19, 152(r1), 0, qr0
	lfd      f19, 0x90(r1)
	psq_l    f18, 136(r1), 0, qr0
	lfd      f18, 0x80(r1)
	lwz      r31, 0x7c(r1)
	lwz      r30, 0x78(r1)
	lwz      r0, 0x164(r1)
	lwz      r29, 0x74(r1)
	mtlr     r0
	addi     r1, r1, 0x160
	blr
	*/
}

} // namespace Game
