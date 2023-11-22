#include "JSystem/J3D/J3DAnmLoader.h"
#include "JSystem/J3D/J3DAnmTevRegKey.h"
#include "JSystem/J3D/J3DAnmTextureSRTKey.h"
#include "P2Macros.h"
#include "Sys/MatBaseAnimation.h"
#include "Sys/MatBaseAnimator.h"
#include "System.h"

namespace Sys {

/*
 * --INFO--
 * Address:	........
 * Size:	000018
 */
// MatBaseAnimation::MatBaseAnimation()
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	80434020
 * Size:	000084
 */
void MatBaseAnimation::attachResource(void* resource, J3DModelData* modelData)
{
	P2ASSERTLINE(49, !mModelData);
	mModelData = modelData;
	onAttachResource(resource);
}

/*
 * --INFO--
 * Address:	804340A4
 * Size:	000090
 */
f32 MatBaseAnimation::getFrameMax()
{
	P2ASSERTLINE(57, getAnmBase());
	return getAnmBase()->mMaxFrame;
}

/*
 * --INFO--
 * Address:	80434134
 * Size:	00002C
 */
MatTexAnimation::MatTexAnimation()
    : mAnmSRT(nullptr)
    , mAnmMtx(nullptr)
{
}

/*
 * --INFO--
 * Address:	80434160
 * Size:	000088
 */
void MatTexAnimation::onAttachResource(void* resource)
{
	P2ASSERTLINE(75, !mAnmSRT);
	mAnmSRT = static_cast<J3DAnmTextureSRTKey*>(J3DAnmLoaderDataBase::load(resource));

	J3DModelData* model = mModelData;
	mAnmSRT->searchUpdateMaterialID(model);
	model->getMaterialTable().allocTexMtxAnimator(mAnmSRT, &mAnmMtx);
}

/*
 * --INFO--
 * Address:	804341E8
 * Size:	00002C
 */
void MatTexAnimation::set() { mModelData->getMaterialTable().entryTexMtxAnimator(mAnmSRT); }

/*
 * --INFO--
 * Address:	80434214
 * Size:	00002C
 */
bool MatTexAnimation::remove() { return mModelData->getMaterialTable().removeTexMtxAnimator(mAnmSRT); }

/*
 * --INFO--
 * Address:	80434240
 * Size:	000030
 */
MatTevRegAnimation::MatTevRegAnimation()
    : mAnmTevRegKey(nullptr)
    , mTevColorAnm(nullptr)
    , mTevKColorAnm(nullptr)
{
}

/*
 * --INFO--
 * Address:	80434270
 * Size:	00008C
 */
void MatTevRegAnimation::onAttachResource(void* resource)
{
	P2ASSERTLINE(111, !mAnmTevRegKey);
	mAnmTevRegKey = static_cast<J3DAnmTevRegKey*>(J3DAnmLoaderDataBase::load(resource));

	J3DModelData* model = mModelData;
	mAnmTevRegKey->searchUpdateMaterialID(model);
	model->getMaterialTable().allocTevRegAnimator(mAnmTevRegKey, &mTevColorAnm, &mTevKColorAnm);
}

/*
 * --INFO--
 * Address:	804342FC
 * Size:	00002C
 */
void MatTevRegAnimation::set() { mModelData->getMaterialTable().entryTevRegAnimator(mAnmTevRegKey); }

/*
 * --INFO--
 * Address:	80434328
 * Size:	00002C
 */
bool MatTevRegAnimation::remove() { return mModelData->getMaterialTable().removeTevRegAnimator(mAnmTevRegKey); }

/*
 * --INFO--
 * Address:	80434354
 * Size:	000018
 */
MatBaseAnimator::MatBaseAnimator()
    : mAnimation(nullptr)
{
}

/*
 * --INFO--
 * Address:	8043436C
 * Size:	000070
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

/*
 * --INFO--
 * Address:	........
 * Size:	00004C
 */
void MatBaseAnimator::removeMotion()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0001A4
 */
void MatBaseAnimator::forward(f32)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	804343DC
 * Size:	000170
 */
void MatBaseAnimator::setCurrentFrame(f32 frame)
{
	P2ASSERTLINE(201, mAnimation);

	if (frame < 0.0f) {
		frame = 0.0f;
	} else if (frame >= mAnimation->getFrameMax()) {
		frame = mAnimation->getFrameMax();
	}

	mCurrFrame = frame;

	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stfd     f31, 0x20(r1)
	psq_st   f31, 40(r1), 0, qr0
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r31, r3
	fmr      f31, f1
	lwz      r0, 4(r3)
	cmplwi   r0, 0
	bne      lbl_80434428
	lis      r3, lbl_8049A6A0@ha
	lis      r5, lbl_8049A6B4@ha
	addi     r3, r3, lbl_8049A6A0@l
	li       r4, 0xc9
	addi     r5, r5, lbl_8049A6B4@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80434428:
	lfs      f0, lbl_80520788@sda21(r2)
	fcmpo    cr0, f31, f0
	bge      lbl_8043443C
	fmr      f31, f0
	b        lbl_80434528

lbl_8043443C:
	lwz      r30, 4(r31)
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	cmplwi   r3, 0
	bne      lbl_80434478
	lis      r3, lbl_8049A6A0@ha
	lis      r5, lbl_8049A6B4@ha
	addi     r3, r3, lbl_8049A6A0@l
	li       r4, 0x39
	addi     r5, r5, lbl_8049A6B4@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80434478:
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	lha      r3, 6(r3)
	lis      r0, 0x4330
	stw      r0, 8(r1)
	xoris    r0, r3, 0x8000
	lfd      f1, lbl_80520780@sda21(r2)
	stw      r0, 0xc(r1)
	lfd      f0, 8(r1)
	fsubs    f0, f0, f1
	fcmpo    cr0, f31, f0
	cror     2, 1, 2
	bne      lbl_80434528
	lwz      r30, 4(r31)
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	cmplwi   r3, 0
	bne      lbl_804344F4
	lis      r3, lbl_8049A6A0@ha
	lis      r5, lbl_8049A6B4@ha
	addi     r3, r3, lbl_8049A6A0@l
	li       r4, 0x39
	addi     r5, r5, lbl_8049A6B4@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_804344F4:
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	lha      r3, 6(r3)
	lis      r0, 0x4330
	stw      r0, 8(r1)
	xoris    r0, r3, 0x8000
	lfd      f1, lbl_80520780@sda21(r2)
	stw      r0, 0xc(r1)
	lfd      f0, 8(r1)
	fsubs    f31, f0, f1

lbl_80434528:
	stfs     f31, 8(r31)
	psq_l    f31, 40(r1), 0, qr0
	lwz      r0, 0x34(r1)
	lfd      f31, 0x20(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	8043454C
 * Size:	000078
 */
void MatBaseAnimator::animate(f32 rate)
{
	rate *= sys->mDeltaTime;
	if (mAnimation) {
		mAnimation->set();
	}
	do_animate(rate);
}

/*
 * --INFO--
 * Address:	804345C4
 * Size:	000004
 */
void MatBaseAnimator::do_animate(f32) { }

/*
 * --INFO--
 * Address:	804345C8
 * Size:	0001B0
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
		mAnimation->getAnmBase()->mCurrentFrame = mCurrFrame;
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

/*
 * --INFO--
 * Address:	80434778
 * Size:	00000C
 */
void MatRepeatAnimator::onStart() { _0C = 1; }

/*
 * --INFO--
 * Address:	80434784
 * Size:	000328
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
			mAnimation->getAnmBase()->mCurrentFrame = mCurrFrame;
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
			mAnimation->getAnmBase()->mCurrentFrame = mCurrFrame;
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

/*
 * --INFO--
 * Address:	80434AAC
 * Size:	000004
 */
void MatBaseAnimator::onStart() { }

/*
 * --INFO--
 * Address:	80434AB0
 * Size:	000008
 */
J3DAnmBase* MatTevRegAnimation::getAnmBase() { return mAnmTevRegKey; }

/*
 * --INFO--
 * Address:	80434AB8
 * Size:	000008
 */
J3DAnmBase* MatTexAnimation::getAnmBase() { return mAnmSRT; }
} // namespace Sys
