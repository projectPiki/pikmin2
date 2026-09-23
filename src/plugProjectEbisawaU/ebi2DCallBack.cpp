#include "JSystem/J2D/J2DAnm.h"
#include "JSystem/J2D/J2DAnmLoader.h"
#include "JSystem/JKernel/JKRArchive.h"
#include "JSystem/JKernel/JKRFileLoader.h"
#include "ebi/E2DCallBack.h"
#include "ebi/Utility.h"
#include "Dolphin/rand.h"
#include "P2Macros.h"

namespace ebi {

/**
 * @note Address: 0x803D068C
 * @note Size: 0x60
 */
void E2DCallBack_Purupuru::do_update()
{
	if (mPane) {
		mScale = mScaleMgr.calc();
		mPane->updateScale(mScale);
	}
}

/**
 * @note Address: 0x803D06EC
 * @note Size: 0x2CC
 */
void E2DCallBack_BlinkFontColor::do_update()
{
	if (!_49 || !(mColor1Weight < 0.001f)) {
		if (mIsTowardColor1) {
			mColor1Weight += mSpeed;
			if (mColor1Weight >= 1.0f) {
				mColor1Weight   = 1.0f;
				mIsTowardColor1 = false;
			}
		} else {
			mColor1Weight -= mSpeed;
			if (mColor1Weight <= 0.0f) {
				mColor1Weight   = 0.0f;
				mIsTowardColor1 = true;
			}
		}
	}

	if (mPane && mPane->getTypeID() == PANETYPE_TextBox) {
		JUtility::TColor color1;
		JUtility::TColor color2;
		JUtility::TColor white;
		JUtility::TColor black;

		f32 weight1 = mColor1Weight;
		f32 weight0 = 1.0f - weight1;
		EUTColor_complement(mFonts[0].mCol1, mFonts[1].mCol1, weight0, weight1, &color1);
		EUTColor_complement(mFonts[0].mCol2, mFonts[1].mCol2, weight0, weight1, &color2);
		EUTColor_complement(mFonts[0].mWhite, mFonts[1].mWhite, weight0, weight1, &white);
		EUTColor_complement(mFonts[0].mBlack, mFonts[1].mBlack, weight0, weight1, &black);

		E2DFullFontColor fontColor;
		fontColor.set(color1, color2, white, black);

		fontColor.applyColorsToPane(static_cast<J2DTextBox*>(mPane));
	}
}

/**
 * @note Address: 0x803D09B8
 * @note Size: 0x118
 */
void E2DCallBack_BlinkAlpha::do_update()
{
	if (!_29 || !(mWeight < 0.001f)) {
		if (mIsTowardAlpha0) {
			mWeight += mSpeed;
			if (mWeight >= 1.0f) {
				mWeight         = 1.0f;
				mIsTowardAlpha0 = false;
			}
		} else {
			mWeight -= mSpeed;
			if (mWeight <= 0.0f) {
				mWeight         = 0.0f;
				mIsTowardAlpha0 = true;
			}
		}
	}

	if (mPane) {
		mPane->setAlpha((u8)((mAlpha0 - mAlpha1) * getAlphaWeight() + mAlpha1));
	}
}

/**
 * @note Address: 0x803D0AD0
 * @note Size: 0xC8
 */
void E2DCallBack_AnmBase::loadAnm(char* path, JKRArchive* archive, s32 frame, s32 maxFrame)
{
	void* resource = JKRFileLoader::getGlbResource(path, archive);
	P2ASSERTLINE(74, resource);
	mAnim             = J2DAnmLoaderDataBase::load(resource);
	mFrameCtrl.mStart = (s16)frame;
	mFrameCtrl.mFrame = (s16)frame;
	mFrameCtrl.mLoop  = (s16)frame;

	if (mAnim->getFrameMax() < maxFrame) {
		maxFrame = mAnim->getFrameMax();
	}
	mFrameCtrl.mEnd = maxFrame;
}

/**
 * @note Address: 0x803D0B98
 * @note Size: 0x10C
 */
void E2DCallBack_AnmBase::play(f32 speed, J3DAnmAttr attr, bool doPlayFromStart)
{
	P2ASSERTLINE(90, mPane);
	P2ASSERTLINE(91, mAnim);
	mIsEnabled = true;
	mPane->setAnimation(mAnim);
	mFrameCtrl.mAttribute = attr;
	mFrameCtrl.mRate      = speed;

	if (doPlayFromStart) {
		mFrameCtrl.mFrame = mFrameCtrl.mStart;
	}

	mAnim->setFrame(mFrameCtrl.mFrame);
	mIsFinished = false;
}

/**
 * @note Address: 0x803D0CA4
 * @note Size: 0x110
 */
void E2DCallBack_AnmBase::playBack(f32 speed, bool doPlayFromEnd)
{
	P2ASSERTLINE(107, mPane);
	P2ASSERTLINE(108, mAnim);
	mIsEnabled = true;
	mPane->setAnimation(mAnim);
	mFrameCtrl.mAttribute = J3DAA_UNKNOWN_3;
	mFrameCtrl.mRate      = -FABS(speed);
	if (doPlayFromEnd) {
		mFrameCtrl.mFrame = mFrameCtrl.mEnd;
	}

	mAnim->setFrame(mFrameCtrl.mFrame);
	mIsFinished = false;
}

/**
 * @note Address: 0x803D0DB4
 * @note Size: 0x14
 */
void E2DCallBack_AnmBase::stop()
{
	mIsEnabled  = false;
	mIsFinished = true;
}

/**
 * @note Address: N/A
 * @note Size: 0x50
 */
void E2DCallBack_AnmBase::disconnect()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x803D0DC8
 * @note Size: 0x3C
 */
void E2DCallBack_AnmBase::setStartFrame()
{
	mFrameCtrl.mFrame = mFrameCtrl.mStart;
	mAnim->setFrame(mFrameCtrl.mFrame);
}

/**
 * @note Address: 0x803D0E04
 * @note Size: 0x3C
 */
void E2DCallBack_AnmBase::setEndFrame()
{
	mFrameCtrl.mFrame = mFrameCtrl.mEnd;
	mAnim->setFrame(mFrameCtrl.mFrame);
}

/**
 * @note Address: 0x803D0E40
 * @note Size: 0xC0
 */
void E2DCallBack_AnmBase::setRandFrame()
{
	f32 startFrame    = mFrameCtrl.mStart;
	f32 endFrame      = mFrameCtrl.mEnd;
	mFrameCtrl.mFrame = randEbisawaFloat() * (endFrame - startFrame) + startFrame;
	mAnim->setFrame(mFrameCtrl.mFrame);
}

/**
 * @note Address: 0x803D0F00
 * @note Size: 0x54
 */
f32 E2DCallBack_AnmBase::getPlayFinRate()
{
	f32 startFrame = mFrameCtrl.mStart;
	f32 endFrame   = mFrameCtrl.mEnd;
	return (mFrameCtrl.mFrame - startFrame) / (endFrame - startFrame);
}

/**
 * @note Address: 0x803D0F54
 * @note Size: 0x5C
 */
void E2DCallBack_AnmBase::do_update()
{
	if (mPane) {
		mFrameCtrl.update();
		mAnim->setFrame(mFrameCtrl.mFrame);
	}
	if (mFrameCtrl.mState & 1) {
		mIsFinished = true;
	}
}

/**
 * @note Address: 0x803D0FB0
 * @note Size: 0x8
 */
bool E2DCallBack_AnmBase::isFinish()
{
	return mIsFinished;
}

/**
 * @note Address: 0x803D0FB8
 * @note Size: 0x14C
 */
void E2DCallBack_WindowCursor::do_update()
{
	if (mPane) {
		if (mCounter) {
			mCounter--;
		}

		f32 val = (mCounterMax) ? (f32)mCounter / (f32)mCounterMax : 0.0f;

		JGeometry::TBox2f box;
		box.i.x = (1.0f - val) * (mBounds2.i.x - mBounds1.i.x) + mBounds1.i.x;
		box.i.y = (1.0f - val) * (mBounds2.i.y - mBounds1.i.y) + mBounds1.i.y;
		box.f.x = (1.0f - val) * (mBounds2.f.x - mBounds1.f.x) + mBounds1.f.x;
		box.f.y = (1.0f - val) * (mBounds2.f.y - mBounds1.f.y) + mBounds1.f.y;
		mPane->place(box);
		mScale = mScaleMgr.calc();
		mPane->updateScale(mScale);

		if (mWindowPane) {
			mWindowPane->updateScale(mScale * 1.1f);
		}
	}
}
} // namespace ebi
