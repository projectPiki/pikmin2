#include "types.h"

/*
    Generated from dpostproc

    .section .ctors, "wa"  # 0x80472F00 - 0x804732C0
    .4byte __sinit_singleGS_Movie_cpp

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_80482C20
    lbl_80482C20:
        .asciz "Opening Movie"
        .skip 2
    .global lbl_80482C30
    lbl_80482C30:
        .asciz "-- Director --"
        .skip 1
    .global lbl_80482C40
    lbl_80482C40:
        .asciz "Geshifumi Hino"
        .skip 1
    .global lbl_80482C50
    lbl_80482C50:
        .asciz "Mamamichi Abe"
        .skip 2
    .global lbl_80482C60
    lbl_80482C60:
        .asciz "-- Main Programmer --"
        .skip 2
    .global lbl_80482C78
    lbl_80482C78:
        .asciz "Tepen-kei"
        .skip 2
    .global lbl_80482C84
    lbl_80482C84:
        .asciz "(C) Nintendo"
        .skip 3
    .global lbl_80482C94
    lbl_80482C94:
        .asciz "Ending Movie"
        .skip 3
    .global lbl_80482CA4
    lbl_80482CA4:
        .asciz "(C) Ninteno"
    .global lbl_80482CB0
    lbl_80482CB0:
        .asciz "Ending(Complete) Movie"
        .skip 1
    .global lbl_80482CC8
    lbl_80482CC8:
        .asciz "* Director"
        .skip 1
    .global lbl_80482CD4
    lbl_80482CD4:
        .asciz "* Otakara Design"
        .skip 3
    .global lbl_80482CE8
    lbl_80482CE8:
        .asciz "Hideo Ota"
        .skip 2
    .global lbl_80482CF4
    lbl_80482CF4:
        .asciz "Mezase Complete Movie"
        .skip 2
    .global lbl_80482D0C
    lbl_80482D0C:
        .asciz "singleGS_Movie.cpp"
        .skip 1
    .global lbl_80482D20
    lbl_80482D20:
        .asciz "P2Assert"
        .skip 3

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global lbl_804C0880
    lbl_804C0880:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000001
        .4byte 0x00000002
        .4byte 0x00000003
        .4byte 0x00000000
    .global opening_strings
    opening_strings:
        .4byte lbl_80482C20
        .4byte lbl_8051A0C0
        .4byte lbl_8051A0C0
        .4byte lbl_80482C30
        .4byte lbl_80482C40
        .4byte lbl_80482C50
        .4byte lbl_8051A0C0
        .4byte lbl_8051A0C0
        .4byte lbl_80482C60
        .4byte lbl_80482C78
        .4byte lbl_8051A0C0
        .4byte lbl_8051A0C0
        .4byte lbl_8051A0C0
        .4byte lbl_8051A0C0
        .4byte lbl_8051A0C0
        .4byte lbl_8051A0C0
        .4byte lbl_8051A0C0
        .4byte lbl_80482C84
        .4byte 0
    .global ending_strings
    ending_strings:
        .4byte lbl_80482C94
        .4byte lbl_8051A0C0
        .4byte lbl_8051A0C0
        .4byte lbl_8051A0C0
        .4byte lbl_8051A0C0
        .4byte lbl_8051A0C0
        .4byte lbl_80482CA4
    .global endingcomplete_strings
    endingcomplete_strings:
        .4byte lbl_80482CB0
        .4byte lbl_8051A0C0
        .4byte lbl_8051A0C0
        .4byte lbl_8051A0C0
        .4byte lbl_8051A0C0
        .4byte lbl_8051A0C0
        .4byte lbl_80482CA4
    .global staffroll_strings
    staffroll_strings:
        .4byte lbl_8051A0C4
        .4byte lbl_8051A0C0
        .4byte lbl_8051A0C0
        .4byte lbl_80482CC8
        .4byte lbl_80482C40
        .4byte lbl_80482C50
        .4byte lbl_8051A0C0
        .4byte lbl_80482CD4
        .4byte lbl_80482CE8
        .4byte lbl_8051A0C0
        .4byte lbl_80482CA4
    .global mezase_strings
    mezase_strings:
        .4byte lbl_80482CF4
        .4byte lbl_8051A0C0
        .4byte lbl_8051A0C0
        .4byte lbl_8051A0C0
        .4byte lbl_8051A0C0
        .4byte lbl_8051A0C0
        .4byte lbl_80482CA4
    .global __vt__Q34Game10SingleGame10MovieState
    __vt__Q34Game10SingleGame10MovieState:
        .4byte 0
        .4byte 0
        .4byte
   init__Q34Game10SingleGame10MovieStateFPQ24Game17SingleGameSectionPQ24Game8StateArg
        .4byte exec__Q34Game10SingleGame10MovieStateFPQ24Game17SingleGameSection
        .4byte
   cleanup__Q34Game10SingleGame10MovieStateFPQ24Game17SingleGameSection .4byte
   "resume__Q24Game36FSMState<Q24Game17SingleGameSection>FPQ24Game17SingleGameSection"
        .4byte
   "restart__Q24Game36FSMState<Q24Game17SingleGameSection>FPQ24Game17SingleGameSection"
        .4byte
   "transit__Q24Game36FSMState<Q24Game17SingleGameSection>FPQ24Game17SingleGameSectioniPQ24Game8StateArg"
        .4byte
   draw__Q34Game10SingleGame10MovieStateFPQ24Game17SingleGameSectionR8Graphics
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
   on_demo_timer__Q34Game10SingleGame5StateFPQ24Game17SingleGameSectionUl .4byte
   0 .4byte 0 .4byte 0 .4byte 0 .4byte 0 .4byte 0 .4byte 0 .4byte 0 .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0

    .section .sbss # 0x80514D80 - 0x80516360
    .global lbl_80515C38
    lbl_80515C38:
        .skip 0x4
    .global lbl_80515C3C
    lbl_80515C3C:
        .skip 0x4

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051A0C0
    lbl_8051A0C0:
        .4byte 0x00000000
    .global lbl_8051A0C4
    lbl_8051A0C4:
        .asciz "Pikmin2"
    .global lbl_8051A0CC
    lbl_8051A0CC:
        .float 4.0
    .global lbl_8051A0D0
    lbl_8051A0D0:
        .float 480.0
*/

