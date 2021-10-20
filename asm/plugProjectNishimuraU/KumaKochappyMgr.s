.include "macros.inc"
.section .rodata  # 0x804732E0 - 0x8049E220
.balign 0x8
.global lbl_8048CD40
lbl_8048CD40:
	.4byte 0x83608372
	.4byte 0x834E837D
	.4byte 0x837D836C
	.4byte 0x815B8357
	.4byte 0x83830000
.global lbl_8048CD54
lbl_8048CD54:
	.4byte 0x456E656D
	.4byte 0x79506172
	.4byte 0x6D734261
	.4byte 0x73650000
.global lbl_8048CD64
lbl_8048CD64:
	.4byte 0x94928373
	.4byte 0x834E837E
	.4byte 0x83930000

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 0x8
.global __vt__Q34Game12KumaKochappy5Parms
__vt__Q34Game12KumaKochappy5Parms:
	.4byte 0
	.4byte 0
	.4byte read__Q34Game12KumaKochappy5ParmsFR6Stream
.global __vt__Q34Game12KumaKochappy3Mgr
__vt__Q34Game12KumaKochappy3Mgr:
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
	.4byte "@4@__dt__Q34Game12KumaKochappy3MgrFv"
	.4byte getChildCount__5CNodeFv
	.4byte "@4@getObject__Q24Game12EnemyMgrBaseFPv"
	.4byte "@4@getNext__Q24Game12EnemyMgrBaseFPv"
	.4byte "@4@getStart__Q24Game12EnemyMgrBaseFv"
	.4byte "@4@getEnd__Q24Game12EnemyMgrBaseFv"
	.4byte __dt__Q34Game12KumaKochappy3MgrFv
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
	.4byte createObj__Q34Game12KumaKochappy3MgrFi
	.4byte getEnemy__Q34Game12KumaKochappy3MgrFi
	.4byte doAlloc__Q34Game12KumaKochappy3MgrFv
	.4byte getEnemyTypeID__Q34Game12KumaKochappy3MgrFv
	.4byte createModel__Q24Game12EnemyMgrBaseFv
	.4byte initParms__Q24Game12EnemyMgrBaseFv
	.4byte loadResource__Q24Game12EnemyMgrBaseFv
	.4byte initObjects__Q24Game12EnemyMgrBaseFv
	.4byte initStoneSetting__Q24Game12EnemyMgrBaseFv
	.4byte loadModelData__Q24Game12EnemyMgrBaseFP10JKRArchive
	.4byte loadModelData__Q24Game12EnemyMgrBaseFv
	.4byte loadAnimData__Q24Game12EnemyMgrBaseFv
	.4byte loadTexData__Q24Game12EnemyMgrBaseFv
	.4byte doLoadBmd__Q24Game12EnemyMgrBaseFPv
	.4byte doLoadBdl__Q24Game12EnemyMgrBaseFPv
	.4byte initGenerator__Q24Game12EnemyMgrBaseFv
	.4byte 0

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global __ct__Q34Game12KumaKochappy3MgrFiUc
__ct__Q34Game12KumaKochappy3MgrFiUc:
/* 802E6CE4 002E3C24  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802E6CE8 002E3C28  7C 08 02 A6 */	mflr r0
/* 802E6CEC 002E3C2C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802E6CF0 002E3C30  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802E6CF4 002E3C34  7C 7F 1B 78 */	mr r31, r3
/* 802E6CF8 002E3C38  4B E4 7F 9D */	bl __ct__Q24Game12EnemyMgrBaseFiUc
/* 802E6CFC 002E3C3C  3C 60 80 4D */	lis r3, __vt__Q34Game12KumaKochappy3Mgr@ha
/* 802E6D00 002E3C40  3C 80 80 49 */	lis r4, lbl_8048CD40@ha
/* 802E6D04 002E3C44  38 A3 41 1C */	addi r5, r3, __vt__Q34Game12KumaKochappy3Mgr@l
/* 802E6D08 002E3C48  7F E3 FB 78 */	mr r3, r31
/* 802E6D0C 002E3C4C  90 BF 00 00 */	stw r5, 0(r31)
/* 802E6D10 002E3C50  38 A5 00 38 */	addi r5, r5, 0x38
/* 802E6D14 002E3C54  38 04 CD 40 */	addi r0, r4, lbl_8048CD40@l
/* 802E6D18 002E3C58  90 BF 00 04 */	stw r5, 4(r31)
/* 802E6D1C 002E3C5C  90 1F 00 18 */	stw r0, 0x18(r31)
/* 802E6D20 002E3C60  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802E6D24 002E3C64  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802E6D28 002E3C68  7C 08 03 A6 */	mtlr r0
/* 802E6D2C 002E3C6C  38 21 00 10 */	addi r1, r1, 0x10
/* 802E6D30 002E3C70  4E 80 00 20 */	blr 

