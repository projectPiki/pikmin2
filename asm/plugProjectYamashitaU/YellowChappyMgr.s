.include "macros.inc"

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global __ct__Q34Game12YellowChappy3MgrFiUc
__ct__Q34Game12YellowChappy3MgrFiUc:
/* 8012BFF0 00128F30  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8012BFF4 00128F34  7C 08 02 A6 */	mflr r0
/* 8012BFF8 00128F38  90 01 00 14 */	stw r0, 0x14(r1)
/* 8012BFFC 00128F3C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8012C000 00128F40  7C 7F 1B 78 */	mr r31, r3
/* 8012C004 00128F44  4B FF E6 6D */	bl __ct__Q34Game10ChappyBase3MgrFiUc
/* 8012C008 00128F48  3C 80 80 4B */	lis r4, __vt__Q34Game12YellowChappy3Mgr@ha
/* 8012C00C 00128F4C  38 7F 00 50 */	addi r3, r31, 0x50
/* 8012C010 00128F50  38 84 E7 00 */	addi r4, r4, __vt__Q34Game12YellowChappy3Mgr@l
/* 8012C014 00128F54  90 9F 00 00 */	stw r4, 0(r31)
/* 8012C018 00128F58  38 04 00 38 */	addi r0, r4, 0x38
/* 8012C01C 00128F5C  90 1F 00 04 */	stw r0, 4(r31)
/* 8012C020 00128F60  48 00 6F F1 */	bl __ct__Q214EffectAnimator3MgrFv
/* 8012C024 00128F64  3C 80 80 48 */	lis r4, lbl_8047C088@ha
/* 8012C028 00128F68  7F E3 FB 78 */	mr r3, r31
/* 8012C02C 00128F6C  38 04 C0 88 */	addi r0, r4, lbl_8047C088@l
/* 8012C030 00128F70  90 1F 00 18 */	stw r0, 0x18(r31)
/* 8012C034 00128F74  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8012C038 00128F78  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8012C03C 00128F7C  7C 08 03 A6 */	mtlr r0
/* 8012C040 00128F80  38 21 00 10 */	addi r1, r1, 0x10
/* 8012C044 00128F84  4E 80 00 20 */	blr 

.global loadTexData__Q34Game12YellowChappy3MgrFv
loadTexData__Q34Game12YellowChappy3MgrFv:
/* 8012C048 00128F88  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 8012C04C 00128F8C  7C 08 02 A6 */	mflr r0
/* 8012C050 00128F90  90 01 00 44 */	stw r0, 0x44(r1)
/* 8012C054 00128F94  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 8012C058 00128F98  7C 7F 1B 78 */	mr r31, r3
/* 8012C05C 00128F9C  38 61 00 08 */	addi r3, r1, 8
/* 8012C060 00128FA0  80 8D 83 E8 */	lwz r4, "cChappyChangeTexName0__Q34Game12YellowChappy29@unnamed@YellowChappyMgr_cpp@"@sda21(r13)
/* 8012C064 00128FA4  48 32 05 B9 */	bl __ct__Q212LoadResource11ArgAramOnlyFPCc
/* 8012C068 00128FA8  80 0D 83 E8 */	lwz r0, "cChappyChangeTexName0__Q34Game12YellowChappy29@unnamed@YellowChappyMgr_cpp@"@sda21(r13)
/* 8012C06C 00128FAC  38 81 00 08 */	addi r4, r1, 8
/* 8012C070 00128FB0  80 6D 9C 28 */	lwz r3, gLoadResourceMgr@sda21(r13)
/* 8012C074 00128FB4  90 01 00 08 */	stw r0, 8(r1)
/* 8012C078 00128FB8  48 32 07 29 */	bl load__Q212LoadResource3MgrFRQ212LoadResource3Arg
/* 8012C07C 00128FBC  80 03 00 30 */	lwz r0, 0x30(r3)
/* 8012C080 00128FC0  38 81 00 08 */	addi r4, r1, 8
/* 8012C084 00128FC4  90 1F 00 44 */	stw r0, 0x44(r31)
/* 8012C088 00128FC8  80 0D 83 EC */	lwz r0, "cChappyChangeTexName1__Q34Game12YellowChappy29@unnamed@YellowChappyMgr_cpp@"@sda21(r13)
/* 8012C08C 00128FCC  80 6D 9C 28 */	lwz r3, gLoadResourceMgr@sda21(r13)
/* 8012C090 00128FD0  90 01 00 08 */	stw r0, 8(r1)
/* 8012C094 00128FD4  48 32 07 0D */	bl load__Q212LoadResource3MgrFRQ212LoadResource3Arg
/* 8012C098 00128FD8  80 03 00 30 */	lwz r0, 0x30(r3)
/* 8012C09C 00128FDC  90 1F 00 48 */	stw r0, 0x48(r31)
/* 8012C0A0 00128FE0  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8012C0A4 00128FE4  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 8012C0A8 00128FE8  7C 08 03 A6 */	mtlr r0
/* 8012C0AC 00128FEC  38 21 00 40 */	addi r1, r1, 0x40
/* 8012C0B0 00128FF0  4E 80 00 20 */	blr 

