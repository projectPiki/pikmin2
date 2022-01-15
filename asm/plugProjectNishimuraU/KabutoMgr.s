.include "macros.inc"
.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
.global lbl_8048CC98
lbl_8048CC98:
	.4byte 0x3234362D
	.4byte 0x4B616275
	.4byte 0x746F4D67
	.4byte 0x72000000
.global lbl_8048CCA8
lbl_8048CCA8:
	.4byte 0x834A8375
	.4byte 0x8367837D
	.4byte 0x836C815B
	.4byte 0x83578383
	.4byte 0x00000000
.global lbl_8048CCBC
lbl_8048CCBC:
	.4byte 0x0000004B
	.4byte 0x0000005F
	.4byte 0x00000060
.global lbl_8048CCC8
lbl_8048CCC8:
	.4byte 0x0000004B
	.4byte 0x0000005F
	.4byte 0x00000060
	.4byte 0x4B616275
	.4byte 0x746F4D67
	.4byte 0x722E6370
	.4byte 0x70000000
	.asciz "P2Assert"
	.skip 3
	.4byte 0x6D61745F
	.4byte 0x62616279
	.4byte 0x6B616275
	.4byte 0x746F5F62
	.4byte 0x6F647900
	.4byte 0x6D61745F
	.4byte 0x62616279
	.4byte 0x6B616275
	.4byte 0x746F5F65
	.4byte 0x79650000
	.4byte 0x6D61745F
	.4byte 0x62616279
	.4byte 0x6B616275
	.4byte 0x746F5F68
	.4byte 0x65616400

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.global __vt__Q34Game6Kabuto3Mgr
__vt__Q34Game6Kabuto3Mgr:
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
	.4byte "@4@__dt__Q34Game6Kabuto3MgrFv"
	.4byte getChildCount__5CNodeFv
	.4byte "@4@getObject__Q24Game12EnemyMgrBaseFPv"
	.4byte "@4@getNext__Q24Game12EnemyMgrBaseFPv"
	.4byte "@4@getStart__Q24Game12EnemyMgrBaseFv"
	.4byte "@4@getEnd__Q24Game12EnemyMgrBaseFv"
	.4byte __dt__Q34Game6Kabuto3MgrFv
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
	.4byte getEnemyTypeID__Q34Game6Kabuto3MgrFv
	.4byte createModel__Q34Game6Kabuto3MgrFv
	.4byte initParms__Q24Game12EnemyMgrBaseFv
	.4byte loadResource__Q24Game12EnemyMgrBaseFv
	.4byte initObjects__Q24Game12EnemyMgrBaseFv
	.4byte initStoneSetting__Q24Game12EnemyMgrBaseFv
	.4byte loadModelData__Q24Game12EnemyMgrBaseFP10JKRArchive
	.4byte loadModelData__Q34Game6Kabuto3MgrFv
	.4byte loadAnimData__Q34Game6Kabuto3MgrFv
	.4byte loadTexData__Q24Game12EnemyMgrBaseFv
	.4byte doLoadBmd__Q34Game6Kabuto3MgrFPv
	.4byte doLoadBdl__Q24Game12EnemyMgrBaseFPv
	.4byte initGenerator__Q24Game12EnemyMgrBaseFv
	.4byte 0
	.4byte 0

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global __ct__Q34Game6Kabuto3MgrFiUc
__ct__Q34Game6Kabuto3MgrFiUc:
/* 802E3D68 002E0CA8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802E3D6C 002E0CAC  7C 08 02 A6 */	mflr r0
/* 802E3D70 002E0CB0  90 01 00 14 */	stw r0, 0x14(r1)
/* 802E3D74 002E0CB4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802E3D78 002E0CB8  7C 7F 1B 78 */	mr r31, r3
/* 802E3D7C 002E0CBC  4B E4 AF 19 */	bl __ct__Q24Game12EnemyMgrBaseFiUc
/* 802E3D80 002E0CC0  3C 60 80 4D */	lis r3, __vt__Q34Game6Kabuto3Mgr@ha
/* 802E3D84 002E0CC4  3C 80 80 49 */	lis r4, lbl_8048CCA8@ha
/* 802E3D88 002E0CC8  38 A3 3B 58 */	addi r5, r3, __vt__Q34Game6Kabuto3Mgr@l
/* 802E3D8C 002E0CCC  7F E3 FB 78 */	mr r3, r31
/* 802E3D90 002E0CD0  90 BF 00 00 */	stw r5, 0(r31)
/* 802E3D94 002E0CD4  38 A5 00 38 */	addi r5, r5, 0x38
/* 802E3D98 002E0CD8  38 04 CC A8 */	addi r0, r4, lbl_8048CCA8@l
/* 802E3D9C 002E0CDC  90 BF 00 04 */	stw r5, 4(r31)
/* 802E3DA0 002E0CE0  90 1F 00 18 */	stw r0, 0x18(r31)
/* 802E3DA4 002E0CE4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802E3DA8 002E0CE8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802E3DAC 002E0CEC  7C 08 03 A6 */	mtlr r0
/* 802E3DB0 002E0CF0  38 21 00 10 */	addi r1, r1, 0x10
/* 802E3DB4 002E0CF4  4E 80 00 20 */	blr 

