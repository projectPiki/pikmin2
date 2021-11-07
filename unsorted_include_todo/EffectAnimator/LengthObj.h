#ifndef _EFFECTANIMATOR_LENGTHOBJ_H
#define _EFFECTANIMATOR_LENGTHOBJ_H

struct CNode {
	virtual void _00() = 0;       // _00
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
