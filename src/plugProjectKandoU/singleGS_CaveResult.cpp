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

/*
 * --INFO--
 * Address:	8021AC20
 * Size:	0000F8
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

/*
 * --INFO--
 * Address:	8021AD18
 * Size:	000124
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
	mGameState = static_cast<CaveResultArg*>(arg)->_00;

	mResultTextures = nullptr;
	section->refreshHIO();
	accountEarnings(section, playData->mCaveCropMemory, true);

	mStatus        = 0;
	mResultTexHeap = nullptr;
	PSMCancelToPauseOffMainBgm();
}

// /*
//  * --INFO--
//  * Address:	........
//  * Size:	00007C
//  */
// void CaveResultState::initNext(SingleGameSection* section)
// {
// 	// UNUSED
// }

/*
 * --INFO--
 * Address:	8021AE3C
 * Size:	000240
 */
void CaveResultState::loadResource()
{
	ResultTexMgr::Arg arg;
	arg.mHeap              = mMainHeap;
	arg.mOtakaraConfigList = PelletOtakara::mgr->mConfigList;
	arg.mItemConfigList    = PelletItem::mgr->mConfigList;
	mResultTexHeap         = arg.mHeap;
	mResultTextures        = new ResultTexMgr::Mgr;
	mResultTextures->create(arg);

	JUTTexture* texture = new JUTTexture(sys->getRenderModeObj()->fbWidth, sys->getRenderModeObj()->efbHeight, GX_TF_RGB565);
	texture->mMinFilter = 0;
	texture->mMagFilter = 0;
	mSection->_168      = texture;

	createResultNodes();

	PSGame::SceneInfo sceneInfo;
	sceneInfo.mSceneType = PSGame::SceneInfo::CAVE_RESULTS;
	sceneInfo.mCameras   = 0;
	PSMSetSceneInfo(sceneInfo);
	PSMGetSceneMgr()->mScenes->mChild->scene1stLoadSync();
	PSMGetSceneMgrCheck()->getChildScene()->startMainSeq();

	/*
	stwu     r1, -0x60(r1)
	mflr     r0
	li       r6, 0
	stw      r0, 0x64(r1)
	li       r0, -1
	stw      r31, 0x5c(r1)
	stw      r30, 0x58(r1)
	mr       r30, r3
	lis      r3, lbl_804825B0@ha
	stw      r29, 0x54(r1)
	addi     r31, r3, lbl_804825B0@l
	li       r3, 0x40
	stw      r28, 0x50(r1)
	stw      r6, 0x10(r1)
	lwz      r5, mgr__Q24Game13PelletOtakara@sda21(r13)
	stw      r6, 0xc(r1)
	lwz      r4, mgr__Q24Game10PelletItem@sda21(r13)
	stw      r6, 8(r1)
	stb      r0, 0x14(r1)
	lwz      r6, 0xf0(r30)
	stw      r6, 0x10(r1)
	lwz      r0, 8(r5)
	stw      r0, 8(r1)
	lwz      r0, 8(r4)
	stw      r0, 0xc(r1)
	stw      r6, 0x74(r30)
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8021AEB8
	bl       __ct__Q34Game12ResultTexMgr3MgrFv
	mr       r0, r3

lbl_8021AEB8:
	stw      r0, 0x70(r30)
	addi     r4, r1, 8
	lwz      r3, 0x70(r30)
	bl       create__Q34Game12ResultTexMgr3MgrFRQ34Game12ResultTexMgr3Arg
	li       r3, 0x40
	bl       __nw__FUl
	or.      r29, r3, r3
	beq      lbl_8021AEFC
	bl       getRenderModeObj__6SystemFv
	lhz      r28, 6(r3)
	bl       getRenderModeObj__6SystemFv
	lhz      r4, 4(r3)
	mr       r3, r29
	mr       r5, r28
	li       r6, 4
	bl       __ct__10JUTTextureFii9_GXTexFmt
	mr       r29, r3

lbl_8021AEFC:
	li       r0, 0
	mr       r3, r30
	stb      r0, 0x32(r29)
	stb      r0, 0x33(r29)
	lwz      r4, 0xec(r30)
	stw      r29, 0x168(r4)
	bl       createResultNodes__Q34Game10SingleGame15CaveResultStateFv
	addi     r3, r1, 0x18
	bl       __ct__Q26PSGame9SceneInfoFv
	lwz      r0, spSceneMgr__8PSSystem@sda21(r13)
	li       r4, 9
	li       r3, 0
	stb      r4, 0x1e(r1)
	cmplwi   r0, 0
	stb      r3, 0x1f(r1)
	bne      lbl_8021AF50
	addi     r3, r31, 0x50
	addi     r5, r31, 0x44
	li       r4, 0x1d3
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8021AF50:
	lwz      r3, spSceneMgr__8PSSystem@sda21(r13)
	addi     r4, r1, 0x18
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	lwz      r0, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_8021AF88
	addi     r3, r31, 0x50
	addi     r5, r31, 0x44
	li       r4, 0x1d3
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8021AF88:
	lwz      r28, spSceneMgr__8PSSystem@sda21(r13)
	lwz      r0, 4(r28)
	cmplwi   r0, 0
	bne      lbl_8021AFAC
	addi     r3, r31, 0x5c
	addi     r5, r31, 0x44
	li       r4, 0xc7
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8021AFAC:
	lwz      r3, 4(r28)
	lwz      r3, 4(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r0, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_8021AFE4
	addi     r3, r31, 0x50
	addi     r5, r31, 0x44
	li       r4, 0x1d3
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8021AFE4:
	lwz      r28, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r28, 0
	bne      lbl_8021B004
	addi     r3, r31, 0x50
	addi     r5, r31, 0x44
	li       r4, 0x1dc
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8021B004:
	lwz      r0, 4(r28)
	cmplwi   r0, 0
	bne      lbl_8021B024
	addi     r3, r31, 0x5c
	addi     r5, r31, 0x44
	li       r4, 0xcf
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8021B024:
	lwz      r3, 4(r28)
	lwz      r28, 4(r3)
	cmplwi   r28, 0
	bne      lbl_8021B048
	addi     r3, r31, 0x5c
	addi     r5, r31, 0x68
	li       r4, 0xd1
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8021B048:
	mr       r3, r28
	lwz      r12, 0(r28)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x64(r1)
	lwz      r31, 0x5c(r1)
	lwz      r30, 0x58(r1)
	lwz      r29, 0x54(r1)
	lwz      r28, 0x50(r1)
	mtlr     r0
	addi     r1, r1, 0x60
	blr
	*/
}

