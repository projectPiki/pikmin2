#include "Game/BaseGameSection.h"
#include "Game/GameSystem.h"
#include "Game/Piki.h"
#include "Game/PikiMgr.h"
#include "Game/SingleGameSection.h"
#include "Game/SingleGame.h"
#include "Game/Entities/ItemOnyon.h"
#include "Game/Entities/ItemCave.h"
#include "Game/gameStat.h"
#include "Game/Farm.h"
#include "Game/Navi.h"
#include "efx/TLastMomiji.h"
#include "efx/TForestSakura.h"
#include "efx/TTutorialSnow.h"
#include "Game/MapMgr.h"
#include "Screen/Enums.h"
#include "PSM/Scene.h"
#include "Screen/Game2DMgr.h"
#include "PSSystem/PSGame.h"
#include "PSSystem/PSMainSide_Scene.h"
#include "string.h"
#include "Iterator.h"
#include "Game/Cave/RandMapMgr.h"
#include "Game/MoviePlayer.h"
#include "Radar.h"
#include "utilityU.h"
#include "Game/NaviParms.h"
#include "Dolphin/rand.h"
#include "Game/PikiState.h"
#include "Game/AIConstants.h"
#include "Game/Entities/PelletOtakara.h"
#include "Game/Entities/PelletItem.h"
#include "Game/Entities/PelletCarcass.h"
#include "PikiAI.h"
#include "nans.h"

