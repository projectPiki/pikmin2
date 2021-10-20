.include "macros.inc"
.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 0x8
.global __vt__Q34Game7GasHiba11StateAttack
__vt__Q34Game7GasHiba11StateAttack:
	.4byte 0
	.4byte 0
	.4byte init__Q34Game7GasHiba11StateAttackFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game7GasHiba11StateAttackFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game7GasHiba11StateAttackFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.global __vt__Q34Game7GasHiba9StateWait
__vt__Q34Game7GasHiba9StateWait:
	.4byte 0
	.4byte 0
	.4byte init__Q34Game7GasHiba9StateWaitFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game7GasHiba9StateWaitFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game7GasHiba9StateWaitFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.global __vt__Q34Game7GasHiba9StateDead
__vt__Q34Game7GasHiba9StateDead:
	.4byte 0
	.4byte 0
	.4byte init__Q34Game7GasHiba9StateDeadFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q34Game7GasHiba9StateDeadFPQ24Game9EnemyBase
	.4byte cleanup__Q34Game7GasHiba9StateDeadFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.global __vt__Q34Game7GasHiba5State
__vt__Q34Game7GasHiba5State:
	.4byte 0
	.4byte 0
	.4byte init__Q24Game13EnemyFSMStateFPQ24Game9EnemyBasePQ24Game8StateArg
	.4byte exec__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte cleanup__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
	.4byte transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics
