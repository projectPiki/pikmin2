.include "macros.inc"
.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 0x8
.global __vt__Q34Game6Jigumo3Mgr
__vt__Q34Game6Jigumo3Mgr:
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
	.4byte "@4@__dt__Q34Game6Jigumo3MgrFv"
	.4byte getChildCount__5CNodeFv
	.4byte "@4@getObject__Q24Game12EnemyMgrBaseFPv"
	.4byte "@4@getNext__Q24Game12EnemyMgrBaseFPv"
	.4byte "@4@getStart__Q24Game12EnemyMgrBaseFv"
	.4byte "@4@getEnd__Q24Game12EnemyMgrBaseFv"
	.4byte __dt__Q34Game6Jigumo3MgrFv
	.4byte getObject__Q24Game12EnemyMgrBaseFPv
	.4byte getNext__Q24Game12EnemyMgrBaseFPv
	.4byte getStart__Q24Game12EnemyMgrBaseFv
	.4byte getEnd__Q24Game12EnemyMgrBaseFv
	.4byte alloc__Q24Game12EnemyMgrBaseFv
	.4byte birth__Q34Game6Jigumo3MgrFRQ24Game13EnemyBirthArg
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
	.4byte createObj__Q34Game6Jigumo3MgrFi
	.4byte getEnemy__Q34Game6Jigumo3MgrFi
	.4byte doAlloc__Q34Game6Jigumo3MgrFv
	.4byte getEnemyTypeID__Q34Game6Jigumo3MgrFv
	.4byte createModel__Q24Game12EnemyMgrBaseFv
	.4byte initParms__Q24Game12EnemyMgrBaseFv
	.4byte loadResource__Q24Game12EnemyMgrBaseFv
	.4byte initObjects__Q24Game12EnemyMgrBaseFv
	.4byte initStoneSetting__Q24Game12EnemyMgrBaseFv
	.4byte loadModelData__Q24Game12EnemyMgrBaseFP10JKRArchive
	.4byte loadModelData__Q34Game6Jigumo3MgrFv
	.4byte loadAnimData__Q24Game12EnemyMgrBaseFv
	.4byte loadTexData__Q24Game12EnemyMgrBaseFv
	.4byte doLoadBmd__Q34Game6Jigumo3MgrFPv
	.4byte doLoadBdl__Q24Game12EnemyMgrBaseFPv
	.4byte initGenerator__Q24Game12EnemyMgrBaseFv
.global __vt__Q34Game6Jigumo5Parms
__vt__Q34Game6Jigumo5Parms:
	.4byte 0
	.4byte 0
	.4byte read__Q34Game6Jigumo5ParmsFR6Stream
	.4byte 0

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global __ct__Q34Game6Jigumo3MgrFiUc
__ct__Q34Game6Jigumo3MgrFiUc:
/* 803688CC 0036580C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803688D0 00365810  7C 08 02 A6 */	mflr r0
/* 803688D4 00365814  90 01 00 14 */	stw r0, 0x14(r1)
/* 803688D8 00365818  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803688DC 0036581C  7C 7F 1B 78 */	mr r31, r3
/* 803688E0 00365820  4B DC 63 B5 */	bl __ct__Q24Game12EnemyMgrBaseFiUc
/* 803688E4 00365824  3C 60 80 4E */	lis r3, __vt__Q34Game6Jigumo3Mgr@ha
/* 803688E8 00365828  3C 80 80 49 */	lis r4, lbl_80491A64@ha
/* 803688EC 0036582C  38 A3 2B 68 */	addi r5, r3, __vt__Q34Game6Jigumo3Mgr@l
/* 803688F0 00365830  7F E3 FB 78 */	mr r3, r31
/* 803688F4 00365834  90 BF 00 00 */	stw r5, 0(r31)
/* 803688F8 00365838  38 A5 00 38 */	addi r5, r5, 0x38
/* 803688FC 0036583C  38 04 1A 64 */	addi r0, r4, lbl_80491A64@l
/* 80368900 00365840  90 BF 00 04 */	stw r5, 4(r31)
/* 80368904 00365844  90 1F 00 18 */	stw r0, 0x18(r31)
/* 80368908 00365848  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8036890C 0036584C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80368910 00365850  7C 08 03 A6 */	mtlr r0
/* 80368914 00365854  38 21 00 10 */	addi r1, r1, 0x10
/* 80368918 00365858  4E 80 00 20 */	blr 

