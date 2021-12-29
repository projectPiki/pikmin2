#ifndef _EFFECTANIMATOR_OBJ_H
#define _EFFECTANIMATOR_OBJ_H

/*
    __vt__Q214EffectAnimator3Obj:
    .4byte 0
    .4byte 0
    .4byte __dt__Q214EffectAnimator3ObjFv
    .4byte getChildCount__5CNodeFv
    .4byte update__Q214EffectAnimator3ObjFPQ23efx13TKechappyTestf
*/

struct CNode {
	virtual ~CNode();             // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

namespace EffectAnimator {
struct Obj : public CNode {
	virtual ~Obj();                                  // _00
	virtual void getChildCount();                    // _04
	virtual void update(efx::TKechappyTest*, float); // _08

	// _00 VTBL
};
} // namespace EffectAnimator

#endif
