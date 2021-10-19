.include "macros.inc"
.section .rodata  # 0x804732E0 - 0x8049E220
.balign 0x8
.global lbl_8047C110
lbl_8047C110:
	.asciz "/enemy/data/YellowKochappy/kochappy_body_s3tc.2.bti"
.global lbl_8047C144
lbl_8047C144:
	.4byte 0x89A98352
	.4byte 0x83608383
	.4byte 0x83628373
	.4byte 0x815B837D
	.4byte 0x836C815B
	.4byte 0x83578383
	.4byte 0x00000000

.section .sdata, "wa"  # 0x80514680 - 0x80514D80
.balign 0x8
.global "cKochappyChangeTexName__Q34Game14YellowKochappy31@unnamed@YellowKochappyMgr_cpp@"
"cKochappyChangeTexName__Q34Game14YellowKochappy31@unnamed@YellowKochappyMgr_cpp@":
	.4byte lbl_8047C110

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global __ct__Q34Game14YellowKochappy3MgrFiUc
__ct__Q34Game14YellowKochappy3MgrFiUc:
/* 8012D5E4 0012A524  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8012D5E8 0012A528  7C 08 02 A6 */	mflr r0
/* 8012D5EC 0012A52C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8012D5F0 0012A530  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8012D5F4 0012A534  7C 7F 1B 78 */	mr r31, r3
/* 8012D5F8 0012A538  48 00 02 15 */	bl __ct__Q34Game12KochappyBase3MgrFiUc
/* 8012D5FC 0012A53C  3C 60 80 4B */	lis r3, __vt__Q34Game14YellowKochappy3Mgr@ha
/* 8012D600 0012A540  3C 80 80 48 */	lis r4, lbl_8047C144@ha
/* 8012D604 0012A544  38 A3 F3 10 */	addi r5, r3, __vt__Q34Game14YellowKochappy3Mgr@l
/* 8012D608 0012A548  7F E3 FB 78 */	mr r3, r31
/* 8012D60C 0012A54C  90 BF 00 00 */	stw r5, 0(r31)
/* 8012D610 0012A550  38 A5 00 38 */	addi r5, r5, 0x38
/* 8012D614 0012A554  38 04 C1 44 */	addi r0, r4, lbl_8047C144@l
/* 8012D618 0012A558  90 BF 00 04 */	stw r5, 4(r31)
/* 8012D61C 0012A55C  90 1F 00 18 */	stw r0, 0x18(r31)
/* 8012D620 0012A560  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8012D624 0012A564  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8012D628 0012A568  7C 08 03 A6 */	mtlr r0
/* 8012D62C 0012A56C  38 21 00 10 */	addi r1, r1, 0x10
/* 8012D630 0012A570  4E 80 00 20 */	blr 

.global doAlloc__Q34Game14YellowKochappy3MgrFv
doAlloc__Q34Game14YellowKochappy3MgrFv:
/* 8012D634 0012A574  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8012D638 0012A578  7C 08 02 A6 */	mflr r0
/* 8012D63C 0012A57C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8012D640 0012A580  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8012D644 0012A584  7C 7F 1B 78 */	mr r31, r3
/* 8012D648 0012A588  38 60 08 80 */	li r3, 0x880
/* 8012D64C 0012A58C  4B EF 68 59 */	bl __nw__FUl
/* 8012D650 0012A590  7C 64 1B 79 */	or. r4, r3, r3
/* 8012D654 0012A594  41 82 00 0C */	beq lbl_8012D660
/* 8012D658 0012A598  4B FE 4D A5 */	bl __ct__Q34Game12KochappyBase5ParmsFv
/* 8012D65C 0012A59C  7C 64 1B 78 */	mr r4, r3
lbl_8012D660:
/* 8012D660 0012A5A0  7F E3 FB 78 */	mr r3, r31
/* 8012D664 0012A5A4  48 00 22 39 */	bl init__Q24Game12EnemyMgrBaseFPQ24Game14EnemyParmsBase
/* 8012D668 0012A5A8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8012D66C 0012A5AC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8012D670 0012A5B0  7C 08 03 A6 */	mtlr r0
/* 8012D674 0012A5B4  38 21 00 10 */	addi r1, r1, 0x10
/* 8012D678 0012A5B8  4E 80 00 20 */	blr 

