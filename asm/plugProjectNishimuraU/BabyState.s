.include "macros.inc"
.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.obj __vt__Q34Game4Baby11StateAttack, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game4Baby11StateAttackFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game4Baby11StateAttackFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game4Baby11StateAttackFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game4Baby11StateAttack
.obj __vt__Q34Game4Baby9StateMove, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game4Baby9StateMoveFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game4Baby9StateMoveFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game4Baby9StateMoveFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game4Baby9StateMove
.obj __vt__Q34Game4Baby9StateBorn, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game4Baby9StateBornFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game4Baby9StateBornFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game4Baby9StateBornFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game4Baby9StateBorn
.obj __vt__Q23efx10TBabyBecha, weak
	.4byte 0
	.4byte 0
	.4byte create__Q23efx8TSimple1FPQ23efx3Arg
	.4byte forceKill__Q23efx8TSimple1Fv
	.4byte fade__Q23efx8TSimple1Fv
.endobj __vt__Q23efx10TBabyBecha
.obj __vt__Q34Game4Baby10StatePress, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game4Baby10StatePressFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game4Baby10StatePressFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game4Baby10StatePressFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game4Baby10StatePress
.obj __vt__Q34Game4Baby9StateDead, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game4Baby9StateDeadFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game4Baby9StateDeadFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game4Baby9StateDeadFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game4Baby9StateDead
.obj __vt__Q34Game4Baby5State, weak
	.4byte 0
	.4byte 0
	.4byte init__Q24Game13EnemyFSMStateFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte cleanup__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.endobj __vt__Q34Game4Baby5State
.obj __vt__Q34Game4Baby3FSM, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game4Baby3FSMFPQ24Game9EnemyBase
	.4byte start__Q24Game17EnemyStateMachineFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte exec__Q24Game17EnemyStateMachineFPQ24Game9EnemyBase
	.4byte transit__Q24Game17EnemyStateMachineFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game17EnemyStateMachineFPQ24Game9EnemyBaseR8Graphics
	.4byte getCurrState__Q24Game17EnemyStateMachineFPQ24Game9EnemyBase
	.4byte setCurrState__Q24Game17EnemyStateMachineFPQ24Game9EnemyBasePQ24Game13EnemyFSMState
.endobj __vt__Q34Game4Baby3FSM

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
.obj lbl_8051B888, local
	.asciz "dead"
.endobj lbl_8051B888
.balign 4
.obj lbl_8051B890, local
	.asciz "press"
.endobj lbl_8051B890
.balign 4
.obj lbl_8051B898, local
	.asciz "born"
.endobj lbl_8051B898
.balign 4
.obj lbl_8051B8A0, local
	.asciz "move"
.endobj lbl_8051B8A0
.balign 4
.obj lbl_8051B8A8, local
	.asciz "attack"
.endobj lbl_8051B8A8
.balign 4
.obj lbl_8051B8B0, local
	.float 0.0
.endobj lbl_8051B8B0
.obj lbl_8051B8B4, local
	.float 0.95
.endobj lbl_8051B8B4
.obj lbl_8051B8B8, local # pi
	.float 3.1415927
.endobj lbl_8051B8B8
.obj lbl_8051B8BC, local
	.float 0.0055555557
.endobj lbl_8051B8BC
.obj lbl_8051B8C0, local
	.float 0.25
