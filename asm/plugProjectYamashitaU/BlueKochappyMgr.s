.include "macros.inc"

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global __ct__Q34Game12BlueKochappy3MgrFiUc
__ct__Q34Game12BlueKochappy3MgrFiUc:
/* 8012CC1C 00129B5C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8012CC20 00129B60  7C 08 02 A6 */	mflr r0
/* 8012CC24 00129B64  90 01 00 14 */	stw r0, 0x14(r1)
/* 8012CC28 00129B68  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8012CC2C 00129B6C  7C 7F 1B 78 */	mr r31, r3
/* 8012CC30 00129B70  48 00 0B DD */	bl __ct__Q34Game12KochappyBase3MgrFiUc
/* 8012CC34 00129B74  3C 60 80 4B */	lis r3, __vt__Q34Game12BlueKochappy3Mgr@ha
/* 8012CC38 00129B78  3C 80 80 48 */	lis r4, lbl_8047C0F4@ha
/* 8012CC3C 00129B7C  38 A3 EB B8 */	addi r5, r3, __vt__Q34Game12BlueKochappy3Mgr@l
/* 8012CC40 00129B80  7F E3 FB 78 */	mr r3, r31
/* 8012CC44 00129B84  90 BF 00 00 */	stw r5, 0(r31)
/* 8012CC48 00129B88  38 A5 00 38 */	addi r5, r5, 0x38
/* 8012CC4C 00129B8C  38 04 C0 F4 */	addi r0, r4, lbl_8047C0F4@l
/* 8012CC50 00129B90  90 BF 00 04 */	stw r5, 4(r31)
/* 8012CC54 00129B94  90 1F 00 18 */	stw r0, 0x18(r31)
/* 8012CC58 00129B98  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8012CC5C 00129B9C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8012CC60 00129BA0  7C 08 03 A6 */	mtlr r0
/* 8012CC64 00129BA4  38 21 00 10 */	addi r1, r1, 0x10
/* 8012CC68 00129BA8  4E 80 00 20 */	blr 

.global doAlloc__Q34Game12BlueKochappy3MgrFv
doAlloc__Q34Game12BlueKochappy3MgrFv:
/* 8012CC6C 00129BAC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8012CC70 00129BB0  7C 08 02 A6 */	mflr r0
/* 8012CC74 00129BB4  90 01 00 14 */	stw r0, 0x14(r1)
/* 8012CC78 00129BB8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8012CC7C 00129BBC  7C 7F 1B 78 */	mr r31, r3
/* 8012CC80 00129BC0  38 60 08 80 */	li r3, 0x880
/* 8012CC84 00129BC4  4B EF 72 21 */	bl __nw__FUl
/* 8012CC88 00129BC8  7C 64 1B 79 */	or. r4, r3, r3
/* 8012CC8C 00129BCC  41 82 00 0C */	beq lbl_8012CC98
/* 8012CC90 00129BD0  4B FE 57 6D */	bl __ct__Q34Game12KochappyBase5ParmsFv
/* 8012CC94 00129BD4  7C 64 1B 78 */	mr r4, r3
lbl_8012CC98:
/* 8012CC98 00129BD8  7F E3 FB 78 */	mr r3, r31
/* 8012CC9C 00129BDC  48 00 2C 01 */	bl init__Q24Game12EnemyMgrBaseFPQ24Game14EnemyParmsBase
/* 8012CCA0 00129BE0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8012CCA4 00129BE4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8012CCA8 00129BE8  7C 08 03 A6 */	mtlr r0
/* 8012CCAC 00129BEC  38 21 00 10 */	addi r1, r1, 0x10
/* 8012CCB0 00129BF0  4E 80 00 20 */	blr 