.global __vt__Q34Game7GasHiba3FSM
__vt__Q34Game7GasHiba3FSM:
	.4byte 0
	.4byte 0
	.4byte init__Q34Game7GasHiba3FSMFPQ24Game9EnemyBase
	.4byte start__Q24Game17EnemyStateMachineFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte exec__Q24Game17EnemyStateMachineFPQ24Game9EnemyBase
	.4byte transit__Q24Game17EnemyStateMachineFPQ24Game9EnemyBaseiPQ24Game8StateArg
	.4byte doDirectDraw__Q24Game17EnemyStateMachineFPQ24Game9EnemyBaseR8Graphics
	.4byte getCurrState__Q24Game17EnemyStateMachineFPQ24Game9EnemyBase
	.4byte setCurrState__Q24Game17EnemyStateMachineFPQ24Game9EnemyBasePQ24Game13EnemyFSMState
	.4byte 0

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global init__Q34Game7GasHiba3FSMFPQ24Game9EnemyBase
init__Q34Game7GasHiba3FSMFPQ24Game9EnemyBase:
/* 8026C68C 002695CC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8026C690 002695D0  7C 08 02 A6 */	mflr r0
/* 8026C694 002695D4  38 80 00 03 */	li r4, 3
/* 8026C698 002695D8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8026C69C 002695DC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8026C6A0 002695E0  7C 7F 1B 78 */	mr r31, r3
/* 8026C6A4 002695E4  4B EC 41 C1 */	bl create__Q24Game17EnemyStateMachineFi
/* 8026C6A8 002695E8  38 60 00 10 */	li r3, 0x10
/* 8026C6AC 002695EC  4B DB 77 F9 */	bl __nw__FUl
/* 8026C6B0 002695F0  7C 64 1B 79 */	or. r4, r3, r3
/* 8026C6B4 002695F4  41 82 00 3C */	beq lbl_8026C6F0
/* 8026C6B8 002695F8  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 8026C6BC 002695FC  3C A0 80 4C */	lis r5, __vt__Q34Game7GasHiba5State@ha
/* 8026C6C0 00269600  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 8026C6C4 00269604  3C 60 80 4C */	lis r3, __vt__Q34Game7GasHiba9StateDead@ha
/* 8026C6C8 00269608  90 04 00 00 */	stw r0, 0(r4)
/* 8026C6CC 0026960C  38 E0 00 00 */	li r7, 0
/* 8026C6D0 00269610  38 C5 58 6C */	addi r6, r5, __vt__Q34Game7GasHiba5State@l
/* 8026C6D4 00269614  38 A2 CC D8 */	addi r5, r2, lbl_8051B038@sda21
/* 8026C6D8 00269618  90 E4 00 04 */	stw r7, 4(r4)
/* 8026C6DC 0026961C  38 03 58 48 */	addi r0, r3, __vt__Q34Game7GasHiba9StateDead@l
/* 8026C6E0 00269620  90 E4 00 08 */	stw r7, 8(r4)
/* 8026C6E4 00269624  90 C4 00 00 */	stw r6, 0(r4)
/* 8026C6E8 00269628  90 A4 00 0C */	stw r5, 0xc(r4)
/* 8026C6EC 0026962C  90 04 00 00 */	stw r0, 0(r4)
lbl_8026C6F0:
/* 8026C6F0 00269630  7F E3 FB 78 */	mr r3, r31
/* 8026C6F4 00269634  4B EC 42 15 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 8026C6F8 00269638  38 60 00 10 */	li r3, 0x10
/* 8026C6FC 0026963C  4B DB 77 A9 */	bl __nw__FUl
/* 8026C700 00269640  7C 64 1B 79 */	or. r4, r3, r3
/* 8026C704 00269644  41 82 00 40 */	beq lbl_8026C744
/* 8026C708 00269648  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 8026C70C 0026964C  3C A0 80 4C */	lis r5, __vt__Q34Game7GasHiba5State@ha
/* 8026C710 00269650  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 8026C714 00269654  3C 60 80 4C */	lis r3, __vt__Q34Game7GasHiba9StateWait@ha
/* 8026C718 00269658  90 04 00 00 */	stw r0, 0(r4)
/* 8026C71C 0026965C  38 00 00 01 */	li r0, 1
/* 8026C720 00269660  38 E0 00 00 */	li r7, 0
/* 8026C724 00269664  38 C5 58 6C */	addi r6, r5, __vt__Q34Game7GasHiba5State@l
/* 8026C728 00269668  90 04 00 04 */	stw r0, 4(r4)
/* 8026C72C 0026966C  38 A2 CC E0 */	addi r5, r2, lbl_8051B040@sda21
/* 8026C730 00269670  38 03 58 24 */	addi r0, r3, __vt__Q34Game7GasHiba9StateWait@l
/* 8026C734 00269674  90 E4 00 08 */	stw r7, 8(r4)
/* 8026C738 00269678  90 C4 00 00 */	stw r6, 0(r4)
/* 8026C73C 0026967C  90 A4 00 0C */	stw r5, 0xc(r4)
/* 8026C740 00269680  90 04 00 00 */	stw r0, 0(r4)
lbl_8026C744:
/* 8026C744 00269684  7F E3 FB 78 */	mr r3, r31
/* 8026C748 00269688  4B EC 41 C1 */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 8026C74C 0026968C  38 60 00 10 */	li r3, 0x10
/* 8026C750 00269690  4B DB 77 55 */	bl __nw__FUl
/* 8026C754 00269694  7C 64 1B 79 */	or. r4, r3, r3
/* 8026C758 00269698  41 82 00 40 */	beq lbl_8026C798
/* 8026C75C 0026969C  3C 60 80 4B */	lis r3, __vt__Q24Game13EnemyFSMState@ha
/* 8026C760 002696A0  3C A0 80 4C */	lis r5, __vt__Q34Game7GasHiba5State@ha
/* 8026C764 002696A4  38 03 F9 A4 */	addi r0, r3, __vt__Q24Game13EnemyFSMState@l
/* 8026C768 002696A8  3C 60 80 4C */	lis r3, __vt__Q34Game7GasHiba11StateAttack@ha
/* 8026C76C 002696AC  90 04 00 00 */	stw r0, 0(r4)
/* 8026C770 002696B0  38 00 00 02 */	li r0, 2
/* 8026C774 002696B4  38 E0 00 00 */	li r7, 0
/* 8026C778 002696B8  38 C5 58 6C */	addi r6, r5, __vt__Q34Game7GasHiba5State@l
/* 8026C77C 002696BC  90 04 00 04 */	stw r0, 4(r4)
/* 8026C780 002696C0  38 A2 CC E8 */	addi r5, r2, lbl_8051B048@sda21
/* 8026C784 002696C4  38 03 58 00 */	addi r0, r3, __vt__Q34Game7GasHiba11StateAttack@l
/* 8026C788 002696C8  90 E4 00 08 */	stw r7, 8(r4)
/* 8026C78C 002696CC  90 C4 00 00 */	stw r6, 0(r4)
/* 8026C790 002696D0  90 A4 00 0C */	stw r5, 0xc(r4)
/* 8026C794 002696D4  90 04 00 00 */	stw r0, 0(r4)
lbl_8026C798:
/* 8026C798 002696D8  7F E3 FB 78 */	mr r3, r31
/* 8026C79C 002696DC  4B EC 41 6D */	bl registerState__Q24Game17EnemyStateMachineFPQ24Game13EnemyFSMState
/* 8026C7A0 002696E0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8026C7A4 002696E4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8026C7A8 002696E8  7C 08 03 A6 */	mtlr r0
/* 8026C7AC 002696EC  38 21 00 10 */	addi r1, r1, 0x10
/* 8026C7B0 002696F0  4E 80 00 20 */	blr 