.global doAlloc__Q34Game12YellowChappy3MgrFv
doAlloc__Q34Game12YellowChappy3MgrFv:
/* 8012C0B4 00128FF4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8012C0B8 00128FF8  7C 08 02 A6 */	mflr r0
/* 8012C0BC 00128FFC  90 01 00 14 */	stw r0, 0x14(r1)
/* 8012C0C0 00129000  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8012C0C4 00129004  7C 7F 1B 78 */	mr r31, r3
/* 8012C0C8 00129008  38 60 08 84 */	li r3, 0x884
/* 8012C0CC 0012900C  4B EF 7D D9 */	bl __nw__FUl
/* 8012C0D0 00129010  7C 64 1B 79 */	or. r4, r3, r3
/* 8012C0D4 00129014  41 82 00 0C */	beq lbl_8012C0E0
/* 8012C0D8 00129018  4B FE D8 61 */	bl __ct__Q34Game10ChappyBase5ParmsFv
/* 8012C0DC 0012901C  7C 64 1B 78 */	mr r4, r3
lbl_8012C0E0:
/* 8012C0E0 00129020  7F E3 FB 78 */	mr r3, r31
/* 8012C0E4 00129024  48 00 37 B9 */	bl init__Q24Game12EnemyMgrBaseFPQ24Game14EnemyParmsBase
/* 8012C0E8 00129028  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8012C0EC 0012902C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8012C0F0 00129030  7C 08 03 A6 */	mtlr r0
/* 8012C0F4 00129034  38 21 00 10 */	addi r1, r1, 0x10
/* 8012C0F8 00129038  4E 80 00 20 */	blr 

.global loadAnimData__Q34Game12YellowChappy3MgrFv
loadAnimData__Q34Game12YellowChappy3MgrFv:
/* 8012C0FC 0012903C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8012C100 00129040  7C 08 02 A6 */	mflr r0
/* 8012C104 00129044  90 01 00 14 */	stw r0, 0x14(r1)
/* 8012C108 00129048  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8012C10C 0012904C  7C 7F 1B 78 */	mr r31, r3
/* 8012C110 00129050  4B FF E6 71 */	bl loadAnimData__Q34Game10ChappyBase3MgrFv
/* 8012C114 00129054  38 7F 00 50 */	addi r3, r31, 0x50
/* 8012C118 00129058  48 00 6F 05 */	bl setup__Q214EffectAnimator3MgrFv
/* 8012C11C 0012905C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8012C120 00129060  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8012C124 00129064  7C 08 03 A6 */	mtlr r0
/* 8012C128 00129068  38 21 00 10 */	addi r1, r1, 0x10
/* 8012C12C 0012906C  4E 80 00 20 */	blr 

