#ifndef _EFFECTANIMATOR_H
#define _EFFECTANIMATOR_H

#include "CNode.h"

namespace efx {
struct TKechappyTest;
}

namespace EffectAnimator {
struct KeyData {
	f32 mFrame; // _00, probably
	f32 mScale; // _04, probably
};

struct Obj : public CNode {
	Obj();

	virtual ~Obj() { }                                // _08 (weak)
	virtual void update(efx::TKechappyTest*, f32) { } // _10 (weak)

	void setup(KeyData*);
	f32 calcValue(f32);

	// _00     = VTBL
	// _00-_18 = CNode
	KeyData* mData; // _18, array of length mCount
	int mCount;     // _1C
};

struct ObjMgrData {
	KeyData* mVibrationData; // _00, array of KeyData
	KeyData* mBristleData;   // _04, array of KeyData
	KeyData* mLengthData;    // _08, array of KeyData
};

struct ObjMgr {
	ObjMgr();

	void setup(ObjMgrData*);
	void update(efx::TKechappyTest*, f32);

	CNode mNodes; // _00
};

struct Mgr {
	Mgr();

	void setup();
	void update(efx::TKechappyTest*, int, f32);

	ObjMgr** mMgrs; // _00, array of 9 Mgrs
};
} // namespace EffectAnimator

#endif
