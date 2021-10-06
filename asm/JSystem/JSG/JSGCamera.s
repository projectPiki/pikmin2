.include "macros.inc"

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global __dt__Q26JStage7TCameraFv
__dt__Q26JStage7TCameraFv:
/* 800987F4 00095734  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800987F8 00095738  7C 08 02 A6 */	mflr r0
/* 800987FC 0009573C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80098800 00095740  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80098804 00095744  7C 9F 23 78 */	mr r31, r4
/* 80098808 00095748  93 C1 00 08 */	stw r30, 8(r1)
/* 8009880C 0009574C  7C 7E 1B 79 */	or. r30, r3, r3
/* 80098810 00095750  41 82 00 28 */	beq lbl_80098838
/* 80098814 00095754  3C A0 80 4A */	lis r5, __vt__Q26JStage7TCamera@ha
/* 80098818 00095758  38 80 00 00 */	li r4, 0
/* 8009881C 0009575C  38 05 35 E8 */	addi r0, r5, __vt__Q26JStage7TCamera@l
/* 80098820 00095760  90 1E 00 00 */	stw r0, 0(r30)
/* 80098824 00095764  48 00 00 B1 */	bl __dt__Q26JStage7TObjectFv
/* 80098828 00095768  7F E0 07 35 */	extsh. r0, r31
/* 8009882C 0009576C  40 81 00 0C */	ble lbl_80098838
/* 80098830 00095770  7F C3 F3 78 */	mr r3, r30
/* 80098834 00095774  4B F8 B8 81 */	bl __dl__FPv
lbl_80098838:
/* 80098838 00095778  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8009883C 0009577C  7F C3 F3 78 */	mr r3, r30
/* 80098840 00095780  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80098844 00095784  83 C1 00 08 */	lwz r30, 8(r1)
/* 80098848 00095788  7C 08 03 A6 */	mtlr r0
/* 8009884C 0009578C  38 21 00 10 */	addi r1, r1, 0x10
/* 80098850 00095790  4E 80 00 20 */	blr 

.global JSGFGetType__Q26JStage7TCameraCFv
JSGFGetType__Q26JStage7TCameraCFv:
/* 80098854 00095794  38 60 00 03 */	li r3, 3
/* 80098858 00095798  4E 80 00 20 */	blr 

.global JSGGetProjectionType__Q26JStage7TCameraCFv
JSGGetProjectionType__Q26JStage7TCameraCFv:
/* 8009885C 0009579C  38 60 00 01 */	li r3, 1
/* 80098860 000957A0  4E 80 00 20 */	blr 

.global JSGSetProjectionType__Q26JStage7TCameraFQ26JStage18TECameraProjection
JSGSetProjectionType__Q26JStage7TCameraFQ26JStage18TECameraProjection:
/* 80098864 000957A4  4E 80 00 20 */	blr 

.global JSGGetProjectionNear__Q26JStage7TCameraCFv
JSGGetProjectionNear__Q26JStage7TCameraCFv:
/* 80098868 000957A8  C0 22 89 10 */	lfs f1, lbl_80516C70@sda21(r2)
/* 8009886C 000957AC  4E 80 00 20 */	blr 

.global JSGSetProjectionNear__Q26JStage7TCameraFf
JSGSetProjectionNear__Q26JStage7TCameraFf:
/* 80098870 000957B0  4E 80 00 20 */	blr 

.global JSGGetProjectionFar__Q26JStage7TCameraCFv
JSGGetProjectionFar__Q26JStage7TCameraCFv:
/* 80098874 000957B4  3C 60 80 51 */	lis r3, __float_max@ha
/* 80098878 000957B8  C0 23 48 D8 */	lfs f1, __float_max@l(r3)
/* 8009887C 000957BC  4E 80 00 20 */	blr 

.global JSGSetProjectionFar__Q26JStage7TCameraFf
JSGSetProjectionFar__Q26JStage7TCameraFf:
/* 80098880 000957C0  4E 80 00 20 */	blr 

