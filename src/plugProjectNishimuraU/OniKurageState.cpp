#include "types.h"

/*
    Generated from dpostproc

    .section .ctors, "wa"  # 0x80472F00 - 0x804732C0
    .4byte __sinit_OniKurageState_cpp

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_8048BD38
    lbl_8048BD38:
        .asciz "flyflick"
        .skip 3
    .global lbl_8048BD44
    lbl_8048BD44:
        .asciz "groundflick"

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global lbl_804D27A8
    lbl_804D27A8:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
    .global __vt__Q34Game9OniKurage16StateGroundFlick
    __vt__Q34Game9OniKurage16StateGroundFlick:
        .4byte 0
        .4byte 0
        .4byte
   init__Q34Game9OniKurage16StateGroundFlickFPQ24Game9EnemyBasePQ24Game8StateArg
        .4byte exec__Q34Game9OniKurage16StateGroundFlickFPQ24Game9EnemyBase
        .4byte cleanup__Q34Game9OniKurage16StateGroundFlickFPQ24Game9EnemyBase
        .4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
        .4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
        .4byte
   transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg .4byte
   doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics .global
   __vt__Q23efx12TKurageFlick
    __vt__Q23efx12TKurageFlick:
        .4byte 0
        .4byte 0
        .4byte create__Q23efx8TSimple1FPQ23efx3Arg
        .4byte forceKill__Q23efx8TSimple1Fv
        .4byte fade__Q23efx8TSimple1Fv
    .global __vt__Q34Game9OniKurage13StateFlyFlick
    __vt__Q34Game9OniKurage13StateFlyFlick:
        .4byte 0
        .4byte 0
        .4byte
   init__Q34Game9OniKurage13StateFlyFlickFPQ24Game9EnemyBasePQ24Game8StateArg
        .4byte exec__Q34Game9OniKurage13StateFlyFlickFPQ24Game9EnemyBase
        .4byte cleanup__Q34Game9OniKurage13StateFlyFlickFPQ24Game9EnemyBase
        .4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
        .4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
        .4byte
   transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg .4byte
   doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics .global
   __vt__Q34Game9OniKurage11StateGround
    __vt__Q34Game9OniKurage11StateGround:
        .4byte 0
        .4byte 0
        .4byte
   init__Q34Game9OniKurage11StateGroundFPQ24Game9EnemyBasePQ24Game8StateArg
        .4byte exec__Q34Game9OniKurage11StateGroundFPQ24Game9EnemyBase
        .4byte cleanup__Q34Game9OniKurage11StateGroundFPQ24Game9EnemyBase
        .4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
        .4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
        .4byte
   transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg .4byte
   doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics .global
   __vt__Q34Game9OniKurage12StateTakeOff
    __vt__Q34Game9OniKurage12StateTakeOff:
        .4byte 0
        .4byte 0
        .4byte
   init__Q34Game9OniKurage12StateTakeOffFPQ24Game9EnemyBasePQ24Game8StateArg
        .4byte exec__Q34Game9OniKurage12StateTakeOffFPQ24Game9EnemyBase
        .4byte cleanup__Q34Game9OniKurage12StateTakeOffFPQ24Game9EnemyBase
        .4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
        .4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
        .4byte
   transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg .4byte
   doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics .global
   __vt__Q34Game9OniKurage9StateLand
    __vt__Q34Game9OniKurage9StateLand:
        .4byte 0
        .4byte 0
        .4byte
   init__Q34Game9OniKurage9StateLandFPQ24Game9EnemyBasePQ24Game8StateArg .4byte
   exec__Q34Game9OniKurage9StateLandFPQ24Game9EnemyBase .4byte
   cleanup__Q34Game9OniKurage9StateLandFPQ24Game9EnemyBase .4byte
   resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase .4byte
   restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase .4byte
   transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg .4byte
   doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics .global
   __vt__Q34Game9OniKurage9StateDrop
    __vt__Q34Game9OniKurage9StateDrop:
        .4byte 0
        .4byte 0
        .4byte
   init__Q34Game9OniKurage9StateDropFPQ24Game9EnemyBasePQ24Game8StateArg .4byte
   exec__Q34Game9OniKurage9StateDropFPQ24Game9EnemyBase .4byte
   cleanup__Q34Game9OniKurage9StateDropFPQ24Game9EnemyBase .4byte
   resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase .4byte
   restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase .4byte
   transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg .4byte
   doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics .global
   __vt__Q34Game9OniKurage9StateFall
    __vt__Q34Game9OniKurage9StateFall:
        .4byte 0
        .4byte 0
        .4byte
   init__Q34Game9OniKurage9StateFallFPQ24Game9EnemyBasePQ24Game8StateArg .4byte
   exec__Q34Game9OniKurage9StateFallFPQ24Game9EnemyBase .4byte
   cleanup__Q34Game9OniKurage9StateFallFPQ24Game9EnemyBase .4byte
   resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase .4byte
   restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase .4byte
   transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg .4byte
   doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics .global
   __vt__Q34Game9OniKurage11StateAttack
    __vt__Q34Game9OniKurage11StateAttack:
        .4byte 0
        .4byte 0
        .4byte
   init__Q34Game9OniKurage11StateAttackFPQ24Game9EnemyBasePQ24Game8StateArg
        .4byte exec__Q34Game9OniKurage11StateAttackFPQ24Game9EnemyBase
        .4byte cleanup__Q34Game9OniKurage11StateAttackFPQ24Game9EnemyBase
        .4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
        .4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
        .4byte
   transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg .4byte
   doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics .global
   __vt__Q34Game9OniKurage10StateChase
    __vt__Q34Game9OniKurage10StateChase:
        .4byte 0
        .4byte 0
        .4byte
   init__Q34Game9OniKurage10StateChaseFPQ24Game9EnemyBasePQ24Game8StateArg
        .4byte exec__Q34Game9OniKurage10StateChaseFPQ24Game9EnemyBase
        .4byte cleanup__Q34Game9OniKurage10StateChaseFPQ24Game9EnemyBase
        .4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
        .4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
        .4byte
   transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg .4byte
   doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics .global
   __vt__Q34Game9OniKurage9StateMove
    __vt__Q34Game9OniKurage9StateMove:
        .4byte 0
        .4byte 0
        .4byte
   init__Q34Game9OniKurage9StateMoveFPQ24Game9EnemyBasePQ24Game8StateArg .4byte
   exec__Q34Game9OniKurage9StateMoveFPQ24Game9EnemyBase .4byte
   cleanup__Q34Game9OniKurage9StateMoveFPQ24Game9EnemyBase .4byte
   resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase .4byte
   restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase .4byte
   transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg .4byte
   doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics .global
   __vt__Q34Game9OniKurage9StateWait
    __vt__Q34Game9OniKurage9StateWait:
        .4byte 0
        .4byte 0
        .4byte
   init__Q34Game9OniKurage9StateWaitFPQ24Game9EnemyBasePQ24Game8StateArg .4byte
   exec__Q34Game9OniKurage9StateWaitFPQ24Game9EnemyBase .4byte
   cleanup__Q34Game9OniKurage9StateWaitFPQ24Game9EnemyBase .4byte
   resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase .4byte
   restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase .4byte
   transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg .4byte
   doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics .global
   __vt__Q34Game9OniKurage9StateDead
    __vt__Q34Game9OniKurage9StateDead:
        .4byte 0
        .4byte 0
        .4byte
   init__Q34Game9OniKurage9StateDeadFPQ24Game9EnemyBasePQ24Game8StateArg .4byte
   exec__Q34Game9OniKurage9StateDeadFPQ24Game9EnemyBase .4byte
   cleanup__Q34Game9OniKurage9StateDeadFPQ24Game9EnemyBase .4byte
   resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase .4byte
   restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase .4byte
   transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg .4byte
   doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics .global
   __vt__Q34Game9OniKurage5State
    __vt__Q34Game9OniKurage5State:
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
   __vt__Q34Game9OniKurage3FSM
    __vt__Q34Game9OniKurage3FSM:
        .4byte 0
        .4byte 0
        .4byte init__Q34Game9OniKurage3FSMFPQ24Game9EnemyBase
        .4byte
   start__Q24Game17EnemyStateMachineFPQ24Game9EnemyBaseiPQ24Game8StateArg .4byte
   exec__Q24Game17EnemyStateMachineFPQ24Game9EnemyBase .4byte
   transit__Q24Game17EnemyStateMachineFPQ24Game9EnemyBaseiPQ24Game8StateArg
        .4byte
   doDirectDraw__Q24Game17EnemyStateMachineFPQ24Game9EnemyBaseR8Graphics .4byte
   getCurrState__Q24Game17EnemyStateMachineFPQ24Game9EnemyBase .4byte
   setCurrState__Q24Game17EnemyStateMachineFPQ24Game9EnemyBasePQ24Game13EnemyFSMState

    .section .sbss # 0x80514D80 - 0x80516360
    .global lbl_80515DC8
    lbl_80515DC8:
        .skip 0x4
    .global lbl_80515DCC
    lbl_80515DCC:
        .skip 0x4

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051C8E8
    lbl_8051C8E8:
        .4byte 0x64656164
        .4byte 0x00000000
    .global lbl_8051C8F0
    lbl_8051C8F0:
        .4byte 0x77616974
        .4byte 0x00000000
    .global lbl_8051C8F8
    lbl_8051C8F8:
        .4byte 0x6D6F7665
        .4byte 0x00000000
    .global lbl_8051C900
    lbl_8051C900:
        .4byte 0x63686173
        .4byte 0x65000000
    .global lbl_8051C908
    lbl_8051C908:
        .4byte 0x61747461
        .4byte 0x636B0000
    .global lbl_8051C910
    lbl_8051C910:
        .4byte 0x66616C6C
        .4byte 0x00000000
    .global lbl_8051C918
    lbl_8051C918:
        .4byte 0x64726F70
        .4byte 0x00000000
    .global lbl_8051C920
    lbl_8051C920:
        .4byte 0x6C616E64
        .4byte 0x00000000
    .global lbl_8051C928
    lbl_8051C928:
        .4byte 0x67726F75
        .4byte 0x6E640000
    .global lbl_8051C930
    lbl_8051C930:
        .4byte 0x74616B65
        .4byte 0x6F666600
    .global lbl_8051C938
    lbl_8051C938:
        .4byte 0x00000000
    .global lbl_8051C93C
    lbl_8051C93C:
        .4byte 0x41F00000
    .global lbl_8051C940
    lbl_8051C940:
        .4byte 0x42820000
    .global lbl_8051C944
    lbl_8051C944:
        .4byte 0x41A00000
    .global lbl_8051C948
    lbl_8051C948:
        .4byte 0x41980000
    .global lbl_8051C94C
    lbl_8051C94C:
        .float 1.0
    .global lbl_8051C950
    lbl_8051C950:
        .4byte 0x42C80000
    .global lbl_8051C954
    lbl_8051C954:
        .4byte 0xC47A0000
    .global lbl_8051C958
    lbl_8051C958:
        .4byte 0x40600000
    .global lbl_8051C95C
    lbl_8051C95C:
        .4byte 0x40400000
    .global lbl_8051C960
    lbl_8051C960:
        .4byte 0x41200000
    .global lbl_8051C964
    lbl_8051C964:
        .4byte 0x441C4000
    .global lbl_8051C968
    lbl_8051C968:
        .4byte 0x41C80000
        .4byte 0x00000000
*/

