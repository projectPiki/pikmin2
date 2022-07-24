#ifndef _SYSSHAPE_BLENDANIMATOR_H
#define _SYSSHAPE_BLENDANIMATOR_H

/*
    __vt__Q28SysShape13BlendAnimator:
    .4byte 0
    .4byte 0
    .4byte getCalc__Q28SysShape13BlendAnimatorFv
*/

namespace SysShape {
struct BlendAnimator {
	virtual void getCalc(); // _08

	BlendAnimator();
	void setAnimMgr(SysShape::AnimMgr*);
	void startBlend(SysShape::BlendFunction*, float, SysShape::MotionListener*);
	void endBlend();
	void animate(SysShape::BlendFunction*, float, float, float);
};
} // namespace SysShape

#endif
