.include "macros.inc"
.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.obj __vt__Q28JMessage19TRenderingProcessor, global
	.4byte 0
	.4byte 0
	.4byte __dt__Q28JMessage19TRenderingProcessorFv
	.4byte do_reset__Q28JMessage10TProcessorFv
	.4byte do_character__Q28JMessage10TProcessorFi
	.4byte do_tag__Q28JMessage10TProcessorFUlPCvUl
	.4byte do_systemTagCode__Q28JMessage10TProcessorFUsPCvUl
	.4byte do_select_begin__Q28JMessage10TProcessorFUl
	.4byte do_select_end__Q28JMessage10TProcessorFv
	.4byte do_select_separate__Q28JMessage10TProcessorFv
	.4byte do_reset___Q28JMessage19TRenderingProcessorFPCc
	.4byte do_setBegin_isReady___Q28JMessage10TProcessorCFv
	.4byte do_begin___Q28JMessage19TRenderingProcessorFPCvPCc
	.4byte do_end___Q28JMessage19TRenderingProcessorFv
	.4byte do_tag___Q28JMessage19TRenderingProcessorFUlPCvUl
	.4byte do_systemTagCode___Q28JMessage19TRenderingProcessorFUsPCvUl
	.4byte do_begin__Q28JMessage19TRenderingProcessorFPCvPCc
	.4byte do_end__Q28JMessage19TRenderingProcessorFv
.endobj __vt__Q28JMessage19TRenderingProcessor
.obj __vt__Q28JMessage18TSequenceProcessor, global
	.4byte 0
	.4byte 0
	.4byte __dt__Q28JMessage18TSequenceProcessorFv
	.4byte do_reset__Q28JMessage10TProcessorFv
	.4byte do_character__Q28JMessage10TProcessorFi
	.4byte do_tag__Q28JMessage10TProcessorFUlPCvUl
	.4byte do_systemTagCode__Q28JMessage10TProcessorFUsPCvUl
	.4byte do_select_begin__Q28JMessage10TProcessorFUl
	.4byte do_select_end__Q28JMessage10TProcessorFv
	.4byte do_select_separate__Q28JMessage10TProcessorFv
	.4byte do_reset___Q28JMessage18TSequenceProcessorFPCc
	.4byte do_setBegin_isReady___Q28JMessage18TSequenceProcessorCFv
	.4byte do_begin___Q28JMessage18TSequenceProcessorFPCvPCc
	.4byte do_end___Q28JMessage18TSequenceProcessorFv
	.4byte do_tag___Q28JMessage18TSequenceProcessorFUlPCvUl
	.4byte do_systemTagCode___Q28JMessage18TSequenceProcessorFUsPCvUl
	.4byte do_begin__Q28JMessage18TSequenceProcessorFPCvPCc
	.4byte do_end__Q28JMessage18TSequenceProcessorFv
	.4byte do_isReady__Q28JMessage18TSequenceProcessorFv
	.4byte do_jump_isReady__Q28JMessage18TSequenceProcessorFv
	.4byte do_jump__Q28JMessage18TSequenceProcessorFPCvPCc
	.4byte do_branch_query__Q28JMessage18TSequenceProcessorFUs
	.4byte do_branch_queryResult__Q28JMessage18TSequenceProcessorFv
	.4byte do_branch__Q28JMessage18TSequenceProcessorFPCvPCc
.endobj __vt__Q28JMessage18TSequenceProcessor
.obj __vt__Q28JMessage10TProcessor, global
	.4byte 0
	.4byte 0
	.4byte __dt__Q28JMessage10TProcessorFv
	.4byte do_reset__Q28JMessage10TProcessorFv
	.4byte do_character__Q28JMessage10TProcessorFi
	.4byte do_tag__Q28JMessage10TProcessorFUlPCvUl
	.4byte do_systemTagCode__Q28JMessage10TProcessorFUsPCvUl
	.4byte do_select_begin__Q28JMessage10TProcessorFUl
	.4byte do_select_end__Q28JMessage10TProcessorFv
	.4byte do_select_separate__Q28JMessage10TProcessorFv
	.4byte 0
	.4byte do_setBegin_isReady___Q28JMessage10TProcessorCFv
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte 0
.endobj __vt__Q28JMessage10TProcessor
.obj __vt__Q28JMessage10TReference, global
	.4byte 0
	.4byte 0
	.4byte __dt__Q28JMessage10TReferenceFv
	.4byte do_word__Q28JMessage10TReferenceCFUl
.endobj __vt__Q28JMessage10TReference

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.fn __dt__Q28JMessage10TReferenceFv, global
/* 80006D0C 00003C4C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80006D10 00003C50  7C 08 02 A6 */	mflr r0
/* 80006D14 00003C54  90 01 00 14 */	stw r0, 0x14(r1)
/* 80006D18 00003C58  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80006D1C 00003C5C  7C 7F 1B 79 */	or. r31, r3, r3
/* 80006D20 00003C60  41 82 00 1C */	beq .L_80006D3C
/* 80006D24 00003C64  3C A0 80 4A */	lis r5, __vt__Q28JMessage10TReference@ha
/* 80006D28 00003C68  7C 80 07 35 */	extsh. r0, r4
/* 80006D2C 00003C6C  38 05 E4 48 */	addi r0, r5, __vt__Q28JMessage10TReference@l
/* 80006D30 00003C70  90 1F 00 00 */	stw r0, 0(r31)
/* 80006D34 00003C74  40 81 00 08 */	ble .L_80006D3C
/* 80006D38 00003C78  48 01 D3 7D */	bl __dl__FPv
.L_80006D3C:
/* 80006D3C 00003C7C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80006D40 00003C80  7F E3 FB 78 */	mr r3, r31
/* 80006D44 00003C84  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80006D48 00003C88  7C 08 03 A6 */	mtlr r0
/* 80006D4C 00003C8C  38 21 00 10 */	addi r1, r1, 0x10
/* 80006D50 00003C90  4E 80 00 20 */	blr 
.endfn __dt__Q28JMessage10TReferenceFv

.fn do_word__Q28JMessage10TReferenceCFUl, global
/* 80006D54 00003C94  38 60 00 00 */	li r3, 0
/* 80006D58 00003C98  4E 80 00 20 */	blr 
.endfn do_word__Q28JMessage10TReferenceCFUl

.fn __dt__Q28JMessage10TProcessorFv, global
/* 80006D5C 00003C9C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80006D60 00003CA0  7C 08 02 A6 */	mflr r0
/* 80006D64 00003CA4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80006D68 00003CA8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80006D6C 00003CAC  7C 7F 1B 79 */	or. r31, r3, r3
/* 80006D70 00003CB0  41 82 00 1C */	beq .L_80006D8C
/* 80006D74 00003CB4  3C A0 80 4A */	lis r5, __vt__Q28JMessage10TProcessor@ha
/* 80006D78 00003CB8  7C 80 07 35 */	extsh. r0, r4
/* 80006D7C 00003CBC  38 05 E4 08 */	addi r0, r5, __vt__Q28JMessage10TProcessor@l
/* 80006D80 00003CC0  90 1F 00 00 */	stw r0, 0(r31)
/* 80006D84 00003CC4  40 81 00 08 */	ble .L_80006D8C
/* 80006D88 00003CC8  48 01 D3 2D */	bl __dl__FPv
.L_80006D8C:
/* 80006D8C 00003CCC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80006D90 00003CD0  7F E3 FB 78 */	mr r3, r31
/* 80006D94 00003CD4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80006D98 00003CD8  7C 08 03 A6 */	mtlr r0
/* 80006D9C 00003CDC  38 21 00 10 */	addi r1, r1, 0x10
/* 80006DA0 00003CE0  4E 80 00 20 */	blr 
.endfn __dt__Q28JMessage10TProcessorFv

.fn setBegin_messageCode__Q28JMessage10TProcessorFUsUs, global
/* 80006DA4 00003CE4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80006DA8 00003CE8  7C 08 02 A6 */	mflr r0
/* 80006DAC 00003CEC  90 01 00 24 */	stw r0, 0x24(r1)
/* 80006DB0 00003CF0  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80006DB4 00003CF4  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80006DB8 00003CF8  7C BE 2B 78 */	mr r30, r5
/* 80006DBC 00003CFC  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80006DC0 00003D00  7C 7D 1B 78 */	mr r29, r3
/* 80006DC4 00003D04  48 00 01 A1 */	bl getResource_groupID__Q28JMessage10TProcessorCFUs
/* 80006DC8 00003D08  28 03 00 00 */	cmplwi r3, 0
/* 80006DCC 00003D0C  40 82 00 0C */	bne .L_80006DD8
/* 80006DD0 00003D10  3B E0 00 00 */	li r31, 0
/* 80006DD4 00003D14  48 00 00 30 */	b .L_80006E04
.L_80006DD8:
/* 80006DD8 00003D18  80 63 00 0C */	lwz r3, 0xc(r3)
/* 80006DDC 00003D1C  57 C4 04 3E */	clrlwi r4, r30, 0x10
/* 80006DE0 00003D20  A0 03 00 08 */	lhz r0, 8(r3)
/* 80006DE4 00003D24  7C 04 00 40 */	cmplw r4, r0
/* 80006DE8 00003D28  40 80 00 18 */	bge .L_80006E00
/* 80006DEC 00003D2C  A0 03 00 0A */	lhz r0, 0xa(r3)
/* 80006DF0 00003D30  7C 04 01 D6 */	mullw r0, r4, r0
/* 80006DF4 00003D34  7F E3 02 14 */	add r31, r3, r0
/* 80006DF8 00003D38  3B FF 00 10 */	addi r31, r31, 0x10
/* 80006DFC 00003D3C  48 00 00 08 */	b .L_80006E04
.L_80006E00:
/* 80006E00 00003D40  3B E0 00 00 */	li r31, 0
.L_80006E04:
/* 80006E04 00003D44  28 1F 00 00 */	cmplwi r31, 0
/* 80006E08 00003D48  41 82 00 3C */	beq .L_80006E44
/* 80006E0C 00003D4C  80 BD 00 08 */	lwz r5, 8(r29)
/* 80006E10 00003D50  7F A3 EB 78 */	mr r3, r29
/* 80006E14 00003D54  80 1F 00 00 */	lwz r0, 0(r31)
/* 80006E18 00003D58  80 85 00 10 */	lwz r4, 0x10(r5)
/* 80006E1C 00003D5C  7F C4 02 14 */	add r30, r4, r0
/* 80006E20 00003D60  7F C4 F3 78 */	mr r4, r30
/* 80006E24 00003D64  48 00 03 35 */	bl reset___Q28JMessage10TProcessorFPCc
/* 80006E28 00003D68  7F A3 EB 78 */	mr r3, r29
/* 80006E2C 00003D6C  7F E4 FB 78 */	mr r4, r31
/* 80006E30 00003D70  81 9D 00 00 */	lwz r12, 0(r29)
/* 80006E34 00003D74  7F C5 F3 78 */	mr r5, r30
/* 80006E38 00003D78  81 8C 00 30 */	lwz r12, 0x30(r12)
/* 80006E3C 00003D7C  7D 89 03 A6 */	mtctr r12
/* 80006E40 00003D80  4E 80 04 21 */	bctrl 
.L_80006E44:
/* 80006E44 00003D84  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80006E48 00003D88  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80006E4C 00003D8C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80006E50 00003D90  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80006E54 00003D94  7C 08 03 A6 */	mtlr r0
/* 80006E58 00003D98  38 21 00 20 */	addi r1, r1, 0x20
/* 80006E5C 00003D9C  4E 80 00 20 */	blr 
.endfn setBegin_messageCode__Q28JMessage10TProcessorFUsUs

.fn setBegin_messageID__Q28JMessage10TProcessorFUlUlPb, global
/* 80006E60 00003DA0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80006E64 00003DA4  7C 08 02 A6 */	mflr r0
/* 80006E68 00003DA8  90 01 00 14 */	stw r0, 0x14(r1)
/* 80006E6C 00003DAC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80006E70 00003DB0  7C 7F 1B 78 */	mr r31, r3
/* 80006E74 00003DB4  48 00 01 71 */	bl toMessageCode_messageID__Q28JMessage10TProcessorCFUlUlPb
/* 80006E78 00003DB8  7C 64 1B 78 */	mr r4, r3
/* 80006E7C 00003DBC  3C 04 00 01 */	addis r0, r4, 1
/* 80006E80 00003DC0  28 00 FF FF */	cmplwi r0, 0xffff
/* 80006E84 00003DC4  41 82 00 0C */	beq .L_80006E90
/* 80006E88 00003DC8  7F E3 FB 78 */	mr r3, r31
/* 80006E8C 00003DCC  48 00 00 19 */	bl setBegin_messageCode__Q28JMessage10TProcessorFUl
.L_80006E90:
/* 80006E90 00003DD0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80006E94 00003DD4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80006E98 00003DD8  7C 08 03 A6 */	mtlr r0
/* 80006E9C 00003DDC  38 21 00 10 */	addi r1, r1, 0x10
/* 80006EA0 00003DE0  4E 80 00 20 */	blr 
.endfn setBegin_messageID__Q28JMessage10TProcessorFUlUlPb

.fn setBegin_messageCode__Q28JMessage10TProcessorFUl, weak
/* 80006EA4 00003DE4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80006EA8 00003DE8  7C 08 02 A6 */	mflr r0
/* 80006EAC 00003DEC  90 01 00 24 */	stw r0, 0x24(r1)
/* 80006EB0 00003DF0  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80006EB4 00003DF4  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80006EB8 00003DF8  7C 9E 23 78 */	mr r30, r4
/* 80006EBC 00003DFC  54 84 84 3E */	srwi r4, r4, 0x10
/* 80006EC0 00003E00  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80006EC4 00003E04  7C 7D 1B 78 */	mr r29, r3
/* 80006EC8 00003E08  48 00 00 9D */	bl getResource_groupID__Q28JMessage10TProcessorCFUs
/* 80006ECC 00003E0C  28 03 00 00 */	cmplwi r3, 0
/* 80006ED0 00003E10  40 82 00 0C */	bne .L_80006EDC
/* 80006ED4 00003E14  3B C0 00 00 */	li r30, 0
/* 80006ED8 00003E18  48 00 00 30 */	b .L_80006F08
.L_80006EDC:
/* 80006EDC 00003E1C  80 83 00 0C */	lwz r4, 0xc(r3)
/* 80006EE0 00003E20  57 C3 04 3E */	clrlwi r3, r30, 0x10
/* 80006EE4 00003E24  A0 04 00 08 */	lhz r0, 8(r4)
/* 80006EE8 00003E28  7C 03 00 40 */	cmplw r3, r0
/* 80006EEC 00003E2C  40 80 00 18 */	bge .L_80006F04
/* 80006EF0 00003E30  A0 04 00 0A */	lhz r0, 0xa(r4)
/* 80006EF4 00003E34  7C 03 01 D6 */	mullw r0, r3, r0
/* 80006EF8 00003E38  7F C4 02 14 */	add r30, r4, r0
/* 80006EFC 00003E3C  3B DE 00 10 */	addi r30, r30, 0x10
/* 80006F00 00003E40  48 00 00 08 */	b .L_80006F08
.L_80006F04:
/* 80006F04 00003E44  3B C0 00 00 */	li r30, 0
.L_80006F08:
/* 80006F08 00003E48  28 1E 00 00 */	cmplwi r30, 0
/* 80006F0C 00003E4C  41 82 00 3C */	beq .L_80006F48
/* 80006F10 00003E50  80 BD 00 08 */	lwz r5, 8(r29)
/* 80006F14 00003E54  7F A3 EB 78 */	mr r3, r29
/* 80006F18 00003E58  80 1E 00 00 */	lwz r0, 0(r30)
/* 80006F1C 00003E5C  80 85 00 10 */	lwz r4, 0x10(r5)
/* 80006F20 00003E60  7F E4 02 14 */	add r31, r4, r0
/* 80006F24 00003E64  7F E4 FB 78 */	mr r4, r31
/* 80006F28 00003E68  48 00 02 31 */	bl reset___Q28JMessage10TProcessorFPCc
/* 80006F2C 00003E6C  7F A3 EB 78 */	mr r3, r29
/* 80006F30 00003E70  7F C4 F3 78 */	mr r4, r30
/* 80006F34 00003E74  81 9D 00 00 */	lwz r12, 0(r29)
/* 80006F38 00003E78  7F E5 FB 78 */	mr r5, r31
/* 80006F3C 00003E7C  81 8C 00 30 */	lwz r12, 0x30(r12)
/* 80006F40 00003E80  7D 89 03 A6 */	mtctr r12
/* 80006F44 00003E84  4E 80 04 21 */	bctrl 
.L_80006F48:
/* 80006F48 00003E88  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80006F4C 00003E8C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80006F50 00003E90  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80006F54 00003E94  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80006F58 00003E98  7C 08 03 A6 */	mtlr r0
/* 80006F5C 00003E9C  38 21 00 20 */	addi r1, r1, 0x20
/* 80006F60 00003EA0  4E 80 00 20 */	blr 
.endfn setBegin_messageCode__Q28JMessage10TProcessorFUl