.global __dt__Q34Game12YellowChappy3MgrFv
__dt__Q34Game12YellowChappy3MgrFv:
/* 8012C130 00129070  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8012C134 00129074  7C 08 02 A6 */	mflr r0
/* 8012C138 00129078  90 01 00 14 */	stw r0, 0x14(r1)
/* 8012C13C 0012907C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8012C140 00129080  7C 9F 23 78 */	mr r31, r4
/* 8012C144 00129084  93 C1 00 08 */	stw r30, 8(r1)
/* 8012C148 00129088  7C 7E 1B 79 */	or. r30, r3, r3
/* 8012C14C 0012908C  41 82 00 90 */	beq lbl_8012C1DC
/* 8012C150 00129090  3C 60 80 4B */	lis r3, __vt__Q34Game12YellowChappy3Mgr@ha
/* 8012C154 00129094  38 63 E7 00 */	addi r3, r3, __vt__Q34Game12YellowChappy3Mgr@l
/* 8012C158 00129098  90 7E 00 00 */	stw r3, 0(r30)
/* 8012C15C 0012909C  38 03 00 38 */	addi r0, r3, 0x38
/* 8012C160 001290A0  90 1E 00 04 */	stw r0, 4(r30)
/* 8012C164 001290A4  41 82 00 68 */	beq lbl_8012C1CC
/* 8012C168 001290A8  3C 60 80 4B */	lis r3, __vt__Q34Game10ChappyBase3Mgr@ha
/* 8012C16C 001290AC  38 63 DE 18 */	addi r3, r3, __vt__Q34Game10ChappyBase3Mgr@l
/* 8012C170 001290B0  90 7E 00 00 */	stw r3, 0(r30)
/* 8012C174 001290B4  38 03 00 38 */	addi r0, r3, 0x38
/* 8012C178 001290B8  90 1E 00 04 */	stw r0, 4(r30)
/* 8012C17C 001290BC  41 82 00 50 */	beq lbl_8012C1CC
/* 8012C180 001290C0  3C 60 80 4B */	lis r3, __vt__Q24Game12EnemyMgrBase@ha
/* 8012C184 001290C4  38 63 F8 A0 */	addi r3, r3, __vt__Q24Game12EnemyMgrBase@l
/* 8012C188 001290C8  90 7E 00 00 */	stw r3, 0(r30)
/* 8012C18C 001290CC  38 03 00 38 */	addi r0, r3, 0x38
/* 8012C190 001290D0  90 1E 00 04 */	stw r0, 4(r30)
/* 8012C194 001290D4  41 82 00 38 */	beq lbl_8012C1CC
/* 8012C198 001290D8  3C 60 80 4B */	lis r3, __vt__Q24Game13IEnemyMgrBase@ha
/* 8012C19C 001290DC  34 1E 00 04 */	addic. r0, r30, 4
/* 8012C1A0 001290E0  38 63 AC FC */	addi r3, r3, __vt__Q24Game13IEnemyMgrBase@l
/* 8012C1A4 001290E4  90 7E 00 00 */	stw r3, 0(r30)
/* 8012C1A8 001290E8  38 03 00 38 */	addi r0, r3, 0x38
/* 8012C1AC 001290EC  90 1E 00 04 */	stw r0, 4(r30)
/* 8012C1B0 001290F0  41 82 00 1C */	beq lbl_8012C1CC
/* 8012C1B4 001290F4  3C 80 80 4B */	lis r4, __vt__16GenericContainer@ha
/* 8012C1B8 001290F8  38 7E 00 04 */	addi r3, r30, 4
/* 8012C1BC 001290FC  38 04 AC DC */	addi r0, r4, __vt__16GenericContainer@l
/* 8012C1C0 00129100  38 80 00 00 */	li r4, 0
/* 8012C1C4 00129104  90 1E 00 04 */	stw r0, 4(r30)
/* 8012C1C8 00129108  48 2E 53 C1 */	bl __dt__5CNodeFv
lbl_8012C1CC:
/* 8012C1CC 0012910C  7F E0 07 35 */	extsh. r0, r31
/* 8012C1D0 00129110  40 81 00 0C */	ble lbl_8012C1DC
/* 8012C1D4 00129114  7F C3 F3 78 */	mr r3, r30
/* 8012C1D8 00129118  4B EF 7E DD */	bl __dl__FPv
lbl_8012C1DC:
/* 8012C1DC 0012911C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8012C1E0 00129120  7F C3 F3 78 */	mr r3, r30
/* 8012C1E4 00129124  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8012C1E8 00129128  83 C1 00 08 */	lwz r30, 8(r1)
/* 8012C1EC 0012912C  7C 08 03 A6 */	mtlr r0
/* 8012C1F0 00129130  38 21 00 10 */	addi r1, r1, 0x10
/* 8012C1F4 00129134  4E 80 00 20 */	blr 

.global getEnemyTypeID__Q34Game12YellowChappy3MgrFv
getEnemyTypeID__Q34Game12YellowChappy3MgrFv:
/* 8012C1F8 00129138  38 60 00 2B */	li r3, 0x2b
/* 8012C1FC 0012913C  4E 80 00 20 */	blr 

.global getChangeTexture0__Q34Game12YellowChappy3MgrFv
getChangeTexture0__Q34Game12YellowChappy3MgrFv:
/* 8012C200 00129140  80 63 00 44 */	lwz r3, 0x44(r3)
/* 8012C204 00129144  4E 80 00 20 */	blr 