.endobj lbl_8051B8C0

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.fn init__Q34Game4Baby3FSMFPQ24Game9EnemyBase, global
/* 8028C584 002894C4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8028C588 002894C8  7C 08 02 A6 */	mflr r0
/* 8028C58C 002894CC  38 80 00 05 */	li r4, 5
/* 8028C590 002894D0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8028C594 002894D4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8028C598 002894D8  7C 7F 1B 78 */	mr r31, r3
/* 8028C59C 002894DC  4B EA 42 C9 */	bl create__Q24Game17EnemyStateMachineFi
/* 8028C5A0 002894E0  38 60 00 10 */	li r3, 0x10
/* 8028C5A4 002894E4  4B D9 79 01 */	bl __nw__FUl
/* 8028C5A8 002894E8  7C 64 1B 79 */	or. r4, r3, r3
/* 8028C5AC 002894EC  41 82 00 3C */	beq .L_8028C5E8
/* 8028C5B0 002894F0  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 8028C5B4 002894F4  3C A0 80 4D */	lis r5, __vt__Q34Game4Baby5State@ha
/* 8028C5B8 002894F8  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 8028C5BC 002894FC  3C 60 80 4D */	lis r3, __vt__Q34Game4Baby9StateDead@ha
/* 8028C5C0 00289500  90 04 00 00 */	stw r0, 0(r4)
/* 8028C5C4 00289504  38 E0 00 00 */	li r7, 0
/* 8028C5C8 00289508  38 C5 A4 10 */	addi r6, r5, __vt__Q34Game4Baby5State@l
/* 8028C5CC 0028950C  38 A2 D5 28 */	addi r5, r2, lbl_8051B888@sda21
/* 8028C5D0 00289510  90 E4 00 04 */	stw r7, 4(r4)
/* 8028C5D4 00289514  38 03 A3 EC */	addi r0, r3, __vt__Q34Game4Baby9StateDead@l
/* 8028C5D8 00289518  90 E4 00 08 */	stw r7, 8(r4)
/* 8028C5DC 0028951C  90 C4 00 00 */	stw r6, 0(r4)
/* 8028C5E0 00289520  90 A4 00 0C */	stw r5, 0xc(r4)
/* 8028C5E4 00289524  90 04 00 00 */	stw r0, 0(r4)
.L_8028C5E8:
/* 8028C5E8 00289528  7F E3 FB 78 */	mr r3, r31
/* 8028C5EC 0028952C  4B EA 43 1D */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 8028C5F0 00289530  38 60 00 10 */	li r3, 0x10
/* 8028C5F4 00289534  4B D9 78 B1 */	bl __nw__FUl
/* 8028C5F8 00289538  7C 64 1B 79 */	or. r4, r3, r3
/* 8028C5FC 0028953C  41 82 00 40 */	beq .L_8028C63C
/* 8028C600 00289540  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 8028C604 00289544  3C A0 80 4D */	lis r5, __vt__Q34Game4Baby5State@ha
/* 8028C608 00289548  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 8028C60C 0028954C  3C 60 80 4D */	lis r3, __vt__Q34Game4Baby10StatePress@ha
/* 8028C610 00289550  90 04 00 00 */	stw r0, 0(r4)
/* 8028C614 00289554  38 00 00 01 */	li r0, 1
/* 8028C618 00289558  38 E0 00 00 */	li r7, 0
/* 8028C61C 0028955C  38 C5 A4 10 */	addi r6, r5, __vt__Q34Game4Baby5State@l
/* 8028C620 00289560  90 04 00 04 */	stw r0, 4(r4)
/* 8028C624 00289564  38 A2 D5 30 */	addi r5, r2, lbl_8051B890@sda21
/* 8028C628 00289568  38 03 A3 C8 */	addi r0, r3, __vt__Q34Game4Baby10StatePress@l
/* 8028C62C 0028956C  90 E4 00 08 */	stw r7, 8(r4)
/* 8028C630 00289570  90 C4 00 00 */	stw r6, 0(r4)
/* 8028C634 00289574  90 A4 00 0C */	stw r5, 0xc(r4)
/* 8028C638 00289578  90 04 00 00 */	stw r0, 0(r4)
.L_8028C63C:
/* 8028C63C 0028957C  7F E3 FB 78 */	mr r3, r31
/* 8028C640 00289580  4B EA 42 C9 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 8028C644 00289584  38 60 00 10 */	li r3, 0x10
/* 8028C648 00289588  4B D9 78 5D */	bl __nw__FUl
/* 8028C64C 0028958C  7C 64 1B 79 */	or. r4, r3, r3
/* 8028C650 00289590  41 82 00 40 */	beq .L_8028C690
/* 8028C654 00289594  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 8028C658 00289598  3C A0 80 4D */	lis r5, __vt__Q34Game4Baby5State@ha
/* 8028C65C 0028959C  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 8028C660 002895A0  3C 60 80 4D */	lis r3, __vt__Q34Game4Baby9StateBorn@ha
/* 8028C664 002895A4  90 04 00 00 */	stw r0, 0(r4)
/* 8028C668 002895A8  38 00 00 02 */	li r0, 2
/* 8028C66C 002895AC  38 E0 00 00 */	li r7, 0
/* 8028C670 002895B0  38 C5 A4 10 */	addi r6, r5, __vt__Q34Game4Baby5State@l
/* 8028C674 002895B4  90 04 00 04 */	stw r0, 4(r4)
/* 8028C678 002895B8  38 A2 D5 38 */	addi r5, r2, lbl_8051B898@sda21
/* 8028C67C 002895BC  38 03 A3 90 */	addi r0, r3, __vt__Q34Game4Baby9StateBorn@l
/* 8028C680 002895C0  90 E4 00 08 */	stw r7, 8(r4)
/* 8028C684 002895C4  90 C4 00 00 */	stw r6, 0(r4)
/* 8028C688 002895C8  90 A4 00 0C */	stw r5, 0xc(r4)
/* 8028C68C 002895CC  90 04 00 00 */	stw r0, 0(r4)
.L_8028C690:
/* 8028C690 002895D0  7F E3 FB 78 */	mr r3, r31
/* 8028C694 002895D4  4B EA 42 75 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 8028C698 002895D8  38 60 00 10 */	li r3, 0x10
/* 8028C69C 002895DC  4B D9 78 09 */	bl __nw__FUl
/* 8028C6A0 002895E0  7C 64 1B 79 */	or. r4, r3, r3
/* 8028C6A4 002895E4  41 82 00 40 */	beq .L_8028C6E4
/* 8028C6A8 002895E8  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 8028C6AC 002895EC  3C A0 80 4D */	lis r5, __vt__Q34Game4Baby5State@ha
/* 8028C6B0 002895F0  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 8028C6B4 002895F4  3C 60 80 4D */	lis r3, __vt__Q34Game4Baby9StateMove@ha
/* 8028C6B8 002895F8  90 04 00 00 */	stw r0, 0(r4)
/* 8028C6BC 002895FC  38 00 00 03 */	li r0, 3
/* 8028C6C0 00289600  38 E0 00 00 */	li r7, 0
/* 8028C6C4 00289604  38 C5 A4 10 */	addi r6, r5, __vt__Q34Game4Baby5State@l
/* 8028C6C8 00289608  90 04 00 04 */	stw r0, 4(r4)
/* 8028C6CC 0028960C  38 A2 D5 40 */	addi r5, r2, lbl_8051B8A0@sda21
/* 8028C6D0 00289610  38 03 A3 6C */	addi r0, r3, __vt__Q34Game4Baby9StateMove@l
/* 8028C6D4 00289614  90 E4 00 08 */	stw r7, 8(r4)
/* 8028C6D8 00289618  90 C4 00 00 */	stw r6, 0(r4)
/* 8028C6DC 0028961C  90 A4 00 0C */	stw r5, 0xc(r4)
/* 8028C6E0 00289620  90 04 00 00 */	stw r0, 0(r4)
.L_8028C6E4:
/* 8028C6E4 00289624  7F E3 FB 78 */	mr r3, r31
/* 8028C6E8 00289628  4B EA 42 21 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 8028C6EC 0028962C  38 60 00 10 */	li r3, 0x10
/* 8028C6F0 00289630  4B D9 77 B5 */	bl __nw__FUl
/* 8028C6F4 00289634  7C 64 1B 79 */	or. r4, r3, r3
/* 8028C6F8 00289638  41 82 00 40 */	beq .L_8028C738
/* 8028C6FC 0028963C  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 8028C700 00289640  3C A0 80 4D */	lis r5, __vt__Q34Game4Baby5State@ha
/* 8028C704 00289644  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 8028C708 00289648  3C 60 80 4D */	lis r3, __vt__Q34Game4Baby11StateAttack@ha
/* 8028C70C 0028964C  90 04 00 00 */	stw r0, 0(r4)
/* 8028C710 00289650  38 00 00 04 */	li r0, 4
/* 8028C714 00289654  38 E0 00 00 */	li r7, 0
/* 8028C718 00289658  38 C5 A4 10 */	addi r6, r5, __vt__Q34Game4Baby5State@l
/* 8028C71C 0028965C  90 04 00 04 */	stw r0, 4(r4)
/* 8028C720 00289660  38 A2 D5 48 */	addi r5, r2, lbl_8051B8A8@sda21
/* 8028C724 00289664  38 03 A3 48 */	addi r0, r3, __vt__Q34Game4Baby11StateAttack@l
/* 8028C728 00289668  90 E4 00 08 */	stw r7, 8(r4)
/* 8028C72C 0028966C  90 C4 00 00 */	stw r6, 0(r4)
/* 8028C730 00289670  90 A4 00 0C */	stw r5, 0xc(r4)
/* 8028C734 00289674  90 04 00 00 */	stw r0, 0(r4)
.L_8028C738:
/* 8028C738 00289678  7F E3 FB 78 */	mr r3, r31
/* 8028C73C 0028967C  4B EA 41 CD */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 8028C740 00289680  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8028C744 00289684  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8028C748 00289688  7C 08 03 A6 */	mtlr r0
/* 8028C74C 0028968C  38 21 00 10 */	addi r1, r1, 0x10
/* 8028C750 00289690  4E 80 00 20 */	blr 
.endfn init__Q34Game4Baby3FSMFPQ24Game9EnemyBase

.fn init__Q34Game4Baby9StateDeadFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 8028C754 00289694  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8028C758 00289698  7C 08 02 A6 */	mflr r0
/* 8028C75C 0028969C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8028C760 002896A0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8028C764 002896A4  7C 9F 23 78 */	mr r31, r4
/* 8028C768 002896A8  7F E3 FB 78 */	mr r3, r31
/* 8028C76C 002896AC  48 00 15 E9 */	bl createHoney__Q34Game4Baby3ObjFv
/* 8028C770 002896B0  7F E3 FB 78 */	mr r3, r31
/* 8028C774 002896B4  4B E7 8F AD */	bl deathProcedure__Q24Game9EnemyBaseFv
/* 8028C778 002896B8  C0 02 D5 50 */	lfs f0, lbl_8051B8B0@sda21(r2)
/* 8028C77C 002896BC  7F E3 FB 78 */	mr r3, r31
/* 8028C780 002896C0  38 80 00 00 */	li r4, 0
/* 8028C784 002896C4  38 A0 00 00 */	li r5, 0
/* 8028C788 002896C8  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 8028C78C 002896CC  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 8028C790 002896D0  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 8028C794 002896D4  4B E7 88 71 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 8028C798 002896D8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8028C79C 002896DC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8028C7A0 002896E0  7C 08 03 A6 */	mtlr r0
/* 8028C7A4 002896E4  38 21 00 10 */	addi r1, r1, 0x10
/* 8028C7A8 002896E8  4E 80 00 20 */	blr 
.endfn init__Q34Game4Baby9StateDeadFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game4Baby9StateDeadFPQ24Game9EnemyBase, global
/* 8028C7AC 002896EC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8028C7B0 002896F0  7C 08 02 A6 */	mflr r0
/* 8028C7B4 002896F4  90 01 00 14 */	stw r0, 0x14(r1)
/* 8028C7B8 002896F8  80 64 01 88 */	lwz r3, 0x188(r4)
/* 8028C7BC 002896FC  88 03 00 24 */	lbz r0, 0x24(r3)
/* 8028C7C0 00289700  28 00 00 00 */	cmplwi r0, 0
/* 8028C7C4 00289704  41 82 00 1C */	beq .L_8028C7E0
/* 8028C7C8 00289708  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 8028C7CC 0028970C  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 8028C7D0 00289710  40 82 00 10 */	bne .L_8028C7E0
/* 8028C7D4 00289714  7C 83 23 78 */	mr r3, r4
/* 8028C7D8 00289718  38 80 00 00 */	li r4, 0
/* 8028C7DC 0028971C  4B EA E9 15 */	bl kill__Q24Game8CreatureFPQ24Game15CreatureKillArg
.L_8028C7E0:
/* 8028C7E0 00289720  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8028C7E4 00289724  7C 08 03 A6 */	mtlr r0
/* 8028C7E8 00289728  38 21 00 10 */	addi r1, r1, 0x10
/* 8028C7EC 0028972C  4E 80 00 20 */	blr 
.endfn exec__Q34Game4Baby9StateDeadFPQ24Game9EnemyBase

