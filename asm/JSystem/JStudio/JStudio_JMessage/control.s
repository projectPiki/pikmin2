.include "macros.inc"
.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.global __vt__Q216JStudio_JMessage13TCreateObject
__vt__Q216JStudio_JMessage13TCreateObject:
	.4byte 0
	.4byte 0
	.4byte __dt__Q216JStudio_JMessage13TCreateObjectFv
	.4byte create__Q216JStudio_JMessage18TCreateObject_baseFPPQ27JStudio7TObjectRCQ47JStudio3stb4data20TParse_TBlock_object
	.4byte find__Q216JStudio_JMessage13TCreateObjectFRCQ47JStudio3stb4data20TParse_TBlock_object
.global __vt__Q216JStudio_JMessage18TCreateObject_base
__vt__Q216JStudio_JMessage18TCreateObject_base:
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte create__Q216JStudio_JMessage18TCreateObject_baseFPPQ27JStudio7TObjectRCQ47JStudio3stb4data20TParse_TBlock_object
	.4byte 0

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global "createObject_MESSAGE_JMS___Q216JStudio_JMessage21@unnamed@control_cpp@FRCQ47JStudio3stb4data20TParse_TBlock_objectPQ28JMessage8TControl"
"createObject_MESSAGE_JMS___Q216JStudio_JMessage21@unnamed@control_cpp@FRCQ47JStudio3stb4data20TParse_TBlock_objectPQ28JMessage8TControl":
/* 80014DF8 00011D38  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80014DFC 00011D3C  7C 08 02 A6 */	mflr r0
/* 80014E00 00011D40  90 01 00 24 */	stw r0, 0x24(r1)
/* 80014E04 00011D44  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80014E08 00011D48  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80014E0C 00011D4C  7C 9E 23 78 */	mr r30, r4
/* 80014E10 00011D50  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80014E14 00011D54  7C 7D 1B 78 */	mr r29, r3
/* 80014E18 00011D58  38 60 00 10 */	li r3, 0x10
/* 80014E1C 00011D5C  48 00 F0 89 */	bl __nw__FUl
/* 80014E20 00011D60  7C 7F 1B 79 */	or. r31, r3, r3
/* 80014E24 00011D64  41 82 00 10 */	beq .L_80014E34
/* 80014E28 00011D68  7F C4 F3 78 */	mr r4, r30
/* 80014E2C 00011D6C  4B FF FE F9 */	bl __ct__Q216JStudio_JMessage16TAdaptor_messageFPQ28JMessage8TControl
/* 80014E30 00011D70  7C 7F 1B 78 */	mr r31, r3
.L_80014E34:
/* 80014E34 00011D74  28 1F 00 00 */	cmplwi r31, 0
/* 80014E38 00011D78  40 82 00 0C */	bne .L_80014E44
/* 80014E3C 00011D7C  38 60 00 00 */	li r3, 0
/* 80014E40 00011D80  48 00 00 58 */	b .L_80014E98
.L_80014E44:
/* 80014E44 00011D84  38 60 00 38 */	li r3, 0x38
/* 80014E48 00011D88  48 00 F0 5D */	bl __nw__FUl
/* 80014E4C 00011D8C  7C 7E 1B 79 */	or. r30, r3, r3
/* 80014E50 00011D90  41 82 00 14 */	beq .L_80014E64
/* 80014E54 00011D94  7F A4 EB 78 */	mr r4, r29
/* 80014E58 00011D98  7F E5 FB 78 */	mr r5, r31
/* 80014E5C 00011D9C  4B FF 9D D1 */	bl __ct__Q27JStudio15TObject_messageFRCQ47JStudio3stb4data20TParse_TBlock_objectPQ27JStudio16TAdaptor_message
/* 80014E60 00011DA0  7C 7E 1B 78 */	mr r30, r3
.L_80014E64:
/* 80014E64 00011DA4  28 1E 00 00 */	cmplwi r30, 0
/* 80014E68 00011DA8  40 82 00 0C */	bne .L_80014E74
/* 80014E6C 00011DAC  3B C0 00 00 */	li r30, 0
/* 80014E70 00011DB0  48 00 00 24 */	b .L_80014E94
.L_80014E74:
/* 80014E74 00011DB4  80 7E 00 34 */	lwz r3, 0x34(r30)
/* 80014E78 00011DB8  28 03 00 00 */	cmplwi r3, 0
/* 80014E7C 00011DBC  41 82 00 18 */	beq .L_80014E94
/* 80014E80 00011DC0  81 83 00 00 */	lwz r12, 0(r3)
/* 80014E84 00011DC4  7F C4 F3 78 */	mr r4, r30
/* 80014E88 00011DC8  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 80014E8C 00011DCC  7D 89 03 A6 */	mtctr r12
/* 80014E90 00011DD0  4E 80 04 21 */	bctrl 
.L_80014E94:
/* 80014E94 00011DD4  7F C3 F3 78 */	mr r3, r30
.L_80014E98:
/* 80014E98 00011DD8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80014E9C 00011DDC  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80014EA0 00011DE0  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80014EA4 00011DE4  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80014EA8 00011DE8  7C 08 03 A6 */	mtlr r0
/* 80014EAC 00011DEC  38 21 00 20 */	addi r1, r1, 0x20
/* 80014EB0 00011DF0  4E 80 00 20 */	blr 

