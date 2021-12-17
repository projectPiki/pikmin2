.include "macros.inc"
.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
lbl_804957D0:
	.4byte 0x835E8343
	.4byte 0x8384837D
	.4byte 0x836C815B
	.4byte 0x83578383
	.4byte 0x00000000
.balign 4
lbl_804957E4:
	.asciz "EnemyParmsBase"
.balign 4
lbl_804957F4:
	.4byte 0x89F1935D
	.4byte 0x83588373
	.4byte 0x815B8368
	.4byte 0x00000000
.balign 4
lbl_80495804:
	.asciz "tyreMgr.cpp"
.balign 4
lbl_80495810:
	.asciz "P2Assert"

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.global __vt__Q34Game4Tyre3Mgr
__vt__Q34Game4Tyre3Mgr:
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
	.4byte "@4@__dt__Q34Game4Tyre3MgrFv"
	.4byte getChildCount__5CNodeFv
	.4byte "@4@getObject__Q24Game12EnemyMgrBaseFPv"
	.4byte "@4@getNext__Q24Game12EnemyMgrBaseFPv"
	.4byte "@4@getStart__Q24Game12EnemyMgrBaseFv"
	.4byte "@4@getEnd__Q24Game12EnemyMgrBaseFv"
	.4byte __dt__Q34Game4Tyre3MgrFv
	.4byte getObject__Q24Game12EnemyMgrBaseFPv
	.4byte getNext__Q24Game12EnemyMgrBaseFPv
	.4byte getStart__Q24Game12EnemyMgrBaseFv
	.4byte getEnd__Q24Game12EnemyMgrBaseFv
	.4byte alloc__Q24Game12EnemyMgrBaseFv
	.4byte birth__Q34Game4Tyre3MgrFRQ24Game13EnemyBirthArg
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
	.4byte createObj__Q34Game4Tyre3MgrFi
	.4byte getEnemy__Q34Game4Tyre3MgrFi
	.4byte doAlloc__Q34Game4Tyre3MgrFv
	.4byte getEnemyTypeID__Q34Game4Tyre3MgrFv
	.4byte createModel__Q24Game12EnemyMgrBaseFv
	.4byte initParms__Q24Game12EnemyMgrBaseFv
	.4byte loadResource__Q24Game12EnemyMgrBaseFv
	.4byte initObjects__Q24Game12EnemyMgrBaseFv
	.4byte initStoneSetting__Q24Game12EnemyMgrBaseFv
	.4byte loadModelData__Q24Game12EnemyMgrBaseFP10JKRArchive
	.4byte loadModelData__Q34Game4Tyre3MgrFv
	.4byte loadAnimData__Q24Game12EnemyMgrBaseFv
	.4byte loadTexData__Q24Game12EnemyMgrBaseFv
	.4byte doLoadBmd__Q34Game4Tyre3MgrFPv
	.4byte doLoadBdl__Q24Game12EnemyMgrBaseFPv
	.4byte initGenerator__Q24Game12EnemyMgrBaseFv
.global __vt__Q34Game4Tyre5Parms
__vt__Q34Game4Tyre5Parms:
	.4byte 0
	.4byte 0
	.4byte read__Q34Game4Tyre5ParmsFR6Stream

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
lbl_8051F598:
	.float 0.5
lbl_8051F59C:
	.float 0.0
lbl_8051F5A0:
	.float 100.0
lbl_8051F5A4:
	.float 0.75
lbl_8051F5A8:
	.float 0.05
lbl_8051F5AC:
	.float 0.025
