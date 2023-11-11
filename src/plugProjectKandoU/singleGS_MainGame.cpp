#include "Game/DeathMgr.h"
#include "Game/Entities/ItemOnyon.h"
#include "Game/Entities/ItemDownFloor.h"
#include "Game/Entities/ItemPikihead.h"
#include "Game/Entities/ItemCave.h"
#include "Game/GameSystem.h"
#include "Game/Piki.h"
#include "Game/TimeMgr.h"
#include "Game/MapMgr.h"
#include "Game/gamePlayData.h"
#include "Game/gameStat.h"
#include "Game/generalEnemyMgr.h"
#include "Game/MoviePlayer.h"
#include "Game/Navi.h"
#include "Game/NaviParms.h"
#include "Game/PikiMgr.h"
#include "Game/SingleGame.h"
#include "P2Macros.h"
#include "PSGame/PikScene.h"
#include "PSSystem/PSGame.h"
#include "Radar.h"
#include "Screen/Game2DMgr.h"
#include "og/Screen/DispMember.h"
#include "PSSystem/PSMainSide_Scene.h"
#include "TParticle2dMgr.h"
#include "kh/khPayDept.h"
#include "nans.h"
#include "utilityU.h"

static const u32 padding[]    = { 0, 0, 0 };
static const char className[] = "SingleGS_Game";

