.include "macros.inc"
.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
.global lbl_8048A338
lbl_8048A338:
	.4byte 0x3234362D
	.4byte 0x4F74616B
	.4byte 0x61726142
	.4byte 0x6173654D
	.4byte 0x67720000
.global lbl_8048A34C
lbl_8048A34C:
	.4byte 0x8349835E
	.4byte 0x834A8389
	.4byte 0x83808356
	.4byte 0x837D836C
	.4byte 0x815B8357
	.4byte 0x83830000
.global lbl_8048A364
lbl_8048A364:
	.4byte 0x0000003B
	.4byte 0x0000003C
	.4byte 0x0000003D
	.4byte 0x0000003E
	.4byte 0x0000005D
.global lbl_8048A378
lbl_8048A378:
	.4byte 0x0000003B
	.4byte 0x0000003C
	.4byte 0x0000003D
	.4byte 0x0000003E
	.4byte 0x0000005D
	.4byte 0x4F74616B
	.4byte 0x61726142
	.4byte 0x6173654D
	.4byte 0x67722E63
	.4byte 0x70700000
	.asciz "P2Assert"
	.skip 3
	.4byte 0x6D61745F
	.4byte 0x626F6479
	.4byte 0x00000000

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.global __vt__Q34Game11OtakaraBase3Mgr
__vt__Q34Game11OtakaraBase3Mgr:
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
	.4byte "@4@__dt__Q34Game11OtakaraBase3MgrFv"
	.4byte getChildCount__5CNodeFv
	.4byte "@4@getObject__Q24Game12EnemyMgrBaseFPv"
	.4byte "@4@getNext__Q24Game12EnemyMgrBaseFPv"
	.4byte "@4@getStart__Q24Game12EnemyMgrBaseFv"
	.4byte "@4@getEnd__Q24Game12EnemyMgrBaseFv"
	.4byte __dt__Q34Game11OtakaraBase3MgrFv
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
	.4byte getEnemyTypeID__Q34Game11OtakaraBase3MgrFv
	.4byte createModel__Q34Game11OtakaraBase3MgrFv
	.4byte initParms__Q24Game12EnemyMgrBaseFv
	.4byte loadResource__Q24Game12EnemyMgrBaseFv
	.4byte initObjects__Q24Game12EnemyMgrBaseFv
	.4byte initStoneSetting__Q24Game12EnemyMgrBaseFv
	.4byte loadModelData__Q24Game12EnemyMgrBaseFP10JKRArchive
	.4byte loadModelData__Q34Game11OtakaraBase3MgrFv
	.4byte loadAnimData__Q34Game11OtakaraBase3MgrFv
	.4byte loadTexData__Q24Game12EnemyMgrBaseFv
	.4byte doLoadBmd__Q24Game12EnemyMgrBaseFPv
	.4byte doLoadBdl__Q24Game12EnemyMgrBaseFPv
	.4byte initGenerator__Q24Game12EnemyMgrBaseFv
	.4byte 0
	.4byte 0

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global __ct__Q34Game11OtakaraBase3MgrFiUc
__ct__Q34Game11OtakaraBase3MgrFiUc:
/* 802B5E98 002B2DD8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802B5E9C 002B2DDC  7C 08 02 A6 */	mflr r0
/* 802B5EA0 002B2DE0  90 01 00 14 */	stw r0, 0x14(r1)
/* 802B5EA4 002B2DE4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802B5EA8 002B2DE8  7C 7F 1B 78 */	mr r31, r3
/* 802B5EAC 002B2DEC  4B E7 8D E9 */	bl __ct__Q24Game12EnemyMgrBaseFiUc
/* 802B5EB0 002B2DF0  3C 60 80 4D */	lis r3, __vt__Q34Game11OtakaraBase3Mgr@ha
/* 802B5EB4 002B2DF4  3C 80 80 49 */	lis r4, lbl_8048A34C@ha
/* 802B5EB8 002B2DF8  38 A3 EF 90 */	addi r5, r3, __vt__Q34Game11OtakaraBase3Mgr@l
/* 802B5EBC 002B2DFC  7F E3 FB 78 */	mr r3, r31
/* 802B5EC0 002B2E00  90 BF 00 00 */	stw r5, 0(r31)
/* 802B5EC4 002B2E04  38 A5 00 38 */	addi r5, r5, 0x38
/* 802B5EC8 002B2E08  38 04 A3 4C */	addi r0, r4, lbl_8048A34C@l
/* 802B5ECC 002B2E0C  90 BF 00 04 */	stw r5, 4(r31)
/* 802B5ED0 002B2E10  90 1F 00 18 */	stw r0, 0x18(r31)
/* 802B5ED4 002B2E14  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802B5ED8 002B2E18  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802B5EDC 002B2E1C  7C 08 03 A6 */	mtlr r0
/* 802B5EE0 002B2E20  38 21 00 10 */	addi r1, r1, 0x10
/* 802B5EE4 002B2E24  4E 80 00 20 */	blr 

