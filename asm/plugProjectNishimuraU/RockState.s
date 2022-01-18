.include "macros.inc"
.section .ctors, "wa"  # 0x80472F00 - 0x804732C0
lbl_constructor:
.4byte __sinit_RockState_cpp

.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
.global lbl_80485788
lbl_80485788:
	.4byte 0x64726F70
	.4byte 0x77616974
	.4byte 0x00000000
	.4byte 0x00000000

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.global lbl_804C3EB8
lbl_804C3EB8:
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.global __vt__Q34Game4Rock9StateDead
__vt__Q34Game4Rock9StateDead:
	.4byte 0
	.4byte 0
	.4byte init__Q34Game4Rock9StateDeadFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game4Rock9StateDeadFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game4Rock9StateDeadFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.global __vt__Q34Game4Rock9StateMove
__vt__Q34Game4Rock9StateMove:
	.4byte 0
	.4byte 0
	.4byte init__Q34Game4Rock9StateMoveFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game4Rock9StateMoveFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game4Rock9StateMoveFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.global __vt__Q34Game4Rock9StateFall
__vt__Q34Game4Rock9StateFall:
	.4byte 0
	.4byte 0
	.4byte init__Q34Game4Rock9StateFallFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game4Rock9StateFallFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game4Rock9StateFallFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.global __vt__Q34Game4Rock13StateDropWait
__vt__Q34Game4Rock13StateDropWait:
	.4byte 0
	.4byte 0
	.4byte init__Q34Game4Rock13StateDropWaitFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game4Rock13StateDropWaitFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game4Rock13StateDropWaitFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.global __vt__Q34Game4Rock11StateAppear
__vt__Q34Game4Rock11StateAppear:
	.4byte 0
	.4byte 0
	.4byte init__Q34Game4Rock11StateAppearFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game4Rock11StateAppearFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game4Rock11StateAppearFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.global __vt__Q34Game4Rock9StateWait
__vt__Q34Game4Rock9StateWait:
	.4byte 0
	.4byte 0
	.4byte init__Q34Game4Rock9StateWaitFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game4Rock9StateWaitFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game4Rock9StateWaitFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.global __vt__Q34Game4Rock5State
__vt__Q34Game4Rock5State:
	.4byte 0
	.4byte 0
	.4byte init__Q24Game13EnemyFSMStateFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte cleanup__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.global __vt__Q34Game4Rock3FSM
__vt__Q34Game4Rock3FSM:
	.4byte 0
	.4byte 0
	.4byte init__Q34Game4Rock3FSMFPQ24Game9EnemyBase
	.4byte start__Q24Game17EnemyStateMachineFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte exec__Q24Game17EnemyStateMachineFPQ24Game9EnemyBase
	.4byte transit__Q24Game17EnemyStateMachineFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game17EnemyStateMachineFPQ24Game9EnemyBaseR8Graphics
	.4byte getCurrState__Q24Game17EnemyStateMachineFPQ24Game9EnemyBase
	.4byte setCurrState__Q24Game17EnemyStateMachineFPQ24Game9EnemyBasePQ24Game13EnemyFSMState
	.4byte 0

.section .sbss # 0x80514D80 - 0x80516360
.balign 8
.global lbl_80515D40
lbl_80515D40:
	.skip 0x4
.global lbl_80515D44
lbl_80515D44:
	.skip 0x4

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
.global lbl_8051AD48
lbl_8051AD48:
	.4byte 0x77616974
	.4byte 0x00000000
.global lbl_8051AD50
lbl_8051AD50:
	.4byte 0x61707065
	.4byte 0x61720000
.global lbl_8051AD58
lbl_8051AD58:
	.4byte 0x66616C6C
	.4byte 0x00000000
.global lbl_8051AD60
lbl_8051AD60:
	.4byte 0x6D6F7665
	.4byte 0x00000000
.global lbl_8051AD68
lbl_8051AD68:
	.4byte 0x64656164
	.4byte 0x00000000
.global lbl_8051AD70
lbl_8051AD70:
	.4byte 0x00000000
.global lbl_8051AD74
lbl_8051AD74:
	.4byte 0x3FC00000
