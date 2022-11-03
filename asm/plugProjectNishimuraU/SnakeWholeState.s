.include "macros.inc"
.section .ctors, "wa"  # 0x80472F00 - 0x804732C0
lbl_constructor:
.4byte __sinit_SnakeWholeState_cpp

.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
.global lbl_8048B7F0
lbl_8048B7F0:
	.4byte 0x64697361
	.4byte 0x70706561
	.4byte 0x72000000
.global lbl_8048B7FC
lbl_8048B7FC:
	.4byte 0x73747275
	.4byte 0x67676C65
	.4byte 0x00000000

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.global lbl_804D2150
lbl_804D2150:
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.global __vt__Q34Game10SnakeWhole13StateStruggle
__vt__Q34Game10SnakeWhole13StateStruggle:
	.4byte 0
	.4byte 0
	.4byte init__Q34Game10SnakeWhole13StateStruggleFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game10SnakeWhole13StateStruggleFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game10SnakeWhole13StateStruggleFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.global __vt__Q34Game10SnakeWhole8StateEat
__vt__Q34Game10SnakeWhole8StateEat:
	.4byte 0
	.4byte 0
	.4byte init__Q34Game10SnakeWhole8StateEatFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game10SnakeWhole8StateEatFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game10SnakeWhole8StateEatFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.global __vt__Q34Game10SnakeWhole11StateAttack
__vt__Q34Game10SnakeWhole11StateAttack:
	.4byte 0
	.4byte 0
	.4byte init__Q34Game10SnakeWhole11StateAttackFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game10SnakeWhole11StateAttackFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game10SnakeWhole11StateAttackFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.global __vt__Q34Game10SnakeWhole9StateHome
__vt__Q34Game10SnakeWhole9StateHome:
	.4byte 0
	.4byte 0
	.4byte init__Q34Game10SnakeWhole9StateHomeFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game10SnakeWhole9StateHomeFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game10SnakeWhole9StateHomeFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.global __vt__Q34Game10SnakeWhole9StateWalk
__vt__Q34Game10SnakeWhole9StateWalk:
	.4byte 0
	.4byte 0
	.4byte init__Q34Game10SnakeWhole9StateWalkFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game10SnakeWhole9StateWalkFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game10SnakeWhole9StateWalkFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.global __vt__Q34Game10SnakeWhole9StateWait
__vt__Q34Game10SnakeWhole9StateWait:
	.4byte 0
	.4byte 0
	.4byte init__Q34Game10SnakeWhole9StateWaitFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game10SnakeWhole9StateWaitFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game10SnakeWhole9StateWaitFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.global __vt__Q34Game10SnakeWhole14StateDisappear
__vt__Q34Game10SnakeWhole14StateDisappear:
	.4byte 0
	.4byte 0
	.4byte init__Q34Game10SnakeWhole14StateDisappearFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game10SnakeWhole14StateDisappearFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game10SnakeWhole14StateDisappearFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.global __vt__Q34Game10SnakeWhole12StateAppear2
__vt__Q34Game10SnakeWhole12StateAppear2:
	.4byte 0
	.4byte 0
	.4byte init__Q34Game10SnakeWhole12StateAppear2FPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game10SnakeWhole12StateAppear2FPQ24Game9EnemyBase
	.4byte cleanup__Q34Game10SnakeWhole12StateAppear2FPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.global __vt__Q34Game10SnakeWhole12StateAppear1
__vt__Q34Game10SnakeWhole12StateAppear1:
	.4byte 0
	.4byte 0
	.4byte init__Q34Game10SnakeWhole12StateAppear1FPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game10SnakeWhole12StateAppear1FPQ24Game9EnemyBase
	.4byte cleanup__Q34Game10SnakeWhole12StateAppear1FPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.global __vt__Q34Game10SnakeWhole9StateStay
__vt__Q34Game10SnakeWhole9StateStay:
	.4byte 0
	.4byte 0
	.4byte init__Q34Game10SnakeWhole9StateStayFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game10SnakeWhole9StateStayFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game10SnakeWhole9StateStayFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.global __vt__Q34Game10SnakeWhole9StateDead
__vt__Q34Game10SnakeWhole9StateDead:
	.4byte 0
	.4byte 0
	.4byte init__Q34Game10SnakeWhole9StateDeadFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game10SnakeWhole9StateDeadFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game10SnakeWhole9StateDeadFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.global __vt__Q34Game10SnakeWhole5State
__vt__Q34Game10SnakeWhole5State:
	.4byte 0
	.4byte 0
	.4byte init__Q24Game13EnemyFSMStateFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte cleanup__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.global __vt__Q34Game10SnakeWhole3FSM
__vt__Q34Game10SnakeWhole3FSM:
	.4byte 0
	.4byte 0
	.4byte init__Q34Game10SnakeWhole3FSMFPQ24Game9EnemyBase
	.4byte start__Q24Game17EnemyStateMachineFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte exec__Q24Game17EnemyStateMachineFPQ24Game9EnemyBase
	.4byte transit__Q24Game17EnemyStateMachineFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game17EnemyStateMachineFPQ24Game9EnemyBaseR8Graphics
	.4byte getCurrState__Q24Game17EnemyStateMachineFPQ24Game9EnemyBase
	.4byte setCurrState__Q24Game17EnemyStateMachineFPQ24Game9EnemyBasePQ24Game13EnemyFSMState

.section .sbss # 0x80514D80 - 0x80516360
.balign 8
.global lbl_80515DB8
lbl_80515DB8:
	.skip 0x4
.global lbl_80515DBC
lbl_80515DBC:
	.skip 0x4

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
.global lbl_8051C7D0
lbl_8051C7D0:
	.4byte 0x64656164
	.4byte 0x00000000
.global lbl_8051C7D8
lbl_8051C7D8:
	.4byte 0x73746179
	.4byte 0x00000000
.global lbl_8051C7E0
lbl_8051C7E0:
	.4byte 0x61707065
	.4byte 0x61723100
.global lbl_8051C7E8
lbl_8051C7E8:
	.4byte 0x61707065
	.4byte 0x61723200
.global lbl_8051C7F0
lbl_8051C7F0:
	.4byte 0x77616974
	.4byte 0x00000000
.global lbl_8051C7F8
lbl_8051C7F8:
	.4byte 0x77616C6B
	.4byte 0x00000000
.global lbl_8051C800
lbl_8051C800:
	.4byte 0x686F6D65
	.4byte 0x00000000
.global lbl_8051C808
lbl_8051C808:
	.4byte 0x61747461
	.4byte 0x636B0000
.global lbl_8051C810
lbl_8051C810:
	.4byte 0x65617400
.global lbl_8051C814
lbl_8051C814:
	.4byte 0x00000000
.global lbl_8051C818
lbl_8051C818:
	.4byte 0x3F666666
.global lbl_8051C81C
lbl_8051C81C:
	.4byte 0x3F400000
.global lbl_8051C820
lbl_8051C820:
	.4byte 0x481C4000
.global lbl_8051C824
lbl_8051C824:
	.float 1.0
.global lbl_8051C828
lbl_8051C828:
	.4byte 0x47000000
	.4byte 0x00000000
.global lbl_8051C830
lbl_8051C830:
	.4byte 0x43300000
	.4byte 0x80000000
.global lbl_8051C838
lbl_8051C838:
	.4byte 0xC47A0000
.global lbl_8051C83C
lbl_8051C83C:
	.4byte 0x41200000
.global lbl_8051C840
lbl_8051C840:
	.4byte 0x3FC00000
	.4byte 0x00000000

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global init__Q34Game10SnakeWhole3FSMFPQ24Game9EnemyBase
init__Q34Game10SnakeWhole3FSMFPQ24Game9EnemyBase:
/* 802CB94C 002C888C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802CB950 002C8890  7C 08 02 A6 */	mflr r0
/* 802CB954 002C8894  38 80 00 0B */	li r4, 0xb
/* 802CB958 002C8898  90 01 00 14 */	stw r0, 0x14(r1)
/* 802CB95C 002C889C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802CB960 002C88A0  7C 7F 1B 78 */	mr r31, r3
/* 802CB964 002C88A4  4B E6 4F 01 */	bl create__Q24Game17EnemyStateMachineFi
/* 802CB968 002C88A8  38 60 00 10 */	li r3, 0x10
/* 802CB96C 002C88AC  4B D5 85 39 */	bl __nw__FUl
/* 802CB970 002C88B0  7C 64 1B 79 */	or. r4, r3, r3
/* 802CB974 002C88B4  41 82 00 3C */	beq .L_802CB9B0
/* 802CB978 002C88B8  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 802CB97C 002C88BC  3C A0 80 4D */	lis r5, __vt__Q34Game10SnakeWhole5State@ha
/* 802CB980 002C88C0  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 802CB984 002C88C4  3C 60 80 4D */	lis r3, __vt__Q34Game10SnakeWhole9StateDead@ha
/* 802CB988 002C88C8  90 04 00 00 */	stw r0, 0(r4)
/* 802CB98C 002C88CC  38 E0 00 00 */	li r7, 0
/* 802CB990 002C88D0  38 C5 22 E8 */	addi r6, r5, __vt__Q34Game10SnakeWhole5State@l
/* 802CB994 002C88D4  38 A2 E4 70 */	addi r5, r2, lbl_8051C7D0@sda21
/* 802CB998 002C88D8  90 E4 00 04 */	stw r7, 4(r4)
/* 802CB99C 002C88DC  38 03 22 C4 */	addi r0, r3, __vt__Q34Game10SnakeWhole9StateDead@l
/* 802CB9A0 002C88E0  90 E4 00 08 */	stw r7, 8(r4)
/* 802CB9A4 002C88E4  90 C4 00 00 */	stw r6, 0(r4)
/* 802CB9A8 002C88E8  90 A4 00 0C */	stw r5, 0xc(r4)
/* 802CB9AC 002C88EC  90 04 00 00 */	stw r0, 0(r4)
.L_802CB9B0:
/* 802CB9B0 002C88F0  7F E3 FB 78 */	mr r3, r31
/* 802CB9B4 002C88F4  4B E6 4F 55 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 802CB9B8 002C88F8  38 60 00 10 */	li r3, 0x10
/* 802CB9BC 002C88FC  4B D5 84 E9 */	bl __nw__FUl
/* 802CB9C0 002C8900  7C 64 1B 79 */	or. r4, r3, r3
/* 802CB9C4 002C8904  41 82 00 40 */	beq .L_802CBA04
/* 802CB9C8 002C8908  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 802CB9CC 002C890C  3C A0 80 4D */	lis r5, __vt__Q34Game10SnakeWhole5State@ha
/* 802CB9D0 002C8910  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 802CB9D4 002C8914  3C 60 80 4D */	lis r3, __vt__Q34Game10SnakeWhole9StateStay@ha
/* 802CB9D8 002C8918  90 04 00 00 */	stw r0, 0(r4)
/* 802CB9DC 002C891C  38 00 00 01 */	li r0, 1
/* 802CB9E0 002C8920  38 E0 00 00 */	li r7, 0
/* 802CB9E4 002C8924  38 C5 22 E8 */	addi r6, r5, __vt__Q34Game10SnakeWhole5State@l
/* 802CB9E8 002C8928  90 04 00 04 */	stw r0, 4(r4)
/* 802CB9EC 002C892C  38 A2 E4 78 */	addi r5, r2, lbl_8051C7D8@sda21
/* 802CB9F0 002C8930  38 03 22 A0 */	addi r0, r3, __vt__Q34Game10SnakeWhole9StateStay@l
/* 802CB9F4 002C8934  90 E4 00 08 */	stw r7, 8(r4)
/* 802CB9F8 002C8938  90 C4 00 00 */	stw r6, 0(r4)
/* 802CB9FC 002C893C  90 A4 00 0C */	stw r5, 0xc(r4)
/* 802CBA00 002C8940  90 04 00 00 */	stw r0, 0(r4)
.L_802CBA04:
/* 802CBA04 002C8944  7F E3 FB 78 */	mr r3, r31
/* 802CBA08 002C8948  4B E6 4F 01 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 802CBA0C 002C894C  38 60 00 10 */	li r3, 0x10
/* 802CBA10 002C8950  4B D5 84 95 */	bl __nw__FUl
/* 802CBA14 002C8954  7C 64 1B 79 */	or. r4, r3, r3
/* 802CBA18 002C8958  41 82 00 40 */	beq .L_802CBA58
/* 802CBA1C 002C895C  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 802CBA20 002C8960  3C A0 80 4D */	lis r5, __vt__Q34Game10SnakeWhole5State@ha
/* 802CBA24 002C8964  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 802CBA28 002C8968  3C 60 80 4D */	lis r3, __vt__Q34Game10SnakeWhole12StateAppear1@ha
/* 802CBA2C 002C896C  90 04 00 00 */	stw r0, 0(r4)
/* 802CBA30 002C8970  38 00 00 02 */	li r0, 2
/* 802CBA34 002C8974  38 E0 00 00 */	li r7, 0
/* 802CBA38 002C8978  38 C5 22 E8 */	addi r6, r5, __vt__Q34Game10SnakeWhole5State@l
/* 802CBA3C 002C897C  90 04 00 04 */	stw r0, 4(r4)
/* 802CBA40 002C8980  38 A2 E4 80 */	addi r5, r2, lbl_8051C7E0@sda21
/* 802CBA44 002C8984  38 03 22 7C */	addi r0, r3, __vt__Q34Game10SnakeWhole12StateAppear1@l
/* 802CBA48 002C8988  90 E4 00 08 */	stw r7, 8(r4)
/* 802CBA4C 002C898C  90 C4 00 00 */	stw r6, 0(r4)
/* 802CBA50 002C8990  90 A4 00 0C */	stw r5, 0xc(r4)
/* 802CBA54 002C8994  90 04 00 00 */	stw r0, 0(r4)
.L_802CBA58:
/* 802CBA58 002C8998  7F E3 FB 78 */	mr r3, r31
/* 802CBA5C 002C899C  4B E6 4E AD */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 802CBA60 002C89A0  38 60 00 10 */	li r3, 0x10
/* 802CBA64 002C89A4  4B D5 84 41 */	bl __nw__FUl
/* 802CBA68 002C89A8  7C 64 1B 79 */	or. r4, r3, r3
/* 802CBA6C 002C89AC  41 82 00 40 */	beq .L_802CBAAC
/* 802CBA70 002C89B0  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 802CBA74 002C89B4  3C A0 80 4D */	lis r5, __vt__Q34Game10SnakeWhole5State@ha
/* 802CBA78 002C89B8  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 802CBA7C 002C89BC  3C 60 80 4D */	lis r3, __vt__Q34Game10SnakeWhole12StateAppear2@ha
/* 802CBA80 002C89C0  90 04 00 00 */	stw r0, 0(r4)
/* 802CBA84 002C89C4  38 00 00 03 */	li r0, 3
/* 802CBA88 002C89C8  38 E0 00 00 */	li r7, 0
/* 802CBA8C 002C89CC  38 C5 22 E8 */	addi r6, r5, __vt__Q34Game10SnakeWhole5State@l
/* 802CBA90 002C89D0  90 04 00 04 */	stw r0, 4(r4)
/* 802CBA94 002C89D4  38 A2 E4 88 */	addi r5, r2, lbl_8051C7E8@sda21
/* 802CBA98 002C89D8  38 03 22 58 */	addi r0, r3, __vt__Q34Game10SnakeWhole12StateAppear2@l
/* 802CBA9C 002C89DC  90 E4 00 08 */	stw r7, 8(r4)
/* 802CBAA0 002C89E0  90 C4 00 00 */	stw r6, 0(r4)
/* 802CBAA4 002C89E4  90 A4 00 0C */	stw r5, 0xc(r4)
/* 802CBAA8 002C89E8  90 04 00 00 */	stw r0, 0(r4)
.L_802CBAAC:
/* 802CBAAC 002C89EC  7F E3 FB 78 */	mr r3, r31
/* 802CBAB0 002C89F0  4B E6 4E 59 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 802CBAB4 002C89F4  38 60 00 10 */	li r3, 0x10
/* 802CBAB8 002C89F8  4B D5 83 ED */	bl __nw__FUl
/* 802CBABC 002C89FC  7C 64 1B 79 */	or. r4, r3, r3
/* 802CBAC0 002C8A00  41 82 00 44 */	beq .L_802CBB04
/* 802CBAC4 002C8A04  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 802CBAC8 002C8A08  3C C0 80 4D */	lis r6, __vt__Q34Game10SnakeWhole5State@ha
/* 802CBACC 002C8A0C  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 802CBAD0 002C8A10  3C A0 80 49 */	lis r5, lbl_8048B7F0@ha
/* 802CBAD4 002C8A14  90 04 00 00 */	stw r0, 0(r4)
/* 802CBAD8 002C8A18  38 00 00 04 */	li r0, 4
/* 802CBADC 002C8A1C  3C 60 80 4D */	lis r3, __vt__Q34Game10SnakeWhole14StateDisappear@ha
/* 802CBAE0 002C8A20  38 E0 00 00 */	li r7, 0
/* 802CBAE4 002C8A24  90 04 00 04 */	stw r0, 4(r4)
/* 802CBAE8 002C8A28  38 C6 22 E8 */	addi r6, r6, __vt__Q34Game10SnakeWhole5State@l
/* 802CBAEC 002C8A2C  38 A5 B7 F0 */	addi r5, r5, lbl_8048B7F0@l
/* 802CBAF0 002C8A30  38 03 22 34 */	addi r0, r3, __vt__Q34Game10SnakeWhole14StateDisappear@l
/* 802CBAF4 002C8A34  90 E4 00 08 */	stw r7, 8(r4)
/* 802CBAF8 002C8A38  90 C4 00 00 */	stw r6, 0(r4)
/* 802CBAFC 002C8A3C  90 A4 00 0C */	stw r5, 0xc(r4)
/* 802CBB00 002C8A40  90 04 00 00 */	stw r0, 0(r4)
.L_802CBB04:
/* 802CBB04 002C8A44  7F E3 FB 78 */	mr r3, r31
/* 802CBB08 002C8A48  4B E6 4E 01 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 802CBB0C 002C8A4C  38 60 00 10 */	li r3, 0x10
/* 802CBB10 002C8A50  4B D5 83 95 */	bl __nw__FUl
/* 802CBB14 002C8A54  7C 64 1B 79 */	or. r4, r3, r3
/* 802CBB18 002C8A58  41 82 00 40 */	beq .L_802CBB58
/* 802CBB1C 002C8A5C  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 802CBB20 002C8A60  3C A0 80 4D */	lis r5, __vt__Q34Game10SnakeWhole5State@ha
/* 802CBB24 002C8A64  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 802CBB28 002C8A68  3C 60 80 4D */	lis r3, __vt__Q34Game10SnakeWhole9StateWait@ha
/* 802CBB2C 002C8A6C  90 04 00 00 */	stw r0, 0(r4)
/* 802CBB30 002C8A70  38 00 00 05 */	li r0, 5
/* 802CBB34 002C8A74  38 E0 00 00 */	li r7, 0
/* 802CBB38 002C8A78  38 C5 22 E8 */	addi r6, r5, __vt__Q34Game10SnakeWhole5State@l
/* 802CBB3C 002C8A7C  90 04 00 04 */	stw r0, 4(r4)
/* 802CBB40 002C8A80  38 A2 E4 90 */	addi r5, r2, lbl_8051C7F0@sda21
/* 802CBB44 002C8A84  38 03 22 10 */	addi r0, r3, __vt__Q34Game10SnakeWhole9StateWait@l
/* 802CBB48 002C8A88  90 E4 00 08 */	stw r7, 8(r4)
/* 802CBB4C 002C8A8C  90 C4 00 00 */	stw r6, 0(r4)
/* 802CBB50 002C8A90  90 A4 00 0C */	stw r5, 0xc(r4)
/* 802CBB54 002C8A94  90 04 00 00 */	stw r0, 0(r4)
.L_802CBB58:
/* 802CBB58 002C8A98  7F E3 FB 78 */	mr r3, r31
/* 802CBB5C 002C8A9C  4B E6 4D AD */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 802CBB60 002C8AA0  38 60 00 10 */	li r3, 0x10
/* 802CBB64 002C8AA4  4B D5 83 41 */	bl __nw__FUl
/* 802CBB68 002C8AA8  7C 64 1B 79 */	or. r4, r3, r3
/* 802CBB6C 002C8AAC  41 82 00 40 */	beq .L_802CBBAC
/* 802CBB70 002C8AB0  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 802CBB74 002C8AB4  3C A0 80 4D */	lis r5, __vt__Q34Game10SnakeWhole5State@ha
/* 802CBB78 002C8AB8  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 802CBB7C 002C8ABC  3C 60 80 4D */	lis r3, __vt__Q34Game10SnakeWhole9StateWalk@ha
/* 802CBB80 002C8AC0  90 04 00 00 */	stw r0, 0(r4)
/* 802CBB84 002C8AC4  38 00 00 06 */	li r0, 6
/* 802CBB88 002C8AC8  38 E0 00 00 */	li r7, 0
/* 802CBB8C 002C8ACC  38 C5 22 E8 */	addi r6, r5, __vt__Q34Game10SnakeWhole5State@l
/* 802CBB90 002C8AD0  90 04 00 04 */	stw r0, 4(r4)
/* 802CBB94 002C8AD4  38 A2 E4 98 */	addi r5, r2, lbl_8051C7F8@sda21
/* 802CBB98 002C8AD8  38 03 21 EC */	addi r0, r3, __vt__Q34Game10SnakeWhole9StateWalk@l
/* 802CBB9C 002C8ADC  90 E4 00 08 */	stw r7, 8(r4)
/* 802CBBA0 002C8AE0  90 C4 00 00 */	stw r6, 0(r4)
/* 802CBBA4 002C8AE4  90 A4 00 0C */	stw r5, 0xc(r4)
/* 802CBBA8 002C8AE8  90 04 00 00 */	stw r0, 0(r4)
.L_802CBBAC:
/* 802CBBAC 002C8AEC  7F E3 FB 78 */	mr r3, r31
/* 802CBBB0 002C8AF0  4B E6 4D 59 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 802CBBB4 002C8AF4  38 60 00 10 */	li r3, 0x10
/* 802CBBB8 002C8AF8  4B D5 82 ED */	bl __nw__FUl
/* 802CBBBC 002C8AFC  7C 64 1B 79 */	or. r4, r3, r3
/* 802CBBC0 002C8B00  41 82 00 40 */	beq .L_802CBC00
/* 802CBBC4 002C8B04  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 802CBBC8 002C8B08  3C A0 80 4D */	lis r5, __vt__Q34Game10SnakeWhole5State@ha
/* 802CBBCC 002C8B0C  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 802CBBD0 002C8B10  3C 60 80 4D */	lis r3, __vt__Q34Game10SnakeWhole9StateHome@ha
/* 802CBBD4 002C8B14  90 04 00 00 */	stw r0, 0(r4)
/* 802CBBD8 002C8B18  38 00 00 07 */	li r0, 7
/* 802CBBDC 002C8B1C  38 E0 00 00 */	li r7, 0
/* 802CBBE0 002C8B20  38 C5 22 E8 */	addi r6, r5, __vt__Q34Game10SnakeWhole5State@l
/* 802CBBE4 002C8B24  90 04 00 04 */	stw r0, 4(r4)
/* 802CBBE8 002C8B28  38 A2 E4 A0 */	addi r5, r2, lbl_8051C800@sda21
/* 802CBBEC 002C8B2C  38 03 21 C8 */	addi r0, r3, __vt__Q34Game10SnakeWhole9StateHome@l
/* 802CBBF0 002C8B30  90 E4 00 08 */	stw r7, 8(r4)
/* 802CBBF4 002C8B34  90 C4 00 00 */	stw r6, 0(r4)
/* 802CBBF8 002C8B38  90 A4 00 0C */	stw r5, 0xc(r4)
/* 802CBBFC 002C8B3C  90 04 00 00 */	stw r0, 0(r4)
.L_802CBC00:
/* 802CBC00 002C8B40  7F E3 FB 78 */	mr r3, r31
/* 802CBC04 002C8B44  4B E6 4D 05 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 802CBC08 002C8B48  38 60 00 10 */	li r3, 0x10
/* 802CBC0C 002C8B4C  4B D5 82 99 */	bl __nw__FUl
/* 802CBC10 002C8B50  7C 64 1B 79 */	or. r4, r3, r3
/* 802CBC14 002C8B54  41 82 00 40 */	beq .L_802CBC54
/* 802CBC18 002C8B58  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 802CBC1C 002C8B5C  3C A0 80 4D */	lis r5, __vt__Q34Game10SnakeWhole5State@ha
/* 802CBC20 002C8B60  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 802CBC24 002C8B64  3C 60 80 4D */	lis r3, __vt__Q34Game10SnakeWhole11StateAttack@ha
/* 802CBC28 002C8B68  90 04 00 00 */	stw r0, 0(r4)
/* 802CBC2C 002C8B6C  38 00 00 08 */	li r0, 8
/* 802CBC30 002C8B70  38 E0 00 00 */	li r7, 0
/* 802CBC34 002C8B74  38 C5 22 E8 */	addi r6, r5, __vt__Q34Game10SnakeWhole5State@l
/* 802CBC38 002C8B78  90 04 00 04 */	stw r0, 4(r4)
/* 802CBC3C 002C8B7C  38 A2 E4 A8 */	addi r5, r2, lbl_8051C808@sda21
/* 802CBC40 002C8B80  38 03 21 A4 */	addi r0, r3, __vt__Q34Game10SnakeWhole11StateAttack@l
/* 802CBC44 002C8B84  90 E4 00 08 */	stw r7, 8(r4)
/* 802CBC48 002C8B88  90 C4 00 00 */	stw r6, 0(r4)
/* 802CBC4C 002C8B8C  90 A4 00 0C */	stw r5, 0xc(r4)
/* 802CBC50 002C8B90  90 04 00 00 */	stw r0, 0(r4)
.L_802CBC54:
/* 802CBC54 002C8B94  7F E3 FB 78 */	mr r3, r31
/* 802CBC58 002C8B98  4B E6 4C B1 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 802CBC5C 002C8B9C  38 60 00 10 */	li r3, 0x10
/* 802CBC60 002C8BA0  4B D5 82 45 */	bl __nw__FUl
/* 802CBC64 002C8BA4  7C 64 1B 79 */	or. r4, r3, r3
/* 802CBC68 002C8BA8  41 82 00 40 */	beq .L_802CBCA8
/* 802CBC6C 002C8BAC  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 802CBC70 002C8BB0  3C A0 80 4D */	lis r5, __vt__Q34Game10SnakeWhole5State@ha
/* 802CBC74 002C8BB4  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 802CBC78 002C8BB8  3C 60 80 4D */	lis r3, __vt__Q34Game10SnakeWhole8StateEat@ha
/* 802CBC7C 002C8BBC  90 04 00 00 */	stw r0, 0(r4)
/* 802CBC80 002C8BC0  38 00 00 09 */	li r0, 9
/* 802CBC84 002C8BC4  38 E0 00 00 */	li r7, 0
/* 802CBC88 002C8BC8  38 C5 22 E8 */	addi r6, r5, __vt__Q34Game10SnakeWhole5State@l
/* 802CBC8C 002C8BCC  90 04 00 04 */	stw r0, 4(r4)
/* 802CBC90 002C8BD0  38 A2 E4 B0 */	addi r5, r2, lbl_8051C810@sda21
/* 802CBC94 002C8BD4  38 03 21 80 */	addi r0, r3, __vt__Q34Game10SnakeWhole8StateEat@l
/* 802CBC98 002C8BD8  90 E4 00 08 */	stw r7, 8(r4)
/* 802CBC9C 002C8BDC  90 C4 00 00 */	stw r6, 0(r4)
/* 802CBCA0 002C8BE0  90 A4 00 0C */	stw r5, 0xc(r4)
/* 802CBCA4 002C8BE4  90 04 00 00 */	stw r0, 0(r4)
.L_802CBCA8:
/* 802CBCA8 002C8BE8  7F E3 FB 78 */	mr r3, r31
/* 802CBCAC 002C8BEC  4B E6 4C 5D */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 802CBCB0 002C8BF0  38 60 00 10 */	li r3, 0x10
/* 802CBCB4 002C8BF4  4B D5 81 F1 */	bl __nw__FUl
/* 802CBCB8 002C8BF8  7C 64 1B 79 */	or. r4, r3, r3
/* 802CBCBC 002C8BFC  41 82 00 44 */	beq .L_802CBD00
/* 802CBCC0 002C8C00  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 802CBCC4 002C8C04  3C C0 80 4D */	lis r6, __vt__Q34Game10SnakeWhole5State@ha
/* 802CBCC8 002C8C08  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 802CBCCC 002C8C0C  3C A0 80 49 */	lis r5, lbl_8048B7FC@ha
/* 802CBCD0 002C8C10  90 04 00 00 */	stw r0, 0(r4)
/* 802CBCD4 002C8C14  38 00 00 0A */	li r0, 0xa
/* 802CBCD8 002C8C18  3C 60 80 4D */	lis r3, __vt__Q34Game10SnakeWhole13StateStruggle@ha
/* 802CBCDC 002C8C1C  38 E0 00 00 */	li r7, 0
/* 802CBCE0 002C8C20  90 04 00 04 */	stw r0, 4(r4)
/* 802CBCE4 002C8C24  38 C6 22 E8 */	addi r6, r6, __vt__Q34Game10SnakeWhole5State@l
/* 802CBCE8 002C8C28  38 A5 B7 FC */	addi r5, r5, lbl_8048B7FC@l
/* 802CBCEC 002C8C2C  38 03 21 5C */	addi r0, r3, __vt__Q34Game10SnakeWhole13StateStruggle@l
/* 802CBCF0 002C8C30  90 E4 00 08 */	stw r7, 8(r4)
/* 802CBCF4 002C8C34  90 C4 00 00 */	stw r6, 0(r4)
/* 802CBCF8 002C8C38  90 A4 00 0C */	stw r5, 0xc(r4)
/* 802CBCFC 002C8C3C  90 04 00 00 */	stw r0, 0(r4)
.L_802CBD00:
/* 802CBD00 002C8C40  7F E3 FB 78 */	mr r3, r31
/* 802CBD04 002C8C44  4B E6 4C 05 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 802CBD08 002C8C48  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802CBD0C 002C8C4C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802CBD10 002C8C50  7C 08 03 A6 */	mtlr r0
/* 802CBD14 002C8C54  38 21 00 10 */	addi r1, r1, 0x10
/* 802CBD18 002C8C58  4E 80 00 20 */	blr 

