.include "macros.inc"
.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
.global lbl_8048A7D0
lbl_8048A7D0:
	.asciz "/enemy/data/GasOtakara/otakara_purple_s3tc.bti"
	.skip 1
.global lbl_8048A800
lbl_8048A800:
	.4byte 0x834B8358
	.4byte 0x8349835E
	.4byte 0x834A8389
	.4byte 0x83808356
	.4byte 0x837D836C
	.4byte 0x815B8357
	.4byte 0x83830000
.global lbl_8048A81C
lbl_8048A81C:
	.asciz "GasOtakaraMgr.cpp"
	.skip 2
.global lbl_8048A830
lbl_8048A830:
	.asciz "P2Assert"
	.skip 3

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.global __vt__Q34Game10GasOtakara3Mgr
__vt__Q34Game10GasOtakara3Mgr:
	.4byte 0
	.4byte 0
	.4byte doAnimation__Q24Game12EnemyMgrBaseFv
	.4byte doEntry__Q24Game12EnemyMgrBaseFv
	.4byte doSetView__Q24Game12EnemyMgrBaseFi
	.4byte doViewCalc__Q24Game12EnemyMgrBaseFv
	.4byte doSimulation__Q24Game12EnemyMgrBaseFf
	.4byte doDirectDraw__Q24Game12EnemyMgrBaseFR8Graphics
	.4byte doSimpleDraw__16GenericObjectMgrFP8Viewport
	.4byte loadResources__16GenericObjectMgrFv
	.4byte resetMgr__16GenericObjectMgrFv
	.4byte pausable__16GenericObjectMgrFv
	.4byte frozenable__16GenericObjectMgrFv
	.4byte getMatrixLoadType__16GenericObjectMgrFv
	.4byte 0
	.4byte 0
	.4byte "@4@__dt__Q34Game10GasOtakara3MgrFv"
	.4byte getChildCount__5CNodeFv
	.4byte "@4@getObject__Q24Game12EnemyMgrBaseFPv"
	.4byte "@4@getNext__Q24Game12EnemyMgrBaseFPv"
	.4byte "@4@getStart__Q24Game12EnemyMgrBaseFv"
	.4byte "@4@getEnd__Q24Game12EnemyMgrBaseFv"
	.4byte __dt__Q34Game10GasOtakara3MgrFv
	.4byte getObject__Q24Game12EnemyMgrBaseFPv
	.4byte getNext__Q24Game12EnemyMgrBaseFPv
	.4byte getStart__Q24Game12EnemyMgrBaseFv
	.4byte getEnd__Q24Game12EnemyMgrBaseFv
	.4byte alloc__Q24Game12EnemyMgrBaseFv
	.4byte birth__Q24Game12EnemyMgrBaseFRQ24Game13EnemyBirthArg
	.4byte getJ3DModelData__Q24Game12EnemyMgrBaseCFv
	.4byte getGenerator__Q24Game12EnemyMgrBaseCFv
	.4byte killAll__Q24Game12EnemyMgrBaseFPQ24Game15CreatureKillArg
	.4byte setupSoundViewerAndBas__Q24Game12EnemyMgrBaseFv
	.4byte setDebugParm__Q24Game12EnemyMgrBaseFUl
	.4byte resetDebugParm__Q24Game12EnemyMgrBaseFUl
	.4byte getMaxObjects__Q24Game12EnemyMgrBaseCFv
	.4byte startMovie__Q24Game12EnemyMgrBaseFv
	.4byte endMovie__Q24Game12EnemyMgrBaseFv
	.4byte get__Q24Game12EnemyMgrBaseFPv
	.4byte isAlwaysMovieActor__Q24Game12EnemyMgrBaseFv
	.4byte createObj__Q34Game10GasOtakara3MgrFi
	.4byte getEnemy__Q34Game10GasOtakara3MgrFi
	.4byte doAlloc__Q34Game10GasOtakara3MgrFv
	.4byte getEnemyTypeID__Q34Game10GasOtakara3MgrFv
	.4byte createModel__Q34Game11OtakaraBase3MgrFv
	.4byte initParms__Q24Game12EnemyMgrBaseFv
	.4byte loadResource__Q24Game12EnemyMgrBaseFv
	.4byte initObjects__Q24Game12EnemyMgrBaseFv
	.4byte initStoneSetting__Q24Game12EnemyMgrBaseFv
	.4byte loadModelData__Q24Game12EnemyMgrBaseFP10JKRArchive
	.4byte loadModelData__Q34Game11OtakaraBase3MgrFv
	.4byte loadAnimData__Q34Game11OtakaraBase3MgrFv
	.4byte loadTexData__Q34Game10GasOtakara3MgrFv
	.4byte doLoadBmd__Q24Game12EnemyMgrBaseFPv
	.4byte doLoadBdl__Q24Game12EnemyMgrBaseFPv
	.4byte initGenerator__Q24Game12EnemyMgrBaseFv
	.4byte getChangeTexture__Q34Game10GasOtakara3MgrFv
	.4byte 0

