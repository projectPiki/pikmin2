#include "types.h"
#include "Game/SingleGame.h"
#include "JSystem/JKR/JKRHeap.h"
#include "nans.h"

struct DummyPlayer {
	int m_count;   // _00
	u32 _04;       // _04, unknown
	char** m_msgs; // _08
} dummyplayer;

static int idk[4]              = { 1, 2, 3, 0 };
char* opening_strings[]        = { "Opening Movie",
                            "",
                            "",
                            "-- Director --",
                            "Geshifumi Hino",
                            "Mamamichi Abe",
                            "",
                            "",
                            "-- Main Programmer --",
                            "Tepen-kei",
                            "",
                            "",
                            "",
                            "",
                            "",
                            "",
                            "",
                            "(C) Nintendo" };
char* ending_strings[]         = { "Ending Movie", "", "", "", "", "", "(C) Ninteno" };
char* endingcomplete_strings[] = { "Ending(Complete) Movie", "", "", "", "", "", "(C) Ninteno" };
char* staffroll_strings[]
    = { "Pikmin2", "", "", "* Director", "Geshifumi Hino", "Mamamichi Abe", "", "", "* Otakara Design", "Hideo Ota", "", "(C) Ninteno" };
char* mezase_strings[] = { "Mezase Complete Movie", "", "", "", "", "", "(C) Ninteno" };

