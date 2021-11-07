#ifndef _EFFECTANIMATOR_OBJ_H
#define _EFFECTANIMATOR_OBJ_H

struct CNode {
	virtual void _00() = 0;       // _00
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
