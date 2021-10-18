.include "macros.inc"
.section .rodata  # 0x804732E0 - 0x8049E220
.balign 0x8
.global lbl_804968F8
lbl_804968F8:
	.4byte 0x4E6F4E61
	.4byte 0x6D655363
	.4byte 0x7265656E
	.4byte 0x00000000

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 0x8
.global __vt__Q33ebi6Screen11TScreenBase
__vt__Q33ebi6Screen11TScreenBase:
	.4byte 0
	.4byte 0
	.4byte setArchive__Q33ebi6Screen11TScreenBaseFP10JKRArchive
	.4byte openScreen__Q33ebi6Screen11TScreenBaseFPQ33ebi6Screen7ArgOpen
	.4byte closeScreen__Q33ebi6Screen11TScreenBaseFPQ33ebi6Screen8ArgClose
	.4byte killScreen__Q33ebi6Screen11TScreenBaseFv
	.4byte update__Q33ebi6Screen11TScreenBaseFv
	.4byte draw__Q33ebi6Screen11TScreenBaseFv
	.4byte isFinishScreen__Q33ebi6Screen11TScreenBaseFv
	.4byte doSetArchive__Q33ebi6Screen11TScreenBaseFP10JKRArchive
	.4byte doOpenScreen__Q33ebi6Screen11TScreenBaseFPQ33ebi6Screen7ArgOpen
	.4byte doCloseScreen__Q33ebi6Screen11TScreenBaseFPQ33ebi6Screen8ArgClose
	.4byte doKillScreen__Q33ebi6Screen11TScreenBaseFv
	.4byte doInitWaitState__Q33ebi6Screen11TScreenBaseFv
	.4byte doUpdateStateOpen__Q33ebi6Screen11TScreenBaseFv
	.4byte doUpdateStateWait__Q33ebi6Screen11TScreenBaseFv
	.4byte doUpdateStateClose__Q33ebi6Screen11TScreenBaseFv
	.4byte doDraw__Q33ebi6Screen11TScreenBaseFv
	.4byte getName__Q33ebi6Screen11TScreenBaseFv
	.4byte 0

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global setArchive__Q33ebi6Screen11TScreenBaseFP10JKRArchive
setArchive__Q33ebi6Screen11TScreenBaseFP10JKRArchive:
/* 803D3850 003D0790  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803D3854 003D0794  7C 08 02 A6 */	mflr r0
/* 803D3858 003D0798  90 01 00 14 */	stw r0, 0x14(r1)
/* 803D385C 003D079C  80 03 00 04 */	lwz r0, 4(r3)
/* 803D3860 003D07A0  28 00 00 00 */	cmplwi r0, 0
/* 803D3864 003D07A4  40 82 00 18 */	bne lbl_803D387C
/* 803D3868 003D07A8  90 83 00 04 */	stw r4, 4(r3)
/* 803D386C 003D07AC  81 83 00 00 */	lwz r12, 0(r3)
/* 803D3870 003D07B0  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 803D3874 003D07B4  7D 89 03 A6 */	mtctr r12
/* 803D3878 003D07B8  4E 80 04 21 */	bctrl 
lbl_803D387C:
/* 803D387C 003D07BC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803D3880 003D07C0  7C 08 03 A6 */	mtlr r0
/* 803D3884 003D07C4  38 21 00 10 */	addi r1, r1, 0x10
/* 803D3888 003D07C8  4E 80 00 20 */	blr 

.global doSetArchive__Q33ebi6Screen11TScreenBaseFP10JKRArchive
doSetArchive__Q33ebi6Screen11TScreenBaseFP10JKRArchive:
/* 803D388C 003D07CC  4E 80 00 20 */	blr 

.global openScreen__Q33ebi6Screen11TScreenBaseFPQ33ebi6Screen7ArgOpen
openScreen__Q33ebi6Screen11TScreenBaseFPQ33ebi6Screen7ArgOpen:
/* 803D3890 003D07D0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803D3894 003D07D4  7C 08 02 A6 */	mflr r0
/* 803D3898 003D07D8  90 01 00 14 */	stw r0, 0x14(r1)
/* 803D389C 003D07DC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803D38A0 003D07E0  7C 7F 1B 78 */	mr r31, r3
/* 803D38A4 003D07E4  80 03 00 08 */	lwz r0, 8(r3)
/* 803D38A8 003D07E8  2C 00 00 00 */	cmpwi r0, 0
/* 803D38AC 003D07EC  40 82 00 24 */	bne lbl_803D38D0
/* 803D38B0 003D07F0  81 83 00 00 */	lwz r12, 0(r3)
/* 803D38B4 003D07F4  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 803D38B8 003D07F8  7D 89 03 A6 */	mtctr r12
/* 803D38BC 003D07FC  4E 80 04 21 */	bctrl 
/* 803D38C0 003D0800  38 00 00 01 */	li r0, 1
/* 803D38C4 003D0804  38 60 00 01 */	li r3, 1
/* 803D38C8 003D0808  90 1F 00 08 */	stw r0, 8(r31)
/* 803D38CC 003D080C  48 00 00 08 */	b lbl_803D38D4
lbl_803D38D0:
/* 803D38D0 003D0810  38 60 00 00 */	li r3, 0
lbl_803D38D4:
/* 803D38D4 003D0814  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803D38D8 003D0818  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803D38DC 003D081C  7C 08 03 A6 */	mtlr r0
/* 803D38E0 003D0820  38 21 00 10 */	addi r1, r1, 0x10
/* 803D38E4 003D0824  4E 80 00 20 */	blr 