.section .sdata, "wa"  # 0x80514680 - 0x80514D80
.balign 8
.global "cOtakaraChangeTexName__Q34Game10GasOtakara27@unnamed@GasOtakaraMgr_cpp@"
"cOtakaraChangeTexName__Q34Game10GasOtakara27@unnamed@GasOtakaraMgr_cpp@":
	.4byte lbl_8048A7D0

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global __ct__Q34Game10GasOtakara3MgrFiUc
__ct__Q34Game10GasOtakara3MgrFiUc:
/* 802B8F3C 002B5E7C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802B8F40 002B5E80  7C 08 02 A6 */	mflr r0
/* 802B8F44 002B5E84  90 01 00 14 */	stw r0, 0x14(r1)
/* 802B8F48 002B5E88  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802B8F4C 002B5E8C  7C 7F 1B 78 */	mr r31, r3
/* 802B8F50 002B5E90  4B FF CF 49 */	bl __ct__Q34Game11OtakaraBase3MgrFiUc
/* 802B8F54 002B5E94  3C 60 80 4D */	lis r3, __vt__Q34Game10GasOtakara3Mgr@ha
/* 802B8F58 002B5E98  3C 80 80 49 */	lis r4, lbl_8048A800@ha
/* 802B8F5C 002B5E9C  38 A3 FC C0 */	addi r5, r3, __vt__Q34Game10GasOtakara3Mgr@l
/* 802B8F60 002B5EA0  7F E3 FB 78 */	mr r3, r31
/* 802B8F64 002B5EA4  90 BF 00 00 */	stw r5, 0(r31)
/* 802B8F68 002B5EA8  38 A5 00 38 */	addi r5, r5, 0x38
/* 802B8F6C 002B5EAC  38 04 A8 00 */	addi r0, r4, lbl_8048A800@l
/* 802B8F70 002B5EB0  90 BF 00 04 */	stw r5, 4(r31)
/* 802B8F74 002B5EB4  90 1F 00 18 */	stw r0, 0x18(r31)
/* 802B8F78 002B5EB8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802B8F7C 002B5EBC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802B8F80 002B5EC0  7C 08 03 A6 */	mtlr r0
/* 802B8F84 002B5EC4  38 21 00 10 */	addi r1, r1, 0x10
/* 802B8F88 002B5EC8  4E 80 00 20 */	blr 

.global doAlloc__Q34Game10GasOtakara3MgrFv
doAlloc__Q34Game10GasOtakara3MgrFv:
/* 802B8F8C 002B5ECC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802B8F90 002B5ED0  7C 08 02 A6 */	mflr r0
/* 802B8F94 002B5ED4  90 01 00 14 */	stw r0, 0x14(r1)
/* 802B8F98 002B5ED8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802B8F9C 002B5EDC  7C 7F 1B 78 */	mr r31, r3
/* 802B8FA0 002B5EE0  38 60 08 A8 */	li r3, 0x8a8
/* 802B8FA4 002B5EE4  4B D6 AF 01 */	bl __nw__FUl
/* 802B8FA8 002B5EE8  7C 64 1B 79 */	or. r4, r3, r3
/* 802B8FAC 002B5EEC  41 82 00 0C */	beq lbl_802B8FB8
/* 802B8FB0 002B5EF0  4B FF ED B5 */	bl __ct__Q34Game11OtakaraBase5ParmsFv
/* 802B8FB4 002B5EF4  7C 64 1B 78 */	mr r4, r3
lbl_802B8FB8:
/* 802B8FB8 002B5EF8  7F E3 FB 78 */	mr r3, r31
/* 802B8FBC 002B5EFC  4B E7 68 E1 */	bl init__Q24Game12EnemyMgrBaseFPQ24Game14EnemyParmsBase
/* 802B8FC0 002B5F00  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802B8FC4 002B5F04  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802B8FC8 002B5F08  7C 08 03 A6 */	mtlr r0
/* 802B8FCC 002B5F0C  38 21 00 10 */	addi r1, r1, 0x10
/* 802B8FD0 002B5F10  4E 80 00 20 */	blr 

