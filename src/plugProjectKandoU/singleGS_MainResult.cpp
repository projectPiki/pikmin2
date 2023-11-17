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

/*
 * --INFO--
 * Address:	80219F48
 * Size:	000150
 */
MainResultState::MainResultState()
    : State(SGS_MainResult)
{
	mControl            = new Controller(Controller::PORT_0);
	mLoadDelegate       = new Delegate<MainResultState>(this, loadResource);
	mBeforeSaveDelegate = new Delegate<MainResultState>(this, beforeSave);
}

/*
 * --INFO--
 * Address:	8021A0F8
 * Size:	000104
 */
void MainResultState::init(SingleGameSection* game, StateArg* arg)
{
	gameSystem->setFlag(GAMESYS_Unk3);
	mGameSect = game;
	game->startFadeblack();

	int money = playData->mPokoCount;
	accountEarnings(game, playData->mMainCropMemory, false);
	playData->mPokoCount = money;
	sys->dvdLoadUseCallBack(&mDvdThread, mLoadDelegate);
	mStatus               = 0;
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

/*
 * --INFO--
 * Address:	8021A1FC
 * Size:	000024
 */
void MainResultState::beforeSave() { playData->setPikminCounts_Yesterday(); }

/*
 * --INFO--
 * Address:	8021A220
 * Size:	000088
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

/*
 * --INFO--
 * Address:	........
 * Size:	000148
 */
unknown MainResultState::open2D(SingleGameSection* game)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8021A2A8
 * Size:	0003E8
 */
void MainResultState::exec(SingleGameSection* game)
{
	switch (mStatus) {
	case 0:
		if (mDvdThread.mMode == 2) {
			mStatus = 2;
			MoviePlayArg arg("s02_dayend_result", nullptr, game->mMovieFinishCallback, 0);
			moviePlayer->play(arg);
			gameSystem->setPause(false, "mr_load", 3);
			mCounter = 0;
		}
		game->BaseHIOSection::doUpdate();
		break;
	case 1:
		mStartTimer -= sys->mDeltaTime;
		if (mStartTimer < 0.0f)
			mStatus = 3;
		break;
	case 2:
		if (mCounter++ >= 199 || mControl->getButtonDown() & Controller::PRESS_A) {
			mStatus = 3;
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
		break;
	case 3:
		switch (Screen::gGame2DMgr->check_DayEndResult()) {
		case 1:
			moviePlayer->unsuspend(1, false);
			break;
		case 2:
			moviePlayer->stop();
			game->clearHeap();
			transit(game, SGS_File, nullptr);
			return;
			break;
		}
		break;
	case 4:
		mStartTimer -= sys->mDeltaTime;
		if (mStartTimer < 0.0f) {
			game->clearHeap();
			FOREACH_NODE(Result::TNode, mResultNode.mChild, node) { }
			transit(game, SGS_Select, nullptr);
			return;
		}
		return;
	}
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

	/*
	stwu     r1, -0xc0(r1)
	mflr     r0
	stw      r0, 0xc4(r1)
	stmw     r27, 0xac(r1)
	mr       r30, r3
	mr       r31, r4
	lhz      r0, 0x10(r3)
	cmpwi    r0, 2
	beq      lbl_8021A3B0
	bge      lbl_8021A2E0
	cmpwi    r0, 0
	beq      lbl_8021A2F0
	bge      lbl_8021A380
	b        lbl_8021A5B8

lbl_8021A2E0:
	cmpwi    r0, 4
	beq      lbl_8021A550
	bge      lbl_8021A5B8
	b        lbl_8021A4E8

lbl_8021A2F0:
	lwz      r0, 0xe4(r30)
	cmpwi    r0, 2
	bne      lbl_8021A374
	li       r0, 2
	lis      r3, lbl_80482598@ha
	sth      r0, 0x10(r30)
	addi     r5, r3, lbl_80482598@l
	lfs      f0, lbl_8051A038@sda21(r2)
	li       r0, 0
	lwz      r6, 0xc8(r31)
	addi     r4, r1, 8
	lwz      r3, moviePlayer__4Game@sda21(r13)
	stw      r5, 8(r1)
	stw      r0, 0xc(r1)
	stw      r6, 0x14(r1)
	stfs     f0, 0x20(r1)
	stfs     f0, 0x24(r1)
	stfs     f0, 0x28(r1)
	stfs     f0, 0x2c(r1)
	stw      r0, 0x30(r1)
	stw      r0, 0x18(r1)
	stw      r0, 0x10(r1)
	stw      r0, 0x34(r1)
	stw      r0, 0x1c(r1)
	stw      r0, 0x38(r1)
	bl       play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
	lwz      r3, gameSystem__4Game@sda21(r13)
	li       r4, 0
	addi     r5, r2, lbl_8051A03C@sda21
	li       r6, 3
	bl       setPause__Q24Game10GameSystemFbPci
	li       r0, 0
	stw      r0, 0x20(r30)

lbl_8021A374:
	mr       r3, r31
	bl       doUpdate__Q24Game14BaseHIOSectionFv
	b        lbl_8021A67C

lbl_8021A380:
	lwz      r3, sys@sda21(r13)
	lfs      f2, 0x14(r30)
	lfs      f1, 0x54(r3)
	lfs      f0, lbl_8051A038@sda21(r2)
	fsubs    f1, f2, f1
	stfs     f1, 0x14(r30)
	lfs      f1, 0x14(r30)
	fcmpo    cr0, f1, f0
	bge      lbl_8021A5B8
	li       r0, 3
	sth      r0, 0x10(r30)
	b        lbl_8021A5B8

lbl_8021A3B0:
	lwz      r3, 0x20(r30)
	addi     r0, r3, 1
	cmpwi    r0, 0xc7
	stw      r0, 0x20(r30)
	bge      lbl_8021A3D4
	lwz      r3, 0x18(r30)
	lwz      r0, 0x1c(r3)
	rlwinm.  r0, r0, 0, 0x17, 0x17
	beq      lbl_8021A5B8

lbl_8021A3D4:
	li       r0, 3
	sth      r0, 0x10(r30)
	lwz      r3, playData__4Game@sda21(r13)
	bl       clearCurrentCave__Q24Game8PlayDataFv
	lwz      r3, 0x13c(r30)
	li       r0, 1
	lwz      r4, playData__4Game@sda21(r13)
	stb      r0, 0x19(r4)
	stw      r3, 0x1c(r4)
	lwz      r4, playData__4Game@sda21(r13)
	lwz      r6, 0xe8(r4)
	cmpwi    r6, 0xbb8
	bge      lbl_8021A410
	li       r29, 0x31
	b        lbl_8021A468

lbl_8021A410:
	cmpwi    r6, 0x1388
	bge      lbl_8021A420
	li       r29, 0x32
	b        lbl_8021A468

lbl_8021A420:
	cmpwi    r6, 0x1f40
	bge      lbl_8021A430
	li       r29, 0x33
	b        lbl_8021A468

lbl_8021A430:
	cmpwi    r6, 0x2710
	bge      lbl_8021A440
	li       r29, 0x34
	b        lbl_8021A468

lbl_8021A440:
	lbz      r3, 0x2f(r4)
	rlwinm.  r0, r3, 0, 0x1e, 0x1e
	beq      lbl_8021A454
	li       r29, 0x37
	b        lbl_8021A468

lbl_8021A454:
	rlwinm.  r0, r3, 0, 0x1d, 0x1d
	beq      lbl_8021A464
	li       r29, 0x36
	b        lbl_8021A468

lbl_8021A464:
	li       r29, 0x35

lbl_8021A468:
	lbz      r0, 0x2f(r4)
	lis      r3, __vt__Q32og6Screen14DispMemberBase@ha
	lwz      r5, 0xbc(r4)
	addi     r10, r3, __vt__Q32og6Screen14DispMemberBase@l
	lwz      r28, 0xb8(r30)
	lis      r4, __vt__Q32kh6Screen16DispDayEndResult@ha
	li       r9, 0
	lis      r3, __vt__Q32kh6Screen20DispDayEndResultTitl@ha
	clrlwi   r7, r0, 0x1f
	addi     r8, r4, __vt__Q32kh6Screen16DispDayEndResult@l
	stw      r10, 0x3c(r1)
	addi     r0, r3, __vt__Q32kh6Screen20DispDayEndResultTitl@l
	lwz      r27, theTekiHeap@sda21(r13)
	addi     r3, r1, 0x4c
	stw      r10, 0x44(r1)
	addi     r4, r30, 0x68
	stw      r9, 0x40(r1)
	stw      r8, 0x3c(r1)
	stw      r9, 0x48(r1)
	stw      r0, 0x44(r1)
	bl       __ct__Q32kh6Screen20DispDayEndResultItemFPQ34Game6Result5TNodeiib
	mr       r4, r28
	addi     r3, r1, 0x70
	bl       __ct__Q32kh6Screen20DispDayEndResultIncPFPCQ32kh6Screen4IncP
	mr       r4, r27
	mr       r5, r29
	addi     r3, r1, 0x80
	bl
__ct__Q32kh6Screen20DispDayEndResultMailFP7JKRHeapQ32kh6Screen12MailCategory lwz
r3, gGame2DMgr__6Screen@sda21(r13) addi     r4, r1, 0x3c bl
open_DayEndResult__Q26Screen9Game2DMgrFRQ32kh6Screen16DispDayEndResult b
lbl_8021A5B8

lbl_8021A4E8:
	lwz      r3, gGame2DMgr__6Screen@sda21(r13)
	bl       check_DayEndResult__Q26Screen9Game2DMgrCFv
	cmpwi    r3, 2
	beq      lbl_8021A51C
	bge      lbl_8021A5B8
	cmpwi    r3, 1
	bge      lbl_8021A508
	b        lbl_8021A5B8

lbl_8021A508:
	lwz      r3, moviePlayer__4Game@sda21(r13)
	li       r4, 1
	li       r5, 0
	bl       unsuspend__Q24Game11MoviePlayerFlb
	b        lbl_8021A5B8

lbl_8021A51C:
	lwz      r3, moviePlayer__4Game@sda21(r13)
	bl       stop__Q24Game11MoviePlayerFv
	mr       r3, r31
	bl       clearHeap__Q24Game15BaseGameSectionFv
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_8021A67C

lbl_8021A550:
	lwz      r3, sys@sda21(r13)
	lfs      f2, 0x14(r30)
	lfs      f1, 0x54(r3)
	lfs      f0, lbl_8051A038@sda21(r2)
	fsubs    f1, f2, f1
	stfs     f1, 0x14(r30)
	lfs      f1, 0x14(r30)
	fcmpo    cr0, f1, f0
	bge      lbl_8021A67C
	mr       r3, r31
	bl       clearHeap__Q24Game15BaseGameSectionFv
	lwz      r3, 0x8c(r30)
	b        lbl_8021A588

lbl_8021A584:
	lwz      r3, 0x18(r3)

lbl_8021A588:
	cmplwi   r3, 0
	bne      lbl_8021A584
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 1
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_8021A67C
	b        lbl_8021A67C

lbl_8021A5B8:
	lwz      r3, mgr__Q24Game9ItemOnyon@sda21(r13)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r3, mgr__Q24Game9ItemOnyon@sda21(r13)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	lwz      r3, mgr__Q24Game9ItemOnyon@sda21(r13)
	lwz      r4, sys@sda21(r13)
	lwz      r12, 0(r3)
	lfs      f1, 0x54(r4)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	lwz      r3, sys@sda21(r13)
	lwz      r3, 0x24(r3)
	lwz      r27, 0x25c(r3)
	bl       setViewCalcModeInd__Q28SysShape5ModelFv
	mr       r3, r31
	mr       r4, r27
	li       r5, 0
	bl       j3dSetView__Q24Game15BaseGameSectionFP8Viewportb
	lwz      r3, moviePlayer__4Game@sda21(r13)
	li       r5, 0
	lwz      r4, 0x10c(r31)
	bl       update__Q24Game11MoviePlayerFP10ControllerP10Controller
	lwz      r3, particle2dMgr@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_8021A63C
	bl       update__14TParticle2dMgrFv

lbl_8021A63C:
	lwz      r3, particleMgr@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_8021A658
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl

lbl_8021A658:
	lwz      r3, gGame2DMgr__6Screen@sda21(r13)
	bl       update__Q26Screen9Game2DMgrFv
	lwz      r3, 0x128(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	bl       doUpdate__Q24Game14BaseHIOSectionFv

lbl_8021A67C:
	lmw      r27, 0xac(r1)
	lwz      r0, 0xc4(r1)
	mtlr     r0
	addi     r1, r1, 0xc0
	blr
	*/
}

/*
 * --INFO--
 * Address:	8021A690
 * Size:	000030
 */
void MainResultState::onMovieDone(SingleGameSection*, MovieConfig*, u32, u32)
{
	mStatus     = 4;
	mStartTimer = 0.0f;
	PSMCancelToPauseOffMainBgm();
}

/*
 * --INFO--
 * Address:	8021A6C0
 * Size:	00035C
 */
void MainResultState::createResultNodes()
{
	JKRHeap* backup = JKRGetCurrentHeap();
	mMainHeap->becomeCurrentHeap();
	PelletCropMemory* mem = playData->mMainCropMemory;

	KindCounter& counter     = mem->mItem;
	PelletItem::Mgr* itemMgr = PelletItem::mgr;
	for (int i = 0; i < counter.mNumKinds; i++) {
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

	KindCounter& counter2      = mem->mOtakara;
	PelletOtakara::Mgr* otaMgr = PelletOtakara::mgr;
	for (int i = 0; i < counter2.mNumKinds; i++) {
		if (*counter2(i)) {
			PelletConfig* config = otaMgr->getPelletConfig(i);
			int id               = PelletList::Mgr::getOffsetFromDictionaryNo(config->mParams.mDictionary.mData - 1);
			u64 tag              = Result::TNode::convertByMorimun(id);
			Result::TNode* node  = new Result::TNode;
			int money            = config->mParams.mMoney.mData;
			node->setTNode(tag, mResultTex.getItemTexture(i), *counter2(i), money * *counter2(i), money);
			mResultNode.add(node);
			playData->mTreasureCount += *counter2(i);
		}
	}

	KindCounter& counter3          = mem->mCarcass;
	PelletCarcass::Mgr* carcassMgr = PelletCarcass::mgr;
	int money                      = 0;
	int num                        = 0;
	for (int i = 0; i < counter3.mNumKinds; i++) {
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

/*
 * --INFO--
 * Address:	8021AA1C
 * Size:	000094
 */
void MainResultState::draw(SingleGameSection* game, Graphics& gfx)
{
	if (mStatus == 2 || mStatus == 3 || mStatus == 4) {
		cameraMgr->update();
		game->draw3D(gfx);
		moviePlayer->drawLoading(gfx);
		game->draw2D(gfx);
	}
}

/*
 * --INFO--
 * Address:	8021AAB0
 * Size:	00007C
 */
void MainResultState::cleanup(SingleGameSection* game)
{
	Screen::gGame2DMgr->mScreenMgr->reset();
	playData->mMainCropMemory->clear();
	if (mPelletMgr) {
		gameSystem->addObjectMgr_reuse(mPelletMgr);
	}
	mGameSect->_168 = nullptr;
	gameSystem->resetFlag(GAMESYS_Unk3);
}

} // namespace SingleGame
} // namespace Game
