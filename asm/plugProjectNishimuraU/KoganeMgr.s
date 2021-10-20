.include "macros.inc"
.section .rodata  # 0x804732E0 - 0x8049E220
.balign 0x8
.global lbl_80485390
lbl_80485390:
	.4byte 0x8352834B
	.4byte 0x836C837D
	.4byte 0x836C815B
	.4byte 0x83578383
	.4byte 0x00000000
.global lbl_804853A4
lbl_804853A4:
	.4byte 0x00000009
	.4byte 0x0000000A
	.4byte 0x0000000B
.global lbl_804853B0
lbl_804853B0:
	.4byte 0x00000009
	.4byte 0x0000000A
	.4byte 0x0000000B
.global lbl_804853BC
lbl_804853BC:
	.4byte 0x4B6F6761
	.4byte 0x6E654D67
	.4byte 0x722E6370
	.4byte 0x70000000
.global lbl_804853CC
lbl_804853CC:
	.asciz "P2Assert"
	.skip 3

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 0x8
.global __vt__Q34Game6Kogane3Mgr
__vt__Q34Game6Kogane3Mgr:
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
	.4byte "@4@__dt__Q34Game6Kogane3MgrFv"
	.4byte getChildCount__5CNodeFv
	.4byte "@4@getObject__Q24Game12EnemyMgrBaseFPv"
	.4byte "@4@getNext__Q24Game12EnemyMgrBaseFPv"
	.4byte "@4@getStart__Q24Game12EnemyMgrBaseFv"
	.4byte "@4@getEnd__Q24Game12EnemyMgrBaseFv"
	.4byte __dt__Q34Game6Kogane3MgrFv
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
	.4byte 0
	.4byte 0
	.4byte doAlloc__Q24Game12EnemyMgrBaseFv
	.4byte getEnemyTypeID__Q34Game6Kogane3MgrFv
	.4byte createModel__Q34Game6Kogane3MgrFv
	.4byte initParms__Q24Game12EnemyMgrBaseFv
	.4byte loadResource__Q24Game12EnemyMgrBaseFv
	.4byte initObjects__Q24Game12EnemyMgrBaseFv
	.4byte initStoneSetting__Q24Game12EnemyMgrBaseFv
	.4byte loadModelData__Q24Game12EnemyMgrBaseFP10JKRArchive
	.4byte loadModelData__Q34Game6Kogane3MgrFv
	.4byte loadAnimData__Q34Game6Kogane3MgrFv
	.4byte loadTexData__Q24Game12EnemyMgrBaseFv
	.4byte doLoadBmd__Q34Game6Kogane3MgrFPv
	.4byte doLoadBdl__Q24Game12EnemyMgrBaseFPv
	.4byte initGenerator__Q24Game12EnemyMgrBaseFv
	.4byte 0
	.4byte 0

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global __ct__Q34Game6Kogane3MgrFiUc
__ct__Q34Game6Kogane3MgrFiUc:
/* 8025D898 0025A7D8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8025D89C 0025A7DC  7C 08 02 A6 */	mflr r0
/* 8025D8A0 0025A7E0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8025D8A4 0025A7E4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8025D8A8 0025A7E8  7C 7F 1B 78 */	mr r31, r3
/* 8025D8AC 0025A7EC  4B ED 13 E9 */	bl __ct__Q24Game12EnemyMgrBaseFiUc
/* 8025D8B0 0025A7F0  3C 60 80 4C */	lis r3, __vt__Q34Game6Kogane3Mgr@ha
/* 8025D8B4 0025A7F4  3C 80 80 48 */	lis r4, lbl_80485390@ha
/* 8025D8B8 0025A7F8  38 A3 2F C0 */	addi r5, r3, __vt__Q34Game6Kogane3Mgr@l
/* 8025D8BC 0025A7FC  7F E3 FB 78 */	mr r3, r31
/* 8025D8C0 0025A800  90 BF 00 00 */	stw r5, 0(r31)
/* 8025D8C4 0025A804  38 A5 00 38 */	addi r5, r5, 0x38
/* 8025D8C8 0025A808  38 04 53 90 */	addi r0, r4, lbl_80485390@l
/* 8025D8CC 0025A80C  90 BF 00 04 */	stw r5, 4(r31)
/* 8025D8D0 0025A810  90 1F 00 18 */	stw r0, 0x18(r31)
/* 8025D8D4 0025A814  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8025D8D8 0025A818  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8025D8DC 0025A81C  7C 08 03 A6 */	mtlr r0
/* 8025D8E0 0025A820  38 21 00 10 */	addi r1, r1, 0x10
/* 8025D8E4 0025A824  4E 80 00 20 */	blr 