.global init__Q34Game10SnakeWhole9StateDeadFPQ24Game9EnemyBasePQ24Game8StateArg
init__Q34Game10SnakeWhole9StateDeadFPQ24Game9EnemyBasePQ24Game8StateArg:
/* 802CBD1C 002C8C5C  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 802CBD20 002C8C60  7C 08 02 A6 */	mflr r0
/* 802CBD24 002C8C64  90 01 00 34 */	stw r0, 0x34(r1)
/* 802CBD28 002C8C68  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 802CBD2C 002C8C6C  7C 9F 23 78 */	mr r31, r4
/* 802CBD30 002C8C70  7F E3 FB 78 */	mr r3, r31
/* 802CBD34 002C8C74  4B E3 99 ED */	bl deathProcedure__Q24Game9EnemyBaseFv
/* 802CBD38 002C8C78  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 802CBD3C 002C8C7C  7F E3 FB 78 */	mr r3, r31
/* 802CBD40 002C8C80  C0 02 E4 B4 */	lfs f0, lbl_8051C814@sda21(r2)
/* 802CBD44 002C8C84  54 00 06 B0 */	rlwinm r0, r0, 0, 0x1a, 0x18
/* 802CBD48 002C8C88  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 802CBD4C 002C8C8C  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 802CBD50 002C8C90  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 802CBD54 002C8C94  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 802CBD58 002C8C98  4B E3 5C 25 */	bl setEmotionCaution__Q24Game9EnemyBaseFv
/* 802CBD5C 002C8C9C  7F E3 FB 78 */	mr r3, r31
/* 802CBD60 002C8CA0  38 80 00 00 */	li r4, 0
/* 802CBD64 002C8CA4  38 A0 00 00 */	li r5, 0
/* 802CBD68 002C8CA8  4B E3 92 9D */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 802CBD6C 002C8CAC  7F E3 FB 78 */	mr r3, r31
/* 802CBD70 002C8CB0  48 00 56 15 */	bl createDeadStartEffect__Q34Game10SnakeWhole3ObjFv
/* 802CBD74 002C8CB4  7F E4 FB 78 */	mr r4, r31
/* 802CBD78 002C8CB8  38 61 00 08 */	addi r3, r1, 8
/* 802CBD7C 002C8CBC  81 9F 00 00 */	lwz r12, 0(r31)
/* 802CBD80 002C8CC0  81 8C 00 08 */	lwz r12, 8(r12)
/* 802CBD84 002C8CC4  7D 89 03 A6 */	mtctr r12
/* 802CBD88 002C8CC8  4E 80 04 21 */	bctrl 
/* 802CBD8C 002C8CCC  C0 41 00 08 */	lfs f2, 8(r1)
/* 802CBD90 002C8CD0  38 A1 00 14 */	addi r5, r1, 0x14
/* 802CBD94 002C8CD4  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 802CBD98 002C8CD8  38 80 00 00 */	li r4, 0
/* 802CBD9C 002C8CDC  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 802CBDA0 002C8CE0  38 C0 00 02 */	li r6, 2
/* 802CBDA4 002C8CE4  D0 41 00 14 */	stfs f2, 0x14(r1)
/* 802CBDA8 002C8CE8  80 6D 96 A0 */	lwz r3, cameraMgr__4Game@sda21(r13)
/* 802CBDAC 002C8CEC  D0 21 00 18 */	stfs f1, 0x18(r1)
/* 802CBDB0 002C8CF0  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 802CBDB4 002C8CF4  4B F8 64 89 */	bl "startVibration__Q24Game9CameraMgrFiR10Vector3<f>i"
/* 802CBDB8 002C8CF8  80 6D 96 A8 */	lwz r3, rumbleMgr__4Game@sda21(r13)
/* 802CBDBC 002C8CFC  38 A1 00 14 */	addi r5, r1, 0x14
/* 802CBDC0 002C8D00  38 80 00 0D */	li r4, 0xd
/* 802CBDC4 002C8D04  38 C0 00 02 */	li r6, 2
/* 802CBDC8 002C8D08  4B F8 79 B9 */	bl "startRumble__Q24Game9RumbleMgrFiR10Vector3<f>i"
/* 802CBDCC 002C8D0C  80 01 00 34 */	lwz r0, 0x34(r1)
/* 802CBDD0 002C8D10  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 802CBDD4 002C8D14  7C 08 03 A6 */	mtlr r0
/* 802CBDD8 002C8D18  38 21 00 30 */	addi r1, r1, 0x30
/* 802CBDDC 002C8D1C  4E 80 00 20 */	blr 

.global exec__Q34Game10SnakeWhole9StateDeadFPQ24Game9EnemyBase
exec__Q34Game10SnakeWhole9StateDeadFPQ24Game9EnemyBase:
/* 802CBDE0 002C8D20  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 802CBDE4 002C8D24  7C 08 02 A6 */	mflr r0
/* 802CBDE8 002C8D28  90 01 00 64 */	stw r0, 0x64(r1)
/* 802CBDEC 002C8D2C  93 E1 00 5C */	stw r31, 0x5c(r1)
/* 802CBDF0 002C8D30  7C 9F 23 78 */	mr r31, r4
/* 802CBDF4 002C8D34  80 64 01 88 */	lwz r3, 0x188(r4)
/* 802CBDF8 002C8D38  88 03 00 24 */	lbz r0, 0x24(r3)
/* 802CBDFC 002C8D3C  28 00 00 00 */	cmplwi r0, 0
/* 802CBE00 002C8D40  41 82 01 8C */	beq .L_802CBF8C
/* 802CBE04 002C8D44  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 802CBE08 002C8D48  28 00 00 02 */	cmplwi r0, 2
/* 802CBE0C 002C8D4C  40 82 00 2C */	bne .L_802CBE38
/* 802CBE10 002C8D50  7F E3 FB 78 */	mr r3, r31
/* 802CBE14 002C8D54  48 00 4E 3D */	bl deleteJointShadow__Q34Game10SnakeWhole3ObjFv
/* 802CBE18 002C8D58  7F E3 FB 78 */	mr r3, r31
/* 802CBE1C 002C8D5C  48 00 55 9D */	bl createDeadFinishEffect__Q34Game10SnakeWhole3ObjFv
/* 802CBE20 002C8D60  7F E3 FB 78 */	mr r3, r31
/* 802CBE24 002C8D64  81 9F 00 00 */	lwz r12, 0(r31)
/* 802CBE28 002C8D68  81 8C 02 64 */	lwz r12, 0x264(r12)
/* 802CBE2C 002C8D6C  7D 89 03 A6 */	mtctr r12
/* 802CBE30 002C8D70  4E 80 04 21 */	bctrl 
/* 802CBE34 002C8D74  48 00 01 58 */	b .L_802CBF8C
.L_802CBE38:
/* 802CBE38 002C8D78  28 00 00 03 */	cmplwi r0, 3
/* 802CBE3C 002C8D7C  40 82 00 6C */	bne .L_802CBEA8
/* 802CBE40 002C8D80  C0 22 E4 B8 */	lfs f1, lbl_8051C818@sda21(r2)
/* 802CBE44 002C8D84  7F E3 FB 78 */	mr r3, r31
/* 802CBE48 002C8D88  48 00 56 05 */	bl createWalkSmokeEffect__Q34Game10SnakeWhole3ObjFf
/* 802CBE4C 002C8D8C  7F E4 FB 78 */	mr r4, r31
/* 802CBE50 002C8D90  38 61 00 20 */	addi r3, r1, 0x20
/* 802CBE54 002C8D94  81 9F 00 00 */	lwz r12, 0(r31)
/* 802CBE58 002C8D98  81 8C 00 08 */	lwz r12, 8(r12)
/* 802CBE5C 002C8D9C  7D 89 03 A6 */	mtctr r12
/* 802CBE60 002C8DA0  4E 80 04 21 */	bctrl 
/* 802CBE64 002C8DA4  C0 41 00 20 */	lfs f2, 0x20(r1)
/* 802CBE68 002C8DA8  38 A1 00 44 */	addi r5, r1, 0x44
/* 802CBE6C 002C8DAC  C0 21 00 24 */	lfs f1, 0x24(r1)
/* 802CBE70 002C8DB0  38 80 00 03 */	li r4, 3
/* 802CBE74 002C8DB4  C0 01 00 28 */	lfs f0, 0x28(r1)
/* 802CBE78 002C8DB8  38 C0 00 02 */	li r6, 2
/* 802CBE7C 002C8DBC  D0 41 00 44 */	stfs f2, 0x44(r1)
/* 802CBE80 002C8DC0  80 6D 96 A0 */	lwz r3, cameraMgr__4Game@sda21(r13)
/* 802CBE84 002C8DC4  D0 21 00 48 */	stfs f1, 0x48(r1)
/* 802CBE88 002C8DC8  D0 01 00 4C */	stfs f0, 0x4c(r1)
/* 802CBE8C 002C8DCC  4B F8 63 B1 */	bl "startVibration__Q24Game9CameraMgrFiR10Vector3<f>i"
/* 802CBE90 002C8DD0  80 6D 96 A8 */	lwz r3, rumbleMgr__4Game@sda21(r13)
/* 802CBE94 002C8DD4  38 A1 00 44 */	addi r5, r1, 0x44
/* 802CBE98 002C8DD8  38 80 00 0B */	li r4, 0xb
/* 802CBE9C 002C8DDC  38 C0 00 02 */	li r6, 2
/* 802CBEA0 002C8DE0  4B F8 78 E1 */	bl "startRumble__Q24Game9RumbleMgrFiR10Vector3<f>i"
/* 802CBEA4 002C8DE4  48 00 00 E8 */	b .L_802CBF8C
.L_802CBEA8:
/* 802CBEA8 002C8DE8  28 00 00 04 */	cmplwi r0, 4
/* 802CBEAC 002C8DEC  40 82 00 6C */	bne .L_802CBF18
/* 802CBEB0 002C8DF0  C0 22 E4 BC */	lfs f1, lbl_8051C81C@sda21(r2)
/* 802CBEB4 002C8DF4  7F E3 FB 78 */	mr r3, r31
/* 802CBEB8 002C8DF8  48 00 55 95 */	bl createWalkSmokeEffect__Q34Game10SnakeWhole3ObjFf
/* 802CBEBC 002C8DFC  7F E4 FB 78 */	mr r4, r31
/* 802CBEC0 002C8E00  38 61 00 14 */	addi r3, r1, 0x14
/* 802CBEC4 002C8E04  81 9F 00 00 */	lwz r12, 0(r31)
/* 802CBEC8 002C8E08  81 8C 00 08 */	lwz r12, 8(r12)
/* 802CBECC 002C8E0C  7D 89 03 A6 */	mtctr r12
/* 802CBED0 002C8E10  4E 80 04 21 */	bctrl 
/* 802CBED4 002C8E14  C0 41 00 14 */	lfs f2, 0x14(r1)
/* 802CBED8 002C8E18  38 A1 00 38 */	addi r5, r1, 0x38
/* 802CBEDC 002C8E1C  C0 21 00 18 */	lfs f1, 0x18(r1)
/* 802CBEE0 002C8E20  38 80 00 03 */	li r4, 3
/* 802CBEE4 002C8E24  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 802CBEE8 002C8E28  38 C0 00 02 */	li r6, 2
/* 802CBEEC 002C8E2C  D0 41 00 38 */	stfs f2, 0x38(r1)
/* 802CBEF0 002C8E30  80 6D 96 A0 */	lwz r3, cameraMgr__4Game@sda21(r13)
/* 802CBEF4 002C8E34  D0 21 00 3C */	stfs f1, 0x3c(r1)
/* 802CBEF8 002C8E38  D0 01 00 40 */	stfs f0, 0x40(r1)
/* 802CBEFC 002C8E3C  4B F8 63 41 */	bl "startVibration__Q24Game9CameraMgrFiR10Vector3<f>i"
/* 802CBF00 002C8E40  80 6D 96 A8 */	lwz r3, rumbleMgr__4Game@sda21(r13)
/* 802CBF04 002C8E44  38 A1 00 38 */	addi r5, r1, 0x38
/* 802CBF08 002C8E48  38 80 00 0B */	li r4, 0xb
/* 802CBF0C 002C8E4C  38 C0 00 02 */	li r6, 2
/* 802CBF10 002C8E50  4B F8 78 71 */	bl "startRumble__Q24Game9RumbleMgrFiR10Vector3<f>i"
/* 802CBF14 002C8E54  48 00 00 78 */	b .L_802CBF8C
.L_802CBF18:
/* 802CBF18 002C8E58  28 00 00 05 */	cmplwi r0, 5
/* 802CBF1C 002C8E5C  40 82 00 5C */	bne .L_802CBF78
/* 802CBF20 002C8E60  81 84 00 00 */	lwz r12, 0(r4)
/* 802CBF24 002C8E64  38 61 00 08 */	addi r3, r1, 8
/* 802CBF28 002C8E68  81 8C 00 08 */	lwz r12, 8(r12)
/* 802CBF2C 002C8E6C  7D 89 03 A6 */	mtctr r12
/* 802CBF30 002C8E70  4E 80 04 21 */	bctrl 
/* 802CBF34 002C8E74  C0 41 00 08 */	lfs f2, 8(r1)
/* 802CBF38 002C8E78  38 A1 00 2C */	addi r5, r1, 0x2c
/* 802CBF3C 002C8E7C  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 802CBF40 002C8E80  38 80 00 08 */	li r4, 8
/* 802CBF44 002C8E84  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 802CBF48 002C8E88  38 C0 00 02 */	li r6, 2
/* 802CBF4C 002C8E8C  D0 41 00 2C */	stfs f2, 0x2c(r1)
/* 802CBF50 002C8E90  80 6D 96 A0 */	lwz r3, cameraMgr__4Game@sda21(r13)
/* 802CBF54 002C8E94  D0 21 00 30 */	stfs f1, 0x30(r1)
/* 802CBF58 002C8E98  D0 01 00 34 */	stfs f0, 0x34(r1)
/* 802CBF5C 002C8E9C  4B F8 62 E1 */	bl "startVibration__Q24Game9CameraMgrFiR10Vector3<f>i"
/* 802CBF60 002C8EA0  80 6D 96 A8 */	lwz r3, rumbleMgr__4Game@sda21(r13)
/* 802CBF64 002C8EA4  38 A1 00 2C */	addi r5, r1, 0x2c
/* 802CBF68 002C8EA8  38 80 00 0D */	li r4, 0xd
/* 802CBF6C 002C8EAC  38 C0 00 02 */	li r6, 2
/* 802CBF70 002C8EB0  4B F8 78 11 */	bl "startRumble__Q24Game9RumbleMgrFiR10Vector3<f>i"
/* 802CBF74 002C8EB4  48 00 00 18 */	b .L_802CBF8C
.L_802CBF78:
/* 802CBF78 002C8EB8  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 802CBF7C 002C8EBC  40 82 00 10 */	bne .L_802CBF8C
/* 802CBF80 002C8EC0  7F E3 FB 78 */	mr r3, r31
/* 802CBF84 002C8EC4  38 80 00 00 */	li r4, 0
/* 802CBF88 002C8EC8  4B E6 F1 69 */	bl kill__Q24Game8CreatureFPQ24Game15CreatureKillArg
.L_802CBF8C:
/* 802CBF8C 002C8ECC  80 01 00 64 */	lwz r0, 0x64(r1)
/* 802CBF90 002C8ED0  83 E1 00 5C */	lwz r31, 0x5c(r1)
/* 802CBF94 002C8ED4  7C 08 03 A6 */	mtlr r0
/* 802CBF98 002C8ED8  38 21 00 60 */	addi r1, r1, 0x60
/* 802CBF9C 002C8EDC  4E 80 00 20 */	blr 

.global cleanup__Q34Game10SnakeWhole9StateDeadFPQ24Game9EnemyBase
cleanup__Q34Game10SnakeWhole9StateDeadFPQ24Game9EnemyBase:
/* 802CBFA0 002C8EE0  4E 80 00 20 */	blr 

.global init__Q34Game10SnakeWhole9StateStayFPQ24Game9EnemyBasePQ24Game8StateArg
init__Q34Game10SnakeWhole9StateStayFPQ24Game9EnemyBasePQ24Game8StateArg:
/* 802CBFA4 002C8EE4  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 802CBFA8 002C8EE8  7C 08 02 A6 */	mflr r0
/* 802CBFAC 002C8EEC  C0 02 E4 B4 */	lfs f0, lbl_8051C814@sda21(r2)
/* 802CBFB0 002C8EF0  90 01 00 34 */	stw r0, 0x34(r1)
/* 802CBFB4 002C8EF4  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 802CBFB8 002C8EF8  7C 9F 23 78 */	mr r31, r4
/* 802CBFBC 002C8EFC  7F E3 FB 78 */	mr r3, r31
/* 802CBFC0 002C8F00  D0 04 02 C4 */	stfs f0, 0x2c4(r4)
/* 802CBFC4 002C8F04  48 00 4C 69 */	bl finishJointShadow__Q34Game10SnakeWhole3ObjFv
/* 802CBFC8 002C8F08  7F E4 FB 78 */	mr r4, r31
/* 802CBFCC 002C8F0C  38 61 00 08 */	addi r3, r1, 8
/* 802CBFD0 002C8F10  81 9F 00 00 */	lwz r12, 0(r31)
/* 802CBFD4 002C8F14  81 8C 00 08 */	lwz r12, 8(r12)
/* 802CBFD8 002C8F18  7D 89 03 A6 */	mtctr r12
/* 802CBFDC 002C8F1C  4E 80 04 21 */	bctrl 
/* 802CBFE0 002C8F20  C0 41 00 08 */	lfs f2, 8(r1)
/* 802CBFE4 002C8F24  7F E3 FB 78 */	mr r3, r31
/* 802CBFE8 002C8F28  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 802CBFEC 002C8F2C  38 81 00 14 */	addi r4, r1, 0x14
/* 802CBFF0 002C8F30  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 802CBFF4 002C8F34  D0 41 00 14 */	stfs f2, 0x14(r1)
/* 802CBFF8 002C8F38  D0 21 00 18 */	stfs f1, 0x18(r1)
/* 802CBFFC 002C8F3C  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 802CC000 002C8F40  81 9F 00 00 */	lwz r12, 0(r31)
/* 802CC004 002C8F44  81 8C 00 70 */	lwz r12, 0x70(r12)
/* 802CC008 002C8F48  7D 89 03 A6 */	mtctr r12
/* 802CC00C 002C8F4C  4E 80 04 21 */	bctrl 
/* 802CC010 002C8F50  7F E3 FB 78 */	mr r3, r31
/* 802CC014 002C8F54  38 80 00 00 */	li r4, 0
/* 802CC018 002C8F58  81 9F 00 00 */	lwz r12, 0(r31)
/* 802CC01C 002C8F5C  81 8C 00 A4 */	lwz r12, 0xa4(r12)
/* 802CC020 002C8F60  7D 89 03 A6 */	mtctr r12
/* 802CC024 002C8F64  4E 80 04 21 */	bctrl 
/* 802CC028 002C8F68  80 9F 01 E0 */	lwz r4, 0x1e0(r31)
/* 802CC02C 002C8F6C  38 00 00 01 */	li r0, 1
/* 802CC030 002C8F70  7F E3 FB 78 */	mr r3, r31
/* 802CC034 002C8F74  60 84 00 01 */	ori r4, r4, 1
/* 802CC038 002C8F78  90 9F 01 E0 */	stw r4, 0x1e0(r31)
/* 802CC03C 002C8F7C  98 1F 02 C0 */	stb r0, 0x2c0(r31)
/* 802CC040 002C8F80  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 802CC044 002C8F84  64 00 00 40 */	oris r0, r0, 0x40
/* 802CC048 002C8F88  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 802CC04C 002C8F8C  4B E3 B7 31 */	bl hardConstraintOn__Q24Game9EnemyBaseFv
/* 802CC050 002C8F90  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 802CC054 002C8F94  7F E3 FB 78 */	mr r3, r31
/* 802CC058 002C8F98  C0 02 E4 B4 */	lfs f0, lbl_8051C814@sda21(r2)
/* 802CC05C 002C8F9C  38 80 00 01 */	li r4, 1
/* 802CC060 002C8FA0  54 00 04 5E */	rlwinm r0, r0, 0, 0x11, 0xf
/* 802CC064 002C8FA4  38 A0 00 00 */	li r5, 0
/* 802CC068 002C8FA8  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 802CC06C 002C8FAC  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 802CC070 002C8FB0  64 00 40 00 */	oris r0, r0, 0x4000
/* 802CC074 002C8FB4  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 802CC078 002C8FB8  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 802CC07C 002C8FBC  54 00 05 66 */	rlwinm r0, r0, 0, 0x15, 0x13
/* 802CC080 002C8FC0  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 802CC084 002C8FC4  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 802CC088 002C8FC8  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 802CC08C 002C8FCC  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 802CC090 002C8FD0  4B E3 8F 75 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 802CC094 002C8FD4  7F E3 FB 78 */	mr r3, r31
/* 802CC098 002C8FD8  4B E3 B2 49 */	bl stopMotion__Q24Game9EnemyBaseFv
/* 802CC09C 002C8FDC  80 1F 02 80 */	lwz r0, 0x280(r31)
/* 802CC0A0 002C8FE0  28 00 00 00 */	cmplwi r0, 0
/* 802CC0A4 002C8FE4  41 82 00 18 */	beq .L_802CC0BC
/* 802CC0A8 002C8FE8  7F E3 FB 78 */	mr r3, r31
/* 802CC0AC 002C8FEC  81 9F 00 00 */	lwz r12, 0(r31)
/* 802CC0B0 002C8FF0  81 8C 02 54 */	lwz r12, 0x254(r12)
/* 802CC0B4 002C8FF4  7D 89 03 A6 */	mtctr r12
/* 802CC0B8 002C8FF8  4E 80 04 21 */	bctrl 
.L_802CC0BC:
/* 802CC0BC 002C8FFC  80 01 00 34 */	lwz r0, 0x34(r1)
/* 802CC0C0 002C9000  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 802CC0C4 002C9004  7C 08 03 A6 */	mtlr r0
/* 802CC0C8 002C9008  38 21 00 30 */	addi r1, r1, 0x30
/* 802CC0CC 002C900C  4E 80 00 20 */	blr 

