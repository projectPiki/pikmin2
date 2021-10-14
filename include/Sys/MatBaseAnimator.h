#ifndef _SYS_MATBASEANIMATOR_H
#define _SYS_MATBASEANIMATOR_H

namespace Sys {
struct MatBaseAnimation;

struct MatBaseAnimator {
	MatBaseAnimator();

	void animate(float);
	void do_animate(float);
	void onStart();
	void setCurrentFrame(float);
	void start(Sys::MatBaseAnimation*);
};
} // namespace Sys

#endif