.fn getResource_groupID__Q28JMessage10TProcessorCFUs, global
/* 80006F64 00003EA4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80006F68 00003EA8  7C 08 02 A6 */	mflr r0
/* 80006F6C 00003EAC  38 E0 00 00 */	li r7, 0
/* 80006F70 00003EB0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80006F74 00003EB4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80006F78 00003EB8  7C 7F 1B 78 */	mr r31, r3
/* 80006F7C 00003EBC  80 63 00 08 */	lwz r3, 8(r3)
/* 80006F80 00003EC0  28 03 00 00 */	cmplwi r3, 0
/* 80006F84 00003EC4  41 82 00 1C */	beq .L_80006FA0
/* 80006F88 00003EC8  80 A3 00 0C */	lwz r5, 0xc(r3)
/* 80006F8C 00003ECC  54 86 04 3E */	clrlwi r6, r4, 0x10
/* 80006F90 00003ED0  A0 05 00 0C */	lhz r0, 0xc(r5)
/* 80006F94 00003ED4  7C 06 00 40 */	cmplw r6, r0
/* 80006F98 00003ED8  40 82 00 08 */	bne .L_80006FA0
/* 80006F9C 00003EDC  38 E0 00 01 */	li r7, 1
.L_80006FA0:
/* 80006FA0 00003EE0  54 E0 06 3F */	clrlwi. r0, r7, 0x18
/* 80006FA4 00003EE4  41 82 00 08 */	beq .L_80006FAC
/* 80006FA8 00003EE8  48 00 00 28 */	b .L_80006FD0
.L_80006FAC:
/* 80006FAC 00003EEC  80 7F 00 04 */	lwz r3, 4(r31)
/* 80006FB0 00003EF0  80 63 00 04 */	lwz r3, 4(r3)
/* 80006FB4 00003EF4  28 03 00 00 */	cmplwi r3, 0
/* 80006FB8 00003EF8  40 82 00 0C */	bne .L_80006FC4
/* 80006FBC 00003EFC  38 60 00 00 */	li r3, 0
/* 80006FC0 00003F00  48 00 00 0C */	b .L_80006FCC
.L_80006FC4:
/* 80006FC4 00003F04  38 63 00 08 */	addi r3, r3, 8
/* 80006FC8 00003F08  4B FF F6 55 */	bl Get_groupID__Q38JMessage18TResourceContainer10TCResourceFUs
.L_80006FCC:
/* 80006FCC 00003F0C  90 7F 00 08 */	stw r3, 8(r31)
.L_80006FD0:
/* 80006FD0 00003F10  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80006FD4 00003F14  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80006FD8 00003F18  7C 08 03 A6 */	mtlr r0
/* 80006FDC 00003F1C  38 21 00 10 */	addi r1, r1, 0x10
/* 80006FE0 00003F20  4E 80 00 20 */	blr 
.endfn getResource_groupID__Q28JMessage10TProcessorCFUs

.fn toMessageCode_messageID__Q28JMessage10TProcessorCFUlUlPb, global
/* 80006FE4 00003F24  94 21 FF 90 */	stwu r1, -0x70(r1)
/* 80006FE8 00003F28  7C 08 02 A6 */	mflr r0
/* 80006FEC 00003F2C  90 01 00 74 */	stw r0, 0x74(r1)
/* 80006FF0 00003F30  BF 41 00 58 */	stmw r26, 0x58(r1)
/* 80006FF4 00003F34  7C 7F 1B 78 */	mr r31, r3
/* 80006FF8 00003F38  83 A3 00 08 */	lwz r29, 8(r3)
/* 80006FFC 00003F3C  7C 9A 23 78 */	mr r26, r4
/* 80007000 00003F40  7C BB 2B 78 */	mr r27, r5
/* 80007004 00003F44  7C DC 33 78 */	mr r28, r6
/* 80007008 00003F48  28 1D 00 00 */	cmplwi r29, 0
/* 8000700C 00003F4C  41 82 00 30 */	beq .L_8000703C
/* 80007010 00003F50  7F A3 EB 78 */	mr r3, r29
/* 80007014 00003F54  4B FF F3 B1 */	bl toMessageIndex_messageID__Q28JMessage9TResourceCFUlUlPb
/* 80007018 00003F58  7C 64 1B 78 */	mr r4, r3
/* 8000701C 00003F5C  54 60 04 3E */	clrlwi r0, r3, 0x10
/* 80007020 00003F60  28 00 FF FF */	cmplwi r0, 0xffff
/* 80007024 00003F64  41 82 00 18 */	beq .L_8000703C
/* 80007028 00003F68  80 7D 00 0C */	lwz r3, 0xc(r29)
/* 8000702C 00003F6C  A0 03 00 0C */	lhz r0, 0xc(r3)
/* 80007030 00003F70  54 03 80 1E */	slwi r3, r0, 0x10
/* 80007034 00003F74  50 83 04 3E */	rlwimi r3, r4, 0, 0x10, 0x1f
/* 80007038 00003F78  48 00 00 E8 */	b .L_80007120
.L_8000703C:
/* 8000703C 00003F7C  80 7F 00 04 */	lwz r3, 4(r31)
/* 80007040 00003F80  28 03 00 00 */	cmplwi r3, 0
/* 80007044 00003F84  40 82 00 0C */	bne .L_80007050
/* 80007048 00003F88  38 60 00 00 */	li r3, 0
/* 8000704C 00003F8C  48 00 00 08 */	b .L_80007054
.L_80007050:
/* 80007050 00003F90  80 63 00 04 */	lwz r3, 4(r3)
.L_80007054:
/* 80007054 00003F94  28 03 00 00 */	cmplwi r3, 0
/* 80007058 00003F98  40 82 00 0C */	bne .L_80007064
/* 8000705C 00003F9C  38 60 FF FF */	li r3, -1
/* 80007060 00003FA0  48 00 00 C0 */	b .L_80007120
.L_80007064:
/* 80007064 00003FA4  84 03 00 0C */	lwzu r0, 0xc(r3)
/* 80007068 00003FA8  90 61 00 24 */	stw r3, 0x24(r1)
/* 8000706C 00003FAC  90 61 00 20 */	stw r3, 0x20(r1)
/* 80007070 00003FB0  90 61 00 3C */	stw r3, 0x3c(r1)
/* 80007074 00003FB4  90 61 00 38 */	stw r3, 0x38(r1)
/* 80007078 00003FB8  90 61 00 1C */	stw r3, 0x1c(r1)
/* 8000707C 00003FBC  90 61 00 4C */	stw r3, 0x4c(r1)
/* 80007080 00003FC0  90 61 00 48 */	stw r3, 0x48(r1)
/* 80007084 00003FC4  90 01 00 18 */	stw r0, 0x18(r1)
/* 80007088 00003FC8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8000708C 00003FCC  90 01 00 34 */	stw r0, 0x34(r1)
/* 80007090 00003FD0  90 01 00 30 */	stw r0, 0x30(r1)
/* 80007094 00003FD4  90 01 00 10 */	stw r0, 0x10(r1)
/* 80007098 00003FD8  90 01 00 44 */	stw r0, 0x44(r1)
/* 8000709C 00003FDC  90 01 00 40 */	stw r0, 0x40(r1)
/* 800070A0 00003FE0  90 01 00 50 */	stw r0, 0x50(r1)
/* 800070A4 00003FE4  90 61 00 54 */	stw r3, 0x54(r1)
/* 800070A8 00003FE8  48 00 00 54 */	b .L_800070FC
.L_800070AC:
/* 800070AC 00003FEC  83 C1 00 50 */	lwz r30, 0x50(r1)
/* 800070B0 00003FF0  80 1E 00 00 */	lwz r0, 0(r30)
/* 800070B4 00003FF4  7C 1E E8 40 */	cmplw r30, r29
/* 800070B8 00003FF8  90 01 00 50 */	stw r0, 0x50(r1)
/* 800070BC 00003FFC  41 82 00 40 */	beq .L_800070FC
/* 800070C0 00004000  7F C3 F3 78 */	mr r3, r30
/* 800070C4 00004004  7F 44 D3 78 */	mr r4, r26
/* 800070C8 00004008  7F 65 DB 78 */	mr r5, r27
/* 800070CC 0000400C  7F 86 E3 78 */	mr r6, r28
/* 800070D0 00004010  4B FF F2 F5 */	bl toMessageIndex_messageID__Q28JMessage9TResourceCFUlUlPb
/* 800070D4 00004014  7C 64 1B 78 */	mr r4, r3
/* 800070D8 00004018  54 60 04 3E */	clrlwi r0, r3, 0x10
/* 800070DC 0000401C  28 00 FF FF */	cmplwi r0, 0xffff
/* 800070E0 00004020  41 82 00 1C */	beq .L_800070FC
/* 800070E4 00004024  80 7E 00 0C */	lwz r3, 0xc(r30)
/* 800070E8 00004028  93 DF 00 08 */	stw r30, 8(r31)
/* 800070EC 0000402C  A0 03 00 0C */	lhz r0, 0xc(r3)
/* 800070F0 00004030  54 03 80 1E */	slwi r3, r0, 0x10
/* 800070F4 00004034  50 83 04 3E */	rlwimi r3, r4, 0, 0x10, 0x1f
/* 800070F8 00004038  48 00 00 28 */	b .L_80007120
.L_800070FC:
/* 800070FC 0000403C  80 61 00 54 */	lwz r3, 0x54(r1)
/* 80007100 00004040  80 01 00 50 */	lwz r0, 0x50(r1)
/* 80007104 00004044  90 61 00 2C */	stw r3, 0x2c(r1)
/* 80007108 00004048  7C 00 18 40 */	cmplw r0, r3
/* 8000710C 0000404C  90 01 00 28 */	stw r0, 0x28(r1)
/* 80007110 00004050  90 61 00 0C */	stw r3, 0xc(r1)
/* 80007114 00004054  90 01 00 08 */	stw r0, 8(r1)
/* 80007118 00004058  40 82 FF 94 */	bne .L_800070AC
/* 8000711C 0000405C  38 60 FF FF */	li r3, -1
.L_80007120:
/* 80007120 00004060  BB 41 00 58 */	lmw r26, 0x58(r1)
/* 80007124 00004064  80 01 00 74 */	lwz r0, 0x74(r1)
/* 80007128 00004068  7C 08 03 A6 */	mtlr r0
/* 8000712C 0000406C  38 21 00 70 */	addi r1, r1, 0x70
/* 80007130 00004070  4E 80 00 20 */	blr 
.endfn toMessageCode_messageID__Q28JMessage10TProcessorCFUlUlPb

.fn do_reset__Q28JMessage10TProcessorFv, global
/* 80007134 00004074  4E 80 00 20 */	blr 
.endfn do_reset__Q28JMessage10TProcessorFv

.fn do_character__Q28JMessage10TProcessorFi, global
/* 80007138 00004078  4E 80 00 20 */	blr 
.endfn do_character__Q28JMessage10TProcessorFi

.fn do_tag__Q28JMessage10TProcessorFUlPCvUl, global
/* 8000713C 0000407C  38 60 00 00 */	li r3, 0
/* 80007140 00004080  4E 80 00 20 */	blr 
.endfn do_tag__Q28JMessage10TProcessorFUlPCvUl

.fn do_systemTagCode__Q28JMessage10TProcessorFUsPCvUl, global
/* 80007144 00004084  38 60 00 00 */	li r3, 0
/* 80007148 00004088  4E 80 00 20 */	blr 
.endfn do_systemTagCode__Q28JMessage10TProcessorFUsPCvUl

.fn do_select_begin__Q28JMessage10TProcessorFUl, global
/* 8000714C 0000408C  4E 80 00 20 */	blr 
.endfn do_select_begin__Q28JMessage10TProcessorFUl

.fn do_select_end__Q28JMessage10TProcessorFv, global
/* 80007150 00004090  4E 80 00 20 */	blr 
.endfn do_select_end__Q28JMessage10TProcessorFv

.fn do_select_separate__Q28JMessage10TProcessorFv, global
/* 80007154 00004094  4E 80 00 20 */	blr 
.endfn do_select_separate__Q28JMessage10TProcessorFv

.fn reset___Q28JMessage10TProcessorFPCc, global
/* 80007158 00004098  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8000715C 0000409C  7C 08 02 A6 */	mflr r0
/* 80007160 000040A0  38 C0 00 00 */	li r6, 0
/* 80007164 000040A4  3C A0 80 00 */	lis r5, process_onCharacterEnd_normal___Q28JMessage10TProcessorFPQ28JMessage10TProcessor@ha
/* 80007168 000040A8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8000716C 000040AC  38 05 76 50 */	addi r0, r5, process_onCharacterEnd_normal___Q28JMessage10TProcessorFPQ28JMessage10TProcessor@l
/* 80007170 000040B0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80007174 000040B4  7C 7F 1B 78 */	mr r31, r3
/* 80007178 000040B8  90 83 00 0C */	stw r4, 0xc(r3)
/* 8000717C 000040BC  90 C3 00 10 */	stw r6, 0x10(r3)
/* 80007180 000040C0  90 03 00 24 */	stw r0, 0x24(r3)
/* 80007184 000040C4  81 83 00 00 */	lwz r12, 0(r3)
/* 80007188 000040C8  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 8000718C 000040CC  7D 89 03 A6 */	mtctr r12
/* 80007190 000040D0  4E 80 04 21 */	bctrl 
/* 80007194 000040D4  7F E3 FB 78 */	mr r3, r31
/* 80007198 000040D8  81 9F 00 00 */	lwz r12, 0(r31)
/* 8000719C 000040DC  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 800071A0 000040E0  7D 89 03 A6 */	mtctr r12
/* 800071A4 000040E4  4E 80 04 21 */	bctrl 
/* 800071A8 000040E8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800071AC 000040EC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 800071B0 000040F0  7C 08 03 A6 */	mtlr r0
/* 800071B4 000040F4  38 21 00 10 */	addi r1, r1, 0x10
/* 800071B8 000040F8  4E 80 00 20 */	blr 
.endfn reset___Q28JMessage10TProcessorFPCc

.fn do_setBegin_isReady___Q28JMessage10TProcessorCFv, global
/* 800071BC 000040FC  38 60 00 01 */	li r3, 1
/* 800071C0 00004100  4E 80 00 20 */	blr 
.endfn do_setBegin_isReady___Q28JMessage10TProcessorCFv

