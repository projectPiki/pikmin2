#ifndef _EFFECTANIMATOR_LENGTHOBJ_H
#define _EFFECTANIMATOR_LENGTHOBJ_H

/*
    __vt__Q214EffectAnimator9LengthObj:
    .4byte 0
    .4byte 0
    .4byte __dt__Q214EffectAnimator9LengthObjFv
    .4byte getChildCount__5CNodeFv
    .4byte update__Q214EffectAnimator9LengthObjFPQ23efx13TKechappyTestf
*/

struct CNode {
	virtual ~CNode();             // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

namespace EffectAnimator {
struct LengthObj : public CNode {
	virtual ~LengthObj();                            // _00
	virtual void getChildCount();                    // _04
	virtual void update(efx::TKechappyTest*, float); // _08

	// _00 VTBL
};
} // namespace EffectAnimator

#endif