.global init__Q34Game7GasHiba9StateDeadFPQ24Game9EnemyBasePQ24Game8StateArg
init__Q34Game7GasHiba9StateDeadFPQ24Game9EnemyBasePQ24Game8StateArg:
/* 8026C7B4 002696F4  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 8026C7B8 002696F8  7C 08 02 A6 */	mflr r0
/* 8026C7BC 002696FC  90 01 00 64 */	stw r0, 0x64(r1)
/* 8026C7C0 00269700  DB E1 00 50 */	stfd f31, 0x50(r1)
/* 8026C7C4 00269704  F3 E1 00 58 */	psq_st f31, 88(r1), 0, qr0
/* 8026C7C8 00269708  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 8026C7CC 0026970C  7C 9F 23 78 */	mr r31, r4
/* 8026C7D0 00269710  80 84 01 E0 */	lwz r4, 0x1e0(r4)
/* 8026C7D4 00269714  38 00 00 00 */	li r0, 0
/* 8026C7D8 00269718  60 84 00 04 */	ori r4, r4, 4
/* 8026C7DC 0026971C  7F E3 FB 78 */	mr r3, r31
/* 8026C7E0 00269720  90 9F 01 E0 */	stw r4, 0x1e0(r31)
/* 8026C7E4 00269724  80 9F 01 E0 */	lwz r4, 0x1e0(r31)
/* 8026C7E8 00269728  54 84 05 66 */	rlwinm r4, r4, 0, 0x15, 0x13
/* 8026C7EC 0026972C  90 9F 01 E0 */	stw r4, 0x1e0(r31)
/* 8026C7F0 00269730  80 9F 01 E0 */	lwz r4, 0x1e0(r31)
/* 8026C7F4 00269734  60 84 00 01 */	ori r4, r4, 1
/* 8026C7F8 00269738  90 9F 01 E0 */	stw r4, 0x1e0(r31)
/* 8026C7FC 0026973C  80 9F 01 E0 */	lwz r4, 0x1e0(r31)
/* 8026C800 00269740  54 84 07 76 */	rlwinm r4, r4, 0, 0x1d, 0x1b
/* 8026C804 00269744  90 9F 01 E0 */	stw r4, 0x1e0(r31)
/* 8026C808 00269748  98 1F 02 C1 */	stb r0, 0x2c1(r31)
/* 8026C80C 0026974C  48 00 17 6D */	bl generatorKill__Q34Game7GasHiba3ObjFv
/* 8026C810 00269750  7F E3 FB 78 */	mr r3, r31
/* 8026C814 00269754  38 80 00 00 */	li r4, 0
/* 8026C818 00269758  38 A0 00 00 */	li r5, 0
/* 8026C81C 0026975C  4B E9 87 E9 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 8026C820 00269760  7F E3 FB 78 */	mr r3, r31
/* 8026C824 00269764  81 9F 00 00 */	lwz r12, 0(r31)
/* 8026C828 00269768  81 8C 00 F4 */	lwz r12, 0xf4(r12)
/* 8026C82C 0026976C  7D 89 03 A6 */	mtctr r12
/* 8026C830 00269770  4E 80 04 21 */	bctrl 
/* 8026C834 00269774  81 83 00 00 */	lwz r12, 0(r3)
/* 8026C838 00269778  38 80 58 0C */	li r4, 0x580c
/* 8026C83C 0026977C  38 A0 00 00 */	li r5, 0
/* 8026C840 00269780  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 8026C844 00269784  7D 89 03 A6 */	mtctr r12
/* 8026C848 00269788  4E 80 04 21 */	bctrl 
/* 8026C84C 0026978C  C0 22 CC F0 */	lfs f1, lbl_8051B050@sda21(r2)
/* 8026C850 00269790  7F E3 FB 78 */	mr r3, r31
/* 8026C854 00269794  48 20 1B C1 */	bl PSStartEnemyFatalHitSE__FPQ24Game9EnemyBasef
/* 8026C858 00269798  7F E4 FB 78 */	mr r4, r31
/* 8026C85C 0026979C  38 61 00 18 */	addi r3, r1, 0x18
/* 8026C860 002697A0  81 9F 00 00 */	lwz r12, 0(r31)
/* 8026C864 002697A4  81 8C 00 08 */	lwz r12, 8(r12)
/* 8026C868 002697A8  7D 89 03 A6 */	mtctr r12
/* 8026C86C 002697AC  4E 80 04 21 */	bctrl 
/* 8026C870 002697B0  7F E3 FB 78 */	mr r3, r31
/* 8026C874 002697B4  C0 41 00 18 */	lfs f2, 0x18(r1)
/* 8026C878 002697B8  81 9F 00 00 */	lwz r12, 0(r31)
/* 8026C87C 002697BC  C0 21 00 1C */	lfs f1, 0x1c(r1)
/* 8026C880 002697C0  C0 01 00 20 */	lfs f0, 0x20(r1)
/* 8026C884 002697C4  81 8C 02 58 */	lwz r12, 0x258(r12)
/* 8026C888 002697C8  D0 41 00 24 */	stfs f2, 0x24(r1)
/* 8026C88C 002697CC  C3 FF 01 F8 */	lfs f31, 0x1f8(r31)
/* 8026C890 002697D0  D0 21 00 28 */	stfs f1, 0x28(r1)
/* 8026C894 002697D4  D0 01 00 2C */	stfs f0, 0x2c(r1)
/* 8026C898 002697D8  7D 89 03 A6 */	mtctr r12
/* 8026C89C 002697DC  4E 80 04 21 */	bctrl 
/* 8026C8A0 002697E0  80 C1 00 24 */	lwz r6, 0x24(r1)
/* 8026C8A4 002697E4  3C A0 80 4B */	lis r5, __vt__Q23efx3Arg@ha
/* 8026C8A8 002697E8  80 01 00 28 */	lwz r0, 0x28(r1)
/* 8026C8AC 002697EC  3C 80 80 4B */	lis r4, __vt__Q23efx5TBase@ha
/* 8026C8B0 002697F0  81 01 00 2C */	lwz r8, 0x2c(r1)
/* 8026C8B4 002697F4  38 E5 A7 EC */	addi r7, r5, __vt__Q23efx3Arg@l
/* 8026C8B8 002697F8  90 C1 00 0C */	stw r6, 0xc(r1)
/* 8026C8BC 002697FC  38 A4 A7 F8 */	addi r5, r4, __vt__Q23efx5TBase@l
/* 8026C8C0 00269800  3C C0 80 4B */	lis r6, __vt__Q23efx12ArgEnemyType@ha
/* 8026C8C4 00269804  3C 80 80 4F */	lis r4, __vt__Q23efx10TEnemyBomb@ha
/* 8026C8C8 00269808  90 01 00 10 */	stw r0, 0x10(r1)
/* 8026C8CC 0026980C  38 C6 A7 E0 */	addi r6, r6, __vt__Q23efx12ArgEnemyType@l
/* 8026C8D0 00269810  C0 41 00 0C */	lfs f2, 0xc(r1)
/* 8026C8D4 00269814  38 04 85 D4 */	addi r0, r4, __vt__Q23efx10TEnemyBomb@l
/* 8026C8D8 00269818  91 01 00 14 */	stw r8, 0x14(r1)
/* 8026C8DC 0026981C  38 81 00 30 */	addi r4, r1, 0x30
/* 8026C8E0 00269820  C0 21 00 10 */	lfs f1, 0x10(r1)
/* 8026C8E4 00269824  90 E1 00 30 */	stw r7, 0x30(r1)
/* 8026C8E8 00269828  C0 01 00 14 */	lfs f0, 0x14(r1)
/* 8026C8EC 0026982C  90 A1 00 08 */	stw r5, 8(r1)
/* 8026C8F0 00269830  90 61 00 40 */	stw r3, 0x40(r1)
/* 8026C8F4 00269834  38 61 00 08 */	addi r3, r1, 8
/* 8026C8F8 00269838  D0 41 00 34 */	stfs f2, 0x34(r1)
/* 8026C8FC 0026983C  D0 21 00 38 */	stfs f1, 0x38(r1)
/* 8026C900 00269840  D0 01 00 3C */	stfs f0, 0x3c(r1)
/* 8026C904 00269844  90 C1 00 30 */	stw r6, 0x30(r1)
/* 8026C908 00269848  D3 E1 00 44 */	stfs f31, 0x44(r1)
/* 8026C90C 0026984C  90 01 00 08 */	stw r0, 8(r1)
/* 8026C910 00269850  48 15 C4 75 */	bl create__Q23efx10TEnemyBombFPQ23efx3Arg
/* 8026C914 00269854  E3 E1 00 58 */	psq_l f31, 88(r1), 0, qr0
/* 8026C918 00269858  80 01 00 64 */	lwz r0, 0x64(r1)
/* 8026C91C 0026985C  CB E1 00 50 */	lfd f31, 0x50(r1)
/* 8026C920 00269860  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 8026C924 00269864  7C 08 03 A6 */	mtlr r0
/* 8026C928 00269868  38 21 00 60 */	addi r1, r1, 0x60
/* 8026C92C 0026986C  4E 80 00 20 */	blr 

