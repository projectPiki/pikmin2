#include "JSystem/JUtility/JUTTexture.h"
#include "og/Screen/callbackNodes.h"
#include "og/Screen/ogScreen.h"
#include "trig.h"

namespace og {
namespace Screen {

/**
 * @note Address: 0x8030D2B8
 * @note Size: 0x4C
 */
CallBack_CounterDay::CallBack_CounterDay(char** p1, u16 p2, JKRArchive* archive)
    : CallBack_CounterRV(p1, p2, 2, archive)
{
	mDayPic = nullptr;
}

/**
 * @note Address: 0x8030D304
 * @note Size: 0xEC
 */
void CallBack_CounterDay::init(J2DScreen* mgr, u64 tag1, u64 tag2, u64 pictureTag, u32* ptr, bool p7)
{
	mDayPic = (J2DPicture*)TagSearch(mgr, pictureTag);

	if (mDayPic) {
		mDayPic->hide();
		mDayPic->setBasePosition(J2DPOS_Center);
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

/**
 * @note Address: 0x8030D3F0
 * @note Size: 0x168
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

	J2DPicture* picture = mCounterDigits[0]->mPicture;
	mDayPic->changeTexture(picture->getTexture(0)->mTexInfo, 0);

	if (mIsHidden) {
		mDayPic->hide();
		picture->hide();

	} else if (mInitialDisplayValue >= 10) {
		mDayPic->hide();
		picture->show();

	} else {
		mDayPic->show();
		picture->hide();

		JGeometry::TVec2f scale(picture->mScale);
		mDayPic->setBasePosition(J2DPOS_Center);
		mDayPic->updateScale(scale.x, scale.y);
	}
}

/**
 * @note Address: 0x8030D558
 * @note Size: 0x40
 */
void CallBack_CounterDay::show()
{
	if (mIsHidden) {
		mIsHidden = false;
		setValue();
	}
}

/**
 * @note Address: 0x8030D598
 * @note Size: 0x4C
 */
void CallBack_CounterDay::hide()
{
	mIsHidden = true;
	for (int i = 0; i < mMaxDisplayDigitNum; i++) {
		mCounterDigits[i]->mPicture->hide();
	}
	mDayPic->hide();
}

/**
 * @note Address: 0x8030D5E4
 * @note Size: 0x40
 */
void CallBack_CounterDay::update()
{
	mCurrDisplayValue    = mInitialDisplayValue;
	mInitialDisplayValue = *mCountPtr;
	setValue();
}

/**
 * @note Address: 0x8030D624
 * @note Size: 0xDC
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
