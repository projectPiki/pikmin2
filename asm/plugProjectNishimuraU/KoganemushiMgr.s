.include "macros.inc"
.section .rodata  # 0x804732E0 - 0x8049E220
.balign 0x8
.global lbl_80488FB8
lbl_80488FB8:
	.asciz "/enemy/data/Kogane/kogane_s3tc.bti"
	.skip 1
.global lbl_80488FDC
lbl_80488FDC:
	.4byte 0x8352834B
	.4byte 0x836C837D
	.4byte 0x836C815B
	.4byte 0x83578383
	.4byte 0x00000000
.global lbl_80488FF0
lbl_80488FF0:
	.asciz "KoganemushiMgr.cpp"
	.skip 1
.global lbl_80489004
lbl_80489004:
	.asciz "P2Assert"
	.skip 3

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 0x8
.global __vt__Q34Game11Koganemushi3Mgr
__vt__Q34Game11Koganemushi3Mgr:
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
	.4byte "@4@__dt__Q34Game11Koganemushi3MgrFv"
	.4byte getChildCount__5CNodeFv
	.4byte "@4@getObject__Q24Game12EnemyMgrBaseFPv"
	.4byte "@4@getNext__Q24Game12EnemyMgrBaseFPv"
	.4byte "@4@getStart__Q24Game12EnemyMgrBaseFv"
	.4byte "@4@getEnd__Q24Game12EnemyMgrBaseFv"
	.4byte __dt__Q34Game11Koganemushi3MgrFv
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
	.4byte createObj__Q34Game11Koganemushi3MgrFi
	.4byte getEnemy__Q34Game11Koganemushi3MgrFi
	.4byte doAlloc__Q34Game11Koganemushi3MgrFv
	.4byte getEnemyTypeID__Q34Game11Koganemushi3MgrFv
	.4byte createModel__Q34Game6Kogane3MgrFv
	.4byte initParms__Q24Game12EnemyMgrBaseFv
	.4byte loadResource__Q24Game12EnemyMgrBaseFv
	.4byte initObjects__Q24Game12EnemyMgrBaseFv
	.4byte initStoneSetting__Q24Game12EnemyMgrBaseFv
	.4byte loadModelData__Q24Game12EnemyMgrBaseFP10JKRArchive
	.4byte loadModelData__Q34Game6Kogane3MgrFv
	.4byte loadAnimData__Q34Game6Kogane3MgrFv
	.4byte loadTexData__Q34Game11Koganemushi3MgrFv
	.4byte doLoadBmd__Q34Game6Kogane3MgrFPv
	.4byte doLoadBdl__Q24Game12EnemyMgrBaseFPv
	.4byte initGenerator__Q24Game12EnemyMgrBaseFv
	.4byte getChangeTexture__Q34Game11Koganemushi3MgrFv
	.4byte 0

.section .sdata, "wa"  # 0x80514680 - 0x80514D80
.balign 0x8
.global "cKoganeChangeTexName__Q34Game11Koganemushi28@unnamed@KoganemushiMgr_cpp@"
"cKoganeChangeTexName__Q34Game11Koganemushi28@unnamed@KoganemushiMgr_cpp@":
	.4byte lbl_80488FB8

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global __ct__Q34Game11Koganemushi3MgrFiUc
__ct__Q34Game11Koganemushi3MgrFiUc:
/* 8029D9F0 0029A930  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8029D9F4 0029A934  7C 08 02 A6 */	mflr r0
/* 8029D9F8 0029A938  90 01 00 14 */	stw r0, 0x14(r1)
/* 8029D9FC 0029A93C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8029DA00 0029A940  7C 7F 1B 78 */	mr r31, r3
/* 8029DA04 0029A944  4B FB FE 95 */	bl __ct__Q34Game6Kogane3MgrFiUc
/* 8029DA08 0029A948  3C 60 80 4D */	lis r3, __vt__Q34Game11Koganemushi3Mgr@ha
/* 8029DA0C 0029A94C  3C 80 80 49 */	lis r4, lbl_80488FDC@ha
/* 8029DA10 0029A950  38 A3 C6 28 */	addi r5, r3, __vt__Q34Game11Koganemushi3Mgr@l
/* 8029DA14 0029A954  7F E3 FB 78 */	mr r3, r31
/* 8029DA18 0029A958  90 BF 00 00 */	stw r5, 0(r31)
/* 8029DA1C 0029A95C  38 A5 00 38 */	addi r5, r5, 0x38
/* 8029DA20 0029A960  38 04 8F DC */	addi r0, r4, lbl_80488FDC@l
/* 8029DA24 0029A964  90 BF 00 04 */	stw r5, 4(r31)
/* 8029DA28 0029A968  90 1F 00 18 */	stw r0, 0x18(r31)
/* 8029DA2C 0029A96C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8029DA30 0029A970  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8029DA34 0029A974  7C 08 03 A6 */	mtlr r0
/* 8029DA38 0029A978  38 21 00 10 */	addi r1, r1, 0x10
/* 8029DA3C 0029A97C  4E 80 00 20 */	blr 

