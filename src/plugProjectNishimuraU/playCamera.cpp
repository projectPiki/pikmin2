#include "Game/CameraMgr.h"
#include "Game/Navi.h"
#include "Game/Stickers.h"
#include "PSSystem/PSSystemIF.h"
#include "nans.h"

/*
    Generated from dpostproc

    .section .ctors, "wa"  # 0x80472F00 - 0x804732C0
    .4byte __sinit_playCamera_cpp

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_80483FD0
    lbl_80483FD0:
        .4byte 0x506C6179
        .4byte 0x43616D65
        .4byte 0x72610000
    .global lbl_80483FDC
    lbl_80483FDC:
        .4byte 0x706C6179
        .4byte 0x43616D65
        .4byte 0x72612E63
        .4byte 0x70700000
    .global lbl_80483FEC
    lbl_80483FEC:
        .asciz "P2Assert"
        .skip 3

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global lbl_804C1958
    lbl_804C1958:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
    .global __vt__Q24Game10PlayCamera
    __vt__Q24Game10PlayCamera:
        .4byte 0
        .4byte 0
        .4byte __dt__Q24Game10PlayCameraFv
        .4byte getChildCount__5CNodeFv
        .4byte "getObject__17Container<5Plane>FPv"
        .4byte "getNext__22ArrayContainer<5Plane>FPv"
        .4byte "getStart__22ArrayContainer<5Plane>Fv"
        .4byte "getEnd__22ArrayContainer<5Plane>Fv"
        .4byte "get__22ArrayContainer<5Plane>FPv"
        .4byte "getAt__22ArrayContainer<5Plane>Fi"
        .4byte "getTo__22ArrayContainer<5Plane>Fv"
        .4byte writeObject__9CullPlaneFR6StreamR5Plane
        .4byte readObject__9CullPlaneFR6StreamR5Plane
        .4byte "write__22ArrayContainer<5Plane>FR6Stream"
        .4byte "read__22ArrayContainer<5Plane>FR6Stream"
        .4byte "alloc__22ArrayContainer<5Plane>Fi"
        .4byte "addOne__22ArrayContainer<5Plane>FR5Plane"
        .4byte "setArray__22ArrayContainer<5Plane>FP5Planei"
        .4byte getViewMatrix__6CameraFb
        .4byte getPosition__6CameraFv
        .4byte updatePlanes__6CameraFv
        .4byte updateScreenConstants__6CameraFv
        .4byte getLookAtPosition___Q24Game10PlayCameraFv
        .4byte getTargetDistance__6CameraFv
        .4byte getPositionPtr__6CameraFv
        .4byte on_getPositionPtr__12LookAtCameraFv
        .4byte getSoundPositionPtr__6CameraFv
        .4byte getSoundMatrixPtr__6CameraFv
        .4byte isSpecialCamera__Q24Game10PlayCameraFv
        .4byte updateMatrix__Q24Game10PlayCameraFv
        .4byte doUpdate__Q24Game10PlayCameraFv
        .4byte startVibration__Q24Game10PlayCameraFi
        .4byte init__Q24Game10PlayCameraFv

    .section .sbss # 0x80514D80 - 0x80516360
    .global lbl_80515CF0
    lbl_80515CF0:
        .skip 0x4
    .global lbl_80515CF4
    lbl_80515CF4:
        .skip 0x4

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051A660
    lbl_8051A660:
        .4byte 0x42C80000
    .global lbl_8051A664
    lbl_8051A664:
        .4byte 0x00000000
    .global lbl_8051A668
    lbl_8051A668:
        .4byte 0x41F00000
    .global lbl_8051A66C
    lbl_8051A66C:
        .float 1.0
    .global lbl_8051A670
    lbl_8051A670:
        .4byte 0x46480000
    .global lbl_8051A674
    lbl_8051A674:
        .4byte 0x40490FDB
    .global lbl_8051A678
    lbl_8051A678:
        .4byte 0x40C90FDB
    .global lbl_8051A67C
    lbl_8051A67C:
        .4byte 0x3C8EFA35
    .global lbl_8051A680
    lbl_8051A680:
        .4byte 0x41200000
    .global lbl_8051A684
    lbl_8051A684:
        .4byte 0x447A0000
    .global lbl_8051A688
    lbl_8051A688:
        .4byte 0x41DC0000
    .global lbl_8051A68C
    lbl_8051A68C:
        .float 0.1
    .global lbl_8051A690
    lbl_8051A690:
        .4byte 0x3E333333
    .global lbl_8051A694
    lbl_8051A694:
        .4byte 0x3F533333
    .global lbl_8051A698
    lbl_8051A698:
        .float 0.5
    .global lbl_8051A69C
    lbl_8051A69C:
        .4byte 0xC3A2F983
    .global lbl_8051A6A0
    lbl_8051A6A0:
        .4byte 0x43A2F983
    .global lbl_8051A6A4
    lbl_8051A6A4:
        .4byte 0x42480000
    .global lbl_8051A6A8
    lbl_8051A6A8:
        .4byte 0x41700000
    .global lbl_8051A6AC
    lbl_8051A6AC:
        .4byte 0x47FA0000
    .global lbl_8051A6B0
    lbl_8051A6B0:
        .4byte 0xC7FA0000
        .4byte 0x00000000
    .global lbl_8051A6B8
    lbl_8051A6B8:
        .4byte 0x43300000
        .4byte 0x80000000
*/

