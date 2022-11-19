.include "macros.inc"
.section .ctors, "wa"  # 0x80472F00 - 0x804732C0
lbl_constructor:
.4byte __sinit_jigumoState_cpp

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.global lbl_804E2908
lbl_804E2908:
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.global __vt__Q34Game6Jigumo10StateSMiss
__vt__Q34Game6Jigumo10StateSMiss:
	.4byte 0
	.4byte 0
	.4byte init__Q34Game6Jigumo10StateSMissFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game6Jigumo10StateSMissFPQ24Game9EnemyBase
	.4byte cleanup__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.global __vt__Q34Game6Jigumo12StateSAttack
__vt__Q34Game6Jigumo12StateSAttack:
	.4byte 0
	.4byte 0
	.4byte init__Q34Game6Jigumo12StateSAttackFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game6Jigumo12StateSAttackFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game6Jigumo12StateSAttackFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.global __vt__Q34Game6Jigumo11StateSearch
__vt__Q34Game6Jigumo11StateSearch:
	.4byte 0
	.4byte 0
	.4byte init__Q34Game6Jigumo11StateSearchFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game6Jigumo11StateSearchFPQ24Game9EnemyBase
	.4byte cleanup__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.global __vt__Q34Game6Jigumo8StateEat
__vt__Q34Game6Jigumo8StateEat:
	.4byte 0
	.4byte 0
	.4byte init__Q34Game6Jigumo8StateEatFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game6Jigumo8StateEatFPQ24Game9EnemyBase
	.4byte cleanup__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.global __vt__Q34Game6Jigumo10StateFlick
__vt__Q34Game6Jigumo10StateFlick:
	.4byte 0
	.4byte 0
	.4byte init__Q34Game6Jigumo10StateFlickFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game6Jigumo10StateFlickFPQ24Game9EnemyBase
	.4byte cleanup__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.global __vt__Q34Game6Jigumo10StateCarry
__vt__Q34Game6Jigumo10StateCarry:
	.4byte 0
	.4byte 0
	.4byte init__Q34Game6Jigumo10StateCarryFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game6Jigumo10StateCarryFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game6Jigumo10StateCarryFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.global __vt__Q34Game6Jigumo11StateReturn
__vt__Q34Game6Jigumo11StateReturn:
	.4byte 0
	.4byte 0
	.4byte init__Q34Game6Jigumo11StateReturnFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game6Jigumo11StateReturnFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game6Jigumo11StateReturnFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.global __vt__Q34Game6Jigumo9StateMiss
__vt__Q34Game6Jigumo9StateMiss:
	.4byte 0
	.4byte 0
	.4byte init__Q34Game6Jigumo9StateMissFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game6Jigumo9StateMissFPQ24Game9EnemyBase
	.4byte cleanup__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.global __vt__Q34Game6Jigumo24ConditionHeightCheckPiki
__vt__Q34Game6Jigumo24ConditionHeightCheckPiki:
	.4byte 0
	.4byte 0
	.4byte satisfy__Q34Game6Jigumo24ConditionHeightCheckPikiFPQ24Game4Piki
.global __vt__Q34Game6Jigumo11StateAttack
__vt__Q34Game6Jigumo11StateAttack:
	.4byte 0
	.4byte 0
	.4byte init__Q34Game6Jigumo11StateAttackFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game6Jigumo11StateAttackFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game6Jigumo11StateAttackFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.global __vt__Q34Game6Jigumo9StateDead
__vt__Q34Game6Jigumo9StateDead:
	.4byte 0
	.4byte 0
	.4byte init__Q34Game6Jigumo9StateDeadFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game6Jigumo9StateDeadFPQ24Game9EnemyBase
	.4byte cleanup__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.global __vt__Q34Game6Jigumo9StateHide
__vt__Q34Game6Jigumo9StateHide:
	.4byte 0
	.4byte 0
	.4byte init__Q34Game6Jigumo9StateHideFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game6Jigumo9StateHideFPQ24Game9EnemyBase
	.4byte cleanup__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.global __vt__Q34Game6Jigumo11StateAppear
__vt__Q34Game6Jigumo11StateAppear:
	.4byte 0
	.4byte 0
	.4byte init__Q34Game6Jigumo11StateAppearFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game6Jigumo11StateAppearFPQ24Game9EnemyBase
	.4byte cleanup__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.global __vt__Q34Game6Jigumo9StateWait
__vt__Q34Game6Jigumo9StateWait:
	.4byte 0
	.4byte 0
	.4byte init__Q34Game6Jigumo9StateWaitFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game6Jigumo9StateWaitFPQ24Game9EnemyBase
	.4byte cleanup__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.global __vt__Q34Game6Jigumo5State
__vt__Q34Game6Jigumo5State:
	.4byte 0
	.4byte 0
	.4byte init__Q24Game13EnemyFSMStateFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte cleanup__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.global __vt__Q34Game6Jigumo3FSM
__vt__Q34Game6Jigumo3FSM:
	.4byte 0
	.4byte 0
	.4byte init__Q34Game6Jigumo3FSMFPQ24Game9EnemyBase
	.4byte start__Q24Game17EnemyStateMachineFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte exec__Q24Game17EnemyStateMachineFPQ24Game9EnemyBase
	.4byte transit__Q24Game17EnemyStateMachineFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game17EnemyStateMachineFPQ24Game9EnemyBaseR8Graphics
	.4byte getCurrState__Q24Game17EnemyStateMachineFPQ24Game9EnemyBase
	.4byte setCurrState__Q24Game17EnemyStateMachineFPQ24Game9EnemyBasePQ24Game13EnemyFSMState
	.4byte 0

.section .sbss # 0x80514D80 - 0x80516360
.balign 8
.global lbl_80515F58
lbl_80515F58:
	.skip 0x4
.global lbl_80515F5C
lbl_80515F5C:
	.skip 0x4

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
.global lbl_8051E870
lbl_8051E870:
	.4byte 0x77616974
	.4byte 0x00000000
.global lbl_8051E878
lbl_8051E878:
	.4byte 0x61707065
	.4byte 0x61720000
.global lbl_8051E880
lbl_8051E880:
	.4byte 0x00000000
.global lbl_8051E884
lbl_8051E884:
	.float 1.0
.global lbl_8051E888
lbl_8051E888:
	.4byte 0x40A00000
.global lbl_8051E88C
lbl_8051E88C:
	.4byte 0x43B40000
.global lbl_8051E890
lbl_8051E890:
	.4byte 0x40C90FDB
.global lbl_8051E894
lbl_8051E894:
	.4byte 0x3F07AE14
.global lbl_8051E898
lbl_8051E898:
	.4byte 0x68696465
	.4byte 0x00000000
.global lbl_8051E8A0
lbl_8051E8A0:
	.4byte 0xC47A0000
.global lbl_8051E8A4
lbl_8051E8A4:
	.float 0.05
.global lbl_8051E8A8
lbl_8051E8A8:
	.4byte 0x40490FDB
.global lbl_8051E8AC
lbl_8051E8AC:
	.4byte 0x64656164
	.4byte 0x00000000
.global lbl_8051E8B4
lbl_8051E8B4:
	.4byte 0x61747461
	.4byte 0x636B0000
.global lbl_8051E8BC
lbl_8051E8BC:
	.4byte 0x3BB60B61
.global lbl_8051E8C0
lbl_8051E8C0:
	.4byte 0x41C80000
.global lbl_8051E8C4
lbl_8051E8C4:
	.4byte 0x41200000
.global lbl_8051E8C8
lbl_8051E8C8:
	.4byte 0x42C80000
.global lbl_8051E8CC
lbl_8051E8CC:
	.4byte 0x6D697373
	.4byte 0x00000000
.global lbl_8051E8D4
lbl_8051E8D4:
	.4byte 0x72657475
	.4byte 0x726E0000
.global lbl_8051E8DC
lbl_8051E8DC:
	.4byte 0x41A00000
.global lbl_8051E8E0
lbl_8051E8E0:
	.4byte 0x63617272
	.4byte 0x79000000
.global lbl_8051E8E8
lbl_8051E8E8:
	.4byte 0x3F8CCCCD
.global lbl_8051E8EC
lbl_8051E8EC:
	.4byte 0x666C6963
	.4byte 0x6B000000
.global lbl_8051E8F4
lbl_8051E8F4:
	.4byte 0x65617400
.global lbl_8051E8F8
lbl_8051E8F8:
	.float 0.1
.global lbl_8051E8FC
lbl_8051E8FC:
	.4byte 0x43960000
.global lbl_8051E900
lbl_8051E900:
	.4byte 0x73656172
	.4byte 0x63680000
.global lbl_8051E908
lbl_8051E908:
	.4byte 0x3C23D70A
.global lbl_8051E90C
lbl_8051E90C:
	.4byte 0x73617474
	.4byte 0x61636B00
.global lbl_8051E914
lbl_8051E914:
	.4byte 0x42480000
.global lbl_8051E918
lbl_8051E918:
	.4byte 0x736D6973
	.4byte 0x73000000

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global init__Q34Game6Jigumo3FSMFPQ24Game9EnemyBase
init__Q34Game6Jigumo3FSMFPQ24Game9EnemyBase:
/* 80365FF4 00362F34  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80365FF8 00362F38  7C 08 02 A6 */	mflr r0
/* 80365FFC 00362F3C  38 80 00 0D */	li r4, 0xd
/* 80366000 00362F40  90 01 00 14 */	stw r0, 0x14(r1)
/* 80366004 00362F44  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80366008 00362F48  7C 7F 1B 78 */	mr r31, r3
/* 8036600C 00362F4C  4B DC A8 59 */	bl create__Q24Game17EnemyStateMachineFi
/* 80366010 00362F50  38 60 00 10 */	li r3, 0x10
/* 80366014 00362F54  4B CB DE 91 */	bl __nw__FUl
/* 80366018 00362F58  7C 64 1B 79 */	or. r4, r3, r3
/* 8036601C 00362F5C  41 82 00 10 */	beq .L_8036602C
/* 80366020 00362F60  38 80 00 00 */	li r4, 0
/* 80366024 00362F64  48 00 01 D5 */	bl __ct__Q34Game6Jigumo9StateWaitFi
/* 80366028 00362F68  7C 64 1B 78 */	mr r4, r3
.L_8036602C:
/* 8036602C 00362F6C  7F E3 FB 78 */	mr r3, r31
/* 80366030 00362F70  4B DC A8 D9 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 80366034 00362F74  38 60 00 14 */	li r3, 0x14
/* 80366038 00362F78  4B CB DE 6D */	bl __nw__FUl
/* 8036603C 00362F7C  7C 64 1B 79 */	or. r4, r3, r3
/* 80366040 00362F80  41 82 00 10 */	beq .L_80366050
/* 80366044 00362F84  38 80 00 01 */	li r4, 1
/* 80366048 00362F88  48 00 03 4D */	bl __ct__Q34Game6Jigumo11StateAppearFi
/* 8036604C 00362F8C  7C 64 1B 78 */	mr r4, r3
.L_80366050:
/* 80366050 00362F90  7F E3 FB 78 */	mr r3, r31
/* 80366054 00362F94  4B DC A8 B5 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 80366058 00362F98  38 60 00 10 */	li r3, 0x10
/* 8036605C 00362F9C  4B CB DE 49 */	bl __nw__FUl
/* 80366060 00362FA0  7C 64 1B 79 */	or. r4, r3, r3
/* 80366064 00362FA4  41 82 00 10 */	beq .L_80366074
/* 80366068 00362FA8  38 80 00 02 */	li r4, 2
/* 8036606C 00362FAC  48 00 07 C1 */	bl __ct__Q34Game6Jigumo9StateHideFi
/* 80366070 00362FB0  7C 64 1B 78 */	mr r4, r3
.L_80366074:
/* 80366074 00362FB4  7F E3 FB 78 */	mr r3, r31
/* 80366078 00362FB8  4B DC A8 91 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 8036607C 00362FBC  38 60 00 10 */	li r3, 0x10
/* 80366080 00362FC0  4B CB DE 25 */	bl __nw__FUl
/* 80366084 00362FC4  7C 64 1B 79 */	or. r4, r3, r3
/* 80366088 00362FC8  41 82 00 10 */	beq .L_80366098
/* 8036608C 00362FCC  38 80 00 03 */	li r4, 3
/* 80366090 00362FD0  48 00 0A 71 */	bl __ct__Q34Game6Jigumo9StateDeadFi
/* 80366094 00362FD4  7C 64 1B 78 */	mr r4, r3
.L_80366098:
/* 80366098 00362FD8  7F E3 FB 78 */	mr r3, r31
/* 8036609C 00362FDC  4B DC A8 6D */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 803660A0 00362FE0  38 60 00 14 */	li r3, 0x14
/* 803660A4 00362FE4  4B CB DE 01 */	bl __nw__FUl
/* 803660A8 00362FE8  7C 64 1B 79 */	or. r4, r3, r3
/* 803660AC 00362FEC  41 82 00 10 */	beq .L_803660BC
/* 803660B0 00362FF0  38 80 00 04 */	li r4, 4
/* 803660B4 00362FF4  48 00 0B A5 */	bl __ct__Q34Game6Jigumo11StateAttackFi
/* 803660B8 00362FF8  7C 64 1B 78 */	mr r4, r3
.L_803660BC:
/* 803660BC 00362FFC  7F E3 FB 78 */	mr r3, r31
/* 803660C0 00363000  4B DC A8 49 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 803660C4 00363004  38 60 00 14 */	li r3, 0x14
/* 803660C8 00363008  4B CB DD DD */	bl __nw__FUl
/* 803660CC 0036300C  7C 64 1B 79 */	or. r4, r3, r3
/* 803660D0 00363010  41 82 00 10 */	beq .L_803660E0
/* 803660D4 00363014  38 80 00 05 */	li r4, 5
/* 803660D8 00363018  48 00 11 55 */	bl __ct__Q34Game6Jigumo9StateMissFi
/* 803660DC 0036301C  7C 64 1B 78 */	mr r4, r3
.L_803660E0:
/* 803660E0 00363020  7F E3 FB 78 */	mr r3, r31
/* 803660E4 00363024  4B DC A8 25 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 803660E8 00363028  38 60 00 10 */	li r3, 0x10
/* 803660EC 0036302C  4B CB DD B9 */	bl __nw__FUl
/* 803660F0 00363030  7C 64 1B 79 */	or. r4, r3, r3
/* 803660F4 00363034  41 82 00 10 */	beq .L_80366104
/* 803660F8 00363038  38 80 00 06 */	li r4, 6
/* 803660FC 0036303C  48 00 13 B9 */	bl __ct__Q34Game6Jigumo11StateReturnFi
/* 80366100 00363040  7C 64 1B 78 */	mr r4, r3
.L_80366104:
/* 80366104 00363044  7F E3 FB 78 */	mr r3, r31
/* 80366108 00363048  4B DC A8 01 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 8036610C 0036304C  38 60 00 10 */	li r3, 0x10
/* 80366110 00363050  4B CB DD 95 */	bl __nw__FUl
/* 80366114 00363054  7C 64 1B 79 */	or. r4, r3, r3
/* 80366118 00363058  41 82 00 10 */	beq .L_80366128
/* 8036611C 0036305C  38 80 00 07 */	li r4, 7
/* 80366120 00363060  48 00 15 B1 */	bl __ct__Q34Game6Jigumo10StateCarryFi
/* 80366124 00363064  7C 64 1B 78 */	mr r4, r3
.L_80366128:
/* 80366128 00363068  7F E3 FB 78 */	mr r3, r31
/* 8036612C 0036306C  4B DC A7 DD */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 80366130 00363070  38 60 00 10 */	li r3, 0x10
/* 80366134 00363074  4B CB DD 71 */	bl __nw__FUl
/* 80366138 00363078  7C 64 1B 79 */	or. r4, r3, r3
/* 8036613C 0036307C  41 82 00 10 */	beq .L_8036614C
/* 80366140 00363080  38 80 00 08 */	li r4, 8
/* 80366144 00363084  48 00 17 C5 */	bl __ct__Q34Game6Jigumo10StateFlickFi
/* 80366148 00363088  7C 64 1B 78 */	mr r4, r3
.L_8036614C:
/* 8036614C 0036308C  7F E3 FB 78 */	mr r3, r31
/* 80366150 00363090  4B DC A7 B9 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 80366154 00363094  38 60 00 10 */	li r3, 0x10
/* 80366158 00363098  4B CB DD 4D */	bl __nw__FUl
/* 8036615C 0036309C  7C 64 1B 79 */	or. r4, r3, r3
/* 80366160 003630A0  41 82 00 10 */	beq .L_80366170
/* 80366164 003630A4  38 80 00 09 */	li r4, 9
/* 80366168 003630A8  48 00 19 A5 */	bl __ct__Q34Game6Jigumo8StateEatFi
/* 8036616C 003630AC  7C 64 1B 78 */	mr r4, r3
.L_80366170:
/* 80366170 003630B0  7F E3 FB 78 */	mr r3, r31
/* 80366174 003630B4  4B DC A7 95 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 80366178 003630B8  38 60 00 14 */	li r3, 0x14
/* 8036617C 003630BC  4B CB DD 29 */	bl __nw__FUl
/* 80366180 003630C0  7C 64 1B 79 */	or. r4, r3, r3
/* 80366184 003630C4  41 82 00 10 */	beq .L_80366194
/* 80366188 003630C8  38 80 00 0A */	li r4, 0xa
/* 8036618C 003630CC  48 00 1B 35 */	bl __ct__Q34Game6Jigumo11StateSearchFi
/* 80366190 003630D0  7C 64 1B 78 */	mr r4, r3
.L_80366194:
/* 80366194 003630D4  7F E3 FB 78 */	mr r3, r31
/* 80366198 003630D8  4B DC A7 71 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 8036619C 003630DC  38 60 00 14 */	li r3, 0x14
/* 803661A0 003630E0  4B CB DD 05 */	bl __nw__FUl
/* 803661A4 003630E4  7C 64 1B 79 */	or. r4, r3, r3
/* 803661A8 003630E8  41 82 00 10 */	beq .L_803661B8
/* 803661AC 003630EC  38 80 00 0B */	li r4, 0xb
/* 803661B0 003630F0  48 00 21 E9 */	bl __ct__Q34Game6Jigumo12StateSAttackFi
/* 803661B4 003630F4  7C 64 1B 78 */	mr r4, r3
.L_803661B8:
/* 803661B8 003630F8  7F E3 FB 78 */	mr r3, r31
/* 803661BC 003630FC  4B DC A7 4D */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 803661C0 00363100  38 60 00 10 */	li r3, 0x10
/* 803661C4 00363104  4B CB DC E1 */	bl __nw__FUl
/* 803661C8 00363108  7C 64 1B 79 */	or. r4, r3, r3
/* 803661CC 0036310C  41 82 00 10 */	beq .L_803661DC
/* 803661D0 00363110  38 80 00 0C */	li r4, 0xc
/* 803661D4 00363114  48 00 24 B5 */	bl __ct__Q34Game6Jigumo10StateSMissFi
/* 803661D8 00363118  7C 64 1B 78 */	mr r4, r3
.L_803661DC:
/* 803661DC 0036311C  7F E3 FB 78 */	mr r3, r31
/* 803661E0 00363120  4B DC A7 29 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 803661E4 00363124  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803661E8 00363128  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803661EC 0036312C  7C 08 03 A6 */	mtlr r0
/* 803661F0 00363130  38 21 00 10 */	addi r1, r1, 0x10
/* 803661F4 00363134  4E 80 00 20 */	blr 

.global __ct__Q34Game6Jigumo9StateWaitFi
__ct__Q34Game6Jigumo9StateWaitFi:
/* 803661F8 00363138  3C A0 80 4B */	lis r5, __vt__Q24Game13EnemyFSMState@ha
/* 803661FC 0036313C  3C C0 80 4E */	lis r6, __vt__Q34Game6Jigumo5State@ha
/* 80366200 00363140  38 05 F9 A4 */	addi r0, r5, __vt__Q24Game13EnemyFSMState@l
/* 80366204 00363144  3C A0 80 4E */	lis r5, __vt__Q34Game6Jigumo9StateWait@ha
/* 80366208 00363148  90 03 00 00 */	stw r0, 0(r3)
/* 8036620C 0036314C  38 E0 00 00 */	li r7, 0
/* 80366210 00363150  38 C6 2A F4 */	addi r6, r6, __vt__Q34Game6Jigumo5State@l
/* 80366214 00363154  38 A5 2A D0 */	addi r5, r5, __vt__Q34Game6Jigumo9StateWait@l
/* 80366218 00363158  90 83 00 04 */	stw r4, 4(r3)
/* 8036621C 0036315C  38 02 05 10 */	addi r0, r2, lbl_8051E870@sda21
/* 80366220 00363160  90 E3 00 08 */	stw r7, 8(r3)
/* 80366224 00363164  90 C3 00 00 */	stw r6, 0(r3)
/* 80366228 00363168  90 A3 00 00 */	stw r5, 0(r3)
/* 8036622C 0036316C  90 03 00 0C */	stw r0, 0xc(r3)
/* 80366230 00363170  4E 80 00 20 */	blr 

.global init__Q34Game6Jigumo9StateWaitFPQ24Game9EnemyBasePQ24Game8StateArg
init__Q34Game6Jigumo9StateWaitFPQ24Game9EnemyBasePQ24Game8StateArg:
/* 80366234 00363174  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80366238 00363178  7C 08 02 A6 */	mflr r0
/* 8036623C 0036317C  38 A0 00 00 */	li r5, 0
/* 80366240 00363180  90 01 00 14 */	stw r0, 0x14(r1)
/* 80366244 00363184  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80366248 00363188  7C 9F 23 78 */	mr r31, r4
/* 8036624C 0036318C  38 80 00 0F */	li r4, 0xf
/* 80366250 00363190  7F E3 FB 78 */	mr r3, r31
/* 80366254 00363194  4B D9 ED B1 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 80366258 00363198  C0 1F 01 98 */	lfs f0, 0x198(r31)
/* 8036625C 0036319C  38 60 00 00 */	li r3, 0
/* 80366260 003631A0  38 00 FF FF */	li r0, -1
/* 80366264 003631A4  D0 1F 01 8C */	stfs f0, 0x18c(r31)
/* 80366268 003631A8  C0 1F 01 9C */	lfs f0, 0x19c(r31)
/* 8036626C 003631AC  D0 1F 01 90 */	stfs f0, 0x190(r31)
/* 80366270 003631B0  C0 1F 01 A0 */	lfs f0, 0x1a0(r31)
/* 80366274 003631B4  D0 1F 01 94 */	stfs f0, 0x194(r31)
/* 80366278 003631B8  90 7F 02 30 */	stw r3, 0x230(r31)
/* 8036627C 003631BC  90 1F 02 D4 */	stw r0, 0x2d4(r31)
/* 80366280 003631C0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80366284 003631C4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80366288 003631C8  7C 08 03 A6 */	mtlr r0
/* 8036628C 003631CC  38 21 00 10 */	addi r1, r1, 0x10
/* 80366290 003631D0  4E 80 00 20 */	blr 

.global exec__Q34Game6Jigumo9StateWaitFPQ24Game9EnemyBase
exec__Q34Game6Jigumo9StateWaitFPQ24Game9EnemyBase:
/* 80366294 003631D4  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80366298 003631D8  7C 08 02 A6 */	mflr r0
/* 8036629C 003631DC  90 01 00 34 */	stw r0, 0x34(r1)
/* 803662A0 003631E0  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 803662A4 003631E4  93 C1 00 28 */	stw r30, 0x28(r1)
/* 803662A8 003631E8  7C 9E 23 78 */	mr r30, r4
/* 803662AC 003631EC  93 A1 00 24 */	stw r29, 0x24(r1)
/* 803662B0 003631F0  7C 7D 1B 78 */	mr r29, r3
/* 803662B4 003631F4  80 04 02 D4 */	lwz r0, 0x2d4(r4)
/* 803662B8 003631F8  2C 00 00 00 */	cmpwi r0, 0
/* 803662BC 003631FC  40 80 00 80 */	bge .L_8036633C
/* 803662C0 00363200  80 9E 00 C0 */	lwz r4, 0xc0(r30)
/* 803662C4 00363204  7F C3 F3 78 */	mr r3, r30
/* 803662C8 00363208  C0 24 04 24 */	lfs f1, 0x424(r4)
/* 803662CC 0036320C  C0 44 03 D4 */	lfs f2, 0x3d4(r4)
/* 803662D0 00363210  48 00 57 C5 */	bl getNearestPikiOrNavi__Q34Game6Jigumo3ObjFff
/* 803662D4 00363214  7C 7F 1B 79 */	or. r31, r3, r3
/* 803662D8 00363218  41 82 00 4C */	beq .L_80366324
/* 803662DC 0036321C  93 FE 02 30 */	stw r31, 0x230(r30)
/* 803662E0 00363220  7F C3 F3 78 */	mr r3, r30
/* 803662E4 00363224  4B D9 EF BD */	bl finishMotion__Q24Game9EnemyBaseFv
/* 803662E8 00363228  7F E4 FB 78 */	mr r4, r31
/* 803662EC 0036322C  38 61 00 08 */	addi r3, r1, 8
/* 803662F0 00363230  81 9F 00 00 */	lwz r12, 0(r31)
/* 803662F4 00363234  81 8C 00 08 */	lwz r12, 8(r12)
/* 803662F8 00363238  7D 89 03 A6 */	mtctr r12
/* 803662FC 0036323C  4E 80 04 21 */	bctrl 
/* 80366300 00363240  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 80366304 00363244  38 00 00 0A */	li r0, 0xa
/* 80366308 00363248  C0 41 00 10 */	lfs f2, 0x10(r1)
/* 8036630C 0036324C  C0 01 00 08 */	lfs f0, 8(r1)
/* 80366310 00363250  D0 1E 02 C8 */	stfs f0, 0x2c8(r30)
/* 80366314 00363254  D0 3E 02 CC */	stfs f1, 0x2cc(r30)
/* 80366318 00363258  D0 5E 02 D0 */	stfs f2, 0x2d0(r30)
/* 8036631C 0036325C  90 1E 02 D4 */	stw r0, 0x2d4(r30)
/* 80366320 00363260  48 00 00 1C */	b .L_8036633C
.L_80366324:
/* 80366324 00363264  7F C3 F3 78 */	mr r3, r30
/* 80366328 00363268  4B D9 EF 79 */	bl finishMotion__Q24Game9EnemyBaseFv
/* 8036632C 0036326C  38 60 00 01 */	li r3, 1
/* 80366330 00363270  38 00 00 02 */	li r0, 2
/* 80366334 00363274  98 7E 02 E8 */	stb r3, 0x2e8(r30)
/* 80366338 00363278  90 1E 02 D4 */	stw r0, 0x2d4(r30)
.L_8036633C:
/* 8036633C 0036327C  80 7E 01 88 */	lwz r3, 0x188(r30)
/* 80366340 00363280  88 03 00 24 */	lbz r0, 0x24(r3)
/* 80366344 00363284  28 00 00 00 */	cmplwi r0, 0
/* 80366348 00363288  41 82 00 30 */	beq .L_80366378
/* 8036634C 0036328C  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 80366350 00363290  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 80366354 00363294  40 82 00 24 */	bne .L_80366378
/* 80366358 00363298  7F A3 EB 78 */	mr r3, r29
/* 8036635C 0036329C  7F C4 F3 78 */	mr r4, r30
/* 80366360 003632A0  81 9D 00 00 */	lwz r12, 0(r29)
/* 80366364 003632A4  38 C0 00 00 */	li r6, 0
/* 80366368 003632A8  80 BE 02 D4 */	lwz r5, 0x2d4(r30)
/* 8036636C 003632AC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80366370 003632B0  7D 89 03 A6 */	mtctr r12
/* 80366374 003632B4  4E 80 04 21 */	bctrl 
.L_80366378:
/* 80366378 003632B8  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8036637C 003632BC  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 80366380 003632C0  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 80366384 003632C4  83 A1 00 24 */	lwz r29, 0x24(r1)
/* 80366388 003632C8  7C 08 03 A6 */	mtlr r0
/* 8036638C 003632CC  38 21 00 30 */	addi r1, r1, 0x30
/* 80366390 003632D0  4E 80 00 20 */	blr 