.global create__Q216JStudio_JMessage18TCreateObject_baseFPPQ27JStudio7TObjectRCQ47JStudio3stb4data20TParse_TBlock_object
create__Q216JStudio_JMessage18TCreateObject_baseFPPQ27JStudio7TObjectRCQ47JStudio3stb4data20TParse_TBlock_object:
/* 80014EB4 00011DF4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80014EB8 00011DF8  7C 08 02 A6 */	mflr r0
/* 80014EBC 00011DFC  90 01 00 24 */	stw r0, 0x24(r1)
/* 80014EC0 00011E00  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80014EC4 00011E04  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80014EC8 00011E08  7C BE 2B 78 */	mr r30, r5
/* 80014ECC 00011E0C  3C A0 4A 4D */	lis r5, 0x4A4D5347@ha
/* 80014ED0 00011E10  80 DE 00 00 */	lwz r6, 0(r30)
/* 80014ED4 00011E14  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80014ED8 00011E18  7C 9D 23 78 */	mr r29, r4
/* 80014EDC 00011E1C  38 05 53 47 */	addi r0, r5, 0x4A4D5347@l
/* 80014EE0 00011E20  80 86 00 04 */	lwz r4, 4(r6)
/* 80014EE4 00011E24  7C 04 00 00 */	cmpw r4, r0
/* 80014EE8 00011E28  41 82 00 08 */	beq .L_80014EF0
/* 80014EEC 00011E2C  48 00 00 14 */	b .L_80014F00
.L_80014EF0:
/* 80014EF0 00011E30  3C 80 80 01 */	lis r4, "createObject_MESSAGE_JMS___Q216JStudio_JMessage21@unnamed@control_cpp@FRCQ47JStudio3stb4data20TParse_TBlock_objectPQ28JMessage8TControl"@ha
/* 80014EF4 00011E34  38 04 4D F8 */	addi r0, r4, "createObject_MESSAGE_JMS___Q216JStudio_JMessage21@unnamed@control_cpp@FRCQ47JStudio3stb4data20TParse_TBlock_objectPQ28JMessage8TControl"@l
/* 80014EF8 00011E38  7C 1F 03 78 */	mr r31, r0
/* 80014EFC 00011E3C  48 00 00 0C */	b .L_80014F08
.L_80014F00:
/* 80014F00 00011E40  38 60 00 00 */	li r3, 0
/* 80014F04 00011E44  48 00 00 40 */	b .L_80014F44
.L_80014F08:
/* 80014F08 00011E48  81 83 00 00 */	lwz r12, 0(r3)
/* 80014F0C 00011E4C  7F C4 F3 78 */	mr r4, r30
/* 80014F10 00011E50  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80014F14 00011E54  7D 89 03 A6 */	mtctr r12
/* 80014F18 00011E58  4E 80 04 21 */	bctrl 
/* 80014F1C 00011E5C  7C 64 1B 79 */	or. r4, r3, r3
/* 80014F20 00011E60  40 82 00 0C */	bne .L_80014F2C
/* 80014F24 00011E64  38 60 00 00 */	li r3, 0
/* 80014F28 00011E68  48 00 00 1C */	b .L_80014F44
.L_80014F2C:
/* 80014F2C 00011E6C  7F EC FB 78 */	mr r12, r31
/* 80014F30 00011E70  7F C3 F3 78 */	mr r3, r30
/* 80014F34 00011E74  7D 89 03 A6 */	mtctr r12
/* 80014F38 00011E78  4E 80 04 21 */	bctrl 
/* 80014F3C 00011E7C  90 7D 00 00 */	stw r3, 0(r29)
/* 80014F40 00011E80  38 60 00 01 */	li r3, 1
.L_80014F44:
/* 80014F44 00011E84  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80014F48 00011E88  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80014F4C 00011E8C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80014F50 00011E90  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80014F54 00011E94  7C 08 03 A6 */	mtlr r0
/* 80014F58 00011E98  38 21 00 20 */	addi r1, r1, 0x20
/* 80014F5C 00011E9C  4E 80 00 20 */	blr 