// /*
//  * --INFO--
//  * Address:	........
//  * Size:	000134
//  */
// unknown CaveResultState::open2D(Game::SingleGameSection*)
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	8021B07C
 * Size:	0002E8
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
		if (mDvdThread.mMode != 2) {
			return;
		}
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
		kh::Screen::DispCaveResult disp(&mResultNodes, DeathMgr::get_cave(7), otakaraNum, otakaraMax, playData->mPokoCount,
		                                playData->isStoryFlag(STORY_DebtPaid), mMainHeap, (mIsCaveComplete && otakaraMax >= otakaraNum));
		DeathMgr::account_cave();
		BirthMgr::account_cave();
		JUT_ASSERTLINE(408, Screen::gGame2DMgr->open_CaveResult(disp), "cannot open caveresult\n");
		return;

	case 2:
		mStartTimer -= sys->mDeltaTime;
		if (mStartTimer < 0.0f) {
			mStatus = 3;
		}
		break;

	case 3:
		switch (Screen::gGame2DMgr->check_CaveResult()) {
		case 1:
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
	/*
	stwu     r1, -0x80(r1)
	mflr     r0
	stw      r0, 0x84(r1)
	stmw     r25, 0x64(r1)
	mr       r29, r3
	lis      r3, lbl_804825B0@ha
	mr       r30, r4
	addi     r31, r3, lbl_804825B0@l
	lhz      r0, 0x12(r29)
	cmpwi    r0, 2
	beq      lbl_8021B24C
	bge      lbl_8021B0BC
	cmpwi    r0, 0
	beq      lbl_8021B0CC
	bge      lbl_8021B11C
	b        lbl_8021B340

lbl_8021B0BC:
	cmpwi    r0, 4
	beq      lbl_8021B2D8
	bge      lbl_8021B340
	b        lbl_8021B27C

lbl_8021B0CC:
	mr       r3, r30
	bl       clearHeap__Q24Game15BaseGameSectionFv
	lwz      r0, sCurrentHeap__7JKRHeap@sda21(r13)
	stw      r0, 0xf4(r29)
	lwz      r26, 0xf4(r29)
	mr       r3, r26
	bl       getFreeSize__7JKRHeapFv
	mr       r4, r26
	li       r5, 1
	bl       create__10JKRExpHeapFUlP7JKRHeapb
	stw      r3, 0xf0(r29)
	lwz      r3, 0xf0(r29)
	bl       becomeCurrentHeap__7JKRHeapFv
	li       r0, 1
	addi     r4, r29, 0x80
	sth      r0, 0x12(r29)
	lwz      r3, sys@sda21(r13)
	lwz      r5, 0x7c(r29)
	bl       dvdLoadUseCallBack__6SystemFP16DvdThreadCommandP9IDelegate
	b        lbl_8021B350

lbl_8021B11C:
	lwz      r0, 0x98(r29)
	cmpwi    r0, 2
	bne      lbl_8021B350
	lfs      f0, lbl_8051A048@sda21(r2)
	li       r0, 2
	stfs     f0, 0x18(r29)
	sth      r0, 0x12(r29)
	lwz      r0, 0xd4(r30)
	stw      r0, 0x18(r30)
	lwz      r3, 0xd4(r30)
	lfs      f1, 0x18(r29)
	bl       start__8WipeBaseFf
	lwz      r3, playData__4Game@sda21(r13)
	bl       clearCurrentCave__Q24Game8PlayDataFv
	lwz      r5, playData__4Game@sda21(r13)
	li       r4, 2
	li       r0, 0
	mr       r3, r30
	stb      r4, 0x19(r5)
	stw      r0, 0x1c(r5)
	lwz      r12, 0(r30)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	or.      r28, r3, r3
	bne      lbl_8021B198
	addi     r3, r31, 0x2c
	addi     r5, r31, 0x44
	li       r4, 0x17d
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8021B198:
	lwz      r3, playData__4Game@sda21(r13)
	addi     r5, r30, 0x230
	lwz      r4, 0x48(r28)
	bl       getOtakaraNum_Course_CaveID__Q24Game8PlayDataFiR4ID32
	mr       r27, r3
	lwz      r3, playData__4Game@sda21(r13)
	lwz      r4, 0x48(r28)
	addi     r5, r30, 0x230
	bl       getOtakaraMax_Course_CaveID__Q24Game8PlayDataFiR4ID32
	lbz      r0, 0xf8(r29)
	mr       r28, r3
	li       r30, 0
	cmplwi   r0, 0
	beq      lbl_8021B1DC
	cmpw     r27, r28
	blt      lbl_8021B1DC
	li       r30, 1

lbl_8021B1DC:
	lwz      r25, playData__4Game@sda21(r13)
	li       r3, 7
	lbz      r0, 0x2f(r25)
	clrlwi   r26, r0, 0x1f
	bl       get_cave__Q24Game8DeathMgrFi
	stw      r30, 8(r1)
	mr       r5, r3
	mr       r6, r27
	mr       r7, r28
	lwz      r8, 0xe8(r25)
	mr       r9, r26
	lwz      r10, 0xf0(r29)
	addi     r3, r1, 0x20
	addi     r4, r29, 0x20
	bl
__ct__Q32kh6Screen14DispCaveResultFPQ34Game6Result5TNodeUlUlUlUlbP7JKRHeapb bl
account_cave__Q24Game8DeathMgrFv bl       account_cave__Q24Game8BirthMgrFv lwz
r3, gGame2DMgr__6Screen@sda21(r13) addi     r4, r1, 0x20 bl
open_CaveResult__Q26Screen9Game2DMgrFRQ32kh6Screen14DispCaveResult clrlwi.  r0,
r3, 0x18 bne      lbl_8021B350 addi     r3, r31, 0x2c addi     r5, r31, 0x8c li
r4, 0x198 crclr    6 bl       panic_f__12JUTExceptionFPCciPCce b lbl_8021B350

lbl_8021B24C:
	lwz      r3, sys@sda21(r13)
	lfs      f2, 0x18(r29)
	lfs      f1, 0x54(r3)
	lfs      f0, lbl_8051A04C@sda21(r2)
	fsubs    f1, f2, f1
	stfs     f1, 0x18(r29)
	lfs      f1, 0x18(r29)
	fcmpo    cr0, f1, f0
	bge      lbl_8021B340
	li       r0, 3
	sth      r0, 0x12(r29)
	b        lbl_8021B340

lbl_8021B27C:
	lwz      r3, gGame2DMgr__6Screen@sda21(r13)
	bl       check_CaveResult__Q26Screen9Game2DMgrCFv
	cmpwi    r3, 1
	beq      lbl_8021B290
	b        lbl_8021B340

lbl_8021B290:
	lhz      r5, 0x10(r29)
	li       r4, 0
	li       r0, 1
	mr       r3, r30
	stb      r4, 0x18(r1)
	stb      r0, 0x19(r1)
	stb      r4, 0x1a(r1)
	sth      r5, 0x1c(r1)
	bl       loadMainMapSituation__Q24Game17SingleGameSectionFv
	mr       r3, r29
	mr       r4, r30
	lwz      r12, 0(r29)
	addi     r6, r1, 0x18
	li       r5, 2
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_8021B350

lbl_8021B2D8:
	lwz      r3, sys@sda21(r13)
	lfs      f2, 0x18(r29)
	lfs      f1, 0x54(r3)
	lfs      f0, lbl_8051A04C@sda21(r2)
	fsubs    f1, f2, f1
	stfs     f1, 0x18(r29)
	lfs      f1, 0x18(r29)
	fcmpo    cr0, f1, f0
	bge      lbl_8021B340
	lhz      r4, 0x10(r29)
	li       r0, 0
	mr       r3, r30
	stb      r0, 0x10(r1)
	stb      r0, 0x11(r1)
	stb      r0, 0x12(r1)
	sth      r4, 0x14(r1)
	bl       loadMainMapSituation__Q24Game17SingleGameSectionFv
	mr       r3, r29
	mr       r4, r30
	lwz      r12, 0(r29)
	addi     r6, r1, 0x10
	li       r5, 2
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_8021B350

lbl_8021B340:
	lwz      r3, gGame2DMgr__6Screen@sda21(r13)
	bl       update__Q26Screen9Game2DMgrFv
	lwz      r3, particle2dMgr@sda21(r13)
	bl       update__14TParticle2dMgrFv

lbl_8021B350:
	lmw      r25, 0x64(r1)
	lwz      r0, 0x84(r1)
	mtlr     r0
	addi     r1, r1, 0x80
	blr
	*/
}

