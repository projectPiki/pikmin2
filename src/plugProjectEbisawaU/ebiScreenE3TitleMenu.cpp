#include "types.h"
#include "ebi/Screen/TScreenTitleMenu.h"
#include "ebi/E2DGraph.h"
#include "JSystem/JKernel/JKRArchive.h"
#include "Graphics.h"
#include "PSSystem/PSSystemIF.h"
#include "SoundID.h"
#include "Dolphin/rand.h"

static const char name[] = "ebiScreenE3TitleMenu";

namespace ebi {
namespace Screen {

/**
 * @note Address: 0x803EA728 (GPVJ01)
 * @note Size: 0x458
 * @note Fabricated name. Might be doLoadResource.
 */
void TScreenTitleMenu::loadResource()
{
	sys->heapStatusStart("TScreenTitleMenu::loadResource", nullptr);

	sys->heapStatusStart("TScreenTitleMenu::loadResource--mount_arc", nullptr);
	JKRArchive* arc = JKRArchive::mount("new_screen/jpn/E3_title_menu.szs", JKRArchive::EMM_Mem, nullptr, JKRArchive::EMD_Head);
	P2ASSERTLINE(25, arc);
	sys->heapStatusEnd("TScreenTitleMenu::loadResource--mount_arc");

	sys->heapStatusStart("TScreenTitleMenu::loadResource--set_blo", nullptr);
	mScreen = new P2DScreen::Mgr_tuning;
	mScreen->set("E3_title_menu.blo", 0x1100000, arc);
	sys->heapStatusEnd("TScreenTitleMenu::loadResource--set_blo");

	mCategoryPanes[0] = E2DScreen_searchAssert(mScreen, 'Ngame');
	mCategoryPanes[1] = E2DScreen_searchAssert(mScreen, 'Nvs');

	mPikminCounts[0] = mScreen->gather(mPikminPanes[0], 'Ppiga00', 'Ppiga99', 100);
	P2ASSERTLINE(46, mPikminCounts[0] < 100);

	mPikminCounts[1] = mScreen->gather(mPikminPanes[1], 'Ppivs00', 'Ppivs99', 100);
	P2ASSERTLINE(52, mPikminCounts[1] < 100);

	J2DPane* leftPanes[2];
	J2DPane* rightPanes[2];
	leftPanes[0]  = E2DScreen_searchAssert(mScreen, 'Pgail');
	leftPanes[1]  = E2DScreen_searchAssert(mScreen, 'Pvsil');
	rightPanes[0] = E2DScreen_searchAssert(mScreen, 'Pgair');
	rightPanes[1] = E2DScreen_searchAssert(mScreen, 'Pvsir');

	sys->heapStatusStart("TScreenTitleMenu::loadResource--new_ogCallBack", nullptr);
	E2DPane_setTreeCallBackMessage(mScreen, mScreen);
	sys->heapStatusEnd("TScreenTitleMenu::loadResource--new_ogCallBack");

	mScreen->addCallBackPane(mScreen, &mOpeningAnim);

	for (int i = 0; i < 2; i++) {
		mScreen->addCallBackPane(mCategoryPanes[i], &mCategoryAnims[i]);
	}

	for (int i = 0; i < 2; i++) {
		mScreen->addCallBackPane(leftPanes[i], &mLeftIntroAnim[i]);
		mScreen->addCallBackPane(rightPanes[i], &mRightIntroAnim[i]);
		mScreen->addCallBackPane(leftPanes[i], &mLeftLoopAnim[i]);
		mScreen->addCallBackPane(rightPanes[i], &mRightLoopAnim[i]);
	}

	mScreen->addCallBackPane(mScreen, &mCalcAnimation);

	char* path = "E3_title_menu.bck";
	mCategoryAnims[0].loadAnm(path, arc, 100, 221);
	mCategoryAnims[1].loadAnm(path, arc, 300, 421);
	mLeftIntroAnim[0].loadAnm(path, arc, 95, 109);
	mLeftLoopAnim[0].loadAnm(path, arc, 110, 229);
	mLeftIntroAnim[1].loadAnm(path, arc, 295, 309);
	mLeftLoopAnim[1].loadAnm(path, arc, 310, 429);
	mRightIntroAnim[0].loadAnm(path, arc, 95, 109);
	mRightLoopAnim[0].loadAnm(path, arc, 110, 229);
	mRightIntroAnim[1].loadAnm(path, arc, 295, 309);
	mRightLoopAnim[1].loadAnm(path, arc, 310, 429);

	mOpeningAnim.loadAnm("E3_title_menu.bck", arc, 0, 100);

	E2DPane_setTreeInfluencedAlpha(mScreen, true);

	for (int i = 0; i < 2; i++) {
		mLeftIcons[i].mAnimA   = &mLeftIntroAnim[i];
		mLeftIcons[i].mAnimB   = &mLeftLoopAnim[i];
		mLeftIcons[i].mStatus  = 0;
		mRightIcons[i].mAnimA  = &mRightIntroAnim[i];
		mRightIcons[i].mAnimB  = &mRightLoopAnim[i];
		mRightIcons[i].mStatus = 0;
	}

	sys->heapStatusEnd("TScreenTitleMenu::loadResource");
}

/**
 * @note Address: 0x803EAB80 (GPVJ01)
 * @note Size: 0x8
 * @note Fabricated name.
 */
void TScreenTitleMenu::setController(Controller* controller)
{
	mController = controller;
}

/**
 * @note Address: 0x803EAB88 (GPVJ01)
 * @note Size: 0x60
 * @note Fabricated name. Might be doOpenScreen.
 */
void TScreenTitleMenu::openScreen(bool)
{
	mSelectedMenu = 0;
	mPad.init(mController, 0, 1, &mSelectedMenu, EUTPadInterface_countNum::MODE_DOWNUP, 0.66f, 0.15f);
	setState(STATE_Opening);
}

/**
 * @note Address: 0x803EABE8 (GPVJ01)
 * @note Size: 0x24
 * @note Fabricated name. Might be closeScreen or doCloseScreen.
 */
void TScreenTitleMenu::killScreen()
{
	setState(STATE_Inactive);
}

/**
 * @note Address: 0x803EAC0C (GPVJ01)
 * @note Size: 0x10
 * @note Fabricated name.
 */
u8 TScreenTitleMenu::isFinishScreen()
{
	return mState == STATE_Inactive ? TRUE : FALSE;
}

/**
 * @note Address: 0x803EAC1C (GPVJ01)
 * @note Size: 0x8
 * @note Fabricated name.
 */
bool TScreenTitleMenu::isDecide()
{
	return mDecided;
}

/**
 * @note Address: 0x803EAC24 (GPVJ01)
 * @note Size: 0x8
 * @note Fabricated name.
 */
bool TScreenTitleMenu::isCancel()
{
	return mCancelled;
}

/**
 * @note Address: 0x803EAC2C (GPVJ01)
 * @note Size: 0x1C0
 * @note Fabricated name.
 */
void TScreenTitleMenu::setState(s32 state)
{
	mState = state;
	switch (mState) {
	case STATE_Inactive: {
		break;
	}

	case STATE_Opening: {
		mScreen->clearAnmTransform();
		mOpeningAnim.play(sys->mDeltaTime * 60.0f, J3DAA_UNKNOWN_0, true);
		mDecided   = false;
		mCancelled = false;
		mScreen->setAlpha(255);
		break;
	}

	case STATE_Active: {
		mCategoryAnims[mSelectedMenu].play(sys->mDeltaTime * 60.0f, J3DAA_UNKNOWN_0, true);
		showPika_(mSelectedMenu);
		mLeftIcons[mSelectedMenu].start();
		mRightIcons[mSelectedMenu].start();
		break;
	}

	case STATE_Closing: {
		if (mCancelled) {
			u32 count        = 0.2f / sys->mDeltaTime;
			mCloseCounter    = count;
			mCloseCounterMax = count;
		} else {
			u32 count        = 1.0f / sys->mDeltaTime;
			mCloseCounter    = count;
			mCloseCounterMax = count;
		}
		break;
	}
	}
}

/**
 * @note Address: 0x803EADEC (GPVJ01)
 * @note Size: 0xAF8
 * @note Fabricated name. Might be doUpdate.
 */
void TScreenTitleMenu::update()
{
	switch (mState) {
	case STATE_Inactive: {
		break;
	}

	case STATE_Opening: {
		mScreen->update();
		if (mOpeningAnim.isFinish()) {
			setState(STATE_Active);
		}
		break;
	}

	case STATE_Active: {
		int oldSelection = mSelectedMenu;
		mPad.update();
		for (int i = 0; i < 2; i++) {
			mLeftIcons[i].update();
			mRightIcons[i].update();
		}
		if (oldSelection != mSelectedMenu) {
			mCategoryAnims[mSelectedMenu].play(sys->mDeltaTime * 60.0f, J3DAA_UNKNOWN_0, true);
			showPika_(mSelectedMenu);
			mLeftIcons[mSelectedMenu].start();
			mRightIcons[mSelectedMenu].start();
			mLeftIcons[oldSelection].stop();
			mRightIcons[oldSelection].stop();
			PSSystem::spSysIF->playSystemSe(PSSE_SY_MENU_CURSOR, 0);
		}
		if (mCategoryAnims[mSelectedMenu].isFinish()) {
			if (randEbisawaFloat() < 0.2f) {
				showPika_(mSelectedMenu);
			} else {
				hidePika_(mSelectedMenu);
			}
			mCategoryAnims[mSelectedMenu].play(sys->mDeltaTime * 60.0f, J3DAA_UNKNOWN_0, true);
		}
		if (mController->getButtonDown() & Controller::PRESS_A || mController->getButtonDown() & Controller::PRESS_START) {
			mDecided = true;
			PSSystem::spSysIF->playSystemSe(PSSE_SY_MENU_DECIDE, 0);
			setState(STATE_Closing);
		} else if (mController->getButtonDown() & Controller::PRESS_B) {
			mCancelled = true;
			PSSystem::spSysIF->playSystemSe(PSSE_SY_MENU_CANCEL, 0);
			setState(STATE_Closing);
		}
		mScreen->update();
		break;
	}
	case STATE_Closing: {
		mScreen->update();
		if (mCloseCounter) {
			mCloseCounter--;
		}
		f32 alpha;
		if (mCloseCounterMax) {
			alpha = (f32)mCloseCounter / (f32)mCloseCounterMax;
		} else {
			alpha = 0.0f;
		}
		mScreen->setAlpha(alpha * 255.0f);
		if (!mCloseCounter) {
			setState(STATE_Inactive);
		}
		break;
	}
	}
}

/**
 * @note Address: 0x803EB8E4 (GPVJ01)
 * @note Size: 0xC8
 * @note Fabricated name. Might be doDraw.
 */
void TScreenTitleMenu::draw()
{
	if (mState != STATE_Inactive) {
		J2DPerspGraph* graf = &sys->mGfx->mPerspGraph;
		Graphics gfx; // lol
		mScreen->draw(gfx, *graf);
	}
}

/**
 * @note Address: 0x803EB9AC (GPVJ01)
 * @note Size: 0x3C
 * @note Fabricated name.
 */
void TScreenTitleMenu::showPika_(s32 menuIdx)
{
	for (int i = 0; i < mPikminCounts[menuIdx]; i++) {
		mPikminPanes[menuIdx][i]->show();
	}
}

/**
 * @note Address: 0x803EB9E8 (GPVJ01)
 * @note Size: 0x3C
 * @note Fabricated name.
 */
void TScreenTitleMenu::hidePika_(s32 menuIdx)
{
	for (int i = 0; i < mPikminCounts[menuIdx]; i++) {
		mPikminPanes[menuIdx][i]->hide();
	}
}

} // namespace Screen
} // namespace ebi
