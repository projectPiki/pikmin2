#include "P2JME/IllustratedBook.h"
#include "JSystem/J2D/J2DPane.h"
#include "System.h"

namespace P2JME {

namespace IllustratedBook {

/*
 * --INFO--
 * Address:	80454FF8
 * Size:	00004C
 */
void TRenderingProcessor::makeMatrix(Matrixf* mtx, Window::DrawInfo*, f32 angle, Vector3f position)
{
	Vector3f scale(1.0f);
	Vector3f rotate(angle, 0.0f, 0.0f);

	mtx->makeSRT(scale, rotate, position);
}

/*
 * --INFO--
 * Address:	80455044
 * Size:	000060
 */
TControl::TControl()
{
	mCurrentScroll     = 0.0f;
	mCurrentTextHeight = 0.0f;
	mTextBox           = nullptr;
	_6C                = 3.5f;
	mScrollSpeed       = 0.08f;
}

/*
 * --INFO--
 * Address:	804550A4
 * Size:	00003C
 */
bool TControl::onInit()
{
	Window::TControl::onInit();
	initRenderingProcessor(0x200);
	return true;
}

/*
 * --INFO--
 * Address:	804550E0
 * Size:	00003C
 */
void TControl::reset()
{
	Window::TControl::reset();
	mCurrentScroll     = 0.0f;
	mMaxScroll         = 0.0f;
	mCurrentTextHeight = 0.0f;
}

/*
 * --INFO--
 * Address:	8045511C
 * Size:	000028
 */
f32 TControl::getScrollPosition()
{
	if (mMaxScroll >= 0.0f) {
		return 1.0f;
	}
	return mCurrentScroll / mMaxScroll;
}

/*
 * --INFO--
 * Address:	80455144
 * Size:	0000F4
 */
void TControl::scroll(f32 rate)
{
	if (rate != 0.0f) {
		mCurrentScroll += rate * _6C * 60.0f * sys->mDeltaTime;
		if (mCurrentScroll < mMaxScroll) {
			mCurrentScroll = mMaxScroll;
		};
		if (mCurrentScroll > 0.0f) {
			mCurrentScroll = 0.0f;
		}
		f32 calc = mTextRenderProc->_C0;
		int dir;
		if (rate > 0.0f) {
			dir = 0;
		} else {
			dir = -1;
		}
		mCurrentTextHeight = f32(dir + (int)(mCurrentScroll / calc)) * calc;
		if (mCurrentTextHeight < mMaxScroll) {
			mCurrentTextHeight = mMaxScroll;
		}
		if (mCurrentTextHeight > 0.0f) {
			mCurrentTextHeight = 0.0f;
		}
	} else {
		mCurrentScroll = mCurrentTextHeight;
	}
}

/*
 * --INFO--
 * Address:	80455238
 * Size:	0000D0
 */
bool TControl::update(Controller* control1, Controller* control2)
{
	P2JME::TControl::update();
	mMaxScroll = -(mTextRenderProc->_C0 * f32(mTextRenderProc->_A4 + 1) - mTextRenderProc->_3C);

	f32 calc   = mTextRenderProc->_C0;
	mMaxScroll = calc * (int)(mMaxScroll / calc);

	f32 calc2 = mTextRenderProc->_58;
	mTextRenderProc->_58 += mScrollSpeed * (mCurrentScroll - calc2) * calc2 * 60.0f * sys->mDeltaTime;
}

/*
 * --INFO--
 * Address:	80455308
 * Size:	000080
 */
void TControl::setTextBoxInfo(J2DTextBox* pane)
{
	P2ASSERTLINE(212, pane->getTypeID() == PANETYPE_TextBox);
	mTextBox = pane;
	mTextRenderProc->setTextBoxInfo(mTextBox);
}

/*
 * --INFO--
 * Address:	80455388
 * Size:	000078
 */
void TControl::draw(Mtx mtx1, Mtx mtx2)
{
	if (!mtx1) {
		P2ASSERTLINE(225, mTextBox);
		mtx1 = mTextBox->mGlobalMtx;
	}
	P2JME::TControl::draw(mtx1, mtx2);
}

} // namespace IllustratedBook
} // namespace P2JME