.global exec__Q34Game10SnakeWhole9StateStayFPQ24Game9EnemyBase
exec__Q34Game10SnakeWhole9StateStayFPQ24Game9EnemyBase:
/* 802CC0D0 002C9010  94 21 FF 60 */	stwu r1, -0xa0(r1)
/* 802CC0D4 002C9014  7C 08 02 A6 */	mflr r0
/* 802CC0D8 002C9018  90 01 00 A4 */	stw r0, 0xa4(r1)
/* 802CC0DC 002C901C  DB E1 00 90 */	stfd f31, 0x90(r1)
/* 802CC0E0 002C9020  F3 E1 00 98 */	psq_st f31, 152(r1), 0, qr0
/* 802CC0E4 002C9024  DB C1 00 80 */	stfd f30, 0x80(r1)
/* 802CC0E8 002C9028  F3 C1 00 88 */	psq_st f30, 136(r1), 0, qr0
/* 802CC0EC 002C902C  DB A1 00 70 */	stfd f29, 0x70(r1)
/* 802CC0F0 002C9030  F3 A1 00 78 */	psq_st f29, 120(r1), 0, qr0
/* 802CC0F4 002C9034  DB 81 00 60 */	stfd f28, 0x60(r1)
/* 802CC0F8 002C9038  F3 81 00 68 */	psq_st f28, 104(r1), 0, qr0
/* 802CC0FC 002C903C  BF 61 00 4C */	stmw r27, 0x4c(r1)
/* 802CC100 002C9040  7C 7C 1B 78 */	mr r28, r3
/* 802CC104 002C9044  80 64 00 C0 */	lwz r3, 0xc0(r4)
/* 802CC108 002C9048  C0 24 02 C4 */	lfs f1, 0x2c4(r4)
/* 802CC10C 002C904C  7C 9F 23 78 */	mr r31, r4
/* 802CC110 002C9050  C0 03 08 6C */	lfs f0, 0x86c(r3)
/* 802CC114 002C9054  3B C0 00 00 */	li r30, 0
/* 802CC118 002C9058  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802CC11C 002C905C  40 81 04 E0 */	ble .L_802CC5FC
/* 802CC120 002C9060  C0 03 03 5C */	lfs f0, 0x35c(r3)
/* 802CC124 002C9064  3C 60 80 4B */	lis r3, "__vt__22Iterator<Q24Game4Piki>"@ha
/* 802CC128 002C9068  38 00 00 00 */	li r0, 0
/* 802CC12C 002C906C  C3 FF 01 98 */	lfs f31, 0x198(r31)
/* 802CC130 002C9070  C3 DF 01 9C */	lfs f30, 0x19c(r31)
/* 802CC134 002C9074  28 00 00 00 */	cmplwi r0, 0
/* 802CC138 002C9078  C3 BF 01 A0 */	lfs f29, 0x1a0(r31)
/* 802CC13C 002C907C  38 83 BC 9C */	addi r4, r3, "__vt__22Iterator<Q24Game4Piki>"@l
/* 802CC140 002C9080  80 6D 92 F4 */	lwz r3, pikiMgr__4Game@sda21(r13)
/* 802CC144 002C9084  EF 80 00 32 */	fmuls f28, f0, f0
/* 802CC148 002C9088  90 81 00 30 */	stw r4, 0x30(r1)
/* 802CC14C 002C908C  3B A0 00 01 */	li r29, 1
/* 802CC150 002C9090  90 01 00 3C */	stw r0, 0x3c(r1)
/* 802CC154 002C9094  90 01 00 34 */	stw r0, 0x34(r1)
/* 802CC158 002C9098  90 61 00 38 */	stw r3, 0x38(r1)
/* 802CC15C 002C909C  40 82 00 1C */	bne .L_802CC178
/* 802CC160 002C90A0  81 83 00 00 */	lwz r12, 0(r3)
/* 802CC164 002C90A4  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 802CC168 002C90A8  7D 89 03 A6 */	mtctr r12
/* 802CC16C 002C90AC  4E 80 04 21 */	bctrl 
/* 802CC170 002C90B0  90 61 00 34 */	stw r3, 0x34(r1)
/* 802CC174 002C90B4  48 00 02 10 */	b .L_802CC384
.L_802CC178:
/* 802CC178 002C90B8  81 83 00 00 */	lwz r12, 0(r3)
/* 802CC17C 002C90BC  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 802CC180 002C90C0  7D 89 03 A6 */	mtctr r12
/* 802CC184 002C90C4  4E 80 04 21 */	bctrl 
/* 802CC188 002C90C8  90 61 00 34 */	stw r3, 0x34(r1)
/* 802CC18C 002C90CC  48 00 00 58 */	b .L_802CC1E4
.L_802CC190:
/* 802CC190 002C90D0  80 61 00 38 */	lwz r3, 0x38(r1)
/* 802CC194 002C90D4  80 81 00 34 */	lwz r4, 0x34(r1)
/* 802CC198 002C90D8  81 83 00 00 */	lwz r12, 0(r3)
/* 802CC19C 002C90DC  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 802CC1A0 002C90E0  7D 89 03 A6 */	mtctr r12
/* 802CC1A4 002C90E4  4E 80 04 21 */	bctrl 
/* 802CC1A8 002C90E8  7C 64 1B 78 */	mr r4, r3
/* 802CC1AC 002C90EC  80 61 00 3C */	lwz r3, 0x3c(r1)
/* 802CC1B0 002C90F0  81 83 00 00 */	lwz r12, 0(r3)
/* 802CC1B4 002C90F4  81 8C 00 08 */	lwz r12, 8(r12)
/* 802CC1B8 002C90F8  7D 89 03 A6 */	mtctr r12
/* 802CC1BC 002C90FC  4E 80 04 21 */	bctrl 
/* 802CC1C0 002C9100  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802CC1C4 002C9104  40 82 01 C0 */	bne .L_802CC384
/* 802CC1C8 002C9108  80 61 00 38 */	lwz r3, 0x38(r1)
/* 802CC1CC 002C910C  80 81 00 34 */	lwz r4, 0x34(r1)
/* 802CC1D0 002C9110  81 83 00 00 */	lwz r12, 0(r3)
/* 802CC1D4 002C9114  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802CC1D8 002C9118  7D 89 03 A6 */	mtctr r12
/* 802CC1DC 002C911C  4E 80 04 21 */	bctrl 
/* 802CC1E0 002C9120  90 61 00 34 */	stw r3, 0x34(r1)
.L_802CC1E4:
/* 802CC1E4 002C9124  81 81 00 30 */	lwz r12, 0x30(r1)
/* 802CC1E8 002C9128  38 61 00 30 */	addi r3, r1, 0x30
/* 802CC1EC 002C912C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 802CC1F0 002C9130  7D 89 03 A6 */	mtctr r12
/* 802CC1F4 002C9134  4E 80 04 21 */	bctrl 
/* 802CC1F8 002C9138  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802CC1FC 002C913C  41 82 FF 94 */	beq .L_802CC190
/* 802CC200 002C9140  48 00 01 84 */	b .L_802CC384
.L_802CC204:
/* 802CC204 002C9144  80 61 00 38 */	lwz r3, 0x38(r1)
/* 802CC208 002C9148  81 83 00 00 */	lwz r12, 0(r3)
/* 802CC20C 002C914C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 802CC210 002C9150  7D 89 03 A6 */	mtctr r12
/* 802CC214 002C9154  4E 80 04 21 */	bctrl 
/* 802CC218 002C9158  81 83 00 00 */	lwz r12, 0(r3)
/* 802CC21C 002C915C  7C 7B 1B 78 */	mr r27, r3
/* 802CC220 002C9160  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 802CC224 002C9164  7D 89 03 A6 */	mtctr r12
/* 802CC228 002C9168  4E 80 04 21 */	bctrl 
/* 802CC22C 002C916C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802CC230 002C9170  41 82 00 90 */	beq .L_802CC2C0
/* 802CC234 002C9174  7F 63 DB 78 */	mr r3, r27
/* 802CC238 002C9178  81 9B 00 00 */	lwz r12, 0(r27)
/* 802CC23C 002C917C  81 8C 01 C0 */	lwz r12, 0x1c0(r12)
/* 802CC240 002C9180  7D 89 03 A6 */	mtctr r12
/* 802CC244 002C9184  4E 80 04 21 */	bctrl 
/* 802CC248 002C9188  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802CC24C 002C918C  41 82 00 74 */	beq .L_802CC2C0
/* 802CC250 002C9190  7F 63 DB 78 */	mr r3, r27
/* 802CC254 002C9194  4B ED 33 35 */	bl isStickToMouth__Q24Game8CreatureFv
/* 802CC258 002C9198  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802CC25C 002C919C  40 82 00 64 */	bne .L_802CC2C0
/* 802CC260 002C91A0  7F 64 DB 78 */	mr r4, r27
/* 802CC264 002C91A4  38 61 00 14 */	addi r3, r1, 0x14
/* 802CC268 002C91A8  81 9B 00 00 */	lwz r12, 0(r27)
/* 802CC26C 002C91AC  81 8C 00 08 */	lwz r12, 8(r12)
/* 802CC270 002C91B0  7D 89 03 A6 */	mtctr r12
/* 802CC274 002C91B4  4E 80 04 21 */	bctrl 
/* 802CC278 002C91B8  C0 01 00 18 */	lfs f0, 0x18(r1)
/* 802CC27C 002C91BC  C0 21 00 14 */	lfs f1, 0x14(r1)
/* 802CC280 002C91C0  EC 5E 00 28 */	fsubs f2, f30, f0
/* 802CC284 002C91C4  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 802CC288 002C91C8  EC 7F 08 28 */	fsubs f3, f31, f1
/* 802CC28C 002C91CC  EC 3D 00 28 */	fsubs f1, f29, f0
/* 802CC290 002C91D0  EC 02 00 B2 */	fmuls f0, f2, f2
/* 802CC294 002C91D4  EC 03 00 FA */	fmadds f0, f3, f3, f0
/* 802CC298 002C91D8  EC 21 00 7A */	fmadds f1, f1, f1, f0
/* 802CC29C 002C91DC  FC 01 E0 40 */	fcmpo cr0, f1, f28
/* 802CC2A0 002C91E0  40 80 00 10 */	bge .L_802CC2B0
/* 802CC2A4 002C91E4  7F 7E DB 78 */	mr r30, r27
/* 802CC2A8 002C91E8  3B A0 00 00 */	li r29, 0
/* 802CC2AC 002C91EC  48 00 00 14 */	b .L_802CC2C0
.L_802CC2B0:
/* 802CC2B0 002C91F0  C0 02 E4 C0 */	lfs f0, lbl_8051C820@sda21(r2)
/* 802CC2B4 002C91F4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802CC2B8 002C91F8  40 80 00 08 */	bge .L_802CC2C0
/* 802CC2BC 002C91FC  3B A0 00 00 */	li r29, 0
.L_802CC2C0:
/* 802CC2C0 002C9200  28 1E 00 00 */	cmplwi r30, 0
/* 802CC2C4 002C9204  40 82 00 E0 */	bne .L_802CC3A4
/* 802CC2C8 002C9208  80 01 00 3C */	lwz r0, 0x3c(r1)
/* 802CC2CC 002C920C  28 00 00 00 */	cmplwi r0, 0
/* 802CC2D0 002C9210  40 82 00 24 */	bne .L_802CC2F4
/* 802CC2D4 002C9214  80 61 00 38 */	lwz r3, 0x38(r1)
/* 802CC2D8 002C9218  80 81 00 34 */	lwz r4, 0x34(r1)
/* 802CC2DC 002C921C  81 83 00 00 */	lwz r12, 0(r3)
/* 802CC2E0 002C9220  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802CC2E4 002C9224  7D 89 03 A6 */	mtctr r12
/* 802CC2E8 002C9228  4E 80 04 21 */	bctrl 
/* 802CC2EC 002C922C  90 61 00 34 */	stw r3, 0x34(r1)
/* 802CC2F0 002C9230  48 00 00 94 */	b .L_802CC384
.L_802CC2F4:
/* 802CC2F4 002C9234  80 61 00 38 */	lwz r3, 0x38(r1)
/* 802CC2F8 002C9238  80 81 00 34 */	lwz r4, 0x34(r1)
/* 802CC2FC 002C923C  81 83 00 00 */	lwz r12, 0(r3)
/* 802CC300 002C9240  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802CC304 002C9244  7D 89 03 A6 */	mtctr r12
/* 802CC308 002C9248  4E 80 04 21 */	bctrl 
/* 802CC30C 002C924C  90 61 00 34 */	stw r3, 0x34(r1)
/* 802CC310 002C9250  48 00 00 58 */	b .L_802CC368
.L_802CC314:
/* 802CC314 002C9254  80 61 00 38 */	lwz r3, 0x38(r1)
/* 802CC318 002C9258  80 81 00 34 */	lwz r4, 0x34(r1)
/* 802CC31C 002C925C  81 83 00 00 */	lwz r12, 0(r3)
/* 802CC320 002C9260  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 802CC324 002C9264  7D 89 03 A6 */	mtctr r12
/* 802CC328 002C9268  4E 80 04 21 */	bctrl 
/* 802CC32C 002C926C  7C 64 1B 78 */	mr r4, r3
/* 802CC330 002C9270  80 61 00 3C */	lwz r3, 0x3c(r1)
/* 802CC334 002C9274  81 83 00 00 */	lwz r12, 0(r3)
/* 802CC338 002C9278  81 8C 00 08 */	lwz r12, 8(r12)
/* 802CC33C 002C927C  7D 89 03 A6 */	mtctr r12
/* 802CC340 002C9280  4E 80 04 21 */	bctrl 
/* 802CC344 002C9284  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802CC348 002C9288  40 82 00 3C */	bne .L_802CC384
/* 802CC34C 002C928C  80 61 00 38 */	lwz r3, 0x38(r1)
/* 802CC350 002C9290  80 81 00 34 */	lwz r4, 0x34(r1)
/* 802CC354 002C9294  81 83 00 00 */	lwz r12, 0(r3)
/* 802CC358 002C9298  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802CC35C 002C929C  7D 89 03 A6 */	mtctr r12
/* 802CC360 002C92A0  4E 80 04 21 */	bctrl 
/* 802CC364 002C92A4  90 61 00 34 */	stw r3, 0x34(r1)
.L_802CC368:
/* 802CC368 002C92A8  81 81 00 30 */	lwz r12, 0x30(r1)
/* 802CC36C 002C92AC  38 61 00 30 */	addi r3, r1, 0x30
/* 802CC370 002C92B0  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 802CC374 002C92B4  7D 89 03 A6 */	mtctr r12
/* 802CC378 002C92B8  4E 80 04 21 */	bctrl 
/* 802CC37C 002C92BC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802CC380 002C92C0  41 82 FF 94 */	beq .L_802CC314
.L_802CC384:
/* 802CC384 002C92C4  80 61 00 38 */	lwz r3, 0x38(r1)
/* 802CC388 002C92C8  81 83 00 00 */	lwz r12, 0(r3)
/* 802CC38C 002C92CC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802CC390 002C92D0  7D 89 03 A6 */	mtctr r12
/* 802CC394 002C92D4  4E 80 04 21 */	bctrl 
/* 802CC398 002C92D8  80 81 00 34 */	lwz r4, 0x34(r1)
/* 802CC39C 002C92DC  7C 04 18 40 */	cmplw r4, r3
/* 802CC3A0 002C92E0  40 82 FE 64 */	bne .L_802CC204
.L_802CC3A4:
/* 802CC3A4 002C92E4  28 1E 00 00 */	cmplwi r30, 0
/* 802CC3A8 002C92E8  40 82 02 44 */	bne .L_802CC5EC
/* 802CC3AC 002C92EC  38 00 00 00 */	li r0, 0
/* 802CC3B0 002C92F0  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 802CC3B4 002C92F4  3C 80 80 4B */	lis r4, "__vt__22Iterator<Q24Game4Navi>"@ha
/* 802CC3B8 002C92F8  90 01 00 2C */	stw r0, 0x2c(r1)
/* 802CC3BC 002C92FC  38 84 BC B4 */	addi r4, r4, "__vt__22Iterator<Q24Game4Navi>"@l
/* 802CC3C0 002C9300  28 00 00 00 */	cmplwi r0, 0
/* 802CC3C4 002C9304  90 81 00 20 */	stw r4, 0x20(r1)
/* 802CC3C8 002C9308  90 01 00 24 */	stw r0, 0x24(r1)
/* 802CC3CC 002C930C  90 61 00 28 */	stw r3, 0x28(r1)
/* 802CC3D0 002C9310  40 82 00 1C */	bne .L_802CC3EC
/* 802CC3D4 002C9314  81 83 00 00 */	lwz r12, 0(r3)
/* 802CC3D8 002C9318  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 802CC3DC 002C931C  7D 89 03 A6 */	mtctr r12
/* 802CC3E0 002C9320  4E 80 04 21 */	bctrl 
/* 802CC3E4 002C9324  90 61 00 24 */	stw r3, 0x24(r1)
/* 802CC3E8 002C9328  48 00 01 E4 */	b .L_802CC5CC
.L_802CC3EC:
/* 802CC3EC 002C932C  81 83 00 00 */	lwz r12, 0(r3)
/* 802CC3F0 002C9330  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 802CC3F4 002C9334  7D 89 03 A6 */	mtctr r12
/* 802CC3F8 002C9338  4E 80 04 21 */	bctrl 
/* 802CC3FC 002C933C  90 61 00 24 */	stw r3, 0x24(r1)
/* 802CC400 002C9340  48 00 00 58 */	b .L_802CC458
.L_802CC404:
/* 802CC404 002C9344  80 61 00 28 */	lwz r3, 0x28(r1)
/* 802CC408 002C9348  80 81 00 24 */	lwz r4, 0x24(r1)
/* 802CC40C 002C934C  81 83 00 00 */	lwz r12, 0(r3)
/* 802CC410 002C9350  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 802CC414 002C9354  7D 89 03 A6 */	mtctr r12
/* 802CC418 002C9358  4E 80 04 21 */	bctrl 
/* 802CC41C 002C935C  7C 64 1B 78 */	mr r4, r3
/* 802CC420 002C9360  80 61 00 2C */	lwz r3, 0x2c(r1)
/* 802CC424 002C9364  81 83 00 00 */	lwz r12, 0(r3)
/* 802CC428 002C9368  81 8C 00 08 */	lwz r12, 8(r12)
/* 802CC42C 002C936C  7D 89 03 A6 */	mtctr r12
/* 802CC430 002C9370  4E 80 04 21 */	bctrl 
/* 802CC434 002C9374  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802CC438 002C9378  40 82 01 94 */	bne .L_802CC5CC
/* 802CC43C 002C937C  80 61 00 28 */	lwz r3, 0x28(r1)
/* 802CC440 002C9380  80 81 00 24 */	lwz r4, 0x24(r1)
/* 802CC444 002C9384  81 83 00 00 */	lwz r12, 0(r3)
/* 802CC448 002C9388  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802CC44C 002C938C  7D 89 03 A6 */	mtctr r12
/* 802CC450 002C9390  4E 80 04 21 */	bctrl 
/* 802CC454 002C9394  90 61 00 24 */	stw r3, 0x24(r1)
.L_802CC458:
/* 802CC458 002C9398  81 81 00 20 */	lwz r12, 0x20(r1)
/* 802CC45C 002C939C  38 61 00 20 */	addi r3, r1, 0x20
/* 802CC460 002C93A0  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 802CC464 002C93A4  7D 89 03 A6 */	mtctr r12
/* 802CC468 002C93A8  4E 80 04 21 */	bctrl 
/* 802CC46C 002C93AC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802CC470 002C93B0  41 82 FF 94 */	beq .L_802CC404
/* 802CC474 002C93B4  48 00 01 58 */	b .L_802CC5CC
.L_802CC478:
/* 802CC478 002C93B8  80 61 00 28 */	lwz r3, 0x28(r1)
/* 802CC47C 002C93BC  81 83 00 00 */	lwz r12, 0(r3)
/* 802CC480 002C93C0  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 802CC484 002C93C4  7D 89 03 A6 */	mtctr r12
/* 802CC488 002C93C8  4E 80 04 21 */	bctrl 
/* 802CC48C 002C93CC  81 83 00 00 */	lwz r12, 0(r3)
/* 802CC490 002C93D0  7C 7B 1B 78 */	mr r27, r3
/* 802CC494 002C93D4  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 802CC498 002C93D8  7D 89 03 A6 */	mtctr r12
/* 802CC49C 002C93DC  4E 80 04 21 */	bctrl 
/* 802CC4A0 002C93E0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802CC4A4 002C93E4  41 82 00 64 */	beq .L_802CC508
/* 802CC4A8 002C93E8  7F 64 DB 78 */	mr r4, r27
/* 802CC4AC 002C93EC  38 61 00 08 */	addi r3, r1, 8
/* 802CC4B0 002C93F0  81 9B 00 00 */	lwz r12, 0(r27)
/* 802CC4B4 002C93F4  81 8C 00 08 */	lwz r12, 8(r12)
/* 802CC4B8 002C93F8  7D 89 03 A6 */	mtctr r12
/* 802CC4BC 002C93FC  4E 80 04 21 */	bctrl 
/* 802CC4C0 002C9400  C0 01 00 0C */	lfs f0, 0xc(r1)
/* 802CC4C4 002C9404  C0 21 00 08 */	lfs f1, 8(r1)
/* 802CC4C8 002C9408  EC 5E 00 28 */	fsubs f2, f30, f0
/* 802CC4CC 002C940C  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 802CC4D0 002C9410  EC 7F 08 28 */	fsubs f3, f31, f1
/* 802CC4D4 002C9414  EC 3D 00 28 */	fsubs f1, f29, f0
/* 802CC4D8 002C9418  EC 02 00 B2 */	fmuls f0, f2, f2
/* 802CC4DC 002C941C  EC 03 00 FA */	fmadds f0, f3, f3, f0
/* 802CC4E0 002C9420  EC 21 00 7A */	fmadds f1, f1, f1, f0
/* 802CC4E4 002C9424  FC 01 E0 40 */	fcmpo cr0, f1, f28
/* 802CC4E8 002C9428  40 80 00 10 */	bge .L_802CC4F8
/* 802CC4EC 002C942C  7F 7E DB 78 */	mr r30, r27
/* 802CC4F0 002C9430  3B A0 00 00 */	li r29, 0
/* 802CC4F4 002C9434  48 00 00 14 */	b .L_802CC508
.L_802CC4F8:
/* 802CC4F8 002C9438  C0 02 E4 C0 */	lfs f0, lbl_8051C820@sda21(r2)
/* 802CC4FC 002C943C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802CC500 002C9440  40 80 00 08 */	bge .L_802CC508
/* 802CC504 002C9444  3B A0 00 00 */	li r29, 0
.L_802CC508:
/* 802CC508 002C9448  28 1E 00 00 */	cmplwi r30, 0
/* 802CC50C 002C944C  40 82 00 E0 */	bne .L_802CC5EC
/* 802CC510 002C9450  80 01 00 2C */	lwz r0, 0x2c(r1)
/* 802CC514 002C9454  28 00 00 00 */	cmplwi r0, 0
/* 802CC518 002C9458  40 82 00 24 */	bne .L_802CC53C
/* 802CC51C 002C945C  80 61 00 28 */	lwz r3, 0x28(r1)
/* 802CC520 002C9460  80 81 00 24 */	lwz r4, 0x24(r1)
/* 802CC524 002C9464  81 83 00 00 */	lwz r12, 0(r3)
/* 802CC528 002C9468  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802CC52C 002C946C  7D 89 03 A6 */	mtctr r12
/* 802CC530 002C9470  4E 80 04 21 */	bctrl 
/* 802CC534 002C9474  90 61 00 24 */	stw r3, 0x24(r1)
/* 802CC538 002C9478  48 00 00 94 */	b .L_802CC5CC
.L_802CC53C:
/* 802CC53C 002C947C  80 61 00 28 */	lwz r3, 0x28(r1)
/* 802CC540 002C9480  80 81 00 24 */	lwz r4, 0x24(r1)
/* 802CC544 002C9484  81 83 00 00 */	lwz r12, 0(r3)
/* 802CC548 002C9488  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802CC54C 002C948C  7D 89 03 A6 */	mtctr r12
/* 802CC550 002C9490  4E 80 04 21 */	bctrl 
/* 802CC554 002C9494  90 61 00 24 */	stw r3, 0x24(r1)
/* 802CC558 002C9498  48 00 00 58 */	b .L_802CC5B0
.L_802CC55C:
/* 802CC55C 002C949C  80 61 00 28 */	lwz r3, 0x28(r1)
/* 802CC560 002C94A0  80 81 00 24 */	lwz r4, 0x24(r1)
/* 802CC564 002C94A4  81 83 00 00 */	lwz r12, 0(r3)
/* 802CC568 002C94A8  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 802CC56C 002C94AC  7D 89 03 A6 */	mtctr r12
/* 802CC570 002C94B0  4E 80 04 21 */	bctrl 
/* 802CC574 002C94B4  7C 64 1B 78 */	mr r4, r3
/* 802CC578 002C94B8  80 61 00 2C */	lwz r3, 0x2c(r1)
/* 802CC57C 002C94BC  81 83 00 00 */	lwz r12, 0(r3)
/* 802CC580 002C94C0  81 8C 00 08 */	lwz r12, 8(r12)
/* 802CC584 002C94C4  7D 89 03 A6 */	mtctr r12
/* 802CC588 002C94C8  4E 80 04 21 */	bctrl 
/* 802CC58C 002C94CC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802CC590 002C94D0  40 82 00 3C */	bne .L_802CC5CC
/* 802CC594 002C94D4  80 61 00 28 */	lwz r3, 0x28(r1)
/* 802CC598 002C94D8  80 81 00 24 */	lwz r4, 0x24(r1)
/* 802CC59C 002C94DC  81 83 00 00 */	lwz r12, 0(r3)
/* 802CC5A0 002C94E0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802CC5A4 002C94E4  7D 89 03 A6 */	mtctr r12
/* 802CC5A8 002C94E8  4E 80 04 21 */	bctrl 
/* 802CC5AC 002C94EC  90 61 00 24 */	stw r3, 0x24(r1)
.L_802CC5B0:
/* 802CC5B0 002C94F0  81 81 00 20 */	lwz r12, 0x20(r1)
/* 802CC5B4 002C94F4  38 61 00 20 */	addi r3, r1, 0x20
/* 802CC5B8 002C94F8  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 802CC5BC 002C94FC  7D 89 03 A6 */	mtctr r12
/* 802CC5C0 002C9500  4E 80 04 21 */	bctrl 
/* 802CC5C4 002C9504  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802CC5C8 002C9508  41 82 FF 94 */	beq .L_802CC55C
.L_802CC5CC:
/* 802CC5CC 002C950C  80 61 00 28 */	lwz r3, 0x28(r1)
/* 802CC5D0 002C9510  81 83 00 00 */	lwz r12, 0(r3)
/* 802CC5D4 002C9514  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802CC5D8 002C9518  7D 89 03 A6 */	mtctr r12
/* 802CC5DC 002C951C  4E 80 04 21 */	bctrl 
/* 802CC5E0 002C9520  80 81 00 24 */	lwz r4, 0x24(r1)
/* 802CC5E4 002C9524  7C 04 18 40 */	cmplw r4, r3
/* 802CC5E8 002C9528  40 82 FE 90 */	bne .L_802CC478
.L_802CC5EC:
/* 802CC5EC 002C952C  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 802CC5F0 002C9530  41 82 00 0C */	beq .L_802CC5FC
/* 802CC5F4 002C9534  7F E3 FB 78 */	mr r3, r31
/* 802CC5F8 002C9538  48 00 49 3D */	bl resetBossAppearBGM__Q34Game10SnakeWhole3ObjFv
.L_802CC5FC:
/* 802CC5FC 002C953C  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 802CC600 002C9540  28 1E 00 00 */	cmplwi r30, 0
/* 802CC604 002C9544  C0 3F 02 C4 */	lfs f1, 0x2c4(r31)
/* 802CC608 002C9548  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 802CC60C 002C954C  EC 01 00 2A */	fadds f0, f1, f0
/* 802CC610 002C9550  D0 1F 02 C4 */	stfs f0, 0x2c4(r31)
/* 802CC614 002C9554  41 82 00 A0 */	beq .L_802CC6B4
/* 802CC618 002C9558  93 DF 02 30 */	stw r30, 0x230(r31)
/* 802CC61C 002C955C  7F E3 FB 78 */	mr r3, r31
/* 802CC620 002C9560  7F C4 F3 78 */	mr r4, r30
/* 802CC624 002C9564  48 00 2C 5D */	bl appearNearByTarget__Q34Game10SnakeWhole3ObjFPQ24Game8Creature
/* 802CC628 002C9568  7F E3 FB 78 */	mr r3, r31
/* 802CC62C 002C956C  48 00 49 D9 */	bl setBossAppearBGM__Q34Game10SnakeWhole3ObjFv
/* 802CC630 002C9570  83 BF 00 C0 */	lwz r29, 0xc0(r31)
/* 802CC634 002C9574  4B DF CF 6D */	bl rand
/* 802CC638 002C9578  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 802CC63C 002C957C  3C 00 43 30 */	lis r0, 0x4330
/* 802CC640 002C9580  90 61 00 44 */	stw r3, 0x44(r1)
/* 802CC644 002C9584  C8 62 E4 D0 */	lfd f3, lbl_8051C830@sda21(r2)
/* 802CC648 002C9588  90 01 00 40 */	stw r0, 0x40(r1)
/* 802CC64C 002C958C  C0 42 E4 C4 */	lfs f2, lbl_8051C824@sda21(r2)
/* 802CC650 002C9590  C8 01 00 40 */	lfd f0, 0x40(r1)
/* 802CC654 002C9594  C0 22 E4 C8 */	lfs f1, lbl_8051C828@sda21(r2)
/* 802CC658 002C9598  EC 60 18 28 */	fsubs f3, f0, f3
/* 802CC65C 002C959C  C0 1D 08 1C */	lfs f0, 0x81c(r29)
/* 802CC660 002C95A0  EC 42 00 F2 */	fmuls f2, f2, f3
/* 802CC664 002C95A4  EC 22 08 24 */	fdivs f1, f2, f1
/* 802CC668 002C95A8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802CC66C 002C95AC  40 80 00 28 */	bge .L_802CC694
/* 802CC670 002C95B0  7F 83 E3 78 */	mr r3, r28
/* 802CC674 002C95B4  7F E4 FB 78 */	mr r4, r31
/* 802CC678 002C95B8  81 9C 00 00 */	lwz r12, 0(r28)
/* 802CC67C 002C95BC  38 A0 00 02 */	li r5, 2
/* 802CC680 002C95C0  38 C0 00 00 */	li r6, 0
/* 802CC684 002C95C4  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802CC688 002C95C8  7D 89 03 A6 */	mtctr r12
/* 802CC68C 002C95CC  4E 80 04 21 */	bctrl 
/* 802CC690 002C95D0  48 00 00 24 */	b .L_802CC6B4
.L_802CC694:
/* 802CC694 002C95D4  7F 83 E3 78 */	mr r3, r28
/* 802CC698 002C95D8  7F E4 FB 78 */	mr r4, r31
/* 802CC69C 002C95DC  81 9C 00 00 */	lwz r12, 0(r28)
/* 802CC6A0 002C95E0  38 A0 00 03 */	li r5, 3
/* 802CC6A4 002C95E4  38 C0 00 00 */	li r6, 0
/* 802CC6A8 002C95E8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802CC6AC 002C95EC  7D 89 03 A6 */	mtctr r12
/* 802CC6B0 002C95F0  4E 80 04 21 */	bctrl 
.L_802CC6B4:
/* 802CC6B4 002C95F4  E3 E1 00 98 */	psq_l f31, 152(r1), 0, qr0
/* 802CC6B8 002C95F8  CB E1 00 90 */	lfd f31, 0x90(r1)
/* 802CC6BC 002C95FC  E3 C1 00 88 */	psq_l f30, 136(r1), 0, qr0
/* 802CC6C0 002C9600  CB C1 00 80 */	lfd f30, 0x80(r1)
/* 802CC6C4 002C9604  E3 A1 00 78 */	psq_l f29, 120(r1), 0, qr0
/* 802CC6C8 002C9608  CB A1 00 70 */	lfd f29, 0x70(r1)
/* 802CC6CC 002C960C  E3 81 00 68 */	psq_l f28, 104(r1), 0, qr0
/* 802CC6D0 002C9610  CB 81 00 60 */	lfd f28, 0x60(r1)
/* 802CC6D4 002C9614  BB 61 00 4C */	lmw r27, 0x4c(r1)
/* 802CC6D8 002C9618  80 01 00 A4 */	lwz r0, 0xa4(r1)
/* 802CC6DC 002C961C  7C 08 03 A6 */	mtlr r0
/* 802CC6E0 002C9620  38 21 00 A0 */	addi r1, r1, 0xa0
/* 802CC6E4 002C9624  4E 80 00 20 */	blr 

.global cleanup__Q34Game10SnakeWhole9StateStayFPQ24Game9EnemyBase
cleanup__Q34Game10SnakeWhole9StateStayFPQ24Game9EnemyBase:
/* 802CC6E8 002C9628  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802CC6EC 002C962C  7C 08 02 A6 */	mflr r0
/* 802CC6F0 002C9630  90 01 00 14 */	stw r0, 0x14(r1)
/* 802CC6F4 002C9634  7C 80 23 78 */	mr r0, r4
/* 802CC6F8 002C9638  38 80 00 01 */	li r4, 1
/* 802CC6FC 002C963C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802CC700 002C9640  7C 1F 03 78 */	mr r31, r0
/* 802CC704 002C9644  7F E3 FB 78 */	mr r3, r31
/* 802CC708 002C9648  81 9F 00 00 */	lwz r12, 0(r31)
/* 802CC70C 002C964C  81 8C 00 A4 */	lwz r12, 0xa4(r12)
/* 802CC710 002C9650  7D 89 03 A6 */	mtctr r12
/* 802CC714 002C9654  4E 80 04 21 */	bctrl 
/* 802CC718 002C9658  80 9F 01 E0 */	lwz r4, 0x1e0(r31)
/* 802CC71C 002C965C  38 00 00 00 */	li r0, 0
/* 802CC720 002C9660  7F E3 FB 78 */	mr r3, r31
/* 802CC724 002C9664  54 84 00 3C */	rlwinm r4, r4, 0, 0, 0x1e
/* 802CC728 002C9668  90 9F 01 E0 */	stw r4, 0x1e0(r31)
/* 802CC72C 002C966C  98 1F 02 C0 */	stb r0, 0x2c0(r31)
/* 802CC730 002C9670  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 802CC734 002C9674  54 00 02 90 */	rlwinm r0, r0, 0, 0xa, 8
/* 802CC738 002C9678  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 802CC73C 002C967C  4B E3 B0 59 */	bl hardConstraintOff__Q24Game9EnemyBaseFv
/* 802CC740 002C9680  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 802CC744 002C9684  7F E3 FB 78 */	mr r3, r31
/* 802CC748 002C9688  60 00 80 00 */	ori r0, r0, 0x8000
/* 802CC74C 002C968C  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 802CC750 002C9690  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 802CC754 002C9694  54 00 00 80 */	rlwinm r0, r0, 0, 2, 0
/* 802CC758 002C9698  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 802CC75C 002C969C  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 802CC760 002C96A0  60 00 08 00 */	ori r0, r0, 0x800
/* 802CC764 002C96A4  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 802CC768 002C96A8  48 00 43 D1 */	bl lifeIncrement__Q34Game10SnakeWhole3ObjFv
/* 802CC76C 002C96AC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802CC770 002C96B0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802CC774 002C96B4  7C 08 03 A6 */	mtlr r0
/* 802CC778 002C96B8  38 21 00 10 */	addi r1, r1, 0x10
/* 802CC77C 002C96BC  4E 80 00 20 */	blr 

.global init__Q34Game10SnakeWhole12StateAppear1FPQ24Game9EnemyBasePQ24Game8StateArg
init__Q34Game10SnakeWhole12StateAppear1FPQ24Game9EnemyBasePQ24Game8StateArg:
/* 802CC780 002C96C0  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 802CC784 002C96C4  7C 08 02 A6 */	mflr r0
/* 802CC788 002C96C8  90 01 00 34 */	stw r0, 0x34(r1)
/* 802CC78C 002C96CC  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 802CC790 002C96D0  7C 9F 23 78 */	mr r31, r4
/* 802CC794 002C96D4  7F E3 FB 78 */	mr r3, r31
/* 802CC798 002C96D8  80 04 01 E0 */	lwz r0, 0x1e0(r4)
/* 802CC79C 002C96DC  64 00 00 20 */	oris r0, r0, 0x20
/* 802CC7A0 002C96E0  90 04 01 E0 */	stw r0, 0x1e0(r4)
/* 802CC7A4 002C96E4  80 04 01 E0 */	lwz r0, 0x1e0(r4)
/* 802CC7A8 002C96E8  54 00 06 B0 */	rlwinm r0, r0, 0, 0x1a, 0x18
/* 802CC7AC 002C96EC  90 04 01 E0 */	stw r0, 0x1e0(r4)
/* 802CC7B0 002C96F0  4B E3 AF CD */	bl hardConstraintOn__Q24Game9EnemyBaseFv
/* 802CC7B4 002C96F4  C0 02 E4 B4 */	lfs f0, lbl_8051C814@sda21(r2)
/* 802CC7B8 002C96F8  7F E3 FB 78 */	mr r3, r31
/* 802CC7BC 002C96FC  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 802CC7C0 002C9700  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 802CC7C4 002C9704  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 802CC7C8 002C9708  4B E3 52 05 */	bl setEmotionExcitement__Q24Game9EnemyBaseFv
/* 802CC7CC 002C970C  7F E3 FB 78 */	mr r3, r31
/* 802CC7D0 002C9710  38 80 00 01 */	li r4, 1
/* 802CC7D4 002C9714  38 A0 00 00 */	li r5, 0
/* 802CC7D8 002C9718  4B E3 88 2D */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 802CC7DC 002C971C  7F E3 FB 78 */	mr r3, r31
/* 802CC7E0 002C9720  38 80 00 00 */	li r4, 0
/* 802CC7E4 002C9724  48 00 49 CD */	bl createAppearEffect__Q34Game10SnakeWhole3ObjFi
/* 802CC7E8 002C9728  7F E4 FB 78 */	mr r4, r31
/* 802CC7EC 002C972C  38 61 00 08 */	addi r3, r1, 8
/* 802CC7F0 002C9730  81 9F 00 00 */	lwz r12, 0(r31)
/* 802CC7F4 002C9734  81 8C 00 08 */	lwz r12, 8(r12)
/* 802CC7F8 002C9738  7D 89 03 A6 */	mtctr r12
/* 802CC7FC 002C973C  4E 80 04 21 */	bctrl 
/* 802CC800 002C9740  C0 41 00 08 */	lfs f2, 8(r1)
/* 802CC804 002C9744  38 A1 00 14 */	addi r5, r1, 0x14
/* 802CC808 002C9748  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 802CC80C 002C974C  38 80 00 06 */	li r4, 6
/* 802CC810 002C9750  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 802CC814 002C9754  38 C0 00 02 */	li r6, 2
/* 802CC818 002C9758  D0 41 00 14 */	stfs f2, 0x14(r1)
/* 802CC81C 002C975C  80 6D 96 A0 */	lwz r3, cameraMgr__4Game@sda21(r13)
/* 802CC820 002C9760  D0 21 00 18 */	stfs f1, 0x18(r1)
/* 802CC824 002C9764  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 802CC828 002C9768  4B F8 5A 15 */	bl "startVibration__Q24Game9CameraMgrFiR10Vector3<f>i"
/* 802CC82C 002C976C  80 6D 96 A8 */	lwz r3, rumbleMgr__4Game@sda21(r13)
/* 802CC830 002C9770  38 A1 00 14 */	addi r5, r1, 0x14
/* 802CC834 002C9774  38 80 00 0F */	li r4, 0xf
/* 802CC838 002C9778  38 C0 00 02 */	li r6, 2
/* 802CC83C 002C977C  4B F8 6F 45 */	bl "startRumble__Q24Game9RumbleMgrFiR10Vector3<f>i"
/* 802CC840 002C9780  80 01 00 34 */	lwz r0, 0x34(r1)
/* 802CC844 002C9784  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 802CC848 002C9788  7C 08 03 A6 */	mtlr r0
/* 802CC84C 002C978C  38 21 00 30 */	addi r1, r1, 0x30
/* 802CC850 002C9790  4E 80 00 20 */	blr 

