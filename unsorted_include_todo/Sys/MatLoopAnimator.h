#ifndef _SYS_MATLOOPANIMATOR_H
#define _SYS_MATLOOPANIMATOR_H

/*
    __vt__Q23Sys15MatLoopAnimator:
    .4byte 0
    .4byte 0
    .4byte start__Q23Sys15MatBaseAnimatorFPQ23Sys16MatBaseAnimation
    .4byte onStart__Q23Sys15MatBaseAnimatorFv
    .4byte do_animate__Q23Sys15MatLoopAnimatorFf
*/

namespace Sys {
struct MatBaseAnimator {
	virtual void start(MatBaseAnimation*); // _00
	virtual void onStart();                // _04

	// _00 VTBL
};
} // namespace Sys

namespace Sys {
struct MatLoopAnimator : public MatBaseAnimator {
	virtual void start(MatBaseAnimation*); // _00
	virtual void onStart();                // _04
	virtual void do_animate(float);        // _08

	// _00 VTBL
};
} // namespace Sys

#endif