.global loadTexData__Q34Game12BlueKochappy3MgrFv
loadTexData__Q34Game12BlueKochappy3MgrFv:
/* 8012CCB4 00129BF4  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 8012CCB8 00129BF8  7C 08 02 A6 */	mflr r0
/* 8012CCBC 00129BFC  90 01 00 44 */	stw r0, 0x44(r1)
/* 8012CCC0 00129C00  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 8012CCC4 00129C04  7C 7F 1B 78 */	mr r31, r3
/* 8012CCC8 00129C08  38 61 00 08 */	addi r3, r1, 8
/* 8012CCCC 00129C0C  80 8D 83 F0 */	lwz r4, cKochappyChangeTexName__Q34Game12BlueKochappy29$$2unnamed$$2BlueKochappyMgr_cpp$$2@sda21(r13)
/* 8012CCD0 00129C10  48 31 F9 4D */	bl __ct__Q212LoadResource11ArgAramOnlyFPCc
/* 8012CCD4 00129C14  80 6D 9C 28 */	lwz r3, gLoadResourceMgr@sda21(r13)
/* 8012CCD8 00129C18  38 81 00 08 */	addi r4, r1, 8
/* 8012CCDC 00129C1C  48 31 FA C5 */	bl load__Q212LoadResource3MgrFRQ212LoadResource3Arg
/* 8012CCE0 00129C20  80 03 00 30 */	lwz r0, 0x30(r3)
/* 8012CCE4 00129C24  90 1F 00 44 */	stw r0, 0x44(r31)
/* 8012CCE8 00129C28  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8012CCEC 00129C2C  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 8012CCF0 00129C30  7C 08 03 A6 */	mtlr r0
/* 8012CCF4 00129C34  38 21 00 40 */	addi r1, r1, 0x40
/* 8012CCF8 00129C38  4E 80 00 20 */	blr 

.global __dt__Q34Game12BlueKochappy3MgrFv
__dt__Q34Game12BlueKochappy3MgrFv:
/* 8012CCFC 00129C3C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8012CD00 00129C40  7C 08 02 A6 */	mflr r0
/* 8012CD04 00129C44  90 01 00 14 */	stw r0, 0x14(r1)
/* 8012CD08 00129C48  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8012CD0C 00129C4C  7C 9F 23 78 */	mr r31, r4
/* 8012CD10 00129C50  93 C1 00 08 */	stw r30, 8(r1)
/* 8012CD14 00129C54  7C 7E 1B 79 */	or. r30, r3, r3
/* 8012CD18 00129C58  41 82 00 90 */	beq lbl_8012CDA8
/* 8012CD1C 00129C5C  3C 60 80 4B */	lis r3, __vt__Q34Game12BlueKochappy3Mgr@ha
/* 8012CD20 00129C60  38 63 EB B8 */	addi r3, r3, __vt__Q34Game12BlueKochappy3Mgr@l
/* 8012CD24 00129C64  90 7E 00 00 */	stw r3, 0(r30)
/* 8012CD28 00129C68  38 03 00 38 */	addi r0, r3, 0x38
/* 8012CD2C 00129C6C  90 1E 00 04 */	stw r0, 4(r30)
/* 8012CD30 00129C70  41 82 00 68 */	beq lbl_8012CD98
/* 8012CD34 00129C74  3C 60 80 4B */	lis r3, __vt__Q34Game12KochappyBase3Mgr@ha
/* 8012CD38 00129C78  38 63 F3 F8 */	addi r3, r3, __vt__Q34Game12KochappyBase3Mgr@l
/* 8012CD3C 00129C7C  90 7E 00 00 */	stw r3, 0(r30)
/* 8012CD40 00129C80  38 03 00 38 */	addi r0, r3, 0x38
/* 8012CD44 00129C84  90 1E 00 04 */	stw r0, 4(r30)
/* 8012CD48 00129C88  41 82 00 50 */	beq lbl_8012CD98
/* 8012CD4C 00129C8C  3C 60 80 4B */	lis r3, __vt__Q24Game12EnemyMgrBase@ha
/* 8012CD50 00129C90  38 63 F8 A0 */	addi r3, r3, __vt__Q24Game12EnemyMgrBase@l
/* 8012CD54 00129C94  90 7E 00 00 */	stw r3, 0(r30)
/* 8012CD58 00129C98  38 03 00 38 */	addi r0, r3, 0x38
/* 8012CD5C 00129C9C  90 1E 00 04 */	stw r0, 4(r30)
/* 8012CD60 00129CA0  41 82 00 38 */	beq lbl_8012CD98
/* 8012CD64 00129CA4  3C 60 80 4B */	lis r3, __vt__Q24Game13IEnemyMgrBase@ha
/* 8012CD68 00129CA8  34 1E 00 04 */	addic. r0, r30, 4
/* 8012CD6C 00129CAC  38 63 AC FC */	addi r3, r3, __vt__Q24Game13IEnemyMgrBase@l
/* 8012CD70 00129CB0  90 7E 00 00 */	stw r3, 0(r30)
/* 8012CD74 00129CB4  38 03 00 38 */	addi r0, r3, 0x38
/* 8012CD78 00129CB8  90 1E 00 04 */	stw r0, 4(r30)
/* 8012CD7C 00129CBC  41 82 00 1C */	beq lbl_8012CD98
/* 8012CD80 00129CC0  3C 80 80 4B */	lis r4, __vt__16GenericContainer@ha
/* 8012CD84 00129CC4  38 7E 00 04 */	addi r3, r30, 4
/* 8012CD88 00129CC8  38 04 AC DC */	addi r0, r4, __vt__16GenericContainer@l
/* 8012CD8C 00129CCC  38 80 00 00 */	li r4, 0
/* 8012CD90 00129CD0  90 1E 00 04 */	stw r0, 4(r30)
/* 8012CD94 00129CD4  48 2E 47 F5 */	bl __dt__5CNodeFv
lbl_8012CD98:
/* 8012CD98 00129CD8  7F E0 07 35 */	extsh. r0, r31
/* 8012CD9C 00129CDC  40 81 00 0C */	ble lbl_8012CDA8
/* 8012CDA0 00129CE0  7F C3 F3 78 */	mr r3, r30
/* 8012CDA4 00129CE4  4B EF 73 11 */	bl __dl__FPv
lbl_8012CDA8:
/* 8012CDA8 00129CE8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8012CDAC 00129CEC  7F C3 F3 78 */	mr r3, r30
/* 8012CDB0 00129CF0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8012CDB4 00129CF4  83 C1 00 08 */	lwz r30, 8(r1)
/* 8012CDB8 00129CF8  7C 08 03 A6 */	mtlr r0
/* 8012CDBC 00129CFC  38 21 00 10 */	addi r1, r1, 0x10
/* 8012CDC0 00129D00  4E 80 00 20 */	blr 