.global loadModelData__Q34Game6Kabuto3MgrFv
loadModelData__Q34Game6Kabuto3MgrFv:
/* 802E3DB8 002E0CF8  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 802E3DBC 002E0CFC  7C 08 02 A6 */	mflr r0
/* 802E3DC0 002E0D00  3C 80 80 49 */	lis r4, lbl_8048CCBC@ha
/* 802E3DC4 002E0D04  90 01 00 34 */	stw r0, 0x34(r1)
/* 802E3DC8 002E0D08  38 A4 CC BC */	addi r5, r4, lbl_8048CCBC@l
/* 802E3DCC 002E0D0C  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 802E3DD0 002E0D10  7C 7F 1B 78 */	mr r31, r3
/* 802E3DD4 002E0D14  93 C1 00 28 */	stw r30, 0x28(r1)
/* 802E3DD8 002E0D18  3B C1 00 08 */	addi r30, r1, 8
/* 802E3DDC 002E0D1C  93 A1 00 24 */	stw r29, 0x24(r1)
/* 802E3DE0 002E0D20  3B A0 00 00 */	li r29, 0
/* 802E3DE4 002E0D24  80 85 00 00 */	lwz r4, 0(r5)
/* 802E3DE8 002E0D28  80 65 00 04 */	lwz r3, 4(r5)
/* 802E3DEC 002E0D2C  80 05 00 08 */	lwz r0, 8(r5)
/* 802E3DF0 002E0D30  90 81 00 08 */	stw r4, 8(r1)
/* 802E3DF4 002E0D34  90 61 00 0C */	stw r3, 0xc(r1)
/* 802E3DF8 002E0D38  90 01 00 10 */	stw r0, 0x10(r1)
lbl_802E3DFC:
/* 802E3DFC 002E0D3C  80 6D 91 E0 */	lwz r3, generalEnemyMgr__4Game@sda21(r13)
/* 802E3E00 002E0D40  80 9E 00 00 */	lwz r4, 0(r30)
/* 802E3E04 002E0D44  4B E2 9E A1 */	bl getEnemyMgr__Q24Game15GeneralEnemyMgrFi
/* 802E3E08 002E0D48  28 03 00 00 */	cmplwi r3, 0
/* 802E3E0C 002E0D4C  41 82 00 24 */	beq lbl_802E3E30
/* 802E3E10 002E0D50  81 83 00 00 */	lwz r12, 0(r3)
/* 802E3E14 002E0D54  81 8C 00 74 */	lwz r12, 0x74(r12)
/* 802E3E18 002E0D58  7D 89 03 A6 */	mtctr r12
/* 802E3E1C 002E0D5C  4E 80 04 21 */	bctrl 
/* 802E3E20 002E0D60  28 03 00 00 */	cmplwi r3, 0
/* 802E3E24 002E0D64  41 82 00 0C */	beq lbl_802E3E30
/* 802E3E28 002E0D68  90 7F 00 1C */	stw r3, 0x1c(r31)
/* 802E3E2C 002E0D6C  48 00 00 58 */	b lbl_802E3E84
lbl_802E3E30:
/* 802E3E30 002E0D70  3B BD 00 01 */	addi r29, r29, 1
/* 802E3E34 002E0D74  3B DE 00 04 */	addi r30, r30, 4
/* 802E3E38 002E0D78  2C 1D 00 03 */	cmpwi r29, 3
/* 802E3E3C 002E0D7C  41 80 FF C0 */	blt lbl_802E3DFC
/* 802E3E40 002E0D80  7F E3 FB 78 */	mr r3, r31
/* 802E3E44 002E0D84  4B E4 C2 C9 */	bl loadModelData__Q24Game12EnemyMgrBaseFv
/* 802E3E48 002E0D88  38 A0 00 00 */	li r5, 0
/* 802E3E4C 002E0D8C  48 00 00 24 */	b lbl_802E3E70
lbl_802E3E50:
/* 802E3E50 002E0D90  80 64 00 80 */	lwz r3, 0x80(r4)
/* 802E3E54 002E0D94  54 A0 13 BA */	rlwinm r0, r5, 2, 0xe, 0x1d
/* 802E3E58 002E0D98  38 A5 00 01 */	addi r5, r5, 1
/* 802E3E5C 002E0D9C  7C 63 00 2E */	lwzx r3, r3, r0
/* 802E3E60 002E0DA0  80 03 00 0C */	lwz r0, 0xc(r3)
/* 802E3E64 002E0DA4  54 00 05 1E */	rlwinm r0, r0, 0, 0x14, 0xf
/* 802E3E68 002E0DA8  60 00 20 00 */	ori r0, r0, 0x2000
/* 802E3E6C 002E0DAC  90 03 00 0C */	stw r0, 0xc(r3)
lbl_802E3E70:
/* 802E3E70 002E0DB0  80 9F 00 1C */	lwz r4, 0x1c(r31)
/* 802E3E74 002E0DB4  54 A0 04 3E */	clrlwi r0, r5, 0x10
/* 802E3E78 002E0DB8  A0 64 00 7C */	lhz r3, 0x7c(r4)
/* 802E3E7C 002E0DBC  7C 00 18 40 */	cmplw r0, r3
/* 802E3E80 002E0DC0  41 80 FF D0 */	blt lbl_802E3E50
lbl_802E3E84:
/* 802E3E84 002E0DC4  80 01 00 34 */	lwz r0, 0x34(r1)
/* 802E3E88 002E0DC8  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 802E3E8C 002E0DCC  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 802E3E90 002E0DD0  83 A1 00 24 */	lwz r29, 0x24(r1)
/* 802E3E94 002E0DD4  7C 08 03 A6 */	mtlr r0
/* 802E3E98 002E0DD8  38 21 00 30 */	addi r1, r1, 0x30
/* 802E3E9C 002E0DDC  4E 80 00 20 */	blr 

