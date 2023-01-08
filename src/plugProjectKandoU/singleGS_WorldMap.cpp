#include "Game/GameSystem.h"
#include "Game/MoviePlayer.h"
#include "Game/Navi.h"
#include "Game/gamePlayData.h"
#include "Screen/Game2DMgr.h"
#include "Game/SingleGame.h"
#include "kh/WorldMap.h"
#include "PSGame/SceneInfo.h"
#include "PSSystem/PSGame.h"
#include "PSGame/PikScene.h"
#include "TParticle2dMgr.h"
#include "JSystem/J2D/J2DPrint.h"

// probably have this somewhere easy to find
#define MAX_LEVELS 4

static const char name[] = "SingleGS_Game";

/*
    Generated from dpostproc

    .section .ctors, "wa"  # 0x80472F00 - 0x804732C0
    .4byte __sinit_singleGS_WorldMap_cpp

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_80482658
    lbl_80482658:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x53696E67
        .4byte 0x6C654753
        .4byte 0x5F47616D
        .4byte 0x65000000
        .4byte 0x50534761
        .4byte 0x6D652E68
        .4byte 0x00000000
        .asciz "P2Assert"
        .skip 3
        .4byte 0x73696E67
        .4byte 0x6C654753
        .4byte 0x5F576F72
        .4byte 0x6C644D61
        .4byte 0x702E6370
        .4byte 0x70000000
        .4byte 0x50534765
        .4byte 0x74536365
        .4byte 0x6E654D67
        .4byte 0x72206E75
        .4byte 0x6C6C0A00
        .4byte 0x50535363
        .4byte 0x656E652E
        .4byte 0x68000000
        .4byte 0x4D4F4320
        .4byte 0x3D204D6F
        .4byte 0x75736520
        .4byte 0x6F6E2043
        .4byte 0x61727321
        .4byte 0x0A000000
        .4byte 0x75736572
        .4byte 0x2F456269
        .4byte 0x73617761
        .4byte 0x2F656666
        .4byte 0x6563742F
        .4byte 0x65666632
        .4byte 0x645F776F
        .4byte 0x726C645F
        .4byte 0x6D61702E
        .4byte 0x6A706300
        .4byte 0x574F524C
        .4byte 0x445F4D41
        .4byte 0x505F4A50
        .4byte 0x43000000
        .4byte 0x70617274
        .4byte 0x69636C65
        .4byte 0x32644D67
        .4byte 0x72206E75
        .4byte 0x6C6C0A00
        .4byte 0x6D576F72
        .4byte 0x6C644D61
        .4byte 0x70206E75
        .4byte 0x6C6C0A00
    .global lbl_80482738
    lbl_80482738:
        .4byte 0x2A202564
        .4byte 0x20256420
        .4byte 0x25640000
        .4byte 0x00000000

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global lbl_804C0770
    lbl_804C0770:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
    .global lbl_804C077C
    lbl_804C077C:
        .4byte 0x00000000
        .4byte 0xFFFFFFFF
        .4byte dvdload__Q34Game10SingleGame11SelectStateFv
    .global __vt__Q34Game10SingleGame11SelectState
    __vt__Q34Game10SingleGame11SelectState:
        .4byte 0
        .4byte 0
        .4byte
   init__Q34Game10SingleGame11SelectStateFPQ24Game17SingleGameSectionPQ24Game8StateArg
        .4byte
   exec__Q34Game10SingleGame11SelectStateFPQ24Game17SingleGameSection .4byte
   cleanup__Q34Game10SingleGame11SelectStateFPQ24Game17SingleGameSection .4byte
   "resume__Q24Game36FSMState<Q24Game17SingleGameSection>FPQ24Game17SingleGameSection"
        .4byte
   "restart__Q24Game36FSMState<Q24Game17SingleGameSection>FPQ24Game17SingleGameSection"
        .4byte
   "transit__Q24Game36FSMState<Q24Game17SingleGameSection>FPQ24Game17SingleGameSectioniPQ24Game8StateArg"
        .4byte
   draw__Q34Game10SingleGame11SelectStateFPQ24Game17SingleGameSectionR8Graphics
        .4byte
   onOrimaDown__Q34Game10SingleGame5StateFPQ24Game17SingleGameSectioni .4byte
   onMovieStart__Q34Game10SingleGame5StateFPQ24Game17SingleGameSectionPQ24Game11MovieConfigUlUl
        .4byte
   onMovieDone__Q34Game10SingleGame5StateFPQ24Game17SingleGameSectionPQ24Game11MovieConfigUlUl
        .4byte
   onMovieCommand__Q34Game10SingleGame5StateFPQ24Game17SingleGameSectioni .4byte
   onHoleIn__Q34Game10SingleGame5StateFPQ24Game17SingleGameSectionPQ34Game8ItemCave4Item
        .4byte
   onNextFloor__Q34Game10SingleGame5StateFPQ24Game17SingleGameSectionPQ34Game8ItemHole4Item
        .4byte
   onFountainReturn__Q34Game10SingleGame5StateFPQ24Game17SingleGameSectionPQ34Game15ItemBigFountain4Item
        .4byte
   on_section_fadeout__Q34Game10SingleGame5StateFPQ24Game17SingleGameSection
        .4byte
   on_demo_timer__Q34Game10SingleGame5StateFPQ24Game17SingleGameSectionUl
    .global "__vt__42Delegate<Q34Game10SingleGame11SelectState>"
    "__vt__42Delegate<Q34Game10SingleGame11SelectState>":
        .4byte 0
        .4byte 0
        .4byte "invoke__42Delegate<Q34Game10SingleGame11SelectState>Fv"
        .4byte 0

    .section .sbss # 0x80514D80 - 0x80516360
    .global lbl_80515C10
    lbl_80515C10:
        .skip 0x4
    .global lbl_80515C14
    lbl_80515C14:
        .skip 0x4
    .global sParentHeapFreeSize
    sParentHeapFreeSize:
        .skip 0x4
    .global sParentHeapFreeSize_Last
    sParentHeapFreeSize_Last:
        .skip 0x4

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051A050
    lbl_8051A050:
        .float 1.0
    .global lbl_8051A054
    lbl_8051A054:
        .4byte 0x40800000
    .global lbl_8051A058
    lbl_8051A058:
        .4byte 0x00000000
    .global lbl_8051A05C
    lbl_8051A05C:
        .4byte 0x41800000
    .global lbl_8051A060
    lbl_8051A060:
        .4byte 0x42700000
    .global lbl_8051A064
    lbl_8051A064:
        .4byte 0x42F00000
    .global lbl_8051A068
    lbl_8051A068:
        .4byte 0x64616D65
        .4byte 0x6B0A0000
*/