.global getChangeTexture__Q34Game12BlueKochappy3MgrFv
getChangeTexture__Q34Game12BlueKochappy3MgrFv:
/* 8012CDC4 00129D04  80 63 00 44 */	lwz r3, 0x44(r3)
/* 8012CDC8 00129D08  4E 80 00 20 */	blr 

.global getEnemyTypeID__Q34Game12BlueKochappy3MgrFv
getEnemyTypeID__Q34Game12BlueKochappy3MgrFv:
/* 8012CDCC 00129D0C  38 60 00 2C */	li r3, 0x2c
/* 8012CDD0 00129D10  4E 80 00 20 */	blr 

.global createObj__Q34Game12BlueKochappy3MgrFi
createObj__Q34Game12BlueKochappy3MgrFi:
/* 8012CDD4 00129D14  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8012CDD8 00129D18  7C 08 02 A6 */	mflr r0
/* 8012CDDC 00129D1C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8012CDE0 00129D20  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8012CDE4 00129D24  7C 9F 23 78 */	mr r31, r4
/* 8012CDE8 00129D28  93 C1 00 08 */	stw r30, 8(r1)
/* 8012CDEC 00129D2C  7C 7E 1B 78 */	mr r30, r3
/* 8012CDF0 00129D30  1C 7F 02 E8 */	mulli r3, r31, 0x2e8
/* 8012CDF4 00129D34  38 63 00 10 */	addi r3, r3, 0x10
/* 8012CDF8 00129D38  4B EF 71 B5 */	bl __nwa__FUl
/* 8012CDFC 00129D3C  3C 80 80 13 */	lis r4, __ct__Q34Game12BlueKochappy3ObjFv@ha
/* 8012CE00 00129D40  3C A0 80 13 */	lis r5, __dt__Q34Game12BlueKochappy3ObjFv@ha
/* 8012CE04 00129D44  38 84 CF 38 */	addi r4, r4, __ct__Q34Game12BlueKochappy3ObjFv@l
/* 8012CE08 00129D48  7F E7 FB 78 */	mr r7, r31
/* 8012CE0C 00129D4C  38 A5 CE 34 */	addi r5, r5, __dt__Q34Game12BlueKochappy3ObjFv@l
/* 8012CE10 00129D50  38 C0 02 E8 */	li r6, 0x2e8
/* 8012CE14 00129D54  4B F9 4B DD */	bl __construct_new_array
/* 8012CE18 00129D58  90 7E 00 48 */	stw r3, 0x48(r30)
/* 8012CE1C 00129D5C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8012CE20 00129D60  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8012CE24 00129D64  83 C1 00 08 */	lwz r30, 8(r1)
/* 8012CE28 00129D68  7C 08 03 A6 */	mtlr r0
/* 8012CE2C 00129D6C  38 21 00 10 */	addi r1, r1, 0x10
/* 8012CE30 00129D70  4E 80 00 20 */	blr 

