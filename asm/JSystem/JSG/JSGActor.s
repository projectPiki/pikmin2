.include "macros.inc"
.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 0x8
.global __vt__Q26JStage6TActor
__vt__Q26JStage6TActor:
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte JSGFGetType__Q26JStage6TActorCFv
	.4byte JSGGetName__Q26JStage7TObjectCFv
	.4byte JSGUpdate__Q26JStage7TObjectFv
	.4byte JSGGetFlag__Q26JStage7TObjectCFv
	.4byte JSGSetFlag__Q26JStage7TObjectFUl
	.4byte JSGGetData__Q26JStage7TObjectCFUlPvUl
	.4byte JSGSetData__Q26JStage7TObjectFUlPCvUl
	.4byte JSGGetParent__Q26JStage7TObjectCFPPQ26JStage7TObjectPUl
	.4byte JSGSetParent__Q26JStage7TObjectFPQ26JStage7TObjectUl
	.4byte JSGSetRelation__Q26JStage7TObjectFbPQ26JStage7TObjectUl
	.4byte JSGFindNodeID__Q26JStage7TObjectCFPCc
	.4byte JSGGetNodeTransformation__Q26JStage7TObjectCFUlPA4_f
	.4byte JSGGetTranslation__Q26JStage6TActorCFP3Vec
	.4byte JSGSetTranslation__Q26JStage6TActorFRC3Vec
	.4byte JSGGetScaling__Q26JStage6TActorCFP3Vec
	.4byte JSGSetScaling__Q26JStage6TActorFRC3Vec
	.4byte JSGGetRotation__Q26JStage6TActorCFP3Vec
	.4byte JSGSetRotation__Q26JStage6TActorFRC3Vec
	.4byte JSGGetShape__Q26JStage6TActorCFv
	.4byte JSGSetShape__Q26JStage6TActorFUl
	.4byte JSGGetAnimation__Q26JStage6TActorCFv
	.4byte JSGSetAnimation__Q26JStage6TActorFUl
	.4byte JSGGetAnimationFrame__Q26JStage6TActorCFv
	.4byte JSGSetAnimationFrame__Q26JStage6TActorFf
	.4byte JSGGetAnimationFrameMax__Q26JStage6TActorCFv
	.4byte JSGGetAnimationTransition__Q26JStage6TActorCFv
	.4byte JSGSetAnimationTransition__Q26JStage6TActorFf
	.4byte JSGGetTextureAnimation__Q26JStage6TActorCFv
	.4byte JSGSetTextureAnimation__Q26JStage6TActorFUl
	.4byte JSGGetTextureAnimationFrame__Q26JStage6TActorCFv
	.4byte JSGSetTextureAnimationFrame__Q26JStage6TActorFf
	.4byte JSGGetTextureAnimationFrameMax__Q26JStage6TActorCFv
	.4byte 0

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global __dt__Q26JStage6TActorFv
__dt__Q26JStage6TActorFv:
/* 80098990 000958D0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80098994 000958D4  7C 08 02 A6 */	mflr r0
/* 80098998 000958D8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8009899C 000958DC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 800989A0 000958E0  7C 9F 23 78 */	mr r31, r4
/* 800989A4 000958E4  93 C1 00 08 */	stw r30, 8(r1)
/* 800989A8 000958E8  7C 7E 1B 79 */	or. r30, r3, r3
/* 800989AC 000958EC  41 82 00 28 */	beq lbl_800989D4
/* 800989B0 000958F0  3C A0 80 4A */	lis r5, __vt__Q26JStage6TActor@ha
/* 800989B4 000958F4  38 80 00 00 */	li r4, 0
/* 800989B8 000958F8  38 05 36 C0 */	addi r0, r5, __vt__Q26JStage6TActor@l
/* 800989BC 000958FC  90 1E 00 00 */	stw r0, 0(r30)
/* 800989C0 00095900  4B FF FF 15 */	bl __dt__Q26JStage7TObjectFv
/* 800989C4 00095904  7F E0 07 35 */	extsh. r0, r31
/* 800989C8 00095908  40 81 00 0C */	ble lbl_800989D4
/* 800989CC 0009590C  7F C3 F3 78 */	mr r3, r30
/* 800989D0 00095910  4B F8 B6 E5 */	bl __dl__FPv
lbl_800989D4:
/* 800989D4 00095914  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800989D8 00095918  7F C3 F3 78 */	mr r3, r30
/* 800989DC 0009591C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 800989E0 00095920  83 C1 00 08 */	lwz r30, 8(r1)
/* 800989E4 00095924  7C 08 03 A6 */	mtlr r0
/* 800989E8 00095928  38 21 00 10 */	addi r1, r1, 0x10
/* 800989EC 0009592C  4E 80 00 20 */	blr 

.global JSGFGetType__Q26JStage6TActorCFv
JSGFGetType__Q26JStage6TActorCFv:
/* 800989F0 00095930  38 60 00 02 */	li r3, 2
/* 800989F4 00095934  4E 80 00 20 */	blr 