namespace Game {

/*
 * --INFO--
 * Address:	8021B94C
 * Size:	0000E4
 */
SingleGame::SelectState::SelectState()
    : State(SGS_Select)
{
	m_controller       = new Controller(JUTGamePad::PORT_0);
	m_dvdLoadCallback  = new Delegate<SelectState>(this, &dvdload);
	m_previousCourseID = -1;
}

/*
 * --INFO--
 * Address:	8021BA30
 * Size:	000098
 */
void SingleGame::SelectState::init(SingleGameSection*, StateArg*)
{
	moviePlayer->reset();
	m_state      = 0;
	m_parentHeap = nullptr;
	m_wMapHeap   = nullptr;
	Screen::gGame2DMgr->m_screenMgr->reset();
	JKRHeap::sParentHeapFreeSize_Last = JKRHeap::sParentHeapFreeSize;
	JKRHeap::sParentHeapFreeSize      = JKRHeap::sCurrentHeap->getFreeSize();
	JKRHeap::sCurrentHeap->getFreeSize();
	JKRHeap::sCurrentHeap->getTotalFreeSize();
	playData->m_deadNaviID[0] = 0;
	naviMgr->clearDeadCount();
	m_newLevelOpen = false;
}

/*
 * --INFO--
 * Address:	8021BAC8
 * Size:	000260
 */
void SingleGame::SelectState::initNext(SingleGameSection* section)
{
	sys->setFrameRate(1);
	m_state = 1;

	m_parentHeap = JKRHeap::sCurrentHeap;
	m_parentHeap->getFreeSize();
	JKRHeap::sParentHeapFreeSize = m_parentHeap->getFreeSize();
	m_parentHeap->getFreeSize();
	m_parentHeap->getTotalFreeSize();
	m_wMapHeap = JKRExpHeap::create(m_parentHeap->getFreeSize(), m_parentHeap, true);
	m_wMapHeap->becomeCurrentHeap();

	if (playData->courseOpen(2) && (playData->isStoryFlag(STORY_DebtPaid)) && !playData->courseOpen(3)) {
		playData->openCourse(3);
	}
	if (playData->courseOpen(1)) {
		playData->setDemoFlag(DEMO_First_Globe_Day_End);
		playData->setDemoFlag(DEMO_First_Cave_Return);
	}

	bool anyFirstTimes = false;
	for (int i = 0; i < MAX_LEVELS; i++) {
		if (playData->courseFirstTime(i)) {
			anyFirstTimes = true;
		}
	}
	m_newLevelOpen = anyFirstTimes;

	m_worldMap = new kh::Screen::WorldMap;
	WorldMap::InitArg arg;

	arg.m_dayCount   = gameSystem->m_timeMgr->m_dayCount + 1;
	arg.m_stages     = stageList;
	arg.m_heap       = m_wMapHeap;
	arg.m_controller = m_controller;

	if (m_previousCourseID == -1) {
		arg.m_initialCourseIndex = playData->getCurrentCourseIndex();
	} else {
		arg.m_initialCourseIndex = m_previousCourseID;
	}

	arg.m_hasNewPiklopediaEntries    = playData->m_tekiStatMgr.whatsNew();
	arg.m_hasNewTreasureHoardEntries = playData->hasPelletZukanWhatsNew();
	arg._16                          = section->_228;
	section->_228                    = 1;
	m_worldMap->init(arg);

	section->m_displayWiper = section->m_wipeInFader;
	section->m_wipeInFader->start(1.0f);

	section->refreshHIO();
	m_controller->setButtonRepeat(0x3000000, 0x1E, 1);
	sys->dvdLoadUseCallBack(&section->m_dvdThread, m_dvdLoadCallback);
}

/*
 * --INFO--
 * Address:	8021BD28
 * Size:	000004
 */
void WorldMap::Base::init(Game::WorldMap::InitArg&) { }

/*
 * --INFO--
 * Address:	8021BD2C
 * Size:	00030C
 */
void SingleGame::SelectState::dvdload()
{
	PSGame::SceneInfo info;
	if (m_newLevelOpen) {
		info.m_sceneType = PSGame::SceneInfo::WORLD_MAP_NEWLEVEL;
	} else {
		info.m_sceneType = PSGame::SceneInfo::WORLD_MAP_NORMAL;
	}
	info.m_cameras = 0;

	PSSystem::SceneMgr* mgr = PSSystem::getSceneMgr();
	JUT_ASSERTLINE(394, mgr, "PSGetSceneMgr null\n");
	mgr = PSSystem::getSceneMgr();
	static_cast<PSGame::PikSceneMgr*>(mgr)->newAndSetCurrentScene(&info);

	mgr = PSSystem::getSceneMgr();
	mgr->checkScene();
	mgr->m_scenes->m_child->scene1stLoadSync();

	mgr = PSSystem::getSceneMgr();
	mgr->checkScene();
	mgr->m_scenes->m_child->startMainSeq();

	if (getCurrentHeap() != m_parentHeap) {
		JUT_PANICLINE(401, "MOC = Mouse on Cars!\n");
	}

	void* handle = JKRDvdRipper::loadToMainRAM("user/Ebisawa/effect/eff2d_world_map.jpc", nullptr, Switch_0, 0, 0,
	                                           JKRDvdRipper::ALLOC_DIR_TOP, 0, nullptr, nullptr);
	JUT_ASSERTLINE(410, handle, "WORLD_MAP_JPC");
	JPAResourceManager* jpamgr = new JPAResourceManager(handle, getCurrentHeap());
	JPAEmitterManager* jpaemit = new JPAEmitterManager(1000, 256, getCurrentHeap(), 8, 8);
	JUT_ASSERTLINE(416, particle2dMgr, "particle2dMgr null\n");
	particle2dMgr->setSceneEmitterAndResourceManager(jpaemit, jpamgr);

	if (getCurrentHeap() != m_parentHeap) {
		JUT_PANICLINE(420, "MOC = Mouse on Cars!\n");
	}

	JUT_ASSERTLINE(423, m_worldMap, "mWorldMap null\n");
	m_worldMap->loadResource();

	if (getCurrentHeap() != m_parentHeap) {
		JUT_PANICLINE(427, "MOC = Mouse on Cars!\n");
	}

	/*
	stwu     r1, -0x60(r1)
	mflr     r0
	lis      r4, lbl_80482658@ha
	stw      r0, 0x64(r1)
	stw      r31, 0x5c(r1)
	addi     r31, r4, lbl_80482658@l
	stw      r30, 0x58(r1)
	mr       r30, r3
	addi     r3, r1, 0x10
	stw      r29, 0x54(r1)
	stw      r28, 0x50(r1)
	bl       __ct__Q26PSGame9SceneInfoFv
	lbz      r0, 0x2c(r30)
	cmplwi   r0, 0
	beq      lbl_8021BD74
	li       r0, 0xc
	stb      r0, 0x16(r1)
	b        lbl_8021BD7C

lbl_8021BD74:
	li       r0, 0xb
	stb      r0, 0x16(r1)

lbl_8021BD7C:
	lwz      r0, spSceneMgr__8PSSystem@sda21(r13)
	li       r3, 0
	stb      r3, 0x17(r1)
	cmplwi   r0, 0
	bne      lbl_8021BDA4
	addi     r3, r31, 0x1c
	addi     r5, r31, 0x28
	li       r4, 0x1d3
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8021BDA4:
	lwz      r0, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_8021BDC4
	addi     r3, r31, 0x34
	addi     r5, r31, 0x4c
	li       r4, 0x18a
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8021BDC4:
	lwz      r0, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_8021BDE4
	addi     r3, r31, 0x1c
	addi     r5, r31, 0x28
	li       r4, 0x1d3
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8021BDE4:
	lwz      r3, spSceneMgr__8PSSystem@sda21(r13)
	addi     r4, r1, 0x10
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	lwz      r0, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_8021BE1C
	addi     r3, r31, 0x1c
	addi     r5, r31, 0x28
	li       r4, 0x1d3
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8021BE1C:
	lwz      r29, spSceneMgr__8PSSystem@sda21(r13)
	lwz      r0, 4(r29)
	cmplwi   r0, 0
	bne      lbl_8021BE40
	addi     r3, r31, 0x60
	addi     r5, r31, 0x28
	li       r4, 0xc7
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8021BE40:
	lwz      r3, 4(r29)
	lwz      r3, 4(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r0, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_8021BE78
	addi     r3, r31, 0x1c
	addi     r5, r31, 0x28
	li       r4, 0x1d3
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8021BE78:
	lwz      r29, spSceneMgr__8PSSystem@sda21(r13)
	lwz      r0, 4(r29)
	cmplwi   r0, 0
	bne      lbl_8021BE9C
	addi     r3, r31, 0x60
	addi     r5, r31, 0x28
	li       r4, 0xc7
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8021BE9C:
	lwz      r3, 4(r29)
	lwz      r3, 4(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r3, sCurrentHeap__7JKRHeap@sda21(r13)
	lwz      r0, 0x18(r30)
	cmplw    r3, r0
	beq      lbl_8021BED8
	addi     r3, r31, 0x34
	addi     r5, r31, 0x6c
	li       r4, 0x191
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8021BED8:
	li       r0, 0
	addi     r3, r31, 0x84
	stw      r0, 8(r1)
	li       r4, 0
	li       r5, 0
	li       r6, 0
	li       r7, 0
	li       r8, 1
	li       r9, 0
	li       r10, 0
	bl
loadToMainRAM__12JKRDvdRipperFPCcPUc15JKRExpandSwitchUlP7JKRHeapQ212JKRDvdRipper15EAllocDirectionUlPiPUl
	or.      r28, r3, r3
	bne      lbl_8021BF20
	addi     r3, r31, 0x34
	addi     r5, r31, 0xac
	li       r4, 0x19a
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8021BF20:
	li       r3, 0x14
	bl       __nw__FUl
	or.      r29, r3, r3
	beq      lbl_8021BF40
	lwz      r5, sCurrentHeap__7JKRHeap@sda21(r13)
	mr       r4, r28
	bl       __ct__18JPAResourceManagerFPCvP7JKRHeap
	mr       r29, r3

lbl_8021BF40:
	li       r3, 0x30
	bl       __nw__FUl
	or.      r28, r3, r3
	beq      lbl_8021BF6C
	lwz      r6, sCurrentHeap__7JKRHeap@sda21(r13)
	li       r4, 0x3e8
	li       r5, 0x100
	li       r7, 8
	li       r8, 8
	bl       __ct__17JPAEmitterManagerFUlUlP7JKRHeapUcUc
	mr       r28, r3

lbl_8021BF6C:
	lwz      r0, particle2dMgr@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_8021BF8C
	addi     r3, r31, 0x34
	addi     r5, r31, 0xbc
	li       r4, 0x1a0
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8021BF8C:
	lwz      r3, particle2dMgr@sda21(r13)
	mr       r4, r28
	mr       r5, r29
	bl
setSceneEmitterAndResourceManager__14TParticle2dMgrFP17JPAEmitterManagerP18JPAResourceManager
	lwz      r3, sCurrentHeap__7JKRHeap@sda21(r13)
	lwz      r0, 0x18(r30)
	cmplw    r3, r0
	beq      lbl_8021BFC0
	addi     r3, r31, 0x34
	addi     r5, r31, 0x6c
	li       r4, 0x1a4
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8021BFC0:
	lwz      r0, 0x10(r30)
	cmplwi   r0, 0
	bne      lbl_8021BFE0
	addi     r3, r31, 0x34
	addi     r5, r31, 0xd0
	li       r4, 0x1a7
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8021BFE0:
	lwz      r3, 0x10(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	lwz      r3, sCurrentHeap__7JKRHeap@sda21(r13)
	lwz      r0, 0x18(r30)
	cmplw    r3, r0
	beq      lbl_8021C018
	addi     r3, r31, 0x34
	addi     r5, r31, 0x6c
	li       r4, 0x1ab
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8021C018:
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

/*
 * --INFO--
 * Address:	8021C038
 * Size:	000004
 */
void WorldMap::Base::loadResource() { }

/*
 * --INFO--
 * Address:	8021C03C
 * Size:	0002AC
 */
void SingleGame::SelectState::exec(SingleGameSection* game)
{
	switch (m_state) {
	case 0: {
		initNext(game);
		break;
	}
	case 1: {
		if (game->m_dvdThread.m_mode == 2)
			m_state = 2;
		break;
	}
	default: {
		if (m_wMapHeap) {
			game->BaseHIOSection::doUpdate();
			WorldMap::UpdateArg arg;
			arg.m_courseInfo = nullptr;
			arg.m_status     = WorldMap::WMapUpdate_0;
			m_worldMap->update(arg);

			switch (arg.m_status) {
			case WorldMap::WMapUpdate_GoToLoad: {
				m_previousCourseID = -1;
				ZukanState* state  = static_cast<ZukanState*>(game->m_fsm->getState(SGS_Zukan));
				if (state) {
					state->_110 = -1;
					state->_114 = -1;
				}
				if (arg.m_courseInfo) {
					CourseInfo* info = arg.m_courseInfo;
					game->_228       = 0;
					playData->setPelletZukanOutOfDateAll();
					playData->m_tekiStatMgr.setOutOfDateAll();
					game->m_displayWiper = game->m_wipeInFader;
					game->m_wipeInFader->start(4.0f);
					game->m_currentCourseInfo = info;
					LoadStateArg larg;
					larg._00 = 0;
					larg._01 = 1;
					larg._02 = 0;
					larg._04 = 0;
					transit(game, SGS_Load, &larg);
				}
				break;
			}
			case WorldMap::WMapUpdate_2: {
				ZukanStateArg sarg;
				sarg.m_zukanType = 1;
				sarg.m_courseID  = 0;
				transit(game, SGS_Zukan, &sarg);
				break;
			}
			case WorldMap::WMapUpdate_GoToZukan: {
				ZukanStateArg sarg;
				sarg.m_zukanType = 1;
				sarg.m_courseID  = 0;
				if (arg.m_courseInfo) {
					sarg.m_courseID    = arg.m_courseInfo->m_courseIndex;
					m_previousCourseID = sarg.m_courseID;
				} else {
					sarg.m_courseID = 2;
				}
				transit(game, SGS_Zukan, &sarg);
				break;
			}
			case WorldMap::WMapUpdate_ReturnToTitle: {
				m_previousCourseID = -1;
				ZukanState* state  = static_cast<ZukanState*>(game->m_fsm->getState(SGS_Zukan));
				if (state) {
					state->_110 = -1;
					state->_114 = -1;
				}
				game->_228 = 0;
				game->flow_goto_title();
				return;
			}
			case WorldMap::WMapUpdate_4: {
				ZukanStateArg sarg2;
				sarg2.m_zukanType = 0;
				sarg2.m_courseID  = 0;
				if (arg.m_courseInfo) {
					sarg2.m_courseID   = arg.m_courseInfo->m_courseIndex;
					m_previousCourseID = sarg2.m_courseID;
				} else {
					sarg2.m_courseID = 2;
				}
				transit(game, SGS_Zukan, &sarg2);
				break;
			}
			}
			if (particle2dMgr) {
				particle2dMgr->update();
			}
		}
	}
	}
}

/*
 * --INFO--
 * Address:	8021C2E8
 * Size:	000004
 */
void WorldMap::Base::update(Game::WorldMap::UpdateArg&) { }

/*
 * --INFO--
 * Address:	8021C2EC
 * Size:	0002D0
 */
void SingleGame::SelectState::draw(SingleGameSection* game, Graphics& gfx)
{
	if (m_wMapHeap && m_state == 2) {
		gfx.m_orthoGraph.setPort();

		gfx.m_perspGraph.setPort();
		m_worldMap->draw1st(gfx);

		gfx.m_perspGraph.setPort();
		particle2dMgr->draw(3, 0);

		gfx.m_perspGraph.setPort();
		m_worldMap->draw2nd(gfx);

		gfx.m_perspGraph.setPort();
		particle2dMgr->draw(2, 0);

		gfx.m_perspGraph.setPort();
		m_worldMap->draw3rd(gfx);

		gfx.m_perspGraph.setPort();
		particle2dMgr->draw(4, 0);

		gfx.m_perspGraph.setPort();
		m_worldMap->draw4th(gfx);

		gfx.m_perspGraph.setPort();
		particle2dMgr->draw(1, 0);

		gfx.m_perspGraph.setPort();
		particle2dMgr->draw(0, 0);

		if ((int)JKRHeap::sParentHeapFreeSize && (int)JKRHeap::sParentHeapFreeSize_Last
		    && (JKRHeap::sParentHeapFreeSize != JKRHeap::sParentHeapFreeSize_Last)) {
			gfx.m_orthoGraph.setPort();
			J2DPrint print(JFWSystem::systemFont, 0.0f);
			print.initiate();
			print._40.set(255, 19, 55, 255);
			print._44.set(0, 0, 0, 255);
			print.m_glyphWidth  = 16.0f;
			print.m_glyphHeight = 16.0f;
			print.print(60.0f, 120.0f, "* %d %d %d", JKRHeap::sParentHeapFreeSize_Last - JKRHeap::sParentHeapFreeSize,
			            JKRHeap::sParentHeapFreeSize_Last, JKRHeap::sParentHeapFreeSize);
		}
	}
	/*
	stwu     r1, -0x80(r1)
	mflr     r0
	stw      r0, 0x84(r1)
	stw      r31, 0x7c(r1)
	mr       r31, r5
	stw      r30, 0x78(r1)
	mr       r30, r3
	lwz      r0, 0x18(r3)
	cmplwi   r0, 0
	beq      lbl_8021C5A4
	lwz      r0, 0x24(r30)
	cmpwi    r0, 2
	bne      lbl_8021C5A4
	addi     r3, r31, 0xbc
	lwz      r12, 0xbc(r31)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	addi     r3, r31, 0x190
	lwz      r12, 0x190(r31)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x10(r30)
	mr       r4, r31
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	addi     r3, r31, 0x190
	lwz      r12, 0x190(r31)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r3, particle2dMgr@sda21(r13)
	li       r4, 3
	li       r5, 0
	bl       draw__14TParticle2dMgrFUcUs
	addi     r3, r31, 0x190
	lwz      r12, 0x190(r31)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x10(r30)
	mr       r4, r31
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	addi     r3, r31, 0x190
	lwz      r12, 0x190(r31)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r3, particle2dMgr@sda21(r13)
	li       r4, 2
	li       r5, 0
	bl       draw__14TParticle2dMgrFUcUs
	addi     r3, r31, 0x190
	lwz      r12, 0x190(r31)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x10(r30)
	mr       r4, r31
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	addi     r3, r31, 0x190
	lwz      r12, 0x190(r31)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r3, particle2dMgr@sda21(r13)
	li       r4, 4
	li       r5, 0
	bl       draw__14TParticle2dMgrFUcUs
	addi     r3, r31, 0x190
	lwz      r12, 0x190(r31)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x10(r30)
	mr       r4, r31
	lwz      r12, 0(r3)
	lwz      r12, 0x28(r12)
	mtctr    r12
	bctrl
	addi     r3, r31, 0x190
	lwz      r12, 0x190(r31)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r3, particle2dMgr@sda21(r13)
	li       r4, 1
	li       r5, 0
	bl       draw__14TParticle2dMgrFUcUs
	addi     r3, r31, 0x190
	lwz      r12, 0x190(r31)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r3, particle2dMgr@sda21(r13)
	li       r4, 0
	li       r5, 0
	bl       draw__14TParticle2dMgrFUcUs
	lwz      r3, sParentHeapFreeSize@sda21(r13)
	cmpwi    r3, 0
	beq      lbl_8021C5A4
	lwz      r0, sParentHeapFreeSize_Last@sda21(r13)
	cmpwi    r0, 0
	beq      lbl_8021C5A4
	cmpw     r3, r0
	beq      lbl_8021C5A4
	addi     r3, r31, 0xbc
	lwz      r12, 0xbc(r31)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r4, systemFont__9JFWSystem@sda21(r13)
	addi     r3, r1, 0x18
	lfs      f1, lbl_8051A058@sda21(r2)
	bl       __ct__8J2DPrintFP7JUTFontf
	addi     r3, r1, 0x18
	bl       initiate__8J2DPrintFv
	li       r9, 0xff
	li       r6, 0x13
	li       r5, 0x37
	stb      r6, 0x11(r1)
	li       r0, 0
	lfs      f0, lbl_8051A05C@sda21(r2)
	stb      r9, 0x10(r1)
	lis      r3, lbl_80482738@ha
	addi     r4, r3, lbl_80482738@l
	lwz      r7, sParentHeapFreeSize@sda21(r13)
	stb      r5, 0x12(r1)
	addi     r3, r1, 0x18
	lwz      r6, sParentHeapFreeSize_Last@sda21(r13)
	stb      r9, 0x13(r1)
	lfs      f1, lbl_8051A060@sda21(r2)
	subf     r5, r7, r6
	lwz      r8, 0x10(r1)
	stb      r0, 8(r1)
	lfs      f2, lbl_8051A064@sda21(r2)
	stw      r8, 0x14(r1)
	lbz      r8, 0x14(r1)
	lbz      r31, 0x15(r1)
	lbz      r12, 0x16(r1)
	lbz      r11, 0x17(r1)
	stb      r0, 9(r1)
	stb      r0, 0xa(r1)
	stb      r9, 0xb(r1)
	lwz      r0, 8(r1)
	stb      r8, 0x58(r1)
	stw      r0, 0xc(r1)
	lbz      r10, 0xc(r1)
	lbz      r9, 0xd(r1)
	lbz      r8, 0xe(r1)
	lbz      r0, 0xf(r1)
	stb      r31, 0x59(r1)
	stb      r12, 0x5a(r1)
	stb      r11, 0x5b(r1)
	stb      r10, 0x5c(r1)
	stb      r9, 0x5d(r1)
	stb      r8, 0x5e(r1)
	stb      r0, 0x5f(r1)
	stfs     f0, 0x68(r1)
	stfs     f0, 0x6c(r1)
	crset    6
	bl       print__8J2DPrintFffPCce
	addi     r3, r1, 0x18
	li       r4, -1
	bl       __dt__8J2DPrintFv

lbl_8021C5A4:
	lwz      r0, 0x84(r1)
	lwz      r31, 0x7c(r1)
	lwz      r30, 0x78(r1)
	mtlr     r0
	addi     r1, r1, 0x80
	blr
	*/
}

/*
 * --INFO--
 * Address:	8021C5BC
 * Size:	000004
 */
void WorldMap::Base::draw4th(Graphics&) { }

/*
 * --INFO--
 * Address:	8021C5C0
 * Size:	000004
 */
void WorldMap::Base::draw3rd(Graphics&) { }

/*
 * --INFO--
 * Address:	8021C5C4
 * Size:	000004
 */
void WorldMap::Base::draw2nd(Graphics&) { }

/*
 * --INFO--
 * Address:	8021C5C8
 * Size:	000004
 */
void WorldMap::Base::draw1st(Graphics&) { }

/*
 * --INFO--
 * Address:	8021C5CC
 * Size:	0000F4
 */
void SingleGame::SelectState::cleanup(SingleGameSection* game)
{
	PSSystem::SceneMgr* mgr = PSSystem::getSceneMgr();
	PSSystem::checkSceneMgr(mgr);
	mgr->deleteCurrentScene();

	playData->doneWorldMapEffect();
	particle2dMgr->killAll();
	particle2dMgr->clearSceneEmitterAndResourceManager();
	m_wMapHeap->freeAll();
	m_wMapHeap->destroy();
	m_wMapHeap = nullptr;
	m_parentHeap->becomeCurrentHeap();
	sys->setFrameRate(2);
	JUT_ASSERTLINE(732, (int)JKRHeap::sParentHeapFreeSize == (int)m_parentHeap->getFreeSize(), "damek\n");
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r4, lbl_80482658@ha
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	addi     r31, r4, lbl_80482658@l
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r3
	lwz      r0, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_8021C610
	addi     r3, r31, 0x1c
	addi     r5, r31, 0x28
	li       r4, 0x1d3
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8021C610:
	lwz      r30, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r30, 0
	bne      lbl_8021C630
	addi     r3, r31, 0x1c
	addi     r5, r31, 0x28
	li       r4, 0x1dc
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8021C630:
	mr       r3, r30
	bl       deleteCurrentScene__Q28PSSystem8SceneMgrFv
	lwz      r3, playData__4Game@sda21(r13)
	bl       doneWorldMapEffect__Q24Game8PlayDataFv
	lwz      r3, particle2dMgr@sda21(r13)
	bl       killAll__14TParticle2dMgrFv
	lwz      r3, particle2dMgr@sda21(r13)
	bl       clearSceneEmitterAndResourceManager__14TParticle2dMgrFv
	lwz      r3, 0x18(r29)
	bl       freeAll__7JKRHeapFv
	lwz      r3, 0x18(r29)
	bl       destroy__7JKRHeapFv
	li       r0, 0
	stw      r0, 0x18(r29)
	lwz      r3, 0x1c(r29)
	bl       becomeCurrentHeap__7JKRHeapFv
	lwz      r3, sys@sda21(r13)
	li       r4, 2
	bl       setFrameRate__6SystemFi
	lwz      r3, 0x1c(r29)
	bl       getFreeSize__7JKRHeapFv
	lwz      r0, sParentHeapFreeSize@sda21(r13)
	cmpw     r0, r3
	beq      lbl_8021C6A4
	addi     r3, r31, 0x34
	li       r4, 0x2dc
	addi     r5, r2, lbl_8051A068@sda21
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8021C6A4:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

} // namespace Game

/*
 * --INFO--
 * Address:	8021C6C0
 * Size:	000030
 */
void Delegate<Game::SingleGame::SelectState>::invoke()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r4, r3
	stw      r0, 0x14(r1)
	addi     r12, r4, 8
	lwz      r3, 4(r3)
	bl       __ptmf_scall
	nop
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}