.global doAlloc__Q34Game6Jigumo3MgrFv
doAlloc__Q34Game6Jigumo3MgrFv:
/* 8036891C 0036585C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80368920 00365860  7C 08 02 A6 */	mflr r0
/* 80368924 00365864  90 01 00 14 */	stw r0, 0x14(r1)
/* 80368928 00365868  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8036892C 0036586C  7C 7F 1B 78 */	mr r31, r3
/* 80368930 00365870  38 60 09 34 */	li r3, 0x934
/* 80368934 00365874  4B CB B5 71 */	bl __nw__FUl
/* 80368938 00365878  7C 64 1B 79 */	or. r4, r3, r3
/* 8036893C 0036587C  41 82 00 0C */	beq lbl_80368948
/* 80368940 00365880  48 00 00 25 */	bl __ct__Q34Game6Jigumo5ParmsFv
/* 80368944 00365884  7C 64 1B 78 */	mr r4, r3
lbl_80368948:
/* 80368948 00365888  7F E3 FB 78 */	mr r3, r31
/* 8036894C 0036588C  4B DC 6F 51 */	bl init__Q24Game12EnemyMgrBaseFPQ24Game14EnemyParmsBase
/* 80368950 00365890  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80368954 00365894  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80368958 00365898  7C 08 03 A6 */	mtlr r0
/* 8036895C 0036589C  38 21 00 10 */	addi r1, r1, 0x10
/* 80368960 003658A0  4E 80 00 20 */	blr 

