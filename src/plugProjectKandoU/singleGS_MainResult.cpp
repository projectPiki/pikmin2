#include "Game/SingleGame.h"
#include "Game/Navi.h"
#include "Game/generalEnemyMgr.h"
#include "Game/itemMgr.h"
#include "Game/Farm.h"
#include "Game/Entities/PelletItem.h"
#include "Game/Entities/PelletOtakara.h"
#include "Game/MoviePlayer.h"
#include "Game/Entities/PelletCarcass.h"
#include "Game/Entities/ItemOnyon.h"
#include "Game/GameLight.h"
#include "Game/CameraMgr.h"
#include "Screen/Game2DMgr.h"
#include "TParticle2dMgr.h"
#include "utilityU.h"
#include "nans.h"

static JKRHeap* theTekiHeap;

namespace Game {
namespace SingleGame {

/**
 * @note Address: 0x80219F48
 * @note Size: 0x150
 */
MainResultState::MainResultState()
    : State(SGS_MainResult)
{
	mControl            = new Controller(Controller::PORT_0);
	mLoadDelegate       = new Delegate<MainResultState>(this, loadResource);
	mBeforeSaveDelegate = new Delegate<MainResultState>(this, beforeSave);
}

/**
 * @note Address: 0x8021A0F8
 * @note Size: 0x104
 */
void MainResultState::init(SingleGameSection* game, StateArg* arg)
{
	gameSystem->setFlag(GAMESYS_DisableCollision);
	mGameSect = game;
	game->startFadeblack();

	int money = playData->mPokoCount;
	accountEarnings(game, playData->mMainCropMemory, false);
	playData->mPokoCount = money;
	sys->dvdLoadUseCallBack(&mDvdThread, mLoadDelegate);
	mStatus               = Result_LoadData;
	mMainHeap             = nullptr;
	playData->mDeadNaviID = 0;
	naviMgr->clearDeadCount();
	theTekiHeap = generalEnemyMgr->useHeap();
	if (Farm::farmMgr) {
		Farm::farmMgr->initAllFarmObjectNodes();
	}
	naviMgr->killAll();
	itemMgr->killAllExceptOnyonMgr();
	mPelletMgr = gameSystem->detachObjectMgr_reuse(pelletMgr);
}

/**
 * @note Address: 0x8021A1FC
 * @note Size: 0x24
 */
void MainResultState::beforeSave() { playData->setPikminCounts_Yesterday(); }

/**
 * @note Address: 0x8021A220
 * @note Size: 0x88
 */
void MainResultState::loadResource()
{
	ResultTexMgr::Arg arg;
	arg.mHeap              = theTekiHeap;
	arg.mOtakaraConfigList = PelletOtakara::mgr->mConfigList;
	arg.mItemConfigList    = PelletItem::mgr->mConfigList;

	mMainHeap = theTekiHeap;
	mResultTex.create(arg);
	createResultNodes();
	particleMgr->killAll();
	shadowMgr->killAll();
}

/**
 * @note Address: N/A
 * @note Size: 0x148
 */
unknown MainResultState::open2D(SingleGameSection* game)
{
	mStatus = Result_ScreenActive;
	playData->clearCurrentCave();
	playData->setSaveFlag(1, mBeforeSaveDelegate);
	int pokos = playData->mPokoCount;
	kh::Screen::MailCategory mailtype;
	if (pokos < 3000) {
		mailtype = kh::Screen::PokoUnder3000;
	} else if (pokos < 5000) {
		mailtype = kh::Screen::PokoUnder5000;
	} else if (pokos < 8000) {
		mailtype = kh::Screen::PokoUnder8000;
	} else if (pokos < 10000) {
		mailtype = kh::Screen::PokoUnder10000;
	} else if (playData->mStoryFlags & STORY_AllTreasuresCollected) {
		mailtype = kh::Screen::AllTreasures;
	} else if (playData->mStoryFlags & STORY_LouieRescued) {
		mailtype = kh::Screen::SavedLouie;
	} else {
		mailtype = kh::Screen::PayDebt;
	}

	kh::Screen::DispDayEndResult disp(&mResultNode, playData->mTreasureCount, pokos, playData->mStoryFlags & STORY_DebtPaid, mIncP,
	                                  theTekiHeap, mailtype);
	Screen::gGame2DMgr->open_DayEndResult(disp);
}

/**
 * @note Address: 0x8021A2A8
 * @note Size: 0x3E8
 */
void MainResultState::exec(SingleGameSection* game)
{
	switch (mStatus) {
	case Result_LoadData:
		if (mDvdThread.mMode == DvdThreadCommand::CM_Completed) {
			mStatus = Result_OpenWait;
			MoviePlayArg arg("s02_dayend_result", nullptr, game->mMovieFinishCallback, 0);
			moviePlayer->play(arg);
			gameSystem->setPause(false, "mr_load", 3);
			mCounter = 0;
		}
		game->BaseHIOSection::doUpdate();
		return;
	case Result_Unused1: // this state seems to never be used
		mStartTimer -= sys->mDeltaTime;
		if (mStartTimer < 0.0f)
			mStatus = Result_ScreenActive;
		break;
	case Result_OpenWait:
		if (++mCounter >= 199 || mControl->getButtonDown() & Controller::PRESS_A) {
			open2D(game);
		}
		break;
	case Result_ScreenActive:
		switch (Screen::gGame2DMgr->check_DayEndResult()) {
		case Screen::Game2DMgr::CHECK2D_DayResult_SaveFinished:
			moviePlayer->unsuspend(1, false);
			break;
		case Screen::Game2DMgr::CHECK2D_DayResult_ReturnToFileSelect:
			moviePlayer->stop();
			game->clearHeap();
			transit(game, SGS_File, nullptr);
			return;
		}
		break;
	case Result_Finish:
		mStartTimer -= sys->mDeltaTime;
		if (mStartTimer < 0.0f) {
			game->clearHeap();
			FOREACH_NODE(Result::TNode, mResultNode.mChild, node) { }
			transit(game, SGS_Select, nullptr);
			return;
		}
		return;
	}

	// Since item rendering is disabled in day results, manually render onions/ship
	ItemOnyon::mgr->doAnimation();
	ItemOnyon::mgr->doEntry();
	ItemOnyon::mgr->doSimulation(sys->mDeltaTime);

	Viewport* vp = sys->mGfx->mCurrentViewport;
	SysShape::Model::setViewCalcModeInd();
	game->j3dSetView(vp, false);
	moviePlayer->update(game->mControllerP1, nullptr);
	if (particle2dMgr) {
		particle2dMgr->update();
	}
	if (particleMgr) {
		particleMgr->update();
	}
	Screen::gGame2DMgr->update();
	game->mLightMgr->update();
	game->BaseHIOSection::doUpdate();
}

/**
 * @note Address: 0x8021A690
 * @note Size: 0x30
 */
void MainResultState::onMovieDone(SingleGameSection*, MovieConfig*, u32, u32)
{
	mStatus     = Result_Finish;
	mStartTimer = 0.0f;
	PSMCancelToPauseOffMainBgm();
}

/**
 * @note Address: 0x8021A6C0
 * @note Size: 0x35C
 */
void MainResultState::createResultNodes()
{
	JKRHeap* backup = JKRGetCurrentHeap();
	mMainHeap->becomeCurrentHeap();
	PelletItem::Mgr* itemMgr = PelletItem::mgr;
	PelletCropMemory* mem    = playData->mMainCropMemory;
	KindCounter& counter     = mem->mItem;
	for (int i = 0; i < counter.getNumKinds(); i++) {
		if (counter(i)) {
			int money;
			PelletConfig* config = itemMgr->getPelletConfig(i);
			int id               = PelletList::Mgr::getOffsetFromDictionaryNo(config->mParams.mDictionary.mData - 1);
			u64 tag              = Result::TNode::convertByMorimun(id);
			Result::TNode* node  = new Result::TNode;
			money                = config->mParams.mMoney.mData;
			node->setTNode(tag, mResultTex.getItemTexture(i), counter(i), money * counter(i), money);
			mResultNode.add(node);
			playData->mTreasureCount += counter(i);
		}
	}

	KindCounter& counter2      = mem->mOtakara;
	int i                      = 0;
	PelletOtakara::Mgr* otaMgr = PelletOtakara::mgr;
	for (i = 0; i < counter2.getNumKinds(); i++) {
		if (counter2(i)) {
			PelletConfig* config = otaMgr->getPelletConfig(i);
			int id               = PelletList::Mgr::getOffsetFromDictionaryNo(config->mParams.mDictionary.mData - 1);
			u64 tag              = Result::TNode::convertByMorimun(id);
			Result::TNode* node  = new Result::TNode;
			int money            = config->mParams.mMoney.mData;
			node->setTNode(tag, mResultTex.getOtakaraTexture(i), counter2(i), money * counter2(i), money);
			mResultNode.add(node);
			playData->mTreasureCount += counter2(i);
		}
	}

	KindCounter& counter3          = mem->mCarcass;
	int j                          = 0;
	PelletCarcass::Mgr* carcassMgr = PelletCarcass::mgr;
	int money                      = 0;
	int num                        = 0;
	for (j = 0; j < counter3.getNumKinds(); j++) {
		if (counter3(j)) {
			PelletConfig* config = carcassMgr->getPelletConfig(j);
			num += counter3(j);
			int cValue     = config->mParams.mMoney.mData;
			int counterVal = counter3(j);
			money += counterVal * cValue;
		}
	}

	if (num > 0) {
		playData->mTreasureCount += num;
		Result::TNode* node = new Result::TNode;
		node->setTNode(0, mResultTex.getCarcassTexture(), num, money, -1);
		mResultNode.add(node);
	}

	playData->mMainCropMemory->clear();
	mIncP = new kh::Screen::IncP;
	_1C   = 0;
	Screen::gGame2DMgr->setGamePad(mControl);
	backup->becomeCurrentHeap();
}

/**
 * @note Address: 0x8021AA1C
 * @note Size: 0x94
 */
void MainResultState::draw(SingleGameSection* game, Graphics& gfx)
{
	if (mStatus == Result_OpenWait || mStatus == Result_ScreenActive || mStatus == Result_Finish) {
		cameraMgr->update();
		game->draw3D(gfx);
		moviePlayer->drawLoading(gfx);
		game->draw2D(gfx);
	}
}

/**
 * @note Address: 0x8021AAB0
 * @note Size: 0x7C
 */
void MainResultState::cleanup(SingleGameSection* game)
{
	Screen::gGame2DMgr->mScreenMgr->reset();
	playData->mMainCropMemory->clear();
	if (mPelletMgr) {
		gameSystem->addObjectMgr_reuse(mPelletMgr);
	}
	mGameSect->mXfbTexture2d = nullptr;
	gameSystem->resetFlag(GAMESYS_DisableCollision);
}

} // namespace SingleGame
} // namespace Game