.global __ct__Q34Game6Jigumo11StateAppearFi
__ct__Q34Game6Jigumo11StateAppearFi:
/* 80366394 003632D4  3C A0 80 4B */	lis r5, __vt__Q24Game13EnemyFSMState@ha
/* 80366398 003632D8  3C C0 80 4E */	lis r6, __vt__Q34Game6Jigumo5State@ha
/* 8036639C 003632DC  38 05 F9 A4 */	addi r0, r5, __vt__Q24Game13EnemyFSMState@l
/* 803663A0 003632E0  3C A0 80 4E */	lis r5, __vt__Q34Game6Jigumo11StateAppear@ha
/* 803663A4 003632E4  90 03 00 00 */	stw r0, 0(r3)
/* 803663A8 003632E8  38 E0 00 00 */	li r7, 0
/* 803663AC 003632EC  38 C6 2A F4 */	addi r6, r6, __vt__Q34Game6Jigumo5State@l
/* 803663B0 003632F0  38 A5 2A AC */	addi r5, r5, __vt__Q34Game6Jigumo11StateAppear@l
/* 803663B4 003632F4  90 83 00 04 */	stw r4, 4(r3)
/* 803663B8 003632F8  38 02 05 18 */	addi r0, r2, lbl_8051E878@sda21
/* 803663BC 003632FC  90 E3 00 08 */	stw r7, 8(r3)
/* 803663C0 00363300  90 C3 00 00 */	stw r6, 0(r3)
/* 803663C4 00363304  90 A3 00 00 */	stw r5, 0(r3)
/* 803663C8 00363308  90 03 00 0C */	stw r0, 0xc(r3)
/* 803663CC 0036330C  4E 80 00 20 */	blr 

.global init__Q34Game6Jigumo11StateAppearFPQ24Game9EnemyBasePQ24Game8StateArg
init__Q34Game6Jigumo11StateAppearFPQ24Game9EnemyBasePQ24Game8StateArg:
/* 803663D0 00363310  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803663D4 00363314  7C 08 02 A6 */	mflr r0
/* 803663D8 00363318  38 A0 00 00 */	li r5, 0
/* 803663DC 0036331C  90 01 00 14 */	stw r0, 0x14(r1)
/* 803663E0 00363320  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803663E4 00363324  7C 9F 23 78 */	mr r31, r4
/* 803663E8 00363328  38 80 00 00 */	li r4, 0
/* 803663EC 0036332C  93 C1 00 08 */	stw r30, 8(r1)
/* 803663F0 00363330  7C 7E 1B 78 */	mr r30, r3
/* 803663F4 00363334  7F E3 FB 78 */	mr r3, r31
/* 803663F8 00363338  4B D9 EC 0D */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 803663FC 0036333C  7F E3 FB 78 */	mr r3, r31
/* 80366400 00363340  4B DA 0E E1 */	bl stopMotion__Q24Game9EnemyBaseFv
/* 80366404 00363344  7F E3 FB 78 */	mr r3, r31
/* 80366408 00363348  4B DA 13 75 */	bl hardConstraintOn__Q24Game9EnemyBaseFv
/* 8036640C 0036334C  7F E3 FB 78 */	mr r3, r31
/* 80366410 00363350  38 80 00 00 */	li r4, 0
/* 80366414 00363354  81 9F 00 00 */	lwz r12, 0(r31)
/* 80366418 00363358  81 8C 00 A4 */	lwz r12, 0xa4(r12)
/* 8036641C 0036335C  7D 89 03 A6 */	mtctr r12
/* 80366420 00363360  4E 80 04 21 */	bctrl 
/* 80366424 00363364  7F E3 FB 78 */	mr r3, r31
/* 80366428 00363368  38 80 00 00 */	li r4, 0
/* 8036642C 0036336C  81 9F 00 00 */	lwz r12, 0(r31)
/* 80366430 00363370  81 8C 00 AC */	lwz r12, 0xac(r12)
/* 80366434 00363374  7D 89 03 A6 */	mtctr r12
/* 80366438 00363378  4E 80 04 21 */	bctrl 
/* 8036643C 0036337C  C0 02 05 20 */	lfs f0, lbl_8051E880@sda21(r2)
/* 80366440 00363380  3C 60 62 6F */	lis r3, 0x626F6479@ha
/* 80366444 00363384  38 00 00 00 */	li r0, 0
/* 80366448 00363388  D0 1F 02 0C */	stfs f0, 0x20c(r31)
/* 8036644C 0036338C  38 83 64 79 */	addi r4, r3, 0x626F6479@l
/* 80366450 00363390  80 7F 01 E0 */	lwz r3, 0x1e0(r31)
/* 80366454 00363394  64 63 00 40 */	oris r3, r3, 0x40
/* 80366458 00363398  90 7F 01 E0 */	stw r3, 0x1e0(r31)
/* 8036645C 0036339C  C0 1F 01 98 */	lfs f0, 0x198(r31)
/* 80366460 003633A0  D0 1F 01 8C */	stfs f0, 0x18c(r31)
/* 80366464 003633A4  C0 1F 01 9C */	lfs f0, 0x19c(r31)
/* 80366468 003633A8  D0 1F 01 90 */	stfs f0, 0x190(r31)
/* 8036646C 003633AC  C0 1F 01 A0 */	lfs f0, 0x1a0(r31)
/* 80366470 003633B0  D0 1F 01 94 */	stfs f0, 0x194(r31)
/* 80366474 003633B4  98 1F 02 E8 */	stb r0, 0x2e8(r31)
/* 80366478 003633B8  80 7F 01 14 */	lwz r3, 0x114(r31)
/* 8036647C 003633BC  4B DC F9 C9 */	bl getCollPart__8CollTreeFUl
/* 80366480 003633C0  3C 80 5F 5F */	lis r4, 0x5F5F5F5F@ha
/* 80366484 003633C4  38 63 00 3C */	addi r3, r3, 0x3c
/* 80366488 003633C8  38 84 5F 5F */	addi r4, r4, 0x5F5F5F5F@l
/* 8036648C 003633CC  48 0A CF 79 */	bl __as__4ID32FUl
/* 80366490 003633D0  3C 80 68 65 */	lis r4, 0x68656164@ha
/* 80366494 003633D4  80 7F 01 14 */	lwz r3, 0x114(r31)
/* 80366498 003633D8  38 84 61 64 */	addi r4, r4, 0x68656164@l
/* 8036649C 003633DC  4B DC F9 A9 */	bl getCollPart__8CollTreeFUl
/* 803664A0 003633E0  3C 80 5F 5F */	lis r4, 0x5F5F5F5F@ha
/* 803664A4 003633E4  38 63 00 3C */	addi r3, r3, 0x3c
/* 803664A8 003633E8  38 84 5F 5F */	addi r4, r4, 0x5F5F5F5F@l
/* 803664AC 003633EC  48 0A CF 59 */	bl __as__4ID32FUl
/* 803664B0 003633F0  38 00 00 00 */	li r0, 0
/* 803664B4 003633F4  C0 02 05 24 */	lfs f0, lbl_8051E884@sda21(r2)
/* 803664B8 003633F8  98 1F 03 84 */	stb r0, 0x384(r31)
/* 803664BC 003633FC  C0 5F 02 00 */	lfs f2, 0x200(r31)
/* 803664C0 00363400  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 803664C4 00363404  40 80 00 24 */	bge .L_803664E8
/* 803664C8 00363408  C0 22 05 28 */	lfs f1, lbl_8051E888@sda21(r2)
/* 803664CC 0036340C  C0 02 05 20 */	lfs f0, lbl_8051E880@sda21(r2)
/* 803664D0 00363410  EC 22 08 2A */	fadds f1, f2, f1
/* 803664D4 00363414  D0 3F 02 00 */	stfs f1, 0x200(r31)
/* 803664D8 00363418  D0 1F 02 08 */	stfs f0, 0x208(r31)
/* 803664DC 0036341C  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 803664E0 00363420  54 00 07 FA */	rlwinm r0, r0, 0, 0x1f, 0x1d
/* 803664E4 00363424  90 1F 01 E0 */	stw r0, 0x1e0(r31)
.L_803664E8:
/* 803664E8 00363428  38 00 00 00 */	li r0, 0
/* 803664EC 0036342C  90 1E 00 10 */	stw r0, 0x10(r30)
/* 803664F0 00363430  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803664F4 00363434  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803664F8 00363438  83 C1 00 08 */	lwz r30, 8(r1)
/* 803664FC 0036343C  7C 08 03 A6 */	mtlr r0
/* 80366500 00363440  38 21 00 10 */	addi r1, r1, 0x10
/* 80366504 00363444  4E 80 00 20 */	blr 

.global exec__Q34Game6Jigumo11StateAppearFPQ24Game9EnemyBase
exec__Q34Game6Jigumo11StateAppearFPQ24Game9EnemyBase:
/* 80366508 00363448  94 21 FF 80 */	stwu r1, -0x80(r1)
/* 8036650C 0036344C  7C 08 02 A6 */	mflr r0
/* 80366510 00363450  90 01 00 84 */	stw r0, 0x84(r1)
/* 80366514 00363454  DB E1 00 70 */	stfd f31, 0x70(r1)
/* 80366518 00363458  F3 E1 00 78 */	psq_st f31, 120(r1), 0, qr0
/* 8036651C 0036345C  93 E1 00 6C */	stw r31, 0x6c(r1)
/* 80366520 00363460  93 C1 00 68 */	stw r30, 0x68(r1)
/* 80366524 00363464  7C 7E 1B 78 */	mr r30, r3
/* 80366528 00363468  7C 9F 23 78 */	mr r31, r4
/* 8036652C 0036346C  80 63 00 10 */	lwz r3, 0x10(r3)
/* 80366530 00363470  38 03 00 01 */	addi r0, r3, 1
/* 80366534 00363474  90 1E 00 10 */	stw r0, 0x10(r30)
/* 80366538 00363478  80 64 00 C0 */	lwz r3, 0xc0(r4)
/* 8036653C 0036347C  80 9E 00 10 */	lwz r4, 0x10(r30)
/* 80366540 00363480  80 03 08 E4 */	lwz r0, 0x8e4(r3)
/* 80366544 00363484  7C 04 00 00 */	cmpw r4, r0
/* 80366548 00363488  40 81 02 C4 */	ble .L_8036680C
/* 8036654C 0036348C  7F E3 FB 78 */	mr r3, r31
/* 80366550 00363490  4B DA 0D E9 */	bl isStopMotion__Q24Game9EnemyBaseFv
/* 80366554 00363494  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80366558 00363498  41 82 01 CC */	beq .L_80366724
/* 8036655C 0036349C  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 80366560 003634A0  7F E3 FB 78 */	mr r3, r31
/* 80366564 003634A4  38 80 00 00 */	li r4, 0
/* 80366568 003634A8  C3 E5 03 5C */	lfs f31, 0x35c(r5)
/* 8036656C 003634AC  FC 20 F8 90 */	fmr f1, f31
/* 80366570 003634B0  4B DA E5 51 */	bl "isThereOlimar__Q24Game9EnemyFuncFPQ24Game8CreaturefP23Condition<Q24Game4Navi>"
/* 80366574 003634B4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80366578 003634B8  41 82 00 0C */	beq .L_80366584
/* 8036657C 003634BC  38 00 00 01 */	li r0, 1
/* 80366580 003634C0  48 00 00 28 */	b .L_803665A8
.L_80366584:
/* 80366584 003634C4  FC 20 F8 90 */	fmr f1, f31
/* 80366588 003634C8  7F E3 FB 78 */	mr r3, r31
/* 8036658C 003634CC  38 80 00 00 */	li r4, 0
/* 80366590 003634D0  4B DA E1 A5 */	bl "isTherePikmin__Q24Game9EnemyFuncFPQ24Game8CreaturefP23Condition<Q24Game4Piki>"
/* 80366594 003634D4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80366598 003634D8  41 82 00 0C */	beq .L_803665A4
/* 8036659C 003634DC  38 00 00 01 */	li r0, 1
/* 803665A0 003634E0  48 00 00 08 */	b .L_803665A8
.L_803665A4:
/* 803665A4 003634E4  38 00 00 00 */	li r0, 0
.L_803665A8:
/* 803665A8 003634E8  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 803665AC 003634EC  41 82 02 60 */	beq .L_8036680C
/* 803665B0 003634F0  7F E3 FB 78 */	mr r3, r31
/* 803665B4 003634F4  4B DA 0C 51 */	bl startMotion__Q24Game9EnemyBaseFv
/* 803665B8 003634F8  7F E4 FB 78 */	mr r4, r31
/* 803665BC 003634FC  38 61 00 44 */	addi r3, r1, 0x44
/* 803665C0 00363500  81 9F 00 00 */	lwz r12, 0(r31)
/* 803665C4 00363504  81 8C 00 08 */	lwz r12, 8(r12)
/* 803665C8 00363508  7D 89 03 A6 */	mtctr r12
/* 803665CC 0036350C  4E 80 04 21 */	bctrl 
/* 803665D0 00363510  C0 41 00 44 */	lfs f2, 0x44(r1)
/* 803665D4 00363514  38 A1 00 5C */	addi r5, r1, 0x5c
/* 803665D8 00363518  C0 21 00 48 */	lfs f1, 0x48(r1)
/* 803665DC 0036351C  38 80 00 08 */	li r4, 8
/* 803665E0 00363520  C0 01 00 4C */	lfs f0, 0x4c(r1)
/* 803665E4 00363524  38 C0 00 02 */	li r6, 2
/* 803665E8 00363528  D0 41 00 5C */	stfs f2, 0x5c(r1)
/* 803665EC 0036352C  80 6D 96 A8 */	lwz r3, rumbleMgr__4Game@sda21(r13)
/* 803665F0 00363530  D0 21 00 60 */	stfs f1, 0x60(r1)
/* 803665F4 00363534  D0 01 00 64 */	stfs f0, 0x64(r1)
/* 803665F8 00363538  4B EE D1 89 */	bl "startRumble__Q24Game9RumbleMgrFiR10Vector3<f>i"
/* 803665FC 0036353C  FC 40 F8 90 */	fmr f2, f31
/* 80366600 00363540  C0 22 05 2C */	lfs f1, lbl_8051E88C@sda21(r2)
/* 80366604 00363544  7F E3 FB 78 */	mr r3, r31
/* 80366608 00363548  48 00 54 8D */	bl getNearestPikiOrNavi__Q34Game6Jigumo3ObjFff
/* 8036660C 0036354C  28 03 00 00 */	cmplwi r3, 0
/* 80366610 00363550  90 7F 02 30 */	stw r3, 0x230(r31)
/* 80366614 00363554  41 82 01 F8 */	beq .L_8036680C
/* 80366618 00363558  7C 64 1B 78 */	mr r4, r3
/* 8036661C 0036355C  38 61 00 20 */	addi r3, r1, 0x20
/* 80366620 00363560  81 84 00 00 */	lwz r12, 0(r4)
/* 80366624 00363564  81 8C 00 08 */	lwz r12, 8(r12)
/* 80366628 00363568  7D 89 03 A6 */	mtctr r12
/* 8036662C 0036356C  4E 80 04 21 */	bctrl 
/* 80366630 00363570  7F E4 FB 78 */	mr r4, r31
/* 80366634 00363574  C0 41 00 20 */	lfs f2, 0x20(r1)
/* 80366638 00363578  81 9F 00 00 */	lwz r12, 0(r31)
/* 8036663C 0036357C  38 61 00 2C */	addi r3, r1, 0x2c
/* 80366640 00363580  C0 21 00 24 */	lfs f1, 0x24(r1)
/* 80366644 00363584  C0 01 00 28 */	lfs f0, 0x28(r1)
/* 80366648 00363588  81 8C 00 08 */	lwz r12, 8(r12)
/* 8036664C 0036358C  D0 41 00 08 */	stfs f2, 8(r1)
/* 80366650 00363590  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 80366654 00363594  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 80366658 00363598  7D 89 03 A6 */	mtctr r12
/* 8036665C 0036359C  4E 80 04 21 */	bctrl 
/* 80366660 003635A0  C0 A1 00 2C */	lfs f5, 0x2c(r1)
/* 80366664 003635A4  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 80366668 003635A8  C0 61 00 34 */	lfs f3, 0x34(r1)
/* 8036666C 003635AC  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 80366670 003635B0  C0 21 00 08 */	lfs f1, 8(r1)
/* 80366674 003635B4  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 80366678 003635B8  C0 81 00 30 */	lfs f4, 0x30(r1)
/* 8036667C 003635BC  EC 21 28 28 */	fsubs f1, f1, f5
/* 80366680 003635C0  EC 40 18 28 */	fsubs f2, f0, f3
/* 80366684 003635C4  D0 A1 00 14 */	stfs f5, 0x14(r1)
/* 80366688 003635C8  D0 81 00 18 */	stfs f4, 0x18(r1)
/* 8036668C 003635CC  D0 61 00 1C */	stfs f3, 0x1c(r1)
/* 80366690 003635D0  4B CC EA 79 */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 80366694 003635D4  48 0A B5 3D */	bl roundAng__Ff
/* 80366698 003635D8  81 9F 00 00 */	lwz r12, 0(r31)
/* 8036669C 003635DC  FF E0 08 90 */	fmr f31, f1
/* 803666A0 003635E0  7F E3 FB 78 */	mr r3, r31
/* 803666A4 003635E4  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 803666A8 003635E8  7D 89 03 A6 */	mtctr r12
/* 803666AC 003635EC  4E 80 04 21 */	bctrl 
/* 803666B0 003635F0  FC 40 08 90 */	fmr f2, f1
/* 803666B4 003635F4  FC 20 F8 90 */	fmr f1, f31
/* 803666B8 003635F8  48 0A B5 45 */	bl angDist__Fff
/* 803666BC 003635FC  C0 02 05 24 */	lfs f0, lbl_8051E884@sda21(r2)
/* 803666C0 00363600  C0 42 05 30 */	lfs f2, lbl_8051E890@sda21(r2)
/* 803666C4 00363604  EF E1 00 32 */	fmuls f31, f1, f0
/* 803666C8 00363608  FC 00 FA 10 */	fabs f0, f31
/* 803666CC 0036360C  FC 00 00 18 */	frsp f0, f0
/* 803666D0 00363610  FC 00 10 40 */	fcmpo cr0, f0, f2
/* 803666D4 00363614  40 81 00 1C */	ble .L_803666F0
/* 803666D8 00363618  C0 02 05 20 */	lfs f0, lbl_8051E880@sda21(r2)
/* 803666DC 0036361C  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 803666E0 00363620  40 81 00 0C */	ble .L_803666EC
/* 803666E4 00363624  FF E0 10 90 */	fmr f31, f2
/* 803666E8 00363628  48 00 00 08 */	b .L_803666F0
.L_803666EC:
/* 803666EC 0036362C  FF E0 10 50 */	fneg f31, f2
.L_803666F0:
/* 803666F0 00363630  7F E3 FB 78 */	mr r3, r31
/* 803666F4 00363634  81 9F 00 00 */	lwz r12, 0(r31)
/* 803666F8 00363638  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 803666FC 0036363C  7D 89 03 A6 */	mtctr r12
/* 80366700 00363640  4E 80 04 21 */	bctrl 
/* 80366704 00363644  EC 3F 08 2A */	fadds f1, f31, f1
/* 80366708 00363648  48 0A B4 C9 */	bl roundAng__Ff
/* 8036670C 0036364C  D0 3F 01 FC */	stfs f1, 0x1fc(r31)
/* 80366710 00363650  C0 1F 01 FC */	lfs f0, 0x1fc(r31)
/* 80366714 00363654  D0 1F 01 A8 */	stfs f0, 0x1a8(r31)
/* 80366718 00363658  C0 1F 01 FC */	lfs f0, 0x1fc(r31)
/* 8036671C 0036365C  D0 1F 02 EC */	stfs f0, 0x2ec(r31)
/* 80366720 00363660  48 00 00 EC */	b .L_8036680C
.L_80366724:
/* 80366724 00363664  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 80366728 00363668  88 03 00 24 */	lbz r0, 0x24(r3)
/* 8036672C 0036366C  28 00 00 00 */	cmplwi r0, 0
/* 80366730 00363670  41 82 00 DC */	beq .L_8036680C
/* 80366734 00363674  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 80366738 00363678  28 00 00 02 */	cmplwi r0, 2
/* 8036673C 0036367C  40 82 00 7C */	bne .L_803667B8
/* 80366740 00363680  80 1F 02 80 */	lwz r0, 0x280(r31)
/* 80366744 00363684  28 00 00 00 */	cmplwi r0, 0
/* 80366748 00363688  41 82 00 1C */	beq .L_80366764
/* 8036674C 0036368C  7F E3 FB 78 */	mr r3, r31
/* 80366750 00363690  81 9F 00 00 */	lwz r12, 0(r31)
/* 80366754 00363694  81 8C 02 50 */	lwz r12, 0x250(r12)
/* 80366758 00363698  7D 89 03 A6 */	mtctr r12
/* 8036675C 0036369C  4E 80 04 21 */	bctrl 
/* 80366760 003636A0  48 00 00 4C */	b .L_803667AC
.L_80366764:
/* 80366764 003636A4  7F E4 FB 78 */	mr r4, r31
/* 80366768 003636A8  38 61 00 38 */	addi r3, r1, 0x38
/* 8036676C 003636AC  81 9F 00 00 */	lwz r12, 0(r31)
/* 80366770 003636B0  81 8C 00 08 */	lwz r12, 8(r12)
/* 80366774 003636B4  7D 89 03 A6 */	mtctr r12
/* 80366778 003636B8  4E 80 04 21 */	bctrl 
/* 8036677C 003636BC  C0 21 00 38 */	lfs f1, 0x38(r1)
/* 80366780 003636C0  7F E3 FB 78 */	mr r3, r31
/* 80366784 003636C4  C0 41 00 3C */	lfs f2, 0x3c(r1)
/* 80366788 003636C8  38 81 00 50 */	addi r4, r1, 0x50
/* 8036678C 003636CC  C0 01 00 40 */	lfs f0, 0x40(r1)
/* 80366790 003636D0  D0 21 00 50 */	stfs f1, 0x50(r1)
/* 80366794 003636D4  C0 22 05 34 */	lfs f1, lbl_8051E894@sda21(r2)
/* 80366798 003636D8  D0 41 00 54 */	stfs f2, 0x54(r1)
/* 8036679C 003636DC  D0 01 00 58 */	stfs f0, 0x58(r1)
/* 803667A0 003636E0  C0 1F 01 F8 */	lfs f0, 0x1f8(r31)
/* 803667A4 003636E4  EC 21 00 32 */	fmuls f1, f1, f0
/* 803667A8 003636E8  4B D9 D1 99 */	bl "createDropEffect__Q24Game9EnemyBaseFRC10Vector3<f>f"
.L_803667AC:
/* 803667AC 003636EC  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 803667B0 003636F0  54 00 02 90 */	rlwinm r0, r0, 0, 0xa, 8
/* 803667B4 003636F4  90 1F 01 E0 */	stw r0, 0x1e0(r31)
.L_803667B8:
/* 803667B8 003636F8  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 803667BC 003636FC  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 803667C0 00363700  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 803667C4 00363704  40 82 00 48 */	bne .L_8036680C
/* 803667C8 00363708  7F C3 F3 78 */	mr r3, r30
/* 803667CC 0036370C  7F E4 FB 78 */	mr r4, r31
/* 803667D0 00363710  81 9E 00 00 */	lwz r12, 0(r30)
/* 803667D4 00363714  38 A0 00 00 */	li r5, 0
/* 803667D8 00363718  38 C0 00 00 */	li r6, 0
/* 803667DC 0036371C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803667E0 00363720  7D 89 03 A6 */	mtctr r12
/* 803667E4 00363724  4E 80 04 21 */	bctrl 
/* 803667E8 00363728  7F E3 FB 78 */	mr r3, r31
/* 803667EC 0036372C  38 80 00 01 */	li r4, 1
/* 803667F0 00363730  81 9F 00 00 */	lwz r12, 0(r31)
/* 803667F4 00363734  81 8C 00 AC */	lwz r12, 0xac(r12)
/* 803667F8 00363738  7D 89 03 A6 */	mtctr r12
/* 803667FC 0036373C  4E 80 04 21 */	bctrl 
/* 80366800 00363740  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 80366804 00363744  60 00 08 00 */	ori r0, r0, 0x800
/* 80366808 00363748  90 1F 01 E0 */	stw r0, 0x1e0(r31)
.L_8036680C:
/* 8036680C 0036374C  E3 E1 00 78 */	psq_l f31, 120(r1), 0, qr0
/* 80366810 00363750  80 01 00 84 */	lwz r0, 0x84(r1)
/* 80366814 00363754  CB E1 00 70 */	lfd f31, 0x70(r1)
/* 80366818 00363758  83 E1 00 6C */	lwz r31, 0x6c(r1)
/* 8036681C 0036375C  83 C1 00 68 */	lwz r30, 0x68(r1)
/* 80366820 00363760  7C 08 03 A6 */	mtlr r0
/* 80366824 00363764  38 21 00 80 */	addi r1, r1, 0x80
/* 80366828 00363768  4E 80 00 20 */	blr 

.global __ct__Q34Game6Jigumo9StateHideFi
__ct__Q34Game6Jigumo9StateHideFi:
/* 8036682C 0036376C  3C A0 80 4B */	lis r5, __vt__Q24Game13EnemyFSMState@ha
/* 80366830 00363770  3C C0 80 4E */	lis r6, __vt__Q34Game6Jigumo5State@ha
/* 80366834 00363774  38 05 F9 A4 */	addi r0, r5, __vt__Q24Game13EnemyFSMState@l
/* 80366838 00363778  3C A0 80 4E */	lis r5, __vt__Q34Game6Jigumo9StateHide@ha
/* 8036683C 0036377C  90 03 00 00 */	stw r0, 0(r3)
/* 80366840 00363780  38 E0 00 00 */	li r7, 0
/* 80366844 00363784  38 C6 2A F4 */	addi r6, r6, __vt__Q34Game6Jigumo5State@l
/* 80366848 00363788  38 A5 2A 88 */	addi r5, r5, __vt__Q34Game6Jigumo9StateHide@l
/* 8036684C 0036378C  90 83 00 04 */	stw r4, 4(r3)
/* 80366850 00363790  38 02 05 38 */	addi r0, r2, lbl_8051E898@sda21
/* 80366854 00363794  90 E3 00 08 */	stw r7, 8(r3)
/* 80366858 00363798  90 C3 00 00 */	stw r6, 0(r3)
/* 8036685C 0036379C  90 A3 00 00 */	stw r5, 0(r3)
/* 80366860 003637A0  90 03 00 0C */	stw r0, 0xc(r3)
/* 80366864 003637A4  4E 80 00 20 */	blr 

