#ifndef _EFFECTANIMATOR_BRISTLEOBJ_H
#define _EFFECTANIMATOR_BRISTLEOBJ_H

/*
    __vt__Q214EffectAnimator10BristleObj:
    .4byte 0
    .4byte 0
    .4byte __dt__Q214EffectAnimator10BristleObjFv
    .4byte getChildCount__5CNodeFv
    .4byte update__Q214EffectAnimator10BristleObjFPQ23efx13TKechappyTestf
*/

struct CNode {
	virtual ~CNode();             // _08
	virtual void getChildCount(); // _0C

	// _00 VTBL
};

namespace EffectAnimator {
struct BristleObj : public CNode {
	virtual ~BristleObj();                           // _08
	virtual void update(efx::TKechappyTest*, float); // _10

	// _00 VTBL
};
} // namespace EffectAnimator

#endif
