#ifndef _EFFECTANIMATOR_H
#define _EFFECTANIMATOR_H

#include "CNode.h"

/*
    __vt__Q214EffectAnimator10BristleObj:
    .4byte 0
    .4byte 0
    .4byte __dt__Q214EffectAnimator10BristleObjFv
    .4byte getChildCount__5CNodeFv
    .4byte update__Q214EffectAnimator10BristleObjFPQ23efx13TKechappyTestf
*/

namespace efx {
struct TKechappyTest;
}

namespace EffectAnimator {
struct Obj : public CNode {
	virtual ~Obj();                                // _08 (weak)
	virtual void update(efx::TKechappyTest*, f32); // _10 (weak)
};

struct BristleObj : public Obj {
	virtual ~BristleObj();                         // _08 (weak)
	virtual void update(efx::TKechappyTest*, f32); // _10 (weak)
};

struct LengthObj : public Obj {
	virtual ~LengthObj();                          // _08 (weak)
	virtual void update(efx::TKechappyTest*, f32); // _10 (weak)
};

struct VibrationObj : public Obj {
	virtual ~VibrationObj();                       // _08 (weak)
	virtual void update(efx::TKechappyTest*, f32); // _10 (weak)
};

struct Mgr {
	Mgr();

	void setup();
	void update(efx::TKechappyTest*, int, f32);
};
} // namespace EffectAnimator

#endif
