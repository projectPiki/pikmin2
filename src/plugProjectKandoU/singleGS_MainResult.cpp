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
		if (mDvdThread.mMode == 2) {
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
		case 1:
			moviePlayer->unsuspend(1, false);
			break;
		case 2:
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
	PelletCropMemory* mem = playData->mMainCropMemory;

	PelletItem::Mgr* itemMgr = PelletItem::mgr;
	KindCounter& counter     = mem->getItem();
	for (int i = 0; i < counter.getNumKinds(); i++) {
		if (*counter(i)) {
			PelletConfig* config = itemMgr->getPelletConfig(i);
			int id               = PelletList::Mgr::getOffsetFromDictionaryNo(config->mParams.mDictionary.mData - 1);
			u64 tag              = Result::TNode::convertByMorimun(id);
			Result::TNode* node  = new Result::TNode;
			int money            = config->mParams.mMoney.mData;
			node->setTNode(tag, mResultTex.getItemTexture(i), *counter(i), money * *counter(i), money);
			mResultNode.add(node);
			playData->mTreasureCount += *counter(i);
		}
	}

	PelletOtakara::Mgr* otaMgr = PelletOtakara::mgr;
	KindCounter& counter2      = mem->getOtakara();
	for (int i = 0; i < counter2.getNumKinds(); i++) {
		if (*counter2(i)) {
			PelletConfig* config = otaMgr->getPelletConfig(i);
			int id               = PelletList::Mgr::getOffsetFromDictionaryNo(config->mParams.mDictionary.mData - 1);
			u64 tag              = Result::TNode::convertByMorimun(id);
			Result::TNode* node  = new Result::TNode;
			int money            = config->mParams.mMoney.mData;
			node->setTNode(tag, mResultTex.getOtakaraTexture(i), *counter2(i), money * *counter2(i), money);
			mResultNode.add(node);
			playData->mTreasureCount += *counter2(i);
		}
	}

	PelletCarcass::Mgr* carcassMgr = PelletCarcass::mgr;
	KindCounter& counter3          = mem->getCarcass();
	int money                      = 0;
	int num                        = 0;
	for (int i = 0; i < counter3.getNumKinds(); i++) {
		if (*counter3(i)) {
			PelletConfig* config = carcassMgr->getPelletConfig(i);
			num += *counter3(i);
			int cValue = config->mParams.mMoney.mData;
			money += *counter3(i) * cValue;
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
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stmw     r20, 0x10(r1)
	mr       r31, r3
	lwz      r30, sCurrentHeap__7JKRHeap@sda21(r13)
	lwz      r3, 0xc0(r3)
	bl       becomeCurrentHeap__7JKRHeapFv
	lwz      r3, playData__4Game@sda21(r13)
	li       r26, 0
	lwz      r29, mgr__Q24Game10PelletItem@sda21(r13)
	lwz      r28, 0xb4(r3)
	addi     r27, r28, 0xc
	b        lbl_8021A7D8

lbl_8021A6F8:
	mr       r3, r27
	mr       r4, r26
	bl       __cl__Q24Game11KindCounterFi
	lbz      r0, 0(r3)
	cmplwi   r0, 0
	beq      lbl_8021A7D4
	mr       r3, r29
	mr       r4, r26
	bl       getPelletConfig__Q24Game13BasePelletMgrFi
	mr       r24, r3
	lhz      r3, 0x254(r3)
	addi     r3, r3, -1
	bl       getOffsetFromDictionaryNo__Q34Game10PelletList3MgrFi
	bl       convertByMorimun__Q34Game6Result5TNodeFi
	mr       r0, r3
	mr       r20, r4
	li       r3, 0x50
	mr       r21, r0
	bl       __nw__FUl
	or.      r23, r3, r3
	beq      lbl_8021A754
	bl       __ct__Q34Game6Result5TNodeFv
	mr       r23, r3

lbl_8021A754:
	lwz      r22, 0x170(r24)
	mr       r3, r27
	mr       r4, r26
	bl       __cl__Q24Game11KindCounterFi
	lbz      r0, 0(r3)
	mr       r3, r27
	mr       r4, r26
	mullw    r25, r22, r0
	bl       __cl__Q24Game11KindCounterFi
	lbz      r24, 0(r3)
	mr       r4, r26
	addi     r3, r31, 0x24
	bl       getItemTexture__Q34Game12ResultTexMgr3MgrFi
	mr       r7, r3
	mr       r3, r23
	mr       r6, r20
	mr       r5, r21
	mr       r8, r24
	mr       r9, r25
	mr       r10, r22
	bl       setTNode__Q34Game6Result5TNodeFUxP10JUTTextureiii
	mr       r4, r23
	addi     r3, r31, 0x68
	bl       add__Q24Game5DNodeFPQ24Game5DNode
	mr       r3, r27
	mr       r4, r26
	bl       __cl__Q24Game11KindCounterFi
	lwz      r4, playData__4Game@sda21(r13)
	lbz      r3, 0(r3)
	lwz      r0, 0xbc(r4)
	add      r0, r0, r3
	stw      r0, 0xbc(r4)

lbl_8021A7D4:
	addi     r26, r26, 1

lbl_8021A7D8:
	lhz      r0, 0(r27)
	cmpw     r26, r0
	blt      lbl_8021A6F8
	lwz      r29, mgr__Q24Game13PelletOtakara@sda21(r13)
	addi     r26, r28, 4
	li       r27, 0
	b        lbl_8021A8D4

lbl_8021A7F4:
	mr       r3, r26
	mr       r4, r27
	bl       __cl__Q24Game11KindCounterFi
	lbz      r0, 0(r3)
	cmplwi   r0, 0
	beq      lbl_8021A8D0
	mr       r3, r29
	mr       r4, r27
	bl       getPelletConfig__Q24Game13BasePelletMgrFi
	mr       r24, r3
	lhz      r3, 0x254(r3)
	addi     r3, r3, -1
	bl       getOffsetFromDictionaryNo__Q34Game10PelletList3MgrFi
	bl       convertByMorimun__Q34Game6Result5TNodeFi
	mr       r0, r3
	mr       r21, r4
	li       r3, 0x50
	mr       r20, r0
	bl       __nw__FUl
	or.      r23, r3, r3
	beq      lbl_8021A850
	bl       __ct__Q34Game6Result5TNodeFv
	mr       r23, r3

lbl_8021A850:
	lwz      r22, 0x170(r24)
	mr       r3, r26
	mr       r4, r27
	bl       __cl__Q24Game11KindCounterFi
	lbz      r0, 0(r3)
	mr       r3, r26
	mr       r4, r27
	mullw    r24, r22, r0
	bl       __cl__Q24Game11KindCounterFi
	lbz      r25, 0(r3)
	mr       r4, r27
	addi     r3, r31, 0x24
	bl       getOtakaraTexture__Q34Game12ResultTexMgr3MgrFi
	mr       r7, r3
	mr       r3, r23
	mr       r6, r21
	mr       r5, r20
	mr       r8, r25
	mr       r9, r24
	mr       r10, r22
	bl       setTNode__Q34Game6Result5TNodeFUxP10JUTTextureiii
	mr       r4, r23
	addi     r3, r31, 0x68
	bl       add__Q24Game5DNodeFPQ24Game5DNode
	mr       r3, r26
	mr       r4, r27
	bl       __cl__Q24Game11KindCounterFi
	lwz      r4, playData__4Game@sda21(r13)
	lbz      r3, 0(r3)
	lwz      r0, 0xbc(r4)
	add      r0, r0, r3
	stw      r0, 0xbc(r4)

lbl_8021A8D0:
	addi     r27, r27, 1

lbl_8021A8D4:
	lhz      r0, 0(r26)
	cmpw     r27, r0
	blt      lbl_8021A7F4
	lwz      r22, mgr__Q24Game13PelletCarcass@sda21(r13)
	addi     r20, r28, 0x14
	li       r26, 0
	li       r27, 0
	li       r21, 0
	b        lbl_8021A954

lbl_8021A8F8:
	mr       r3, r20
	mr       r4, r21
	bl       __cl__Q24Game11KindCounterFi
	lbz      r0, 0(r3)
	cmplwi   r0, 0
	beq      lbl_8021A950
	mr       r3, r22
	mr       r4, r21
	bl       getPelletConfig__Q24Game13BasePelletMgrFi
	mr       r28, r3
	mr       r3, r20
	mr       r4, r21
	bl       __cl__Q24Game11KindCounterFi
	lbz      r0, 0(r3)
	mr       r3, r20
	lwz      r23, 0x170(r28)
	mr       r4, r21
	add      r27, r27, r0
	bl       __cl__Q24Game11KindCounterFi
	lbz      r0, 0(r3)
	mullw    r0, r0, r23
	add      r26, r26, r0

lbl_8021A950:
	addi     r21, r21, 1

lbl_8021A954:
	lhz      r0, 0(r20)
	cmpw     r21, r0
	blt      lbl_8021A8F8
	cmpwi    r27, 0
	ble      lbl_8021A9C4
	lwz      r4, playData__4Game@sda21(r13)
	li       r3, 0x50
	lwz      r0, 0xbc(r4)
	add      r0, r0, r27
	stw      r0, 0xbc(r4)
	bl       __nw__FUl
	or.      r23, r3, r3
	beq      lbl_8021A990
	bl       __ct__Q34Game6Result5TNodeFv
	mr       r23, r3

lbl_8021A990:
	addi     r3, r31, 0x24
	bl       getCarcassTexture__Q34Game12ResultTexMgr3MgrFv
	mr       r7, r3
	mr       r3, r23
	mr       r8, r27
	mr       r9, r26
	li       r6, 0
	li       r5, 0
	li       r10, -1
	bl       setTNode__Q34Game6Result5TNodeFUxP10JUTTextureiii
	mr       r4, r23
	addi     r3, r31, 0x68
	bl       add__Q24Game5DNodeFPQ24Game5DNode

lbl_8021A9C4:
	lwz      r3, playData__4Game@sda21(r13)
	lwz      r3, 0xb4(r3)
	bl       clear__Q24Game16PelletCropMemoryFv
	li       r3, 0x74
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8021A9E8
	bl       __ct__Q32kh6Screen4IncPFv
	mr       r0, r3

lbl_8021A9E8:
	stw      r0, 0xb8(r31)
	li       r0, 0
	stb      r0, 0x1c(r31)
	lwz      r3, gGame2DMgr__6Screen@sda21(r13)
	lwz      r4, 0x18(r31)
	bl       setGamePad__Q26Screen9Game2DMgrFP10Controller
	mr       r3, r30
	bl       becomeCurrentHeap__7JKRHeapFv
	lmw      r20, 0x10(r1)
	lwz      r0, 0x44(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
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
	mGameSect->_168 = nullptr;
	gameSystem->resetFlag(GAMESYS_DisableCollision);
}

} // namespace SingleGame
} // namespace Game
