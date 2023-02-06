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
#include "JSystem/JKernel/JKRArchive.h"

struct Controller;

namespace ebi {
namespace title {
struct TTitleParameters : public Parameters {
	// _00-_0C = Parameters
	Parm<f32> mTp04; // _0C
	Parm<f32> mTp05; // _34
	Parm<f32> mTp06; // _5C
	Parm<f32> mTp07; // _84
	Parm<f32> mTp08; // _AC
	Parm<f32> mTp09; // _D4
	Parm<f32> mTp10; // _FC
	Parm<f32> mTp11; // _124
	Parm<f32> mTp13; // _14C
	Parm<f32> mTp50; // _174
	Parm<f32> mTp15; // _19C
	Parm<f32> mTp16; // _1C4
	Parm<f32> mTp17; // _1EC
	Parm<f32> mTp19; // _214
	Parm<f32> mTp20; // _23C
	Parm<f32> mTp21; // _264
	Parm<f32> mTp22; // _28C
};

struct TTitleCameraMgr : public LookAtCamera {
	struct Parms : public Parameters {
		inline Parms();

		Parm<f32> mCam1; // _1A4
		Parm<f32> mCam2; // _1CC
	};

	virtual ~TTitleCameraMgr(); // _08 (weak)
	virtual void read(Stream&); // _38 (weak)

	void update();

	// _00      = VTBL
	// _00-_198 = LookAtCamera
	Parms mParms; // _198
};

/**
 * @size{0x140}
 */
struct TTitleFogMgr : public FogMgr {
	struct Parms : public Parameters {
		// fabricated
		// offsets relative to TTitleFogMgr
		Parm<bool> mIsFogActive; // _34
		Parm<f32> mStartDist;    // _50
		Parm<f32> mEndDist;      // _78
		Parm<int> mColR;         // _A0
		Parm<int> mColG;         // _C8
		Parm<int> mColB;         // _F0
		Parm<int> mColA;         // _118
	};

	virtual ~TTitleFogMgr() { } // _08 (weak)

	void setGX(Camera& camera);
	void loadSettingFile(JKRArchive* archive, char* file);

	// _00        = VTBL
	// _00-_28    = FogMgr
	Parms mParms; // _28
};

struct TTitleLightSetting {
	struct TAmbParms : public Parameters {
		inline TAmbParms();

		Parm<int> mRed;   // _0C
		Parm<int> mGreen; // _34
		Parm<int> mBlue;  // _5C
		Parm<int> mAlpha; // _84
	};

	struct TMainParms : public Parameters {
		TMainParms();

		Parm<int> mTl04; // _0C, _BC
		Parm<int> mTl05; // _34, _E4
		Parm<int> mTl06; // _5C, _10C
		Parm<int> mTl07; // _84, _134
		Parm<f32> mTl50; // _AC, _15C
		Parm<f32> mTl51; // _D4, _184
		Parm<f32> mTl52; // _FC, _1AC
		Parm<f32> mTl53; // _124, _1D4
		Parm<f32> mTl54; // _14C, _1FC
		Parm<f32> mTl55; // _174, _224
		Parm<f32> mTl56; // _19C, _24C
		Parm<f32> mTl57; // _1C4, _274
		Parm<f32> mTl58; // _1EC, _29C
	};

	struct TSpecParms : public Parameters {
		TSpecParms();

		Parm<int> mSp04; // _0C, _2D4
		Parm<int> mSp05; // _34, _2FC
		Parm<int> mSp06; // _5C, _324
		Parm<int> mSp07; // _84, _34C
		Parm<f32> mSp53; // _AC, _374
		Parm<f32> mSp54; // _D4, _39C
		Parm<f32> mSp55; // _FC, _3C4
		Parm<f32> mSp56; // _124, _3EC
	};

	TAmbParms mAmbParms;   // _00
	TMainParms mMainParms; // _B0
	TSpecParms mSpecParms; // _2C8
};

struct TTitleLightMgr : public LightMgr {
	TTitleLightMgr();

	virtual ~TTitleLightMgr() { } // _08 (weak)
	virtual void update();        // _10

	void loadSettingFile(JKRArchive*, char*);
	void setParam_();
	void setCameraMtx(Mtx);

	inline void setRefValues(f32 dist, f32 brightness, f32 angle)
	{
		mLightObjMain.mRefDistance   = dist;
		mLightObjMain.mRefBrightness = brightness;
		mLightObjMain.mCutoffAngle   = angle;
	}

	// _00     = VTBL
	// _00-_50 = LightMgr
	LightObj mLightObjMain;      // _50
	LightObj mLightObjSpec;      // _A8
	TTitleLightSetting mSetting; // _100
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
	bool isInViewField(TObjBase*);
	void isOutViewField(Vector2f&, f32);
	bool isOutViewField(TObjBase*);
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
	u8 _18[0x18];                 // _18, unknown
	TMapBase mMapBase;            // _30
	TBGEnemyBase mBgEnemyBase;    // _A4
	TBlackPlane mBlackPlane;      // _F0
	Pikmin::TMgr mPikminMgr;      // _154
	Kogane::TMgr mKoganeMgr;      // _AE4
	Chappy::TMgr mChappyMgr;      // _CF4
	u8 _F54[0x4];                 // _F54, unknown
	int _F58;                     // _F58
	int mMode;                    // _F5C
	u8 _F60[0x8];                 // _F60, unknown
	u32 _F68;                     // _F68
	u8 _F6C[0x4];                 // _F6C, unknown
	u8 _F70;                      // _F70
	u8 _F71;                      // _F71
	int _F74;                     // _F74
	u8 _F78[0x4];                 // _F78, unknown
	int _F7C;                     // _F7C
	u8 _F80[0x4];                 // _F80
	Vector2f _F84[500];           // _F84
	TCoordMgr mCoordMgr[2];       // _1F24, 0 = main, 1 = sub
	Controller* mController;      // _401C
	Viewport mViewport;           // _4020
	TTitleCameraMgr mCameraMgr;   // _4078
	TTitleLightMgr mLightMgr;     // _4270
	TTitleFogMgr mFogMgr;         // _4788
	J3DDrawBuffer* _48CC;         // _48CC
	J3DDrawBuffer* _48D0;         // _48D0
	TTitleParameters mTitleParms; // _48D4
};

extern TTitleMgr* titleMgr;
} // namespace title
} // namespace ebi

#endif
