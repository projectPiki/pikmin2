.include "macros.inc"

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global __ct__Q34Game10BlueChappy3MgrFiUc
__ct__Q34Game10BlueChappy3MgrFiUc:
/* 8012B8AC 001287EC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8012B8B0 001287F0  7C 08 02 A6 */	mflr r0
/* 8012B8B4 001287F4  90 01 00 14 */	stw r0, 0x14(r1)
/* 8012B8B8 001287F8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8012B8BC 001287FC  7C 7F 1B 78 */	mr r31, r3
/* 8012B8C0 00128800  4B FF ED B1 */	bl __ct__Q34Game10ChappyBase3MgrFiUc
/* 8012B8C4 00128804  3C 60 80 4B */	lis r3, __vt__Q34Game10BlueChappy3Mgr@ha
/* 8012B8C8 00128808  3C 80 80 48 */	lis r4, lbl_8047C014@ha
/* 8012B8CC 0012880C  38 A3 E2 B0 */	addi r5, r3, __vt__Q34Game10BlueChappy3Mgr@l
/* 8012B8D0 00128810  7F E3 FB 78 */	mr r3, r31
/* 8012B8D4 00128814  90 BF 00 00 */	stw r5, 0(r31)
/* 8012B8D8 00128818  38 A5 00 38 */	addi r5, r5, 0x38
/* 8012B8DC 0012881C  38 04 C0 14 */	addi r0, r4, lbl_8047C014@l
/* 8012B8E0 00128820  90 BF 00 04 */	stw r5, 4(r31)
/* 8012B8E4 00128824  90 1F 00 18 */	stw r0, 0x18(r31)
/* 8012B8E8 00128828  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8012B8EC 0012882C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8012B8F0 00128830  7C 08 03 A6 */	mtlr r0
/* 8012B8F4 00128834  38 21 00 10 */	addi r1, r1, 0x10
/* 8012B8F8 00128838  4E 80 00 20 */	blr 

.global loadTexData__Q34Game10BlueChappy3MgrFv
loadTexData__Q34Game10BlueChappy3MgrFv:
/* 8012B8FC 0012883C  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 8012B900 00128840  7C 08 02 A6 */	mflr r0
/* 8012B904 00128844  90 01 00 44 */	stw r0, 0x44(r1)
/* 8012B908 00128848  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 8012B90C 0012884C  7C 7F 1B 78 */	mr r31, r3
/* 8012B910 00128850  38 61 00 08 */	addi r3, r1, 8
/* 8012B914 00128854  80 8D 83 E0 */	lwz r4, "cChappyChangeTexName0__Q34Game10BlueChappy27@unnamed@BlueChappyMgr_cpp@"@sda21(r13)
/* 8012B918 00128858  48 32 0D 05 */	bl __ct__Q212LoadResource11ArgAramOnlyFPCc
/* 8012B91C 0012885C  80 0D 83 E0 */	lwz r0, "cChappyChangeTexName0__Q34Game10BlueChappy27@unnamed@BlueChappyMgr_cpp@"@sda21(r13)
/* 8012B920 00128860  38 81 00 08 */	addi r4, r1, 8
/* 8012B924 00128864  80 6D 9C 28 */	lwz r3, gLoadResourceMgr@sda21(r13)
/* 8012B928 00128868  90 01 00 08 */	stw r0, 8(r1)
/* 8012B92C 0012886C  48 32 0E 75 */	bl load__Q212LoadResource3MgrFRQ212LoadResource3Arg
/* 8012B930 00128870  80 03 00 30 */	lwz r0, 0x30(r3)
/* 8012B934 00128874  38 81 00 08 */	addi r4, r1, 8
/* 8012B938 00128878  90 1F 00 44 */	stw r0, 0x44(r31)
/* 8012B93C 0012887C  80 0D 83 E4 */	lwz r0, "cChappyChangeTexName1__Q34Game10BlueChappy27@unnamed@BlueChappyMgr_cpp@"@sda21(r13)
/* 8012B940 00128880  80 6D 9C 28 */	lwz r3, gLoadResourceMgr@sda21(r13)
/* 8012B944 00128884  90 01 00 08 */	stw r0, 8(r1)
/* 8012B948 00128888  48 32 0E 59 */	bl load__Q212LoadResource3MgrFRQ212LoadResource3Arg
/* 8012B94C 0012888C  80 03 00 30 */	lwz r0, 0x30(r3)
/* 8012B950 00128890  90 1F 00 48 */	stw r0, 0x48(r31)
/* 8012B954 00128894  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8012B958 00128898  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 8012B95C 0012889C  7C 08 03 A6 */	mtlr r0
/* 8012B960 001288A0  38 21 00 40 */	addi r1, r1, 0x40
/* 8012B964 001288A4  4E 80 00 20 */	blr 

