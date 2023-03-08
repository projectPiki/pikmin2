.include "macros.inc"
.section .sbss # 0x80514D80 - 0x80516360
.balign 8
.obj mVersion__Q27JAInter10SoundTable, global
	.skip 0x1
.endobj mVersion__Q27JAInter10SoundTable
.obj mCategotyMax__Q27JAInter10SoundTable, global
	.skip 0x1
.endobj mCategotyMax__Q27JAInter10SoundTable
.balign 4
.obj mSoundMax__Q27JAInter10SoundTable, global
	.skip 0x4
.endobj mSoundMax__Q27JAInter10SoundTable
.obj mDatasize__Q27JAInter10SoundTable, global
	.skip 0x4
.endobj mDatasize__Q27JAInter10SoundTable
.obj mPointerCategory__Q27JAInter10SoundTable, global
	.skip 0x4
.endobj mPointerCategory__Q27JAInter10SoundTable
.obj mAddress__Q27JAInter10SoundTable, global
	.skip 0x4
.endobj mAddress__Q27JAInter10SoundTable

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.fn init__Q27JAInter10SoundTableFPUcUl, global
/* 800B744C 000B438C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800B7450 000B4390  7C 08 02 A6 */	mflr r0
/* 800B7454 000B4394  38 A0 00 04 */	li r5, 4
/* 800B7458 000B4398  90 01 00 14 */	stw r0, 0x14(r1)
/* 800B745C 000B439C  90 8D 8C 30 */	stw r4, mDatasize__Q27JAInter10SoundTable@sda21(r13)
/* 800B7460 000B43A0  80 8D 8B 6C */	lwz r4, msCurrentHeap__8JAIBasic@sda21(r13)
/* 800B7464 000B43A4  90 6D 8C 38 */	stw r3, mAddress__Q27JAInter10SoundTable@sda21(r13)
/* 800B7468 000B43A8  88 03 00 03 */	lbz r0, 3(r3)
/* 800B746C 000B43AC  38 60 00 24 */	li r3, 0x24
/* 800B7470 000B43B0  98 0D 8C 28 */	stb r0, mVersion__Q27JAInter10SoundTable@sda21(r13)
/* 800B7474 000B43B4  4B F6 CB D5 */	bl __nwa__FUlP7JKRHeapi
/* 800B7478 000B43B8  90 6D 8C 2C */	stw r3, mSoundMax__Q27JAInter10SoundTable@sda21(r13)
/* 800B747C 000B43BC  38 60 00 48 */	li r3, 0x48
/* 800B7480 000B43C0  80 8D 8B 6C */	lwz r4, msCurrentHeap__8JAIBasic@sda21(r13)
/* 800B7484 000B43C4  38 A0 00 04 */	li r5, 4
/* 800B7488 000B43C8  4B F6 CB C1 */	bl __nwa__FUlP7JKRHeapi
/* 800B748C 000B43CC  90 6D 8C 34 */	stw r3, mPointerCategory__Q27JAInter10SoundTable@sda21(r13)
/* 800B7490 000B43D0  39 20 00 00 */	li r9, 0
/* 800B7494 000B43D4  48 00 00 68 */	b .L_800B74FC
.L_800B7498:
/* 800B7498 000B43D8  80 0D 8C 38 */	lwz r0, mAddress__Q27JAInter10SoundTable@sda21(r13)
/* 800B749C 000B43DC  55 25 15 BA */	rlwinm r5, r9, 2, 0x16, 0x1d
/* 800B74A0 000B43E0  55 28 06 3E */	clrlwi r8, r9, 0x18
/* 800B74A4 000B43E4  80 6D 8C 2C */	lwz r3, mSoundMax__Q27JAInter10SoundTable@sda21(r13)
/* 800B74A8 000B43E8  7C 85 02 14 */	add r4, r5, r0
/* 800B74AC 000B43EC  55 27 0D FC */	rlwinm r7, r9, 1, 0x17, 0x1e
/* 800B74B0 000B43F0  A0 04 00 06 */	lhz r0, 6(r4)
/* 800B74B4 000B43F4  28 08 00 10 */	cmplwi r8, 0x10
/* 800B74B8 000B43F8  7C 03 3B 2E */	sthx r0, r3, r7
/* 800B74BC 000B43FC  80 CD 8C 38 */	lwz r6, mAddress__Q27JAInter10SoundTable@sda21(r13)
/* 800B74C0 000B4400  80 6D 8C 34 */	lwz r3, mPointerCategory__Q27JAInter10SoundTable@sda21(r13)
/* 800B74C4 000B4404  7C 85 32 14 */	add r4, r5, r6
/* 800B74C8 000B4408  A0 04 00 08 */	lhz r0, 8(r4)
/* 800B74CC 000B440C  54 00 20 36 */	slwi r0, r0, 4
/* 800B74D0 000B4410  7C 86 02 14 */	add r4, r6, r0
/* 800B74D4 000B4414  38 04 00 50 */	addi r0, r4, 0x50
/* 800B74D8 000B4418  7C 03 29 2E */	stwx r0, r3, r5
/* 800B74DC 000B441C  40 80 00 1C */	bge .L_800B74F8
/* 800B74E0 000B4420  80 6D 8C 2C */	lwz r3, mSoundMax__Q27JAInter10SoundTable@sda21(r13)
/* 800B74E4 000B4424  7C 03 3A 2E */	lhzx r0, r3, r7
/* 800B74E8 000B4428  28 00 00 00 */	cmplwi r0, 0
/* 800B74EC 000B442C  41 82 00 0C */	beq .L_800B74F8
/* 800B74F0 000B4430  38 08 00 01 */	addi r0, r8, 1
/* 800B74F4 000B4434  98 0D 8C 29 */	stb r0, mCategotyMax__Q27JAInter10SoundTable@sda21(r13)
.L_800B74F8:
/* 800B74F8 000B4438  39 29 00 01 */	addi r9, r9, 1
.L_800B74FC:
/* 800B74FC 000B443C  55 20 06 3E */	clrlwi r0, r9, 0x18
/* 800B7500 000B4440  28 00 00 12 */	cmplwi r0, 0x12
/* 800B7504 000B4444  41 80 FF 94 */	blt .L_800B7498
/* 800B7508 000B4448  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800B750C 000B444C  7C 08 03 A6 */	mtlr r0
/* 800B7510 000B4450  38 21 00 10 */	addi r1, r1, 0x10
/* 800B7514 000B4454  4E 80 00 20 */	blr 
.endfn init__Q27JAInter10SoundTableFPUcUl