.global JSGGetTranslation__Q26JStage6TActorCFP3Vec
JSGGetTranslation__Q26JStage6TActorCFP3Vec:
/* 800989F8 00095938  4E 80 00 20 */	blr 

.global JSGSetTranslation__Q26JStage6TActorFRC3Vec
JSGSetTranslation__Q26JStage6TActorFRC3Vec:
/* 800989FC 0009593C  4E 80 00 20 */	blr 

.global JSGGetScaling__Q26JStage6TActorCFP3Vec
JSGGetScaling__Q26JStage6TActorCFP3Vec:
/* 80098A00 00095940  4E 80 00 20 */	blr 

.global JSGSetScaling__Q26JStage6TActorFRC3Vec
JSGSetScaling__Q26JStage6TActorFRC3Vec:
/* 80098A04 00095944  4E 80 00 20 */	blr 

.global JSGGetRotation__Q26JStage6TActorCFP3Vec
JSGGetRotation__Q26JStage6TActorCFP3Vec:
/* 80098A08 00095948  4E 80 00 20 */	blr 

.global JSGSetRotation__Q26JStage6TActorFRC3Vec
JSGSetRotation__Q26JStage6TActorFRC3Vec:
/* 80098A0C 0009594C  4E 80 00 20 */	blr 

.global JSGGetShape__Q26JStage6TActorCFv
JSGGetShape__Q26JStage6TActorCFv:
/* 80098A10 00095950  38 60 FF FF */	li r3, -1
/* 80098A14 00095954  4E 80 00 20 */	blr 

.global JSGSetShape__Q26JStage6TActorFUl
JSGSetShape__Q26JStage6TActorFUl:
/* 80098A18 00095958  4E 80 00 20 */	blr 

.global JSGGetAnimation__Q26JStage6TActorCFv
JSGGetAnimation__Q26JStage6TActorCFv:
/* 80098A1C 0009595C  38 60 FF FF */	li r3, -1
/* 80098A20 00095960  4E 80 00 20 */	blr 

.global JSGSetAnimation__Q26JStage6TActorFUl
JSGSetAnimation__Q26JStage6TActorFUl:
/* 80098A24 00095964  4E 80 00 20 */	blr 

.global JSGGetAnimationFrame__Q26JStage6TActorCFv
JSGGetAnimationFrame__Q26JStage6TActorCFv:
/* 80098A28 00095968  C0 22 89 20 */	lfs f1, lbl_80516C80@sda21(r2)
/* 80098A2C 0009596C  4E 80 00 20 */	blr 

.global JSGSetAnimationFrame__Q26JStage6TActorFf
JSGSetAnimationFrame__Q26JStage6TActorFf:
/* 80098A30 00095970  4E 80 00 20 */	blr 

.global JSGGetAnimationFrameMax__Q26JStage6TActorCFv
JSGGetAnimationFrameMax__Q26JStage6TActorCFv:
/* 80098A34 00095974  C0 22 89 20 */	lfs f1, lbl_80516C80@sda21(r2)
/* 80098A38 00095978  4E 80 00 20 */	blr 

.global JSGGetAnimationTransition__Q26JStage6TActorCFv
JSGGetAnimationTransition__Q26JStage6TActorCFv:
/* 80098A3C 0009597C  C0 22 89 20 */	lfs f1, lbl_80516C80@sda21(r2)
/* 80098A40 00095980  4E 80 00 20 */	blr 

.global JSGSetAnimationTransition__Q26JStage6TActorFf
JSGSetAnimationTransition__Q26JStage6TActorFf:
/* 80098A44 00095984  4E 80 00 20 */	blr 

.global JSGGetTextureAnimation__Q26JStage6TActorCFv
JSGGetTextureAnimation__Q26JStage6TActorCFv:
/* 80098A48 00095988  38 60 FF FF */	li r3, -1
/* 80098A4C 0009598C  4E 80 00 20 */	blr 

.global JSGSetTextureAnimation__Q26JStage6TActorFUl
JSGSetTextureAnimation__Q26JStage6TActorFUl:
/* 80098A50 00095990  4E 80 00 20 */	blr 

.global JSGGetTextureAnimationFrame__Q26JStage6TActorCFv
JSGGetTextureAnimationFrame__Q26JStage6TActorCFv:
/* 80098A54 00095994  C0 22 89 20 */	lfs f1, lbl_80516C80@sda21(r2)
/* 80098A58 00095998  4E 80 00 20 */	blr 

.global JSGSetTextureAnimationFrame__Q26JStage6TActorFf
JSGSetTextureAnimationFrame__Q26JStage6TActorFf:
/* 80098A5C 0009599C  4E 80 00 20 */	blr 

.global JSGGetTextureAnimationFrameMax__Q26JStage6TActorCFv
JSGGetTextureAnimationFrameMax__Q26JStage6TActorCFv:
/* 80098A60 000959A0  C0 22 89 20 */	lfs f1, lbl_80516C80@sda21(r2)
/* 80098A64 000959A4  4E 80 00 20 */	blr 
