#include "P2JME/Caption.h"
#include "System.h"

namespace P2JME {
namespace Caption {

/**
 * @note Address: N/A
 * @note Size: 0x44
 */
TRenderingProcessor::TRenderingProcessor(JMessage::TReference* ref)
    : Window::TRenderingProcessor(ref)
{
	mDrawAlphaLevel = 1.0f;
}

/**
 * @note Address: 0x80450FC0
 * @note Size: 0xC
 */
void TRenderingProcessor::doGetDrawInfo(Window::DrawInfo* info)
{
	info->mTimeLimit = 0.26666669f;
}

/**
 * @note Address: 0x80450FCC
 * @note Size: 0x1EC
 */
BOOL TRenderingProcessor::doDrawCommon(f32 x, f32 y, Matrixf* mtx1, Matrixf* mtx2)
{
	f32 ret = mDrawAlphaLevel * 255.0f;
	Matrixf mtx;
	Window::DrawInfo* info = mDrawInfo.searchDrawInfo(mInfoIndex);
	if (!info) {
		info = mDrawInfo.getDrawInfo(mInfoIndex);
		doGetDrawInfo(info);
	}

	if (info) {
		Vector3f t(x, y, 0.0f);
		mtx.makeT(t);
		ret = ret * (info->mTimer / info->mTimeLimit);
	} else {
		Vector3f t(x, y, 0.0f);
		mtx.makeT(t);
	}

	if (mtx2) {
		PSMTXCopy(mtx.mMatrix.mtxView, mtx2->mMatrix.mtxView);

		Vector3f translation = mtx2->getTranslation();
		translation.x += 10.0f;
		translation.y += 5.0f;
		mtx2->setTranslation(translation);

		PSMTXConcat(mMtx1->mMatrix.mtxView, mtx2->mMatrix.mtxView, mtx2->mMatrix.mtxView);
		PSMTXConcat(mMtx2->mMatrix.mtxView, mtx2->mMatrix.mtxView, mtx2->mMatrix.mtxView);
	}
	PSMTXConcat(mMtx1->mMatrix.mtxView, mtx.mMatrix.mtxView, mtx.mMatrix.mtxView);
	PSMTXConcat(mMtx2->mMatrix.mtxView, mtx.mMatrix.mtxView, mtx.mMatrix.mtxView);

	if (mtx1) {
		PSMTXCopy(mtx.mMatrix.mtxView, mtx1->mMatrix.mtxView);
	} else {
		GXLoadPosMtxImm(mtx.mMatrix.mtxView, 0);
	}

	return (u8)(ROUND_F32_TO_U8(ret));
}

/**
 * @note Address: 0x804511B8
 * @note Size: 0x54
 */
TControl::TControl()
{
	mState              = 0;
	mStartFrame         = 0;
	mEndFrame           = 0;
	mFadeoutFrameLength = 6;
}

/**
 * @note Address: 0x8045120C
 * @note Size: 0xE8
 */
bool TControl::onInit()
{
	if (gP2JMEMgr) {
		setFont(gP2JMEMgr->mFont);
		setRubyFont(gP2JMEMgr->mFont);
	}
	initRenderingProcessor(256); // max 256 characters can be animated at once
	_50 = 3.0f;
	setLocate(0, 0);
	mTextRenderProc->mTextBoxWidth  = sys->getRenderModeObj()->fbWidth;
	mTextRenderProc->mTextBoxHeight = 200.0f;
	mTextRenderProc->initFlagsA();
	mTextRenderProc->initFlagsB();
	mState = 0;
	return true;
}

/**
 * @note Address: 0x804512F4
 * @note Size: 0x34
 */
void TControl::reset()
{
	Window::TControl::reset();
	mState = 0;
}

/**
 * @note Address: 0x80451328
 * @note Size: 0x128
 */
bool TControl::updateSetFrame(s32 frame)
{
	bool ret = false;
	if (mState == 0 && frame >= mStartFrame && frame <= mEndFrame + mFadeoutFrameLength) {
		mState = 1;
	}

	if (mState != 0) {
		if (frame < mStartFrame || frame > mEndFrame + mFadeoutFrameLength) {
			mState = 0;
		} else {
			ret = P2JME::TControl::update();
			if (frame > mEndFrame) {
				mState = 2;
				static_cast<Caption::TRenderingProcessor*>(mTextRenderProc)->mDrawAlphaLevel
				    = 1.0f - f32(frame - mEndFrame) / f32(mFadeoutFrameLength);
			} else {
				static_cast<Caption::TRenderingProcessor*>(mTextRenderProc)->mDrawAlphaLevel = 1.0f;
				mState                                                                       = 1;
			}
		}
	}
	return ret;
}

/**
 * @note Address: 0x80451450
 * @note Size: 0x84
 */
void TControl::draw(Graphics& gfx)
{
	if (mState != 0) {
		Matrixf mtx;
		Vector3f pos(0.0f, 290.0f, 0.0f);
		mtx.makeT(pos);
		gfx.mPerspGraph.setPort();
		P2JME::TControl::draw(mtx.mMatrix.mtxView, gfx.mPerspGraph.mPosMtx);
	}
}

/**
 * @note Address: 0x804514D4
 * @note Size: 0x58
 */
void TControl::start(char* name, s32 start, s32 end)
{
	setMessageID(name);
	mStartFrame = start;
	mEndFrame   = end;
}

} // namespace Caption
} // namespace P2JME