.global loadModelData__Q34Game11OtakaraBase3MgrFv
loadModelData__Q34Game11OtakaraBase3MgrFv:
/* 802B5EE8 002B2E28  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 802B5EEC 002B2E2C  7C 08 02 A6 */	mflr r0
/* 802B5EF0 002B2E30  3C 80 80 49 */	lis r4, lbl_8048A364@ha
/* 802B5EF4 002B2E34  90 01 00 34 */	stw r0, 0x34(r1)
/* 802B5EF8 002B2E38  38 E4 A3 64 */	addi r7, r4, lbl_8048A364@l
/* 802B5EFC 002B2E3C  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 802B5F00 002B2E40  3B E1 00 08 */	addi r31, r1, 8
/* 802B5F04 002B2E44  93 C1 00 28 */	stw r30, 0x28(r1)
/* 802B5F08 002B2E48  3B C0 00 00 */	li r30, 0
/* 802B5F0C 002B2E4C  93 A1 00 24 */	stw r29, 0x24(r1)
/* 802B5F10 002B2E50  7C 7D 1B 78 */	mr r29, r3
/* 802B5F14 002B2E54  80 C7 00 00 */	lwz r6, 0(r7)
/* 802B5F18 002B2E58  80 A7 00 04 */	lwz r5, 4(r7)
/* 802B5F1C 002B2E5C  80 87 00 08 */	lwz r4, 8(r7)
/* 802B5F20 002B2E60  80 67 00 0C */	lwz r3, 0xc(r7)
/* 802B5F24 002B2E64  80 07 00 10 */	lwz r0, 0x10(r7)
/* 802B5F28 002B2E68  90 C1 00 08 */	stw r6, 8(r1)
/* 802B5F2C 002B2E6C  90 A1 00 0C */	stw r5, 0xc(r1)
/* 802B5F30 002B2E70  90 81 00 10 */	stw r4, 0x10(r1)
/* 802B5F34 002B2E74  90 61 00 14 */	stw r3, 0x14(r1)
/* 802B5F38 002B2E78  90 01 00 18 */	stw r0, 0x18(r1)
lbl_802B5F3C:
/* 802B5F3C 002B2E7C  80 6D 91 E0 */	lwz r3, generalEnemyMgr__4Game@sda21(r13)
/* 802B5F40 002B2E80  80 9F 00 00 */	lwz r4, 0(r31)
/* 802B5F44 002B2E84  4B E5 7D 61 */	bl getEnemyMgr__Q24Game15GeneralEnemyMgrFi
/* 802B5F48 002B2E88  28 03 00 00 */	cmplwi r3, 0
/* 802B5F4C 002B2E8C  41 82 00 24 */	beq lbl_802B5F70
/* 802B5F50 002B2E90  81 83 00 00 */	lwz r12, 0(r3)
/* 802B5F54 002B2E94  81 8C 00 74 */	lwz r12, 0x74(r12)
/* 802B5F58 002B2E98  7D 89 03 A6 */	mtctr r12
/* 802B5F5C 002B2E9C  4E 80 04 21 */	bctrl 
/* 802B5F60 002B2EA0  28 03 00 00 */	cmplwi r3, 0
/* 802B5F64 002B2EA4  41 82 00 0C */	beq lbl_802B5F70
/* 802B5F68 002B2EA8  90 7D 00 1C */	stw r3, 0x1c(r29)
/* 802B5F6C 002B2EAC  48 00 00 1C */	b lbl_802B5F88
lbl_802B5F70:
/* 802B5F70 002B2EB0  3B DE 00 01 */	addi r30, r30, 1
/* 802B5F74 002B2EB4  3B FF 00 04 */	addi r31, r31, 4
/* 802B5F78 002B2EB8  2C 1E 00 05 */	cmpwi r30, 5
/* 802B5F7C 002B2EBC  41 80 FF C0 */	blt lbl_802B5F3C
/* 802B5F80 002B2EC0  7F A3 EB 78 */	mr r3, r29
/* 802B5F84 002B2EC4  4B E7 A1 89 */	bl loadModelData__Q24Game12EnemyMgrBaseFv
lbl_802B5F88:
/* 802B5F88 002B2EC8  80 01 00 34 */	lwz r0, 0x34(r1)
/* 802B5F8C 002B2ECC  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 802B5F90 002B2ED0  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 802B5F94 002B2ED4  83 A1 00 24 */	lwz r29, 0x24(r1)
/* 802B5F98 002B2ED8  7C 08 03 A6 */	mtlr r0
/* 802B5F9C 002B2EDC  38 21 00 30 */	addi r1, r1, 0x30
/* 802B5FA0 002B2EE0  4E 80 00 20 */	blr 

