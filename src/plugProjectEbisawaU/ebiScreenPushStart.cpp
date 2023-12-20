#include "ebi/Screen/TPressStart.h"
#include "System.h"
#include "P2DScreen.h"
#include "ebi/Utility.h"
#include "JSystem/J2D/J2DMaterial.h"
#include "ebi/E2DGraph.h"
#include "PSSystem/PSSystemIF.h"
#include "Graphics.h"
#include "SoundID.h"
#include "Dolphin/rand.h"

static const char name[] = "ebiScreenPushStart";

namespace ebi {
namespace Screen {

/**
 * @note Address: 0x803D3B10
 * @note Size: 0x324
 */
void TPressStart::doSetArchive(JKRArchive* arc)
{
	sys->heapStatusStart("TScreenPushStart::setArchive--set_blo_a", nullptr);
	mScreens[0] = new P2DScreen::Mgr_tuning;
	mScreens[0]->set("push_start_a.blo", 0x1100000, arc);
	sys->heapStatusEnd("TScreenPushStart::setArchive--set_blo_a");

	sys->heapStatusStart("TScreenPushStart::setArchive--set_blo_b", nullptr);
	mScreens[1] = new P2DScreen::Mgr_tuning;
	mScreens[1]->set("push_start_b.blo", 0x1100000, arc);
	sys->heapStatusEnd("TScreenPushStart::setArchive--set_blo_b");

	sys->heapStatusStart("TScreenPushStart::setArchive--set_blo_c", nullptr);
	mScreens[2] = new P2DScreen::Mgr_tuning;
	mScreens[2]->set("push_start_c.blo", 0x1100000, arc);
	sys->heapStatusEnd("TScreenPushStart::setArchive--set_blo_c");

	sys->heapStatusStart("TScreenPushStart::setArchive--set_blo_d", nullptr);
	mScreens[3] = new P2DScreen::Mgr_tuning;
	mScreens[3]->set("push_start_d.blo", 0x1100000, arc);
	sys->heapStatusEnd("TScreenPushStart::setArchive--set_blo_d");

	sys->heapStatusStart("TScreenPushStart::setArchive--makeAnmPointer", nullptr);
	for (int i = 0; i < 4; i++) {
		mScreens[i]->makeAnmPointer();
	}
	sys->heapStatusEnd("TScreenPushStart::setArchive--makeAnmPointer");

	for (int i = 0; i < 4; i++) {
		static_cast<P2DScreen::Mgr*>(mScreens[i])->addCallBackPane(mScreens[i], &mAnims1[i]);
		static_cast<P2DScreen::Mgr*>(mScreens[i])->addCallBackPane(mScreens[i], &mAnims2[i]);
		static_cast<P2DScreen::Mgr*>(mScreens[i])->addCallBackPane(mScreens[i], &mAnims3[i]);
		E2DPane_setTreeInfluencedAlpha(mScreens[i], true);
		mScreens[i]->setAlpha(255);
	}

	mAnims1[0].loadAnm("push_start_a.bck", arc, 0, 99999);
	mAnims2[0].loadAnm("push_start_a.bpk", arc, 0, 99999);

	mAnims1[1].loadAnm("push_start_b.bck", arc, 0, 99999);
	mAnims2[1].loadAnm("push_start_b.bpk", arc, 0, 99999);

	mAnims1[2].loadAnm("push_start_c.bck", arc, 0, 99999);
	mAnims2[2].loadAnm("push_start_c.bpk", arc, 0, 99999);

	mAnims1[3].loadAnm("push_start_d.bck", arc, 0, 99999);
	mAnims2[3].loadAnm("push_start_d.bpk", arc, 0, 99999);
}

/**
 * @note Address: 0x803D3E34
 * @note Size: 0x28
 */
void TPressStart::doOpenScreen(ArgOpen*)
{
	mIsOpen = true;
	startLoop_();
}

/**
 * @note Address: 0x803D3E5C
 * @note Size: 0x44
 */
void TPressStart::doCloseScreen(ArgClose*)
{
	u32 time  = 0.2f / sys->mDeltaTime;
	mAlpha    = time;
	mAlphaMax = time;
}

/**
 * @note Address: 0x803D3EA0
 * @note Size: 0xA4
 */
bool TPressStart::doUpdateStateWait()
{
	mScreens[mCurrentScreen]->update();
	if (mIsOpen && mControl->getButton() & (Controller::PRESS_START | Controller::PRESS_A)) {
		PSSystem::spSysIF->playSystemSe(PSSE_SY_MENU_DECIDE, 0);
		return true;
	} else {
		if (mAnims1[mCurrentScreen].isFinish()) {
			startLoop_();
		}
		return false;
	}
}

/**
 * @note Address: 0x803D3F44
 * @note Size: 0x108
 */
bool TPressStart::doUpdateStateClose()
{
	mScreens[mCurrentScreen]->update();
	if (mAlpha) {
		mAlpha--;
	}
	f32 alpha;
	if (mAlphaMax) {
		alpha = (f32)mAlpha / (f32)mAlphaMax;
	} else {
		alpha = 0.0f;
	}

	mScreens[mCurrentScreen]->setAlpha(alpha * 255.0f);

	if (!mAlpha || mAnims1[mCurrentScreen].isFinish()) {
		return true;
	} else {
		return false;
	}
}

/**
 * @note Address: 0x803D404C
 * @note Size: 0x80
 */
void TPressStart::doDraw()
{
	Graphics* gfx       = sys->mGfx;
	J2DPerspGraph& graf = gfx->mPerspGraph;
	graf.setPort();
	mScreens[mCurrentScreen]->draw(*gfx, graf);
}

/**
 * @note Address: 0x803D40CC
 * @note Size: 0x16C
 */
void TPressStart::startLoop_()
{
	f32 r = randEbisawaFloat(); // this divides by 32767 instead of 32768. why. WHY.
	if (r < 0.25f) {
		mCurrentScreen = 0;
	} else if (r < 0.5f) {
		mCurrentScreen = 1;
	} else if (r < 0.75f) {
		mCurrentScreen = 2;
	} else {
		mCurrentScreen = 3;
	}

	for (int i = 0; i < 4; i++) {
		mScreens[i]->setAlpha(255);
		mAnims1[i].stop();
		mAnims2[i].stop();
	}
	mAnims1[mCurrentScreen].play(sys->mDeltaTime * 60.0f, J3DAA_UNKNOWN_0, true);
	mAnims2[mCurrentScreen].play(sys->mDeltaTime * 60.0f, J3DAA_UNKNOWN_0, true);
	mScreens[mCurrentScreen]->animation();
}
} // namespace Screen
} // namespace ebi
