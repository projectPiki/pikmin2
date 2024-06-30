#include "Game/Entities/BlackMan.h"
#include "Game/GameSystem.h"
#include "Game/Entities/ItemBigFountain.h"
#include "Game/Entities/ItemHole.h"
#include "Game/MapMgr.h"
#include "Game/MoviePlayer.h"
#include "Game/Navi.h"
#include "Game/mapParts.h"
#include "Game/SingleGame.h"
#include "PSM/Global.h"
#include "Screen/Game2DMgr.h"
#include "og/Screen/DispMember.h"
#include "Game/Entities/ItemOnyon.h"
#include "Game/PikiMgr.h"
#include "PikiAI.h"
#include "Game/Cave/RandMapMgr.h"
#include "Game/DeathMgr.h"
#include "Radar.h"
#include "TParticle2dMgr.h"
#include "utilityU.h"
#include "Game/PikiState.h"
#include "Dolphin/rand.h"
#include "Game/Entities/PelletOtakara.h"
#include "Game/Entities/PelletItem.h"
#include "PSSystem/PSGame.h"
#include "PSM/Scene.h"
#include "PSSystem/PSMainSide_Scene.h"
#include "Game/Entities/ItemPikihead.h"
#include "nans.h"

static const u32 padding[]    = { 0, 0, 0 };
static const char className[] = "SingleGS_Game";

