#include "ebi/Progre.h"
#include "ebi/E2DGraph.h"
#include "og/newScreen/ogUtil.h"
#include "PSSystem/PSSystemIF.h"
#include "Controller.h"
#include "System.h"
#include "SoundID.h"

static const char className[] = "ebiScreenProgre";

namespace ebi {

/**
 * @note Address: 0x803CD6D8
 * @note Size: 0xB0
 */
void TScreenProgre::loadResource()
{
	sys->heapStatusStart("TScreenProgre::loadResource", nullptr);
	char path[PATH_MAX];
	og::newScreen::makeLanguageResName(path, "progre.szs");
	JKRArchive* arc = JKRMountArchive(path, JKRArchive::EMM_Mem, nullptr, JKRArchive::EMD_Head);
	P2ASSERTLINE(37, arc);
	sys->heapStatusEnd("TScreenProgre::loadResource");
	setArchive(arc);
}

/**
 * @note Address: 0x803CD788
 * @note Size: 0x318
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

/**
 * @note Address: 0x803CDAA0
 * @note Size: 0x3E4
 */
void TScreenProgre::startScreen(s32 state, u32 timer)
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
			mBlinkFont[1].setPaneColors(0);
			mCursor[0].start();
			mCursor[1].start();
		} else {
			mBlinkFont[0].setPaneColors(0);
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
}

/**
 * @note Address: 0x803CDE84
 * @note Size: 0x54
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

/**
 * @note Address: 0x803CDED8
 * @note Size: 0x28
 */
bool TScreenProgre::isFinish()
{
	if (mState == Progre_Fadeout && mCounterFadeout == 0) {
		return true;
	}
	return false;
}

/**
 * @note Address: N/A
 * @note Size: 0x60
 */
void TScreenProgre::killScreen()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x803CDF00
 * @note Size: 0xC0
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

/**
 * @note Address: 0x803CDFC0
 * @note Size: 0x554
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
						mCursor[0].mIsLeft = false;
						mCursor[1].mIsLeft = false;
						PSSystem::spSysIF->playSystemSe(PSSE_SY_MENU_CURSOR, 0);
					}
				} else if (mController->isMoveLeft()) {
					if (mSelect == 0) {
						mSelect = 1;
						mBlinkFont[0].enable();
						mBlinkFont[1].disable();
						mCursor[0].mIsLeft = true;
						mCursor[1].mIsLeft = true;
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

/**
 * @note Address: 0x803CE514
 * @note Size: 0xDC
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

/**
 * @note Address: 0x803CE5F0
 * @note Size: 0x308
 */
void TScreenProgre::setDecide()
{
	if (mSelect == 1) {
		mBlinkFont[0].setPaneColors(1);
		mBlinkFont[1].setPaneColors(0);
	} else {
		mBlinkFont[0].setPaneColors(0);
		mBlinkFont[1].setPaneColors(1);
	}
	PSSystem::spSysIF->playSystemSe(PSSE_SY_MENU_DECIDE, 0);
	mSelected = true;
}
} // namespace ebi