.global loadTexData__Q34Game14YellowKochappy3MgrFv
loadTexData__Q34Game14YellowKochappy3MgrFv:
/* 8012D67C 0012A5BC  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 8012D680 0012A5C0  7C 08 02 A6 */	mflr r0
/* 8012D684 0012A5C4  90 01 00 44 */	stw r0, 0x44(r1)
/* 8012D688 0012A5C8  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 8012D68C 0012A5CC  7C 7F 1B 78 */	mr r31, r3
/* 8012D690 0012A5D0  38 61 00 08 */	addi r3, r1, 8
/* 8012D694 0012A5D4  80 8D 83 F8 */	lwz r4, "cKochappyChangeTexName__Q34Game14YellowKochappy31@unnamed@YellowKochappyMgr_cpp@"@sda21(r13)
/* 8012D698 0012A5D8  48 31 EF 85 */	bl __ct__Q212LoadResource11ArgAramOnlyFPCc
/* 8012D69C 0012A5DC  80 6D 9C 28 */	lwz r3, gLoadResourceMgr@sda21(r13)
/* 8012D6A0 0012A5E0  38 81 00 08 */	addi r4, r1, 8
/* 8012D6A4 0012A5E4  48 31 F0 FD */	bl load__Q212LoadResource3MgrFRQ212LoadResource3Arg
/* 8012D6A8 0012A5E8  80 03 00 30 */	lwz r0, 0x30(r3)
/* 8012D6AC 0012A5EC  90 1F 00 44 */	stw r0, 0x44(r31)
/* 8012D6B0 0012A5F0  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8012D6B4 0012A5F4  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 8012D6B8 0012A5F8  7C 08 03 A6 */	mtlr r0
/* 8012D6BC 0012A5FC  38 21 00 40 */	addi r1, r1, 0x40
/* 8012D6C0 0012A600  4E 80 00 20 */	blr 

.global __dt__Q34Game14YellowKochappy3MgrFv
__dt__Q34Game14YellowKochappy3MgrFv:
/* 8012D6C4 0012A604  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8012D6C8 0012A608  7C 08 02 A6 */	mflr r0
/* 8012D6CC 0012A60C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8012D6D0 0012A610  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8012D6D4 0012A614  7C 9F 23 78 */	mr r31, r4
/* 8012D6D8 0012A618  93 C1 00 08 */	stw r30, 8(r1)
/* 8012D6DC 0012A61C  7C 7E 1B 79 */	or. r30, r3, r3
/* 8012D6E0 0012A620  41 82 00 90 */	beq lbl_8012D770
/* 8012D6E4 0012A624  3C 60 80 4B */	lis r3, __vt__Q34Game14YellowKochappy3Mgr@ha
/* 8012D6E8 0012A628  38 63 F3 10 */	addi r3, r3, __vt__Q34Game14YellowKochappy3Mgr@l
/* 8012D6EC 0012A62C  90 7E 00 00 */	stw r3, 0(r30)
/* 8012D6F0 0012A630  38 03 00 38 */	addi r0, r3, 0x38
/* 8012D6F4 0012A634  90 1E 00 04 */	stw r0, 4(r30)
/* 8012D6F8 0012A638  41 82 00 68 */	beq lbl_8012D760
/* 8012D6FC 0012A63C  3C 60 80 4B */	lis r3, __vt__Q34Game12KochappyBase3Mgr@ha
/* 8012D700 0012A640  38 63 F3 F8 */	addi r3, r3, __vt__Q34Game12KochappyBase3Mgr@l
/* 8012D704 0012A644  90 7E 00 00 */	stw r3, 0(r30)
/* 8012D708 0012A648  38 03 00 38 */	addi r0, r3, 0x38
/* 8012D70C 0012A64C  90 1E 00 04 */	stw r0, 4(r30)
/* 8012D710 0012A650  41 82 00 50 */	beq lbl_8012D760
/* 8012D714 0012A654  3C 60 80 4B */	lis r3, __vt__Q24Game12EnemyMgrBase@ha
/* 8012D718 0012A658  38 63 F8 A0 */	addi r3, r3, __vt__Q24Game12EnemyMgrBase@l
/* 8012D71C 0012A65C  90 7E 00 00 */	stw r3, 0(r30)
/* 8012D720 0012A660  38 03 00 38 */	addi r0, r3, 0x38
/* 8012D724 0012A664  90 1E 00 04 */	stw r0, 4(r30)
/* 8012D728 0012A668  41 82 00 38 */	beq lbl_8012D760
/* 8012D72C 0012A66C  3C 60 80 4B */	lis r3, __vt__Q24Game13IEnemyMgrBase@ha
/* 8012D730 0012A670  34 1E 00 04 */	addic. r0, r30, 4
/* 8012D734 0012A674  38 63 AC FC */	addi r3, r3, __vt__Q24Game13IEnemyMgrBase@l
/* 8012D738 0012A678  90 7E 00 00 */	stw r3, 0(r30)
/* 8012D73C 0012A67C  38 03 00 38 */	addi r0, r3, 0x38
/* 8012D740 0012A680  90 1E 00 04 */	stw r0, 4(r30)
/* 8012D744 0012A684  41 82 00 1C */	beq lbl_8012D760
/* 8012D748 0012A688  3C 80 80 4B */	lis r4, __vt__16GenericContainer@ha
/* 8012D74C 0012A68C  38 7E 00 04 */	addi r3, r30, 4
/* 8012D750 0012A690  38 04 AC DC */	addi r0, r4, __vt__16GenericContainer@l
/* 8012D754 0012A694  38 80 00 00 */	li r4, 0
/* 8012D758 0012A698  90 1E 00 04 */	stw r0, 4(r30)
/* 8012D75C 0012A69C  48 2E 3E 2D */	bl __dt__5CNodeFv
lbl_8012D760:
/* 8012D760 0012A6A0  7F E0 07 35 */	extsh. r0, r31
/* 8012D764 0012A6A4  40 81 00 0C */	ble lbl_8012D770
/* 8012D768 0012A6A8  7F C3 F3 78 */	mr r3, r30
/* 8012D76C 0012A6AC  4B EF 69 49 */	bl __dl__FPv
lbl_8012D770:
/* 8012D770 0012A6B0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8012D774 0012A6B4  7F C3 F3 78 */	mr r3, r30
/* 8012D778 0012A6B8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8012D77C 0012A6BC  83 C1 00 08 */	lwz r30, 8(r1)
/* 8012D780 0012A6C0  7C 08 03 A6 */	mtlr r0
/* 8012D784 0012A6C4  38 21 00 10 */	addi r1, r1, 0x10
/* 8012D788 0012A6C8  4E 80 00 20 */	blr 