.global lbl_8051AD78
lbl_8051AD78:
	.4byte 0x41700000
	.4byte 0x00000000

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global init__Q34Game4Rock3FSMFPQ24Game9EnemyBase
init__Q34Game4Rock3FSMFPQ24Game9EnemyBase:
/* 80261D8C 0025ECCC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80261D90 0025ECD0  7C 08 02 A6 */	mflr r0
/* 80261D94 0025ECD4  38 80 00 06 */	li r4, 6
/* 80261D98 0025ECD8  90 01 00 14 */	stw r0, 0x14(r1)
/* 80261D9C 0025ECDC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80261DA0 0025ECE0  7C 7F 1B 78 */	mr r31, r3
/* 80261DA4 0025ECE4  4B EC EA C1 */	bl create__Q24Game17EnemyStateMachineFi
/* 80261DA8 0025ECE8  38 60 00 10 */	li r3, 0x10
/* 80261DAC 0025ECEC  4B DC 20 F9 */	bl __nw__FUl
/* 80261DB0 0025ECF0  7C 64 1B 79 */	or. r4, r3, r3
/* 80261DB4 0025ECF4  41 82 00 3C */	beq lbl_80261DF0
/* 80261DB8 0025ECF8  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 80261DBC 0025ECFC  3C A0 80 4C */	lis r5, __vt__Q34Game4Rock5State@ha
/* 80261DC0 0025ED00  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 80261DC4 0025ED04  3C 60 80 4C */	lis r3, __vt__Q34Game4Rock9StateWait@ha
/* 80261DC8 0025ED08  90 04 00 00 */	stw r0, 0(r4)
/* 80261DCC 0025ED0C  38 E0 00 00 */	li r7, 0
/* 80261DD0 0025ED10  38 C5 3F 9C */	addi r6, r5, __vt__Q34Game4Rock5State@l
/* 80261DD4 0025ED14  38 A2 C9 E8 */	addi r5, r2, lbl_8051AD48@sda21
/* 80261DD8 0025ED18  90 E4 00 04 */	stw r7, 4(r4)
/* 80261DDC 0025ED1C  38 03 3F 78 */	addi r0, r3, __vt__Q34Game4Rock9StateWait@l
/* 80261DE0 0025ED20  90 E4 00 08 */	stw r7, 8(r4)
/* 80261DE4 0025ED24  90 C4 00 00 */	stw r6, 0(r4)
/* 80261DE8 0025ED28  90 A4 00 0C */	stw r5, 0xc(r4)
/* 80261DEC 0025ED2C  90 04 00 00 */	stw r0, 0(r4)
lbl_80261DF0:
/* 80261DF0 0025ED30  7F E3 FB 78 */	mr r3, r31
/* 80261DF4 0025ED34  4B EC EB 15 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 80261DF8 0025ED38  38 60 00 10 */	li r3, 0x10
/* 80261DFC 0025ED3C  4B DC 20 A9 */	bl __nw__FUl
/* 80261E00 0025ED40  7C 64 1B 79 */	or. r4, r3, r3
/* 80261E04 0025ED44  41 82 00 40 */	beq lbl_80261E44
/* 80261E08 0025ED48  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 80261E0C 0025ED4C  3C A0 80 4C */	lis r5, __vt__Q34Game4Rock5State@ha
/* 80261E10 0025ED50  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 80261E14 0025ED54  3C 60 80 4C */	lis r3, __vt__Q34Game4Rock11StateAppear@ha
/* 80261E18 0025ED58  90 04 00 00 */	stw r0, 0(r4)
/* 80261E1C 0025ED5C  38 00 00 01 */	li r0, 1
/* 80261E20 0025ED60  38 E0 00 00 */	li r7, 0
/* 80261E24 0025ED64  38 C5 3F 9C */	addi r6, r5, __vt__Q34Game4Rock5State@l
/* 80261E28 0025ED68  90 04 00 04 */	stw r0, 4(r4)
/* 80261E2C 0025ED6C  38 A2 C9 F0 */	addi r5, r2, lbl_8051AD50@sda21
/* 80261E30 0025ED70  38 03 3F 54 */	addi r0, r3, __vt__Q34Game4Rock11StateAppear@l
/* 80261E34 0025ED74  90 E4 00 08 */	stw r7, 8(r4)
/* 80261E38 0025ED78  90 C4 00 00 */	stw r6, 0(r4)
/* 80261E3C 0025ED7C  90 A4 00 0C */	stw r5, 0xc(r4)
/* 80261E40 0025ED80  90 04 00 00 */	stw r0, 0(r4)
lbl_80261E44:
/* 80261E44 0025ED84  7F E3 FB 78 */	mr r3, r31
/* 80261E48 0025ED88  4B EC EA C1 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 80261E4C 0025ED8C  38 60 00 10 */	li r3, 0x10
/* 80261E50 0025ED90  4B DC 20 55 */	bl __nw__FUl
/* 80261E54 0025ED94  7C 64 1B 79 */	or. r4, r3, r3
/* 80261E58 0025ED98  41 82 00 44 */	beq lbl_80261E9C
/* 80261E5C 0025ED9C  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 80261E60 0025EDA0  3C C0 80 4C */	lis r6, __vt__Q34Game4Rock5State@ha
/* 80261E64 0025EDA4  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 80261E68 0025EDA8  3C A0 80 48 */	lis r5, lbl_80485788@ha
/* 80261E6C 0025EDAC  90 04 00 00 */	stw r0, 0(r4)
/* 80261E70 0025EDB0  38 00 00 02 */	li r0, 2
/* 80261E74 0025EDB4  3C 60 80 4C */	lis r3, __vt__Q34Game4Rock13StateDropWait@ha
/* 80261E78 0025EDB8  38 E0 00 00 */	li r7, 0
/* 80261E7C 0025EDBC  90 04 00 04 */	stw r0, 4(r4)
/* 80261E80 0025EDC0  38 C6 3F 9C */	addi r6, r6, __vt__Q34Game4Rock5State@l
/* 80261E84 0025EDC4  38 A5 57 88 */	addi r5, r5, lbl_80485788@l
/* 80261E88 0025EDC8  38 03 3F 30 */	addi r0, r3, __vt__Q34Game4Rock13StateDropWait@l
/* 80261E8C 0025EDCC  90 E4 00 08 */	stw r7, 8(r4)
/* 80261E90 0025EDD0  90 C4 00 00 */	stw r6, 0(r4)
/* 80261E94 0025EDD4  90 A4 00 0C */	stw r5, 0xc(r4)
/* 80261E98 0025EDD8  90 04 00 00 */	stw r0, 0(r4)
lbl_80261E9C:
/* 80261E9C 0025EDDC  7F E3 FB 78 */	mr r3, r31
/* 80261EA0 0025EDE0  4B EC EA 69 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 80261EA4 0025EDE4  38 60 00 10 */	li r3, 0x10
/* 80261EA8 0025EDE8  4B DC 1F FD */	bl __nw__FUl
/* 80261EAC 0025EDEC  7C 64 1B 79 */	or. r4, r3, r3
/* 80261EB0 0025EDF0  41 82 00 40 */	beq lbl_80261EF0
/* 80261EB4 0025EDF4  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 80261EB8 0025EDF8  3C A0 80 4C */	lis r5, __vt__Q34Game4Rock5State@ha
/* 80261EBC 0025EDFC  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 80261EC0 0025EE00  3C 60 80 4C */	lis r3, __vt__Q34Game4Rock9StateFall@ha
/* 80261EC4 0025EE04  90 04 00 00 */	stw r0, 0(r4)
/* 80261EC8 0025EE08  38 00 00 03 */	li r0, 3
/* 80261ECC 0025EE0C  38 E0 00 00 */	li r7, 0
/* 80261ED0 0025EE10  38 C5 3F 9C */	addi r6, r5, __vt__Q34Game4Rock5State@l
/* 80261ED4 0025EE14  90 04 00 04 */	stw r0, 4(r4)
/* 80261ED8 0025EE18  38 A2 C9 F8 */	addi r5, r2, lbl_8051AD58@sda21
/* 80261EDC 0025EE1C  38 03 3F 0C */	addi r0, r3, __vt__Q34Game4Rock9StateFall@l
/* 80261EE0 0025EE20  90 E4 00 08 */	stw r7, 8(r4)
/* 80261EE4 0025EE24  90 C4 00 00 */	stw r6, 0(r4)
/* 80261EE8 0025EE28  90 A4 00 0C */	stw r5, 0xc(r4)
/* 80261EEC 0025EE2C  90 04 00 00 */	stw r0, 0(r4)
lbl_80261EF0:
/* 80261EF0 0025EE30  7F E3 FB 78 */	mr r3, r31
/* 80261EF4 0025EE34  4B EC EA 15 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 80261EF8 0025EE38  38 60 00 10 */	li r3, 0x10
/* 80261EFC 0025EE3C  4B DC 1F A9 */	bl __nw__FUl
/* 80261F00 0025EE40  7C 64 1B 79 */	or. r4, r3, r3
/* 80261F04 0025EE44  41 82 00 40 */	beq lbl_80261F44
/* 80261F08 0025EE48  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 80261F0C 0025EE4C  3C A0 80 4C */	lis r5, __vt__Q34Game4Rock5State@ha
/* 80261F10 0025EE50  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 80261F14 0025EE54  3C 60 80 4C */	lis r3, __vt__Q34Game4Rock9StateMove@ha
/* 80261F18 0025EE58  90 04 00 00 */	stw r0, 0(r4)
/* 80261F1C 0025EE5C  38 00 00 04 */	li r0, 4
/* 80261F20 0025EE60  38 E0 00 00 */	li r7, 0
/* 80261F24 0025EE64  38 C5 3F 9C */	addi r6, r5, __vt__Q34Game4Rock5State@l
/* 80261F28 0025EE68  90 04 00 04 */	stw r0, 4(r4)
/* 80261F2C 0025EE6C  38 A2 CA 00 */	addi r5, r2, lbl_8051AD60@sda21
/* 80261F30 0025EE70  38 03 3E E8 */	addi r0, r3, __vt__Q34Game4Rock9StateMove@l
/* 80261F34 0025EE74  90 E4 00 08 */	stw r7, 8(r4)
/* 80261F38 0025EE78  90 C4 00 00 */	stw r6, 0(r4)
/* 80261F3C 0025EE7C  90 A4 00 0C */	stw r5, 0xc(r4)
/* 80261F40 0025EE80  90 04 00 00 */	stw r0, 0(r4)
lbl_80261F44:
/* 80261F44 0025EE84  7F E3 FB 78 */	mr r3, r31
/* 80261F48 0025EE88  4B EC E9 C1 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 80261F4C 0025EE8C  38 60 00 10 */	li r3, 0x10
/* 80261F50 0025EE90  4B DC 1F 55 */	bl __nw__FUl
/* 80261F54 0025EE94  7C 64 1B 79 */	or. r4, r3, r3
/* 80261F58 0025EE98  41 82 00 40 */	beq lbl_80261F98
/* 80261F5C 0025EE9C  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 80261F60 0025EEA0  3C A0 80 4C */	lis r5, __vt__Q34Game4Rock5State@ha
/* 80261F64 0025EEA4  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 80261F68 0025EEA8  3C 60 80 4C */	lis r3, __vt__Q34Game4Rock9StateDead@ha
/* 80261F6C 0025EEAC  90 04 00 00 */	stw r0, 0(r4)
/* 80261F70 0025EEB0  38 00 00 05 */	li r0, 5
/* 80261F74 0025EEB4  38 E0 00 00 */	li r7, 0
/* 80261F78 0025EEB8  38 C5 3F 9C */	addi r6, r5, __vt__Q34Game4Rock5State@l
/* 80261F7C 0025EEBC  90 04 00 04 */	stw r0, 4(r4)
/* 80261F80 0025EEC0  38 A2 CA 08 */	addi r5, r2, lbl_8051AD68@sda21
/* 80261F84 0025EEC4  38 03 3E C4 */	addi r0, r3, __vt__Q34Game4Rock9StateDead@l
/* 80261F88 0025EEC8  90 E4 00 08 */	stw r7, 8(r4)
/* 80261F8C 0025EECC  90 C4 00 00 */	stw r6, 0(r4)
/* 80261F90 0025EED0  90 A4 00 0C */	stw r5, 0xc(r4)
/* 80261F94 0025EED4  90 04 00 00 */	stw r0, 0(r4)
lbl_80261F98:
/* 80261F98 0025EED8  7F E3 FB 78 */	mr r3, r31
/* 80261F9C 0025EEDC  4B EC E9 6D */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 80261FA0 0025EEE0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80261FA4 0025EEE4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80261FA8 0025EEE8  7C 08 03 A6 */	mtlr r0
/* 80261FAC 0025EEEC  38 21 00 10 */	addi r1, r1, 0x10
/* 80261FB0 0025EEF0  4E 80 00 20 */	blr 