.global exec__Q34Game10SnakeWhole12StateAppear1FPQ24Game9EnemyBase
exec__Q34Game10SnakeWhole12StateAppear1FPQ24Game9EnemyBase:
/* 802CC854 002C9794  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 802CC858 002C9798  7C 08 02 A6 */	mflr r0
/* 802CC85C 002C979C  90 01 00 64 */	stw r0, 0x64(r1)
/* 802CC860 002C97A0  93 E1 00 5C */	stw r31, 0x5c(r1)
/* 802CC864 002C97A4  7C 9F 23 78 */	mr r31, r4
/* 802CC868 002C97A8  93 C1 00 58 */	stw r30, 0x58(r1)
/* 802CC86C 002C97AC  7C 7E 1B 78 */	mr r30, r3
/* 802CC870 002C97B0  80 64 01 88 */	lwz r3, 0x188(r4)
/* 802CC874 002C97B4  88 03 00 24 */	lbz r0, 0x24(r3)
/* 802CC878 002C97B8  28 00 00 00 */	cmplwi r0, 0
/* 802CC87C 002C97BC  41 82 02 B8 */	beq .L_802CCB34
/* 802CC880 002C97C0  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 802CC884 002C97C4  28 00 00 02 */	cmplwi r0, 2
/* 802CC888 002C97C8  40 82 00 1C */	bne .L_802CC8A4
/* 802CC88C 002C97CC  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 802CC890 002C97D0  7F E3 FB 78 */	mr r3, r31
/* 802CC894 002C97D4  54 00 02 D2 */	rlwinm r0, r0, 0, 0xb, 9
/* 802CC898 002C97D8  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 802CC89C 002C97DC  48 00 43 6D */	bl startJointShadow__Q34Game10SnakeWhole3ObjFv
/* 802CC8A0 002C97E0  48 00 02 3C */	b .L_802CCADC
.L_802CC8A4:
/* 802CC8A4 002C97E4  28 00 00 03 */	cmplwi r0, 3
/* 802CC8A8 002C97E8  40 82 00 74 */	bne .L_802CC91C
/* 802CC8AC 002C97EC  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 802CC8B0 002C97F0  7F E3 FB 78 */	mr r3, r31
/* 802CC8B4 002C97F4  64 00 00 20 */	oris r0, r0, 0x20
/* 802CC8B8 002C97F8  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 802CC8BC 002C97FC  48 00 43 D5 */	bl startBossAttackBGM__Q34Game10SnakeWhole3ObjFv
/* 802CC8C0 002C9800  7F E4 FB 78 */	mr r4, r31
/* 802CC8C4 002C9804  38 61 00 20 */	addi r3, r1, 0x20
/* 802CC8C8 002C9808  81 9F 00 00 */	lwz r12, 0(r31)
/* 802CC8CC 002C980C  81 8C 00 08 */	lwz r12, 8(r12)
/* 802CC8D0 002C9810  7D 89 03 A6 */	mtctr r12
/* 802CC8D4 002C9814  4E 80 04 21 */	bctrl 
/* 802CC8D8 002C9818  C0 41 00 20 */	lfs f2, 0x20(r1)
/* 802CC8DC 002C981C  38 A1 00 44 */	addi r5, r1, 0x44
/* 802CC8E0 002C9820  C0 21 00 24 */	lfs f1, 0x24(r1)
/* 802CC8E4 002C9824  38 80 00 06 */	li r4, 6
/* 802CC8E8 002C9828  C0 01 00 28 */	lfs f0, 0x28(r1)
/* 802CC8EC 002C982C  38 C0 00 02 */	li r6, 2
/* 802CC8F0 002C9830  D0 41 00 44 */	stfs f2, 0x44(r1)
/* 802CC8F4 002C9834  80 6D 96 A0 */	lwz r3, cameraMgr__4Game@sda21(r13)
/* 802CC8F8 002C9838  D0 21 00 48 */	stfs f1, 0x48(r1)
/* 802CC8FC 002C983C  D0 01 00 4C */	stfs f0, 0x4c(r1)
/* 802CC900 002C9840  4B F8 59 3D */	bl "startVibration__Q24Game9CameraMgrFiR10Vector3<f>i"
/* 802CC904 002C9844  80 6D 96 A8 */	lwz r3, rumbleMgr__4Game@sda21(r13)
/* 802CC908 002C9848  38 A1 00 44 */	addi r5, r1, 0x44
/* 802CC90C 002C984C  38 80 00 0E */	li r4, 0xe
/* 802CC910 002C9850  38 C0 00 02 */	li r6, 2
/* 802CC914 002C9854  4B F8 6E 6D */	bl "startRumble__Q24Game9RumbleMgrFiR10Vector3<f>i"
/* 802CC918 002C9858  48 00 01 C4 */	b .L_802CCADC
.L_802CC91C:
/* 802CC91C 002C985C  28 00 00 04 */	cmplwi r0, 4
/* 802CC920 002C9860  40 82 00 68 */	bne .L_802CC988
/* 802CC924 002C9864  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 802CC928 002C9868  38 61 00 14 */	addi r3, r1, 0x14
/* 802CC92C 002C986C  54 00 02 D2 */	rlwinm r0, r0, 0, 0xb, 9
/* 802CC930 002C9870  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 802CC934 002C9874  81 84 00 00 */	lwz r12, 0(r4)
/* 802CC938 002C9878  81 8C 00 08 */	lwz r12, 8(r12)
/* 802CC93C 002C987C  7D 89 03 A6 */	mtctr r12
/* 802CC940 002C9880  4E 80 04 21 */	bctrl 
/* 802CC944 002C9884  C0 41 00 14 */	lfs f2, 0x14(r1)
/* 802CC948 002C9888  38 A1 00 38 */	addi r5, r1, 0x38
/* 802CC94C 002C988C  C0 21 00 18 */	lfs f1, 0x18(r1)
/* 802CC950 002C9890  38 80 00 06 */	li r4, 6
/* 802CC954 002C9894  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 802CC958 002C9898  38 C0 00 02 */	li r6, 2
/* 802CC95C 002C989C  D0 41 00 38 */	stfs f2, 0x38(r1)
/* 802CC960 002C98A0  80 6D 96 A0 */	lwz r3, cameraMgr__4Game@sda21(r13)
/* 802CC964 002C98A4  D0 21 00 3C */	stfs f1, 0x3c(r1)
/* 802CC968 002C98A8  D0 01 00 40 */	stfs f0, 0x40(r1)
/* 802CC96C 002C98AC  4B F8 58 D1 */	bl "startVibration__Q24Game9CameraMgrFiR10Vector3<f>i"
/* 802CC970 002C98B0  80 6D 96 A8 */	lwz r3, rumbleMgr__4Game@sda21(r13)
/* 802CC974 002C98B4  38 A1 00 38 */	addi r5, r1, 0x38
/* 802CC978 002C98B8  38 80 00 0E */	li r4, 0xe
/* 802CC97C 002C98BC  38 C0 00 02 */	li r6, 2
/* 802CC980 002C98C0  4B F8 6E 01 */	bl "startRumble__Q24Game9RumbleMgrFiR10Vector3<f>i"
/* 802CC984 002C98C4  48 00 01 58 */	b .L_802CCADC
.L_802CC988:
/* 802CC988 002C98C8  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 802CC98C 002C98CC  40 82 01 50 */	bne .L_802CCADC
/* 802CC990 002C98D0  7F E3 FB 78 */	mr r3, r31
/* 802CC994 002C98D4  48 00 2E 1D */	bl setAttackPosition__Q34Game10SnakeWhole3ObjFv
/* 802CC998 002C98D8  C0 3F 02 00 */	lfs f1, 0x200(r31)
/* 802CC99C 002C98DC  C0 02 E4 B4 */	lfs f0, lbl_8051C814@sda21(r2)
/* 802CC9A0 002C98E0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802CC9A4 002C98E4  4C 40 13 82 */	cror 2, 0, 2
/* 802CC9A8 002C98E8  40 82 00 28 */	bne .L_802CC9D0
/* 802CC9AC 002C98EC  7F C3 F3 78 */	mr r3, r30
/* 802CC9B0 002C98F0  7F E4 FB 78 */	mr r4, r31
/* 802CC9B4 002C98F4  81 9E 00 00 */	lwz r12, 0(r30)
/* 802CC9B8 002C98F8  38 A0 00 00 */	li r5, 0
/* 802CC9BC 002C98FC  38 C0 00 00 */	li r6, 0
/* 802CC9C0 002C9900  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802CC9C4 002C9904  7D 89 03 A6 */	mtctr r12
/* 802CC9C8 002C9908  4E 80 04 21 */	bctrl 
/* 802CC9CC 002C990C  48 00 01 10 */	b .L_802CCADC
.L_802CC9D0:
/* 802CC9D0 002C9910  7F E3 FB 78 */	mr r3, r31
/* 802CC9D4 002C9914  38 80 00 00 */	li r4, 0
/* 802CC9D8 002C9918  4B E4 7C 81 */	bl isStartFlick__Q24Game9EnemyFuncFPQ24Game9EnemyBaseb
/* 802CC9DC 002C991C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802CC9E0 002C9920  41 82 00 28 */	beq .L_802CCA08
/* 802CC9E4 002C9924  7F C3 F3 78 */	mr r3, r30
/* 802CC9E8 002C9928  7F E4 FB 78 */	mr r4, r31
/* 802CC9EC 002C992C  81 9E 00 00 */	lwz r12, 0(r30)
/* 802CC9F0 002C9930  38 A0 00 04 */	li r5, 4
/* 802CC9F4 002C9934  38 C0 00 00 */	li r6, 0
/* 802CC9F8 002C9938  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802CC9FC 002C993C  7D 89 03 A6 */	mtctr r12
/* 802CCA00 002C9940  4E 80 04 21 */	bctrl 
/* 802CCA04 002C9944  48 00 00 D8 */	b .L_802CCADC
.L_802CCA08:
/* 802CCA08 002C9948  7F E3 FB 78 */	mr r3, r31
/* 802CCA0C 002C994C  38 80 00 05 */	li r4, 5
/* 802CCA10 002C9950  48 00 2F AD */	bl getAttackPiki__Q34Game10SnakeWhole3ObjFi
/* 802CCA14 002C9954  28 03 00 00 */	cmplwi r3, 0
/* 802CCA18 002C9958  40 82 00 18 */	bne .L_802CCA30
/* 802CCA1C 002C995C  7F E3 FB 78 */	mr r3, r31
/* 802CCA20 002C9960  38 80 00 05 */	li r4, 5
/* 802CCA24 002C9964  48 00 35 8D */	bl getAttackNavi__Q34Game10SnakeWhole3ObjFi
/* 802CCA28 002C9968  28 03 00 00 */	cmplwi r3, 0
/* 802CCA2C 002C996C  41 82 00 5C */	beq .L_802CCA88
.L_802CCA30:
/* 802CCA30 002C9970  7F E3 FB 78 */	mr r3, r31
/* 802CCA34 002C9974  48 00 3C 69 */	bl getStickHeadPikmin__Q34Game10SnakeWhole3ObjFv
/* 802CCA38 002C9978  2C 03 00 00 */	cmpwi r3, 0
/* 802CCA3C 002C997C  41 82 00 28 */	beq .L_802CCA64
/* 802CCA40 002C9980  7F C3 F3 78 */	mr r3, r30
/* 802CCA44 002C9984  7F E4 FB 78 */	mr r4, r31
/* 802CCA48 002C9988  81 9E 00 00 */	lwz r12, 0(r30)
/* 802CCA4C 002C998C  38 A0 00 0A */	li r5, 0xa
/* 802CCA50 002C9990  38 C0 00 00 */	li r6, 0
/* 802CCA54 002C9994  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802CCA58 002C9998  7D 89 03 A6 */	mtctr r12
/* 802CCA5C 002C999C  4E 80 04 21 */	bctrl 
/* 802CCA60 002C99A0  48 00 00 7C */	b .L_802CCADC
.L_802CCA64:
/* 802CCA64 002C99A4  7F C3 F3 78 */	mr r3, r30
/* 802CCA68 002C99A8  7F E4 FB 78 */	mr r4, r31
/* 802CCA6C 002C99AC  81 9E 00 00 */	lwz r12, 0(r30)
/* 802CCA70 002C99B0  38 A0 00 08 */	li r5, 8
/* 802CCA74 002C99B4  38 C0 00 00 */	li r6, 0
/* 802CCA78 002C99B8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802CCA7C 002C99BC  7D 89 03 A6 */	mtctr r12
/* 802CCA80 002C99C0  4E 80 04 21 */	bctrl 
/* 802CCA84 002C99C4  48 00 00 58 */	b .L_802CCADC
.L_802CCA88:
/* 802CCA88 002C99C8  7F E3 FB 78 */	mr r3, r31
/* 802CCA8C 002C99CC  48 00 3A ED */	bl getSearchedTarget__Q34Game10SnakeWhole3ObjFv
/* 802CCA90 002C99D0  28 03 00 00 */	cmplwi r3, 0
/* 802CCA94 002C99D4  41 82 00 28 */	beq .L_802CCABC
/* 802CCA98 002C99D8  7F C3 F3 78 */	mr r3, r30
/* 802CCA9C 002C99DC  7F E4 FB 78 */	mr r4, r31
/* 802CCAA0 002C99E0  81 9E 00 00 */	lwz r12, 0(r30)
/* 802CCAA4 002C99E4  38 A0 00 06 */	li r5, 6
/* 802CCAA8 002C99E8  38 C0 00 00 */	li r6, 0
/* 802CCAAC 002C99EC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802CCAB0 002C99F0  7D 89 03 A6 */	mtctr r12
/* 802CCAB4 002C99F4  4E 80 04 21 */	bctrl 
/* 802CCAB8 002C99F8  48 00 00 24 */	b .L_802CCADC
.L_802CCABC:
/* 802CCABC 002C99FC  7F C3 F3 78 */	mr r3, r30
/* 802CCAC0 002C9A00  7F E4 FB 78 */	mr r4, r31
/* 802CCAC4 002C9A04  81 9E 00 00 */	lwz r12, 0(r30)
/* 802CCAC8 002C9A08  38 A0 00 05 */	li r5, 5
/* 802CCACC 002C9A0C  38 C0 00 00 */	li r6, 0
/* 802CCAD0 002C9A10  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802CCAD4 002C9A14  7D 89 03 A6 */	mtctr r12
/* 802CCAD8 002C9A18  4E 80 04 21 */	bctrl 
.L_802CCADC:
/* 802CCADC 002C9A1C  7F E4 FB 78 */	mr r4, r31
/* 802CCAE0 002C9A20  38 61 00 08 */	addi r3, r1, 8
/* 802CCAE4 002C9A24  81 9F 00 00 */	lwz r12, 0(r31)
/* 802CCAE8 002C9A28  81 8C 00 08 */	lwz r12, 8(r12)
/* 802CCAEC 002C9A2C  7D 89 03 A6 */	mtctr r12
/* 802CCAF0 002C9A30  4E 80 04 21 */	bctrl 
/* 802CCAF4 002C9A34  C0 41 00 08 */	lfs f2, 8(r1)
/* 802CCAF8 002C9A38  38 A1 00 2C */	addi r5, r1, 0x2c
/* 802CCAFC 002C9A3C  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 802CCB00 002C9A40  38 80 00 03 */	li r4, 3
/* 802CCB04 002C9A44  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 802CCB08 002C9A48  38 C0 00 02 */	li r6, 2
/* 802CCB0C 002C9A4C  D0 41 00 2C */	stfs f2, 0x2c(r1)
/* 802CCB10 002C9A50  80 6D 96 A0 */	lwz r3, cameraMgr__4Game@sda21(r13)
/* 802CCB14 002C9A54  D0 21 00 30 */	stfs f1, 0x30(r1)
/* 802CCB18 002C9A58  D0 01 00 34 */	stfs f0, 0x34(r1)
/* 802CCB1C 002C9A5C  4B F8 57 21 */	bl "startVibration__Q24Game9CameraMgrFiR10Vector3<f>i"
/* 802CCB20 002C9A60  80 6D 96 A8 */	lwz r3, rumbleMgr__4Game@sda21(r13)
/* 802CCB24 002C9A64  38 A1 00 2C */	addi r5, r1, 0x2c
/* 802CCB28 002C9A68  38 80 00 08 */	li r4, 8
/* 802CCB2C 002C9A6C  38 C0 00 02 */	li r6, 2
/* 802CCB30 002C9A70  4B F8 6C 51 */	bl "startRumble__Q24Game9RumbleMgrFiR10Vector3<f>i"
.L_802CCB34:
/* 802CCB34 002C9A74  80 01 00 64 */	lwz r0, 0x64(r1)
/* 802CCB38 002C9A78  83 E1 00 5C */	lwz r31, 0x5c(r1)
/* 802CCB3C 002C9A7C  83 C1 00 58 */	lwz r30, 0x58(r1)
/* 802CCB40 002C9A80  7C 08 03 A6 */	mtlr r0
/* 802CCB44 002C9A84  38 21 00 60 */	addi r1, r1, 0x60
/* 802CCB48 002C9A88  4E 80 00 20 */	blr 

.global cleanup__Q34Game10SnakeWhole12StateAppear1FPQ24Game9EnemyBase
cleanup__Q34Game10SnakeWhole12StateAppear1FPQ24Game9EnemyBase:
/* 802CCB4C 002C9A8C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802CCB50 002C9A90  7C 08 02 A6 */	mflr r0
/* 802CCB54 002C9A94  90 01 00 14 */	stw r0, 0x14(r1)
/* 802CCB58 002C9A98  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802CCB5C 002C9A9C  7C 9F 23 78 */	mr r31, r4
/* 802CCB60 002C9AA0  7F E3 FB 78 */	mr r3, r31
/* 802CCB64 002C9AA4  80 04 01 E0 */	lwz r0, 0x1e0(r4)
/* 802CCB68 002C9AA8  54 00 02 D2 */	rlwinm r0, r0, 0, 0xb, 9
/* 802CCB6C 002C9AAC  90 04 01 E0 */	stw r0, 0x1e0(r4)
/* 802CCB70 002C9AB0  80 04 01 E0 */	lwz r0, 0x1e0(r4)
/* 802CCB74 002C9AB4  60 00 00 40 */	ori r0, r0, 0x40
/* 802CCB78 002C9AB8  90 04 01 E0 */	stw r0, 0x1e0(r4)
/* 802CCB7C 002C9ABC  4B E3 AC 19 */	bl hardConstraintOff__Q24Game9EnemyBaseFv
/* 802CCB80 002C9AC0  80 1F 02 80 */	lwz r0, 0x280(r31)
/* 802CCB84 002C9AC4  28 00 00 00 */	cmplwi r0, 0
/* 802CCB88 002C9AC8  41 82 00 18 */	beq .L_802CCBA0
/* 802CCB8C 002C9ACC  7F E3 FB 78 */	mr r3, r31
/* 802CCB90 002C9AD0  81 9F 00 00 */	lwz r12, 0(r31)
/* 802CCB94 002C9AD4  81 8C 02 50 */	lwz r12, 0x250(r12)
/* 802CCB98 002C9AD8  7D 89 03 A6 */	mtctr r12
/* 802CCB9C 002C9ADC  4E 80 04 21 */	bctrl 
.L_802CCBA0:
/* 802CCBA0 002C9AE0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802CCBA4 002C9AE4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802CCBA8 002C9AE8  7C 08 03 A6 */	mtlr r0
/* 802CCBAC 002C9AEC  38 21 00 10 */	addi r1, r1, 0x10
/* 802CCBB0 002C9AF0  4E 80 00 20 */	blr 

.global init__Q34Game10SnakeWhole12StateAppear2FPQ24Game9EnemyBasePQ24Game8StateArg
init__Q34Game10SnakeWhole12StateAppear2FPQ24Game9EnemyBasePQ24Game8StateArg:
/* 802CCBB4 002C9AF4  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 802CCBB8 002C9AF8  7C 08 02 A6 */	mflr r0
/* 802CCBBC 002C9AFC  90 01 00 34 */	stw r0, 0x34(r1)
/* 802CCBC0 002C9B00  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 802CCBC4 002C9B04  7C 9F 23 78 */	mr r31, r4
/* 802CCBC8 002C9B08  7F E3 FB 78 */	mr r3, r31
/* 802CCBCC 002C9B0C  80 04 01 E0 */	lwz r0, 0x1e0(r4)
/* 802CCBD0 002C9B10  64 00 00 20 */	oris r0, r0, 0x20
/* 802CCBD4 002C9B14  90 04 01 E0 */	stw r0, 0x1e0(r4)
/* 802CCBD8 002C9B18  80 04 01 E0 */	lwz r0, 0x1e0(r4)
/* 802CCBDC 002C9B1C  54 00 06 B0 */	rlwinm r0, r0, 0, 0x1a, 0x18
/* 802CCBE0 002C9B20  90 04 01 E0 */	stw r0, 0x1e0(r4)
/* 802CCBE4 002C9B24  4B E3 AB 99 */	bl hardConstraintOn__Q24Game9EnemyBaseFv
/* 802CCBE8 002C9B28  C0 02 E4 B4 */	lfs f0, lbl_8051C814@sda21(r2)
/* 802CCBEC 002C9B2C  7F E3 FB 78 */	mr r3, r31
/* 802CCBF0 002C9B30  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 802CCBF4 002C9B34  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 802CCBF8 002C9B38  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 802CCBFC 002C9B3C  4B E3 4D D1 */	bl setEmotionExcitement__Q24Game9EnemyBaseFv
/* 802CCC00 002C9B40  7F E3 FB 78 */	mr r3, r31
/* 802CCC04 002C9B44  38 80 00 02 */	li r4, 2
/* 802CCC08 002C9B48  38 A0 00 00 */	li r5, 0
/* 802CCC0C 002C9B4C  4B E3 83 F9 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 802CCC10 002C9B50  7F E3 FB 78 */	mr r3, r31
/* 802CCC14 002C9B54  38 80 00 01 */	li r4, 1
/* 802CCC18 002C9B58  48 00 45 99 */	bl createAppearEffect__Q34Game10SnakeWhole3ObjFi
/* 802CCC1C 002C9B5C  7F E4 FB 78 */	mr r4, r31
/* 802CCC20 002C9B60  38 61 00 08 */	addi r3, r1, 8
/* 802CCC24 002C9B64  81 9F 00 00 */	lwz r12, 0(r31)
/* 802CCC28 002C9B68  81 8C 00 08 */	lwz r12, 8(r12)
/* 802CCC2C 002C9B6C  7D 89 03 A6 */	mtctr r12
/* 802CCC30 002C9B70  4E 80 04 21 */	bctrl 
/* 802CCC34 002C9B74  C0 41 00 08 */	lfs f2, 8(r1)
/* 802CCC38 002C9B78  38 A1 00 14 */	addi r5, r1, 0x14
/* 802CCC3C 002C9B7C  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 802CCC40 002C9B80  38 80 00 08 */	li r4, 8
/* 802CCC44 002C9B84  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 802CCC48 002C9B88  38 C0 00 02 */	li r6, 2
/* 802CCC4C 002C9B8C  D0 41 00 14 */	stfs f2, 0x14(r1)
/* 802CCC50 002C9B90  80 6D 96 A0 */	lwz r3, cameraMgr__4Game@sda21(r13)
/* 802CCC54 002C9B94  D0 21 00 18 */	stfs f1, 0x18(r1)
/* 802CCC58 002C9B98  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 802CCC5C 002C9B9C  4B F8 55 E1 */	bl "startVibration__Q24Game9CameraMgrFiR10Vector3<f>i"
/* 802CCC60 002C9BA0  80 6D 96 A8 */	lwz r3, rumbleMgr__4Game@sda21(r13)
/* 802CCC64 002C9BA4  38 A1 00 14 */	addi r5, r1, 0x14
/* 802CCC68 002C9BA8  38 80 00 0C */	li r4, 0xc
/* 802CCC6C 002C9BAC  38 C0 00 02 */	li r6, 2
/* 802CCC70 002C9BB0  4B F8 6B 11 */	bl "startRumble__Q24Game9RumbleMgrFiR10Vector3<f>i"
/* 802CCC74 002C9BB4  80 01 00 34 */	lwz r0, 0x34(r1)
/* 802CCC78 002C9BB8  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 802CCC7C 002C9BBC  7C 08 03 A6 */	mtlr r0
/* 802CCC80 002C9BC0  38 21 00 30 */	addi r1, r1, 0x30
/* 802CCC84 002C9BC4  4E 80 00 20 */	blr 

