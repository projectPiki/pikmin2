#include "Controller.h"
#include "Game/GameSystem.h"
#include "Game/MoviePlayer.h"
#include "Game/Navi.h"
#include "Game/gamePlayData.h"
#include "Game/gameStages.h"
#include "JSystem/JKR/JKRHeap.h"
#include "JSystem/JUT/JUTGamePad.h"
#include "Screen/Game2DMgr.h"
#include "System.h"
#include "nans.h"
#include "types.h"
#include "Game/SingleGame.h"

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
	_20               = new Controller(JUTGamePad::PORT_0);
	m_dvdLoadCallback = new Delegate<SelectState>(this, &SelectState::dvdload);
	_28               = -1;
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r4, "__vt__Q24Game36FSMState<Q24Game17SingleGameSection>"@ha
	li       r5, 0
	stw      r0, 0x24(r1)
	addi     r0, r4, "__vt__Q24Game36FSMState<Q24Game17SingleGameSection>"@l
	lis      r4, __vt__Q34Game10SingleGame5State@ha
	stw      r31, 0x1c(r1)
	mr       r31, r3
	addi     r4, r4, __vt__Q34Game10SingleGame5State@l
	stw      r0, 0(r3)
	li       r0, 1
	lis      r3, __vt__Q34Game10SingleGame11SelectState@ha
	stw      r0, 4(r31)
	addi     r0, r3, __vt__Q34Game10SingleGame11SelectState@l
	li       r3, 0xb0
	stw      r5, 8(r31)
	stw      r4, 0(r31)
	stw      r0, 0(r31)
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8021B9B0
	li       r4, 0
	bl       __ct__10ControllerFQ210JUTGamePad8EPadPort
	mr       r0, r3

lbl_8021B9B0:
	stw      r0, 0x20(r31)
	li       r3, 0x14
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_8021BA0C
	lis      r4, lbl_804C077C@ha
	lis      r5, __vt__9IDelegate@ha
	addi     r8, r4, lbl_804C077C@l
	lis      r4, "__vt__42Delegate<Q34Game10SingleGame11SelectState>"@ha
	lwz      r7, 0(r8)
	addi     r5, r5, __vt__9IDelegate@l
	lwz      r6, 4(r8)
	addi     r0, r4, "__vt__42Delegate<Q34Game10SingleGame11SelectState>"@l
	lwz      r4, 8(r8)
	stw      r7, 8(r1)
	stw      r5, 0(r3)
	stw      r0, 0(r3)
	stw      r31, 4(r3)
	stw      r7, 8(r3)
	stw      r6, 0xc(r3)
	stw      r6, 0xc(r1)
	stw      r4, 0x10(r1)
	stw      r4, 0x10(r3)

