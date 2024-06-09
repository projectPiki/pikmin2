#include "og/Screen/callbackNodes.h"
#include "og/Screen/ogScreen.h"
#include "og/Sound.h"
#include "math.h"
#include "Dolphin/rand.h"
#include "trig.h"

namespace og {
namespace Screen {

/**
 * @note Address: 0x8030B524
 * @note Size: 0x1E0
 */
CallBack_CounterRV::CallBack_CounterRV(char** characterTexturePaths, u16 maxDigits, u16 minDigits, JKRArchive* archive)
    : P2DScreen::CallBackNode()
{
	mCharacterTexturePaths = characterTexturePaths;
	if (maxDigits > 10) {
		maxDigits = 10;
	}
	if (maxDigits < 2) {
		maxDigits = 2;
	}
	mMaxDisplayDigitNum  = maxDigits;
	mMinDisplayDigitNum  = minDigits;
	mCountPtr            = nullptr;
	mInitialDisplayValue = 0;
	mCurrDisplayValue    = 0;
	mImgResources        = og::Screen::makeSujiFontTable(mCharacterTexturePaths, archive);
	mCounterDigits       = new CounterKeta*[maxDigits];
	for (int i = 0; i < maxDigits; i++) {
		mCounterDigits[i] = nullptr;
	}
	mPic1             = nullptr;
	mPic2             = nullptr;
	mPic3             = nullptr;
	mIsPuyoAnim       = false;
	mIsPuyoAnimZero   = false;
	mMotherPane       = nullptr;
	mIsBlind          = false;
	mIsHidden         = false;
	mIsMother         = false;
	mDoUseRandomValue = false;
	mZeroAlpha        = 0;
	mCenteringMode    = ECM_Unknown0;
	mScaleUpSoundID   = PSSE_UNSET;
	mScaleDownSoundID = PSSE_UNSET;
	mIsInitialized    = 1;
	mPaneOffsetX      = 0.0f;
	mPaneOffsetY      = 0.0f;
}

/**
 * @note Address: 0x8030B704
 * @note Size: 0x40
 */
void CallBack_CounterRV::show()
{
	if (mIsHidden) {
		mIsHidden = false;
		setValue();
	}
}

/**
 * @note Address: 0x8030B778
 * @note Size: 0x48
 */
void CallBack_CounterRV::hide()
{
	mIsHidden = true;
	for (int i = 0; i < mMaxDisplayDigitNum; i++) {
		if (mCounterDigits[i]) {
			mCounterDigits[i]->mPicture->hide();
		}
	}
}

/**
 * @note Address: 0x8030B7C0
 * @note Size: 0x18
 */
J2DPane* CallBack_CounterRV::getMotherPane()
{
	J2DPane* ret = mMotherPane;
	if (mIsMother) {
		return ret;
	}
	return nullptr;
}

/**
 * @note Address: 0x8030B7D8
 * @note Size: 0x8
 */
void CallBack_CounterRV::setPuyoAnim(bool isPuyoAnim) { mIsPuyoAnim = isPuyoAnim; }

/**
 * @note Address: 0x8030B7E0
 * @note Size: 0x8
 */
void CallBack_CounterRV::setPuyoAnimZero(bool isPuyoAnimZero) { mIsPuyoAnimZero = isPuyoAnimZero; }

/**
 * @note Address: 0x8030B7E8
 * @note Size: 0x8
 */
void CallBack_CounterRV::setBlind(bool isBlind) { mIsBlind = isBlind; }

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
void CallBack_CounterRV::setRandMode(bool useRandVal)
{
	mDoUseRandomValue = useRandVal;
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x18
 */
void CallBack_CounterRV::setValPtr(u32*)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x8030B7F0
 * @note Size: 0x8
 */
void CallBack_CounterRV::setZeroAlpha(u8 alpha) { mZeroAlpha = alpha; }

/**
 * @note Address: 0x8030B7F8
 * @note Size: 0xE4
 */
void CallBack_CounterRV::startPuyoUp(f32 scaleDelayFactor)
{
	setPuyoAnim(true);
	u16 max = mCurrentDigitNum;
	if (max >= mMaxDisplayDigitNum) {
		max = mMaxDisplayDigitNum;
	}
	for (int i = 0; i < max; i++) {
		mCounterDigits[i]->mScaleMgr->up(msVal.mScaleRestoreAmplitude, msVal.mScaleAngularFreq, msVal.mScaleMaxRestoreTime,
		                                 (0.025f * f32(i)) * scaleDelayFactor);
	}
}

/**
 * @note Address: 0x8030B8DC
 * @note Size: 0x8
 */
void CallBack_CounterRV::setCenteringMode(EnumCenteringMode centeringMode) { mCenteringMode = centeringMode; }

/**
 * @note Address: 0x8030B8E4
 * @note Size: 0x4D0
 */
void CallBack_CounterRV::init(J2DScreen* screen, u64 tag1, u64 tag2, u64 tag3, u32* countPtr, bool hasMother)
{
	mIsMother = hasMother;
	mPic1     = static_cast<J2DPictureEx*>(og::Screen::TagSearch(screen, tag1));
	mPic2     = og::Screen::TagSearch(screen, tag2);
	mPic1->setBasePosition(J2DPOS_Center);
	mPic2->setBasePosition(J2DPOS_Center);

	if (tag3) {
		mPic3 = og::Screen::TagSearch(screen, tag3);
	} else {
		mPic3 = mPic2;
	}
	mCountPtr            = countPtr;
	mInitialDisplayValue = *countPtr;
	mCurrDisplayValue    = mInitialDisplayValue;
	mPaneScale.x         = mPic1->mScale.x;
	mPaneScale.y         = mPic1->mScale.y;
	mPanePosition.x      = mPic1->mOffset.x;
	mPanePosition.y      = mPic1->mOffset.y;
	mPaneSize.x          = mPic1->getWidth();
	mPaneSize.y          = mPic1->getHeight();
	mBasePosition        = mPic1->mBasePosition;
	mPaneAlpha           = mPic1->mAlpha;
	bool alphatype       = mPic1->mIsInfluencedAlpha;

	mPane12DistX = absF(mPanePosition.x - mPic2->mOffset.x);
	mPane13DistX = mPaneSize.x + absF(mPanePosition.x - mPic3->mOffset.x);
	mKetaScaleX  = 1.0f;
	mPic1->hide();
	mPic2->hide();
	mPic3->hide();
	J2DPane* parent        = mPic1->getParentPane();
	JGeometry::TBox2f* box = mPic1->getBounds();
	mMotherPane            = new J2DPane;
	parent->appendChild(mMotherPane);
	mPic1->calcMtx();
	mPaneBounds.x = box->i.x;
	mPaneBounds.y = box->i.y;
	if (hasMother) {
		for (int i = 0; i < mMaxDisplayDigitNum; i++) {
			J2DPane* newpane = CopyPictureToPane(mPic1, mMotherPane, mPanePosition.x, mPanePosition.y, 'ogPic_0' + i);
			newpane->setBasePosition((J2DBasePosition)mBasePosition);
			newpane->setInfluencedAlpha(alphatype, false);
			mCounterDigits[i] = new CounterKeta(static_cast<J2DPicture*>(newpane));
		}
	} else {

		J2DPane* newpane = CopyPictureToPane(mPic1, mMotherPane, mPanePosition.x, mPanePosition.y, 'ogPic_0');
		newpane->setBasePosition((J2DBasePosition)mBasePosition);
		newpane->setInfluencedAlpha(alphatype, false);
		mCounterDigits[0] = new CounterKeta(static_cast<J2DPicture*>(newpane));

		for (int i = 1; i < mMinDisplayDigitNum; i++) {
			J2DPane* newpane  = screen->search(tag1 + i);
			mCounterDigits[i] = new CounterKeta(static_cast<J2DPicture*>(newpane));
		}
		for (int i = mMinDisplayDigitNum; i < mMaxDisplayDigitNum; i++) {
			J2DPane* newpane = CopyPictureToPane(mPic1, mMotherPane, mPanePosition.x, mPanePosition.y, 'ogPic_0' + i);
			newpane->setBasePosition((J2DBasePosition)mBasePosition);
			newpane->setInfluencedAlpha(alphatype, false);
			mCounterDigits[i] = new CounterKeta(static_cast<J2DPicture*>(newpane));
		}
	}
	mIsInitialized = true;
	setValue(false, false);
}

/**
 * @note Address: 0x8030BDB4
 * @note Size: 0x220
 */
void CallBack_CounterRV::setKetaSub(int displayDigitNum, bool isUp, bool isDown)
{
	for (int i = 0; i < mMaxDisplayDigitNum; i++) {
		u32 temp = pow(10.0f, i);
		temp     = u16((mInitialDisplayValue / temp) % 10);
		if (mIsBlind) {
			mCounterDigits[i]->setSuji(mImgResources, 10);
		} else if (mDoUseRandomValue) {
			mCounterDigits[i]->setSuji(mImgResources, (u16)(randFloat() * 9.0f));
		} else {
			mCounterDigits[i]->setSuji(mImgResources, temp);
		}

		if (i < displayDigitNum) {
			mCounterDigits[i]->mPicture->show();
			u8 alpha = mPaneAlpha;
			if (i + 1 > mCurrentDigitNum && !mIsBlind) {
				alpha = mZeroAlpha;
			}
			mCounterDigits[i]->mPicture->setAlpha(alpha);
			if (i + 1 <= mCurrentDigitNum) {
				setCounterUpDown(i, isUp, isDown);
			} else {
				if (!mIsBlind && mIsPuyoAnimZero) {
					setCounterUpDown(i, isUp, isDown);
				}
			}
			mCounterDigits[i]->calcScale();
		} else {
			J2DPane* pane = mCounterDigits[i]->mPicture;
			if (pane)
				pane->hide();
		}
	}
}

/**
 * @note Address: 0x8030BFD4
 * @note Size: 0xB0
 */
void CallBack_CounterRV::setCounterUpDown(int digitID, bool isUp, bool isDown)
{
	ScaleMgr* scale = mCounterDigits[digitID]->mScaleMgr;
	if (isUp) {
		scale->up(msVal.mScaleRestoreAmplitude, msVal.mScaleAngularFreq, msVal.mScaleMaxRestoreTime, 0.025f * digitID);
		u32 id = mScaleUpSoundID;
		if (id) {
			ogSound->setSE(id);
		}
	} else if (isDown) {
		scale->down();
		u32 id = mScaleDownSoundID;
		if (id) {
			ogSound->setSE(id);
		}
	}
}

/**
 * @note Address: 0x8030C084
 * @note Size: 0x3F8
 */
void CallBack_CounterRV::setValue(bool isUp, bool isDown)
{
	if (!mIsHidden) {
		if (mIsBlind) {
			mInitialDisplayValue = 0;
			mCurrDisplayValue    = 0;
		}

		mCurrentDigitNum = CalcKeta(mInitialDisplayValue);

		int digits = (int)mCurrentDigitNum < (s32)mMinDisplayDigitNum ? mMinDisplayDigitNum : (int)mCurrentDigitNum;

		setKetaSub(digits, isUp, isDown);

		u16 displayNum = digits;
		if (displayNum > mMaxDisplayDigitNum) {
			displayNum = mMaxDisplayDigitNum;
		}

		mPaneOffsetX = 0.0f;
		mKetaScaleX  = 1.0f;

		if (displayNum >= 2) {
			f32 temp = mPane12DistX * (displayNum - 1) + mPaneSize.x;
			if (temp > mPane13DistX) {
				mKetaScaleX  = mPane13DistX / temp;
				mPaneOffsetX = mPaneSize.x / 2 * (1.0f - mKetaScaleX);
			}
		}

		f32 angleX                = mPic1->mAngleX;
		f32 angleY                = mPic1->mAngleY;
		f32 angleZ                = mPic1->mAngleZ;
		JUtility::TColor whiteCol = mPic1->getWhite();
		JUtility::TColor blackCol = mPic1->getBlack();
		JGeometry::TBox2f* bounds = mPic1->getBounds();

		mPaneBounds.x = bounds->i.x;
		mPaneBounds.y = bounds->i.y;
		mPaneOffsetY  = 0.0f;
		if (mCenteringMode == ECM_Unknown1) {
			if (mCurrentDigitNum < mMinDisplayDigitNum) {
				// f32 x        = f32(mMinDisplayDigitNum - mCurrentDigitNum);
				mPaneOffsetY = -(mKetaScaleX * (mPane12DistX * f32(mMinDisplayDigitNum - mCurrentDigitNum))) / 2;
			}

			mZeroAlpha = 0;

		} else if (mCenteringMode == ECM_UNKNOWN_2) {
			if (mCurrentDigitNum < mMinDisplayDigitNum) {
				f32 x        = -(mMinDisplayDigitNum - mCurrentDigitNum);
				mPaneOffsetY = (mKetaScaleX * (mPane12DistX * f32(-(mMinDisplayDigitNum - mCurrentDigitNum))));
			}

			mZeroAlpha = 0;
		}

		for (int i = 0; i < mMaxDisplayDigitNum; i++) {
			J2DPicture* pane = mCounterDigits[i]->getPicture();
			if (pane) {
				// Calculate the new x position
				f32 offset = mPaneOffsetX + (static_cast<f32>(i) * (-mPane12DistX * mKetaScaleX) + mPaneOffsetY);

				// Create a new box
				JGeometry::TBox2f box(mPaneBounds.x + offset, mPaneBounds.y, offset + (mPaneBounds.x + mPaneSize.x),
				                      mPaneBounds.y + mPaneSize.y);

				// Place the pane at the calculated box position
				pane->place(box);

				if (mIsPuyoAnim) {
					pane->setBasePosition(J2DPOS_Center);
					CounterKeta* keta = mCounterDigits[i];
					keta->mSize       = Vector2f(mKetaScaleX, mPaneScale.y);

				} else {
					pane->setBasePosition((J2DBasePosition)mBasePosition);
					pane->updateScale(mKetaScaleX, mPaneScale.y);
				}

				pane->setAllAngles(angleX, angleY, angleZ);
				pane->calcMtx();
				pane->setWhite(whiteCol);
				pane->setBlack(blackCol);
			}
		}
	}
}

/**
 * @note Address: 0x8030C47C
 * @note Size: 0xB0
 */
void CallBack_CounterRV::update()
{
	bool isInc = 0;
	bool isDec = 0;
	if (mIsInitialized) {
		mIsInitialized       = false;
		mInitialDisplayValue = *mCountPtr;
		mCurrDisplayValue    = mInitialDisplayValue;
	} else {
		if (mIsBlind) {
			mInitialDisplayValue = 0;
			mCurrDisplayValue    = 0;
		} else {
			mCurrDisplayValue    = mInitialDisplayValue;
			mInitialDisplayValue = *mCountPtr;
			if (mInitialDisplayValue > mCurrDisplayValue) {
				isInc = true;
			} else if (mInitialDisplayValue < mCurrDisplayValue) {
				isDec = true;
			}
		}
	}
	setValue(isInc, isDec);
}

/**
 * @note Address: 0x8030C52C
 * @note Size: 0x4
 */
void CallBack_CounterRV::draw(Graphics&, J2DGrafContext&) { }

/**
 * @note Address: 0x8030C530
 * @note Size: 0xD8
 */
CallBack_CounterRV* setCallBack_CounterRV(P2DScreen::Mgr* screen, u64 tag1, u64 tag2, u64 tag3, u32* countPtr, u16 maxDigits, u16 minDigits,
                                          bool isPuyo, JKRArchive* arc)
{
	CallBack_CounterRV* counter = new CallBack_CounterRV(const_cast<char**>(SujiTex32), maxDigits, minDigits, arc);
	counter->init(screen, tag1, tag2, tag3, countPtr, true);
	counter->mIsPuyoAnim = isPuyo;
	screen->addCallBack(tag1, counter);
	return counter;
}

/**
 * @note Address: 0x8030C608
 * @note Size: 0x17C
 */
CallBack_CounterRV* setCallBack_CounterRV(P2DScreen::Mgr* mgr, u64 tag, u32* countPtr, u16 maxDigits, bool isPuyo, bool hasMother,
                                          JKRArchive* arc)
{
	u64 tag1      = maskTag(tag, 1, 1);
	u64 tag2      = maskTag(tag, 1, 2);
	u64 tag3      = tag2;
	u16 minDigits = 1;

	for (int i = 3; i <= 10; i++) {
		u64 tag4      = maskTag(tag, 1, i);
		J2DPane* pane = mgr->search(tag4);
		if (!pane) {
			minDigits = i - 1;
			break;
		}

		tag3 = tag4;
		pane->hide();
	}

	CallBack_CounterRV* counter = new CallBack_CounterRV(const_cast<char**>(SujiTex32), maxDigits, minDigits, arc);
	counter->init(mgr, tag1, tag2, tag3, countPtr, hasMother);
	counter->mIsPuyoAnim = isPuyo;
	mgr->addCallBack(tag, counter);
	return counter;
}

/**
 * @note Address: N/A
 * @note Size: 0x170
 */
void setCallBack_CounterRV2(P2DScreen::Mgr*, u64, u32*, u16, bool, bool, JKRArchive*)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x8030C784
 * @note Size: 0x18C
 */
CallBack_CounterRV* setCallBack_CounterRV(P2DScreen::Mgr* mgr, u64 tag, u32 value, u16 maxDigits, bool isPuyo, bool hasMother,
                                          JKRArchive* arc)
{
	u32* countPtr = new u32(value);
	return setCallBack_CounterRV(mgr, tag, countPtr, maxDigits, isPuyo, hasMother, arc);
}

CallBack_CounterRV::StaticValues CallBack_CounterRV::msVal;

} // namespace Screen
} // namespace og
