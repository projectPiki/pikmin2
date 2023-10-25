#include "Game/SingleGame.h"
#include "Game/BirthMgr.h"
#include "Game/DeathMgr.h"
#include "Game/Navi.h"
#include "Game/Data.h"
#include "Screen/Game2DMgr.h"
#include "PSGame/PikScene.h"
#include "PSSystem/PSGame.h"
#include "kh/khFinalResult.h"
#include "TParticle2dMgr.h"
#include "nans.h"

static const u32 padding[]    = { 0, 0, 0 };
static const char className[] = "SingleGS_Ending";

namespace Game {
namespace SingleGame {

/*
 * --INFO--
 * Address:	802326A8
 * Size:	0000E0
 */
EndingState::EndingState()
    : State(SGS_Ending)
{
	mFlag       = 0;
	mController = new Controller(Controller::PORT_0);
	mDelegate   = new Delegate<EndingState>(this, dvdload);
}

/*
 * --INFO--
 * Address:	80232788
 * Size:	0000D4
 */
void EndingState::init(SingleGameSection* game, StateArg* arg)
{
	mMainHeap   = nullptr;
	mBackupHeap = nullptr;
	mStatus     = EndingStatus_InitLoad;
	mFlag       = static_cast<EndingArg*>(arg)->mState;
	Screen::gGame2DMgr->setGamePad(mController);
	mTHPPlayer  = nullptr;
	mThpState   = 0;
	mResultData = nullptr;
	if (!(mFlag & Ending_SkipMovie)) {
		int backup = playData->mPokoCount;
		accountEarnings(game, playData->mMainCropMemory, false);
		playData->mPokoCount = backup;
		playData->mMainCropMemory->clear();
		playData->setPikminCounts_Today();
		playData->setPikminCounts_Yesterday();
		BirthMgr::account_today_adjust();
		BirthMgr::account_today();
		DeathMgr::account_today();
	}
	playData->mDeadNaviID = 0;
	naviMgr->clearDeadCount();
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000BC
 */
void EndingState::initNext(SingleGameSection*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8023285C
 * Size:	0001C8
 */
void EndingState::dvdload()
{
	PSGame::SceneInfo info;
	if (mFlag & Ending_IsComplete) {
		info.mSceneType = PSGame::SceneInfo::ENDING_COMPLETE;
	} else {
		info.mSceneType = PSGame::SceneInfo::ENDING_DEBTRESULT;
	}
	info.mCameras            = 0;
	PSGame::PikSceneMgr* mgr = static_cast<PSGame::PikSceneMgr*>(PSSystem::getSceneMgr());
	mgr->newAndSetCurrentScene(info);
	mgr = static_cast<PSGame::PikSceneMgr*>(PSSystem::getSceneMgr());
	mgr->checkScene();
	mgr->mScenes->mChild->scene1stLoadSync();
	do_dvdload();
	if (!(mFlag & Ending_SkipMovie)) {
		if (!(mFlag & Ending_IsComplete)) {
			BirthMgr::account_today();
			DeathMgr::account_today();
			int day = gameSystem->mTimeMgr->mDayCount;
			int bufferA[16];
			int bufferB[16];
			sys->getPlayCommonData()->entryHighscores_clear(day, bufferA, bufferB);
			mResultData = kh::Screen::SceneFinalResult::createDispMember(bufferA, bufferB, sys->getPlayCommonData()->mHiScoreClear);
		} else {
			BirthMgr::account_today();
			DeathMgr::account_today();
			int day = gameSystem->mTimeMgr->mDayCount;
			int bufferA[16];
			int bufferB[16];
			sys->getPlayCommonData()->entryHighscores_complete(day, bufferA, bufferB);
			mResultData = kh::Screen::SceneFinalResult::createDispMember(bufferA, bufferB, sys->getPlayCommonData()->mHiScoreComplete);
		}
	}
}

/*
 * --INFO--
 * Address:	80232A24
 * Size:	000004
 */
void EndingState::do_dvdload() { }

/*
 * --INFO--
 * Address:	80232A28
 * Size:	000850
 */
void EndingState::exec(SingleGameSection* game)
{
	if (mMainHeap || mStatus == 0) {
		game->BaseHIOSection::doUpdate();
		Screen::gGame2DMgr->update();
		switch (mStatus) {
		case EndingStatus_InitLoad:
			if (!(mFlag & Ending_SkipMovie)) {
				game->clearHeap();
			}
			mBackupHeap = JKRGetCurrentHeap();
			mMainHeap   = JKRExpHeap::create(mBackupHeap->getFreeSize(), mBackupHeap, true);
			mMainHeap->becomeCurrentHeap();
			mTHPPlayer = new THPPlayer;
			mTHPPlayer->init(nullptr);
			mStatus = EndingStatus_LoadStart;
			sys->dvdLoadUseCallBack(&game->mDvdThread, mDelegate);
			break;
		case EndingStatus_LoadStart:
			if (game->mDvdThread.mMode == 2) {
				// if reloading a save, go right to "do you continue?" message
				if (mFlag & Ending_SkipMovie) {
					mStatus = EndingStatus_ShowContinueMesg;
					og::Screen::DispMemberFinalMessage disp;
					Screen::gGame2DMgr->open_FinalMessage(disp);
					PSGame::PikSceneMgr* mgr = static_cast<PSGame::PikSceneMgr*>(PSSystem::getSceneMgr());
					mgr->checkScene();
					mgr->mScenes->mChild->startMainSeq();
				} else {
					mStatus = EndingStatus_LoadFirstMovie;
				}
			}
			break;
		case EndingStatus_LoadFirstMovie:
			if (mFlag & Ending_IsComplete) {
				mStatus   = EndingStatus_PlayMovieAllTreasure;
				mThpState = 1;
				mTHPPlayer->load(THPPlayer::ENDING_AllTreasures);
			} else {
				mStatus   = EndingStatus_PlayMoviePayDebt;
				mThpState = 1;
				mTHPPlayer->load(THPPlayer::ENDING_PayDebt);
			}
			break;
		case EndingStatus_PlayMoviePayDebt:
			mTHPPlayer->update();
			if (mThpState != 0) {
				if (mTHPPlayer->isFinishLoading()) {
					mThpState = 0;
					mTHPPlayer->play();
				}
			} else {
				if (mTHPPlayer->isFinishPlaying()) {
					mTHPPlayer->stop();
					mStatus   = EndingStatus_PlayMovieCredits;
					mThpState = 1;
					mTHPPlayer->load(THPPlayer::STAFF_ROLL);
				}
			}
			break;
		case EndingStatus_PlayMovieCredits:
			mTHPPlayer->update();
			if (mThpState != 0) {
				if (mTHPPlayer->isFinishLoading()) {
					mThpState = 0;
					mTHPPlayer->play();
				}
			} else {
				if (mTHPPlayer->isFinishPlaying()) {
					mTHPPlayer->stop();
					mStatus = EndingStatus_ShowFinalResultsDebt;
					kh::Screen::DispFinalResult disp(mResultData, kh::Screen::DispFinalResult::PostDebt, mMainHeap);
					Screen::gGame2DMgr->setGamePad(mController);
					Screen::gGame2DMgr->open_FinalResult(disp);

					PSGame::PikSceneMgr* mgr = static_cast<PSGame::PikSceneMgr*>(PSSystem::getSceneMgr());
					mgr->checkScene();
					mgr->mScenes->mChild->startMainSeq();

					playData->clearCurrentCave();
					sys->mPlayData->mChallengeOpen = true;
					sys->getPlayCommonData()->mChallengeFlags.set(1);
					if (playData->courseOpen(2)) {
						playData->openCourse(3);
					}
					playData->mStoryFlags |= STORY_DebtPaid;
					playData->setSaveFlag(4, nullptr);
				}
			}
			break;
		case EndingStatus_ShowFinalResultsDebt:
			particle2dMgr->update();
			if (Screen::gGame2DMgr->check_FinalResult()) {
				mStatus = EndingStatus_ShowContinueMesg;
				og::Screen::DispMemberFinalMessage disp;
				Screen::gGame2DMgr->open_FinalMessage(disp);
			}
			break;
		case EndingStatus_ShowContinueMesg:
			particle2dMgr->update();
			switch (Screen::gGame2DMgr->check_FinalMessage()) {
			case 1:
				PSGame::PikSceneMgr* mgr = static_cast<PSGame::PikSceneMgr*>(PSSystem::getSceneMgr());
				mgr->checkScene();
				mgr->mScenes->mChild->stopMainSeq(30);
				Screen::gGame2DMgr->mScreenMgr->reset();
				mStatus   = 7;
				mThpState = 1;
				mTHPPlayer->load(THPPlayer::OPENING_PostDebtStart);
				break;
			case 2:
				game->flow_goto_title();
				break;
			}
			break;
		case EndingStatus_PlayMoviePostDebtStart:
			mTHPPlayer->update();
			if (mThpState != 0) {
				if (mTHPPlayer->isFinishLoading()) {
					mThpState = 0;
					mTHPPlayer->play();
				}
			} else {
				if (mTHPPlayer->isFinishPlaying()) {
					mTHPPlayer->stop();
					transit(game, SGS_Select, nullptr);
				}
			}
			break;
		case EndingStatus_PlayMovieAllTreasure:
			mTHPPlayer->update();
			if (mThpState != 0) {
				if (mTHPPlayer->isFinishLoading()) {
					mThpState = 0;
					mTHPPlayer->play();
				}
			} else {
				if (mTHPPlayer->isFinishPlaying()) {
					mTHPPlayer->stop();
					kh::Screen::DispFinalResult disp(mResultData, kh::Screen::DispFinalResult::Complete, mMainHeap);
					Screen::gGame2DMgr->setGamePad(mController);
					Screen::gGame2DMgr->open_FinalResult(disp);

					PSGame::PikSceneMgr* mgr = static_cast<PSGame::PikSceneMgr*>(PSSystem::getSceneMgr());
					mgr->checkScene();
					mgr->mScenes->mChild->startMainSeq();

					playData->clearCurrentCave();
					sys->mPlayData->mChallengeOpen = true;
					sys->getPlayCommonData()->mChallengeFlags.set(2);
					playData->mStoryFlags |= STORY_AllTreasuresCollected;
					mStatus = EndingStatus_ShowFinalResultsComplete;
					playData->setSaveFlag(1, nullptr);
				}
			}
			break;
		case EndingStatus_Unused9:
			mTHPPlayer->update();
			if (mThpState != 0) {
				if (mTHPPlayer->isFinishLoading()) {
					mThpState = 0;
					mTHPPlayer->play();
				}
			} else {
				if (mTHPPlayer->isFinishPlaying()) {
					mTHPPlayer->stop();
					kh::Screen::DispFinalResult disp(mResultData, kh::Screen::DispFinalResult::Complete, mMainHeap);
					Screen::gGame2DMgr->setGamePad(mController);
					Screen::gGame2DMgr->open_FinalResult(disp);

					PSGame::PikSceneMgr* mgr = static_cast<PSGame::PikSceneMgr*>(PSSystem::getSceneMgr());
					mgr->checkScene();
					mgr->mScenes->mChild->startMainSeq();

					playData->clearCurrentCave();
					sys->mPlayData->mChallengeOpen = true;
					sys->getPlayCommonData()->mChallengeFlags.set(2);
					playData->mStoryFlags |= STORY_AllTreasuresCollected;
					mStatus = EndingStatus_ShowFinalResultsComplete;
					playData->setSaveFlag(1, nullptr);
				}
			}
			break;
		case EndingStatus_ShowFinalResultsComplete:
			particle2dMgr->update();
			if (Screen::gGame2DMgr->check_FinalResult()) {
				transit(game, SGS_Select, nullptr);
			}
			break;
		}
	}
}

/*
 * --INFO--
 * Address:	80233278
 * Size:	0000D4
 */
void EndingState::draw(SingleGameSection* game, Graphics& gfx)
{
	if (mMainHeap) {
		if (mTHPPlayer) {
			mTHPPlayer->draw(gfx);
		}
		gfx.mPerspGraph.setPort();
		particle2dMgr->draw(1, 0);
		gfx.mOrthoGraph.setPort();
		game->draw_Ogawa2D(gfx);
		gfx.mPerspGraph.setPort();
		particle2dMgr->draw(0, 0);
	}
}

/*
 * --INFO--
 * Address:	8023334C
 * Size:	0000B8
 */
void EndingState::cleanup(SingleGameSection* game)
{
	PSGame::PikSceneMgr* mgr = static_cast<PSGame::PikSceneMgr*>(PSSystem::getSceneMgr());
	PSSystem::checkSceneMgr(mgr);
	mgr->deleteCurrentScene();
	if (mTHPPlayer) {
		mTHPPlayer->stop();
	}
	mMainHeap->freeAll();
	mMainHeap->destroy();
	mMainHeap = nullptr;
	mBackupHeap->becomeCurrentHeap();
}

} // namespace SingleGame
} // namespace Game