.global exec__Q34Game10SnakeWhole12StateAppear2FPQ24Game9EnemyBase
exec__Q34Game10SnakeWhole12StateAppear2FPQ24Game9EnemyBase:
/* 802CCC88 002C9BC8  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 802CCC8C 002C9BCC  7C 08 02 A6 */	mflr r0
/* 802CCC90 002C9BD0  90 01 00 64 */	stw r0, 0x64(r1)
/* 802CCC94 002C9BD4  93 E1 00 5C */	stw r31, 0x5c(r1)
/* 802CCC98 002C9BD8  7C 9F 23 78 */	mr r31, r4
/* 802CCC9C 002C9BDC  93 C1 00 58 */	stw r30, 0x58(r1)
/* 802CCCA0 002C9BE0  7C 7E 1B 78 */	mr r30, r3
/* 802CCCA4 002C9BE4  80 64 01 88 */	lwz r3, 0x188(r4)
/* 802CCCA8 002C9BE8  88 03 00 24 */	lbz r0, 0x24(r3)
/* 802CCCAC 002C9BEC  28 00 00 00 */	cmplwi r0, 0
/* 802CCCB0 002C9BF0  41 82 02 D8 */	beq .L_802CCF88
/* 802CCCB4 002C9BF4  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 802CCCB8 002C9BF8  28 00 00 02 */	cmplwi r0, 2
/* 802CCCBC 002C9BFC  40 82 00 1C */	bne .L_802CCCD8
/* 802CCCC0 002C9C00  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 802CCCC4 002C9C04  7F E3 FB 78 */	mr r3, r31
/* 802CCCC8 002C9C08  54 00 02 D2 */	rlwinm r0, r0, 0, 0xb, 9
/* 802CCCCC 002C9C0C  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 802CCCD0 002C9C10  48 00 3F 39 */	bl startJointShadow__Q34Game10SnakeWhole3ObjFv
/* 802CCCD4 002C9C14  48 00 02 B4 */	b .L_802CCF88
.L_802CCCD8:
/* 802CCCD8 002C9C18  28 00 00 03 */	cmplwi r0, 3
/* 802CCCDC 002C9C1C  40 82 00 10 */	bne .L_802CCCEC
/* 802CCCE0 002C9C20  7F E3 FB 78 */	mr r3, r31
/* 802CCCE4 002C9C24  48 00 3F AD */	bl startBossAttackBGM__Q34Game10SnakeWhole3ObjFv
/* 802CCCE8 002C9C28  48 00 02 A0 */	b .L_802CCF88
.L_802CCCEC:
/* 802CCCEC 002C9C2C  28 00 00 04 */	cmplwi r0, 4
/* 802CCCF0 002C9C30  40 82 00 6C */	bne .L_802CCD5C
/* 802CCCF4 002C9C34  7F E3 FB 78 */	mr r3, r31
/* 802CCCF8 002C9C38  38 80 00 02 */	li r4, 2
/* 802CCCFC 002C9C3C  48 00 44 B5 */	bl createAppearEffect__Q34Game10SnakeWhole3ObjFi
/* 802CCD00 002C9C40  7F E4 FB 78 */	mr r4, r31
/* 802CCD04 002C9C44  38 61 00 20 */	addi r3, r1, 0x20
/* 802CCD08 002C9C48  81 9F 00 00 */	lwz r12, 0(r31)
/* 802CCD0C 002C9C4C  81 8C 00 08 */	lwz r12, 8(r12)
/* 802CCD10 002C9C50  7D 89 03 A6 */	mtctr r12
/* 802CCD14 002C9C54  4E 80 04 21 */	bctrl 
/* 802CCD18 002C9C58  C0 41 00 20 */	lfs f2, 0x20(r1)
/* 802CCD1C 002C9C5C  38 A1 00 44 */	addi r5, r1, 0x44
/* 802CCD20 002C9C60  C0 21 00 24 */	lfs f1, 0x24(r1)
/* 802CCD24 002C9C64  38 80 00 03 */	li r4, 3
/* 802CCD28 002C9C68  C0 01 00 28 */	lfs f0, 0x28(r1)
/* 802CCD2C 002C9C6C  38 C0 00 02 */	li r6, 2
/* 802CCD30 002C9C70  D0 41 00 44 */	stfs f2, 0x44(r1)
/* 802CCD34 002C9C74  80 6D 96 A0 */	lwz r3, cameraMgr__4Game@sda21(r13)
/* 802CCD38 002C9C78  D0 21 00 48 */	stfs f1, 0x48(r1)
/* 802CCD3C 002C9C7C  D0 01 00 4C */	stfs f0, 0x4c(r1)
/* 802CCD40 002C9C80  4B F8 54 FD */	bl "startVibration__Q24Game9CameraMgrFiR10Vector3<f>i"
/* 802CCD44 002C9C84  80 6D 96 A8 */	lwz r3, rumbleMgr__4Game@sda21(r13)
/* 802CCD48 002C9C88  38 A1 00 44 */	addi r5, r1, 0x44
/* 802CCD4C 002C9C8C  38 80 00 0B */	li r4, 0xb
/* 802CCD50 002C9C90  38 C0 00 02 */	li r6, 2
/* 802CCD54 002C9C94  4B F8 6A 2D */	bl "startRumble__Q24Game9RumbleMgrFiR10Vector3<f>i"
/* 802CCD58 002C9C98  48 00 02 30 */	b .L_802CCF88
.L_802CCD5C:
/* 802CCD5C 002C9C9C  28 00 00 05 */	cmplwi r0, 5
/* 802CCD60 002C9CA0  40 82 00 68 */	bne .L_802CCDC8
/* 802CCD64 002C9CA4  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 802CCD68 002C9CA8  38 61 00 14 */	addi r3, r1, 0x14
/* 802CCD6C 002C9CAC  64 00 00 20 */	oris r0, r0, 0x20
/* 802CCD70 002C9CB0  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 802CCD74 002C9CB4  81 84 00 00 */	lwz r12, 0(r4)
/* 802CCD78 002C9CB8  81 8C 00 08 */	lwz r12, 8(r12)
/* 802CCD7C 002C9CBC  7D 89 03 A6 */	mtctr r12
/* 802CCD80 002C9CC0  4E 80 04 21 */	bctrl 
/* 802CCD84 002C9CC4  C0 41 00 14 */	lfs f2, 0x14(r1)
/* 802CCD88 002C9CC8  38 A1 00 38 */	addi r5, r1, 0x38
/* 802CCD8C 002C9CCC  C0 21 00 18 */	lfs f1, 0x18(r1)
/* 802CCD90 002C9CD0  38 80 00 03 */	li r4, 3
/* 802CCD94 002C9CD4  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 802CCD98 002C9CD8  38 C0 00 02 */	li r6, 2
/* 802CCD9C 002C9CDC  D0 41 00 38 */	stfs f2, 0x38(r1)
/* 802CCDA0 002C9CE0  80 6D 96 A0 */	lwz r3, cameraMgr__4Game@sda21(r13)
/* 802CCDA4 002C9CE4  D0 21 00 3C */	stfs f1, 0x3c(r1)
/* 802CCDA8 002C9CE8  D0 01 00 40 */	stfs f0, 0x40(r1)
/* 802CCDAC 002C9CEC  4B F8 54 91 */	bl "startVibration__Q24Game9CameraMgrFiR10Vector3<f>i"
/* 802CCDB0 002C9CF0  80 6D 96 A8 */	lwz r3, rumbleMgr__4Game@sda21(r13)
/* 802CCDB4 002C9CF4  38 A1 00 38 */	addi r5, r1, 0x38
/* 802CCDB8 002C9CF8  38 80 00 0B */	li r4, 0xb
/* 802CCDBC 002C9CFC  38 C0 00 02 */	li r6, 2
/* 802CCDC0 002C9D00  4B F8 69 C1 */	bl "startRumble__Q24Game9RumbleMgrFiR10Vector3<f>i"
/* 802CCDC4 002C9D04  48 00 01 C4 */	b .L_802CCF88
.L_802CCDC8:
/* 802CCDC8 002C9D08  28 00 00 06 */	cmplwi r0, 6
/* 802CCDCC 002C9D0C  40 82 00 68 */	bne .L_802CCE34
/* 802CCDD0 002C9D10  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 802CCDD4 002C9D14  38 61 00 08 */	addi r3, r1, 8
/* 802CCDD8 002C9D18  54 00 02 D2 */	rlwinm r0, r0, 0, 0xb, 9
/* 802CCDDC 002C9D1C  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 802CCDE0 002C9D20  81 84 00 00 */	lwz r12, 0(r4)
/* 802CCDE4 002C9D24  81 8C 00 08 */	lwz r12, 8(r12)
/* 802CCDE8 002C9D28  7D 89 03 A6 */	mtctr r12
/* 802CCDEC 002C9D2C  4E 80 04 21 */	bctrl 
/* 802CCDF0 002C9D30  C0 41 00 08 */	lfs f2, 8(r1)
/* 802CCDF4 002C9D34  38 A1 00 2C */	addi r5, r1, 0x2c
/* 802CCDF8 002C9D38  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 802CCDFC 002C9D3C  38 80 00 06 */	li r4, 6
/* 802CCE00 002C9D40  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 802CCE04 002C9D44  38 C0 00 02 */	li r6, 2
/* 802CCE08 002C9D48  D0 41 00 2C */	stfs f2, 0x2c(r1)
/* 802CCE0C 002C9D4C  80 6D 96 A0 */	lwz r3, cameraMgr__4Game@sda21(r13)
/* 802CCE10 002C9D50  D0 21 00 30 */	stfs f1, 0x30(r1)
/* 802CCE14 002C9D54  D0 01 00 34 */	stfs f0, 0x34(r1)
/* 802CCE18 002C9D58  4B F8 54 25 */	bl "startVibration__Q24Game9CameraMgrFiR10Vector3<f>i"
/* 802CCE1C 002C9D5C  80 6D 96 A8 */	lwz r3, rumbleMgr__4Game@sda21(r13)
/* 802CCE20 002C9D60  38 A1 00 2C */	addi r5, r1, 0x2c
/* 802CCE24 002C9D64  38 80 00 0E */	li r4, 0xe
/* 802CCE28 002C9D68  38 C0 00 02 */	li r6, 2
/* 802CCE2C 002C9D6C  4B F8 69 55 */	bl "startRumble__Q24Game9RumbleMgrFiR10Vector3<f>i"
/* 802CCE30 002C9D70  48 00 01 58 */	b .L_802CCF88
.L_802CCE34:
/* 802CCE34 002C9D74  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 802CCE38 002C9D78  40 82 01 50 */	bne .L_802CCF88
/* 802CCE3C 002C9D7C  7F E3 FB 78 */	mr r3, r31
/* 802CCE40 002C9D80  48 00 29 71 */	bl setAttackPosition__Q34Game10SnakeWhole3ObjFv
/* 802CCE44 002C9D84  C0 3F 02 00 */	lfs f1, 0x200(r31)
/* 802CCE48 002C9D88  C0 02 E4 B4 */	lfs f0, lbl_8051C814@sda21(r2)
/* 802CCE4C 002C9D8C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802CCE50 002C9D90  4C 40 13 82 */	cror 2, 0, 2
/* 802CCE54 002C9D94  40 82 00 28 */	bne .L_802CCE7C
/* 802CCE58 002C9D98  7F C3 F3 78 */	mr r3, r30
/* 802CCE5C 002C9D9C  7F E4 FB 78 */	mr r4, r31
/* 802CCE60 002C9DA0  81 9E 00 00 */	lwz r12, 0(r30)
/* 802CCE64 002C9DA4  38 A0 00 00 */	li r5, 0
/* 802CCE68 002C9DA8  38 C0 00 00 */	li r6, 0
/* 802CCE6C 002C9DAC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802CCE70 002C9DB0  7D 89 03 A6 */	mtctr r12
/* 802CCE74 002C9DB4  4E 80 04 21 */	bctrl 
/* 802CCE78 002C9DB8  48 00 01 10 */	b .L_802CCF88
.L_802CCE7C:
/* 802CCE7C 002C9DBC  7F E3 FB 78 */	mr r3, r31
/* 802CCE80 002C9DC0  38 80 00 00 */	li r4, 0
/* 802CCE84 002C9DC4  4B E4 77 D5 */	bl isStartFlick__Q24Game9EnemyFuncFPQ24Game9EnemyBaseb
/* 802CCE88 002C9DC8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802CCE8C 002C9DCC  41 82 00 28 */	beq .L_802CCEB4
/* 802CCE90 002C9DD0  7F C3 F3 78 */	mr r3, r30
/* 802CCE94 002C9DD4  7F E4 FB 78 */	mr r4, r31
/* 802CCE98 002C9DD8  81 9E 00 00 */	lwz r12, 0(r30)
/* 802CCE9C 002C9DDC  38 A0 00 04 */	li r5, 4
/* 802CCEA0 002C9DE0  38 C0 00 00 */	li r6, 0
/* 802CCEA4 002C9DE4  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802CCEA8 002C9DE8  7D 89 03 A6 */	mtctr r12
/* 802CCEAC 002C9DEC  4E 80 04 21 */	bctrl 
/* 802CCEB0 002C9DF0  48 00 00 D8 */	b .L_802CCF88
.L_802CCEB4:
/* 802CCEB4 002C9DF4  7F E3 FB 78 */	mr r3, r31
/* 802CCEB8 002C9DF8  38 80 00 05 */	li r4, 5
/* 802CCEBC 002C9DFC  48 00 2B 01 */	bl getAttackPiki__Q34Game10SnakeWhole3ObjFi
/* 802CCEC0 002C9E00  28 03 00 00 */	cmplwi r3, 0
/* 802CCEC4 002C9E04  40 82 00 18 */	bne .L_802CCEDC
/* 802CCEC8 002C9E08  7F E3 FB 78 */	mr r3, r31
/* 802CCECC 002C9E0C  38 80 00 05 */	li r4, 5
/* 802CCED0 002C9E10  48 00 30 E1 */	bl getAttackNavi__Q34Game10SnakeWhole3ObjFi
/* 802CCED4 002C9E14  28 03 00 00 */	cmplwi r3, 0
/* 802CCED8 002C9E18  41 82 00 5C */	beq .L_802CCF34
.L_802CCEDC:
/* 802CCEDC 002C9E1C  7F E3 FB 78 */	mr r3, r31
/* 802CCEE0 002C9E20  48 00 37 BD */	bl getStickHeadPikmin__Q34Game10SnakeWhole3ObjFv
/* 802CCEE4 002C9E24  2C 03 00 00 */	cmpwi r3, 0
/* 802CCEE8 002C9E28  41 82 00 28 */	beq .L_802CCF10
/* 802CCEEC 002C9E2C  7F C3 F3 78 */	mr r3, r30
/* 802CCEF0 002C9E30  7F E4 FB 78 */	mr r4, r31
/* 802CCEF4 002C9E34  81 9E 00 00 */	lwz r12, 0(r30)
/* 802CCEF8 002C9E38  38 A0 00 0A */	li r5, 0xa
/* 802CCEFC 002C9E3C  38 C0 00 00 */	li r6, 0
/* 802CCF00 002C9E40  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802CCF04 002C9E44  7D 89 03 A6 */	mtctr r12
/* 802CCF08 002C9E48  4E 80 04 21 */	bctrl 
/* 802CCF0C 002C9E4C  48 00 00 7C */	b .L_802CCF88
.L_802CCF10:
/* 802CCF10 002C9E50  7F C3 F3 78 */	mr r3, r30
/* 802CCF14 002C9E54  7F E4 FB 78 */	mr r4, r31
/* 802CCF18 002C9E58  81 9E 00 00 */	lwz r12, 0(r30)
/* 802CCF1C 002C9E5C  38 A0 00 08 */	li r5, 8
/* 802CCF20 002C9E60  38 C0 00 00 */	li r6, 0
/* 802CCF24 002C9E64  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802CCF28 002C9E68  7D 89 03 A6 */	mtctr r12
/* 802CCF2C 002C9E6C  4E 80 04 21 */	bctrl 
/* 802CCF30 002C9E70  48 00 00 58 */	b .L_802CCF88
.L_802CCF34:
/* 802CCF34 002C9E74  7F E3 FB 78 */	mr r3, r31
/* 802CCF38 002C9E78  48 00 36 41 */	bl getSearchedTarget__Q34Game10SnakeWhole3ObjFv
/* 802CCF3C 002C9E7C  28 03 00 00 */	cmplwi r3, 0
/* 802CCF40 002C9E80  41 82 00 28 */	beq .L_802CCF68
/* 802CCF44 002C9E84  7F C3 F3 78 */	mr r3, r30
/* 802CCF48 002C9E88  7F E4 FB 78 */	mr r4, r31
/* 802CCF4C 002C9E8C  81 9E 00 00 */	lwz r12, 0(r30)
/* 802CCF50 002C9E90  38 A0 00 06 */	li r5, 6
/* 802CCF54 002C9E94  38 C0 00 00 */	li r6, 0
/* 802CCF58 002C9E98  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802CCF5C 002C9E9C  7D 89 03 A6 */	mtctr r12
/* 802CCF60 002C9EA0  4E 80 04 21 */	bctrl 
/* 802CCF64 002C9EA4  48 00 00 24 */	b .L_802CCF88
.L_802CCF68:
/* 802CCF68 002C9EA8  7F C3 F3 78 */	mr r3, r30
/* 802CCF6C 002C9EAC  7F E4 FB 78 */	mr r4, r31
/* 802CCF70 002C9EB0  81 9E 00 00 */	lwz r12, 0(r30)
/* 802CCF74 002C9EB4  38 A0 00 05 */	li r5, 5
/* 802CCF78 002C9EB8  38 C0 00 00 */	li r6, 0
/* 802CCF7C 002C9EBC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802CCF80 002C9EC0  7D 89 03 A6 */	mtctr r12
/* 802CCF84 002C9EC4  4E 80 04 21 */	bctrl 
.L_802CCF88:
/* 802CCF88 002C9EC8  80 01 00 64 */	lwz r0, 0x64(r1)
/* 802CCF8C 002C9ECC  83 E1 00 5C */	lwz r31, 0x5c(r1)
/* 802CCF90 002C9ED0  83 C1 00 58 */	lwz r30, 0x58(r1)
/* 802CCF94 002C9ED4  7C 08 03 A6 */	mtlr r0
/* 802CCF98 002C9ED8  38 21 00 60 */	addi r1, r1, 0x60
/* 802CCF9C 002C9EDC  4E 80 00 20 */	blr 

.global cleanup__Q34Game10SnakeWhole12StateAppear2FPQ24Game9EnemyBase
cleanup__Q34Game10SnakeWhole12StateAppear2FPQ24Game9EnemyBase:
/* 802CCFA0 002C9EE0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802CCFA4 002C9EE4  7C 08 02 A6 */	mflr r0
/* 802CCFA8 002C9EE8  90 01 00 14 */	stw r0, 0x14(r1)
/* 802CCFAC 002C9EEC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802CCFB0 002C9EF0  7C 9F 23 78 */	mr r31, r4
/* 802CCFB4 002C9EF4  7F E3 FB 78 */	mr r3, r31
/* 802CCFB8 002C9EF8  80 04 01 E0 */	lwz r0, 0x1e0(r4)
/* 802CCFBC 002C9EFC  54 00 02 D2 */	rlwinm r0, r0, 0, 0xb, 9
/* 802CCFC0 002C9F00  90 04 01 E0 */	stw r0, 0x1e0(r4)
/* 802CCFC4 002C9F04  80 04 01 E0 */	lwz r0, 0x1e0(r4)
/* 802CCFC8 002C9F08  60 00 00 40 */	ori r0, r0, 0x40
/* 802CCFCC 002C9F0C  90 04 01 E0 */	stw r0, 0x1e0(r4)
/* 802CCFD0 002C9F10  4B E3 A7 C5 */	bl hardConstraintOff__Q24Game9EnemyBaseFv
/* 802CCFD4 002C9F14  80 1F 02 80 */	lwz r0, 0x280(r31)
/* 802CCFD8 002C9F18  28 00 00 00 */	cmplwi r0, 0
/* 802CCFDC 002C9F1C  41 82 00 18 */	beq .L_802CCFF4
/* 802CCFE0 002C9F20  7F E3 FB 78 */	mr r3, r31
/* 802CCFE4 002C9F24  81 9F 00 00 */	lwz r12, 0(r31)
/* 802CCFE8 002C9F28  81 8C 02 50 */	lwz r12, 0x250(r12)
/* 802CCFEC 002C9F2C  7D 89 03 A6 */	mtctr r12
/* 802CCFF0 002C9F30  4E 80 04 21 */	bctrl 
.L_802CCFF4:
/* 802CCFF4 002C9F34  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802CCFF8 002C9F38  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802CCFFC 002C9F3C  7C 08 03 A6 */	mtlr r0
/* 802CD000 002C9F40  38 21 00 10 */	addi r1, r1, 0x10
/* 802CD004 002C9F44  4E 80 00 20 */	blr 

.global init__Q34Game10SnakeWhole14StateDisappearFPQ24Game9EnemyBasePQ24Game8StateArg
init__Q34Game10SnakeWhole14StateDisappearFPQ24Game9EnemyBasePQ24Game8StateArg:
/* 802CD008 002C9F48  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802CD00C 002C9F4C  7C 08 02 A6 */	mflr r0
/* 802CD010 002C9F50  90 01 00 14 */	stw r0, 0x14(r1)
/* 802CD014 002C9F54  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802CD018 002C9F58  7C 9F 23 78 */	mr r31, r4
/* 802CD01C 002C9F5C  7F E3 FB 78 */	mr r3, r31
/* 802CD020 002C9F60  4B E3 A7 5D */	bl hardConstraintOn__Q24Game9EnemyBaseFv
/* 802CD024 002C9F64  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 802CD028 002C9F68  7F E3 FB 78 */	mr r3, r31
/* 802CD02C 002C9F6C  C0 02 E4 B4 */	lfs f0, lbl_8051C814@sda21(r2)
/* 802CD030 002C9F70  54 00 06 B0 */	rlwinm r0, r0, 0, 0x1a, 0x18
/* 802CD034 002C9F74  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 802CD038 002C9F78  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 802CD03C 002C9F7C  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 802CD040 002C9F80  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 802CD044 002C9F84  4B E3 49 39 */	bl setEmotionCaution__Q24Game9EnemyBaseFv
/* 802CD048 002C9F88  7F E3 FB 78 */	mr r3, r31
/* 802CD04C 002C9F8C  38 80 00 03 */	li r4, 3
/* 802CD050 002C9F90  38 A0 00 00 */	li r5, 0
/* 802CD054 002C9F94  4B E3 7F B1 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 802CD058 002C9F98  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802CD05C 002C9F9C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802CD060 002C9FA0  7C 08 03 A6 */	mtlr r0
/* 802CD064 002C9FA4  38 21 00 10 */	addi r1, r1, 0x10
/* 802CD068 002C9FA8  4E 80 00 20 */	blr 

.global exec__Q34Game10SnakeWhole14StateDisappearFPQ24Game9EnemyBase
exec__Q34Game10SnakeWhole14StateDisappearFPQ24Game9EnemyBase:
/* 802CD06C 002C9FAC  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 802CD070 002C9FB0  7C 08 02 A6 */	mflr r0
/* 802CD074 002C9FB4  90 01 00 64 */	stw r0, 0x64(r1)
/* 802CD078 002C9FB8  93 E1 00 5C */	stw r31, 0x5c(r1)
/* 802CD07C 002C9FBC  7C 9F 23 78 */	mr r31, r4
/* 802CD080 002C9FC0  80 A4 01 88 */	lwz r5, 0x188(r4)
/* 802CD084 002C9FC4  88 05 00 24 */	lbz r0, 0x24(r5)
/* 802CD088 002C9FC8  28 00 00 00 */	cmplwi r0, 0
/* 802CD08C 002C9FCC  41 82 01 E0 */	beq .L_802CD26C
/* 802CD090 002C9FD0  80 05 00 1C */	lwz r0, 0x1c(r5)
/* 802CD094 002C9FD4  28 00 00 02 */	cmplwi r0, 2
/* 802CD098 002C9FD8  40 82 00 7C */	bne .L_802CD114
/* 802CD09C 002C9FDC  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 802CD0A0 002C9FE0  7F E3 FB 78 */	mr r3, r31
/* 802CD0A4 002C9FE4  C0 82 E4 D8 */	lfs f4, lbl_8051C838@sda21(r2)
/* 802CD0A8 002C9FE8  38 80 00 00 */	li r4, 0
/* 802CD0AC 002C9FEC  C0 25 05 14 */	lfs f1, 0x514(r5)
/* 802CD0B0 002C9FF0  C0 45 04 C4 */	lfs f2, 0x4c4(r5)
/* 802CD0B4 002C9FF4  C0 65 04 EC */	lfs f3, 0x4ec(r5)
/* 802CD0B8 002C9FF8  4B E4 66 D9 */	bl "flickNearbyNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Navi>"
/* 802CD0BC 002C9FFC  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 802CD0C0 002CA000  7F E3 FB 78 */	mr r3, r31
/* 802CD0C4 002CA004  C0 82 E4 D8 */	lfs f4, lbl_8051C838@sda21(r2)
/* 802CD0C8 002CA008  38 80 00 00 */	li r4, 0
/* 802CD0CC 002CA00C  C0 25 05 14 */	lfs f1, 0x514(r5)
/* 802CD0D0 002CA010  C0 45 04 C4 */	lfs f2, 0x4c4(r5)
/* 802CD0D4 002CA014  C0 65 04 EC */	lfs f3, 0x4ec(r5)
/* 802CD0D8 002CA018  4B E4 63 FD */	bl "flickNearbyPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Piki>"
/* 802CD0DC 002CA01C  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 802CD0E0 002CA020  7F E3 FB 78 */	mr r3, r31
/* 802CD0E4 002CA024  C0 82 E4 D8 */	lfs f4, lbl_8051C838@sda21(r2)
/* 802CD0E8 002CA028  38 80 00 00 */	li r4, 0
/* 802CD0EC 002CA02C  C0 25 05 3C */	lfs f1, 0x53c(r5)
/* 802CD0F0 002CA030  C0 45 04 C4 */	lfs f2, 0x4c4(r5)
/* 802CD0F4 002CA034  C0 65 04 EC */	lfs f3, 0x4ec(r5)
/* 802CD0F8 002CA038  4B E4 60 25 */	bl "flickStickPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Piki>"
/* 802CD0FC 002CA03C  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 802CD100 002CA040  7F E3 FB 78 */	mr r3, r31
/* 802CD104 002CA044  64 00 00 20 */	oris r0, r0, 0x20
/* 802CD108 002CA048  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 802CD10C 002CA04C  48 00 3C 65 */	bl startBossFlickBGM__Q34Game10SnakeWhole3ObjFv
/* 802CD110 002CA050  48 00 01 5C */	b .L_802CD26C
.L_802CD114:
/* 802CD114 002CA054  28 00 00 03 */	cmplwi r0, 3
/* 802CD118 002CA058  40 82 00 14 */	bne .L_802CD12C
/* 802CD11C 002CA05C  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 802CD120 002CA060  54 00 02 D2 */	rlwinm r0, r0, 0, 0xb, 9
/* 802CD124 002CA064  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 802CD128 002CA068  48 00 01 44 */	b .L_802CD26C
.L_802CD12C:
/* 802CD12C 002CA06C  28 00 00 04 */	cmplwi r0, 4
/* 802CD130 002CA070  40 82 00 EC */	bne .L_802CD21C
/* 802CD134 002CA074  81 84 00 00 */	lwz r12, 0(r4)
/* 802CD138 002CA078  38 61 00 08 */	addi r3, r1, 8
/* 802CD13C 002CA07C  81 8C 00 08 */	lwz r12, 8(r12)
/* 802CD140 002CA080  7D 89 03 A6 */	mtctr r12
/* 802CD144 002CA084  4E 80 04 21 */	bctrl 
/* 802CD148 002CA088  3C 60 80 4B */	lis r3, __vt__Q23efx5TBase@ha
/* 802CD14C 002CA08C  38 C0 00 00 */	li r6, 0
/* 802CD150 002CA090  38 03 A7 F8 */	addi r0, r3, __vt__Q23efx5TBase@l
/* 802CD154 002CA094  C0 41 00 08 */	lfs f2, 8(r1)
/* 802CD158 002CA098  3C 60 80 4E */	lis r3, __vt__Q23efx8TSimple4@ha
/* 802CD15C 002CA09C  90 01 00 30 */	stw r0, 0x30(r1)
/* 802CD160 002CA0A0  38 03 6A 3C */	addi r0, r3, __vt__Q23efx8TSimple4@l
/* 802CD164 002CA0A4  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 802CD168 002CA0A8  3C 60 80 4E */	lis r3, __vt__Q23efx14THebiAphd_base@ha
/* 802CD16C 002CA0AC  90 01 00 30 */	stw r0, 0x30(r1)
/* 802CD170 002CA0B0  38 03 6E 30 */	addi r0, r3, __vt__Q23efx14THebiAphd_base@l
/* 802CD174 002CA0B4  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 802CD178 002CA0B8  3C 80 80 4B */	lis r4, __vt__Q23efx3Arg@ha
/* 802CD17C 002CA0BC  3C 60 80 4D */	lis r3, __vt__Q23efx14THebiAphd_dive@ha
/* 802CD180 002CA0C0  39 64 A7 EC */	addi r11, r4, __vt__Q23efx3Arg@l
/* 802CD184 002CA0C4  39 40 00 A0 */	li r10, 0xa0
/* 802CD188 002CA0C8  39 20 00 A1 */	li r9, 0xa1
/* 802CD18C 002CA0CC  39 00 00 A2 */	li r8, 0xa2
/* 802CD190 002CA0D0  38 E0 00 A3 */	li r7, 0xa3
/* 802CD194 002CA0D4  38 A0 00 1E */	li r5, 0x1e
/* 802CD198 002CA0D8  90 01 00 30 */	stw r0, 0x30(r1)
/* 802CD19C 002CA0DC  38 03 B3 44 */	addi r0, r3, __vt__Q23efx14THebiAphd_dive@l
/* 802CD1A0 002CA0E0  38 61 00 30 */	addi r3, r1, 0x30
/* 802CD1A4 002CA0E4  38 81 00 14 */	addi r4, r1, 0x14
/* 802CD1A8 002CA0E8  D0 41 00 24 */	stfs f2, 0x24(r1)
/* 802CD1AC 002CA0EC  D0 21 00 28 */	stfs f1, 0x28(r1)
/* 802CD1B0 002CA0F0  D0 01 00 2C */	stfs f0, 0x2c(r1)
/* 802CD1B4 002CA0F4  91 61 00 14 */	stw r11, 0x14(r1)
/* 802CD1B8 002CA0F8  D0 41 00 18 */	stfs f2, 0x18(r1)
/* 802CD1BC 002CA0FC  D0 21 00 1C */	stfs f1, 0x1c(r1)
/* 802CD1C0 002CA100  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 802CD1C4 002CA104  B1 41 00 34 */	sth r10, 0x34(r1)
/* 802CD1C8 002CA108  B1 21 00 36 */	sth r9, 0x36(r1)
/* 802CD1CC 002CA10C  B1 01 00 38 */	sth r8, 0x38(r1)
/* 802CD1D0 002CA110  B0 E1 00 3A */	sth r7, 0x3a(r1)
/* 802CD1D4 002CA114  90 C1 00 3C */	stw r6, 0x3c(r1)
/* 802CD1D8 002CA118  90 C1 00 40 */	stw r6, 0x40(r1)
/* 802CD1DC 002CA11C  90 C1 00 44 */	stw r6, 0x44(r1)
/* 802CD1E0 002CA120  90 C1 00 48 */	stw r6, 0x48(r1)
/* 802CD1E4 002CA124  90 A1 00 4C */	stw r5, 0x4c(r1)
/* 802CD1E8 002CA128  90 01 00 30 */	stw r0, 0x30(r1)
/* 802CD1EC 002CA12C  48 0E 68 BD */	bl create__Q23efx14THebiAphd_baseFPQ23efx3Arg
/* 802CD1F0 002CA130  80 6D 96 A0 */	lwz r3, cameraMgr__4Game@sda21(r13)
/* 802CD1F4 002CA134  38 A1 00 24 */	addi r5, r1, 0x24
/* 802CD1F8 002CA138  38 80 00 06 */	li r4, 6
/* 802CD1FC 002CA13C  38 C0 00 02 */	li r6, 2
/* 802CD200 002CA140  4B F8 50 3D */	bl "startVibration__Q24Game9CameraMgrFiR10Vector3<f>i"
/* 802CD204 002CA144  80 6D 96 A8 */	lwz r3, rumbleMgr__4Game@sda21(r13)
/* 802CD208 002CA148  38 A1 00 24 */	addi r5, r1, 0x24
/* 802CD20C 002CA14C  38 80 00 0F */	li r4, 0xf
/* 802CD210 002CA150  38 C0 00 02 */	li r6, 2
/* 802CD214 002CA154  4B F8 65 6D */	bl "startRumble__Q24Game9RumbleMgrFiR10Vector3<f>i"
/* 802CD218 002CA158  48 00 00 54 */	b .L_802CD26C
.L_802CD21C:
/* 802CD21C 002CA15C  28 00 00 05 */	cmplwi r0, 5
/* 802CD220 002CA160  40 82 00 2C */	bne .L_802CD24C
/* 802CD224 002CA164  38 00 00 01 */	li r0, 1
/* 802CD228 002CA168  C0 02 E4 B4 */	lfs f0, lbl_8051C814@sda21(r2)
/* 802CD22C 002CA16C  98 1F 02 C0 */	stb r0, 0x2c0(r31)
/* 802CD230 002CA170  7F E3 FB 78 */	mr r3, r31
/* 802CD234 002CA174  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 802CD238 002CA178  64 00 00 40 */	oris r0, r0, 0x40
/* 802CD23C 002CA17C  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 802CD240 002CA180  D0 1F 02 0C */	stfs f0, 0x20c(r31)
/* 802CD244 002CA184  48 00 39 E9 */	bl finishJointShadow__Q34Game10SnakeWhole3ObjFv
/* 802CD248 002CA188  48 00 00 24 */	b .L_802CD26C
.L_802CD24C:
/* 802CD24C 002CA18C  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 802CD250 002CA190  40 82 00 1C */	bne .L_802CD26C
/* 802CD254 002CA194  81 83 00 00 */	lwz r12, 0(r3)
/* 802CD258 002CA198  38 A0 00 01 */	li r5, 1
/* 802CD25C 002CA19C  38 C0 00 00 */	li r6, 0
/* 802CD260 002CA1A0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802CD264 002CA1A4  7D 89 03 A6 */	mtctr r12
/* 802CD268 002CA1A8  4E 80 04 21 */	bctrl 
.L_802CD26C:
/* 802CD26C 002CA1AC  80 01 00 64 */	lwz r0, 0x64(r1)
/* 802CD270 002CA1B0  83 E1 00 5C */	lwz r31, 0x5c(r1)
/* 802CD274 002CA1B4  7C 08 03 A6 */	mtlr r0
/* 802CD278 002CA1B8  38 21 00 60 */	addi r1, r1, 0x60
/* 802CD27C 002CA1BC  4E 80 00 20 */	blr 

