.include "macros.inc"
.section .ctors, "wa"  # 0x80472F00 - 0x804732C0
lbl_constructor:
.4byte __sinit_SnakeCrowState_cpp

.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
.obj lbl_804883D8, local
	.asciz "disappear"
.endobj lbl_804883D8
.balign 4
.obj lbl_804883E4, local
	.asciz "struggle"
.endobj lbl_804883E4

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.obj govNAN___Q24Game5P2JST, local
	.float 0.0
	.float 0.0
	.float 0.0
.endobj govNAN___Q24Game5P2JST
.obj __vt__Q34Game9SnakeCrow13StateStruggle, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game9SnakeCrow13StateStruggleFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game9SnakeCrow13StateStruggleFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game9SnakeCrow13StateStruggleFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game9SnakeCrow13StateStruggle
.obj __vt__Q34Game9SnakeCrow8StateEat, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game9SnakeCrow8StateEatFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game9SnakeCrow8StateEatFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game9SnakeCrow8StateEatFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game9SnakeCrow8StateEat
.obj __vt__Q34Game9SnakeCrow11StateAttack, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game9SnakeCrow11StateAttackFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game9SnakeCrow11StateAttackFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game9SnakeCrow11StateAttackFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game9SnakeCrow11StateAttack
.obj __vt__Q34Game9SnakeCrow9StateWait, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game9SnakeCrow9StateWaitFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game9SnakeCrow9StateWaitFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game9SnakeCrow9StateWaitFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game9SnakeCrow9StateWait
.obj __vt__Q23efx14THebiAphd_dive, weak
	.4byte 0
	.4byte 0
	.4byte create__Q23efx14THebiAphd_baseFPQ23efx3Arg
	.4byte forceKill__Q23efx8TSimple4Fv
	.4byte fade__Q23efx8TSimple4Fv
.endobj __vt__Q23efx14THebiAphd_dive
.obj __vt__Q34Game9SnakeCrow14StateDisappear, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game9SnakeCrow14StateDisappearFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game9SnakeCrow14StateDisappearFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game9SnakeCrow14StateDisappearFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game9SnakeCrow14StateDisappear
.obj __vt__Q34Game9SnakeCrow12StateAppear2, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game9SnakeCrow12StateAppear2FPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game9SnakeCrow12StateAppear2FPQ24Game9EnemyBase
	.4byte cleanup__Q34Game9SnakeCrow12StateAppear2FPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game9SnakeCrow12StateAppear2
.obj __vt__Q34Game9SnakeCrow12StateAppear1, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game9SnakeCrow12StateAppear1FPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game9SnakeCrow12StateAppear1FPQ24Game9EnemyBase
	.4byte cleanup__Q34Game9SnakeCrow12StateAppear1FPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game9SnakeCrow12StateAppear1
.obj __vt__Q34Game9SnakeCrow9StateStay, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game9SnakeCrow9StateStayFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game9SnakeCrow9StateStayFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game9SnakeCrow9StateStayFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game9SnakeCrow9StateStay
.obj __vt__Q34Game9SnakeCrow9StateDead, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game9SnakeCrow9StateDeadFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game9SnakeCrow9StateDeadFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game9SnakeCrow9StateDeadFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game9SnakeCrow9StateDead
.obj __vt__Q34Game9SnakeCrow5State, weak
	.4byte 0
	.4byte 0
	.4byte init__Q24Game13EnemyFSMStateFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte cleanup__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game9SnakeCrow5State
.obj __vt__Q34Game9SnakeCrow3FSM, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game9SnakeCrow3FSMFPQ24Game9EnemyBase
	.4byte start__Q24Game17EnemyStateMachineFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte exec__Q24Game17EnemyStateMachineFPQ24Game9EnemyBase
	.4byte transit__Q24Game17EnemyStateMachineFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game17EnemyStateMachineFPQ24Game9EnemyBaseR8Graphics
	.4byte getCurrState__Q24Game17EnemyStateMachineFPQ24Game9EnemyBase
	.4byte setCurrState__Q24Game17EnemyStateMachineFPQ24Game9EnemyBasePQ24Game13EnemyFSMState
.endobj __vt__Q34Game9SnakeCrow3FSM

.section .sbss # 0x80514D80 - 0x80516360
.balign 8
.obj gu32NAN___Q24Game5P2JST, local
	.skip 0x4
.endobj gu32NAN___Q24Game5P2JST
.obj gfNAN___Q24Game5P2JST, local
	.skip 0x4
.endobj gfNAN___Q24Game5P2JST

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
.obj lbl_8051B9F8, local
	.asciz "dead"
.endobj lbl_8051B9F8
.balign 4
.obj lbl_8051BA00, local
	.asciz "stay"
.endobj lbl_8051BA00
.balign 4
.obj lbl_8051BA08, local
	.asciz "appear1"
.endobj lbl_8051BA08
.balign 4
.obj lbl_8051BA10, local
	.asciz "appear2"
.endobj lbl_8051BA10
.balign 4
.obj lbl_8051BA18, local
	.asciz "wait"
.endobj lbl_8051BA18
.balign 4
.obj lbl_8051BA20, local
	.asciz "attack"
.endobj lbl_8051BA20
.balign 4
.obj lbl_8051BA28, local
	.asciz "eat"
.endobj lbl_8051BA28
.balign 4
.obj lbl_8051BA2C, local
	.float 0.0
.endobj lbl_8051BA2C
.obj lbl_8051BA30, local
	.float 0.65
.endobj lbl_8051BA30
.obj lbl_8051BA34, local
	.float 0.5
.endobj lbl_8051BA34
.obj lbl_8051BA38, local
	.float 160000.0
.endobj lbl_8051BA38
.obj lbl_8051BA3C, local
	.float 1.0
.endobj lbl_8051BA3C
.obj lbl_8051BA40, local
	.float 32768.0
.endobj lbl_8051BA40
.balign 8
.obj lbl_8051BA48, local
	.8byte 0x4330000080000000
.endobj lbl_8051BA48
.obj lbl_8051BA50, local
	.float -1000.0
.endobj lbl_8051BA50
.obj lbl_8051BA54, local
	.float 10.0
.endobj lbl_8051BA54
.obj lbl_8051BA58, local # pi
	.float 3.1415927
.endobj lbl_8051BA58
.obj lbl_8051BA5C, local
	.float 0.0055555557
.endobj lbl_8051BA5C
.obj lbl_8051BA60, local
	.float 0.43633235
.endobj lbl_8051BA60
.obj lbl_8051BA64, local
	.float 1.5
.endobj lbl_8051BA64

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.fn init__Q34Game9SnakeCrow3FSMFPQ24Game9EnemyBase, global
/* 80290724 0028D664  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80290728 0028D668  7C 08 02 A6 */	mflr r0
/* 8029072C 0028D66C  38 80 00 09 */	li r4, 9
/* 80290730 0028D670  90 01 00 14 */	stw r0, 0x14(r1)
/* 80290734 0028D674  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80290738 0028D678  7C 7F 1B 78 */	mr r31, r3
/* 8029073C 0028D67C  4B EA 01 29 */	bl create__Q24Game17EnemyStateMachineFi
/* 80290740 0028D680  38 60 00 10 */	li r3, 0x10
/* 80290744 0028D684  4B D9 37 61 */	bl __nw__FUl
/* 80290748 0028D688  7C 64 1B 79 */	or. r4, r3, r3
/* 8029074C 0028D68C  41 82 00 3C */	beq .L_80290788
/* 80290750 0028D690  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 80290754 0028D694  3C A0 80 4D */	lis r5, __vt__Q34Game9SnakeCrow5State@ha
/* 80290758 0028D698  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 8029075C 0028D69C  3C 60 80 4D */	lis r3, __vt__Q34Game9SnakeCrow9StateDead@ha
/* 80290760 0028D6A0  90 04 00 00 */	stw r0, 0(r4)
/* 80290764 0028D6A4  38 E0 00 00 */	li r7, 0
/* 80290768 0028D6A8  38 C5 B4 0C */	addi r6, r5, __vt__Q34Game9SnakeCrow5State@l
/* 8029076C 0028D6AC  38 A2 D6 98 */	addi r5, r2, lbl_8051B9F8@sda21
/* 80290770 0028D6B0  90 E4 00 04 */	stw r7, 4(r4)
/* 80290774 0028D6B4  38 03 B3 E8 */	addi r0, r3, __vt__Q34Game9SnakeCrow9StateDead@l
/* 80290778 0028D6B8  90 E4 00 08 */	stw r7, 8(r4)
/* 8029077C 0028D6BC  90 C4 00 00 */	stw r6, 0(r4)
/* 80290780 0028D6C0  90 A4 00 0C */	stw r5, 0xc(r4)
/* 80290784 0028D6C4  90 04 00 00 */	stw r0, 0(r4)
.L_80290788:
/* 80290788 0028D6C8  7F E3 FB 78 */	mr r3, r31
/* 8029078C 0028D6CC  4B EA 01 7D */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 80290790 0028D6D0  38 60 00 10 */	li r3, 0x10
/* 80290794 0028D6D4  4B D9 37 11 */	bl __nw__FUl
/* 80290798 0028D6D8  7C 64 1B 79 */	or. r4, r3, r3
/* 8029079C 0028D6DC  41 82 00 40 */	beq .L_802907DC
/* 802907A0 0028D6E0  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 802907A4 0028D6E4  3C A0 80 4D */	lis r5, __vt__Q34Game9SnakeCrow5State@ha
/* 802907A8 0028D6E8  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 802907AC 0028D6EC  3C 60 80 4D */	lis r3, __vt__Q34Game9SnakeCrow9StateStay@ha
/* 802907B0 0028D6F0  90 04 00 00 */	stw r0, 0(r4)
/* 802907B4 0028D6F4  38 00 00 01 */	li r0, 1
/* 802907B8 0028D6F8  38 E0 00 00 */	li r7, 0
/* 802907BC 0028D6FC  38 C5 B4 0C */	addi r6, r5, __vt__Q34Game9SnakeCrow5State@l
/* 802907C0 0028D700  90 04 00 04 */	stw r0, 4(r4)
/* 802907C4 0028D704  38 A2 D6 A0 */	addi r5, r2, lbl_8051BA00@sda21
/* 802907C8 0028D708  38 03 B3 C4 */	addi r0, r3, __vt__Q34Game9SnakeCrow9StateStay@l
/* 802907CC 0028D70C  90 E4 00 08 */	stw r7, 8(r4)
/* 802907D0 0028D710  90 C4 00 00 */	stw r6, 0(r4)
/* 802907D4 0028D714  90 A4 00 0C */	stw r5, 0xc(r4)
/* 802907D8 0028D718  90 04 00 00 */	stw r0, 0(r4)
.L_802907DC:
/* 802907DC 0028D71C  7F E3 FB 78 */	mr r3, r31
/* 802907E0 0028D720  4B EA 01 29 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 802907E4 0028D724  38 60 00 10 */	li r3, 0x10
/* 802907E8 0028D728  4B D9 36 BD */	bl __nw__FUl
/* 802907EC 0028D72C  7C 64 1B 79 */	or. r4, r3, r3
/* 802907F0 0028D730  41 82 00 40 */	beq .L_80290830
/* 802907F4 0028D734  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 802907F8 0028D738  3C A0 80 4D */	lis r5, __vt__Q34Game9SnakeCrow5State@ha
/* 802907FC 0028D73C  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 80290800 0028D740  3C 60 80 4D */	lis r3, __vt__Q34Game9SnakeCrow12StateAppear1@ha
/* 80290804 0028D744  90 04 00 00 */	stw r0, 0(r4)
/* 80290808 0028D748  38 00 00 02 */	li r0, 2
/* 8029080C 0028D74C  38 E0 00 00 */	li r7, 0
/* 80290810 0028D750  38 C5 B4 0C */	addi r6, r5, __vt__Q34Game9SnakeCrow5State@l
/* 80290814 0028D754  90 04 00 04 */	stw r0, 4(r4)
/* 80290818 0028D758  38 A2 D6 A8 */	addi r5, r2, lbl_8051BA08@sda21
/* 8029081C 0028D75C  38 03 B3 A0 */	addi r0, r3, __vt__Q34Game9SnakeCrow12StateAppear1@l
/* 80290820 0028D760  90 E4 00 08 */	stw r7, 8(r4)
/* 80290824 0028D764  90 C4 00 00 */	stw r6, 0(r4)
/* 80290828 0028D768  90 A4 00 0C */	stw r5, 0xc(r4)
/* 8029082C 0028D76C  90 04 00 00 */	stw r0, 0(r4)
.L_80290830:
/* 80290830 0028D770  7F E3 FB 78 */	mr r3, r31
/* 80290834 0028D774  4B EA 00 D5 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 80290838 0028D778  38 60 00 10 */	li r3, 0x10
/* 8029083C 0028D77C  4B D9 36 69 */	bl __nw__FUl
/* 80290840 0028D780  7C 64 1B 79 */	or. r4, r3, r3
/* 80290844 0028D784  41 82 00 40 */	beq .L_80290884
/* 80290848 0028D788  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 8029084C 0028D78C  3C A0 80 4D */	lis r5, __vt__Q34Game9SnakeCrow5State@ha
/* 80290850 0028D790  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 80290854 0028D794  3C 60 80 4D */	lis r3, __vt__Q34Game9SnakeCrow12StateAppear2@ha
/* 80290858 0028D798  90 04 00 00 */	stw r0, 0(r4)
/* 8029085C 0028D79C  38 00 00 03 */	li r0, 3
/* 80290860 0028D7A0  38 E0 00 00 */	li r7, 0
/* 80290864 0028D7A4  38 C5 B4 0C */	addi r6, r5, __vt__Q34Game9SnakeCrow5State@l
/* 80290868 0028D7A8  90 04 00 04 */	stw r0, 4(r4)
/* 8029086C 0028D7AC  38 A2 D6 B0 */	addi r5, r2, lbl_8051BA10@sda21
/* 80290870 0028D7B0  38 03 B3 7C */	addi r0, r3, __vt__Q34Game9SnakeCrow12StateAppear2@l
/* 80290874 0028D7B4  90 E4 00 08 */	stw r7, 8(r4)
/* 80290878 0028D7B8  90 C4 00 00 */	stw r6, 0(r4)
/* 8029087C 0028D7BC  90 A4 00 0C */	stw r5, 0xc(r4)
/* 80290880 0028D7C0  90 04 00 00 */	stw r0, 0(r4)
.L_80290884:
/* 80290884 0028D7C4  7F E3 FB 78 */	mr r3, r31
/* 80290888 0028D7C8  4B EA 00 81 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 8029088C 0028D7CC  38 60 00 10 */	li r3, 0x10
/* 80290890 0028D7D0  4B D9 36 15 */	bl __nw__FUl
/* 80290894 0028D7D4  7C 64 1B 79 */	or. r4, r3, r3
/* 80290898 0028D7D8  41 82 00 44 */	beq .L_802908DC
/* 8029089C 0028D7DC  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 802908A0 0028D7E0  3C C0 80 4D */	lis r6, __vt__Q34Game9SnakeCrow5State@ha
/* 802908A4 0028D7E4  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 802908A8 0028D7E8  3C A0 80 49 */	lis r5, lbl_804883D8@ha
/* 802908AC 0028D7EC  90 04 00 00 */	stw r0, 0(r4)
/* 802908B0 0028D7F0  38 00 00 04 */	li r0, 4
/* 802908B4 0028D7F4  3C 60 80 4D */	lis r3, __vt__Q34Game9SnakeCrow14StateDisappear@ha
/* 802908B8 0028D7F8  38 E0 00 00 */	li r7, 0
/* 802908BC 0028D7FC  90 04 00 04 */	stw r0, 4(r4)
/* 802908C0 0028D800  38 C6 B4 0C */	addi r6, r6, __vt__Q34Game9SnakeCrow5State@l
/* 802908C4 0028D804  38 A5 83 D8 */	addi r5, r5, lbl_804883D8@l
/* 802908C8 0028D808  38 03 B3 58 */	addi r0, r3, __vt__Q34Game9SnakeCrow14StateDisappear@l
/* 802908CC 0028D80C  90 E4 00 08 */	stw r7, 8(r4)
/* 802908D0 0028D810  90 C4 00 00 */	stw r6, 0(r4)
/* 802908D4 0028D814  90 A4 00 0C */	stw r5, 0xc(r4)
/* 802908D8 0028D818  90 04 00 00 */	stw r0, 0(r4)
.L_802908DC:
/* 802908DC 0028D81C  7F E3 FB 78 */	mr r3, r31
/* 802908E0 0028D820  4B EA 00 29 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 802908E4 0028D824  38 60 00 10 */	li r3, 0x10
/* 802908E8 0028D828  4B D9 35 BD */	bl __nw__FUl
/* 802908EC 0028D82C  7C 64 1B 79 */	or. r4, r3, r3
/* 802908F0 0028D830  41 82 00 40 */	beq .L_80290930
/* 802908F4 0028D834  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 802908F8 0028D838  3C A0 80 4D */	lis r5, __vt__Q34Game9SnakeCrow5State@ha
/* 802908FC 0028D83C  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 80290900 0028D840  3C 60 80 4D */	lis r3, __vt__Q34Game9SnakeCrow9StateWait@ha
/* 80290904 0028D844  90 04 00 00 */	stw r0, 0(r4)
/* 80290908 0028D848  38 00 00 05 */	li r0, 5
/* 8029090C 0028D84C  38 E0 00 00 */	li r7, 0
/* 80290910 0028D850  38 C5 B4 0C */	addi r6, r5, __vt__Q34Game9SnakeCrow5State@l
/* 80290914 0028D854  90 04 00 04 */	stw r0, 4(r4)
/* 80290918 0028D858  38 A2 D6 B8 */	addi r5, r2, lbl_8051BA18@sda21
/* 8029091C 0028D85C  38 03 B3 20 */	addi r0, r3, __vt__Q34Game9SnakeCrow9StateWait@l
/* 80290920 0028D860  90 E4 00 08 */	stw r7, 8(r4)
/* 80290924 0028D864  90 C4 00 00 */	stw r6, 0(r4)
/* 80290928 0028D868  90 A4 00 0C */	stw r5, 0xc(r4)
/* 8029092C 0028D86C  90 04 00 00 */	stw r0, 0(r4)
.L_80290930:
/* 80290930 0028D870  7F E3 FB 78 */	mr r3, r31
/* 80290934 0028D874  4B E9 FF D5 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 80290938 0028D878  38 60 00 10 */	li r3, 0x10
/* 8029093C 0028D87C  4B D9 35 69 */	bl __nw__FUl
/* 80290940 0028D880  7C 64 1B 79 */	or. r4, r3, r3
/* 80290944 0028D884  41 82 00 40 */	beq .L_80290984
/* 80290948 0028D888  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 8029094C 0028D88C  3C A0 80 4D */	lis r5, __vt__Q34Game9SnakeCrow5State@ha
/* 80290950 0028D890  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 80290954 0028D894  3C 60 80 4D */	lis r3, __vt__Q34Game9SnakeCrow11StateAttack@ha
/* 80290958 0028D898  90 04 00 00 */	stw r0, 0(r4)
/* 8029095C 0028D89C  38 00 00 06 */	li r0, 6
/* 80290960 0028D8A0  38 E0 00 00 */	li r7, 0
/* 80290964 0028D8A4  38 C5 B4 0C */	addi r6, r5, __vt__Q34Game9SnakeCrow5State@l
/* 80290968 0028D8A8  90 04 00 04 */	stw r0, 4(r4)
/* 8029096C 0028D8AC  38 A2 D6 C0 */	addi r5, r2, lbl_8051BA20@sda21
/* 80290970 0028D8B0  38 03 B2 FC */	addi r0, r3, __vt__Q34Game9SnakeCrow11StateAttack@l
/* 80290974 0028D8B4  90 E4 00 08 */	stw r7, 8(r4)
/* 80290978 0028D8B8  90 C4 00 00 */	stw r6, 0(r4)
/* 8029097C 0028D8BC  90 A4 00 0C */	stw r5, 0xc(r4)
/* 80290980 0028D8C0  90 04 00 00 */	stw r0, 0(r4)
.L_80290984:
/* 80290984 0028D8C4  7F E3 FB 78 */	mr r3, r31
/* 80290988 0028D8C8  4B E9 FF 81 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 8029098C 0028D8CC  38 60 00 10 */	li r3, 0x10
/* 80290990 0028D8D0  4B D9 35 15 */	bl __nw__FUl
/* 80290994 0028D8D4  7C 64 1B 79 */	or. r4, r3, r3
/* 80290998 0028D8D8  41 82 00 40 */	beq .L_802909D8
/* 8029099C 0028D8DC  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 802909A0 0028D8E0  3C A0 80 4D */	lis r5, __vt__Q34Game9SnakeCrow5State@ha
/* 802909A4 0028D8E4  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 802909A8 0028D8E8  3C 60 80 4D */	lis r3, __vt__Q34Game9SnakeCrow8StateEat@ha
/* 802909AC 0028D8EC  90 04 00 00 */	stw r0, 0(r4)
/* 802909B0 0028D8F0  38 00 00 07 */	li r0, 7
/* 802909B4 0028D8F4  38 E0 00 00 */	li r7, 0
/* 802909B8 0028D8F8  38 C5 B4 0C */	addi r6, r5, __vt__Q34Game9SnakeCrow5State@l
/* 802909BC 0028D8FC  90 04 00 04 */	stw r0, 4(r4)
/* 802909C0 0028D900  38 A2 D6 C8 */	addi r5, r2, lbl_8051BA28@sda21
/* 802909C4 0028D904  38 03 B2 D8 */	addi r0, r3, __vt__Q34Game9SnakeCrow8StateEat@l
/* 802909C8 0028D908  90 E4 00 08 */	stw r7, 8(r4)
/* 802909CC 0028D90C  90 C4 00 00 */	stw r6, 0(r4)
/* 802909D0 0028D910  90 A4 00 0C */	stw r5, 0xc(r4)
/* 802909D4 0028D914  90 04 00 00 */	stw r0, 0(r4)
.L_802909D8:
/* 802909D8 0028D918  7F E3 FB 78 */	mr r3, r31
/* 802909DC 0028D91C  4B E9 FF 2D */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 802909E0 0028D920  38 60 00 10 */	li r3, 0x10
/* 802909E4 0028D924  4B D9 34 C1 */	bl __nw__FUl
/* 802909E8 0028D928  7C 64 1B 79 */	or. r4, r3, r3
/* 802909EC 0028D92C  41 82 00 44 */	beq .L_80290A30
/* 802909F0 0028D930  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 802909F4 0028D934  3C C0 80 4D */	lis r6, __vt__Q34Game9SnakeCrow5State@ha
/* 802909F8 0028D938  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 802909FC 0028D93C  3C A0 80 49 */	lis r5, lbl_804883E4@ha
/* 80290A00 0028D940  90 04 00 00 */	stw r0, 0(r4)
/* 80290A04 0028D944  38 00 00 08 */	li r0, 8
/* 80290A08 0028D948  3C 60 80 4D */	lis r3, __vt__Q34Game9SnakeCrow13StateStruggle@ha
/* 80290A0C 0028D94C  38 E0 00 00 */	li r7, 0
/* 80290A10 0028D950  90 04 00 04 */	stw r0, 4(r4)
/* 80290A14 0028D954  38 C6 B4 0C */	addi r6, r6, __vt__Q34Game9SnakeCrow5State@l
/* 80290A18 0028D958  38 A5 83 E4 */	addi r5, r5, lbl_804883E4@l
/* 80290A1C 0028D95C  38 03 B2 B4 */	addi r0, r3, __vt__Q34Game9SnakeCrow13StateStruggle@l
/* 80290A20 0028D960  90 E4 00 08 */	stw r7, 8(r4)
/* 80290A24 0028D964  90 C4 00 00 */	stw r6, 0(r4)
/* 80290A28 0028D968  90 A4 00 0C */	stw r5, 0xc(r4)
/* 80290A2C 0028D96C  90 04 00 00 */	stw r0, 0(r4)
.L_80290A30:
/* 80290A30 0028D970  7F E3 FB 78 */	mr r3, r31
/* 80290A34 0028D974  4B E9 FE D5 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 80290A38 0028D978  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80290A3C 0028D97C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80290A40 0028D980  7C 08 03 A6 */	mtlr r0
/* 80290A44 0028D984  38 21 00 10 */	addi r1, r1, 0x10
/* 80290A48 0028D988  4E 80 00 20 */	blr 
.endfn init__Q34Game9SnakeCrow3FSMFPQ24Game9EnemyBase

