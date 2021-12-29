#ifndef _EFFECTANIMATOR_VIBRATIONOBJ_H
#define _EFFECTANIMATOR_VIBRATIONOBJ_H

/*
    __vt__Q214EffectAnimator12VibrationObj:
    .4byte 0
    .4byte 0
    .4byte __dt__Q214EffectAnimator12VibrationObjFv
    .4byte getChildCount__5CNodeFv
    .4byte update__Q214EffectAnimator12VibrationObjFPQ23efx13TKechappyTestf
*/

struct CNode {
	virtual ~CNode();             // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

namespace EffectAnimator {
struct VibrationObj : public CNode {
	virtual ~VibrationObj();                         // _00
	virtual void getChildCount();                    // _04
	virtual void update(efx::TKechappyTest*, float); // _08

	// _00 VTBL
};
} // namespace EffectAnimator

#endif
