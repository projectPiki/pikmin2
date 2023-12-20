#include "og/Screen/DispMember.h"
#include "og/Screen/ScaleMgr.h"
#include "og/Screen/anime.h"
#include "og/Screen/callbackNodes.h"
#include "og/newScreen/WorldMapInfoWindow.h"
#include "types.h"
#include "Morimura/Bases.h"
#include "Morimura/Window.h"
#include "trig.h"

namespace Morimura {

/**
 * __ct
 * @note Address: 0x803A3644
 * @note Size: 0x50
 */
TConfirmEndWindow::TConfirmEndWindow(const char* p1)
    : og::newScreen::ObjWorldMapInfoWindow0(p1)
{
	mHasDrawn = false;
	mIsActive = false;
}

/**
 * @note Address: 0x803A3694
 * @note Size: 0x40
 */
bool TConfirmEndWindow::doStart(const Screen::StartSceneArg* arg)
{
	mFadeLevel                 = 0.0f;
	mHasDrawn                  = false;
	mIsActive                  = true;
	mDispWmap->mStartSelection = 1;
	return og::newScreen::ObjWorldMapInfoWindow0::doStart(arg);
}

/**
 * @note Address: 0x803A36D4
 * @note Size: 0x54
 */
void TConfirmEndWindow::doUpdateFadeinFinish()
{
	mAnimText1->open(0.05f);
	mAnimText2->open(0.1f);
	blink_Menu(mCurrMenuSel);
	og::newScreen::ObjSMenuPauseVS::doUpdateFadeinFinish();
}

/**
 * @note Address: 0x803A3728
 * @note Size: 0x20
 */
bool TConfirmEndWindow::doUpdateFadein() { return og::newScreen::ObjWorldMapInfoWindow0::doUpdateFadein(); }

/**
 * @note Address: 0x803A3748
 * @note Size: 0x40
 */
void TConfirmEndWindow::doUpdateFadeoutFinish()
{
	mHasDrawn = false;
	mAnimText1->stop();
	mAnimText2->stop();
}

/**
 * @note Address: 0x803A3788
 * @note Size: 0x28
 */
bool TConfirmEndWindow::doUpdateFadeout()
{
	mIsActive = 0;
	return og::newScreen::ObjSMenuPauseVS::doUpdateFadeout();
}

/**
 * @note Address: 0x803A37B0
 * @note Size: 0x38
 */
void TConfirmEndWindow::doDraw(Graphics& gfx)
{
	if (mHasDrawn) {
		ObjSMenuPauseVS::doDraw(gfx);
	} else {
		mHasDrawn = true;
	}
}

/**
 * @note Address: 0x803A37E8
 * @note Size: 0x24
 */
void TConfirmEndWindow::setRetireMsg(u64 msgID) { mAnimText2->setText(msgID); }

/**
 * @note Address: 0x803A380C
 * @note Size: 0x74
 */
TSelectExplanationWindow::TSelectExplanationWindow(JKRArchive* archive, int p2)
    : TScreenBase(archive, p2)
{
	mState           = SelWinState_Disabled;
	mScaleGrowRate   = 0.0f;
	mCurrScreenScale = 0.0f;
	mTransXModifier  = 0.0f;
	mTransYModifier  = 0.0f;
	mScaleMgr        = new og::Screen::ScaleMgr();
}

/**
 * @note Address: 0x803A3880
 * @note Size: 0x194
 */
void TSelectExplanationWindow::update()
{
	if (mState == SelWinState_Disabled) {
		mScaleGrowRate = 0.0f;
	} else {
		mScreenObj->update();
		for (int i = 0; i < mAnimScreenCountMax; i++) {
			mAnimScreens[i]->update();
		}

		switch (mState) {
		case SelWinState_Opening:
			mCurrScreenScale += mScaleGrowRate;
			if (mCurrScreenScale >= 1.0f) {
				mCurrScreenScale = 1.0f;
				screenScaleUp();
				mState = SelWinState_IdleOpen;
			}
			break;

		case SelWinState_IdleOpen:
			break;

		case SelWinState_Closing:
			mCurrScreenScale += mScaleGrowRate;
			if (mCurrScreenScale < 0.0f) {
				mCurrScreenScale = 0.0f;
				mScaleGrowRate   = 0.0f;
				mState           = SelWinState_Disabled;
			}
			break;
		}

		mScreenObj->animation();
	}

	mScreenObj->setXY((1.0f - mCurrScreenScale) * mTransXModifier, (1.0f - mCurrScreenScale) * mTransYModifier);
	mScreenObj->scaleScreen(mScaleMgr->calc());
}

/**
 * @note Address: 0x803A3A14
 * @note Size: 0x2C
 */
void TSelectExplanationWindow::draw(Graphics& gfx, J2DPerspGraph* perspGraph)
{
	if (mState != SelWinState_Disabled) {
		TScreenBase::draw(gfx, perspGraph);
	}
}

/**
 * @note Address: 0x803A3A40
 * @note Size: 0x14
 */
void TSelectExplanationWindow::openWindow()
{
	mScaleGrowRate = 0.12f;
	mState         = SelWinState_Opening;
}

/**
 * @note Address: 0x803A3A54
 * @note Size: 0x14
 */
void TSelectExplanationWindow::closeWindow()
{
	mScaleGrowRate = -0.12f;
	mState         = SelWinState_Closing;
}

} // namespace Morimura
