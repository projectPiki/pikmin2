.include "macros.inc"
.section .rodata  # 0x804732E0 - 0x8049E220
.balign 0x8
.global lbl_80486C80
lbl_80486C80:
	.4byte 0x3234362D
	.4byte 0x54616E6B
	.4byte 0x4D677200
.global lbl_80486C8C
lbl_80486C8C:
	.4byte 0x8375835E
	.4byte 0x83688362
	.4byte 0x834E838A
	.4byte 0x837D836C
	.4byte 0x815B8357
	.4byte 0x83830000
	.4byte 0x54616E6B
	.4byte 0x4D67722E
	.4byte 0x63707000
	.asciz "P2Assert"
	.skip 3
	.4byte 0x6D61745F
	.4byte 0x646F6B6B
	.4byte 0x7572695F
	.4byte 0x6D61696E
	.4byte 0x00000000

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 0x8
.global __vt__Q34Game4Tank3Mgr
__vt__Q34Game4Tank3Mgr:
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
	.4byte "@4@__dt__Q34Game4Tank3MgrFv"
	.4byte getChildCount__5CNodeFv
	.4byte "@4@getObject__Q24Game12EnemyMgrBaseFPv"
	.4byte "@4@getNext__Q24Game12EnemyMgrBaseFPv"
	.4byte "@4@getStart__Q24Game12EnemyMgrBaseFv"
	.4byte "@4@getEnd__Q24Game12EnemyMgrBaseFv"
	.4byte __dt__Q34Game4Tank3MgrFv
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
	.4byte getEnemyTypeID__Q34Game4Tank3MgrFv
	.4byte createModel__Q34Game4Tank3MgrFv
	.4byte initParms__Q24Game12EnemyMgrBaseFv
	.4byte loadResource__Q24Game12EnemyMgrBaseFv
	.4byte initObjects__Q24Game12EnemyMgrBaseFv
	.4byte initStoneSetting__Q24Game12EnemyMgrBaseFv
	.4byte loadModelData__Q24Game12EnemyMgrBaseFP10JKRArchive
	.4byte loadModelData__Q34Game4Tank3MgrFv
	.4byte loadAnimData__Q34Game4Tank3MgrFv
	.4byte loadTexData__Q24Game12EnemyMgrBaseFv
	.4byte doLoadBmd__Q24Game12EnemyMgrBaseFPv
	.4byte doLoadBdl__Q24Game12EnemyMgrBaseFPv
	.4byte initGenerator__Q24Game12EnemyMgrBaseFv
	.4byte 0
	.4byte 0

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global __ct__Q34Game4Tank3MgrFiUc
__ct__Q34Game4Tank3MgrFiUc:
/* 80275A18 00272958  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80275A1C 0027295C  7C 08 02 A6 */	mflr r0
/* 80275A20 00272960  90 01 00 14 */	stw r0, 0x14(r1)
/* 80275A24 00272964  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80275A28 00272968  7C 7F 1B 78 */	mr r31, r3
/* 80275A2C 0027296C  4B EB 92 69 */	bl __ct__Q24Game12EnemyMgrBaseFiUc
/* 80275A30 00272970  3C 60 80 4C */	lis r3, __vt__Q34Game4Tank3Mgr@ha
/* 80275A34 00272974  3C 80 80 48 */	lis r4, lbl_80486C8C@ha
/* 80275A38 00272978  38 A3 6A 68 */	addi r5, r3, __vt__Q34Game4Tank3Mgr@l
/* 80275A3C 0027297C  7F E3 FB 78 */	mr r3, r31
/* 80275A40 00272980  90 BF 00 00 */	stw r5, 0(r31)
/* 80275A44 00272984  38 A5 00 38 */	addi r5, r5, 0x38
/* 80275A48 00272988  38 04 6C 8C */	addi r0, r4, lbl_80486C8C@l
/* 80275A4C 0027298C  90 BF 00 04 */	stw r5, 4(r31)
/* 80275A50 00272990  90 1F 00 18 */	stw r0, 0x18(r31)
/* 80275A54 00272994  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80275A58 00272998  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80275A5C 0027299C  7C 08 03 A6 */	mtlr r0
/* 80275A60 002729A0  38 21 00 10 */	addi r1, r1, 0x10
/* 80275A64 002729A4  4E 80 00 20 */	blr 