.global doOpenScreen__Q33ebi6Screen11TScreenBaseFPQ33ebi6Screen7ArgOpen
doOpenScreen__Q33ebi6Screen11TScreenBaseFPQ33ebi6Screen7ArgOpen:
/* 803D38E8 003D0828  4E 80 00 20 */	blr 

.global closeScreen__Q33ebi6Screen11TScreenBaseFPQ33ebi6Screen8ArgClose
closeScreen__Q33ebi6Screen11TScreenBaseFPQ33ebi6Screen8ArgClose:
/* 803D38EC 003D082C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803D38F0 003D0830  7C 08 02 A6 */	mflr r0
/* 803D38F4 003D0834  90 01 00 14 */	stw r0, 0x14(r1)
/* 803D38F8 003D0838  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803D38FC 003D083C  7C 7F 1B 78 */	mr r31, r3
/* 803D3900 003D0840  80 03 00 08 */	lwz r0, 8(r3)
/* 803D3904 003D0844  2C 00 00 02 */	cmpwi r0, 2
/* 803D3908 003D0848  40 82 00 24 */	bne lbl_803D392C
/* 803D390C 003D084C  81 83 00 00 */	lwz r12, 0(r3)
/* 803D3910 003D0850  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 803D3914 003D0854  7D 89 03 A6 */	mtctr r12
/* 803D3918 003D0858  4E 80 04 21 */	bctrl 
/* 803D391C 003D085C  38 00 00 03 */	li r0, 3
/* 803D3920 003D0860  38 60 00 01 */	li r3, 1
/* 803D3924 003D0864  90 1F 00 08 */	stw r0, 8(r31)
/* 803D3928 003D0868  48 00 00 08 */	b lbl_803D3930
lbl_803D392C:
/* 803D392C 003D086C  38 60 00 00 */	li r3, 0
lbl_803D3930:
/* 803D3930 003D0870  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803D3934 003D0874  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803D3938 003D0878  7C 08 03 A6 */	mtlr r0
/* 803D393C 003D087C  38 21 00 10 */	addi r1, r1, 0x10
/* 803D3940 003D0880  4E 80 00 20 */	blr 

.global doCloseScreen__Q33ebi6Screen11TScreenBaseFPQ33ebi6Screen8ArgClose
doCloseScreen__Q33ebi6Screen11TScreenBaseFPQ33ebi6Screen8ArgClose:
/* 803D3944 003D0884  4E 80 00 20 */	blr 

.global killScreen__Q33ebi6Screen11TScreenBaseFv
killScreen__Q33ebi6Screen11TScreenBaseFv:
/* 803D3948 003D0888  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803D394C 003D088C  7C 08 02 A6 */	mflr r0
/* 803D3950 003D0890  90 01 00 14 */	stw r0, 0x14(r1)
/* 803D3954 003D0894  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803D3958 003D0898  7C 7F 1B 78 */	mr r31, r3
/* 803D395C 003D089C  81 83 00 00 */	lwz r12, 0(r3)
/* 803D3960 003D08A0  81 8C 00 30 */	lwz r12, 0x30(r12)
/* 803D3964 003D08A4  7D 89 03 A6 */	mtctr r12
/* 803D3968 003D08A8  4E 80 04 21 */	bctrl 
/* 803D396C 003D08AC  38 00 00 00 */	li r0, 0
/* 803D3970 003D08B0  90 1F 00 08 */	stw r0, 8(r31)
/* 803D3974 003D08B4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803D3978 003D08B8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803D397C 003D08BC  7C 08 03 A6 */	mtlr r0
/* 803D3980 003D08C0  38 21 00 10 */	addi r1, r1, 0x10
/* 803D3984 003D08C4  4E 80 00 20 */	blr 

.global isFinishScreen__Q33ebi6Screen11TScreenBaseFv
isFinishScreen__Q33ebi6Screen11TScreenBaseFv:
/* 803D3988 003D08C8  80 03 00 08 */	lwz r0, 8(r3)
/* 803D398C 003D08CC  7C 00 00 34 */	cntlzw r0, r0
/* 803D3990 003D08D0  54 03 DE 3E */	rlwinm r3, r0, 0x1b, 0x18, 0x1f
/* 803D3994 003D08D4  4E 80 00 20 */	blr 

