#ifndef _SYSSHAPE_ANIMATOR_H
#define _SYSSHAPE_ANIMATOR_H

#include "SysShape/AnimInfo.h"
#include "SysShape/Model.h"
#include "SysShape/MotionListener.h"

struct J3DMtxCalc;

namespace SysShape {
struct MotionListener;

struct BaseAnimator {
	virtual J3DMtxCalc* getCalc() = 0; // _08

	void setModelCalc(SysShape::Model* model, int jointId)
	{
		model->getJ3DModel()->getModelData()->getJointNodePointer(jointId)->setMtxCalc(getCalc());
	}
};

/**
 * @size{0x1C}
 */
struct Animator : public BaseAnimator {
	enum Flags {
		AnimCompleted    = 1,
		AnimFinishMotion = 2,
		AnimInProgress   = 4,

		Unk80 = 0x80,
	};

	Animator()
	{
		mFlags    = 0;
		mAnimInfo = nullptr;
		mListener = nullptr;
		mFlags    = 0;
		mAnimMgr  = nullptr;
	}

	virtual J3DMtxCalc* getCalc() // _08 (weak)
	{
		return (mAnimInfo != nullptr) ? mAnimInfo->mCalc : nullptr;
	}
	virtual void animate(f32 speed); // _0C

	void startAnim(int animID, MotionListener* listener);
	void startExAnim(AnimInfo* info);
	bool assertValid(Model* model);
	void setCurrFrame(f32 timer);
	void setFrameByKeyType(u32);
	void setLastFrame();

	inline void setFlag(u8 flag) { mFlags |= flag; }
	inline void resetFlag(u8 flag) { mFlags &= ~flag; }
	inline bool isFlag(u8 flag) const { return mFlags & flag; }

	inline int getAnimIndex()
	{
		if (mAnimInfo) {
			return mAnimInfo->mId;
		} else {
			return -1;
		}
	}

	inline J3DAnmTransform* getAnimation()
	{
		if (mAnimInfo) {
			return mAnimInfo->mAnm;
		} else {
			return nullptr;
		}
	}

	inline void onKeyEventTrigger(SysShape::KeyEvent* evt)
	{
		if (mListener) {
			evt->mAnimIdx = mAnimInfo->mId;
			mListener->onKeyEvent(*mCurAnimKey);
		}
	}

	inline f32 getTimer() const { return mTimer; }

	MotionListener* mListener; // _04
	f32 mTimer;                // _08
	AnimInfo* mAnimInfo;       // _0C
	AnimMgr* mAnimMgr;         // _10
	KeyEvent* mCurAnimKey;     // _14
	u8 mFlags;                 // _18

	static bool verbose;
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

	// unused/inlined:
	void setWeight(f32);

	Animator mAnimators[2];          // _04
	f32 mTimer;                      // _3C
	f32 mTimeMax;                    // _40
	MotionListener* mMotionListener; // _44
	bool mIsBlendEnabled;            // _48
	bool mIsBlendFinished;           // _49
	J3DMtxCalc* mMtxCalc;            // _4C
};

} // namespace SysShape

#endif