.global loadAnimData__Q34Game11OtakaraBase3MgrFv
loadAnimData__Q34Game11OtakaraBase3MgrFv:
/* 802B5FA4 002B2EE4  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 802B5FA8 002B2EE8  7C 08 02 A6 */	mflr r0
/* 802B5FAC 002B2EEC  3C 80 80 49 */	lis r4, lbl_8048A378@ha
/* 802B5FB0 002B2EF0  90 01 00 34 */	stw r0, 0x34(r1)
/* 802B5FB4 002B2EF4  38 E4 A3 78 */	addi r7, r4, lbl_8048A378@l
/* 802B5FB8 002B2EF8  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 802B5FBC 002B2EFC  3B E1 00 08 */	addi r31, r1, 8
/* 802B5FC0 002B2F00  93 C1 00 28 */	stw r30, 0x28(r1)
/* 802B5FC4 002B2F04  3B C0 00 00 */	li r30, 0
/* 802B5FC8 002B2F08  93 A1 00 24 */	stw r29, 0x24(r1)
/* 802B5FCC 002B2F0C  7C 7D 1B 78 */	mr r29, r3
/* 802B5FD0 002B2F10  80 C7 00 00 */	lwz r6, 0(r7)
/* 802B5FD4 002B2F14  80 A7 00 04 */	lwz r5, 4(r7)
/* 802B5FD8 002B2F18  80 87 00 08 */	lwz r4, 8(r7)
/* 802B5FDC 002B2F1C  80 67 00 0C */	lwz r3, 0xc(r7)
/* 802B5FE0 002B2F20  80 07 00 10 */	lwz r0, 0x10(r7)
/* 802B5FE4 002B2F24  90 C1 00 08 */	stw r6, 8(r1)
/* 802B5FE8 002B2F28  90 A1 00 0C */	stw r5, 0xc(r1)
/* 802B5FEC 002B2F2C  90 81 00 10 */	stw r4, 0x10(r1)
/* 802B5FF0 002B2F30  90 61 00 14 */	stw r3, 0x14(r1)
/* 802B5FF4 002B2F34  90 01 00 18 */	stw r0, 0x18(r1)
lbl_802B5FF8:
/* 802B5FF8 002B2F38  80 6D 91 E0 */	lwz r3, generalEnemyMgr__4Game@sda21(r13)
/* 802B5FFC 002B2F3C  80 9F 00 00 */	lwz r4, 0(r31)
/* 802B6000 002B2F40  4B E5 7C A5 */	bl getEnemyMgr__Q24Game15GeneralEnemyMgrFi
/* 802B6004 002B2F44  28 03 00 00 */	cmplwi r3, 0
/* 802B6008 002B2F48  41 82 00 18 */	beq lbl_802B6020
/* 802B600C 002B2F4C  80 03 00 20 */	lwz r0, 0x20(r3)
/* 802B6010 002B2F50  28 00 00 00 */	cmplwi r0, 0
/* 802B6014 002B2F54  41 82 00 0C */	beq lbl_802B6020
/* 802B6018 002B2F58  90 1D 00 20 */	stw r0, 0x20(r29)
/* 802B601C 002B2F5C  48 00 00 1C */	b lbl_802B6038
lbl_802B6020:
/* 802B6020 002B2F60  3B DE 00 01 */	addi r30, r30, 1
/* 802B6024 002B2F64  3B FF 00 04 */	addi r31, r31, 4
/* 802B6028 002B2F68  2C 1E 00 05 */	cmpwi r30, 5
/* 802B602C 002B2F6C  41 80 FF CC */	blt lbl_802B5FF8
/* 802B6030 002B2F70  7F A3 EB 78 */	mr r3, r29
/* 802B6034 002B2F74  4B E7 A1 99 */	bl loadAnimData__Q24Game12EnemyMgrBaseFv
lbl_802B6038:
/* 802B6038 002B2F78  80 01 00 34 */	lwz r0, 0x34(r1)
/* 802B603C 002B2F7C  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 802B6040 002B2F80  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 802B6044 002B2F84  83 A1 00 24 */	lwz r29, 0x24(r1)
/* 802B6048 002B2F88  7C 08 03 A6 */	mtlr r0
/* 802B604C 002B2F8C  38 21 00 30 */	addi r1, r1, 0x30
/* 802B6050 002B2F90  4E 80 00 20 */	blr 