.global createObj__Q34Game10GasOtakara3MgrFi
createObj__Q34Game10GasOtakara3MgrFi:
/* 802B8FD4 002B5F14  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802B8FD8 002B5F18  7C 08 02 A6 */	mflr r0
/* 802B8FDC 002B5F1C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802B8FE0 002B5F20  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802B8FE4 002B5F24  7C 9F 23 78 */	mr r31, r4
/* 802B8FE8 002B5F28  93 C1 00 08 */	stw r30, 8(r1)
/* 802B8FEC 002B5F2C  7C 7E 1B 78 */	mr r30, r3
/* 802B8FF0 002B5F30  1C 7F 03 08 */	mulli r3, r31, 0x308
/* 802B8FF4 002B5F34  38 63 00 10 */	addi r3, r3, 0x10
/* 802B8FF8 002B5F38  4B D6 AF B5 */	bl __nwa__FUl
/* 802B8FFC 002B5F3C  3C 80 80 2C */	lis r4, __ct__Q34Game10GasOtakara3ObjFv@ha
/* 802B9000 002B5F40  3C A0 80 2C */	lis r5, __dt__Q34Game10GasOtakara3ObjFv@ha
/* 802B9004 002B5F44  38 84 92 94 */	addi r4, r4, __ct__Q34Game10GasOtakara3ObjFv@l
/* 802B9008 002B5F48  7F E7 FB 78 */	mr r7, r31
/* 802B900C 002B5F4C  38 A5 90 34 */	addi r5, r5, __dt__Q34Game10GasOtakara3ObjFv@l
/* 802B9010 002B5F50  38 C0 03 08 */	li r6, 0x308
/* 802B9014 002B5F54  4B E0 89 DD */	bl __construct_new_array
/* 802B9018 002B5F58  90 7E 00 48 */	stw r3, 0x48(r30)
/* 802B901C 002B5F5C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802B9020 002B5F60  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802B9024 002B5F64  83 C1 00 08 */	lwz r30, 8(r1)
/* 802B9028 002B5F68  7C 08 03 A6 */	mtlr r0
/* 802B902C 002B5F6C  38 21 00 10 */	addi r1, r1, 0x10
/* 802B9030 002B5F70  4E 80 00 20 */	blr 