.fn init__Q34Game9SnakeCrow9StateDeadFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 80290A4C 0028D98C  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80290A50 0028D990  7C 08 02 A6 */	mflr r0
/* 80290A54 0028D994  90 01 00 34 */	stw r0, 0x34(r1)
/* 80290A58 0028D998  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 80290A5C 0028D99C  7C 9F 23 78 */	mr r31, r4
/* 80290A60 0028D9A0  7F E3 FB 78 */	mr r3, r31
/* 80290A64 0028D9A4  4B E7 4C BD */	bl deathProcedure__Q24Game9EnemyBaseFv
/* 80290A68 0028D9A8  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 80290A6C 0028D9AC  7F E3 FB 78 */	mr r3, r31
/* 80290A70 0028D9B0  C0 02 D6 CC */	lfs f0, lbl_8051BA2C@sda21(r2)
/* 80290A74 0028D9B4  54 00 06 B0 */	rlwinm r0, r0, 0, 0x1a, 0x18
/* 80290A78 0028D9B8  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 80290A7C 0028D9BC  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 80290A80 0028D9C0  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 80290A84 0028D9C4  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 80290A88 0028D9C8  4B E7 0E F5 */	bl setEmotionCaution__Q24Game9EnemyBaseFv
/* 80290A8C 0028D9CC  7F E3 FB 78 */	mr r3, r31
/* 80290A90 0028D9D0  38 80 00 00 */	li r4, 0
/* 80290A94 0028D9D4  38 A0 00 00 */	li r5, 0
/* 80290A98 0028D9D8  4B E7 45 6D */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 80290A9C 0028D9DC  7F E3 FB 78 */	mr r3, r31
/* 80290AA0 0028D9E0  48 00 4E F1 */	bl createDeadStartEffect__Q34Game9SnakeCrow3ObjFv
/* 80290AA4 0028D9E4  7F E4 FB 78 */	mr r4, r31
/* 80290AA8 0028D9E8  38 61 00 08 */	addi r3, r1, 8
/* 80290AAC 0028D9EC  81 9F 00 00 */	lwz r12, 0(r31)
/* 80290AB0 0028D9F0  81 8C 00 08 */	lwz r12, 8(r12)
/* 80290AB4 0028D9F4  7D 89 03 A6 */	mtctr r12
/* 80290AB8 0028D9F8  4E 80 04 21 */	bctrl 
/* 80290ABC 0028D9FC  C0 41 00 08 */	lfs f2, 8(r1)
/* 80290AC0 0028DA00  38 A1 00 14 */	addi r5, r1, 0x14
/* 80290AC4 0028DA04  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 80290AC8 0028DA08  38 80 00 00 */	li r4, 0
/* 80290ACC 0028DA0C  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 80290AD0 0028DA10  38 C0 00 02 */	li r6, 2
/* 80290AD4 0028DA14  D0 41 00 14 */	stfs f2, 0x14(r1)
/* 80290AD8 0028DA18  80 6D 96 A0 */	lwz r3, cameraMgr__4Game@sda21(r13)
/* 80290ADC 0028DA1C  D0 21 00 18 */	stfs f1, 0x18(r1)
/* 80290AE0 0028DA20  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 80290AE4 0028DA24  4B FC 17 59 */	bl "startVibration__Q24Game9CameraMgrFiR10Vector3<f>i"
/* 80290AE8 0028DA28  80 6D 96 A8 */	lwz r3, rumbleMgr__4Game@sda21(r13)
/* 80290AEC 0028DA2C  38 A1 00 14 */	addi r5, r1, 0x14
/* 80290AF0 0028DA30  38 80 00 0D */	li r4, 0xd
/* 80290AF4 0028DA34  38 C0 00 02 */	li r6, 2
/* 80290AF8 0028DA38  4B FC 2C 89 */	bl "startRumble__Q24Game9RumbleMgrFiR10Vector3<f>i"
/* 80290AFC 0028DA3C  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80290B00 0028DA40  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 80290B04 0028DA44  7C 08 03 A6 */	mtlr r0
/* 80290B08 0028DA48  38 21 00 30 */	addi r1, r1, 0x30
/* 80290B0C 0028DA4C  4E 80 00 20 */	blr 
.endfn init__Q34Game9SnakeCrow9StateDeadFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game9SnakeCrow9StateDeadFPQ24Game9EnemyBase, global
/* 80290B10 0028DA50  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 80290B14 0028DA54  7C 08 02 A6 */	mflr r0
/* 80290B18 0028DA58  90 01 00 44 */	stw r0, 0x44(r1)
/* 80290B1C 0028DA5C  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 80290B20 0028DA60  7C 9F 23 78 */	mr r31, r4
/* 80290B24 0028DA64  80 64 01 88 */	lwz r3, 0x188(r4)
/* 80290B28 0028DA68  88 03 00 24 */	lbz r0, 0x24(r3)
/* 80290B2C 0028DA6C  28 00 00 00 */	cmplwi r0, 0
/* 80290B30 0028DA70  41 82 01 3C */	beq .L_80290C6C
/* 80290B34 0028DA74  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 80290B38 0028DA78  28 00 00 02 */	cmplwi r0, 2
/* 80290B3C 0028DA7C  40 82 00 14 */	bne .L_80290B50
/* 80290B40 0028DA80  C0 22 D6 D0 */	lfs f1, lbl_8051BA30@sda21(r2)
/* 80290B44 0028DA84  7F E3 FB 78 */	mr r3, r31
/* 80290B48 0028DA88  48 00 4F 11 */	bl createDownHeadEffect__Q34Game9SnakeCrow3ObjFf
/* 80290B4C 0028DA8C  48 00 01 20 */	b .L_80290C6C
.L_80290B50:
/* 80290B50 0028DA90  28 00 00 03 */	cmplwi r0, 3
/* 80290B54 0028DA94  40 82 00 8C */	bne .L_80290BE0
/* 80290B58 0028DA98  7F E3 FB 78 */	mr r3, r31
/* 80290B5C 0028DA9C  48 00 45 25 */	bl deleteJointShadow__Q34Game9SnakeCrow3ObjFv
/* 80290B60 0028DAA0  7F E3 FB 78 */	mr r3, r31
/* 80290B64 0028DAA4  48 00 4E 61 */	bl createDeadFinishEffect__Q34Game9SnakeCrow3ObjFv
/* 80290B68 0028DAA8  7F E3 FB 78 */	mr r3, r31
/* 80290B6C 0028DAAC  48 00 4D F5 */	bl finishWaitEffect__Q34Game9SnakeCrow3ObjFv
/* 80290B70 0028DAB0  7F E3 FB 78 */	mr r3, r31
/* 80290B74 0028DAB4  81 9F 00 00 */	lwz r12, 0(r31)
/* 80290B78 0028DAB8  81 8C 02 64 */	lwz r12, 0x264(r12)
/* 80290B7C 0028DABC  7D 89 03 A6 */	mtctr r12
/* 80290B80 0028DAC0  4E 80 04 21 */	bctrl 
/* 80290B84 0028DAC4  7F E4 FB 78 */	mr r4, r31
/* 80290B88 0028DAC8  38 61 00 14 */	addi r3, r1, 0x14
/* 80290B8C 0028DACC  81 9F 00 00 */	lwz r12, 0(r31)
/* 80290B90 0028DAD0  81 8C 00 08 */	lwz r12, 8(r12)
/* 80290B94 0028DAD4  7D 89 03 A6 */	mtctr r12
/* 80290B98 0028DAD8  4E 80 04 21 */	bctrl 
/* 80290B9C 0028DADC  C0 41 00 14 */	lfs f2, 0x14(r1)
/* 80290BA0 0028DAE0  38 A1 00 2C */	addi r5, r1, 0x2c
/* 80290BA4 0028DAE4  C0 21 00 18 */	lfs f1, 0x18(r1)
/* 80290BA8 0028DAE8  38 80 00 00 */	li r4, 0
/* 80290BAC 0028DAEC  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 80290BB0 0028DAF0  38 C0 00 02 */	li r6, 2
/* 80290BB4 0028DAF4  D0 41 00 2C */	stfs f2, 0x2c(r1)
/* 80290BB8 0028DAF8  80 6D 96 A0 */	lwz r3, cameraMgr__4Game@sda21(r13)
/* 80290BBC 0028DAFC  D0 21 00 30 */	stfs f1, 0x30(r1)
/* 80290BC0 0028DB00  D0 01 00 34 */	stfs f0, 0x34(r1)
/* 80290BC4 0028DB04  4B FC 16 79 */	bl "startVibration__Q24Game9CameraMgrFiR10Vector3<f>i"
/* 80290BC8 0028DB08  80 6D 96 A8 */	lwz r3, rumbleMgr__4Game@sda21(r13)
/* 80290BCC 0028DB0C  38 A1 00 2C */	addi r5, r1, 0x2c
/* 80290BD0 0028DB10  38 80 00 0B */	li r4, 0xb
/* 80290BD4 0028DB14  38 C0 00 02 */	li r6, 2
/* 80290BD8 0028DB18  4B FC 2B A9 */	bl "startRumble__Q24Game9RumbleMgrFiR10Vector3<f>i"
/* 80290BDC 0028DB1C  48 00 00 90 */	b .L_80290C6C
.L_80290BE0:
/* 80290BE0 0028DB20  28 00 00 04 */	cmplwi r0, 4
/* 80290BE4 0028DB24  40 82 00 14 */	bne .L_80290BF8
/* 80290BE8 0028DB28  C0 22 D6 D4 */	lfs f1, lbl_8051BA34@sda21(r2)
/* 80290BEC 0028DB2C  7F E3 FB 78 */	mr r3, r31
/* 80290BF0 0028DB30  48 00 4E 69 */	bl createDownHeadEffect__Q34Game9SnakeCrow3ObjFf
/* 80290BF4 0028DB34  48 00 00 78 */	b .L_80290C6C
.L_80290BF8:
/* 80290BF8 0028DB38  28 00 00 05 */	cmplwi r0, 5
/* 80290BFC 0028DB3C  40 82 00 5C */	bne .L_80290C58
/* 80290C00 0028DB40  81 84 00 00 */	lwz r12, 0(r4)
/* 80290C04 0028DB44  38 61 00 08 */	addi r3, r1, 8
/* 80290C08 0028DB48  81 8C 00 08 */	lwz r12, 8(r12)
/* 80290C0C 0028DB4C  7D 89 03 A6 */	mtctr r12
/* 80290C10 0028DB50  4E 80 04 21 */	bctrl 
/* 80290C14 0028DB54  C0 41 00 08 */	lfs f2, 8(r1)
/* 80290C18 0028DB58  38 A1 00 20 */	addi r5, r1, 0x20
/* 80290C1C 0028DB5C  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 80290C20 0028DB60  38 80 00 08 */	li r4, 8
/* 80290C24 0028DB64  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 80290C28 0028DB68  38 C0 00 02 */	li r6, 2
/* 80290C2C 0028DB6C  D0 41 00 20 */	stfs f2, 0x20(r1)
/* 80290C30 0028DB70  80 6D 96 A0 */	lwz r3, cameraMgr__4Game@sda21(r13)
/* 80290C34 0028DB74  D0 21 00 24 */	stfs f1, 0x24(r1)
/* 80290C38 0028DB78  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 80290C3C 0028DB7C  4B FC 16 01 */	bl "startVibration__Q24Game9CameraMgrFiR10Vector3<f>i"
/* 80290C40 0028DB80  80 6D 96 A8 */	lwz r3, rumbleMgr__4Game@sda21(r13)
/* 80290C44 0028DB84  38 A1 00 20 */	addi r5, r1, 0x20
/* 80290C48 0028DB88  38 80 00 0D */	li r4, 0xd
/* 80290C4C 0028DB8C  38 C0 00 02 */	li r6, 2
/* 80290C50 0028DB90  4B FC 2B 31 */	bl "startRumble__Q24Game9RumbleMgrFiR10Vector3<f>i"
/* 80290C54 0028DB94  48 00 00 18 */	b .L_80290C6C
.L_80290C58:
/* 80290C58 0028DB98  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 80290C5C 0028DB9C  40 82 00 10 */	bne .L_80290C6C
/* 80290C60 0028DBA0  7F E3 FB 78 */	mr r3, r31
/* 80290C64 0028DBA4  38 80 00 00 */	li r4, 0
/* 80290C68 0028DBA8  4B EA A4 89 */	bl kill__Q24Game8CreatureFPQ24Game15CreatureKillArg
.L_80290C6C:
/* 80290C6C 0028DBAC  80 01 00 44 */	lwz r0, 0x44(r1)
/* 80290C70 0028DBB0  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 80290C74 0028DBB4  7C 08 03 A6 */	mtlr r0
/* 80290C78 0028DBB8  38 21 00 40 */	addi r1, r1, 0x40
/* 80290C7C 0028DBBC  4E 80 00 20 */	blr 
.endfn exec__Q34Game9SnakeCrow9StateDeadFPQ24Game9EnemyBase

