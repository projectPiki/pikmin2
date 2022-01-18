.include "macros.inc"
.section .ctors, "wa"  # 0x80472F00 - 0x804732C0
lbl_constructor:
.4byte __sinit_KurageState_cpp

.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
.global lbl_80489A20
lbl_80489A20:
	.asciz "flyflick"
	.skip 3
.global lbl_80489A2C
lbl_80489A2C:
	.asciz "groundflick"

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.global lbl_804CDEE8
lbl_804CDEE8:
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.global __vt__Q34Game6Kurage16StateGroundFlick
__vt__Q34Game6Kurage16StateGroundFlick:
	.4byte 0
	.4byte 0
	.4byte init__Q34Game6Kurage16StateGroundFlickFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game6Kurage16StateGroundFlickFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game6Kurage16StateGroundFlickFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.global __vt__Q23efx15TNewkurageFlick
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
	.4byte init__Q34Game6Kurage13StateFlyFlickFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game6Kurage13StateFlyFlickFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game6Kurage13StateFlyFlickFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.global __vt__Q34Game6Kurage11StateGround
__vt__Q34Game6Kurage11StateGround:
	.4byte 0
	.4byte 0
	.4byte init__Q34Game6Kurage11StateGroundFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game6Kurage11StateGroundFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game6Kurage11StateGroundFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.global __vt__Q34Game6Kurage12StateTakeOff
__vt__Q34Game6Kurage12StateTakeOff:
	.4byte 0
	.4byte 0
	.4byte init__Q34Game6Kurage12StateTakeOffFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game6Kurage12StateTakeOffFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game6Kurage12StateTakeOffFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.global __vt__Q34Game6Kurage9StateLand
__vt__Q34Game6Kurage9StateLand:
	.4byte 0
	.4byte 0
	.4byte init__Q34Game6Kurage9StateLandFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game6Kurage9StateLandFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game6Kurage9StateLandFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.global __vt__Q34Game6Kurage9StateFall
__vt__Q34Game6Kurage9StateFall:
	.4byte 0
	.4byte 0
	.4byte init__Q34Game6Kurage9StateFallFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game6Kurage9StateFallFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game6Kurage9StateFallFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.global __vt__Q34Game6Kurage11StateAttack
__vt__Q34Game6Kurage11StateAttack:
	.4byte 0
	.4byte 0
	.4byte init__Q34Game6Kurage11StateAttackFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game6Kurage11StateAttackFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game6Kurage11StateAttackFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.global __vt__Q34Game6Kurage10StateChase
__vt__Q34Game6Kurage10StateChase:
	.4byte 0
	.4byte 0
	.4byte init__Q34Game6Kurage10StateChaseFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game6Kurage10StateChaseFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game6Kurage10StateChaseFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.global __vt__Q34Game6Kurage9StateMove
__vt__Q34Game6Kurage9StateMove:
	.4byte 0
	.4byte 0
	.4byte init__Q34Game6Kurage9StateMoveFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game6Kurage9StateMoveFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game6Kurage9StateMoveFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.global __vt__Q34Game6Kurage9StateWait
__vt__Q34Game6Kurage9StateWait:
	.4byte 0
	.4byte 0
	.4byte init__Q34Game6Kurage9StateWaitFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game6Kurage9StateWaitFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game6Kurage9StateWaitFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.global __vt__Q34Game6Kurage9StateDead
__vt__Q34Game6Kurage9StateDead:
	.4byte 0
	.4byte 0
	.4byte init__Q34Game6Kurage9StateDeadFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game6Kurage9StateDeadFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game6Kurage9StateDeadFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.global __vt__Q34Game6Kurage5State
__vt__Q34Game6Kurage5State:
	.4byte 0
	.4byte 0
	.4byte init__Q24Game13EnemyFSMStateFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte cleanup__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.global __vt__Q34Game6Kurage3FSM
__vt__Q34Game6Kurage3FSM:
	.4byte 0
	.4byte 0
	.4byte init__Q34Game6Kurage3FSMFPQ24Game9EnemyBase
	.4byte start__Q24Game17EnemyStateMachineFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte exec__Q24Game17EnemyStateMachineFPQ24Game9EnemyBase
	.4byte transit__Q24Game17EnemyStateMachineFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game17EnemyStateMachineFPQ24Game9EnemyBaseR8Graphics
	.4byte getCurrState__Q24Game17EnemyStateMachineFPQ24Game9EnemyBase
	.4byte setCurrState__Q24Game17EnemyStateMachineFPQ24Game9EnemyBasePQ24Game13EnemyFSMState
	.4byte 0

.section .sbss # 0x80514D80 - 0x80516360
.balign 8
.global lbl_80515D80
lbl_80515D80:
	.skip 0x4
.global lbl_80515D84
lbl_80515D84:
	.skip 0x4

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
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

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global init__Q34Game6Kurage3FSMFPQ24Game9EnemyBase
init__Q34Game6Kurage3FSMFPQ24Game9EnemyBase:
/* 802AB5F0 002A8530  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802AB5F4 002A8534  7C 08 02 A6 */	mflr r0
/* 802AB5F8 002A8538  38 80 00 0B */	li r4, 0xb
/* 802AB5FC 002A853C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802AB600 002A8540  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802AB604 002A8544  7C 7F 1B 78 */	mr r31, r3
/* 802AB608 002A8548  4B E8 52 5D */	bl create__Q24Game17EnemyStateMachineFi
/* 802AB60C 002A854C  38 60 00 10 */	li r3, 0x10
/* 802AB610 002A8550  4B D7 88 95 */	bl __nw__FUl
/* 802AB614 002A8554  7C 64 1B 79 */	or. r4, r3, r3
/* 802AB618 002A8558  41 82 00 3C */	beq lbl_802AB654
/* 802AB61C 002A855C  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 802AB620 002A8560  3C A0 80 4D */	lis r5, __vt__Q34Game6Kurage5State@ha
/* 802AB624 002A8564  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 802AB628 002A8568  3C 60 80 4D */	lis r3, __vt__Q34Game6Kurage9StateDead@ha
/* 802AB62C 002A856C  90 04 00 00 */	stw r0, 0(r4)
/* 802AB630 002A8570  38 E0 00 00 */	li r7, 0
/* 802AB634 002A8574  38 C5 E0 94 */	addi r6, r5, __vt__Q34Game6Kurage5State@l
/* 802AB638 002A8578  38 A2 DC C0 */	addi r5, r2, lbl_8051C020@sda21
/* 802AB63C 002A857C  90 E4 00 04 */	stw r7, 4(r4)
/* 802AB640 002A8580  38 03 E0 70 */	addi r0, r3, __vt__Q34Game6Kurage9StateDead@l
/* 802AB644 002A8584  90 E4 00 08 */	stw r7, 8(r4)
/* 802AB648 002A8588  90 C4 00 00 */	stw r6, 0(r4)
/* 802AB64C 002A858C  90 A4 00 0C */	stw r5, 0xc(r4)
/* 802AB650 002A8590  90 04 00 00 */	stw r0, 0(r4)
lbl_802AB654:
/* 802AB654 002A8594  7F E3 FB 78 */	mr r3, r31
/* 802AB658 002A8598  4B E8 52 B1 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 802AB65C 002A859C  38 60 00 10 */	li r3, 0x10
/* 802AB660 002A85A0  4B D7 88 45 */	bl __nw__FUl
/* 802AB664 002A85A4  7C 64 1B 79 */	or. r4, r3, r3
/* 802AB668 002A85A8  41 82 00 40 */	beq lbl_802AB6A8
/* 802AB66C 002A85AC  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 802AB670 002A85B0  3C A0 80 4D */	lis r5, __vt__Q34Game6Kurage5State@ha
/* 802AB674 002A85B4  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 802AB678 002A85B8  3C 60 80 4D */	lis r3, __vt__Q34Game6Kurage9StateWait@ha
/* 802AB67C 002A85BC  90 04 00 00 */	stw r0, 0(r4)
/* 802AB680 002A85C0  38 00 00 01 */	li r0, 1
/* 802AB684 002A85C4  38 E0 00 00 */	li r7, 0
/* 802AB688 002A85C8  38 C5 E0 94 */	addi r6, r5, __vt__Q34Game6Kurage5State@l
/* 802AB68C 002A85CC  90 04 00 04 */	stw r0, 4(r4)
/* 802AB690 002A85D0  38 A2 DC C8 */	addi r5, r2, lbl_8051C028@sda21
/* 802AB694 002A85D4  38 03 E0 4C */	addi r0, r3, __vt__Q34Game6Kurage9StateWait@l
/* 802AB698 002A85D8  90 E4 00 08 */	stw r7, 8(r4)
/* 802AB69C 002A85DC  90 C4 00 00 */	stw r6, 0(r4)
/* 802AB6A0 002A85E0  90 A4 00 0C */	stw r5, 0xc(r4)
/* 802AB6A4 002A85E4  90 04 00 00 */	stw r0, 0(r4)
lbl_802AB6A8:
/* 802AB6A8 002A85E8  7F E3 FB 78 */	mr r3, r31
/* 802AB6AC 002A85EC  4B E8 52 5D */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 802AB6B0 002A85F0  38 60 00 10 */	li r3, 0x10
/* 802AB6B4 002A85F4  4B D7 87 F1 */	bl __nw__FUl
/* 802AB6B8 002A85F8  7C 64 1B 79 */	or. r4, r3, r3
/* 802AB6BC 002A85FC  41 82 00 40 */	beq lbl_802AB6FC
/* 802AB6C0 002A8600  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 802AB6C4 002A8604  3C A0 80 4D */	lis r5, __vt__Q34Game6Kurage5State@ha
/* 802AB6C8 002A8608  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 802AB6CC 002A860C  3C 60 80 4D */	lis r3, __vt__Q34Game6Kurage9StateMove@ha
/* 802AB6D0 002A8610  90 04 00 00 */	stw r0, 0(r4)
/* 802AB6D4 002A8614  38 00 00 02 */	li r0, 2
/* 802AB6D8 002A8618  38 E0 00 00 */	li r7, 0
/* 802AB6DC 002A861C  38 C5 E0 94 */	addi r6, r5, __vt__Q34Game6Kurage5State@l
/* 802AB6E0 002A8620  90 04 00 04 */	stw r0, 4(r4)
/* 802AB6E4 002A8624  38 A2 DC D0 */	addi r5, r2, lbl_8051C030@sda21
/* 802AB6E8 002A8628  38 03 E0 28 */	addi r0, r3, __vt__Q34Game6Kurage9StateMove@l
/* 802AB6EC 002A862C  90 E4 00 08 */	stw r7, 8(r4)
/* 802AB6F0 002A8630  90 C4 00 00 */	stw r6, 0(r4)
/* 802AB6F4 002A8634  90 A4 00 0C */	stw r5, 0xc(r4)
/* 802AB6F8 002A8638  90 04 00 00 */	stw r0, 0(r4)
lbl_802AB6FC:
/* 802AB6FC 002A863C  7F E3 FB 78 */	mr r3, r31
/* 802AB700 002A8640  4B E8 52 09 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 802AB704 002A8644  38 60 00 10 */	li r3, 0x10
/* 802AB708 002A8648  4B D7 87 9D */	bl __nw__FUl
/* 802AB70C 002A864C  7C 64 1B 79 */	or. r4, r3, r3
/* 802AB710 002A8650  41 82 00 40 */	beq lbl_802AB750
/* 802AB714 002A8654  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 802AB718 002A8658  3C A0 80 4D */	lis r5, __vt__Q34Game6Kurage5State@ha
/* 802AB71C 002A865C  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 802AB720 002A8660  3C 60 80 4D */	lis r3, __vt__Q34Game6Kurage10StateChase@ha
/* 802AB724 002A8664  90 04 00 00 */	stw r0, 0(r4)
/* 802AB728 002A8668  38 00 00 03 */	li r0, 3
/* 802AB72C 002A866C  38 E0 00 00 */	li r7, 0
/* 802AB730 002A8670  38 C5 E0 94 */	addi r6, r5, __vt__Q34Game6Kurage5State@l
/* 802AB734 002A8674  90 04 00 04 */	stw r0, 4(r4)
/* 802AB738 002A8678  38 A2 DC D8 */	addi r5, r2, lbl_8051C038@sda21
/* 802AB73C 002A867C  38 03 E0 04 */	addi r0, r3, __vt__Q34Game6Kurage10StateChase@l
/* 802AB740 002A8680  90 E4 00 08 */	stw r7, 8(r4)
/* 802AB744 002A8684  90 C4 00 00 */	stw r6, 0(r4)
/* 802AB748 002A8688  90 A4 00 0C */	stw r5, 0xc(r4)
/* 802AB74C 002A868C  90 04 00 00 */	stw r0, 0(r4)
lbl_802AB750:
/* 802AB750 002A8690  7F E3 FB 78 */	mr r3, r31
/* 802AB754 002A8694  4B E8 51 B5 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 802AB758 002A8698  38 60 00 10 */	li r3, 0x10
/* 802AB75C 002A869C  4B D7 87 49 */	bl __nw__FUl
/* 802AB760 002A86A0  7C 64 1B 79 */	or. r4, r3, r3
/* 802AB764 002A86A4  41 82 00 40 */	beq lbl_802AB7A4
/* 802AB768 002A86A8  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 802AB76C 002A86AC  3C A0 80 4D */	lis r5, __vt__Q34Game6Kurage5State@ha
/* 802AB770 002A86B0  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 802AB774 002A86B4  3C 60 80 4D */	lis r3, __vt__Q34Game6Kurage11StateAttack@ha
/* 802AB778 002A86B8  90 04 00 00 */	stw r0, 0(r4)
/* 802AB77C 002A86BC  38 00 00 04 */	li r0, 4
/* 802AB780 002A86C0  38 E0 00 00 */	li r7, 0
/* 802AB784 002A86C4  38 C5 E0 94 */	addi r6, r5, __vt__Q34Game6Kurage5State@l
/* 802AB788 002A86C8  90 04 00 04 */	stw r0, 4(r4)
/* 802AB78C 002A86CC  38 A2 DC E0 */	addi r5, r2, lbl_8051C040@sda21
/* 802AB790 002A86D0  38 03 DF E0 */	addi r0, r3, __vt__Q34Game6Kurage11StateAttack@l
/* 802AB794 002A86D4  90 E4 00 08 */	stw r7, 8(r4)
/* 802AB798 002A86D8  90 C4 00 00 */	stw r6, 0(r4)
/* 802AB79C 002A86DC  90 A4 00 0C */	stw r5, 0xc(r4)
/* 802AB7A0 002A86E0  90 04 00 00 */	stw r0, 0(r4)
lbl_802AB7A4:
/* 802AB7A4 002A86E4  7F E3 FB 78 */	mr r3, r31
/* 802AB7A8 002A86E8  4B E8 51 61 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 802AB7AC 002A86EC  38 60 00 10 */	li r3, 0x10
/* 802AB7B0 002A86F0  4B D7 86 F5 */	bl __nw__FUl
/* 802AB7B4 002A86F4  7C 64 1B 79 */	or. r4, r3, r3
/* 802AB7B8 002A86F8  41 82 00 40 */	beq lbl_802AB7F8
/* 802AB7BC 002A86FC  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 802AB7C0 002A8700  3C A0 80 4D */	lis r5, __vt__Q34Game6Kurage5State@ha
/* 802AB7C4 002A8704  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 802AB7C8 002A8708  3C 60 80 4D */	lis r3, __vt__Q34Game6Kurage9StateFall@ha
/* 802AB7CC 002A870C  90 04 00 00 */	stw r0, 0(r4)
/* 802AB7D0 002A8710  38 00 00 05 */	li r0, 5
/* 802AB7D4 002A8714  38 E0 00 00 */	li r7, 0
/* 802AB7D8 002A8718  38 C5 E0 94 */	addi r6, r5, __vt__Q34Game6Kurage5State@l
/* 802AB7DC 002A871C  90 04 00 04 */	stw r0, 4(r4)
/* 802AB7E0 002A8720  38 A2 DC E8 */	addi r5, r2, lbl_8051C048@sda21
/* 802AB7E4 002A8724  38 03 DF BC */	addi r0, r3, __vt__Q34Game6Kurage9StateFall@l
/* 802AB7E8 002A8728  90 E4 00 08 */	stw r7, 8(r4)
/* 802AB7EC 002A872C  90 C4 00 00 */	stw r6, 0(r4)
/* 802AB7F0 002A8730  90 A4 00 0C */	stw r5, 0xc(r4)
/* 802AB7F4 002A8734  90 04 00 00 */	stw r0, 0(r4)
lbl_802AB7F8:
/* 802AB7F8 002A8738  7F E3 FB 78 */	mr r3, r31
/* 802AB7FC 002A873C  4B E8 51 0D */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 802AB800 002A8740  38 60 00 10 */	li r3, 0x10
/* 802AB804 002A8744  4B D7 86 A1 */	bl __nw__FUl
/* 802AB808 002A8748  7C 64 1B 79 */	or. r4, r3, r3
/* 802AB80C 002A874C  41 82 00 40 */	beq lbl_802AB84C
/* 802AB810 002A8750  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 802AB814 002A8754  3C A0 80 4D */	lis r5, __vt__Q34Game6Kurage5State@ha
/* 802AB818 002A8758  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 802AB81C 002A875C  3C 60 80 4D */	lis r3, __vt__Q34Game6Kurage9StateLand@ha
/* 802AB820 002A8760  90 04 00 00 */	stw r0, 0(r4)
/* 802AB824 002A8764  38 00 00 06 */	li r0, 6
/* 802AB828 002A8768  38 E0 00 00 */	li r7, 0
/* 802AB82C 002A876C  38 C5 E0 94 */	addi r6, r5, __vt__Q34Game6Kurage5State@l
/* 802AB830 002A8770  90 04 00 04 */	stw r0, 4(r4)
/* 802AB834 002A8774  38 A2 DC F0 */	addi r5, r2, lbl_8051C050@sda21
/* 802AB838 002A8778  38 03 DF 98 */	addi r0, r3, __vt__Q34Game6Kurage9StateLand@l
/* 802AB83C 002A877C  90 E4 00 08 */	stw r7, 8(r4)
/* 802AB840 002A8780  90 C4 00 00 */	stw r6, 0(r4)
/* 802AB844 002A8784  90 A4 00 0C */	stw r5, 0xc(r4)
/* 802AB848 002A8788  90 04 00 00 */	stw r0, 0(r4)
lbl_802AB84C:
/* 802AB84C 002A878C  7F E3 FB 78 */	mr r3, r31
/* 802AB850 002A8790  4B E8 50 B9 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 802AB854 002A8794  38 60 00 10 */	li r3, 0x10
/* 802AB858 002A8798  4B D7 86 4D */	bl __nw__FUl
/* 802AB85C 002A879C  7C 64 1B 79 */	or. r4, r3, r3
/* 802AB860 002A87A0  41 82 00 40 */	beq lbl_802AB8A0
/* 802AB864 002A87A4  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 802AB868 002A87A8  3C A0 80 4D */	lis r5, __vt__Q34Game6Kurage5State@ha
/* 802AB86C 002A87AC  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 802AB870 002A87B0  3C 60 80 4D */	lis r3, __vt__Q34Game6Kurage11StateGround@ha
/* 802AB874 002A87B4  90 04 00 00 */	stw r0, 0(r4)
/* 802AB878 002A87B8  38 00 00 07 */	li r0, 7
/* 802AB87C 002A87BC  38 E0 00 00 */	li r7, 0
/* 802AB880 002A87C0  38 C5 E0 94 */	addi r6, r5, __vt__Q34Game6Kurage5State@l
/* 802AB884 002A87C4  90 04 00 04 */	stw r0, 4(r4)
/* 802AB888 002A87C8  38 A2 DC F8 */	addi r5, r2, lbl_8051C058@sda21
/* 802AB88C 002A87CC  38 03 DF 50 */	addi r0, r3, __vt__Q34Game6Kurage11StateGround@l
/* 802AB890 002A87D0  90 E4 00 08 */	stw r7, 8(r4)
/* 802AB894 002A87D4  90 C4 00 00 */	stw r6, 0(r4)
/* 802AB898 002A87D8  90 A4 00 0C */	stw r5, 0xc(r4)
/* 802AB89C 002A87DC  90 04 00 00 */	stw r0, 0(r4)
lbl_802AB8A0:
/* 802AB8A0 002A87E0  7F E3 FB 78 */	mr r3, r31
/* 802AB8A4 002A87E4  4B E8 50 65 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 802AB8A8 002A87E8  38 60 00 10 */	li r3, 0x10
/* 802AB8AC 002A87EC  4B D7 85 F9 */	bl __nw__FUl
/* 802AB8B0 002A87F0  7C 64 1B 79 */	or. r4, r3, r3
/* 802AB8B4 002A87F4  41 82 00 40 */	beq lbl_802AB8F4
/* 802AB8B8 002A87F8  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 802AB8BC 002A87FC  3C A0 80 4D */	lis r5, __vt__Q34Game6Kurage5State@ha
/* 802AB8C0 002A8800  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 802AB8C4 002A8804  3C 60 80 4D */	lis r3, __vt__Q34Game6Kurage12StateTakeOff@ha
/* 802AB8C8 002A8808  90 04 00 00 */	stw r0, 0(r4)
/* 802AB8CC 002A880C  38 00 00 08 */	li r0, 8
/* 802AB8D0 002A8810  38 E0 00 00 */	li r7, 0
/* 802AB8D4 002A8814  38 C5 E0 94 */	addi r6, r5, __vt__Q34Game6Kurage5State@l
/* 802AB8D8 002A8818  90 04 00 04 */	stw r0, 4(r4)
/* 802AB8DC 002A881C  38 A2 DD 00 */	addi r5, r2, lbl_8051C060@sda21
/* 802AB8E0 002A8820  38 03 DF 74 */	addi r0, r3, __vt__Q34Game6Kurage12StateTakeOff@l
/* 802AB8E4 002A8824  90 E4 00 08 */	stw r7, 8(r4)
/* 802AB8E8 002A8828  90 C4 00 00 */	stw r6, 0(r4)
/* 802AB8EC 002A882C  90 A4 00 0C */	stw r5, 0xc(r4)
/* 802AB8F0 002A8830  90 04 00 00 */	stw r0, 0(r4)
lbl_802AB8F4:
/* 802AB8F4 002A8834  7F E3 FB 78 */	mr r3, r31
/* 802AB8F8 002A8838  4B E8 50 11 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 802AB8FC 002A883C  38 60 00 10 */	li r3, 0x10
/* 802AB900 002A8840  4B D7 85 A5 */	bl __nw__FUl
/* 802AB904 002A8844  7C 64 1B 79 */	or. r4, r3, r3
/* 802AB908 002A8848  41 82 00 44 */	beq lbl_802AB94C
/* 802AB90C 002A884C  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 802AB910 002A8850  3C C0 80 4D */	lis r6, __vt__Q34Game6Kurage5State@ha
/* 802AB914 002A8854  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 802AB918 002A8858  3C A0 80 49 */	lis r5, lbl_80489A20@ha
/* 802AB91C 002A885C  90 04 00 00 */	stw r0, 0(r4)
/* 802AB920 002A8860  38 00 00 09 */	li r0, 9
/* 802AB924 002A8864  3C 60 80 4D */	lis r3, __vt__Q34Game6Kurage13StateFlyFlick@ha
/* 802AB928 002A8868  38 E0 00 00 */	li r7, 0
/* 802AB92C 002A886C  90 04 00 04 */	stw r0, 4(r4)
/* 802AB930 002A8870  38 C6 E0 94 */	addi r6, r6, __vt__Q34Game6Kurage5State@l
/* 802AB934 002A8874  38 A5 9A 20 */	addi r5, r5, lbl_80489A20@l
/* 802AB938 002A8878  38 03 DF 2C */	addi r0, r3, __vt__Q34Game6Kurage13StateFlyFlick@l
/* 802AB93C 002A887C  90 E4 00 08 */	stw r7, 8(r4)
/* 802AB940 002A8880  90 C4 00 00 */	stw r6, 0(r4)
/* 802AB944 002A8884  90 A4 00 0C */	stw r5, 0xc(r4)
/* 802AB948 002A8888  90 04 00 00 */	stw r0, 0(r4)
lbl_802AB94C:
/* 802AB94C 002A888C  7F E3 FB 78 */	mr r3, r31
/* 802AB950 002A8890  4B E8 4F B9 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 802AB954 002A8894  38 60 00 10 */	li r3, 0x10
/* 802AB958 002A8898  4B D7 85 4D */	bl __nw__FUl
/* 802AB95C 002A889C  7C 64 1B 79 */	or. r4, r3, r3
/* 802AB960 002A88A0  41 82 00 44 */	beq lbl_802AB9A4
/* 802AB964 002A88A4  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 802AB968 002A88A8  3C C0 80 4D */	lis r6, __vt__Q34Game6Kurage5State@ha
/* 802AB96C 002A88AC  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 802AB970 002A88B0  3C A0 80 49 */	lis r5, lbl_80489A2C@ha
/* 802AB974 002A88B4  90 04 00 00 */	stw r0, 0(r4)
/* 802AB978 002A88B8  38 00 00 0A */	li r0, 0xa
/* 802AB97C 002A88BC  3C 60 80 4D */	lis r3, __vt__Q34Game6Kurage16StateGroundFlick@ha
/* 802AB980 002A88C0  38 E0 00 00 */	li r7, 0
/* 802AB984 002A88C4  90 04 00 04 */	stw r0, 4(r4)
/* 802AB988 002A88C8  38 C6 E0 94 */	addi r6, r6, __vt__Q34Game6Kurage5State@l
/* 802AB98C 002A88CC  38 A5 9A 2C */	addi r5, r5, lbl_80489A2C@l
/* 802AB990 002A88D0  38 03 DE F4 */	addi r0, r3, __vt__Q34Game6Kurage16StateGroundFlick@l
/* 802AB994 002A88D4  90 E4 00 08 */	stw r7, 8(r4)
/* 802AB998 002A88D8  90 C4 00 00 */	stw r6, 0(r4)
/* 802AB99C 002A88DC  90 A4 00 0C */	stw r5, 0xc(r4)
/* 802AB9A0 002A88E0  90 04 00 00 */	stw r0, 0(r4)
lbl_802AB9A4:
/* 802AB9A4 002A88E4  7F E3 FB 78 */	mr r3, r31
/* 802AB9A8 002A88E8  4B E8 4F 61 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 802AB9AC 002A88EC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802AB9B0 002A88F0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802AB9B4 002A88F4  7C 08 03 A6 */	mtlr r0
/* 802AB9B8 002A88F8  38 21 00 10 */	addi r1, r1, 0x10
/* 802AB9BC 002A88FC  4E 80 00 20 */	blr 