lbl_8051F5B0:
	.float 1.2

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global __ct__Q34Game4Tyre3MgrFiUc
__ct__Q34Game4Tyre3MgrFiUc:
/* 803ABE60 003A8DA0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803ABE64 003A8DA4  7C 08 02 A6 */	mflr r0
/* 803ABE68 003A8DA8  90 01 00 14 */	stw r0, 0x14(r1)
/* 803ABE6C 003A8DAC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803ABE70 003A8DB0  7C 7F 1B 78 */	mr r31, r3
/* 803ABE74 003A8DB4  4B D8 2E 21 */	bl __ct__Q24Game12EnemyMgrBaseFiUc
/* 803ABE78 003A8DB8  3C 60 80 4E */	lis r3, __vt__Q34Game4Tyre3Mgr@ha
/* 803ABE7C 003A8DBC  3C 80 80 49 */	lis r4, lbl_804957D0@ha
/* 803ABE80 003A8DC0  38 A3 62 D8 */	addi r5, r3, __vt__Q34Game4Tyre3Mgr@l
/* 803ABE84 003A8DC4  7F E3 FB 78 */	mr r3, r31
/* 803ABE88 003A8DC8  90 BF 00 00 */	stw r5, 0(r31)
/* 803ABE8C 003A8DCC  38 A5 00 38 */	addi r5, r5, 0x38
/* 803ABE90 003A8DD0  38 04 57 D0 */	addi r0, r4, lbl_804957D0@l
/* 803ABE94 003A8DD4  90 BF 00 04 */	stw r5, 4(r31)
/* 803ABE98 003A8DD8  90 1F 00 18 */	stw r0, 0x18(r31)
/* 803ABE9C 003A8DDC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803ABEA0 003A8DE0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803ABEA4 003A8DE4  7C 08 03 A6 */	mtlr r0
/* 803ABEA8 003A8DE8  38 21 00 10 */	addi r1, r1, 0x10
/* 803ABEAC 003A8DEC  4E 80 00 20 */	blr 

.global doAlloc__Q34Game4Tyre3MgrFv
doAlloc__Q34Game4Tyre3MgrFv:
/* 803ABEB0 003A8DF0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803ABEB4 003A8DF4  7C 08 02 A6 */	mflr r0
/* 803ABEB8 003A8DF8  90 01 00 14 */	stw r0, 0x14(r1)
/* 803ABEBC 003A8DFC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803ABEC0 003A8E00  7C 7F 1B 78 */	mr r31, r3
/* 803ABEC4 003A8E04  38 60 08 4C */	li r3, 0x84c
/* 803ABEC8 003A8E08  4B C7 7F DD */	bl __nw__FUl
/* 803ABECC 003A8E0C  7C 64 1B 79 */	or. r4, r3, r3
/* 803ABED0 003A8E10  41 82 00 0C */	beq lbl_803ABEDC
/* 803ABED4 003A8E14  48 00 00 25 */	bl __ct__Q34Game4Tyre5ParmsFv
/* 803ABED8 003A8E18  7C 64 1B 78 */	mr r4, r3
lbl_803ABEDC:
/* 803ABEDC 003A8E1C  7F E3 FB 78 */	mr r3, r31
/* 803ABEE0 003A8E20  4B D8 39 BD */	bl init__Q24Game12EnemyMgrBaseFPQ24Game14EnemyParmsBase
/* 803ABEE4 003A8E24  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803ABEE8 003A8E28  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803ABEEC 003A8E2C  7C 08 03 A6 */	mtlr r0
/* 803ABEF0 003A8E30  38 21 00 10 */	addi r1, r1, 0x10
/* 803ABEF4 003A8E34  4E 80 00 20 */	blr 