namespace Game {

static const u32 padding[]    = { 0, 0, 0 };
static const char className[] = "SingleGameSection";

/**
 * @note Address: 0x80152074
 * @note Size: 0x84
 */
SingleGameSection::~SingleGameSection() { Radar::mgr = nullptr; }

/**
 * @note Address: 0x801520F8
 * @note Size: 0x184
 */
void SingleGameSection::startMainBgm()
{
	gameSystem->setFlag(GAMESYS_IsPlaying);
	PSMGetSceneMgr()->mScenes->mChild->startMainSeq();

	if (Radar::mgr && !Radar::mgr->getNumOtakaraItems() && gameSystem->mIsInCave) {
		PSM::Scene_Cave* scene = static_cast<PSM::Scene_Cave*>(PSMGetChildScene());
		PSSystem::checkGameScene(scene);
		scene->stopPollutionSe();
	}
}

/**
 * @note Address: 0x80152284
 * @note Size: 0x2A0
 */
void SingleGame::FSM::init(SingleGameSection* section)
{
	create(SGS_StateCount);
	registerState(new FileState);
	registerState(new SelectState);
	registerState(new LoadState);
	registerState(new GameState);
	registerState(new CaveState);
	registerState(new DayEndState);
	registerState(new CaveDayEndState);
	registerState(new MainResultState);
	registerState(new CaveResultState);
	registerState(new MovieState);
	registerState(new ZukanState);
	registerState(new EndingState);
}

/**
 * @note Address: N/A
 * @note Size: 0x38
 */
void SingleGame::FSM::draw(SingleGameSection* game, Graphics& gfx)
{
	static_cast<State*>(mStates[0])->draw(game, gfx);
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x80152528
 * @note Size: 0x20
 */
void SingleGame::FSM::transit(SingleGameSection* game, int sceneNum, Game::StateArg* arg)
{
	StateMachine<SingleGameSection>::transit(game, sceneNum, arg);
}

/**
 * @note Address: 0x80152548
 * @note Size: 0x40
 */
SingleGame::State* SingleGame::FSM::getState(int index)
{
	if (assertValidID(index))
		return static_cast<State*>(mStates[index]);
	return nullptr;
}

/**
 * @note Address: 0x80152588
 * @note Size: 0x200
 */
void SingleGame::State::accountEarnings(SingleGameSection* game, PelletCropMemory* pelletMem, bool flag)
{
	PelletItem::Mgr* imgr;
	PelletCarcass::Mgr* cmgr;
	PelletOtakara::Mgr* omgr;
	// Calculate value of collected Treasures
	omgr                  = PelletOtakara::mgr;
	KindCounter& ocounter = pelletMem->mOtakara;
	for (int i = 0; i < ocounter.getNumKinds(); i++) {
		PelletConfig* config = omgr->getPelletConfig(i);
		if (config) {
			// Increase poko count by quantity of the item * its value
			playData->addPokos(ocounter(i) * config->getPokoValue());

			if (ocounter(i)) {
				playData->obtainPellet(omgr, i);

				if (flag && !strcmp("yes", config->mParams.mUnique.mData)) {
					playData->incCaveOtakara(game->mCurrentCourseInfo->mCourseIndex, game->mCaveID);
				}
			}
		}
	}

	// Calculate value of Enemy Carcasses
	if (!game->mDoTrackCarcass) {
		cmgr                  = PelletCarcass::mgr;
		KindCounter& ccounter = pelletMem->mCarcass;
		for (int i = 0; i < ccounter.getNumKinds(); i++) {
			PelletConfig* config = cmgr->getPelletConfig(i);
			if (config) {
				// Increase poko count by quantity of the item * its value
				playData->addPokos(ccounter(i) * config->getPokoValue());
			}
		}
	}

	// Calculate value of Explorers Kit Items
	imgr                  = PelletItem::mgr;
	KindCounter& icounter = pelletMem->mItem;
	for (int i = 0; i < icounter.getNumKinds(); i++) {
		PelletConfig* config = imgr->getPelletConfig(i);
		if (config) {
			// Increase poko count by quantity of the item * its value
			playData->addPokos(icounter(i) * config->getPokoValue());

			if (icounter(i)) {
				playData->obtainPellet(imgr, i);

				if (flag && !strcmp("yes", config->mParams.mUnique.mData)) {
					playData->incCaveOtakara(game->mCurrentCourseInfo->mCourseIndex, game->mCaveID);
				}
			}
		}
	}
}

/**
 * @note Address: 0x80152788
 * @note Size: 0x160
 */
void SingleGame::CaveDayEndState::init(SingleGameSection* game, StateArg* arg)
{
	moviePlayer->reset();

	game->mDisplayWiper = game->mWipeOutFader;
	mFadeTimer          = 2.5f;
	game->mWipeOutFader->start(mFadeTimer);

	gameSystem->setPause(1, "cavedayend", 3);

	if (!PSMGetSceneMgrCheck()) {
		return;
	}

	PSSystem::SceneMgr* mgr = PSMGetSceneMgrCheck();
	mgr->checkScene();
	PSSystem::Scene* scene = mgr->mScenes->mChild;
	if (scene) {
		scene->stopAllSound(mFadeTimer / sys->mDeltaTime);
	}
}

/**
 * @note Address: 0x801528E8
 * @note Size: 0xB4
 */
void SingleGame::CaveDayEndState::exec(SingleGameSection* section)
{
	section->BaseGameSection::doUpdate();
	section->updateCaveScreen();

	mFadeTimer -= sys->mDeltaTime;
	if (mFadeTimer <= 0.0f) {
		section->advanceDayCount();
		gameSystem->mTimeMgr->setStartTime();
		pikiMgr->forceEnterPikmins(0);
		section->clearHeap();

		transit(section, SGS_Select, nullptr);
	}
}

/**
 * @note Address: 0x801529CC
 * @note Size: 0x3C
 */
void SingleGame::CaveDayEndState::draw(SingleGameSection* section, Graphics& gfx)
{
	section->BaseGameSection::doDraw(gfx);
	section->drawCaveScreen();
}

/**
 * @note Address: 0x80152A08
 * @note Size: 0x34
 */
void SingleGame::CaveDayEndState::cleanup(SingleGameSection* section) { gameSystem->setPause(false, "cavedayend", 3); }

/**
 * @note Address: 0x80152A3C
 * @note Size: 0xE0
 */
SingleGameSection::SingleGameSection(JKRHeap* heap)
    : BaseGameSection(heap)
    , mOpenMenuFlags(0)
{
	mPlayerMode       = 2;
	mCaveSaveCallback = new Delegate<Game::SingleGameSection>(this, saveCaveMore);
	newCaveOtakaraEarningsAndDrops();
}

/**
 * @note Address: 0x80152B1C
 * @note Size: 0x34
 */
void SingleGameSection::section_fadeout() { mCurrentState->on_section_fadeout(this); }

/**
 * @note Address: 0x80152B54
 * @note Size: 0xC
 */
void SingleGameSection::flow_goto_title() { mDoEnd = true; }

/**
 * @note Address: 0x80152B60
 * @note Size: 0x188
 */
void SingleGameSection::onInit()
{
	mIsGameStarted    = false;
	gameSystem->mMode = GSM_STORY_MODE;

	System::assert_fragmentation("SGS::onInit");

	mWeatherEfx   = nullptr;
	mIsExitingMap = false;
	clearCaveMenus();

	mUnusedFlag       = false;
	mLoadGameCallback = new Delegate<SingleGameSection>(this, setupFloatMemory);

	mFsm = new SingleGame::FSM;
	mFsm->init(this);
	mFsm->start(this, SingleGame::SGS_File, nullptr);

	System::assert_fragmentation("SGS::FSM");
	setupFixMemory();
	System::assert_fragmentation("SGS::setupFix");

	mDoEnd = false;

	Radar::mgr = new Radar::Mgr;
	disableTimer(DEMOTIMER_None);
}

/**
 * @note Address: 0x80152D1C
 * @note Size: 0xEC
 */
bool SingleGameSection::doUpdate()
{
	if (!mDoEnd) {
		mFsm->exec(this);

		if (!gameSystem->mIsFrozen && !gameSystem->paused()) {
			if (mTimerEnabled && moviePlayer->mDemoState == DEMOSTATE_Inactive && gameSystem->isFlag(GAMESYS_IsGameWorldActive)) {
				mTimer -= sys->mDeltaTime;

				if (mTimer < 0.0f) {
					mCurrentState->on_demo_timer(this, mTimerType);
				}
			}
		}
	}

	if (mDoEnd) {
		mIsMainActive = false;
	}

	return mIsMainActive;
}

/**
 * @note Address: 0x80152E0C
 * @note Size: 0x50
 */
void SingleGameSection::doDraw(Graphics& gfx)
{
	if (!mDoEnd) {
		SingleGame::State* state = mCurrentState;
		if (state) {
			state->draw(this, gfx);
		}
	}
}

/**
 * @note Address: 0x80152E5C
 * @note Size: 0x5C
 */
void SingleGameSection::on_setCamController(int)
{
	if (mWeatherEfx) {
		Navi* navi = naviMgr->getActiveNavi();
		if (navi) {
			mWeatherEfx->mPosition = navi->getSound_PosPtr();
		}
	}
}

/**
 * @note Address: 0x80152EB8
 * @note Size: 0x260
 */
void SingleGameSection::onSetSoundScene()
{
	if (mInCave) {
		PSGame::CaveFloorInfo info;
		int floor             = static_cast<RoomMapMgr*>(mapMgr)->mSublevel;
		info.mAlphaType       = static_cast<RoomMapMgr*>(mapMgr)->mFloorInfo->mParms.mFloorAlphaType;
		info.mBetaType        = static_cast<RoomMapMgr*>(mapMgr)->mFloorInfo->mParms.mFloorBetaType;
		info.mFloorNum        = floor;
		info.mCaveID.fullView = getCaveID();
		setDefaultPSSceneInfo(info);
		info.setStageFlag(PSGame::SceneInfo::SCENEFLAG_Unk0, PSGame::SceneInfo::SFBS_1);
		P2ASSERTLINE(1157, (int)mCurrentCourseInfo->mCourseIndex < 4);
		info.mSceneType = mCurrentCourseInfo->mCourseIndex + 1;
		PSMSetSceneInfo(info);
	} else {
		PSGame::SceneInfo info;
		setDefaultPSSceneInfo(info);
		info.setStageFlag(PSGame::SceneInfo::SCENEFLAG_Unk0, PSGame::SceneInfo::SFBS_1);
		int id = mCurrentCourseInfo->mCourseIndex;
		if (id >= 4) {
			info.mSceneType = PSGame::SceneInfo::COURSE_TUTORIAL;
		} else {
			if (id == 0 && gameSystem->mTimeMgr->mDayCount == 0) {
				info.mSceneType = PSGame::SceneInfo::COURSE_TUTORIALDAY1;
			} else {
				info.mSceneType = id + 1;
			}
		}
		PSMSetSceneInfo(info);
	}

	PSMGetSceneMgr()->mScenes->mChild->scene1stLoadSync();
	if (gameSystem->isStoryMode()) {
		PSSetCurCameraNo(0);
	}
}

/**
 * @note Address: 0x80153120
 * @note Size: 0x2A0
 */
void SingleGameSection::onSetupFloatMemory()
{
	if (!mInCave) {
		P2ASSERTLINE(1260, mCurrentCourseInfo);

		switch (mCurrentCourseInfo->mCourseIndex) {
		case 0: // Falling snow in Valley of Repose
			mWeatherEfx = new efx::TTutorialSnow;
			break;
		case 1: // Falling flowers in Awakening Wood
			mWeatherEfx = new efx::TForestSakura;
			break;
		case 3: // Falling leaves in Wistful Wild
			mWeatherEfx = new efx::TLastMomiji;
			break;
		default: // Nothing in Perplexing Pool
			mWeatherEfx = nullptr;
			break;
		}
	} else {
		Farm::farmMgr = nullptr;
	}

	if (!mInCave) {
		Stages::createMapMgr(mCurrentCourseInfo, nullptr);
		gameSystem->addObjectMgr(mapMgr);

		if (Farm::farmMgr) {
			gameSystem->addObjectMgr(Farm::farmMgr);
			BaseHIOSection::addGenNode(Farm::farmMgr);
		}
	}
}

/**
 * @note Address: 0x801533C0
 * @note Size: 0x50
 */
void SingleGameSection::onClearHeap()
{
	if (Farm::farmMgr) {
		Farm::farmMgr->del();
		gameSystem->detachObjectMgr(Farm::farmMgr);
		mWeatherEfx = nullptr;
	}
}

/**
 * @note Address: 0x80153410
 * @note Size: 0xC
 */
void SingleGameSection::onStartHeap() { mIsExitingMap = 0; }

/**
 * @note Address: 0x8015341C
 * @note Size: 0x44
 */
void SingleGameSection::gmOrimaDown(int naviID)
{
	if (mCurrentState) {
		mCurrentState->onOrimaDown(this, naviID);
	}
}

/**
 * @note Address: 0x80153464
 * @note Size: 0x4
 */
void SingleGameSection::gmPikminZero() { }

/**
 * @note Address: 0x80153468
 * @note Size: 0x20
 */
void SingleGameSection::enableTimer(f32 initialValue, u32 timerType)
{
	if (mTimerType != 0) {
		return;
	}
	mTimerType    = timerType;
	mTimer        = initialValue;
	mTimerEnabled = true;
}

/**
 * @note Address: 0x80153488
 * @note Size: 0x80
 */
void SingleGameSection::disableTimer(u32 id)
{
	if (id == 0) {
		mTimerEnabled = false;
		mTimerType    = 0;
		return;
	}

	// Cutscene Timer Storage crash my beloved
	JUT_ASSERTLINE(1361, (mTimerType == 0 || id == mTimerType), "CurrTimer (%d) : disableTimer(%d)\n", mTimerType, id);
	mTimerEnabled = false;
	mTimerType    = 0;
}

/**
 * @note Address: 0x80153508
 * @note Size: 0x54
 */
void SingleGameSection::onMovieStart(Game::MovieConfig* config, u32 unused, u32 naviID)
{
	if (mCurrentState) {
		mCurrentState->onMovieStart(this, config, unused, naviID);
	}
}

/**
 * @note Address: 0x80153560
 * @note Size: 0x64
 */
void SingleGameSection::onMovieDone(Game::MovieConfig* config, u32 p2, u32 p3)
{
	gameSystem->resetFlag(GAMESYS_DisablePause);
	if (mCurrentState) {
		mCurrentState->onMovieDone(this, config, p2, p3);
	}
}

/**
 * @note Address: 0x801535C8
 * @note Size: 0x5C
 */
void SingleGameSection::onMovieCommand(int p1)
{
	BaseGameSection::onMovieCommand(p1);
	if (mCurrentState) {
		mCurrentState->onMovieCommand(this, p1);
	}
}

/**
 * @note Address: 0x80153628
 * @note Size: 0x240
 */
void SingleGameSection::playMovie_bootup(Onyon* onyon)
{
	// Entirely unused function, leftover from booting onions

	switch (onyon->mOnyonType) {
	case ONYON_TYPE_RED: {
		MoviePlayArg arg("g02_boot_onyonR", nullptr, mMovieFinishCallback, 0);
		arg.mOrigin = onyon->getPosition();
		arg.mAngle  = onyon->getFaceDir();
		moviePlayer->play(arg);
		playData->setBootContainer(onyon->mOnyonType);
		break;
	}
	case ONYON_TYPE_YELLOW: {
		MoviePlayArg arg("g1E_boot_onyonY", nullptr, mMovieFinishCallback, 0);
		arg.mOrigin = onyon->getPosition();
		arg.mAngle  = onyon->getFaceDir();
		moviePlayer->play(arg);
		playData->setBootContainer(onyon->mOnyonType);
		break;
	}
	case ONYON_TYPE_BLUE: {
		MoviePlayArg arg("g20_boot_onyonB", nullptr, mMovieFinishCallback, 0);
		arg.mOrigin = onyon->getPosition();
		arg.mAngle  = onyon->getFaceDir();
		moviePlayer->play(arg);
		playData->setBootContainer(onyon->mOnyonType);
		break;
	}
	}
}

/**
 * @note Address: 0x80153870
 * @note Size: 0x454
 */
void SingleGameSection::playMovie_helloPikmin(Piki* piki)
{
	switch (piki->mPikiKind) {
	case Red: {
		MoviePlayArg arg("g03_meet_redpikmin", nullptr, mMovieFinishCallback, 0);
		Onyon* onyon = ItemOnyon::mgr->getOnyon(ONYON_TYPE_RED);
		JUT_ASSERTLINE(1481, onyon, "No RED ONYON");
		arg.mOrigin                = onyon->getPosition();
		arg.mAngle                 = onyon->getFaceDir();
		moviePlayer->mTargetObject = piki;
		moviePlayer->play(arg);
		playData->setMeetPikmin(piki->mPikiKind);
		playData->setContainer(piki->mPikiKind);
		disableTimer(1);
		break;
	}
	case Yellow: {
		MoviePlayArg arg("g1F_meet_yellowpikmin", nullptr, mMovieFinishCallback, 0);
		arg.mOrigin                = piki->getPosition();
		arg.mAngle                 = piki->getFaceDir();
		moviePlayer->mTargetObject = piki;
		moviePlayer->play(arg);
		playData->setMeetPikmin(piki->mPikiKind);
		playData->setContainer(piki->mPikiKind);
		break;
	}
	case Blue: {
		MoviePlayArg arg("g21_meet_bluepikmin", nullptr, mMovieFinishCallback, 0);
		arg.mOrigin                = piki->getPosition();
		arg.mAngle                 = piki->getFaceDir();
		moviePlayer->mTargetObject = piki;
		moviePlayer->play(arg);
		playData->setMeetPikmin(piki->mPikiKind);
		playData->setContainer(piki->mPikiKind);
		break;
	}
	case Purple: {
		MoviePlayArg arg("g24_meet_blackpikmin", nullptr, mMovieFinishCallback, 0);
		arg.mOrigin                = piki->getPosition();
		arg.mAngle                 = piki->getFaceDir();
		moviePlayer->mTargetObject = piki;
		moviePlayer->play(arg);
		playData->setMeetPikmin(piki->mPikiKind);
		playData->setContainer(piki->mPikiKind);
		break;
	}
	case White: {
		MoviePlayArg arg("g27_meet_whitepikmin", nullptr, mMovieFinishCallback, 0);
		arg.mOrigin                = piki->getPosition();
		arg.mAngle                 = piki->getFaceDir();
		moviePlayer->mTargetObject = piki;
		moviePlayer->play(arg);
		playData->setMeetPikmin(piki->mPikiKind);
		playData->setContainer(piki->mPikiKind);
		break;
	}
	}
}

/**
 * @note Address: 0x80153CC4
 * @note Size: 0x4
 */
void SingleGameSection::playMovie_firstexperience(int, Game::Creature*) { }

/**
 * @note Address: 0x80153CC8
 * @note Size: 0x2A0
 */
void SingleGameSection::saveMainMapSituation(bool isSubmergedCastle)
{
	if (isSubmergedCastle) {
		Iterator<Piki> iterator(pikiMgr, 0, nullptr);
		iterator.first();
		while (!iterator.isDone()) {
			Piki* piki = (*iterator);
			if (piki->isAlive() && piki->getKind() != Blue) {
				playData->mPikiContainer.getCount(piki->getKind(), piki->getHappa())++;
				PikiKillArg killArg(CKILL_DontCountAsDeath | CKILL_Unk17);
				piki->kill(&killArg);
			}
			iterator.next();
		}
	}
	pikiMgr->caveSaveFormationPikmins(false);
	pikiMgr->forceEnterPikmins(1);
	playData->mCaveSaveData.mTime = gameSystem->mTimeMgr->mCurrentTimeOfDay;
	saveToGeneratorCache(mCurrentCourseInfo);
}

/**
 * @note Address: 0x80153F68
 * @note Size: 0x30
 */
void SingleGameSection::loadMainMapSituation() { gameSystem->mTimeMgr->setTime(playData->mCaveSaveData.mTime); }

/**
 * @note Address: 0x80153F98
 * @note Size: 0x18
 */
void SingleGameSection::clearCaveMenus()
{
	mOpenMenuFlags = 0;
	mCurrentCave   = nullptr;
	mHole          = nullptr;
	mFountain      = nullptr;
}

/**
 * @note Address: 0x80153FB0
 * @note Size: 0x418
 */
void SingleGameSection::openCaveInMenu(ItemCave::Item* cave, int naviID)
{
	u32 id    = cave->mCaveID.getID();
	bool isSC = false;
	if (id == 'y_04') {
		isSC = true;
	}

	if (!mIsExitingMap && !(mOpenMenuFlags & 1)) {
		mCaveIndex = id;
		og::Screen::DispMemberAnaDemo disp;
		disp.mUnusedValue    = 0;
		disp.mCaveOtakaraNum = cave->getCaveOtakaraNum();
		disp.mCaveOtakaraMax = cave->getCaveOtakaraMax();
		disp.mPayedDebt      = playData->mStoryFlags & STORY_DebtPaid;
		disp.mPikisField     = GameStat::getMapPikmins(AllPikminCalcs) - GameStat::getZikatuPikmins(AllPikminCalcs);

		int enteringPikiCount = 0;
		Iterator<Piki> iterator(pikiMgr);
		CI_LOOP(iterator)
		{
			Piki* piki = *iterator;
			piki->resetFPFlag(FPFLAGS_PikiEnteringCave);
			if (piki->isAlive() && piki->getCurrActionID() == PikiAI::ACT_Formation) {
				int state = piki->getStateID();
				if (state != PIKISTATE_Flying && state != PIKISTATE_HipDrop && piki->mNavi && naviID == piki->mNavi->mNaviIndex
				    && (!isSC || piki->getKind() == Blue)) {
					enteringPikiCount++;
					piki->setFPFlag(FPFLAGS_PikiEnteringCave);
				}
			}
		}
		disp.mPikis  = enteringPikiCount;
		disp.mCaveID = mCaveIndex;
		if (Screen::gGame2DMgr->open_CaveInMenu(disp)) {
			playData->setSaveFlag(3, nullptr);
			playData->setCurrentCourse(getCurrentCourseInfo()->mCourseIndex);
			playData->setCurrentCave(cave->mCaveID, 0);
			getCurrentCourseInfo()->getCaveinfoFilename_FromID(cave->mCaveID);
			mCurrentCave = cave;
			mOpenMenuFlags |= 1;
			gameSystem->setPause(true, "open_caveIn", 3);
			gameSystem->setMoviePause(true, "open_caveIn");
		}
	}
}

/**
 * @note Address: 0x801543D0
 * @note Size: 0x19C
 */
void SingleGameSection::openCaveMoreMenu(ItemHole::Item* hole, Controller* input)
{
	if (!mIsExitingMap && !(mOpenMenuFlags & 2)) {
		og::Screen::DispMemberCaveMore disp;
		disp.mCaveID = mCaveIndex;
		int pikis    = GameStat::mePikis;
		if (pikis > 0) {
			disp.mPikiInDanger = true;
			if (pikis == GameStat::getMapPikmins(AllPikminCalcs)) {
				disp.mCantProceed = true;
			} else {
				disp.mCantProceed = false;
			}

		} else {
			disp.mCantProceed  = false;
			disp.mPikiInDanger = false;
		}

		if (Screen::gGame2DMgr->open_CaveMoreMenu(disp)) {
			playData->setSaveFlag(3, nullptr);
			mHole = hole;
			mOpenMenuFlags |= 2;
			gameSystem->setPause(true, "openCaveMore", 3);
			gameSystem->setMoviePause(true, "openCaveMore");
		}
	}
}

/**
 * @note Address: 0x8015456C
 * @note Size: 0x2C
 */
void SingleGameSection::saveCaveMore() { pikiMgr->caveSaveAllPikmins(false, false); }

/**
 * @note Address: 0x80154598
 * @note Size: 0x184
 */
void SingleGameSection::openKanketuMenu(ItemBigFountain::Item* geyser, Controller*)
{
	if (!mIsExitingMap && !(mOpenMenuFlags & 4)) {
		og::Screen::DispMemberKanketuMenu disp;
		int pikis = GameStat::mePikis;
		if (pikis > 0) {
			disp.mPikiInDanger = true;
			if (pikis == GameStat::getMapPikmins(AllPikminCalcs)) {
				disp.mCantProceed = true;
			} else {
				disp.mCantProceed = false;
			}

		} else {
			disp.mCantProceed  = false;
			disp.mPikiInDanger = false;
		}

		if (Screen::gGame2DMgr->open_KanketuMenu(disp)) {
			mFountain = geyser;
			mOpenMenuFlags |= 4;
			gameSystem->setPause(true, "openKanketu", 3);
			gameSystem->setMoviePause(true, "openKanketu");
		}
	}
}

/**
 * @note Address: 0x8015471C
 * @note Size: 0x300
 */
bool SingleGameSection::updateCaveMenus()
{
	u32 flag = mOpenMenuFlags;
	if (flag & 1) {
		switch (Screen::gGame2DMgr->check_CaveInMenu()) {
		case Screen::Game2DMgr::CHECK2D_CaveInMenu_MenuOpen:
			break;
		case Screen::Game2DMgr::CHECK2D_CaveInMenu_Confirm:
			playData->mNaviLifeMax[NAVIID_Olimar] = naviMgr->mNaviParms->mNaviParms.mMaxHealth;
			playData->mNaviLifeMax[NAVIID_Louie]  = naviMgr->mNaviParms->mNaviParms.mMaxHealth;
			gameSystem->setPause(false, "cave-yes", 3);
			gameSystem->setMoviePause(false, "cave-yes");
			mOpenMenuFlags &= ~1;
			goCave(mCurrentCave);
			return true;
		case Screen::Game2DMgr::CHECK2D_CaveInMenu_Cancel:
			gameSystem->setPause(false, "cave-no", 3);
			gameSystem->setMoviePause(false, "cave-no");
			mOpenMenuFlags &= ~1;
			break;
		case Screen::Game2DMgr::CHECK2D_CaveInMenu_Unused:
			gameSystem->setMoviePause(false, "cave-zenkai");
			break;
		}
	} else if (flag & 2) {
		switch (Screen::gGame2DMgr->check_CaveMoreMenu()) {
		case Screen::Game2DMgr::CHECK2D_CaveMoreMenu_MenuOpen:
			break;
		case Screen::Game2DMgr::CHECK2D_CaveMoreMenu_Confirm:
			playData->mNaviLifeMax[NAVIID_Olimar] = naviMgr->getAt(NAVIID_Olimar)->mHealth;
			playData->mNaviLifeMax[NAVIID_Louie]  = naviMgr->getAt(NAVIID_Louie)->mHealth;
			gameSystem->setPause(false, "more-yes", 3);
			gameSystem->setMoviePause(false, "more-yes");
			mOpenMenuFlags &= ~2;
			goNextFloor(mHole);
			return true;
		case Screen::Game2DMgr::CHECK2D_CaveMoreMenu_Cancel:
			gameSystem->setPause(false, "more-no", 3);
			gameSystem->setMoviePause(false, "more-no");
			mOpenMenuFlags &= ~2;
			break;
		case Screen::Game2DMgr::CHECK2D_CaveMoreMenu_Unused:
			gameSystem->setMoviePause(false, "more-zenkai");
			break;
		}
	} else if (flag & 4) {
		switch (Screen::gGame2DMgr->check_KanketuMenu()) {
		case Screen::Game2DMgr::CHECK2D_KanketuMenu_Confirm:
			gameSystem->setPause(false, "kank-yes", 3);
			gameSystem->setMoviePause(false, "kank-yes");
			mOpenMenuFlags &= ~4;
			goMainMap(mFountain);
			return true;
		case Screen::Game2DMgr::CHECK2D_KanketuMenu_MenuOpen:
		case Screen::Game2DMgr::CHECK2D_KanketuMenu_Unused:
			break;
		case Screen::Game2DMgr::CHECK2D_KanketuMenu_Cancel:
			gameSystem->setPause(false, "kank-no", 3);
			gameSystem->setMoviePause(false, "kank-no");
			mOpenMenuFlags &= ~4;
			break;
		}
	}
	return false;
}

/**
 * @note Address: 0x80154A1C
 * @note Size: 0x40
 */
void SingleGameSection::goNextFloor(ItemHole::Item* hole)
{
	mIsExitingMap = true;
	mCurrentState->onNextFloor(this, hole);
}

/**
 * @note Address: 0x80154A60
 * @note Size: 0x74
 */
void SingleGameSection::goCave(ItemCave::Item* cave)
{
	strcpy(mCaveFilename, cave->mCaveFilename);
	mCaveID.setID(cave->mCaveID.getID());
	mIsExitingMap = true;
	mInCave       = true;
	mCurrentState->onHoleIn(this, cave);
}

/**
 * @note Address: 0x80154AD8
 * @note Size: 0x48
 */
void SingleGameSection::goMainMap(ItemBigFountain::Item* fountain)
{
	mIsExitingMap = true;
	mInCave       = false;
	mCurrentState->onFountainReturn(this, fountain);
}

/**
 * @note Address: 0x80154B24
 * @note Size: 0x20
 */
void SingleGameSection::setupMainMapGames() { createFallPikmins(); }

/**
 * @note Address: 0x80154B44
 * @note Size: 0x20
 */
void SingleGameSection::setupCaveGames() { createFallPikmins(); }

/**
 * @note Address: 0x80154B64
 * @note Size: 0x474
 */
void SingleGameSection::createFallPikmins()
{
	Vector3f origin;
	mapMgr->getStartPosition(origin, 0);
	playData->mCaveSaveData.mCavePikis.dump("createFallPikmins");
	Navi* navi = naviMgr->getAliveOrima(ALIVEORIMA_Active);
	if (navi) {
		origin = navi->getPosition();
	}
	origin.y = mapMgr->getMinY(origin);
	naviMgr->getDeadOrima(0);

	for (int color = 0; color < PikiColorCount; color++) {
		for (int happa = 0; happa < 3; happa++) {
			for (int i = 0; i < playData->mCaveSaveData.mCavePikis.getCount(color, happa); i++) {
				f32 randDist   = 15.0f + 40.0f * randFloat();
				f32 randAngle  = TAU * randFloat();
				f32 randHeight = 770.0f + (850.0f + 120.0f * randFloat());

				Vector3f randpos = Vector3f(randDist * sinf(randAngle), randHeight, randDist * cosf(randAngle));

				PikiMgr::mBirthMode = PikiMgr::PSM_Replace;
				Piki* piki          = pikiMgr->birth();
				PikiMgr::mBirthMode = PikiMgr::PSM_Normal;
				randpos += origin;
				if (piki) {
					PikiInitArg arg(PIKISTATE_Tane);
					piki->init(&arg);
					piki->setPosition(randpos, false);
					piki->mFaceDir = randFloat() * TAU;
					piki->changeShape(color);
					piki->changeHappa(happa);
					Vector3f velocity(0.0f, -(randFloat() * 150.0f + 2700.0f), 0.0f);
					piki->setVelocity(velocity);
					piki->movie_begin(false);
				} else {
					playData->mPikiContainer.getCount(color, happa)++;
				}
			}
		}
	}
	playData->mCaveSaveData.mCavePikis.clear();
}

// /**
//  * @note Address: N/A
//  * @note Size: 0x440
//  */
// void SingleGameSection::createFallPikmins(Game::PikiContainer&, int)
// {
// 	// UNUSED FUNCTION
// }

/**
 * @note Address: 0x80154FD8
 * @note Size: 0x504
 */
void SingleGameSection::setDispMemberSMenu(og::Screen::DispMemberSMenuAll& disp)
{
	// General data
	Navi* navi = naviMgr->getActiveNavi();
	int id     = NAVIID_Olimar;
	if (navi) {
		id = navi->mNaviIndex;
	}
	if (gameSystem->mTimeMgr->mDayCount == 0) {
		disp.mIsDay1 = true;
	}

	// what even is this
	disp.mSMenuMap.mDataMap.mNapsackDetectorFlags
	    = OlimarData::getDetectorFlags(playData->mOlimarData[0].hasItem(OlimarData::ODII_PrototypeDetector),
	                                   playData->mOlimarData[0].hasItem(OlimarData::ODII_FiveManNapsack));

	// Map screen data
	disp.mSMenuMap.mDataMap.mOnyonPikminCounts[og::Screen::MAPPIKI_Red]    = playData->mPikiContainer.getColorSum(Red);
	disp.mSMenuMap.mDataMap.mOnyonPikminCounts[og::Screen::MAPPIKI_Yellow] = playData->mPikiContainer.getColorSum(Yellow);
	disp.mSMenuMap.mDataMap.mOnyonPikminCounts[og::Screen::MAPPIKI_Blue]   = playData->mPikiContainer.getColorSum(Blue);
	disp.mSMenuMap.mDataMap.mOnyonPikminCounts[og::Screen::MAPPIKI_White]  = playData->mPikiContainer.getColorSum(White);
	disp.mSMenuMap.mDataMap.mOnyonPikminCounts[og::Screen::MAPPIKI_Purple] = playData->mPikiContainer.getColorSum(Purple);

	disp.mSMenuMap.mDataMap.mCurrentPikminCounts[og::Screen::MAPPIKI_Red]    = GameStat::formationPikis.getCount(id, Red);
	disp.mSMenuMap.mDataMap.mCurrentPikminCounts[og::Screen::MAPPIKI_Yellow] = GameStat::formationPikis.getCount(id, Yellow);
	disp.mSMenuMap.mDataMap.mCurrentPikminCounts[og::Screen::MAPPIKI_Blue]   = GameStat::formationPikis.getCount(id, Blue);
	disp.mSMenuMap.mDataMap.mCurrentPikminCounts[og::Screen::MAPPIKI_White]  = GameStat::formationPikis.getCount(id, White);
	disp.mSMenuMap.mDataMap.mCurrentPikminCounts[og::Screen::MAPPIKI_Purple] = GameStat::formationPikis.getCount(id, Purple);

	int form                            = GameStat::formationPikis;
	int work                            = GameStat::workPikis;
	int alive                           = GameStat::alivePikis;
	disp.mSMenuMap.mDataMap.mFreePikmin = alive - form - work;
	disp.mSMenuMap.mDataMap.mPokos      = _aiConstants->mDebt.mData - playData->mPokoCount;
	disp.mSMenuMap.mInCave              = gameSystem->mIsInCave;
	disp.mSMenuMap.mActiveNavi          = gameSystem->mIsInCave == 0; // ?
	disp.mSMenuMap.mUnlockedReds        = playData->hasContainer(Red);
	disp.mSMenuMap.mUnlockedYellows     = playData->hasContainer(Yellow);
	disp.mSMenuMap.mUnlockedBlues       = playData->hasContainer(Blue);
	disp.mSMenuMap.mUnlockedWhites      = playData->hasContainer(White);
	disp.mSMenuMap.mUnlockedPurples     = playData->hasContainer(Purple);
	disp.mSMenuMap.mCurrentCave         = mCaveIndex;
	disp.mSMenuMap.mCourseIndex         = mCurrentCourseInfo->mCourseIndex;

	// Items screen data
	disp.mSMenuItem.mBitterSprayCount = playData->getDopeCount(SPRAY_TYPE_BITTER);
	disp.mSMenuItem.mBitterBerryCount = playData->getDopeFruitCount(SPRAY_TYPE_BITTER);
	disp.mSMenuItem.mSpicySprayCount  = playData->getDopeCount(SPRAY_TYPE_SPICY);
	disp.mSMenuItem.mSpicyBerryCount  = playData->getDopeFruitCount(SPRAY_TYPE_SPICY);
	for (int i = 0; i < OlimarData::ODII_FIRST_NON_EXPLORATION_KIT_ITEM; i++) {
		disp.mSMenuItem.mExplorationKitInventory[i] = playData->mOlimarData[0].hasItem(i);
	}

	// Pause Screen
	disp.mSMenuPause.mDebtRemaining        = _aiConstants->mDebt.mData - playData->mPokoCount;
	disp.mSMenuPause.mPokoCount            = playData->mPokoCount;
	disp.mSMenuPauseDoukutu.mCavePokos     = playData->mCavePokoCount;
	disp.mSMenuPauseDoukutu.mPikisInDanger = GameStat::mePikis != 0;

	disp.mSMenuItem.mIsBitterUnlocked = playData->isDemoFlag(DEMO_First_Bitter_Spray_Made);
	disp.mSMenuItem.mIsSpicyUnlocked  = playData->isDemoFlag(DEMO_First_Spicy_Spray_Made);
}

/**
 * @note Address: N/A
 * @note Size: 0xE0
 */
void SingleGameSection::setDispMemberNavi(og::Screen::DataNavi& data, int naviID)
{
	data.mFollowPikis   = GameStat::formationPikis.mCounter[naviID];
	data.mDope1Count    = playData->getDopeCount(SPRAY_TYPE_BITTER);
	data.mDope0Count    = playData->getDopeCount(SPRAY_TYPE_SPICY);
	Navi* navi          = naviMgr->getAt(naviID);
	data.mNaviLifeRatio = navi->getLifeRatio();
	data.mNextThrowPiki = navi->ogGetNextThrowPiki();
}

/**
 * @note Address: N/A
 * @note Size: 0x148
 */
Radar::Mgr::RadarSearchResult SingleGameSection::calcOtakaraLevel(f32& treasureDistance)
{
	Navi* navi = naviMgr->getActiveNavi();

	Radar::Mgr::RadarSearchResult treasureSearchResult = Radar::Mgr::NOT_PROCESSED;
	treasureDistance                                   = 900.0f;

	if (navi) {
		Vector3f playerPosition = navi->getPosition();
		Vector3f treasurePosition;
		treasureSearchResult = Radar::mgr->calcNearestTreasure(playerPosition, 900.0f, treasurePosition, treasureDistance);

		if (treasureSearchResult == Radar::Mgr::CLOSEST_TREASURE_FOUND) {
			// If the distance is within the range (0 - 900.0f)
			if (!(1.0f - (treasureDistance / 900.0f) < 0.0f)) {
				return treasureSearchResult; // Return 2
			} else {
				P2DEBUG("stuff");
			}
		} else if (treasureSearchResult == Radar::Mgr::TREASURE_FOUND) {
			rand();
		}
	}

	return treasureSearchResult;
}

/**
 * @note Address: 0x801554EC
 * @note Size: 0x58C
 */
void SingleGameSection::updateMainMapScreen()
{
	og::Screen::DispMemberGround disp;

	f32 treasureDistance;
	Radar::Mgr::RadarSearchResult treasureSearchResult = calcOtakaraLevel(treasureDistance);

	bool flag          = false;
	disp.mTreasureDist = treasureDistance;
	disp.mRadarState   = treasureSearchResult;
	if (!mNeedTreasureCalc && treasureSearchResult == Radar::Mgr::NO_TREASURE_FOUND && Screen::gGame2DMgr->is_GameGround()) {
		flag              = true;
		mNeedTreasureCalc = true;
	}
	if (!mTreasureRadarActive && treasureSearchResult == Radar::Mgr::NO_TREASURE_FOUND) {
		mTreasureRadarActive = true;
	}

	if (mTreasureRadarActive && treasureSearchResult != Radar::Mgr::NO_TREASURE_FOUND
	    && treasureSearchResult != Radar::Mgr::NOT_PROCESSED) {
		mTreasureRadarActive = false;
		mNeedTreasureCalc    = false;
	}

	disp.mRadarEnabled       = mTreasureRadarActive;
	disp.mAllTreasuresGotten = flag;
	disp.mHasRadar           = playData->mOlimarData[0].hasItem(OlimarData::ODII_PrototypeDetector);
	disp.mIsNotDay1          = gameSystem->mTimeMgr->mDayCount;

	disp.mDataGame.mMapPikminCount   = GameStat::getMapPikmins(AllPikminCalcs) - GameStat::getZikatuPikmins(AllPikminCalcs);
	disp.mDataGame.mTotalPikminCount = GameStat::getAllPikmins(AllPikminCalcs) - GameStat::getZikatuPikmins(AllPikminCalcs);
	disp.mDataGame.mDayNum           = gameSystem->mTimeMgr->mDayCount + 1;
	disp.mDataGame.mSunGaugeRatio    = gameSystem->mTimeMgr->getSunGaugeRatio();
	disp.mDataGame.mPokoCount        = playData->mPokoCount;

	bool bitter = playData->isDemoFlag(DEMO_First_Bitter_Spray_Made);
	bool spicy  = playData->isDemoFlag(DEMO_First_Spicy_Spray_Made);

	// somethings wrong with spicy/bitter here
	if (playData->isDemoFlag(DEMO_BITTER_ENABLED)) {
		disp.mUnlockedSpicy = true;
	} else {
		disp.mUnlockedSpicy = false;
	}
	if (playData->isDemoFlag(DEMO_SPICY_ENABLED)) {
		disp.mUnlockedBitter = true;
	} else {
		disp.mUnlockedBitter = false;
	}

	if (Screen::gGame2DMgr->is_GameGround() && moviePlayer->mDemoState == DEMOSTATE_Inactive && bitter
	    && !playData->isDemoFlag(DEMO_BITTER_ENABLED)) {
		playData->setDemoFlag(DEMO_BITTER_ENABLED);
		disp.mHasBitter = true;
	} else {
		disp.mHasBitter = false;
	}

	if (Screen::gGame2DMgr->is_GameGround() && moviePlayer->mDemoState == DEMOSTATE_Inactive && spicy
	    && !playData->isDemoFlag(DEMO_SPICY_ENABLED)) {
		playData->setDemoFlag(DEMO_SPICY_ENABLED);
		disp.mHasSpicy = true;
	} else {
		disp.mHasSpicy = false;
	}

	if (playData->mStoryFlags & STORY_DebtPaid) {
		disp.mPayDebt = true;
	}

	Navi* navi = naviMgr->getActiveNavi();
	int id     = NAVIID_Multiplayer;
	if (navi) {
		id = navi->mNaviIndex;
	}

	setDispMemberNavi(disp.mOlimarData, NAVIID_Olimar);

	if (id == NAVIID_Olimar) {
		disp.mOlimarData.mActiveNaviID = TRUE;
		disp.mLouieData.mActiveNaviID  = FALSE;
	} else if (id == NAVIID_Louie) {
		disp.mOlimarData.mActiveNaviID = FALSE;
		disp.mLouieData.mActiveNaviID  = TRUE;
	} else if (mPrevNaviIdx == NAVIID_Olimar) {
		disp.mOlimarData.mActiveNaviID = FALSE;
		disp.mLouieData.mActiveNaviID  = TRUE;
	} else {
		disp.mOlimarData.mActiveNaviID = TRUE;
		disp.mLouieData.mActiveNaviID  = FALSE;
	}

	setDispMemberNavi(disp.mLouieData, NAVIID_Louie);

	Screen::gGame2DMgr->setDispMember(&disp);
}

/**
 * @note Address: 0x80155A78
 * @note Size: 0x4
 */
void SingleGameSection::drawMainMapScreen() { }

/**
 * @note Address: 0x80155A7C
 * @note Size: 0x4D8
 */
void SingleGameSection::updateCaveScreen()
{
	og::Screen::DispMemberCave disp;

	f32 dist;
	int otastate = calcOtakaraLevel(dist);

	bool flag          = false;
	disp.mTreasureDist = dist;
	disp.mRadarState   = otastate;
	if (!mNeedTreasureCalc && otastate == 0 && Screen::gGame2DMgr->is_GameCave()) {
		flag              = true;
		mNeedTreasureCalc = true;
	}
	if (!mTreasureRadarActive && otastate == 0) {
		mTreasureRadarActive = true;
	}

	if (mTreasureRadarActive && otastate != 0 && otastate != 5) {
		mTreasureRadarActive = false;
		mNeedTreasureCalc    = false;
	}

	disp.mRadarEnabled      = mTreasureRadarActive;
	disp.mAllTreasureGotten = flag;

	if (Screen::gGame2DMgr->is_GameCave() && moviePlayer->mDemoState == DEMOSTATE_Inactive) {
		disp.mAppearRadar = false;
		if (!playData->isDemoFlag(DEMO_RADAR_ENABLED) && playData->mOlimarData[0].hasItem(OlimarData::ODII_PrototypeDetector)) {
			playData->setDemoFlag(DEMO_RADAR_ENABLED);
			disp.mAppearRadar = true;
		}
	}

	bool draw = false;
	if (playData->mOlimarData[0].hasItem(OlimarData::ODII_PrototypeDetector) && playData->isDemoFlag(DEMO_RADAR_ENABLED)) {
		draw = true;
	}
	disp.mDrawSensor = draw;

	disp.mDataGame.mFloorNum         = getCurrFloor() + 1;
	disp.mIsBitterUnlocked           = playData->isDemoFlag(DEMO_First_Bitter_Spray_Made);
	disp.mIsSpicyUnlocked            = playData->isDemoFlag(DEMO_First_Spicy_Spray_Made);
	disp.mIsFinalFloor               = (static_cast<RoomMapMgr*>(mapMgr)->mCaveInfo->getFloorMax() == disp.mDataGame.mFloorNum);
	disp.mDataGame.mMapPikminCount   = GameStat::getMapPikmins(AllPikminCalcs);
	disp.mDataGame.mTotalPikminCount = GameStat::getAllPikmins(AllPikminCalcs);
	disp.mDataGame.mDayNum           = gameSystem->mTimeMgr->mDayCount + 1;
	disp.mDataGame.mSunGaugeRatio    = gameSystem->mTimeMgr->getSunGaugeRatio();

	disp.mDataGame.mPokoCount = playData->getPokoCount() + playData->getCavePokoCount();

	if (playData->mStoryFlags & STORY_DebtPaid) {
		disp.mPayDebt = true;
	}

	Navi* navi = naviMgr->getActiveNavi();
	int id     = NAVIID_Multiplayer;
	if (navi) {
		id = navi->mNaviIndex;
	}

	setDispMemberNavi(disp.mOlimarData, NAVIID_Olimar);

	if (id == NAVIID_Olimar) {
		disp.mOlimarData.mActiveNaviID = TRUE;
		disp.mLouieData.mActiveNaviID  = FALSE;
	} else if (id == NAVIID_Louie) {
		disp.mOlimarData.mActiveNaviID = FALSE;
		disp.mLouieData.mActiveNaviID  = TRUE;
	} else if (mPrevNaviIdx == NAVIID_Olimar) {
		disp.mOlimarData.mActiveNaviID = FALSE;
		disp.mLouieData.mActiveNaviID  = TRUE;
	} else {
		disp.mOlimarData.mActiveNaviID = TRUE;
		disp.mLouieData.mActiveNaviID  = FALSE;
	}

	setDispMemberNavi(disp.mLouieData, NAVIID_Louie);

	Screen::gGame2DMgr->setDispMember(&disp);
}

/**
 * @note Address: 0x80155F5C
 * @note Size: 0x4
 */
void SingleGameSection::drawCaveScreen() { }

/**
 * @note Address: 0x80155F60
 * @note Size: 0x8C
 */
void SingleGameSection::newCaveOtakaraEarningsAndDrops()
{
	int otakaraCount = PelletList::Mgr::getCount(PelletList::PLK_Otakara);
	int itemCount    = PelletList::Mgr::getCount(PelletList::PLK_Item);
	mCaveTreasureCounter.alloc(otakaraCount);
	mCaveUpgradeCounter.alloc(itemCount);
	mOtakaraCounter.alloc(otakaraCount);
	mItemCounter.alloc(itemCount);
	mDoTrackCarcass = 0;
}

/**
 * @note Address: 0x80155FEC
 * @note Size: 0x50
 */
void SingleGameSection::clearCaveOtakaraEarningsAndDrops()
{
	mCaveTreasureCounter.clear();
	mCaveUpgradeCounter.clear();
	mOtakaraCounter.clear();
	mItemCounter.clear();
	mDoTrackCarcass = 0;
}

} // namespace Game