.global __dt__Q34Game10GasOtakara3ObjFv
__dt__Q34Game10GasOtakara3ObjFv:
/* 802B9034 002B5F74  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802B9038 002B5F78  7C 08 02 A6 */	mflr r0
/* 802B903C 002B5F7C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802B9040 002B5F80  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802B9044 002B5F84  7C 9F 23 78 */	mr r31, r4
/* 802B9048 002B5F88  93 C1 00 08 */	stw r30, 8(r1)
/* 802B904C 002B5F8C  7C 7E 1B 79 */	or. r30, r3, r3
/* 802B9050 002B5F90  41 82 00 B8 */	beq lbl_802B9108
/* 802B9054 002B5F94  3C 60 80 4D */	lis r3, __vt__Q34Game10GasOtakara3Obj@ha
/* 802B9058 002B5F98  38 1E 02 F8 */	addi r0, r30, 0x2f8
/* 802B905C 002B5F9C  38 83 FD D8 */	addi r4, r3, __vt__Q34Game10GasOtakara3Obj@l
/* 802B9060 002B5FA0  90 9E 00 00 */	stw r4, 0(r30)
/* 802B9064 002B5FA4  38 64 01 B0 */	addi r3, r4, 0x1b0
/* 802B9068 002B5FA8  38 84 03 24 */	addi r4, r4, 0x324
/* 802B906C 002B5FAC  90 7E 01 78 */	stw r3, 0x178(r30)
/* 802B9070 002B5FB0  80 7E 01 7C */	lwz r3, 0x17c(r30)
/* 802B9074 002B5FB4  90 83 00 00 */	stw r4, 0(r3)
/* 802B9078 002B5FB8  80 7E 01 7C */	lwz r3, 0x17c(r30)
/* 802B907C 002B5FBC  7C 03 00 50 */	subf r0, r3, r0
/* 802B9080 002B5FC0  90 03 00 0C */	stw r0, 0xc(r3)
/* 802B9084 002B5FC4  41 82 00 74 */	beq lbl_802B90F8
/* 802B9088 002B5FC8  3C 60 80 4D */	lis r3, __vt__Q34Game11OtakaraBase3Obj@ha
/* 802B908C 002B5FCC  38 1E 02 F4 */	addi r0, r30, 0x2f4
/* 802B9090 002B5FD0  38 83 F0 84 */	addi r4, r3, __vt__Q34Game11OtakaraBase3Obj@l
/* 802B9094 002B5FD4  90 9E 00 00 */	stw r4, 0(r30)
/* 802B9098 002B5FD8  38 64 01 B0 */	addi r3, r4, 0x1b0
/* 802B909C 002B5FDC  38 84 03 24 */	addi r4, r4, 0x324
/* 802B90A0 002B5FE0  90 7E 01 78 */	stw r3, 0x178(r30)
/* 802B90A4 002B5FE4  80 7E 01 7C */	lwz r3, 0x17c(r30)
/* 802B90A8 002B5FE8  90 83 00 00 */	stw r4, 0(r3)
/* 802B90AC 002B5FEC  80 7E 01 7C */	lwz r3, 0x17c(r30)
/* 802B90B0 002B5FF0  7C 03 00 50 */	subf r0, r3, r0
/* 802B90B4 002B5FF4  90 03 00 0C */	stw r0, 0xc(r3)
/* 802B90B8 002B5FF8  41 82 00 40 */	beq lbl_802B90F8
/* 802B90BC 002B5FFC  3C 60 80 4B */	lis r3, __vt__Q24Game9EnemyBase@ha
/* 802B90C0 002B6000  38 1E 02 BC */	addi r0, r30, 0x2bc
/* 802B90C4 002B6004  38 83 A3 24 */	addi r4, r3, __vt__Q24Game9EnemyBase@l
/* 802B90C8 002B6008  38 7E 02 90 */	addi r3, r30, 0x290
/* 802B90CC 002B600C  90 9E 00 00 */	stw r4, 0(r30)
/* 802B90D0 002B6010  38 A4 01 B0 */	addi r5, r4, 0x1b0
/* 802B90D4 002B6014  38 C4 02 F8 */	addi r6, r4, 0x2f8
/* 802B90D8 002B6018  38 80 FF FF */	li r4, -1
/* 802B90DC 002B601C  90 BE 01 78 */	stw r5, 0x178(r30)
/* 802B90E0 002B6020  80 BE 01 7C */	lwz r5, 0x17c(r30)
/* 802B90E4 002B6024  90 C5 00 00 */	stw r6, 0(r5)
/* 802B90E8 002B6028  80 BE 01 7C */	lwz r5, 0x17c(r30)
/* 802B90EC 002B602C  7C 05 00 50 */	subf r0, r5, r0
/* 802B90F0 002B6030  90 05 00 0C */	stw r0, 0xc(r5)
/* 802B90F4 002B6034  48 15 84 95 */	bl __dt__5CNodeFv
lbl_802B90F8:
/* 802B90F8 002B6038  7F E0 07 35 */	extsh. r0, r31
/* 802B90FC 002B603C  40 81 00 0C */	ble lbl_802B9108
/* 802B9100 002B6040  7F C3 F3 78 */	mr r3, r30
/* 802B9104 002B6044  4B D6 AF B1 */	bl __dl__FPv
lbl_802B9108:
/* 802B9108 002B6048  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802B910C 002B604C  7F C3 F3 78 */	mr r3, r30
/* 802B9110 002B6050  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802B9114 002B6054  83 C1 00 08 */	lwz r30, 8(r1)
/* 802B9118 002B6058  7C 08 03 A6 */	mtlr r0
/* 802B911C 002B605C  38 21 00 10 */	addi r1, r1, 0x10
/* 802B9120 002B6060  4E 80 00 20 */	blr 

.global getEnemy__Q34Game10GasOtakara3MgrFi
getEnemy__Q34Game10GasOtakara3MgrFi:
/* 802B9124 002B6064  1C 04 03 08 */	mulli r0, r4, 0x308
/* 802B9128 002B6068  80 63 00 48 */	lwz r3, 0x48(r3)
/* 802B912C 002B606C  7C 63 02 14 */	add r3, r3, r0
/* 802B9130 002B6070  4E 80 00 20 */	blr 