.global init__Q34Game6Kurage9StateDeadFPQ24Game9EnemyBasePQ24Game8StateArg
init__Q34Game6Kurage9StateDeadFPQ24Game9EnemyBasePQ24Game8StateArg:
/* 802AB9C0 002A8900  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802AB9C4 002A8904  7C 08 02 A6 */	mflr r0
/* 802AB9C8 002A8908  C0 02 DD 08 */	lfs f0, lbl_8051C068@sda21(r2)
/* 802AB9CC 002A890C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802AB9D0 002A8910  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802AB9D4 002A8914  7C 9F 23 78 */	mr r31, r4
/* 802AB9D8 002A8918  7F E3 FB 78 */	mr r3, r31
/* 802AB9DC 002A891C  80 04 01 E0 */	lwz r0, 0x1e0(r4)
/* 802AB9E0 002A8920  54 00 06 B0 */	rlwinm r0, r0, 0, 0x1a, 0x18
/* 802AB9E4 002A8924  90 04 01 E0 */	stw r0, 0x1e0(r4)
/* 802AB9E8 002A8928  80 04 01 E0 */	lwz r0, 0x1e0(r4)
/* 802AB9EC 002A892C  54 00 07 76 */	rlwinm r0, r0, 0, 0x1d, 0x1b
/* 802AB9F0 002A8930  90 04 01 E0 */	stw r0, 0x1e0(r4)
/* 802AB9F4 002A8934  D0 04 01 D4 */	stfs f0, 0x1d4(r4)
/* 802AB9F8 002A8938  D0 04 01 D8 */	stfs f0, 0x1d8(r4)
/* 802AB9FC 002A893C  D0 04 01 DC */	stfs f0, 0x1dc(r4)
/* 802ABA00 002A8940  81 9F 00 00 */	lwz r12, 0(r31)
/* 802ABA04 002A8944  81 8C 00 CC */	lwz r12, 0xcc(r12)
/* 802ABA08 002A8948  7D 89 03 A6 */	mtctr r12
/* 802ABA0C 002A894C  4E 80 04 21 */	bctrl 
/* 802ABA10 002A8950  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802ABA14 002A8954  41 82 00 18 */	beq lbl_802ABA2C
/* 802ABA18 002A8958  7F E3 FB 78 */	mr r3, r31
/* 802ABA1C 002A895C  38 80 00 00 */	li r4, 0
/* 802ABA20 002A8960  38 A0 00 00 */	li r5, 0
/* 802ABA24 002A8964  4B E5 95 E1 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 802ABA28 002A8968  48 00 00 14 */	b lbl_802ABA3C
lbl_802ABA2C:
/* 802ABA2C 002A896C  7F E3 FB 78 */	mr r3, r31
/* 802ABA30 002A8970  38 80 00 01 */	li r4, 1
/* 802ABA34 002A8974  38 A0 00 00 */	li r5, 0
/* 802ABA38 002A8978  4B E5 95 CD */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
lbl_802ABA3C:
/* 802ABA3C 002A897C  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 802ABA40 002A8980  7F E3 FB 78 */	mr r3, r31
/* 802ABA44 002A8984  60 00 00 04 */	ori r0, r0, 4
/* 802ABA48 002A8988  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 802ABA4C 002A898C  4B E5 9E 29 */	bl createDeadBombEffect__Q24Game9EnemyBaseFv
/* 802ABA50 002A8990  7F E3 FB 78 */	mr r3, r31
/* 802ABA54 002A8994  48 00 3C 61 */	bl finishEyeBodyEffect__Q34Game6Kurage3ObjFv
/* 802ABA58 002A8998  C0 22 DD 08 */	lfs f1, lbl_8051C068@sda21(r2)
/* 802ABA5C 002A899C  7F E3 FB 78 */	mr r3, r31
/* 802ABA60 002A89A0  48 1C 29 B5 */	bl PSStartEnemyFatalHitSE__FPQ24Game9EnemyBasef
/* 802ABA64 002A89A4  80 7F 02 8C */	lwz r3, 0x28c(r31)
/* 802ABA68 002A89A8  81 83 00 28 */	lwz r12, 0x28(r3)
/* 802ABA6C 002A89AC  81 8C 00 C8 */	lwz r12, 0xc8(r12)
/* 802ABA70 002A89B0  7D 89 03 A6 */	mtctr r12
/* 802ABA74 002A89B4  4E 80 04 21 */	bctrl 
/* 802ABA78 002A89B8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802ABA7C 002A89BC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802ABA80 002A89C0  7C 08 03 A6 */	mtlr r0
/* 802ABA84 002A89C4  38 21 00 10 */	addi r1, r1, 0x10
/* 802ABA88 002A89C8  4E 80 00 20 */	blr 

.global exec__Q34Game6Kurage9StateDeadFPQ24Game9EnemyBase
exec__Q34Game6Kurage9StateDeadFPQ24Game9EnemyBase:
/* 802ABA8C 002A89CC  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 802ABA90 002A89D0  7C 08 02 A6 */	mflr r0
/* 802ABA94 002A89D4  90 01 00 34 */	stw r0, 0x34(r1)
/* 802ABA98 002A89D8  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 802ABA9C 002A89DC  7C 9F 23 78 */	mr r31, r4
/* 802ABAA0 002A89E0  7F E3 FB 78 */	mr r3, r31
/* 802ABAA4 002A89E4  4B E5 97 C9 */	bl getMotionFrame__Q24Game9EnemyBaseFv
/* 802ABAA8 002A89E8  C0 02 DD 0C */	lfs f0, lbl_8051C06C@sda21(r2)
/* 802ABAAC 002A89EC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802ABAB0 002A89F0  40 81 00 30 */	ble lbl_802ABAE0
/* 802ABAB4 002A89F4  EC 41 00 28 */	fsubs f2, f1, f0
/* 802ABAB8 002A89F8  C0 22 DD 18 */	lfs f1, lbl_8051C078@sda21(r2)
/* 802ABABC 002A89FC  C0 62 DD 14 */	lfs f3, lbl_8051C074@sda21(r2)
/* 802ABAC0 002A8A00  7F E3 FB 78 */	mr r3, r31
/* 802ABAC4 002A8A04  C0 02 DD 10 */	lfs f0, lbl_8051C070@sda21(r2)
/* 802ABAC8 002A8A08  EC 22 08 24 */	fdivs f1, f2, f1
/* 802ABACC 002A8A0C  EC 03 00 7C */	fnmsubs f0, f3, f1, f0
/* 802ABAD0 002A8A10  FC 00 00 1E */	fctiwz f0, f0
/* 802ABAD4 002A8A14  D8 01 00 20 */	stfd f0, 0x20(r1)
/* 802ABAD8 002A8A18  80 81 00 24 */	lwz r4, 0x24(r1)
/* 802ABADC 002A8A1C  48 00 3C 55 */	bl setHireEffectLife__Q34Game6Kurage3ObjFs
lbl_802ABAE0:
/* 802ABAE0 002A8A20  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 802ABAE4 002A8A24  88 03 00 24 */	lbz r0, 0x24(r3)
/* 802ABAE8 002A8A28  28 00 00 00 */	cmplwi r0, 0
/* 802ABAEC 002A8A2C  41 82 00 D8 */	beq lbl_802ABBC4
/* 802ABAF0 002A8A30  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 802ABAF4 002A8A34  28 00 00 02 */	cmplwi r0, 2
/* 802ABAF8 002A8A38  40 82 00 24 */	bne lbl_802ABB1C
/* 802ABAFC 002A8A3C  C0 22 DD 1C */	lfs f1, lbl_8051C07C@sda21(r2)
/* 802ABB00 002A8A40  7F E3 FB 78 */	mr r3, r31
/* 802ABB04 002A8A44  C0 42 DD 20 */	lfs f2, lbl_8051C080@sda21(r2)
/* 802ABB08 002A8A48  38 80 00 00 */	li r4, 0
/* 802ABB0C 002A8A4C  C0 62 DD 08 */	lfs f3, lbl_8051C068@sda21(r2)
/* 802ABB10 002A8A50  C0 82 DD 24 */	lfs f4, lbl_8051C084@sda21(r2)
/* 802ABB14 002A8A54  4B E6 76 09 */	bl "flickStickPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Piki>"
/* 802ABB18 002A8A58  48 00 00 AC */	b lbl_802ABBC4
lbl_802ABB1C:
/* 802ABB1C 002A8A5C  28 00 00 03 */	cmplwi r0, 3
/* 802ABB20 002A8A60  40 82 00 90 */	bne lbl_802ABBB0
/* 802ABB24 002A8A64  7F E3 FB 78 */	mr r3, r31
/* 802ABB28 002A8A68  4B E5 9B F9 */	bl deathProcedure__Q24Game9EnemyBaseFv
/* 802ABB2C 002A8A6C  7F E3 FB 78 */	mr r3, r31
/* 802ABB30 002A8A70  48 00 3C 25 */	bl finishHireEffect__Q34Game6Kurage3ObjFv
/* 802ABB34 002A8A74  7F E3 FB 78 */	mr r3, r31
/* 802ABB38 002A8A78  48 00 3D 19 */	bl createBodyBombEffect__Q34Game6Kurage3ObjFv
/* 802ABB3C 002A8A7C  7F E3 FB 78 */	mr r3, r31
/* 802ABB40 002A8A80  81 9F 00 00 */	lwz r12, 0(r31)
/* 802ABB44 002A8A84  81 8C 00 F4 */	lwz r12, 0xf4(r12)
/* 802ABB48 002A8A88  7D 89 03 A6 */	mtctr r12
/* 802ABB4C 002A8A8C  4E 80 04 21 */	bctrl 
/* 802ABB50 002A8A90  81 83 00 00 */	lwz r12, 0(r3)
/* 802ABB54 002A8A94  38 80 58 C6 */	li r4, 0x58c6
/* 802ABB58 002A8A98  38 A0 00 00 */	li r5, 0
/* 802ABB5C 002A8A9C  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 802ABB60 002A8AA0  7D 89 03 A6 */	mtctr r12
/* 802ABB64 002A8AA4  4E 80 04 21 */	bctrl 
/* 802ABB68 002A8AA8  7F E4 FB 78 */	mr r4, r31
/* 802ABB6C 002A8AAC  38 61 00 08 */	addi r3, r1, 8
/* 802ABB70 002A8AB0  81 9F 00 00 */	lwz r12, 0(r31)
/* 802ABB74 002A8AB4  81 8C 00 08 */	lwz r12, 8(r12)
/* 802ABB78 002A8AB8  7D 89 03 A6 */	mtctr r12
/* 802ABB7C 002A8ABC  4E 80 04 21 */	bctrl 
/* 802ABB80 002A8AC0  C0 41 00 08 */	lfs f2, 8(r1)
/* 802ABB84 002A8AC4  38 A1 00 14 */	addi r5, r1, 0x14
/* 802ABB88 002A8AC8  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 802ABB8C 002A8ACC  38 80 00 09 */	li r4, 9
/* 802ABB90 002A8AD0  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 802ABB94 002A8AD4  38 C0 00 02 */	li r6, 2
/* 802ABB98 002A8AD8  D0 41 00 14 */	stfs f2, 0x14(r1)
/* 802ABB9C 002A8ADC  80 6D 96 A8 */	lwz r3, rumbleMgr__4Game@sda21(r13)
/* 802ABBA0 002A8AE0  D0 21 00 18 */	stfs f1, 0x18(r1)
/* 802ABBA4 002A8AE4  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 802ABBA8 002A8AE8  4B FA 7B D9 */	bl "startRumble__Q24Game9RumbleMgrFiR10Vector3<f>i"
/* 802ABBAC 002A8AEC  48 00 00 18 */	b lbl_802ABBC4
lbl_802ABBB0:
/* 802ABBB0 002A8AF0  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 802ABBB4 002A8AF4  40 82 00 10 */	bne lbl_802ABBC4
/* 802ABBB8 002A8AF8  7F E3 FB 78 */	mr r3, r31
/* 802ABBBC 002A8AFC  38 80 00 00 */	li r4, 0
/* 802ABBC0 002A8B00  4B E8 F5 31 */	bl kill__Q24Game8CreatureFPQ24Game15CreatureKillArg
lbl_802ABBC4:
/* 802ABBC4 002A8B04  80 01 00 34 */	lwz r0, 0x34(r1)
/* 802ABBC8 002A8B08  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 802ABBCC 002A8B0C  7C 08 03 A6 */	mtlr r0
/* 802ABBD0 002A8B10  38 21 00 30 */	addi r1, r1, 0x30
/* 802ABBD4 002A8B14  4E 80 00 20 */	blr 

.global cleanup__Q34Game6Kurage9StateDeadFPQ24Game9EnemyBase
cleanup__Q34Game6Kurage9StateDeadFPQ24Game9EnemyBase:
/* 802ABBD8 002A8B18  4E 80 00 20 */	blr 