.fn cleanup__Q34Game4Baby9StateDeadFPQ24Game9EnemyBase, global
/* 8028C7F0 00289730  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game4Baby9StateDeadFPQ24Game9EnemyBase

.fn init__Q34Game4Baby10StatePressFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 8028C7F4 00289734  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 8028C7F8 00289738  7C 08 02 A6 */	mflr r0
/* 8028C7FC 0028973C  90 01 00 44 */	stw r0, 0x44(r1)
/* 8028C800 00289740  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 8028C804 00289744  7C 9F 23 78 */	mr r31, r4
/* 8028C808 00289748  7F E3 FB 78 */	mr r3, r31
/* 8028C80C 0028974C  48 00 15 49 */	bl createHoney__Q34Game4Baby3ObjFv
/* 8028C810 00289750  C0 02 D5 50 */	lfs f0, lbl_8051B8B0@sda21(r2)
/* 8028C814 00289754  7F E3 FB 78 */	mr r3, r31
/* 8028C818 00289758  D0 1F 02 00 */	stfs f0, 0x200(r31)
/* 8028C81C 0028975C  4B E7 8F 05 */	bl deathProcedure__Q24Game9EnemyBaseFv
/* 8028C820 00289760  C0 02 D5 50 */	lfs f0, lbl_8051B8B0@sda21(r2)
/* 8028C824 00289764  7F E3 FB 78 */	mr r3, r31
/* 8028C828 00289768  38 80 00 01 */	li r4, 1
/* 8028C82C 0028976C  38 A0 00 00 */	li r5, 0
/* 8028C830 00289770  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 8028C834 00289774  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 8028C838 00289778  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
/* 8028C83C 0028977C  4B E7 87 C9 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 8028C840 00289780  7F E4 FB 78 */	mr r4, r31
/* 8028C844 00289784  38 61 00 08 */	addi r3, r1, 8
/* 8028C848 00289788  81 9F 00 00 */	lwz r12, 0(r31)
/* 8028C84C 0028978C  81 8C 00 08 */	lwz r12, 8(r12)
/* 8028C850 00289790  7D 89 03 A6 */	mtctr r12
/* 8028C854 00289794  4E 80 04 21 */	bctrl 
/* 8028C858 00289798  3C 80 80 4B */	lis r4, __vt__Q23efx5TBase@ha
/* 8028C85C 0028979C  3C 60 80 4E */	lis r3, __vt__Q23efx8TSimple1@ha
/* 8028C860 002897A0  38 04 A7 F8 */	addi r0, r4, __vt__Q23efx5TBase@l
/* 8028C864 002897A4  C0 41 00 08 */	lfs f2, 8(r1)
/* 8028C868 002897A8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8028C86C 002897AC  38 03 6A 78 */	addi r0, r3, __vt__Q23efx8TSimple1@l
/* 8028C870 002897B0  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 8028C874 002897B4  3C 80 80 4B */	lis r4, __vt__Q23efx3Arg@ha
/* 8028C878 002897B8  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 8028C87C 002897BC  3C 60 80 4D */	lis r3, __vt__Q23efx10TBabyBecha@ha
/* 8028C880 002897C0  38 84 A7 EC */	addi r4, r4, __vt__Q23efx3Arg@l
/* 8028C884 002897C4  38 C0 00 03 */	li r6, 3
/* 8028C888 002897C8  38 A0 00 00 */	li r5, 0
/* 8028C88C 002897CC  90 01 00 14 */	stw r0, 0x14(r1)
/* 8028C890 002897D0  38 03 A3 B4 */	addi r0, r3, __vt__Q23efx10TBabyBecha@l
/* 8028C894 002897D4  38 61 00 14 */	addi r3, r1, 0x14
/* 8028C898 002897D8  90 81 00 20 */	stw r4, 0x20(r1)
/* 8028C89C 002897DC  38 81 00 20 */	addi r4, r1, 0x20
/* 8028C8A0 002897E0  D0 41 00 24 */	stfs f2, 0x24(r1)
/* 8028C8A4 002897E4  D0 21 00 28 */	stfs f1, 0x28(r1)
/* 8028C8A8 002897E8  D0 01 00 2C */	stfs f0, 0x2c(r1)
/* 8028C8AC 002897EC  B0 C1 00 18 */	sth r6, 0x18(r1)
/* 8028C8B0 002897F0  90 A1 00 1C */	stw r5, 0x1c(r1)
/* 8028C8B4 002897F4  90 01 00 14 */	stw r0, 0x14(r1)
/* 8028C8B8 002897F8  48 12 26 CD */	bl create__Q23efx8TSimple1FPQ23efx3Arg
/* 8028C8BC 002897FC  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8028C8C0 00289800  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 8028C8C4 00289804  7C 08 03 A6 */	mtlr r0
/* 8028C8C8 00289808  38 21 00 40 */	addi r1, r1, 0x40
/* 8028C8CC 0028980C  4E 80 00 20 */	blr 
.endfn init__Q34Game4Baby10StatePressFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game4Baby10StatePressFPQ24Game9EnemyBase, global
/* 8028C8D0 00289810  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8028C8D4 00289814  7C 08 02 A6 */	mflr r0
/* 8028C8D8 00289818  90 01 00 14 */	stw r0, 0x14(r1)
/* 8028C8DC 0028981C  80 64 01 88 */	lwz r3, 0x188(r4)
/* 8028C8E0 00289820  88 03 00 24 */	lbz r0, 0x24(r3)
/* 8028C8E4 00289824  28 00 00 00 */	cmplwi r0, 0
/* 8028C8E8 00289828  41 82 00 1C */	beq .L_8028C904
/* 8028C8EC 0028982C  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 8028C8F0 00289830  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 8028C8F4 00289834  40 82 00 10 */	bne .L_8028C904
/* 8028C8F8 00289838  7C 83 23 78 */	mr r3, r4
/* 8028C8FC 0028983C  38 80 00 00 */	li r4, 0
/* 8028C900 00289840  4B EA E7 F1 */	bl kill__Q24Game8CreatureFPQ24Game15CreatureKillArg
.L_8028C904:
/* 8028C904 00289844  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8028C908 00289848  7C 08 03 A6 */	mtlr r0
/* 8028C90C 0028984C  38 21 00 10 */	addi r1, r1, 0x10
/* 8028C910 00289850  4E 80 00 20 */	blr 
.endfn exec__Q34Game4Baby10StatePressFPQ24Game9EnemyBase