.global init__Q34Game6Jigumo9StateHideFPQ24Game9EnemyBasePQ24Game8StateArg
init__Q34Game6Jigumo9StateHideFPQ24Game9EnemyBasePQ24Game8StateArg:
/* 80366868 003637A8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8036686C 003637AC  7C 08 02 A6 */	mflr r0
/* 80366870 003637B0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80366874 003637B4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80366878 003637B8  7C 9F 23 78 */	mr r31, r4
/* 8036687C 003637BC  88 04 02 E8 */	lbz r0, 0x2e8(r4)
/* 80366880 003637C0  28 00 00 00 */	cmplwi r0, 0
/* 80366884 003637C4  41 82 00 18 */	beq .L_8036689C
/* 80366888 003637C8  7F E3 FB 78 */	mr r3, r31
/* 8036688C 003637CC  38 80 00 07 */	li r4, 7
/* 80366890 003637D0  38 A0 00 00 */	li r5, 0
/* 80366894 003637D4  4B D9 E7 71 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 80366898 003637D8  48 00 00 14 */	b .L_803668AC
.L_8036689C:
/* 8036689C 003637DC  7F E3 FB 78 */	mr r3, r31
/* 803668A0 003637E0  38 80 00 08 */	li r4, 8
/* 803668A4 003637E4  38 A0 00 00 */	li r5, 0
/* 803668A8 003637E8  4B D9 E7 5D */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
.L_803668AC:
/* 803668AC 003637EC  C0 3F 01 8C */	lfs f1, 0x18c(r31)
/* 803668B0 003637F0  7F E3 FB 78 */	mr r3, r31
/* 803668B4 003637F4  C0 02 05 20 */	lfs f0, lbl_8051E880@sda21(r2)
/* 803668B8 003637F8  D0 3F 02 BC */	stfs f1, 0x2bc(r31)
/* 803668BC 003637FC  C0 3F 01 90 */	lfs f1, 0x190(r31)
/* 803668C0 00363800  D0 3F 02 C0 */	stfs f1, 0x2c0(r31)
/* 803668C4 00363804  C0 3F 01 94 */	lfs f1, 0x194(r31)
/* 803668C8 00363808  D0 3F 02 C4 */	stfs f1, 0x2c4(r31)
/* 803668CC 0036380C  D0 1F 01 C8 */	stfs f0, 0x1c8(r31)
/* 803668D0 00363810  D0 1F 01 CC */	stfs f0, 0x1cc(r31)
/* 803668D4 00363814  D0 1F 01 D0 */	stfs f0, 0x1d0(r31)
/* 803668D8 00363818  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 803668DC 0036381C  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 803668E0 00363820  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 803668E4 00363824  4B DA 0E 99 */	bl hardConstraintOn__Q24Game9EnemyBaseFv
/* 803668E8 00363828  7F E3 FB 78 */	mr r3, r31
/* 803668EC 0036382C  38 80 00 00 */	li r4, 0
/* 803668F0 00363830  81 9F 00 00 */	lwz r12, 0(r31)
/* 803668F4 00363834  81 8C 00 A4 */	lwz r12, 0xa4(r12)
/* 803668F8 00363838  7D 89 03 A6 */	mtctr r12
/* 803668FC 0036383C  4E 80 04 21 */	bctrl 
/* 80366900 00363840  3C 80 62 6F */	lis r4, 0x626F6479@ha
/* 80366904 00363844  80 7F 01 14 */	lwz r3, 0x114(r31)
/* 80366908 00363848  38 84 64 79 */	addi r4, r4, 0x626F6479@l
/* 8036690C 0036384C  4B DC F5 39 */	bl getCollPart__8CollTreeFUl
/* 80366910 00363850  3C 80 5F 5F */	lis r4, 0x5F5F5F5F@ha
/* 80366914 00363854  38 63 00 3C */	addi r3, r3, 0x3c
/* 80366918 00363858  38 84 5F 5F */	addi r4, r4, 0x5F5F5F5F@l
/* 8036691C 0036385C  48 0A CA E9 */	bl __as__4ID32FUl
/* 80366920 00363860  3C 80 68 65 */	lis r4, 0x68656164@ha
/* 80366924 00363864  80 7F 01 14 */	lwz r3, 0x114(r31)
/* 80366928 00363868  38 84 61 64 */	addi r4, r4, 0x68656164@l
/* 8036692C 0036386C  4B DC F5 19 */	bl getCollPart__8CollTreeFUl
/* 80366930 00363870  3C 80 5F 5F */	lis r4, 0x5F5F5F5F@ha
/* 80366934 00363874  38 63 00 3C */	addi r3, r3, 0x3c
/* 80366938 00363878  38 84 5F 5F */	addi r4, r4, 0x5F5F5F5F@l
/* 8036693C 0036387C  48 0A CA C9 */	bl __as__4ID32FUl
/* 80366940 00363880  38 00 00 00 */	li r0, 0
/* 80366944 00363884  C0 82 05 40 */	lfs f4, lbl_8051E8A0@sda21(r2)
/* 80366948 00363888  98 1F 03 84 */	stb r0, 0x384(r31)
/* 8036694C 0036388C  7F E3 FB 78 */	mr r3, r31
/* 80366950 00363890  38 80 00 00 */	li r4, 0
/* 80366954 00363894  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 80366958 00363898  54 00 05 66 */	rlwinm r0, r0, 0, 0x15, 0x13
/* 8036695C 0036389C  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 80366960 003638A0  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 80366964 003638A4  C0 25 05 3C */	lfs f1, 0x53c(r5)
/* 80366968 003638A8  C0 45 04 C4 */	lfs f2, 0x4c4(r5)
/* 8036696C 003638AC  C0 65 04 EC */	lfs f3, 0x4ec(r5)
/* 80366970 003638B0  4B DA C7 AD */	bl "flickStickPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Piki>"
/* 80366974 003638B4  7F E3 FB 78 */	mr r3, r31
/* 80366978 003638B8  4B D9 B0 05 */	bl setEmotionCaution__Q24Game9EnemyBaseFv
/* 8036697C 003638BC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80366980 003638C0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80366984 003638C4  7C 08 03 A6 */	mtlr r0
/* 80366988 003638C8  38 21 00 10 */	addi r1, r1, 0x10
/* 8036698C 003638CC  4E 80 00 20 */	blr 

.global exec__Q34Game6Jigumo9StateHideFPQ24Game9EnemyBase
exec__Q34Game6Jigumo9StateHideFPQ24Game9EnemyBase:
/* 80366990 003638D0  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 80366994 003638D4  7C 08 02 A6 */	mflr r0
/* 80366998 003638D8  90 01 00 44 */	stw r0, 0x44(r1)
/* 8036699C 003638DC  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 803669A0 003638E0  7C 9F 23 78 */	mr r31, r4
/* 803669A4 003638E4  93 C1 00 38 */	stw r30, 0x38(r1)
/* 803669A8 003638E8  7C 7E 1B 78 */	mr r30, r3
/* 803669AC 003638EC  88 04 02 E8 */	lbz r0, 0x2e8(r4)
/* 803669B0 003638F0  28 00 00 00 */	cmplwi r0, 0
/* 803669B4 003638F4  40 82 00 1C */	bne .L_803669D0
/* 803669B8 003638F8  7F E3 FB 78 */	mr r3, r31
/* 803669BC 003638FC  4B D9 E8 B1 */	bl getMotionFrame__Q24Game9EnemyBaseFv
/* 803669C0 00363900  C0 02 05 44 */	lfs f0, lbl_8051E8A4@sda21(r2)
/* 803669C4 00363904  7F E3 FB 78 */	mr r3, r31
/* 803669C8 00363908  EC 20 00 72 */	fmuls f1, f0, f1
/* 803669CC 0036390C  48 00 4F 7D */	bl revisionAnimPos__Q34Game6Jigumo3ObjFf
.L_803669D0:
/* 803669D0 00363910  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 803669D4 00363914  88 03 00 24 */	lbz r0, 0x24(r3)
/* 803669D8 00363918  28 00 00 00 */	cmplwi r0, 0
/* 803669DC 0036391C  41 82 01 0C */	beq .L_80366AE8
/* 803669E0 00363920  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 803669E4 00363924  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 803669E8 00363928  40 82 01 00 */	bne .L_80366AE8
/* 803669EC 0036392C  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 803669F0 00363930  7F E3 FB 78 */	mr r3, r31
/* 803669F4 00363934  60 00 00 40 */	ori r0, r0, 0x40
/* 803669F8 00363938  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 803669FC 0036393C  81 9F 00 00 */	lwz r12, 0(r31)
/* 80366A00 00363940  81 8C 02 54 */	lwz r12, 0x254(r12)
/* 80366A04 00363944  7D 89 03 A6 */	mtctr r12
/* 80366A08 00363948  4E 80 04 21 */	bctrl 
/* 80366A0C 0036394C  80 1F 02 80 */	lwz r0, 0x280(r31)
/* 80366A10 00363950  28 00 00 00 */	cmplwi r0, 0
/* 80366A14 00363954  41 82 00 80 */	beq .L_80366A94
/* 80366A18 00363958  3C 60 80 4B */	lis r3, __vt__Q23efx5TBase@ha
/* 80366A1C 0036395C  3C 80 80 4E */	lis r4, __vt__Q23efx8TSimple1@ha
/* 80366A20 00363960  38 03 A7 F8 */	addi r0, r3, __vt__Q23efx5TBase@l
/* 80366A24 00363964  3C 60 80 4D */	lis r3, __vt__Q23efx10TJgmBubble@ha
/* 80366A28 00363968  90 01 00 24 */	stw r0, 0x24(r1)
/* 80366A2C 0036396C  38 04 6A 78 */	addi r0, r4, __vt__Q23efx8TSimple1@l
/* 80366A30 00363970  38 C0 00 C1 */	li r6, 0xc1
/* 80366A34 00363974  38 A0 00 00 */	li r5, 0
/* 80366A38 00363978  90 01 00 24 */	stw r0, 0x24(r1)
/* 80366A3C 0036397C  38 03 4F 68 */	addi r0, r3, __vt__Q23efx10TJgmBubble@l
/* 80366A40 00363980  7F E4 FB 78 */	mr r4, r31
/* 80366A44 00363984  38 61 00 08 */	addi r3, r1, 8
/* 80366A48 00363988  B0 C1 00 28 */	sth r6, 0x28(r1)
/* 80366A4C 0036398C  90 A1 00 2C */	stw r5, 0x2c(r1)
/* 80366A50 00363990  90 01 00 24 */	stw r0, 0x24(r1)
/* 80366A54 00363994  81 9F 00 00 */	lwz r12, 0(r31)
/* 80366A58 00363998  81 8C 00 08 */	lwz r12, 8(r12)
/* 80366A5C 0036399C  7D 89 03 A6 */	mtctr r12
/* 80366A60 003639A0  4E 80 04 21 */	bctrl 
/* 80366A64 003639A4  C0 41 00 08 */	lfs f2, 8(r1)
/* 80366A68 003639A8  3C 60 80 4B */	lis r3, __vt__Q23efx3Arg@ha
/* 80366A6C 003639AC  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 80366A70 003639B0  38 03 A7 EC */	addi r0, r3, __vt__Q23efx3Arg@l
/* 80366A74 003639B4  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 80366A78 003639B8  38 61 00 24 */	addi r3, r1, 0x24
/* 80366A7C 003639BC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80366A80 003639C0  38 81 00 14 */	addi r4, r1, 0x14
/* 80366A84 003639C4  D0 41 00 18 */	stfs f2, 0x18(r1)
/* 80366A88 003639C8  D0 21 00 1C */	stfs f1, 0x1c(r1)
/* 80366A8C 003639CC  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 80366A90 003639D0  48 04 84 F5 */	bl create__Q23efx8TSimple1FPQ23efx3Arg
.L_80366A94:
/* 80366A94 003639D4  C0 22 05 48 */	lfs f1, lbl_8051E8A8@sda21(r2)
/* 80366A98 003639D8  C0 1F 01 FC */	lfs f0, 0x1fc(r31)
/* 80366A9C 003639DC  EC 21 00 2A */	fadds f1, f1, f0
/* 80366AA0 003639E0  48 0A B1 31 */	bl roundAng__Ff
/* 80366AA4 003639E4  D0 3F 02 EC */	stfs f1, 0x2ec(r31)
/* 80366AA8 003639E8  7F C3 F3 78 */	mr r3, r30
/* 80366AAC 003639EC  C0 02 05 20 */	lfs f0, lbl_8051E880@sda21(r2)
/* 80366AB0 003639F0  7F E4 FB 78 */	mr r4, r31
/* 80366AB4 003639F4  C0 3F 01 98 */	lfs f1, 0x198(r31)
/* 80366AB8 003639F8  38 A0 00 01 */	li r5, 1
/* 80366ABC 003639FC  38 C0 00 00 */	li r6, 0
/* 80366AC0 00363A00  D0 3F 02 C8 */	stfs f1, 0x2c8(r31)
/* 80366AC4 00363A04  C0 3F 01 9C */	lfs f1, 0x19c(r31)
/* 80366AC8 00363A08  D0 3F 02 CC */	stfs f1, 0x2cc(r31)
/* 80366ACC 00363A0C  C0 3F 01 A0 */	lfs f1, 0x1a0(r31)
/* 80366AD0 00363A10  D0 3F 02 D0 */	stfs f1, 0x2d0(r31)
/* 80366AD4 00363A14  D0 1F 03 44 */	stfs f0, 0x344(r31)
/* 80366AD8 00363A18  81 9E 00 00 */	lwz r12, 0(r30)
/* 80366ADC 00363A1C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80366AE0 00363A20  7D 89 03 A6 */	mtctr r12
/* 80366AE4 00363A24  4E 80 04 21 */	bctrl 
.L_80366AE8:
/* 80366AE8 00363A28  80 01 00 44 */	lwz r0, 0x44(r1)
/* 80366AEC 00363A2C  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 80366AF0 00363A30  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 80366AF4 00363A34  7C 08 03 A6 */	mtlr r0
/* 80366AF8 00363A38  38 21 00 40 */	addi r1, r1, 0x40
/* 80366AFC 00363A3C  4E 80 00 20 */	blr 

.global __ct__Q34Game6Jigumo9StateDeadFi
__ct__Q34Game6Jigumo9StateDeadFi:
/* 80366B00 00363A40  3C A0 80 4B */	lis r5, __vt__Q24Game13EnemyFSMState@ha
/* 80366B04 00363A44  3C C0 80 4E */	lis r6, __vt__Q34Game6Jigumo5State@ha
/* 80366B08 00363A48  38 05 F9 A4 */	addi r0, r5, __vt__Q24Game13EnemyFSMState@l
/* 80366B0C 00363A4C  3C A0 80 4E */	lis r5, __vt__Q34Game6Jigumo9StateDead@ha
/* 80366B10 00363A50  90 03 00 00 */	stw r0, 0(r3)
/* 80366B14 00363A54  38 E0 00 00 */	li r7, 0
/* 80366B18 00363A58  38 C6 2A F4 */	addi r6, r6, __vt__Q34Game6Jigumo5State@l
/* 80366B1C 00363A5C  38 A5 2A 64 */	addi r5, r5, __vt__Q34Game6Jigumo9StateDead@l
/* 80366B20 00363A60  90 83 00 04 */	stw r4, 4(r3)
/* 80366B24 00363A64  38 02 05 4C */	addi r0, r2, lbl_8051E8AC@sda21
/* 80366B28 00363A68  90 E3 00 08 */	stw r7, 8(r3)
/* 80366B2C 00363A6C  90 C3 00 00 */	stw r6, 0(r3)
/* 80366B30 00363A70  90 A3 00 00 */	stw r5, 0(r3)
/* 80366B34 00363A74  90 03 00 0C */	stw r0, 0xc(r3)
/* 80366B38 00363A78  4E 80 00 20 */	blr 

.global init__Q34Game6Jigumo9StateDeadFPQ24Game9EnemyBasePQ24Game8StateArg
init__Q34Game6Jigumo9StateDeadFPQ24Game9EnemyBasePQ24Game8StateArg:
/* 80366B3C 00363A7C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80366B40 00363A80  7C 08 02 A6 */	mflr r0
/* 80366B44 00363A84  38 A0 00 00 */	li r5, 0
/* 80366B48 00363A88  90 01 00 14 */	stw r0, 0x14(r1)
/* 80366B4C 00363A8C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80366B50 00363A90  7C 9F 23 78 */	mr r31, r4
/* 80366B54 00363A94  38 80 00 04 */	li r4, 4
/* 80366B58 00363A98  7F E3 FB 78 */	mr r3, r31
/* 80366B5C 00363A9C  4B D9 E4 A9 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 80366B60 00363AA0  C0 02 05 20 */	lfs f0, lbl_8051E880@sda21(r2)
/* 80366B64 00363AA4  7F E3 FB 78 */	mr r3, r31
/* 80366B68 00363AA8  D0 1F 01 C8 */	stfs f0, 0x1c8(r31)
/* 80366B6C 00363AAC  D0 1F 01 CC */	stfs f0, 0x1cc(r31)
/* 80366B70 00363AB0  D0 1F 01 D0 */	stfs f0, 0x1d0(r31)
/* 80366B74 00363AB4  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 80366B78 00363AB8  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 80366B7C 00363ABC  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 80366B80 00363AC0  4B D9 EB A1 */	bl deathProcedure__Q24Game9EnemyBaseFv
/* 80366B84 00363AC4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80366B88 00363AC8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80366B8C 00363ACC  7C 08 03 A6 */	mtlr r0
/* 80366B90 00363AD0  38 21 00 10 */	addi r1, r1, 0x10
/* 80366B94 00363AD4  4E 80 00 20 */	blr 

.global exec__Q34Game6Jigumo9StateDeadFPQ24Game9EnemyBase
exec__Q34Game6Jigumo9StateDeadFPQ24Game9EnemyBase:
/* 80366B98 00363AD8  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80366B9C 00363ADC  7C 08 02 A6 */	mflr r0
/* 80366BA0 00363AE0  90 01 00 34 */	stw r0, 0x34(r1)
/* 80366BA4 00363AE4  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 80366BA8 00363AE8  7C 9F 23 78 */	mr r31, r4
/* 80366BAC 00363AEC  80 64 01 88 */	lwz r3, 0x188(r4)
/* 80366BB0 00363AF0  88 03 00 24 */	lbz r0, 0x24(r3)
/* 80366BB4 00363AF4  28 00 00 00 */	cmplwi r0, 0
/* 80366BB8 00363AF8  41 82 00 8C */	beq .L_80366C44
/* 80366BBC 00363AFC  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 80366BC0 00363B00  28 00 00 02 */	cmplwi r0, 2
/* 80366BC4 00363B04  40 82 00 64 */	bne .L_80366C28
/* 80366BC8 00363B08  7F E3 FB 78 */	mr r3, r31
/* 80366BCC 00363B0C  48 00 51 BD */	bl boundEffect__Q34Game6Jigumo3ObjFv
/* 80366BD0 00363B10  7F E4 FB 78 */	mr r4, r31
/* 80366BD4 00363B14  38 61 00 08 */	addi r3, r1, 8
/* 80366BD8 00363B18  81 9F 00 00 */	lwz r12, 0(r31)
/* 80366BDC 00363B1C  81 8C 00 08 */	lwz r12, 8(r12)
/* 80366BE0 00363B20  7D 89 03 A6 */	mtctr r12
/* 80366BE4 00363B24  4E 80 04 21 */	bctrl 
/* 80366BE8 00363B28  C0 41 00 08 */	lfs f2, 8(r1)
/* 80366BEC 00363B2C  38 A1 00 14 */	addi r5, r1, 0x14
/* 80366BF0 00363B30  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 80366BF4 00363B34  38 80 00 00 */	li r4, 0
/* 80366BF8 00363B38  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 80366BFC 00363B3C  38 C0 00 02 */	li r6, 2
/* 80366C00 00363B40  D0 41 00 14 */	stfs f2, 0x14(r1)
/* 80366C04 00363B44  80 6D 96 A0 */	lwz r3, cameraMgr__4Game@sda21(r13)
/* 80366C08 00363B48  D0 21 00 18 */	stfs f1, 0x18(r1)
/* 80366C0C 00363B4C  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 80366C10 00363B50  4B EE B6 2D */	bl "startVibration__Q24Game9CameraMgrFiR10Vector3<f>i"
/* 80366C14 00363B54  80 6D 96 A8 */	lwz r3, rumbleMgr__4Game@sda21(r13)
/* 80366C18 00363B58  38 A1 00 14 */	addi r5, r1, 0x14
/* 80366C1C 00363B5C  38 80 00 08 */	li r4, 8
/* 80366C20 00363B60  38 C0 00 02 */	li r6, 2
/* 80366C24 00363B64  4B EE CB 5D */	bl "startRumble__Q24Game9RumbleMgrFiR10Vector3<f>i"
.L_80366C28:
/* 80366C28 00363B68  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 80366C2C 00363B6C  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 80366C30 00363B70  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 80366C34 00363B74  40 82 00 10 */	bne .L_80366C44
/* 80366C38 00363B78  7F E3 FB 78 */	mr r3, r31
/* 80366C3C 00363B7C  38 80 00 00 */	li r4, 0
/* 80366C40 00363B80  4B DD 44 B1 */	bl kill__Q24Game8CreatureFPQ24Game15CreatureKillArg
.L_80366C44:
/* 80366C44 00363B84  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80366C48 00363B88  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 80366C4C 00363B8C  7C 08 03 A6 */	mtlr r0
/* 80366C50 00363B90  38 21 00 30 */	addi r1, r1, 0x30
/* 80366C54 00363B94  4E 80 00 20 */	blr 

.global __ct__Q34Game6Jigumo11StateAttackFi
__ct__Q34Game6Jigumo11StateAttackFi:
/* 80366C58 00363B98  3C A0 80 4B */	lis r5, __vt__Q24Game13EnemyFSMState@ha
/* 80366C5C 00363B9C  3C C0 80 4E */	lis r6, __vt__Q34Game6Jigumo5State@ha
/* 80366C60 00363BA0  38 05 F9 A4 */	addi r0, r5, __vt__Q24Game13EnemyFSMState@l
/* 80366C64 00363BA4  3C A0 80 4E */	lis r5, __vt__Q34Game6Jigumo11StateAttack@ha
/* 80366C68 00363BA8  90 03 00 00 */	stw r0, 0(r3)
/* 80366C6C 00363BAC  38 E0 00 00 */	li r7, 0
/* 80366C70 00363BB0  38 C6 2A F4 */	addi r6, r6, __vt__Q34Game6Jigumo5State@l
/* 80366C74 00363BB4  38 A5 2A 40 */	addi r5, r5, __vt__Q34Game6Jigumo11StateAttack@l
/* 80366C78 00363BB8  90 83 00 04 */	stw r4, 4(r3)
/* 80366C7C 00363BBC  38 02 05 54 */	addi r0, r2, lbl_8051E8B4@sda21
/* 80366C80 00363BC0  90 E3 00 08 */	stw r7, 8(r3)
/* 80366C84 00363BC4  90 C3 00 00 */	stw r6, 0(r3)
/* 80366C88 00363BC8  90 A3 00 00 */	stw r5, 0(r3)
/* 80366C8C 00363BCC  90 03 00 0C */	stw r0, 0xc(r3)
/* 80366C90 00363BD0  4E 80 00 20 */	blr 

.global init__Q34Game6Jigumo11StateAttackFPQ24Game9EnemyBasePQ24Game8StateArg
init__Q34Game6Jigumo11StateAttackFPQ24Game9EnemyBasePQ24Game8StateArg:
/* 80366C94 00363BD4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80366C98 00363BD8  7C 08 02 A6 */	mflr r0
/* 80366C9C 00363BDC  38 A0 00 00 */	li r5, 0
/* 80366CA0 00363BE0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80366CA4 00363BE4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80366CA8 00363BE8  7C 9F 23 78 */	mr r31, r4
/* 80366CAC 00363BEC  38 80 00 01 */	li r4, 1
/* 80366CB0 00363BF0  93 C1 00 08 */	stw r30, 8(r1)
/* 80366CB4 00363BF4  7C 7E 1B 78 */	mr r30, r3
/* 80366CB8 00363BF8  7F E3 FB 78 */	mr r3, r31
/* 80366CBC 00363BFC  4B D9 E3 49 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 80366CC0 00363C00  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 80366CC4 00363C04  3C 60 62 6F */	lis r3, 0x626F6479@ha
/* 80366CC8 00363C08  38 C0 00 05 */	li r6, 5
/* 80366CCC 00363C0C  38 A0 00 00 */	li r5, 0
/* 80366CD0 00363C10  54 04 06 B0 */	rlwinm r4, r0, 0, 0x1a, 0x18
/* 80366CD4 00363C14  38 00 00 01 */	li r0, 1
/* 80366CD8 00363C18  90 9F 01 E0 */	stw r4, 0x1e0(r31)
/* 80366CDC 00363C1C  38 83 64 79 */	addi r4, r3, 0x626F6479@l
/* 80366CE0 00363C20  90 DF 02 D4 */	stw r6, 0x2d4(r31)
/* 80366CE4 00363C24  98 BF 02 E8 */	stb r5, 0x2e8(r31)
/* 80366CE8 00363C28  98 BE 00 10 */	stb r5, 0x10(r30)
/* 80366CEC 00363C2C  98 1E 00 11 */	stb r0, 0x11(r30)
/* 80366CF0 00363C30  80 7F 01 14 */	lwz r3, 0x114(r31)
/* 80366CF4 00363C34  4B DC F1 51 */	bl getCollPart__8CollTreeFUl
/* 80366CF8 00363C38  3C 80 73 74 */	lis r4, 0x73745F5F@ha
/* 80366CFC 00363C3C  38 63 00 3C */	addi r3, r3, 0x3c
/* 80366D00 00363C40  38 84 5F 5F */	addi r4, r4, 0x73745F5F@l
/* 80366D04 00363C44  48 0A C7 01 */	bl __as__4ID32FUl
/* 80366D08 00363C48  3C 80 68 65 */	lis r4, 0x68656164@ha
/* 80366D0C 00363C4C  80 7F 01 14 */	lwz r3, 0x114(r31)
/* 80366D10 00363C50  38 84 61 64 */	addi r4, r4, 0x68656164@l
/* 80366D14 00363C54  4B DC F1 31 */	bl getCollPart__8CollTreeFUl
/* 80366D18 00363C58  3C 80 5F 74 */	lis r4, 0x5F745F5F@ha
/* 80366D1C 00363C5C  38 63 00 3C */	addi r3, r3, 0x3c
/* 80366D20 00363C60  38 84 5F 5F */	addi r4, r4, 0x5F745F5F@l
/* 80366D24 00363C64  48 0A C6 E1 */	bl __as__4ID32FUl
/* 80366D28 00363C68  38 00 00 01 */	li r0, 1
/* 80366D2C 00363C6C  7F E3 FB 78 */	mr r3, r31
/* 80366D30 00363C70  98 1F 03 84 */	stb r0, 0x384(r31)
/* 80366D34 00363C74  4B D9 AC 99 */	bl setEmotionExcitement__Q24Game9EnemyBaseFv
/* 80366D38 00363C78  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80366D3C 00363C7C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80366D40 00363C80  83 C1 00 08 */	lwz r30, 8(r1)
/* 80366D44 00363C84  7C 08 03 A6 */	mtlr r0
/* 80366D48 00363C88  38 21 00 10 */	addi r1, r1, 0x10
/* 80366D4C 00363C8C  4E 80 00 20 */	blr 

