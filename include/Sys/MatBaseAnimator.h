#ifndef _SYS_MATBASEANIMATOR_H
#define _SYS_MATBASEANIMATOR_H

#include "types.h"
#include "Sys/MatBaseAnimation.h"

namespace Sys {

/**
 * @size{0xC}
 */
struct MatBaseAnimator {
	enum State {
		Playing     = 0,
		AtStart     = 1,
		AtEnd       = 2,
		NoAnimation = 0x8000,
	};

	MatBaseAnimator();

	virtual void start(MatBaseAnimation* animation); // _08
	virtual void onStart();                          // _0C (weak)
	virtual void do_animate(f32);                    // _10 (weak)

	void setCurrentFrame(f32);
	void animate(f32);

	// unused/inlined:
	void removeMotion();
	int forward(f32);

	// by all means this should not exist, its just forward with - instead of +
	// but alas, the subtract is needed and idk how else to make it work
	int backward(f32 rate)
	{
		int state;
		if (!mAnimation) {
			state = NoAnimation;
		} else {
			state = Playing;
			mCurrFrame -= rate;
			if (mCurrFrame < 0.0f) {
				mCurrFrame = 0.0f;
				state      = AtStart;
			} else if (mCurrFrame >= mAnimation->getFrameMax()) {
				mCurrFrame = mAnimation->getFrameMax();
				state      = AtEnd;
			}
			mAnimation->getAnmBase()->setFrame(mCurrFrame);
		}
		return state;
	}

	// VTBL _00
	MatBaseAnimation* mAnimation; // _04
	f32 mCurrFrame;               // _08
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

	u8 mStarted; // _0C
};

} // namespace Sys

#endif
