#include "Game/VsGame.h"
#include "Game/DeathMgr.h"
#include "Game/MoviePlayer.h"
#include "Game/Entities/ItemOnyon.h"
#include "Game/Entities/ItemHole.h"
#include "Game/Entities/PelletItem.h"
#include "Game/MapMgr.h"
#include "Game/gameStat.h"
#include "Game/Data.h"
#include "Game/mapParts.h"
#include "VsOtakaraName.h"
#include "Screen/Game2DMgr.h"
#include "kh/khWinLose.h"
#include "PSM/Director.h"
#include "PSM/Global.h"
#include "PSSystem/PSScene.h"
#include "PSSystem/PSGame.h"
#include "PSSystem/PSMainSide_Scene.h"
#include "utilityU.h"
#include "Controller.h"
#include "PikiAI.h"
#include "Radar.h"
#include "nans.h"

namespace Game {
namespace VsGame {

static const char unusedVsGSGameArray[] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
static const char vsGSGameName[]        = "vsGS_Game";

/*
 * --INFO--
 * Address:	802292A4
 * Size:	0000A4
 */
GameState::GameState()
    : State(VGS_Game)
{
	mController = new Controller(JUTGamePad::PORT_0);
}

/*
 * --INFO--
 * Address:	80229354
 * Size:	0001AC
 */
void GameState::init(VsGameSection* section, StateArg* stateArg)
{
	_16 = 0;
	mFlags.clear();
	section->refreshHIO();
	do_init(section);
	section->setFixNearFar(true, 1.0f, 12800.0f);
	DeathMgr::clear();
	gameSystem->resetFlag(GAMESYS_IsPlaying);
	gameSystem->setFlag(GAMESYS_IsGameWorldActive);
	section->clearCaveMenus();

	if (!gameSystem->isMultiplayerMode()) {
		section->setPlayerMode(0);
	}

	if (gameSystem->isVersusMode()) {
		section->setPlayerMode(2);
		clearLoseCauses();
		Screen::gGame2DMgr->startFadeBG_Floor();
	}

	mHasKeyDemoPlayed = false;

	if (gameSystem->isChallengeMode()) {
		mTimer            = section->mTimeLimit;
		mFloorExtendTimer = section->mChallengeStageData->mFloorTimerExtensions[section->getCurrFloor()];
		mDisplayTime      = mTimer / 4;
		section->mTimeLimit += mFloorExtendTimer;
	}

	section->mMarbleCountP2         = 0;
	section->mMarbleCountP1         = 0;
	section->mYellowMarbleCounts[1] = 0;
	section->mYellowMarbleCounts[0] = 0;
	section->mGhostIconTimers[1]    = 0.0f;
	section->mGhostIconTimers[0]    = 0.0f;
}

/*
 * --INFO--
 * Address:	80229500
 * Size:	000014
 */
void GameState::clearLoseCauses()
{
	mLoseCauses[0].clear();
	mLoseCauses[1].clear();
	_16 = 0;
}

/*
 * --INFO--
 * Address:	80229514
 * Size:	0001D4
 */
void GameState::do_init(VsGameSection* section)
{
	moviePlayer->mActingCamera = section->mOlimarCamera;
	mFlags.clear();

	if (!gameSystem->isVersusMode()) {
		MoviePlayArg arg("s0B_cv_coursein", nullptr, section->mMovieFinishCallback, 0);
		arg.mDelegateStart = section->mMovieStartCallback;
		mapMgr->getStartPosition(arg.mOrigin, 0);
		arg.mOrigin.y = mapMgr->getMinY(arg.mOrigin);

		ItemOnyon::mgr->mPod;
		if (ItemOnyon::mgr->mPod) {
			arg.mAngle = ItemOnyon::mgr->mPod->getFaceDir();
		}

		moviePlayer->play(arg);
		Screen::gGame2DMgr->startCount_Floor();

	} else {
		open_GameChallenge(section, 1);
		gameSystem->setPause(false, "vs-readygo", 3);
		gameSystem->setPause(true, "vs readygo", 6);
		gameSystem->setMoviePause(true, "vs readygo");
		setFlag(VSGS_Unk8);
		gameSystem->setFlag(GAMESYS_IsPlaying);
		section->setCamController();
	}

	if (gameSystem->isVersusMode()) {
		section->createVsPikmins();
		section->initCardGeneration();
	} else {
		section->createFallPikmins(section->mContainer1, 0);
	}

	Screen::gGame2DMgr->mScreenMgr->mInCave = 1;
}

/*
 * --INFO--
 * Address:	802296E8
 * Size:	00000C
 */
bool GameState::goingToCave(VsGameSection* section) { return isFlag(VSGS_Unk1); }

/*
 * This fake function is here to generate the vtables in the correct order
 * - I cannot see a way for them to generate correctly without something here to
 * spawn DispMemberChallenge2P 'before' (after) DispWinLose, so this will have to suffice. - HP
 */
static void fakeFuncVsGsGame() { og::Screen::DispMemberChallenge2P disp; }

/*
 * --INFO--
 * Address:	802296F4
 * Size:	0008FC
 */
void GameState::exec(VsGameSection* section)
{
	if (isFlag(VSGS_Unk16)) {
		return;
	}

	section->BaseGameSection::doUpdate();

	if (section->mCurrentState->mId != VGS_Game) {
		return;
	}

	if (isFlag(VSGS_Unk8)) {
		switch (Screen::gGame2DMgr->check_ReadyGo()) {
		case 1:
			gameSystem->setPause(false, "vs-rg-arr", 3);
			gameSystem->setMoviePause(false, "vs-rg-arr");
			resetFlag(VSGS_Unk8);
			gameSystem->setFlag(GAMESYS_IsPlaying);
			break;

		default:
			return;
		}
	}

	if (gameSystem->isChallengeMode()) {
		checkFindKeyDemo(section);

	} else if (!gameSystem->paused_soft() && gameSystem->isVersusMode()) {
		updateNavi(section, VSPLAYER_Red);
		updateNavi(section, VSPLAYER_Blue);
	}

	checkPikminZero(section);

	if (gameSystem->isVersusMode()) {
		section->calcVsScores();
		if (!gameSystem->paused()) {
			section->updateCardGeneration();
			section->mCardMgr->update();
		}

		if (isFlag(VSGS_Unk9)) {
			if ((u8)Screen::gGame2DMgr->check_WinLoseReason()) {
				resetFlag(VSGS_Unk9);
				setFlag(VSGS_Unk10);
				int outcome;
				u8 redLost  = getLoseCauses(VSPLAYER_Red);
				u8 blueLost = getLoseCauses(VSPLAYER_Blue);

				if (!redLost && !blueLost) { // neither player lost
					outcome = 3;             // draw
					VsGameSection::mDrawCount += 1;

				} else if (!redLost) { // red didn't lose
					outcome = 1;       // red win
					VsGameSection::mRedWinCount += 1;
					section->mVsWinner = 0;

				} else if (!blueLost) { // blue didn't lose
					outcome = 2;        // blue win
					VsGameSection::mBlueWinCount += 1;
					section->mVsWinner = 1;

				} else {         // both lost/something wacky happened
					outcome = 3; // draw
					VsGameSection::mDrawCount += 1;
					section->mVsWinner = -1;
				}

				kh::Screen::DispWinLose winLose(outcome, 1);
				Screen::gGame2DMgr->open_WinLose(winLose);
				return;

			} else {
				return;
			}
		}

		if (isFlag(VSGS_Unk10)) {
			switch (Screen::gGame2DMgr->check_WinLose()) {
			case 0:
			case 1:
			case 2:
				break;
			case 3:
				TitleArg arg;
				arg._00 = 1;
				transit(section, VGS_Title, &arg);
			}
			return;
		}

		if (!_16) {
			if (!GameStat::getAllPikmins(Red)) {
				setLoseCause(VSPLAYER_Red, VSLOSE_Extinction);
			}
			if (!GameStat::getAllPikmins(Blue)) {
				setLoseCause(VSPLAYER_Blue, VSLOSE_Extinction);
			}
		}

	} else {
		PSM::PikminNumberDirector* pikiDirector = PSMGetPikminNumD();
		if (GameStat::getMapPikmins_exclude_Me(-1) < 10 && DeathMgr::mSoundDeathCount > 0) {
			if (pikiDirector) {
				pikiDirector->directOn();
			}

		} else if (pikiDirector) {
			pikiDirector->directOff();
		}

		if (isFlag(VSGS_Unk4)) {
			switch (Screen::gGame2DMgr->check_WinLose()) {
			case 0:
			case 1:
			case 2:
				break;
			case 3:
				GameStat::alivePikis.clear();
				ResultArg arg;
				arg.mEndFlag.clear();
				transit(section, VGS_Result, &arg);
			}
			return;
		}

		if (!gameSystem->paused() && section->mTimeLimit > 0.0f && isFlag(VSGS_Unk3) && !section->mMenuFlags
		    && gameSystem->isFlag(GAMESYS_IsGameWorldActive) && !gameSystem->paused_soft()
		    && !moviePlayer->mDemoState) { // check game is in a state where timer should go down (not paused/menu/CS/etc)

			section->mTimeLimit -= sys->mDeltaTime * 0.5f;
			if (section->mTimeLimit <= 0.0f && !(isFlag(VSGS_Unk4))) {
				gameSystem->resetFlag(GAMESYS_IsGameWorldActive);
				gameSystem->setPause(true, "timeup", 3);
				gameSystem->setMoviePause(true, "timeup");
				setFlag(VSGS_Unk4);

				if (!gameSystem->isMultiplayerMode()) {
					Screen::gGame2DMgr->open_TimeUp1P();
					return;
				}
				Screen::gGame2DMgr->open_TimeUp2P();
				return;
			}
		}
	}

	if (!isFlag(VSGS_Unk1) && section->mHole) {
		switch (Screen::gGame2DMgr->check_CaveMoreMenu()) {
		case 0:
			break;

		case 1:
			gameSystem->resetFlag(GAMESYS_IsGameWorldActive);
			gameSystem->setPause(false, "cmore-yes", 3);
			gameSystem->setMoviePause(false, "cmore-yes");
			section->goNextFloor(section->mHole);
			setFlag(VSGS_Unk1);
			return;

		case 2:
			gameSystem->setPause(false, "cmore-no", 3);
			gameSystem->setMoviePause(false, "cmore-no");
			break;

		case 3:
			gameSystem->resetFlag(GAMESYS_IsGameWorldActive);
			gameSystem->setMoviePause(false, "cmore-zenk");
			break;
		}
	}

	if (!section->mMenuFlags || section->updateCaveMenus()) {
		update_GameChallenge(section);
		if (!_16) {
			checkSMenu(section);
		}

		// check we're in VS Mode and that someone needs to lose
		if (gameSystem->isVersusMode() && !isFlag(VSGS_Unk9) && !isFlag(VSGS_Unk10) && _16 != 1
		    && (getLoseCauses(VSPLAYER_Red) || getLoseCauses(VSPLAYER_Blue))) {

			gameSystem->resetFlag(GAMESYS_IsGameWorldActive);
			setFlag(VSGS_Unk9);
			gameSystem->setPause(true, nullptr, 3);

			int redReason  = -1;
			int blueReason = -1;
			if (isLoseCause(VSPLAYER_Red, VSLOSE_Unk3)) {
				blueReason = 3;

			} else if (isLoseCause(VSPLAYER_Red, VSLOSE_Unk1)) {
				redReason = 1;

			} else if (isLoseCause(VSPLAYER_Red, VSLOSE_Extinction)) {
				redReason = 2;
			}

			if (blueReason == 3) {

			} else if (isLoseCause(VSPLAYER_Blue, VSLOSE_Unk3)) {
				redReason = 3;

			} else if (isLoseCause(VSPLAYER_Blue, VSLOSE_Unk1)) {
				blueReason = 1;

			} else if (isLoseCause(VSPLAYER_Blue, VSLOSE_Extinction)) {
				blueReason = 2;
			}

			kh::Screen::DispWinLoseReason winLoseReason;
			winLoseReason.mOutcomeP1 = redReason;
			winLoseReason.mOutcomeP2 = blueReason;

			P2ASSERTLINE(513, Screen::gGame2DMgr->open_WinLoseReason(winLoseReason));
		}
	}
}

/*
 * --INFO--
 * Address:	80229FF0
 * Size:	000388
 */
void GameState::checkFindKeyDemo(VsGameSection* section)
{
	if (!mHasKeyDemoPlayed) {
		Navi* navi = naviMgr->getActiveNavi();
		if (navi) {
			Iterator<Game::PelletItem::Object> pelletIterator(PelletItem::mgr);
			CI_LOOP(pelletIterator)
			{
				PelletItem::Object* obj = (*pelletIterator);
				if (obj->getConfigIndex() == 12) {
					Vector3f pos = obj->getPosition();

					Sys::Sphere sphere(pos, 100.0f + obj->getBottomRadius());

					if (navi->checkDemoNaviAndPiki(sphere) && sys->getPlayCommonData()->challenge_is_virgin()) {
						MoviePlayArg arg("s16_find_key", nullptr, section->mMovieFinishCallback, 0);
						arg.mDelegateStart = section->mMovieStartCallback;
						arg.mOrigin        = obj->getPosition();

						arg.mAngle = JMath::atanTable_.atan2_(obj->mBaseTrMatrix(0, 2), obj->mBaseTrMatrix(2, 2));

						moviePlayer->mTargetObject = obj;
						moviePlayer->play(arg);

						mHasKeyDemoPlayed = true;
					}
				}
			}
		}
	}
}

/*
 * --INFO--
 * Address:	8022A378
 * Size:	0003E4
 */
void GameState::checkSMenu(VsGameSection* section)
{
	switch (Screen::gGame2DMgr->check_SMenu()) {
	case 1:
		gameSystem->setPause(false, "sm-canc", 3);
		gameSystem->setMoviePause(false, "sm-canc");
	case 0: // this is just cursed
		return;

	case 2:
		JUT_PANICLINE(617, "‚ ‚è‚¦‚È‚¢‚Á‚·\n"); // 'impossible'
		return;

	case 3:
		JUT_PANICLINE(620, "‚È‚¢\n"); // 'no'
		return;

	case 5:
		gameSystem->setMoviePause(false, "sm-quit");
		if (gameSystem->isVersusMode()) {
			section->mVsWinner = -1;
			gameSystem->resetFlag(GAMESYS_IsGameWorldActive);
			TitleArg titleArg;
			titleArg._00 = 1;
			transit(section, VGS_Title, &titleArg);
			return;
		}
		if (moviePlayer->mDemoState == 0 && !isFlag(VSGS_Unk2)) {
			gameSystem->resetFlag(GAMESYS_IsGameWorldActive);
			MoviePlayArg movieArgs("s12_cv_giveup", 0x0, section->mMovieFinishCallback, 0);
			movieArgs.mDelegateStart = section->mMovieStartCallback;
			Onyon* onyon             = ItemOnyon::mgr->mPod;
			JUT_ASSERTLINE(652, onyon, "no pod demo 12");
			movieArgs.mOrigin = onyon->getPosition();
			movieArgs.mAngle  = onyon->getFaceDir();
			for (int i = 0; i < 2; i++) {
				Navi* navi = naviMgr->getAt(i);
				if (navi->isAlive() && navi->isStickTo()) {
					navi->endStick();
				}
			}
			moviePlayer->play(movieArgs);
			return;
		}
		gameSystem->setMoviePause(false, "sm-quit");
		gameSystem->setPause(false, "sm-quit", 3);
		return;
	}

	if (moviePlayer->mDemoState == 0 && !gameSystem->paused_soft()) {
		if (section->mControllerP1->isButtonDown(JUTGamePad::PRESS_START)) {
			og::Screen::DispMemberSMenuAll sMenu;
			int versus = 2;
			if (gameSystem->isVersusMode()) {
				versus = 1;
			}
			sMenu.mOpenMode = versus;
			Screen::gGame2DMgr->setGamePad(section->mControllerP1);
			if (Screen::gGame2DMgr->open_SMenu(sMenu)) {
				gameSystem->setPause(true, "open-sm", 3);
				gameSystem->setMoviePause(true, "open-sm");
			}

		} else if (gameSystem->isMultiplayerMode()) {
			if ((section->mControllerP2->isButtonDown(JUTGamePad::PRESS_START))) {
				og::Screen::DispMemberSMenuAll sMenu;
				int versus = 2;
				if (gameSystem->isVersusMode()) {
					versus = 1;
				}
				sMenu.mOpenMode = versus;
				Screen::gGame2DMgr->setGamePad(section->mControllerP2);
				if (Screen::gGame2DMgr->open_SMenu(sMenu)) {
					gameSystem->setPause(true, "open-sm", 3);
					gameSystem->setMoviePause(true, "open-sm");
				}
			}
		}
	}
}

/*
 * --INFO--
 * Address:	8022A75C
 * Size:	000050
 */
void GameState::pre2dDraw(Graphics& gfx, VsGameSection* section)
{
	if (gameSystem->isVersusMode() && !mFlags.typeView && !moviePlayer->mDemoState) {
		section->mCardMgr->draw(gfx);
	}
}

/*
 * --INFO--
 * Address:	8022A7AC
 * Size:	000034
 */
void GameState::draw(VsGameSection* section, Graphics& gfx)
{
	if (!isFlag(VSGS_Unk16)) {
		section->BaseGameSection::doDraw(gfx);
	}
}

/*
 * --INFO--
 * Address:	8022A7E0
 * Size:	000044
 */
void GameState::cleanup(VsGameSection* section)
{
	gameSystem->resetFlag(GAMESYS_IsPlaying);
	gameSystem->setMoviePause(false, "vsgs_game:clean");
	PSMCancelToPauseOffMainBgm();
}

/*
 * --INFO--
 * Address:	8022A824
 * Size:	000034
 */
void GameState::onBattleFinished(VsGameSection* section, int winnerMaybe, bool check)
{
	if (_16) {
		return;
	}

	setLoseCause(1 - winnerMaybe, VSLOSE_Unk3);

	if (check) {
		_16 = 1;
	}
}

/*
 * --INFO--
 * Address:	8022A858
 * Size:	000010
 */
bool GameState::isCardUsable(VsGameSection* section) { return (u32) !(_16); }

/*
 * --INFO--
 * Address:	8022A868
 * Size:	00014C
 */
void GameState::onRedOrBlueSuckStart(VsGameSection* section, int player, bool isYellow)
{
	if (isYellow) {
		section->mYellowMarbleCounts[player]++;
		if (isYellow && section->mYellowMarbleCounts[player] < 4) {
			return;
		}
	}

	if (_16) {
		return;
	}

	_16 = 1;

	u8 loseReason = VSLOSE_Unk3;
	if (!isYellow) {
		loseReason |= VSLOSE_Marble;
	}

	BitFlag<u8>& loseCauses = mLoseCauses[1 - player];
	setLoseCause(loseCauses, loseReason);

	Onyon* onyon                 = ItemOnyon::mgr->getOnyon(1 - player);
	BaseGameSection* baseSection = gameSystem->mSection;

	MoviePlayArg movieArgs("x19_vs_bedama", nullptr, baseSection->mMovieFinishCallback, 0);
	movieArgs.mPelletName    = const_cast<char*>(VsOtakaraName::cBedamaRed);
	movieArgs.mDelegateStart = baseSection->mMovieStartCallback;
	movieArgs.setTarget(onyon);

	moviePlayer->play(movieArgs);
}

/*
 * --INFO--
 * Address:	8022A9B4
 * Size:	000188
 */
void GameState::checkPikminZero(VsGameSection* section)
{
	if (!gameSystem->isVersusMode() && !isFlag(VSGS_Unk2) && GameStat::getAllPikmins(-1) == 0 && !gameSystem->paused_soft()
	    && gameSystem->isFlag(GAMESYS_IsGameWorldActive)) {

		Navi* activeNavi = naviMgr->getActiveNavi();
		if (!activeNavi) {
			int naviIndex = 1;
			if (!gameSystem->mSection->mPrevNaviIdx) {
				naviIndex = 0;
			}
			activeNavi = naviMgr->getAt(naviIndex);
		}

		setFlag(VSGS_Unk2);

		MoviePlayArg movieArg("s05_pikminzero", nullptr, section->mMovieFinishCallback, 0);
		movieArg.mDelegateStart = section->mMovieStartCallback;
		movieArg.setTarget(activeNavi);
		moviePlayer->play(movieArg);

		Screen::gGame2DMgr->open_GameOver(Screen::Game2DMgr::GOTITLE_PikminZero);
	}
}

/*
 * --INFO--
 * Address:	8022AB3C
 * Size:	000474
 */
void GameState::onMovieStart(VsGameSection* section, MovieConfig* config, u32 p1, u32 p2)
{
	if (config->is("g2F_appear_hole") || config->is("g30_appear_fountain")) {
		Screen::gGame2DMgr->setToumeiBG();
	}

	if (config->is("s0B_cv_coursein")) {
		section->createFallPikminSound();
	}

	Screen::gGame2DMgr->startFadeBG_Floor();
	if (config->is("s03_orimadown")) {
		Screen::Game2DMgr::GameOverTitle gameOverTitle;
		if (p2 == 0) {
			gameOverTitle = Screen::Game2DMgr::GOTITLE_OlimarDown;
			if (!gameSystem->isMultiplayerMode()) {
				section->setPlayerMode(0);
			}
		} else {
			gameOverTitle = Screen::Game2DMgr::GOTITLE_LouieDown;
			if (!gameSystem->isMultiplayerMode()) {
				section->setPlayerMode(1);
			}
		}
		Screen::gGame2DMgr->open_GameOver(gameOverTitle);
	}

	if (config->is("s12_cv_giveup")) {
		Screen::gGame2DMgr->mScreenMgr->reset();
		Iterator<Piki> pikiIterator(pikiMgr);
		CI_LOOP(pikiIterator)
		{
			Piki* piki = *pikiIterator;
			if (piki->isAlive() && !piki->isStickTo()) {
				piki->movie_begin(false);
				piki->endStick();
				piki->mBrain->start(1, nullptr);
			}
		}
	}

	if (config->is("s09_holein")) {
		Vector3f holePos = section->mHole->getPosition();
		section->prepareHoleIn(holePos, true);
		pikiMgr->saveAllPikmins(section->mContainer1);
		for (int i = 0; i < 2; i++) {
			Navi* navi = naviMgr->getAt(i);
			if (navi->isAlive() && navi->isStickTo()) {
				navi->endStick();
			}
		}
		section->mHole = nullptr;
	}

	if (config->is("s0C_cv_escape")) {
		Vector3f fountainPos = section->mFountain->getPosition();
		section->prepareFountainOn(fountainPos);
	}
}

/*
 * --INFO--
 * Address:	8022AFB0
 * Size:	0009D0
 */
void GameState::onMovieDone(VsGameSection* section, MovieConfig* config, u32 p1, u32 p2)
{
	if (gameSystem->isMultiplayerMode()) {
		section->setPlayerMode(2);
	}

	RoomMapMgr* mgr   = static_cast<RoomMapMgr*>(mapMgr);
	int currFloor     = mgr->mSublevel;
	int floorMax      = mgr->mCaveInfo->getFloorMax();
	bool isFinalFloor = (currFloor == floorMax - 1);

	if (gameSystem->isChallengeMode() && Radar::Mgr::getNumOtakaraItems() == 0
	    && (config->is("g2F_appear_hole") || config->is("g30_appear_fountain"))) {

		PSSystem::SceneMgr* sceneMgr = PSSystem::getSceneMgr();
		checkSceneMgr(sceneMgr);
		PSM::Scene_Cave* scene = static_cast<PSM::Scene_Cave*>(sceneMgr->getChildScene());
		checkGameScene(scene);
		if (scene->isCave()) {
			scene->startPollutUpSe();
		}
	}

	if (config->is("x19_vs_bedama") && (isLoseCause(VSPLAYER_Red, VSLOSE_Marble) || isLoseCause(VSPLAYER_Blue, VSLOSE_Marble))) {
		PSSystem::SceneMgr* sceneMgr = PSSystem::getSceneMgr();
		checkSceneMgr(sceneMgr);
		PSM::SceneBase* scene = static_cast<PSM::SceneBase*>(sceneMgr->getChildScene());

		scene = (scene->isGameScene()) ? scene : nullptr;

		scene->mSeqMgr.stopAllSound(15);
	}

	if (config->is("e00_E3_cavestart")) {
		gameSystem->setFlag(GAMESYS_IsPlaying);
		section->setCamController();

		if (isFinalFloor) {
			open_GameChallenge(section, 3);
		} else {
			open_GameChallenge(section, 1);
		}

		gameSystem->setPause(true, "readygo", 6);
		gameSystem->setMoviePause(true, "readygo");
		setFlag(VSGS_Unk8);

	} else if (config->is("s0B_cv_coursein")) {
		Iterator<Piki> pikiIterator(pikiMgr);
		CI_LOOP(pikiIterator)
		{
			Piki* piki       = *pikiIterator;
			Vector3f pikiPos = piki->getPosition();
			pikiPos.y        = mapMgr->getMinY(pikiPos);

			piki->setPosition(pikiPos, false);
			piki->mSimVelocity = Vector3f(0.0f);
			piki->mVelocity    = Vector3f(0.0f);
		}

		Screen::gGame2DMgr->close_Floor();
		setFlag(VSGS_Unk3);
		if (currFloor == 0) {
			if (sys->getPlayCommonData()->challenge_is_virgin_check_only()) {
				if (!gameSystem->isVersusMode()) {
					MoviePlayArg movieArg("e00_E3_cavestart", nullptr, section->mMovieFinishCallback, 0);
					if (gameSystem->isMultiplayerMode()) {
						section->setPlayerMode(0);
					}
					section->setCamController();
					movieArg.mDelegateStart = section->mMovieStartCallback;
					if (ItemOnyon::mgr->mPod) {
						Onyon* pod       = ItemOnyon::mgr->mPod;
						movieArg.mAngle  = pod->getFaceDir();
						movieArg.mOrigin = pod->getPosition();
					}

					movieArg.mOrigin.y = mapMgr->getMinY(movieArg.mOrigin);
					moviePlayer->play(movieArg);
					return;
				}
			}
		}

		gameSystem->setFlag(GAMESYS_IsPlaying);
		section->setCamController();
		gameSystem->setFlag(GAMESYS_IsPlaying);
		if (currFloor == 0) {
			if (isFinalFloor) {
				open_GameChallenge(section, 3);
			} else {
				open_GameChallenge(section, 1);
			}

			gameSystem->setPause(true, "readygo2", 6);
			gameSystem->setMoviePause(true, "readygo2");
			setFlag(VSGS_Unk8);

		} else if (isFinalFloor) {
			open_GameChallenge(section, 2);

		} else {
			open_GameChallenge(section, 0);
			PSSystem::SceneMgr* sceneMgr = PSSystem::getSceneMgr();
			sceneMgr->checkScene();

			sceneMgr->mScenes->mChild->startMainSeq();
		}

	} else if (config->is("s09_holein")) {
		PSMCancelToPauseOffMainBgm();
		section->mCurrentFloor++;
		LoadArg arg;
		arg._04 = 0;
		arg._08 = true;
		transit(section, VGS_Load, &arg);

	} else if (config->is("s12_cv_giveup")) {
		PSMCancelToPauseOffMainBgm();
		GameStat::alivePikis.clear();
		moviePlayer->clearSuspendedDemo();
		TitleArg arg;
		arg._00 = 1;
		transit(section, VGS_Title, &arg);

	} else if (config->is("s03_orimadown")) {
		naviMgr->informOrimaDead(p2);
		Screen::gGame2DMgr->close_GameOver();
		if (gameSystem->isVersusMode()) {
			JUT_PANICLINE(1279, "cannot happen !\n");

		} else {
			GameStat::alivePikis.clear();
			PSMCancelToPauseOffMainBgm();
			ResultArg arg;
			arg.mEndFlag.clear();
			transit(section, VGS_Result, &arg);
		}

	} else if (config->is("s05_pikminzero")) {
		PSMCancelToPauseOffMainBgm();
		Screen::gGame2DMgr->close_GameOver();
		ResultArg arg;
		arg.mEndFlag.clear();
		transit(section, VGS_Result, &arg);

	} else if (config->is("s0C_cv_escape")) {
		PSMCancelToPauseOffMainBgm();
		ResultArg arg;
		arg.mEndFlag.clear();
		arg.mEndFlag.typeView |= 0x1;
		transit(section, VGS_Result, &arg);
	}
}

/*
 * --INFO--
 * Address:	8022B980
 * Size:	0000E4
 */
void GameState::onNextFloor(VsGameSection* section, ItemHole::Item* hole)
{
	MoviePlayArg movieArg("s09_holein", nullptr, section->mMovieFinishCallback, 0);

	movieArg.setTarget(hole);
	movieArg.mDelegateStart = section->mMovieStartCallback;
	movieArg.mDelegateStart = section->mMovieStartCallback;

	moviePlayer->mTargetObject = hole;

	moviePlayer->play(movieArg);
}

/*
 * --INFO--
 * Address:	8022BA64
 * Size:	00019C
 */
void GameState::onOrimaDown(VsGameSection* section, int naviIdx)
{
	P2ASSERTBOUNDSLINE(1341, 0, naviIdx, 2);

	if (gameSystem->isVersusMode()) {
		if (!_16) {
			setLoseCause(naviIdx, VSLOSE_Unk1);
		}
		return;
	}

	MoviePlayArg movieArg("s03_orimadown", nullptr, section->mMovieFinishCallback, naviIdx);
	movieArg.mDelegateStart = section->mMovieStartCallback;

	Navi* deadNavi = naviMgr->getAt(naviIdx);
	movieArg.setTarget(deadNavi);
	moviePlayer->mTargetNavi = deadNavi;
	if (naviIdx == 0) {
		moviePlayer->mActingCamera = section->mOlimarCamera;
	} else {
		moviePlayer->mActingCamera = section->mLouieCamera;
	}

	moviePlayer->play(movieArg);
}

/*
 * --INFO--
 * Address:	8022BC00
 * Size:	00033C
 */
void GameState::open_GameChallenge(VsGameSection* section, int in)
{
	if (!gameSystem->isMultiplayerMode()) {
		og::Screen::DispMemberChallenge1P disp;
		disp.mDataGame.mFloorNum = section->getCurrFloor();
		disp.mFloorExtendTimer   = mFloorExtendTimer;
		Screen::gGame2DMgr->open_GameChallenge1P(disp, in);

	} else if (gameSystem->isVersusMode()) {
		og::Screen::DispMemberVs disp;
		Screen::gGame2DMgr->open_GameVs(disp, in);

	} else {
		og::Screen::DispMemberChallenge2P disp;
		disp.mDataGame.mFloorNum = section->getCurrFloor();
		disp.mFloorExtendTimer   = mFloorExtendTimer;
		Screen::gGame2DMgr->open_GameChallenge2P(disp, in);
	}
}

/*
 * --INFO--
 * Address:	8022BF3C
 * Size:	0007D0
 */
void GameState::update_GameChallenge(VsGameSection* section)
{
	if (!gameSystem->isMultiplayerMode()) {
		og::Screen::DispMemberChallenge1P disp;

		disp.mDataGame.mFloorNum = section->getCurrFloor();
		disp.mDeadPikiCount      = section->mDeadPikiCount;
		disp.mPokoCount          = section->mPokoCount;
		disp.mFloorExtendTimer   = mFloorExtendTimer;
		disp.mTimeLimit          = section->mTimeLimit;

		Navi* olimar                    = naviMgr->getAt(0);
		disp.mOlimarData.mFollowPikis   = GameStat::formationPikis.mCounter[0];
		disp.mOlimarData.mNextThrowPiki = olimar->ogGetNextThrowPiki();
		disp.mOlimarData.mDope1Count    = playData->getDopeCount(1);
		disp.mOlimarData.mDope0Count    = playData->getDopeCount(0);
		disp.mOlimarData.mNaviLifeRatio = olimar->getLifeRatio();

		Navi* louie                    = naviMgr->getAt(1);
		disp.mLouieData.mFollowPikis   = GameStat::formationPikis.mCounter[1];
		disp.mLouieData.mNextThrowPiki = louie->ogGetNextThrowPiki();
		disp.mLouieData.mDope1Count    = playData->getDopeCount(1);
		disp.mLouieData.mDope0Count    = playData->getDopeCount(0);
		disp.mLouieData.mNaviLifeRatio = louie->getLifeRatio();

		Navi* activeNavi = naviMgr->getActiveNavi();
		int check        = 2;
		if (activeNavi) {
			check = activeNavi->mNaviIndex;
		}

		if (check == 0) {
			disp.mOlimarData.mActiveNaviID = 1;
			disp.mLouieData.mActiveNaviID  = 0;

		} else if (check == 1) {
			disp.mOlimarData.mActiveNaviID = 0;
			disp.mLouieData.mActiveNaviID  = 1;

		} else if (section->mPrevNaviIdx == 0) {
			disp.mOlimarData.mActiveNaviID = 0;
			disp.mLouieData.mActiveNaviID  = 1;

		} else {
			disp.mOlimarData.mActiveNaviID = 1;
			disp.mLouieData.mActiveNaviID  = 0;
		}

		disp.mDataGame.mMapPikminCount = GameStat::getMapPikmins(-1);
		Screen::gGame2DMgr->setDispMember(&disp);
		return;
	}

	if (gameSystem->isVersusMode()) {
		if (Screen::gGame2DMgr->check_VsStatus() == 2 && _16 == 1 && !(moviePlayer->isFlag(MVP_IsActive))) {
			_16 = 2;
		} else if (_16 == 1) {
			Screen::gGame2DMgr->check_VsStatus(); // probably in a leftover && check
		}

		og::Screen::DispMemberVs disp;

		Navi* olimar                    = naviMgr->getAt(0);
		disp.mOlimarData.mFollowPikis   = GameStat::formationPikis.mCounter[0];
		disp.mOlimarData.mNextThrowPiki = olimar->ogGetNextThrowPiki();
		disp.mOlimarData.mDope1Count    = olimar->getDopeCount(1);
		disp.mOlimarData.mDope0Count    = olimar->getDopeCount(0);
		disp.mOlimarData.mNaviLifeRatio = olimar->getLifeRatio();

		Navi* louie                    = naviMgr->getAt(1);
		disp.mLouieData.mFollowPikis   = GameStat::formationPikis.mCounter[1];
		disp.mLouieData.mNextThrowPiki = louie->ogGetNextThrowPiki();
		disp.mLouieData.mDope1Count    = louie->getDopeCount(1);
		disp.mLouieData.mDope0Count    = louie->getDopeCount(0);
		disp.mLouieData.mNaviLifeRatio = louie->getLifeRatio();

		disp.mRedPikminCount  = GameStat::getMapPikmins(1);
		disp.mBluePikminCount = GameStat::getMapPikmins(0);

		disp.mFlags[2] = section->mGhostIconTimers[0] > 0.0f;
		disp.mFlags[3] = section->mGhostIconTimers[1] > 0.0f;

		disp.mGhostIconTimerP1 = section->mGhostIconTimers[0];
		disp.mGhostIconTimerP2 = section->mGhostIconTimers[1];

		int marbleCountP1 = section->mMarbleCountP1;
		int marbleCountP2 = section->mMarbleCountP2;

		if (section->mMarbleCountP1 == 4 && moviePlayer->isFlag(MVP_IsActive)) {
			marbleCountP1 = section->mMarbleCountP1 - 1;
		}

		if (section->mMarbleCountP2 == 4 && moviePlayer->isFlag(MVP_IsActive)) {
			marbleCountP2 = section->mMarbleCountP2 - 1;
		}

		disp.mMarbleCountP1 = marbleCountP1;
		disp.mMarbleCountP2 = marbleCountP2;

		bool moviePlayerActive = moviePlayer->isFlag(MVP_IsActive);

		bool blueMarble, redMarble;
		getMarbleLoss(redMarble, blueMarble);
		disp.setMarbleConditions(redMarble, blueMarble);

		Screen::gGame2DMgr->setDispMember(&disp);

		return;
	}

	og::Screen::DispMemberChallenge2P disp;

	disp.mDataGame.mFloorNum = section->getCurrFloor();

	disp.mPokos            = section->mPokoCount;
	disp.mFloorExtendTimer = mFloorExtendTimer;
	disp.mTimeLimit        = section->mTimeLimit;
	disp.mDeadPiki         = section->mDeadPikiCount;

	Navi* olimar                    = naviMgr->getAt(0);
	disp.mOlimarData.mFollowPikis   = GameStat::formationPikis.mCounter[0];
	disp.mOlimarData.mNextThrowPiki = olimar->ogGetNextThrowPiki();
	disp.mOlimarData.mDope1Count    = playData->getDopeCount(1);
	disp.mOlimarData.mDope0Count    = playData->getDopeCount(0);
	disp.mOlimarData.mNaviLifeRatio = olimar->getLifeRatio();

	Navi* louie                    = naviMgr->getAt(1);
	disp.mLouieData.mFollowPikis   = GameStat::formationPikis.mCounter[1];
	disp.mLouieData.mNextThrowPiki = louie->ogGetNextThrowPiki();
	disp.mLouieData.mDope1Count    = playData->getDopeCount(1);
	disp.mLouieData.mDope0Count    = playData->getDopeCount(0);
	disp.mLouieData.mNaviLifeRatio = louie->getLifeRatio();
	disp.mDataGame.mMapPikminCount = GameStat::getMapPikmins(-1);
	Screen::gGame2DMgr->setDispMember(&disp);
}

/*
 * --INFO--
 * Address:	8022C70C
 * Size:	000004
 */
void GameState::drawStatus(Graphics&, VsGameSection* section) { }

} // namespace VsGame
} // namespace Game