namespace Game {

/*
 * --INFO--
 * Address:	802D1AE0
 * Size:	000424
 */
void OniKurage::FSM::init(Game::EnemyBase*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r4, 0xc
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       create__Q24Game17EnemyStateMachineFi
	li       r3, 0x10
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_802D1B44
	lis      r3, __vt__Q24Game13EnemyFSMState@ha
	lis      r5, __vt__Q34Game9OniKurage5State@ha
	addi     r0, r3, __vt__Q24Game13EnemyFSMState@l
	lis      r3, __vt__Q34Game9OniKurage9StateDead@ha
	stw      r0, 0(r4)
	li       r7, 0
	addi     r6, r5, __vt__Q34Game9OniKurage5State@l
	addi     r5, r2, lbl_8051C8E8@sda21
	stw      r7, 4(r4)
	addi     r0, r3, __vt__Q34Game9OniKurage9StateDead@l
	stw      r7, 8(r4)
	stw      r6, 0(r4)
	stw      r5, 0xc(r4)
	stw      r0, 0(r4)

lbl_802D1B44:
	mr       r3, r31
	bl       registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
	li       r3, 0x10
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_802D1B98
	lis      r3, __vt__Q24Game13EnemyFSMState@ha
	lis      r5, __vt__Q34Game9OniKurage5State@ha
	addi     r0, r3, __vt__Q24Game13EnemyFSMState@l
	lis      r3, __vt__Q34Game9OniKurage9StateWait@ha
	stw      r0, 0(r4)
	li       r0, 1
	li       r7, 0
	addi     r6, r5, __vt__Q34Game9OniKurage5State@l
	stw      r0, 4(r4)
	addi     r5, r2, lbl_8051C8F0@sda21
	addi     r0, r3, __vt__Q34Game9OniKurage9StateWait@l
	stw      r7, 8(r4)
	stw      r6, 0(r4)
	stw      r5, 0xc(r4)
	stw      r0, 0(r4)

lbl_802D1B98:
	mr       r3, r31
	bl       registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
	li       r3, 0x10
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_802D1BEC
	lis      r3, __vt__Q24Game13EnemyFSMState@ha
	lis      r5, __vt__Q34Game9OniKurage5State@ha
	addi     r0, r3, __vt__Q24Game13EnemyFSMState@l
	lis      r3, __vt__Q34Game9OniKurage9StateMove@ha
	stw      r0, 0(r4)
	li       r0, 2
	li       r7, 0
	addi     r6, r5, __vt__Q34Game9OniKurage5State@l
	stw      r0, 4(r4)
	addi     r5, r2, lbl_8051C8F8@sda21
	addi     r0, r3, __vt__Q34Game9OniKurage9StateMove@l
	stw      r7, 8(r4)
	stw      r6, 0(r4)
	stw      r5, 0xc(r4)
	stw      r0, 0(r4)

lbl_802D1BEC:
	mr       r3, r31
	bl       registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
	li       r3, 0x10
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_802D1C40
	lis      r3, __vt__Q24Game13EnemyFSMState@ha
	lis      r5, __vt__Q34Game9OniKurage5State@ha
	addi     r0, r3, __vt__Q24Game13EnemyFSMState@l
	lis      r3, __vt__Q34Game9OniKurage10StateChase@ha
	stw      r0, 0(r4)
	li       r0, 3
	li       r7, 0
	addi     r6, r5, __vt__Q34Game9OniKurage5State@l
	stw      r0, 4(r4)
	addi     r5, r2, lbl_8051C900@sda21
	addi     r0, r3, __vt__Q34Game9OniKurage10StateChase@l
	stw      r7, 8(r4)
	stw      r6, 0(r4)
	stw      r5, 0xc(r4)
	stw      r0, 0(r4)

lbl_802D1C40:
	mr       r3, r31
	bl       registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
	li       r3, 0x10
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_802D1C94
	lis      r3, __vt__Q24Game13EnemyFSMState@ha
	lis      r5, __vt__Q34Game9OniKurage5State@ha
	addi     r0, r3, __vt__Q24Game13EnemyFSMState@l
	lis      r3, __vt__Q34Game9OniKurage11StateAttack@ha
	stw      r0, 0(r4)
	li       r0, 4
	li       r7, 0
	addi     r6, r5, __vt__Q34Game9OniKurage5State@l
	stw      r0, 4(r4)
	addi     r5, r2, lbl_8051C908@sda21
	addi     r0, r3, __vt__Q34Game9OniKurage11StateAttack@l
	stw      r7, 8(r4)
	stw      r6, 0(r4)
	stw      r5, 0xc(r4)
	stw      r0, 0(r4)

lbl_802D1C94:
	mr       r3, r31
	bl       registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
	li       r3, 0x10
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_802D1CE8
	lis      r3, __vt__Q24Game13EnemyFSMState@ha
	lis      r5, __vt__Q34Game9OniKurage5State@ha
	addi     r0, r3, __vt__Q24Game13EnemyFSMState@l
	lis      r3, __vt__Q34Game9OniKurage9StateFall@ha
	stw      r0, 0(r4)
	li       r0, 5
	li       r7, 0
	addi     r6, r5, __vt__Q34Game9OniKurage5State@l
	stw      r0, 4(r4)
	addi     r5, r2, lbl_8051C910@sda21
	addi     r0, r3, __vt__Q34Game9OniKurage9StateFall@l
	stw      r7, 8(r4)
	stw      r6, 0(r4)
	stw      r5, 0xc(r4)
	stw      r0, 0(r4)

lbl_802D1CE8:
	mr       r3, r31
	bl       registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
	li       r3, 0x10
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_802D1D3C
	lis      r3, __vt__Q24Game13EnemyFSMState@ha
	lis      r5, __vt__Q34Game9OniKurage5State@ha
	addi     r0, r3, __vt__Q24Game13EnemyFSMState@l
	lis      r3, __vt__Q34Game9OniKurage9StateDrop@ha
	stw      r0, 0(r4)
	li       r0, 6
	li       r7, 0
	addi     r6, r5, __vt__Q34Game9OniKurage5State@l
	stw      r0, 4(r4)
	addi     r5, r2, lbl_8051C918@sda21
	addi     r0, r3, __vt__Q34Game9OniKurage9StateDrop@l
	stw      r7, 8(r4)
	stw      r6, 0(r4)
	stw      r5, 0xc(r4)
	stw      r0, 0(r4)

lbl_802D1D3C:
	mr       r3, r31
	bl       registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
	li       r3, 0x10
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_802D1D90
	lis      r3, __vt__Q24Game13EnemyFSMState@ha
	lis      r5, __vt__Q34Game9OniKurage5State@ha
	addi     r0, r3, __vt__Q24Game13EnemyFSMState@l
	lis      r3, __vt__Q34Game9OniKurage9StateLand@ha
	stw      r0, 0(r4)
	li       r0, 7
	li       r7, 0
	addi     r6, r5, __vt__Q34Game9OniKurage5State@l
	stw      r0, 4(r4)
	addi     r5, r2, lbl_8051C920@sda21
	addi     r0, r3, __vt__Q34Game9OniKurage9StateLand@l
	stw      r7, 8(r4)
	stw      r6, 0(r4)
	stw      r5, 0xc(r4)
	stw      r0, 0(r4)

lbl_802D1D90:
	mr       r3, r31
	bl       registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
	li       r3, 0x10
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_802D1DE4
	lis      r3, __vt__Q24Game13EnemyFSMState@ha
	lis      r5, __vt__Q34Game9OniKurage5State@ha
	addi     r0, r3, __vt__Q24Game13EnemyFSMState@l
	lis      r3, __vt__Q34Game9OniKurage11StateGround@ha
	stw      r0, 0(r4)
	li       r0, 8
	li       r7, 0
	addi     r6, r5, __vt__Q34Game9OniKurage5State@l
	stw      r0, 4(r4)
	addi     r5, r2, lbl_8051C928@sda21
	addi     r0, r3, __vt__Q34Game9OniKurage11StateGround@l
	stw      r7, 8(r4)
	stw      r6, 0(r4)
	stw      r5, 0xc(r4)
	stw      r0, 0(r4)

lbl_802D1DE4:
	mr       r3, r31
	bl       registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
	li       r3, 0x10
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_802D1E38
	lis      r3, __vt__Q24Game13EnemyFSMState@ha
	lis      r5, __vt__Q34Game9OniKurage5State@ha
	addi     r0, r3, __vt__Q24Game13EnemyFSMState@l
	lis      r3, __vt__Q34Game9OniKurage12StateTakeOff@ha
	stw      r0, 0(r4)
	li       r0, 9
	li       r7, 0
	addi     r6, r5, __vt__Q34Game9OniKurage5State@l
	stw      r0, 4(r4)
	addi     r5, r2, lbl_8051C930@sda21
	addi     r0, r3, __vt__Q34Game9OniKurage12StateTakeOff@l
	stw      r7, 8(r4)
	stw      r6, 0(r4)
	stw      r5, 0xc(r4)
	stw      r0, 0(r4)

lbl_802D1E38:
	mr       r3, r31
	bl       registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
	li       r3, 0x10
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_802D1E90
	lis      r3, __vt__Q24Game13EnemyFSMState@ha
	lis      r6, __vt__Q34Game9OniKurage5State@ha
	addi     r0, r3, __vt__Q24Game13EnemyFSMState@l
	lis      r5, lbl_8048BD38@ha
	stw      r0, 0(r4)
	li       r0, 0xa
	lis      r3, __vt__Q34Game9OniKurage13StateFlyFlick@ha
	li       r7, 0
	stw      r0, 4(r4)
	addi     r6, r6, __vt__Q34Game9OniKurage5State@l
	addi     r5, r5, lbl_8048BD38@l
	addi     r0, r3, __vt__Q34Game9OniKurage13StateFlyFlick@l
	stw      r7, 8(r4)
	stw      r6, 0(r4)
	stw      r5, 0xc(r4)
	stw      r0, 0(r4)

lbl_802D1E90:
	mr       r3, r31
	bl       registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
	li       r3, 0x10
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_802D1EE8
	lis      r3, __vt__Q24Game13EnemyFSMState@ha
	lis      r6, __vt__Q34Game9OniKurage5State@ha
	addi     r0, r3, __vt__Q24Game13EnemyFSMState@l
	lis      r5, lbl_8048BD44@ha
	stw      r0, 0(r4)
	li       r0, 0xb
	lis      r3, __vt__Q34Game9OniKurage16StateGroundFlick@ha
	li       r7, 0
	stw      r0, 4(r4)
	addi     r6, r6, __vt__Q34Game9OniKurage5State@l
	addi     r5, r5, lbl_8048BD44@l
	addi     r0, r3, __vt__Q34Game9OniKurage16StateGroundFlick@l
	stw      r7, 8(r4)
	stw      r6, 0(r4)
	stw      r5, 0xc(r4)
	stw      r0, 0(r4)

lbl_802D1EE8:
	mr       r3, r31
	bl       registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802D1F04
 * Size:	0000CC
 */
void OniKurage::StateDead::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lfs      f0, lbl_8051C938@sda21(r2)
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
	lwz      r12, 0(r31)
	lwz      r12, 0xcc(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802D1F70
	mr       r3, r31
	li       r4, 0
	li       r5, 0
	bl       startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
	b        lbl_802D1F80

lbl_802D1F70:
	mr       r3, r31
	li       r4, 1
	li       r5, 0
	bl       startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener

lbl_802D1F80:
	lwz      r0, 0x1e0(r31)
	mr       r3, r31
	ori      r0, r0, 4
	stw      r0, 0x1e0(r31)
	bl       createDeadBombEffect__Q24Game9EnemyBaseFv
	mr       r3, r31
	bl       finishEyeBodyEffect__Q34Game9OniKurage3ObjFv
	lfs      f1, lbl_8051C938@sda21(r2)
	mr       r3, r31
	bl       PSStartEnemyFatalHitSE__FPQ24Game9EnemyBasef
	lwz      r3, 0x28c(r31)
	lwz      r12, 0x28(r3)
	lwz      r12, 0xc8(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802D1FD0
 * Size:	00018C
 */
void OniKurage::StateDead::exec(Game::EnemyBase*)
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stfd     f31, 0x30(r1)
	psq_st   f31, 56(r1), 0, qr0
	stw      r31, 0x2c(r1)
	mr       r31, r4
	mr       r3, r31
	bl       getMotionFrame__Q24Game9EnemyBaseFv
	fmr      f31, f1
	lfs      f0, lbl_8051C93C@sda21(r2)
	fcmpo    cr0, f31, f0
	ble      lbl_802D2010
	mr       r3, r31
	li       r4, 1
	bl       flickStickNavi__Q34Game9OniKurage3ObjFb

lbl_802D2010:
	lfs      f0, lbl_8051C940@sda21(r2)
	fcmpo    cr0, f31, f0
	ble      lbl_802D2048
	fsubs    f2, f31, f0
	lfs      f1, lbl_8051C93C@sda21(r2)
	lfs      f3, lbl_8051C948@sda21(r2)
	mr       r3, r31
	lfs      f0, lbl_8051C944@sda21(r2)
	fdivs    f1, f2, f1
	fnmsubs  f0, f3, f1, f0
	fctiwz   f0, f0
	stfd     f0, 0x20(r1)
	lwz      r4, 0x24(r1)
	bl       setHireEffectLife__Q34Game9OniKurage3ObjFs

lbl_802D2048:
	lwz      r3, 0x188(r31)
	lbz      r0, 0x24(r3)
	cmplwi   r0, 0
	beq      lbl_802D2140
	lwz      r0, 0x1c(r3)
	cmplwi   r0, 2
	bne      lbl_802D2084
	lfs      f1, lbl_8051C94C@sda21(r2)
	mr       r3, r31
	lfs      f2, lbl_8051C950@sda21(r2)
	li       r4, 0
	lfs      f3, lbl_8051C938@sda21(r2)
	lfs      f4, lbl_8051C954@sda21(r2)
	bl
"flickStickPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Piki>"
	b        lbl_802D2140

lbl_802D2084:
	cmplwi   r0, 3
	bne      lbl_802D212C
	mr       r3, r31
	bl       deathProcedure__Q24Game9EnemyBaseFv
	mr       r3, r31
	bl       finishHireEffect__Q34Game9OniKurage3ObjFv
	mr       r3, r31
	bl       createBodyBombEffect__Q34Game9OniKurage3ObjFv
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0xf4(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	li       r4, 0x590a
	li       r5, 0
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	mr       r4, r31
	addi     r3, r1, 8
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 8(r1)
	addi     r5, r1, 0x14
	lfs      f1, 0xc(r1)
	li       r4, 6
	lfs      f0, 0x10(r1)
	li       r6, 2
	stfs     f2, 0x14(r1)
	lwz      r3, cameraMgr__4Game@sda21(r13)
	stfs     f1, 0x18(r1)
	stfs     f0, 0x1c(r1)
	bl       "startVibration__Q24Game9CameraMgrFiR10Vector3<f>i"
	lwz      r3, rumbleMgr__4Game@sda21(r13)
	addi     r5, r1, 0x14
	li       r4, 0xa
	li       r6, 2
	bl       "startRumble__Q24Game9RumbleMgrFiR10Vector3<f>i"
	b        lbl_802D2140

lbl_802D212C:
	cmplwi   r0, 0x3e8
	bne      lbl_802D2140
	mr       r3, r31
	li       r4, 0
	bl       kill__Q24Game8CreatureFPQ24Game15CreatureKillArg

lbl_802D2140:
	psq_l    f31, 56(r1), 0, qr0
	lwz      r0, 0x44(r1)
	lfd      f31, 0x30(r1)
	lwz      r31, 0x2c(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	802D215C
 * Size:	000004
 */
void OniKurage::StateDead::cleanup(Game::EnemyBase*) { }

/*
 * --INFO--
 * Address:	802D2160
 * Size:	00005C
 */
void OniKurage::StateWait::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lfs      f1, lbl_8051C938@sda21(r2)
	mr       r3, r4
	stw      r0, 0x14(r1)
	li       r0, -1
	lfs      f0, lbl_8051C958@sda21(r2)
	li       r5, 0
	stw      r0, 0x2c0(r4)
	li       r4, 5
	stfs     f1, 0x2c4(r3)
	lwz      r0, 0x1e0(r3)
	ori      r0, r0, 4
	stw      r0, 0x1e0(r3)
	stfs     f1, 0x1d4(r3)
	stfs     f1, 0x1d8(r3)
	stfs     f1, 0x1dc(r3)
	stfs     f0, 0x2c8(r3)
	bl       startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802D21BC
 * Size:	000148
 */
void OniKurage::StateWait::exec(Game::EnemyBase*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stfd     f31, 0x10(r1)
	psq_st   f31, 24(r1), 0, qr0
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r31, r4
	mr       r30, r3
	mr       r3, r31
	bl       getMovePitchOffset__Q34Game9OniKurage3ObjFv
	lfs      f2, lbl_8051C938@sda21(r2)
	mr       r3, r31
	bl       setHeightVelocity__Q34Game9OniKurage3ObjFff
	fmr      f31, f1
	mr       r3, r31
	bl       getSearchedTarget__Q34Game9OniKurage3ObjFf
	or.      r4, r3, r3
	beq      lbl_802D2244
	fmr      f1, f31
	mr       r3, r31
	bl       isSuck__Q34Game9OniKurage3ObjFfPQ24Game8Creature
	clrlwi.  r0, r3, 0x18
	beq      lbl_802D2230
	li       r0, 4
	mr       r3, r31
	stw      r0, 0x2c0(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv
	b        lbl_802D2264

lbl_802D2230:
	li       r0, 3
	mr       r3, r31
	stw      r0, 0x2c0(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv
	b        lbl_802D2264

lbl_802D2244:
	lfs      f1, 0x2c4(r31)
	lfs      f0, lbl_8051C95C@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_802D2264
	li       r0, 2
	mr       r3, r31
	stw      r0, 0x2c0(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv

lbl_802D2264:
	mr       r3, r31
	bl       getFlyingNextState__Q34Game9OniKurage3ObjFv
	or.      r5, r3, r3
	blt      lbl_802D2294
	lwz      r12, 0(r30)
	mr       r3, r30
	mr       r4, r31
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_802D22E4

lbl_802D2294:
	lwz      r3, sys@sda21(r13)
	lfs      f1, 0x2c4(r31)
	lfs      f0, 0x54(r3)
	fadds    f0, f1, f0
	stfs     f0, 0x2c4(r31)
	lwz      r3, 0x188(r31)
	lbz      r0, 0x24(r3)
	cmplwi   r0, 0
	beq      lbl_802D22E4
	lwz      r0, 0x1c(r3)
	cmplwi   r0, 0x3e8
	bne      lbl_802D22E4
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r6, 0
	lwz      r5, 0x2c0(r31)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_802D22E4:
	psq_l    f31, 24(r1), 0, qr0
	lwz      r0, 0x24(r1)
	lfd      f31, 0x10(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	802D2304
 * Size:	000004
 */
void OniKurage::StateWait::cleanup(Game::EnemyBase*) { }

/*
 * --INFO--
 * Address:	802D2308
 * Size:	000074
 */
void OniKurage::StateMove::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lfs      f0, lbl_8051C938@sda21(r2)
	stw      r0, 0x14(r1)
	li       r0, -1
	stw      r31, 0xc(r1)
	mr       r31, r4
	mr       r3, r31
	stw      r0, 0x2c0(r4)
	stfs     f0, 0x2c4(r4)
	bl       setRandTarget__Q34Game9OniKurage3ObjFv
	lwz      r0, 0x1e0(r31)
	mr       r3, r31
	lfs      f1, lbl_8051C938@sda21(r2)
	li       r4, 5
	ori      r0, r0, 4
	lfs      f0, lbl_8051C958@sda21(r2)
	stw      r0, 0x1e0(r31)
	li       r5, 0
	stfs     f1, 0x1d4(r31)
	stfs     f1, 0x1d8(r31)
	stfs     f1, 0x1dc(r31)
	stfs     f0, 0x2c8(r31)
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
 * Address:	802D237C
 * Size:	0001DC
 */
void OniKurage::StateMove::exec(Game::EnemyBase*)
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
	bl       getMovePitchOffset__Q34Game9OniKurage3ObjFv
	lfs      f2, lbl_8051C938@sda21(r2)
	mr       r3, r31
	bl       setHeightVelocity__Q34Game9OniKurage3ObjFff
	fmr      f31, f1
	mr       r3, r31
	bl       getSearchedTarget__Q34Game9OniKurage3ObjFf
	or.      r4, r3, r3
	beq      lbl_802D2404
	fmr      f1, f31
	mr       r3, r31
	bl       isSuck__Q34Game9OniKurage3ObjFfPQ24Game8Creature
	clrlwi.  r0, r3, 0x18
	beq      lbl_802D23F0
	li       r0, 4
	mr       r3, r31
	stw      r0, 0x2c0(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv
	b        lbl_802D2498

lbl_802D23F0:
	li       r0, 3
	mr       r3, r31
	stw      r0, 0x2c0(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv
	b        lbl_802D2498

lbl_802D2404:
	mr       r4, r31
	addi     r3, r1, 8
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0x2d4(r31)
	lfs      f5, 0x2d8(r31)
	lfs      f2, 0x2d0(r31)
	lfs      f0, lbl_8051C960@sda21(r2)
	stfs     f2, 0x14(r1)
	lfs      f3, 8(r1)
	stfs     f1, 0x18(r1)
	lfs      f4, 0x10(r1)
	stfs     f5, 0x1c(r1)
	lfs      f1, 0x2c4(r31)
	fcmpo    cr0, f1, f0
	bgt      lbl_802D2468
	fsubs    f1, f4, f5
	lfs      f0, lbl_8051C964@sda21(r2)
	fsubs    f2, f3, f2
	fmuls    f1, f1, f1
	fmadds   f1, f2, f2, f1
	fcmpo    cr0, f1, f0
	bge      lbl_802D247C

lbl_802D2468:
	li       r0, 1
	mr       r3, r31
	stw      r0, 0x2c0(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv
	b        lbl_802D2498

lbl_802D247C:
	lwz      r5, 0xc0(r31)
	mr       r3, r31
	addi     r4, r1, 0x14
	lfs      f1, 0x2e4(r5)
	lfs      f2, 0x30c(r5)
	lfs      f3, 0x334(r5)
	bl "walkToTarget__Q24Game9EnemyFuncFPQ24Game9EnemyBaseR10Vector3<f>fff"

lbl_802D2498:
	mr       r3, r31
	bl       getFlyingNextState__Q34Game9OniKurage3ObjFv
	or.      r5, r3, r3
	blt      lbl_802D24C8
	lwz      r12, 0(r30)
	mr       r3, r30
	mr       r4, r31
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_802D2538

lbl_802D24C8:
	mr       r3, r31
	bl       isFinishMotion__Q24Game9EnemyBaseFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_802D24E8
	lfs      f0, lbl_8051C938@sda21(r2)
	stfs     f0, 0x1d4(r31)
	stfs     f0, 0x1d8(r31)
	stfs     f0, 0x1dc(r31)

lbl_802D24E8:
	lwz      r3, sys@sda21(r13)
	lfs      f1, 0x2c4(r31)
	lfs      f0, 0x54(r3)
	fadds    f0, f1, f0
	stfs     f0, 0x2c4(r31)
	lwz      r3, 0x188(r31)
	lbz      r0, 0x24(r3)
	cmplwi   r0, 0
	beq      lbl_802D2538
	lwz      r0, 0x1c(r3)
	cmplwi   r0, 0x3e8
	bne      lbl_802D2538
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r6, 0
	lwz      r5, 0x2c0(r31)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_802D2538:
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
 * Address:	802D2558
 * Size:	000004
 */
void OniKurage::StateMove::cleanup(Game::EnemyBase*) { }

/*
 * --INFO--
 * Address:	802D255C
 * Size:	00006C
 */
void OniKurage::StateChase::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	li       r0, -1
	stw      r31, 0xc(r1)
	mr       r31, r4
	mr       r3, r31
	lwz      r4, 0x1e0(r4)
	ori      r4, r4, 4
	stw      r4, 0x1e0(r31)
	stw      r0, 0x2c0(r31)
	bl       setEmotionExcitement__Q24Game9EnemyBaseFv
	lfs      f1, lbl_8051C938@sda21(r2)
	mr       r3, r31
	lfs      f0, lbl_8051C958@sda21(r2)
	li       r4, 5
	stfs     f1, 0x1d4(r31)
	li       r5, 0
	stfs     f1, 0x1d8(r31)
	stfs     f1, 0x1dc(r31)
	stfs     f0, 0x2c8(r31)
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
 * Address:	802D25C8
 * Size:	00015C
 */
void OniKurage::StateChase::exec(Game::EnemyBase*)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stfd     f31, 0x20(r1)
	psq_st   f31, 40(r1), 0, qr0
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r31, r4
	mr       r29, r3
	mr       r3, r31
	bl       getMovePitchOffset__Q34Game9OniKurage3ObjFv
	lfs      f2, lbl_8051C938@sda21(r2)
	mr       r3, r31
	bl       setHeightVelocity__Q34Game9OniKurage3ObjFff
	fmr      f31, f1
	mr       r3, r31
	bl       getSearchedTarget__Q34Game9OniKurage3ObjFf
	or.      r30, r3, r3
	beq      lbl_802D2664
	fmr      f1, f31
	mr       r3, r31
	mr       r4, r30
	bl       isSuck__Q34Game9OniKurage3ObjFfPQ24Game8Creature
	clrlwi.  r0, r3, 0x18
	beq      lbl_802D2644
	li       r0, 4
	mr       r3, r31
	stw      r0, 0x2c0(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv
	b        lbl_802D2674

lbl_802D2644:
	lwz      r5, 0xc0(r31)
	mr       r3, r31
	mr       r4, r30
	lfs      f1, 0x2e4(r5)
	lfs      f2, 0x30c(r5)
	lfs      f3, 0x334(r5)
	bl walkToTarget__Q24Game9EnemyFuncFPQ24Game9EnemyBasePQ24Game8Creaturefff b
lbl_802D2674

lbl_802D2664:
	li       r0, 2
	mr       r3, r31
	stw      r0, 0x2c0(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv

lbl_802D2674:
	mr       r3, r31
	bl       getFlyingNextState__Q34Game9OniKurage3ObjFv
	or.      r5, r3, r3
	blt      lbl_802D26A4
	lwz      r12, 0(r29)
	mr       r3, r29
	mr       r4, r31
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_802D2700

lbl_802D26A4:
	mr       r3, r31
	bl       isFinishMotion__Q24Game9EnemyBaseFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_802D26C4
	lfs      f0, lbl_8051C938@sda21(r2)
	stfs     f0, 0x1d4(r31)
	stfs     f0, 0x1d8(r31)
	stfs     f0, 0x1dc(r31)

lbl_802D26C4:
	lwz      r3, 0x188(r31)
	lbz      r0, 0x24(r3)
	cmplwi   r0, 0
	beq      lbl_802D2700
	lwz      r0, 0x1c(r3)
	cmplwi   r0, 0x3e8
	bne      lbl_802D2700
	mr       r3, r29
	mr       r4, r31
	lwz      r12, 0(r29)
	li       r6, 0
	lwz      r5, 0x2c0(r31)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_802D2700:
	psq_l    f31, 40(r1), 0, qr0
	lwz      r0, 0x34(r1)
	lfd      f31, 0x20(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	802D2724
 * Size:	000024
 */
void OniKurage::StateChase::cleanup(Game::EnemyBase*)
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
 * Address:	802D2748
 * Size:	000080
 */
void OniKurage::StateAttack::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r5, -1
	lfs      f0, lbl_8051C938@sda21(r2)
	stw      r0, 0x14(r1)
	li       r0, 0
	stw      r31, 0xc(r1)
	mr       r31, r4
	mr       r3, r31
	lwz      r4, 0x1e0(r4)
	ori      r4, r4, 4
	stw      r4, 0x1e0(r31)
	stw      r5, 0x2c0(r31)
	stfs     f0, 0x2c4(r31)
	stw      r0, 0x2e0(r31)
	stb      r0, 0x2dc(r31)
	lwz      r0, 0x1e0(r31)
	rlwinm   r0, r0, 0, 0x1a, 0x18
	stw      r0, 0x1e0(r31)
	stfs     f0, 0x1d4(r31)
	stfs     f0, 0x1d8(r31)
	stfs     f0, 0x1dc(r31)
	bl       setEmotionExcitement__Q24Game9EnemyBaseFv
	mr       r3, r31
	li       r4, 9
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
 * Address:	802D27C8
 * Size:	000320
 */
void OniKurage::StateAttack::exec(Game::EnemyBase*)
{
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	stfd     f31, 0x40(r1)
	psq_st   f31, 72(r1), 0, qr0
	stw      r31, 0x3c(r1)
	stw      r30, 0x38(r1)
	lfs      f0, lbl_8051C938@sda21(r2)
	mr       r31, r4
	lfs      f1, 0x200(r4)
	mr       r30, r3
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	beq      lbl_802D2810
	mr       r3, r31
	bl       isFinishNaviSuck__Q34Game9OniKurage3ObjFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_802D284C

lbl_802D2810:
	mr       r3, r31
	bl       isNaviSucked__Q34Game9OniKurage3ObjFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_802D2844
	lwz      r3, 0xc0(r31)
	lfs      f1, 0x2c4(r31)
	lfs      f0, 0x894(r3)
	fcmpo    cr0, f1, f0
	bgt      lbl_802D2844
	lfs      f1, 0x2cc(r31)
	lfs      f0, 0x8e4(r3)
	fcmpo    cr0, f1, f0
	ble      lbl_802D284C

lbl_802D2844:
	mr       r3, r31
	bl       finishMotion__Q24Game9EnemyBaseFv

lbl_802D284C:
	mr       r3, r31
	bl       getAttackPitchOffset__Q34Game9OniKurage3ObjFv
	lfs      f2, lbl_8051C938@sda21(r2)
	mr       r3, r31
	bl       setHeightVelocity__Q34Game9OniKurage3ObjFff
	lbz      r0, 0x2dc(r31)
	fmr      f31, f1
	cmplwi   r0, 0
	beq      lbl_802D2904
	mr       r3, r31
	bl       suckPikmin__Q34Game9OniKurage3ObjFf
	clrlwi.  r0, r3, 0x18
	beq      lbl_802D289C
	mr       r3, r31
	bl       isFinishNaviSuck__Q34Game9OniKurage3ObjFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_802D28B8
	mr       r3, r31
	bl       finishMotion__Q24Game9EnemyBaseFv
	b        lbl_802D28B8

lbl_802D289C:
	mr       r3, r31
	bl       isFinishMotion__Q24Game9EnemyBaseFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_802D28B8
	fmr      f1, f31
	mr       r3, r31
	bl       suckNavi__Q34Game9OniKurage3ObjFf

lbl_802D28B8:
	mr       r4, r31
	addi     r3, r1, 0x14
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0x18(r1)
	mr       r3, r31
	lfs      f2, 0x14(r1)
	addi     r4, r1, 0x2c
	fsubs    f0, f1, f31
	stfs     f1, 0x30(r1)
	lfs      f1, 0x1c(r1)
	stfs     f2, 0x2c(r1)
	stfs     f1, 0x34(r1)
	stfs     f0, 0x30(r1)
	bl       "updateSuckEffect__Q34Game9OniKurage3ObjFR10Vector3<f>"
	mr       r3, r31
	bl       updateCollPartOffset__Q34Game9OniKurage3ObjFv

lbl_802D2904:
	lwz      r3, sys@sda21(r13)
	lfs      f1, 0x2c4(r31)
	lfs      f0, 0x54(r3)
	fadds    f0, f1, f0
	stfs     f0, 0x2c4(r31)
	lwz      r3, 0x188(r31)
	lbz      r0, 0x24(r3)
	cmplwi   r0, 0
	beq      lbl_802D2AC8
	lwz      r0, 0x1c(r3)
	cmplwi   r0, 2
	bne      lbl_802D2990
	mr       r4, r31
	addi     r3, r1, 8
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0xc(r1)
	mr       r3, r31
	lfs      f2, 8(r1)
	addi     r4, r1, 0x20
	fsubs    f0, f1, f31
	stfs     f1, 0x24(r1)
	lfs      f1, 0x10(r1)
	stfs     f2, 0x20(r1)
	stfs     f1, 0x28(r1)
	stfs     f0, 0x24(r1)
	bl       "startSuckEffect__Q34Game9OniKurage3ObjFR10Vector3<f>"
	li       r0, 1
	stb      r0, 0x2dc(r31)
	lwz      r0, 0x1e0(r31)
	oris     r0, r0, 0x20
	stw      r0, 0x1e0(r31)
	b        lbl_802D2AC8

lbl_802D2990:
	cmplwi   r0, 1
	bne      lbl_802D29C8
	mr       r3, r31
	bl       isFinishMotion__Q24Game9EnemyBaseFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_802D2AC8
	mr       r3, r31
	bl       finishSuckEffect__Q34Game9OniKurage3ObjFv
	li       r0, 0
	stb      r0, 0x2dc(r31)
	lwz      r0, 0x1e0(r31)
	rlwinm   r0, r0, 0, 0xb, 9
	stw      r0, 0x1e0(r31)
	b        lbl_802D2AC8

lbl_802D29C8:
	cmplwi   r0, 0x3e8
	bne      lbl_802D2AC8
	lfs      f1, 0x200(r31)
	lfs      f0, lbl_8051C938@sda21(r2)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_802D2A08
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_802D2AC8

lbl_802D2A08:
	mr       r3, r31
	bl       isNaviSucked__Q34Game9OniKurage3ObjFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_802D2A3C
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 6
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_802D2AC8

lbl_802D2A3C:
	mr       r3, r31
	bl       getFlyingNextState__Q34Game9OniKurage3ObjFv
	or.      r5, r3, r3
	blt      lbl_802D2A6C
	lwz      r12, 0(r30)
	mr       r3, r30
	mr       r4, r31
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_802D2AC8

lbl_802D2A6C:
	fmr      f1, f31
	mr       r3, r31
	li       r4, 0
	bl       isSuck__Q34Game9OniKurage3ObjFfPQ24Game8Creature
	clrlwi.  r0, r3, 0x18
	beq      lbl_802D2AA8
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 4
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_802D2AC8

lbl_802D2AA8:
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 1
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_802D2AC8:
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
 * Address:	802D2AE8
 * Size:	000044
 */
void OniKurage::StateAttack::cleanup(Game::EnemyBase*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r3, r4
	stw      r0, 0x14(r1)
	li       r0, 0
	stb      r0, 0x2dc(r4)
	lwz      r0, 0x1e0(r4)
	rlwinm   r0, r0, 0, 0xb, 9
	stw      r0, 0x1e0(r4)
	lwz      r0, 0x1e0(r4)
	ori      r0, r0, 0x40
	stw      r0, 0x1e0(r4)
	bl       setEmotionCaution__Q24Game9EnemyBaseFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802D2B2C
 * Size:	000068
 */
void OniKurage::StateFall::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lfs      f0, lbl_8051C938@sda21(r2)
	stw      r0, 0x14(r1)
	li       r0, -1
	stw      r31, 0xc(r1)
	mr       r31, r4
	mr       r3, r31
	stw      r0, 0x2c0(r4)
	stfs     f0, 0x2c4(r4)
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
 * Address:	802D2B94
 * Size:	000180
 */
void OniKurage::StateFall::exec(Game::EnemyBase*)
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
	lwz      r12, 0(r31)
	mr       r3, r31
	lwz      r12, 0xcc(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802D2C6C
	lfs      f31, 0x2c4(r31)
	mr       r3, r31
	fmr      f1, f31
	bl       getFallPitchOffset__Q34Game9OniKurage3ObjFf
	lfs      f2, lbl_8051C938@sda21(r2)
	mr       r3, r31
	bl       setHeightVelocity__Q34Game9OniKurage3ObjFff
	lfs      f1, lbl_8051C93C@sda21(r2)
	lfs      f0, lbl_8051C940@sda21(r2)
	fmuls    f1, f31, f1
	fcmpo    cr0, f1, f0
	ble      lbl_802D2C6C
	mr       r4, r31
	addi     r3, r1, 8
	lwz      r12, 0(r31)
	lwz      r12, 0x6c(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0xc(r1)
	mr       r3, r31
	lfs      f0, lbl_8051C950@sda21(r2)
	addi     r4, r1, 0x14
	lfs      f3, 8(r1)
	lfs      f1, 0x10(r1)
	fsubs    f0, f2, f0
	stfs     f2, 0x18(r1)
	stfs     f3, 0x14(r1)
	stfs     f1, 0x1c(r1)
	stfs     f0, 0x18(r1)
	lwz      r12, 0(r31)
	lwz      r12, 0x68(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x1e0(r31)
	mr       r3, r31
	rlwinm   r0, r0, 0, 0x1e, 0x1c
	stw      r0, 0x1e0(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv

lbl_802D2C6C:
	lwz      r3, sys@sda21(r13)
	lfs      f1, 0x2c4(r31)
	lfs      f0, 0x54(r3)
	fadds    f0, f1, f0
	stfs     f0, 0x2c4(r31)
	lwz      r3, 0x188(r31)
	lbz      r0, 0x24(r3)
	cmplwi   r0, 0
	beq      lbl_802D2CF4
	lwz      r0, 0x1c(r3)
	cmplwi   r0, 0x3e8
	bne      lbl_802D2CF4
	lfs      f1, 0x200(r31)
	lfs      f0, lbl_8051C938@sda21(r2)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_802D2CD4
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_802D2CF4

lbl_802D2CD4:
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 7
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_802D2CF4:
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
 * Address:	802D2D14
 * Size:	000024
 */
void OniKurage::StateFall::cleanup(Game::EnemyBase*)
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
 * Address:	802D2D38
 * Size:	000094
 */
void OniKurage::StateDrop::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lfs      f0, lbl_8051C938@sda21(r2)
	stw      r0, 0x14(r1)
	li       r0, -1
	stw      r31, 0xc(r1)
	mr       r31, r4
	mr       r3, r31
	stw      r0, 0x2c0(r4)
	stfs     f0, 0x2c4(r4)
	lwz      r0, 0x1e0(r4)
	rlwinm   r0, r0, 0, 0x1e, 0x1c
	stw      r0, 0x1e0(r4)
	stfs     f0, 0x1d4(r4)
	stfs     f0, 0x1d8(r4)
	stfs     f0, 0x1dc(r4)
	bl       setEmotionExcitement__Q24Game9EnemyBaseFv
	mr       r3, r31
	li       r4, 8
	li       r5, 0
	bl       startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0xf4(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	li       r4, 0x5912
	li       r5, 0
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802D2DCC
 * Size:	000164
 */
void OniKurage::StateDrop::exec(Game::EnemyBase*)
{
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	stfd     f31, 0x40(r1)
	psq_st   f31, 72(r1), 0, qr0
	stw      r31, 0x3c(r1)
	stw      r30, 0x38(r1)
	lwz      r12, 0(r4)
	mr       r30, r3
	addi     r3, r1, 0x14
	mr       r31, r4
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
	lfs      f0, lbl_8051C968@sda21(r2)
	fsubs    f1, f2, f1
	fcmpo    cr0, f1, f0
	blt      lbl_802D2E80
	lfs      f0, lbl_8051C938@sda21(r2)
	fcmpo    cr0, f31, f0
	bgt      lbl_802D2E80
	lfs      f1, 0x2c4(r31)
	lfs      f0, lbl_8051C95C@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_802D2E88

lbl_802D2E80:
	mr       r3, r31
	bl       finishMotion__Q24Game9EnemyBaseFv

lbl_802D2E88:
	lwz      r3, sys@sda21(r13)
	lfs      f1, 0x2c4(r31)
	lfs      f0, 0x54(r3)
	fadds    f0, f1, f0
	stfs     f0, 0x2c4(r31)
	lwz      r3, 0x188(r31)
	lbz      r0, 0x24(r3)
	cmplwi   r0, 0
	beq      lbl_802D2F10
	lwz      r0, 0x1c(r3)
	cmplwi   r0, 0x3e8
	bne      lbl_802D2F10
	lfs      f1, 0x200(r31)
	lfs      f0, lbl_8051C938@sda21(r2)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_802D2EF0
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_802D2F10

lbl_802D2EF0:
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 7
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_802D2F10:
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
 * Address:	802D2F30
 * Size:	000024
 */
void OniKurage::StateDrop::cleanup(Game::EnemyBase*)
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
 * Address:	802D2F54
 * Size:	0000C0
 */
void OniKurage::StateLand::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	lfs      f0, lbl_8051C938@sda21(r2)
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	mr       r31, r4
	mr       r3, r31
	stfs     f0, 0x2c4(r4)
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
	bl       createDownEffect__Q34Game9OniKurage3ObjFv
	mr       r4, r31
	addi     r3, r1, 8
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 8(r1)
	addi     r5, r1, 0x14
	lfs      f1, 0xc(r1)
	li       r4, 6
	lfs      f0, 0x10(r1)
	li       r6, 2
	stfs     f2, 0x14(r1)
	lwz      r3, cameraMgr__4Game@sda21(r13)
	stfs     f1, 0x18(r1)
	stfs     f0, 0x1c(r1)
	bl       "startVibration__Q24Game9CameraMgrFiR10Vector3<f>i"
	lwz      r3, rumbleMgr__4Game@sda21(r13)
	addi     r5, r1, 0x14
	li       r4, 9
	li       r6, 2
	bl       "startRumble__Q24Game9RumbleMgrFiR10Vector3<f>i"
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	802D3014
 * Size:	000080
 */
void OniKurage::StateLand::exec(Game::EnemyBase*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r5, 0x188(r4)
	lbz      r0, 0x24(r5)
	cmplwi   r0, 0
	beq      lbl_802D3084
	lwz      r0, 0x1c(r5)
	cmplwi   r0, 0x3e8
	bne      lbl_802D3084
	lfs      f1, 0x200(r4)
	lfs      f0, lbl_8051C938@sda21(r2)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_802D306C
	lwz      r12, 0(r3)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_802D3084

lbl_802D306C:
	lwz      r12, 0(r3)
	li       r5, 8
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_802D3084:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802D3094
 * Size:	000024
 */
void OniKurage::StateLand::cleanup(Game::EnemyBase*)
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
 * Address:	802D30B8
 * Size:	000068
 */
void OniKurage::StateTakeOff::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lfs      f0, lbl_8051C938@sda21(r2)
	stw      r0, 0x14(r1)
	li       r0, -1
	stw      r31, 0xc(r1)
	mr       r31, r4
	mr       r3, r31
	stw      r0, 0x2c0(r4)
	stfs     f0, 0x2c4(r4)
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
 * Address:	802D3120
 * Size:	0000F0
 */
void OniKurage::StateTakeOff::exec(Game::EnemyBase*)
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
	beq      lbl_802D316C
	mr       r3, r31
	bl       getTakeOffPitchOffset__Q34Game9OniKurage3ObjFv
	lfs      f2, lbl_8051C938@sda21(r2)
	mr       r3, r31
	bl       setHeightVelocity__Q34Game9OniKurage3ObjFff

lbl_802D316C:
	lwz      r3, 0x188(r31)
	lbz      r0, 0x24(r3)
	cmplwi   r0, 0
	beq      lbl_802D31F8
	lwz      r0, 0x1c(r3)
	cmplwi   r0, 2
	bne      lbl_802D3198
	lwz      r0, 0x1e0(r31)
	ori      r0, r0, 4
	stw      r0, 0x1e0(r31)
	b        lbl_802D31F8

lbl_802D3198:
	cmplwi   r0, 0x3e8
	bne      lbl_802D31F8
	lfs      f1, 0x200(r31)
	lfs      f0, lbl_8051C938@sda21(r2)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_802D31D8
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_802D31F8

lbl_802D31D8:
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 1
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_802D31F8:
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
 * Address:	802D3210
 * Size:	000024
 */
void OniKurage::StateTakeOff::cleanup(Game::EnemyBase*)
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
 * Address:	802D3234
 * Size:	000060
 */
void OniKurage::StateGround::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lfs      f0, lbl_8051C938@sda21(r2)
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	mr       r3, r31
	stfs     f0, 0x2c4(r4)
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
 * Address:	802D3294
 * Size:	000138
 */
void OniKurage::StateGround::exec(Game::EnemyBase*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lfs      f0, lbl_8051C938@sda21(r2)
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	lfs      f1, 0x200(r4)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	beq      lbl_802D32E4
	lwz      r0, 0x1f4(r31)
	cmpwi    r0, 0
	beq      lbl_802D32E4
	lwz      r3, 0xc0(r31)
	lfs      f1, 0x2c4(r31)
	lfs      f0, 0x86c(r3)
	fcmpo    cr0, f1, f0
	ble      lbl_802D32EC

lbl_802D32E4:
	mr       r3, r31
	bl       finishMotion__Q24Game9EnemyBaseFv

lbl_802D32EC:
	lwz      r3, sys@sda21(r13)
	lfs      f1, 0x2c4(r31)
	lfs      f0, 0x54(r3)
	fadds    f0, f1, f0
	stfs     f0, 0x2c4(r31)
	lwz      r3, 0x188(r31)
	lbz      r0, 0x24(r3)
	cmplwi   r0, 0
	beq      lbl_802D33B4
	lwz      r0, 0x1c(r3)
	cmplwi   r0, 0x3e8
	bne      lbl_802D33B4
	lfs      f1, 0x200(r31)
	lfs      f0, lbl_8051C938@sda21(r2)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_802D3354
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_802D33B4

lbl_802D3354:
	lwz      r0, 0x1f4(r31)
	cmpwi    r0, 0
	bne      lbl_802D3370
	mr       r3, r31
	bl       isNaviSucked__Q34Game9OniKurage3ObjFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_802D3394

lbl_802D3370:
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 0xb
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_802D33B4

lbl_802D3394:
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 9
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_802D33B4:
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
 * Address:	802D33CC
 * Size:	000024
 */
void OniKurage::StateGround::cleanup(Game::EnemyBase*)
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
 * Address:	802D33F0
 * Size:	0000E0
 */
void OniKurage::StateFlyFlick::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	lfs      f0, lbl_8051C938@sda21(r2)
	stw      r0, 0x44(r1)
	li       r0, -1
	stw      r31, 0x3c(r1)
	mr       r31, r4
	mr       r3, r31
	lwz      r4, 0x1e0(r4)
	ori      r4, r4, 4
	stw      r4, 0x1e0(r31)
	stw      r0, 0x2c0(r31)
	stfs     f0, 0x1d4(r31)
	stfs     f0, 0x1d8(r31)
	stfs     f0, 0x1dc(r31)
	bl       setEmotionExcitement__Q24Game9EnemyBaseFv
	mr       r3, r31
	li       r4, 2
	li       r5, 0
	bl       startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
	mr       r4, r31
	addi     r3, r1, 8
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lis      r4, __vt__Q23efx5TBase@ha
	lis      r3, __vt__Q23efx8TSimple1@ha
	addi     r0, r4, __vt__Q23efx5TBase@l
	lfs      f2, 8(r1)
	stw      r0, 0x14(r1)
	addi     r0, r3, __vt__Q23efx8TSimple1@l
	lfs      f1, 0xc(r1)
	lis      r4, __vt__Q23efx3Arg@ha
	lfs      f0, 0x10(r1)
	lis      r3, __vt__Q23efx12TKurageFlick@ha
	addi     r4, r4, __vt__Q23efx3Arg@l
	li       r6, 0xd6
	li       r5, 0
	stw      r0, 0x14(r1)
	addi     r0, r3, __vt__Q23efx12TKurageFlick@l
	addi     r3, r1, 0x14
	stw      r4, 0x20(r1)
	addi     r4, r1, 0x20
	stfs     f2, 0x24(r1)
	stfs     f1, 0x28(r1)
	stfs     f0, 0x2c(r1)
	sth      r6, 0x18(r1)
	stw      r5, 0x1c(r1)
	stw      r0, 0x14(r1)
	bl       create__Q23efx8TSimple1FPQ23efx3Arg
	lwz      r0, 0x44(r1)
	lwz      r31, 0x3c(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	802D34D0
 * Size:	00017C
 */
void OniKurage::StateFlyFlick::exec(Game::EnemyBase*)
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
	bl       getFlickPitchOffset__Q34Game9OniKurage3ObjFv
	lfs      f2, lbl_8051C938@sda21(r2)
	mr       r3, r31
	bl       setHeightVelocity__Q34Game9OniKurage3ObjFff
	lwz      r3, 0x188(r31)
	fmr      f31, f1
	lbz      r0, 0x24(r3)
	cmplwi   r0, 0
	beq      lbl_802D362C
	lwz      r0, 0x1c(r3)
	cmplwi   r0, 2
	bne      lbl_802D3598
	lwz      r5, 0xc0(r31)
	mr       r3, r31
	lfs      f4, lbl_8051C954@sda21(r2)
	li       r4, 0
	lfs      f1, 0x53c(r5)
	lfs      f2, 0x4c4(r5)
	lfs      f3, 0x4ec(r5)
	bl
"flickStickPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Piki>"
	lfs      f0, lbl_8051C938@sda21(r2)
	mr       r4, r31
	addi     r3, r1, 8
	stfs     f0, 0x20c(r31)
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 8(r1)
	addi     r5, r1, 0x14
	lfs      f1, 0xc(r1)
	li       r4, 0xc
	lfs      f0, 0x10(r1)
	li       r6, 2
	stfs     f2, 0x14(r1)
	lwz      r3, rumbleMgr__4Game@sda21(r13)
	stfs     f1, 0x18(r1)
	stfs     f0, 0x1c(r1)
	bl       "startRumble__Q24Game9RumbleMgrFiR10Vector3<f>i"
	b        lbl_802D362C

lbl_802D3598:
	cmplwi   r0, 0x3e8
	bne      lbl_802D362C
	mr       r3, r31
	bl       getFlyingNextState__Q34Game9OniKurage3ObjFv
	or.      r5, r3, r3
	blt      lbl_802D35D0
	lwz      r12, 0(r30)
	mr       r3, r30
	mr       r4, r31
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_802D362C

lbl_802D35D0:
	fmr      f1, f31
	mr       r3, r31
	li       r4, 0
	bl       isSuck__Q34Game9OniKurage3ObjFfPQ24Game8Creature
	clrlwi.  r0, r3, 0x18
	beq      lbl_802D360C
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 4
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_802D362C

lbl_802D360C:
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 1
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_802D362C:
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
 * Address:	802D364C
 * Size:	000024
 */
void OniKurage::StateFlyFlick::cleanup(Game::EnemyBase*)
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
 * Address:	802D3670
 * Size:	0000DC
 */
void OniKurage::StateGroundFlick::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	lfs      f0, lbl_8051C938@sda21(r2)
	stw      r0, 0x44(r1)
	stw      r31, 0x3c(r1)
	mr       r31, r4
	mr       r3, r31
	stfs     f0, 0x2c4(r4)
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
	mr       r4, r31
	addi     r3, r1, 8
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lis      r4, __vt__Q23efx5TBase@ha
	lis      r3, __vt__Q23efx8TSimple1@ha
	addi     r0, r4, __vt__Q23efx5TBase@l
	lfs      f2, 8(r1)
	stw      r0, 0x14(r1)
	addi     r0, r3, __vt__Q23efx8TSimple1@l
	lfs      f1, 0xc(r1)
	lis      r4, __vt__Q23efx3Arg@ha
	lfs      f0, 0x10(r1)
	lis      r3, __vt__Q23efx12TKurageFlick@ha
	addi     r4, r4, __vt__Q23efx3Arg@l
	li       r6, 0xd6
	li       r5, 0
	stw      r0, 0x14(r1)
	addi     r0, r3, __vt__Q23efx12TKurageFlick@l
	addi     r3, r1, 0x14
	stw      r4, 0x20(r1)
	addi     r4, r1, 0x20
	stfs     f2, 0x24(r1)
	stfs     f1, 0x28(r1)
	stfs     f0, 0x2c(r1)
	sth      r6, 0x18(r1)
	stw      r5, 0x1c(r1)
	stw      r0, 0x14(r1)
	bl       create__Q23efx8TSimple1FPQ23efx3Arg
	lwz      r0, 0x44(r1)
	lwz      r31, 0x3c(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	802D374C
 * Size:	00018C
 */
void OniKurage::StateGroundFlick::exec(Game::EnemyBase*)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	mr       r31, r4
	stw      r30, 0x28(r1)
	mr       r30, r3
	mr       r3, r31
	bl       getMotionFrame__Q24Game9EnemyBaseFv
	lfs      f0, lbl_8051C968@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_802D3788
	mr       r3, r31
	li       r4, 0
	bl       flickStickNavi__Q34Game9OniKurage3ObjFb

lbl_802D3788:
	lwz      r3, 0x188(r31)
	lbz      r0, 0x24(r3)
	cmplwi   r0, 0
	beq      lbl_802D38C0
	lwz      r0, 0x1c(r3)
	cmplwi   r0, 2
	bne      lbl_802D37EC
	mr       r4, r31
	addi     r3, r1, 8
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 8(r1)
	addi     r5, r1, 0x14
	lfs      f1, 0xc(r1)
	li       r4, 0xc
	lfs      f0, 0x10(r1)
	li       r6, 2
	stfs     f2, 0x14(r1)
	lwz      r3, rumbleMgr__4Game@sda21(r13)
	stfs     f1, 0x18(r1)
	stfs     f0, 0x1c(r1)
	bl       "startRumble__Q24Game9RumbleMgrFiR10Vector3<f>i"
	b        lbl_802D38C0

lbl_802D37EC:
	cmplwi   r0, 3
	bne      lbl_802D3860
	lwz      r5, 0xc0(r31)
	mr       r3, r31
	lfs      f4, lbl_8051C954@sda21(r2)
	li       r4, 0
	lfs      f1, 0x514(r5)
	lfs      f2, 0x4c4(r5)
	lfs      f3, 0x4ec(r5)
	bl
"flickNearbyNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Navi>"
	lwz      r5, 0xc0(r31)
	mr       r3, r31
	lfs      f4, lbl_8051C954@sda21(r2)
	li       r4, 0
	lfs      f1, 0x514(r5)
	lfs      f2, 0x4c4(r5)
	lfs      f3, 0x4ec(r5)
	bl
"flickNearbyPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Piki>"
	lwz      r5, 0xc0(r31)
	mr       r3, r31
	lfs      f4, lbl_8051C954@sda21(r2)
	li       r4, 0
	lfs      f1, 0x53c(r5)
	lfs      f2, 0x4c4(r5)
	lfs      f3, 0x4ec(r5)
	bl
"flickStickPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Piki>"
	lfs      f0, lbl_8051C938@sda21(r2)
	stfs     f0, 0x20c(r31)
	b        lbl_802D38C0

lbl_802D3860:
	cmplwi   r0, 0x3e8
	bne      lbl_802D38C0
	lfs      f1, 0x200(r31)
	lfs      f0, lbl_8051C938@sda21(r2)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_802D38A0
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_802D38C0

lbl_802D38A0:
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 9
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_802D38C0:
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	802D38D8
 * Size:	000024
 */
void OniKurage::StateGroundFlick::cleanup(Game::EnemyBase*)
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

/*
 * --INFO--
 * Address:	802D38FC
 * Size:	000028
 */
void __sinit_OniKurageState_cpp(void)
{
	/*
	lis      r4, __float_nan@ha
	li       r0, -1
	lfs      f0, __float_nan@l(r4)
	lis      r3, lbl_804D27A8@ha
	stw      r0, lbl_80515DC8@sda21(r13)
	stfsu    f0, lbl_804D27A8@l(r3)
	stfs     f0, lbl_80515DCC@sda21(r13)
	stfs     f0, 4(r3)
	stfs     f0, 8(r3)
	blr
	*/
}