.global init__Q34Game6Kurage9StateWaitFPQ24Game9EnemyBasePQ24Game8StateArg
init__Q34Game6Kurage9StateWaitFPQ24Game9EnemyBasePQ24Game8StateArg:
/* 802ABBDC 002A8B1C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802ABBE0 002A8B20  7C 08 02 A6 */	mflr r0
/* 802ABBE4 002A8B24  C0 22 DD 08 */	lfs f1, lbl_8051C068@sda21(r2)
/* 802ABBE8 002A8B28  7C 83 23 78 */	mr r3, r4
/* 802ABBEC 002A8B2C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802ABBF0 002A8B30  38 00 FF FF */	li r0, -1
/* 802ABBF4 002A8B34  C0 02 DD 28 */	lfs f0, lbl_8051C088@sda21(r2)
/* 802ABBF8 002A8B38  38 A0 00 00 */	li r5, 0
/* 802ABBFC 002A8B3C  90 04 02 C0 */	stw r0, 0x2c0(r4)
/* 802ABC00 002A8B40  38 80 00 05 */	li r4, 5
/* 802ABC04 002A8B44  D0 23 02 C4 */	stfs f1, 0x2c4(r3)
/* 802ABC08 002A8B48  80 03 01 E0 */	lwz r0, 0x1e0(r3)
/* 802ABC0C 002A8B4C  60 00 00 04 */	ori r0, r0, 4
/* 802ABC10 002A8B50  90 03 01 E0 */	stw r0, 0x1e0(r3)
/* 802ABC14 002A8B54  D0 23 01 D4 */	stfs f1, 0x1d4(r3)
/* 802ABC18 002A8B58  D0 23 01 D8 */	stfs f1, 0x1d8(r3)
/* 802ABC1C 002A8B5C  D0 23 01 DC */	stfs f1, 0x1dc(r3)
/* 802ABC20 002A8B60  D0 03 02 C8 */	stfs f0, 0x2c8(r3)
/* 802ABC24 002A8B64  4B E5 93 E1 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 802ABC28 002A8B68  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802ABC2C 002A8B6C  7C 08 03 A6 */	mtlr r0
/* 802ABC30 002A8B70  38 21 00 10 */	addi r1, r1, 0x10
/* 802ABC34 002A8B74  4E 80 00 20 */	blr 

.global exec__Q34Game6Kurage9StateWaitFPQ24Game9EnemyBase
exec__Q34Game6Kurage9StateWaitFPQ24Game9EnemyBase:
/* 802ABC38 002A8B78  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802ABC3C 002A8B7C  7C 08 02 A6 */	mflr r0
/* 802ABC40 002A8B80  90 01 00 24 */	stw r0, 0x24(r1)
/* 802ABC44 002A8B84  DB E1 00 10 */	stfd f31, 0x10(r1)
/* 802ABC48 002A8B88  F3 E1 00 18 */	psq_st f31, 24(r1), 0, qr0
/* 802ABC4C 002A8B8C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802ABC50 002A8B90  93 C1 00 08 */	stw r30, 8(r1)
/* 802ABC54 002A8B94  7C 9F 23 78 */	mr r31, r4
/* 802ABC58 002A8B98  7C 7E 1B 78 */	mr r30, r3
/* 802ABC5C 002A8B9C  81 9F 00 00 */	lwz r12, 0(r31)
/* 802ABC60 002A8BA0  7F E3 FB 78 */	mr r3, r31
/* 802ABC64 002A8BA4  81 8C 00 F4 */	lwz r12, 0xf4(r12)
/* 802ABC68 002A8BA8  7D 89 03 A6 */	mtctr r12
/* 802ABC6C 002A8BAC  4E 80 04 21 */	bctrl 
/* 802ABC70 002A8BB0  81 83 00 00 */	lwz r12, 0(r3)
/* 802ABC74 002A8BB4  38 80 50 CE */	li r4, 0x50ce
/* 802ABC78 002A8BB8  38 A0 00 00 */	li r5, 0
/* 802ABC7C 002A8BBC  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 802ABC80 002A8BC0  7D 89 03 A6 */	mtctr r12
/* 802ABC84 002A8BC4  4E 80 04 21 */	bctrl 
/* 802ABC88 002A8BC8  7F E3 FB 78 */	mr r3, r31
/* 802ABC8C 002A8BCC  48 00 23 35 */	bl getMovePitchOffset__Q34Game6Kurage3ObjFv
/* 802ABC90 002A8BD0  C0 42 DD 08 */	lfs f2, lbl_8051C068@sda21(r2)
/* 802ABC94 002A8BD4  7F E3 FB 78 */	mr r3, r31
/* 802ABC98 002A8BD8  48 00 20 B9 */	bl setHeightVelocity__Q34Game6Kurage3ObjFff
/* 802ABC9C 002A8BDC  FF E0 08 90 */	fmr f31, f1
/* 802ABCA0 002A8BE0  7F E3 FB 78 */	mr r3, r31
/* 802ABCA4 002A8BE4  48 00 2A 91 */	bl getSearchedTarget__Q34Game6Kurage3ObjFf
/* 802ABCA8 002A8BE8  7C 64 1B 79 */	or. r4, r3, r3
/* 802ABCAC 002A8BEC  41 82 00 40 */	beq lbl_802ABCEC
/* 802ABCB0 002A8BF0  FC 20 F8 90 */	fmr f1, f31
/* 802ABCB4 002A8BF4  7F E3 FB 78 */	mr r3, r31
/* 802ABCB8 002A8BF8  48 00 2E C5 */	bl isSuck__Q34Game6Kurage3ObjFfPQ24Game8Creature
/* 802ABCBC 002A8BFC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802ABCC0 002A8C00  41 82 00 18 */	beq lbl_802ABCD8
/* 802ABCC4 002A8C04  38 00 00 04 */	li r0, 4
/* 802ABCC8 002A8C08  7F E3 FB 78 */	mr r3, r31
/* 802ABCCC 002A8C0C  90 1F 02 C0 */	stw r0, 0x2c0(r31)
/* 802ABCD0 002A8C10  4B E5 95 D1 */	bl finishMotion__Q24Game9EnemyBaseFv
/* 802ABCD4 002A8C14  48 00 00 38 */	b lbl_802ABD0C
lbl_802ABCD8:
/* 802ABCD8 002A8C18  38 00 00 03 */	li r0, 3
/* 802ABCDC 002A8C1C  7F E3 FB 78 */	mr r3, r31
/* 802ABCE0 002A8C20  90 1F 02 C0 */	stw r0, 0x2c0(r31)
/* 802ABCE4 002A8C24  4B E5 95 BD */	bl finishMotion__Q24Game9EnemyBaseFv
/* 802ABCE8 002A8C28  48 00 00 24 */	b lbl_802ABD0C
lbl_802ABCEC:
/* 802ABCEC 002A8C2C  C0 3F 02 C4 */	lfs f1, 0x2c4(r31)
/* 802ABCF0 002A8C30  C0 02 DD 2C */	lfs f0, lbl_8051C08C@sda21(r2)
/* 802ABCF4 002A8C34  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802ABCF8 002A8C38  40 81 00 14 */	ble lbl_802ABD0C
/* 802ABCFC 002A8C3C  38 00 00 02 */	li r0, 2
/* 802ABD00 002A8C40  7F E3 FB 78 */	mr r3, r31
/* 802ABD04 002A8C44  90 1F 02 C0 */	stw r0, 0x2c0(r31)
/* 802ABD08 002A8C48  4B E5 95 99 */	bl finishMotion__Q24Game9EnemyBaseFv
lbl_802ABD0C:
/* 802ABD0C 002A8C4C  7F E3 FB 78 */	mr r3, r31
/* 802ABD10 002A8C50  48 00 29 81 */	bl getFlyingNextState__Q34Game6Kurage3ObjFv
/* 802ABD14 002A8C54  7C 65 1B 79 */	or. r5, r3, r3
/* 802ABD18 002A8C58  41 80 00 24 */	blt lbl_802ABD3C
/* 802ABD1C 002A8C5C  81 9E 00 00 */	lwz r12, 0(r30)
/* 802ABD20 002A8C60  7F C3 F3 78 */	mr r3, r30
/* 802ABD24 002A8C64  7F E4 FB 78 */	mr r4, r31
/* 802ABD28 002A8C68  38 C0 00 00 */	li r6, 0
/* 802ABD2C 002A8C6C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802ABD30 002A8C70  7D 89 03 A6 */	mtctr r12
/* 802ABD34 002A8C74  4E 80 04 21 */	bctrl 
/* 802ABD38 002A8C78  48 00 00 54 */	b lbl_802ABD8C
lbl_802ABD3C:
/* 802ABD3C 002A8C7C  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 802ABD40 002A8C80  C0 3F 02 C4 */	lfs f1, 0x2c4(r31)
/* 802ABD44 002A8C84  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 802ABD48 002A8C88  EC 01 00 2A */	fadds f0, f1, f0
/* 802ABD4C 002A8C8C  D0 1F 02 C4 */	stfs f0, 0x2c4(r31)
/* 802ABD50 002A8C90  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 802ABD54 002A8C94  88 03 00 24 */	lbz r0, 0x24(r3)
/* 802ABD58 002A8C98  28 00 00 00 */	cmplwi r0, 0
/* 802ABD5C 002A8C9C  41 82 00 30 */	beq lbl_802ABD8C
/* 802ABD60 002A8CA0  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 802ABD64 002A8CA4  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 802ABD68 002A8CA8  40 82 00 24 */	bne lbl_802ABD8C
/* 802ABD6C 002A8CAC  7F C3 F3 78 */	mr r3, r30
/* 802ABD70 002A8CB0  7F E4 FB 78 */	mr r4, r31
/* 802ABD74 002A8CB4  81 9E 00 00 */	lwz r12, 0(r30)
/* 802ABD78 002A8CB8  38 C0 00 00 */	li r6, 0
/* 802ABD7C 002A8CBC  80 BF 02 C0 */	lwz r5, 0x2c0(r31)
/* 802ABD80 002A8CC0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802ABD84 002A8CC4  7D 89 03 A6 */	mtctr r12
/* 802ABD88 002A8CC8  4E 80 04 21 */	bctrl 
lbl_802ABD8C:
/* 802ABD8C 002A8CCC  E3 E1 00 18 */	psq_l f31, 24(r1), 0, qr0
/* 802ABD90 002A8CD0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802ABD94 002A8CD4  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 802ABD98 002A8CD8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802ABD9C 002A8CDC  83 C1 00 08 */	lwz r30, 8(r1)
/* 802ABDA0 002A8CE0  7C 08 03 A6 */	mtlr r0
/* 802ABDA4 002A8CE4  38 21 00 20 */	addi r1, r1, 0x20
/* 802ABDA8 002A8CE8  4E 80 00 20 */	blr 

.global cleanup__Q34Game6Kurage9StateWaitFPQ24Game9EnemyBase
cleanup__Q34Game6Kurage9StateWaitFPQ24Game9EnemyBase:
/* 802ABDAC 002A8CEC  4E 80 00 20 */	blr 

.global init__Q34Game6Kurage9StateMoveFPQ24Game9EnemyBasePQ24Game8StateArg
init__Q34Game6Kurage9StateMoveFPQ24Game9EnemyBasePQ24Game8StateArg:
/* 802ABDB0 002A8CF0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802ABDB4 002A8CF4  7C 08 02 A6 */	mflr r0
/* 802ABDB8 002A8CF8  C0 02 DD 08 */	lfs f0, lbl_8051C068@sda21(r2)
/* 802ABDBC 002A8CFC  90 01 00 14 */	stw r0, 0x14(r1)
/* 802ABDC0 002A8D00  38 00 FF FF */	li r0, -1
/* 802ABDC4 002A8D04  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802ABDC8 002A8D08  7C 9F 23 78 */	mr r31, r4
/* 802ABDCC 002A8D0C  7F E3 FB 78 */	mr r3, r31
/* 802ABDD0 002A8D10  90 04 02 C0 */	stw r0, 0x2c0(r4)
/* 802ABDD4 002A8D14  D0 04 02 C4 */	stfs f0, 0x2c4(r4)
/* 802ABDD8 002A8D18  48 00 20 11 */	bl setRandTarget__Q34Game6Kurage3ObjFv
/* 802ABDDC 002A8D1C  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 802ABDE0 002A8D20  7F E3 FB 78 */	mr r3, r31
/* 802ABDE4 002A8D24  C0 22 DD 08 */	lfs f1, lbl_8051C068@sda21(r2)
/* 802ABDE8 002A8D28  38 80 00 05 */	li r4, 5
/* 802ABDEC 002A8D2C  60 00 00 04 */	ori r0, r0, 4
/* 802ABDF0 002A8D30  C0 02 DD 28 */	lfs f0, lbl_8051C088@sda21(r2)
/* 802ABDF4 002A8D34  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 802ABDF8 002A8D38  38 A0 00 00 */	li r5, 0
/* 802ABDFC 002A8D3C  D0 3F 01 D4 */	stfs f1, 0x1d4(r31)
/* 802ABE00 002A8D40  D0 3F 01 D8 */	stfs f1, 0x1d8(r31)
/* 802ABE04 002A8D44  D0 3F 01 DC */	stfs f1, 0x1dc(r31)
/* 802ABE08 002A8D48  D0 1F 02 C8 */	stfs f0, 0x2c8(r31)
/* 802ABE0C 002A8D4C  4B E5 91 F9 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 802ABE10 002A8D50  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802ABE14 002A8D54  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802ABE18 002A8D58  7C 08 03 A6 */	mtlr r0
/* 802ABE1C 002A8D5C  38 21 00 10 */	addi r1, r1, 0x10
/* 802ABE20 002A8D60  4E 80 00 20 */	blr 

.global exec__Q34Game6Kurage9StateMoveFPQ24Game9EnemyBase
exec__Q34Game6Kurage9StateMoveFPQ24Game9EnemyBase:
/* 802ABE24 002A8D64  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 802ABE28 002A8D68  7C 08 02 A6 */	mflr r0
/* 802ABE2C 002A8D6C  90 01 00 44 */	stw r0, 0x44(r1)
/* 802ABE30 002A8D70  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 802ABE34 002A8D74  F3 E1 00 38 */	psq_st f31, 56(r1), 0, qr0
/* 802ABE38 002A8D78  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 802ABE3C 002A8D7C  93 C1 00 28 */	stw r30, 0x28(r1)
/* 802ABE40 002A8D80  7C 9F 23 78 */	mr r31, r4
/* 802ABE44 002A8D84  7C 7E 1B 78 */	mr r30, r3
/* 802ABE48 002A8D88  81 9F 00 00 */	lwz r12, 0(r31)
/* 802ABE4C 002A8D8C  7F E3 FB 78 */	mr r3, r31
/* 802ABE50 002A8D90  81 8C 00 F4 */	lwz r12, 0xf4(r12)
/* 802ABE54 002A8D94  7D 89 03 A6 */	mtctr r12
/* 802ABE58 002A8D98  4E 80 04 21 */	bctrl 
/* 802ABE5C 002A8D9C  81 83 00 00 */	lwz r12, 0(r3)
/* 802ABE60 002A8DA0  38 80 50 CE */	li r4, 0x50ce
/* 802ABE64 002A8DA4  38 A0 00 00 */	li r5, 0
/* 802ABE68 002A8DA8  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 802ABE6C 002A8DAC  7D 89 03 A6 */	mtctr r12
/* 802ABE70 002A8DB0  4E 80 04 21 */	bctrl 
/* 802ABE74 002A8DB4  7F E3 FB 78 */	mr r3, r31
/* 802ABE78 002A8DB8  48 00 21 49 */	bl getMovePitchOffset__Q34Game6Kurage3ObjFv
/* 802ABE7C 002A8DBC  C0 42 DD 08 */	lfs f2, lbl_8051C068@sda21(r2)
/* 802ABE80 002A8DC0  7F E3 FB 78 */	mr r3, r31
/* 802ABE84 002A8DC4  48 00 1E CD */	bl setHeightVelocity__Q34Game6Kurage3ObjFff
/* 802ABE88 002A8DC8  FF E0 08 90 */	fmr f31, f1
/* 802ABE8C 002A8DCC  7F E3 FB 78 */	mr r3, r31
/* 802ABE90 002A8DD0  48 00 28 A5 */	bl getSearchedTarget__Q34Game6Kurage3ObjFf
/* 802ABE94 002A8DD4  7C 64 1B 79 */	or. r4, r3, r3
/* 802ABE98 002A8DD8  41 82 00 40 */	beq lbl_802ABED8
/* 802ABE9C 002A8DDC  FC 20 F8 90 */	fmr f1, f31
/* 802ABEA0 002A8DE0  7F E3 FB 78 */	mr r3, r31
/* 802ABEA4 002A8DE4  48 00 2C D9 */	bl isSuck__Q34Game6Kurage3ObjFfPQ24Game8Creature
/* 802ABEA8 002A8DE8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802ABEAC 002A8DEC  41 82 00 18 */	beq lbl_802ABEC4
/* 802ABEB0 002A8DF0  38 00 00 04 */	li r0, 4
/* 802ABEB4 002A8DF4  7F E3 FB 78 */	mr r3, r31
/* 802ABEB8 002A8DF8  90 1F 02 C0 */	stw r0, 0x2c0(r31)
/* 802ABEBC 002A8DFC  4B E5 93 E5 */	bl finishMotion__Q24Game9EnemyBaseFv
/* 802ABEC0 002A8E00  48 00 00 AC */	b lbl_802ABF6C
lbl_802ABEC4:
/* 802ABEC4 002A8E04  38 00 00 03 */	li r0, 3
/* 802ABEC8 002A8E08  7F E3 FB 78 */	mr r3, r31
/* 802ABECC 002A8E0C  90 1F 02 C0 */	stw r0, 0x2c0(r31)
/* 802ABED0 002A8E10  4B E5 93 D1 */	bl finishMotion__Q24Game9EnemyBaseFv
/* 802ABED4 002A8E14  48 00 00 98 */	b lbl_802ABF6C
lbl_802ABED8:
/* 802ABED8 002A8E18  7F E4 FB 78 */	mr r4, r31
/* 802ABEDC 002A8E1C  38 61 00 08 */	addi r3, r1, 8
/* 802ABEE0 002A8E20  81 9F 00 00 */	lwz r12, 0(r31)
/* 802ABEE4 002A8E24  81 8C 00 08 */	lwz r12, 8(r12)
/* 802ABEE8 002A8E28  7D 89 03 A6 */	mtctr r12
/* 802ABEEC 002A8E2C  4E 80 04 21 */	bctrl 
/* 802ABEF0 002A8E30  C0 3F 02 D4 */	lfs f1, 0x2d4(r31)
/* 802ABEF4 002A8E34  C0 BF 02 D8 */	lfs f5, 0x2d8(r31)
/* 802ABEF8 002A8E38  C0 5F 02 D0 */	lfs f2, 0x2d0(r31)
/* 802ABEFC 002A8E3C  C0 02 DD 30 */	lfs f0, lbl_8051C090@sda21(r2)
/* 802ABF00 002A8E40  D0 41 00 14 */	stfs f2, 0x14(r1)
/* 802ABF04 002A8E44  C0 61 00 08 */	lfs f3, 8(r1)
/* 802ABF08 002A8E48  D0 21 00 18 */	stfs f1, 0x18(r1)
/* 802ABF0C 002A8E4C  C0 81 00 10 */	lfs f4, 0x10(r1)
/* 802ABF10 002A8E50  D0 A1 00 1C */	stfs f5, 0x1c(r1)
/* 802ABF14 002A8E54  C0 3F 02 C4 */	lfs f1, 0x2c4(r31)
/* 802ABF18 002A8E58  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802ABF1C 002A8E5C  41 81 00 20 */	bgt lbl_802ABF3C
/* 802ABF20 002A8E60  EC 24 28 28 */	fsubs f1, f4, f5
/* 802ABF24 002A8E64  C0 02 DD 34 */	lfs f0, lbl_8051C094@sda21(r2)
/* 802ABF28 002A8E68  EC 43 10 28 */	fsubs f2, f3, f2
/* 802ABF2C 002A8E6C  EC 21 00 72 */	fmuls f1, f1, f1
/* 802ABF30 002A8E70  EC 22 08 BA */	fmadds f1, f2, f2, f1
/* 802ABF34 002A8E74  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802ABF38 002A8E78  40 80 00 18 */	bge lbl_802ABF50
lbl_802ABF3C:
/* 802ABF3C 002A8E7C  38 00 00 01 */	li r0, 1
/* 802ABF40 002A8E80  7F E3 FB 78 */	mr r3, r31
/* 802ABF44 002A8E84  90 1F 02 C0 */	stw r0, 0x2c0(r31)
/* 802ABF48 002A8E88  4B E5 93 59 */	bl finishMotion__Q24Game9EnemyBaseFv
/* 802ABF4C 002A8E8C  48 00 00 20 */	b lbl_802ABF6C
lbl_802ABF50:
/* 802ABF50 002A8E90  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 802ABF54 002A8E94  7F E3 FB 78 */	mr r3, r31
/* 802ABF58 002A8E98  38 81 00 14 */	addi r4, r1, 0x14
/* 802ABF5C 002A8E9C  C0 25 02 E4 */	lfs f1, 0x2e4(r5)
/* 802ABF60 002A8EA0  C0 45 03 0C */	lfs f2, 0x30c(r5)
/* 802ABF64 002A8EA4  C0 65 03 34 */	lfs f3, 0x334(r5)
/* 802ABF68 002A8EA8  4B E6 96 75 */	bl "walkToTarget__Q24Game9EnemyFuncFPQ24Game9EnemyBaseR10Vector3<f>fff"
lbl_802ABF6C:
/* 802ABF6C 002A8EAC  7F E3 FB 78 */	mr r3, r31
/* 802ABF70 002A8EB0  48 00 27 21 */	bl getFlyingNextState__Q34Game6Kurage3ObjFv
/* 802ABF74 002A8EB4  7C 65 1B 79 */	or. r5, r3, r3
/* 802ABF78 002A8EB8  41 80 00 24 */	blt lbl_802ABF9C
/* 802ABF7C 002A8EBC  81 9E 00 00 */	lwz r12, 0(r30)
/* 802ABF80 002A8EC0  7F C3 F3 78 */	mr r3, r30
/* 802ABF84 002A8EC4  7F E4 FB 78 */	mr r4, r31
/* 802ABF88 002A8EC8  38 C0 00 00 */	li r6, 0
/* 802ABF8C 002A8ECC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802ABF90 002A8ED0  7D 89 03 A6 */	mtctr r12
/* 802ABF94 002A8ED4  4E 80 04 21 */	bctrl 
/* 802ABF98 002A8ED8  48 00 00 74 */	b lbl_802AC00C
lbl_802ABF9C:
/* 802ABF9C 002A8EDC  7F E3 FB 78 */	mr r3, r31
/* 802ABFA0 002A8EE0  4B E5 B3 61 */	bl isFinishMotion__Q24Game9EnemyBaseFv
/* 802ABFA4 002A8EE4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802ABFA8 002A8EE8  41 82 00 14 */	beq lbl_802ABFBC
/* 802ABFAC 002A8EEC  C0 02 DD 08 */	lfs f0, lbl_8051C068@sda21(r2)
/* 802ABFB0 002A8EF0  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 802ABFB4 002A8EF4  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 802ABFB8 002A8EF8  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
lbl_802ABFBC:
/* 802ABFBC 002A8EFC  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 802ABFC0 002A8F00  C0 3F 02 C4 */	lfs f1, 0x2c4(r31)
/* 802ABFC4 002A8F04  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 802ABFC8 002A8F08  EC 01 00 2A */	fadds f0, f1, f0
/* 802ABFCC 002A8F0C  D0 1F 02 C4 */	stfs f0, 0x2c4(r31)
/* 802ABFD0 002A8F10  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 802ABFD4 002A8F14  88 03 00 24 */	lbz r0, 0x24(r3)
/* 802ABFD8 002A8F18  28 00 00 00 */	cmplwi r0, 0
/* 802ABFDC 002A8F1C  41 82 00 30 */	beq lbl_802AC00C
/* 802ABFE0 002A8F20  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 802ABFE4 002A8F24  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 802ABFE8 002A8F28  40 82 00 24 */	bne lbl_802AC00C
/* 802ABFEC 002A8F2C  7F C3 F3 78 */	mr r3, r30
/* 802ABFF0 002A8F30  7F E4 FB 78 */	mr r4, r31
/* 802ABFF4 002A8F34  81 9E 00 00 */	lwz r12, 0(r30)
/* 802ABFF8 002A8F38  38 C0 00 00 */	li r6, 0
/* 802ABFFC 002A8F3C  80 BF 02 C0 */	lwz r5, 0x2c0(r31)
/* 802AC000 002A8F40  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802AC004 002A8F44  7D 89 03 A6 */	mtctr r12
/* 802AC008 002A8F48  4E 80 04 21 */	bctrl 
lbl_802AC00C:
/* 802AC00C 002A8F4C  E3 E1 00 38 */	psq_l f31, 56(r1), 0, qr0
/* 802AC010 002A8F50  80 01 00 44 */	lwz r0, 0x44(r1)
/* 802AC014 002A8F54  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 802AC018 002A8F58  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 802AC01C 002A8F5C  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 802AC020 002A8F60  7C 08 03 A6 */	mtlr r0
/* 802AC024 002A8F64  38 21 00 40 */	addi r1, r1, 0x40
/* 802AC028 002A8F68  4E 80 00 20 */	blr 

