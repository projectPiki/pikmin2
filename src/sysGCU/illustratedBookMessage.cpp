#include "P2JME/IllustratedBook.h"
#include "JSystem/J2D/J2DTextBox.h"
#include "System.h"

namespace P2JME {
namespace IllustratedBook {

/**
 * @note Address: N/A
 * @note Size: 0x48
 */
TSequenceProcessor::TSequenceProcessor(JMessage::TReference* ref, JMessage::TControl* owner)
    : TSeqProcNoSeq(ref, owner)
{
}

/**
 * @note Address: 0x80454FF8
 * @note Size: 0x4C
 */
void TRenderingProcessor::makeMatrix(Matrixf* mtx, Window::DrawInfo*, f32 angle, Vector3f position)
{
	Vector3f scale(1.0f);
	Vector3f rotate(angle, 0.0f, 0.0f);

	mtx->makeSRT(scale, rotate, position);
}

/**
 * @note Address: 0x80455044
 * @note Size: 0x60
 */
TControl::TControl()
{
	mCurrentScroll     = 0.0f;
	mCurrentTextHeight = 0.0f;
	mTextBox           = nullptr;
	_6C                = 3.5f;
	mScrollSpeed       = 0.08f;
}

/**
 * @note Address: 0x804550A4
 * @note Size: 0x3C
 */
bool TControl::onInit()
{
	Window::TControl::onInit();
	initRenderingProcessor(0x200);
	return true;
}

/**
 * @note Address: 0x804550E0
 * @note Size: 0x3C
 */
void TControl::reset()
{
	Window::TControl::reset();
	mCurrentScroll     = 0.0f;
	mMaxScroll         = 0.0f;
	mCurrentTextHeight = 0.0f;
}

/**
 * @note Address: 0x8045511C
 * @note Size: 0x28
 */
f32 TControl::getScrollPosition()
{
	if (mMaxScroll >= 0.0f) {
		return 1.0f;
	}
	return mCurrentScroll / mMaxScroll;
}

/**
 * @note Address: 0x80455144
 * @note Size: 0xF4
 */
void TControl::scroll(f32 rate)
{
	if (rate != 0.0f) {
		mCurrentScroll += rate * _6C * 60.0f * sys->getDeltaTime();
		if (mCurrentScroll < mMaxScroll) {
			mCurrentScroll = mMaxScroll;
		}
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
		f32 height         = (f32)(dir + (int)(mCurrentScroll / calc));
		mCurrentTextHeight = height * calc;
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

/**
 * @note Address: 0x80455238
 * @note Size: 0xD0
 */
bool TControl::update(Controller* control1, Controller* control2)
{
	P2JME::TControl::update();
	mMaxScroll = mTextRenderProc->mTextBoxHeight - mTextRenderProc->_C0 * (f32)(mTextRenderProc->mCurrLine + 1);

	f32 calc   = mTextRenderProc->_C0;
	f32 scroll = (int)(mMaxScroll / calc);
	mMaxScroll = scroll * calc;

	f32 calc2            = mTextRenderProc->_58;
	f32 val              = mScrollSpeed * (mCurrentScroll - calc2) * 60.0f * sys->getDeltaTime();
	mTextRenderProc->_58 = val + mTextRenderProc->_58;
}

/**
 * @note Address: 0x80455308
 * @note Size: 0x80
 */
void TControl::setTextBoxInfo(J2DTextBox* pane)
{
	P2ASSERTLINE(212, pane->getTypeID() == PANETYPE_TextBox);
	mTextBox = pane;
	mTextRenderProc->setTextBoxInfo(mTextBox);
}

/**
 * @note Address: 0x80455388
 * @note Size: 0x78
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
