.include "macros.inc"

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global "birth__Q34Game4Nest3ObjFR10Vector3<f>f"
"birth__Q34Game4Nest3ObjFR10Vector3<f>f":
/* 8036CA94 003699D4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8036CA98 003699D8  7C 08 02 A6 */	mflr r0
/* 8036CA9C 003699DC  90 01 00 14 */	stw r0, 0x14(r1)
/* 8036CAA0 003699E0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8036CAA4 003699E4  7C 7F 1B 78 */	mr r31, r3
/* 8036CAA8 003699E8  4B D9 5F 59 */	bl "birth__Q24Game9EnemyBaseFR10Vector3<f>f"
/* 8036CAAC 003699EC  38 00 00 01 */	li r0, 1
/* 8036CAB0 003699F0  98 1F 02 EC */	stb r0, 0x2ec(r31)
/* 8036CAB4 003699F4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8036CAB8 003699F8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8036CABC 003699FC  7C 08 03 A6 */	mtlr r0
/* 8036CAC0 00369A00  38 21 00 10 */	addi r1, r1, 0x10
/* 8036CAC4 00369A04  4E 80 00 20 */	blr 

.global onInit__Q34Game4Nest3ObjFPQ24Game15CreatureInitArg
onInit__Q34Game4Nest3ObjFPQ24Game15CreatureInitArg:
/* 8036CAC8 00369A08  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8036CACC 00369A0C  7C 08 02 A6 */	mflr r0
/* 8036CAD0 00369A10  90 01 00 14 */	stw r0, 0x14(r1)
/* 8036CAD4 00369A14  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8036CAD8 00369A18  7C 7F 1B 78 */	mr r31, r3
/* 8036CADC 00369A1C  4B D9 4F 7D */	bl onInit__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
/* 8036CAE0 00369A20  38 60 00 FF */	li r3, 0xff
/* 8036CAE4 00369A24  38 00 00 00 */	li r0, 0
/* 8036CAE8 00369A28  B0 7F 02 EE */	sth r3, 0x2ee(r31)
/* 8036CAEC 00369A2C  7F E3 FB 78 */	mr r3, r31
/* 8036CAF0 00369A30  90 1F 02 F0 */	stw r0, 0x2f0(r31)
/* 8036CAF4 00369A34  C0 1F 01 8C */	lfs f0, 0x18c(r31)
/* 8036CAF8 00369A38  D0 1F 01 98 */	stfs f0, 0x198(r31)
/* 8036CAFC 00369A3C  C0 1F 01 90 */	lfs f0, 0x190(r31)
/* 8036CB00 00369A40  D0 1F 01 9C */	stfs f0, 0x19c(r31)
/* 8036CB04 00369A44  C0 1F 01 94 */	lfs f0, 0x194(r31)
/* 8036CB08 00369A48  D0 1F 01 A0 */	stfs f0, 0x1a0(r31)
/* 8036CB0C 00369A4C  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 8036CB10 00369A50  54 00 06 6E */	rlwinm r0, r0, 0, 0x19, 0x17
/* 8036CB14 00369A54  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 8036CB18 00369A58  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 8036CB1C 00369A5C  54 00 07 76 */	rlwinm r0, r0, 0, 0x1d, 0x1b
/* 8036CB20 00369A60  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 8036CB24 00369A64  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 8036CB28 00369A68  54 00 06 2C */	rlwinm r0, r0, 0, 0x18, 0x16
/* 8036CB2C 00369A6C  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 8036CB30 00369A70  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 8036CB34 00369A74  54 00 05 24 */	rlwinm r0, r0, 0, 0x14, 0x12
/* 8036CB38 00369A78  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 8036CB3C 00369A7C  80 1F 01 E0 */	lwz r0, 0x1e0(r31)
/* 8036CB40 00369A80  64 00 00 40 */	oris r0, r0, 0x40
/* 8036CB44 00369A84  90 1F 01 E0 */	stw r0, 0x1e0(r31)
/* 8036CB48 00369A88  4B D9 4E C1 */	bl setEmotionNone__Q24Game9EnemyBaseFv
/* 8036CB4C 00369A8C  80 6D 96 80 */	lwz r3, shadowMgr__4Game@sda21(r13)
/* 8036CB50 00369A90  28 03 00 00 */	cmplwi r3, 0
/* 8036CB54 00369A94  41 82 00 0C */	beq lbl_8036CB60
/* 8036CB58 00369A98  7F E4 FB 78 */	mr r4, r31
/* 8036CB5C 00369A9C  4B ED 51 0D */	bl killShadow__Q24Game9ShadowMgrFPQ24Game8Creature
lbl_8036CB60:
/* 8036CB60 00369AA0  80 7F 01 38 */	lwz r3, 0x138(r31)
/* 8036CB64 00369AA4  80 1F 01 3C */	lwz r0, 0x13c(r31)
/* 8036CB68 00369AA8  C0 02 06 90 */	lfs f0, lbl_8051E9F0@sda21(r2)
/* 8036CB6C 00369AAC  90 7F 02 BC */	stw r3, 0x2bc(r31)
/* 8036CB70 00369AB0  90 1F 02 C0 */	stw r0, 0x2c0(r31)
/* 8036CB74 00369AB4  80 7F 01 40 */	lwz r3, 0x140(r31)
/* 8036CB78 00369AB8  80 1F 01 44 */	lwz r0, 0x144(r31)
/* 8036CB7C 00369ABC  90 7F 02 C4 */	stw r3, 0x2c4(r31)
/* 8036CB80 00369AC0  90 1F 02 C8 */	stw r0, 0x2c8(r31)
/* 8036CB84 00369AC4  80 7F 01 48 */	lwz r3, 0x148(r31)
/* 8036CB88 00369AC8  80 1F 01 4C */	lwz r0, 0x14c(r31)
/* 8036CB8C 00369ACC  90 7F 02 CC */	stw r3, 0x2cc(r31)
/* 8036CB90 00369AD0  90 1F 02 D0 */	stw r0, 0x2d0(r31)
/* 8036CB94 00369AD4  80 7F 01 50 */	lwz r3, 0x150(r31)
/* 8036CB98 00369AD8  80 1F 01 54 */	lwz r0, 0x154(r31)
/* 8036CB9C 00369ADC  90 7F 02 D4 */	stw r3, 0x2d4(r31)
/* 8036CBA0 00369AE0  90 1F 02 D8 */	stw r0, 0x2d8(r31)
/* 8036CBA4 00369AE4  80 7F 01 58 */	lwz r3, 0x158(r31)
/* 8036CBA8 00369AE8  80 1F 01 5C */	lwz r0, 0x15c(r31)
/* 8036CBAC 00369AEC  90 7F 02 DC */	stw r3, 0x2dc(r31)
/* 8036CBB0 00369AF0  90 1F 02 E0 */	stw r0, 0x2e0(r31)
/* 8036CBB4 00369AF4  80 7F 01 60 */	lwz r3, 0x160(r31)
/* 8036CBB8 00369AF8  80 1F 01 64 */	lwz r0, 0x164(r31)
/* 8036CBBC 00369AFC  90 7F 02 E4 */	stw r3, 0x2e4(r31)
/* 8036CBC0 00369B00  90 1F 02 E8 */	stw r0, 0x2e8(r31)
/* 8036CBC4 00369B04  C0 3F 01 90 */	lfs f1, 0x190(r31)
/* 8036CBC8 00369B08  EC 01 00 28 */	fsubs f0, f1, f0
/* 8036CBCC 00369B0C  D0 1F 02 D8 */	stfs f0, 0x2d8(r31)
/* 8036CBD0 00369B10  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8036CBD4 00369B14  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8036CBD8 00369B18  7C 08 03 A6 */	mtlr r0
/* 8036CBDC 00369B1C  38 21 00 10 */	addi r1, r1, 0x10
/* 8036CBE0 00369B20  4E 80 00 20 */	blr 