.global doAlloc__Q34Game12KumaKochappy3MgrFv
doAlloc__Q34Game12KumaKochappy3MgrFv:
/* 802E6D34 002E3C74  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802E6D38 002E3C78  7C 08 02 A6 */	mflr r0
/* 802E6D3C 002E3C7C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802E6D40 002E3C80  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802E6D44 002E3C84  7C 7F 1B 78 */	mr r31, r3
/* 802E6D48 002E3C88  38 60 08 30 */	li r3, 0x830
/* 802E6D4C 002E3C8C  4B D3 D1 59 */	bl __nw__FUl
/* 802E6D50 002E3C90  7C 64 1B 79 */	or. r4, r3, r3
/* 802E6D54 002E3C94  41 82 00 0C */	beq lbl_802E6D60
/* 802E6D58 002E3C98  48 00 00 25 */	bl __ct__Q34Game12KumaKochappy5ParmsFv
/* 802E6D5C 002E3C9C  7C 64 1B 78 */	mr r4, r3
lbl_802E6D60:
/* 802E6D60 002E3CA0  7F E3 FB 78 */	mr r3, r31
/* 802E6D64 002E3CA4  4B E4 8B 39 */	bl init__Q24Game12EnemyMgrBaseFPQ24Game14EnemyParmsBase
/* 802E6D68 002E3CA8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802E6D6C 002E3CAC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802E6D70 002E3CB0  7C 08 03 A6 */	mtlr r0
/* 802E6D74 002E3CB4  38 21 00 10 */	addi r1, r1, 0x10
/* 802E6D78 002E3CB8  4E 80 00 20 */	blr 