.global __ct__Q34Game6Jigumo5ParmsFv
__ct__Q34Game6Jigumo5ParmsFv:
/* 80368964 003658A4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80368968 003658A8  7C 08 02 A6 */	mflr r0
/* 8036896C 003658AC  3C 80 80 49 */	lis r4, lbl_80491A58@ha
/* 80368970 003658B0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80368974 003658B4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80368978 003658B8  3B E4 1A 58 */	addi r31, r4, lbl_80491A58@l
/* 8036897C 003658BC  93 C1 00 08 */	stw r30, 8(r1)
/* 80368980 003658C0  7C 7E 1B 78 */	mr r30, r3
/* 80368984 003658C4  4B DA 0E 19 */	bl __ct__Q24Game14EnemyParmsBaseFv
/* 80368988 003658C8  3C 60 80 4E */	lis r3, __vt__Q34Game6Jigumo5Parms@ha
/* 8036898C 003658CC  3C A0 66 70 */	lis r5, 0x66703031@ha
/* 80368990 003658D0  38 03 2C 48 */	addi r0, r3, __vt__Q34Game6Jigumo5Parms@l
/* 80368994 003658D4  38 9E 08 F4 */	addi r4, r30, 0x8f4
/* 80368998 003658D8  90 1E 00 D8 */	stw r0, 0xd8(r30)
/* 8036899C 003658DC  38 E0 00 00 */	li r7, 0
/* 803689A0 003658E0  38 1F 00 20 */	addi r0, r31, 0x20
/* 803689A4 003658E4  38 7E 08 04 */	addi r3, r30, 0x804
/* 803689A8 003658E8  90 9E 07 F8 */	stw r4, 0x7f8(r30)
/* 803689AC 003658EC  38 9E 07 F8 */	addi r4, r30, 0x7f8
/* 803689B0 003658F0  38 A5 30 31 */	addi r5, r5, 0x66703031@l
/* 803689B4 003658F4  38 DF 00 30 */	addi r6, r31, 0x30
/* 803689B8 003658F8  90 FE 07 FC */	stw r7, 0x7fc(r30)
/* 803689BC 003658FC  90 1E 08 00 */	stw r0, 0x800(r30)
/* 803689C0 00365900  48 0A AC 99 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 803689C4 00365904  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 803689C8 00365908  3C A0 66 70 */	lis r5, 0x66703032@ha
/* 803689CC 0036590C  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 803689D0 00365910  C0 02 05 C0 */	lfs f0, lbl_8051E920@sda21(r2)
/* 803689D4 00365914  90 1E 08 04 */	stw r0, 0x804(r30)
/* 803689D8 00365918  38 7E 08 2C */	addi r3, r30, 0x82c
/* 803689DC 0036591C  C0 22 05 C4 */	lfs f1, lbl_8051E924@sda21(r2)
/* 803689E0 00365920  38 9E 07 F8 */	addi r4, r30, 0x7f8
/* 803689E4 00365924  D0 1E 08 1C */	stfs f0, 0x81c(r30)
/* 803689E8 00365928  38 A5 30 32 */	addi r5, r5, 0x66703032@l
/* 803689EC 0036592C  C0 02 05 C8 */	lfs f0, lbl_8051E928@sda21(r2)
/* 803689F0 00365930  38 DF 00 3C */	addi r6, r31, 0x3c
/* 803689F4 00365934  D0 3E 08 24 */	stfs f1, 0x824(r30)
/* 803689F8 00365938  D0 1E 08 28 */	stfs f0, 0x828(r30)
/* 803689FC 0036593C  48 0A AC 5D */	bl __ct__8BaseParmFP10ParametersUlPc
/* 80368A00 00365940  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 80368A04 00365944  3C A0 66 70 */	lis r5, 0x66703033@ha
/* 80368A08 00365948  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 80368A0C 0036594C  C0 02 05 C0 */	lfs f0, lbl_8051E920@sda21(r2)
/* 80368A10 00365950  90 1E 08 2C */	stw r0, 0x82c(r30)
/* 80368A14 00365954  38 7E 08 54 */	addi r3, r30, 0x854
/* 80368A18 00365958  C0 22 05 C4 */	lfs f1, lbl_8051E924@sda21(r2)
/* 80368A1C 0036595C  38 9E 07 F8 */	addi r4, r30, 0x7f8
/* 80368A20 00365960  D0 1E 08 44 */	stfs f0, 0x844(r30)
/* 80368A24 00365964  38 A5 30 33 */	addi r5, r5, 0x66703033@l
/* 80368A28 00365968  C0 02 05 C8 */	lfs f0, lbl_8051E928@sda21(r2)
/* 80368A2C 0036596C  38 DF 00 48 */	addi r6, r31, 0x48
/* 80368A30 00365970  D0 3E 08 4C */	stfs f1, 0x84c(r30)
/* 80368A34 00365974  D0 1E 08 50 */	stfs f0, 0x850(r30)
/* 80368A38 00365978  48 0A AC 21 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 80368A3C 0036597C  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 80368A40 00365980  3C A0 66 70 */	lis r5, 0x66703034@ha
/* 80368A44 00365984  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 80368A48 00365988  C0 02 05 CC */	lfs f0, lbl_8051E92C@sda21(r2)
/* 80368A4C 0036598C  90 1E 08 54 */	stw r0, 0x854(r30)
/* 80368A50 00365990  38 7E 08 7C */	addi r3, r30, 0x87c
/* 80368A54 00365994  C0 22 05 C4 */	lfs f1, lbl_8051E924@sda21(r2)
/* 80368A58 00365998  38 9E 07 F8 */	addi r4, r30, 0x7f8
/* 80368A5C 0036599C  D0 1E 08 6C */	stfs f0, 0x86c(r30)
/* 80368A60 003659A0  38 A5 30 34 */	addi r5, r5, 0x66703034@l
/* 80368A64 003659A4  C0 02 05 D0 */	lfs f0, lbl_8051E930@sda21(r2)
/* 80368A68 003659A8  38 DF 00 58 */	addi r6, r31, 0x58
/* 80368A6C 003659AC  D0 3E 08 74 */	stfs f1, 0x874(r30)
/* 80368A70 003659B0  D0 1E 08 78 */	stfs f0, 0x878(r30)
/* 80368A74 003659B4  48 0A AB E5 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 80368A78 003659B8  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 80368A7C 003659BC  3C A0 66 70 */	lis r5, 0x66703035@ha
/* 80368A80 003659C0  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 80368A84 003659C4  C0 02 05 D4 */	lfs f0, lbl_8051E934@sda21(r2)
/* 80368A88 003659C8  90 1E 08 7C */	stw r0, 0x87c(r30)
/* 80368A8C 003659CC  38 7E 08 A4 */	addi r3, r30, 0x8a4
/* 80368A90 003659D0  C0 22 05 C4 */	lfs f1, lbl_8051E924@sda21(r2)
/* 80368A94 003659D4  38 9E 07 F8 */	addi r4, r30, 0x7f8
/* 80368A98 003659D8  D0 1E 08 94 */	stfs f0, 0x894(r30)
/* 80368A9C 003659DC  38 A5 30 35 */	addi r5, r5, 0x66703035@l
/* 80368AA0 003659E0  C0 02 05 D0 */	lfs f0, lbl_8051E930@sda21(r2)
/* 80368AA4 003659E4  38 DF 00 68 */	addi r6, r31, 0x68
/* 80368AA8 003659E8  D0 3E 08 9C */	stfs f1, 0x89c(r30)
/* 80368AAC 003659EC  D0 1E 08 A0 */	stfs f0, 0x8a0(r30)
/* 80368AB0 003659F0  48 0A AB A9 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 80368AB4 003659F4  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 80368AB8 003659F8  3C A0 69 70 */	lis r5, 0x69703031@ha
/* 80368ABC 003659FC  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 80368AC0 00365A00  C0 02 05 C8 */	lfs f0, lbl_8051E928@sda21(r2)
/* 80368AC4 00365A04  90 1E 08 A4 */	stw r0, 0x8a4(r30)
/* 80368AC8 00365A08  38 7E 08 CC */	addi r3, r30, 0x8cc
/* 80368ACC 00365A0C  C0 22 05 C4 */	lfs f1, lbl_8051E924@sda21(r2)
/* 80368AD0 00365A10  38 9E 07 F8 */	addi r4, r30, 0x7f8
/* 80368AD4 00365A14  D0 1E 08 BC */	stfs f0, 0x8bc(r30)
/* 80368AD8 00365A18  38 A5 30 31 */	addi r5, r5, 0x69703031@l
/* 80368ADC 00365A1C  C0 02 05 D8 */	lfs f0, lbl_8051E938@sda21(r2)
/* 80368AE0 00365A20  38 DF 00 74 */	addi r6, r31, 0x74
/* 80368AE4 00365A24  D0 3E 08 C4 */	stfs f1, 0x8c4(r30)
/* 80368AE8 00365A28  D0 1E 08 C8 */	stfs f0, 0x8c8(r30)
/* 80368AEC 00365A2C  48 0A AB 6D */	bl __ct__8BaseParmFP10ParametersUlPc
/* 80368AF0 00365A30  3C 60 80 4B */	lis r3, "__vt__7Parm<i>"@ha
/* 80368AF4 00365A34  38 00 00 1E */	li r0, 0x1e
/* 80368AF8 00365A38  38 63 AC 90 */	addi r3, r3, "__vt__7Parm<i>"@l
/* 80368AFC 00365A3C  38 C0 00 00 */	li r6, 0
/* 80368B00 00365A40  90 7E 08 CC */	stw r3, 0x8cc(r30)
/* 80368B04 00365A44  38 A0 00 78 */	li r5, 0x78
/* 80368B08 00365A48  38 80 00 01 */	li r4, 1
/* 80368B0C 00365A4C  C1 22 05 DC */	lfs f9, lbl_8051E93C@sda21(r2)
/* 80368B10 00365A50  90 1E 08 E4 */	stw r0, 0x8e4(r30)
/* 80368B14 00365A54  38 00 00 08 */	li r0, 8
/* 80368B18 00365A58  C1 02 05 E0 */	lfs f8, lbl_8051E940@sda21(r2)
/* 80368B1C 00365A5C  7F C3 F3 78 */	mr r3, r30
/* 80368B20 00365A60  90 DE 08 EC */	stw r6, 0x8ec(r30)
/* 80368B24 00365A64  C0 E2 05 E4 */	lfs f7, lbl_8051E944@sda21(r2)
/* 80368B28 00365A68  90 BE 08 F0 */	stw r5, 0x8f0(r30)
/* 80368B2C 00365A6C  C0 C2 05 E8 */	lfs f6, lbl_8051E948@sda21(r2)
/* 80368B30 00365A70  98 9E 08 F8 */	stb r4, 0x8f8(r30)
/* 80368B34 00365A74  C0 A2 05 EC */	lfs f5, lbl_8051E94C@sda21(r2)
/* 80368B38 00365A78  98 9E 08 F9 */	stb r4, 0x8f9(r30)
/* 80368B3C 00365A7C  C0 82 05 F0 */	lfs f4, lbl_8051E950@sda21(r2)
/* 80368B40 00365A80  98 9E 08 FA */	stb r4, 0x8fa(r30)
/* 80368B44 00365A84  C0 62 05 CC */	lfs f3, lbl_8051E92C@sda21(r2)
/* 80368B48 00365A88  98 9E 08 FB */	stb r4, 0x8fb(r30)
/* 80368B4C 00365A8C  C0 42 05 F4 */	lfs f2, lbl_8051E954@sda21(r2)
/* 80368B50 00365A90  98 DE 08 FC */	stb r6, 0x8fc(r30)
/* 80368B54 00365A94  C0 22 05 F8 */	lfs f1, lbl_8051E958@sda21(r2)
/* 80368B58 00365A98  98 9E 08 FD */	stb r4, 0x8fd(r30)
/* 80368B5C 00365A9C  C0 02 05 FC */	lfs f0, lbl_8051E95C@sda21(r2)
/* 80368B60 00365AA0  98 DE 08 FE */	stb r6, 0x8fe(r30)
/* 80368B64 00365AA4  D1 3E 09 00 */	stfs f9, 0x900(r30)
/* 80368B68 00365AA8  D1 1E 09 04 */	stfs f8, 0x904(r30)
/* 80368B6C 00365AAC  D0 FE 09 08 */	stfs f7, 0x908(r30)
/* 80368B70 00365AB0  D0 DE 09 0C */	stfs f6, 0x90c(r30)
/* 80368B74 00365AB4  98 1E 09 10 */	stb r0, 0x910(r30)
/* 80368B78 00365AB8  D0 BE 09 14 */	stfs f5, 0x914(r30)
/* 80368B7C 00365ABC  D0 9E 09 18 */	stfs f4, 0x918(r30)
/* 80368B80 00365AC0  D0 7E 09 1C */	stfs f3, 0x91c(r30)
/* 80368B84 00365AC4  D0 9E 09 20 */	stfs f4, 0x920(r30)
/* 80368B88 00365AC8  D0 5E 09 24 */	stfs f2, 0x924(r30)
/* 80368B8C 00365ACC  D0 3E 09 28 */	stfs f1, 0x928(r30)
/* 80368B90 00365AD0  D0 1E 09 2C */	stfs f0, 0x92c(r30)
/* 80368B94 00365AD4  D1 1E 09 30 */	stfs f8, 0x930(r30)
/* 80368B98 00365AD8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80368B9C 00365ADC  83 C1 00 08 */	lwz r30, 8(r1)
/* 80368BA0 00365AE0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80368BA4 00365AE4  7C 08 03 A6 */	mtlr r0
/* 80368BA8 00365AE8  38 21 00 10 */	addi r1, r1, 0x10
/* 80368BAC 00365AEC  4E 80 00 20 */	blr 