.fn do_tag___Q28JMessage10TProcessorFUlPCvUl, global
/* 800071C4 00004104  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 800071C8 00004108  7C 08 02 A6 */	mflr r0
/* 800071CC 0000410C  90 01 00 24 */	stw r0, 0x24(r1)
/* 800071D0 00004110  54 80 86 3E */	rlwinm r0, r4, 0x10, 0x18, 0x1f
/* 800071D4 00004114  2C 00 00 FD */	cmpwi r0, 0xfd
/* 800071D8 00004118  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 800071DC 0000411C  7C BF 2B 78 */	mr r31, r5
/* 800071E0 00004120  93 C1 00 18 */	stw r30, 0x18(r1)
/* 800071E4 00004124  7C 7E 1B 78 */	mr r30, r3
/* 800071E8 00004128  93 A1 00 14 */	stw r29, 0x14(r1)
/* 800071EC 0000412C  54 9D 04 3E */	clrlwi r29, r4, 0x10
/* 800071F0 00004130  93 81 00 10 */	stw r28, 0x10(r1)
/* 800071F4 00004134  7C DC 33 78 */	mr r28, r6
/* 800071F8 00004138  41 82 00 C0 */	beq .L_800072B8
/* 800071FC 0000413C  40 80 00 1C */	bge .L_80007218
/* 80007200 00004140  2C 00 00 F6 */	cmpwi r0, 0xf6
/* 80007204 00004144  41 82 00 F4 */	beq .L_800072F8
/* 80007208 00004148  40 80 01 FC */	bge .L_80007404
/* 8000720C 0000414C  2C 00 00 F5 */	cmpwi r0, 0xf5
/* 80007210 00004150  40 80 01 70 */	bge .L_80007380
/* 80007214 00004154  48 00 01 F0 */	b .L_80007404
.L_80007218:
/* 80007218 00004158  2C 00 00 FF */	cmpwi r0, 0xff
/* 8000721C 0000415C  41 82 00 0C */	beq .L_80007228
/* 80007220 00004160  40 80 01 E4 */	bge .L_80007404
/* 80007224 00004164  48 00 00 44 */	b .L_80007268
.L_80007228:
/* 80007228 00004168  81 83 00 00 */	lwz r12, 0(r3)
/* 8000722C 0000416C  7F A4 EB 78 */	mr r4, r29
/* 80007230 00004170  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80007234 00004174  7D 89 03 A6 */	mtctr r12
/* 80007238 00004178  4E 80 04 21 */	bctrl 
/* 8000723C 0000417C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80007240 00004180  40 82 01 C4 */	bne .L_80007404
/* 80007244 00004184  7F C3 F3 78 */	mr r3, r30
/* 80007248 00004188  7F A4 EB 78 */	mr r4, r29
/* 8000724C 0000418C  81 9E 00 00 */	lwz r12, 0(r30)
/* 80007250 00004190  7F E5 FB 78 */	mr r5, r31
/* 80007254 00004194  7F 86 E3 78 */	mr r6, r28
/* 80007258 00004198  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8000725C 0000419C  7D 89 03 A6 */	mtctr r12
/* 80007260 000041A0  4E 80 04 21 */	bctrl 
/* 80007264 000041A4  48 00 01 A0 */	b .L_80007404
.L_80007268:
/* 80007268 000041A8  80 7E 00 04 */	lwz r3, 4(r30)
/* 8000726C 000041AC  7F A4 EB 78 */	mr r4, r29
/* 80007270 000041B0  81 83 00 00 */	lwz r12, 0(r3)
/* 80007274 000041B4  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 80007278 000041B8  7D 89 03 A6 */	mtctr r12
/* 8000727C 000041BC  4E 80 04 21 */	bctrl 
/* 80007280 000041C0  28 03 00 00 */	cmplwi r3, 0
/* 80007284 000041C4  41 82 01 80 */	beq .L_80007404
/* 80007288 000041C8  80 1E 00 10 */	lwz r0, 0x10(r30)
/* 8000728C 000041CC  28 00 00 04 */	cmplwi r0, 4
/* 80007290 000041D0  40 80 01 74 */	bge .L_80007404
/* 80007294 000041D4  54 00 10 3A */	slwi r0, r0, 2
/* 80007298 000041D8  80 BE 00 0C */	lwz r5, 0xc(r30)
/* 8000729C 000041DC  7C 9E 02 14 */	add r4, r30, r0
/* 800072A0 000041E0  90 A4 00 14 */	stw r5, 0x14(r4)
/* 800072A4 000041E4  80 9E 00 10 */	lwz r4, 0x10(r30)
/* 800072A8 000041E8  38 04 00 01 */	addi r0, r4, 1
/* 800072AC 000041EC  90 1E 00 10 */	stw r0, 0x10(r30)
/* 800072B0 000041F0  90 7E 00 0C */	stw r3, 0xc(r30)
/* 800072B4 000041F4  48 00 01 50 */	b .L_80007404
.L_800072B8:
/* 800072B8 000041F8  7F A4 EB 78 */	mr r4, r29
/* 800072BC 000041FC  48 00 01 69 */	bl on_message_limited__Q28JMessage10TProcessorCFUs
/* 800072C0 00004200  28 03 00 00 */	cmplwi r3, 0
/* 800072C4 00004204  41 82 01 40 */	beq .L_80007404
/* 800072C8 00004208  80 1E 00 10 */	lwz r0, 0x10(r30)
/* 800072CC 0000420C  28 00 00 04 */	cmplwi r0, 4
/* 800072D0 00004210  40 80 01 34 */	bge .L_80007404
/* 800072D4 00004214  54 00 10 3A */	slwi r0, r0, 2
/* 800072D8 00004218  80 BE 00 0C */	lwz r5, 0xc(r30)
/* 800072DC 0000421C  7C 9E 02 14 */	add r4, r30, r0
/* 800072E0 00004220  90 A4 00 14 */	stw r5, 0x14(r4)
/* 800072E4 00004224  80 9E 00 10 */	lwz r4, 0x10(r30)
/* 800072E8 00004228  38 04 00 01 */	addi r0, r4, 1
/* 800072EC 0000422C  90 1E 00 10 */	stw r0, 0x10(r30)
/* 800072F0 00004230  90 7E 00 0C */	stw r3, 0xc(r30)
/* 800072F4 00004234  48 00 01 10 */	b .L_80007404
.L_800072F8:
/* 800072F8 00004238  80 1E 00 10 */	lwz r0, 0x10(r30)
/* 800072FC 0000423C  28 00 00 04 */	cmplwi r0, 4
/* 80007300 00004240  40 80 01 04 */	bge .L_80007404
/* 80007304 00004244  3C A0 80 00 */	lis r5, process_onCharacterEnd_select___Q28JMessage10TProcessorFPQ28JMessage10TProcessor@ha
/* 80007308 00004248  3C 80 80 00 */	lis r4, process_onSelect_limited___Q28JMessage10TProcessorFPQ28JMessage10TProcessor@ha
/* 8000730C 0000424C  38 A5 76 B0 */	addi r5, r5, process_onCharacterEnd_select___Q28JMessage10TProcessorFPQ28JMessage10TProcessor@l
/* 80007310 00004250  7C 1F E2 14 */	add r0, r31, r28
/* 80007314 00004254  90 BE 00 24 */	stw r5, 0x24(r30)
/* 80007318 00004258  38 84 77 AC */	addi r4, r4, process_onSelect_limited___Q28JMessage10TProcessorFPQ28JMessage10TProcessor@l
/* 8000731C 0000425C  90 9E 00 28 */	stw r4, 0x28(r30)
/* 80007320 00004260  90 1E 00 2C */	stw r0, 0x2c(r30)
/* 80007324 00004264  93 FE 00 30 */	stw r31, 0x30(r30)
/* 80007328 00004268  93 BE 00 34 */	stw r29, 0x34(r30)
/* 8000732C 0000426C  48 00 04 81 */	bl process_onSelect_limited___Q28JMessage10TProcessorFPQ28JMessage10TProcessor
/* 80007330 00004270  28 03 00 00 */	cmplwi r3, 0
/* 80007334 00004274  41 82 00 30 */	beq .L_80007364
/* 80007338 00004278  80 1E 00 10 */	lwz r0, 0x10(r30)
/* 8000733C 0000427C  28 00 00 04 */	cmplwi r0, 4
/* 80007340 00004280  40 80 00 24 */	bge .L_80007364
/* 80007344 00004284  54 00 10 3A */	slwi r0, r0, 2
/* 80007348 00004288  80 BE 00 0C */	lwz r5, 0xc(r30)
/* 8000734C 0000428C  7C 9E 02 14 */	add r4, r30, r0
/* 80007350 00004290  90 A4 00 14 */	stw r5, 0x14(r4)
/* 80007354 00004294  80 9E 00 10 */	lwz r4, 0x10(r30)
/* 80007358 00004298  38 04 00 01 */	addi r0, r4, 1
/* 8000735C 0000429C  90 1E 00 10 */	stw r0, 0x10(r30)
/* 80007360 000042A0  90 7E 00 0C */	stw r3, 0xc(r30)
.L_80007364:
/* 80007364 000042A4  7F C3 F3 78 */	mr r3, r30
/* 80007368 000042A8  7F A4 EB 78 */	mr r4, r29
/* 8000736C 000042AC  81 9E 00 00 */	lwz r12, 0(r30)
/* 80007370 000042B0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80007374 000042B4  7D 89 03 A6 */	mtctr r12
/* 80007378 000042B8  4E 80 04 21 */	bctrl 
/* 8000737C 000042BC  48 00 00 88 */	b .L_80007404
.L_80007380:
/* 80007380 000042C0  80 1E 00 10 */	lwz r0, 0x10(r30)
/* 80007384 000042C4  28 00 00 04 */	cmplwi r0, 4
/* 80007388 000042C8  40 80 00 7C */	bge .L_80007404
/* 8000738C 000042CC  3C A0 80 00 */	lis r5, process_onCharacterEnd_select___Q28JMessage10TProcessorFPQ28JMessage10TProcessor@ha
/* 80007390 000042D0  3C 80 80 00 */	lis r4, process_onSelect___Q28JMessage10TProcessorFPQ28JMessage10TProcessor@ha
/* 80007394 000042D4  38 A5 76 B0 */	addi r5, r5, process_onCharacterEnd_select___Q28JMessage10TProcessorFPQ28JMessage10TProcessor@l
/* 80007398 000042D8  7C 1F E2 14 */	add r0, r31, r28
/* 8000739C 000042DC  90 BE 00 24 */	stw r5, 0x24(r30)
/* 800073A0 000042E0  38 84 77 C8 */	addi r4, r4, process_onSelect___Q28JMessage10TProcessorFPQ28JMessage10TProcessor@l
/* 800073A4 000042E4  90 9E 00 28 */	stw r4, 0x28(r30)
/* 800073A8 000042E8  90 1E 00 2C */	stw r0, 0x2c(r30)
/* 800073AC 000042EC  93 FE 00 30 */	stw r31, 0x30(r30)
/* 800073B0 000042F0  93 BE 00 34 */	stw r29, 0x34(r30)
/* 800073B4 000042F4  48 00 04 15 */	bl process_onSelect___Q28JMessage10TProcessorFPQ28JMessage10TProcessor
/* 800073B8 000042F8  28 03 00 00 */	cmplwi r3, 0
/* 800073BC 000042FC  41 82 00 30 */	beq .L_800073EC
/* 800073C0 00004300  80 1E 00 10 */	lwz r0, 0x10(r30)
/* 800073C4 00004304  28 00 00 04 */	cmplwi r0, 4
/* 800073C8 00004308  40 80 00 24 */	bge .L_800073EC
/* 800073CC 0000430C  54 00 10 3A */	slwi r0, r0, 2
/* 800073D0 00004310  80 BE 00 0C */	lwz r5, 0xc(r30)
/* 800073D4 00004314  7C 9E 02 14 */	add r4, r30, r0
/* 800073D8 00004318  90 A4 00 14 */	stw r5, 0x14(r4)
/* 800073DC 0000431C  80 9E 00 10 */	lwz r4, 0x10(r30)
/* 800073E0 00004320  38 04 00 01 */	addi r0, r4, 1
/* 800073E4 00004324  90 1E 00 10 */	stw r0, 0x10(r30)
/* 800073E8 00004328  90 7E 00 0C */	stw r3, 0xc(r30)
.L_800073EC:
/* 800073EC 0000432C  7F C3 F3 78 */	mr r3, r30
/* 800073F0 00004330  7F A4 EB 78 */	mr r4, r29
/* 800073F4 00004334  81 9E 00 00 */	lwz r12, 0(r30)
/* 800073F8 00004338  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 800073FC 0000433C  7D 89 03 A6 */	mtctr r12
/* 80007400 00004340  4E 80 04 21 */	bctrl 
.L_80007404:
/* 80007404 00004344  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80007408 00004348  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8000740C 0000434C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80007410 00004350  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80007414 00004354  83 81 00 10 */	lwz r28, 0x10(r1)
/* 80007418 00004358  7C 08 03 A6 */	mtlr r0
/* 8000741C 0000435C  38 21 00 20 */	addi r1, r1, 0x20
/* 80007420 00004360  4E 80 00 20 */	blr 
.endfn do_tag___Q28JMessage10TProcessorFUlPCvUl

.fn on_message_limited__Q28JMessage10TProcessorCFUs, weak
/* 80007424 00004364  80 63 00 08 */	lwz r3, 8(r3)
/* 80007428 00004368  54 85 04 3E */	clrlwi r5, r4, 0x10
/* 8000742C 0000436C  80 83 00 0C */	lwz r4, 0xc(r3)
/* 80007430 00004370  A0 04 00 08 */	lhz r0, 8(r4)
/* 80007434 00004374  7C 05 00 40 */	cmplw r5, r0
/* 80007438 00004378  40 80 00 18 */	bge .L_80007450
/* 8000743C 0000437C  A0 04 00 0A */	lhz r0, 0xa(r4)
/* 80007440 00004380  7C 05 01 D6 */	mullw r0, r5, r0
/* 80007444 00004384  7C 84 02 14 */	add r4, r4, r0
/* 80007448 00004388  38 84 00 10 */	addi r4, r4, 0x10
/* 8000744C 0000438C  48 00 00 08 */	b .L_80007454
.L_80007450:
/* 80007450 00004390  38 80 00 00 */	li r4, 0
.L_80007454:
/* 80007454 00004394  28 04 00 00 */	cmplwi r4, 0
/* 80007458 00004398  40 82 00 0C */	bne .L_80007464
/* 8000745C 0000439C  38 60 00 00 */	li r3, 0
/* 80007460 000043A0  4E 80 00 20 */	blr 
.L_80007464:
/* 80007464 000043A4  80 63 00 10 */	lwz r3, 0x10(r3)
/* 80007468 000043A8  80 04 00 00 */	lwz r0, 0(r4)
/* 8000746C 000043AC  7C 63 02 14 */	add r3, r3, r0
/* 80007470 000043B0  4E 80 00 20 */	blr 
.endfn on_message_limited__Q28JMessage10TProcessorCFUs

.fn do_systemTagCode___Q28JMessage10TProcessorFUsPCvUl, global
/* 80007474 000043B4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80007478 000043B8  7C 08 02 A6 */	mflr r0
/* 8000747C 000043BC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80007480 000043C0  54 80 04 3E */	clrlwi r0, r4, 0x10
/* 80007484 000043C4  2C 00 00 05 */	cmpwi r0, 5
/* 80007488 000043C8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8000748C 000043CC  7C 7F 1B 78 */	mr r31, r3
/* 80007490 000043D0  41 82 00 64 */	beq .L_800074F4
/* 80007494 000043D4  40 80 00 9C */	bge .L_80007530
/* 80007498 000043D8  2C 00 00 04 */	cmpwi r0, 4
/* 8000749C 000043DC  40 80 00 08 */	bge .L_800074A4
/* 800074A0 000043E0  48 00 00 90 */	b .L_80007530
.L_800074A4:
/* 800074A4 000043E4  80 7F 00 04 */	lwz r3, 4(r31)
/* 800074A8 000043E8  80 85 00 00 */	lwz r4, 0(r5)
/* 800074AC 000043EC  81 83 00 00 */	lwz r12, 0(r3)
/* 800074B0 000043F0  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 800074B4 000043F4  7D 89 03 A6 */	mtctr r12
/* 800074B8 000043F8  4E 80 04 21 */	bctrl 
/* 800074BC 000043FC  28 03 00 00 */	cmplwi r3, 0
/* 800074C0 00004400  41 82 00 70 */	beq .L_80007530
/* 800074C4 00004404  80 1F 00 10 */	lwz r0, 0x10(r31)
/* 800074C8 00004408  28 00 00 04 */	cmplwi r0, 4
/* 800074CC 0000440C  40 80 00 64 */	bge .L_80007530
/* 800074D0 00004410  54 00 10 3A */	slwi r0, r0, 2
/* 800074D4 00004414  80 BF 00 0C */	lwz r5, 0xc(r31)
/* 800074D8 00004418  7C 9F 02 14 */	add r4, r31, r0
/* 800074DC 0000441C  90 A4 00 14 */	stw r5, 0x14(r4)
/* 800074E0 00004420  80 9F 00 10 */	lwz r4, 0x10(r31)
/* 800074E4 00004424  38 04 00 01 */	addi r0, r4, 1
/* 800074E8 00004428  90 1F 00 10 */	stw r0, 0x10(r31)
/* 800074EC 0000442C  90 7F 00 0C */	stw r3, 0xc(r31)
/* 800074F0 00004430  48 00 00 40 */	b .L_80007530
.L_800074F4:
/* 800074F4 00004434  80 85 00 00 */	lwz r4, 0(r5)
/* 800074F8 00004438  48 00 00 4D */	bl on_message__Q28JMessage10TProcessorCFUl
/* 800074FC 0000443C  28 03 00 00 */	cmplwi r3, 0
/* 80007500 00004440  41 82 00 30 */	beq .L_80007530
/* 80007504 00004444  80 1F 00 10 */	lwz r0, 0x10(r31)
/* 80007508 00004448  28 00 00 04 */	cmplwi r0, 4
/* 8000750C 0000444C  40 80 00 24 */	bge .L_80007530
/* 80007510 00004450  54 00 10 3A */	slwi r0, r0, 2
/* 80007514 00004454  80 BF 00 0C */	lwz r5, 0xc(r31)
/* 80007518 00004458  7C 9F 02 14 */	add r4, r31, r0
/* 8000751C 0000445C  90 A4 00 14 */	stw r5, 0x14(r4)
/* 80007520 00004460  80 9F 00 10 */	lwz r4, 0x10(r31)
/* 80007524 00004464  38 04 00 01 */	addi r0, r4, 1
/* 80007528 00004468  90 1F 00 10 */	stw r0, 0x10(r31)
/* 8000752C 0000446C  90 7F 00 0C */	stw r3, 0xc(r31)
.L_80007530:
/* 80007530 00004470  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80007534 00004474  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80007538 00004478  7C 08 03 A6 */	mtlr r0
/* 8000753C 0000447C  38 21 00 10 */	addi r1, r1, 0x10
/* 80007540 00004480  4E 80 00 20 */	blr 
.endfn do_systemTagCode___Q28JMessage10TProcessorFUsPCvUl

