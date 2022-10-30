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
	f32 _00;                   // _00, normalCam?
	f32 _04;                   // _04, camAngle1?
	f32 _08;                   // _08, zoom?
	f32 _0C;                   // _0C, FOV?
	f32 _10;                   // _10, near plane?
	f32 _14;                   // _14, far plane?
	Vector3f m_lookAtPosition; // _18
	int _24;                   // _24, zoom level?
	int _28;                   // _28, angle Z?
};

/**
 * @size{0x998}
 */
struct CameraParms : public Parameters {
	CameraParms();

	Parm<f32> m_cnld; // TODO: offsets?
	Parm<f32> m_cnla;
	Parm<f32> m_cnlf;
	Parm<f32> m_cnlo;
	Parm<f32> m_cnlw;
	Parm<f32> m_nldt;
	Parm<f32> m_nlnc;
	Parm<f32> m_nlfc;
	Parm<f32> m_cmld;
	Parm<f32> m_cmla;
	Parm<f32> m_cmlf;
	Parm<f32> m_cmlo;
	Parm<f32> m_cmlw;
	Parm<f32> m_mldt;
	Parm<f32> m_mlnc;
	Parm<f32> m_mlfc;
	Parm<f32> m_cfld;
	Parm<f32> m_cfla;
	Parm<f32> m_cflf;
	Parm<f32> m_cflo;
	Parm<f32> m_cflw;
	Parm<f32> m_fldt;
	Parm<f32> m_flnc;
	Parm<f32> m_flfc;
	Parm<f32> m_cnhd;
	Parm<f32> m_cnha;
	Parm<f32> m_cnhf;
	Parm<f32> m_cnho;
	Parm<f32> m_cnhw;
	Parm<f32> m_nhdt;
	Parm<f32> m_nhnc;
	Parm<f32> m_nhfc;
	Parm<f32> m_cmhd;
	Parm<f32> m_cmha;
	Parm<f32> m_cmhf;
	Parm<f32> m_cmho;
	Parm<f32> m_cmhw;
	Parm<f32> m_mhdt;
	Parm<f32> m_mhnc;
	Parm<f32> m_mhfc;
	Parm<f32> m_cfhd;
	Parm<f32> m_cfha;
	Parm<f32> m_cfhf;
	Parm<f32> m_cfho;
	Parm<f32> m_cfhw;
	Parm<f32> m_fhdt;
	Parm<f32> m_fhnc;
	Parm<f32> m_fhfc;
	Parm<f32> m_zmdt;
	Parm<f32> m_zman;
	Parm<f32> m_zmfv;
	Parm<f32> m_clcr;
	Parm<f32> m_clms;
	Parm<f32> m_clmh;
	Parm<f32> m_clnh;
	Parm<f32> m_cpmd;
	Parm<f32> m_cmmt;
	Parm<f32> m_cmft;
	Parm<f32> m_cmta;
	Parm<f32> m_cmtm;
	Parm<f32> m_cmtb;
	u32 _994;
};

/**
 * @size{0x308}
 */
struct VibrationParms : public Parameters {
	VibrationParms();

	Parm<f32> m_elevationLightVib;
	Parm<f32> m_elevationMiddleVib;
	Parm<f32> m_elevationHardVib;
	Parm<f32> m_elevationSlowSpeed;
	Parm<f32> m_elevationMiddleSpeed;
	Parm<f32> m_elevationFastSpeed;
	Parm<f32> m_elevationShortTime;
	Parm<f32> m_elevationMiddleTime;
	Parm<f32> m_elevationLongTime;
	Parm<f32> m_elevationHardVib2;
	Parm<f32> m_elevationHardSpeed;
	Parm<f32> m_elevationHardTime;
	Parm<f32> m_zoomShortVib;
	Parm<f32> m_zoomShortSpeed;
	Parm<f32> m_zoomShortTime;
	Parm<f32> m_azimuthShortVib;
	Parm<f32> m_azimuthShortSpeed;
	Parm<f32> m_azimuthShortTime;
	Parm<f32> m_vibMaxDistance;
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
	Navi* m_navi;                     // _198
	int _19C;                         // _19C
	int _1A0;                         // _1A0
	u32 _1A4;                         // _1A4
	f32 _1A8;                         // _1A8
	f32 _1AC;                         // _1AC
	f32 _1B0;                         // _1B0
	f32 _1B4;                         // _1B4
	f32 _1B8;                         // _1B8
	f32 _1BC;                         // _1BC
	f32 _1C0;                         // _1C0
	f32 _1C4;                         // _1C4
	f32 _1C8;                         // _1C8
	f32 _1CC;                         // _1CC
	f32 _1D0;                         // _1D0
	f32 _1D4;                         // _1D4
	f32 _1D8;                         // _1D8
	f32 _1DC;                         // _1DC, follow time?
	f32 _1E0;                         // _1E0
	Vector3f _1E4;                    // _1E4
	u8 _1F0;                          // _1F0
	u8 _1F1;                          // _1F1
	u8 _1F2;                          // _1F2
	f32 _1F4;                         // _1F4, vibration azimuth short speed?
	f32 _1F8;                         // _1F8, vibration elevation speed?
	f32 _1FC;                         // _1FC, vibration zoom short speed?
	f32 _200;                         // _200
	f32 _204;                         // _204
	f32 _208;                         // _208
	f32 _20C;                         // _20C
	f32 _210;                         // _210
	f32 _214;                         // _214
	f32 _218;                         // _218
	f32 _21C;                         // _21C
	f32 _220;                         // _220
	f32 _224;                         // _224, vibration azimuth short time?
	f32 _228;                         // _228, vibration elevation time?
	f32 _22C;                         // _22C, vibration zoom short time?
	f32 _230;                         // _230
	f32 _234;                         // _234
	f32 _238;                         // _238
	f32 _23C;                         // _23C, vibration azimuth short vib?
	f32 _240;                         // _240, vibration elevation vib?
	f32 _244;                         // _244, vibration zoom short vib?
	u8 _248;                          // _248
	u8 _249;                          // _249
	CameraParms* m_cameraParms;       // _24C
	VibrationParms* m_vibrationParms; // _250
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
	int _18;                          // _18
	void** _1C;                       // _1C
	Viewport** _20;                   // _20
	PlayCamera** _24;                 // _24
	CameraParms* m_cameraParms[2];    // _28
	VibrationParms* m_vibrationParms; // _30
	IDelegate1<CameraArg*>* _34;      // _34
	LookAtCamera* m_zukanCamera;      // _38
};

extern CameraMgr* cameraMgr;
} // namespace Game

#endif
