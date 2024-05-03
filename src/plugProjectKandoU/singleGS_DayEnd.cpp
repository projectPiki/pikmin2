#include "Game/Entities/ItemOnyon.h"
#include "Game/GameSystem.h"
#include "Game/MoviePlayer.h"
#include "Game/NaviState.h"
#include "Game/PikiMgr.h"
#include "Game/PikiState.h"
#include "Game/cellPyramid.h"
#include "Game/SingleGame.h"
#include "Game/gameStat.h"
#include "Game/generalEnemyMgr.h"
#include "Game/Entities/PelletCarcass.h"
#include "Game/Entities/PelletFruit.h"
#include "Game/Entities/PelletItem.h"
#include "Game/Entities/PelletOtakara.h"
#include "Game/Navi.h"
#include "Game/MapMgr.h"
#include "efx/TNaviEffect.h"
#include "Screen/Game2DMgr.h"
#include "Dolphin/rand.h"
#include "PikiAI.h"
#include "Iterator.h"
#include "utilityU.h"
#include "nans.h"

static const u32 padding[]    = { 0, 0, 0 };
static const char className[] = "singleGS_DayEnd";

namespace Game {
namespace SingleGame {

/**
 * @note Address: 0x8023A250
 * @note Size: 0x4A0
 */
void DayEndState::init(SingleGameSection* game, StateArg* arg)
{
	gameSystem->resetFlag(GAMESYS_IsGameWorldActive);
	gameSystem->setFlag(GAMESYS_DisableDeathCounter);
	moviePlayer->reset();
	moviePlayer->clearSuspendedDemo();
	DayEndArg* castedArg = static_cast<DayEndArg*>(arg);
	P2ASSERTLINE(67, castedArg != nullptr);
	mDayEndType = castedArg->mEndType;
	mTimer      = 0.0f;
	gameSystem->setPause(true, "dayend", 3);
	mStatus = DESTATE_PlayCutscene;
	mLeftBehindPikis.clear();
	if (game->mTheExpHeap != nullptr) {
		PSMCancelToPauseOffMainBgm();
	}
	Iterator<Onyon> iOnyon(ItemOnyon::mgr);
	CI_LOOP(iOnyon)
	{
		(*iOnyon)->setSpotEffectActive(false);
		(*iOnyon)->mSuckTimer = 4.0f;
		(*iOnyon)->forceClose();
	}
	game->saveToGeneratorCache(game->mCurrentCourseInfo);
	PelletIterator iPellet;
	CI_LOOP(iPellet)
	{
		Pellet* pellet = *iPellet;
		if (pellet->isAlive() && pellet->mCaptureMatrix == nullptr) {
			pellet->kill(nullptr);
		}
	}
	PelletCarcass::mgr->resetMgr();
	PelletFruit::mgr->resetMgr();
	PelletItem::mgr->resetMgrAndResources();
	PelletOtakara::mgr->resetMgrAndResources();
	Navi* navi = naviMgr->getAt(NAVIID_Olimar);
	if (navi->isAlive()) {
		navi->mFsm->transit(navi, NSID_Walk, nullptr);
		efx::TNaviEffect* effectsObj = navi->mEffectsObj;
		effectsObj->mFlags.unset(efx::NAVIFX_InWater);
		effectsObj->killHamonA_();
		effectsObj->killHamonB_();
	}
	navi = naviMgr->getAt(NAVIID_Louie);
	if (navi->isAlive()) {
		navi->mFsm->transit(navi, NSID_Walk, nullptr);
		efx::TNaviEffect* effectsObj = navi->mEffectsObj;
		effectsObj->mFlags.unset(efx::NAVIFX_InWater);
		effectsObj->killHamonA_();
		effectsObj->killHamonB_();
	}
}

/**
 * @note Address: 0x8023A6F0
 * @note Size: 0x40C
 */
void DayEndState::exec(SingleGameSection* game)
{
	switch (mStatus) {
	case DESTATE_PlayCutscene:
		mTimer -= sys->mDeltaTime;
		if (mTimer <= 0.0f) {
			mLeftBehindPikis.clear();
			// dont leave behind pikis on day 1
			if (gameSystem->mTimeMgr->mDayCount != 0) {
				pikiMgr->killDayEndPikmins(mLeftBehindPikis);
			}
			switch (mDayEndType) {
			case DETYPE_Normal:
				int numTreasures = 0;
				MoviePlayArg arg("s01_dayend", const_cast<char*>(game->mCurrentCourseInfo->mName), game->mMovieFinishCallback, 0);

				KindCounter& itemCounter = playData->mMainCropMemory->mItem;
				for (int i = 0; i < itemCounter.mNumKinds; i++) {
					numTreasures += itemCounter(i);
				}

				KindCounter& treasureCounter = playData->mMainCropMemory->mOtakara;
				for (int i = 0; i < treasureCounter.mNumKinds; i++) {
					numTreasures += treasureCounter(i);
				}

				if (numTreasures == 0) {
					arg.mStreamID = P2_STREAM_SOUND_ID(PSSTR_DAYEND_B); // bad day end
				} else if (numTreasures <= 14) {
					arg.mStreamID = P2_STREAM_SOUND_ID(PSSTR_DAYEND_N); // normal day end
				} else {
					arg.mStreamID = P2_STREAM_SOUND_ID(PSSTR_DAYEND_G); // good day end
				}

				JUT_ASSERTLINE(222, naviMgr->getAliveOrima(ALIVEORIMA_Active), "no alive:s01_dayend");
				Navi* navi = naviMgr->getActiveNavi();
				int id     = 0;
				if (navi) {
					id = navi->mNaviIndex;
					if (id == NAVIID_Louie && playData->isStoryFlag(STORY_DebtPaid)) {
						id++;
					}
				}
				arg.mPelletName    = (char*)id;
				arg.mDelegateStart = game->mMovieStartCallback;
				moviePlayer->play(arg);
				gameSystem->setPause(true, "s01_dayend", 3);
				mStatus = DESTATE_Cleanup;
				break;
			case DETYPE_PikminZero: {
				char* name = const_cast<char*>(game->mCurrentCourseInfo->mName);
				MoviePlayArg arg("s06_dayend_pikminzero", name, game->mMovieFinishCallback, 0);
				arg.mDelegateStart = game->mMovieStartCallback;
				moviePlayer->play(arg);
				gameSystem->setPause(0, "s06_dayend", 3);
				mStatus = DESTATE_Cleanup;
				break;
			}
			case DETYPE_CaptainsDown: {
				char* name = const_cast<char*>(game->mCurrentCourseInfo->mName);
				MoviePlayArg arg("s04_dayend_orimadown", name, game->mMovieFinishCallback, 0);
				arg.mDelegateStart = game->mMovieStartCallback;
				moviePlayer->play(arg);
				gameSystem->setPause(0, "s04_dayend", 3);
				mStatus = DESTATE_Cleanup;
				break;
			}
			}
		}
		break;
	case DESTATE_Cleanup:
		if (moviePlayer && !moviePlayer->isFlag(MVP_IsActive)) {
			pikiMgr->forceEnterPikmins(false);
			gameSystem->setPause(true, "dayend-cache", 3);
			game->advanceDayCount();
			gameSystem->mTimeMgr->setStartTime();
			gameSystem->detachObjectMgr(generalEnemyMgr);
			gameSystem->detachObjectMgr(mapMgr);
			gameSystem->setFlag(GAMESYS_DisableCollision);
			transit(game, SGS_MainResult, nullptr);
			return;
		}
		break;
	}
	game->BaseGameSection::doUpdate();
	game->updateMainMapScreen();
}

/**
 * @note Address: 0x8023AAFC
 * @note Size: 0x5B8
 */
void DayEndState::onMovieStart(SingleGameSection* game, MovieConfig* movie, u32, u32 p4)
{
	Screen::gGame2DMgr->startFadeBG_CourseName();
	Screen::gGame2DMgr->startCount_CourseName();
	gameSystem->mTimeMgr->setEndTime();
	if (movie->is("s01_dayend")) {
		P2ASSERTLINE(335, Screen::gGame2DMgr->mScreenMgr->reset() == true);
		Vector3f origin(156.0f, 0.0f, 166.0f);
		if (mapMgr->getDemoMatrix()) {
			origin = mapMgr->getDemoMatrix()->mtxMult(origin);

			Piki* pikiBuffer[100];
			int i = 0;
			Iterator<Piki> iterator(pikiMgr);
			CI_LOOP(iterator)
			{
				Piki* piki = *iterator;
				if (piki->isZikatu()) {
					pikiBuffer[i++] = piki;
				}
			}
			for (int j = 0; j < i; j++) {
				PikiKillArg arg(CKILL_DontCountAsDeath);
				pikiBuffer[j]->kill(&arg);
			}
			pikiMgr->moveAllPikmins(*(Vector3f*)&origin, 50.0f, nullptr);

			Iterator<Piki> iterator2(pikiMgr);
			CI_LOOP(iterator2)
			{
				Piki* piki = *iterator2;
				Navi* navi = naviMgr->getAliveOrima(ALIVEORIMA_Active);
				JUT_ASSERTLINE(376, navi, "no alive navi");
				PikiAI::ActFormationInitArg arg(navi);
				piki->mNavi       = navi;
				arg.mIsDemoFollow = true;
				piki->mBrain->start(PikiAI::ACT_Formation, &arg);
				piki->movie_begin(false);
			}
		}
	} else {
		if (movie->is("s21_dayend_takeoff")) {
			cellMgr->clear();
			generalEnemyMgr->prepareDayendEnemies();
		}
	}
}

/**
 * @note Address: 0x8023B0B4
 * @note Size: 0xF4
 */
void DayEndState::onMovieDone(SingleGameSection* section, MovieConfig* cfg, u32 p3, u32 p4)
{
	if (cfg->is("s01_dayend")) {
		pikiMgr->forceEnterPikmins(0);
	}
	if (cfg->is("s21_dayend_takeoff")) {
		gameSystem->resetFlag(GAMESYS_IsGameWorldActive);
		pikiMgr->killAllPikmins();
	} else {
		char* course_name = const_cast<char*>(section->mCurrentCourseInfo->mName);
		MoviePlayArg moviePlayArg("s21_dayend_takeoff", course_name, section->mMovieFinishCallback, 0);
		moviePlayArg.mDelegateStart = section->mMovieStartCallback;
		moviePlayer->play(moviePlayArg);
	}
}

/**
 * @note Address: 0x8023B1A8
 * @note Size: 0x2C0
 */
void DayEndState::onMovieCommand(SingleGameSection* game, int id)
{
	switch (id) {
	case 1:
		Vector3f origin = Vector3f(0.0f);
		if (mapMgr->getDemoMatrix()) {
			origin   = mapMgr->getDemoMatrix()->mtxMult(origin);
			origin.y = mapMgr->getMinY(origin);
		}

		Sys::Sphere bounds(origin, 180.0f);
		generalEnemyMgr->createDayendEnemies(bounds);

		// Spawn all left behind Pikmin
		for (int color = 0; color <= LastStoredPikiColor; color++) {
			for (int happa = 0; happa <= MaxHappaStage; happa++) {
				for (int i = 0; i < mLeftBehindPikis.getCount(color, happa); i++) {
					Piki* piki = pikiMgr->birth();
					if (piki) {
						PikiInitArg arg(PIKISTATE_Escape);
						piki->init(&arg);

						f32 angle    = randFloat() * TAU;
						Vector3f pos = Vector3f(30.0f * sinf(angle), 0.0f, 30.0f * cosf(angle));
						pos          = pos + origin;
						if (mapMgr) {
							pos.y = mapMgr->getMinY(pos);
						}
						piki->setPosition(pos, false);

						piki->changeShape(color);
						piki->changeHappa(happa);
						piki->movie_begin(false);
					}
				}
			}
		}
	}
}

/**
 * @note Address: 0x8023B468
 * @note Size: 0x28
 */
void DayEndState::draw(SingleGameSection* game, Graphics& gfx) { game->BaseGameSection::doDraw(gfx); }

/**
 * @note Address: 0x8023B490
 * @note Size: 0x7C
 */
void DayEndState::cleanup(SingleGameSection* game)
{
	playData->setPikminCounts_Today();
	GameStat::getMapPikmins(AllPikminCalcs);
	int alivePikis = GameStat::alivePikis;
	int mePikis    = GameStat::mePikis;
	gameSystem->setPause(false, "dayend;cln", 3);
	gameSystem->resetFlag(GAMESYS_DisableDeathCounter);
}

} // namespace SingleGame
} // namespace Game