.fn on_message__Q28JMessage10TProcessorCFUl, weak
/* 80007544 00004484  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80007548 00004488  7C 08 02 A6 */	mflr r0
/* 8000754C 0000448C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80007550 00004490  48 00 00 15 */	bl getMessageText_messageCode__Q28JMessage10TProcessorCFUl
/* 80007554 00004494  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80007558 00004498  7C 08 03 A6 */	mtlr r0
/* 8000755C 0000449C  38 21 00 10 */	addi r1, r1, 0x10
/* 80007560 000044A0  4E 80 00 20 */	blr 
.endfn on_message__Q28JMessage10TProcessorCFUl

.fn getMessageText_messageCode__Q28JMessage10TProcessorCFUl, weak
/* 80007564 000044A4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80007568 000044A8  7C 08 02 A6 */	mflr r0
/* 8000756C 000044AC  38 C0 00 00 */	li r6, 0
/* 80007570 000044B0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80007574 000044B4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80007578 000044B8  7C 7F 1B 78 */	mr r31, r3
/* 8000757C 000044BC  80 63 00 08 */	lwz r3, 8(r3)
/* 80007580 000044C0  93 C1 00 08 */	stw r30, 8(r1)
/* 80007584 000044C4  7C 9E 23 78 */	mr r30, r4
/* 80007588 000044C8  28 03 00 00 */	cmplwi r3, 0
/* 8000758C 000044CC  41 82 00 1C */	beq .L_800075A8
/* 80007590 000044D0  80 83 00 0C */	lwz r4, 0xc(r3)
/* 80007594 000044D4  57 C5 84 3E */	srwi r5, r30, 0x10
/* 80007598 000044D8  A0 04 00 0C */	lhz r0, 0xc(r4)
/* 8000759C 000044DC  7C 05 00 40 */	cmplw r5, r0
/* 800075A0 000044E0  40 82 00 08 */	bne .L_800075A8
/* 800075A4 000044E4  38 C0 00 01 */	li r6, 1
.L_800075A8:
/* 800075A8 000044E8  54 C0 06 3F */	clrlwi. r0, r6, 0x18
/* 800075AC 000044EC  41 82 00 08 */	beq .L_800075B4
/* 800075B0 000044F0  48 00 00 2C */	b .L_800075DC
.L_800075B4:
/* 800075B4 000044F4  80 7F 00 04 */	lwz r3, 4(r31)
/* 800075B8 000044F8  80 63 00 04 */	lwz r3, 4(r3)
/* 800075BC 000044FC  28 03 00 00 */	cmplwi r3, 0
/* 800075C0 00004500  40 82 00 0C */	bne .L_800075CC
/* 800075C4 00004504  38 60 00 00 */	li r3, 0
/* 800075C8 00004508  48 00 00 10 */	b .L_800075D8
.L_800075CC:
/* 800075CC 0000450C  57 C4 84 3E */	srwi r4, r30, 0x10
/* 800075D0 00004510  38 63 00 08 */	addi r3, r3, 8
/* 800075D4 00004514  4B FF F0 49 */	bl Get_groupID__Q38JMessage18TResourceContainer10TCResourceFUs
.L_800075D8:
/* 800075D8 00004518  90 7F 00 08 */	stw r3, 8(r31)
.L_800075DC:
/* 800075DC 0000451C  28 03 00 00 */	cmplwi r3, 0
/* 800075E0 00004520  40 82 00 0C */	bne .L_800075EC
/* 800075E4 00004524  38 80 00 00 */	li r4, 0
/* 800075E8 00004528  48 00 00 30 */	b .L_80007618
.L_800075EC:
/* 800075EC 0000452C  80 83 00 0C */	lwz r4, 0xc(r3)
/* 800075F0 00004530  57 C3 04 3E */	clrlwi r3, r30, 0x10
/* 800075F4 00004534  A0 04 00 08 */	lhz r0, 8(r4)
/* 800075F8 00004538  7C 03 00 40 */	cmplw r3, r0
/* 800075FC 0000453C  40 80 00 18 */	bge .L_80007614
/* 80007600 00004540  A0 04 00 0A */	lhz r0, 0xa(r4)
/* 80007604 00004544  7C 03 01 D6 */	mullw r0, r3, r0
/* 80007608 00004548  7C 84 02 14 */	add r4, r4, r0
/* 8000760C 0000454C  38 84 00 10 */	addi r4, r4, 0x10
/* 80007610 00004550  48 00 00 08 */	b .L_80007618
.L_80007614:
/* 80007614 00004554  38 80 00 00 */	li r4, 0
.L_80007618:
/* 80007618 00004558  28 04 00 00 */	cmplwi r4, 0
/* 8000761C 0000455C  40 82 00 0C */	bne .L_80007628
/* 80007620 00004560  38 60 00 00 */	li r3, 0
/* 80007624 00004564  48 00 00 14 */	b .L_80007638
.L_80007628:
/* 80007628 00004568  80 7F 00 08 */	lwz r3, 8(r31)
/* 8000762C 0000456C  80 04 00 00 */	lwz r0, 0(r4)
/* 80007630 00004570  80 63 00 10 */	lwz r3, 0x10(r3)
/* 80007634 00004574  7C 63 02 14 */	add r3, r3, r0
.L_80007638:
/* 80007638 00004578  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8000763C 0000457C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80007640 00004580  83 C1 00 08 */	lwz r30, 8(r1)
/* 80007644 00004584  7C 08 03 A6 */	mtlr r0
/* 80007648 00004588  38 21 00 10 */	addi r1, r1, 0x10
/* 8000764C 0000458C  4E 80 00 20 */	blr 
.endfn getMessageText_messageCode__Q28JMessage10TProcessorCFUl

.fn process_onCharacterEnd_normal___Q28JMessage10TProcessorFPQ28JMessage10TProcessor, global
/* 80007650 00004590  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80007654 00004594  7C 08 02 A6 */	mflr r0
/* 80007658 00004598  90 01 00 14 */	stw r0, 0x14(r1)
/* 8000765C 0000459C  80 03 00 10 */	lwz r0, 0x10(r3)
/* 80007660 000045A0  28 00 00 00 */	cmplwi r0, 0
/* 80007664 000045A4  41 82 00 28 */	beq .L_8000768C
/* 80007668 000045A8  54 00 10 3A */	slwi r0, r0, 2
/* 8000766C 000045AC  7C 83 02 14 */	add r4, r3, r0
/* 80007670 000045B0  80 04 00 10 */	lwz r0, 0x10(r4)
/* 80007674 000045B4  90 03 00 0C */	stw r0, 0xc(r3)
/* 80007678 000045B8  80 83 00 10 */	lwz r4, 0x10(r3)
/* 8000767C 000045BC  38 04 FF FF */	addi r0, r4, -1
/* 80007680 000045C0  90 03 00 10 */	stw r0, 0x10(r3)
/* 80007684 000045C4  38 60 00 01 */	li r3, 1
/* 80007688 000045C8  48 00 00 18 */	b .L_800076A0
.L_8000768C:
/* 8000768C 000045CC  81 83 00 00 */	lwz r12, 0(r3)
/* 80007690 000045D0  81 8C 00 34 */	lwz r12, 0x34(r12)
/* 80007694 000045D4  7D 89 03 A6 */	mtctr r12
/* 80007698 000045D8  4E 80 04 21 */	bctrl 
/* 8000769C 000045DC  38 60 00 00 */	li r3, 0
.L_800076A0:
/* 800076A0 000045E0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800076A4 000045E4  7C 08 03 A6 */	mtlr r0
/* 800076A8 000045E8  38 21 00 10 */	addi r1, r1, 0x10
/* 800076AC 000045EC  4E 80 00 20 */	blr 
.endfn process_onCharacterEnd_normal___Q28JMessage10TProcessorFPQ28JMessage10TProcessor

.fn process_onCharacterEnd_select___Q28JMessage10TProcessorFPQ28JMessage10TProcessor, global
/* 800076B0 000045F0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800076B4 000045F4  7C 08 02 A6 */	mflr r0
/* 800076B8 000045F8  90 01 00 14 */	stw r0, 0x14(r1)
/* 800076BC 000045FC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 800076C0 00004600  7C 7F 1B 78 */	mr r31, r3
/* 800076C4 00004604  80 83 00 34 */	lwz r4, 0x34(r3)
/* 800076C8 00004608  38 04 FF FF */	addi r0, r4, -1
/* 800076CC 0000460C  90 03 00 34 */	stw r0, 0x34(r3)
/* 800076D0 00004610  80 03 00 34 */	lwz r0, 0x34(r3)
/* 800076D4 00004614  28 00 00 00 */	cmplwi r0, 0
/* 800076D8 00004618  41 82 00 80 */	beq .L_80007758
/* 800076DC 0000461C  80 1F 00 10 */	lwz r0, 0x10(r31)
/* 800076E0 00004620  54 00 10 3A */	slwi r0, r0, 2
/* 800076E4 00004624  7C 9F 02 14 */	add r4, r31, r0
/* 800076E8 00004628  80 04 00 10 */	lwz r0, 0x10(r4)
/* 800076EC 0000462C  90 1F 00 0C */	stw r0, 0xc(r31)
/* 800076F0 00004630  80 9F 00 10 */	lwz r4, 0x10(r31)
/* 800076F4 00004634  38 04 FF FF */	addi r0, r4, -1
/* 800076F8 00004638  90 1F 00 10 */	stw r0, 0x10(r31)
/* 800076FC 0000463C  81 9F 00 28 */	lwz r12, 0x28(r31)
/* 80007700 00004640  7D 89 03 A6 */	mtctr r12
/* 80007704 00004644  4E 80 04 21 */	bctrl 
/* 80007708 00004648  28 03 00 00 */	cmplwi r3, 0
/* 8000770C 0000464C  41 82 00 30 */	beq .L_8000773C
/* 80007710 00004650  80 1F 00 10 */	lwz r0, 0x10(r31)
/* 80007714 00004654  28 00 00 04 */	cmplwi r0, 4
/* 80007718 00004658  40 80 00 24 */	bge .L_8000773C
/* 8000771C 0000465C  54 00 10 3A */	slwi r0, r0, 2
/* 80007720 00004660  80 BF 00 0C */	lwz r5, 0xc(r31)
/* 80007724 00004664  7C 9F 02 14 */	add r4, r31, r0
/* 80007728 00004668  90 A4 00 14 */	stw r5, 0x14(r4)
/* 8000772C 0000466C  80 9F 00 10 */	lwz r4, 0x10(r31)
/* 80007730 00004670  38 04 00 01 */	addi r0, r4, 1
/* 80007734 00004674  90 1F 00 10 */	stw r0, 0x10(r31)
/* 80007738 00004678  90 7F 00 0C */	stw r3, 0xc(r31)
.L_8000773C:
/* 8000773C 0000467C  7F E3 FB 78 */	mr r3, r31
/* 80007740 00004680  81 9F 00 00 */	lwz r12, 0(r31)
/* 80007744 00004684  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 80007748 00004688  7D 89 03 A6 */	mtctr r12
/* 8000774C 0000468C  4E 80 04 21 */	bctrl 
/* 80007750 00004690  38 60 00 01 */	li r3, 1
/* 80007754 00004694  48 00 00 44 */	b .L_80007798
.L_80007758:
/* 80007758 00004698  3C 80 80 00 */	lis r4, process_onCharacterEnd_normal___Q28JMessage10TProcessorFPQ28JMessage10TProcessor@ha
/* 8000775C 0000469C  38 04 76 50 */	addi r0, r4, process_onCharacterEnd_normal___Q28JMessage10TProcessorFPQ28JMessage10TProcessor@l
/* 80007760 000046A0  90 1F 00 24 */	stw r0, 0x24(r31)
/* 80007764 000046A4  80 1F 00 10 */	lwz r0, 0x10(r31)
/* 80007768 000046A8  54 00 10 3A */	slwi r0, r0, 2
/* 8000776C 000046AC  7C 9F 02 14 */	add r4, r31, r0
/* 80007770 000046B0  80 04 00 10 */	lwz r0, 0x10(r4)
/* 80007774 000046B4  90 1F 00 0C */	stw r0, 0xc(r31)
/* 80007778 000046B8  80 9F 00 10 */	lwz r4, 0x10(r31)
/* 8000777C 000046BC  38 04 FF FF */	addi r0, r4, -1
/* 80007780 000046C0  90 1F 00 10 */	stw r0, 0x10(r31)
/* 80007784 000046C4  81 83 00 00 */	lwz r12, 0(r3)
/* 80007788 000046C8  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8000778C 000046CC  7D 89 03 A6 */	mtctr r12
/* 80007790 000046D0  4E 80 04 21 */	bctrl 
/* 80007794 000046D4  38 60 00 01 */	li r3, 1
.L_80007798:
/* 80007798 000046D8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8000779C 000046DC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 800077A0 000046E0  7C 08 03 A6 */	mtlr r0
/* 800077A4 000046E4  38 21 00 10 */	addi r1, r1, 0x10
/* 800077A8 000046E8  4E 80 00 20 */	blr 
.endfn process_onCharacterEnd_select___Q28JMessage10TProcessorFPQ28JMessage10TProcessor

.fn process_onSelect_limited___Q28JMessage10TProcessorFPQ28JMessage10TProcessor, global
/* 800077AC 000046EC  80 A3 00 30 */	lwz r5, 0x30(r3)
/* 800077B0 000046F0  A0 85 00 00 */	lhz r4, 0(r5)
/* 800077B4 000046F4  38 05 00 02 */	addi r0, r5, 2
/* 800077B8 000046F8  90 03 00 30 */	stw r0, 0x30(r3)
/* 800077BC 000046FC  80 03 00 2C */	lwz r0, 0x2c(r3)
/* 800077C0 00004700  7C 60 22 14 */	add r3, r0, r4
/* 800077C4 00004704  4E 80 00 20 */	blr 
.endfn process_onSelect_limited___Q28JMessage10TProcessorFPQ28JMessage10TProcessor

.fn process_onSelect___Q28JMessage10TProcessorFPQ28JMessage10TProcessor, global
/* 800077C8 00004708  80 A3 00 30 */	lwz r5, 0x30(r3)
/* 800077CC 0000470C  80 85 00 00 */	lwz r4, 0(r5)
/* 800077D0 00004710  38 05 00 04 */	addi r0, r5, 4
/* 800077D4 00004714  90 03 00 30 */	stw r0, 0x30(r3)
/* 800077D8 00004718  80 03 00 2C */	lwz r0, 0x2c(r3)
/* 800077DC 0000471C  7C 60 22 14 */	add r3, r0, r4
/* 800077E0 00004720  4E 80 00 20 */	blr 
.endfn process_onSelect___Q28JMessage10TProcessorFPQ28JMessage10TProcessor

.fn __ct__Q28JMessage18TSequenceProcessorFPCQ28JMessage10TReferencePQ28JMessage8TControl, global
/* 800077E4 00004724  3D 00 80 4A */	lis r8, __vt__Q28JMessage10TProcessor@ha
/* 800077E8 00004728  3C E0 80 00 */	lis r7, process_onCharacterEnd_normal___Q28JMessage10TProcessorFPQ28JMessage10TProcessor@ha
/* 800077EC 0000472C  38 08 E4 08 */	addi r0, r8, __vt__Q28JMessage10TProcessor@l
/* 800077F0 00004730  3C C0 80 4A */	lis r6, __vt__Q28JMessage18TSequenceProcessor@ha
/* 800077F4 00004734  90 03 00 00 */	stw r0, 0(r3)
/* 800077F8 00004738  39 00 00 00 */	li r8, 0
/* 800077FC 0000473C  38 E7 76 50 */	addi r7, r7, process_onCharacterEnd_normal___Q28JMessage10TProcessorFPQ28JMessage10TProcessor@l
/* 80007800 00004740  38 06 E3 A8 */	addi r0, r6, __vt__Q28JMessage18TSequenceProcessor@l
/* 80007804 00004744  90 83 00 04 */	stw r4, 4(r3)
/* 80007808 00004748  91 03 00 08 */	stw r8, 8(r3)
/* 8000780C 0000474C  91 03 00 0C */	stw r8, 0xc(r3)
/* 80007810 00004750  91 03 00 10 */	stw r8, 0x10(r3)
/* 80007814 00004754  90 E3 00 24 */	stw r7, 0x24(r3)
/* 80007818 00004758  90 03 00 00 */	stw r0, 0(r3)
/* 8000781C 0000475C  90 A3 00 38 */	stw r5, 0x38(r3)
/* 80007820 00004760  91 03 00 3C */	stw r8, 0x3c(r3)
/* 80007824 00004764  4E 80 00 20 */	blr 
.endfn __ct__Q28JMessage18TSequenceProcessorFPCQ28JMessage10TReferencePQ28JMessage8TControl

