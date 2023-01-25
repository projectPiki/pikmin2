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

struct CameraData {
	f32 _00;                  // _00, normalCam?
	f32 _04;                  // _04, camAngle1?
	f32 _08;                  // _08, zoom?
	f32 _0C;                  // _0C, FOV?
	f32 _10;                  // _10, near plane?
	f32 _14;                  // _14, far plane?
	Vector3f mLookAtPosition; // _18
	int _24;                  // _24, zoom level?
	int _28;                  // _28, angle Z?
};

/**
 * @size{0x998}
 */
struct CameraParms : public Parameters {
	CameraParms();

	Parm<f32> mCnld; // TODO: offsets?
	Parm<f32> mCnla;
	Parm<f32> mCnlf;
	Parm<f32> mCnlo;
	Parm<f32> mCnlw;
	Parm<f32> mNldt;
	Parm<f32> mNlnc;
	Parm<f32> mNlfc;
	Parm<f32> mCmld;
	Parm<f32> mCmla;
	Parm<f32> mCmlf;
	Parm<f32> mCmlo;
	Parm<f32> mCmlw;
	Parm<f32> mMldt;
	Parm<f32> mMlnc;
	Parm<f32> mMlfc;
	Parm<f32> mCfld;
	Parm<f32> mCfla;
	Parm<f32> mCflf;
	Parm<f32> mCflo;
	Parm<f32> mCflw;
	Parm<f32> mFldt;
	Parm<f32> mFlnc;
	Parm<f32> mFlfc;
	Parm<f32> mCnhd;
	Parm<f32> mCnha;
	Parm<f32> mCnhf;
	Parm<f32> mCnho;
	Parm<f32> mCnhw;
	Parm<f32> mNhdt;
	Parm<f32> mNhnc;
	Parm<f32> mNhfc;
	Parm<f32> mCmhd;
	Parm<f32> mCmha;
	Parm<f32> mCmhf;
	Parm<f32> mCmho;
	Parm<f32> mCmhw;
	Parm<f32> mMhdt;
	Parm<f32> mMhnc;
	Parm<f32> mMhfc;
	Parm<f32> mCfhd;
	Parm<f32> mCfha;
	Parm<f32> mCfhf;
	Parm<f32> mCfho;
	Parm<f32> mCfhw;
	Parm<f32> mFhdt;
	Parm<f32> mFhnc;
	Parm<f32> mFhfc;
	Parm<f32> mZmdt;
	Parm<f32> mZman;
	Parm<f32> mZmfv;
	Parm<f32> mClcr;
	Parm<f32> mClms;
	Parm<f32> mClmh;
	Parm<f32> mClnh;
	Parm<f32> mCpmd;
	Parm<f32> mCmmt;
	Parm<f32> mCmft;
	Parm<f32> mCmta;
	Parm<f32> mCmtm;
	Parm<f32> mCmtb;
	u32 _994;
};

/**
 * @size{0x308}
 */
struct VibrationParms : public Parameters {
	VibrationParms();

	Parm<f32> mElevationLightVib;
	Parm<f32> mElevationMiddleVib;
	Parm<f32> mElevationHardVib;
	Parm<f32> mElevationSlowSpeed;
	Parm<f32> mElevationMiddleSpeed;
	Parm<f32> mElevationFastSpeed;
	Parm<f32> mElevationShortTime;
	Parm<f32> mElevationMiddleTime;
	Parm<f32> mElevationLongTime;
	Parm<f32> mElevationHardVib2;
	Parm<f32> mElevationHardSpeed;
	Parm<f32> mElevationHardTime;
	Parm<f32> mZoomShortVib;
	Parm<f32> mZoomShortSpeed;
	Parm<f32> mZoomShortTime;
	Parm<f32> mAzimuthShortVib;
	Parm<f32> mAzimuthShortSpeed;
	Parm<f32> mAzimuthShortTime;
	Parm<f32> mVibMaxDistance;
	u32 _304;
};

struct PlayCamera : public LookAtCamera {
	PlayCamera(Navi*);

	virtual ~PlayCamera();                 // _08 (weak)
	virtual Vector3f getLookAtPosition_(); // _58 (weak)
	virtual bool isSpecialCamera();        // _70
	virtual void updateMatrix();           // _74
	virtual void doUpdate();               // _78
	virtual void startVibration(int);      // _7C (weak)
	virtual void init();                   // _80

	void setCameraParms(CameraParms*);
	void setVibrationParms(VibrationParms*);
	void setCameraAngle(f32);
	void getCameraData(CameraData&);
	void setCameraData(CameraData&);
	void changePlayerMode(bool);
	void noUpdate();
	void isVibration();
	void startVibration(int, f32);
	void startDemoCamera(int);
	void finishDemoCamera();
	void updateCameraMode();
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
	void isModCameraFinished();
	void setCollisionCameraTargetPhi(int);
	void getCollisionCameraTargetPhi(f32, f32);

	// _00 		= VTBL
	// _00-_198	= LookAtCamera
	Navi* mNavi;                     // _198
	int _19C;                        // _19C
	int _1A0;                        // _1A0
	u32 _1A4;                        // _1A4
	f32 _1A8;                        // _1A8
	f32 _1AC;                        // _1AC
	f32 _1B0;                        // _1B0
	f32 _1B4;                        // _1B4
	f32 _1B8;                        // _1B8
	f32 _1BC;                        // _1BC
	f32 _1C0;                        // _1C0
	f32 _1C4;                        // _1C4
	f32 _1C8;                        // _1C8
	f32 _1CC;                        // _1CC
	f32 _1D0;                        // _1D0
	f32 _1D4;                        // _1D4
	f32 _1D8;                        // _1D8
	f32 _1DC;                        // _1DC, follow time?
	f32 _1E0;                        // _1E0
	Vector3f _1E4;                   // _1E4
	u8 _1F0;                         // _1F0
	u8 _1F1;                         // _1F1
	u8 _1F2;                         // _1F2
	f32 _1F4;                        // _1F4, vibration azimuth short speed?
	f32 _1F8;                        // _1F8, vibration elevation speed?
	f32 _1FC;                        // _1FC, vibration zoom short speed?
	f32 _200;                        // _200
	f32 _204;                        // _204
	f32 _208;                        // _208
	f32 _20C;                        // _20C
	f32 _210;                        // _210
	f32 _214;                        // _214
	f32 _218;                        // _218
	f32 _21C;                        // _21C
	f32 _220;                        // _220
	f32 _224;                        // _224, vibration azimuth short time?
	f32 _228;                        // _228, vibration elevation time?
	f32 _22C;                        // _22C, vibration zoom short time?
	f32 _230;                        // _230
	f32 _234;                        // _234
	f32 _238;                        // _238
	f32 _23C;                        // _23C, vibration azimuth short vib?
	f32 _240;                        // _240, vibration elevation vib?
	f32 _244;                        // _244, vibration zoom short vib?
	u8 _248;                         // _248
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
	void isStartAndEnd(int*, int);
	bool isVibrationStart(int, int);
	void readCameraParms(char*);
	void readParameter(Stream&);

	// _00 		= VTBL
	// _00-_18	= CNode
	int _18;                         // _18
	void** _1C;                      // _1C
	Viewport** _20;                  // _20
	PlayCamera** _24;                // _24
	CameraParms* mCameraParms[2];    // _28
	VibrationParms* mVibrationParms; // _30
	IDelegate1<CameraArg*>* _34;     // _34
	LookAtCamera* mZukanCamera;      // _38
};

extern CameraMgr* cameraMgr;
} // namespace Game

#endif