.global birth__Q34Game6Jigumo3MgrFRQ24Game13EnemyBirthArg
birth__Q34Game6Jigumo3MgrFRQ24Game13EnemyBirthArg:
/* 80368BB0 00365AF0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80368BB4 00365AF4  7C 08 02 A6 */	mflr r0
/* 80368BB8 00365AF8  90 01 00 14 */	stw r0, 0x14(r1)
/* 80368BBC 00365AFC  4B DC 68 0D */	bl birth__Q24Game12EnemyMgrBaseFRQ24Game13EnemyBirthArg
/* 80368BC0 00365B00  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80368BC4 00365B04  7C 08 03 A6 */	mtlr r0
/* 80368BC8 00365B08  38 21 00 10 */	addi r1, r1, 0x10
/* 80368BCC 00365B0C  4E 80 00 20 */	blr 

.global loadModelData__Q34Game6Jigumo3MgrFv
loadModelData__Q34Game6Jigumo3MgrFv:
/* 80368BD0 00365B10  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80368BD4 00365B14  7C 08 02 A6 */	mflr r0
/* 80368BD8 00365B18  90 01 00 14 */	stw r0, 0x14(r1)
/* 80368BDC 00365B1C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80368BE0 00365B20  7C 7F 1B 78 */	mr r31, r3
/* 80368BE4 00365B24  4B DC 75 29 */	bl loadModelData__Q24Game12EnemyMgrBaseFv
/* 80368BE8 00365B28  38 A0 00 00 */	li r5, 0
/* 80368BEC 00365B2C  48 00 00 24 */	b lbl_80368C10
lbl_80368BF0:
/* 80368BF0 00365B30  80 64 00 80 */	lwz r3, 0x80(r4)
/* 80368BF4 00365B34  54 A0 13 BA */	rlwinm r0, r5, 2, 0xe, 0x1d
/* 80368BF8 00365B38  38 A5 00 01 */	addi r5, r5, 1
/* 80368BFC 00365B3C  7C 63 00 2E */	lwzx r3, r3, r0
/* 80368C00 00365B40  80 03 00 0C */	lwz r0, 0xc(r3)
/* 80368C04 00365B44  54 00 05 1E */	rlwinm r0, r0, 0, 0x14, 0xf
/* 80368C08 00365B48  60 00 20 00 */	ori r0, r0, 0x2000
/* 80368C0C 00365B4C  90 03 00 0C */	stw r0, 0xc(r3)
lbl_80368C10:
/* 80368C10 00365B50  80 9F 00 1C */	lwz r4, 0x1c(r31)
/* 80368C14 00365B54  54 A0 04 3E */	clrlwi r0, r5, 0x10
/* 80368C18 00365B58  A0 64 00 7C */	lhz r3, 0x7c(r4)
/* 80368C1C 00365B5C  7C 00 18 40 */	cmplw r0, r3
/* 80368C20 00365B60  41 80 FF D0 */	blt lbl_80368BF0
/* 80368C24 00365B64  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80368C28 00365B68  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80368C2C 00365B6C  7C 08 03 A6 */	mtlr r0
/* 80368C30 00365B70  38 21 00 10 */	addi r1, r1, 0x10
/* 80368C34 00365B74  4E 80 00 20 */	blr 

