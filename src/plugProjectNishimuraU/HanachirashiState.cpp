#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_80489078
    lbl_80489078:
        .asciz "246-HanachirashiState"
        .skip 2
        .asciz "chaseinside"
        .asciz "flyflick"
        .skip 3
        .asciz "groundflick"

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q34Game12Hanachirashi10StateLaugh
    __vt__Q34Game12Hanachirashi10StateLaugh:
        .4byte 0
        .4byte 0
        .4byte
   init__Q34Game12Hanachirashi10StateLaughFPQ24Game9EnemyBasePQ24Game8StateArg
        .4byte exec__Q34Game12Hanachirashi10StateLaughFPQ24Game9EnemyBase
        .4byte cleanup__Q34Game12Hanachirashi10StateLaughFPQ24Game9EnemyBase
        .4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
        .4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
        .4byte
   transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg .4byte
   doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics .global
   __vt__Q34Game12Hanachirashi16StateGroundFlick
    __vt__Q34Game12Hanachirashi16StateGroundFlick:
        .4byte 0
        .4byte 0
        .4byte
   init__Q34Game12Hanachirashi16StateGroundFlickFPQ24Game9EnemyBasePQ24Game8StateArg
        .4byte exec__Q34Game12Hanachirashi16StateGroundFlickFPQ24Game9EnemyBase
        .4byte
   cleanup__Q34Game12Hanachirashi16StateGroundFlickFPQ24Game9EnemyBase .4byte
   resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase .4byte
   restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase .4byte
   transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg .4byte
   doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics .global
   __vt__Q34Game12Hanachirashi13StateFlyFlick
    __vt__Q34Game12Hanachirashi13StateFlyFlick:
        .4byte 0
        .4byte 0
        .4byte
   init__Q34Game12Hanachirashi13StateFlyFlickFPQ24Game9EnemyBasePQ24Game8StateArg
        .4byte exec__Q34Game12Hanachirashi13StateFlyFlickFPQ24Game9EnemyBase
        .4byte cleanup__Q34Game12Hanachirashi13StateFlyFlickFPQ24Game9EnemyBase
        .4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
        .4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
        .4byte
   transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg .4byte
   doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics .global
   __vt__Q34Game12Hanachirashi12StateTakeOff
    __vt__Q34Game12Hanachirashi12StateTakeOff:
        .4byte 0
        .4byte 0
        .4byte
   init__Q34Game12Hanachirashi12StateTakeOffFPQ24Game9EnemyBasePQ24Game8StateArg
        .4byte exec__Q34Game12Hanachirashi12StateTakeOffFPQ24Game9EnemyBase
        .4byte cleanup__Q34Game12Hanachirashi12StateTakeOffFPQ24Game9EnemyBase
        .4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
        .4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
        .4byte
   transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg .4byte
   doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics .global
   __vt__Q34Game12Hanachirashi11StateGround
    __vt__Q34Game12Hanachirashi11StateGround:
        .4byte 0
        .4byte 0
        .4byte
   init__Q34Game12Hanachirashi11StateGroundFPQ24Game9EnemyBasePQ24Game8StateArg
        .4byte exec__Q34Game12Hanachirashi11StateGroundFPQ24Game9EnemyBase
        .4byte cleanup__Q34Game12Hanachirashi11StateGroundFPQ24Game9EnemyBase
        .4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
        .4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
        .4byte
   transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg .4byte
   doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics .global
   __vt__Q34Game12Hanachirashi9StateLand
    __vt__Q34Game12Hanachirashi9StateLand:
        .4byte 0
        .4byte 0
        .4byte
   init__Q34Game12Hanachirashi9StateLandFPQ24Game9EnemyBasePQ24Game8StateArg
        .4byte exec__Q34Game12Hanachirashi9StateLandFPQ24Game9EnemyBase
        .4byte cleanup__Q34Game12Hanachirashi9StateLandFPQ24Game9EnemyBase
        .4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
        .4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
        .4byte
   transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg .4byte
   doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics .global
   __vt__Q34Game12Hanachirashi9StateFall
    __vt__Q34Game12Hanachirashi9StateFall:
        .4byte 0
        .4byte 0
        .4byte
   init__Q34Game12Hanachirashi9StateFallFPQ24Game9EnemyBasePQ24Game8StateArg
        .4byte exec__Q34Game12Hanachirashi9StateFallFPQ24Game9EnemyBase
        .4byte cleanup__Q34Game12Hanachirashi9StateFallFPQ24Game9EnemyBase
        .4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
        .4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
        .4byte
   transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg .4byte
   doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics .global
   __vt__Q34Game12Hanachirashi11StateAttack
    __vt__Q34Game12Hanachirashi11StateAttack:
        .4byte 0
        .4byte 0
        .4byte
   init__Q34Game12Hanachirashi11StateAttackFPQ24Game9EnemyBasePQ24Game8StateArg
        .4byte exec__Q34Game12Hanachirashi11StateAttackFPQ24Game9EnemyBase
        .4byte cleanup__Q34Game12Hanachirashi11StateAttackFPQ24Game9EnemyBase
        .4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
        .4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
        .4byte
   transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg .4byte
   doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics .global
   __vt__Q34Game12Hanachirashi16StateChaseInside
    __vt__Q34Game12Hanachirashi16StateChaseInside:
        .4byte 0
        .4byte 0
        .4byte
   init__Q34Game12Hanachirashi16StateChaseInsideFPQ24Game9EnemyBasePQ24Game8StateArg
        .4byte exec__Q34Game12Hanachirashi16StateChaseInsideFPQ24Game9EnemyBase
        .4byte
   cleanup__Q34Game12Hanachirashi16StateChaseInsideFPQ24Game9EnemyBase .4byte
   resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase .4byte
   restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase .4byte
   transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg .4byte
   doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics .global
   __vt__Q34Game12Hanachirashi10StateChase
    __vt__Q34Game12Hanachirashi10StateChase:
        .4byte 0
        .4byte 0
        .4byte
   init__Q34Game12Hanachirashi10StateChaseFPQ24Game9EnemyBasePQ24Game8StateArg
        .4byte exec__Q34Game12Hanachirashi10StateChaseFPQ24Game9EnemyBase
        .4byte cleanup__Q34Game12Hanachirashi10StateChaseFPQ24Game9EnemyBase
        .4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
        .4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
        .4byte
   transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg .4byte
   doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics .global
   __vt__Q34Game12Hanachirashi9StateMove
    __vt__Q34Game12Hanachirashi9StateMove:
        .4byte 0
        .4byte 0
        .4byte
   init__Q34Game12Hanachirashi9StateMoveFPQ24Game9EnemyBasePQ24Game8StateArg
        .4byte exec__Q34Game12Hanachirashi9StateMoveFPQ24Game9EnemyBase
        .4byte cleanup__Q34Game12Hanachirashi9StateMoveFPQ24Game9EnemyBase
        .4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
        .4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
        .4byte
   transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg .4byte
   doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics .global
   __vt__Q34Game12Hanachirashi9StateWait
    __vt__Q34Game12Hanachirashi9StateWait:
        .4byte 0
        .4byte 0
        .4byte
   init__Q34Game12Hanachirashi9StateWaitFPQ24Game9EnemyBasePQ24Game8StateArg
        .4byte exec__Q34Game12Hanachirashi9StateWaitFPQ24Game9EnemyBase
        .4byte cleanup__Q34Game12Hanachirashi9StateWaitFPQ24Game9EnemyBase
        .4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
        .4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
        .4byte
   transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg .4byte
   doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics .global
   __vt__Q34Game12Hanachirashi9StateDead
    __vt__Q34Game12Hanachirashi9StateDead:
        .4byte 0
        .4byte 0
        .4byte
   init__Q34Game12Hanachirashi9StateDeadFPQ24Game9EnemyBasePQ24Game8StateArg
        .4byte exec__Q34Game12Hanachirashi9StateDeadFPQ24Game9EnemyBase
        .4byte cleanup__Q34Game12Hanachirashi9StateDeadFPQ24Game9EnemyBase
        .4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
        .4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
        .4byte
   transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg .4byte
   doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics .global
   __vt__Q34Game12Hanachirashi5State
    __vt__Q34Game12Hanachirashi5State:
        .4byte 0
        .4byte 0
        .4byte init__Q24Game13EnemyFSMStateFPQ24Game9EnemyBasePQ24Game8StateArg
        .4byte exec__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
        .4byte cleanup__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
        .4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
        .4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
        .4byte
   transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg .4byte
   doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics .global
   __vt__Q34Game12Hanachirashi3FSM
    __vt__Q34Game12Hanachirashi3FSM:
        .4byte 0
        .4byte 0
        .4byte init__Q34Game12Hanachirashi3FSMFPQ24Game9EnemyBase
        .4byte
   start__Q24Game17EnemyStateMachineFPQ24Game9EnemyBaseiPQ24Game8StateArg .4byte
   exec__Q24Game17EnemyStateMachineFPQ24Game9EnemyBase .4byte
   transit__Q24Game17EnemyStateMachineFPQ24Game9EnemyBaseiPQ24Game8StateArg
        .4byte
   doDirectDraw__Q24Game17EnemyStateMachineFPQ24Game9EnemyBaseR8Graphics .4byte
   getCurrState__Q24Game17EnemyStateMachineFPQ24Game9EnemyBase .4byte
   setCurrState__Q24Game17EnemyStateMachineFPQ24Game9EnemyBasePQ24Game13EnemyFSMState
        .4byte 0

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051BD08
    lbl_8051BD08:
        .4byte 0x64656164
        .4byte 0x00000000
    .global lbl_8051BD10
    lbl_8051BD10:
        .4byte 0x77616974
        .4byte 0x00000000
    .global lbl_8051BD18
    lbl_8051BD18:
        .4byte 0x6D6F7665
        .4byte 0x00000000
    .global lbl_8051BD20
    lbl_8051BD20:
        .4byte 0x63686173
        .4byte 0x65000000
    .global lbl_8051BD28
    lbl_8051BD28:
        .4byte 0x61747461
        .4byte 0x636B0000
    .global lbl_8051BD30
    lbl_8051BD30:
        .4byte 0x66616C6C
        .4byte 0x00000000
    .global lbl_8051BD38
    lbl_8051BD38:
        .4byte 0x6C616E64
        .4byte 0x00000000
    .global lbl_8051BD40
    lbl_8051BD40:
        .4byte 0x67726F75
        .4byte 0x6E640000
    .global lbl_8051BD48
    lbl_8051BD48:
        .4byte 0x74616B65
        .4byte 0x6F666600
    .global lbl_8051BD50
    lbl_8051BD50:
        .4byte 0x6C617567
        .4byte 0x68000000
    .global lbl_8051BD58
    lbl_8051BD58:
        .4byte 0x00000000
    .global lbl_8051BD5C
    lbl_8051BD5C:
        .4byte 0x42340000
    .global lbl_8051BD60
    lbl_8051BD60:
        .4byte 0x42700000
    .global lbl_8051BD64
    lbl_8051BD64:
        .4byte 0x461C4000
    .global lbl_8051BD68
    lbl_8051BD68:
        .4byte 0x40F00000
    .global lbl_8051BD6C
    lbl_8051BD6C:
        .float 1.0
    .global lbl_8051BD70
    lbl_8051BD70:
        .4byte 0x40490FDB
    .global lbl_8051BD74
    lbl_8051BD74:
        .4byte 0x3BB60B61
    .global lbl_8051BD78
    lbl_8051BD78:
        .4byte 0x43610000
    .global lbl_8051BD7C
    lbl_8051BD7C:
        .4byte 0xC3A2F983
    .global lbl_8051BD80
    lbl_8051BD80:
        .4byte 0x43A2F983
    .global lbl_8051BD84
    lbl_8051BD84:
        .4byte 0x42480000
    .global lbl_8051BD88
    lbl_8051BD88:
        .4byte 0x3F400000
    .global lbl_8051BD8C
    lbl_8051BD8C:
        .4byte 0xC47A0000
