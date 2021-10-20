.include "macros.inc"
.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 0x8
.global __vt__Q34Game4Cave8ItemNode
__vt__Q34Game4Cave8ItemNode:
	.4byte 0
	.4byte 0
	.4byte __dt__Q34Game4Cave8ItemNodeFv
	.4byte getChildCount__5CNodeFv
	.4byte getObjectId__Q34Game4Cave8ItemNodeFv
	.4byte getObjectType__Q34Game4Cave8ItemNodeFv
	.4byte getBirthCount__Q34Game4Cave8ItemNodeFv
	.4byte getDirection__Q34Game4Cave8ItemNodeFv
	.4byte getBirthDoorIndex__Q24Game16ObjectLayoutNodeFv
	.4byte getBirthPosition__Q34Game4Cave8ItemNodeFRfRf
	.4byte getExtraCode__Q24Game16ObjectLayoutNodeFv
	.4byte isFixedBattery__Q24Game16ObjectLayoutNodeFv

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global __ct__Q34Game4Cave8ItemNodeFv
__ct__Q34Game4Cave8ItemNodeFv:
/* 8024E170 0024B0B0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8024E174 0024B0B4  7C 08 02 A6 */	mflr r0
/* 8024E178 0024B0B8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8024E17C 0024B0BC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8024E180 0024B0C0  7C 7F 1B 78 */	mr r31, r3
/* 8024E184 0024B0C4  48 1C 32 0D */	bl __ct__5CNodeFv
/* 8024E188 0024B0C8  3C 80 80 4C */	lis r4, __vt__Q24Game16ObjectLayoutNode@ha
/* 8024E18C 0024B0CC  3C 60 80 4C */	lis r3, __vt__Q34Game4Cave8ItemNode@ha
/* 8024E190 0024B0D0  38 84 1A A8 */	addi r4, r4, __vt__Q24Game16ObjectLayoutNode@l
/* 8024E194 0024B0D4  38 00 00 00 */	li r0, 0
/* 8024E198 0024B0D8  90 9F 00 00 */	stw r4, 0(r31)
/* 8024E19C 0024B0DC  38 83 1B 48 */	addi r4, r3, __vt__Q34Game4Cave8ItemNode@l
/* 8024E1A0 0024B0E0  C0 02 C4 D8 */	lfs f0, lbl_8051A838@sda21(r2)
/* 8024E1A4 0024B0E4  7F E3 FB 78 */	mr r3, r31
/* 8024E1A8 0024B0E8  90 9F 00 00 */	stw r4, 0(r31)
/* 8024E1AC 0024B0EC  90 1F 00 18 */	stw r0, 0x18(r31)
/* 8024E1B0 0024B0F0  90 1F 00 1C */	stw r0, 0x1c(r31)
/* 8024E1B4 0024B0F4  90 1F 00 20 */	stw r0, 0x20(r31)
/* 8024E1B8 0024B0F8  D0 1F 00 24 */	stfs f0, 0x24(r31)
/* 8024E1BC 0024B0FC  D0 1F 00 30 */	stfs f0, 0x30(r31)
/* 8024E1C0 0024B100  D0 1F 00 2C */	stfs f0, 0x2c(r31)
/* 8024E1C4 0024B104  D0 1F 00 28 */	stfs f0, 0x28(r31)
/* 8024E1C8 0024B108  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8024E1CC 0024B10C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8024E1D0 0024B110  7C 08 03 A6 */	mtlr r0
/* 8024E1D4 0024B114  38 21 00 10 */	addi r1, r1, 0x10
/* 8024E1D8 0024B118  4E 80 00 20 */	blr 