.global __ct__Q34Game4Tyre5ParmsFv
__ct__Q34Game4Tyre5ParmsFv:
/* 803ABEF8 003A8E38  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803ABEFC 003A8E3C  7C 08 02 A6 */	mflr r0
/* 803ABF00 003A8E40  90 01 00 14 */	stw r0, 0x14(r1)
/* 803ABF04 003A8E44  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803ABF08 003A8E48  7C 7F 1B 78 */	mr r31, r3
/* 803ABF0C 003A8E4C  4B D5 D8 91 */	bl __ct__Q24Game14EnemyParmsBaseFv
/* 803ABF10 003A8E50  3C 60 80 4E */	lis r3, __vt__Q34Game4Tyre5Parms@ha
/* 803ABF14 003A8E54  3C A0 66 70 */	lis r5, 0x66703031@ha
/* 803ABF18 003A8E58  38 03 63 B8 */	addi r0, r3, __vt__Q34Game4Tyre5Parms@l
/* 803ABF1C 003A8E5C  3C 80 80 49 */	lis r4, lbl_804957E4@ha
/* 803ABF20 003A8E60  90 1F 00 D8 */	stw r0, 0xd8(r31)
/* 803ABF24 003A8E64  38 1F 08 2C */	addi r0, r31, 0x82c
/* 803ABF28 003A8E68  3C 60 80 49 */	lis r3, lbl_804957F4@ha
/* 803ABF2C 003A8E6C  38 A5 30 31 */	addi r5, r5, 0x66703031@l
/* 803ABF30 003A8E70  90 1F 07 F8 */	stw r0, 0x7f8(r31)
/* 803ABF34 003A8E74  38 C3 57 F4 */	addi r6, r3, lbl_804957F4@l
/* 803ABF38 003A8E78  38 60 00 00 */	li r3, 0
/* 803ABF3C 003A8E7C  38 04 57 E4 */	addi r0, r4, lbl_804957E4@l
/* 803ABF40 003A8E80  90 7F 07 FC */	stw r3, 0x7fc(r31)
/* 803ABF44 003A8E84  38 7F 08 04 */	addi r3, r31, 0x804
/* 803ABF48 003A8E88  38 9F 07 F8 */	addi r4, r31, 0x7f8
/* 803ABF4C 003A8E8C  90 1F 08 00 */	stw r0, 0x800(r31)
/* 803ABF50 003A8E90  48 06 77 09 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 803ABF54 003A8E94  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 803ABF58 003A8E98  C0 A2 12 38 */	lfs f5, lbl_8051F598@sda21(r2)
/* 803ABF5C 003A8E9C  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 803ABF60 003A8EA0  C0 82 12 3C */	lfs f4, lbl_8051F59C@sda21(r2)
/* 803ABF64 003A8EA4  90 1F 08 04 */	stw r0, 0x804(r31)
/* 803ABF68 003A8EA8  38 A0 00 00 */	li r5, 0
/* 803ABF6C 003A8EAC  C0 02 12 40 */	lfs f0, lbl_8051F5A0@sda21(r2)
/* 803ABF70 003A8EB0  38 80 00 01 */	li r4, 1
/* 803ABF74 003A8EB4  D0 BF 08 1C */	stfs f5, 0x81c(r31)
/* 803ABF78 003A8EB8  38 00 00 0A */	li r0, 0xa
/* 803ABF7C 003A8EBC  C0 62 12 44 */	lfs f3, lbl_8051F5A4@sda21(r2)
/* 803ABF80 003A8EC0  7F E3 FB 78 */	mr r3, r31
/* 803ABF84 003A8EC4  D0 9F 08 24 */	stfs f4, 0x824(r31)
/* 803ABF88 003A8EC8  C0 42 12 48 */	lfs f2, lbl_8051F5A8@sda21(r2)
/* 803ABF8C 003A8ECC  D0 1F 08 28 */	stfs f0, 0x828(r31)
/* 803ABF90 003A8ED0  C0 22 12 4C */	lfs f1, lbl_8051F5AC@sda21(r2)
/* 803ABF94 003A8ED4  98 BF 08 30 */	stb r5, 0x830(r31)
/* 803ABF98 003A8ED8  C0 02 12 50 */	lfs f0, lbl_8051F5B0@sda21(r2)
/* 803ABF9C 003A8EDC  98 BF 08 31 */	stb r5, 0x831(r31)
/* 803ABFA0 003A8EE0  98 9F 08 32 */	stb r4, 0x832(r31)
/* 803ABFA4 003A8EE4  98 1F 08 33 */	stb r0, 0x833(r31)
/* 803ABFA8 003A8EE8  D0 9F 08 34 */	stfs f4, 0x834(r31)
/* 803ABFAC 003A8EEC  D0 7F 08 38 */	stfs f3, 0x838(r31)
/* 803ABFB0 003A8EF0  D0 5F 08 3C */	stfs f2, 0x83c(r31)
/* 803ABFB4 003A8EF4  D0 3F 08 40 */	stfs f1, 0x840(r31)
/* 803ABFB8 003A8EF8  D0 BF 08 44 */	stfs f5, 0x844(r31)
/* 803ABFBC 003A8EFC  D0 1F 08 48 */	stfs f0, 0x848(r31)
/* 803ABFC0 003A8F00  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803ABFC4 003A8F04  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803ABFC8 003A8F08  7C 08 03 A6 */	mtlr r0
/* 803ABFCC 003A8F0C  38 21 00 10 */	addi r1, r1, 0x10
/* 803ABFD0 003A8F10  4E 80 00 20 */	blr 