.global doAlloc__Q34Game11Koganemushi3MgrFv
doAlloc__Q34Game11Koganemushi3MgrFv:
/* 8029DA40 0029A980  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8029DA44 0029A984  7C 08 02 A6 */	mflr r0
/* 8029DA48 0029A988  90 01 00 14 */	stw r0, 0x14(r1)
/* 8029DA4C 0029A98C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8029DA50 0029A990  7C 7F 1B 78 */	mr r31, r3
/* 8029DA54 0029A994  38 60 09 48 */	li r3, 0x948
/* 8029DA58 0029A998  4B D8 64 4D */	bl __nw__FUl
/* 8029DA5C 0029A99C  7C 64 1B 79 */	or. r4, r3, r3
/* 8029DA60 0029A9A0  41 82 00 0C */	beq lbl_8029DA6C
/* 8029DA64 0029A9A4  4B FE 6A A5 */	bl __ct__Q34Game6Kogane5ParmsFv
/* 8029DA68 0029A9A8  7C 64 1B 78 */	mr r4, r3
lbl_8029DA6C:
/* 8029DA6C 0029A9AC  7F E3 FB 78 */	mr r3, r31
/* 8029DA70 0029A9B0  4B E9 1E 2D */	bl init__Q24Game12EnemyMgrBaseFPQ24Game14EnemyParmsBase
/* 8029DA74 0029A9B4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8029DA78 0029A9B8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8029DA7C 0029A9BC  7C 08 03 A6 */	mtlr r0
/* 8029DA80 0029A9C0  38 21 00 10 */	addi r1, r1, 0x10
/* 8029DA84 0029A9C4  4E 80 00 20 */	blr 

.global createObj__Q34Game11Koganemushi3MgrFi
createObj__Q34Game11Koganemushi3MgrFi:
/* 8029DA88 0029A9C8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8029DA8C 0029A9CC  7C 08 02 A6 */	mflr r0
/* 8029DA90 0029A9D0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8029DA94 0029A9D4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8029DA98 0029A9D8  7C 9F 23 78 */	mr r31, r4
/* 8029DA9C 0029A9DC  93 C1 00 08 */	stw r30, 8(r1)
/* 8029DAA0 0029A9E0  7C 7E 1B 78 */	mr r30, r3
/* 8029DAA4 0029A9E4  1C 7F 02 EC */	mulli r3, r31, 0x2ec
/* 8029DAA8 0029A9E8  38 63 00 10 */	addi r3, r3, 0x10
/* 8029DAAC 0029A9EC  4B D8 65 01 */	bl __nwa__FUl
/* 8029DAB0 0029A9F0  3C 80 80 2A */	lis r4, __ct__Q34Game11Koganemushi3ObjFv@ha
/* 8029DAB4 0029A9F4  3C A0 80 2A */	lis r5, __dt__Q34Game11Koganemushi3ObjFv@ha
/* 8029DAB8 0029A9F8  38 84 DD 44 */	addi r4, r4, __ct__Q34Game11Koganemushi3ObjFv@l
/* 8029DABC 0029A9FC  7F E7 FB 78 */	mr r7, r31
/* 8029DAC0 0029AA00  38 A5 DA E8 */	addi r5, r5, __dt__Q34Game11Koganemushi3ObjFv@l
/* 8029DAC4 0029AA04  38 C0 02 EC */	li r6, 0x2ec
/* 8029DAC8 0029AA08  4B E2 3F 29 */	bl __construct_new_array
/* 8029DACC 0029AA0C  90 7E 00 48 */	stw r3, 0x48(r30)
/* 8029DAD0 0029AA10  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8029DAD4 0029AA14  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8029DAD8 0029AA18  83 C1 00 08 */	lwz r30, 8(r1)
/* 8029DADC 0029AA1C  7C 08 03 A6 */	mtlr r0
/* 8029DAE0 0029AA20  38 21 00 10 */	addi r1, r1, 0x10
/* 8029DAE4 0029AA24  4E 80 00 20 */	blr 