.global JSGGetProjectionFovy__Q26JStage7TCameraCFv
JSGGetProjectionFovy__Q26JStage7TCameraCFv:
/* 80098884 000957C4  C0 22 89 10 */	lfs f1, lbl_80516C70@sda21(r2)
/* 80098888 000957C8  4E 80 00 20 */	blr 

.global JSGSetProjectionFovy__Q26JStage7TCameraFf
JSGSetProjectionFovy__Q26JStage7TCameraFf:
/* 8009888C 000957CC  4E 80 00 20 */	blr 

.global JSGGetProjectionAspect__Q26JStage7TCameraCFv
JSGGetProjectionAspect__Q26JStage7TCameraCFv:
/* 80098890 000957D0  C0 22 89 10 */	lfs f1, lbl_80516C70@sda21(r2)
/* 80098894 000957D4  4E 80 00 20 */	blr 

.global JSGSetProjectionAspect__Q26JStage7TCameraFf
JSGSetProjectionAspect__Q26JStage7TCameraFf:
/* 80098898 000957D8  4E 80 00 20 */	blr 

.global JSGGetProjectionField__Q26JStage7TCameraCFPf
JSGGetProjectionField__Q26JStage7TCameraCFPf:
/* 8009889C 000957DC  4E 80 00 20 */	blr 

.global JSGSetProjectionField__Q26JStage7TCameraFPCf
JSGSetProjectionField__Q26JStage7TCameraFPCf:
/* 800988A0 000957E0  4E 80 00 20 */	blr 

.global JSGGetViewType__Q26JStage7TCameraCFv
JSGGetViewType__Q26JStage7TCameraCFv:
/* 800988A4 000957E4  38 60 00 01 */	li r3, 1
/* 800988A8 000957E8  4E 80 00 20 */	blr 

.global JSGSetViewType__Q26JStage7TCameraFQ26JStage12TECameraView
JSGSetViewType__Q26JStage7TCameraFQ26JStage12TECameraView:
/* 800988AC 000957EC  4E 80 00 20 */	blr 

.global JSGGetViewPosition__Q26JStage7TCameraCFP3Vec
JSGGetViewPosition__Q26JStage7TCameraCFP3Vec:
/* 800988B0 000957F0  4E 80 00 20 */	blr 

.global JSGSetViewPosition__Q26JStage7TCameraFRC3Vec
JSGSetViewPosition__Q26JStage7TCameraFRC3Vec:
/* 800988B4 000957F4  4E 80 00 20 */	blr 

.global JSGGetViewUpVector__Q26JStage7TCameraCFP3Vec
JSGGetViewUpVector__Q26JStage7TCameraCFP3Vec:
/* 800988B8 000957F8  4E 80 00 20 */	blr 

.global JSGSetViewUpVector__Q26JStage7TCameraFRC3Vec
JSGSetViewUpVector__Q26JStage7TCameraFRC3Vec:
/* 800988BC 000957FC  4E 80 00 20 */	blr 

.global JSGGetViewTargetPosition__Q26JStage7TCameraCFP3Vec
JSGGetViewTargetPosition__Q26JStage7TCameraCFP3Vec:
/* 800988C0 00095800  4E 80 00 20 */	blr 

.global JSGSetViewTargetPosition__Q26JStage7TCameraFRC3Vec
JSGSetViewTargetPosition__Q26JStage7TCameraFRC3Vec:
/* 800988C4 00095804  4E 80 00 20 */	blr 

.global JSGGetViewRoll__Q26JStage7TCameraCFv
JSGGetViewRoll__Q26JStage7TCameraCFv:
/* 800988C8 00095808  C0 22 89 10 */	lfs f1, lbl_80516C70@sda21(r2)
/* 800988CC 0009580C  4E 80 00 20 */	blr 

.global JSGSetViewRoll__Q26JStage7TCameraFf
JSGSetViewRoll__Q26JStage7TCameraFf:
/* 800988D0 00095810  4E 80 00 20 */	blr 
