#include "ebi/Progre.h"
#include "ebi/E2DGraph.h"
#include "og/newScreen/ogUtil.h"
#include "PSSystem/PSSystemIF.h"
#include "Controller.h"
#include "System.h"
#include "SoundID.h"

static const char className[] = "ebiScreenProgre";

namespace ebi {

/*
 * --INFO--
 * Address:	803CD6D8
 * Size:	0000B0
 */
void TScreenProgre::loadResource()
{
	sys->heapStatusStart("TScreenProgre::loadResource", nullptr);
	char path[256];
	og::newScreen::makeLanguageResName(path, "progre.szs");
	JKRArchive* arc = JKRArchive::mount(path, JKRArchive::EMM_Mem, nullptr, JKRArchive::EMD_Head);
	P2ASSERTLINE(37, arc);
	sys->heapStatusEnd("TScreenProgre::loadResource");
	setArchive(arc);
}

/*
 * --INFO--
 * Address:	803CD788
 * Size:	000318
 */
void TScreenProgre::setArchive(JKRArchive* arc)
{
	sys->heapStatusStart("TScreenProgre::setArchive", nullptr);
	mScreenObj = new P2DScreen::Mgr_tuning;
	mScreenObj->set("progre.blo", 0x1100000, arc);
	E2DPane_setTreeCallBackMessage(mScreenObj, mScreenObj);
	mPaneMg00  = static_cast<J2DTextBox*>(E2DScreen_searchAssert(mScreenObj, 'mg_00'));
	mPaneMg01  = static_cast<J2DTextBox*>(E2DScreen_searchAssert(mScreenObj, 'mg_01'));
	mPaneMg02  = static_cast<J2DTextBox*>(E2DScreen_searchAssert(mScreenObj, 'mg_02'));
	mPaneWin00 = E2DScreen_searchAssert(mScreenObj, 'win_00');
	mPaneYes   = static_cast<J2DTextBox*>(E2DScreen_searchAssert(mScreenObj, 'yes'));
	mPaneNo    = static_cast<J2DTextBox*>(E2DScreen_searchAssert(mScreenObj, 'no'));
	mPane_il00 = E2DScreen_searchAssert(mScreenObj, 'il00');
	mPane_ir00 = E2DScreen_searchAssert(mScreenObj, 'ir00');
	mPane_il01 = E2DScreen_searchAssert(mScreenObj, 'il01');
	mPane_ir01 = E2DScreen_searchAssert(mScreenObj, 'ir01');

	E2DPane_setTreeInfluencedAlpha(mPaneMg00, true);
	mPaneMg00->setAlpha(0);

	E2DPane_setTreeInfluencedAlpha(mPaneMg01, true);
	mPaneMg01->setAlpha(0);

	E2DPane_setTreeInfluencedAlpha(mPaneMg02, true);
	mPaneMg02->setAlpha(0);

	E2DPane_setTreeInfluencedAlpha(mPaneWin00, true);
	mPaneWin00->setAlpha(0);

	J2DTextBox* color = static_cast<J2DTextBox*>(E2DScreen_searchAssert(mScreenObj, 's_color'));
	mBlinkFont[0].set(mPaneNo, color);
	mBlinkFont[1].set(mPaneNo, color);
	mScreenObj->addCallBackPane(mPaneYes, &mBlinkFont[0]);
	mScreenObj->addCallBackPane(mPaneNo, &mBlinkFont[1]);
	E2DPane_setTreeShow(mScreenObj);
	color->hide();
	mPane_il00->setAlpha(0);
	mPane_ir00->setAlpha(0);
	mPane_il01->setAlpha(0);
	mPane_ir01->setAlpha(0);
	mCounterFadein     = 0;
	mCounterFadeinMax  = 0;
	mCounterFadeout    = 0;
	mCounterFadeoutMax = 0;
	mCursor[0].setPanes(mPane_il00, mPane_il01);
	mCursor[1].setPanes(mPane_ir00, mPane_ir01);

	sys->heapStatusEnd("TScreenProgre::setArchive");
}

/*
 * --INFO--
 * Address:	803CDAA0
 * Size:	0003E4
 */
void TScreenProgre::startScreen(long state, u32 timer)
{
	mStateScreen = state;
	switch (mStateScreen) {
	case ProgreScreen_Msg00:
		mSelected = false;
		mPaneMg00->setAlpha(0);
		mPaneMg01->setAlpha(0);
		mPaneMg02->setAlpha(0);
		mPaneWin00->setAlpha(0);
		if (mSelect == 1) {
			mBlinkFont[0].enable();
			mBlinkFont[1].mIsEnabled = false;

			if (mBlinkFont[1].mPane)
			{
				static_cast<J2DTextBox*>(mBlinkFont[1].mPane)->mCharColor = mBlinkFont[1].mFonts[0].mCol1.toUInt32();

				static_cast<J2DTextBox*>(mBlinkFont[1].mPane)->mGradientColor = mBlinkFont[1].mFonts[0].mCol2.toUInt32();

				mPaneMg02->setWhite(mBlinkFont[1].mFonts[0].mWhite);

				mPaneMg02->setBlack(mBlinkFont[1].mFonts[0].mBlack);
			}
			
			// color hell
			mCursor[0].start();
			mCursor[1].start();
		} else {
			mBlinkFont[0].mIsEnabled = false;

			if (mBlinkFont[0].mPane)
			{
				static_cast<J2DTextBox*>(mBlinkFont[0].mPane)->mCharColor = mBlinkFont[1].mFonts[0].mCol1.toUInt32();

				static_cast<J2DTextBox*>(mBlinkFont[0].mPane)->mGradientColor = mBlinkFont[1].mFonts[0].mCol2.toUInt32();

				mPaneMg02->setWhite(mBlinkFont[0].mFonts[0].mWhite);

				mPaneMg02->setBlack(mBlinkFont[0].mFonts[0].mBlack);
			}

			// color hell
			mBlinkFont[1].enable();
			mCursor[0].stop();
			mCursor[1].stop();
		}
		mCursor[0].update();
		mCursor[1].update();
		mCursor[0].mCursor.create(nullptr);
		mCursor[1].mCursor.create(nullptr);
		break;
	case ProgreScreen_Msg01:
		mSelected = false;
		mPaneMg00->setAlpha(0);
		mPaneMg01->setAlpha(0);
		mPaneMg02->setAlpha(0);
		mPaneWin00->setAlpha(255);
		break;
	case ProgreScreen_Msg02:
		mSelected = false;
		mPaneMg00->setAlpha(0);
		mPaneMg01->setAlpha(0);
		mPaneMg02->setAlpha(0);
		mPaneWin00->setAlpha(255);
		break;
	}
	startState(Progre_Fadein, timer);
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	stw      r31, 0x4c(r1)
	mr       r31, r5
	stw      r30, 0x48(r1)
	mr       r30, r3
	stw      r29, 0x44(r1)
	stw      r4, 0x20(r3)
	lwz      r0, 0x20(r3)
	cmpwi    r0, 1
	beq      lbl_803CDD84
	bge      lbl_803CDAE0
	cmpwi    r0, 0
	bge      lbl_803CDAEC
	b        lbl_803CDE58

lbl_803CDAE0:
	cmpwi    r0, 3
	bge      lbl_803CDE58
	b        lbl_803CDDF0

lbl_803CDAEC:
	li       r0, 0
	li       r4, 0
	stb      r0, 9(r30)
	lwz      r3, 0x28(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x2c(r30)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x30(r30)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x34(r30)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	lbz      r0, 8(r30)
	cmplwi   r0, 1
	bne      lbl_803CDC54
	li       r4, 1
	lfs      f2, lbl_8051FA58@sda21(r2)
	stb      r4, 0x6c(r30)
	li       r0, 0
	lfs      f0, lbl_8051FA5C@sda21(r2)
	lwz      r3, sys@sda21(r13)
	lfs      f1, 0x54(r3)
	fmuls    f1, f2, f1
	stfs     f1, 0x94(r30)
	stfs     f0, 0x90(r30)
	stb      r4, 0x98(r30)
	stb      r0, 0x99(r30)
	stb      r0, 0xb8(r30)
	lwz      r3, 0xb4(r30)
	cmplwi   r3, 0
	beq      lbl_803CDC38
	lwz      r7, 0xbc(r30)
	mr       r29, r3
	addi     r4, r1, 0x30
	stw      r7, 0x14(r1)
	lbz      r5, 0x14(r1)
	lbz      r0, 0x15(r1)
	stb      r5, 0x104(r3)
	lbz      r5, 0x16(r1)
	stb      r0, 0x105(r3)
	lbz      r0, 0x17(r1)
	stb      r5, 0x106(r3)
	stb      r0, 0x107(r3)
	lwz      r6, 0xc0(r30)
	stw      r7, 0x28(r1)
	stw      r6, 0x10(r1)
	lbz      r5, 0x10(r1)
	lbz      r0, 0x11(r1)
	stb      r5, 0x108(r3)
	lbz      r5, 0x12(r1)
	stb      r0, 0x109(r3)
	lbz      r0, 0x13(r1)
	stb      r5, 0x10a(r3)
	stb      r0, 0x10b(r3)
	lwz      r0, 0xc4(r30)
	stw      r6, 0x2c(r1)
	stw      r0, 0x30(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0xc8(r30)
	mr       r3, r29
	addi     r4, r1, 0x34
	stw      r0, 0x34(r1)
	lwz      r12, 0(r29)
	lwz      r12, 0xa4(r12)
	mtctr    r12
	bctrl

lbl_803CDC38:
	lfs      f0, lbl_8051FA60@sda21(r2)
	li       r0, 1
	stfs     f0, 0x110(r30)
	stb      r0, 0x114(r30)
	stfs     f0, 0x148(r30)
	stb      r0, 0x14c(r30)
	b        lbl_803CDD40

lbl_803CDC54:
	li       r0, 0
	stb      r0, 0x6c(r30)
	lwz      r3, 0x68(r30)
	cmplwi   r3, 0
	beq      lbl_803CDD00
	lwz      r7, 0x70(r30)
	mr       r29, r3
	addi     r4, r1, 0x20
	stw      r7, 0xc(r1)
	lbz      r5, 0xc(r1)
	lbz      r0, 0xd(r1)
	stb      r5, 0x104(r3)
	lbz      r5, 0xe(r1)
	stb      r0, 0x105(r3)
	lbz      r0, 0xf(r1)
	stb      r5, 0x106(r3)
	stb      r0, 0x107(r3)
	lwz      r6, 0x74(r30)
	stw      r7, 0x18(r1)
	stw      r6, 8(r1)
	lbz      r5, 8(r1)
	lbz      r0, 9(r1)
	stb      r5, 0x108(r3)
	lbz      r5, 0xa(r1)
	stb      r0, 0x109(r3)
	lbz      r0, 0xb(r1)
	stb      r5, 0x10a(r3)
	stb      r0, 0x10b(r3)
	lwz      r0, 0x78(r30)
	stw      r6, 0x1c(r1)
	stw      r0, 0x20(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x7c(r30)
	mr       r3, r29
	addi     r4, r1, 0x24
	stw      r0, 0x24(r1)
	lwz      r12, 0(r29)
	lwz      r12, 0xa4(r12)
	mtctr    r12
	bctrl

lbl_803CDD00:
	li       r4, 1
	lfs      f2, lbl_8051FA58@sda21(r2)
	stb      r4, 0xb8(r30)
	li       r0, 0
	lfs      f0, lbl_8051FA5C@sda21(r2)
	lwz      r3, sys@sda21(r13)
	lfs      f1, 0x54(r3)
	fmuls    f1, f2, f1
	stfs     f1, 0xe0(r30)
	stfs     f0, 0xdc(r30)
	stb      r4, 0xe4(r30)
	stb      r0, 0xe5(r30)
	stfs     f0, 0x110(r30)
	stb      r0, 0x114(r30)
	stfs     f0, 0x148(r30)
	stb      r0, 0x14c(r30)

lbl_803CDD40:
	addi     r3, r30, 0xe8
	bl       update__Q23ebi12TYesNoCursorFv
	addi     r3, r30, 0x120
	bl       update__Q23ebi12TYesNoCursorFv
	addi     r3, r30, 0xe8
	li       r4, 0
	lwz      r12, 0xe8(r30)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	addi     r3, r30, 0x120
	li       r4, 0
	lwz      r12, 0x120(r30)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	b        lbl_803CDE58

lbl_803CDD84:
	li       r0, 0
	li       r4, 0
	stb      r0, 9(r30)
	lwz      r3, 0x28(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x2c(r30)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x30(r30)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x34(r30)
	li       r4, 0xff
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	b        lbl_803CDE58

lbl_803CDDF0:
	li       r0, 0
	li       r4, 0
	stb      r0, 9(r30)
	lwz      r3, 0x28(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x2c(r30)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x30(r30)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x34(r30)
	li       r4, 0xff
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl

lbl_803CDE58:
	mr       r3, r30
	mr       r5, r31
	li       r4, 1
	bl       startState__Q23ebi13TScreenProgreFQ33ebi13TScreenProgre9enumStateUl
	lwz      r0, 0x54(r1)
	lwz      r31, 0x4c(r1)
	lwz      r30, 0x48(r1)
	lwz      r29, 0x44(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

/*
 * --INFO--
 * Address:	803CDE84
 * Size:	000054
 */
bool TScreenProgre::fadeout(u32 timer)
{
	if (!mSelected) {
		return false;
	}

	if (mState != Progre_Fadeout) {
		startState(Progre_Fadeout, timer);
		return true;
	}
	return false;
}

/*
 * --INFO--
 * Address:	803CDED8
 * Size:	000028
 */
bool TScreenProgre::isFinish()
{
	if (mState == Progre_Fadeout && mCounterFadeout == 0) {
		return true;
	}
	return false;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000060
 */
void TScreenProgre::killScreen()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803CDF00
 * Size:	0000C0
 */
void TScreenProgre::startState(enumState state, u32 timer)
{
	mState = state;
	switch (mState) {
	case Progre_NULL:
		mCursor[0].mCursor.fade();
		mCursor[1].mCursor.fade();
		break;
	case Progre_Fadein:
		mCounterFadein    = timer;
		mCounterFadeinMax = timer;
		break;
	case Progre_Fadeout:
		mCounterFadeout    = timer;
		mCounterFadeoutMax = timer;
		mCursor[0].mCursor.fade();
		mCursor[1].mCursor.fade();
		break;
	}
}

/*
 * --INFO--
 * Address:	803CDFC0
 * Size:	000554
 */
void TScreenProgre::update()
{
	switch (mState) {
	case Progre_NULL:
		break;
	case Progre_Fadein:
		if (mCounterFadein)
			mCounterFadein--;
		switch (mStateScreen) {
		case ProgreScreen_Msg00:
			f32 calc;
			if (mCounterFadeinMax) {
				calc = (f32)mCounterFadein / (f32)mCounterFadeinMax;
			} else {
				calc = 0.0f;
			}
			u8 alpha = (1.0f - calc) * 255.0f;
			mPaneMg00->setAlpha(alpha);
			mPaneWin00->setAlpha(alpha);
			mCursor[0].update();
			mCursor[1].update();
			break;
		case ProgreScreen_Msg01:
			f32 calc2;
			if (mCounterFadeinMax) {
				calc2 = (f32)mCounterFadein / (f32)mCounterFadeinMax;
			} else {
				calc2 = 0.0f;
			}
			calc2 = (1.0f - calc2) * 255.0f;
			mPaneMg01->setAlpha(calc2);
			break;
		case ProgreScreen_Msg02:
			f32 calc3;
			if (mCounterFadeinMax) {
				calc3 = (f32)mCounterFadein / (f32)mCounterFadeinMax;
			} else {
				calc3 = 0.0f;
			}
			calc3 = (1.0f - calc3) * 255.0f;
			mPaneMg02->setAlpha(calc3);
			break;
		}
		if (mCounterFadein == 0) {
			startState(Progre_Select, 0);
		}
		break;

	case Progre_Select:
		mScreenObj->update();
		switch (mStateScreen) {
		case ProgreScreen_Msg00:
			if (mCounterFadein == 0 && !mSelected) {
				if (mController->isMoveRight()) {
					if (mSelect == 1) {
						mSelect = 0;
						mBlinkFont[0].disable();
						mBlinkFont[1].enable();
						mCursor[0].mSelected = false;
						mCursor[1].mSelected = false;
						PSSystem::spSysIF->playSystemSe(PSSE_SY_MENU_CURSOR, 0);
					}
				} else if (mController->isMoveLeft()) {
					if (mSelect == 0) {
						mSelect = 1;
						mBlinkFont[0].enable();
						mBlinkFont[1].disable();
						mCursor[0].mSelected = true;
						mCursor[1].mSelected = true;
						PSSystem::spSysIF->playSystemSe(PSSE_SY_MENU_CURSOR, 0);
					}
				} else if (mController->getButtonDown() & Controller::PRESS_A) {
					setDecide();
					return;
				}
			}
			mCursor[0].update();
			mCursor[1].update();
			break;
		default:
			mSelected = true;
		}
		break;

	case Progre_Fadeout:
		if (mCounterFadeout)
			mCounterFadeout--;

		f32 calc;
		if (mCounterFadeoutMax) {
			calc = (f32)mCounterFadeout / (f32)mCounterFadeoutMax;
		} else {
			calc = 0.0f;
		}
		u8 alpha = calc * 255.0f;
		switch (mStateScreen) {
		case ProgreScreen_Msg00:
			mPaneMg00->setAlpha(alpha);
			break;
		case ProgreScreen_Msg01:
			mPaneMg01->setAlpha(alpha);
			break;
		case ProgreScreen_Msg02:
			mPaneMg02->setAlpha(alpha);
			break;
		}
		break;
	}
}

/*
 * --INFO--
 * Address:	803CE514
 * Size:	0000DC
 */
void TScreenProgre::draw()
{
	if (mState != Progre_NULL) {
		J2DPerspGraph* graf = &sys->mGfx->mPerspGraph;
		Graphics gfx;
		graf->setPort();
		mScreenObj->draw(gfx, *graf);
	}
}

/*
 * --INFO--
 * Address:	803CE5F0
 * Size:	000308
 */
void TScreenProgre::setDecide()
{
	// a LOT of color hell
	PSSystem::spSysIF->playSystemSe(PSSE_SY_MENU_DECIDE, 0);
	mSelected = true;
	/*
	stwu     r1, -0x70(r1)
	mflr     r0
	stw      r0, 0x74(r1)
	stw      r31, 0x6c(r1)
	mr       r31, r3
	stw      r30, 0x68(r1)
	lbz      r0, 8(r3)
	cmplwi   r0, 1
	bne      lbl_803CE770
	li       r0, 0
	stb      r0, 0x6c(r31)
	lwz      r3, 0x68(r31)
	cmplwi   r3, 0
	beq      lbl_803CE6C0
	lwz      r7, 0x80(r31)
	mr       r30, r3
	addi     r4, r1, 0x60
	stw      r7, 0x24(r1)
	lbz      r5, 0x24(r1)
	lbz      r0, 0x25(r1)
	stb      r5, 0x104(r3)
	lbz      r5, 0x26(r1)
	stb      r0, 0x105(r3)
	lbz      r0, 0x27(r1)
	stb      r5, 0x106(r3)
	stb      r0, 0x107(r3)
	lwz      r6, 0x84(r31)
	stw      r7, 0x58(r1)
	stw      r6, 0x20(r1)
	lbz      r5, 0x20(r1)
	lbz      r0, 0x21(r1)
	stb      r5, 0x108(r3)
	lbz      r5, 0x22(r1)
	stb      r0, 0x109(r3)
	lbz      r0, 0x23(r1)
	stb      r5, 0x10a(r3)
	stb      r0, 0x10b(r3)
	lwz      r0, 0x88(r31)
	stw      r6, 0x5c(r1)
	stw      r0, 0x60(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x8c(r31)
	mr       r3, r30
	addi     r4, r1, 0x64
	stw      r0, 0x64(r1)
	lwz      r12, 0(r30)
	lwz      r12, 0xa4(r12)
	mtctr    r12
	bctrl

lbl_803CE6C0:
	li       r0, 0
	stb      r0, 0xb8(r31)
	lwz      r3, 0xb4(r31)
	cmplwi   r3, 0
	beq      lbl_803CE8C8
	lwz      r7, 0xbc(r31)
	mr       r30, r3
	addi     r4, r1, 0x50
	stw      r7, 0x1c(r1)
	lbz      r5, 0x1c(r1)
	lbz      r0, 0x1d(r1)
	stb      r5, 0x104(r3)
	lbz      r5, 0x1e(r1)
	stb      r0, 0x105(r3)
	lbz      r0, 0x1f(r1)
	stb      r5, 0x106(r3)
	stb      r0, 0x107(r3)
	lwz      r6, 0xc0(r31)
	stw      r7, 0x48(r1)
	stw      r6, 0x18(r1)
	lbz      r5, 0x18(r1)
	lbz      r0, 0x19(r1)
	stb      r5, 0x108(r3)
	lbz      r5, 0x1a(r1)
	stb      r0, 0x109(r3)
	lbz      r0, 0x1b(r1)
	stb      r5, 0x10a(r3)
	stb      r0, 0x10b(r3)
	lwz      r0, 0xc4(r31)
	stw      r6, 0x4c(r1)
	stw      r0, 0x50(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0xc8(r31)
	mr       r3, r30
	addi     r4, r1, 0x54
	stw      r0, 0x54(r1)
	lwz      r12, 0(r30)
	lwz      r12, 0xa4(r12)
	mtctr    r12
	bctrl
	b        lbl_803CE8C8

lbl_803CE770:
	li       r0, 0
	stb      r0, 0x6c(r31)
	lwz      r3, 0x68(r31)
	cmplwi   r3, 0
	beq      lbl_803CE81C
	lwz      r7, 0x70(r31)
	mr       r30, r3
	addi     r4, r1, 0x40
	stw      r7, 0x14(r1)
	lbz      r5, 0x14(r1)
	lbz      r0, 0x15(r1)
	stb      r5, 0x104(r3)
	lbz      r5, 0x16(r1)
	stb      r0, 0x105(r3)
	lbz      r0, 0x17(r1)
	stb      r5, 0x106(r3)
	stb      r0, 0x107(r3)
	lwz      r6, 0x74(r31)
	stw      r7, 0x38(r1)
	stw      r6, 0x10(r1)
	lbz      r5, 0x10(r1)
	lbz      r0, 0x11(r1)
	stb      r5, 0x108(r3)
	lbz      r5, 0x12(r1)
	stb      r0, 0x109(r3)
	lbz      r0, 0x13(r1)
	stb      r5, 0x10a(r3)
	stb      r0, 0x10b(r3)
	lwz      r0, 0x78(r31)
	stw      r6, 0x3c(r1)
	stw      r0, 0x40(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x7c(r31)
	mr       r3, r30
	addi     r4, r1, 0x44
	stw      r0, 0x44(r1)
	lwz      r12, 0(r30)
	lwz      r12, 0xa4(r12)
	mtctr    r12
	bctrl

lbl_803CE81C:
	li       r0, 0
	stb      r0, 0xb8(r31)
	lwz      r3, 0xb4(r31)
	cmplwi   r3, 0
	beq      lbl_803CE8C8
	lwz      r7, 0xcc(r31)
	mr       r30, r3
	addi     r4, r1, 0x30
	stw      r7, 0xc(r1)
	lbz      r5, 0xc(r1)
	lbz      r0, 0xd(r1)
	stb      r5, 0x104(r3)
	lbz      r5, 0xe(r1)
	stb      r0, 0x105(r3)
	lbz      r0, 0xf(r1)
	stb      r5, 0x106(r3)
	stb      r0, 0x107(r3)
	lwz      r6, 0xd0(r31)
	stw      r7, 0x28(r1)
	stw      r6, 8(r1)
	lbz      r5, 8(r1)
	lbz      r0, 9(r1)
	stb      r5, 0x108(r3)
	lbz      r5, 0xa(r1)
	stb      r0, 0x109(r3)
	lbz      r0, 0xb(r1)
	stb      r5, 0x10a(r3)
	stb      r0, 0x10b(r3)
	lwz      r0, 0xd4(r31)
	stw      r6, 0x2c(r1)
	stw      r0, 0x30(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0xd8(r31)
	mr       r3, r30
	addi     r4, r1, 0x34
	stw      r0, 0x34(r1)
	lwz      r12, 0(r30)
	lwz      r12, 0xa4(r12)
	mtctr    r12
	bctrl

lbl_803CE8C8:
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	li       r4, 0x1800
	li       r5, 0
	bl       playSystemSe__Q28PSSystem5SysIFFUlUl
	li       r0, 1
	stb      r0, 9(r31)
	lwz      r0, 0x74(r1)
	lwz      r31, 0x6c(r1)
	lwz      r30, 0x68(r1)
	mtlr     r0
	addi     r1, r1, 0x70
	blr
	*/
}
} // namespace ebi
