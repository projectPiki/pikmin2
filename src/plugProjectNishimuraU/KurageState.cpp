#include "types.h"

/*
    Generated from dpostproc

    .section .ctors, "wa"  # 0x80472F00 - 0x804732C0
    .4byte __sinit_KurageState_cpp

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_80489A20
    lbl_80489A20:
        .asciz "flyflick"
        .skip 3
    .global lbl_80489A2C
    lbl_80489A2C:
        .asciz "groundflick"

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global lbl_804CDEE8
    lbl_804CDEE8:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
    .global __vt__Q34Game6Kurage16StateGroundFlick
    __vt__Q34Game6Kurage16StateGroundFlick:
        .4byte 0
        .4byte 0
        .4byte
   init__Q34Game6Kurage16StateGroundFlickFPQ24Game9EnemyBasePQ24Game8StateArg
        .4byte exec__Q34Game6Kurage16StateGroundFlickFPQ24Game9EnemyBase
        .4byte cleanup__Q34Game6Kurage16StateGroundFlickFPQ24Game9EnemyBase
        .4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
        .4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
        .4byte
   transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg .4byte
   doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics .global
   __vt__Q23efx15TNewkurageFlick
    __vt__Q23efx15TNewkurageFlick:
        .4byte 0
        .4byte 0
        .4byte create__Q23efx8TSimple1FPQ23efx3Arg
        .4byte forceKill__Q23efx8TSimple1Fv
        .4byte fade__Q23efx8TSimple1Fv
    .global __vt__Q34Game6Kurage13StateFlyFlick
    __vt__Q34Game6Kurage13StateFlyFlick:
        .4byte 0
        .4byte 0
        .4byte
   init__Q34Game6Kurage13StateFlyFlickFPQ24Game9EnemyBasePQ24Game8StateArg
        .4byte exec__Q34Game6Kurage13StateFlyFlickFPQ24Game9EnemyBase
        .4byte cleanup__Q34Game6Kurage13StateFlyFlickFPQ24Game9EnemyBase
        .4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
        .4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
        .4byte
   transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg .4byte
   doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics .global
   __vt__Q34Game6Kurage11StateGround
    __vt__Q34Game6Kurage11StateGround:
        .4byte 0
        .4byte 0
        .4byte
   init__Q34Game6Kurage11StateGroundFPQ24Game9EnemyBasePQ24Game8StateArg .4byte
   exec__Q34Game6Kurage11StateGroundFPQ24Game9EnemyBase .4byte
   cleanup__Q34Game6Kurage11StateGroundFPQ24Game9EnemyBase .4byte
   resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase .4byte
   restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase .4byte
   transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg .4byte
   doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics .global
   __vt__Q34Game6Kurage12StateTakeOff
    __vt__Q34Game6Kurage12StateTakeOff:
        .4byte 0
        .4byte 0
        .4byte
   init__Q34Game6Kurage12StateTakeOffFPQ24Game9EnemyBasePQ24Game8StateArg .4byte
   exec__Q34Game6Kurage12StateTakeOffFPQ24Game9EnemyBase .4byte
   cleanup__Q34Game6Kurage12StateTakeOffFPQ24Game9EnemyBase .4byte
   resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase .4byte
   restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase .4byte
   transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg .4byte
   doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics .global
   __vt__Q34Game6Kurage9StateLand
    __vt__Q34Game6Kurage9StateLand:
        .4byte 0
        .4byte 0
        .4byte
   init__Q34Game6Kurage9StateLandFPQ24Game9EnemyBasePQ24Game8StateArg .4byte
   exec__Q34Game6Kurage9StateLandFPQ24Game9EnemyBase .4byte
   cleanup__Q34Game6Kurage9StateLandFPQ24Game9EnemyBase .4byte
   resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase .4byte
   restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase .4byte
   transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg .4byte
   doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics .global
   __vt__Q34Game6Kurage9StateFall
    __vt__Q34Game6Kurage9StateFall:
        .4byte 0
        .4byte 0
        .4byte
   init__Q34Game6Kurage9StateFallFPQ24Game9EnemyBasePQ24Game8StateArg .4byte
   exec__Q34Game6Kurage9StateFallFPQ24Game9EnemyBase .4byte
   cleanup__Q34Game6Kurage9StateFallFPQ24Game9EnemyBase .4byte
   resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase .4byte
   restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase .4byte
   transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg .4byte
   doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics .global
   __vt__Q34Game6Kurage11StateAttack
    __vt__Q34Game6Kurage11StateAttack:
        .4byte 0
        .4byte 0
        .4byte
   init__Q34Game6Kurage11StateAttackFPQ24Game9EnemyBasePQ24Game8StateArg .4byte
   exec__Q34Game6Kurage11StateAttackFPQ24Game9EnemyBase .4byte
   cleanup__Q34Game6Kurage11StateAttackFPQ24Game9EnemyBase .4byte
   resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase .4byte
   restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase .4byte
   transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg .4byte
   doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics .global
   __vt__Q34Game6Kurage10StateChase
    __vt__Q34Game6Kurage10StateChase:
        .4byte 0
        .4byte 0
        .4byte
   init__Q34Game6Kurage10StateChaseFPQ24Game9EnemyBasePQ24Game8StateArg .4byte
   exec__Q34Game6Kurage10StateChaseFPQ24Game9EnemyBase .4byte
   cleanup__Q34Game6Kurage10StateChaseFPQ24Game9EnemyBase .4byte
   resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase .4byte
   restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase .4byte
   transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg .4byte
   doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics .global
   __vt__Q34Game6Kurage9StateMove
    __vt__Q34Game6Kurage9StateMove:
        .4byte 0
        .4byte 0
        .4byte
   init__Q34Game6Kurage9StateMoveFPQ24Game9EnemyBasePQ24Game8StateArg .4byte
   exec__Q34Game6Kurage9StateMoveFPQ24Game9EnemyBase .4byte
   cleanup__Q34Game6Kurage9StateMoveFPQ24Game9EnemyBase .4byte
   resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase .4byte
   restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase .4byte
   transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg .4byte
   doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics .global
   __vt__Q34Game6Kurage9StateWait
    __vt__Q34Game6Kurage9StateWait:
        .4byte 0
        .4byte 0
        .4byte
   init__Q34Game6Kurage9StateWaitFPQ24Game9EnemyBasePQ24Game8StateArg .4byte
   exec__Q34Game6Kurage9StateWaitFPQ24Game9EnemyBase .4byte
   cleanup__Q34Game6Kurage9StateWaitFPQ24Game9EnemyBase .4byte
   resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase .4byte
   restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase .4byte
   transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg .4byte
   doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics .global
   __vt__Q34Game6Kurage9StateDead
    __vt__Q34Game6Kurage9StateDead:
        .4byte 0
        .4byte 0
        .4byte
   init__Q34Game6Kurage9StateDeadFPQ24Game9EnemyBasePQ24Game8StateArg .4byte
   exec__Q34Game6Kurage9StateDeadFPQ24Game9EnemyBase .4byte
   cleanup__Q34Game6Kurage9StateDeadFPQ24Game9EnemyBase .4byte
   resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase .4byte
   restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase .4byte
   transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg .4byte
   doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics .global
   __vt__Q34Game6Kurage5State
    __vt__Q34Game6Kurage5State:
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
   __vt__Q34Game6Kurage3FSM
    __vt__Q34Game6Kurage3FSM:
        .4byte 0
        .4byte 0
        .4byte init__Q34Game6Kurage3FSMFPQ24Game9EnemyBase
        .4byte
   start__Q24Game17EnemyStateMachineFPQ24Game9EnemyBaseiPQ24Game8StateArg .4byte
   exec__Q24Game17EnemyStateMachineFPQ24Game9EnemyBase .4byte
   transit__Q24Game17EnemyStateMachineFPQ24Game9EnemyBaseiPQ24Game8StateArg
        .4byte
   doDirectDraw__Q24Game17EnemyStateMachineFPQ24Game9EnemyBaseR8Graphics .4byte
   getCurrState__Q24Game17EnemyStateMachineFPQ24Game9EnemyBase .4byte
   setCurrState__Q24Game17EnemyStateMachineFPQ24Game9EnemyBasePQ24Game13EnemyFSMState
        .4byte 0

    .section .sbss # 0x80514D80 - 0x80516360
    .global lbl_80515D80
    lbl_80515D80:
        .skip 0x4
    .global lbl_80515D84
    lbl_80515D84:
        .skip 0x4

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051C020
    lbl_8051C020:
        .4byte 0x64656164
        .4byte 0x00000000
    .global lbl_8051C028
    lbl_8051C028:
        .4byte 0x77616974
        .4byte 0x00000000
    .global lbl_8051C030
    lbl_8051C030:
        .4byte 0x6D6F7665
        .4byte 0x00000000
    .global lbl_8051C038
    lbl_8051C038:
        .4byte 0x63686173
        .4byte 0x65000000
    .global lbl_8051C040
    lbl_8051C040:
        .4byte 0x61747461
        .4byte 0x636B0000
    .global lbl_8051C048
    lbl_8051C048:
        .4byte 0x66616C6C
        .4byte 0x00000000
    .global lbl_8051C050
    lbl_8051C050:
        .4byte 0x6C616E64
        .4byte 0x00000000
    .global lbl_8051C058
    lbl_8051C058:
        .4byte 0x67726F75
        .4byte 0x6E640000
    .global lbl_8051C060
    lbl_8051C060:
        .4byte 0x74616B65
        .4byte 0x6F666600
    .global lbl_8051C068
    lbl_8051C068:
        .4byte 0x00000000
    .global lbl_8051C06C
    lbl_8051C06C:
        .4byte 0x42820000
    .global lbl_8051C070
    lbl_8051C070:
        .4byte 0x41800000
    .global lbl_8051C074
    lbl_8051C074:
        .4byte 0x41700000
    .global lbl_8051C078
    lbl_8051C078:
        .4byte 0x41F00000
    .global lbl_8051C07C
    lbl_8051C07C:
        .float 1.0
    .global lbl_8051C080
    lbl_8051C080:
        .4byte 0x42C80000
    .global lbl_8051C084
    lbl_8051C084:
        .4byte 0xC47A0000
    .global lbl_8051C088
    lbl_8051C088:
        .4byte 0x40600000
    .global lbl_8051C08C
    lbl_8051C08C:
        .4byte 0x40400000
    .global lbl_8051C090
    lbl_8051C090:
        .4byte 0x41200000
    .global lbl_8051C094
    lbl_8051C094:
        .4byte 0x441C4000
    .global lbl_8051C098
    lbl_8051C098:
        .4byte 0x40A00000
    .global lbl_8051C09C
    lbl_8051C09C:
        .4byte 0x40000000
*/

