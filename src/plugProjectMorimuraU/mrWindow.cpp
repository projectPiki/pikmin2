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

/*
 * __ct
 * --INFO--
 * Address:	803A3644
 * Size:	000050
 */
TConfirmEndWindow::TConfirmEndWindow(const char* p1)
    : og::newScreen::ObjWorldMapInfoWindow0(p1)
{
	mHasDrawn = false;
	mIsActive = false;
}

/*
 * --INFO--
 * Address:	803A3694
 * Size:	000040
 */
bool TConfirmEndWindow::doStart(const Screen::StartSceneArg* arg)
{
	mFadeLevel                 = 0.0f;
	mHasDrawn                  = false;
	mIsActive                  = true;
	mDispWmap->mStartSelection = 1;
	return og::newScreen::ObjWorldMapInfoWindow0::doStart(arg);
}

/*
 * --INFO--
 * Address:	803A36D4
 * Size:	000054
 */
void TConfirmEndWindow::doUpdateFadeinFinish()
{
	mAnimText1->open(0.05f);
	mAnimText2->open(0.1f);
	blink_Menu(mCurrMenuSel);
	og::newScreen::ObjSMenuPauseVS::doUpdateFadeinFinish();
}

/*
 * --INFO--
 * Address:	803A3728
 * Size:	000020
 */
bool TConfirmEndWindow::doUpdateFadein() { return og::newScreen::ObjWorldMapInfoWindow0::doUpdateFadein(); }

/*
 * --INFO--
 * Address:	803A3748
 * Size:	000040
 */
void TConfirmEndWindow::doUpdateFadeoutFinish()
{
	mHasDrawn = false;
	mAnimText1->stop();
	mAnimText2->stop();
}

/*
 * --INFO--
 * Address:	803A3788
 * Size:	000028
 */
bool TConfirmEndWindow::doUpdateFadeout()
{
	mIsActive = 0;
	return og::newScreen::ObjSMenuPauseVS::doUpdateFadeout();
}

/*
 * --INFO--
 * Address:	803A37B0
 * Size:	000038
 */
void TConfirmEndWindow::doDraw(Graphics& gfx)
{
	if (mHasDrawn) {
		ObjSMenuPauseVS::doDraw(gfx);
	} else {
		mHasDrawn = true;
	}
}

/*
 * --INFO--
 * Address:	803A37E8
 * Size:	000024
 */
void TConfirmEndWindow::setRetireMsg(u64 msgID) { mAnimText2->setText(msgID); }

/*
 * --INFO--
 * Address:	803A380C
 * Size:	000074
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

/*
 * --INFO--
 * Address:	803A3880
 * Size:	000194
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

/*
 * --INFO--
 * Address:	803A3A14
 * Size:	00002C
 */
void TSelectExplanationWindow::draw(Graphics& gfx, J2DPerspGraph* perspGraph)
{
	if (mState != SelWinState_Disabled) {
		TScreenBase::draw(gfx, perspGraph);
	}
}

/*
 * --INFO--
 * Address:	803A3A40
 * Size:	000014
 */
void TSelectExplanationWindow::openWindow()
{
	mScaleGrowRate = 0.12f;
	mState         = SelWinState_Opening;
}

/*
 * --INFO--
 * Address:	803A3A54
 * Size:	000014
 */
void TSelectExplanationWindow::closeWindow()
{
	mScaleGrowRate = -0.12f;
	mState         = SelWinState_Closing;
}

} // namespace Morimura