namespace Game {

/*
 * --INFO--
 * Address:	8023F3F0
 * Size:	000138
 */
PlayCamera::PlayCamera(Navi* target)
{
	mTargetObj         = target;
	mChangePlayerState = 0;
	mCameraZoomLevel   = 1;
	mCameraSelAngle    = 0;
	mCanInput          = true;
	_249               = false;

	mGoalTargetDistance = 100.0f;
	mCurrTargetDistance = 100.0f;
	mCameraAngleGoal    = 0.0f;
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
		mVibrateEnabled[i]     = false;
		mVibrateAzimuthParm[i] = 0.0f;
		mVibrateScaleParm[i]   = 0.0f;
		mVibrateTimeParm[i]    = 0.0f;
		mVibrateTimer[i]       = 0.0f;
		mVibrateAngle[i]       = 0.0f;
		mVibrateRollAngle[i]   = 0.0f;
		mVibrateSpeedParm[i]   = 0.0f;
	}

	mCameraParms    = nullptr;
	mVibrationParms = nullptr;
	mName           = "PlayCamera";
}

/*
 * --INFO--
 * Address:	8023F528
 * Size:	000008
 */
void PlayCamera::setCameraParms(CameraParms* a1) { mCameraParms = a1; }

/*
 * --INFO--
 * Address:	8023F530
 * Size:	000008
 */
void PlayCamera::setVibrationParms(VibrationParms* a1) { mVibrationParms = a1; }

/*
 * --INFO--
 * Address:	8023F538
 * Size:	00016C
 */
void PlayCamera::init()
{
	P2ASSERTLINE(120, mTargetObj);
	P2ASSERTLINE(121, mCameraParms);
	P2ASSERTLINE(122, mVibrationParms);
	mCanInput          = true;
	mChangePlayerState = 0;
	mCameraZoomLevel   = 1; // (default to medium zoom)
	mCameraSelAngle    = 0;
	setTargetParms();
	changeTargetAtPosition();
	mCurrTargetDistance = mGoalTargetDistance;

	f32 angle = mTargetObj->getFaceDir() + PI;
	if (angle < 0.0f) {
		angle += TAU;
	} else if (angle >= TAU) {
		angle -= TAU;
	}
	mCameraAngleGoal    = angle;
	mCameraAngleCurrent = angle;
	mCurrVerticalAngle  = mGoalVerticalAngle;
	mViewAngle          = mGoalFOV;
	mProjectionNear     = mNearZPlane;
	mProjectionFar      = mFarZPlane;
	mLookAtPosition     = mGoalPosition;
	updateMatrix();
}

/*
 * --INFO--
 * Address:	8023F6A4
 * Size:	000034
 */
void PlayCamera::setCameraAngle(f32 angle)
{
	mCameraAngleGoal    = angle;
	mCameraAngleCurrent = angle;
	updateMatrix();
}

/*
 * --INFO--
 * Address:	8023F6D8
 * Size:	00005C
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

/*
 * --INFO--
 * Address:	8023F734
 * Size:	00005C
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

/*
 * --INFO--
 * Address:	8023F790
 * Size:	000080
 */
void PlayCamera::changePlayerMode(bool updateDir)
{
	mChangePlayerState = 1;
	setTargetParms();
	changeTargetAtPosition();
	if (updateDir) {
		setTargetThetaToWhistle();
	} else {
		mCameraAngleGoal = mCameraAngleCurrent;
	}
	updateMatrix();
	setProjection();
}

/*
 * --INFO--
 * Address:	8023F810
 * Size:	00004C
 * Returns true if the conditions to use the holding R camera are met
 */
bool PlayCamera::isSpecialCamera()
{
	if (mTargetObj->mController1 && mCanInput && !mChangePlayerState && mHoldRTimer >= 1.0f) {
		return true;
	}
	return false;
}

/*
 * --INFO--
 * Address:	8023F85C
 * Size:	0000E8
 */
bool PlayCamera::doUpdate()
{
	u32 state = updateCameraMode();
	if (state & 0x10) {
		startZoomCamera();
	}
	if (state & 0x40) {
		finishDemoCamera();
	}
	if (state & 3) {
		startGameCamera(state);
	}
	if (state & 4) {
		setFollowTime();
	}
	if (state & 8) {
		setSmoothThetaSpeed();
	}
	changeTargetTheta();
	changeTargetAtPosition();
	setCollisionCameraTargetPhi(state);
	updateParms(state);
	for (int i = 0; i < 3; i++) {
		if (mVibrateEnabled[i]) {
			updateVibration(i);
		}
	}
	return isModCameraFinished();
}

/*
 * --INFO--
 * Address:	8023F944
 * Size:	0000E0
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

/*
 * --INFO--
 * Address:	8023FA24
 * Size:	00007C
 */
void PlayCamera::noUpdate()
{
	PSMTX44Copy(mProjectionMtx, _F4);
	PSMTXCopy(getViewMatrix(0)->mMatrix.mtxView, mCurViewMatrix.mMatrix.mtxView);
	updateScreenConstants();
	updatePlanes();
}