.global init__Q34Game4Rock9StateWaitFPQ24Game9EnemyBasePQ24Game8StateArg
init__Q34Game4Rock9StateWaitFPQ24Game9EnemyBasePQ24Game8StateArg:
/* 80261FB4 0025EEF4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80261FB8 0025EEF8  7C 08 02 A6 */	mflr r0
/* 80261FBC 0025EEFC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80261FC0 0025EF00  7C 80 23 78 */	mr r0, r4
/* 80261FC4 0025EF04  38 80 00 00 */	li r4, 0
/* 80261FC8 0025EF08  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80261FCC 0025EF0C  7C 1F 03 78 */	mr r31, r0
/* 80261FD0 0025EF10  7F E3 FB 78 */	mr r3, r31
/* 80261FD4 0025EF14  81 9F 00 00 */	lwz r12, 0(r31)
/* 80261FD8 0025EF18  81 8C 00 A4 */	lwz r12, 0xa4(r12)
/* 80261FDC 0025EF1C  7D 89 03 A6 */	mtctr r12
/* 80261FE0 0025EF20  4E 80 04 21 */	bctrl 
/* 80261FE4 0025EF24  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 80261FE8 0025EF28  7F E3 FB 78 */	mr r3, r31
/* 80261FEC 0025EF2C  60 00 00 04 */	ori r0, r0, 4
/* 80261FF0 0025EF30  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 80261FF4 0025EF34  4B EA 57 89 */	bl hardConstraintOn__Q24Game9EnemyBaseFv
/* 80261FF8 0025EF38  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 80261FFC 0025EF3C  7F E3 FB 78 */	mr r3, r31
/* 80262000 0025EF40  C0 02 CA 10 */	lfs f0, lbl_8051AD70@sda21(r2)
/* 80262004 0025EF44  38 80 00 01 */	li r4, 1
/* 80262008 0025EF48  54 00 04 5E */	rlwinm r0, r0, 0, 0x11, 0xf
/* 8026200C 0025EF4C  38 A0 00 00 */	li r5, 0
/* 80262010 0025EF50  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 80262014 0025EF54  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 80262018 0025EF58  64 00 40 00 */	oris r0, r0, 0x4000
/* 8026201C 0025EF5C  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 80262020 0025EF60  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 80262024 0025EF64  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 80262028 0025EF68  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 8026202C 0025EF6C  4B EA 2F D9 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 80262030 0025EF70  7F E3 FB 78 */	mr r3, r31
/* 80262034 0025EF74  4B EA 52 AD */	bl stopMotion__Q24Game9EnemyBaseFv
/* 80262038 0025EF78  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8026203C 0025EF7C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80262040 0025EF80  7C 08 03 A6 */	mtlr r0
/* 80262044 0025EF84  38 21 00 10 */	addi r1, r1, 0x10
/* 80262048 0025EF88  4E 80 00 20 */	blr 

.global exec__Q34Game4Rock9StateWaitFPQ24Game9EnemyBase
exec__Q34Game4Rock9StateWaitFPQ24Game9EnemyBase:
/* 8026204C 0025EF8C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80262050 0025EF90  7C 08 02 A6 */	mflr r0
/* 80262054 0025EF94  90 01 00 24 */	stw r0, 0x24(r1)
/* 80262058 0025EF98  DB E1 00 10 */	stfd f31, 0x10(r1)
/* 8026205C 0025EF9C  F3 E1 00 18 */	psq_st f31, 24(r1), 0, qr0
/* 80262060 0025EFA0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80262064 0025EFA4  93 C1 00 08 */	stw r30, 8(r1)
/* 80262068 0025EFA8  C0 22 CA 10 */	lfs f1, lbl_8051AD70@sda21(r2)
/* 8026206C 0025EFAC  7C 9F 23 78 */	mr r31, r4
/* 80262070 0025EFB0  C0 04 02 AC */	lfs f0, 0x2ac(r4)
/* 80262074 0025EFB4  7C 7E 1B 78 */	mr r30, r3
/* 80262078 0025EFB8  FC 01 00 00 */	fcmpu cr0, f1, f0
/* 8026207C 0025EFBC  41 82 00 44 */	beq lbl_802620C0
/* 80262080 0025EFC0  80 AD 9A EC */	lwz r5, sys@sda21(r13)
/* 80262084 0025EFC4  C0 5F 02 C8 */	lfs f2, 0x2c8(r31)
/* 80262088 0025EFC8  C0 25 00 54 */	lfs f1, 0x54(r5)
/* 8026208C 0025EFCC  C0 02 CA 14 */	lfs f0, lbl_8051AD74@sda21(r2)
/* 80262090 0025EFD0  EC 22 08 2A */	fadds f1, f2, f1
/* 80262094 0025EFD4  D0 3F 02 C8 */	stfs f1, 0x2c8(r31)
/* 80262098 0025EFD8  C0 3F 02 C8 */	lfs f1, 0x2c8(r31)
/* 8026209C 0025EFDC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802620A0 0025EFE0  40 81 00 94 */	ble lbl_80262134
/* 802620A4 0025EFE4  81 83 00 00 */	lwz r12, 0(r3)
/* 802620A8 0025EFE8  38 A0 00 01 */	li r5, 1
/* 802620AC 0025EFEC  38 C0 00 00 */	li r6, 0
/* 802620B0 0025EFF0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802620B4 0025EFF4  7D 89 03 A6 */	mtctr r12
/* 802620B8 0025EFF8  4E 80 04 21 */	bctrl 
/* 802620BC 0025EFFC  48 00 00 78 */	b lbl_80262134
lbl_802620C0:
/* 802620C0 0025F000  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 802620C4 0025F004  7F E3 FB 78 */	mr r3, r31
/* 802620C8 0025F008  38 80 00 00 */	li r4, 0
/* 802620CC 0025F00C  C3 E5 03 D4 */	lfs f31, 0x3d4(r5)
/* 802620D0 0025F010  FC 20 F8 90 */	fmr f1, f31
/* 802620D4 0025F014  4B EB 29 ED */	bl "isThereOlimar__Q24Game9EnemyFuncFPQ24Game8CreaturefP23Condition<Q24Game4Navi>"
/* 802620D8 0025F018  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802620DC 0025F01C  41 82 00 0C */	beq lbl_802620E8
/* 802620E0 0025F020  38 00 00 01 */	li r0, 1
/* 802620E4 0025F024  48 00 00 28 */	b lbl_8026210C
lbl_802620E8:
/* 802620E8 0025F028  FC 20 F8 90 */	fmr f1, f31
/* 802620EC 0025F02C  7F E3 FB 78 */	mr r3, r31
/* 802620F0 0025F030  38 80 00 00 */	li r4, 0
/* 802620F4 0025F034  4B EB 26 41 */	bl "isTherePikmin__Q24Game9EnemyFuncFPQ24Game8CreaturefP23Condition<Q24Game4Piki>"
/* 802620F8 0025F038  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802620FC 0025F03C  41 82 00 0C */	beq lbl_80262108
/* 80262100 0025F040  38 00 00 01 */	li r0, 1
/* 80262104 0025F044  48 00 00 08 */	b lbl_8026210C
lbl_80262108:
/* 80262108 0025F048  38 00 00 00 */	li r0, 0
lbl_8026210C:
/* 8026210C 0025F04C  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 80262110 0025F050  41 82 00 24 */	beq lbl_80262134
/* 80262114 0025F054  7F C3 F3 78 */	mr r3, r30
/* 80262118 0025F058  7F E4 FB 78 */	mr r4, r31
/* 8026211C 0025F05C  81 9E 00 00 */	lwz r12, 0(r30)
/* 80262120 0025F060  38 A0 00 01 */	li r5, 1
/* 80262124 0025F064  38 C0 00 00 */	li r6, 0
/* 80262128 0025F068  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8026212C 0025F06C  7D 89 03 A6 */	mtctr r12
/* 80262130 0025F070  4E 80 04 21 */	bctrl 
lbl_80262134:
/* 80262134 0025F074  E3 E1 00 18 */	psq_l f31, 24(r1), 0, qr0
/* 80262138 0025F078  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8026213C 0025F07C  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 80262140 0025F080  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80262144 0025F084  83 C1 00 08 */	lwz r30, 8(r1)
/* 80262148 0025F088  7C 08 03 A6 */	mtlr r0
/* 8026214C 0025F08C  38 21 00 20 */	addi r1, r1, 0x20
/* 80262150 0025F090  4E 80 00 20 */	blr 