.global isWaitScreen__Q33ebi6Screen11TScreenBaseFv
isWaitScreen__Q33ebi6Screen11TScreenBaseFv:
/* 803D3998 003D08D8  80 03 00 08 */	lwz r0, 8(r3)
/* 803D399C 003D08DC  20 00 00 02 */	subfic r0, r0, 2
/* 803D39A0 003D08E0  7C 00 00 34 */	cntlzw r0, r0
/* 803D39A4 003D08E4  54 03 DE 3E */	rlwinm r3, r0, 0x1b, 0x18, 0x1f
/* 803D39A8 003D08E8  4E 80 00 20 */	blr 

.global isCloseScreen__Q33ebi6Screen11TScreenBaseFv
isCloseScreen__Q33ebi6Screen11TScreenBaseFv:
/* 803D39AC 003D08EC  80 03 00 08 */	lwz r0, 8(r3)
/* 803D39B0 003D08F0  20 00 00 03 */	subfic r0, r0, 3
/* 803D39B4 003D08F4  7C 00 00 34 */	cntlzw r0, r0
/* 803D39B8 003D08F8  54 03 DE 3E */	rlwinm r3, r0, 0x1b, 0x18, 0x1f
/* 803D39BC 003D08FC  4E 80 00 20 */	blr 

.global update__Q33ebi6Screen11TScreenBaseFv
update__Q33ebi6Screen11TScreenBaseFv:
/* 803D39C0 003D0900  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803D39C4 003D0904  7C 08 02 A6 */	mflr r0
/* 803D39C8 003D0908  90 01 00 14 */	stw r0, 0x14(r1)
/* 803D39CC 003D090C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803D39D0 003D0910  7C 7F 1B 78 */	mr r31, r3
/* 803D39D4 003D0914  80 03 00 08 */	lwz r0, 8(r3)
/* 803D39D8 003D0918  2C 00 00 02 */	cmpwi r0, 2
/* 803D39DC 003D091C  41 82 00 5C */	beq lbl_803D3A38
/* 803D39E0 003D0920  40 80 00 14 */	bge lbl_803D39F4
/* 803D39E4 003D0924  2C 00 00 00 */	cmpwi r0, 0
/* 803D39E8 003D0928  41 82 00 B0 */	beq lbl_803D3A98
/* 803D39EC 003D092C  40 80 00 14 */	bge lbl_803D3A00
/* 803D39F0 003D0930  48 00 00 A8 */	b lbl_803D3A98
lbl_803D39F4:
/* 803D39F4 003D0934  2C 00 00 04 */	cmpwi r0, 4
/* 803D39F8 003D0938  40 80 00 A0 */	bge lbl_803D3A98
/* 803D39FC 003D093C  48 00 00 70 */	b lbl_803D3A6C
lbl_803D3A00:
/* 803D3A00 003D0940  81 83 00 00 */	lwz r12, 0(r3)
/* 803D3A04 003D0944  81 8C 00 38 */	lwz r12, 0x38(r12)
/* 803D3A08 003D0948  7D 89 03 A6 */	mtctr r12
/* 803D3A0C 003D094C  4E 80 04 21 */	bctrl 
/* 803D3A10 003D0950  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803D3A14 003D0954  41 82 00 84 */	beq lbl_803D3A98
/* 803D3A18 003D0958  7F E3 FB 78 */	mr r3, r31
/* 803D3A1C 003D095C  81 9F 00 00 */	lwz r12, 0(r31)
/* 803D3A20 003D0960  81 8C 00 34 */	lwz r12, 0x34(r12)
/* 803D3A24 003D0964  7D 89 03 A6 */	mtctr r12
/* 803D3A28 003D0968  4E 80 04 21 */	bctrl 
/* 803D3A2C 003D096C  38 00 00 02 */	li r0, 2
/* 803D3A30 003D0970  90 1F 00 08 */	stw r0, 8(r31)
/* 803D3A34 003D0974  48 00 00 64 */	b lbl_803D3A98
lbl_803D3A38:
/* 803D3A38 003D0978  81 83 00 00 */	lwz r12, 0(r3)
/* 803D3A3C 003D097C  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 803D3A40 003D0980  7D 89 03 A6 */	mtctr r12
/* 803D3A44 003D0984  4E 80 04 21 */	bctrl 
/* 803D3A48 003D0988  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803D3A4C 003D098C  41 82 00 4C */	beq lbl_803D3A98
/* 803D3A50 003D0990  7F E3 FB 78 */	mr r3, r31
/* 803D3A54 003D0994  38 80 00 00 */	li r4, 0
/* 803D3A58 003D0998  81 9F 00 00 */	lwz r12, 0(r31)
/* 803D3A5C 003D099C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 803D3A60 003D09A0  7D 89 03 A6 */	mtctr r12
/* 803D3A64 003D09A4  4E 80 04 21 */	bctrl 
/* 803D3A68 003D09A8  48 00 00 30 */	b lbl_803D3A98
lbl_803D3A6C:
/* 803D3A6C 003D09AC  81 83 00 00 */	lwz r12, 0(r3)
/* 803D3A70 003D09B0  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 803D3A74 003D09B4  7D 89 03 A6 */	mtctr r12
/* 803D3A78 003D09B8  4E 80 04 21 */	bctrl 
/* 803D3A7C 003D09BC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803D3A80 003D09C0  41 82 00 18 */	beq lbl_803D3A98
/* 803D3A84 003D09C4  7F E3 FB 78 */	mr r3, r31
/* 803D3A88 003D09C8  81 9F 00 00 */	lwz r12, 0(r31)
/* 803D3A8C 003D09CC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 803D3A90 003D09D0  7D 89 03 A6 */	mtctr r12
/* 803D3A94 003D09D4  4E 80 04 21 */	bctrl 
lbl_803D3A98:
/* 803D3A98 003D09D8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803D3A9C 003D09DC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803D3AA0 003D09E0  7C 08 03 A6 */	mtlr r0
/* 803D3AA4 003D09E4  38 21 00 10 */	addi r1, r1, 0x10
/* 803D3AA8 003D09E8  4E 80 00 20 */	blr 

