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
		m_pos      = Vector2f(0.0f);
		m_angle    = Vector2f(0.0f, -1.0f);
		m_parms[0] = 0.0f;
		m_parms[1] = 1.0f;
		m_parms[2] = 0.0f;
		m_parms[3] = 0.0f;
		m_parms[4] = 0.0f;
		m_model    = nullptr;
	}

	virtual u32 getCreatureType(); // _08 (weak)
	virtual bool isCalc();         // _0C (weak)

	void calcModelBaseMtx_();
	void pushOut(TObjBase*);

	// _00 = VTBL
	Vector2f m_pos;    // _04
	Vector2f m_angle;  // _0C
	f32 m_parms[5];    // _14
	J3DModel* m_model; // _28
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
