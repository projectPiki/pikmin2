#ifndef _SYS_MATLOOPANIMATOR_H
#define _SYS_MATLOOPANIMATOR_H

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
