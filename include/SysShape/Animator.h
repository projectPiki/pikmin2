#ifndef _SYSSHAPE_ANIMATOR_H
#define _SYSSHAPE_ANIMATOR_H

namespace SysShape {
struct Model;
struct AnimInfo;
struct MotionListener;

struct BaseAnimator {
	virtual void getCalc() = 0;
};

struct Animator : public BaseAnimator {
	Animator();

	virtual void getCalc();
	virtual void animate(float);

	void assertValid(SysShape::Model*);
	void setCurrFrame(float);
	void setFrameByKeyType(unsigned long);
	void setLastFrame();
	void startAnim(int, SysShape::MotionListener*);
	void startExAnim(SysShape::AnimInfo*);
};

} // namespace SysShape

#endif