.global getEnemyTypeID__Q34Game7GasHiba3ObjFv
getEnemyTypeID__Q34Game7GasHiba3ObjFv:
/* 8026C930 00269870  38 60 00 15 */	li r3, 0x15
/* 8026C934 00269874  4E 80 00 20 */	blr 

.global exec__Q34Game7GasHiba9StateDeadFPQ24Game9EnemyBase
exec__Q34Game7GasHiba9StateDeadFPQ24Game9EnemyBase:
/* 8026C938 00269878  4E 80 00 20 */	blr 

.global cleanup__Q34Game7GasHiba9StateDeadFPQ24Game9EnemyBase
cleanup__Q34Game7GasHiba9StateDeadFPQ24Game9EnemyBase:
/* 8026C93C 0026987C  4E 80 00 20 */	blr 

.global init__Q34Game7GasHiba9StateWaitFPQ24Game9EnemyBasePQ24Game8StateArg
init__Q34Game7GasHiba9StateWaitFPQ24Game9EnemyBasePQ24Game8StateArg:
/* 8026C940 00269880  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8026C944 00269884  7C 08 02 A6 */	mflr r0
/* 8026C948 00269888  28 05 00 00 */	cmplwi r5, 0
/* 8026C94C 0026988C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8026C950 00269890  41 82 00 10 */	beq lbl_8026C960
/* 8026C954 00269894  C0 05 00 00 */	lfs f0, 0(r5)
/* 8026C958 00269898  D0 04 02 C4 */	stfs f0, 0x2c4(r4)
/* 8026C95C 0026989C  48 00 00 0C */	b lbl_8026C968
lbl_8026C960:
/* 8026C960 002698A0  C0 02 CC F0 */	lfs f0, lbl_8051B050@sda21(r2)
/* 8026C964 002698A4  D0 04 02 C4 */	stfs f0, 0x2c4(r4)
lbl_8026C968:
/* 8026C968 002698A8  7C 83 23 78 */	mr r3, r4
/* 8026C96C 002698AC  38 80 00 00 */	li r4, 0
/* 8026C970 002698B0  38 A0 00 00 */	li r5, 0
/* 8026C974 002698B4  4B E9 86 91 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 8026C978 002698B8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8026C97C 002698BC  7C 08 03 A6 */	mtlr r0
/* 8026C980 002698C0  38 21 00 10 */	addi r1, r1, 0x10
/* 8026C984 002698C4  4E 80 00 20 */	blr 