.global __ct__Q34Game12KumaKochappy5ParmsFv
__ct__Q34Game12KumaKochappy5ParmsFv:
/* 802E6D7C 002E3CBC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802E6D80 002E3CC0  7C 08 02 A6 */	mflr r0
/* 802E6D84 002E3CC4  90 01 00 14 */	stw r0, 0x14(r1)
/* 802E6D88 002E3CC8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802E6D8C 002E3CCC  7C 7F 1B 78 */	mr r31, r3
/* 802E6D90 002E3CD0  4B E2 2A 0D */	bl __ct__Q24Game14EnemyParmsBaseFv
/* 802E6D94 002E3CD4  3C 60 80 4D */	lis r3, __vt__Q34Game12KumaKochappy5Parms@ha
/* 802E6D98 002E3CD8  3C A0 66 70 */	lis r5, 0x66703031@ha
/* 802E6D9C 002E3CDC  38 03 41 10 */	addi r0, r3, __vt__Q34Game12KumaKochappy5Parms@l
/* 802E6DA0 002E3CE0  3C 80 80 49 */	lis r4, lbl_8048CD54@ha
/* 802E6DA4 002E3CE4  90 1F 00 D8 */	stw r0, 0xd8(r31)
/* 802E6DA8 002E3CE8  38 1F 08 2C */	addi r0, r31, 0x82c
/* 802E6DAC 002E3CEC  3C 60 80 49 */	lis r3, lbl_8048CD64@ha
/* 802E6DB0 002E3CF0  38 A5 30 31 */	addi r5, r5, 0x66703031@l
/* 802E6DB4 002E3CF4  90 1F 07 F8 */	stw r0, 0x7f8(r31)
/* 802E6DB8 002E3CF8  38 C3 CD 64 */	addi r6, r3, lbl_8048CD64@l
/* 802E6DBC 002E3CFC  38 60 00 00 */	li r3, 0
/* 802E6DC0 002E3D00  38 04 CD 54 */	addi r0, r4, lbl_8048CD54@l
/* 802E6DC4 002E3D04  90 7F 07 FC */	stw r3, 0x7fc(r31)
/* 802E6DC8 002E3D08  38 7F 08 04 */	addi r3, r31, 0x804
/* 802E6DCC 002E3D0C  38 9F 07 F8 */	addi r4, r31, 0x7f8
/* 802E6DD0 002E3D10  90 1F 08 00 */	stw r0, 0x800(r31)
/* 802E6DD4 002E3D14  48 12 C8 85 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 802E6DD8 002E3D18  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 802E6DDC 002E3D1C  C0 42 EB 50 */	lfs f2, lbl_8051CEB0@sda21(r2)
/* 802E6DE0 002E3D20  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 802E6DE4 002E3D24  C0 22 EB 54 */	lfs f1, lbl_8051CEB4@sda21(r2)
/* 802E6DE8 002E3D28  90 1F 08 04 */	stw r0, 0x804(r31)
/* 802E6DEC 002E3D2C  7F E3 FB 78 */	mr r3, r31
/* 802E6DF0 002E3D30  C0 02 EB 58 */	lfs f0, lbl_8051CEB8@sda21(r2)
/* 802E6DF4 002E3D34  D0 5F 08 1C */	stfs f2, 0x81c(r31)
/* 802E6DF8 002E3D38  D0 3F 08 24 */	stfs f1, 0x824(r31)
/* 802E6DFC 002E3D3C  D0 1F 08 28 */	stfs f0, 0x828(r31)
/* 802E6E00 002E3D40  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802E6E04 002E3D44  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802E6E08 002E3D48  7C 08 03 A6 */	mtlr r0
/* 802E6E0C 002E3D4C  38 21 00 10 */	addi r1, r1, 0x10
/* 802E6E10 002E3D50  4E 80 00 20 */	blr 

.global createObj__Q34Game12KumaKochappy3MgrFi
createObj__Q34Game12KumaKochappy3MgrFi:
/* 802E6E14 002E3D54  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802E6E18 002E3D58  7C 08 02 A6 */	mflr r0
/* 802E6E1C 002E3D5C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802E6E20 002E3D60  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802E6E24 002E3D64  7C 9F 23 78 */	mr r31, r4
/* 802E6E28 002E3D68  93 C1 00 08 */	stw r30, 8(r1)
/* 802E6E2C 002E3D6C  7C 7E 1B 78 */	mr r30, r3
/* 802E6E30 002E3D70  1C 7F 02 F8 */	mulli r3, r31, 0x2f8
/* 802E6E34 002E3D74  38 63 00 10 */	addi r3, r3, 0x10
/* 802E6E38 002E3D78  4B D3 D1 75 */	bl __nwa__FUl
/* 802E6E3C 002E3D7C  3C 80 80 2E */	lis r4, __ct__Q34Game12KumaKochappy3ObjFv@ha
/* 802E6E40 002E3D80  3C A0 80 2E */	lis r5, __dt__Q34Game12KumaKochappy3ObjFv@ha
/* 802E6E44 002E3D84  38 84 70 50 */	addi r4, r4, __ct__Q34Game12KumaKochappy3ObjFv@l
/* 802E6E48 002E3D88  7F E7 FB 78 */	mr r7, r31
/* 802E6E4C 002E3D8C  38 A5 6E 74 */	addi r5, r5, __dt__Q34Game12KumaKochappy3ObjFv@l
/* 802E6E50 002E3D90  38 C0 02 F8 */	li r6, 0x2f8
/* 802E6E54 002E3D94  4B DD AB 9D */	bl __construct_new_array
/* 802E6E58 002E3D98  90 7E 00 44 */	stw r3, 0x44(r30)
/* 802E6E5C 002E3D9C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802E6E60 002E3DA0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802E6E64 002E3DA4  83 C1 00 08 */	lwz r30, 8(r1)
/* 802E6E68 002E3DA8  7C 08 03 A6 */	mtlr r0
/* 802E6E6C 002E3DAC  38 21 00 10 */	addi r1, r1, 0x10
/* 802E6E70 002E3DB0  4E 80 00 20 */	blr 