.global loadModelData__Q34Game4Tank3MgrFv
loadModelData__Q34Game4Tank3MgrFv:
/* 80275A68 002729A8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80275A6C 002729AC  7C 08 02 A6 */	mflr r0
/* 80275A70 002729B0  90 01 00 24 */	stw r0, 0x24(r1)
/* 80275A74 002729B4  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80275A78 002729B8  3B E1 00 08 */	addi r31, r1, 8
/* 80275A7C 002729BC  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80275A80 002729C0  3B C0 00 00 */	li r30, 0
/* 80275A84 002729C4  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80275A88 002729C8  7C 7D 1B 78 */	mr r29, r3
/* 80275A8C 002729CC  80 82 CF 78 */	lwz r4, lbl_8051B2D8@sda21(r2)
/* 80275A90 002729D0  80 02 CF 7C */	lwz r0, lbl_8051B2DC@sda21(r2)
/* 80275A94 002729D4  90 81 00 08 */	stw r4, 8(r1)
/* 80275A98 002729D8  90 01 00 0C */	stw r0, 0xc(r1)
lbl_80275A9C:
/* 80275A9C 002729DC  80 6D 91 E0 */	lwz r3, generalEnemyMgr__4Game@sda21(r13)
/* 80275AA0 002729E0  80 9F 00 00 */	lwz r4, 0(r31)
/* 80275AA4 002729E4  4B E9 82 01 */	bl getEnemyMgr__Q24Game15GeneralEnemyMgrFi
/* 80275AA8 002729E8  28 03 00 00 */	cmplwi r3, 0
/* 80275AAC 002729EC  41 82 00 24 */	beq lbl_80275AD0
/* 80275AB0 002729F0  81 83 00 00 */	lwz r12, 0(r3)
/* 80275AB4 002729F4  81 8C 00 74 */	lwz r12, 0x74(r12)
/* 80275AB8 002729F8  7D 89 03 A6 */	mtctr r12
/* 80275ABC 002729FC  4E 80 04 21 */	bctrl 
/* 80275AC0 00272A00  28 03 00 00 */	cmplwi r3, 0
/* 80275AC4 00272A04  41 82 00 0C */	beq lbl_80275AD0
/* 80275AC8 00272A08  90 7D 00 1C */	stw r3, 0x1c(r29)
/* 80275ACC 00272A0C  48 00 00 1C */	b lbl_80275AE8
lbl_80275AD0:
/* 80275AD0 00272A10  3B DE 00 01 */	addi r30, r30, 1
/* 80275AD4 00272A14  3B FF 00 04 */	addi r31, r31, 4
/* 80275AD8 00272A18  2C 1E 00 02 */	cmpwi r30, 2
/* 80275ADC 00272A1C  41 80 FF C0 */	blt lbl_80275A9C
/* 80275AE0 00272A20  7F A3 EB 78 */	mr r3, r29
/* 80275AE4 00272A24  4B EB A6 29 */	bl loadModelData__Q24Game12EnemyMgrBaseFv
lbl_80275AE8:
/* 80275AE8 00272A28  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80275AEC 00272A2C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80275AF0 00272A30  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80275AF4 00272A34  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80275AF8 00272A38  7C 08 03 A6 */	mtlr r0
/* 80275AFC 00272A3C  38 21 00 20 */	addi r1, r1, 0x20
/* 80275B00 00272A40  4E 80 00 20 */	blr 