lbl_8021BA0C:
	stw      r3, 0x14(r31)
	li       r0, -1
	mr       r3, r31
	stw      r0, 0x28(r31)
	lwz      r31, 0x1c(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8021BA30
 * Size:	000098
 */
void SingleGame::SelectState::init(Game::SingleGameSection*, Game::StateArg*)
{
	moviePlayer->reset();
	_24 = 0;
	_1C = nullptr;
	_18 = nullptr;
	Screen::gGame2DMgr->m_screenMgr->reset();
	sParentHeapFreeSize_Last = sParentHeapFreeSize;
	sParentHeapFreeSize      = JKRHeap::sCurrentHeap->getFreeSize();
	JKRHeap::sCurrentHeap->getFreeSize();
	JKRHeap::sCurrentHeap->getTotalFreeSize();
	playData->_20 = 0;
	naviMgr->clearDeadCount();
	m_anyFirstTimes = false;
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, moviePlayer__4Game@sda21(r13)
	bl       reset__Q24Game11MoviePlayerFv
	li       r0, 0
	stw      r0, 0x24(r31)
	stw      r0, 0x1c(r31)
	stw      r0, 0x18(r31)
	lwz      r3, gGame2DMgr__6Screen@sda21(r13)
	lwz      r3, 0x18(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	lwz      r0, sParentHeapFreeSize@sda21(r13)
	lwz      r3, sCurrentHeap__7JKRHeap@sda21(r13)
	stw      r0, sParentHeapFreeSize_Last@sda21(r13)
	bl       getFreeSize__7JKRHeapFv
	stw      r3, sParentHeapFreeSize@sda21(r13)
	lwz      r3, sCurrentHeap__7JKRHeap@sda21(r13)
	bl       getFreeSize__7JKRHeapFv
	lwz      r3, sCurrentHeap__7JKRHeap@sda21(r13)
	bl       getTotalFreeSize__7JKRHeapFv
	lwz      r3, playData__4Game@sda21(r13)
	li       r0, 0
	stb      r0, 0x20(r3)
	lwz      r3, naviMgr__4Game@sda21(r13)
	bl       clearDeadCount__Q24Game7NaviMgrFv
	li       r0, 0
	stb      r0, 0x2c(r31)
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8021BAC8
 * Size:	000260
 */
void SingleGame::SelectState::initNext(Game::SingleGameSection* section)
{
	sys->setFrameRate(1);
	_24 = 1;
	_1C = JKRHeap::sCurrentHeap;
	_1C->getFreeSize();
	sParentHeapFreeSize = _1C->getFreeSize();
	_1C->getFreeSize();
	_1C->getTotalFreeSize();
	_18 = JKRExpHeap::create(_1C->getFreeSize(), _1C, true);
	_18->becomeCurrentHeap();
	if (playData->courseOpen(2) && (playData->isStoryFlag(STORY_DebtPaid)) && !playData->courseOpen(3)) {
		playData->openCourse(3);
	}
	if (playData->courseOpen(1)) {
		playData->setDemoFlag(DEMO_First_Globe_Day_End);
		playData->setDemoFlag(DEMO_First_Cave_Return);
	}
	bool anyFirstTimes = false;
	for (int i = 0; i < 4; i++) {
		if (playData->courseFirstTime(i)) {
			anyFirstTimes = true;
		}
	}
	m_anyFirstTimes = anyFirstTimes;
	_10             = new kh::Screen::WorldMap();
	Game::WorldMap::InitArg arg;
	arg.m_currentCourseIndex   = 0;
	arg.m_hasNewOtakaraEntries = false;
	arg.m_hasNewTekiEntries    = false;
	arg._16                    = 0;
	arg.m_dayCount             = gameSystem->m_timeMgr->m_dayCount + 1;
	arg.m_stages               = stageList;
	arg.m_heap                 = _18;
	arg.m_controller           = _20;
	arg.m_currentCourseIndex   = (_28 == -1) ? playData->getCurrentCourseIndex() : _28;
	arg.m_hasNewTekiEntries    = playData->m_tekiStatMgr.whatsNew();
	arg.m_hasNewOtakaraEntries = playData->hasPelletZukanWhatsNew();
	arg._16                    = section->_228;
	_10->init(arg);
	section->_18 = section->m_wipeInFader;
	section->refreshHIO();
	_20->setButtonRepeat(0x3000000, 0x1E, 1);
	sys->dvdLoadUseCallBack(&section->_1B8, m_dvdLoadCallback);
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	mr       r31, r4
	li       r4, 1
	stw      r30, 0x28(r1)
	mr       r30, r3
	stw      r29, 0x24(r1)
	stw      r28, 0x20(r1)
	lwz      r3, sys@sda21(r13)
	bl       setFrameRate__6SystemFi
	li       r0, 1
	stw      r0, 0x24(r30)
	lwz      r0, sCurrentHeap__7JKRHeap@sda21(r13)
	stw      r0, 0x1c(r30)
	lwz      r3, 0x1c(r30)
	bl       getFreeSize__7JKRHeapFv
	lwz      r3, 0x1c(r30)
	bl       getFreeSize__7JKRHeapFv
	stw      r3, sParentHeapFreeSize@sda21(r13)
	lwz      r3, 0x1c(r30)
	bl       getFreeSize__7JKRHeapFv
	lwz      r3, 0x1c(r30)
	bl       getTotalFreeSize__7JKRHeapFv
	lwz      r29, 0x1c(r30)
	mr       r3, r29
	bl       getFreeSize__7JKRHeapFv
	mr       r4, r29
	li       r5, 1
	bl       create__10JKRExpHeapFUlP7JKRHeapb
	stw      r3, 0x18(r30)
	lwz      r3, 0x18(r30)
	bl       becomeCurrentHeap__7JKRHeapFv
	lwz      r3, playData__4Game@sda21(r13)
	li       r4, 2
	bl       courseOpen__Q24Game8PlayDataFi
	clrlwi.  r0, r3, 0x18
	beq      lbl_8021BB90
	lwz      r3, playData__4Game@sda21(r13)
	lbz      r0, 0x2f(r3)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_8021BB90
	li       r4, 3
	bl       courseOpen__Q24Game8PlayDataFi
	clrlwi.  r0, r3, 0x18
	bne      lbl_8021BB90
	lwz      r3, playData__4Game@sda21(r13)
	li       r4, 3
	bl       openCourse__Q24Game8PlayDataFi

lbl_8021BB90:
	lwz      r3, playData__4Game@sda21(r13)
	li       r4, 1
	bl       courseOpen__Q24Game8PlayDataFi
	clrlwi.  r0, r3, 0x18
	beq      lbl_8021BBBC
	lwz      r3, playData__4Game@sda21(r13)
	li       r4, 0x12
	bl       setDemoFlag__Q24Game8PlayDataFi
	lwz      r3, playData__4Game@sda21(r13)
	li       r4, 6
	bl       setDemoFlag__Q24Game8PlayDataFi

lbl_8021BBBC:
	li       r29, 0
	li       r28, 0

lbl_8021BBC4:
	lwz      r3, playData__4Game@sda21(r13)
	mr       r4, r28
	bl       courseFirstTime__Q24Game8PlayDataFi
	clrlwi.  r0, r3, 0x18
	beq      lbl_8021BBDC
	li       r29, 1

lbl_8021BBDC:
	addi     r28, r28, 1
	cmpwi    r28, 4
	blt      lbl_8021BBC4
	stb      r29, 0x2c(r30)
	li       r3, 0x184
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8021BC04
	bl       __ct__Q32kh6Screen8WorldMapFv
	mr       r0, r3

lbl_8021BC04:
	stw      r0, 0x10(r30)
	li       r4, 0
	stw      r4, 8(r1)
	lwz      r3, gameSystem__4Game@sda21(r13)
	stw      r4, 0x10(r1)
	lwz      r0, stageList__4Game@sda21(r13)
	stw      r4, 0xc(r1)
	stw      r4, 0x14(r1)
	stw      r4, 0x18(r1)
	stb      r4, 0x1d(r1)
	stb      r4, 0x1c(r1)
	stb      r4, 0x1e(r1)
	lwz      r3, 0x40(r3)
	lwz      r3, 0x218(r3)
	addi     r3, r3, 1
	stw      r0, 0xc(r1)
	stw      r3, 0x14(r1)
	lwz      r0, 0x18(r30)
	stw      r0, 8(r1)
	lwz      r0, 0x20(r30)
	stw      r0, 0x10(r1)
	lwz      r0, 0x28(r30)
	cmpwi    r0, -1
	bne      lbl_8021BC74
	lwz      r3, playData__4Game@sda21(r13)
	bl       getCurrentCourseIndex__Q24Game8PlayDataFv
	stw      r3, 0x18(r1)
	b        lbl_8021BC78

lbl_8021BC74:
	stw      r0, 0x18(r1)

lbl_8021BC78:
	lwz      r3, playData__4Game@sda21(r13)
	addi     r3, r3, 0x40
	bl       whatsNew__Q34Game8TekiStat3MgrFv
	stb      r3, 0x1c(r1)
	lwz      r3, playData__4Game@sda21(r13)
	bl       hasPelletZukanWhatsNew__Q24Game8PlayDataFv
	stb      r3, 0x1d(r1)
	li       r0, 1
	addi     r4, r1, 8
	lbz      r3, 0x228(r31)
	stb      r3, 0x1e(r1)
	stb      r0, 0x228(r31)
	lwz      r3, 0x10(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0xd4(r31)
	lfs      f1, lbl_8051A050@sda21(r2)
	stw      r0, 0x18(r31)
	lwz      r3, 0xd4(r31)
	bl       start__8WipeBaseFf
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x4c(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x20(r30)
	lis      r4, 0x300
	li       r5, 0x1e
	li       r6, 1
	bl       setButtonRepeat__10JUTGamePadFUlUlUl
	lwz      r3, sys@sda21(r13)
	addi     r4, r31, 0x1b8
	lwz      r5, 0x14(r30)
	bl       dvdLoadUseCallBack__6SystemFP16DvdThreadCommandP9IDelegate
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	lwz      r29, 0x24(r1)
	lwz      r28, 0x20(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
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
void SingleGame::SelectState::dvdload(void)
{
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
void WorldMap::Base::loadResource(void) { }

/*
 * --INFO--
 * Address:	8021C03C
 * Size:	0002AC
 */
void SingleGame::SelectState::exec(Game::SingleGameSection*)
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stw      r31, 0x3c(r1)
	mr       r31, r4
	stw      r30, 0x38(r1)
	mr       r30, r3
	stw      r29, 0x34(r1)
	lwz      r0, 0x24(r3)
	cmpwi    r0, 1
	beq      lbl_8021C080
	bge      lbl_8021C098
	cmpwi    r0, 0
	bge      lbl_8021C078
	b        lbl_8021C098

lbl_8021C078:
	bl initNext__Q34Game10SingleGame11SelectStateFPQ24Game17SingleGameSection b
lbl_8021C2CC

lbl_8021C080:
	lwz      r0, 0x1d0(r31)
	cmpwi    r0, 2
	bne      lbl_8021C2CC
	li       r0, 2
	stw      r0, 0x24(r30)
	b        lbl_8021C2CC

lbl_8021C098:
	lwz      r0, 0x18(r30)
	cmplwi   r0, 0
	beq      lbl_8021C2CC
	mr       r3, r31
	bl       doUpdate__Q24Game14BaseHIOSectionFv
	li       r0, 0
	addi     r4, r1, 0x28
	stw      r0, 0x28(r1)
	stw      r0, 0x2c(r1)
	lwz      r3, 0x10(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x2c(r1)
	cmpwi    r0, 3
	beq      lbl_8021C1D8
	bge      lbl_8021C0F0
	cmpwi    r0, 1
	beq      lbl_8021C100
	bge      lbl_8021C1A4
	b        lbl_8021C2BC

lbl_8021C0F0:
	cmpwi    r0, 5
	beq      lbl_8021C230
	bge      lbl_8021C2BC
	b        lbl_8021C26C

lbl_8021C100:
	li       r0, -1
	li       r4, 0xa
	stw      r0, 0x28(r30)
	lwz      r3, 0x24c(r31)
	bl       getState__Q34Game10SingleGame3FSMFi
	cmplwi   r3, 0
	beq      lbl_8021C128
	li       r0, -1
	stw      r0, 0x110(r3)
	stw      r0, 0x114(r3)

lbl_8021C128:
	lwz      r29, 0x28(r1)
	cmplwi   r29, 0
	beq      lbl_8021C2BC
	li       r0, 0
	stb      r0, 0x228(r31)
	lwz      r3, playData__4Game@sda21(r13)
	bl       setPelletZukanOutOfDateAll__Q24Game8PlayDataFv
	lwz      r3, playData__4Game@sda21(r13)
	addi     r3, r3, 0x40
	bl       setOutOfDateAll__Q34Game8TekiStat3MgrFv
	lwz      r0, 0xd4(r31)
	lfs      f1, lbl_8051A054@sda21(r2)
	stw      r0, 0x18(r31)
	lwz      r3, 0xd4(r31)
	bl       start__8WipeBaseFf
	stw      r29, 0x22c(r31)
	li       r7, 0
	li       r0, 1
	mr       r3, r30
	stb      r7, 0x20(r1)
	mr       r4, r31
	addi     r6, r1, 0x20
	li       r5, 2
	stb      r0, 0x21(r1)
	stb      r7, 0x22(r1)
	sth      r7, 0x24(r1)
	lwz      r12, 0(r30)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_8021C2BC

lbl_8021C1A4:
	li       r3, 1
	li       r0, 0
	stb      r3, 0x18(r1)
	mr       r3, r30
	mr       r4, r31
	addi     r6, r1, 0x18
	stw      r0, 0x1c(r1)
	li       r5, 0xa
	lwz      r12, 0(r30)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_8021C2BC

lbl_8021C1D8:
	lwz      r4, 0x28(r1)
	li       r3, 1
	li       r0, 0
	stb      r3, 0x10(r1)
	cmplwi   r4, 0
	stw      r0, 0x14(r1)
	beq      lbl_8021C204
	lwz      r0, 0x48(r4)
	stw      r0, 0x14(r1)
	stw      r0, 0x28(r30)
	b        lbl_8021C20C

lbl_8021C204:
	li       r0, 2
	stw      r0, 0x14(r1)

lbl_8021C20C:
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	addi     r6, r1, 0x10
	li       r5, 0xa
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_8021C2BC

lbl_8021C230:
	li       r0, -1
	li       r4, 0xa
	stw      r0, 0x28(r30)
	lwz      r3, 0x24c(r31)
	bl       getState__Q34Game10SingleGame3FSMFi
	cmplwi   r3, 0
	beq      lbl_8021C258
	li       r0, -1
	stw      r0, 0x110(r3)
	stw      r0, 0x114(r3)

lbl_8021C258:
	li       r0, 0
	mr       r3, r31
	stb      r0, 0x228(r31)
	bl       flow_goto_title__Q24Game17SingleGameSectionFv
	b        lbl_8021C2CC

lbl_8021C26C:
	lwz      r3, 0x28(r1)
	li       r0, 0
	stb      r0, 8(r1)
	cmplwi   r3, 0
	stw      r0, 0xc(r1)
	beq      lbl_8021C294
	lwz      r0, 0x48(r3)
	stw      r0, 0xc(r1)
	stw      r0, 0x28(r30)
	b        lbl_8021C29C

lbl_8021C294:
	li       r0, 2
	stw      r0, 0xc(r1)

lbl_8021C29C:
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	addi     r6, r1, 8
	li       r5, 0xa
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_8021C2BC:
	lwz      r3, particle2dMgr@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_8021C2CC
	bl       update__14TParticle2dMgrFv

lbl_8021C2CC:
	lwz      r0, 0x44(r1)
	lwz      r31, 0x3c(r1)
	lwz      r30, 0x38(r1)
	lwz      r29, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
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
void SingleGame::SelectState::draw(Game::SingleGameSection*, Graphics&)
{
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
void SingleGame::SelectState::cleanup(Game::SingleGameSection*)
{
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
