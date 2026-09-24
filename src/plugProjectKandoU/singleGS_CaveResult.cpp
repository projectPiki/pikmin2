#include "Game/BirthMgr.h"
#include "Game/DeathMgr.h"
#include "Game/GameSystem.h"
#include "Game/MapMgr.h"
#include "Game/ResultTexMgr.h"
#include "Game/generalEnemyMgr.h"
#include "Game/Entities/PelletItem.h"
#include "Game/Entities/PelletOtakara.h"
#include "Game/Entities/PelletCarcass.h"
#include "P2Macros.h"
#include "PSM/Global.h"
#include "Screen/Game2DMgr.h"
#include "System.h"
#include "TParticle2dMgr.h"
#include "Game/SingleGame.h"
#include "kh/khCaveResult.h"
#include "Controller.h"
#include "nans.h"

namespace Game {
namespace SingleGame {

static const u32 padding[]    = { 0, 0, 0 };
static const char className[] = "SingleGS_CaveResult";

/**
 * @note Address: 0x8021AC20
 * @note Size: 0xF8
 * __ct
 */
CaveResultState::CaveResultState()
    : State(SGS_CaveResult)
{
	mController   = new Controller(JUTGamePad::PORT_0);
	mLoadCallback = new Delegate<CaveResultState>(this, &loadResource);
	mBackupHeap   = nullptr;
	mMainHeap     = nullptr;
}

/**
 * @note Address: 0x8021AD18
 * @note Size: 0x124
 */
void CaveResultState::init(SingleGameSection* section, StateArg* arg)
{
	playData->mCavePokoCount = 0;
	gameSystem->detachObjectMgr(generalEnemyMgr);
	gameSystem->detachObjectMgr(mapMgr);
	gameSystem->setPause(true, "caver-init", 3);

	Screen::gGame2DMgr->mScreenMgr->reset();
	Screen::gGame2DMgr->setGamePad(mController);
	mSection = section;

	P2ASSERTLINE(284, arg);
	mGameState = static_cast<CaveResultArg*>(arg)->mGameState;

	mResultTextures = nullptr;
	section->refreshHIO();
	accountEarnings(section, playData->mCaveCropMemory, true);

	mStatus        = 0;
	mResultTexHeap = nullptr;
	PSMCancelToPauseOffMainBgm();
}

/**
 * @note Address: N/A
 * @note Size: 0x7C
 */
void CaveResultState::initNext(SingleGameSection* section)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x8021AE3C
 * @note Size: 0x240
 */
void CaveResultState::loadResource()
{
	ResultTexMgr::Arg arg;
	arg.mHeap              = mMainHeap;
	arg.mOtakaraConfigList = PelletOtakara::mgr->mConfigList;
	arg.mItemConfigList    = PelletItem::mgr->mConfigList;

	mResultTexHeap  = arg.mHeap;
	mResultTextures = new ResultTexMgr::Mgr;
	mResultTextures->create(arg);

	JUTTexture* texture     = new JUTTexture(sys->getRenderModeWidth(), sys->getRenderModeHeight(), GX_TF_RGB565);
	texture->mMinFilter     = GX_NEAR;
	texture->mMagFilter     = GX_NEAR;
	mSection->mXfbTexture2d = texture;

	createResultNodes();

	PSGame::SceneInfo sceneInfo;
	sceneInfo.mSceneType = PSGame::SceneInfo::CAVE_RESULTS;
	sceneInfo.mCameras   = 0;
	PSMSetSceneInfo(sceneInfo);
	PSSystem::getSceneMgr()->doFirstLoad();
	PSMGetChildScene()->startMainSeq();
}

/**
 * @note Address: N/A
 * @note Size: 0x134
 */
void CaveResultState::open2D(Game::SingleGameSection* section)
{
	mStartTimer            = 1.0f;
	mStatus                = 2;
	section->mDisplayWiper = section->mWipeInFader;
	section->mWipeInFader->start(mStartTimer);
	playData->clearCurrentCave();
	PlayData* data            = playData;
	data->mLoadType           = STORYSAVE_Overworld;
	data->mBeforeSaveDelegate = nullptr;

	CourseInfo* courseInfo = section->getCurrentCourseInfo();
	P2ASSERTLINE(381, courseInfo);
	int otakaraNum = playData->getOtakaraNum_Course_CaveID(courseInfo->mCourseIndex, section->mCaveID);
	int otakaraMax = playData->getOtakaraMax_Course_CaveID(courseInfo->mCourseIndex, section->mCaveID);
	kh::Screen::DispCaveResult disp(&mResultNodes, DeathMgr::get_cave(DeathCounter::COD_All), otakaraNum, otakaraMax, playData->mPokoCount,
	                                playData->isStoryFlag(STORY_DebtPaid), mMainHeap, (mIsCaveComplete && otakaraNum >= otakaraMax));
	DeathMgr::account_cave();
	BirthMgr::account_cave();
	JUT_ASSERTLINE(408, Screen::gGame2DMgr->open_CaveResult(disp), "cannot open caveresult\n");
}

/**
 * @note Address: 0x8021B07C
 * @note Size: 0x2E8
 */
void CaveResultState::exec(SingleGameSection* section)
{
	switch (mStatus) {
	case 0:
		section->clearHeap();
		mBackupHeap = JKRHeap::sCurrentHeap;
		mMainHeap   = JKRExpHeap::create(mBackupHeap->getFreeSize(), mBackupHeap, true);
		mMainHeap->becomeCurrentHeap();
		mStatus = 1;
		sys->dvdLoadUseCallBack(&mDvdThread, mLoadCallback);
		return;
	case 1:
		if (mDvdThread.mMode == DvdThreadCommand::CM_Completed) {
			open2D(section);
		}
		return;
	case 2:
		mStartTimer -= sys->mDeltaTime;
		if (mStartTimer < 0.0f) {
			mStatus = 3;
		}
		break;

	case 3:
		switch (Screen::gGame2DMgr->check_CaveResult()) {
		case Screen::Game2DMgr::CHECK2D_CaveResult_Finished:
			LoadArg arg(mGameState, false, true, false);
			section->loadMainMapSituation();
			transit(section, SGS_Load, &arg);
			return;
		}
		break;

	case 4:
		mStartTimer -= sys->mDeltaTime;
		if (mStartTimer < 0.0f) {
			LoadArg arg(mGameState, false, false, false);
			section->loadMainMapSituation();
			transit(section, SGS_Load, &arg);
			return;
		}
		break;
	}

	Screen::gGame2DMgr->update();
	particle2dMgr->update();
}

/**
 * @note Address: 0x8021B364
 * @note Size: 0xC0
 */
void CaveResultState::draw(SingleGameSection* section, Graphics& gfx)
{
	gfx.mOrthoGraph.setPort();
	if (1 < mStatus) {
		gfx.mPerspGraph.setPort();
		particle2dMgr->draw(1, 0);
		section->draw_Ogawa2D(gfx);
		gfx.mPerspGraph.setPort();
		particle2dMgr->draw(0, 0);
	}
}

/**
 * @note Address: 0x8021B424
 * @note Size: 0xC4
 */
void CaveResultState::cleanup(SingleGameSection* section)
{
	PSMGetSceneMgrCheck()->deleteCurrentScene();

	playData->mCaveCropMemory->clear();
	_14                     = 0;
	mSection->mXfbTexture2d = nullptr;
	mMainHeap->freeAll();
	mMainHeap->destroy();
	mMainHeap = nullptr;
	mBackupHeap->becomeCurrentHeap();
}

/**
 * @note Address: 0x8021B4E8
 * @note Size: 0x40C
 */
void CaveResultState::createResultNodes()
{
	mIsCaveComplete = 0;
	sys->startChangeCurrentHeap(mResultTexHeap);
	PelletCropMemory* cropMem = playData->mCaveCropMemory->createClone();
	PelletCarcass::Mgr* carcassMgr;
	PelletItem::Mgr* itemMgr;
	PelletOtakara::Mgr* otaMgr;

	if (mSection->mDoTrackCarcass) {
		carcassMgr           = PelletCarcass::mgr;
		KindCounter& counter = playData->mCaveCropMemory->mCarcass;
		for (int i = 0; i < counter.getNumKinds(); i++) {
			if (counter(i) && carcassMgr->getPelletConfig(i)) {
				counter(i) = 0;
			}
		}
	}

	playData->mMainCropMemory->addTo(playData->mCaveCropMemory);
	playData->mCaveCropMemory->clear();

	itemMgr              = PelletItem::mgr;
	KindCounter& counter = cropMem->mItem;
	for (int i = 0; i < counter.getNumKinds(); i++) {
		if (counter(i) || mSection->mItemCounter(i)) {
			mIsCaveComplete      = true;
			PelletConfig* config = itemMgr->getPelletConfig(i);
			int id               = PelletList::Mgr::getOffsetFromDictionaryNo(config->mParams.mDictionary.mData - 1);
			u64 tag              = Result::TNode::convertByMorimun(id);
			Result::TNode* node  = new Result::TNode;
			node->setTNode(tag, mResultTextures->getItemTexture(i), counter(i), config->getPokoValue() * counter(i), config->getPokoValue(),
			               mSection->mItemCounter(i));
			mResultNodes.add(node);
		}
	}

	otaMgr                = PelletOtakara::mgr;
	KindCounter& counter2 = cropMem->mOtakara;
	for (int i = 0; i < counter2.getNumKinds(); i++) {
		if (counter2(i) || mSection->mOtakaraCounter(i)) {
			mIsCaveComplete      = true;
			PelletConfig* config = otaMgr->getPelletConfig(i);
			int id               = PelletList::Mgr::getOffsetFromDictionaryNo(config->mParams.mDictionary.mData - 1);
			u64 tag              = Result::TNode::convertByMorimun(id);
			Result::TNode* node  = new Result::TNode;
			node->setTNode(tag, mResultTextures->getOtakaraTexture(i), counter2(i), config->getPokoValue() * counter2(i),
			               config->getPokoValue(), mSection->mOtakaraCounter(i));
			mResultNodes.add(node);
		}
	}

	carcassMgr            = PelletCarcass::mgr;
	KindCounter& counter3 = cropMem->mCarcass;
	int value             = 0;
	int num               = 0;
	for (int i = 0; i < counter3.getNumKinds(); i++) {
		if (counter3(i)) {
			PelletConfig* config = carcassMgr->getPelletConfig(i);
			num += counter3(i);
			value += counter3(i) * config->getPokoValue();
		}
	}
	if (num > 0) {
		Result::TNode* node = new Result::TNode;
		bool track          = mSection->mDoTrackCarcass ? true : false;
		JUTTexture* tex     = mResultTextures->getCarcassTexture();
		node->setTNode(0, tex, num, value, -1, track);
		mResultNodes.add(node);
	}

	sys->endChangeCurrentHeap();
	mSection->clearCaveOtakaraEarningsAndDrops();
}

} // namespace SingleGame
} // namespace Game