.global __ct__Q34Game4Cave8ItemNodeFPQ34Game4Cave8ItemUnitPQ34Game4Cave7BaseGeni
__ct__Q34Game4Cave8ItemNodeFPQ34Game4Cave8ItemUnitPQ34Game4Cave7BaseGeni:
/* 8024E1DC 0024B11C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8024E1E0 0024B120  7C 08 02 A6 */	mflr r0
/* 8024E1E4 0024B124  90 01 00 24 */	stw r0, 0x24(r1)
/* 8024E1E8 0024B128  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8024E1EC 0024B12C  7C DF 33 78 */	mr r31, r6
/* 8024E1F0 0024B130  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8024E1F4 0024B134  7C BE 2B 78 */	mr r30, r5
/* 8024E1F8 0024B138  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8024E1FC 0024B13C  7C 9D 23 78 */	mr r29, r4
/* 8024E200 0024B140  93 81 00 10 */	stw r28, 0x10(r1)
/* 8024E204 0024B144  7C 7C 1B 78 */	mr r28, r3
/* 8024E208 0024B148  48 1C 31 89 */	bl __ct__5CNodeFv
/* 8024E20C 0024B14C  3C 80 80 4C */	lis r4, __vt__Q24Game16ObjectLayoutNode@ha
/* 8024E210 0024B150  3C 60 80 4C */	lis r3, __vt__Q34Game4Cave8ItemNode@ha
/* 8024E214 0024B154  38 04 1A A8 */	addi r0, r4, __vt__Q24Game16ObjectLayoutNode@l
/* 8024E218 0024B158  C0 02 C4 D8 */	lfs f0, lbl_8051A838@sda21(r2)
/* 8024E21C 0024B15C  90 1C 00 00 */	stw r0, 0(r28)
/* 8024E220 0024B160  38 03 1B 48 */	addi r0, r3, __vt__Q34Game4Cave8ItemNode@l
/* 8024E224 0024B164  7F 83 E3 78 */	mr r3, r28
/* 8024E228 0024B168  90 1C 00 00 */	stw r0, 0(r28)
/* 8024E22C 0024B16C  93 BC 00 18 */	stw r29, 0x18(r28)
/* 8024E230 0024B170  93 DC 00 1C */	stw r30, 0x1c(r28)
/* 8024E234 0024B174  93 FC 00 20 */	stw r31, 0x20(r28)
/* 8024E238 0024B178  D0 1C 00 24 */	stfs f0, 0x24(r28)
/* 8024E23C 0024B17C  D0 1C 00 30 */	stfs f0, 0x30(r28)
/* 8024E240 0024B180  D0 1C 00 2C */	stfs f0, 0x2c(r28)
/* 8024E244 0024B184  D0 1C 00 28 */	stfs f0, 0x28(r28)
/* 8024E248 0024B188  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8024E24C 0024B18C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8024E250 0024B190  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8024E254 0024B194  83 81 00 10 */	lwz r28, 0x10(r1)
/* 8024E258 0024B198  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8024E25C 0024B19C  7C 08 03 A6 */	mtlr r0
/* 8024E260 0024B1A0  38 21 00 20 */	addi r1, r1, 0x20
/* 8024E264 0024B1A4  4E 80 00 20 */	blr 

.global makeGlobalData__Q34Game4Cave8ItemNodeFPQ34Game4Cave7MapNode
makeGlobalData__Q34Game4Cave8ItemNodeFPQ34Game4Cave7MapNode:
/* 8024E268 0024B1A8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8024E26C 0024B1AC  7C 08 02 A6 */	mflr r0
/* 8024E270 0024B1B0  90 01 00 24 */	stw r0, 0x24(r1)
/* 8024E274 0024B1B4  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8024E278 0024B1B8  7C 9F 23 78 */	mr r31, r4
/* 8024E27C 0024B1BC  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8024E280 0024B1C0  7C 7E 1B 78 */	mr r30, r3
/* 8024E284 0024B1C4  80 A3 00 1C */	lwz r5, 0x1c(r3)
/* 8024E288 0024B1C8  38 61 00 08 */	addi r3, r1, 8
/* 8024E28C 0024B1CC  4B FF 58 51 */	bl getBaseGenGlobalPosition__Q34Game4Cave7MapNodeFPQ34Game4Cave7BaseGen
/* 8024E290 0024B1D0  C0 01 00 08 */	lfs f0, 8(r1)
/* 8024E294 0024B1D4  7F E3 FB 78 */	mr r3, r31
/* 8024E298 0024B1D8  D0 1E 00 28 */	stfs f0, 0x28(r30)
/* 8024E29C 0024B1DC  C0 01 00 0C */	lfs f0, 0xc(r1)
/* 8024E2A0 0024B1E0  D0 1E 00 2C */	stfs f0, 0x2c(r30)
/* 8024E2A4 0024B1E4  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 8024E2A8 0024B1E8  D0 1E 00 30 */	stfs f0, 0x30(r30)
/* 8024E2AC 0024B1EC  80 9E 00 1C */	lwz r4, 0x1c(r30)
/* 8024E2B0 0024B1F0  4B FF 5C 4D */	bl getBaseGenGlobalDirection__Q34Game4Cave7MapNodeFPQ34Game4Cave7BaseGen
/* 8024E2B4 0024B1F4  D0 3E 00 24 */	stfs f1, 0x24(r30)
/* 8024E2B8 0024B1F8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8024E2BC 0024B1FC  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8024E2C0 0024B200  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8024E2C4 0024B204  7C 08 03 A6 */	mtlr r0
/* 8024E2C8 0024B208  38 21 00 20 */	addi r1, r1, 0x20
/* 8024E2CC 0024B20C  4E 80 00 20 */	blr 