.global birth__Q34Game4Tyre3MgrFRQ24Game13EnemyBirthArg
birth__Q34Game4Tyre3MgrFRQ24Game13EnemyBirthArg:
/* 803ABFD4 003A8F14  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803ABFD8 003A8F18  7C 08 02 A6 */	mflr r0
/* 803ABFDC 003A8F1C  90 01 00 14 */	stw r0, 0x14(r1)
/* 803ABFE0 003A8F20  4B D8 33 E9 */	bl birth__Q24Game12EnemyMgrBaseFRQ24Game13EnemyBirthArg
/* 803ABFE4 003A8F24  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803ABFE8 003A8F28  7C 08 03 A6 */	mtlr r0
/* 803ABFEC 003A8F2C  38 21 00 10 */	addi r1, r1, 0x10
/* 803ABFF0 003A8F30  4E 80 00 20 */	blr 

.global loadModelData__Q34Game4Tyre3MgrFv
loadModelData__Q34Game4Tyre3MgrFv:
/* 803ABFF4 003A8F34  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 803ABFF8 003A8F38  7C 08 02 A6 */	mflr r0
/* 803ABFFC 003A8F3C  90 01 00 24 */	stw r0, 0x24(r1)
/* 803AC000 003A8F40  BF 61 00 0C */	stmw r27, 0xc(r1)
/* 803AC004 003A8F44  7C 7B 1B 78 */	mr r27, r3
/* 803AC008 003A8F48  4B D8 41 05 */	bl loadModelData__Q24Game12EnemyMgrBaseFv
/* 803AC00C 003A8F4C  3C 80 80 49 */	lis r4, lbl_80495804@ha
/* 803AC010 003A8F50  3C 60 80 49 */	lis r3, lbl_80495810@ha
/* 803AC014 003A8F54  3B C4 58 04 */	addi r30, r4, lbl_80495804@l
/* 803AC018 003A8F58  3B 80 00 00 */	li r28, 0
/* 803AC01C 003A8F5C  3B E3 58 10 */	addi r31, r3, lbl_80495810@l
/* 803AC020 003A8F60  48 00 00 40 */	b lbl_803AC060
lbl_803AC024:
/* 803AC024 003A8F64  80 64 00 80 */	lwz r3, 0x80(r4)
/* 803AC028 003A8F68  57 80 13 BA */	rlwinm r0, r28, 2, 0xe, 0x1d
/* 803AC02C 003A8F6C  7F A3 00 2E */	lwzx r29, r3, r0
/* 803AC030 003A8F70  28 1D 00 00 */	cmplwi r29, 0
/* 803AC034 003A8F74  40 82 00 18 */	bne lbl_803AC04C
/* 803AC038 003A8F78  7F C3 F3 78 */	mr r3, r30
/* 803AC03C 003A8F7C  7F E5 FB 78 */	mr r5, r31
/* 803AC040 003A8F80  38 80 00 38 */	li r4, 0x38
/* 803AC044 003A8F84  4C C6 31 82 */	crclr 6
/* 803AC048 003A8F88  4B C7 E5 F9 */	bl panic_f__12JUTExceptionFPCciPCce
lbl_803AC04C:
/* 803AC04C 003A8F8C  80 1D 00 0C */	lwz r0, 0xc(r29)
/* 803AC050 003A8F90  3B 9C 00 01 */	addi r28, r28, 1
/* 803AC054 003A8F94  54 00 05 1E */	rlwinm r0, r0, 0, 0x14, 0xf
/* 803AC058 003A8F98  60 00 20 00 */	ori r0, r0, 0x2000
/* 803AC05C 003A8F9C  90 1D 00 0C */	stw r0, 0xc(r29)
lbl_803AC060:
/* 803AC060 003A8FA0  80 9B 00 1C */	lwz r4, 0x1c(r27)
/* 803AC064 003A8FA4  57 80 04 3E */	clrlwi r0, r28, 0x10
/* 803AC068 003A8FA8  A0 64 00 7C */	lhz r3, 0x7c(r4)
/* 803AC06C 003A8FAC  7C 00 18 40 */	cmplw r0, r3
/* 803AC070 003A8FB0  41 80 FF B4 */	blt lbl_803AC024
/* 803AC074 003A8FB4  BB 61 00 0C */	lmw r27, 0xc(r1)
/* 803AC078 003A8FB8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 803AC07C 003A8FBC  7C 08 03 A6 */	mtlr r0
/* 803AC080 003A8FC0  38 21 00 20 */	addi r1, r1, 0x20
/* 803AC084 003A8FC4  4E 80 00 20 */	blr 