.global doAlloc__Q34Game10BlueChappy3MgrFv
doAlloc__Q34Game10BlueChappy3MgrFv:
/* 8012B968 001288A8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8012B96C 001288AC  7C 08 02 A6 */	mflr r0
/* 8012B970 001288B0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8012B974 001288B4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8012B978 001288B8  7C 7F 1B 78 */	mr r31, r3
/* 8012B97C 001288BC  38 60 08 84 */	li r3, 0x884
/* 8012B980 001288C0  4B EF 85 25 */	bl __nw__FUl
/* 8012B984 001288C4  7C 64 1B 79 */	or. r4, r3, r3
/* 8012B988 001288C8  41 82 00 0C */	beq lbl_8012B994
/* 8012B98C 001288CC  4B FE DF AD */	bl __ct__Q34Game10ChappyBase5ParmsFv
/* 8012B990 001288D0  7C 64 1B 78 */	mr r4, r3
lbl_8012B994:
/* 8012B994 001288D4  7F E3 FB 78 */	mr r3, r31
/* 8012B998 001288D8  48 00 3F 05 */	bl init__Q24Game12EnemyMgrBaseFPQ24Game14EnemyParmsBase
/* 8012B99C 001288DC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8012B9A0 001288E0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8012B9A4 001288E4  7C 08 03 A6 */	mtlr r0
/* 8012B9A8 001288E8  38 21 00 10 */	addi r1, r1, 0x10
/* 8012B9AC 001288EC  4E 80 00 20 */	blr 