.fn getInfoPointer__Q27JAInter10SoundTableFUl, global
/* 800B7518 000B4458  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 800B751C 000B445C  7C 08 02 A6 */	mflr r0
/* 800B7520 000B4460  54 64 00 02 */	rlwinm r4, r3, 0, 0, 1
/* 800B7524 000B4464  90 01 00 24 */	stw r0, 0x24(r1)
/* 800B7528 000B4468  3C 00 C0 00 */	lis r0, 0xc000
/* 800B752C 000B446C  7C 04 00 00 */	cmpw r4, r0
/* 800B7530 000B4470  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 800B7534 000B4474  3B E0 00 00 */	li r31, 0
/* 800B7538 000B4478  93 C1 00 18 */	stw r30, 0x18(r1)
/* 800B753C 000B447C  93 A1 00 14 */	stw r29, 0x14(r1)
/* 800B7540 000B4480  7C 7D 1B 78 */	mr r29, r3
/* 800B7544 000B4484  41 82 00 3C */	beq .L_800B7580
/* 800B7548 000B4488  40 80 00 18 */	bge .L_800B7560
/* 800B754C 000B448C  3C 60 80 00 */	lis r3, 0x80000001@ha
/* 800B7550 000B4490  38 03 00 01 */	addi r0, r3, 0x80000001@l
/* 800B7554 000B4494  7C 04 00 00 */	cmpw r4, r0
/* 800B7558 000B4498  40 80 00 2C */	bge .L_800B7584
/* 800B755C 000B449C  48 00 00 1C */	b .L_800B7578
.L_800B7560:
/* 800B7560 000B44A0  2C 04 00 00 */	cmpwi r4, 0
/* 800B7564 000B44A4  41 82 00 08 */	beq .L_800B756C
/* 800B7568 000B44A8  48 00 00 1C */	b .L_800B7584
.L_800B756C:
/* 800B756C 000B44AC  57 BE A6 3E */	rlwinm r30, r29, 0x14, 0x18, 0x1f
/* 800B7570 000B44B0  4B FF 65 01 */	bl getParamSeCategoryMax__18JAIGlobalParameterFv
/* 800B7574 000B44B4  48 00 00 10 */	b .L_800B7584
.L_800B7578:
/* 800B7578 000B44B8  3B C0 00 10 */	li r30, 0x10
/* 800B757C 000B44BC  48 00 00 08 */	b .L_800B7584
.L_800B7580:
/* 800B7580 000B44C0  3B C0 00 11 */	li r30, 0x11
.L_800B7584:
/* 800B7584 000B44C4  80 0D 8C 38 */	lwz r0, mAddress__Q27JAInter10SoundTable@sda21(r13)
/* 800B7588 000B44C8  57 A5 05 BE */	clrlwi r5, r29, 0x16
/* 800B758C 000B44CC  28 00 00 00 */	cmplwi r0, 0
/* 800B7590 000B44D0  41 82 00 2C */	beq .L_800B75BC
/* 800B7594 000B44D4  80 6D 8C 2C */	lwz r3, mSoundMax__Q27JAInter10SoundTable@sda21(r13)
/* 800B7598 000B44D8  57 C0 08 3C */	slwi r0, r30, 1
/* 800B759C 000B44DC  7C 03 02 2E */	lhzx r0, r3, r0
/* 800B75A0 000B44E0  7C 05 00 40 */	cmplw r5, r0
/* 800B75A4 000B44E4  40 80 00 18 */	bge .L_800B75BC
/* 800B75A8 000B44E8  80 8D 8C 34 */	lwz r4, mPointerCategory__Q27JAInter10SoundTable@sda21(r13)
/* 800B75AC 000B44EC  57 C3 10 3A */	slwi r3, r30, 2
/* 800B75B0 000B44F0  54 A0 20 36 */	slwi r0, r5, 4
/* 800B75B4 000B44F4  7C 64 18 2E */	lwzx r3, r4, r3
/* 800B75B8 000B44F8  7F E3 02 14 */	add r31, r3, r0
.L_800B75BC:
/* 800B75BC 000B44FC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 800B75C0 000B4500  7F E3 FB 78 */	mr r3, r31
/* 800B75C4 000B4504  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 800B75C8 000B4508  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 800B75CC 000B450C  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 800B75D0 000B4510  7C 08 03 A6 */	mtlr r0
/* 800B75D4 000B4514  38 21 00 20 */	addi r1, r1, 0x20
/* 800B75D8 000B4518  4E 80 00 20 */	blr 
.endfn getInfoPointer__Q27JAInter10SoundTableFUl