.global __ct__Q34Game4Nest3ObjFv
__ct__Q34Game4Nest3ObjFv:
/* 8036CBE4 00369B24  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8036CBE8 00369B28  7C 08 02 A6 */	mflr r0
/* 8036CBEC 00369B2C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8036CBF0 00369B30  7C 80 07 35 */	extsh. r0, r4
/* 8036CBF4 00369B34  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8036CBF8 00369B38  7C 7F 1B 78 */	mr r31, r3
/* 8036CBFC 00369B3C  41 82 00 24 */	beq lbl_8036CC20
/* 8036CC00 00369B40  38 1F 02 F4 */	addi r0, r31, 0x2f4
/* 8036CC04 00369B44  3C 60 80 4B */	lis r3, __vt__Q24Game10PelletView@ha
/* 8036CC08 00369B48  90 1F 01 7C */	stw r0, 0x17c(r31)
/* 8036CC0C 00369B4C  38 63 A6 78 */	addi r3, r3, __vt__Q24Game10PelletView@l
/* 8036CC10 00369B50  38 00 00 00 */	li r0, 0
/* 8036CC14 00369B54  90 7F 02 F4 */	stw r3, 0x2f4(r31)
/* 8036CC18 00369B58  90 1F 02 F8 */	stw r0, 0x2f8(r31)
/* 8036CC1C 00369B5C  90 1F 02 FC */	stw r0, 0x2fc(r31)
lbl_8036CC20:
/* 8036CC20 00369B60  7F E3 FB 78 */	mr r3, r31
/* 8036CC24 00369B64  38 80 00 00 */	li r4, 0
/* 8036CC28 00369B68  4B D9 47 79 */	bl __ct__Q24Game9EnemyBaseFv
/* 8036CC2C 00369B6C  3C 60 80 4E */	lis r3, __vt__Q34Game4Nest3Obj@ha
/* 8036CC30 00369B70  38 9F 02 F4 */	addi r4, r31, 0x2f4
/* 8036CC34 00369B74  38 63 30 68 */	addi r3, r3, __vt__Q34Game4Nest3Obj@l
/* 8036CC38 00369B78  38 00 00 01 */	li r0, 1
/* 8036CC3C 00369B7C  90 7F 00 00 */	stw r3, 0(r31)
/* 8036CC40 00369B80  38 A3 01 B0 */	addi r5, r3, 0x1b0
/* 8036CC44 00369B84  38 C3 02 F8 */	addi r6, r3, 0x2f8
/* 8036CC48 00369B88  7F E3 FB 78 */	mr r3, r31
/* 8036CC4C 00369B8C  90 BF 01 78 */	stw r5, 0x178(r31)
/* 8036CC50 00369B90  80 BF 01 7C */	lwz r5, 0x17c(r31)
/* 8036CC54 00369B94  90 C5 00 00 */	stw r6, 0(r5)
/* 8036CC58 00369B98  80 BF 01 7C */	lwz r5, 0x17c(r31)
/* 8036CC5C 00369B9C  7C 85 20 50 */	subf r4, r5, r4
/* 8036CC60 00369BA0  90 85 00 0C */	stw r4, 0xc(r5)
/* 8036CC64 00369BA4  98 1F 02 EC */	stb r0, 0x2ec(r31)
/* 8036CC68 00369BA8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8036CC6C 00369BAC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8036CC70 00369BB0  7C 08 03 A6 */	mtlr r0
/* 8036CC74 00369BB4  38 21 00 10 */	addi r1, r1, 0x10
/* 8036CC78 00369BB8  4E 80 00 20 */	blr 