.global cleanup__Q34Game10SnakeWhole14StateDisappearFPQ24Game9EnemyBase
cleanup__Q34Game10SnakeWhole14StateDisappearFPQ24Game9EnemyBase:
/* 802CD280 002CA1C0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802CD284 002CA1C4  7C 08 02 A6 */	mflr r0
/* 802CD288 002CA1C8  C0 22 E4 C4 */	lfs f1, lbl_8051C824@sda21(r2)
/* 802CD28C 002CA1CC  90 01 00 14 */	stw r0, 0x14(r1)
/* 802CD290 002CA1D0  C0 42 E4 DC */	lfs f2, lbl_8051C83C@sda21(r2)
/* 802CD294 002CA1D4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802CD298 002CA1D8  7C 9F 23 78 */	mr r31, r4
/* 802CD29C 002CA1DC  C0 62 E4 B4 */	lfs f3, lbl_8051C814@sda21(r2)
/* 802CD2A0 002CA1E0  7F E3 FB 78 */	mr r3, r31
/* 802CD2A4 002CA1E4  C0 82 E4 D8 */	lfs f4, lbl_8051C838@sda21(r2)
/* 802CD2A8 002CA1E8  38 80 00 00 */	li r4, 0
/* 802CD2AC 002CA1EC  4B E4 5E 71 */	bl "flickStickPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Piki>"
/* 802CD2B0 002CA1F0  38 00 00 00 */	li r0, 0
/* 802CD2B4 002CA1F4  7F E3 FB 78 */	mr r3, r31
/* 802CD2B8 002CA1F8  98 1F 02 C0 */	stb r0, 0x2c0(r31)
/* 802CD2BC 002CA1FC  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 802CD2C0 002CA200  54 00 02 90 */	rlwinm r0, r0, 0, 0xa, 8
/* 802CD2C4 002CA204  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 802CD2C8 002CA208  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 802CD2CC 002CA20C  54 00 02 D2 */	rlwinm r0, r0, 0, 0xb, 9
/* 802CD2D0 002CA210  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 802CD2D4 002CA214  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 802CD2D8 002CA218  60 00 00 40 */	ori r0, r0, 0x40
/* 802CD2DC 002CA21C  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 802CD2E0 002CA220  4B E3 A4 B5 */	bl hardConstraintOff__Q24Game9EnemyBaseFv
/* 802CD2E4 002CA224  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802CD2E8 002CA228  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802CD2EC 002CA22C  7C 08 03 A6 */	mtlr r0
/* 802CD2F0 002CA230  38 21 00 10 */	addi r1, r1, 0x10
/* 802CD2F4 002CA234  4E 80 00 20 */	blr 

.global init__Q34Game10SnakeWhole9StateWaitFPQ24Game9EnemyBasePQ24Game8StateArg
init__Q34Game10SnakeWhole9StateWaitFPQ24Game9EnemyBasePQ24Game8StateArg:
/* 802CD2F8 002CA238  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802CD2FC 002CA23C  7C 08 02 A6 */	mflr r0
/* 802CD300 002CA240  C0 02 E4 B4 */	lfs f0, lbl_8051C814@sda21(r2)
/* 802CD304 002CA244  90 01 00 14 */	stw r0, 0x14(r1)
/* 802CD308 002CA248  38 00 FF FF */	li r0, -1
/* 802CD30C 002CA24C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802CD310 002CA250  7C 9F 23 78 */	mr r31, r4
/* 802CD314 002CA254  7F E3 FB 78 */	mr r3, r31
/* 802CD318 002CA258  D0 04 02 C4 */	stfs f0, 0x2c4(r4)
/* 802CD31C 002CA25C  90 04 02 CC */	stw r0, 0x2cc(r4)
/* 802CD320 002CA260  48 00 24 91 */	bl setAttackPosition__Q34Game10SnakeWhole3ObjFv
/* 802CD324 002CA264  38 00 00 00 */	li r0, 0
/* 802CD328 002CA268  C0 02 E4 B4 */	lfs f0, lbl_8051C814@sda21(r2)
/* 802CD32C 002CA26C  90 1F 02 30 */	stw r0, 0x230(r31)
/* 802CD330 002CA270  7F E3 FB 78 */	mr r3, r31
/* 802CD334 002CA274  38 80 00 09 */	li r4, 9
/* 802CD338 002CA278  38 A0 00 00 */	li r5, 0
/* 802CD33C 002CA27C  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 802CD340 002CA280  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 802CD344 002CA284  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 802CD348 002CA288  4B E3 7C BD */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 802CD34C 002CA28C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802CD350 002CA290  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802CD354 002CA294  7C 08 03 A6 */	mtlr r0
/* 802CD358 002CA298  38 21 00 10 */	addi r1, r1, 0x10
/* 802CD35C 002CA29C  4E 80 00 20 */	blr 

.global exec__Q34Game10SnakeWhole9StateWaitFPQ24Game9EnemyBase
exec__Q34Game10SnakeWhole9StateWaitFPQ24Game9EnemyBase:
/* 802CD360 002CA2A0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802CD364 002CA2A4  7C 08 02 A6 */	mflr r0
/* 802CD368 002CA2A8  C0 02 E4 B4 */	lfs f0, lbl_8051C814@sda21(r2)
/* 802CD36C 002CA2AC  90 01 00 14 */	stw r0, 0x14(r1)
/* 802CD370 002CA2B0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802CD374 002CA2B4  7C 9F 23 78 */	mr r31, r4
/* 802CD378 002CA2B8  93 C1 00 08 */	stw r30, 8(r1)
/* 802CD37C 002CA2BC  7C 7E 1B 78 */	mr r30, r3
/* 802CD380 002CA2C0  C0 24 02 00 */	lfs f1, 0x200(r4)
/* 802CD384 002CA2C4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802CD388 002CA2C8  4C 40 13 82 */	cror 2, 0, 2
/* 802CD38C 002CA2CC  40 82 00 18 */	bne .L_802CD3A4
/* 802CD390 002CA2D0  38 00 00 00 */	li r0, 0
/* 802CD394 002CA2D4  7F E3 FB 78 */	mr r3, r31
/* 802CD398 002CA2D8  90 1F 02 CC */	stw r0, 0x2cc(r31)
/* 802CD39C 002CA2DC  4B E3 7F 05 */	bl finishMotion__Q24Game9EnemyBaseFv
/* 802CD3A0 002CA2E0  48 00 00 CC */	b .L_802CD46C
.L_802CD3A4:
/* 802CD3A4 002CA2E4  7F E3 FB 78 */	mr r3, r31
/* 802CD3A8 002CA2E8  38 80 00 00 */	li r4, 0
/* 802CD3AC 002CA2EC  4B E4 72 AD */	bl isStartFlick__Q24Game9EnemyFuncFPQ24Game9EnemyBaseb
/* 802CD3B0 002CA2F0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802CD3B4 002CA2F4  40 82 00 18 */	bne .L_802CD3CC
/* 802CD3B8 002CA2F8  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 802CD3BC 002CA2FC  C0 3F 02 C4 */	lfs f1, 0x2c4(r31)
/* 802CD3C0 002CA300  C0 03 08 44 */	lfs f0, 0x844(r3)
/* 802CD3C4 002CA304  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802CD3C8 002CA308  40 81 00 18 */	ble .L_802CD3E0
.L_802CD3CC:
/* 802CD3CC 002CA30C  38 00 00 04 */	li r0, 4
/* 802CD3D0 002CA310  7F E3 FB 78 */	mr r3, r31
/* 802CD3D4 002CA314  90 1F 02 CC */	stw r0, 0x2cc(r31)
/* 802CD3D8 002CA318  4B E3 7E C9 */	bl finishMotion__Q24Game9EnemyBaseFv
/* 802CD3DC 002CA31C  48 00 00 90 */	b .L_802CD46C
.L_802CD3E0:
/* 802CD3E0 002CA320  7F E3 FB 78 */	mr r3, r31
/* 802CD3E4 002CA324  48 00 1A 81 */	bl isOutTerritory__Q34Game10SnakeWhole3ObjFv
/* 802CD3E8 002CA328  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802CD3EC 002CA32C  41 82 00 18 */	beq .L_802CD404
/* 802CD3F0 002CA330  38 00 00 07 */	li r0, 7
/* 802CD3F4 002CA334  7F E3 FB 78 */	mr r3, r31
/* 802CD3F8 002CA338  90 1F 02 CC */	stw r0, 0x2cc(r31)
/* 802CD3FC 002CA33C  4B E3 7E A5 */	bl finishMotion__Q24Game9EnemyBaseFv
/* 802CD400 002CA340  48 00 00 6C */	b .L_802CD46C
.L_802CD404:
/* 802CD404 002CA344  7F E3 FB 78 */	mr r3, r31
/* 802CD408 002CA348  38 80 00 05 */	li r4, 5
/* 802CD40C 002CA34C  48 00 25 B1 */	bl getAttackPiki__Q34Game10SnakeWhole3ObjFi
/* 802CD410 002CA350  28 03 00 00 */	cmplwi r3, 0
/* 802CD414 002CA354  40 82 00 18 */	bne .L_802CD42C
/* 802CD418 002CA358  7F E3 FB 78 */	mr r3, r31
/* 802CD41C 002CA35C  38 80 00 05 */	li r4, 5
/* 802CD420 002CA360  48 00 2B 91 */	bl getAttackNavi__Q34Game10SnakeWhole3ObjFi
/* 802CD424 002CA364  28 03 00 00 */	cmplwi r3, 0
/* 802CD428 002CA368  41 82 00 18 */	beq .L_802CD440
.L_802CD42C:
/* 802CD42C 002CA36C  38 00 00 08 */	li r0, 8
/* 802CD430 002CA370  7F E3 FB 78 */	mr r3, r31
/* 802CD434 002CA374  90 1F 02 CC */	stw r0, 0x2cc(r31)
/* 802CD438 002CA378  4B E3 7E 69 */	bl finishMotion__Q24Game9EnemyBaseFv
/* 802CD43C 002CA37C  48 00 00 30 */	b .L_802CD46C
.L_802CD440:
/* 802CD440 002CA380  7F E3 FB 78 */	mr r3, r31
/* 802CD444 002CA384  48 00 31 35 */	bl getSearchedTarget__Q34Game10SnakeWhole3ObjFv
/* 802CD448 002CA388  28 03 00 00 */	cmplwi r3, 0
/* 802CD44C 002CA38C  41 82 00 18 */	beq .L_802CD464
/* 802CD450 002CA390  38 00 00 06 */	li r0, 6
/* 802CD454 002CA394  7F E3 FB 78 */	mr r3, r31
/* 802CD458 002CA398  90 1F 02 CC */	stw r0, 0x2cc(r31)
/* 802CD45C 002CA39C  4B E3 7E 45 */	bl finishMotion__Q24Game9EnemyBaseFv
/* 802CD460 002CA3A0  48 00 00 0C */	b .L_802CD46C
.L_802CD464:
/* 802CD464 002CA3A4  38 00 00 05 */	li r0, 5
/* 802CD468 002CA3A8  90 1F 02 CC */	stw r0, 0x2cc(r31)
.L_802CD46C:
/* 802CD46C 002CA3AC  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 802CD470 002CA3B0  C0 3F 02 C4 */	lfs f1, 0x2c4(r31)
/* 802CD474 002CA3B4  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 802CD478 002CA3B8  EC 01 00 2A */	fadds f0, f1, f0
/* 802CD47C 002CA3BC  D0 1F 02 C4 */	stfs f0, 0x2c4(r31)
/* 802CD480 002CA3C0  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 802CD484 002CA3C4  88 03 00 24 */	lbz r0, 0x24(r3)
/* 802CD488 002CA3C8  28 00 00 00 */	cmplwi r0, 0
/* 802CD48C 002CA3CC  41 82 00 54 */	beq .L_802CD4E0
/* 802CD490 002CA3D0  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 802CD494 002CA3D4  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 802CD498 002CA3D8  40 82 00 48 */	bne .L_802CD4E0
/* 802CD49C 002CA3DC  80 1F 02 CC */	lwz r0, 0x2cc(r31)
/* 802CD4A0 002CA3E0  2C 00 00 08 */	cmpwi r0, 8
/* 802CD4A4 002CA3E4  40 82 00 1C */	bne .L_802CD4C0
/* 802CD4A8 002CA3E8  7F E3 FB 78 */	mr r3, r31
/* 802CD4AC 002CA3EC  48 00 31 F1 */	bl getStickHeadPikmin__Q34Game10SnakeWhole3ObjFv
/* 802CD4B0 002CA3F0  2C 03 00 00 */	cmpwi r3, 0
/* 802CD4B4 002CA3F4  41 82 00 0C */	beq .L_802CD4C0
/* 802CD4B8 002CA3F8  38 00 00 0A */	li r0, 0xa
/* 802CD4BC 002CA3FC  90 1F 02 CC */	stw r0, 0x2cc(r31)
.L_802CD4C0:
/* 802CD4C0 002CA400  7F C3 F3 78 */	mr r3, r30
/* 802CD4C4 002CA404  7F E4 FB 78 */	mr r4, r31
/* 802CD4C8 002CA408  81 9E 00 00 */	lwz r12, 0(r30)
/* 802CD4CC 002CA40C  38 C0 00 00 */	li r6, 0
/* 802CD4D0 002CA410  80 BF 02 CC */	lwz r5, 0x2cc(r31)
/* 802CD4D4 002CA414  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802CD4D8 002CA418  7D 89 03 A6 */	mtctr r12
/* 802CD4DC 002CA41C  4E 80 04 21 */	bctrl 
.L_802CD4E0:
/* 802CD4E0 002CA420  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802CD4E4 002CA424  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802CD4E8 002CA428  83 C1 00 08 */	lwz r30, 8(r1)
/* 802CD4EC 002CA42C  7C 08 03 A6 */	mtlr r0
/* 802CD4F0 002CA430  38 21 00 10 */	addi r1, r1, 0x10
/* 802CD4F4 002CA434  4E 80 00 20 */	blr 

.global cleanup__Q34Game10SnakeWhole9StateWaitFPQ24Game9EnemyBase
cleanup__Q34Game10SnakeWhole9StateWaitFPQ24Game9EnemyBase:
/* 802CD4F8 002CA438  4E 80 00 20 */	blr 

.global init__Q34Game10SnakeWhole9StateWalkFPQ24Game9EnemyBasePQ24Game8StateArg
init__Q34Game10SnakeWhole9StateWalkFPQ24Game9EnemyBasePQ24Game8StateArg:
/* 802CD4FC 002CA43C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802CD500 002CA440  7C 08 02 A6 */	mflr r0
/* 802CD504 002CA444  C0 02 E4 B4 */	lfs f0, lbl_8051C814@sda21(r2)
/* 802CD508 002CA448  7C 83 23 78 */	mr r3, r4
/* 802CD50C 002CA44C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802CD510 002CA450  38 00 00 00 */	li r0, 0
/* 802CD514 002CA454  38 A0 00 00 */	li r5, 0
/* 802CD518 002CA458  98 04 02 C1 */	stb r0, 0x2c1(r4)
/* 802CD51C 002CA45C  38 80 00 0C */	li r4, 0xc
/* 802CD520 002CA460  D0 03 02 C8 */	stfs f0, 0x2c8(r3)
/* 802CD524 002CA464  D0 03 01 D4 */	stfs f0, 0x1d4(r3)
/* 802CD528 002CA468  D0 03 01 D8 */	stfs f0, 0x1d8(r3)
/* 802CD52C 002CA46C  D0 03 01 DC */	stfs f0, 0x1dc(r3)
/* 802CD530 002CA470  4B E3 7A D5 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 802CD534 002CA474  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802CD538 002CA478  7C 08 03 A6 */	mtlr r0
/* 802CD53C 002CA47C  38 21 00 10 */	addi r1, r1, 0x10
/* 802CD540 002CA480  4E 80 00 20 */	blr 

.global exec__Q34Game10SnakeWhole9StateWalkFPQ24Game9EnemyBase
exec__Q34Game10SnakeWhole9StateWalkFPQ24Game9EnemyBase:
/* 802CD544 002CA484  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 802CD548 002CA488  7C 08 02 A6 */	mflr r0
/* 802CD54C 002CA48C  90 01 00 44 */	stw r0, 0x44(r1)
/* 802CD550 002CA490  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 802CD554 002CA494  7C 9F 23 78 */	mr r31, r4
/* 802CD558 002CA498  93 C1 00 38 */	stw r30, 0x38(r1)
/* 802CD55C 002CA49C  7C 7E 1B 78 */	mr r30, r3
/* 802CD560 002CA4A0  7F E3 FB 78 */	mr r3, r31
/* 802CD564 002CA4A4  48 00 22 4D */	bl setAttackPosition__Q34Game10SnakeWhole3ObjFv
/* 802CD568 002CA4A8  C0 3F 02 00 */	lfs f1, 0x200(r31)
/* 802CD56C 002CA4AC  C0 02 E4 B4 */	lfs f0, lbl_8051C814@sda21(r2)
/* 802CD570 002CA4B0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802CD574 002CA4B4  4C 40 13 82 */	cror 2, 0, 2
/* 802CD578 002CA4B8  40 82 00 18 */	bne .L_802CD590
/* 802CD57C 002CA4BC  38 00 00 00 */	li r0, 0
/* 802CD580 002CA4C0  7F E3 FB 78 */	mr r3, r31
/* 802CD584 002CA4C4  90 1F 02 CC */	stw r0, 0x2cc(r31)
/* 802CD588 002CA4C8  4B E3 7D 19 */	bl finishMotion__Q24Game9EnemyBaseFv
/* 802CD58C 002CA4CC  48 00 00 88 */	b .L_802CD614
.L_802CD590:
/* 802CD590 002CA4D0  7F E3 FB 78 */	mr r3, r31
/* 802CD594 002CA4D4  38 80 00 00 */	li r4, 0
/* 802CD598 002CA4D8  4B E4 70 C1 */	bl isStartFlick__Q24Game9EnemyFuncFPQ24Game9EnemyBaseb
/* 802CD59C 002CA4DC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802CD5A0 002CA4E0  41 82 00 18 */	beq .L_802CD5B8
/* 802CD5A4 002CA4E4  38 00 00 04 */	li r0, 4
/* 802CD5A8 002CA4E8  7F E3 FB 78 */	mr r3, r31
/* 802CD5AC 002CA4EC  90 1F 02 CC */	stw r0, 0x2cc(r31)
/* 802CD5B0 002CA4F0  4B E3 7C F1 */	bl finishMotion__Q24Game9EnemyBaseFv
/* 802CD5B4 002CA4F4  48 00 00 60 */	b .L_802CD614
.L_802CD5B8:
/* 802CD5B8 002CA4F8  7F E3 FB 78 */	mr r3, r31
/* 802CD5BC 002CA4FC  48 00 18 A9 */	bl isOutTerritory__Q34Game10SnakeWhole3ObjFv
/* 802CD5C0 002CA500  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802CD5C4 002CA504  41 82 00 18 */	beq .L_802CD5DC
/* 802CD5C8 002CA508  38 00 00 07 */	li r0, 7
/* 802CD5CC 002CA50C  7F E3 FB 78 */	mr r3, r31
/* 802CD5D0 002CA510  90 1F 02 CC */	stw r0, 0x2cc(r31)
/* 802CD5D4 002CA514  4B E3 7C CD */	bl finishMotion__Q24Game9EnemyBaseFv
/* 802CD5D8 002CA518  48 00 00 3C */	b .L_802CD614
.L_802CD5DC:
/* 802CD5DC 002CA51C  7F E3 FB 78 */	mr r3, r31
/* 802CD5E0 002CA520  38 80 00 05 */	li r4, 5
/* 802CD5E4 002CA524  48 00 23 D9 */	bl getAttackPiki__Q34Game10SnakeWhole3ObjFi
/* 802CD5E8 002CA528  28 03 00 00 */	cmplwi r3, 0
/* 802CD5EC 002CA52C  40 82 00 18 */	bne .L_802CD604
/* 802CD5F0 002CA530  7F E3 FB 78 */	mr r3, r31
/* 802CD5F4 002CA534  38 80 00 05 */	li r4, 5
/* 802CD5F8 002CA538  48 00 29 B9 */	bl getAttackNavi__Q34Game10SnakeWhole3ObjFi
/* 802CD5FC 002CA53C  28 03 00 00 */	cmplwi r3, 0
/* 802CD600 002CA540  41 82 00 14 */	beq .L_802CD614
.L_802CD604:
/* 802CD604 002CA544  38 00 00 08 */	li r0, 8
/* 802CD608 002CA548  7F E3 FB 78 */	mr r3, r31
/* 802CD60C 002CA54C  90 1F 02 CC */	stw r0, 0x2cc(r31)
/* 802CD610 002CA550  4B E3 7C 91 */	bl finishMotion__Q24Game9EnemyBaseFv
.L_802CD614:
/* 802CD614 002CA554  88 1F 02 C1 */	lbz r0, 0x2c1(r31)
/* 802CD618 002CA558  28 00 00 00 */	cmplwi r0, 0
/* 802CD61C 002CA55C  41 82 00 10 */	beq .L_802CD62C
/* 802CD620 002CA560  7F E3 FB 78 */	mr r3, r31
/* 802CD624 002CA564  48 00 1B 65 */	bl updateFace__Q34Game10SnakeWhole3ObjFv
/* 802CD628 002CA568  48 00 00 14 */	b .L_802CD63C
.L_802CD62C:
/* 802CD62C 002CA56C  C0 02 E4 B4 */	lfs f0, lbl_8051C814@sda21(r2)
/* 802CD630 002CA570  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 802CD634 002CA574  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 802CD638 002CA578  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
.L_802CD63C:
/* 802CD63C 002CA57C  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 802CD640 002CA580  88 03 00 24 */	lbz r0, 0x24(r3)
/* 802CD644 002CA584  28 00 00 00 */	cmplwi r0, 0
/* 802CD648 002CA588  41 82 01 6C */	beq .L_802CD7B4
/* 802CD64C 002CA58C  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 802CD650 002CA590  28 00 00 02 */	cmplwi r0, 2
/* 802CD654 002CA594  40 82 00 90 */	bne .L_802CD6E4
/* 802CD658 002CA598  80 9F 01 E0 */	lwz r4, 0x1e0(r31)
/* 802CD65C 002CA59C  38 00 00 01 */	li r0, 1
/* 802CD660 002CA5A0  C0 02 E4 B4 */	lfs f0, lbl_8051C814@sda21(r2)
/* 802CD664 002CA5A4  7F E3 FB 78 */	mr r3, r31
/* 802CD668 002CA5A8  64 84 00 20 */	oris r4, r4, 0x20
/* 802CD66C 002CA5AC  90 9F 01 E0 */	stw r4, 0x1e0(r31)
/* 802CD670 002CA5B0  98 1F 02 C1 */	stb r0, 0x2c1(r31)
/* 802CD674 002CA5B4  D0 1F 02 C8 */	stfs f0, 0x2c8(r31)
/* 802CD678 002CA5B8  48 00 2F 01 */	bl getSearchedTarget__Q34Game10SnakeWhole3ObjFv
/* 802CD67C 002CA5BC  28 03 00 00 */	cmplwi r3, 0
/* 802CD680 002CA5C0  41 82 00 44 */	beq .L_802CD6C4
/* 802CD684 002CA5C4  7C 64 1B 78 */	mr r4, r3
/* 802CD688 002CA5C8  38 61 00 14 */	addi r3, r1, 0x14
/* 802CD68C 002CA5CC  81 84 00 00 */	lwz r12, 0(r4)
/* 802CD690 002CA5D0  81 8C 00 08 */	lwz r12, 8(r12)
/* 802CD694 002CA5D4  7D 89 03 A6 */	mtctr r12
/* 802CD698 002CA5D8  4E 80 04 21 */	bctrl 
/* 802CD69C 002CA5DC  C0 41 00 14 */	lfs f2, 0x14(r1)
/* 802CD6A0 002CA5E0  7F E3 FB 78 */	mr r3, r31
/* 802CD6A4 002CA5E4  C0 21 00 18 */	lfs f1, 0x18(r1)
/* 802CD6A8 002CA5E8  38 81 00 2C */	addi r4, r1, 0x2c
/* 802CD6AC 002CA5EC  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 802CD6B0 002CA5F0  D0 41 00 2C */	stfs f2, 0x2c(r1)
/* 802CD6B4 002CA5F4  D0 21 00 30 */	stfs f1, 0x30(r1)
/* 802CD6B8 002CA5F8  D0 01 00 34 */	stfs f0, 0x34(r1)
/* 802CD6BC 002CA5FC  48 00 18 21 */	bl "setJumpMove__Q34Game10SnakeWhole3ObjFR10Vector3<f>"
/* 802CD6C0 002CA600  48 00 00 14 */	b .L_802CD6D4
.L_802CD6C4:
/* 802CD6C4 002CA604  38 00 00 05 */	li r0, 5
/* 802CD6C8 002CA608  7F E3 FB 78 */	mr r3, r31
/* 802CD6CC 002CA60C  90 1F 02 CC */	stw r0, 0x2cc(r31)
/* 802CD6D0 002CA610  4B E3 7B D1 */	bl finishMotion__Q24Game9EnemyBaseFv
.L_802CD6D4:
/* 802CD6D4 002CA614  C0 22 E4 BC */	lfs f1, lbl_8051C81C@sda21(r2)
/* 802CD6D8 002CA618  7F E3 FB 78 */	mr r3, r31
/* 802CD6DC 002CA61C  48 00 3D 71 */	bl createWalkSmokeEffect__Q34Game10SnakeWhole3ObjFf
/* 802CD6E0 002CA620  48 00 00 D4 */	b .L_802CD7B4
.L_802CD6E4:
/* 802CD6E4 002CA624  28 00 00 03 */	cmplwi r0, 3
/* 802CD6E8 002CA628  40 82 00 80 */	bne .L_802CD768
/* 802CD6EC 002CA62C  80 9F 01 E0 */	lwz r4, 0x1e0(r31)
/* 802CD6F0 002CA630  38 00 00 00 */	li r0, 0
/* 802CD6F4 002CA634  C0 22 E4 BC */	lfs f1, lbl_8051C81C@sda21(r2)
/* 802CD6F8 002CA638  7F E3 FB 78 */	mr r3, r31
/* 802CD6FC 002CA63C  54 84 02 D2 */	rlwinm r4, r4, 0, 0xb, 9
/* 802CD700 002CA640  90 9F 01 E0 */	stw r4, 0x1e0(r31)
/* 802CD704 002CA644  98 1F 02 C1 */	stb r0, 0x2c1(r31)
/* 802CD708 002CA648  48 00 3D 45 */	bl createWalkSmokeEffect__Q34Game10SnakeWhole3ObjFf
/* 802CD70C 002CA64C  7F E4 FB 78 */	mr r4, r31
/* 802CD710 002CA650  38 61 00 08 */	addi r3, r1, 8
/* 802CD714 002CA654  81 9F 00 00 */	lwz r12, 0(r31)
/* 802CD718 002CA658  81 8C 00 08 */	lwz r12, 8(r12)
/* 802CD71C 002CA65C  7D 89 03 A6 */	mtctr r12
/* 802CD720 002CA660  4E 80 04 21 */	bctrl 
/* 802CD724 002CA664  C0 41 00 08 */	lfs f2, 8(r1)
/* 802CD728 002CA668  38 A1 00 20 */	addi r5, r1, 0x20
/* 802CD72C 002CA66C  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 802CD730 002CA670  38 80 00 06 */	li r4, 6
/* 802CD734 002CA674  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 802CD738 002CA678  38 C0 00 02 */	li r6, 2
/* 802CD73C 002CA67C  D0 41 00 20 */	stfs f2, 0x20(r1)
/* 802CD740 002CA680  80 6D 96 A0 */	lwz r3, cameraMgr__4Game@sda21(r13)
/* 802CD744 002CA684  D0 21 00 24 */	stfs f1, 0x24(r1)
/* 802CD748 002CA688  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 802CD74C 002CA68C  4B F8 4A F1 */	bl "startVibration__Q24Game9CameraMgrFiR10Vector3<f>i"
/* 802CD750 002CA690  80 6D 96 A8 */	lwz r3, rumbleMgr__4Game@sda21(r13)
/* 802CD754 002CA694  38 A1 00 20 */	addi r5, r1, 0x20
/* 802CD758 002CA698  38 80 00 0E */	li r4, 0xe
/* 802CD75C 002CA69C  38 C0 00 02 */	li r6, 2
/* 802CD760 002CA6A0  4B F8 60 21 */	bl "startRumble__Q24Game9RumbleMgrFiR10Vector3<f>i"
/* 802CD764 002CA6A4  48 00 00 50 */	b .L_802CD7B4
.L_802CD768:
/* 802CD768 002CA6A8  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 802CD76C 002CA6AC  40 82 00 48 */	bne .L_802CD7B4
/* 802CD770 002CA6B0  80 1F 02 CC */	lwz r0, 0x2cc(r31)
/* 802CD774 002CA6B4  2C 00 00 08 */	cmpwi r0, 8
/* 802CD778 002CA6B8  40 82 00 1C */	bne .L_802CD794
/* 802CD77C 002CA6BC  7F E3 FB 78 */	mr r3, r31
/* 802CD780 002CA6C0  48 00 2F 1D */	bl getStickHeadPikmin__Q34Game10SnakeWhole3ObjFv
/* 802CD784 002CA6C4  2C 03 00 00 */	cmpwi r3, 0
/* 802CD788 002CA6C8  41 82 00 0C */	beq .L_802CD794
/* 802CD78C 002CA6CC  38 00 00 0A */	li r0, 0xa
/* 802CD790 002CA6D0  90 1F 02 CC */	stw r0, 0x2cc(r31)
.L_802CD794:
/* 802CD794 002CA6D4  7F C3 F3 78 */	mr r3, r30
/* 802CD798 002CA6D8  7F E4 FB 78 */	mr r4, r31
/* 802CD79C 002CA6DC  81 9E 00 00 */	lwz r12, 0(r30)
/* 802CD7A0 002CA6E0  38 C0 00 00 */	li r6, 0
/* 802CD7A4 002CA6E4  80 BF 02 CC */	lwz r5, 0x2cc(r31)
/* 802CD7A8 002CA6E8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802CD7AC 002CA6EC  7D 89 03 A6 */	mtctr r12
/* 802CD7B0 002CA6F0  4E 80 04 21 */	bctrl 
.L_802CD7B4:
/* 802CD7B4 002CA6F4  80 01 00 44 */	lwz r0, 0x44(r1)
/* 802CD7B8 002CA6F8  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 802CD7BC 002CA6FC  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 802CD7C0 002CA700  7C 08 03 A6 */	mtlr r0
/* 802CD7C4 002CA704  38 21 00 40 */	addi r1, r1, 0x40
/* 802CD7C8 002CA708  4E 80 00 20 */	blr 

.global cleanup__Q34Game10SnakeWhole9StateWalkFPQ24Game9EnemyBase
cleanup__Q34Game10SnakeWhole9StateWalkFPQ24Game9EnemyBase:
/* 802CD7CC 002CA70C  80 04 01 E0 */	lwz r0, 0x1e0(r4)
/* 802CD7D0 002CA710  54 00 02 D2 */	rlwinm r0, r0, 0, 0xb, 9
/* 802CD7D4 002CA714  90 04 01 E0 */	stw r0, 0x1e0(r4)
/* 802CD7D8 002CA718  4E 80 00 20 */	blr 