.fn cleanup__Q34Game4Baby10StatePressFPQ24Game9EnemyBase, global
/* 8028C914 00289854  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game4Baby10StatePressFPQ24Game9EnemyBase

.fn init__Q34Game4Baby9StateBornFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 8028C918 00289858  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8028C91C 0028985C  7C 08 02 A6 */	mflr r0
/* 8028C920 00289860  90 01 00 14 */	stw r0, 0x14(r1)
/* 8028C924 00289864  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8028C928 00289868  7C 9F 23 78 */	mr r31, r4
/* 8028C92C 0028986C  7F E3 FB 78 */	mr r3, r31
/* 8028C930 00289870  48 00 15 D1 */	bl createBornEffect__Q34Game4Baby3ObjFv
/* 8028C934 00289874  7F E3 FB 78 */	mr r3, r31
/* 8028C938 00289878  38 80 00 05 */	li r4, 5
/* 8028C93C 0028987C  38 A0 00 00 */	li r5, 0
/* 8028C940 00289880  4B E7 86 C5 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 8028C944 00289884  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8028C948 00289888  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8028C94C 0028988C  7C 08 03 A6 */	mtlr r0
/* 8028C950 00289890  38 21 00 10 */	addi r1, r1, 0x10
/* 8028C954 00289894  4E 80 00 20 */	blr 
.endfn init__Q34Game4Baby9StateBornFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game4Baby9StateBornFPQ24Game9EnemyBase, global
/* 8028C958 00289898  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8028C95C 0028989C  7C 08 02 A6 */	mflr r0
/* 8028C960 002898A0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8028C964 002898A4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8028C968 002898A8  7C 9F 23 78 */	mr r31, r4
/* 8028C96C 002898AC  93 C1 00 08 */	stw r30, 8(r1)
/* 8028C970 002898B0  7C 7E 1B 78 */	mr r30, r3
/* 8028C974 002898B4  80 04 00 C8 */	lwz r0, 0xc8(r4)
/* 8028C978 002898B8  28 00 00 00 */	cmplwi r0, 0
/* 8028C97C 002898BC  41 82 00 28 */	beq .L_8028C9A4
/* 8028C980 002898C0  C0 5F 01 D4 */	lfs f2, 0x1d4(r31)
/* 8028C984 002898C4  7F E3 FB 78 */	mr r3, r31
/* 8028C988 002898C8  C0 02 D5 54 */	lfs f0, lbl_8051B8B4@sda21(r2)
/* 8028C98C 002898CC  C0 7F 01 DC */	lfs f3, 0x1dc(r31)
/* 8028C990 002898D0  EC 42 00 32 */	fmuls f2, f2, f0
/* 8028C994 002898D4  EC 63 00 32 */	fmuls f3, f3, f0
/* 8028C998 002898D8  D0 5F 01 D4 */	stfs f2, 0x1d4(r31)
/* 8028C99C 002898DC  D0 7F 01 DC */	stfs f3, 0x1dc(r31)
/* 8028C9A0 002898E0  4B E7 89 01 */	bl finishMotion__Q24Game9EnemyBaseFv
.L_8028C9A4:
/* 8028C9A4 002898E4  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 8028C9A8 002898E8  88 03 00 24 */	lbz r0, 0x24(r3)
/* 8028C9AC 002898EC  28 00 00 00 */	cmplwi r0, 0
/* 8028C9B0 002898F0  41 82 00 68 */	beq .L_8028CA18
/* 8028C9B4 002898F4  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 8028C9B8 002898F8  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 8028C9BC 002898FC  40 82 00 5C */	bne .L_8028CA18
/* 8028C9C0 00289900  C0 3F 02 00 */	lfs f1, 0x200(r31)
/* 8028C9C4 00289904  C0 02 D5 50 */	lfs f0, lbl_8051B8B0@sda21(r2)
/* 8028C9C8 00289908  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8028C9CC 0028990C  4C 40 13 82 */	cror 2, 0, 2
/* 8028C9D0 00289910  40 82 00 28 */	bne .L_8028C9F8
/* 8028C9D4 00289914  7F C3 F3 78 */	mr r3, r30
/* 8028C9D8 00289918  7F E4 FB 78 */	mr r4, r31
/* 8028C9DC 0028991C  81 9E 00 00 */	lwz r12, 0(r30)
/* 8028C9E0 00289920  38 A0 00 00 */	li r5, 0
/* 8028C9E4 00289924  38 C0 00 00 */	li r6, 0
/* 8028C9E8 00289928  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8028C9EC 0028992C  7D 89 03 A6 */	mtctr r12
/* 8028C9F0 00289930  4E 80 04 21 */	bctrl 
/* 8028C9F4 00289934  48 00 00 24 */	b .L_8028CA18
.L_8028C9F8:
/* 8028C9F8 00289938  7F C3 F3 78 */	mr r3, r30
/* 8028C9FC 0028993C  7F E4 FB 78 */	mr r4, r31
/* 8028CA00 00289940  81 9E 00 00 */	lwz r12, 0(r30)
/* 8028CA04 00289944  38 A0 00 03 */	li r5, 3
/* 8028CA08 00289948  38 C0 00 00 */	li r6, 0
/* 8028CA0C 0028994C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8028CA10 00289950  7D 89 03 A6 */	mtctr r12
/* 8028CA14 00289954  4E 80 04 21 */	bctrl 
.L_8028CA18:
/* 8028CA18 00289958  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8028CA1C 0028995C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8028CA20 00289960  83 C1 00 08 */	lwz r30, 8(r1)
/* 8028CA24 00289964  7C 08 03 A6 */	mtlr r0
/* 8028CA28 00289968  38 21 00 10 */	addi r1, r1, 0x10
/* 8028CA2C 0028996C  4E 80 00 20 */	blr 
.endfn exec__Q34Game4Baby9StateBornFPQ24Game9EnemyBase

