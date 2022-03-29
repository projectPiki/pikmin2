.include "macros.inc"
.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.global __vt__Q216JStudio_JMessage16TAdaptor_message
__vt__Q216JStudio_JMessage16TAdaptor_message:
	.4byte 0
	.4byte 0
	.4byte __dt__Q216JStudio_JMessage16TAdaptor_messageFv
	.4byte adaptor_do_prepare__Q27JStudio8TAdaptorFPCQ27JStudio7TObject
	.4byte adaptor_do_begin__Q27JStudio8TAdaptorFPCQ27JStudio7TObject
	.4byte adaptor_do_end__Q27JStudio8TAdaptorFPCQ27JStudio7TObject
	.4byte adaptor_do_update__Q27JStudio8TAdaptorFPCQ27JStudio7TObjectUl
	.4byte adaptor_do_data__Q27JStudio8TAdaptorFPCQ27JStudio7TObjectPCvUlPCvUl
	.4byte adaptor_do_MESSAGE__Q216JStudio_JMessage16TAdaptor_messageFQ37JStudio4data15TEOperationDataPCvUl

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global __ct__Q216JStudio_JMessage16TAdaptor_messageFPQ28JMessage8TControl
__ct__Q216JStudio_JMessage16TAdaptor_messageFPQ28JMessage8TControl:
/* 80014D24 00011C64  3C E0 80 4A */	lis r7, __vt__Q27JStudio8TAdaptor@ha
/* 80014D28 00011C68  3C C0 80 4A */	lis r6, __vt__Q27JStudio16TAdaptor_message@ha
/* 80014D2C 00011C6C  38 07 F4 68 */	addi r0, r7, __vt__Q27JStudio8TAdaptor@l
/* 80014D30 00011C70  3C A0 80 4A */	lis r5, __vt__Q216JStudio_JMessage16TAdaptor_message@ha
/* 80014D34 00011C74  90 03 00 00 */	stw r0, 0(r3)
/* 80014D38 00011C78  38 E0 00 00 */	li r7, 0
/* 80014D3C 00011C7C  38 C6 F2 90 */	addi r6, r6, __vt__Q27JStudio16TAdaptor_message@l
/* 80014D40 00011C80  38 05 F8 C0 */	addi r0, r5, __vt__Q216JStudio_JMessage16TAdaptor_message@l
/* 80014D44 00011C84  90 E3 00 04 */	stw r7, 4(r3)
/* 80014D48 00011C88  90 E3 00 08 */	stw r7, 8(r3)
/* 80014D4C 00011C8C  90 C3 00 00 */	stw r6, 0(r3)
/* 80014D50 00011C90  90 03 00 00 */	stw r0, 0(r3)
/* 80014D54 00011C94  90 83 00 0C */	stw r4, 0xc(r3)
/* 80014D58 00011C98  4E 80 00 20 */	blr 

.global __dt__Q216JStudio_JMessage16TAdaptor_messageFv
__dt__Q216JStudio_JMessage16TAdaptor_messageFv:
/* 80014D5C 00011C9C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80014D60 00011CA0  7C 08 02 A6 */	mflr r0
/* 80014D64 00011CA4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80014D68 00011CA8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80014D6C 00011CAC  7C 9F 23 78 */	mr r31, r4
/* 80014D70 00011CB0  93 C1 00 08 */	stw r30, 8(r1)
/* 80014D74 00011CB4  7C 7E 1B 79 */	or. r30, r3, r3
/* 80014D78 00011CB8  41 82 00 28 */	beq lbl_80014DA0
/* 80014D7C 00011CBC  3C A0 80 4A */	lis r5, __vt__Q216JStudio_JMessage16TAdaptor_message@ha
/* 80014D80 00011CC0  38 80 00 00 */	li r4, 0
/* 80014D84 00011CC4  38 05 F8 C0 */	addi r0, r5, __vt__Q216JStudio_JMessage16TAdaptor_message@l
/* 80014D88 00011CC8  90 1E 00 00 */	stw r0, 0(r30)
/* 80014D8C 00011CCC  4B FF 9E 45 */	bl __dt__Q27JStudio16TAdaptor_messageFv
/* 80014D90 00011CD0  7F E0 07 35 */	extsh. r0, r31
/* 80014D94 00011CD4  40 81 00 0C */	ble lbl_80014DA0
/* 80014D98 00011CD8  7F C3 F3 78 */	mr r3, r30
/* 80014D9C 00011CDC  48 00 F3 19 */	bl __dl__FPv
lbl_80014DA0:
/* 80014DA0 00011CE0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80014DA4 00011CE4  7F C3 F3 78 */	mr r3, r30
/* 80014DA8 00011CE8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80014DAC 00011CEC  83 C1 00 08 */	lwz r30, 8(r1)
/* 80014DB0 00011CF0  7C 08 03 A6 */	mtlr r0
/* 80014DB4 00011CF4  38 21 00 10 */	addi r1, r1, 0x10
/* 80014DB8 00011CF8  4E 80 00 20 */	blr 

.global adaptor_do_MESSAGE__Q216JStudio_JMessage16TAdaptor_messageFQ37JStudio4data15TEOperationDataPCvUl
adaptor_do_MESSAGE__Q216JStudio_JMessage16TAdaptor_messageFQ37JStudio4data15TEOperationDataPCvUl:
/* 80014DBC 00011CFC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80014DC0 00011D00  7C 08 02 A6 */	mflr r0
/* 80014DC4 00011D04  2C 04 00 19 */	cmpwi r4, 0x19
/* 80014DC8 00011D08  90 01 00 14 */	stw r0, 0x14(r1)
/* 80014DCC 00011D0C  41 82 00 08 */	beq lbl_80014DD4
/* 80014DD0 00011D10  48 00 00 18 */	b lbl_80014DE8
lbl_80014DD4:
/* 80014DD4 00011D14  80 05 00 00 */	lwz r0, 0(r5)
/* 80014DD8 00011D18  80 63 00 0C */	lwz r3, 0xc(r3)
/* 80014DDC 00011D1C  54 04 84 3E */	srwi r4, r0, 0x10
/* 80014DE0 00011D20  54 05 04 3E */	clrlwi r5, r0, 0x10
/* 80014DE4 00011D24  4B FF 38 99 */	bl setMessageCode__Q28JMessage8TControlFUsUs
lbl_80014DE8:
/* 80014DE8 00011D28  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80014DEC 00011D2C  7C 08 03 A6 */	mtlr r0
/* 80014DF0 00011D30  38 21 00 10 */	addi r1, r1, 0x10
/* 80014DF4 00011D34  4E 80 00 20 */	blr 
