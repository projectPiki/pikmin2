#include "og/Screen/callbackNodes.h"
#include "og/Screen/ogScreen.h"
#include "og/Sound.h"
#include "Dolphin/math.h"
#include "Dolphin/rand.h"
#include "trig.h"

namespace og {
namespace Screen {

/*
 * --INFO--
 * Address:	8030B524
 * Size:	0001E0
 */
CallBack_CounterRV::CallBack_CounterRV(char** characterTexturePaths, u16 ketaCount, u16 p3, JKRArchive* archive)
    : P2DScreen::CallBackNode()
{
	mCharacterTexturePaths = characterTexturePaths;
	if (10 < ketaCount) {
		ketaCount = 10;
	}
	if (ketaCount < 2) {
		ketaCount = 2;
	}
	mCounterLimit        = ketaCount;
	_30                  = p3;
	mCountPtr            = nullptr;
	mInitialDisplayValue = 0;
	mCurrDisplayValue    = 0;
	mImgResources        = og::Screen::makeSujiFontTable(mCharacterTexturePaths, archive);
	mCounters            = new CounterKeta*[ketaCount];
	for (int i = 0; i < ketaCount; i++) {
		mCounters[i] = nullptr;
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
	_89               = 0;
	mZeroAlpha        = 0;
	mCenteringMode    = ECM_Unknown0;
	mScaleUpSoundID   = PSSE_UNSET;
	mScaleDownSoundID = PSSE_UNSET;
	_9C               = 1;
	_A4               = 0.0f;
	_A0               = 0.0f;
}

/*
 * --INFO--
 * Address:	8030B704
 * Size:	000040
 */
void CallBack_CounterRV::show()
{
	if (mIsHidden) {
		mIsHidden = false;
		setValue();
	}
}

/*
 * --INFO--
 * Address:	8030B744
 * Size:	000034
 */
void CallBack_CounterRV::setValue() { setValue(false, false); }

/*
 * --INFO--
 * Address:	8030B778
 * Size:	000048
 */
void CallBack_CounterRV::hide()
{
	mIsHidden = true;
	for (int i = 0; i < mCounterLimit; i++) {
		if (mCounters[i]) {
			mCounters[i]->mPicture->hide();
		}
	}
}

/*
 * --INFO--
 * Address:	8030B7C0
 * Size:	000018
 */
J2DPane* CallBack_CounterRV::getMotherPane()
{
	J2DPane* ret = mMotherPane;
	if (mIsMother) {
		return ret;
	}
	return nullptr;
}

/*
 * --INFO--
 * Address:	8030B7D8
 * Size:	000008
 */
void CallBack_CounterRV::setPuyoAnim(bool a1) { mIsPuyoAnim = a1; }

/*
 * --INFO--
 * Address:	8030B7E0
 * Size:	000008
 */
void CallBack_CounterRV::setPuyoAnimZero(bool a1) { mIsPuyoAnimZero = a1; }

/*
 * --INFO--
 * Address:	8030B7E8
 * Size:	000008
 */
void CallBack_CounterRV::setBlind(bool a1) { mIsBlind = a1; }

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void CallBack_CounterRV::setRandMode(bool)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000018
 */
void CallBack_CounterRV::setValPtr(u32*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8030B7F0
 * Size:	000008
 */
void CallBack_CounterRV::setZeroAlpha(u8 a1) { mZeroAlpha = a1; }

/*
 * --INFO--
 * Address:	8030B7F8
 * Size:	0000E4
 */
void CallBack_CounterRV::startPuyoUp(f32 p1)
{
	mIsPuyoAnim = true;
	int max     = (mCurrCounters >= mCounterLimit) ? mCounterLimit : mCurrCounters;
	for (int i = 0; i < max; i++) {
		mCounters[i]->mScaleMgr->up(msVal._00, msVal._04, msVal._08, 0.025f * i * p1);
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

/*
 * --INFO--
 * Address:	8030B8DC
 * Size:	000008
 */
void CallBack_CounterRV::setCenteringMode(EnumCenteringMode centeringMode) { mCenteringMode = centeringMode; }

/*
 * --INFO--
 * Address:	8030B8E4
 * Size:	0004D0
 */
void CallBack_CounterRV::init(J2DScreen* screen, u64 tag1, u64 tag2, u64 tag3, u32* data, bool flag)
{
	mIsMother = flag;
	mPic1     = static_cast<J2DPictureEx*>(og::Screen::TagSearch(screen, tag1));
	mPic2     = og::Screen::TagSearch(screen, tag2);
	mPic1->setBasePosition(J2DPOS_Center);
	mPic2->setBasePosition(J2DPOS_Center);

	if (tag3) {
		mPic3 = og::Screen::TagSearch(screen, tag3);
	} else {
		mPic3 = mPic2;
	}
	mCountPtr            = data;
	mInitialDisplayValue = *data;
	mCurrDisplayValue    = mInitialDisplayValue;
	mPaneScale.x         = mPic1->mScale.x;
	mPaneScale.y         = mPic1->mScale.y;
	mPanePosition.x      = mPic1->mOffset.x;
	mPanePosition.y      = mPic1->mOffset.y;
	mPaneSize.x          = mPic1->mBounds.f.x - mPic1->mBounds.i.x;
	mPaneSize.y          = mPic1->mBounds.f.y - mPic1->mBounds.i.y;
	mBasePosition        = mPic1->mBasePosition;
	mPaneAlpha           = mPic1->mAlpha;
	bool alphatype       = mPic1->mIsInfluencedAlpha;

	mPane12DistX = mPanePosition.x - mPic2->mOffset.x;
	mPane13DistX = mPaneSize.x + (mPanePosition.x - mPic3->mOffset.x);
	_3C          = 1.0f;
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
	if (flag) {
		for (int i = 0; i < mCounterLimit; i++) {
			J2DPane* newpane = CopyPictureToPane(mPic1, mMotherPane, mPanePosition.x, mPanePosition.y, 'ogPic_0' + i);
			newpane->setBasePosition((J2DBasePosition)mBasePosition);
			newpane->setInfluencedAlpha(alphatype, false);
			mCounters[i] = new CounterKeta(static_cast<J2DPicture*>(newpane));
		}
	} else {

		J2DPane* newpane = CopyPictureToPane(mPic1, mMotherPane, mPanePosition.x, mPanePosition.y, 'ogPic_0');
		newpane->setBasePosition((J2DBasePosition)mBasePosition);
		newpane->setInfluencedAlpha(alphatype, false);
		mCounters[0] = new CounterKeta(static_cast<J2DPicture*>(newpane));

		for (int i = 1; i < _30; i++) {
			J2DPane* newpane = screen->search(0);
			mCounters[i]     = new CounterKeta(static_cast<J2DPicture*>(newpane));
		}
		for (int i = _30 / 2; i < mCounterLimit; i++) {
			J2DPane* newpane = CopyPictureToPane(mPic1, mMotherPane, mPanePosition.x, mPanePosition.y, 'ogPic_0' + i);
			newpane->setBasePosition((J2DBasePosition)mBasePosition);
			newpane->setInfluencedAlpha(alphatype, false);
			mCounters[i] = new CounterKeta(static_cast<J2DPicture*>(newpane));
		}
	}
	_9C = true;
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

/*
 * --INFO--
 * Address:	8030BDB4
 * Size:	000220
 */
void CallBack_CounterRV::setKetaSub(int count, bool flag1, bool flag2)
{
	for (int i = 0; i < mCounterLimit; i++) {
		u32 temp = pow(10.0f, i);
		temp     = u16((mInitialDisplayValue / temp) % 10);
		if (mIsBlind) {
			mCounters[i]->setSuji(mImgResources, 10);
		} else if (_89) {
			mCounters[i]->setSuji(mImgResources, (u16)(randFloat() * 9.0f));
		} else {
			mCounters[i]->setSuji(mImgResources, temp);
		}

		if (i < count) {
			mCounters[i]->mPicture->show();
			u8 alpha = mPaneAlpha;
			if (i + 1 > mCurrCounters && !mIsBlind) {
				alpha = mZeroAlpha;
			}
			mCounters[i]->mPicture->setAlpha(alpha);
			if (i + 1 <= mCurrCounters) {
				setCounterUpDown(i, flag1, flag2);
			} else {
				if (!mIsBlind && mIsPuyoAnimZero) {
					setCounterUpDown(i, flag1, flag2);
				}
			}
			mCounters[i]->calcScale();
		} else {
			J2DPane* pane = mCounters[i]->mPicture;
			if (pane)
				pane->hide();
		}
	}
}

/*
 * --INFO--
 * Address:	8030BFD4
 * Size:	0000B0
 */
void CallBack_CounterRV::setCounterUpDown(int i, bool isUp, bool flag2)
{
	ScaleMgr* scale = mCounters[i]->mScaleMgr;
	if (isUp) {
		scale->up(msVal._00, msVal._04, msVal._08, 0.025f * i);
		u32 id = mScaleUpSoundID;
		if (id) {
			ogSound->setSE(id);
		}
	} else if (flag2) {
		scale->down();
		u32 id = mScaleDownSoundID;
		if (id) {
			ogSound->setSE(id);
		}
	}
}

/*
 * --INFO--
 * Address:	8030C084
 * Size:	0003F8
 */
void CallBack_CounterRV::setValue(bool flag1, bool flag2)
{
	if (!mIsHidden) {
		if (mIsBlind) {
			mInitialDisplayValue = 0;
			mCurrDisplayValue    = 0;
		}
		mCurrCounters = CalcKeta(mInitialDisplayValue);
		int newmax    = mCurrCounters;
		if (mCurrCounters < _30) {
			newmax = _30;
		}
		setKetaSub(newmax, flag1, flag2);
		if (newmax > mCounterLimit) {
			newmax = mCounterLimit;
		}
		_A4 = 0.0f;
		_3C = 0.0f;
		if (newmax > 1) {
			f32 temp = mPane12DistX * (newmax - 1) + mPaneSize.x;
			if (temp > mPane13DistX) {
				_3C = mPane13DistX / temp;
				_A4 = mPaneSize.x * 0.5f * (1.0f - _3C);
			}
		}
		J2DPictureEx* pic      = mPic1;
		f32 f1                 = pic->mAngleX;
		f32 f2                 = pic->mAngleY;
		f32 angle              = pic->mAngleZ;
		JUtility::TColor col1  = pic->getWhite();
		JUtility::TColor col2  = pic->getBlack();
		JGeometry::TBox2f* box = pic->getBounds();

		mPaneBounds.x = box->i.x;
		mPaneBounds.y = box->i.y;
		_A0           = 0.0f;
		if (mCenteringMode == ECM_Unknown1) {
			if (mCurrCounters < _30) {
				_A0 = -(_3C * mPane12DistX * (_30 - mCurrCounters) * 0.5f);
			}
			mPaneAlpha = 0;
		} else if (mCenteringMode == ECM_UNKNOWN_2) {
			if (mCurrCounters < _30) {
				_A0 = -(_3C * mPane12DistX * (_30 - mCurrCounters));
			}
			mPaneAlpha = 0;
		}
		for (int i = 0; i < mCounterLimit; i++) {
			J2DPicture* pane = mCounters[i]->mPicture;
			if (pane) {
				JGeometry::TBox2f box;
				box.i.y = mPaneBounds.y;
				box.i.x = _A4 + i * -mPane12DistX * _3C + _A0;
				box.f.y = box.i.y + mPaneSize.y;
				box.f.x = box.i.x + mPaneSize.x + mPaneBounds.x;
				pane->place(box);
				if (mIsPuyoAnimZero) {
					pane->setBasePosition(J2DPOS_Center);
					CounterKeta* keta = mCounters[i];
					keta->mSize.x     = _3C;
					keta->mSize.y     = mPaneScale.y;
				} else {
					pane->setBasePosition((J2DBasePosition)mBasePosition);
					pane->updateScale(_3C, mPaneScale.y);
				}
				pane->mAngleX = f1;
				pane->mAngleY = f2;
				pane->mAngleZ = angle;
				pane->calcMtx();
				pane->setWhite(col1);
				pane->setBlack(col2);
			}
		}
	}
	/*
stwu     r1, -0x80(r1)
mflr     r0
stw      r0, 0x84(r1)
stfd     f31, 0x70(r1)
psq_st   f31, 120(r1), 0, qr0
stfd     f30, 0x60(r1)
psq_st   f30, 104(r1), 0, qr0
stfd     f29, 0x50(r1)
psq_st   f29, 88(r1), 0, qr0
stw      r31, 0x4c(r1)
stw      r30, 0x48(r1)
stw      r29, 0x44(r1)
stw      r28, 0x40(r1)
mr       r31, r3
mr       r30, r4
lbz      r0, 0x87(r3)
mr       r28, r5
cmplwi   r0, 0
bne      lbl_8030C444
lbz      r0, 0x86(r31)
cmplwi   r0, 0
beq      lbl_8030C0E8
li       r0, 0
stw      r0, 0x24(r31)
stw      r0, 0x28(r31)

lbl_8030C0E8:
lwz      r3, 0x24(r31)
bl       CalcKeta__Q22og6ScreenFUl
sth      r3, 0x2c(r31)
lhz      r29, 0x2c(r31)
lhz      r0, 0x30(r31)
cmpw     r29, r0
bge      lbl_8030C108
mr       r29, r0

lbl_8030C108:
mr       r3, r31
mr       r4, r29
mr       r5, r30
mr       r6, r28
bl       setKetaSub__Q32og6Screen18CallBack_CounterRVFibb
lhz      r0, 0x2e(r31)
clrlwi   r3, r29, 0x10
cmplw    r3, r0
ble      lbl_8030C130
mr       r3, r0

lbl_8030C130:
lfs      f0, lbl_8051D6A0@sda21(r2)
clrlwi   r3, r3, 0x10
lfs      f4, lbl_8051D6B0@sda21(r2)
cmplwi   r3, 2
stfs     f0, 0xa4(r31)
stfs     f4, 0x3c(r31)
blt      lbl_8030C1A8
addi     r3, r3, -1
lis      r0, 0x4330
xoris    r3, r3, 0x8000
stw      r0, 0x30(r1)
lfd      f2, lbl_8051D6A8@sda21(r2)
stw      r3, 0x34(r1)
lfs      f3, 0x34(r31)
lfd      f1, 0x30(r1)
lfs      f0, 0x48(r31)
fsubs    f1, f1, f2
lfs      f2, 0x38(r31)
fmadds   f0, f3, f1, f0
fcmpo    cr0, f0, f2
ble      lbl_8030C1A8
fdivs    f0, f2, f0
lfs      f1, lbl_8051D6C8@sda21(r2)
stfs     f0, 0x3c(r31)
lfs      f2, 0x48(r31)
lfs      f0, 0x3c(r31)
fmuls    f1, f2, f1
fsubs    f0, f4, f0
fmuls    f0, f1, f0
stfs     f0, 0xa4(r31)

lbl_8030C1A8:
lwz      r4, 0x6c(r31)
addi     r3, r1, 0x14
lwz      r12, 0(r4)
lfs      f31, 0xb8(r4)
lwz      r12, 0x138(r12)
lfs      f30, 0xbc(r4)
lfs      f29, 0xc0(r4)
mtctr    r12
bctrl
lwz      r4, 0x6c(r31)
addi     r3, r1, 0x10
lwz      r0, 0x14(r1)
lwz      r12, 0(r4)
stw      r0, 0x1c(r1)
lwz      r12, 0x134(r12)
mtctr    r12
bctrl
lwz      r0, 0x10(r1)
lwz      r3, 0x6c(r31)
stw      r0, 0x18(r1)
bl       getBounds__7J2DPaneFv
lfs      f1, 0(r3)
lfs      f0, lbl_8051D6A0@sda21(r2)
stfs     f1, 0x58(r31)
lfs      f1, 4(r3)
stfs     f1, 0x5c(r31)
stfs     f0, 0xa0(r31)
lwz      r0, 0x8c(r31)
cmpwi    r0, 1
bne      lbl_8030C27C
lhz      r0, 0x2c(r31)
lhz      r3, 0x30(r31)
cmplw    r0, r3
bge      lbl_8030C270
subf     r3, r0, r3
lis      r0, 0x4330
xoris    r3, r3, 0x8000
stw      r0, 0x30(r1)
lfd      f1, lbl_8051D6A8@sda21(r2)
stw      r3, 0x34(r1)
lfs      f2, 0x34(r31)
lfd      f0, 0x30(r1)
lfs      f3, 0x3c(r31)
fsubs    f1, f0, f1
lfs      f0, lbl_8051D6C8@sda21(r2)
fmuls    f1, f2, f1
fmuls    f1, f3, f1
fneg     f1, f1
fmuls    f0, f1, f0
stfs     f0, 0xa0(r31)

lbl_8030C270:
li       r0, 0
stb      r0, 0x90(r31)
b        lbl_8030C2D4

lbl_8030C27C:
cmpwi    r0, 2
bne      lbl_8030C2D4
lhz      r0, 0x2c(r31)
lhz      r3, 0x30(r31)
cmplw    r0, r3
bge      lbl_8030C2CC
subf     r3, r0, r3
lis      r0, 0x4330
neg      r3, r3
stw      r0, 0x30(r1)
xoris    r0, r3, 0x8000
lfd      f1, lbl_8051D6A8@sda21(r2)
stw      r0, 0x34(r1)
lfs      f2, 0x34(r31)
lfd      f0, 0x30(r1)
lfs      f3, 0x3c(r31)
fsubs    f0, f0, f1
fmuls    f0, f2, f0
fmuls    f0, f3, f0
stfs     f0, 0xa0(r31)

lbl_8030C2CC:
li       r0, 0
stb      r0, 0x90(r31)

lbl_8030C2D4:
li       r28, 0
li       r29, 0
b        lbl_8030C438

lbl_8030C2E0:
lwz      r3, 0x7c(r31)
lwzx     r3, r3, r29
lwz      r30, 0(r3)
cmplwi   r30, 0
beq      lbl_8030C430
xoris    r3, r28, 0x8000
lfs      f0, 0x34(r31)
lis      r0, 0x4330
stw      r3, 0x34(r1)
fneg     f1, f0
lfs      f0, 0x3c(r31)
stw      r0, 0x30(r1)
mr       r3, r30
lfd      f4, lbl_8051D6A8@sda21(r2)
addi     r4, r1, 0x20
lfd      f3, 0x30(r1)
fmuls    f2, f1, f0
lfs      f1, 0xa0(r31)
fsubs    f3, f3, f4
lfs      f4, 0xa4(r31)
lfs      f5, 0x58(r31)
lfs      f0, 0x48(r31)
fmadds   f2, f3, f2, f1
lfs      f3, 0x5c(r31)
lfs      f1, 0x4c(r31)
fadds    f0, f5, f0
fadds    f4, f4, f2
stfs     f3, 0x24(r1)
fadds    f2, f3, f1
fadds    f1, f4, f0
fadds    f0, f5, f4
stfs     f2, 0x2c(r1)
stfs     f1, 0x28(r1)
stfs     f0, 0x20(r1)
bl       "place__7J2DPaneFRCQ29JGeometry8TBox2<f>"
lbz      r0, 0x84(r31)
cmplwi   r0, 0
beq      lbl_8030C3A0
mr       r3, r30
li       r4, 4
bl       setBasePosition__7J2DPaneF15J2DBasePosition
lwz      r3, 0x7c(r31)
lfs      f1, 0x44(r31)
lwzx     r3, r3, r29
lfs      f0, 0x3c(r31)
stfs     f0, 0xc(r3)
stfs     f1, 0x10(r3)
b        lbl_8030C3D0

lbl_8030C3A0:
lwz      r4, 0x60(r31)
mr       r3, r30
bl       setBasePosition__7J2DPaneF15J2DBasePosition
lfs      f1, 0x44(r31)
mr       r3, r30
lfs      f0, 0x3c(r31)
stfs     f0, 0xcc(r30)
stfs     f1, 0xd0(r30)
lwz      r12, 0(r30)
lwz      r12, 0x2c(r12)
mtctr    r12
bctrl

lbl_8030C3D0:
stfs     f31, 0xb8(r30)
mr       r3, r30
stfs     f30, 0xbc(r30)
stfs     f29, 0xc0(r30)
lwz      r12, 0(r30)
lwz      r12, 0x2c(r12)
mtctr    r12
bctrl
lwz      r0, 0x1c(r1)
mr       r3, r30
addi     r4, r1, 0xc
stw      r0, 0xc(r1)
lwz      r12, 0(r30)
lwz      r12, 0x12c(r12)
mtctr    r12
bctrl
lwz      r0, 0x18(r1)
mr       r3, r30
addi     r4, r1, 8
stw      r0, 8(r1)
lwz      r12, 0(r30)
lwz      r12, 0x128(r12)
mtctr    r12
bctrl

lbl_8030C430:
addi     r29, r29, 4
addi     r28, r28, 1

lbl_8030C438:
lhz      r0, 0x2e(r31)
cmpw     r28, r0
blt      lbl_8030C2E0

lbl_8030C444:
psq_l    f31, 120(r1), 0, qr0
lfd      f31, 0x70(r1)
psq_l    f30, 104(r1), 0, qr0
lfd      f30, 0x60(r1)
psq_l    f29, 88(r1), 0, qr0
lfd      f29, 0x50(r1)
lwz      r31, 0x4c(r1)
lwz      r30, 0x48(r1)
lwz      r29, 0x44(r1)
lwz      r0, 0x84(r1)
lwz      r28, 0x40(r1)
mtlr     r0
addi     r1, r1, 0x80
blr
	*/
}

/*
 * --INFO--
 * Address:	8030C47C
 * Size:	0000B0
 */
void CallBack_CounterRV::update()
{
	bool isInc = 0;
	bool isDec = 0;
	if (_9C) {
		_9C                  = false;
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

/*
 * --INFO--
 * Address:	8030C52C
 * Size:	000004
 */
void CallBack_CounterRV::draw(Graphics&, J2DGrafContext&) { }

/*
 * --INFO--
 * Address:	8030C530
 * Size:	0000D8
 */
CallBack_CounterRV* setCallBack_CounterRV(P2DScreen::Mgr* screen, u64 tag1, u64 tag2, u64 tag3, u32* data, u16 flag1, u16 flag2,
                                          bool isPuyo, JKRArchive* arc)
{
	CallBack_CounterRV* counter = new CallBack_CounterRV(const_cast<char**>(SujiTex32), flag1, flag2, arc);
	counter->init(screen, tag1, tag2, tag3, data, true);
	counter->mIsPuyoAnim = isPuyo;
	screen->addCallBack(tag1, counter);
	return counter;
}

/*
 * --INFO--
 * Address:	8030C608
 * Size:	00017C
 */
CallBack_CounterRV* setCallBack_CounterRV(P2DScreen::Mgr* mgr, u64 tag, u32* data, u16 flag1, bool flag2, bool isPuyo, JKRArchive* arc)
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

	CallBack_CounterRV* counter = new CallBack_CounterRV(const_cast<char**>(SujiTex32), flag1, a, arc);
	counter->init(mgr, tag1, tag2, tag3, data, flag2);
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

/*
 * --INFO--
 * Address:	........
 * Size:	000170
 */
void setCallBack_CounterRV2(P2DScreen::Mgr*, u64, u32*, u16, bool, bool, JKRArchive*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8030C784
 * Size:	00018C
 */
CallBack_CounterRV* setCallBack_CounterRV(P2DScreen::Mgr* mgr, u64 tag, u32 data, u16 flag1, bool isPuyo, bool flag2, JKRArchive* arc)
{
	u32* ptr = new u32(data);

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

	CallBack_CounterRV* counter = new CallBack_CounterRV(const_cast<char**>(SujiTex32), flag1, a, arc);
	counter->init(mgr, tag1, tag2, tag3, ptr, flag2);
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