.global cleanup__Q34Game4Rock9StateWaitFPQ24Game9EnemyBase
cleanup__Q34Game4Rock9StateWaitFPQ24Game9EnemyBase:
/* 80262154 0025F094  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80262158 0025F098  7C 08 02 A6 */	mflr r0
/* 8026215C 0025F09C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80262160 0025F0A0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80262164 0025F0A4  7C 9F 23 78 */	mr r31, r4
/* 80262168 0025F0A8  7F E3 FB 78 */	mr r3, r31
/* 8026216C 0025F0AC  4B EA 56 29 */	bl hardConstraintOff__Q24Game9EnemyBaseFv
/* 80262170 0025F0B0  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 80262174 0025F0B4  60 00 80 00 */	ori r0, r0, 0x8000
/* 80262178 0025F0B8  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 8026217C 0025F0BC  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 80262180 0025F0C0  54 00 00 80 */	rlwinm r0, r0, 0, 2, 0
/* 80262184 0025F0C4  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 80262188 0025F0C8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8026218C 0025F0CC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80262190 0025F0D0  7C 08 03 A6 */	mtlr r0
/* 80262194 0025F0D4  38 21 00 10 */	addi r1, r1, 0x10
/* 80262198 0025F0D8  4E 80 00 20 */	blr 

.global init__Q34Game4Rock11StateAppearFPQ24Game9EnemyBasePQ24Game8StateArg
init__Q34Game4Rock11StateAppearFPQ24Game9EnemyBasePQ24Game8StateArg:
/* 8026219C 0025F0DC  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 802621A0 0025F0E0  7C 08 02 A6 */	mflr r0
/* 802621A4 0025F0E4  90 01 00 34 */	stw r0, 0x34(r1)
/* 802621A8 0025F0E8  38 61 00 08 */	addi r3, r1, 8
/* 802621AC 0025F0EC  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 802621B0 0025F0F0  7C 9F 23 78 */	mr r31, r4
/* 802621B4 0025F0F4  81 84 00 00 */	lwz r12, 0(r4)
/* 802621B8 0025F0F8  81 8C 00 08 */	lwz r12, 8(r12)
/* 802621BC 0025F0FC  7D 89 03 A6 */	mtctr r12
/* 802621C0 0025F100  4E 80 04 21 */	bctrl 
/* 802621C4 0025F104  C0 41 00 08 */	lfs f2, 8(r1)
/* 802621C8 0025F108  7F E3 FB 78 */	mr r3, r31
/* 802621CC 0025F10C  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 802621D0 0025F110  38 81 00 14 */	addi r4, r1, 0x14
/* 802621D4 0025F114  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 802621D8 0025F118  D0 41 00 14 */	stfs f2, 0x14(r1)
/* 802621DC 0025F11C  D0 21 00 18 */	stfs f1, 0x18(r1)
/* 802621E0 0025F120  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 802621E4 0025F124  C0 1F 02 D0 */	lfs f0, 0x2d0(r31)
/* 802621E8 0025F128  EC 01 00 2A */	fadds f0, f1, f0
/* 802621EC 0025F12C  D0 01 00 18 */	stfs f0, 0x18(r1)
/* 802621F0 0025F130  81 9F 00 00 */	lwz r12, 0(r31)
/* 802621F4 0025F134  81 8C 00 70 */	lwz r12, 0x70(r12)
/* 802621F8 0025F138  7D 89 03 A6 */	mtctr r12
/* 802621FC 0025F13C  4E 80 04 21 */	bctrl 
/* 80262200 0025F140  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 80262204 0025F144  7F E3 FB 78 */	mr r3, r31
/* 80262208 0025F148  C0 02 CA 10 */	lfs f0, lbl_8051AD70@sda21(r2)
/* 8026220C 0025F14C  38 80 00 01 */	li r4, 1
/* 80262210 0025F150  64 00 40 00 */	oris r0, r0, 0x4000
/* 80262214 0025F154  38 A0 00 00 */	li r5, 0
/* 80262218 0025F158  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 8026221C 0025F15C  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 80262220 0025F160  54 00 06 B0 */	rlwinm r0, r0, 0, 0x1a, 0x18
/* 80262224 0025F164  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 80262228 0025F168  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 8026222C 0025F16C  54 00 04 E2 */	rlwinm r0, r0, 0, 0x13, 0x11
/* 80262230 0025F170  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 80262234 0025F174  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 80262238 0025F178  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 8026223C 0025F17C  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 80262240 0025F180  4B EA 2D C5 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 80262244 0025F184  80 6D 96 80 */	lwz r3, shadowMgr__4Game@sda21(r13)
/* 80262248 0025F188  7F E4 FB 78 */	mr r4, r31
/* 8026224C 0025F18C  4B FD FA 61 */	bl addShadow__Q24Game9ShadowMgrFPQ24Game8Creature
/* 80262250 0025F190  80 6D 96 80 */	lwz r3, shadowMgr__4Game@sda21(r13)
/* 80262254 0025F194  7F E4 FB 78 */	mr r4, r31
/* 80262258 0025F198  38 A0 00 01 */	li r5, 1
/* 8026225C 0025F19C  4B FD FE A5 */	bl setForceVisible__Q24Game9ShadowMgrFPQ24Game8Creatureb
/* 80262260 0025F1A0  7F E3 FB 78 */	mr r3, r31
/* 80262264 0025F1A4  81 9F 00 00 */	lwz r12, 0(r31)
/* 80262268 0025F1A8  81 8C 00 F4 */	lwz r12, 0xf4(r12)
/* 8026226C 0025F1AC  7D 89 03 A6 */	mtctr r12
/* 80262270 0025F1B0  4E 80 04 21 */	bctrl 
/* 80262274 0025F1B4  81 83 00 00 */	lwz r12, 0(r3)
/* 80262278 0025F1B8  38 80 59 6C */	li r4, 0x596c
/* 8026227C 0025F1BC  38 A0 00 00 */	li r5, 0
/* 80262280 0025F1C0  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 80262284 0025F1C4  7D 89 03 A6 */	mtctr r12
/* 80262288 0025F1C8  4E 80 04 21 */	bctrl 
/* 8026228C 0025F1CC  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80262290 0025F1D0  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 80262294 0025F1D4  7C 08 03 A6 */	mtlr r0
/* 80262298 0025F1D8  38 21 00 30 */	addi r1, r1, 0x30
/* 8026229C 0025F1DC  4E 80 00 20 */	blr 