.global doLoadBmd__Q34Game4Tyre3MgrFPv
doLoadBmd__Q34Game4Tyre3MgrFPv:
/* 803AC088 003A8FC8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803AC08C 003A8FCC  7C 08 02 A6 */	mflr r0
/* 803AC090 003A8FD0  3C A0 21 24 */	lis r5, 0x21240030@ha
/* 803AC094 003A8FD4  7C 83 23 78 */	mr r3, r4
/* 803AC098 003A8FD8  90 01 00 14 */	stw r0, 0x14(r1)
/* 803AC09C 003A8FDC  38 85 00 30 */	addi r4, r5, 0x21240030@l
/* 803AC0A0 003A8FE0  4B CC 37 F5 */	bl load__22J3DModelLoaderDataBaseFPCvUl
/* 803AC0A4 003A8FE4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803AC0A8 003A8FE8  7C 08 03 A6 */	mtlr r0
/* 803AC0AC 003A8FEC  38 21 00 10 */	addi r1, r1, 0x10
/* 803AC0B0 003A8FF0  4E 80 00 20 */	blr 

.global __dt__Q34Game4Tyre3MgrFv
__dt__Q34Game4Tyre3MgrFv:
/* 803AC0B4 003A8FF4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803AC0B8 003A8FF8  7C 08 02 A6 */	mflr r0
/* 803AC0BC 003A8FFC  90 01 00 14 */	stw r0, 0x14(r1)
/* 803AC0C0 003A9000  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803AC0C4 003A9004  7C 9F 23 78 */	mr r31, r4
/* 803AC0C8 003A9008  93 C1 00 08 */	stw r30, 8(r1)
/* 803AC0CC 003A900C  7C 7E 1B 79 */	or. r30, r3, r3
/* 803AC0D0 003A9010  41 82 00 78 */	beq lbl_803AC148
/* 803AC0D4 003A9014  3C 60 80 4E */	lis r3, __vt__Q34Game4Tyre3Mgr@ha
/* 803AC0D8 003A9018  38 63 62 D8 */	addi r3, r3, __vt__Q34Game4Tyre3Mgr@l
/* 803AC0DC 003A901C  90 7E 00 00 */	stw r3, 0(r30)
/* 803AC0E0 003A9020  38 03 00 38 */	addi r0, r3, 0x38
/* 803AC0E4 003A9024  90 1E 00 04 */	stw r0, 4(r30)
/* 803AC0E8 003A9028  41 82 00 50 */	beq lbl_803AC138
/* 803AC0EC 003A902C  3C 60 80 4B */	lis r3, __vt__Q24Game12EnemyMgrBase@ha
/* 803AC0F0 003A9030  38 63 F8 A0 */	addi r3, r3, __vt__Q24Game12EnemyMgrBase@l
/* 803AC0F4 003A9034  90 7E 00 00 */	stw r3, 0(r30)
/* 803AC0F8 003A9038  38 03 00 38 */	addi r0, r3, 0x38
/* 803AC0FC 003A903C  90 1E 00 04 */	stw r0, 4(r30)
/* 803AC100 003A9040  41 82 00 38 */	beq lbl_803AC138
/* 803AC104 003A9044  3C 60 80 4B */	lis r3, __vt__Q24Game13IEnemyMgrBase@ha
/* 803AC108 003A9048  34 1E 00 04 */	addic. r0, r30, 4
/* 803AC10C 003A904C  38 63 AC FC */	addi r3, r3, __vt__Q24Game13IEnemyMgrBase@l
/* 803AC110 003A9050  90 7E 00 00 */	stw r3, 0(r30)
/* 803AC114 003A9054  38 03 00 38 */	addi r0, r3, 0x38
/* 803AC118 003A9058  90 1E 00 04 */	stw r0, 4(r30)
/* 803AC11C 003A905C  41 82 00 1C */	beq lbl_803AC138
/* 803AC120 003A9060  3C 80 80 4B */	lis r4, __vt__16GenericContainer@ha
/* 803AC124 003A9064  38 7E 00 04 */	addi r3, r30, 4
/* 803AC128 003A9068  38 04 AC DC */	addi r0, r4, __vt__16GenericContainer@l
/* 803AC12C 003A906C  38 80 00 00 */	li r4, 0
/* 803AC130 003A9070  90 1E 00 04 */	stw r0, 4(r30)
/* 803AC134 003A9074  48 06 54 55 */	bl __dt__5CNodeFv
lbl_803AC138:
/* 803AC138 003A9078  7F E0 07 35 */	extsh. r0, r31
/* 803AC13C 003A907C  40 81 00 0C */	ble lbl_803AC148
/* 803AC140 003A9080  7F C3 F3 78 */	mr r3, r30
/* 803AC144 003A9084  4B C7 7F 71 */	bl __dl__FPv
lbl_803AC148:
/* 803AC148 003A9088  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803AC14C 003A908C  7F C3 F3 78 */	mr r3, r30
/* 803AC150 003A9090  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803AC154 003A9094  83 C1 00 08 */	lwz r30, 8(r1)
/* 803AC158 003A9098  7C 08 03 A6 */	mtlr r0
/* 803AC15C 003A909C  38 21 00 10 */	addi r1, r1, 0x10
/* 803AC160 003A90A0  4E 80 00 20 */	blr 

