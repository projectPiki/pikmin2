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
	virtual ~CNode();             // _08 (weak)
	virtual void getChildCount(); // _0C
};

namespace EffectAnimator {
struct VibrationObj : public CNode {
	virtual ~VibrationObj();                         // _08 (weak)
	virtual void update(efx::TKechappyTest*, float); // _10 (weak)
};
} // namespace EffectAnimator

#endif