.fn __dt__Q28JMessage18TSequenceProcessorFv, global
/* 80007828 00004768  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8000782C 0000476C  7C 08 02 A6 */	mflr r0
/* 80007830 00004770  90 01 00 14 */	stw r0, 0x14(r1)
/* 80007834 00004774  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80007838 00004778  7C 7F 1B 79 */	or. r31, r3, r3
/* 8000783C 0000477C  41 82 00 30 */	beq .L_8000786C
/* 80007840 00004780  3C 60 80 4A */	lis r3, __vt__Q28JMessage18TSequenceProcessor@ha
/* 80007844 00004784  38 03 E3 A8 */	addi r0, r3, __vt__Q28JMessage18TSequenceProcessor@l
/* 80007848 00004788  90 1F 00 00 */	stw r0, 0(r31)
/* 8000784C 0000478C  41 82 00 10 */	beq .L_8000785C
/* 80007850 00004790  3C 60 80 4A */	lis r3, __vt__Q28JMessage10TProcessor@ha
/* 80007854 00004794  38 03 E4 08 */	addi r0, r3, __vt__Q28JMessage10TProcessor@l
/* 80007858 00004798  90 1F 00 00 */	stw r0, 0(r31)
.L_8000785C:
/* 8000785C 0000479C  7C 80 07 35 */	extsh. r0, r4
/* 80007860 000047A0  40 81 00 0C */	ble .L_8000786C
/* 80007864 000047A4  7F E3 FB 78 */	mr r3, r31
/* 80007868 000047A8  48 01 C8 4D */	bl __dl__FPv
.L_8000786C:
/* 8000786C 000047AC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80007870 000047B0  7F E3 FB 78 */	mr r3, r31
/* 80007874 000047B4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80007878 000047B8  7C 08 03 A6 */	mtlr r0
/* 8000787C 000047BC  38 21 00 10 */	addi r1, r1, 0x10
/* 80007880 000047C0  4E 80 00 20 */	blr 
.endfn __dt__Q28JMessage18TSequenceProcessorFv

.fn process__Q28JMessage18TSequenceProcessorFPCc, global
/* 80007884 000047C4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80007888 000047C8  7C 08 02 A6 */	mflr r0
/* 8000788C 000047CC  90 01 00 24 */	stw r0, 0x24(r1)
/* 80007890 000047D0  BF 61 00 0C */	stmw r27, 0xc(r1)
/* 80007894 000047D4  7C 7E 1B 78 */	mr r30, r3
/* 80007898 000047D8  7C 9F 23 78 */	mr r31, r4
.L_8000789C:
/* 8000789C 000047DC  80 1E 00 3C */	lwz r0, 0x3c(r30)
/* 800078A0 000047E0  2C 00 00 03 */	cmpwi r0, 3
/* 800078A4 000047E4  41 82 00 18 */	beq .L_800078BC
/* 800078A8 000047E8  40 80 00 08 */	bge .L_800078B0
/* 800078AC 000047EC  48 00 00 D8 */	b .L_80007984
.L_800078B0:
/* 800078B0 000047F0  2C 00 00 05 */	cmpwi r0, 5
/* 800078B4 000047F4  40 80 00 D0 */	bge .L_80007984
/* 800078B8 000047F8  48 00 00 50 */	b .L_80007908
.L_800078BC:
/* 800078BC 000047FC  7F C3 F3 78 */	mr r3, r30
/* 800078C0 00004800  48 00 02 69 */	bl on_jump_isReady__Q28JMessage18TSequenceProcessorFv
/* 800078C4 00004804  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 800078C8 00004808  40 82 00 0C */	bne .L_800078D4
/* 800078CC 0000480C  80 7E 00 0C */	lwz r3, 0xc(r30)
/* 800078D0 00004810  48 00 02 18 */	b .L_80007AE8
.L_800078D4:
/* 800078D4 00004814  38 00 00 02 */	li r0, 2
/* 800078D8 00004818  7F C3 F3 78 */	mr r3, r30
/* 800078DC 0000481C  90 1E 00 3C */	stw r0, 0x3c(r30)
/* 800078E0 00004820  81 9E 00 40 */	lwz r12, 0x40(r30)
/* 800078E4 00004824  7D 89 03 A6 */	mtctr r12
/* 800078E8 00004828  4E 80 04 21 */	bctrl 
/* 800078EC 0000482C  7C 64 1B 79 */	or. r4, r3, r3
/* 800078F0 00004830  41 82 00 94 */	beq .L_80007984
/* 800078F4 00004834  80 BE 00 38 */	lwz r5, 0x38(r30)
/* 800078F8 00004838  7F C3 F3 78 */	mr r3, r30
/* 800078FC 0000483C  80 A5 00 18 */	lwz r5, 0x18(r5)
/* 80007900 00004840  48 00 02 55 */	bl on_jump__Q28JMessage18TSequenceProcessorFPCvPCc
/* 80007904 00004844  48 00 00 80 */	b .L_80007984
.L_80007908:
/* 80007908 00004848  7F C3 F3 78 */	mr r3, r30
/* 8000790C 0000484C  48 00 02 E5 */	bl on_branch_queryResult__Q28JMessage18TSequenceProcessorFv
/* 80007910 00004850  7C 64 1B 78 */	mr r4, r3
/* 80007914 00004854  28 04 FF FF */	cmplwi r4, 0xffff
/* 80007918 00004858  40 81 00 30 */	ble .L_80007948
/* 8000791C 0000485C  2C 04 FF FF */	cmpwi r4, -1
/* 80007920 00004860  41 82 00 14 */	beq .L_80007934
/* 80007924 00004864  40 80 00 60 */	bge .L_80007984
/* 80007928 00004868  2C 04 FF FE */	cmpwi r4, -2
/* 8000792C 0000486C  40 80 00 10 */	bge .L_8000793C
/* 80007930 00004870  48 00 00 54 */	b .L_80007984
.L_80007934:
/* 80007934 00004874  80 7E 00 0C */	lwz r3, 0xc(r30)
/* 80007938 00004878  48 00 01 B0 */	b .L_80007AE8
.L_8000793C:
/* 8000793C 0000487C  38 00 00 02 */	li r0, 2
/* 80007940 00004880  90 1E 00 3C */	stw r0, 0x3c(r30)
/* 80007944 00004884  48 00 00 40 */	b .L_80007984
.L_80007948:
/* 80007948 00004888  38 00 00 02 */	li r0, 2
/* 8000794C 0000488C  90 1E 00 3C */	stw r0, 0x3c(r30)
/* 80007950 00004890  80 1E 00 48 */	lwz r0, 0x48(r30)
/* 80007954 00004894  7C 04 00 40 */	cmplw r4, r0
/* 80007958 00004898  40 80 00 2C */	bge .L_80007984
/* 8000795C 0000489C  81 9E 00 40 */	lwz r12, 0x40(r30)
/* 80007960 000048A0  7F C3 F3 78 */	mr r3, r30
/* 80007964 000048A4  7D 89 03 A6 */	mtctr r12
/* 80007968 000048A8  4E 80 04 21 */	bctrl 
/* 8000796C 000048AC  7C 64 1B 79 */	or. r4, r3, r3
/* 80007970 000048B0  41 82 00 14 */	beq .L_80007984
/* 80007974 000048B4  80 BE 00 38 */	lwz r5, 0x38(r30)
/* 80007978 000048B8  7F C3 F3 78 */	mr r3, r30
/* 8000797C 000048BC  80 A5 00 18 */	lwz r5, 0x18(r5)
/* 80007980 000048C0  48 00 02 9D */	bl on_branch__Q28JMessage18TSequenceProcessorFPCvPCc
.L_80007984:
/* 80007984 000048C4  80 1E 00 0C */	lwz r0, 0xc(r30)
/* 80007988 000048C8  7C 00 F8 40 */	cmplw r0, r31
/* 8000798C 000048CC  40 82 00 20 */	bne .L_800079AC
/* 80007990 000048D0  7F C3 F3 78 */	mr r3, r30
/* 80007994 000048D4  81 9E 00 00 */	lwz r12, 0(r30)
/* 80007998 000048D8  81 8C 00 34 */	lwz r12, 0x34(r12)
/* 8000799C 000048DC  7D 89 03 A6 */	mtctr r12
/* 800079A0 000048E0  4E 80 04 21 */	bctrl 
/* 800079A4 000048E4  38 60 00 00 */	li r3, 0
/* 800079A8 000048E8  48 00 01 40 */	b .L_80007AE8
.L_800079AC:
/* 800079AC 000048EC  7F C3 F3 78 */	mr r3, r30
/* 800079B0 000048F0  48 00 01 4D */	bl on_isReady__Q28JMessage18TSequenceProcessorFv
/* 800079B4 000048F4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 800079B8 000048F8  40 82 00 0C */	bne .L_800079C4
/* 800079BC 000048FC  80 7E 00 0C */	lwz r3, 0xc(r30)
/* 800079C0 00004900  48 00 01 28 */	b .L_80007AE8
.L_800079C4:
/* 800079C4 00004904  80 FE 00 0C */	lwz r7, 0xc(r30)
/* 800079C8 00004908  8B A7 00 00 */	lbz r29, 0(r7)
/* 800079CC 0000490C  2C 1D 00 1A */	cmpwi r29, 0x1a
/* 800079D0 00004910  41 82 00 34 */	beq .L_80007A04
/* 800079D4 00004914  40 80 00 A4 */	bge .L_80007A78
/* 800079D8 00004918  2C 1D 00 00 */	cmpwi r29, 0
/* 800079DC 0000491C  41 82 00 08 */	beq .L_800079E4
/* 800079E0 00004920  48 00 00 98 */	b .L_80007A78
.L_800079E4:
/* 800079E4 00004924  81 9E 00 24 */	lwz r12, 0x24(r30)
/* 800079E8 00004928  7F C3 F3 78 */	mr r3, r30
/* 800079EC 0000492C  7D 89 03 A6 */	mtctr r12
/* 800079F0 00004930  4E 80 04 21 */	bctrl 
/* 800079F4 00004934  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 800079F8 00004938  40 82 00 E0 */	bne .L_80007AD8
/* 800079FC 0000493C  38 00 00 00 */	li r0, 0
/* 80007A00 00004940  48 00 00 DC */	b .L_80007ADC
.L_80007A04:
/* 80007A04 00004944  8B A7 00 01 */	lbz r29, 1(r7)
/* 80007A08 00004948  3B 67 00 05 */	addi r27, r7, 5
/* 80007A0C 0000494C  7F C3 F3 78 */	mr r3, r30
/* 80007A10 00004950  7C 07 EA 14 */	add r0, r7, r29
/* 80007A14 00004954  7F 65 DB 78 */	mr r5, r27
/* 80007A18 00004958  90 1E 00 0C */	stw r0, 0xc(r30)
/* 80007A1C 0000495C  38 DD FF FB */	addi r6, r29, -5
/* 80007A20 00004960  88 07 00 03 */	lbz r0, 3(r7)
/* 80007A24 00004964  81 9E 00 00 */	lwz r12, 0(r30)
/* 80007A28 00004968  54 1C 44 2E */	rlwinm r28, r0, 8, 0x10, 0x17
/* 80007A2C 0000496C  88 87 00 02 */	lbz r4, 2(r7)
/* 80007A30 00004970  88 07 00 04 */	lbz r0, 4(r7)
/* 80007A34 00004974  50 9C 82 1E */	rlwimi r28, r4, 0x10, 8, 0xf
/* 80007A38 00004978  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80007A3C 0000497C  7F 9C 03 78 */	or r28, r28, r0
/* 80007A40 00004980  7F 84 E3 78 */	mr r4, r28
/* 80007A44 00004984  7D 89 03 A6 */	mtctr r12
/* 80007A48 00004988  4E 80 04 21 */	bctrl 
/* 80007A4C 0000498C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80007A50 00004990  40 82 00 88 */	bne .L_80007AD8
/* 80007A54 00004994  7F C3 F3 78 */	mr r3, r30
/* 80007A58 00004998  7F 84 E3 78 */	mr r4, r28
/* 80007A5C 0000499C  81 9E 00 00 */	lwz r12, 0(r30)
/* 80007A60 000049A0  7F 65 DB 78 */	mr r5, r27
/* 80007A64 000049A4  38 DD FF FB */	addi r6, r29, -5
/* 80007A68 000049A8  81 8C 00 38 */	lwz r12, 0x38(r12)
/* 80007A6C 000049AC  7D 89 03 A6 */	mtctr r12
/* 80007A70 000049B0  4E 80 04 21 */	bctrl 
/* 80007A74 000049B4  48 00 00 64 */	b .L_80007AD8
.L_80007A78:
/* 80007A78 000049B8  80 9E 00 04 */	lwz r4, 4(r30)
/* 80007A7C 000049BC  7F A3 EB 78 */	mr r3, r29
/* 80007A80 000049C0  80 84 00 04 */	lwz r4, 4(r4)
/* 80007A84 000049C4  81 84 00 04 */	lwz r12, 4(r4)
/* 80007A88 000049C8  7D 89 03 A6 */	mtctr r12
/* 80007A8C 000049CC  4E 80 04 21 */	bctrl 
/* 80007A90 000049D0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80007A94 000049D4  41 82 00 20 */	beq .L_80007AB4
/* 80007A98 000049D8  80 7E 00 0C */	lwz r3, 0xc(r30)
/* 80007A9C 000049DC  57 BD 40 2E */	slwi r29, r29, 8
/* 80007AA0 000049E0  38 03 00 01 */	addi r0, r3, 1
/* 80007AA4 000049E4  90 1E 00 0C */	stw r0, 0xc(r30)
/* 80007AA8 000049E8  80 7E 00 0C */	lwz r3, 0xc(r30)
/* 80007AAC 000049EC  88 03 00 00 */	lbz r0, 0(r3)
/* 80007AB0 000049F0  7F BD 03 78 */	or r29, r29, r0
.L_80007AB4:
/* 80007AB4 000049F4  80 BE 00 0C */	lwz r5, 0xc(r30)
/* 80007AB8 000049F8  7F C3 F3 78 */	mr r3, r30
/* 80007ABC 000049FC  7F A4 EB 78 */	mr r4, r29
/* 80007AC0 00004A00  38 05 00 01 */	addi r0, r5, 1
/* 80007AC4 00004A04  90 1E 00 0C */	stw r0, 0xc(r30)
/* 80007AC8 00004A08  81 9E 00 00 */	lwz r12, 0(r30)
/* 80007ACC 00004A0C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80007AD0 00004A10  7D 89 03 A6 */	mtctr r12
/* 80007AD4 00004A14  4E 80 04 21 */	bctrl 
.L_80007AD8:
/* 80007AD8 00004A18  38 00 00 01 */	li r0, 1
.L_80007ADC:
/* 80007ADC 00004A1C  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 80007AE0 00004A20  40 82 FD BC */	bne .L_8000789C
/* 80007AE4 00004A24  38 60 00 00 */	li r3, 0
.L_80007AE8:
/* 80007AE8 00004A28  BB 61 00 0C */	lmw r27, 0xc(r1)
/* 80007AEC 00004A2C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80007AF0 00004A30  7C 08 03 A6 */	mtlr r0
/* 80007AF4 00004A34  38 21 00 20 */	addi r1, r1, 0x20
/* 80007AF8 00004A38  4E 80 00 20 */	blr 
.endfn process__Q28JMessage18TSequenceProcessorFPCc

.fn on_isReady__Q28JMessage18TSequenceProcessorFv, global
/* 80007AFC 00004A3C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80007B00 00004A40  7C 08 02 A6 */	mflr r0
/* 80007B04 00004A44  90 01 00 14 */	stw r0, 0x14(r1)
/* 80007B08 00004A48  81 83 00 00 */	lwz r12, 0(r3)
/* 80007B0C 00004A4C  81 8C 00 48 */	lwz r12, 0x48(r12)
/* 80007B10 00004A50  7D 89 03 A6 */	mtctr r12
/* 80007B14 00004A54  4E 80 04 21 */	bctrl 
/* 80007B18 00004A58  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80007B1C 00004A5C  7C 08 03 A6 */	mtlr r0
/* 80007B20 00004A60  38 21 00 10 */	addi r1, r1, 0x10
/* 80007B24 00004A64  4E 80 00 20 */	blr 
.endfn on_isReady__Q28JMessage18TSequenceProcessorFv