.fn cleanup__Q34Game4Baby9StateBornFPQ24Game9EnemyBase, global
/* 8028CA30 00289970  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game4Baby9StateBornFPQ24Game9EnemyBase

.fn init__Q34Game4Baby9StateMoveFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 8028CA34 00289974  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8028CA38 00289978  7C 08 02 A6 */	mflr r0
/* 8028CA3C 0028997C  7C 83 23 78 */	mr r3, r4
/* 8028CA40 00289980  38 80 00 02 */	li r4, 2
/* 8028CA44 00289984  90 01 00 14 */	stw r0, 0x14(r1)
/* 8028CA48 00289988  38 00 00 00 */	li r0, 0
/* 8028CA4C 0028998C  38 A0 00 00 */	li r5, 0
/* 8028CA50 00289990  90 03 02 30 */	stw r0, 0x230(r3)
/* 8028CA54 00289994  4B E7 85 B1 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 8028CA58 00289998  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8028CA5C 0028999C  7C 08 03 A6 */	mtlr r0
/* 8028CA60 002899A0  38 21 00 10 */	addi r1, r1, 0x10
/* 8028CA64 002899A4  4E 80 00 20 */	blr 
.endfn init__Q34Game4Baby9StateMoveFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game4Baby9StateMoveFPQ24Game9EnemyBase, global
/* 8028CA68 002899A8  94 21 FF 10 */	stwu r1, -0xf0(r1)
/* 8028CA6C 002899AC  7C 08 02 A6 */	mflr r0
/* 8028CA70 002899B0  90 01 00 F4 */	stw r0, 0xf4(r1)
/* 8028CA74 002899B4  DB E1 00 E0 */	stfd f31, 0xe0(r1)
/* 8028CA78 002899B8  F3 E1 00 E8 */	psq_st f31, 232(r1), 0, qr0
/* 8028CA7C 002899BC  DB C1 00 D0 */	stfd f30, 0xd0(r1)
/* 8028CA80 002899C0  F3 C1 00 D8 */	psq_st f30, 216(r1), 0, qr0
/* 8028CA84 002899C4  DB A1 00 C0 */	stfd f29, 0xc0(r1)
/* 8028CA88 002899C8  F3 A1 00 C8 */	psq_st f29, 200(r1), 0, qr0
/* 8028CA8C 002899CC  DB 81 00 B0 */	stfd f28, 0xb0(r1)
/* 8028CA90 002899D0  F3 81 00 B8 */	psq_st f28, 184(r1), 0, qr0
/* 8028CA94 002899D4  DB 61 00 A0 */	stfd f27, 0xa0(r1)
/* 8028CA98 002899D8  F3 61 00 A8 */	psq_st f27, 168(r1), 0, qr0
/* 8028CA9C 002899DC  DB 41 00 90 */	stfd f26, 0x90(r1)
/* 8028CAA0 002899E0  F3 41 00 98 */	psq_st f26, 152(r1), 0, qr0
/* 8028CAA4 002899E4  93 E1 00 8C */	stw r31, 0x8c(r1)
/* 8028CAA8 002899E8  93 C1 00 88 */	stw r30, 0x88(r1)
/* 8028CAAC 002899EC  93 A1 00 84 */	stw r29, 0x84(r1)
/* 8028CAB0 002899F0  93 81 00 80 */	stw r28, 0x80(r1)
/* 8028CAB4 002899F4  C0 02 D5 50 */	lfs f0, lbl_8051B8B0@sda21(r2)
/* 8028CAB8 002899F8  7C 9E 23 78 */	mr r30, r4
/* 8028CABC 002899FC  C0 24 02 00 */	lfs f1, 0x200(r4)
/* 8028CAC0 00289A00  7C 7C 1B 78 */	mr r28, r3
/* 8028CAC4 00289A04  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8028CAC8 00289A08  4C 40 13 82 */	cror 2, 0, 2
/* 8028CACC 00289A0C  40 82 00 20 */	bne .L_8028CAEC
/* 8028CAD0 00289A10  81 83 00 00 */	lwz r12, 0(r3)
/* 8028CAD4 00289A14  38 A0 00 00 */	li r5, 0
/* 8028CAD8 00289A18  38 C0 00 00 */	li r6, 0
/* 8028CADC 00289A1C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8028CAE0 00289A20  7D 89 03 A6 */	mtctr r12
/* 8028CAE4 00289A24  4E 80 04 21 */	bctrl 
/* 8028CAE8 00289A28  48 00 03 98 */	b .L_8028CE80
.L_8028CAEC:
/* 8028CAEC 00289A2C  80 FE 00 C0 */	lwz r7, 0xc0(r30)
/* 8028CAF0 00289A30  7F C3 F3 78 */	mr r3, r30
/* 8028CAF4 00289A34  38 80 00 00 */	li r4, 0
/* 8028CAF8 00289A38  38 A0 00 00 */	li r5, 0
/* 8028CAFC 00289A3C  C0 27 04 24 */	lfs f1, 0x424(r7)
/* 8028CB00 00289A40  38 C0 00 00 */	li r6, 0
/* 8028CB04 00289A44  C0 47 03 D4 */	lfs f2, 0x3d4(r7)
/* 8028CB08 00289A48  4B E8 65 49 */	bl "getNearestPikminOrNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffPfP23Condition<Q24Game4Navi>P23Condition<Q24Game4Piki>"
/* 8028CB0C 00289A4C  7C 7D 1B 79 */	or. r29, r3, r3
/* 8028CB10 00289A50  41 82 03 2C */	beq .L_8028CE3C
/* 8028CB14 00289A54  7F A4 EB 78 */	mr r4, r29
/* 8028CB18 00289A58  80 BE 00 C0 */	lwz r5, 0xc0(r30)
/* 8028CB1C 00289A5C  81 9D 00 00 */	lwz r12, 0(r29)
/* 8028CB20 00289A60  38 61 00 50 */	addi r3, r1, 0x50
/* 8028CB24 00289A64  C3 A5 03 34 */	lfs f29, 0x334(r5)
/* 8028CB28 00289A68  81 8C 00 08 */	lwz r12, 8(r12)
/* 8028CB2C 00289A6C  C3 C5 03 0C */	lfs f30, 0x30c(r5)
/* 8028CB30 00289A70  7D 89 03 A6 */	mtctr r12
/* 8028CB34 00289A74  4E 80 04 21 */	bctrl 
/* 8028CB38 00289A78  7F C4 F3 78 */	mr r4, r30
/* 8028CB3C 00289A7C  38 61 00 5C */	addi r3, r1, 0x5c
/* 8028CB40 00289A80  81 9E 00 00 */	lwz r12, 0(r30)
/* 8028CB44 00289A84  C3 41 00 50 */	lfs f26, 0x50(r1)
/* 8028CB48 00289A88  81 8C 00 08 */	lwz r12, 8(r12)
/* 8028CB4C 00289A8C  C3 61 00 58 */	lfs f27, 0x58(r1)
/* 8028CB50 00289A90  7D 89 03 A6 */	mtctr r12
/* 8028CB54 00289A94  4E 80 04 21 */	bctrl 
/* 8028CB58 00289A98  C0 21 00 5C */	lfs f1, 0x5c(r1)
/* 8028CB5C 00289A9C  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 8028CB60 00289AA0  C0 01 00 64 */	lfs f0, 0x64(r1)
/* 8028CB64 00289AA4  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 8028CB68 00289AA8  EC 3A 08 28 */	fsubs f1, f26, f1
/* 8028CB6C 00289AAC  EC 5B 00 28 */	fsubs f2, f27, f0
/* 8028CB70 00289AB0  4B DA 85 99 */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 8028CB74 00289AB4  48 18 50 5D */	bl roundAng__Ff
/* 8028CB78 00289AB8  81 9E 00 00 */	lwz r12, 0(r30)
/* 8028CB7C 00289ABC  FF 40 08 90 */	fmr f26, f1
/* 8028CB80 00289AC0  7F C3 F3 78 */	mr r3, r30
/* 8028CB84 00289AC4  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 8028CB88 00289AC8  7D 89 03 A6 */	mtctr r12
/* 8028CB8C 00289ACC  4E 80 04 21 */	bctrl 
/* 8028CB90 00289AD0  FC 40 08 90 */	fmr f2, f1
/* 8028CB94 00289AD4  FC 20 D0 90 */	fmr f1, f26
/* 8028CB98 00289AD8  48 18 50 65 */	bl angDist__Fff
/* 8028CB9C 00289ADC  FF E0 08 90 */	fmr f31, f1
/* 8028CBA0 00289AE0  C0 02 D5 5C */	lfs f0, lbl_8051B8BC@sda21(r2)
/* 8028CBA4 00289AE4  C0 22 D5 58 */	lfs f1, lbl_8051B8B8@sda21(r2)
/* 8028CBA8 00289AE8  EC 00 07 72 */	fmuls f0, f0, f29
/* 8028CBAC 00289AEC  EF 9F 07 B2 */	fmuls f28, f31, f30
/* 8028CBB0 00289AF0  EC 21 00 32 */	fmuls f1, f1, f0
/* 8028CBB4 00289AF4  FC 00 E2 10 */	fabs f0, f28
/* 8028CBB8 00289AF8  FC 00 00 18 */	frsp f0, f0
/* 8028CBBC 00289AFC  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 8028CBC0 00289B00  40 81 00 1C */	ble .L_8028CBDC
/* 8028CBC4 00289B04  C0 02 D5 50 */	lfs f0, lbl_8051B8B0@sda21(r2)
/* 8028CBC8 00289B08  FC 1C 00 40 */	fcmpo cr0, f28, f0
/* 8028CBCC 00289B0C  40 81 00 0C */	ble .L_8028CBD8
/* 8028CBD0 00289B10  FF 80 08 90 */	fmr f28, f1
/* 8028CBD4 00289B14  48 00 00 08 */	b .L_8028CBDC
.L_8028CBD8:
/* 8028CBD8 00289B18  FF 80 08 50 */	fneg f28, f1
.L_8028CBDC:
/* 8028CBDC 00289B1C  7F C3 F3 78 */	mr r3, r30
/* 8028CBE0 00289B20  81 9E 00 00 */	lwz r12, 0(r30)
/* 8028CBE4 00289B24  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 8028CBE8 00289B28  7D 89 03 A6 */	mtctr r12
/* 8028CBEC 00289B2C  4E 80 04 21 */	bctrl 
/* 8028CBF0 00289B30  EC 3C 08 2A */	fadds f1, f28, f1
/* 8028CBF4 00289B34  48 18 4F DD */	bl roundAng__Ff
/* 8028CBF8 00289B38  D0 3E 01 FC */	stfs f1, 0x1fc(r30)
/* 8028CBFC 00289B3C  FC 40 FA 10 */	fabs f2, f31
/* 8028CC00 00289B40  C0 02 D5 5C */	lfs f0, lbl_8051B8BC@sda21(r2)
/* 8028CC04 00289B44  C0 7E 01 FC */	lfs f3, 0x1fc(r30)
/* 8028CC08 00289B48  C0 22 D5 58 */	lfs f1, lbl_8051B8B8@sda21(r2)
/* 8028CC0C 00289B4C  FC 40 10 18 */	frsp f2, f2
/* 8028CC10 00289B50  D0 7E 01 A8 */	stfs f3, 0x1a8(r30)
/* 8028CC14 00289B54  80 9E 00 C0 */	lwz r4, 0xc0(r30)
/* 8028CC18 00289B58  C0 64 05 8C */	lfs f3, 0x58c(r4)
/* 8028CC1C 00289B5C  EC 00 00 F2 */	fmuls f0, f0, f3
/* 8028CC20 00289B60  EC 01 00 32 */	fmuls f0, f1, f0
/* 8028CC24 00289B64  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 8028CC28 00289B68  4C 40 13 82 */	cror 2, 0, 2
/* 8028CC2C 00289B6C  40 82 00 70 */	bne .L_8028CC9C
/* 8028CC30 00289B70  7F C3 F3 78 */	mr r3, r30
/* 8028CC34 00289B74  C3 A4 02 E4 */	lfs f29, 0x2e4(r4)
/* 8028CC38 00289B78  81 9E 00 00 */	lwz r12, 0(r30)
/* 8028CC3C 00289B7C  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 8028CC40 00289B80  7D 89 03 A6 */	mtctr r12
/* 8028CC44 00289B84  4E 80 04 21 */	bctrl 
/* 8028CC48 00289B88  4B E4 2B D5 */	bl sin
/* 8028CC4C 00289B8C  7F C3 F3 78 */	mr r3, r30
/* 8028CC50 00289B90  C0 5E 01 D4 */	lfs f2, 0x1d4(r30)
/* 8028CC54 00289B94  81 9E 00 00 */	lwz r12, 0(r30)
/* 8028CC58 00289B98  FF 40 08 18 */	frsp f26, f1
/* 8028CC5C 00289B9C  C3 DE 01 D8 */	lfs f30, 0x1d8(r30)
/* 8028CC60 00289BA0  C0 1E 01 DC */	lfs f0, 0x1dc(r30)
/* 8028CC64 00289BA4  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 8028CC68 00289BA8  D0 41 00 74 */	stfs f2, 0x74(r1)
/* 8028CC6C 00289BAC  D3 C1 00 78 */	stfs f30, 0x78(r1)
/* 8028CC70 00289BB0  D0 01 00 7C */	stfs f0, 0x7c(r1)
/* 8028CC74 00289BB4  7D 89 03 A6 */	mtctr r12
/* 8028CC78 00289BB8  4E 80 04 21 */	bctrl 
/* 8028CC7C 00289BBC  4B E4 26 39 */	bl cos
/* 8028CC80 00289BC0  EC 1D 06 B2 */	fmuls f0, f29, f26
/* 8028CC84 00289BC4  FC 20 08 18 */	frsp f1, f1
/* 8028CC88 00289BC8  D0 1E 01 D4 */	stfs f0, 0x1d4(r30)
/* 8028CC8C 00289BCC  EC 1D 00 72 */	fmuls f0, f29, f1
/* 8028CC90 00289BD0  D3 DE 01 D8 */	stfs f30, 0x1d8(r30)
/* 8028CC94 00289BD4  D0 1E 01 DC */	stfs f0, 0x1dc(r30)
/* 8028CC98 00289BD8  48 00 00 74 */	b .L_8028CD0C
.L_8028CC9C:
/* 8028CC9C 00289BDC  7F C3 F3 78 */	mr r3, r30
/* 8028CCA0 00289BE0  C0 22 D5 60 */	lfs f1, lbl_8051B8C0@sda21(r2)
/* 8028CCA4 00289BE4  81 9E 00 00 */	lwz r12, 0(r30)
/* 8028CCA8 00289BE8  C0 04 02 E4 */	lfs f0, 0x2e4(r4)
/* 8028CCAC 00289BEC  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 8028CCB0 00289BF0  EF A1 00 32 */	fmuls f29, f1, f0
/* 8028CCB4 00289BF4  7D 89 03 A6 */	mtctr r12
/* 8028CCB8 00289BF8  4E 80 04 21 */	bctrl 
/* 8028CCBC 00289BFC  4B E4 2B 61 */	bl sin
/* 8028CCC0 00289C00  7F C3 F3 78 */	mr r3, r30
/* 8028CCC4 00289C04  C0 5E 01 D4 */	lfs f2, 0x1d4(r30)
/* 8028CCC8 00289C08  81 9E 00 00 */	lwz r12, 0(r30)
/* 8028CCCC 00289C0C  FF 40 08 18 */	frsp f26, f1
/* 8028CCD0 00289C10  C3 DE 01 D8 */	lfs f30, 0x1d8(r30)
/* 8028CCD4 00289C14  C0 1E 01 DC */	lfs f0, 0x1dc(r30)
/* 8028CCD8 00289C18  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 8028CCDC 00289C1C  D0 41 00 68 */	stfs f2, 0x68(r1)
/* 8028CCE0 00289C20  D3 C1 00 6C */	stfs f30, 0x6c(r1)
/* 8028CCE4 00289C24  D0 01 00 70 */	stfs f0, 0x70(r1)
/* 8028CCE8 00289C28  7D 89 03 A6 */	mtctr r12
/* 8028CCEC 00289C2C  4E 80 04 21 */	bctrl 
/* 8028CCF0 00289C30  4B E4 25 C5 */	bl cos
/* 8028CCF4 00289C34  EC 1D 06 B2 */	fmuls f0, f29, f26
/* 8028CCF8 00289C38  FC 20 08 18 */	frsp f1, f1
/* 8028CCFC 00289C3C  D0 1E 01 D4 */	stfs f0, 0x1d4(r30)
/* 8028CD00 00289C40  EC 1D 00 72 */	fmuls f0, f29, f1
/* 8028CD04 00289C44  D3 DE 01 D8 */	stfs f30, 0x1d8(r30)
/* 8028CD08 00289C48  D0 1E 01 DC */	stfs f0, 0x1dc(r30)
.L_8028CD0C:
/* 8028CD0C 00289C4C  7F C4 F3 78 */	mr r4, r30
/* 8028CD10 00289C50  80 BE 00 C0 */	lwz r5, 0xc0(r30)
/* 8028CD14 00289C54  81 9E 00 00 */	lwz r12, 0(r30)
/* 8028CD18 00289C58  38 61 00 14 */	addi r3, r1, 0x14
/* 8028CD1C 00289C5C  C3 85 05 8C */	lfs f28, 0x58c(r5)
/* 8028CD20 00289C60  3B E0 00 00 */	li r31, 0
/* 8028CD24 00289C64  81 8C 00 08 */	lwz r12, 8(r12)
/* 8028CD28 00289C68  C3 A5 05 64 */	lfs f29, 0x564(r5)
/* 8028CD2C 00289C6C  7D 89 03 A6 */	mtctr r12
/* 8028CD30 00289C70  4E 80 04 21 */	bctrl 
/* 8028CD34 00289C74  7F A4 EB 78 */	mr r4, r29
/* 8028CD38 00289C78  38 61 00 08 */	addi r3, r1, 8
/* 8028CD3C 00289C7C  81 9D 00 00 */	lwz r12, 0(r29)
/* 8028CD40 00289C80  C3 C1 00 14 */	lfs f30, 0x14(r1)
/* 8028CD44 00289C84  81 8C 00 08 */	lwz r12, 8(r12)
/* 8028CD48 00289C88  7D 89 03 A6 */	mtctr r12
/* 8028CD4C 00289C8C  4E 80 04 21 */	bctrl 
/* 8028CD50 00289C90  7F C4 F3 78 */	mr r4, r30
/* 8028CD54 00289C94  C0 01 00 08 */	lfs f0, 8(r1)
/* 8028CD58 00289C98  81 9E 00 00 */	lwz r12, 0(r30)
/* 8028CD5C 00289C9C  38 61 00 2C */	addi r3, r1, 0x2c
/* 8028CD60 00289CA0  EF 40 F0 28 */	fsubs f26, f0, f30
/* 8028CD64 00289CA4  81 8C 00 08 */	lwz r12, 8(r12)
/* 8028CD68 00289CA8  7D 89 03 A6 */	mtctr r12
/* 8028CD6C 00289CAC  4E 80 04 21 */	bctrl 
/* 8028CD70 00289CB0  7F A4 EB 78 */	mr r4, r29
/* 8028CD74 00289CB4  38 61 00 20 */	addi r3, r1, 0x20
/* 8028CD78 00289CB8  81 9D 00 00 */	lwz r12, 0(r29)
/* 8028CD7C 00289CBC  C3 C1 00 30 */	lfs f30, 0x30(r1)
/* 8028CD80 00289CC0  81 8C 00 08 */	lwz r12, 8(r12)
/* 8028CD84 00289CC4  7D 89 03 A6 */	mtctr r12
/* 8028CD88 00289CC8  4E 80 04 21 */	bctrl 
/* 8028CD8C 00289CCC  7F C4 F3 78 */	mr r4, r30
/* 8028CD90 00289CD0  C0 01 00 24 */	lfs f0, 0x24(r1)
/* 8028CD94 00289CD4  81 9E 00 00 */	lwz r12, 0(r30)
/* 8028CD98 00289CD8  38 61 00 44 */	addi r3, r1, 0x44
/* 8028CD9C 00289CDC  EF 60 F0 28 */	fsubs f27, f0, f30
/* 8028CDA0 00289CE0  81 8C 00 08 */	lwz r12, 8(r12)
/* 8028CDA4 00289CE4  7D 89 03 A6 */	mtctr r12
/* 8028CDA8 00289CE8  4E 80 04 21 */	bctrl 
/* 8028CDAC 00289CEC  7F A4 EB 78 */	mr r4, r29
/* 8028CDB0 00289CF0  38 61 00 38 */	addi r3, r1, 0x38
/* 8028CDB4 00289CF4  81 9D 00 00 */	lwz r12, 0(r29)
/* 8028CDB8 00289CF8  C3 C1 00 4C */	lfs f30, 0x4c(r1)
/* 8028CDBC 00289CFC  81 8C 00 08 */	lwz r12, 8(r12)
/* 8028CDC0 00289D00  7D 89 03 A6 */	mtctr r12
/* 8028CDC4 00289D04  4E 80 04 21 */	bctrl 
/* 8028CDC8 00289D08  EC 3B 06 F2 */	fmuls f1, f27, f27
/* 8028CDCC 00289D0C  C0 41 00 40 */	lfs f2, 0x40(r1)
/* 8028CDD0 00289D10  EC 1D 07 72 */	fmuls f0, f29, f29
/* 8028CDD4 00289D14  EC 42 F0 28 */	fsubs f2, f2, f30
/* 8028CDD8 00289D18  EC 3A 0E BA */	fmadds f1, f26, f26, f1
/* 8028CDDC 00289D1C  EC 22 08 BA */	fmadds f1, f2, f2, f1
/* 8028CDE0 00289D20  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8028CDE4 00289D24  40 80 00 2C */	bge .L_8028CE10
/* 8028CDE8 00289D28  C0 02 D5 5C */	lfs f0, lbl_8051B8BC@sda21(r2)
/* 8028CDEC 00289D2C  FC 40 FA 10 */	fabs f2, f31
/* 8028CDF0 00289D30  C0 22 D5 58 */	lfs f1, lbl_8051B8B8@sda21(r2)
/* 8028CDF4 00289D34  EC 00 07 32 */	fmuls f0, f0, f28
/* 8028CDF8 00289D38  FC 40 10 18 */	frsp f2, f2
/* 8028CDFC 00289D3C  EC 01 00 32 */	fmuls f0, f1, f0
/* 8028CE00 00289D40  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 8028CE04 00289D44  4C 40 13 82 */	cror 2, 0, 2
/* 8028CE08 00289D48  40 82 00 08 */	bne .L_8028CE10
/* 8028CE0C 00289D4C  3B E0 00 01 */	li r31, 1
.L_8028CE10:
/* 8028CE10 00289D50  57 E0 06 3F */	clrlwi. r0, r31, 0x18
/* 8028CE14 00289D54  41 82 00 30 */	beq .L_8028CE44
/* 8028CE18 00289D58  7F 83 E3 78 */	mr r3, r28
/* 8028CE1C 00289D5C  7F C4 F3 78 */	mr r4, r30
/* 8028CE20 00289D60  81 9C 00 00 */	lwz r12, 0(r28)
/* 8028CE24 00289D64  38 A0 00 04 */	li r5, 4
/* 8028CE28 00289D68  38 C0 00 00 */	li r6, 0
/* 8028CE2C 00289D6C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8028CE30 00289D70  7D 89 03 A6 */	mtctr r12
/* 8028CE34 00289D74  4E 80 04 21 */	bctrl 
/* 8028CE38 00289D78  48 00 00 0C */	b .L_8028CE44
.L_8028CE3C:
/* 8028CE3C 00289D7C  7F C3 F3 78 */	mr r3, r30
/* 8028CE40 00289D80  48 00 0D 09 */	bl moveNoTarget__Q34Game4Baby3ObjFv
.L_8028CE44:
/* 8028CE44 00289D84  80 7E 01 88 */	lwz r3, 0x188(r30)
/* 8028CE48 00289D88  88 03 00 24 */	lbz r0, 0x24(r3)
/* 8028CE4C 00289D8C  28 00 00 00 */	cmplwi r0, 0
/* 8028CE50 00289D90  41 82 00 30 */	beq .L_8028CE80
/* 8028CE54 00289D94  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 8028CE58 00289D98  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 8028CE5C 00289D9C  40 82 00 24 */	bne .L_8028CE80
/* 8028CE60 00289DA0  7F 83 E3 78 */	mr r3, r28
/* 8028CE64 00289DA4  7F C4 F3 78 */	mr r4, r30
/* 8028CE68 00289DA8  81 9C 00 00 */	lwz r12, 0(r28)
/* 8028CE6C 00289DAC  38 A0 00 03 */	li r5, 3
/* 8028CE70 00289DB0  38 C0 00 00 */	li r6, 0
/* 8028CE74 00289DB4  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8028CE78 00289DB8  7D 89 03 A6 */	mtctr r12
/* 8028CE7C 00289DBC  4E 80 04 21 */	bctrl 
.L_8028CE80:
/* 8028CE80 00289DC0  E3 E1 00 E8 */	psq_l f31, 232(r1), 0, qr0
/* 8028CE84 00289DC4  CB E1 00 E0 */	lfd f31, 0xe0(r1)
/* 8028CE88 00289DC8  E3 C1 00 D8 */	psq_l f30, 216(r1), 0, qr0
/* 8028CE8C 00289DCC  CB C1 00 D0 */	lfd f30, 0xd0(r1)
/* 8028CE90 00289DD0  E3 A1 00 C8 */	psq_l f29, 200(r1), 0, qr0
/* 8028CE94 00289DD4  CB A1 00 C0 */	lfd f29, 0xc0(r1)
/* 8028CE98 00289DD8  E3 81 00 B8 */	psq_l f28, 184(r1), 0, qr0
/* 8028CE9C 00289DDC  CB 81 00 B0 */	lfd f28, 0xb0(r1)
/* 8028CEA0 00289DE0  E3 61 00 A8 */	psq_l f27, 168(r1), 0, qr0
/* 8028CEA4 00289DE4  CB 61 00 A0 */	lfd f27, 0xa0(r1)
/* 8028CEA8 00289DE8  E3 41 00 98 */	psq_l f26, 152(r1), 0, qr0
/* 8028CEAC 00289DEC  CB 41 00 90 */	lfd f26, 0x90(r1)
/* 8028CEB0 00289DF0  83 E1 00 8C */	lwz r31, 0x8c(r1)
/* 8028CEB4 00289DF4  83 C1 00 88 */	lwz r30, 0x88(r1)
/* 8028CEB8 00289DF8  83 A1 00 84 */	lwz r29, 0x84(r1)
/* 8028CEBC 00289DFC  80 01 00 F4 */	lwz r0, 0xf4(r1)
/* 8028CEC0 00289E00  83 81 00 80 */	lwz r28, 0x80(r1)
/* 8028CEC4 00289E04  7C 08 03 A6 */	mtlr r0
/* 8028CEC8 00289E08  38 21 00 F0 */	addi r1, r1, 0xf0
/* 8028CECC 00289E0C  4E 80 00 20 */	blr 
.endfn exec__Q34Game4Baby9StateMoveFPQ24Game9EnemyBase