.global init__Q34Game10SnakeWhole9StateHomeFPQ24Game9EnemyBasePQ24Game8StateArg
init__Q34Game10SnakeWhole9StateHomeFPQ24Game9EnemyBasePQ24Game8StateArg:
/* 802CD7DC 002CA71C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802CD7E0 002CA720  7C 08 02 A6 */	mflr r0
/* 802CD7E4 002CA724  C0 02 E4 B4 */	lfs f0, lbl_8051C814@sda21(r2)
/* 802CD7E8 002CA728  7C 83 23 78 */	mr r3, r4
/* 802CD7EC 002CA72C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802CD7F0 002CA730  38 00 00 00 */	li r0, 0
/* 802CD7F4 002CA734  38 A0 00 00 */	li r5, 0
/* 802CD7F8 002CA738  98 04 02 C1 */	stb r0, 0x2c1(r4)
/* 802CD7FC 002CA73C  38 80 00 0C */	li r4, 0xc
/* 802CD800 002CA740  D0 03 02 C8 */	stfs f0, 0x2c8(r3)
/* 802CD804 002CA744  D0 03 01 D4 */	stfs f0, 0x1d4(r3)
/* 802CD808 002CA748  D0 03 01 D8 */	stfs f0, 0x1d8(r3)
/* 802CD80C 002CA74C  D0 03 01 DC */	stfs f0, 0x1dc(r3)
/* 802CD810 002CA750  4B E3 77 F5 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 802CD814 002CA754  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802CD818 002CA758  7C 08 03 A6 */	mtlr r0
/* 802CD81C 002CA75C  38 21 00 10 */	addi r1, r1, 0x10
/* 802CD820 002CA760  4E 80 00 20 */	blr 

.global exec__Q34Game10SnakeWhole9StateHomeFPQ24Game9EnemyBase
exec__Q34Game10SnakeWhole9StateHomeFPQ24Game9EnemyBase:
/* 802CD824 002CA764  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802CD828 002CA768  7C 08 02 A6 */	mflr r0
/* 802CD82C 002CA76C  90 01 00 24 */	stw r0, 0x24(r1)
/* 802CD830 002CA770  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 802CD834 002CA774  7C 9F 23 78 */	mr r31, r4
/* 802CD838 002CA778  93 C1 00 18 */	stw r30, 0x18(r1)
/* 802CD83C 002CA77C  7C 7E 1B 78 */	mr r30, r3
/* 802CD840 002CA780  7F E3 FB 78 */	mr r3, r31
/* 802CD844 002CA784  48 00 1F 6D */	bl setAttackPosition__Q34Game10SnakeWhole3ObjFv
/* 802CD848 002CA788  C0 3F 02 00 */	lfs f1, 0x200(r31)
/* 802CD84C 002CA78C  C0 02 E4 B4 */	lfs f0, lbl_8051C814@sda21(r2)
/* 802CD850 002CA790  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802CD854 002CA794  4C 40 13 82 */	cror 2, 0, 2
/* 802CD858 002CA798  40 82 00 18 */	bne .L_802CD870
/* 802CD85C 002CA79C  38 00 00 00 */	li r0, 0
/* 802CD860 002CA7A0  7F E3 FB 78 */	mr r3, r31
/* 802CD864 002CA7A4  90 1F 02 CC */	stw r0, 0x2cc(r31)
/* 802CD868 002CA7A8  4B E3 7A 39 */	bl finishMotion__Q24Game9EnemyBaseFv
/* 802CD86C 002CA7AC  48 00 00 5C */	b .L_802CD8C8
.L_802CD870:
/* 802CD870 002CA7B0  7F E3 FB 78 */	mr r3, r31
/* 802CD874 002CA7B4  38 80 00 00 */	li r4, 0
/* 802CD878 002CA7B8  4B E4 6D E1 */	bl isStartFlick__Q24Game9EnemyFuncFPQ24Game9EnemyBaseb
/* 802CD87C 002CA7BC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802CD880 002CA7C0  41 82 00 18 */	beq .L_802CD898
/* 802CD884 002CA7C4  38 00 00 04 */	li r0, 4
/* 802CD888 002CA7C8  7F E3 FB 78 */	mr r3, r31
/* 802CD88C 002CA7CC  90 1F 02 CC */	stw r0, 0x2cc(r31)
/* 802CD890 002CA7D0  4B E3 7A 11 */	bl finishMotion__Q24Game9EnemyBaseFv
/* 802CD894 002CA7D4  48 00 00 34 */	b .L_802CD8C8
.L_802CD898:
/* 802CD898 002CA7D8  7F E3 FB 78 */	mr r3, r31
/* 802CD89C 002CA7DC  48 00 16 05 */	bl isInHomeRange__Q34Game10SnakeWhole3ObjFv
/* 802CD8A0 002CA7E0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802CD8A4 002CA7E4  41 82 00 24 */	beq .L_802CD8C8
/* 802CD8A8 002CA7E8  C0 02 E4 B4 */	lfs f0, lbl_8051C814@sda21(r2)
/* 802CD8AC 002CA7EC  38 00 00 05 */	li r0, 5
/* 802CD8B0 002CA7F0  7F E3 FB 78 */	mr r3, r31
/* 802CD8B4 002CA7F4  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 802CD8B8 002CA7F8  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 802CD8BC 002CA7FC  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 802CD8C0 002CA800  90 1F 02 CC */	stw r0, 0x2cc(r31)
/* 802CD8C4 002CA804  4B E3 79 DD */	bl finishMotion__Q24Game9EnemyBaseFv
.L_802CD8C8:
/* 802CD8C8 002CA808  88 1F 02 C1 */	lbz r0, 0x2c1(r31)
/* 802CD8CC 002CA80C  28 00 00 00 */	cmplwi r0, 0
/* 802CD8D0 002CA810  41 82 00 10 */	beq .L_802CD8E0
/* 802CD8D4 002CA814  7F E3 FB 78 */	mr r3, r31
/* 802CD8D8 002CA818  48 00 18 B1 */	bl updateFace__Q34Game10SnakeWhole3ObjFv
/* 802CD8DC 002CA81C  48 00 00 14 */	b .L_802CD8F0
.L_802CD8E0:
/* 802CD8E0 002CA820  C0 02 E4 B4 */	lfs f0, lbl_8051C814@sda21(r2)
/* 802CD8E4 002CA824  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 802CD8E8 002CA828  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 802CD8EC 002CA82C  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
.L_802CD8F0:
/* 802CD8F0 002CA830  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 802CD8F4 002CA834  88 03 00 24 */	lbz r0, 0x24(r3)
/* 802CD8F8 002CA838  28 00 00 00 */	cmplwi r0, 0
/* 802CD8FC 002CA83C  41 82 00 B4 */	beq .L_802CD9B0
/* 802CD900 002CA840  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 802CD904 002CA844  28 00 00 02 */	cmplwi r0, 2
/* 802CD908 002CA848  40 82 00 54 */	bne .L_802CD95C
/* 802CD90C 002CA84C  80 9F 01 E0 */	lwz r4, 0x1e0(r31)
/* 802CD910 002CA850  38 00 00 01 */	li r0, 1
/* 802CD914 002CA854  C0 02 E4 B4 */	lfs f0, lbl_8051C814@sda21(r2)
/* 802CD918 002CA858  7F E3 FB 78 */	mr r3, r31
/* 802CD91C 002CA85C  64 85 00 20 */	oris r5, r4, 0x20
/* 802CD920 002CA860  38 81 00 08 */	addi r4, r1, 8
/* 802CD924 002CA864  90 BF 01 E0 */	stw r5, 0x1e0(r31)
/* 802CD928 002CA868  98 1F 02 C1 */	stb r0, 0x2c1(r31)
/* 802CD92C 002CA86C  D0 1F 02 C8 */	stfs f0, 0x2c8(r31)
/* 802CD930 002CA870  C0 3F 01 9C */	lfs f1, 0x19c(r31)
/* 802CD934 002CA874  C0 5F 01 A0 */	lfs f2, 0x1a0(r31)
/* 802CD938 002CA878  C0 1F 01 98 */	lfs f0, 0x198(r31)
/* 802CD93C 002CA87C  D0 01 00 08 */	stfs f0, 8(r1)
/* 802CD940 002CA880  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 802CD944 002CA884  D0 41 00 10 */	stfs f2, 0x10(r1)
/* 802CD948 002CA888  48 00 15 95 */	bl "setJumpMove__Q34Game10SnakeWhole3ObjFR10Vector3<f>"
/* 802CD94C 002CA88C  C0 22 E4 BC */	lfs f1, lbl_8051C81C@sda21(r2)
/* 802CD950 002CA890  7F E3 FB 78 */	mr r3, r31
/* 802CD954 002CA894  48 00 3A F9 */	bl createWalkSmokeEffect__Q34Game10SnakeWhole3ObjFf
/* 802CD958 002CA898  48 00 00 58 */	b .L_802CD9B0
.L_802CD95C:
/* 802CD95C 002CA89C  28 00 00 03 */	cmplwi r0, 3
/* 802CD960 002CA8A0  40 82 00 28 */	bne .L_802CD988
/* 802CD964 002CA8A4  80 9F 01 E0 */	lwz r4, 0x1e0(r31)
/* 802CD968 002CA8A8  38 00 00 00 */	li r0, 0
/* 802CD96C 002CA8AC  C0 22 E4 BC */	lfs f1, lbl_8051C81C@sda21(r2)
/* 802CD970 002CA8B0  7F E3 FB 78 */	mr r3, r31
/* 802CD974 002CA8B4  54 84 02 D2 */	rlwinm r4, r4, 0, 0xb, 9
/* 802CD978 002CA8B8  90 9F 01 E0 */	stw r4, 0x1e0(r31)
/* 802CD97C 002CA8BC  98 1F 02 C1 */	stb r0, 0x2c1(r31)
/* 802CD980 002CA8C0  48 00 3A CD */	bl createWalkSmokeEffect__Q34Game10SnakeWhole3ObjFf
/* 802CD984 002CA8C4  48 00 00 2C */	b .L_802CD9B0
.L_802CD988:
/* 802CD988 002CA8C8  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 802CD98C 002CA8CC  40 82 00 24 */	bne .L_802CD9B0
/* 802CD990 002CA8D0  7F C3 F3 78 */	mr r3, r30
/* 802CD994 002CA8D4  7F E4 FB 78 */	mr r4, r31
/* 802CD998 002CA8D8  81 9E 00 00 */	lwz r12, 0(r30)
/* 802CD99C 002CA8DC  38 C0 00 00 */	li r6, 0
/* 802CD9A0 002CA8E0  80 BF 02 CC */	lwz r5, 0x2cc(r31)
/* 802CD9A4 002CA8E4  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802CD9A8 002CA8E8  7D 89 03 A6 */	mtctr r12
/* 802CD9AC 002CA8EC  4E 80 04 21 */	bctrl 
.L_802CD9B0:
/* 802CD9B0 002CA8F0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802CD9B4 002CA8F4  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 802CD9B8 002CA8F8  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 802CD9BC 002CA8FC  7C 08 03 A6 */	mtlr r0
/* 802CD9C0 002CA900  38 21 00 20 */	addi r1, r1, 0x20
/* 802CD9C4 002CA904  4E 80 00 20 */	blr 

.global cleanup__Q34Game10SnakeWhole9StateHomeFPQ24Game9EnemyBase
cleanup__Q34Game10SnakeWhole9StateHomeFPQ24Game9EnemyBase:
/* 802CD9C8 002CA908  80 04 01 E0 */	lwz r0, 0x1e0(r4)
/* 802CD9CC 002CA90C  54 00 02 D2 */	rlwinm r0, r0, 0, 0xb, 9
/* 802CD9D0 002CA910  90 04 01 E0 */	stw r0, 0x1e0(r4)
/* 802CD9D4 002CA914  4E 80 00 20 */	blr 

.global init__Q34Game10SnakeWhole11StateAttackFPQ24Game9EnemyBasePQ24Game8StateArg
init__Q34Game10SnakeWhole11StateAttackFPQ24Game9EnemyBasePQ24Game8StateArg:
/* 802CD9D8 002CA918  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802CD9DC 002CA91C  7C 08 02 A6 */	mflr r0
/* 802CD9E0 002CA920  C0 02 E4 B4 */	lfs f0, lbl_8051C814@sda21(r2)
/* 802CD9E4 002CA924  7C 83 23 78 */	mr r3, r4
/* 802CD9E8 002CA928  90 01 00 14 */	stw r0, 0x14(r1)
/* 802CD9EC 002CA92C  38 A0 00 00 */	li r5, 0
/* 802CD9F0 002CA930  80 04 01 E0 */	lwz r0, 0x1e0(r4)
/* 802CD9F4 002CA934  54 00 06 B0 */	rlwinm r0, r0, 0, 0x1a, 0x18
/* 802CD9F8 002CA938  90 04 01 E0 */	stw r0, 0x1e0(r4)
/* 802CD9FC 002CA93C  D0 04 01 D4 */	stfs f0, 0x1d4(r4)
/* 802CDA00 002CA940  D0 04 01 D8 */	stfs f0, 0x1d8(r4)
/* 802CDA04 002CA944  D0 04 01 DC */	stfs f0, 0x1dc(r4)
/* 802CDA08 002CA948  80 84 02 E4 */	lwz r4, 0x2e4(r4)
/* 802CDA0C 002CA94C  38 84 00 04 */	addi r4, r4, 4
/* 802CDA10 002CA950  4B E3 75 F5 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 802CDA14 002CA954  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802CDA18 002CA958  7C 08 03 A6 */	mtlr r0
/* 802CDA1C 002CA95C  38 21 00 10 */	addi r1, r1, 0x10
/* 802CDA20 002CA960  4E 80 00 20 */	blr 

.global exec__Q34Game10SnakeWhole11StateAttackFPQ24Game9EnemyBase
exec__Q34Game10SnakeWhole11StateAttackFPQ24Game9EnemyBase:
/* 802CDA24 002CA964  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 802CDA28 002CA968  7C 08 02 A6 */	mflr r0
/* 802CDA2C 002CA96C  90 01 00 44 */	stw r0, 0x44(r1)
/* 802CDA30 002CA970  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 802CDA34 002CA974  7C 9F 23 78 */	mr r31, r4
/* 802CDA38 002CA978  93 C1 00 38 */	stw r30, 0x38(r1)
/* 802CDA3C 002CA97C  93 A1 00 34 */	stw r29, 0x34(r1)
/* 802CDA40 002CA980  7C 7D 1B 78 */	mr r29, r3
/* 802CDA44 002CA984  7F E3 FB 78 */	mr r3, r31
/* 802CDA48 002CA988  4B E3 98 B9 */	bl isFinishMotion__Q24Game9EnemyBaseFv
/* 802CDA4C 002CA98C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802CDA50 002CA990  40 82 00 0C */	bne .L_802CDA5C
/* 802CDA54 002CA994  7F E3 FB 78 */	mr r3, r31
/* 802CDA58 002CA998  48 00 1D 59 */	bl setAttackPosition__Q34Game10SnakeWhole3ObjFv
.L_802CDA5C:
/* 802CDA5C 002CA99C  C0 3F 02 00 */	lfs f1, 0x200(r31)
/* 802CDA60 002CA9A0  C0 02 E4 B4 */	lfs f0, lbl_8051C814@sda21(r2)
/* 802CDA64 002CA9A4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802CDA68 002CA9A8  4C 40 13 82 */	cror 2, 0, 2
/* 802CDA6C 002CA9AC  40 82 00 0C */	bne .L_802CDA78
/* 802CDA70 002CA9B0  7F E3 FB 78 */	mr r3, r31
/* 802CDA74 002CA9B4  4B E3 78 2D */	bl finishMotion__Q24Game9EnemyBaseFv
.L_802CDA78:
/* 802CDA78 002CA9B8  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 802CDA7C 002CA9BC  88 03 00 24 */	lbz r0, 0x24(r3)
/* 802CDA80 002CA9C0  28 00 00 00 */	cmplwi r0, 0
/* 802CDA84 002CA9C4  41 82 03 54 */	beq .L_802CDDD8
/* 802CDA88 002CA9C8  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 802CDA8C 002CA9CC  28 00 00 02 */	cmplwi r0, 2
/* 802CDA90 002CA9D0  40 82 00 10 */	bne .L_802CDAA0
/* 802CDA94 002CA9D4  7F E3 FB 78 */	mr r3, r31
/* 802CDA98 002CA9D8  48 00 2F 05 */	bl startJointCallBack__Q34Game10SnakeWhole3ObjFv
/* 802CDA9C 002CA9DC  48 00 03 3C */	b .L_802CDDD8
.L_802CDAA0:
/* 802CDAA0 002CA9E0  28 00 00 03 */	cmplwi r0, 3
/* 802CDAA4 002CA9E4  40 82 00 E8 */	bne .L_802CDB8C
/* 802CDAA8 002CA9E8  83 DF 02 E4 */	lwz r30, 0x2e4(r31)
/* 802CDAAC 002CA9EC  7F E3 FB 78 */	mr r3, r31
/* 802CDAB0 002CA9F0  7F C4 F3 78 */	mr r4, r30
/* 802CDAB4 002CA9F4  48 00 1F 09 */	bl getAttackPiki__Q34Game10SnakeWhole3ObjFi
/* 802CDAB8 002CA9F8  7C 7D 1B 79 */	or. r29, r3, r3
/* 802CDABC 002CA9FC  41 82 00 64 */	beq .L_802CDB20
/* 802CDAC0 002CAA00  7F E3 FB 78 */	mr r3, r31
/* 802CDAC4 002CAA04  48 00 2B 05 */	bl getSwallowSlot__Q34Game10SnakeWhole3ObjFv
/* 802CDAC8 002CAA08  3C A0 80 4B */	lis r5, __vt__Q24Game11Interaction@ha
/* 802CDACC 002CAA0C  3C 80 80 4B */	lis r4, __vt__Q24Game14InteractAttack@ha
/* 802CDAD0 002CAA10  38 05 A3 00 */	addi r0, r5, __vt__Q24Game11Interaction@l
/* 802CDAD4 002CAA14  C0 02 E4 C4 */	lfs f0, lbl_8051C824@sda21(r2)
/* 802CDAD8 002CAA18  90 01 00 18 */	stw r0, 0x18(r1)
/* 802CDADC 002CAA1C  38 A4 4D E0 */	addi r5, r4, __vt__Q24Game14InteractAttack@l
/* 802CDAE0 002CAA20  3C 80 80 4B */	lis r4, __vt__Q24Game15InteractSwallow@ha
/* 802CDAE4 002CAA24  38 00 00 00 */	li r0, 0
/* 802CDAE8 002CAA28  90 A1 00 18 */	stw r5, 0x18(r1)
/* 802CDAEC 002CAA2C  38 A4 4D BC */	addi r5, r4, __vt__Q24Game15InteractSwallow@l
/* 802CDAF0 002CAA30  38 81 00 18 */	addi r4, r1, 0x18
/* 802CDAF4 002CAA34  90 61 00 24 */	stw r3, 0x24(r1)
/* 802CDAF8 002CAA38  7F A3 EB 78 */	mr r3, r29
/* 802CDAFC 002CAA3C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 802CDB00 002CAA40  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 802CDB04 002CAA44  90 A1 00 18 */	stw r5, 0x18(r1)
/* 802CDB08 002CAA48  90 01 00 28 */	stw r0, 0x28(r1)
/* 802CDB0C 002CAA4C  81 9D 00 00 */	lwz r12, 0(r29)
/* 802CDB10 002CAA50  81 8C 01 A4 */	lwz r12, 0x1a4(r12)
/* 802CDB14 002CAA54  7D 89 03 A6 */	mtctr r12
/* 802CDB18 002CAA58  4E 80 04 21 */	bctrl 
/* 802CDB1C 002CAA5C  48 00 00 64 */	b .L_802CDB80
.L_802CDB20:
/* 802CDB20 002CAA60  7F E3 FB 78 */	mr r3, r31
/* 802CDB24 002CAA64  7F C4 F3 78 */	mr r4, r30
/* 802CDB28 002CAA68  48 00 24 89 */	bl getAttackNavi__Q34Game10SnakeWhole3ObjFi
/* 802CDB2C 002CAA6C  28 03 00 00 */	cmplwi r3, 0
/* 802CDB30 002CAA70  41 82 00 48 */	beq .L_802CDB78
/* 802CDB34 002CAA74  80 DF 00 C0 */	lwz r6, 0xc0(r31)
/* 802CDB38 002CAA78  3C A0 80 4B */	lis r5, __vt__Q24Game11Interaction@ha
/* 802CDB3C 002CAA7C  3C 80 80 4B */	lis r4, __vt__Q24Game14InteractAttack@ha
/* 802CDB40 002CAA80  38 00 00 00 */	li r0, 0
/* 802CDB44 002CAA84  C0 06 06 04 */	lfs f0, 0x604(r6)
/* 802CDB48 002CAA88  38 C5 A3 00 */	addi r6, r5, __vt__Q24Game11Interaction@l
/* 802CDB4C 002CAA8C  38 A4 4D E0 */	addi r5, r4, __vt__Q24Game14InteractAttack@l
/* 802CDB50 002CAA90  38 81 00 08 */	addi r4, r1, 8
/* 802CDB54 002CAA94  90 C1 00 08 */	stw r6, 8(r1)
/* 802CDB58 002CAA98  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802CDB5C 002CAA9C  90 A1 00 08 */	stw r5, 8(r1)
/* 802CDB60 002CAAA0  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 802CDB64 002CAAA4  90 01 00 14 */	stw r0, 0x14(r1)
/* 802CDB68 002CAAA8  81 83 00 00 */	lwz r12, 0(r3)
/* 802CDB6C 002CAAAC  81 8C 01 A4 */	lwz r12, 0x1a4(r12)
/* 802CDB70 002CAAB0  7D 89 03 A6 */	mtctr r12
/* 802CDB74 002CAAB4  4E 80 04 21 */	bctrl 
.L_802CDB78:
/* 802CDB78 002CAAB8  7F E3 FB 78 */	mr r3, r31
/* 802CDB7C 002CAABC  4B E3 77 25 */	bl finishMotion__Q24Game9EnemyBaseFv
.L_802CDB80:
/* 802CDB80 002CAAC0  7F E3 FB 78 */	mr r3, r31
/* 802CDB84 002CAAC4  48 00 2E D1 */	bl returnJointCallBack__Q34Game10SnakeWhole3ObjFv
/* 802CDB88 002CAAC8  48 00 02 50 */	b .L_802CDDD8
.L_802CDB8C:
/* 802CDB8C 002CAACC  28 00 00 04 */	cmplwi r0, 4
/* 802CDB90 002CAAD0  40 82 00 94 */	bne .L_802CDC24
/* 802CDB94 002CAAD4  7F E3 FB 78 */	mr r3, r31
/* 802CDB98 002CAAD8  4B E3 97 69 */	bl isFinishMotion__Q24Game9EnemyBaseFv
/* 802CDB9C 002CAADC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802CDBA0 002CAAE0  40 82 00 78 */	bne .L_802CDC18
/* 802CDBA4 002CAAE4  7F E3 FB 78 */	mr r3, r31
/* 802CDBA8 002CAAE8  48 00 2A 21 */	bl getSwallowSlot__Q34Game10SnakeWhole3ObjFv
/* 802CDBAC 002CAAEC  28 03 00 00 */	cmplwi r3, 0
/* 802CDBB0 002CAAF0  41 82 00 68 */	beq .L_802CDC18
/* 802CDBB4 002CAAF4  7F E3 FB 78 */	mr r3, r31
/* 802CDBB8 002CAAF8  38 80 00 05 */	li r4, 5
/* 802CDBBC 002CAAFC  48 00 1E 01 */	bl getAttackPiki__Q34Game10SnakeWhole3ObjFi
/* 802CDBC0 002CAB00  28 03 00 00 */	cmplwi r3, 0
/* 802CDBC4 002CAB04  40 82 00 18 */	bne .L_802CDBDC
/* 802CDBC8 002CAB08  7F E3 FB 78 */	mr r3, r31
/* 802CDBCC 002CAB0C  38 80 00 05 */	li r4, 5
/* 802CDBD0 002CAB10  48 00 23 E1 */	bl getAttackNavi__Q34Game10SnakeWhole3ObjFi
/* 802CDBD4 002CAB14  28 03 00 00 */	cmplwi r3, 0
/* 802CDBD8 002CAB18  41 82 00 34 */	beq .L_802CDC0C
.L_802CDBDC:
/* 802CDBDC 002CAB1C  80 9F 02 E4 */	lwz r4, 0x2e4(r31)
/* 802CDBE0 002CAB20  7F E3 FB 78 */	mr r3, r31
/* 802CDBE4 002CAB24  38 A0 00 00 */	li r5, 0
/* 802CDBE8 002CAB28  38 84 00 04 */	addi r4, r4, 4
/* 802CDBEC 002CAB2C  4B E3 74 19 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 802CDBF0 002CAB30  7F E3 FB 78 */	mr r3, r31
/* 802CDBF4 002CAB34  4B E3 96 85 */	bl getFirstKeyFrame__Q24Game9EnemyBaseFv
/* 802CDBF8 002CAB38  7F E3 FB 78 */	mr r3, r31
/* 802CDBFC 002CAB3C  4B E3 76 2D */	bl setMotionFrame__Q24Game9EnemyBaseFf
/* 802CDC00 002CAB40  7F E3 FB 78 */	mr r3, r31
/* 802CDC04 002CAB44  48 00 2D 99 */	bl startJointCallBack__Q34Game10SnakeWhole3ObjFv
/* 802CDC08 002CAB48  48 00 01 D0 */	b .L_802CDDD8
.L_802CDC0C:
/* 802CDC0C 002CAB4C  7F E3 FB 78 */	mr r3, r31
/* 802CDC10 002CAB50  48 00 2E CD */	bl finishJointCallBack__Q34Game10SnakeWhole3ObjFv
/* 802CDC14 002CAB54  48 00 01 C4 */	b .L_802CDDD8
.L_802CDC18:
/* 802CDC18 002CAB58  7F E3 FB 78 */	mr r3, r31
/* 802CDC1C 002CAB5C  48 00 2E C1 */	bl finishJointCallBack__Q34Game10SnakeWhole3ObjFv
/* 802CDC20 002CAB60  48 00 01 B8 */	b .L_802CDDD8
.L_802CDC24:
/* 802CDC24 002CAB64  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 802CDC28 002CAB68  40 82 01 B0 */	bne .L_802CDDD8
/* 802CDC2C 002CAB6C  C0 3F 02 00 */	lfs f1, 0x200(r31)
/* 802CDC30 002CAB70  C0 02 E4 B4 */	lfs f0, lbl_8051C814@sda21(r2)
/* 802CDC34 002CAB74  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802CDC38 002CAB78  4C 40 13 82 */	cror 2, 0, 2
/* 802CDC3C 002CAB7C  40 82 00 28 */	bne .L_802CDC64
/* 802CDC40 002CAB80  7F A3 EB 78 */	mr r3, r29
/* 802CDC44 002CAB84  7F E4 FB 78 */	mr r4, r31
/* 802CDC48 002CAB88  81 9D 00 00 */	lwz r12, 0(r29)
/* 802CDC4C 002CAB8C  38 A0 00 00 */	li r5, 0
/* 802CDC50 002CAB90  38 C0 00 00 */	li r6, 0
/* 802CDC54 002CAB94  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802CDC58 002CAB98  7D 89 03 A6 */	mtctr r12
/* 802CDC5C 002CAB9C  4E 80 04 21 */	bctrl 
/* 802CDC60 002CABA0  48 00 01 78 */	b .L_802CDDD8
.L_802CDC64:
/* 802CDC64 002CABA4  7F E3 FB 78 */	mr r3, r31
/* 802CDC68 002CABA8  48 00 29 C9 */	bl isSwallowPikmin__Q34Game10SnakeWhole3ObjFv
/* 802CDC6C 002CABAC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802CDC70 002CABB0  41 82 00 28 */	beq .L_802CDC98
/* 802CDC74 002CABB4  7F A3 EB 78 */	mr r3, r29
/* 802CDC78 002CABB8  7F E4 FB 78 */	mr r4, r31
/* 802CDC7C 002CABBC  81 9D 00 00 */	lwz r12, 0(r29)
/* 802CDC80 002CABC0  38 A0 00 09 */	li r5, 9
/* 802CDC84 002CABC4  38 C0 00 00 */	li r6, 0
/* 802CDC88 002CABC8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802CDC8C 002CABCC  7D 89 03 A6 */	mtctr r12
/* 802CDC90 002CABD0  4E 80 04 21 */	bctrl 
/* 802CDC94 002CABD4  48 00 01 44 */	b .L_802CDDD8
.L_802CDC98:
/* 802CDC98 002CABD8  7F E3 FB 78 */	mr r3, r31
/* 802CDC9C 002CABDC  38 80 00 00 */	li r4, 0
/* 802CDCA0 002CABE0  4B E4 69 B9 */	bl isStartFlick__Q24Game9EnemyFuncFPQ24Game9EnemyBaseb
/* 802CDCA4 002CABE4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802CDCA8 002CABE8  41 82 00 28 */	beq .L_802CDCD0
/* 802CDCAC 002CABEC  7F A3 EB 78 */	mr r3, r29
/* 802CDCB0 002CABF0  7F E4 FB 78 */	mr r4, r31
/* 802CDCB4 002CABF4  81 9D 00 00 */	lwz r12, 0(r29)
/* 802CDCB8 002CABF8  38 A0 00 04 */	li r5, 4
/* 802CDCBC 002CABFC  38 C0 00 00 */	li r6, 0
/* 802CDCC0 002CAC00  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802CDCC4 002CAC04  7D 89 03 A6 */	mtctr r12
/* 802CDCC8 002CAC08  4E 80 04 21 */	bctrl 
/* 802CDCCC 002CAC0C  48 00 01 0C */	b .L_802CDDD8
.L_802CDCD0:
/* 802CDCD0 002CAC10  7F E3 FB 78 */	mr r3, r31
/* 802CDCD4 002CAC14  38 80 00 05 */	li r4, 5
/* 802CDCD8 002CAC18  48 00 1C E5 */	bl getAttackPiki__Q34Game10SnakeWhole3ObjFi
/* 802CDCDC 002CAC1C  28 03 00 00 */	cmplwi r3, 0
/* 802CDCE0 002CAC20  40 82 00 18 */	bne .L_802CDCF8
/* 802CDCE4 002CAC24  7F E3 FB 78 */	mr r3, r31
/* 802CDCE8 002CAC28  38 80 00 05 */	li r4, 5
/* 802CDCEC 002CAC2C  48 00 22 C5 */	bl getAttackNavi__Q34Game10SnakeWhole3ObjFi
/* 802CDCF0 002CAC30  28 03 00 00 */	cmplwi r3, 0
/* 802CDCF4 002CAC34  41 82 00 5C */	beq .L_802CDD50
.L_802CDCF8:
/* 802CDCF8 002CAC38  7F E3 FB 78 */	mr r3, r31
/* 802CDCFC 002CAC3C  48 00 29 A1 */	bl getStickHeadPikmin__Q34Game10SnakeWhole3ObjFv
/* 802CDD00 002CAC40  2C 03 00 00 */	cmpwi r3, 0
/* 802CDD04 002CAC44  41 82 00 28 */	beq .L_802CDD2C
/* 802CDD08 002CAC48  7F A3 EB 78 */	mr r3, r29
/* 802CDD0C 002CAC4C  7F E4 FB 78 */	mr r4, r31
/* 802CDD10 002CAC50  81 9D 00 00 */	lwz r12, 0(r29)
/* 802CDD14 002CAC54  38 A0 00 0A */	li r5, 0xa
/* 802CDD18 002CAC58  38 C0 00 00 */	li r6, 0
/* 802CDD1C 002CAC5C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802CDD20 002CAC60  7D 89 03 A6 */	mtctr r12
/* 802CDD24 002CAC64  4E 80 04 21 */	bctrl 
/* 802CDD28 002CAC68  48 00 00 B0 */	b .L_802CDDD8
.L_802CDD2C:
/* 802CDD2C 002CAC6C  7F A3 EB 78 */	mr r3, r29
/* 802CDD30 002CAC70  7F E4 FB 78 */	mr r4, r31
/* 802CDD34 002CAC74  81 9D 00 00 */	lwz r12, 0(r29)
/* 802CDD38 002CAC78  38 A0 00 08 */	li r5, 8
/* 802CDD3C 002CAC7C  38 C0 00 00 */	li r6, 0
/* 802CDD40 002CAC80  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802CDD44 002CAC84  7D 89 03 A6 */	mtctr r12
/* 802CDD48 002CAC88  4E 80 04 21 */	bctrl 
/* 802CDD4C 002CAC8C  48 00 00 8C */	b .L_802CDDD8
.L_802CDD50:
/* 802CDD50 002CAC90  7F E3 FB 78 */	mr r3, r31
/* 802CDD54 002CAC94  48 00 11 11 */	bl isOutTerritory__Q34Game10SnakeWhole3ObjFv
/* 802CDD58 002CAC98  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802CDD5C 002CAC9C  41 82 00 28 */	beq .L_802CDD84
/* 802CDD60 002CACA0  7F A3 EB 78 */	mr r3, r29
/* 802CDD64 002CACA4  7F E4 FB 78 */	mr r4, r31
/* 802CDD68 002CACA8  81 9D 00 00 */	lwz r12, 0(r29)
/* 802CDD6C 002CACAC  38 A0 00 07 */	li r5, 7
/* 802CDD70 002CACB0  38 C0 00 00 */	li r6, 0
/* 802CDD74 002CACB4  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802CDD78 002CACB8  7D 89 03 A6 */	mtctr r12
/* 802CDD7C 002CACBC  4E 80 04 21 */	bctrl 
/* 802CDD80 002CACC0  48 00 00 58 */	b .L_802CDDD8
.L_802CDD84:
/* 802CDD84 002CACC4  7F E3 FB 78 */	mr r3, r31
/* 802CDD88 002CACC8  48 00 27 F1 */	bl getSearchedTarget__Q34Game10SnakeWhole3ObjFv
/* 802CDD8C 002CACCC  28 03 00 00 */	cmplwi r3, 0
/* 802CDD90 002CACD0  41 82 00 28 */	beq .L_802CDDB8
/* 802CDD94 002CACD4  7F A3 EB 78 */	mr r3, r29
/* 802CDD98 002CACD8  7F E4 FB 78 */	mr r4, r31
/* 802CDD9C 002CACDC  81 9D 00 00 */	lwz r12, 0(r29)
/* 802CDDA0 002CACE0  38 A0 00 06 */	li r5, 6
/* 802CDDA4 002CACE4  38 C0 00 00 */	li r6, 0
/* 802CDDA8 002CACE8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802CDDAC 002CACEC  7D 89 03 A6 */	mtctr r12
/* 802CDDB0 002CACF0  4E 80 04 21 */	bctrl 
/* 802CDDB4 002CACF4  48 00 00 24 */	b .L_802CDDD8
.L_802CDDB8:
/* 802CDDB8 002CACF8  7F A3 EB 78 */	mr r3, r29
/* 802CDDBC 002CACFC  7F E4 FB 78 */	mr r4, r31
/* 802CDDC0 002CAD00  81 9D 00 00 */	lwz r12, 0(r29)
/* 802CDDC4 002CAD04  38 A0 00 05 */	li r5, 5
/* 802CDDC8 002CAD08  38 C0 00 00 */	li r6, 0
/* 802CDDCC 002CAD0C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802CDDD0 002CAD10  7D 89 03 A6 */	mtctr r12
/* 802CDDD4 002CAD14  4E 80 04 21 */	bctrl 
.L_802CDDD8:
/* 802CDDD8 002CAD18  80 01 00 44 */	lwz r0, 0x44(r1)
/* 802CDDDC 002CAD1C  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 802CDDE0 002CAD20  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 802CDDE4 002CAD24  83 A1 00 34 */	lwz r29, 0x34(r1)
/* 802CDDE8 002CAD28  7C 08 03 A6 */	mtlr r0
/* 802CDDEC 002CAD2C  38 21 00 40 */	addi r1, r1, 0x40
/* 802CDDF0 002CAD30  4E 80 00 20 */	blr 