.global exec__Q34Game4Rock11StateAppearFPQ24Game9EnemyBase
exec__Q34Game4Rock11StateAppearFPQ24Game9EnemyBase:
/* 802622A0 0025F1E0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802622A4 0025F1E4  7C 08 02 A6 */	mflr r0
/* 802622A8 0025F1E8  90 01 00 14 */	stw r0, 0x14(r1)
/* 802622AC 0025F1EC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802622B0 0025F1F0  7C 9F 23 78 */	mr r31, r4
/* 802622B4 0025F1F4  93 C1 00 08 */	stw r30, 8(r1)
/* 802622B8 0025F1F8  7C 7E 1B 78 */	mr r30, r3
/* 802622BC 0025F1FC  7F E3 FB 78 */	mr r3, r31
/* 802622C0 0025F200  48 00 16 C9 */	bl fallRockScaleUp__Q34Game4Rock3ObjFv
/* 802622C4 0025F204  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802622C8 0025F208  41 82 00 24 */	beq lbl_802622EC
/* 802622CC 0025F20C  7F C3 F3 78 */	mr r3, r30
/* 802622D0 0025F210  7F E4 FB 78 */	mr r4, r31
/* 802622D4 0025F214  81 9E 00 00 */	lwz r12, 0(r30)
/* 802622D8 0025F218  38 A0 00 03 */	li r5, 3
/* 802622DC 0025F21C  38 C0 00 00 */	li r6, 0
/* 802622E0 0025F220  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802622E4 0025F224  7D 89 03 A6 */	mtctr r12
/* 802622E8 0025F228  4E 80 04 21 */	bctrl 
lbl_802622EC:
/* 802622EC 0025F22C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802622F0 0025F230  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802622F4 0025F234  83 C1 00 08 */	lwz r30, 8(r1)
/* 802622F8 0025F238  7C 08 03 A6 */	mtlr r0
/* 802622FC 0025F23C  38 21 00 10 */	addi r1, r1, 0x10
/* 80262300 0025F240  4E 80 00 20 */	blr 

.global cleanup__Q34Game4Rock11StateAppearFPQ24Game9EnemyBase
cleanup__Q34Game4Rock11StateAppearFPQ24Game9EnemyBase:
/* 80262304 0025F244  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80262308 0025F248  7C 08 02 A6 */	mflr r0
/* 8026230C 0025F24C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80262310 0025F250  7C 80 23 78 */	mr r0, r4
/* 80262314 0025F254  38 80 00 01 */	li r4, 1
/* 80262318 0025F258  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8026231C 0025F25C  7C 1F 03 78 */	mr r31, r0
/* 80262320 0025F260  7F E3 FB 78 */	mr r3, r31
/* 80262324 0025F264  81 9F 00 00 */	lwz r12, 0(r31)
/* 80262328 0025F268  81 8C 00 A4 */	lwz r12, 0xa4(r12)
/* 8026232C 0025F26C  7D 89 03 A6 */	mtctr r12
/* 80262330 0025F270  4E 80 04 21 */	bctrl 
/* 80262334 0025F274  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 80262338 0025F278  54 00 07 B8 */	rlwinm r0, r0, 0, 0x1e, 0x1c
/* 8026233C 0025F27C  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 80262340 0025F280  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 80262344 0025F284  54 00 00 80 */	rlwinm r0, r0, 0, 2, 0
/* 80262348 0025F288  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 8026234C 0025F28C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80262350 0025F290  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80262354 0025F294  7C 08 03 A6 */	mtlr r0
/* 80262358 0025F298  38 21 00 10 */	addi r1, r1, 0x10
/* 8026235C 0025F29C  4E 80 00 20 */	blr 

.global init__Q34Game4Rock13StateDropWaitFPQ24Game9EnemyBasePQ24Game8StateArg
init__Q34Game4Rock13StateDropWaitFPQ24Game9EnemyBasePQ24Game8StateArg:
/* 80262360 0025F2A0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80262364 0025F2A4  7C 08 02 A6 */	mflr r0
/* 80262368 0025F2A8  7C 83 23 78 */	mr r3, r4
/* 8026236C 0025F2AC  38 80 00 01 */	li r4, 1
/* 80262370 0025F2B0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80262374 0025F2B4  38 A0 00 00 */	li r5, 0
/* 80262378 0025F2B8  4B EA 2C 8D */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 8026237C 0025F2BC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80262380 0025F2C0  7C 08 03 A6 */	mtlr r0
/* 80262384 0025F2C4  38 21 00 10 */	addi r1, r1, 0x10
/* 80262388 0025F2C8  4E 80 00 20 */	blr 

.global exec__Q34Game4Rock13StateDropWaitFPQ24Game9EnemyBase
exec__Q34Game4Rock13StateDropWaitFPQ24Game9EnemyBase:
/* 8026238C 0025F2CC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80262390 0025F2D0  7C 08 02 A6 */	mflr r0
/* 80262394 0025F2D4  38 A0 00 03 */	li r5, 3
/* 80262398 0025F2D8  38 C0 00 00 */	li r6, 0
/* 8026239C 0025F2DC  90 01 00 14 */	stw r0, 0x14(r1)
/* 802623A0 0025F2E0  81 83 00 00 */	lwz r12, 0(r3)
/* 802623A4 0025F2E4  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802623A8 0025F2E8  7D 89 03 A6 */	mtctr r12
/* 802623AC 0025F2EC  4E 80 04 21 */	bctrl 
/* 802623B0 0025F2F0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802623B4 0025F2F4  7C 08 03 A6 */	mtlr r0
/* 802623B8 0025F2F8  38 21 00 10 */	addi r1, r1, 0x10
/* 802623BC 0025F2FC  4E 80 00 20 */	blr 

.global cleanup__Q34Game4Rock13StateDropWaitFPQ24Game9EnemyBase
cleanup__Q34Game4Rock13StateDropWaitFPQ24Game9EnemyBase:
/* 802623C0 0025F300  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802623C4 0025F304  7C 08 02 A6 */	mflr r0
/* 802623C8 0025F308  90 01 00 14 */	stw r0, 0x14(r1)
/* 802623CC 0025F30C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802623D0 0025F310  7C 9F 23 78 */	mr r31, r4
/* 802623D4 0025F314  80 04 01 E0 */	lwz r0, 0x1e0(r4)
/* 802623D8 0025F318  54 00 06 B0 */	rlwinm r0, r0, 0, 0x1a, 0x18
/* 802623DC 0025F31C  90 04 01 E0 */	stw r0, 0x1e0(r4)
/* 802623E0 0025F320  80 04 01 E0 */	lwz r0, 0x1e0(r4)
/* 802623E4 0025F324  54 00 04 E2 */	rlwinm r0, r0, 0, 0x13, 0x11
/* 802623E8 0025F328  90 04 01 E0 */	stw r0, 0x1e0(r4)
/* 802623EC 0025F32C  80 6D 96 80 */	lwz r3, shadowMgr__4Game@sda21(r13)
/* 802623F0 0025F330  4B FD F8 BD */	bl addShadow__Q24Game9ShadowMgrFPQ24Game8Creature
/* 802623F4 0025F334  80 6D 96 80 */	lwz r3, shadowMgr__4Game@sda21(r13)
/* 802623F8 0025F338  7F E4 FB 78 */	mr r4, r31
/* 802623FC 0025F33C  38 A0 00 01 */	li r5, 1
/* 80262400 0025F340  4B FD FD 01 */	bl setForceVisible__Q24Game9ShadowMgrFPQ24Game8Creatureb
/* 80262404 0025F344  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80262408 0025F348  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8026240C 0025F34C  7C 08 03 A6 */	mtlr r0
/* 80262410 0025F350  38 21 00 10 */	addi r1, r1, 0x10
/* 80262414 0025F354  4E 80 00 20 */	blr 

