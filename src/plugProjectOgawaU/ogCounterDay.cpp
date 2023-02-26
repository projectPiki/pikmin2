#include "JSystem/JUtility/JUTTexture.h"
#include "og/Screen/callbackNodes.h"
#include "og/Screen/ogScreen.h"
#include "trig.h"

namespace og {
namespace Screen {

/*
 * --INFO--
 * Address:	8030D2B8
 * Size:	00004C
 */
CallBack_CounterDay::CallBack_CounterDay(char** p1, u16 p2, JKRArchive* archive)
    : CallBack_CounterRV(p1, p2, 2, archive)
{
	_A8 = nullptr;
}

/*
 * --INFO--
 * Address:	8030D304
 * Size:	0000EC
 */
void CallBack_CounterDay::init(J2DScreen* mgr, u64 tag1, u64 tag2, u64 pictureTag, u32* ptr, bool p7)
{
	_A8 = (J2DPicture*)TagSearch(mgr, pictureTag);

	if (_A8) {
		_A8->hide();
		_A8->setBasePosition(J2DPOS_Center);
	}

	CallBack_CounterRV::init(mgr, tag1, tag2, 0, ptr, true);
	setCenteringMode(ECM_Unknown1);
	setValue();

	if (mPic3) {
		mPic3->hide();
	}

	mPic1->hide();
	mPic2->hide();
}

/*
 * --INFO--
 * Address:	8030D3F0
 * Size:	000168
 */
void CallBack_CounterDay::setValue()
{
	if (mIsPuyoAnim) {
		bool v1 = false;
		bool v2 = false;
		if (mInitialDisplayValue > mCurrDisplayValue) {
			v1 = true;
		} else if (mInitialDisplayValue < mCurrDisplayValue) {
			v2 = true;
		}
		CallBack_CounterRV::setValue(v1, v2);

	} else {
		CallBack_CounterRV::setValue(false, false);
	}

	J2DPicture* picture = mCounters[0]->mPicture;
	_A8->changeTexture(picture->getTexture(0)->_20, 0);

	if (mIsHidden) {
		_A8->hide();
		picture->hide();

	} else if (mInitialDisplayValue >= 10) {
		_A8->hide();
		picture->show();

	} else {
		_A8->show();
		picture->hide();

		JGeometry::TVec2f scale(picture->mScale);
		_A8->setBasePosition(J2DPOS_Center);
		_A8->updateScale(scale.x, scale.y);
	}
}

/*
 * --INFO--
 * Address:	8030D558
 * Size:	000040
 */
void CallBack_CounterDay::show()
{
	if (mIsHidden) {
		mIsHidden = false;
		setValue();
	}
}

/*
 * --INFO--
 * Address:	8030D598
 * Size:	00004C
 */
void CallBack_CounterDay::hide()
{
	mIsHidden = true;
	for (int i = 0; i < mCounterLimit; i++) {
		mCounters[i]->mPicture->hide();
	}
	_A8->hide();
}

/*
 * --INFO--
 * Address:	8030D5E4
 * Size:	000040
 */
void CallBack_CounterDay::update()
{
	mCurrDisplayValue    = mInitialDisplayValue;
	mInitialDisplayValue = *mCountPtr;
	setValue();
}

/*
 * --INFO--
 * Address:	8030D624
 * Size:	0000DC
 */
CallBack_CounterDay* setCallBack_CounterDay(P2DScreen::Mgr* mgr, u64 tag1, u64 tag2, u64 pictureTag, u32* ptr, u16 p6, JKRArchive* archive)
{
	CallBack_CounterDay* counter = new CallBack_CounterDay(const_cast<char**>(SujiTex32), p6, archive);
	counter->init(mgr, tag1, tag2, pictureTag, ptr, true);
	mgr->addCallBack(tag1, counter);
	return counter;
}

} // namespace Screen
} // namespace og