.global doUpdateStateClose__Q33ebi6Screen11TScreenBaseFv
doUpdateStateClose__Q33ebi6Screen11TScreenBaseFv:
/* 803D3AAC 003D09EC  38 60 00 01 */	li r3, 1
/* 803D3AB0 003D09F0  4E 80 00 20 */	blr 

.global doUpdateStateWait__Q33ebi6Screen11TScreenBaseFv
doUpdateStateWait__Q33ebi6Screen11TScreenBaseFv:
/* 803D3AB4 003D09F4  38 60 00 01 */	li r3, 1
/* 803D3AB8 003D09F8  4E 80 00 20 */	blr 

.global doInitWaitState__Q33ebi6Screen11TScreenBaseFv
doInitWaitState__Q33ebi6Screen11TScreenBaseFv:
/* 803D3ABC 003D09FC  4E 80 00 20 */	blr 

.global doUpdateStateOpen__Q33ebi6Screen11TScreenBaseFv
doUpdateStateOpen__Q33ebi6Screen11TScreenBaseFv:
/* 803D3AC0 003D0A00  38 60 00 01 */	li r3, 1
/* 803D3AC4 003D0A04  4E 80 00 20 */	blr 

.global draw__Q33ebi6Screen11TScreenBaseFv
draw__Q33ebi6Screen11TScreenBaseFv:
/* 803D3AC8 003D0A08  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803D3ACC 003D0A0C  7C 08 02 A6 */	mflr r0
/* 803D3AD0 003D0A10  90 01 00 14 */	stw r0, 0x14(r1)
/* 803D3AD4 003D0A14  80 03 00 08 */	lwz r0, 8(r3)
/* 803D3AD8 003D0A18  2C 00 00 00 */	cmpwi r0, 0
/* 803D3ADC 003D0A1C  41 82 00 14 */	beq lbl_803D3AF0
/* 803D3AE0 003D0A20  81 83 00 00 */	lwz r12, 0(r3)
/* 803D3AE4 003D0A24  81 8C 00 44 */	lwz r12, 0x44(r12)
/* 803D3AE8 003D0A28  7D 89 03 A6 */	mtctr r12
/* 803D3AEC 003D0A2C  4E 80 04 21 */	bctrl 
lbl_803D3AF0:
/* 803D3AF0 003D0A30  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803D3AF4 003D0A34  7C 08 03 A6 */	mtlr r0
/* 803D3AF8 003D0A38  38 21 00 10 */	addi r1, r1, 0x10
/* 803D3AFC 003D0A3C  4E 80 00 20 */	blr 

.global doDraw__Q33ebi6Screen11TScreenBaseFv
doDraw__Q33ebi6Screen11TScreenBaseFv:
/* 803D3B00 003D0A40  4E 80 00 20 */	blr 

.global getName__Q33ebi6Screen11TScreenBaseFv
getName__Q33ebi6Screen11TScreenBaseFv:
/* 803D3B04 003D0A44  3C 60 80 49 */	lis r3, lbl_804968F8@ha
/* 803D3B08 003D0A48  38 63 68 F8 */	addi r3, r3, lbl_804968F8@l
/* 803D3B0C 003D0A4C  4E 80 00 20 */	blr 
