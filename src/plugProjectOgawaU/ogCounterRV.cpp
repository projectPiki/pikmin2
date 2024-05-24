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
	mDoUseRandomValue = 0;
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
 * @note Address: 0x8030B744
 * @note Size: 0x34
 */
void CallBack_CounterRV::setValue() { setValue(false, false); }

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
void CallBack_CounterRV::setRandMode(bool)
{
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
	u16 max = (mCurrentDigitNum >= mMaxDisplayDigitNum) ? mMaxDisplayDigitNum : mCurrentDigitNum;
	for (int i = 0; i < max; i++) {
		mCounterDigits[i]->mScaleMgr->up(msVal.mScaleRestoreAmplitude, msVal.mScaleAngularFreq, msVal.mScaleMaxRestoreTime,
		                                 (0.025f * f32(i)) * scaleDelayFactor);
	}
	/*
stwu     r1, -0x60(r1)
mflr     r0
stw      r0, 0x64(r1)
stfd     f31, 0x50(r1)
psq_st   f31, 88(r1), 0, qr0
stfd     f30, 0x40(r1)
psq_st   f30, 72(r1), 0, qr0
stfd     f29, 0x30(r1)
psq_st   f29, 56(r1), 0, qr0
stmw     r26, 0x18(r1)
mr       r26, r3
li       r0, 1
stb      r0, 0x84(r3)
fmr      f29, f1
lhz      r4, 0x2c(r3)
lhz      r0, 0x2e(r3)
cmplw    r4, r0
blt      lbl_8030B844
mr       r4, r0

lbl_8030B844:
lis      r3, msVal__Q32og6Screen18CallBack_CounterRV@ha
lfs      f30, lbl_8051D6A4@sda21(r2)
lfd      f31, lbl_8051D6A8@sda21(r2)
addi     r30, r3, msVal__Q32og6Screen18CallBack_CounterRV@l
clrlwi   r28, r4, 0x10
li       r27, 0
li       r29, 0
lis      r31, 0x4330
b        lbl_8030B8A8

lbl_8030B868:
xoris    r0, r27, 0x8000
lwz      r3, 0x7c(r26)
stw      r0, 0xc(r1)
lwzx     r3, r3, r29
stw      r31, 8(r1)
lwz      r3, 8(r3)
lfd      f0, 8(r1)
lfs      f1, 0(r30)
fsubs    f0, f0, f31
lfs      f2, 4(r30)
lfs      f3, 8(r30)
fmuls    f0, f30, f0
fmuls    f4, f0, f29
bl       up__Q32og6Screen8ScaleMgrFffff
addi     r29, r29, 4
addi     r27, r27, 1

lbl_8030B8A8:
cmpw     r27, r28
blt      lbl_8030B868
psq_l    f31, 88(r1), 0, qr0
lfd      f31, 0x50(r1)
psq_l    f30, 72(r1), 0, qr0
lfd      f30, 0x40(r1)
psq_l    f29, 56(r1), 0, qr0
lfd      f29, 0x30(r1)
lmw      r26, 0x18(r1)
lwz      r0, 0x64(r1)
mtlr     r0
addi     r1, r1, 0x60
blr
	*/
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

	mPane12DistX = mPanePosition.x - mPic2->mOffset.x;
	mPane13DistX = mPaneSize.x + (mPanePosition.x - mPic3->mOffset.x);
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
			J2DPane* newpane  = screen->search(0);
			mCounterDigits[i] = new CounterKeta(static_cast<J2DPicture*>(newpane));
		}
		for (int i = mMinDisplayDigitNum / 2; i < mMaxDisplayDigitNum; i++) {
			J2DPane* newpane = CopyPictureToPane(mPic1, mMotherPane, mPanePosition.x, mPanePosition.y, 'ogPic_0' + i);
			newpane->setBasePosition((J2DBasePosition)mBasePosition);
			newpane->setInfluencedAlpha(alphatype, false);
			mCounterDigits[i] = new CounterKeta(static_cast<J2DPicture*>(newpane));
		}
	}
	mIsInitialized = true;
	setValue(false, false);

	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stmw      r22, 0x8(r1)
	  mr        r29, r4
	  lbz       r27, 0x3F(r1)
	  mr        r31, r3
	  lwz       r23, 0x38(r1)
	  mr        r26, r5
	  mr        r25, r6
	  mr        r30, r7
	  mr        r22, r8
	  mr        r24, r9
	  mr        r28, r10
	  stb       r27, 0x88(r3)
	  mr        r3, r29
	  bl        -0x8A78
	  stw       r3, 0x6C(r31)
	  mr        r3, r29
	  mr        r6, r22
	  mr        r5, r30
	  bl        -0x8A8C
	  stw       r3, 0x70(r31)
	  li        r4, 0x4
	  lwz       r3, 0x6C(r31)
	  bl        -0x2D2C8C
	  lwz       r3, 0x70(r31)
	  li        r4, 0x4
	  bl        -0x2D2C98
	  li        r0, 0
	  xor       r3, r28, r0
	  xor       r0, r24, r0
	  or.       r0, r3, r0
	  beq-      .loc_0xA0
	  mr        r3, r29
	  mr        r6, r28
	  mr        r5, r24
	  bl        -0x8ACC
	  stw       r3, 0x74(r31)
	  b         .loc_0xA8

	.loc_0xA0:
	  lwz       r0, 0x70(r31)
	  stw       r0, 0x74(r31)

	.loc_0xA8:
	  stw       r23, 0x20(r31)
	  li        r0, 0
	  lfs       f0, -0xCB0(r2)
	  lwz       r3, 0x0(r23)
	  stw       r3, 0x24(r31)
	  lwz       r3, 0x24(r31)
	  stw       r3, 0x28(r31)
	  lwz       r3, 0x6C(r31)
	  lfs       f1, 0xCC(r3)
	  stfs      f1, 0x40(r31)
	  lwz       r3, 0x6C(r31)
	  lfs       f1, 0xD0(r3)
	  stfs      f1, 0x44(r31)
	  lwz       r3, 0x6C(r31)
	  lfs       f1, 0xD4(r3)
	  stfs      f1, 0x50(r31)
	  lwz       r3, 0x6C(r31)
	  lfs       f1, 0xD8(r3)
	  stfs      f1, 0x54(r31)
	  lwz       r3, 0x6C(r31)
	  lfs       f2, 0x28(r3)
	  lfs       f1, 0x20(r3)
	  fsubs     f1, f2, f1
	  stfs      f1, 0x48(r31)
	  lwz       r3, 0x6C(r31)
	  lfs       f2, 0x2C(r3)
	  lfs       f1, 0x24(r3)
	  fsubs     f1, f2, f1
	  stfs      f1, 0x4C(r31)
	  lwz       r3, 0x6C(r31)
	  lbz       r3, 0xB7(r3)
	  stw       r3, 0x60(r31)
	  lwz       r3, 0x6C(r31)
	  lbz       r3, 0xB2(r3)
	  stb       r3, 0x64(r31)
	  lwz       r3, 0x70(r31)
	  lfs       f2, 0x50(r31)
	  lfs       f1, 0xD4(r3)
	  lwz       r3, 0x6C(r31)
	  fsubs     f1, f2, f1
	  lbz       r30, 0xB4(r3)
	  fabs      f1, f1
	  frsp      f1, f1
	  stfs      f1, 0x34(r31)
	  lwz       r3, 0x74(r31)
	  lfs       f3, 0x50(r31)
	  lfs       f1, 0xD4(r3)
	  lfs       f2, 0x48(r31)
	  fsubs     f1, f3, f1
	  fabs      f1, f1
	  frsp      f1, f1
	  fadds     f1, f2, f1
	  stfs      f1, 0x38(r31)
	  stfs      f0, 0x3C(r31)
	  lwz       r3, 0x6C(r31)
	  stb       r0, 0xB0(r3)
	  lwz       r3, 0x70(r31)
	  stb       r0, 0xB0(r3)
	  lwz       r3, 0x74(r31)
	  stb       r0, 0xB0(r3)
	  lwz       r3, 0x6C(r31)
	  bl        -0x2D29A0
	  mr        r0, r3
	  lwz       r3, 0x6C(r31)
	  mr        r24, r0
	  bl        -0x2D3770
	  mr        r23, r3
	  li        r3, 0x100
	  bl        -0x2E7BF8
	  mr.       r0, r3
	  beq-      .loc_0x1CC
	  bl        -0x2D4FB8
	  mr        r0, r3

	.loc_0x1CC:
	  stw       r0, 0x78(r31)
	  mr        r3, r24
	  lwz       r4, 0x78(r31)
	  bl        -0x2D43F8
	  lwz       r3, 0x6C(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
	  lfs       f0, 0x0(r23)
	  cmplwi    r27, 0
	  stfs      f0, 0x58(r31)
	  lfs       f0, 0x4(r23)
	  stfs      f0, 0x5C(r31)
	  beq-      .loc_0x2C4
	  lis       r4, 0x6963
	  lis       r3, 0x6F
	  addi      r25, r4, 0x5F30
	  li        r27, 0
	  addi      r24, r3, 0x6750
	  li        r26, 0
	  b         .loc_0x2B4

	.loc_0x224:
	  srawi     r0, r27, 0x1F
	  lwz       r3, 0x6C(r31)
	  addc      r6, r27, r25
	  lwz       r4, 0x78(r31)
	  lfs       f1, 0x50(r31)
	  adde      r5, r0, r24
	  lfs       f2, 0x54(r31)
	  bl        0x312C
	  lwz       r4, 0x60(r31)
	  mr        r28, r3
	  bl        -0x2D2E74
	  mr        r3, r28
	  mr        r4, r30
	  li        r5, 0
	  bl        -0x2D2D94
	  li        r3, 0x14
	  bl        -0x2E7CA4
	  mr.       r23, r3
	  beq-      .loc_0x2A4
	  stw       r28, 0x0(r23)
	  li        r0, 0
	  li        r3, 0x1C
	  stw       r0, 0x4(r23)
	  bl        -0x2E7CC0
	  mr.       r0, r3
	  beq-      .loc_0x294
	  bl        0x1D294
	  mr        r0, r3

	.loc_0x294:
	  stw       r0, 0x8(r23)
	  lfs       f0, -0xCB0(r2)
	  stfs      f0, 0xC(r23)
	  stfs      f0, 0x10(r23)

	.loc_0x2A4:
	  lwz       r3, 0x7C(r31)
	  addi      r27, r27, 0x1
	  stwx      r23, r3, r26
	  addi      r26, r26, 0x4

	.loc_0x2B4:
	  lhz       r0, 0x2E(r31)
	  cmpw      r27, r0
	  blt+      .loc_0x224
	  b         .loc_0x498

	.loc_0x2C4:
	  lis       r4, 0x6963
	  lis       r5, 0x6F
	  lwz       r3, 0x6C(r31)
	  addi      r6, r4, 0x5F30
	  lwz       r4, 0x78(r31)
	  addi      r5, r5, 0x6750
	  lfs       f1, 0x50(r31)
	  lfs       f2, 0x54(r31)
	  bl        0x3088
	  lwz       r4, 0x60(r31)
	  mr        r24, r3
	  bl        -0x2D2F18
	  mr        r3, r24
	  mr        r4, r30
	  li        r5, 0
	  bl        -0x2D2E38
	  li        r3, 0x14
	  bl        -0x2E7D48
	  mr.       r23, r3
	  beq-      .loc_0x348
	  stw       r24, 0x0(r23)
	  li        r0, 0
	  li        r3, 0x1C
	  stw       r0, 0x4(r23)
	  bl        -0x2E7D64
	  mr.       r0, r3
	  beq-      .loc_0x338
	  bl        0x1D1F0
	  mr        r0, r3

	.loc_0x338:
	  stw       r0, 0x8(r23)
	  lfs       f0, -0xCB0(r2)
	  stfs      f0, 0xC(r23)
	  stfs      f0, 0x10(r23)

	.loc_0x348:
	  lwz       r3, 0x7C(r31)
	  li        r27, 0x1
	  li        r28, 0x4
	  stw       r23, 0x0(r3)
	  b         .loc_0x3D4

	.loc_0x35C:
	  lwz       r12, 0x0(r29)
	  srawi     r0, r27, 0x1F
	  addc      r6, r25, r27
	  mr        r3, r29
	  lwz       r12, 0x3C(r12)
	  adde      r5, r26, r0
	  mtctr     r12
	  bctrl
	  mr        r23, r3
	  li        r3, 0x14
	  bl        -0x2E7DC4
	  mr.       r24, r3
	  beq-      .loc_0x3C4
	  stw       r23, 0x0(r24)
	  li        r0, 0
	  li        r3, 0x1C
	  stw       r0, 0x4(r24)
	  bl        -0x2E7DE0
	  mr.       r0, r3
	  beq-      .loc_0x3B4
	  bl        0x1D174
	  mr        r0, r3

	.loc_0x3B4:
	  stw       r0, 0x8(r24)
	  lfs       f0, -0xCB0(r2)
	  stfs      f0, 0xC(r24)
	  stfs      f0, 0x10(r24)

	.loc_0x3C4:
	  lwz       r3, 0x7C(r31)
	  addi      r27, r27, 0x1
	  stwx      r24, r3, r28
	  addi      r28, r28, 0x4

	.loc_0x3D4:
	  lhz       r0, 0x30(r31)
	  cmpw      r27, r0
	  blt+      .loc_0x35C
	  lis       r4, 0x6963
	  lis       r3, 0x6F
	  mr        r27, r0
	  rlwinm    r28,r0,2,0,29
	  addi      r29, r4, 0x5F30
	  addi      r26, r3, 0x6750
	  b         .loc_0x48C

	.loc_0x3FC:
	  srawi     r0, r27, 0x1F
	  lwz       r3, 0x6C(r31)
	  addc      r6, r27, r29
	  lwz       r4, 0x78(r31)
	  lfs       f1, 0x50(r31)
	  adde      r5, r0, r26
	  lfs       f2, 0x54(r31)
	  bl        0x2F54
	  lwz       r4, 0x60(r31)
	  mr        r23, r3
	  bl        -0x2D304C
	  mr        r3, r23
	  mr        r4, r30
	  li        r5, 0
	  bl        -0x2D2F6C
	  li        r3, 0x14
	  bl        -0x2E7E7C
	  mr.       r25, r3
	  beq-      .loc_0x47C
	  stw       r23, 0x0(r25)
	  li        r0, 0
	  li        r3, 0x1C
	  stw       r0, 0x4(r25)
	  bl        -0x2E7E98
	  mr.       r0, r3
	  beq-      .loc_0x46C
	  bl        0x1D0BC
	  mr        r0, r3

	.loc_0x46C:
	  stw       r0, 0x8(r25)
	  lfs       f0, -0xCB0(r2)
	  stfs      f0, 0xC(r25)
	  stfs      f0, 0x10(r25)

	.loc_0x47C:
	  lwz       r3, 0x7C(r31)
	  addi      r27, r27, 0x1
	  stwx      r25, r3, r28
	  addi      r28, r28, 0x4

	.loc_0x48C:
	  lhz       r0, 0x2E(r31)
	  cmpw      r27, r0
	  blt+      .loc_0x3FC

	.loc_0x498:
	  li        r0, 0x1
	  mr        r3, r31
	  stb       r0, 0x9C(r31)
	  li        r4, 0
	  li        r5, 0
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x28(r12)
	  mtctr     r12
	  bctrl
	  lmw       r22, 0x8(r1)
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
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
CallBack_CounterRV* setCallBack_CounterRV(P2DScreen::Mgr* mgr, u64 tag, u32* countPtr, u16 maxDigits, bool hasMother, bool isPuyo,
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
	counter->init(mgr, tag1, tag2, tag2, countPtr, hasMother);
	counter->mIsPuyoAnim = isPuyo;
	mgr->addCallBack(tag1, counter);
	return counter;
	/*
	.loc_0x0:
	  stwu      r1, -0x60(r1)
	  mflr      r0
	  stw       r0, 0x64(r1)
	  stmw      r14, 0x18(r1)
	  mr        r16, r6
	  mr        r17, r5
	  mr        r15, r3
	  lwz       r21, 0x68(r1)
	  mr        r18, r7
	  stb       r10, 0x10(r1)
	  mr        r19, r8
	  mr        r20, r9
	  mr        r4, r16
	  mr        r3, r17
	  li        r5, 0x1
	  li        r6, 0x1
	  bl        -0x9D28
	  mr        r30, r4
	  mr        r14, r3
	  mr        r4, r16
	  mr        r3, r17
	  li        r5, 0x1
	  li        r6, 0x2
	  bl        -0x9D44
	  mr        r28, r4
	  mr        r29, r3
	  li        r25, 0x1
	  li        r24, 0x3
	  mr        r26, r28
	  li        r31, 0
	  mr        r27, r29

	.loc_0x7C:
	  mr        r4, r16
	  mr        r3, r17
	  rlwinm    r6,r24,0,16,31
	  li        r5, 0x1
	  bl        -0x9D74
	  lwz       r12, 0x0(r15)
	  mr        r0, r3
	  mr        r22, r4
	  mr        r3, r15
	  lwz       r12, 0x3C(r12)
	  mr        r23, r0
	  mr        r6, r22
	  mr        r5, r23
	  mtctr     r12
	  bctrl
	  cmplwi    r3, 0
	  bne-      .loc_0xCC
	  subi      r0, r24, 0x1
	  rlwinm    r25,r0,0,16,31
	  b         .loc_0xE4

	.loc_0xCC:
	  addi      r24, r24, 0x1
	  stb       r31, 0xB0(r3)
	  cmpwi     r24, 0xA
	  mr        r26, r22
	  mr        r27, r23
	  ble+      .loc_0x7C

	.loc_0xE4:
	  li        r3, 0xA8
	  bl        -0x2E884C
	  mr.       r22, r3
	  beq-      .loc_0x110
	  lis       r4, 0x804D
	  mr        r5, r19
	  addi      r4, r4, 0x7E18
	  mr        r6, r25
	  mr        r7, r21
	  bl        -0x11EC
	  mr        r22, r3

	.loc_0x110:
	  stw       r18, 0x8(r1)
	  mr        r3, r22
	  lbz       r0, 0x10(r1)
	  mr        r4, r15
	  mr        r6, r30
	  mr        r5, r14
	  stw       r0, 0xC(r1)
	  mr        r8, r28
	  mr        r7, r29
	  mr        r10, r26
	  lwz       r12, 0x0(r22)
	  mr        r9, r27
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  stb       r20, 0x84(r22)
	  mr        r3, r15
	  mr        r6, r16
	  mr        r5, r17
	  mr        r7, r22
	  bl        0x1283BC
	  mr        r3, r22
	  lmw       r14, 0x18(r1)
	  lwz       r0, 0x64(r1)
	  mtlr      r0
	  addi      r1, r1, 0x60
	  blr
	*/
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
	mgr->addCallBack(tag1, counter);
	return counter;
	/*
	.loc_0x0:
	  stwu      r1, -0x60(r1)
	  mflr      r0
	  stw       r0, 0x64(r1)
	  stmw      r14, 0x18(r1)
	  mr        r15, r3
	  lwz       r20, 0x68(r1)
	  mr        r17, r5
	  stb       r10, 0x10(r1)
	  mr        r16, r6
	  mr        r14, r7
	  mr        r18, r8
	  mr        r19, r9
	  li        r3, 0x4
	  bl        -0x2E8914
	  mr.       r30, r3
	  beq-      .loc_0x44
	  stw       r14, 0x0(r30)

	.loc_0x44:
	  mr        r4, r16
	  mr        r3, r17
	  li        r5, 0x1
	  li        r6, 0x1
	  bl        -0x9EB8
	  mr        r21, r4
	  mr        r14, r3
	  mr        r4, r16
	  mr        r3, r17
	  li        r5, 0x1
	  li        r6, 0x2
	  bl        -0x9ED4
	  mr        r22, r4
	  mr        r23, r3
	  li        r26, 0x1
	  li        r27, 0x3
	  mr        r24, r22
	  li        r31, 0
	  mr        r25, r23

	.loc_0x90:
	  mr        r4, r16
	  mr        r3, r17
	  rlwinm    r6,r27,0,16,31
	  li        r5, 0x1
	  bl        -0x9F04
	  lwz       r12, 0x0(r15)
	  mr        r29, r3
	  mr        r28, r4
	  mr        r3, r15
	  lwz       r12, 0x3C(r12)
	  mr        r6, r28
	  mr        r5, r29
	  mtctr     r12
	  bctrl
	  cmplwi    r3, 0
	  bne-      .loc_0xDC
	  subi      r0, r27, 0x1
	  rlwinm    r26,r0,0,16,31
	  b         .loc_0xF4

	.loc_0xDC:
	  addi      r27, r27, 0x1
	  stb       r31, 0xB0(r3)
	  cmpwi     r27, 0xA
	  mr        r24, r28
	  mr        r25, r29
	  ble+      .loc_0x90

	.loc_0xF4:
	  li        r3, 0xA8
	  bl        -0x2E89D8
	  mr.       r27, r3
	  beq-      .loc_0x120
	  lis       r4, 0x804D
	  mr        r5, r18
	  addi      r4, r4, 0x7E18
	  mr        r6, r26
	  mr        r7, r20
	  bl        -0x1378
	  mr        r27, r3

	.loc_0x120:
	  stw       r30, 0x8(r1)
	  mr        r3, r27
	  lbz       r0, 0x10(r1)
	  mr        r4, r15
	  mr        r6, r21
	  mr        r5, r14
	  stw       r0, 0xC(r1)
	  mr        r8, r22
	  mr        r7, r23
	  mr        r10, r24
	  lwz       r12, 0x0(r27)
	  mr        r9, r25
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  stb       r19, 0x84(r27)
	  mr        r3, r15
	  mr        r6, r16
	  mr        r5, r17
	  mr        r7, r27
	  bl        0x128230
	  mr        r3, r27
	  lmw       r14, 0x18(r1)
	  lwz       r0, 0x64(r1)
	  mtlr      r0
	  addi      r1, r1, 0x60
	  blr
	*/
}

CallBack_CounterRV::StaticValues CallBack_CounterRV::msVal;

} // namespace Screen
} // namespace og