.global cleanup__Q34Game6Kurage9StateMoveFPQ24Game9EnemyBase
cleanup__Q34Game6Kurage9StateMoveFPQ24Game9EnemyBase:
/* 802AC02C 002A8F6C  4E 80 00 20 */	blr 

.global init__Q34Game6Kurage10StateChaseFPQ24Game9EnemyBasePQ24Game8StateArg
init__Q34Game6Kurage10StateChaseFPQ24Game9EnemyBasePQ24Game8StateArg:
/* 802AC030 002A8F70  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802AC034 002A8F74  7C 08 02 A6 */	mflr r0
/* 802AC038 002A8F78  90 01 00 14 */	stw r0, 0x14(r1)
/* 802AC03C 002A8F7C  38 00 FF FF */	li r0, -1
/* 802AC040 002A8F80  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802AC044 002A8F84  7C 9F 23 78 */	mr r31, r4
/* 802AC048 002A8F88  7F E3 FB 78 */	mr r3, r31
/* 802AC04C 002A8F8C  80 84 01 E0 */	lwz r4, 0x1e0(r4)
/* 802AC050 002A8F90  60 84 00 04 */	ori r4, r4, 4
/* 802AC054 002A8F94  90 9F 01 E0 */	stw r4, 0x1e0(r31)
/* 802AC058 002A8F98  90 1F 02 C0 */	stw r0, 0x2c0(r31)
/* 802AC05C 002A8F9C  4B E5 59 71 */	bl setEmotionExcitement__Q24Game9EnemyBaseFv
/* 802AC060 002A8FA0  C0 22 DD 08 */	lfs f1, lbl_8051C068@sda21(r2)
/* 802AC064 002A8FA4  7F E3 FB 78 */	mr r3, r31
/* 802AC068 002A8FA8  C0 02 DD 28 */	lfs f0, lbl_8051C088@sda21(r2)
/* 802AC06C 002A8FAC  38 80 00 05 */	li r4, 5
/* 802AC070 002A8FB0  D0 3F 01 D4 */	stfs f1, 0x1d4(r31)
/* 802AC074 002A8FB4  38 A0 00 00 */	li r5, 0
/* 802AC078 002A8FB8  D0 3F 01 D8 */	stfs f1, 0x1d8(r31)
/* 802AC07C 002A8FBC  D0 3F 01 DC */	stfs f1, 0x1dc(r31)
/* 802AC080 002A8FC0  D0 1F 02 C8 */	stfs f0, 0x2c8(r31)
/* 802AC084 002A8FC4  4B E5 8F 81 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 802AC088 002A8FC8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802AC08C 002A8FCC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802AC090 002A8FD0  7C 08 03 A6 */	mtlr r0
/* 802AC094 002A8FD4  38 21 00 10 */	addi r1, r1, 0x10
/* 802AC098 002A8FD8  4E 80 00 20 */	blr 

.global exec__Q34Game6Kurage10StateChaseFPQ24Game9EnemyBase
exec__Q34Game6Kurage10StateChaseFPQ24Game9EnemyBase:
/* 802AC09C 002A8FDC  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 802AC0A0 002A8FE0  7C 08 02 A6 */	mflr r0
/* 802AC0A4 002A8FE4  90 01 00 34 */	stw r0, 0x34(r1)
/* 802AC0A8 002A8FE8  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 802AC0AC 002A8FEC  F3 E1 00 28 */	psq_st f31, 40(r1), 0, qr0
/* 802AC0B0 002A8FF0  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 802AC0B4 002A8FF4  93 C1 00 18 */	stw r30, 0x18(r1)
/* 802AC0B8 002A8FF8  93 A1 00 14 */	stw r29, 0x14(r1)
/* 802AC0BC 002A8FFC  7C 9F 23 78 */	mr r31, r4
/* 802AC0C0 002A9000  7C 7D 1B 78 */	mr r29, r3
/* 802AC0C4 002A9004  7F E3 FB 78 */	mr r3, r31
/* 802AC0C8 002A9008  48 00 1E F9 */	bl getMovePitchOffset__Q34Game6Kurage3ObjFv
/* 802AC0CC 002A900C  C0 42 DD 08 */	lfs f2, lbl_8051C068@sda21(r2)
/* 802AC0D0 002A9010  7F E3 FB 78 */	mr r3, r31
/* 802AC0D4 002A9014  48 00 1C 7D */	bl setHeightVelocity__Q34Game6Kurage3ObjFff
/* 802AC0D8 002A9018  FF E0 08 90 */	fmr f31, f1
/* 802AC0DC 002A901C  7F E3 FB 78 */	mr r3, r31
/* 802AC0E0 002A9020  48 00 26 55 */	bl getSearchedTarget__Q34Game6Kurage3ObjFf
/* 802AC0E4 002A9024  7C 7E 1B 79 */	or. r30, r3, r3
/* 802AC0E8 002A9028  41 82 00 50 */	beq lbl_802AC138
/* 802AC0EC 002A902C  FC 20 F8 90 */	fmr f1, f31
/* 802AC0F0 002A9030  7F E3 FB 78 */	mr r3, r31
/* 802AC0F4 002A9034  7F C4 F3 78 */	mr r4, r30
/* 802AC0F8 002A9038  48 00 2A 85 */	bl isSuck__Q34Game6Kurage3ObjFfPQ24Game8Creature
/* 802AC0FC 002A903C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802AC100 002A9040  41 82 00 18 */	beq lbl_802AC118
/* 802AC104 002A9044  38 00 00 04 */	li r0, 4
/* 802AC108 002A9048  7F E3 FB 78 */	mr r3, r31
/* 802AC10C 002A904C  90 1F 02 C0 */	stw r0, 0x2c0(r31)
/* 802AC110 002A9050  4B E5 91 91 */	bl finishMotion__Q24Game9EnemyBaseFv
/* 802AC114 002A9054  48 00 00 34 */	b lbl_802AC148
lbl_802AC118:
/* 802AC118 002A9058  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 802AC11C 002A905C  7F E3 FB 78 */	mr r3, r31
/* 802AC120 002A9060  7F C4 F3 78 */	mr r4, r30
/* 802AC124 002A9064  C0 25 02 E4 */	lfs f1, 0x2e4(r5)
/* 802AC128 002A9068  C0 45 03 0C */	lfs f2, 0x30c(r5)
/* 802AC12C 002A906C  C0 65 03 34 */	lfs f3, 0x334(r5)
/* 802AC130 002A9070  4B E6 92 D1 */	bl walkToTarget__Q24Game9EnemyFuncFPQ24Game9EnemyBasePQ24Game8Creaturefff
/* 802AC134 002A9074  48 00 00 14 */	b lbl_802AC148
lbl_802AC138:
/* 802AC138 002A9078  38 00 00 02 */	li r0, 2
/* 802AC13C 002A907C  7F E3 FB 78 */	mr r3, r31
/* 802AC140 002A9080  90 1F 02 C0 */	stw r0, 0x2c0(r31)
/* 802AC144 002A9084  4B E5 91 5D */	bl finishMotion__Q24Game9EnemyBaseFv
lbl_802AC148:
/* 802AC148 002A9088  7F E3 FB 78 */	mr r3, r31
/* 802AC14C 002A908C  48 00 25 45 */	bl getFlyingNextState__Q34Game6Kurage3ObjFv
/* 802AC150 002A9090  7C 65 1B 79 */	or. r5, r3, r3
/* 802AC154 002A9094  41 80 00 24 */	blt lbl_802AC178
/* 802AC158 002A9098  81 9D 00 00 */	lwz r12, 0(r29)
/* 802AC15C 002A909C  7F A3 EB 78 */	mr r3, r29
/* 802AC160 002A90A0  7F E4 FB 78 */	mr r4, r31
/* 802AC164 002A90A4  38 C0 00 00 */	li r6, 0
/* 802AC168 002A90A8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802AC16C 002A90AC  7D 89 03 A6 */	mtctr r12
/* 802AC170 002A90B0  4E 80 04 21 */	bctrl 
/* 802AC174 002A90B4  48 00 00 60 */	b lbl_802AC1D4
lbl_802AC178:
/* 802AC178 002A90B8  7F E3 FB 78 */	mr r3, r31
/* 802AC17C 002A90BC  4B E5 B1 85 */	bl isFinishMotion__Q24Game9EnemyBaseFv
/* 802AC180 002A90C0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802AC184 002A90C4  41 82 00 14 */	beq lbl_802AC198
/* 802AC188 002A90C8  C0 02 DD 08 */	lfs f0, lbl_8051C068@sda21(r2)
/* 802AC18C 002A90CC  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 802AC190 002A90D0  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 802AC194 002A90D4  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
lbl_802AC198:
/* 802AC198 002A90D8  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 802AC19C 002A90DC  88 03 00 24 */	lbz r0, 0x24(r3)
/* 802AC1A0 002A90E0  28 00 00 00 */	cmplwi r0, 0
/* 802AC1A4 002A90E4  41 82 00 30 */	beq lbl_802AC1D4
/* 802AC1A8 002A90E8  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 802AC1AC 002A90EC  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 802AC1B0 002A90F0  40 82 00 24 */	bne lbl_802AC1D4
/* 802AC1B4 002A90F4  7F A3 EB 78 */	mr r3, r29
/* 802AC1B8 002A90F8  7F E4 FB 78 */	mr r4, r31
/* 802AC1BC 002A90FC  81 9D 00 00 */	lwz r12, 0(r29)
/* 802AC1C0 002A9100  38 C0 00 00 */	li r6, 0
/* 802AC1C4 002A9104  80 BF 02 C0 */	lwz r5, 0x2c0(r31)
/* 802AC1C8 002A9108  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802AC1CC 002A910C  7D 89 03 A6 */	mtctr r12
/* 802AC1D0 002A9110  4E 80 04 21 */	bctrl 
lbl_802AC1D4:
/* 802AC1D4 002A9114  E3 E1 00 28 */	psq_l f31, 40(r1), 0, qr0
/* 802AC1D8 002A9118  80 01 00 34 */	lwz r0, 0x34(r1)
/* 802AC1DC 002A911C  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 802AC1E0 002A9120  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 802AC1E4 002A9124  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 802AC1E8 002A9128  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 802AC1EC 002A912C  7C 08 03 A6 */	mtlr r0
/* 802AC1F0 002A9130  38 21 00 30 */	addi r1, r1, 0x30
/* 802AC1F4 002A9134  4E 80 00 20 */	blr 

.global cleanup__Q34Game6Kurage10StateChaseFPQ24Game9EnemyBase
cleanup__Q34Game6Kurage10StateChaseFPQ24Game9EnemyBase:
/* 802AC1F8 002A9138  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802AC1FC 002A913C  7C 08 02 A6 */	mflr r0
/* 802AC200 002A9140  7C 83 23 78 */	mr r3, r4
/* 802AC204 002A9144  90 01 00 14 */	stw r0, 0x14(r1)
/* 802AC208 002A9148  4B E5 57 75 */	bl setEmotionCaution__Q24Game9EnemyBaseFv
/* 802AC20C 002A914C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802AC210 002A9150  7C 08 03 A6 */	mtlr r0
/* 802AC214 002A9154  38 21 00 10 */	addi r1, r1, 0x10
/* 802AC218 002A9158  4E 80 00 20 */	blr 

.global init__Q34Game6Kurage11StateAttackFPQ24Game9EnemyBasePQ24Game8StateArg
init__Q34Game6Kurage11StateAttackFPQ24Game9EnemyBasePQ24Game8StateArg:
/* 802AC21C 002A915C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802AC220 002A9160  7C 08 02 A6 */	mflr r0
/* 802AC224 002A9164  38 A0 FF FF */	li r5, -1
/* 802AC228 002A9168  C0 02 DD 08 */	lfs f0, lbl_8051C068@sda21(r2)
/* 802AC22C 002A916C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802AC230 002A9170  38 00 00 00 */	li r0, 0
/* 802AC234 002A9174  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802AC238 002A9178  7C 9F 23 78 */	mr r31, r4
/* 802AC23C 002A917C  7F E3 FB 78 */	mr r3, r31
/* 802AC240 002A9180  80 84 01 E0 */	lwz r4, 0x1e0(r4)
/* 802AC244 002A9184  60 84 00 04 */	ori r4, r4, 4
/* 802AC248 002A9188  90 9F 01 E0 */	stw r4, 0x1e0(r31)
/* 802AC24C 002A918C  90 BF 02 C0 */	stw r5, 0x2c0(r31)
/* 802AC250 002A9190  D0 1F 02 C4 */	stfs f0, 0x2c4(r31)
/* 802AC254 002A9194  90 1F 02 E0 */	stw r0, 0x2e0(r31)
/* 802AC258 002A9198  98 1F 02 DC */	stb r0, 0x2dc(r31)
/* 802AC25C 002A919C  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 802AC260 002A91A0  54 00 06 B0 */	rlwinm r0, r0, 0, 0x1a, 0x18
/* 802AC264 002A91A4  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 802AC268 002A91A8  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 802AC26C 002A91AC  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 802AC270 002A91B0  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 802AC274 002A91B4  4B E5 57 59 */	bl setEmotionExcitement__Q24Game9EnemyBaseFv
/* 802AC278 002A91B8  7F E3 FB 78 */	mr r3, r31
/* 802AC27C 002A91BC  38 80 00 09 */	li r4, 9
/* 802AC280 002A91C0  38 A0 00 00 */	li r5, 0
/* 802AC284 002A91C4  4B E5 8D 81 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 802AC288 002A91C8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802AC28C 002A91CC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802AC290 002A91D0  7C 08 03 A6 */	mtlr r0
/* 802AC294 002A91D4  38 21 00 10 */	addi r1, r1, 0x10
/* 802AC298 002A91D8  4E 80 00 20 */	blr 