.global __dt__Q34Game10BlueChappy3MgrFv
__dt__Q34Game10BlueChappy3MgrFv:
/* 8012B9B0 001288F0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8012B9B4 001288F4  7C 08 02 A6 */	mflr r0
/* 8012B9B8 001288F8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8012B9BC 001288FC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8012B9C0 00128900  7C 9F 23 78 */	mr r31, r4
/* 8012B9C4 00128904  93 C1 00 08 */	stw r30, 8(r1)
/* 8012B9C8 00128908  7C 7E 1B 79 */	or. r30, r3, r3
/* 8012B9CC 0012890C  41 82 00 90 */	beq lbl_8012BA5C
/* 8012B9D0 00128910  3C 60 80 4B */	lis r3, __vt__Q34Game10BlueChappy3Mgr@ha
/* 8012B9D4 00128914  38 63 E2 B0 */	addi r3, r3, __vt__Q34Game10BlueChappy3Mgr@l
/* 8012B9D8 00128918  90 7E 00 00 */	stw r3, 0(r30)
/* 8012B9DC 0012891C  38 03 00 38 */	addi r0, r3, 0x38
/* 8012B9E0 00128920  90 1E 00 04 */	stw r0, 4(r30)
/* 8012B9E4 00128924  41 82 00 68 */	beq lbl_8012BA4C
/* 8012B9E8 00128928  3C 60 80 4B */	lis r3, __vt__Q34Game10ChappyBase3Mgr@ha
/* 8012B9EC 0012892C  38 63 DE 18 */	addi r3, r3, __vt__Q34Game10ChappyBase3Mgr@l
/* 8012B9F0 00128930  90 7E 00 00 */	stw r3, 0(r30)
/* 8012B9F4 00128934  38 03 00 38 */	addi r0, r3, 0x38
/* 8012B9F8 00128938  90 1E 00 04 */	stw r0, 4(r30)
/* 8012B9FC 0012893C  41 82 00 50 */	beq lbl_8012BA4C
/* 8012BA00 00128940  3C 60 80 4B */	lis r3, __vt__Q24Game12EnemyMgrBase@ha
/* 8012BA04 00128944  38 63 F8 A0 */	addi r3, r3, __vt__Q24Game12EnemyMgrBase@l
/* 8012BA08 00128948  90 7E 00 00 */	stw r3, 0(r30)
/* 8012BA0C 0012894C  38 03 00 38 */	addi r0, r3, 0x38
/* 8012BA10 00128950  90 1E 00 04 */	stw r0, 4(r30)
/* 8012BA14 00128954  41 82 00 38 */	beq lbl_8012BA4C
/* 8012BA18 00128958  3C 60 80 4B */	lis r3, __vt__Q24Game13IEnemyMgrBase@ha
/* 8012BA1C 0012895C  34 1E 00 04 */	addic. r0, r30, 4
/* 8012BA20 00128960  38 63 AC FC */	addi r3, r3, __vt__Q24Game13IEnemyMgrBase@l
/* 8012BA24 00128964  90 7E 00 00 */	stw r3, 0(r30)
/* 8012BA28 00128968  38 03 00 38 */	addi r0, r3, 0x38
/* 8012BA2C 0012896C  90 1E 00 04 */	stw r0, 4(r30)
/* 8012BA30 00128970  41 82 00 1C */	beq lbl_8012BA4C
/* 8012BA34 00128974  3C 80 80 4B */	lis r4, __vt__16GenericContainer@ha
/* 8012BA38 00128978  38 7E 00 04 */	addi r3, r30, 4
/* 8012BA3C 0012897C  38 04 AC DC */	addi r0, r4, __vt__16GenericContainer@l
/* 8012BA40 00128980  38 80 00 00 */	li r4, 0
/* 8012BA44 00128984  90 1E 00 04 */	stw r0, 4(r30)
/* 8012BA48 00128988  48 2E 5B 41 */	bl __dt__5CNodeFv
lbl_8012BA4C:
/* 8012BA4C 0012898C  7F E0 07 35 */	extsh. r0, r31
/* 8012BA50 00128990  40 81 00 0C */	ble lbl_8012BA5C
/* 8012BA54 00128994  7F C3 F3 78 */	mr r3, r30
/* 8012BA58 00128998  4B EF 86 5D */	bl __dl__FPv
lbl_8012BA5C:
/* 8012BA5C 0012899C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8012BA60 001289A0  7F C3 F3 78 */	mr r3, r30
/* 8012BA64 001289A4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8012BA68 001289A8  83 C1 00 08 */	lwz r30, 8(r1)
/* 8012BA6C 001289AC  7C 08 03 A6 */	mtlr r0
/* 8012BA70 001289B0  38 21 00 10 */	addi r1, r1, 0x10
/* 8012BA74 001289B4  4E 80 00 20 */	blr 

.global getEnemyTypeID__Q34Game10BlueChappy3MgrFv
getEnemyTypeID__Q34Game10BlueChappy3MgrFv:
/* 8012BA78 001289B8  38 60 00 2A */	li r3, 0x2a
/* 8012BA7C 001289BC  4E 80 00 20 */	blr 

.global getChangeTexture0__Q34Game10BlueChappy3MgrFv
getChangeTexture0__Q34Game10BlueChappy3MgrFv:
/* 8012BA80 001289C0  80 63 00 44 */	lwz r3, 0x44(r3)
/* 8012BA84 001289C4  4E 80 00 20 */	blr 

.global getChangeTexture1__Q34Game10BlueChappy3MgrFv
getChangeTexture1__Q34Game10BlueChappy3MgrFv:
/* 8012BA88 001289C8  80 63 00 48 */	lwz r3, 0x48(r3)
/* 8012BA8C 001289CC  4E 80 00 20 */	blr 