.fn cleanup__Q34Game9SnakeCrow9StateDeadFPQ24Game9EnemyBase, global
/* 80290C80 0028DBC0  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game9SnakeCrow9StateDeadFPQ24Game9EnemyBase

.fn init__Q34Game9SnakeCrow9StateStayFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 80290C84 0028DBC4  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80290C88 0028DBC8  7C 08 02 A6 */	mflr r0
/* 80290C8C 0028DBCC  C0 02 D6 CC */	lfs f0, lbl_8051BA2C@sda21(r2)
/* 80290C90 0028DBD0  90 01 00 34 */	stw r0, 0x34(r1)
/* 80290C94 0028DBD4  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 80290C98 0028DBD8  7C 9F 23 78 */	mr r31, r4
/* 80290C9C 0028DBDC  7F E3 FB 78 */	mr r3, r31
/* 80290CA0 0028DBE0  D0 04 02 C4 */	stfs f0, 0x2c4(r4)
/* 80290CA4 0028DBE4  48 00 43 B9 */	bl finishJointShadow__Q34Game9SnakeCrow3ObjFv
/* 80290CA8 0028DBE8  7F E4 FB 78 */	mr r4, r31
/* 80290CAC 0028DBEC  38 61 00 08 */	addi r3, r1, 8
/* 80290CB0 0028DBF0  81 9F 00 00 */	lwz r12, 0(r31)
/* 80290CB4 0028DBF4  81 8C 00 08 */	lwz r12, 8(r12)
/* 80290CB8 0028DBF8  7D 89 03 A6 */	mtctr r12
/* 80290CBC 0028DBFC  4E 80 04 21 */	bctrl 
/* 80290CC0 0028DC00  C0 41 00 08 */	lfs f2, 8(r1)
/* 80290CC4 0028DC04  7F E3 FB 78 */	mr r3, r31
/* 80290CC8 0028DC08  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 80290CCC 0028DC0C  38 81 00 14 */	addi r4, r1, 0x14
/* 80290CD0 0028DC10  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 80290CD4 0028DC14  D0 41 00 14 */	stfs f2, 0x14(r1)
/* 80290CD8 0028DC18  D0 21 00 18 */	stfs f1, 0x18(r1)
/* 80290CDC 0028DC1C  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 80290CE0 0028DC20  81 9F 00 00 */	lwz r12, 0(r31)
/* 80290CE4 0028DC24  81 8C 00 70 */	lwz r12, 0x70(r12)
/* 80290CE8 0028DC28  7D 89 03 A6 */	mtctr r12
/* 80290CEC 0028DC2C  4E 80 04 21 */	bctrl 
/* 80290CF0 0028DC30  7F E3 FB 78 */	mr r3, r31
/* 80290CF4 0028DC34  38 80 00 00 */	li r4, 0
/* 80290CF8 0028DC38  81 9F 00 00 */	lwz r12, 0(r31)
/* 80290CFC 0028DC3C  81 8C 00 A4 */	lwz r12, 0xa4(r12)
/* 80290D00 0028DC40  7D 89 03 A6 */	mtctr r12
/* 80290D04 0028DC44  4E 80 04 21 */	bctrl 
/* 80290D08 0028DC48  80 9F 01 E0 */	lwz r4, 0x1e0(r31)
/* 80290D0C 0028DC4C  38 00 00 01 */	li r0, 1
/* 80290D10 0028DC50  C0 02 D6 CC */	lfs f0, lbl_8051BA2C@sda21(r2)
/* 80290D14 0028DC54  7F E3 FB 78 */	mr r3, r31
/* 80290D18 0028DC58  60 85 00 01 */	ori r5, r4, 1
/* 80290D1C 0028DC5C  38 80 00 01 */	li r4, 1
/* 80290D20 0028DC60  90 BF 01 E0 */	stw r5, 0x1e0(r31)
/* 80290D24 0028DC64  38 A0 00 00 */	li r5, 0
/* 80290D28 0028DC68  98 1F 02 C0 */	stb r0, 0x2c0(r31)
/* 80290D2C 0028DC6C  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 80290D30 0028DC70  64 00 00 40 */	oris r0, r0, 0x40
/* 80290D34 0028DC74  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 80290D38 0028DC78  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 80290D3C 0028DC7C  54 00 04 5E */	rlwinm r0, r0, 0, 0x11, 0xf
/* 80290D40 0028DC80  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 80290D44 0028DC84  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 80290D48 0028DC88  64 00 40 00 */	oris r0, r0, 0x4000
/* 80290D4C 0028DC8C  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 80290D50 0028DC90  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 80290D54 0028DC94  54 00 05 66 */	rlwinm r0, r0, 0, 0x15, 0x13
/* 80290D58 0028DC98  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 80290D5C 0028DC9C  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 80290D60 0028DCA0  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 80290D64 0028DCA4  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 80290D68 0028DCA8  4B E7 42 9D */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 80290D6C 0028DCAC  7F E3 FB 78 */	mr r3, r31
/* 80290D70 0028DCB0  4B E7 65 71 */	bl stopMotion__Q24Game9EnemyBaseFv
/* 80290D74 0028DCB4  80 1F 02 80 */	lwz r0, 0x280(r31)
/* 80290D78 0028DCB8  28 00 00 00 */	cmplwi r0, 0
/* 80290D7C 0028DCBC  41 82 00 18 */	beq .L_80290D94
/* 80290D80 0028DCC0  7F E3 FB 78 */	mr r3, r31
/* 80290D84 0028DCC4  81 9F 00 00 */	lwz r12, 0(r31)
/* 80290D88 0028DCC8  81 8C 02 54 */	lwz r12, 0x254(r12)
/* 80290D8C 0028DCCC  7D 89 03 A6 */	mtctr r12
/* 80290D90 0028DCD0  4E 80 04 21 */	bctrl 
.L_80290D94:
/* 80290D94 0028DCD4  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80290D98 0028DCD8  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 80290D9C 0028DCDC  7C 08 03 A6 */	mtlr r0
/* 80290DA0 0028DCE0  38 21 00 30 */	addi r1, r1, 0x30
/* 80290DA4 0028DCE4  4E 80 00 20 */	blr 
.endfn init__Q34Game9SnakeCrow9StateStayFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game9SnakeCrow9StateStayFPQ24Game9EnemyBase, global
/* 80290DA8 0028DCE8  94 21 FF 60 */	stwu r1, -0xa0(r1)
/* 80290DAC 0028DCEC  7C 08 02 A6 */	mflr r0
/* 80290DB0 0028DCF0  90 01 00 A4 */	stw r0, 0xa4(r1)
/* 80290DB4 0028DCF4  DB E1 00 90 */	stfd f31, 0x90(r1)
/* 80290DB8 0028DCF8  F3 E1 00 98 */	psq_st f31, 152(r1), 0, qr0
/* 80290DBC 0028DCFC  DB C1 00 80 */	stfd f30, 0x80(r1)
/* 80290DC0 0028DD00  F3 C1 00 88 */	psq_st f30, 136(r1), 0, qr0
/* 80290DC4 0028DD04  DB A1 00 70 */	stfd f29, 0x70(r1)
/* 80290DC8 0028DD08  F3 A1 00 78 */	psq_st f29, 120(r1), 0, qr0
/* 80290DCC 0028DD0C  DB 81 00 60 */	stfd f28, 0x60(r1)
/* 80290DD0 0028DD10  F3 81 00 68 */	psq_st f28, 104(r1), 0, qr0
/* 80290DD4 0028DD14  BF 61 00 4C */	stmw r27, 0x4c(r1)
/* 80290DD8 0028DD18  7C 7C 1B 78 */	mr r28, r3
/* 80290DDC 0028DD1C  80 64 00 C0 */	lwz r3, 0xc0(r4)
/* 80290DE0 0028DD20  C0 24 02 C4 */	lfs f1, 0x2c4(r4)
/* 80290DE4 0028DD24  7C 9F 23 78 */	mr r31, r4
/* 80290DE8 0028DD28  C0 03 08 6C */	lfs f0, 0x86c(r3)
/* 80290DEC 0028DD2C  3B C0 00 00 */	li r30, 0
/* 80290DF0 0028DD30  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80290DF4 0028DD34  40 81 04 E0 */	ble .L_802912D4
/* 80290DF8 0028DD38  C0 03 03 5C */	lfs f0, 0x35c(r3)
/* 80290DFC 0028DD3C  3C 60 80 4B */	lis r3, "__vt__22Iterator<Q24Game4Piki>"@ha
/* 80290E00 0028DD40  38 00 00 00 */	li r0, 0
/* 80290E04 0028DD44  C3 FF 01 98 */	lfs f31, 0x198(r31)
/* 80290E08 0028DD48  C3 DF 01 9C */	lfs f30, 0x19c(r31)
/* 80290E0C 0028DD4C  28 00 00 00 */	cmplwi r0, 0
/* 80290E10 0028DD50  C3 BF 01 A0 */	lfs f29, 0x1a0(r31)
/* 80290E14 0028DD54  38 83 BC 9C */	addi r4, r3, "__vt__22Iterator<Q24Game4Piki>"@l
/* 80290E18 0028DD58  80 6D 92 F4 */	lwz r3, pikiMgr__4Game@sda21(r13)
/* 80290E1C 0028DD5C  EF 80 00 32 */	fmuls f28, f0, f0
/* 80290E20 0028DD60  90 81 00 30 */	stw r4, 0x30(r1)
/* 80290E24 0028DD64  3B A0 00 01 */	li r29, 1
/* 80290E28 0028DD68  90 01 00 3C */	stw r0, 0x3c(r1)
/* 80290E2C 0028DD6C  90 01 00 34 */	stw r0, 0x34(r1)
/* 80290E30 0028DD70  90 61 00 38 */	stw r3, 0x38(r1)
/* 80290E34 0028DD74  40 82 00 1C */	bne .L_80290E50
/* 80290E38 0028DD78  81 83 00 00 */	lwz r12, 0(r3)
/* 80290E3C 0028DD7C  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80290E40 0028DD80  7D 89 03 A6 */	mtctr r12
/* 80290E44 0028DD84  4E 80 04 21 */	bctrl 
/* 80290E48 0028DD88  90 61 00 34 */	stw r3, 0x34(r1)
/* 80290E4C 0028DD8C  48 00 02 10 */	b .L_8029105C
.L_80290E50:
/* 80290E50 0028DD90  81 83 00 00 */	lwz r12, 0(r3)
/* 80290E54 0028DD94  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80290E58 0028DD98  7D 89 03 A6 */	mtctr r12
/* 80290E5C 0028DD9C  4E 80 04 21 */	bctrl 
/* 80290E60 0028DDA0  90 61 00 34 */	stw r3, 0x34(r1)
/* 80290E64 0028DDA4  48 00 00 58 */	b .L_80290EBC
.L_80290E68:
/* 80290E68 0028DDA8  80 61 00 38 */	lwz r3, 0x38(r1)
/* 80290E6C 0028DDAC  80 81 00 34 */	lwz r4, 0x34(r1)
/* 80290E70 0028DDB0  81 83 00 00 */	lwz r12, 0(r3)
/* 80290E74 0028DDB4  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80290E78 0028DDB8  7D 89 03 A6 */	mtctr r12
/* 80290E7C 0028DDBC  4E 80 04 21 */	bctrl 
/* 80290E80 0028DDC0  7C 64 1B 78 */	mr r4, r3
/* 80290E84 0028DDC4  80 61 00 3C */	lwz r3, 0x3c(r1)
/* 80290E88 0028DDC8  81 83 00 00 */	lwz r12, 0(r3)
/* 80290E8C 0028DDCC  81 8C 00 08 */	lwz r12, 8(r12)
/* 80290E90 0028DDD0  7D 89 03 A6 */	mtctr r12
/* 80290E94 0028DDD4  4E 80 04 21 */	bctrl 
/* 80290E98 0028DDD8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80290E9C 0028DDDC  40 82 01 C0 */	bne .L_8029105C
/* 80290EA0 0028DDE0  80 61 00 38 */	lwz r3, 0x38(r1)
/* 80290EA4 0028DDE4  80 81 00 34 */	lwz r4, 0x34(r1)
/* 80290EA8 0028DDE8  81 83 00 00 */	lwz r12, 0(r3)
/* 80290EAC 0028DDEC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80290EB0 0028DDF0  7D 89 03 A6 */	mtctr r12
/* 80290EB4 0028DDF4  4E 80 04 21 */	bctrl 
/* 80290EB8 0028DDF8  90 61 00 34 */	stw r3, 0x34(r1)
.L_80290EBC:
/* 80290EBC 0028DDFC  81 81 00 30 */	lwz r12, 0x30(r1)
/* 80290EC0 0028DE00  38 61 00 30 */	addi r3, r1, 0x30
/* 80290EC4 0028DE04  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80290EC8 0028DE08  7D 89 03 A6 */	mtctr r12
/* 80290ECC 0028DE0C  4E 80 04 21 */	bctrl 
/* 80290ED0 0028DE10  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80290ED4 0028DE14  41 82 FF 94 */	beq .L_80290E68
/* 80290ED8 0028DE18  48 00 01 84 */	b .L_8029105C
.L_80290EDC:
/* 80290EDC 0028DE1C  80 61 00 38 */	lwz r3, 0x38(r1)
/* 80290EE0 0028DE20  81 83 00 00 */	lwz r12, 0(r3)
/* 80290EE4 0028DE24  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80290EE8 0028DE28  7D 89 03 A6 */	mtctr r12
/* 80290EEC 0028DE2C  4E 80 04 21 */	bctrl 
/* 80290EF0 0028DE30  81 83 00 00 */	lwz r12, 0(r3)
/* 80290EF4 0028DE34  7C 7B 1B 78 */	mr r27, r3
/* 80290EF8 0028DE38  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 80290EFC 0028DE3C  7D 89 03 A6 */	mtctr r12
/* 80290F00 0028DE40  4E 80 04 21 */	bctrl 
/* 80290F04 0028DE44  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80290F08 0028DE48  41 82 00 90 */	beq .L_80290F98
/* 80290F0C 0028DE4C  7F 63 DB 78 */	mr r3, r27
/* 80290F10 0028DE50  81 9B 00 00 */	lwz r12, 0(r27)
/* 80290F14 0028DE54  81 8C 01 C0 */	lwz r12, 0x1c0(r12)
/* 80290F18 0028DE58  7D 89 03 A6 */	mtctr r12
/* 80290F1C 0028DE5C  4E 80 04 21 */	bctrl 
/* 80290F20 0028DE60  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80290F24 0028DE64  41 82 00 74 */	beq .L_80290F98
/* 80290F28 0028DE68  7F 63 DB 78 */	mr r3, r27
/* 80290F2C 0028DE6C  4B F0 E6 5D */	bl isStickToMouth__Q24Game8CreatureFv
/* 80290F30 0028DE70  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80290F34 0028DE74  40 82 00 64 */	bne .L_80290F98
/* 80290F38 0028DE78  7F 64 DB 78 */	mr r4, r27
/* 80290F3C 0028DE7C  38 61 00 14 */	addi r3, r1, 0x14
/* 80290F40 0028DE80  81 9B 00 00 */	lwz r12, 0(r27)
/* 80290F44 0028DE84  81 8C 00 08 */	lwz r12, 8(r12)
/* 80290F48 0028DE88  7D 89 03 A6 */	mtctr r12
/* 80290F4C 0028DE8C  4E 80 04 21 */	bctrl 
/* 80290F50 0028DE90  C0 01 00 18 */	lfs f0, 0x18(r1)
/* 80290F54 0028DE94  C0 21 00 14 */	lfs f1, 0x14(r1)
/* 80290F58 0028DE98  EC 5E 00 28 */	fsubs f2, f30, f0
/* 80290F5C 0028DE9C  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 80290F60 0028DEA0  EC 7F 08 28 */	fsubs f3, f31, f1
/* 80290F64 0028DEA4  EC 3D 00 28 */	fsubs f1, f29, f0
/* 80290F68 0028DEA8  EC 02 00 B2 */	fmuls f0, f2, f2
/* 80290F6C 0028DEAC  EC 03 00 FA */	fmadds f0, f3, f3, f0
/* 80290F70 0028DEB0  EC 21 00 7A */	fmadds f1, f1, f1, f0
/* 80290F74 0028DEB4  FC 01 E0 40 */	fcmpo cr0, f1, f28
/* 80290F78 0028DEB8  40 80 00 10 */	bge .L_80290F88
/* 80290F7C 0028DEBC  7F 7E DB 78 */	mr r30, r27
/* 80290F80 0028DEC0  3B A0 00 00 */	li r29, 0
/* 80290F84 0028DEC4  48 00 00 14 */	b .L_80290F98
.L_80290F88:
/* 80290F88 0028DEC8  C0 02 D6 D8 */	lfs f0, lbl_8051BA38@sda21(r2)
/* 80290F8C 0028DECC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80290F90 0028DED0  40 80 00 08 */	bge .L_80290F98
/* 80290F94 0028DED4  3B A0 00 00 */	li r29, 0
.L_80290F98:
/* 80290F98 0028DED8  28 1E 00 00 */	cmplwi r30, 0
/* 80290F9C 0028DEDC  40 82 00 E0 */	bne .L_8029107C
/* 80290FA0 0028DEE0  80 01 00 3C */	lwz r0, 0x3c(r1)
/* 80290FA4 0028DEE4  28 00 00 00 */	cmplwi r0, 0
/* 80290FA8 0028DEE8  40 82 00 24 */	bne .L_80290FCC
/* 80290FAC 0028DEEC  80 61 00 38 */	lwz r3, 0x38(r1)
/* 80290FB0 0028DEF0  80 81 00 34 */	lwz r4, 0x34(r1)
/* 80290FB4 0028DEF4  81 83 00 00 */	lwz r12, 0(r3)
/* 80290FB8 0028DEF8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80290FBC 0028DEFC  7D 89 03 A6 */	mtctr r12
/* 80290FC0 0028DF00  4E 80 04 21 */	bctrl 
/* 80290FC4 0028DF04  90 61 00 34 */	stw r3, 0x34(r1)
/* 80290FC8 0028DF08  48 00 00 94 */	b .L_8029105C
.L_80290FCC:
/* 80290FCC 0028DF0C  80 61 00 38 */	lwz r3, 0x38(r1)
/* 80290FD0 0028DF10  80 81 00 34 */	lwz r4, 0x34(r1)
/* 80290FD4 0028DF14  81 83 00 00 */	lwz r12, 0(r3)
/* 80290FD8 0028DF18  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80290FDC 0028DF1C  7D 89 03 A6 */	mtctr r12
/* 80290FE0 0028DF20  4E 80 04 21 */	bctrl 
/* 80290FE4 0028DF24  90 61 00 34 */	stw r3, 0x34(r1)
/* 80290FE8 0028DF28  48 00 00 58 */	b .L_80291040
.L_80290FEC:
/* 80290FEC 0028DF2C  80 61 00 38 */	lwz r3, 0x38(r1)
/* 80290FF0 0028DF30  80 81 00 34 */	lwz r4, 0x34(r1)
/* 80290FF4 0028DF34  81 83 00 00 */	lwz r12, 0(r3)
/* 80290FF8 0028DF38  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80290FFC 0028DF3C  7D 89 03 A6 */	mtctr r12
/* 80291000 0028DF40  4E 80 04 21 */	bctrl 
/* 80291004 0028DF44  7C 64 1B 78 */	mr r4, r3
/* 80291008 0028DF48  80 61 00 3C */	lwz r3, 0x3c(r1)
/* 8029100C 0028DF4C  81 83 00 00 */	lwz r12, 0(r3)
/* 80291010 0028DF50  81 8C 00 08 */	lwz r12, 8(r12)
/* 80291014 0028DF54  7D 89 03 A6 */	mtctr r12
/* 80291018 0028DF58  4E 80 04 21 */	bctrl 
/* 8029101C 0028DF5C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80291020 0028DF60  40 82 00 3C */	bne .L_8029105C
/* 80291024 0028DF64  80 61 00 38 */	lwz r3, 0x38(r1)
/* 80291028 0028DF68  80 81 00 34 */	lwz r4, 0x34(r1)
/* 8029102C 0028DF6C  81 83 00 00 */	lwz r12, 0(r3)
/* 80291030 0028DF70  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80291034 0028DF74  7D 89 03 A6 */	mtctr r12
/* 80291038 0028DF78  4E 80 04 21 */	bctrl 
/* 8029103C 0028DF7C  90 61 00 34 */	stw r3, 0x34(r1)
.L_80291040:
/* 80291040 0028DF80  81 81 00 30 */	lwz r12, 0x30(r1)
/* 80291044 0028DF84  38 61 00 30 */	addi r3, r1, 0x30
/* 80291048 0028DF88  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8029104C 0028DF8C  7D 89 03 A6 */	mtctr r12
/* 80291050 0028DF90  4E 80 04 21 */	bctrl 
/* 80291054 0028DF94  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80291058 0028DF98  41 82 FF 94 */	beq .L_80290FEC
.L_8029105C:
/* 8029105C 0028DF9C  80 61 00 38 */	lwz r3, 0x38(r1)
/* 80291060 0028DFA0  81 83 00 00 */	lwz r12, 0(r3)
/* 80291064 0028DFA4  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80291068 0028DFA8  7D 89 03 A6 */	mtctr r12
/* 8029106C 0028DFAC  4E 80 04 21 */	bctrl 
/* 80291070 0028DFB0  80 81 00 34 */	lwz r4, 0x34(r1)
/* 80291074 0028DFB4  7C 04 18 40 */	cmplw r4, r3
/* 80291078 0028DFB8  40 82 FE 64 */	bne .L_80290EDC
.L_8029107C:
/* 8029107C 0028DFBC  28 1E 00 00 */	cmplwi r30, 0
/* 80291080 0028DFC0  40 82 02 44 */	bne .L_802912C4
/* 80291084 0028DFC4  38 00 00 00 */	li r0, 0
/* 80291088 0028DFC8  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 8029108C 0028DFCC  3C 80 80 4B */	lis r4, "__vt__22Iterator<Q24Game4Navi>"@ha
/* 80291090 0028DFD0  90 01 00 2C */	stw r0, 0x2c(r1)
/* 80291094 0028DFD4  38 84 BC B4 */	addi r4, r4, "__vt__22Iterator<Q24Game4Navi>"@l
/* 80291098 0028DFD8  28 00 00 00 */	cmplwi r0, 0
/* 8029109C 0028DFDC  90 81 00 20 */	stw r4, 0x20(r1)
/* 802910A0 0028DFE0  90 01 00 24 */	stw r0, 0x24(r1)
/* 802910A4 0028DFE4  90 61 00 28 */	stw r3, 0x28(r1)
/* 802910A8 0028DFE8  40 82 00 1C */	bne .L_802910C4
/* 802910AC 0028DFEC  81 83 00 00 */	lwz r12, 0(r3)
/* 802910B0 0028DFF0  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 802910B4 0028DFF4  7D 89 03 A6 */	mtctr r12
/* 802910B8 0028DFF8  4E 80 04 21 */	bctrl 
/* 802910BC 0028DFFC  90 61 00 24 */	stw r3, 0x24(r1)
/* 802910C0 0028E000  48 00 01 E4 */	b .L_802912A4
.L_802910C4:
/* 802910C4 0028E004  81 83 00 00 */	lwz r12, 0(r3)
/* 802910C8 0028E008  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 802910CC 0028E00C  7D 89 03 A6 */	mtctr r12
/* 802910D0 0028E010  4E 80 04 21 */	bctrl 
/* 802910D4 0028E014  90 61 00 24 */	stw r3, 0x24(r1)
/* 802910D8 0028E018  48 00 00 58 */	b .L_80291130
.L_802910DC:
/* 802910DC 0028E01C  80 61 00 28 */	lwz r3, 0x28(r1)
/* 802910E0 0028E020  80 81 00 24 */	lwz r4, 0x24(r1)
/* 802910E4 0028E024  81 83 00 00 */	lwz r12, 0(r3)
/* 802910E8 0028E028  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 802910EC 0028E02C  7D 89 03 A6 */	mtctr r12
/* 802910F0 0028E030  4E 80 04 21 */	bctrl 
/* 802910F4 0028E034  7C 64 1B 78 */	mr r4, r3
/* 802910F8 0028E038  80 61 00 2C */	lwz r3, 0x2c(r1)
/* 802910FC 0028E03C  81 83 00 00 */	lwz r12, 0(r3)
/* 80291100 0028E040  81 8C 00 08 */	lwz r12, 8(r12)
/* 80291104 0028E044  7D 89 03 A6 */	mtctr r12
/* 80291108 0028E048  4E 80 04 21 */	bctrl 
/* 8029110C 0028E04C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80291110 0028E050  40 82 01 94 */	bne .L_802912A4
/* 80291114 0028E054  80 61 00 28 */	lwz r3, 0x28(r1)
/* 80291118 0028E058  80 81 00 24 */	lwz r4, 0x24(r1)
/* 8029111C 0028E05C  81 83 00 00 */	lwz r12, 0(r3)
/* 80291120 0028E060  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80291124 0028E064  7D 89 03 A6 */	mtctr r12
/* 80291128 0028E068  4E 80 04 21 */	bctrl 
/* 8029112C 0028E06C  90 61 00 24 */	stw r3, 0x24(r1)
.L_80291130:
/* 80291130 0028E070  81 81 00 20 */	lwz r12, 0x20(r1)
/* 80291134 0028E074  38 61 00 20 */	addi r3, r1, 0x20
/* 80291138 0028E078  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8029113C 0028E07C  7D 89 03 A6 */	mtctr r12
/* 80291140 0028E080  4E 80 04 21 */	bctrl 
/* 80291144 0028E084  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80291148 0028E088  41 82 FF 94 */	beq .L_802910DC
/* 8029114C 0028E08C  48 00 01 58 */	b .L_802912A4
.L_80291150:
/* 80291150 0028E090  80 61 00 28 */	lwz r3, 0x28(r1)
/* 80291154 0028E094  81 83 00 00 */	lwz r12, 0(r3)
/* 80291158 0028E098  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8029115C 0028E09C  7D 89 03 A6 */	mtctr r12
/* 80291160 0028E0A0  4E 80 04 21 */	bctrl 
/* 80291164 0028E0A4  81 83 00 00 */	lwz r12, 0(r3)
/* 80291168 0028E0A8  7C 7B 1B 78 */	mr r27, r3
/* 8029116C 0028E0AC  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 80291170 0028E0B0  7D 89 03 A6 */	mtctr r12
/* 80291174 0028E0B4  4E 80 04 21 */	bctrl 
/* 80291178 0028E0B8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8029117C 0028E0BC  41 82 00 64 */	beq .L_802911E0
/* 80291180 0028E0C0  7F 64 DB 78 */	mr r4, r27
/* 80291184 0028E0C4  38 61 00 08 */	addi r3, r1, 8
/* 80291188 0028E0C8  81 9B 00 00 */	lwz r12, 0(r27)
/* 8029118C 0028E0CC  81 8C 00 08 */	lwz r12, 8(r12)
/* 80291190 0028E0D0  7D 89 03 A6 */	mtctr r12
/* 80291194 0028E0D4  4E 80 04 21 */	bctrl 
/* 80291198 0028E0D8  C0 01 00 0C */	lfs f0, 0xc(r1)
/* 8029119C 0028E0DC  C0 21 00 08 */	lfs f1, 8(r1)
/* 802911A0 0028E0E0  EC 5E 00 28 */	fsubs f2, f30, f0
/* 802911A4 0028E0E4  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 802911A8 0028E0E8  EC 7F 08 28 */	fsubs f3, f31, f1
/* 802911AC 0028E0EC  EC 3D 00 28 */	fsubs f1, f29, f0
/* 802911B0 0028E0F0  EC 02 00 B2 */	fmuls f0, f2, f2
/* 802911B4 0028E0F4  EC 03 00 FA */	fmadds f0, f3, f3, f0
/* 802911B8 0028E0F8  EC 21 00 7A */	fmadds f1, f1, f1, f0
/* 802911BC 0028E0FC  FC 01 E0 40 */	fcmpo cr0, f1, f28
/* 802911C0 0028E100  40 80 00 10 */	bge .L_802911D0
/* 802911C4 0028E104  7F 7E DB 78 */	mr r30, r27
/* 802911C8 0028E108  3B A0 00 00 */	li r29, 0
/* 802911CC 0028E10C  48 00 00 14 */	b .L_802911E0
.L_802911D0:
/* 802911D0 0028E110  C0 02 D6 D8 */	lfs f0, lbl_8051BA38@sda21(r2)
/* 802911D4 0028E114  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802911D8 0028E118  40 80 00 08 */	bge .L_802911E0
/* 802911DC 0028E11C  3B A0 00 00 */	li r29, 0
.L_802911E0:
/* 802911E0 0028E120  28 1E 00 00 */	cmplwi r30, 0
/* 802911E4 0028E124  40 82 00 E0 */	bne .L_802912C4
/* 802911E8 0028E128  80 01 00 2C */	lwz r0, 0x2c(r1)
/* 802911EC 0028E12C  28 00 00 00 */	cmplwi r0, 0
/* 802911F0 0028E130  40 82 00 24 */	bne .L_80291214
/* 802911F4 0028E134  80 61 00 28 */	lwz r3, 0x28(r1)
/* 802911F8 0028E138  80 81 00 24 */	lwz r4, 0x24(r1)
/* 802911FC 0028E13C  81 83 00 00 */	lwz r12, 0(r3)
/* 80291200 0028E140  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80291204 0028E144  7D 89 03 A6 */	mtctr r12
/* 80291208 0028E148  4E 80 04 21 */	bctrl 
/* 8029120C 0028E14C  90 61 00 24 */	stw r3, 0x24(r1)
/* 80291210 0028E150  48 00 00 94 */	b .L_802912A4
.L_80291214:
/* 80291214 0028E154  80 61 00 28 */	lwz r3, 0x28(r1)
/* 80291218 0028E158  80 81 00 24 */	lwz r4, 0x24(r1)
/* 8029121C 0028E15C  81 83 00 00 */	lwz r12, 0(r3)
/* 80291220 0028E160  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80291224 0028E164  7D 89 03 A6 */	mtctr r12
/* 80291228 0028E168  4E 80 04 21 */	bctrl 
/* 8029122C 0028E16C  90 61 00 24 */	stw r3, 0x24(r1)
/* 80291230 0028E170  48 00 00 58 */	b .L_80291288
.L_80291234:
/* 80291234 0028E174  80 61 00 28 */	lwz r3, 0x28(r1)
/* 80291238 0028E178  80 81 00 24 */	lwz r4, 0x24(r1)
/* 8029123C 0028E17C  81 83 00 00 */	lwz r12, 0(r3)
/* 80291240 0028E180  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80291244 0028E184  7D 89 03 A6 */	mtctr r12
/* 80291248 0028E188  4E 80 04 21 */	bctrl 
/* 8029124C 0028E18C  7C 64 1B 78 */	mr r4, r3
/* 80291250 0028E190  80 61 00 2C */	lwz r3, 0x2c(r1)
/* 80291254 0028E194  81 83 00 00 */	lwz r12, 0(r3)
/* 80291258 0028E198  81 8C 00 08 */	lwz r12, 8(r12)
/* 8029125C 0028E19C  7D 89 03 A6 */	mtctr r12
/* 80291260 0028E1A0  4E 80 04 21 */	bctrl 
/* 80291264 0028E1A4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80291268 0028E1A8  40 82 00 3C */	bne .L_802912A4
/* 8029126C 0028E1AC  80 61 00 28 */	lwz r3, 0x28(r1)
/* 80291270 0028E1B0  80 81 00 24 */	lwz r4, 0x24(r1)
/* 80291274 0028E1B4  81 83 00 00 */	lwz r12, 0(r3)
/* 80291278 0028E1B8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8029127C 0028E1BC  7D 89 03 A6 */	mtctr r12
/* 80291280 0028E1C0  4E 80 04 21 */	bctrl 
/* 80291284 0028E1C4  90 61 00 24 */	stw r3, 0x24(r1)
.L_80291288:
/* 80291288 0028E1C8  81 81 00 20 */	lwz r12, 0x20(r1)
/* 8029128C 0028E1CC  38 61 00 20 */	addi r3, r1, 0x20
/* 80291290 0028E1D0  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80291294 0028E1D4  7D 89 03 A6 */	mtctr r12
/* 80291298 0028E1D8  4E 80 04 21 */	bctrl 
/* 8029129C 0028E1DC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802912A0 0028E1E0  41 82 FF 94 */	beq .L_80291234
.L_802912A4:
/* 802912A4 0028E1E4  80 61 00 28 */	lwz r3, 0x28(r1)
/* 802912A8 0028E1E8  81 83 00 00 */	lwz r12, 0(r3)
/* 802912AC 0028E1EC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802912B0 0028E1F0  7D 89 03 A6 */	mtctr r12
/* 802912B4 0028E1F4  4E 80 04 21 */	bctrl 
/* 802912B8 0028E1F8  80 81 00 24 */	lwz r4, 0x24(r1)
/* 802912BC 0028E1FC  7C 04 18 40 */	cmplw r4, r3
/* 802912C0 0028E200  40 82 FE 90 */	bne .L_80291150
.L_802912C4:
/* 802912C4 0028E204  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 802912C8 0028E208  41 82 00 0C */	beq .L_802912D4
/* 802912CC 0028E20C  7F E3 FB 78 */	mr r3, r31
/* 802912D0 0028E210  48 00 40 95 */	bl resetBossAppearBGM__Q34Game9SnakeCrow3ObjFv
.L_802912D4:
/* 802912D4 0028E214  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 802912D8 0028E218  28 1E 00 00 */	cmplwi r30, 0
/* 802912DC 0028E21C  C0 3F 02 C4 */	lfs f1, 0x2c4(r31)
/* 802912E0 0028E220  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 802912E4 0028E224  EC 01 00 2A */	fadds f0, f1, f0
/* 802912E8 0028E228  D0 1F 02 C4 */	stfs f0, 0x2c4(r31)
/* 802912EC 0028E22C  41 82 00 A0 */	beq .L_8029138C
/* 802912F0 0028E230  93 DF 02 30 */	stw r30, 0x230(r31)
/* 802912F4 0028E234  7F E3 FB 78 */	mr r3, r31
/* 802912F8 0028E238  7F C4 F3 78 */	mr r4, r30
/* 802912FC 0028E23C  48 00 25 FD */	bl appearNearByTarget__Q34Game9SnakeCrow3ObjFPQ24Game8Creature
/* 80291300 0028E240  7F E3 FB 78 */	mr r3, r31
/* 80291304 0028E244  48 00 41 31 */	bl setBossAppearBGM__Q34Game9SnakeCrow3ObjFv
/* 80291308 0028E248  83 BF 00 C0 */	lwz r29, 0xc0(r31)
/* 8029130C 0028E24C  4B E3 82 95 */	bl rand
/* 80291310 0028E250  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 80291314 0028E254  3C 00 43 30 */	lis r0, 0x4330
/* 80291318 0028E258  90 61 00 44 */	stw r3, 0x44(r1)
/* 8029131C 0028E25C  C8 62 D6 E8 */	lfd f3, lbl_8051BA48@sda21(r2)
/* 80291320 0028E260  90 01 00 40 */	stw r0, 0x40(r1)
/* 80291324 0028E264  C0 42 D6 DC */	lfs f2, lbl_8051BA3C@sda21(r2)
/* 80291328 0028E268  C8 01 00 40 */	lfd f0, 0x40(r1)
/* 8029132C 0028E26C  C0 22 D6 E0 */	lfs f1, lbl_8051BA40@sda21(r2)
/* 80291330 0028E270  EC 60 18 28 */	fsubs f3, f0, f3
/* 80291334 0028E274  C0 1D 08 1C */	lfs f0, 0x81c(r29)
/* 80291338 0028E278  EC 42 00 F2 */	fmuls f2, f2, f3
/* 8029133C 0028E27C  EC 22 08 24 */	fdivs f1, f2, f1
/* 80291340 0028E280  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80291344 0028E284  40 80 00 28 */	bge .L_8029136C
/* 80291348 0028E288  7F 83 E3 78 */	mr r3, r28
/* 8029134C 0028E28C  7F E4 FB 78 */	mr r4, r31
/* 80291350 0028E290  81 9C 00 00 */	lwz r12, 0(r28)
/* 80291354 0028E294  38 A0 00 02 */	li r5, 2
/* 80291358 0028E298  38 C0 00 00 */	li r6, 0
/* 8029135C 0028E29C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80291360 0028E2A0  7D 89 03 A6 */	mtctr r12
/* 80291364 0028E2A4  4E 80 04 21 */	bctrl 
/* 80291368 0028E2A8  48 00 00 24 */	b .L_8029138C
.L_8029136C:
/* 8029136C 0028E2AC  7F 83 E3 78 */	mr r3, r28
/* 80291370 0028E2B0  7F E4 FB 78 */	mr r4, r31
/* 80291374 0028E2B4  81 9C 00 00 */	lwz r12, 0(r28)
/* 80291378 0028E2B8  38 A0 00 03 */	li r5, 3
/* 8029137C 0028E2BC  38 C0 00 00 */	li r6, 0
/* 80291380 0028E2C0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80291384 0028E2C4  7D 89 03 A6 */	mtctr r12
/* 80291388 0028E2C8  4E 80 04 21 */	bctrl 
.L_8029138C:
/* 8029138C 0028E2CC  E3 E1 00 98 */	psq_l f31, 152(r1), 0, qr0
/* 80291390 0028E2D0  CB E1 00 90 */	lfd f31, 0x90(r1)
/* 80291394 0028E2D4  E3 C1 00 88 */	psq_l f30, 136(r1), 0, qr0
/* 80291398 0028E2D8  CB C1 00 80 */	lfd f30, 0x80(r1)
/* 8029139C 0028E2DC  E3 A1 00 78 */	psq_l f29, 120(r1), 0, qr0
/* 802913A0 0028E2E0  CB A1 00 70 */	lfd f29, 0x70(r1)
/* 802913A4 0028E2E4  E3 81 00 68 */	psq_l f28, 104(r1), 0, qr0
/* 802913A8 0028E2E8  CB 81 00 60 */	lfd f28, 0x60(r1)
/* 802913AC 0028E2EC  BB 61 00 4C */	lmw r27, 0x4c(r1)
/* 802913B0 0028E2F0  80 01 00 A4 */	lwz r0, 0xa4(r1)
/* 802913B4 0028E2F4  7C 08 03 A6 */	mtlr r0
/* 802913B8 0028E2F8  38 21 00 A0 */	addi r1, r1, 0xa0
/* 802913BC 0028E2FC  4E 80 00 20 */	blr 
.endfn exec__Q34Game9SnakeCrow9StateStayFPQ24Game9EnemyBase