.global exec__Q34Game6Jigumo11StateAttackFPQ24Game9EnemyBase
exec__Q34Game6Jigumo11StateAttackFPQ24Game9EnemyBase:
/* 80366D50 00363C90  94 21 FF 30 */	stwu r1, -0xd0(r1)
/* 80366D54 00363C94  7C 08 02 A6 */	mflr r0
/* 80366D58 00363C98  90 01 00 D4 */	stw r0, 0xd4(r1)
/* 80366D5C 00363C9C  DB E1 00 C0 */	stfd f31, 0xc0(r1)
/* 80366D60 00363CA0  F3 E1 00 C8 */	psq_st f31, 200(r1), 0, qr0
/* 80366D64 00363CA4  DB C1 00 B0 */	stfd f30, 0xb0(r1)
/* 80366D68 00363CA8  F3 C1 00 B8 */	psq_st f30, 184(r1), 0, qr0
/* 80366D6C 00363CAC  DB A1 00 A0 */	stfd f29, 0xa0(r1)
/* 80366D70 00363CB0  F3 A1 00 A8 */	psq_st f29, 168(r1), 0, qr0
/* 80366D74 00363CB4  93 E1 00 9C */	stw r31, 0x9c(r1)
/* 80366D78 00363CB8  93 C1 00 98 */	stw r30, 0x98(r1)
/* 80366D7C 00363CBC  93 A1 00 94 */	stw r29, 0x94(r1)
/* 80366D80 00363CC0  7C 7E 1B 78 */	mr r30, r3
/* 80366D84 00363CC4  7C 9F 23 78 */	mr r31, r4
/* 80366D88 00363CC8  88 03 00 11 */	lbz r0, 0x11(r3)
/* 80366D8C 00363CCC  28 00 00 00 */	cmplwi r0, 0
/* 80366D90 00363CD0  41 82 01 64 */	beq .L_80366EF4
/* 80366D94 00363CD4  80 9F 00 C0 */	lwz r4, 0xc0(r31)
/* 80366D98 00363CD8  7F E3 FB 78 */	mr r3, r31
/* 80366D9C 00363CDC  C0 24 04 9C */	lfs f1, 0x49c(r4)
/* 80366DA0 00363CE0  C0 44 04 4C */	lfs f2, 0x44c(r4)
/* 80366DA4 00363CE4  48 00 4C F1 */	bl getNearestPikiOrNavi__Q34Game6Jigumo3ObjFff
/* 80366DA8 00363CE8  7C 7D 1B 79 */	or. r29, r3, r3
/* 80366DAC 00363CEC  41 82 01 48 */	beq .L_80366EF4
/* 80366DB0 00363CF0  7F A4 EB 78 */	mr r4, r29
/* 80366DB4 00363CF4  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 80366DB8 00363CF8  81 9D 00 00 */	lwz r12, 0(r29)
/* 80366DBC 00363CFC  38 61 00 20 */	addi r3, r1, 0x20
/* 80366DC0 00363D00  C3 C5 03 34 */	lfs f30, 0x334(r5)
/* 80366DC4 00363D04  81 8C 00 08 */	lwz r12, 8(r12)
/* 80366DC8 00363D08  C3 E5 03 0C */	lfs f31, 0x30c(r5)
/* 80366DCC 00363D0C  7D 89 03 A6 */	mtctr r12
/* 80366DD0 00363D10  4E 80 04 21 */	bctrl 
/* 80366DD4 00363D14  7F E4 FB 78 */	mr r4, r31
/* 80366DD8 00363D18  C0 41 00 20 */	lfs f2, 0x20(r1)
/* 80366DDC 00363D1C  81 9F 00 00 */	lwz r12, 0(r31)
/* 80366DE0 00363D20  38 61 00 2C */	addi r3, r1, 0x2c
/* 80366DE4 00363D24  C0 21 00 24 */	lfs f1, 0x24(r1)
/* 80366DE8 00363D28  C0 01 00 28 */	lfs f0, 0x28(r1)
/* 80366DEC 00363D2C  81 8C 00 08 */	lwz r12, 8(r12)
/* 80366DF0 00363D30  D0 41 00 08 */	stfs f2, 8(r1)
/* 80366DF4 00363D34  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 80366DF8 00363D38  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 80366DFC 00363D3C  7D 89 03 A6 */	mtctr r12
/* 80366E00 00363D40  4E 80 04 21 */	bctrl 
/* 80366E04 00363D44  C0 A1 00 2C */	lfs f5, 0x2c(r1)
/* 80366E08 00363D48  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 80366E0C 00363D4C  C0 61 00 34 */	lfs f3, 0x34(r1)
/* 80366E10 00363D50  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 80366E14 00363D54  C0 21 00 08 */	lfs f1, 8(r1)
/* 80366E18 00363D58  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 80366E1C 00363D5C  C0 81 00 30 */	lfs f4, 0x30(r1)
/* 80366E20 00363D60  EC 21 28 28 */	fsubs f1, f1, f5
/* 80366E24 00363D64  EC 40 18 28 */	fsubs f2, f0, f3
/* 80366E28 00363D68  D0 A1 00 14 */	stfs f5, 0x14(r1)
/* 80366E2C 00363D6C  D0 81 00 18 */	stfs f4, 0x18(r1)
/* 80366E30 00363D70  D0 61 00 1C */	stfs f3, 0x1c(r1)
/* 80366E34 00363D74  4B CC E2 D5 */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 80366E38 00363D78  48 0A AD 99 */	bl roundAng__Ff
/* 80366E3C 00363D7C  81 9F 00 00 */	lwz r12, 0(r31)
/* 80366E40 00363D80  FF A0 08 90 */	fmr f29, f1
/* 80366E44 00363D84  7F E3 FB 78 */	mr r3, r31
/* 80366E48 00363D88  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 80366E4C 00363D8C  7D 89 03 A6 */	mtctr r12
/* 80366E50 00363D90  4E 80 04 21 */	bctrl 
/* 80366E54 00363D94  FC 40 08 90 */	fmr f2, f1
/* 80366E58 00363D98  FC 20 E8 90 */	fmr f1, f29
/* 80366E5C 00363D9C  48 0A AD A1 */	bl angDist__Fff
/* 80366E60 00363DA0  EF E1 07 F2 */	fmuls f31, f1, f31
/* 80366E64 00363DA4  C0 02 05 5C */	lfs f0, lbl_8051E8BC@sda21(r2)
/* 80366E68 00363DA8  C0 22 05 48 */	lfs f1, lbl_8051E8A8@sda21(r2)
/* 80366E6C 00363DAC  EC 00 07 B2 */	fmuls f0, f0, f30
/* 80366E70 00363DB0  FC 40 FA 10 */	fabs f2, f31
/* 80366E74 00363DB4  EC 21 00 32 */	fmuls f1, f1, f0
/* 80366E78 00363DB8  FC 00 10 18 */	frsp f0, f2
/* 80366E7C 00363DBC  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 80366E80 00363DC0  40 81 00 1C */	ble .L_80366E9C
/* 80366E84 00363DC4  C0 02 05 20 */	lfs f0, lbl_8051E880@sda21(r2)
/* 80366E88 00363DC8  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 80366E8C 00363DCC  40 81 00 0C */	ble .L_80366E98
/* 80366E90 00363DD0  FF E0 08 90 */	fmr f31, f1
/* 80366E94 00363DD4  48 00 00 08 */	b .L_80366E9C
.L_80366E98:
/* 80366E98 00363DD8  FF E0 08 50 */	fneg f31, f1
.L_80366E9C:
/* 80366E9C 00363DDC  7F E3 FB 78 */	mr r3, r31
/* 80366EA0 00363DE0  81 9F 00 00 */	lwz r12, 0(r31)
/* 80366EA4 00363DE4  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 80366EA8 00363DE8  7D 89 03 A6 */	mtctr r12
/* 80366EAC 00363DEC  4E 80 04 21 */	bctrl 
/* 80366EB0 00363DF0  EC 3F 08 2A */	fadds f1, f31, f1
/* 80366EB4 00363DF4  48 0A AD 1D */	bl roundAng__Ff
/* 80366EB8 00363DF8  D0 3F 01 FC */	stfs f1, 0x1fc(r31)
/* 80366EBC 00363DFC  7F A4 EB 78 */	mr r4, r29
/* 80366EC0 00363E00  38 61 00 68 */	addi r3, r1, 0x68
/* 80366EC4 00363E04  C0 1F 01 FC */	lfs f0, 0x1fc(r31)
/* 80366EC8 00363E08  D0 1F 01 A8 */	stfs f0, 0x1a8(r31)
/* 80366ECC 00363E0C  81 9D 00 00 */	lwz r12, 0(r29)
/* 80366ED0 00363E10  81 8C 00 08 */	lwz r12, 8(r12)
/* 80366ED4 00363E14  7D 89 03 A6 */	mtctr r12
/* 80366ED8 00363E18  4E 80 04 21 */	bctrl 
/* 80366EDC 00363E1C  C0 21 00 6C */	lfs f1, 0x6c(r1)
/* 80366EE0 00363E20  C0 41 00 70 */	lfs f2, 0x70(r1)
/* 80366EE4 00363E24  C0 01 00 68 */	lfs f0, 0x68(r1)
/* 80366EE8 00363E28  D0 1F 02 C8 */	stfs f0, 0x2c8(r31)
/* 80366EEC 00363E2C  D0 3F 02 CC */	stfs f1, 0x2cc(r31)
/* 80366EF0 00363E30  D0 5F 02 D0 */	stfs f2, 0x2d0(r31)
.L_80366EF4:
/* 80366EF4 00363E34  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 80366EF8 00363E38  88 03 00 24 */	lbz r0, 0x24(r3)
/* 80366EFC 00363E3C  28 00 00 00 */	cmplwi r0, 0
/* 80366F00 00363E40  41 82 01 2C */	beq .L_8036702C
/* 80366F04 00363E44  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 80366F08 00363E48  28 00 00 02 */	cmplwi r0, 2
/* 80366F0C 00363E4C  40 82 00 A0 */	bne .L_80366FAC
/* 80366F10 00363E50  38 00 00 01 */	li r0, 1
/* 80366F14 00363E54  7F E3 FB 78 */	mr r3, r31
/* 80366F18 00363E58  98 1E 00 10 */	stb r0, 0x10(r30)
/* 80366F1C 00363E5C  4B DA 08 79 */	bl hardConstraintOff__Q24Game9EnemyBaseFv
/* 80366F20 00363E60  7F E3 FB 78 */	mr r3, r31
/* 80366F24 00363E64  38 80 00 01 */	li r4, 1
/* 80366F28 00363E68  81 9F 00 00 */	lwz r12, 0(r31)
/* 80366F2C 00363E6C  81 8C 00 A4 */	lwz r12, 0xa4(r12)
/* 80366F30 00363E70  7D 89 03 A6 */	mtctr r12
/* 80366F34 00363E74  4E 80 04 21 */	bctrl 
/* 80366F38 00363E78  7F E3 FB 78 */	mr r3, r31
/* 80366F3C 00363E7C  38 80 00 01 */	li r4, 1
/* 80366F40 00363E80  81 9F 00 00 */	lwz r12, 0(r31)
/* 80366F44 00363E84  81 8C 00 AC */	lwz r12, 0xac(r12)
/* 80366F48 00363E88  7D 89 03 A6 */	mtctr r12
/* 80366F4C 00363E8C  4E 80 04 21 */	bctrl 
/* 80366F50 00363E90  38 00 00 00 */	li r0, 0
/* 80366F54 00363E94  7F E3 FB 78 */	mr r3, r31
/* 80366F58 00363E98  98 1E 00 11 */	stb r0, 0x11(r30)
/* 80366F5C 00363E9C  48 00 4B E1 */	bl effectStart__Q34Game6Jigumo3ObjFv
/* 80366F60 00363EA0  80 1F 02 80 */	lwz r0, 0x280(r31)
/* 80366F64 00363EA4  28 00 00 00 */	cmplwi r0, 0
/* 80366F68 00363EA8  41 82 00 24 */	beq .L_80366F8C
/* 80366F6C 00363EAC  80 7F 02 8C */	lwz r3, 0x28c(r31)
/* 80366F70 00363EB0  38 80 58 D2 */	li r4, 0x58d2
/* 80366F74 00363EB4  38 A0 00 00 */	li r5, 0
/* 80366F78 00363EB8  81 83 00 28 */	lwz r12, 0x28(r3)
/* 80366F7C 00363EBC  81 8C 00 88 */	lwz r12, 0x88(r12)
/* 80366F80 00363EC0  7D 89 03 A6 */	mtctr r12
/* 80366F84 00363EC4  4E 80 04 21 */	bctrl 
/* 80366F88 00363EC8  48 00 00 A4 */	b .L_8036702C
.L_80366F8C:
/* 80366F8C 00363ECC  80 7F 02 8C */	lwz r3, 0x28c(r31)
/* 80366F90 00363ED0  38 80 58 D1 */	li r4, 0x58d1
/* 80366F94 00363ED4  38 A0 00 00 */	li r5, 0
/* 80366F98 00363ED8  81 83 00 28 */	lwz r12, 0x28(r3)
/* 80366F9C 00363EDC  81 8C 00 88 */	lwz r12, 0x88(r12)
/* 80366FA0 00363EE0  7D 89 03 A6 */	mtctr r12
/* 80366FA4 00363EE4  4E 80 04 21 */	bctrl 
/* 80366FA8 00363EE8  48 00 00 84 */	b .L_8036702C
.L_80366FAC:
/* 80366FAC 00363EEC  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 80366FB0 00363EF0  40 82 00 7C */	bne .L_8036702C
/* 80366FB4 00363EF4  38 00 00 00 */	li r0, 0
/* 80366FB8 00363EF8  C0 02 05 20 */	lfs f0, lbl_8051E880@sda21(r2)
/* 80366FBC 00363EFC  98 1E 00 10 */	stb r0, 0x10(r30)
/* 80366FC0 00363F00  C0 22 05 48 */	lfs f1, lbl_8051E8A8@sda21(r2)
/* 80366FC4 00363F04  D0 1F 01 C8 */	stfs f0, 0x1c8(r31)
/* 80366FC8 00363F08  D0 1F 01 CC */	stfs f0, 0x1cc(r31)
/* 80366FCC 00363F0C  D0 1F 01 D0 */	stfs f0, 0x1d0(r31)
/* 80366FD0 00363F10  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 80366FD4 00363F14  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 80366FD8 00363F18  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 80366FDC 00363F1C  C0 1F 01 FC */	lfs f0, 0x1fc(r31)
/* 80366FE0 00363F20  EC 21 00 2A */	fadds f1, f1, f0
/* 80366FE4 00363F24  48 0A AB ED */	bl roundAng__Ff
/* 80366FE8 00363F28  D0 3F 02 EC */	stfs f1, 0x2ec(r31)
/* 80366FEC 00363F2C  7F C3 F3 78 */	mr r3, r30
/* 80366FF0 00363F30  C0 02 05 20 */	lfs f0, lbl_8051E880@sda21(r2)
/* 80366FF4 00363F34  7F E4 FB 78 */	mr r4, r31
/* 80366FF8 00363F38  C0 3F 01 98 */	lfs f1, 0x198(r31)
/* 80366FFC 00363F3C  38 C0 00 00 */	li r6, 0
/* 80367000 00363F40  D0 3F 02 C8 */	stfs f1, 0x2c8(r31)
/* 80367004 00363F44  C0 3F 01 9C */	lfs f1, 0x19c(r31)
/* 80367008 00363F48  D0 3F 02 CC */	stfs f1, 0x2cc(r31)
/* 8036700C 00363F4C  C0 3F 01 A0 */	lfs f1, 0x1a0(r31)
/* 80367010 00363F50  D0 3F 02 D0 */	stfs f1, 0x2d0(r31)
/* 80367014 00363F54  D0 1F 03 44 */	stfs f0, 0x344(r31)
/* 80367018 00363F58  81 9E 00 00 */	lwz r12, 0(r30)
/* 8036701C 00363F5C  80 BF 02 D4 */	lwz r5, 0x2d4(r31)
/* 80367020 00363F60  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80367024 00363F64  7D 89 03 A6 */	mtctr r12
/* 80367028 00363F68  4E 80 04 21 */	bctrl 
.L_8036702C:
/* 8036702C 00363F6C  88 1E 00 10 */	lbz r0, 0x10(r30)
/* 80367030 00363F70  28 00 00 00 */	cmplwi r0, 0
/* 80367034 00363F74  41 82 01 68 */	beq .L_8036719C
/* 80367038 00363F78  80 DF 00 C0 */	lwz r6, 0xc0(r31)
/* 8036703C 00363F7C  7F E3 FB 78 */	mr r3, r31
/* 80367040 00363F80  38 80 00 00 */	li r4, 0
/* 80367044 00363F84  38 A0 00 00 */	li r5, 0
/* 80367048 00363F88  C0 26 05 B4 */	lfs f1, 0x5b4(r6)
/* 8036704C 00363F8C  C0 46 05 DC */	lfs f2, 0x5dc(r6)
/* 80367050 00363F90  C0 66 06 04 */	lfs f3, 0x604(r6)
/* 80367054 00363F94  4B DA D2 0D */	bl "attackNavi__Q24Game9EnemyFuncFPQ24Game8CreaturefffP8CollPartP23Condition<Q24Game4Navi>"
/* 80367058 00363F98  7F E3 FB 78 */	mr r3, r31
/* 8036705C 00363F9C  48 00 37 55 */	bl walkFunc__Q34Game6Jigumo3ObjFv
/* 80367060 00363FA0  3C 80 80 4B */	lis r4, "__vt__23Condition<Q24Game4Piki>"@ha
/* 80367064 00363FA4  3C 60 80 4E */	lis r3, __vt__Q34Game6Jigumo24ConditionHeightCheckPiki@ha
/* 80367068 00363FA8  38 A4 BC 60 */	addi r5, r4, "__vt__23Condition<Q24Game4Piki>"@l
/* 8036706C 00363FAC  93 E1 00 78 */	stw r31, 0x78(r1)
/* 80367070 00363FB0  38 03 2A 34 */	addi r0, r3, __vt__Q34Game6Jigumo24ConditionHeightCheckPiki@l
/* 80367074 00363FB4  7F E4 FB 78 */	mr r4, r31
/* 80367078 00363FB8  90 A1 00 74 */	stw r5, 0x74(r1)
/* 8036707C 00363FBC  38 61 00 38 */	addi r3, r1, 0x38
/* 80367080 00363FC0  90 01 00 74 */	stw r0, 0x74(r1)
/* 80367084 00363FC4  81 9F 00 00 */	lwz r12, 0(r31)
/* 80367088 00363FC8  81 8C 00 08 */	lwz r12, 8(r12)
/* 8036708C 00363FCC  7D 89 03 A6 */	mtctr r12
/* 80367090 00363FD0  4E 80 04 21 */	bctrl 
/* 80367094 00363FD4  C0 21 00 3C */	lfs f1, 0x3c(r1)
/* 80367098 00363FD8  7F E4 FB 78 */	mr r4, r31
/* 8036709C 00363FDC  C0 02 05 60 */	lfs f0, lbl_8051E8C0@sda21(r2)
/* 803670A0 00363FE0  38 61 00 44 */	addi r3, r1, 0x44
/* 803670A4 00363FE4  EC 01 00 28 */	fsubs f0, f1, f0
/* 803670A8 00363FE8  D0 01 00 7C */	stfs f0, 0x7c(r1)
/* 803670AC 00363FEC  81 9F 00 00 */	lwz r12, 0(r31)
/* 803670B0 00363FF0  81 8C 00 08 */	lwz r12, 8(r12)
/* 803670B4 00363FF4  7D 89 03 A6 */	mtctr r12
/* 803670B8 00363FF8  4E 80 04 21 */	bctrl 
/* 803670BC 00363FFC  C0 21 00 48 */	lfs f1, 0x48(r1)
/* 803670C0 00364000  7F E3 FB 78 */	mr r3, r31
/* 803670C4 00364004  C0 02 05 64 */	lfs f0, lbl_8051E8C4@sda21(r2)
/* 803670C8 00364008  38 81 00 74 */	addi r4, r1, 0x74
/* 803670CC 0036400C  EC 00 08 2A */	fadds f0, f0, f1
/* 803670D0 00364010  D0 01 00 80 */	stfs f0, 0x80(r1)
/* 803670D4 00364014  4B DA CA 61 */	bl "eatPikmin__Q24Game9EnemyFuncFPQ24Game9EnemyBaseP23Condition<Q24Game4Piki>"
/* 803670D8 00364018  2C 03 00 00 */	cmpwi r3, 0
/* 803670DC 0036401C  40 81 00 34 */	ble .L_80367110
/* 803670E0 00364020  38 00 00 07 */	li r0, 7
/* 803670E4 00364024  38 80 00 01 */	li r4, 1
/* 803670E8 00364028  90 1F 02 D4 */	stw r0, 0x2d4(r31)
/* 803670EC 0036402C  38 00 00 00 */	li r0, 0
/* 803670F0 00364030  7F E3 FB 78 */	mr r3, r31
/* 803670F4 00364034  98 9F 02 E8 */	stb r4, 0x2e8(r31)
/* 803670F8 00364038  98 1E 00 10 */	stb r0, 0x10(r30)
/* 803670FC 0036403C  48 00 4C 01 */	bl effectStop__Q34Game6Jigumo3ObjFv
/* 80367100 00364040  C0 02 05 20 */	lfs f0, lbl_8051E880@sda21(r2)
/* 80367104 00364044  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 80367108 00364048  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 8036710C 0036404C  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
.L_80367110:
/* 80367110 00364050  7F E4 FB 78 */	mr r4, r31
/* 80367114 00364054  38 61 00 5C */	addi r3, r1, 0x5c
/* 80367118 00364058  81 9F 00 00 */	lwz r12, 0(r31)
/* 8036711C 0036405C  81 8C 00 08 */	lwz r12, 8(r12)
/* 80367120 00364060  7D 89 03 A6 */	mtctr r12
/* 80367124 00364064  4E 80 04 21 */	bctrl 
/* 80367128 00364068  7F E4 FB 78 */	mr r4, r31
/* 8036712C 0036406C  38 61 00 50 */	addi r3, r1, 0x50
/* 80367130 00364070  81 9F 00 00 */	lwz r12, 0(r31)
/* 80367134 00364074  C3 A1 00 5C */	lfs f29, 0x5c(r1)
/* 80367138 00364078  81 8C 01 98 */	lwz r12, 0x198(r12)
/* 8036713C 0036407C  C3 C1 00 60 */	lfs f30, 0x60(r1)
/* 80367140 00364080  C3 E1 00 64 */	lfs f31, 0x64(r1)
/* 80367144 00364084  7D 89 03 A6 */	mtctr r12
/* 80367148 00364088  4E 80 04 21 */	bctrl 
/* 8036714C 0036408C  C0 01 00 54 */	lfs f0, 0x54(r1)
/* 80367150 00364090  C0 41 00 50 */	lfs f2, 0x50(r1)
/* 80367154 00364094  EC 7E 00 28 */	fsubs f3, f30, f0
/* 80367158 00364098  C0 21 00 58 */	lfs f1, 0x58(r1)
/* 8036715C 0036409C  EC 9D 10 28 */	fsubs f4, f29, f2
/* 80367160 003640A0  C0 02 05 68 */	lfs f0, lbl_8051E8C8@sda21(r2)
/* 80367164 003640A4  EC 5F 08 28 */	fsubs f2, f31, f1
/* 80367168 003640A8  EC 23 00 F2 */	fmuls f1, f3, f3
/* 8036716C 003640AC  EC 24 09 3A */	fmadds f1, f4, f4, f1
/* 80367170 003640B0  EC 22 08 BA */	fmadds f1, f2, f2, f1
/* 80367174 003640B4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80367178 003640B8  40 80 00 24 */	bge .L_8036719C
/* 8036717C 003640BC  38 00 00 00 */	li r0, 0
/* 80367180 003640C0  7F E3 FB 78 */	mr r3, r31
/* 80367184 003640C4  98 1E 00 10 */	stb r0, 0x10(r30)
/* 80367188 003640C8  48 00 4B 75 */	bl effectStop__Q34Game6Jigumo3ObjFv
/* 8036718C 003640CC  C0 02 05 20 */	lfs f0, lbl_8051E880@sda21(r2)
/* 80367190 003640D0  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 80367194 003640D4  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 80367198 003640D8  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
.L_8036719C:
/* 8036719C 003640DC  7F E3 FB 78 */	mr r3, r31
/* 803671A0 003640E0  48 00 48 81 */	bl velocityControl__Q34Game6Jigumo3ObjFv
/* 803671A4 003640E4  E3 E1 00 C8 */	psq_l f31, 200(r1), 0, qr0
/* 803671A8 003640E8  CB E1 00 C0 */	lfd f31, 0xc0(r1)
/* 803671AC 003640EC  E3 C1 00 B8 */	psq_l f30, 184(r1), 0, qr0
/* 803671B0 003640F0  CB C1 00 B0 */	lfd f30, 0xb0(r1)
/* 803671B4 003640F4  E3 A1 00 A8 */	psq_l f29, 168(r1), 0, qr0
/* 803671B8 003640F8  CB A1 00 A0 */	lfd f29, 0xa0(r1)
/* 803671BC 003640FC  83 E1 00 9C */	lwz r31, 0x9c(r1)
/* 803671C0 00364100  83 C1 00 98 */	lwz r30, 0x98(r1)
/* 803671C4 00364104  80 01 00 D4 */	lwz r0, 0xd4(r1)
/* 803671C8 00364108  83 A1 00 94 */	lwz r29, 0x94(r1)
/* 803671CC 0036410C  7C 08 03 A6 */	mtlr r0
/* 803671D0 00364110  38 21 00 D0 */	addi r1, r1, 0xd0
/* 803671D4 00364114  4E 80 00 20 */	blr 

.global getGoalPos__Q34Game6Jigumo3ObjFv
getGoalPos__Q34Game6Jigumo3ObjFv:
/* 803671D8 00364118  C0 04 02 C8 */	lfs f0, 0x2c8(r4)
/* 803671DC 0036411C  D0 03 00 00 */	stfs f0, 0(r3)
/* 803671E0 00364120  C0 04 02 CC */	lfs f0, 0x2cc(r4)
/* 803671E4 00364124  D0 03 00 04 */	stfs f0, 4(r3)
/* 803671E8 00364128  C0 04 02 D0 */	lfs f0, 0x2d0(r4)
/* 803671EC 0036412C  D0 03 00 08 */	stfs f0, 8(r3)
/* 803671F0 00364130  4E 80 00 20 */	blr 

.global cleanup__Q34Game6Jigumo11StateAttackFPQ24Game9EnemyBase
cleanup__Q34Game6Jigumo11StateAttackFPQ24Game9EnemyBase:
/* 803671F4 00364134  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803671F8 00364138  7C 08 02 A6 */	mflr r0
/* 803671FC 0036413C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80367200 00364140  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80367204 00364144  7C 9F 23 78 */	mr r31, r4
/* 80367208 00364148  7F E3 FB 78 */	mr r3, r31
/* 8036720C 0036414C  48 00 4A F1 */	bl effectStop__Q34Game6Jigumo3ObjFv
/* 80367210 00364150  7F E3 FB 78 */	mr r3, r31
/* 80367214 00364154  4B D9 A7 69 */	bl setEmotionCaution__Q24Game9EnemyBaseFv
/* 80367218 00364158  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8036721C 0036415C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80367220 00364160  7C 08 03 A6 */	mtlr r0
/* 80367224 00364164  38 21 00 10 */	addi r1, r1, 0x10
/* 80367228 00364168  4E 80 00 20 */	blr 

.global __ct__Q34Game6Jigumo9StateMissFi
__ct__Q34Game6Jigumo9StateMissFi:
/* 8036722C 0036416C  3C A0 80 4B */	lis r5, __vt__Q24Game13EnemyFSMState@ha
/* 80367230 00364170  3C C0 80 4E */	lis r6, __vt__Q34Game6Jigumo5State@ha
/* 80367234 00364174  38 05 F9 A4 */	addi r0, r5, __vt__Q24Game13EnemyFSMState@l
/* 80367238 00364178  3C A0 80 4E */	lis r5, __vt__Q34Game6Jigumo9StateMiss@ha
/* 8036723C 0036417C  90 03 00 00 */	stw r0, 0(r3)
/* 80367240 00364180  38 E0 00 00 */	li r7, 0
/* 80367244 00364184  38 C6 2A F4 */	addi r6, r6, __vt__Q34Game6Jigumo5State@l
/* 80367248 00364188  38 A5 2A 10 */	addi r5, r5, __vt__Q34Game6Jigumo9StateMiss@l
/* 8036724C 0036418C  90 83 00 04 */	stw r4, 4(r3)
/* 80367250 00364190  38 02 05 6C */	addi r0, r2, lbl_8051E8CC@sda21
/* 80367254 00364194  90 E3 00 08 */	stw r7, 8(r3)
/* 80367258 00364198  90 C3 00 00 */	stw r6, 0(r3)
/* 8036725C 0036419C  90 A3 00 00 */	stw r5, 0(r3)
/* 80367260 003641A0  90 03 00 0C */	stw r0, 0xc(r3)
/* 80367264 003641A4  4E 80 00 20 */	blr 

.global init__Q34Game6Jigumo9StateMissFPQ24Game9EnemyBasePQ24Game8StateArg
init__Q34Game6Jigumo9StateMissFPQ24Game9EnemyBasePQ24Game8StateArg:
/* 80367268 003641A8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8036726C 003641AC  7C 08 02 A6 */	mflr r0
/* 80367270 003641B0  7C 86 23 78 */	mr r6, r4
/* 80367274 003641B4  38 A0 00 00 */	li r5, 0
/* 80367278 003641B8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8036727C 003641BC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80367280 003641C0  7C 7F 1B 78 */	mr r31, r3
/* 80367284 003641C4  7C C3 33 78 */	mr r3, r6
/* 80367288 003641C8  C0 04 01 FC */	lfs f0, 0x1fc(r4)
/* 8036728C 003641CC  38 80 00 10 */	li r4, 0x10
/* 80367290 003641D0  D0 06 02 EC */	stfs f0, 0x2ec(r6)
/* 80367294 003641D4  4B D9 DD 71 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 80367298 003641D8  38 00 00 00 */	li r0, 0
/* 8036729C 003641DC  98 1F 00 10 */	stb r0, 0x10(r31)
/* 803672A0 003641E0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803672A4 003641E4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803672A8 003641E8  7C 08 03 A6 */	mtlr r0
/* 803672AC 003641EC  38 21 00 10 */	addi r1, r1, 0x10
/* 803672B0 003641F0  4E 80 00 20 */	blr 

