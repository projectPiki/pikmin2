.include "macros.inc"

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global __dt__Q26JStage7TObjectFv
__dt__Q26JStage7TObjectFv:
/* 800988D4 00095814  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800988D8 00095818  7C 08 02 A6 */	mflr r0
/* 800988DC 0009581C  90 01 00 14 */	stw r0, 0x14(r1)
/* 800988E0 00095820  93 E1 00 0C */	stw r31, 0xc(r1)
/* 800988E4 00095824  7C 7F 1B 79 */	or. r31, r3, r3
/* 800988E8 00095828  41 82 00 1C */	beq lbl_80098904
/* 800988EC 0009582C  3C A0 80 4A */	lis r5, __vt__Q26JStage7TObject@ha
/* 800988F0 00095830  7C 80 07 35 */	extsh. r0, r4
/* 800988F4 00095834  38 05 36 80 */	addi r0, r5, __vt__Q26JStage7TObject@l
/* 800988F8 00095838  90 1F 00 00 */	stw r0, 0(r31)
/* 800988FC 0009583C  40 81 00 08 */	ble lbl_80098904
/* 80098900 00095840  4B F8 B7 B5 */	bl __dl__FPv
lbl_80098904:
/* 80098904 00095844  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80098908 00095848  7F E3 FB 78 */	mr r3, r31
/* 8009890C 0009584C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80098910 00095850  7C 08 03 A6 */	mtlr r0
/* 80098914 00095854  38 21 00 10 */	addi r1, r1, 0x10
/* 80098918 00095858  4E 80 00 20 */	blr 

.global JSGGetName__Q26JStage7TObjectCFv
JSGGetName__Q26JStage7TObjectCFv:
/* 8009891C 0009585C  38 60 00 00 */	li r3, 0
/* 80098920 00095860  4E 80 00 20 */	blr 

.global JSGUpdate__Q26JStage7TObjectFv
JSGUpdate__Q26JStage7TObjectFv:
/* 80098924 00095864  4E 80 00 20 */	blr 

.global JSGGetFlag__Q26JStage7TObjectCFv
JSGGetFlag__Q26JStage7TObjectCFv:
/* 80098928 00095868  38 60 00 00 */	li r3, 0
/* 8009892C 0009586C  4E 80 00 20 */	blr 

.global JSGSetFlag__Q26JStage7TObjectFUl
JSGSetFlag__Q26JStage7TObjectFUl:
/* 80098930 00095870  4E 80 00 20 */	blr 

.global JSGGetData__Q26JStage7TObjectCFUlPvUl
JSGGetData__Q26JStage7TObjectCFUlPvUl:
/* 80098934 00095874  38 60 00 00 */	li r3, 0
/* 80098938 00095878  4E 80 00 20 */	blr 

.global JSGSetData__Q26JStage7TObjectFUlPCvUl
JSGSetData__Q26JStage7TObjectFUlPCvUl:
/* 8009893C 0009587C  4E 80 00 20 */	blr 

.global JSGGetParent__Q26JStage7TObjectCFPPQ26JStage7TObjectPUl
JSGGetParent__Q26JStage7TObjectCFPPQ26JStage7TObjectPUl:
/* 80098940 00095880  4E 80 00 20 */	blr 

.global JSGSetParent__Q26JStage7TObjectFPQ26JStage7TObjectUl
JSGSetParent__Q26JStage7TObjectFPQ26JStage7TObjectUl:
/* 80098944 00095884  4E 80 00 20 */	blr 

.global JSGSetRelation__Q26JStage7TObjectFbPQ26JStage7TObjectUl
JSGSetRelation__Q26JStage7TObjectFbPQ26JStage7TObjectUl:
/* 80098948 00095888  4E 80 00 20 */	blr 

.global JSGFindNodeID__Q26JStage7TObjectCFPCc
JSGFindNodeID__Q26JStage7TObjectCFPCc:
/* 8009894C 0009588C  38 60 FF FF */	li r3, -1
/* 80098950 00095890  4E 80 00 20 */	blr 

.global JSGGetNodeTransformation__Q26JStage7TObjectCFUlPA4_f
JSGGetNodeTransformation__Q26JStage7TObjectCFUlPA4_f:
/* 80098954 00095894  C0 02 89 18 */	lfs f0, lbl_80516C78@sda21(r2)
/* 80098958 00095898  38 60 00 00 */	li r3, 0
/* 8009895C 0009589C  D0 05 00 00 */	stfs f0, 0(r5)
/* 80098960 000958A0  D0 05 00 04 */	stfs f0, 4(r5)
/* 80098964 000958A4  D0 05 00 08 */	stfs f0, 8(r5)
/* 80098968 000958A8  D0 05 00 0C */	stfs f0, 0xc(r5)
/* 8009896C 000958AC  D0 05 00 10 */	stfs f0, 0x10(r5)
/* 80098970 000958B0  D0 05 00 14 */	stfs f0, 0x14(r5)
/* 80098974 000958B4  D0 05 00 18 */	stfs f0, 0x18(r5)
/* 80098978 000958B8  D0 05 00 1C */	stfs f0, 0x1c(r5)
/* 8009897C 000958BC  D0 05 00 20 */	stfs f0, 0x20(r5)
/* 80098980 000958C0  D0 05 00 24 */	stfs f0, 0x24(r5)
/* 80098984 000958C4  D0 05 00 28 */	stfs f0, 0x28(r5)
/* 80098988 000958C8  D0 05 00 2C */	stfs f0, 0x2c(r5)
/* 8009898C 000958CC  4E 80 00 20 */	blr 