.global loadAnimData__Q34Game4Tank3MgrFv
loadAnimData__Q34Game4Tank3MgrFv:
/* 80275B04 00272A44  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80275B08 00272A48  7C 08 02 A6 */	mflr r0
/* 80275B0C 00272A4C  90 01 00 24 */	stw r0, 0x24(r1)
/* 80275B10 00272A50  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80275B14 00272A54  3B E1 00 08 */	addi r31, r1, 8
/* 80275B18 00272A58  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80275B1C 00272A5C  3B C0 00 00 */	li r30, 0
/* 80275B20 00272A60  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80275B24 00272A64  7C 7D 1B 78 */	mr r29, r3
/* 80275B28 00272A68  80 82 CF 80 */	lwz r4, lbl_8051B2E0@sda21(r2)
/* 80275B2C 00272A6C  80 02 CF 84 */	lwz r0, lbl_8051B2E4@sda21(r2)
/* 80275B30 00272A70  90 81 00 08 */	stw r4, 8(r1)
/* 80275B34 00272A74  90 01 00 0C */	stw r0, 0xc(r1)
lbl_80275B38:
/* 80275B38 00272A78  80 6D 91 E0 */	lwz r3, generalEnemyMgr__4Game@sda21(r13)
/* 80275B3C 00272A7C  80 9F 00 00 */	lwz r4, 0(r31)
/* 80275B40 00272A80  4B E9 81 65 */	bl getEnemyMgr__Q24Game15GeneralEnemyMgrFi
/* 80275B44 00272A84  28 03 00 00 */	cmplwi r3, 0
/* 80275B48 00272A88  41 82 00 18 */	beq lbl_80275B60
/* 80275B4C 00272A8C  80 03 00 20 */	lwz r0, 0x20(r3)
/* 80275B50 00272A90  28 00 00 00 */	cmplwi r0, 0
/* 80275B54 00272A94  41 82 00 0C */	beq lbl_80275B60
/* 80275B58 00272A98  90 1D 00 20 */	stw r0, 0x20(r29)
/* 80275B5C 00272A9C  48 00 00 1C */	b lbl_80275B78
lbl_80275B60:
/* 80275B60 00272AA0  3B DE 00 01 */	addi r30, r30, 1
/* 80275B64 00272AA4  3B FF 00 04 */	addi r31, r31, 4
/* 80275B68 00272AA8  2C 1E 00 02 */	cmpwi r30, 2
/* 80275B6C 00272AAC  41 80 FF CC */	blt lbl_80275B38
/* 80275B70 00272AB0  7F A3 EB 78 */	mr r3, r29
/* 80275B74 00272AB4  4B EB A6 59 */	bl loadAnimData__Q24Game12EnemyMgrBaseFv
lbl_80275B78:
/* 80275B78 00272AB8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80275B7C 00272ABC  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80275B80 00272AC0  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80275B84 00272AC4  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80275B88 00272AC8  7C 08 03 A6 */	mtlr r0
/* 80275B8C 00272ACC  38 21 00 20 */	addi r1, r1, 0x20
/* 80275B90 00272AD0  4E 80 00 20 */	blr 

