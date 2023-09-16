#ifndef _GAME_CAMERAMGR_H
#define _GAME_CAMERAMGR_H

#include "CNode.h"
#include "BaseParm.h"
#include "Parameters.h"
#include "IDelegate.h"
#include "Vector3.h"
#include "Camera.h"

struct Viewport;

namespace Game {
struct CameraArg;
struct Navi;

struct CameraArg {
	u32 state;
};

struct CameraData {
	f32 mTargetDistance;      // _00
	f32 mCameraAngle;         // _04
	f32 mVerticalAngle;       // _08
	f32 mFieldofView;         // _0C
	f32 mNearZ;               // _10
	f32 mFarZ;                // _14
	Vector3f mLookAtPosition; // _18
	int mZoomLevel;           // _24
	int mSelAngle;            // _28
};

/**
 * @size{0x998}
 */
struct CameraParms : public Parameters {
	CameraParms();

	Parm<f32> mCnld; // _00C
	Parm<f32> mCnla; // _034
	Parm<f32> mCnlf; // _05C
	Parm<f32> mCnlo; // _084
	Parm<f32> mCnlw; // _0AC
	Parm<f32> mNldt; // _0D4
	Parm<f32> mNlnc; // _0FC
	Parm<f32> mNlfc; // _124
	Parm<f32> mCmld; // _14C
	Parm<f32> mCmla; // _174
	Parm<f32> mCmlf; // _19C
	Parm<f32> mCmlo; // _1C4
	Parm<f32> mCmlw; // _1EC
	Parm<f32> mMldt; // _214
	Parm<f32> mMlnc; // _23C
	Parm<f32> mMlfc; // _264
	Parm<f32> mCfld; // _28C
	Parm<f32> mCfla; // _2B4
	Parm<f32> mCflf; // _2DC
	Parm<f32> mCflo; // _304
	Parm<f32> mCflw; // _32C
	Parm<f32> mFldt; // _354
	Parm<f32> mFlnc; // _37C
	Parm<f32> mFlfc; // _3A4
	Parm<f32> mCnhd; // _3CC
	Parm<f32> mCnha; // _3F4
	Parm<f32> mCnhf; // _41C
	Parm<f32> mCnho; // _444
	Parm<f32> mCnhw; // _46C
	Parm<f32> mNhdt; // _494
	Parm<f32> mNhnc; // _4BC
	Parm<f32> mNhfc; // _4E4
	Parm<f32> mCmhd; // _50C
	Parm<f32> mCmha; // _534
	Parm<f32> mCmhf; // _55C
	Parm<f32> mCmho; // _584
	Parm<f32> mCmhw; // _5AC
	Parm<f32> mMhdt; // _5D4
	Parm<f32> mMhnc; // _5FC
	Parm<f32> mMhfc; // _624
	Parm<f32> mCfhd; // _64C
	Parm<f32> mCfha; // _674
	Parm<f32> mCfhf; // _69C
	Parm<f32> mCfho; // _6C4
	Parm<f32> mCfhw; // _6EC
	Parm<f32> mFhdt; // _714
	Parm<f32> mFhnc; // _73C
	Parm<f32> mFhfc; // _764
	Parm<f32> mZmdt; // _78C
	Parm<f32> mZman; // _7B4
	Parm<f32> mZmfv; // _7DC
	Parm<f32> mClcr; // _804
	Parm<f32> mClms; // _82C
	Parm<f32> mClmh; // _854
	Parm<f32> mClnh; // _87C
	Parm<f32> mCpmd; // _8A4
	Parm<f32> mCmmt; // _8CC
	Parm<f32> mCmft; // _8F4
	Parm<f32> mCmta; // _91C
	Parm<f32> mCmtm; // _944
	Parm<f32> mCmtb; // _96C
};

/**
 * @size{0x308}
 */
struct VibrationParms : public Parameters {
	VibrationParms();

	Parm<f32> mElevationLightVib;    // _00C
	Parm<f32> mElevationMiddleVib;   // _034
	Parm<f32> mElevationHardVib;     // _05C
	Parm<f32> mElevationSlowSpeed;   // _084
	Parm<f32> mElevationMiddleSpeed; // _0AC
	Parm<f32> mElevationFastSpeed;   // _0D4
	Parm<f32> mElevationShortTime;   // _0FC
	Parm<f32> mElevationMiddleTime;  // _124
	Parm<f32> mElevationLongTime;    // _14C
	Parm<f32> mElevationHardVib2;    // _174
	Parm<f32> mElevationHardSpeed;   // _19C
	Parm<f32> mElevationHardTime;    // _1C4
	Parm<f32> mZoomShortVib;         // _1EC
	Parm<f32> mZoomShortSpeed;       // _214
	Parm<f32> mZoomShortTime;        // _23C
	Parm<f32> mAzimuthShortVib;      // _264
	Parm<f32> mAzimuthShortSpeed;    // _28C
	Parm<f32> mAzimuthShortTime;     // _2B4
	Parm<f32> mVibMaxDistance;       // _2DC
};

struct PlayCamera : public LookAtCamera {
	PlayCamera(Navi*);