/*
 * --INFO--
 * Address:	8023FAA0
 * Size:	000044
 */
bool PlayCamera::isVibration()
{
	for (int i = 0; i < 3; i++) {
		if (mVibrateEnabled[i])
			return true;
	}
	return false;
}

/*
 * --INFO--
 * Address:	8023FAE4
 * Size:	000208
 */
void PlayCamera::startVibration(int type, f32 strength)
{
	if (type == 0x1d) {
		mVibrateEnabled[0]     = true;
		mVibrateTimer[0]       = 0.0f;
		mVibrateScaleParm[0]   = strength;
		mVibrateAzimuthParm[0] = mVibrationParms->mAzimuthShortVib;
		mVibrateSpeedParm[0]   = mVibrationParms->mAzimuthShortSpeed;
		mVibrateTimeParm[0]    = mVibrationParms->mAzimuthShortTime;
		otherVibFinished(0);
	} else if (type == 0x1c) {
		mVibrateEnabled[2]     = true;
		mVibrateTimer[2]       = 0.0f;
		mVibrateScaleParm[2]   = strength;
		mVibrateAzimuthParm[2] = mVibrationParms->mZoomShortVib;
		mVibrateSpeedParm[2]   = mVibrationParms->mZoomShortSpeed;
		mVibrateTimeParm[2]    = mVibrationParms->mZoomShortTime;
		otherVibFinished(2);
	} else {
		mVibrateEnabled[1]   = true;
		mVibrateTimer[1]     = 0.0f;
		mVibrateScaleParm[1] = strength;
		otherVibFinished(1);
		if (type == 0x1b) {
			mVibrateAzimuthParm[1] = mVibrationParms->mElevationHardVib2;
			mVibrateSpeedParm[1]   = mVibrationParms->mElevationHardSpeed;
			mVibrateTimeParm[1]    = mVibrationParms->mElevationHardTime;
		} else {
			if (type <= 8) {
				mVibrateAzimuthParm[1] = mVibrationParms->mElevationLightVib;
			} else if (type <= 17) {
				mVibrateAzimuthParm[1] = mVibrationParms->mElevationMiddleVib;
			} else {
				mVibrateAzimuthParm[1] = mVibrationParms->mElevationHardVib;
			}
			int flag = (type / 3) % 3;
			if (flag == 0) {
				mVibrateSpeedParm[1] = mVibrationParms->mElevationSlowSpeed;
			} else if (flag == 1) {
				mVibrateSpeedParm[1] = mVibrationParms->mElevationMiddleSpeed;
			} else {
				mVibrateSpeedParm[1] = mVibrationParms->mElevationFastSpeed;
			}
			if (type % 3 == 0) {
				mVibrateTimeParm[1] = mVibrationParms->mElevationShortTime;
			} else if (type % 3 == 1) {
				mVibrateTimeParm[1] = mVibrationParms->mElevationMiddleTime;
			} else {
				mVibrateTimeParm[1] = mVibrationParms->mElevationLongTime;
			}
		}
	}
}

/*
 * --INFO--
 * Address:	8023FCEC
 * Size:	0000D0
 */
void PlayCamera::startDemoCamera(int type)
{
	switch (type) {
	case 1:
		mGoalTargetDistance = mCameraParms->mZmdt;
		mGoalVerticalAngle  = mCameraParms->mZman.mValue * DEG2RAD;
		mGoalFOV            = mCameraParms->mZmfv;
		mNearZPlane         = 1.0f;
		mFarZPlane          = 12800.0f;
		mYOffset            = 10.0f;
		mDetachedWeight     = 1000.0f;
		mDetachedParm       = 27.5f;
		break;
	default:
		mGoalTargetDistance = mCameraParms->mCnld;
		mGoalVerticalAngle  = mCameraParms->mCnla.mValue * DEG2RAD;
		mGoalFOV            = mCameraParms->mCnlf;
		mNearZPlane         = mCameraParms->mNlnc;
		mFarZPlane          = mCameraParms->mNlfc;
		mYOffset            = mCameraParms->mCnlo;
		mDetachedWeight     = mCameraParms->mCnlw;
		mDetachedParm       = mCameraParms->mNldt;
		break;
	}
}

/*
 * --INFO--
 * Address:	8023FDBC
 * Size:	000020
 */
void PlayCamera::finishDemoCamera() { setTargetParms(); }

/*
 * --INFO--
 * Address:	8023FDDC
 * Size:	0000EC
 */
u32 PlayCamera::updateCameraMode()
{
	Controller* pad = mTargetObj->mController1;
	u32 ret         = 0;
	if (pad && mCanInput) {
		if (!mChangePlayerState) {
			if (pad->getButton() & Controller::PRESS_R) {
				if (mHoldRTimer < 1.0f) {
					mHoldRTimer += sys->mDeltaTime;
					if (mHoldRTimer >= 1.0f) {
						ret |= 0x30;
					}
				} else {
					ret |= 0x20;
				}
			} else {
				if (mHoldRTimer >= 1.0f) {
					ret |= 0x40;
				}
				mHoldRTimer = 0.0f;
			}

			if (!(ret & 0x20)) {
				if (pad->getButtonDown() & Controller::PRESS_R) {
					ret |= 1;
				}
				if (pad->getButtonDown() & Controller::PRESS_Z) {
					ret |= 2;
				}
			}

			if (pad->getButtonDown() & Controller::PRESS_L) {
				ret |= 4;
			} else {
				if (pad->mButton.mAnalogL > 0.1f) {
					ret |= 8;
				}
			}
		}
	}
	return ret;
}