.global createModel__Q34Game4Tank3MgrFv
createModel__Q34Game4Tank3MgrFv:
/* 80275B94 00272AD4  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 80275B98 00272AD8  7C 08 02 A6 */	mflr r0
/* 80275B9C 00272ADC  3C 80 80 48 */	lis r4, lbl_80486C80@ha
/* 80275BA0 00272AE0  90 01 00 54 */	stw r0, 0x54(r1)
/* 80275BA4 00272AE4  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 80275BA8 00272AE8  3B E4 6C 80 */	addi r31, r4, lbl_80486C80@l
/* 80275BAC 00272AEC  93 C1 00 48 */	stw r30, 0x48(r1)
/* 80275BB0 00272AF0  93 A1 00 44 */	stw r29, 0x44(r1)
/* 80275BB4 00272AF4  93 81 00 40 */	stw r28, 0x40(r1)
/* 80275BB8 00272AF8  7C 7C 1B 78 */	mr r28, r3
/* 80275BBC 00272AFC  38 60 00 14 */	li r3, 0x14
/* 80275BC0 00272B00  4B DA E2 E5 */	bl __nw__FUl
/* 80275BC4 00272B04  7C 7E 1B 79 */	or. r30, r3, r3
/* 80275BC8 00272B08  41 82 00 18 */	beq lbl_80275BE0
/* 80275BCC 00272B0C  80 9C 00 1C */	lwz r4, 0x1c(r28)
/* 80275BD0 00272B10  3C A0 00 08 */	lis r5, 8
/* 80275BD4 00272B14  88 DC 00 24 */	lbz r6, 0x24(r28)
/* 80275BD8 00272B18  48 1C 86 01 */	bl __ct__Q28SysShape5ModelFP12J3DModelDataUlUl
/* 80275BDC 00272B1C  7C 7E 1B 78 */	mr r30, r3
lbl_80275BE0:
/* 80275BE0 00272B20  28 1E 00 00 */	cmplwi r30, 0
/* 80275BE4 00272B24  40 82 00 18 */	bne lbl_80275BFC
/* 80275BE8 00272B28  38 7F 00 24 */	addi r3, r31, 0x24
/* 80275BEC 00272B2C  38 BF 00 30 */	addi r5, r31, 0x30
/* 80275BF0 00272B30  38 80 00 82 */	li r4, 0x82
/* 80275BF4 00272B34  4C C6 31 82 */	crclr 6
/* 80275BF8 00272B38  4B DB 4A 49 */	bl panic_f__12JUTExceptionFPCciPCce
lbl_80275BFC:
/* 80275BFC 00272B3C  3B A0 00 00 */	li r29, 0
/* 80275C00 00272B40  48 00 00 40 */	b lbl_80275C40
lbl_80275C04:
/* 80275C04 00272B44  80 64 00 64 */	lwz r3, 0x64(r4)
/* 80275C08 00272B48  7F A4 EB 78 */	mr r4, r29
/* 80275C0C 00272B4C  4B DB 92 11 */	bl getName__10JUTNameTabCFUs
/* 80275C10 00272B50  38 9F 00 3C */	addi r4, r31, 0x3c
/* 80275C14 00272B54  4B E5 4A AD */	bl strcmp
/* 80275C18 00272B58  2C 03 00 00 */	cmpwi r3, 0
/* 80275C1C 00272B5C  40 82 00 20 */	bne lbl_80275C3C
/* 80275C20 00272B60  80 9E 00 08 */	lwz r4, 8(r30)
/* 80275C24 00272B64  57 A3 32 B2 */	rlwinm r3, r29, 6, 0xa, 0x19
/* 80275C28 00272B68  38 03 00 2C */	addi r0, r3, 0x2c
/* 80275C2C 00272B6C  80 64 00 C0 */	lwz r3, 0xc0(r4)
/* 80275C30 00272B70  3C 80 04 02 */	lis r4, 0x402
/* 80275C34 00272B74  7C 63 00 2E */	lwzx r3, r3, r0
/* 80275C38 00272B78  4B DE A6 A1 */	bl newDifferedDisplayList__14J3DShapePacketFUl
lbl_80275C3C:
/* 80275C3C 00272B7C  3B BD 00 01 */	addi r29, r29, 1
lbl_80275C40:
/* 80275C40 00272B80  80 9C 00 1C */	lwz r4, 0x1c(r28)
/* 80275C44 00272B84  57 A0 04 3E */	clrlwi r0, r29, 0x10
/* 80275C48 00272B88  A0 64 00 5C */	lhz r3, 0x5c(r4)
/* 80275C4C 00272B8C  7C 00 18 40 */	cmplw r0, r3
/* 80275C50 00272B90  41 80 FF B4 */	blt lbl_80275C04
/* 80275C54 00272B94  38 61 00 08 */	addi r3, r1, 8
/* 80275C58 00272B98  4B E7 46 49 */	bl PSMTXIdentity
/* 80275C5C 00272B9C  3C 80 80 51 */	lis r4, j3dSys@ha
/* 80275C60 00272BA0  38 61 00 08 */	addi r3, r1, 8
/* 80275C64 00272BA4  38 84 F2 30 */	addi r4, r4, j3dSys@l
/* 80275C68 00272BA8  4B E7 46 65 */	bl PSMTXCopy
/* 80275C6C 00272BAC  83 FE 00 08 */	lwz r31, 8(r30)
/* 80275C70 00272BB0  7F E3 FB 78 */	mr r3, r31
/* 80275C74 00272BB4  81 9F 00 00 */	lwz r12, 0(r31)
/* 80275C78 00272BB8  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80275C7C 00272BBC  7D 89 03 A6 */	mtctr r12
/* 80275C80 00272BC0  4E 80 04 21 */	bctrl 
/* 80275C84 00272BC4  7F E3 FB 78 */	mr r3, r31
/* 80275C88 00272BC8  81 9F 00 00 */	lwz r12, 0(r31)
/* 80275C8C 00272BCC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80275C90 00272BD0  7D 89 03 A6 */	mtctr r12
/* 80275C94 00272BD4  4E 80 04 21 */	bctrl 
/* 80275C98 00272BD8  7F E3 FB 78 */	mr r3, r31
/* 80275C9C 00272BDC  4B DF 0C 89 */	bl makeDL__8J3DModelFv
/* 80275CA0 00272BE0  7F E3 FB 78 */	mr r3, r31
/* 80275CA4 00272BE4  4B DF 0B 51 */	bl lock__8J3DModelFv
/* 80275CA8 00272BE8  80 01 00 54 */	lwz r0, 0x54(r1)
/* 80275CAC 00272BEC  7F C3 F3 78 */	mr r3, r30
/* 80275CB0 00272BF0  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 80275CB4 00272BF4  83 C1 00 48 */	lwz r30, 0x48(r1)
/* 80275CB8 00272BF8  83 A1 00 44 */	lwz r29, 0x44(r1)
/* 80275CBC 00272BFC  83 81 00 40 */	lwz r28, 0x40(r1)
/* 80275CC0 00272C00  7C 08 03 A6 */	mtlr r0
/* 80275CC4 00272C04  38 21 00 50 */	addi r1, r1, 0x50
/* 80275CC8 00272C08  4E 80 00 20 */	blr 