.global exec__Q34Game7GasHiba9StateWaitFPQ24Game9EnemyBase
exec__Q34Game7GasHiba9StateWaitFPQ24Game9EnemyBase:
/* 8026C988 002698C8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8026C98C 002698CC  7C 08 02 A6 */	mflr r0
/* 8026C990 002698D0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8026C994 002698D4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8026C998 002698D8  7C 9F 23 78 */	mr r31, r4
/* 8026C99C 002698DC  93 C1 00 08 */	stw r30, 8(r1)
/* 8026C9A0 002698E0  7C 7E 1B 78 */	mr r30, r3
/* 8026C9A4 002698E4  7F E3 FB 78 */	mr r3, r31
/* 8026C9A8 002698E8  80 AD 9A EC */	lwz r5, sys@sda21(r13)
/* 8026C9AC 002698EC  C0 24 02 C4 */	lfs f1, 0x2c4(r4)
/* 8026C9B0 002698F0  C0 05 00 54 */	lfs f0, 0x54(r5)
/* 8026C9B4 002698F4  EC 01 00 2A */	fadds f0, f1, f0
/* 8026C9B8 002698F8  D0 04 02 C4 */	stfs f0, 0x2c4(r4)
/* 8026C9BC 002698FC  48 00 0D ED */	bl setInitLivingThing__Q34Game7GasHiba3ObjFv
/* 8026C9C0 00269900  7F E3 FB 78 */	mr r3, r31
/* 8026C9C4 00269904  48 00 13 95 */	bl updateLivingThing__Q34Game7GasHiba3ObjFv
/* 8026C9C8 00269908  C0 3F 02 00 */	lfs f1, 0x200(r31)
/* 8026C9CC 0026990C  C0 02 CC F0 */	lfs f0, lbl_8051B050@sda21(r2)
/* 8026C9D0 00269910  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8026C9D4 00269914  4C 40 13 82 */	cror 2, 0, 2
/* 8026C9D8 00269918  40 82 00 28 */	bne lbl_8026CA00
/* 8026C9DC 0026991C  7F C3 F3 78 */	mr r3, r30
/* 8026C9E0 00269920  7F E4 FB 78 */	mr r4, r31
/* 8026C9E4 00269924  81 9E 00 00 */	lwz r12, 0(r30)
/* 8026C9E8 00269928  38 A0 00 00 */	li r5, 0
/* 8026C9EC 0026992C  38 C0 00 00 */	li r6, 0
/* 8026C9F0 00269930  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8026C9F4 00269934  7D 89 03 A6 */	mtctr r12
/* 8026C9F8 00269938  4E 80 04 21 */	bctrl 
/* 8026C9FC 0026993C  48 00 00 38 */	b lbl_8026CA34
lbl_8026CA00:
/* 8026CA00 00269940  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 8026CA04 00269944  C0 3F 02 C4 */	lfs f1, 0x2c4(r31)
/* 8026CA08 00269948  C0 03 08 1C */	lfs f0, 0x81c(r3)
/* 8026CA0C 0026994C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8026CA10 00269950  40 81 00 24 */	ble lbl_8026CA34
/* 8026CA14 00269954  7F C3 F3 78 */	mr r3, r30
/* 8026CA18 00269958  7F E4 FB 78 */	mr r4, r31
/* 8026CA1C 0026995C  81 9E 00 00 */	lwz r12, 0(r30)
/* 8026CA20 00269960  38 A0 00 02 */	li r5, 2
/* 8026CA24 00269964  38 C0 00 00 */	li r6, 0
/* 8026CA28 00269968  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8026CA2C 0026996C  7D 89 03 A6 */	mtctr r12
/* 8026CA30 00269970  4E 80 04 21 */	bctrl 
lbl_8026CA34:
/* 8026CA34 00269974  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8026CA38 00269978  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8026CA3C 0026997C  83 C1 00 08 */	lwz r30, 8(r1)
/* 8026CA40 00269980  7C 08 03 A6 */	mtlr r0
/* 8026CA44 00269984  38 21 00 10 */	addi r1, r1, 0x10
/* 8026CA48 00269988  4E 80 00 20 */	blr 