.global exec__Q34Game6Kurage11StateAttackFPQ24Game9EnemyBase
exec__Q34Game6Kurage11StateAttackFPQ24Game9EnemyBase:
/* 802AC29C 002A91DC  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 802AC2A0 002A91E0  7C 08 02 A6 */	mflr r0
/* 802AC2A4 002A91E4  90 01 00 54 */	stw r0, 0x54(r1)
/* 802AC2A8 002A91E8  DB E1 00 40 */	stfd f31, 0x40(r1)
/* 802AC2AC 002A91EC  F3 E1 00 48 */	psq_st f31, 72(r1), 0, qr0
/* 802AC2B0 002A91F0  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 802AC2B4 002A91F4  93 C1 00 38 */	stw r30, 0x38(r1)
/* 802AC2B8 002A91F8  C0 02 DD 08 */	lfs f0, lbl_8051C068@sda21(r2)
/* 802AC2BC 002A91FC  7C 9F 23 78 */	mr r31, r4
/* 802AC2C0 002A9200  C0 24 02 00 */	lfs f1, 0x200(r4)
/* 802AC2C4 002A9204  7C 7E 1B 78 */	mr r30, r3
/* 802AC2C8 002A9208  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802AC2CC 002A920C  4C 40 13 82 */	cror 2, 0, 2
/* 802AC2D0 002A9210  41 82 00 28 */	beq lbl_802AC2F8
/* 802AC2D4 002A9214  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 802AC2D8 002A9218  C0 3F 02 C4 */	lfs f1, 0x2c4(r31)
/* 802AC2DC 002A921C  C0 03 08 94 */	lfs f0, 0x894(r3)
/* 802AC2E0 002A9220  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802AC2E4 002A9224  41 81 00 14 */	bgt lbl_802AC2F8
/* 802AC2E8 002A9228  C0 3F 02 CC */	lfs f1, 0x2cc(r31)
/* 802AC2EC 002A922C  C0 03 08 E4 */	lfs f0, 0x8e4(r3)
/* 802AC2F0 002A9230  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802AC2F4 002A9234  40 81 00 0C */	ble lbl_802AC300
lbl_802AC2F8:
/* 802AC2F8 002A9238  7F E3 FB 78 */	mr r3, r31
/* 802AC2FC 002A923C  4B E5 8F A5 */	bl finishMotion__Q24Game9EnemyBaseFv
lbl_802AC300:
/* 802AC300 002A9240  7F E3 FB 78 */	mr r3, r31
/* 802AC304 002A9244  48 00 1D 61 */	bl getAttackPitchOffset__Q34Game6Kurage3ObjFv
/* 802AC308 002A9248  C0 42 DD 38 */	lfs f2, lbl_8051C098@sda21(r2)
/* 802AC30C 002A924C  7F E3 FB 78 */	mr r3, r31
/* 802AC310 002A9250  48 00 1A 41 */	bl setHeightVelocity__Q34Game6Kurage3ObjFff
/* 802AC314 002A9254  88 1F 02 DC */	lbz r0, 0x2dc(r31)
/* 802AC318 002A9258  FF E0 08 90 */	fmr f31, f1
/* 802AC31C 002A925C  28 00 00 00 */	cmplwi r0, 0
/* 802AC320 002A9260  41 82 00 60 */	beq lbl_802AC380
/* 802AC324 002A9264  7F E3 FB 78 */	mr r3, r31
/* 802AC328 002A9268  48 00 2B 91 */	bl suckPikmin__Q34Game6Kurage3ObjFf
/* 802AC32C 002A926C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802AC330 002A9270  41 82 00 0C */	beq lbl_802AC33C
/* 802AC334 002A9274  7F E3 FB 78 */	mr r3, r31
/* 802AC338 002A9278  4B E5 8F 69 */	bl finishMotion__Q24Game9EnemyBaseFv
lbl_802AC33C:
/* 802AC33C 002A927C  7F E4 FB 78 */	mr r4, r31
/* 802AC340 002A9280  38 61 00 14 */	addi r3, r1, 0x14
/* 802AC344 002A9284  81 9F 00 00 */	lwz r12, 0(r31)
/* 802AC348 002A9288  81 8C 00 08 */	lwz r12, 8(r12)
/* 802AC34C 002A928C  7D 89 03 A6 */	mtctr r12
/* 802AC350 002A9290  4E 80 04 21 */	bctrl 
/* 802AC354 002A9294  C0 21 00 18 */	lfs f1, 0x18(r1)
/* 802AC358 002A9298  7F E3 FB 78 */	mr r3, r31
/* 802AC35C 002A929C  C0 41 00 14 */	lfs f2, 0x14(r1)
/* 802AC360 002A92A0  38 81 00 2C */	addi r4, r1, 0x2c
/* 802AC364 002A92A4  EC 01 F8 28 */	fsubs f0, f1, f31
/* 802AC368 002A92A8  D0 21 00 30 */	stfs f1, 0x30(r1)
/* 802AC36C 002A92AC  C0 21 00 1C */	lfs f1, 0x1c(r1)
/* 802AC370 002A92B0  D0 41 00 2C */	stfs f2, 0x2c(r1)
/* 802AC374 002A92B4  D0 21 00 34 */	stfs f1, 0x34(r1)
/* 802AC378 002A92B8  D0 01 00 30 */	stfs f0, 0x30(r1)
/* 802AC37C 002A92BC  48 00 34 81 */	bl "updateSuckEffect__Q34Game6Kurage3ObjFR10Vector3<f>"
lbl_802AC380:
/* 802AC380 002A92C0  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 802AC384 002A92C4  C0 3F 02 C4 */	lfs f1, 0x2c4(r31)
/* 802AC388 002A92C8  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 802AC38C 002A92CC  EC 01 00 2A */	fadds f0, f1, f0
/* 802AC390 002A92D0  D0 1F 02 C4 */	stfs f0, 0x2c4(r31)
/* 802AC394 002A92D4  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 802AC398 002A92D8  88 03 00 24 */	lbz r0, 0x24(r3)
/* 802AC39C 002A92DC  28 00 00 00 */	cmplwi r0, 0
/* 802AC3A0 002A92E0  41 82 01 20 */	beq lbl_802AC4C0
/* 802AC3A4 002A92E4  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 802AC3A8 002A92E8  28 00 00 02 */	cmplwi r0, 2
/* 802AC3AC 002A92EC  40 82 00 54 */	bne lbl_802AC400
/* 802AC3B0 002A92F0  7F E4 FB 78 */	mr r4, r31
/* 802AC3B4 002A92F4  38 61 00 08 */	addi r3, r1, 8
/* 802AC3B8 002A92F8  81 9F 00 00 */	lwz r12, 0(r31)
/* 802AC3BC 002A92FC  81 8C 00 08 */	lwz r12, 8(r12)
/* 802AC3C0 002A9300  7D 89 03 A6 */	mtctr r12
/* 802AC3C4 002A9304  4E 80 04 21 */	bctrl 
/* 802AC3C8 002A9308  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 802AC3CC 002A930C  7F E3 FB 78 */	mr r3, r31
/* 802AC3D0 002A9310  C0 41 00 08 */	lfs f2, 8(r1)
/* 802AC3D4 002A9314  38 81 00 20 */	addi r4, r1, 0x20
/* 802AC3D8 002A9318  EC 01 F8 28 */	fsubs f0, f1, f31
/* 802AC3DC 002A931C  D0 21 00 24 */	stfs f1, 0x24(r1)
/* 802AC3E0 002A9320  C0 21 00 10 */	lfs f1, 0x10(r1)
/* 802AC3E4 002A9324  D0 41 00 20 */	stfs f2, 0x20(r1)
/* 802AC3E8 002A9328  D0 21 00 28 */	stfs f1, 0x28(r1)
/* 802AC3EC 002A932C  D0 01 00 24 */	stfs f0, 0x24(r1)
/* 802AC3F0 002A9330  48 00 33 B5 */	bl "startSuckEffect__Q34Game6Kurage3ObjFR10Vector3<f>"
/* 802AC3F4 002A9334  38 00 00 01 */	li r0, 1
/* 802AC3F8 002A9338  98 1F 02 DC */	stb r0, 0x2dc(r31)
/* 802AC3FC 002A933C  48 00 00 C4 */	b lbl_802AC4C0
lbl_802AC400:
/* 802AC400 002A9340  28 00 00 01 */	cmplwi r0, 1
/* 802AC404 002A9344  40 82 00 28 */	bne lbl_802AC42C
/* 802AC408 002A9348  7F E3 FB 78 */	mr r3, r31
/* 802AC40C 002A934C  4B E5 AE F5 */	bl isFinishMotion__Q24Game9EnemyBaseFv
/* 802AC410 002A9350  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802AC414 002A9354  41 82 00 AC */	beq lbl_802AC4C0
/* 802AC418 002A9358  7F E3 FB 78 */	mr r3, r31
/* 802AC41C 002A935C  48 00 34 05 */	bl finishSuckEffect__Q34Game6Kurage3ObjFv
/* 802AC420 002A9360  38 00 00 00 */	li r0, 0
/* 802AC424 002A9364  98 1F 02 DC */	stb r0, 0x2dc(r31)
/* 802AC428 002A9368  48 00 00 98 */	b lbl_802AC4C0
lbl_802AC42C:
/* 802AC42C 002A936C  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 802AC430 002A9370  40 82 00 90 */	bne lbl_802AC4C0
/* 802AC434 002A9374  7F E3 FB 78 */	mr r3, r31
/* 802AC438 002A9378  48 00 22 59 */	bl getFlyingNextState__Q34Game6Kurage3ObjFv
/* 802AC43C 002A937C  7C 65 1B 79 */	or. r5, r3, r3
/* 802AC440 002A9380  41 80 00 24 */	blt lbl_802AC464
/* 802AC444 002A9384  81 9E 00 00 */	lwz r12, 0(r30)
/* 802AC448 002A9388  7F C3 F3 78 */	mr r3, r30
/* 802AC44C 002A938C  7F E4 FB 78 */	mr r4, r31
/* 802AC450 002A9390  38 C0 00 00 */	li r6, 0
/* 802AC454 002A9394  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802AC458 002A9398  7D 89 03 A6 */	mtctr r12
/* 802AC45C 002A939C  4E 80 04 21 */	bctrl 
/* 802AC460 002A93A0  48 00 00 60 */	b lbl_802AC4C0
lbl_802AC464:
/* 802AC464 002A93A4  FC 20 F8 90 */	fmr f1, f31
/* 802AC468 002A93A8  7F E3 FB 78 */	mr r3, r31
/* 802AC46C 002A93AC  38 80 00 00 */	li r4, 0
/* 802AC470 002A93B0  48 00 27 0D */	bl isSuck__Q34Game6Kurage3ObjFfPQ24Game8Creature
/* 802AC474 002A93B4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802AC478 002A93B8  41 82 00 28 */	beq lbl_802AC4A0
/* 802AC47C 002A93BC  7F C3 F3 78 */	mr r3, r30
/* 802AC480 002A93C0  7F E4 FB 78 */	mr r4, r31
/* 802AC484 002A93C4  81 9E 00 00 */	lwz r12, 0(r30)
/* 802AC488 002A93C8  38 A0 00 04 */	li r5, 4
/* 802AC48C 002A93CC  38 C0 00 00 */	li r6, 0
/* 802AC490 002A93D0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802AC494 002A93D4  7D 89 03 A6 */	mtctr r12
/* 802AC498 002A93D8  4E 80 04 21 */	bctrl 
/* 802AC49C 002A93DC  48 00 00 24 */	b lbl_802AC4C0
lbl_802AC4A0:
/* 802AC4A0 002A93E0  7F C3 F3 78 */	mr r3, r30
/* 802AC4A4 002A93E4  7F E4 FB 78 */	mr r4, r31
/* 802AC4A8 002A93E8  81 9E 00 00 */	lwz r12, 0(r30)
/* 802AC4AC 002A93EC  38 A0 00 01 */	li r5, 1
/* 802AC4B0 002A93F0  38 C0 00 00 */	li r6, 0
/* 802AC4B4 002A93F4  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802AC4B8 002A93F8  7D 89 03 A6 */	mtctr r12
/* 802AC4BC 002A93FC  4E 80 04 21 */	bctrl 
lbl_802AC4C0:
/* 802AC4C0 002A9400  E3 E1 00 48 */	psq_l f31, 72(r1), 0, qr0
/* 802AC4C4 002A9404  80 01 00 54 */	lwz r0, 0x54(r1)
/* 802AC4C8 002A9408  CB E1 00 40 */	lfd f31, 0x40(r1)
/* 802AC4CC 002A940C  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 802AC4D0 002A9410  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 802AC4D4 002A9414  7C 08 03 A6 */	mtlr r0
/* 802AC4D8 002A9418  38 21 00 50 */	addi r1, r1, 0x50
/* 802AC4DC 002A941C  4E 80 00 20 */	blr 

.global cleanup__Q34Game6Kurage11StateAttackFPQ24Game9EnemyBase
cleanup__Q34Game6Kurage11StateAttackFPQ24Game9EnemyBase:
/* 802AC4E0 002A9420  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802AC4E4 002A9424  7C 08 02 A6 */	mflr r0
/* 802AC4E8 002A9428  7C 83 23 78 */	mr r3, r4
/* 802AC4EC 002A942C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802AC4F0 002A9430  38 00 00 00 */	li r0, 0
/* 802AC4F4 002A9434  98 04 02 DC */	stb r0, 0x2dc(r4)
/* 802AC4F8 002A9438  80 04 01 E0 */	lwz r0, 0x1e0(r4)
/* 802AC4FC 002A943C  60 00 00 40 */	ori r0, r0, 0x40
/* 802AC500 002A9440  90 04 01 E0 */	stw r0, 0x1e0(r4)
/* 802AC504 002A9444  4B E5 54 79 */	bl setEmotionCaution__Q24Game9EnemyBaseFv
/* 802AC508 002A9448  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802AC50C 002A944C  7C 08 03 A6 */	mtlr r0
/* 802AC510 002A9450  38 21 00 10 */	addi r1, r1, 0x10
/* 802AC514 002A9454  4E 80 00 20 */	blr 

.global init__Q34Game6Kurage9StateFallFPQ24Game9EnemyBasePQ24Game8StateArg
init__Q34Game6Kurage9StateFallFPQ24Game9EnemyBasePQ24Game8StateArg:
/* 802AC518 002A9458  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802AC51C 002A945C  7C 08 02 A6 */	mflr r0
/* 802AC520 002A9460  C0 02 DD 08 */	lfs f0, lbl_8051C068@sda21(r2)
/* 802AC524 002A9464  90 01 00 14 */	stw r0, 0x14(r1)
/* 802AC528 002A9468  38 00 FF FF */	li r0, -1
/* 802AC52C 002A946C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802AC530 002A9470  7C 9F 23 78 */	mr r31, r4
/* 802AC534 002A9474  7F E3 FB 78 */	mr r3, r31
/* 802AC538 002A9478  90 04 02 C0 */	stw r0, 0x2c0(r4)
/* 802AC53C 002A947C  D0 04 02 C4 */	stfs f0, 0x2c4(r4)
/* 802AC540 002A9480  80 04 01 E0 */	lwz r0, 0x1e0(r4)
/* 802AC544 002A9484  60 00 00 04 */	ori r0, r0, 4
/* 802AC548 002A9488  90 04 01 E0 */	stw r0, 0x1e0(r4)
/* 802AC54C 002A948C  D0 04 01 D4 */	stfs f0, 0x1d4(r4)
/* 802AC550 002A9490  D0 04 01 D8 */	stfs f0, 0x1d8(r4)
/* 802AC554 002A9494  D0 04 01 DC */	stfs f0, 0x1dc(r4)
/* 802AC558 002A9498  4B E5 54 75 */	bl setEmotionExcitement__Q24Game9EnemyBaseFv
/* 802AC55C 002A949C  7F E3 FB 78 */	mr r3, r31
/* 802AC560 002A94A0  38 80 00 08 */	li r4, 8
/* 802AC564 002A94A4  38 A0 00 00 */	li r5, 0
/* 802AC568 002A94A8  4B E5 8A 9D */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 802AC56C 002A94AC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802AC570 002A94B0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802AC574 002A94B4  7C 08 03 A6 */	mtlr r0
/* 802AC578 002A94B8  38 21 00 10 */	addi r1, r1, 0x10
/* 802AC57C 002A94BC  4E 80 00 20 */	blr 