.global loadAnimData__Q34Game6Kabuto3MgrFv
loadAnimData__Q34Game6Kabuto3MgrFv:
/* 802E3EA0 002E0DE0  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 802E3EA4 002E0DE4  7C 08 02 A6 */	mflr r0
/* 802E3EA8 002E0DE8  3C 80 80 49 */	lis r4, lbl_8048CCC8@ha
/* 802E3EAC 002E0DEC  90 01 00 34 */	stw r0, 0x34(r1)
/* 802E3EB0 002E0DF0  38 A4 CC C8 */	addi r5, r4, lbl_8048CCC8@l
/* 802E3EB4 002E0DF4  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 802E3EB8 002E0DF8  3B E1 00 08 */	addi r31, r1, 8
/* 802E3EBC 002E0DFC  93 C1 00 28 */	stw r30, 0x28(r1)
/* 802E3EC0 002E0E00  3B C0 00 00 */	li r30, 0
/* 802E3EC4 002E0E04  93 A1 00 24 */	stw r29, 0x24(r1)
/* 802E3EC8 002E0E08  7C 7D 1B 78 */	mr r29, r3
/* 802E3ECC 002E0E0C  80 85 00 00 */	lwz r4, 0(r5)
/* 802E3ED0 002E0E10  80 65 00 04 */	lwz r3, 4(r5)
/* 802E3ED4 002E0E14  80 05 00 08 */	lwz r0, 8(r5)
/* 802E3ED8 002E0E18  90 81 00 08 */	stw r4, 8(r1)
/* 802E3EDC 002E0E1C  90 61 00 0C */	stw r3, 0xc(r1)
/* 802E3EE0 002E0E20  90 01 00 10 */	stw r0, 0x10(r1)
lbl_802E3EE4:
/* 802E3EE4 002E0E24  80 6D 91 E0 */	lwz r3, generalEnemyMgr__4Game@sda21(r13)
/* 802E3EE8 002E0E28  80 9F 00 00 */	lwz r4, 0(r31)
/* 802E3EEC 002E0E2C  4B E2 9D B9 */	bl getEnemyMgr__Q24Game15GeneralEnemyMgrFi
/* 802E3EF0 002E0E30  28 03 00 00 */	cmplwi r3, 0
/* 802E3EF4 002E0E34  41 82 00 18 */	beq lbl_802E3F0C
/* 802E3EF8 002E0E38  80 03 00 20 */	lwz r0, 0x20(r3)
/* 802E3EFC 002E0E3C  28 00 00 00 */	cmplwi r0, 0
/* 802E3F00 002E0E40  41 82 00 0C */	beq lbl_802E3F0C
/* 802E3F04 002E0E44  90 1D 00 20 */	stw r0, 0x20(r29)
/* 802E3F08 002E0E48  48 00 00 1C */	b lbl_802E3F24
lbl_802E3F0C:
/* 802E3F0C 002E0E4C  3B DE 00 01 */	addi r30, r30, 1
/* 802E3F10 002E0E50  3B FF 00 04 */	addi r31, r31, 4
/* 802E3F14 002E0E54  2C 1E 00 03 */	cmpwi r30, 3
/* 802E3F18 002E0E58  41 80 FF CC */	blt lbl_802E3EE4
/* 802E3F1C 002E0E5C  7F A3 EB 78 */	mr r3, r29
/* 802E3F20 002E0E60  4B E4 C2 AD */	bl loadAnimData__Q24Game12EnemyMgrBaseFv
lbl_802E3F24:
/* 802E3F24 002E0E64  80 01 00 34 */	lwz r0, 0x34(r1)
/* 802E3F28 002E0E68  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 802E3F2C 002E0E6C  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 802E3F30 002E0E70  83 A1 00 24 */	lwz r29, 0x24(r1)
/* 802E3F34 002E0E74  7C 08 03 A6 */	mtlr r0
/* 802E3F38 002E0E78  38 21 00 30 */	addi r1, r1, 0x30
/* 802E3F3C 002E0E7C  4E 80 00 20 */	blr 