.global __dt__Q216JStudio_JMessage13TCreateObjectFv
__dt__Q216JStudio_JMessage13TCreateObjectFv:
/* 80014F60 00011EA0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80014F64 00011EA4  7C 08 02 A6 */	mflr r0
/* 80014F68 00011EA8  90 01 00 14 */	stw r0, 0x14(r1)
/* 80014F6C 00011EAC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80014F70 00011EB0  7C 9F 23 78 */	mr r31, r4
/* 80014F74 00011EB4  93 C1 00 08 */	stw r30, 8(r1)
/* 80014F78 00011EB8  7C 7E 1B 79 */	or. r30, r3, r3
/* 80014F7C 00011EBC  41 82 00 38 */	beq .L_80014FB4
/* 80014F80 00011EC0  3C 80 80 4A */	lis r4, __vt__Q216JStudio_JMessage13TCreateObject@ha
/* 80014F84 00011EC4  38 04 F8 E8 */	addi r0, r4, __vt__Q216JStudio_JMessage13TCreateObject@l
/* 80014F88 00011EC8  90 1E 00 00 */	stw r0, 0(r30)
/* 80014F8C 00011ECC  41 82 00 18 */	beq .L_80014FA4
/* 80014F90 00011ED0  3C A0 80 4A */	lis r5, __vt__Q216JStudio_JMessage18TCreateObject_base@ha
/* 80014F94 00011ED4  38 80 00 00 */	li r4, 0
/* 80014F98 00011ED8  38 05 F8 FC */	addi r0, r5, __vt__Q216JStudio_JMessage18TCreateObject_base@l
/* 80014F9C 00011EDC  90 1E 00 00 */	stw r0, 0(r30)
/* 80014FA0 00011EE0  4B FF 7D 19 */	bl __dt__Q27JStudio13TCreateObjectFv
.L_80014FA4:
/* 80014FA4 00011EE4  7F E0 07 35 */	extsh. r0, r31
/* 80014FA8 00011EE8  40 81 00 0C */	ble .L_80014FB4
/* 80014FAC 00011EEC  7F C3 F3 78 */	mr r3, r30
/* 80014FB0 00011EF0  48 00 F1 05 */	bl __dl__FPv
.L_80014FB4:
/* 80014FB4 00011EF4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80014FB8 00011EF8  7F C3 F3 78 */	mr r3, r30
/* 80014FBC 00011EFC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80014FC0 00011F00  83 C1 00 08 */	lwz r30, 8(r1)
/* 80014FC4 00011F04  7C 08 03 A6 */	mtlr r0
/* 80014FC8 00011F08  38 21 00 10 */	addi r1, r1, 0x10
/* 80014FCC 00011F0C  4E 80 00 20 */	blr 

.global find__Q216JStudio_JMessage13TCreateObjectFRCQ47JStudio3stb4data20TParse_TBlock_object
find__Q216JStudio_JMessage13TCreateObjectFRCQ47JStudio3stb4data20TParse_TBlock_object:
/* 80014FD0 00011F10  80 63 00 0C */	lwz r3, 0xc(r3)
/* 80014FD4 00011F14  4E 80 00 20 */	blr 
