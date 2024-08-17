#include "Dolphin/rand.h"
#include "efx/TEnemyApsmoke.h"
#include "Game/Cave/RandMapMgr.h"
#include "Game/Entities/ItemOnyon.h"
#include "Game/Entities/PelletOtakara.h"
#include "Game/Farm.h"
#include "Game/GameConfig.h"
#include "Game/gameGenerator.h"
#include "Game/gameGeneratorCache.h"
#include "Game/GameMessage.h"
#include "Game/gamePlayData.h"
#include "Game/gameStages.h"
#include "Game/gameStat.h"
#include "Game/GameSystem.h"
#include "Game/MoviePlayer.h"
#include "Game/Navi.h"
#include "Game/NaviParms.h"
#include "Game/PikiMgr.h"
#include "Game/rumble.h"
#include "Game/shadowMgr.h"
#include "Game/SingleGame.h"
#include "Game/TimeMgr.h"
#include "Game/VsGame.h"
#include "JSystem/JUtility/JUTGraphFifo.h"
#include "PSGame/PikScene.h"
#include "PSSystem/PSGame.h"
#include "Screen/Game2DMgr.h"
#include "Radar.h"
#include "utilityU.h"
#include "VsOtakaraName.h"
#include "nans.h"

namespace Game {
namespace VsGame {

static const char someVsArray[] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
static const char vsName[]      = "VsGameSection";

/**
 * @note Address: 0x801C0DF8
 * @note Size: 0xD0
 */
void FSM::init(VsGameSection* section)
{
	create(VGS_StateCount);
	registerState(new TitleState);
	registerState(new LoadState);
	registerState(new GameState);
	registerState(new VSState);
	registerState(new ResultState);
}

/**
 * @note Address: N/A
 * @note Size: 0x38
 * --UNUSED--
 */
void FSM::draw(VsGameSection* section, Graphics& gfx) { static_cast<State*>(mStates[0])->draw(section, gfx); }

/**
 * @note Address: 0x801C0ECC
 * @note Size: 0x20
 */
void FSM::transit(VsGameSection* section, int state, StateArg* arg) { StateMachine<VsGameSection>::transit(section, state, arg); }
} // namespace VsGame

int VsGameSection::mRedWinCount;
int VsGameSection::mBlueWinCount;
int VsGameSection::mDrawCount;

/**
 * @note Address: 0x801C0EEC
 * @note Size: 0xFC
 */

VsGameSection::VsGameSection(JKRHeap* heap, bool gameMode)
    : BaseGameSection(heap)
    , mMenuFlags(0)
{
	mIsVersusMode          = gameMode;
	mIsChallengePerfect    = true;
	mChallengeStageNum     = 0;
	mVsStageNum            = 0;
	mVsWinner              = -1;
	mLouieHandicap         = 2;
	mOlimarHandicap        = 2;
	mMarbleCountP2         = 0;
	mMarbleCountP1         = 0;
	mYellowMarbleCounts[1] = 0;
	mYellowMarbleCounts[0] = 0;
	mEditNumber            = -2;
	mVsFifo                = nullptr;

	if (gGameConfig.mParms.mVsFifo.mData > 0) {
		size_t size = gGameConfig.mParms.mVsFifo.mData * 1024;
		mVsFifo     = new VSFifo(size);
		mVsFifo->becomeCurrent();
		GXSetGPFifo(mVsFifo->mFifo);
	}
}

/**
 * @note Address: 0x801C0FE8
 * @note Size: 0xCC
 */
VsGameSection::~VsGameSection()
{
	if (mVsFifo) {
		GXSaveCPUFifo(mVsFifo->mFifo);
		while (VSFifo::isGPActive())
			;
		GXDrawDone();
		GXInitFifoPtrs(JUTGraphFifo::sCurrentFifo->mFifo, JUTGraphFifo::sCurrentFifo->mBase, JUTGraphFifo::sCurrentFifo->mBase);
		GXSetCPUFifo(JUTGraphFifo::sCurrentFifo->mFifo);
		GXSetGPFifo(JUTGraphFifo::sCurrentFifo->mFifo);
	}
}

} // namespace Game

/**
 * @note Address: 0x801C10B4
 * @note Size: 0x5C
 * TODO: should be weak
 */
bool VSFifo::isGPActive()
{
	GXGetGPStatus(&mGpStatus[0], &mGpStatus[1], &mGpStatus[2], &mGpStatus[3], &mGpStatus[4]);
	return !mGpStatus[2];
}