.global __dt__Q34Game6Jigumo3MgrFv
__dt__Q34Game6Jigumo3MgrFv:
/* 80368C38 00365B78  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80368C3C 00365B7C  7C 08 02 A6 */	mflr r0
/* 80368C40 00365B80  90 01 00 14 */	stw r0, 0x14(r1)
/* 80368C44 00365B84  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80368C48 00365B88  7C 9F 23 78 */	mr r31, r4
/* 80368C4C 00365B8C  93 C1 00 08 */	stw r30, 8(r1)
/* 80368C50 00365B90  7C 7E 1B 79 */	or. r30, r3, r3
/* 80368C54 00365B94  41 82 00 78 */	beq lbl_80368CCC
/* 80368C58 00365B98  3C 60 80 4E */	lis r3, __vt__Q34Game6Jigumo3Mgr@ha
/* 80368C5C 00365B9C  38 63 2B 68 */	addi r3, r3, __vt__Q34Game6Jigumo3Mgr@l
/* 80368C60 00365BA0  90 7E 00 00 */	stw r3, 0(r30)
/* 80368C64 00365BA4  38 03 00 38 */	addi r0, r3, 0x38
/* 80368C68 00365BA8  90 1E 00 04 */	stw r0, 4(r30)
/* 80368C6C 00365BAC  41 82 00 50 */	beq lbl_80368CBC
/* 80368C70 00365BB0  3C 60 80 4B */	lis r3, __vt__Q24Game12EnemyMgrBase@ha
/* 80368C74 00365BB4  38 63 F8 A0 */	addi r3, r3, __vt__Q24Game12EnemyMgrBase@l
/* 80368C78 00365BB8  90 7E 00 00 */	stw r3, 0(r30)
/* 80368C7C 00365BBC  38 03 00 38 */	addi r0, r3, 0x38
/* 80368C80 00365BC0  90 1E 00 04 */	stw r0, 4(r30)
/* 80368C84 00365BC4  41 82 00 38 */	beq lbl_80368CBC
/* 80368C88 00365BC8  3C 60 80 4B */	lis r3, __vt__Q24Game13IEnemyMgrBase@ha
/* 80368C8C 00365BCC  34 1E 00 04 */	addic. r0, r30, 4
/* 80368C90 00365BD0  38 63 AC FC */	addi r3, r3, __vt__Q24Game13IEnemyMgrBase@l
/* 80368C94 00365BD4  90 7E 00 00 */	stw r3, 0(r30)
/* 80368C98 00365BD8  38 03 00 38 */	addi r0, r3, 0x38
/* 80368C9C 00365BDC  90 1E 00 04 */	stw r0, 4(r30)
/* 80368CA0 00365BE0  41 82 00 1C */	beq lbl_80368CBC
/* 80368CA4 00365BE4  3C 80 80 4B */	lis r4, __vt__16GenericContainer@ha
/* 80368CA8 00365BE8  38 7E 00 04 */	addi r3, r30, 4
/* 80368CAC 00365BEC  38 04 AC DC */	addi r0, r4, __vt__16GenericContainer@l
/* 80368CB0 00365BF0  38 80 00 00 */	li r4, 0
/* 80368CB4 00365BF4  90 1E 00 04 */	stw r0, 4(r30)
/* 80368CB8 00365BF8  48 0A 88 D1 */	bl __dt__5CNodeFv
lbl_80368CBC:
/* 80368CBC 00365BFC  7F E0 07 35 */	extsh. r0, r31
/* 80368CC0 00365C00  40 81 00 0C */	ble lbl_80368CCC
/* 80368CC4 00365C04  7F C3 F3 78 */	mr r3, r30
/* 80368CC8 00365C08  4B CB B3 ED */	bl __dl__FPv
lbl_80368CCC:
/* 80368CCC 00365C0C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80368CD0 00365C10  7F C3 F3 78 */	mr r3, r30
/* 80368CD4 00365C14  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80368CD8 00365C18  83 C1 00 08 */	lwz r30, 8(r1)
/* 80368CDC 00365C1C  7C 08 03 A6 */	mtlr r0
/* 80368CE0 00365C20  38 21 00 10 */	addi r1, r1, 0x10
/* 80368CE4 00365C24  4E 80 00 20 */	blr 

