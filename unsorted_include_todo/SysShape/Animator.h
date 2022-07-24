#ifndef _SYSSHAPE_ANIMATOR_H
#define _SYSSHAPE_ANIMATOR_H

/*
    __vt__Q28SysShape8Animator:
    .4byte 0
    .4byte 0
    .4byte getCalc__Q28SysShape8AnimatorFv
    .4byte animate__Q28SysShape8AnimatorFf
*/

namespace SysShape {
struct Animator {
	virtual void getCalc();      // _08 (inline)
	virtual void animate(float); // _0C

	Animator();
	void startAnim(int, SysShape::MotionListener*);
	void startExAnim(SysShape::AnimInfo*);
	void assertValid(SysShape::Model*);
	void setCurrFrame(float);
	void setFrameByKeyType(unsigned long);
	void setLastFrame();
};
} // namespace SysShape

#endif