.global getEnemyTypeID__Q34Game14YellowKochappy3MgrFv
getEnemyTypeID__Q34Game14YellowKochappy3MgrFv:
/* 8012D78C 0012A6CC  38 60 00 2D */	li r3, 0x2d
/* 8012D790 0012A6D0  4E 80 00 20 */	blr 

.global createObj__Q34Game14YellowKochappy3MgrFi
createObj__Q34Game14YellowKochappy3MgrFi:
/* 8012D794 0012A6D4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8012D798 0012A6D8  7C 08 02 A6 */	mflr r0
/* 8012D79C 0012A6DC  90 01 00 14 */	stw r0, 0x14(r1)
/* 8012D7A0 0012A6E0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8012D7A4 0012A6E4  7C 9F 23 78 */	mr r31, r4
/* 8012D7A8 0012A6E8  93 C1 00 08 */	stw r30, 8(r1)
/* 8012D7AC 0012A6EC  7C 7E 1B 78 */	mr r30, r3
/* 8012D7B0 0012A6F0  1C 7F 02 E8 */	mulli r3, r31, 0x2e8
/* 8012D7B4 0012A6F4  38 63 00 10 */	addi r3, r3, 0x10
/* 8012D7B8 0012A6F8  4B EF 67 F5 */	bl __nwa__FUl
/* 8012D7BC 0012A6FC  3C 80 80 13 */	lis r4, __ct__Q34Game14YellowKochappy3ObjFv@ha
/* 8012D7C0 0012A700  3C A0 80 13 */	lis r5, __dt__Q34Game14YellowKochappy3ObjFv@ha
/* 8012D7C4 0012A704  38 84 D2 14 */	addi r4, r4, __ct__Q34Game14YellowKochappy3ObjFv@l
/* 8012D7C8 0012A708  7F E7 FB 78 */	mr r7, r31
/* 8012D7CC 0012A70C  38 A5 D4 F0 */	addi r5, r5, __dt__Q34Game14YellowKochappy3ObjFv@l
/* 8012D7D0 0012A710  38 C0 02 E8 */	li r6, 0x2e8
/* 8012D7D4 0012A714  4B F9 42 1D */	bl __construct_new_array
/* 8012D7D8 0012A718  90 7E 00 48 */	stw r3, 0x48(r30)
/* 8012D7DC 0012A71C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8012D7E0 0012A720  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8012D7E4 0012A724  83 C1 00 08 */	lwz r30, 8(r1)
/* 8012D7E8 0012A728  7C 08 03 A6 */	mtlr r0
/* 8012D7EC 0012A72C  38 21 00 10 */	addi r1, r1, 0x10
/* 8012D7F0 0012A730  4E 80 00 20 */	blr 

.global getEnemy__Q34Game14YellowKochappy3MgrFi
getEnemy__Q34Game14YellowKochappy3MgrFi:
/* 8012D7F4 0012A734  1C 04 02 E8 */	mulli r0, r4, 0x2e8
/* 8012D7F8 0012A738  80 63 00 48 */	lwz r3, 0x48(r3)
/* 8012D7FC 0012A73C  7C 63 02 14 */	add r3, r3, r0
/* 8012D800 0012A740  4E 80 00 20 */	blr 

.global "@4@__dt__Q34Game14YellowKochappy3MgrFv"
"@4@__dt__Q34Game14YellowKochappy3MgrFv":
/* 8012D804 0012A744  38 63 FF FC */	addi r3, r3, -4
/* 8012D808 0012A748  4B FF FE BC */	b __dt__Q34Game14YellowKochappy3MgrFv
