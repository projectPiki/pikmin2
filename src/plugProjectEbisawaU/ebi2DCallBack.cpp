#include "JSystem/J2D/J2DAnm.h"
#include "JSystem/J2D/J2DAnmLoader.h"
#include "JSystem/JKernel/JKRArchive.h"
#include "JSystem/JKernel/JKRFileLoader.h"
#include "ebi/E2DCallBack.h"
#include "ebi/Utility.h"
#include "Dolphin/rand.h"
#include "P2Macros.h"

namespace ebi {

/**
 * @note Address: 0x803D068C
 * @note Size: 0x60
 */
void E2DCallBack_Purupuru::do_update()
{
	if (mPane) {
		mScale = mScaleMgr.calc();
		mPane->updateScale(mScale);
	}
}

/**
 * @note Address: 0x803D06EC
 * @note Size: 0x2CC
 */
void E2DCallBack_BlinkFontColor::do_update()
{
	if (!_49 || !(mColor1Weight < 0.001f)) {
		if (mIsTowardColor1) {
			mColor1Weight += mSpeed;
			if (mColor1Weight >= 1.0f) {
				mColor1Weight   = 1.0f;
				mIsTowardColor1 = false;
			}
		} else {
			mColor1Weight -= mSpeed;
			if (mColor1Weight <= 0.0f) {
				mColor1Weight   = 0.0f;
				mIsTowardColor1 = true;
			}
		}
	}

	if (mPane && mPane->getTypeID() == PANETYPE_TextBox) {
		JUtility::TColor color1;
		JUtility::TColor color2;
		JUtility::TColor white;
		JUtility::TColor black;

		f32 weight1 = mColor1Weight;
		f32 weight0 = 1.0f - weight1;
		EUTColor_complement(mFonts[0].mCol1, mFonts[1].mCol1, weight0, weight1, &color1);
		EUTColor_complement(mFonts[0].mCol2, mFonts[1].mCol2, weight0, weight1, &color2);
		EUTColor_complement(mFonts[0].mWhite, mFonts[1].mWhite, weight0, weight1, &white);
		EUTColor_complement(mFonts[0].mBlack, mFonts[1].mBlack, weight0, weight1, &black);

		JUtility::TColor charColor;
		charColor.set(color1);
		JUtility::TColor gradColor;
		gradColor.set(color2);
		JUtility::TColor tbWhite;
		tbWhite.set(white);
		JUtility::TColor tbBlack;
		tbBlack.set(black);

		J2DTextBox* pane = static_cast<J2DTextBox*>(mPane);
		pane->setCharColor(charColor);
		pane->setGradColor(gradColor);
		pane->setWhite(tbWhite);
		pane->setBlack(tbBlack);
	}
	/*
	stwu     r1, -0x90(r1)
	mflr     r0
	stw      r0, 0x94(r1)
	stfd     f31, 0x80(r1)
	psq_st   f31, 136(r1), 0, qr0
	stfd     f30, 0x70(r1)
	psq_st   f30, 120(r1), 0, qr0
	stmw     r26, 0x58(r1)
	mr       r27, r3
	lbz      r0, 0x49(r3)
	cmplwi   r0, 0
	beq      lbl_803D072C
	lfs      f1, 0x40(r27)
	lfs      f0, lbl_8051FA98@sda21(r2)
	fcmpo    cr0, f1, f0
	blt      lbl_803D079C

lbl_803D072C:
	lbz      r0, 0x48(r27)
	cmplwi   r0, 0
	beq      lbl_803D076C
	lfs      f2, 0x40(r27)
	lfs      f1, 0x44(r27)
	lfs      f0, lbl_8051FA9C@sda21(r2)
	fadds    f1, f2, f1
	stfs     f1, 0x40(r27)
	lfs      f1, 0x40(r27)
	fcmpo    cr0, f1, f0
	cror     2, 1, 2
	bne      lbl_803D079C
	stfs     f0, 0x40(r27)
	li       r0, 0
	stb      r0, 0x48(r27)
	b        lbl_803D079C

lbl_803D076C:
	lfs      f2, 0x40(r27)
	lfs      f1, 0x44(r27)
	lfs      f0, lbl_8051FAA0@sda21(r2)
	fsubs    f1, f2, f1
	stfs     f1, 0x40(r27)
	lfs      f1, 0x40(r27)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_803D079C
	stfs     f0, 0x40(r27)
	li       r0, 1
	stb      r0, 0x48(r27)

lbl_803D079C:
	lwz      r3, 0x18(r27)
	cmplwi   r3, 0
	beq      lbl_803D0994
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	clrlwi   r0, r3, 0x10
	cmplwi   r0, 0x13
	bne      lbl_803D0994
	li       r0, -1
	lfs      f0, lbl_8051FA9C@sda21(r2)
	stw      r0, 0x3c(r1)
	addi     r3, r27, 0x20
	addi     r4, r27, 0x30
	addi     r5, r1, 0x3c
	stw      r0, 0x38(r1)
	stw      r0, 0x34(r1)
	stw      r0, 0x30(r1)
	lfs      f31, 0x40(r27)
	fsubs    f30, f0, f31
	fmr      f2, f31
	fmr      f1, f30
	bl
EUTColor_complement__3ebiFRQ28JUtility6TColorRQ28JUtility6TColorffPQ28JUtility6TColor
	fmr      f1, f30
	addi     r3, r27, 0x24
	fmr      f2, f31
	addi     r4, r27, 0x34
	addi     r5, r1, 0x38
	bl
EUTColor_complement__3ebiFRQ28JUtility6TColorRQ28JUtility6TColorffPQ28JUtility6TColor
	fmr      f1, f30
	addi     r3, r27, 0x28
	fmr      f2, f31
	addi     r4, r27, 0x38
	addi     r5, r1, 0x34
	bl
EUTColor_complement__3ebiFRQ28JUtility6TColorRQ28JUtility6TColorffPQ28JUtility6TColor
	fmr      f1, f30
	addi     r3, r27, 0x2c
	fmr      f2, f31
	addi     r4, r27, 0x3c
	addi     r5, r1, 0x30
	bl
EUTColor_complement__3ebiFRQ28JUtility6TColorRQ28JUtility6TColorffPQ28JUtility6TColor
	lwz      r0, 0x3c(r1)
	li       r26, -1
	lwz      r5, 0x38(r1)
	addi     r4, r1, 0x18
	stw      r0, 0x2c(r1)
	lwz      r10, 0x30(r1)
	stw      r26, 0x40(r1)
	lbz      r3, 0x2c(r1)
	lbz      r0, 0x2d(r1)
	lbz      r8, 0x2e(r1)
	lbz      r7, 0x2f(r1)
	stb      r3, 0x40(r1)
	lwz      r9, 0x34(r1)
	stw      r5, 0x28(r1)
	lwz      r31, 0x18(r27)
	stb      r0, 0x41(r1)
	lbz      r5, 0x28(r1)
	mr       r3, r31
	stw      r26, 0x44(r1)
	lbz      r0, 0x29(r1)
	lbz      r27, 0x2a(r1)
	lbz      r6, 0x2b(r1)
	stb      r8, 0x42(r1)
	stb      r7, 0x43(r1)
	stw      r9, 0x24(r1)
	lwz      r7, 0x40(r1)
	stb      r5, 0x44(r1)
	lbz      r28, 0x24(r1)
	stw      r7, 0xc(r1)
	lbz      r29, 0x25(r1)
	stw      r26, 0x48(r1)
	lbz      r5, 0xc(r1)
	lbz      r30, 0x26(r1)
	stw      r10, 0x20(r1)
	lbz      r12, 0x27(r1)
	stb      r0, 0x45(r1)
	lbz      r0, 0xd(r1)
	stb      r5, 0x104(r31)
	lbz      r5, 0xe(r1)
	stb      r0, 0x105(r31)
	lbz      r0, 0xf(r1)
	stb      r5, 0x106(r31)
	lbz      r11, 0x20(r1)
	stw      r26, 0x4c(r1)
	lbz      r10, 0x21(r1)
	lbz      r9, 0x22(r1)
	lbz      r8, 0x23(r1)
	stb      r27, 0x46(r1)
	stb      r6, 0x47(r1)
	lwz      r6, 0x44(r1)
	stb      r0, 0x107(r31)
	stw      r6, 8(r1)
	lbz      r5, 8(r1)
	lbz      r0, 9(r1)
	stb      r5, 0x108(r31)
	lbz      r5, 0xa(r1)
	stb      r0, 0x109(r31)
	lbz      r0, 0xb(r1)
	stb      r5, 0x10a(r31)
	stb      r28, 0x48(r1)
	stb      r29, 0x49(r1)
	stb      r30, 0x4a(r1)
	stb      r12, 0x4b(r1)
	stb      r0, 0x10b(r31)
	lwz      r0, 0x48(r1)
	stb      r11, 0x4c(r1)
	stw      r0, 0x18(r1)
	lwz      r12, 0(r31)
	stb      r10, 0x4d(r1)
	lwz      r12, 0xa8(r12)
	stb      r9, 0x4e(r1)
	stb      r8, 0x4f(r1)
	stw      r7, 0x10(r1)
	stw      r6, 0x14(r1)
	mtctr    r12
	bctrl
	lwz      r0, 0x4c(r1)
	mr       r3, r31
	addi     r4, r1, 0x1c
	stw      r0, 0x1c(r1)
	lwz      r12, 0(r31)
	lwz      r12, 0xa4(r12)
	mtctr    r12
	bctrl

lbl_803D0994:
	psq_l    f31, 136(r1), 0, qr0
	lfd      f31, 0x80(r1)
	psq_l    f30, 120(r1), 0, qr0
	lfd      f30, 0x70(r1)
	lmw      r26, 0x58(r1)
	lwz      r0, 0x94(r1)
	mtlr     r0
	addi     r1, r1, 0x90
	blr
	*/
}

/**
 * @note Address: 0x803D09B8
 * @note Size: 0x118
 */
void E2DCallBack_BlinkAlpha::do_update()
{
	if (!_29 || !(mWeight < 0.001f)) {
		if (mIsTowardAlpha0) {
			mWeight += mSpeed;
			if (mWeight >= 1.0f) {
				mWeight         = 1.0f;
				mIsTowardAlpha0 = false;
			}
		} else {
			mWeight -= mSpeed;
			if (mWeight <= 0.0f) {
				mWeight         = 0.0f;
				mIsTowardAlpha0 = true;
			}
		}
	}

	if (mPane) {
		mPane->setAlpha((u8)((mAlpha0 - mAlpha1) * getAlphaWeight() + mAlpha1));
	}
}

/**
 * @note Address: 0x803D0AD0
 * @note Size: 0xC8
 */
void E2DCallBack_AnmBase::loadAnm(char* path, JKRArchive* archive, s32 frame, s32 maxFrame)
{
	void* resource = JKRFileLoader::getGlbResource(path, archive);
	P2ASSERTLINE(74, resource);
	mAnim             = J2DAnmLoaderDataBase::load(resource);
	mFrameCtrl.mStart = (s16)frame;
	mFrameCtrl.mFrame = (s16)frame;
	mFrameCtrl.mLoop  = (s16)frame;

	if (mAnim->mTotalFrameCount < maxFrame) {
		maxFrame = mAnim->mTotalFrameCount;
	}
	mFrameCtrl.mEnd = maxFrame;
}

/**
 * @note Address: 0x803D0B98
 * @note Size: 0x10C
 */
void E2DCallBack_AnmBase::play(f32 speed, J3DAnmAttr attr, bool doPlayFromStart)
{
	P2ASSERTLINE(90, mPane);
	P2ASSERTLINE(91, mAnim);
	mIsEnabled = true;
	mPane->setAnimation(mAnim);
	mFrameCtrl.mAttribute = attr;
	mFrameCtrl.mRate      = speed;

	if (doPlayFromStart) {
		mFrameCtrl.mFrame = mFrameCtrl.mStart;
	}

	mAnim->mCurrentFrame = mFrameCtrl.mFrame;
	mIsFinished          = false;
}

/**
 * @note Address: 0x803D0CA4
 * @note Size: 0x110
 */
void E2DCallBack_AnmBase::playBack(f32 speed, bool doPlayFromEnd)
{
	P2ASSERTLINE(107, mPane);
	P2ASSERTLINE(108, mAnim);
	mIsEnabled = true;
	mPane->setAnimation(mAnim);
	mFrameCtrl.mAttribute = J3DAA_UNKNOWN_3;
	mFrameCtrl.mRate      = -FABS(speed);
	if (doPlayFromEnd) {
		mFrameCtrl.mFrame = mFrameCtrl.mEnd;
	}

	mAnim->mCurrentFrame = mFrameCtrl.mFrame;
	mIsFinished          = false;
}

/**
 * @note Address: 0x803D0DB4
 * @note Size: 0x14
 */
void E2DCallBack_AnmBase::stop()
{
	mIsEnabled  = false;
	mIsFinished = true;
}

/**
 * @note Address: N/A
 * @note Size: 0x50
 */
void E2DCallBack_AnmBase::disconnect()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x803D0DC8
 * @note Size: 0x3C
 */
void E2DCallBack_AnmBase::setStartFrame()
{
	mFrameCtrl.mFrame    = mFrameCtrl.mStart;
	mAnim->mCurrentFrame = mFrameCtrl.mFrame;
}

/**
 * @note Address: 0x803D0E04
 * @note Size: 0x3C
 */
void E2DCallBack_AnmBase::setEndFrame()
{
	mFrameCtrl.mFrame    = mFrameCtrl.mEnd;
	mAnim->mCurrentFrame = mFrameCtrl.mFrame;
}

/**
 * @note Address: 0x803D0E40
 * @note Size: 0xC0
 */
void E2DCallBack_AnmBase::setRandFrame()
{
	f32 startFrame       = mFrameCtrl.mStart;
	f32 endFrame         = mFrameCtrl.mEnd;
	mFrameCtrl.mFrame    = randEbisawaFloat() * (endFrame - startFrame) + startFrame;
	mAnim->mCurrentFrame = mFrameCtrl.mFrame;
}

/**
 * @note Address: 0x803D0F00
 * @note Size: 0x54
 */
f32 E2DCallBack_AnmBase::getPlayFinRate()
{
	f32 startFrame = mFrameCtrl.mStart;
	f32 endFrame   = mFrameCtrl.mEnd;
	return (mFrameCtrl.mFrame - startFrame) / (endFrame - startFrame);
}

/**
 * @note Address: 0x803D0F54
 * @note Size: 0x5C
 */
void E2DCallBack_AnmBase::do_update()
{
	if (mPane) {
		mFrameCtrl.update();
		mAnim->mCurrentFrame = mFrameCtrl.mFrame;
	}
	if (mFrameCtrl.mState & 1) {
		mIsFinished = true;
	}
}

/**
 * @note Address: 0x803D0FB0
 * @note Size: 0x8
 */
bool E2DCallBack_AnmBase::isFinish() { return mIsFinished; }

/**
 * @note Address: 0x803D0FB8
 * @note Size: 0x14C
 */
void E2DCallBack_WindowCursor::do_update()
{
	if (mPane) {
		if (mCounter) {
			mCounter--;
		}

		f32 val = (mCounterMax) ? (f32)mCounter / (f32)mCounterMax : 0.0f;

		JGeometry::TBox2f box;
		box.i.x = (1.0f - val) * (mBounds2.i.x - mBounds1.i.x) + mBounds1.i.x;
		box.i.y = (1.0f - val) * (mBounds2.i.y - mBounds1.i.y) + mBounds1.i.y;
		box.f.x = (1.0f - val) * (mBounds2.f.x - mBounds1.f.x) + mBounds1.f.x;
		box.f.y = (1.0f - val) * (mBounds2.f.y - mBounds1.f.y) + mBounds1.f.y;
		mPane->place(box);
		mScale = mScaleMgr.calc();
		mPane->updateScale(mScale);

		if (mWindowPane) {
			mWindowPane->updateScale(mScale * 1.1f);
		}
	}
}
} // namespace ebi