.global __dt__Q34Game12BlueKochappy3ObjFv
__dt__Q34Game12BlueKochappy3ObjFv:
/* 8012CE34 00129D74  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8012CE38 00129D78  7C 08 02 A6 */	mflr r0
/* 8012CE3C 00129D7C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8012CE40 00129D80  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8012CE44 00129D84  7C 9F 23 78 */	mr r31, r4
/* 8012CE48 00129D88  93 C1 00 08 */	stw r30, 8(r1)
/* 8012CE4C 00129D8C  7C 7E 1B 79 */	or. r30, r3, r3
/* 8012CE50 00129D90  41 82 00 B4 */	beq lbl_8012CF04
/* 8012CE54 00129D94  3C 60 80 4B */	lis r3, __vt__Q34Game12BlueKochappy3Obj@ha
/* 8012CE58 00129D98  38 BE 02 D8 */	addi r5, r30, 0x2d8
/* 8012CE5C 00129D9C  38 83 EC A0 */	addi r4, r3, __vt__Q34Game12BlueKochappy3Obj@l
/* 8012CE60 00129DA0  90 9E 00 00 */	stw r4, 0(r30)
/* 8012CE64 00129DA4  38 64 01 B0 */	addi r3, r4, 0x1b0
/* 8012CE68 00129DA8  38 04 03 08 */	addi r0, r4, 0x308
/* 8012CE6C 00129DAC  90 7E 01 78 */	stw r3, 0x178(r30)
/* 8012CE70 00129DB0  80 7E 01 7C */	lwz r3, 0x17c(r30)
/* 8012CE74 00129DB4  90 03 00 00 */	stw r0, 0(r3)
/* 8012CE78 00129DB8  80 7E 01 7C */	lwz r3, 0x17c(r30)
/* 8012CE7C 00129DBC  7C 03 28 50 */	subf r0, r3, r5
/* 8012CE80 00129DC0  90 03 00 0C */	stw r0, 0xc(r3)
/* 8012CE84 00129DC4  41 82 00 70 */	beq lbl_8012CEF4
/* 8012CE88 00129DC8  3C 60 80 4B */	lis r3, __vt__Q34Game12KochappyBase3Obj@ha
/* 8012CE8C 00129DCC  38 83 F4 E0 */	addi r4, r3, __vt__Q34Game12KochappyBase3Obj@l
/* 8012CE90 00129DD0  90 9E 00 00 */	stw r4, 0(r30)
/* 8012CE94 00129DD4  38 64 01 B0 */	addi r3, r4, 0x1b0
/* 8012CE98 00129DD8  38 04 03 08 */	addi r0, r4, 0x308
/* 8012CE9C 00129DDC  90 7E 01 78 */	stw r3, 0x178(r30)
/* 8012CEA0 00129DE0  80 7E 01 7C */	lwz r3, 0x17c(r30)
/* 8012CEA4 00129DE4  90 03 00 00 */	stw r0, 0(r3)
/* 8012CEA8 00129DE8  80 7E 01 7C */	lwz r3, 0x17c(r30)
/* 8012CEAC 00129DEC  7C 03 28 50 */	subf r0, r3, r5
/* 8012CEB0 00129DF0  90 03 00 0C */	stw r0, 0xc(r3)
/* 8012CEB4 00129DF4  41 82 00 40 */	beq lbl_8012CEF4
/* 8012CEB8 00129DF8  3C 60 80 4B */	lis r3, __vt__Q24Game9EnemyBase@ha
/* 8012CEBC 00129DFC  38 1E 02 BC */	addi r0, r30, 0x2bc
/* 8012CEC0 00129E00  38 83 A3 24 */	addi r4, r3, __vt__Q24Game9EnemyBase@l
/* 8012CEC4 00129E04  38 7E 02 90 */	addi r3, r30, 0x290
/* 8012CEC8 00129E08  90 9E 00 00 */	stw r4, 0(r30)
/* 8012CECC 00129E0C  38 A4 01 B0 */	addi r5, r4, 0x1b0
/* 8012CED0 00129E10  38 C4 02 F8 */	addi r6, r4, 0x2f8
/* 8012CED4 00129E14  38 80 FF FF */	li r4, -1
/* 8012CED8 00129E18  90 BE 01 78 */	stw r5, 0x178(r30)
/* 8012CEDC 00129E1C  80 BE 01 7C */	lwz r5, 0x17c(r30)
/* 8012CEE0 00129E20  90 C5 00 00 */	stw r6, 0(r5)
/* 8012CEE4 00129E24  80 BE 01 7C */	lwz r5, 0x17c(r30)
/* 8012CEE8 00129E28  7C 05 00 50 */	subf r0, r5, r0
/* 8012CEEC 00129E2C  90 05 00 0C */	stw r0, 0xc(r5)
/* 8012CEF0 00129E30  48 2E 46 99 */	bl __dt__5CNodeFv
lbl_8012CEF4:
/* 8012CEF4 00129E34  7F E0 07 35 */	extsh. r0, r31
/* 8012CEF8 00129E38  40 81 00 0C */	ble lbl_8012CF04
/* 8012CEFC 00129E3C  7F C3 F3 78 */	mr r3, r30
/* 8012CF00 00129E40  4B EF 71 B5 */	bl __dl__FPv
lbl_8012CF04:
/* 8012CF04 00129E44  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8012CF08 00129E48  7F C3 F3 78 */	mr r3, r30
/* 8012CF0C 00129E4C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8012CF10 00129E50  83 C1 00 08 */	lwz r30, 8(r1)
/* 8012CF14 00129E54  7C 08 03 A6 */	mtlr r0
/* 8012CF18 00129E58  38 21 00 10 */	addi r1, r1, 0x10
/* 8012CF1C 00129E5C  4E 80 00 20 */	blr 

.global getEnemy__Q34Game12BlueKochappy3MgrFi
getEnemy__Q34Game12BlueKochappy3MgrFi:
/* 8012CF20 00129E60  1C 04 02 E8 */	mulli r0, r4, 0x2e8
/* 8012CF24 00129E64  80 63 00 48 */	lwz r3, 0x48(r3)
/* 8012CF28 00129E68  7C 63 02 14 */	add r3, r3, r0
/* 8012CF2C 00129E6C  4E 80 00 20 */	blr 

.global $$24$$2__dt__Q34Game12BlueKochappy3MgrFv
$$24$$2__dt__Q34Game12BlueKochappy3MgrFv:
/* 8012CF30 00129E70  38 63 FF FC */	addi r3, r3, -4
/* 8012CF34 00129E74  4B FF FD C8 */	b __dt__Q34Game12BlueKochappy3MgrFv