.global cleanup__Q34Game10SnakeWhole11StateAttackFPQ24Game9EnemyBase
cleanup__Q34Game10SnakeWhole11StateAttackFPQ24Game9EnemyBase:
/* 802CDDF4 002CAD34  80 04 01 E0 */	lwz r0, 0x1e0(r4)
/* 802CDDF8 002CAD38  60 00 00 40 */	ori r0, r0, 0x40
/* 802CDDFC 002CAD3C  90 04 01 E0 */	stw r0, 0x1e0(r4)
/* 802CDE00 002CAD40  4E 80 00 20 */	blr 

.global init__Q34Game10SnakeWhole8StateEatFPQ24Game9EnemyBasePQ24Game8StateArg
init__Q34Game10SnakeWhole8StateEatFPQ24Game9EnemyBasePQ24Game8StateArg:
/* 802CDE04 002CAD44  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802CDE08 002CAD48  7C 08 02 A6 */	mflr r0
/* 802CDE0C 002CAD4C  7C 83 23 78 */	mr r3, r4
/* 802CDE10 002CAD50  C0 02 E4 B4 */	lfs f0, lbl_8051C814@sda21(r2)
/* 802CDE14 002CAD54  90 01 00 14 */	stw r0, 0x14(r1)
/* 802CDE18 002CAD58  38 80 00 0A */	li r4, 0xa
/* 802CDE1C 002CAD5C  38 A0 00 00 */	li r5, 0
/* 802CDE20 002CAD60  D0 03 01 D4 */	stfs f0, 0x1d4(r3)
/* 802CDE24 002CAD64  D0 03 01 D8 */	stfs f0, 0x1d8(r3)
/* 802CDE28 002CAD68  D0 03 01 DC */	stfs f0, 0x1dc(r3)
/* 802CDE2C 002CAD6C  4B E3 71 D9 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 802CDE30 002CAD70  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802CDE34 002CAD74  7C 08 03 A6 */	mtlr r0
/* 802CDE38 002CAD78  38 21 00 10 */	addi r1, r1, 0x10
/* 802CDE3C 002CAD7C  4E 80 00 20 */	blr 

.global exec__Q34Game10SnakeWhole8StateEatFPQ24Game9EnemyBase
exec__Q34Game10SnakeWhole8StateEatFPQ24Game9EnemyBase:
/* 802CDE40 002CAD80  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802CDE44 002CAD84  7C 08 02 A6 */	mflr r0
/* 802CDE48 002CAD88  90 01 00 14 */	stw r0, 0x14(r1)
/* 802CDE4C 002CAD8C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802CDE50 002CAD90  7C 9F 23 78 */	mr r31, r4
/* 802CDE54 002CAD94  93 C1 00 08 */	stw r30, 8(r1)
/* 802CDE58 002CAD98  7C 7E 1B 78 */	mr r30, r3
/* 802CDE5C 002CAD9C  80 64 01 88 */	lwz r3, 0x188(r4)
/* 802CDE60 002CADA0  88 03 00 24 */	lbz r0, 0x24(r3)
/* 802CDE64 002CADA4  28 00 00 00 */	cmplwi r0, 0
/* 802CDE68 002CADA8  41 82 01 B0 */	beq .L_802CE018
/* 802CDE6C 002CADAC  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 802CDE70 002CADB0  28 00 00 02 */	cmplwi r0, 2
/* 802CDE74 002CADB4  40 82 00 1C */	bne .L_802CDE90
/* 802CDE78 002CADB8  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 802CDE7C 002CADBC  7F E3 FB 78 */	mr r3, r31
/* 802CDE80 002CADC0  38 80 00 00 */	li r4, 0
/* 802CDE84 002CADC4  C0 25 08 94 */	lfs f1, 0x894(r5)
/* 802CDE88 002CADC8  4B E4 5F FD */	bl "swallowPikmin__Q24Game9EnemyFuncFPQ24Game8CreaturefP23Condition<Q24Game4Piki>"
/* 802CDE8C 002CADCC  48 00 01 8C */	b .L_802CE018
.L_802CDE90:
/* 802CDE90 002CADD0  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 802CDE94 002CADD4  40 82 01 84 */	bne .L_802CE018
/* 802CDE98 002CADD8  7F E3 FB 78 */	mr r3, r31
/* 802CDE9C 002CADDC  48 00 19 15 */	bl setAttackPosition__Q34Game10SnakeWhole3ObjFv
/* 802CDEA0 002CADE0  C0 3F 02 00 */	lfs f1, 0x200(r31)
/* 802CDEA4 002CADE4  C0 02 E4 B4 */	lfs f0, lbl_8051C814@sda21(r2)
/* 802CDEA8 002CADE8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802CDEAC 002CADEC  4C 40 13 82 */	cror 2, 0, 2
/* 802CDEB0 002CADF0  40 82 00 28 */	bne .L_802CDED8
/* 802CDEB4 002CADF4  7F C3 F3 78 */	mr r3, r30
/* 802CDEB8 002CADF8  7F E4 FB 78 */	mr r4, r31
/* 802CDEBC 002CADFC  81 9E 00 00 */	lwz r12, 0(r30)
/* 802CDEC0 002CAE00  38 A0 00 00 */	li r5, 0
/* 802CDEC4 002CAE04  38 C0 00 00 */	li r6, 0
/* 802CDEC8 002CAE08  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802CDECC 002CAE0C  7D 89 03 A6 */	mtctr r12
/* 802CDED0 002CAE10  4E 80 04 21 */	bctrl 
/* 802CDED4 002CAE14  48 00 01 44 */	b .L_802CE018
.L_802CDED8:
/* 802CDED8 002CAE18  7F E3 FB 78 */	mr r3, r31
/* 802CDEDC 002CAE1C  38 80 00 00 */	li r4, 0
/* 802CDEE0 002CAE20  4B E4 67 79 */	bl isStartFlick__Q24Game9EnemyFuncFPQ24Game9EnemyBaseb
/* 802CDEE4 002CAE24  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802CDEE8 002CAE28  41 82 00 28 */	beq .L_802CDF10
/* 802CDEEC 002CAE2C  7F C3 F3 78 */	mr r3, r30
/* 802CDEF0 002CAE30  7F E4 FB 78 */	mr r4, r31
/* 802CDEF4 002CAE34  81 9E 00 00 */	lwz r12, 0(r30)
/* 802CDEF8 002CAE38  38 A0 00 04 */	li r5, 4
/* 802CDEFC 002CAE3C  38 C0 00 00 */	li r6, 0
/* 802CDF00 002CAE40  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802CDF04 002CAE44  7D 89 03 A6 */	mtctr r12
/* 802CDF08 002CAE48  4E 80 04 21 */	bctrl 
/* 802CDF0C 002CAE4C  48 00 01 0C */	b .L_802CE018
.L_802CDF10:
/* 802CDF10 002CAE50  7F E3 FB 78 */	mr r3, r31
/* 802CDF14 002CAE54  38 80 00 05 */	li r4, 5
/* 802CDF18 002CAE58  48 00 1A A5 */	bl getAttackPiki__Q34Game10SnakeWhole3ObjFi
/* 802CDF1C 002CAE5C  28 03 00 00 */	cmplwi r3, 0
/* 802CDF20 002CAE60  40 82 00 18 */	bne .L_802CDF38
/* 802CDF24 002CAE64  7F E3 FB 78 */	mr r3, r31
/* 802CDF28 002CAE68  38 80 00 05 */	li r4, 5
/* 802CDF2C 002CAE6C  48 00 20 85 */	bl getAttackNavi__Q34Game10SnakeWhole3ObjFi
/* 802CDF30 002CAE70  28 03 00 00 */	cmplwi r3, 0
/* 802CDF34 002CAE74  41 82 00 5C */	beq .L_802CDF90
.L_802CDF38:
/* 802CDF38 002CAE78  7F E3 FB 78 */	mr r3, r31
/* 802CDF3C 002CAE7C  48 00 27 61 */	bl getStickHeadPikmin__Q34Game10SnakeWhole3ObjFv
/* 802CDF40 002CAE80  2C 03 00 00 */	cmpwi r3, 0
/* 802CDF44 002CAE84  41 82 00 28 */	beq .L_802CDF6C
/* 802CDF48 002CAE88  7F C3 F3 78 */	mr r3, r30
/* 802CDF4C 002CAE8C  7F E4 FB 78 */	mr r4, r31
/* 802CDF50 002CAE90  81 9E 00 00 */	lwz r12, 0(r30)
/* 802CDF54 002CAE94  38 A0 00 0A */	li r5, 0xa
/* 802CDF58 002CAE98  38 C0 00 00 */	li r6, 0
/* 802CDF5C 002CAE9C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802CDF60 002CAEA0  7D 89 03 A6 */	mtctr r12
/* 802CDF64 002CAEA4  4E 80 04 21 */	bctrl 
/* 802CDF68 002CAEA8  48 00 00 B0 */	b .L_802CE018
.L_802CDF6C:
/* 802CDF6C 002CAEAC  7F C3 F3 78 */	mr r3, r30
/* 802CDF70 002CAEB0  7F E4 FB 78 */	mr r4, r31
/* 802CDF74 002CAEB4  81 9E 00 00 */	lwz r12, 0(r30)
/* 802CDF78 002CAEB8  38 A0 00 08 */	li r5, 8
/* 802CDF7C 002CAEBC  38 C0 00 00 */	li r6, 0
/* 802CDF80 002CAEC0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802CDF84 002CAEC4  7D 89 03 A6 */	mtctr r12
/* 802CDF88 002CAEC8  4E 80 04 21 */	bctrl 
/* 802CDF8C 002CAECC  48 00 00 8C */	b .L_802CE018
.L_802CDF90:
/* 802CDF90 002CAED0  7F E3 FB 78 */	mr r3, r31
/* 802CDF94 002CAED4  48 00 0E D1 */	bl isOutTerritory__Q34Game10SnakeWhole3ObjFv
/* 802CDF98 002CAED8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802CDF9C 002CAEDC  41 82 00 28 */	beq .L_802CDFC4
/* 802CDFA0 002CAEE0  7F C3 F3 78 */	mr r3, r30
/* 802CDFA4 002CAEE4  7F E4 FB 78 */	mr r4, r31
/* 802CDFA8 002CAEE8  81 9E 00 00 */	lwz r12, 0(r30)
/* 802CDFAC 002CAEEC  38 A0 00 07 */	li r5, 7
/* 802CDFB0 002CAEF0  38 C0 00 00 */	li r6, 0
/* 802CDFB4 002CAEF4  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802CDFB8 002CAEF8  7D 89 03 A6 */	mtctr r12
/* 802CDFBC 002CAEFC  4E 80 04 21 */	bctrl 
/* 802CDFC0 002CAF00  48 00 00 58 */	b .L_802CE018
.L_802CDFC4:
/* 802CDFC4 002CAF04  7F E3 FB 78 */	mr r3, r31
/* 802CDFC8 002CAF08  48 00 25 B1 */	bl getSearchedTarget__Q34Game10SnakeWhole3ObjFv
/* 802CDFCC 002CAF0C  28 03 00 00 */	cmplwi r3, 0
/* 802CDFD0 002CAF10  41 82 00 28 */	beq .L_802CDFF8
/* 802CDFD4 002CAF14  7F C3 F3 78 */	mr r3, r30
/* 802CDFD8 002CAF18  7F E4 FB 78 */	mr r4, r31
/* 802CDFDC 002CAF1C  81 9E 00 00 */	lwz r12, 0(r30)
/* 802CDFE0 002CAF20  38 A0 00 06 */	li r5, 6
/* 802CDFE4 002CAF24  38 C0 00 00 */	li r6, 0
/* 802CDFE8 002CAF28  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802CDFEC 002CAF2C  7D 89 03 A6 */	mtctr r12
/* 802CDFF0 002CAF30  4E 80 04 21 */	bctrl 
/* 802CDFF4 002CAF34  48 00 00 24 */	b .L_802CE018
.L_802CDFF8:
/* 802CDFF8 002CAF38  7F C3 F3 78 */	mr r3, r30
/* 802CDFFC 002CAF3C  7F E4 FB 78 */	mr r4, r31
/* 802CE000 002CAF40  81 9E 00 00 */	lwz r12, 0(r30)
/* 802CE004 002CAF44  38 A0 00 05 */	li r5, 5
/* 802CE008 002CAF48  38 C0 00 00 */	li r6, 0
/* 802CE00C 002CAF4C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802CE010 002CAF50  7D 89 03 A6 */	mtctr r12
/* 802CE014 002CAF54  4E 80 04 21 */	bctrl 
.L_802CE018:
/* 802CE018 002CAF58  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802CE01C 002CAF5C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802CE020 002CAF60  83 C1 00 08 */	lwz r30, 8(r1)
/* 802CE024 002CAF64  7C 08 03 A6 */	mtlr r0
/* 802CE028 002CAF68  38 21 00 10 */	addi r1, r1, 0x10
/* 802CE02C 002CAF6C  4E 80 00 20 */	blr 

.global cleanup__Q34Game10SnakeWhole8StateEatFPQ24Game9EnemyBase
cleanup__Q34Game10SnakeWhole8StateEatFPQ24Game9EnemyBase:
/* 802CE030 002CAF70  4E 80 00 20 */	blr 

.global init__Q34Game10SnakeWhole13StateStruggleFPQ24Game9EnemyBasePQ24Game8StateArg
init__Q34Game10SnakeWhole13StateStruggleFPQ24Game9EnemyBasePQ24Game8StateArg:
/* 802CE034 002CAF74  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802CE038 002CAF78  7C 08 02 A6 */	mflr r0
/* 802CE03C 002CAF7C  7C 83 23 78 */	mr r3, r4
/* 802CE040 002CAF80  C0 02 E4 B4 */	lfs f0, lbl_8051C814@sda21(r2)
/* 802CE044 002CAF84  90 01 00 14 */	stw r0, 0x14(r1)
/* 802CE048 002CAF88  38 80 00 0B */	li r4, 0xb
/* 802CE04C 002CAF8C  38 A0 00 00 */	li r5, 0
/* 802CE050 002CAF90  D0 03 02 C4 */	stfs f0, 0x2c4(r3)
/* 802CE054 002CAF94  D0 03 01 D4 */	stfs f0, 0x1d4(r3)
/* 802CE058 002CAF98  D0 03 01 D8 */	stfs f0, 0x1d8(r3)
/* 802CE05C 002CAF9C  D0 03 01 DC */	stfs f0, 0x1dc(r3)
/* 802CE060 002CAFA0  4B E3 6F A5 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 802CE064 002CAFA4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802CE068 002CAFA8  7C 08 03 A6 */	mtlr r0
/* 802CE06C 002CAFAC  38 21 00 10 */	addi r1, r1, 0x10
/* 802CE070 002CAFB0  4E 80 00 20 */	blr 

.global exec__Q34Game10SnakeWhole13StateStruggleFPQ24Game9EnemyBase
exec__Q34Game10SnakeWhole13StateStruggleFPQ24Game9EnemyBase:
/* 802CE074 002CAFB4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802CE078 002CAFB8  7C 08 02 A6 */	mflr r0
/* 802CE07C 002CAFBC  C0 02 E4 E0 */	lfs f0, lbl_8051C840@sda21(r2)
/* 802CE080 002CAFC0  90 01 00 14 */	stw r0, 0x14(r1)
/* 802CE084 002CAFC4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802CE088 002CAFC8  7C 9F 23 78 */	mr r31, r4
/* 802CE08C 002CAFCC  93 C1 00 08 */	stw r30, 8(r1)
/* 802CE090 002CAFD0  7C 7E 1B 78 */	mr r30, r3
/* 802CE094 002CAFD4  C0 24 02 C4 */	lfs f1, 0x2c4(r4)
/* 802CE098 002CAFD8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802CE09C 002CAFDC  40 81 00 0C */	ble .L_802CE0A8
/* 802CE0A0 002CAFE0  7F E3 FB 78 */	mr r3, r31
/* 802CE0A4 002CAFE4  4B E3 71 FD */	bl finishMotion__Q24Game9EnemyBaseFv
.L_802CE0A8:
/* 802CE0A8 002CAFE8  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 802CE0AC 002CAFEC  C0 3F 02 C4 */	lfs f1, 0x2c4(r31)
/* 802CE0B0 002CAFF0  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 802CE0B4 002CAFF4  EC 01 00 2A */	fadds f0, f1, f0
/* 802CE0B8 002CAFF8  D0 1F 02 C4 */	stfs f0, 0x2c4(r31)
/* 802CE0BC 002CAFFC  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 802CE0C0 002CB000  88 03 00 24 */	lbz r0, 0x24(r3)
/* 802CE0C4 002CB004  28 00 00 00 */	cmplwi r0, 0
/* 802CE0C8 002CB008  41 82 01 5C */	beq .L_802CE224
/* 802CE0CC 002CB00C  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 802CE0D0 002CB010  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 802CE0D4 002CB014  40 82 01 50 */	bne .L_802CE224
/* 802CE0D8 002CB018  7F E3 FB 78 */	mr r3, r31
/* 802CE0DC 002CB01C  48 00 16 D5 */	bl setAttackPosition__Q34Game10SnakeWhole3ObjFv
/* 802CE0E0 002CB020  C0 3F 02 00 */	lfs f1, 0x200(r31)
/* 802CE0E4 002CB024  C0 02 E4 B4 */	lfs f0, lbl_8051C814@sda21(r2)
/* 802CE0E8 002CB028  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802CE0EC 002CB02C  4C 40 13 82 */	cror 2, 0, 2
/* 802CE0F0 002CB030  40 82 00 28 */	bne .L_802CE118
/* 802CE0F4 002CB034  7F C3 F3 78 */	mr r3, r30
/* 802CE0F8 002CB038  7F E4 FB 78 */	mr r4, r31
/* 802CE0FC 002CB03C  81 9E 00 00 */	lwz r12, 0(r30)
/* 802CE100 002CB040  38 A0 00 00 */	li r5, 0
/* 802CE104 002CB044  38 C0 00 00 */	li r6, 0
/* 802CE108 002CB048  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802CE10C 002CB04C  7D 89 03 A6 */	mtctr r12
/* 802CE110 002CB050  4E 80 04 21 */	bctrl 
/* 802CE114 002CB054  48 00 01 10 */	b .L_802CE224
.L_802CE118:
/* 802CE118 002CB058  7F E3 FB 78 */	mr r3, r31
/* 802CE11C 002CB05C  38 80 00 00 */	li r4, 0
/* 802CE120 002CB060  4B E4 65 39 */	bl isStartFlick__Q24Game9EnemyFuncFPQ24Game9EnemyBaseb
/* 802CE124 002CB064  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802CE128 002CB068  41 82 00 28 */	beq .L_802CE150
/* 802CE12C 002CB06C  7F C3 F3 78 */	mr r3, r30
/* 802CE130 002CB070  7F E4 FB 78 */	mr r4, r31
/* 802CE134 002CB074  81 9E 00 00 */	lwz r12, 0(r30)
/* 802CE138 002CB078  38 A0 00 04 */	li r5, 4
/* 802CE13C 002CB07C  38 C0 00 00 */	li r6, 0
/* 802CE140 002CB080  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802CE144 002CB084  7D 89 03 A6 */	mtctr r12
/* 802CE148 002CB088  4E 80 04 21 */	bctrl 
/* 802CE14C 002CB08C  48 00 00 D8 */	b .L_802CE224
.L_802CE150:
/* 802CE150 002CB090  7F E3 FB 78 */	mr r3, r31
/* 802CE154 002CB094  38 80 00 05 */	li r4, 5
/* 802CE158 002CB098  48 00 18 65 */	bl getAttackPiki__Q34Game10SnakeWhole3ObjFi
/* 802CE15C 002CB09C  28 03 00 00 */	cmplwi r3, 0
/* 802CE160 002CB0A0  40 82 00 18 */	bne .L_802CE178
/* 802CE164 002CB0A4  7F E3 FB 78 */	mr r3, r31
/* 802CE168 002CB0A8  38 80 00 05 */	li r4, 5
/* 802CE16C 002CB0AC  48 00 1E 45 */	bl getAttackNavi__Q34Game10SnakeWhole3ObjFi
/* 802CE170 002CB0B0  28 03 00 00 */	cmplwi r3, 0
/* 802CE174 002CB0B4  41 82 00 28 */	beq .L_802CE19C
.L_802CE178:
/* 802CE178 002CB0B8  7F C3 F3 78 */	mr r3, r30
/* 802CE17C 002CB0BC  7F E4 FB 78 */	mr r4, r31
/* 802CE180 002CB0C0  81 9E 00 00 */	lwz r12, 0(r30)
/* 802CE184 002CB0C4  38 A0 00 08 */	li r5, 8
/* 802CE188 002CB0C8  38 C0 00 00 */	li r6, 0
/* 802CE18C 002CB0CC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802CE190 002CB0D0  7D 89 03 A6 */	mtctr r12
/* 802CE194 002CB0D4  4E 80 04 21 */	bctrl 
/* 802CE198 002CB0D8  48 00 00 8C */	b .L_802CE224
.L_802CE19C:
/* 802CE19C 002CB0DC  7F E3 FB 78 */	mr r3, r31
/* 802CE1A0 002CB0E0  48 00 0C C5 */	bl isOutTerritory__Q34Game10SnakeWhole3ObjFv
/* 802CE1A4 002CB0E4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802CE1A8 002CB0E8  41 82 00 28 */	beq .L_802CE1D0
/* 802CE1AC 002CB0EC  7F C3 F3 78 */	mr r3, r30
/* 802CE1B0 002CB0F0  7F E4 FB 78 */	mr r4, r31
/* 802CE1B4 002CB0F4  81 9E 00 00 */	lwz r12, 0(r30)
/* 802CE1B8 002CB0F8  38 A0 00 07 */	li r5, 7
/* 802CE1BC 002CB0FC  38 C0 00 00 */	li r6, 0
/* 802CE1C0 002CB100  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802CE1C4 002CB104  7D 89 03 A6 */	mtctr r12
/* 802CE1C8 002CB108  4E 80 04 21 */	bctrl 
/* 802CE1CC 002CB10C  48 00 00 58 */	b .L_802CE224
.L_802CE1D0:
/* 802CE1D0 002CB110  7F E3 FB 78 */	mr r3, r31
/* 802CE1D4 002CB114  48 00 23 A5 */	bl getSearchedTarget__Q34Game10SnakeWhole3ObjFv
/* 802CE1D8 002CB118  28 03 00 00 */	cmplwi r3, 0
/* 802CE1DC 002CB11C  41 82 00 28 */	beq .L_802CE204
/* 802CE1E0 002CB120  7F C3 F3 78 */	mr r3, r30
/* 802CE1E4 002CB124  7F E4 FB 78 */	mr r4, r31
/* 802CE1E8 002CB128  81 9E 00 00 */	lwz r12, 0(r30)
/* 802CE1EC 002CB12C  38 A0 00 06 */	li r5, 6
/* 802CE1F0 002CB130  38 C0 00 00 */	li r6, 0
/* 802CE1F4 002CB134  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802CE1F8 002CB138  7D 89 03 A6 */	mtctr r12
/* 802CE1FC 002CB13C  4E 80 04 21 */	bctrl 
/* 802CE200 002CB140  48 00 00 24 */	b .L_802CE224
.L_802CE204:
/* 802CE204 002CB144  7F C3 F3 78 */	mr r3, r30
/* 802CE208 002CB148  7F E4 FB 78 */	mr r4, r31
/* 802CE20C 002CB14C  81 9E 00 00 */	lwz r12, 0(r30)
/* 802CE210 002CB150  38 A0 00 05 */	li r5, 5
/* 802CE214 002CB154  38 C0 00 00 */	li r6, 0
/* 802CE218 002CB158  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802CE21C 002CB15C  7D 89 03 A6 */	mtctr r12
/* 802CE220 002CB160  4E 80 04 21 */	bctrl 
.L_802CE224:
/* 802CE224 002CB164  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802CE228 002CB168  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802CE22C 002CB16C  83 C1 00 08 */	lwz r30, 8(r1)
/* 802CE230 002CB170  7C 08 03 A6 */	mtlr r0
/* 802CE234 002CB174  38 21 00 10 */	addi r1, r1, 0x10
/* 802CE238 002CB178  4E 80 00 20 */	blr 

.global cleanup__Q34Game10SnakeWhole13StateStruggleFPQ24Game9EnemyBase
cleanup__Q34Game10SnakeWhole13StateStruggleFPQ24Game9EnemyBase:
/* 802CE23C 002CB17C  4E 80 00 20 */	blr 

.global __sinit_SnakeWholeState_cpp
__sinit_SnakeWholeState_cpp:
/* 802CE240 002CB180  3C 80 80 51 */	lis r4, __float_nan@ha
/* 802CE244 002CB184  38 00 FF FF */	li r0, -1
/* 802CE248 002CB188  C0 04 48 B0 */	lfs f0, __float_nan@l(r4)
/* 802CE24C 002CB18C  3C 60 80 4D */	lis r3, lbl_804D2150@ha
/* 802CE250 002CB190  90 0D 97 38 */	stw r0, lbl_80515DB8@sda21(r13)
/* 802CE254 002CB194  D4 03 21 50 */	stfsu f0, lbl_804D2150@l(r3)
/* 802CE258 002CB198  D0 0D 97 3C */	stfs f0, lbl_80515DBC@sda21(r13)
/* 802CE25C 002CB19C  D0 03 00 04 */	stfs f0, 4(r3)
/* 802CE260 002CB1A0  D0 03 00 08 */	stfs f0, 8(r3)
/* 802CE264 002CB1A4  4E 80 00 20 */	blr 