.global getChangeTexture1__Q34Game12YellowChappy3MgrFv
getChangeTexture1__Q34Game12YellowChappy3MgrFv:
/* 8012C208 00129148  80 63 00 48 */	lwz r3, 0x48(r3)
/* 8012C20C 0012914C  4E 80 00 20 */	blr 

.global createObj__Q34Game12YellowChappy3MgrFi
createObj__Q34Game12YellowChappy3MgrFi:
/* 8012C210 00129150  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8012C214 00129154  7C 08 02 A6 */	mflr r0
/* 8012C218 00129158  90 01 00 14 */	stw r0, 0x14(r1)
/* 8012C21C 0012915C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8012C220 00129160  7C 9F 23 78 */	mr r31, r4
/* 8012C224 00129164  93 C1 00 08 */	stw r30, 8(r1)
/* 8012C228 00129168  7C 7E 1B 78 */	mr r30, r3
/* 8012C22C 0012916C  1C 7F 03 00 */	mulli r3, r31, 0x300
/* 8012C230 00129170  38 63 00 10 */	addi r3, r3, 0x10
/* 8012C234 00129174  4B EF 7D 79 */	bl __nwa__FUl
/* 8012C238 00129178  3C 80 80 13 */	lis r4, __ct__Q34Game12YellowChappy3ObjFv@ha
/* 8012C23C 0012917C  3C A0 80 13 */	lis r5, __dt__Q34Game12YellowChappy3ObjFv@ha
/* 8012C240 00129180  38 84 C3 78 */	addi r4, r4, __ct__Q34Game12YellowChappy3ObjFv@l
/* 8012C244 00129184  7F E7 FB 78 */	mr r7, r31
/* 8012C248 00129188  38 A5 C2 70 */	addi r5, r5, __dt__Q34Game12YellowChappy3ObjFv@l
/* 8012C24C 0012918C  38 C0 03 00 */	li r6, 0x300
/* 8012C250 00129190  4B F9 57 A1 */	bl __construct_new_array
/* 8012C254 00129194  90 7E 00 4C */	stw r3, 0x4c(r30)
/* 8012C258 00129198  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8012C25C 0012919C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8012C260 001291A0  83 C1 00 08 */	lwz r30, 8(r1)
/* 8012C264 001291A4  7C 08 03 A6 */	mtlr r0
/* 8012C268 001291A8  38 21 00 10 */	addi r1, r1, 0x10
/* 8012C26C 001291AC  4E 80 00 20 */	blr 