/*
 * --INFO--
 * Address:	8023FEC8
 * Size:	000080
 */
void PlayCamera::startZoomCamera()
{
	mGoalTargetDistance = mCameraParms->mZmdt;
	mGoalVerticalAngle  = mCameraParms->mZman.mValue * DEG2RAD;
	mGoalFOV            = mCameraParms->mZmfv;
	mNearZPlane         = 1.0f;
	mFarZPlane          = 12800.0f;
	mYOffset            = 10.0f;
	mDetachedWeight     = 1000.0f;
	mDetachedParm       = 27.5f;
	PSSystem::spSysIF->playSystemSe(PSSE_SY_CAMERAVIEW_ROTATE, 0);
}

/*
 * --INFO--
 * Address:	8023FF48
 * Size:	000084
 */
void PlayCamera::startGameCamera(int flag)
{
	if (flag & 1) {
		mCameraZoomLevel++;
		if (mCameraZoomLevel > 2) {
			mCameraZoomLevel = 0;
		}
	}
	if (flag & 2) {
		mCameraSelAngle = mCameraSelAngle ^ 1;
		_249            = 0;
	}
	PSSystem::spSysIF->playSystemSe(PSSE_SY_CAMERAVIEW_CHANGE, 0);
	setTargetParms();
}

/*
 * --INFO--
 * Address:	8023FFCC
 * Size:	0002F8
 */
void PlayCamera::setTargetParms()
{
	mHoldRTimer = 0.0f;
	switch (mCameraSelAngle) {
	case 0: {
		switch (mCameraZoomLevel) {
		case 0: // low zoom low angle
			mGoalTargetDistance = mCameraParms->mCnld;
			mGoalVerticalAngle  = mCameraParms->mCnla.mValue * DEG2RAD;
			mGoalFOV            = mCameraParms->mCnlf;
			mNearZPlane         = mCameraParms->mNlnc;
			mFarZPlane          = mCameraParms->mNlfc;
			mYOffset            = mCameraParms->mCnlo;
			mDetachedWeight     = mCameraParms->mCnlw;
			mDetachedParm       = mCameraParms->mNldt;
			break;
		case 1: // medium zoom low angle
			mGoalTargetDistance = mCameraParms->mCmld;
			mGoalVerticalAngle  = mCameraParms->mCmla.mValue * DEG2RAD;
			mGoalFOV            = mCameraParms->mCmlf;
			mNearZPlane         = mCameraParms->mMlnc;
			mFarZPlane          = mCameraParms->mMlfc;
			mYOffset            = mCameraParms->mCmlo;
			mDetachedWeight     = mCameraParms->mCmlw;
			mDetachedParm       = mCameraParms->mMldt;
			break;
		case 2: // far zoom low angle
			mGoalTargetDistance = mCameraParms->mCfld;
			mGoalVerticalAngle  = mCameraParms->mCfla.mValue * DEG2RAD;
			mGoalFOV            = mCameraParms->mCflf;
			mNearZPlane         = mCameraParms->mFlnc;
			mFarZPlane          = mCameraParms->mFlfc;
			mYOffset            = mCameraParms->mCflo;
			mDetachedWeight     = mCameraParms->mCflw;
			mDetachedParm       = mCameraParms->mFldt;
			break;
		}
		break;
	}
	case 1: {
		switch (mCameraZoomLevel) {
		case 0: // low zoom high angle
			mGoalTargetDistance = mCameraParms->mCnhd;
			mGoalVerticalAngle  = mCameraParms->mCnha.mValue * DEG2RAD;
			mGoalFOV            = mCameraParms->mCnhf;
			mNearZPlane         = mCameraParms->mNhnc;
			mFarZPlane          = mCameraParms->mNhfc;
			mYOffset            = mCameraParms->mCnho;
			mDetachedWeight     = mCameraParms->mCnhw;
			mDetachedParm       = mCameraParms->mNhdt;
			break;
		case 1: // medium zoom high angle
			mGoalTargetDistance = mCameraParms->mCmhd;
			mGoalVerticalAngle  = mCameraParms->mCmha.mValue * DEG2RAD;
			mGoalFOV            = mCameraParms->mCmhf;
			mNearZPlane         = mCameraParms->mMhnc;
			mFarZPlane          = mCameraParms->mMhfc;
			mYOffset            = mCameraParms->mCmho;
			mDetachedWeight     = mCameraParms->mCmhw;
			mDetachedParm       = mCameraParms->mMhdt;
			break;
		case 2: // far zoom high angle
			mGoalTargetDistance = mCameraParms->mCfhd;
			mGoalVerticalAngle  = mCameraParms->mCfha.mValue * DEG2RAD;
			mGoalFOV            = mCameraParms->mCfhf;
			mNearZPlane         = mCameraParms->mFhnc;
			mFarZPlane          = mCameraParms->mFhfc;
			mYOffset            = mCameraParms->mCfho;
			mDetachedWeight     = mCameraParms->mCfhw;
			mDetachedParm       = mCameraParms->mFhdt;
			break;
		}
		break;
	}
	}
}

