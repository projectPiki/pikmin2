#include "Screen/Game2DMgr.h"
#include "og/ogLib2D.h"
#include "og/newScreen/Ground.h"
#include "Game/gamePlayData.h"
#include "Game/Navi.h"
#include "kh/FinalFloor.h"
#include "kh/ReadyGo.h"
#include "og/newScreen/Challenge.h"
#include "og/Sound.h"
#include "kh/FinalResult.h"
#include "kh/CaveResult.h"
#include "kh/WinLose.h"
#include "Game/Entities/ItemOnyon.h"
#include "Morimura/Zukan.h"
#include "PSSystem/PSSystemIF.h"
#include "Morimura/Challenge.h"
#include "Morimura/VsSelect.h"
#include "Morimura/HiScore.h"
#include "og/newScreen/KanteiDemo.h"
#include "Game/GameSystem.h"

namespace Screen {

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
    : m_screenMgr(nullptr)
{
	m_screenMgr = newScreen::Mgr::create();
	m_screenMgr->init();
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
void Game2DMgr::update() { m_screenMgr->update(); }

/*
 * --INFO--
 * Address:	803FC050
 * Size:	000024
 */
void Game2DMgr::draw(Graphics& gfx) { m_screenMgr->draw(gfx); }

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
void Game2DMgr::setGamePad(Controller* cont) { m_screenMgr->setGamePad(cont); }

/*
 * --INFO--
 * Address:	803FC09C
 * Size:	000034
 */
bool Game2DMgr::setDispMember(og::Screen::DispMemberBase* disp)
{
	if (m_screenMgr) {
		return m_screenMgr->setDispMember(disp);
	} else {
		return nullptr;
	}
}

/*
 * --INFO--
 * Address:	803FC0D0
 * Size:	000038
 */
void Game2DMgr::setToumeiBG() { m_screenMgr->m_backupScene->setColorBG(0, 0, 0, 0); }

/*
 * --INFO--
 * Address:	803FC108
 * Size:	0000BC
 */
bool Game2DMgr::open_GameGround(og::Screen::DispMemberGround& disp)
{
	if (Game::playData->m_storyFlags & Game::STORY_DebtPaid) {
		disp.m_payDebt = true;
	}
	disp.m_dataGame.m_pokoCount = Game::playData->m_pokoCount;

	SetSceneArg arg(SCENE_GROUND, &disp, 0, true);
	if (m_screenMgr->setScene(arg)) {
		m_screenMgr->startScene(nullptr);
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
	if (m_screenMgr->getSceneType() == SCENE_GROUND && m_screenMgr->m_backupScene->m_stateID != 1) {
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
	if (Game::playData->m_storyFlags & Game::STORY_DebtPaid) {
		disp.m_payDebt = true;
	}
	disp.m_dataGame.m_pokoCount = Game::playData->m_cavePokoCount;

	if (type == 0) {
		SetSceneArg arg(SCENE_CAVE, &disp, 0, true);
		if (m_screenMgr->setScene(arg)) {
			m_screenMgr->startScene(nullptr);
		}
	} else if (type & 2) {
		SetSceneArg arg(SCENE_CAVE, &disp, 0, true);
		if (m_screenMgr->setScene(arg)) {
			kh::Screen::DispFinalFloor disp2;
			SetSceneArg arg2(SCENE_FINAL_FLOOR, &disp2, 0, true);
			if (m_screenMgr->setScene(arg2)) {
				m_screenMgr->startScene(nullptr);
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
	if (m_screenMgr->getSceneType() == SCENE_CAVE && m_screenMgr->m_backupScene->m_stateID != 1) {
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
		if (m_screenMgr->setScene(arg)) {
			m_screenMgr->startScene(nullptr);
		}
	} else if (type & 1) {
		SetSceneArg arg(SCENE_VS, &disp, 0, true);
		if (m_screenMgr->setScene(arg)) {
			kh::Screen::DispReadyGo disp2;
			disp2.m_is2Player = true;
			SetSceneArg arg2(SCENE_READY_GO, &disp2, 0, true);
			if (m_screenMgr->setScene(arg2)) {
				m_screenMgr->startScene(nullptr);
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
	og::Screen::DispMemberVs* disp = static_cast<og::Screen::DispMemberVs*>(m_screenMgr->getDispMember());
	if (disp && disp->isID(OWNER_OGA, MEMBER_VS)) {
		switch (disp->m_doneState) {
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
		if (m_screenMgr->setScene(arg)) {
			m_screenMgr->startScene(&sarg);
		}
	} else if ((type & 3) == 3) {
		if (m_screenMgr->setScene(arg)) {
			kh::Screen::DispReadyGo disp2;
			disp2.m_is2Player    = true;
			disp2.m_isFinalFloor = true;
			disp2.m_gameType     = 1;
			SetSceneArg arg2(SCENE_READY_GO, &disp2, 0, true);
			if (m_screenMgr->setScene(arg2)) {
				m_screenMgr->startScene(nullptr);
			}
		}
	} else if (type & 1) {
		if (m_screenMgr->setScene(arg)) {
			kh::Screen::DispReadyGo disp2;
			disp2.m_is2Player = true;
			disp2.m_gameType  = 1;
			SetSceneArg arg2(SCENE_READY_GO, &disp2, 0, true);
			if (m_screenMgr->setScene(arg2)) {
				m_screenMgr->startScene(nullptr);
			}
		}
	} else if (type & 2) {
		if (m_screenMgr->setScene(arg)) {
			kh::Screen::DispFinalFloor disp2;
			disp2.m_is2Player = true;
			SetSceneArg arg2(SCENE_FINAL_FLOOR, &disp2, 0, true);
			if (m_screenMgr->setScene(arg2)) {
				m_screenMgr->startScene(nullptr);
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
		if (m_screenMgr->setScene(arg)) {
			m_screenMgr->startScene(&sarg);
		}
	} else if ((type & 3) == 3) {
		if (m_screenMgr->setScene(arg)) {
			kh::Screen::DispReadyGo disp2;
			disp2.m_isFinalFloor = true;
			disp2.m_gameType     = 1;
			SetSceneArg arg2(SCENE_READY_GO, &disp2, 0, true);
			if (m_screenMgr->setScene(arg2)) {
				m_screenMgr->startScene(nullptr);
			}
		}
	} else if (type == 1) {
		if (m_screenMgr->setScene(arg)) {
			kh::Screen::DispReadyGo disp2;
			disp2.m_gameType = 1;
			SetSceneArg arg2(SCENE_READY_GO, &disp2, 0, true);
			if (m_screenMgr->setScene(arg2)) {
				m_screenMgr->startScene(nullptr);
			}
		}
	} else if (type == 2) {
		if (m_screenMgr->setScene(arg)) {
			kh::Screen::DispFinalFloor disp2;
			SetSceneArg arg2(SCENE_FINAL_FLOOR, &disp2, 0, true);
			if (m_screenMgr->setScene(arg2)) {
				m_screenMgr->startScene(nullptr);
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
	if (m_screenMgr->isAnyReservation())
		return false;
	switch (m_screenMgr->getSceneType()) {
	case SCENE_GROUND:
	case SCENE_CAVE:
	case SCENE_VS:
	default:
		return false;
	case SCENE_CHALLENGE_1P:
	case SCENE_CHALLENGE_2P:
		if (!Game::naviMgr->getActiveNavi()) {
			return false;
		} else {
			disp.m_sMenuMap.m_activeNavi = true;
			return open_SMenu_Sub(disp);
		}
		break;
	}
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r3, 0x18(r3)
	bl       isAnyReservation__Q26Screen3MgrCFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_803FCD04
	li       r3, 0
	b        lbl_803FCD68

lbl_803FCD04:
	lwz      r3, 0x18(r30)
	bl       getSceneType__Q26Screen3MgrFv
	cmpwi    r3, 0x2724
	beq      lbl_803FCD3C
	bge      lbl_803FCD2C
	cmpwi    r3, 0x2713
	bge      lbl_803FCD34
	cmpwi    r3, 0x2710
	bge      lbl_803FCD3C
	b        lbl_803FCD34

lbl_803FCD2C:
	cmpwi    r3, 0x2727
	beq      lbl_803FCD3C

lbl_803FCD34:
	li       r3, 0
	b        lbl_803FCD68

lbl_803FCD3C:
	lwz      r3, naviMgr__4Game@sda21(r13)
	bl       getActiveNavi__Q24Game7NaviMgrFv
	cmplwi   r3, 0
	bne      lbl_803FCD54
	li       r3, 0
	b        lbl_803FCD68

lbl_803FCD54:
	li       r0, 1
	mr       r3, r30
	stb      r0, 0xa6(r31)
	mr       r4, r31
	bl open_SMenu_Sub__Q26Screen9Game2DMgrFRQ32og6Screen18DispMemberSMenuAll

lbl_803FCD68:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803FCD80
 * Size:	0001B0
 */
bool Game2DMgr::open_SMenu_Sub(og::Screen::DispMemberSMenuAll& disp)
{
	bool ret                                = false;
	disp.m_sMenuPauseDoukutu.m_preCavePokos = disp.m_sMenuPause.m_pokoCount;
	if (m_screenMgr->m_inCave) {
		disp.m_sMenuMap.m_inCave = true;
	} else {
		disp.m_sMenuMap.m_inCave = false;
	}

	// probably want define for poko count
	if (disp.m_sMenuPauseDoukutu.m_preCavePokos < 10000) {
		disp.m_sMenuPauseDoukutu.m_payDebt = true;
	} else {
		disp.m_sMenuPauseDoukutu.m_payDebt = false;
	}
	og::ogSound->setOpen();
	PSPause_StartMenuOn();
	bool set;

	switch (disp.m_openMode) {
	case og::Screen::DispMemberSMenuAll::Open_StoryMode: {
		SetSceneArg arg(SCENE_PAUSE_MENU_MAP, &disp, 0, true);
		set = m_screenMgr->setScene(arg);
		break;
	}
	case og::Screen::DispMemberSMenuAll::Open_ChallengeMode:
	case og::Screen::DispMemberSMenuAll::Open_Versus: {
		SetSceneArg arg(SCENE_PAUSE_MENU_VS, &disp, 0, true);
		set = m_screenMgr->setScene(arg);
		break;
	}
	default:
		JUT_PANICLINE(969, "SMENU MODE ERR!");
	}
	if (set) {
		if (m_screenMgr->startScene(nullptr)) {
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
	switch (m_screenMgr->getSceneType()) {
	case SCENE_PAUSE_MENU_CONTROLS:
	case SCENE_PAUSE_MENU:
	case SCENE_PAUSE_MENU_DOUKUTU:
	case SCENE_PAUSE_MENU_MAP:
	case SCENE_PAUSE_MENU_ITEMS:
	case SCENE_PAUSE_MENU_VS: {
		if (m_screenMgr->isSceneFinish()) {
			int scene = m_screenMgr->getSceneFinishState();
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
	if (m_screenMgr->setScene(arg)) {
		if (m_screenMgr->startScene(nullptr)) {
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
	if (m_screenMgr->getSceneType() != SCENE_WORLD_MAP_INFO_WINDOW_0) {
		return 2;
	}
	if (m_screenMgr->isSceneFinish()) {
		int state = m_screenMgr->getSceneFinishState();
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
	if (m_screenMgr->setScene(arg)) {
		if (m_screenMgr->startScene(nullptr)) {
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
	if (m_screenMgr->getSceneType() != SCENE_WORLD_MAP_INFO_WINDOW_1) {
		return 2;
	}
	if (m_screenMgr->isSceneFinish()) {
		int state = m_screenMgr->getSceneFinishState();
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
	if (m_screenMgr->m_inCave) {
		disp.m_inCave = true;
	} else {
		disp.m_inCave = false;
	}

	if (disp.m_totalPokos >= 10000) {
		disp._28 = 1;
	} else {
		disp._28 = 0;
	}

	if (disp._28) {
		disp.m_kanteiType = 1;
	} else {
		disp.m_kanteiType = 0;
	}

	SetSceneArg arg(SCENE_KANTEI_DEMO, &disp, 0, true);
	if (m_screenMgr->setScene(arg) && m_screenMgr->startScene(nullptr)) {
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
	if (m_screenMgr->getSceneType() == SCENE_KANTEI_DEMO) {
		if (m_screenMgr->setBackupScene()) {
			m_screenMgr->startScene(nullptr);
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
	og::Screen::DispMemberKantei* disp = static_cast<og::Screen::DispMemberKantei*>(m_screenMgr->getDispMember());
	if (disp && disp->isID(OWNER_OGA, MEMBER_KANTEI) && disp->m_isDone) {
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
	m_screenMgr->setScene(arg);
	m_screenMgr->startScene(nullptr);
	PSPause_StartMenuOn();
}

/*
 * --INFO--
 * Address:	803FD54C
 * Size:	000084
 */
void Game2DMgr::close_SpecialItem()
{
	if (m_screenMgr->getSceneType() == SCENE_SPECIAL_ITEM) {
		if (m_screenMgr->setBackupScene()) {
			m_screenMgr->startScene(nullptr);
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
	m_screenMgr->setScene(arg);
	m_screenMgr->startScene(nullptr);
}

/*
 * --INFO--
 * Address:	803FD660
 * Size:	000070
 */
void Game2DMgr::close_Floor()
{
	if (m_screenMgr->getSceneType() == SCENE_FLOOR) {
		EndSceneArg arg;
		arg._04 = 1;
		m_screenMgr->endScene(&arg);
	}
}

/*
 * --INFO--
 * Address:	803FD6D0
 * Size:	00005C
 */
void Game2DMgr::set_FloorVS_LoadEnd()
{
	if (m_screenMgr->getSceneType() == SCENE_FLOOR) {
		og::Screen::DispMemberFloor* disp = static_cast<og::Screen::DispMemberFloor*>(m_screenMgr->getDispMember());
		disp->m_enableButton              = true;
		if (m_screenMgr) {
			m_screenMgr->setDispMember(disp);
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
	if (m_screenMgr->getSceneType() == SCENE_FLOOR) {
		og::Screen::DispMemberFloor* disp = static_cast<og::Screen::DispMemberFloor*>(m_screenMgr->getDispMember());
		disp->m_doEnd                     = true;
	}
}

/*
 * --INFO--
 * Address:	803FD774
 * Size:	000048
 */
void Game2DMgr::startFadeBG_Floor()
{
	if (m_screenMgr->getSceneType() == SCENE_FLOOR) {
		og::Screen::DispMemberFloor* disp = static_cast<og::Screen::DispMemberFloor*>(m_screenMgr->getDispMember());
		disp->m_doForceEnd                = true;
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
	m_screenMgr->setScene(arg);
	m_screenMgr->startScene(nullptr);
}

/*
 * --INFO--
 * Address:	803FD84C
 * Size:	000048
 */
void Game2DMgr::startFadeBG_CourseName()
{
	if (m_screenMgr->getSceneType() == SCENE_COURSE_NAME) {
		og::Screen::DispMemberCourseName* disp = static_cast<og::Screen::DispMemberCourseName*>(m_screenMgr->getDispMember());
		disp->m_isExiting                      = true;
	}
}

/*
 * --INFO--
 * Address:	803FD894
 * Size:	000070
 */
void Game2DMgr::close_CourseName()
{
	if (m_screenMgr->getSceneType() == SCENE_COURSE_NAME) {
		EndSceneArg arg;
		arg._04 = 1;
		m_screenMgr->endScene(&arg);
	}
}

/*
 * --INFO--
 * Address:	803FD904
 * Size:	000048
 */
void Game2DMgr::startCount_CourseName()
{
	if (m_screenMgr->getSceneType() == SCENE_COURSE_NAME) {
		og::Screen::DispMemberCourseName* disp = static_cast<og::Screen::DispMemberCourseName*>(m_screenMgr->getDispMember());
		disp->m_isCounting                     = true;
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
		SetSceneArg arg(SCENE_PIKMIN_DOWN, nullptr, 0, true);
		m_screenMgr->setScene(arg);
		m_screenMgr->startScene(nullptr);
		break;
	}
	case GOTITLE_OlimarDown: {
		SetSceneArg arg(SCENE_ORIMA_DOWN, nullptr, 0, true);
		m_screenMgr->setScene(arg);
		m_screenMgr->startScene(nullptr);
		break;
	}
	case GOTITLE_LouieDown: {
		SetSceneArg arg(SCENE_LUJI_DOWN, nullptr, 0, true);
		m_screenMgr->setScene(arg);
		m_screenMgr->startScene(nullptr);
		break;
	}
	case GOTITLE_PresidentDown: {
		SetSceneArg arg(SCENE_PRESIDENT_DOWN, nullptr, 0, true);
		m_screenMgr->setScene(arg);
		m_screenMgr->startScene(nullptr);
		break;
	}
	case GOTITLE_PikminZero: {
		SetSceneArg arg(SCENE_ZUKAN_ENEMY, nullptr, 0, true); // I think this scene enum may be sus
		m_screenMgr->setScene(arg);
		m_screenMgr->startScene(nullptr);
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
	switch (m_screenMgr->getSceneType()) {
	case SCENE_ZUKAN_ENEMY:
	case SCENE_PIKMIN_DOWN: {
		m_screenMgr->endScene(nullptr);
		break;
	}
	case SCENE_ORIMA_DOWN:
	case SCENE_LUJI_DOWN:
	case SCENE_PRESIDENT_DOWN: {
		if (m_screenMgr->setBackupScene()) {
			m_screenMgr->startScene(nullptr);
		} else {
			m_screenMgr->endScene(nullptr);
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
	if (m_screenMgr->isAnyReservation()) {
		return false;
	}

	if (m_screenMgr->getSceneType() == SCENE_GROUND) {
		SetSceneArg arg(SCENE_CAVE_IN_MENU, &disp, 0, true);
		if (m_screenMgr->setScene(arg) && m_screenMgr->startScene(nullptr)) {
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
	og::Screen::DispMemberAnaDemo* disp = static_cast<og::Screen::DispMemberAnaDemo*>(m_screenMgr->getDispMember());
	if (disp) {
		if (disp->isID(OWNER_OGA, MEMBER_ANA_DEMO)) {
			if (disp->_1F) {
				ret = 0;
			} else {
				int ret2 = 2;
				if (disp->m_selected)
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
	if (m_screenMgr->isAnyReservation()) {
		return false;
	}

	if (m_screenMgr->getSceneType() == SCENE_CAVE) {
		SetSceneArg arg(SCENE_KANKETU_MENU, &disp, 0, true);
		if (m_screenMgr->setScene(arg) && m_screenMgr->startScene(nullptr)) {
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
	if (m_screenMgr->isAnyReservation()) {
		return false;
	}

	if (m_screenMgr->getSceneType() == SCENE_CHALLENGE_1P || m_screenMgr->getSceneType() == SCENE_CHALLENGE_2P) {
		disp.m_isChallenge = true;
		SetSceneArg arg(SCENE_KANKETU_MENU, &disp, 0, true);
		if (m_screenMgr->setScene(arg) && m_screenMgr->startScene(nullptr)) {
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
	og::Screen::DispMemberAnaDemo* disp = static_cast<og::Screen::DispMemberAnaDemo*>(m_screenMgr->getDispMember());
	if (disp) {
		if (disp->isID(OWNER_OGA, MEMBER_KANKETU_MENU)) {
			if (disp->_1F) {
				ret = 0;
			} else {
				int ret2 = 2;
				if (disp->m_selected)
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
	if (m_screenMgr->isAnyReservation()) {
		return false;
	}

	if (m_screenMgr->getSceneType() == SCENE_CAVE || m_screenMgr->getSceneType() == SCENE_CHALLENGE_1P
	    || m_screenMgr->getSceneType() == SCENE_CHALLENGE_2P) {
		SetSceneArg arg(SCENE_CAVE_MORE_MENU, &disp, 0, true);
		if (m_screenMgr->setScene(arg) && m_screenMgr->startScene(nullptr)) {
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
	og::Screen::DispMemberAnaDemo* disp = static_cast<og::Screen::DispMemberAnaDemo*>(m_screenMgr->getDispMember());
	if (disp) {
		if (disp->isID(OWNER_OGA, MEMBER_CAVE_MORE)) {
			if (disp->_1F) {
				ret = 0;
			} else {
				int ret2 = 2;
				if (disp->m_selected)
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
	if (m_screenMgr->setScene(arg) && m_screenMgr->startScene(nullptr)) {
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
	if (m_screenMgr->getSceneType() != SCENE_FINAL_RESULT) {
		return -1;
	} else {
		if (!m_screenMgr->getDispMember()->isID(OWNER_KH, MEMBER_FINAL_RESULT)) {
			JUT_PANICLINE(1636, "disp member err");
		}
		return reinterpret_cast<kh::Screen::DispFinalResult*>(m_screenMgr->getDispMember())->_10;
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
	if (m_screenMgr->setScene(arg) && m_screenMgr->startScene(nullptr)) {
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
	if (m_screenMgr->getSceneType() != SCENE_CAVE_RESULT) {
		return -1;
	} else {
		if (!m_screenMgr->getDispMember()->isID(OWNER_KH, MEMBER_CAVE_RESULT)) {
			JUT_PANICLINE(1656, "disp member err");
		}
		return reinterpret_cast<kh::Screen::DispCaveResult*>(m_screenMgr->getDispMember())->m_isFinished;
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
	if (m_screenMgr->setScene(arg) && m_screenMgr->startScene(nullptr)) {
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
	if (m_screenMgr->getSceneType() != SCENE_DAY_END_RESULT_ITEM && m_screenMgr->getSceneType() != SCENE_DAY_END_RESULT_INC_P
	    && m_screenMgr->getSceneType() != SCENE_DAY_END_RESULT_MAIL) {
		return -1;
	}

	if (!m_screenMgr->getDispMember()->isID(OWNER_KH, MEMBER_DAY_END_RESULT)) {
		JUT_PANICLINE(1687, "disp member err");
	}
	return reinterpret_cast<kh::Screen::DispDayEndResult*>(m_screenMgr->getDispMember())->m_mail._14;
}

/*
 * --INFO--
 * Address:	803FE5A0
 * Size:	0000A8
 */
bool Game2DMgr::open_PayDept(kh::Screen::DispPayDept& disp)
{
	SetSceneArg arg(SCENE_PAY_DEPT, reinterpret_cast<og::Screen::DispMemberBase*>(&disp), 0, true);
	if (m_screenMgr->setScene(arg) && m_screenMgr->startScene(nullptr)) {
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
	if (m_screenMgr->getSceneType() == SCENE_PAY_DEPT && m_screenMgr->isSceneFinish()) {
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
	if (m_screenMgr->setScene(arg) && m_screenMgr->startScene(nullptr)) {
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
	if (m_screenMgr->getSceneType() == SCENE_SAVE && m_screenMgr->isSceneFinish()) {
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
	if (m_screenMgr->setScene(arg) && m_screenMgr->startScene(nullptr)) {
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
	if (m_screenMgr->getSceneType() != SCENE_FINAL_MSG) {
		return -10;
	}
	return m_screenMgr->getSceneFinishState();
}

/*
 * --INFO--
 * Address:	803FE898
 * Size:	000070
 */
void Game2DMgr::stopFinalFloorSound()
{
	if (m_screenMgr->getSceneType() == SCENE_FINAL_FLOOR) {
		kh::Screen::SceneFinalFloor* scene = static_cast<kh::Screen::SceneFinalFloor*>(m_screenMgr->m_backupScene);
		P2ASSERTLINE(124, scene->m_objFinalFloor);
		scene->m_objFinalFloor->stopSound();
	}
}

/*
 * --INFO--
 * Address:	803FE908
 * Size:	000070
 */
void Game2DMgr::restartFinalFloorSound()
{
	if (m_screenMgr->getSceneType() == SCENE_FINAL_FLOOR) {
		kh::Screen::SceneFinalFloor* scene = static_cast<kh::Screen::SceneFinalFloor*>(m_screenMgr->m_backupScene);
		P2ASSERTLINE(125, scene->m_objFinalFloor);
		scene->m_objFinalFloor->restartSound();
	}
}

/*
 * --INFO--
 * Address:	803FE978
 * Size:	000090
 */
int Game2DMgr::check_ReadyGo() const
{
	if (m_screenMgr->getSceneType() != SCENE_READY_GO) {
		return -1;
	} else {
		if (!m_screenMgr->getDispMember()->isID(OWNER_KH, MEMBER_READY_GO)) {
			JUT_PANICLINE(1766, "disp member err");
		}
		return reinterpret_cast<kh::Screen::DispReadyGo*>(m_screenMgr->getDispMember())->m_status;
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
	if (m_screenMgr->setScene(arg) && m_screenMgr->startScene(nullptr)) {
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
	if (m_screenMgr->getSceneType() != SCENE_WIN_LOSE_REASON) {
		ret = 0;
	} else {
		ret                                   = 0;
		kh::Screen::SceneWinLoseReason* scene = reinterpret_cast<kh::Screen::SceneWinLoseReason*>(m_screenMgr->m_backupScene);
		if (scene->m_done[0] && scene->m_done[1]) {
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
	if (m_screenMgr->setScene(arg) && m_screenMgr->startScene(nullptr)) {
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
	if (m_screenMgr->getSceneType() != SCENE_WIN_LOSE) {
		return -1;
	} else {
		if (!m_screenMgr->getDispMember()->isID(OWNER_KH, MEMBER_WIN_LOSE)) {
			JUT_PANICLINE(1801, "disp member err");
		}
		return reinterpret_cast<kh::Screen::DispWinLose*>(m_screenMgr->getDispMember())->_0C;
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
	if (m_screenMgr->setScene(arg) && m_screenMgr->startScene(nullptr)) {
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
	if (m_screenMgr->setScene(arg) && m_screenMgr->startScene(nullptr)) {
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
	if (m_screenMgr->isAnyReservation())
		return false;
	if (checkDayEnd(0.08f))
		return false;

	SceneType id = (SceneType)0;
	switch (disp.m_onyonID) {
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
	if (m_screenMgr->setScene(arg) && m_screenMgr->startScene(nullptr)) {
		switch (disp.m_onyonID) {
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
	SceneType id = m_screenMgr->getSceneType();
	if ((u32)(id + ~SCENE_FLOOR) <= 3 || id == SCENE_CONTENA_PURPLE) {
		og::Screen::DispMemberContena* disp = static_cast<og::Screen::DispMemberContena*>(m_screenMgr->getDispMember());
		if (disp->isID(OWNER_OGA, MEMBER_CONTENA)) {
			switch (disp->m_state) {
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
	SceneType id = m_screenMgr->getSceneType();
	if ((u32)(id + ~SCENE_FLOOR) <= 3 || id == SCENE_CONTENA_PURPLE) {
		og::Screen::DispMemberContena* disp = static_cast<og::Screen::DispMemberContena*>(m_screenMgr->getDispMember());
		if (disp->isID(OWNER_OGA, MEMBER_CONTENA)) {
			ret = disp->m_result;
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
	if (m_screenMgr->isAnyReservation())
		return false;
	if (checkDayEnd(0.08f))
		return false;
	if (disp.m_hasWhite && disp.m_hasPurple) {
		disp.m_contena1._2C = 1;
		disp.m_contena2._2C = 1;
		SetSceneArg arg(SCENE_UFO_MENU, &disp, 0, true);
		if (m_screenMgr->setScene(arg) && m_screenMgr->startScene(nullptr)) {
			PSPause_StartMenuOn();
			PSSystem::spSysIF->playSystemSe(PSSE_SY_MENU_OPEN, 0);
			return true;
		}
	} else {
		if (disp.m_hasWhite) {
			disp.m_contena1._2C          = 0;
			disp.m_ufoMenu.m_contenaType = 1;
			SetSceneArg arg(SCENE_CONTENA_WHITE, &disp, 0, true);
			if (m_screenMgr->setScene(arg) && m_screenMgr->startScene(nullptr)) {
				PSPause_StartMenuOn();
				return true;
			}
		} else if (disp.m_hasPurple) {
			disp.m_contena2._2C          = 0;
			disp.m_ufoMenu.m_contenaType = 2;
			SetSceneArg arg(SCENE_CONTENA_PURPLE, &disp, 0, true);
			if (m_screenMgr->setScene(arg) && m_screenMgr->startScene(nullptr)) {
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
	og::Screen::DispMemberUfoGroup* disp = static_cast<og::Screen::DispMemberUfoGroup*>(m_screenMgr->getDispMember());
	switch (m_screenMgr->getSceneType()) {
	case SCENE_UFO_MENU: {
		if (!disp->m_ufoMenu.m_contenaType) {
			ret = 1;
			PSPause_StartMenuOff();
		} else {
			ret = 0;
		}
		break;
	}
	case SCENE_CONTENA_WHITE: {
		switch (disp->m_contena1.m_state) {
		case 4: {
			ret = 2;
			PSPause_StartMenuOff();
			break;
		}
		case 3: {
			if (disp->m_contena1._2C) {
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
		switch (disp->m_contena2.m_state) {
		case 4: {
			ret = 2;
			PSPause_StartMenuOff();
			break;
		}
		case 3: {
			if (disp->m_contena2._2C) {
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
	og::Screen::DispMemberUfoGroup* disp = static_cast<og::Screen::DispMemberUfoGroup*>(m_screenMgr->getDispMember());
	switch (m_screenMgr->getSceneType()) {
	case SCENE_CONTENA_WHITE: {
		*ret1 = disp->m_contena1.m_result;
		*ret2 = 0;
		break;
	}
	case SCENE_CONTENA_PURPLE: {
		*ret1 = 0;
		*ret2 = disp->m_contena2.m_result;
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
	SetSceneArg arg(SCENE_ZUKAN_ITEM, reinterpret_cast<og::Screen::DispMemberBase*>(&disp), 0, true);
	if (m_screenMgr->setScene(arg)) {
		return m_screenMgr->startScene(nullptr);
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
	SetSceneArg arg(SCENE_HIGH_SCORE, reinterpret_cast<og::Screen::DispMemberBase*>(&disp), 0, true);
	if (m_screenMgr->setScene(arg)) {
		return m_screenMgr->startScene(nullptr);
	}
	return false;
}

/*
 * --INFO--
 * Address:	803FF604
 * Size:	000030
 */
bool Game2DMgr::isZukanEnemy() { return (m_screenMgr->getSceneType() == SCENE_ZUKAN_ITEM); }

/*
 * --INFO--
 * Address:	803FF634
 * Size:	000030
 */
bool Game2DMgr::isZukanItem() { return (m_screenMgr->getSceneType() == SCENE_HIGH_SCORE); }

/*
 * --INFO--
 * Address:	803FF664
 * Size:	000084
 */
int Game2DMgr::check_ZukanItemRequest(int& id)
{
	int ret = 0;
	if (m_screenMgr->getSceneType() == SCENE_HIGH_SCORE) {
		Morimura::TDItemScene* scene = static_cast<Morimura::TDItemScene*>(m_screenMgr->m_backupScene);
		if (scene) {
			Morimura::TZukanBase* obj = static_cast<Morimura::TZukanBase*>(scene->m_object);
			if (obj) {
				ret = obj->checkRequest(id);
			} else {
				ret = 0;
			}
		}
	}
	return ret;
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	li       r31, 0
	stw      r30, 0x18(r1)
	mr       r30, r4
	stw      r29, 0x14(r1)
	mr       r29, r3
	lwz      r3, 0x18(r3)
	bl       getSceneType__Q26Screen3MgrFv
	cmpwi    r3, 0x2735
	bne      lbl_803FF6C8
	lwz      r3, 0x18(r29)
	lwz      r3, 0x1c(r3)
	cmplwi   r3, 0
	beq      lbl_803FF6C8
	lwz      r3, 0x220(r3)
	cmplwi   r3, 0
	beq      lbl_803FF6C0
	mr       r4, r30
	bl       checkRequest__Q28Morimura10TZukanBaseFRi
	b        lbl_803FF6C4

lbl_803FF6C0:
	li       r3, 0

lbl_803FF6C4:
	mr       r31, r3

lbl_803FF6C8:
	lwz      r0, 0x24(r1)
	mr       r3, r31
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	803FF6E8
 * Size:	000084
 */
int Game2DMgr::check_ZukanEnemyRequest(int& id)
{
	int ret = 0;
	if (m_screenMgr->getSceneType() == SCENE_ZUKAN_ITEM) {
		Morimura::TDEnemyScene* scene = static_cast<Morimura::TDEnemyScene*>(m_screenMgr->m_backupScene);
		if (scene) {
			Morimura::TZukanBase* obj = static_cast<Morimura::TZukanBase*>(scene->m_object);
			if (obj) {
				ret = obj->checkRequest(id);
			} else {
				ret = 0;
			}
		}
	}
	return ret;
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	li       r31, 0
	stw      r30, 0x18(r1)
	mr       r30, r4
	stw      r29, 0x14(r1)
	mr       r29, r3
	lwz      r3, 0x18(r3)
	bl       getSceneType__Q26Screen3MgrFv
	cmpwi    r3, 0x2734
	bne      lbl_803FF74C
	lwz      r3, 0x18(r29)
	lwz      r3, 0x1c(r3)
	cmplwi   r3, 0
	beq      lbl_803FF74C
	lwz      r3, 0x220(r3)
	cmplwi   r3, 0
	beq      lbl_803FF744
	mr       r4, r30
	bl       checkRequest__Q28Morimura10TZukanBaseFRi
	b        lbl_803FF748

lbl_803FF744:
	li       r3, 0

lbl_803FF748:
	mr       r31, r3

lbl_803FF74C:
	lwz      r0, 0x24(r1)
	mr       r3, r31
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	803FF76C
 * Size:	000090
 */
int Game2DMgr::getZukanEnemyCurrSelectId()
{
	int ret = -1;
	if (m_screenMgr->getSceneType() == SCENE_ZUKAN_ITEM) {
		Morimura::TDEnemyScene* scene = static_cast<Morimura::TDEnemyScene*>(m_screenMgr->m_backupScene);
		P2ASSERTLINE(2195, scene);
		Morimura::TZukanBase* obj = static_cast<Morimura::TZukanBase*>(scene->m_object);
		if (obj) {
			ret = obj->getCurrSelectId();
		} else {
			ret = -1;
		}
	}
	return ret;
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	li       r31, -1
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r3, 0x18(r3)
	bl       getSceneType__Q26Screen3MgrFv
	cmpwi    r3, 0x2734
	bne      lbl_803FF7E0
	lwz      r3, 0x18(r30)
	lwz      r31, 0x1c(r3)
	cmplwi   r31, 0
	bne      lbl_803FF7C4
	lis      r3, lbl_80498510@ha
	lis      r5, lbl_80498524@ha
	addi     r3, r3, lbl_80498510@l
	li       r4, 0x893
	addi     r5, r5, lbl_80498524@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803FF7C4:
	lwz      r3, 0x220(r31)
	cmplwi   r3, 0
	beq      lbl_803FF7D8
	bl       getCurrSelectId__Q28Morimura10TZukanBaseFv
	b        lbl_803FF7DC

lbl_803FF7D8:
	li       r3, -1

lbl_803FF7DC:
	mr       r31, r3

lbl_803FF7E0:
	lwz      r0, 0x14(r1)
	mr       r3, r31
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803FF7FC
 * Size:	000090
 */
int Game2DMgr::getZukanItemCurrSelectId()
{
	int ret = -1;
	if (m_screenMgr->getSceneType() == SCENE_HIGH_SCORE) {
		Morimura::TDItemScene* scene = static_cast<Morimura::TDItemScene*>(m_screenMgr->m_backupScene);
		P2ASSERTLINE(2210, scene);
		Morimura::TZukanBase* obj = static_cast<Morimura::TZukanBase*>(scene->m_object);
		if (obj) {
			ret = obj->getCurrSelectId();
		} else {
			ret = -1;
		}
	}
	return ret;
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	li       r31, -1
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r3, 0x18(r3)
	bl       getSceneType__Q26Screen3MgrFv
	cmpwi    r3, 0x2735
	bne      lbl_803FF870
	lwz      r3, 0x18(r30)
	lwz      r31, 0x1c(r3)
	cmplwi   r31, 0
	bne      lbl_803FF854
	lis      r3, lbl_80498510@ha
	lis      r5, lbl_80498524@ha
	addi     r3, r3, lbl_80498510@l
	li       r4, 0x8a2
	addi     r5, r5, lbl_80498524@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803FF854:
	lwz      r3, 0x220(r31)
	cmplwi   r3, 0
	beq      lbl_803FF868
	bl       getCurrSelectId__Q28Morimura10TZukanBaseFv
	b        lbl_803FF86C

lbl_803FF868:
	li       r3, -1

lbl_803FF86C:
	mr       r31, r3

lbl_803FF870:
	lwz      r0, 0x14(r1)
	mr       r3, r31
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803FF88C
 * Size:	0000BC
 */
void Game2DMgr::requireZukanRequest()
{
	SceneType id = m_screenMgr->getSceneType();
	if (id == SCENE_HIGH_SCORE) {
		Morimura::TDItemScene* scene = static_cast<Morimura::TDItemScene*>(m_screenMgr->m_backupScene);
		P2ASSERTLINE(2227, scene);
		Morimura::TZukanBase* obj = static_cast<Morimura::TZukanBase*>(scene->m_object);
		if (obj) {
			obj->requireRequest();
		}
	} else if (id == SCENE_ZUKAN_ITEM) {
		Morimura::TDEnemyScene* scene = static_cast<Morimura::TDEnemyScene*>(m_screenMgr->m_backupScene);
		P2ASSERTLINE(2233, scene);
		Morimura::TZukanBase* obj = static_cast<Morimura::TZukanBase*>(scene->m_object);
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
	SceneType id = m_screenMgr->getSceneType();
	if (id == SCENE_HIGH_SCORE) {
		Morimura::TDItemScene* scene = static_cast<Morimura::TDItemScene*>(m_screenMgr->m_backupScene);
		P2ASSERTLINE(2247, scene);
		Morimura::TZukanBase* obj = static_cast<Morimura::TZukanBase*>(scene->m_object);
		if (obj) {
			obj->requireEffectOff();
		}
	} else if (id == SCENE_ZUKAN_ITEM) {
		Morimura::TDEnemyScene* scene = static_cast<Morimura::TDEnemyScene*>(m_screenMgr->m_backupScene);
		P2ASSERTLINE(2253, scene);
		Morimura::TZukanBase* obj = static_cast<Morimura::TZukanBase*>(scene->m_object);
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
	SceneType id = m_screenMgr->getSceneType();
	if (id == SCENE_HIGH_SCORE) {
		Morimura::TDItemScene* scene = static_cast<Morimura::TDItemScene*>(m_screenMgr->m_backupScene);
		P2ASSERTLINE(2270, scene);
		Morimura::TZukanBase* obj = static_cast<Morimura::TZukanBase*>(scene->m_object);
		if (obj) {
			ret = obj->isEnlargedWindow();
		} else {
			ret = false;
		}
	} else if (id == SCENE_ZUKAN_ITEM) {
		Morimura::TDEnemyScene* scene = static_cast<Morimura::TDEnemyScene*>(m_screenMgr->m_backupScene);
		P2ASSERTLINE(2277, scene);
		Morimura::TZukanBase* obj = static_cast<Morimura::TZukanBase*>(scene->m_object);
		if (obj) {
			ret = obj->isEnlargedWindow();
		} else {
			ret = false;
		}
	}
	return ret;
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	li       r31, 0
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r3, 0x18(r3)
	bl       getSceneType__Q26Screen3MgrFv
	cmpwi    r3, 0x2735
	bne      lbl_803FFA7C
	lwz      r3, 0x18(r30)
	lwz      r31, 0x1c(r3)
	cmplwi   r31, 0
	bne      lbl_803FFA5C
	lis      r3, lbl_80498510@ha
	lis      r5, lbl_80498524@ha
	addi     r3, r3, lbl_80498510@l
	li       r4, 0x8de
	addi     r5, r5, lbl_80498524@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803FFA5C:
	lwz      r3, 0x220(r31)
	cmplwi   r3, 0
	beq      lbl_803FFA70
	bl       isEnlargedWindow__Q28Morimura10TZukanBaseFv
	b        lbl_803FFA74

lbl_803FFA70:
	li       r3, 0

lbl_803FFA74:
	mr       r31, r3
	b        lbl_803FFACC

lbl_803FFA7C:
	cmpwi    r3, 0x2734
	bne      lbl_803FFACC
	lwz      r3, 0x18(r30)
	lwz      r31, 0x1c(r3)
	cmplwi   r31, 0
	bne      lbl_803FFAB0
	lis      r3, lbl_80498510@ha
	lis      r5, lbl_80498524@ha
	addi     r3, r3, lbl_80498510@l
	li       r4, 0x8e5
	addi     r5, r5, lbl_80498524@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803FFAB0:
	lwz      r3, 0x220(r31)
	cmplwi   r3, 0
	beq      lbl_803FFAC4
	bl       isEnlargedWindow__Q28Morimura10TZukanBaseFv
	b        lbl_803FFAC8

lbl_803FFAC4:
	li       r3, 0

lbl_803FFAC8:
	mr       r31, r3

lbl_803FFACC:
	lwz      r0, 0x14(r1)
	mr       r3, r31
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803FFAE8
 * Size:	0000E4
 */
bool Game2DMgr::isZukanMemoWindow()
{
	bool ret     = false;
	SceneType id = m_screenMgr->getSceneType();
	if (id == SCENE_HIGH_SCORE) {
		Morimura::TDItemScene* scene = static_cast<Morimura::TDItemScene*>(m_screenMgr->m_backupScene);
		P2ASSERTLINE(2298, scene);
		Morimura::TZukanBase* obj = static_cast<Morimura::TZukanBase*>(scene->m_object);
		if (obj) {
			ret = obj->isMemoWindow();
		} else {
			ret = false;
		}
	} else if (id == SCENE_ZUKAN_ITEM) {
		Morimura::TDEnemyScene* scene = static_cast<Morimura::TDEnemyScene*>(m_screenMgr->m_backupScene);
		P2ASSERTLINE(2305, scene);
		Morimura::TZukanBase* obj = static_cast<Morimura::TZukanBase*>(scene->m_object);
		if (obj) {
			ret = obj->isMemoWindow();
		} else {
			ret = false;
		}
	}
	return ret;
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	li       r31, 0
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r3, 0x18(r3)
	bl       getSceneType__Q26Screen3MgrFv
	cmpwi    r3, 0x2735
	bne      lbl_803FFB60
	lwz      r3, 0x18(r30)
	lwz      r31, 0x1c(r3)
	cmplwi   r31, 0
	bne      lbl_803FFB40
	lis      r3, lbl_80498510@ha
	lis      r5, lbl_80498524@ha
	addi     r3, r3, lbl_80498510@l
	li       r4, 0x8fa
	addi     r5, r5, lbl_80498524@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803FFB40:
	lwz      r3, 0x220(r31)
	cmplwi   r3, 0
	beq      lbl_803FFB54
	bl       isMemoWindow__Q28Morimura10TZukanBaseFv
	b        lbl_803FFB58

lbl_803FFB54:
	li       r3, 0

lbl_803FFB58:
	mr       r31, r3
	b        lbl_803FFBB0

lbl_803FFB60:
	cmpwi    r3, 0x2734
	bne      lbl_803FFBB0
	lwz      r3, 0x18(r30)
	lwz      r31, 0x1c(r3)
	cmplwi   r31, 0
	bne      lbl_803FFB94
	lis      r3, lbl_80498510@ha
	lis      r5, lbl_80498524@ha
	addi     r3, r3, lbl_80498510@l
	li       r4, 0x901
	addi     r5, r5, lbl_80498524@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803FFB94:
	lwz      r3, 0x220(r31)
	cmplwi   r3, 0
	beq      lbl_803FFBA8
	bl       isMemoWindow__Q28Morimura10TZukanBaseFv
	b        lbl_803FFBAC

lbl_803FFBA8:
	li       r3, 0

lbl_803FFBAC:
	mr       r31, r3

lbl_803FFBB0:
	lwz      r0, 0x14(r1)
	mr       r3, r31
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803FFBCC
 * Size:	0000C4
 */
bool Game2DMgr::isAppearConfirmWindow()
{
	bool ret     = false;
	SceneType id = m_screenMgr->getSceneType();
	if (id == SCENE_HIGH_SCORE) {
		Morimura::TDItemScene* scene = static_cast<Morimura::TDItemScene*>(m_screenMgr->m_backupScene);
		P2ASSERTLINE(2345, scene);
		ret = scene->isAppearConfirmWindow();
	} else if (id == SCENE_ZUKAN_ITEM) {
		Morimura::TDEnemyScene* scene = static_cast<Morimura::TDEnemyScene*>(m_screenMgr->m_backupScene);
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
	SetSceneArg arg(SCENE_CHALLENGE_RESULT, reinterpret_cast<og::Screen::DispMemberBase*>(&disp), 0, true);
	if (m_screenMgr->setScene(arg)) {
		return m_screenMgr->startScene(nullptr);
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

	Morimura::DispMemberChallengeSelect* disp = reinterpret_cast<Morimura::DispMemberChallengeSelect*>(m_screenMgr->getDispMember());

	if (disp->_1C == 3) {
		ret1 = disp->m_stageNumber;
		ret2 = disp->m_playType;
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
	SetSceneArg arg(SCENE_VS_SELECT, reinterpret_cast<og::Screen::DispMemberBase*>(&disp), 0, true);
	if (m_screenMgr->setScene(arg)) {
		return m_screenMgr->startScene(nullptr);
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
	Morimura::DispMemberChallengeResult* disp = reinterpret_cast<Morimura::DispMemberChallengeResult*>(m_screenMgr->getDispMember());
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
	SetSceneArg arg(SCENE_SOMETHINGISBROKENHERE, reinterpret_cast<og::Screen::DispMemberBase*>(&disp), 0, true);
	if (m_screenMgr->setScene(arg)) {
		return m_screenMgr->startScene(nullptr);
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

	Morimura::DispMemberVsSelect* disp = reinterpret_cast<Morimura::DispMemberVsSelect*>(m_screenMgr->getDispMember());

	if (disp->_34 == 3) {
		ret1 = disp->m_selectedStageIndex;
		ret2 = disp->m_olimarHandicap;
		ret3 = disp->m_louieHandicap;
	}
	return disp->_34;
}

/*
 * --INFO--
 * Address:	803FFF7C
 * Size:	00009C
 */
bool Game2DMgr::open_HighScore(Morimura::DispMemberHighScore& disp)
{
	SetSceneArg arg(SCENE_CHALLENGE_SELECT, reinterpret_cast<og::Screen::DispMemberBase*>(&disp), 0, true);
	if (m_screenMgr->setScene(arg)) {
		return m_screenMgr->startScene(nullptr);
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
	SceneType id = m_screenMgr->getSceneType();
	if (id == SCENE_CHALLENGE_SELECT) {
		Morimura::DispMemberHighScore* disp = reinterpret_cast<Morimura::DispMemberHighScore*>(m_screenMgr->getDispMember());
		ret                                 = disp->_0C;
		disp->_0C                           = false;
	} else {
		ret = false;
	}
	return ret;
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, 0x18(r3)
	bl       getSceneType__Q26Screen3MgrFv
	cmpwi    r3, 0x2736
	bne      lbl_80400058
	lwz      r3, 0x18(r31)
	bl       getDispMember__Q26Screen3MgrFv
	lbz      r4, 0xc(r3)
	li       r0, 0
	stb      r0, 0xc(r3)
	mr       r3, r4
	b        lbl_8040005C

lbl_80400058:
	li       r3, 0

lbl_8040005C:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80400070
 * Size:	00006C
 */
bool Game2DMgr::drawKanteiMsg(Graphics& gfx)
{
	bool ret     = false;
	SceneType id = m_screenMgr->getSceneType();
	if (id == SCENE_KANTEI_DEMO) {
		og::newScreen::KanteiDemo* scene = static_cast<og::newScreen::KanteiDemo*>(m_screenMgr->m_backupScene);
		og::newScreen::ObjKantei* obj    = static_cast<og::newScreen::ObjKantei*>(scene->m_objBase);
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

	Game::TimeMgr* mgr = Game::gameSystem->m_timeMgr;
	f32 ratio          = mgr->getSunGaugeRatio();
	f32 factor         = mgr->m_parms.parms.m_dayStartTime;
	return ((1.0f - ratio) / 1.0f - ((mgr->m_parms.parms.m_countdownTime - factor) / (mgr->m_parms.parms.m_dayEndTime - factor))) < min;
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stfd     f31, 0x10(r1)
	psq_st   f31, 24(r1), 0, qr0
	stw      r31, 0xc(r1)
	lwz      r3, gameSystem__4Game@sda21(r13)
	fmr      f31, f1
	cmplwi   r3, 0
	bne      lbl_8040010C
	li       r3, 0
	b        lbl_8040014C

lbl_8040010C:
	lwz      r31, 0x40(r3)
	mr       r3, r31
	bl       getSunGaugeRatio__Q24Game7TimeMgrFv
	lfs      f4, 0x3c(r31)
	lfs      f2, 0x1f4(r31)
	lfs      f0, 0x64(r31)
	fsubs    f2, f2, f4
	lfs      f3, lbl_80520040@sda21(r2)
	fsubs    f0, f0, f4
	fsubs    f1, f3, f1
	fdivs    f0, f2, f0
	fsubs    f0, f3, f0
	fdivs    f0, f1, f0
	fcmpo    cr0, f0, f31
	mfcr     r0
	srwi     r3, r0, 0x1f

lbl_8040014C:
	psq_l    f31, 24(r1), 0, qr0
	lwz      r0, 0x24(r1)
	lfd      f31, 0x10(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

} // namespace Screen
