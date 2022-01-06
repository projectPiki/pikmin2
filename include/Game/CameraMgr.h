#ifndef _GAME_CAMERAMGR_H
#define _GAME_CAMERAMGR_H

#include "CNode.h"
#include "BaseParm.h"
#include "Parameters.h"
#include "IDelegate.h"
#include "Vector3.h"

struct LookAtCamera;
struct Viewport;

namespace Game {
struct CameraArg;
struct CameraParms;
struct PlayCamera;
struct VibrationParms;

/**
 * @size{0x998}
 */
struct CameraParms : public Parameters {
	CameraParms();

	Parm<float> m_cnld;
	Parm<float> m_cnla;
	Parm<float> m_cnlf;
	Parm<float> m_cnlo;
	Parm<float> m_cnlw;
	Parm<float> m_nldt;
	Parm<float> m_nlnc;
	Parm<float> m_nlfc;
	Parm<float> m_cmld;
	Parm<float> m_cmla;
	Parm<float> m_cmlf;
	Parm<float> m_cmlo;
	Parm<float> m_cmlw;
	Parm<float> m_mldt;
	Parm<float> m_mlnc;
	Parm<float> m_mlfc;
	Parm<float> m_cfld;
	Parm<float> m_cfla;
	Parm<float> m_cflf;
	Parm<float> m_cflo;
	Parm<float> m_cflw;
	Parm<float> m_fldt;
	Parm<float> m_flnc;
	Parm<float> m_flfc;
	Parm<float> m_cnhd;
	Parm<float> m_cnha;
	Parm<float> m_cnhf;
	Parm<float> m_cnho;
	Parm<float> m_cnhw;
	Parm<float> m_nhdt;
	Parm<float> m_nhnc;
	Parm<float> m_nhfc;
	Parm<float> m_cmhd;
	Parm<float> m_cmha;
	Parm<float> m_cmhf;
	Parm<float> m_cmho;
	Parm<float> m_cmhw;
	Parm<float> m_mhdt;
	Parm<float> m_mhnc;
	Parm<float> m_mhfc;
	Parm<float> m_cfhd;
	Parm<float> m_cfha;
	Parm<float> m_cfhf;
	Parm<float> m_cfho;
	Parm<float> m_cfhw;
	Parm<float> m_fhdt;
	Parm<float> m_fhnc;
	Parm<float> m_fhfc;
	Parm<float> m_zmdt;
	Parm<float> m_zman;
	Parm<float> m_zmfv;
	Parm<float> m_clcr;
	Parm<float> m_clms;
	Parm<float> m_clmh;
	Parm<float> m_clnh;
	Parm<float> m_cpmd;
	Parm<float> m_cmmt;
	Parm<float> m_cmft;
	Parm<float> m_cmta;
	Parm<float> m_cmtm;
	Parm<float> m_cmtb;
	u32 _994;
};

/**
 * @size{0x308}
 */
struct VibrationParms : public Parameters {
	VibrationParms();

	Parm<float> m_elevationLightVib;
	Parm<float> m_elevationMiddleVib;
	Parm<float> m_elevationHardVib;
	Parm<float> m_elevationSlowSpeed;
	Parm<float> m_elevationMiddleSpeed;
	Parm<float> m_elevationFastSpeed;
	Parm<float> m_elevationShortTime;
	Parm<float> m_elevationMiddleTime;
	Parm<float> m_elevationLongTime;
	Parm<float> m_elevationHardVib2;
	Parm<float> m_elevationHardSpeed;
	Parm<float> m_elevationHardTime;
	Parm<float> m_zoomShortVib;
	Parm<float> m_zoomShortSpeed;
	Parm<float> m_zoomShortTime;
	Parm<float> m_azimuthShortVib;
	Parm<float> m_azimuthShortSpeed;
	Parm<float> m_azimuthShortTime;
	Parm<float> m_vibMaxDistance;
	u32 _304;
};

/**
 * @size{0x3C}
 */
struct CameraMgr : public CNode {
	CameraMgr();

	virtual ~CameraMgr() {}; // _00
	// virtual void _08() = 0;       // _08

	void loadResource();
	void setViewport(Viewport*, int);
	void init(int);
	void setCameraAngle(float, int);
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