.global loadModelData__Q34Game6Kogane3MgrFv
loadModelData__Q34Game6Kogane3MgrFv:
/* 8025D8E8 0025A828  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8025D8EC 0025A82C  7C 08 02 A6 */	mflr r0
/* 8025D8F0 0025A830  3C 80 80 48 */	lis r4, lbl_804853A4@ha
/* 8025D8F4 0025A834  90 01 00 34 */	stw r0, 0x34(r1)
/* 8025D8F8 0025A838  38 A4 53 A4 */	addi r5, r4, lbl_804853A4@l
/* 8025D8FC 0025A83C  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 8025D900 0025A840  7C 7F 1B 78 */	mr r31, r3
/* 8025D904 0025A844  93 C1 00 28 */	stw r30, 0x28(r1)
/* 8025D908 0025A848  3B C1 00 08 */	addi r30, r1, 8
/* 8025D90C 0025A84C  93 A1 00 24 */	stw r29, 0x24(r1)
/* 8025D910 0025A850  3B A0 00 00 */	li r29, 0
/* 8025D914 0025A854  80 85 00 00 */	lwz r4, 0(r5)
/* 8025D918 0025A858  80 65 00 04 */	lwz r3, 4(r5)
/* 8025D91C 0025A85C  80 05 00 08 */	lwz r0, 8(r5)
/* 8025D920 0025A860  90 81 00 08 */	stw r4, 8(r1)
/* 8025D924 0025A864  90 61 00 0C */	stw r3, 0xc(r1)
/* 8025D928 0025A868  90 01 00 10 */	stw r0, 0x10(r1)
lbl_8025D92C:
/* 8025D92C 0025A86C  80 6D 91 E0 */	lwz r3, generalEnemyMgr__4Game@sda21(r13)
/* 8025D930 0025A870  80 9E 00 00 */	lwz r4, 0(r30)
/* 8025D934 0025A874  4B EB 03 71 */	bl getEnemyMgr__Q24Game15GeneralEnemyMgrFi
/* 8025D938 0025A878  28 03 00 00 */	cmplwi r3, 0
/* 8025D93C 0025A87C  41 82 00 24 */	beq lbl_8025D960
/* 8025D940 0025A880  81 83 00 00 */	lwz r12, 0(r3)
/* 8025D944 0025A884  81 8C 00 74 */	lwz r12, 0x74(r12)
/* 8025D948 0025A888  7D 89 03 A6 */	mtctr r12
/* 8025D94C 0025A88C  4E 80 04 21 */	bctrl 
/* 8025D950 0025A890  28 03 00 00 */	cmplwi r3, 0
/* 8025D954 0025A894  41 82 00 0C */	beq lbl_8025D960
/* 8025D958 0025A898  90 7F 00 1C */	stw r3, 0x1c(r31)
/* 8025D95C 0025A89C  48 00 00 58 */	b lbl_8025D9B4
lbl_8025D960:
/* 8025D960 0025A8A0  3B BD 00 01 */	addi r29, r29, 1
/* 8025D964 0025A8A4  3B DE 00 04 */	addi r30, r30, 4
/* 8025D968 0025A8A8  2C 1D 00 03 */	cmpwi r29, 3
/* 8025D96C 0025A8AC  41 80 FF C0 */	blt lbl_8025D92C
/* 8025D970 0025A8B0  7F E3 FB 78 */	mr r3, r31
/* 8025D974 0025A8B4  4B ED 27 99 */	bl loadModelData__Q24Game12EnemyMgrBaseFv
/* 8025D978 0025A8B8  38 A0 00 00 */	li r5, 0
/* 8025D97C 0025A8BC  48 00 00 24 */	b lbl_8025D9A0
lbl_8025D980:
/* 8025D980 0025A8C0  80 64 00 80 */	lwz r3, 0x80(r4)
/* 8025D984 0025A8C4  54 A0 13 BA */	rlwinm r0, r5, 2, 0xe, 0x1d
/* 8025D988 0025A8C8  38 A5 00 01 */	addi r5, r5, 1
/* 8025D98C 0025A8CC  7C 63 00 2E */	lwzx r3, r3, r0
/* 8025D990 0025A8D0  80 03 00 0C */	lwz r0, 0xc(r3)
/* 8025D994 0025A8D4  54 00 05 1E */	rlwinm r0, r0, 0, 0x14, 0xf
/* 8025D998 0025A8D8  60 00 20 00 */	ori r0, r0, 0x2000
/* 8025D99C 0025A8DC  90 03 00 0C */	stw r0, 0xc(r3)
lbl_8025D9A0:
/* 8025D9A0 0025A8E0  80 9F 00 1C */	lwz r4, 0x1c(r31)
/* 8025D9A4 0025A8E4  54 A0 04 3E */	clrlwi r0, r5, 0x10
/* 8025D9A8 0025A8E8  A0 64 00 7C */	lhz r3, 0x7c(r4)
/* 8025D9AC 0025A8EC  7C 00 18 40 */	cmplw r0, r3
/* 8025D9B0 0025A8F0  41 80 FF D0 */	blt lbl_8025D980
lbl_8025D9B4:
/* 8025D9B4 0025A8F4  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8025D9B8 0025A8F8  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 8025D9BC 0025A8FC  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 8025D9C0 0025A900  83 A1 00 24 */	lwz r29, 0x24(r1)
/* 8025D9C4 0025A904  7C 08 03 A6 */	mtlr r0
/* 8025D9C8 0025A908  38 21 00 30 */	addi r1, r1, 0x30
/* 8025D9CC 0025A90C  4E 80 00 20 */	blr 