namespace Game {

/*
 * --INFO--
 * Address:	802AB5F0
 * Size:	0003D0
 */
void Kurage::FSM::init(Game::EnemyBase*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r4, 0xb
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       create__Q24Game17EnemyStateMachineFi
	li       r3, 0x10
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_802AB654
	lis      r3, __vt__Q24Game13EnemyFSMState@ha
	lis      r5, __vt__Q34Game6Kurage5State@ha
	addi     r0, r3, __vt__Q24Game13EnemyFSMState@l
	lis      r3, __vt__Q34Game6Kurage9StateDead@ha
	stw      r0, 0(r4)
	li       r7, 0
	addi     r6, r5, __vt__Q34Game6Kurage5State@l
	addi     r5, r2, lbl_8051C020@sda21
	stw      r7, 4(r4)
	addi     r0, r3, __vt__Q34Game6Kurage9StateDead@l
	stw      r7, 8(r4)
	stw      r6, 0(r4)
	stw      r5, 0xc(r4)
	stw      r0, 0(r4)

lbl_802AB654:
	mr       r3, r31
	bl       registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
	li       r3, 0x10
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_802AB6A8
	lis      r3, __vt__Q24Game13EnemyFSMState@ha
	lis      r5, __vt__Q34Game6Kurage5State@ha
	addi     r0, r3, __vt__Q24Game13EnemyFSMState@l
	lis      r3, __vt__Q34Game6Kurage9StateWait@ha
	stw      r0, 0(r4)
	li       r0, 1
	li       r7, 0
	addi     r6, r5, __vt__Q34Game6Kurage5State@l
	stw      r0, 4(r4)
	addi     r5, r2, lbl_8051C028@sda21
	addi     r0, r3, __vt__Q34Game6Kurage9StateWait@l
	stw      r7, 8(r4)
	stw      r6, 0(r4)
	stw      r5, 0xc(r4)
	stw      r0, 0(r4)

lbl_802AB6A8:
	mr       r3, r31
	bl       registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
	li       r3, 0x10
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_802AB6FC
	lis      r3, __vt__Q24Game13EnemyFSMState@ha
	lis      r5, __vt__Q34Game6Kurage5State@ha
	addi     r0, r3, __vt__Q24Game13EnemyFSMState@l
	lis      r3, __vt__Q34Game6Kurage9StateMove@ha
	stw      r0, 0(r4)
	li       r0, 2
	li       r7, 0
	addi     r6, r5, __vt__Q34Game6Kurage5State@l
	stw      r0, 4(r4)
	addi     r5, r2, lbl_8051C030@sda21
	addi     r0, r3, __vt__Q34Game6Kurage9StateMove@l
	stw      r7, 8(r4)
	stw      r6, 0(r4)
	stw      r5, 0xc(r4)
	stw      r0, 0(r4)

lbl_802AB6FC:
	mr       r3, r31
	bl       registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
	li       r3, 0x10
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_802AB750
	lis      r3, __vt__Q24Game13EnemyFSMState@ha
	lis      r5, __vt__Q34Game6Kurage5State@ha
	addi     r0, r3, __vt__Q24Game13EnemyFSMState@l
	lis      r3, __vt__Q34Game6Kurage10StateChase@ha
	stw      r0, 0(r4)
	li       r0, 3
	li       r7, 0
	addi     r6, r5, __vt__Q34Game6Kurage5State@l
	stw      r0, 4(r4)
	addi     r5, r2, lbl_8051C038@sda21
	addi     r0, r3, __vt__Q34Game6Kurage10StateChase@l
	stw      r7, 8(r4)
	stw      r6, 0(r4)
	stw      r5, 0xc(r4)
	stw      r0, 0(r4)

lbl_802AB750:
	mr       r3, r31
	bl       registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
	li       r3, 0x10
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_802AB7A4
	lis      r3, __vt__Q24Game13EnemyFSMState@ha
	lis      r5, __vt__Q34Game6Kurage5State@ha
	addi     r0, r3, __vt__Q24Game13EnemyFSMState@l
	lis      r3, __vt__Q34Game6Kurage11StateAttack@ha
	stw      r0, 0(r4)
	li       r0, 4
	li       r7, 0
	addi     r6, r5, __vt__Q34Game6Kurage5State@l
	stw      r0, 4(r4)
	addi     r5, r2, lbl_8051C040@sda21
	addi     r0, r3, __vt__Q34Game6Kurage11StateAttack@l
	stw      r7, 8(r4)
	stw      r6, 0(r4)
	stw      r5, 0xc(r4)
	stw      r0, 0(r4)

lbl_802AB7A4:
	mr       r3, r31
	bl       registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
	li       r3, 0x10
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_802AB7F8
	lis      r3, __vt__Q24Game13EnemyFSMState@ha
	lis      r5, __vt__Q34Game6Kurage5State@ha
	addi     r0, r3, __vt__Q24Game13EnemyFSMState@l
	lis      r3, __vt__Q34Game6Kurage9StateFall@ha
	stw      r0, 0(r4)
	li       r0, 5
	li       r7, 0
	addi     r6, r5, __vt__Q34Game6Kurage5State@l
	stw      r0, 4(r4)
	addi     r5, r2, lbl_8051C048@sda21
	addi     r0, r3, __vt__Q34Game6Kurage9StateFall@l
	stw      r7, 8(r4)
	stw      r6, 0(r4)
	stw      r5, 0xc(r4)
	stw      r0, 0(r4)

lbl_802AB7F8:
	mr       r3, r31
	bl       registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
	li       r3, 0x10
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_802AB84C
	lis      r3, __vt__Q24Game13EnemyFSMState@ha
	lis      r5, __vt__Q34Game6Kurage5State@ha
	addi     r0, r3, __vt__Q24Game13EnemyFSMState@l
	lis      r3, __vt__Q34Game6Kurage9StateLand@ha
	stw      r0, 0(r4)
	li       r0, 6
	li       r7, 0
	addi     r6, r5, __vt__Q34Game6Kurage5State@l
	stw      r0, 4(r4)
	addi     r5, r2, lbl_8051C050@sda21
	addi     r0, r3, __vt__Q34Game6Kurage9StateLand@l
	stw      r7, 8(r4)
	stw      r6, 0(r4)
	stw      r5, 0xc(r4)
	stw      r0, 0(r4)

lbl_802AB84C:
	mr       r3, r31
	bl       registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
	li       r3, 0x10
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_802AB8A0
	lis      r3, __vt__Q24Game13EnemyFSMState@ha
	lis      r5, __vt__Q34Game6Kurage5State@ha
	addi     r0, r3, __vt__Q24Game13EnemyFSMState@l
	lis      r3, __vt__Q34Game6Kurage11StateGround@ha
	stw      r0, 0(r4)
	li       r0, 7
	li       r7, 0
	addi     r6, r5, __vt__Q34Game6Kurage5State@l
	stw      r0, 4(r4)
	addi     r5, r2, lbl_8051C058@sda21
	addi     r0, r3, __vt__Q34Game6Kurage11StateGround@l
	stw      r7, 8(r4)
	stw      r6, 0(r4)
	stw      r5, 0xc(r4)
	stw      r0, 0(r4)

lbl_802AB8A0:
	mr       r3, r31
	bl       registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
	li       r3, 0x10
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_802AB8F4
	lis      r3, __vt__Q24Game13EnemyFSMState@ha
	lis      r5, __vt__Q34Game6Kurage5State@ha
	addi     r0, r3, __vt__Q24Game13EnemyFSMState@l
	lis      r3, __vt__Q34Game6Kurage12StateTakeOff@ha
	stw      r0, 0(r4)
	li       r0, 8
	li       r7, 0
	addi     r6, r5, __vt__Q34Game6Kurage5State@l
	stw      r0, 4(r4)
	addi     r5, r2, lbl_8051C060@sda21
	addi     r0, r3, __vt__Q34Game6Kurage12StateTakeOff@l
	stw      r7, 8(r4)
	stw      r6, 0(r4)
	stw      r5, 0xc(r4)
	stw      r0, 0(r4)

lbl_802AB8F4:
	mr       r3, r31
	bl       registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
	li       r3, 0x10
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_802AB94C
	lis      r3, __vt__Q24Game13EnemyFSMState@ha
	lis      r6, __vt__Q34Game6Kurage5State@ha
	addi     r0, r3, __vt__Q24Game13EnemyFSMState@l
	lis      r5, lbl_80489A20@ha
	stw      r0, 0(r4)
	li       r0, 9
	lis      r3, __vt__Q34Game6Kurage13StateFlyFlick@ha
	li       r7, 0
	stw      r0, 4(r4)
	addi     r6, r6, __vt__Q34Game6Kurage5State@l
	addi     r5, r5, lbl_80489A20@l
	addi     r0, r3, __vt__Q34Game6Kurage13StateFlyFlick@l
	stw      r7, 8(r4)
	stw      r6, 0(r4)
	stw      r5, 0xc(r4)
	stw      r0, 0(r4)

lbl_802AB94C:
	mr       r3, r31
	bl       registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
	li       r3, 0x10
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_802AB9A4
	lis      r3, __vt__Q24Game13EnemyFSMState@ha
	lis      r6, __vt__Q34Game6Kurage5State@ha
	addi     r0, r3, __vt__Q24Game13EnemyFSMState@l
	lis      r5, lbl_80489A2C@ha
	stw      r0, 0(r4)
	li       r0, 0xa
	lis      r3, __vt__Q34Game6Kurage16StateGroundFlick@ha
	li       r7, 0
	stw      r0, 4(r4)
	addi     r6, r6, __vt__Q34Game6Kurage5State@l
	addi     r5, r5, lbl_80489A2C@l
	addi     r0, r3, __vt__Q34Game6Kurage16StateGroundFlick@l
	stw      r7, 8(r4)
	stw      r6, 0(r4)
	stw      r5, 0xc(r4)
	stw      r0, 0(r4)

lbl_802AB9A4:
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
 * Address:	802AB9C0
 * Size:	0000CC
 */
void Kurage::StateDead::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lfs      f0, lbl_8051C068@sda21(r2)
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
	beq      lbl_802ABA2C
	mr       r3, r31
	li       r4, 0
	li       r5, 0
	bl       startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
	b        lbl_802ABA3C

lbl_802ABA2C:
	mr       r3, r31
	li       r4, 1
	li       r5, 0
	bl       startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener

lbl_802ABA3C:
	lwz      r0, 0x1e0(r31)
	mr       r3, r31
	ori      r0, r0, 4
	stw      r0, 0x1e0(r31)
	bl       createDeadBombEffect__Q24Game9EnemyBaseFv
	mr       r3, r31
	bl       finishEyeBodyEffect__Q34Game6Kurage3ObjFv
	lfs      f1, lbl_8051C068@sda21(r2)
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
 * Address:	802ABA8C
 * Size:	00014C
 */
void Kurage::StateDead::exec(Game::EnemyBase*)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	mr       r31, r4
	mr       r3, r31
	bl       getMotionFrame__Q24Game9EnemyBaseFv
	lfs      f0, lbl_8051C06C@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_802ABAE0
	fsubs    f2, f1, f0
	lfs      f1, lbl_8051C078@sda21(r2)
	lfs      f3, lbl_8051C074@sda21(r2)
	mr       r3, r31
	lfs      f0, lbl_8051C070@sda21(r2)
	fdivs    f1, f2, f1
	fnmsubs  f0, f3, f1, f0
	fctiwz   f0, f0
	stfd     f0, 0x20(r1)
	lwz      r4, 0x24(r1)
	bl       setHireEffectLife__Q34Game6Kurage3ObjFs

lbl_802ABAE0:
	lwz      r3, 0x188(r31)
	lbz      r0, 0x24(r3)
	cmplwi   r0, 0
	beq      lbl_802ABBC4
	lwz      r0, 0x1c(r3)
	cmplwi   r0, 2
	bne      lbl_802ABB1C
	lfs      f1, lbl_8051C07C@sda21(r2)
	mr       r3, r31
	lfs      f2, lbl_8051C080@sda21(r2)
	li       r4, 0
	lfs      f3, lbl_8051C068@sda21(r2)
	lfs      f4, lbl_8051C084@sda21(r2)
	bl
"flickStickPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Piki>"
	b        lbl_802ABBC4

lbl_802ABB1C:
	cmplwi   r0, 3
	bne      lbl_802ABBB0
	mr       r3, r31
	bl       deathProcedure__Q24Game9EnemyBaseFv
	mr       r3, r31
	bl       finishHireEffect__Q34Game6Kurage3ObjFv
	mr       r3, r31
	bl       createBodyBombEffect__Q34Game6Kurage3ObjFv
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0xf4(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	li       r4, 0x58c6
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
	li       r4, 9
	lfs      f0, 0x10(r1)
	li       r6, 2
	stfs     f2, 0x14(r1)
	lwz      r3, rumbleMgr__4Game@sda21(r13)
	stfs     f1, 0x18(r1)
	stfs     f0, 0x1c(r1)
	bl       "startRumble__Q24Game9RumbleMgrFiR10Vector3<f>i"
	b        lbl_802ABBC4

lbl_802ABBB0:
	cmplwi   r0, 0x3e8
	bne      lbl_802ABBC4
	mr       r3, r31
	li       r4, 0
	bl       kill__Q24Game8CreatureFPQ24Game15CreatureKillArg

lbl_802ABBC4:
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	802ABBD8
 * Size:	000004
 */
void Kurage::StateDead::cleanup(Game::EnemyBase*) { }

/*
 * --INFO--
 * Address:	802ABBDC
 * Size:	00005C
 */
void Kurage::StateWait::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lfs      f1, lbl_8051C068@sda21(r2)
	mr       r3, r4
	stw      r0, 0x14(r1)
	li       r0, -1
	lfs      f0, lbl_8051C088@sda21(r2)
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
 * Address:	802ABC38
 * Size:	000174
 */
void Kurage::StateWait::exec(Game::EnemyBase*)
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
	lwz      r12, 0(r31)
	mr       r3, r31
	lwz      r12, 0xf4(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	li       r4, 0x50ce
	li       r5, 0
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	bl       getMovePitchOffset__Q34Game6Kurage3ObjFv
	lfs      f2, lbl_8051C068@sda21(r2)
	mr       r3, r31
	bl       setHeightVelocity__Q34Game6Kurage3ObjFff
	fmr      f31, f1
	mr       r3, r31
	bl       getSearchedTarget__Q34Game6Kurage3ObjFf
	or.      r4, r3, r3
	beq      lbl_802ABCEC
	fmr      f1, f31
	mr       r3, r31
	bl       isSuck__Q34Game6Kurage3ObjFfPQ24Game8Creature
	clrlwi.  r0, r3, 0x18
	beq      lbl_802ABCD8
	li       r0, 4
	mr       r3, r31
	stw      r0, 0x2c0(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv
	b        lbl_802ABD0C

lbl_802ABCD8:
	li       r0, 3
	mr       r3, r31
	stw      r0, 0x2c0(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv
	b        lbl_802ABD0C

lbl_802ABCEC:
	lfs      f1, 0x2c4(r31)
	lfs      f0, lbl_8051C08C@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_802ABD0C
	li       r0, 2
	mr       r3, r31
	stw      r0, 0x2c0(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv

lbl_802ABD0C:
	mr       r3, r31
	bl       getFlyingNextState__Q34Game6Kurage3ObjFv
	or.      r5, r3, r3
	blt      lbl_802ABD3C
	lwz      r12, 0(r30)
	mr       r3, r30
	mr       r4, r31
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_802ABD8C

lbl_802ABD3C:
	lwz      r3, sys@sda21(r13)
	lfs      f1, 0x2c4(r31)
	lfs      f0, 0x54(r3)
	fadds    f0, f1, f0
	stfs     f0, 0x2c4(r31)
	lwz      r3, 0x188(r31)
	lbz      r0, 0x24(r3)
	cmplwi   r0, 0
	beq      lbl_802ABD8C
	lwz      r0, 0x1c(r3)
	cmplwi   r0, 0x3e8
	bne      lbl_802ABD8C
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r6, 0
	lwz      r5, 0x2c0(r31)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_802ABD8C:
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
 * Address:	802ABDAC
 * Size:	000004
 */
void Kurage::StateWait::cleanup(Game::EnemyBase*) { }

/*
 * --INFO--
 * Address:	802ABDB0
 * Size:	000074
 */
void Kurage::StateMove::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lfs      f0, lbl_8051C068@sda21(r2)
	stw      r0, 0x14(r1)
	li       r0, -1
	stw      r31, 0xc(r1)
	mr       r31, r4
	mr       r3, r31
	stw      r0, 0x2c0(r4)
	stfs     f0, 0x2c4(r4)
	bl       setRandTarget__Q34Game6Kurage3ObjFv
	lwz      r0, 0x1e0(r31)
	mr       r3, r31
	lfs      f1, lbl_8051C068@sda21(r2)
	li       r4, 5
	ori      r0, r0, 4
	lfs      f0, lbl_8051C088@sda21(r2)
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
 * Address:	802ABE24
 * Size:	000208
 */
void Kurage::StateMove::exec(Game::EnemyBase*)
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
	lwz      r12, 0xf4(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	li       r4, 0x50ce
	li       r5, 0
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	bl       getMovePitchOffset__Q34Game6Kurage3ObjFv
	lfs      f2, lbl_8051C068@sda21(r2)
	mr       r3, r31
	bl       setHeightVelocity__Q34Game6Kurage3ObjFff
	fmr      f31, f1
	mr       r3, r31
	bl       getSearchedTarget__Q34Game6Kurage3ObjFf
	or.      r4, r3, r3
	beq      lbl_802ABED8
	fmr      f1, f31
	mr       r3, r31
	bl       isSuck__Q34Game6Kurage3ObjFfPQ24Game8Creature
	clrlwi.  r0, r3, 0x18
	beq      lbl_802ABEC4
	li       r0, 4
	mr       r3, r31
	stw      r0, 0x2c0(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv
	b        lbl_802ABF6C

lbl_802ABEC4:
	li       r0, 3
	mr       r3, r31
	stw      r0, 0x2c0(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv
	b        lbl_802ABF6C

lbl_802ABED8:
	mr       r4, r31
	addi     r3, r1, 8
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0x2d4(r31)
	lfs      f5, 0x2d8(r31)
	lfs      f2, 0x2d0(r31)
	lfs      f0, lbl_8051C090@sda21(r2)
	stfs     f2, 0x14(r1)
	lfs      f3, 8(r1)
	stfs     f1, 0x18(r1)
	lfs      f4, 0x10(r1)
	stfs     f5, 0x1c(r1)
	lfs      f1, 0x2c4(r31)
	fcmpo    cr0, f1, f0
	bgt      lbl_802ABF3C
	fsubs    f1, f4, f5
	lfs      f0, lbl_8051C094@sda21(r2)
	fsubs    f2, f3, f2
	fmuls    f1, f1, f1
	fmadds   f1, f2, f2, f1
	fcmpo    cr0, f1, f0
	bge      lbl_802ABF50

lbl_802ABF3C:
	li       r0, 1
	mr       r3, r31
	stw      r0, 0x2c0(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv
	b        lbl_802ABF6C

lbl_802ABF50:
	lwz      r5, 0xc0(r31)
	mr       r3, r31
	addi     r4, r1, 0x14
	lfs      f1, 0x2e4(r5)
	lfs      f2, 0x30c(r5)
	lfs      f3, 0x334(r5)
	bl "walkToTarget__Q24Game9EnemyFuncFPQ24Game9EnemyBaseR10Vector3<f>fff"

lbl_802ABF6C:
	mr       r3, r31
	bl       getFlyingNextState__Q34Game6Kurage3ObjFv
	or.      r5, r3, r3
	blt      lbl_802ABF9C
	lwz      r12, 0(r30)
	mr       r3, r30
	mr       r4, r31
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_802AC00C

lbl_802ABF9C:
	mr       r3, r31
	bl       isFinishMotion__Q24Game9EnemyBaseFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_802ABFBC
	lfs      f0, lbl_8051C068@sda21(r2)
	stfs     f0, 0x1d4(r31)
	stfs     f0, 0x1d8(r31)
	stfs     f0, 0x1dc(r31)

lbl_802ABFBC:
	lwz      r3, sys@sda21(r13)
	lfs      f1, 0x2c4(r31)
	lfs      f0, 0x54(r3)
	fadds    f0, f1, f0
	stfs     f0, 0x2c4(r31)
	lwz      r3, 0x188(r31)
	lbz      r0, 0x24(r3)
	cmplwi   r0, 0
	beq      lbl_802AC00C
	lwz      r0, 0x1c(r3)
	cmplwi   r0, 0x3e8
	bne      lbl_802AC00C
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r6, 0
	lwz      r5, 0x2c0(r31)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_802AC00C:
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
 * Address:	802AC02C
 * Size:	000004
 */
void Kurage::StateMove::cleanup(Game::EnemyBase*) { }

/*
 * --INFO--
 * Address:	802AC030
 * Size:	00006C
 */
void Kurage::StateChase::init(Game::EnemyBase*, Game::StateArg*)
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
	lfs      f1, lbl_8051C068@sda21(r2)
	mr       r3, r31
	lfs      f0, lbl_8051C088@sda21(r2)
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
 * Address:	802AC09C
 * Size:	00015C
 */
void Kurage::StateChase::exec(Game::EnemyBase*)
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
	bl       getMovePitchOffset__Q34Game6Kurage3ObjFv
	lfs      f2, lbl_8051C068@sda21(r2)
	mr       r3, r31
	bl       setHeightVelocity__Q34Game6Kurage3ObjFff
	fmr      f31, f1
	mr       r3, r31
	bl       getSearchedTarget__Q34Game6Kurage3ObjFf
	or.      r30, r3, r3
	beq      lbl_802AC138
	fmr      f1, f31
	mr       r3, r31
	mr       r4, r30
	bl       isSuck__Q34Game6Kurage3ObjFfPQ24Game8Creature
	clrlwi.  r0, r3, 0x18
	beq      lbl_802AC118
	li       r0, 4
	mr       r3, r31
	stw      r0, 0x2c0(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv
	b        lbl_802AC148

lbl_802AC118:
	lwz      r5, 0xc0(r31)
	mr       r3, r31
	mr       r4, r30
	lfs      f1, 0x2e4(r5)
	lfs      f2, 0x30c(r5)
	lfs      f3, 0x334(r5)
	bl walkToTarget__Q24Game9EnemyFuncFPQ24Game9EnemyBasePQ24Game8Creaturefff b
lbl_802AC148

lbl_802AC138:
	li       r0, 2
	mr       r3, r31
	stw      r0, 0x2c0(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv

lbl_802AC148:
	mr       r3, r31
	bl       getFlyingNextState__Q34Game6Kurage3ObjFv
	or.      r5, r3, r3
	blt      lbl_802AC178
	lwz      r12, 0(r29)
	mr       r3, r29
	mr       r4, r31
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_802AC1D4

lbl_802AC178:
	mr       r3, r31
	bl       isFinishMotion__Q24Game9EnemyBaseFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_802AC198
	lfs      f0, lbl_8051C068@sda21(r2)
	stfs     f0, 0x1d4(r31)
	stfs     f0, 0x1d8(r31)
	stfs     f0, 0x1dc(r31)

lbl_802AC198:
	lwz      r3, 0x188(r31)
	lbz      r0, 0x24(r3)
	cmplwi   r0, 0
	beq      lbl_802AC1D4
	lwz      r0, 0x1c(r3)
	cmplwi   r0, 0x3e8
	bne      lbl_802AC1D4
	mr       r3, r29
	mr       r4, r31
	lwz      r12, 0(r29)
	li       r6, 0
	lwz      r5, 0x2c0(r31)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_802AC1D4:
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
 * Address:	802AC1F8
 * Size:	000024
 */
void Kurage::StateChase::cleanup(Game::EnemyBase*)
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
 * Address:	802AC21C
 * Size:	000080
 */
void Kurage::StateAttack::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r5, -1
	lfs      f0, lbl_8051C068@sda21(r2)
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
 * Address:	802AC29C
 * Size:	000244
 */
void Kurage::StateAttack::exec(Game::EnemyBase*)
{
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	stfd     f31, 0x40(r1)
	psq_st   f31, 72(r1), 0, qr0
	stw      r31, 0x3c(r1)
	stw      r30, 0x38(r1)
	lfs      f0, lbl_8051C068@sda21(r2)
	mr       r31, r4
	lfs      f1, 0x200(r4)
	mr       r30, r3
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	beq      lbl_802AC2F8
	lwz      r3, 0xc0(r31)
	lfs      f1, 0x2c4(r31)
	lfs      f0, 0x894(r3)
	fcmpo    cr0, f1, f0
	bgt      lbl_802AC2F8
	lfs      f1, 0x2cc(r31)
	lfs      f0, 0x8e4(r3)
	fcmpo    cr0, f1, f0
	ble      lbl_802AC300

lbl_802AC2F8:
	mr       r3, r31
	bl       finishMotion__Q24Game9EnemyBaseFv

lbl_802AC300:
	mr       r3, r31
	bl       getAttackPitchOffset__Q34Game6Kurage3ObjFv
	lfs      f2, lbl_8051C098@sda21(r2)
	mr       r3, r31
	bl       setHeightVelocity__Q34Game6Kurage3ObjFff
	lbz      r0, 0x2dc(r31)
	fmr      f31, f1
	cmplwi   r0, 0
	beq      lbl_802AC380
	mr       r3, r31
	bl       suckPikmin__Q34Game6Kurage3ObjFf
	clrlwi.  r0, r3, 0x18
	beq      lbl_802AC33C
	mr       r3, r31
	bl       finishMotion__Q24Game9EnemyBaseFv

lbl_802AC33C:
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
	bl       "updateSuckEffect__Q34Game6Kurage3ObjFR10Vector3<f>"

lbl_802AC380:
	lwz      r3, sys@sda21(r13)
	lfs      f1, 0x2c4(r31)
	lfs      f0, 0x54(r3)
	fadds    f0, f1, f0
	stfs     f0, 0x2c4(r31)
	lwz      r3, 0x188(r31)
	lbz      r0, 0x24(r3)
	cmplwi   r0, 0
	beq      lbl_802AC4C0
	lwz      r0, 0x1c(r3)
	cmplwi   r0, 2
	bne      lbl_802AC400
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
	bl       "startSuckEffect__Q34Game6Kurage3ObjFR10Vector3<f>"
	li       r0, 1
	stb      r0, 0x2dc(r31)
	b        lbl_802AC4C0

lbl_802AC400:
	cmplwi   r0, 1
	bne      lbl_802AC42C
	mr       r3, r31
	bl       isFinishMotion__Q24Game9EnemyBaseFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_802AC4C0
	mr       r3, r31
	bl       finishSuckEffect__Q34Game6Kurage3ObjFv
	li       r0, 0
	stb      r0, 0x2dc(r31)
	b        lbl_802AC4C0

lbl_802AC42C:
	cmplwi   r0, 0x3e8
	bne      lbl_802AC4C0
	mr       r3, r31
	bl       getFlyingNextState__Q34Game6Kurage3ObjFv
	or.      r5, r3, r3
	blt      lbl_802AC464
	lwz      r12, 0(r30)
	mr       r3, r30
	mr       r4, r31
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_802AC4C0

lbl_802AC464:
	fmr      f1, f31
	mr       r3, r31
	li       r4, 0
	bl       isSuck__Q34Game6Kurage3ObjFfPQ24Game8Creature
	clrlwi.  r0, r3, 0x18
	beq      lbl_802AC4A0
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 4
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_802AC4C0

lbl_802AC4A0:
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 1
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_802AC4C0:
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
 * Address:	802AC4E0
 * Size:	000038
 */
void Kurage::StateAttack::cleanup(Game::EnemyBase*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r3, r4
	stw      r0, 0x14(r1)
	li       r0, 0
	stb      r0, 0x2dc(r4)
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
 * Address:	802AC518
 * Size:	000068
 */
void Kurage::StateFall::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lfs      f0, lbl_8051C068@sda21(r2)
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
 * Address:	802AC580
 * Size:	000180
 */
void Kurage::StateFall::exec(Game::EnemyBase*)
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
	beq      lbl_802AC658
	lfs      f31, 0x2c4(r31)
	mr       r3, r31
	fmr      f1, f31
	bl       getFallPitchOffset__Q34Game6Kurage3ObjFf
	lfs      f2, lbl_8051C09C@sda21(r2)
	mr       r3, r31
	bl       setHeightVelocity__Q34Game6Kurage3ObjFff
	lfs      f1, lbl_8051C078@sda21(r2)
	lfs      f0, lbl_8051C06C@sda21(r2)
	fmuls    f1, f31, f1
	fcmpo    cr0, f1, f0
	ble      lbl_802AC658
	mr       r4, r31
	addi     r3, r1, 8
	lwz      r12, 0(r31)
	lwz      r12, 0x6c(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0xc(r1)
	mr       r3, r31
	lfs      f0, lbl_8051C080@sda21(r2)
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

lbl_802AC658:
	lwz      r3, sys@sda21(r13)
	lfs      f1, 0x2c4(r31)
	lfs      f0, 0x54(r3)
	fadds    f0, f1, f0
	stfs     f0, 0x2c4(r31)
	lwz      r3, 0x188(r31)
	lbz      r0, 0x24(r3)
	cmplwi   r0, 0
	beq      lbl_802AC6E0
	lwz      r0, 0x1c(r3)
	cmplwi   r0, 0x3e8
	bne      lbl_802AC6E0
	lfs      f1, 0x200(r31)
	lfs      f0, lbl_8051C068@sda21(r2)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_802AC6C0
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_802AC6E0

lbl_802AC6C0:
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 6
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_802AC6E0:
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
 * Address:	802AC700
 * Size:	000024
 */
void Kurage::StateFall::cleanup(Game::EnemyBase*)
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
 * Address:	802AC724
 * Size:	0000C0
 */
void Kurage::StateLand::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	lfs      f0, lbl_8051C068@sda21(r2)
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
	bl       createDownEffect__Q34Game6Kurage3ObjFv
	mr       r4, r31
	addi     r3, r1, 8
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 8(r1)
	addi     r5, r1, 0x14
	lfs      f1, 0xc(r1)
	li       r4, 0
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
 * Address:	802AC7E4
 * Size:	000080
 */
void Kurage::StateLand::exec(Game::EnemyBase*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r5, 0x188(r4)
	lbz      r0, 0x24(r5)
	cmplwi   r0, 0
	beq      lbl_802AC854
	lwz      r0, 0x1c(r5)
	cmplwi   r0, 0x3e8
	bne      lbl_802AC854
	lfs      f1, 0x200(r4)
	lfs      f0, lbl_8051C068@sda21(r2)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_802AC83C
	lwz      r12, 0(r3)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_802AC854

lbl_802AC83C:
	lwz      r12, 0(r3)
	li       r5, 7
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_802AC854:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802AC864
 * Size:	000024
 */
void Kurage::StateLand::cleanup(Game::EnemyBase*)
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
 * Address:	802AC888
 * Size:	000068
 */
void Kurage::StateTakeOff::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lfs      f0, lbl_8051C068@sda21(r2)
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
 * Address:	802AC8F0
 * Size:	0000F0
 */
void Kurage::StateTakeOff::exec(Game::EnemyBase*)
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
	beq      lbl_802AC93C
	mr       r3, r31
	bl       getTakeOffPitchOffset__Q34Game6Kurage3ObjFv
	lfs      f2, lbl_8051C09C@sda21(r2)
	mr       r3, r31
	bl       setHeightVelocity__Q34Game6Kurage3ObjFff

lbl_802AC93C:
	lwz      r3, 0x188(r31)
	lbz      r0, 0x24(r3)
	cmplwi   r0, 0
	beq      lbl_802AC9C8
	lwz      r0, 0x1c(r3)
	cmplwi   r0, 2
	bne      lbl_802AC968
	lwz      r0, 0x1e0(r31)
	ori      r0, r0, 4
	stw      r0, 0x1e0(r31)
	b        lbl_802AC9C8

lbl_802AC968:
	cmplwi   r0, 0x3e8
	bne      lbl_802AC9C8
	lfs      f1, 0x200(r31)
	lfs      f0, lbl_8051C068@sda21(r2)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_802AC9A8
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_802AC9C8

lbl_802AC9A8:
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 1
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_802AC9C8:
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
 * Address:	802AC9E0
 * Size:	000024
 */
void Kurage::StateTakeOff::cleanup(Game::EnemyBase*)
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
 * Address:	802ACA04
 * Size:	000060
 */
void Kurage::StateGround::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lfs      f0, lbl_8051C068@sda21(r2)
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
 * Address:	802ACA64
 * Size:	000114
 */
void Kurage::StateGround::exec(Game::EnemyBase*)
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
	beq      lbl_802ACAA0
	lwz      r3, 0xc0(r31)
	lfs      f1, 0x2c4(r31)
	lfs      f0, 0x86c(r3)
	fcmpo    cr0, f1, f0
	ble      lbl_802ACAA8

lbl_802ACAA0:
	mr       r3, r31
	bl       finishMotion__Q24Game9EnemyBaseFv

lbl_802ACAA8:
	lwz      r3, sys@sda21(r13)
	lfs      f1, 0x2c4(r31)
	lfs      f0, 0x54(r3)
	fadds    f0, f1, f0
	stfs     f0, 0x2c4(r31)
	lwz      r3, 0x188(r31)
	lbz      r0, 0x24(r3)
	cmplwi   r0, 0
	beq      lbl_802ACB60
	lwz      r0, 0x1c(r3)
	cmplwi   r0, 0x3e8
	bne      lbl_802ACB60
	lfs      f1, 0x200(r31)
	lfs      f0, lbl_8051C068@sda21(r2)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_802ACB10
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_802ACB60

lbl_802ACB10:
	lwz      r0, 0x1f4(r31)
	cmpwi    r0, 0
	beq      lbl_802ACB40
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 0xa
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_802ACB60

lbl_802ACB40:
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 8
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_802ACB60:
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
 * Address:	802ACB78
 * Size:	000024
 */
void Kurage::StateGround::cleanup(Game::EnemyBase*)
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
 * Address:	802ACB9C
 * Size:	0000E0
 */
void Kurage::StateFlyFlick::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	lfs      f0, lbl_8051C068@sda21(r2)
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
	lis      r3, __vt__Q23efx15TNewkurageFlick@ha
	addi     r4, r4, __vt__Q23efx3Arg@l
	li       r6, 0xe6
	li       r5, 0
	stw      r0, 0x14(r1)
	addi     r0, r3, __vt__Q23efx15TNewkurageFlick@l
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
 * Address:	802ACC7C
 * Size:	00017C
 */
void Kurage::StateFlyFlick::exec(Game::EnemyBase*)
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
	bl       getFlickPitchOffset__Q34Game6Kurage3ObjFv
	lfs      f2, lbl_8051C098@sda21(r2)
	mr       r3, r31
	bl       setHeightVelocity__Q34Game6Kurage3ObjFff
	lwz      r3, 0x188(r31)
	fmr      f31, f1
	lbz      r0, 0x24(r3)
	cmplwi   r0, 0
	beq      lbl_802ACDD8
	lwz      r0, 0x1c(r3)
	cmplwi   r0, 2
	bne      lbl_802ACD44
	lwz      r5, 0xc0(r31)
	mr       r3, r31
	lfs      f4, lbl_8051C084@sda21(r2)
	li       r4, 0
	lfs      f1, 0x53c(r5)
	lfs      f2, 0x4c4(r5)
	lfs      f3, 0x4ec(r5)
	bl
"flickStickPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Piki>"
	lfs      f0, lbl_8051C068@sda21(r2)
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
	li       r4, 9
	lfs      f0, 0x10(r1)
	li       r6, 2
	stfs     f2, 0x14(r1)
	lwz      r3, rumbleMgr__4Game@sda21(r13)
	stfs     f1, 0x18(r1)
	stfs     f0, 0x1c(r1)
	bl       "startRumble__Q24Game9RumbleMgrFiR10Vector3<f>i"
	b        lbl_802ACDD8

lbl_802ACD44:
	cmplwi   r0, 0x3e8
	bne      lbl_802ACDD8
	mr       r3, r31
	bl       getFlyingNextState__Q34Game6Kurage3ObjFv
	or.      r5, r3, r3
	blt      lbl_802ACD7C
	lwz      r12, 0(r30)
	mr       r3, r30
	mr       r4, r31
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_802ACDD8

lbl_802ACD7C:
	fmr      f1, f31
	mr       r3, r31
	li       r4, 0
	bl       isSuck__Q34Game6Kurage3ObjFfPQ24Game8Creature
	clrlwi.  r0, r3, 0x18
	beq      lbl_802ACDB8
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 4
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_802ACDD8

lbl_802ACDB8:
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 1
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_802ACDD8:
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
 * Address:	802ACDF8
 * Size:	000024
 */
void Kurage::StateFlyFlick::cleanup(Game::EnemyBase*)
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
 * Address:	802ACE1C
 * Size:	0000DC
 */
void Kurage::StateGroundFlick::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	lfs      f0, lbl_8051C068@sda21(r2)
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
	lis      r3, __vt__Q23efx15TNewkurageFlick@ha
	addi     r4, r4, __vt__Q23efx3Arg@l
	li       r6, 0xe6
	li       r5, 0
	stw      r0, 0x14(r1)
	addi     r0, r3, __vt__Q23efx15TNewkurageFlick@l
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
 * Address:	802ACEF8
 * Size:	00014C
 */
void Kurage::StateGroundFlick::exec(Game::EnemyBase*)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	mr       r31, r4
	lwz      r5, 0x188(r4)
	lbz      r0, 0x24(r5)
	cmplwi   r0, 0
	beq      lbl_802AD030
	lwz      r0, 0x1c(r5)
	cmplwi   r0, 2
	bne      lbl_802ACF6C
	lwz      r12, 0(r4)
	addi     r3, r1, 8
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 8(r1)
	addi     r5, r1, 0x14
	lfs      f1, 0xc(r1)
	li       r4, 9
	lfs      f0, 0x10(r1)
	li       r6, 2
	stfs     f2, 0x14(r1)
	lwz      r3, rumbleMgr__4Game@sda21(r13)
	stfs     f1, 0x18(r1)
	stfs     f0, 0x1c(r1)
	bl       "startRumble__Q24Game9RumbleMgrFiR10Vector3<f>i"
	b        lbl_802AD030

lbl_802ACF6C:
	cmplwi   r0, 3
	bne      lbl_802ACFE0
	lwz      r5, 0xc0(r31)
	mr       r3, r31
	lfs      f4, lbl_8051C084@sda21(r2)
	li       r4, 0
	lfs      f1, 0x514(r5)
	lfs      f2, 0x4c4(r5)
	lfs      f3, 0x4ec(r5)
	bl
"flickNearbyNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Navi>"
	lwz      r5, 0xc0(r31)
	mr       r3, r31
	lfs      f4, lbl_8051C084@sda21(r2)
	li       r4, 0
	lfs      f1, 0x514(r5)
	lfs      f2, 0x4c4(r5)
	lfs      f3, 0x4ec(r5)
	bl
"flickNearbyPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Piki>"
	lwz      r5, 0xc0(r31)
	mr       r3, r31
	lfs      f4, lbl_8051C084@sda21(r2)
	li       r4, 0
	lfs      f1, 0x53c(r5)
	lfs      f2, 0x4c4(r5)
	lfs      f3, 0x4ec(r5)
	bl
"flickStickPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Piki>"
	lfs      f0, lbl_8051C068@sda21(r2)
	stfs     f0, 0x20c(r31)
	b        lbl_802AD030

lbl_802ACFE0:
	cmplwi   r0, 0x3e8
	bne      lbl_802AD030
	lfs      f1, 0x200(r31)
	lfs      f0, lbl_8051C068@sda21(r2)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_802AD018
	lwz      r12, 0(r3)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_802AD030

lbl_802AD018:
	lwz      r12, 0(r3)
	li       r5, 8
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_802AD030:
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	802AD044
 * Size:	000024
 */
void Kurage::StateGroundFlick::cleanup(Game::EnemyBase*)
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
 * Address:	802AD068
 * Size:	000028
 */
void __sinit_KurageState_cpp(void)
{
	/*
	lis      r4, __float_nan@ha
	li       r0, -1
	lfs      f0, __float_nan@l(r4)
	lis      r3, lbl_804CDEE8@ha
	stw      r0, lbl_80515D80@sda21(r13)
	stfsu    f0, lbl_804CDEE8@l(r3)
	stfs     f0, lbl_80515D84@sda21(r13)
	stfs     f0, 4(r3)
	stfs     f0, 8(r3)
	blr
	*/
}
