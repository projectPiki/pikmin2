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

/*
 * --INFO--
 * Address:	80428C50
 * Size:	000038
 */
void Model::clearAnimatorAll()
{
	for (int i = 0; i < mJointCount; i++) {
		mJ3dModel->getModelData()->getJointTree().getJointNodePointer(i)->mMtxCalc = nullptr;
	}
}

/*
 * --INFO--
 * Address:	........
 * Size:	000080
 */
void Model::setAnimatorAll(BaseAnimator&)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80428C88
 * Size:	0000C8
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

/*
 * --INFO--
 * Address:	80428D50
 * Size:	000068
 */
void Animator::startExAnim(AnimInfo* info)
{
	mAnimInfo   = info;
	mTimer      = 0.0f;
	mListener   = nullptr;
	mFlags      = 0;
	mCurAnimKey = nullptr;
	mFlags |= 0x80;
	JUT_ASSERTLINE(252, verbose == 0, "OKOK\n");
}

/*
 * --INFO--
 * Address:	80428DB8
 * Size:	000008
 */
bool Animator::assertValid(Model* model) { return true; }

/*
 * --INFO--
 * Address:	80428DC0
 * Size:	000040
 */
void Animator::setCurrFrame(f32 timer)
{
	mTimer      = timer;
	mCurAnimKey = mAnimInfo->getLowestAnimKey(timer);
	mFlags      = 0;
}

/*
 * --INFO--
 * Address:	80428E00
 * Size:	000100
 */
void Animator::setFrameByKeyType(u32 id)
{
	JUT_ASSERTLINE(300, !(mFlags & 0x80), "ExMotionErr::setFrameByKeyType(%d)\n", id);

	if (id == KEYEVENT_END) {
		setCurrFrame(mAnimInfo->mAnm->mMaxFrame - 1.0f);
	} else {
		KeyEvent* evt = mAnimInfo->getAnimKeyByType(id);
		if (evt) {
			setCurrFrame(evt->mFrame);
		}
	}
}

/*
 * --INFO--
 * Address:	80428F00
 * Size:	000078
 */
void Animator::setLastFrame()
{
	if (mAnimInfo) {
		setCurrFrame(mAnimInfo->mAnm->mMaxFrame - 1.0f);
	}
}

/*
 * --INFO--
 * Address:	80428F78
 * Size:	0002AC
 */