.global cleanup__Q34Game7GasHiba9StateWaitFPQ24Game9EnemyBase
cleanup__Q34Game7GasHiba9StateWaitFPQ24Game9EnemyBase:
/* 8026CA4C 0026998C  4E 80 00 20 */	blr 

.global init__Q34Game7GasHiba11StateAttackFPQ24Game9EnemyBasePQ24Game8StateArg
init__Q34Game7GasHiba11StateAttackFPQ24Game9EnemyBasePQ24Game8StateArg:
/* 8026CA50 00269990  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8026CA54 00269994  7C 08 02 A6 */	mflr r0
/* 8026CA58 00269998  C0 02 CC F0 */	lfs f0, lbl_8051B050@sda21(r2)
/* 8026CA5C 0026999C  38 A0 00 00 */	li r5, 0
/* 8026CA60 002699A0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8026CA64 002699A4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8026CA68 002699A8  7C 9F 23 78 */	mr r31, r4
/* 8026CA6C 002699AC  38 80 00 01 */	li r4, 1
/* 8026CA70 002699B0  D0 1F 02 C4 */	stfs f0, 0x2c4(r31)
/* 8026CA74 002699B4  7F E3 FB 78 */	mr r3, r31
/* 8026CA78 002699B8  4B E9 85 8D */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 8026CA7C 002699BC  7F E3 FB 78 */	mr r3, r31
/* 8026CA80 002699C0  48 00 14 29 */	bl startGasEffect__Q34Game7GasHiba3ObjFv
/* 8026CA84 002699C4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8026CA88 002699C8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8026CA8C 002699CC  7C 08 03 A6 */	mtlr r0
/* 8026CA90 002699D0  38 21 00 10 */	addi r1, r1, 0x10
/* 8026CA94 002699D4  4E 80 00 20 */	blr 

