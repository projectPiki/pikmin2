#ifndef _EFFECTANIMATOR_BRISTLEOBJ_H
#define _EFFECTANIMATOR_BRISTLEOBJ_H

struct CNode {
	virtual void _00() = 0;       // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

namespace EffectAnimator {
struct BristleObj : public CNode {
	virtual ~BristleObj();                           // _00
	virtual void getChildCount();                    // _04
	virtual void update(efx::TKechappyTest*, float); // _08

	// _00 VTBL
};
} // namespace EffectAnimator

#endif