.global doLoadBmd__Q34Game6Jigumo3MgrFPv
doLoadBmd__Q34Game6Jigumo3MgrFPv:
/* 80368CE8 00365C28  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80368CEC 00365C2C  7C 08 02 A6 */	mflr r0
/* 80368CF0 00365C30  3C A0 00 24 */	lis r5, 0x00240030@ha
/* 80368CF4 00365C34  7C 83 23 78 */	mr r3, r4
/* 80368CF8 00365C38  90 01 00 14 */	stw r0, 0x14(r1)
/* 80368CFC 00365C3C  38 85 00 30 */	addi r4, r5, 0x00240030@l
/* 80368D00 00365C40  4B D0 6B 95 */	bl load__22J3DModelLoaderDataBaseFPCvUl
/* 80368D04 00365C44  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80368D08 00365C48  7C 08 03 A6 */	mtlr r0
/* 80368D0C 00365C4C  38 21 00 10 */	addi r1, r1, 0x10
/* 80368D10 00365C50  4E 80 00 20 */	blr 

.global getEnemyTypeID__Q34Game6Jigumo3MgrFv
getEnemyTypeID__Q34Game6Jigumo3MgrFv:
/* 80368D14 00365C54  38 60 00 3F */	li r3, 0x3f
/* 80368D18 00365C58  4E 80 00 20 */	blr 