.global loadAnimData__Q34Game6Kogane3MgrFv
loadAnimData__Q34Game6Kogane3MgrFv:
/* 8025D9D0 0025A910  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8025D9D4 0025A914  7C 08 02 A6 */	mflr r0
/* 8025D9D8 0025A918  3C 80 80 48 */	lis r4, lbl_804853B0@ha
/* 8025D9DC 0025A91C  90 01 00 34 */	stw r0, 0x34(r1)
/* 8025D9E0 0025A920  38 A4 53 B0 */	addi r5, r4, lbl_804853B0@l
/* 8025D9E4 0025A924  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 8025D9E8 0025A928  3B E1 00 08 */	addi r31, r1, 8
/* 8025D9EC 0025A92C  93 C1 00 28 */	stw r30, 0x28(r1)
/* 8025D9F0 0025A930  3B C0 00 00 */	li r30, 0
/* 8025D9F4 0025A934  93 A1 00 24 */	stw r29, 0x24(r1)
/* 8025D9F8 0025A938  7C 7D 1B 78 */	mr r29, r3
/* 8025D9FC 0025A93C  80 85 00 00 */	lwz r4, 0(r5)
/* 8025DA00 0025A940  80 65 00 04 */	lwz r3, 4(r5)
/* 8025DA04 0025A944  80 05 00 08 */	lwz r0, 8(r5)
/* 8025DA08 0025A948  90 81 00 08 */	stw r4, 8(r1)
/* 8025DA0C 0025A94C  90 61 00 0C */	stw r3, 0xc(r1)
/* 8025DA10 0025A950  90 01 00 10 */	stw r0, 0x10(r1)
lbl_8025DA14:
/* 8025DA14 0025A954  80 6D 91 E0 */	lwz r3, generalEnemyMgr__4Game@sda21(r13)
/* 8025DA18 0025A958  80 9F 00 00 */	lwz r4, 0(r31)
/* 8025DA1C 0025A95C  4B EB 02 89 */	bl getEnemyMgr__Q24Game15GeneralEnemyMgrFi
/* 8025DA20 0025A960  28 03 00 00 */	cmplwi r3, 0
/* 8025DA24 0025A964  41 82 00 18 */	beq lbl_8025DA3C
/* 8025DA28 0025A968  80 03 00 20 */	lwz r0, 0x20(r3)
/* 8025DA2C 0025A96C  28 00 00 00 */	cmplwi r0, 0
/* 8025DA30 0025A970  41 82 00 0C */	beq lbl_8025DA3C
/* 8025DA34 0025A974  90 1D 00 20 */	stw r0, 0x20(r29)
/* 8025DA38 0025A978  48 00 00 1C */	b lbl_8025DA54
lbl_8025DA3C:
/* 8025DA3C 0025A97C  3B DE 00 01 */	addi r30, r30, 1
/* 8025DA40 0025A980  3B FF 00 04 */	addi r31, r31, 4
/* 8025DA44 0025A984  2C 1E 00 03 */	cmpwi r30, 3
/* 8025DA48 0025A988  41 80 FF CC */	blt lbl_8025DA14
/* 8025DA4C 0025A98C  7F A3 EB 78 */	mr r3, r29
/* 8025DA50 0025A990  4B ED 27 7D */	bl loadAnimData__Q24Game12EnemyMgrBaseFv
lbl_8025DA54:
/* 8025DA54 0025A994  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8025DA58 0025A998  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 8025DA5C 0025A99C  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 8025DA60 0025A9A0  83 A1 00 24 */	lwz r29, 0x24(r1)
/* 8025DA64 0025A9A4  7C 08 03 A6 */	mtlr r0
/* 8025DA68 0025A9A8  38 21 00 30 */	addi r1, r1, 0x30
/* 8025DA6C 0025A9AC  4E 80 00 20 */	blr 