.global createObj__Q34Game10BlueChappy3MgrFi
createObj__Q34Game10BlueChappy3MgrFi:
/* 8012BA90 001289D0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8012BA94 001289D4  7C 08 02 A6 */	mflr r0
/* 8012BA98 001289D8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8012BA9C 001289DC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8012BAA0 001289E0  7C 9F 23 78 */	mr r31, r4
/* 8012BAA4 001289E4  93 C1 00 08 */	stw r30, 8(r1)
/* 8012BAA8 001289E8  7C 7E 1B 78 */	mr r30, r3
/* 8012BAAC 001289EC  1C 7F 02 F4 */	mulli r3, r31, 0x2f4
/* 8012BAB0 001289F0  38 63 00 10 */	addi r3, r3, 0x10
/* 8012BAB4 001289F4  4B EF 84 F9 */	bl __nwa__FUl
/* 8012BAB8 001289F8  3C 80 80 13 */	lis r4, __ct__Q34Game10BlueChappy3ObjFv@ha
/* 8012BABC 001289FC  3C A0 80 13 */	lis r5, __dt__Q34Game10BlueChappy3ObjFv@ha
/* 8012BAC0 00128A00  38 84 BB F4 */	addi r4, r4, __ct__Q34Game10BlueChappy3ObjFv@l
/* 8012BAC4 00128A04  7F E7 FB 78 */	mr r7, r31
/* 8012BAC8 00128A08  38 A5 BA F0 */	addi r5, r5, __dt__Q34Game10BlueChappy3ObjFv@l
/* 8012BACC 00128A0C  38 C0 02 F4 */	li r6, 0x2f4
/* 8012BAD0 00128A10  4B F9 5F 21 */	bl __construct_new_array
/* 8012BAD4 00128A14  90 7E 00 4C */	stw r3, 0x4c(r30)
/* 8012BAD8 00128A18  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8012BADC 00128A1C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8012BAE0 00128A20  83 C1 00 08 */	lwz r30, 8(r1)
/* 8012BAE4 00128A24  7C 08 03 A6 */	mtlr r0
/* 8012BAE8 00128A28  38 21 00 10 */	addi r1, r1, 0x10
/* 8012BAEC 00128A2C  4E 80 00 20 */	blr 