.fn cleanup__Q34Game4Baby9StateMoveFPQ24Game9EnemyBase, global
/* 8028CED0 00289E10  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game4Baby9StateMoveFPQ24Game9EnemyBase

.fn init__Q34Game4Baby11StateAttackFPQ24Game9EnemyBasePQ24Game8StateArg, global
/* 8028CED4 00289E14  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8028CED8 00289E18  7C 08 02 A6 */	mflr r0
/* 8028CEDC 00289E1C  C0 02 D5 50 */	lfs f0, lbl_8051B8B0@sda21(r2)
/* 8028CEE0 00289E20  90 01 00 14 */	stw r0, 0x14(r1)
/* 8028CEE4 00289E24  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8028CEE8 00289E28  7C 9F 23 78 */	mr r31, r4
/* 8028CEEC 00289E2C  7F E3 FB 78 */	mr r3, r31
/* 8028CEF0 00289E30  D0 04 01 D4 */	stfs f0, 0x1d4(r4)
/* 8028CEF4 00289E34  D0 04 01 D8 */	stfs f0, 0x1d8(r4)
/* 8028CEF8 00289E38  D0 04 01 DC */	stfs f0, 0x1dc(r4)
/* 8028CEFC 00289E3C  4B E7 4A D1 */	bl setEmotionExcitement__Q24Game9EnemyBaseFv
/* 8028CF00 00289E40  7F E3 FB 78 */	mr r3, r31
/* 8028CF04 00289E44  38 80 00 03 */	li r4, 3
/* 8028CF08 00289E48  38 A0 00 00 */	li r5, 0
/* 8028CF0C 00289E4C  4B E7 80 F9 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 8028CF10 00289E50  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8028CF14 00289E54  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8028CF18 00289E58  7C 08 03 A6 */	mtlr r0
/* 8028CF1C 00289E5C  38 21 00 10 */	addi r1, r1, 0x10
/* 8028CF20 00289E60  4E 80 00 20 */	blr 
.endfn init__Q34Game4Baby11StateAttackFPQ24Game9EnemyBasePQ24Game8StateArg