.global createModel__Q34Game6Kogane3MgrFv
createModel__Q34Game6Kogane3MgrFv:
/* 8025DA70 0025A9B0  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 8025DA74 0025A9B4  7C 08 02 A6 */	mflr r0
/* 8025DA78 0025A9B8  90 01 00 54 */	stw r0, 0x54(r1)
/* 8025DA7C 0025A9BC  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 8025DA80 0025A9C0  93 C1 00 48 */	stw r30, 0x48(r1)
/* 8025DA84 0025A9C4  93 A1 00 44 */	stw r29, 0x44(r1)
/* 8025DA88 0025A9C8  7C 7D 1B 78 */	mr r29, r3
/* 8025DA8C 0025A9CC  38 60 00 14 */	li r3, 0x14
/* 8025DA90 0025A9D0  4B DC 64 15 */	bl __nw__FUl
/* 8025DA94 0025A9D4  7C 7F 1B 79 */	or. r31, r3, r3
/* 8025DA98 0025A9D8  41 82 00 18 */	beq lbl_8025DAB0
/* 8025DA9C 0025A9DC  80 9D 00 1C */	lwz r4, 0x1c(r29)
/* 8025DAA0 0025A9E0  3C A0 00 08 */	lis r5, 8
/* 8025DAA4 0025A9E4  88 DD 00 24 */	lbz r6, 0x24(r29)
/* 8025DAA8 0025A9E8  48 1E 07 31 */	bl __ct__Q28SysShape5ModelFP12J3DModelDataUlUl
/* 8025DAAC 0025A9EC  7C 7F 1B 78 */	mr r31, r3
lbl_8025DAB0:
/* 8025DAB0 0025A9F0  28 1F 00 00 */	cmplwi r31, 0
/* 8025DAB4 0025A9F4  40 82 00 20 */	bne lbl_8025DAD4
/* 8025DAB8 0025A9F8  3C 60 80 48 */	lis r3, lbl_804853BC@ha
/* 8025DABC 0025A9FC  3C A0 80 48 */	lis r5, lbl_804853CC@ha
/* 8025DAC0 0025AA00  38 63 53 BC */	addi r3, r3, lbl_804853BC@l
/* 8025DAC4 0025AA04  38 80 00 94 */	li r4, 0x94
/* 8025DAC8 0025AA08  38 A5 53 CC */	addi r5, r5, lbl_804853CC@l
/* 8025DACC 0025AA0C  4C C6 31 82 */	crclr 6
/* 8025DAD0 0025AA10  4B DC CB 71 */	bl panic_f__12JUTExceptionFPCciPCce
lbl_8025DAD4:
/* 8025DAD4 0025AA14  3B C0 00 00 */	li r30, 0
/* 8025DAD8 0025AA18  48 00 00 40 */	b lbl_8025DB18
lbl_8025DADC:
/* 8025DADC 0025AA1C  80 64 00 64 */	lwz r3, 0x64(r4)
/* 8025DAE0 0025AA20  7F C4 F3 78 */	mr r4, r30
/* 8025DAE4 0025AA24  4B DD 13 39 */	bl getName__10JUTNameTabCFUs
/* 8025DAE8 0025AA28  38 82 C8 C0 */	addi r4, r2, lbl_8051AC20@sda21
/* 8025DAEC 0025AA2C  4B E6 CB D5 */	bl strcmp
/* 8025DAF0 0025AA30  2C 03 00 00 */	cmpwi r3, 0
/* 8025DAF4 0025AA34  40 82 00 20 */	bne lbl_8025DB14
/* 8025DAF8 0025AA38  80 9F 00 08 */	lwz r4, 8(r31)
/* 8025DAFC 0025AA3C  57 C3 32 B2 */	rlwinm r3, r30, 6, 0xa, 0x19
/* 8025DB00 0025AA40  38 03 00 2C */	addi r0, r3, 0x2c
/* 8025DB04 0025AA44  80 64 00 C0 */	lwz r3, 0xc0(r4)
/* 8025DB08 0025AA48  3C 80 05 02 */	lis r4, 0x502
/* 8025DB0C 0025AA4C  7C 63 00 2E */	lwzx r3, r3, r0
/* 8025DB10 0025AA50  4B E0 27 C9 */	bl newDifferedDisplayList__14J3DShapePacketFUl
lbl_8025DB14:
/* 8025DB14 0025AA54  3B DE 00 01 */	addi r30, r30, 1
lbl_8025DB18:
/* 8025DB18 0025AA58  80 9D 00 1C */	lwz r4, 0x1c(r29)
/* 8025DB1C 0025AA5C  57 C0 04 3E */	clrlwi r0, r30, 0x10
/* 8025DB20 0025AA60  A0 64 00 5C */	lhz r3, 0x5c(r4)
/* 8025DB24 0025AA64  7C 00 18 40 */	cmplw r0, r3
/* 8025DB28 0025AA68  41 80 FF B4 */	blt lbl_8025DADC
/* 8025DB2C 0025AA6C  38 61 00 08 */	addi r3, r1, 8
/* 8025DB30 0025AA70  4B E8 C7 71 */	bl PSMTXIdentity
/* 8025DB34 0025AA74  3C 80 80 51 */	lis r4, j3dSys@ha
/* 8025DB38 0025AA78  38 61 00 08 */	addi r3, r1, 8
/* 8025DB3C 0025AA7C  38 84 F2 30 */	addi r4, r4, j3dSys@l
/* 8025DB40 0025AA80  4B E8 C7 8D */	bl PSMTXCopy
/* 8025DB44 0025AA84  83 DF 00 08 */	lwz r30, 8(r31)
/* 8025DB48 0025AA88  7F C3 F3 78 */	mr r3, r30
/* 8025DB4C 0025AA8C  81 9E 00 00 */	lwz r12, 0(r30)
/* 8025DB50 0025AA90  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8025DB54 0025AA94  7D 89 03 A6 */	mtctr r12
/* 8025DB58 0025AA98  4E 80 04 21 */	bctrl 
/* 8025DB5C 0025AA9C  7F C3 F3 78 */	mr r3, r30
/* 8025DB60 0025AAA0  81 9E 00 00 */	lwz r12, 0(r30)
/* 8025DB64 0025AAA4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8025DB68 0025AAA8  7D 89 03 A6 */	mtctr r12
/* 8025DB6C 0025AAAC  4E 80 04 21 */	bctrl 
/* 8025DB70 0025AAB0  7F C3 F3 78 */	mr r3, r30
/* 8025DB74 0025AAB4  4B E0 8D B1 */	bl makeDL__8J3DModelFv
/* 8025DB78 0025AAB8  7F C3 F3 78 */	mr r3, r30
/* 8025DB7C 0025AABC  4B E0 8C 79 */	bl lock__8J3DModelFv
/* 8025DB80 0025AAC0  80 01 00 54 */	lwz r0, 0x54(r1)
/* 8025DB84 0025AAC4  7F E3 FB 78 */	mr r3, r31
/* 8025DB88 0025AAC8  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 8025DB8C 0025AACC  83 C1 00 48 */	lwz r30, 0x48(r1)
/* 8025DB90 0025AAD0  83 A1 00 44 */	lwz r29, 0x44(r1)
/* 8025DB94 0025AAD4  7C 08 03 A6 */	mtlr r0
/* 8025DB98 0025AAD8  38 21 00 50 */	addi r1, r1, 0x50
/* 8025DB9C 0025AADC  4E 80 00 20 */	blr 