/*
 * --INFO--
 * Address:	8021B364
 * Size:	0000C0
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

/*
 * --INFO--
 * Address:	8021B424
 * Size:	0000C4
 */
void CaveResultState::cleanup(SingleGameSection* section)
{
	PSSystem::SceneMgr* mgr = PSSystem::getSceneMgr();
	PSSystem::checkSceneMgr(mgr);
	mgr->deleteCurrentScene();
	playData->mCaveCropMemory->clear();
	_14            = 0;
	mSection->_168 = nullptr;
	mMainHeap->freeAll();
	mMainHeap->destroy();
	mMainHeap = nullptr;
	mBackupHeap->becomeCurrentHeap();
}

/*
 * --INFO--
 * Address:	8021B4E8
 * Size:	00040C
 */
void CaveResultState::createResultNodes()
{
	mIsCaveComplete = 0;
	sys->startChangeCurrentHeap(mResultTexHeap);
	PelletCropMemory* cropMem = playData->mCaveCropMemory->createClone();
	if (mSection->mDoTrackCarcass) {
		PelletCarcass::Mgr* carcassMgr = PelletCarcass::mgr;
		KindCounter& counter           = playData->mCaveCropMemory->mCarcass;
		for (int i = 0; i < counter.mNumKinds; i++) {
			if (*counter(i) && carcassMgr->getPelletConfig(i)) {
				*counter(i) = 0;
			}
		}
	}

	playData->mMainCropMemory->addTo(playData->mCaveCropMemory);
	playData->mCaveCropMemory->clear();

	PelletItem::Mgr* itemMgr = PelletItem::mgr;
	KindCounter& counter     = cropMem->mItem;
	for (int i = 0; i < counter.mNumKinds; i++) {
		if (*counter(i) || *mSection->mItemCounter(i)) {
			mIsCaveComplete      = true;
			PelletConfig* config = itemMgr->getPelletConfig(i);
			int id               = PelletList::Mgr::getOffsetFromDictionaryNo(config->mParams.mDictionary.mData - 1);
			u64 tag              = Result::TNode::convertByMorimun(id);
			Result::TNode* node  = new Result::TNode;
			int money            = config->mParams.mMoney.mData;
			node->setTNode(tag, mResultTextures->getItemTexture(i), *counter(i), money * *counter(i), money, *mSection->mItemCounter(i));
			mResultNodes.add(node);
		}
	}

	PelletOtakara::Mgr* otaMgr = PelletOtakara::mgr;
	KindCounter& counter2      = cropMem->mOtakara;
	for (int i = 0; i < counter2.mNumKinds; i++) {
		if (*counter2(i) || *mSection->mOtakaraCounter(i)) {
			mIsCaveComplete      = true;
			PelletConfig* config = otaMgr->getPelletConfig(i);
			int id               = PelletList::Mgr::getOffsetFromDictionaryNo(config->mParams.mDictionary.mData - 1);
			u64 tag              = Result::TNode::convertByMorimun(id);
			Result::TNode* node  = new Result::TNode;
			int money            = config->mParams.mMoney.mData;
			node->setTNode(tag, mResultTextures->getOtakaraTexture(i), *counter2(i), money * *counter2(i), money,
			               *mSection->mOtakaraCounter(i));
			mResultNodes.add(node);
		}
	}

	PelletCarcass::Mgr* carcassMgr = PelletCarcass::mgr;
	KindCounter& counter3          = cropMem->mCarcass;
	int num                        = 0;
	int value                      = 0;
	for (int i = 0; i < counter3.mNumKinds; i++) {
		if (*counter3(i)) {
			PelletConfig* config = carcassMgr->getPelletConfig(i);
			num += *counter3(i);
			int money = config->mParams.mMoney.mData;
			value += *counter3(i) * money;
		}
	}
	if (num > 0) {
		Result::TNode* node = new Result::TNode;
		bool track          = mSection->mDoTrackCarcass;
		JUTTexture* tex     = mResultTextures->getCarcassTexture();
		node->setTNode(0, tex, num, value, -1, track);
		mResultNodes.add(node);
	}

	sys->endChangeCurrentHeap();
	mSection->clearCaveOtakaraEarningsAndDrops();

	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	li       r0, 0
	stmw     r20, 0x10(r1)
	mr       r31, r3
	stb      r0, 0xf8(r3)
	lwz      r3, sys@sda21(r13)
	lwz      r4, 0x74(r31)
	bl       startChangeCurrentHeap__6SystemFP7JKRHeap
	lwz      r3, playData__4Game@sda21(r13)
	lwz      r3, 0xb8(r3)
	bl       createClone__Q24Game16PelletCropMemoryFv
	lwz      r4, 0xec(r31)
	mr       r30, r3
	lbz      r0, 0x274(r4)
	cmplwi   r0, 0
	beq      lbl_8021B598
	lwz      r3, playData__4Game@sda21(r13)
	li       r23, 0
	lwz      r20, mgr__Q24Game13PelletCarcass@sda21(r13)
	li       r22, 0
	lwz      r3, 0xb8(r3)
	addi     r21, r3, 0x14
	b        lbl_8021B58C

lbl_8021B54C:
	mr       r3, r21
	mr       r4, r23
	bl       __cl__Q24Game11KindCounterFi
	lbz      r0, 0(r3)
	cmplwi   r0, 0
	beq      lbl_8021B588
	mr       r3, r20
	mr       r4, r23
	bl       getPelletConfig__Q24Game13BasePelletMgrFi
	cmplwi   r3, 0
	beq      lbl_8021B588
	mr       r3, r21
	mr       r4, r23
	bl       __cl__Q24Game11KindCounterFi
	stb      r22, 0(r3)

lbl_8021B588:
	addi     r23, r23, 1

lbl_8021B58C:
	lhz      r0, 0(r21)
	cmpw     r23, r0
	blt      lbl_8021B54C

lbl_8021B598:
	lwz      r4, playData__4Game@sda21(r13)
	lwz      r3, 0xb4(r4)
	lwz      r4, 0xb8(r4)
	bl       addTo__Q24Game16PelletCropMemoryFPQ24Game16PelletCropMemory
	lwz      r3, playData__4Game@sda21(r13)
	lwz      r3, 0xb8(r3)
	bl       clear__Q24Game16PelletCropMemoryFv
	lwz      r29, mgr__Q24Game10PelletItem@sda21(r13)
	addi     r28, r30, 0xc
	li       r27, 0
	b        lbl_8021B6C0

lbl_8021B5C4:
	mr       r3, r28
	mr       r4, r27
	bl       __cl__Q24Game11KindCounterFi
	lbz      r0, 0(r3)
	cmplwi   r0, 0
	bne      lbl_8021B5F8
	lwz      r3, 0xec(r31)
	mr       r4, r27
	addi     r3, r3, 0x26c
	bl       __cl__Q24Game11KindCounterFi
	lbz      r0, 0(r3)
	cmplwi   r0, 0
	beq      lbl_8021B6BC

lbl_8021B5F8:
	li       r0, 1
	mr       r3, r29
	stb      r0, 0xf8(r31)
	mr       r4, r27
	bl       getPelletConfig__Q24Game13BasePelletMgrFi
	mr       r22, r3
	lhz      r3, 0x254(r3)
	addi     r3, r3, -1
	bl       getOffsetFromDictionaryNo__Q34Game10PelletList3MgrFi
	bl       convertByMorimun__Q34Game6Result5TNodeFi
	mr       r0, r3
	mr       r25, r4
	li       r3, 0x50
	mr       r26, r0
	bl       __nw__FUl
	or.      r21, r3, r3
	beq      lbl_8021B644
	bl       __ct__Q34Game6Result5TNodeFv
	mr       r21, r3

lbl_8021B644:
	lwz      r3, 0xec(r31)
	mr       r4, r27
	lwz      r20, 0x170(r22)
	addi     r3, r3, 0x26c
	bl       __cl__Q24Game11KindCounterFi
	lbz      r24, 0(r3)
	mr       r3, r28
	mr       r4, r27
	bl       __cl__Q24Game11KindCounterFi
	lbz      r0, 0(r3)
	mr       r3, r28
	mr       r4, r27
	mullw    r23, r20, r0
	bl       __cl__Q24Game11KindCounterFi
	lbz      r22, 0(r3)
	mr       r4, r27
	lwz      r3, 0x70(r31)
	bl       getItemTexture__Q34Game12ResultTexMgr3MgrFi
	stw      r24, 8(r1)
	mr       r7, r3
	mr       r3, r21
	mr       r6, r25
	mr       r5, r26
	mr       r8, r22
	mr       r9, r23
	mr       r10, r20
	bl       setTNode__Q34Game6Result5TNodeFUxP10JUTTextureiiii
	mr       r4, r21
	addi     r3, r31, 0x20
	bl       add__Q24Game5DNodeFPQ24Game5DNode

lbl_8021B6BC:
	addi     r27, r27, 1

lbl_8021B6C0:
	lhz      r0, 0(r28)
	cmpw     r27, r0
	blt      lbl_8021B5C4
	lwz      r29, mgr__Q24Game13PelletOtakara@sda21(r13)
	addi     r25, r30, 4
	li       r26, 0
	b        lbl_8021B7D8

lbl_8021B6DC:
	mr       r3, r25
	mr       r4, r26
	bl       __cl__Q24Game11KindCounterFi
	lbz      r0, 0(r3)
	cmplwi   r0, 0
	bne      lbl_8021B710
	lwz      r3, 0xec(r31)
	mr       r4, r26
	addi     r3, r3, 0x264
	bl       __cl__Q24Game11KindCounterFi
	lbz      r0, 0(r3)
	cmplwi   r0, 0
	beq      lbl_8021B7D4

lbl_8021B710:
	li       r0, 1
	mr       r3, r29
	stb      r0, 0xf8(r31)
	mr       r4, r26
	bl       getPelletConfig__Q24Game13BasePelletMgrFi
	mr       r22, r3
	lhz      r3, 0x254(r3)
	addi     r3, r3, -1
	bl       getOffsetFromDictionaryNo__Q34Game10PelletList3MgrFi
	bl       convertByMorimun__Q34Game6Result5TNodeFi
	mr       r0, r3
	mr       r28, r4
	li       r3, 0x50
	mr       r27, r0
	bl       __nw__FUl
	or.      r21, r3, r3
	beq      lbl_8021B75C
	bl       __ct__Q34Game6Result5TNodeFv
	mr       r21, r3

lbl_8021B75C:
	lwz      r3, 0xec(r31)
	mr       r4, r26
	lwz      r20, 0x170(r22)
	addi     r3, r3, 0x264
	bl       __cl__Q24Game11KindCounterFi
	lbz      r22, 0(r3)
	mr       r3, r25
	mr       r4, r26
	bl       __cl__Q24Game11KindCounterFi
	lbz      r0, 0(r3)
	mr       r3, r25
	mr       r4, r26
	mullw    r23, r20, r0
	bl       __cl__Q24Game11KindCounterFi
	lbz      r24, 0(r3)
	mr       r4, r26
	lwz      r3, 0x70(r31)
	bl       getOtakaraTexture__Q34Game12ResultTexMgr3MgrFi
	stw      r22, 8(r1)
	mr       r7, r3
	mr       r3, r21
	mr       r6, r28
	mr       r5, r27
	mr       r8, r24
	mr       r9, r23
	mr       r10, r20
	bl       setTNode__Q34Game6Result5TNodeFUxP10JUTTextureiiii
	mr       r4, r21
	addi     r3, r31, 0x20
	bl       add__Q24Game5DNodeFPQ24Game5DNode

lbl_8021B7D4:
	addi     r26, r26, 1

lbl_8021B7D8:
	lhz      r0, 0(r25)
	cmpw     r26, r0
	blt      lbl_8021B6DC
	lwz      r20, mgr__Q24Game13PelletCarcass@sda21(r13)
	addi     r22, r30, 0x14
	li       r25, 0
	li       r26, 0
	li       r23, 0
	b        lbl_8021B858

lbl_8021B7FC:
	mr       r3, r22
	mr       r4, r23
	bl       __cl__Q24Game11KindCounterFi
	lbz      r0, 0(r3)
	cmplwi   r0, 0
	beq      lbl_8021B854
	mr       r3, r20
	mr       r4, r23
	bl       getPelletConfig__Q24Game13BasePelletMgrFi
	mr       r27, r3
	mr       r3, r22
	mr       r4, r23
	bl       __cl__Q24Game11KindCounterFi
	lbz      r0, 0(r3)
	mr       r3, r22
	lwz      r21, 0x170(r27)
	mr       r4, r23
	add      r26, r26, r0
	bl       __cl__Q24Game11KindCounterFi
	lbz      r0, 0(r3)
	mullw    r0, r0, r21
	add      r25, r25, r0

lbl_8021B854:
	addi     r23, r23, 1

lbl_8021B858:
	lhz      r0, 0(r22)
	cmpw     r23, r0
	blt      lbl_8021B7FC
	cmpwi    r26, 0
	ble      lbl_8021B8D0
	li       r3, 0x50
	bl       __nw__FUl
	or.      r21, r3, r3
	beq      lbl_8021B884
	bl       __ct__Q34Game6Result5TNodeFv
	mr       r21, r3

lbl_8021B884:
	lwz      r4, 0xec(r31)
	lwz      r3, 0x70(r31)
	lbz      r4, 0x274(r4)
	neg      r0, r4
	or       r0, r0, r4
	srwi     r22, r0, 0x1f
	bl       getCarcassTexture__Q34Game12ResultTexMgr3MgrFv
	stw      r22, 8(r1)
	mr       r7, r3
	mr       r3, r21
	mr       r8, r26
	mr       r9, r25
	li       r6, 0
	li       r5, 0
	li       r10, -1
	bl       setTNode__Q34Game6Result5TNodeFUxP10JUTTextureiiii
	mr       r4, r21
	addi     r3, r31, 0x20
	bl       add__Q24Game5DNodeFPQ24Game5DNode

lbl_8021B8D0:
	lwz      r3, sys@sda21(r13)
	bl       endChangeCurrentHeap__6SystemFv
	lwz      r3, 0xec(r31)
	bl       clearCaveOtakaraEarningsAndDrops__Q24Game17SingleGameSectionFv
	lmw      r20, 0x10(r1)
	lwz      r0, 0x44(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

} // namespace SingleGame
} // namespace Game