.fn cleanup__Q34Game9SnakeCrow9StateStayFPQ24Game9EnemyBase, global
/* 802913C0 0028E300  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802913C4 0028E304  7C 08 02 A6 */	mflr r0
/* 802913C8 0028E308  90 01 00 14 */	stw r0, 0x14(r1)
/* 802913CC 0028E30C  7C 80 23 78 */	mr r0, r4
/* 802913D0 0028E310  38 80 00 01 */	li r4, 1
/* 802913D4 0028E314  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802913D8 0028E318  7C 1F 03 78 */	mr r31, r0
/* 802913DC 0028E31C  7F E3 FB 78 */	mr r3, r31
/* 802913E0 0028E320  81 9F 00 00 */	lwz r12, 0(r31)
/* 802913E4 0028E324  81 8C 00 A4 */	lwz r12, 0xa4(r12)
/* 802913E8 0028E328  7D 89 03 A6 */	mtctr r12
/* 802913EC 0028E32C  4E 80 04 21 */	bctrl 
/* 802913F0 0028E330  80 9F 01 E0 */	lwz r4, 0x1e0(r31)
/* 802913F4 0028E334  38 00 00 00 */	li r0, 0
/* 802913F8 0028E338  7F E3 FB 78 */	mr r3, r31
/* 802913FC 0028E33C  54 84 00 3C */	rlwinm r4, r4, 0, 0, 0x1e
/* 80291400 0028E340  90 9F 01 E0 */	stw r4, 0x1e0(r31)
/* 80291404 0028E344  98 1F 02 C0 */	stb r0, 0x2c0(r31)
/* 80291408 0028E348  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 8029140C 0028E34C  54 00 02 90 */	rlwinm r0, r0, 0, 0xa, 8
/* 80291410 0028E350  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 80291414 0028E354  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 80291418 0028E358  60 00 80 00 */	ori r0, r0, 0x8000
/* 8029141C 0028E35C  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 80291420 0028E360  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 80291424 0028E364  54 00 00 80 */	rlwinm r0, r0, 0, 2, 0
/* 80291428 0028E368  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 8029142C 0028E36C  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 80291430 0028E370  60 00 08 00 */	ori r0, r0, 0x800
/* 80291434 0028E374  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 80291438 0028E378  48 00 3B 31 */	bl lifeIncrement__Q34Game9SnakeCrow3ObjFv
/* 8029143C 0028E37C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80291440 0028E380  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80291444 0028E384  7C 08 03 A6 */	mtlr r0
/* 80291448 0028E388  38 21 00 10 */	addi r1, r1, 0x10
/* 8029144C 0028E38C  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game9SnakeCrow9StateStayFPQ24Game9EnemyBase

.fn init__Q34Game9SnakeCrow12StateAppear1FPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 80291450 0028E390  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80291454 0028E394  7C 08 02 A6 */	mflr r0
/* 80291458 0028E398  C0 02 D6 CC */	lfs f0, lbl_8051BA2C@sda21(r2)
/* 8029145C 0028E39C  90 01 00 34 */	stw r0, 0x34(r1)
/* 80291460 0028E3A0  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 80291464 0028E3A4  7C 9F 23 78 */	mr r31, r4
/* 80291468 0028E3A8  7F E3 FB 78 */	mr r3, r31
/* 8029146C 0028E3AC  80 04 01 E0 */	lwz r0, 0x1e0(r4)
/* 80291470 0028E3B0  64 00 00 20 */	oris r0, r0, 0x20
/* 80291474 0028E3B4  90 04 01 E0 */	stw r0, 0x1e0(r4)
/* 80291478 0028E3B8  80 04 01 E0 */	lwz r0, 0x1e0(r4)
/* 8029147C 0028E3BC  54 00 06 B0 */	rlwinm r0, r0, 0, 0x1a, 0x18
/* 80291480 0028E3C0  90 04 01 E0 */	stw r0, 0x1e0(r4)
/* 80291484 0028E3C4  D0 04 01 D4 */	stfs f0, 0x1d4(r4)
/* 80291488 0028E3C8  D0 04 01 D8 */	stfs f0, 0x1d8(r4)
/* 8029148C 0028E3CC  D0 04 01 DC */	stfs f0, 0x1dc(r4)
/* 80291490 0028E3D0  4B E7 05 3D */	bl setEmotionExcitement__Q24Game9EnemyBaseFv
/* 80291494 0028E3D4  7F E3 FB 78 */	mr r3, r31
/* 80291498 0028E3D8  38 80 00 01 */	li r4, 1
/* 8029149C 0028E3DC  38 A0 00 00 */	li r5, 0
/* 802914A0 0028E3E0  4B E7 3B 65 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 802914A4 0028E3E4  7F E3 FB 78 */	mr r3, r31
/* 802914A8 0028E3E8  38 80 00 00 */	li r4, 0
/* 802914AC 0028E3EC  48 00 42 01 */	bl createAppearEffect__Q34Game9SnakeCrow3ObjFi
/* 802914B0 0028E3F0  7F E4 FB 78 */	mr r4, r31
/* 802914B4 0028E3F4  38 61 00 08 */	addi r3, r1, 8
/* 802914B8 0028E3F8  81 9F 00 00 */	lwz r12, 0(r31)
/* 802914BC 0028E3FC  81 8C 00 08 */	lwz r12, 8(r12)
/* 802914C0 0028E400  7D 89 03 A6 */	mtctr r12
/* 802914C4 0028E404  4E 80 04 21 */	bctrl 
/* 802914C8 0028E408  C0 41 00 08 */	lfs f2, 8(r1)
/* 802914CC 0028E40C  38 A1 00 14 */	addi r5, r1, 0x14
/* 802914D0 0028E410  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 802914D4 0028E414  38 80 00 06 */	li r4, 6
/* 802914D8 0028E418  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 802914DC 0028E41C  38 C0 00 02 */	li r6, 2
/* 802914E0 0028E420  D0 41 00 14 */	stfs f2, 0x14(r1)
/* 802914E4 0028E424  80 6D 96 A0 */	lwz r3, cameraMgr__4Game@sda21(r13)
/* 802914E8 0028E428  D0 21 00 18 */	stfs f1, 0x18(r1)
/* 802914EC 0028E42C  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 802914F0 0028E430  4B FC 0D 4D */	bl "startVibration__Q24Game9CameraMgrFiR10Vector3<f>i"
/* 802914F4 0028E434  80 6D 96 A8 */	lwz r3, rumbleMgr__4Game@sda21(r13)
/* 802914F8 0028E438  38 A1 00 14 */	addi r5, r1, 0x14
/* 802914FC 0028E43C  38 80 00 0F */	li r4, 0xf
/* 80291500 0028E440  38 C0 00 02 */	li r6, 2
/* 80291504 0028E444  4B FC 22 7D */	bl "startRumble__Q24Game9RumbleMgrFiR10Vector3<f>i"
/* 80291508 0028E448  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8029150C 0028E44C  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 80291510 0028E450  7C 08 03 A6 */	mtlr r0
/* 80291514 0028E454  38 21 00 30 */	addi r1, r1, 0x30
/* 80291518 0028E458  4E 80 00 20 */	blr 
.endfn init__Q34Game9SnakeCrow12StateAppear1FPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game9SnakeCrow12StateAppear1FPQ24Game9EnemyBase, global
/* 8029151C 0028E45C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80291520 0028E460  7C 08 02 A6 */	mflr r0
/* 80291524 0028E464  90 01 00 14 */	stw r0, 0x14(r1)
/* 80291528 0028E468  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8029152C 0028E46C  7C 9F 23 78 */	mr r31, r4
/* 80291530 0028E470  93 C1 00 08 */	stw r30, 8(r1)
/* 80291534 0028E474  7C 7E 1B 78 */	mr r30, r3
/* 80291538 0028E478  80 64 01 88 */	lwz r3, 0x188(r4)
/* 8029153C 0028E47C  88 03 00 24 */	lbz r0, 0x24(r3)
/* 80291540 0028E480  28 00 00 00 */	cmplwi r0, 0
/* 80291544 0028E484  41 82 01 18 */	beq .L_8029165C
/* 80291548 0028E488  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 8029154C 0028E48C  28 00 00 02 */	cmplwi r0, 2
/* 80291550 0028E490  40 82 00 24 */	bne .L_80291574
/* 80291554 0028E494  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 80291558 0028E498  7F E3 FB 78 */	mr r3, r31
/* 8029155C 0028E49C  54 00 02 D2 */	rlwinm r0, r0, 0, 0xb, 9
/* 80291560 0028E4A0  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 80291564 0028E4A4  48 00 3B 5D */	bl startBossAttackBGM__Q34Game9SnakeCrow3ObjFv
/* 80291568 0028E4A8  7F E3 FB 78 */	mr r3, r31
/* 8029156C 0028E4AC  48 00 3A CD */	bl startJointShadow__Q34Game9SnakeCrow3ObjFv
/* 80291570 0028E4B0  48 00 00 EC */	b .L_8029165C
.L_80291574:
/* 80291574 0028E4B4  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 80291578 0028E4B8  40 82 00 E4 */	bne .L_8029165C
/* 8029157C 0028E4BC  7F E3 FB 78 */	mr r3, r31
/* 80291580 0028E4C0  48 00 26 B1 */	bl setAttackPosition__Q34Game9SnakeCrow3ObjFv
/* 80291584 0028E4C4  C0 3F 02 00 */	lfs f1, 0x200(r31)
/* 80291588 0028E4C8  C0 02 D6 CC */	lfs f0, lbl_8051BA2C@sda21(r2)
/* 8029158C 0028E4CC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80291590 0028E4D0  4C 40 13 82 */	cror 2, 0, 2
/* 80291594 0028E4D4  40 82 00 28 */	bne .L_802915BC
/* 80291598 0028E4D8  7F C3 F3 78 */	mr r3, r30
/* 8029159C 0028E4DC  7F E4 FB 78 */	mr r4, r31
/* 802915A0 0028E4E0  81 9E 00 00 */	lwz r12, 0(r30)
/* 802915A4 0028E4E4  38 A0 00 00 */	li r5, 0
/* 802915A8 0028E4E8  38 C0 00 00 */	li r6, 0
/* 802915AC 0028E4EC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802915B0 0028E4F0  7D 89 03 A6 */	mtctr r12
/* 802915B4 0028E4F4  4E 80 04 21 */	bctrl 
/* 802915B8 0028E4F8  48 00 00 A4 */	b .L_8029165C
.L_802915BC:
/* 802915BC 0028E4FC  7F E3 FB 78 */	mr r3, r31
/* 802915C0 0028E500  38 80 00 05 */	li r4, 5
/* 802915C4 0028E504  48 00 28 79 */	bl getAttackPiki__Q34Game9SnakeCrow3ObjFi
/* 802915C8 0028E508  28 03 00 00 */	cmplwi r3, 0
/* 802915CC 0028E50C  40 82 00 18 */	bne .L_802915E4
/* 802915D0 0028E510  7F E3 FB 78 */	mr r3, r31
/* 802915D4 0028E514  38 80 00 05 */	li r4, 5
/* 802915D8 0028E518  48 00 2E 59 */	bl getAttackNavi__Q34Game9SnakeCrow3ObjFi
/* 802915DC 0028E51C  28 03 00 00 */	cmplwi r3, 0
/* 802915E0 0028E520  41 82 00 5C */	beq .L_8029163C
.L_802915E4:
/* 802915E4 0028E524  7F E3 FB 78 */	mr r3, r31
/* 802915E8 0028E528  48 00 34 E5 */	bl getStickHeadPikmin__Q34Game9SnakeCrow3ObjFv
/* 802915EC 0028E52C  2C 03 00 00 */	cmpwi r3, 0
/* 802915F0 0028E530  41 82 00 28 */	beq .L_80291618
/* 802915F4 0028E534  7F C3 F3 78 */	mr r3, r30
/* 802915F8 0028E538  7F E4 FB 78 */	mr r4, r31
/* 802915FC 0028E53C  81 9E 00 00 */	lwz r12, 0(r30)
/* 80291600 0028E540  38 A0 00 08 */	li r5, 8
/* 80291604 0028E544  38 C0 00 00 */	li r6, 0
/* 80291608 0028E548  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8029160C 0028E54C  7D 89 03 A6 */	mtctr r12
/* 80291610 0028E550  4E 80 04 21 */	bctrl 
/* 80291614 0028E554  48 00 00 48 */	b .L_8029165C
.L_80291618:
/* 80291618 0028E558  7F C3 F3 78 */	mr r3, r30
/* 8029161C 0028E55C  7F E4 FB 78 */	mr r4, r31
/* 80291620 0028E560  81 9E 00 00 */	lwz r12, 0(r30)
/* 80291624 0028E564  38 A0 00 06 */	li r5, 6
/* 80291628 0028E568  38 C0 00 00 */	li r6, 0
/* 8029162C 0028E56C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80291630 0028E570  7D 89 03 A6 */	mtctr r12
/* 80291634 0028E574  4E 80 04 21 */	bctrl 
/* 80291638 0028E578  48 00 00 24 */	b .L_8029165C
.L_8029163C:
/* 8029163C 0028E57C  7F C3 F3 78 */	mr r3, r30
/* 80291640 0028E580  7F E4 FB 78 */	mr r4, r31
/* 80291644 0028E584  81 9E 00 00 */	lwz r12, 0(r30)
/* 80291648 0028E588  38 A0 00 05 */	li r5, 5
/* 8029164C 0028E58C  38 C0 00 00 */	li r6, 0
/* 80291650 0028E590  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80291654 0028E594  7D 89 03 A6 */	mtctr r12
/* 80291658 0028E598  4E 80 04 21 */	bctrl 
.L_8029165C:
/* 8029165C 0028E59C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80291660 0028E5A0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80291664 0028E5A4  83 C1 00 08 */	lwz r30, 8(r1)
/* 80291668 0028E5A8  7C 08 03 A6 */	mtlr r0
/* 8029166C 0028E5AC  38 21 00 10 */	addi r1, r1, 0x10
/* 80291670 0028E5B0  4E 80 00 20 */	blr 
.endfn exec__Q34Game9SnakeCrow12StateAppear1FPQ24Game9EnemyBase

.fn cleanup__Q34Game9SnakeCrow12StateAppear1FPQ24Game9EnemyBase, global
/* 80291674 0028E5B4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80291678 0028E5B8  7C 08 02 A6 */	mflr r0
/* 8029167C 0028E5BC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80291680 0028E5C0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80291684 0028E5C4  7C 9F 23 78 */	mr r31, r4
/* 80291688 0028E5C8  7F E3 FB 78 */	mr r3, r31
/* 8029168C 0028E5CC  80 04 01 E0 */	lwz r0, 0x1e0(r4)
/* 80291690 0028E5D0  54 00 02 D2 */	rlwinm r0, r0, 0, 0xb, 9
/* 80291694 0028E5D4  90 04 01 E0 */	stw r0, 0x1e0(r4)
/* 80291698 0028E5D8  80 04 01 E0 */	lwz r0, 0x1e0(r4)
/* 8029169C 0028E5DC  60 00 00 40 */	ori r0, r0, 0x40
/* 802916A0 0028E5E0  90 04 01 E0 */	stw r0, 0x1e0(r4)
/* 802916A4 0028E5E4  48 00 42 65 */	bl startWaitEffect__Q34Game9SnakeCrow3ObjFv
/* 802916A8 0028E5E8  80 1F 02 80 */	lwz r0, 0x280(r31)
/* 802916AC 0028E5EC  28 00 00 00 */	cmplwi r0, 0
/* 802916B0 0028E5F0  41 82 00 18 */	beq .L_802916C8
/* 802916B4 0028E5F4  7F E3 FB 78 */	mr r3, r31
/* 802916B8 0028E5F8  81 9F 00 00 */	lwz r12, 0(r31)
/* 802916BC 0028E5FC  81 8C 02 50 */	lwz r12, 0x250(r12)
/* 802916C0 0028E600  7D 89 03 A6 */	mtctr r12
/* 802916C4 0028E604  4E 80 04 21 */	bctrl 
.L_802916C8:
/* 802916C8 0028E608  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802916CC 0028E60C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802916D0 0028E610  7C 08 03 A6 */	mtlr r0
/* 802916D4 0028E614  38 21 00 10 */	addi r1, r1, 0x10
/* 802916D8 0028E618  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game9SnakeCrow12StateAppear1FPQ24Game9EnemyBase

.fn init__Q34Game9SnakeCrow12StateAppear2FPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 802916DC 0028E61C  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 802916E0 0028E620  7C 08 02 A6 */	mflr r0
/* 802916E4 0028E624  C0 02 D6 CC */	lfs f0, lbl_8051BA2C@sda21(r2)
/* 802916E8 0028E628  90 01 00 34 */	stw r0, 0x34(r1)
/* 802916EC 0028E62C  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 802916F0 0028E630  7C 9F 23 78 */	mr r31, r4
/* 802916F4 0028E634  7F E3 FB 78 */	mr r3, r31
/* 802916F8 0028E638  80 04 01 E0 */	lwz r0, 0x1e0(r4)
/* 802916FC 0028E63C  64 00 00 20 */	oris r0, r0, 0x20
/* 80291700 0028E640  90 04 01 E0 */	stw r0, 0x1e0(r4)
/* 80291704 0028E644  80 04 01 E0 */	lwz r0, 0x1e0(r4)
/* 80291708 0028E648  54 00 06 B0 */	rlwinm r0, r0, 0, 0x1a, 0x18
/* 8029170C 0028E64C  90 04 01 E0 */	stw r0, 0x1e0(r4)
/* 80291710 0028E650  D0 04 01 D4 */	stfs f0, 0x1d4(r4)
/* 80291714 0028E654  D0 04 01 D8 */	stfs f0, 0x1d8(r4)
/* 80291718 0028E658  D0 04 01 DC */	stfs f0, 0x1dc(r4)
/* 8029171C 0028E65C  4B E7 02 B1 */	bl setEmotionExcitement__Q24Game9EnemyBaseFv
/* 80291720 0028E660  7F E3 FB 78 */	mr r3, r31
/* 80291724 0028E664  38 80 00 02 */	li r4, 2
/* 80291728 0028E668  38 A0 00 00 */	li r5, 0
/* 8029172C 0028E66C  4B E7 38 D9 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 80291730 0028E670  7F E3 FB 78 */	mr r3, r31
/* 80291734 0028E674  38 80 00 01 */	li r4, 1
/* 80291738 0028E678  48 00 3F 75 */	bl createAppearEffect__Q34Game9SnakeCrow3ObjFi
/* 8029173C 0028E67C  7F E4 FB 78 */	mr r4, r31
/* 80291740 0028E680  38 61 00 08 */	addi r3, r1, 8
/* 80291744 0028E684  81 9F 00 00 */	lwz r12, 0(r31)
/* 80291748 0028E688  81 8C 00 08 */	lwz r12, 8(r12)
/* 8029174C 0028E68C  7D 89 03 A6 */	mtctr r12
/* 80291750 0028E690  4E 80 04 21 */	bctrl 
/* 80291754 0028E694  C0 41 00 08 */	lfs f2, 8(r1)
/* 80291758 0028E698  38 A1 00 14 */	addi r5, r1, 0x14
/* 8029175C 0028E69C  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 80291760 0028E6A0  38 80 00 08 */	li r4, 8
/* 80291764 0028E6A4  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 80291768 0028E6A8  38 C0 00 02 */	li r6, 2
/* 8029176C 0028E6AC  D0 41 00 14 */	stfs f2, 0x14(r1)
/* 80291770 0028E6B0  80 6D 96 A0 */	lwz r3, cameraMgr__4Game@sda21(r13)
/* 80291774 0028E6B4  D0 21 00 18 */	stfs f1, 0x18(r1)
/* 80291778 0028E6B8  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 8029177C 0028E6BC  4B FC 0A C1 */	bl "startVibration__Q24Game9CameraMgrFiR10Vector3<f>i"
/* 80291780 0028E6C0  80 6D 96 A8 */	lwz r3, rumbleMgr__4Game@sda21(r13)
/* 80291784 0028E6C4  38 A1 00 14 */	addi r5, r1, 0x14
/* 80291788 0028E6C8  38 80 00 0C */	li r4, 0xc
/* 8029178C 0028E6CC  38 C0 00 02 */	li r6, 2
/* 80291790 0028E6D0  4B FC 1F F1 */	bl "startRumble__Q24Game9RumbleMgrFiR10Vector3<f>i"
/* 80291794 0028E6D4  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80291798 0028E6D8  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 8029179C 0028E6DC  7C 08 03 A6 */	mtlr r0
/* 802917A0 0028E6E0  38 21 00 30 */	addi r1, r1, 0x30
/* 802917A4 0028E6E4  4E 80 00 20 */	blr 
.endfn init__Q34Game9SnakeCrow12StateAppear2FPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game9SnakeCrow12StateAppear2FPQ24Game9EnemyBase, global
/* 802917A8 0028E6E8  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 802917AC 0028E6EC  7C 08 02 A6 */	mflr r0
/* 802917B0 0028E6F0  90 01 00 44 */	stw r0, 0x44(r1)
/* 802917B4 0028E6F4  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 802917B8 0028E6F8  7C 9F 23 78 */	mr r31, r4
/* 802917BC 0028E6FC  93 C1 00 38 */	stw r30, 0x38(r1)
/* 802917C0 0028E700  7C 7E 1B 78 */	mr r30, r3
/* 802917C4 0028E704  80 64 01 88 */	lwz r3, 0x188(r4)
/* 802917C8 0028E708  88 03 00 24 */	lbz r0, 0x24(r3)
/* 802917CC 0028E70C  28 00 00 00 */	cmplwi r0, 0
/* 802917D0 0028E710  41 82 01 F4 */	beq .L_802919C4
/* 802917D4 0028E714  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 802917D8 0028E718  28 00 00 02 */	cmplwi r0, 2
/* 802917DC 0028E71C  40 82 00 1C */	bne .L_802917F8
/* 802917E0 0028E720  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 802917E4 0028E724  7F E3 FB 78 */	mr r3, r31
/* 802917E8 0028E728  54 00 02 D2 */	rlwinm r0, r0, 0, 0xb, 9
/* 802917EC 0028E72C  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 802917F0 0028E730  48 00 38 49 */	bl startJointShadow__Q34Game9SnakeCrow3ObjFv
/* 802917F4 0028E734  48 00 01 D0 */	b .L_802919C4
.L_802917F8:
/* 802917F8 0028E738  28 00 00 03 */	cmplwi r0, 3
/* 802917FC 0028E73C  40 82 00 10 */	bne .L_8029180C
/* 80291800 0028E740  7F E3 FB 78 */	mr r3, r31
/* 80291804 0028E744  48 00 38 BD */	bl startBossAttackBGM__Q34Game9SnakeCrow3ObjFv
/* 80291808 0028E748  48 00 01 BC */	b .L_802919C4
.L_8029180C:
/* 8029180C 0028E74C  28 00 00 04 */	cmplwi r0, 4
/* 80291810 0028E750  40 82 00 6C */	bne .L_8029187C
/* 80291814 0028E754  7F E3 FB 78 */	mr r3, r31
/* 80291818 0028E758  38 80 00 02 */	li r4, 2
/* 8029181C 0028E75C  48 00 3E 91 */	bl createAppearEffect__Q34Game9SnakeCrow3ObjFi
/* 80291820 0028E760  7F E4 FB 78 */	mr r4, r31
/* 80291824 0028E764  38 61 00 14 */	addi r3, r1, 0x14
/* 80291828 0028E768  81 9F 00 00 */	lwz r12, 0(r31)
/* 8029182C 0028E76C  81 8C 00 08 */	lwz r12, 8(r12)
/* 80291830 0028E770  7D 89 03 A6 */	mtctr r12
/* 80291834 0028E774  4E 80 04 21 */	bctrl 
/* 80291838 0028E778  C0 41 00 14 */	lfs f2, 0x14(r1)
/* 8029183C 0028E77C  38 A1 00 2C */	addi r5, r1, 0x2c
/* 80291840 0028E780  C0 21 00 18 */	lfs f1, 0x18(r1)
/* 80291844 0028E784  38 80 00 03 */	li r4, 3
/* 80291848 0028E788  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 8029184C 0028E78C  38 C0 00 02 */	li r6, 2
/* 80291850 0028E790  D0 41 00 2C */	stfs f2, 0x2c(r1)
/* 80291854 0028E794  80 6D 96 A0 */	lwz r3, cameraMgr__4Game@sda21(r13)
/* 80291858 0028E798  D0 21 00 30 */	stfs f1, 0x30(r1)
/* 8029185C 0028E79C  D0 01 00 34 */	stfs f0, 0x34(r1)
/* 80291860 0028E7A0  4B FC 09 DD */	bl "startVibration__Q24Game9CameraMgrFiR10Vector3<f>i"
/* 80291864 0028E7A4  80 6D 96 A8 */	lwz r3, rumbleMgr__4Game@sda21(r13)
/* 80291868 0028E7A8  38 A1 00 2C */	addi r5, r1, 0x2c
/* 8029186C 0028E7AC  38 80 00 0B */	li r4, 0xb
/* 80291870 0028E7B0  38 C0 00 02 */	li r6, 2
/* 80291874 0028E7B4  4B FC 1F 0D */	bl "startRumble__Q24Game9RumbleMgrFiR10Vector3<f>i"
/* 80291878 0028E7B8  48 00 01 4C */	b .L_802919C4
.L_8029187C:
/* 8029187C 0028E7BC  28 00 00 05 */	cmplwi r0, 5
/* 80291880 0028E7C0  40 82 00 5C */	bne .L_802918DC
/* 80291884 0028E7C4  81 84 00 00 */	lwz r12, 0(r4)
/* 80291888 0028E7C8  38 61 00 08 */	addi r3, r1, 8
/* 8029188C 0028E7CC  81 8C 00 08 */	lwz r12, 8(r12)
/* 80291890 0028E7D0  7D 89 03 A6 */	mtctr r12
/* 80291894 0028E7D4  4E 80 04 21 */	bctrl 
/* 80291898 0028E7D8  C0 41 00 08 */	lfs f2, 8(r1)
/* 8029189C 0028E7DC  38 A1 00 20 */	addi r5, r1, 0x20
/* 802918A0 0028E7E0  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 802918A4 0028E7E4  38 80 00 03 */	li r4, 3
/* 802918A8 0028E7E8  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 802918AC 0028E7EC  38 C0 00 02 */	li r6, 2
/* 802918B0 0028E7F0  D0 41 00 20 */	stfs f2, 0x20(r1)
/* 802918B4 0028E7F4  80 6D 96 A0 */	lwz r3, cameraMgr__4Game@sda21(r13)
/* 802918B8 0028E7F8  D0 21 00 24 */	stfs f1, 0x24(r1)
/* 802918BC 0028E7FC  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 802918C0 0028E800  4B FC 09 7D */	bl "startVibration__Q24Game9CameraMgrFiR10Vector3<f>i"
/* 802918C4 0028E804  80 6D 96 A8 */	lwz r3, rumbleMgr__4Game@sda21(r13)
/* 802918C8 0028E808  38 A1 00 20 */	addi r5, r1, 0x20
/* 802918CC 0028E80C  38 80 00 0B */	li r4, 0xb
/* 802918D0 0028E810  38 C0 00 02 */	li r6, 2
/* 802918D4 0028E814  4B FC 1E AD */	bl "startRumble__Q24Game9RumbleMgrFiR10Vector3<f>i"
/* 802918D8 0028E818  48 00 00 EC */	b .L_802919C4
.L_802918DC:
/* 802918DC 0028E81C  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 802918E0 0028E820  40 82 00 E4 */	bne .L_802919C4
/* 802918E4 0028E824  7F E3 FB 78 */	mr r3, r31
/* 802918E8 0028E828  48 00 23 49 */	bl setAttackPosition__Q34Game9SnakeCrow3ObjFv
/* 802918EC 0028E82C  C0 3F 02 00 */	lfs f1, 0x200(r31)
/* 802918F0 0028E830  C0 02 D6 CC */	lfs f0, lbl_8051BA2C@sda21(r2)
/* 802918F4 0028E834  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802918F8 0028E838  4C 40 13 82 */	cror 2, 0, 2
/* 802918FC 0028E83C  40 82 00 28 */	bne .L_80291924
/* 80291900 0028E840  7F C3 F3 78 */	mr r3, r30
/* 80291904 0028E844  7F E4 FB 78 */	mr r4, r31
/* 80291908 0028E848  81 9E 00 00 */	lwz r12, 0(r30)
/* 8029190C 0028E84C  38 A0 00 00 */	li r5, 0
/* 80291910 0028E850  38 C0 00 00 */	li r6, 0
/* 80291914 0028E854  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80291918 0028E858  7D 89 03 A6 */	mtctr r12
/* 8029191C 0028E85C  4E 80 04 21 */	bctrl 
/* 80291920 0028E860  48 00 00 A4 */	b .L_802919C4
.L_80291924:
/* 80291924 0028E864  7F E3 FB 78 */	mr r3, r31
/* 80291928 0028E868  38 80 00 05 */	li r4, 5
/* 8029192C 0028E86C  48 00 25 11 */	bl getAttackPiki__Q34Game9SnakeCrow3ObjFi
/* 80291930 0028E870  28 03 00 00 */	cmplwi r3, 0
/* 80291934 0028E874  40 82 00 18 */	bne .L_8029194C
/* 80291938 0028E878  7F E3 FB 78 */	mr r3, r31
/* 8029193C 0028E87C  38 80 00 05 */	li r4, 5
/* 80291940 0028E880  48 00 2A F1 */	bl getAttackNavi__Q34Game9SnakeCrow3ObjFi
/* 80291944 0028E884  28 03 00 00 */	cmplwi r3, 0
/* 80291948 0028E888  41 82 00 5C */	beq .L_802919A4
.L_8029194C:
/* 8029194C 0028E88C  7F E3 FB 78 */	mr r3, r31
/* 80291950 0028E890  48 00 31 7D */	bl getStickHeadPikmin__Q34Game9SnakeCrow3ObjFv
/* 80291954 0028E894  2C 03 00 00 */	cmpwi r3, 0
/* 80291958 0028E898  41 82 00 28 */	beq .L_80291980
/* 8029195C 0028E89C  7F C3 F3 78 */	mr r3, r30
/* 80291960 0028E8A0  7F E4 FB 78 */	mr r4, r31
/* 80291964 0028E8A4  81 9E 00 00 */	lwz r12, 0(r30)
/* 80291968 0028E8A8  38 A0 00 08 */	li r5, 8
/* 8029196C 0028E8AC  38 C0 00 00 */	li r6, 0
/* 80291970 0028E8B0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80291974 0028E8B4  7D 89 03 A6 */	mtctr r12
/* 80291978 0028E8B8  4E 80 04 21 */	bctrl 
/* 8029197C 0028E8BC  48 00 00 48 */	b .L_802919C4
.L_80291980:
/* 80291980 0028E8C0  7F C3 F3 78 */	mr r3, r30
/* 80291984 0028E8C4  7F E4 FB 78 */	mr r4, r31
/* 80291988 0028E8C8  81 9E 00 00 */	lwz r12, 0(r30)
/* 8029198C 0028E8CC  38 A0 00 06 */	li r5, 6
/* 80291990 0028E8D0  38 C0 00 00 */	li r6, 0
/* 80291994 0028E8D4  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80291998 0028E8D8  7D 89 03 A6 */	mtctr r12
/* 8029199C 0028E8DC  4E 80 04 21 */	bctrl 
/* 802919A0 0028E8E0  48 00 00 24 */	b .L_802919C4
.L_802919A4:
/* 802919A4 0028E8E4  7F C3 F3 78 */	mr r3, r30
/* 802919A8 0028E8E8  7F E4 FB 78 */	mr r4, r31
/* 802919AC 0028E8EC  81 9E 00 00 */	lwz r12, 0(r30)
/* 802919B0 0028E8F0  38 A0 00 05 */	li r5, 5
/* 802919B4 0028E8F4  38 C0 00 00 */	li r6, 0
/* 802919B8 0028E8F8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802919BC 0028E8FC  7D 89 03 A6 */	mtctr r12
/* 802919C0 0028E900  4E 80 04 21 */	bctrl 
.L_802919C4:
/* 802919C4 0028E904  80 01 00 44 */	lwz r0, 0x44(r1)
/* 802919C8 0028E908  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 802919CC 0028E90C  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 802919D0 0028E910  7C 08 03 A6 */	mtlr r0
/* 802919D4 0028E914  38 21 00 40 */	addi r1, r1, 0x40
/* 802919D8 0028E918  4E 80 00 20 */	blr 
.endfn exec__Q34Game9SnakeCrow12StateAppear2FPQ24Game9EnemyBase