.global getEnemyTypeID__Q34Game4Tyre3MgrFv
getEnemyTypeID__Q34Game4Tyre3MgrFv:
/* 803AC164 003A90A4  38 60 00 62 */	li r3, 0x62
/* 803AC168 003A90A8  4E 80 00 20 */	blr 

.global createObj__Q34Game4Tyre3MgrFi
createObj__Q34Game4Tyre3MgrFi:
/* 803AC16C 003A90AC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803AC170 003A90B0  7C 08 02 A6 */	mflr r0
/* 803AC174 003A90B4  90 01 00 14 */	stw r0, 0x14(r1)
/* 803AC178 003A90B8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803AC17C 003A90BC  7C 9F 23 78 */	mr r31, r4
/* 803AC180 003A90C0  93 C1 00 08 */	stw r30, 8(r1)
/* 803AC184 003A90C4  7C 7E 1B 78 */	mr r30, r3
/* 803AC188 003A90C8  1C 7F 03 54 */	mulli r3, r31, 0x354
/* 803AC18C 003A90CC  38 63 00 10 */	addi r3, r3, 0x10
/* 803AC190 003A90D0  4B C7 7E 1D */	bl __nwa__FUl
/* 803AC194 003A90D4  3C 80 80 3B */	lis r4, __ct__Q34Game4Tyre3ObjFv@ha
/* 803AC198 003A90D8  3C A0 80 3B */	lis r5, __dt__Q34Game4Tyre3ObjFv@ha
/* 803AC19C 003A90DC  38 84 C5 2C */	addi r4, r4, __ct__Q34Game4Tyre3ObjFv@l
/* 803AC1A0 003A90E0  7F E7 FB 78 */	mr r7, r31
/* 803AC1A4 003A90E4  38 A5 C1 CC */	addi r5, r5, __dt__Q34Game4Tyre3ObjFv@l
/* 803AC1A8 003A90E8  38 C0 03 54 */	li r6, 0x354
/* 803AC1AC 003A90EC  4B D1 58 45 */	bl __construct_new_array
/* 803AC1B0 003A90F0  90 7E 00 44 */	stw r3, 0x44(r30)
/* 803AC1B4 003A90F4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803AC1B8 003A90F8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803AC1BC 003A90FC  83 C1 00 08 */	lwz r30, 8(r1)
/* 803AC1C0 003A9100  7C 08 03 A6 */	mtlr r0
/* 803AC1C4 003A9104  38 21 00 10 */	addi r1, r1, 0x10
/* 803AC1C8 003A9108  4E 80 00 20 */	blr 

