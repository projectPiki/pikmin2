.include "macros.inc"

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global getData__Q47JStudio3stb4data16TParse_TSequenceCFPQ57JStudio3stb4data16TParse_TSequence5TData
getData__Q47JStudio3stb4data16TParse_TSequenceCFPQ57JStudio3stb4data16TParse_TSequence5TData:
/* 8000893C 0000587C  38 00 00 00 */	li r0, 0
/* 80008940 00005880  80 63 00 00 */	lwz r3, 0(r3)
/* 80008944 00005884  90 04 00 08 */	stw r0, 8(r4)
/* 80008948 00005888  90 04 00 0C */	stw r0, 0xc(r4)
/* 8000894C 0000588C  80 A3 00 00 */	lwz r5, 0(r3)
/* 80008950 00005890  54 A0 46 3F */	rlwinm. r0, r5, 8, 0x18, 0x1f
/* 80008954 00005894  54 A5 02 3E */	clrlwi r5, r5, 8
/* 80008958 00005898  98 04 00 00 */	stb r0, 0(r4)
/* 8000895C 0000589C  90 A4 00 04 */	stw r5, 4(r4)
/* 80008960 000058A0  4D 82 00 20 */	beqlr 
/* 80008964 000058A4  28 00 00 7F */	cmplwi r0, 0x7f
/* 80008968 000058A8  38 03 00 04 */	addi r0, r3, 4
/* 8000896C 000058AC  41 81 00 0C */	bgt lbl_80008978
/* 80008970 000058B0  90 04 00 0C */	stw r0, 0xc(r4)
/* 80008974 000058B4  4E 80 00 20 */	blr 
lbl_80008978:
/* 80008978 000058B8  90 04 00 08 */	stw r0, 8(r4)
/* 8000897C 000058BC  7C 00 2A 14 */	add r0, r0, r5
/* 80008980 000058C0  90 04 00 0C */	stw r0, 0xc(r4)
/* 80008984 000058C4  4E 80 00 20 */	blr 

.global getData__Q47JStudio3stb4data17TParse_TParagraphCFPQ57JStudio3stb4data17TParse_TParagraph5TData
getData__Q47JStudio3stb4data17TParse_TParagraphCFPQ57JStudio3stb4data17TParse_TParagraph5TData:
/* 80008988 000058C8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8000898C 000058CC  7C 08 02 A6 */	mflr r0
/* 80008990 000058D0  80 63 00 00 */	lwz r3, 0(r3)
/* 80008994 000058D4  38 C0 00 00 */	li r6, 0
/* 80008998 000058D8  90 01 00 24 */	stw r0, 0x24(r1)
/* 8000899C 000058DC  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 800089A0 000058E0  7C 9F 23 78 */	mr r31, r4
/* 800089A4 000058E4  7F E5 FB 78 */	mr r5, r31
/* 800089A8 000058E8  38 81 00 08 */	addi r4, r1, 8
/* 800089AC 000058EC  48 01 E7 7D */	bl parseVariableUInt_16_32_following__Q27JGadget6binaryFPCvPUlPUlPQ37JGadget6binary5TEBit
/* 800089B0 000058F0  80 01 00 08 */	lwz r0, 8(r1)
/* 800089B4 000058F4  90 1F 00 04 */	stw r0, 4(r31)
/* 800089B8 000058F8  80 01 00 08 */	lwz r0, 8(r1)
/* 800089BC 000058FC  28 00 00 00 */	cmplwi r0, 0
/* 800089C0 00005900  40 82 00 14 */	bne lbl_800089D4
/* 800089C4 00005904  38 00 00 00 */	li r0, 0
/* 800089C8 00005908  90 1F 00 08 */	stw r0, 8(r31)
/* 800089CC 0000590C  90 7F 00 0C */	stw r3, 0xc(r31)
/* 800089D0 00005910  48 00 00 1C */	b lbl_800089EC
lbl_800089D4:
/* 800089D4 00005914  90 7F 00 08 */	stw r3, 8(r31)
/* 800089D8 00005918  80 81 00 08 */	lwz r4, 8(r1)
/* 800089DC 0000591C  38 04 00 03 */	addi r0, r4, 3
/* 800089E0 00005920  54 00 00 3A */	rlwinm r0, r0, 0, 0, 0x1d
/* 800089E4 00005924  7C 03 02 14 */	add r0, r3, r0
/* 800089E8 00005928  90 1F 00 0C */	stw r0, 0xc(r31)
lbl_800089EC:
/* 800089EC 0000592C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 800089F0 00005930  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 800089F4 00005934  7C 08 03 A6 */	mtlr r0
/* 800089F8 00005938  38 21 00 20 */	addi r1, r1, 0x20
/* 800089FC 0000593C  4E 80 00 20 */	blr 