.global getObjectId__Q34Game4Cave8ItemNodeFv
getObjectId__Q34Game4Cave8ItemNodeFv:
/* 8024E2D0 0024B210  80 63 00 18 */	lwz r3, 0x18(r3)
/* 8024E2D4 0024B214  80 63 00 00 */	lwz r3, 0(r3)
/* 8024E2D8 0024B218  28 03 00 00 */	cmplwi r3, 0
/* 8024E2DC 0024B21C  41 82 00 0C */	beq lbl_8024E2E8
/* 8024E2E0 0024B220  80 63 00 18 */	lwz r3, 0x18(r3)
/* 8024E2E4 0024B224  4E 80 00 20 */	blr 
lbl_8024E2E8:
/* 8024E2E8 0024B228  38 60 FF FF */	li r3, -1
/* 8024E2EC 0024B22C  4E 80 00 20 */	blr 

.global getObjectType__Q34Game4Cave8ItemNodeFv
getObjectType__Q34Game4Cave8ItemNodeFv:
/* 8024E2F0 0024B230  38 60 00 01 */	li r3, 1
/* 8024E2F4 0024B234  4E 80 00 20 */	blr 

.global getBirthCount__Q34Game4Cave8ItemNodeFv
getBirthCount__Q34Game4Cave8ItemNodeFv:
/* 8024E2F8 0024B238  80 63 00 20 */	lwz r3, 0x20(r3)
/* 8024E2FC 0024B23C  4E 80 00 20 */	blr 

.global getBirthPosition__Q34Game4Cave8ItemNodeFRfRf
getBirthPosition__Q34Game4Cave8ItemNodeFRfRf:
/* 8024E300 0024B240  C0 03 00 28 */	lfs f0, 0x28(r3)
/* 8024E304 0024B244  D0 04 00 00 */	stfs f0, 0(r4)
/* 8024E308 0024B248  C0 03 00 30 */	lfs f0, 0x30(r3)
/* 8024E30C 0024B24C  D0 05 00 00 */	stfs f0, 0(r5)
/* 8024E310 0024B250  4E 80 00 20 */	blr 

.global getDirection__Q34Game4Cave8ItemNodeFv
getDirection__Q34Game4Cave8ItemNodeFv:
/* 8024E314 0024B254  C0 23 00 24 */	lfs f1, 0x24(r3)
/* 8024E318 0024B258  4E 80 00 20 */	blr 

.global __dt__Q34Game4Cave8ItemNodeFv
__dt__Q34Game4Cave8ItemNodeFv:
/* 8024E31C 0024B25C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8024E320 0024B260  7C 08 02 A6 */	mflr r0
/* 8024E324 0024B264  90 01 00 14 */	stw r0, 0x14(r1)
/* 8024E328 0024B268  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8024E32C 0024B26C  7C 9F 23 78 */	mr r31, r4
/* 8024E330 0024B270  93 C1 00 08 */	stw r30, 8(r1)
/* 8024E334 0024B274  7C 7E 1B 79 */	or. r30, r3, r3
/* 8024E338 0024B278  41 82 00 38 */	beq lbl_8024E370
/* 8024E33C 0024B27C  3C 80 80 4C */	lis r4, __vt__Q34Game4Cave8ItemNode@ha
/* 8024E340 0024B280  38 04 1B 48 */	addi r0, r4, __vt__Q34Game4Cave8ItemNode@l
/* 8024E344 0024B284  90 1E 00 00 */	stw r0, 0(r30)
/* 8024E348 0024B288  41 82 00 18 */	beq lbl_8024E360
/* 8024E34C 0024B28C  3C A0 80 4C */	lis r5, __vt__Q24Game16ObjectLayoutNode@ha
/* 8024E350 0024B290  38 80 00 00 */	li r4, 0
/* 8024E354 0024B294  38 05 1A A8 */	addi r0, r5, __vt__Q24Game16ObjectLayoutNode@l
/* 8024E358 0024B298  90 1E 00 00 */	stw r0, 0(r30)
/* 8024E35C 0024B29C  48 1C 32 2D */	bl __dt__5CNodeFv
lbl_8024E360:
/* 8024E360 0024B2A0  7F E0 07 35 */	extsh. r0, r31
/* 8024E364 0024B2A4  40 81 00 0C */	ble lbl_8024E370
/* 8024E368 0024B2A8  7F C3 F3 78 */	mr r3, r30
/* 8024E36C 0024B2AC  4B DD 5D 49 */	bl __dl__FPv
lbl_8024E370:
/* 8024E370 0024B2B0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8024E374 0024B2B4  7F C3 F3 78 */	mr r3, r30
/* 8024E378 0024B2B8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8024E37C 0024B2BC  83 C1 00 08 */	lwz r30, 8(r1)
/* 8024E380 0024B2C0  7C 08 03 A6 */	mtlr r0
/* 8024E384 0024B2C4  38 21 00 10 */	addi r1, r1, 0x10
/* 8024E388 0024B2C8  4E 80 00 20 */	blr 