.fn on_jump_isReady__Q28JMessage18TSequenceProcessorFv, global
/* 80007B28 00004A68  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80007B2C 00004A6C  7C 08 02 A6 */	mflr r0
/* 80007B30 00004A70  90 01 00 14 */	stw r0, 0x14(r1)
/* 80007B34 00004A74  81 83 00 00 */	lwz r12, 0(r3)
/* 80007B38 00004A78  81 8C 00 4C */	lwz r12, 0x4c(r12)
/* 80007B3C 00004A7C  7D 89 03 A6 */	mtctr r12
/* 80007B40 00004A80  4E 80 04 21 */	bctrl 
/* 80007B44 00004A84  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80007B48 00004A88  7C 08 03 A6 */	mtlr r0
/* 80007B4C 00004A8C  38 21 00 10 */	addi r1, r1, 0x10
/* 80007B50 00004A90  4E 80 00 20 */	blr 
.endfn on_jump_isReady__Q28JMessage18TSequenceProcessorFv

.fn on_jump__Q28JMessage18TSequenceProcessorFPCvPCc, global
/* 80007B54 00004A94  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80007B58 00004A98  7C 08 02 A6 */	mflr r0
/* 80007B5C 00004A9C  90 01 00 24 */	stw r0, 0x24(r1)
/* 80007B60 00004AA0  38 00 00 00 */	li r0, 0
/* 80007B64 00004AA4  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80007B68 00004AA8  7C BF 2B 78 */	mr r31, r5
/* 80007B6C 00004AAC  3C A0 80 00 */	lis r5, process_onCharacterEnd_normal___Q28JMessage10TProcessorFPQ28JMessage10TProcessor@ha
/* 80007B70 00004AB0  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80007B74 00004AB4  7C 9E 23 78 */	mr r30, r4
/* 80007B78 00004AB8  7F E4 FB 78 */	mr r4, r31
/* 80007B7C 00004ABC  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80007B80 00004AC0  7C 7D 1B 78 */	mr r29, r3
/* 80007B84 00004AC4  93 E3 00 0C */	stw r31, 0xc(r3)
/* 80007B88 00004AC8  90 03 00 10 */	stw r0, 0x10(r3)
/* 80007B8C 00004ACC  38 05 76 50 */	addi r0, r5, process_onCharacterEnd_normal___Q28JMessage10TProcessorFPQ28JMessage10TProcessor@l
/* 80007B90 00004AD0  90 03 00 24 */	stw r0, 0x24(r3)
/* 80007B94 00004AD4  81 83 00 00 */	lwz r12, 0(r3)
/* 80007B98 00004AD8  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 80007B9C 00004ADC  7D 89 03 A6 */	mtctr r12
/* 80007BA0 00004AE0  4E 80 04 21 */	bctrl 
/* 80007BA4 00004AE4  7F A3 EB 78 */	mr r3, r29
/* 80007BA8 00004AE8  81 9D 00 00 */	lwz r12, 0(r29)
/* 80007BAC 00004AEC  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 80007BB0 00004AF0  7D 89 03 A6 */	mtctr r12
/* 80007BB4 00004AF4  4E 80 04 21 */	bctrl 
/* 80007BB8 00004AF8  7F A3 EB 78 */	mr r3, r29
/* 80007BBC 00004AFC  7F C4 F3 78 */	mr r4, r30
/* 80007BC0 00004B00  81 9D 00 00 */	lwz r12, 0(r29)
/* 80007BC4 00004B04  7F E5 FB 78 */	mr r5, r31
/* 80007BC8 00004B08  81 8C 00 50 */	lwz r12, 0x50(r12)
/* 80007BCC 00004B0C  7D 89 03 A6 */	mtctr r12
/* 80007BD0 00004B10  4E 80 04 21 */	bctrl 
/* 80007BD4 00004B14  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80007BD8 00004B18  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80007BDC 00004B1C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80007BE0 00004B20  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80007BE4 00004B24  7C 08 03 A6 */	mtlr r0
/* 80007BE8 00004B28  38 21 00 20 */	addi r1, r1, 0x20
/* 80007BEC 00004B2C  4E 80 00 20 */	blr 
.endfn on_jump__Q28JMessage18TSequenceProcessorFPCvPCc

.fn on_branch_queryResult__Q28JMessage18TSequenceProcessorFv, global
/* 80007BF0 00004B30  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80007BF4 00004B34  7C 08 02 A6 */	mflr r0
/* 80007BF8 00004B38  90 01 00 14 */	stw r0, 0x14(r1)
/* 80007BFC 00004B3C  81 83 00 00 */	lwz r12, 0(r3)
/* 80007C00 00004B40  81 8C 00 58 */	lwz r12, 0x58(r12)
/* 80007C04 00004B44  7D 89 03 A6 */	mtctr r12
/* 80007C08 00004B48  4E 80 04 21 */	bctrl 
/* 80007C0C 00004B4C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80007C10 00004B50  7C 08 03 A6 */	mtlr r0
/* 80007C14 00004B54  38 21 00 10 */	addi r1, r1, 0x10
/* 80007C18 00004B58  4E 80 00 20 */	blr 
.endfn on_branch_queryResult__Q28JMessage18TSequenceProcessorFv

.fn on_branch__Q28JMessage18TSequenceProcessorFPCvPCc, global
/* 80007C1C 00004B5C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80007C20 00004B60  7C 08 02 A6 */	mflr r0
/* 80007C24 00004B64  90 01 00 24 */	stw r0, 0x24(r1)
/* 80007C28 00004B68  38 00 00 00 */	li r0, 0
/* 80007C2C 00004B6C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80007C30 00004B70  7C BF 2B 78 */	mr r31, r5
/* 80007C34 00004B74  3C A0 80 00 */	lis r5, process_onCharacterEnd_normal___Q28JMessage10TProcessorFPQ28JMessage10TProcessor@ha
/* 80007C38 00004B78  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80007C3C 00004B7C  7C 9E 23 78 */	mr r30, r4
/* 80007C40 00004B80  7F E4 FB 78 */	mr r4, r31
/* 80007C44 00004B84  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80007C48 00004B88  7C 7D 1B 78 */	mr r29, r3
/* 80007C4C 00004B8C  93 E3 00 0C */	stw r31, 0xc(r3)
/* 80007C50 00004B90  90 03 00 10 */	stw r0, 0x10(r3)
/* 80007C54 00004B94  38 05 76 50 */	addi r0, r5, process_onCharacterEnd_normal___Q28JMessage10TProcessorFPQ28JMessage10TProcessor@l
/* 80007C58 00004B98  90 03 00 24 */	stw r0, 0x24(r3)
/* 80007C5C 00004B9C  81 83 00 00 */	lwz r12, 0(r3)
/* 80007C60 00004BA0  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 80007C64 00004BA4  7D 89 03 A6 */	mtctr r12
/* 80007C68 00004BA8  4E 80 04 21 */	bctrl 
/* 80007C6C 00004BAC  7F A3 EB 78 */	mr r3, r29
/* 80007C70 00004BB0  81 9D 00 00 */	lwz r12, 0(r29)
/* 80007C74 00004BB4  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 80007C78 00004BB8  7D 89 03 A6 */	mtctr r12
/* 80007C7C 00004BBC  4E 80 04 21 */	bctrl 
/* 80007C80 00004BC0  7F A3 EB 78 */	mr r3, r29
/* 80007C84 00004BC4  7F C4 F3 78 */	mr r4, r30
/* 80007C88 00004BC8  81 9D 00 00 */	lwz r12, 0(r29)
/* 80007C8C 00004BCC  7F E5 FB 78 */	mr r5, r31
/* 80007C90 00004BD0  81 8C 00 5C */	lwz r12, 0x5c(r12)
/* 80007C94 00004BD4  7D 89 03 A6 */	mtctr r12
/* 80007C98 00004BD8  4E 80 04 21 */	bctrl 
/* 80007C9C 00004BDC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80007CA0 00004BE0  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80007CA4 00004BE4  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80007CA8 00004BE8  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80007CAC 00004BEC  7C 08 03 A6 */	mtlr r0
/* 80007CB0 00004BF0  38 21 00 20 */	addi r1, r1, 0x20
/* 80007CB4 00004BF4  4E 80 00 20 */	blr 
.endfn on_branch__Q28JMessage18TSequenceProcessorFPCvPCc

.fn do_begin__Q28JMessage18TSequenceProcessorFPCvPCc, global
/* 80007CB8 00004BF8  4E 80 00 20 */	blr 
.endfn do_begin__Q28JMessage18TSequenceProcessorFPCvPCc

.fn do_end__Q28JMessage18TSequenceProcessorFv, global
/* 80007CBC 00004BFC  4E 80 00 20 */	blr 
.endfn do_end__Q28JMessage18TSequenceProcessorFv

.fn do_isReady__Q28JMessage18TSequenceProcessorFv, global
/* 80007CC0 00004C00  38 60 00 01 */	li r3, 1
/* 80007CC4 00004C04  4E 80 00 20 */	blr 
.endfn do_isReady__Q28JMessage18TSequenceProcessorFv

.fn do_jump_isReady__Q28JMessage18TSequenceProcessorFv, global
/* 80007CC8 00004C08  38 60 00 01 */	li r3, 1
/* 80007CCC 00004C0C  4E 80 00 20 */	blr 
.endfn do_jump_isReady__Q28JMessage18TSequenceProcessorFv

.fn do_jump__Q28JMessage18TSequenceProcessorFPCvPCc, global
/* 80007CD0 00004C10  4E 80 00 20 */	blr 
.endfn do_jump__Q28JMessage18TSequenceProcessorFPCvPCc

.fn do_branch_query__Q28JMessage18TSequenceProcessorFUs, global
/* 80007CD4 00004C14  4E 80 00 20 */	blr 
.endfn do_branch_query__Q28JMessage18TSequenceProcessorFUs

.fn do_branch_queryResult__Q28JMessage18TSequenceProcessorFv, global
/* 80007CD8 00004C18  38 60 FF FE */	li r3, -2
/* 80007CDC 00004C1C  4E 80 00 20 */	blr 
.endfn do_branch_queryResult__Q28JMessage18TSequenceProcessorFv

.fn do_branch__Q28JMessage18TSequenceProcessorFPCvPCc, global
/* 80007CE0 00004C20  4E 80 00 20 */	blr 
.endfn do_branch__Q28JMessage18TSequenceProcessorFPCvPCc

.fn do_reset___Q28JMessage18TSequenceProcessorFPCc, global
/* 80007CE4 00004C24  38 00 00 00 */	li r0, 0
/* 80007CE8 00004C28  28 04 00 00 */	cmplwi r4, 0
/* 80007CEC 00004C2C  90 03 00 3C */	stw r0, 0x3c(r3)
/* 80007CF0 00004C30  4D 82 00 20 */	beqlr 
/* 80007CF4 00004C34  38 00 00 02 */	li r0, 2
/* 80007CF8 00004C38  90 03 00 3C */	stw r0, 0x3c(r3)
/* 80007CFC 00004C3C  4E 80 00 20 */	blr 
.endfn do_reset___Q28JMessage18TSequenceProcessorFPCc

.fn do_setBegin_isReady___Q28JMessage18TSequenceProcessorCFv, global
/* 80007D00 00004C40  80 03 00 3C */	lwz r0, 0x3c(r3)
/* 80007D04 00004C44  7C 00 00 34 */	cntlzw r0, r0
/* 80007D08 00004C48  54 03 D9 7E */	srwi r3, r0, 5
/* 80007D0C 00004C4C  4E 80 00 20 */	blr 
.endfn do_setBegin_isReady___Q28JMessage18TSequenceProcessorCFv

.fn do_begin___Q28JMessage18TSequenceProcessorFPCvPCc, global
/* 80007D10 00004C50  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80007D14 00004C54  7C 08 02 A6 */	mflr r0
/* 80007D18 00004C58  90 01 00 14 */	stw r0, 0x14(r1)
/* 80007D1C 00004C5C  81 83 00 00 */	lwz r12, 0(r3)
/* 80007D20 00004C60  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 80007D24 00004C64  7D 89 03 A6 */	mtctr r12
/* 80007D28 00004C68  4E 80 04 21 */	bctrl 
/* 80007D2C 00004C6C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80007D30 00004C70  7C 08 03 A6 */	mtlr r0
/* 80007D34 00004C74  38 21 00 10 */	addi r1, r1, 0x10
/* 80007D38 00004C78  4E 80 00 20 */	blr 
.endfn do_begin___Q28JMessage18TSequenceProcessorFPCvPCc

.fn do_end___Q28JMessage18TSequenceProcessorFv, global
/* 80007D3C 00004C7C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80007D40 00004C80  7C 08 02 A6 */	mflr r0
/* 80007D44 00004C84  90 01 00 14 */	stw r0, 0x14(r1)
/* 80007D48 00004C88  38 00 00 01 */	li r0, 1
/* 80007D4C 00004C8C  90 03 00 3C */	stw r0, 0x3c(r3)
/* 80007D50 00004C90  81 83 00 00 */	lwz r12, 0(r3)
/* 80007D54 00004C94  81 8C 00 44 */	lwz r12, 0x44(r12)
/* 80007D58 00004C98  7D 89 03 A6 */	mtctr r12
/* 80007D5C 00004C9C  4E 80 04 21 */	bctrl 
/* 80007D60 00004CA0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80007D64 00004CA4  7C 08 03 A6 */	mtlr r0
/* 80007D68 00004CA8  38 21 00 10 */	addi r1, r1, 0x10
/* 80007D6C 00004CAC  4E 80 00 20 */	blr 
.endfn do_end___Q28JMessage18TSequenceProcessorFv