	virtual ~PlayCamera() { }                                         // _08 (weak)
	virtual Vector3f getLookAtPosition_() { return mLookAtPosition; } // _58 (weak)
	virtual bool isSpecialCamera();                                   // _70
	virtual void updateMatrix();                                      // _74
	virtual bool doUpdate();                                          // _78
	virtual void startVibration(int) { }                              // _7C (weak)
	virtual void init();                                              // _80

	void setCameraParms(CameraParms*);
	void setVibrationParms(VibrationParms*);
	void setCameraAngle(f32);
	void getCameraData(CameraData&);
	void setCameraData(CameraData&);
	void changePlayerMode(bool);
	void noUpdate();
	bool isVibration();
	void startVibration(int, f32);
	void startDemoCamera(int);
	void finishDemoCamera();
	u32 updateCameraMode();
	void startZoomCamera();
	void startGameCamera(int);
	void setTargetParms();
	void setTargetThetaToWhistle();
	void setFollowTime();
	void setSmoothThetaSpeed();
	void changeTargetTheta();
	void changeTargetAtPosition();
	void updateParms(int);
	void updateVibration(int);
	void otherVibFinished(int);
	bool isModCameraFinished();
	void setCollisionCameraTargetPhi(int);
	void getCollisionCameraTargetPhi(f32, f32);

	// _00 		= VTBL
	// _00-_198	= LookAtCamera
	Navi* mTargetObj;                // _198
	int mChangePlayerState;          // _19C (is 1 during a player transition, 0 otherwise)
	int mCameraZoomLevel;            // _1A0 (what's toggled between when you press R)
	u32 mCameraSelAngle;             // _1A4 (what's toggled between when you press Z)
	f32 mCurrTargetDistance;         // _1A8
	f32 mGoalTargetDistance;         // _1AC
	f32 mCameraAngleCurrent;         // _1B0
	f32 mCameraAngleGoal;            // _1B4
	f32 mCurrVerticalAngle;          // _1B8
	f32 mGoalVerticalAngle;          // _1BC
	f32 mGoalFOV;                    // _1C0
	f32 mNearZPlane;                 // _1C4
	f32 mFarZPlane;                  // _1C8
	f32 mYOffset;                    // _1CC
	f32 mDetachedWeight;             // _1D0
	f32 mDetachedParm;               // _1D4 (used to offset camera position to put pikmin squad in frame)
	f32 mSmoothMoveSpeed;            // _1D8 (used in holding L mode)
	f32 mFollowTime;                 // _1DC
	f32 mHoldRTimer;                 // _1E0
	Vector3f mGoalPosition;          // _1E4
	bool mVibrateEnabled[3];         // _1F0
	f32 mVibrateSpeedParm[3];        // _1F4, vibration azimuth short speed?
	f32 mVibrateRollAngle[3];        // _200
	f32 mVibrateAngle[3];            // _20C
	f32 mVibrateTimer[3];            // _218
	f32 mVibrateTimeParm[3];         // _224, vibration azimuth short time?
	f32 mVibrateScaleParm[3];        // _230
	f32 mVibrateAzimuthParm[3];      // _23C, vibration azimuth short vib?
	u8 mCanInput;                    // _248
	u8 _249;                         // _249
	CameraParms* mCameraParms;       // _24C
	VibrationParms* mVibrationParms; // _250
};

/**
 * @size{0x3C}
 */
struct CameraMgr : public CNode {
	CameraMgr();

	virtual ~CameraMgr() {}; // _08
	// virtual void _10() = 0;       // _10

	void loadResource();
	void setViewport(Viewport*, int);
	void init(int);
	void setCameraAngle(f32, int);
	void update();
	void startVibration(int, Vector3f&, int);
	void startVibration(int, int);
	void controllerLock(int);
	void controllerUnLock(int);
	void startDemoCamera(int, int);
	void finishDemoCamera(int);
	void changePlayerMode(int, IDelegate1<CameraArg*>*);
	bool isChangePlayer();
	void setZukanCamera(LookAtCamera*);
	bool isCameraUpdateOn();
	bool isStartAndEnd(int*, int);
	bool isVibrationStart(int, int);
	void readCameraParms(char*);
	void readParameter(Stream&);

	// _00 		= VTBL
	// _00-_18	= CNode
	int mCurrPlayerMode;               // _18 (0 = olimar, 1 = louie, 2 = multiplayer)
	int* mCameraVibrateState;          // _1C
	Viewport** mViewportList;          // _20
	PlayCamera** mCameraObjList;       // _24
	CameraParms* mCameraParms[2];      // _28
	VibrationParms* mVibrationParms;   // _30
	IDelegate1<CameraArg*>* mDelegate; // _34
	LookAtCamera* mZukanCamera;        // _38
};

extern CameraMgr* cameraMgr;
} // namespace Game

#endif