.fn exec__Q34Game4Baby11StateAttackFPQ24Game9EnemyBase, global
/* 8028CF24 00289E64  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8028CF28 00289E68  7C 08 02 A6 */	mflr r0
/* 8028CF2C 00289E6C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8028CF30 00289E70  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8028CF34 00289E74  7C 9F 23 78 */	mr r31, r4
/* 8028CF38 00289E78  80 A4 01 88 */	lwz r5, 0x188(r4)
/* 8028CF3C 00289E7C  88 05 00 24 */	lbz r0, 0x24(r5)
/* 8028CF40 00289E80  28 00 00 00 */	cmplwi r0, 0
/* 8028CF44 00289E84  41 82 00 D0 */	beq .L_8028D014
/* 8028CF48 00289E88  80 05 00 1C */	lwz r0, 0x1c(r5)
/* 8028CF4C 00289E8C  28 00 00 02 */	cmplwi r0, 2
/* 8028CF50 00289E90  40 82 00 54 */	bne .L_8028CFA4
/* 8028CF54 00289E94  80 DF 00 C0 */	lwz r6, 0xc0(r31)
/* 8028CF58 00289E98  7F E3 FB 78 */	mr r3, r31
/* 8028CF5C 00289E9C  38 80 00 00 */	li r4, 0
/* 8028CF60 00289EA0  38 A0 00 00 */	li r5, 0
/* 8028CF64 00289EA4  C0 26 05 B4 */	lfs f1, 0x5b4(r6)
/* 8028CF68 00289EA8  C0 46 05 DC */	lfs f2, 0x5dc(r6)
/* 8028CF6C 00289EAC  C0 66 06 04 */	lfs f3, 0x604(r6)
/* 8028CF70 00289EB0  4B E8 72 F1 */	bl "attackNavi__Q24Game9EnemyFuncFPQ24Game8CreaturefffP8CollPartP23Condition<Q24Game4Navi>"
/* 8028CF74 00289EB4  7F E3 FB 78 */	mr r3, r31
/* 8028CF78 00289EB8  38 80 00 00 */	li r4, 0
/* 8028CF7C 00289EBC  4B E8 6B B9 */	bl "eatPikmin__Q24Game9EnemyFuncFPQ24Game9EnemyBaseP23Condition<Q24Game4Piki>"
/* 8028CF80 00289EC0  7F E3 FB 78 */	mr r3, r31
/* 8028CF84 00289EC4  48 00 0A A1 */	bl getSlotPikiNum__Q34Game4Baby3ObjFv
/* 8028CF88 00289EC8  2C 03 00 00 */	cmpwi r3, 0
/* 8028CF8C 00289ECC  40 82 00 88 */	bne .L_8028D014
/* 8028CF90 00289ED0  7F E3 FB 78 */	mr r3, r31
/* 8028CF94 00289ED4  38 80 00 04 */	li r4, 4
/* 8028CF98 00289ED8  38 A0 00 00 */	li r5, 0
/* 8028CF9C 00289EDC  4B E7 80 69 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 8028CFA0 00289EE0  48 00 00 74 */	b .L_8028D014
.L_8028CFA4:
/* 8028CFA4 00289EE4  28 00 00 03 */	cmplwi r0, 3
/* 8028CFA8 00289EE8  40 82 00 1C */	bne .L_8028CFC4
/* 8028CFAC 00289EEC  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 8028CFB0 00289EF0  7F E3 FB 78 */	mr r3, r31
/* 8028CFB4 00289EF4  38 80 00 00 */	li r4, 0
/* 8028CFB8 00289EF8  C0 25 08 1C */	lfs f1, 0x81c(r5)
/* 8028CFBC 00289EFC  4B E8 6E C9 */	bl "swallowPikmin__Q24Game9EnemyFuncFPQ24Game8CreaturefP23Condition<Q24Game4Piki>"
/* 8028CFC0 00289F00  48 00 00 54 */	b .L_8028D014
.L_8028CFC4:
/* 8028CFC4 00289F04  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 8028CFC8 00289F08  40 82 00 4C */	bne .L_8028D014
/* 8028CFCC 00289F0C  C0 3F 02 00 */	lfs f1, 0x200(r31)
/* 8028CFD0 00289F10  C0 02 D5 50 */	lfs f0, lbl_8051B8B0@sda21(r2)
/* 8028CFD4 00289F14  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8028CFD8 00289F18  4C 40 13 82 */	cror 2, 0, 2
/* 8028CFDC 00289F1C  40 82 00 20 */	bne .L_8028CFFC
/* 8028CFE0 00289F20  81 83 00 00 */	lwz r12, 0(r3)
/* 8028CFE4 00289F24  38 A0 00 00 */	li r5, 0
/* 8028CFE8 00289F28  38 C0 00 00 */	li r6, 0
/* 8028CFEC 00289F2C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8028CFF0 00289F30  7D 89 03 A6 */	mtctr r12
/* 8028CFF4 00289F34  4E 80 04 21 */	bctrl 
/* 8028CFF8 00289F38  48 00 00 1C */	b .L_8028D014
.L_8028CFFC:
/* 8028CFFC 00289F3C  81 83 00 00 */	lwz r12, 0(r3)
/* 8028D000 00289F40  38 A0 00 03 */	li r5, 3
/* 8028D004 00289F44  38 C0 00 00 */	li r6, 0
/* 8028D008 00289F48  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8028D00C 00289F4C  7D 89 03 A6 */	mtctr r12
/* 8028D010 00289F50  4E 80 04 21 */	bctrl 
.L_8028D014:
/* 8028D014 00289F54  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8028D018 00289F58  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8028D01C 00289F5C  7C 08 03 A6 */	mtlr r0
/* 8028D020 00289F60  38 21 00 10 */	addi r1, r1, 0x10
/* 8028D024 00289F64  4E 80 00 20 */	blr 
.endfn exec__Q34Game4Baby11StateAttackFPQ24Game9EnemyBase

.fn cleanup__Q34Game4Baby11StateAttackFPQ24Game9EnemyBase, global
/* 8028D028 00289F68  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8028D02C 00289F6C  7C 08 02 A6 */	mflr r0
/* 8028D030 00289F70  7C 83 23 78 */	mr r3, r4
/* 8028D034 00289F74  90 01 00 14 */	stw r0, 0x14(r1)
/* 8028D038 00289F78  4B E7 49 45 */	bl setEmotionCaution__Q24Game9EnemyBaseFv
/* 8028D03C 00289F7C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8028D040 00289F80  7C 08 03 A6 */	mtlr r0
/* 8028D044 00289F84  38 21 00 10 */	addi r1, r1, 0x10
/* 8028D048 00289F88  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game4Baby11StateAttackFPQ24Game9EnemyBase
