#ifndef _EFFECTANIMATOR_H
#define _EFFECTANIMATOR_H

#include "CNode.h"

namespace efx {
struct TKechappyTest;
}

namespace EffectAnimator {
struct KeyData {
	f32 m_frame; // _00, probably
	f32 m_scale; // _04, probably
};

struct Obj : public CNode {
	Obj();

	virtual ~Obj() { }                                // _08 (weak)
	virtual void update(efx::TKechappyTest*, f32) { } // _10 (weak)

	void setup(KeyData*);
	f32 calcValue(f32);

	// _00     = VTBL
	// _00-_18 = CNode
	KeyData* m_data; // _18, array of length m_count
	int m_count;     // _1C
};

struct ObjMgrData {
	KeyData* m_vibrationData; // _00, array of KeyData
	KeyData* m_bristleData;   // _04, array of KeyData
	KeyData* m_lengthData;    // _08, array of KeyData
};

struct ObjMgr {
	ObjMgr();

	void setup(ObjMgrData*);
	void update(efx::TKechappyTest*, f32);

	CNode m_nodes; // _00
};

struct Mgr {
	Mgr();

	void setup();
	void update(efx::TKechappyTest*, int, f32);

	ObjMgr** m_mgrs; // _00, array of 9 Mgrs
};
} // namespace EffectAnimator

#endif
