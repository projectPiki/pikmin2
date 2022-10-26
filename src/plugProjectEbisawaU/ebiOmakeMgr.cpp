#include "types.h"
#include "ebi/Omake.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_80497AA0
    lbl_80497AA0:
        .asciz "ebiOmakeMgr.cpp"
        .asciz "FSMState_OmakeScreen"
        .skip 3
        .asciz "FSMState_CardEScreen"
        .skip 3
        .asciz "FSMState_SelectGame"
        .4byte 0x4D6F7669
        .4byte 0x658FF391
        .4byte 0xD4000000
        .asciz "TOmakeMgr::loadResource"
        .asciz "omake.szs"
        .skip 2
    .global lbl_80497B24
    lbl_80497B24:
        .asciz "P2Assert"
        .skip 3
    .global lbl_80497B30
    lbl_80497B30:
        .asciz "ArgOpenOmake"
        .skip 3

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global "__vt__Q24Game31StateMachine<Q33ebi5Omake4TMgr>"
    "__vt__Q24Game31StateMachine<Q33ebi5Omake4TMgr>":
        .4byte 0
        .4byte 0
        .4byte
   "init__Q24Game31StateMachine<Q33ebi5Omake4TMgr>FPQ33ebi5Omake4TMgr" .4byte
   "start__Q24Game31StateMachine<Q33ebi5Omake4TMgr>FPQ33ebi5Omake4TMgriPQ24Game8StateArg"
        .4byte
   "exec__Q24Game31StateMachine<Q33ebi5Omake4TMgr>FPQ33ebi5Omake4TMgr" .4byte
   "transit__Q24Game31StateMachine<Q33ebi5Omake4TMgr>FPQ33ebi5Omake4TMgriPQ24Game8StateArg"
    .global __vt__Q33ebi5Omake19FSMState_SelectGame
    __vt__Q33ebi5Omake19FSMState_SelectGame:
        .4byte 0
        .4byte 0
        .4byte init__Q33ebi5Omake8FSMStateFPQ33ebi5Omake4TMgrPQ24Game8StateArg
        .4byte exec__Q33ebi5Omake8FSMStateFPQ33ebi5Omake4TMgr
        .4byte
   "cleanup__Q24Game27FSMState<Q33ebi5Omake4TMgr>FPQ33ebi5Omake4TMgr" .4byte
   "resume__Q24Game27FSMState<Q33ebi5Omake4TMgr>FPQ33ebi5Omake4TMgr" .4byte
   "restart__Q24Game27FSMState<Q33ebi5Omake4TMgr>FPQ33ebi5Omake4TMgr" .4byte
   "transit__Q24Game27FSMState<Q33ebi5Omake4TMgr>FPQ33ebi5Omake4TMgriPQ24Game8StateArg"
        .4byte
   do_init__Q33ebi5Omake19FSMState_SelectGameFPQ33ebi5Omake4TMgrPQ24Game8StateArg
        .4byte do_exec__Q33ebi5Omake19FSMState_SelectGameFPQ33ebi5Omake4TMgr
    .global __vt__Q33ebi5Omake20FSMState_CardEScreen
    __vt__Q33ebi5Omake20FSMState_CardEScreen:
        .4byte 0
        .4byte 0
        .4byte init__Q33ebi5Omake8FSMStateFPQ33ebi5Omake4TMgrPQ24Game8StateArg
        .4byte exec__Q33ebi5Omake8FSMStateFPQ33ebi5Omake4TMgr
        .4byte
   "cleanup__Q24Game27FSMState<Q33ebi5Omake4TMgr>FPQ33ebi5Omake4TMgr" .4byte
   "resume__Q24Game27FSMState<Q33ebi5Omake4TMgr>FPQ33ebi5Omake4TMgr" .4byte
   "restart__Q24Game27FSMState<Q33ebi5Omake4TMgr>FPQ33ebi5Omake4TMgr" .4byte
   "transit__Q24Game27FSMState<Q33ebi5Omake4TMgr>FPQ33ebi5Omake4TMgriPQ24Game8StateArg"
        .4byte
   do_init__Q33ebi5Omake20FSMState_CardEScreenFPQ33ebi5Omake4TMgrPQ24Game8StateArg
        .4byte do_exec__Q33ebi5Omake20FSMState_CardEScreenFPQ33ebi5Omake4TMgr
    .global __vt__Q33ebi6Screen12ArgOpenOmake
    __vt__Q33ebi6Screen12ArgOpenOmake:
        .4byte 0
        .4byte 0
        .4byte getName__Q33ebi6Screen12ArgOpenOmakeFv
    .global __vt__Q33ebi5Omake20FSMState_OmakeScreen
    __vt__Q33ebi5Omake20FSMState_OmakeScreen:
        .4byte 0
        .4byte 0
        .4byte init__Q33ebi5Omake8FSMStateFPQ33ebi5Omake4TMgrPQ24Game8StateArg
        .4byte exec__Q33ebi5Omake8FSMStateFPQ33ebi5Omake4TMgr
        .4byte
   "cleanup__Q24Game27FSMState<Q33ebi5Omake4TMgr>FPQ33ebi5Omake4TMgr" .4byte
   "resume__Q24Game27FSMState<Q33ebi5Omake4TMgr>FPQ33ebi5Omake4TMgr" .4byte
   "restart__Q24Game27FSMState<Q33ebi5Omake4TMgr>FPQ33ebi5Omake4TMgr" .4byte
   "transit__Q24Game27FSMState<Q33ebi5Omake4TMgr>FPQ33ebi5Omake4TMgriPQ24Game8StateArg"
        .4byte
   do_init__Q33ebi5Omake20FSMState_OmakeScreenFPQ33ebi5Omake4TMgrPQ24Game8StateArg
        .4byte do_exec__Q33ebi5Omake20FSMState_OmakeScreenFPQ33ebi5Omake4TMgr
    .global __vt__Q33ebi5Omake8FSMState
    __vt__Q33ebi5Omake8FSMState:
        .4byte 0
        .4byte 0
        .4byte init__Q33ebi5Omake8FSMStateFPQ33ebi5Omake4TMgrPQ24Game8StateArg
        .4byte exec__Q33ebi5Omake8FSMStateFPQ33ebi5Omake4TMgr
        .4byte
   "cleanup__Q24Game27FSMState<Q33ebi5Omake4TMgr>FPQ33ebi5Omake4TMgr" .4byte
   "resume__Q24Game27FSMState<Q33ebi5Omake4TMgr>FPQ33ebi5Omake4TMgr" .4byte
   "restart__Q24Game27FSMState<Q33ebi5Omake4TMgr>FPQ33ebi5Omake4TMgr" .4byte
   "transit__Q24Game27FSMState<Q33ebi5Omake4TMgr>FPQ33ebi5Omake4TMgriPQ24Game8StateArg"
        .4byte
   do_init__Q33ebi5Omake8FSMStateFPQ33ebi5Omake4TMgrPQ24Game8StateArg .4byte
   do_exec__Q33ebi5Omake8FSMStateFPQ33ebi5Omake4TMgr .global
   "__vt__Q24Game27FSMState<Q33ebi5Omake4TMgr>"
    "__vt__Q24Game27FSMState<Q33ebi5Omake4TMgr>":
        .4byte 0
        .4byte 0
        .4byte
   "init__Q24Game27FSMState<Q33ebi5Omake4TMgr>FPQ33ebi5Omake4TMgrPQ24Game8StateArg"
        .4byte "exec__Q24Game27FSMState<Q33ebi5Omake4TMgr>FPQ33ebi5Omake4TMgr"
        .4byte
   "cleanup__Q24Game27FSMState<Q33ebi5Omake4TMgr>FPQ33ebi5Omake4TMgr" .4byte
   "resume__Q24Game27FSMState<Q33ebi5Omake4TMgr>FPQ33ebi5Omake4TMgr" .4byte
   "restart__Q24Game27FSMState<Q33ebi5Omake4TMgr>FPQ33ebi5Omake4TMgr" .4byte
   "transit__Q24Game27FSMState<Q33ebi5Omake4TMgr>FPQ33ebi5Omake4TMgriPQ24Game8StateArg"
    .global __vt__Q33ebi5Omake15FSMStateMachine
    __vt__Q33ebi5Omake15FSMStateMachine:
        .4byte 0
        .4byte 0
        .4byte init__Q33ebi5Omake15FSMStateMachineFPQ33ebi5Omake4TMgr
        .4byte
   "start__Q24Game31StateMachine<Q33ebi5Omake4TMgr>FPQ33ebi5Omake4TMgriPQ24Game8StateArg"
        .4byte
   "exec__Q24Game31StateMachine<Q33ebi5Omake4TMgr>FPQ33ebi5Omake4TMgr" .4byte
   "transit__Q24Game31StateMachine<Q33ebi5Omake4TMgr>FPQ33ebi5Omake4TMgriPQ24Game8StateArg"
        .4byte 0

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051FEA0
    lbl_8051FEA0:
        .4byte 0x5374616E
        .4byte 0x64627900
    .global lbl_8051FEA8
    lbl_8051FEA8:
        .4byte 0x40400000
    .global lbl_8051FEAC
    lbl_8051FEAC:
        .4byte 0x40A00000
