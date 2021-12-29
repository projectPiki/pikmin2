#ifndef _SYS_MATBASEANIMATOR_H
#define _SYS_MATBASEANIMATOR_H

/*
    __vt__Q23Sys15MatBaseAnimator:
    .4byte 0
    .4byte 0
    .4byte start__Q23Sys15MatBaseAnimatorFPQ23Sys16MatBaseAnimation
    .4byte onStart__Q23Sys15MatBaseAnimatorFv
    .4byte do_animate__Q23Sys15MatBaseAnimatorFf
*/

namespace Sys {
struct MatBaseAnimator {
	virtual void start(MatBaseAnimation*); // _00
	virtual void onStart();                // _04
	virtual void do_animate(float);        // _08

	// _00 VTBL
};
} // namespace Sys

#endif