.global exec__Q34Game6Kurage9StateFallFPQ24Game9EnemyBase
exec__Q34Game6Kurage9StateFallFPQ24Game9EnemyBase:
/* 802AC580 002A94C0  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 802AC584 002A94C4  7C 08 02 A6 */	mflr r0
/* 802AC588 002A94C8  90 01 00 44 */	stw r0, 0x44(r1)
/* 802AC58C 002A94CC  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 802AC590 002A94D0  F3 E1 00 38 */	psq_st f31, 56(r1), 0, qr0
/* 802AC594 002A94D4  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 802AC598 002A94D8  93 C1 00 28 */	stw r30, 0x28(r1)
/* 802AC59C 002A94DC  7C 9F 23 78 */	mr r31, r4
/* 802AC5A0 002A94E0  7C 7E 1B 78 */	mr r30, r3
/* 802AC5A4 002A94E4  81 9F 00 00 */	lwz r12, 0(r31)
/* 802AC5A8 002A94E8  7F E3 FB 78 */	mr r3, r31
/* 802AC5AC 002A94EC  81 8C 00 CC */	lwz r12, 0xcc(r12)
/* 802AC5B0 002A94F0  7D 89 03 A6 */	mtctr r12
/* 802AC5B4 002A94F4  4E 80 04 21 */	bctrl 
/* 802AC5B8 002A94F8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802AC5BC 002A94FC  41 82 00 9C */	beq lbl_802AC658
/* 802AC5C0 002A9500  C3 FF 02 C4 */	lfs f31, 0x2c4(r31)
/* 802AC5C4 002A9504  7F E3 FB 78 */	mr r3, r31
/* 802AC5C8 002A9508  FC 20 F8 90 */	fmr f1, f31
/* 802AC5CC 002A950C  48 00 1F 2D */	bl getFallPitchOffset__Q34Game6Kurage3ObjFf
/* 802AC5D0 002A9510  C0 42 DD 3C */	lfs f2, lbl_8051C09C@sda21(r2)
/* 802AC5D4 002A9514  7F E3 FB 78 */	mr r3, r31
/* 802AC5D8 002A9518  48 00 17 79 */	bl setHeightVelocity__Q34Game6Kurage3ObjFff
/* 802AC5DC 002A951C  C0 22 DD 18 */	lfs f1, lbl_8051C078@sda21(r2)
/* 802AC5E0 002A9520  C0 02 DD 0C */	lfs f0, lbl_8051C06C@sda21(r2)
/* 802AC5E4 002A9524  EC 3F 00 72 */	fmuls f1, f31, f1
/* 802AC5E8 002A9528  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802AC5EC 002A952C  40 81 00 6C */	ble lbl_802AC658
/* 802AC5F0 002A9530  7F E4 FB 78 */	mr r4, r31
/* 802AC5F4 002A9534  38 61 00 08 */	addi r3, r1, 8
/* 802AC5F8 002A9538  81 9F 00 00 */	lwz r12, 0(r31)
/* 802AC5FC 002A953C  81 8C 00 6C */	lwz r12, 0x6c(r12)
/* 802AC600 002A9540  7D 89 03 A6 */	mtctr r12
/* 802AC604 002A9544  4E 80 04 21 */	bctrl 
/* 802AC608 002A9548  C0 41 00 0C */	lfs f2, 0xc(r1)
/* 802AC60C 002A954C  7F E3 FB 78 */	mr r3, r31
/* 802AC610 002A9550  C0 02 DD 20 */	lfs f0, lbl_8051C080@sda21(r2)
/* 802AC614 002A9554  38 81 00 14 */	addi r4, r1, 0x14
/* 802AC618 002A9558  C0 61 00 08 */	lfs f3, 8(r1)
/* 802AC61C 002A955C  C0 21 00 10 */	lfs f1, 0x10(r1)
/* 802AC620 002A9560  EC 02 00 28 */	fsubs f0, f2, f0
/* 802AC624 002A9564  D0 41 00 18 */	stfs f2, 0x18(r1)
/* 802AC628 002A9568  D0 61 00 14 */	stfs f3, 0x14(r1)
/* 802AC62C 002A956C  D0 21 00 1C */	stfs f1, 0x1c(r1)
/* 802AC630 002A9570  D0 01 00 18 */	stfs f0, 0x18(r1)
/* 802AC634 002A9574  81 9F 00 00 */	lwz r12, 0(r31)
/* 802AC638 002A9578  81 8C 00 68 */	lwz r12, 0x68(r12)
/* 802AC63C 002A957C  7D 89 03 A6 */	mtctr r12
/* 802AC640 002A9580  4E 80 04 21 */	bctrl 
/* 802AC644 002A9584  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 802AC648 002A9588  7F E3 FB 78 */	mr r3, r31
/* 802AC64C 002A958C  54 00 07 B8 */	rlwinm r0, r0, 0, 0x1e, 0x1c
/* 802AC650 002A9590  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 802AC654 002A9594  4B E5 8C 4D */	bl finishMotion__Q24Game9EnemyBaseFv
lbl_802AC658:
/* 802AC658 002A9598  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 802AC65C 002A959C  C0 3F 02 C4 */	lfs f1, 0x2c4(r31)
/* 802AC660 002A95A0  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 802AC664 002A95A4  EC 01 00 2A */	fadds f0, f1, f0
/* 802AC668 002A95A8  D0 1F 02 C4 */	stfs f0, 0x2c4(r31)
/* 802AC66C 002A95AC  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 802AC670 002A95B0  88 03 00 24 */	lbz r0, 0x24(r3)
/* 802AC674 002A95B4  28 00 00 00 */	cmplwi r0, 0
/* 802AC678 002A95B8  41 82 00 68 */	beq lbl_802AC6E0
/* 802AC67C 002A95BC  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 802AC680 002A95C0  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 802AC684 002A95C4  40 82 00 5C */	bne lbl_802AC6E0
/* 802AC688 002A95C8  C0 3F 02 00 */	lfs f1, 0x200(r31)
/* 802AC68C 002A95CC  C0 02 DD 08 */	lfs f0, lbl_8051C068@sda21(r2)
/* 802AC690 002A95D0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802AC694 002A95D4  4C 40 13 82 */	cror 2, 0, 2
/* 802AC698 002A95D8  40 82 00 28 */	bne lbl_802AC6C0
/* 802AC69C 002A95DC  7F C3 F3 78 */	mr r3, r30
/* 802AC6A0 002A95E0  7F E4 FB 78 */	mr r4, r31
/* 802AC6A4 002A95E4  81 9E 00 00 */	lwz r12, 0(r30)
/* 802AC6A8 002A95E8  38 A0 00 00 */	li r5, 0
/* 802AC6AC 002A95EC  38 C0 00 00 */	li r6, 0
/* 802AC6B0 002A95F0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802AC6B4 002A95F4  7D 89 03 A6 */	mtctr r12
/* 802AC6B8 002A95F8  4E 80 04 21 */	bctrl 
/* 802AC6BC 002A95FC  48 00 00 24 */	b lbl_802AC6E0
lbl_802AC6C0:
/* 802AC6C0 002A9600  7F C3 F3 78 */	mr r3, r30
/* 802AC6C4 002A9604  7F E4 FB 78 */	mr r4, r31
/* 802AC6C8 002A9608  81 9E 00 00 */	lwz r12, 0(r30)
/* 802AC6CC 002A960C  38 A0 00 06 */	li r5, 6
/* 802AC6D0 002A9610  38 C0 00 00 */	li r6, 0
/* 802AC6D4 002A9614  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802AC6D8 002A9618  7D 89 03 A6 */	mtctr r12
/* 802AC6DC 002A961C  4E 80 04 21 */	bctrl 
lbl_802AC6E0:
/* 802AC6E0 002A9620  E3 E1 00 38 */	psq_l f31, 56(r1), 0, qr0
/* 802AC6E4 002A9624  80 01 00 44 */	lwz r0, 0x44(r1)
/* 802AC6E8 002A9628  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 802AC6EC 002A962C  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 802AC6F0 002A9630  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 802AC6F4 002A9634  7C 08 03 A6 */	mtlr r0
/* 802AC6F8 002A9638  38 21 00 40 */	addi r1, r1, 0x40
/* 802AC6FC 002A963C  4E 80 00 20 */	blr 

.global cleanup__Q34Game6Kurage9StateFallFPQ24Game9EnemyBase
cleanup__Q34Game6Kurage9StateFallFPQ24Game9EnemyBase:
/* 802AC700 002A9640  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802AC704 002A9644  7C 08 02 A6 */	mflr r0
/* 802AC708 002A9648  7C 83 23 78 */	mr r3, r4
/* 802AC70C 002A964C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802AC710 002A9650  4B E5 52 6D */	bl setEmotionCaution__Q24Game9EnemyBaseFv
/* 802AC714 002A9654  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802AC718 002A9658  7C 08 03 A6 */	mtlr r0
/* 802AC71C 002A965C  38 21 00 10 */	addi r1, r1, 0x10
/* 802AC720 002A9660  4E 80 00 20 */	blr 

.global init__Q34Game6Kurage9StateLandFPQ24Game9EnemyBasePQ24Game8StateArg
init__Q34Game6Kurage9StateLandFPQ24Game9EnemyBasePQ24Game8StateArg:
/* 802AC724 002A9664  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 802AC728 002A9668  7C 08 02 A6 */	mflr r0
/* 802AC72C 002A966C  C0 02 DD 08 */	lfs f0, lbl_8051C068@sda21(r2)
/* 802AC730 002A9670  90 01 00 34 */	stw r0, 0x34(r1)
/* 802AC734 002A9674  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 802AC738 002A9678  7C 9F 23 78 */	mr r31, r4
/* 802AC73C 002A967C  7F E3 FB 78 */	mr r3, r31
/* 802AC740 002A9680  D0 04 02 C4 */	stfs f0, 0x2c4(r4)
/* 802AC744 002A9684  80 04 01 E0 */	lwz r0, 0x1e0(r4)
/* 802AC748 002A9688  54 00 07 B8 */	rlwinm r0, r0, 0, 0x1e, 0x1c
/* 802AC74C 002A968C  90 04 01 E0 */	stw r0, 0x1e0(r4)
/* 802AC750 002A9690  D0 04 01 D4 */	stfs f0, 0x1d4(r4)
/* 802AC754 002A9694  D0 04 01 D8 */	stfs f0, 0x1d8(r4)
/* 802AC758 002A9698  D0 04 01 DC */	stfs f0, 0x1dc(r4)
/* 802AC75C 002A969C  4B E5 52 71 */	bl setEmotionExcitement__Q24Game9EnemyBaseFv
/* 802AC760 002A96A0  7F E3 FB 78 */	mr r3, r31
/* 802AC764 002A96A4  38 80 00 06 */	li r4, 6
/* 802AC768 002A96A8  38 A0 00 00 */	li r5, 0
/* 802AC76C 002A96AC  4B E5 88 99 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 802AC770 002A96B0  7F E3 FB 78 */	mr r3, r31
/* 802AC774 002A96B4  48 00 31 79 */	bl createDownEffect__Q34Game6Kurage3ObjFv
/* 802AC778 002A96B8  7F E4 FB 78 */	mr r4, r31
/* 802AC77C 002A96BC  38 61 00 08 */	addi r3, r1, 8
/* 802AC780 002A96C0  81 9F 00 00 */	lwz r12, 0(r31)
/* 802AC784 002A96C4  81 8C 00 08 */	lwz r12, 8(r12)
/* 802AC788 002A96C8  7D 89 03 A6 */	mtctr r12
/* 802AC78C 002A96CC  4E 80 04 21 */	bctrl 
/* 802AC790 002A96D0  C0 41 00 08 */	lfs f2, 8(r1)
/* 802AC794 002A96D4  38 A1 00 14 */	addi r5, r1, 0x14
/* 802AC798 002A96D8  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 802AC79C 002A96DC  38 80 00 00 */	li r4, 0
/* 802AC7A0 002A96E0  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 802AC7A4 002A96E4  38 C0 00 02 */	li r6, 2
/* 802AC7A8 002A96E8  D0 41 00 14 */	stfs f2, 0x14(r1)
/* 802AC7AC 002A96EC  80 6D 96 A0 */	lwz r3, cameraMgr__4Game@sda21(r13)
/* 802AC7B0 002A96F0  D0 21 00 18 */	stfs f1, 0x18(r1)
/* 802AC7B4 002A96F4  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 802AC7B8 002A96F8  4B FA 5A 85 */	bl "startVibration__Q24Game9CameraMgrFiR10Vector3<f>i"
/* 802AC7BC 002A96FC  80 6D 96 A8 */	lwz r3, rumbleMgr__4Game@sda21(r13)
/* 802AC7C0 002A9700  38 A1 00 14 */	addi r5, r1, 0x14
/* 802AC7C4 002A9704  38 80 00 09 */	li r4, 9
/* 802AC7C8 002A9708  38 C0 00 02 */	li r6, 2
/* 802AC7CC 002A970C  4B FA 6F B5 */	bl "startRumble__Q24Game9RumbleMgrFiR10Vector3<f>i"
/* 802AC7D0 002A9710  80 01 00 34 */	lwz r0, 0x34(r1)
/* 802AC7D4 002A9714  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 802AC7D8 002A9718  7C 08 03 A6 */	mtlr r0
/* 802AC7DC 002A971C  38 21 00 30 */	addi r1, r1, 0x30
/* 802AC7E0 002A9720  4E 80 00 20 */	blr 

.global exec__Q34Game6Kurage9StateLandFPQ24Game9EnemyBase
exec__Q34Game6Kurage9StateLandFPQ24Game9EnemyBase:
/* 802AC7E4 002A9724  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802AC7E8 002A9728  7C 08 02 A6 */	mflr r0
/* 802AC7EC 002A972C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802AC7F0 002A9730  80 A4 01 88 */	lwz r5, 0x188(r4)
/* 802AC7F4 002A9734  88 05 00 24 */	lbz r0, 0x24(r5)
/* 802AC7F8 002A9738  28 00 00 00 */	cmplwi r0, 0
/* 802AC7FC 002A973C  41 82 00 58 */	beq lbl_802AC854
/* 802AC800 002A9740  80 05 00 1C */	lwz r0, 0x1c(r5)
/* 802AC804 002A9744  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 802AC808 002A9748  40 82 00 4C */	bne lbl_802AC854
/* 802AC80C 002A974C  C0 24 02 00 */	lfs f1, 0x200(r4)
/* 802AC810 002A9750  C0 02 DD 08 */	lfs f0, lbl_8051C068@sda21(r2)
/* 802AC814 002A9754  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802AC818 002A9758  4C 40 13 82 */	cror 2, 0, 2
/* 802AC81C 002A975C  40 82 00 20 */	bne lbl_802AC83C
/* 802AC820 002A9760  81 83 00 00 */	lwz r12, 0(r3)
/* 802AC824 002A9764  38 A0 00 00 */	li r5, 0
/* 802AC828 002A9768  38 C0 00 00 */	li r6, 0
/* 802AC82C 002A976C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802AC830 002A9770  7D 89 03 A6 */	mtctr r12
/* 802AC834 002A9774  4E 80 04 21 */	bctrl 
/* 802AC838 002A9778  48 00 00 1C */	b lbl_802AC854
lbl_802AC83C:
/* 802AC83C 002A977C  81 83 00 00 */	lwz r12, 0(r3)
/* 802AC840 002A9780  38 A0 00 07 */	li r5, 7
/* 802AC844 002A9784  38 C0 00 00 */	li r6, 0
/* 802AC848 002A9788  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802AC84C 002A978C  7D 89 03 A6 */	mtctr r12
/* 802AC850 002A9790  4E 80 04 21 */	bctrl 
lbl_802AC854:
/* 802AC854 002A9794  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802AC858 002A9798  7C 08 03 A6 */	mtlr r0
/* 802AC85C 002A979C  38 21 00 10 */	addi r1, r1, 0x10
/* 802AC860 002A97A0  4E 80 00 20 */	blr 

.global cleanup__Q34Game6Kurage9StateLandFPQ24Game9EnemyBase
cleanup__Q34Game6Kurage9StateLandFPQ24Game9EnemyBase:
/* 802AC864 002A97A4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802AC868 002A97A8  7C 08 02 A6 */	mflr r0
/* 802AC86C 002A97AC  7C 83 23 78 */	mr r3, r4
/* 802AC870 002A97B0  90 01 00 14 */	stw r0, 0x14(r1)
/* 802AC874 002A97B4  4B E5 51 09 */	bl setEmotionCaution__Q24Game9EnemyBaseFv
/* 802AC878 002A97B8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802AC87C 002A97BC  7C 08 03 A6 */	mtlr r0
/* 802AC880 002A97C0  38 21 00 10 */	addi r1, r1, 0x10
/* 802AC884 002A97C4  4E 80 00 20 */	blr 

.global init__Q34Game6Kurage12StateTakeOffFPQ24Game9EnemyBasePQ24Game8StateArg
init__Q34Game6Kurage12StateTakeOffFPQ24Game9EnemyBasePQ24Game8StateArg:
/* 802AC888 002A97C8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802AC88C 002A97CC  7C 08 02 A6 */	mflr r0
/* 802AC890 002A97D0  C0 02 DD 08 */	lfs f0, lbl_8051C068@sda21(r2)
/* 802AC894 002A97D4  90 01 00 14 */	stw r0, 0x14(r1)
/* 802AC898 002A97D8  38 00 FF FF */	li r0, -1
/* 802AC89C 002A97DC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802AC8A0 002A97E0  7C 9F 23 78 */	mr r31, r4
/* 802AC8A4 002A97E4  7F E3 FB 78 */	mr r3, r31
/* 802AC8A8 002A97E8  90 04 02 C0 */	stw r0, 0x2c0(r4)
/* 802AC8AC 002A97EC  D0 04 02 C4 */	stfs f0, 0x2c4(r4)
/* 802AC8B0 002A97F0  80 04 01 E0 */	lwz r0, 0x1e0(r4)
/* 802AC8B4 002A97F4  54 00 07 B8 */	rlwinm r0, r0, 0, 0x1e, 0x1c
/* 802AC8B8 002A97F8  90 04 01 E0 */	stw r0, 0x1e0(r4)
/* 802AC8BC 002A97FC  D0 04 01 D4 */	stfs f0, 0x1d4(r4)
/* 802AC8C0 002A9800  D0 04 01 D8 */	stfs f0, 0x1d8(r4)
/* 802AC8C4 002A9804  D0 04 01 DC */	stfs f0, 0x1dc(r4)
/* 802AC8C8 002A9808  4B E5 51 05 */	bl setEmotionExcitement__Q24Game9EnemyBaseFv
/* 802AC8CC 002A980C  7F E3 FB 78 */	mr r3, r31
/* 802AC8D0 002A9810  38 80 00 07 */	li r4, 7
/* 802AC8D4 002A9814  38 A0 00 00 */	li r5, 0
/* 802AC8D8 002A9818  4B E5 87 2D */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 802AC8DC 002A981C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802AC8E0 002A9820  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802AC8E4 002A9824  7C 08 03 A6 */	mtlr r0
/* 802AC8E8 002A9828  38 21 00 10 */	addi r1, r1, 0x10
/* 802AC8EC 002A982C  4E 80 00 20 */	blr 

.global exec__Q34Game6Kurage12StateTakeOffFPQ24Game9EnemyBase
exec__Q34Game6Kurage12StateTakeOffFPQ24Game9EnemyBase:
/* 802AC8F0 002A9830  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802AC8F4 002A9834  7C 08 02 A6 */	mflr r0
/* 802AC8F8 002A9838  90 01 00 14 */	stw r0, 0x14(r1)
/* 802AC8FC 002A983C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802AC900 002A9840  7C 9F 23 78 */	mr r31, r4
/* 802AC904 002A9844  93 C1 00 08 */	stw r30, 8(r1)
/* 802AC908 002A9848  7C 7E 1B 78 */	mr r30, r3
/* 802AC90C 002A984C  7F E3 FB 78 */	mr r3, r31
/* 802AC910 002A9850  81 9F 00 00 */	lwz r12, 0(r31)
/* 802AC914 002A9854  81 8C 00 CC */	lwz r12, 0xcc(r12)
/* 802AC918 002A9858  7D 89 03 A6 */	mtctr r12
/* 802AC91C 002A985C  4E 80 04 21 */	bctrl 
/* 802AC920 002A9860  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802AC924 002A9864  41 82 00 18 */	beq lbl_802AC93C
/* 802AC928 002A9868  7F E3 FB 78 */	mr r3, r31
/* 802AC92C 002A986C  48 00 1A 89 */	bl getTakeOffPitchOffset__Q34Game6Kurage3ObjFv
/* 802AC930 002A9870  C0 42 DD 3C */	lfs f2, lbl_8051C09C@sda21(r2)
/* 802AC934 002A9874  7F E3 FB 78 */	mr r3, r31
/* 802AC938 002A9878  48 00 14 19 */	bl setHeightVelocity__Q34Game6Kurage3ObjFff
lbl_802AC93C:
/* 802AC93C 002A987C  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 802AC940 002A9880  88 03 00 24 */	lbz r0, 0x24(r3)
/* 802AC944 002A9884  28 00 00 00 */	cmplwi r0, 0
/* 802AC948 002A9888  41 82 00 80 */	beq lbl_802AC9C8
/* 802AC94C 002A988C  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 802AC950 002A9890  28 00 00 02 */	cmplwi r0, 2
/* 802AC954 002A9894  40 82 00 14 */	bne lbl_802AC968
/* 802AC958 002A9898  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 802AC95C 002A989C  60 00 00 04 */	ori r0, r0, 4
/* 802AC960 002A98A0  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 802AC964 002A98A4  48 00 00 64 */	b lbl_802AC9C8
lbl_802AC968:
/* 802AC968 002A98A8  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 802AC96C 002A98AC  40 82 00 5C */	bne lbl_802AC9C8
/* 802AC970 002A98B0  C0 3F 02 00 */	lfs f1, 0x200(r31)
/* 802AC974 002A98B4  C0 02 DD 08 */	lfs f0, lbl_8051C068@sda21(r2)
/* 802AC978 002A98B8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802AC97C 002A98BC  4C 40 13 82 */	cror 2, 0, 2
/* 802AC980 002A98C0  40 82 00 28 */	bne lbl_802AC9A8
/* 802AC984 002A98C4  7F C3 F3 78 */	mr r3, r30
/* 802AC988 002A98C8  7F E4 FB 78 */	mr r4, r31
/* 802AC98C 002A98CC  81 9E 00 00 */	lwz r12, 0(r30)
/* 802AC990 002A98D0  38 A0 00 00 */	li r5, 0
/* 802AC994 002A98D4  38 C0 00 00 */	li r6, 0
/* 802AC998 002A98D8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802AC99C 002A98DC  7D 89 03 A6 */	mtctr r12
/* 802AC9A0 002A98E0  4E 80 04 21 */	bctrl 
/* 802AC9A4 002A98E4  48 00 00 24 */	b lbl_802AC9C8
lbl_802AC9A8:
/* 802AC9A8 002A98E8  7F C3 F3 78 */	mr r3, r30
/* 802AC9AC 002A98EC  7F E4 FB 78 */	mr r4, r31
/* 802AC9B0 002A98F0  81 9E 00 00 */	lwz r12, 0(r30)
/* 802AC9B4 002A98F4  38 A0 00 01 */	li r5, 1
/* 802AC9B8 002A98F8  38 C0 00 00 */	li r6, 0
/* 802AC9BC 002A98FC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802AC9C0 002A9900  7D 89 03 A6 */	mtctr r12
/* 802AC9C4 002A9904  4E 80 04 21 */	bctrl 
lbl_802AC9C8:
/* 802AC9C8 002A9908  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802AC9CC 002A990C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802AC9D0 002A9910  83 C1 00 08 */	lwz r30, 8(r1)
/* 802AC9D4 002A9914  7C 08 03 A6 */	mtlr r0
/* 802AC9D8 002A9918  38 21 00 10 */	addi r1, r1, 0x10
/* 802AC9DC 002A991C  4E 80 00 20 */	blr 