.global setHouseType__Q34Game4Nest3ObjFi
setHouseType__Q34Game4Nest3ObjFi:
/* 8036CC7C 00369BBC  2C 04 00 3F */	cmpwi r4, 0x3f
/* 8036CC80 00369BC0  40 82 00 10 */	bne lbl_8036CC90
/* 8036CC84 00369BC4  38 00 00 00 */	li r0, 0
/* 8036CC88 00369BC8  98 03 02 EC */	stb r0, 0x2ec(r3)
/* 8036CC8C 00369BCC  4E 80 00 20 */	blr 
lbl_8036CC90:
/* 8036CC90 00369BD0  38 00 00 01 */	li r0, 1
/* 8036CC94 00369BD4  98 03 02 EC */	stb r0, 0x2ec(r3)
/* 8036CC98 00369BD8  4E 80 00 20 */	blr 

.global setInitialSetting__Q34Game4Nest3ObjFPQ24Game21EnemyInitialParamBase
setInitialSetting__Q34Game4Nest3ObjFPQ24Game21EnemyInitialParamBase:
/* 8036CC9C 00369BDC  4E 80 00 20 */	blr 

.global update__Q34Game4Nest3ObjFv
update__Q34Game4Nest3ObjFv:
/* 8036CCA0 00369BE0  4E 80 00 20 */	blr 