.global __dt__Q34Game6Kogane3MgrFv
__dt__Q34Game6Kogane3MgrFv:
/* 8025DBA0 0025AAE0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8025DBA4 0025AAE4  7C 08 02 A6 */	mflr r0
/* 8025DBA8 0025AAE8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8025DBAC 0025AAEC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8025DBB0 0025AAF0  7C 9F 23 78 */	mr r31, r4
/* 8025DBB4 0025AAF4  93 C1 00 08 */	stw r30, 8(r1)
/* 8025DBB8 0025AAF8  7C 7E 1B 79 */	or. r30, r3, r3
/* 8025DBBC 0025AAFC  41 82 00 78 */	beq lbl_8025DC34
/* 8025DBC0 0025AB00  3C 60 80 4C */	lis r3, __vt__Q34Game6Kogane3Mgr@ha
/* 8025DBC4 0025AB04  38 63 2F C0 */	addi r3, r3, __vt__Q34Game6Kogane3Mgr@l
/* 8025DBC8 0025AB08  90 7E 00 00 */	stw r3, 0(r30)
/* 8025DBCC 0025AB0C  38 03 00 38 */	addi r0, r3, 0x38
/* 8025DBD0 0025AB10  90 1E 00 04 */	stw r0, 4(r30)
/* 8025DBD4 0025AB14  41 82 00 50 */	beq lbl_8025DC24
/* 8025DBD8 0025AB18  3C 60 80 4B */	lis r3, __vt__Q24Game12EnemyMgrBase@ha
/* 8025DBDC 0025AB1C  38 63 F8 A0 */	addi r3, r3, __vt__Q24Game12EnemyMgrBase@l
/* 8025DBE0 0025AB20  90 7E 00 00 */	stw r3, 0(r30)
/* 8025DBE4 0025AB24  38 03 00 38 */	addi r0, r3, 0x38
/* 8025DBE8 0025AB28  90 1E 00 04 */	stw r0, 4(r30)
/* 8025DBEC 0025AB2C  41 82 00 38 */	beq lbl_8025DC24
/* 8025DBF0 0025AB30  3C 60 80 4B */	lis r3, __vt__Q24Game13IEnemyMgrBase@ha
/* 8025DBF4 0025AB34  34 1E 00 04 */	addic. r0, r30, 4
/* 8025DBF8 0025AB38  38 63 AC FC */	addi r3, r3, __vt__Q24Game13IEnemyMgrBase@l
/* 8025DBFC 0025AB3C  90 7E 00 00 */	stw r3, 0(r30)
/* 8025DC00 0025AB40  38 03 00 38 */	addi r0, r3, 0x38
/* 8025DC04 0025AB44  90 1E 00 04 */	stw r0, 4(r30)
/* 8025DC08 0025AB48  41 82 00 1C */	beq lbl_8025DC24
/* 8025DC0C 0025AB4C  3C 80 80 4B */	lis r4, __vt__16GenericContainer@ha
/* 8025DC10 0025AB50  38 7E 00 04 */	addi r3, r30, 4
/* 8025DC14 0025AB54  38 04 AC DC */	addi r0, r4, __vt__16GenericContainer@l
/* 8025DC18 0025AB58  38 80 00 00 */	li r4, 0
/* 8025DC1C 0025AB5C  90 1E 00 04 */	stw r0, 4(r30)
/* 8025DC20 0025AB60  48 1B 39 69 */	bl __dt__5CNodeFv
lbl_8025DC24:
/* 8025DC24 0025AB64  7F E0 07 35 */	extsh. r0, r31
/* 8025DC28 0025AB68  40 81 00 0C */	ble lbl_8025DC34
/* 8025DC2C 0025AB6C  7F C3 F3 78 */	mr r3, r30
/* 8025DC30 0025AB70  4B DC 64 85 */	bl __dl__FPv
lbl_8025DC34:
/* 8025DC34 0025AB74  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8025DC38 0025AB78  7F C3 F3 78 */	mr r3, r30
/* 8025DC3C 0025AB7C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8025DC40 0025AB80  83 C1 00 08 */	lwz r30, 8(r1)
/* 8025DC44 0025AB84  7C 08 03 A6 */	mtlr r0
/* 8025DC48 0025AB88  38 21 00 10 */	addi r1, r1, 0x10
/* 8025DC4C 0025AB8C  4E 80 00 20 */	blr 

