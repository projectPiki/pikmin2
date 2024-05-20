#include "JSystem/JKernel/JKRDvdRipper.h"
#include "P2Macros.h"
#include "SysShape/AnimMgr.h"
#include "SysShape/Animator.h"
#include "SysShape/AnimInfo.h"
#include "SysShape/Joint.h"
#include "SysShape/KeyEvent.h"
#include "SysShape/Model.h"
#include "SysShape/MtxObject.h"
#include "SysShape/MotionListener.h"
#include "JSystem/J3D/J3DAnmLoader.h"
#include "nans.h"

static const u32 padding[]    = { 0, 0, 0 };
static const char className[] = "sysShape";

namespace SysShape {

bool Animator::verbose;

/**
 * @note Address: 0x80428C50
 * @note Size: 0x38
 */
void Model::clearAnimatorAll()
{
	for (int i = 0; i < mJointCount; i++) {
		mJ3dModel->getModelData()->getJointTree().getJointNodePointer((u16)i)->mMtxCalc = nullptr;
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x80
 */
void Model::setAnimatorAll(BaseAnimator&)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x80428C88
 * @note Size: 0xC8
 */
void Animator::startAnim(int animID, MotionListener* listener)
{
	mAnimInfo = mAnimMgr->getAnimByID(animID);
	if (mAnimInfo == nullptr) {
		mAnimMgr->dump();
		JUT_PANICLINE(220, "go to hell !\n");
	}

	mTimer      = 0.0f;
	mCurAnimKey = mAnimInfo->getLowestAnimKey(0.0f);
	if (listener != nullptr) {
		mListener = listener;
	} else {
		mListener = nullptr;
	}

	mFlags = 0;
}

/**
 * @note Address: 0x80428D50
 * @note Size: 0x68
 */
void Animator::startExAnim(AnimInfo* info)
{
	mAnimInfo   = info;
	mTimer      = 0.0f;
	mListener   = nullptr;
	mFlags      = 0;
	mCurAnimKey = nullptr;
	setFlag(Unk80);
	JUT_ASSERTLINE(252, verbose == 0, "OKOK\n");
}

/**
 * @note Address: 0x80428DB8
 * @note Size: 0x8
 */
bool Animator::assertValid(Model* model) { return true; }

/**
 * @note Address: 0x80428DC0
 * @note Size: 0x40
 */
void Animator::setCurrFrame(f32 timer)
{
	mTimer      = timer;
	mCurAnimKey = mAnimInfo->getLowestAnimKey(timer);
	mFlags      = 0;
}

/**
 * @note Address: 0x80428E00
 * @note Size: 0x100
 */
void Animator::setFrameByKeyType(u32 id)
{
	JUT_ASSERTLINE(300, !isFlag(Unk80), "ExMotionErr::setFrameByKeyType(%d)\n", id);

	if (id == KEYEVENT_END) {
		setCurrFrame(mAnimInfo->mAnm->getTotalFrameCount() - 1.0f);
		return;
	}

	KeyEvent* evt = mAnimInfo->getAnimKeyByType(id);
	if (evt) {
		setCurrFrame(evt->mFrame);
	}
}

/**
 * @note Address: 0x80428F00
 * @note Size: 0x78
 */
void Animator::setLastFrame()
{
	if (mAnimInfo) {
		setCurrFrame(mAnimInfo->mAnm->getTotalFrameCount() - 1.0f);
	}
}

/**
 * @note Address: 0x80428F78
 * @note Size: 0x2AC
 */
void Animator::animate(f32 speed)
{
	if (!mAnimInfo) {
		return;
	}

	mTimer += speed;

	bool loopEndFound = false;
	while (!loopEndFound && mCurAnimKey && mCurAnimKey->getFrame() < (int)mTimer) {
		onKeyEventTrigger(mCurAnimKey);

		SysShape::KeyEvent* currentEv = mCurAnimKey;
		if (!currentEv) {
			break;
		}

		switch (currentEv->mType) {
		case KEYEVENT_LOOP_END:
			if (!isFlag(AnimFinishMotion)) {
				KeyEvent* start = mAnimInfo->getLastLoopStart(currentEv);
				if (start) {
					mTimer = start->getFrame();
				} else {
					mTimer = 0.0f;
					JUT_PANICLINE(369, "mismatch LOOP_START - LOOP_END\n");
				}

				loopEndFound = true;
				break;
			}
		}

		mCurAnimKey = (KeyEvent*)mCurAnimKey->mNext;
	}

	if (loopEndFound) {
		mCurAnimKey = mAnimInfo->getLowestAnimKey(mTimer);
	}

	s32 time = mAnimInfo->mAnm->getTotalFrameCount();
	if (mTimer >= time) {
		mTimer = time - 1.0f;

		if (mListener && !isFlag(AnimCompleted)) {
			KeyEvent event;
			event.mFrame   = (f32)mAnimInfo->mAnm->getTotalFrameCount();
			event.mType    = KEYEVENT_END;
			event.mAnimIdx = mAnimInfo->mId;
			setFlag(AnimCompleted);
			mListener->onKeyEvent(event);
		}
	}

	mAnimInfo->mAnm->setFrame((int)mTimer);
}

/**
 * @note Address: 0x80429224
 * @note Size: 0x80
 */
BlendAnimator::BlendAnimator()
{
	mMtxCalc         = nullptr;
	mTimer           = 0.0f;
	mTimeMax         = 0.0f;
	mMotionListener  = nullptr;
	mIsBlendFinished = 0;
	mIsBlendEnabled  = false;
}

/**
 * @note Address: 0x804292A4
 * @note Size: 0x154
 */
void BlendAnimator::setAnimMgr(AnimMgr* mgr)
{
	mIsBlendEnabled = false;

	for (int i = 0; i < 2; i++) {
		mAnimators[i].mAnimMgr  = mgr;
		mAnimators[i].mAnimInfo = mAnimators[i].mAnimMgr->getAnimByID(0);
		if (!mAnimators[i].mAnimInfo) {
			mAnimators[i].mAnimMgr->dump();
			JUT_PANICLINE(220, "go to hell !\n"); // so polite
		}
		mAnimators[i].mTimer      = 0.0f;
		mAnimators[i].mCurAnimKey = mAnimators[i].mAnimInfo->getLowestAnimKey(0.0f);
		mAnimators[i].mListener   = nullptr;
		mAnimators[i].mFlags      = 0;
	}

	AnimInfo* info = mgr->getAnimByID(0);
	JUT_ASSERTLINE(442, info, "BlendAnimator : at least 1 motion is required!\n");

	mMtxCalc = J3DUNewMtxCalcAnm(mgr->mModel->mJ3dModel->mModelData->mJointTree.mFlags & J3DMLF_MtxTypeMask, info->mAnm, info->mAnm,
	                             nullptr, nullptr, MTXCalc_Blend);
}

/**
 * @note Address: N/A
 * @note Size: 0x124
 */
void BlendAnimator::setWeight(f32 weight)
{
	P2ASSERTBOOLLINE(454, 0.0f <= weight && weight <= 1.0f);

	// set animation A to the inverse of the weight
	mMtxCalc->setAnmTransform(0, mAnimators[0].getAnimation());
	mMtxCalc->setWeight(0, 1.0f - weight);

	// set animation B to the weight directly
	mMtxCalc->setAnmTransform(1, mAnimators[1].getAnimation());
	mMtxCalc->setWeight(1, weight);
}

/**
 * @note Address: 0x804293F8
 * @note Size: 0x15C
 */
void BlendAnimator::startBlend(BlendFunction* func, f32 time, MotionListener* mlisten)
{
	mMotionListener = mlisten;
	mTimer          = 0.0f;
	mTimeMax        = time;

	setWeight(func->getValue(0.0f));

	mIsBlendFinished = false;
	mIsBlendEnabled  = true;
}

/**
 * @note Address: 0x80429554
 * @note Size: 0x18
 */
void BlendAnimator::endBlend()
{
	mIsBlendEnabled  = false;
	mIsBlendFinished = false;
	mTimer           = 0.0f;
}

/**
 * @note Address: 0x8042956C
 * @note Size: 0x278
 */
void BlendAnimator::animate(BlendFunction* func, f32 dt, f32 anim0Dt, f32 anim1Dt)
{
	if (mIsBlendEnabled) {
		mAnimators[0].animate(anim0Dt);
		mAnimators[1].animate(anim1Dt);
		mTimer += dt;
		if (mTimer >= mTimeMax) {
			mTimer = mTimeMax;
			if (!mIsBlendFinished) {
				mIsBlendFinished = true;
				if (mMotionListener) {
					KeyEvent event;
					event.mFrame = mTimeMax;
					event.mType  = KEYEVENT_END_BLEND;
					mMotionListener->onKeyEvent(event);
				}
			}
		}
		setWeight(func->getValue(mTimer / mTimeMax));
	} else {
		mAnimators[0].animate(anim0Dt);
	}
}

/**
 * @note Address: 0x804297E4
 * @note Size: 0x40
 */
J3DMtxCalc* BlendAnimator::getCalc()
{
	if (mIsBlendEnabled) {
		return mMtxCalc;
	}
	return mAnimators[0].getCalc();
}

/**
 * @note Address: 0x80429824
 * @note Size: 0x7C
 */
void Joint::init(u16 index, Model* model, J3DJoint* j3dJoint)
{
	mJointIndex = index;
	mModel      = model;
	mJ3d        = j3dJoint;
	mMin.x      = j3dJoint->mMin.x;
	mMin.y      = j3dJoint->mMin.y;
	mMin.z      = j3dJoint->mMin.z;
	mMax.x      = j3dJoint->mMax.x;
	mMax.y      = j3dJoint->mMax.y;
	mMax.z      = j3dJoint->mMax.z;
	mName       = model->mJ3dModel->mModelData->mJointTree.mNametab->getName(mJointIndex);
}

/**
 * @note Address: 0x804298A0
 * @note Size: 0x20
 */
Matrixf* Joint::getWorldMatrix() { return mModel->getJ3DModel()->mMtxBuffer->getWorldMatrix(mJointIndex); }

/**
 * @note Address: N/A
 * @note Size: 0xC
 */
void Joint::setCallback(JointCallback* cb)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x78
 */
void JointCallback::calc()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x5C
 */
void AnimInfo::attach(Model*, void*)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x804298C0
 * @note Size: 0x6C
 * Returns the lowest anim key after the given minimum frame.
 */
KeyEvent* AnimInfo::getLowestAnimKey(f32 minimumFrame)
{
	f32 lowestFrame     = FLOAT_DIST_MAX;
	KeyEvent* lowestKey = nullptr;
	FOREACH_NODE(KeyEvent, mKeyEvent.mChild, key)
	{
		int frame      = key->getFrame();
		f32 framefloat = frame;

		if (frame >= (int)minimumFrame && framefloat < lowestFrame) {
			lowestFrame = framefloat;
			lowestKey   = key;
		}
	}

	return lowestKey;
}

/**
 * @note Address: N/A
 * @note Size: 0x2C
 */
void AnimInfo::dump()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x64
 */
void AnimInfo::getLastLoopStart(f32)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x8042992C
 * @note Size: 0x28
 */
KeyEvent* AnimInfo::getLastLoopStart(KeyEvent* key)
{
	FOREACH_NODE_REVERSE(KeyEvent, key->mPrev, prev)
	{
		if (prev->mType == KEYEVENT_LOOP_START) {
			return prev;
		}
	}
	return nullptr;
}

/**
 * @note Address: 0x80429954
 * @note Size: 0x28
 */
KeyEvent* AnimInfo::getAnimKeyByType(u32 type)
{
	FOREACH_NODE(KeyEvent, mKeyEvent.mChild, next)
	{
		if (next->mType == type) {
			return next;
		}
	}
	return nullptr;
}

/**
 * @note Address: 0x8042997C
 * @note Size: 0x20
 */
void AnimInfo::read(Stream& input) { readEditor(input); }

/**
 * @note Address: 0x8042999C
 * @note Size: 0x10C
 */
void AnimInfo::readEditor(Stream& input)
{
	mDevelopPath = input.readString(nullptr, 0);
	mName        = input.readString(nullptr, 0);
	while (input.eof() == 0) {
		int frame = input.readInt();
		if (frame == -1) {
			return;
		}
		KeyEvent* key = new KeyEvent;
		key->mFrame   = frame;
		key->mType    = input.readInt();
		mKeyEvent.add(key);
	}
	JUT_PANICLINE(841, "reached eof\n");
}

/**
 * @note Address: 0x80429AA8
 * @note Size: 0x13C
 */
AnimMgr* AnimMgr::load(char* path, J3DModelData* modelData, JKRFileLoader* fileLoader)
{
	void* data = JKRDvdRipper::loadToMainRAM(path, nullptr, Switch_0, 0, JKRHeap::sSystemHeap, JKRDvdRipper::ALLOC_DIR_BOTTOM, 0, nullptr,
	                                         nullptr);
	if (data == nullptr) {
		return nullptr;
	}
	RamStream input(data, -1);
	input.setMode(STREAM_MODE_TEXT, 1);
	AnimMgr* mgr = new AnimMgr;
	mgr->load(input, modelData, fileLoader, nullptr);
	delete[] data;
	return mgr;
}

/**
 * @note Address: 0x80429C68
 * @note Size: 0x80
 */
void AnimMgr::dump()
{
	for (int i = 0; i < mCount; i++) {
		getAnimByID(i)->mKeyEvent.getChildCount();
	}
}

/**
 * @note Address: N/A
 * @note Size: 0xCC
 */
AnimMgr* AnimMgr::load(Stream&, Model*, JKRFileLoader*, char*)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x5C
 */
JointCallback::~JointCallback()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x4
 */
void JointCallback::init(Vec const&, const Mtx&)
{
	// UNUSED FUNCTION
}

} // namespace SysShape