.fn cleanup__Q34Game9SnakeCrow12StateAppear2FPQ24Game9EnemyBase, global
/* 802919DC 0028E91C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802919E0 0028E920  7C 08 02 A6 */	mflr r0
/* 802919E4 0028E924  90 01 00 14 */	stw r0, 0x14(r1)
/* 802919E8 0028E928  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802919EC 0028E92C  7C 9F 23 78 */	mr r31, r4
/* 802919F0 0028E930  7F E3 FB 78 */	mr r3, r31
/* 802919F4 0028E934  80 04 01 E0 */	lwz r0, 0x1e0(r4)
/* 802919F8 0028E938  54 00 02 D2 */	rlwinm r0, r0, 0, 0xb, 9
/* 802919FC 0028E93C  90 04 01 E0 */	stw r0, 0x1e0(r4)
/* 80291A00 0028E940  80 04 01 E0 */	lwz r0, 0x1e0(r4)
/* 80291A04 0028E944  60 00 00 40 */	ori r0, r0, 0x40
/* 80291A08 0028E948  90 04 01 E0 */	stw r0, 0x1e0(r4)
/* 80291A0C 0028E94C  48 00 3E FD */	bl startWaitEffect__Q34Game9SnakeCrow3ObjFv
/* 80291A10 0028E950  80 1F 02 80 */	lwz r0, 0x280(r31)
/* 80291A14 0028E954  28 00 00 00 */	cmplwi r0, 0
/* 80291A18 0028E958  41 82 00 18 */	beq .L_80291A30
/* 80291A1C 0028E95C  7F E3 FB 78 */	mr r3, r31
/* 80291A20 0028E960  81 9F 00 00 */	lwz r12, 0(r31)
/* 80291A24 0028E964  81 8C 02 50 */	lwz r12, 0x250(r12)
/* 80291A28 0028E968  7D 89 03 A6 */	mtctr r12
/* 80291A2C 0028E96C  4E 80 04 21 */	bctrl 
.L_80291A30:
/* 80291A30 0028E970  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80291A34 0028E974  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80291A38 0028E978  7C 08 03 A6 */	mtlr r0
/* 80291A3C 0028E97C  38 21 00 10 */	addi r1, r1, 0x10
/* 80291A40 0028E980  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game9SnakeCrow12StateAppear2FPQ24Game9EnemyBase

.fn init__Q34Game9SnakeCrow14StateDisappearFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 80291A44 0028E984  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 80291A48 0028E988  7C 08 02 A6 */	mflr r0
/* 80291A4C 0028E98C  90 01 00 64 */	stw r0, 0x64(r1)
/* 80291A50 0028E990  38 61 00 08 */	addi r3, r1, 8
/* 80291A54 0028E994  93 E1 00 5C */	stw r31, 0x5c(r1)
/* 80291A58 0028E998  7C 9F 23 78 */	mr r31, r4
/* 80291A5C 0028E99C  81 84 00 00 */	lwz r12, 0(r4)
/* 80291A60 0028E9A0  81 8C 00 08 */	lwz r12, 8(r12)
/* 80291A64 0028E9A4  7D 89 03 A6 */	mtctr r12
/* 80291A68 0028E9A8  4E 80 04 21 */	bctrl 
/* 80291A6C 0028E9AC  3C 60 80 4B */	lis r3, __vt__Q23efx5TBase@ha
/* 80291A70 0028E9B0  38 C0 00 00 */	li r6, 0
/* 80291A74 0028E9B4  38 03 A7 F8 */	addi r0, r3, __vt__Q23efx5TBase@l
/* 80291A78 0028E9B8  C0 41 00 08 */	lfs f2, 8(r1)
/* 80291A7C 0028E9BC  3C 60 80 4E */	lis r3, __vt__Q23efx8TSimple4@ha
/* 80291A80 0028E9C0  90 01 00 30 */	stw r0, 0x30(r1)
/* 80291A84 0028E9C4  38 03 6A 3C */	addi r0, r3, __vt__Q23efx8TSimple4@l
/* 80291A88 0028E9C8  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 80291A8C 0028E9CC  3C 60 80 4E */	lis r3, __vt__Q23efx14THebiAphd_base@ha
/* 80291A90 0028E9D0  90 01 00 30 */	stw r0, 0x30(r1)
/* 80291A94 0028E9D4  38 03 6E 30 */	addi r0, r3, __vt__Q23efx14THebiAphd_base@l
/* 80291A98 0028E9D8  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 80291A9C 0028E9DC  3C 80 80 4B */	lis r4, __vt__Q23efx3Arg@ha
/* 80291AA0 0028E9E0  3C 60 80 4D */	lis r3, __vt__Q23efx14THebiAphd_dive@ha
/* 80291AA4 0028E9E4  39 64 A7 EC */	addi r11, r4, __vt__Q23efx3Arg@l
/* 80291AA8 0028E9E8  39 40 00 A0 */	li r10, 0xa0
/* 80291AAC 0028E9EC  39 20 00 A1 */	li r9, 0xa1
/* 80291AB0 0028E9F0  39 00 00 A2 */	li r8, 0xa2
/* 80291AB4 0028E9F4  38 E0 00 A3 */	li r7, 0xa3
/* 80291AB8 0028E9F8  38 A0 00 1E */	li r5, 0x1e
/* 80291ABC 0028E9FC  90 01 00 30 */	stw r0, 0x30(r1)
/* 80291AC0 0028EA00  38 03 B3 44 */	addi r0, r3, __vt__Q23efx14THebiAphd_dive@l
/* 80291AC4 0028EA04  38 61 00 30 */	addi r3, r1, 0x30
/* 80291AC8 0028EA08  38 81 00 14 */	addi r4, r1, 0x14
/* 80291ACC 0028EA0C  D0 41 00 24 */	stfs f2, 0x24(r1)
/* 80291AD0 0028EA10  D0 21 00 28 */	stfs f1, 0x28(r1)
/* 80291AD4 0028EA14  D0 01 00 2C */	stfs f0, 0x2c(r1)
/* 80291AD8 0028EA18  91 61 00 14 */	stw r11, 0x14(r1)
/* 80291ADC 0028EA1C  D0 41 00 18 */	stfs f2, 0x18(r1)
/* 80291AE0 0028EA20  D0 21 00 1C */	stfs f1, 0x1c(r1)
/* 80291AE4 0028EA24  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 80291AE8 0028EA28  B1 41 00 34 */	sth r10, 0x34(r1)
/* 80291AEC 0028EA2C  B1 21 00 36 */	sth r9, 0x36(r1)
/* 80291AF0 0028EA30  B1 01 00 38 */	sth r8, 0x38(r1)
/* 80291AF4 0028EA34  B0 E1 00 3A */	sth r7, 0x3a(r1)
/* 80291AF8 0028EA38  90 C1 00 3C */	stw r6, 0x3c(r1)
/* 80291AFC 0028EA3C  90 C1 00 40 */	stw r6, 0x40(r1)
/* 80291B00 0028EA40  90 C1 00 44 */	stw r6, 0x44(r1)
/* 80291B04 0028EA44  90 C1 00 48 */	stw r6, 0x48(r1)
/* 80291B08 0028EA48  90 A1 00 4C */	stw r5, 0x4c(r1)
/* 80291B0C 0028EA4C  90 01 00 30 */	stw r0, 0x30(r1)
/* 80291B10 0028EA50  48 12 1F 99 */	bl create__Q23efx14THebiAphd_baseFPQ23efx3Arg
/* 80291B14 0028EA54  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 80291B18 0028EA58  7F E3 FB 78 */	mr r3, r31
/* 80291B1C 0028EA5C  C0 02 D6 CC */	lfs f0, lbl_8051BA2C@sda21(r2)
/* 80291B20 0028EA60  54 00 06 B0 */	rlwinm r0, r0, 0, 0x1a, 0x18
/* 80291B24 0028EA64  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 80291B28 0028EA68  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 80291B2C 0028EA6C  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 80291B30 0028EA70  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 80291B34 0028EA74  4B E6 FE 49 */	bl setEmotionCaution__Q24Game9EnemyBaseFv
/* 80291B38 0028EA78  7F E3 FB 78 */	mr r3, r31
/* 80291B3C 0028EA7C  38 80 00 03 */	li r4, 3
/* 80291B40 0028EA80  38 A0 00 00 */	li r5, 0
/* 80291B44 0028EA84  4B E7 34 C1 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 80291B48 0028EA88  80 6D 96 A0 */	lwz r3, cameraMgr__4Game@sda21(r13)
/* 80291B4C 0028EA8C  38 A1 00 24 */	addi r5, r1, 0x24
/* 80291B50 0028EA90  38 80 00 06 */	li r4, 6
/* 80291B54 0028EA94  38 C0 00 02 */	li r6, 2
/* 80291B58 0028EA98  4B FC 06 E5 */	bl "startVibration__Q24Game9CameraMgrFiR10Vector3<f>i"
/* 80291B5C 0028EA9C  80 6D 96 A8 */	lwz r3, rumbleMgr__4Game@sda21(r13)
/* 80291B60 0028EAA0  38 A1 00 24 */	addi r5, r1, 0x24
/* 80291B64 0028EAA4  38 80 00 0E */	li r4, 0xe
/* 80291B68 0028EAA8  38 C0 00 02 */	li r6, 2
/* 80291B6C 0028EAAC  4B FC 1C 15 */	bl "startRumble__Q24Game9RumbleMgrFiR10Vector3<f>i"
/* 80291B70 0028EAB0  80 01 00 64 */	lwz r0, 0x64(r1)
/* 80291B74 0028EAB4  83 E1 00 5C */	lwz r31, 0x5c(r1)
/* 80291B78 0028EAB8  7C 08 03 A6 */	mtlr r0
/* 80291B7C 0028EABC  38 21 00 60 */	addi r1, r1, 0x60
/* 80291B80 0028EAC0  4E 80 00 20 */	blr 
.endfn init__Q34Game9SnakeCrow14StateDisappearFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game9SnakeCrow14StateDisappearFPQ24Game9EnemyBase, global
/* 80291B84 0028EAC4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80291B88 0028EAC8  7C 08 02 A6 */	mflr r0
/* 80291B8C 0028EACC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80291B90 0028EAD0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80291B94 0028EAD4  7C 9F 23 78 */	mr r31, r4
/* 80291B98 0028EAD8  80 A4 01 88 */	lwz r5, 0x188(r4)
/* 80291B9C 0028EADC  88 05 00 24 */	lbz r0, 0x24(r5)
/* 80291BA0 0028EAE0  28 00 00 00 */	cmplwi r0, 0
/* 80291BA4 0028EAE4  41 82 00 D4 */	beq .L_80291C78
/* 80291BA8 0028EAE8  80 05 00 1C */	lwz r0, 0x1c(r5)
/* 80291BAC 0028EAEC  28 00 00 02 */	cmplwi r0, 2
/* 80291BB0 0028EAF0  40 82 00 78 */	bne .L_80291C28
/* 80291BB4 0028EAF4  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 80291BB8 0028EAF8  7F E3 FB 78 */	mr r3, r31
/* 80291BBC 0028EAFC  C0 82 D6 F0 */	lfs f4, lbl_8051BA50@sda21(r2)
/* 80291BC0 0028EB00  38 80 00 00 */	li r4, 0
/* 80291BC4 0028EB04  C0 25 05 14 */	lfs f1, 0x514(r5)
/* 80291BC8 0028EB08  C0 45 04 C4 */	lfs f2, 0x4c4(r5)
/* 80291BCC 0028EB0C  C0 65 04 EC */	lfs f3, 0x4ec(r5)
/* 80291BD0 0028EB10  4B E8 1B C1 */	bl "flickNearbyNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Navi>"
/* 80291BD4 0028EB14  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 80291BD8 0028EB18  7F E3 FB 78 */	mr r3, r31
/* 80291BDC 0028EB1C  C0 82 D6 F0 */	lfs f4, lbl_8051BA50@sda21(r2)
/* 80291BE0 0028EB20  38 80 00 00 */	li r4, 0
/* 80291BE4 0028EB24  C0 25 05 14 */	lfs f1, 0x514(r5)
/* 80291BE8 0028EB28  C0 45 04 C4 */	lfs f2, 0x4c4(r5)
/* 80291BEC 0028EB2C  C0 65 04 EC */	lfs f3, 0x4ec(r5)
/* 80291BF0 0028EB30  4B E8 18 E5 */	bl "flickNearbyPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Piki>"
/* 80291BF4 0028EB34  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 80291BF8 0028EB38  7F E3 FB 78 */	mr r3, r31
/* 80291BFC 0028EB3C  C0 82 D6 F0 */	lfs f4, lbl_8051BA50@sda21(r2)
/* 80291C00 0028EB40  38 80 00 00 */	li r4, 0
/* 80291C04 0028EB44  C0 25 05 3C */	lfs f1, 0x53c(r5)
/* 80291C08 0028EB48  C0 45 04 C4 */	lfs f2, 0x4c4(r5)
/* 80291C0C 0028EB4C  C0 65 04 EC */	lfs f3, 0x4ec(r5)
/* 80291C10 0028EB50  4B E8 15 0D */	bl "flickStickPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Piki>"
/* 80291C14 0028EB54  7F E3 FB 78 */	mr r3, r31
/* 80291C18 0028EB58  48 00 3D 49 */	bl finishWaitEffect__Q34Game9SnakeCrow3ObjFv
/* 80291C1C 0028EB5C  7F E3 FB 78 */	mr r3, r31
/* 80291C20 0028EB60  48 00 35 81 */	bl startBossFlickBGM__Q34Game9SnakeCrow3ObjFv
/* 80291C24 0028EB64  48 00 00 54 */	b .L_80291C78
.L_80291C28:
/* 80291C28 0028EB68  28 00 00 03 */	cmplwi r0, 3
/* 80291C2C 0028EB6C  40 82 00 2C */	bne .L_80291C58
/* 80291C30 0028EB70  38 00 00 01 */	li r0, 1
/* 80291C34 0028EB74  C0 02 D6 CC */	lfs f0, lbl_8051BA2C@sda21(r2)
/* 80291C38 0028EB78  98 1F 02 C0 */	stb r0, 0x2c0(r31)
/* 80291C3C 0028EB7C  7F E3 FB 78 */	mr r3, r31
/* 80291C40 0028EB80  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 80291C44 0028EB84  64 00 00 40 */	oris r0, r0, 0x40
/* 80291C48 0028EB88  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 80291C4C 0028EB8C  D0 1F 02 0C */	stfs f0, 0x20c(r31)
/* 80291C50 0028EB90  48 00 34 0D */	bl finishJointShadow__Q34Game9SnakeCrow3ObjFv
/* 80291C54 0028EB94  48 00 00 24 */	b .L_80291C78
.L_80291C58:
/* 80291C58 0028EB98  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 80291C5C 0028EB9C  40 82 00 1C */	bne .L_80291C78
/* 80291C60 0028EBA0  81 83 00 00 */	lwz r12, 0(r3)
/* 80291C64 0028EBA4  38 A0 00 01 */	li r5, 1
/* 80291C68 0028EBA8  38 C0 00 00 */	li r6, 0
/* 80291C6C 0028EBAC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80291C70 0028EBB0  7D 89 03 A6 */	mtctr r12
/* 80291C74 0028EBB4  4E 80 04 21 */	bctrl 
.L_80291C78:
/* 80291C78 0028EBB8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80291C7C 0028EBBC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80291C80 0028EBC0  7C 08 03 A6 */	mtlr r0
/* 80291C84 0028EBC4  38 21 00 10 */	addi r1, r1, 0x10
/* 80291C88 0028EBC8  4E 80 00 20 */	blr 
.endfn exec__Q34Game9SnakeCrow14StateDisappearFPQ24Game9EnemyBase