/*
 * --INFO--
 * Address:	802402C4
 * Size:	000070
 */
void PlayCamera::setTargetThetaToWhistle()
{
	Vector3f pos         = mTargetObj->getPosition();
	NaviWhistle* whistle = mTargetObj->mWhistle;
	mCameraAngleGoal     = JMath::atanTable_.atan2_(pos.x - whistle->mPosition.x, pos.z - whistle->mPosition.z);
}

/*
 * --INFO--
 * Address:	80240334
 * Size:	000010
 */
void PlayCamera::setFollowTime() { mFollowTime = mCameraParms->mCmft; }

/*
 * --INFO--
 * Address:	80240344
 * Size:	000068
 */
void PlayCamera::setSmoothThetaSpeed()
{
	Controller* pad = mTargetObj->mController1;
	if (pad) {
		f32 calc1 = mCameraParms->mCmtm.mValue * sys->mDeltaTime;
		mSmoothMoveSpeed += pad->mMStick.mXPos * mCameraParms->mCmta.mValue;
		f32 calc2 = -calc1;
		f32 calc3 = mSmoothMoveSpeed;
		if (calc2 < calc3) {
			calc2 = calc3;
			if (calc1 > calc3) {
				calc2 = calc1;
			}
		}
		mSmoothMoveSpeed = calc2;
	}
	/*
	lwz      r4, 0x198(r3)
	lwz      r6, 0x278(r4)
	cmplwi   r6, 0
	beqlr
	lwz      r5, 0x24c(r3)
	lwz      r4, sys@sda21(r13)
	lfs      f2, 0x48(r6)
	lfs      f1, 0x934(r5)
	lfs      f0, 0x1d8(r3)
	lfs      f4, 0x95c(r5)
	lfs      f3, 0x54(r4)
	fmadds   f0, f2, f1, f0
	fmuls    f2, f4, f3
	stfs     f0, 0x1d8(r3)
	fneg     f1, f2
	lfs      f0, 0x1d8(r3)
	fcmpo    cr0, f0, f1
	bge      lbl_80240390
	b        lbl_802403A4

lbl_80240390:
	fcmpo    cr0, f0, f2
	ble      lbl_802403A0
	fmr      f1, f2
	b        lbl_802403A4

lbl_802403A0:
	fmr      f1, f0

lbl_802403A4:
	stfs     f1, 0x1d8(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	802403AC
 * Size:	0000E0
 */
void PlayCamera::changeTargetTheta()
{
	if (mFollowTime > 0.0f) {
		mFollowTime -= sys->mDeltaTime;
		setTargetThetaToWhistle();
	} else {
		f32 angle = mCameraAngleGoal - mSmoothMoveSpeed;
		if (angle < 0.0f) {
			angle += TAU;
		} else if (angle >= TAU) {
			angle -= TAU;
		}
		mCameraAngleGoal = angle;
	}
	mSmoothMoveSpeed *= mCameraParms->mCmtb.mValue;
}

/*
 * --INFO--
 * Address:	8024048C
 * Size:	000384
 */
void PlayCamera::changeTargetAtPosition()
{
	f32 M            = mDetachedWeight;
	Vector3f naviPos = mTargetObj->getPosition();
	Iterator<Creature> iterator((Stickers*)mTargetObj->mCPlateMgr);

	f32 X = naviPos.x * M;
	f32 Y = naviPos.y * M;
	f32 Z = naviPos.z * M;

	CI_LOOP(iterator)
	{
		Creature* obj = *iterator;
		if (obj) {
			Vector3f pos = obj->getPosition();
			X += pos.x;
			Y += pos.y;
			Z += pos.z;
			M += 1.0f;
		}
	}

	mGoalPosition.x = X / M;
	mGoalPosition.y = Y / M;
	mGoalPosition.z = Z / M;

	f32 calc = _distanceBetween(mGoalPosition, naviPos);
	if (calc < mDetachedParm) {
		f32 calc1     = mDetachedParm / calc;
		f32 inv       = 1.0f - calc1;
		mGoalPosition = (naviPos * inv) + (mGoalPosition * calc1);
	}

	mGoalPosition.y += mYOffset;
	/*
	stwu     r1, -0xb0(r1)
	mflr     r0
	stw      r0, 0xb4(r1)
	stfd     f31, 0xa0(r1)
	psq_st   f31, 168(r1), 0, qr0
	stfd     f30, 0x90(r1)
	psq_st   f30, 152(r1), 0, qr0
	stfd     f29, 0x80(r1)
	psq_st   f29, 136(r1), 0, qr0
	stfd     f28, 0x70(r1)
	psq_st   f28, 120(r1), 0, qr0
	stfd     f27, 0x60(r1)
	psq_st   f27, 104(r1), 0, qr0
	stfd     f26, 0x50(r1)
	psq_st   f26, 88(r1), 0, qr0
	stfd     f25, 0x40(r1)
	psq_st   f25, 72(r1), 0, qr0
	stw      r31, 0x3c(r1)
	mr       r31, r3
	addi     r3, r1, 0x14
	lwz      r4, 0x198(r31)
	lfs      f25, 0x1d0(r31)
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x198(r31)
	lis      r4, "__vt__26Iterator<Q24Game8Creature>"@ha
	lfs      f29, 0x14(r1)
	li       r0, 0
	lwz      r3, 0x254(r3)
	addi     r4, r4, "__vt__26Iterator<Q24Game8Creature>"@l
	lfs      f31, 0x18(r1)
	cmplwi   r0, 0
	lfs      f30, 0x1c(r1)
	fmuls    f28, f29, f25
	fmuls    f27, f31, f25
	stw      r4, 0x20(r1)
	fmuls    f26, f30, f25
	stw      r0, 0x2c(r1)
	stw      r0, 0x24(r1)
	stw      r3, 0x28(r1)
	bne      lbl_80240550
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x24(r1)
	b        lbl_802406EC

lbl_80240550:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x24(r1)
	b        lbl_802405BC

lbl_80240568:
	lwz      r3, 0x28(r1)
	lwz      r4, 0x24(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x2c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_802406EC
	lwz      r3, 0x28(r1)
	lwz      r4, 0x24(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x24(r1)

lbl_802405BC:
	lwz      r12, 0x20(r1)
	addi     r3, r1, 0x20
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80240568
	b        lbl_802406EC

lbl_802405DC:
	lwz      r3, 0x28(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	cmplwi   r3, 0
	beq      lbl_80240630
	mr       r4, r3
	addi     r3, r1, 8
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f0, 8(r1)
	lfs      f2, 0xc(r1)
	lfs      f1, 0x10(r1)
	fadds    f28, f28, f0
	lfs      f0, lbl_8051A66C@sda21(r2)
	fadds    f27, f27, f2
	fadds    f26, f26, f1
	fadds    f25, f25, f0

lbl_80240630:
	lwz      r0, 0x2c(r1)
	cmplwi   r0, 0
	bne      lbl_8024065C
	lwz      r3, 0x28(r1)
	lwz      r4, 0x24(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x24(r1)
	b        lbl_802406EC

lbl_8024065C:
	lwz      r3, 0x28(r1)
	lwz      r4, 0x24(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x24(r1)
	b        lbl_802406D0

lbl_8024067C:
	lwz      r3, 0x28(r1)
	lwz      r4, 0x24(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x2c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_802406EC
	lwz      r3, 0x28(r1)
	lwz      r4, 0x24(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x24(r1)

lbl_802406D0:
	lwz      r12, 0x20(r1)
	addi     r3, r1, 0x20
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8024067C

lbl_802406EC:
	lwz      r3, 0x28(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x24(r1)
	cmplw    r4, r3
	bne      lbl_802405DC
	fdivs    f1, f28, f25
	lfs      f0, lbl_8051A664@sda21(r2)
	fdivs    f2, f27, f25
	stfs     f1, 0x1e4(r31)
	fdivs    f1, f26, f25
	stfs     f2, 0x1e8(r31)
	stfs     f1, 0x1ec(r31)
	lfs      f6, 0x1e8(r31)
	lfs      f7, 0x1e4(r31)
	fsubs    f2, f6, f31
	lfs      f5, 0x1ec(r31)
	fsubs    f3, f7, f29
	fsubs    f1, f5, f30
	fmuls    f2, f2, f2
	fmuls    f4, f1, f1
	fmadds   f1, f3, f3, f2
	fadds    f1, f4, f1
	fcmpo    cr0, f1, f0
	ble      lbl_80240768
	ble      lbl_8024076C
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_8024076C

lbl_80240768:
	fmr      f1, f0

lbl_8024076C:
	lfs      f0, 0x1d4(r31)
	fcmpo    cr0, f0, f1
	bge      lbl_802407B4
	fdivs    f8, f0, f1
	lfs      f0, lbl_8051A66C@sda21(r2)
	fsubs    f1, f0, f8
	fmuls    f0, f7, f8
	fmuls    f2, f6, f8
	fmuls    f4, f29, f1
	fmuls    f3, f31, f1
	fmuls    f1, f30, f1
	fadds    f4, f4, f0
	fmuls    f0, f5, f8
	fadds    f2, f3, f2
	stfs     f4, 0x1e4(r31)
	fadds    f0, f1, f0
	stfs     f2, 0x1e8(r31)
	stfs     f0, 0x1ec(r31)

lbl_802407B4:
	lfs      f1, 0x1e8(r31)
	lfs      f0, 0x1cc(r31)
	fadds    f0, f1, f0
	stfs     f0, 0x1e8(r31)
	psq_l    f31, 168(r1), 0, qr0
	lfd      f31, 0xa0(r1)
	psq_l    f30, 152(r1), 0, qr0
	lfd      f30, 0x90(r1)
	psq_l    f29, 136(r1), 0, qr0
	lfd      f29, 0x80(r1)
	psq_l    f28, 120(r1), 0, qr0
	lfd      f28, 0x70(r1)
	psq_l    f27, 104(r1), 0, qr0
	lfd      f27, 0x60(r1)
	psq_l    f26, 88(r1), 0, qr0
	lfd      f26, 0x50(r1)
	psq_l    f25, 72(r1), 0, qr0
	lfd      f25, 0x40(r1)
	lwz      r0, 0xb4(r1)
	lwz      r31, 0x3c(r1)
	mtlr     r0
	addi     r1, r1, 0xb0
	blr
	*/
}

/*
 * --INFO--
 * Address:	80240810
 * Size:	000164
 */
void PlayCamera::updateParms(int flag)
{
	f32 rate            = mCameraParms->mCpmd;
	f32 invrate         = 1.0f - rate;
	mCurrTargetDistance = mCurrTargetDistance * invrate + mGoalTargetDistance * rate;
	mCurrVerticalAngle  = mCurrVerticalAngle * invrate + mGoalVerticalAngle * rate;
	mViewAngle          = mViewAngle * invrate + mGoalFOV * rate;
	mProjectionNear     = mProjectionNear * invrate + mNearZPlane * rate;
	mProjectionFar      = mProjectionFar * invrate + mFarZPlane * rate;
	if (flag & 0x20) {
		rate    = 0.175f;
		invrate = 0.825f;
	}
	mLookAtPosition = mLookAtPosition * rate + mGoalPosition * invrate;

	f32 anglein  = mCameraAngleGoal;
	f32 angleout = mCameraAngleCurrent;
	if (anglein > angleout) {
		if (TAU - (anglein - angleout) < anglein - angleout) {
			anglein -= TAU;
		}
	} else {
		if (TAU - (angleout - anglein) < angleout - anglein) {
			anglein += TAU;
		}
	}
	mCameraAngleCurrent += mCameraParms->mCmmt.mValue * (anglein - angleout);
	f32 angle = mCameraAngleCurrent;
	if (angle < 0.0f) {
		angle += TAU;
	} else if (angle >= TAU) {
		angle -= TAU;
	}
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

/*
 * --INFO--
 * Address:	80240974
 * Size:	00012C
 */
void PlayCamera::updateVibration(int id)
{
	mVibrateAngle[id] += mVibrateSpeedParm[id] * sys->mDeltaTime;
	mVibrateTimer[id] += sys->mDeltaTime;
	if (mVibrateAngle[id] > TAU) {
		mVibrateAngle[id] -= TAU;
	}

	f32 test  = mVibrateTimer[id];
	f32 test2 = 1.0f;
	if (test > mVibrateTimeParm[id]) {
		test2 = 1.0f - (test - mVibrateTimeParm[id]) / 0.5f;
		if (test2 < 0.0f) {
			mVibrateEnabled[id] = false;
			mVibrateAngle[id]   = 0.0f;
			mVibrateTimer[id]   = 0.0f;
			test2               = 0.0f;
		}
	}

	f32 angle             = mVibrateAngle[id];
	mVibrateRollAngle[id] = mVibrateScaleParm[id] * test2 * mVibrateAzimuthParm[id] * pikmin2_sinf(angle);

	/*
	stwu     r1, -0x20(r1)
	slwi     r6, r4, 2
	add      r7, r3, r6
	lfs      f0, lbl_8051A678@sda21(r2)
	lwz      r5, sys@sda21(r13)
	addi     r8, r7, 0x218
	lfs      f2, 0x1f4(r7)
	lfs      f1, 0x54(r5)
	lfs      f3, 0x20c(r7)
	fmuls    f1, f2, f1
	lfs      f4, lbl_8051A66C@sda21(r2)
	fadds    f1, f3, f1
	stfs     f1, 0x20c(r7)
	lwz      r5, sys@sda21(r13)
	lfs      f2, 0x218(r7)
	lfs      f1, 0x54(r5)
	fadds    f1, f2, f1
	stfs     f1, 0x218(r7)
	lfs      f1, 0x20c(r7)
	fcmpo    cr0, f1, f0
	ble      lbl_802409D0
	fsubs    f0, f1, f0
	stfs     f0, 0x20c(r7)

lbl_802409D0:
	add      r5, r3, r6
	lfs      f1, 0(r8)
	lfs      f0, 0x224(r5)
	fcmpo    cr0, f1, f0
	ble      lbl_80240A18
	fsubs    f2, f1, f0
	lfs      f1, lbl_8051A698@sda21(r2)
	lfs      f0, lbl_8051A664@sda21(r2)
	fdivs    f1, f2, f1
	fsubs    f4, f4, f1
	fcmpo    cr0, f4, f0
	bge      lbl_80240A18
	add      r4, r3, r4
	li       r0, 0
	stb      r0, 0x1f0(r4)
	fmr      f4, f0
	stfs     f0, 0x20c(r7)
	stfs     f0, 0(r8)

lbl_80240A18:
	add      r4, r3, r6
	lfs      f3, 0x20c(r7)
	lfs      f1, 0x230(r4)
	lfs      f0, lbl_8051A664@sda21(r2)
	fmuls    f1, f4, f1
	lfs      f2, 0x23c(r4)
	fcmpo    cr0, f3, f0
	fmuls    f1, f2, f1
	bge      lbl_80240A68
	lfs      f0, lbl_8051A69C@sda21(r2)
	lis      r4, sincosTable___5JMath@ha
	addi     r4, r4, sincosTable___5JMath@l
	fmuls    f0, f3, f0
	fctiwz   f0, f0
	stfd     f0, 8(r1)
	lwz      r0, 0xc(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0
	fneg     f0, f0
	b        lbl_80240A8C

lbl_80240A68:
	lfs      f0, lbl_8051A6A0@sda21(r2)
	lis      r4, sincosTable___5JMath@ha
	addi     r4, r4, sincosTable___5JMath@l
	fmuls    f0, f3, f0
	fctiwz   f0, f0
	stfd     f0, 0x10(r1)
	lwz      r0, 0x14(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0

lbl_80240A8C:
	fmuls    f0, f1, f0
	add      r3, r3, r6
	stfs     f0, 0x200(r3)
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80240AA0
 * Size:	000074
 */
void PlayCamera::otherVibFinished(int id)
{
	for (int i = 0; i < 3; i++) {
		if (mVibrateEnabled[i] && i != id) {
			mVibrateTimer[i] += 12800.0f;
		}
	}
}

/*
 * --INFO--
 * Address:	80240B14
 * Size:	000174
 */
bool PlayCamera::isModCameraFinished()
{
	if (mChangePlayerState == 1) {
		// no thanks
	}
	return false;
	/*
	lwz      r0, 0x19c(r3)
	cmpwi    r0, 1
	bne      lbl_80240C80
	lfs      f3, 0x1b4(r3)
	lfs      f4, 0x1b0(r3)
	fcmpo    cr0, f3, f4
	cror     2, 1, 2
	bne      lbl_80240B50
	fsubs    f2, f3, f4
	lfs      f1, lbl_8051A678@sda21(r2)
	fsubs    f0, f1, f2
	fcmpo    cr0, f0, f2
	bge      lbl_80240B68
	fsubs    f3, f3, f1
	b        lbl_80240B68

lbl_80240B50:
	fsubs    f2, f4, f3
	lfs      f1, lbl_8051A678@sda21(r2)
	fsubs    f0, f1, f2
	fcmpo    cr0, f0, f2
	bge      lbl_80240B68
	fadds    f3, f3, f1

lbl_80240B68:
	fsubs    f1, f3, f4
	lfs      f0, lbl_8051A664@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_80240B7C
	b        lbl_80240B80

lbl_80240B7C:
	fneg     f1, f1

lbl_80240B80:
	lfs      f0, lbl_8051A68C@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_80240C80
	lfs      f2, 0x1ac(r3)
	lfs      f1, 0x1a8(r3)
	lfs      f0, lbl_8051A664@sda21(r2)
	fsubs    f1, f2, f1
	fcmpo    cr0, f1, f0
	ble      lbl_80240BA8
	b        lbl_80240BAC

lbl_80240BA8:
	fneg     f1, f1

lbl_80240BAC:
	lfs      f0, lbl_8051A680@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_80240C80
	lfs      f2, 0x1bc(r3)
	lfs      f1, 0x1b8(r3)
	lfs      f0, lbl_8051A664@sda21(r2)
	fsubs    f1, f2, f1
	fcmpo    cr0, f1, f0
	ble      lbl_80240BD4
	b        lbl_80240BD8

lbl_80240BD4:
	fneg     f1, f1

lbl_80240BD8:
	lfs      f0, lbl_8051A68C@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_80240C80
	lfs      f2, 0x1c0(r3)
	lfs      f1, 0x28(r3)
	lfs      f0, lbl_8051A664@sda21(r2)
	fsubs    f1, f2, f1
	fcmpo    cr0, f1, f0
	ble      lbl_80240C00
	b        lbl_80240C04

lbl_80240C00:
	fneg     f1, f1

lbl_80240C04:
	lfs      f0, lbl_8051A66C@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_80240C80
	lfs      f1, 0x1e8(r3)
	lfs      f0, 0x184(r3)
	lfs      f3, 0x1e4(r3)
	fsubs    f4, f1, f0
	lfs      f2, 0x180(r3)
	lfs      f1, 0x1ec(r3)
	lfs      f0, 0x188(r3)
	fsubs    f3, f3, f2
	fmuls    f4, f4, f4
	fsubs    f2, f1, f0
	lfs      f0, lbl_8051A664@sda21(r2)
	fmadds   f1, f3, f3, f4
	fmuls    f2, f2, f2
	fadds    f1, f2, f1
	fcmpo    cr0, f1, f0
	ble      lbl_80240C60
	ble      lbl_80240C64
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_80240C64

lbl_80240C60:
	fmr      f1, f0

lbl_80240C64:
	lfs      f0, lbl_8051A6A4@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_80240C80
	li       r0, 0
	stw      r0, 0x19c(r3)
	li       r3, 1
	blr

lbl_80240C80:
	li       r3, 0
	blr
	*/
}

/*
 * --INFO--
 * Address:	80240C88
 * Size:	000158
 */
void PlayCamera::setCollisionCameraTargetPhi(int)
{
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

/*
 * --INFO--
 * Address:	80240DE0
 * Size:	000384
 */
void PlayCamera::getCollisionCameraTargetPhi(f32, f32)
{
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