*/

namespace ebi {

/*
 * --INFO--
 * Address:	803EEBE8
 * Size:	0001D0
 */
void Omake::FSMStateMachine::init(ebi::Omake::TMgr*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r4, lbl_80497AA0@ha
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	addi     r31, r4, lbl_80497AA0@l
	li       r4, 5
	stw      r30, 8(r1)
	mr       r30, r3
	bl       "create__Q24Game31StateMachine<Q33ebi5Omake4TMgr>Fi"
	li       r3, 0x10
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_803EEC4C
	lis      r5, "__vt__Q24Game27FSMState<Q33ebi5Omake4TMgr>"@ha
	lis      r3, __vt__Q33ebi5Omake8FSMState@ha
	addi     r0, r5, "__vt__Q24Game27FSMState<Q33ebi5Omake4TMgr>"@l
	li       r5, 0
	stw      r0, 0(r4)
	addi     r3, r3, __vt__Q33ebi5Omake8FSMState@l
	addi     r0, r2, lbl_8051FEA0@sda21
	stw      r5, 4(r4)
	stw      r5, 8(r4)
	stw      r3, 0(r4)
	stw      r0, 0xc(r4)

lbl_803EEC4C:
	mr       r3, r30
	bl
"registerState__Q24Game31StateMachine<Q33ebi5Omake4TMgr>FPQ24Game27FSMState<Q33ebi5Omake4TMgr>"
	li       r3, 0x10
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_803EECA0
	lis      r3, "__vt__Q24Game27FSMState<Q33ebi5Omake4TMgr>"@ha
	lis      r5, __vt__Q33ebi5Omake8FSMState@ha
	addi     r0, r3, "__vt__Q24Game27FSMState<Q33ebi5Omake4TMgr>"@l
	lis      r3, __vt__Q33ebi5Omake20FSMState_OmakeScreen@ha
	stw      r0, 0(r4)
	li       r0, 1
	li       r7, 0
	addi     r6, r5, __vt__Q33ebi5Omake8FSMState@l
	stw      r0, 4(r4)
	addi     r5, r31, 0x10
	addi     r0, r3, __vt__Q33ebi5Omake20FSMState_OmakeScreen@l
	stw      r7, 8(r4)
	stw      r6, 0(r4)
	stw      r5, 0xc(r4)
	stw      r0, 0(r4)

lbl_803EECA0:
	mr       r3, r30
	bl
"registerState__Q24Game31StateMachine<Q33ebi5Omake4TMgr>FPQ24Game27FSMState<Q33ebi5Omake4TMgr>"
	li       r3, 0x10
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_803EECF4
	lis      r3, "__vt__Q24Game27FSMState<Q33ebi5Omake4TMgr>"@ha
	lis      r5, __vt__Q33ebi5Omake8FSMState@ha
	addi     r0, r3, "__vt__Q24Game27FSMState<Q33ebi5Omake4TMgr>"@l
	lis      r3, __vt__Q33ebi5Omake20FSMState_CardEScreen@ha
	stw      r0, 0(r4)
	li       r0, 2
	li       r7, 0
	addi     r6, r5, __vt__Q33ebi5Omake8FSMState@l
	stw      r0, 4(r4)
	addi     r5, r31, 0x28
	addi     r0, r3, __vt__Q33ebi5Omake20FSMState_CardEScreen@l
	stw      r7, 8(r4)
	stw      r6, 0(r4)
	stw      r5, 0xc(r4)
	stw      r0, 0(r4)

lbl_803EECF4:
	mr       r3, r30
	bl
"registerState__Q24Game31StateMachine<Q33ebi5Omake4TMgr>FPQ24Game27FSMState<Q33ebi5Omake4TMgr>"
	li       r3, 0x1c
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_803EED50
	lis      r3, "__vt__Q24Game27FSMState<Q33ebi5Omake4TMgr>"@ha
	lis      r5, __vt__Q33ebi5Omake8FSMState@ha
	addi     r0, r3, "__vt__Q24Game27FSMState<Q33ebi5Omake4TMgr>"@l
	lis      r3, __vt__Q33ebi5Omake19FSMState_SelectGame@ha
	stw      r0, 0(r4)
	li       r0, 3
	li       r7, 0
	addi     r6, r5, __vt__Q33ebi5Omake8FSMState@l
	stw      r0, 4(r4)
	addi     r5, r31, 0x40
	addi     r0, r3, __vt__Q33ebi5Omake19FSMState_SelectGame@l
	stw      r7, 8(r4)
	stw      r6, 0(r4)
	stw      r5, 0xc(r4)
	stw      r0, 0(r4)
	stw      r7, 0x14(r4)
	stw      r7, 0x18(r4)

lbl_803EED50:
	mr       r3, r30
	bl
"registerState__Q24Game31StateMachine<Q33ebi5Omake4TMgr>FPQ24Game27FSMState<Q33ebi5Omake4TMgr>"
	li       r3, 0x10
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_803EED98
	lis      r5, "__vt__Q24Game27FSMState<Q33ebi5Omake4TMgr>"@ha
	lis      r3, __vt__Q33ebi5Omake8FSMState@ha
	addi     r0, r5, "__vt__Q24Game27FSMState<Q33ebi5Omake4TMgr>"@l
	li       r6, 4
	stw      r0, 0(r4)
	li       r5, 0
	addi     r3, r3, __vt__Q33ebi5Omake8FSMState@l
	addi     r0, r31, 0x54
	stw      r6, 4(r4)
	stw      r5, 8(r4)
	stw      r3, 0(r4)
	stw      r0, 0xc(r4)

lbl_803EED98:
	mr       r3, r30
	bl
"registerState__Q24Game31StateMachine<Q33ebi5Omake4TMgr>FPQ24Game27FSMState<Q33ebi5Omake4TMgr>"
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803EEDB8
 * Size:	00002C
 */
void Omake::FSMState::init(ebi::Omake::TMgr*, Game::StateArg*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803EEDE4
 * Size:	00002C
 */
void Omake::FSMState::exec(ebi::Omake::TMgr*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803EEE10
 * Size:	0000DC
 */
void Omake::FSMState_OmakeScreen::do_init(ebi::Omake::TMgr*, Game::StateArg*)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	stw      r30, 0x28(r1)
	stw      r29, 0x24(r1)
	mr       r29, r4
	lwz      r0, 0x8b4(r4)
	cmpwi    r0, 0
	bne      lbl_803EEEB0
	lwz      r3, sys@sda21(r13)
	bl       getPlayCommonData__6SystemFv
	bl       isPerfectChallenge__Q24Game14PlayCommonDataFv
	mr       r31, r3
	lwz      r3, sys@sda21(r13)
	bl       getPlayCommonData__6SystemFv
	lbz      r0, 0(r3)
	lwz      r3, sys@sda21(r13)
	rlwinm   r30, r0, 0x1f, 0x1f, 0x1f
	bl       getPlayCommonData__6SystemFv
	lbz      r4, 0(r3)
	lis      r3, __vt__Q33ebi6Screen7ArgOpen@ha
	addi     r0, r3, __vt__Q33ebi6Screen7ArgOpen@l
	lis      r3, __vt__Q33ebi6Screen12ArgOpenOmake@ha
	stw      r0, 8(r1)
	clrlwi   r5, r4, 0x1f
	addi     r3, r3, __vt__Q33ebi6Screen12ArgOpenOmake@l
	li       r0, -1
	stw      r3, 8(r1)
	addi     r3, r29, 8
	addi     r4, r1, 8
	stb      r5, 0xc(r1)
	stb      r30, 0xd(r1)
	stb      r31, 0xe(r1)
	stw      r0, 0x10(r1)
	lwz      r12, 8(r29)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	b        lbl_803EEED0

lbl_803EEEB0:
	lwz      r0, 0x14(r29)
	cmpwi    r0, 1
	bne      lbl_803EEEC8
	addi     r3, r29, 8
	bl       openFromCardE___Q33ebi6Screen6TOmakeFv
	b        lbl_803EEED0

lbl_803EEEC8:
	addi     r3, r29, 8
	bl       openFromMovie___Q33ebi6Screen6TOmakeFv

lbl_803EEED0:
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	lwz      r29, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	803EEEEC
 * Size:	0000A8
 */
void Omake::FSMState_OmakeScreen::do_exec(ebi::Omake::TMgr*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r0, 0x14(r4)
	cmpwi    r0, 1
	bne      lbl_803EEF2C
	lwz      r12, 0(r3)
	li       r5, 2
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_803EEF2C:
	lwz      r0, 0x14(r31)
	cmpwi    r0, 4
	bne      lbl_803EEF58
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 4
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_803EEF58:
	addi     r3, r31, 8
	lwz      r12, 8(r31)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_803EEF7C
	mr       r3, r31
	bl       goEnd___Q33ebi5Omake4TMgrFv

lbl_803EEF7C:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803EEF94
 * Size:	000034
 */
void Omake::FSMState_CardEScreen::do_init(ebi::Omake::TMgr*, Game::StateArg*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	addi     r3, r4, 0x468
	li       r4, 0
	stw      r0, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803EEFC8
 * Size:	0000A0
 */
void Omake::FSMState_CardEScreen::do_exec(ebi::Omake::TMgr*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	addi     r3, r31, 0x468
	lwz      r12, 0x468(r4)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_803EF050
	lbz      r0, 0x478(r31)
	cmplwi   r0, 0
	beq      lbl_803EF030
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 1
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_803EF050

lbl_803EF030:
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 3
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_803EF050:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803EF068
 * Size:	000048
 */
void Omake::FSMState_SelectGame::do_init(ebi::Omake::TMgr*, Game::StateArg*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	addi     r3, r4, 0x5dc
	lwz      r12, 0x5dc(r4)
	li       r4, 0
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	li       r0, 0
	stw      r0, 0x10(r31)
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803EF0B0
 * Size:	000378
 */
void Omake::FSMState_SelectGame::do_exec(ebi::Omake::TMgr*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r0, 0x10(r3)
	cmpwi    r0, 2
	beq      lbl_803EF224
	bge      lbl_803EF0EC
	cmpwi    r0, 0
	beq      lbl_803EF0FC
	bge      lbl_803EF174
	b        lbl_803EF410

lbl_803EF0EC:
	cmpwi    r0, 4
	beq      lbl_803EF3D4
	bge      lbl_803EF410
	b        lbl_803EF35C

lbl_803EF0FC:
	addi     r3, r31, 0x5dc
	bl       isDelegateControl__Q33ebi6Screen10TOmakeGameFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_803EF11C
	lwz      r3, gCardEMgr__3ebi@sda21(r13)
	bl       probeAGB__Q33ebi11CardEReader4TMgrFv
	li       r0, 1
	stw      r0, 0x10(r30)

lbl_803EF11C:
	addi     r3, r31, 0x5dc
	lwz      r12, 0x5dc(r31)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_803EF410
	addi     r3, r31, 0x468
	li       r4, 0
	lwz      r12, 0x468(r31)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 2
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_803EF410

lbl_803EF174:
	lwz      r3, gCardEMgr__3ebi@sda21(r13)
	bl       isFinish__Q33ebi11CardEReader4TMgrFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_803EF410
	lwz      r3, gCardEMgr__3ebi@sda21(r13)
	lwz      r0, 0x3c(r3)
	cmpwi    r0, 0
	bne      lbl_803EF1E0
	lwz      r4, 0x61c(r31)
	bl       uploadToGBA__Q33ebi11CardEReader4TMgrFl
	addi     r3, r31, 0x5dc
	li       r4, 1
	bl       openMsg__Q33ebi6Screen10TOmakeGameFl
	lwz      r3, sys@sda21(r13)
	lfs      f1, lbl_8051FEA8@sda21(r2)
	lfs      f0, 0x54(r3)
	fdivs    f1, f1, f0
	bl       __cvt_fp2unsigned
	stw      r3, 0x14(r30)
	li       r4, 0x1800
	li       r5, 0
	stw      r3, 0x18(r30)
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	bl       playSystemSe__Q28PSSystem5SysIFFUlUl
	li       r0, 2
	stw      r0, 0x10(r30)
	b        lbl_803EF410

lbl_803EF1E0:
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	li       r4, 0x180d
	li       r5, 0
	bl       playSystemSe__Q28PSSystem5SysIFFUlUl
	addi     r3, r31, 0x5dc
	li       r4, 4
	bl       openMsg__Q33ebi6Screen10TOmakeGameFl
	lwz      r3, sys@sda21(r13)
	lfs      f1, lbl_8051FEAC@sda21(r2)
	lfs      f0, 0x54(r3)
	fdivs    f1, f1, f0
	bl       __cvt_fp2unsigned
	stw      r3, 0x14(r30)
	li       r0, 3
	stw      r3, 0x18(r30)
	stw      r0, 0x10(r30)
	b        lbl_803EF410

lbl_803EF224:
	lwz      r3, 0x14(r30)
	cmplwi   r3, 0
	beq      lbl_803EF238
	addi     r0, r3, -1
	stw      r0, 0x14(r30)

lbl_803EF238:
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	li       r4, 0x100b
	li       r5, 0
	bl       playSystemSe__Q28PSSystem5SysIFFUlUl
	lwz      r3, gCardEMgr__3ebi@sda21(r13)
	bl       isFinish__Q33ebi11CardEReader4TMgrFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_803EF410
	lwz      r0, 0x14(r30)
	cmplwi   r0, 0
	bne      lbl_803EF410
	lwz      r3, gCardEMgr__3ebi@sda21(r13)
	lwz      r0, 0x3c(r3)
	cmpwi    r0, 1
	beq      lbl_803EF2D4
	bge      lbl_803EF284
	cmpwi    r0, 0
	bge      lbl_803EF290
	b        lbl_803EF410

lbl_803EF284:
	cmpwi    r0, 3
	bge      lbl_803EF410
	b        lbl_803EF318

lbl_803EF290:
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	li       r4, 0x180c
	li       r5, 0
	bl       playSystemSe__Q28PSSystem5SysIFFUlUl
	addi     r3, r31, 0x5dc
	li       r4, 2
	bl       openMsg__Q33ebi6Screen10TOmakeGameFl
	lwz      r3, sys@sda21(r13)
	lfs      f1, lbl_8051FEAC@sda21(r2)
	lfs      f0, 0x54(r3)
	fdivs    f1, f1, f0
	bl       __cvt_fp2unsigned
	stw      r3, 0x14(r30)
	li       r0, 4
	stw      r3, 0x18(r30)
	stw      r0, 0x10(r30)
	b        lbl_803EF410

lbl_803EF2D4:
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	li       r4, 0x180d
	li       r5, 0
	bl       playSystemSe__Q28PSSystem5SysIFFUlUl
	addi     r3, r31, 0x5dc
	li       r4, 4
	bl       openMsg__Q33ebi6Screen10TOmakeGameFl
	lwz      r3, sys@sda21(r13)
	lfs      f1, lbl_8051FEAC@sda21(r2)
	lfs      f0, 0x54(r3)
	fdivs    f1, f1, f0
	bl       __cvt_fp2unsigned
	stw      r3, 0x14(r30)
	li       r0, 3
	stw      r3, 0x18(r30)
	stw      r0, 0x10(r30)
	b        lbl_803EF410

lbl_803EF318:
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	li       r4, 0x180d
	li       r5, 0
	bl       playSystemSe__Q28PSSystem5SysIFFUlUl
	addi     r3, r31, 0x5dc
	li       r4, 3
	bl       openMsg__Q33ebi6Screen10TOmakeGameFl
	lwz      r3, sys@sda21(r13)
	lfs      f1, lbl_8051FEAC@sda21(r2)
	lfs      f0, 0x54(r3)
	fdivs    f1, f1, f0
	bl       __cvt_fp2unsigned
	stw      r3, 0x14(r30)
	li       r0, 3
	stw      r3, 0x18(r30)
	stw      r0, 0x10(r30)
	b        lbl_803EF410

lbl_803EF35C:
	lwz      r3, 0x14(r30)
	cmplwi   r3, 0
	beq      lbl_803EF370
	addi     r0, r3, -1
	stw      r0, 0x14(r30)

lbl_803EF370:
	lwz      r0, 0x14(r30)
	cmplwi   r0, 0
	bne      lbl_803EF398
	addi     r3, r31, 0x5dc
	li       r4, 0
	bl       openMsg__Q33ebi6Screen10TOmakeGameFl
	addi     r3, r31, 0x5dc
	bl       setSelfControl__Q33ebi6Screen10TOmakeGameFv
	li       r0, 0
	stw      r0, 0x10(r30)

lbl_803EF398:
	lwz      r0, 0x14(r30)
	cmplwi   r0, 2
	ble      lbl_803EF410
	lwz      r3, 0(r31)
	lwz      r0, 0x1c(r3)
	rlwinm.  r0, r0, 0, 0x16, 0x16
	beq      lbl_803EF410
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	li       r4, 0x1801
	li       r5, 0
	bl       playSystemSe__Q28PSSystem5SysIFFUlUl
	li       r0, 1
	stw      r0, 0x14(r30)
	stw      r0, 0x18(r30)
	b        lbl_803EF410

lbl_803EF3D4:
	lwz      r3, 0x14(r30)
	cmplwi   r3, 0
	beq      lbl_803EF3E8
	addi     r0, r3, -1
	stw      r0, 0x14(r30)

lbl_803EF3E8:
	lwz      r0, 0x14(r30)
	cmplwi   r0, 0
	bne      lbl_803EF410
	addi     r3, r31, 0x5dc
	li       r4, 0
	bl       openMsg__Q33ebi6Screen10TOmakeGameFl
	addi     r3, r31, 0x5dc
	bl       setSelfControl__Q33ebi6Screen10TOmakeGameFv
	li       r0, 0
	stw      r0, 0x10(r30)

lbl_803EF410:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803EF428
 * Size:	0000B4
 */
Omake::TMgr::TMgr()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	li       r0, 0
	stw      r31, 0xc(r1)
	mr       r31, r3
	stw      r0, 0(r3)
	addi     r3, r31, 8
	bl       __ct__Q33ebi6Screen6TOmakeFv
	addi     r3, r31, 0x468
	bl       __ct__Q33ebi6Screen11TOmakeCardEFv
	addi     r3, r31, 0x5dc
	bl       __ct__Q33ebi6Screen10TOmakeGameFv
	li       r7, 0
	lis      r4, "__vt__Q24Game31StateMachine<Q33ebi5Omake4TMgr>"@ha
	stb      r7, 0x890(r31)
	lis      r3, __vt__Q33ebi5Omake15FSMStateMachine@ha
	addi     r6, r4, "__vt__Q24Game31StateMachine<Q33ebi5Omake4TMgr>"@l
	li       r5, -1
	stw      r7, 0x894(r31)
	addi     r0, r3, __vt__Q33ebi5Omake15FSMStateMachine@l
	addi     r3, r31, 0x89c
	mr       r4, r31
	stw      r7, 0x898(r31)
	stw      r6, 0x89c(r31)
	stw      r5, 0x8b4(r31)
	stw      r0, 0x89c(r31)
	lwz      r12, 0x89c(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	addi     r3, r31, 0x89c
	mr       r4, r31
	lwz      r12, 0x89c(r31)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	mr       r3, r31
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803EF4DC
 * Size:	0000E8
 */
void Omake::TMgr::loadResource(void)
{
	/*
	stwu     r1, -0x120(r1)
	mflr     r0
	lis      r4, lbl_80497AA0@ha
	li       r5, 0
	stw      r0, 0x124(r1)
	stw      r31, 0x11c(r1)
	addi     r31, r4, lbl_80497AA0@l
	addi     r4, r31, 0x60
	stw      r30, 0x118(r1)
	stw      r29, 0x114(r1)
	mr       r29, r3
	lwz      r3, sys@sda21(r13)
	bl       heapStatusStart__6SystemFPcP7JKRHeap
	addi     r3, r1, 8
	addi     r4, r31, 0x78
	bl       makeLanguageResName__Q22og9newScreenFPcPCc
	addi     r3, r1, 8
	li       r4, 1
	li       r5, 0
	li       r6, 1
	bl
mount__10JKRArchiveFPCcQ210JKRArchive10EMountModeP7JKRHeapQ210JKRArchive15EMountDirection
	or.      r30, r3, r3
	bne      lbl_803EF54C
	addi     r3, r31, 0
	addi     r5, r31, 0x84
	li       r4, 0x10f
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803EF54C:
	addi     r3, r29, 8
	mr       r4, r30
	lwz      r12, 8(r29)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	addi     r3, r29, 0x468
	mr       r4, r30
	lwz      r12, 0x468(r29)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	addi     r3, r29, 0x5dc
	mr       r4, r30
	lwz      r12, 0x5dc(r29)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r3, sys@sda21(r13)
	addi     r4, r31, 0x60
	bl       heapStatusEnd__6SystemFPc
	lwz      r3, gCardEMgr__3ebi@sda21(r13)
	bl       loadResource__Q33ebi11CardEReader4TMgrFv
	lwz      r0, 0x124(r1)
	lwz      r31, 0x11c(r1)
	lwz      r30, 0x118(r1)
	lwz      r29, 0x114(r1)
	mtlr     r0
	addi     r1, r1, 0x120
	blr
	*/
}

/*
 * --INFO--
 * Address:	803EF5C4
 * Size:	000050
 */
void Omake::TMgr::newCardEMgrAndTask(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	bl       globalInstance__Q33ebi11CardEReader4TMgrFv
	lwz      r3, gCardEMgr__3ebi@sda21(r13)
	bl       init__Q33ebi11CardEReader4TMgrFv
	li       r3, 0x40
	li       r4, 0x12
	li       r5, 0x4000
	li       r6, 0
	bl       create__7JKRTaskFiiUlP7JKRHeap
	lis      r4, gCardEMgr_ThreadFunc__3ebiFPv@ha
	li       r5, 0
	addi     r4, r4, gCardEMgr_ThreadFunc__3ebiFPv@l
	li       r6, 0
	bl       request__7JKRTaskFPFPv_vPvPv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803EF614
 * Size:	00003C
 */
void Omake::TMgr::start(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r4, r3
	li       r5, 1
	stw      r0, 0x14(r1)
	addi     r3, r4, 0x89c
	li       r6, 0
	lwz      r12, 0x89c(r4)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803EF650
 * Size:	00003C
 */
void Omake::TMgr::goEnd_(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r4, r3
	li       r5, 0
	stw      r0, 0x14(r1)
	addi     r3, r4, 0x89c
	li       r6, 0
	lwz      r12, 0x89c(r4)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000084
 */
void Omake::TMgr::forceQuit(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803EF68C
 * Size:	000028
 */
bool Omake::TMgr::isFinish(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	bl       getStateID__Q33ebi5Omake4TMgrFv
	cntlzw   r0, r3
	rlwinm   r3, r0, 0x1b, 0x18, 0x1f
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803EF6B4
 * Size:	0000E0
 */
void Omake::TMgr::update(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	li       r0, 0
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r30, r3
	stb      r0, 0x890(r3)
	addi     r3, r30, 8
	bl       isCloseScreen__Q33ebi6Screen11TScreenBaseFv
	mr       r31, r3
	addi     r3, r30, 0x89c
	lwz      r12, 0x89c(r30)
	mr       r4, r30
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	mr       r3, r30
	bl       getStateID__Q33ebi5Omake4TMgrFv
	cmpwi    r3, 0
	beq      lbl_803EF77C
	mr       r3, r30
	bl       getStateID__Q33ebi5Omake4TMgrFv
	cmpwi    r3, 4
	beq      lbl_803EF77C
	addi     r3, r30, 8
	lwz      r12, 8(r30)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	addi     r3, r30, 0x468
	lwz      r12, 0x468(r30)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	addi     r3, r30, 0x5dc
	lwz      r12, 0x5dc(r30)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	lwz      r3, gCardEMgr__3ebi@sda21(r13)
	bl       update__Q33ebi11CardEReader4TMgrFv
	clrlwi.  r0, r31, 0x18
	bne      lbl_803EF77C
	addi     r3, r30, 8
	bl       isCloseScreen__Q33ebi6Screen11TScreenBaseFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_803EF77C
	li       r0, 1
	stb      r0, 0x890(r30)

lbl_803EF77C:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803EF794
 * Size:	000080
 */
void Omake::TMgr::draw(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       getStateID__Q33ebi5Omake4TMgrFv
	cmpwi    r3, 0
	beq      lbl_803EF800
	mr       r3, r31
	bl       getStateID__Q33ebi5Omake4TMgrFv
	cmpwi    r3, 4
	beq      lbl_803EF800
	addi     r3, r31, 8
	lwz      r12, 8(r31)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	addi     r3, r31, 0x468
	lwz      r12, 0x468(r31)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	addi     r3, r31, 0x5dc
	lwz      r12, 0x5dc(r31)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_803EF800:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803EF814
 * Size:	00002C
 */
bool Omake::TMgr::isMovieState(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	bl       getStateID__Q33ebi5Omake4TMgrFv
	subfic   r0, r3, 4
	cntlzw   r0, r0
	rlwinm   r3, r0, 0x1b, 0x18, 0x1f
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803EF840
 * Size:	000054
 */
void Omake::TMgr::restartFromMovieState(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       getStateID__Q33ebi5Omake4TMgrFv
	cmpwi    r3, 4
	bne      lbl_803EF880
	addi     r3, r31, 0x89c
	mr       r4, r31
	lwz      r12, 0x89c(r31)
	li       r5, 1
	li       r6, 0
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl

lbl_803EF880:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803EF894
 * Size:	000008
 */
int Omake::TMgr::getMovieID(void)
{
	/*
	lwz      r3, 0x44(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00016C
 */
bool Omake::TMgr::isTouchAnyKey_(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803EF89C
 * Size:	000058
 */
int Omake::TMgr::getStateID(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r0, 0x8b8(r3)
	cmplwi   r0, 0
	bne      lbl_803EF8D8
	lis      r3, lbl_80497AA0@ha
	lis      r5, lbl_80497B24@ha
	addi     r3, r3, lbl_80497AA0@l
	li       r4, 0x1cc
	addi     r5, r5, lbl_80497B24@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803EF8D8:
	lwz      r3, 0x8b8(r31)
	lwz      r0, 0x14(r1)
	lwz      r3, 4(r3)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803EF8F4
 * Size:	000004
 */
void Omake::FSMState::do_init(ebi::Omake::TMgr*, Game::StateArg*) { }

/*
 * --INFO--
 * Address:	803EF8F8
 * Size:	000004
 */
void Omake::FSMState::do_exec(ebi::Omake::TMgr*) { }
} // namespace ebi

/*
 * --INFO--
 * Address:	803EF8FC
 * Size:	000030
 */
// void transit__Q24Game27FSMState<ebi::Omake::TMgr>
// FPQ33ebi5Omake4TMgriPQ24Game8StateArg(void)
template <>
void Game::FSMState<ebi::Omake::TMgr>::transit(ebi::Omake::TMgr*, int, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x8(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803EF92C
 * Size:	000034
 */
// void start__Q24Game31StateMachine<ebi::Omake::TMgr>
// FPQ33ebi5Omake4TMgriPQ24Game8StateArg(void)
template <>
void Game::StateMachine<ebi::Omake::TMgr>::start(ebi::Omake::TMgr*, int, StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  li        r0, 0
	  stw       r0, 0x8B8(r4)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

namespace ebi {
namespace Screen {

/*
 * --INFO--
 * Address:	803EF960
 * Size:	000278
 */
TOmakeGame::~TOmakeGame(void)
{
	/*
stwu     r1, -0x10(r1)
mflr     r0
stw      r0, 0x14(r1)
stw      r31, 0xc(r1)
mr       r31, r4
stw      r30, 8(r1)
or.      r30, r3, r3
beq      lbl_803EFBBC
lis      r3, __vt__Q33ebi6Screen10TOmakeGame@ha
addic.   r0, r30, 0x244
addi     r0, r3, __vt__Q33ebi6Screen10TOmakeGame@l
stw      r0, 0(r30)
beq      lbl_803EF9E8
lis      r3, __vt__Q23ebi24E2DCallBack_WindowCursor@ha
addic.   r0, r30, 0x244
addi     r0, r3, __vt__Q23ebi24E2DCallBack_WindowCursor@l
stw      r0, 0x244(r30)
beq      lbl_803EF9E8
lis      r3, __vt__Q23ebi16E2DCallBack_Base@ha
addic.   r0, r30, 0x244
addi     r0, r3, __vt__Q23ebi16E2DCallBack_Base@l
stw      r0, 0x244(r30)
beq      lbl_803EF9E8
lis      r3, __vt__Q29P2DScreen12CallBackNode@ha
addic.   r0, r30, 0x244
addi     r0, r3, __vt__Q29P2DScreen12CallBackNode@l
stw      r0, 0x244(r30)
beq      lbl_803EF9E8
lis      r4, __vt__Q29P2DScreen4Node@ha
addi     r3, r30, 0x244
addi     r0, r4, __vt__Q29P2DScreen4Node@l
li       r4, 0
stw      r0, 0x244(r30)
bl       __dt__5CNodeFv

lbl_803EF9E8:
lis      r4, __dt__Q23ebi26E2DCallBack_BlinkFontColorFv@ha
addi     r3, r30, 0x160
addi     r4, r4, __dt__Q23ebi26E2DCallBack_BlinkFontColorFv@l
li       r5, 0x4c
li       r6, 3
bl       __destroy_arr
addic.   r0, r30, 0x140
beq      lbl_803EFA5C
lis      r3, __vt__Q23ebi25E2DCallBack_CalcAnimation@ha
addic.   r0, r30, 0x140
addi     r0, r3, __vt__Q23ebi25E2DCallBack_CalcAnimation@l
stw      r0, 0x140(r30)
beq      lbl_803EFA5C
lis      r3, __vt__Q23ebi16E2DCallBack_Base@ha
addic.   r0, r30, 0x140
addi     r0, r3, __vt__Q23ebi16E2DCallBack_Base@l
stw      r0, 0x140(r30)
beq      lbl_803EFA5C
lis      r3, __vt__Q29P2DScreen12CallBackNode@ha
addic.   r0, r30, 0x140
addi     r0, r3, __vt__Q29P2DScreen12CallBackNode@l
stw      r0, 0x140(r30)
beq      lbl_803EFA5C
lis      r4, __vt__Q29P2DScreen4Node@ha
addi     r3, r30, 0x140
addi     r0, r4, __vt__Q29P2DScreen4Node@l
li       r4, 0
stw      r0, 0x140(r30)
bl       __dt__5CNodeFv

lbl_803EFA5C:
addic.   r0, r30, 0x104
beq      lbl_803EFACC
lis      r3, __vt__Q23ebi19E2DCallBack_AnmBase@ha
addic.   r0, r30, 0x124
addi     r0, r3, __vt__Q23ebi19E2DCallBack_AnmBase@l
stw      r0, 0x104(r30)
beq      lbl_803EFA84
lis      r3, __vt__12J3DFrameCtrl@ha
addi     r0, r3, __vt__12J3DFrameCtrl@l
stw      r0, 0x124(r30)

lbl_803EFA84:
addic.   r0, r30, 0x104
beq      lbl_803EFACC
lis      r3, __vt__Q23ebi16E2DCallBack_Base@ha
addic.   r0, r30, 0x104
addi     r0, r3, __vt__Q23ebi16E2DCallBack_Base@l
stw      r0, 0x104(r30)
beq      lbl_803EFACC
lis      r3, __vt__Q29P2DScreen12CallBackNode@ha
addic.   r0, r30, 0x104
addi     r0, r3, __vt__Q29P2DScreen12CallBackNode@l
stw      r0, 0x104(r30)
beq      lbl_803EFACC
lis      r4, __vt__Q29P2DScreen4Node@ha
addi     r3, r30, 0x104
addi     r0, r4, __vt__Q29P2DScreen4Node@l
li       r4, 0
stw      r0, 0x104(r30)
bl       __dt__5CNodeFv

lbl_803EFACC:
addic.   r0, r30, 0xc8
beq      lbl_803EFB3C
lis      r3, __vt__Q23ebi19E2DCallBack_AnmBase@ha
addic.   r0, r30, 0xe8
addi     r0, r3, __vt__Q23ebi19E2DCallBack_AnmBase@l
stw      r0, 0xc8(r30)
beq      lbl_803EFAF4
lis      r3, __vt__12J3DFrameCtrl@ha
addi     r0, r3, __vt__12J3DFrameCtrl@l
stw      r0, 0xe8(r30)

lbl_803EFAF4:
addic.   r0, r30, 0xc8
beq      lbl_803EFB3C
lis      r3, __vt__Q23ebi16E2DCallBack_Base@ha
addic.   r0, r30, 0xc8
addi     r0, r3, __vt__Q23ebi16E2DCallBack_Base@l
stw      r0, 0xc8(r30)
beq      lbl_803EFB3C
lis      r3, __vt__Q29P2DScreen12CallBackNode@ha
addic.   r0, r30, 0xc8
addi     r0, r3, __vt__Q29P2DScreen12CallBackNode@l
stw      r0, 0xc8(r30)
beq      lbl_803EFB3C
lis      r4, __vt__Q29P2DScreen4Node@ha
addi     r3, r30, 0xc8
addi     r0, r4, __vt__Q29P2DScreen4Node@l
li       r4, 0
stw      r0, 0xc8(r30)
bl       __dt__5CNodeFv

lbl_803EFB3C:
addic.   r0, r30, 0x8c
beq      lbl_803EFBAC
lis      r3, __vt__Q23ebi19E2DCallBack_AnmBase@ha
addic.   r0, r30, 0xac
addi     r0, r3, __vt__Q23ebi19E2DCallBack_AnmBase@l
stw      r0, 0x8c(r30)
beq      lbl_803EFB64
lis      r3, __vt__12J3DFrameCtrl@ha
addi     r0, r3, __vt__12J3DFrameCtrl@l
stw      r0, 0xac(r30)

lbl_803EFB64:
addic.   r0, r30, 0x8c
beq      lbl_803EFBAC
lis      r3, __vt__Q23ebi16E2DCallBack_Base@ha
addic.   r0, r30, 0x8c
addi     r0, r3, __vt__Q23ebi16E2DCallBack_Base@l
stw      r0, 0x8c(r30)
beq      lbl_803EFBAC
lis      r3, __vt__Q29P2DScreen12CallBackNode@ha
addic.   r0, r30, 0x8c
addi     r0, r3, __vt__Q29P2DScreen12CallBackNode@l
stw      r0, 0x8c(r30)
beq      lbl_803EFBAC
lis      r4, __vt__Q29P2DScreen4Node@ha
addi     r3, r30, 0x8c
addi     r0, r4, __vt__Q29P2DScreen4Node@l
li       r4, 0
stw      r0, 0x8c(r30)
bl       __dt__5CNodeFv

lbl_803EFBAC:
extsh.   r0, r31
ble      lbl_803EFBBC
mr       r3, r30
bl       __dl__FPv

lbl_803EFBBC:
lwz      r0, 0x14(r1)
mr       r3, r30
lwz      r31, 0xc(r1)
lwz      r30, 8(r1)
mtlr     r0
addi     r1, r1, 0x10
blr
	*/
}

/*
 * --INFO--
 * Address:	803EFBD8
 * Size:	0002E4
 */
TOmakeCardE::~TOmakeCardE(void)
{
	/*
stwu     r1, -0x10(r1)
mflr     r0
stw      r0, 0x14(r1)
stw      r31, 0xc(r1)
mr       r31, r4
stw      r30, 8(r1)
or.      r30, r3, r3
beq      lbl_803EFEA0
lis      r3, __vt__Q33ebi6Screen11TOmakeCardE@ha
addic.   r0, r30, 0x14c
addi     r0, r3, __vt__Q33ebi6Screen11TOmakeCardE@l
stw      r0, 0(r30)
beq      lbl_803EFC60
lis      r3, __vt__Q23ebi25E2DCallBack_CalcAnimation@ha
addic.   r0, r30, 0x14c
addi     r0, r3, __vt__Q23ebi25E2DCallBack_CalcAnimation@l
stw      r0, 0x14c(r30)
beq      lbl_803EFC60
lis      r3, __vt__Q23ebi16E2DCallBack_Base@ha
addic.   r0, r30, 0x14c
addi     r0, r3, __vt__Q23ebi16E2DCallBack_Base@l
stw      r0, 0x14c(r30)
beq      lbl_803EFC60
lis      r3, __vt__Q29P2DScreen12CallBackNode@ha
addic.   r0, r30, 0x14c
addi     r0, r3, __vt__Q29P2DScreen12CallBackNode@l
stw      r0, 0x14c(r30)
beq      lbl_803EFC60
lis      r4, __vt__Q29P2DScreen4Node@ha
addi     r3, r30, 0x14c
addi     r0, r4, __vt__Q29P2DScreen4Node@l
li       r4, 0
stw      r0, 0x14c(r30)
bl       __dt__5CNodeFv

lbl_803EFC60:
addic.   r0, r30, 0x110
beq      lbl_803EFCD0
lis      r3, __vt__Q23ebi19E2DCallBack_AnmBase@ha
addic.   r0, r30, 0x130
addi     r0, r3, __vt__Q23ebi19E2DCallBack_AnmBase@l
stw      r0, 0x110(r30)
beq      lbl_803EFC88
lis      r3, __vt__12J3DFrameCtrl@ha
addi     r0, r3, __vt__12J3DFrameCtrl@l
stw      r0, 0x130(r30)

lbl_803EFC88:
addic.   r0, r30, 0x110
beq      lbl_803EFCD0
lis      r3, __vt__Q23ebi16E2DCallBack_Base@ha
addic.   r0, r30, 0x110
addi     r0, r3, __vt__Q23ebi16E2DCallBack_Base@l
stw      r0, 0x110(r30)
beq      lbl_803EFCD0
lis      r3, __vt__Q29P2DScreen12CallBackNode@ha
addic.   r0, r30, 0x110
addi     r0, r3, __vt__Q29P2DScreen12CallBackNode@l
stw      r0, 0x110(r30)
beq      lbl_803EFCD0
lis      r4, __vt__Q29P2DScreen4Node@ha
addi     r3, r30, 0x110
addi     r0, r4, __vt__Q29P2DScreen4Node@l
li       r4, 0
stw      r0, 0x110(r30)
bl       __dt__5CNodeFv

lbl_803EFCD0:
addic.   r0, r30, 0xd4
beq      lbl_803EFD40
lis      r3, __vt__Q23ebi19E2DCallBack_AnmBase@ha
addic.   r0, r30, 0xf4
addi     r0, r3, __vt__Q23ebi19E2DCallBack_AnmBase@l
stw      r0, 0xd4(r30)
beq      lbl_803EFCF8
lis      r3, __vt__12J3DFrameCtrl@ha
addi     r0, r3, __vt__12J3DFrameCtrl@l
stw      r0, 0xf4(r30)

lbl_803EFCF8:
addic.   r0, r30, 0xd4
beq      lbl_803EFD40
lis      r3, __vt__Q23ebi16E2DCallBack_Base@ha
addic.   r0, r30, 0xd4
addi     r0, r3, __vt__Q23ebi16E2DCallBack_Base@l
stw      r0, 0xd4(r30)
beq      lbl_803EFD40
lis      r3, __vt__Q29P2DScreen12CallBackNode@ha
addic.   r0, r30, 0xd4
addi     r0, r3, __vt__Q29P2DScreen12CallBackNode@l
stw      r0, 0xd4(r30)
beq      lbl_803EFD40
lis      r4, __vt__Q29P2DScreen4Node@ha
addi     r3, r30, 0xd4
addi     r0, r4, __vt__Q29P2DScreen4Node@l
li       r4, 0
stw      r0, 0xd4(r30)
bl       __dt__5CNodeFv

lbl_803EFD40:
addic.   r0, r30, 0x98
beq      lbl_803EFDB0
lis      r3, __vt__Q23ebi19E2DCallBack_AnmBase@ha
addic.   r0, r30, 0xb8
addi     r0, r3, __vt__Q23ebi19E2DCallBack_AnmBase@l
stw      r0, 0x98(r30)
beq      lbl_803EFD68
lis      r3, __vt__12J3DFrameCtrl@ha
addi     r0, r3, __vt__12J3DFrameCtrl@l
stw      r0, 0xb8(r30)

lbl_803EFD68:
addic.   r0, r30, 0x98
beq      lbl_803EFDB0
lis      r3, __vt__Q23ebi16E2DCallBack_Base@ha
addic.   r0, r30, 0x98
addi     r0, r3, __vt__Q23ebi16E2DCallBack_Base@l
stw      r0, 0x98(r30)
beq      lbl_803EFDB0
lis      r3, __vt__Q29P2DScreen12CallBackNode@ha
addic.   r0, r30, 0x98
addi     r0, r3, __vt__Q29P2DScreen12CallBackNode@l
stw      r0, 0x98(r30)
beq      lbl_803EFDB0
lis      r4, __vt__Q29P2DScreen4Node@ha
addi     r3, r30, 0x98
addi     r0, r4, __vt__Q29P2DScreen4Node@l
li       r4, 0
stw      r0, 0x98(r30)
bl       __dt__5CNodeFv

lbl_803EFDB0:
addic.   r0, r30, 0x5c
beq      lbl_803EFE20
lis      r3, __vt__Q23ebi19E2DCallBack_AnmBase@ha
addic.   r0, r30, 0x7c
addi     r0, r3, __vt__Q23ebi19E2DCallBack_AnmBase@l
stw      r0, 0x5c(r30)
beq      lbl_803EFDD8
lis      r3, __vt__12J3DFrameCtrl@ha
addi     r0, r3, __vt__12J3DFrameCtrl@l
stw      r0, 0x7c(r30)

lbl_803EFDD8:
addic.   r0, r30, 0x5c
beq      lbl_803EFE20
lis      r3, __vt__Q23ebi16E2DCallBack_Base@ha
addic.   r0, r30, 0x5c
addi     r0, r3, __vt__Q23ebi16E2DCallBack_Base@l
stw      r0, 0x5c(r30)
beq      lbl_803EFE20
lis      r3, __vt__Q29P2DScreen12CallBackNode@ha
addic.   r0, r30, 0x5c
addi     r0, r3, __vt__Q29P2DScreen12CallBackNode@l
stw      r0, 0x5c(r30)
beq      lbl_803EFE20
lis      r4, __vt__Q29P2DScreen4Node@ha
addi     r3, r30, 0x5c
addi     r0, r4, __vt__Q29P2DScreen4Node@l
li       r4, 0
stw      r0, 0x5c(r30)
bl       __dt__5CNodeFv

lbl_803EFE20:
addic.   r0, r30, 0x20
beq      lbl_803EFE90
lis      r3, __vt__Q23ebi19E2DCallBack_AnmBase@ha
addic.   r0, r30, 0x40
addi     r0, r3, __vt__Q23ebi19E2DCallBack_AnmBase@l
stw      r0, 0x20(r30)
beq      lbl_803EFE48
lis      r3, __vt__12J3DFrameCtrl@ha
addi     r0, r3, __vt__12J3DFrameCtrl@l
stw      r0, 0x40(r30)

lbl_803EFE48:
addic.   r0, r30, 0x20
beq      lbl_803EFE90
lis      r3, __vt__Q23ebi16E2DCallBack_Base@ha
addic.   r0, r30, 0x20
addi     r0, r3, __vt__Q23ebi16E2DCallBack_Base@l
stw      r0, 0x20(r30)
beq      lbl_803EFE90
lis      r3, __vt__Q29P2DScreen12CallBackNode@ha
addic.   r0, r30, 0x20
addi     r0, r3, __vt__Q29P2DScreen12CallBackNode@l
stw      r0, 0x20(r30)
beq      lbl_803EFE90
lis      r4, __vt__Q29P2DScreen4Node@ha
addi     r3, r30, 0x20
addi     r0, r4, __vt__Q29P2DScreen4Node@l
li       r4, 0
stw      r0, 0x20(r30)
bl       __dt__5CNodeFv

lbl_803EFE90:
extsh.   r0, r31
ble      lbl_803EFEA0
mr       r3, r30
bl       __dl__FPv

lbl_803EFEA0:
lwz      r0, 0x14(r1)
mr       r3, r30
lwz      r31, 0xc(r1)
lwz      r30, 8(r1)
mtlr     r0
addi     r1, r1, 0x10
blr
	*/
}

/*
 * --INFO--
 * Address:	803EFEBC
 * Size:	000208
 */
TOmake::~TOmake(void)
{
	/*
stwu     r1, -0x10(r1)
mflr     r0
stw      r0, 0x14(r1)
stw      r31, 0xc(r1)
mr       r31, r4
stw      r30, 8(r1)
or.      r30, r3, r3
beq      lbl_803F00A8
lis      r3, __vt__Q33ebi6Screen6TOmake@ha
lis      r4, __dt__Q23ebi26E2DCallBack_BlinkFontColorFv@ha
addi     r0, r3, __vt__Q33ebi6Screen6TOmake@l
li       r5, 0x4c
stw      r0, 0(r30)
addi     r3, r30, 0x1e4
addi     r4, r4, __dt__Q23ebi26E2DCallBack_BlinkFontColorFv@l
li       r6, 7
bl       __destroy_arr
addic.   r0, r30, 0x178
beq      lbl_803EFF5C
lis      r3, __vt__Q23ebi24E2DCallBack_WindowCursor@ha
addic.   r0, r30, 0x178
addi     r0, r3, __vt__Q23ebi24E2DCallBack_WindowCursor@l
stw      r0, 0x178(r30)
beq      lbl_803EFF5C
lis      r3, __vt__Q23ebi16E2DCallBack_Base@ha
addic.   r0, r30, 0x178
addi     r0, r3, __vt__Q23ebi16E2DCallBack_Base@l
stw      r0, 0x178(r30)
beq      lbl_803EFF5C
lis      r3, __vt__Q29P2DScreen12CallBackNode@ha
addic.   r0, r30, 0x178
addi     r0, r3, __vt__Q29P2DScreen12CallBackNode@l
stw      r0, 0x178(r30)
beq      lbl_803EFF5C
lis      r4, __vt__Q29P2DScreen4Node@ha
addi     r3, r30, 0x178
addi     r0, r4, __vt__Q29P2DScreen4Node@l
li       r4, 0
stw      r0, 0x178(r30)
bl       __dt__5CNodeFv

lbl_803EFF5C:
addic.   r0, r30, 0x158
beq      lbl_803EFFB8
lis      r3, __vt__Q23ebi25E2DCallBack_CalcAnimation@ha
addic.   r0, r30, 0x158
addi     r0, r3, __vt__Q23ebi25E2DCallBack_CalcAnimation@l
stw      r0, 0x158(r30)
beq      lbl_803EFFB8
lis      r3, __vt__Q23ebi16E2DCallBack_Base@ha
addic.   r0, r30, 0x158
addi     r0, r3, __vt__Q23ebi16E2DCallBack_Base@l
stw      r0, 0x158(r30)
beq      lbl_803EFFB8
lis      r3, __vt__Q29P2DScreen12CallBackNode@ha
addic.   r0, r30, 0x158
addi     r0, r3, __vt__Q29P2DScreen12CallBackNode@l
stw      r0, 0x158(r30)
beq      lbl_803EFFB8
lis      r4, __vt__Q29P2DScreen4Node@ha
addi     r3, r30, 0x158
addi     r0, r4, __vt__Q29P2DScreen4Node@l
li       r4, 0
stw      r0, 0x158(r30)
bl       __dt__5CNodeFv

lbl_803EFFB8:
addic.   r0, r30, 0x11c
beq      lbl_803F0028
lis      r3, __vt__Q23ebi19E2DCallBack_AnmBase@ha
addic.   r0, r30, 0x13c
addi     r0, r3, __vt__Q23ebi19E2DCallBack_AnmBase@l
stw      r0, 0x11c(r30)
beq      lbl_803EFFE0
lis      r3, __vt__12J3DFrameCtrl@ha
addi     r0, r3, __vt__12J3DFrameCtrl@l
stw      r0, 0x13c(r30)

lbl_803EFFE0:
addic.   r0, r30, 0x11c
beq      lbl_803F0028
lis      r3, __vt__Q23ebi16E2DCallBack_Base@ha
addic.   r0, r30, 0x11c
addi     r0, r3, __vt__Q23ebi16E2DCallBack_Base@l
stw      r0, 0x11c(r30)
beq      lbl_803F0028
lis      r3, __vt__Q29P2DScreen12CallBackNode@ha
addic.   r0, r30, 0x11c
addi     r0, r3, __vt__Q29P2DScreen12CallBackNode@l
stw      r0, 0x11c(r30)
beq      lbl_803F0028
lis      r4, __vt__Q29P2DScreen4Node@ha
addi     r3, r30, 0x11c
addi     r0, r4, __vt__Q29P2DScreen4Node@l
li       r4, 0
stw      r0, 0x11c(r30)
bl       __dt__5CNodeFv

lbl_803F0028:
addic.   r0, r30, 0xe0
beq      lbl_803F0098
lis      r3, __vt__Q23ebi19E2DCallBack_AnmBase@ha
addic.   r0, r30, 0x100
addi     r0, r3, __vt__Q23ebi19E2DCallBack_AnmBase@l
stw      r0, 0xe0(r30)
beq      lbl_803F0050
lis      r3, __vt__12J3DFrameCtrl@ha
addi     r0, r3, __vt__12J3DFrameCtrl@l
stw      r0, 0x100(r30)

lbl_803F0050:
addic.   r0, r30, 0xe0
beq      lbl_803F0098
lis      r3, __vt__Q23ebi16E2DCallBack_Base@ha
addic.   r0, r30, 0xe0
addi     r0, r3, __vt__Q23ebi16E2DCallBack_Base@l
stw      r0, 0xe0(r30)
beq      lbl_803F0098
lis      r3, __vt__Q29P2DScreen12CallBackNode@ha
addic.   r0, r30, 0xe0
addi     r0, r3, __vt__Q29P2DScreen12CallBackNode@l
stw      r0, 0xe0(r30)
beq      lbl_803F0098
lis      r4, __vt__Q29P2DScreen4Node@ha
addi     r3, r30, 0xe0
addi     r0, r4, __vt__Q29P2DScreen4Node@l
li       r4, 0
stw      r0, 0xe0(r30)
bl       __dt__5CNodeFv

lbl_803F0098:
extsh.   r0, r31
ble      lbl_803F00A8
mr       r3, r30
bl       __dl__FPv

lbl_803F00A8:
lwz      r0, 0x14(r1)
mr       r3, r30
lwz      r31, 0xc(r1)
lwz      r30, 8(r1)
mtlr     r0
addi     r1, r1, 0x10
blr
	*/
}
} // namespace Screen
} // namespace ebi

/*
 * --INFO--
 * Address:	803F00C4
 * Size:	000004
 */
// void init__Q24Game27FSMState<ebi::Omake::TMgr>
// FPQ33ebi5Omake4TMgrPQ24Game8StateArg(void)
template <>
void Game::FSMState<ebi::Omake::TMgr>::init(ebi::Omake::TMgr*, StateArg*)
{
}

/*
 * --INFO--
 * Address:	803F00C8
 * Size:	000004
 */
// void exec__Q24Game27FSMState<ebi::Omake::TMgr> FPQ33ebi5Omake4TMgr(void) { }
template <>
void Game::FSMState<ebi::Omake::TMgr>::exec(ebi::Omake::TMgr*)
{
}

/*
 * --INFO--
 * Address:	803F00CC
 * Size:	000004
 */
// void cleanup__Q24Game27FSMState<ebi::Omake::TMgr> FPQ33ebi5Omake4TMgr(void) {
// }
template <>
void Game::FSMState<ebi::Omake::TMgr>::cleanup(ebi::Omake::TMgr*)
{
}

/*
 * --INFO--
 * Address:	803F00D0
 * Size:	000004
 */
// void resume__Q24Game27FSMState<ebi::Omake::TMgr> FPQ33ebi5Omake4TMgr(void) {
// }
template <>
void Game::FSMState<ebi::Omake::TMgr>::resume(ebi::Omake::TMgr*)
{
}

/*
 * --INFO--
 * Address:	803F00D4
 * Size:	000004
 */
// void restart__Q24Game27FSMState<ebi::Omake::TMgr> FPQ33ebi5Omake4TMgr(void) {
// }
template <>
void Game::FSMState<ebi::Omake::TMgr>::restart(ebi::Omake::TMgr*)
{
}

/*
 * --INFO--
 * Address:	803F00D8
 * Size:	000004
 */
// void init__Q24Game31StateMachine<ebi::Omake::TMgr> FPQ33ebi5Omake4TMgr(void)
// { }
template <>
void Game::StateMachine<ebi::Omake::TMgr>::init(ebi::Omake::TMgr*)
{
}

/*
 * --INFO--
 * Address:	803F00DC
 * Size:	000038
 */
// void exec__Q24Game31StateMachine<ebi::Omake::TMgr> FPQ33ebi5Omake4TMgr(void)
template <>
void Game::StateMachine<ebi::Omake::TMgr>::exec(ebi::Omake::TMgr*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x8b8(r4)
	cmplwi   r3, 0
	beq      lbl_803F0104
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl

lbl_803F0104:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803F0114
 * Size:	000064
 */
// void create__Q24Game31StateMachine<ebi::Omake::TMgr> Fi(void)
template <>
void Game::StateMachine<ebi::Omake::TMgr>::create(int)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	li       r0, 0
	stw      r31, 0xc(r1)
	mr       r31, r3
	stw      r4, 0xc(r3)
	stw      r0, 8(r3)
	lwz      r0, 0xc(r3)
	slwi     r3, r0, 2
	bl       __nwa__FUl
	stw      r3, 4(r31)
	lwz      r0, 0xc(r31)
	slwi     r3, r0, 2
	bl       __nwa__FUl
	stw      r3, 0x10(r31)
	lwz      r0, 0xc(r31)
	slwi     r3, r0, 2
	bl       __nwa__FUl
	stw      r3, 0x14(r31)
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803F0178
 * Size:	00009C
 */
// void transit__Q24Game31StateMachine<ebi::Omake::TMgr>
// FPQ33ebi5Omake4TMgriPQ24Game8StateArg(void)
template <>
void Game::StateMachine<ebi::Omake::TMgr>::transit(ebi::Omake::TMgr*, int, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  rlwinm    r0,r5,2,0,29
	  stmw      r27, 0xC(r1)
	  mr        r27, r3
	  mr        r28, r4
	  mr        r29, r6
	  lwz       r30, 0x8B8(r4)
	  lwz       r3, 0x14(r3)
	  cmplwi    r30, 0
	  lwzx      r31, r3, r0
	  beq-      .loc_0x50
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x4(r30)
	  stw       r0, 0x18(r27)

	.loc_0x50:
	  lwz       r0, 0xC(r27)
	  cmpw      r31, r0
	  blt-      .loc_0x60

	.loc_0x5C:
	  b         .loc_0x5C

	.loc_0x60:
	  lwz       r3, 0x4(r27)
	  rlwinm    r0,r31,2,0,29
	  mr        r4, r28
	  mr        r5, r29
	  lwzx      r3, r3, r0
	  stw       r3, 0x8B8(r28)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lmw       r27, 0xC(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803F0214
 * Size:	000084
 */
// void registerState__Q24Game31StateMachine<ebi::Omake::TMgr>
// FPQ24Game27FSMState<ebi::Omake::TMgr>(void)
template <>
void Game::StateMachine<ebi::Omake::TMgr>::registerState(Game::FSMState<ebi::Omake::TMgr>*)
{
	/*
	.loc_0x0:
	  lwz       r6, 0x8(r3)
	  lwz       r0, 0xC(r3)
	  cmpw      r6, r0
	  bgelr-
	  lwz       r5, 0x4(r3)
	  rlwinm    r0,r6,2,0,29
	  stwx      r4, r5, r0
	  lwz       r5, 0x4(r4)
	  cmpwi     r5, 0
	  blt-      .loc_0x34
	  lwz       r0, 0xC(r3)
	  cmpw      r5, r0
	  blt-      .loc_0x3C

	.loc_0x34:
	  li        r0, 0
	  b         .loc_0x40

	.loc_0x3C:
	  li        r0, 0x1

	.loc_0x40:
	  rlwinm.   r0,r0,0,24,31
	  beqlr-
	  stw       r3, 0x8(r4)
	  lwz       r0, 0x8(r3)
	  lwz       r6, 0x4(r4)
	  lwz       r5, 0x10(r3)
	  rlwinm    r0,r0,2,0,29
	  stwx      r6, r5, r0
	  lwz       r0, 0x4(r4)
	  lwz       r5, 0x8(r3)
	  lwz       r4, 0x14(r3)
	  rlwinm    r0,r0,2,0,29
	  stwx      r5, r4, r0
	  lwz       r4, 0x8(r3)
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r3)
	  blr
	*/
}

namespace ebi {
namespace Screen {

/*
 * --INFO--
 * Address:	803F0298
 * Size:	00000C
 */
char* ArgOpenOmake::getName(void)
{
	/*
lis      r3, lbl_80497B30@ha
addi     r3, r3, lbl_80497B30@l
blr
	*/
}
} // namespace Screen
} // namespace ebi