.fn cleanup__Q34Game9SnakeCrow14StateDisappearFPQ24Game9EnemyBase, global
/* 80291C8C 0028EBCC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80291C90 0028EBD0  7C 08 02 A6 */	mflr r0
/* 80291C94 0028EBD4  C0 22 D6 DC */	lfs f1, lbl_8051BA3C@sda21(r2)
/* 80291C98 0028EBD8  90 01 00 14 */	stw r0, 0x14(r1)
/* 80291C9C 0028EBDC  C0 42 D6 F4 */	lfs f2, lbl_8051BA54@sda21(r2)
/* 80291CA0 0028EBE0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80291CA4 0028EBE4  7C 9F 23 78 */	mr r31, r4
/* 80291CA8 0028EBE8  C0 62 D6 CC */	lfs f3, lbl_8051BA2C@sda21(r2)
/* 80291CAC 0028EBEC  7F E3 FB 78 */	mr r3, r31
/* 80291CB0 0028EBF0  C0 82 D6 F0 */	lfs f4, lbl_8051BA50@sda21(r2)
/* 80291CB4 0028EBF4  38 80 00 00 */	li r4, 0
/* 80291CB8 0028EBF8  4B E8 14 65 */	bl "flickStickPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Piki>"
/* 80291CBC 0028EBFC  38 00 00 00 */	li r0, 0
/* 80291CC0 0028EC00  98 1F 02 C0 */	stb r0, 0x2c0(r31)
/* 80291CC4 0028EC04  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 80291CC8 0028EC08  54 00 02 90 */	rlwinm r0, r0, 0, 0xa, 8
/* 80291CCC 0028EC0C  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 80291CD0 0028EC10  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 80291CD4 0028EC14  60 00 00 40 */	ori r0, r0, 0x40
/* 80291CD8 0028EC18  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 80291CDC 0028EC1C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80291CE0 0028EC20  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80291CE4 0028EC24  7C 08 03 A6 */	mtlr r0
/* 80291CE8 0028EC28  38 21 00 10 */	addi r1, r1, 0x10
/* 80291CEC 0028EC2C  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game9SnakeCrow14StateDisappearFPQ24Game9EnemyBase

.fn init__Q34Game9SnakeCrow9StateWaitFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 80291CF0 0028EC30  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80291CF4 0028EC34  7C 08 02 A6 */	mflr r0
/* 80291CF8 0028EC38  C0 02 D6 CC */	lfs f0, lbl_8051BA2C@sda21(r2)
/* 80291CFC 0028EC3C  7C 83 23 78 */	mr r3, r4
/* 80291D00 0028EC40  90 01 00 14 */	stw r0, 0x14(r1)
/* 80291D04 0028EC44  38 00 00 00 */	li r0, 0
/* 80291D08 0028EC48  38 A0 00 00 */	li r5, 0
/* 80291D0C 0028EC4C  D0 04 02 C4 */	stfs f0, 0x2c4(r4)
/* 80291D10 0028EC50  38 80 00 09 */	li r4, 9
/* 80291D14 0028EC54  90 03 02 30 */	stw r0, 0x230(r3)
/* 80291D18 0028EC58  D0 03 01 D4 */	stfs f0, 0x1d4(r3)
/* 80291D1C 0028EC5C  D0 03 01 D8 */	stfs f0, 0x1d8(r3)
/* 80291D20 0028EC60  D0 03 01 DC */	stfs f0, 0x1dc(r3)
/* 80291D24 0028EC64  4B E7 32 E1 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 80291D28 0028EC68  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80291D2C 0028EC6C  7C 08 03 A6 */	mtlr r0
/* 80291D30 0028EC70  38 21 00 10 */	addi r1, r1, 0x10
/* 80291D34 0028EC74  4E 80 00 20 */	blr 
.endfn init__Q34Game9SnakeCrow9StateWaitFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game9SnakeCrow9StateWaitFPQ24Game9EnemyBase, global
/* 80291D38 0028EC78  94 21 FE C0 */	stwu r1, -0x140(r1)
/* 80291D3C 0028EC7C  7C 08 02 A6 */	mflr r0
/* 80291D40 0028EC80  90 01 01 44 */	stw r0, 0x144(r1)
/* 80291D44 0028EC84  DB E1 01 30 */	stfd f31, 0x130(r1)
/* 80291D48 0028EC88  F3 E1 01 38 */	psq_st f31, 312(r1), 0, qr0
/* 80291D4C 0028EC8C  DB C1 01 20 */	stfd f30, 0x120(r1)
/* 80291D50 0028EC90  F3 C1 01 28 */	psq_st f30, 296(r1), 0, qr0
/* 80291D54 0028EC94  DB A1 01 10 */	stfd f29, 0x110(r1)
/* 80291D58 0028EC98  F3 A1 01 18 */	psq_st f29, 280(r1), 0, qr0
/* 80291D5C 0028EC9C  DB 81 01 00 */	stfd f28, 0x100(r1)
/* 80291D60 0028ECA0  F3 81 01 08 */	psq_st f28, 264(r1), 0, qr0
/* 80291D64 0028ECA4  DB 61 00 F0 */	stfd f27, 0xf0(r1)
/* 80291D68 0028ECA8  F3 61 00 F8 */	psq_st f27, 248(r1), 0, qr0
/* 80291D6C 0028ECAC  DB 41 00 E0 */	stfd f26, 0xe0(r1)
/* 80291D70 0028ECB0  F3 41 00 E8 */	psq_st f26, 232(r1), 0, qr0
/* 80291D74 0028ECB4  DB 21 00 D0 */	stfd f25, 0xd0(r1)
/* 80291D78 0028ECB8  F3 21 00 D8 */	psq_st f25, 216(r1), 0, qr0
/* 80291D7C 0028ECBC  DB 01 00 C0 */	stfd f24, 0xc0(r1)
/* 80291D80 0028ECC0  F3 01 00 C8 */	psq_st f24, 200(r1), 0, qr0
/* 80291D84 0028ECC4  93 E1 00 BC */	stw r31, 0xbc(r1)
/* 80291D88 0028ECC8  93 C1 00 B8 */	stw r30, 0xb8(r1)
/* 80291D8C 0028ECCC  93 A1 00 B4 */	stw r29, 0xb4(r1)
/* 80291D90 0028ECD0  83 A4 02 30 */	lwz r29, 0x230(r4)
/* 80291D94 0028ECD4  7C 7E 1B 78 */	mr r30, r3
/* 80291D98 0028ECD8  7C 9F 23 78 */	mr r31, r4
/* 80291D9C 0028ECDC  28 1D 00 00 */	cmplwi r29, 0
/* 80291DA0 0028ECE0  41 82 02 88 */	beq .L_80292028
/* 80291DA4 0028ECE4  7F A3 EB 78 */	mr r3, r29
/* 80291DA8 0028ECE8  81 9D 00 00 */	lwz r12, 0(r29)
/* 80291DAC 0028ECEC  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 80291DB0 0028ECF0  7D 89 03 A6 */	mtctr r12
/* 80291DB4 0028ECF4  4E 80 04 21 */	bctrl 
/* 80291DB8 0028ECF8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80291DBC 0028ECFC  41 82 02 48 */	beq .L_80292004
/* 80291DC0 0028ED00  7F A3 EB 78 */	mr r3, r29
/* 80291DC4 0028ED04  4B F0 D7 C5 */	bl isStickToMouth__Q24Game8CreatureFv
/* 80291DC8 0028ED08  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80291DCC 0028ED0C  40 82 02 38 */	bne .L_80292004
/* 80291DD0 0028ED10  80 1D 00 F4 */	lwz r0, 0xf4(r29)
/* 80291DD4 0028ED14  7C 00 F8 40 */	cmplw r0, r31
/* 80291DD8 0028ED18  41 82 02 2C */	beq .L_80292004
/* 80291DDC 0028ED1C  7F A4 EB 78 */	mr r4, r29
/* 80291DE0 0028ED20  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 80291DE4 0028ED24  81 9D 00 00 */	lwz r12, 0(r29)
/* 80291DE8 0028ED28  38 61 00 20 */	addi r3, r1, 0x20
/* 80291DEC 0028ED2C  C3 85 04 24 */	lfs f28, 0x424(r5)
/* 80291DF0 0028ED30  81 8C 00 08 */	lwz r12, 8(r12)
/* 80291DF4 0028ED34  C3 A5 03 FC */	lfs f29, 0x3fc(r5)
/* 80291DF8 0028ED38  C3 C5 03 D4 */	lfs f30, 0x3d4(r5)
/* 80291DFC 0028ED3C  C3 E5 03 AC */	lfs f31, 0x3ac(r5)
/* 80291E00 0028ED40  7D 89 03 A6 */	mtctr r12
/* 80291E04 0028ED44  4E 80 04 21 */	bctrl 
/* 80291E08 0028ED48  7F E4 FB 78 */	mr r4, r31
/* 80291E0C 0028ED4C  C0 41 00 20 */	lfs f2, 0x20(r1)
/* 80291E10 0028ED50  81 9F 00 00 */	lwz r12, 0(r31)
/* 80291E14 0028ED54  38 61 00 2C */	addi r3, r1, 0x2c
/* 80291E18 0028ED58  C0 21 00 24 */	lfs f1, 0x24(r1)
/* 80291E1C 0028ED5C  C0 01 00 28 */	lfs f0, 0x28(r1)
/* 80291E20 0028ED60  81 8C 00 08 */	lwz r12, 8(r12)
/* 80291E24 0028ED64  D0 41 00 08 */	stfs f2, 8(r1)
/* 80291E28 0028ED68  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 80291E2C 0028ED6C  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 80291E30 0028ED70  7D 89 03 A6 */	mtctr r12
/* 80291E34 0028ED74  4E 80 04 21 */	bctrl 
/* 80291E38 0028ED78  C0 A1 00 2C */	lfs f5, 0x2c(r1)
/* 80291E3C 0028ED7C  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 80291E40 0028ED80  C0 61 00 34 */	lfs f3, 0x34(r1)
/* 80291E44 0028ED84  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 80291E48 0028ED88  C0 21 00 08 */	lfs f1, 8(r1)
/* 80291E4C 0028ED8C  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 80291E50 0028ED90  C0 81 00 30 */	lfs f4, 0x30(r1)
/* 80291E54 0028ED94  EC 21 28 28 */	fsubs f1, f1, f5
/* 80291E58 0028ED98  EC 40 18 28 */	fsubs f2, f0, f3
/* 80291E5C 0028ED9C  D0 A1 00 14 */	stfs f5, 0x14(r1)
/* 80291E60 0028EDA0  D0 81 00 18 */	stfs f4, 0x18(r1)
/* 80291E64 0028EDA4  D0 61 00 1C */	stfs f3, 0x1c(r1)
/* 80291E68 0028EDA8  4B DA 32 A1 */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 80291E6C 0028EDAC  48 17 FD 65 */	bl roundAng__Ff
/* 80291E70 0028EDB0  81 9F 00 00 */	lwz r12, 0(r31)
/* 80291E74 0028EDB4  FF 00 08 90 */	fmr f24, f1
/* 80291E78 0028EDB8  7F E3 FB 78 */	mr r3, r31
/* 80291E7C 0028EDBC  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 80291E80 0028EDC0  7D 89 03 A6 */	mtctr r12
/* 80291E84 0028EDC4  4E 80 04 21 */	bctrl 
/* 80291E88 0028EDC8  FC 40 08 90 */	fmr f2, f1
/* 80291E8C 0028EDCC  FC 20 C0 90 */	fmr f1, f24
/* 80291E90 0028EDD0  48 17 FD 6D */	bl angDist__Fff
/* 80291E94 0028EDD4  7F E4 FB 78 */	mr r4, r31
/* 80291E98 0028EDD8  FF 40 08 90 */	fmr f26, f1
/* 80291E9C 0028EDDC  81 9F 00 00 */	lwz r12, 0(r31)
/* 80291EA0 0028EDE0  38 61 00 74 */	addi r3, r1, 0x74
/* 80291EA4 0028EDE4  81 8C 00 08 */	lwz r12, 8(r12)
/* 80291EA8 0028EDE8  7D 89 03 A6 */	mtctr r12
/* 80291EAC 0028EDEC  4E 80 04 21 */	bctrl 
/* 80291EB0 0028EDF0  7F A4 EB 78 */	mr r4, r29
/* 80291EB4 0028EDF4  38 61 00 68 */	addi r3, r1, 0x68
/* 80291EB8 0028EDF8  81 9D 00 00 */	lwz r12, 0(r29)
/* 80291EBC 0028EDFC  C3 61 00 74 */	lfs f27, 0x74(r1)
/* 80291EC0 0028EE00  81 8C 00 08 */	lwz r12, 8(r12)
/* 80291EC4 0028EE04  7D 89 03 A6 */	mtctr r12
/* 80291EC8 0028EE08  4E 80 04 21 */	bctrl 
/* 80291ECC 0028EE0C  7F E4 FB 78 */	mr r4, r31
/* 80291ED0 0028EE10  C0 01 00 68 */	lfs f0, 0x68(r1)
/* 80291ED4 0028EE14  81 9F 00 00 */	lwz r12, 0(r31)
/* 80291ED8 0028EE18  38 61 00 8C */	addi r3, r1, 0x8c
/* 80291EDC 0028EE1C  EF 00 D8 28 */	fsubs f24, f0, f27
/* 80291EE0 0028EE20  81 8C 00 08 */	lwz r12, 8(r12)
/* 80291EE4 0028EE24  7D 89 03 A6 */	mtctr r12
/* 80291EE8 0028EE28  4E 80 04 21 */	bctrl 
/* 80291EEC 0028EE2C  7F A4 EB 78 */	mr r4, r29
/* 80291EF0 0028EE30  38 61 00 80 */	addi r3, r1, 0x80
/* 80291EF4 0028EE34  81 9D 00 00 */	lwz r12, 0(r29)
/* 80291EF8 0028EE38  C3 61 00 90 */	lfs f27, 0x90(r1)
/* 80291EFC 0028EE3C  81 8C 00 08 */	lwz r12, 8(r12)
/* 80291F00 0028EE40  7D 89 03 A6 */	mtctr r12
/* 80291F04 0028EE44  4E 80 04 21 */	bctrl 
/* 80291F08 0028EE48  7F E4 FB 78 */	mr r4, r31
/* 80291F0C 0028EE4C  C0 01 00 84 */	lfs f0, 0x84(r1)
/* 80291F10 0028EE50  81 9F 00 00 */	lwz r12, 0(r31)
/* 80291F14 0028EE54  38 61 00 A4 */	addi r3, r1, 0xa4
/* 80291F18 0028EE58  EF 20 D8 28 */	fsubs f25, f0, f27
/* 80291F1C 0028EE5C  81 8C 00 08 */	lwz r12, 8(r12)
/* 80291F20 0028EE60  7D 89 03 A6 */	mtctr r12
/* 80291F24 0028EE64  4E 80 04 21 */	bctrl 
/* 80291F28 0028EE68  7F A4 EB 78 */	mr r4, r29
/* 80291F2C 0028EE6C  38 61 00 98 */	addi r3, r1, 0x98
/* 80291F30 0028EE70  81 9D 00 00 */	lwz r12, 0(r29)
/* 80291F34 0028EE74  C3 61 00 AC */	lfs f27, 0xac(r1)
/* 80291F38 0028EE78  81 8C 00 08 */	lwz r12, 8(r12)
/* 80291F3C 0028EE7C  7D 89 03 A6 */	mtctr r12
/* 80291F40 0028EE80  4E 80 04 21 */	bctrl 
/* 80291F44 0028EE84  C0 01 00 A0 */	lfs f0, 0xa0(r1)
/* 80291F48 0028EE88  EC 3F 07 F2 */	fmuls f1, f31, f31
/* 80291F4C 0028EE8C  EC 5E 07 B2 */	fmuls f2, f30, f30
/* 80291F50 0028EE90  38 60 00 01 */	li r3, 1
/* 80291F54 0028EE94  EC 00 D8 28 */	fsubs f0, f0, f27
/* 80291F58 0028EE98  38 80 00 00 */	li r4, 0
/* 80291F5C 0028EE9C  EC 00 00 32 */	fmuls f0, f0, f0
/* 80291F60 0028EEA0  EC 18 06 3A */	fmadds f0, f24, f24, f0
/* 80291F64 0028EEA4  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 80291F68 0028EEA8  40 81 00 30 */	ble .L_80291F98
/* 80291F6C 0028EEAC  FC 00 10 40 */	fcmpo cr0, f0, f2
/* 80291F70 0028EEB0  7C 80 23 78 */	mr r0, r4
/* 80291F74 0028EEB4  40 81 00 18 */	ble .L_80291F8C
/* 80291F78 0028EEB8  FC 00 CA 10 */	fabs f0, f25
/* 80291F7C 0028EEBC  FC 00 00 18 */	frsp f0, f0
/* 80291F80 0028EEC0  FC 00 E8 40 */	fcmpo cr0, f0, f29
/* 80291F84 0028EEC4  40 80 00 08 */	bge .L_80291F8C
/* 80291F88 0028EEC8  7C 60 1B 78 */	mr r0, r3
.L_80291F8C:
/* 80291F8C 0028EECC  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 80291F90 0028EED0  41 82 00 08 */	beq .L_80291F98
/* 80291F94 0028EED4  38 80 00 01 */	li r4, 1
.L_80291F98:
/* 80291F98 0028EED8  54 80 06 3F */	clrlwi. r0, r4, 0x18
/* 80291F9C 0028EEDC  40 82 00 34 */	bne .L_80291FD0
/* 80291FA0 0028EEE0  C0 02 D6 FC */	lfs f0, lbl_8051BA5C@sda21(r2)
/* 80291FA4 0028EEE4  FC 40 D2 10 */	fabs f2, f26
/* 80291FA8 0028EEE8  C0 22 D6 F8 */	lfs f1, lbl_8051BA58@sda21(r2)
/* 80291FAC 0028EEEC  EC 00 07 32 */	fmuls f0, f0, f28
/* 80291FB0 0028EEF0  FC 40 10 18 */	frsp f2, f2
/* 80291FB4 0028EEF4  EC 01 00 32 */	fmuls f0, f1, f0
/* 80291FB8 0028EEF8  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80291FBC 0028EEFC  4C 40 13 82 */	cror 2, 0, 2
/* 80291FC0 0028EF00  7C 00 00 26 */	mfcr r0
/* 80291FC4 0028EF04  54 00 1F FF */	rlwinm. r0, r0, 3, 0x1f, 0x1f
/* 80291FC8 0028EF08  41 82 00 08 */	beq .L_80291FD0
/* 80291FCC 0028EF0C  38 60 00 00 */	li r3, 0
.L_80291FD0:
/* 80291FD0 0028EF10  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80291FD4 0028EF14  41 82 00 0C */	beq .L_80291FE0
/* 80291FD8 0028EF18  38 60 00 00 */	li r3, 0
/* 80291FDC 0028EF1C  48 00 00 6C */	b .L_80292048
.L_80291FE0:
/* 80291FE0 0028EF20  80 FF 00 C0 */	lwz r7, 0xc0(r31)
/* 80291FE4 0028EF24  7F E3 FB 78 */	mr r3, r31
/* 80291FE8 0028EF28  38 80 00 00 */	li r4, 0
/* 80291FEC 0028EF2C  38 A0 00 00 */	li r5, 0
/* 80291FF0 0028EF30  C0 27 04 24 */	lfs f1, 0x424(r7)
/* 80291FF4 0028EF34  38 C0 00 00 */	li r6, 0
/* 80291FF8 0028EF38  C0 47 03 D4 */	lfs f2, 0x3d4(r7)
/* 80291FFC 0028EF3C  4B E8 10 55 */	bl "getNearestPikminOrNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffPfP23Condition<Q24Game4Navi>P23Condition<Q24Game4Piki>"
/* 80292000 0028EF40  48 00 00 48 */	b .L_80292048
.L_80292004:
/* 80292004 0028EF44  80 FF 00 C0 */	lwz r7, 0xc0(r31)
/* 80292008 0028EF48  7F E3 FB 78 */	mr r3, r31
/* 8029200C 0028EF4C  38 80 00 00 */	li r4, 0
/* 80292010 0028EF50  38 A0 00 00 */	li r5, 0
/* 80292014 0028EF54  C0 27 04 24 */	lfs f1, 0x424(r7)
/* 80292018 0028EF58  38 C0 00 00 */	li r6, 0
/* 8029201C 0028EF5C  C0 47 03 D4 */	lfs f2, 0x3d4(r7)
/* 80292020 0028EF60  4B E8 10 31 */	bl "getNearestPikminOrNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffPfP23Condition<Q24Game4Navi>P23Condition<Q24Game4Piki>"
/* 80292024 0028EF64  48 00 00 24 */	b .L_80292048
.L_80292028:
/* 80292028 0028EF68  80 FF 00 C0 */	lwz r7, 0xc0(r31)
/* 8029202C 0028EF6C  7F E3 FB 78 */	mr r3, r31
/* 80292030 0028EF70  38 80 00 00 */	li r4, 0
/* 80292034 0028EF74  38 A0 00 00 */	li r5, 0
/* 80292038 0028EF78  C0 27 04 24 */	lfs f1, 0x424(r7)
/* 8029203C 0028EF7C  38 C0 00 00 */	li r6, 0
/* 80292040 0028EF80  C0 47 03 D4 */	lfs f2, 0x3d4(r7)
/* 80292044 0028EF84  4B E8 10 0D */	bl "getNearestPikminOrNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffPfP23Condition<Q24Game4Navi>P23Condition<Q24Game4Piki>"
.L_80292048:
/* 80292048 0028EF88  28 03 00 00 */	cmplwi r3, 0
/* 8029204C 0028EF8C  41 82 01 80 */	beq .L_802921CC
/* 80292050 0028EF90  C0 02 D6 CC */	lfs f0, lbl_8051BA2C@sda21(r2)
/* 80292054 0028EF94  7C 64 1B 78 */	mr r4, r3
/* 80292058 0028EF98  38 61 00 50 */	addi r3, r1, 0x50
/* 8029205C 0028EF9C  D0 1F 02 C4 */	stfs f0, 0x2c4(r31)
/* 80292060 0028EFA0  81 84 00 00 */	lwz r12, 0(r4)
/* 80292064 0028EFA4  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 80292068 0028EFA8  81 8C 00 08 */	lwz r12, 8(r12)
/* 8029206C 0028EFAC  C3 65 03 34 */	lfs f27, 0x334(r5)
/* 80292070 0028EFB0  C3 45 03 0C */	lfs f26, 0x30c(r5)
/* 80292074 0028EFB4  7D 89 03 A6 */	mtctr r12
/* 80292078 0028EFB8  4E 80 04 21 */	bctrl 
/* 8029207C 0028EFBC  7F E4 FB 78 */	mr r4, r31
/* 80292080 0028EFC0  C0 41 00 50 */	lfs f2, 0x50(r1)
/* 80292084 0028EFC4  81 9F 00 00 */	lwz r12, 0(r31)
/* 80292088 0028EFC8  38 61 00 5C */	addi r3, r1, 0x5c
/* 8029208C 0028EFCC  C0 21 00 54 */	lfs f1, 0x54(r1)
/* 80292090 0028EFD0  C0 01 00 58 */	lfs f0, 0x58(r1)
/* 80292094 0028EFD4  81 8C 00 08 */	lwz r12, 8(r12)
/* 80292098 0028EFD8  D0 41 00 38 */	stfs f2, 0x38(r1)
/* 8029209C 0028EFDC  D0 21 00 3C */	stfs f1, 0x3c(r1)
/* 802920A0 0028EFE0  D0 01 00 40 */	stfs f0, 0x40(r1)
/* 802920A4 0028EFE4  7D 89 03 A6 */	mtctr r12
/* 802920A8 0028EFE8  4E 80 04 21 */	bctrl 
/* 802920AC 0028EFEC  C0 A1 00 5C */	lfs f5, 0x5c(r1)
/* 802920B0 0028EFF0  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 802920B4 0028EFF4  C0 61 00 64 */	lfs f3, 0x64(r1)
/* 802920B8 0028EFF8  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 802920BC 0028EFFC  C0 21 00 38 */	lfs f1, 0x38(r1)
/* 802920C0 0028F000  C0 01 00 40 */	lfs f0, 0x40(r1)
/* 802920C4 0028F004  C0 81 00 60 */	lfs f4, 0x60(r1)
/* 802920C8 0028F008  EC 21 28 28 */	fsubs f1, f1, f5
/* 802920CC 0028F00C  EC 40 18 28 */	fsubs f2, f0, f3
/* 802920D0 0028F010  D0 A1 00 44 */	stfs f5, 0x44(r1)
/* 802920D4 0028F014  D0 81 00 48 */	stfs f4, 0x48(r1)
/* 802920D8 0028F018  D0 61 00 4C */	stfs f3, 0x4c(r1)
/* 802920DC 0028F01C  4B DA 30 2D */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 802920E0 0028F020  48 17 FA F1 */	bl roundAng__Ff
/* 802920E4 0028F024  81 9F 00 00 */	lwz r12, 0(r31)
/* 802920E8 0028F028  FF 00 08 90 */	fmr f24, f1
/* 802920EC 0028F02C  7F E3 FB 78 */	mr r3, r31
/* 802920F0 0028F030  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 802920F4 0028F034  7D 89 03 A6 */	mtctr r12
/* 802920F8 0028F038  4E 80 04 21 */	bctrl 
/* 802920FC 0028F03C  FC 40 08 90 */	fmr f2, f1
/* 80292100 0028F040  FC 20 C0 90 */	fmr f1, f24
/* 80292104 0028F044  48 17 FA F9 */	bl angDist__Fff
/* 80292108 0028F048  FF 80 08 90 */	fmr f28, f1
/* 8029210C 0028F04C  C0 02 D6 FC */	lfs f0, lbl_8051BA5C@sda21(r2)
/* 80292110 0028F050  C0 22 D6 F8 */	lfs f1, lbl_8051BA58@sda21(r2)
/* 80292114 0028F054  EC 00 06 F2 */	fmuls f0, f0, f27
/* 80292118 0028F058  EF 1C 06 B2 */	fmuls f24, f28, f26
/* 8029211C 0028F05C  EC 21 00 32 */	fmuls f1, f1, f0
/* 80292120 0028F060  FC 00 C2 10 */	fabs f0, f24
/* 80292124 0028F064  FC 00 00 18 */	frsp f0, f0
/* 80292128 0028F068  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 8029212C 0028F06C  40 81 00 1C */	ble .L_80292148
/* 80292130 0028F070  C0 02 D6 CC */	lfs f0, lbl_8051BA2C@sda21(r2)
/* 80292134 0028F074  FC 18 00 40 */	fcmpo cr0, f24, f0
/* 80292138 0028F078  40 81 00 0C */	ble .L_80292144
/* 8029213C 0028F07C  FF 00 08 90 */	fmr f24, f1
/* 80292140 0028F080  48 00 00 08 */	b .L_80292148
.L_80292144:
/* 80292144 0028F084  FF 00 08 50 */	fneg f24, f1
.L_80292148:
/* 80292148 0028F088  7F E3 FB 78 */	mr r3, r31
/* 8029214C 0028F08C  81 9F 00 00 */	lwz r12, 0(r31)
/* 80292150 0028F090  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 80292154 0028F094  7D 89 03 A6 */	mtctr r12
/* 80292158 0028F098  4E 80 04 21 */	bctrl 
/* 8029215C 0028F09C  EC 38 08 2A */	fadds f1, f24, f1
/* 80292160 0028F0A0  48 17 FA 71 */	bl roundAng__Ff
/* 80292164 0028F0A4  FC 60 E2 10 */	fabs f3, f28
/* 80292168 0028F0A8  D0 3F 01 FC */	stfs f1, 0x1fc(r31)
/* 8029216C 0028F0AC  C0 02 D7 00 */	lfs f0, lbl_8051BA60@sda21(r2)
/* 80292170 0028F0B0  C0 5F 01 FC */	lfs f2, 0x1fc(r31)
/* 80292174 0028F0B4  FC 20 18 18 */	frsp f1, f3
/* 80292178 0028F0B8  D0 5F 01 A8 */	stfs f2, 0x1a8(r31)
/* 8029217C 0028F0BC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80292180 0028F0C0  4C 40 13 82 */	cror 2, 0, 2
/* 80292184 0028F0C4  40 82 00 10 */	bne .L_80292194
/* 80292188 0028F0C8  7F E3 FB 78 */	mr r3, r31
/* 8029218C 0028F0CC  48 00 37 4D */	bl finishRotateEffect__Q34Game9SnakeCrow3ObjFv
/* 80292190 0028F0D0  48 00 00 50 */	b .L_802921E0
.L_80292194:
/* 80292194 0028F0D4  7F E3 FB 78 */	mr r3, r31
/* 80292198 0028F0D8  48 00 36 E9 */	bl startRotateEffect__Q34Game9SnakeCrow3ObjFv
/* 8029219C 0028F0DC  7F E3 FB 78 */	mr r3, r31
/* 802921A0 0028F0E0  81 9F 00 00 */	lwz r12, 0(r31)
/* 802921A4 0028F0E4  81 8C 00 F4 */	lwz r12, 0xf4(r12)
/* 802921A8 0028F0E8  7D 89 03 A6 */	mtctr r12
/* 802921AC 0028F0EC  4E 80 04 21 */	bctrl 
/* 802921B0 0028F0F0  81 83 00 00 */	lwz r12, 0(r3)
/* 802921B4 0028F0F4  38 80 50 33 */	li r4, 0x5033
/* 802921B8 0028F0F8  38 A0 00 00 */	li r5, 0
/* 802921BC 0028F0FC  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 802921C0 0028F100  7D 89 03 A6 */	mtctr r12
/* 802921C4 0028F104  4E 80 04 21 */	bctrl 
/* 802921C8 0028F108  48 00 00 18 */	b .L_802921E0
.L_802921CC:
/* 802921CC 0028F10C  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 802921D0 0028F110  C0 3F 02 C4 */	lfs f1, 0x2c4(r31)
/* 802921D4 0028F114  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 802921D8 0028F118  EC 01 00 2A */	fadds f0, f1, f0
/* 802921DC 0028F11C  D0 1F 02 C4 */	stfs f0, 0x2c4(r31)
.L_802921E0:
/* 802921E0 0028F120  7F E3 FB 78 */	mr r3, r31
/* 802921E4 0028F124  4B E7 51 1D */	bl isFinishMotion__Q24Game9EnemyBaseFv
/* 802921E8 0028F128  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802921EC 0028F12C  40 82 00 70 */	bne .L_8029225C
/* 802921F0 0028F130  C0 3F 02 00 */	lfs f1, 0x200(r31)
/* 802921F4 0028F134  C0 02 D6 CC */	lfs f0, lbl_8051BA2C@sda21(r2)
/* 802921F8 0028F138  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802921FC 0028F13C  4C 40 13 82 */	cror 2, 0, 2
/* 80292200 0028F140  41 82 00 54 */	beq .L_80292254
/* 80292204 0028F144  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 80292208 0028F148  C0 3F 02 C4 */	lfs f1, 0x2c4(r31)
/* 8029220C 0028F14C  C0 03 08 44 */	lfs f0, 0x844(r3)
/* 80292210 0028F150  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80292214 0028F154  41 81 00 40 */	bgt .L_80292254
/* 80292218 0028F158  7F E3 FB 78 */	mr r3, r31
/* 8029221C 0028F15C  38 80 00 00 */	li r4, 0
/* 80292220 0028F160  4B E8 24 39 */	bl isStartFlick__Q24Game9EnemyFuncFPQ24Game9EnemyBaseb
/* 80292224 0028F164  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80292228 0028F168  40 82 00 2C */	bne .L_80292254
/* 8029222C 0028F16C  7F E3 FB 78 */	mr r3, r31
/* 80292230 0028F170  38 80 00 05 */	li r4, 5
/* 80292234 0028F174  48 00 1C 09 */	bl getAttackPiki__Q34Game9SnakeCrow3ObjFi
/* 80292238 0028F178  28 03 00 00 */	cmplwi r3, 0
/* 8029223C 0028F17C  40 82 00 18 */	bne .L_80292254
/* 80292240 0028F180  7F E3 FB 78 */	mr r3, r31
/* 80292244 0028F184  38 80 00 05 */	li r4, 5
/* 80292248 0028F188  48 00 21 E9 */	bl getAttackNavi__Q34Game9SnakeCrow3ObjFi
/* 8029224C 0028F18C  28 03 00 00 */	cmplwi r3, 0
/* 80292250 0028F190  41 82 00 0C */	beq .L_8029225C
.L_80292254:
/* 80292254 0028F194  7F E3 FB 78 */	mr r3, r31
/* 80292258 0028F198  4B E7 30 49 */	bl finishMotion__Q24Game9EnemyBaseFv
.L_8029225C:
/* 8029225C 0028F19C  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 80292260 0028F1A0  88 03 00 24 */	lbz r0, 0x24(r3)
/* 80292264 0028F1A4  28 00 00 00 */	cmplwi r0, 0
/* 80292268 0028F1A8  41 82 01 34 */	beq .L_8029239C
/* 8029226C 0028F1AC  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 80292270 0028F1B0  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 80292274 0028F1B4  40 82 01 28 */	bne .L_8029239C
/* 80292278 0028F1B8  C0 3F 02 00 */	lfs f1, 0x200(r31)
/* 8029227C 0028F1BC  C0 02 D6 CC */	lfs f0, lbl_8051BA2C@sda21(r2)
/* 80292280 0028F1C0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80292284 0028F1C4  4C 40 13 82 */	cror 2, 0, 2
/* 80292288 0028F1C8  40 82 00 28 */	bne .L_802922B0
/* 8029228C 0028F1CC  7F C3 F3 78 */	mr r3, r30
/* 80292290 0028F1D0  7F E4 FB 78 */	mr r4, r31
/* 80292294 0028F1D4  81 9E 00 00 */	lwz r12, 0(r30)
/* 80292298 0028F1D8  38 A0 00 00 */	li r5, 0
/* 8029229C 0028F1DC  38 C0 00 00 */	li r6, 0
/* 802922A0 0028F1E0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802922A4 0028F1E4  7D 89 03 A6 */	mtctr r12
/* 802922A8 0028F1E8  4E 80 04 21 */	bctrl 
/* 802922AC 0028F1EC  48 00 00 F0 */	b .L_8029239C
.L_802922B0:
/* 802922B0 0028F1F0  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 802922B4 0028F1F4  C0 3F 02 C4 */	lfs f1, 0x2c4(r31)
/* 802922B8 0028F1F8  C0 03 08 44 */	lfs f0, 0x844(r3)
/* 802922BC 0028F1FC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802922C0 0028F200  41 81 00 18 */	bgt .L_802922D8
/* 802922C4 0028F204  7F E3 FB 78 */	mr r3, r31
/* 802922C8 0028F208  38 80 00 00 */	li r4, 0
/* 802922CC 0028F20C  4B E8 23 8D */	bl isStartFlick__Q24Game9EnemyFuncFPQ24Game9EnemyBaseb
/* 802922D0 0028F210  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802922D4 0028F214  41 82 00 28 */	beq .L_802922FC
.L_802922D8:
/* 802922D8 0028F218  7F C3 F3 78 */	mr r3, r30
/* 802922DC 0028F21C  7F E4 FB 78 */	mr r4, r31
/* 802922E0 0028F220  81 9E 00 00 */	lwz r12, 0(r30)
/* 802922E4 0028F224  38 A0 00 04 */	li r5, 4
/* 802922E8 0028F228  38 C0 00 00 */	li r6, 0
/* 802922EC 0028F22C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802922F0 0028F230  7D 89 03 A6 */	mtctr r12
/* 802922F4 0028F234  4E 80 04 21 */	bctrl 
/* 802922F8 0028F238  48 00 00 A4 */	b .L_8029239C
.L_802922FC:
/* 802922FC 0028F23C  7F E3 FB 78 */	mr r3, r31
/* 80292300 0028F240  38 80 00 05 */	li r4, 5
/* 80292304 0028F244  48 00 1B 39 */	bl getAttackPiki__Q34Game9SnakeCrow3ObjFi
/* 80292308 0028F248  28 03 00 00 */	cmplwi r3, 0
/* 8029230C 0028F24C  40 82 00 18 */	bne .L_80292324
/* 80292310 0028F250  7F E3 FB 78 */	mr r3, r31
/* 80292314 0028F254  38 80 00 05 */	li r4, 5
/* 80292318 0028F258  48 00 21 19 */	bl getAttackNavi__Q34Game9SnakeCrow3ObjFi
/* 8029231C 0028F25C  28 03 00 00 */	cmplwi r3, 0
/* 80292320 0028F260  41 82 00 5C */	beq .L_8029237C
.L_80292324:
/* 80292324 0028F264  7F E3 FB 78 */	mr r3, r31
/* 80292328 0028F268  48 00 27 A5 */	bl getStickHeadPikmin__Q34Game9SnakeCrow3ObjFv
/* 8029232C 0028F26C  2C 03 00 00 */	cmpwi r3, 0
/* 80292330 0028F270  41 82 00 28 */	beq .L_80292358
/* 80292334 0028F274  7F C3 F3 78 */	mr r3, r30
/* 80292338 0028F278  7F E4 FB 78 */	mr r4, r31
/* 8029233C 0028F27C  81 9E 00 00 */	lwz r12, 0(r30)
/* 80292340 0028F280  38 A0 00 08 */	li r5, 8
/* 80292344 0028F284  38 C0 00 00 */	li r6, 0
/* 80292348 0028F288  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8029234C 0028F28C  7D 89 03 A6 */	mtctr r12
/* 80292350 0028F290  4E 80 04 21 */	bctrl 
/* 80292354 0028F294  48 00 00 48 */	b .L_8029239C
.L_80292358:
/* 80292358 0028F298  7F C3 F3 78 */	mr r3, r30
/* 8029235C 0028F29C  7F E4 FB 78 */	mr r4, r31
/* 80292360 0028F2A0  81 9E 00 00 */	lwz r12, 0(r30)
/* 80292364 0028F2A4  38 A0 00 06 */	li r5, 6
/* 80292368 0028F2A8  38 C0 00 00 */	li r6, 0
/* 8029236C 0028F2AC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80292370 0028F2B0  7D 89 03 A6 */	mtctr r12
/* 80292374 0028F2B4  4E 80 04 21 */	bctrl 
/* 80292378 0028F2B8  48 00 00 24 */	b .L_8029239C
.L_8029237C:
/* 8029237C 0028F2BC  7F C3 F3 78 */	mr r3, r30
/* 80292380 0028F2C0  7F E4 FB 78 */	mr r4, r31
/* 80292384 0028F2C4  81 9E 00 00 */	lwz r12, 0(r30)
/* 80292388 0028F2C8  38 A0 00 05 */	li r5, 5
/* 8029238C 0028F2CC  38 C0 00 00 */	li r6, 0
/* 80292390 0028F2D0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80292394 0028F2D4  7D 89 03 A6 */	mtctr r12
/* 80292398 0028F2D8  4E 80 04 21 */	bctrl 
.L_8029239C:
/* 8029239C 0028F2DC  E3 E1 01 38 */	psq_l f31, 312(r1), 0, qr0
/* 802923A0 0028F2E0  CB E1 01 30 */	lfd f31, 0x130(r1)
/* 802923A4 0028F2E4  E3 C1 01 28 */	psq_l f30, 296(r1), 0, qr0
/* 802923A8 0028F2E8  CB C1 01 20 */	lfd f30, 0x120(r1)
/* 802923AC 0028F2EC  E3 A1 01 18 */	psq_l f29, 280(r1), 0, qr0
/* 802923B0 0028F2F0  CB A1 01 10 */	lfd f29, 0x110(r1)
/* 802923B4 0028F2F4  E3 81 01 08 */	psq_l f28, 264(r1), 0, qr0
/* 802923B8 0028F2F8  CB 81 01 00 */	lfd f28, 0x100(r1)
/* 802923BC 0028F2FC  E3 61 00 F8 */	psq_l f27, 248(r1), 0, qr0
/* 802923C0 0028F300  CB 61 00 F0 */	lfd f27, 0xf0(r1)
/* 802923C4 0028F304  E3 41 00 E8 */	psq_l f26, 232(r1), 0, qr0
/* 802923C8 0028F308  CB 41 00 E0 */	lfd f26, 0xe0(r1)
/* 802923CC 0028F30C  E3 21 00 D8 */	psq_l f25, 216(r1), 0, qr0
/* 802923D0 0028F310  CB 21 00 D0 */	lfd f25, 0xd0(r1)
/* 802923D4 0028F314  E3 01 00 C8 */	psq_l f24, 200(r1), 0, qr0
/* 802923D8 0028F318  CB 01 00 C0 */	lfd f24, 0xc0(r1)
/* 802923DC 0028F31C  83 E1 00 BC */	lwz r31, 0xbc(r1)
/* 802923E0 0028F320  83 C1 00 B8 */	lwz r30, 0xb8(r1)
/* 802923E4 0028F324  80 01 01 44 */	lwz r0, 0x144(r1)
/* 802923E8 0028F328  83 A1 00 B4 */	lwz r29, 0xb4(r1)
/* 802923EC 0028F32C  7C 08 03 A6 */	mtlr r0
/* 802923F0 0028F330  38 21 01 40 */	addi r1, r1, 0x140
/* 802923F4 0028F334  4E 80 00 20 */	blr 
.endfn exec__Q34Game9SnakeCrow9StateWaitFPQ24Game9EnemyBase