namespace Game {
namespace SingleGame {

/*
 * --INFO--
 * Address:	8021EED8
 * Size:	00008C
 */
MovieState::MovieState()
    : State(SGS_Movie)
{
	_14 = new Controller(JUTGamePad::PORT_0);
	_1C = nullptr;
	_18 = nullptr;
}

/*
 * --INFO--
 * Address:	8021EF64
 * Size:	000290
 */
void MovieState::init(SingleGameSection* gs, StateArg* arg)
{
	_1C = nullptr;
	_18 = nullptr;
	_18 = JKRHeap::sCurrentHeap;
	_18->getFreeSize();
	_1C = JKRExpHeap::create(_18->getFreeSize(), _18, true);
	_1C->becomeCurrentHeap();
	_1C->getFreeSize();
	_20 = new THPPlayer;
	_20->init(nullptr);
	_24 = false;
	_20->load(THPPlayer::OPENING_1);

	P2ASSERTLINE(223, arg);
	_10 = *(THPPlayer::EMovieIndex*)arg;
	switch (_10) {
	case THPPlayer::OPENING_1:
		char** openingStringsPtr = opening_strings;
		dummyplayer.m_msgs       = openingStringsPtr;
		dummyplayer.m_count      = 0;
		for (int i = 0; ARRAY_SIZE(opening_strings); i++) {
			dummyplayer.m_count++;
		}
		break;
	case THPPlayer::OPENING_2:
		char** endingStringsPtr = ending_strings;
		dummyplayer.m_msgs      = endingStringsPtr;
		dummyplayer.m_count     = 0;
		for (int i = 0; ARRAY_SIZE(ending_strings); i++) {
			dummyplayer.m_count++;
		}
		break;
	case THPPlayer::ENDING_1:
		char** endingCompStringsPtr = endingcomplete_strings;
		dummyplayer.m_msgs          = endingCompStringsPtr;
		dummyplayer.m_count         = 0;
		for (int i = 0; ARRAY_SIZE(endingcomplete_strings); i++) {
			dummyplayer.m_count++;
		}
		break;
	case THPPlayer::ENDING_2:
		char** staffRollStringsPtr = staffroll_strings;
		dummyplayer.m_msgs         = staffRollStringsPtr;
		dummyplayer.m_count        = 0;
		for (int i = 0; i < ARRAY_SIZE(staffroll_strings); i++) {
			dummyplayer.m_count++;
		}
		break;
	case THPPlayer::STAFF_ROLL:
		char** mezaseStringsPtr = mezase_strings;
		dummyplayer.m_msgs      = mezaseStringsPtr;
		dummyplayer.m_count     = 0;
		for (int i = 0; mezaseStringsPtr[i]; i++) {
			dummyplayer.m_count++;
		}
		break;
	default:
		break;
	}

	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	li       r0, 0
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r5
	stw      r28, 0x10(r1)
	mr       r28, r3
	stw      r0, 0x1c(r3)
	lis      r3, lbl_804C0880@ha
	addi     r31, r3, lbl_804C0880@l
	stw      r0, 0x18(r28)
	lwz      r0, sCurrentHeap__7JKRHeap@sda21(r13)
	stw      r0, 0x18(r28)
	lwz      r3, 0x18(r28)
	bl       getFreeSize__7JKRHeapFv
	lwz      r30, 0x18(r28)
	mr       r3, r30
	bl       getFreeSize__7JKRHeapFv
	mr       r4, r30
	li       r5, 1
	bl       create__10JKRExpHeapFUlP7JKRHeapb
	stw      r3, 0x1c(r28)
	lwz      r3, 0x1c(r28)
	bl       becomeCurrentHeap__7JKRHeapFv
	lwz      r3, 0x1c(r28)
	bl       getFreeSize__7JKRHeapFv
	li       r3, 0xec
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8021EFF0
	bl       __ct__Q24Game9THPPlayerFv
	mr       r0, r3

lbl_8021EFF0:
	stw      r0, 0x20(r28)
	li       r4, 0
	lwz      r3, 0x20(r28)
	bl       init__Q24Game9THPPlayerFP7JKRHeap
	li       r0, 0
	li       r4, 0
	stb      r0, 0x24(r28)
	lwz      r3, 0x20(r28)
	bl       load__Q24Game9THPPlayerFQ34Game9THPPlayer11EMovieIndex
	cmplwi   r29, 0
	bne      lbl_8021F038
	lis      r3, lbl_80482D0C@ha
	lis      r5, lbl_80482D20@ha
	addi     r3, r3, lbl_80482D0C@l
	li       r4, 0xdf
	addi     r5, r5, lbl_80482D20@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8021F038:
	lwz      r0, 0(r29)
	stw      r0, 0x10(r28)
	lwz      r0, 0x10(r28)
	cmpwi    r0, 2
	beq      lbl_8021F100
	bge      lbl_8021F060
	cmpwi    r0, 0
	beq      lbl_8021F070
	bge      lbl_8021F0B8
	b        lbl_8021F1D4

lbl_8021F060:
	cmpwi    r0, 4
	beq      lbl_8021F190
	bge      lbl_8021F1D4
	b        lbl_8021F148

lbl_8021F070:
	lis      r4, dummyPlayer@ha
	li       r3, 0
	addi     r4, r4, dummyPlayer@l
	addi     r5, r31, 0x1c
	slwi     r0, r3, 2
	stw      r5, 8(r4)
	add      r6, r5, r0
	li       r5, 0
	stw      r3, 0(r4)

lbl_8021F094:
	lwz      r0, 0(r6)
	cmplwi   r0, 0
	beq      lbl_8021F0AC
	addi     r6, r6, 4
	addi     r5, r5, 1
	b        lbl_8021F094

lbl_8021F0AC:
	lis      r3, dummyPlayer@ha
	stw      r5, dummyPlayer@l(r3)
	b        lbl_8021F1D4

lbl_8021F0B8:
	lis      r4, dummyPlayer@ha
	li       r3, 0
	addi     r4, r4, dummyPlayer@l
	addi     r5, r31, 0x68
	slwi     r0, r3, 2
	stw      r5, 8(r4)
	add      r6, r5, r0
	li       r5, 0
	stw      r3, 0(r4)

lbl_8021F0DC:
	lwz      r0, 0(r6)
	cmplwi   r0, 0
	beq      lbl_8021F0F4
	addi     r6, r6, 4
	addi     r5, r5, 1
	b        lbl_8021F0DC

lbl_8021F0F4:
	lis      r3, dummyPlayer@ha
	stw      r5, dummyPlayer@l(r3)
	b        lbl_8021F1D4

lbl_8021F100:
	lis      r4, dummyPlayer@ha
	li       r3, 0
	addi     r4, r4, dummyPlayer@l
	addi     r5, r31, 0x84
	slwi     r0, r3, 2
	stw      r5, 8(r4)
	add      r6, r5, r0
	li       r5, 0
	stw      r3, 0(r4)

lbl_8021F124:
	lwz      r0, 0(r6)
	cmplwi   r0, 0
	beq      lbl_8021F13C
	addi     r6, r6, 4
	addi     r5, r5, 1
	b        lbl_8021F124

lbl_8021F13C:
	lis      r3, dummyPlayer@ha
	stw      r5, dummyPlayer@l(r3)
	b        lbl_8021F1D4

lbl_8021F148:
	lis      r4, dummyPlayer@ha
	li       r3, 0
	addi     r4, r4, dummyPlayer@l
	addi     r5, r31, 0xa0
	slwi     r0, r3, 2
	stw      r5, 8(r4)
	add      r6, r5, r0
	li       r5, 0
	stw      r3, 0(r4)

lbl_8021F16C:
	lwz      r0, 0(r6)
	cmplwi   r0, 0
	beq      lbl_8021F184
	addi     r6, r6, 4
	addi     r5, r5, 1
	b        lbl_8021F16C

lbl_8021F184:
	lis      r3, dummyPlayer@ha
	stw      r5, dummyPlayer@l(r3)
	b        lbl_8021F1D4

lbl_8021F190:
	lis      r4, dummyPlayer@ha
	li       r3, 0
	addi     r4, r4, dummyPlayer@l
	addi     r5, r31, 0xcc
	slwi     r0, r3, 2
	stw      r5, 8(r4)
	add      r6, r5, r0
	li       r5, 0
	stw      r3, 0(r4)

lbl_8021F1B4:
	lwz      r0, 0(r6)
	cmplwi   r0, 0
	beq      lbl_8021F1CC
	addi     r6, r6, 4
	addi     r5, r5, 1
	b        lbl_8021F1B4

lbl_8021F1CC:
	lis      r3, dummyPlayer@ha
	stw      r5, dummyPlayer@l(r3)

lbl_8021F1D4:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r28, 0x10(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8021F1F4
 * Size:	000114
 */
void MovieState::exec(SingleGameSection* gs)
{
	if (_1C) {
		_20->update();
		switch (_24) {
		case false:
			if (_20->isFinishLoading()) {
				_24 = true;
				_20->play();
			}
			break;
		case true:
			if ((_14->m_padButton.m_buttonDown & PAD_BUTTON_START) || _20->isFinishPlaying()) { // skip the movie with start
				gs->_18 = gs->m_wipeInFader;
				gs->m_wipeInFader->start(4.0f);
				gs->m_currentCourseInfo = stageList->getCourseInfo(0);
				Arg arg;
				arg._00 = false;
				arg._01 = true;
				arg._02 = false;
				arg._04 = 5;
				transit(gs, SGS_Load, &arg);
			}
			break;
		}
	}
}

/*
 * --INFO--
 * Address:	8021F308
 * Size:	000040
 */
void MovieState::draw(SingleGameSection* gs, Graphics& gfx)
{
	if (_1C) {
		_20->draw(gfx);
	}
}

/*
 * --INFO--
 * Address:	8021F348
 * Size:	000048
 */
void MovieState::cleanup(SingleGameSection* gs)
{
	_1C->freeAll();
	_1C->destroy();
	_1C = nullptr;
	_18->becomeCurrentHeap();
}

} // namespace SingleGame
} // namespace Game
