#ifndef _SYSSHAPE_ANIMATOR_H
#define _SYSSHAPE_ANIMATOR_H

#include "types.h"

struct J3DMtxCalc;

namespace SysShape {
struct Model;
struct AnimInfo;
struct MotionListener;
struct AnimMgr;
struct KeyEvent;

struct BaseAnimator {
	BaseAnimator() { }

	virtual J3DMtxCalc* getCalc() = 0; // _00

	// virtual void animate(float); // _04
};

/**
 * @size{0x1C}
 */
struct Animator : public BaseAnimator {
	Animator()
	    : BaseAnimator()
	{
		m_flags    = 0;
		m_animInfo = nullptr;
		m_listener = nullptr;
		m_flags    = 0;
		m_animMgr  = nullptr;
	}

	virtual J3DMtxCalc* getCalc(); // _00
	virtual void animate(float);   // _04

	void assertValid(SysShape::Model*);
	void setCurrFrame(float);
	void setFrameByKeyType(unsigned long);
	void setLastFrame();
	void startAnim(int, SysShape::MotionListener*);
	void startExAnim(SysShape::AnimInfo*);

	SysShape::MotionListener* m_listener; // _04
	f32 m_timer;                          // _08
	SysShape::AnimInfo* m_animInfo;       // _0C
	SysShape::AnimMgr* m_animMgr;         // _10
	SysShape::KeyEvent* m_curAnimKey;     // _14
	u8 m_flags;                           // _18
};

struct BlendFunction {
	virtual float getValue(float) = 0; // _00
};

struct BlendLinearFun : public BlendFunction {
	/**
	 * @reifiedAddress{8012E324}
	 * @reifiedFile{plugProjectYamashitaU/enemyBlendAnimatorBase.cpp}
	 */
	virtual float getValue(float value) // _00
	{
		return value;
	}
};

struct BlendQuadraticFunc : public BlendFunction {
	/**
	 * @reifiedAddress{8012E344}
	 * @reifiedFile{plugProjectYamashitaU/enemyBlendAnimatorBase.cpp}
	 */
	virtual float getValue(float value) // _00
	{
		return value * value;
	}
};

struct BlendAnimator : public BaseAnimator {
	BlendAnimator();

	virtual J3DMtxCalc* getCalc(); // _00

	void animate(BlendFunction*, float, float, float);
	void setAnimMgr(AnimMgr*);
	void startBlend(BlendFunction*, float, MotionListener*);
	void endBlend();

	Animator m_animators[2];          // _04
	float _3C;                        // _3C
	float _40;                        // _40
	MotionListener* m_motionListener; // _44
	u8 _48;                           // _48
	u8 _49;                           // _49
	J3DMtxCalc* m_mtxCalc;            // _4C
};
} // namespace SysShape

#endif