.global exec__Q34Game6Jigumo9StateMissFPQ24Game9EnemyBase
exec__Q34Game6Jigumo9StateMissFPQ24Game9EnemyBase:
/* 803672B4 003641F4  94 21 FF 90 */	stwu r1, -0x70(r1)
/* 803672B8 003641F8  7C 08 02 A6 */	mflr r0
/* 803672BC 003641FC  90 01 00 74 */	stw r0, 0x74(r1)
/* 803672C0 00364200  DB E1 00 60 */	stfd f31, 0x60(r1)
/* 803672C4 00364204  F3 E1 00 68 */	psq_st f31, 104(r1), 0, qr0
/* 803672C8 00364208  DB C1 00 50 */	stfd f30, 0x50(r1)
/* 803672CC 0036420C  F3 C1 00 58 */	psq_st f30, 88(r1), 0, qr0
/* 803672D0 00364210  DB A1 00 40 */	stfd f29, 0x40(r1)
/* 803672D4 00364214  F3 A1 00 48 */	psq_st f29, 72(r1), 0, qr0
/* 803672D8 00364218  DB 81 00 30 */	stfd f28, 0x30(r1)
/* 803672DC 0036421C  F3 81 00 38 */	psq_st f28, 56(r1), 0, qr0
/* 803672E0 00364220  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 803672E4 00364224  93 C1 00 28 */	stw r30, 0x28(r1)
/* 803672E8 00364228  7C 9F 23 78 */	mr r31, r4
/* 803672EC 0036422C  7C 7E 1B 78 */	mr r30, r3
/* 803672F0 00364230  80 A4 00 C0 */	lwz r5, 0xc0(r4)
/* 803672F4 00364234  88 05 08 FC */	lbz r0, 0x8fc(r5)
/* 803672F8 00364238  28 00 00 00 */	cmplwi r0, 0
/* 803672FC 0036423C  41 82 01 4C */	beq .L_80367448
/* 80367300 00364240  81 84 00 00 */	lwz r12, 0(r4)
/* 80367304 00364244  38 61 00 14 */	addi r3, r1, 0x14
/* 80367308 00364248  81 8C 01 98 */	lwz r12, 0x198(r12)
/* 8036730C 0036424C  7D 89 03 A6 */	mtctr r12
/* 80367310 00364250  4E 80 04 21 */	bctrl 
/* 80367314 00364254  7F E4 FB 78 */	mr r4, r31
/* 80367318 00364258  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 8036731C 0036425C  81 9F 00 00 */	lwz r12, 0(r31)
/* 80367320 00364260  38 61 00 08 */	addi r3, r1, 8
/* 80367324 00364264  C3 E1 00 14 */	lfs f31, 0x14(r1)
/* 80367328 00364268  81 8C 00 08 */	lwz r12, 8(r12)
/* 8036732C 0036426C  C3 81 00 1C */	lfs f28, 0x1c(r1)
/* 80367330 00364270  C3 A5 03 34 */	lfs f29, 0x334(r5)
/* 80367334 00364274  C3 C5 03 0C */	lfs f30, 0x30c(r5)
/* 80367338 00364278  7D 89 03 A6 */	mtctr r12
/* 8036733C 0036427C  4E 80 04 21 */	bctrl 
/* 80367340 00364280  C0 21 00 08 */	lfs f1, 8(r1)
/* 80367344 00364284  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 80367348 00364288  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 8036734C 0036428C  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 80367350 00364290  EC 3F 08 28 */	fsubs f1, f31, f1
/* 80367354 00364294  EC 5C 00 28 */	fsubs f2, f28, f0
/* 80367358 00364298  4B CC DD B1 */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 8036735C 0036429C  48 0A A8 75 */	bl roundAng__Ff
/* 80367360 003642A0  81 9F 00 00 */	lwz r12, 0(r31)
/* 80367364 003642A4  FF E0 08 90 */	fmr f31, f1
/* 80367368 003642A8  7F E3 FB 78 */	mr r3, r31
/* 8036736C 003642AC  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 80367370 003642B0  7D 89 03 A6 */	mtctr r12
/* 80367374 003642B4  4E 80 04 21 */	bctrl 
/* 80367378 003642B8  FC 40 08 90 */	fmr f2, f1
/* 8036737C 003642BC  FC 20 F8 90 */	fmr f1, f31
/* 80367380 003642C0  48 0A A8 7D */	bl angDist__Fff
/* 80367384 003642C4  FF E0 08 90 */	fmr f31, f1
/* 80367388 003642C8  C0 02 05 5C */	lfs f0, lbl_8051E8BC@sda21(r2)
/* 8036738C 003642CC  C0 22 05 48 */	lfs f1, lbl_8051E8A8@sda21(r2)
/* 80367390 003642D0  EC 00 07 72 */	fmuls f0, f0, f29
/* 80367394 003642D4  EF BF 07 B2 */	fmuls f29, f31, f30
/* 80367398 003642D8  EC 21 00 32 */	fmuls f1, f1, f0
/* 8036739C 003642DC  FC 00 EA 10 */	fabs f0, f29
/* 803673A0 003642E0  FC 00 00 18 */	frsp f0, f0
/* 803673A4 003642E4  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 803673A8 003642E8  40 81 00 1C */	ble .L_803673C4
/* 803673AC 003642EC  C0 02 05 20 */	lfs f0, lbl_8051E880@sda21(r2)
/* 803673B0 003642F0  FC 1D 00 40 */	fcmpo cr0, f29, f0
/* 803673B4 003642F4  40 81 00 0C */	ble .L_803673C0
/* 803673B8 003642F8  FF A0 08 90 */	fmr f29, f1
/* 803673BC 003642FC  48 00 00 08 */	b .L_803673C4
.L_803673C0:
/* 803673C0 00364300  FF A0 08 50 */	fneg f29, f1
.L_803673C4:
/* 803673C4 00364304  7F E3 FB 78 */	mr r3, r31
/* 803673C8 00364308  81 9F 00 00 */	lwz r12, 0(r31)
/* 803673CC 0036430C  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 803673D0 00364310  7D 89 03 A6 */	mtctr r12
/* 803673D4 00364314  4E 80 04 21 */	bctrl 
/* 803673D8 00364318  EC 3D 08 2A */	fadds f1, f29, f1
/* 803673DC 0036431C  48 0A A7 F5 */	bl roundAng__Ff
/* 803673E0 00364320  FC 60 FA 10 */	fabs f3, f31
/* 803673E4 00364324  D0 3F 01 FC */	stfs f1, 0x1fc(r31)
/* 803673E8 00364328  C0 02 05 44 */	lfs f0, lbl_8051E8A4@sda21(r2)
/* 803673EC 0036432C  C0 5F 01 FC */	lfs f2, 0x1fc(r31)
/* 803673F0 00364330  FC 20 18 18 */	frsp f1, f3
/* 803673F4 00364334  D0 5F 01 A8 */	stfs f2, 0x1a8(r31)
/* 803673F8 00364338  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 803673FC 0036433C  40 80 00 0C */	bge .L_80367408
/* 80367400 00364340  7F E3 FB 78 */	mr r3, r31
/* 80367404 00364344  4B D9 DE 9D */	bl finishMotion__Q24Game9EnemyBaseFv
.L_80367408:
/* 80367408 00364348  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 8036740C 0036434C  88 03 00 24 */	lbz r0, 0x24(r3)
/* 80367410 00364350  28 00 00 00 */	cmplwi r0, 0
/* 80367414 00364354  41 82 00 68 */	beq .L_8036747C
/* 80367418 00364358  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 8036741C 0036435C  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 80367420 00364360  40 82 00 5C */	bne .L_8036747C
/* 80367424 00364364  7F C3 F3 78 */	mr r3, r30
/* 80367428 00364368  7F E4 FB 78 */	mr r4, r31
/* 8036742C 0036436C  81 9E 00 00 */	lwz r12, 0(r30)
/* 80367430 00364370  38 A0 00 06 */	li r5, 6
/* 80367434 00364374  38 C0 00 00 */	li r6, 0
/* 80367438 00364378  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8036743C 0036437C  7D 89 03 A6 */	mtctr r12
/* 80367440 00364380  4E 80 04 21 */	bctrl 
/* 80367444 00364384  48 00 00 38 */	b .L_8036747C
.L_80367448:
/* 80367448 00364388  80 BF 01 88 */	lwz r5, 0x188(r31)
/* 8036744C 0036438C  88 05 00 24 */	lbz r0, 0x24(r5)
/* 80367450 00364390  28 00 00 00 */	cmplwi r0, 0
/* 80367454 00364394  41 82 00 28 */	beq .L_8036747C
/* 80367458 00364398  80 05 00 1C */	lwz r0, 0x1c(r5)
/* 8036745C 0036439C  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 80367460 003643A0  40 82 00 1C */	bne .L_8036747C
/* 80367464 003643A4  81 83 00 00 */	lwz r12, 0(r3)
/* 80367468 003643A8  38 A0 00 06 */	li r5, 6
/* 8036746C 003643AC  38 C0 00 00 */	li r6, 0
/* 80367470 003643B0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80367474 003643B4  7D 89 03 A6 */	mtctr r12
/* 80367478 003643B8  4E 80 04 21 */	bctrl 
.L_8036747C:
/* 8036747C 003643BC  E3 E1 00 68 */	psq_l f31, 104(r1), 0, qr0
/* 80367480 003643C0  CB E1 00 60 */	lfd f31, 0x60(r1)
/* 80367484 003643C4  E3 C1 00 58 */	psq_l f30, 88(r1), 0, qr0
/* 80367488 003643C8  CB C1 00 50 */	lfd f30, 0x50(r1)
/* 8036748C 003643CC  E3 A1 00 48 */	psq_l f29, 72(r1), 0, qr0
/* 80367490 003643D0  CB A1 00 40 */	lfd f29, 0x40(r1)
/* 80367494 003643D4  E3 81 00 38 */	psq_l f28, 56(r1), 0, qr0
/* 80367498 003643D8  CB 81 00 30 */	lfd f28, 0x30(r1)
/* 8036749C 003643DC  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 803674A0 003643E0  80 01 00 74 */	lwz r0, 0x74(r1)
/* 803674A4 003643E4  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 803674A8 003643E8  7C 08 03 A6 */	mtlr r0
/* 803674AC 003643EC  38 21 00 70 */	addi r1, r1, 0x70
/* 803674B0 003643F0  4E 80 00 20 */	blr 

.global __ct__Q34Game6Jigumo11StateReturnFi
__ct__Q34Game6Jigumo11StateReturnFi:
/* 803674B4 003643F4  3C A0 80 4B */	lis r5, __vt__Q24Game13EnemyFSMState@ha
/* 803674B8 003643F8  3C C0 80 4E */	lis r6, __vt__Q34Game6Jigumo5State@ha
/* 803674BC 003643FC  38 05 F9 A4 */	addi r0, r5, __vt__Q24Game13EnemyFSMState@l
/* 803674C0 00364400  3C A0 80 4E */	lis r5, __vt__Q34Game6Jigumo11StateReturn@ha
/* 803674C4 00364404  90 03 00 00 */	stw r0, 0(r3)
/* 803674C8 00364408  38 E0 00 00 */	li r7, 0
/* 803674CC 0036440C  38 C6 2A F4 */	addi r6, r6, __vt__Q34Game6Jigumo5State@l
/* 803674D0 00364410  38 A5 29 EC */	addi r5, r5, __vt__Q34Game6Jigumo11StateReturn@l
/* 803674D4 00364414  90 83 00 04 */	stw r4, 4(r3)
/* 803674D8 00364418  38 02 05 74 */	addi r0, r2, lbl_8051E8D4@sda21
/* 803674DC 0036441C  90 E3 00 08 */	stw r7, 8(r3)
/* 803674E0 00364420  90 C3 00 00 */	stw r6, 0(r3)
/* 803674E4 00364424  90 A3 00 00 */	stw r5, 0(r3)
/* 803674E8 00364428  90 03 00 0C */	stw r0, 0xc(r3)
/* 803674EC 0036442C  4E 80 00 20 */	blr 

.global init__Q34Game6Jigumo11StateReturnFPQ24Game9EnemyBasePQ24Game8StateArg
init__Q34Game6Jigumo11StateReturnFPQ24Game9EnemyBasePQ24Game8StateArg:
/* 803674F0 00364430  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803674F4 00364434  7C 08 02 A6 */	mflr r0
/* 803674F8 00364438  38 A0 00 00 */	li r5, 0
/* 803674FC 0036443C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80367500 00364440  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80367504 00364444  7C 9F 23 78 */	mr r31, r4
/* 80367508 00364448  38 80 00 0A */	li r4, 0xa
/* 8036750C 0036444C  7F E3 FB 78 */	mr r3, r31
/* 80367510 00364450  4B D9 DA F5 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 80367514 00364454  7F E3 FB 78 */	mr r3, r31
/* 80367518 00364458  48 00 46 25 */	bl effectStart__Q34Game6Jigumo3ObjFv
/* 8036751C 0036445C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80367520 00364460  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80367524 00364464  7C 08 03 A6 */	mtlr r0
/* 80367528 00364468  38 21 00 10 */	addi r1, r1, 0x10
/* 8036752C 0036446C  4E 80 00 20 */	blr 

.global exec__Q34Game6Jigumo11StateReturnFPQ24Game9EnemyBase
exec__Q34Game6Jigumo11StateReturnFPQ24Game9EnemyBase:
/* 80367530 00364470  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80367534 00364474  7C 08 02 A6 */	mflr r0
/* 80367538 00364478  90 01 00 14 */	stw r0, 0x14(r1)
/* 8036753C 0036447C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80367540 00364480  7C 9F 23 78 */	mr r31, r4
/* 80367544 00364484  93 C1 00 08 */	stw r30, 8(r1)
/* 80367548 00364488  7C 7E 1B 78 */	mr r30, r3
/* 8036754C 0036448C  7F E3 FB 78 */	mr r3, r31
/* 80367550 00364490  48 00 32 61 */	bl walkFunc__Q34Game6Jigumo3ObjFv
/* 80367554 00364494  C0 3F 02 00 */	lfs f1, 0x200(r31)
/* 80367558 00364498  C0 02 05 20 */	lfs f0, lbl_8051E880@sda21(r2)
/* 8036755C 0036449C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80367560 003644A0  4C 40 13 82 */	cror 2, 0, 2
/* 80367564 003644A4  40 82 00 28 */	bne .L_8036758C
/* 80367568 003644A8  7F C3 F3 78 */	mr r3, r30
/* 8036756C 003644AC  7F E4 FB 78 */	mr r4, r31
/* 80367570 003644B0  81 9E 00 00 */	lwz r12, 0(r30)
/* 80367574 003644B4  38 A0 00 03 */	li r5, 3
/* 80367578 003644B8  38 C0 00 00 */	li r6, 0
/* 8036757C 003644BC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80367580 003644C0  7D 89 03 A6 */	mtctr r12
/* 80367584 003644C4  4E 80 04 21 */	bctrl 
/* 80367588 003644C8  48 00 01 04 */	b .L_8036768C
.L_8036758C:
/* 8036758C 003644CC  7F E3 FB 78 */	mr r3, r31
/* 80367590 003644D0  38 80 00 00 */	li r4, 0
/* 80367594 003644D4  4B DA D0 C5 */	bl isStartFlick__Q24Game9EnemyFuncFPQ24Game9EnemyBaseb
/* 80367598 003644D8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8036759C 003644DC  41 82 00 30 */	beq .L_803675CC
/* 803675A0 003644E0  38 00 00 06 */	li r0, 6
/* 803675A4 003644E4  7F C3 F3 78 */	mr r3, r30
/* 803675A8 003644E8  90 1F 02 D4 */	stw r0, 0x2d4(r31)
/* 803675AC 003644EC  7F E4 FB 78 */	mr r4, r31
/* 803675B0 003644F0  38 A0 00 08 */	li r5, 8
/* 803675B4 003644F4  38 C0 00 00 */	li r6, 0
/* 803675B8 003644F8  81 9E 00 00 */	lwz r12, 0(r30)
/* 803675BC 003644FC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803675C0 00364500  7D 89 03 A6 */	mtctr r12
/* 803675C4 00364504  4E 80 04 21 */	bctrl 
/* 803675C8 00364508  48 00 00 34 */	b .L_803675FC
.L_803675CC:
/* 803675CC 0036450C  7F E3 FB 78 */	mr r3, r31
/* 803675D0 00364510  48 00 31 AD */	bl getGoalDist__Q34Game6Jigumo3ObjFv
/* 803675D4 00364514  C0 42 05 7C */	lfs f2, lbl_8051E8DC@sda21(r2)
/* 803675D8 00364518  C0 1F 01 F8 */	lfs f0, 0x1f8(r31)
/* 803675DC 0036451C  EC 02 00 32 */	fmuls f0, f2, f0
/* 803675E0 00364520  EC 00 00 32 */	fmuls f0, f0, f0
/* 803675E4 00364524  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 803675E8 00364528  40 80 00 14 */	bge .L_803675FC
/* 803675EC 0036452C  38 00 00 00 */	li r0, 0
/* 803675F0 00364530  7F E3 FB 78 */	mr r3, r31
/* 803675F4 00364534  98 1F 03 85 */	stb r0, 0x385(r31)
/* 803675F8 00364538  4B D9 DC A9 */	bl finishMotion__Q24Game9EnemyBaseFv
.L_803675FC:
/* 803675FC 0036453C  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 80367600 00364540  88 03 00 24 */	lbz r0, 0x24(r3)
/* 80367604 00364544  28 00 00 00 */	cmplwi r0, 0
/* 80367608 00364548  41 82 00 84 */	beq .L_8036768C
/* 8036760C 0036454C  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 80367610 00364550  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 80367614 00364554  40 82 00 78 */	bne .L_8036768C
/* 80367618 00364558  C0 02 05 20 */	lfs f0, lbl_8051E880@sda21(r2)
/* 8036761C 0036455C  D0 1F 01 C8 */	stfs f0, 0x1c8(r31)
/* 80367620 00364560  D0 1F 01 CC */	stfs f0, 0x1cc(r31)
/* 80367624 00364564  D0 1F 01 D0 */	stfs f0, 0x1d0(r31)
/* 80367628 00364568  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 8036762C 0036456C  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 80367630 00364570  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 80367634 00364574  80 1F 01 F4 */	lwz r0, 0x1f4(r31)
/* 80367638 00364578  2C 00 00 00 */	cmpwi r0, 0
/* 8036763C 0036457C  40 81 00 30 */	ble .L_8036766C
/* 80367640 00364580  7F C3 F3 78 */	mr r3, r30
/* 80367644 00364584  7F E4 FB 78 */	mr r4, r31
/* 80367648 00364588  81 9E 00 00 */	lwz r12, 0(r30)
/* 8036764C 0036458C  38 A0 00 08 */	li r5, 8
/* 80367650 00364590  38 C0 00 00 */	li r6, 0
/* 80367654 00364594  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80367658 00364598  7D 89 03 A6 */	mtctr r12
/* 8036765C 0036459C  4E 80 04 21 */	bctrl 
/* 80367660 003645A0  38 00 00 02 */	li r0, 2
/* 80367664 003645A4  90 1F 02 D4 */	stw r0, 0x2d4(r31)
/* 80367668 003645A8  48 00 00 24 */	b .L_8036768C
.L_8036766C:
/* 8036766C 003645AC  7F C3 F3 78 */	mr r3, r30
/* 80367670 003645B0  7F E4 FB 78 */	mr r4, r31
/* 80367674 003645B4  81 9E 00 00 */	lwz r12, 0(r30)
/* 80367678 003645B8  38 A0 00 02 */	li r5, 2
/* 8036767C 003645BC  38 C0 00 00 */	li r6, 0
/* 80367680 003645C0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80367684 003645C4  7D 89 03 A6 */	mtctr r12
/* 80367688 003645C8  4E 80 04 21 */	bctrl 
.L_8036768C:
/* 8036768C 003645CC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80367690 003645D0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80367694 003645D4  83 C1 00 08 */	lwz r30, 8(r1)
/* 80367698 003645D8  7C 08 03 A6 */	mtlr r0
/* 8036769C 003645DC  38 21 00 10 */	addi r1, r1, 0x10
/* 803676A0 003645E0  4E 80 00 20 */	blr 

.global cleanup__Q34Game6Jigumo11StateReturnFPQ24Game9EnemyBase
cleanup__Q34Game6Jigumo11StateReturnFPQ24Game9EnemyBase:
/* 803676A4 003645E4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803676A8 003645E8  7C 08 02 A6 */	mflr r0
/* 803676AC 003645EC  7C 83 23 78 */	mr r3, r4
/* 803676B0 003645F0  90 01 00 14 */	stw r0, 0x14(r1)
/* 803676B4 003645F4  38 00 00 01 */	li r0, 1
/* 803676B8 003645F8  98 04 03 85 */	stb r0, 0x385(r4)
/* 803676BC 003645FC  48 00 46 41 */	bl effectStop__Q34Game6Jigumo3ObjFv
/* 803676C0 00364600  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803676C4 00364604  7C 08 03 A6 */	mtlr r0
/* 803676C8 00364608  38 21 00 10 */	addi r1, r1, 0x10
/* 803676CC 0036460C  4E 80 00 20 */	blr 

.global __ct__Q34Game6Jigumo10StateCarryFi
__ct__Q34Game6Jigumo10StateCarryFi:
/* 803676D0 00364610  3C A0 80 4B */	lis r5, __vt__Q24Game13EnemyFSMState@ha
/* 803676D4 00364614  3C C0 80 4E */	lis r6, __vt__Q34Game6Jigumo5State@ha
/* 803676D8 00364618  38 05 F9 A4 */	addi r0, r5, __vt__Q24Game13EnemyFSMState@l
/* 803676DC 0036461C  3C A0 80 4E */	lis r5, __vt__Q34Game6Jigumo10StateCarry@ha
/* 803676E0 00364620  90 03 00 00 */	stw r0, 0(r3)
/* 803676E4 00364624  38 E0 00 00 */	li r7, 0
/* 803676E8 00364628  38 C6 2A F4 */	addi r6, r6, __vt__Q34Game6Jigumo5State@l
/* 803676EC 0036462C  38 A5 29 C8 */	addi r5, r5, __vt__Q34Game6Jigumo10StateCarry@l
/* 803676F0 00364630  90 83 00 04 */	stw r4, 4(r3)
/* 803676F4 00364634  38 02 05 80 */	addi r0, r2, lbl_8051E8E0@sda21
/* 803676F8 00364638  90 E3 00 08 */	stw r7, 8(r3)
/* 803676FC 0036463C  90 C3 00 00 */	stw r6, 0(r3)
/* 80367700 00364640  90 A3 00 00 */	stw r5, 0(r3)
/* 80367704 00364644  90 03 00 0C */	stw r0, 0xc(r3)
/* 80367708 00364648  4E 80 00 20 */	blr 

.global init__Q34Game6Jigumo10StateCarryFPQ24Game9EnemyBasePQ24Game8StateArg
init__Q34Game6Jigumo10StateCarryFPQ24Game9EnemyBasePQ24Game8StateArg:
/* 8036770C 0036464C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80367710 00364650  7C 08 02 A6 */	mflr r0
/* 80367714 00364654  38 A0 00 00 */	li r5, 0
/* 80367718 00364658  90 01 00 14 */	stw r0, 0x14(r1)
/* 8036771C 0036465C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80367720 00364660  7C 9F 23 78 */	mr r31, r4
/* 80367724 00364664  38 80 00 02 */	li r4, 2
/* 80367728 00364668  7F E3 FB 78 */	mr r3, r31
/* 8036772C 0036466C  4B D9 D8 D9 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 80367730 00364670  7F E3 FB 78 */	mr r3, r31
/* 80367734 00364674  48 00 44 09 */	bl effectStart__Q34Game6Jigumo3ObjFv
/* 80367738 00364678  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8036773C 0036467C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80367740 00364680  7C 08 03 A6 */	mtlr r0
/* 80367744 00364684  38 21 00 10 */	addi r1, r1, 0x10
/* 80367748 00364688  4E 80 00 20 */	blr 

.global exec__Q34Game6Jigumo10StateCarryFPQ24Game9EnemyBase
exec__Q34Game6Jigumo10StateCarryFPQ24Game9EnemyBase:
/* 8036774C 0036468C  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80367750 00364690  7C 08 02 A6 */	mflr r0
/* 80367754 00364694  90 01 00 34 */	stw r0, 0x34(r1)
/* 80367758 00364698  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 8036775C 0036469C  F3 E1 00 28 */	psq_st f31, 40(r1), 0, qr0
/* 80367760 003646A0  DB C1 00 10 */	stfd f30, 0x10(r1)
/* 80367764 003646A4  F3 C1 00 18 */	psq_st f30, 24(r1), 0, qr0
/* 80367768 003646A8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8036776C 003646AC  93 C1 00 08 */	stw r30, 8(r1)
/* 80367770 003646B0  7C 9F 23 78 */	mr r31, r4
/* 80367774 003646B4  7C 7E 1B 78 */	mr r30, r3
/* 80367778 003646B8  7F E3 FB 78 */	mr r3, r31
/* 8036777C 003646BC  48 00 30 35 */	bl walkFunc__Q34Game6Jigumo3ObjFv
/* 80367780 003646C0  C0 3F 02 00 */	lfs f1, 0x200(r31)
/* 80367784 003646C4  C0 02 05 20 */	lfs f0, lbl_8051E880@sda21(r2)
/* 80367788 003646C8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8036778C 003646CC  4C 40 13 82 */	cror 2, 0, 2
/* 80367790 003646D0  40 82 00 28 */	bne .L_803677B8
/* 80367794 003646D4  7F C3 F3 78 */	mr r3, r30
/* 80367798 003646D8  7F E4 FB 78 */	mr r4, r31
/* 8036779C 003646DC  81 9E 00 00 */	lwz r12, 0(r30)
/* 803677A0 003646E0  38 A0 00 03 */	li r5, 3
/* 803677A4 003646E4  38 C0 00 00 */	li r6, 0
/* 803677A8 003646E8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803677AC 003646EC  7D 89 03 A6 */	mtctr r12
/* 803677B0 003646F0  4E 80 04 21 */	bctrl 
/* 803677B4 003646F4  48 00 01 00 */	b .L_803678B4
.L_803677B8:
/* 803677B8 003646F8  7F E3 FB 78 */	mr r3, r31
/* 803677BC 003646FC  38 80 00 00 */	li r4, 0
/* 803677C0 00364700  4B DA CE 99 */	bl isStartFlick__Q24Game9EnemyFuncFPQ24Game9EnemyBaseb
/* 803677C4 00364704  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803677C8 00364708  41 82 00 30 */	beq .L_803677F8
/* 803677CC 0036470C  38 00 00 07 */	li r0, 7
/* 803677D0 00364710  7F C3 F3 78 */	mr r3, r30
/* 803677D4 00364714  90 1F 02 D4 */	stw r0, 0x2d4(r31)
/* 803677D8 00364718  7F E4 FB 78 */	mr r4, r31
/* 803677DC 0036471C  38 A0 00 08 */	li r5, 8
/* 803677E0 00364720  38 C0 00 00 */	li r6, 0
/* 803677E4 00364724  81 9E 00 00 */	lwz r12, 0(r30)
/* 803677E8 00364728  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803677EC 0036472C  7D 89 03 A6 */	mtctr r12
/* 803677F0 00364730  4E 80 04 21 */	bctrl 
/* 803677F4 00364734  48 00 00 C0 */	b .L_803678B4
.L_803677F8:
/* 803677F8 00364738  7F E3 FB 78 */	mr r3, r31
/* 803677FC 0036473C  48 00 2F 81 */	bl getGoalDist__Q34Game6Jigumo3ObjFv
/* 80367800 00364740  C0 62 05 64 */	lfs f3, lbl_8051E8C4@sda21(r2)
/* 80367804 00364744  FF E0 08 90 */	fmr f31, f1
/* 80367808 00364748  C0 5F 01 F8 */	lfs f2, 0x1f8(r31)
/* 8036780C 0036474C  C0 22 05 7C */	lfs f1, lbl_8051E8DC@sda21(r2)
/* 80367810 00364750  C0 02 05 88 */	lfs f0, lbl_8051E8E8@sda21(r2)
/* 80367814 00364754  EF C3 08 BA */	fmadds f30, f3, f2, f1
/* 80367818 00364758  EF DE 07 B2 */	fmuls f30, f30, f30
/* 8036781C 0036475C  EC 00 07 B2 */	fmuls f0, f0, f30
/* 80367820 00364760  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 80367824 00364764  40 80 00 14 */	bge .L_80367838
/* 80367828 00364768  7F E3 FB 78 */	mr r3, r31
/* 8036782C 0036476C  4B D9 DA 75 */	bl finishMotion__Q24Game9EnemyBaseFv
/* 80367830 00364770  38 00 00 00 */	li r0, 0
/* 80367834 00364774  98 1F 03 85 */	stb r0, 0x385(r31)
.L_80367838:
/* 80367838 00364778  FC 1F F0 40 */	fcmpo cr0, f31, f30
/* 8036783C 0036477C  40 80 00 78 */	bge .L_803678B4
/* 80367840 00364780  C0 02 05 20 */	lfs f0, lbl_8051E880@sda21(r2)
/* 80367844 00364784  D0 1F 01 C8 */	stfs f0, 0x1c8(r31)
/* 80367848 00364788  D0 1F 01 CC */	stfs f0, 0x1cc(r31)
/* 8036784C 0036478C  D0 1F 01 D0 */	stfs f0, 0x1d0(r31)
/* 80367850 00364790  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 80367854 00364794  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 80367858 00364798  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 8036785C 0036479C  80 1F 01 F4 */	lwz r0, 0x1f4(r31)
/* 80367860 003647A0  2C 00 00 01 */	cmpwi r0, 1
/* 80367864 003647A4  40 81 00 30 */	ble .L_80367894
/* 80367868 003647A8  7F C3 F3 78 */	mr r3, r30
/* 8036786C 003647AC  7F E4 FB 78 */	mr r4, r31
/* 80367870 003647B0  81 9E 00 00 */	lwz r12, 0(r30)
/* 80367874 003647B4  38 A0 00 08 */	li r5, 8
/* 80367878 003647B8  38 C0 00 00 */	li r6, 0
/* 8036787C 003647BC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80367880 003647C0  7D 89 03 A6 */	mtctr r12
/* 80367884 003647C4  4E 80 04 21 */	bctrl 
/* 80367888 003647C8  38 00 00 09 */	li r0, 9
/* 8036788C 003647CC  90 1F 02 D4 */	stw r0, 0x2d4(r31)
/* 80367890 003647D0  48 00 00 24 */	b .L_803678B4
.L_80367894:
/* 80367894 003647D4  7F C3 F3 78 */	mr r3, r30
/* 80367898 003647D8  7F E4 FB 78 */	mr r4, r31
/* 8036789C 003647DC  81 9E 00 00 */	lwz r12, 0(r30)
/* 803678A0 003647E0  38 A0 00 09 */	li r5, 9
/* 803678A4 003647E4  38 C0 00 00 */	li r6, 0
/* 803678A8 003647E8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803678AC 003647EC  7D 89 03 A6 */	mtctr r12
/* 803678B0 003647F0  4E 80 04 21 */	bctrl 
.L_803678B4:
/* 803678B4 003647F4  E3 E1 00 28 */	psq_l f31, 40(r1), 0, qr0
/* 803678B8 003647F8  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 803678BC 003647FC  E3 C1 00 18 */	psq_l f30, 24(r1), 0, qr0
/* 803678C0 00364800  CB C1 00 10 */	lfd f30, 0x10(r1)
/* 803678C4 00364804  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803678C8 00364808  80 01 00 34 */	lwz r0, 0x34(r1)
/* 803678CC 0036480C  83 C1 00 08 */	lwz r30, 8(r1)
/* 803678D0 00364810  7C 08 03 A6 */	mtlr r0
/* 803678D4 00364814  38 21 00 30 */	addi r1, r1, 0x30
/* 803678D8 00364818  4E 80 00 20 */	blr 