namespace Game {
namespace SingleGame {

/*
 * --INFO--
 * Address:	802135AC
 * Size:	0008B0
 */
void GameState::init(SingleGameSection* game, StateArg* arg)
{
	DeathMgr::mSoundDeathCount = 0;
	moviePlayer->reset();
	gameSystem->setFlag(GAMESYS_IsGameWorldActive);
	mIsPostExtinct = false;
	mCheckRepay    = 0;
	mInSaveScreen  = false;
	int courseID   = game->mCurrentCourseInfo->mCourseIndex;
	playData->setCurrentCourse(courseID);

	// Refill each captain life if they arent dead
	if (!(playData->mDeadNaviID & 1)) {
		playData->mNaviLifeMax[0] = naviMgr->mNaviParms->mNaviParms.mMaxHealth;
		naviMgr->getAt(0)->setLifeMax();
	}
	if (!(playData->mDeadNaviID >> 1 & 1)) {
		playData->mNaviLifeMax[1] = naviMgr->mNaviParms->mNaviParms.mMaxHealth;
		naviMgr->getAt(1)->setLifeMax();
	}

	GameArg* castedArg = static_cast<GameArg*>(arg);
	P2ASSERTLINE(624, castedArg);
	u16 startType = castedArg->mStartType;

	game->setFixNearFar(false, 0.0f, 0.0f);
	Screen::gGame2DMgr->mScreenMgr->mInCave      = false;
	Screen::gGame2DMgr->mScreenMgr->mCourseIndex = courseID;
	gameSystem->mIsInCave                        = false;
	game->mCurrentFloor                          = 0;
	game->_194                                   = false;

	if ((playData->mDeadNaviID & 1) == 0) {
		game->setPlayerMode(0);
	} else {
		game->setPlayerMode(1);
	}
	game->setCamController();
	if (game->mWeatherEfx) {
		game->mWeatherEfx->create(nullptr);
	}
	game->setupMainMapGames();
	pikiMgr->debugShapeDL("BGS::GAME START");
	moviePlayer->getActiveGameCamera();

	switch (startType) {
	case Start_EndDay: {
		DayEndArg dayEndArg(2);
		transit(game, SGS_DayEnd, &dayEndArg);
		return;
	} break;
	case Start_NewGame: {
		char* courseName = const_cast<char*>(game->mCurrentCourseInfo->mName);
		MoviePlayArg moviePlayArg("x01_gamestart", courseName, game->mMovieFinishCallback, 0);
		playData->setDemoFlag(DEMO_Day_One_Start);

		// Set all enemies to be active in intro
		GeneralMgrIterator<EnemyBase> iEnemyMgr(generalEnemyMgr);
		CI_LOOP(iEnemyMgr) { iEnemyMgr.getObject()->movie_begin(false); }

		Iterator<Piki> iPiki(pikiMgr);
		CI_LOOP(iPiki) { (*iPiki)->movie_begin(false); }
		moviePlayArg.mDelegateStart = game->mMovieStartCallback;
		moviePlayer->play(moviePlayArg);
		gameSystem->mTimeMgr->setStartTime();
		game->mWeatherEfx->fade();
	} break;

	case Start_NormalLand: {
		int flagID = game->mCurrentCourseInfo->mCourseIndex + DEMO_Day_One_Start;
		if (!playData->isDemoFlag(flagID)) {
			playData->setDemoFlag(flagID);

			// Play a different cutscene depending on the map (if its your first visit)
			char* courseInMovies[4] = { "x01_gamestart", "x01_coursein_forest", "x01_coursein_yakushima", "x01_coursein_last" };
			IDelegate3<MovieConfig*, u32, u32>* delegate = game->mMovieFinishCallback;
			CourseInfo* info                             = game->mCurrentCourseInfo;
			char* course                                 = courseInMovies[info->mCourseIndex];
			char* demoName                               = const_cast<char*>(info->mName);
			MoviePlayArg moviePlayArg(course, demoName, delegate, 0);
			moviePlayArg.mDelegateStart = game->mMovieStartCallback;
			moviePlayer->play(moviePlayArg);
		} else {
			char* courseName = const_cast<char*>(game->mCurrentCourseInfo->mName);
			MoviePlayArg moviePlayArg("s00_coursein", courseName, game->mMovieFinishCallback, 0);
			moviePlayArg.mDelegateStart = game->mMovieStartCallback;
			moviePlayer->play(moviePlayArg);
		}
		gameSystem->mTimeMgr->setStartTime();
	} break;
	case Start_Unk3:
	case Start_Unk4:
	case Start_ReturnCave: {
		char* courseName = const_cast<char*>(game->mCurrentCourseInfo->mName);
		MoviePlayArg moviePlayArg("s0E_return_cave", courseName, game->mMovieFinishCallback, 0);
		moviePlayArg.mDelegateStart = game->mMovieStartCallback;
		moviePlayer->play(moviePlayArg);

		// Force all onion beams to be active
		for (int i = 0; i < 3; i++) {
			if (playData->hasBootContainer(i)) {
				Onyon* onyon = ItemOnyon::mgr->getOnyon(i);
				if (onyon) {
					onyon->setSpotState(Onyon::SPOTSTATE_Opened);
				}
			}
		}
		if (startType == 1) {
			gameSystem->mTimeMgr->setTime(playData->mCaveSaveData.mTime);
		}
	} break;
	default:
		JUT_PANICLINE(832, "illegal state GameState::init\n");
	}

	sys->heapStatusDump(true);
	gameSystem->mTimeMgr->mFlags.unset(TIMEFLAG_Stopped);
	if (startType != Start_Unk3) {
		// Check if any pikmin types are extinct, if they are, the post-extinction cutscene is needed
		bool noPikisLeft = false;
		for (int i = 0; i <= 2; i++) {
			if (playData->hasContainer(i) && GameStat::getAllPikmins(i) == 0) {
				playData->mPikiContainer.getColorSum(i);
				noPikisLeft = true;
				break;
			}
		}
		if (noPikisLeft) {
			mIsPostExtinct = true;
		}
	} else {
		mIsPostExtinct = false;
	}
	_11 = 0;
	_14 = 6.0f;
	game->clearCaveMenus();
	mDoExit = 0;
	gameSystem->resetFlag(GAMESYS_IsPlaying);
	Screen::gGame2DMgr->initInCourse();
	game->mTreasureRadarActive = 0;

	// Do a dumb calcNearestTreasure because any non-0 return means a treasure at least exists
	Vector3f dummyPos;
	f32 dummyDist;
	if (Radar::mgr->calcNearestTreasure(Vector3f::zero, 128000.0f, dummyPos, dummyDist) == 0) {
		game->mNeedTreasureCalc = true;
	} else {
		game->mNeedTreasureCalc = false;
	}

	// Change sound effects if no treasures left
	if (Radar::mgr && Radar::mgr->getNumOtakaraItems() == 0) {
		PSM::Scene_Ground* scene = static_cast<PSM::Scene_Ground*>(PSMGetChildScene());
		PSSystem::checkGameScene(scene);
		scene->setPollutUp();
	}
}

/*
 * --INFO--
 * Address:	........
 * Size:	000174
 */
unknown GameState::gameStart(SingleGameSection*)
{
	// Feels like there should be more to this, but the DispObjGround stuff is sometimes before this stuff, sometimes after, idk
	gameSystem->setFlag(GAMESYS_IsPlaying);
	if (gameSystem->mTimeMgr->mDayCount != 0) {
		PSMGetSceneMgr()->mScenes->mChild->startMainSeq();
	} else {
		static_cast<PSM::Scene_Objects*>(PSMGetSceneMgr()->mScenes->mChild)->onStartMainSeq();
		static_cast<PSM::Scene_Objects*>(PSMGetSceneMgr()->mScenes->mChild)->getEnvSe()->on();
	}
}

/*
 * --INFO--
 * Address:	80213E5C
 * Size:	000288
 */
bool GameState::check_DemoInout(SingleGameSection* game)
{
	if ((!playData->isDemoFlag(DEMO_Purples_In_Ship)) && (0 < playData->mPikiContainer.getColorSum(Purple))) {
		playData->setDemoFlag(DEMO_Purples_In_Ship);

		char* name = const_cast<char*>(game->mCurrentCourseInfo->mName);
		MoviePlayArg moviePlayArg("g26_inout_black", name, game->mMovieFinishCallback, 0);
		if (ItemOnyon::mgr->mUfo) {
			ItemOnyon::mgr->mUfo->movie_begin(false);
		}

		moviePlayer->play(moviePlayArg);
		return true;
	}

	if (gameSystem->isFlag(GAMESYS_IsGameWorldActive)
	    && (!playData->isDemoFlag(DEMO_Whites_In_Ship) && (0 < playData->mPikiContainer.getColorSum(White)))) {
		playData->setDemoFlag(DEMO_Whites_In_Ship);

		char* name = const_cast<char*>(game->mCurrentCourseInfo->mName);
		MoviePlayArg moviePlayArg("g29_inout_white", name, game->mMovieFinishCallback, 0);

		if (ItemOnyon::mgr->mUfo) {
			ItemOnyon::mgr->mUfo->movie_begin(false);
		}

		moviePlayer->play(moviePlayArg);
		return true;
	}

	if (gameSystem->isFlag(GAMESYS_IsGameWorldActive)
	    && (!playData->isDemoFlag(DEMO_Reds_In_Onion) && (0 < playData->mPikiContainer.getColorSum(Red)))) {
		playData->setDemoFlag(DEMO_Reds_In_Onion);

		char* name = const_cast<char*>(game->mCurrentCourseInfo->mName);
		MoviePlayArg moviePlayArg("g2C_inout_red", name, game->mMovieFinishCallback, 0);

		Onyon* redOnyon = ItemOnyon::mgr->getOnyon(Red);
		if (redOnyon) {
			redOnyon->movie_begin(false);
		}

		if (ItemOnyon::mgr->mUfo) {
			ItemOnyon::mgr->mUfo->movie_begin(false);
		}

		moviePlayer->play(moviePlayArg);
		return true;
	}

	return false;
}

/*
 * --INFO--
 * Address:	802140E4
 * Size:	00000C
 */
void GameState::on_section_fadeout(SingleGameSection*) { mDoExit = 1; }

/*
 * --INFO--
 * Address:	802140F0
 * Size:	000B28
 */
void GameState::on_demo_timer(SingleGameSection* game, u32 id)
{
	// Yes its not a switch
	if (id == DEMOTIMER_YouAppearLost) {
		ItemDownFloor::Item* bagObj = nullptr;
		Iterator<BaseItem> iterator(ItemDownFloor::mgr);
		CI_LOOP(iterator)
		{
			ItemDownFloor::Item* dwfl = static_cast<ItemDownFloor::Item*>(*iterator);
			if (dwfl->mBagMaxWeight == 15) {
				bagObj = dwfl;
			}
		}
		JUT_ASSERTLINE(1025, bagObj, "no down floor 20\n"); // This panic seems to imply the bag once weighed 20 instead of 15

		MoviePlayArg moviePlayArg("x17_join_guide", nullptr, nullptr, 0);
		moviePlayArg.mOrigin       = bagObj->getPosition();
		moviePlayArg.mAngle        = bagObj->getFaceDir();
		moviePlayer->mTargetObject = bagObj;
		moviePlayer->play(moviePlayArg);
		gameSystem->mSection->disableTimer(DEMOTIMER_YouAppearLost);
	}
	if (id == DEMOTIMER_Reds_Purples_Tutorial) {
		Navi* navi = naviMgr->getActiveNavi();
		if (!navi) {
			int id = 1;
			if (!gameSystem->mSection->mPrevNaviIdx)
				id = 0;
			navi = naviMgr->getAt(id);
		}
		playData->setDemoFlag(DEMO_Reds_Purples_Tutorial);
		MoviePlayArg moviePlayArg("x15_exp_x", nullptr, nullptr, 0);
		moviePlayArg.mOrigin       = navi->getPosition();
		moviePlayArg.mAngle        = navi->getFaceDir();
		moviePlayer->mTargetObject = navi;
		moviePlayer->play(moviePlayArg);
		gameSystem->mSection->disableTimer(DEMOTIMER_Reds_Purples_Tutorial);
	}
	if (id == DEMOTIMER_Meet_Red_Pikmin) {
		Navi* navi = naviMgr->getActiveNavi();
		if (!navi) {
			int id = 1;
			if (!gameSystem->mSection->mPrevNaviIdx)
				id = 0;
			navi = naviMgr->getAt(id);
		}
		Iterator<Piki> iterator(pikiMgr);
		CI_LOOP(iterator)
		{
			Piki* piki = *iterator;
			piki->movie_begin(false);
		}
		playData->setDemoFlag(DEMO_Meet_Red_Pikmin);
		MoviePlayArg moviePlayArg("x02_watch_red_pikmin", nullptr, game->mMovieFinishCallback, 0);
		moviePlayArg.mOrigin       = navi->getPosition();
		moviePlayArg.mAngle        = navi->getFaceDir();
		moviePlayer->mTargetObject = navi;
		moviePlayer->play(moviePlayArg);
		gameSystem->mSection->disableTimer(DEMOTIMER_Meet_Red_Pikmin);
	}
	if (id == DEMOTIMER_Unlock_Switch_To_Louie) {
		Navi* navi = naviMgr->getActiveNavi();
		if (!navi) {
			int id = 1;
			if (!gameSystem->mSection->mPrevNaviIdx)
				id = 0;
			navi = naviMgr->getAt(id);
		}
		MoviePlayArg moviePlayArg("x04_exp_y", nullptr, game->mMovieFinishCallback, 0);
		moviePlayArg.mOrigin = navi->getPosition();
		moviePlayArg.mAngle  = navi->getFaceDir();
		moviePlayer->play(moviePlayArg);
		playData->setDemoFlag(DEMO_Unlock_Captain_Switch);
		game->disableTimer(DEMOTIMER_Unlock_Switch_To_Louie);
	}
	if (id == DEMOTIMER_Piki_Seed_In_Ground) {
		if (!playData->isDemoFlag(DEMO_Pluck_First_Pikmin)) {
			ItemPikihead::Item* seed = nullptr;
			Iterator<ItemPikihead::Item> iterator(ItemPikihead::mgr);
			CI_LOOP(iterator)
			{
				seed = *iterator;
				break;
			}
			P2ASSERTLINE(1138, seed);
			MoviePlayArg moviePlayArg("g01_pick_me", nullptr, game->mMovieFinishCallback, 0);
			moviePlayArg.mOrigin = seed->getPosition();
			moviePlayArg.mAngle  = seed->getFaceDir();
			moviePlayer->play(moviePlayArg);
			playData->setDemoFlag(DEMO_Pluck_First_Pikmin);
		}
		game->disableTimer(DEMOTIMER_Piki_Seed_In_Ground);
	} else if (id == DEMOTIMER_Camera_Tutorial) {
		if (!playData->isDemoFlag(DEMO_UNUSED_Camera_Demo)) {
			if (!naviMgr->getActiveNavi())
				return;
			char* name = const_cast<char*>(game->mCurrentCourseInfo->mName);
			MoviePlayArg moviePlayArg("g33_camera_demo", name, game->mMovieFinishCallback, 0);
			Navi* navi = naviMgr->getAt(0);
			if (!navi) {
				navi = naviMgr->getActiveNavi();
			}
			moviePlayArg.mOrigin = navi->getPosition();
			moviePlayArg.mAngle  = navi->getFaceDir();
			moviePlayer->play(moviePlayArg);
			playData->setDemoFlag(DEMO_UNUSED_Camera_Demo);
			return;
		}
		game->disableTimer(DEMOTIMER_Camera_Tutorial);
	}
}

/*
 * --INFO--
 * Address:	80214C18
 * Size:	0006E0
 */
void GameState::exec(SingleGameSection* game)
{
	if (mDoExit) {
		return;
	}

	// when you enter a cave from above ground, this state is still technically active until after the game saves
	if (mInSaveScreen) {
		particle2dMgr->update();
		Screen::gGame2DMgr->update();
		if ((u8)Screen::gGame2DMgr->check_Save()) {
			LoadArg arg(100, 0, 0, 1);
			transit(game, SGS_Load, &arg);
		}
		return;
	}

	game->BaseGameSection::doUpdate();

	// the state has changed, abort rest of the function
	if (game->mCurrentState->mId != mId) {
		return;
	}

	game->updateMainMapScreen();

	// Check starting the "you appear lost" cutscene timer
	if (GameStat::getMapPikmins(-1) >= 15 && moviePlayer->mDemoState == 0 && !playData->isDemoFlag(DEMO_You_Appear_Lost)
	    && playData->hasBootContainer(Red)) {
		playData->setDemoFlag(DEMO_You_Appear_Lost);
		game->enableTimer(180.0f, DEMOTIMER_YouAppearLost);
	}

	if (moviePlayer->mDemoState == 0 && needRepayDemo()) {
		startRepayDemo();
	}

	// Check if anything needs to be done following a % of debt cutscene
	int repaystate = updateRepayDemo();
	switch (repaystate) {
	case 3: { // end the day, go to ending
		pikiMgr->forceEnterPikmins(false);
		game->saveToGeneratorCache(game->mCurrentCourseInfo);
		game->advanceDayCount();
		gameSystem->setPause(false, "repay-done", 3);
		EndingArg arg(0);
		transit(game, SGS_Ending, &arg);
		return;
	}
	case 4: { // end the day, go to ending
		pikiMgr->forceEnterPikmins(false);
		game->saveToGeneratorCache(game->mCurrentCourseInfo);
		game->advanceDayCount();
		gameSystem->setPause(false, "repay-done", 3);
		EndingArg arg(2);
		transit(game, SGS_Ending, &arg);
		return;
	}
	case 1:
	case 2: {
		PSPause_StartMenuOff();
		gameSystem->setPause(false, "repay-done", 3);
		return;
	}
	}

	if (game->mOpenMenuFlags && !game->updateCaveMenus()) {
		return;
	}

	Screen::gGame2DMgr->setGamePad(game->mControllerP1);

	// Check status of opened pause menu
	int menustate = Screen::gGame2DMgr->check_SMenu();
	switch (menustate) {
	case 0:
		break;
	case 1: // cancel menu
		gameSystem->setMoviePause(false, "sm-canc");
		gameSystem->setPause(false, "sm-canc", 3);
		break;
	case 2:
		gameSystem->resetFlag(GAMESYS_IsGameWorldActive);
		gameSystem->setMoviePause(false, "sm-ugot");
		gameSystem->setPause(false, "sm-ugot", 3);
		DayEndArg arg(0);
		transit(game, SGS_DayEnd, &arg);
		return;
	case 3:
		P2ASSERTLINE(1304, Screen::gGame2DMgr->mScreenMgr->reset() == 1);
		playData->mDeadNaviID = 0;
		naviMgr->clearDeadCount();
		gameSystem->resetFlag(GAMESYS_IsGameWorldActive);
		gameSystem->setMoviePause(false, "sm-zenk");
		gameSystem->setPause(false, "sm-zenk", 3);
		game->clearHeap();
		transit(game, SGS_File, nullptr);
		return;
	case 4:
		JUT_PANICLINE(1318, "smenu_escape\n");
		break;
	}

	// Check open pause menu
	if (!gameSystem->isFlag(GAMESYS_Unk4) && moviePlayer->mDemoState == 0 && !gameSystem->paused()
	    && game->mControllerP1->getButtonDown() & Controller::PRESS_START) {
		og::Screen::DispMemberSMenuAll disp; // this ctor should be weak, but needs to not inline here?
		game->setDispMemberSMenu(disp);
		if (Screen::gGame2DMgr->open_SMenu(disp)) {
			gameSystem->setPause(true, "open-sm", 3);
			gameSystem->setMoviePause(true, "open-sm");
		}
	}

	// Check if the day time is up
	if (!gameSystem->paused_soft() && !gameSystem->isFlag(GAMESYS_Unk4) && gameSystem->mTimeMgr->isDayOver() && !game->mOpenMenuFlags
	    && gameSystem->isFlag(GAMESYS_IsGameWorldActive)) {
		gameSystem->resetFlag(GAMESYS_IsGameWorldActive);
		DayEndArg arg(0);
		transit(game, SGS_DayEnd, &arg);
		return;
	}

	// Check need pikmin extinction to occur
	if (!mIsPostExtinct && moviePlayer->mDemoState == 0) {
		if (GameStat::getAllPikmins(-1) - GameStat::getZikatuPikmins(-1) == 0 && playData->hasBootContainer(Red)) {
			gameSystem->resetFlag(GAMESYS_IsGameWorldActive);
			MoviePlayArg moviePlayArg("s05_pikminzero", nullptr, game->mMovieFinishCallback, 0);
			Navi* navi = naviMgr->getActiveNavi();
			if (!navi) {
				int id = 1;
				if (!gameSystem->mSection->mPrevNaviIdx)
					id = 0;
				navi = naviMgr->getAt(id);
			}
			moviePlayArg.mDelegateStart = game->mMovieStartCallback;
			moviePlayArg.mOrigin        = navi->getPosition();
			moviePlayArg.mAngle         = navi->getFaceDir();
			moviePlayer->play(moviePlayArg);
			return;
		}
	}

	PSM::PikminNumberDirector* director = PSMGetPikminNumD();
	int pikis                           = GameStat::getMapPikmins_exclude_Me(-1);
	if (pikis < 10 && DeathMgr::mSoundDeathCount > 0) {
		if (director) {
			director->directOn();
		}
	} else {
		if (director) {
			director->directOff();
		}
	}

	/*
	stwu     r1, -0x140(r1)
	mflr     r0
	stw      r0, 0x144(r1)
	stw      r31, 0x13c(r1)
	stw      r30, 0x138(r1)
	mr       r30, r4
	stw      r29, 0x134(r1)
	mr       r29, r3
	lis      r3, lbl_80482150@ha
	lbz      r0, 0x18(r29)
	addi     r31, r3, lbl_80482150@l
	cmplwi   r0, 0
	bne      lbl_802152DC
	lbz      r0, 0x20(r29)
	cmplwi   r0, 0
	beq      lbl_80214CB8
	lwz      r3, particle2dMgr@sda21(r13)
	bl       update__14TParticle2dMgrFv
	lwz      r3, gGame2DMgr__6Screen@sda21(r13)
	bl       update__Q26Screen9Game2DMgrFv
	lwz      r3, gGame2DMgr__6Screen@sda21(r13)
	bl       check_Save__Q26Screen9Game2DMgrCFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_802152DC
	li       r7, 0
	li       r3, 1
	li       r0, 0x64
	stb      r3, 0x18(r1)
	mr       r3, r29
	mr       r4, r30
	stb      r7, 0x19(r1)
	addi     r6, r1, 0x18
	li       r5, 2
	stb      r7, 0x1a(r1)
	sth      r0, 0x1c(r1)
	lwz      r12, 0(r29)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_802152DC

lbl_80214CB8:
	mr       r3, r30
	bl       doUpdate__Q24Game15BaseGameSectionFv
	lwz      r3, 0x250(r30)
	lwz      r0, 4(r29)
	lwz      r3, 4(r3)
	cmpw     r3, r0
	bne      lbl_802152DC
	mr       r3, r30
	bl       updateMainMapScreen__Q24Game17SingleGameSectionFv
	li       r3, -1
	bl       getMapPikmins__Q24Game8GameStatFi
	cmpwi    r3, 0xf
	blt      lbl_80214D4C
	lwz      r3, moviePlayer__4Game@sda21(r13)
	lwz      r0, 0x18(r3)
	cmpwi    r0, 0
	bne      lbl_80214D4C
	lwz      r3, playData__4Game@sda21(r13)
	li       r4, 0x30
	bl       isDemoFlag__Q24Game8PlayDataFi
	clrlwi.  r0, r3, 0x18
	bne      lbl_80214D4C
	lwz      r3, playData__4Game@sda21(r13)
	li       r4, 1
	bl       hasBootContainer__Q24Game8PlayDataFi
	clrlwi.  r0, r3, 0x18
	beq      lbl_80214D4C
	lwz      r3, playData__4Game@sda21(r13)
	li       r4, 0x30
	bl       setDemoFlag__Q24Game8PlayDataFi
	mr       r3, r30
	lfs      f1, lbl_80519FB4@sda21(r2)
	lwz      r12, 0(r30)
	li       r4, 7
	lwz      r12, 0xa4(r12)
	mtctr    r12
	bctrl

lbl_80214D4C:
	lwz      r3, moviePlayer__4Game@sda21(r13)
	lwz      r0, 0x18(r3)
	cmpwi    r0, 0
	bne      lbl_80214D74
	mr       r3, r29
	bl       needRepayDemo__Q34Game10SingleGame9GameStateFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_80214D74
	mr       r3, r29
	bl       startRepayDemo__Q34Game10SingleGame9GameStateFv

lbl_80214D74:
	mr       r3, r29
	bl       updateRepayDemo__Q34Game10SingleGame9GameStateFv
	cmpwi    r3, 3
	beq      lbl_80214DA8
	bge      lbl_80214D98
	cmpwi    r3, 1
	beq      lbl_802152DC
	bge      lbl_80214E68
	b        lbl_80214E84

lbl_80214D98:
	cmpwi    r3, 5
	bge      lbl_80214E84
	b        lbl_80214E08
	b        lbl_802152DC

lbl_80214DA8:
	lwz      r3, pikiMgr__4Game@sda21(r13)
	li       r4, 0
	bl       forceEnterPikmins__Q24Game7PikiMgrFUc
	lwz      r4, 0x22c(r30)
	mr       r3, r30
	bl       saveToGeneratorCache__Q24Game15BaseGameSectionFPQ24Game10CourseInfo
	mr       r3, r30
	bl       advanceDayCount__Q24Game15BaseGameSectionFv
	lwz      r3, gameSystem__4Game@sda21(r13)
	addi     r5, r31, 0x1e0
	li       r4, 0
	li       r6, 3
	bl       setPause__Q24Game10GameSystemFbPci
	li       r0, 0
	mr       r3, r29
	stb      r0, 0xc(r1)
	mr       r4, r30
	addi     r6, r1, 0xc
	li       r5, 0xb
	lwz      r12, 0(r29)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_802152DC

lbl_80214E08:
	lwz      r3, pikiMgr__4Game@sda21(r13)
	li       r4, 0
	bl       forceEnterPikmins__Q24Game7PikiMgrFUc
	lwz      r4, 0x22c(r30)
	mr       r3, r30
	bl       saveToGeneratorCache__Q24Game15BaseGameSectionFPQ24Game10CourseInfo
	mr       r3, r30
	bl       advanceDayCount__Q24Game15BaseGameSectionFv
	lwz      r3, gameSystem__4Game@sda21(r13)
	addi     r5, r31, 0x1e0
	li       r4, 0
	li       r6, 3
	bl       setPause__Q24Game10GameSystemFbPci
	li       r0, 2
	mr       r3, r29
	stb      r0, 8(r1)
	mr       r4, r30
	addi     r6, r1, 8
	li       r5, 0xb
	lwz      r12, 0(r29)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_802152DC

lbl_80214E68:
	bl       PSPause_StartMenuOff__Fv
	lwz      r3, gameSystem__4Game@sda21(r13)
	addi     r5, r31, 0x1e0
	li       r4, 0
	li       r6, 3
	bl       setPause__Q24Game10GameSystemFbPci
	b        lbl_802152DC

lbl_80214E84:
	lbz      r0, 0x180(r30)
	cmplwi   r0, 0
	beq      lbl_80214EA0
	mr       r3, r30
	bl       updateCaveMenus__Q24Game17SingleGameSectionFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_802152DC

lbl_80214EA0:
	lwz      r3, gGame2DMgr__6Screen@sda21(r13)
	lwz      r4, 0x10c(r30)
	bl       setGamePad__Q26Screen9Game2DMgrFP10Controller
	lwz      r3, gGame2DMgr__6Screen@sda21(r13)
	bl       check_SMenu__Q26Screen9Game2DMgrFv
	cmpwi    r3, 2
	beq      lbl_80214F08
	bge      lbl_80214ED0
	cmpwi    r3, 0
	beq      lbl_802150B4
	bge      lbl_80214EE0
	b        lbl_8021502C

lbl_80214ED0:
	cmpwi    r3, 4
	beq      lbl_80215014
	bge      lbl_8021502C
	b        lbl_80214F68

lbl_80214EE0:
	lwz      r3, gameSystem__4Game@sda21(r13)
	li       r4, 0
	addi     r5, r2, lbl_80519FB8@sda21
	bl       setMoviePause__Q24Game10GameSystemFbPc
	lwz      r3, gameSystem__4Game@sda21(r13)
	li       r4, 0
	addi     r5, r2, lbl_80519FB8@sda21
	li       r6, 3
	bl       setPause__Q24Game10GameSystemFbPci
	b        lbl_802150B4

lbl_80214F08:
	lwz      r3, gameSystem__4Game@sda21(r13)
	li       r4, 0
	addi     r5, r2, lbl_80519FC0@sda21
	lbz      r0, 0x3c(r3)
	rlwinm   r0, r0, 0, 0x1b, 0x19
	stb      r0, 0x3c(r3)
	lwz      r3, gameSystem__4Game@sda21(r13)
	bl       setMoviePause__Q24Game10GameSystemFbPc
	lwz      r3, gameSystem__4Game@sda21(r13)
	li       r4, 0
	addi     r5, r2, lbl_80519FC0@sda21
	li       r6, 3
	bl       setPause__Q24Game10GameSystemFbPci
	li       r0, 0
	mr       r3, r29
	sth      r0, 0x14(r1)
	mr       r4, r30
	addi     r6, r1, 0x14
	li       r5, 5
	lwz      r12, 0(r29)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_802152DC

lbl_80214F68:
	lwz      r3, gGame2DMgr__6Screen@sda21(r13)
	lwz      r3, 0x18(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	clrlwi   r0, r3, 0x18
	cmplwi   r0, 1
	beq      lbl_80214FA0
	addi     r3, r31, 0x7c
	addi     r5, r31, 0x94
	li       r4, 0x518
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80214FA0:
	lwz      r3, playData__4Game@sda21(r13)
	li       r0, 0
	stb      r0, 0x20(r3)
	lwz      r3, naviMgr__4Game@sda21(r13)
	bl       clearDeadCount__Q24Game7NaviMgrFv
	lwz      r3, gameSystem__4Game@sda21(r13)
	li       r4, 0
	addi     r5, r2, lbl_80519FC8@sda21
	lbz      r0, 0x3c(r3)
	rlwinm   r0, r0, 0, 0x1b, 0x19
	stb      r0, 0x3c(r3)
	lwz      r3, gameSystem__4Game@sda21(r13)
	bl       setMoviePause__Q24Game10GameSystemFbPc
	lwz      r3, gameSystem__4Game@sda21(r13)
	li       r4, 0
	addi     r5, r2, lbl_80519FC8@sda21
	li       r6, 3
	bl       setPause__Q24Game10GameSystemFbPci
	mr       r3, r30
	bl       clearHeap__Q24Game15BaseGameSectionFv
	mr       r3, r29
	mr       r4, r30
	lwz      r12, 0(r29)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_802152DC

lbl_80215014:
	addi     r3, r31, 0x7c
	addi     r5, r31, 0x1ec
	li       r4, 0x526
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce
	b        lbl_802150B4

lbl_8021502C:
	lwz      r3, gameSystem__4Game@sda21(r13)
	lbz      r0, 0x3c(r3)
	rlwinm.  r0, r0, 0, 0x1c, 0x1c
	bne      lbl_802150B4
	lwz      r4, moviePlayer__4Game@sda21(r13)
	lwz      r0, 0x18(r4)
	cmpwi    r0, 0
	bne      lbl_802150B4
	bl       paused__Q24Game10GameSystemFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_802150B4
	lwz      r3, 0x10c(r30)
	lwz      r0, 0x1c(r3)
	rlwinm.  r0, r0, 0, 0x13, 0x13
	beq      lbl_802150B4
	addi     r3, r1, 0x60
	bl       __ct__Q32og6Screen18DispMemberSMenuAllFv
	mr       r3, r30
	addi     r4, r1, 0x60
	bl
setDispMemberSMenu__Q24Game17SingleGameSectionFRQ32og6Screen18DispMemberSMenuAll
	lwz      r3, gGame2DMgr__6Screen@sda21(r13)
	addi     r4, r1, 0x60
	bl       open_SMenu__Q26Screen9Game2DMgrFRQ32og6Screen18DispMemberSMenuAll
	clrlwi.  r0, r3, 0x18
	beq      lbl_802150B4
	lwz      r3, gameSystem__4Game@sda21(r13)
	li       r4, 1
	addi     r5, r2, lbl_80519FD0@sda21
	li       r6, 3
	bl       setPause__Q24Game10GameSystemFbPci
	lwz      r3, gameSystem__4Game@sda21(r13)
	li       r4, 1
	addi     r5, r2, lbl_80519FD0@sda21
	bl       setMoviePause__Q24Game10GameSystemFbPc

lbl_802150B4:
	lwz      r3, gameSystem__4Game@sda21(r13)
	bl       paused_soft__Q24Game10GameSystemFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_80215134
	lwz      r3, gameSystem__4Game@sda21(r13)
	lbz      r0, 0x3c(r3)
	rlwinm.  r0, r0, 0, 0x1c, 0x1c
	bne      lbl_80215134
	lwz      r3, 0x40(r3)
	bl       isDayOver__Q24Game7TimeMgrFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_80215134
	lbz      r0, 0x180(r30)
	cmplwi   r0, 0
	bne      lbl_80215134
	lwz      r4, gameSystem__4Game@sda21(r13)
	lbz      r3, 0x3c(r4)
	rlwinm.  r0, r3, 0, 0x1a, 0x1a
	beq      lbl_80215134
	rlwinm   r3, r3, 0, 0x1b, 0x19
	li       r0, 0
	stb      r3, 0x3c(r4)
	mr       r3, r29
	mr       r4, r30
	addi     r6, r1, 0x10
	sth      r0, 0x10(r1)
	li       r5, 5
	lwz      r12, 0(r29)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_802152DC

lbl_80215134:
	lbz      r0, 0x10(r29)
	cmplwi   r0, 0
	bne      lbl_80215278
	lwz      r3, moviePlayer__4Game@sda21(r13)
	lwz      r0, 0x18(r3)
	cmpwi    r0, 0
	bne      lbl_80215278
	li       r3, -1
	bl       getAllPikmins__Q24Game8GameStatFi
	mr       r29, r3
	li       r3, -1
	bl       getZikatuPikmins__Q24Game8GameStatFi
	subf.    r0, r3, r29
	bne      lbl_80215278
	lwz      r3, playData__4Game@sda21(r13)
	li       r4, 1
	bl       hasBootContainer__Q24Game8PlayDataFi
	clrlwi.  r0, r3, 0x18
	beq      lbl_80215278
	lwz      r5, gameSystem__4Game@sda21(r13)
	addi     r4, r31, 0x1fc
	lfs      f0, lbl_80519FA8@sda21(r2)
	li       r0, 0
	lbz      r3, 0x3c(r5)
	rlwinm   r3, r3, 0, 0x1b, 0x19
	stb      r3, 0x3c(r5)
	lwz      r5, 0xc8(r30)
	lwz      r3, naviMgr__4Game@sda21(r13)
	stw      r4, 0x2c(r1)
	stw      r0, 0x30(r1)
	stw      r5, 0x38(r1)
	stfs     f0, 0x44(r1)
	stfs     f0, 0x48(r1)
	stfs     f0, 0x4c(r1)
	stfs     f0, 0x50(r1)
	stw      r0, 0x54(r1)
	stw      r0, 0x3c(r1)
	stw      r0, 0x34(r1)
	stw      r0, 0x58(r1)
	stw      r0, 0x40(r1)
	stw      r0, 0x5c(r1)
	bl       getActiveNavi__Q24Game7NaviMgrFv
	or.      r29, r3, r3
	bne      lbl_80215218
	lwz      r3, gameSystem__4Game@sda21(r13)
	li       r4, 1
	lwz      r3, 0x58(r3)
	lwz      r0, 0xe4(r3)
	cmpwi    r0, 0
	bne      lbl_80215200
	li       r4, 0

lbl_80215200:
	lwz      r3, naviMgr__4Game@sda21(r13)
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	mr       r29, r3

lbl_80215218:
	lwz      r0, 0xcc(r30)
	mr       r4, r29
	addi     r3, r1, 0x20
	stw      r0, 0x3c(r1)
	lwz      r12, 0(r29)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0x20(r1)
	mr       r3, r29
	lfs      f1, 0x24(r1)
	lfs      f0, 0x28(r1)
	stfs     f2, 0x44(r1)
	stfs     f1, 0x48(r1)
	stfs     f0, 0x4c(r1)
	lwz      r12, 0(r29)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	stfs     f1, 0x50(r1)
	addi     r4, r1, 0x2c
	lwz      r3, moviePlayer__4Game@sda21(r13)
	bl       play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
	b        lbl_802152DC

lbl_80215278:
	bl       PSMGetPikminNumD__Fv
	mr       r0, r3
	li       r3, -1
	mr       r29, r0
	bl       getMapPikmins_exclude_Me__Q24Game8GameStatFi
	cmpwi    r3, 0xa
	bge      lbl_802152C0
	lwz      r0, mSoundDeathCount__Q24Game8DeathMgr@sda21(r13)
	cmpwi    r0, 0
	ble      lbl_802152C0
	cmplwi   r29, 0
	beq      lbl_802152DC
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	b        lbl_802152DC

lbl_802152C0:
	cmplwi   r29, 0
	beq      lbl_802152DC
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl

lbl_802152DC:
	lwz      r0, 0x144(r1)
	lwz      r31, 0x13c(r1)
	lwz      r30, 0x138(r1)
	lwz      r29, 0x134(r1)
	mtlr     r0
	addi     r1, r1, 0x140
	blr
	*/
}

/*
 * --INFO--
 * Address:	802154D4
 * Size:	0000D4
 */
void GameState::onOrimaDown(SingleGameSection* game, int id)
{
	MoviePlayArg moviePlayArg("s03_orimadown", nullptr, game->mMovieFinishCallback, id);
	moviePlayArg.mDelegateStart = game->mMovieStartCallback;
	Navi* navi                  = naviMgr->getAt(id);
	moviePlayer->mTargetNavi    = navi;
	if (id == 0) {
		moviePlayer->mActingCamera = game->mOlimarCamera;
	} else {
		moviePlayer->mActingCamera = game->mLouieCamera;
	}
	moviePlayer->play(moviePlayArg);
}

/*
 * --INFO--
 * Address:	802155A8
 * Size:	0000DC
 */
void GameState::onHoleIn(SingleGameSection* game, ItemCave::Item* item)
{
	MoviePlayArg moviePlayArg("s09_holein", nullptr, game->mMovieFinishCallback, 0);
	moviePlayArg.mDelegateStart = game->mMovieStartCallback;
	moviePlayArg.mOrigin        = item->getPosition();
	moviePlayArg.mAngle         = item->getFaceDir();
	moviePlayer->mTargetObject  = item;
	moviePlayArg.mNaviID        = item->mCaveID.getID();
	moviePlayer->play(moviePlayArg);
}

/*
 * --INFO--
 * Address:	80215684
 * Size:	000004
 */
void GameState::onMovieCommand(SingleGameSection*, int) { }

/*
 * --INFO--
 * Address:	80215688
 * Size:	000158
 */
void GameState::onMovieStart(SingleGameSection* game, MovieConfig* config, u32, u32 id)
{
	Screen::gGame2DMgr->startFadeBG_CourseName();
	Screen::gGame2DMgr->startCount_CourseName();

	if (config->is("s0E_return_cave")) {
		game->createFallPikminSound();
	}

	if (config->is("s05_pikminzero")) {
		Screen::gGame2DMgr->open_GameOver(Screen::Game2DMgr::GOTITLE_PikminZero);
	}

	if (config->is("s03_orimadown")) {
		Screen::Game2DMgr::GameOverTitle naviType;
		if (id == 0) {
			naviType = Screen::Game2DMgr::GOTITLE_OlimarDown;
			game->setPlayerMode(0);
		} else {
			naviType = Screen::Game2DMgr::GOTITLE_LouieDown;
			if ((playData->mStoryFlags & STORY_DebtPaid)) {
				naviType = Screen::Game2DMgr::GOTITLE_PresidentDown;
			}
			game->setPlayerMode(1);
		}
		Screen::gGame2DMgr->open_GameOver(naviType);
	}

	if (config->is("s09_holein")) {
		bool isSC = false;
		if (id == 'y_04')
			isSC = true;
		game->saveMainMapSituation(isSC);
		Vector3f pos = game->mCurrentCave->getPosition();
		game->prepareHoleIn(pos, false);
	}
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  lis       r6, 0x8048
	  stw       r0, 0x44(r1)
	  stmw      r27, 0x2C(r1)
	  mr        r27, r4
	  mr        r28, r5
	  mr        r29, r7
	  addi      r31, r6, 0x2150
	  lwz       r3, -0x6560(r13)
	  bl        0x1E819C
	  lwz       r3, -0x6560(r13)
	  bl        0x1E824C
	  mr        r3, r28
	  addi      r4, r31, 0xC0
	  bl        0x21C208
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x50
	  mr        r3, r27
	  bl        -0xC41A0

	.loc_0x50:
	  mr        r3, r28
	  addi      r4, r31, 0x1FC
	  bl        0x21C1EC
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x70
	  lwz       r3, -0x6560(r13)
	  li        r4, 0x4
	  bl        0x1E8258

	.loc_0x70:
	  mr        r3, r28
	  addi      r4, r31, 0x20C
	  bl        0x21C1CC
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xD4
	  cmplwi    r29, 0
	  bne-      .loc_0xA0
	  mr        r3, r27
	  li        r30, 0x1
	  li        r4, 0
	  bl        -0xC7E08
	  b         .loc_0xC8

	.loc_0xA0:
	  lwz       r3, -0x6B70(r13)
	  li        r4, 0x2
	  lbz       r0, 0x2F(r3)
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0xB8
	  li        r4, 0x3

	.loc_0xB8:
	  mr        r30, r4
	  mr        r3, r27
	  li        r4, 0x1
	  bl        -0xC7E34

	.loc_0xC8:
	  lwz       r3, -0x6560(r13)
	  mr        r4, r30
	  bl        0x1E81F4

	.loc_0xD4:
	  mr        r3, r28
	  addi      r4, r31, 0x21C
	  bl        0x21C168
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x144
	  subis     r0, r29, 0x795F
	  li        r4, 0
	  cmplwi    r0, 0x3034
	  bne-      .loc_0xFC
	  li        r4, 0x1

	.loc_0xFC:
	  mr        r3, r27
	  bl        -0xC1AC0
	  lwz       r4, 0x184(r27)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x0(r4)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x8(r1)
	  mr        r3, r27
	  lfs       f1, 0xC(r1)
	  addi      r4, r1, 0x14
	  lfs       f0, 0x10(r1)
	  li        r5, 0
	  stfs      f2, 0x14(r1)
	  stfs      f1, 0x18(r1)
	  stfs      f0, 0x1C(r1)
	  bl        -0xC7698

	.loc_0x144:
	  lmw       r27, 0x2C(r1)
	  lwz       r0, 0x44(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802157E0
 * Size:	001A7C
 */
void GameState::onMovieDone(SingleGameSection* game, MovieConfig* config, u32, u32 id)
{
	bool repay = needRepayDemo();

	// Check first treasure collected day end
	if (config->is("s10_suck_treasure")) {
		playData->getGroundOtakaraNum(0);

		// Check valley of repose treasures collected, if 1 now, and 0 at day start, play day end cutscene
		if (playData->getGroundOtakaraNum(0) == 1 && playData->getGroundOtakaraNum_Old(0) == 0) {
			char* name = const_cast<char*>(game->mCurrentCourseInfo->mName);
			MoviePlayArg moviePlayArg("x07_first_recovery", name, game->mMovieFinishCallback, 0);
			moviePlayer->play(moviePlayArg);
			return;
		}
	}

	// End day after first treasure day end cutscene
	if (config->is("x07_first_recovery")) {
		DayEndArg arg(0);
		transit(game, SGS_DayEnd, &arg);
		return;
	}

	// After returning from a cave for the first time cutscene
	if (config->is("g08_first_return")) {
		if (!playData->isDemoFlag(DEMO_First_Globe_Day_End) && playData->mOlimarData[0].hasItem(OlimarData::ODII_SphericalAtlas)) {
			playData->setDemoFlag(DEMO_First_Globe_Day_End);
			char* name = const_cast<char*>(game->mCurrentCourseInfo->mName);
			MoviePlayArg moviePlayArg("g32_get_map", name, game->mMovieFinishCallback, 0);
			moviePlayer->play(moviePlayArg);
			return;
		}
		if (repay && playData->getRepayLevel() == 9) {
			startRepayDemo();
			return;
		}
		if (check_DemoInout(game)) {
			return;
		}
		if (mIsPostExtinct) {
			char* name = const_cast<char*>(game->mCurrentCourseInfo->mName);
			MoviePlayArg moviePlayArg("s13_pikmin_supply", name, game->mMovieFinishCallback, 0);
			moviePlayer->play(moviePlayArg);
			return;
		}
		gameStart(game);
	}

	// After finding the red onion
	if (config->is("x03_find_red_onyon")) {
		if (!playData->isDemoFlag(DEMO_Pluck_First_Pikmin)) {
			game->enableTimer(20.0f, DEMOTIMER_Piki_Seed_In_Ground);
		}
	}

	// After first globe day end (paying the debt overpowers its day ending... with day ending)
	if (config->is("g32_get_map")) {
		if (repay && playData->getRepayLevel() == 9) {
			startRepayDemo();
		} else {
			DayEndArg arg(0);
			transit(game, SGS_DayEnd, &arg);
		}
		return;
	}

	// After start of day 1, or first cave return
	if (config->is("x01_gamestart") || config->is("g08_first_return")) {
		if (config->is("x01_gamestart")) {
			game->mWeatherEfx->create(nullptr);
		}
		og::Screen::DispMemberGround disp;
		Screen::gGame2DMgr->open_GameGround(disp);
		gameStart(game);
	}

	// After start of day 1 cutscene
	if (config->is("x01_gamestart")) {
		// Le funny hardcoded louie day 1 position
		Navi* louie = naviMgr->getAt(1);
		Vector3f pos(-1260.0f, -80.0f, 4350.0f);
		louie->mFaceDir = roundAng(7.6969f);
		pos.y           = mapMgr->getMinY(pos);
		louie->setPosition(pos, false);
		louie->mFsm->transit(louie, 0, nullptr);
	}

	// After first time using president (start gameplay if no other cutscenes)
	if (config->is("g35_president_gamestart")) {
		if (mIsPostExtinct) {
			char* name = const_cast<char*>(game->mCurrentCourseInfo->mName);
			MoviePlayArg moviePlayArg("s13_pikmin_supply", name, game->mMovieFinishCallback, 0);
			moviePlayer->play(moviePlayArg);
			return;
		}
		gameStart(game);
		if (check_DemoInout(game)) {
			return;
		}
		og::Screen::DispMemberGround disp;
		Screen::gGame2DMgr->open_GameGround(disp);
		return;
	}

	// Regular/first time course landing, check usual stuff after it
	if (config->is("s00_coursein") || config->is("x01_coursein_forest") || config->is("x01_coursein_yakushima")
	    || config->is("x01_coursein_last")) {
		if ((playData->mStoryFlags & STORYSAVE_DebtPaid) && !playData->isDemoFlag(DEMO_President_Start)) {
			playData->setDemoFlag(DEMO_President_Start);
			char* name = const_cast<char*>(game->mCurrentCourseInfo->mName);
			MoviePlayArg moviePlayArg("g35_president_gamestart", name, game->mMovieFinishCallback, 0);
			moviePlayArg.mDelegateStart = game->mMovieStartCallback;
			moviePlayer->play(moviePlayArg);
			Screen::gGame2DMgr->close_CourseName();
			return;
		}

		if (mIsPostExtinct) {
			char* name = const_cast<char*>(game->mCurrentCourseInfo->mName);
			MoviePlayArg moviePlayArg("s13_pikmin_supply", name, game->mMovieFinishCallback, 0);
			moviePlayer->play(moviePlayArg);
			return;
		}

		if (check_DemoInout(game)) {
			Screen::gGame2DMgr->close_CourseName();
			return;
		}

		gameStart(game);
		og::Screen::DispMemberGround disp;
		Screen::gGame2DMgr->open_GameGround(disp);
		return;
	}

	// After entering a cave hole
	if (config->is("s09_holein")) {
		moviePlayer->clearSuspendedDemo();
		og::Screen::DispMemberSave disp;
		disp.mDoSound = true;
		PSMCancelToPauseOffMainBgm();
		Screen::gGame2DMgr->open_Save(disp);
		mInSaveScreen = true;
		return;
	}

	// After post pikmin extinction cutscene
	if (config->is("s13_pikmin_supply")) {
		mIsPostExtinct = false;
		og::Screen::DispMemberGround disp;
		Screen::gGame2DMgr->open_GameGround(disp);
		gameStart(game);
		return;
	}

	// regular cave returning (post extinction has the highest priority, which allows the first globe cutscene to be skipped)
	if (config->is("s0E_return_cave")) {
		if (mIsPostExtinct) {
			char* name = const_cast<char*>(game->mCurrentCourseInfo->mName);
			MoviePlayArg moviePlayArg("s13_pikmin_supply", name, game->mMovieFinishCallback, 0);
			moviePlayer->play(moviePlayArg);
			return;
		}

		Iterator<Piki> iterator(pikiMgr);
		CI_LOOP(iterator)
		{
			Piki* piki   = *iterator;
			Vector3f pos = piki->getPosition();
			pos.y        = mapMgr->getMinY(pos);
			piki->setPosition(pos, false);
		}

		if (!playData->isDemoFlag(DEMO_First_Cave_Return)) {
			playData->setDemoFlag(DEMO_First_Cave_Return);
			char* name = const_cast<char*>(game->mCurrentCourseInfo->mName);
			MoviePlayArg moviePlayArg("g08_first_return", name, game->mMovieFinishCallback, 0);
			moviePlayArg.mDelegateStart = game->mMovieStartCallback;
			moviePlayer->play(moviePlayArg);
			return;
		}

		if (!playData->isDemoFlag(DEMO_First_Globe_Day_End) && playData->mOlimarData[0].hasItem(OlimarData::ODII_SphericalAtlas)) {
			playData->setDemoFlag(DEMO_First_Globe_Day_End);
			char* name = const_cast<char*>(game->mCurrentCourseInfo->mName);
			MoviePlayArg moviePlayArg("g32_get_map", name, game->mMovieFinishCallback, 0);
			moviePlayer->play(moviePlayArg);
			return;
		}

		if (check_DemoInout(game)) {
			return;
		}

		gameStart(game);
		og::Screen::DispMemberGround disp;
		Screen::gGame2DMgr->open_GameGround(disp);
		return;
	}

	// After one of the three "pikmin are in onion/ship" cutscenes
	if (config->is("g26_inout_black") || config->is("g29_inout_white") || config->is("g2C_inout_red")) {
		gameStart(game);
		og::Screen::DispMemberGround disp;
		Screen::gGame2DMgr->open_GameGround(disp);
		return;
	}

	if (config->is("s03_orimadown")) {
		Screen::gGame2DMgr->close_GameOver();
		naviMgr->getAt(id)->setDeadLaydown();
		if (naviMgr->mDeadNavis != 2) {
			if ((int)id == 0) {
				gameSystem->mSection->setPlayerMode(1);
			} else {
				gameSystem->mSection->setPlayerMode(0);
			}
		} else {
			gameSystem->resetFlag(GAMESYS_IsGameWorldActive);
			DayEndArg arg(2);
			transit(game, SGS_DayEnd, &arg);
		}
		return;
	}

	if (config->is("s05_pikminzero")) {
		Screen::gGame2DMgr->close_GameOver();
		gameSystem->resetFlag(GAMESYS_IsGameWorldActive);
		DayEndArg arg(1);
		transit(game, SGS_DayEnd, &arg);
		return;
	}
}

/*
 * --INFO--
 * Address:	8021725C
 * Size:	000074
 */
bool GameState::needRepayDemo()
{
	if (mCheckRepay) {
		return false;
	}

	bool ret = false;
	playData->getRepayLevel();
	if (playData->checkRepayLevelFirstClear() || playData->isCompletePelletTrigger()) {
		ret = true;
	} else {
		ret = false;
	}

	return ret;
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	lbz      r0, 0x19(r3)
	cmplwi   r0, 0
	beq      lbl_80217280
	li       r3, 0
	b        lbl_802172BC

lbl_80217280:
	lwz      r3, playData__4Game@sda21(r13)
	li       r31, 0
	bl       getRepayLevel__Q24Game8PlayDataFv
	lwz      r3, playData__4Game@sda21(r13)
	bl       checkRepayLevelFirstClear__Q24Game8PlayDataFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_802172A0
	li       r31, 1

lbl_802172A0:
	lwz      r3, playData__4Game@sda21(r13)
	bl       isCompletePelletTrigger__Q24Game8PlayDataFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_802172B8
	li       r3, 1
	b        lbl_802172BC

lbl_802172B8:
	mr       r3, r31

lbl_802172BC:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802172D0
 * Size:	000140
 */
void GameState::startRepayDemo()
{
	if (!mCheckRepay) {
		mCheckRepay = true;
		gameSystem->setPause(true, "start-repay", 3);
		gameSystem->setMoviePause(true, "start-repay");
		mRepayTimer = 5.0f;

		int level = playData->getRepayLevel();
		f32 rate  = playData->getRepayLevelPercent(level);
		if (playData->isCompletePelletTrigger()) {
			kh::Screen::DispPayDept disp(kh::Screen::DispPayDept::PAYDEPT_Complete, 0);
			Screen::gGame2DMgr->open_PayDept(disp);
			gameSystem->resetFlag(GAMESYS_IsGameWorldActive);
		} else if (level < 9) {
			kh::Screen::DispPayDept disp(kh::Screen::DispPayDept::PAYDEPT_Percent, rate);
			Screen::gGame2DMgr->open_PayDept(disp);
		} else {
			kh::Screen::DispPayDept disp(kh::Screen::DispPayDept::PAYDEPT_DebtPayed, 0);
			Screen::gGame2DMgr->open_PayDept(disp);
			gameSystem->resetFlag(GAMESYS_IsGameWorldActive);
		}
		PSPause_StartMenuOn();
	}
}

/*
 * --INFO--
 * Address:	80217410
 * Size:	0000A8
 */
GameState::RepayDemoState GameState::updateRepayDemo()
{
	if (mCheckRepay) {
		if ((u8)Screen::gGame2DMgr->check_PayDept()) {
			gameSystem->setMoviePause(false, "check-repay");
			mCheckRepay = false;
			if (playData->isCompletePelletTrigger()) {
				return RDS_4;
			}
			playData->experienceRepayLevelFirstClear();
			if (playData->getRepayLevel() >= 9) {
				return RDS_3;
			}
			return RDS_2;
		}
		return RDS_1;
	}
	return RDS_0;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000004
 */
void GameState::drawRepayDemo(Graphics&)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	802174B8
 * Size:	000078
 */
void GameState::draw(SingleGameSection* game, Graphics& gfx)
{
	if (mDoExit) {
		return;
	}

	if (mInSaveScreen) {
		game->draw_Ogawa2D(gfx);
		return;
	}

	game->BaseGameSection::doDraw(gfx);
	game->drawMainMapScreen();
	game->test_draw_treasure_detector();
}

/*
 * --INFO--
 * Address:	80217530
 * Size:	000068
 */
void GameState::cleanup(SingleGameSection* game)
{
	gameSystem->resetFlag(GAMESYS_IsPlaying);
	gameSystem->setMoviePause(false, "gamestate::cleanup");
	if (game->mTheExpHeap) {
		PSMCancelToPauseOffMainBgm();
	}
	game->setDraw2DCreature(nullptr);
}

} // namespace SingleGame
} // namespace Game
