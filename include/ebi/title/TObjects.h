#ifndef _EBI_TITLE_TOBJECTS_H
#define _EBI_TITLE_TOBJECTS_H

#include "types.h"
#include "Vector2.h"
#include "Parameters.h"

struct J3DModel;
struct JKRArchive;

namespace ebi {
namespace title {
struct TObjBase {
	inline TObjBase()
	{
		mPos      = Vector2f(0.0f);
		mAngle    = Vector2f(0.0f, -1.0f);
		mParms[0] = 0.0f;
		mParms[1] = 1.0f;
		mParms[2] = 0.0f;
		mParms[3] = 0.0f;
		mParms[4] = 0.0f;
		mModel    = nullptr;
	}

	virtual u32 getCreatureType(); // _08 (weak)
	virtual bool isCalc();         // _0C (weak)

	void calcModelBaseMtx_();
	void pushOut(TObjBase*);

	// _00 = VTBL
	Vector2f mPos;    // _04
	Vector2f mAngle;  // _0C
	f32 mParms[5];    // _14
	J3DModel* mModel; // _28
};

struct TBGEnemyBase : public TObjBase {
	void setArchive(JKRArchive*);
	void start();
	void update();

	// _00 = VTBL
};

struct TBlackPlane : public TObjBase {
	void setArchive(JKRArchive*);
	void start();
	void updateBeforeCamera();
	void updateAfterCamera();
	void setLogo();
	void getCameraPos();

	// _00 = VTBL
	u8 placeholder[158]; // _04 // placeholder for size so titlechappy can match
};

struct TMapBase : public TObjBase {
	void setArchive(JKRArchive*);
	void startWind(f32);
	void update();

	// _00 = VTBL
};

struct TParamBase : public Parameters {
	inline TParamBase()
	    : Parameters(nullptr, "Parms")
	{
	}

	void loadSettingFile(JKRArchive*, char*);

	// _00-_0C = Parameters
};
} // namespace title
} // namespace ebi

#endif