.global getEnemyTypeID__Q34Game6Kogane3MgrFv
getEnemyTypeID__Q34Game6Kogane3MgrFv:
/* 8025DC50 0025AB90  38 60 00 09 */	li r3, 9
/* 8025DC54 0025AB94  4E 80 00 20 */	blr 

.global doLoadBmd__Q34Game6Kogane3MgrFPv
doLoadBmd__Q34Game6Kogane3MgrFPv:
/* 8025DC58 0025AB98  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8025DC5C 0025AB9C  7C 08 02 A6 */	mflr r0
/* 8025DC60 0025ABA0  3C A0 00 24 */	lis r5, 0x00240030@ha
/* 8025DC64 0025ABA4  7C 83 23 78 */	mr r3, r4
/* 8025DC68 0025ABA8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8025DC6C 0025ABAC  38 85 00 30 */	addi r4, r5, 0x00240030@l
/* 8025DC70 0025ABB0  4B E1 1C 25 */	bl load__22J3DModelLoaderDataBaseFPCvUl
/* 8025DC74 0025ABB4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8025DC78 0025ABB8  7C 08 03 A6 */	mtlr r0
/* 8025DC7C 0025ABBC  38 21 00 10 */	addi r1, r1, 0x10
/* 8025DC80 0025ABC0  4E 80 00 20 */	blr 

.global "@4@__dt__Q34Game6Kogane3MgrFv"
"@4@__dt__Q34Game6Kogane3MgrFv":
/* 8025DC84 0025ABC4  38 63 FF FC */	addi r3, r3, -4
/* 8025DC88 0025ABC8  4B FF FF 18 */	b __dt__Q34Game6Kogane3MgrFv