.global __dt__Q34Game12KumaKochappy3ObjFv
__dt__Q34Game12KumaKochappy3ObjFv:
/* 802E6E74 002E3DB4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802E6E78 002E3DB8  7C 08 02 A6 */	mflr r0
/* 802E6E7C 002E3DBC  90 01 00 14 */	stw r0, 0x14(r1)
/* 802E6E80 002E3DC0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802E6E84 002E3DC4  7C 7F 1B 79 */	or. r31, r3, r3
/* 802E6E88 002E3DC8  93 C1 00 08 */	stw r30, 8(r1)
/* 802E6E8C 002E3DCC  7C 9E 23 78 */	mr r30, r4
/* 802E6E90 002E3DD0  41 82 00 84 */	beq lbl_802E6F14
/* 802E6E94 002E3DD4  3C 60 80 4D */	lis r3, __vt__Q34Game12KumaKochappy3Obj@ha
/* 802E6E98 002E3DD8  38 1F 02 E8 */	addi r0, r31, 0x2e8
/* 802E6E9C 002E3DDC  38 83 42 18 */	addi r4, r3, __vt__Q34Game12KumaKochappy3Obj@l
/* 802E6EA0 002E3DE0  90 9F 00 00 */	stw r4, 0(r31)
/* 802E6EA4 002E3DE4  38 64 01 B0 */	addi r3, r4, 0x1b0
/* 802E6EA8 002E3DE8  38 84 02 FC */	addi r4, r4, 0x2fc
/* 802E6EAC 002E3DEC  90 7F 01 78 */	stw r3, 0x178(r31)
/* 802E6EB0 002E3DF0  80 7F 01 7C */	lwz r3, 0x17c(r31)
/* 802E6EB4 002E3DF4  90 83 00 00 */	stw r4, 0(r3)
/* 802E6EB8 002E3DF8  80 7F 01 7C */	lwz r3, 0x17c(r31)
/* 802E6EBC 002E3DFC  7C 03 00 50 */	subf r0, r3, r0
/* 802E6EC0 002E3E00  90 03 00 0C */	stw r0, 0xc(r3)
/* 802E6EC4 002E3E04  41 82 00 40 */	beq lbl_802E6F04
/* 802E6EC8 002E3E08  3C 60 80 4B */	lis r3, __vt__Q24Game9EnemyBase@ha
/* 802E6ECC 002E3E0C  38 1F 02 BC */	addi r0, r31, 0x2bc
/* 802E6ED0 002E3E10  38 83 A3 24 */	addi r4, r3, __vt__Q24Game9EnemyBase@l
/* 802E6ED4 002E3E14  38 7F 02 90 */	addi r3, r31, 0x290
/* 802E6ED8 002E3E18  90 9F 00 00 */	stw r4, 0(r31)
/* 802E6EDC 002E3E1C  38 A4 01 B0 */	addi r5, r4, 0x1b0
/* 802E6EE0 002E3E20  38 C4 02 F8 */	addi r6, r4, 0x2f8
/* 802E6EE4 002E3E24  38 80 FF FF */	li r4, -1
/* 802E6EE8 002E3E28  90 BF 01 78 */	stw r5, 0x178(r31)
/* 802E6EEC 002E3E2C  80 BF 01 7C */	lwz r5, 0x17c(r31)
/* 802E6EF0 002E3E30  90 C5 00 00 */	stw r6, 0(r5)
/* 802E6EF4 002E3E34  80 BF 01 7C */	lwz r5, 0x17c(r31)
/* 802E6EF8 002E3E38  7C 05 00 50 */	subf r0, r5, r0
/* 802E6EFC 002E3E3C  90 05 00 0C */	stw r0, 0xc(r5)
/* 802E6F00 002E3E40  48 12 A6 89 */	bl __dt__5CNodeFv
lbl_802E6F04:
/* 802E6F04 002E3E44  7F C0 07 35 */	extsh. r0, r30
/* 802E6F08 002E3E48  40 81 00 0C */	ble lbl_802E6F14
/* 802E6F0C 002E3E4C  7F E3 FB 78 */	mr r3, r31
/* 802E6F10 002E3E50  4B D3 D1 A5 */	bl __dl__FPv
lbl_802E6F14:
/* 802E6F14 002E3E54  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802E6F18 002E3E58  7F E3 FB 78 */	mr r3, r31
/* 802E6F1C 002E3E5C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802E6F20 002E3E60  83 C1 00 08 */	lwz r30, 8(r1)
/* 802E6F24 002E3E64  7C 08 03 A6 */	mtlr r0
/* 802E6F28 002E3E68  38 21 00 10 */	addi r1, r1, 0x10
/* 802E6F2C 002E3E6C  4E 80 00 20 */	blr 