*/

namespace Game {

/*
 * --INFO--
 * Address:	8029F228
 * Size:	000480
 */
void Hanachirashi::FSM::init(Game::EnemyBase*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r4, lbl_80489078@ha
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	stw      r30, 8(r1)
	addi     r30, r4, lbl_80489078@l
	li       r4, 0xd
	bl       create__Q24Game17EnemyStateMachineFi
	li       r3, 0x10
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_8029F298
	lis      r3, __vt__Q24Game13EnemyFSMState@ha
	lis      r5, __vt__Q34Game12Hanachirashi5State@ha
	addi     r0, r3, __vt__Q24Game13EnemyFSMState@l
	lis      r3, __vt__Q34Game12Hanachirashi9StateDead@ha
	stw      r0, 0(r4)
	li       r7, 0
	addi     r6, r5, __vt__Q34Game12Hanachirashi5State@l
	addi     r5, r2, lbl_8051BD08@sda21
	stw      r7, 4(r4)
	addi     r0, r3, __vt__Q34Game12Hanachirashi9StateDead@l
	stw      r7, 8(r4)
	stw      r6, 0(r4)
	stw      r5, 0xc(r4)
	stw      r0, 0(r4)

lbl_8029F298:
	mr       r3, r31
	bl       registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
	li       r3, 0x10
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_8029F2EC
	lis      r3, __vt__Q24Game13EnemyFSMState@ha
	lis      r5, __vt__Q34Game12Hanachirashi5State@ha
	addi     r0, r3, __vt__Q24Game13EnemyFSMState@l
	lis      r3, __vt__Q34Game12Hanachirashi9StateWait@ha
	stw      r0, 0(r4)
	li       r0, 1
	li       r7, 0
	addi     r6, r5, __vt__Q34Game12Hanachirashi5State@l
	stw      r0, 4(r4)
	addi     r5, r2, lbl_8051BD10@sda21
	addi     r0, r3, __vt__Q34Game12Hanachirashi9StateWait@l
	stw      r7, 8(r4)
	stw      r6, 0(r4)
	stw      r5, 0xc(r4)
	stw      r0, 0(r4)

lbl_8029F2EC:
	mr       r3, r31
	bl       registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
	li       r3, 0x10
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_8029F340
	lis      r3, __vt__Q24Game13EnemyFSMState@ha
	lis      r5, __vt__Q34Game12Hanachirashi5State@ha
	addi     r0, r3, __vt__Q24Game13EnemyFSMState@l
	lis      r3, __vt__Q34Game12Hanachirashi9StateMove@ha
	stw      r0, 0(r4)
	li       r0, 2
	li       r7, 0
	addi     r6, r5, __vt__Q34Game12Hanachirashi5State@l
	stw      r0, 4(r4)
	addi     r5, r2, lbl_8051BD18@sda21
	addi     r0, r3, __vt__Q34Game12Hanachirashi9StateMove@l
	stw      r7, 8(r4)
	stw      r6, 0(r4)
	stw      r5, 0xc(r4)
	stw      r0, 0(r4)

lbl_8029F340:
	mr       r3, r31
	bl       registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
	li       r3, 0x10
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_8029F394
	lis      r3, __vt__Q24Game13EnemyFSMState@ha
	lis      r5, __vt__Q34Game12Hanachirashi5State@ha
	addi     r0, r3, __vt__Q24Game13EnemyFSMState@l
	lis      r3, __vt__Q34Game12Hanachirashi10StateChase@ha
	stw      r0, 0(r4)
	li       r0, 3
	li       r7, 0
	addi     r6, r5, __vt__Q34Game12Hanachirashi5State@l
	stw      r0, 4(r4)
	addi     r5, r2, lbl_8051BD20@sda21
	addi     r0, r3, __vt__Q34Game12Hanachirashi10StateChase@l
	stw      r7, 8(r4)
	stw      r6, 0(r4)
	stw      r5, 0xc(r4)
	stw      r0, 0(r4)

lbl_8029F394:
	mr       r3, r31
	bl       registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
	li       r3, 0x10
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_8029F3E8
	lis      r3, __vt__Q24Game13EnemyFSMState@ha
	lis      r5, __vt__Q34Game12Hanachirashi5State@ha
	addi     r0, r3, __vt__Q24Game13EnemyFSMState@l
	lis      r3, __vt__Q34Game12Hanachirashi16StateChaseInside@ha
	stw      r0, 0(r4)
	li       r0, 4
	li       r7, 0
	addi     r6, r5, __vt__Q34Game12Hanachirashi5State@l
	stw      r0, 4(r4)
	addi     r5, r30, 0x18
	addi     r0, r3, __vt__Q34Game12Hanachirashi16StateChaseInside@l
	stw      r7, 8(r4)
	stw      r6, 0(r4)
	stw      r5, 0xc(r4)
	stw      r0, 0(r4)

lbl_8029F3E8:
	mr       r3, r31
	bl       registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
	li       r3, 0x10
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_8029F43C
	lis      r3, __vt__Q24Game13EnemyFSMState@ha
	lis      r5, __vt__Q34Game12Hanachirashi5State@ha
	addi     r0, r3, __vt__Q24Game13EnemyFSMState@l
	lis      r3, __vt__Q34Game12Hanachirashi11StateAttack@ha
	stw      r0, 0(r4)
	li       r0, 5
	li       r7, 0
	addi     r6, r5, __vt__Q34Game12Hanachirashi5State@l
	stw      r0, 4(r4)
	addi     r5, r2, lbl_8051BD28@sda21
	addi     r0, r3, __vt__Q34Game12Hanachirashi11StateAttack@l
	stw      r7, 8(r4)
	stw      r6, 0(r4)
	stw      r5, 0xc(r4)
	stw      r0, 0(r4)

lbl_8029F43C:
	mr       r3, r31
	bl       registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
	li       r3, 0x10
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_8029F490
	lis      r3, __vt__Q24Game13EnemyFSMState@ha
	lis      r5, __vt__Q34Game12Hanachirashi5State@ha
	addi     r0, r3, __vt__Q24Game13EnemyFSMState@l
	lis      r3, __vt__Q34Game12Hanachirashi9StateFall@ha
	stw      r0, 0(r4)
	li       r0, 6
	li       r7, 0
	addi     r6, r5, __vt__Q34Game12Hanachirashi5State@l
	stw      r0, 4(r4)
	addi     r5, r2, lbl_8051BD30@sda21
	addi     r0, r3, __vt__Q34Game12Hanachirashi9StateFall@l
	stw      r7, 8(r4)
	stw      r6, 0(r4)
	stw      r5, 0xc(r4)
	stw      r0, 0(r4)

lbl_8029F490:
	mr       r3, r31
	bl       registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
	li       r3, 0x10
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_8029F4E4
	lis      r3, __vt__Q24Game13EnemyFSMState@ha
	lis      r5, __vt__Q34Game12Hanachirashi5State@ha
	addi     r0, r3, __vt__Q24Game13EnemyFSMState@l
	lis      r3, __vt__Q34Game12Hanachirashi9StateLand@ha
	stw      r0, 0(r4)
	li       r0, 7
	li       r7, 0
	addi     r6, r5, __vt__Q34Game12Hanachirashi5State@l
	stw      r0, 4(r4)
	addi     r5, r2, lbl_8051BD38@sda21
	addi     r0, r3, __vt__Q34Game12Hanachirashi9StateLand@l
	stw      r7, 8(r4)
	stw      r6, 0(r4)
	stw      r5, 0xc(r4)
	stw      r0, 0(r4)

lbl_8029F4E4:
	mr       r3, r31
	bl       registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
	li       r3, 0x10
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_8029F538
	lis      r3, __vt__Q24Game13EnemyFSMState@ha
	lis      r5, __vt__Q34Game12Hanachirashi5State@ha
	addi     r0, r3, __vt__Q24Game13EnemyFSMState@l
	lis      r3, __vt__Q34Game12Hanachirashi11StateGround@ha
	stw      r0, 0(r4)
	li       r0, 8
	li       r7, 0
	addi     r6, r5, __vt__Q34Game12Hanachirashi5State@l
	stw      r0, 4(r4)
	addi     r5, r2, lbl_8051BD40@sda21
	addi     r0, r3, __vt__Q34Game12Hanachirashi11StateGround@l
	stw      r7, 8(r4)
	stw      r6, 0(r4)
	stw      r5, 0xc(r4)
	stw      r0, 0(r4)

lbl_8029F538:
	mr       r3, r31
	bl       registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
	li       r3, 0x10
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_8029F58C
	lis      r3, __vt__Q24Game13EnemyFSMState@ha
	lis      r5, __vt__Q34Game12Hanachirashi5State@ha
	addi     r0, r3, __vt__Q24Game13EnemyFSMState@l
	lis      r3, __vt__Q34Game12Hanachirashi12StateTakeOff@ha
	stw      r0, 0(r4)
	li       r0, 9
	li       r7, 0
	addi     r6, r5, __vt__Q34Game12Hanachirashi5State@l
	stw      r0, 4(r4)
	addi     r5, r2, lbl_8051BD48@sda21
	addi     r0, r3, __vt__Q34Game12Hanachirashi12StateTakeOff@l
	stw      r7, 8(r4)
	stw      r6, 0(r4)
	stw      r5, 0xc(r4)
	stw      r0, 0(r4)

lbl_8029F58C:
	mr       r3, r31
	bl       registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
	li       r3, 0x10
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_8029F5E0
	lis      r3, __vt__Q24Game13EnemyFSMState@ha
	lis      r5, __vt__Q34Game12Hanachirashi5State@ha
	addi     r0, r3, __vt__Q24Game13EnemyFSMState@l
	lis      r3, __vt__Q34Game12Hanachirashi13StateFlyFlick@ha
	stw      r0, 0(r4)
	li       r0, 0xa
	li       r7, 0
	addi     r6, r5, __vt__Q34Game12Hanachirashi5State@l
	stw      r0, 4(r4)
	addi     r5, r30, 0x24
	addi     r0, r3, __vt__Q34Game12Hanachirashi13StateFlyFlick@l
	stw      r7, 8(r4)
	stw      r6, 0(r4)
	stw      r5, 0xc(r4)
	stw      r0, 0(r4)

lbl_8029F5E0:
	mr       r3, r31
	bl       registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
	li       r3, 0x10
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_8029F634
	lis      r3, __vt__Q24Game13EnemyFSMState@ha
	lis      r5, __vt__Q34Game12Hanachirashi5State@ha
	addi     r0, r3, __vt__Q24Game13EnemyFSMState@l
	lis      r3, __vt__Q34Game12Hanachirashi16StateGroundFlick@ha
	stw      r0, 0(r4)
	li       r0, 0xb
	li       r7, 0
	addi     r6, r5, __vt__Q34Game12Hanachirashi5State@l
	stw      r0, 4(r4)
	addi     r5, r30, 0x30
	addi     r0, r3, __vt__Q34Game12Hanachirashi16StateGroundFlick@l
	stw      r7, 8(r4)
	stw      r6, 0(r4)
	stw      r5, 0xc(r4)
	stw      r0, 0(r4)

lbl_8029F634:
	mr       r3, r31
	bl       registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
	li       r3, 0x10
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_8029F688
	lis      r3, __vt__Q24Game13EnemyFSMState@ha
	lis      r5, __vt__Q34Game12Hanachirashi5State@ha
	addi     r0, r3, __vt__Q24Game13EnemyFSMState@l
	lis      r3, __vt__Q34Game12Hanachirashi10StateLaugh@ha
	stw      r0, 0(r4)
	li       r0, 0xc
	li       r7, 0
	addi     r6, r5, __vt__Q34Game12Hanachirashi5State@l
	stw      r0, 4(r4)
	addi     r5, r2, lbl_8051BD50@sda21
	addi     r0, r3, __vt__Q34Game12Hanachirashi10StateLaugh@l
	stw      r7, 8(r4)
	stw      r6, 0(r4)
	stw      r5, 0xc(r4)
	stw      r0, 0(r4)

lbl_8029F688:
	mr       r3, r31
	bl       registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
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
 * Address:	8029F6A8
 * Size:	0000AC
 */
void Hanachirashi::StateDead::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lfs      f0, lbl_8051BD58@sda21(r2)
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	mr       r3, r31
	lwz      r0, 0x1e0(r4)
	rlwinm   r0, r0, 0, 0x1a, 0x18
	stw      r0, 0x1e0(r4)
	lwz      r0, 0x1e0(r4)
	rlwinm   r0, r0, 0, 0x1d, 0x1b
	stw      r0, 0x1e0(r4)
	stfs     f0, 0x1d4(r4)
	stfs     f0, 0x1d8(r4)
	stfs     f0, 0x1dc(r4)
	bl       deathProcedure__Q24Game9EnemyBaseFv
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0xcc(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8029F71C
	mr       r3, r31
	li       r4, 0
	li       r5, 0
	bl       startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
	b        lbl_8029F72C

lbl_8029F71C:
	mr       r3, r31
	li       r4, 1
	li       r5, 0
	bl       startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener

lbl_8029F72C:
	lwz      r0, 0x1e0(r31)
	mr       r3, r31
	ori      r0, r0, 4
	stw      r0, 0x1e0(r31)
	bl       startDeadEffect__Q34Game12Hanachirashi3ObjFv
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8029F754
 * Size:	0000B8
 */
void Hanachirashi::StateDead::exec(Game::EnemyBase*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	mr       r3, r31
	bl       getCurrAnimIndex__Q24Game9EnemyBaseFv
	cmpwi    r3, 0
	bne      lbl_8029F798
	mr       r3, r31
	bl       getMotionFrame__Q24Game9EnemyBaseFv
	lfs      f0, lbl_8051BD5C@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_8029F7B4
	mr       r3, r31
	bl       subShadowRadius__Q34Game12Hanachirashi3ObjFv
	b        lbl_8029F7B4

lbl_8029F798:
	mr       r3, r31
	bl       getMotionFrame__Q24Game9EnemyBaseFv
	lfs      f0, lbl_8051BD60@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_8029F7B4
	mr       r3, r31
	bl       subShadowRadius__Q34Game12Hanachirashi3ObjFv

lbl_8029F7B4:
	lwz      r3, 0x188(r31)
	lbz      r0, 0x24(r3)
	cmplwi   r0, 0
	beq      lbl_8029F7F8
	lwz      r0, 0x1c(r3)
	cmplwi   r0, 0x3e8
	bne      lbl_8029F7F8
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x264(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	bl       finishWindEffect__Q34Game12Hanachirashi3ObjFv
	mr       r3, r31
	li       r4, 0
	bl       kill__Q24Game8CreatureFPQ24Game15CreatureKillArg

lbl_8029F7F8:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8029F80C
 * Size:	000004
 */
void Hanachirashi::StateDead::cleanup(Game::EnemyBase*) { }

/*
 * --INFO--
 * Address:	8029F810
 * Size:	000054
 */
void Hanachirashi::StateWait::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lfs      f0, lbl_8051BD58@sda21(r2)
	mr       r3, r4
	stw      r0, 0x14(r1)
	li       r0, 0
	li       r5, 0
	stfs     f0, 0x2c4(r4)
	li       r4, 5
	stfs     f0, 0x1d4(r3)
	stfs     f0, 0x1d8(r3)
	stfs     f0, 0x1dc(r3)
	stw      r0, 0x230(r3)
	lwz      r0, 0x1e0(r3)
	ori      r0, r0, 4
	stw      r0, 0x1e0(r3)
	bl       startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8029F864
 * Size:	000138
 */
void Hanachirashi::StateWait::exec(Game::EnemyBase*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	mr       r3, r31
	bl       setHeightVelocity__Q34Game12Hanachirashi3ObjFv
	mr       r3, r31
	bl       getSearchedPikmin__Q34Game12Hanachirashi3ObjFv
	cmplwi   r3, 0
	bne      lbl_8029F8A0
	mr       r3, r31
	bl       isAttackable__Q34Game12Hanachirashi3ObjFv

lbl_8029F8A0:
	cmplwi   r3, 0
	beq      lbl_8029F8D0
	stw      r3, 0x230(r31)
	mr       r3, r30
	mr       r4, r31
	li       r5, 3
	lwz      r12, 0(r30)
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_8029F904

lbl_8029F8D0:
	lwz      r3, 0xc0(r31)
	lfs      f1, 0x2c4(r31)
	lfs      f0, 0x86c(r3)
	fcmpo    cr0, f1, f0
	ble      lbl_8029F904
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 2
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_8029F904:
	lwz      r4, sys@sda21(r13)
	mr       r3, r31
	lfs      f1, 0x2c4(r31)
	lfs      f0, 0x54(r4)
	fadds    f0, f1, f0
	stfs     f0, 0x2c4(r31)
	bl       getFlyingNextState__Q34Game12Hanachirashi3ObjFv
	or.      r5, r3, r3
	blt      lbl_8029F948
	lwz      r12, 0(r30)
	mr       r3, r30
	mr       r4, r31
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_8029F984

lbl_8029F948:
	lwz      r3, 0x188(r31)
	lbz      r0, 0x24(r3)
	cmplwi   r0, 0
	beq      lbl_8029F984
	lwz      r0, 0x1c(r3)
	cmplwi   r0, 0x3e8
	bne      lbl_8029F984
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 1
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_8029F984:
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
 * Address:	8029F99C
 * Size:	000004
 */
void Hanachirashi::StateWait::cleanup(Game::EnemyBase*) { }

/*
 * --INFO--
 * Address:	8029F9A0
 * Size:	00004C
 */
void Hanachirashi::StateMove::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	mr       r3, r31
	bl       setRandTarget__Q34Game12Hanachirashi3ObjFv
	lfs      f0, lbl_8051BD58@sda21(r2)
	li       r0, 0
	stfs     f0, 0x2c4(r31)
	stw      r0, 0x230(r31)
	lwz      r0, 0x1e0(r31)
	ori      r0, r0, 4
	stw      r0, 0x1e0(r31)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8029F9EC
 * Size:	0001A0
 */
void Hanachirashi::StateMove::exec(Game::EnemyBase*)
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stfd     f31, 0x30(r1)
	psq_st   f31, 56(r1), 0, qr0
	stw      r31, 0x2c(r1)
	stw      r30, 0x28(r1)
	mr       r31, r4
	mr       r30, r3
	mr       r3, r31
	bl       setHeightVelocity__Q34Game12Hanachirashi3ObjFv
	mr       r4, r31
	addi     r3, r1, 8
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f0, 0x10(r1)
	mr       r3, r31
	lfs      f5, 0x2e0(r31)
	lfs      f1, 0x2d8(r31)
	fsubs    f2, f0, f5
	lfs      f0, 8(r1)
	lfs      f4, 0x2dc(r31)
	fsubs    f3, f0, f1
	fmuls    f0, f2, f2
	stfs     f1, 0x14(r1)
	stfs     f4, 0x18(r1)
	fmadds   f31, f3, f3, f0
	stfs     f5, 0x1c(r1)
	bl       getSearchedPikmin__Q34Game12Hanachirashi3ObjFv
	cmplwi   r3, 0
	beq      lbl_8029FA98
	stw      r3, 0x230(r31)
	mr       r3, r30
	mr       r4, r31
	li       r5, 3
	lwz      r12, 0(r30)
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_8029FAEC

lbl_8029FA98:
	lfs      f0, lbl_8051BD64@sda21(r2)
	fcmpo    cr0, f31, f0
	blt      lbl_8029FAB4
	lfs      f1, 0x2c4(r31)
	lfs      f0, lbl_8051BD68@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_8029FAD0

lbl_8029FAB4:
	lfs      f0, lbl_8051BD58@sda21(r2)
	mr       r3, r31
	stfs     f0, 0x1d4(r31)
	stfs     f0, 0x1d8(r31)
	stfs     f0, 0x1dc(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv
	b        lbl_8029FAEC

lbl_8029FAD0:
	lwz      r5, 0xc0(r31)
	mr       r3, r31
	addi     r4, r1, 0x14
	lfs      f1, 0x2e4(r5)
	lfs      f2, 0x30c(r5)
	lfs      f3, 0x334(r5)
	bl "walkToTarget__Q24Game9EnemyFuncFPQ24Game9EnemyBaseR10Vector3<f>fff"

lbl_8029FAEC:
	lwz      r4, sys@sda21(r13)
	mr       r3, r31
	lfs      f1, 0x2c4(r31)
	lfs      f0, 0x54(r4)
	fadds    f0, f1, f0
	stfs     f0, 0x2c4(r31)
	bl       getFlyingNextState__Q34Game12Hanachirashi3ObjFv
	or.      r5, r3, r3
	blt      lbl_8029FB30
	lwz      r12, 0(r30)
	mr       r3, r30
	mr       r4, r31
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_8029FB6C

lbl_8029FB30:
	lwz      r3, 0x188(r31)
	lbz      r0, 0x24(r3)
	cmplwi   r0, 0
	beq      lbl_8029FB6C
	lwz      r0, 0x1c(r3)
	cmplwi   r0, 0x3e8
	bne      lbl_8029FB6C
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 1
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_8029FB6C:
	psq_l    f31, 56(r1), 0, qr0
	lwz      r0, 0x44(r1)
	lfd      f31, 0x30(r1)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	8029FB8C
 * Size:	000004
 */
void Hanachirashi::StateMove::cleanup(Game::EnemyBase*) { }

/*
 * --INFO--
 * Address:	8029FB90
 * Size:	000030
 */
void Hanachirashi::StateChase::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r3, r4
	stw      r0, 0x14(r1)
	lwz      r0, 0x1e0(r4)
	ori      r0, r0, 4
	stw      r0, 0x1e0(r4)
	bl       setEmotionExcitement__Q24Game9EnemyBaseFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8029FBC0
 * Size:	000530
 */
void Hanachirashi::StateChase::exec(Game::EnemyBase*)
{
	/*
	stwu     r1, -0x130(r1)
	mflr     r0
	stw      r0, 0x134(r1)
	stfd     f31, 0x120(r1)
	psq_st   f31, 296(r1), 0, qr0
	stfd     f30, 0x110(r1)
	psq_st   f30, 280(r1), 0, qr0
	stfd     f29, 0x100(r1)
	psq_st   f29, 264(r1), 0, qr0
	stfd     f28, 0xf0(r1)
	psq_st   f28, 248(r1), 0, qr0
	stfd     f27, 0xe0(r1)
	psq_st   f27, 232(r1), 0, qr0
	stfd     f26, 0xd0(r1)
	psq_st   f26, 216(r1), 0, qr0
	stfd     f25, 0xc0(r1)
	psq_st   f25, 200(r1), 0, qr0
	stfd     f24, 0xb0(r1)
	psq_st   f24, 184(r1), 0, qr0
	stfd     f23, 0xa0(r1)
	psq_st   f23, 168(r1), 0, qr0
	stfd     f22, 0x90(r1)
	psq_st   f22, 152(r1), 0, qr0
	stw      r31, 0x8c(r1)
	stw      r30, 0x88(r1)
	stw      r29, 0x84(r1)
	mr       r31, r4
	mr       r30, r3
	mr       r3, r31
	bl       setHeightVelocity__Q34Game12Hanachirashi3ObjFv
	mr       r3, r31
	bl       isFinishMotion__Q24Game9EnemyBaseFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_8029FFE8
	lwz      r29, 0x230(r31)
	cmplwi   r29, 0
	beq      lbl_8029FFBC
	mr       r4, r31
	addi     r3, r1, 0x50
	lwz      r12, 0(r31)
	lfs      f28, 0x198(r31)
	lwz      r12, 8(r12)
	lfs      f27, 0x1a0(r31)
	mtctr    r12
	bctrl
	mr       r4, r29
	addi     r3, r1, 0x44
	lwz      r12, 0(r29)
	lfs      f26, 0x50(r1)
	lwz      r12, 8(r12)
	lfs      f25, 0x58(r1)
	mtctr    r12
	bctrl
	lfs      f5, 0x44(r1)
	lfs      f6, 0x4c(r1)
	fsubs    f3, f26, f5
	lfs      f1, lbl_8051BD58@sda21(r2)
	fsubs    f4, f25, f6
	fmadds   f0, f3, f3, f1
	fmuls    f2, f4, f4
	fadds    f2, f2, f0
	fcmpo    cr0, f2, f1
	ble      lbl_8029FCCC
	ble      lbl_8029FCD0
	frsqrte  f0, f2
	fmuls    f2, f0, f2
	b        lbl_8029FCD0

lbl_8029FCCC:
	fmr      f2, f1

lbl_8029FCD0:
	lfs      f0, lbl_8051BD58@sda21(r2)
	fcmpo    cr0, f2, f0
	ble      lbl_8029FCEC
	lfs      f0, lbl_8051BD6C@sda21(r2)
	fdivs    f0, f0, f2
	fmuls    f3, f3, f0
	fmuls    f4, f4, f0

lbl_8029FCEC:
	lwz      r4, 0xc0(r31)
	lis      r3, atanTable___5JMath@ha
	addi     r3, r3, atanTable___5JMath@l
	lfs      f0, 0x564(r4)
	fmuls    f3, f3, f0
	fmuls    f4, f4, f0
	fadds    f24, f5, f3
	fadds    f23, f6, f4
	fsubs    f1, f24, f26
	fsubs    f2, f23, f25
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	lwz      r12, 0(r29)
	fmr      f29, f1
	lwz      r5, 0xc0(r31)
	mr       r4, r29
	lwz      r12, 8(r12)
	addi     r3, r1, 0x20
	lfs      f30, 0x334(r5)
	lfs      f31, 0x30c(r5)
	mtctr    r12
	bctrl
	mr       r4, r31
	lfs      f2, 0x20(r1)
	lwz      r12, 0(r31)
	addi     r3, r1, 0x2c
	lfs      f1, 0x24(r1)
	lfs      f0, 0x28(r1)
	lwz      r12, 8(r12)
	stfs     f2, 8(r1)
	stfs     f1, 0xc(r1)
	stfs     f0, 0x10(r1)
	mtctr    r12
	bctrl
	lfs      f5, 0x2c(r1)
	lis      r3, atanTable___5JMath@ha
	lfs      f3, 0x34(r1)
	addi     r3, r3, atanTable___5JMath@l
	lfs      f1, 8(r1)
	lfs      f0, 0x10(r1)
	lfs      f4, 0x30(r1)
	fsubs    f1, f1, f5
	fsubs    f2, f0, f3
	stfs     f5, 0x14(r1)
	stfs     f4, 0x18(r1)
	stfs     f3, 0x1c(r1)
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	bl       roundAng__Ff
	lwz      r12, 0(r31)
	fmr      f22, f1
	mr       r3, r31
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fmr      f2, f1
	fmr      f1, f22
	bl       angDist__Fff
	fmuls    f31, f1, f31
	lfs      f0, lbl_8051BD74@sda21(r2)
	lfs      f1, lbl_8051BD70@sda21(r2)
	fmuls    f0, f0, f30
	fabs     f2, f31
	fmuls    f1, f1, f0
	frsp     f0, f2
	fcmpo    cr0, f0, f1
	ble      lbl_8029FE08
	lfs      f0, lbl_8051BD58@sda21(r2)
	fcmpo    cr0, f31, f0
	ble      lbl_8029FE04
	fmr      f31, f1
	b        lbl_8029FE08

lbl_8029FE04:
	fneg     f31, f1

lbl_8029FE08:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fadds    f1, f31, f1
	bl       roundAng__Ff
	fsubs    f3, f25, f23
	stfs     f1, 0x1fc(r31)
	fsubs    f4, f26, f24
	lfs      f0, lbl_8051BD78@sda21(r2)
	lfs      f2, 0x1fc(r31)
	fmuls    f1, f3, f3
	stfs     f2, 0x1a8(r31)
	fmadds   f1, f4, f4, f1
	fcmpo    cr0, f1, f0
	ble      lbl_8029FF1C
	lfs      f0, lbl_8051BD58@sda21(r2)
	lwz      r4, 0xc0(r31)
	fcmpo    cr0, f29, f0
	lfs      f3, 0x2e4(r4)
	bge      lbl_8029FE8C
	lfs      f0, lbl_8051BD7C@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f29, f0
	fctiwz   f0, f0
	stfd     f0, 0x60(r1)
	lwz      r0, 0x64(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0
	fneg     f2, f0
	b        lbl_8029FEB0

lbl_8029FE8C:
	lfs      f0, lbl_8051BD80@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f29, f0
	fctiwz   f0, f0
	stfd     f0, 0x68(r1)
	lwz      r0, 0x6c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f2, r3, r0

lbl_8029FEB0:
	lfs      f0, lbl_8051BD58@sda21(r2)
	fmuls    f3, f3, f2
	lfs      f1, 0x1d4(r31)
	lfs      f2, 0x1d8(r31)
	fcmpo    cr0, f29, f0
	lfs      f0, 0x1dc(r31)
	stfs     f1, 0x38(r1)
	stfs     f2, 0x3c(r1)
	stfs     f0, 0x40(r1)
	bge      lbl_8029FEDC
	fneg     f29, f29

lbl_8029FEDC:
	lfs      f0, lbl_8051BD80@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	lfs      f1, 0x2e4(r4)
	fmuls    f0, f29, f0
	fctiwz   f0, f0
	stfd     f0, 0x70(r1)
	lwz      r0, 0x74(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r3, r0
	lfs      f0, 4(r3)
	stfs     f3, 0x1d4(r31)
	fmuls    f0, f1, f0
	stfs     f2, 0x1d8(r31)
	stfs     f0, 0x1dc(r31)
	b        lbl_8029FF2C

lbl_8029FF1C:
	lfs      f0, lbl_8051BD58@sda21(r2)
	stfs     f0, 0x1d4(r31)
	stfs     f0, 0x1d8(r31)
	stfs     f0, 0x1dc(r31)

lbl_8029FF2C:
	fsubs    f1, f25, f27
	lwz      r3, 0xc0(r31)
	fsubs    f2, f26, f28
	lfs      f0, 0x35c(r3)
	fmuls    f1, f1, f1
	fmuls    f0, f0, f0
	fmadds   f1, f2, f2, f1
	fcmpo    cr0, f1, f0
	ble      lbl_8029FF74
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 4
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_8029FFBC

lbl_8029FF74:
	mr       r3, r31
	bl       isTargetLost__Q34Game12Hanachirashi3ObjFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_8029FFBC
	mr       r3, r31
	bl       getSearchedPikmin__Q34Game12Hanachirashi3ObjFv
	cmplwi   r3, 0
	beq      lbl_8029FF9C
	stw      r3, 0x230(r31)
	b        lbl_8029FFBC

lbl_8029FF9C:
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 1
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_8029FFBC:
	mr       r3, r31
	bl       isAttackable__Q34Game12Hanachirashi3ObjFv
	cmplwi   r3, 0
	beq      lbl_8029FFE8
	stw      r3, 0x230(r31)
	mr       r3, r31
	lfs      f0, lbl_8051BD58@sda21(r2)
	stfs     f0, 0x1d4(r31)
	stfs     f0, 0x1d8(r31)
	stfs     f0, 0x1dc(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv

lbl_8029FFE8:
	mr       r3, r31
	bl       getFlyingNextState__Q34Game12Hanachirashi3ObjFv
	or.      r5, r3, r3
	blt      lbl_802A0018
	lwz      r12, 0(r30)
	mr       r3, r30
	mr       r4, r31
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_802A0084

lbl_802A0018:
	lwz      r3, 0x188(r31)
	lbz      r0, 0x24(r3)
	cmplwi   r0, 0
	beq      lbl_802A0084
	lwz      r0, 0x1c(r3)
	cmplwi   r0, 0x3e8
	bne      lbl_802A0084
	lwz      r0, 0x230(r31)
	cmplwi   r0, 0
	beq      lbl_802A0064
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 5
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_802A0084

lbl_802A0064:
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 1
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_802A0084:
	psq_l    f31, 296(r1), 0, qr0
	lfd      f31, 0x120(r1)
	psq_l    f30, 280(r1), 0, qr0
	lfd      f30, 0x110(r1)
	psq_l    f29, 264(r1), 0, qr0
	lfd      f29, 0x100(r1)
	psq_l    f28, 248(r1), 0, qr0
	lfd      f28, 0xf0(r1)
	psq_l    f27, 232(r1), 0, qr0
	lfd      f27, 0xe0(r1)
	psq_l    f26, 216(r1), 0, qr0
	lfd      f26, 0xd0(r1)
	psq_l    f25, 200(r1), 0, qr0
	lfd      f25, 0xc0(r1)
	psq_l    f24, 184(r1), 0, qr0
	lfd      f24, 0xb0(r1)
	psq_l    f23, 168(r1), 0, qr0
	lfd      f23, 0xa0(r1)
	psq_l    f22, 152(r1), 0, qr0
	lfd      f22, 0x90(r1)
	lwz      r31, 0x8c(r1)
	lwz      r30, 0x88(r1)
	lwz      r0, 0x134(r1)
	lwz      r29, 0x84(r1)
	mtlr     r0
	addi     r1, r1, 0x130
	blr
	*/
}

/*
 * --INFO--
 * Address:	802A00F0
 * Size:	000024
 */
void Hanachirashi::StateChase::cleanup(Game::EnemyBase*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r3, r4
	stw      r0, 0x14(r1)
	bl       setEmotionCaution__Q24Game9EnemyBaseFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802A0114
 * Size:	000124
 */
void Hanachirashi::StateChaseInside::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stfd     f31, 0x30(r1)
	psq_st   f31, 56(r1), 0, qr0
	stfd     f30, 0x20(r1)
	psq_st   f30, 40(r1), 0, qr0
	stw      r31, 0x1c(r1)
	mr       r31, r4
	lwz      r4, 0x230(r4)
	lfs      f31, 0x198(r31)
	cmplwi   r4, 0
	lfs      f0, 0x19c(r31)
	lfs      f30, 0x1a0(r31)
	beq      lbl_802A01F4
	lwz      r12, 0(r4)
	addi     r3, r1, 8
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f6, 8(r1)
	lfs      f7, 0x10(r1)
	fsubs    f3, f31, f6
	lfs      f4, lbl_8051BD58@sda21(r2)
	fsubs    f5, f30, f7
	lfs      f2, 0xc(r1)
	fmadds   f0, f3, f3, f4
	fmuls    f1, f5, f5
	fadds    f1, f1, f0
	fcmpo    cr0, f1, f4
	ble      lbl_802A01A0
	ble      lbl_802A01A4
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_802A01A4

lbl_802A01A0:
	fmr      f1, f4

lbl_802A01A4:
	lfs      f0, lbl_8051BD58@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_802A01C4
	lfs      f0, lbl_8051BD6C@sda21(r2)
	fdivs    f0, f0, f1
	fmuls    f3, f3, f0
	fmuls    f4, f4, f0
	fmuls    f5, f5, f0

lbl_802A01C4:
	lwz      r3, 0xc0(r31)
	lfs      f0, 0x3d4(r3)
	fmuls    f3, f3, f0
	fmuls    f4, f4, f0
	fmuls    f5, f5, f0
	fadds    f0, f6, f3
	fadds    f2, f2, f4
	fadds    f1, f7, f5
	stfs     f0, 0x2d8(r31)
	stfs     f2, 0x2dc(r31)
	stfs     f1, 0x2e0(r31)
	b        lbl_802A0200

lbl_802A01F4:
	stfs     f31, 0x2d8(r31)
	stfs     f0, 0x2dc(r31)
	stfs     f30, 0x2e0(r31)

lbl_802A0200:
	lwz      r0, 0x1e0(r31)
	mr       r3, r31
	ori      r0, r0, 4
	stw      r0, 0x1e0(r31)
	bl       setEmotionExcitement__Q24Game9EnemyBaseFv
	psq_l    f31, 56(r1), 0, qr0
	lfd      f31, 0x30(r1)
	psq_l    f30, 40(r1), 0, qr0
	lfd      f30, 0x20(r1)
	lwz      r0, 0x44(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	802A0238
 * Size:	00037C
 */
void Hanachirashi::StateChaseInside::exec(Game::EnemyBase*)
{
	/*
	stwu     r1, -0xe0(r1)
	mflr     r0
	stw      r0, 0xe4(r1)
	stfd     f31, 0xd0(r1)
	psq_st   f31, 216(r1), 0, qr0
	stfd     f30, 0xc0(r1)
	psq_st   f30, 200(r1), 0, qr0
	stfd     f29, 0xb0(r1)
	psq_st   f29, 184(r1), 0, qr0
	stfd     f28, 0xa0(r1)
	psq_st   f28, 168(r1), 0, qr0
	stfd     f27, 0x90(r1)
	psq_st   f27, 152(r1), 0, qr0
	stfd     f26, 0x80(r1)
	psq_st   f26, 136(r1), 0, qr0
	stfd     f25, 0x70(r1)
	psq_st   f25, 120(r1), 0, qr0
	stw      r31, 0x6c(r1)
	stw      r30, 0x68(r1)
	mr       r31, r4
	mr       r30, r3
	mr       r3, r31
	bl       setHeightVelocity__Q34Game12Hanachirashi3ObjFv
	mr       r4, r31
	addi     r3, r1, 0x44
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f31, 0x4c(r1)
	lfs      f29, 0x2e0(r31)
	lfs      f28, 0x44(r1)
	fsubs    f1, f31, f29
	lfs      f30, 0x2d8(r31)
	lfs      f0, lbl_8051BD64@sda21(r2)
	fsubs    f2, f28, f30
	fmuls    f1, f1, f1
	fmadds   f1, f2, f2, f1
	fcmpo    cr0, f1, f0
	bge      lbl_802A02FC
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 3
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_802A04F8

lbl_802A02FC:
	lwz      r4, 0x230(r31)
	cmplwi   r4, 0
	beq      lbl_802A0418
	lwz      r12, 0(r4)
	addi     r3, r1, 0x20
	lwz      r5, 0xc0(r31)
	lwz      r12, 8(r12)
	lfs      f26, 0x334(r5)
	lfs      f27, 0x30c(r5)
	mtctr    r12
	bctrl
	mr       r4, r31
	lfs      f2, 0x20(r1)
	lwz      r12, 0(r31)
	addi     r3, r1, 0x2c
	lfs      f1, 0x24(r1)
	lfs      f0, 0x28(r1)
	lwz      r12, 8(r12)
	stfs     f2, 8(r1)
	stfs     f1, 0xc(r1)
	stfs     f0, 0x10(r1)
	mtctr    r12
	bctrl
	lfs      f5, 0x2c(r1)
	lis      r3, atanTable___5JMath@ha
	lfs      f3, 0x34(r1)
	addi     r3, r3, atanTable___5JMath@l
	lfs      f1, 8(r1)
	lfs      f0, 0x10(r1)
	lfs      f4, 0x30(r1)
	fsubs    f1, f1, f5
	fsubs    f2, f0, f3
	stfs     f5, 0x14(r1)
	stfs     f4, 0x18(r1)
	stfs     f3, 0x1c(r1)
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	bl       roundAng__Ff
	lwz      r12, 0(r31)
	fmr      f25, f1
	mr       r3, r31
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fmr      f2, f1
	fmr      f1, f25
	bl       angDist__Fff
	fmuls    f27, f1, f27
	lfs      f0, lbl_8051BD74@sda21(r2)
	lfs      f1, lbl_8051BD70@sda21(r2)
	fmuls    f0, f0, f26
	fabs     f2, f27
	fmuls    f1, f1, f0
	frsp     f0, f2
	fcmpo    cr0, f0, f1
	ble      lbl_802A03F0
	lfs      f0, lbl_8051BD58@sda21(r2)
	fcmpo    cr0, f27, f0
	ble      lbl_802A03EC
	fmr      f27, f1
	b        lbl_802A03F0

lbl_802A03EC:
	fneg     f27, f1

lbl_802A03F0:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fadds    f1, f27, f1
	bl       roundAng__Ff
	stfs     f1, 0x1fc(r31)
	lfs      f0, 0x1fc(r31)
	stfs     f0, 0x1a8(r31)

lbl_802A0418:
	fsubs    f1, f30, f28
	lis      r3, atanTable___5JMath@ha
	fsubs    f2, f29, f31
	addi     r3, r3, atanTable___5JMath@l
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	lfs      f0, lbl_8051BD58@sda21(r2)
	lwz      r4, 0xc0(r31)
	fcmpo    cr0, f1, f0
	lfs      f4, 0x2e4(r4)
	bge      lbl_802A046C
	lfs      f0, lbl_8051BD7C@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 0x50(r1)
	lwz      r0, 0x54(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0
	fneg     f3, f0
	b        lbl_802A0490

lbl_802A046C:
	lfs      f0, lbl_8051BD80@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 0x58(r1)
	lwz      r0, 0x5c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f3, r3, r0

lbl_802A0490:
	lfs      f0, lbl_8051BD58@sda21(r2)
	fmuls    f4, f4, f3
	lfs      f2, 0x1d4(r31)
	lfs      f3, 0x1d8(r31)
	fcmpo    cr0, f1, f0
	lfs      f0, 0x1dc(r31)
	stfs     f2, 0x38(r1)
	stfs     f3, 0x3c(r1)
	stfs     f0, 0x40(r1)
	bge      lbl_802A04BC
	fneg     f1, f1

lbl_802A04BC:
	lfs      f0, lbl_8051BD80@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	lfs      f2, 0x2e4(r4)
	fmuls    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 0x60(r1)
	lwz      r0, 0x64(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r3, r0
	lfs      f0, 4(r3)
	stfs     f4, 0x1d4(r31)
	fmuls    f0, f2, f0
	stfs     f3, 0x1d8(r31)
	stfs     f0, 0x1dc(r31)

lbl_802A04F8:
	mr       r3, r31
	bl       getFlyingNextState__Q34Game12Hanachirashi3ObjFv
	or.      r5, r3, r3
	blt      lbl_802A0528
	lwz      r12, 0(r30)
	mr       r3, r30
	mr       r4, r31
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_802A0564

lbl_802A0528:
	lwz      r3, 0x188(r31)
	lbz      r0, 0x24(r3)
	cmplwi   r0, 0
	beq      lbl_802A0564
	lwz      r0, 0x1c(r3)
	cmplwi   r0, 0x3e8
	bne      lbl_802A0564
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 1
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_802A0564:
	psq_l    f31, 216(r1), 0, qr0
	lfd      f31, 0xd0(r1)
	psq_l    f30, 200(r1), 0, qr0
	lfd      f30, 0xc0(r1)
	psq_l    f29, 184(r1), 0, qr0
	lfd      f29, 0xb0(r1)
	psq_l    f28, 168(r1), 0, qr0
	lfd      f28, 0xa0(r1)
	psq_l    f27, 152(r1), 0, qr0
	lfd      f27, 0x90(r1)
	psq_l    f26, 136(r1), 0, qr0
	lfd      f26, 0x80(r1)
	psq_l    f25, 120(r1), 0, qr0
	lfd      f25, 0x70(r1)
	lwz      r31, 0x6c(r1)
	lwz      r0, 0xe4(r1)
	lwz      r30, 0x68(r1)
	mtlr     r0
	addi     r1, r1, 0xe0
	blr
	*/
}

/*
 * --INFO--
 * Address:	802A05B4
 * Size:	000024
 */
void Hanachirashi::StateChaseInside::cleanup(Game::EnemyBase*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r3, r4
	stw      r0, 0x14(r1)
	bl       setEmotionCaution__Q24Game9EnemyBaseFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802A05D8
 * Size:	000090
 */
void Hanachirashi::StateAttack::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lfs      f0, lbl_8051BD58@sda21(r2)
	stw      r0, 0x14(r1)
	li       r0, 0
	stw      r31, 0xc(r1)
	mr       r31, r4
	mr       r3, r31
	lwz      r4, 0x1e0(r4)
	rlwinm   r4, r4, 0, 0x1a, 0x18
	stw      r4, 0x1e0(r31)
	stw      r0, 0x230(r31)
	lwz      r0, 0x1e0(r31)
	ori      r0, r0, 4
	stw      r0, 0x1e0(r31)
	stfs     f0, 0x1d4(r31)
	stfs     f0, 0x1d8(r31)
	stfs     f0, 0x1dc(r31)
	bl       setEmotionExcitement__Q24Game9EnemyBaseFv
	mr       r3, r31
	li       r4, 9
	li       r5, 0
	bl       startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
	li       r3, -1
	li       r0, 0
	stw      r3, 0x2c0(r31)
	mr       r3, r31
	lfs      f0, lbl_8051BD58@sda21(r2)
	stb      r0, 0x310(r31)
	stfs     f0, 0x30c(r31)
	bl       createSuckEffect__Q34Game12Hanachirashi3ObjFv
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802A0668
 * Size:	00011C
 */
void Hanachirashi::StateAttack::exec(Game::EnemyBase*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	mr       r3, r31
	bl       setHeightVelocity__Q34Game12Hanachirashi3ObjFv
	lbz      r0, 0x310(r31)
	cmplwi   r0, 0
	beq      lbl_802A06B0
	mr       r3, r31
	bl       windTarget__Q34Game12Hanachirashi3ObjFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_802A06B0
	li       r0, 0xc
	stw      r0, 0x2c0(r31)

lbl_802A06B0:
	lfs      f1, 0x200(r31)
	lfs      f0, lbl_8051BD58@sda21(r2)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_802A06E8
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_802A076C

lbl_802A06E8:
	lwz      r3, 0x188(r31)
	lbz      r0, 0x24(r3)
	cmplwi   r0, 0
	beq      lbl_802A076C
	lwz      r0, 0x1c(r3)
	cmplwi   r0, 2
	bne      lbl_802A0718
	li       r0, 1
	mr       r3, r31
	stb      r0, 0x310(r31)
	bl       startWindEffect__Q34Game12Hanachirashi3ObjFv
	b        lbl_802A076C

lbl_802A0718:
	cmplwi   r0, 0x3e8
	bne      lbl_802A076C
	lwz      r5, 0x2c0(r31)
	cmpwi    r5, 0
	blt      lbl_802A074C
	lwz      r12, 0(r30)
	mr       r3, r30
	mr       r4, r31
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_802A076C

lbl_802A074C:
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 1
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_802A076C:
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
 * Address:	802A0784
 * Size:	000054
 */
void Hanachirashi::StateAttack::cleanup(Game::EnemyBase*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	mr       r3, r31
	lwz      r0, 0x1e0(r4)
	ori      r0, r0, 0x40
	stw      r0, 0x1e0(r4)
	bl       setEmotionCaution__Q24Game9EnemyBaseFv
	li       r0, 0
	lfs      f0, lbl_8051BD58@sda21(r2)
	stb      r0, 0x310(r31)
	mr       r3, r31
	stfs     f0, 0x30c(r31)
	bl       finishWindEffect__Q34Game12Hanachirashi3ObjFv
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802A07D8
 * Size:	000068
 */
void Hanachirashi::StateFall::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lfs      f0, lbl_8051BD58@sda21(r2)
	stw      r0, 0x14(r1)
	li       r0, 0
	stw      r31, 0xc(r1)
	mr       r31, r4
	mr       r3, r31
	stfs     f0, 0x2c4(r4)
	stw      r0, 0x230(r4)
	lwz      r0, 0x1e0(r4)
	ori      r0, r0, 4
	stw      r0, 0x1e0(r4)
	stfs     f0, 0x1d4(r4)
	stfs     f0, 0x1d8(r4)
	stfs     f0, 0x1dc(r4)
	bl       setEmotionExcitement__Q24Game9EnemyBaseFv
	mr       r3, r31
	li       r4, 8
	li       r5, 0
	bl       startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802A0840
 * Size:	0001A4
 */
void Hanachirashi::StateFall::exec(Game::EnemyBase*)
{
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	stfd     f31, 0x40(r1)
	psq_st   f31, 72(r1), 0, qr0
	stw      r31, 0x3c(r1)
	stw      r30, 0x38(r1)
	mr       r31, r4
	mr       r30, r3
	lwz      r12, 0(r31)
	mr       r3, r31
	lwz      r12, 0xcc(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802A088C
	mr       r3, r31
	bl       setHeightVelocity__Q34Game12Hanachirashi3ObjFv
	b        lbl_802A0920

lbl_802A088C:
	mr       r4, r31
	addi     r3, r1, 0x14
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0x14(r1)
	mr       r4, r31
	lfs      f1, 0x18(r1)
	addi     r3, r1, 8
	lfs      f0, 0x1c(r1)
	stfs     f2, 0x20(r1)
	stfs     f1, 0x24(r1)
	stfs     f0, 0x28(r1)
	lwz      r12, 0(r31)
	lwz      r12, 0x6c(r12)
	mtctr    r12
	bctrl
	lwz      r3, mapMgr__4Game@sda21(r13)
	addi     r4, r1, 0x20
	lfs      f31, 0xc(r1)
	lwz      r12, 4(r3)
	lwz      r12, 0x28(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0x24(r1)
	lfs      f0, lbl_8051BD84@sda21(r2)
	fsubs    f1, f2, f1
	fcmpo    cr0, f1, f0
	blt      lbl_802A0910
	lfs      f0, lbl_8051BD58@sda21(r2)
	fcmpo    cr0, f31, f0
	ble      lbl_802A0918

lbl_802A0910:
	mr       r3, r31
	bl       finishMotion__Q24Game9EnemyBaseFv

lbl_802A0918:
	mr       r3, r31
	bl       addShadowOffset__Q34Game12Hanachirashi3ObjFv

lbl_802A0920:
	lfs      f1, 0x2c4(r31)
	lfs      f0, lbl_8051BD88@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_802A093C
	lwz      r0, 0x1e0(r31)
	rlwinm   r0, r0, 0, 0x1e, 0x1c
	stw      r0, 0x1e0(r31)

lbl_802A093C:
	lwz      r3, sys@sda21(r13)
	lfs      f2, 0x2c4(r31)
	lfs      f1, 0x54(r3)
	lfs      f0, lbl_8051BD58@sda21(r2)
	fadds    f1, f2, f1
	stfs     f1, 0x2c4(r31)
	lfs      f1, 0x200(r31)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_802A0988
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_802A09C4

lbl_802A0988:
	lwz      r3, 0x188(r31)
	lbz      r0, 0x24(r3)
	cmplwi   r0, 0
	beq      lbl_802A09C4
	lwz      r0, 0x1c(r3)
	cmplwi   r0, 0x3e8
	bne      lbl_802A09C4
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 7
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_802A09C4:
	psq_l    f31, 72(r1), 0, qr0
	lwz      r0, 0x54(r1)
	lfd      f31, 0x40(r1)
	lwz      r31, 0x3c(r1)
	lwz      r30, 0x38(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

/*
 * --INFO--
 * Address:	802A09E4
 * Size:	000038
 */
void Hanachirashi::StateFall::cleanup(Game::EnemyBase*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	mr       r3, r31
	bl       setShadowOffsetMax__Q34Game12Hanachirashi3ObjFv
	mr       r3, r31
	bl       setEmotionCaution__Q24Game9EnemyBaseFv
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802A0A1C
 * Size:	000070
 */
void Hanachirashi::StateLand::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lfs      f0, lbl_8051BD58@sda21(r2)
	stw      r0, 0x14(r1)
	li       r0, 0
	stw      r31, 0xc(r1)
	mr       r31, r4
	mr       r3, r31
	stfs     f0, 0x2c4(r4)
	stw      r0, 0x230(r4)
	lwz      r0, 0x1e0(r4)
	rlwinm   r0, r0, 0, 0x1e, 0x1c
	stw      r0, 0x1e0(r4)
	stfs     f0, 0x1d4(r4)
	stfs     f0, 0x1d8(r4)
	stfs     f0, 0x1dc(r4)
	bl       setEmotionExcitement__Q24Game9EnemyBaseFv
	mr       r3, r31
	li       r4, 6
	li       r5, 0
	bl       startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
	mr       r3, r31
	bl       createDownEffect__Q34Game12Hanachirashi3ObjFv
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802A0A8C
 * Size:	000080
 */
void Hanachirashi::StateLand::exec(Game::EnemyBase*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lfs      f0, lbl_8051BD58@sda21(r2)
	stw      r0, 0x14(r1)
	lfs      f1, 0x200(r4)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_802A0AC8
	lwz      r12, 0(r3)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_802A0AFC

lbl_802A0AC8:
	lwz      r5, 0x188(r4)
	lbz      r0, 0x24(r5)
	cmplwi   r0, 0
	beq      lbl_802A0AFC
	lwz      r0, 0x1c(r5)
	cmplwi   r0, 0x3e8
	bne      lbl_802A0AFC
	lwz      r12, 0(r3)
	li       r5, 8
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_802A0AFC:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802A0B0C
 * Size:	000024
 */
void Hanachirashi::StateLand::cleanup(Game::EnemyBase*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r3, r4
	stw      r0, 0x14(r1)
	bl       setEmotionCaution__Q24Game9EnemyBaseFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802A0B30
 * Size:	000068
 */
void Hanachirashi::StateGround::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lfs      f0, lbl_8051BD58@sda21(r2)
	stw      r0, 0x14(r1)
	li       r0, 0
	stw      r31, 0xc(r1)
	mr       r31, r4
	mr       r3, r31
	stfs     f0, 0x2c4(r4)
	stw      r0, 0x230(r4)
	lwz      r0, 0x1e0(r4)
	rlwinm   r0, r0, 0, 0x1e, 0x1c
	stw      r0, 0x1e0(r4)
	stfs     f0, 0x1d4(r4)
	stfs     f0, 0x1d8(r4)
	stfs     f0, 0x1dc(r4)
	bl       setEmotionExcitement__Q24Game9EnemyBaseFv
	mr       r3, r31
	li       r4, 4
	li       r5, 0
	bl       startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802A0B98
 * Size:	000114
 */
void Hanachirashi::StateGround::exec(Game::EnemyBase*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r0, 0x1f4(r4)
	cmpwi    r0, 0
	beq      lbl_802A0BD4
	lwz      r3, 0xc0(r31)
	lfs      f1, 0x2c4(r31)
	lfs      f0, 0x894(r3)
	fcmpo    cr0, f1, f0
	ble      lbl_802A0BDC

lbl_802A0BD4:
	mr       r3, r31
	bl       finishMotion__Q24Game9EnemyBaseFv

lbl_802A0BDC:
	lwz      r3, sys@sda21(r13)
	lfs      f2, 0x2c4(r31)
	lfs      f1, 0x54(r3)
	lfs      f0, lbl_8051BD58@sda21(r2)
	fadds    f1, f2, f1
	stfs     f1, 0x2c4(r31)
	lfs      f1, 0x200(r31)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_802A0C28
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_802A0C94

lbl_802A0C28:
	lwz      r3, 0x188(r31)
	lbz      r0, 0x24(r3)
	cmplwi   r0, 0
	beq      lbl_802A0C94
	lwz      r0, 0x1c(r3)
	cmplwi   r0, 0x3e8
	bne      lbl_802A0C94
	lwz      r0, 0x1f4(r31)
	cmpwi    r0, 0
	beq      lbl_802A0C74
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 0xb
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_802A0C94

lbl_802A0C74:
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 9
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_802A0C94:
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
 * Address:	802A0CAC
 * Size:	000024
 */
void Hanachirashi::StateGround::cleanup(Game::EnemyBase*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r3, r4
	stw      r0, 0x14(r1)
	bl       setEmotionCaution__Q24Game9EnemyBaseFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802A0CD0
 * Size:	000064
 */
void Hanachirashi::StateTakeOff::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lfs      f0, lbl_8051BD58@sda21(r2)
	stw      r0, 0x14(r1)
	li       r0, 0
	stw      r31, 0xc(r1)
	mr       r31, r4
	mr       r3, r31
	stw      r0, 0x230(r4)
	lwz      r0, 0x1e0(r4)
	rlwinm   r0, r0, 0, 0x1e, 0x1c
	stw      r0, 0x1e0(r4)
	stfs     f0, 0x1d4(r4)
	stfs     f0, 0x1d8(r4)
	stfs     f0, 0x1dc(r4)
	bl       setEmotionExcitement__Q24Game9EnemyBaseFv
	mr       r3, r31
	li       r4, 7
	li       r5, 0
	bl       startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802A0D34
 * Size:	0000EC
 */
void Hanachirashi::StateTakeOff::exec(Game::EnemyBase*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0xcc(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802A0D7C
	mr       r3, r31
	bl       setHeightVelocity__Q34Game12Hanachirashi3ObjFv
	mr       r3, r31
	bl       subShadowOffset__Q34Game12Hanachirashi3ObjFv

lbl_802A0D7C:
	lfs      f1, 0x200(r31)
	lfs      f0, lbl_8051BD58@sda21(r2)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_802A0DB4
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_802A0E08

lbl_802A0DB4:
	lwz      r3, 0x188(r31)
	lbz      r0, 0x24(r3)
	cmplwi   r0, 0
	beq      lbl_802A0E08
	lwz      r0, 0x1c(r3)
	cmplwi   r0, 2
	bne      lbl_802A0DE0
	lwz      r0, 0x1e0(r31)
	ori      r0, r0, 4
	stw      r0, 0x1e0(r31)
	b        lbl_802A0E08

lbl_802A0DE0:
	cmplwi   r0, 0x3e8
	bne      lbl_802A0E08
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 1
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_802A0E08:
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
 * Address:	802A0E20
 * Size:	000038
 */
void Hanachirashi::StateTakeOff::cleanup(Game::EnemyBase*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	mr       r3, r31
	bl       resetShadowOffset__Q34Game12Hanachirashi3ObjFv
	mr       r3, r31
	bl       setEmotionCaution__Q24Game9EnemyBaseFv
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802A0E58
 * Size:	000064
 */
void Hanachirashi::StateFlyFlick::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lfs      f0, lbl_8051BD58@sda21(r2)
	stw      r0, 0x14(r1)
	li       r0, 0
	stw      r31, 0xc(r1)
	mr       r31, r4
	mr       r3, r31
	stw      r0, 0x230(r4)
	lwz      r0, 0x1e0(r4)
	ori      r0, r0, 4
	stw      r0, 0x1e0(r4)
	stfs     f0, 0x1d4(r4)
	stfs     f0, 0x1d8(r4)
	stfs     f0, 0x1dc(r4)
	bl       setEmotionExcitement__Q24Game9EnemyBaseFv
	mr       r3, r31
	li       r4, 2
	li       r5, 0
	bl       startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802A0EBC
 * Size:	0000E4
 */
void Hanachirashi::StateFlyFlick::exec(Game::EnemyBase*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	mr       r3, r31
	bl       setHeightVelocity__Q34Game12Hanachirashi3ObjFv
	lfs      f1, 0x200(r31)
	lfs      f0, lbl_8051BD58@sda21(r2)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_802A0F18
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_802A0F88

lbl_802A0F18:
	lwz      r3, 0x188(r31)
	lbz      r0, 0x24(r3)
	cmplwi   r0, 0
	beq      lbl_802A0F88
	lwz      r0, 0x1c(r3)
	cmplwi   r0, 2
	bne      lbl_802A0F60
	lwz      r5, 0xc0(r31)
	mr       r3, r31
	lfs      f4, lbl_8051BD8C@sda21(r2)
	li       r4, 0
	lfs      f1, 0x53c(r5)
	lfs      f2, 0x4c4(r5)
	lfs      f3, 0x4ec(r5)
	bl
"flickStickPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Piki>"
	lfs      f0, lbl_8051BD58@sda21(r2)
	stfs     f0, 0x20c(r31)
	b        lbl_802A0F88

lbl_802A0F60:
	cmplwi   r0, 0x3e8
	bne      lbl_802A0F88
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 1
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_802A0F88:
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
 * Address:	802A0FA0
 * Size:	000024
 */
void Hanachirashi::StateFlyFlick::cleanup(Game::EnemyBase*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r3, r4
	stw      r0, 0x14(r1)
	bl       setEmotionCaution__Q24Game9EnemyBaseFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802A0FC4
 * Size:	000064
 */
void Hanachirashi::StateGroundFlick::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lfs      f0, lbl_8051BD58@sda21(r2)
	stw      r0, 0x14(r1)
	li       r0, 0
	stw      r31, 0xc(r1)
	mr       r31, r4
	mr       r3, r31
	stw      r0, 0x230(r4)
	lwz      r0, 0x1e0(r4)
	rlwinm   r0, r0, 0, 0x1e, 0x1c
	stw      r0, 0x1e0(r4)
	stfs     f0, 0x1d4(r4)
	stfs     f0, 0x1d8(r4)
	stfs     f0, 0x1dc(r4)
	bl       setEmotionExcitement__Q24Game9EnemyBaseFv
	mr       r3, r31
	li       r4, 3
	li       r5, 0
	bl       startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802A1028
 * Size:	000100
 */
void Hanachirashi::StateGroundFlick::exec(Game::EnemyBase*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lfs      f0, lbl_8051BD58@sda21(r2)
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	lfs      f1, 0x200(r4)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_802A106C
	lwz      r12, 0(r3)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_802A1114

lbl_802A106C:
	lwz      r5, 0x188(r31)
	lbz      r0, 0x24(r5)
	cmplwi   r0, 0
	beq      lbl_802A1114
	lwz      r0, 0x1c(r5)
	cmplwi   r0, 2
	bne      lbl_802A10F4
	lwz      r5, 0xc0(r31)
	mr       r3, r31
	lfs      f4, lbl_8051BD8C@sda21(r2)
	li       r4, 0
	lfs      f1, 0x514(r5)
	lfs      f2, 0x4c4(r5)
	lfs      f3, 0x4ec(r5)
	bl
"flickNearbyNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Navi>"
	lwz      r5, 0xc0(r31)
	mr       r3, r31
	lfs      f4, lbl_8051BD8C@sda21(r2)
	li       r4, 0
	lfs      f1, 0x514(r5)
	lfs      f2, 0x4c4(r5)
	lfs      f3, 0x4ec(r5)
	bl
"flickNearbyPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Piki>"
	lwz      r5, 0xc0(r31)
	mr       r3, r31
	lfs      f4, lbl_8051BD8C@sda21(r2)
	li       r4, 0
	lfs      f1, 0x53c(r5)
	lfs      f2, 0x4c4(r5)
	lfs      f3, 0x4ec(r5)
	bl
"flickStickPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Piki>"
	lfs      f0, lbl_8051BD58@sda21(r2)
	stfs     f0, 0x20c(r31)
	b        lbl_802A1114

lbl_802A10F4:
	cmplwi   r0, 0x3e8
	bne      lbl_802A1114
	lwz      r12, 0(r3)
	li       r5, 9
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_802A1114:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802A1128
 * Size:	000024
 */
void Hanachirashi::StateGroundFlick::cleanup(Game::EnemyBase*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r3, r4
	stw      r0, 0x14(r1)
	bl       setEmotionCaution__Q24Game9EnemyBaseFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802A114C
 * Size:	000068
 */
void Hanachirashi::StateLaugh::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lfs      f0, lbl_8051BD58@sda21(r2)
	stw      r0, 0x14(r1)
	li       r0, 0
	stw      r31, 0xc(r1)
	mr       r31, r4
	mr       r3, r31
	stfs     f0, 0x2c4(r4)
	stfs     f0, 0x1d4(r4)
	stfs     f0, 0x1d8(r4)
	stfs     f0, 0x1dc(r4)
	stw      r0, 0x230(r4)
	lwz      r0, 0x1e0(r4)
	ori      r0, r0, 4
	stw      r0, 0x1e0(r4)
	bl       setEmotionExcitement__Q24Game9EnemyBaseFv
	mr       r3, r31
	li       r4, 0xa
	li       r5, 0
	bl       startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802A11B4
 * Size:	0000DC
 */
void Hanachirashi::StateLaugh::exec(Game::EnemyBase*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	mr       r3, r31
	bl       setHeightVelocity__Q34Game12Hanachirashi3ObjFv
	lwz      r3, 0x188(r31)
	lbz      r0, 0x24(r3)
	cmplwi   r0, 0
	beq      lbl_802A1278
	lwz      r0, 0x1c(r3)
	cmplwi   r0, 0x3e8
	bne      lbl_802A1278
	mr       r3, r31
	bl       getFlyingNextState__Q34Game12Hanachirashi3ObjFv
	or.      r5, r3, r3
	blt      lbl_802A1224
	lwz      r12, 0(r30)
	mr       r3, r30
	mr       r4, r31
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_802A1278

lbl_802A1224:
	mr       r3, r31
	bl       isAttackable__Q34Game12Hanachirashi3ObjFv
	cmplwi   r3, 0
	beq      lbl_802A1258
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 5
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_802A1278

lbl_802A1258:
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 1
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_802A1278:
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
 * Address:	802A1290
 * Size:	000024
 */
void Hanachirashi::StateLaugh::cleanup(Game::EnemyBase*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r3, r4
	stw      r0, 0x14(r1)
	bl       setEmotionCaution__Q24Game9EnemyBaseFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}
} // namespace Game