.global loadTexData__Q34Game10GasOtakara3MgrFv
loadTexData__Q34Game10GasOtakara3MgrFv:
/* 802B9134 002B6074  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 802B9138 002B6078  7C 08 02 A6 */	mflr r0
/* 802B913C 002B607C  90 01 00 44 */	stw r0, 0x44(r1)
/* 802B9140 002B6080  38 00 00 00 */	li r0, 0
/* 802B9144 002B6084  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 802B9148 002B6088  7C 7F 1B 78 */	mr r31, r3
/* 802B914C 002B608C  90 03 00 44 */	stw r0, 0x44(r3)
/* 802B9150 002B6090  38 61 00 08 */	addi r3, r1, 8
/* 802B9154 002B6094  80 8D 84 F0 */	lwz r4, "cOtakaraChangeTexName__Q34Game10GasOtakara27@unnamed@GasOtakaraMgr_cpp@"@sda21(r13)
/* 802B9158 002B6098  48 19 34 81 */	bl __ct__Q212LoadResource3ArgFPCc
/* 802B915C 002B609C  80 6D 9C 28 */	lwz r3, gLoadResourceMgr@sda21(r13)
/* 802B9160 002B60A0  38 81 00 08 */	addi r4, r1, 8
/* 802B9164 002B60A4  48 19 36 3D */	bl load__Q212LoadResource3MgrFRQ212LoadResource3Arg
/* 802B9168 002B60A8  28 03 00 00 */	cmplwi r3, 0
/* 802B916C 002B60AC  41 82 00 0C */	beq lbl_802B9178
/* 802B9170 002B60B0  80 03 00 30 */	lwz r0, 0x30(r3)
/* 802B9174 002B60B4  90 1F 00 44 */	stw r0, 0x44(r31)
lbl_802B9178:
/* 802B9178 002B60B8  80 1F 00 44 */	lwz r0, 0x44(r31)
/* 802B917C 002B60BC  28 00 00 00 */	cmplwi r0, 0
/* 802B9180 002B60C0  40 82 00 20 */	bne lbl_802B91A0
/* 802B9184 002B60C4  3C 60 80 49 */	lis r3, lbl_8048A81C@ha
/* 802B9188 002B60C8  3C A0 80 49 */	lis r5, lbl_8048A830@ha
/* 802B918C 002B60CC  38 63 A8 1C */	addi r3, r3, lbl_8048A81C@l
/* 802B9190 002B60D0  38 80 00 53 */	li r4, 0x53
/* 802B9194 002B60D4  38 A5 A8 30 */	addi r5, r5, lbl_8048A830@l
/* 802B9198 002B60D8  4C C6 31 82 */	crclr 6
/* 802B919C 002B60DC  4B D7 14 A5 */	bl panic_f__12JUTExceptionFPCciPCce
lbl_802B91A0:
/* 802B91A0 002B60E0  80 01 00 44 */	lwz r0, 0x44(r1)
/* 802B91A4 002B60E4  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 802B91A8 002B60E8  7C 08 03 A6 */	mtlr r0
/* 802B91AC 002B60EC  38 21 00 40 */	addi r1, r1, 0x40
/* 802B91B0 002B60F0  4E 80 00 20 */	blr 