.global createModel__Q34Game6Kabuto3MgrFv
createModel__Q34Game6Kabuto3MgrFv:
/* 802E3F40 002E0E80  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 802E3F44 002E0E84  7C 08 02 A6 */	mflr r0
/* 802E3F48 002E0E88  3C 80 80 49 */	lis r4, lbl_8048CC98@ha
/* 802E3F4C 002E0E8C  90 01 00 54 */	stw r0, 0x54(r1)
/* 802E3F50 002E0E90  BF 61 00 3C */	stmw r27, 0x3c(r1)
/* 802E3F54 002E0E94  7C 7B 1B 78 */	mr r27, r3
/* 802E3F58 002E0E98  3B E4 CC 98 */	addi r31, r4, lbl_8048CC98@l
/* 802E3F5C 002E0E9C  38 60 00 14 */	li r3, 0x14
/* 802E3F60 002E0EA0  4B D3 FF 45 */	bl __nw__FUl
/* 802E3F64 002E0EA4  7C 7E 1B 79 */	or. r30, r3, r3
/* 802E3F68 002E0EA8  41 82 00 18 */	beq lbl_802E3F80
/* 802E3F6C 002E0EAC  80 9B 00 1C */	lwz r4, 0x1c(r27)
/* 802E3F70 002E0EB0  3C A0 00 08 */	lis r5, 8
/* 802E3F74 002E0EB4  88 DB 00 24 */	lbz r6, 0x24(r27)
/* 802E3F78 002E0EB8  48 15 A2 61 */	bl __ct__Q28SysShape5ModelFP12J3DModelDataUlUl
/* 802E3F7C 002E0EBC  7C 7E 1B 78 */	mr r30, r3
lbl_802E3F80:
/* 802E3F80 002E0EC0  28 1E 00 00 */	cmplwi r30, 0
/* 802E3F84 002E0EC4  40 82 00 18 */	bne lbl_802E3F9C
/* 802E3F88 002E0EC8  38 7F 00 3C */	addi r3, r31, 0x3c
/* 802E3F8C 002E0ECC  38 BF 00 4C */	addi r5, r31, 0x4c
/* 802E3F90 002E0ED0  38 80 00 93 */	li r4, 0x93
/* 802E3F94 002E0ED4  4C C6 31 82 */	crclr 6
/* 802E3F98 002E0ED8  4B D4 66 A9 */	bl panic_f__12JUTExceptionFPCciPCce
lbl_802E3F9C:
/* 802E3F9C 002E0EDC  3B A0 00 00 */	li r29, 0
/* 802E3FA0 002E0EE0  48 00 00 6C */	b lbl_802E400C
lbl_802E3FA4:
/* 802E3FA4 002E0EE4  80 64 00 64 */	lwz r3, 0x64(r4)
/* 802E3FA8 002E0EE8  7F A4 EB 78 */	mr r4, r29
/* 802E3FAC 002E0EEC  4B D4 AE 71 */	bl getName__10JUTNameTabCFUs
/* 802E3FB0 002E0EF0  38 9F 00 58 */	addi r4, r31, 0x58
/* 802E3FB4 002E0EF4  7C 7C 1B 78 */	mr r28, r3
/* 802E3FB8 002E0EF8  4B DE 67 09 */	bl strcmp
/* 802E3FBC 002E0EFC  2C 03 00 00 */	cmpwi r3, 0
/* 802E3FC0 002E0F00  41 82 00 2C */	beq lbl_802E3FEC
/* 802E3FC4 002E0F04  7F 83 E3 78 */	mr r3, r28
/* 802E3FC8 002E0F08  38 9F 00 6C */	addi r4, r31, 0x6c
/* 802E3FCC 002E0F0C  4B DE 66 F5 */	bl strcmp
/* 802E3FD0 002E0F10  2C 03 00 00 */	cmpwi r3, 0
/* 802E3FD4 002E0F14  41 82 00 18 */	beq lbl_802E3FEC
/* 802E3FD8 002E0F18  7F 83 E3 78 */	mr r3, r28
/* 802E3FDC 002E0F1C  38 9F 00 80 */	addi r4, r31, 0x80
/* 802E3FE0 002E0F20  4B DE 66 E1 */	bl strcmp
/* 802E3FE4 002E0F24  2C 03 00 00 */	cmpwi r3, 0
/* 802E3FE8 002E0F28  40 82 00 20 */	bne lbl_802E4008
lbl_802E3FEC:
/* 802E3FEC 002E0F2C  80 9E 00 08 */	lwz r4, 8(r30)
/* 802E3FF0 002E0F30  57 A3 32 B2 */	rlwinm r3, r29, 6, 0xa, 0x19
/* 802E3FF4 002E0F34  38 03 00 2C */	addi r0, r3, 0x2c
/* 802E3FF8 002E0F38  80 64 00 C0 */	lwz r3, 0xc0(r4)
/* 802E3FFC 002E0F3C  3C 80 04 02 */	lis r4, 0x402
/* 802E4000 002E0F40  7C 63 00 2E */	lwzx r3, r3, r0
/* 802E4004 002E0F44  4B D7 C2 D5 */	bl newDifferedDisplayList__14J3DShapePacketFUl
lbl_802E4008:
/* 802E4008 002E0F48  3B BD 00 01 */	addi r29, r29, 1
lbl_802E400C:
/* 802E400C 002E0F4C  80 9B 00 1C */	lwz r4, 0x1c(r27)
/* 802E4010 002E0F50  57 A0 04 3E */	clrlwi r0, r29, 0x10
/* 802E4014 002E0F54  A0 64 00 5C */	lhz r3, 0x5c(r4)
/* 802E4018 002E0F58  7C 00 18 40 */	cmplw r0, r3
/* 802E401C 002E0F5C  41 80 FF 88 */	blt lbl_802E3FA4
/* 802E4020 002E0F60  38 61 00 08 */	addi r3, r1, 8
/* 802E4024 002E0F64  4B E0 62 7D */	bl PSMTXIdentity
/* 802E4028 002E0F68  3C 80 80 51 */	lis r4, j3dSys@ha
/* 802E402C 002E0F6C  38 61 00 08 */	addi r3, r1, 8
/* 802E4030 002E0F70  38 84 F2 30 */	addi r4, r4, j3dSys@l
/* 802E4034 002E0F74  4B E0 62 99 */	bl PSMTXCopy
/* 802E4038 002E0F78  83 FE 00 08 */	lwz r31, 8(r30)
/* 802E403C 002E0F7C  7F E3 FB 78 */	mr r3, r31
/* 802E4040 002E0F80  81 9F 00 00 */	lwz r12, 0(r31)
/* 802E4044 002E0F84  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 802E4048 002E0F88  7D 89 03 A6 */	mtctr r12
/* 802E404C 002E0F8C  4E 80 04 21 */	bctrl 
/* 802E4050 002E0F90  7F E3 FB 78 */	mr r3, r31
/* 802E4054 002E0F94  81 9F 00 00 */	lwz r12, 0(r31)
/* 802E4058 002E0F98  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802E405C 002E0F9C  7D 89 03 A6 */	mtctr r12
/* 802E4060 002E0FA0  4E 80 04 21 */	bctrl 
/* 802E4064 002E0FA4  7F E3 FB 78 */	mr r3, r31
/* 802E4068 002E0FA8  4B D8 28 BD */	bl makeDL__8J3DModelFv
/* 802E406C 002E0FAC  7F E3 FB 78 */	mr r3, r31
/* 802E4070 002E0FB0  4B D8 27 85 */	bl lock__8J3DModelFv
/* 802E4074 002E0FB4  7F C3 F3 78 */	mr r3, r30
/* 802E4078 002E0FB8  BB 61 00 3C */	lmw r27, 0x3c(r1)
/* 802E407C 002E0FBC  80 01 00 54 */	lwz r0, 0x54(r1)
/* 802E4080 002E0FC0  7C 08 03 A6 */	mtlr r0
/* 802E4084 002E0FC4  38 21 00 50 */	addi r1, r1, 0x50
/* 802E4088 002E0FC8  4E 80 00 20 */	blr 