.global createObj__Q34Game6Jigumo3MgrFi
createObj__Q34Game6Jigumo3MgrFi:
/* 80368D1C 00365C5C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80368D20 00365C60  7C 08 02 A6 */	mflr r0
/* 80368D24 00365C64  90 01 00 14 */	stw r0, 0x14(r1)
/* 80368D28 00365C68  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80368D2C 00365C6C  7C 9F 23 78 */	mr r31, r4
/* 80368D30 00365C70  93 C1 00 08 */	stw r30, 8(r1)
/* 80368D34 00365C74  7C 7E 1B 78 */	mr r30, r3
/* 80368D38 00365C78  1C 7F 03 9C */	mulli r3, r31, 0x39c
/* 80368D3C 00365C7C  38 63 00 10 */	addi r3, r3, 0x10
/* 80368D40 00365C80  4B CB B2 6D */	bl __nwa__FUl
/* 80368D44 00365C84  3C 80 80 37 */	lis r4, __ct__Q34Game6Jigumo3ObjFv@ha
/* 80368D48 00365C88  3C A0 80 37 */	lis r5, __dt__Q34Game6Jigumo3ObjFv@ha
/* 80368D4C 00365C8C  38 84 94 04 */	addi r4, r4, __ct__Q34Game6Jigumo3ObjFv@l
/* 80368D50 00365C90  7F E7 FB 78 */	mr r7, r31
/* 80368D54 00365C94  38 A5 8D 7C */	addi r5, r5, __dt__Q34Game6Jigumo3ObjFv@l
/* 80368D58 00365C98  38 C0 03 9C */	li r6, 0x39c
/* 80368D5C 00365C9C  4B D5 8C 95 */	bl __construct_new_array
/* 80368D60 00365CA0  90 7E 00 44 */	stw r3, 0x44(r30)
/* 80368D64 00365CA4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80368D68 00365CA8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80368D6C 00365CAC  83 C1 00 08 */	lwz r30, 8(r1)
/* 80368D70 00365CB0  7C 08 03 A6 */	mtlr r0
/* 80368D74 00365CB4  38 21 00 10 */	addi r1, r1, 0x10
/* 80368D78 00365CB8  4E 80 00 20 */	blr 

.global __dt__Q34Game6Jigumo3ObjFv
__dt__Q34Game6Jigumo3ObjFv:
/* 80368D7C 00365CBC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80368D80 00365CC0  7C 08 02 A6 */	mflr r0
/* 80368D84 00365CC4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80368D88 00365CC8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80368D8C 00365CCC  7C 7F 1B 79 */	or. r31, r3, r3
/* 80368D90 00365CD0  93 C1 00 08 */	stw r30, 8(r1)
/* 80368D94 00365CD4  7C 9E 23 78 */	mr r30, r4
/* 80368D98 00365CD8  41 82 00 84 */	beq lbl_80368E1C
/* 80368D9C 00365CDC  3C 60 80 4E */	lis r3, __vt__Q34Game6Jigumo3Obj@ha
/* 80368DA0 00365CE0  38 1F 03 8C */	addi r0, r31, 0x38c
/* 80368DA4 00365CE4  38 83 2C 58 */	addi r4, r3, __vt__Q34Game6Jigumo3Obj@l
/* 80368DA8 00365CE8  90 9F 00 00 */	stw r4, 0(r31)
/* 80368DAC 00365CEC  38 64 01 B0 */	addi r3, r4, 0x1b0
/* 80368DB0 00365CF0  38 84 02 FC */	addi r4, r4, 0x2fc
/* 80368DB4 00365CF4  90 7F 01 78 */	stw r3, 0x178(r31)
/* 80368DB8 00365CF8  80 7F 01 7C */	lwz r3, 0x17c(r31)
/* 80368DBC 00365CFC  90 83 00 00 */	stw r4, 0(r3)
/* 80368DC0 00365D00  80 7F 01 7C */	lwz r3, 0x17c(r31)
/* 80368DC4 00365D04  7C 03 00 50 */	subf r0, r3, r0
/* 80368DC8 00365D08  90 03 00 0C */	stw r0, 0xc(r3)
/* 80368DCC 00365D0C  41 82 00 40 */	beq lbl_80368E0C
/* 80368DD0 00365D10  3C 60 80 4B */	lis r3, __vt__Q24Game9EnemyBase@ha
/* 80368DD4 00365D14  38 1F 02 BC */	addi r0, r31, 0x2bc
/* 80368DD8 00365D18  38 83 A3 24 */	addi r4, r3, __vt__Q24Game9EnemyBase@l
/* 80368DDC 00365D1C  38 7F 02 90 */	addi r3, r31, 0x290
/* 80368DE0 00365D20  90 9F 00 00 */	stw r4, 0(r31)
/* 80368DE4 00365D24  38 A4 01 B0 */	addi r5, r4, 0x1b0
/* 80368DE8 00365D28  38 C4 02 F8 */	addi r6, r4, 0x2f8
/* 80368DEC 00365D2C  38 80 FF FF */	li r4, -1
/* 80368DF0 00365D30  90 BF 01 78 */	stw r5, 0x178(r31)
/* 80368DF4 00365D34  80 BF 01 7C */	lwz r5, 0x17c(r31)
/* 80368DF8 00365D38  90 C5 00 00 */	stw r6, 0(r5)
/* 80368DFC 00365D3C  80 BF 01 7C */	lwz r5, 0x17c(r31)
/* 80368E00 00365D40  7C 05 00 50 */	subf r0, r5, r0
/* 80368E04 00365D44  90 05 00 0C */	stw r0, 0xc(r5)
/* 80368E08 00365D48  48 0A 87 81 */	bl __dt__5CNodeFv
lbl_80368E0C:
/* 80368E0C 00365D4C  7F C0 07 35 */	extsh. r0, r30
/* 80368E10 00365D50  40 81 00 0C */	ble lbl_80368E1C
/* 80368E14 00365D54  7F E3 FB 78 */	mr r3, r31
/* 80368E18 00365D58  4B CB B2 9D */	bl __dl__FPv
lbl_80368E1C:
/* 80368E1C 00365D5C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80368E20 00365D60  7F E3 FB 78 */	mr r3, r31
/* 80368E24 00365D64  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80368E28 00365D68  83 C1 00 08 */	lwz r30, 8(r1)
/* 80368E2C 00365D6C  7C 08 03 A6 */	mtlr r0
/* 80368E30 00365D70  38 21 00 10 */	addi r1, r1, 0x10
/* 80368E34 00365D74  4E 80 00 20 */	blr 

