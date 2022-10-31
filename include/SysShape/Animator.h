#ifndef _SYSSHAPE_ANIMATOR_H
#define _SYSSHAPE_ANIMATOR_H

#include "SysShape/AnimInfo.h"

struct J3DMtxCalc;

namespace SysShape {
struct Model;
struct MotionListener;

struct BaseAnimator {
	virtual J3DMtxCalc* getCalc() = 0; // _08
};

/**
 * @size{0x1C}
 */
struct Animator : public BaseAnimator {
	Animator()
	{
		m_flags    = 0;
		m_animInfo = nullptr;
		m_listener = nullptr;
		m_flags    = 0;
		m_animMgr  = nullptr;
	}

	virtual J3DMtxCalc* getCalc() // _08 (weak)
	{
		return (m_animInfo != nullptr) ? m_animInfo->m_calc : nullptr;
	}
	virtual void animate(f32); // _0C

	void startAnim(int, MotionListener*);
	void startExAnim(AnimInfo*);
	bool assertValid(Model*);
	void setCurrFrame(f32);
	void setFrameByKeyType(u32);
	void setLastFrame();

	MotionListener* m_listener; // _04
	f32 m_timer;                // _08
	AnimInfo* m_animInfo;       // _0C
	AnimMgr* m_animMgr;         // _10
	KeyEvent* m_curAnimKey;     // _14
	u8 m_flags;                 // _18
};

struct BlendFunction {
	virtual f32 getValue(f32) = 0; // _08
};

struct BlendLinearFun : public BlendFunction {
	virtual f32 getValue(f32 value) // _08 (weak)
	{
		return value;
	}
};

struct BlendQuadraticFunc : public BlendFunction {
	virtual f32 getValue(f32 value) // _08 (weak)
	{
		return value * value;
	}
};

/**
 * @size{0x50}
 */
struct BlendAnimator : public BaseAnimator {
	BlendAnimator();

	virtual J3DMtxCalc* getCalc(); // _08

	void setAnimMgr(AnimMgr*);
	void startBlend(BlendFunction*, f32, MotionListener*);
	void endBlend();
	void animate(BlendFunction*, f32, f32, f32);

	Animator m_animators[2];          // _04
	f32 _3C;                          // _3C
	f32 _40;                          // _40
	MotionListener* m_motionListener; // _44
	u8 _48;                           // _48
	u8 _49;                           // _49
	J3DMtxCalc* m_mtxCalc;            // _4C
};

} // namespace SysShape

#endif