.global __dt__Q34Game6Kabuto3MgrFv
__dt__Q34Game6Kabuto3MgrFv:
/* 802E408C 002E0FCC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802E4090 002E0FD0  7C 08 02 A6 */	mflr r0
/* 802E4094 002E0FD4  90 01 00 14 */	stw r0, 0x14(r1)
/* 802E4098 002E0FD8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802E409C 002E0FDC  7C 9F 23 78 */	mr r31, r4
/* 802E40A0 002E0FE0  93 C1 00 08 */	stw r30, 8(r1)
/* 802E40A4 002E0FE4  7C 7E 1B 79 */	or. r30, r3, r3
/* 802E40A8 002E0FE8  41 82 00 78 */	beq lbl_802E4120
/* 802E40AC 002E0FEC  3C 60 80 4D */	lis r3, __vt__Q34Game6Kabuto3Mgr@ha
/* 802E40B0 002E0FF0  38 63 3B 58 */	addi r3, r3, __vt__Q34Game6Kabuto3Mgr@l
/* 802E40B4 002E0FF4  90 7E 00 00 */	stw r3, 0(r30)
/* 802E40B8 002E0FF8  38 03 00 38 */	addi r0, r3, 0x38
/* 802E40BC 002E0FFC  90 1E 00 04 */	stw r0, 4(r30)
/* 802E40C0 002E1000  41 82 00 50 */	beq lbl_802E4110
/* 802E40C4 002E1004  3C 60 80 4B */	lis r3, __vt__Q24Game12EnemyMgrBase@ha
/* 802E40C8 002E1008  38 63 F8 A0 */	addi r3, r3, __vt__Q24Game12EnemyMgrBase@l
/* 802E40CC 002E100C  90 7E 00 00 */	stw r3, 0(r30)
/* 802E40D0 002E1010  38 03 00 38 */	addi r0, r3, 0x38
/* 802E40D4 002E1014  90 1E 00 04 */	stw r0, 4(r30)
/* 802E40D8 002E1018  41 82 00 38 */	beq lbl_802E4110
/* 802E40DC 002E101C  3C 60 80 4B */	lis r3, __vt__Q24Game13IEnemyMgrBase@ha
/* 802E40E0 002E1020  34 1E 00 04 */	addic. r0, r30, 4
/* 802E40E4 002E1024  38 63 AC FC */	addi r3, r3, __vt__Q24Game13IEnemyMgrBase@l
/* 802E40E8 002E1028  90 7E 00 00 */	stw r3, 0(r30)
/* 802E40EC 002E102C  38 03 00 38 */	addi r0, r3, 0x38
/* 802E40F0 002E1030  90 1E 00 04 */	stw r0, 4(r30)
/* 802E40F4 002E1034  41 82 00 1C */	beq lbl_802E4110
/* 802E40F8 002E1038  3C 80 80 4B */	lis r4, __vt__16GenericContainer@ha
/* 802E40FC 002E103C  38 7E 00 04 */	addi r3, r30, 4
/* 802E4100 002E1040  38 04 AC DC */	addi r0, r4, __vt__16GenericContainer@l
/* 802E4104 002E1044  38 80 00 00 */	li r4, 0
/* 802E4108 002E1048  90 1E 00 04 */	stw r0, 4(r30)
/* 802E410C 002E104C  48 12 D4 7D */	bl __dt__5CNodeFv
lbl_802E4110:
/* 802E4110 002E1050  7F E0 07 35 */	extsh. r0, r31
/* 802E4114 002E1054  40 81 00 0C */	ble lbl_802E4120
/* 802E4118 002E1058  7F C3 F3 78 */	mr r3, r30
/* 802E411C 002E105C  4B D3 FF 99 */	bl __dl__FPv
lbl_802E4120:
/* 802E4120 002E1060  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802E4124 002E1064  7F C3 F3 78 */	mr r3, r30
/* 802E4128 002E1068  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802E412C 002E106C  83 C1 00 08 */	lwz r30, 8(r1)
/* 802E4130 002E1070  7C 08 03 A6 */	mtlr r0
/* 802E4134 002E1074  38 21 00 10 */	addi r1, r1, 0x10
/* 802E4138 002E1078  4E 80 00 20 */	blr 