.global cleanup__Q34Game6Jigumo10StateCarryFPQ24Game9EnemyBase
cleanup__Q34Game6Jigumo10StateCarryFPQ24Game9EnemyBase:
/* 803678DC 0036481C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803678E0 00364820  7C 08 02 A6 */	mflr r0
/* 803678E4 00364824  7C 83 23 78 */	mr r3, r4
/* 803678E8 00364828  90 01 00 14 */	stw r0, 0x14(r1)
/* 803678EC 0036482C  38 00 00 01 */	li r0, 1
/* 803678F0 00364830  98 04 03 85 */	stb r0, 0x385(r4)
/* 803678F4 00364834  48 00 44 09 */	bl effectStop__Q34Game6Jigumo3ObjFv
/* 803678F8 00364838  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803678FC 0036483C  7C 08 03 A6 */	mtlr r0
/* 80367900 00364840  38 21 00 10 */	addi r1, r1, 0x10
/* 80367904 00364844  4E 80 00 20 */	blr 

.global __ct__Q34Game6Jigumo10StateFlickFi
__ct__Q34Game6Jigumo10StateFlickFi:
/* 80367908 00364848  3C A0 80 4B */	lis r5, __vt__Q24Game13EnemyFSMState@ha
/* 8036790C 0036484C  3C C0 80 4E */	lis r6, __vt__Q34Game6Jigumo5State@ha
/* 80367910 00364850  38 05 F9 A4 */	addi r0, r5, __vt__Q24Game13EnemyFSMState@l
/* 80367914 00364854  3C A0 80 4E */	lis r5, __vt__Q34Game6Jigumo10StateFlick@ha
/* 80367918 00364858  90 03 00 00 */	stw r0, 0(r3)
/* 8036791C 0036485C  38 E0 00 00 */	li r7, 0
/* 80367920 00364860  38 C6 2A F4 */	addi r6, r6, __vt__Q34Game6Jigumo5State@l
/* 80367924 00364864  38 A5 29 A4 */	addi r5, r5, __vt__Q34Game6Jigumo10StateFlick@l
/* 80367928 00364868  90 83 00 04 */	stw r4, 4(r3)
/* 8036792C 0036486C  38 02 05 8C */	addi r0, r2, lbl_8051E8EC@sda21
/* 80367930 00364870  90 E3 00 08 */	stw r7, 8(r3)
/* 80367934 00364874  90 C3 00 00 */	stw r6, 0(r3)
/* 80367938 00364878  90 A3 00 00 */	stw r5, 0(r3)
/* 8036793C 0036487C  90 03 00 0C */	stw r0, 0xc(r3)
/* 80367940 00364880  4E 80 00 20 */	blr 

.global init__Q34Game6Jigumo10StateFlickFPQ24Game9EnemyBasePQ24Game8StateArg
init__Q34Game6Jigumo10StateFlickFPQ24Game9EnemyBasePQ24Game8StateArg:
/* 80367944 00364884  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80367948 00364888  7C 08 02 A6 */	mflr r0
/* 8036794C 0036488C  C0 02 05 20 */	lfs f0, lbl_8051E880@sda21(r2)
/* 80367950 00364890  90 01 00 34 */	stw r0, 0x34(r1)
/* 80367954 00364894  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 80367958 00364898  7C 9F 23 78 */	mr r31, r4
/* 8036795C 0036489C  D0 04 01 D4 */	stfs f0, 0x1d4(r4)
/* 80367960 003648A0  D0 04 01 D8 */	stfs f0, 0x1d8(r4)
/* 80367964 003648A4  D0 04 01 DC */	stfs f0, 0x1dc(r4)
/* 80367968 003648A8  D0 04 01 C8 */	stfs f0, 0x1c8(r4)
/* 8036796C 003648AC  D0 04 01 CC */	stfs f0, 0x1cc(r4)
/* 80367970 003648B0  D0 04 01 D0 */	stfs f0, 0x1d0(r4)
/* 80367974 003648B4  88 04 02 E8 */	lbz r0, 0x2e8(r4)
/* 80367978 003648B8  28 00 00 00 */	cmplwi r0, 0
/* 8036797C 003648BC  41 82 00 18 */	beq .L_80367994
/* 80367980 003648C0  7F E3 FB 78 */	mr r3, r31
/* 80367984 003648C4  38 80 00 06 */	li r4, 6
/* 80367988 003648C8  38 A0 00 00 */	li r5, 0
/* 8036798C 003648CC  4B D9 D6 79 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 80367990 003648D0  48 00 00 14 */	b .L_803679A4
.L_80367994:
/* 80367994 003648D4  7F E3 FB 78 */	mr r3, r31
/* 80367998 003648D8  38 80 00 09 */	li r4, 9
/* 8036799C 003648DC  38 A0 00 00 */	li r5, 0
/* 803679A0 003648E0  4B D9 D6 65 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
.L_803679A4:
/* 803679A4 003648E4  7F E4 FB 78 */	mr r4, r31
/* 803679A8 003648E8  38 61 00 08 */	addi r3, r1, 8
/* 803679AC 003648EC  81 9F 00 00 */	lwz r12, 0(r31)
/* 803679B0 003648F0  81 8C 00 08 */	lwz r12, 8(r12)
/* 803679B4 003648F4  7D 89 03 A6 */	mtctr r12
/* 803679B8 003648F8  4E 80 04 21 */	bctrl 
/* 803679BC 003648FC  C0 41 00 08 */	lfs f2, 8(r1)
/* 803679C0 00364900  38 A1 00 14 */	addi r5, r1, 0x14
/* 803679C4 00364904  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 803679C8 00364908  38 80 00 00 */	li r4, 0
/* 803679CC 0036490C  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 803679D0 00364910  38 C0 00 02 */	li r6, 2
/* 803679D4 00364914  D0 41 00 14 */	stfs f2, 0x14(r1)
/* 803679D8 00364918  80 6D 96 A0 */	lwz r3, cameraMgr__4Game@sda21(r13)
/* 803679DC 0036491C  D0 21 00 18 */	stfs f1, 0x18(r1)
/* 803679E0 00364920  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 803679E4 00364924  4B EE A8 59 */	bl "startVibration__Q24Game9CameraMgrFiR10Vector3<f>i"
/* 803679E8 00364928  80 6D 96 A8 */	lwz r3, rumbleMgr__4Game@sda21(r13)
/* 803679EC 0036492C  38 A1 00 14 */	addi r5, r1, 0x14
/* 803679F0 00364930  38 80 00 08 */	li r4, 8
/* 803679F4 00364934  38 C0 00 02 */	li r6, 2
/* 803679F8 00364938  4B EE BD 89 */	bl "startRumble__Q24Game9RumbleMgrFiR10Vector3<f>i"
/* 803679FC 0036493C  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80367A00 00364940  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 80367A04 00364944  7C 08 03 A6 */	mtlr r0
/* 80367A08 00364948  38 21 00 30 */	addi r1, r1, 0x30
/* 80367A0C 0036494C  4E 80 00 20 */	blr 

.global exec__Q34Game6Jigumo10StateFlickFPQ24Game9EnemyBase
exec__Q34Game6Jigumo10StateFlickFPQ24Game9EnemyBase:
/* 80367A10 00364950  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 80367A14 00364954  7C 08 02 A6 */	mflr r0
/* 80367A18 00364958  90 01 00 44 */	stw r0, 0x44(r1)
/* 80367A1C 0036495C  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 80367A20 00364960  F3 E1 00 38 */	psq_st f31, 56(r1), 0, qr0
/* 80367A24 00364964  DB C1 00 20 */	stfd f30, 0x20(r1)
/* 80367A28 00364968  F3 C1 00 28 */	psq_st f30, 40(r1), 0, qr0
/* 80367A2C 0036496C  DB A1 00 10 */	stfd f29, 0x10(r1)
/* 80367A30 00364970  F3 A1 00 18 */	psq_st f29, 24(r1), 0, qr0
/* 80367A34 00364974  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80367A38 00364978  7C 9F 23 78 */	mr r31, r4
/* 80367A3C 0036497C  80 A4 01 88 */	lwz r5, 0x188(r4)
/* 80367A40 00364980  88 05 00 24 */	lbz r0, 0x24(r5)
/* 80367A44 00364984  28 00 00 00 */	cmplwi r0, 0
/* 80367A48 00364988  41 82 00 98 */	beq .L_80367AE0
/* 80367A4C 0036498C  80 05 00 1C */	lwz r0, 0x1c(r5)
/* 80367A50 00364990  28 00 00 02 */	cmplwi r0, 2
/* 80367A54 00364994  40 82 00 58 */	bne .L_80367AAC
/* 80367A58 00364998  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 80367A5C 0036499C  7F E3 FB 78 */	mr r3, r31
/* 80367A60 003649A0  C0 82 05 40 */	lfs f4, lbl_8051E8A0@sda21(r2)
/* 80367A64 003649A4  38 80 00 00 */	li r4, 0
/* 80367A68 003649A8  C3 C5 04 C4 */	lfs f30, 0x4c4(r5)
/* 80367A6C 003649AC  C3 A5 04 EC */	lfs f29, 0x4ec(r5)
/* 80367A70 003649B0  FC 40 F0 90 */	fmr f2, f30
/* 80367A74 003649B4  C3 E5 05 3C */	lfs f31, 0x53c(r5)
/* 80367A78 003649B8  FC 60 E8 90 */	fmr f3, f29
/* 80367A7C 003649BC  C0 25 05 14 */	lfs f1, 0x514(r5)
/* 80367A80 003649C0  4B DA BA 55 */	bl "flickNearbyPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Piki>"
/* 80367A84 003649C4  FC 20 F8 90 */	fmr f1, f31
/* 80367A88 003649C8  C0 82 05 40 */	lfs f4, lbl_8051E8A0@sda21(r2)
/* 80367A8C 003649CC  FC 40 F0 90 */	fmr f2, f30
/* 80367A90 003649D0  7F E3 FB 78 */	mr r3, r31
/* 80367A94 003649D4  FC 60 E8 90 */	fmr f3, f29
/* 80367A98 003649D8  38 80 00 00 */	li r4, 0
/* 80367A9C 003649DC  4B DA B6 81 */	bl "flickStickPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Piki>"
/* 80367AA0 003649E0  C0 02 05 20 */	lfs f0, lbl_8051E880@sda21(r2)
/* 80367AA4 003649E4  D0 1F 02 0C */	stfs f0, 0x20c(r31)
/* 80367AA8 003649E8  48 00 00 38 */	b .L_80367AE0
.L_80367AAC:
/* 80367AAC 003649EC  28 00 00 03 */	cmplwi r0, 3
/* 80367AB0 003649F0  40 82 00 10 */	bne .L_80367AC0
/* 80367AB4 003649F4  7F E3 FB 78 */	mr r3, r31
/* 80367AB8 003649F8  48 00 42 D1 */	bl boundEffect__Q34Game6Jigumo3ObjFv
/* 80367ABC 003649FC  48 00 00 24 */	b .L_80367AE0
.L_80367AC0:
/* 80367AC0 00364A00  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 80367AC4 00364A04  40 82 00 1C */	bne .L_80367AE0
/* 80367AC8 00364A08  81 83 00 00 */	lwz r12, 0(r3)
/* 80367ACC 00364A0C  38 C0 00 00 */	li r6, 0
/* 80367AD0 00364A10  80 BF 02 D4 */	lwz r5, 0x2d4(r31)
/* 80367AD4 00364A14  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80367AD8 00364A18  7D 89 03 A6 */	mtctr r12
/* 80367ADC 00364A1C  4E 80 04 21 */	bctrl 
.L_80367AE0:
/* 80367AE0 00364A20  E3 E1 00 38 */	psq_l f31, 56(r1), 0, qr0
/* 80367AE4 00364A24  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 80367AE8 00364A28  E3 C1 00 28 */	psq_l f30, 40(r1), 0, qr0
/* 80367AEC 00364A2C  CB C1 00 20 */	lfd f30, 0x20(r1)
/* 80367AF0 00364A30  E3 A1 00 18 */	psq_l f29, 24(r1), 0, qr0
/* 80367AF4 00364A34  CB A1 00 10 */	lfd f29, 0x10(r1)
/* 80367AF8 00364A38  80 01 00 44 */	lwz r0, 0x44(r1)
/* 80367AFC 00364A3C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80367B00 00364A40  7C 08 03 A6 */	mtlr r0
/* 80367B04 00364A44  38 21 00 40 */	addi r1, r1, 0x40
/* 80367B08 00364A48  4E 80 00 20 */	blr 

.global __ct__Q34Game6Jigumo8StateEatFi
__ct__Q34Game6Jigumo8StateEatFi:
/* 80367B0C 00364A4C  3C A0 80 4B */	lis r5, __vt__Q24Game13EnemyFSMState@ha
/* 80367B10 00364A50  3C C0 80 4E */	lis r6, __vt__Q34Game6Jigumo5State@ha
/* 80367B14 00364A54  38 05 F9 A4 */	addi r0, r5, __vt__Q24Game13EnemyFSMState@l
/* 80367B18 00364A58  3C A0 80 4E */	lis r5, __vt__Q34Game6Jigumo8StateEat@ha
/* 80367B1C 00364A5C  90 03 00 00 */	stw r0, 0(r3)
/* 80367B20 00364A60  38 E0 00 00 */	li r7, 0
/* 80367B24 00364A64  38 C6 2A F4 */	addi r6, r6, __vt__Q34Game6Jigumo5State@l
/* 80367B28 00364A68  38 A5 29 80 */	addi r5, r5, __vt__Q34Game6Jigumo8StateEat@l
/* 80367B2C 00364A6C  90 83 00 04 */	stw r4, 4(r3)
/* 80367B30 00364A70  38 02 05 94 */	addi r0, r2, lbl_8051E8F4@sda21
/* 80367B34 00364A74  90 E3 00 08 */	stw r7, 8(r3)
/* 80367B38 00364A78  90 C3 00 00 */	stw r6, 0(r3)
/* 80367B3C 00364A7C  90 A3 00 00 */	stw r5, 0(r3)
/* 80367B40 00364A80  90 03 00 0C */	stw r0, 0xc(r3)
/* 80367B44 00364A84  4E 80 00 20 */	blr 

.global init__Q34Game6Jigumo8StateEatFPQ24Game9EnemyBasePQ24Game8StateArg
init__Q34Game6Jigumo8StateEatFPQ24Game9EnemyBasePQ24Game8StateArg:
/* 80367B48 00364A88  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80367B4C 00364A8C  7C 08 02 A6 */	mflr r0
/* 80367B50 00364A90  38 A0 00 00 */	li r5, 0
/* 80367B54 00364A94  90 01 00 14 */	stw r0, 0x14(r1)
/* 80367B58 00364A98  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80367B5C 00364A9C  7C 9F 23 78 */	mr r31, r4
/* 80367B60 00364AA0  38 80 00 05 */	li r4, 5
/* 80367B64 00364AA4  C0 1F 01 8C */	lfs f0, 0x18c(r31)
/* 80367B68 00364AA8  7F E3 FB 78 */	mr r3, r31
/* 80367B6C 00364AAC  D0 1F 02 BC */	stfs f0, 0x2bc(r31)
/* 80367B70 00364AB0  C0 1F 01 90 */	lfs f0, 0x190(r31)
/* 80367B74 00364AB4  D0 1F 02 C0 */	stfs f0, 0x2c0(r31)
/* 80367B78 00364AB8  C0 1F 01 94 */	lfs f0, 0x194(r31)
/* 80367B7C 00364ABC  D0 1F 02 C4 */	stfs f0, 0x2c4(r31)
/* 80367B80 00364AC0  4B D9 D4 85 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 80367B84 00364AC4  7F E3 FB 78 */	mr r3, r31
/* 80367B88 00364AC8  4B D9 FB F5 */	bl hardConstraintOn__Q24Game9EnemyBaseFv
/* 80367B8C 00364ACC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80367B90 00364AD0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80367B94 00364AD4  7C 08 03 A6 */	mtlr r0
/* 80367B98 00364AD8  38 21 00 10 */	addi r1, r1, 0x10
/* 80367B9C 00364ADC  4E 80 00 20 */	blr 

.global exec__Q34Game6Jigumo8StateEatFPQ24Game9EnemyBase
exec__Q34Game6Jigumo8StateEatFPQ24Game9EnemyBase:
/* 80367BA0 00364AE0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80367BA4 00364AE4  7C 08 02 A6 */	mflr r0
/* 80367BA8 00364AE8  90 01 00 14 */	stw r0, 0x14(r1)
/* 80367BAC 00364AEC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80367BB0 00364AF0  7C 9F 23 78 */	mr r31, r4
/* 80367BB4 00364AF4  93 C1 00 08 */	stw r30, 8(r1)
/* 80367BB8 00364AF8  7C 7E 1B 78 */	mr r30, r3
/* 80367BBC 00364AFC  7F E3 FB 78 */	mr r3, r31
/* 80367BC0 00364B00  4B D9 D6 AD */	bl getMotionFrame__Q24Game9EnemyBaseFv
/* 80367BC4 00364B04  C0 02 05 98 */	lfs f0, lbl_8051E8F8@sda21(r2)
/* 80367BC8 00364B08  7F E3 FB 78 */	mr r3, r31
/* 80367BCC 00364B0C  EC 20 00 72 */	fmuls f1, f0, f1
/* 80367BD0 00364B10  48 00 3D 79 */	bl revisionAnimPos__Q34Game6Jigumo3ObjFf
/* 80367BD4 00364B14  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 80367BD8 00364B18  88 03 00 24 */	lbz r0, 0x24(r3)
/* 80367BDC 00364B1C  28 00 00 00 */	cmplwi r0, 0
/* 80367BE0 00364B20  41 82 00 C8 */	beq .L_80367CA8
/* 80367BE4 00364B24  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 80367BE8 00364B28  2C 00 00 08 */	cmpwi r0, 8
/* 80367BEC 00364B2C  41 82 00 4C */	beq .L_80367C38
/* 80367BF0 00364B30  40 80 00 18 */	bge .L_80367C08
/* 80367BF4 00364B34  2C 00 00 07 */	cmpwi r0, 7
/* 80367BF8 00364B38  40 80 00 34 */	bge .L_80367C2C
/* 80367BFC 00364B3C  2C 00 00 02 */	cmpwi r0, 2
/* 80367C00 00364B40  40 80 00 14 */	bge .L_80367C14
/* 80367C04 00364B44  48 00 00 A4 */	b .L_80367CA8
.L_80367C08:
/* 80367C08 00364B48  2C 00 03 E8 */	cmpwi r0, 0x3e8
/* 80367C0C 00364B4C  41 82 00 48 */	beq .L_80367C54
/* 80367C10 00364B50  48 00 00 98 */	b .L_80367CA8
.L_80367C14:
/* 80367C14 00364B54  80 1F 02 80 */	lwz r0, 0x280(r31)
/* 80367C18 00364B58  28 00 00 00 */	cmplwi r0, 0
/* 80367C1C 00364B5C  41 82 00 8C */	beq .L_80367CA8
/* 80367C20 00364B60  7F E3 FB 78 */	mr r3, r31
/* 80367C24 00364B64  48 00 41 8D */	bl eatWaterEffect__Q34Game6Jigumo3ObjFv
/* 80367C28 00364B68  48 00 00 80 */	b .L_80367CA8
.L_80367C2C:
/* 80367C2C 00364B6C  38 00 00 01 */	li r0, 1
/* 80367C30 00364B70  98 1F 02 E9 */	stb r0, 0x2e9(r31)
/* 80367C34 00364B74  48 00 00 74 */	b .L_80367CA8
.L_80367C38:
/* 80367C38 00364B78  C0 22 05 9C */	lfs f1, lbl_8051E8FC@sda21(r2)
/* 80367C3C 00364B7C  7F E3 FB 78 */	mr r3, r31
/* 80367C40 00364B80  38 80 00 00 */	li r4, 0
/* 80367C44 00364B84  4B DA C2 41 */	bl "swallowPikmin__Q24Game9EnemyFuncFPQ24Game8CreaturefP23Condition<Q24Game4Piki>"
/* 80367C48 00364B88  38 00 00 00 */	li r0, 0
/* 80367C4C 00364B8C  98 1F 02 E9 */	stb r0, 0x2e9(r31)
/* 80367C50 00364B90  48 00 00 58 */	b .L_80367CA8
.L_80367C54:
/* 80367C54 00364B94  C0 22 05 20 */	lfs f1, lbl_8051E880@sda21(r2)
/* 80367C58 00364B98  C0 1F 02 00 */	lfs f0, 0x200(r31)
/* 80367C5C 00364B9C  FC 01 00 00 */	fcmpu cr0, f1, f0
/* 80367C60 00364BA0  40 82 00 28 */	bne .L_80367C88
/* 80367C64 00364BA4  7F C3 F3 78 */	mr r3, r30
/* 80367C68 00364BA8  7F E4 FB 78 */	mr r4, r31
/* 80367C6C 00364BAC  81 9E 00 00 */	lwz r12, 0(r30)
/* 80367C70 00364BB0  38 A0 00 03 */	li r5, 3
/* 80367C74 00364BB4  38 C0 00 00 */	li r6, 0
/* 80367C78 00364BB8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80367C7C 00364BBC  7D 89 03 A6 */	mtctr r12
/* 80367C80 00364BC0  4E 80 04 21 */	bctrl 
/* 80367C84 00364BC4  48 00 00 24 */	b .L_80367CA8
.L_80367C88:
/* 80367C88 00364BC8  7F C3 F3 78 */	mr r3, r30
/* 80367C8C 00364BCC  7F E4 FB 78 */	mr r4, r31
/* 80367C90 00364BD0  81 9E 00 00 */	lwz r12, 0(r30)
/* 80367C94 00364BD4  38 A0 00 02 */	li r5, 2
/* 80367C98 00364BD8  38 C0 00 00 */	li r6, 0
/* 80367C9C 00364BDC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80367CA0 00364BE0  7D 89 03 A6 */	mtctr r12
/* 80367CA4 00364BE4  4E 80 04 21 */	bctrl 
.L_80367CA8:
/* 80367CA8 00364BE8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80367CAC 00364BEC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80367CB0 00364BF0  83 C1 00 08 */	lwz r30, 8(r1)
/* 80367CB4 00364BF4  7C 08 03 A6 */	mtlr r0
/* 80367CB8 00364BF8  38 21 00 10 */	addi r1, r1, 0x10
/* 80367CBC 00364BFC  4E 80 00 20 */	blr 

.global __ct__Q34Game6Jigumo11StateSearchFi
__ct__Q34Game6Jigumo11StateSearchFi:
/* 80367CC0 00364C00  3C A0 80 4B */	lis r5, __vt__Q24Game13EnemyFSMState@ha
/* 80367CC4 00364C04  3C C0 80 4E */	lis r6, __vt__Q34Game6Jigumo5State@ha
/* 80367CC8 00364C08  38 05 F9 A4 */	addi r0, r5, __vt__Q24Game13EnemyFSMState@l
/* 80367CCC 00364C0C  3C A0 80 4E */	lis r5, __vt__Q34Game6Jigumo11StateSearch@ha
/* 80367CD0 00364C10  90 03 00 00 */	stw r0, 0(r3)
/* 80367CD4 00364C14  38 E0 00 00 */	li r7, 0
/* 80367CD8 00364C18  38 C6 2A F4 */	addi r6, r6, __vt__Q34Game6Jigumo5State@l
/* 80367CDC 00364C1C  38 A5 29 5C */	addi r5, r5, __vt__Q34Game6Jigumo11StateSearch@l
/* 80367CE0 00364C20  90 83 00 04 */	stw r4, 4(r3)
/* 80367CE4 00364C24  38 02 05 A0 */	addi r0, r2, lbl_8051E900@sda21
/* 80367CE8 00364C28  90 E3 00 08 */	stw r7, 8(r3)
/* 80367CEC 00364C2C  90 C3 00 00 */	stw r6, 0(r3)
/* 80367CF0 00364C30  90 A3 00 00 */	stw r5, 0(r3)
/* 80367CF4 00364C34  90 03 00 0C */	stw r0, 0xc(r3)
/* 80367CF8 00364C38  4E 80 00 20 */	blr 

.global init__Q34Game6Jigumo11StateSearchFPQ24Game9EnemyBasePQ24Game8StateArg
init__Q34Game6Jigumo11StateSearchFPQ24Game9EnemyBasePQ24Game8StateArg:
/* 80367CFC 00364C3C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80367D00 00364C40  7C 08 02 A6 */	mflr r0
/* 80367D04 00364C44  38 A0 00 00 */	li r5, 0
/* 80367D08 00364C48  90 01 00 14 */	stw r0, 0x14(r1)
/* 80367D0C 00364C4C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80367D10 00364C50  7C 9F 23 78 */	mr r31, r4
/* 80367D14 00364C54  38 80 00 0D */	li r4, 0xd
/* 80367D18 00364C58  93 C1 00 08 */	stw r30, 8(r1)
/* 80367D1C 00364C5C  7C 7E 1B 78 */	mr r30, r3
/* 80367D20 00364C60  7F E3 FB 78 */	mr r3, r31
/* 80367D24 00364C64  4B D9 D2 E1 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 80367D28 00364C68  7F E3 FB 78 */	mr r3, r31
/* 80367D2C 00364C6C  38 80 00 00 */	li r4, 0
/* 80367D30 00364C70  81 9F 00 00 */	lwz r12, 0(r31)
/* 80367D34 00364C74  81 8C 00 A4 */	lwz r12, 0xa4(r12)
/* 80367D38 00364C78  7D 89 03 A6 */	mtctr r12
/* 80367D3C 00364C7C  4E 80 04 21 */	bctrl 
/* 80367D40 00364C80  7F E3 FB 78 */	mr r3, r31
/* 80367D44 00364C84  38 80 00 00 */	li r4, 0
/* 80367D48 00364C88  81 9F 00 00 */	lwz r12, 0(r31)
/* 80367D4C 00364C8C  81 8C 00 AC */	lwz r12, 0xac(r12)
/* 80367D50 00364C90  7D 89 03 A6 */	mtctr r12
/* 80367D54 00364C94  4E 80 04 21 */	bctrl 
/* 80367D58 00364C98  38 60 00 00 */	li r3, 0
/* 80367D5C 00364C9C  38 00 FF FF */	li r0, -1
/* 80367D60 00364CA0  90 7F 02 30 */	stw r3, 0x230(r31)
/* 80367D64 00364CA4  98 7F 02 E9 */	stb r3, 0x2e9(r31)
/* 80367D68 00364CA8  90 1E 00 10 */	stw r0, 0x10(r30)
/* 80367D6C 00364CAC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80367D70 00364CB0  83 C1 00 08 */	lwz r30, 8(r1)
/* 80367D74 00364CB4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80367D78 00364CB8  7C 08 03 A6 */	mtlr r0
/* 80367D7C 00364CBC  38 21 00 10 */	addi r1, r1, 0x10
/* 80367D80 00364CC0  4E 80 00 20 */	blr 

