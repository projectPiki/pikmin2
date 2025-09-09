#include "og/Screen/callbackNodes.h"
#include "System.h"
#include "og/Sound.h"
#include "og/Screen/ogScreen.h"
#include "Dolphin/rand.h"
#include "math.h"
#include "trig.h"

namespace og {
namespace Screen {

/**
 * @note Address: N/A
 * @note Size: 0x84
 */
CallBack_CounterSlot::CallBack_CounterSlot(char** p1, u16 p2, u16 p3, JKRArchive* archive)
    : CallBack_CounterRV(p1, p2, p3, archive)
{
	mSlotStarted    = 0;
	_A9             = 0;
	mSlotFinished   = 0;
	_AB             = 0;
	_AC             = 0;
	mCurrentDigitID = 0;
	mTimer          = 0.0f;
	mUpdateInterval = 0.1f;
	mPuyoParm1      = 2.0f;
	mPuyoParm2      = 35.0f;
	mPuyoParm3      = 0.3f;
	mChangeSoundID  = PSSE_UNSET;
}

/**
 * @note Address: 0x8032A754
 * @note Size: 0x30
 */
void CallBack_CounterSlot::init(J2DScreen* screen, u64 tag1, u64 tag2, u64 tag3, u32* data, bool flag)
{
	CallBack_CounterRV::init(screen, tag1, tag2, tag3, data, flag);
}

/**
 * @note Address: 0x8032A784
 * @note Size: 0x10
 */
void CallBack_CounterSlot::setPuyoParam(f32 parm1, f32 parm2, f32 parm3)
{
	mPuyoParm1 = parm1;
	mPuyoParm2 = parm2;
	mPuyoParm3 = parm3;
}

/**
 * @note Address: 0x8032A794
 * @note Size: 0x270
 */
void CallBack_CounterSlot::update()
{
	int goal = mCurrentDigitNum;
	if (goal > mMaxDisplayDigitNum) {
		goal = mMaxDisplayDigitNum;
	}

	if (mSlotStarted && !_AC) {
		for (int i = 0; i < goal; i++) {
			J2DPane* pane = mCounterDigits[i]->mPicture;
			if (i <= (int)mCurrentDigitID && _A9) {
				pane->show();
			} else {
				pane->hide();
			}
		}
		mTimer += sys->mDeltaTime;
		if (mTimer >= mUpdateInterval) {
			mTimer = 0.0f;
			mCurrentDigitID++;
			if ((int)mCurrentDigitID >= (int)mCurrentDigitNum) {
				if ((int)mCurrentDigitID >= (int)mMaxDisplayDigitNum) {
					mSlotStarted = false;
					_AB          = true;
				}
				mSlotFinished = true;
			} else {
				slot_up(mCurrentDigitID);
			}
		}
		setValue(false, false);
	} else {
		CallBack_CounterRV::update();
		if (!_A9) {
			for (int i = 0; i < goal; i++) {
				hidePicture(i);
			}
		}
	}
}

/**
 * @note Address: 0x8032AA04
 * @note Size: 0x94
 */
void CallBack_CounterSlot::slot_up(int k)
{
	if (k > mMaxDisplayDigitNum) {
		JUT_PANICLINE(169, "slot_up overflow ! (k=%d)\n", k);
	} else if (k != mMaxDisplayDigitNum) {
		mCounterDigits[k]->mScaleMgr->up(mPuyoParm1, mPuyoParm2, mPuyoParm3, 0.0f);
		if ((u32)mChangeSoundID != 0) {
			ogSound->setSE(mChangeSoundID);
		}
	}
}

/**
 * @note Address: 0x8032AA98
 * @note Size: 0xC0
 */
void CallBack_CounterSlot::startSlot(f32 calc)
{
	if (!_AC) {
		mSlotStarted    = true;
		_A9             = true;
		mSlotFinished   = false;
		mCurrentDigitID = 0;
		mTimer          = 0.0f;
		mUpdateInterval = calc;
		mIsPuyoAnim     = true;

		slot_up(0);
	}
}

/**
 * @note Address: 0x8032AB58
 * @note Size: 0x554
 */
void CallBack_CounterSlot::setValue(bool flag1, bool flag2)
{
	/* NON-MATCHING */
	if (mIsBlind) {
		mInitialDisplayValue = 0;
		mCurrDisplayValue    = 0;
	}
	mCurrentDigitNum = CalcKeta(mInitialDisplayValue);

	int counts = mCurrentDigitNum;
	if (counts < mMinDisplayDigitNum) {
		counts = mMinDisplayDigitNum;
	}

	for (int i = 0; i < mMaxDisplayDigitNum; i++) {
		u32 power   = pow(10.0f, (f64)i);
		u16 sujiVal = (mInitialDisplayValue / power) % 10;
		if (mIsBlind) {
			mCounterDigits[i]->setSuji(mImgResources, 10);
		} else if (mDoUseRandomValue) {
			mCounterDigits[i]->setSuji(mImgResources, (u16)randInt(9));
		} else {
			mCounterDigits[i]->setSuji(mImgResources, sujiVal);
		}
		J2DPicture* keta = mCounterDigits[i]->mPicture;
		if (keta) {
			if (i < counts) {
				if (_AC) {
					keta->mIsVisible = true;
				}
				if (i + 1 > mCurrentDigitNum) {
					if (mIsBlind) {
						keta->setAlpha(255);
					} else {
						keta->setAlpha(mZeroAlpha);
					}
				} else {
					keta->setAlpha(255);
					ScaleMgr* smgr = mCounterDigits[i]->mScaleMgr;
					if (flag1) {
						smgr->up(msVal.mScaleRestoreAmplitude, msVal.mScaleAngularFreq, msVal.mScaleMaxRestoreTime, 0.025f * i);
					} else if (flag2) {
						smgr->down();
					}
				}
				mCounterDigits[i]->calcScale();
			} else {
				keta->hide();
			}
		}
	}

	f32 temp  = mPaneScale.x;
	f32 temp3 = 0.0f;

	u16 changedCounts = counts;
	if (changedCounts > mMaxDisplayDigitNum) {
		changedCounts = mMaxDisplayDigitNum;
	}

	if (changedCounts >= 2) {
		f32 temp2 = mPane12DistX * (f32)(changedCounts - 1) + mPaneSize.x;
		if (temp2 > mPane13DistX) {
			temp  = (mPaneScale.x * mPane13DistX) / temp2;
			temp3 = mPaneSize.x / 2 * (1.0f - temp);
		}
	}
	f32 xVal = mPanePosition.x + temp3;
	mPic1->updateScale(temp, mPaneScale.y);
	mPic1->setOffset(xVal, mPanePosition.y);
	mPic1->calcMtx();

	Vector3f angle;
	angle.z = mPic1->mAngleZ;
	angle.x = mPic1->mAngleX;
	angle.y = mPic1->mAngleY;

	JUtility::TColor white = mPic1->getWhite();
	JUtility::TColor black = mPic1->getBlack();
	JGeometry::TBox2f* box = mPic1->getBounds();
	mPaneBounds.x          = box->i.x;
	mPaneBounds.y          = box->i.y;

	for (int i = 0; i < mMaxDisplayDigitNum; i++) {
		J2DPicture* cPane = mCounterDigits[i]->getPicture();
		if (cPane) {
			f32 boxVal = (f32)i * (-mPane12DistX * temp);
			JGeometry::TBox2f cBox(mPaneBounds.x + boxVal, mPaneBounds.y, boxVal + (mPaneBounds.x + mPaneSize.x),
			                       mPaneBounds.y + mPaneSize.y);
			cPane->place(cBox);

			if (mIsPuyoAnim && !_AC) {
				cPane->setBasePosition(J2DPOS_Center);
				CounterKeta* cKeta = mCounterDigits[i];
				cKeta->mSize       = Vector2f(temp, mPaneScale.y);

			} else {
				cPane->setBasePosition((J2DBasePosition)mBasePosition);
				cPane->updateScale(temp, mPaneScale.y);
			}

			cPane->mAngleX = angle.x;
			cPane->mAngleY = angle.y;
			cPane->mAngleZ = angle.z;
			cPane->calcMtx();
			cPane->setWhite(white);
			cPane->setBlack(black);
		}
	}
}

/**
 * @note Address: 0x8032B0AC
 * @note Size: 0x1D0
 */
CallBack_CounterSlot* setCallBack_CounterSlot(P2DScreen::Mgr* mgr, u64 tag, u32* data, u16 digit, bool flag1, bool flag2, JKRArchive* arc)
{
	u64 tag1 = maskTag(tag, 1, 1);
	u64 tag2 = maskTag(tag, 1, 2);
	u64 tag3 = tag2;
	u16 a    = 1;

	for (int i = 3; i <= 10; i++) {
		u64 tag4      = maskTag(tag, 1, i);
		J2DPane* pane = mgr->search(tag4);
		if (!pane) {
			a = i - 1;
			break;
		}
		tag3 = tag4;
		pane->hide();
	}

	CallBack_CounterSlot* slot = new CallBack_CounterSlot(const_cast<char**>(SujiTex32), digit, a, arc);
	slot->init(mgr, tag1, tag2, tag3, data, flag2);
	slot->setPuyoAnim(flag1);
	mgr->addCallBack(tag, slot);
	return slot;
}

/**
 * @note Address: 0x8032B27C
 * @note Size: 0x90
 */
CallBack_CounterSlot::~CallBack_CounterSlot()
{
}

/**
 * @note Address: 0x8032B30C
 * @note Size: 0x34
 */
void CallBack_CounterSlot::setValue()
{
	setValue(false, false);
}
} // namespace Screen
} // namespace og