.global getEnemyTypeID__Q34Game6Kabuto3MgrFv
getEnemyTypeID__Q34Game6Kabuto3MgrFv:
/* 802E413C 002E107C  38 60 00 4B */	li r3, 0x4b
/* 802E4140 002E1080  4E 80 00 20 */	blr 

.global doLoadBmd__Q34Game6Kabuto3MgrFPv
doLoadBmd__Q34Game6Kabuto3MgrFPv:
/* 802E4144 002E1084  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802E4148 002E1088  7C 08 02 A6 */	mflr r0
/* 802E414C 002E108C  3C A0 01 24 */	lis r5, 0x01240030@ha
/* 802E4150 002E1090  7C 83 23 78 */	mr r3, r4
/* 802E4154 002E1094  90 01 00 14 */	stw r0, 0x14(r1)
/* 802E4158 002E1098  38 85 00 30 */	addi r4, r5, 0x01240030@l
/* 802E415C 002E109C  4B D8 B7 39 */	bl load__22J3DModelLoaderDataBaseFPCvUl
/* 802E4160 002E10A0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802E4164 002E10A4  7C 08 03 A6 */	mtlr r0
/* 802E4168 002E10A8  38 21 00 10 */	addi r1, r1, 0x10
/* 802E416C 002E10AC  4E 80 00 20 */	blr 

.global "@4@__dt__Q34Game6Kabuto3MgrFv"
"@4@__dt__Q34Game6Kabuto3MgrFv":
/* 802E4170 002E10B0  38 63 FF FC */	addi r3, r3, -4
/* 802E4174 002E10B4  4B FF FF 18 */	b __dt__Q34Game6Kabuto3MgrFv