.global getEnemy__Q34Game12KumaKochappy3MgrFi
getEnemy__Q34Game12KumaKochappy3MgrFi:
/* 802E6F30 002E3E70  1C 04 02 F8 */	mulli r0, r4, 0x2f8
/* 802E6F34 002E3E74  80 63 00 44 */	lwz r3, 0x44(r3)
/* 802E6F38 002E3E78  7C 63 02 14 */	add r3, r3, r0
/* 802E6F3C 002E3E7C  4E 80 00 20 */	blr 

.global read__Q34Game12KumaKochappy5ParmsFR6Stream
read__Q34Game12KumaKochappy5ParmsFR6Stream:
/* 802E6F40 002E3E80  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802E6F44 002E3E84  7C 08 02 A6 */	mflr r0
/* 802E6F48 002E3E88  90 01 00 14 */	stw r0, 0x14(r1)
/* 802E6F4C 002E3E8C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802E6F50 002E3E90  7C 9F 23 78 */	mr r31, r4
/* 802E6F54 002E3E94  93 C1 00 08 */	stw r30, 8(r1)
/* 802E6F58 002E3E98  7C 7E 1B 78 */	mr r30, r3
/* 802E6F5C 002E3E9C  48 12 C8 99 */	bl read__10ParametersFR6Stream
/* 802E6F60 002E3EA0  7F E4 FB 78 */	mr r4, r31
/* 802E6F64 002E3EA4  38 7E 00 E0 */	addi r3, r30, 0xe0
/* 802E6F68 002E3EA8  48 12 C8 8D */	bl read__10ParametersFR6Stream
/* 802E6F6C 002E3EAC  7F E4 FB 78 */	mr r4, r31
/* 802E6F70 002E3EB0  38 7E 07 F8 */	addi r3, r30, 0x7f8
/* 802E6F74 002E3EB4  48 12 C8 81 */	bl read__10ParametersFR6Stream
/* 802E6F78 002E3EB8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802E6F7C 002E3EBC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802E6F80 002E3EC0  83 C1 00 08 */	lwz r30, 8(r1)
/* 802E6F84 002E3EC4  7C 08 03 A6 */	mtlr r0
/* 802E6F88 002E3EC8  38 21 00 10 */	addi r1, r1, 0x10
/* 802E6F8C 002E3ECC  4E 80 00 20 */	blr 

