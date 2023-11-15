#include "Screen/Game2DMgr.h"
#include "og/ogLib2D.h"
#include "og/newScreen/Ground.h"
#include "Game/gamePlayData.h"
#include "Game/Navi.h"
#include "kh/khFinalFloor.h"
#include "kh/khReadyGo.h"
#include "og/newScreen/Challenge.h"
#include "og/Sound.h"
#include "kh/khFinalResult.h"
#include "kh/khCaveResult.h"
#include "kh/khWinLose.h"
#include "Game/Entities/ItemOnyon.h"
#include "Morimura/Zukan.h"
#include "PSSystem/PSSystemIF.h"
#include "Morimura/challengeResult2d.h"
#include "Morimura/challengeSelect2d.h"
#include "Morimura/VsSelect.h"
#include "Morimura/HiScore.h"
#include "og/newScreen/KanteiDemo.h"
#include "Game/GameSystem.h"

namespace Screen {

Game2DMgr* gGame2DMgr;

/*
 * --INFO--
 * Address:	803FBEEC
 * Size:	000060
 */
void Game2DMgr::create()
{
	P2ASSERTLINE(486, !gGame2DMgr);
	gGame2DMgr = new Game2DMgr;
}

/*
 * --INFO--
 * Address:	803FBF4C
 * Size:	000058
 */
Game2DMgr::Game2DMgr()
    : mScreenMgr(nullptr)
{
	mScreenMgr = newScreen::Mgr::create();
	mScreenMgr->init();
	og::Lib2D::create();
}

/*
 * --INFO--
 * Address:	803FBFA4
 * Size:	000068
 */
Game2DMgr::~Game2DMgr() { gGame2DMgr = nullptr; }

/*
 * --INFO--
 * Address:	803FC00C
 * Size:	000020
 */
void Game2DMgr::initInCourse() { og::newScreen::initGround(); }

/*
 * --INFO--
 * Address:	803FC02C
 * Size:	000024
 */
void Game2DMgr::update() { mScreenMgr->update(); }

/*
 * --INFO--
 * Address:	803FC050
 * Size:	000024
 */
void Game2DMgr::draw(Graphics& gfx) { mScreenMgr->draw(gfx); }

/*
 * --INFO--
 * Address:	803FC074
 * Size:	000004
 */
void Game2DMgr::drawIndirect(Graphics&) { }

/*
 * --INFO--
 * Address:	803FC078
 * Size:	000024
 */
void Game2DMgr::setGamePad(Controller* cont) { mScreenMgr->setGamePad(cont); }

/*
 * --INFO--
 * Address:	803FC09C
 * Size:	000034
 */
bool Game2DMgr::setDispMember(og::Screen::DispMemberBase* disp)
{
	if (mScreenMgr) {
		return mScreenMgr->setDispMember(disp);
	} else {
		return nullptr;
	}
}

/*
 * --INFO--
 * Address:	803FC0D0
 * Size:	000038
 */
void Game2DMgr::setToumeiBG() { mScreenMgr->mBackupScene->setColorBG(0, 0, 0, 0); }

/*
 * --INFO--
 * Address:	803FC108
 * Size:	0000BC
 */
bool Game2DMgr::open_GameGround(og::Screen::DispMemberGround& disp)
{
	if (Game::playData->mStoryFlags & Game::STORY_DebtPaid) {
		disp.mPayDebt = true;
	}
	disp.mDataGame.mPokoCount = Game::playData->mPokoCount;

	SetSceneArg arg(SCENE_GROUND, &disp, 0, true);
	if (mScreenMgr->setScene(arg)) {
		mScreenMgr->startScene(nullptr);
	}
	return false;
}

/*
 * --INFO--
 * Address:	803FC1C4
 * Size:	000060
 */
bool Game2DMgr::is_GameGround()
{
	bool ret = false;
	if (mScreenMgr->getSceneType() == SCENE_GROUND && mScreenMgr->mBackupScene->mStateID != 1) {
		ret = true;
	}
	return ret;
}

/*
 * --INFO--
 * Address:	803FC224
 * Size:	0001B4
 */
bool Game2DMgr::open_GameCave(og::Screen::DispMemberCave& disp, int type)
{
	if (Game::playData->mStoryFlags & Game::STORY_DebtPaid) {
		disp.mPayDebt = true;
	}
	disp.mDataGame.mPokoCount = Game::playData->mCavePokoCount;

	if (type == 0) {
		SetSceneArg arg(SCENE_CAVE, &disp, 0, true);
		if (mScreenMgr->setScene(arg)) {
			mScreenMgr->startScene(nullptr);
		}
	} else if (type & 2) {
		SetSceneArg arg(SCENE_CAVE, &disp, 0, true);
		if (mScreenMgr->setScene(arg)) {
			kh::Screen::DispFinalFloor disp2;
			SetSceneArg arg2(SCENE_FINAL_FLOOR, &disp2, 0, true);
			if (mScreenMgr->setScene(arg2)) {
				mScreenMgr->startScene(nullptr);
			}
		}
	}
	return false;
}

/*
 * --INFO--
 * Address:	803FC3D8
 * Size:	000060
 */
bool Game2DMgr::is_GameCave()
{
	bool ret = false;
	if (mScreenMgr->getSceneType() == SCENE_CAVE && mScreenMgr->mBackupScene->mStateID != 1) {
		ret = true;
	}
	return ret;
}

/*
 * --INFO--
 * Address:	803FC438
 * Size:	0001A0
 */
bool Game2DMgr::open_GameVs(og::Screen::DispMemberVs& disp, int type)
{
	if (type == 0) {
		SetSceneArg arg(SCENE_VS, &disp, 0, true);
		if (mScreenMgr->setScene(arg)) {
			mScreenMgr->startScene(nullptr);
		}
	} else if (type & 1) {
		SetSceneArg arg(SCENE_VS, &disp, 0, true);
		if (mScreenMgr->setScene(arg)) {
			kh::Screen::DispReadyGo disp2;
			disp2.mIs2Player = true;
			SetSceneArg arg2(SCENE_READY_GO, &disp2, 0, true);
			if (mScreenMgr->setScene(arg2)) {
				mScreenMgr->startScene(nullptr);
			}
		}
	}
	return true;
}

/*
 * --INFO--
 * Address:	803FC5D8
 * Size:	00009C
 */
int Game2DMgr::check_VsStatus()
{
	int ret                        = 3;
	og::Screen::DispMemberVs* disp = static_cast<og::Screen::DispMemberVs*>(mScreenMgr->getDispMember());
	if (disp && disp->isID(OWNER_OGA, MEMBER_VS)) {
		switch (disp->mDoneState) {
		case 0:
			ret = 0;
			break;
		case 1:
			ret = 1;
			break;
		case 2:
			ret = 2;
			break;
		}
	}
	return ret;
}

/*
 * --INFO--
 * Address:	803FC674
 * Size:	000334
 */
void Game2DMgr::open_GameChallenge2P(og::Screen::DispMemberChallenge2P& disp, int type)
{
	SetSceneArg arg(SCENE_CHALLENGE_2P, &disp, 0, true);
	og::newScreen::SArgChallenge2P sarg(1.5f);

	if (type == 0) {
		if (mScreenMgr->setScene(arg)) {
			mScreenMgr->startScene(&sarg);
		}
	} else if ((type & 3) == 3) {
		if (mScreenMgr->setScene(arg)) {
			kh::Screen::DispReadyGo disp2;
			disp2.mIs2Player    = true;
			disp2.mIsFinalFloor = true;
			disp2.mGameType     = 1;
			SetSceneArg arg2(SCENE_READY_GO, &disp2, 0, true);
			if (mScreenMgr->setScene(arg2)) {
				mScreenMgr->startScene(nullptr);
			}
		}
	} else if (type & 1) {
		if (mScreenMgr->setScene(arg)) {
			kh::Screen::DispReadyGo disp2;
			disp2.mIs2Player = true;
			disp2.mGameType  = 1;
			SetSceneArg arg2(SCENE_READY_GO, &disp2, 0, true);
			if (mScreenMgr->setScene(arg2)) {
				mScreenMgr->startScene(nullptr);
			}
		}
	} else if (type & 2) {
		if (mScreenMgr->setScene(arg)) {
			kh::Screen::DispFinalFloor disp2;
			disp2.mIs2Player = true;
			SetSceneArg arg2(SCENE_FINAL_FLOOR, &disp2, 0, true);
			if (mScreenMgr->setScene(arg2)) {
				mScreenMgr->startScene(nullptr);
			}
		}
	}
}

/*
 * --INFO--
 * Address:	803FC9A8
 * Size:	000328
 */
void Game2DMgr::open_GameChallenge1P(og::Screen::DispMemberChallenge1P& disp, int type)
{
	SetSceneArg arg(SCENE_CHALLENGE_1P, &disp, 0, true);
	og::newScreen::SArgChallenge1P sarg(1.5f);

	if (type == 0) {
		if (mScreenMgr->setScene(arg)) {
			mScreenMgr->startScene(&sarg);
		}
	} else if ((type & 3) == 3) {
		if (mScreenMgr->setScene(arg)) {
			kh::Screen::DispReadyGo disp2;
			disp2.mIsFinalFloor = true;
			disp2.mGameType     = 1;
			SetSceneArg arg2(SCENE_READY_GO, &disp2, 0, true);
			if (mScreenMgr->setScene(arg2)) {
				mScreenMgr->startScene(nullptr);
			}
		}
	} else if (type == 1) {
		if (mScreenMgr->setScene(arg)) {
			kh::Screen::DispReadyGo disp2;
			disp2.mGameType = 1;
			SetSceneArg arg2(SCENE_READY_GO, &disp2, 0, true);
			if (mScreenMgr->setScene(arg2)) {
				mScreenMgr->startScene(nullptr);
			}
		}
	} else if (type == 2) {
		if (mScreenMgr->setScene(arg)) {
			kh::Screen::DispFinalFloor disp2;
			SetSceneArg arg2(SCENE_FINAL_FLOOR, &disp2, 0, true);
			if (mScreenMgr->setScene(arg2)) {
				mScreenMgr->startScene(nullptr);
			}
		}
	}
}

/*
 * --INFO--
 * Address:	803FCCD0
 * Size:	0000B0
 */
bool Game2DMgr::open_SMenu(og::Screen::DispMemberSMenuAll& disp)
{
	if (mScreenMgr->isAnyReservation())
		return false;
	switch (mScreenMgr->getSceneType()) {
	default:
		return false;
	case SCENE_GROUND:
	case SCENE_CAVE:
	case SCENE_VS:
	case SCENE_CHALLENGE_1P:
	case SCENE_CHALLENGE_2P:
		if (!Game::naviMgr->getActiveNavi()) {
			return false;
		} else {
			disp.mSMenuMap.mActiveNavi = true;
			return open_SMenu_Sub(disp);
		}
		break;
	}
}

/*
 * --INFO--
 * Address:	803FCD80
 * Size:	0001B0
 */
bool Game2DMgr::open_SMenu_Sub(og::Screen::DispMemberSMenuAll& disp)
{
	bool ret                              = false;
	disp.mSMenuPauseDoukutu.mPreCavePokos = disp.mSMenuPause.mPokoCount;
	if (mScreenMgr->mInCave) {
		disp.mSMenuMap.mInCave = true;
	} else {
		disp.mSMenuMap.mInCave = false;
	}

	// probably want define for poko count
	if (disp.mSMenuPauseDoukutu.mPreCavePokos < 10000) {
		disp.mSMenuPauseDoukutu.mPayDebt = true;
	} else {
		disp.mSMenuPauseDoukutu.mPayDebt = false;
	}
	og::ogSound->setOpen();
	PSPause_StartMenuOn();
	bool set;

	switch (disp.mOpenMode) {
	case og::Screen::DispMemberSMenuAll::Open_StoryMode: {
		SetSceneArg arg(SCENE_PAUSE_MENU_MAP, &disp, 0, true);
		set = mScreenMgr->setScene(arg);
		break;
	}
	case og::Screen::DispMemberSMenuAll::Open_ChallengeMode:
	case og::Screen::DispMemberSMenuAll::Open_Versus: {
		SetSceneArg arg(SCENE_PAUSE_MENU_VS, &disp, 0, true);
		set = mScreenMgr->setScene(arg);
		break;
	}
	default:
		JUT_PANICLINE(969, "SMENU MODE ERR!");
	}
	if (set) {
		if (mScreenMgr->startScene(nullptr)) {
			ret = true;
		}
	}
	return ret;
}

/*
 * --INFO--
 * Address:	803FCF30
 * Size:	000128
 */
int Game2DMgr::check_SMenu()
{
	int exit = -1;
	switch (mScreenMgr->getSceneType()) {
	case SCENE_PAUSE_MENU_CONTROLS:
	case SCENE_PAUSE_MENU:
	case SCENE_PAUSE_MENU_DOUKUTU:
	case SCENE_PAUSE_MENU_MAP:
	case SCENE_PAUSE_MENU_ITEMS:
	case SCENE_PAUSE_MENU_VS: {
		if (mScreenMgr->isSceneFinish()) {
			int scene = mScreenMgr->getSceneFinishState();
			switch (scene) {
			case 1:
				exit = 0;
				break;

			case 2:
				PSPause_StartMenuOff();
				exit = 1;
				break;

			case 3:
				PSPause_StartMenuOff();
				exit = 2;
				break;

			case 4:
				PSPause_StartMenuOff();
				exit = 3;
				break;

			case 5:
				PSPause_StartMenuOff();
				exit = 1;
				break;

			case 6:
				PSPause_StartMenuOff();
				exit = 4;
				break;

			case 7:
				PSPause_StartMenuOff();
				exit = 5;
				break;

			default:
				JUT_PANICLINE(1045, "SMENU FinishStateError %d \n", scene);
				break;
			}
		} else {
			exit = 0;
		}
		break;
	}
	default: {
		exit = -1;
		break;
	}
	}
	return exit;
}

/*
 * --INFO--
 * Address:	803FD058
 * Size:	0000A8
 */
bool Game2DMgr::open_WorldMapInfoWin0(og::Screen::DispMemberWorldMapInfoWin0& disp)
{
	SetSceneArg arg(SCENE_WORLD_MAP_INFO_WINDOW_0, &disp, 0, true);
	if (mScreenMgr->setScene(arg)) {
		if (mScreenMgr->startScene(nullptr)) {
			return true;
		}
	}
	return false;
}

/*
 * --INFO--
 * Address:	803FD100
 * Size:	00007C
 */
int Game2DMgr::check_WorldMapInfoWin0() const
{
	if (mScreenMgr->getSceneType() != SCENE_WORLD_MAP_INFO_WINDOW_0) {
		return 2;
	}
	if (mScreenMgr->isSceneFinish()) {
		int state = mScreenMgr->getSceneFinishState();
		if (state == 0)
			return 0;
		if (state == 1)
			return 1;
	}
	return 3;
}

/*
 * --INFO--
 * Address:	803FD17C
 * Size:	0000A8
 */
bool Game2DMgr::open_WorldMapInfoWin1(og::Screen::DispMemberWorldMapInfoWin1& disp)
{
	SetSceneArg arg(SCENE_WORLD_MAP_INFO_WINDOW_1, &disp, 0, true);
	if (mScreenMgr->setScene(arg)) {
		if (mScreenMgr->startScene(nullptr)) {
			return true;
		}
	}
	return false;
}

/*
 * --INFO--
 * Address:	803FD224
 * Size:	00007C
 */
int Game2DMgr::check_WorldMapInfoWin1() const
{
	if (mScreenMgr->getSceneType() != SCENE_WORLD_MAP_INFO_WINDOW_1) {
		return 2;
	}
	if (mScreenMgr->isSceneFinish()) {
		int state = mScreenMgr->getSceneFinishState();
		if (state == 0)
			return 0;
		if (state == 1)
			return 1;
	}
	return 3;
}

/*
 * --INFO--
 * Address:	803FD2A0
 * Size:	000124
 */
void Game2DMgr::open_Kantei(og::Screen::DispMemberKantei& disp)
{
	if (mScreenMgr->mInCave) {
		disp.mInCave = true;
	} else {
		disp.mInCave = false;
	}

	if (disp.mTotalPokos >= 10000) {
		disp._28 = 1;
	} else {
		disp._28 = 0;
	}

	if (disp._28) {
		disp.mKanteiType = 1;
	} else {
		disp.mKanteiType = 0;
	}

	SetSceneArg arg(SCENE_KANTEI_DEMO, &disp, 0, true);
	if (mScreenMgr->setScene(arg) && mScreenMgr->startScene(nullptr)) {
		PSPause_StartMenuOn();
	} else {
		JUT_PANICLINE(1142, "fail to open Kantei!\n");
	}
}

/*
 * --INFO--
 * Address:	803FD3C4
 * Size:	000084
 */
void Game2DMgr::close_Kantei()
{
	if (mScreenMgr->getSceneType() == SCENE_KANTEI_DEMO) {
		if (mScreenMgr->setBackupScene()) {
			mScreenMgr->startScene(nullptr);
			PSPause_StartMenuOff();
		} else {
			JUT_PANICLINE(1167, "call to OG san");
		}
	}
}

/*
 * --INFO--
 * Address:	803FD448
 * Size:	000074
 */
bool Game2DMgr::update_Kantei()
{
	bool ret                           = true;
	og::Screen::DispMemberKantei* disp = static_cast<og::Screen::DispMemberKantei*>(mScreenMgr->getDispMember());
	if (disp && disp->isID(OWNER_OGA, MEMBER_KANTEI) && disp->mIsDone) {
		ret = false;
	}
	return ret;
}

/*
 * --INFO--
 * Address:	803FD4BC
 * Size:	000090
 */
void Game2DMgr::open_SpecialItem(og::Screen::DispMemberSpecialItem& disp)
{
	SetSceneArg arg(SCENE_SPECIAL_ITEM, &disp, 0, true);
	mScreenMgr->setScene(arg);
	mScreenMgr->startScene(nullptr);
	PSPause_StartMenuOn();
}

/*
 * --INFO--
 * Address:	803FD54C
 * Size:	000084
 */
void Game2DMgr::close_SpecialItem()
{
	if (mScreenMgr->getSceneType() == SCENE_SPECIAL_ITEM) {
		if (mScreenMgr->setBackupScene()) {
			mScreenMgr->startScene(nullptr);
			PSPause_StartMenuOff();
		} else {
			JUT_PANICLINE(1223, "call to OG san");
		}
	}
}

/*
 * --INFO--
 * Address:	803FD5D0
 * Size:	000090
 */
void Game2DMgr::open_Floor(og::Screen::DispMemberFloor& disp)
{
	SetSceneArg arg(SCENE_FLOOR, &disp, 0, true);
	arg._08 = 1; // probably proof the last two arguments dont belong in the ctor
	mScreenMgr->setScene(arg);
	mScreenMgr->startScene(nullptr);
}

/*
 * --INFO--
 * Address:	803FD660
 * Size:	000070
 */
void Game2DMgr::close_Floor()
{
	if (mScreenMgr->getSceneType() == SCENE_FLOOR) {
		EndSceneArg arg;
		arg._04 = 1;
		mScreenMgr->endScene(&arg);
	}
}

/*
 * --INFO--
 * Address:	803FD6D0
 * Size:	00005C
 */
void Game2DMgr::set_FloorVS_LoadEnd()
{
	if (mScreenMgr->getSceneType() == SCENE_FLOOR) {
		og::Screen::DispMemberFloor* disp = static_cast<og::Screen::DispMemberFloor*>(mScreenMgr->getDispMember());
		disp->mEnableButton               = true;
		if (mScreenMgr) {
			mScreenMgr->setDispMember(disp);
		}
	}
}

/*
 * --INFO--
 * Address:	803FD72C
 * Size:	000048
 */
void Game2DMgr::startCount_Floor()
{
	if (mScreenMgr->getSceneType() == SCENE_FLOOR) {
		og::Screen::DispMemberFloor* disp = static_cast<og::Screen::DispMemberFloor*>(mScreenMgr->getDispMember());
		disp->mDoEnd                      = true;
	}
}

/*
 * --INFO--
 * Address:	803FD774
 * Size:	000048
 */
void Game2DMgr::startFadeBG_Floor()
{
	if (mScreenMgr->getSceneType() == SCENE_FLOOR) {
		og::Screen::DispMemberFloor* disp = static_cast<og::Screen::DispMemberFloor*>(mScreenMgr->getDispMember());
		disp->mDoForceEnd                 = true;
	}
}

/*
 * --INFO--
 * Address:	803FD7BC
 * Size:	000090
 */
bool Game2DMgr::open_CourseName(og::Screen::DispMemberCourseName& disp)
{
	SetSceneArg arg(SCENE_COURSE_NAME, &disp, 0, true);
	arg._08 = 1;
	mScreenMgr->setScene(arg);
	mScreenMgr->startScene(nullptr);
}

/*
 * --INFO--
 * Address:	803FD84C
 * Size:	000048
 */
void Game2DMgr::startFadeBG_CourseName()
{
	if (mScreenMgr->getSceneType() == SCENE_COURSE_NAME) {
		og::Screen::DispMemberCourseName* disp = static_cast<og::Screen::DispMemberCourseName*>(mScreenMgr->getDispMember());
		disp->mIsExiting                       = true;
	}
}

/*
 * --INFO--
 * Address:	803FD894
 * Size:	000070
 */
void Game2DMgr::close_CourseName()
{
	if (mScreenMgr->getSceneType() == SCENE_COURSE_NAME) {
		EndSceneArg arg;
		arg._04 = 1;
		mScreenMgr->endScene(&arg);
	}
}

/*
 * --INFO--
 * Address:	803FD904
 * Size:	000048
 */
void Game2DMgr::startCount_CourseName()
{
	if (mScreenMgr->getSceneType() == SCENE_COURSE_NAME) {
		og::Screen::DispMemberCourseName* disp = static_cast<og::Screen::DispMemberCourseName*>(mScreenMgr->getDispMember());
		disp->mIsCounting                      = true;
	}
}

/*
 * --INFO--
 * Address:	803FD94C
 * Size:	000258
 */
void Game2DMgr::open_GameOver(GameOverTitle id)
{
	switch (id) {
	case GOTITLE_Default: {
		SetSceneArg arg(SCENE_GAME_OVER_GENERAL, nullptr, 0, true);
		mScreenMgr->setScene(arg);
		mScreenMgr->startScene(nullptr);
		break;
	}
	case GOTITLE_OlimarDown: {
		SetSceneArg arg(SCENE_ORIMA_DOWN, nullptr, 0, true);
		mScreenMgr->setScene(arg);
		mScreenMgr->startScene(nullptr);
		break;
	}
	case GOTITLE_LouieDown: {
		SetSceneArg arg(SCENE_LUJI_DOWN, nullptr, 0, true);
		mScreenMgr->setScene(arg);
		mScreenMgr->startScene(nullptr);
		break;
	}
	case GOTITLE_PresidentDown: {
		SetSceneArg arg(SCENE_PRESIDENT_DOWN, nullptr, 0, true);
		mScreenMgr->setScene(arg);
		mScreenMgr->startScene(nullptr);
		break;
	}
	case GOTITLE_PikminZero: {
		SetSceneArg arg(SCENE_PIKMIN_DOWN, nullptr, 0, true);
		mScreenMgr->setScene(arg);
		mScreenMgr->startScene(nullptr);
		break;
	}
	}
}

/*
 * --INFO--
 * Address:	803FDBA4
 * Size:	0000AC
 */
void Game2DMgr::close_GameOver()
{
	switch (mScreenMgr->getSceneType()) {
	case SCENE_GAME_OVER_GENERAL:
	case SCENE_PIKMIN_DOWN: {
		mScreenMgr->endScene(nullptr);
		break;
	}
	case SCENE_ORIMA_DOWN:
	case SCENE_LUJI_DOWN:
	case SCENE_PRESIDENT_DOWN: {
		if (mScreenMgr->setBackupScene()) {
			mScreenMgr->startScene(nullptr);
		} else {
			mScreenMgr->endScene(nullptr);
		}
	}
	}
}

/*
 * --INFO--
 * Address:	803FDC50
 * Size:	0000E0
 */
bool Game2DMgr::open_CaveInMenu(og::Screen::DispMemberAnaDemo& disp)
{
	if (mScreenMgr->isAnyReservation()) {
		return false;
	}

	if (mScreenMgr->getSceneType() == SCENE_GROUND) {
		SetSceneArg arg(SCENE_CAVE_IN_MENU, &disp, 0, true);
		if (mScreenMgr->setScene(arg) && mScreenMgr->startScene(nullptr)) {
			PSPause_StartMenuOn();
			return true;
		}
	}
	return false;
}

/*
 * --INFO--
 * Address:	803FDD30
 * Size:	00009C
 */
int Game2DMgr::check_CaveInMenu()
{
	int ret;
	og::Screen::DispMemberAnaDemo* disp = static_cast<og::Screen::DispMemberAnaDemo*>(mScreenMgr->getDispMember());
	if (disp) {
		if (disp->isID(OWNER_OGA, MEMBER_ANA_DEMO)) {
			if (disp->_1F) {
				ret = 0;
			} else {
				int ret2 = 2;
				if (disp->mSelected)
					ret2 = 1;
				ret = ret2;
				PSPause_StartMenuOff();
			}
		} else {
			ret = -1;
		}
	} else {
		ret = -2;
	}
	return ret;
}

/*
 * --INFO--
 * Address:	803FDDCC
 * Size:	0000E0
 */
bool Game2DMgr::open_KanketuMenu(og::Screen::DispMemberKanketuMenu& disp)
{
	if (mScreenMgr->isAnyReservation()) {
		return false;
	}

	if (mScreenMgr->getSceneType() == SCENE_CAVE) {
		SetSceneArg arg(SCENE_KANKETU_MENU, &disp, 0, true);
		if (mScreenMgr->setScene(arg) && mScreenMgr->startScene(nullptr)) {
			PSPause_StartMenuOn();
			return true;
		}
	}
	return false;
}

/*
 * --INFO--
 * Address:	803FDEAC
 * Size:	0000F4
 */
bool Game2DMgr::open_ChallengeKanketuMenu(og::Screen::DispMemberKanketuMenu& disp)
{
	if (mScreenMgr->isAnyReservation()) {
		return false;
	}

	if (mScreenMgr->getSceneType() == SCENE_CHALLENGE_1P || mScreenMgr->getSceneType() == SCENE_CHALLENGE_2P) {
		disp.mIsChallenge = true;
		SetSceneArg arg(SCENE_KANKETU_MENU, &disp, 0, true);
		if (mScreenMgr->setScene(arg) && mScreenMgr->startScene(nullptr)) {
			PSPause_StartMenuOn();
			return true;
		}
	}
	return false;
}

/*
 * --INFO--
 * Address:	803FDFA0
 * Size:	00009C
 */
int Game2DMgr::check_KanketuMenu()
{
	int ret;
	og::Screen::DispMemberAnaDemo* disp = static_cast<og::Screen::DispMemberAnaDemo*>(mScreenMgr->getDispMember());
	if (disp) {
		if (disp->isID(OWNER_OGA, MEMBER_KANKETU_MENU)) {
			if (disp->_1F) {
				ret = 0;
			} else {
				int ret2 = 2;
				if (disp->mSelected)
					ret2 = 1;
				ret = ret2;
				PSPause_StartMenuOff();
			}
		} else {
			ret = -1;
		}
	} else {
		ret = -2;
	}
	return ret;
}

/*
 * --INFO--
 * Address:	803FE03C
 * Size:	000100
 */
bool Game2DMgr::open_CaveMoreMenu(og::Screen::DispMemberCaveMore& disp)
{
	if (mScreenMgr->isAnyReservation()) {
		return false;
	}

	if (mScreenMgr->getSceneType() == SCENE_CAVE || mScreenMgr->getSceneType() == SCENE_CHALLENGE_1P
	    || mScreenMgr->getSceneType() == SCENE_CHALLENGE_2P) {
		SetSceneArg arg(SCENE_CAVE_MORE_MENU, &disp, 0, true);
		if (mScreenMgr->setScene(arg) && mScreenMgr->startScene(nullptr)) {
			PSPause_StartMenuOn();
			return true;
		}
	}
	return false;
}

/*
 * --INFO--
 * Address:	803FE13C
 * Size:	00009C
 */
int Game2DMgr::check_CaveMoreMenu()
{
	int ret;
	og::Screen::DispMemberAnaDemo* disp = static_cast<og::Screen::DispMemberAnaDemo*>(mScreenMgr->getDispMember());
	if (disp) {
		if (disp->isID(OWNER_OGA, MEMBER_CAVE_MORE)) {
			if (disp->_1F) {
				ret = 0;
			} else {
				int ret2 = 2;
				if (disp->mSelected)
					ret2 = 1;
				ret = ret2;
				PSPause_StartMenuOff();
			}
		} else {
			ret = -1;
		}
	} else {
		ret = -2;
	}
	return ret;
}

/*
 * --INFO--
 * Address:	803FE1D8
 * Size:	0000AC
 */
bool Game2DMgr::open_FinalResult(kh::Screen::DispFinalResult& disp)
{
	SetSceneArg arg(SCENE_FINAL_RESULT, reinterpret_cast<og::Screen::DispMemberBase*>(&disp), 0, true);
	arg._08 = 1;
	if (mScreenMgr->setScene(arg) && mScreenMgr->startScene(nullptr)) {
		return true;
	}
	return false;
}

/*
 * --INFO--
 * Address:	803FE284
 * Size:	00008C
 */
int Game2DMgr::check_FinalResult() const
{
	if (mScreenMgr->getSceneType() != SCENE_FINAL_RESULT) {
		return -1;
	} else {
		if (!mScreenMgr->getDispMember()->isID(OWNER_KH, MEMBER_FINAL_RESULT)) {
			JUT_PANICLINE(1636, "disp member err");
		}
		return reinterpret_cast<kh::Screen::DispFinalResult*>(mScreenMgr->getDispMember())->mExitStatus;
	}
}

/*
 * --INFO--
 * Address:	803FE310
 * Size:	0000A8
 */
bool Game2DMgr::open_CaveResult(kh::Screen::DispCaveResult& disp)
{
	SetSceneArg arg(SCENE_CAVE_RESULT, reinterpret_cast<og::Screen::DispMemberBase*>(&disp), 0, true);
	if (mScreenMgr->setScene(arg) && mScreenMgr->startScene(nullptr)) {
		return true;
	}
	return false;
}

/*
 * --INFO--
 * Address:	803FE3B8
 * Size:	00008C
 */
int Game2DMgr::check_CaveResult() const
{
	if (mScreenMgr->getSceneType() != SCENE_CAVE_RESULT) {
		return -1;
	} else {
		if (!mScreenMgr->getDispMember()->isID(OWNER_KH, MEMBER_CAVE_RESULT)) {
			JUT_PANICLINE(1656, "disp member err");
		}
		return reinterpret_cast<kh::Screen::DispCaveResult*>(mScreenMgr->getDispMember())->mIsFinished;
	}
}

/*
 * --INFO--
 * Address:	803FE444
 * Size:	0000AC
 */
bool Game2DMgr::open_DayEndResult(kh::Screen::DispDayEndResult& disp)
{
	SetSceneArg arg(SCENE_DAY_END_RESULT_TITL, reinterpret_cast<og::Screen::DispMemberBase*>(&disp), 0, true);
	arg._08 = 1;
	if (mScreenMgr->setScene(arg) && mScreenMgr->startScene(nullptr)) {
		return true;
	}
	return false;
}

/*
 * --INFO--
 * Address:	803FE4F0
 * Size:	0000B0
 */
int Game2DMgr::check_DayEndResult() const
{
	if (mScreenMgr->getSceneType() != SCENE_DAY_END_RESULT_ITEM && mScreenMgr->getSceneType() != SCENE_DAY_END_RESULT_INC_P
	    && mScreenMgr->getSceneType() != SCENE_DAY_END_RESULT_MAIL) {
		return -1;
	}

	if (!mScreenMgr->getDispMember()->isID(OWNER_KH, MEMBER_DAY_END_RESULT)) {
		JUT_PANICLINE(1687, "disp member err");
	}
	return reinterpret_cast<kh::Screen::DispDayEndResult*>(mScreenMgr->getDispMember())->mMail._14;
}

/*
 * --INFO--
 * Address:	803FE5A0
 * Size:	0000A8
 */
bool Game2DMgr::open_PayDept(kh::Screen::DispPayDept& disp)
{
	SetSceneArg arg(SCENE_PAY_DEPT, reinterpret_cast<og::Screen::DispMemberBase*>(&disp), 0, true);
	if (mScreenMgr->setScene(arg) && mScreenMgr->startScene(nullptr)) {
		return true;
	}
	return false;
}

/*
 * --INFO--
 * Address:	803FE648
 * Size:	00005C
 */
int Game2DMgr::check_PayDept() const
{
	int ret = 0;
	if (mScreenMgr->getSceneType() == SCENE_PAY_DEPT && mScreenMgr->isSceneFinish()) {
		ret = 1;
	}
	return ret;
}

/*
 * --INFO--
 * Address:	803FE6A4
 * Size:	0000A8
 */
bool Game2DMgr::open_Save(og::Screen::DispMemberSave& disp)
{
	SetSceneArg arg(SCENE_SAVE, reinterpret_cast<og::Screen::DispMemberBase*>(&disp), 0, true);
	if (mScreenMgr->setScene(arg) && mScreenMgr->startScene(nullptr)) {
		return true;
	}
	return false;
}

/*
 * --INFO--
 * Address:	803FE74C
 * Size:	00005C
 */
int Game2DMgr::check_Save() const
{
	int ret = 0;
	if (mScreenMgr->getSceneType() == SCENE_SAVE && mScreenMgr->isSceneFinish()) {
		ret = 1;
	}
	return ret;
}

/*
 * --INFO--
 * Address:	803FE7A8
 * Size:	0000A8
 */
bool Game2DMgr::open_FinalMessage(og::Screen::DispMemberFinalMessage& disp)
{
	SetSceneArg arg(SCENE_FINAL_MSG, reinterpret_cast<og::Screen::DispMemberBase*>(&disp), 0, true);
	if (mScreenMgr->setScene(arg) && mScreenMgr->startScene(nullptr)) {
		return true;
	}
	return false;
}

/*
 * --INFO--
 * Address:	803FE850
 * Size:	000048
 */
int Game2DMgr::check_FinalMessage() const
{
	int ret = 0;
	if (mScreenMgr->getSceneType() != SCENE_FINAL_MSG) {
		return -10;
	}
	return mScreenMgr->getSceneFinishState();
}

/*
 * --INFO--
 * Address:	803FE898
 * Size:	000070
 */
void Game2DMgr::stopFinalFloorSound()
{
	if (mScreenMgr->getSceneType() == SCENE_FINAL_FLOOR) {
		kh::Screen::SceneFinalFloor* scene = static_cast<kh::Screen::SceneFinalFloor*>(mScreenMgr->mBackupScene);
		kh::Screen::finalFloorStopSound(scene);
	}
}

/*
 * --INFO--
 * Address:	803FE908
 * Size:	000070
 */
void Game2DMgr::restartFinalFloorSound()
{
	if (mScreenMgr->getSceneType() == SCENE_FINAL_FLOOR) {
		kh::Screen::SceneFinalFloor* scene = static_cast<kh::Screen::SceneFinalFloor*>(mScreenMgr->mBackupScene);
		kh::Screen::finalFloorRestartSound(scene);
	}
}

/*
 * --INFO--
 * Address:	803FE978
 * Size:	000090
 */
int Game2DMgr::check_ReadyGo() const
{
	if (mScreenMgr->getSceneType() != SCENE_READY_GO) {
		return -1;
	} else {
		if (!mScreenMgr->getDispMember()->isID(OWNER_KH, MEMBER_READY_GO)) {
			JUT_PANICLINE(1766, "disp member err");
		}
		return reinterpret_cast<kh::Screen::DispReadyGo*>(mScreenMgr->getDispMember())->mStatus;
	}
}

/*
 * --INFO--
 * Address:	803FEA08
 * Size:	0000A8
 */
bool Game2DMgr::open_WinLoseReason(kh::Screen::DispWinLoseReason& disp)
{
	SetSceneArg arg(SCENE_WIN_LOSE_REASON, reinterpret_cast<og::Screen::DispMemberBase*>(&disp), 0, true);
	if (mScreenMgr->setScene(arg) && mScreenMgr->startScene(nullptr)) {
		return true;
	}
	return false;
}

/*
 * --INFO--
 * Address:	803FEAB0
 * Size:	000068
 */
int Game2DMgr::check_WinLoseReason() const
{
	int ret;
	if (mScreenMgr->getSceneType() != SCENE_WIN_LOSE_REASON) {
		ret = 0;
	} else {
		ret                                   = 0;
		kh::Screen::SceneWinLoseReason* scene = reinterpret_cast<kh::Screen::SceneWinLoseReason*>(mScreenMgr->mBackupScene);
		if (scene->mDone[0] && scene->mDone[1]) {
			ret = 1;
		}
	}
	return ret;
}

/*
 * --INFO--
 * Address:	803FEB18
 * Size:	0000A8
 */
bool Game2DMgr::open_WinLose(kh::Screen::DispWinLose& disp)
{
	SetSceneArg arg(SCENE_WIN_LOSE, reinterpret_cast<og::Screen::DispMemberBase*>(&disp), 0, true);
	if (mScreenMgr->setScene(arg) && mScreenMgr->startScene(nullptr)) {
		return true;
	}
	return false;
}

/*
 * --INFO--
 * Address:	803FEBC0
 * Size:	000090
 */
int Game2DMgr::check_WinLose() const
{
	if (mScreenMgr->getSceneType() != SCENE_WIN_LOSE) {
		return -1;
	} else {
		if (!mScreenMgr->getDispMember()->isID(OWNER_KH, MEMBER_WIN_LOSE)) {
			JUT_PANICLINE(1801, "disp member err");
		}
		return reinterpret_cast<kh::Screen::DispWinLose*>(mScreenMgr->getDispMember())->_0C;
	}
}

/*
 * --INFO--
 * Address:	803FEC50
 * Size:	0000D4
 */
bool Game2DMgr::open_TimeUp1P()
{
	kh::Screen::DispWinLose disp(Timeup1P, 1);
	SetSceneArg arg(SCENE_WIN_LOSE, reinterpret_cast<og::Screen::DispMemberBase*>(&disp), 0, true);
	if (mScreenMgr->setScene(arg) && mScreenMgr->startScene(nullptr)) {
		return true;
	}
	return false;
}

/*
 * --INFO--
 * Address:	803FED24
 * Size:	0000D4
 */
bool Game2DMgr::open_TimeUp2P()
{
	kh::Screen::DispWinLose disp(Timeup2P, 1);
	SetSceneArg arg(SCENE_WIN_LOSE, reinterpret_cast<og::Screen::DispMemberBase*>(&disp), 0, true);
	if (mScreenMgr->setScene(arg) && mScreenMgr->startScene(nullptr)) {
		return true;
	}
	return false;
}

/*
 * --INFO--
 * Address:	803FEDF8
 * Size:	000158
 */
bool Game2DMgr::open_Contena(og::Screen::DispMemberContena& disp)
{
	if (mScreenMgr->isAnyReservation())
		return false;
	if (checkDayEnd(0.08f))
		return false;

	SceneType id = (SceneType)0;
	switch (disp.mOnyonID) {
	case ONYON_TYPE_BLUE:
		id = SCENE_CONTENA_BLUE;
		break;
	case ONYON_TYPE_RED:
		id = SCENE_CONTENA_RED;
		break;
	case ONYON_TYPE_YELLOW:
		id = SCENE_CONTENA_YELLOW;
		break;
	case 4:
		id = SCENE_CONTENA_WHITE;
		break;
	case 3:
		id = SCENE_CONTENA_PURPLE;
		break;
	}
	SetSceneArg arg(id, &disp, 0, true);
	if (mScreenMgr->setScene(arg) && mScreenMgr->startScene(nullptr)) {
		switch (disp.mOnyonID) {
		case ONYON_TYPE_BLUE:
		case ONYON_TYPE_RED:
		case ONYON_TYPE_YELLOW:
			PSPause_StartMenuOn();
			break;
		}
		return true;
	}
	return false;
}

/*
 * --INFO--
 * Address:	803FEF50
 * Size:	0000C8
 */
int Game2DMgr::check_Contena()
{
	int ret      = -1;
	SceneType id = mScreenMgr->getSceneType();
	if ((u32)(id + ~SCENE_FLOOR) <= 3 || id == SCENE_CONTENA_PURPLE) {
		og::Screen::DispMemberContena* disp = static_cast<og::Screen::DispMemberContena*>(mScreenMgr->getDispMember());
		if (disp->isID(OWNER_OGA, MEMBER_CONTENA)) {
			switch (disp->mState) {
			case 3:
				ret = 1;
				break;
			case 4:
				ret = 2;
				break;
			default:
				ret = 0;
			}

			if (ret) {
				PSPause_StartMenuOff();
			}
		} else {
			ret = -1;
		}
	}
	return ret;
}

/*
 * --INFO--
 * Address:	803FF018
 * Size:	0000A8
 */
int Game2DMgr::result_Contena()
{
	int ret      = 0;
	SceneType id = mScreenMgr->getSceneType();
	if ((u32)(id + ~SCENE_FLOOR) <= 3 || id == SCENE_CONTENA_PURPLE) {
		og::Screen::DispMemberContena* disp = static_cast<og::Screen::DispMemberContena*>(mScreenMgr->getDispMember());
		if (disp->isID(OWNER_OGA, MEMBER_CONTENA)) {
			ret = disp->mResult;
		}
	} else {
		JUT_PANICLINE(1937, "Illegal call.\n");
	}
	return ret;
}

/*
 * --INFO--
 * Address:	803FF0C0
 * Size:	000244
 */
bool Game2DMgr::open_UfoMenu(og::Screen::DispMemberUfoGroup& disp)
{
	if (mScreenMgr->isAnyReservation())
		return false;
	if (checkDayEnd(0.08f))
		return false;
	if (disp.mHasWhite && disp.mHasPurple) {
		disp.mContena1._2C = 1;
		disp.mContena2._2C = 1;
		SetSceneArg arg(SCENE_UFO_MENU, &disp, 0, true);
		if (mScreenMgr->setScene(arg) && mScreenMgr->startScene(nullptr)) {
			PSPause_StartMenuOn();
			PSSystem::spSysIF->playSystemSe(PSSE_SY_MENU_OPEN, 0);
			return true;
		}
	} else {
		if (disp.mHasWhite) {
			disp.mContena1._2C         = 0;
			disp.mUfoMenu.mContenaType = 1;
			SetSceneArg arg(SCENE_CONTENA_WHITE, &disp, 0, true);
			if (mScreenMgr->setScene(arg) && mScreenMgr->startScene(nullptr)) {
				PSPause_StartMenuOn();
				return true;
			}
		} else if (disp.mHasPurple) {
			disp.mContena2._2C         = 0;
			disp.mUfoMenu.mContenaType = 2;
			SetSceneArg arg(SCENE_CONTENA_PURPLE, &disp, 0, true);
			if (mScreenMgr->setScene(arg) && mScreenMgr->startScene(nullptr)) {
				PSPause_StartMenuOn();
				return true;
			}
		}
	}
	return false;
}

/*
 * --INFO--
 * Address:	803FF304
 * Size:	000130
 */
int Game2DMgr::check_UfoMenu()
{
	int ret                              = 0;
	og::Screen::DispMemberUfoGroup* disp = static_cast<og::Screen::DispMemberUfoGroup*>(mScreenMgr->getDispMember());
	switch (mScreenMgr->getSceneType()) {
	case SCENE_UFO_MENU: {
		if (!disp->mUfoMenu.mContenaType) {
			ret = 1;
			PSPause_StartMenuOff();
		} else {
			ret = 0;
		}
		break;
	}
	case SCENE_CONTENA_WHITE: {
		switch (disp->mContena1.mState) {
		case 4: {
			ret = 2;
			PSPause_StartMenuOff();
			break;
		}
		case 3: {
			if (disp->mContena1._2C) {
				ret = 0;
			} else {
				ret = 1;
				PSPause_StartMenuOff();
			}
			break;
		}
		default:
			ret = 0;
			break;
		}
		break;
	}
	case SCENE_CONTENA_PURPLE: {
		switch (disp->mContena2.mState) {
		case 4: {
			ret = 2;
			PSPause_StartMenuOff();
			break;
		}
		case 3: {
			if (disp->mContena2._2C) {
				ret = 0;
			} else {
				ret = 1;
				PSPause_StartMenuOff();
			}
			break;
		}
		default:
			ret = 0;
			break;
		}
		break;
	}
	}
	return ret;
}

/*
 * --INFO--
 * Address:	803FF434
 * Size:	000098
 */
void Game2DMgr::result_UfoMenu(int* ret1, int* ret2)
{
	og::Screen::DispMemberUfoGroup* disp = static_cast<og::Screen::DispMemberUfoGroup*>(mScreenMgr->getDispMember());
	switch (mScreenMgr->getSceneType()) {
	case SCENE_CONTENA_WHITE: {
		*ret1 = disp->mContena1.mResult;
		*ret2 = 0;
		break;
	}
	case SCENE_CONTENA_PURPLE: {
		*ret1 = 0;
		*ret2 = disp->mContena2.mResult;
		break;
	}
	}
}

/*
 * --INFO--
 * Address:	803FF4CC
 * Size:	00009C
 */
bool Game2DMgr::open_ZukanEnemy(Morimura::DispMemberZukanEnemy& disp)
{
	SetSceneArg arg(SCENE_ZUKAN_ENEMY, reinterpret_cast<og::Screen::DispMemberBase*>(&disp), 0, true);
	if (mScreenMgr->setScene(arg)) {
		return mScreenMgr->startScene(nullptr);
	}
	return false;
}

/*
 * --INFO--
 * Address:	803FF568
 * Size:	00009C
 */
bool Game2DMgr::open_ZukanItem(Morimura::DispMemberZukanItem& disp)
{
	SetSceneArg arg(SCENE_ZUKAN_ITEM, reinterpret_cast<og::Screen::DispMemberBase*>(&disp), 0, true);
	if (mScreenMgr->setScene(arg)) {
		return mScreenMgr->startScene(nullptr);
	}
	return false;
}

/*
 * --INFO--
 * Address:	803FF604
 * Size:	000030
 */
bool Game2DMgr::isZukanEnemy() { return (mScreenMgr->getSceneType() == SCENE_ZUKAN_ENEMY); }

/*
 * --INFO--
 * Address:	803FF634
 * Size:	000030
 */
bool Game2DMgr::isZukanItem() { return (mScreenMgr->getSceneType() == SCENE_ZUKAN_ITEM); }

/*
 * --INFO--
 * Address:	803FF664
 * Size:	000084
 */
int Game2DMgr::check_ZukanItemRequest(int& id)
{
	int ret = 0;
	if (mScreenMgr->getSceneType() == SCENE_ZUKAN_ITEM) {
		Morimura::TDItemScene* scene = static_cast<Morimura::TDItemScene*>(mScreenMgr->mBackupScene);
		if (scene) {
			Morimura::TZukanBase* obj = static_cast<Morimura::TZukanBase*>(scene->mObject);
			ret                       = (obj) ? obj->checkRequest(id) : 0;
		}
	}
	return ret;
}

/*
 * --INFO--
 * Address:	803FF6E8
 * Size:	000084
 */
int Game2DMgr::check_ZukanEnemyRequest(int& id)
{
	int ret = 0;
	if (mScreenMgr->getSceneType() == SCENE_ZUKAN_ENEMY) {
		Morimura::TDEnemyScene* scene = static_cast<Morimura::TDEnemyScene*>(mScreenMgr->mBackupScene);
		if (scene) {
			Morimura::TZukanBase* obj = static_cast<Morimura::TZukanBase*>(scene->mObject);
			ret                       = (obj) ? obj->checkRequest(id) : 0;
		}
	}
	return ret;
}

/*
 * --INFO--
 * Address:	803FF76C
 * Size:	000090
 */
int Game2DMgr::getZukanEnemyCurrSelectId()
{
	int ret = -1;
	if (mScreenMgr->getSceneType() == SCENE_ZUKAN_ENEMY) {
		Morimura::TDEnemyScene* scene = static_cast<Morimura::TDEnemyScene*>(mScreenMgr->mBackupScene);
		P2ASSERTLINE(2195, scene);
		Morimura::TZukanBase* obj = static_cast<Morimura::TZukanBase*>(scene->mObject);
		ret                       = (obj) ? obj->getCurrSelectId() : -1;
	}
	return ret;
}

/*
 * --INFO--
 * Address:	803FF7FC
 * Size:	000090
 */
int Game2DMgr::getZukanItemCurrSelectId()
{
	int ret = -1;
	if (mScreenMgr->getSceneType() == SCENE_ZUKAN_ITEM) {
		Morimura::TDItemScene* scene = static_cast<Morimura::TDItemScene*>(mScreenMgr->mBackupScene);
		P2ASSERTLINE(2210, scene);
		Morimura::TZukanBase* obj = static_cast<Morimura::TZukanBase*>(scene->mObject);
		ret                       = (obj) ? obj->getCurrSelectId() : -1;
	}
	return ret;
}

/*
 * --INFO--
 * Address:	803FF88C
 * Size:	0000BC
 */
void Game2DMgr::requireZukanRequest()
{
	SceneType id = mScreenMgr->getSceneType();
	if (id == SCENE_ZUKAN_ITEM) {
		Morimura::TDItemScene* scene = static_cast<Morimura::TDItemScene*>(mScreenMgr->mBackupScene);
		P2ASSERTLINE(2227, scene);
		Morimura::TZukanBase* obj = static_cast<Morimura::TZukanBase*>(scene->mObject);
		if (obj) {
			obj->requireRequest();
		}
	} else if (id == SCENE_ZUKAN_ENEMY) {
		Morimura::TDEnemyScene* scene = static_cast<Morimura::TDEnemyScene*>(mScreenMgr->mBackupScene);
		P2ASSERTLINE(2233, scene);
		Morimura::TZukanBase* obj = static_cast<Morimura::TZukanBase*>(scene->mObject);
		if (obj) {
			obj->requireRequest();
		}
	}
}

/*
 * --INFO--
 * Address:	803FF948
 * Size:	0000BC
 */
void Game2DMgr::requireZukanEffectOff()
{
	SceneType id = mScreenMgr->getSceneType();
	if (id == SCENE_ZUKAN_ITEM) {
		Morimura::TDItemScene* scene = static_cast<Morimura::TDItemScene*>(mScreenMgr->mBackupScene);
		P2ASSERTLINE(2247, scene);
		Morimura::TZukanBase* obj = static_cast<Morimura::TZukanBase*>(scene->mObject);
		if (obj) {
			obj->requireEffectOff();
		}
	} else if (id == SCENE_ZUKAN_ENEMY) {
		Morimura::TDEnemyScene* scene = static_cast<Morimura::TDEnemyScene*>(mScreenMgr->mBackupScene);
		P2ASSERTLINE(2253, scene);
		Morimura::TZukanBase* obj = static_cast<Morimura::TZukanBase*>(scene->mObject);
		if (obj) {
			obj->requireEffectOff();
		}
	}
}

/*
 * --INFO--
 * Address:	803FFA04
 * Size:	0000E4
 */
bool Game2DMgr::isZukanEnlargedWindow()
{
	bool ret     = false;
	SceneType id = mScreenMgr->getSceneType();
	if (id == SCENE_ZUKAN_ITEM) {
		Morimura::TDItemScene* scene = static_cast<Morimura::TDItemScene*>(mScreenMgr->mBackupScene);
		P2ASSERTLINE(2270, scene);
		Morimura::TZukanBase* obj = static_cast<Morimura::TZukanBase*>(scene->mObject);
		ret                       = (obj) ? obj->isEnlargedWindow() : false;

	} else if (id == SCENE_ZUKAN_ENEMY) {
		Morimura::TDEnemyScene* scene = static_cast<Morimura::TDEnemyScene*>(mScreenMgr->mBackupScene);
		P2ASSERTLINE(2277, scene);
		Morimura::TZukanBase* obj = static_cast<Morimura::TZukanBase*>(scene->mObject);
		ret                       = (obj) ? obj->isEnlargedWindow() : false;
	}
	return ret;
}

/*
 * --INFO--
 * Address:	803FFAE8
 * Size:	0000E4
 */
bool Game2DMgr::isZukanMemoWindow()
{
	bool ret     = false;
	SceneType id = mScreenMgr->getSceneType();
	if (id == SCENE_ZUKAN_ITEM) {
		Morimura::TDItemScene* scene = static_cast<Morimura::TDItemScene*>(mScreenMgr->mBackupScene);
		P2ASSERTLINE(2298, scene);
		Morimura::TZukanBase* obj = static_cast<Morimura::TZukanBase*>(scene->mObject);
		ret                       = (obj) ? obj->isMemoWindow() : false;

	} else if (id == SCENE_ZUKAN_ENEMY) {
		Morimura::TDEnemyScene* scene = static_cast<Morimura::TDEnemyScene*>(mScreenMgr->mBackupScene);
		P2ASSERTLINE(2305, scene);
		Morimura::TZukanBase* obj = static_cast<Morimura::TZukanBase*>(scene->mObject);
		ret                       = (obj) ? obj->isMemoWindow() : false;
	}
	return ret;
}

/*
 * --INFO--
 * Address:	803FFBCC
 * Size:	0000C4
 */
bool Game2DMgr::isAppearConfirmWindow()
{
	bool ret     = false;
	SceneType id = mScreenMgr->getSceneType();
	if (id == SCENE_ZUKAN_ITEM) {
		Morimura::TDItemScene* scene = static_cast<Morimura::TDItemScene*>(mScreenMgr->mBackupScene);
		P2ASSERTLINE(2345, scene);
		ret = scene->isAppearConfirmWindow();
	} else if (id == SCENE_ZUKAN_ENEMY) {
		Morimura::TDEnemyScene* scene = static_cast<Morimura::TDEnemyScene*>(mScreenMgr->mBackupScene);
		P2ASSERTLINE(2352, scene);
		ret = scene->isAppearConfirmWindow();
	}
	return ret;
}

/*
 * --INFO--
 * Address:	803FFC90
 * Size:	00009C
 */
bool Game2DMgr::open_ChallengeSelect(Morimura::DispMemberChallengeSelect& disp)
{
	SetSceneArg arg(SCENE_CHALLENGE_SELECT, reinterpret_cast<og::Screen::DispMemberBase*>(&disp), 0, true);
	if (mScreenMgr->setScene(arg)) {
		return mScreenMgr->startScene(nullptr);
	}
	return false;
}

/*
 * --INFO--
 * Address:	803FFD2C
 * Size:	00006C
 */
int Game2DMgr::check_ChallengeSelect(int& ret1, int& ret2)
{
	ret1 = -1;
	ret2 = 0;

	Morimura::DispMemberChallengeSelect* disp = reinterpret_cast<Morimura::DispMemberChallengeSelect*>(mScreenMgr->getDispMember());

	if (disp->_1C == 3) {
		ret1 = disp->mStageNumber;
		ret2 = disp->mPlayType;
	}
	return disp->_1C;
}

/*
 * --INFO--
 * Address:	803FFD98
 * Size:	00009C
 */
bool Game2DMgr::open_ChallengeResult(Morimura::DispMemberChallengeResult& disp)
{
	SetSceneArg arg(SCENE_CHALLENGE_RESULT, reinterpret_cast<og::Screen::DispMemberBase*>(&disp), 0, true);
	if (mScreenMgr->setScene(arg)) {
		return mScreenMgr->startScene(nullptr);
	}
	return false;
}

/*
 * --INFO--
 * Address:	803FFE34
 * Size:	000034
 */
bool Game2DMgr::isEndChallengeResult()
{
	Morimura::DispMemberChallengeResult* disp = reinterpret_cast<Morimura::DispMemberChallengeResult*>(mScreenMgr->getDispMember());
	u8 ret                                    = (2 == disp->_10);
	return ret;
}

/*
 * --INFO--
 * Address:	803FFE68
 * Size:	00009C
 */
bool Game2DMgr::open_VsSelect(Morimura::DispMemberVsSelect& disp)
{
	SetSceneArg arg(SCENE_VS_SELECT, reinterpret_cast<og::Screen::DispMemberBase*>(&disp), 0, true);
	if (mScreenMgr->setScene(arg)) {
		return mScreenMgr->startScene(nullptr);
	}
	return false;
}

/*
 * --INFO--
 * Address:	803FFF04
 * Size:	000078
 */
u32 Game2DMgr::check_VsSelect(int& ret1, int& ret2, int& ret3)
{
	ret1 = -1;

	Morimura::DispMemberVsSelect* disp = reinterpret_cast<Morimura::DispMemberVsSelect*>(mScreenMgr->getDispMember());

	if (disp->mState == 3) {
		ret1 = disp->mSelectedStageIndex;
		ret2 = disp->mOlimarHandicap;
		ret3 = disp->mLouieHandicap;
	}
	return disp->mState;
}

/*
 * --INFO--
 * Address:	803FFF7C
 * Size:	00009C
 */
bool Game2DMgr::open_HighScore(Morimura::DispMemberHighScore& disp)
{
	SetSceneArg arg(SCENE_HIGH_SCORE, reinterpret_cast<og::Screen::DispMemberBase*>(&disp), 0, true);
	if (mScreenMgr->setScene(arg)) {
		return mScreenMgr->startScene(nullptr);
	}
	return false;
}

/*
 * --INFO--
 * Address:	80400018
 * Size:	000058
 */
bool Game2DMgr::isEndHighScore()
{
	bool ret;
	SceneType id = mScreenMgr->getSceneType();
	if (id == SCENE_HIGH_SCORE) {
		Morimura::DispMemberHighScore* disp = reinterpret_cast<Morimura::DispMemberHighScore*>(mScreenMgr->getDispMember());
		ret                                 = disp->_0C;
		disp->_0C                           = false;
		return ret;
	}
	return false;
}

/*
 * --INFO--
 * Address:	80400070
 * Size:	00006C
 */
bool Game2DMgr::drawKanteiMsg(Graphics& gfx)
{
	bool ret     = false;
	SceneType id = mScreenMgr->getSceneType();
	if (id == SCENE_KANTEI_DEMO) {
		og::newScreen::KanteiDemo* scene = static_cast<og::newScreen::KanteiDemo*>(mScreenMgr->mBackupScene);
		og::newScreen::ObjKantei* obj    = static_cast<og::newScreen::ObjKantei*>(scene->mObjBase);
		if (obj) {
			obj->doDrawMsg(gfx);
		}
		return true;
	}
	return false;
}

/*
 * --INFO--
 * Address:	804000DC
 * Size:	00008C
 */
bool Game2DMgr::checkDayEnd(f32 min) const
{
	if (!Game::gameSystem)
		return false;

	Game::TimeMgr* mgr = Game::gameSystem->mTimeMgr;
	f32 ratio          = mgr->getSunGaugeRatio();
	f32 factor         = mgr->mParms.mParms.mDayStartTime;
	return ((1.0f - ratio)
	        / (1.0f - ((mgr->mParms.mParms.mCountdownTime.mValue - factor) / (mgr->mParms.mParms.mDayEndTime.mValue - factor))))
	     < min;
}

} // namespace Screen