.global getData__Q47JStudio3stb4data22TParse_TParagraph_dataCFPQ57JStudio3stb4data22TParse_TParagraph_data5TData
getData__Q47JStudio3stb4data22TParse_TParagraph_dataCFPQ57JStudio3stb4data22TParse_TParagraph_data5TData:
/* 80008A00 00005940  38 00 00 00 */	li r0, 0
/* 80008A04 00005944  80 63 00 00 */	lwz r3, 0(r3)
/* 80008A08 00005948  90 04 00 04 */	stw r0, 4(r4)
/* 80008A0C 0000594C  28 03 00 00 */	cmplwi r3, 0
/* 80008A10 00005950  90 04 00 08 */	stw r0, 8(r4)
/* 80008A14 00005954  90 04 00 0C */	stw r0, 0xc(r4)
/* 80008A18 00005958  90 04 00 10 */	stw r0, 0x10(r4)
/* 80008A1C 0000595C  4D 82 00 20 */	beqlr 
/* 80008A20 00005960  88 C3 00 00 */	lbz r6, 0(r3)
/* 80008A24 00005964  54 C0 07 76 */	rlwinm r0, r6, 0, 0x1d, 0x1b
/* 80008A28 00005968  28 06 00 00 */	cmplwi r6, 0
/* 80008A2C 0000596C  98 04 00 00 */	stb r0, 0(r4)
/* 80008A30 00005970  4D 82 00 20 */	beqlr 
/* 80008A34 00005974  54 C0 07 39 */	rlwinm. r0, r6, 0, 0x1c, 0x1c
/* 80008A38 00005978  38 A3 00 01 */	addi r5, r3, 1
/* 80008A3C 0000597C  38 E0 00 01 */	li r7, 1
/* 80008A40 00005980  41 82 00 0C */	beq lbl_80008A4C
/* 80008A44 00005984  88 E5 00 00 */	lbz r7, 0(r5)
/* 80008A48 00005988  38 A5 00 01 */	addi r5, r5, 1
lbl_80008A4C:
/* 80008A4C 0000598C  90 E4 00 08 */	stw r7, 8(r4)
/* 80008A50 00005990  54 C0 07 7F */	clrlwi. r0, r6, 0x1d
/* 80008A54 00005994  90 A4 00 0C */	stw r5, 0xc(r4)
/* 80008A58 00005998  4D 82 00 20 */	beqlr 
/* 80008A5C 0000599C  3C 60 80 47 */	lis r3, gauDataSize_TEParagraph_data__Q37JStudio3stb4data@ha
/* 80008A60 000059A0  54 00 15 BA */	rlwinm r0, r0, 2, 0x16, 0x1d
/* 80008A64 000059A4  38 63 34 60 */	addi r3, r3, gauDataSize_TEParagraph_data__Q37JStudio3stb4data@l
/* 80008A68 000059A8  7C 63 00 2E */	lwzx r3, r3, r0
/* 80008A6C 000059AC  7C 03 39 D6 */	mullw r0, r3, r7
/* 80008A70 000059B0  90 64 00 04 */	stw r3, 4(r4)
/* 80008A74 000059B4  7C 05 02 14 */	add r0, r5, r0
/* 80008A78 000059B8  90 04 00 10 */	stw r0, 0x10(r4)
/* 80008A7C 000059BC  4E 80 00 20 */	blr 