.global __dt__Q34Game11Koganemushi3ObjFv
__dt__Q34Game11Koganemushi3ObjFv:
/* 8029DAE8 0029AA28  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8029DAEC 0029AA2C  7C 08 02 A6 */	mflr r0
/* 8029DAF0 0029AA30  90 01 00 14 */	stw r0, 0x14(r1)
/* 8029DAF4 0029AA34  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8029DAF8 0029AA38  7C 9F 23 78 */	mr r31, r4
/* 8029DAFC 0029AA3C  93 C1 00 08 */	stw r30, 8(r1)
/* 8029DB00 0029AA40  7C 7E 1B 79 */	or. r30, r3, r3
/* 8029DB04 0029AA44  41 82 00 B4 */	beq lbl_8029DBB8
/* 8029DB08 0029AA48  3C 60 80 4D */	lis r3, __vt__Q34Game11Koganemushi3Obj@ha
/* 8029DB0C 0029AA4C  38 BE 02 DC */	addi r5, r30, 0x2dc
/* 8029DB10 0029AA50  38 83 C7 10 */	addi r4, r3, __vt__Q34Game11Koganemushi3Obj@l
/* 8029DB14 0029AA54  90 9E 00 00 */	stw r4, 0(r30)
/* 8029DB18 0029AA58  38 64 01 B0 */	addi r3, r4, 0x1b0
/* 8029DB1C 0029AA5C  38 04 03 20 */	addi r0, r4, 0x320
/* 8029DB20 0029AA60  90 7E 01 78 */	stw r3, 0x178(r30)
/* 8029DB24 0029AA64  80 7E 01 7C */	lwz r3, 0x17c(r30)
/* 8029DB28 0029AA68  90 03 00 00 */	stw r0, 0(r3)
/* 8029DB2C 0029AA6C  80 7E 01 7C */	lwz r3, 0x17c(r30)
/* 8029DB30 0029AA70  7C 03 28 50 */	subf r0, r3, r5
/* 8029DB34 0029AA74  90 03 00 0C */	stw r0, 0xc(r3)
/* 8029DB38 0029AA78  41 82 00 70 */	beq lbl_8029DBA8
/* 8029DB3C 0029AA7C  3C 60 80 4C */	lis r3, __vt__Q34Game6Kogane3Obj@ha
/* 8029DB40 0029AA80  38 83 30 A8 */	addi r4, r3, __vt__Q34Game6Kogane3Obj@l
/* 8029DB44 0029AA84  90 9E 00 00 */	stw r4, 0(r30)
/* 8029DB48 0029AA88  38 64 01 B0 */	addi r3, r4, 0x1b0
/* 8029DB4C 0029AA8C  38 04 03 20 */	addi r0, r4, 0x320
/* 8029DB50 0029AA90  90 7E 01 78 */	stw r3, 0x178(r30)
/* 8029DB54 0029AA94  80 7E 01 7C */	lwz r3, 0x17c(r30)
/* 8029DB58 0029AA98  90 03 00 00 */	stw r0, 0(r3)
/* 8029DB5C 0029AA9C  80 7E 01 7C */	lwz r3, 0x17c(r30)
/* 8029DB60 0029AAA0  7C 03 28 50 */	subf r0, r3, r5
/* 8029DB64 0029AAA4  90 03 00 0C */	stw r0, 0xc(r3)
/* 8029DB68 0029AAA8  41 82 00 40 */	beq lbl_8029DBA8
/* 8029DB6C 0029AAAC  3C 60 80 4B */	lis r3, __vt__Q24Game9EnemyBase@ha
/* 8029DB70 0029AAB0  38 1E 02 BC */	addi r0, r30, 0x2bc
/* 8029DB74 0029AAB4  38 83 A3 24 */	addi r4, r3, __vt__Q24Game9EnemyBase@l
/* 8029DB78 0029AAB8  38 7E 02 90 */	addi r3, r30, 0x290
/* 8029DB7C 0029AABC  90 9E 00 00 */	stw r4, 0(r30)
/* 8029DB80 0029AAC0  38 A4 01 B0 */	addi r5, r4, 0x1b0
/* 8029DB84 0029AAC4  38 C4 02 F8 */	addi r6, r4, 0x2f8
/* 8029DB88 0029AAC8  38 80 FF FF */	li r4, -1
/* 8029DB8C 0029AACC  90 BE 01 78 */	stw r5, 0x178(r30)
/* 8029DB90 0029AAD0  80 BE 01 7C */	lwz r5, 0x17c(r30)
/* 8029DB94 0029AAD4  90 C5 00 00 */	stw r6, 0(r5)
/* 8029DB98 0029AAD8  80 BE 01 7C */	lwz r5, 0x17c(r30)
/* 8029DB9C 0029AADC  7C 05 00 50 */	subf r0, r5, r0
/* 8029DBA0 0029AAE0  90 05 00 0C */	stw r0, 0xc(r5)
/* 8029DBA4 0029AAE4  48 17 39 E5 */	bl __dt__5CNodeFv
lbl_8029DBA8:
/* 8029DBA8 0029AAE8  7F E0 07 35 */	extsh. r0, r31
/* 8029DBAC 0029AAEC  40 81 00 0C */	ble lbl_8029DBB8
/* 8029DBB0 0029AAF0  7F C3 F3 78 */	mr r3, r30
/* 8029DBB4 0029AAF4  4B D8 65 01 */	bl __dl__FPv
lbl_8029DBB8:
/* 8029DBB8 0029AAF8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8029DBBC 0029AAFC  7F C3 F3 78 */	mr r3, r30
/* 8029DBC0 0029AB00  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8029DBC4 0029AB04  83 C1 00 08 */	lwz r30, 8(r1)
/* 8029DBC8 0029AB08  7C 08 03 A6 */	mtlr r0
/* 8029DBCC 0029AB0C  38 21 00 10 */	addi r1, r1, 0x10
/* 8029DBD0 0029AB10  4E 80 00 20 */	blr 

