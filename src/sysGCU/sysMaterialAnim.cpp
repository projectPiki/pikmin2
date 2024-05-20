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
	return getAnmBase()->getTotalFrameCount();
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
int MatBaseAnimator::forward(f32 rate)
{
	int state;
	if (!mAnimation) {
		state = NoAnimation;
	} else {
		state = Playing;
		mCurrFrame += rate;
		if (mCurrFrame < 0.0f) {
			mCurrFrame = 0.0f;
			state      = AtStart;
		} else if (mCurrFrame >= mAnimation->getFrameMax()) {
			mCurrFrame = mAnimation->getFrameMax();
			state      = AtEnd;
		}
		mAnimation->getAnmBase()->setFrame(mCurrFrame);
	}
	return state;
}

/**
 * @note Address: 0x804343DC
 * @note Size: 0x170
 */
void MatBaseAnimator::setCurrentFrame(f32 frame)
{
	P2ASSERTLINE(201, mAnimation);

	if (frame < 0.0f) {
		frame = 0.0f;
	} else if (frame >= mAnimation->getFrameMax()) {
		frame = mAnimation->getFrameMax();
	}
	mCurrFrame = (frame);
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
void MatBaseAnimator::do_animate(f32 rate) { }

/**
 * @note Address: 0x804345C8
 * @note Size: 0x1B0
 */
void MatLoopAnimator::do_animate(f32 rate)
{
	u32 state = forward(rate);

	if (state == MatBaseAnimator::AtEnd) {
		mCurrFrame = 0.0f;
	}
}

/**
 * @note Address: 0x80434778
 * @note Size: 0xC
 */
void MatRepeatAnimator::onStart() { mStarted = true; }

/**
 * @note Address: 0x80434784
 * @note Size: 0x328
 */
void MatRepeatAnimator::do_animate(f32 rate)
{
	if (mStarted) {
		u32 state = forward(rate);
		if (state == MatBaseAnimator::AtEnd) {
			mStarted = false;
		}
	} else {
		u32 state = backward(rate);
		if (state == MatBaseAnimator::AtStart) {
			mStarted = true;
		}
	}
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