.global __dt__Q34Game4Tyre3ObjFv
__dt__Q34Game4Tyre3ObjFv:
/* 803AC1CC 003A910C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803AC1D0 003A9110  7C 08 02 A6 */	mflr r0
/* 803AC1D4 003A9114  90 01 00 14 */	stw r0, 0x14(r1)
/* 803AC1D8 003A9118  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803AC1DC 003A911C  7C 7F 1B 79 */	or. r31, r3, r3
/* 803AC1E0 003A9120  93 C1 00 08 */	stw r30, 8(r1)
/* 803AC1E4 003A9124  7C 9E 23 78 */	mr r30, r4
/* 803AC1E8 003A9128  41 82 00 84 */	beq lbl_803AC26C
/* 803AC1EC 003A912C  3C 60 80 4E */	lis r3, __vt__Q34Game4Tyre3Obj@ha
/* 803AC1F0 003A9130  38 1F 03 44 */	addi r0, r31, 0x344
/* 803AC1F4 003A9134  38 83 64 48 */	addi r4, r3, __vt__Q34Game4Tyre3Obj@l
/* 803AC1F8 003A9138  90 9F 00 00 */	stw r4, 0(r31)
/* 803AC1FC 003A913C  38 64 01 B0 */	addi r3, r4, 0x1b0
/* 803AC200 003A9140  38 84 02 FC */	addi r4, r4, 0x2fc
/* 803AC204 003A9144  90 7F 01 78 */	stw r3, 0x178(r31)
/* 803AC208 003A9148  80 7F 01 7C */	lwz r3, 0x17c(r31)
/* 803AC20C 003A914C  90 83 00 00 */	stw r4, 0(r3)
/* 803AC210 003A9150  80 7F 01 7C */	lwz r3, 0x17c(r31)
/* 803AC214 003A9154  7C 03 00 50 */	subf r0, r3, r0
/* 803AC218 003A9158  90 03 00 0C */	stw r0, 0xc(r3)
/* 803AC21C 003A915C  41 82 00 40 */	beq lbl_803AC25C
/* 803AC220 003A9160  3C 60 80 4B */	lis r3, __vt__Q24Game9EnemyBase@ha
/* 803AC224 003A9164  38 1F 02 BC */	addi r0, r31, 0x2bc
/* 803AC228 003A9168  38 83 A3 24 */	addi r4, r3, __vt__Q24Game9EnemyBase@l
/* 803AC22C 003A916C  38 7F 02 90 */	addi r3, r31, 0x290
/* 803AC230 003A9170  90 9F 00 00 */	stw r4, 0(r31)
/* 803AC234 003A9174  38 A4 01 B0 */	addi r5, r4, 0x1b0
/* 803AC238 003A9178  38 C4 02 F8 */	addi r6, r4, 0x2f8
/* 803AC23C 003A917C  38 80 FF FF */	li r4, -1
/* 803AC240 003A9180  90 BF 01 78 */	stw r5, 0x178(r31)
/* 803AC244 003A9184  80 BF 01 7C */	lwz r5, 0x17c(r31)
/* 803AC248 003A9188  90 C5 00 00 */	stw r6, 0(r5)
/* 803AC24C 003A918C  80 BF 01 7C */	lwz r5, 0x17c(r31)
/* 803AC250 003A9190  7C 05 00 50 */	subf r0, r5, r0
/* 803AC254 003A9194  90 05 00 0C */	stw r0, 0xc(r5)
/* 803AC258 003A9198  48 06 53 31 */	bl __dt__5CNodeFv
lbl_803AC25C:
/* 803AC25C 003A919C  7F C0 07 35 */	extsh. r0, r30
/* 803AC260 003A91A0  40 81 00 0C */	ble lbl_803AC26C
/* 803AC264 003A91A4  7F E3 FB 78 */	mr r3, r31
/* 803AC268 003A91A8  4B C7 7E 4D */	bl __dl__FPv
lbl_803AC26C:
/* 803AC26C 003A91AC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803AC270 003A91B0  7F E3 FB 78 */	mr r3, r31
/* 803AC274 003A91B4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803AC278 003A91B8  83 C1 00 08 */	lwz r30, 8(r1)
/* 803AC27C 003A91BC  7C 08 03 A6 */	mtlr r0
/* 803AC280 003A91C0  38 21 00 10 */	addi r1, r1, 0x10
/* 803AC284 003A91C4  4E 80 00 20 */	blr 

