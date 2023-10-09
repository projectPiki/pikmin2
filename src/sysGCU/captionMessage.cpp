#include "P2JME/Caption.h"
#include "System.h"

namespace P2JME {
namespace Caption {

/*
 * --INFO--
 * Address:	........
 * Size:	000044
 */
TRenderingProcessor::TRenderingProcessor(JMessage::TReference* ref)
    : Window::TRenderingProcessor(ref)
{
	_144 = 1.0f;
}

/*
 * --INFO--
 * Address:	80450FC0
 * Size:	00000C
 */
void TRenderingProcessor::doGetDrawInfo(Window::DrawInfo* info) { info->_20 = 0.266667f; }

/*
 * --INFO--
 * Address:	80450FCC
 * Size:	0001EC
 */
BOOL TRenderingProcessor::doDrawCommon(f32 x, f32 y, Matrixf* mtx1, Matrixf* mtx2)
{
	f32 ret = _144 * 255.0f;
	Matrixf mtx;
	Window::DrawInfo* info = mDrawInfo.searchDrawInfo(_40);
	if (!info) {
		info = mDrawInfo.getDrawInfo(_40);
		doGetDrawInfo(info);
	}

	if (info) {
		Vector3f t(x, y, 0.0f);
		mtx.makeT(t);
		ret = ret * (info->mTimer / info->_20);
	} else {
		Vector3f t(x, y, 0.0f);
		mtx.makeT(t);
	}

	if (mtx2) {
		PSMTXCopy(mtx.mMatrix.mtxView, mtx2->mMatrix.mtxView);
		// offset for shadow
		// f32 shadowX                 = 10.0f;
		// f32 shadowY                 = 5.0f;
		// mtx2->mMatrix.structView.tx = mtx2->mMatrix.structView.tx + 10.0f;
		// mtx2->mMatrix.structView.ty = 5.0f + mtx2->mMatrix.structView.ty;
		// (*mtx2)(0, 3) += 10.0f;
		// (*mtx2)(1, 3) += 5.0f;
		// Vector2f v1(10.0f, 5.0f);
		// mtx2->translateXY(v1);
		// mtx2->translateXY(10.0f, 5.0f);
		// Vector3f translation;
		// mtx2->getTranslation(translation);
		// translation.x += 10.0f;
		// translation.y += 5.0f;

		// f32 x = (*mtx2)(0, 3);
		// x += 10.0f;
		// f32 y = (*mtx2)(1, 3);
		// y += 5.0f;
		// (*mtx2)(0, 3) = x;
		// (*mtx2)(1, 3) = y;

		// f32& x = (*mtx2)(0, 3);
		// f32& y = (*mtx2)(1, 3);
		// x += 10.0f;
		// y += 5.0f;

		// Vector3f vec((*mtx2)(0, 3), (*mtx2)(1, 3), (*mtx2)(2,3));
		Vector2f translation;
		mtx2->getTranslationXY(translation);
		translation += Vector2f(10.0f, 6.0f);
		mtx2->setTranslationXY(translation);

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

	return (u8)((ret >= 0.0f) ? ret + 0.5f : ret - 0.5f);
}

/*
 * --INFO--
 * Address:	804511B8
 * Size:	000054
 */
TControl::TControl()
{
	mState      = 0;
	mStartFrame = 0;
	mEndFrame   = 0;
	_68         = 6;
}

/*
 * --INFO--
 * Address:	8045120C
 * Size:	0000E8
 */
bool TControl::onInit()
{
	if (gP2JMEMgr) {
		setFont(gP2JMEMgr->mFont);
		setRubyFont(gP2JMEMgr->mFont);
	}
	initRenderingProcessor(0x100);
	_50 = 3.0f;
	setLocate(0, 0);
	mTextRenderProc->_38 = sys->getRenderModeObj()->fbWidth;
	mTextRenderProc->_3C = 200.0f;
	mTextRenderProc->initFlagsA();
	mTextRenderProc->initFlagsB();
	mState = 0;
	return true;
}

/*
 * --INFO--
 * Address:	804512F4
 * Size:	000034
 */
void TControl::reset()
{
	Window::TControl::reset();
	mState = 0;
}

/*
 * --INFO--
 * Address:	80451328
 * Size:	000128
 */
bool TControl::updateSetFrame(long frame)
{
	bool ret = false;
	if (mState == 0 && frame >= mStartFrame && frame <= mEndFrame + _68) {
		mState = 1;
	}

	if (mState != 0) {
		if (frame < mStartFrame || frame > mEndFrame + _68) {
			mState = 0;
		} else {
			ret = P2JME::TControl::update();
			if (frame > mEndFrame) {
				mState                                                            = 2;
				static_cast<Caption::TRenderingProcessor*>(mTextRenderProc)->_144 = 1.0f - f32(frame - mEndFrame) / f32(_68);
			} else {
				static_cast<Caption::TRenderingProcessor*>(mTextRenderProc)->_144 = 1.0f;
				mState                                                            = 1;
			}
		}
	}
	return ret;
}

/*
 * --INFO--
 * Address:	80451450
 * Size:	000084
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

/*
 * --INFO--
 * Address:	804514D4
 * Size:	000058
 */
void TControl::start(char* name, long start, long end)
{
	setMessageID(name);
	mStartFrame = start;
	mEndFrame   = end;
}

} // namespace Caption
} // namespace P2JME