.global exec__Q34Game7GasHiba11StateAttackFPQ24Game9EnemyBase
exec__Q34Game7GasHiba11StateAttackFPQ24Game9EnemyBase:
/* 8026CA98 002699D8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8026CA9C 002699DC  7C 08 02 A6 */	mflr r0
/* 8026CAA0 002699E0  C0 22 CC F0 */	lfs f1, lbl_8051B050@sda21(r2)
/* 8026CAA4 002699E4  90 01 00 14 */	stw r0, 0x14(r1)
/* 8026CAA8 002699E8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8026CAAC 002699EC  7C 9F 23 78 */	mr r31, r4
/* 8026CAB0 002699F0  93 C1 00 08 */	stw r30, 8(r1)
/* 8026CAB4 002699F4  7C 7E 1B 78 */	mr r30, r3
/* 8026CAB8 002699F8  C0 04 02 00 */	lfs f0, 0x200(r4)
/* 8026CABC 002699FC  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 8026CAC0 00269A00  4C 40 13 82 */	cror 2, 0, 2
/* 8026CAC4 00269A04  41 82 00 24 */	beq lbl_8026CAE8
/* 8026CAC8 00269A08  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 8026CACC 00269A0C  C0 03 08 1C */	lfs f0, 0x81c(r3)
/* 8026CAD0 00269A10  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 8026CAD4 00269A14  40 81 00 1C */	ble lbl_8026CAF0
/* 8026CAD8 00269A18  C0 3F 02 C4 */	lfs f1, 0x2c4(r31)
/* 8026CADC 00269A1C  C0 03 08 44 */	lfs f0, 0x844(r3)
/* 8026CAE0 00269A20  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8026CAE4 00269A24  40 81 00 0C */	ble lbl_8026CAF0
lbl_8026CAE8:
/* 8026CAE8 00269A28  7F E3 FB 78 */	mr r3, r31
/* 8026CAEC 00269A2C  4B E9 87 B5 */	bl finishMotion__Q24Game9EnemyBaseFv
lbl_8026CAF0:
/* 8026CAF0 00269A30  80 8D 9A EC */	lwz r4, sys@sda21(r13)
/* 8026CAF4 00269A34  7F E3 FB 78 */	mr r3, r31
/* 8026CAF8 00269A38  C0 3F 02 C4 */	lfs f1, 0x2c4(r31)
/* 8026CAFC 00269A3C  C0 04 00 54 */	lfs f0, 0x54(r4)
/* 8026CB00 00269A40  EC 01 00 2A */	fadds f0, f1, f0
/* 8026CB04 00269A44  D0 1F 02 C4 */	stfs f0, 0x2c4(r31)
/* 8026CB08 00269A48  48 00 13 19 */	bl updateEfxLod__Q34Game7GasHiba3ObjFv
/* 8026CB0C 00269A4C  7F E3 FB 78 */	mr r3, r31
/* 8026CB10 00269A50  48 00 12 49 */	bl updateLivingThing__Q34Game7GasHiba3ObjFv
/* 8026CB14 00269A54  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 8026CB18 00269A58  C0 3F 02 C4 */	lfs f1, 0x2c4(r31)
/* 8026CB1C 00269A5C  C0 03 08 6C */	lfs f0, 0x86c(r3)
/* 8026CB20 00269A60  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8026CB24 00269A64  40 81 00 0C */	ble lbl_8026CB30
/* 8026CB28 00269A68  7F E3 FB 78 */	mr r3, r31
/* 8026CB2C 00269A6C  48 00 0A 95 */	bl interactGasAttack__Q34Game7GasHiba3ObjFv
lbl_8026CB30:
/* 8026CB30 00269A70  7F E3 FB 78 */	mr r3, r31
/* 8026CB34 00269A74  81 9F 00 00 */	lwz r12, 0(r31)
/* 8026CB38 00269A78  81 8C 00 F4 */	lwz r12, 0xf4(r12)
/* 8026CB3C 00269A7C  7D 89 03 A6 */	mtctr r12
/* 8026CB40 00269A80  4E 80 04 21 */	bctrl 
/* 8026CB44 00269A84  81 83 00 00 */	lwz r12, 0(r3)
/* 8026CB48 00269A88  38 80 50 AE */	li r4, 0x50ae
/* 8026CB4C 00269A8C  38 A0 00 00 */	li r5, 0
/* 8026CB50 00269A90  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 8026CB54 00269A94  7D 89 03 A6 */	mtctr r12
/* 8026CB58 00269A98  4E 80 04 21 */	bctrl 
/* 8026CB5C 00269A9C  80 7F 01 88 */	lwz r3, 0x188(r31)
/* 8026CB60 00269AA0  88 03 00 24 */	lbz r0, 0x24(r3)
/* 8026CB64 00269AA4  28 00 00 00 */	cmplwi r0, 0
/* 8026CB68 00269AA8  41 82 00 68 */	beq lbl_8026CBD0
/* 8026CB6C 00269AAC  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 8026CB70 00269AB0  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 8026CB74 00269AB4  40 82 00 5C */	bne lbl_8026CBD0
/* 8026CB78 00269AB8  C0 3F 02 00 */	lfs f1, 0x200(r31)
/* 8026CB7C 00269ABC  C0 02 CC F0 */	lfs f0, lbl_8051B050@sda21(r2)
/* 8026CB80 00269AC0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8026CB84 00269AC4  4C 40 13 82 */	cror 2, 0, 2
/* 8026CB88 00269AC8  40 82 00 28 */	bne lbl_8026CBB0
/* 8026CB8C 00269ACC  7F C3 F3 78 */	mr r3, r30
/* 8026CB90 00269AD0  7F E4 FB 78 */	mr r4, r31
/* 8026CB94 00269AD4  81 9E 00 00 */	lwz r12, 0(r30)
/* 8026CB98 00269AD8  38 A0 00 00 */	li r5, 0
/* 8026CB9C 00269ADC  38 C0 00 00 */	li r6, 0
/* 8026CBA0 00269AE0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8026CBA4 00269AE4  7D 89 03 A6 */	mtctr r12
/* 8026CBA8 00269AE8  4E 80 04 21 */	bctrl 
/* 8026CBAC 00269AEC  48 00 00 24 */	b lbl_8026CBD0
lbl_8026CBB0:
/* 8026CBB0 00269AF0  7F C3 F3 78 */	mr r3, r30
/* 8026CBB4 00269AF4  7F E4 FB 78 */	mr r4, r31
/* 8026CBB8 00269AF8  81 9E 00 00 */	lwz r12, 0(r30)
/* 8026CBBC 00269AFC  38 A0 00 01 */	li r5, 1
/* 8026CBC0 00269B00  38 C0 00 00 */	li r6, 0
/* 8026CBC4 00269B04  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8026CBC8 00269B08  7D 89 03 A6 */	mtctr r12
/* 8026CBCC 00269B0C  4E 80 04 21 */	bctrl 
lbl_8026CBD0:
/* 8026CBD0 00269B10  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8026CBD4 00269B14  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8026CBD8 00269B18  83 C1 00 08 */	lwz r30, 8(r1)
/* 8026CBDC 00269B1C  7C 08 03 A6 */	mtlr r0
/* 8026CBE0 00269B20  38 21 00 10 */	addi r1, r1, 0x10
/* 8026CBE4 00269B24  4E 80 00 20 */	blr 

.global cleanup__Q34Game7GasHiba11StateAttackFPQ24Game9EnemyBase
cleanup__Q34Game7GasHiba11StateAttackFPQ24Game9EnemyBase:
/* 8026CBE8 00269B28  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8026CBEC 00269B2C  7C 08 02 A6 */	mflr r0
/* 8026CBF0 00269B30  7C 83 23 78 */	mr r3, r4
/* 8026CBF4 00269B34  90 01 00 14 */	stw r0, 0x14(r1)
/* 8026CBF8 00269B38  48 00 13 51 */	bl finishGasEffect__Q34Game7GasHiba3ObjFv
/* 8026CBFC 00269B3C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8026CC00 00269B40  7C 08 03 A6 */	mtlr r0
/* 8026CC04 00269B44  38 21 00 10 */	addi r1, r1, 0x10
/* 8026CC08 00269B48  4E 80 00 20 */	blr 