.global getEnemy__Q34Game11Koganemushi3MgrFi
getEnemy__Q34Game11Koganemushi3MgrFi:
/* 8029DBD4 0029AB14  1C 04 02 EC */	mulli r0, r4, 0x2ec
/* 8029DBD8 0029AB18  80 63 00 48 */	lwz r3, 0x48(r3)
/* 8029DBDC 0029AB1C  7C 63 02 14 */	add r3, r3, r0
/* 8029DBE0 0029AB20  4E 80 00 20 */	blr 

.global loadTexData__Q34Game11Koganemushi3MgrFv
loadTexData__Q34Game11Koganemushi3MgrFv:
/* 8029DBE4 0029AB24  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 8029DBE8 0029AB28  7C 08 02 A6 */	mflr r0
/* 8029DBEC 0029AB2C  90 01 00 44 */	stw r0, 0x44(r1)
/* 8029DBF0 0029AB30  38 00 00 00 */	li r0, 0
/* 8029DBF4 0029AB34  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 8029DBF8 0029AB38  7C 7F 1B 78 */	mr r31, r3
/* 8029DBFC 0029AB3C  90 03 00 44 */	stw r0, 0x44(r3)
/* 8029DC00 0029AB40  38 61 00 08 */	addi r3, r1, 8
/* 8029DC04 0029AB44  80 8D 84 C0 */	lwz r4, "cKoganeChangeTexName__Q34Game11Koganemushi28@unnamed@KoganemushiMgr_cpp@"@sda21(r13)
/* 8029DC08 0029AB48  48 1A E9 D1 */	bl __ct__Q212LoadResource3ArgFPCc
/* 8029DC0C 0029AB4C  80 6D 9C 28 */	lwz r3, gLoadResourceMgr@sda21(r13)
/* 8029DC10 0029AB50  38 81 00 08 */	addi r4, r1, 8
/* 8029DC14 0029AB54  48 1A EB 8D */	bl load__Q212LoadResource3MgrFRQ212LoadResource3Arg
/* 8029DC18 0029AB58  28 03 00 00 */	cmplwi r3, 0
/* 8029DC1C 0029AB5C  41 82 00 0C */	beq lbl_8029DC28
/* 8029DC20 0029AB60  80 03 00 30 */	lwz r0, 0x30(r3)
/* 8029DC24 0029AB64  90 1F 00 44 */	stw r0, 0x44(r31)
lbl_8029DC28:
/* 8029DC28 0029AB68  80 1F 00 44 */	lwz r0, 0x44(r31)
/* 8029DC2C 0029AB6C  28 00 00 00 */	cmplwi r0, 0
/* 8029DC30 0029AB70  40 82 00 20 */	bne lbl_8029DC50
/* 8029DC34 0029AB74  3C 60 80 49 */	lis r3, lbl_80488FF0@ha
/* 8029DC38 0029AB78  3C A0 80 49 */	lis r5, lbl_80489004@ha
/* 8029DC3C 0029AB7C  38 63 8F F0 */	addi r3, r3, lbl_80488FF0@l
/* 8029DC40 0029AB80  38 80 00 53 */	li r4, 0x53
/* 8029DC44 0029AB84  38 A5 90 04 */	addi r5, r5, lbl_80489004@l
/* 8029DC48 0029AB88  4C C6 31 82 */	crclr 6
/* 8029DC4C 0029AB8C  4B D8 C9 F5 */	bl panic_f__12JUTExceptionFPCciPCce
lbl_8029DC50:
/* 8029DC50 0029AB90  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8029DC54 0029AB94  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 8029DC58 0029AB98  7C 08 03 A6 */	mtlr r0
/* 8029DC5C 0029AB9C  38 21 00 40 */	addi r1, r1, 0x40
/* 8029DC60 0029ABA0  4E 80 00 20 */	blr 