void Animator::animate(f32 timeFactor)
{
	if (mAnimInfo) {
		bool end = false;
		mTimer += timeFactor;
		while (true) {
			KeyEvent* evt = mCurAnimKey;
			if (mListener) {
				evt->mAnimIdx = mAnimInfo->mId;
				mListener->onKeyEvent(*mCurAnimKey);
			}
			evt = mCurAnimKey;
			if (!evt) {
				break;
			}
			switch (evt->mType) {
			case 1:
				if (!(mFlags & 2)) {
					KeyEvent* start = mAnimInfo->getLastLoopStart(evt);
					if (start) {
						mTimer = start->mFrame;
					} else {
						mTimer = 0.0f;
						JUT_PANICLINE(369, "mismatch LOOP_START - LOOP_END\n");
					}
				}
				end = true;
				break;
			}
			mCurAnimKey = (KeyEvent*)mCurAnimKey->mNext;
			if (!mCurAnimKey || mCurAnimKey->mFrame < mTimer) {
				break;
			}
		}
		if (end) {
			mCurAnimKey = mAnimInfo->getLowestAnimKey(mTimer);
		}

		int time = mAnimInfo->mAnm->mCurrentFrame;
		if (time <= mTimer) {
			mTimer = time - 1.0f;
			if (mListener && !(mFlags & 1)) {
				KeyEvent event;
				event.mFrame   = (f32)mAnimInfo->mAnm->mMaxFrame;
				event.mType    = KEYEVENT_END;
				event.mAnimIdx = mAnimInfo->mId;
				mFlags |= 1;
				mListener->onKeyEvent(event);
			}
			mAnimInfo->mAnm->setFrame((int)mTimer);
		}
	}
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	stw      r31, 0x4c(r1)
	mr       r31, r3
	stw      r30, 0x48(r1)
	lwz      r0, 0xc(r3)
	cmplwi   r0, 0
	beq      lbl_8042920C
	lfs      f0, 8(r31)
	li       r30, 0
	fadds    f0, f0, f1
	stfs     f0, 8(r31)
	b        lbl_80429074

lbl_80428FB0:
	lwz      r0, 4(r31)
	cmplwi   r0, 0
	beq      lbl_80428FE0
	lwz      r3, 0xc(r31)
	lha      r0, 0x20(r3)
	sth      r0, 0x20(r4)
	lwz      r3, 4(r31)
	lwz      r4, 0x14(r31)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl

lbl_80428FE0:
	lwz      r4, 0x14(r31)
	cmplwi   r4, 0
	beq      lbl_804290A4
	lwz      r0, 0x1c(r4)
	cmpwi    r0, 1
	beq      lbl_80428FFC
	b        lbl_80429068

lbl_80428FFC:
	lbz      r0, 0x18(r31)
	rlwinm.  r0, r0, 0, 0x1e, 0x1e
	bne      lbl_80429068
	lwz      r3, 0xc(r31)
	bl       getLastLoopStart__Q28SysShape8AnimInfoFPQ28SysShape8KeyEvent
	cmplwi   r3, 0
	beq      lbl_80429040
	lwz      r3, 0x18(r3)
	lis      r0, 0x4330
	stw      r0, 0x30(r1)
	xoris    r0, r3, 0x8000
	lfd      f1, lbl_80520538@sda21(r2)
	stw      r0, 0x34(r1)
	lfd      f0, 0x30(r1)
	fsubs    f0, f0, f1
	stfs     f0, 8(r31)
	b        lbl_80429064

lbl_80429040:
	lfs      f0, lbl_80520528@sda21(r2)
	lis      r3, lbl_80499C70@ha
	lis      r5, lbl_80499CB4@ha
	li       r4, 0x171
	stfs     f0, 8(r31)
	addi     r3, r3, lbl_80499C70@l
	addi     r5, r5, lbl_80499CB4@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80429064:
	li       r30, 1

lbl_80429068:
	lwz      r3, 0x14(r31)
	lwz      r0, 4(r3)
	stw      r0, 0x14(r31)

lbl_80429074:
	clrlwi.  r0, r30, 0x18
	bne      lbl_804290A4
	lwz      r4, 0x14(r31)
	cmplwi   r4, 0
	beq      lbl_804290A4
	lfs      f0, 8(r31)
	lwz      r3, 0x18(r4)
	fctiwz   f0, f0
	stfd     f0, 0x30(r1)
	lwz      r0, 0x34(r1)
	cmpw     r3, r0
	blt      lbl_80428FB0

lbl_804290A4:
	clrlwi.  r0, r30, 0x18
	beq      lbl_804290BC
	lwz      r3, 0xc(r31)
	lfs      f1, 8(r31)
	bl       getLowestAnimKey__Q28SysShape8AnimInfoFf
	stw      r3, 0x14(r31)

lbl_804290BC:
	lwz      r3, 0xc(r31)
	lis      r0, 0x4330
	stw      r0, 0x30(r1)
	lwz      r3, 0x18(r3)
	lfd      f2, lbl_80520538@sda21(r2)
	lha      r3, 6(r3)
	lfs      f1, 8(r31)
	xoris    r3, r3, 0x8000
	stw      r3, 0x34(r1)
	lfd      f0, 0x30(r1)
	fsubs    f0, f0, f2
	fcmpo    cr0, f1, f0
	cror     2, 1, 2
	bne      lbl_804291D4
	stw      r3, 0x34(r1)
	lfs      f0, lbl_80520534@sda21(r2)
	stw      r0, 0x30(r1)
	lfd      f1, 0x30(r1)
	fsubs    f1, f1, f2
	fsubs    f0, f1, f0
	stfs     f0, 8(r31)
	lwz      r0, 4(r31)
	cmplwi   r0, 0
	beq      lbl_804291D4
	lbz      r0, 0x18(r31)
	clrlwi.  r0, r0, 0x1f
	bne      lbl_804291D4
	addi     r3, r1, 8
	bl       __ct__5CNodeFv
	lis      r3, __vt__Q28SysShape8KeyEvent@ha
	li       r6, 0
	addi     r0, r3, __vt__Q28SysShape8KeyEvent@l
	li       r5, -1
	stw      r0, 8(r1)
	lis      r3, 0x4330
	lfd      f1, lbl_80520538@sda21(r2)
	li       r0, 0x3e8
	stw      r6, 0x20(r1)
	addi     r4, r1, 8
	stw      r6, 0x24(r1)
	sth      r5, 0x28(r1)
	lwz      r5, 0xc(r31)
	stw      r3, 0x30(r1)
	lwz      r3, 0x18(r5)
	lha      r3, 6(r3)
	xoris    r3, r3, 0x8000
	stw      r0, 0x24(r1)
	stw      r3, 0x34(r1)
	lfd      f0, 0x30(r1)
	fsubs    f0, f0, f1
	fctiwz   f0, f0
	stfd     f0, 0x38(r1)
	lwz      r0, 0x3c(r1)
	stw      r0, 0x20(r1)
	lha      r0, 0x20(r5)
	sth      r0, 0x28(r1)
	lbz      r0, 0x18(r31)
	ori      r0, r0, 1
	stb      r0, 0x18(r31)
	lwz      r3, 4(r31)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lis      r4, __vt__Q28SysShape8KeyEvent@ha
	addi     r3, r1, 8
	addi     r0, r4, __vt__Q28SysShape8KeyEvent@l
	li       r4, 0
	stw      r0, 8(r1)
	bl       __dt__5CNodeFv

lbl_804291D4:
	lfs      f0, 8(r31)
	lis      r0, 0x4330
	lwz      r3, 0xc(r31)
	fctiwz   f0, f0
	stw      r0, 0x30(r1)
	lfd      f1, lbl_80520538@sda21(r2)
	lwz      r3, 0x18(r3)
	stfd     f0, 0x38(r1)
	lwz      r0, 0x3c(r1)
	xoris    r0, r0, 0x8000
	stw      r0, 0x34(r1)
	lfd      f0, 0x30(r1)
	fsubs    f0, f0, f1
	stfs     f0, 8(r3)

lbl_8042920C:
	lwz      r0, 0x54(r1)
	lwz      r31, 0x4c(r1)
	lwz      r30, 0x48(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

/*
 * --INFO--
 * Address:	80429224
 * Size:	000080
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

/*
 * --INFO--
 * Address:	804292A4
 * Size:	000154
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

	mMtxCalc = J3DUNewMtxCalcAnm(mgr->mModel->mJ3dModel->mModelData->mJointTree.mFlags & 0xf, info->mAnm, info->mAnm, nullptr, nullptr,
	                             MTXCalc_0);
}

/*
 * --INFO--
 * Address:	........
 * Size:	000124
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

/*
 * --INFO--
 * Address:	804293F8
 * Size:	00015C
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

/*
 * --INFO--
 * Address:	80429554
 * Size:	000018
 */
void BlendAnimator::endBlend()
{
	mIsBlendEnabled  = false;
	mIsBlendFinished = false;
	mTimer           = 0.0f;
}

/*
 * --INFO--
 * Address:	8042956C
 * Size:	000278
 */
void BlendAnimator::animate(BlendFunction* func, f32 a1, f32 a2, f32 a3)
{
	if (mIsBlendEnabled) {
		mAnimators[0].animate(a2);
		mAnimators[1].animate(a3);
		mTimer += a1;
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
		mAnimators[0].animate(a2);
	}
}

/*
 * --INFO--
 * Address:	804297E4
 * Size:	000040
 */
J3DMtxCalc* BlendAnimator::getCalc()
{
	if (mIsBlendEnabled) {
		return mMtxCalc;
	}
	return mAnimators[0].getCalc();
}

/*
 * --INFO--
 * Address:	80429824
 * Size:	00007C
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

/*
 * --INFO--
 * Address:	804298A0
 * Size:	000020
 */
Matrixf* Joint::getWorldMatrix() { return mModel->getJ3DModel()->mMtxBuffer->getWorldMatrix(mJointIndex); }

/*
 * --INFO--
 * Address:	........
 * Size:	00000C
 */
void Joint::setCallback(JointCallback* cb)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000078
 */
void JointCallback::calc()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00005C
 */
void AnimInfo::attach(Model*, void*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	804298C0
 * Size:	00006C
 * Returns the lowest anim key after the given minimum frame.
 */
KeyEvent* AnimInfo::getLowestAnimKey(f32 minimumFrame)
{
	f32 lowestFrame     = 128000.0f;
	KeyEvent* lowestKey = nullptr;
	FOREACH_NODE(KeyEvent, mKeyEvent.mChild, key)
	{
		f32 frame = key->mFrame; // I have no clue
		if ((int)minimumFrame > (int)frame && frame < lowestFrame) {
			lowestKey   = key;
			lowestFrame = frame;
		}
	}
	return lowestKey;
	/*
	fctiwz   f0, f1
	stwu     r1, -0x10(r1)
	lfs      f2, lbl_80520540@sda21(r2)
	lis      r0, 0x4330
	lwz      r7, 0x38(r3)
	li       r3, 0
	stfd     f0, 8(r1)
	lfd      f1, lbl_80520538@sda21(r2)
	lwz      r6, 0xc(r1)
	b        lbl_8042991C

lbl_804298E8:
	lwz      r5, 0x18(r7)
	stw      r0, 8(r1)
	xoris    r4, r5, 0x8000
	cmpw     r5, r6
	stw      r4, 0xc(r1)
	lfd      f0, 8(r1)
	fsubs    f0, f0, f1
	blt      lbl_80429918
	fcmpo    cr0, f0, f2
	bge      lbl_80429918
	fmr      f2, f0
	mr       r3, r7

lbl_80429918:
	lwz      r7, 4(r7)

lbl_8042991C:
	cmplwi   r7, 0
	bne      lbl_804298E8
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00002C
 */
void AnimInfo::dump()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000064
 */
void AnimInfo::getLastLoopStart(f32)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8042992C
 * Size:	000028
 */
KeyEvent* AnimInfo::getLastLoopStart(KeyEvent* key)
{
	FOREACH_NODE_REVERSE(KeyEvent, key->mPrev, prev)
	{
		if (prev->mType == 0) {
			return prev;
		}
	}
	return nullptr;
}

/*
 * --INFO--
 * Address:	80429954
 * Size:	000028
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

/*
 * --INFO--
 * Address:	8042997C
 * Size:	000020
 */
void AnimInfo::read(Stream& input) { readEditor(input); }

/*
 * --INFO--
 * Address:	8042999C
 * Size:	00010C
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
		KeyEvent* key = new KeyEvent();
		key->mFrame   = frame;
		key->mType    = input.readInt();
		mKeyEvent.add(key);
	}
	JUT_PANICLINE(841, "reached eof\n");
}

/*
 * --INFO--
 * Address:	80429AA8
 * Size:	00013C
 */
AnimMgr* AnimMgr::load(char* path, J3DModelData* modelData, JKRFileLoader* fileLoader)
{
	void* data = JKRDvdRipper::loadToMainRAM(path, nullptr, Switch_0, 0, JKRHeap::sSystemHeap, JKRDvdRipper::ALLOC_DIR_BOTTOM, 0, nullptr,
	                                         nullptr);
	if (data == nullptr) {
		return nullptr;
	}
	RamStream input(data, -1);
	input.resetPosition(true, 1);
	AnimMgr* mgr = new AnimMgr();
	mgr->load(input, modelData, fileLoader, nullptr);
	delete[] data;
	return mgr;
}

/*
 * --INFO--
 * Address:	80429C68
 * Size:	000080
 */
void AnimMgr::dump()
{
	for (int i = 0; i < mCount; i++) {
		getAnimByID(i)->mKeyEvent.getChildCount();
	}
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000CC
 */
AnimMgr* AnimMgr::load(Stream&, Model*, JKRFileLoader*, char*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00005C
 */
JointCallback::~JointCallback()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000004
 */
void JointCallback::init(Vec const&, const Mtx&)
{
	// UNUSED FUNCTION
}

} // namespace SysShape