.global __dt__Q34Game12YellowChappy3ObjFv
__dt__Q34Game12YellowChappy3ObjFv:
/* 8012C270 001291B0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8012C274 001291B4  7C 08 02 A6 */	mflr r0
/* 8012C278 001291B8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8012C27C 001291BC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8012C280 001291C0  7C 9F 23 78 */	mr r31, r4
/* 8012C284 001291C4  93 C1 00 08 */	stw r30, 8(r1)
/* 8012C288 001291C8  7C 7E 1B 79 */	or. r30, r3, r3
/* 8012C28C 001291CC  41 82 00 B8 */	beq lbl_8012C344
/* 8012C290 001291D0  3C 60 80 4B */	lis r3, __vt__Q34Game12YellowChappy3Obj@ha
/* 8012C294 001291D4  38 1E 02 F0 */	addi r0, r30, 0x2f0
/* 8012C298 001291D8  38 83 E8 50 */	addi r4, r3, __vt__Q34Game12YellowChappy3Obj@l
/* 8012C29C 001291DC  90 9E 00 00 */	stw r4, 0(r30)
/* 8012C2A0 001291E0  38 64 01 B0 */	addi r3, r4, 0x1b0
/* 8012C2A4 001291E4  38 84 03 34 */	addi r4, r4, 0x334
/* 8012C2A8 001291E8  90 7E 01 78 */	stw r3, 0x178(r30)
/* 8012C2AC 001291EC  80 7E 01 7C */	lwz r3, 0x17c(r30)
/* 8012C2B0 001291F0  90 83 00 00 */	stw r4, 0(r3)
/* 8012C2B4 001291F4  80 7E 01 7C */	lwz r3, 0x17c(r30)
/* 8012C2B8 001291F8  7C 03 00 50 */	subf r0, r3, r0
/* 8012C2BC 001291FC  90 03 00 0C */	stw r0, 0xc(r3)
/* 8012C2C0 00129200  41 82 00 74 */	beq lbl_8012C334
/* 8012C2C4 00129204  3C 60 80 4B */	lis r3, __vt__Q34Game10ChappyBase3Obj@ha
/* 8012C2C8 00129208  38 1E 02 E4 */	addi r0, r30, 0x2e4
/* 8012C2CC 0012920C  38 83 DF 4C */	addi r4, r3, __vt__Q34Game10ChappyBase3Obj@l
/* 8012C2D0 00129210  90 9E 00 00 */	stw r4, 0(r30)
/* 8012C2D4 00129214  38 64 01 B0 */	addi r3, r4, 0x1b0
/* 8012C2D8 00129218  38 84 03 34 */	addi r4, r4, 0x334
/* 8012C2DC 0012921C  90 7E 01 78 */	stw r3, 0x178(r30)
/* 8012C2E0 00129220  80 7E 01 7C */	lwz r3, 0x17c(r30)
/* 8012C2E4 00129224  90 83 00 00 */	stw r4, 0(r3)
/* 8012C2E8 00129228  80 7E 01 7C */	lwz r3, 0x17c(r30)
/* 8012C2EC 0012922C  7C 03 00 50 */	subf r0, r3, r0
/* 8012C2F0 00129230  90 03 00 0C */	stw r0, 0xc(r3)
/* 8012C2F4 00129234  41 82 00 40 */	beq lbl_8012C334
/* 8012C2F8 00129238  3C 60 80 4B */	lis r3, __vt__Q24Game9EnemyBase@ha
/* 8012C2FC 0012923C  38 1E 02 BC */	addi r0, r30, 0x2bc
/* 8012C300 00129240  38 83 A3 24 */	addi r4, r3, __vt__Q24Game9EnemyBase@l
/* 8012C304 00129244  38 7E 02 90 */	addi r3, r30, 0x290
/* 8012C308 00129248  90 9E 00 00 */	stw r4, 0(r30)
/* 8012C30C 0012924C  38 A4 01 B0 */	addi r5, r4, 0x1b0
/* 8012C310 00129250  38 C4 02 F8 */	addi r6, r4, 0x2f8
/* 8012C314 00129254  38 80 FF FF */	li r4, -1
/* 8012C318 00129258  90 BE 01 78 */	stw r5, 0x178(r30)
/* 8012C31C 0012925C  80 BE 01 7C */	lwz r5, 0x17c(r30)
/* 8012C320 00129260  90 C5 00 00 */	stw r6, 0(r5)
/* 8012C324 00129264  80 BE 01 7C */	lwz r5, 0x17c(r30)
/* 8012C328 00129268  7C 05 00 50 */	subf r0, r5, r0
/* 8012C32C 0012926C  90 05 00 0C */	stw r0, 0xc(r5)
/* 8012C330 00129270  48 2E 52 59 */	bl __dt__5CNodeFv
lbl_8012C334:
/* 8012C334 00129274  7F E0 07 35 */	extsh. r0, r31
/* 8012C338 00129278  40 81 00 0C */	ble lbl_8012C344
/* 8012C33C 0012927C  7F C3 F3 78 */	mr r3, r30
/* 8012C340 00129280  4B EF 7D 75 */	bl __dl__FPv
lbl_8012C344:
/* 8012C344 00129284  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8012C348 00129288  7F C3 F3 78 */	mr r3, r30
/* 8012C34C 0012928C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8012C350 00129290  83 C1 00 08 */	lwz r30, 8(r1)
/* 8012C354 00129294  7C 08 03 A6 */	mtlr r0
/* 8012C358 00129298  38 21 00 10 */	addi r1, r1, 0x10
/* 8012C35C 0012929C  4E 80 00 20 */	blr 

.global getEnemy__Q34Game12YellowChappy3MgrFi
getEnemy__Q34Game12YellowChappy3MgrFi:
/* 8012C360 001292A0  1C 04 03 00 */	mulli r0, r4, 0x300
/* 8012C364 001292A4  80 63 00 4C */	lwz r3, 0x4c(r3)
/* 8012C368 001292A8  7C 63 02 14 */	add r3, r3, r0
/* 8012C36C 001292AC  4E 80 00 20 */	blr 

.global "@4@__dt__Q34Game12YellowChappy3MgrFv"
"@4@__dt__Q34Game12YellowChappy3MgrFv":
/* 8012C370 001292B0  38 63 FF FC */	addi r3, r3, -4
/* 8012C374 001292B4  4B FF FD BC */	b __dt__Q34Game12YellowChappy3MgrFv