.global __dt__Q34Game11Koganemushi3MgrFv
__dt__Q34Game11Koganemushi3MgrFv:
/* 8029DC64 0029ABA4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8029DC68 0029ABA8  7C 08 02 A6 */	mflr r0
/* 8029DC6C 0029ABAC  90 01 00 14 */	stw r0, 0x14(r1)
/* 8029DC70 0029ABB0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8029DC74 0029ABB4  7C 9F 23 78 */	mr r31, r4
/* 8029DC78 0029ABB8  93 C1 00 08 */	stw r30, 8(r1)
/* 8029DC7C 0029ABBC  7C 7E 1B 79 */	or. r30, r3, r3
/* 8029DC80 0029ABC0  41 82 00 90 */	beq lbl_8029DD10
/* 8029DC84 0029ABC4  3C 60 80 4D */	lis r3, __vt__Q34Game11Koganemushi3Mgr@ha
/* 8029DC88 0029ABC8  38 63 C6 28 */	addi r3, r3, __vt__Q34Game11Koganemushi3Mgr@l
/* 8029DC8C 0029ABCC  90 7E 00 00 */	stw r3, 0(r30)
/* 8029DC90 0029ABD0  38 03 00 38 */	addi r0, r3, 0x38
/* 8029DC94 0029ABD4  90 1E 00 04 */	stw r0, 4(r30)
/* 8029DC98 0029ABD8  41 82 00 68 */	beq lbl_8029DD00
/* 8029DC9C 0029ABDC  3C 60 80 4C */	lis r3, __vt__Q34Game6Kogane3Mgr@ha
/* 8029DCA0 0029ABE0  38 63 2F C0 */	addi r3, r3, __vt__Q34Game6Kogane3Mgr@l
/* 8029DCA4 0029ABE4  90 7E 00 00 */	stw r3, 0(r30)
/* 8029DCA8 0029ABE8  38 03 00 38 */	addi r0, r3, 0x38
/* 8029DCAC 0029ABEC  90 1E 00 04 */	stw r0, 4(r30)
/* 8029DCB0 0029ABF0  41 82 00 50 */	beq lbl_8029DD00
/* 8029DCB4 0029ABF4  3C 60 80 4B */	lis r3, __vt__Q24Game12EnemyMgrBase@ha
/* 8029DCB8 0029ABF8  38 63 F8 A0 */	addi r3, r3, __vt__Q24Game12EnemyMgrBase@l
/* 8029DCBC 0029ABFC  90 7E 00 00 */	stw r3, 0(r30)
/* 8029DCC0 0029AC00  38 03 00 38 */	addi r0, r3, 0x38
/* 8029DCC4 0029AC04  90 1E 00 04 */	stw r0, 4(r30)
/* 8029DCC8 0029AC08  41 82 00 38 */	beq lbl_8029DD00
/* 8029DCCC 0029AC0C  3C 60 80 4B */	lis r3, __vt__Q24Game13IEnemyMgrBase@ha
/* 8029DCD0 0029AC10  34 1E 00 04 */	addic. r0, r30, 4
/* 8029DCD4 0029AC14  38 63 AC FC */	addi r3, r3, __vt__Q24Game13IEnemyMgrBase@l
/* 8029DCD8 0029AC18  90 7E 00 00 */	stw r3, 0(r30)
/* 8029DCDC 0029AC1C  38 03 00 38 */	addi r0, r3, 0x38
/* 8029DCE0 0029AC20  90 1E 00 04 */	stw r0, 4(r30)
/* 8029DCE4 0029AC24  41 82 00 1C */	beq lbl_8029DD00
/* 8029DCE8 0029AC28  3C 80 80 4B */	lis r4, __vt__16GenericContainer@ha
/* 8029DCEC 0029AC2C  38 7E 00 04 */	addi r3, r30, 4
/* 8029DCF0 0029AC30  38 04 AC DC */	addi r0, r4, __vt__16GenericContainer@l
/* 8029DCF4 0029AC34  38 80 00 00 */	li r4, 0
/* 8029DCF8 0029AC38  90 1E 00 04 */	stw r0, 4(r30)
/* 8029DCFC 0029AC3C  48 17 38 8D */	bl __dt__5CNodeFv
lbl_8029DD00:
/* 8029DD00 0029AC40  7F E0 07 35 */	extsh. r0, r31
/* 8029DD04 0029AC44  40 81 00 0C */	ble lbl_8029DD10
/* 8029DD08 0029AC48  7F C3 F3 78 */	mr r3, r30
/* 8029DD0C 0029AC4C  4B D8 63 A9 */	bl __dl__FPv
lbl_8029DD10:
/* 8029DD10 0029AC50  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8029DD14 0029AC54  7F C3 F3 78 */	mr r3, r30
/* 8029DD18 0029AC58  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8029DD1C 0029AC5C  83 C1 00 08 */	lwz r30, 8(r1)
/* 8029DD20 0029AC60  7C 08 03 A6 */	mtlr r0
/* 8029DD24 0029AC64  38 21 00 10 */	addi r1, r1, 0x10
/* 8029DD28 0029AC68  4E 80 00 20 */	blr 

.global getEnemyTypeID__Q34Game11Koganemushi3MgrFv
getEnemyTypeID__Q34Game11Koganemushi3MgrFv:
/* 8029DD2C 0029AC6C  38 60 00 09 */	li r3, 9
/* 8029DD30 0029AC70  4E 80 00 20 */	blr 

.global getChangeTexture__Q34Game11Koganemushi3MgrFv
getChangeTexture__Q34Game11Koganemushi3MgrFv:
/* 8029DD34 0029AC74  80 63 00 44 */	lwz r3, 0x44(r3)
/* 8029DD38 0029AC78  4E 80 00 20 */	blr 

.global "@4@__dt__Q34Game11Koganemushi3MgrFv"
"@4@__dt__Q34Game11Koganemushi3MgrFv":
/* 8029DD3C 0029AC7C  38 63 FF FC */	addi r3, r3, -4
/* 8029DD40 0029AC80  4B FF FF 24 */	b __dt__Q34Game11Koganemushi3MgrFv