.fn cleanup__Q34Game9SnakeCrow9StateWaitFPQ24Game9EnemyBase, global
/* 802923F8 0028F338  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802923FC 0028F33C  7C 08 02 A6 */	mflr r0
/* 80292400 0028F340  7C 83 23 78 */	mr r3, r4
/* 80292404 0028F344  90 01 00 14 */	stw r0, 0x14(r1)
/* 80292408 0028F348  48 00 34 D1 */	bl finishRotateEffect__Q34Game9SnakeCrow3ObjFv
/* 8029240C 0028F34C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80292410 0028F350  7C 08 03 A6 */	mtlr r0
/* 80292414 0028F354  38 21 00 10 */	addi r1, r1, 0x10
/* 80292418 0028F358  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game9SnakeCrow9StateWaitFPQ24Game9EnemyBase

.fn init__Q34Game9SnakeCrow11StateAttackFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 8029241C 0028F35C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80292420 0028F360  7C 08 02 A6 */	mflr r0
/* 80292424 0028F364  C0 02 D6 CC */	lfs f0, lbl_8051BA2C@sda21(r2)
/* 80292428 0028F368  7C 83 23 78 */	mr r3, r4
/* 8029242C 0028F36C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80292430 0028F370  38 A0 00 00 */	li r5, 0
/* 80292434 0028F374  80 04 01 E0 */	lwz r0, 0x1e0(r4)
/* 80292438 0028F378  54 00 06 B0 */	rlwinm r0, r0, 0, 0x1a, 0x18
/* 8029243C 0028F37C  90 04 01 E0 */	stw r0, 0x1e0(r4)
/* 80292440 0028F380  D0 04 01 D4 */	stfs f0, 0x1d4(r4)
/* 80292444 0028F384  D0 04 01 D8 */	stfs f0, 0x1d8(r4)
/* 80292448 0028F388  D0 04 01 DC */	stfs f0, 0x1dc(r4)
/* 8029244C 0028F38C  80 84 02 D4 */	lwz r4, 0x2d4(r4)
/* 80292450 0028F390  38 84 00 04 */	addi r4, r4, 4
/* 80292454 0028F394  4B E7 2B B1 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 80292458 0028F398  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8029245C 0028F39C  7C 08 03 A6 */	mtlr r0
/* 80292460 0028F3A0  38 21 00 10 */	addi r1, r1, 0x10
/* 80292464 0028F3A4  4E 80 00 20 */	blr 
.endfn init__Q34Game9SnakeCrow11StateAttackFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game9SnakeCrow11StateAttackFPQ24Game9EnemyBase, global
/* 80292468 0028F3A8  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 8029246C 0028F3AC  7C 08 02 A6 */	mflr r0
/* 80292470 0028F3B0  90 01 00 44 */	stw r0, 0x44(r1)
/* 80292474 0028F3B4  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 80292478 0028F3B8  7C 9F 23 78 */	mr r31, r4
/* 8029247C 0028F3BC  93 C1 00 38 */	stw r30, 0x38(r1)
/* 80292480 0028F3C0  93 A1 00 34 */	stw r29, 0x34(r1)
/* 80292484 0028F3C4  7C 7D 1B 78 */	mr r29, r3
/* 80292488 0028F3C8  7F E3 FB 78 */	mr r3, r31
/* 8029248C 0028F3CC  4B E7 4E 75 */	bl isFinishMotion__Q24Game9EnemyBaseFv
/* 80292490 0028F3D0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80292494 0028F3D4  40 82 00 0C */	bne .L_802924A0
/* 80292498 0028F3D8  7F E3 FB 78 */	mr r3, r31
/* 8029249C 0028F3DC  48 00 17 95 */	bl setAttackPosition__Q34Game9SnakeCrow3ObjFv
.L_802924A0:
/* 802924A0 0028F3E0  C0 3F 02 00 */	lfs f1, 0x200(r31)
/* 802924A4 0028F3E4  C0 02 D6 CC */	lfs f0, lbl_8051BA2C@sda21(r2)
/* 802924A8 0028F3E8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802924AC 0028F3EC  4C 40 13 82 */	cror 2, 0, 2
/* 802924B0 0028F3F0  40 82 00 0C */	bne .L_802924BC
/* 802924B4 0028F3F4  7F E3 FB 78 */	mr r3, r31
/* 802924B8 0028F3F8  4B E7 2D E9 */	bl finishMotion__Q24Game9EnemyBaseFv
.L_802924BC:
/* 802924BC 0028F3FC  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 802924C0 0028F400  88 03 00 24 */	lbz r0, 0x24(r3)
/* 802924C4 0028F404  28 00 00 00 */	cmplwi r0, 0
/* 802924C8 0028F408  41 82 02 B8 */	beq .L_80292780
/* 802924CC 0028F40C  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 802924D0 0028F410  28 00 00 02 */	cmplwi r0, 2
/* 802924D4 0028F414  40 82 00 10 */	bne .L_802924E4
/* 802924D8 0028F418  7F E3 FB 78 */	mr r3, r31
/* 802924DC 0028F41C  48 00 28 F1 */	bl startJointCallBack__Q34Game9SnakeCrow3ObjFv
/* 802924E0 0028F420  48 00 02 A0 */	b .L_80292780
.L_802924E4:
/* 802924E4 0028F424  28 00 00 03 */	cmplwi r0, 3
/* 802924E8 0028F428  40 82 00 E8 */	bne .L_802925D0
/* 802924EC 0028F42C  83 DF 02 D4 */	lwz r30, 0x2d4(r31)
/* 802924F0 0028F430  7F E3 FB 78 */	mr r3, r31
/* 802924F4 0028F434  7F C4 F3 78 */	mr r4, r30
/* 802924F8 0028F438  48 00 19 45 */	bl getAttackPiki__Q34Game9SnakeCrow3ObjFi
/* 802924FC 0028F43C  7C 7D 1B 79 */	or. r29, r3, r3
/* 80292500 0028F440  41 82 00 64 */	beq .L_80292564
/* 80292504 0028F444  7F E3 FB 78 */	mr r3, r31
/* 80292508 0028F448  48 00 24 F1 */	bl getSwallowSlot__Q34Game9SnakeCrow3ObjFv
/* 8029250C 0028F44C  3C A0 80 4B */	lis r5, __vt__Q24Game11Interaction@ha
/* 80292510 0028F450  3C 80 80 4B */	lis r4, __vt__Q24Game14InteractAttack@ha
/* 80292514 0028F454  38 05 A3 00 */	addi r0, r5, __vt__Q24Game11Interaction@l
/* 80292518 0028F458  C0 02 D6 DC */	lfs f0, lbl_8051BA3C@sda21(r2)
/* 8029251C 0028F45C  90 01 00 18 */	stw r0, 0x18(r1)
/* 80292520 0028F460  38 A4 4D E0 */	addi r5, r4, __vt__Q24Game14InteractAttack@l
/* 80292524 0028F464  3C 80 80 4B */	lis r4, __vt__Q24Game15InteractSwallow@ha
/* 80292528 0028F468  38 00 00 00 */	li r0, 0
/* 8029252C 0028F46C  90 A1 00 18 */	stw r5, 0x18(r1)
/* 80292530 0028F470  38 A4 4D BC */	addi r5, r4, __vt__Q24Game15InteractSwallow@l
/* 80292534 0028F474  38 81 00 18 */	addi r4, r1, 0x18
/* 80292538 0028F478  90 61 00 24 */	stw r3, 0x24(r1)
/* 8029253C 0028F47C  7F A3 EB 78 */	mr r3, r29
/* 80292540 0028F480  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80292544 0028F484  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 80292548 0028F488  90 A1 00 18 */	stw r5, 0x18(r1)
/* 8029254C 0028F48C  90 01 00 28 */	stw r0, 0x28(r1)
/* 80292550 0028F490  81 9D 00 00 */	lwz r12, 0(r29)
/* 80292554 0028F494  81 8C 01 A4 */	lwz r12, 0x1a4(r12)
/* 80292558 0028F498  7D 89 03 A6 */	mtctr r12
/* 8029255C 0028F49C  4E 80 04 21 */	bctrl 
/* 80292560 0028F4A0  48 00 00 64 */	b .L_802925C4
.L_80292564:
/* 80292564 0028F4A4  7F E3 FB 78 */	mr r3, r31
/* 80292568 0028F4A8  7F C4 F3 78 */	mr r4, r30
/* 8029256C 0028F4AC  48 00 1E C5 */	bl getAttackNavi__Q34Game9SnakeCrow3ObjFi
/* 80292570 0028F4B0  28 03 00 00 */	cmplwi r3, 0
/* 80292574 0028F4B4  41 82 00 48 */	beq .L_802925BC
/* 80292578 0028F4B8  80 DF 00 C0 */	lwz r6, 0xc0(r31)
/* 8029257C 0028F4BC  3C A0 80 4B */	lis r5, __vt__Q24Game11Interaction@ha
/* 80292580 0028F4C0  3C 80 80 4B */	lis r4, __vt__Q24Game14InteractAttack@ha
/* 80292584 0028F4C4  38 00 00 00 */	li r0, 0
/* 80292588 0028F4C8  C0 06 06 04 */	lfs f0, 0x604(r6)
/* 8029258C 0028F4CC  38 C5 A3 00 */	addi r6, r5, __vt__Q24Game11Interaction@l
/* 80292590 0028F4D0  38 A4 4D E0 */	addi r5, r4, __vt__Q24Game14InteractAttack@l
/* 80292594 0028F4D4  38 81 00 08 */	addi r4, r1, 8
/* 80292598 0028F4D8  90 C1 00 08 */	stw r6, 8(r1)
/* 8029259C 0028F4DC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802925A0 0028F4E0  90 A1 00 08 */	stw r5, 8(r1)
/* 802925A4 0028F4E4  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 802925A8 0028F4E8  90 01 00 14 */	stw r0, 0x14(r1)
/* 802925AC 0028F4EC  81 83 00 00 */	lwz r12, 0(r3)
/* 802925B0 0028F4F0  81 8C 01 A4 */	lwz r12, 0x1a4(r12)
/* 802925B4 0028F4F4  7D 89 03 A6 */	mtctr r12
/* 802925B8 0028F4F8  4E 80 04 21 */	bctrl 
.L_802925BC:
/* 802925BC 0028F4FC  7F E3 FB 78 */	mr r3, r31
/* 802925C0 0028F500  4B E7 2C E1 */	bl finishMotion__Q24Game9EnemyBaseFv
.L_802925C4:
/* 802925C4 0028F504  7F E3 FB 78 */	mr r3, r31
/* 802925C8 0028F508  48 00 28 BD */	bl returnJointCallBack__Q34Game9SnakeCrow3ObjFv
/* 802925CC 0028F50C  48 00 01 B4 */	b .L_80292780
.L_802925D0:
/* 802925D0 0028F510  28 00 00 04 */	cmplwi r0, 4
/* 802925D4 0028F514  40 82 00 94 */	bne .L_80292668
/* 802925D8 0028F518  7F E3 FB 78 */	mr r3, r31
/* 802925DC 0028F51C  4B E7 4D 25 */	bl isFinishMotion__Q24Game9EnemyBaseFv
/* 802925E0 0028F520  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802925E4 0028F524  40 82 00 78 */	bne .L_8029265C
/* 802925E8 0028F528  7F E3 FB 78 */	mr r3, r31
/* 802925EC 0028F52C  48 00 24 0D */	bl getSwallowSlot__Q34Game9SnakeCrow3ObjFv
/* 802925F0 0028F530  28 03 00 00 */	cmplwi r3, 0
/* 802925F4 0028F534  41 82 00 68 */	beq .L_8029265C
/* 802925F8 0028F538  7F E3 FB 78 */	mr r3, r31
/* 802925FC 0028F53C  38 80 00 05 */	li r4, 5
/* 80292600 0028F540  48 00 18 3D */	bl getAttackPiki__Q34Game9SnakeCrow3ObjFi
/* 80292604 0028F544  28 03 00 00 */	cmplwi r3, 0
/* 80292608 0028F548  40 82 00 18 */	bne .L_80292620
/* 8029260C 0028F54C  7F E3 FB 78 */	mr r3, r31
/* 80292610 0028F550  38 80 00 05 */	li r4, 5
/* 80292614 0028F554  48 00 1E 1D */	bl getAttackNavi__Q34Game9SnakeCrow3ObjFi
/* 80292618 0028F558  28 03 00 00 */	cmplwi r3, 0
/* 8029261C 0028F55C  41 82 00 34 */	beq .L_80292650
.L_80292620:
/* 80292620 0028F560  80 9F 02 D4 */	lwz r4, 0x2d4(r31)
/* 80292624 0028F564  7F E3 FB 78 */	mr r3, r31
/* 80292628 0028F568  38 A0 00 00 */	li r5, 0
/* 8029262C 0028F56C  38 84 00 04 */	addi r4, r4, 4
/* 80292630 0028F570  4B E7 29 D5 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 80292634 0028F574  7F E3 FB 78 */	mr r3, r31
/* 80292638 0028F578  4B E7 4C 41 */	bl getFirstKeyFrame__Q24Game9EnemyBaseFv
/* 8029263C 0028F57C  7F E3 FB 78 */	mr r3, r31
/* 80292640 0028F580  4B E7 2B E9 */	bl setMotionFrame__Q24Game9EnemyBaseFf
/* 80292644 0028F584  7F E3 FB 78 */	mr r3, r31
/* 80292648 0028F588  48 00 27 85 */	bl startJointCallBack__Q34Game9SnakeCrow3ObjFv
/* 8029264C 0028F58C  48 00 01 34 */	b .L_80292780
.L_80292650:
/* 80292650 0028F590  7F E3 FB 78 */	mr r3, r31
/* 80292654 0028F594  48 00 28 B9 */	bl finishJointCallBack__Q34Game9SnakeCrow3ObjFv
/* 80292658 0028F598  48 00 01 28 */	b .L_80292780
.L_8029265C:
/* 8029265C 0028F59C  7F E3 FB 78 */	mr r3, r31
/* 80292660 0028F5A0  48 00 28 AD */	bl finishJointCallBack__Q34Game9SnakeCrow3ObjFv
/* 80292664 0028F5A4  48 00 01 1C */	b .L_80292780
.L_80292668:
/* 80292668 0028F5A8  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 8029266C 0028F5AC  40 82 01 14 */	bne .L_80292780
/* 80292670 0028F5B0  C0 3F 02 00 */	lfs f1, 0x200(r31)
/* 80292674 0028F5B4  C0 02 D6 CC */	lfs f0, lbl_8051BA2C@sda21(r2)
/* 80292678 0028F5B8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8029267C 0028F5BC  4C 40 13 82 */	cror 2, 0, 2
/* 80292680 0028F5C0  40 82 00 28 */	bne .L_802926A8
/* 80292684 0028F5C4  7F A3 EB 78 */	mr r3, r29
/* 80292688 0028F5C8  7F E4 FB 78 */	mr r4, r31
/* 8029268C 0028F5CC  81 9D 00 00 */	lwz r12, 0(r29)
/* 80292690 0028F5D0  38 A0 00 00 */	li r5, 0
/* 80292694 0028F5D4  38 C0 00 00 */	li r6, 0
/* 80292698 0028F5D8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8029269C 0028F5DC  7D 89 03 A6 */	mtctr r12
/* 802926A0 0028F5E0  4E 80 04 21 */	bctrl 
/* 802926A4 0028F5E4  48 00 00 DC */	b .L_80292780
.L_802926A8:
/* 802926A8 0028F5E8  7F E3 FB 78 */	mr r3, r31
/* 802926AC 0028F5EC  48 00 23 B5 */	bl isSwallowPikmin__Q34Game9SnakeCrow3ObjFv
/* 802926B0 0028F5F0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802926B4 0028F5F4  41 82 00 28 */	beq .L_802926DC
/* 802926B8 0028F5F8  7F A3 EB 78 */	mr r3, r29
/* 802926BC 0028F5FC  7F E4 FB 78 */	mr r4, r31
/* 802926C0 0028F600  81 9D 00 00 */	lwz r12, 0(r29)
/* 802926C4 0028F604  38 A0 00 07 */	li r5, 7
/* 802926C8 0028F608  38 C0 00 00 */	li r6, 0
/* 802926CC 0028F60C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802926D0 0028F610  7D 89 03 A6 */	mtctr r12
/* 802926D4 0028F614  4E 80 04 21 */	bctrl 
/* 802926D8 0028F618  48 00 00 A8 */	b .L_80292780
.L_802926DC:
/* 802926DC 0028F61C  7F E3 FB 78 */	mr r3, r31
/* 802926E0 0028F620  38 80 00 00 */	li r4, 0
/* 802926E4 0028F624  4B E8 1F 75 */	bl isStartFlick__Q24Game9EnemyFuncFPQ24Game9EnemyBaseb
/* 802926E8 0028F628  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802926EC 0028F62C  41 82 00 28 */	beq .L_80292714
/* 802926F0 0028F630  7F A3 EB 78 */	mr r3, r29
/* 802926F4 0028F634  7F E4 FB 78 */	mr r4, r31
/* 802926F8 0028F638  81 9D 00 00 */	lwz r12, 0(r29)
/* 802926FC 0028F63C  38 A0 00 04 */	li r5, 4
/* 80292700 0028F640  38 C0 00 00 */	li r6, 0
/* 80292704 0028F644  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80292708 0028F648  7D 89 03 A6 */	mtctr r12
/* 8029270C 0028F64C  4E 80 04 21 */	bctrl 
/* 80292710 0028F650  48 00 00 70 */	b .L_80292780
.L_80292714:
/* 80292714 0028F654  7F E3 FB 78 */	mr r3, r31
/* 80292718 0028F658  38 80 00 05 */	li r4, 5
/* 8029271C 0028F65C  48 00 17 21 */	bl getAttackPiki__Q34Game9SnakeCrow3ObjFi
/* 80292720 0028F660  28 03 00 00 */	cmplwi r3, 0
/* 80292724 0028F664  40 82 00 18 */	bne .L_8029273C
/* 80292728 0028F668  7F E3 FB 78 */	mr r3, r31
/* 8029272C 0028F66C  38 80 00 05 */	li r4, 5
/* 80292730 0028F670  48 00 1D 01 */	bl getAttackNavi__Q34Game9SnakeCrow3ObjFi
/* 80292734 0028F674  28 03 00 00 */	cmplwi r3, 0
/* 80292738 0028F678  41 82 00 28 */	beq .L_80292760
.L_8029273C:
/* 8029273C 0028F67C  7F A3 EB 78 */	mr r3, r29
/* 80292740 0028F680  7F E4 FB 78 */	mr r4, r31
/* 80292744 0028F684  81 9D 00 00 */	lwz r12, 0(r29)
/* 80292748 0028F688  38 A0 00 06 */	li r5, 6
/* 8029274C 0028F68C  38 C0 00 00 */	li r6, 0
/* 80292750 0028F690  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80292754 0028F694  7D 89 03 A6 */	mtctr r12
/* 80292758 0028F698  4E 80 04 21 */	bctrl 
/* 8029275C 0028F69C  48 00 00 24 */	b .L_80292780
.L_80292760:
/* 80292760 0028F6A0  7F A3 EB 78 */	mr r3, r29
/* 80292764 0028F6A4  7F E4 FB 78 */	mr r4, r31
/* 80292768 0028F6A8  81 9D 00 00 */	lwz r12, 0(r29)
/* 8029276C 0028F6AC  38 A0 00 05 */	li r5, 5
/* 80292770 0028F6B0  38 C0 00 00 */	li r6, 0
/* 80292774 0028F6B4  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80292778 0028F6B8  7D 89 03 A6 */	mtctr r12
/* 8029277C 0028F6BC  4E 80 04 21 */	bctrl 
.L_80292780:
/* 80292780 0028F6C0  80 01 00 44 */	lwz r0, 0x44(r1)
/* 80292784 0028F6C4  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 80292788 0028F6C8  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 8029278C 0028F6CC  83 A1 00 34 */	lwz r29, 0x34(r1)
/* 80292790 0028F6D0  7C 08 03 A6 */	mtlr r0
/* 80292794 0028F6D4  38 21 00 40 */	addi r1, r1, 0x40
/* 80292798 0028F6D8  4E 80 00 20 */	blr 
.endfn exec__Q34Game9SnakeCrow11StateAttackFPQ24Game9EnemyBase