.global init__Q34Game4Rock9StateFallFPQ24Game9EnemyBasePQ24Game8StateArg
init__Q34Game4Rock9StateFallFPQ24Game9EnemyBasePQ24Game8StateArg:
/* 80262418 0025F358  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8026241C 0025F35C  7C 08 02 A6 */	mflr r0
/* 80262420 0025F360  C0 02 CA 10 */	lfs f0, lbl_8051AD70@sda21(r2)
/* 80262424 0025F364  90 01 00 24 */	stw r0, 0x24(r1)
/* 80262428 0025F368  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8026242C 0025F36C  7C 9F 23 78 */	mr r31, r4
/* 80262430 0025F370  38 81 00 08 */	addi r4, r1, 8
/* 80262434 0025F374  C0 3F 02 CC */	lfs f1, 0x2cc(r31)
/* 80262438 0025F378  7F E3 FB 78 */	mr r3, r31
/* 8026243C 0025F37C  FC 20 08 50 */	fneg f1, f1
/* 80262440 0025F380  D0 01 00 08 */	stfs f0, 8(r1)
/* 80262444 0025F384  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 80262448 0025F388  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 8026244C 0025F38C  81 9F 00 00 */	lwz r12, 0(r31)
/* 80262450 0025F390  81 8C 00 68 */	lwz r12, 0x68(r12)
/* 80262454 0025F394  7D 89 03 A6 */	mtctr r12
/* 80262458 0025F398  4E 80 04 21 */	bctrl 
/* 8026245C 0025F39C  7F E3 FB 78 */	mr r3, r31
/* 80262460 0025F3A0  48 00 1C 7D */	bl startFallEffect__Q34Game4Rock3ObjFv
/* 80262464 0025F3A4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80262468 0025F3A8  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8026246C 0025F3AC  7C 08 03 A6 */	mtlr r0
/* 80262470 0025F3B0  38 21 00 20 */	addi r1, r1, 0x20
/* 80262474 0025F3B4  4E 80 00 20 */	blr 

.global exec__Q34Game4Rock9StateFallFPQ24Game9EnemyBase
exec__Q34Game4Rock9StateFallFPQ24Game9EnemyBase:
/* 80262478 0025F3B8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8026247C 0025F3BC  7C 08 02 A6 */	mflr r0
/* 80262480 0025F3C0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80262484 0025F3C4  80 04 00 C8 */	lwz r0, 0xc8(r4)
/* 80262488 0025F3C8  28 00 00 00 */	cmplwi r0, 0
/* 8026248C 0025F3CC  41 82 00 20 */	beq lbl_802624AC
/* 80262490 0025F3D0  81 83 00 00 */	lwz r12, 0(r3)
/* 80262494 0025F3D4  38 A0 00 05 */	li r5, 5
/* 80262498 0025F3D8  38 C0 00 00 */	li r6, 0
/* 8026249C 0025F3DC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802624A0 0025F3E0  7D 89 03 A6 */	mtctr r12
/* 802624A4 0025F3E4  4E 80 04 21 */	bctrl 
/* 802624A8 0025F3E8  48 00 00 28 */	b lbl_802624D0
lbl_802624AC:
/* 802624AC 0025F3EC  80 04 01 E0 */	lwz r0, 0x1e0(r4)
/* 802624B0 0025F3F0  54 00 06 F7 */	rlwinm. r0, r0, 0, 0x1b, 0x1b
/* 802624B4 0025F3F4  41 82 00 1C */	beq lbl_802624D0
/* 802624B8 0025F3F8  81 83 00 00 */	lwz r12, 0(r3)
/* 802624BC 0025F3FC  38 A0 00 05 */	li r5, 5
/* 802624C0 0025F400  38 C0 00 00 */	li r6, 0
/* 802624C4 0025F404  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802624C8 0025F408  7D 89 03 A6 */	mtctr r12
/* 802624CC 0025F40C  4E 80 04 21 */	bctrl 
lbl_802624D0:
/* 802624D0 0025F410  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802624D4 0025F414  7C 08 03 A6 */	mtlr r0
/* 802624D8 0025F418  38 21 00 10 */	addi r1, r1, 0x10
/* 802624DC 0025F41C  4E 80 00 20 */	blr 

.global cleanup__Q34Game4Rock9StateFallFPQ24Game9EnemyBase
cleanup__Q34Game4Rock9StateFallFPQ24Game9EnemyBase:
/* 802624E0 0025F420  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 802624E4 0025F424  7C 08 02 A6 */	mflr r0
/* 802624E8 0025F428  38 A0 00 00 */	li r5, 0
/* 802624EC 0025F42C  90 01 00 34 */	stw r0, 0x34(r1)
/* 802624F0 0025F430  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 802624F4 0025F434  7C 9F 23 78 */	mr r31, r4
/* 802624F8 0025F438  80 6D 96 80 */	lwz r3, shadowMgr__4Game@sda21(r13)
/* 802624FC 0025F43C  4B FD FC 05 */	bl setForceVisible__Q24Game9ShadowMgrFPQ24Game8Creatureb
/* 80262500 0025F440  7F E3 FB 78 */	mr r3, r31
/* 80262504 0025F444  48 00 1C 0D */	bl finishFallEffect__Q34Game4Rock3ObjFv
/* 80262508 0025F448  7F E4 FB 78 */	mr r4, r31
/* 8026250C 0025F44C  38 61 00 08 */	addi r3, r1, 8
/* 80262510 0025F450  81 9F 00 00 */	lwz r12, 0(r31)
/* 80262514 0025F454  81 8C 00 08 */	lwz r12, 8(r12)
/* 80262518 0025F458  7D 89 03 A6 */	mtctr r12
/* 8026251C 0025F45C  4E 80 04 21 */	bctrl 
/* 80262520 0025F460  C0 41 00 08 */	lfs f2, 8(r1)
/* 80262524 0025F464  38 A1 00 14 */	addi r5, r1, 0x14
/* 80262528 0025F468  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 8026252C 0025F46C  38 80 00 1B */	li r4, 0x1b
/* 80262530 0025F470  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 80262534 0025F474  38 C0 00 02 */	li r6, 2
/* 80262538 0025F478  D0 41 00 14 */	stfs f2, 0x14(r1)
/* 8026253C 0025F47C  80 6D 96 A0 */	lwz r3, cameraMgr__4Game@sda21(r13)
/* 80262540 0025F480  D0 21 00 18 */	stfs f1, 0x18(r1)
/* 80262544 0025F484  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 80262548 0025F488  4B FE FC F5 */	bl "startVibration__Q24Game9CameraMgrFiR10Vector3<f>i"
/* 8026254C 0025F48C  80 6D 96 A8 */	lwz r3, rumbleMgr__4Game@sda21(r13)
/* 80262550 0025F490  38 A1 00 14 */	addi r5, r1, 0x14
/* 80262554 0025F494  38 80 00 0E */	li r4, 0xe
/* 80262558 0025F498  38 C0 00 02 */	li r6, 2
/* 8026255C 0025F49C  4B FF 12 25 */	bl "startRumble__Q24Game9RumbleMgrFiR10Vector3<f>i"
/* 80262560 0025F4A0  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80262564 0025F4A4  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 80262568 0025F4A8  7C 08 03 A6 */	mtlr r0
/* 8026256C 0025F4AC  38 21 00 30 */	addi r1, r1, 0x30
/* 80262570 0025F4B0  4E 80 00 20 */	blr 