.fn do_tag___Q28JMessage18TSequenceProcessorFUlPCvUl, global
/* 80007D70 00004CB0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80007D74 00004CB4  7C 08 02 A6 */	mflr r0
/* 80007D78 00004CB8  54 87 04 3E */	clrlwi r7, r4, 0x10
/* 80007D7C 00004CBC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80007D80 00004CC0  54 80 86 3E */	rlwinm r0, r4, 0x10, 0x18, 0x1f
/* 80007D84 00004CC4  2C 00 00 FA */	cmpwi r0, 0xfa
/* 80007D88 00004CC8  41 82 00 64 */	beq .L_80007DEC
/* 80007D8C 00004CCC  40 80 00 1C */	bge .L_80007DA8
/* 80007D90 00004CD0  2C 00 00 F8 */	cmpwi r0, 0xf8
/* 80007D94 00004CD4  41 82 00 90 */	beq .L_80007E24
/* 80007D98 00004CD8  40 80 00 6C */	bge .L_80007E04
/* 80007D9C 00004CDC  2C 00 00 F7 */	cmpwi r0, 0xf7
/* 80007DA0 00004CE0  40 80 00 C0 */	bge .L_80007E60
/* 80007DA4 00004CE4  48 00 00 F8 */	b .L_80007E9C
.L_80007DA8:
/* 80007DA8 00004CE8  2C 00 00 FC */	cmpwi r0, 0xfc
/* 80007DAC 00004CEC  41 82 00 0C */	beq .L_80007DB8
/* 80007DB0 00004CF0  40 80 00 EC */	bge .L_80007E9C
/* 80007DB4 00004CF4  48 00 00 20 */	b .L_80007DD4
.L_80007DB8:
/* 80007DB8 00004CF8  38 00 00 03 */	li r0, 3
/* 80007DBC 00004CFC  3C 80 80 00 */	lis r4, process_onJump_limited___Q28JMessage18TSequenceProcessorFPCQ28JMessage18TSequenceProcessor@ha
/* 80007DC0 00004D00  90 03 00 3C */	stw r0, 0x3c(r3)
/* 80007DC4 00004D04  38 04 7F 14 */	addi r0, r4, process_onJump_limited___Q28JMessage18TSequenceProcessorFPCQ28JMessage18TSequenceProcessor@l
/* 80007DC8 00004D08  90 03 00 40 */	stw r0, 0x40(r3)
/* 80007DCC 00004D0C  90 E3 00 44 */	stw r7, 0x44(r3)
/* 80007DD0 00004D10  48 00 00 D0 */	b .L_80007EA0
.L_80007DD4:
/* 80007DD4 00004D14  3C 80 80 00 */	lis r4, process_onBranch_limited___Q28JMessage18TSequenceProcessorFPCQ28JMessage18TSequenceProcessorUl@ha
/* 80007DD8 00004D18  38 04 7F E4 */	addi r0, r4, process_onBranch_limited___Q28JMessage18TSequenceProcessorFPCQ28JMessage18TSequenceProcessorUl@l
/* 80007DDC 00004D1C  90 03 00 40 */	stw r0, 0x40(r3)
/* 80007DE0 00004D20  90 A3 00 44 */	stw r5, 0x44(r3)
/* 80007DE4 00004D24  90 E3 00 48 */	stw r7, 0x48(r3)
/* 80007DE8 00004D28  48 00 00 B8 */	b .L_80007EA0
.L_80007DEC:
/* 80007DEC 00004D2C  3C 80 80 01 */	lis r4, process_onBranch___Q28JMessage18TSequenceProcessorFPCQ28JMessage18TSequenceProcessorUl@ha
/* 80007DF0 00004D30  38 04 80 54 */	addi r0, r4, process_onBranch___Q28JMessage18TSequenceProcessorFPCQ28JMessage18TSequenceProcessorUl@l
/* 80007DF4 00004D34  90 03 00 40 */	stw r0, 0x40(r3)
/* 80007DF8 00004D38  90 A3 00 44 */	stw r5, 0x44(r3)
/* 80007DFC 00004D3C  90 E3 00 48 */	stw r7, 0x48(r3)
/* 80007E00 00004D40  48 00 00 A0 */	b .L_80007EA0
.L_80007E04:
/* 80007E04 00004D44  38 00 00 04 */	li r0, 4
/* 80007E08 00004D48  7C E4 3B 78 */	mr r4, r7
/* 80007E0C 00004D4C  90 03 00 3C */	stw r0, 0x3c(r3)
/* 80007E10 00004D50  81 83 00 00 */	lwz r12, 0(r3)
/* 80007E14 00004D54  81 8C 00 54 */	lwz r12, 0x54(r12)
/* 80007E18 00004D58  7D 89 03 A6 */	mtctr r12
/* 80007E1C 00004D5C  4E 80 04 21 */	bctrl 
/* 80007E20 00004D60  48 00 00 80 */	b .L_80007EA0
.L_80007E24:
/* 80007E24 00004D64  3C 80 80 00 */	lis r4, process_onBranch_limited___Q28JMessage18TSequenceProcessorFPCQ28JMessage18TSequenceProcessorUl@ha
/* 80007E28 00004D68  38 C5 00 02 */	addi r6, r5, 2
/* 80007E2C 00004D6C  38 04 7F E4 */	addi r0, r4, process_onBranch_limited___Q28JMessage18TSequenceProcessorFPCQ28JMessage18TSequenceProcessorUl@l
/* 80007E30 00004D70  A0 A5 00 00 */	lhz r5, 0(r5)
/* 80007E34 00004D74  90 03 00 40 */	stw r0, 0x40(r3)
/* 80007E38 00004D78  38 00 00 04 */	li r0, 4
/* 80007E3C 00004D7C  7C E4 3B 78 */	mr r4, r7
/* 80007E40 00004D80  90 C3 00 44 */	stw r6, 0x44(r3)
/* 80007E44 00004D84  90 A3 00 48 */	stw r5, 0x48(r3)
/* 80007E48 00004D88  90 03 00 3C */	stw r0, 0x3c(r3)
/* 80007E4C 00004D8C  81 83 00 00 */	lwz r12, 0(r3)
/* 80007E50 00004D90  81 8C 00 54 */	lwz r12, 0x54(r12)
/* 80007E54 00004D94  7D 89 03 A6 */	mtctr r12
/* 80007E58 00004D98  4E 80 04 21 */	bctrl 
/* 80007E5C 00004D9C  48 00 00 44 */	b .L_80007EA0
.L_80007E60:
/* 80007E60 00004DA0  3C 80 80 01 */	lis r4, process_onBranch___Q28JMessage18TSequenceProcessorFPCQ28JMessage18TSequenceProcessorUl@ha
/* 80007E64 00004DA4  38 C5 00 02 */	addi r6, r5, 2
/* 80007E68 00004DA8  38 04 80 54 */	addi r0, r4, process_onBranch___Q28JMessage18TSequenceProcessorFPCQ28JMessage18TSequenceProcessorUl@l
/* 80007E6C 00004DAC  A0 A5 00 00 */	lhz r5, 0(r5)
/* 80007E70 00004DB0  90 03 00 40 */	stw r0, 0x40(r3)
/* 80007E74 00004DB4  38 00 00 04 */	li r0, 4
/* 80007E78 00004DB8  7C E4 3B 78 */	mr r4, r7
/* 80007E7C 00004DBC  90 C3 00 44 */	stw r6, 0x44(r3)
/* 80007E80 00004DC0  90 A3 00 48 */	stw r5, 0x48(r3)
/* 80007E84 00004DC4  90 03 00 3C */	stw r0, 0x3c(r3)
/* 80007E88 00004DC8  81 83 00 00 */	lwz r12, 0(r3)
/* 80007E8C 00004DCC  81 8C 00 54 */	lwz r12, 0x54(r12)
/* 80007E90 00004DD0  7D 89 03 A6 */	mtctr r12
/* 80007E94 00004DD4  4E 80 04 21 */	bctrl 
/* 80007E98 00004DD8  48 00 00 08 */	b .L_80007EA0
.L_80007E9C:
/* 80007E9C 00004DDC  4B FF F3 29 */	bl do_tag___Q28JMessage10TProcessorFUlPCvUl
.L_80007EA0:
/* 80007EA0 00004DE0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80007EA4 00004DE4  7C 08 03 A6 */	mtlr r0
/* 80007EA8 00004DE8  38 21 00 10 */	addi r1, r1, 0x10
/* 80007EAC 00004DEC  4E 80 00 20 */	blr 
.endfn do_tag___Q28JMessage18TSequenceProcessorFUlPCvUl

.fn do_systemTagCode___Q28JMessage18TSequenceProcessorFUsPCvUl, global
/* 80007EB0 00004DF0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80007EB4 00004DF4  7C 08 02 A6 */	mflr r0
/* 80007EB8 00004DF8  90 01 00 14 */	stw r0, 0x14(r1)
/* 80007EBC 00004DFC  54 80 04 3E */	clrlwi r0, r4, 0x10
/* 80007EC0 00004E00  2C 00 00 06 */	cmpwi r0, 6
/* 80007EC4 00004E04  41 82 00 1C */	beq .L_80007EE0
/* 80007EC8 00004E08  40 80 00 38 */	bge .L_80007F00
/* 80007ECC 00004E0C  2C 00 00 04 */	cmpwi r0, 4
/* 80007ED0 00004E10  40 80 00 30 */	bge .L_80007F00
/* 80007ED4 00004E14  2C 00 00 00 */	cmpwi r0, 0
/* 80007ED8 00004E18  40 80 00 2C */	bge .L_80007F04
/* 80007EDC 00004E1C  48 00 00 24 */	b .L_80007F00
.L_80007EE0:
/* 80007EE0 00004E20  38 00 00 03 */	li r0, 3
/* 80007EE4 00004E24  3C 80 80 00 */	lis r4, process_onJump___Q28JMessage18TSequenceProcessorFPCQ28JMessage18TSequenceProcessor@ha
/* 80007EE8 00004E28  90 03 00 3C */	stw r0, 0x3c(r3)
/* 80007EEC 00004E2C  38 04 7F 80 */	addi r0, r4, process_onJump___Q28JMessage18TSequenceProcessorFPCQ28JMessage18TSequenceProcessor@l
/* 80007EF0 00004E30  80 85 00 00 */	lwz r4, 0(r5)
/* 80007EF4 00004E34  90 03 00 40 */	stw r0, 0x40(r3)
/* 80007EF8 00004E38  90 83 00 44 */	stw r4, 0x44(r3)
/* 80007EFC 00004E3C  48 00 00 08 */	b .L_80007F04
.L_80007F00:
/* 80007F00 00004E40  4B FF F5 75 */	bl do_systemTagCode___Q28JMessage10TProcessorFUsPCvUl
.L_80007F04:
/* 80007F04 00004E44  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80007F08 00004E48  7C 08 03 A6 */	mtlr r0
/* 80007F0C 00004E4C  38 21 00 10 */	addi r1, r1, 0x10
/* 80007F10 00004E50  4E 80 00 20 */	blr 
.endfn do_systemTagCode___Q28JMessage18TSequenceProcessorFUsPCvUl

.fn process_onJump_limited___Q28JMessage18TSequenceProcessorFPCQ28JMessage18TSequenceProcessor, global
/* 80007F14 00004E54  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80007F18 00004E58  7C 08 02 A6 */	mflr r0
/* 80007F1C 00004E5C  80 83 00 08 */	lwz r4, 8(r3)
/* 80007F20 00004E60  90 01 00 14 */	stw r0, 0x14(r1)
/* 80007F24 00004E64  80 03 00 44 */	lwz r0, 0x44(r3)
/* 80007F28 00004E68  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80007F2C 00004E6C  54 06 04 3E */	clrlwi r6, r0, 0x10
/* 80007F30 00004E70  80 84 00 0C */	lwz r4, 0xc(r4)
/* 80007F34 00004E74  28 06 FF 00 */	cmplwi r6, 0xff00
/* 80007F38 00004E78  A0 A4 00 0C */	lhz r5, 0xc(r4)
/* 80007F3C 00004E7C  41 80 00 0C */	blt .L_80007F48
/* 80007F40 00004E80  38 60 00 00 */	li r3, 0
/* 80007F44 00004E84  48 00 00 28 */	b .L_80007F6C
.L_80007F48:
/* 80007F48 00004E88  83 E3 00 38 */	lwz r31, 0x38(r3)
/* 80007F4C 00004E8C  7C 64 1B 78 */	mr r4, r3
/* 80007F50 00004E90  7F E3 FB 78 */	mr r3, r31
/* 80007F54 00004E94  48 00 09 01 */	bl setMessageCode_inSequence___Q28JMessage8TControlFPCQ28JMessage10TProcessorUsUs
/* 80007F58 00004E98  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80007F5C 00004E9C  40 82 00 0C */	bne .L_80007F68
/* 80007F60 00004EA0  38 60 00 00 */	li r3, 0
/* 80007F64 00004EA4  48 00 00 08 */	b .L_80007F6C
.L_80007F68:
/* 80007F68 00004EA8  80 7F 00 14 */	lwz r3, 0x14(r31)
.L_80007F6C:
/* 80007F6C 00004EAC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80007F70 00004EB0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80007F74 00004EB4  7C 08 03 A6 */	mtlr r0
/* 80007F78 00004EB8  38 21 00 10 */	addi r1, r1, 0x10
/* 80007F7C 00004EBC  4E 80 00 20 */	blr 
.endfn process_onJump_limited___Q28JMessage18TSequenceProcessorFPCQ28JMessage18TSequenceProcessor

.fn process_onJump___Q28JMessage18TSequenceProcessorFPCQ28JMessage18TSequenceProcessor, global
/* 80007F80 00004EC0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80007F84 00004EC4  7C 08 02 A6 */	mflr r0
/* 80007F88 00004EC8  90 01 00 14 */	stw r0, 0x14(r1)
/* 80007F8C 00004ECC  80 03 00 44 */	lwz r0, 0x44(r3)
/* 80007F90 00004ED0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80007F94 00004ED4  54 06 04 3E */	clrlwi r6, r0, 0x10
/* 80007F98 00004ED8  28 06 FF 00 */	cmplwi r6, 0xff00
/* 80007F9C 00004EDC  41 80 00 0C */	blt .L_80007FA8
/* 80007FA0 00004EE0  38 60 00 00 */	li r3, 0
/* 80007FA4 00004EE4  48 00 00 2C */	b .L_80007FD0
.L_80007FA8:
/* 80007FA8 00004EE8  83 E3 00 38 */	lwz r31, 0x38(r3)
/* 80007FAC 00004EEC  7C 64 1B 78 */	mr r4, r3
/* 80007FB0 00004EF0  54 05 84 3E */	srwi r5, r0, 0x10
/* 80007FB4 00004EF4  7F E3 FB 78 */	mr r3, r31
/* 80007FB8 00004EF8  48 00 08 9D */	bl setMessageCode_inSequence___Q28JMessage8TControlFPCQ28JMessage10TProcessorUsUs
/* 80007FBC 00004EFC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80007FC0 00004F00  40 82 00 0C */	bne .L_80007FCC
/* 80007FC4 00004F04  38 60 00 00 */	li r3, 0
/* 80007FC8 00004F08  48 00 00 08 */	b .L_80007FD0
.L_80007FCC:
/* 80007FCC 00004F0C  80 7F 00 14 */	lwz r3, 0x14(r31)
.L_80007FD0:
/* 80007FD0 00004F10  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80007FD4 00004F14  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80007FD8 00004F18  7C 08 03 A6 */	mtlr r0
/* 80007FDC 00004F1C  38 21 00 10 */	addi r1, r1, 0x10
/* 80007FE0 00004F20  4E 80 00 20 */	blr 
.endfn process_onJump___Q28JMessage18TSequenceProcessorFPCQ28JMessage18TSequenceProcessor

.fn process_onBranch_limited___Q28JMessage18TSequenceProcessorFPCQ28JMessage18TSequenceProcessorUl, global
/* 80007FE4 00004F24  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80007FE8 00004F28  7C 08 02 A6 */	mflr r0
/* 80007FEC 00004F2C  80 A3 00 44 */	lwz r5, 0x44(r3)
/* 80007FF0 00004F30  90 01 00 14 */	stw r0, 0x14(r1)
/* 80007FF4 00004F34  54 80 08 3C */	slwi r0, r4, 1
/* 80007FF8 00004F38  80 83 00 08 */	lwz r4, 8(r3)
/* 80007FFC 00004F3C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80008000 00004F40  7C C5 02 2E */	lhzx r6, r5, r0
/* 80008004 00004F44  80 84 00 0C */	lwz r4, 0xc(r4)
/* 80008008 00004F48  28 06 FF 00 */	cmplwi r6, 0xff00
/* 8000800C 00004F4C  A0 A4 00 0C */	lhz r5, 0xc(r4)
/* 80008010 00004F50  41 80 00 0C */	blt .L_8000801C
/* 80008014 00004F54  38 60 00 00 */	li r3, 0
/* 80008018 00004F58  48 00 00 28 */	b .L_80008040
.L_8000801C:
/* 8000801C 00004F5C  83 E3 00 38 */	lwz r31, 0x38(r3)
/* 80008020 00004F60  7C 64 1B 78 */	mr r4, r3
/* 80008024 00004F64  7F E3 FB 78 */	mr r3, r31
/* 80008028 00004F68  48 00 08 2D */	bl setMessageCode_inSequence___Q28JMessage8TControlFPCQ28JMessage10TProcessorUsUs
/* 8000802C 00004F6C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80008030 00004F70  40 82 00 0C */	bne .L_8000803C
/* 80008034 00004F74  38 60 00 00 */	li r3, 0
/* 80008038 00004F78  48 00 00 08 */	b .L_80008040
.L_8000803C:
/* 8000803C 00004F7C  80 7F 00 14 */	lwz r3, 0x14(r31)
.L_80008040:
/* 80008040 00004F80  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80008044 00004F84  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80008048 00004F88  7C 08 03 A6 */	mtlr r0
/* 8000804C 00004F8C  38 21 00 10 */	addi r1, r1, 0x10
/* 80008050 00004F90  4E 80 00 20 */	blr 
.endfn process_onBranch_limited___Q28JMessage18TSequenceProcessorFPCQ28JMessage18TSequenceProcessorUl

.fn process_onBranch___Q28JMessage18TSequenceProcessorFPCQ28JMessage18TSequenceProcessorUl, global
/* 80008054 00004F94  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80008058 00004F98  7C 08 02 A6 */	mflr r0
/* 8000805C 00004F9C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80008060 00004FA0  54 80 10 3A */	slwi r0, r4, 2
/* 80008064 00004FA4  80 83 00 44 */	lwz r4, 0x44(r3)
/* 80008068 00004FA8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8000806C 00004FAC  7C 04 00 2E */	lwzx r0, r4, r0
/* 80008070 00004FB0  54 06 04 3E */	clrlwi r6, r0, 0x10
/* 80008074 00004FB4  28 06 FF 00 */	cmplwi r6, 0xff00
/* 80008078 00004FB8  41 80 00 0C */	blt .L_80008084
/* 8000807C 00004FBC  38 60 00 00 */	li r3, 0
/* 80008080 00004FC0  48 00 00 2C */	b .L_800080AC
.L_80008084:
/* 80008084 00004FC4  83 E3 00 38 */	lwz r31, 0x38(r3)
/* 80008088 00004FC8  7C 64 1B 78 */	mr r4, r3
/* 8000808C 00004FCC  54 05 84 3E */	srwi r5, r0, 0x10
/* 80008090 00004FD0  7F E3 FB 78 */	mr r3, r31
/* 80008094 00004FD4  48 00 07 C1 */	bl setMessageCode_inSequence___Q28JMessage8TControlFPCQ28JMessage10TProcessorUsUs
/* 80008098 00004FD8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8000809C 00004FDC  40 82 00 0C */	bne .L_800080A8
/* 800080A0 00004FE0  38 60 00 00 */	li r3, 0
/* 800080A4 00004FE4  48 00 00 08 */	b .L_800080AC
.L_800080A8:
/* 800080A8 00004FE8  80 7F 00 14 */	lwz r3, 0x14(r31)
.L_800080AC:
/* 800080AC 00004FEC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800080B0 00004FF0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 800080B4 00004FF4  7C 08 03 A6 */	mtlr r0
/* 800080B8 00004FF8  38 21 00 10 */	addi r1, r1, 0x10
/* 800080BC 00004FFC  4E 80 00 20 */	blr 
.endfn process_onBranch___Q28JMessage18TSequenceProcessorFPCQ28JMessage18TSequenceProcessorUl