.global __dt__Q34Game10BlueChappy3ObjFv
__dt__Q34Game10BlueChappy3ObjFv:
/* 8012BAF0 00128A30  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8012BAF4 00128A34  7C 08 02 A6 */	mflr r0
/* 8012BAF8 00128A38  90 01 00 14 */	stw r0, 0x14(r1)
/* 8012BAFC 00128A3C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8012BB00 00128A40  7C 9F 23 78 */	mr r31, r4
/* 8012BB04 00128A44  93 C1 00 08 */	stw r30, 8(r1)
/* 8012BB08 00128A48  7C 7E 1B 79 */	or. r30, r3, r3
/* 8012BB0C 00128A4C  41 82 00 B4 */	beq lbl_8012BBC0
/* 8012BB10 00128A50  3C 60 80 4B */	lis r3, __vt__Q34Game10BlueChappy3Obj@ha
/* 8012BB14 00128A54  38 BE 02 E4 */	addi r5, r30, 0x2e4
/* 8012BB18 00128A58  38 83 E3 98 */	addi r4, r3, __vt__Q34Game10BlueChappy3Obj@l
/* 8012BB1C 00128A5C  90 9E 00 00 */	stw r4, 0(r30)
/* 8012BB20 00128A60  38 64 01 B0 */	addi r3, r4, 0x1b0
/* 8012BB24 00128A64  38 04 03 34 */	addi r0, r4, 0x334
/* 8012BB28 00128A68  90 7E 01 78 */	stw r3, 0x178(r30)
/* 8012BB2C 00128A6C  80 7E 01 7C */	lwz r3, 0x17c(r30)
/* 8012BB30 00128A70  90 03 00 00 */	stw r0, 0(r3)
/* 8012BB34 00128A74  80 7E 01 7C */	lwz r3, 0x17c(r30)
/* 8012BB38 00128A78  7C 03 28 50 */	subf r0, r3, r5
/* 8012BB3C 00128A7C  90 03 00 0C */	stw r0, 0xc(r3)
/* 8012BB40 00128A80  41 82 00 70 */	beq lbl_8012BBB0
/* 8012BB44 00128A84  3C 60 80 4B */	lis r3, __vt__Q34Game10ChappyBase3Obj@ha
/* 8012BB48 00128A88  38 83 DF 4C */	addi r4, r3, __vt__Q34Game10ChappyBase3Obj@l
/* 8012BB4C 00128A8C  90 9E 00 00 */	stw r4, 0(r30)
/* 8012BB50 00128A90  38 64 01 B0 */	addi r3, r4, 0x1b0
/* 8012BB54 00128A94  38 04 03 34 */	addi r0, r4, 0x334
/* 8012BB58 00128A98  90 7E 01 78 */	stw r3, 0x178(r30)
/* 8012BB5C 00128A9C  80 7E 01 7C */	lwz r3, 0x17c(r30)
/* 8012BB60 00128AA0  90 03 00 00 */	stw r0, 0(r3)
/* 8012BB64 00128AA4  80 7E 01 7C */	lwz r3, 0x17c(r30)
/* 8012BB68 00128AA8  7C 03 28 50 */	subf r0, r3, r5
/* 8012BB6C 00128AAC  90 03 00 0C */	stw r0, 0xc(r3)
/* 8012BB70 00128AB0  41 82 00 40 */	beq lbl_8012BBB0
/* 8012BB74 00128AB4  3C 60 80 4B */	lis r3, __vt__Q24Game9EnemyBase@ha
/* 8012BB78 00128AB8  38 1E 02 BC */	addi r0, r30, 0x2bc
/* 8012BB7C 00128ABC  38 83 A3 24 */	addi r4, r3, __vt__Q24Game9EnemyBase@l
/* 8012BB80 00128AC0  38 7E 02 90 */	addi r3, r30, 0x290
/* 8012BB84 00128AC4  90 9E 00 00 */	stw r4, 0(r30)
/* 8012BB88 00128AC8  38 A4 01 B0 */	addi r5, r4, 0x1b0
/* 8012BB8C 00128ACC  38 C4 02 F8 */	addi r6, r4, 0x2f8
/* 8012BB90 00128AD0  38 80 FF FF */	li r4, -1
/* 8012BB94 00128AD4  90 BE 01 78 */	stw r5, 0x178(r30)
/* 8012BB98 00128AD8  80 BE 01 7C */	lwz r5, 0x17c(r30)
/* 8012BB9C 00128ADC  90 C5 00 00 */	stw r6, 0(r5)
/* 8012BBA0 00128AE0  80 BE 01 7C */	lwz r5, 0x17c(r30)
/* 8012BBA4 00128AE4  7C 05 00 50 */	subf r0, r5, r0
/* 8012BBA8 00128AE8  90 05 00 0C */	stw r0, 0xc(r5)
/* 8012BBAC 00128AEC  48 2E 59 DD */	bl __dt__5CNodeFv
lbl_8012BBB0:
/* 8012BBB0 00128AF0  7F E0 07 35 */	extsh. r0, r31
/* 8012BBB4 00128AF4  40 81 00 0C */	ble lbl_8012BBC0
/* 8012BBB8 00128AF8  7F C3 F3 78 */	mr r3, r30
/* 8012BBBC 00128AFC  4B EF 84 F9 */	bl __dl__FPv
lbl_8012BBC0:
/* 8012BBC0 00128B00  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8012BBC4 00128B04  7F C3 F3 78 */	mr r3, r30
/* 8012BBC8 00128B08  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8012BBCC 00128B0C  83 C1 00 08 */	lwz r30, 8(r1)
/* 8012BBD0 00128B10  7C 08 03 A6 */	mtlr r0
/* 8012BBD4 00128B14  38 21 00 10 */	addi r1, r1, 0x10
/* 8012BBD8 00128B18  4E 80 00 20 */	blr 

.global getEnemy__Q34Game10BlueChappy3MgrFi
getEnemy__Q34Game10BlueChappy3MgrFi:
/* 8012BBDC 00128B1C  1C 04 02 F4 */	mulli r0, r4, 0x2f4
/* 8012BBE0 00128B20  80 63 00 4C */	lwz r3, 0x4c(r3)
/* 8012BBE4 00128B24  7C 63 02 14 */	add r3, r3, r0
/* 8012BBE8 00128B28  4E 80 00 20 */	blr 

.global "@4@__dt__Q34Game10BlueChappy3MgrFv"
"@4@__dt__Q34Game10BlueChappy3MgrFv":
/* 8012BBEC 00128B2C  38 63 FF FC */	addi r3, r3, -4
/* 8012BBF0 00128B30  4B FF FD C0 */	b __dt__Q34Game10BlueChappy3MgrFv