.global init__Q34Game4Rock9StateMoveFPQ24Game9EnemyBasePQ24Game8StateArg
init__Q34Game4Rock9StateMoveFPQ24Game9EnemyBasePQ24Game8StateArg:
/* 80262574 0025F4B4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80262578 0025F4B8  7C 08 02 A6 */	mflr r0
/* 8026257C 0025F4BC  38 A0 00 00 */	li r5, 0
/* 80262580 0025F4C0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80262584 0025F4C4  7C 80 23 78 */	mr r0, r4
/* 80262588 0025F4C8  38 80 00 01 */	li r4, 1
/* 8026258C 0025F4CC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80262590 0025F4D0  7C 1F 03 78 */	mr r31, r0
/* 80262594 0025F4D4  7F E3 FB 78 */	mr r3, r31
/* 80262598 0025F4D8  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 8026259C 0025F4DC  54 00 06 B0 */	rlwinm r0, r0, 0, 0x1a, 0x18
/* 802625A0 0025F4E0  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 802625A4 0025F4E4  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 802625A8 0025F4E8  54 00 04 E2 */	rlwinm r0, r0, 0, 0x13, 0x11
/* 802625AC 0025F4EC  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 802625B0 0025F4F0  4B EA 2A 55 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 802625B4 0025F4F4  C0 02 CA 10 */	lfs f0, lbl_8051AD70@sda21(r2)
/* 802625B8 0025F4F8  D0 1F 02 C8 */	stfs f0, 0x2c8(r31)
/* 802625BC 0025F4FC  80 1F 02 80 */	lwz r0, 0x280(r31)
/* 802625C0 0025F500  28 00 00 00 */	cmplwi r0, 0
/* 802625C4 0025F504  41 82 00 10 */	beq lbl_802625D4
/* 802625C8 0025F508  7F E3 FB 78 */	mr r3, r31
/* 802625CC 0025F50C  48 00 1B D9 */	bl startRollingWaterEffect__Q34Game4Rock3ObjFv
/* 802625D0 0025F510  48 00 00 0C */	b lbl_802625DC
lbl_802625D4:
/* 802625D4 0025F514  7F E3 FB 78 */	mr r3, r31
/* 802625D8 0025F518  48 00 1B 69 */	bl startRollingGroundEffect__Q34Game4Rock3ObjFv
lbl_802625DC:
/* 802625DC 0025F51C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802625E0 0025F520  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802625E4 0025F524  7C 08 03 A6 */	mtlr r0
/* 802625E8 0025F528  38 21 00 10 */	addi r1, r1, 0x10
/* 802625EC 0025F52C  4E 80 00 20 */	blr 

.global exec__Q34Game4Rock9StateMoveFPQ24Game9EnemyBase
exec__Q34Game4Rock9StateMoveFPQ24Game9EnemyBase:
/* 802625F0 0025F530  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802625F4 0025F534  7C 08 02 A6 */	mflr r0
/* 802625F8 0025F538  90 01 00 14 */	stw r0, 0x14(r1)
/* 802625FC 0025F53C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80262600 0025F540  7C 9F 23 78 */	mr r31, r4
/* 80262604 0025F544  93 C1 00 08 */	stw r30, 8(r1)
/* 80262608 0025F548  7C 7E 1B 78 */	mr r30, r3
/* 8026260C 0025F54C  7F E3 FB 78 */	mr r3, r31
/* 80262610 0025F550  48 00 15 71 */	bl updateMoveVelocity__Q34Game4Rock3ObjFv
/* 80262614 0025F554  7F E3 FB 78 */	mr r3, r31
/* 80262618 0025F558  48 00 13 ED */	bl moveRockScaleUp__Q34Game4Rock3ObjFv
/* 8026261C 0025F55C  80 8D 9A EC */	lwz r4, sys@sda21(r13)
/* 80262620 0025F560  7F E3 FB 78 */	mr r3, r31
/* 80262624 0025F564  C0 3F 02 C8 */	lfs f1, 0x2c8(r31)
/* 80262628 0025F568  C0 04 00 54 */	lfs f0, 0x54(r4)
/* 8026262C 0025F56C  EC 01 00 2A */	fadds f0, f1, f0
/* 80262630 0025F570  D0 1F 02 C8 */	stfs f0, 0x2c8(r31)
/* 80262634 0025F574  48 00 1C DD */	bl updateWaterEffectPosition__Q34Game4Rock3ObjFv
/* 80262638 0025F578  7F E3 FB 78 */	mr r3, r31
/* 8026263C 0025F57C  81 9F 00 00 */	lwz r12, 0(r31)
/* 80262640 0025F580  81 8C 00 F4 */	lwz r12, 0xf4(r12)
/* 80262644 0025F584  7D 89 03 A6 */	mtctr r12
/* 80262648 0025F588  4E 80 04 21 */	bctrl 
/* 8026264C 0025F58C  81 83 00 00 */	lwz r12, 0(r3)
/* 80262650 0025F590  38 80 50 6A */	li r4, 0x506a
/* 80262654 0025F594  38 A0 00 00 */	li r5, 0
/* 80262658 0025F598  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 8026265C 0025F59C  7D 89 03 A6 */	mtctr r12
/* 80262660 0025F5A0  4E 80 04 21 */	bctrl 
/* 80262664 0025F5A4  C0 3F 02 00 */	lfs f1, 0x200(r31)
/* 80262668 0025F5A8  C0 02 CA 10 */	lfs f0, lbl_8051AD70@sda21(r2)
/* 8026266C 0025F5AC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80262670 0025F5B0  4C 40 13 82 */	cror 2, 0, 2
/* 80262674 0025F5B4  41 82 00 14 */	beq lbl_80262688
/* 80262678 0025F5B8  C0 3F 02 C8 */	lfs f1, 0x2c8(r31)
/* 8026267C 0025F5BC  C0 02 CA 18 */	lfs f0, lbl_8051AD78@sda21(r2)
/* 80262680 0025F5C0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80262684 0025F5C4  40 81 00 24 */	ble lbl_802626A8
lbl_80262688:
/* 80262688 0025F5C8  7F C3 F3 78 */	mr r3, r30
/* 8026268C 0025F5CC  7F E4 FB 78 */	mr r4, r31
/* 80262690 0025F5D0  81 9E 00 00 */	lwz r12, 0(r30)
/* 80262694 0025F5D4  38 A0 00 05 */	li r5, 5
/* 80262698 0025F5D8  38 C0 00 00 */	li r6, 0
/* 8026269C 0025F5DC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802626A0 0025F5E0  7D 89 03 A6 */	mtctr r12
/* 802626A4 0025F5E4  4E 80 04 21 */	bctrl 
lbl_802626A8:
/* 802626A8 0025F5E8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802626AC 0025F5EC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802626B0 0025F5F0  83 C1 00 08 */	lwz r30, 8(r1)
/* 802626B4 0025F5F4  7C 08 03 A6 */	mtlr r0
/* 802626B8 0025F5F8  38 21 00 10 */	addi r1, r1, 0x10
/* 802626BC 0025F5FC  4E 80 00 20 */	blr 

.global cleanup__Q34Game4Rock9StateMoveFPQ24Game9EnemyBase
cleanup__Q34Game4Rock9StateMoveFPQ24Game9EnemyBase:
/* 802626C0 0025F600  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 802626C4 0025F604  7C 08 02 A6 */	mflr r0
/* 802626C8 0025F608  90 01 00 34 */	stw r0, 0x34(r1)
/* 802626CC 0025F60C  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 802626D0 0025F610  7C 9F 23 78 */	mr r31, r4
/* 802626D4 0025F614  7F E3 FB 78 */	mr r3, r31
/* 802626D8 0025F618  48 00 1A 9D */	bl finishRollingGroundEffect__Q34Game4Rock3ObjFv
/* 802626DC 0025F61C  7F E3 FB 78 */	mr r3, r31
/* 802626E0 0025F620  48 00 1B BD */	bl finishRollingWaterEffect__Q34Game4Rock3ObjFv
/* 802626E4 0025F624  7F E4 FB 78 */	mr r4, r31
/* 802626E8 0025F628  38 61 00 08 */	addi r3, r1, 8
/* 802626EC 0025F62C  81 9F 00 00 */	lwz r12, 0(r31)
/* 802626F0 0025F630  81 8C 00 08 */	lwz r12, 8(r12)
/* 802626F4 0025F634  7D 89 03 A6 */	mtctr r12
/* 802626F8 0025F638  4E 80 04 21 */	bctrl 
/* 802626FC 0025F63C  C0 41 00 08 */	lfs f2, 8(r1)
/* 80262700 0025F640  38 A1 00 14 */	addi r5, r1, 0x14
/* 80262704 0025F644  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 80262708 0025F648  38 80 00 0E */	li r4, 0xe
/* 8026270C 0025F64C  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 80262710 0025F650  38 C0 00 02 */	li r6, 2
/* 80262714 0025F654  D0 41 00 14 */	stfs f2, 0x14(r1)
/* 80262718 0025F658  80 6D 96 A8 */	lwz r3, rumbleMgr__4Game@sda21(r13)
/* 8026271C 0025F65C  D0 21 00 18 */	stfs f1, 0x18(r1)
/* 80262720 0025F660  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 80262724 0025F664  4B FF 10 5D */	bl "startRumble__Q24Game9RumbleMgrFiR10Vector3<f>i"
/* 80262728 0025F668  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8026272C 0025F66C  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 80262730 0025F670  7C 08 03 A6 */	mtlr r0
/* 80262734 0025F674  38 21 00 30 */	addi r1, r1, 0x30
/* 80262738 0025F678  4E 80 00 20 */	blr 