.fn __ct__Q28JMessage19TRenderingProcessorFPCQ28JMessage10TReference, global
/* 800080C0 00005000  3C E0 80 4A */	lis r7, __vt__Q28JMessage10TProcessor@ha
/* 800080C4 00005004  3C C0 80 00 */	lis r6, process_onCharacterEnd_normal___Q28JMessage10TProcessorFPQ28JMessage10TProcessor@ha
/* 800080C8 00005008  38 07 E4 08 */	addi r0, r7, __vt__Q28JMessage10TProcessor@l
/* 800080CC 0000500C  3C A0 80 4A */	lis r5, __vt__Q28JMessage19TRenderingProcessor@ha
/* 800080D0 00005010  90 03 00 00 */	stw r0, 0(r3)
/* 800080D4 00005014  38 E0 00 00 */	li r7, 0
/* 800080D8 00005018  38 C6 76 50 */	addi r6, r6, process_onCharacterEnd_normal___Q28JMessage10TProcessorFPQ28JMessage10TProcessor@l
/* 800080DC 0000501C  38 05 E3 60 */	addi r0, r5, __vt__Q28JMessage19TRenderingProcessor@l
/* 800080E0 00005020  90 83 00 04 */	stw r4, 4(r3)
/* 800080E4 00005024  90 E3 00 08 */	stw r7, 8(r3)
/* 800080E8 00005028  90 E3 00 0C */	stw r7, 0xc(r3)
/* 800080EC 0000502C  90 E3 00 10 */	stw r7, 0x10(r3)
/* 800080F0 00005030  90 C3 00 24 */	stw r6, 0x24(r3)
/* 800080F4 00005034  90 03 00 00 */	stw r0, 0(r3)
/* 800080F8 00005038  4E 80 00 20 */	blr 
.endfn __ct__Q28JMessage19TRenderingProcessorFPCQ28JMessage10TReference

.fn __dt__Q28JMessage19TRenderingProcessorFv, global
/* 800080FC 0000503C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80008100 00005040  7C 08 02 A6 */	mflr r0
/* 80008104 00005044  90 01 00 14 */	stw r0, 0x14(r1)
/* 80008108 00005048  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8000810C 0000504C  7C 7F 1B 79 */	or. r31, r3, r3
/* 80008110 00005050  41 82 00 30 */	beq .L_80008140
/* 80008114 00005054  3C 60 80 4A */	lis r3, __vt__Q28JMessage19TRenderingProcessor@ha
/* 80008118 00005058  38 03 E3 60 */	addi r0, r3, __vt__Q28JMessage19TRenderingProcessor@l
/* 8000811C 0000505C  90 1F 00 00 */	stw r0, 0(r31)
/* 80008120 00005060  41 82 00 10 */	beq .L_80008130
/* 80008124 00005064  3C 60 80 4A */	lis r3, __vt__Q28JMessage10TProcessor@ha
/* 80008128 00005068  38 03 E4 08 */	addi r0, r3, __vt__Q28JMessage10TProcessor@l
/* 8000812C 0000506C  90 1F 00 00 */	stw r0, 0(r31)
.L_80008130:
/* 80008130 00005070  7C 80 07 35 */	extsh. r0, r4
/* 80008134 00005074  40 81 00 0C */	ble .L_80008140
/* 80008138 00005078  7F E3 FB 78 */	mr r3, r31
/* 8000813C 0000507C  48 01 BF 79 */	bl __dl__FPv
.L_80008140:
/* 80008140 00005080  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80008144 00005084  7F E3 FB 78 */	mr r3, r31
/* 80008148 00005088  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8000814C 0000508C  7C 08 03 A6 */	mtlr r0
/* 80008150 00005090  38 21 00 10 */	addi r1, r1, 0x10
/* 80008154 00005094  4E 80 00 20 */	blr 
.endfn __dt__Q28JMessage19TRenderingProcessorFv

.fn process__Q28JMessage19TRenderingProcessorFPCc, global
/* 80008158 00005098  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8000815C 0000509C  7C 08 02 A6 */	mflr r0
/* 80008160 000050A0  90 01 00 24 */	stw r0, 0x24(r1)
/* 80008164 000050A4  BF 61 00 0C */	stmw r27, 0xc(r1)
/* 80008168 000050A8  7C 7E 1B 78 */	mr r30, r3
/* 8000816C 000050AC  7C 9F 23 78 */	mr r31, r4
.L_80008170:
/* 80008170 000050B0  80 FE 00 0C */	lwz r7, 0xc(r30)
/* 80008174 000050B4  7C 07 F8 40 */	cmplw r7, r31
/* 80008178 000050B8  40 82 00 20 */	bne .L_80008198
/* 8000817C 000050BC  7F C3 F3 78 */	mr r3, r30
/* 80008180 000050C0  81 9E 00 00 */	lwz r12, 0(r30)
/* 80008184 000050C4  81 8C 00 34 */	lwz r12, 0x34(r12)
/* 80008188 000050C8  7D 89 03 A6 */	mtctr r12
/* 8000818C 000050CC  4E 80 04 21 */	bctrl 
/* 80008190 000050D0  38 60 00 00 */	li r3, 0
/* 80008194 000050D4  48 00 01 24 */	b .L_800082B8
.L_80008198:
/* 80008198 000050D8  8B A7 00 00 */	lbz r29, 0(r7)
/* 8000819C 000050DC  2C 1D 00 1A */	cmpwi r29, 0x1a
/* 800081A0 000050E0  41 82 00 34 */	beq .L_800081D4
/* 800081A4 000050E4  40 80 00 A4 */	bge .L_80008248
/* 800081A8 000050E8  2C 1D 00 00 */	cmpwi r29, 0
/* 800081AC 000050EC  41 82 00 08 */	beq .L_800081B4
/* 800081B0 000050F0  48 00 00 98 */	b .L_80008248
.L_800081B4:
/* 800081B4 000050F4  81 9E 00 24 */	lwz r12, 0x24(r30)
/* 800081B8 000050F8  7F C3 F3 78 */	mr r3, r30
/* 800081BC 000050FC  7D 89 03 A6 */	mtctr r12
/* 800081C0 00005100  4E 80 04 21 */	bctrl 
/* 800081C4 00005104  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 800081C8 00005108  40 82 00 E0 */	bne .L_800082A8
/* 800081CC 0000510C  38 00 00 00 */	li r0, 0
/* 800081D0 00005110  48 00 00 DC */	b .L_800082AC
.L_800081D4:
/* 800081D4 00005114  8B A7 00 01 */	lbz r29, 1(r7)
/* 800081D8 00005118  3B 67 00 05 */	addi r27, r7, 5
/* 800081DC 0000511C  7F C3 F3 78 */	mr r3, r30
/* 800081E0 00005120  7C 07 EA 14 */	add r0, r7, r29
/* 800081E4 00005124  7F 65 DB 78 */	mr r5, r27
/* 800081E8 00005128  90 1E 00 0C */	stw r0, 0xc(r30)
/* 800081EC 0000512C  38 DD FF FB */	addi r6, r29, -5
/* 800081F0 00005130  88 07 00 03 */	lbz r0, 3(r7)
/* 800081F4 00005134  81 9E 00 00 */	lwz r12, 0(r30)
/* 800081F8 00005138  54 1C 44 2E */	rlwinm r28, r0, 8, 0x10, 0x17
/* 800081FC 0000513C  88 87 00 02 */	lbz r4, 2(r7)
/* 80008200 00005140  88 07 00 04 */	lbz r0, 4(r7)
/* 80008204 00005144  50 9C 82 1E */	rlwimi r28, r4, 0x10, 8, 0xf
/* 80008208 00005148  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8000820C 0000514C  7F 9C 03 78 */	or r28, r28, r0
/* 80008210 00005150  7F 84 E3 78 */	mr r4, r28
/* 80008214 00005154  7D 89 03 A6 */	mtctr r12
/* 80008218 00005158  4E 80 04 21 */	bctrl 
/* 8000821C 0000515C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80008220 00005160  40 82 00 88 */	bne .L_800082A8
/* 80008224 00005164  7F C3 F3 78 */	mr r3, r30
/* 80008228 00005168  7F 84 E3 78 */	mr r4, r28
/* 8000822C 0000516C  81 9E 00 00 */	lwz r12, 0(r30)
/* 80008230 00005170  7F 65 DB 78 */	mr r5, r27
/* 80008234 00005174  38 DD FF FB */	addi r6, r29, -5
/* 80008238 00005178  81 8C 00 38 */	lwz r12, 0x38(r12)
/* 8000823C 0000517C  7D 89 03 A6 */	mtctr r12
/* 80008240 00005180  4E 80 04 21 */	bctrl 
/* 80008244 00005184  48 00 00 64 */	b .L_800082A8
.L_80008248:
/* 80008248 00005188  80 9E 00 04 */	lwz r4, 4(r30)
/* 8000824C 0000518C  7F A3 EB 78 */	mr r3, r29
/* 80008250 00005190  80 84 00 04 */	lwz r4, 4(r4)
/* 80008254 00005194  81 84 00 04 */	lwz r12, 4(r4)
/* 80008258 00005198  7D 89 03 A6 */	mtctr r12
/* 8000825C 0000519C  4E 80 04 21 */	bctrl 
/* 80008260 000051A0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80008264 000051A4  41 82 00 20 */	beq .L_80008284
/* 80008268 000051A8  80 7E 00 0C */	lwz r3, 0xc(r30)
/* 8000826C 000051AC  57 BD 40 2E */	slwi r29, r29, 8
/* 80008270 000051B0  38 03 00 01 */	addi r0, r3, 1
/* 80008274 000051B4  90 1E 00 0C */	stw r0, 0xc(r30)
/* 80008278 000051B8  80 7E 00 0C */	lwz r3, 0xc(r30)
/* 8000827C 000051BC  88 03 00 00 */	lbz r0, 0(r3)
/* 80008280 000051C0  7F BD 03 78 */	or r29, r29, r0
.L_80008284:
/* 80008284 000051C4  80 BE 00 0C */	lwz r5, 0xc(r30)
/* 80008288 000051C8  7F C3 F3 78 */	mr r3, r30
/* 8000828C 000051CC  7F A4 EB 78 */	mr r4, r29
/* 80008290 000051D0  38 05 00 01 */	addi r0, r5, 1
/* 80008294 000051D4  90 1E 00 0C */	stw r0, 0xc(r30)
/* 80008298 000051D8  81 9E 00 00 */	lwz r12, 0(r30)
/* 8000829C 000051DC  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 800082A0 000051E0  7D 89 03 A6 */	mtctr r12
/* 800082A4 000051E4  4E 80 04 21 */	bctrl 
.L_800082A8:
/* 800082A8 000051E8  38 00 00 01 */	li r0, 1
.L_800082AC:
/* 800082AC 000051EC  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 800082B0 000051F0  40 82 FE C0 */	bne .L_80008170
/* 800082B4 000051F4  38 60 00 00 */	li r3, 0
.L_800082B8:
/* 800082B8 000051F8  BB 61 00 0C */	lmw r27, 0xc(r1)
/* 800082BC 000051FC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 800082C0 00005200  7C 08 03 A6 */	mtlr r0
/* 800082C4 00005204  38 21 00 20 */	addi r1, r1, 0x20
/* 800082C8 00005208  4E 80 00 20 */	blr 
.endfn process__Q28JMessage19TRenderingProcessorFPCc

.fn do_begin__Q28JMessage19TRenderingProcessorFPCvPCc, global
/* 800082CC 0000520C  4E 80 00 20 */	blr 
.endfn do_begin__Q28JMessage19TRenderingProcessorFPCvPCc

.fn do_end__Q28JMessage19TRenderingProcessorFv, global
/* 800082D0 00005210  4E 80 00 20 */	blr 
.endfn do_end__Q28JMessage19TRenderingProcessorFv

.fn do_reset___Q28JMessage19TRenderingProcessorFPCc, global
/* 800082D4 00005214  4E 80 00 20 */	blr 
.endfn do_reset___Q28JMessage19TRenderingProcessorFPCc

.fn do_begin___Q28JMessage19TRenderingProcessorFPCvPCc, global
/* 800082D8 00005218  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800082DC 0000521C  7C 08 02 A6 */	mflr r0
/* 800082E0 00005220  90 01 00 14 */	stw r0, 0x14(r1)
/* 800082E4 00005224  81 83 00 00 */	lwz r12, 0(r3)
/* 800082E8 00005228  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 800082EC 0000522C  7D 89 03 A6 */	mtctr r12
/* 800082F0 00005230  4E 80 04 21 */	bctrl 
/* 800082F4 00005234  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800082F8 00005238  7C 08 03 A6 */	mtlr r0
/* 800082FC 0000523C  38 21 00 10 */	addi r1, r1, 0x10
/* 80008300 00005240  4E 80 00 20 */	blr 
.endfn do_begin___Q28JMessage19TRenderingProcessorFPCvPCc

.fn do_end___Q28JMessage19TRenderingProcessorFv, global
/* 80008304 00005244  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80008308 00005248  7C 08 02 A6 */	mflr r0
/* 8000830C 0000524C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80008310 00005250  81 83 00 00 */	lwz r12, 0(r3)
/* 80008314 00005254  81 8C 00 44 */	lwz r12, 0x44(r12)
/* 80008318 00005258  7D 89 03 A6 */	mtctr r12
/* 8000831C 0000525C  4E 80 04 21 */	bctrl 
/* 80008320 00005260  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80008324 00005264  7C 08 03 A6 */	mtlr r0
/* 80008328 00005268  38 21 00 10 */	addi r1, r1, 0x10
/* 8000832C 0000526C  4E 80 00 20 */	blr 
.endfn do_end___Q28JMessage19TRenderingProcessorFv

.fn do_tag___Q28JMessage19TRenderingProcessorFUlPCvUl, global
/* 80008330 00005270  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80008334 00005274  7C 08 02 A6 */	mflr r0
/* 80008338 00005278  90 01 00 14 */	stw r0, 0x14(r1)
/* 8000833C 0000527C  54 80 86 3E */	rlwinm r0, r4, 0x10, 0x18, 0x1f
/* 80008340 00005280  2C 00 00 FD */	cmpwi r0, 0xfd
/* 80008344 00005284  40 80 00 0C */	bge .L_80008350
/* 80008348 00005288  2C 00 00 F7 */	cmpwi r0, 0xf7
/* 8000834C 0000528C  40 80 00 08 */	bge .L_80008354
.L_80008350:
/* 80008350 00005290  4B FF EE 75 */	bl do_tag___Q28JMessage10TProcessorFUlPCvUl
.L_80008354:
/* 80008354 00005294  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80008358 00005298  7C 08 03 A6 */	mtlr r0
/* 8000835C 0000529C  38 21 00 10 */	addi r1, r1, 0x10
/* 80008360 000052A0  4E 80 00 20 */	blr 
.endfn do_tag___Q28JMessage19TRenderingProcessorFUlPCvUl

.fn do_systemTagCode___Q28JMessage19TRenderingProcessorFUsPCvUl, global
/* 80008364 000052A4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80008368 000052A8  7C 08 02 A6 */	mflr r0
/* 8000836C 000052AC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80008370 000052B0  54 80 04 3E */	clrlwi r0, r4, 0x10
/* 80008374 000052B4  2C 00 00 06 */	cmpwi r0, 6
/* 80008378 000052B8  41 82 00 1C */	beq .L_80008394
/* 8000837C 000052BC  40 80 00 14 */	bge .L_80008390
/* 80008380 000052C0  2C 00 00 04 */	cmpwi r0, 4
/* 80008384 000052C4  40 80 00 0C */	bge .L_80008390
/* 80008388 000052C8  2C 00 00 00 */	cmpwi r0, 0
/* 8000838C 000052CC  40 80 00 08 */	bge .L_80008394
.L_80008390:
/* 80008390 000052D0  4B FF F0 E5 */	bl do_systemTagCode___Q28JMessage10TProcessorFUsPCvUl
.L_80008394:
/* 80008394 000052D4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80008398 000052D8  7C 08 03 A6 */	mtlr r0
/* 8000839C 000052DC  38 21 00 10 */	addi r1, r1, 0x10
/* 800083A0 000052E0  4E 80 00 20 */	blr 
.endfn do_systemTagCode___Q28JMessage19TRenderingProcessorFUsPCvUl