.fn getInfoFormat__Q27JAInter10SoundTableFUl, global
/* 800B75DC 000B451C  54 65 00 02 */	rlwinm r5, r3, 0, 0, 1
/* 800B75E0 000B4520  3C 00 C0 00 */	lis r0, 0xc000
/* 800B75E4 000B4524  7C 05 00 00 */	cmpw r5, r0
/* 800B75E8 000B4528  38 60 00 00 */	li r3, 0
/* 800B75EC 000B452C  41 82 00 3C */	beq .L_800B7628
/* 800B75F0 000B4530  40 80 00 18 */	bge .L_800B7608
/* 800B75F4 000B4534  3C 80 80 00 */	lis r4, 0x80000001@ha
/* 800B75F8 000B4538  38 04 00 01 */	addi r0, r4, 0x80000001@l
/* 800B75FC 000B453C  7C 05 00 00 */	cmpw r5, r0
/* 800B7600 000B4540  4C 80 00 20 */	bgelr 
/* 800B7604 000B4544  48 00 00 18 */	b .L_800B761C
.L_800B7608:
/* 800B7608 000B4548  2C 05 00 00 */	cmpwi r5, 0
/* 800B760C 000B454C  4C 82 00 20 */	bnelr 
/* 800B7610 000B4550  80 6D 8C 38 */	lwz r3, mAddress__Q27JAInter10SoundTable@sda21(r13)
/* 800B7614 000B4554  88 63 00 00 */	lbz r3, 0(r3)
/* 800B7618 000B4558  4E 80 00 20 */	blr 
.L_800B761C:
/* 800B761C 000B455C  80 6D 8C 38 */	lwz r3, mAddress__Q27JAInter10SoundTable@sda21(r13)
/* 800B7620 000B4560  88 63 00 01 */	lbz r3, 1(r3)
/* 800B7624 000B4564  4E 80 00 20 */	blr 
.L_800B7628:
/* 800B7628 000B4568  80 6D 8C 38 */	lwz r3, mAddress__Q27JAInter10SoundTable@sda21(r13)
/* 800B762C 000B456C  88 63 00 02 */	lbz r3, 2(r3)
/* 800B7630 000B4570  4E 80 00 20 */	blr 
.endfn getInfoFormat__Q27JAInter10SoundTableFUl

.fn getCategotyMax__Q27JAInter10SoundTableFv, global
/* 800B7634 000B4574  88 6D 8C 29 */	lbz r3, mCategotyMax__Q27JAInter10SoundTable@sda21(r13)
/* 800B7638 000B4578  4E 80 00 20 */	blr 
.endfn getCategotyMax__Q27JAInter10SoundTableFv

.fn getSoundMax__Q27JAInter10SoundTableFUc, global
/* 800B763C 000B457C  80 8D 8C 2C */	lwz r4, mSoundMax__Q27JAInter10SoundTable@sda21(r13)
/* 800B7640 000B4580  54 60 0D FC */	rlwinm r0, r3, 1, 0x17, 0x1e
/* 800B7644 000B4584  7C 64 02 2E */	lhzx r3, r4, r0
/* 800B7648 000B4588  4E 80 00 20 */	blr 
.endfn getSoundMax__Q27JAInter10SoundTableFUc
