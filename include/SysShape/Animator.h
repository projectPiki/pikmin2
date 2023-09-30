#ifndef _SYSSHAPE_ANIMATOR_H
#define _SYSSHAPE_ANIMATOR_H

#include "SysShape/AnimInfo.h"
#include "SysShape/Model.h"

struct J3DMtxCalc;

namespace SysShape {
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
	virtual void animate(f32); // _0C

	void startAnim(int animID, MotionListener* listener);
	void startExAnim(AnimInfo* info);
	bool assertValid(Model* model);
	void setCurrFrame(f32 timer);
	void setFrameByKeyType(u32);
	void setLastFrame();

	inline int getAnimIndex()
	{
		if (mAnimInfo) {
			return mAnimInfo->mId;
		} else {
			return -1;
		}
	}

	MotionListener* mListener; // _04
	f32 mTimer;                // _08
	AnimInfo* mAnimInfo;       // _0C
	AnimMgr* mAnimMgr;         // _10
	KeyEvent* mCurAnimKey;     // _14
	u8 mFlags;                 // _18

	static u8 verbose;
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

	void setModelCalc(SysShape::Model* model) { model->mJ3dModel->mModelData->mJointTree.mJoints[0]->mMtxCalc = getCalc(); }

	Animator mAnimators[2];          // _04
	f32 _3C;                         // _3C
	f32 _40;                         // _40
	MotionListener* mMotionListener; // _44
	u8 _48;                          // _48
	u8 _49;                          // _49
	J3DMtxCalc* mMtxCalc;            // _4C
};

} // namespace SysShape

#endif
