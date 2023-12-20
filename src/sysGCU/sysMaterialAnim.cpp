#include "JSystem/J3D/J3DAnmLoader.h"
#include "JSystem/J3D/J3DAnmTevRegKey.h"
#include "JSystem/J3D/J3DAnmTextureSRTKey.h"
#include "P2Macros.h"
#include "Sys/MatBaseAnimation.h"
#include "Sys/MatBaseAnimator.h"
#include "System.h"

namespace Sys {

/**
 * @note Address: N/A
 * @note Size: 0x18
 */
// MatBaseAnimation::MatBaseAnimation()
// {
// 	// UNUSED FUNCTION
// }

/**
 * @note Address: 0x80434020
 * @note Size: 0x84
 */
void MatBaseAnimation::attachResource(void* resource, J3DModelData* modelData)
{
	P2ASSERTLINE(49, !mModelData);
	mModelData = modelData;
	onAttachResource(resource);
}

/**
 * @note Address: 0x804340A4
 * @note Size: 0x90
 */
f32 MatBaseAnimation::getFrameMax()
{
	P2ASSERTLINE(57, getAnmBase());
	return getAnmBase()->mMaxFrame;
}

/**
 * @note Address: 0x80434134
 * @note Size: 0x2C
 */
MatTexAnimation::MatTexAnimation()
    : mAnmSRT(nullptr)
    , mAnmMtx(nullptr)
{
}

/**
 * @note Address: 0x80434160
 * @note Size: 0x88
 */
void MatTexAnimation::onAttachResource(void* resource)
{
	P2ASSERTLINE(75, !mAnmSRT);
	mAnmSRT = static_cast<J3DAnmTextureSRTKey*>(J3DAnmLoaderDataBase::load(resource));

	J3DModelData* model = mModelData;
	mAnmSRT->searchUpdateMaterialID(model);
	model->getMaterialTable().allocTexMtxAnimator(mAnmSRT, &mAnmMtx);
}

/**
 * @note Address: 0x804341E8
 * @note Size: 0x2C
 */
void MatTexAnimation::set() { mModelData->getMaterialTable().entryTexMtxAnimator(mAnmSRT); }

/**
 * @note Address: 0x80434214
 * @note Size: 0x2C
 */
bool MatTexAnimation::remove() { return mModelData->getMaterialTable().removeTexMtxAnimator(mAnmSRT); }

/**
 * @note Address: 0x80434240
 * @note Size: 0x30
 */
MatTevRegAnimation::MatTevRegAnimation()
    : mAnmTevRegKey(nullptr)
    , mTevColorAnm(nullptr)
    , mTevKColorAnm(nullptr)
{
}

/**
 * @note Address: 0x80434270
 * @note Size: 0x8C
 */
void MatTevRegAnimation::onAttachResource(void* resource)
{
	P2ASSERTLINE(111, !mAnmTevRegKey);
	mAnmTevRegKey = static_cast<J3DAnmTevRegKey*>(J3DAnmLoaderDataBase::load(resource));

	J3DModelData* model = mModelData;
	mAnmTevRegKey->searchUpdateMaterialID(model);
	model->getMaterialTable().allocTevRegAnimator(mAnmTevRegKey, &mTevColorAnm, &mTevKColorAnm);
}

/**
 * @note Address: 0x804342FC
 * @note Size: 0x2C
 */
void MatTevRegAnimation::set() { mModelData->getMaterialTable().entryTevRegAnimator(mAnmTevRegKey); }

/**
 * @note Address: 0x80434328
 * @note Size: 0x2C
 */
bool MatTevRegAnimation::remove() { return mModelData->getMaterialTable().removeTevRegAnimator(mAnmTevRegKey); }

/**
 * @note Address: 0x80434354
 * @note Size: 0x18
 */
MatBaseAnimator::MatBaseAnimator()
    : mAnimation(nullptr)
{
}

/**
 * @note Address: 0x8043436C
 * @note Size: 0x70
 */
void MatBaseAnimator::start(Sys::MatBaseAnimation* animation)
{
	if (mAnimation != nullptr) {
		mAnimation->remove();
	}
	mAnimation = animation;
	mAnimation->set();
	mCurrFrame = 0.0f;
}

/**
 * @note Address: N/A
 * @note Size: 0x4C
 */
void MatBaseAnimator::removeMotion()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x1A4
 */
f32 MatBaseAnimator::forward(f32 frame)
{
	if (frame < 0.0f) {
		frame = 0.0f;
	} else if (frame >= mAnimation->getFrameMax()) {
		frame = mAnimation->getFrameMax();
	}
	return frame;
}

/**
 * @note Address: 0x804343DC
 * @note Size: 0x170
 */
void MatBaseAnimator::setCurrentFrame(f32 frame)
{
	P2ASSERTLINE(201, mAnimation);
	mCurrFrame = forward(frame);
}

/**
 * @note Address: 0x8043454C
 * @note Size: 0x78
 */
void MatBaseAnimator::animate(f32 rate)
{
	rate *= sys->mDeltaTime;
	if (mAnimation) {
		mAnimation->set();
	}
	do_animate(rate);
}

/**
 * @note Address: 0x804345C4
 * @note Size: 0x4
 */
void MatBaseAnimator::do_animate(f32) { }

/**
 * @note Address: 0x804345C8
 * @note Size: 0x1B0
 */
void MatLoopAnimator::do_animate(f32 rate)
{
	u32 state;
	if (!mAnimation) {
		state = 0x8000;
	} else {
		state = 0;
		mCurrFrame += rate;
		if (mCurrFrame < 0.0f) {
			mCurrFrame = 0.0f;
			state      = 1;
		} else {
			if (mAnimation->getFrameMax() >= mCurrFrame) {
				mCurrFrame = mAnimation->getFrameMax();
				state      = 2;
			}
		}
		mAnimation->getAnmBase()->setFrame(mCurrFrame);
	}

	if (state == 2) {
		mCurrFrame = 0.0f;
	}
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stfd     f31, 0x20(r1)
	psq_st   f31, 40(r1), 0, qr0
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r31, r3
	lwz      r0, 4(r3)
	cmplwi   r0, 0
	bne      lbl_80434604
	lis      r3, 0x00008000@ha
	addi     r30, r3, 0x00008000@l
	b        lbl_80434744

lbl_80434604:
	lfs      f2, 8(r31)
	li       r30, 0
	lfs      f0, lbl_80520788@sda21(r2)
	fadds    f1, f2, f1
	stfs     f1, 8(r31)
	lfs      f1, 8(r31)
	fcmpo    cr0, f1, f0
	bge      lbl_80434630
	stfs     f0, 8(r31)
	li       r30, 1
	b        lbl_80434728

lbl_80434630:
	lwz      r29, 4(r31)
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	cmplwi   r3, 0
	bne      lbl_8043466C
	lis      r3, lbl_8049A6A0@ha
	lis      r5, lbl_8049A6B4@ha
	addi     r3, r3, lbl_8049A6A0@l
	li       r4, 0x39
	addi     r5, r5, lbl_8049A6B4@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8043466C:
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	lha      r3, 6(r3)
	lis      r0, 0x4330
	stw      r0, 8(r1)
	xoris    r0, r3, 0x8000
	lfd      f1, lbl_80520780@sda21(r2)
	stw      r0, 0xc(r1)
	lfs      f2, 8(r31)
	lfd      f0, 8(r1)
	fsubs    f0, f0, f1
	fcmpo    cr0, f2, f0
	cror     2, 1, 2
	bne      lbl_80434728
	lwz      r29, 4(r31)
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	cmplwi   r3, 0
	bne      lbl_804346EC
	lis      r3, lbl_8049A6A0@ha
	lis      r5, lbl_8049A6B4@ha
	addi     r3, r3, lbl_8049A6A0@l
	li       r4, 0x39
	addi     r5, r5, lbl_8049A6B4@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_804346EC:
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	lha      r3, 6(r3)
	lis      r0, 0x4330
	stw      r0, 8(r1)
	li       r30, 2
	xoris    r0, r3, 0x8000
	lfd      f1, lbl_80520780@sda21(r2)
	stw      r0, 0xc(r1)
	lfd      f0, 8(r1)
	fsubs    f0, f0, f1
	stfs     f0, 8(r31)

lbl_80434728:
	lwz      r3, 4(r31)
	lfs      f31, 8(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	stfs     f31, 8(r3)

lbl_80434744:
	cmplwi   r30, 2
	bne      lbl_80434754
	lfs      f0, lbl_80520788@sda21(r2)
	stfs     f0, 8(r31)

lbl_80434754:
	psq_l    f31, 40(r1), 0, qr0
	lwz      r0, 0x34(r1)
	lfd      f31, 0x20(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/**
 * @note Address: 0x80434778
 * @note Size: 0xC
 */
void MatRepeatAnimator::onStart() { _0C = 1; }

/**
 * @note Address: 0x80434784
 * @note Size: 0x328
 */
void MatRepeatAnimator::do_animate(f32 rate)
{
	if (_0C) {
		u32 state;
		if (!mAnimation) {
			state = 0x8000;
		} else {
			state = 0;
			mCurrFrame += rate;
			if (mCurrFrame < 0.0f) {
				mCurrFrame = 0.0f;
				state      = 1;
			} else if (mAnimation->getFrameMax() >= mCurrFrame) {
				mCurrFrame = mAnimation->getFrameMax();
				state      = 2;
			}
			mAnimation->getAnmBase()->setFrame(mCurrFrame);
		}

		if (state == 2) {
			_0C = false;
		}
	} else {
		u32 state;
		if (!mAnimation) {
			state = 0x8000;
		} else {
			state = 0;
			mCurrFrame -= rate;
			if (mCurrFrame < 0.0f) {
				mCurrFrame = 0.0f;
				state      = 1;
			} else if (mAnimation->getFrameMax() >= mCurrFrame) {
				mCurrFrame = mAnimation->getFrameMax();
				state      = 2;
			}
			mAnimation->getAnmBase()->setFrame(mCurrFrame);
		}

		if (state == 1) {
			_0C = true;
		}
	}
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stfd     f31, 0x20(r1)
	psq_st   f31, 40(r1), 0, qr0
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r31, r3
	lbz      r0, 0xc(r3)
	cmplwi   r0, 0
	beq      lbl_80434920
	lwz      r0, 4(r31)
	cmplwi   r0, 0
	bne      lbl_804347CC
	lis      r3, 0x00008000@ha
	addi     r30, r3, 0x00008000@l
	b        lbl_8043490C

lbl_804347CC:
	lfs      f2, 8(r31)
	li       r30, 0
	lfs      f0, lbl_80520788@sda21(r2)
	fadds    f1, f2, f1
	stfs     f1, 8(r31)
	lfs      f1, 8(r31)
	fcmpo    cr0, f1, f0
	bge      lbl_804347F8
	stfs     f0, 8(r31)
	li       r30, 1
	b        lbl_804348F0

lbl_804347F8:
	lwz      r29, 4(r31)
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	cmplwi   r3, 0
	bne      lbl_80434834
	lis      r3, lbl_8049A6A0@ha
	lis      r5, lbl_8049A6B4@ha
	addi     r3, r3, lbl_8049A6A0@l
	li       r4, 0x39
	addi     r5, r5, lbl_8049A6B4@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80434834:
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	lha      r3, 6(r3)
	lis      r0, 0x4330
	stw      r0, 8(r1)
	xoris    r0, r3, 0x8000
	lfd      f1, lbl_80520780@sda21(r2)
	stw      r0, 0xc(r1)
	lfs      f2, 8(r31)
	lfd      f0, 8(r1)
	fsubs    f0, f0, f1
	fcmpo    cr0, f2, f0
	cror     2, 1, 2
	bne      lbl_804348F0
	lwz      r29, 4(r31)
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	cmplwi   r3, 0
	bne      lbl_804348B4
	lis      r3, lbl_8049A6A0@ha
	lis      r5, lbl_8049A6B4@ha
	addi     r3, r3, lbl_8049A6A0@l
	li       r4, 0x39
	addi     r5, r5, lbl_8049A6B4@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_804348B4:
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	lha      r3, 6(r3)
	lis      r0, 0x4330
	stw      r0, 8(r1)
	li       r30, 2
	xoris    r0, r3, 0x8000
	lfd      f1, lbl_80520780@sda21(r2)
	stw      r0, 0xc(r1)
	lfd      f0, 8(r1)
	fsubs    f0, f0, f1
	stfs     f0, 8(r31)

lbl_804348F0:
	lwz      r3, 4(r31)
	lfs      f31, 8(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	stfs     f31, 8(r3)

lbl_8043490C:
	cmplwi   r30, 2
	bne      lbl_80434A88
	li       r0, 0
	stb      r0, 0xc(r31)
	b        lbl_80434A88

lbl_80434920:
	lwz      r0, 4(r31)
	cmplwi   r0, 0
	bne      lbl_80434938
	lis      r3, 0x00008000@ha
	addi     r30, r3, 0x00008000@l
	b        lbl_80434A78

lbl_80434938:
	lfs      f2, 8(r31)
	li       r30, 0
	lfs      f0, lbl_80520788@sda21(r2)
	fsubs    f1, f2, f1
	stfs     f1, 8(r31)
	lfs      f1, 8(r31)
	fcmpo    cr0, f1, f0
	bge      lbl_80434964
	stfs     f0, 8(r31)
	li       r30, 1
	b        lbl_80434A5C

lbl_80434964:
	lwz      r29, 4(r31)
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	cmplwi   r3, 0
	bne      lbl_804349A0
	lis      r3, lbl_8049A6A0@ha
	lis      r5, lbl_8049A6B4@ha
	addi     r3, r3, lbl_8049A6A0@l
	li       r4, 0x39
	addi     r5, r5, lbl_8049A6B4@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_804349A0:
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	lha      r3, 6(r3)
	lis      r0, 0x4330
	stw      r0, 8(r1)
	xoris    r0, r3, 0x8000
	lfd      f1, lbl_80520780@sda21(r2)
	stw      r0, 0xc(r1)
	lfs      f2, 8(r31)
	lfd      f0, 8(r1)
	fsubs    f0, f0, f1
	fcmpo    cr0, f2, f0
	cror     2, 1, 2
	bne      lbl_80434A5C
	lwz      r29, 4(r31)
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	cmplwi   r3, 0
	bne      lbl_80434A20
	lis      r3, lbl_8049A6A0@ha
	lis      r5, lbl_8049A6B4@ha
	addi     r3, r3, lbl_8049A6A0@l
	li       r4, 0x39
	addi     r5, r5, lbl_8049A6B4@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80434A20:
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	lha      r3, 6(r3)
	lis      r0, 0x4330
	stw      r0, 8(r1)
	li       r30, 2
	xoris    r0, r3, 0x8000
	lfd      f1, lbl_80520780@sda21(r2)
	stw      r0, 0xc(r1)
	lfd      f0, 8(r1)
	fsubs    f0, f0, f1
	stfs     f0, 8(r31)

lbl_80434A5C:
	lwz      r3, 4(r31)
	lfs      f31, 8(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	stfs     f31, 8(r3)

lbl_80434A78:
	cmplwi   r30, 1
	bne      lbl_80434A88
	li       r0, 1
	stb      r0, 0xc(r31)

lbl_80434A88:
	psq_l    f31, 40(r1), 0, qr0
	lwz      r0, 0x34(r1)
	lfd      f31, 0x20(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/**
 * @note Address: 0x80434AAC
 * @note Size: 0x4
 */
void MatBaseAnimator::onStart() { }

/**
 * @note Address: 0x80434AB0
 * @note Size: 0x8
 */
J3DAnmBase* MatTevRegAnimation::getAnmBase() { return mAnmTevRegKey; }

/**
 * @note Address: 0x80434AB8
 * @note Size: 0x8
 */
J3DAnmBase* MatTexAnimation::getAnmBase() { return mAnmSRT; }
} // namespace Sys