.global __dt__Q34Game12KumaKochappy3MgrFv
__dt__Q34Game12KumaKochappy3MgrFv:
/* 802E6F90 002E3ED0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802E6F94 002E3ED4  7C 08 02 A6 */	mflr r0
/* 802E6F98 002E3ED8  90 01 00 14 */	stw r0, 0x14(r1)
/* 802E6F9C 002E3EDC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802E6FA0 002E3EE0  7C 9F 23 78 */	mr r31, r4
/* 802E6FA4 002E3EE4  93 C1 00 08 */	stw r30, 8(r1)
/* 802E6FA8 002E3EE8  7C 7E 1B 79 */	or. r30, r3, r3
/* 802E6FAC 002E3EEC  41 82 00 78 */	beq lbl_802E7024
/* 802E6FB0 002E3EF0  3C 60 80 4D */	lis r3, __vt__Q34Game12KumaKochappy3Mgr@ha
/* 802E6FB4 002E3EF4  38 63 41 1C */	addi r3, r3, __vt__Q34Game12KumaKochappy3Mgr@l
/* 802E6FB8 002E3EF8  90 7E 00 00 */	stw r3, 0(r30)
/* 802E6FBC 002E3EFC  38 03 00 38 */	addi r0, r3, 0x38
/* 802E6FC0 002E3F00  90 1E 00 04 */	stw r0, 4(r30)
/* 802E6FC4 002E3F04  41 82 00 50 */	beq lbl_802E7014
/* 802E6FC8 002E3F08  3C 60 80 4B */	lis r3, __vt__Q24Game12EnemyMgrBase@ha
/* 802E6FCC 002E3F0C  38 63 F8 A0 */	addi r3, r3, __vt__Q24Game12EnemyMgrBase@l
/* 802E6FD0 002E3F10  90 7E 00 00 */	stw r3, 0(r30)
/* 802E6FD4 002E3F14  38 03 00 38 */	addi r0, r3, 0x38
/* 802E6FD8 002E3F18  90 1E 00 04 */	stw r0, 4(r30)
/* 802E6FDC 002E3F1C  41 82 00 38 */	beq lbl_802E7014
/* 802E6FE0 002E3F20  3C 60 80 4B */	lis r3, __vt__Q24Game13IEnemyMgrBase@ha
/* 802E6FE4 002E3F24  34 1E 00 04 */	addic. r0, r30, 4
/* 802E6FE8 002E3F28  38 63 AC FC */	addi r3, r3, __vt__Q24Game13IEnemyMgrBase@l
/* 802E6FEC 002E3F2C  90 7E 00 00 */	stw r3, 0(r30)
/* 802E6FF0 002E3F30  38 03 00 38 */	addi r0, r3, 0x38
/* 802E6FF4 002E3F34  90 1E 00 04 */	stw r0, 4(r30)
/* 802E6FF8 002E3F38  41 82 00 1C */	beq lbl_802E7014
/* 802E6FFC 002E3F3C  3C 80 80 4B */	lis r4, __vt__16GenericContainer@ha
/* 802E7000 002E3F40  38 7E 00 04 */	addi r3, r30, 4
/* 802E7004 002E3F44  38 04 AC DC */	addi r0, r4, __vt__16GenericContainer@l
/* 802E7008 002E3F48  38 80 00 00 */	li r4, 0
/* 802E700C 002E3F4C  90 1E 00 04 */	stw r0, 4(r30)
/* 802E7010 002E3F50  48 12 A5 79 */	bl __dt__5CNodeFv
lbl_802E7014:
/* 802E7014 002E3F54  7F E0 07 35 */	extsh. r0, r31
/* 802E7018 002E3F58  40 81 00 0C */	ble lbl_802E7024
/* 802E701C 002E3F5C  7F C3 F3 78 */	mr r3, r30
/* 802E7020 002E3F60  4B D3 D0 95 */	bl __dl__FPv
lbl_802E7024:
/* 802E7024 002E3F64  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802E7028 002E3F68  7F C3 F3 78 */	mr r3, r30
/* 802E702C 002E3F6C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802E7030 002E3F70  83 C1 00 08 */	lwz r30, 8(r1)
/* 802E7034 002E3F74  7C 08 03 A6 */	mtlr r0
/* 802E7038 002E3F78  38 21 00 10 */	addi r1, r1, 0x10
/* 802E703C 002E3F7C  4E 80 00 20 */	blr 

.global getEnemyTypeID__Q34Game12KumaKochappy3MgrFv
getEnemyTypeID__Q34Game12KumaKochappy3MgrFv:
/* 802E7040 002E3F80  38 60 00 4C */	li r3, 0x4c
/* 802E7044 002E3F84  4E 80 00 20 */	blr 

.global "@4@__dt__Q34Game12KumaKochappy3MgrFv"
"@4@__dt__Q34Game12KumaKochappy3MgrFv":
/* 802E7048 002E3F88  38 63 FF FC */	addi r3, r3, -4
/* 802E704C 002E3F8C  4B FF FF 44 */	b __dt__Q34Game12KumaKochappy3MgrFv