.global cleanup__Q34Game6Kurage12StateTakeOffFPQ24Game9EnemyBase
cleanup__Q34Game6Kurage12StateTakeOffFPQ24Game9EnemyBase:
/* 802AC9E0 002A9920  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802AC9E4 002A9924  7C 08 02 A6 */	mflr r0
/* 802AC9E8 002A9928  7C 83 23 78 */	mr r3, r4
/* 802AC9EC 002A992C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802AC9F0 002A9930  4B E5 4F 8D */	bl setEmotionCaution__Q24Game9EnemyBaseFv
/* 802AC9F4 002A9934  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802AC9F8 002A9938  7C 08 03 A6 */	mtlr r0
/* 802AC9FC 002A993C  38 21 00 10 */	addi r1, r1, 0x10
/* 802ACA00 002A9940  4E 80 00 20 */	blr 

.global init__Q34Game6Kurage11StateGroundFPQ24Game9EnemyBasePQ24Game8StateArg
init__Q34Game6Kurage11StateGroundFPQ24Game9EnemyBasePQ24Game8StateArg:
/* 802ACA04 002A9944  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802ACA08 002A9948  7C 08 02 A6 */	mflr r0
/* 802ACA0C 002A994C  C0 02 DD 08 */	lfs f0, lbl_8051C068@sda21(r2)
/* 802ACA10 002A9950  90 01 00 14 */	stw r0, 0x14(r1)
/* 802ACA14 002A9954  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802ACA18 002A9958  7C 9F 23 78 */	mr r31, r4
/* 802ACA1C 002A995C  7F E3 FB 78 */	mr r3, r31
/* 802ACA20 002A9960  D0 04 02 C4 */	stfs f0, 0x2c4(r4)
/* 802ACA24 002A9964  80 04 01 E0 */	lwz r0, 0x1e0(r4)
/* 802ACA28 002A9968  54 00 07 B8 */	rlwinm r0, r0, 0, 0x1e, 0x1c
/* 802ACA2C 002A996C  90 04 01 E0 */	stw r0, 0x1e0(r4)
/* 802ACA30 002A9970  D0 04 01 D4 */	stfs f0, 0x1d4(r4)
/* 802ACA34 002A9974  D0 04 01 D8 */	stfs f0, 0x1d8(r4)
/* 802ACA38 002A9978  D0 04 01 DC */	stfs f0, 0x1dc(r4)
/* 802ACA3C 002A997C  4B E5 4F 91 */	bl setEmotionExcitement__Q24Game9EnemyBaseFv
/* 802ACA40 002A9980  7F E3 FB 78 */	mr r3, r31
/* 802ACA44 002A9984  38 80 00 04 */	li r4, 4
/* 802ACA48 002A9988  38 A0 00 00 */	li r5, 0
/* 802ACA4C 002A998C  4B E5 85 B9 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 802ACA50 002A9990  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802ACA54 002A9994  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802ACA58 002A9998  7C 08 03 A6 */	mtlr r0
/* 802ACA5C 002A999C  38 21 00 10 */	addi r1, r1, 0x10
/* 802ACA60 002A99A0  4E 80 00 20 */	blr 

.global exec__Q34Game6Kurage11StateGroundFPQ24Game9EnemyBase
exec__Q34Game6Kurage11StateGroundFPQ24Game9EnemyBase:
/* 802ACA64 002A99A4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802ACA68 002A99A8  7C 08 02 A6 */	mflr r0
/* 802ACA6C 002A99AC  90 01 00 14 */	stw r0, 0x14(r1)
/* 802ACA70 002A99B0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802ACA74 002A99B4  7C 9F 23 78 */	mr r31, r4
/* 802ACA78 002A99B8  93 C1 00 08 */	stw r30, 8(r1)
/* 802ACA7C 002A99BC  7C 7E 1B 78 */	mr r30, r3
/* 802ACA80 002A99C0  80 04 01 F4 */	lwz r0, 0x1f4(r4)
/* 802ACA84 002A99C4  2C 00 00 00 */	cmpwi r0, 0
/* 802ACA88 002A99C8  41 82 00 18 */	beq lbl_802ACAA0
/* 802ACA8C 002A99CC  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 802ACA90 002A99D0  C0 3F 02 C4 */	lfs f1, 0x2c4(r31)
/* 802ACA94 002A99D4  C0 03 08 6C */	lfs f0, 0x86c(r3)
/* 802ACA98 002A99D8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802ACA9C 002A99DC  40 81 00 0C */	ble lbl_802ACAA8
lbl_802ACAA0:
/* 802ACAA0 002A99E0  7F E3 FB 78 */	mr r3, r31
/* 802ACAA4 002A99E4  4B E5 87 FD */	bl finishMotion__Q24Game9EnemyBaseFv
lbl_802ACAA8:
/* 802ACAA8 002A99E8  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 802ACAAC 002A99EC  C0 3F 02 C4 */	lfs f1, 0x2c4(r31)
/* 802ACAB0 002A99F0  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 802ACAB4 002A99F4  EC 01 00 2A */	fadds f0, f1, f0
/* 802ACAB8 002A99F8  D0 1F 02 C4 */	stfs f0, 0x2c4(r31)
/* 802ACABC 002A99FC  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 802ACAC0 002A9A00  88 03 00 24 */	lbz r0, 0x24(r3)
/* 802ACAC4 002A9A04  28 00 00 00 */	cmplwi r0, 0
/* 802ACAC8 002A9A08  41 82 00 98 */	beq lbl_802ACB60
/* 802ACACC 002A9A0C  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 802ACAD0 002A9A10  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 802ACAD4 002A9A14  40 82 00 8C */	bne lbl_802ACB60
/* 802ACAD8 002A9A18  C0 3F 02 00 */	lfs f1, 0x200(r31)
/* 802ACADC 002A9A1C  C0 02 DD 08 */	lfs f0, lbl_8051C068@sda21(r2)
/* 802ACAE0 002A9A20  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802ACAE4 002A9A24  4C 40 13 82 */	cror 2, 0, 2
/* 802ACAE8 002A9A28  40 82 00 28 */	bne lbl_802ACB10
/* 802ACAEC 002A9A2C  7F C3 F3 78 */	mr r3, r30
/* 802ACAF0 002A9A30  7F E4 FB 78 */	mr r4, r31
/* 802ACAF4 002A9A34  81 9E 00 00 */	lwz r12, 0(r30)
/* 802ACAF8 002A9A38  38 A0 00 00 */	li r5, 0
/* 802ACAFC 002A9A3C  38 C0 00 00 */	li r6, 0
/* 802ACB00 002A9A40  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802ACB04 002A9A44  7D 89 03 A6 */	mtctr r12
/* 802ACB08 002A9A48  4E 80 04 21 */	bctrl 
/* 802ACB0C 002A9A4C  48 00 00 54 */	b lbl_802ACB60
lbl_802ACB10:
/* 802ACB10 002A9A50  80 1F 01 F4 */	lwz r0, 0x1f4(r31)
/* 802ACB14 002A9A54  2C 00 00 00 */	cmpwi r0, 0
/* 802ACB18 002A9A58  41 82 00 28 */	beq lbl_802ACB40
/* 802ACB1C 002A9A5C  7F C3 F3 78 */	mr r3, r30
/* 802ACB20 002A9A60  7F E4 FB 78 */	mr r4, r31
/* 802ACB24 002A9A64  81 9E 00 00 */	lwz r12, 0(r30)
/* 802ACB28 002A9A68  38 A0 00 0A */	li r5, 0xa
/* 802ACB2C 002A9A6C  38 C0 00 00 */	li r6, 0
/* 802ACB30 002A9A70  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802ACB34 002A9A74  7D 89 03 A6 */	mtctr r12
/* 802ACB38 002A9A78  4E 80 04 21 */	bctrl 
/* 802ACB3C 002A9A7C  48 00 00 24 */	b lbl_802ACB60
lbl_802ACB40:
/* 802ACB40 002A9A80  7F C3 F3 78 */	mr r3, r30
/* 802ACB44 002A9A84  7F E4 FB 78 */	mr r4, r31
/* 802ACB48 002A9A88  81 9E 00 00 */	lwz r12, 0(r30)
/* 802ACB4C 002A9A8C  38 A0 00 08 */	li r5, 8
/* 802ACB50 002A9A90  38 C0 00 00 */	li r6, 0
/* 802ACB54 002A9A94  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802ACB58 002A9A98  7D 89 03 A6 */	mtctr r12
/* 802ACB5C 002A9A9C  4E 80 04 21 */	bctrl 
lbl_802ACB60:
/* 802ACB60 002A9AA0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802ACB64 002A9AA4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802ACB68 002A9AA8  83 C1 00 08 */	lwz r30, 8(r1)
/* 802ACB6C 002A9AAC  7C 08 03 A6 */	mtlr r0
/* 802ACB70 002A9AB0  38 21 00 10 */	addi r1, r1, 0x10
/* 802ACB74 002A9AB4  4E 80 00 20 */	blr 

.global cleanup__Q34Game6Kurage11StateGroundFPQ24Game9EnemyBase
cleanup__Q34Game6Kurage11StateGroundFPQ24Game9EnemyBase:
/* 802ACB78 002A9AB8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802ACB7C 002A9ABC  7C 08 02 A6 */	mflr r0
/* 802ACB80 002A9AC0  7C 83 23 78 */	mr r3, r4
/* 802ACB84 002A9AC4  90 01 00 14 */	stw r0, 0x14(r1)
/* 802ACB88 002A9AC8  4B E5 4D F5 */	bl setEmotionCaution__Q24Game9EnemyBaseFv
/* 802ACB8C 002A9ACC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802ACB90 002A9AD0  7C 08 03 A6 */	mtlr r0
/* 802ACB94 002A9AD4  38 21 00 10 */	addi r1, r1, 0x10
/* 802ACB98 002A9AD8  4E 80 00 20 */	blr 

.global init__Q34Game6Kurage13StateFlyFlickFPQ24Game9EnemyBasePQ24Game8StateArg
init__Q34Game6Kurage13StateFlyFlickFPQ24Game9EnemyBasePQ24Game8StateArg:
/* 802ACB9C 002A9ADC  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 802ACBA0 002A9AE0  7C 08 02 A6 */	mflr r0
/* 802ACBA4 002A9AE4  C0 02 DD 08 */	lfs f0, lbl_8051C068@sda21(r2)
/* 802ACBA8 002A9AE8  90 01 00 44 */	stw r0, 0x44(r1)
/* 802ACBAC 002A9AEC  38 00 FF FF */	li r0, -1
/* 802ACBB0 002A9AF0  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 802ACBB4 002A9AF4  7C 9F 23 78 */	mr r31, r4
/* 802ACBB8 002A9AF8  7F E3 FB 78 */	mr r3, r31
/* 802ACBBC 002A9AFC  80 84 01 E0 */	lwz r4, 0x1e0(r4)
/* 802ACBC0 002A9B00  60 84 00 04 */	ori r4, r4, 4
/* 802ACBC4 002A9B04  90 9F 01 E0 */	stw r4, 0x1e0(r31)
/* 802ACBC8 002A9B08  90 1F 02 C0 */	stw r0, 0x2c0(r31)
/* 802ACBCC 002A9B0C  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 802ACBD0 002A9B10  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 802ACBD4 002A9B14  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 802ACBD8 002A9B18  4B E5 4D F5 */	bl setEmotionExcitement__Q24Game9EnemyBaseFv
/* 802ACBDC 002A9B1C  7F E3 FB 78 */	mr r3, r31
/* 802ACBE0 002A9B20  38 80 00 02 */	li r4, 2
/* 802ACBE4 002A9B24  38 A0 00 00 */	li r5, 0
/* 802ACBE8 002A9B28  4B E5 84 1D */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 802ACBEC 002A9B2C  7F E4 FB 78 */	mr r4, r31
/* 802ACBF0 002A9B30  38 61 00 08 */	addi r3, r1, 8
/* 802ACBF4 002A9B34  81 9F 00 00 */	lwz r12, 0(r31)
/* 802ACBF8 002A9B38  81 8C 00 08 */	lwz r12, 8(r12)
/* 802ACBFC 002A9B3C  7D 89 03 A6 */	mtctr r12
/* 802ACC00 002A9B40  4E 80 04 21 */	bctrl 
/* 802ACC04 002A9B44  3C 80 80 4B */	lis r4, __vt__Q23efx5TBase@ha
/* 802ACC08 002A9B48  3C 60 80 4E */	lis r3, __vt__Q23efx8TSimple1@ha
/* 802ACC0C 002A9B4C  38 04 A7 F8 */	addi r0, r4, __vt__Q23efx5TBase@l
/* 802ACC10 002A9B50  C0 41 00 08 */	lfs f2, 8(r1)
/* 802ACC14 002A9B54  90 01 00 14 */	stw r0, 0x14(r1)
/* 802ACC18 002A9B58  38 03 6A 78 */	addi r0, r3, __vt__Q23efx8TSimple1@l
/* 802ACC1C 002A9B5C  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 802ACC20 002A9B60  3C 80 80 4B */	lis r4, __vt__Q23efx3Arg@ha
/* 802ACC24 002A9B64  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 802ACC28 002A9B68  3C 60 80 4D */	lis r3, __vt__Q23efx15TNewkurageFlick@ha
/* 802ACC2C 002A9B6C  38 84 A7 EC */	addi r4, r4, __vt__Q23efx3Arg@l
/* 802ACC30 002A9B70  38 C0 00 E6 */	li r6, 0xe6
/* 802ACC34 002A9B74  38 A0 00 00 */	li r5, 0
/* 802ACC38 002A9B78  90 01 00 14 */	stw r0, 0x14(r1)
/* 802ACC3C 002A9B7C  38 03 DF 18 */	addi r0, r3, __vt__Q23efx15TNewkurageFlick@l
/* 802ACC40 002A9B80  38 61 00 14 */	addi r3, r1, 0x14
/* 802ACC44 002A9B84  90 81 00 20 */	stw r4, 0x20(r1)
/* 802ACC48 002A9B88  38 81 00 20 */	addi r4, r1, 0x20
/* 802ACC4C 002A9B8C  D0 41 00 24 */	stfs f2, 0x24(r1)
/* 802ACC50 002A9B90  D0 21 00 28 */	stfs f1, 0x28(r1)
/* 802ACC54 002A9B94  D0 01 00 2C */	stfs f0, 0x2c(r1)
/* 802ACC58 002A9B98  B0 C1 00 18 */	sth r6, 0x18(r1)
/* 802ACC5C 002A9B9C  90 A1 00 1C */	stw r5, 0x1c(r1)
/* 802ACC60 002A9BA0  90 01 00 14 */	stw r0, 0x14(r1)
/* 802ACC64 002A9BA4  48 10 23 21 */	bl create__Q23efx8TSimple1FPQ23efx3Arg
/* 802ACC68 002A9BA8  80 01 00 44 */	lwz r0, 0x44(r1)
/* 802ACC6C 002A9BAC  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 802ACC70 002A9BB0  7C 08 03 A6 */	mtlr r0
/* 802ACC74 002A9BB4  38 21 00 40 */	addi r1, r1, 0x40
/* 802ACC78 002A9BB8  4E 80 00 20 */	blr 

.global exec__Q34Game6Kurage13StateFlyFlickFPQ24Game9EnemyBase
exec__Q34Game6Kurage13StateFlyFlickFPQ24Game9EnemyBase:
/* 802ACC7C 002A9BBC  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 802ACC80 002A9BC0  7C 08 02 A6 */	mflr r0
/* 802ACC84 002A9BC4  90 01 00 44 */	stw r0, 0x44(r1)
/* 802ACC88 002A9BC8  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 802ACC8C 002A9BCC  F3 E1 00 38 */	psq_st f31, 56(r1), 0, qr0
/* 802ACC90 002A9BD0  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 802ACC94 002A9BD4  93 C1 00 28 */	stw r30, 0x28(r1)
/* 802ACC98 002A9BD8  7C 9F 23 78 */	mr r31, r4
/* 802ACC9C 002A9BDC  7C 7E 1B 78 */	mr r30, r3
/* 802ACCA0 002A9BE0  7F E3 FB 78 */	mr r3, r31
/* 802ACCA4 002A9BE4  48 00 15 69 */	bl getFlickPitchOffset__Q34Game6Kurage3ObjFv
/* 802ACCA8 002A9BE8  C0 42 DD 38 */	lfs f2, lbl_8051C098@sda21(r2)
/* 802ACCAC 002A9BEC  7F E3 FB 78 */	mr r3, r31
/* 802ACCB0 002A9BF0  48 00 10 A1 */	bl setHeightVelocity__Q34Game6Kurage3ObjFff
/* 802ACCB4 002A9BF4  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 802ACCB8 002A9BF8  FF E0 08 90 */	fmr f31, f1
/* 802ACCBC 002A9BFC  88 03 00 24 */	lbz r0, 0x24(r3)
/* 802ACCC0 002A9C00  28 00 00 00 */	cmplwi r0, 0
/* 802ACCC4 002A9C04  41 82 01 14 */	beq lbl_802ACDD8
/* 802ACCC8 002A9C08  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 802ACCCC 002A9C0C  28 00 00 02 */	cmplwi r0, 2
/* 802ACCD0 002A9C10  40 82 00 74 */	bne lbl_802ACD44
/* 802ACCD4 002A9C14  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 802ACCD8 002A9C18  7F E3 FB 78 */	mr r3, r31
/* 802ACCDC 002A9C1C  C0 82 DD 24 */	lfs f4, lbl_8051C084@sda21(r2)
/* 802ACCE0 002A9C20  38 80 00 00 */	li r4, 0
/* 802ACCE4 002A9C24  C0 25 05 3C */	lfs f1, 0x53c(r5)
/* 802ACCE8 002A9C28  C0 45 04 C4 */	lfs f2, 0x4c4(r5)
/* 802ACCEC 002A9C2C  C0 65 04 EC */	lfs f3, 0x4ec(r5)
/* 802ACCF0 002A9C30  4B E6 64 2D */	bl "flickStickPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Piki>"
/* 802ACCF4 002A9C34  C0 02 DD 08 */	lfs f0, lbl_8051C068@sda21(r2)
/* 802ACCF8 002A9C38  7F E4 FB 78 */	mr r4, r31
/* 802ACCFC 002A9C3C  38 61 00 08 */	addi r3, r1, 8
/* 802ACD00 002A9C40  D0 1F 02 0C */	stfs f0, 0x20c(r31)
/* 802ACD04 002A9C44  81 9F 00 00 */	lwz r12, 0(r31)
/* 802ACD08 002A9C48  81 8C 00 08 */	lwz r12, 8(r12)
/* 802ACD0C 002A9C4C  7D 89 03 A6 */	mtctr r12
/* 802ACD10 002A9C50  4E 80 04 21 */	bctrl 
/* 802ACD14 002A9C54  C0 41 00 08 */	lfs f2, 8(r1)
/* 802ACD18 002A9C58  38 A1 00 14 */	addi r5, r1, 0x14
/* 802ACD1C 002A9C5C  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 802ACD20 002A9C60  38 80 00 09 */	li r4, 9
/* 802ACD24 002A9C64  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 802ACD28 002A9C68  38 C0 00 02 */	li r6, 2
/* 802ACD2C 002A9C6C  D0 41 00 14 */	stfs f2, 0x14(r1)
/* 802ACD30 002A9C70  80 6D 96 A8 */	lwz r3, rumbleMgr__4Game@sda21(r13)
/* 802ACD34 002A9C74  D0 21 00 18 */	stfs f1, 0x18(r1)
/* 802ACD38 002A9C78  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 802ACD3C 002A9C7C  4B FA 6A 45 */	bl "startRumble__Q24Game9RumbleMgrFiR10Vector3<f>i"
/* 802ACD40 002A9C80  48 00 00 98 */	b lbl_802ACDD8
lbl_802ACD44:
/* 802ACD44 002A9C84  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 802ACD48 002A9C88  40 82 00 90 */	bne lbl_802ACDD8
/* 802ACD4C 002A9C8C  7F E3 FB 78 */	mr r3, r31
/* 802ACD50 002A9C90  48 00 19 41 */	bl getFlyingNextState__Q34Game6Kurage3ObjFv
/* 802ACD54 002A9C94  7C 65 1B 79 */	or. r5, r3, r3
/* 802ACD58 002A9C98  41 80 00 24 */	blt lbl_802ACD7C
/* 802ACD5C 002A9C9C  81 9E 00 00 */	lwz r12, 0(r30)
/* 802ACD60 002A9CA0  7F C3 F3 78 */	mr r3, r30
/* 802ACD64 002A9CA4  7F E4 FB 78 */	mr r4, r31
/* 802ACD68 002A9CA8  38 C0 00 00 */	li r6, 0
/* 802ACD6C 002A9CAC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802ACD70 002A9CB0  7D 89 03 A6 */	mtctr r12
/* 802ACD74 002A9CB4  4E 80 04 21 */	bctrl 
/* 802ACD78 002A9CB8  48 00 00 60 */	b lbl_802ACDD8
lbl_802ACD7C:
/* 802ACD7C 002A9CBC  FC 20 F8 90 */	fmr f1, f31
/* 802ACD80 002A9CC0  7F E3 FB 78 */	mr r3, r31
/* 802ACD84 002A9CC4  38 80 00 00 */	li r4, 0
/* 802ACD88 002A9CC8  48 00 1D F5 */	bl isSuck__Q34Game6Kurage3ObjFfPQ24Game8Creature
/* 802ACD8C 002A9CCC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802ACD90 002A9CD0  41 82 00 28 */	beq lbl_802ACDB8
/* 802ACD94 002A9CD4  7F C3 F3 78 */	mr r3, r30
/* 802ACD98 002A9CD8  7F E4 FB 78 */	mr r4, r31
/* 802ACD9C 002A9CDC  81 9E 00 00 */	lwz r12, 0(r30)
/* 802ACDA0 002A9CE0  38 A0 00 04 */	li r5, 4
/* 802ACDA4 002A9CE4  38 C0 00 00 */	li r6, 0
/* 802ACDA8 002A9CE8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802ACDAC 002A9CEC  7D 89 03 A6 */	mtctr r12
/* 802ACDB0 002A9CF0  4E 80 04 21 */	bctrl 
/* 802ACDB4 002A9CF4  48 00 00 24 */	b lbl_802ACDD8
lbl_802ACDB8:
/* 802ACDB8 002A9CF8  7F C3 F3 78 */	mr r3, r30
/* 802ACDBC 002A9CFC  7F E4 FB 78 */	mr r4, r31
/* 802ACDC0 002A9D00  81 9E 00 00 */	lwz r12, 0(r30)
/* 802ACDC4 002A9D04  38 A0 00 01 */	li r5, 1
/* 802ACDC8 002A9D08  38 C0 00 00 */	li r6, 0
/* 802ACDCC 002A9D0C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802ACDD0 002A9D10  7D 89 03 A6 */	mtctr r12
/* 802ACDD4 002A9D14  4E 80 04 21 */	bctrl 
lbl_802ACDD8:
/* 802ACDD8 002A9D18  E3 E1 00 38 */	psq_l f31, 56(r1), 0, qr0
/* 802ACDDC 002A9D1C  80 01 00 44 */	lwz r0, 0x44(r1)
/* 802ACDE0 002A9D20  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 802ACDE4 002A9D24  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 802ACDE8 002A9D28  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 802ACDEC 002A9D2C  7C 08 03 A6 */	mtlr r0
/* 802ACDF0 002A9D30  38 21 00 40 */	addi r1, r1, 0x40
/* 802ACDF4 002A9D34  4E 80 00 20 */	blr 