.global doUpdate__Q34Game4Nest3ObjFv
doUpdate__Q34Game4Nest3ObjFv:
/* 8036CCA4 00369BE4  4E 80 00 20 */	blr 

.global doSimulation__Q34Game4Nest3ObjFf
doSimulation__Q34Game4Nest3ObjFf:
/* 8036CCA8 00369BE8  4E 80 00 20 */	blr 

.global doAnimationCullingOn__Q34Game4Nest3ObjFv
doAnimationCullingOn__Q34Game4Nest3ObjFv:
/* 8036CCAC 00369BEC  4E 80 00 20 */	blr 

.global doAnimationCullingOff__Q34Game4Nest3ObjFv
doAnimationCullingOff__Q34Game4Nest3ObjFv:
/* 8036CCB0 00369BF0  4E 80 00 20 */	blr 

.global doUpdateCommon__Q34Game4Nest3ObjFv
doUpdateCommon__Q34Game4Nest3ObjFv:
/* 8036CCB4 00369BF4  4E 80 00 20 */	blr 

.global doEntry__Q34Game4Nest3ObjFv
doEntry__Q34Game4Nest3ObjFv:
/* 8036CCB8 00369BF8  4E 80 00 20 */	blr 

.global doViewCalc__Q34Game4Nest3ObjFv
doViewCalc__Q34Game4Nest3ObjFv:
/* 8036CCBC 00369BFC  4E 80 00 20 */	blr 

.global isLivingThing__Q34Game4Nest3ObjFv
isLivingThing__Q34Game4Nest3ObjFv:
/* 8036CCC0 00369C00  38 60 00 00 */	li r3, 0
/* 8036CCC4 00369C04  4E 80 00 20 */	blr 

.global ignoreAtari__Q34Game4Nest3ObjFPQ24Game8Creature
ignoreAtari__Q34Game4Nest3ObjFPQ24Game8Creature:
/* 8036CCC8 00369C08  38 60 00 00 */	li r3, 0
/* 8036CCCC 00369C0C  4E 80 00 20 */	blr 

.global needShadow__Q34Game4Nest3ObjFv
needShadow__Q34Game4Nest3ObjFv:
/* 8036CCD0 00369C10  38 60 00 00 */	li r3, 0
/* 8036CCD4 00369C14  4E 80 00 20 */	blr 

.global getEnemyTypeID__Q34Game4Nest3ObjFv
getEnemyTypeID__Q34Game4Nest3ObjFv:
/* 8036CCD8 00369C18  38 60 00 53 */	li r3, 0x53
/* 8036CCDC 00369C1C  4E 80 00 20 */	blr 

.global getSound_CurrAnimFrame__Q34Game4Nest3ObjFv
getSound_CurrAnimFrame__Q34Game4Nest3ObjFv:
/* 8036CCE0 00369C20  C0 22 06 98 */	lfs f1, lbl_8051E9F8@sda21(r2)
/* 8036CCE4 00369C24  4E 80 00 20 */	blr 

.global getSound_CurrAnimSpeed__Q34Game4Nest3ObjFv
getSound_CurrAnimSpeed__Q34Game4Nest3ObjFv:
/* 8036CCE8 00369C28  C0 22 06 94 */	lfs f1, lbl_8051E9F4@sda21(r2)
/* 8036CCEC 00369C2C  4E 80 00 20 */	blr 