.global getEnemy__Q34Game4Tyre3MgrFi
getEnemy__Q34Game4Tyre3MgrFi:
/* 803AC288 003A91C8  1C 04 03 54 */	mulli r0, r4, 0x354
/* 803AC28C 003A91CC  80 63 00 44 */	lwz r3, 0x44(r3)
/* 803AC290 003A91D0  7C 63 02 14 */	add r3, r3, r0
/* 803AC294 003A91D4  4E 80 00 20 */	blr 

.global read__Q34Game4Tyre5ParmsFR6Stream
read__Q34Game4Tyre5ParmsFR6Stream:
/* 803AC298 003A91D8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803AC29C 003A91DC  7C 08 02 A6 */	mflr r0
/* 803AC2A0 003A91E0  90 01 00 14 */	stw r0, 0x14(r1)
/* 803AC2A4 003A91E4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803AC2A8 003A91E8  7C 9F 23 78 */	mr r31, r4
/* 803AC2AC 003A91EC  93 C1 00 08 */	stw r30, 8(r1)
/* 803AC2B0 003A91F0  7C 7E 1B 78 */	mr r30, r3
/* 803AC2B4 003A91F4  48 06 75 41 */	bl read__10ParametersFR6Stream
/* 803AC2B8 003A91F8  7F E4 FB 78 */	mr r4, r31
/* 803AC2BC 003A91FC  38 7E 00 E0 */	addi r3, r30, 0xe0
/* 803AC2C0 003A9200  48 06 75 35 */	bl read__10ParametersFR6Stream
/* 803AC2C4 003A9204  7F E4 FB 78 */	mr r4, r31
/* 803AC2C8 003A9208  38 7E 07 F8 */	addi r3, r30, 0x7f8
/* 803AC2CC 003A920C  48 06 75 29 */	bl read__10ParametersFR6Stream
/* 803AC2D0 003A9210  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803AC2D4 003A9214  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803AC2D8 003A9218  83 C1 00 08 */	lwz r30, 8(r1)
/* 803AC2DC 003A921C  7C 08 03 A6 */	mtlr r0
/* 803AC2E0 003A9220  38 21 00 10 */	addi r1, r1, 0x10
/* 803AC2E4 003A9224  4E 80 00 20 */	blr 

"@4@__dt__Q34Game4Tyre3MgrFv":
/* 803AC2E8 003A9228  38 63 FF FC */	addi r3, r3, -4
/* 803AC2EC 003A922C  4B FF FD C8 */	b __dt__Q34Game4Tyre3MgrFv