.global exec__Q34Game6Jigumo11StateSearchFPQ24Game9EnemyBase
exec__Q34Game6Jigumo11StateSearchFPQ24Game9EnemyBase:
/* 80367D84 00364CC4  94 21 FE D0 */	stwu r1, -0x130(r1)
/* 80367D88 00364CC8  7C 08 02 A6 */	mflr r0
/* 80367D8C 00364CCC  90 01 01 34 */	stw r0, 0x134(r1)
/* 80367D90 00364CD0  DB E1 01 20 */	stfd f31, 0x120(r1)
/* 80367D94 00364CD4  F3 E1 01 28 */	psq_st f31, 296(r1), 0, qr0
/* 80367D98 00364CD8  DB C1 01 10 */	stfd f30, 0x110(r1)
/* 80367D9C 00364CDC  F3 C1 01 18 */	psq_st f30, 280(r1), 0, qr0
/* 80367DA0 00364CE0  DB A1 01 00 */	stfd f29, 0x100(r1)
/* 80367DA4 00364CE4  F3 A1 01 08 */	psq_st f29, 264(r1), 0, qr0
/* 80367DA8 00364CE8  93 E1 00 FC */	stw r31, 0xfc(r1)
/* 80367DAC 00364CEC  93 C1 00 F8 */	stw r30, 0xf8(r1)
/* 80367DB0 00364CF0  93 A1 00 F4 */	stw r29, 0xf4(r1)
/* 80367DB4 00364CF4  93 81 00 F0 */	stw r28, 0xf0(r1)
/* 80367DB8 00364CF8  7C 9F 23 78 */	mr r31, r4
/* 80367DBC 00364CFC  7C 7E 1B 78 */	mr r30, r3
/* 80367DC0 00364D00  7F E3 FB 78 */	mr r3, r31
/* 80367DC4 00364D04  4B D9 F5 85 */	bl getCurrAnimIndex__Q24Game9EnemyBaseFv
/* 80367DC8 00364D08  80 9F 00 C0 */	lwz r4, 0xc0(r31)
/* 80367DCC 00364D0C  7C 7D 1B 78 */	mr r29, r3
/* 80367DD0 00364D10  7F E3 FB 78 */	mr r3, r31
/* 80367DD4 00364D14  C0 24 04 9C */	lfs f1, 0x49c(r4)
/* 80367DD8 00364D18  C0 44 04 4C */	lfs f2, 0x44c(r4)
/* 80367DDC 00364D1C  48 00 3C B9 */	bl getNearestPikiOrNavi__Q34Game6Jigumo3ObjFff
/* 80367DE0 00364D20  7C 7C 1B 79 */	or. r28, r3, r3
/* 80367DE4 00364D24  93 9F 02 30 */	stw r28, 0x230(r31)
/* 80367DE8 00364D28  41 82 02 34 */	beq .L_8036801C
/* 80367DEC 00364D2C  7F 84 E3 78 */	mr r4, r28
/* 80367DF0 00364D30  38 61 00 B0 */	addi r3, r1, 0xb0
/* 80367DF4 00364D34  81 9C 00 00 */	lwz r12, 0(r28)
/* 80367DF8 00364D38  81 8C 00 08 */	lwz r12, 8(r12)
/* 80367DFC 00364D3C  7D 89 03 A6 */	mtctr r12
/* 80367E00 00364D40  4E 80 04 21 */	bctrl 
/* 80367E04 00364D44  7F E4 FB 78 */	mr r4, r31
/* 80367E08 00364D48  C0 41 00 B0 */	lfs f2, 0xb0(r1)
/* 80367E0C 00364D4C  81 9F 00 00 */	lwz r12, 0(r31)
/* 80367E10 00364D50  38 61 00 BC */	addi r3, r1, 0xbc
/* 80367E14 00364D54  C0 21 00 B4 */	lfs f1, 0xb4(r1)
/* 80367E18 00364D58  C0 01 00 B8 */	lfs f0, 0xb8(r1)
/* 80367E1C 00364D5C  81 8C 00 08 */	lwz r12, 8(r12)
/* 80367E20 00364D60  D0 41 00 98 */	stfs f2, 0x98(r1)
/* 80367E24 00364D64  D0 21 00 9C */	stfs f1, 0x9c(r1)
/* 80367E28 00364D68  D0 01 00 A0 */	stfs f0, 0xa0(r1)
/* 80367E2C 00364D6C  7D 89 03 A6 */	mtctr r12
/* 80367E30 00364D70  4E 80 04 21 */	bctrl 
/* 80367E34 00364D74  C0 A1 00 BC */	lfs f5, 0xbc(r1)
/* 80367E38 00364D78  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 80367E3C 00364D7C  C0 61 00 C4 */	lfs f3, 0xc4(r1)
/* 80367E40 00364D80  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 80367E44 00364D84  C0 21 00 98 */	lfs f1, 0x98(r1)
/* 80367E48 00364D88  C0 01 00 A0 */	lfs f0, 0xa0(r1)
/* 80367E4C 00364D8C  C0 81 00 C0 */	lfs f4, 0xc0(r1)
/* 80367E50 00364D90  EC 21 28 28 */	fsubs f1, f1, f5
/* 80367E54 00364D94  EC 40 18 28 */	fsubs f2, f0, f3
/* 80367E58 00364D98  D0 A1 00 A4 */	stfs f5, 0xa4(r1)
/* 80367E5C 00364D9C  D0 81 00 A8 */	stfs f4, 0xa8(r1)
/* 80367E60 00364DA0  D0 61 00 AC */	stfs f3, 0xac(r1)
/* 80367E64 00364DA4  4B CC D2 A5 */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 80367E68 00364DA8  48 0A 9D 69 */	bl roundAng__Ff
/* 80367E6C 00364DAC  81 9F 00 00 */	lwz r12, 0(r31)
/* 80367E70 00364DB0  FF C0 08 90 */	fmr f30, f1
/* 80367E74 00364DB4  7F E3 FB 78 */	mr r3, r31
/* 80367E78 00364DB8  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 80367E7C 00364DBC  7D 89 03 A6 */	mtctr r12
/* 80367E80 00364DC0  4E 80 04 21 */	bctrl 
/* 80367E84 00364DC4  FC 40 08 90 */	fmr f2, f1
/* 80367E88 00364DC8  FC 20 F0 90 */	fmr f1, f30
/* 80367E8C 00364DCC  48 0A 9D 71 */	bl angDist__Fff
/* 80367E90 00364DD0  FC 20 0A 10 */	fabs f1, f1
/* 80367E94 00364DD4  C0 02 05 A8 */	lfs f0, lbl_8051E908@sda21(r2)
/* 80367E98 00364DD8  FC 20 08 18 */	frsp f1, f1
/* 80367E9C 00364DDC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80367EA0 00364DE0  40 80 00 48 */	bge .L_80367EE8
/* 80367EA4 00364DE4  7F E3 FB 78 */	mr r3, r31
/* 80367EA8 00364DE8  4B D9 D3 F9 */	bl finishMotion__Q24Game9EnemyBaseFv
/* 80367EAC 00364DEC  38 00 FF FF */	li r0, -1
/* 80367EB0 00364DF0  7F 84 E3 78 */	mr r4, r28
/* 80367EB4 00364DF4  90 1E 00 10 */	stw r0, 0x10(r30)
/* 80367EB8 00364DF8  38 61 00 E0 */	addi r3, r1, 0xe0
/* 80367EBC 00364DFC  81 9C 00 00 */	lwz r12, 0(r28)
/* 80367EC0 00364E00  81 8C 00 08 */	lwz r12, 8(r12)
/* 80367EC4 00364E04  7D 89 03 A6 */	mtctr r12
/* 80367EC8 00364E08  4E 80 04 21 */	bctrl 
/* 80367ECC 00364E0C  C0 21 00 E4 */	lfs f1, 0xe4(r1)
/* 80367ED0 00364E10  C0 41 00 E8 */	lfs f2, 0xe8(r1)
/* 80367ED4 00364E14  C0 01 00 E0 */	lfs f0, 0xe0(r1)
/* 80367ED8 00364E18  D0 1F 02 C8 */	stfs f0, 0x2c8(r31)
/* 80367EDC 00364E1C  D0 3F 02 CC */	stfs f1, 0x2cc(r31)
/* 80367EE0 00364E20  D0 5F 02 D0 */	stfs f2, 0x2d0(r31)
/* 80367EE4 00364E24  48 00 03 84 */	b .L_80368268
.L_80367EE8:
/* 80367EE8 00364E28  2C 1D 00 0F */	cmpwi r29, 0xf
/* 80367EEC 00364E2C  40 82 00 18 */	bne .L_80367F04
/* 80367EF0 00364E30  7F E3 FB 78 */	mr r3, r31
/* 80367EF4 00364E34  4B D9 D3 AD */	bl finishMotion__Q24Game9EnemyBaseFv
/* 80367EF8 00364E38  38 00 00 0D */	li r0, 0xd
/* 80367EFC 00364E3C  90 1E 00 10 */	stw r0, 0x10(r30)
/* 80367F00 00364E40  48 00 03 68 */	b .L_80368268
.L_80367F04:
/* 80367F04 00364E44  7F 84 E3 78 */	mr r4, r28
/* 80367F08 00364E48  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 80367F0C 00364E4C  81 9C 00 00 */	lwz r12, 0(r28)
/* 80367F10 00364E50  38 61 00 50 */	addi r3, r1, 0x50
/* 80367F14 00364E54  C3 C5 03 34 */	lfs f30, 0x334(r5)
/* 80367F18 00364E58  81 8C 00 08 */	lwz r12, 8(r12)
/* 80367F1C 00364E5C  C3 E5 03 0C */	lfs f31, 0x30c(r5)
/* 80367F20 00364E60  7D 89 03 A6 */	mtctr r12
/* 80367F24 00364E64  4E 80 04 21 */	bctrl 
/* 80367F28 00364E68  7F E4 FB 78 */	mr r4, r31
/* 80367F2C 00364E6C  C0 41 00 50 */	lfs f2, 0x50(r1)
/* 80367F30 00364E70  81 9F 00 00 */	lwz r12, 0(r31)
/* 80367F34 00364E74  38 61 00 5C */	addi r3, r1, 0x5c
/* 80367F38 00364E78  C0 21 00 54 */	lfs f1, 0x54(r1)
/* 80367F3C 00364E7C  C0 01 00 58 */	lfs f0, 0x58(r1)
/* 80367F40 00364E80  81 8C 00 08 */	lwz r12, 8(r12)
/* 80367F44 00364E84  D0 41 00 38 */	stfs f2, 0x38(r1)
/* 80367F48 00364E88  D0 21 00 3C */	stfs f1, 0x3c(r1)
/* 80367F4C 00364E8C  D0 01 00 40 */	stfs f0, 0x40(r1)
/* 80367F50 00364E90  7D 89 03 A6 */	mtctr r12
/* 80367F54 00364E94  4E 80 04 21 */	bctrl 
/* 80367F58 00364E98  C0 A1 00 5C */	lfs f5, 0x5c(r1)
/* 80367F5C 00364E9C  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 80367F60 00364EA0  C0 61 00 64 */	lfs f3, 0x64(r1)
/* 80367F64 00364EA4  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 80367F68 00364EA8  C0 21 00 38 */	lfs f1, 0x38(r1)
/* 80367F6C 00364EAC  C0 01 00 40 */	lfs f0, 0x40(r1)
/* 80367F70 00364EB0  C0 81 00 60 */	lfs f4, 0x60(r1)
/* 80367F74 00364EB4  EC 21 28 28 */	fsubs f1, f1, f5
/* 80367F78 00364EB8  EC 40 18 28 */	fsubs f2, f0, f3
/* 80367F7C 00364EBC  D0 A1 00 44 */	stfs f5, 0x44(r1)
/* 80367F80 00364EC0  D0 81 00 48 */	stfs f4, 0x48(r1)
/* 80367F84 00364EC4  D0 61 00 4C */	stfs f3, 0x4c(r1)
/* 80367F88 00364EC8  4B CC D1 81 */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 80367F8C 00364ECC  48 0A 9C 45 */	bl roundAng__Ff
/* 80367F90 00364ED0  81 9F 00 00 */	lwz r12, 0(r31)
/* 80367F94 00364ED4  FF A0 08 90 */	fmr f29, f1
/* 80367F98 00364ED8  7F E3 FB 78 */	mr r3, r31
/* 80367F9C 00364EDC  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 80367FA0 00364EE0  7D 89 03 A6 */	mtctr r12
/* 80367FA4 00364EE4  4E 80 04 21 */	bctrl 
/* 80367FA8 00364EE8  FC 40 08 90 */	fmr f2, f1
/* 80367FAC 00364EEC  FC 20 E8 90 */	fmr f1, f29
/* 80367FB0 00364EF0  48 0A 9C 4D */	bl angDist__Fff
/* 80367FB4 00364EF4  EF E1 07 F2 */	fmuls f31, f1, f31
/* 80367FB8 00364EF8  C0 02 05 5C */	lfs f0, lbl_8051E8BC@sda21(r2)
/* 80367FBC 00364EFC  C0 22 05 48 */	lfs f1, lbl_8051E8A8@sda21(r2)
/* 80367FC0 00364F00  EC 00 07 B2 */	fmuls f0, f0, f30
/* 80367FC4 00364F04  FC 40 FA 10 */	fabs f2, f31
/* 80367FC8 00364F08  EC 21 00 32 */	fmuls f1, f1, f0
/* 80367FCC 00364F0C  FC 00 10 18 */	frsp f0, f2
/* 80367FD0 00364F10  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 80367FD4 00364F14  40 81 00 1C */	ble .L_80367FF0
/* 80367FD8 00364F18  C0 02 05 20 */	lfs f0, lbl_8051E880@sda21(r2)
/* 80367FDC 00364F1C  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 80367FE0 00364F20  40 81 00 0C */	ble .L_80367FEC
/* 80367FE4 00364F24  FF E0 08 90 */	fmr f31, f1
/* 80367FE8 00364F28  48 00 00 08 */	b .L_80367FF0
.L_80367FEC:
/* 80367FEC 00364F2C  FF E0 08 50 */	fneg f31, f1
.L_80367FF0:
/* 80367FF0 00364F30  7F E3 FB 78 */	mr r3, r31
/* 80367FF4 00364F34  81 9F 00 00 */	lwz r12, 0(r31)
/* 80367FF8 00364F38  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 80367FFC 00364F3C  7D 89 03 A6 */	mtctr r12
/* 80368000 00364F40  4E 80 04 21 */	bctrl 
/* 80368004 00364F44  EC 3F 08 2A */	fadds f1, f31, f1
/* 80368008 00364F48  48 0A 9B C9 */	bl roundAng__Ff
/* 8036800C 00364F4C  D0 3F 01 FC */	stfs f1, 0x1fc(r31)
/* 80368010 00364F50  C0 1F 01 FC */	lfs f0, 0x1fc(r31)
/* 80368014 00364F54  D0 1F 01 A8 */	stfs f0, 0x1a8(r31)
/* 80368018 00364F58  48 00 02 50 */	b .L_80368268
.L_8036801C:
/* 8036801C 00364F5C  80 9F 00 C0 */	lwz r4, 0xc0(r31)
/* 80368020 00364F60  7F E3 FB 78 */	mr r3, r31
/* 80368024 00364F64  C0 24 04 24 */	lfs f1, 0x424(r4)
/* 80368028 00364F68  C0 44 03 D4 */	lfs f2, 0x3d4(r4)
/* 8036802C 00364F6C  48 00 3A 69 */	bl getNearestPikiOrNavi__Q34Game6Jigumo3ObjFff
/* 80368030 00364F70  7C 7C 1B 79 */	or. r28, r3, r3
/* 80368034 00364F74  41 82 02 14 */	beq .L_80368248
/* 80368038 00364F78  7F 84 E3 78 */	mr r4, r28
/* 8036803C 00364F7C  38 61 00 80 */	addi r3, r1, 0x80
/* 80368040 00364F80  81 9C 00 00 */	lwz r12, 0(r28)
/* 80368044 00364F84  81 8C 00 08 */	lwz r12, 8(r12)
/* 80368048 00364F88  7D 89 03 A6 */	mtctr r12
/* 8036804C 00364F8C  4E 80 04 21 */	bctrl 
/* 80368050 00364F90  7F E4 FB 78 */	mr r4, r31
/* 80368054 00364F94  C0 41 00 80 */	lfs f2, 0x80(r1)
/* 80368058 00364F98  81 9F 00 00 */	lwz r12, 0(r31)
/* 8036805C 00364F9C  38 61 00 8C */	addi r3, r1, 0x8c
/* 80368060 00364FA0  C0 21 00 84 */	lfs f1, 0x84(r1)
/* 80368064 00364FA4  C0 01 00 88 */	lfs f0, 0x88(r1)
/* 80368068 00364FA8  81 8C 00 08 */	lwz r12, 8(r12)
/* 8036806C 00364FAC  D0 41 00 68 */	stfs f2, 0x68(r1)
/* 80368070 00364FB0  D0 21 00 6C */	stfs f1, 0x6c(r1)
/* 80368074 00364FB4  D0 01 00 70 */	stfs f0, 0x70(r1)
/* 80368078 00364FB8  7D 89 03 A6 */	mtctr r12
/* 8036807C 00364FBC  4E 80 04 21 */	bctrl 
/* 80368080 00364FC0  C0 A1 00 8C */	lfs f5, 0x8c(r1)
/* 80368084 00364FC4  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 80368088 00364FC8  C0 61 00 94 */	lfs f3, 0x94(r1)
/* 8036808C 00364FCC  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 80368090 00364FD0  C0 21 00 68 */	lfs f1, 0x68(r1)
/* 80368094 00364FD4  C0 01 00 70 */	lfs f0, 0x70(r1)
/* 80368098 00364FD8  C0 81 00 90 */	lfs f4, 0x90(r1)
/* 8036809C 00364FDC  EC 21 28 28 */	fsubs f1, f1, f5
/* 803680A0 00364FE0  EC 40 18 28 */	fsubs f2, f0, f3
/* 803680A4 00364FE4  D0 A1 00 74 */	stfs f5, 0x74(r1)
/* 803680A8 00364FE8  D0 81 00 78 */	stfs f4, 0x78(r1)
/* 803680AC 00364FEC  D0 61 00 7C */	stfs f3, 0x7c(r1)
/* 803680B0 00364FF0  4B CC D0 59 */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 803680B4 00364FF4  48 0A 9B 1D */	bl roundAng__Ff
/* 803680B8 00364FF8  81 9F 00 00 */	lwz r12, 0(r31)
/* 803680BC 00364FFC  FF A0 08 90 */	fmr f29, f1
/* 803680C0 00365000  7F E3 FB 78 */	mr r3, r31
/* 803680C4 00365004  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 803680C8 00365008  7D 89 03 A6 */	mtctr r12
/* 803680CC 0036500C  4E 80 04 21 */	bctrl 
/* 803680D0 00365010  FC 40 08 90 */	fmr f2, f1
/* 803680D4 00365014  FC 20 E8 90 */	fmr f1, f29
/* 803680D8 00365018  48 0A 9B 25 */	bl angDist__Fff
/* 803680DC 0036501C  FC 20 0A 10 */	fabs f1, f1
/* 803680E0 00365020  C0 02 05 98 */	lfs f0, lbl_8051E8F8@sda21(r2)
/* 803680E4 00365024  FC 20 08 18 */	frsp f1, f1
/* 803680E8 00365028  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 803680EC 0036502C  40 80 00 20 */	bge .L_8036810C
/* 803680F0 00365030  2C 1D 00 0D */	cmpwi r29, 0xd
/* 803680F4 00365034  40 82 01 74 */	bne .L_80368268
/* 803680F8 00365038  38 00 00 0F */	li r0, 0xf
/* 803680FC 0036503C  7F E3 FB 78 */	mr r3, r31
/* 80368100 00365040  90 1E 00 10 */	stw r0, 0x10(r30)
/* 80368104 00365044  4B D9 D1 9D */	bl finishMotion__Q24Game9EnemyBaseFv
/* 80368108 00365048  48 00 01 60 */	b .L_80368268
.L_8036810C:
/* 8036810C 0036504C  7F E3 FB 78 */	mr r3, r31
/* 80368110 00365050  4B D9 F2 39 */	bl getCurrAnimIndex__Q24Game9EnemyBaseFv
/* 80368114 00365054  2C 03 00 0F */	cmpwi r3, 0xf
/* 80368118 00365058  40 82 00 18 */	bne .L_80368130
/* 8036811C 0036505C  38 00 00 0D */	li r0, 0xd
/* 80368120 00365060  7F E3 FB 78 */	mr r3, r31
/* 80368124 00365064  90 1E 00 10 */	stw r0, 0x10(r30)
/* 80368128 00365068  4B D9 D1 79 */	bl finishMotion__Q24Game9EnemyBaseFv
/* 8036812C 0036506C  48 00 01 3C */	b .L_80368268
.L_80368130:
/* 80368130 00365070  7F 84 E3 78 */	mr r4, r28
/* 80368134 00365074  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 80368138 00365078  81 9C 00 00 */	lwz r12, 0(r28)
/* 8036813C 0036507C  38 61 00 20 */	addi r3, r1, 0x20
/* 80368140 00365080  C3 E5 03 34 */	lfs f31, 0x334(r5)
/* 80368144 00365084  81 8C 00 08 */	lwz r12, 8(r12)
/* 80368148 00365088  C3 C5 03 0C */	lfs f30, 0x30c(r5)
/* 8036814C 0036508C  7D 89 03 A6 */	mtctr r12
/* 80368150 00365090  4E 80 04 21 */	bctrl 
/* 80368154 00365094  7F E4 FB 78 */	mr r4, r31
/* 80368158 00365098  C0 41 00 20 */	lfs f2, 0x20(r1)
/* 8036815C 0036509C  81 9F 00 00 */	lwz r12, 0(r31)
/* 80368160 003650A0  38 61 00 2C */	addi r3, r1, 0x2c
/* 80368164 003650A4  C0 21 00 24 */	lfs f1, 0x24(r1)
/* 80368168 003650A8  C0 01 00 28 */	lfs f0, 0x28(r1)
/* 8036816C 003650AC  81 8C 00 08 */	lwz r12, 8(r12)
/* 80368170 003650B0  D0 41 00 08 */	stfs f2, 8(r1)
/* 80368174 003650B4  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 80368178 003650B8  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 8036817C 003650BC  7D 89 03 A6 */	mtctr r12
/* 80368180 003650C0  4E 80 04 21 */	bctrl 
/* 80368184 003650C4  C0 A1 00 2C */	lfs f5, 0x2c(r1)
/* 80368188 003650C8  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 8036818C 003650CC  C0 61 00 34 */	lfs f3, 0x34(r1)
/* 80368190 003650D0  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 80368194 003650D4  C0 21 00 08 */	lfs f1, 8(r1)
/* 80368198 003650D8  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 8036819C 003650DC  C0 81 00 30 */	lfs f4, 0x30(r1)
/* 803681A0 003650E0  EC 21 28 28 */	fsubs f1, f1, f5
/* 803681A4 003650E4  EC 40 18 28 */	fsubs f2, f0, f3
/* 803681A8 003650E8  D0 A1 00 14 */	stfs f5, 0x14(r1)
/* 803681AC 003650EC  D0 81 00 18 */	stfs f4, 0x18(r1)
/* 803681B0 003650F0  D0 61 00 1C */	stfs f3, 0x1c(r1)
/* 803681B4 003650F4  4B CC CF 55 */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 803681B8 003650F8  48 0A 9A 19 */	bl roundAng__Ff
/* 803681BC 003650FC  81 9F 00 00 */	lwz r12, 0(r31)
/* 803681C0 00365100  FF A0 08 90 */	fmr f29, f1
/* 803681C4 00365104  7F E3 FB 78 */	mr r3, r31
/* 803681C8 00365108  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 803681CC 0036510C  7D 89 03 A6 */	mtctr r12
/* 803681D0 00365110  4E 80 04 21 */	bctrl 
/* 803681D4 00365114  FC 40 08 90 */	fmr f2, f1
/* 803681D8 00365118  FC 20 E8 90 */	fmr f1, f29
/* 803681DC 0036511C  48 0A 9A 21 */	bl angDist__Fff
/* 803681E0 00365120  EF C1 07 B2 */	fmuls f30, f1, f30
/* 803681E4 00365124  C0 02 05 5C */	lfs f0, lbl_8051E8BC@sda21(r2)
/* 803681E8 00365128  C0 22 05 48 */	lfs f1, lbl_8051E8A8@sda21(r2)
/* 803681EC 0036512C  EC 00 07 F2 */	fmuls f0, f0, f31
/* 803681F0 00365130  FC 40 F2 10 */	fabs f2, f30
/* 803681F4 00365134  EC 21 00 32 */	fmuls f1, f1, f0
/* 803681F8 00365138  FC 00 10 18 */	frsp f0, f2
/* 803681FC 0036513C  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 80368200 00365140  40 81 00 1C */	ble .L_8036821C
/* 80368204 00365144  C0 02 05 20 */	lfs f0, lbl_8051E880@sda21(r2)
/* 80368208 00365148  FC 1E 00 40 */	fcmpo cr0, f30, f0
/* 8036820C 0036514C  40 81 00 0C */	ble .L_80368218
/* 80368210 00365150  FF C0 08 90 */	fmr f30, f1
/* 80368214 00365154  48 00 00 08 */	b .L_8036821C
.L_80368218:
/* 80368218 00365158  FF C0 08 50 */	fneg f30, f1
.L_8036821C:
/* 8036821C 0036515C  7F E3 FB 78 */	mr r3, r31
/* 80368220 00365160  81 9F 00 00 */	lwz r12, 0(r31)
/* 80368224 00365164  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 80368228 00365168  7D 89 03 A6 */	mtctr r12
/* 8036822C 0036516C  4E 80 04 21 */	bctrl 
/* 80368230 00365170  EC 3E 08 2A */	fadds f1, f30, f1
/* 80368234 00365174  48 0A 99 9D */	bl roundAng__Ff
/* 80368238 00365178  D0 3F 01 FC */	stfs f1, 0x1fc(r31)
/* 8036823C 0036517C  C0 1F 01 FC */	lfs f0, 0x1fc(r31)
/* 80368240 00365180  D0 1F 01 A8 */	stfs f0, 0x1a8(r31)
/* 80368244 00365184  48 00 00 24 */	b .L_80368268
.L_80368248:
/* 80368248 00365188  7F C3 F3 78 */	mr r3, r30
/* 8036824C 0036518C  7F E4 FB 78 */	mr r4, r31
/* 80368250 00365190  81 9E 00 00 */	lwz r12, 0(r30)
/* 80368254 00365194  38 A0 00 00 */	li r5, 0
/* 80368258 00365198  38 C0 00 00 */	li r6, 0
/* 8036825C 0036519C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80368260 003651A0  7D 89 03 A6 */	mtctr r12
/* 80368264 003651A4  4E 80 04 21 */	bctrl 
.L_80368268:
/* 80368268 003651A8  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 8036826C 003651AC  88 03 00 24 */	lbz r0, 0x24(r3)
/* 80368270 003651B0  28 00 00 00 */	cmplwi r0, 0
/* 80368274 003651B4  41 82 00 EC */	beq .L_80368360
/* 80368278 003651B8  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 8036827C 003651BC  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 80368280 003651C0  40 82 00 E0 */	bne .L_80368360
/* 80368284 003651C4  80 9E 00 10 */	lwz r4, 0x10(r30)
/* 80368288 003651C8  2C 04 00 00 */	cmpwi r4, 0
/* 8036828C 003651CC  40 80 00 C8 */	bge .L_80368354
/* 80368290 003651D0  7F E4 FB 78 */	mr r4, r31
/* 80368294 003651D4  38 61 00 D4 */	addi r3, r1, 0xd4
/* 80368298 003651D8  81 9F 00 00 */	lwz r12, 0(r31)
/* 8036829C 003651DC  81 8C 00 08 */	lwz r12, 8(r12)
/* 803682A0 003651E0  7D 89 03 A6 */	mtctr r12
/* 803682A4 003651E4  4E 80 04 21 */	bctrl 
/* 803682A8 003651E8  7F E4 FB 78 */	mr r4, r31
/* 803682AC 003651EC  38 61 00 C8 */	addi r3, r1, 0xc8
/* 803682B0 003651F0  81 9F 00 00 */	lwz r12, 0(r31)
/* 803682B4 003651F4  C3 A1 00 D4 */	lfs f29, 0xd4(r1)
/* 803682B8 003651F8  81 8C 01 98 */	lwz r12, 0x198(r12)
/* 803682BC 003651FC  C3 C1 00 D8 */	lfs f30, 0xd8(r1)
/* 803682C0 00365200  C3 E1 00 DC */	lfs f31, 0xdc(r1)
/* 803682C4 00365204  7D 89 03 A6 */	mtctr r12
/* 803682C8 00365208  4E 80 04 21 */	bctrl 
/* 803682CC 0036520C  C0 01 00 CC */	lfs f0, 0xcc(r1)
/* 803682D0 00365210  C0 21 00 C8 */	lfs f1, 0xc8(r1)
/* 803682D4 00365214  EC 1E 00 28 */	fsubs f0, f30, f0
/* 803682D8 00365218  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 803682DC 0036521C  C0 61 00 D0 */	lfs f3, 0xd0(r1)
/* 803682E0 00365220  EC 9D 08 28 */	fsubs f4, f29, f1
/* 803682E4 00365224  C0 43 05 B4 */	lfs f2, 0x5b4(r3)
/* 803682E8 00365228  EC 00 00 32 */	fmuls f0, f0, f0
/* 803682EC 0036522C  C0 3F 01 F8 */	lfs f1, 0x1f8(r31)
/* 803682F0 00365230  EC 7F 18 28 */	fsubs f3, f31, f3
/* 803682F4 00365234  EC 22 00 72 */	fmuls f1, f2, f1
/* 803682F8 00365238  EC 04 01 3A */	fmadds f0, f4, f4, f0
/* 803682FC 0036523C  EC 21 00 72 */	fmuls f1, f1, f1
/* 80368300 00365240  EC 03 00 FA */	fmadds f0, f3, f3, f0
/* 80368304 00365244  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 80368308 00365248  40 80 00 28 */	bge .L_80368330
/* 8036830C 0036524C  7F C3 F3 78 */	mr r3, r30
/* 80368310 00365250  7F E4 FB 78 */	mr r4, r31
/* 80368314 00365254  81 9E 00 00 */	lwz r12, 0(r30)
/* 80368318 00365258  38 A0 00 0B */	li r5, 0xb
/* 8036831C 0036525C  38 C0 00 00 */	li r6, 0
/* 80368320 00365260  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80368324 00365264  7D 89 03 A6 */	mtctr r12
/* 80368328 00365268  4E 80 04 21 */	bctrl 
/* 8036832C 0036526C  48 00 00 34 */	b .L_80368360
.L_80368330:
/* 80368330 00365270  7F C3 F3 78 */	mr r3, r30
/* 80368334 00365274  7F E4 FB 78 */	mr r4, r31
/* 80368338 00365278  81 9E 00 00 */	lwz r12, 0(r30)
/* 8036833C 0036527C  38 A0 00 04 */	li r5, 4
/* 80368340 00365280  38 C0 00 00 */	li r6, 0
/* 80368344 00365284  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80368348 00365288  7D 89 03 A6 */	mtctr r12
/* 8036834C 0036528C  4E 80 04 21 */	bctrl 
/* 80368350 00365290  48 00 00 10 */	b .L_80368360
.L_80368354:
/* 80368354 00365294  7F E3 FB 78 */	mr r3, r31
/* 80368358 00365298  38 A0 00 00 */	li r5, 0
/* 8036835C 0036529C  4B D9 CC A9 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
.L_80368360:
/* 80368360 003652A0  E3 E1 01 28 */	psq_l f31, 296(r1), 0, qr0
/* 80368364 003652A4  CB E1 01 20 */	lfd f31, 0x120(r1)
/* 80368368 003652A8  E3 C1 01 18 */	psq_l f30, 280(r1), 0, qr0
/* 8036836C 003652AC  CB C1 01 10 */	lfd f30, 0x110(r1)
/* 80368370 003652B0  E3 A1 01 08 */	psq_l f29, 264(r1), 0, qr0
/* 80368374 003652B4  CB A1 01 00 */	lfd f29, 0x100(r1)
/* 80368378 003652B8  83 E1 00 FC */	lwz r31, 0xfc(r1)
/* 8036837C 003652BC  83 C1 00 F8 */	lwz r30, 0xf8(r1)
/* 80368380 003652C0  83 A1 00 F4 */	lwz r29, 0xf4(r1)
/* 80368384 003652C4  80 01 01 34 */	lwz r0, 0x134(r1)
/* 80368388 003652C8  83 81 00 F0 */	lwz r28, 0xf0(r1)
/* 8036838C 003652CC  7C 08 03 A6 */	mtlr r0
/* 80368390 003652D0  38 21 01 30 */	addi r1, r1, 0x130
/* 80368394 003652D4  4E 80 00 20 */	blr 

