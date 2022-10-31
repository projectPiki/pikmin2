#ifndef _SYS_MATBASEANIMATOR_H
#define _SYS_MATBASEANIMATOR_H

#include "types.h"
namespace Sys {
struct MatBaseAnimation;

/**
 * @size{0xC}
 */
struct MatBaseAnimator {
	MatBaseAnimator();

	virtual void start(MatBaseAnimation*); // _08
	virtual void onStart();                // _0C (weak)
	virtual void do_animate(f32);          // _10 (weak)

	void setCurrentFrame(f32);
	void animate(f32);

	// VTBL _00
	MatBaseAnimation* m_animation; // _04
	f32 _08;                       // _08
};

/**
 * @size{0xC}
 */
struct MatLoopAnimator : public MatBaseAnimator {
	MatLoopAnimator() { }

	virtual void do_animate(f32); // _10
};

/**
 * @size{0x10}
 */
struct MatRepeatAnimator : public MatBaseAnimator {
	virtual void onStart();       // _0C
	virtual void do_animate(f32); // _10

	u8 _0C; // _0C
};

} // namespace Sys

#endif