namespace Game {

/**
 * @note Address: 0x801C1110
 * @note Size: 0x34
 */
void VsGameSection::section_fadeout() { mCurrentState->on_section_fadeout(this); }

/**
 * @note Address: 0x801C1148
 * @note Size: 0x90
 */
void VsGameSection::startMainBgm()
{
	PSSystem::SceneMgr* sceneMgr = PSSystem::getSceneMgr();
	sceneMgr->checkScene();
	sceneMgr->mScenes->mChild->startMainSeq();
}

/**
 * @note Address: 0x801C11D8
 * @note Size: 0x20C
 */
void VsGameSection::onInit()
{
	mPikminRatio        = 0.0f;
	mPikminCountTimer   = 0.5f;
	mGhostIconTimers[1] = 0.0f;
	mGhostIconTimers[0] = 0.0f;

	clearGetDopeCount();
	clearGetCherryCount();

	if (mIsVersusMode) {
		gameSystem->mMode = GSM_VERSUS_MODE;
	} else {
		gameSystem->mMode = GSM_ONE_PLAYER_CHALLENGE;
	}

	gameSystem->mIsInCave = true;
	mUnusedFlag           = false;
	mHole                 = nullptr;
	mPokoCount            = 0;
	mIsMenuRunning        = false;

	sprintf(mCaveInfoFilename, "caveinfo.txt");
	sprintf(mEditFilename, "random");
	setupFixMemory();

	mChallengeStageList = new ChallengeGame::StageList();
	addGenNode(mChallengeStageList);
	mVsStageList = new VsGame::StageList();
	addGenNode(mVsStageList);
	loadChallengeStageList();
	loadVsStageList();

	mFsm = new VsGame::FSM();
	static_cast<VsGame::FSM*>(mFsm)->init(this);
	initPlayData();
	mFsm->start(this, VsGame::VGS_Title, nullptr);

	mCurrentFloor          = 0;
	mRedBlueYellowScore[1] = 0.0f;
	mRedBlueYellowScore[0] = 0.0f;
	mYellowScore[1]        = 0.0f;
	mYellowScore[0]        = 0.0f;
	mCherryScore[1]        = 0.0f;
	mCherryScore[0]        = 0.0f;
	mMaxCherryScore[1]     = 0.0f;
	mMaxCherryScore[0]     = 0.0f;
	mRedBlueScore[1]       = 0.0f;
	mRedBlueScore[0]       = 0.0f;
	mMarbleRedBlue[1]      = nullptr;
	mMarbleRedBlue[0]      = nullptr;

	Radar::mgr = new Radar::Mgr();

	for (int i = 0; i < 7; i++) {
		mMarbleYellow[i] = nullptr;
	}
}

/**
 * @note Address: 0x801C13E4
 * @note Size: 0x34
 */
// void StateMachine<VsGameSection>::start(VsGameSection* section, int stateID, StateArg* arg)
// {
// 	section->mCurrentState = nullptr;
// 	transit(section, stateID, arg);
// }

/**
 * @note Address: 0x801C1418
 * @note Size: 0x8
 */
int VsGameSection::getCurrFloor() { return mCurrentFloor; }

/**
 * @note Address: 0x801C1420
 * @note Size: 0x1B8
 */
bool VsGameSection::doUpdate()
{
	if (mIsMenuRunning) {
		mIsMainActive = false;
		return false;
	}

	mFsm->exec(this);

	if (gameSystem->isVersusMode()) {
		int redPikmins  = GameStat::getMapPikmins(Red) - (mOlimarHandicap - 3);
		int bluePikmins = GameStat::getMapPikmins(Blue) - (mLouieHandicap - 3);
		if (redPikmins < 0) {
			redPikmins = 1;
		}
		if (bluePikmins < 0) {
			bluePikmins = 1;
		}
		if (!redPikmins || !bluePikmins) {
			if (!redPikmins) {
				mPikminCountTimer = 1.0f;
			} else if (!bluePikmins) {
				mPikminCountTimer = 0.0f;
			}

		} else {
			if (bluePikmins > redPikmins) {
				mPikminRatio = (f32)bluePikmins / (f32)redPikmins;
			} else {
				mPikminRatio = (f32)redPikmins / (f32)bluePikmins;
			}

			mPikminCountTimer = log(mPikminRatio, 50.0);

			if (redPikmins < bluePikmins) {
				mPikminCountTimer = -mPikminCountTimer;
			}
		}
	}

	return mIsMainActive;
}

/**
 * @note Address: 0x801C15D8
 * @note Size: 0x3C
 */
void VsGameSection::pre2dDraw(Graphics& gfx)
{
	if (mCurrentState) {
		mCurrentState->pre2dDraw(gfx, this);
	}
}

/**
 * @note Address: 0x801C1618
 * @note Size: 0x50
 */
void VsGameSection::doDraw(Graphics& gfx)
{
	if (!mIsMenuRunning && mCurrentState) {
		mCurrentState->draw(this, gfx);
	}
}

/**
 * @note Address: 0x801C1668
 * @note Size: 0x1DC
 */
void VsGameSection::onSetSoundScene()
{
	PSGame::CaveFloorInfo floorInfo;

	if (gameSystem->isChallengeMode()) {
		floorInfo.mSceneType             = PSGame::SceneInfo::CHALLENGE_MODE;
		floorInfo.mFloorNum              = getCurrFloor();
		floorInfo.mChallengeModeStageNum = mChallengeStageNum;
	} else {
		floorInfo.mSceneType = PSGame::SceneInfo::TWO_PLAYER_BATTLE;
		floorInfo.mFloorNum  = mVsStageNum;
	}

	floorInfo.mAlphaType = static_cast<RoomMapMgr*>(mapMgr)->mFloorInfo->mParms.mFloorAlphaType.mValue;
	floorInfo.mBetaType  = 0; // hardcoded mBetaType to 0; ignores floorinfo f012 setting

	if (!gameSystem->isMultiplayerMode()) {
		floorInfo.setStageFlag(PSGame::SceneInfo::SCENEFLAG_Unk0, PSGame::SceneInfo::SFBS_1);
	} else {
		floorInfo.setStageFlag(PSGame::SceneInfo::SCENEFLAG_Unk1, PSGame::SceneInfo::SFBS_1);
	}

	setDefaultPSSceneInfo(floorInfo);
	PSSystem::SceneMgr* sceneMgr = PSSystem::getSceneMgr();
	static_cast<PSGame::PikSceneMgr*>(sceneMgr)->newAndSetCurrentScene(floorInfo);
	sceneMgr = PSSystem::getSceneMgr();
	sceneMgr->checkScene();
	sceneMgr->mScenes->mChild->scene1stLoadSync();
	naviMgr->createPSMDirectorUpdator();
}

/**
 * @note Address: 0x801C1844
 * @note Size: 0x5C
 */
void VsGameSection::initPlayData()
{
	playData->reset();
	playData->setDevelopSetting(true, true);
	playData->mNaviLifeMax[NAVIID_Olimar] = naviMgr->mNaviParms->mNaviParms.mMaxHealth.mValue;
	playData->mNaviLifeMax[NAVIID_Louie]  = naviMgr->mNaviParms->mNaviParms.mMaxHealth.mValue;
}

/**
 * @note Address: 0x801C18A0
 * @note Size: 0x168
 */

void VsGameSection::onSetupFloatMemory()
{
	Farm::farmMgr = nullptr;
	mTekiMgr      = new VsGame::TekiMgr();
	mCardMgr      = new VsGame::CardMgr(this, mTekiMgr);
	mCardMgr->loadResource();
	const char* marbles[3] = { VsOtakaraName::cBedamaRed, VsOtakaraName::cBedamaBlue, VsOtakaraName::cBedamaYellow };

	for (int i = 0; i < 3; i++) {

		PelletInitArg initArg;
		PelletList::cKind cKind;

		PelletConfig* pelletConfig = PelletList::Mgr::getConfigAndKind(const_cast<char*>(marbles[i]), cKind);

		JUT_ASSERTLINE(904, pelletConfig, "zannenn\n"); // 'disappointing'

		initArg.mPelletIndex    = pelletConfig->mParams.mIndex;
		initArg.mTextIdentifier = pelletConfig->mParams.mName.mData;
		initArg.mPelletType     = cKind;
		pelletMgr->setUse(&initArg);
	}
}

/**
 * @note Address: 0x801C1A08
 * @note Size: 0xA0
 */
void VsGameSection::postSetupFloatMemory()
{
	if (gameSystem->isVersusMode()) {
		mRedBlueYellowScore[1] = 0.0f;
		mRedBlueYellowScore[0] = 0.0f;
		mMarbleRedBlue[1]      = nullptr;
		mMarbleRedBlue[0]      = nullptr;
		Vector3f position      = Vector3f(0.0f);
		createRedBlueBedamas(position);

		for (int i = 0; i < 7; i++) {
			mMarbleYellow[i] = nullptr;
		}

		createYellowBedamas(7);
		initCardPellets();
	}

	BaseGameSection::postSetupFloatMemory();
}

/**
 * @note Address: 0x801C1AA8
 * @note Size: 0x20
 */
void VsGameSection::onClearHeap()
{
	if (gameSystem->isVersusMode()) {
		mCherryArray = nullptr;
		mMaxCherries = 0;
	}
}

/**
 * @note Address: 0x801C1AC8
 * @note Size: 0xB0
 */
void VsGameSection::loadChallengeStageList()
{
	JKRDvdRipper::EAllocDirection EAlloc = JKRDvdRipper::ALLOC_DIR_BOTTOM;
	JKRExpandSwitch expandSwitch         = JKRExpandSwitch();
	void* loadRam                        = JKRDvdRipper::loadToMainRAM(
        ((gGameConfig.mParms.mKFesVersion.mData) ? "/user/Matoba/challenge/kfes-stages.txt" : "/user/Matoba/challenge/stages.txt"), nullptr,
        expandSwitch, nullptr, nullptr, EAlloc, nullptr, nullptr, nullptr);
	if (!loadRam) {
		return;
	}
	RamStream ram(loadRam, -1);
	ram.setMode(STREAM_MODE_TEXT, 1);
	mChallengeStageList->read(ram);
}

/**
 * @note Address: 0x801C1B78
 * @note Size: 0x98
 */
void VsGameSection::loadVsStageList()
{
	JKRDvdRipper::EAllocDirection EAlloc = JKRDvdRipper::ALLOC_DIR_BOTTOM;
	JKRExpandSwitch expandSwitch         = JKRExpandSwitch();
	void* loadRam = JKRDvdRipper::loadToMainRAM("/user/abe/vs/stages.txt", nullptr, expandSwitch, nullptr, nullptr, EAlloc, nullptr,
	                                            nullptr, nullptr);
	if (!loadRam) {
		return;
	}

	RamStream ram(loadRam, -1);
	ram.setMode(STREAM_MODE_TEXT, 1);
	mVsStageList->read(ram);
}

/**
 * @note Address: 0x801C1C10
 * @note Size: 0x44
 */
void VsGameSection::gmOrimaDown(int arg)
{
	if (mCurrentState) {
		mCurrentState->onOrimaDown(this, arg);
	}
}

/**
 * @note Address: 0x801C1C58
 * @note Size: 0x4
 */
void VsGameSection::gmPikminZero() { }

/**
 * @note Address: 0x801C1C5C
 * @note Size: 0x3C
 */
void VsGameSection::goNextFloor(ItemHole::Item* hole) { mCurrentState->onNextFloor(this, hole); }

/**
 * @note Address: 0x801C1C9C
 * @note Size: 0x1D8
 */
void VsGameSection::openCaveMoreMenu(ItemHole::Item* hole, Controller* controller)
{
	if (mCurrentState->goingToCave(this)) {
		return;
	}

	if (gameSystem->isMultiplayerMode() && controller) {
		Screen::gGame2DMgr->setGamePad(controller);
	} else {
		Screen::gGame2DMgr->setGamePad(mControllerP1);
	}

	og::Screen::DispMemberCaveMore cave;
	cave.mCaveID = '2p_c';
	int mePikis  = GameStat::mePikis;
	if (mePikis > 0) {
		cave.mPikiInDanger = true;
		int map_pikis      = GameStat::getMapPikmins(AllPikminCalcs);
		if (mePikis == map_pikis) {
			cave.mCantProceed = true;
		} else {
			cave.mCantProceed = false;
		}

	} else {
		cave.mCantProceed  = false;
		cave.mPikiInDanger = false;
	}

	bool open = Screen::gGame2DMgr->open_CaveMoreMenu(cave);
	if (open) {
		mHole = hole;
		gameSystem->setPause(true, "op-c-more", 3);
		gameSystem->setMoviePause(true, "op-c-more");
	}
}

/**
 * @note Address: 0x801C1E7C
 * @note Size: 0x1B0
 */
void VsGameSection::openKanketuMenu(ItemBigFountain::Item* fountain, Controller* controller)
{
	if (gameSystem->isMultiplayerMode() && controller) {
		Screen::gGame2DMgr->setGamePad(controller);
	} else {
		Screen::gGame2DMgr->setGamePad(mControllerP1);
	}

	og::Screen::DispMemberKanketuMenu cave;
	int mePikis = GameStat::mePikis;
	if (mePikis > 0) {
		cave.mPikiInDanger = true;
		int map_pikis      = GameStat::getMapPikmins(AllPikminCalcs);
		if (mePikis == map_pikis) {
			cave.mCantProceed = true;
		} else {
			cave.mCantProceed = false;
		}

	} else {
		cave.mCantProceed  = false;
		cave.mPikiInDanger = false;
	}

	bool open = Screen::gGame2DMgr->open_ChallengeKanketuMenu(cave);
	if (open) {
		mFountain = fountain;
		mMenuFlags |= 4;
		gameSystem->setPause(true, "op-kk", 3);
		gameSystem->setMoviePause(true, "op-kk");
	}
}

/**
 * @note Address: 0x801C202C
 * @note Size: 0x14
 */
void VsGameSection::clearCaveMenus()
{
	mMenuFlags = 0;
	mHole      = nullptr;
	mFountain  = nullptr;
}

/**
 * @note Address: 0x801C2040
 * @note Size: 0x2A8
 */
bool VsGameSection::updateCaveMenus()
{
	if (mMenuFlags & 2) {
		switch (Screen::gGame2DMgr->check_CaveMoreMenu()) {
		case Screen::Game2DMgr::CHECK2D_CaveMoreMenu_MenuOpen:
			break;

		case Screen::Game2DMgr::CHECK2D_CaveMoreMenu_Confirm:
			playData->mNaviLifeMax[NAVIID_Olimar] = naviMgr->getAt(NAVIID_Olimar)->mHealth;
			playData->mNaviLifeMax[NAVIID_Louie]  = naviMgr->getAt(NAVIID_Louie)->mHealth;
			gameSystem->setPause(false, "more-yes", 3);
			gameSystem->setMoviePause(false, "more-yes");
			mMenuFlags &= ~2;
			goNextFloor(mHole);
			return true;

		case Screen::Game2DMgr::CHECK2D_CaveMoreMenu_Cancel:
			gameSystem->setPause(false, "more-no", 3);
			gameSystem->setMoviePause(false, "more-no");
			mMenuFlags &= ~2;
			break;

		case Screen::Game2DMgr::CHECK2D_CaveMoreMenu_Unused:
			gameSystem->setMoviePause(false, "more-zenkai");
			break;
		}

	} else if (mMenuFlags & 4) {
		switch (Screen::gGame2DMgr->check_KanketuMenu()) {
		case Screen::Game2DMgr::CHECK2D_KanketuMenu_MenuOpen:
			break;

		case Screen::Game2DMgr::CHECK2D_KanketuMenu_Confirm:
			gameSystem->setPause(false, "kk-yes", 3);
			gameSystem->setMoviePause(false, "kk-yes");
			mMenuFlags &= ~4;
			MoviePlayArg arg("s0C_cv_escape", nullptr, mMovieFinishCallback, 0);
			arg.mOrigin        = mFountain->getPosition();
			arg.mAngle         = mFountain->getFaceDir();
			arg.mDelegateStart = mMovieStartCallback;
			mFountain->movie_begin(false);
			moviePlayer->mTargetObject = mFountain;
			moviePlayer->play(arg);
			return true;

		case Screen::Game2DMgr::CHECK2D_KanketuMenu_Cancel:
			gameSystem->setPause(false, "kk-no", 3);
			gameSystem->setMoviePause(false, "kk-no");
			mMenuFlags &= ~4;
			break;

		case Screen::Game2DMgr::CHECK2D_KanketuMenu_Unused:
			break;
		}
	}

	return false;
}

/**
 * @note Address: 0x801C22F0
 * @note Size: 0xDC
 */
void VsGameSection::onMovieStart(MovieConfig* movie, u32 unused, u32 naviID)
{
	movie->is("s03_orimadown");
	if (gameSystem->isMultiplayerMode()) {
		if (naviID == NAVIID_Louie) {
			BaseGameSection::setPlayerMode(NAVIID_Louie);
		} else {
			BaseGameSection::setPlayerMode(NAVIID_Olimar);
		}
	}

	BaseGameSection::setCamController();
	if (mCurrentState) {
		mCurrentState->onMovieStart(this, movie, unused, naviID);
	}
}

/**
 * @note Address: 0x801C23D0
 * @note Size: 0x54
 */
void VsGameSection::onMovieDone(MovieConfig* movie, u32 unused1, u32 unused2)
{
	if (mCurrentState) {
		mCurrentState->onMovieDone(this, movie, unused1, unused2);
	}
}

/**
 * @note Address: 0x801C2428
 * @note Size: 0x434
 */
void VsGameSection::createFallPikmins(PikiContainer& setPikmin, int unused2)
{
	Vector3f start;
	mapMgr->getStartPosition(start, unused2);
	setPikmin.dump("createFallPikmins");
	Navi* orima = naviMgr->getAt(NAVIID_Olimar);
	start       = orima->getPosition();
	start.y     = mapMgr->getMinY(start);
	for (int color = FirstPikmin; color < PikiColorCount; color++) {
		for (int happa = Leaf; happa < PikiGrowthStageCount; happa++) {
			for (int i = 0; i < setPikmin.getCount(color, happa); i++) {
				// Gets Random in cylindrical geometry for some reason
				f32 radius = (randFloat() * 30.0f + 15.0f);
				f32 angle  = randFloat() * TAU;
				f32 height = (randFloat() * 120.0f + 850.0f) + 770.0f;

				Vector3f spawn = Vector3f(radius * sinf(angle), height, radius * cosf(angle));

				Piki* piki = pikiMgr->birth();
				spawn += start;
				if (piki) {
					PikiInitArg arg(15);
					piki->init(&arg);
					piki->mFaceDir = randFloat() * TAU;
					piki->setPosition(spawn, false);
					piki->changeShape(color);
					piki->changeHappa(happa);
					Vector3f velocity = Vector3f(0.0f, -(randFloat() * 150.0f + 2700.0f), 0.0f);
					piki->setVelocity(velocity);
					piki->movie_begin(false);
				}
			}
		}
	}
	setPikmin.clear();
}

/**
 * @note Address: 0x801C285C
 * @note Size: 0x564
 */
void VsGameSection::createVsPikmins()
{
	Onyon* redOnyon = ItemOnyon::mgr->getOnyon(ONYON_TYPE_RED);
	P2ASSERTLINE(1349, redOnyon);
	Vector3f redOnyonPos = redOnyon->getPosition();

	Onyon* blueOnyon = ItemOnyon::mgr->getOnyon(ONYON_TYPE_BLUE);
	P2ASSERTLINE(1354, blueOnyon);
	Vector3f blueOnyonPos = blueOnyon->getPosition();
	PikiContainer* pikmin = &mContainer1;
	pikmin->clear();

	int& reds  = pikmin->getCount(Red, Leaf);
	reds       = mOlimarHandicap * 5;
	int& blues = pikmin->getCount(Blue, Leaf);
	blues      = mLouieHandicap * 5;
	Vector3f spawnOnyonPos;

	for (int color = FirstPikmin; color < PikiColorCount; color++) {
		if (color == Red) {
			spawnOnyonPos = redOnyonPos;
		} else if (color == Blue) {
			spawnOnyonPos = blueOnyonPos;
		} else {
			continue;
		}
		for (int happa = Leaf; happa < PikiGrowthStageCount; happa++) {
			for (int i = 0; i < pikmin->getCount(color, happa); i++) {
				f32 radius = randFloat() * 10.0f;
				f32 angle  = randFloat() * TAU;
				f32 height = 0.0f;

				Vector3f spawn = Vector3f(radius * sinf(angle), height, radius * cosf(angle));

				Piki* piki = pikiMgr->birth();
				spawn += spawnOnyonPos;

				if (piki) {
					PikiInitArg arg(-1);
					piki->init(&arg);
					piki->setPosition(spawn, false);
					piki->changeShape(color);
					piki->changeHappa(happa);
				}
			}
		}
	}
	const char* marbles[2] = { VsOtakaraName::cBedamaRed, VsOtakaraName::cBedamaBlue };
	for (int onyonType = 0; onyonType < 2; onyonType++) {
		Onyon* currentOnyon = ItemOnyon::mgr->getOnyon(1 - onyonType);
		PelletIterator pelletIter;
		pelletIter.first();
		while (!pelletIter.isDone()) {
			Pellet* pellet = *pelletIter;
			int i          = strcmp(marbles[onyonType], pellet->mConfig->mParams.mName.mData);
			if (i == 0) {
				Vector3f flagPos = currentOnyon->getFlagSetPos();
				flagPos.y += pellet->getCylinderHeight() * 0.5f;
				pellet->setPosition(flagPos, false);
			}
			pelletIter.next();
		}
	}
	Navi* orima            = naviMgr->getAt(NAVIID_Olimar);
	orima->mSprayCounts[0] = mVsStageData->mStartNumSpicy;
	orima->mSprayCounts[1] = mVsStageData->mStartNumBitter;
	Navi* luji             = naviMgr->getAt(NAVIID_Louie);
	luji->mSprayCounts[0]  = mVsStageData->mStartNumSpicy;
	luji->mSprayCounts[1]  = mVsStageData->mStartNumBitter;
}

/**
 * @note Address: 0x801C2DC0
 * @note Size: 0x10
 */
void VsGameSection::addChallengeScore(int score) { mPokoCount += score; }

/**
 * @note Address: 0x801C2DD0
 * @note Size: 0x6C
 */
bool VsGameSection::sendMessage(GameMessage& message)
{
	if (message.actCommon(this)) {
		return message.actVs(this);
	}
}

/**
 * @note Address: 0x801C2E3C
 * @note Size: 0x40
 */
bool GameMessageVsGetDoping::actVs(VsGameSection* section)
{
	section->getGetDopeCount(mNaviIndex, mSprayType)++;
	return true;
}

/**
 * @note Address: 0x801C2E7C
 * @note Size: 0x4C
 */
bool GameMessageVsBattleFinished::actVs(VsGameSection* section)
{
	if (section->mCurrentState) {
		section->mCurrentState->onBattleFinished(section, mWinningSide, false);
	}
	return true;
}

/**
 * @note Address: 0x801C2ECC
 * @note Size: 0x4C
 */
bool GameMessageVsRedOrSuckStart::actVs(VsGameSection* section)
{
	if (section->mCurrentState) {
		section->mCurrentState->onRedOrBlueSuckStart(section, mColor, mIsYellow);
	}
	return true;
}

/**
 * @note Address: 0x801C2F1C
 * @note Size: 0xB8
 */
bool GameMessageVsGetOtakara::actVs(VsGameSection* section)
{
	if (section->mCurrentState) {
		section->mYellowMarbleCounts[mOnionType - 2]++;
		PSSetLastBeedamaDirection(mOnionType == 0, section->mYellowMarbleCounts[mOnionType - 2] == 3);
		if (section->mYellowMarbleCounts[mOnionType - 2] >= 4) {
			section->mCurrentState->onBattleFinished(section, mOnionType, true);
		}
	}

	return true;
}

/**
 * @note Address: 0x801C2FD4
 * @note Size: 0x34
 */
bool GameMessageVsAddEnemy::actVs(VsGameSection* section)
{
	section->mTekiMgr->entry(mEnemyID, mCount);
	return true;
}

/**
 * @note Address: 0x801C3008
 * @note Size: 0x118
 */
bool GameMessagePelletBorn::actVs(VsGameSection* section)
{
	if (mPellet->mPelletFlag == Pellet::FLAG_VS_BEDAMA_YELLOW) { // is yellow bedama
		for (int i = 0; i < 7; i++) {
			if (section->mMarbleYellow[i] == mPellet) {
				return false;
			}
		}
		for (int i = 0; i < 7; i++) {
			if (!section->mMarbleYellow[i]) {
				section->mMarbleYellow[i] = mPellet;
				return true;
			}
		}
		JUT_PANICLINE(1592, "no space for new yellow\n");
	}
	return false;
}

/**
 * @note Address: 0x801C3120
 * @note Size: 0x8C
 */
bool GameMessagePelletDead::actVs(VsGameSection* section)
{
	if (mPellet->mPelletFlag == Pellet::FLAG_VS_BEDAMA_YELLOW) { // is yellow bedama
		for (int i = 0; i < 7; i++) {
			if (section->mMarbleYellow[i] == mPellet) {
				section->mMarbleYellow[i] = nullptr;
				return true;
			}
		}
		JUT_PANICLINE(1617, "no entry for pellet\n");
	}

	return false;
}

/**
 * @note Address: 0x801C31AC
 * @note Size: 0x228
 */
bool GameMessageVsBirthTekiTreasure::actVs(VsGameSection* section)
{
	// This function spawns the shearwigs (suprise maggots)
	Sys::Sphere sphere(mPosition, 20.0f);
	int target            = 0;
	int redPikis          = 0;
	int bluePikis         = 0;
	CellIteratorArg arg   = sphere;
	CellIterator cellIter = arg;

	CI_LOOP(cellIter)
	{
		CellObject* cell = *cellIter;
		if (cell->isPiki()) {
			Piki* piki = (Piki*)cell;
			if (piki->isAlive()) {
				if (piki->getKind() == Red) {
					redPikis++;
				} else if (piki->getKind() == Blue) {
					bluePikis++;
				}
			}
		}
	}

	if (bluePikis > redPikis) {
		target = 1;
	}

	f32 tobiFactor = section->mYellowScore[target] - section->mYellowScore[1 - target];

	f32 tobiChance = 0.2f;

	if (tobiFactor > 0.8f) {
		mTekiBirthNum += 2;
		tobiChance = 0.8f;
	} else if (tobiFactor > 0.5f) {
		mTekiBirthNum += 1;
		tobiChance = 0.5f;
	} else if (tobiFactor > 0.1f) {
		tobiChance = 0.2f;
	} else if (tobiFactor > -0.1f) {

	} else if (tobiFactor > -0.5f) {
		tobiChance = 0.1f;
	} else if (tobiFactor > -0.8f) {
		tobiChance = 0.051f;
	} else {
		tobiChance = 0.01f;
	}
	if (!(randFloat() > tobiChance)) {
		int nodes = section->mTekiMgr->mNodeCount - 1;
		for (int i = 0; i < mTekiBirthNum; i++) {
			section->mTekiMgr->birth(nodes, mPosition, mDoSetExitTimer);
		}
		return true;
	}
}

/**
 * @note Address: 0x801C33D4
 * @note Size: 0x1C
 */
bool GameMessageVsPikminDead::actVs(VsGameSection* section)
{
	section->mIsChallengePerfect = false;
	section->mDeadPikiCount++;
	return true;
}

/**
 * @note Address: 0x801C33F0
 * @note Size: 0x7C
 */
bool GameMessageVsGotCard::actVs(VsGameSection* section)
{
	VsGame::CardMgr::SlotMachine* slot = &section->mCardMgr->mSlotMachines[mUserIndex];
	if (!slot->_18 && slot->mSlotID != VsGame::UNRESOLVED) {
		section->useCard();
	}
	section->mCardMgr->gotPlayerCard(mUserIndex);
	return true;
}

/**
 * @note Address: 0x801C346C
 * @note Size: 0xA8
 */
bool GameMessageVsUseCard::actVs(VsGameSection* section)
{
	if (section->mCurrentState) {
		if (!section->mCurrentState->isCardUsable(section)) {
			return false;
		}
	}
	if (gGameConfig.mParms.mVsY.mData == 0) {
		if (section->mCardMgr->usePlayerCard(mSlotIndex, section->mTekiMgr)) {
			section->useCard();
		}
	} else {
		section->mCardMgr->stopSlot(mSlotIndex);
	}
	return true;
}

/**
 * @note Address: N/A
 * @note Size: 0x170
 */
Pellet* VsGameSection::createCardPellet()
{
	PelletList::cKind kind;
	char* name = const_cast<char*>(VsOtakaraName::cCoin);
	PelletInitArg pelletArg;

	PelletConfig* config = PelletList::Mgr::getConfigAndKind(name, kind);
	JUT_ASSERTLINE(1759, config, "zannenn\n");
	pelletArg.mPelletIndex       = config->mParams.mIndex;
	pelletArg.mTextIdentifier    = config->mParams.mName.mData;
	pelletArg.mPelletType        = kind;
	pelletArg.mDoSkipCreateModel = true;
	pelletArg.mMinCarriers       = 1;
	pelletArg.mMaxCarriers       = 1;

	for (int i = 0; i < mMaxCherries; i++) {
		Pellet* pellet = mCherryArray[i];
		if (!pellet->isAlive() && !pellet->getStateID()) {
			PelletOtakara::mgr->setComeAlive(pellet->mSlotIndex);
			pellet->init(&pelletArg);
			return pellet;
		}
	}
	return nullptr;
}

/**
 * @note Address: 0x801C352C
 * @note Size: 0x190
 */
void VsGameSection::initCardPellets()
{
	mMaxCherries = 10;
	mCherryArray = new Pellet*[mMaxCherries];

	char* name = const_cast<char*>(VsOtakaraName::cCoin);
	PelletList::cKind kind;
	PelletInitArg arg;

	PelletConfig* config = PelletList::Mgr::getConfigAndKind(name, kind);
	JUT_ASSERTLINE(1796, config, "zannenn\n"); // 'disappointing'
	arg.mPelletIndex    = config->mParams.mIndex;
	arg.mTextIdentifier = config->mParams.mName.mData;
	arg.mPelletType     = kind;
	arg.mMinCarriers    = 1;
	arg.mMaxCarriers    = 1;

	for (int j = 0; j < mMaxCherries; j++) {
		Pellet* pellet = pelletMgr->birth(&arg);
		if (pellet) {
			Vector3f position = Vector3f(0.0f);
			mCherryArray[j]   = pellet;
			pellet->setPosition(position, false);
			mCherryArray[j] = pellet;
		} else {
			JUT_PANICLINE(1813, "birth failed !\n");
		}
	}

	for (int i = 0; i < mMaxCherries; i++) {
		mCherryArray[i]->kill(nullptr);
	}
}

/**
 * @note Address: 0x801C36BC
 * @note Size: 0x14
 */
void VsGameSection::initCardGeneration()
{
	mCardCount  = 0;
	mSpawnTimer = 25.0f;
}

/**
 * @note Address: 0x801C36D0
 * @note Size: 0x2D8
 */
void VsGameSection::updateCardGeneration()
{
	bool isHigh          = false;
	int maxSpawnCherries = 5;
	f32 spawnFactor      = (mRedBlueScore[0] - mRedBlueScore[1]) - (mYellowScore[0] - mYellowScore[1]);
	f32 factor1          = 0.4f;
	f32 factor2          = 0.6f;
	if (FABS(spawnFactor) < 0.2f) {

	} else if (0.2f <= FABS(spawnFactor) < 0.4f) {
		maxSpawnCherries = 5;
		isHigh           = true;
		factor1          = 0.3f;
		factor2          = 0.5f;
	} else if (0.4f <= FABS(spawnFactor) < 0.8f) {
		maxSpawnCherries = 6;
		isHigh           = true;
		factor1          = 0.2f;
		factor2          = 0.4f;
	} else if (0.8f <= FABS(spawnFactor)) {
		maxSpawnCherries = 7;
		isHigh           = true;
		factor1          = 0.2f;
		factor2          = 0.4f;
	}

	if (spawnFactor < 0.0f) {
		f32 temp = factor1;
		factor1  = 1.0f - factor2;
		factor2  = 1.0f - temp;
	}

	if (!isHigh) {
		f32 absLowFactor;
		f32 lowFactor = mCherryScore[1] - mCherryScore[0];
		lowFactor /= 2.0f;
		absLowFactor = FABS(lowFactor);
		if (absLowFactor <= 0.1f) {

		} else {
			if (absLowFactor < 0.2f) {
				factor1 = 0.4f;
				factor2 = 0.55f;
			} else if (absLowFactor < 0.5f) {
				factor1 = 0.4f;
				factor2 = 0.5f;
			} else if (absLowFactor < 1.0f) {
				factor1 = 0.3f;
				factor2 = 0.5f;
				if (absLowFactor > 0.9f) {
					maxSpawnCherries = 5;
				}
			}
			if (lowFactor < 0.0f) {
				f32 temp = factor1;
				factor1  = 1.0f - factor2;
				factor2  = 1.0f - temp;
			}
		}
	}

	mCardCount = 0;
	for (int i = 0; i < (int)mMaxCherries; i++) {
		if (mCherryArray[i]->isAlive()) {
			mCardCount++;
		}
	}

	if (mCardCount < 4 || (isHigh && mCardCount < maxSpawnCherries)) {
		f32 ticking = sys->mDeltaTime;
		if (isHigh) {
			ticking *= 2.0f;
		}
		mSpawnTimer -= ticking;
		if (mSpawnTimer <= 0.0f) {
			mSpawnTimer = 3.0f * randFloat() + 10.0f;
			DropCardArg arg;
			arg.mDropMinDistance     = factor1;
			arg.mDropMaximumDistance = factor2;
			dropCard(arg);
		}
	}
}

/**
 * @note Address: 0x801C39A8
 * @note Size: 0x18
 */
void VsGameSection::useCard()
{
	if (mCardCount > 0) {
		mCardCount -= 1;
	}
}

void VsGameSection::dropCard(VsGameSection::DropCardArg& arg)
{
	Vector3f spawn;
	Cave::randMapMgr->getItemDropPosition(spawn, arg.mDropMinDistance, arg.mDropMaximumDistance);
	f32 radius = (randFloat() * 20.0f);
	f32 angle  = randFloat() * TAU;

	spawn += Vector3f(radius * sinf(angle), 0.0f, radius * cosf(angle));

	Pellet* pellet = createCardPellet();

	if (pellet) {
		spawn.y += 140.0f;
		pellet->setPosition(spawn, false);
		efx::TEnemyApsmoke smoke;
		efx::ArgEnemyType smokeArg(spawn, EnemyTypeID::EnemyID_Kochappy, 1.0f);
		smoke.create(&smokeArg);

		Vector3f newRand = Vector3f(0.0f, randFloat() * TAU, 0.0f);
		Matrixf mat;
		mat.makeTR(Vector3f::zero, newRand);
		pellet->setOrientation(mat);
		mCardCount++;
	} else {
		for (int i = 0; i < mMaxCherries; i++) {
			mCherryArray[i]->isAlive();
		}
	}
}

/**
 * @note Address: 0x801C3DB4
 * @note Size: 0x1AC
 */
void VsGameSection::createYellowBedamas(int bedamas)
{
	if (mVsStageData) {
		bedamas = mVsStageData->mStartNumYellowMarbles;
		if (bedamas == 0) {
			return;
		}
		if (bedamas >= 7) {
			bedamas = 7;
		}
	}

	PelletList::cKind kind;
	char* name = const_cast<char*>(VsOtakaraName::cBedamaYellow);
	PelletInitArg pelletArg;

	PelletConfig* config = PelletList::Mgr::getConfigAndKind(name, kind);
	JUT_ASSERTLINE(2154, config, "zannenn\n"); // 'disappointing'

	pelletArg.mPelletIndex = config->mParams.mIndex;

	pelletArg.mTextIdentifier = config->mParams.mName.mData;
	pelletArg.mPelletType     = kind;
	pelletArg.mMinCarriers    = 1;
	pelletArg.mMaxCarriers    = 8;
	JUT_ASSERTLINE(2163, bedamas <= 50, "oosugi %d\n", bedamas);

	Vector3f positions[50];
	Cave::randMapMgr->getItemDropPosition(positions, bedamas, 0.4f, 0.6f);
	for (int i = 0; i < bedamas; i++) {
		Pellet* pellet = pelletMgr->birth(&pelletArg);
		Vector3f pos   = positions[i];
		pellet->setPosition(pos, false);
		mMarbleYellow[i] = pellet;
	}
}

void VsGameSection::createRedBlueBedamas(Vector3f& pos)
{
	const char* marbles[2] = { VsOtakaraName::cBedamaRed, VsOtakaraName::cBedamaBlue };
	for (int i = 0; i < 2; i++) {
		PelletList::cKind kind;

		PelletInitArg pelletArg;
		char* name           = const_cast<char*>(marbles[i]);
		PelletConfig* config = PelletList::Mgr::getConfigAndKind(name, kind);
		JUT_ASSERTLINE(2211, config, "zannenn\n"); // 'disappointing'
		pelletArg.mPelletIndex    = config->mParams.mIndex;
		pelletArg.mTextIdentifier = config->mParams.mName.mData;
		pelletArg.mPelletType     = kind;
		pelletArg.mMinCarriers    = 1;
		pelletArg.mMaxCarriers    = 8;
		Pellet* pellet            = pelletMgr->birth(&pelletArg);
		Vector3f position;
		Cave::randMapMgr->getItemDropPosition(position, 0.2f, 0.8f);
		pellet->setPosition(position, false);
		mMarbleRedBlue[i] = pellet;
	}
}

/**
 * @note Address: 0x801C40AC
 * @note Size: 0x814
 */
void VsGameSection::calcVsScores()
{

	f32 yellowMarbleRedDist[7];
	f32 yellowMarbleBlueDist[7];
	Onyon* onyons[2];
	onyons[0] = ItemOnyon::mgr->getOnyon(ONYON_TYPE_RED);
	onyons[1] = ItemOnyon::mgr->getOnyon(ONYON_TYPE_BLUE);

	for (int i = 0; i < 7; i++) {
		Pellet* marble = mMarbleYellow[i];

		if (marble && marble->isAlive() && marble->getStateID() == 0) {
			int marbleCarryFactor = -1;
			if (marble->isCarried()) {
				switch (marble->mCarryColor) {
				case CINFOCOLOR_Red:
					marbleCarryFactor = 0;
					break;
				case CINFOCOLOR_Blue:
					marbleCarryFactor = 1;
					break;
				}
			}

			Vector3f marblePosition   = marble->getPosition();
			Vector3f redOnyonPosition = onyons[0]->getPosition();
			f32 expDistRed            = _distanceXZ(marblePosition, redOnyonPosition);

			Vector3f blueOnyonPosition = onyons[1]->getPosition();
			f32 expDistBlue            = _distanceXZ(marblePosition, blueOnyonPosition);

			f32 score  = 1.0f / ((f32)exp((expDistBlue / (expDistRed + expDistBlue) - 0.5f) * -10.0f) + 1.0f);
			bool check = false;
			if (marble->mCaptureMatrix) {
				check = true;
			}

			if (!check) {
				if (marbleCarryFactor == -1) {
					yellowMarbleRedDist[i]  = score;
					yellowMarbleBlueDist[i] = 1.0f - score;
				} else if (marbleCarryFactor == 0) {
					yellowMarbleRedDist[i]  = score;
					yellowMarbleBlueDist[i] = 0.0f;
				} else {
					yellowMarbleRedDist[i]  = 0.0f;
					yellowMarbleBlueDist[i] = 1.0f - score;
				}
			} else {
				yellowMarbleRedDist[i]  = 0.1f * score;
				yellowMarbleBlueDist[i] = 0.1f * (1.0f - score);
			}
		} else {
			yellowMarbleRedDist[i]  = -1.0f;
			yellowMarbleBlueDist[i] = -1.0f;
		}
	}

	f32 yellowScore[2];
	for (int i = 0; i < 2; i++) {
		f32 count = mYellowMarbleCounts[i];
		for (int j = 0; j < 7; j++) {
			if (i == 0 && yellowMarbleRedDist[j] >= 0.0f) {
				count += yellowMarbleRedDist[j];
			}
			if (i == 1 && yellowMarbleBlueDist[j] >= 0.0f) {
				count += yellowMarbleBlueDist[j];
			}
		}
		if (count >= 4.0f) {
			count = 4.0f;
		}
		count /= 4.0f;
		yellowScore[i]  = count;
		mYellowScore[i] = yellowScore[i];
	}

	f32 redBlueScore[] = { 0.0f, 0.0f };

	for (int i = 0; i < 2; i++) {
		Pellet* marble = mMarbleRedBlue[i];
		Onyon* onyon   = onyons[i];
		if (marble) {
			Vector3f marblePosition = marble->getPosition();
			Vector3f onyonPosition  = onyon->getPosition();
			f32 expDistRed          = _distanceXZ(marblePosition, onyonPosition);

			Vector3f otherOnyonPosition = onyons[(1 - i)]->getPosition();
			f32 expDistBlue             = _distanceXZ(marblePosition, otherOnyonPosition);
			redBlueScore[i]             = 1.0f / ((f32)exp((expDistRed / (expDistRed + expDistBlue) - 0.5f) * -10.0f) + 1.0f);
			mRedBlueScore[i]            = redBlueScore[i];
		}
	}

	mRedBlueYellowScore[0] = redBlueScore[1] + ((yellowScore[0] - yellowScore[1]) - redBlueScore[0]);
	mRedBlueYellowScore[1] = redBlueScore[0] + ((yellowScore[1] - yellowScore[0]) - redBlueScore[1]);

	f32 cherryValue;
	f32 cherryRedDist[10];
	f32 cherryBlueDist[10];
	for (int i = 0; i < 10; i++) {
		Pellet* cherry = mCherryArray[i];
		if (cherry->isAlive() && cherry->getStateID() == 0) {
			int cherryCarryFactor = -1;
			if (cherry->isCarried()) {
				switch (cherry->mCarryColor) {
				case Red:
					cherryCarryFactor = 0;
					break;
				case Blue:
					cherryCarryFactor = 1;
					break;
				}
			}
			Vector3f cherryPosition   = cherry->getPosition();
			Vector3f redOnyonPosition = onyons[0]->getPosition();
			f32 expDistRed            = _distanceXZ(cherryPosition, redOnyonPosition);

			Vector3f blueOnyonPosition = onyons[1]->getPosition();
			f32 expDistBlue            = _distanceXZ(cherryPosition, blueOnyonPosition);
			f32 score                  = 1.0f / ((f32)exp((expDistBlue / (expDistRed + expDistBlue) - 0.5f) * -10.0f) + 1.0f);

			bool check = false;
			if (cherry->mCaptureMatrix) {
				check = true;
			}
			if (!check) {
				if (cherryCarryFactor == -1) {
					cherryRedDist[i]  = score;
					cherryBlueDist[i] = 1.0f - score;
				} else if (cherryCarryFactor == 0) {
					cherryRedDist[i]  = score;
					cherryBlueDist[i] = 0.0f;
				} else {
					cherryRedDist[i]  = 0.0f;
					cherryBlueDist[i] = 1.0f - score;
				}
			} else {
				cherryRedDist[i]  = 0.1f * score;
				cherryBlueDist[i] = 0.1f * (1.0f - score);
			}
		} else {
			cherryRedDist[i]  = -1.0f;
			cherryBlueDist[i] = -1.0f;
		}
	}

	f32 redCherryValue;
	f32 blueCherryValue;
	for (int i = 0; i < 2; i++) {
		mMaxCherryScore[i] = 0.0f;
		f32 count          = 0.0f;
		for (int j = 0; j < 10; j++) {
			f32 miniCount = 0.0f;
			if (i == 0 && cherryRedDist[j] >= 0.0f) {
				count += cherryRedDist[j];
				miniCount = cherryRedDist[j];
			}
			if (i == 1 && cherryBlueDist[j] >= 0.0f) {
				count += cherryBlueDist[j];
				miniCount = cherryBlueDist[j];
			}
			if (mMaxCherryScore[i] <= miniCount) {
				mMaxCherryScore[i] = miniCount;
			}
		}
		yellowMarbleRedDist[i] = count / 4.0f;
		mCherryScore[i]        = count;
	}
}

/**
 * @note Address: 0x801C48C0
 * @note Size: 0x18
 */
void VsGameSection::clearGetDopeCount()
{
	mDopeCounts[1][1] = 0;
	mDopeCounts[1][0] = 0;
	mDopeCounts[0][1] = 0;
	mDopeCounts[0][0] = 0;
}

/**
 * @note Address: 0x801C48D8
 * @note Size: 0xD0
 */
int& VsGameSection::getGetDopeCount(int player, int type)
{
	JUTASSERTBOUNDSINCLUSIVELINE(2567, 0, player, 1, "%d playerID\n");
	JUTASSERTBOUNDSINCLUSIVELINE(2568, 0, type, 1, "%d typeID\n");
	return mDopeCounts[player][type];
}

/**
 * @note Address: 0x801C49A8
 * @note Size: 0x10
 */
void VsGameSection::clearGetCherryCount()
{
	mPlayer1Cherries = 0;
	mPlayer2Cherries = 0;
}

/**
 * @note Address: 0x801C49E0
 * @note Size: 0x4
 */
// void StateMachine<VsGameSection>::init(VsGameSection*) { }

/**
 * @note Address: 0x801C49E4
 * @note Size: 0x64
 */
// void StateMachine<VsGameSection>::create(int states)
// {
// 	mLimit          = states;
// 	mCount          = 0;
// 	mStates         = new FSMState<VsGameSection>*[mLimit];
// 	mIndexToIDArray = new int[mLimit];
// 	mIdToIndexArray = new int[mLimit];
// }

/**
 * @note Address: 0x801C4A48
 * @note Size: 0x9C
 */
// void StateMachine<VsGameSection>::transit(VsGameSection* section, int stateID, StateArg* arg)
// {

// 	int stateIndex              = mIdToIndexArray[stateID];
// 	VsGame::State* currentState = section->mCurrentState;
// 	if (currentState) {
// 		currentState->cleanup(section);
// 		mCurrentID = currentState->mId;
// 	}
// 	if (stateIndex >= mLimit) {
// 		while (true)
// 			;
// 	}
// 	VsGame::State* state   = static_cast<VsGame::State*>(mStates[stateIndex]);
// 	section->mCurrentState = state;
// 	state->init(section, arg);
// }

/**
 * @note Address: 0x801C4AEC
 * @note Size: 0x84
 */
// void StateMachine<VsGameSection>::registerState(FSMState<VsGameSection>* state)
// {
// 	if (mCount >= mLimit) {
// 		return;
// 	}
// 	mStates[mCount] = state;
// 	bool inBounds;
// 	if (state->mId < 0 || state->mId >= mLimit) {
// 		inBounds = false;
// 	} else {
// 		inBounds = true;
// 	}

// 	if (!inBounds) {
// 		return;
// 	}

// 	state->mStateMachine        = this;
// 	mIndexToIDArray[mCount]     = state->mId;
// 	mIdToIndexArray[state->mId] = mCount;
// 	mCount++;
// }

/**
 * @note Address: 0x801C4B70
 * @note Size: 0x38
 */
// void StateMachine<VsGameSection>::exec(VsGameSection* section)
// {
// 	if (section->mCurrentState) {
// 		section->mCurrentState->exec(section);
// 	}
// }

} // namespace Game
