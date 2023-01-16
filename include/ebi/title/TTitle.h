#ifndef _EBI_TITLE_TTITLE_H
#define _EBI_TITLE_TTITLE_H

#include "FogMgr.h"
#include "Light.h"
#include "Camera.h"
#include "Parameters.h"
#include "BaseParm.h"
#include "ebi/title/TObjects.h"
#include "ebi/title/Entities/TPikmin.h"
#include "ebi/title/Entities/TChappy.h"
#include "ebi/title/Entities/TKogane.h"
#include "ebi/title/TCoordMgr.h"
#include "Viewport.h"
#include "JSystem/JKR/JKRArchive.h"

struct Controller;

namespace ebi {
namespace title {
struct TTitleParameters : public Parameters {
	// _00-_0C = Parameters
	Parm<f32> m_tp04; // _0C
	Parm<f32> m_tp05; // _34
	Parm<f32> m_tp06; // _5C
	Parm<f32> m_tp07; // _84
	Parm<f32> m_tp08; // _AC
	Parm<f32> m_tp09; // _D4
	Parm<f32> m_tp10; // _FC
	Parm<f32> m_tp11; // _124
	Parm<f32> m_tp13; // _14C
	Parm<f32> m_tp50; // _174
	Parm<f32> m_tp15; // _19C
	Parm<f32> m_tp16; // _1C4
	Parm<f32> m_tp17; // _1EC
	Parm<f32> m_tp19; // _214
	Parm<f32> m_tp20; // _23C
	Parm<f32> m_tp21; // _264
	Parm<f32> m_tp22; // _28C
};

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
	LightObj m_lightObjMain;      // _50
	LightObj m_lightObjSpec;      // _A8
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
	Vector2f getPosOutOfViewField();
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
	u8 _18[0x18];                  // _18, unknown
	TMapBase m_mapBase;            // _30
	TBGEnemyBase m_bgEnemyBase;    // _A4
	TBlackPlane m_blackPlane;      // _F0
	Pikmin::TMgr m_pikminMgr;      // _154
	Kogane::TMgr m_koganeMgr;      // _AE4
	Chappy::TMgr m_chappyMgr;      // _CF4
	u8 _F54[0x4];                  // _F54, unknown
	int _F58;                      // _F58
	int m_mode;                    // _F5C
	u8 _F60[0x8];                  // _F60, unknown
	u32 _F68;                      // _F68
	u8 _F6C[0x4];                  // _F6C, unknown
	u8 _F70;                       // _F70
	u8 _F71;                       // _F71
	int _F74;                      // _F74
	u8 _F78[0x4];                  // _F78, unknown
	int _F7C;                      // _F7C
	u8 _F80[0x4];                  // _F80
	Vector2f _F84[500];            // _F84
	TCoordMgr m_coordMgr[2];       // _1F24, 0 = main, 1 = sub
	Controller* m_controller;      // _401C
	Viewport m_viewport;           // _4020
	TTitleCameraMgr m_cameraMgr;   // _4078
	TTitleLightMgr m_lightMgr;     // _4270
	TTitleFogMgr m_fogMgr;         // _4788
	J3DDrawBuffer* _48CC;          // _48CC
	J3DDrawBuffer* _48D0;          // _48D0
	TTitleParameters m_titleParms; // _48D4
};

extern TTitleMgr* titleMgr;
} // namespace title
} // namespace ebi

#endif