.global __dt__Q34Game4Tank3MgrFv
__dt__Q34Game4Tank3MgrFv:
/* 80275CCC 00272C0C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80275CD0 00272C10  7C 08 02 A6 */	mflr r0
/* 80275CD4 00272C14  90 01 00 14 */	stw r0, 0x14(r1)
/* 80275CD8 00272C18  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80275CDC 00272C1C  7C 9F 23 78 */	mr r31, r4
/* 80275CE0 00272C20  93 C1 00 08 */	stw r30, 8(r1)
/* 80275CE4 00272C24  7C 7E 1B 79 */	or. r30, r3, r3
/* 80275CE8 00272C28  41 82 00 78 */	beq lbl_80275D60
/* 80275CEC 00272C2C  3C 60 80 4C */	lis r3, __vt__Q34Game4Tank3Mgr@ha
/* 80275CF0 00272C30  38 63 6A 68 */	addi r3, r3, __vt__Q34Game4Tank3Mgr@l
/* 80275CF4 00272C34  90 7E 00 00 */	stw r3, 0(r30)
/* 80275CF8 00272C38  38 03 00 38 */	addi r0, r3, 0x38
/* 80275CFC 00272C3C  90 1E 00 04 */	stw r0, 4(r30)
/* 80275D00 00272C40  41 82 00 50 */	beq lbl_80275D50
/* 80275D04 00272C44  3C 60 80 4B */	lis r3, __vt__Q24Game12EnemyMgrBase@ha
/* 80275D08 00272C48  38 63 F8 A0 */	addi r3, r3, __vt__Q24Game12EnemyMgrBase@l
/* 80275D0C 00272C4C  90 7E 00 00 */	stw r3, 0(r30)
/* 80275D10 00272C50  38 03 00 38 */	addi r0, r3, 0x38
/* 80275D14 00272C54  90 1E 00 04 */	stw r0, 4(r30)
/* 80275D18 00272C58  41 82 00 38 */	beq lbl_80275D50
/* 80275D1C 00272C5C  3C 60 80 4B */	lis r3, __vt__Q24Game13IEnemyMgrBase@ha
/* 80275D20 00272C60  34 1E 00 04 */	addic. r0, r30, 4
/* 80275D24 00272C64  38 63 AC FC */	addi r3, r3, __vt__Q24Game13IEnemyMgrBase@l
/* 80275D28 00272C68  90 7E 00 00 */	stw r3, 0(r30)
/* 80275D2C 00272C6C  38 03 00 38 */	addi r0, r3, 0x38
/* 80275D30 00272C70  90 1E 00 04 */	stw r0, 4(r30)
/* 80275D34 00272C74  41 82 00 1C */	beq lbl_80275D50
/* 80275D38 00272C78  3C 80 80 4B */	lis r4, __vt__16GenericContainer@ha
/* 80275D3C 00272C7C  38 7E 00 04 */	addi r3, r30, 4
/* 80275D40 00272C80  38 04 AC DC */	addi r0, r4, __vt__16GenericContainer@l
/* 80275D44 00272C84  38 80 00 00 */	li r4, 0
/* 80275D48 00272C88  90 1E 00 04 */	stw r0, 4(r30)
/* 80275D4C 00272C8C  48 19 B8 3D */	bl __dt__5CNodeFv
lbl_80275D50:
/* 80275D50 00272C90  7F E0 07 35 */	extsh. r0, r31
/* 80275D54 00272C94  40 81 00 0C */	ble lbl_80275D60
/* 80275D58 00272C98  7F C3 F3 78 */	mr r3, r30
/* 80275D5C 00272C9C  4B DA E3 59 */	bl __dl__FPv
lbl_80275D60:
/* 80275D60 00272CA0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80275D64 00272CA4  7F C3 F3 78 */	mr r3, r30
/* 80275D68 00272CA8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80275D6C 00272CAC  83 C1 00 08 */	lwz r30, 8(r1)
/* 80275D70 00272CB0  7C 08 03 A6 */	mtlr r0
/* 80275D74 00272CB4  38 21 00 10 */	addi r1, r1, 0x10
/* 80275D78 00272CB8  4E 80 00 20 */	blr 

.global getEnemyTypeID__Q34Game4Tank3MgrFv
getEnemyTypeID__Q34Game4Tank3MgrFv:
/* 80275D7C 00272CBC  38 60 00 18 */	li r3, 0x18
/* 80275D80 00272CC0  4E 80 00 20 */	blr 

.global "@4@__dt__Q34Game4Tank3MgrFv"
"@4@__dt__Q34Game4Tank3MgrFv":
/* 80275D84 00272CC4  38 63 FF FC */	addi r3, r3, -4
/* 80275D88 00272CC8  4B FF FF 44 */	b __dt__Q34Game4Tank3MgrFv