.global cleanup__Q34Game6Kurage13StateFlyFlickFPQ24Game9EnemyBase
cleanup__Q34Game6Kurage13StateFlyFlickFPQ24Game9EnemyBase:
/* 802ACDF8 002A9D38  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802ACDFC 002A9D3C  7C 08 02 A6 */	mflr r0
/* 802ACE00 002A9D40  7C 83 23 78 */	mr r3, r4
/* 802ACE04 002A9D44  90 01 00 14 */	stw r0, 0x14(r1)
/* 802ACE08 002A9D48  4B E5 4B 75 */	bl setEmotionCaution__Q24Game9EnemyBaseFv
/* 802ACE0C 002A9D4C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802ACE10 002A9D50  7C 08 03 A6 */	mtlr r0
/* 802ACE14 002A9D54  38 21 00 10 */	addi r1, r1, 0x10
/* 802ACE18 002A9D58  4E 80 00 20 */	blr 

.global init__Q34Game6Kurage16StateGroundFlickFPQ24Game9EnemyBasePQ24Game8StateArg
init__Q34Game6Kurage16StateGroundFlickFPQ24Game9EnemyBasePQ24Game8StateArg:
/* 802ACE1C 002A9D5C  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 802ACE20 002A9D60  7C 08 02 A6 */	mflr r0
/* 802ACE24 002A9D64  C0 02 DD 08 */	lfs f0, lbl_8051C068@sda21(r2)
/* 802ACE28 002A9D68  90 01 00 44 */	stw r0, 0x44(r1)
/* 802ACE2C 002A9D6C  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 802ACE30 002A9D70  7C 9F 23 78 */	mr r31, r4
/* 802ACE34 002A9D74  7F E3 FB 78 */	mr r3, r31
/* 802ACE38 002A9D78  D0 04 02 C4 */	stfs f0, 0x2c4(r4)
/* 802ACE3C 002A9D7C  80 04 01 E0 */	lwz r0, 0x1e0(r4)
/* 802ACE40 002A9D80  54 00 07 B8 */	rlwinm r0, r0, 0, 0x1e, 0x1c
/* 802ACE44 002A9D84  90 04 01 E0 */	stw r0, 0x1e0(r4)
/* 802ACE48 002A9D88  D0 04 01 D4 */	stfs f0, 0x1d4(r4)
/* 802ACE4C 002A9D8C  D0 04 01 D8 */	stfs f0, 0x1d8(r4)
/* 802ACE50 002A9D90  D0 04 01 DC */	stfs f0, 0x1dc(r4)
/* 802ACE54 002A9D94  4B E5 4B 79 */	bl setEmotionExcitement__Q24Game9EnemyBaseFv
/* 802ACE58 002A9D98  7F E3 FB 78 */	mr r3, r31
/* 802ACE5C 002A9D9C  38 80 00 03 */	li r4, 3
/* 802ACE60 002A9DA0  38 A0 00 00 */	li r5, 0
/* 802ACE64 002A9DA4  4B E5 81 A1 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 802ACE68 002A9DA8  7F E4 FB 78 */	mr r4, r31
/* 802ACE6C 002A9DAC  38 61 00 08 */	addi r3, r1, 8
/* 802ACE70 002A9DB0  81 9F 00 00 */	lwz r12, 0(r31)
/* 802ACE74 002A9DB4  81 8C 00 08 */	lwz r12, 8(r12)
/* 802ACE78 002A9DB8  7D 89 03 A6 */	mtctr r12
/* 802ACE7C 002A9DBC  4E 80 04 21 */	bctrl 
/* 802ACE80 002A9DC0  3C 80 80 4B */	lis r4, __vt__Q23efx5TBase@ha
/* 802ACE84 002A9DC4  3C 60 80 4E */	lis r3, __vt__Q23efx8TSimple1@ha
/* 802ACE88 002A9DC8  38 04 A7 F8 */	addi r0, r4, __vt__Q23efx5TBase@l
/* 802ACE8C 002A9DCC  C0 41 00 08 */	lfs f2, 8(r1)
/* 802ACE90 002A9DD0  90 01 00 14 */	stw r0, 0x14(r1)
/* 802ACE94 002A9DD4  38 03 6A 78 */	addi r0, r3, __vt__Q23efx8TSimple1@l
/* 802ACE98 002A9DD8  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 802ACE9C 002A9DDC  3C 80 80 4B */	lis r4, __vt__Q23efx3Arg@ha
/* 802ACEA0 002A9DE0  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 802ACEA4 002A9DE4  3C 60 80 4D */	lis r3, __vt__Q23efx15TNewkurageFlick@ha
/* 802ACEA8 002A9DE8  38 84 A7 EC */	addi r4, r4, __vt__Q23efx3Arg@l
/* 802ACEAC 002A9DEC  38 C0 00 E6 */	li r6, 0xe6
/* 802ACEB0 002A9DF0  38 A0 00 00 */	li r5, 0
/* 802ACEB4 002A9DF4  90 01 00 14 */	stw r0, 0x14(r1)
/* 802ACEB8 002A9DF8  38 03 DF 18 */	addi r0, r3, __vt__Q23efx15TNewkurageFlick@l
/* 802ACEBC 002A9DFC  38 61 00 14 */	addi r3, r1, 0x14
/* 802ACEC0 002A9E00  90 81 00 20 */	stw r4, 0x20(r1)
/* 802ACEC4 002A9E04  38 81 00 20 */	addi r4, r1, 0x20
/* 802ACEC8 002A9E08  D0 41 00 24 */	stfs f2, 0x24(r1)
/* 802ACECC 002A9E0C  D0 21 00 28 */	stfs f1, 0x28(r1)
/* 802ACED0 002A9E10  D0 01 00 2C */	stfs f0, 0x2c(r1)
/* 802ACED4 002A9E14  B0 C1 00 18 */	sth r6, 0x18(r1)
/* 802ACED8 002A9E18  90 A1 00 1C */	stw r5, 0x1c(r1)
/* 802ACEDC 002A9E1C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802ACEE0 002A9E20  48 10 20 A5 */	bl create__Q23efx8TSimple1FPQ23efx3Arg
/* 802ACEE4 002A9E24  80 01 00 44 */	lwz r0, 0x44(r1)
/* 802ACEE8 002A9E28  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 802ACEEC 002A9E2C  7C 08 03 A6 */	mtlr r0
/* 802ACEF0 002A9E30  38 21 00 40 */	addi r1, r1, 0x40
/* 802ACEF4 002A9E34  4E 80 00 20 */	blr 

.global exec__Q34Game6Kurage16StateGroundFlickFPQ24Game9EnemyBase
exec__Q34Game6Kurage16StateGroundFlickFPQ24Game9EnemyBase:
/* 802ACEF8 002A9E38  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 802ACEFC 002A9E3C  7C 08 02 A6 */	mflr r0
/* 802ACF00 002A9E40  90 01 00 34 */	stw r0, 0x34(r1)
/* 802ACF04 002A9E44  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 802ACF08 002A9E48  7C 9F 23 78 */	mr r31, r4
/* 802ACF0C 002A9E4C  80 A4 01 88 */	lwz r5, 0x188(r4)
/* 802ACF10 002A9E50  88 05 00 24 */	lbz r0, 0x24(r5)
/* 802ACF14 002A9E54  28 00 00 00 */	cmplwi r0, 0
/* 802ACF18 002A9E58  41 82 01 18 */	beq lbl_802AD030
/* 802ACF1C 002A9E5C  80 05 00 1C */	lwz r0, 0x1c(r5)
/* 802ACF20 002A9E60  28 00 00 02 */	cmplwi r0, 2
/* 802ACF24 002A9E64  40 82 00 48 */	bne lbl_802ACF6C
/* 802ACF28 002A9E68  81 84 00 00 */	lwz r12, 0(r4)
/* 802ACF2C 002A9E6C  38 61 00 08 */	addi r3, r1, 8
/* 802ACF30 002A9E70  81 8C 00 08 */	lwz r12, 8(r12)
/* 802ACF34 002A9E74  7D 89 03 A6 */	mtctr r12
/* 802ACF38 002A9E78  4E 80 04 21 */	bctrl 
/* 802ACF3C 002A9E7C  C0 41 00 08 */	lfs f2, 8(r1)
/* 802ACF40 002A9E80  38 A1 00 14 */	addi r5, r1, 0x14
/* 802ACF44 002A9E84  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 802ACF48 002A9E88  38 80 00 09 */	li r4, 9
/* 802ACF4C 002A9E8C  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 802ACF50 002A9E90  38 C0 00 02 */	li r6, 2
/* 802ACF54 002A9E94  D0 41 00 14 */	stfs f2, 0x14(r1)
/* 802ACF58 002A9E98  80 6D 96 A8 */	lwz r3, rumbleMgr__4Game@sda21(r13)
/* 802ACF5C 002A9E9C  D0 21 00 18 */	stfs f1, 0x18(r1)
/* 802ACF60 002A9EA0  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 802ACF64 002A9EA4  4B FA 68 1D */	bl "startRumble__Q24Game9RumbleMgrFiR10Vector3<f>i"
/* 802ACF68 002A9EA8  48 00 00 C8 */	b lbl_802AD030
lbl_802ACF6C:
/* 802ACF6C 002A9EAC  28 00 00 03 */	cmplwi r0, 3
/* 802ACF70 002A9EB0  40 82 00 70 */	bne lbl_802ACFE0
/* 802ACF74 002A9EB4  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 802ACF78 002A9EB8  7F E3 FB 78 */	mr r3, r31
/* 802ACF7C 002A9EBC  C0 82 DD 24 */	lfs f4, lbl_8051C084@sda21(r2)
/* 802ACF80 002A9EC0  38 80 00 00 */	li r4, 0
/* 802ACF84 002A9EC4  C0 25 05 14 */	lfs f1, 0x514(r5)
/* 802ACF88 002A9EC8  C0 45 04 C4 */	lfs f2, 0x4c4(r5)
/* 802ACF8C 002A9ECC  C0 65 04 EC */	lfs f3, 0x4ec(r5)
/* 802ACF90 002A9ED0  4B E6 68 01 */	bl "flickNearbyNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Navi>"
/* 802ACF94 002A9ED4  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 802ACF98 002A9ED8  7F E3 FB 78 */	mr r3, r31
/* 802ACF9C 002A9EDC  C0 82 DD 24 */	lfs f4, lbl_8051C084@sda21(r2)
/* 802ACFA0 002A9EE0  38 80 00 00 */	li r4, 0
/* 802ACFA4 002A9EE4  C0 25 05 14 */	lfs f1, 0x514(r5)
/* 802ACFA8 002A9EE8  C0 45 04 C4 */	lfs f2, 0x4c4(r5)
/* 802ACFAC 002A9EEC  C0 65 04 EC */	lfs f3, 0x4ec(r5)
/* 802ACFB0 002A9EF0  4B E6 65 25 */	bl "flickNearbyPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Piki>"
/* 802ACFB4 002A9EF4  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 802ACFB8 002A9EF8  7F E3 FB 78 */	mr r3, r31
/* 802ACFBC 002A9EFC  C0 82 DD 24 */	lfs f4, lbl_8051C084@sda21(r2)
/* 802ACFC0 002A9F00  38 80 00 00 */	li r4, 0
/* 802ACFC4 002A9F04  C0 25 05 3C */	lfs f1, 0x53c(r5)
/* 802ACFC8 002A9F08  C0 45 04 C4 */	lfs f2, 0x4c4(r5)
/* 802ACFCC 002A9F0C  C0 65 04 EC */	lfs f3, 0x4ec(r5)
/* 802ACFD0 002A9F10  4B E6 61 4D */	bl "flickStickPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Piki>"
/* 802ACFD4 002A9F14  C0 02 DD 08 */	lfs f0, lbl_8051C068@sda21(r2)
/* 802ACFD8 002A9F18  D0 1F 02 0C */	stfs f0, 0x20c(r31)
/* 802ACFDC 002A9F1C  48 00 00 54 */	b lbl_802AD030
lbl_802ACFE0:
/* 802ACFE0 002A9F20  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 802ACFE4 002A9F24  40 82 00 4C */	bne lbl_802AD030
/* 802ACFE8 002A9F28  C0 3F 02 00 */	lfs f1, 0x200(r31)
/* 802ACFEC 002A9F2C  C0 02 DD 08 */	lfs f0, lbl_8051C068@sda21(r2)
/* 802ACFF0 002A9F30  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802ACFF4 002A9F34  4C 40 13 82 */	cror 2, 0, 2
/* 802ACFF8 002A9F38  40 82 00 20 */	bne lbl_802AD018
/* 802ACFFC 002A9F3C  81 83 00 00 */	lwz r12, 0(r3)
/* 802AD000 002A9F40  38 A0 00 00 */	li r5, 0
/* 802AD004 002A9F44  38 C0 00 00 */	li r6, 0
/* 802AD008 002A9F48  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802AD00C 002A9F4C  7D 89 03 A6 */	mtctr r12
/* 802AD010 002A9F50  4E 80 04 21 */	bctrl 
/* 802AD014 002A9F54  48 00 00 1C */	b lbl_802AD030
lbl_802AD018:
/* 802AD018 002A9F58  81 83 00 00 */	lwz r12, 0(r3)
/* 802AD01C 002A9F5C  38 A0 00 08 */	li r5, 8
/* 802AD020 002A9F60  38 C0 00 00 */	li r6, 0
/* 802AD024 002A9F64  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802AD028 002A9F68  7D 89 03 A6 */	mtctr r12
/* 802AD02C 002A9F6C  4E 80 04 21 */	bctrl 
lbl_802AD030:
/* 802AD030 002A9F70  80 01 00 34 */	lwz r0, 0x34(r1)
/* 802AD034 002A9F74  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 802AD038 002A9F78  7C 08 03 A6 */	mtlr r0
/* 802AD03C 002A9F7C  38 21 00 30 */	addi r1, r1, 0x30
/* 802AD040 002A9F80  4E 80 00 20 */	blr 

.global cleanup__Q34Game6Kurage16StateGroundFlickFPQ24Game9EnemyBase
cleanup__Q34Game6Kurage16StateGroundFlickFPQ24Game9EnemyBase:
/* 802AD044 002A9F84  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802AD048 002A9F88  7C 08 02 A6 */	mflr r0
/* 802AD04C 002A9F8C  7C 83 23 78 */	mr r3, r4
/* 802AD050 002A9F90  90 01 00 14 */	stw r0, 0x14(r1)
/* 802AD054 002A9F94  4B E5 49 29 */	bl setEmotionCaution__Q24Game9EnemyBaseFv
/* 802AD058 002A9F98  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802AD05C 002A9F9C  7C 08 03 A6 */	mtlr r0
/* 802AD060 002A9FA0  38 21 00 10 */	addi r1, r1, 0x10
/* 802AD064 002A9FA4  4E 80 00 20 */	blr 

.global __sinit_KurageState_cpp
__sinit_KurageState_cpp:
/* 802AD068 002A9FA8  3C 80 80 51 */	lis r4, __float_nan@ha
/* 802AD06C 002A9FAC  38 00 FF FF */	li r0, -1
/* 802AD070 002A9FB0  C0 04 48 B0 */	lfs f0, __float_nan@l(r4)
/* 802AD074 002A9FB4  3C 60 80 4D */	lis r3, lbl_804CDEE8@ha
/* 802AD078 002A9FB8  90 0D 97 00 */	stw r0, lbl_80515D80@sda21(r13)
/* 802AD07C 002A9FBC  D4 03 DE E8 */	stfsu f0, lbl_804CDEE8@l(r3)
/* 802AD080 002A9FC0  D0 0D 97 04 */	stfs f0, lbl_80515D84@sda21(r13)
/* 802AD084 002A9FC4  D0 03 00 04 */	stfs f0, 4(r3)
/* 802AD088 002A9FC8  D0 03 00 08 */	stfs f0, 8(r3)
/* 802AD08C 002A9FCC  4E 80 00 20 */	blr 