.fn cleanup__Q34Game9SnakeCrow11StateAttackFPQ24Game9EnemyBase, global
/* 8029279C 0028F6DC  80 04 01 E0 */	lwz r0, 0x1e0(r4)
/* 802927A0 0028F6E0  60 00 00 40 */	ori r0, r0, 0x40
/* 802927A4 0028F6E4  90 04 01 E0 */	stw r0, 0x1e0(r4)
/* 802927A8 0028F6E8  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game9SnakeCrow11StateAttackFPQ24Game9EnemyBase

.fn init__Q34Game9SnakeCrow8StateEatFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 802927AC 0028F6EC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802927B0 0028F6F0  7C 08 02 A6 */	mflr r0
/* 802927B4 0028F6F4  7C 83 23 78 */	mr r3, r4
/* 802927B8 0028F6F8  C0 02 D6 CC */	lfs f0, lbl_8051BA2C@sda21(r2)
/* 802927BC 0028F6FC  90 01 00 14 */	stw r0, 0x14(r1)
/* 802927C0 0028F700  38 80 00 0A */	li r4, 0xa
/* 802927C4 0028F704  38 A0 00 00 */	li r5, 0
/* 802927C8 0028F708  D0 03 01 D4 */	stfs f0, 0x1d4(r3)
/* 802927CC 0028F70C  D0 03 01 D8 */	stfs f0, 0x1d8(r3)
/* 802927D0 0028F710  D0 03 01 DC */	stfs f0, 0x1dc(r3)
/* 802927D4 0028F714  4B E7 28 31 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 802927D8 0028F718  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802927DC 0028F71C  7C 08 03 A6 */	mtlr r0
/* 802927E0 0028F720  38 21 00 10 */	addi r1, r1, 0x10
/* 802927E4 0028F724  4E 80 00 20 */	blr 
.endfn init__Q34Game9SnakeCrow8StateEatFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game9SnakeCrow8StateEatFPQ24Game9EnemyBase, global
/* 802927E8 0028F728  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802927EC 0028F72C  7C 08 02 A6 */	mflr r0
/* 802927F0 0028F730  90 01 00 14 */	stw r0, 0x14(r1)
/* 802927F4 0028F734  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802927F8 0028F738  7C 9F 23 78 */	mr r31, r4
/* 802927FC 0028F73C  93 C1 00 08 */	stw r30, 8(r1)
/* 80292800 0028F740  7C 7E 1B 78 */	mr r30, r3
/* 80292804 0028F744  80 A4 01 88 */	lwz r5, 0x188(r4)
/* 80292808 0028F748  88 05 00 24 */	lbz r0, 0x24(r5)
/* 8029280C 0028F74C  28 00 00 00 */	cmplwi r0, 0
/* 80292810 0028F750  41 82 01 38 */	beq .L_80292948
/* 80292814 0028F754  80 05 00 1C */	lwz r0, 0x1c(r5)
/* 80292818 0028F758  28 00 00 02 */	cmplwi r0, 2
/* 8029281C 0028F75C  40 82 00 1C */	bne .L_80292838
/* 80292820 0028F760  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 80292824 0028F764  7F E3 FB 78 */	mr r3, r31
/* 80292828 0028F768  38 80 00 00 */	li r4, 0
/* 8029282C 0028F76C  C0 25 08 94 */	lfs f1, 0x894(r5)
/* 80292830 0028F770  4B E8 16 55 */	bl "swallowPikmin__Q24Game9EnemyFuncFPQ24Game8CreaturefP23Condition<Q24Game4Piki>"
/* 80292834 0028F774  48 00 01 14 */	b .L_80292948
.L_80292838:
/* 80292838 0028F778  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 8029283C 0028F77C  40 82 01 0C */	bne .L_80292948
/* 80292840 0028F780  C0 3F 02 00 */	lfs f1, 0x200(r31)
/* 80292844 0028F784  C0 02 D6 CC */	lfs f0, lbl_8051BA2C@sda21(r2)
/* 80292848 0028F788  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8029284C 0028F78C  4C 40 13 82 */	cror 2, 0, 2
/* 80292850 0028F790  40 82 00 20 */	bne .L_80292870
/* 80292854 0028F794  81 83 00 00 */	lwz r12, 0(r3)
/* 80292858 0028F798  38 A0 00 00 */	li r5, 0
/* 8029285C 0028F79C  38 C0 00 00 */	li r6, 0
/* 80292860 0028F7A0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80292864 0028F7A4  7D 89 03 A6 */	mtctr r12
/* 80292868 0028F7A8  4E 80 04 21 */	bctrl 
/* 8029286C 0028F7AC  48 00 00 DC */	b .L_80292948
.L_80292870:
/* 80292870 0028F7B0  7F E3 FB 78 */	mr r3, r31
/* 80292874 0028F7B4  38 80 00 00 */	li r4, 0
/* 80292878 0028F7B8  4B E8 1D E1 */	bl isStartFlick__Q24Game9EnemyFuncFPQ24Game9EnemyBaseb
/* 8029287C 0028F7BC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80292880 0028F7C0  41 82 00 28 */	beq .L_802928A8
/* 80292884 0028F7C4  7F C3 F3 78 */	mr r3, r30
/* 80292888 0028F7C8  7F E4 FB 78 */	mr r4, r31
/* 8029288C 0028F7CC  81 9E 00 00 */	lwz r12, 0(r30)
/* 80292890 0028F7D0  38 A0 00 04 */	li r5, 4
/* 80292894 0028F7D4  38 C0 00 00 */	li r6, 0
/* 80292898 0028F7D8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8029289C 0028F7DC  7D 89 03 A6 */	mtctr r12
/* 802928A0 0028F7E0  4E 80 04 21 */	bctrl 
/* 802928A4 0028F7E4  48 00 00 A4 */	b .L_80292948
.L_802928A8:
/* 802928A8 0028F7E8  7F E3 FB 78 */	mr r3, r31
/* 802928AC 0028F7EC  38 80 00 05 */	li r4, 5
/* 802928B0 0028F7F0  48 00 15 8D */	bl getAttackPiki__Q34Game9SnakeCrow3ObjFi
/* 802928B4 0028F7F4  28 03 00 00 */	cmplwi r3, 0
/* 802928B8 0028F7F8  40 82 00 18 */	bne .L_802928D0
/* 802928BC 0028F7FC  7F E3 FB 78 */	mr r3, r31
/* 802928C0 0028F800  38 80 00 05 */	li r4, 5
/* 802928C4 0028F804  48 00 1B 6D */	bl getAttackNavi__Q34Game9SnakeCrow3ObjFi
/* 802928C8 0028F808  28 03 00 00 */	cmplwi r3, 0
/* 802928CC 0028F80C  41 82 00 5C */	beq .L_80292928
.L_802928D0:
/* 802928D0 0028F810  7F E3 FB 78 */	mr r3, r31
/* 802928D4 0028F814  48 00 21 F9 */	bl getStickHeadPikmin__Q34Game9SnakeCrow3ObjFv
/* 802928D8 0028F818  2C 03 00 00 */	cmpwi r3, 0
/* 802928DC 0028F81C  41 82 00 28 */	beq .L_80292904
/* 802928E0 0028F820  7F C3 F3 78 */	mr r3, r30
/* 802928E4 0028F824  7F E4 FB 78 */	mr r4, r31
/* 802928E8 0028F828  81 9E 00 00 */	lwz r12, 0(r30)
/* 802928EC 0028F82C  38 A0 00 08 */	li r5, 8
/* 802928F0 0028F830  38 C0 00 00 */	li r6, 0
/* 802928F4 0028F834  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802928F8 0028F838  7D 89 03 A6 */	mtctr r12
/* 802928FC 0028F83C  4E 80 04 21 */	bctrl 
/* 80292900 0028F840  48 00 00 48 */	b .L_80292948
.L_80292904:
/* 80292904 0028F844  7F C3 F3 78 */	mr r3, r30
/* 80292908 0028F848  7F E4 FB 78 */	mr r4, r31
/* 8029290C 0028F84C  81 9E 00 00 */	lwz r12, 0(r30)
/* 80292910 0028F850  38 A0 00 06 */	li r5, 6
/* 80292914 0028F854  38 C0 00 00 */	li r6, 0
/* 80292918 0028F858  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8029291C 0028F85C  7D 89 03 A6 */	mtctr r12
/* 80292920 0028F860  4E 80 04 21 */	bctrl 
/* 80292924 0028F864  48 00 00 24 */	b .L_80292948
.L_80292928:
/* 80292928 0028F868  7F C3 F3 78 */	mr r3, r30
/* 8029292C 0028F86C  7F E4 FB 78 */	mr r4, r31
/* 80292930 0028F870  81 9E 00 00 */	lwz r12, 0(r30)
/* 80292934 0028F874  38 A0 00 05 */	li r5, 5
/* 80292938 0028F878  38 C0 00 00 */	li r6, 0
/* 8029293C 0028F87C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80292940 0028F880  7D 89 03 A6 */	mtctr r12
/* 80292944 0028F884  4E 80 04 21 */	bctrl 
.L_80292948:
/* 80292948 0028F888  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8029294C 0028F88C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80292950 0028F890  83 C1 00 08 */	lwz r30, 8(r1)
/* 80292954 0028F894  7C 08 03 A6 */	mtlr r0
/* 80292958 0028F898  38 21 00 10 */	addi r1, r1, 0x10
/* 8029295C 0028F89C  4E 80 00 20 */	blr 
.endfn exec__Q34Game9SnakeCrow8StateEatFPQ24Game9EnemyBase

.fn cleanup__Q34Game9SnakeCrow8StateEatFPQ24Game9EnemyBase, global
/* 80292960 0028F8A0  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game9SnakeCrow8StateEatFPQ24Game9EnemyBase

.fn init__Q34Game9SnakeCrow13StateStruggleFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 80292964 0028F8A4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80292968 0028F8A8  7C 08 02 A6 */	mflr r0
/* 8029296C 0028F8AC  7C 83 23 78 */	mr r3, r4
/* 80292970 0028F8B0  C0 02 D6 CC */	lfs f0, lbl_8051BA2C@sda21(r2)
/* 80292974 0028F8B4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80292978 0028F8B8  38 80 00 0B */	li r4, 0xb
/* 8029297C 0028F8BC  38 A0 00 00 */	li r5, 0
/* 80292980 0028F8C0  D0 03 02 C4 */	stfs f0, 0x2c4(r3)
/* 80292984 0028F8C4  D0 03 01 D4 */	stfs f0, 0x1d4(r3)
/* 80292988 0028F8C8  D0 03 01 D8 */	stfs f0, 0x1d8(r3)
/* 8029298C 0028F8CC  D0 03 01 DC */	stfs f0, 0x1dc(r3)
/* 80292990 0028F8D0  4B E7 26 75 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 80292994 0028F8D4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80292998 0028F8D8  7C 08 03 A6 */	mtlr r0
/* 8029299C 0028F8DC  38 21 00 10 */	addi r1, r1, 0x10
/* 802929A0 0028F8E0  4E 80 00 20 */	blr 
.endfn init__Q34Game9SnakeCrow13StateStruggleFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game9SnakeCrow13StateStruggleFPQ24Game9EnemyBase, global
/* 802929A4 0028F8E4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802929A8 0028F8E8  7C 08 02 A6 */	mflr r0
/* 802929AC 0028F8EC  C0 02 D7 04 */	lfs f0, lbl_8051BA64@sda21(r2)
/* 802929B0 0028F8F0  90 01 00 14 */	stw r0, 0x14(r1)
/* 802929B4 0028F8F4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802929B8 0028F8F8  7C 9F 23 78 */	mr r31, r4
/* 802929BC 0028F8FC  93 C1 00 08 */	stw r30, 8(r1)
/* 802929C0 0028F900  7C 7E 1B 78 */	mr r30, r3
/* 802929C4 0028F904  C0 24 02 C4 */	lfs f1, 0x2c4(r4)
/* 802929C8 0028F908  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802929CC 0028F90C  40 81 00 0C */	ble .L_802929D8
/* 802929D0 0028F910  7F E3 FB 78 */	mr r3, r31
/* 802929D4 0028F914  4B E7 28 CD */	bl finishMotion__Q24Game9EnemyBaseFv
.L_802929D8:
/* 802929D8 0028F918  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 802929DC 0028F91C  C0 3F 02 C4 */	lfs f1, 0x2c4(r31)
/* 802929E0 0028F920  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 802929E4 0028F924  EC 01 00 2A */	fadds f0, f1, f0
/* 802929E8 0028F928  D0 1F 02 C4 */	stfs f0, 0x2c4(r31)
/* 802929EC 0028F92C  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 802929F0 0028F930  88 03 00 24 */	lbz r0, 0x24(r3)
/* 802929F4 0028F934  28 00 00 00 */	cmplwi r0, 0
/* 802929F8 0028F938  41 82 00 EC */	beq .L_80292AE4
/* 802929FC 0028F93C  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 80292A00 0028F940  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 80292A04 0028F944  40 82 00 E0 */	bne .L_80292AE4
/* 80292A08 0028F948  C0 3F 02 00 */	lfs f1, 0x200(r31)
/* 80292A0C 0028F94C  C0 02 D6 CC */	lfs f0, lbl_8051BA2C@sda21(r2)
/* 80292A10 0028F950  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80292A14 0028F954  4C 40 13 82 */	cror 2, 0, 2
/* 80292A18 0028F958  40 82 00 28 */	bne .L_80292A40
/* 80292A1C 0028F95C  7F C3 F3 78 */	mr r3, r30
/* 80292A20 0028F960  7F E4 FB 78 */	mr r4, r31
/* 80292A24 0028F964  81 9E 00 00 */	lwz r12, 0(r30)
/* 80292A28 0028F968  38 A0 00 00 */	li r5, 0
/* 80292A2C 0028F96C  38 C0 00 00 */	li r6, 0
/* 80292A30 0028F970  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80292A34 0028F974  7D 89 03 A6 */	mtctr r12
/* 80292A38 0028F978  4E 80 04 21 */	bctrl 
/* 80292A3C 0028F97C  48 00 00 A8 */	b .L_80292AE4
.L_80292A40:
/* 80292A40 0028F980  7F E3 FB 78 */	mr r3, r31
/* 80292A44 0028F984  38 80 00 00 */	li r4, 0
/* 80292A48 0028F988  4B E8 1C 11 */	bl isStartFlick__Q24Game9EnemyFuncFPQ24Game9EnemyBaseb
/* 80292A4C 0028F98C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80292A50 0028F990  41 82 00 28 */	beq .L_80292A78
/* 80292A54 0028F994  7F C3 F3 78 */	mr r3, r30
/* 80292A58 0028F998  7F E4 FB 78 */	mr r4, r31
/* 80292A5C 0028F99C  81 9E 00 00 */	lwz r12, 0(r30)
/* 80292A60 0028F9A0  38 A0 00 04 */	li r5, 4
/* 80292A64 0028F9A4  38 C0 00 00 */	li r6, 0
/* 80292A68 0028F9A8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80292A6C 0028F9AC  7D 89 03 A6 */	mtctr r12
/* 80292A70 0028F9B0  4E 80 04 21 */	bctrl 
/* 80292A74 0028F9B4  48 00 00 70 */	b .L_80292AE4
.L_80292A78:
/* 80292A78 0028F9B8  7F E3 FB 78 */	mr r3, r31
/* 80292A7C 0028F9BC  38 80 00 05 */	li r4, 5
/* 80292A80 0028F9C0  48 00 13 BD */	bl getAttackPiki__Q34Game9SnakeCrow3ObjFi
/* 80292A84 0028F9C4  28 03 00 00 */	cmplwi r3, 0
/* 80292A88 0028F9C8  40 82 00 18 */	bne .L_80292AA0
/* 80292A8C 0028F9CC  7F E3 FB 78 */	mr r3, r31
/* 80292A90 0028F9D0  38 80 00 05 */	li r4, 5
/* 80292A94 0028F9D4  48 00 19 9D */	bl getAttackNavi__Q34Game9SnakeCrow3ObjFi
/* 80292A98 0028F9D8  28 03 00 00 */	cmplwi r3, 0
/* 80292A9C 0028F9DC  41 82 00 28 */	beq .L_80292AC4
.L_80292AA0:
/* 80292AA0 0028F9E0  7F C3 F3 78 */	mr r3, r30
/* 80292AA4 0028F9E4  7F E4 FB 78 */	mr r4, r31
/* 80292AA8 0028F9E8  81 9E 00 00 */	lwz r12, 0(r30)
/* 80292AAC 0028F9EC  38 A0 00 06 */	li r5, 6
/* 80292AB0 0028F9F0  38 C0 00 00 */	li r6, 0
/* 80292AB4 0028F9F4  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80292AB8 0028F9F8  7D 89 03 A6 */	mtctr r12
/* 80292ABC 0028F9FC  4E 80 04 21 */	bctrl 
/* 80292AC0 0028FA00  48 00 00 24 */	b .L_80292AE4
.L_80292AC4:
/* 80292AC4 0028FA04  7F C3 F3 78 */	mr r3, r30
/* 80292AC8 0028FA08  7F E4 FB 78 */	mr r4, r31
/* 80292ACC 0028FA0C  81 9E 00 00 */	lwz r12, 0(r30)
/* 80292AD0 0028FA10  38 A0 00 05 */	li r5, 5
/* 80292AD4 0028FA14  38 C0 00 00 */	li r6, 0
/* 80292AD8 0028FA18  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80292ADC 0028FA1C  7D 89 03 A6 */	mtctr r12
/* 80292AE0 0028FA20  4E 80 04 21 */	bctrl 
.L_80292AE4:
/* 80292AE4 0028FA24  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80292AE8 0028FA28  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80292AEC 0028FA2C  83 C1 00 08 */	lwz r30, 8(r1)
/* 80292AF0 0028FA30  7C 08 03 A6 */	mtlr r0
/* 80292AF4 0028FA34  38 21 00 10 */	addi r1, r1, 0x10
/* 80292AF8 0028FA38  4E 80 00 20 */	blr 
.endfn exec__Q34Game9SnakeCrow13StateStruggleFPQ24Game9EnemyBase

.fn cleanup__Q34Game9SnakeCrow13StateStruggleFPQ24Game9EnemyBase, global
/* 80292AFC 0028FA3C  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game9SnakeCrow13StateStruggleFPQ24Game9EnemyBase

.fn __sinit_SnakeCrowState_cpp, local
/* 80292B00 0028FA40  3C 80 80 51 */	lis r4, __float_nan@ha
/* 80292B04 0028FA44  38 00 FF FF */	li r0, -1
/* 80292B08 0028FA48  C0 04 48 B0 */	lfs f0, __float_nan@l(r4)
/* 80292B0C 0028FA4C  3C 60 80 4D */	lis r3, govNAN___Q24Game5P2JST@ha
/* 80292B10 0028FA50  90 0D 96 D8 */	stw r0, gu32NAN___Q24Game5P2JST@sda21(r13)
/* 80292B14 0028FA54  D4 03 B2 A8 */	stfsu f0, govNAN___Q24Game5P2JST@l(r3)
/* 80292B18 0028FA58  D0 0D 96 DC */	stfs f0, gfNAN___Q24Game5P2JST@sda21(r13)
/* 80292B1C 0028FA5C  D0 03 00 04 */	stfs f0, 4(r3)
/* 80292B20 0028FA60  D0 03 00 08 */	stfs f0, 8(r3)
/* 80292B24 0028FA64  4E 80 00 20 */	blr 
.endfn __sinit_SnakeCrowState_cpp