.global createModel__Q34Game11OtakaraBase3MgrFv
createModel__Q34Game11OtakaraBase3MgrFv:
/* 802B6054 002B2F94  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 802B6058 002B2F98  7C 08 02 A6 */	mflr r0
/* 802B605C 002B2F9C  3C 80 80 49 */	lis r4, lbl_8048A338@ha
/* 802B6060 002B2FA0  90 01 00 54 */	stw r0, 0x54(r1)
/* 802B6064 002B2FA4  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 802B6068 002B2FA8  3B E4 A3 38 */	addi r31, r4, lbl_8048A338@l
/* 802B606C 002B2FAC  93 C1 00 48 */	stw r30, 0x48(r1)
/* 802B6070 002B2FB0  93 A1 00 44 */	stw r29, 0x44(r1)
/* 802B6074 002B2FB4  93 81 00 40 */	stw r28, 0x40(r1)
/* 802B6078 002B2FB8  7C 7C 1B 78 */	mr r28, r3
/* 802B607C 002B2FBC  38 60 00 14 */	li r3, 0x14
/* 802B6080 002B2FC0  4B D6 DE 25 */	bl __nw__FUl
/* 802B6084 002B2FC4  7C 7E 1B 79 */	or. r30, r3, r3
/* 802B6088 002B2FC8  41 82 00 18 */	beq lbl_802B60A0
/* 802B608C 002B2FCC  80 9C 00 1C */	lwz r4, 0x1c(r28)
/* 802B6090 002B2FD0  3C A0 00 08 */	lis r5, 8
/* 802B6094 002B2FD4  88 DC 00 24 */	lbz r6, 0x24(r28)
/* 802B6098 002B2FD8  48 18 81 41 */	bl __ct__Q28SysShape5ModelFP12J3DModelDataUlUl
/* 802B609C 002B2FDC  7C 7E 1B 78 */	mr r30, r3
lbl_802B60A0:
/* 802B60A0 002B2FE0  28 1E 00 00 */	cmplwi r30, 0
/* 802B60A4 002B2FE4  40 82 00 18 */	bne lbl_802B60BC
/* 802B60A8 002B2FE8  38 7F 00 54 */	addi r3, r31, 0x54
/* 802B60AC 002B2FEC  38 BF 00 68 */	addi r5, r31, 0x68
/* 802B60B0 002B2FF0  38 80 00 88 */	li r4, 0x88
/* 802B60B4 002B2FF4  4C C6 31 82 */	crclr 6
/* 802B60B8 002B2FF8  4B D7 45 89 */	bl panic_f__12JUTExceptionFPCciPCce
lbl_802B60BC:
/* 802B60BC 002B2FFC  3B A0 00 00 */	li r29, 0
/* 802B60C0 002B3000  48 00 00 40 */	b lbl_802B6100
lbl_802B60C4:
/* 802B60C4 002B3004  80 64 00 64 */	lwz r3, 0x64(r4)
/* 802B60C8 002B3008  7F A4 EB 78 */	mr r4, r29
/* 802B60CC 002B300C  4B D7 8D 51 */	bl getName__10JUTNameTabCFUs
/* 802B60D0 002B3010  38 9F 00 74 */	addi r4, r31, 0x74
/* 802B60D4 002B3014  4B E1 45 ED */	bl strcmp
/* 802B60D8 002B3018  2C 03 00 00 */	cmpwi r3, 0
/* 802B60DC 002B301C  40 82 00 20 */	bne lbl_802B60FC
/* 802B60E0 002B3020  80 9E 00 08 */	lwz r4, 8(r30)
/* 802B60E4 002B3024  57 A3 32 B2 */	rlwinm r3, r29, 6, 0xa, 0x19
/* 802B60E8 002B3028  38 03 00 2C */	addi r0, r3, 0x2c
/* 802B60EC 002B302C  80 64 00 C0 */	lwz r3, 0xc0(r4)
/* 802B60F0 002B3030  3C 80 04 02 */	lis r4, 0x402
/* 802B60F4 002B3034  7C 63 00 2E */	lwzx r3, r3, r0
/* 802B60F8 002B3038  4B DA A1 E1 */	bl newDifferedDisplayList__14J3DShapePacketFUl
lbl_802B60FC:
/* 802B60FC 002B303C  3B BD 00 01 */	addi r29, r29, 1
lbl_802B6100:
/* 802B6100 002B3040  80 9C 00 1C */	lwz r4, 0x1c(r28)
/* 802B6104 002B3044  57 A0 04 3E */	clrlwi r0, r29, 0x10
/* 802B6108 002B3048  A0 64 00 5C */	lhz r3, 0x5c(r4)
/* 802B610C 002B304C  7C 00 18 40 */	cmplw r0, r3
/* 802B6110 002B3050  41 80 FF B4 */	blt lbl_802B60C4
/* 802B6114 002B3054  38 61 00 08 */	addi r3, r1, 8
/* 802B6118 002B3058  4B E3 41 89 */	bl PSMTXIdentity
/* 802B611C 002B305C  3C 80 80 51 */	lis r4, j3dSys@ha
/* 802B6120 002B3060  38 61 00 08 */	addi r3, r1, 8
/* 802B6124 002B3064  38 84 F2 30 */	addi r4, r4, j3dSys@l
/* 802B6128 002B3068  4B E3 41 A5 */	bl PSMTXCopy
/* 802B612C 002B306C  83 FE 00 08 */	lwz r31, 8(r30)
/* 802B6130 002B3070  7F E3 FB 78 */	mr r3, r31
/* 802B6134 002B3074  81 9F 00 00 */	lwz r12, 0(r31)
/* 802B6138 002B3078  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 802B613C 002B307C  7D 89 03 A6 */	mtctr r12
/* 802B6140 002B3080  4E 80 04 21 */	bctrl 
/* 802B6144 002B3084  7F E3 FB 78 */	mr r3, r31
/* 802B6148 002B3088  81 9F 00 00 */	lwz r12, 0(r31)
/* 802B614C 002B308C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802B6150 002B3090  7D 89 03 A6 */	mtctr r12
/* 802B6154 002B3094  4E 80 04 21 */	bctrl 
/* 802B6158 002B3098  7F E3 FB 78 */	mr r3, r31
/* 802B615C 002B309C  4B DB 07 C9 */	bl makeDL__8J3DModelFv
/* 802B6160 002B30A0  7F E3 FB 78 */	mr r3, r31
/* 802B6164 002B30A4  4B DB 06 91 */	bl lock__8J3DModelFv
/* 802B6168 002B30A8  80 01 00 54 */	lwz r0, 0x54(r1)
/* 802B616C 002B30AC  7F C3 F3 78 */	mr r3, r30
/* 802B6170 002B30B0  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 802B6174 002B30B4  83 C1 00 48 */	lwz r30, 0x48(r1)
/* 802B6178 002B30B8  83 A1 00 44 */	lwz r29, 0x44(r1)
/* 802B617C 002B30BC  83 81 00 40 */	lwz r28, 0x40(r1)
/* 802B6180 002B30C0  7C 08 03 A6 */	mtlr r0
/* 802B6184 002B30C4  38 21 00 50 */	addi r1, r1, 0x50
/* 802B6188 002B30C8  4E 80 00 20 */	blr 

