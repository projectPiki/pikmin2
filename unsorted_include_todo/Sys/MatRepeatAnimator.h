#ifndef _SYS_MATREPEATANIMATOR_H
#define _SYS_MATREPEATANIMATOR_H

/*
    __vt__Q23Sys17MatRepeatAnimator:
    .4byte 0
    .4byte 0
    .4byte start__Q23Sys15MatBaseAnimatorFPQ23Sys16MatBaseAnimation
    .4byte onStart__Q23Sys17MatRepeatAnimatorFv
    .4byte do_animate__Q23Sys17MatRepeatAnimatorFf
*/

namespace Sys {
struct MatBaseAnimator {
	virtual void start(MatBaseAnimation*); // _08
};
} // namespace Sys

namespace Sys {
struct MatRepeatAnimator : public MatBaseAnimator {
	virtual void onStart();         // _0C
	virtual void do_animate(float); // _10
};
} // namespace Sys

#endif
