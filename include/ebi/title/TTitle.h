#ifndef _EBI_TITLE_TTITLE_H
#define _EBI_TITLE_TTITLE_H

#include "FogMgr.h"
#include "Light.h"
#include "Camera.h"
#include "Parameters.h"
#include "BaseParm.h"
#include "ebi/title/TObjects.h"
#include "JSystem/JKR/JKRArchive.h"

struct Controller;

namespace ebi {
namespace title {
struct TTitleCameraMgr : public LookAtCamera {
	struct Parms : public Parameters {
		inline Parms();

		Parm<f32> m_cam1; // _1A4
		Parm<f32> m_cam2; // _1CC
	};

	virtual ~TTitleCameraMgr(); // _08 (weak)
	virtual void read(Stream&); // _38 (weak)

	void update();

	// _00      = VTBL
	// _00-_198 = LookAtCamera
	Parms m_parms; // _198
};

/**
 * @size{0x140}
 */
struct TTitleFogMgr : public FogMgr {
	struct Parms : public Parameters {
		// fabricated
		// offsets relative to TTitleFogMgr
		Parm<bool> m_isFogActive; // _34
		Parm<float> m_startDist;  // _50
		Parm<float> m_endDist;    // _78
		Parm<int> m_colR;         // _A0
		Parm<int> m_colG;         // _C8
		Parm<int> m_colB;         // _F0
		Parm<int> m_colA;         // _118
	};

	virtual ~TTitleFogMgr() { } // _08 (weak)

	void setGX(Camera& camera);
	void loadSettingFile(JKRArchive* archive, char* file);

	// _00        = VTBL
	// _00-_28    = FogMgr
	Parms m_parms; // _28
};

struct TTitleLightSetting {
	struct TAmbParms : public Parameters {
		inline TAmbParms();

		Parm<int> m_red;   // _0C
		Parm<int> m_green; // _34
		Parm<int> m_blue;  // _5C
		Parm<int> m_alpha; // _84
	};

	struct TMainParms : public Parameters {
		TMainParms();

		Parm<int> m_tl04; // _0C, _BC
		Parm<int> m_tl05; // _34, _E4
		Parm<int> m_tl06; // _5C, _10C
		Parm<int> m_tl07; // _84, _134
		Parm<f32> m_tl50; // _AC, _15C
		Parm<f32> m_tl51; // _D4, _184
		Parm<f32> m_tl52; // _FC, _1AC
		Parm<f32> m_tl53; // _124, _1D4
		Parm<f32> m_tl54; // _14C, _1FC
		Parm<f32> m_tl55; // _174, _224
		Parm<f32> m_tl56; // _19C, _24C
		Parm<f32> m_tl57; // _1C4, _274
		Parm<f32> m_tl58; // _1EC, _29C
	};

	struct TSpecParms : public Parameters {
		TSpecParms();

		Parm<int> m_sp04; // _0C, _2D4
		Parm<int> m_sp05; // _34, _2FC
		Parm<int> m_sp06; // _5C, _324
		Parm<int> m_sp07; // _84, _34C
		Parm<f32> m_sp53; // _AC, _374
		Parm<f32> m_sp54; // _D4, _39C
		Parm<f32> m_sp55; // _FC, _3C4
		Parm<f32> m_sp56; // _124, _3EC
	};

	TAmbParms m_ambParms;   // _00
	TMainParms m_mainParms; // _B0
	TSpecParms m_specParms; // _2C8
};

struct TTitleLightMgr : public LightMgr {
	TTitleLightMgr();

	virtual ~TTitleLightMgr(); // _08 (weak)
	virtual void update();     // _10

	void loadSettingFile(JKRArchive*, char*);
	void setParam_();
	void setCameraMtx(Mtx);

	// _00     = VTBL
	// _00-_50 = LightMgr
	LightObj _50;                 // _50
	LightObj _A8;                 // _A8
	TTitleLightSetting m_setting; // _100
};

struct TTitleMgr : public CNode {
	enum enumState { UNKNOWN };

	TTitleMgr();

	virtual ~TTitleMgr(); // _08 (weak)

	void globalInstance();
	void Instance();
	void deleteInstance();
	void init();
	void setLogo();
	void loadResource();
	void initAfterLoadRes();
	void setController(Controller*);
	void inField(TObjBase*);
	void inViewField(TObjBase*);
	void isInViewField(TObjBase*);
	void isOutViewField(Vector2f&, f32);
	void isOutViewField(TObjBase*);
	void getPosOutOfViewField();
	void start();
	void breakup();
	void startKogane();
	void startChappy();
	void boidToAssemble(long);
	void isControllerOK();
	void isPressStart();
	void startState(enumState);
	void update();
	void updateState();
	void checkEncounter_();
	void draw();
	void readTitleParam(JKRArchive*, char*);

	// _00     = VTBL
	// _00-_18 = CNode
};
} // namespace title
} // namespace ebi

#endif