.global __dt__Q34Game11OtakaraBase3MgrFv
__dt__Q34Game11OtakaraBase3MgrFv:
/* 802B618C 002B30CC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802B6190 002B30D0  7C 08 02 A6 */	mflr r0
/* 802B6194 002B30D4  90 01 00 14 */	stw r0, 0x14(r1)
/* 802B6198 002B30D8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802B619C 002B30DC  7C 9F 23 78 */	mr r31, r4
/* 802B61A0 002B30E0  93 C1 00 08 */	stw r30, 8(r1)
/* 802B61A4 002B30E4  7C 7E 1B 79 */	or. r30, r3, r3
/* 802B61A8 002B30E8  41 82 00 78 */	beq lbl_802B6220
/* 802B61AC 002B30EC  3C 60 80 4D */	lis r3, __vt__Q34Game11OtakaraBase3Mgr@ha
/* 802B61B0 002B30F0  38 63 EF 90 */	addi r3, r3, __vt__Q34Game11OtakaraBase3Mgr@l
/* 802B61B4 002B30F4  90 7E 00 00 */	stw r3, 0(r30)
/* 802B61B8 002B30F8  38 03 00 38 */	addi r0, r3, 0x38
/* 802B61BC 002B30FC  90 1E 00 04 */	stw r0, 4(r30)
/* 802B61C0 002B3100  41 82 00 50 */	beq lbl_802B6210
/* 802B61C4 002B3104  3C 60 80 4B */	lis r3, __vt__Q24Game12EnemyMgrBase@ha
/* 802B61C8 002B3108  38 63 F8 A0 */	addi r3, r3, __vt__Q24Game12EnemyMgrBase@l
/* 802B61CC 002B310C  90 7E 00 00 */	stw r3, 0(r30)
/* 802B61D0 002B3110  38 03 00 38 */	addi r0, r3, 0x38
/* 802B61D4 002B3114  90 1E 00 04 */	stw r0, 4(r30)
/* 802B61D8 002B3118  41 82 00 38 */	beq lbl_802B6210
/* 802B61DC 002B311C  3C 60 80 4B */	lis r3, __vt__Q24Game13IEnemyMgrBase@ha
/* 802B61E0 002B3120  34 1E 00 04 */	addic. r0, r30, 4
/* 802B61E4 002B3124  38 63 AC FC */	addi r3, r3, __vt__Q24Game13IEnemyMgrBase@l
/* 802B61E8 002B3128  90 7E 00 00 */	stw r3, 0(r30)
/* 802B61EC 002B312C  38 03 00 38 */	addi r0, r3, 0x38
/* 802B61F0 002B3130  90 1E 00 04 */	stw r0, 4(r30)
/* 802B61F4 002B3134  41 82 00 1C */	beq lbl_802B6210
/* 802B61F8 002B3138  3C 80 80 4B */	lis r4, __vt__16GenericContainer@ha
/* 802B61FC 002B313C  38 7E 00 04 */	addi r3, r30, 4
/* 802B6200 002B3140  38 04 AC DC */	addi r0, r4, __vt__16GenericContainer@l
/* 802B6204 002B3144  38 80 00 00 */	li r4, 0
/* 802B6208 002B3148  90 1E 00 04 */	stw r0, 4(r30)
/* 802B620C 002B314C  48 15 B3 7D */	bl __dt__5CNodeFv
lbl_802B6210:
/* 802B6210 002B3150  7F E0 07 35 */	extsh. r0, r31
/* 802B6214 002B3154  40 81 00 0C */	ble lbl_802B6220
/* 802B6218 002B3158  7F C3 F3 78 */	mr r3, r30
/* 802B621C 002B315C  4B D6 DE 99 */	bl __dl__FPv
lbl_802B6220:
/* 802B6220 002B3160  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802B6224 002B3164  7F C3 F3 78 */	mr r3, r30
/* 802B6228 002B3168  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802B622C 002B316C  83 C1 00 08 */	lwz r30, 8(r1)
/* 802B6230 002B3170  7C 08 03 A6 */	mtlr r0
/* 802B6234 002B3174  38 21 00 10 */	addi r1, r1, 0x10
/* 802B6238 002B3178  4E 80 00 20 */	blr 

.global getEnemyTypeID__Q34Game11OtakaraBase3MgrFv
getEnemyTypeID__Q34Game11OtakaraBase3MgrFv:
/* 802B623C 002B317C  38 60 00 3B */	li r3, 0x3b
/* 802B6240 002B3180  4E 80 00 20 */	blr 

.global "@4@__dt__Q34Game11OtakaraBase3MgrFv"
"@4@__dt__Q34Game11OtakaraBase3MgrFv":
/* 802B6244 002B3184  38 63 FF FC */	addi r3, r3, -4
/* 802B6248 002B3188  4B FF FF 44 */	b __dt__Q34Game11OtakaraBase3MgrFv