.global __dt__Q34Game10GasOtakara3MgrFv
__dt__Q34Game10GasOtakara3MgrFv:
/* 802B91B4 002B60F4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802B91B8 002B60F8  7C 08 02 A6 */	mflr r0
/* 802B91BC 002B60FC  90 01 00 14 */	stw r0, 0x14(r1)
/* 802B91C0 002B6100  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802B91C4 002B6104  7C 9F 23 78 */	mr r31, r4
/* 802B91C8 002B6108  93 C1 00 08 */	stw r30, 8(r1)
/* 802B91CC 002B610C  7C 7E 1B 79 */	or. r30, r3, r3
/* 802B91D0 002B6110  41 82 00 90 */	beq lbl_802B9260
/* 802B91D4 002B6114  3C 60 80 4D */	lis r3, __vt__Q34Game10GasOtakara3Mgr@ha
/* 802B91D8 002B6118  38 63 FC C0 */	addi r3, r3, __vt__Q34Game10GasOtakara3Mgr@l
/* 802B91DC 002B611C  90 7E 00 00 */	stw r3, 0(r30)
/* 802B91E0 002B6120  38 03 00 38 */	addi r0, r3, 0x38
/* 802B91E4 002B6124  90 1E 00 04 */	stw r0, 4(r30)
/* 802B91E8 002B6128  41 82 00 68 */	beq lbl_802B9250
/* 802B91EC 002B612C  3C 60 80 4D */	lis r3, __vt__Q34Game11OtakaraBase3Mgr@ha
/* 802B91F0 002B6130  38 63 EF 90 */	addi r3, r3, __vt__Q34Game11OtakaraBase3Mgr@l
/* 802B91F4 002B6134  90 7E 00 00 */	stw r3, 0(r30)
/* 802B91F8 002B6138  38 03 00 38 */	addi r0, r3, 0x38
/* 802B91FC 002B613C  90 1E 00 04 */	stw r0, 4(r30)
/* 802B9200 002B6140  41 82 00 50 */	beq lbl_802B9250
/* 802B9204 002B6144  3C 60 80 4B */	lis r3, __vt__Q24Game12EnemyMgrBase@ha
/* 802B9208 002B6148  38 63 F8 A0 */	addi r3, r3, __vt__Q24Game12EnemyMgrBase@l
/* 802B920C 002B614C  90 7E 00 00 */	stw r3, 0(r30)
/* 802B9210 002B6150  38 03 00 38 */	addi r0, r3, 0x38
/* 802B9214 002B6154  90 1E 00 04 */	stw r0, 4(r30)
/* 802B9218 002B6158  41 82 00 38 */	beq lbl_802B9250
/* 802B921C 002B615C  3C 60 80 4B */	lis r3, __vt__Q24Game13IEnemyMgrBase@ha
/* 802B9220 002B6160  34 1E 00 04 */	addic. r0, r30, 4
/* 802B9224 002B6164  38 63 AC FC */	addi r3, r3, __vt__Q24Game13IEnemyMgrBase@l
/* 802B9228 002B6168  90 7E 00 00 */	stw r3, 0(r30)
/* 802B922C 002B616C  38 03 00 38 */	addi r0, r3, 0x38
/* 802B9230 002B6170  90 1E 00 04 */	stw r0, 4(r30)
/* 802B9234 002B6174  41 82 00 1C */	beq lbl_802B9250
/* 802B9238 002B6178  3C 80 80 4B */	lis r4, __vt__16GenericContainer@ha
/* 802B923C 002B617C  38 7E 00 04 */	addi r3, r30, 4
/* 802B9240 002B6180  38 04 AC DC */	addi r0, r4, __vt__16GenericContainer@l
/* 802B9244 002B6184  38 80 00 00 */	li r4, 0
/* 802B9248 002B6188  90 1E 00 04 */	stw r0, 4(r30)
/* 802B924C 002B618C  48 15 83 3D */	bl __dt__5CNodeFv
lbl_802B9250:
/* 802B9250 002B6190  7F E0 07 35 */	extsh. r0, r31
/* 802B9254 002B6194  40 81 00 0C */	ble lbl_802B9260
/* 802B9258 002B6198  7F C3 F3 78 */	mr r3, r30
/* 802B925C 002B619C  4B D6 AE 59 */	bl __dl__FPv
lbl_802B9260:
/* 802B9260 002B61A0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802B9264 002B61A4  7F C3 F3 78 */	mr r3, r30
/* 802B9268 002B61A8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802B926C 002B61AC  83 C1 00 08 */	lwz r30, 8(r1)
/* 802B9270 002B61B0  7C 08 03 A6 */	mtlr r0
/* 802B9274 002B61B4  38 21 00 10 */	addi r1, r1, 0x10
/* 802B9278 002B61B8  4E 80 00 20 */	blr 

.global getEnemyTypeID__Q34Game10GasOtakara3MgrFv
getEnemyTypeID__Q34Game10GasOtakara3MgrFv:
/* 802B927C 002B61BC  38 60 00 3D */	li r3, 0x3d
/* 802B9280 002B61C0  4E 80 00 20 */	blr 

.global getChangeTexture__Q34Game10GasOtakara3MgrFv
getChangeTexture__Q34Game10GasOtakara3MgrFv:
/* 802B9284 002B61C4  80 63 00 44 */	lwz r3, 0x44(r3)
/* 802B9288 002B61C8  4E 80 00 20 */	blr 

.global "@4@__dt__Q34Game10GasOtakara3MgrFv"
"@4@__dt__Q34Game10GasOtakara3MgrFv":
/* 802B928C 002B61CC  38 63 FF FC */	addi r3, r3, -4
/* 802B9290 002B61D0  4B FF FF 24 */	b __dt__Q34Game10GasOtakara3MgrFv