.global __ct__Q34Game6Jigumo12StateSAttackFi
__ct__Q34Game6Jigumo12StateSAttackFi:
/* 80368398 003652D8  3C A0 80 4B */	lis r5, __vt__Q24Game13EnemyFSMState@ha
/* 8036839C 003652DC  3C C0 80 4E */	lis r6, __vt__Q34Game6Jigumo5State@ha
/* 803683A0 003652E0  38 05 F9 A4 */	addi r0, r5, __vt__Q24Game13EnemyFSMState@l
/* 803683A4 003652E4  3C A0 80 4E */	lis r5, __vt__Q34Game6Jigumo12StateSAttack@ha
/* 803683A8 003652E8  90 03 00 00 */	stw r0, 0(r3)
/* 803683AC 003652EC  38 E0 00 00 */	li r7, 0
/* 803683B0 003652F0  38 C6 2A F4 */	addi r6, r6, __vt__Q34Game6Jigumo5State@l
/* 803683B4 003652F4  38 A5 29 38 */	addi r5, r5, __vt__Q34Game6Jigumo12StateSAttack@l
/* 803683B8 003652F8  90 83 00 04 */	stw r4, 4(r3)
/* 803683BC 003652FC  38 02 05 AC */	addi r0, r2, lbl_8051E90C@sda21
/* 803683C0 00365300  90 E3 00 08 */	stw r7, 8(r3)
/* 803683C4 00365304  90 C3 00 00 */	stw r6, 0(r3)
/* 803683C8 00365308  90 A3 00 00 */	stw r5, 0(r3)
/* 803683CC 0036530C  90 03 00 0C */	stw r0, 0xc(r3)
/* 803683D0 00365310  4E 80 00 20 */	blr 

.global init__Q34Game6Jigumo12StateSAttackFPQ24Game9EnemyBasePQ24Game8StateArg
init__Q34Game6Jigumo12StateSAttackFPQ24Game9EnemyBasePQ24Game8StateArg:
/* 803683D4 00365314  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803683D8 00365318  7C 08 02 A6 */	mflr r0
/* 803683DC 0036531C  38 A0 00 00 */	li r5, 0
/* 803683E0 00365320  90 01 00 14 */	stw r0, 0x14(r1)
/* 803683E4 00365324  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803683E8 00365328  7C 9F 23 78 */	mr r31, r4
/* 803683EC 0036532C  38 80 00 0B */	li r4, 0xb
/* 803683F0 00365330  93 C1 00 08 */	stw r30, 8(r1)
/* 803683F4 00365334  7C 7E 1B 78 */	mr r30, r3
/* 803683F8 00365338  7F E3 FB 78 */	mr r3, r31
/* 803683FC 0036533C  4B D9 CC 09 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 80368400 00365340  38 00 00 00 */	li r0, 0
/* 80368404 00365344  7F E3 FB 78 */	mr r3, r31
/* 80368408 00365348  98 1E 00 10 */	stb r0, 0x10(r30)
/* 8036840C 0036534C  98 1E 00 11 */	stb r0, 0x11(r30)
/* 80368410 00365350  4B D9 95 BD */	bl setEmotionExcitement__Q24Game9EnemyBaseFv
/* 80368414 00365354  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80368418 00365358  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8036841C 0036535C  83 C1 00 08 */	lwz r30, 8(r1)
/* 80368420 00365360  7C 08 03 A6 */	mtlr r0
/* 80368424 00365364  38 21 00 10 */	addi r1, r1, 0x10
/* 80368428 00365368  4E 80 00 20 */	blr 

.global exec__Q34Game6Jigumo12StateSAttackFPQ24Game9EnemyBase
exec__Q34Game6Jigumo12StateSAttackFPQ24Game9EnemyBase:
/* 8036842C 0036536C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80368430 00365370  7C 08 02 A6 */	mflr r0
/* 80368434 00365374  90 01 00 14 */	stw r0, 0x14(r1)
/* 80368438 00365378  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8036843C 0036537C  7C 9F 23 78 */	mr r31, r4
/* 80368440 00365380  93 C1 00 08 */	stw r30, 8(r1)
/* 80368444 00365384  7C 7E 1B 78 */	mr r30, r3
/* 80368448 00365388  7F E3 FB 78 */	mr r3, r31
/* 8036844C 0036538C  4B D9 CE 21 */	bl getMotionFrame__Q24Game9EnemyBaseFv
/* 80368450 00365390  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 80368454 00365394  C0 03 09 24 */	lfs f0, 0x924(r3)
/* 80368458 00365398  FC 00 08 00 */	fcmpu cr0, f0, f1
/* 8036845C 0036539C  40 82 00 3C */	bne .L_80368498
/* 80368460 003653A0  38 00 00 01 */	li r0, 1
/* 80368464 003653A4  7F E3 FB 78 */	mr r3, r31
/* 80368468 003653A8  98 1E 00 11 */	stb r0, 0x11(r30)
/* 8036846C 003653AC  38 80 00 01 */	li r4, 1
/* 80368470 003653B0  81 9F 00 00 */	lwz r12, 0(r31)
/* 80368474 003653B4  81 8C 00 A4 */	lwz r12, 0xa4(r12)
/* 80368478 003653B8  7D 89 03 A6 */	mtctr r12
/* 8036847C 003653BC  4E 80 04 21 */	bctrl 
/* 80368480 003653C0  7F E3 FB 78 */	mr r3, r31
/* 80368484 003653C4  38 80 00 01 */	li r4, 1
/* 80368488 003653C8  81 9F 00 00 */	lwz r12, 0(r31)
/* 8036848C 003653CC  81 8C 00 AC */	lwz r12, 0xac(r12)
/* 80368490 003653D0  7D 89 03 A6 */	mtctr r12
/* 80368494 003653D4  4E 80 04 21 */	bctrl 
.L_80368498:
/* 80368498 003653D8  88 1E 00 11 */	lbz r0, 0x11(r30)
/* 8036849C 003653DC  28 00 00 00 */	cmplwi r0, 0
/* 803684A0 003653E0  41 82 00 48 */	beq .L_803684E8
/* 803684A4 003653E4  7F E3 FB 78 */	mr r3, r31
/* 803684A8 003653E8  38 80 00 00 */	li r4, 0
/* 803684AC 003653EC  4B DA B6 89 */	bl "eatPikmin__Q24Game9EnemyFuncFPQ24Game9EnemyBaseP23Condition<Q24Game4Piki>"
/* 803684B0 003653F0  2C 03 00 00 */	cmpwi r3, 0
/* 803684B4 003653F4  41 82 00 0C */	beq .L_803684C0
/* 803684B8 003653F8  38 00 00 01 */	li r0, 1
/* 803684BC 003653FC  98 1E 00 10 */	stb r0, 0x10(r30)
.L_803684C0:
/* 803684C0 00365400  C0 22 05 B4 */	lfs f1, lbl_8051E914@sda21(r2)
/* 803684C4 00365404  7F E3 FB 78 */	mr r3, r31
/* 803684C8 00365408  80 DF 00 C0 */	lwz r6, 0xc0(r31)
/* 803684CC 0036540C  38 80 00 00 */	li r4, 0
/* 803684D0 00365410  C0 1F 01 F8 */	lfs f0, 0x1f8(r31)
/* 803684D4 00365414  38 A0 00 00 */	li r5, 0
/* 803684D8 00365418  C0 46 05 DC */	lfs f2, 0x5dc(r6)
/* 803684DC 0036541C  EC 21 00 32 */	fmuls f1, f1, f0
/* 803684E0 00365420  C0 66 06 04 */	lfs f3, 0x604(r6)
/* 803684E4 00365424  4B DA BD 7D */	bl "attackNavi__Q24Game9EnemyFuncFPQ24Game8CreaturefffP8CollPartP23Condition<Q24Game4Navi>"
.L_803684E8:
/* 803684E8 00365428  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 803684EC 0036542C  88 03 00 24 */	lbz r0, 0x24(r3)
/* 803684F0 00365430  28 00 00 00 */	cmplwi r0, 0
/* 803684F4 00365434  41 82 01 58 */	beq .L_8036864C
/* 803684F8 00365438  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 803684FC 0036543C  2C 00 00 09 */	cmpwi r0, 9
/* 80368500 00365440  41 82 01 04 */	beq .L_80368604
/* 80368504 00365444  40 80 00 1C */	bge .L_80368520
/* 80368508 00365448  2C 00 00 03 */	cmpwi r0, 3
/* 8036850C 0036544C  41 82 00 78 */	beq .L_80368584
/* 80368510 00365450  40 80 00 DC */	bge .L_803685EC
/* 80368514 00365454  2C 00 00 02 */	cmpwi r0, 2
/* 80368518 00365458  40 80 00 20 */	bge .L_80368538
/* 8036851C 0036545C  48 00 01 30 */	b .L_8036864C
.L_80368520:
/* 80368520 00365460  2C 00 03 E8 */	cmpwi r0, 0x3e8
/* 80368524 00365464  41 82 01 08 */	beq .L_8036862C
/* 80368528 00365468  40 80 01 24 */	bge .L_8036864C
/* 8036852C 0036546C  2C 00 00 0B */	cmpwi r0, 0xb
/* 80368530 00365470  40 80 01 1C */	bge .L_8036864C
/* 80368534 00365474  48 00 00 DC */	b .L_80368610
.L_80368538:
/* 80368538 00365478  80 1F 02 80 */	lwz r0, 0x280(r31)
/* 8036853C 0036547C  28 00 00 00 */	cmplwi r0, 0
/* 80368540 00365480  41 82 00 24 */	beq .L_80368564
/* 80368544 00365484  80 7F 02 8C */	lwz r3, 0x28c(r31)
/* 80368548 00365488  38 80 58 D2 */	li r4, 0x58d2
/* 8036854C 0036548C  38 A0 00 00 */	li r5, 0
/* 80368550 00365490  81 83 00 28 */	lwz r12, 0x28(r3)
/* 80368554 00365494  81 8C 00 88 */	lwz r12, 0x88(r12)
/* 80368558 00365498  7D 89 03 A6 */	mtctr r12
/* 8036855C 0036549C  4E 80 04 21 */	bctrl 
/* 80368560 003654A0  48 00 00 EC */	b .L_8036864C
.L_80368564:
/* 80368564 003654A4  80 7F 02 8C */	lwz r3, 0x28c(r31)
/* 80368568 003654A8  38 80 58 D1 */	li r4, 0x58d1
/* 8036856C 003654AC  38 A0 00 00 */	li r5, 0
/* 80368570 003654B0  81 83 00 28 */	lwz r12, 0x28(r3)
/* 80368574 003654B4  81 8C 00 88 */	lwz r12, 0x88(r12)
/* 80368578 003654B8  7D 89 03 A6 */	mtctr r12
/* 8036857C 003654BC  4E 80 04 21 */	bctrl 
/* 80368580 003654C0  48 00 00 CC */	b .L_8036864C
.L_80368584:
/* 80368584 003654C4  38 00 00 00 */	li r0, 0
/* 80368588 003654C8  7F E3 FB 78 */	mr r3, r31
/* 8036858C 003654CC  98 1E 00 11 */	stb r0, 0x11(r30)
/* 80368590 003654D0  38 80 00 00 */	li r4, 0
/* 80368594 003654D4  81 9F 00 00 */	lwz r12, 0(r31)
/* 80368598 003654D8  81 8C 00 A4 */	lwz r12, 0xa4(r12)
/* 8036859C 003654DC  7D 89 03 A6 */	mtctr r12
/* 803685A0 003654E0  4E 80 04 21 */	bctrl 
/* 803685A4 003654E4  7F E3 FB 78 */	mr r3, r31
/* 803685A8 003654E8  38 80 00 00 */	li r4, 0
/* 803685AC 003654EC  81 9F 00 00 */	lwz r12, 0(r31)
/* 803685B0 003654F0  81 8C 00 AC */	lwz r12, 0xac(r12)
/* 803685B4 003654F4  7D 89 03 A6 */	mtctr r12
/* 803685B8 003654F8  4E 80 04 21 */	bctrl 
/* 803685BC 003654FC  88 1E 00 10 */	lbz r0, 0x10(r30)
/* 803685C0 00365500  28 00 00 00 */	cmplwi r0, 0
/* 803685C4 00365504  40 82 00 88 */	bne .L_8036864C
/* 803685C8 00365508  7F C3 F3 78 */	mr r3, r30
/* 803685CC 0036550C  7F E4 FB 78 */	mr r4, r31
/* 803685D0 00365510  81 9E 00 00 */	lwz r12, 0(r30)
/* 803685D4 00365514  38 A0 00 0C */	li r5, 0xc
/* 803685D8 00365518  38 C0 00 00 */	li r6, 0
/* 803685DC 0036551C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803685E0 00365520  7D 89 03 A6 */	mtctr r12
/* 803685E4 00365524  4E 80 04 21 */	bctrl 
/* 803685E8 00365528  48 00 00 64 */	b .L_8036864C
.L_803685EC:
/* 803685EC 0036552C  80 1F 02 80 */	lwz r0, 0x280(r31)
/* 803685F0 00365530  28 00 00 00 */	cmplwi r0, 0
/* 803685F4 00365534  41 82 00 58 */	beq .L_8036864C
/* 803685F8 00365538  7F E3 FB 78 */	mr r3, r31
/* 803685FC 0036553C  48 00 37 B5 */	bl eatWaterEffect__Q34Game6Jigumo3ObjFv
/* 80368600 00365540  48 00 00 4C */	b .L_8036864C
.L_80368604:
/* 80368604 00365544  38 00 00 01 */	li r0, 1
/* 80368608 00365548  98 1F 02 E9 */	stb r0, 0x2e9(r31)
/* 8036860C 0036554C  48 00 00 40 */	b .L_8036864C
.L_80368610:
/* 80368610 00365550  C0 22 05 9C */	lfs f1, lbl_8051E8FC@sda21(r2)
/* 80368614 00365554  7F E3 FB 78 */	mr r3, r31
/* 80368618 00365558  38 80 00 00 */	li r4, 0
/* 8036861C 0036555C  4B DA B8 69 */	bl "swallowPikmin__Q24Game9EnemyFuncFPQ24Game8CreaturefP23Condition<Q24Game4Piki>"
/* 80368620 00365560  38 00 00 00 */	li r0, 0
/* 80368624 00365564  98 1F 02 E9 */	stb r0, 0x2e9(r31)
/* 80368628 00365568  48 00 00 24 */	b .L_8036864C
.L_8036862C:
/* 8036862C 0036556C  7F C3 F3 78 */	mr r3, r30
/* 80368630 00365570  7F E4 FB 78 */	mr r4, r31
/* 80368634 00365574  81 9E 00 00 */	lwz r12, 0(r30)
/* 80368638 00365578  38 A0 00 0A */	li r5, 0xa
/* 8036863C 0036557C  38 C0 00 00 */	li r6, 0
/* 80368640 00365580  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80368644 00365584  7D 89 03 A6 */	mtctr r12
/* 80368648 00365588  4E 80 04 21 */	bctrl 
.L_8036864C:
/* 8036864C 0036558C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80368650 00365590  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80368654 00365594  83 C1 00 08 */	lwz r30, 8(r1)
/* 80368658 00365598  7C 08 03 A6 */	mtlr r0
/* 8036865C 0036559C  38 21 00 10 */	addi r1, r1, 0x10
/* 80368660 003655A0  4E 80 00 20 */	blr 

.global cleanup__Q34Game6Jigumo12StateSAttackFPQ24Game9EnemyBase
cleanup__Q34Game6Jigumo12StateSAttackFPQ24Game9EnemyBase:
/* 80368664 003655A4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80368668 003655A8  7C 08 02 A6 */	mflr r0
/* 8036866C 003655AC  7C 83 23 78 */	mr r3, r4
/* 80368670 003655B0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80368674 003655B4  4B D9 93 09 */	bl setEmotionCaution__Q24Game9EnemyBaseFv
/* 80368678 003655B8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8036867C 003655BC  7C 08 03 A6 */	mtlr r0
/* 80368680 003655C0  38 21 00 10 */	addi r1, r1, 0x10
/* 80368684 003655C4  4E 80 00 20 */	blr 

.global __ct__Q34Game6Jigumo10StateSMissFi
__ct__Q34Game6Jigumo10StateSMissFi:
/* 80368688 003655C8  3C A0 80 4B */	lis r5, __vt__Q24Game13EnemyFSMState@ha
/* 8036868C 003655CC  3C C0 80 4E */	lis r6, __vt__Q34Game6Jigumo5State@ha
/* 80368690 003655D0  38 05 F9 A4 */	addi r0, r5, __vt__Q24Game13EnemyFSMState@l
/* 80368694 003655D4  3C A0 80 4E */	lis r5, __vt__Q34Game6Jigumo10StateSMiss@ha
/* 80368698 003655D8  90 03 00 00 */	stw r0, 0(r3)
/* 8036869C 003655DC  38 E0 00 00 */	li r7, 0
/* 803686A0 003655E0  38 C6 2A F4 */	addi r6, r6, __vt__Q34Game6Jigumo5State@l
/* 803686A4 003655E4  38 A5 29 14 */	addi r5, r5, __vt__Q34Game6Jigumo10StateSMiss@l
/* 803686A8 003655E8  90 83 00 04 */	stw r4, 4(r3)
/* 803686AC 003655EC  38 02 05 B8 */	addi r0, r2, lbl_8051E918@sda21
/* 803686B0 003655F0  90 E3 00 08 */	stw r7, 8(r3)
/* 803686B4 003655F4  90 C3 00 00 */	stw r6, 0(r3)
/* 803686B8 003655F8  90 A3 00 00 */	stw r5, 0(r3)
/* 803686BC 003655FC  90 03 00 0C */	stw r0, 0xc(r3)
/* 803686C0 00365600  4E 80 00 20 */	blr 

.global init__Q34Game6Jigumo10StateSMissFPQ24Game9EnemyBasePQ24Game8StateArg
init__Q34Game6Jigumo10StateSMissFPQ24Game9EnemyBasePQ24Game8StateArg:
/* 803686C4 00365604  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803686C8 00365608  7C 08 02 A6 */	mflr r0
/* 803686CC 0036560C  7C 83 23 78 */	mr r3, r4
/* 803686D0 00365610  38 80 00 0C */	li r4, 0xc
/* 803686D4 00365614  90 01 00 14 */	stw r0, 0x14(r1)
/* 803686D8 00365618  38 A0 00 00 */	li r5, 0
/* 803686DC 0036561C  4B D9 C9 29 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 803686E0 00365620  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803686E4 00365624  7C 08 03 A6 */	mtlr r0
/* 803686E8 00365628  38 21 00 10 */	addi r1, r1, 0x10
/* 803686EC 0036562C  4E 80 00 20 */	blr 

.global exec__Q34Game6Jigumo10StateSMissFPQ24Game9EnemyBase
exec__Q34Game6Jigumo10StateSMissFPQ24Game9EnemyBase:
/* 803686F0 00365630  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803686F4 00365634  7C 08 02 A6 */	mflr r0
/* 803686F8 00365638  90 01 00 14 */	stw r0, 0x14(r1)
/* 803686FC 0036563C  80 A4 01 88 */	lwz r5, 0x188(r4)
/* 80368700 00365640  88 05 00 24 */	lbz r0, 0x24(r5)
/* 80368704 00365644  28 00 00 00 */	cmplwi r0, 0
/* 80368708 00365648  41 82 00 28 */	beq .L_80368730
/* 8036870C 0036564C  80 05 00 1C */	lwz r0, 0x1c(r5)
/* 80368710 00365650  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 80368714 00365654  40 82 00 1C */	bne .L_80368730
/* 80368718 00365658  81 83 00 00 */	lwz r12, 0(r3)
/* 8036871C 0036565C  38 A0 00 0A */	li r5, 0xa
/* 80368720 00365660  38 C0 00 00 */	li r6, 0
/* 80368724 00365664  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80368728 00365668  7D 89 03 A6 */	mtctr r12
/* 8036872C 0036566C  4E 80 04 21 */	bctrl 
.L_80368730:
/* 80368730 00365670  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80368734 00365674  7C 08 03 A6 */	mtlr r0
/* 80368738 00365678  38 21 00 10 */	addi r1, r1, 0x10
/* 8036873C 0036567C  4E 80 00 20 */	blr 

.global satisfy__Q34Game6Jigumo24ConditionHeightCheckPikiFPQ24Game4Piki
satisfy__Q34Game6Jigumo24ConditionHeightCheckPikiFPQ24Game4Piki:
/* 80368740 00365680  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80368744 00365684  7C 08 02 A6 */	mflr r0
/* 80368748 00365688  90 01 00 34 */	stw r0, 0x34(r1)
/* 8036874C 0036568C  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 80368750 00365690  93 C1 00 28 */	stw r30, 0x28(r1)
/* 80368754 00365694  93 A1 00 24 */	stw r29, 0x24(r1)
/* 80368758 00365698  7C 9D 23 78 */	mr r29, r4
/* 8036875C 0036569C  93 81 00 20 */	stw r28, 0x20(r1)
/* 80368760 003656A0  7C 7C 1B 78 */	mr r28, r3
/* 80368764 003656A4  7F A3 EB 78 */	mr r3, r29
/* 80368768 003656A8  4B E3 6E 0D */	bl isStickTo__Q24Game8CreatureFv
/* 8036876C 003656AC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80368770 003656B0  40 82 00 9C */	bne .L_8036880C
/* 80368774 003656B4  7F A3 EB 78 */	mr r3, r29
/* 80368778 003656B8  83 DC 00 04 */	lwz r30, 4(r28)
/* 8036877C 003656BC  81 9D 00 00 */	lwz r12, 0(r29)
/* 80368780 003656C0  3B E0 00 00 */	li r31, 0
/* 80368784 003656C4  81 8C 01 C0 */	lwz r12, 0x1c0(r12)
/* 80368788 003656C8  7D 89 03 A6 */	mtctr r12
/* 8036878C 003656CC  4E 80 04 21 */	bctrl 
/* 80368790 003656D0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80368794 003656D4  41 82 00 24 */	beq .L_803687B8
/* 80368798 003656D8  80 1D 00 F4 */	lwz r0, 0xf4(r29)
/* 8036879C 003656DC  7C 00 F0 40 */	cmplw r0, r30
/* 803687A0 003656E0  41 82 00 18 */	beq .L_803687B8
/* 803687A4 003656E4  7F A3 EB 78 */	mr r3, r29
/* 803687A8 003656E8  4B E3 6D E1 */	bl isStickToMouth__Q24Game8CreatureFv
/* 803687AC 003656EC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803687B0 003656F0  40 82 00 08 */	bne .L_803687B8
/* 803687B4 003656F4  3B E0 00 01 */	li r31, 1
.L_803687B8:
/* 803687B8 003656F8  57 E0 06 3F */	clrlwi. r0, r31, 0x18
/* 803687BC 003656FC  41 82 00 50 */	beq .L_8036880C
/* 803687C0 00365700  7F A4 EB 78 */	mr r4, r29
/* 803687C4 00365704  38 61 00 08 */	addi r3, r1, 8
/* 803687C8 00365708  81 9D 00 00 */	lwz r12, 0(r29)
/* 803687CC 0036570C  81 8C 00 08 */	lwz r12, 8(r12)
/* 803687D0 00365710  7D 89 03 A6 */	mtctr r12
/* 803687D4 00365714  4E 80 04 21 */	bctrl 
/* 803687D8 00365718  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 803687DC 0036571C  C0 1C 00 0C */	lfs f0, 0xc(r28)
/* 803687E0 00365720  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 803687E4 00365724  40 81 00 0C */	ble .L_803687F0
/* 803687E8 00365728  38 60 00 00 */	li r3, 0
/* 803687EC 0036572C  48 00 00 24 */	b .L_80368810
.L_803687F0:
/* 803687F0 00365730  C0 1C 00 08 */	lfs f0, 8(r28)
/* 803687F4 00365734  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 803687F8 00365738  7C 00 00 26 */	mfcr r0
/* 803687FC 0036573C  54 00 0F FE */	srwi r0, r0, 0x1f
/* 80368800 00365740  7C 00 00 34 */	cntlzw r0, r0
/* 80368804 00365744  54 03 D9 7E */	srwi r3, r0, 5
/* 80368808 00365748  48 00 00 08 */	b .L_80368810
.L_8036880C:
/* 8036880C 0036574C  38 60 00 00 */	li r3, 0
.L_80368810:
/* 80368810 00365750  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80368814 00365754  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 80368818 00365758  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 8036881C 0036575C  83 A1 00 24 */	lwz r29, 0x24(r1)
/* 80368820 00365760  83 81 00 20 */	lwz r28, 0x20(r1)
/* 80368824 00365764  7C 08 03 A6 */	mtlr r0
/* 80368828 00365768  38 21 00 30 */	addi r1, r1, 0x30
/* 8036882C 0036576C  4E 80 00 20 */	blr 

fn local __sinit_jigumoState_cpp
/* 80368830 00365770  3C 80 80 51 */	lis r4, __float_nan@ha
/* 80368834 00365774  38 00 FF FF */	li r0, -1
/* 80368838 00365778  C0 04 48 B0 */	lfs f0, __float_nan@l(r4)
/* 8036883C 0036577C  3C 60 80 4E */	lis r3, lbl_804E2908@ha
/* 80368840 00365780  90 0D 98 D8 */	stw r0, lbl_80515F58@sda21(r13)
/* 80368844 00365784  D4 03 29 08 */	stfsu f0, lbl_804E2908@l(r3)
/* 80368848 00365788  D0 0D 98 DC */	stfs f0, lbl_80515F5C@sda21(r13)
/* 8036884C 0036578C  D0 03 00 04 */	stfs f0, 4(r3)
/* 80368850 00365790  D0 03 00 08 */	stfs f0, 8(r3)
/* 80368854 00365794  4E 80 00 20 */	blr 
end __sinit_jigumoState_cpp