.global init__Q34Game4Rock9StateDeadFPQ24Game9EnemyBasePQ24Game8StateArg
init__Q34Game4Rock9StateDeadFPQ24Game9EnemyBasePQ24Game8StateArg:
/* 8026273C 0025F67C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80262740 0025F680  7C 08 02 A6 */	mflr r0
/* 80262744 0025F684  C0 02 CA 10 */	lfs f0, lbl_8051AD70@sda21(r2)
/* 80262748 0025F688  38 A0 00 00 */	li r5, 0
/* 8026274C 0025F68C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80262750 0025F690  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80262754 0025F694  7C 9F 23 78 */	mr r31, r4
/* 80262758 0025F698  38 80 00 00 */	li r4, 0
/* 8026275C 0025F69C  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 80262760 0025F6A0  7F E3 FB 78 */	mr r3, r31
/* 80262764 0025F6A4  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 80262768 0025F6A8  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 8026276C 0025F6AC  4B EA 28 99 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 80262770 0025F6B0  80 6D 96 80 */	lwz r3, shadowMgr__4Game@sda21(r13)
/* 80262774 0025F6B4  7F E4 FB 78 */	mr r4, r31
/* 80262778 0025F6B8  4B FD F5 79 */	bl delShadow__Q24Game9ShadowMgrFPQ24Game8Creature
/* 8026277C 0025F6BC  7F E3 FB 78 */	mr r3, r31
/* 80262780 0025F6C0  48 00 1C 35 */	bl createRockDeadEffect__Q34Game4Rock3ObjFv
/* 80262784 0025F6C4  7F E3 FB 78 */	mr r3, r31
/* 80262788 0025F6C8  81 9F 00 00 */	lwz r12, 0(r31)
/* 8026278C 0025F6CC  81 8C 00 F4 */	lwz r12, 0xf4(r12)
/* 80262790 0025F6D0  7D 89 03 A6 */	mtctr r12
/* 80262794 0025F6D4  4E 80 04 21 */	bctrl 
/* 80262798 0025F6D8  81 83 00 00 */	lwz r12, 0(r3)
/* 8026279C 0025F6DC  38 80 58 6B */	li r4, 0x586b
/* 802627A0 0025F6E0  38 A0 00 00 */	li r5, 0
/* 802627A4 0025F6E4  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 802627A8 0025F6E8  7D 89 03 A6 */	mtctr r12
/* 802627AC 0025F6EC  4E 80 04 21 */	bctrl 
/* 802627B0 0025F6F0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802627B4 0025F6F4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802627B8 0025F6F8  7C 08 03 A6 */	mtlr r0
/* 802627BC 0025F6FC  38 21 00 10 */	addi r1, r1, 0x10
/* 802627C0 0025F700  4E 80 00 20 */	blr 

.global exec__Q34Game4Rock9StateDeadFPQ24Game9EnemyBase
exec__Q34Game4Rock9StateDeadFPQ24Game9EnemyBase:
/* 802627C4 0025F704  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802627C8 0025F708  7C 08 02 A6 */	mflr r0
/* 802627CC 0025F70C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802627D0 0025F710  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802627D4 0025F714  7C 9F 23 78 */	mr r31, r4
/* 802627D8 0025F718  7F E3 FB 78 */	mr r3, r31
/* 802627DC 0025F71C  81 9F 00 00 */	lwz r12, 0(r31)
/* 802627E0 0025F720  81 8C 00 A0 */	lwz r12, 0xa0(r12)
/* 802627E4 0025F724  7D 89 03 A6 */	mtctr r12
/* 802627E8 0025F728  4E 80 04 21 */	bctrl 
/* 802627EC 0025F72C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802627F0 0025F730  41 82 00 24 */	beq lbl_80262814
/* 802627F4 0025F734  7F E3 FB 78 */	mr r3, r31
/* 802627F8 0025F738  38 80 00 00 */	li r4, 0
/* 802627FC 0025F73C  81 9F 00 00 */	lwz r12, 0(r31)
/* 80262800 0025F740  81 8C 00 A4 */	lwz r12, 0xa4(r12)
/* 80262804 0025F744  7D 89 03 A6 */	mtctr r12
/* 80262808 0025F748  4E 80 04 21 */	bctrl 
/* 8026280C 0025F74C  7F E3 FB 78 */	mr r3, r31
/* 80262810 0025F750  4B EA 4F 6D */	bl hardConstraintOn__Q24Game9EnemyBaseFv
lbl_80262814:
/* 80262814 0025F754  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 80262818 0025F758  88 03 00 24 */	lbz r0, 0x24(r3)
/* 8026281C 0025F75C  28 00 00 00 */	cmplwi r0, 0
/* 80262820 0025F760  41 82 00 1C */	beq lbl_8026283C
/* 80262824 0025F764  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 80262828 0025F768  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 8026282C 0025F76C  40 82 00 10 */	bne lbl_8026283C
/* 80262830 0025F770  7F E3 FB 78 */	mr r3, r31
/* 80262834 0025F774  38 80 00 00 */	li r4, 0
/* 80262838 0025F778  4B ED 88 B9 */	bl kill__Q24Game8CreatureFPQ24Game15CreatureKillArg
lbl_8026283C:
/* 8026283C 0025F77C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80262840 0025F780  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80262844 0025F784  7C 08 03 A6 */	mtlr r0
/* 80262848 0025F788  38 21 00 10 */	addi r1, r1, 0x10
/* 8026284C 0025F78C  4E 80 00 20 */	blr 

.global cleanup__Q34Game4Rock9StateDeadFPQ24Game9EnemyBase
cleanup__Q34Game4Rock9StateDeadFPQ24Game9EnemyBase:
/* 80262850 0025F790  4E 80 00 20 */	blr 

.global __sinit_RockState_cpp
__sinit_RockState_cpp:
/* 80262854 0025F794  3C 80 80 51 */	lis r4, __float_nan@ha
/* 80262858 0025F798  38 00 FF FF */	li r0, -1
/* 8026285C 0025F79C  C0 04 48 B0 */	lfs f0, __float_nan@l(r4)
/* 80262860 0025F7A0  3C 60 80 4C */	lis r3, lbl_804C3EB8@ha
/* 80262864 0025F7A4  90 0D 96 C0 */	stw r0, lbl_80515D40@sda21(r13)
/* 80262868 0025F7A8  D4 03 3E B8 */	stfsu f0, lbl_804C3EB8@l(r3)
/* 8026286C 0025F7AC  D0 0D 96 C4 */	stfs f0, lbl_80515D44@sda21(r13)
/* 80262870 0025F7B0  D0 03 00 04 */	stfs f0, 4(r3)
/* 80262874 0025F7B4  D0 03 00 08 */	stfs f0, 8(r3)
/* 80262878 0025F7B8  4E 80 00 20 */	blr 