namespace Game {
namespace SingleGame {

/**
 * @note Address: 0x80217760
 * @note Size: 0x304
 */
void CaveState::init(SingleGameSection* game, StateArg* arg)
{
	deathMgr->mSoundDeathCount = 0;
	moviePlayer->reset();
	mLosePellets = false;
	mDrawSave    = false;
	game->setupCaveGames();
	game->mIsExitingMap = false;
	sys->heapStatusDump(true);
	gameSystem->mTimeMgr->setFlag(TIMEFLAG_Stopped);
	gameSystem->setFlag(GAMESYS_IsGameWorldActive);
	static_cast<newScreen::Mgr*>(Screen::gGame2DMgr->mScreenMgr)->mInCave = true;
	gameSystem->mIsInCave                                                 = true;
	game->setFixNearFar(true, 1.0f, 12800.0f);

	// I assume this is meant to check if the 'active' navi is dead and if so, swap to the other navi
	// THIS CANNOT BE WHAT THE DEVS WROTE
	int naviID     = playData->mCaveSaveData.mActiveNaviID;
	u8* deadNaviID = &playData->mDeadNaviID;
	int shiftedID  = naviID >> 3;
	if (1 << (naviID - (shiftedID << 3)) & *(deadNaviID - shiftedID)) {
		naviID = 1 - naviID;
	}

	game->setPlayerMode(naviID);
	game->setCamController();

	// if olimar and louie are both alive, set louie to be in olimars party
	Navi* olimar = naviMgr->getAt(NAVIID_Olimar);
	Navi* louie  = naviMgr->getAt(NAVIID_Louie);
	if (olimar->isAlive() && louie->isAlive()) {
		InteractFue act(olimar, false, true); // don't combine parties, is new to party
		louie->stimulate(act);
	}

	MoviePlayArg moviearg("s0B_cv_coursein", nullptr, game->mMovieFinishCallback, 0);
	moviearg.mDelegateStart = game->mMovieStartCallback;
	Vector3f& pos           = moviearg.mOrigin;

	mapMgr->getStartPosition(pos, false);

	if (ItemOnyon::mgr->mPod) {
		moviearg.mAngle = ItemOnyon::mgr->mPod->getFaceDir();
	}
	mapMgr->getMinY(pos);
	moviearg.mOrigin.y = mapMgr->getMinY(pos);
	moviePlayer->play(moviearg);

	Screen::gGame2DMgr->startCount_Floor();
	game->clearCaveMenus();
	mFadeout = false;
	gameSystem->resetFlag(GAMESYS_IsPlaying);

	game->mTreasureRadarActive = false;
	Vector3f treasurePos;
	f32 treasureDist;
	if (!Radar::mgr->calcNearestTreasure(Vector3f::zero, FLOAT_DIST_MAX, treasurePos, treasureDist)) {
		game->mNeedTreasureCalc = true;
	} else {
		game->mNeedTreasureCalc = false;
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x174
 */
void CaveState::gameStart(SingleGameSection* game)
{
	gameSystem->setFlag(GAMESYS_IsPlaying);

	PSGame::PikSceneMgr* mgr = static_cast<PSGame::PikSceneMgr*>(PSSystem::getSceneMgr());
	mgr->doStartMainSeq();
	if (Radar::mgr && !Radar::Mgr::getNumOtakaraItems()) {
		PSGame::PikSceneMgr* mgr = static_cast<PSGame::PikSceneMgr*>(PSSystem::getSceneMgr());
		PSSystem::validateSceneMgr(mgr);
		PSM::Scene_Cave* scene = static_cast<PSM::Scene_Cave*>(mgr->getChildScene());
		PSSystem::checkGameScene(scene);
		scene->stopPollutionSe();
	}
}

/**
 * @note Address: 0x80217A64
 * @note Size: 0xC
 */
void CaveState::on_section_fadeout(SingleGameSection*) { mFadeout = true; }

/**
 * @note Address: 0x80217A70
 * @note Size: 0x2D4
 */
void CaveState::exec(SingleGameSection* game)
{
	if (mFadeout)
		return;

	// the saving between cave floors is part of this state
	if (mDrawSave) {
		particle2dMgr->update();
		Screen::gGame2DMgr->update();
		if ((u8)Screen::gGame2DMgr->check_Save()) {
			// MapEnter type isnt used when loading into caves
			LoadArg arg(MapEnter_CaveGeyser, false, false, game->mInCave);
			transit(game, SGS_Load, &arg);
			return;
		}
		return;
	}

	game->BaseGameSection::doUpdate();

	// check filling in radar map rooms
	if (Cave::randMapMgr) {
		Navi* navi = naviMgr->getActiveNavi();
		if (navi) {
			Vector3f naviPos = navi->getPosition();
			Cave::randMapMgr->radarMapPartsOpen(naviPos);
		}
	}

	if (game->mCurrentState->mId != mId) {
		return;
	}

	game->updateCaveScreen();

	// check pikmin extinction cutscene
	if (!(moviePlayer->isFlag(MVP_IsActive))) {
		if (GameStat::getMapPikmins(AllPikminCalcs) == 0) {
			gameSystem->resetFlag(GAMESYS_IsGameWorldActive);
			MoviePlayArg moviearg("s05_pikminzero", nullptr, game->mMovieFinishCallback, 0);
			Navi* navi = naviMgr->getActiveNavi();
			if (!navi) {
				int id = NAVIID_Louie;
				if (gameSystem->mSection->mPrevNaviIdx == NAVIID_Olimar) {
					id = NAVIID_Olimar;
				}
				navi = naviMgr->getAt(id);
			}
			moviearg.mDelegateStart = game->mMovieStartCallback;
			moviearg.mOrigin        = navi->getPosition();
			moviearg.mAngle         = navi->getFaceDir();
			moviePlayer->play(moviearg);
			return;
		}
	}

	if (!game->mOpenMenuFlags || game->updateCaveMenus()) {
		check_SMenu(game);
		// check muting parts of music when lots of pikmin die (does this actually happen in caves?)
		PSM::PikminNumberDirector* psm = PSMGetPikminNumD();
		if (GameStat::getMapPikmins_exclude_Me(AllPikminCalcs) < 10 && deathMgr->mSoundDeathCount > 0) {
			if (psm) {
				psm->directOn();
			}
		} else {
			if (psm) {
				psm->directOff();
			}
		}
	}
}

/**
 * @note Address: 0x80217D44
 * @note Size: 0x98
 */
void CaveState::draw(SingleGameSection* game, Graphics& gfx)
{
	if (!mFadeout) {
		if (mDrawSave) {
			game->draw_Ogawa2D(gfx);
		} else {
			if (Cave::randMapMgr) {
				Cave::randMapMgr->captureRadarMap(gfx);
			}
			game->BaseGameSection::doDraw(gfx);
			game->drawCaveScreen();
			game->test_draw_treasure_detector();
		}
	}
}

/**
 * @note Address: 0x80217DDC
 * @note Size: 0x48C
 */
void CaveState::check_SMenu(SingleGameSection* game)
{
	Screen::gGame2DMgr->setGamePad(game->mControllerP1);
	int state = Screen::gGame2DMgr->check_SMenu();
	switch (state) {
	case Screen::Game2DMgr::CHECK2D_SMenu_Cancel: // unpause and resume gameplay
		gameSystem->setPause(false, "sm-canc", 3);
		gameSystem->setMoviePause(false, "sm-canc");
		return;
	case Screen::Game2DMgr::CHECK2D_SMenu_EscapeCave:
		gameSystem->resetFlag(GAMESYS_IsGameWorldActive);
		gameSystem->setMoviePause(false, "sm-giveup");
		if (moviePlayer->mDemoState != DEMOSTATE_Inactive)
			return;
		MoviePlayArg arg("s12_cv_giveup", nullptr, game->mMovieFinishCallback, 0);
		arg.mDelegateStart = game->mMovieStartCallback;
		Onyon* onyon       = ItemOnyon::mgr->mPod;
		JUT_ASSERTLINE(792, onyon, "no pod demo 12");
		arg.mOrigin = onyon->getPosition();
		arg.mAngle  = onyon->getFaceDir();
		moviePlayer->play(arg);

		for (int i = 0; i < 2; i++) {
			Navi* navi = naviMgr->getAt(i);
			if (navi->isAlive() && navi->isStickTo()) {
				navi->endStick();
			}
		}

		Iterator<Piki> it(pikiMgr);
		CI_LOOP(it)
		{
			Piki* piki = *it;
			if (piki->isAlive()) {
				piki->endStick();
				piki->mBrain->start(PikiAI::ACT_Free, nullptr);
			}
		}
		return;
	case Screen::Game2DMgr::CHECK2D_SMenu_Error:
		// Conditions to open pause menu
		if (!(gameSystem->isFlag(GAMESYS_DisablePause)) && moviePlayer->mDemoState == DEMOSTATE_Inactive && !gameSystem->paused()
		    && game->mControllerP1->getButtonDown() & Controller::PRESS_START) {
			og::Screen::DispMemberSMenuAll disp;
			game->setDispMemberSMenu(disp);
			if (!Screen::gGame2DMgr->open_SMenu(disp)) {
				return;
			}
			gameSystem->setPause(true, "open-sm", 3);
			gameSystem->setMoviePause(true, "open-sm");
		}
		break;
	case Screen::Game2DMgr::CHECK2D_SMenu_Opened:
		break;
	default:
		JUT_PANICLINE(854, "Illegal return value %d.", Screen::gGame2DMgr->check_SMenu());
	}
}

/**
 * @note Address: 0x80218268
 * @note Size: 0x68
 */
void CaveState::cleanup(SingleGameSection* game)
{
	gameSystem->resetFlag(GAMESYS_IsPlaying);
	gameSystem->setMoviePause(false, "cavestate:cleanup");
	game->setDraw2DCreature(nullptr);
	if (game->mTheExpHeap) {
		PSMCancelToPauseOffMainBgm();
	}
}

/**
 * @note Address: 0x802182D0
 * @note Size: 0xD4
 */
void CaveState::onOrimaDown(SingleGameSection* game, int naviID)
{
	MoviePlayArg arg("s03_orimadown", nullptr, game->mMovieFinishCallback, naviID);
	arg.mDelegateStart = game->mMovieStartCallback;

	moviePlayer->mTargetNavi = naviMgr->getAt(naviID);
	if (naviID == NAVIID_Olimar) {
		moviePlayer->mActingCamera = game->mOlimarCamera;
	} else {
		moviePlayer->mActingCamera = game->mLouieCamera;
	}
	moviePlayer->play(arg);
}

/**
 * @note Address: 0x802183A4
 * @note Size: 0x104
 */
void CaveState::onFountainReturn(SingleGameSection* game, ItemBigFountain::Item* fountain)
{
	gameSystem->resetFlag(GAMESYS_IsGameWorldActive);
	game->loadMainMapSituation();

	MoviePlayArg arg("s0C_cv_escape", nullptr, game->mMovieFinishCallback, 0);
	arg.mOrigin        = fountain->getPosition();
	arg.mAngle         = fountain->getFaceDir();
	arg.mDelegateStart = game->mMovieStartCallback;

	moviePlayer->mTargetObject = fountain;
	fountain->movie_begin(false);
	moviePlayer->play(arg);
}

/**
 * @note Address: 0x802184A8
 * @note Size: 0x144
 */
void CaveState::onNextFloor(SingleGameSection* game, ItemHole::Item* hole)
{
	BlackMan::Obj* waterwraith = ((RoomMapMgr*)mapMgr)->mWraith;
	if (waterwraith) {
		if (waterwraith->isAlive()) {
			playData->mCaveSaveData.mWaterwraithTimer = waterwraith->getTimer();
		} else {
			playData->mCaveSaveData.mIsWaterwraithAlive = false;
		}
	}
	gameSystem->resetFlag(GAMESYS_IsGameWorldActive);

	MoviePlayArg arg("s09_holein", nullptr, game->mMovieFinishCallback, 0);

	arg.mOrigin                = hole->getPosition();
	arg.mAngle                 = hole->getFaceDir();
	arg.mDelegateStart         = game->mMovieStartCallback;
	moviePlayer->mTargetObject = hole;
	moviePlayer->play(arg);
}

/**
 * @note Address: 0x802185EC
 * @note Size: 0x5F0
 */
void CaveState::onMovieCommand(SingleGameSection* game, int command)
{
	switch (command) {
	case 0:
		if (mLosePellets) {
			return;
		}

		if (moviePlayer->isPlaying("s03_orimadown") && !naviMgr->mDeadNavis) {
			return;
		}

		if (moviePlayer->isPlaying("s03_orimadown")) {
			Iterator<Piki> it(pikiMgr);
			CI_LOOP(it)
			{
				Piki* piki = *it;
				if (piki->isAlive()) {
					piki->mBrain->start(PikiAI::ACT_Free, nullptr);
					piki->movie_begin(false);
					PanicStateArg arg;
					arg.mPanicType = 3;
					piki->mFsm->transit(piki, PIKISTATE_Panic, &arg);
				}
			}
		}

		game->clearCaveOtakaraEarningsAndDrops();
		int lost     = 0;
		mLosePellets = true;

		PelletCropMemory* mem = playData->getCaveCropMemory();

		KindCounter& counter = mem->mOtakara;
		for (int i = 0; i < counter.getNumKinds(); i++) {
			if (counter(i)) {
				lost += counter(i);
			}
		}
		KindCounter& counter2 = mem->mItem;
		for (int i = 0; i < counter2.getNumKinds(); i++) {
			if (counter2(i)) {
				lost += counter2(i);
			}
		}

		f32 zero = 0.0f;
		f32 calc = randFloat() * zero + 1.0f;
		if (calc < 0.0f) {
			calc = 0.0f;
		} else if (calc > 1.0f) {
			calc = 1.0f;
		}

		game->mDoTrackCarcass = true;
		calc                  = (f32)lost * calc;
		BasePelletMgr* pelmgr;

		if (calc > 0.0f) {
			pelmgr               = PelletOtakara::mgr;
			KindCounter& counter = mem->mOtakara;
			for (int i = 0; i < counter.getNumKinds(); i++) {
				int j = 0;
				for (int k = 0; k < counter(i); k++) {
					pelmgr->getPelletConfig(i);
					if (randFloat() <= calc / (f32)lost) {
						pelmgr->getPelletConfig(i);
						playData->losePellet(pelmgr, i);
						(game->mOtakaraCounter(i)) += 1;
						j++;
						calc -= 1.0f;
					}
					lost--;
				}
				counter(i) -= j;
			}

			pelmgr                = PelletItem::mgr;
			KindCounter& counter3 = mem->mItem;
			for (int i = 0; i < counter3.getNumKinds(); i++) {
				int j = 0;
				for (int k = 0; k < counter3(i); k++) {
					pelmgr->getPelletConfig(i);
					if (randFloat() <= calc / (f32)lost) {
						pelmgr->getPelletConfig(i);
						(game->mItemCounter(i)) += 1;
						playData->losePellet(pelmgr, i);
						j++;
						calc -= 1.0f;
					}
					lost--;
				}
				(counter3(i)) -= j;
			}
		}
		break;
	}
}

/**
 * @note Address: 0x80218BDC
 * @note Size: 0x490
 */
void CaveState::onMovieStart(SingleGameSection* game, MovieConfig* config, u32, u32 naviID)
{
	if (config->is("s0B_cv_coursein")) {
		game->createFallPikminSound();
	}
	Screen::gGame2DMgr->startFadeBG_Floor();
	if (config->is("s05_pikminzero")) {
		Screen::gGame2DMgr->open_GameOver(Screen::Game2DMgr::GOTITLE_PikminZero);
	}

	if (config->is("s12_cv_giveup")) {
		Screen::gGame2DMgr->mScreenMgr->reset();

		Iterator<Piki> it(pikiMgr);
		CI_LOOP(it)
		{
			Piki* piki = *it;
			if (piki->isAlive() && !piki->isStickTo() && piki->getKind() == Bulbmin) {
				piki->movie_begin(false);
			}
		}
	}

	if (config->is("s03_orimadown")) {
		Screen::Game2DMgr::GameOverTitle naviType;
		if (naviID == 0) {
			naviType = Screen::Game2DMgr::GOTITLE_OlimarDown;
			game->setPlayerMode(NAVIID_Olimar);
		} else {
			naviType = (playData->mStoryFlags & STORY_DebtPaid) ? Screen::Game2DMgr::GOTITLE_PresidentDown
			                                                    : Screen::Game2DMgr::GOTITLE_LouieDown;
			game->setPlayerMode(NAVIID_Louie);
		}
		Screen::gGame2DMgr->open_GameOver(naviType);
	}

	if (config->is("s09_holein")) {
		gameSystem->resetFlag(GAMESYS_IsGameWorldActive);
		playData->setCurrentCaveFloor(game->getCurrFloor() + 1);

		int id;
		Navi* navi = naviMgr->getActiveNavi();
		if (navi) {
			id = navi->mNaviIndex;
		} else {
			id = 0;
		}
		playData->mCaveSaveData.mActiveNaviID = id;

		if (!navi) {
			for (int i = 25; i > 0; i--) { }
		}

		for (int i = 0; i < 2; i++) {
			Navi* navi = naviMgr->getAt(i);
			if (navi->isAlive() && navi->isStickTo()) {
				navi->endStick();
			}
		}

		Vector3f holepos = game->mHole->getPosition();
		game->prepareHoleIn(holepos, true);
		game->saveCaveMore();
	}

	if (config->is("s0C_cv_escape")) {
		gameSystem->resetFlag(GAMESYS_IsGameWorldActive);
		Vector3f geyserpos = game->mFountain->getPosition();
		game->prepareFountainOn(geyserpos);
	}
}

/**
 * @note Address: 0x8021906C
 * @note Size: 0xEB4
 */
void CaveState::onMovieDone(Game::SingleGameSection* game, Game::MovieConfig* config, u32, u32 naviID)
{
	if (config->is("s0C_cv_escape")) {
		PSMCancelToPauseOffMainBgm();
		moviePlayer->clearSuspendedDemo();
		pikiMgr->caveSaveAllPikmins(true, true);
		CaveResultArg arg;
		arg.mGameState = MapEnter_CaveGeyser;
		transit(game, SGS_CaveResult, &arg);
		return;
	} else if (config->is("s09_holein")) {
		moviePlayer->clearSuspendedDemo();
		og::Screen::DispMemberSave disp;
		disp.mDoSound = true;
		PSMCancelToPauseOffMainBgm();
		Screen::gGame2DMgr->open_Save(disp);
		mDrawSave = true;
		return;
	} else if (config->is("g07_cv_gamestart")) {
		og::Screen::DispMemberCave disp;
		RoomMapMgr* mgr    = static_cast<RoomMapMgr*>(mapMgr);
		int cFloor         = mgr->mSublevel;
		int maxFloor       = mgr->mCaveInfo->getFloorMax() - 1;
		bool isFinal       = (cFloor == maxFloor);
		disp.mIsFinalFloor = isFinal;

		if (isFinal) {
			Screen::gGame2DMgr->open_GameCave(disp, 2);
			return;
		}

		Screen::gGame2DMgr->open_GameCave(disp, 0);
		gameStart(game);
		return;
	} else if (config->is("s0B_cv_coursein")) {

		Iterator<Piki> it(pikiMgr);
		CI_LOOP(it)
		{
			Piki* piki    = *it;
			Vector3f temp = piki->getPosition();
			temp.y        = mapMgr->getMinY(temp);
			piki->setPosition(temp, false);
			piki->mVelocity       = 0.0f;
			piki->mTargetVelocity = 0.0f;
		}

		if (!playData->isDemoFlag(DEMO_First_Cave_Enter)) {
			playData->setDemoFlag(DEMO_First_Cave_Enter);
			MoviePlayArg arg("g07_cv_gamestart", nullptr, game->mMovieFinishCallback, 0);
			Screen::gGame2DMgr->close_Floor();
			if (ItemOnyon::mgr->mPod) {
				arg.mAngle = ItemOnyon::mgr->mPod->getFaceDir();
			}
			mapMgr->getStartPosition(arg.mOrigin, 0);
			arg.mOrigin.y = mapMgr->getMinY(arg.mOrigin);
			moviePlayer->play(arg);
		} else {
			Screen::gGame2DMgr->close_Floor();
			og::Screen::DispMemberCave disp;
			RoomMapMgr* mgr    = static_cast<RoomMapMgr*>(mapMgr);
			int cFloor         = mgr->mSublevel;
			int maxFloor       = mgr->mCaveInfo->getFloorMax() - 1;
			bool isFinal       = (cFloor == maxFloor);
			disp.mIsFinalFloor = isFinal;

			if (isFinal) {
				Screen::gGame2DMgr->open_GameCave(disp, 2);
				return;
			}

			Screen::gGame2DMgr->open_GameCave(disp, 0);
			gameStart(game);
		}
		return;
	} else if (config->is("s03_orimadown")) {
		Screen::gGame2DMgr->close_GameOver();
		naviMgr->getAt(naviID)->setDeadLaydown();
		if (naviMgr->mDeadNavis != 2) {
			if ((int)naviID == 0) {
				gameSystem->mSection->setPlayerMode(NAVIID_Louie);
			} else {
				gameSystem->mSection->setPlayerMode(NAVIID_Olimar);
			}
		} else {
			Piki* pikilist[MAX_PIKI_COUNT];
			int pikis = 0;
			Iterator<Piki> it(pikiMgr);
			CI_LOOP(it)
			{
				Piki* piki = *it;
				if (piki->isAlive() && piki->getKind() < Bulbmin) {
					pikilist[pikis++] = piki;
				}
			}

			for (int i = 0; i < pikis; i++) {
				if (pikilist[i]->isPikmin()) {
					deathMgr->inc(DeathCounter::COD_Battle);
					deathMgr->inc(DeathCounter::COD_All);
				}
				PikiKillArg killarg(CKILL_DontCountAsDeath);
				pikilist[i]->kill(&killarg);
			}
			gameSystem->resetFlag(GAMESYS_IsGameWorldActive);
			CaveResultArg statearg;
			statearg.mGameState = MapEnter_CaveNavisDown;
			transit(game, SGS_CaveResult, &statearg);
		}
		return;
	} else if (config->is("s05_pikminzero")) {
		gameSystem->resetFlag(GAMESYS_IsGameWorldActive);
		Screen::gGame2DMgr->close_GameOver();
		CaveResultArg statearg;
		statearg.mGameState = MapEnter_CaveExtinction;
		transit(game, SGS_CaveResult, &statearg);
	} else if (config->is("s12_cv_giveup")) {
		moviePlayer->clearSuspendedDemo();
		gameSystem->resetFlag(GAMESYS_IsGameWorldActive);

		Iterator<ItemPikihead::Item> it(ItemPikihead::mgr);
		int pikis = 0;
		CI_LOOP(it)
		{
			ItemPikihead::Item* head = *it;
			if (head->isAlive()) {
				deathMgr->inc(DeathCounter::COD_Battle);
				deathMgr->inc(DeathCounter::COD_All);
			}
		}
		pikiMgr->caveSaveAllPikmins(true, true);
		CaveResultArg statearg;
		statearg.mGameState = MapEnter_CaveGiveUp;
		transit(game, SGS_CaveResult, &statearg);
	}
}

} // namespace SingleGame
} // namespace Game
