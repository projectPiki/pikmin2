.include "macros.inc"

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global __dt__Q26JStage7TSystemFv
__dt__Q26JStage7TSystemFv:
/* 8009876C 000956AC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80098770 000956B0  7C 08 02 A6 */	mflr r0
/* 80098774 000956B4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80098778 000956B8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8009877C 000956BC  7C 9F 23 78 */	mr r31, r4
/* 80098780 000956C0  93 C1 00 08 */	stw r30, 8(r1)
/* 80098784 000956C4  7C 7E 1B 79 */	or. r30, r3, r3
/* 80098788 000956C8  41 82 00 28 */	beq lbl_800987B0
/* 8009878C 000956CC  3C A0 80 4A */	lis r5, __vt__Q26JStage7TSystem@ha
/* 80098790 000956D0  38 80 00 00 */	li r4, 0
/* 80098794 000956D4  38 05 35 98 */	addi r0, r5, __vt__Q26JStage7TSystem@l
/* 80098798 000956D8  90 1E 00 00 */	stw r0, 0(r30)
/* 8009879C 000956DC  48 00 01 39 */	bl __dt__Q26JStage7TObjectFv
/* 800987A0 000956E0  7F E0 07 35 */	extsh. r0, r31
/* 800987A4 000956E4  40 81 00 0C */	ble lbl_800987B0
/* 800987A8 000956E8  7F C3 F3 78 */	mr r3, r30
/* 800987AC 000956EC  4B F8 B9 09 */	bl __dl__FPv
lbl_800987B0:
/* 800987B0 000956F0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800987B4 000956F4  7F C3 F3 78 */	mr r3, r30
/* 800987B8 000956F8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 800987BC 000956FC  83 C1 00 08 */	lwz r30, 8(r1)
/* 800987C0 00095700  7C 08 03 A6 */	mtlr r0
/* 800987C4 00095704  38 21 00 10 */	addi r1, r1, 0x10
/* 800987C8 00095708  4E 80 00 20 */	blr 

.global JSGFGetType__Q26JStage7TSystemCFv
JSGFGetType__Q26JStage7TSystemCFv:
/* 800987CC 0009570C  38 60 00 01 */	li r3, 1
/* 800987D0 00095710  4E 80 00 20 */	blr 

.global JSGFindObject__Q26JStage7TSystemCFPPQ26JStage7TObjectPCcQ26JStage8TEObject
JSGFindObject__Q26JStage7TSystemCFPPQ26JStage7TObjectPCcQ26JStage8TEObject:
/* 800987D4 00095714  38 60 00 01 */	li r3, 1
/* 800987D8 00095718  4E 80 00 20 */	blr 

.global JSGCreateObject__Q26JStage7TSystemFPCcQ26JStage8TEObjectUl
JSGCreateObject__Q26JStage7TSystemFPCcQ26JStage8TEObjectUl:
/* 800987DC 0009571C  38 60 00 00 */	li r3, 0
/* 800987E0 00095720  4E 80 00 20 */	blr 

.global JSGDestroyObject__Q26JStage7TSystemFPQ26JStage7TObject
JSGDestroyObject__Q26JStage7TSystemFPQ26JStage7TObject:
/* 800987E4 00095724  4E 80 00 20 */	blr 

.global JSGGetSystemData__Q26JStage7TSystemFUl
JSGGetSystemData__Q26JStage7TSystemFUl:
/* 800987E8 00095728  38 60 00 00 */	li r3, 0
/* 800987EC 0009572C  4E 80 00 20 */	blr 

.global JSGSetSystemData__Q26JStage7TSystemFUlUl
JSGSetSystemData__Q26JStage7TSystemFUlUl:
/* 800987F0 00095730  4E 80 00 20 */	blr 