.global getEnemy__Q34Game6Jigumo3MgrFi
getEnemy__Q34Game6Jigumo3MgrFi:
/* 80368E38 00365D78  1C 04 03 9C */	mulli r0, r4, 0x39c
/* 80368E3C 00365D7C  80 63 00 44 */	lwz r3, 0x44(r3)
/* 80368E40 00365D80  7C 63 02 14 */	add r3, r3, r0
/* 80368E44 00365D84  4E 80 00 20 */	blr 

.global read__Q34Game6Jigumo5ParmsFR6Stream
read__Q34Game6Jigumo5ParmsFR6Stream:
/* 80368E48 00365D88  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80368E4C 00365D8C  7C 08 02 A6 */	mflr r0
/* 80368E50 00365D90  90 01 00 14 */	stw r0, 0x14(r1)
/* 80368E54 00365D94  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80368E58 00365D98  7C 9F 23 78 */	mr r31, r4
/* 80368E5C 00365D9C  93 C1 00 08 */	stw r30, 8(r1)
/* 80368E60 00365DA0  7C 7E 1B 78 */	mr r30, r3
/* 80368E64 00365DA4  48 0A A9 91 */	bl read__10ParametersFR6Stream
/* 80368E68 00365DA8  7F E4 FB 78 */	mr r4, r31
/* 80368E6C 00365DAC  38 7E 00 E0 */	addi r3, r30, 0xe0
/* 80368E70 00365DB0  48 0A A9 85 */	bl read__10ParametersFR6Stream
/* 80368E74 00365DB4  7F E4 FB 78 */	mr r4, r31
/* 80368E78 00365DB8  38 7E 07 F8 */	addi r3, r30, 0x7f8
/* 80368E7C 00365DBC  48 0A A9 79 */	bl read__10ParametersFR6Stream
/* 80368E80 00365DC0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80368E84 00365DC4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80368E88 00365DC8  83 C1 00 08 */	lwz r30, 8(r1)
/* 80368E8C 00365DCC  7C 08 03 A6 */	mtlr r0
/* 80368E90 00365DD0  38 21 00 10 */	addi r1, r1, 0x10
/* 80368E94 00365DD4  4E 80 00 20 */	blr 

.global "@4@__dt__Q34Game6Jigumo3MgrFv"
"@4@__dt__Q34Game6Jigumo3MgrFv":
/* 80368E98 00365DD8  38 63 FF FC */	addi r3, r3, -4
/* 80368E9C 00365DDC  4B FF FD 9C */	b __dt__Q34Game6Jigumo3MgrFv
