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
	virtual void start(MatBaseAnimation*); // _08
	virtual void onStart();                // _0C (weak)
};
} // namespace Sys

namespace Sys {
struct MatLoopAnimator : public MatBaseAnimator {
	virtual void do_animate(float); // _10

	MatLoopAnimator();
};
} // namespace Sys

#endif
