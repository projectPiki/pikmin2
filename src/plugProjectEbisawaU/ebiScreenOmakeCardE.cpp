#include "ebi/Omake.h"
#include "ebi/E2DGraph.h"
#include "Morimura/Zukan.h"
#include "PSSystem/PSSystemIF.h"

static const char name[] = "ebiScreenOmakeCardE";

namespace ebi {
namespace Screen {

/*
 * --INFO--
 * Address:	803F02A4
 * Size:	0002B4
 */
TOmakeCardE::TOmakeCardE()
    : mScreenObj(nullptr)
    , mPaneArrowUp(nullptr)
    , mPaneArrowDown(nullptr)
{
	mMesgScroll = nullptr;
}

/*
 * --INFO--
 * Address:	803F0558
 * Size:	000290
 */
void TOmakeCardE::doSetArchive(JKRArchive* arc)
{
	sys->heapStatusStart("Screen_newScreen_of_TOmakeCardE", nullptr);
	mScreenObj = new P2DScreen::Mgr_tuning;
	mScreenObj->set("omake_tunagu.blo", 0x1100000, arc);
	sys->heapStatusEnd("Screen_newScreen_of_TOmakeCardE");

	mPaneArrowUp   = E2DScreen_searchAssert(mScreenObj, 'yaji01');
	mPaneArrowDown = E2DScreen_searchAssert(mScreenObj, 'yaji02');
	mScreenObj->makeAnmPointer();

	J2DPane* pane = E2DScreen_searchAssert(mScreenObj, 'Tset');
	u64 tag       = pane->mMessageID;
	pane->setMsgID(0);
	E2DScreen_searchAssert(mScreenObj, 'Tset_s')->setMsgID(0);

	sys->heapStatusStart("Screen_setCallBackMessage_of_TOmakeCardE", nullptr);
	E2DPane_setTreeCallBackMessage(mScreenObj, mScreenObj);
	sys->heapStatusEnd("Screen_setCallBackMessage_of_TOmakeCardE");
	pane->setMsgID(tag);

	mMesgScroll                       = new Morimura::TCallbackScrollMsg;
	Morimura::TZukanBase::mLineSpace  = 42.0f;
	Morimura::TZukanBase::mWarpRadius = 30.0f;

	mScreenObj->addCallBack('Tset', mMesgScroll);
	og::Screen::setCallBack_3DStick(arc, mScreenObj, 'P3dsa');

	mScreenObj->addCallBackPane(mScreenObj, &mAnimationEnter);
	mScreenObj->addCallBackPane(mScreenObj, &mAnimationIdle);
	mScreenObj->addCallBackPane(mScreenObj, &mAnimationExit);
	mScreenObj->addCallBackPane(mScreenObj, &mAnimationChange);
	mScreenObj->addCallBackPane(mScreenObj, &mAnimationColor);
	mScreenObj->addCallBackPane(mScreenObj, &mAnimCalc);
	mAnimationEnter.loadAnm("omake_tunagu.bck", arc, 401, 420);
	mAnimationIdle.loadAnm("omake_tunagu.bck", arc, 151, 244);
	mAnimationExit.loadAnm("omake_tunagu.bck", arc, 381, 400);
	mAnimationChange.loadAnm("omake_tunagu.bck", arc, 578, 599);
	mAnimationColor.loadAnm("omake_tunagu.bpk", arc, 0, 100);
}

/*
 * --INFO--
 * Address:	803F07E8
 * Size:	0000BC
 */
void TOmakeCardE::doOpenScreen(ArgOpen*)
{
	mState = MainMenu;
	mAnimationEnter.play(sys->mDeltaTime * 60.0f, J3DAA_UNKNOWN_0, true);
	mAnimationColor.play(sys->mDeltaTime * 60.0f, J3DAA_UNKNOWN_2, true);
	mMesgScroll->reset();

	mPaneArrowUp->setAlpha(0);
	mPaneArrowDown->setAlpha(255);

	mScreenObj->update();
}

/*
 * --INFO--
 * Address:	803F08A4
 * Size:	000050
 */
void TOmakeCardE::doCloseScreen(ArgClose*)
{
	mAnimationIdle.stop();
	mAnimationExit.play(sys->mDeltaTime * 60.0f, J3DAA_UNKNOWN_0, true);
}

/*
 * --INFO--
 * Address:	803F08F4
 * Size:	00003C
 */
void TOmakeCardE::doInitWaitState() { mAnimationIdle.play(sys->mDeltaTime * 60.0f, J3DAA_UNKNOWN_2, true); }

/*
 * --INFO--
 * Address:	803F0930
 * Size:	000054
 */
bool TOmakeCardE::doUpdateStateOpen()
{
	mScreenObj->update();
	return !!mAnimationEnter.isFinish();
}

/*
 * --INFO--
 * Address:	803F0984
 * Size:	00029C
 */
bool TOmakeCardE::doUpdateStateWait()
{
	mScreenObj->update();

	switch (mState) {
	case MainMenu:
		u32 press = mInput->mButton.mButtonDown;
		if (press & Controller::PRESS_A) {
			PSSystem::spSysIF->playSystemSe(PSSE_SY_MENU_DECIDE, 0);
			mExitState = false;
			return true;
		}
		if (press & Controller::PRESS_B) {
			PSSystem::spSysIF->playSystemSe(PSSE_SY_MENU_CANCEL, 0);
			mExitState = true;
			return true;
		}
		if (press & Controller::PRESS_Z) {
			mAnimationIdle.stop();
			mAnimationChange.play(sys->mDeltaTime * 60.0f, J3DAA_UNKNOWN_0, true);
			PSSystem::spSysIF->playSystemSe(PSSE_SY_MESSAGE_EXIT, 0);
			mState = EnteringZoomed;
		}
		mMesgScroll->scroll(mInput->mMStick.mYPos);
		f32 scroll = mMesgScroll->getPosRate();
		int changeAlpha, alpha2, alpha1;
		alpha2      = mPaneArrowUp->getAlpha(); // register dumbness here
		alpha1      = mPaneArrowDown->getAlpha();
		changeAlpha = sys->mDeltaTime * 2550.0f;
		if (scroll <= 0.0f) {
			alpha2 -= changeAlpha;
			alpha1 += changeAlpha;
		} else {
			if (scroll >= 1.0f) {
				alpha2 += changeAlpha;
				alpha1 -= changeAlpha;
			} else {
				alpha2 += changeAlpha;
				alpha1 += changeAlpha;
			}
		}

		if (alpha2 > 255)
			alpha2 = 255;

		if (alpha2 < 0)
			alpha2 = 0;

		if (alpha1 > 255)
			alpha1 = 255;

		if (alpha1 < 0)
			alpha1 = 0;

		mPaneArrowUp->setAlpha(alpha2);
		mPaneArrowDown->setAlpha(alpha1);
		break;
	case InZoomed:
		if (mInput->mButton.mButtonDown & (Controller::PRESS_B | Controller::PRESS_Z)) {
			mAnimationIdle.stop();
			mAnimationChange.playBack(sys->mDeltaTime * 60.0f, true);
			PSSystem::spSysIF->playSystemSe(PSSE_SY_MESSAGE_EXIT, 0);
			mState = ExitingZoomed;
		}
		break;
	case ExitingZoomed:
		if (mAnimationChange.isFinish()) {
			mAnimationIdle.play(sys->mDeltaTime * 60.0f, J3DAA_UNKNOWN_2, true);
			mState = MainMenu;
		}
		break;
	case EnteringZoomed:
		if (mAnimationChange.isFinish()) {
			mState = InZoomed;
		}
		break;
	}
	return false;
}

/*
 * --INFO--
 * Address:	803F0C20
 * Size:	000054
 */
bool TOmakeCardE::doUpdateStateClose()
{
	mScreenObj->update();
	return !!mAnimationExit.isFinish();
}

/*
 * --INFO--
 * Address:	803F0C74
 * Size:	000074
 */
void TOmakeCardE::doDraw()
{
	Graphics* gfx       = sys->mGfx;
	J2DPerspGraph* graf = &gfx->mPerspGraph;

	graf->setPort();
	mScreenObj->draw(*gfx, *graf);
}

} // namespace Screen
} // namespace ebi