namespace Game {

/*
 * --INFO--
 * Address:	8021EED8
 * Size:	00008C
 */
SingleGame::MovieState::MovieState(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r4, "__vt__Q24Game36FSMState<Q24Game17SingleGameSection>"@ha
	li       r5, 0
	stw      r0, 0x14(r1)
	addi     r0, r4, "__vt__Q24Game36FSMState<Q24Game17SingleGameSection>"@l
	lis      r4, __vt__Q34Game10SingleGame5State@ha
	stw      r31, 0xc(r1)
	mr       r31, r3
	addi     r4, r4, __vt__Q34Game10SingleGame5State@l
	stw      r0, 0(r3)
	li       r0, 9
	lis      r3, __vt__Q34Game10SingleGame10MovieState@ha
	stw      r0, 4(r31)
	addi     r0, r3, __vt__Q34Game10SingleGame10MovieState@l
	li       r3, 0xb0
	stw      r5, 8(r31)
	stw      r4, 0(r31)
	stw      r0, 0(r31)
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8021EF3C
	li       r4, 0
	bl       __ct__10ControllerFQ210JUTGamePad8EPadPort
	mr       r0, r3

lbl_8021EF3C:
	stw      r0, 0x14(r31)
	li       r0, 0
	mr       r3, r31
	stw      r0, 0x1c(r31)
	stw      r0, 0x18(r31)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8021EF64
 * Size:	000290
 */
void SingleGame::MovieState::init(Game::SingleGameSection*, Game::StateArg*)
{
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
void SingleGame::MovieState::exec(Game::SingleGameSection*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r4
	stw      r30, 0x18(r1)
	mr       r30, r3
	lwz      r0, 0x1c(r3)
	cmplwi   r0, 0
	beq      lbl_8021F2F0
	lwz      r3, 0x20(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lbz      r0, 0x24(r30)
	cmpwi    r0, 1
	beq      lbl_8021F270
	bge      lbl_8021F2F0
	cmpwi    r0, 0
	bge      lbl_8021F24C
	b        lbl_8021F2F0

lbl_8021F24C:
	lwz      r3, 0x20(r30)
	bl       isFinishLoading__Q24Game9THPPlayerFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_8021F2F0
	li       r0, 1
	stb      r0, 0x24(r30)
	lwz      r3, 0x20(r30)
	bl       play__Q24Game9THPPlayerFv
	b        lbl_8021F2F0

lbl_8021F270:
	lwz      r3, 0x14(r30)
	lwz      r0, 0x1c(r3)
	rlwinm.  r0, r0, 0, 0x13, 0x13
	bne      lbl_8021F290
	lwz      r3, 0x20(r30)
	bl       isFinishPlaying__Q24Game9THPPlayerFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_8021F2F0

lbl_8021F290:
	lwz      r0, 0xd4(r31)
	lfs      f1, lbl_8051A0CC@sda21(r2)
	stw      r0, 0x18(r31)
	lwz      r3, 0xd4(r31)
	bl       start__8WipeBaseFf
	lwz      r3, stageList__4Game@sda21(r13)
	li       r4, 0
	bl       getCourseInfo__Q24Game6StagesFi
	stw      r3, 0x22c(r31)
	li       r7, 0
	li       r5, 1
	li       r0, 5
	stb      r7, 8(r1)
	mr       r3, r30
	mr       r4, r31
	addi     r6, r1, 8
	stb      r5, 9(r1)
	li       r5, 2
	stb      r7, 0xa(r1)
	sth      r0, 0xc(r1)
	lwz      r12, 0(r30)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_8021F2F0:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8021F308
 * Size:	000040
 */
void SingleGame::MovieState::draw(Game::SingleGameSection*, Graphics&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r0, 0x1c(r3)
	cmplwi   r0, 0
	beq      lbl_8021F338
	lwz      r3, 0x20(r3)
	mr       r4, r5
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl

lbl_8021F338:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8021F348
 * Size:	000048
 */
void SingleGame::MovieState::cleanup(Game::SingleGameSection*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, 0x1c(r3)
	bl       freeAll__7JKRHeapFv
	lwz      r3, 0x1c(r31)
	bl       destroy__7JKRHeapFv
	li       r0, 0
	stw      r0, 0x1c(r31)
	lwz      r3, 0x18(r31)
	bl       becomeCurrentHeap__7JKRHeapFv
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

} // namespace Game

/*
 * --INFO--
 * Address:	8021F390
 * Size:	000040
 */
void __sinit_singleGS_Movie_cpp(void)
{
	/*
	lis      r3, __float_nan@ha
	li       r0, 0
	addi     r5, r3, __float_nan@l
	lis      r4, lbl_804C0880@ha
	lfs      f1, 0(r5)
	lis      r3, dummyPlayer@ha
	li       r5, -1
	lfs      f0, lbl_8051A0D0@sda21(r2)
	stfsu    f1, lbl_804C0880@l(r4)
	stwu     r0, dummyPlayer@l(r3)
	stw      r5, lbl_80515C38@sda21(r13)
	stfs     f1, lbl_80515C3C@sda21(r13)
	stfs     f1, 4(r4)
	stfs     f1, 8(r4)
	stfs     f0, 4(r3)
	blr
	*/
}
