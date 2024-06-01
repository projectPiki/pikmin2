#ifndef _EBI_TITLE_TOBJECTS_H
#define _EBI_TITLE_TOBJECTS_H

#include "Vector2.h"
#include "Vector3.h"
#include "Parameters.h"
#include "JSystem/J3D/J3DFrameCtrl.h"
#include "System.h"

struct J3DModel;
struct J3DModelData;
struct JKRArchive;
struct J3DAnmTransform;
struct J3DAnmTevRegKey;
struct J3DMtxCalcAnmBase;

namespace ebi {
namespace title {
enum CreatureType {
	TITLECREATURE_NULL   = -1,
	TITLECREATURE_Pikmin = 0,
	TITLECREATURE_Kogane = 5,
	TITLECREATURE_Chappy = 6,
};

struct TObjBase {
	inline TObjBase()
	{
		mPosition = Vector2f(0.0f);
		mAngle    = Vector2f(0.0f, -1.0f);
		mParms[0] = 0.0f;
		mParms[1] = 1.0f;
		mParms[2] = 0.0f;
		mParms[3] = 0.0f;
		mParms[4] = 0.0f;
		mModel    = nullptr;
	}

	virtual u32 getCreatureType() { return TITLECREATURE_NULL; } // _08 (weak)
	virtual bool isCalc() { return true; }                       // _0C (weak)

	void calcModelBaseMtx_();
	void pushOut(TObjBase*);

	void pushOut_(Vector2f&);

	inline Vector2f getPosition() { return mPosition; }

	// _00 = VTBL
	Vector2f mPosition; // _04
	Vector2f mAngle;    // _0C
	f32 mParms[5];      // _14, 0=?, 1=scale, 2=collRadius, 3=?, 4=?
	J3DModel* mModel;   // _28
};

struct TBGEnemyBase : public TObjBase {
	TBGEnemyBase()
	{
		mMainModelData = nullptr;
		mAnim          = nullptr;
		mAnimMtxCalc   = nullptr;
	}

	void setArchive(JKRArchive*);
	void start();
	void update();

	// _00 = VTBL
	J3DModelData* mMainModelData;
	J3DFrameCtrl mFrameCtrl;
	J3DAnmTransform* mAnim;
	J3DMtxCalcAnmBase* mAnimMtxCalc;
};

struct TBlackPlane : public TObjBase {
	TBlackPlane()
	{
		mMainModelData = nullptr;
		mAnim          = nullptr;
		mAnimMtxCalc   = nullptr;
		mAnimColor     = nullptr;
	}

	void setArchive(JKRArchive*);
	void start();
	void updateBeforeCamera();
	void updateAfterCamera();
	void setLogo();
	Vector3f getCameraPos();

	// _00 = VTBL
	J3DModelData* mMainModelData;    // _2C
	J3DFrameCtrl mFrameCtrl;         // _30
	J3DAnmTransform* mAnim;          // _44
	J3DMtxCalcAnmBase* mAnimMtxCalc; // _48
	J3DFrameCtrl mFrameCtrlColor;    // _4C
	J3DAnmTevRegKey* mAnimColor;     // _60
};

struct TMapBase : public TObjBase {

	TMapBase()
	{
		mWindTimer       = 0;
		mWindTimerMax    = 0;
		mState           = 0;
		mMainModelData   = nullptr;
		mAnimWait        = nullptr;
		mAnimMtxCalcWait = nullptr;
		mAnimWind        = nullptr;
		mAnimMtxCalcWind = nullptr;
		u32 count        = 0.0f / sys->mDeltaTime;
		mWindTimer       = count;
		mWindTimerMax    = count;
	}

	f32 determineAnimRate(f32 calc)
	{
		if (calc <= 0.2f) {
			return calc / 0.2f;
		}

		if (calc <= 0.8f) {
			return 1.0f;
		}

		f32 factor = -5.0000005f;
		return factor * calc + -(factor);
	}

	void setArchive(JKRArchive*);
	void startWind(f32);
	void update();

	// _00 = VTBL
	int mState;                          // _2C
	J3DModelData* mMainModelData;        // _30
	J3DFrameCtrl mFrameCtrlWait;         // _34
	J3DAnmTransform* mAnimWait;          // _48
	J3DMtxCalcAnmBase* mAnimMtxCalcWait; // _4C
	J3DFrameCtrl mFrameCtrlWind;         // _50
	J3DAnmTransform* mAnimWind;          // _64
	J3DMtxCalcAnmBase* mAnimMtxCalcWind; // _68
	u32 mWindTimer;                      // _6C
	u32 mWindTimerMax;                   // _70
};

struct TParamBase : public Parameters {
	inline TParamBase()
	    : Parameters(nullptr, "Parms")
	{
	}

	bool loadSettingFile(JKRArchive*, char*);

	// _00-_0C = Parameters
};
} // namespace title
} // namespace ebi

#endif
