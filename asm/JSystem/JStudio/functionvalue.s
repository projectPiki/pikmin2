.include "macros.inc"
.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
.obj "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@", local
	.4byte extrapolateParameter_raw__Q27JStudio13functionvalueFdd
	.4byte extrapolateParameter_repeat__Q27JStudio13functionvalueFdd
	.4byte extrapolateParameter_turn__Q27JStudio13functionvalueFdd
	.4byte extrapolateParameter_clamp__Q27JStudio13functionvalueFdd
.endobj "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.obj __vt__Q27JStudio22TFunctionValue_hermite, global
	.4byte 0
	.4byte 0
	.4byte __dt__Q27JStudio22TFunctionValue_hermiteFv
	.4byte getType__Q27JStudio22TFunctionValue_hermiteCFv
	.4byte getAttributeSet__Q27JStudio22TFunctionValue_hermiteFv
	.4byte initialize__Q27JStudio22TFunctionValue_hermiteFv
	.4byte prepare__Q27JStudio22TFunctionValue_hermiteFv
	.4byte getValue__Q27JStudio22TFunctionValue_hermiteFd
.endobj __vt__Q27JStudio22TFunctionValue_hermite
.obj __vt__Q27JStudio29TFunctionValue_list_parameter, global
	.4byte 0
	.4byte 0
	.4byte __dt__Q27JStudio29TFunctionValue_list_parameterFv
	.4byte getType__Q27JStudio29TFunctionValue_list_parameterCFv
	.4byte getAttributeSet__Q27JStudio29TFunctionValue_list_parameterFv
	.4byte initialize__Q27JStudio29TFunctionValue_list_parameterFv
	.4byte prepare__Q27JStudio29TFunctionValue_list_parameterFv
	.4byte getValue__Q27JStudio29TFunctionValue_list_parameterFd
.endobj __vt__Q27JStudio29TFunctionValue_list_parameter
.obj __vt__Q27JStudio19TFunctionValue_list, global
	.4byte 0
	.4byte 0
	.4byte __dt__Q27JStudio19TFunctionValue_listFv
	.4byte getType__Q27JStudio19TFunctionValue_listCFv
	.4byte getAttributeSet__Q27JStudio19TFunctionValue_listFv
	.4byte initialize__Q27JStudio19TFunctionValue_listFv
	.4byte prepare__Q27JStudio19TFunctionValue_listFv
	.4byte getValue__Q27JStudio19TFunctionValue_listFd
.endobj __vt__Q27JStudio19TFunctionValue_list
.obj __vt__Q27JStudio25TFunctionValue_transition, global
	.4byte 0
	.4byte 0
	.4byte __dt__Q27JStudio25TFunctionValue_transitionFv
	.4byte getType__Q27JStudio25TFunctionValue_transitionCFv
	.4byte getAttributeSet__Q27JStudio25TFunctionValue_transitionFv
	.4byte initialize__Q27JStudio25TFunctionValue_transitionFv
	.4byte prepare__Q27JStudio25TFunctionValue_transitionFv
	.4byte getValue__Q27JStudio25TFunctionValue_transitionFd
.endobj __vt__Q27JStudio25TFunctionValue_transition
.obj __vt__Q27JStudio23TFunctionValue_constant, global
	.4byte 0
	.4byte 0
	.4byte __dt__Q27JStudio23TFunctionValue_constantFv
	.4byte getType__Q27JStudio23TFunctionValue_constantCFv
	.4byte getAttributeSet__Q27JStudio23TFunctionValue_constantFv
	.4byte initialize__Q27JStudio23TFunctionValue_constantFv
	.4byte prepare__Q27JStudio23TFunctionValue_constantFv
	.4byte getValue__Q27JStudio23TFunctionValue_constantFd
.endobj __vt__Q27JStudio23TFunctionValue_constant
.obj __vt__Q27JStudio24TFunctionValue_composite, global
	.4byte 0
	.4byte 0
	.4byte __dt__Q27JStudio24TFunctionValue_compositeFv
	.4byte getType__Q27JStudio24TFunctionValue_compositeCFv
	.4byte getAttributeSet__Q27JStudio24TFunctionValue_compositeFv
	.4byte initialize__Q27JStudio24TFunctionValue_compositeFv
	.4byte prepare__Q27JStudio24TFunctionValue_compositeFv
	.4byte getValue__Q27JStudio24TFunctionValue_compositeFd
.endobj __vt__Q27JStudio24TFunctionValue_composite
.obj __vt__Q27JStudio14TFunctionValue, weak
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte 0
.endobj __vt__Q27JStudio14TFunctionValue

.section .sbss # 0x80514D80 - 0x80516360
.balign 8
.obj lbl_80514D88, local
	.skip 0x1
.endobj lbl_80514D88

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
.obj lbl_805163A0, local
	.double 0.0
.endobj lbl_805163A0
.balign 8
.obj lbl_805163A8, local
	.double 1.0
.endobj lbl_805163A8
.balign 8
.obj lbl_805163B0, local
	.double 3.0
.endobj lbl_805163B0
.balign 8
.obj lbl_805163B8, local
	.double -2.0
.endobj lbl_805163B8
.balign 8
.obj lbl_805163C0, local
	.double 0.16666666666666666
.endobj lbl_805163C0
.balign 8
.obj lbl_805163C8, local
	.double 0.5
.endobj lbl_805163C8
.balign 8
.obj lbl_805163D0, local
	.double 0.6666666666666666
.endobj lbl_805163D0
.balign 8
.obj lbl_805163D8, local
	.double 2.0
.endobj lbl_805163D8
.balign 8
.obj lbl_805163E0, local
	.double -1.0
.endobj lbl_805163E0
.balign 8
.obj lbl_805163E8, local
	.8byte 0x4330000000000000
.endobj lbl_805163E8

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.fn extrapolateParameter_raw__Q27JStudio13functionvalueFdd, weak
/* 80008A80 000059C0  4E 80 00 20 */	blr 
.endfn extrapolateParameter_raw__Q27JStudio13functionvalueFdd

.fn extrapolateParameter_repeat__Q27JStudio13functionvalueFdd, weak
/* 80008A84 000059C4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80008A88 000059C8  7C 08 02 A6 */	mflr r0
/* 80008A8C 000059CC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80008A90 000059D0  DB E1 00 08 */	stfd f31, 8(r1)
/* 80008A94 000059D4  FF E0 10 90 */	fmr f31, f2
/* 80008A98 000059D8  48 0C 6F 35 */	bl fmod
/* 80008A9C 000059DC  C8 02 80 40 */	lfd f0, lbl_805163A0@sda21(r2)
/* 80008AA0 000059E0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80008AA4 000059E4  40 80 00 08 */	bge .L_80008AAC
/* 80008AA8 000059E8  FC 21 F8 2A */	fadd f1, f1, f31
.L_80008AAC:
/* 80008AAC 000059EC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80008AB0 000059F0  CB E1 00 08 */	lfd f31, 8(r1)
/* 80008AB4 000059F4  7C 08 03 A6 */	mtlr r0
/* 80008AB8 000059F8  38 21 00 10 */	addi r1, r1, 0x10
/* 80008ABC 000059FC  4E 80 00 20 */	blr 
.endfn extrapolateParameter_repeat__Q27JStudio13functionvalueFdd

.fn extrapolateParameter_clamp__Q27JStudio13functionvalueFdd, weak
/* 80008AC0 00005A00  C8 02 80 40 */	lfd f0, lbl_805163A0@sda21(r2)
/* 80008AC4 00005A04  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80008AC8 00005A08  4C 40 13 82 */	cror 2, 0, 2
/* 80008ACC 00005A0C  40 82 00 0C */	bne .L_80008AD8
/* 80008AD0 00005A10  FC 20 00 90 */	fmr f1, f0
/* 80008AD4 00005A14  4E 80 00 20 */	blr 
.L_80008AD8:
/* 80008AD8 00005A18  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 80008ADC 00005A1C  4C 40 13 82 */	cror 2, 0, 2
/* 80008AE0 00005A20  4C 82 00 20 */	bnelr 
/* 80008AE4 00005A24  FC 20 10 90 */	fmr f1, f2
/* 80008AE8 00005A28  4E 80 00 20 */	blr 
.endfn extrapolateParameter_clamp__Q27JStudio13functionvalueFdd

.fn toFunction_outside__Q27JStudio14TFunctionValueFi, global
/* 80008AEC 00005A2C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80008AF0 00005A30  38 00 00 00 */	li r0, 0
/* 80008AF4 00005A34  28 03 00 04 */	cmplwi r3, 4
/* 80008AF8 00005A38  3C 80 80 47 */	lis r4, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@ha
/* 80008AFC 00005A3C  90 01 00 08 */	stw r0, 8(r1)
/* 80008B00 00005A40  54 63 10 3A */	slwi r3, r3, 2
/* 80008B04 00005A44  38 04 32 F0 */	addi r0, r4, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@l
/* 80008B08 00005A48  7C 60 1A 14 */	add r3, r0, r3
/* 80008B0C 00005A4C  41 80 00 08 */	blt .L_80008B14
/* 80008B10 00005A50  38 61 00 08 */	addi r3, r1, 8
.L_80008B14:
/* 80008B14 00005A54  80 63 00 00 */	lwz r3, 0(r3)
/* 80008B18 00005A58  28 03 00 00 */	cmplwi r3, 0
/* 80008B1C 00005A5C  40 82 00 10 */	bne .L_80008B2C
/* 80008B20 00005A60  3C 60 80 47 */	lis r3, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@ha
/* 80008B24 00005A64  38 63 32 F0 */	addi r3, r3, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@l
/* 80008B28 00005A68  80 63 00 00 */	lwz r3, 0(r3)
.L_80008B2C:
/* 80008B2C 00005A6C  38 21 00 10 */	addi r1, r1, 0x10
/* 80008B30 00005A70  4E 80 00 20 */	blr 
.endfn toFunction_outside__Q27JStudio14TFunctionValueFi

.fn __dt__Q27JStudio14TFunctionValueFv, global
/* 80008B34 00005A74  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80008B38 00005A78  7C 08 02 A6 */	mflr r0
/* 80008B3C 00005A7C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80008B40 00005A80  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80008B44 00005A84  7C 7F 1B 79 */	or. r31, r3, r3
/* 80008B48 00005A88  41 82 00 1C */	beq .L_80008B64
/* 80008B4C 00005A8C  3C A0 80 4A */	lis r5, __vt__Q27JStudio14TFunctionValue@ha
/* 80008B50 00005A90  7C 80 07 35 */	extsh. r0, r4
/* 80008B54 00005A94  38 05 E5 28 */	addi r0, r5, __vt__Q27JStudio14TFunctionValue@l
/* 80008B58 00005A98  90 1F 00 00 */	stw r0, 0(r31)
/* 80008B5C 00005A9C  40 81 00 08 */	ble .L_80008B64
/* 80008B60 00005AA0  48 01 B5 55 */	bl __dl__FPv
.L_80008B64:
/* 80008B64 00005AA4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80008B68 00005AA8  7F E3 FB 78 */	mr r3, r31
/* 80008B6C 00005AAC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80008B70 00005AB0  7C 08 03 A6 */	mtlr r0
/* 80008B74 00005AB4  38 21 00 10 */	addi r1, r1, 0x10
/* 80008B78 00005AB8  4E 80 00 20 */	blr 
.endfn __dt__Q27JStudio14TFunctionValueFv

.fn extrapolateParameter_turn__Q27JStudio13functionvalueFdd, global
/* 80008B7C 00005ABC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80008B80 00005AC0  7C 08 02 A6 */	mflr r0
/* 80008B84 00005AC4  C8 02 80 78 */	lfd f0, lbl_805163D8@sda21(r2)
/* 80008B88 00005AC8  90 01 00 24 */	stw r0, 0x24(r1)
/* 80008B8C 00005ACC  DB E1 00 18 */	stfd f31, 0x18(r1)
/* 80008B90 00005AD0  DB C1 00 10 */	stfd f30, 0x10(r1)
/* 80008B94 00005AD4  FF C0 10 90 */	fmr f30, f2
/* 80008B98 00005AD8  FF E0 07 B2 */	fmul f31, f0, f30
/* 80008B9C 00005ADC  FC 40 F8 90 */	fmr f2, f31
/* 80008BA0 00005AE0  48 0C 6E 2D */	bl fmod
/* 80008BA4 00005AE4  C8 02 80 40 */	lfd f0, lbl_805163A0@sda21(r2)
/* 80008BA8 00005AE8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80008BAC 00005AEC  40 80 00 08 */	bge .L_80008BB4
/* 80008BB0 00005AF0  FC 21 F8 2A */	fadd f1, f1, f31
.L_80008BB4:
/* 80008BB4 00005AF4  FC 01 F0 40 */	fcmpo cr0, f1, f30
/* 80008BB8 00005AF8  4C 41 13 82 */	cror 2, 1, 2
/* 80008BBC 00005AFC  40 82 00 08 */	bne .L_80008BC4
/* 80008BC0 00005B00  FC 3F 08 28 */	fsub f1, f31, f1
.L_80008BC4:
/* 80008BC4 00005B04  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80008BC8 00005B08  CB E1 00 18 */	lfd f31, 0x18(r1)
/* 80008BCC 00005B0C  CB C1 00 10 */	lfd f30, 0x10(r1)
/* 80008BD0 00005B10  7C 08 03 A6 */	mtlr r0
/* 80008BD4 00005B14  38 21 00 20 */	addi r1, r1, 0x20
/* 80008BD8 00005B18  4E 80 00 20 */	blr 
.endfn extrapolateParameter_turn__Q27JStudio13functionvalueFdd

.fn range_set__Q27JStudio29TFunctionValueAttribute_rangeFdd, global
/* 80008BDC 00005B1C  D8 23 00 00 */	stfd f1, 0(r3)
/* 80008BE0 00005B20  FC 02 08 28 */	fsub f0, f2, f1
/* 80008BE4 00005B24  D8 43 00 08 */	stfd f2, 8(r3)
/* 80008BE8 00005B28  D8 03 00 10 */	stfd f0, 0x10(r3)
/* 80008BEC 00005B2C  4E 80 00 20 */	blr 
.endfn range_set__Q27JStudio29TFunctionValueAttribute_rangeFdd

.fn __ct__Q27JStudio24TFunctionValue_compositeFv, global
/* 80008BF0 00005B30  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80008BF4 00005B34  7C 08 02 A6 */	mflr r0
/* 80008BF8 00005B38  3C 80 80 4A */	lis r4, __vt__Q27JStudio14TFunctionValue@ha
/* 80008BFC 00005B3C  90 01 00 24 */	stw r0, 0x24(r1)
/* 80008C00 00005B40  38 04 E5 28 */	addi r0, r4, __vt__Q27JStudio14TFunctionValue@l
/* 80008C04 00005B44  38 81 00 08 */	addi r4, r1, 8
/* 80008C08 00005B48  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80008C0C 00005B4C  7C 7F 1B 78 */	mr r31, r3
/* 80008C10 00005B50  90 03 00 00 */	stw r0, 0(r3)
/* 80008C14 00005B54  38 7F 00 04 */	addi r3, r31, 4
/* 80008C18 00005B58  88 0D 87 08 */	lbz r0, lbl_80514D88@sda21(r13)
/* 80008C1C 00005B5C  98 01 00 08 */	stb r0, 8(r1)
/* 80008C20 00005B60  48 01 EA 55 */	bl "__ct__Q27JGadget20TVector_pointer_voidFRCQ27JGadget14TAllocator<Pv>"
/* 80008C24 00005B64  3C 60 80 4A */	lis r3, __vt__Q27JStudio24TFunctionValue_composite@ha
/* 80008C28 00005B68  38 00 00 00 */	li r0, 0
/* 80008C2C 00005B6C  38 83 E5 08 */	addi r4, r3, __vt__Q27JStudio24TFunctionValue_composite@l
/* 80008C30 00005B70  7F E3 FB 78 */	mr r3, r31
/* 80008C34 00005B74  90 9F 00 00 */	stw r4, 0(r31)
/* 80008C38 00005B78  90 1F 00 18 */	stw r0, 0x18(r31)
/* 80008C3C 00005B7C  90 1F 00 20 */	stw r0, 0x20(r31)
/* 80008C40 00005B80  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80008C44 00005B84  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80008C48 00005B88  7C 08 03 A6 */	mtlr r0
/* 80008C4C 00005B8C  38 21 00 20 */	addi r1, r1, 0x20
/* 80008C50 00005B90  4E 80 00 20 */	blr 
.endfn __ct__Q27JStudio24TFunctionValue_compositeFv

.fn getType__Q27JStudio24TFunctionValue_compositeCFv, global
/* 80008C54 00005B94  38 60 00 01 */	li r3, 1
/* 80008C58 00005B98  4E 80 00 20 */	blr 
.endfn getType__Q27JStudio24TFunctionValue_compositeCFv

.fn getAttributeSet__Q27JStudio24TFunctionValue_compositeFv, global
/* 80008C5C 00005B9C  28 04 00 00 */	cmplwi r4, 0
/* 80008C60 00005BA0  41 82 00 08 */	beq .L_80008C68
/* 80008C64 00005BA4  38 84 00 04 */	addi r4, r4, 4
.L_80008C68:
/* 80008C68 00005BA8  90 83 00 00 */	stw r4, 0(r3)
/* 80008C6C 00005BAC  38 00 00 00 */	li r0, 0
/* 80008C70 00005BB0  90 03 00 04 */	stw r0, 4(r3)
/* 80008C74 00005BB4  90 03 00 08 */	stw r0, 8(r3)
/* 80008C78 00005BB8  4E 80 00 20 */	blr 
.endfn getAttributeSet__Q27JStudio24TFunctionValue_compositeFv

.fn initialize__Q27JStudio24TFunctionValue_compositeFv, global
/* 80008C7C 00005BBC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80008C80 00005BC0  7C 08 02 A6 */	mflr r0
/* 80008C84 00005BC4  90 01 00 24 */	stw r0, 0x24(r1)
/* 80008C88 00005BC8  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80008C8C 00005BCC  7C 7F 1B 78 */	mr r31, r3
/* 80008C90 00005BD0  80 83 00 08 */	lwz r4, 8(r3)
/* 80008C94 00005BD4  38 7F 00 04 */	addi r3, r31, 4
/* 80008C98 00005BD8  80 BF 00 0C */	lwz r5, 0xc(r31)
/* 80008C9C 00005BDC  48 01 F0 6D */	bl erase__Q27JGadget20TVector_pointer_voidFPPvPPv
/* 80008CA0 00005BE0  38 00 00 00 */	li r0, 0
/* 80008CA4 00005BE4  90 01 00 08 */	stw r0, 8(r1)
/* 80008CA8 00005BE8  90 1F 00 18 */	stw r0, 0x18(r31)
/* 80008CAC 00005BEC  C8 01 00 08 */	lfd f0, 8(r1)
/* 80008CB0 00005BF0  D8 1F 00 20 */	stfd f0, 0x20(r31)
/* 80008CB4 00005BF4  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80008CB8 00005BF8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80008CBC 00005BFC  7C 08 03 A6 */	mtlr r0
/* 80008CC0 00005C00  38 21 00 20 */	addi r1, r1, 0x20
/* 80008CC4 00005C04  4E 80 00 20 */	blr 
.endfn initialize__Q27JStudio24TFunctionValue_compositeFv

.fn prepare__Q27JStudio24TFunctionValue_compositeFv, global
/* 80008CC8 00005C08  4E 80 00 20 */	blr 
.endfn prepare__Q27JStudio24TFunctionValue_compositeFv

.fn getValue__Q27JStudio24TFunctionValue_compositeFd, global
/* 80008CCC 00005C0C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80008CD0 00005C10  7C 08 02 A6 */	mflr r0
/* 80008CD4 00005C14  7C 64 1B 78 */	mr r4, r3
/* 80008CD8 00005C18  90 01 00 14 */	stw r0, 0x14(r1)
/* 80008CDC 00005C1C  81 83 00 18 */	lwz r12, 0x18(r3)
/* 80008CE0 00005C20  38 64 00 04 */	addi r3, r4, 4
/* 80008CE4 00005C24  38 84 00 20 */	addi r4, r4, 0x20
/* 80008CE8 00005C28  7D 89 03 A6 */	mtctr r12
/* 80008CEC 00005C2C  4E 80 04 21 */	bctrl 
/* 80008CF0 00005C30  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80008CF4 00005C34  7C 08 03 A6 */	mtlr r0
/* 80008CF8 00005C38  38 21 00 10 */	addi r1, r1, 0x10
/* 80008CFC 00005C3C  4E 80 00 20 */	blr 
.endfn getValue__Q27JStudio24TFunctionValue_compositeFd

.fn "composite_raw__Q27JStudio24TFunctionValue_compositeFRCQ27JGadget44TVector_pointer<PQ27JStudio14TFunctionValue>RCQ37JStudio24TFunctionValue_composite5TDatad", global
/* 80008D00 00005C40  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80008D04 00005C44  7C 08 02 A6 */	mflr r0
/* 80008D08 00005C48  80 A3 00 04 */	lwz r5, 4(r3)
/* 80008D0C 00005C4C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80008D10 00005C50  28 05 00 00 */	cmplwi r5, 0
/* 80008D14 00005C54  80 84 00 00 */	lwz r4, 0(r4)
/* 80008D18 00005C58  40 82 00 0C */	bne .L_80008D24
/* 80008D1C 00005C5C  38 00 00 00 */	li r0, 0
/* 80008D20 00005C60  48 00 00 14 */	b .L_80008D34
.L_80008D24:
/* 80008D24 00005C64  80 03 00 08 */	lwz r0, 8(r3)
/* 80008D28 00005C68  7C 05 00 50 */	subf r0, r5, r0
/* 80008D2C 00005C6C  7C 00 16 70 */	srawi r0, r0, 2
/* 80008D30 00005C70  7C 00 01 94 */	addze r0, r0
.L_80008D34:
/* 80008D34 00005C74  7C 04 00 40 */	cmplw r4, r0
/* 80008D38 00005C78  41 80 00 0C */	blt .L_80008D44
/* 80008D3C 00005C7C  C8 22 80 40 */	lfd f1, lbl_805163A0@sda21(r2)
/* 80008D40 00005C80  48 00 00 1C */	b .L_80008D5C
.L_80008D44:
/* 80008D44 00005C84  54 80 10 3A */	slwi r0, r4, 2
/* 80008D48 00005C88  7C 65 00 2E */	lwzx r3, r5, r0
/* 80008D4C 00005C8C  81 83 00 00 */	lwz r12, 0(r3)
/* 80008D50 00005C90  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80008D54 00005C94  7D 89 03 A6 */	mtctr r12
/* 80008D58 00005C98  4E 80 04 21 */	bctrl 
.L_80008D5C:
/* 80008D5C 00005C9C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80008D60 00005CA0  7C 08 03 A6 */	mtlr r0
/* 80008D64 00005CA4  38 21 00 10 */	addi r1, r1, 0x10
/* 80008D68 00005CA8  4E 80 00 20 */	blr 
.endfn "composite_raw__Q27JStudio24TFunctionValue_compositeFRCQ27JGadget44TVector_pointer<PQ27JStudio14TFunctionValue>RCQ37JStudio24TFunctionValue_composite5TDatad"

.fn "composite_index__Q27JStudio24TFunctionValue_compositeFRCQ27JGadget44TVector_pointer<PQ27JStudio14TFunctionValue>RCQ37JStudio24TFunctionValue_composite5TDatad", global
/* 80008D6C 00005CAC  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 80008D70 00005CB0  7C 08 02 A6 */	mflr r0
/* 80008D74 00005CB4  90 01 00 44 */	stw r0, 0x44(r1)
/* 80008D78 00005CB8  DB E1 00 38 */	stfd f31, 0x38(r1)
/* 80008D7C 00005CBC  FF E0 08 90 */	fmr f31, f1
/* 80008D80 00005CC0  93 E1 00 34 */	stw r31, 0x34(r1)
/* 80008D84 00005CC4  93 C1 00 30 */	stw r30, 0x30(r1)
/* 80008D88 00005CC8  83 C3 00 04 */	lwz r30, 4(r3)
/* 80008D8C 00005CCC  93 A1 00 2C */	stw r29, 0x2c(r1)
/* 80008D90 00005CD0  7C 9D 23 78 */	mr r29, r4
/* 80008D94 00005CD4  28 1E 00 00 */	cmplwi r30, 0
/* 80008D98 00005CD8  40 82 00 0C */	bne .L_80008DA4
/* 80008D9C 00005CDC  3B E0 00 00 */	li r31, 0
/* 80008DA0 00005CE0  48 00 00 14 */	b .L_80008DB4
.L_80008DA4:
/* 80008DA4 00005CE4  80 03 00 08 */	lwz r0, 8(r3)
/* 80008DA8 00005CE8  7C 1E 00 50 */	subf r0, r30, r0
/* 80008DAC 00005CEC  7C 00 16 70 */	srawi r0, r0, 2
/* 80008DB0 00005CF0  7F E0 01 94 */	addze r31, r0
.L_80008DB4:
/* 80008DB4 00005CF4  2C 1F 00 01 */	cmpwi r31, 1
/* 80008DB8 00005CF8  41 81 00 0C */	bgt .L_80008DC4
/* 80008DBC 00005CFC  C8 22 80 40 */	lfd f1, lbl_805163A0@sda21(r2)
/* 80008DC0 00005D00  48 00 00 F8 */	b .L_80008EB8
.L_80008DC4:
/* 80008DC4 00005D04  80 7E 00 00 */	lwz r3, 0(r30)
/* 80008DC8 00005D08  FC 20 F8 90 */	fmr f1, f31
/* 80008DCC 00005D0C  81 83 00 00 */	lwz r12, 0(r3)
/* 80008DD0 00005D10  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80008DD4 00005D14  7D 89 03 A6 */	mtctr r12
/* 80008DD8 00005D18  4E 80 04 21 */	bctrl 
/* 80008DDC 00005D1C  48 0C 65 AD */	bl floor
/* 80008DE0 00005D20  FC 00 08 1E */	fctiwz f0, f1
/* 80008DE4 00005D24  80 1D 00 00 */	lwz r0, 0(r29)
/* 80008DE8 00005D28  2C 00 00 02 */	cmpwi r0, 2
/* 80008DEC 00005D2C  D8 01 00 18 */	stfd f0, 0x18(r1)
/* 80008DF0 00005D30  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 80008DF4 00005D34  41 82 00 5C */	beq .L_80008E50
/* 80008DF8 00005D38  40 80 00 10 */	bge .L_80008E08
/* 80008DFC 00005D3C  2C 00 00 00 */	cmpwi r0, 0
/* 80008E00 00005D40  41 82 00 08 */	beq .L_80008E08
/* 80008E04 00005D44  40 80 00 28 */	bge .L_80008E2C
.L_80008E08:
/* 80008E08 00005D48  2C 03 00 00 */	cmpwi r3, 0
/* 80008E0C 00005D4C  40 80 00 0C */	bge .L_80008E18
/* 80008E10 00005D50  38 60 00 00 */	li r3, 0
/* 80008E14 00005D54  48 00 00 84 */	b .L_80008E98
.L_80008E18:
/* 80008E18 00005D58  38 1F FF FF */	addi r0, r31, -1
/* 80008E1C 00005D5C  7C 03 00 00 */	cmpw r3, r0
/* 80008E20 00005D60  41 80 00 78 */	blt .L_80008E98
/* 80008E24 00005D64  38 7F FF FE */	addi r3, r31, -2
/* 80008E28 00005D68  48 00 00 70 */	b .L_80008E98
.L_80008E2C:
/* 80008E2C 00005D6C  38 9F FF FF */	addi r4, r31, -1
/* 80008E30 00005D70  48 0B D2 C9 */	bl div
/* 80008E34 00005D74  90 61 00 10 */	stw r3, 0x10(r1)
/* 80008E38 00005D78  7C 83 23 79 */	or. r3, r4, r4
/* 80008E3C 00005D7C  90 81 00 14 */	stw r4, 0x14(r1)
/* 80008E40 00005D80  40 80 00 58 */	bge .L_80008E98
/* 80008E44 00005D84  7C 7F 1A 14 */	add r3, r31, r3
/* 80008E48 00005D88  38 63 FF FF */	addi r3, r3, -1
/* 80008E4C 00005D8C  48 00 00 4C */	b .L_80008E98
.L_80008E50:
/* 80008E50 00005D90  38 1F FF FF */	addi r0, r31, -1
/* 80008E54 00005D94  2C 00 00 01 */	cmpwi r0, 1
/* 80008E58 00005D98  40 82 00 0C */	bne .L_80008E64
/* 80008E5C 00005D9C  38 60 00 00 */	li r3, 0
/* 80008E60 00005DA0  48 00 00 38 */	b .L_80008E98
.L_80008E64:
/* 80008E64 00005DA4  38 1F FF FE */	addi r0, r31, -2
/* 80008E68 00005DA8  54 1D 08 3C */	slwi r29, r0, 1
/* 80008E6C 00005DAC  7F A4 EB 78 */	mr r4, r29
/* 80008E70 00005DB0  48 0B D2 89 */	bl div
/* 80008E74 00005DB4  90 61 00 08 */	stw r3, 8(r1)
/* 80008E78 00005DB8  7C 83 23 79 */	or. r3, r4, r4
/* 80008E7C 00005DBC  90 81 00 0C */	stw r4, 0xc(r1)
/* 80008E80 00005DC0  40 80 00 08 */	bge .L_80008E88
/* 80008E84 00005DC4  7C 63 EA 14 */	add r3, r3, r29
.L_80008E88:
/* 80008E88 00005DC8  38 1F FF FF */	addi r0, r31, -1
/* 80008E8C 00005DCC  7C 03 00 00 */	cmpw r3, r0
/* 80008E90 00005DD0  41 80 00 08 */	blt .L_80008E98
/* 80008E94 00005DD4  7C 63 E8 50 */	subf r3, r3, r29
.L_80008E98:
/* 80008E98 00005DD8  38 03 00 01 */	addi r0, r3, 1
/* 80008E9C 00005DDC  FC 20 F8 90 */	fmr f1, f31
/* 80008EA0 00005DE0  54 00 10 3A */	slwi r0, r0, 2
/* 80008EA4 00005DE4  7C 7E 00 2E */	lwzx r3, r30, r0
/* 80008EA8 00005DE8  81 83 00 00 */	lwz r12, 0(r3)
/* 80008EAC 00005DEC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80008EB0 00005DF0  7D 89 03 A6 */	mtctr r12
/* 80008EB4 00005DF4  4E 80 04 21 */	bctrl 
.L_80008EB8:
/* 80008EB8 00005DF8  80 01 00 44 */	lwz r0, 0x44(r1)
/* 80008EBC 00005DFC  CB E1 00 38 */	lfd f31, 0x38(r1)
/* 80008EC0 00005E00  83 E1 00 34 */	lwz r31, 0x34(r1)
/* 80008EC4 00005E04  83 C1 00 30 */	lwz r30, 0x30(r1)
/* 80008EC8 00005E08  83 A1 00 2C */	lwz r29, 0x2c(r1)
/* 80008ECC 00005E0C  7C 08 03 A6 */	mtlr r0
/* 80008ED0 00005E10  38 21 00 40 */	addi r1, r1, 0x40
/* 80008ED4 00005E14  4E 80 00 20 */	blr 
.endfn "composite_index__Q27JStudio24TFunctionValue_compositeFRCQ27JGadget44TVector_pointer<PQ27JStudio14TFunctionValue>RCQ37JStudio24TFunctionValue_composite5TDatad"

.fn "composite_parameter__Q27JStudio24TFunctionValue_compositeFRCQ27JGadget44TVector_pointer<PQ27JStudio14TFunctionValue>RCQ37JStudio24TFunctionValue_composite5TDatad", global
/* 80008ED8 00005E18  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80008EDC 00005E1C  7C 08 02 A6 */	mflr r0
/* 80008EE0 00005E20  C8 04 00 00 */	lfd f0, 0(r4)
/* 80008EE4 00005E24  90 01 00 14 */	stw r0, 0x14(r1)
/* 80008EE8 00005E28  80 83 00 08 */	lwz r4, 8(r3)
/* 80008EEC 00005E2C  FC 21 00 28 */	fsub f1, f1, f0
/* 80008EF0 00005E30  80 03 00 04 */	lwz r0, 4(r3)
/* 80008EF4 00005E34  90 81 00 0C */	stw r4, 0xc(r1)
/* 80008EF8 00005E38  90 01 00 08 */	stw r0, 8(r1)
/* 80008EFC 00005E3C  48 00 00 24 */	b .L_80008F20
.L_80008F00:
/* 80008F00 00005E40  80 81 00 08 */	lwz r4, 8(r1)
/* 80008F04 00005E44  80 64 00 00 */	lwz r3, 0(r4)
/* 80008F08 00005E48  38 04 00 04 */	addi r0, r4, 4
/* 80008F0C 00005E4C  90 01 00 08 */	stw r0, 8(r1)
/* 80008F10 00005E50  81 83 00 00 */	lwz r12, 0(r3)
/* 80008F14 00005E54  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80008F18 00005E58  7D 89 03 A6 */	mtctr r12
/* 80008F1C 00005E5C  4E 80 04 21 */	bctrl 
.L_80008F20:
/* 80008F20 00005E60  80 61 00 08 */	lwz r3, 8(r1)
/* 80008F24 00005E64  80 01 00 0C */	lwz r0, 0xc(r1)
/* 80008F28 00005E68  7C 03 00 40 */	cmplw r3, r0
/* 80008F2C 00005E6C  40 82 FF D4 */	bne .L_80008F00
/* 80008F30 00005E70  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80008F34 00005E74  7C 08 03 A6 */	mtlr r0
/* 80008F38 00005E78  38 21 00 10 */	addi r1, r1, 0x10
/* 80008F3C 00005E7C  4E 80 00 20 */	blr 
.endfn "composite_parameter__Q27JStudio24TFunctionValue_compositeFRCQ27JGadget44TVector_pointer<PQ27JStudio14TFunctionValue>RCQ37JStudio24TFunctionValue_composite5TDatad"

.fn "composite_add__Q27JStudio24TFunctionValue_compositeFRCQ27JGadget44TVector_pointer<PQ27JStudio14TFunctionValue>RCQ37JStudio24TFunctionValue_composite5TDatad", global
/* 80008F40 00005E80  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80008F44 00005E84  7C 08 02 A6 */	mflr r0
/* 80008F48 00005E88  80 A3 00 08 */	lwz r5, 8(r3)
/* 80008F4C 00005E8C  90 01 00 24 */	stw r0, 0x24(r1)
/* 80008F50 00005E90  80 03 00 04 */	lwz r0, 4(r3)
/* 80008F54 00005E94  DB E1 00 18 */	stfd f31, 0x18(r1)
/* 80008F58 00005E98  CB E4 00 00 */	lfd f31, 0(r4)
/* 80008F5C 00005E9C  DB C1 00 10 */	stfd f30, 0x10(r1)
/* 80008F60 00005EA0  FF C0 08 90 */	fmr f30, f1
/* 80008F64 00005EA4  90 A1 00 0C */	stw r5, 0xc(r1)
/* 80008F68 00005EA8  90 01 00 08 */	stw r0, 8(r1)
/* 80008F6C 00005EAC  48 00 00 2C */	b .L_80008F98
.L_80008F70:
/* 80008F70 00005EB0  80 81 00 08 */	lwz r4, 8(r1)
/* 80008F74 00005EB4  FC 20 F0 90 */	fmr f1, f30
/* 80008F78 00005EB8  80 64 00 00 */	lwz r3, 0(r4)
/* 80008F7C 00005EBC  38 04 00 04 */	addi r0, r4, 4
/* 80008F80 00005EC0  90 01 00 08 */	stw r0, 8(r1)
/* 80008F84 00005EC4  81 83 00 00 */	lwz r12, 0(r3)
/* 80008F88 00005EC8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80008F8C 00005ECC  7D 89 03 A6 */	mtctr r12
/* 80008F90 00005ED0  4E 80 04 21 */	bctrl 
/* 80008F94 00005ED4  FF FF 08 2A */	fadd f31, f31, f1
.L_80008F98:
/* 80008F98 00005ED8  80 61 00 08 */	lwz r3, 8(r1)
/* 80008F9C 00005EDC  80 01 00 0C */	lwz r0, 0xc(r1)
/* 80008FA0 00005EE0  7C 03 00 40 */	cmplw r3, r0
/* 80008FA4 00005EE4  40 82 FF CC */	bne .L_80008F70
/* 80008FA8 00005EE8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80008FAC 00005EEC  FC 20 F8 90 */	fmr f1, f31
/* 80008FB0 00005EF0  CB E1 00 18 */	lfd f31, 0x18(r1)
/* 80008FB4 00005EF4  CB C1 00 10 */	lfd f30, 0x10(r1)
/* 80008FB8 00005EF8  7C 08 03 A6 */	mtlr r0
/* 80008FBC 00005EFC  38 21 00 20 */	addi r1, r1, 0x20
/* 80008FC0 00005F00  4E 80 00 20 */	blr 
.endfn "composite_add__Q27JStudio24TFunctionValue_compositeFRCQ27JGadget44TVector_pointer<PQ27JStudio14TFunctionValue>RCQ37JStudio24TFunctionValue_composite5TDatad"

.fn "composite_subtract__Q27JStudio24TFunctionValue_compositeFRCQ27JGadget44TVector_pointer<PQ27JStudio14TFunctionValue>RCQ37JStudio24TFunctionValue_composite5TDatad", global
/* 80008FC4 00005F04  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80008FC8 00005F08  7C 08 02 A6 */	mflr r0
/* 80008FCC 00005F0C  80 A3 00 04 */	lwz r5, 4(r3)
/* 80008FD0 00005F10  90 01 00 34 */	stw r0, 0x34(r1)
/* 80008FD4 00005F14  28 05 00 00 */	cmplwi r5, 0
/* 80008FD8 00005F18  DB E1 00 28 */	stfd f31, 0x28(r1)
/* 80008FDC 00005F1C  DB C1 00 20 */	stfd f30, 0x20(r1)
/* 80008FE0 00005F20  FF C0 08 90 */	fmr f30, f1
/* 80008FE4 00005F24  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80008FE8 00005F28  7C 9F 23 78 */	mr r31, r4
/* 80008FEC 00005F2C  40 82 00 0C */	bne .L_80008FF8
/* 80008FF0 00005F30  38 00 00 00 */	li r0, 0
/* 80008FF4 00005F34  48 00 00 14 */	b .L_80009008
.L_80008FF8:
/* 80008FF8 00005F38  80 03 00 08 */	lwz r0, 8(r3)
/* 80008FFC 00005F3C  7C 05 00 50 */	subf r0, r5, r0
/* 80009000 00005F40  7C 00 16 70 */	srawi r0, r0, 2
/* 80009004 00005F44  7C 00 01 94 */	addze r0, r0
.L_80009008:
/* 80009008 00005F48  28 00 00 00 */	cmplwi r0, 0
/* 8000900C 00005F4C  40 82 00 0C */	bne .L_80009018
/* 80009010 00005F50  C8 22 80 40 */	lfd f1, lbl_805163A0@sda21(r2)
/* 80009014 00005F54  48 00 00 7C */	b .L_80009090
.L_80009018:
/* 80009018 00005F58  80 83 00 08 */	lwz r4, 8(r3)
/* 8000901C 00005F5C  FC 20 F0 90 */	fmr f1, f30
/* 80009020 00005F60  80 65 00 00 */	lwz r3, 0(r5)
/* 80009024 00005F64  38 05 00 04 */	addi r0, r5, 4
/* 80009028 00005F68  90 A1 00 08 */	stw r5, 8(r1)
/* 8000902C 00005F6C  81 83 00 00 */	lwz r12, 0(r3)
/* 80009030 00005F70  90 81 00 0C */	stw r4, 0xc(r1)
/* 80009034 00005F74  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80009038 00005F78  90 01 00 08 */	stw r0, 8(r1)
/* 8000903C 00005F7C  7D 89 03 A6 */	mtctr r12
/* 80009040 00005F80  4E 80 04 21 */	bctrl 
/* 80009044 00005F84  FF E0 08 90 */	fmr f31, f1
/* 80009048 00005F88  48 00 00 2C */	b .L_80009074
.L_8000904C:
/* 8000904C 00005F8C  80 81 00 08 */	lwz r4, 8(r1)
/* 80009050 00005F90  FC 20 F0 90 */	fmr f1, f30
/* 80009054 00005F94  80 64 00 00 */	lwz r3, 0(r4)
/* 80009058 00005F98  38 04 00 04 */	addi r0, r4, 4
/* 8000905C 00005F9C  90 01 00 08 */	stw r0, 8(r1)
/* 80009060 00005FA0  81 83 00 00 */	lwz r12, 0(r3)
/* 80009064 00005FA4  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80009068 00005FA8  7D 89 03 A6 */	mtctr r12
/* 8000906C 00005FAC  4E 80 04 21 */	bctrl 
/* 80009070 00005FB0  FF FF 08 28 */	fsub f31, f31, f1
.L_80009074:
/* 80009074 00005FB4  80 61 00 08 */	lwz r3, 8(r1)
/* 80009078 00005FB8  80 01 00 0C */	lwz r0, 0xc(r1)
/* 8000907C 00005FBC  7C 03 00 40 */	cmplw r3, r0
/* 80009080 00005FC0  40 82 FF CC */	bne .L_8000904C
/* 80009084 00005FC4  C8 1F 00 00 */	lfd f0, 0(r31)
/* 80009088 00005FC8  FF FF 00 28 */	fsub f31, f31, f0
/* 8000908C 00005FCC  FC 20 F8 90 */	fmr f1, f31
.L_80009090:
/* 80009090 00005FD0  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80009094 00005FD4  CB E1 00 28 */	lfd f31, 0x28(r1)
/* 80009098 00005FD8  CB C1 00 20 */	lfd f30, 0x20(r1)
/* 8000909C 00005FDC  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 800090A0 00005FE0  7C 08 03 A6 */	mtlr r0
/* 800090A4 00005FE4  38 21 00 30 */	addi r1, r1, 0x30
/* 800090A8 00005FE8  4E 80 00 20 */	blr 
.endfn "composite_subtract__Q27JStudio24TFunctionValue_compositeFRCQ27JGadget44TVector_pointer<PQ27JStudio14TFunctionValue>RCQ37JStudio24TFunctionValue_composite5TDatad"

.fn "composite_multiply__Q27JStudio24TFunctionValue_compositeFRCQ27JGadget44TVector_pointer<PQ27JStudio14TFunctionValue>RCQ37JStudio24TFunctionValue_composite5TDatad", global
/* 800090AC 00005FEC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 800090B0 00005FF0  7C 08 02 A6 */	mflr r0
/* 800090B4 00005FF4  80 A3 00 08 */	lwz r5, 8(r3)
/* 800090B8 00005FF8  90 01 00 24 */	stw r0, 0x24(r1)
/* 800090BC 00005FFC  80 03 00 04 */	lwz r0, 4(r3)
/* 800090C0 00006000  DB E1 00 18 */	stfd f31, 0x18(r1)
/* 800090C4 00006004  CB E4 00 00 */	lfd f31, 0(r4)
/* 800090C8 00006008  DB C1 00 10 */	stfd f30, 0x10(r1)
/* 800090CC 0000600C  FF C0 08 90 */	fmr f30, f1
/* 800090D0 00006010  90 A1 00 0C */	stw r5, 0xc(r1)
/* 800090D4 00006014  90 01 00 08 */	stw r0, 8(r1)
/* 800090D8 00006018  48 00 00 2C */	b .L_80009104
.L_800090DC:
/* 800090DC 0000601C  80 81 00 08 */	lwz r4, 8(r1)
/* 800090E0 00006020  FC 20 F0 90 */	fmr f1, f30
/* 800090E4 00006024  80 64 00 00 */	lwz r3, 0(r4)
/* 800090E8 00006028  38 04 00 04 */	addi r0, r4, 4
/* 800090EC 0000602C  90 01 00 08 */	stw r0, 8(r1)
/* 800090F0 00006030  81 83 00 00 */	lwz r12, 0(r3)
/* 800090F4 00006034  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 800090F8 00006038  7D 89 03 A6 */	mtctr r12
/* 800090FC 0000603C  4E 80 04 21 */	bctrl 
/* 80009100 00006040  FF FF 00 72 */	fmul f31, f31, f1
.L_80009104:
/* 80009104 00006044  80 61 00 08 */	lwz r3, 8(r1)
/* 80009108 00006048  80 01 00 0C */	lwz r0, 0xc(r1)
/* 8000910C 0000604C  7C 03 00 40 */	cmplw r3, r0
/* 80009110 00006050  40 82 FF CC */	bne .L_800090DC
/* 80009114 00006054  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80009118 00006058  FC 20 F8 90 */	fmr f1, f31
/* 8000911C 0000605C  CB E1 00 18 */	lfd f31, 0x18(r1)
/* 80009120 00006060  CB C1 00 10 */	lfd f30, 0x10(r1)
/* 80009124 00006064  7C 08 03 A6 */	mtlr r0
/* 80009128 00006068  38 21 00 20 */	addi r1, r1, 0x20
/* 8000912C 0000606C  4E 80 00 20 */	blr 
.endfn "composite_multiply__Q27JStudio24TFunctionValue_compositeFRCQ27JGadget44TVector_pointer<PQ27JStudio14TFunctionValue>RCQ37JStudio24TFunctionValue_composite5TDatad"

.fn "composite_divide__Q27JStudio24TFunctionValue_compositeFRCQ27JGadget44TVector_pointer<PQ27JStudio14TFunctionValue>RCQ37JStudio24TFunctionValue_composite5TDatad", global
/* 80009130 00006070  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80009134 00006074  7C 08 02 A6 */	mflr r0
/* 80009138 00006078  80 A3 00 04 */	lwz r5, 4(r3)
/* 8000913C 0000607C  90 01 00 34 */	stw r0, 0x34(r1)
/* 80009140 00006080  28 05 00 00 */	cmplwi r5, 0
/* 80009144 00006084  DB E1 00 28 */	stfd f31, 0x28(r1)
/* 80009148 00006088  DB C1 00 20 */	stfd f30, 0x20(r1)
/* 8000914C 0000608C  FF C0 08 90 */	fmr f30, f1
/* 80009150 00006090  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80009154 00006094  7C 9F 23 78 */	mr r31, r4
/* 80009158 00006098  40 82 00 0C */	bne .L_80009164
/* 8000915C 0000609C  38 00 00 00 */	li r0, 0
/* 80009160 000060A0  48 00 00 14 */	b .L_80009174
.L_80009164:
/* 80009164 000060A4  80 03 00 08 */	lwz r0, 8(r3)
/* 80009168 000060A8  7C 05 00 50 */	subf r0, r5, r0
/* 8000916C 000060AC  7C 00 16 70 */	srawi r0, r0, 2
/* 80009170 000060B0  7C 00 01 94 */	addze r0, r0
.L_80009174:
/* 80009174 000060B4  28 00 00 00 */	cmplwi r0, 0
/* 80009178 000060B8  40 82 00 0C */	bne .L_80009184
/* 8000917C 000060BC  C8 22 80 40 */	lfd f1, lbl_805163A0@sda21(r2)
/* 80009180 000060C0  48 00 00 7C */	b .L_800091FC
.L_80009184:
/* 80009184 000060C4  80 83 00 08 */	lwz r4, 8(r3)
/* 80009188 000060C8  FC 20 F0 90 */	fmr f1, f30
/* 8000918C 000060CC  80 65 00 00 */	lwz r3, 0(r5)
/* 80009190 000060D0  38 05 00 04 */	addi r0, r5, 4
/* 80009194 000060D4  90 A1 00 08 */	stw r5, 8(r1)
/* 80009198 000060D8  81 83 00 00 */	lwz r12, 0(r3)
/* 8000919C 000060DC  90 81 00 0C */	stw r4, 0xc(r1)
/* 800091A0 000060E0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 800091A4 000060E4  90 01 00 08 */	stw r0, 8(r1)
/* 800091A8 000060E8  7D 89 03 A6 */	mtctr r12
/* 800091AC 000060EC  4E 80 04 21 */	bctrl 
/* 800091B0 000060F0  FF E0 08 90 */	fmr f31, f1
/* 800091B4 000060F4  48 00 00 2C */	b .L_800091E0
.L_800091B8:
/* 800091B8 000060F8  80 81 00 08 */	lwz r4, 8(r1)
/* 800091BC 000060FC  FC 20 F0 90 */	fmr f1, f30
/* 800091C0 00006100  80 64 00 00 */	lwz r3, 0(r4)
/* 800091C4 00006104  38 04 00 04 */	addi r0, r4, 4
/* 800091C8 00006108  90 01 00 08 */	stw r0, 8(r1)
/* 800091CC 0000610C  81 83 00 00 */	lwz r12, 0(r3)
/* 800091D0 00006110  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 800091D4 00006114  7D 89 03 A6 */	mtctr r12
/* 800091D8 00006118  4E 80 04 21 */	bctrl 
/* 800091DC 0000611C  FF FF 08 24 */	fdiv f31, f31, f1
.L_800091E0:
/* 800091E0 00006120  80 61 00 08 */	lwz r3, 8(r1)
/* 800091E4 00006124  80 01 00 0C */	lwz r0, 0xc(r1)
/* 800091E8 00006128  7C 03 00 40 */	cmplw r3, r0
/* 800091EC 0000612C  40 82 FF CC */	bne .L_800091B8
/* 800091F0 00006130  C8 1F 00 00 */	lfd f0, 0(r31)
/* 800091F4 00006134  FF FF 00 24 */	fdiv f31, f31, f0
/* 800091F8 00006138  FC 20 F8 90 */	fmr f1, f31
.L_800091FC:
/* 800091FC 0000613C  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80009200 00006140  CB E1 00 28 */	lfd f31, 0x28(r1)
/* 80009204 00006144  CB C1 00 20 */	lfd f30, 0x20(r1)
/* 80009208 00006148  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8000920C 0000614C  7C 08 03 A6 */	mtlr r0
/* 80009210 00006150  38 21 00 30 */	addi r1, r1, 0x30
/* 80009214 00006154  4E 80 00 20 */	blr 
.endfn "composite_divide__Q27JStudio24TFunctionValue_compositeFRCQ27JGadget44TVector_pointer<PQ27JStudio14TFunctionValue>RCQ37JStudio24TFunctionValue_composite5TDatad"

.fn __ct__Q27JStudio23TFunctionValue_constantFv, global
/* 80009218 00006158  3C C0 80 4A */	lis r6, __vt__Q27JStudio14TFunctionValue@ha
/* 8000921C 0000615C  3C A0 80 4A */	lis r5, __vt__Q27JStudio23TFunctionValue_constant@ha
/* 80009220 00006160  38 C6 E5 28 */	addi r6, r6, __vt__Q27JStudio14TFunctionValue@l
/* 80009224 00006164  3C 80 80 51 */	lis r4, __float_nan@ha
/* 80009228 00006168  90 C3 00 00 */	stw r6, 0(r3)
/* 8000922C 0000616C  38 05 E4 E8 */	addi r0, r5, __vt__Q27JStudio23TFunctionValue_constant@l
/* 80009230 00006170  90 03 00 00 */	stw r0, 0(r3)
/* 80009234 00006174  C0 04 48 B0 */	lfs f0, __float_nan@l(r4)
/* 80009238 00006178  D8 03 00 08 */	stfd f0, 8(r3)
/* 8000923C 0000617C  4E 80 00 20 */	blr 
.endfn __ct__Q27JStudio23TFunctionValue_constantFv

.fn getType__Q27JStudio23TFunctionValue_constantCFv, global
/* 80009240 00006180  38 60 00 02 */	li r3, 2
/* 80009244 00006184  4E 80 00 20 */	blr 
.endfn getType__Q27JStudio23TFunctionValue_constantCFv

.fn getAttributeSet__Q27JStudio23TFunctionValue_constantFv, global
/* 80009248 00006188  38 00 00 00 */	li r0, 0
/* 8000924C 0000618C  90 03 00 00 */	stw r0, 0(r3)
/* 80009250 00006190  90 03 00 04 */	stw r0, 4(r3)
/* 80009254 00006194  90 03 00 08 */	stw r0, 8(r3)
/* 80009258 00006198  4E 80 00 20 */	blr 
.endfn getAttributeSet__Q27JStudio23TFunctionValue_constantFv

.fn initialize__Q27JStudio23TFunctionValue_constantFv, global
/* 8000925C 0000619C  3C 80 80 51 */	lis r4, __float_nan@ha
/* 80009260 000061A0  C0 04 48 B0 */	lfs f0, __float_nan@l(r4)
/* 80009264 000061A4  D8 03 00 08 */	stfd f0, 8(r3)
/* 80009268 000061A8  4E 80 00 20 */	blr 
.endfn initialize__Q27JStudio23TFunctionValue_constantFv

.fn prepare__Q27JStudio23TFunctionValue_constantFv, global
/* 8000926C 000061AC  4E 80 00 20 */	blr 
.endfn prepare__Q27JStudio23TFunctionValue_constantFv

.fn getValue__Q27JStudio23TFunctionValue_constantFd, global
/* 80009270 000061B0  C8 23 00 08 */	lfd f1, 8(r3)
/* 80009274 000061B4  4E 80 00 20 */	blr 
.endfn getValue__Q27JStudio23TFunctionValue_constantFd

.fn __ct__Q27JStudio25TFunctionValue_transitionFv, global
/* 80009278 000061B8  3C C0 80 4A */	lis r6, __vt__Q27JStudio14TFunctionValue@ha
/* 8000927C 000061BC  3C A0 80 51 */	lis r5, __float_nan@ha
/* 80009280 000061C0  38 06 E5 28 */	addi r0, r6, __vt__Q27JStudio14TFunctionValue@l
/* 80009284 000061C4  3C 80 80 4A */	lis r4, __vt__Q27JStudio25TFunctionValue_transition@ha
/* 80009288 000061C8  90 03 00 00 */	stw r0, 0(r3)
/* 8000928C 000061CC  38 C5 48 B0 */	addi r6, r5, __float_nan@l
/* 80009290 000061D0  38 A0 00 00 */	li r5, 0
/* 80009294 000061D4  38 04 E4 C8 */	addi r0, r4, __vt__Q27JStudio25TFunctionValue_transition@l
/* 80009298 000061D8  C0 06 00 00 */	lfs f0, 0(r6)
/* 8000929C 000061DC  D8 03 00 08 */	stfd f0, 8(r3)
/* 800092A0 000061E0  C8 03 00 08 */	lfd f0, 8(r3)
/* 800092A4 000061E4  D8 03 00 10 */	stfd f0, 0x10(r3)
/* 800092A8 000061E8  C8 03 00 08 */	lfd f0, 8(r3)
/* 800092AC 000061EC  D8 03 00 18 */	stfd f0, 0x18(r3)
/* 800092B0 000061F0  98 A3 00 20 */	stb r5, 0x20(r3)
/* 800092B4 000061F4  98 A3 00 21 */	stb r5, 0x21(r3)
/* 800092B8 000061F8  C8 03 00 08 */	lfd f0, 8(r3)
/* 800092BC 000061FC  D8 03 00 28 */	stfd f0, 0x28(r3)
/* 800092C0 00006200  C8 03 00 08 */	lfd f0, 8(r3)
/* 800092C4 00006204  D8 03 00 30 */	stfd f0, 0x30(r3)
/* 800092C8 00006208  90 A3 00 38 */	stw r5, 0x38(r3)
/* 800092CC 0000620C  90 A3 00 3C */	stw r5, 0x3c(r3)
/* 800092D0 00006210  90 A3 00 40 */	stw r5, 0x40(r3)
/* 800092D4 00006214  90 03 00 00 */	stw r0, 0(r3)
/* 800092D8 00006218  C0 06 00 00 */	lfs f0, 0(r6)
/* 800092DC 0000621C  D8 03 00 48 */	stfd f0, 0x48(r3)
/* 800092E0 00006220  C8 03 00 48 */	lfd f0, 0x48(r3)
/* 800092E4 00006224  D8 03 00 50 */	stfd f0, 0x50(r3)
/* 800092E8 00006228  4E 80 00 20 */	blr 
.endfn __ct__Q27JStudio25TFunctionValue_transitionFv

.fn getType__Q27JStudio25TFunctionValue_transitionCFv, global
/* 800092EC 0000622C  38 60 00 03 */	li r3, 3
/* 800092F0 00006230  4E 80 00 20 */	blr 
.endfn getType__Q27JStudio25TFunctionValue_transitionCFv

.fn getAttributeSet__Q27JStudio25TFunctionValue_transitionFv, global
/* 800092F4 00006234  28 04 00 00 */	cmplwi r4, 0
/* 800092F8 00006238  7C 85 23 78 */	mr r5, r4
/* 800092FC 0000623C  41 82 00 08 */	beq .L_80009304
/* 80009300 00006240  38 A5 00 40 */	addi r5, r5, 0x40
.L_80009304:
/* 80009304 00006244  28 04 00 00 */	cmplwi r4, 0
/* 80009308 00006248  41 82 00 08 */	beq .L_80009310
/* 8000930C 0000624C  38 84 00 08 */	addi r4, r4, 8
.L_80009310:
/* 80009310 00006250  38 00 00 00 */	li r0, 0
/* 80009314 00006254  90 03 00 00 */	stw r0, 0(r3)
/* 80009318 00006258  90 83 00 04 */	stw r4, 4(r3)
/* 8000931C 0000625C  90 A3 00 08 */	stw r5, 8(r3)
/* 80009320 00006260  4E 80 00 20 */	blr 
.endfn getAttributeSet__Q27JStudio25TFunctionValue_transitionFv

.fn initialize__Q27JStudio25TFunctionValue_transitionFv, global
/* 80009324 00006264  3C 80 80 51 */	lis r4, __float_nan@ha
/* 80009328 00006268  C4 04 48 B0 */	lfsu f0, __float_nan@l(r4)
/* 8000932C 0000626C  38 00 00 00 */	li r0, 0
/* 80009330 00006270  D8 03 00 08 */	stfd f0, 8(r3)
/* 80009334 00006274  C8 03 00 08 */	lfd f0, 8(r3)
/* 80009338 00006278  D8 03 00 10 */	stfd f0, 0x10(r3)
/* 8000933C 0000627C  C8 03 00 08 */	lfd f0, 8(r3)
/* 80009340 00006280  D8 03 00 18 */	stfd f0, 0x18(r3)
/* 80009344 00006284  98 03 00 20 */	stb r0, 0x20(r3)
/* 80009348 00006288  98 03 00 21 */	stb r0, 0x21(r3)
/* 8000934C 0000628C  90 03 00 38 */	stw r0, 0x38(r3)
/* 80009350 00006290  90 03 00 3C */	stw r0, 0x3c(r3)
/* 80009354 00006294  90 03 00 40 */	stw r0, 0x40(r3)
/* 80009358 00006298  C0 04 00 00 */	lfs f0, 0(r4)
/* 8000935C 0000629C  D8 03 00 48 */	stfd f0, 0x48(r3)
/* 80009360 000062A0  C8 03 00 48 */	lfd f0, 0x48(r3)
/* 80009364 000062A4  D8 03 00 50 */	stfd f0, 0x50(r3)
/* 80009368 000062A8  4E 80 00 20 */	blr 
.endfn initialize__Q27JStudio25TFunctionValue_transitionFv

.fn prepare__Q27JStudio25TFunctionValue_transitionFv, global
/* 8000936C 000062AC  88 03 00 20 */	lbz r0, 0x20(r3)
/* 80009370 000062B0  7C 00 07 74 */	extsb r0, r0
/* 80009374 000062B4  2C 00 00 02 */	cmpwi r0, 2
/* 80009378 000062B8  41 82 00 50 */	beq .L_800093C8
/* 8000937C 000062BC  40 80 00 14 */	bge .L_80009390
/* 80009380 000062C0  2C 00 00 00 */	cmpwi r0, 0
/* 80009384 000062C4  41 82 00 1C */	beq .L_800093A0
/* 80009388 000062C8  40 80 00 2C */	bge .L_800093B4
/* 8000938C 000062CC  48 00 00 14 */	b .L_800093A0
.L_80009390:
/* 80009390 000062D0  2C 00 00 04 */	cmpwi r0, 4
/* 80009394 000062D4  41 82 00 5C */	beq .L_800093F0
/* 80009398 000062D8  40 80 00 08 */	bge .L_800093A0
/* 8000939C 000062DC  48 00 00 40 */	b .L_800093DC
.L_800093A0:
/* 800093A0 000062E0  C8 22 80 40 */	lfd f1, lbl_805163A0@sda21(r2)
/* 800093A4 000062E4  C8 02 80 48 */	lfd f0, lbl_805163A8@sda21(r2)
/* 800093A8 000062E8  D8 23 00 28 */	stfd f1, 0x28(r3)
/* 800093AC 000062EC  D8 03 00 30 */	stfd f0, 0x30(r3)
/* 800093B0 000062F0  4E 80 00 20 */	blr 
.L_800093B4:
/* 800093B4 000062F4  C8 22 80 40 */	lfd f1, lbl_805163A0@sda21(r2)
/* 800093B8 000062F8  C8 02 80 80 */	lfd f0, lbl_805163E0@sda21(r2)
/* 800093BC 000062FC  D8 23 00 28 */	stfd f1, 0x28(r3)
/* 800093C0 00006300  D8 03 00 30 */	stfd f0, 0x30(r3)
/* 800093C4 00006304  4E 80 00 20 */	blr 
.L_800093C8:
/* 800093C8 00006308  C8 23 00 08 */	lfd f1, 8(r3)
/* 800093CC 0000630C  C8 02 80 80 */	lfd f0, lbl_805163E0@sda21(r2)
/* 800093D0 00006310  D8 23 00 28 */	stfd f1, 0x28(r3)
/* 800093D4 00006314  D8 03 00 30 */	stfd f0, 0x30(r3)
/* 800093D8 00006318  4E 80 00 20 */	blr 
.L_800093DC:
/* 800093DC 0000631C  C8 23 00 10 */	lfd f1, 0x10(r3)
/* 800093E0 00006320  C8 02 80 80 */	lfd f0, lbl_805163E0@sda21(r2)
/* 800093E4 00006324  D8 23 00 28 */	stfd f1, 0x28(r3)
/* 800093E8 00006328  D8 03 00 30 */	stfd f0, 0x30(r3)
/* 800093EC 0000632C  4E 80 00 20 */	blr 
.L_800093F0:
/* 800093F0 00006330  C8 23 00 08 */	lfd f1, 8(r3)
/* 800093F4 00006334  C8 03 00 10 */	lfd f0, 0x10(r3)
/* 800093F8 00006338  C8 42 80 68 */	lfd f2, lbl_805163C8@sda21(r2)
/* 800093FC 0000633C  FC 21 00 2A */	fadd f1, f1, f0
/* 80009400 00006340  C8 02 80 80 */	lfd f0, lbl_805163E0@sda21(r2)
/* 80009404 00006344  FC 22 00 72 */	fmul f1, f2, f1
/* 80009408 00006348  D8 23 00 28 */	stfd f1, 0x28(r3)
/* 8000940C 0000634C  D8 03 00 30 */	stfd f0, 0x30(r3)
/* 80009410 00006350  4E 80 00 20 */	blr 
.endfn prepare__Q27JStudio25TFunctionValue_transitionFv

.fn getValue__Q27JStudio25TFunctionValue_transitionFd, global
/* 80009414 00006354  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80009418 00006358  7C 08 02 A6 */	mflr r0
/* 8000941C 0000635C  C8 02 80 40 */	lfd f0, lbl_805163A0@sda21(r2)
/* 80009420 00006360  90 01 00 24 */	stw r0, 0x24(r1)
/* 80009424 00006364  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80009428 00006368  7C 7F 1B 78 */	mr r31, r3
/* 8000942C 0000636C  C8 83 00 28 */	lfd f4, 0x28(r3)
/* 80009430 00006370  C8 63 00 30 */	lfd f3, 0x30(r3)
/* 80009434 00006374  FC 41 20 28 */	fsub f2, f1, f4
/* 80009438 00006378  C8 23 00 08 */	lfd f1, 8(r3)
/* 8000943C 0000637C  FC 43 20 BA */	fmadd f2, f3, f2, f4
/* 80009440 00006380  FC 22 08 28 */	fsub f1, f2, f1
/* 80009444 00006384  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80009448 00006388  40 80 00 50 */	bge .L_80009498
/* 8000944C 0000638C  80 9F 00 38 */	lwz r4, 0x38(r31)
/* 80009450 00006390  38 00 00 00 */	li r0, 0
/* 80009454 00006394  3C 60 80 47 */	lis r3, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@ha
/* 80009458 00006398  28 04 00 04 */	cmplwi r4, 4
/* 8000945C 0000639C  90 01 00 0C */	stw r0, 0xc(r1)
/* 80009460 000063A0  54 84 10 3A */	slwi r4, r4, 2
/* 80009464 000063A4  38 03 32 F0 */	addi r0, r3, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@l
/* 80009468 000063A8  7C 60 22 14 */	add r3, r0, r4
/* 8000946C 000063AC  41 80 00 08 */	blt .L_80009474
/* 80009470 000063B0  38 61 00 0C */	addi r3, r1, 0xc
.L_80009474:
/* 80009474 000063B4  81 83 00 00 */	lwz r12, 0(r3)
/* 80009478 000063B8  28 0C 00 00 */	cmplwi r12, 0
/* 8000947C 000063BC  40 82 00 0C */	bne .L_80009488
/* 80009480 000063C0  3C 60 80 47 */	lis r3, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@ha
/* 80009484 000063C4  81 83 32 F0 */	lwz r12, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@l(r3)
.L_80009488:
/* 80009488 000063C8  C8 5F 00 18 */	lfd f2, 0x18(r31)
/* 8000948C 000063CC  7D 89 03 A6 */	mtctr r12
/* 80009490 000063D0  4E 80 04 21 */	bctrl 
/* 80009494 000063D4  48 00 00 5C */	b .L_800094F0
.L_80009498:
/* 80009498 000063D8  C8 1F 00 18 */	lfd f0, 0x18(r31)
/* 8000949C 000063DC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 800094A0 000063E0  4C 41 13 82 */	cror 2, 1, 2
/* 800094A4 000063E4  40 82 00 4C */	bne .L_800094F0
/* 800094A8 000063E8  80 9F 00 3C */	lwz r4, 0x3c(r31)
/* 800094AC 000063EC  38 00 00 00 */	li r0, 0
/* 800094B0 000063F0  3C 60 80 47 */	lis r3, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@ha
/* 800094B4 000063F4  28 04 00 04 */	cmplwi r4, 4
/* 800094B8 000063F8  90 01 00 08 */	stw r0, 8(r1)
/* 800094BC 000063FC  54 84 10 3A */	slwi r4, r4, 2
/* 800094C0 00006400  38 03 32 F0 */	addi r0, r3, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@l
/* 800094C4 00006404  7C 60 22 14 */	add r3, r0, r4
/* 800094C8 00006408  41 80 00 08 */	blt .L_800094D0
/* 800094CC 0000640C  38 61 00 08 */	addi r3, r1, 8
.L_800094D0:
/* 800094D0 00006410  81 83 00 00 */	lwz r12, 0(r3)
/* 800094D4 00006414  28 0C 00 00 */	cmplwi r12, 0
/* 800094D8 00006418  40 82 00 0C */	bne .L_800094E4
/* 800094DC 0000641C  3C 60 80 47 */	lis r3, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@ha
/* 800094E0 00006420  81 83 32 F0 */	lwz r12, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@l(r3)
.L_800094E4:
/* 800094E4 00006424  C8 5F 00 18 */	lfd f2, 0x18(r31)
/* 800094E8 00006428  7D 89 03 A6 */	mtctr r12
/* 800094EC 0000642C  4E 80 04 21 */	bctrl 
.L_800094F0:
/* 800094F0 00006430  88 1F 00 21 */	lbz r0, 0x21(r31)
/* 800094F4 00006434  C8 7F 00 08 */	lfd f3, 8(r31)
/* 800094F8 00006438  7C 00 07 74 */	extsb r0, r0
/* 800094FC 0000643C  2C 00 00 03 */	cmpwi r0, 3
/* 80009500 00006440  FC 21 18 2A */	fadd f1, f1, f3
/* 80009504 00006444  41 82 00 54 */	beq .L_80009558
/* 80009508 00006448  40 80 00 10 */	bge .L_80009518
/* 8000950C 0000644C  2C 00 00 02 */	cmpwi r0, 2
/* 80009510 00006450  40 80 00 2C */	bge .L_8000953C
/* 80009514 00006454  48 00 00 10 */	b .L_80009524
.L_80009518:
/* 80009518 00006458  2C 00 00 05 */	cmpwi r0, 5
/* 8000951C 0000645C  40 80 00 08 */	bge .L_80009524
/* 80009520 00006460  48 00 00 60 */	b .L_80009580
.L_80009524:
/* 80009524 00006464  FC 01 18 40 */	fcmpo cr0, f1, f3
/* 80009528 00006468  40 80 00 0C */	bge .L_80009534
/* 8000952C 0000646C  C8 3F 00 48 */	lfd f1, 0x48(r31)
/* 80009530 00006470  48 00 01 20 */	b .L_80009650
.L_80009534:
/* 80009534 00006474  C8 3F 00 50 */	lfd f1, 0x50(r31)
/* 80009538 00006478  48 00 01 18 */	b .L_80009650
.L_8000953C:
/* 8000953C 0000647C  C8 1F 00 10 */	lfd f0, 0x10(r31)
/* 80009540 00006480  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80009544 00006484  40 80 00 0C */	bge .L_80009550
/* 80009548 00006488  C8 3F 00 48 */	lfd f1, 0x48(r31)
/* 8000954C 0000648C  48 00 01 04 */	b .L_80009650
.L_80009550:
/* 80009550 00006490  C8 3F 00 50 */	lfd f1, 0x50(r31)
/* 80009554 00006494  48 00 00 FC */	b .L_80009650
.L_80009558:
/* 80009558 00006498  C8 1F 00 10 */	lfd f0, 0x10(r31)
/* 8000955C 0000649C  C8 42 80 68 */	lfd f2, lbl_805163C8@sda21(r2)
/* 80009560 000064A0  FC 03 00 2A */	fadd f0, f3, f0
/* 80009564 000064A4  FC 02 00 32 */	fmul f0, f2, f0
/* 80009568 000064A8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8000956C 000064AC  40 80 00 0C */	bge .L_80009578
/* 80009570 000064B0  C8 3F 00 48 */	lfd f1, 0x48(r31)
/* 80009574 000064B4  48 00 00 DC */	b .L_80009650
.L_80009578:
/* 80009578 000064B8  C8 3F 00 50 */	lfd f1, 0x50(r31)
/* 8000957C 000064BC  48 00 00 D4 */	b .L_80009650
.L_80009580:
/* 80009580 000064C0  FC 01 18 40 */	fcmpo cr0, f1, f3
/* 80009584 000064C4  40 80 00 0C */	bge .L_80009590
/* 80009588 000064C8  C8 3F 00 48 */	lfd f1, 0x48(r31)
/* 8000958C 000064CC  48 00 00 C4 */	b .L_80009650
.L_80009590:
/* 80009590 000064D0  C8 1F 00 10 */	lfd f0, 0x10(r31)
/* 80009594 000064D4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80009598 000064D8  4C 41 13 82 */	cror 2, 1, 2
/* 8000959C 000064DC  40 82 00 0C */	bne .L_800095A8
/* 800095A0 000064E0  C8 3F 00 50 */	lfd f1, 0x50(r31)
/* 800095A4 000064E4  48 00 00 AC */	b .L_80009650
.L_800095A8:
/* 800095A8 000064E8  80 1F 00 40 */	lwz r0, 0x40(r31)
/* 800095AC 000064EC  2C 00 00 02 */	cmpwi r0, 2
/* 800095B0 000064F0  41 82 00 44 */	beq .L_800095F4
/* 800095B4 000064F4  40 80 00 14 */	bge .L_800095C8
/* 800095B8 000064F8  2C 00 00 00 */	cmpwi r0, 0
/* 800095BC 000064FC  41 82 FF 9C */	beq .L_80009558
/* 800095C0 00006500  40 80 00 10 */	bge .L_800095D0
/* 800095C4 00006504  4B FF FF 94 */	b .L_80009558
.L_800095C8:
/* 800095C8 00006508  2C 00 00 04 */	cmpwi r0, 4
/* 800095CC 0000650C  40 80 FF 8C */	bge .L_80009558
.L_800095D0:
/* 800095D0 00006510  C8 9F 00 48 */	lfd f4, 0x48(r31)
/* 800095D4 00006514  FC 41 18 28 */	fsub f2, f1, f3
/* 800095D8 00006518  C8 3F 00 50 */	lfd f1, 0x50(r31)
/* 800095DC 0000651C  C8 1F 00 18 */	lfd f0, 0x18(r31)
/* 800095E0 00006520  FC 21 20 28 */	fsub f1, f1, f4
/* 800095E4 00006524  FC 22 00 72 */	fmul f1, f2, f1
/* 800095E8 00006528  FC 01 00 24 */	fdiv f0, f1, f0
/* 800095EC 0000652C  FC 24 00 2A */	fadd f1, f4, f0
/* 800095F0 00006530  48 00 00 60 */	b .L_80009650
.L_800095F4:
/* 800095F4 00006534  FC 00 18 28 */	fsub f0, f0, f3
/* 800095F8 00006538  C8 C2 80 48 */	lfd f6, lbl_805163A8@sda21(r2)
/* 800095FC 0000653C  FD 01 18 28 */	fsub f8, f1, f3
/* 80009600 00006540  C8 62 80 58 */	lfd f3, lbl_805163B8@sda21(r2)
/* 80009604 00006544  C8 42 80 50 */	lfd f2, lbl_805163B0@sda21(r2)
/* 80009608 00006548  FC A6 00 24 */	fdiv f5, f6, f0
/* 8000960C 0000654C  C8 1F 00 50 */	lfd f0, 0x50(r31)
/* 80009610 00006550  C8 3F 00 48 */	lfd f1, 0x48(r31)
/* 80009614 00006554  C8 82 80 40 */	lfd f4, lbl_805163A0@sda21(r2)
/* 80009618 00006558  FC E8 01 72 */	fmul f7, f8, f5
/* 8000961C 0000655C  FC 63 11 FA */	fmadd f3, f3, f7, f2
/* 80009620 00006560  FC 47 01 F2 */	fmul f2, f7, f7
/* 80009624 00006564  FC A7 30 28 */	fsub f5, f7, f6
/* 80009628 00006568  FC 43 00 B2 */	fmul f2, f3, f2
/* 8000962C 0000656C  FC 65 01 72 */	fmul f3, f5, f5
/* 80009630 00006570  FC 02 00 32 */	fmul f0, f2, f0
/* 80009634 00006574  FC 46 10 28 */	fsub f2, f6, f2
/* 80009638 00006578  FC A5 02 32 */	fmul f5, f5, f8
/* 8000963C 0000657C  FC 68 00 F2 */	fmul f3, f8, f3
/* 80009640 00006580  FC 02 00 7A */	fmadd f0, f2, f1, f0
/* 80009644 00006584  FC 27 01 72 */	fmul f1, f7, f5
/* 80009648 00006588  FC 03 01 3A */	fmadd f0, f3, f4, f0
/* 8000964C 0000658C  FC 21 01 3A */	fmadd f1, f1, f4, f0
.L_80009650:
/* 80009650 00006590  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80009654 00006594  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80009658 00006598  7C 08 03 A6 */	mtlr r0
/* 8000965C 0000659C  38 21 00 20 */	addi r1, r1, 0x20
/* 80009660 000065A0  4E 80 00 20 */	blr 
.endfn getValue__Q27JStudio25TFunctionValue_transitionFd

.fn __ct__Q27JStudio19TFunctionValue_listFv, global
/* 80009664 000065A4  3C C0 80 4A */	lis r6, __vt__Q27JStudio14TFunctionValue@ha
/* 80009668 000065A8  3C A0 80 51 */	lis r5, __float_nan@ha
/* 8000966C 000065AC  38 06 E5 28 */	addi r0, r6, __vt__Q27JStudio14TFunctionValue@l
/* 80009670 000065B0  3C 80 80 4A */	lis r4, __vt__Q27JStudio19TFunctionValue_list@ha
/* 80009674 000065B4  90 03 00 00 */	stw r0, 0(r3)
/* 80009678 000065B8  38 C5 48 B0 */	addi r6, r5, __float_nan@l
/* 8000967C 000065BC  38 A0 00 00 */	li r5, 0
/* 80009680 000065C0  38 04 E4 A8 */	addi r0, r4, __vt__Q27JStudio19TFunctionValue_list@l
/* 80009684 000065C4  C0 06 00 00 */	lfs f0, 0(r6)
/* 80009688 000065C8  D8 03 00 08 */	stfd f0, 8(r3)
/* 8000968C 000065CC  C8 03 00 08 */	lfd f0, 8(r3)
/* 80009690 000065D0  D8 03 00 10 */	stfd f0, 0x10(r3)
/* 80009694 000065D4  C8 03 00 08 */	lfd f0, 8(r3)
/* 80009698 000065D8  D8 03 00 18 */	stfd f0, 0x18(r3)
/* 8000969C 000065DC  98 A3 00 20 */	stb r5, 0x20(r3)
/* 800096A0 000065E0  98 A3 00 21 */	stb r5, 0x21(r3)
/* 800096A4 000065E4  C8 03 00 08 */	lfd f0, 8(r3)
/* 800096A8 000065E8  D8 03 00 28 */	stfd f0, 0x28(r3)
/* 800096AC 000065EC  C8 03 00 08 */	lfd f0, 8(r3)
/* 800096B0 000065F0  D8 03 00 30 */	stfd f0, 0x30(r3)
/* 800096B4 000065F4  90 A3 00 38 */	stw r5, 0x38(r3)
/* 800096B8 000065F8  90 A3 00 3C */	stw r5, 0x3c(r3)
/* 800096BC 000065FC  90 A3 00 40 */	stw r5, 0x40(r3)
/* 800096C0 00006600  90 03 00 00 */	stw r0, 0(r3)
/* 800096C4 00006604  90 A3 00 44 */	stw r5, 0x44(r3)
/* 800096C8 00006608  90 A3 00 48 */	stw r5, 0x48(r3)
/* 800096CC 0000660C  C0 06 00 00 */	lfs f0, 0(r6)
/* 800096D0 00006610  D8 03 00 50 */	stfd f0, 0x50(r3)
/* 800096D4 00006614  90 A3 00 58 */	stw r5, 0x58(r3)
/* 800096D8 00006618  4E 80 00 20 */	blr 
.endfn __ct__Q27JStudio19TFunctionValue_listFv

.fn getType__Q27JStudio19TFunctionValue_listCFv, global
/* 800096DC 0000661C  38 60 00 04 */	li r3, 4
/* 800096E0 00006620  4E 80 00 20 */	blr 
.endfn getType__Q27JStudio19TFunctionValue_listCFv

.fn getAttributeSet__Q27JStudio19TFunctionValue_listFv, global
/* 800096E4 00006624  28 04 00 00 */	cmplwi r4, 0
/* 800096E8 00006628  7C 85 23 78 */	mr r5, r4
/* 800096EC 0000662C  41 82 00 08 */	beq .L_800096F4
/* 800096F0 00006630  38 A5 00 40 */	addi r5, r5, 0x40
.L_800096F4:
/* 800096F4 00006634  28 04 00 00 */	cmplwi r4, 0
/* 800096F8 00006638  41 82 00 08 */	beq .L_80009700
/* 800096FC 0000663C  38 84 00 08 */	addi r4, r4, 8
.L_80009700:
/* 80009700 00006640  38 00 00 00 */	li r0, 0
/* 80009704 00006644  90 03 00 00 */	stw r0, 0(r3)
/* 80009708 00006648  90 83 00 04 */	stw r4, 4(r3)
/* 8000970C 0000664C  90 A3 00 08 */	stw r5, 8(r3)
/* 80009710 00006650  4E 80 00 20 */	blr 
.endfn getAttributeSet__Q27JStudio19TFunctionValue_listFv

.fn initialize__Q27JStudio19TFunctionValue_listFv, global
/* 80009714 00006654  3C 80 80 51 */	lis r4, __float_nan@ha
/* 80009718 00006658  C4 04 48 B0 */	lfsu f0, __float_nan@l(r4)
/* 8000971C 0000665C  38 00 00 00 */	li r0, 0
/* 80009720 00006660  D8 03 00 08 */	stfd f0, 8(r3)
/* 80009724 00006664  C8 03 00 08 */	lfd f0, 8(r3)
/* 80009728 00006668  D8 03 00 10 */	stfd f0, 0x10(r3)
/* 8000972C 0000666C  C8 03 00 08 */	lfd f0, 8(r3)
/* 80009730 00006670  D8 03 00 18 */	stfd f0, 0x18(r3)
/* 80009734 00006674  98 03 00 20 */	stb r0, 0x20(r3)
/* 80009738 00006678  98 03 00 21 */	stb r0, 0x21(r3)
/* 8000973C 0000667C  90 03 00 38 */	stw r0, 0x38(r3)
/* 80009740 00006680  90 03 00 3C */	stw r0, 0x3c(r3)
/* 80009744 00006684  90 03 00 40 */	stw r0, 0x40(r3)
/* 80009748 00006688  90 03 00 44 */	stw r0, 0x44(r3)
/* 8000974C 0000668C  90 03 00 48 */	stw r0, 0x48(r3)
/* 80009750 00006690  C0 04 00 00 */	lfs f0, 0(r4)
/* 80009754 00006694  D8 03 00 50 */	stfd f0, 0x50(r3)
/* 80009758 00006698  90 03 00 58 */	stw r0, 0x58(r3)
/* 8000975C 0000669C  4E 80 00 20 */	blr 
.endfn initialize__Q27JStudio19TFunctionValue_listFv

.fn prepare__Q27JStudio19TFunctionValue_listFv, global
/* 80009760 000066A0  88 03 00 20 */	lbz r0, 0x20(r3)
/* 80009764 000066A4  7C 00 07 74 */	extsb r0, r0
/* 80009768 000066A8  2C 00 00 02 */	cmpwi r0, 2
/* 8000976C 000066AC  41 82 00 50 */	beq .L_800097BC
/* 80009770 000066B0  40 80 00 14 */	bge .L_80009784
/* 80009774 000066B4  2C 00 00 00 */	cmpwi r0, 0
/* 80009778 000066B8  41 82 00 1C */	beq .L_80009794
/* 8000977C 000066BC  40 80 00 2C */	bge .L_800097A8
/* 80009780 000066C0  48 00 00 14 */	b .L_80009794
.L_80009784:
/* 80009784 000066C4  2C 00 00 04 */	cmpwi r0, 4
/* 80009788 000066C8  41 82 00 5C */	beq .L_800097E4
/* 8000978C 000066CC  40 80 00 08 */	bge .L_80009794
/* 80009790 000066D0  48 00 00 40 */	b .L_800097D0
.L_80009794:
/* 80009794 000066D4  C8 22 80 40 */	lfd f1, lbl_805163A0@sda21(r2)
/* 80009798 000066D8  C8 02 80 48 */	lfd f0, lbl_805163A8@sda21(r2)
/* 8000979C 000066DC  D8 23 00 28 */	stfd f1, 0x28(r3)
/* 800097A0 000066E0  D8 03 00 30 */	stfd f0, 0x30(r3)
/* 800097A4 000066E4  48 00 00 60 */	b .L_80009804
.L_800097A8:
/* 800097A8 000066E8  C8 22 80 40 */	lfd f1, lbl_805163A0@sda21(r2)
/* 800097AC 000066EC  C8 02 80 80 */	lfd f0, lbl_805163E0@sda21(r2)
/* 800097B0 000066F0  D8 23 00 28 */	stfd f1, 0x28(r3)
/* 800097B4 000066F4  D8 03 00 30 */	stfd f0, 0x30(r3)
/* 800097B8 000066F8  48 00 00 4C */	b .L_80009804
.L_800097BC:
/* 800097BC 000066FC  C8 23 00 08 */	lfd f1, 8(r3)
/* 800097C0 00006700  C8 02 80 80 */	lfd f0, lbl_805163E0@sda21(r2)
/* 800097C4 00006704  D8 23 00 28 */	stfd f1, 0x28(r3)
/* 800097C8 00006708  D8 03 00 30 */	stfd f0, 0x30(r3)
/* 800097CC 0000670C  48 00 00 38 */	b .L_80009804
.L_800097D0:
/* 800097D0 00006710  C8 23 00 10 */	lfd f1, 0x10(r3)
/* 800097D4 00006714  C8 02 80 80 */	lfd f0, lbl_805163E0@sda21(r2)
/* 800097D8 00006718  D8 23 00 28 */	stfd f1, 0x28(r3)
/* 800097DC 0000671C  D8 03 00 30 */	stfd f0, 0x30(r3)
/* 800097E0 00006720  48 00 00 24 */	b .L_80009804
.L_800097E4:
/* 800097E4 00006724  C8 23 00 08 */	lfd f1, 8(r3)
/* 800097E8 00006728  C8 03 00 10 */	lfd f0, 0x10(r3)
/* 800097EC 0000672C  C8 42 80 68 */	lfd f2, lbl_805163C8@sda21(r2)
/* 800097F0 00006730  FC 21 00 2A */	fadd f1, f1, f0
/* 800097F4 00006734  C8 02 80 80 */	lfd f0, lbl_805163E0@sda21(r2)
/* 800097F8 00006738  FC 22 00 72 */	fmul f1, f2, f1
/* 800097FC 0000673C  D8 23 00 28 */	stfd f1, 0x28(r3)
/* 80009800 00006740  D8 03 00 30 */	stfd f0, 0x30(r3)
.L_80009804:
/* 80009804 00006744  80 03 00 40 */	lwz r0, 0x40(r3)
/* 80009808 00006748  2C 00 00 02 */	cmpwi r0, 2
/* 8000980C 0000674C  41 82 00 44 */	beq .L_80009850
/* 80009810 00006750  40 80 00 14 */	bge .L_80009824
/* 80009814 00006754  2C 00 00 00 */	cmpwi r0, 0
/* 80009818 00006758  41 82 00 18 */	beq .L_80009830
/* 8000981C 0000675C  40 80 00 24 */	bge .L_80009840
/* 80009820 00006760  48 00 00 10 */	b .L_80009830
.L_80009824:
/* 80009824 00006764  2C 00 00 04 */	cmpwi r0, 4
/* 80009828 00006768  40 80 00 08 */	bge .L_80009830
/* 8000982C 0000676C  48 00 00 34 */	b .L_80009860
.L_80009830:
/* 80009830 00006770  3C 80 80 01 */	lis r4, update_INTERPOLATE_NONE___Q27JStudio19TFunctionValue_listFRCQ27JStudio19TFunctionValue_listRCQ37JStudio19TFunctionValue_list11TIndexData_@ha
/* 80009834 00006774  38 04 9D B8 */	addi r0, r4, update_INTERPOLATE_NONE___Q27JStudio19TFunctionValue_listFRCQ27JStudio19TFunctionValue_listRCQ37JStudio19TFunctionValue_list11TIndexData_@l
/* 80009838 00006778  90 03 00 58 */	stw r0, 0x58(r3)
/* 8000983C 0000677C  4E 80 00 20 */	blr 
.L_80009840:
/* 80009840 00006780  3C 80 80 01 */	lis r4, update_INTERPOLATE_LINEAR___Q27JStudio19TFunctionValue_listFRCQ27JStudio19TFunctionValue_listRCQ37JStudio19TFunctionValue_list11TIndexData_@ha
/* 80009844 00006784  38 04 9D CC */	addi r0, r4, update_INTERPOLATE_LINEAR___Q27JStudio19TFunctionValue_listFRCQ27JStudio19TFunctionValue_listRCQ37JStudio19TFunctionValue_list11TIndexData_@l
/* 80009848 00006788  90 03 00 58 */	stw r0, 0x58(r3)
/* 8000984C 0000678C  4E 80 00 20 */	blr 
.L_80009850:
/* 80009850 00006790  3C 80 80 01 */	lis r4, update_INTERPOLATE_PLATEAU___Q27JStudio19TFunctionValue_listFRCQ27JStudio19TFunctionValue_listRCQ37JStudio19TFunctionValue_list11TIndexData_@ha
/* 80009854 00006794  38 04 9D FC */	addi r0, r4, update_INTERPOLATE_PLATEAU___Q27JStudio19TFunctionValue_listFRCQ27JStudio19TFunctionValue_listRCQ37JStudio19TFunctionValue_list11TIndexData_@l
/* 80009858 00006798  90 03 00 58 */	stw r0, 0x58(r3)
/* 8000985C 0000679C  4E 80 00 20 */	blr 
.L_80009860:
/* 80009860 000067A0  3C 80 80 01 */	lis r4, update_INTERPOLATE_BSPLINE_dataMore3___Q27JStudio19TFunctionValue_listFRCQ27JStudio19TFunctionValue_listRCQ37JStudio19TFunctionValue_list11TIndexData_@ha
/* 80009864 000067A4  38 04 9E 78 */	addi r0, r4, update_INTERPOLATE_BSPLINE_dataMore3___Q27JStudio19TFunctionValue_listFRCQ27JStudio19TFunctionValue_listRCQ37JStudio19TFunctionValue_list11TIndexData_@l
/* 80009868 000067A8  90 03 00 58 */	stw r0, 0x58(r3)
/* 8000986C 000067AC  80 03 00 48 */	lwz r0, 0x48(r3)
/* 80009870 000067B0  28 00 00 02 */	cmplwi r0, 2
/* 80009874 000067B4  4C 82 00 20 */	bnelr 
/* 80009878 000067B8  3C 80 80 01 */	lis r4, update_INTERPOLATE_LINEAR___Q27JStudio19TFunctionValue_listFRCQ27JStudio19TFunctionValue_listRCQ37JStudio19TFunctionValue_list11TIndexData_@ha
/* 8000987C 000067BC  38 04 9D CC */	addi r0, r4, update_INTERPOLATE_LINEAR___Q27JStudio19TFunctionValue_listFRCQ27JStudio19TFunctionValue_listRCQ37JStudio19TFunctionValue_list11TIndexData_@l
/* 80009880 000067C0  90 03 00 58 */	stw r0, 0x58(r3)
/* 80009884 000067C4  4E 80 00 20 */	blr 
.endfn prepare__Q27JStudio19TFunctionValue_listFv

.fn getValue__Q27JStudio19TFunctionValue_listFd, global
/* 80009888 000067C8  94 21 FF 90 */	stwu r1, -0x70(r1)
/* 8000988C 000067CC  7C 08 02 A6 */	mflr r0
/* 80009890 000067D0  90 01 00 74 */	stw r0, 0x74(r1)
/* 80009894 000067D4  DB E1 00 60 */	stfd f31, 0x60(r1)
/* 80009898 000067D8  F3 E1 00 68 */	psq_st f31, 104(r1), 0, qr0
/* 8000989C 000067DC  93 E1 00 5C */	stw r31, 0x5c(r1)
/* 800098A0 000067E0  93 C1 00 58 */	stw r30, 0x58(r1)
/* 800098A4 000067E4  7C 7F 1B 78 */	mr r31, r3
/* 800098A8 000067E8  3C 00 43 30 */	lis r0, 0x4330
/* 800098AC 000067EC  80 63 00 48 */	lwz r3, 0x48(r3)
/* 800098B0 000067F0  C8 9F 00 28 */	lfd f4, 0x28(r31)
/* 800098B4 000067F4  3B C3 FF FF */	addi r30, r3, -1
/* 800098B8 000067F8  88 7F 00 21 */	lbz r3, 0x21(r31)
/* 800098BC 000067FC  93 C1 00 4C */	stw r30, 0x4c(r1)
/* 800098C0 00006800  FC 41 20 28 */	fsub f2, f1, f4
/* 800098C4 00006804  C8 7F 00 30 */	lfd f3, 0x30(r31)
/* 800098C8 00006808  7C 63 07 74 */	extsb r3, r3
/* 800098CC 0000680C  90 01 00 48 */	stw r0, 0x48(r1)
/* 800098D0 00006810  2C 03 00 02 */	cmpwi r3, 2
/* 800098D4 00006814  C8 22 80 88 */	lfd f1, lbl_805163E8@sda21(r2)
/* 800098D8 00006818  C8 01 00 48 */	lfd f0, 0x48(r1)
/* 800098DC 0000681C  FC 63 20 BA */	fmadd f3, f3, f2, f4
/* 800098E0 00006820  FF E0 08 28 */	fsub f31, f0, f1
/* 800098E4 00006824  41 82 01 CC */	beq .L_80009AB0
/* 800098E8 00006828  40 80 00 14 */	bge .L_800098FC
/* 800098EC 0000682C  2C 03 00 00 */	cmpwi r3, 0
/* 800098F0 00006830  41 82 00 1C */	beq .L_8000990C
/* 800098F4 00006834  40 80 00 E8 */	bge .L_800099DC
/* 800098F8 00006838  48 00 00 14 */	b .L_8000990C
.L_800098FC:
/* 800098FC 0000683C  2C 03 00 04 */	cmpwi r3, 4
/* 80009900 00006840  41 82 03 68 */	beq .L_80009C68
/* 80009904 00006844  40 80 00 08 */	bge .L_8000990C
/* 80009908 00006848  48 00 02 80 */	b .L_80009B88
.L_8000990C:
/* 8000990C 0000684C  C8 3F 00 08 */	lfd f1, 8(r31)
/* 80009910 00006850  C8 02 80 40 */	lfd f0, lbl_805163A0@sda21(r2)
/* 80009914 00006854  FC 23 08 28 */	fsub f1, f3, f1
/* 80009918 00006858  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8000991C 0000685C  40 80 00 50 */	bge .L_8000996C
/* 80009920 00006860  80 9F 00 38 */	lwz r4, 0x38(r31)
/* 80009924 00006864  38 00 00 00 */	li r0, 0
/* 80009928 00006868  3C 60 80 47 */	lis r3, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@ha
/* 8000992C 0000686C  28 04 00 04 */	cmplwi r4, 4
/* 80009930 00006870  90 01 00 2C */	stw r0, 0x2c(r1)
/* 80009934 00006874  54 84 10 3A */	slwi r4, r4, 2
/* 80009938 00006878  38 03 32 F0 */	addi r0, r3, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@l
/* 8000993C 0000687C  7C 60 22 14 */	add r3, r0, r4
/* 80009940 00006880  41 80 00 08 */	blt .L_80009948
/* 80009944 00006884  38 61 00 2C */	addi r3, r1, 0x2c
.L_80009948:
/* 80009948 00006888  81 83 00 00 */	lwz r12, 0(r3)
/* 8000994C 0000688C  28 0C 00 00 */	cmplwi r12, 0
/* 80009950 00006890  40 82 00 0C */	bne .L_8000995C
/* 80009954 00006894  3C 60 80 47 */	lis r3, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@ha
/* 80009958 00006898  81 83 32 F0 */	lwz r12, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@l(r3)
.L_8000995C:
/* 8000995C 0000689C  C8 5F 00 18 */	lfd f2, 0x18(r31)
/* 80009960 000068A0  7D 89 03 A6 */	mtctr r12
/* 80009964 000068A4  4E 80 04 21 */	bctrl 
/* 80009968 000068A8  48 00 00 5C */	b .L_800099C4
.L_8000996C:
/* 8000996C 000068AC  C8 1F 00 18 */	lfd f0, 0x18(r31)
/* 80009970 000068B0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80009974 000068B4  4C 41 13 82 */	cror 2, 1, 2
/* 80009978 000068B8  40 82 00 4C */	bne .L_800099C4
/* 8000997C 000068BC  80 9F 00 3C */	lwz r4, 0x3c(r31)
/* 80009980 000068C0  38 00 00 00 */	li r0, 0
/* 80009984 000068C4  3C 60 80 47 */	lis r3, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@ha
/* 80009988 000068C8  28 04 00 04 */	cmplwi r4, 4
/* 8000998C 000068CC  90 01 00 28 */	stw r0, 0x28(r1)
/* 80009990 000068D0  54 84 10 3A */	slwi r4, r4, 2
/* 80009994 000068D4  38 03 32 F0 */	addi r0, r3, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@l
/* 80009998 000068D8  7C 60 22 14 */	add r3, r0, r4
/* 8000999C 000068DC  41 80 00 08 */	blt .L_800099A4
/* 800099A0 000068E0  38 61 00 28 */	addi r3, r1, 0x28
.L_800099A4:
/* 800099A4 000068E4  81 83 00 00 */	lwz r12, 0(r3)
/* 800099A8 000068E8  28 0C 00 00 */	cmplwi r12, 0
/* 800099AC 000068EC  40 82 00 0C */	bne .L_800099B8
/* 800099B0 000068F0  3C 60 80 47 */	lis r3, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@ha
/* 800099B4 000068F4  81 83 32 F0 */	lwz r12, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@l(r3)
.L_800099B8:
/* 800099B8 000068F8  C8 5F 00 18 */	lfd f2, 0x18(r31)
/* 800099BC 000068FC  7D 89 03 A6 */	mtctr r12
/* 800099C0 00006900  4E 80 04 21 */	bctrl 
.L_800099C4:
/* 800099C4 00006904  C8 5F 00 08 */	lfd f2, 8(r31)
/* 800099C8 00006908  C8 1F 00 50 */	lfd f0, 0x50(r31)
/* 800099CC 0000690C  FC 21 10 2A */	fadd f1, f1, f2
/* 800099D0 00006910  FC 01 00 24 */	fdiv f0, f1, f0
/* 800099D4 00006914  D8 01 00 30 */	stfd f0, 0x30(r1)
/* 800099D8 00006918  48 00 03 64 */	b .L_80009D3C
.L_800099DC:
/* 800099DC 0000691C  C8 5F 00 08 */	lfd f2, 8(r31)
/* 800099E0 00006920  C8 02 80 40 */	lfd f0, lbl_805163A0@sda21(r2)
/* 800099E4 00006924  FC 23 10 2A */	fadd f1, f3, f2
/* 800099E8 00006928  FC 21 10 28 */	fsub f1, f1, f2
/* 800099EC 0000692C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 800099F0 00006930  40 80 00 50 */	bge .L_80009A40
/* 800099F4 00006934  80 9F 00 38 */	lwz r4, 0x38(r31)
/* 800099F8 00006938  38 00 00 00 */	li r0, 0
/* 800099FC 0000693C  3C 60 80 47 */	lis r3, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@ha
/* 80009A00 00006940  28 04 00 04 */	cmplwi r4, 4
/* 80009A04 00006944  90 01 00 24 */	stw r0, 0x24(r1)
/* 80009A08 00006948  54 84 10 3A */	slwi r4, r4, 2
/* 80009A0C 0000694C  38 03 32 F0 */	addi r0, r3, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@l
/* 80009A10 00006950  7C 60 22 14 */	add r3, r0, r4
/* 80009A14 00006954  41 80 00 08 */	blt .L_80009A1C
/* 80009A18 00006958  38 61 00 24 */	addi r3, r1, 0x24
.L_80009A1C:
/* 80009A1C 0000695C  81 83 00 00 */	lwz r12, 0(r3)
/* 80009A20 00006960  28 0C 00 00 */	cmplwi r12, 0
/* 80009A24 00006964  40 82 00 0C */	bne .L_80009A30
/* 80009A28 00006968  3C 60 80 47 */	lis r3, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@ha
/* 80009A2C 0000696C  81 83 32 F0 */	lwz r12, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@l(r3)
.L_80009A30:
/* 80009A30 00006970  C8 5F 00 18 */	lfd f2, 0x18(r31)
/* 80009A34 00006974  7D 89 03 A6 */	mtctr r12
/* 80009A38 00006978  4E 80 04 21 */	bctrl 
/* 80009A3C 0000697C  48 00 00 5C */	b .L_80009A98
.L_80009A40:
/* 80009A40 00006980  C8 1F 00 18 */	lfd f0, 0x18(r31)
/* 80009A44 00006984  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80009A48 00006988  4C 41 13 82 */	cror 2, 1, 2
/* 80009A4C 0000698C  40 82 00 4C */	bne .L_80009A98
/* 80009A50 00006990  80 9F 00 3C */	lwz r4, 0x3c(r31)
/* 80009A54 00006994  38 00 00 00 */	li r0, 0
/* 80009A58 00006998  3C 60 80 47 */	lis r3, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@ha
/* 80009A5C 0000699C  28 04 00 04 */	cmplwi r4, 4
/* 80009A60 000069A0  90 01 00 20 */	stw r0, 0x20(r1)
/* 80009A64 000069A4  54 84 10 3A */	slwi r4, r4, 2
/* 80009A68 000069A8  38 03 32 F0 */	addi r0, r3, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@l
/* 80009A6C 000069AC  7C 60 22 14 */	add r3, r0, r4
/* 80009A70 000069B0  41 80 00 08 */	blt .L_80009A78
/* 80009A74 000069B4  38 61 00 20 */	addi r3, r1, 0x20
.L_80009A78:
/* 80009A78 000069B8  81 83 00 00 */	lwz r12, 0(r3)
/* 80009A7C 000069BC  28 0C 00 00 */	cmplwi r12, 0
/* 80009A80 000069C0  40 82 00 0C */	bne .L_80009A8C
/* 80009A84 000069C4  3C 60 80 47 */	lis r3, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@ha
/* 80009A88 000069C8  81 83 32 F0 */	lwz r12, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@l(r3)
.L_80009A8C:
/* 80009A8C 000069CC  C8 5F 00 18 */	lfd f2, 0x18(r31)
/* 80009A90 000069D0  7D 89 03 A6 */	mtctr r12
/* 80009A94 000069D4  4E 80 04 21 */	bctrl 
.L_80009A98:
/* 80009A98 000069D8  C8 5F 00 08 */	lfd f2, 8(r31)
/* 80009A9C 000069DC  C8 1F 00 50 */	lfd f0, 0x50(r31)
/* 80009AA0 000069E0  FC 21 10 2A */	fadd f1, f1, f2
/* 80009AA4 000069E4  FC 01 00 24 */	fdiv f0, f1, f0
/* 80009AA8 000069E8  D8 01 00 30 */	stfd f0, 0x30(r1)
/* 80009AAC 000069EC  48 00 02 90 */	b .L_80009D3C
.L_80009AB0:
/* 80009AB0 000069F0  C8 1F 00 10 */	lfd f0, 0x10(r31)
/* 80009AB4 000069F4  C8 5F 00 08 */	lfd f2, 8(r31)
/* 80009AB8 000069F8  FC 23 00 2A */	fadd f1, f3, f0
/* 80009ABC 000069FC  C8 02 80 40 */	lfd f0, lbl_805163A0@sda21(r2)
/* 80009AC0 00006A00  FC 21 10 28 */	fsub f1, f1, f2
/* 80009AC4 00006A04  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80009AC8 00006A08  40 80 00 50 */	bge .L_80009B18
/* 80009ACC 00006A0C  80 9F 00 38 */	lwz r4, 0x38(r31)
/* 80009AD0 00006A10  38 00 00 00 */	li r0, 0
/* 80009AD4 00006A14  3C 60 80 47 */	lis r3, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@ha
/* 80009AD8 00006A18  28 04 00 04 */	cmplwi r4, 4
/* 80009ADC 00006A1C  90 01 00 1C */	stw r0, 0x1c(r1)
/* 80009AE0 00006A20  54 84 10 3A */	slwi r4, r4, 2
/* 80009AE4 00006A24  38 03 32 F0 */	addi r0, r3, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@l
/* 80009AE8 00006A28  7C 60 22 14 */	add r3, r0, r4
/* 80009AEC 00006A2C  41 80 00 08 */	blt .L_80009AF4
/* 80009AF0 00006A30  38 61 00 1C */	addi r3, r1, 0x1c
.L_80009AF4:
/* 80009AF4 00006A34  81 83 00 00 */	lwz r12, 0(r3)
/* 80009AF8 00006A38  28 0C 00 00 */	cmplwi r12, 0
/* 80009AFC 00006A3C  40 82 00 0C */	bne .L_80009B08
/* 80009B00 00006A40  3C 60 80 47 */	lis r3, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@ha
/* 80009B04 00006A44  81 83 32 F0 */	lwz r12, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@l(r3)
.L_80009B08:
/* 80009B08 00006A48  C8 5F 00 18 */	lfd f2, 0x18(r31)
/* 80009B0C 00006A4C  7D 89 03 A6 */	mtctr r12
/* 80009B10 00006A50  4E 80 04 21 */	bctrl 
/* 80009B14 00006A54  48 00 00 5C */	b .L_80009B70
.L_80009B18:
/* 80009B18 00006A58  C8 1F 00 18 */	lfd f0, 0x18(r31)
/* 80009B1C 00006A5C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80009B20 00006A60  4C 41 13 82 */	cror 2, 1, 2
/* 80009B24 00006A64  40 82 00 4C */	bne .L_80009B70
/* 80009B28 00006A68  80 9F 00 3C */	lwz r4, 0x3c(r31)
/* 80009B2C 00006A6C  38 00 00 00 */	li r0, 0
/* 80009B30 00006A70  3C 60 80 47 */	lis r3, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@ha
/* 80009B34 00006A74  28 04 00 04 */	cmplwi r4, 4
/* 80009B38 00006A78  90 01 00 18 */	stw r0, 0x18(r1)
/* 80009B3C 00006A7C  54 84 10 3A */	slwi r4, r4, 2
/* 80009B40 00006A80  38 03 32 F0 */	addi r0, r3, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@l
/* 80009B44 00006A84  7C 60 22 14 */	add r3, r0, r4
/* 80009B48 00006A88  41 80 00 08 */	blt .L_80009B50
/* 80009B4C 00006A8C  38 61 00 18 */	addi r3, r1, 0x18
.L_80009B50:
/* 80009B50 00006A90  81 83 00 00 */	lwz r12, 0(r3)
/* 80009B54 00006A94  28 0C 00 00 */	cmplwi r12, 0
/* 80009B58 00006A98  40 82 00 0C */	bne .L_80009B64
/* 80009B5C 00006A9C  3C 60 80 47 */	lis r3, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@ha
/* 80009B60 00006AA0  81 83 32 F0 */	lwz r12, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@l(r3)
.L_80009B64:
/* 80009B64 00006AA4  C8 5F 00 18 */	lfd f2, 0x18(r31)
/* 80009B68 00006AA8  7D 89 03 A6 */	mtctr r12
/* 80009B6C 00006AAC  4E 80 04 21 */	bctrl 
.L_80009B70:
/* 80009B70 00006AB0  C8 5F 00 08 */	lfd f2, 8(r31)
/* 80009B74 00006AB4  C8 1F 00 50 */	lfd f0, 0x50(r31)
/* 80009B78 00006AB8  FC 21 10 2A */	fadd f1, f1, f2
/* 80009B7C 00006ABC  FC 01 00 24 */	fdiv f0, f1, f0
/* 80009B80 00006AC0  D8 01 00 30 */	stfd f0, 0x30(r1)
/* 80009B84 00006AC4  48 00 01 B8 */	b .L_80009D3C
.L_80009B88:
/* 80009B88 00006AC8  C8 9F 00 08 */	lfd f4, 8(r31)
/* 80009B8C 00006ACC  C8 1F 00 10 */	lfd f0, 0x10(r31)
/* 80009B90 00006AD0  C8 42 80 68 */	lfd f2, lbl_805163C8@sda21(r2)
/* 80009B94 00006AD4  FC 24 00 2A */	fadd f1, f4, f0
/* 80009B98 00006AD8  C8 02 80 40 */	lfd f0, lbl_805163A0@sda21(r2)
/* 80009B9C 00006ADC  FC 22 18 7A */	fmadd f1, f2, f1, f3
/* 80009BA0 00006AE0  FC 21 20 28 */	fsub f1, f1, f4
/* 80009BA4 00006AE4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80009BA8 00006AE8  40 80 00 50 */	bge .L_80009BF8
/* 80009BAC 00006AEC  80 9F 00 38 */	lwz r4, 0x38(r31)
/* 80009BB0 00006AF0  38 00 00 00 */	li r0, 0
/* 80009BB4 00006AF4  3C 60 80 47 */	lis r3, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@ha
/* 80009BB8 00006AF8  28 04 00 04 */	cmplwi r4, 4
/* 80009BBC 00006AFC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80009BC0 00006B00  54 84 10 3A */	slwi r4, r4, 2
/* 80009BC4 00006B04  38 03 32 F0 */	addi r0, r3, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@l
/* 80009BC8 00006B08  7C 60 22 14 */	add r3, r0, r4
/* 80009BCC 00006B0C  41 80 00 08 */	blt .L_80009BD4
/* 80009BD0 00006B10  38 61 00 14 */	addi r3, r1, 0x14
.L_80009BD4:
/* 80009BD4 00006B14  81 83 00 00 */	lwz r12, 0(r3)
/* 80009BD8 00006B18  28 0C 00 00 */	cmplwi r12, 0
/* 80009BDC 00006B1C  40 82 00 0C */	bne .L_80009BE8
/* 80009BE0 00006B20  3C 60 80 47 */	lis r3, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@ha
/* 80009BE4 00006B24  81 83 32 F0 */	lwz r12, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@l(r3)
.L_80009BE8:
/* 80009BE8 00006B28  C8 5F 00 18 */	lfd f2, 0x18(r31)
/* 80009BEC 00006B2C  7D 89 03 A6 */	mtctr r12
/* 80009BF0 00006B30  4E 80 04 21 */	bctrl 
/* 80009BF4 00006B34  48 00 00 5C */	b .L_80009C50
.L_80009BF8:
/* 80009BF8 00006B38  C8 1F 00 18 */	lfd f0, 0x18(r31)
/* 80009BFC 00006B3C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80009C00 00006B40  4C 41 13 82 */	cror 2, 1, 2
/* 80009C04 00006B44  40 82 00 4C */	bne .L_80009C50
/* 80009C08 00006B48  80 9F 00 3C */	lwz r4, 0x3c(r31)
/* 80009C0C 00006B4C  38 00 00 00 */	li r0, 0
/* 80009C10 00006B50  3C 60 80 47 */	lis r3, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@ha
/* 80009C14 00006B54  28 04 00 04 */	cmplwi r4, 4
/* 80009C18 00006B58  90 01 00 10 */	stw r0, 0x10(r1)
/* 80009C1C 00006B5C  54 84 10 3A */	slwi r4, r4, 2
/* 80009C20 00006B60  38 03 32 F0 */	addi r0, r3, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@l
/* 80009C24 00006B64  7C 60 22 14 */	add r3, r0, r4
/* 80009C28 00006B68  41 80 00 08 */	blt .L_80009C30
/* 80009C2C 00006B6C  38 61 00 10 */	addi r3, r1, 0x10
.L_80009C30:
/* 80009C30 00006B70  81 83 00 00 */	lwz r12, 0(r3)
/* 80009C34 00006B74  28 0C 00 00 */	cmplwi r12, 0
/* 80009C38 00006B78  40 82 00 0C */	bne .L_80009C44
/* 80009C3C 00006B7C  3C 60 80 47 */	lis r3, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@ha
/* 80009C40 00006B80  81 83 32 F0 */	lwz r12, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@l(r3)
.L_80009C44:
/* 80009C44 00006B84  C8 5F 00 18 */	lfd f2, 0x18(r31)
/* 80009C48 00006B88  7D 89 03 A6 */	mtctr r12
/* 80009C4C 00006B8C  4E 80 04 21 */	bctrl 
.L_80009C50:
/* 80009C50 00006B90  C8 5F 00 08 */	lfd f2, 8(r31)
/* 80009C54 00006B94  C8 1F 00 50 */	lfd f0, 0x50(r31)
/* 80009C58 00006B98  FC 21 10 2A */	fadd f1, f1, f2
/* 80009C5C 00006B9C  FC 01 00 24 */	fdiv f0, f1, f0
/* 80009C60 00006BA0  D8 01 00 30 */	stfd f0, 0x30(r1)
/* 80009C64 00006BA4  48 00 00 D8 */	b .L_80009D3C
.L_80009C68:
/* 80009C68 00006BA8  C8 3F 00 08 */	lfd f1, 8(r31)
/* 80009C6C 00006BAC  C8 02 80 40 */	lfd f0, lbl_805163A0@sda21(r2)
/* 80009C70 00006BB0  FC 23 08 28 */	fsub f1, f3, f1
/* 80009C74 00006BB4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80009C78 00006BB8  40 80 00 50 */	bge .L_80009CC8
/* 80009C7C 00006BBC  80 9F 00 38 */	lwz r4, 0x38(r31)
/* 80009C80 00006BC0  38 00 00 00 */	li r0, 0
/* 80009C84 00006BC4  3C 60 80 47 */	lis r3, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@ha
/* 80009C88 00006BC8  28 04 00 04 */	cmplwi r4, 4
/* 80009C8C 00006BCC  90 01 00 0C */	stw r0, 0xc(r1)
/* 80009C90 00006BD0  54 84 10 3A */	slwi r4, r4, 2
/* 80009C94 00006BD4  38 03 32 F0 */	addi r0, r3, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@l
/* 80009C98 00006BD8  7C 60 22 14 */	add r3, r0, r4
/* 80009C9C 00006BDC  41 80 00 08 */	blt .L_80009CA4
/* 80009CA0 00006BE0  38 61 00 0C */	addi r3, r1, 0xc
.L_80009CA4:
/* 80009CA4 00006BE4  81 83 00 00 */	lwz r12, 0(r3)
/* 80009CA8 00006BE8  28 0C 00 00 */	cmplwi r12, 0
/* 80009CAC 00006BEC  40 82 00 0C */	bne .L_80009CB8
/* 80009CB0 00006BF0  3C 60 80 47 */	lis r3, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@ha
/* 80009CB4 00006BF4  81 83 32 F0 */	lwz r12, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@l(r3)
.L_80009CB8:
/* 80009CB8 00006BF8  C8 5F 00 18 */	lfd f2, 0x18(r31)
/* 80009CBC 00006BFC  7D 89 03 A6 */	mtctr r12
/* 80009CC0 00006C00  4E 80 04 21 */	bctrl 
/* 80009CC4 00006C04  48 00 00 5C */	b .L_80009D20
.L_80009CC8:
/* 80009CC8 00006C08  C8 1F 00 18 */	lfd f0, 0x18(r31)
/* 80009CCC 00006C0C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80009CD0 00006C10  4C 41 13 82 */	cror 2, 1, 2
/* 80009CD4 00006C14  40 82 00 4C */	bne .L_80009D20
/* 80009CD8 00006C18  80 9F 00 3C */	lwz r4, 0x3c(r31)
/* 80009CDC 00006C1C  38 00 00 00 */	li r0, 0
/* 80009CE0 00006C20  3C 60 80 47 */	lis r3, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@ha
/* 80009CE4 00006C24  28 04 00 04 */	cmplwi r4, 4
/* 80009CE8 00006C28  90 01 00 08 */	stw r0, 8(r1)
/* 80009CEC 00006C2C  54 84 10 3A */	slwi r4, r4, 2
/* 80009CF0 00006C30  38 03 32 F0 */	addi r0, r3, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@l
/* 80009CF4 00006C34  7C 60 22 14 */	add r3, r0, r4
/* 80009CF8 00006C38  41 80 00 08 */	blt .L_80009D00
/* 80009CFC 00006C3C  38 61 00 08 */	addi r3, r1, 8
.L_80009D00:
/* 80009D00 00006C40  81 83 00 00 */	lwz r12, 0(r3)
/* 80009D04 00006C44  28 0C 00 00 */	cmplwi r12, 0
/* 80009D08 00006C48  40 82 00 0C */	bne .L_80009D14
/* 80009D0C 00006C4C  3C 60 80 47 */	lis r3, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@ha
/* 80009D10 00006C50  81 83 32 F0 */	lwz r12, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@l(r3)
.L_80009D14:
/* 80009D14 00006C54  C8 5F 00 18 */	lfd f2, 0x18(r31)
/* 80009D18 00006C58  7D 89 03 A6 */	mtctr r12
/* 80009D1C 00006C5C  4E 80 04 21 */	bctrl 
.L_80009D20:
/* 80009D20 00006C60  C8 5F 00 08 */	lfd f2, 8(r31)
/* 80009D24 00006C64  C8 1F 00 18 */	lfd f0, 0x18(r31)
/* 80009D28 00006C68  FC 21 10 2A */	fadd f1, f1, f2
/* 80009D2C 00006C6C  FC 21 10 28 */	fsub f1, f1, f2
/* 80009D30 00006C70  FC 3F 00 72 */	fmul f1, f31, f1
/* 80009D34 00006C74  FC 01 00 24 */	fdiv f0, f1, f0
/* 80009D38 00006C78  D8 01 00 30 */	stfd f0, 0x30(r1)
.L_80009D3C:
/* 80009D3C 00006C7C  C8 21 00 30 */	lfd f1, 0x30(r1)
/* 80009D40 00006C80  C8 02 80 40 */	lfd f0, lbl_805163A0@sda21(r2)
/* 80009D44 00006C84  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80009D48 00006C88  40 80 00 10 */	bge .L_80009D58
/* 80009D4C 00006C8C  80 7F 00 44 */	lwz r3, 0x44(r31)
/* 80009D50 00006C90  C0 23 00 00 */	lfs f1, 0(r3)
/* 80009D54 00006C94  48 00 00 44 */	b .L_80009D98
.L_80009D58:
/* 80009D58 00006C98  FC 01 F8 40 */	fcmpo cr0, f1, f31
/* 80009D5C 00006C9C  4C 41 13 82 */	cror 2, 1, 2
/* 80009D60 00006CA0  40 82 00 14 */	bne .L_80009D74
/* 80009D64 00006CA4  80 7F 00 44 */	lwz r3, 0x44(r31)
/* 80009D68 00006CA8  57 C0 10 3A */	slwi r0, r30, 2
/* 80009D6C 00006CAC  7C 23 04 2E */	lfsx f1, r3, r0
/* 80009D70 00006CB0  48 00 00 28 */	b .L_80009D98
.L_80009D74:
/* 80009D74 00006CB4  48 0C 56 15 */	bl floor
/* 80009D78 00006CB8  D8 21 00 38 */	stfd f1, 0x38(r1)
/* 80009D7C 00006CBC  48 0B 7D D1 */	bl __cvt_fp2unsigned
/* 80009D80 00006CC0  90 61 00 40 */	stw r3, 0x40(r1)
/* 80009D84 00006CC4  7F E3 FB 78 */	mr r3, r31
/* 80009D88 00006CC8  38 81 00 30 */	addi r4, r1, 0x30
/* 80009D8C 00006CCC  81 9F 00 58 */	lwz r12, 0x58(r31)
/* 80009D90 00006CD0  7D 89 03 A6 */	mtctr r12
/* 80009D94 00006CD4  4E 80 04 21 */	bctrl 
.L_80009D98:
/* 80009D98 00006CD8  E3 E1 00 68 */	psq_l f31, 104(r1), 0, qr0
/* 80009D9C 00006CDC  80 01 00 74 */	lwz r0, 0x74(r1)
/* 80009DA0 00006CE0  CB E1 00 60 */	lfd f31, 0x60(r1)
/* 80009DA4 00006CE4  83 E1 00 5C */	lwz r31, 0x5c(r1)
/* 80009DA8 00006CE8  83 C1 00 58 */	lwz r30, 0x58(r1)
/* 80009DAC 00006CEC  7C 08 03 A6 */	mtlr r0
/* 80009DB0 00006CF0  38 21 00 70 */	addi r1, r1, 0x70
/* 80009DB4 00006CF4  4E 80 00 20 */	blr 
.endfn getValue__Q27JStudio19TFunctionValue_listFd

.fn update_INTERPOLATE_NONE___Q27JStudio19TFunctionValue_listFRCQ27JStudio19TFunctionValue_listRCQ37JStudio19TFunctionValue_list11TIndexData_, global
/* 80009DB8 00006CF8  80 04 00 10 */	lwz r0, 0x10(r4)
/* 80009DBC 00006CFC  80 63 00 44 */	lwz r3, 0x44(r3)
/* 80009DC0 00006D00  54 00 10 3A */	slwi r0, r0, 2
/* 80009DC4 00006D04  7C 23 04 2E */	lfsx f1, r3, r0
/* 80009DC8 00006D08  4E 80 00 20 */	blr 
.endfn update_INTERPOLATE_NONE___Q27JStudio19TFunctionValue_listFRCQ27JStudio19TFunctionValue_listRCQ37JStudio19TFunctionValue_list11TIndexData_

.fn update_INTERPOLATE_LINEAR___Q27JStudio19TFunctionValue_listFRCQ27JStudio19TFunctionValue_listRCQ37JStudio19TFunctionValue_list11TIndexData_, global
/* 80009DCC 00006D0C  80 04 00 10 */	lwz r0, 0x10(r4)
/* 80009DD0 00006D10  80 A3 00 44 */	lwz r5, 0x44(r3)
/* 80009DD4 00006D14  54 00 10 3A */	slwi r0, r0, 2
/* 80009DD8 00006D18  C8 24 00 00 */	lfd f1, 0(r4)
/* 80009DDC 00006D1C  7C 65 02 14 */	add r3, r5, r0
/* 80009DE0 00006D20  C8 04 00 08 */	lfd f0, 8(r4)
/* 80009DE4 00006D24  7C 65 04 2E */	lfsx f3, r5, r0
/* 80009DE8 00006D28  C0 43 00 04 */	lfs f2, 4(r3)
/* 80009DEC 00006D2C  FC 01 00 28 */	fsub f0, f1, f0
/* 80009DF0 00006D30  FC 22 18 28 */	fsub f1, f2, f3
/* 80009DF4 00006D34  FC 21 18 3A */	fmadd f1, f1, f0, f3
/* 80009DF8 00006D38  4E 80 00 20 */	blr 
.endfn update_INTERPOLATE_LINEAR___Q27JStudio19TFunctionValue_listFRCQ27JStudio19TFunctionValue_listRCQ37JStudio19TFunctionValue_list11TIndexData_

.fn update_INTERPOLATE_PLATEAU___Q27JStudio19TFunctionValue_listFRCQ27JStudio19TFunctionValue_listRCQ37JStudio19TFunctionValue_list11TIndexData_, global
/* 80009DFC 00006D3C  C8 84 00 08 */	lfd f4, 8(r4)
/* 80009E00 00006D40  C8 C2 80 48 */	lfd f6, lbl_805163A8@sda21(r2)
/* 80009E04 00006D44  C8 24 00 00 */	lfd f1, 0(r4)
/* 80009E08 00006D48  FC 06 20 2A */	fadd f0, f6, f4
/* 80009E0C 00006D4C  80 04 00 10 */	lwz r0, 0x10(r4)
/* 80009E10 00006D50  FD 01 20 28 */	fsub f8, f1, f4
/* 80009E14 00006D54  C8 62 80 58 */	lfd f3, lbl_805163B8@sda21(r2)
/* 80009E18 00006D58  C8 42 80 50 */	lfd f2, lbl_805163B0@sda21(r2)
/* 80009E1C 00006D5C  54 00 10 3A */	slwi r0, r0, 2
/* 80009E20 00006D60  FC 00 20 28 */	fsub f0, f0, f4
/* 80009E24 00006D64  80 83 00 44 */	lwz r4, 0x44(r3)
/* 80009E28 00006D68  C8 82 80 40 */	lfd f4, lbl_805163A0@sda21(r2)
/* 80009E2C 00006D6C  7C 64 02 14 */	add r3, r4, r0
/* 80009E30 00006D70  7C 24 04 2E */	lfsx f1, r4, r0
/* 80009E34 00006D74  FC A6 00 24 */	fdiv f5, f6, f0
/* 80009E38 00006D78  C0 03 00 04 */	lfs f0, 4(r3)
/* 80009E3C 00006D7C  FC E8 01 72 */	fmul f7, f8, f5
/* 80009E40 00006D80  FC 63 11 FA */	fmadd f3, f3, f7, f2
/* 80009E44 00006D84  FC 47 01 F2 */	fmul f2, f7, f7
/* 80009E48 00006D88  FC A7 30 28 */	fsub f5, f7, f6
/* 80009E4C 00006D8C  FC 43 00 B2 */	fmul f2, f3, f2
/* 80009E50 00006D90  FC 65 01 72 */	fmul f3, f5, f5
/* 80009E54 00006D94  FC A5 02 32 */	fmul f5, f5, f8
/* 80009E58 00006D98  FC 02 00 32 */	fmul f0, f2, f0
/* 80009E5C 00006D9C  FC 46 10 28 */	fsub f2, f6, f2
/* 80009E60 00006DA0  FC 68 00 F2 */	fmul f3, f8, f3
/* 80009E64 00006DA4  FC 02 00 7A */	fmadd f0, f2, f1, f0
/* 80009E68 00006DA8  FC 27 01 72 */	fmul f1, f7, f5
/* 80009E6C 00006DAC  FC 03 01 3A */	fmadd f0, f3, f4, f0
/* 80009E70 00006DB0  FC 21 01 3A */	fmadd f1, f1, f4, f0
/* 80009E74 00006DB4  4E 80 00 20 */	blr 
.endfn update_INTERPOLATE_PLATEAU___Q27JStudio19TFunctionValue_listFRCQ27JStudio19TFunctionValue_listRCQ37JStudio19TFunctionValue_list11TIndexData_

.fn update_INTERPOLATE_BSPLINE_dataMore3___Q27JStudio19TFunctionValue_listFRCQ27JStudio19TFunctionValue_listRCQ37JStudio19TFunctionValue_list11TIndexData_, global
/* 80009E78 00006DB8  80 C4 00 10 */	lwz r6, 0x10(r4)
/* 80009E7C 00006DBC  80 E3 00 44 */	lwz r7, 0x44(r3)
/* 80009E80 00006DC0  54 C0 10 3A */	slwi r0, r6, 2
/* 80009E84 00006DC4  28 06 00 00 */	cmplwi r6, 0
/* 80009E88 00006DC8  7C A7 02 14 */	add r5, r7, r0
/* 80009E8C 00006DCC  7D 07 04 2E */	lfsx f8, r7, r0
/* 80009E90 00006DD0  C1 25 00 04 */	lfs f9, 4(r5)
/* 80009E94 00006DD4  40 82 00 14 */	bne .L_80009EA8
/* 80009E98 00006DD8  C8 02 80 78 */	lfd f0, lbl_805163D8@sda21(r2)
/* 80009E9C 00006DDC  C1 65 00 08 */	lfs f11, 8(r5)
/* 80009EA0 00006DE0  FD 40 4A 38 */	fmsub f10, f0, f8, f9
/* 80009EA4 00006DE4  48 00 00 2C */	b .L_80009ED0
.L_80009EA8:
/* 80009EA8 00006DE8  80 63 00 48 */	lwz r3, 0x48(r3)
/* 80009EAC 00006DEC  38 03 FF FE */	addi r0, r3, -2
/* 80009EB0 00006DF0  7C 06 00 40 */	cmplw r6, r0
/* 80009EB4 00006DF4  40 82 00 14 */	bne .L_80009EC8
/* 80009EB8 00006DF8  C8 02 80 78 */	lfd f0, lbl_805163D8@sda21(r2)
/* 80009EBC 00006DFC  C1 45 FF FC */	lfs f10, -4(r5)
/* 80009EC0 00006E00  FD 60 42 78 */	fmsub f11, f0, f9, f8
/* 80009EC4 00006E04  48 00 00 0C */	b .L_80009ED0
.L_80009EC8:
/* 80009EC8 00006E08  C1 45 FF FC */	lfs f10, -4(r5)
/* 80009ECC 00006E0C  C1 65 00 08 */	lfs f11, 8(r5)
.L_80009ED0:
/* 80009ED0 00006E10  C8 44 00 00 */	lfd f2, 0(r4)
/* 80009ED4 00006E14  C8 24 00 08 */	lfd f1, 8(r4)
/* 80009ED8 00006E18  C8 02 80 48 */	lfd f0, lbl_805163A8@sda21(r2)
/* 80009EDC 00006E1C  FD 82 08 28 */	fsub f12, f2, f1
/* 80009EE0 00006E20  C8 C2 80 68 */	lfd f6, lbl_805163C8@sda21(r2)
/* 80009EE4 00006E24  C8 82 80 60 */	lfd f4, lbl_805163C0@sda21(r2)
/* 80009EE8 00006E28  C8 62 80 70 */	lfd f3, lbl_805163D0@sda21(r2)
/* 80009EEC 00006E2C  FC AC 03 32 */	fmul f5, f12, f12
/* 80009EF0 00006E30  FC 40 60 28 */	fsub f2, f0, f12
/* 80009EF4 00006E34  FC E5 03 32 */	fmul f7, f5, f12
/* 80009EF8 00006E38  FC 22 00 B2 */	fmul f1, f2, f2
/* 80009EFC 00006E3C  FC 07 02 F2 */	fmul f0, f7, f11
/* 80009F00 00006E40  FC 21 00 B2 */	fmul f1, f1, f2
/* 80009F04 00006E44  FC 46 29 F8 */	fmsub f2, f6, f7, f5
/* 80009F08 00006E48  FC 01 02 BA */	fmadd f0, f1, f10, f0
/* 80009F0C 00006E4C  FC AC 28 2A */	fadd f5, f12, f5
/* 80009F10 00006E50  FC 23 10 2A */	fadd f1, f3, f2
/* 80009F14 00006E54  FC 04 00 32 */	fmul f0, f4, f0
/* 80009F18 00006E58  FC 45 38 28 */	fsub f2, f5, f7
/* 80009F1C 00006E5C  FC 01 02 3A */	fmadd f0, f1, f8, f0
/* 80009F20 00006E60  FC 26 20 BA */	fmadd f1, f6, f2, f4
/* 80009F24 00006E64  FC 21 02 7A */	fmadd f1, f1, f9, f0
/* 80009F28 00006E68  4E 80 00 20 */	blr 
.endfn update_INTERPOLATE_BSPLINE_dataMore3___Q27JStudio19TFunctionValue_listFRCQ27JStudio19TFunctionValue_listRCQ37JStudio19TFunctionValue_list11TIndexData_

.fn __ct__Q27JStudio29TFunctionValue_list_parameterFv, global
/* 80009F2C 00006E6C  3C C0 80 4A */	lis r6, __vt__Q27JStudio14TFunctionValue@ha
/* 80009F30 00006E70  3C A0 80 51 */	lis r5, __float_nan@ha
/* 80009F34 00006E74  38 06 E5 28 */	addi r0, r6, __vt__Q27JStudio14TFunctionValue@l
/* 80009F38 00006E78  3C 80 80 4A */	lis r4, __vt__Q27JStudio29TFunctionValue_list_parameter@ha
/* 80009F3C 00006E7C  90 03 00 00 */	stw r0, 0(r3)
/* 80009F40 00006E80  38 C5 48 B0 */	addi r6, r5, __float_nan@l
/* 80009F44 00006E84  38 A0 00 00 */	li r5, 0
/* 80009F48 00006E88  38 04 E4 88 */	addi r0, r4, __vt__Q27JStudio29TFunctionValue_list_parameter@l
/* 80009F4C 00006E8C  C0 06 00 00 */	lfs f0, 0(r6)
/* 80009F50 00006E90  D8 03 00 08 */	stfd f0, 8(r3)
/* 80009F54 00006E94  C8 03 00 08 */	lfd f0, 8(r3)
/* 80009F58 00006E98  D8 03 00 10 */	stfd f0, 0x10(r3)
/* 80009F5C 00006E9C  C8 03 00 08 */	lfd f0, 8(r3)
/* 80009F60 00006EA0  D8 03 00 18 */	stfd f0, 0x18(r3)
/* 80009F64 00006EA4  98 A3 00 20 */	stb r5, 0x20(r3)
/* 80009F68 00006EA8  98 A3 00 21 */	stb r5, 0x21(r3)
/* 80009F6C 00006EAC  C8 03 00 08 */	lfd f0, 8(r3)
/* 80009F70 00006EB0  D8 03 00 28 */	stfd f0, 0x28(r3)
/* 80009F74 00006EB4  C8 03 00 08 */	lfd f0, 8(r3)
/* 80009F78 00006EB8  D8 03 00 30 */	stfd f0, 0x30(r3)
/* 80009F7C 00006EBC  90 A3 00 38 */	stw r5, 0x38(r3)
/* 80009F80 00006EC0  90 A3 00 3C */	stw r5, 0x3c(r3)
/* 80009F84 00006EC4  90 A3 00 40 */	stw r5, 0x40(r3)
/* 80009F88 00006EC8  90 03 00 00 */	stw r0, 0(r3)
/* 80009F8C 00006ECC  90 A3 00 44 */	stw r5, 0x44(r3)
/* 80009F90 00006ED0  90 A3 00 48 */	stw r5, 0x48(r3)
/* 80009F94 00006ED4  90 A3 00 4C */	stw r5, 0x4c(r3)
/* 80009F98 00006ED8  80 03 00 4C */	lwz r0, 0x4c(r3)
/* 80009F9C 00006EDC  90 03 00 50 */	stw r0, 0x50(r3)
/* 80009FA0 00006EE0  80 03 00 4C */	lwz r0, 0x4c(r3)
/* 80009FA4 00006EE4  90 03 00 54 */	stw r0, 0x54(r3)
/* 80009FA8 00006EE8  90 A3 00 58 */	stw r5, 0x58(r3)
/* 80009FAC 00006EEC  4E 80 00 20 */	blr 
.endfn __ct__Q27JStudio29TFunctionValue_list_parameterFv

.fn getType__Q27JStudio29TFunctionValue_list_parameterCFv, global
/* 80009FB0 00006EF0  38 60 00 05 */	li r3, 5
/* 80009FB4 00006EF4  4E 80 00 20 */	blr 
.endfn getType__Q27JStudio29TFunctionValue_list_parameterCFv

.fn getAttributeSet__Q27JStudio29TFunctionValue_list_parameterFv, global
/* 80009FB8 00006EF8  28 04 00 00 */	cmplwi r4, 0
/* 80009FBC 00006EFC  7C 85 23 78 */	mr r5, r4
/* 80009FC0 00006F00  41 82 00 08 */	beq .L_80009FC8
/* 80009FC4 00006F04  38 A5 00 40 */	addi r5, r5, 0x40
.L_80009FC8:
/* 80009FC8 00006F08  28 04 00 00 */	cmplwi r4, 0
/* 80009FCC 00006F0C  41 82 00 08 */	beq .L_80009FD4
/* 80009FD0 00006F10  38 84 00 08 */	addi r4, r4, 8
.L_80009FD4:
/* 80009FD4 00006F14  38 00 00 00 */	li r0, 0
/* 80009FD8 00006F18  90 03 00 00 */	stw r0, 0(r3)
/* 80009FDC 00006F1C  90 83 00 04 */	stw r4, 4(r3)
/* 80009FE0 00006F20  90 A3 00 08 */	stw r5, 8(r3)
/* 80009FE4 00006F24  4E 80 00 20 */	blr 
.endfn getAttributeSet__Q27JStudio29TFunctionValue_list_parameterFv

.fn data_set__Q27JStudio29TFunctionValue_list_parameterFPCfUl, global
/* 80009FE8 00006F28  90 83 00 44 */	stw r4, 0x44(r3)
/* 80009FEC 00006F2C  90 A3 00 48 */	stw r5, 0x48(r3)
/* 80009FF0 00006F30  80 03 00 44 */	lwz r0, 0x44(r3)
/* 80009FF4 00006F34  90 03 00 4C */	stw r0, 0x4c(r3)
/* 80009FF8 00006F38  80 03 00 48 */	lwz r0, 0x48(r3)
/* 80009FFC 00006F3C  80 83 00 44 */	lwz r4, 0x44(r3)
/* 8000A000 00006F40  54 00 18 38 */	slwi r0, r0, 3
/* 8000A004 00006F44  7C 04 02 14 */	add r0, r4, r0
/* 8000A008 00006F48  90 03 00 50 */	stw r0, 0x50(r3)
/* 8000A00C 00006F4C  80 03 00 4C */	lwz r0, 0x4c(r3)
/* 8000A010 00006F50  90 03 00 54 */	stw r0, 0x54(r3)
/* 8000A014 00006F54  4E 80 00 20 */	blr 
.endfn data_set__Q27JStudio29TFunctionValue_list_parameterFPCfUl

.fn initialize__Q27JStudio29TFunctionValue_list_parameterFv, global
/* 8000A018 00006F58  3C A0 80 51 */	lis r5, __float_nan@ha
/* 8000A01C 00006F5C  38 80 00 00 */	li r4, 0
/* 8000A020 00006F60  C0 05 48 B0 */	lfs f0, __float_nan@l(r5)
/* 8000A024 00006F64  D8 03 00 08 */	stfd f0, 8(r3)
/* 8000A028 00006F68  C8 03 00 08 */	lfd f0, 8(r3)
/* 8000A02C 00006F6C  D8 03 00 10 */	stfd f0, 0x10(r3)
/* 8000A030 00006F70  C8 03 00 08 */	lfd f0, 8(r3)
/* 8000A034 00006F74  D8 03 00 18 */	stfd f0, 0x18(r3)
/* 8000A038 00006F78  98 83 00 20 */	stb r4, 0x20(r3)
/* 8000A03C 00006F7C  98 83 00 21 */	stb r4, 0x21(r3)
/* 8000A040 00006F80  90 83 00 38 */	stw r4, 0x38(r3)
/* 8000A044 00006F84  90 83 00 3C */	stw r4, 0x3c(r3)
/* 8000A048 00006F88  90 83 00 40 */	stw r4, 0x40(r3)
/* 8000A04C 00006F8C  90 83 00 44 */	stw r4, 0x44(r3)
/* 8000A050 00006F90  90 83 00 48 */	stw r4, 0x48(r3)
/* 8000A054 00006F94  90 83 00 4C */	stw r4, 0x4c(r3)
/* 8000A058 00006F98  80 03 00 4C */	lwz r0, 0x4c(r3)
/* 8000A05C 00006F9C  90 03 00 50 */	stw r0, 0x50(r3)
/* 8000A060 00006FA0  80 03 00 4C */	lwz r0, 0x4c(r3)
/* 8000A064 00006FA4  90 03 00 54 */	stw r0, 0x54(r3)
/* 8000A068 00006FA8  90 83 00 58 */	stw r4, 0x58(r3)
/* 8000A06C 00006FAC  4E 80 00 20 */	blr 
.endfn initialize__Q27JStudio29TFunctionValue_list_parameterFv

.fn prepare__Q27JStudio29TFunctionValue_list_parameterFv, global
/* 8000A070 00006FB0  88 03 00 20 */	lbz r0, 0x20(r3)
/* 8000A074 00006FB4  7C 00 07 74 */	extsb r0, r0
/* 8000A078 00006FB8  2C 00 00 02 */	cmpwi r0, 2
/* 8000A07C 00006FBC  41 82 00 50 */	beq .L_8000A0CC
/* 8000A080 00006FC0  40 80 00 14 */	bge .L_8000A094
/* 8000A084 00006FC4  2C 00 00 00 */	cmpwi r0, 0
/* 8000A088 00006FC8  41 82 00 1C */	beq .L_8000A0A4
/* 8000A08C 00006FCC  40 80 00 2C */	bge .L_8000A0B8
/* 8000A090 00006FD0  48 00 00 14 */	b .L_8000A0A4
.L_8000A094:
/* 8000A094 00006FD4  2C 00 00 04 */	cmpwi r0, 4
/* 8000A098 00006FD8  41 82 00 5C */	beq .L_8000A0F4
/* 8000A09C 00006FDC  40 80 00 08 */	bge .L_8000A0A4
/* 8000A0A0 00006FE0  48 00 00 40 */	b .L_8000A0E0
.L_8000A0A4:
/* 8000A0A4 00006FE4  C8 22 80 40 */	lfd f1, lbl_805163A0@sda21(r2)
/* 8000A0A8 00006FE8  C8 02 80 48 */	lfd f0, lbl_805163A8@sda21(r2)
/* 8000A0AC 00006FEC  D8 23 00 28 */	stfd f1, 0x28(r3)
/* 8000A0B0 00006FF0  D8 03 00 30 */	stfd f0, 0x30(r3)
/* 8000A0B4 00006FF4  48 00 00 60 */	b .L_8000A114
.L_8000A0B8:
/* 8000A0B8 00006FF8  C8 22 80 40 */	lfd f1, lbl_805163A0@sda21(r2)
/* 8000A0BC 00006FFC  C8 02 80 80 */	lfd f0, lbl_805163E0@sda21(r2)
/* 8000A0C0 00007000  D8 23 00 28 */	stfd f1, 0x28(r3)
/* 8000A0C4 00007004  D8 03 00 30 */	stfd f0, 0x30(r3)
/* 8000A0C8 00007008  48 00 00 4C */	b .L_8000A114
.L_8000A0CC:
/* 8000A0CC 0000700C  C8 23 00 08 */	lfd f1, 8(r3)
/* 8000A0D0 00007010  C8 02 80 80 */	lfd f0, lbl_805163E0@sda21(r2)
/* 8000A0D4 00007014  D8 23 00 28 */	stfd f1, 0x28(r3)
/* 8000A0D8 00007018  D8 03 00 30 */	stfd f0, 0x30(r3)
/* 8000A0DC 0000701C  48 00 00 38 */	b .L_8000A114
.L_8000A0E0:
/* 8000A0E0 00007020  C8 23 00 10 */	lfd f1, 0x10(r3)
/* 8000A0E4 00007024  C8 02 80 80 */	lfd f0, lbl_805163E0@sda21(r2)
/* 8000A0E8 00007028  D8 23 00 28 */	stfd f1, 0x28(r3)
/* 8000A0EC 0000702C  D8 03 00 30 */	stfd f0, 0x30(r3)
/* 8000A0F0 00007030  48 00 00 24 */	b .L_8000A114
.L_8000A0F4:
/* 8000A0F4 00007034  C8 23 00 08 */	lfd f1, 8(r3)
/* 8000A0F8 00007038  C8 03 00 10 */	lfd f0, 0x10(r3)
/* 8000A0FC 0000703C  C8 42 80 68 */	lfd f2, lbl_805163C8@sda21(r2)
/* 8000A100 00007040  FC 21 00 2A */	fadd f1, f1, f0
/* 8000A104 00007044  C8 02 80 80 */	lfd f0, lbl_805163E0@sda21(r2)
/* 8000A108 00007048  FC 22 00 72 */	fmul f1, f2, f1
/* 8000A10C 0000704C  D8 23 00 28 */	stfd f1, 0x28(r3)
/* 8000A110 00007050  D8 03 00 30 */	stfd f0, 0x30(r3)
.L_8000A114:
/* 8000A114 00007054  80 03 00 40 */	lwz r0, 0x40(r3)
/* 8000A118 00007058  2C 00 00 02 */	cmpwi r0, 2
/* 8000A11C 0000705C  41 82 00 44 */	beq .L_8000A160
/* 8000A120 00007060  40 80 00 14 */	bge .L_8000A134
/* 8000A124 00007064  2C 00 00 00 */	cmpwi r0, 0
/* 8000A128 00007068  41 82 00 18 */	beq .L_8000A140
/* 8000A12C 0000706C  40 80 00 24 */	bge .L_8000A150
/* 8000A130 00007070  48 00 00 10 */	b .L_8000A140
.L_8000A134:
/* 8000A134 00007074  2C 00 00 04 */	cmpwi r0, 4
/* 8000A138 00007078  40 80 00 08 */	bge .L_8000A140
/* 8000A13C 0000707C  48 00 00 34 */	b .L_8000A170
.L_8000A140:
/* 8000A140 00007080  3C 80 80 01 */	lis r4, update_INTERPOLATE_NONE___Q27JStudio29TFunctionValue_list_parameterFRCQ27JStudio29TFunctionValue_list_parameterd@ha
/* 8000A144 00007084  38 04 A9 58 */	addi r0, r4, update_INTERPOLATE_NONE___Q27JStudio29TFunctionValue_list_parameterFRCQ27JStudio29TFunctionValue_list_parameterd@l
/* 8000A148 00007088  90 03 00 58 */	stw r0, 0x58(r3)
/* 8000A14C 0000708C  4E 80 00 20 */	blr 
.L_8000A150:
/* 8000A150 00007090  3C 80 80 01 */	lis r4, update_INTERPOLATE_LINEAR___Q27JStudio29TFunctionValue_list_parameterFRCQ27JStudio29TFunctionValue_list_parameterd@ha
/* 8000A154 00007094  38 04 A9 64 */	addi r0, r4, update_INTERPOLATE_LINEAR___Q27JStudio29TFunctionValue_list_parameterFRCQ27JStudio29TFunctionValue_list_parameterd@l
/* 8000A158 00007098  90 03 00 58 */	stw r0, 0x58(r3)
/* 8000A15C 0000709C  4E 80 00 20 */	blr 
.L_8000A160:
/* 8000A160 000070A0  3C 80 80 01 */	lis r4, update_INTERPOLATE_PLATEAU___Q27JStudio29TFunctionValue_list_parameterFRCQ27JStudio29TFunctionValue_list_parameterd@ha
/* 8000A164 000070A4  38 04 A9 94 */	addi r0, r4, update_INTERPOLATE_PLATEAU___Q27JStudio29TFunctionValue_list_parameterFRCQ27JStudio29TFunctionValue_list_parameterd@l
/* 8000A168 000070A8  90 03 00 58 */	stw r0, 0x58(r3)
/* 8000A16C 000070AC  4E 80 00 20 */	blr 
.L_8000A170:
/* 8000A170 000070B0  3C 80 80 01 */	lis r4, update_INTERPOLATE_BSPLINE_dataMore3___Q27JStudio29TFunctionValue_list_parameterFRCQ27JStudio29TFunctionValue_list_parameterd@ha
/* 8000A174 000070B4  38 04 AA 00 */	addi r0, r4, update_INTERPOLATE_BSPLINE_dataMore3___Q27JStudio29TFunctionValue_list_parameterFRCQ27JStudio29TFunctionValue_list_parameterd@l
/* 8000A178 000070B8  90 03 00 58 */	stw r0, 0x58(r3)
/* 8000A17C 000070BC  80 03 00 48 */	lwz r0, 0x48(r3)
/* 8000A180 000070C0  28 00 00 02 */	cmplwi r0, 2
/* 8000A184 000070C4  4C 82 00 20 */	bnelr 
/* 8000A188 000070C8  3C 80 80 01 */	lis r4, update_INTERPOLATE_LINEAR___Q27JStudio29TFunctionValue_list_parameterFRCQ27JStudio29TFunctionValue_list_parameterd@ha
/* 8000A18C 000070CC  38 04 A9 64 */	addi r0, r4, update_INTERPOLATE_LINEAR___Q27JStudio29TFunctionValue_list_parameterFRCQ27JStudio29TFunctionValue_list_parameterd@l
/* 8000A190 000070D0  90 03 00 58 */	stw r0, 0x58(r3)
/* 8000A194 000070D4  4E 80 00 20 */	blr 
.endfn prepare__Q27JStudio29TFunctionValue_list_parameterFv

.fn getValue__Q27JStudio29TFunctionValue_list_parameterFd, global
/* 8000A198 000070D8  94 21 FF 90 */	stwu r1, -0x70(r1)
/* 8000A19C 000070DC  7C 08 02 A6 */	mflr r0
/* 8000A1A0 000070E0  90 01 00 74 */	stw r0, 0x74(r1)
/* 8000A1A4 000070E4  DB E1 00 60 */	stfd f31, 0x60(r1)
/* 8000A1A8 000070E8  F3 E1 00 68 */	psq_st f31, 104(r1), 0, qr0
/* 8000A1AC 000070EC  DB C1 00 50 */	stfd f30, 0x50(r1)
/* 8000A1B0 000070F0  F3 C1 00 58 */	psq_st f30, 88(r1), 0, qr0
/* 8000A1B4 000070F4  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 8000A1B8 000070F8  D8 21 00 08 */	stfd f1, 8(r1)
/* 8000A1BC 000070FC  7C 7F 1B 78 */	mr r31, r3
/* 8000A1C0 00007100  C8 43 00 28 */	lfd f2, 0x28(r3)
/* 8000A1C4 00007104  80 63 00 48 */	lwz r3, 0x48(r3)
/* 8000A1C8 00007108  FC 01 10 28 */	fsub f0, f1, f2
/* 8000A1CC 0000710C  C8 3F 00 30 */	lfd f1, 0x30(r31)
/* 8000A1D0 00007110  88 9F 00 21 */	lbz r4, 0x21(r31)
/* 8000A1D4 00007114  38 03 FF FF */	addi r0, r3, -1
/* 8000A1D8 00007118  80 7F 00 44 */	lwz r3, 0x44(r31)
/* 8000A1DC 0000711C  54 00 18 38 */	slwi r0, r0, 3
/* 8000A1E0 00007120  7C 84 07 74 */	extsb r4, r4
/* 8000A1E4 00007124  FC 61 10 3A */	fmadd f3, f1, f0, f2
/* 8000A1E8 00007128  2C 04 00 02 */	cmpwi r4, 2
/* 8000A1EC 0000712C  C3 E3 00 00 */	lfs f31, 0(r3)
/* 8000A1F0 00007130  7F C3 04 2E */	lfsx f30, r3, r0
/* 8000A1F4 00007134  41 82 01 B4 */	beq .L_8000A3A8
/* 8000A1F8 00007138  40 80 00 14 */	bge .L_8000A20C
/* 8000A1FC 0000713C  2C 04 00 00 */	cmpwi r4, 0
/* 8000A200 00007140  41 82 00 1C */	beq .L_8000A21C
/* 8000A204 00007144  40 80 00 DC */	bge .L_8000A2E0
/* 8000A208 00007148  48 00 00 14 */	b .L_8000A21C
.L_8000A20C:
/* 8000A20C 0000714C  2C 04 00 04 */	cmpwi r4, 4
/* 8000A210 00007150  41 82 03 38 */	beq .L_8000A548
/* 8000A214 00007154  40 80 00 08 */	bge .L_8000A21C
/* 8000A218 00007158  48 00 02 5C */	b .L_8000A474
.L_8000A21C:
/* 8000A21C 0000715C  C8 3F 00 08 */	lfd f1, 8(r31)
/* 8000A220 00007160  C8 02 80 40 */	lfd f0, lbl_805163A0@sda21(r2)
/* 8000A224 00007164  FC 23 08 28 */	fsub f1, f3, f1
/* 8000A228 00007168  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8000A22C 0000716C  40 80 00 50 */	bge .L_8000A27C
/* 8000A230 00007170  80 9F 00 38 */	lwz r4, 0x38(r31)
/* 8000A234 00007174  38 00 00 00 */	li r0, 0
/* 8000A238 00007178  3C 60 80 47 */	lis r3, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@ha
/* 8000A23C 0000717C  28 04 00 04 */	cmplwi r4, 4
/* 8000A240 00007180  90 01 00 34 */	stw r0, 0x34(r1)
/* 8000A244 00007184  54 84 10 3A */	slwi r4, r4, 2
/* 8000A248 00007188  38 03 32 F0 */	addi r0, r3, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@l
/* 8000A24C 0000718C  7C 60 22 14 */	add r3, r0, r4
/* 8000A250 00007190  41 80 00 08 */	blt .L_8000A258
/* 8000A254 00007194  38 61 00 34 */	addi r3, r1, 0x34
.L_8000A258:
/* 8000A258 00007198  81 83 00 00 */	lwz r12, 0(r3)
/* 8000A25C 0000719C  28 0C 00 00 */	cmplwi r12, 0
/* 8000A260 000071A0  40 82 00 0C */	bne .L_8000A26C
/* 8000A264 000071A4  3C 60 80 47 */	lis r3, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@ha
/* 8000A268 000071A8  81 83 32 F0 */	lwz r12, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@l(r3)
.L_8000A26C:
/* 8000A26C 000071AC  C8 5F 00 18 */	lfd f2, 0x18(r31)
/* 8000A270 000071B0  7D 89 03 A6 */	mtctr r12
/* 8000A274 000071B4  4E 80 04 21 */	bctrl 
/* 8000A278 000071B8  48 00 00 5C */	b .L_8000A2D4
.L_8000A27C:
/* 8000A27C 000071BC  C8 1F 00 18 */	lfd f0, 0x18(r31)
/* 8000A280 000071C0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8000A284 000071C4  4C 41 13 82 */	cror 2, 1, 2
/* 8000A288 000071C8  40 82 00 4C */	bne .L_8000A2D4
/* 8000A28C 000071CC  80 9F 00 3C */	lwz r4, 0x3c(r31)
/* 8000A290 000071D0  38 00 00 00 */	li r0, 0
/* 8000A294 000071D4  3C 60 80 47 */	lis r3, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@ha
/* 8000A298 000071D8  28 04 00 04 */	cmplwi r4, 4
/* 8000A29C 000071DC  90 01 00 30 */	stw r0, 0x30(r1)
/* 8000A2A0 000071E0  54 84 10 3A */	slwi r4, r4, 2
/* 8000A2A4 000071E4  38 03 32 F0 */	addi r0, r3, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@l
/* 8000A2A8 000071E8  7C 60 22 14 */	add r3, r0, r4
/* 8000A2AC 000071EC  41 80 00 08 */	blt .L_8000A2B4
/* 8000A2B0 000071F0  38 61 00 30 */	addi r3, r1, 0x30
.L_8000A2B4:
/* 8000A2B4 000071F4  81 83 00 00 */	lwz r12, 0(r3)
/* 8000A2B8 000071F8  28 0C 00 00 */	cmplwi r12, 0
/* 8000A2BC 000071FC  40 82 00 0C */	bne .L_8000A2C8
/* 8000A2C0 00007200  3C 60 80 47 */	lis r3, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@ha
/* 8000A2C4 00007204  81 83 32 F0 */	lwz r12, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@l(r3)
.L_8000A2C8:
/* 8000A2C8 00007208  C8 5F 00 18 */	lfd f2, 0x18(r31)
/* 8000A2CC 0000720C  7D 89 03 A6 */	mtctr r12
/* 8000A2D0 00007210  4E 80 04 21 */	bctrl 
.L_8000A2D4:
/* 8000A2D4 00007214  C8 1F 00 08 */	lfd f0, 8(r31)
/* 8000A2D8 00007218  FC 21 00 2A */	fadd f1, f1, f0
/* 8000A2DC 0000721C  48 00 03 44 */	b .L_8000A620
.L_8000A2E0:
/* 8000A2E0 00007220  C8 5F 00 08 */	lfd f2, 8(r31)
/* 8000A2E4 00007224  C8 02 80 40 */	lfd f0, lbl_805163A0@sda21(r2)
/* 8000A2E8 00007228  FC 23 10 2A */	fadd f1, f3, f2
/* 8000A2EC 0000722C  FC 21 10 28 */	fsub f1, f1, f2
/* 8000A2F0 00007230  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8000A2F4 00007234  40 80 00 50 */	bge .L_8000A344
/* 8000A2F8 00007238  80 9F 00 38 */	lwz r4, 0x38(r31)
/* 8000A2FC 0000723C  38 00 00 00 */	li r0, 0
/* 8000A300 00007240  3C 60 80 47 */	lis r3, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@ha
/* 8000A304 00007244  28 04 00 04 */	cmplwi r4, 4
/* 8000A308 00007248  90 01 00 2C */	stw r0, 0x2c(r1)
/* 8000A30C 0000724C  54 84 10 3A */	slwi r4, r4, 2
/* 8000A310 00007250  38 03 32 F0 */	addi r0, r3, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@l
/* 8000A314 00007254  7C 60 22 14 */	add r3, r0, r4
/* 8000A318 00007258  41 80 00 08 */	blt .L_8000A320
/* 8000A31C 0000725C  38 61 00 2C */	addi r3, r1, 0x2c
.L_8000A320:
/* 8000A320 00007260  81 83 00 00 */	lwz r12, 0(r3)
/* 8000A324 00007264  28 0C 00 00 */	cmplwi r12, 0
/* 8000A328 00007268  40 82 00 0C */	bne .L_8000A334
/* 8000A32C 0000726C  3C 60 80 47 */	lis r3, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@ha
/* 8000A330 00007270  81 83 32 F0 */	lwz r12, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@l(r3)
.L_8000A334:
/* 8000A334 00007274  C8 5F 00 18 */	lfd f2, 0x18(r31)
/* 8000A338 00007278  7D 89 03 A6 */	mtctr r12
/* 8000A33C 0000727C  4E 80 04 21 */	bctrl 
/* 8000A340 00007280  48 00 00 5C */	b .L_8000A39C
.L_8000A344:
/* 8000A344 00007284  C8 1F 00 18 */	lfd f0, 0x18(r31)
/* 8000A348 00007288  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8000A34C 0000728C  4C 41 13 82 */	cror 2, 1, 2
/* 8000A350 00007290  40 82 00 4C */	bne .L_8000A39C
/* 8000A354 00007294  80 9F 00 3C */	lwz r4, 0x3c(r31)
/* 8000A358 00007298  38 00 00 00 */	li r0, 0
/* 8000A35C 0000729C  3C 60 80 47 */	lis r3, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@ha
/* 8000A360 000072A0  28 04 00 04 */	cmplwi r4, 4
/* 8000A364 000072A4  90 01 00 28 */	stw r0, 0x28(r1)
/* 8000A368 000072A8  54 84 10 3A */	slwi r4, r4, 2
/* 8000A36C 000072AC  38 03 32 F0 */	addi r0, r3, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@l
/* 8000A370 000072B0  7C 60 22 14 */	add r3, r0, r4
/* 8000A374 000072B4  41 80 00 08 */	blt .L_8000A37C
/* 8000A378 000072B8  38 61 00 28 */	addi r3, r1, 0x28
.L_8000A37C:
/* 8000A37C 000072BC  81 83 00 00 */	lwz r12, 0(r3)
/* 8000A380 000072C0  28 0C 00 00 */	cmplwi r12, 0
/* 8000A384 000072C4  40 82 00 0C */	bne .L_8000A390
/* 8000A388 000072C8  3C 60 80 47 */	lis r3, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@ha
/* 8000A38C 000072CC  81 83 32 F0 */	lwz r12, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@l(r3)
.L_8000A390:
/* 8000A390 000072D0  C8 5F 00 18 */	lfd f2, 0x18(r31)
/* 8000A394 000072D4  7D 89 03 A6 */	mtctr r12
/* 8000A398 000072D8  4E 80 04 21 */	bctrl 
.L_8000A39C:
/* 8000A39C 000072DC  C8 1F 00 08 */	lfd f0, 8(r31)
/* 8000A3A0 000072E0  FC 21 00 2A */	fadd f1, f1, f0
/* 8000A3A4 000072E4  48 00 02 7C */	b .L_8000A620
.L_8000A3A8:
/* 8000A3A8 000072E8  C8 1F 00 10 */	lfd f0, 0x10(r31)
/* 8000A3AC 000072EC  C8 5F 00 08 */	lfd f2, 8(r31)
/* 8000A3B0 000072F0  FC 23 00 2A */	fadd f1, f3, f0
/* 8000A3B4 000072F4  C8 02 80 40 */	lfd f0, lbl_805163A0@sda21(r2)
/* 8000A3B8 000072F8  FC 21 10 28 */	fsub f1, f1, f2
/* 8000A3BC 000072FC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8000A3C0 00007300  40 80 00 50 */	bge .L_8000A410
/* 8000A3C4 00007304  80 9F 00 38 */	lwz r4, 0x38(r31)
/* 8000A3C8 00007308  38 00 00 00 */	li r0, 0
/* 8000A3CC 0000730C  3C 60 80 47 */	lis r3, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@ha
/* 8000A3D0 00007310  28 04 00 04 */	cmplwi r4, 4
/* 8000A3D4 00007314  90 01 00 24 */	stw r0, 0x24(r1)
/* 8000A3D8 00007318  54 84 10 3A */	slwi r4, r4, 2
/* 8000A3DC 0000731C  38 03 32 F0 */	addi r0, r3, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@l
/* 8000A3E0 00007320  7C 60 22 14 */	add r3, r0, r4
/* 8000A3E4 00007324  41 80 00 08 */	blt .L_8000A3EC
/* 8000A3E8 00007328  38 61 00 24 */	addi r3, r1, 0x24
.L_8000A3EC:
/* 8000A3EC 0000732C  81 83 00 00 */	lwz r12, 0(r3)
/* 8000A3F0 00007330  28 0C 00 00 */	cmplwi r12, 0
/* 8000A3F4 00007334  40 82 00 0C */	bne .L_8000A400
/* 8000A3F8 00007338  3C 60 80 47 */	lis r3, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@ha
/* 8000A3FC 0000733C  81 83 32 F0 */	lwz r12, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@l(r3)
.L_8000A400:
/* 8000A400 00007340  C8 5F 00 18 */	lfd f2, 0x18(r31)
/* 8000A404 00007344  7D 89 03 A6 */	mtctr r12
/* 8000A408 00007348  4E 80 04 21 */	bctrl 
/* 8000A40C 0000734C  48 00 00 5C */	b .L_8000A468
.L_8000A410:
/* 8000A410 00007350  C8 1F 00 18 */	lfd f0, 0x18(r31)
/* 8000A414 00007354  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8000A418 00007358  4C 41 13 82 */	cror 2, 1, 2
/* 8000A41C 0000735C  40 82 00 4C */	bne .L_8000A468
/* 8000A420 00007360  80 9F 00 3C */	lwz r4, 0x3c(r31)
/* 8000A424 00007364  38 00 00 00 */	li r0, 0
/* 8000A428 00007368  3C 60 80 47 */	lis r3, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@ha
/* 8000A42C 0000736C  28 04 00 04 */	cmplwi r4, 4
/* 8000A430 00007370  90 01 00 20 */	stw r0, 0x20(r1)
/* 8000A434 00007374  54 84 10 3A */	slwi r4, r4, 2
/* 8000A438 00007378  38 03 32 F0 */	addi r0, r3, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@l
/* 8000A43C 0000737C  7C 60 22 14 */	add r3, r0, r4
/* 8000A440 00007380  41 80 00 08 */	blt .L_8000A448
/* 8000A444 00007384  38 61 00 20 */	addi r3, r1, 0x20
.L_8000A448:
/* 8000A448 00007388  81 83 00 00 */	lwz r12, 0(r3)
/* 8000A44C 0000738C  28 0C 00 00 */	cmplwi r12, 0
/* 8000A450 00007390  40 82 00 0C */	bne .L_8000A45C
/* 8000A454 00007394  3C 60 80 47 */	lis r3, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@ha
/* 8000A458 00007398  81 83 32 F0 */	lwz r12, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@l(r3)
.L_8000A45C:
/* 8000A45C 0000739C  C8 5F 00 18 */	lfd f2, 0x18(r31)
/* 8000A460 000073A0  7D 89 03 A6 */	mtctr r12
/* 8000A464 000073A4  4E 80 04 21 */	bctrl 
.L_8000A468:
/* 8000A468 000073A8  C8 1F 00 08 */	lfd f0, 8(r31)
/* 8000A46C 000073AC  FC 21 00 2A */	fadd f1, f1, f0
/* 8000A470 000073B0  48 00 01 B0 */	b .L_8000A620
.L_8000A474:
/* 8000A474 000073B4  C8 9F 00 08 */	lfd f4, 8(r31)
/* 8000A478 000073B8  C8 1F 00 10 */	lfd f0, 0x10(r31)
/* 8000A47C 000073BC  C8 42 80 68 */	lfd f2, lbl_805163C8@sda21(r2)
/* 8000A480 000073C0  FC 24 00 2A */	fadd f1, f4, f0
/* 8000A484 000073C4  C8 02 80 40 */	lfd f0, lbl_805163A0@sda21(r2)
/* 8000A488 000073C8  FC 22 18 7A */	fmadd f1, f2, f1, f3
/* 8000A48C 000073CC  FC 21 20 28 */	fsub f1, f1, f4
/* 8000A490 000073D0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8000A494 000073D4  40 80 00 50 */	bge .L_8000A4E4
/* 8000A498 000073D8  80 9F 00 38 */	lwz r4, 0x38(r31)
/* 8000A49C 000073DC  38 00 00 00 */	li r0, 0
/* 8000A4A0 000073E0  3C 60 80 47 */	lis r3, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@ha
/* 8000A4A4 000073E4  28 04 00 04 */	cmplwi r4, 4
/* 8000A4A8 000073E8  90 01 00 1C */	stw r0, 0x1c(r1)
/* 8000A4AC 000073EC  54 84 10 3A */	slwi r4, r4, 2
/* 8000A4B0 000073F0  38 03 32 F0 */	addi r0, r3, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@l
/* 8000A4B4 000073F4  7C 60 22 14 */	add r3, r0, r4
/* 8000A4B8 000073F8  41 80 00 08 */	blt .L_8000A4C0
/* 8000A4BC 000073FC  38 61 00 1C */	addi r3, r1, 0x1c
.L_8000A4C0:
/* 8000A4C0 00007400  81 83 00 00 */	lwz r12, 0(r3)
/* 8000A4C4 00007404  28 0C 00 00 */	cmplwi r12, 0
/* 8000A4C8 00007408  40 82 00 0C */	bne .L_8000A4D4
/* 8000A4CC 0000740C  3C 60 80 47 */	lis r3, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@ha
/* 8000A4D0 00007410  81 83 32 F0 */	lwz r12, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@l(r3)
.L_8000A4D4:
/* 8000A4D4 00007414  C8 5F 00 18 */	lfd f2, 0x18(r31)
/* 8000A4D8 00007418  7D 89 03 A6 */	mtctr r12
/* 8000A4DC 0000741C  4E 80 04 21 */	bctrl 
/* 8000A4E0 00007420  48 00 00 5C */	b .L_8000A53C
.L_8000A4E4:
/* 8000A4E4 00007424  C8 1F 00 18 */	lfd f0, 0x18(r31)
/* 8000A4E8 00007428  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8000A4EC 0000742C  4C 41 13 82 */	cror 2, 1, 2
/* 8000A4F0 00007430  40 82 00 4C */	bne .L_8000A53C
/* 8000A4F4 00007434  80 9F 00 3C */	lwz r4, 0x3c(r31)
/* 8000A4F8 00007438  38 00 00 00 */	li r0, 0
/* 8000A4FC 0000743C  3C 60 80 47 */	lis r3, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@ha
/* 8000A500 00007440  28 04 00 04 */	cmplwi r4, 4
/* 8000A504 00007444  90 01 00 18 */	stw r0, 0x18(r1)
/* 8000A508 00007448  54 84 10 3A */	slwi r4, r4, 2
/* 8000A50C 0000744C  38 03 32 F0 */	addi r0, r3, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@l
/* 8000A510 00007450  7C 60 22 14 */	add r3, r0, r4
/* 8000A514 00007454  41 80 00 08 */	blt .L_8000A51C
/* 8000A518 00007458  38 61 00 18 */	addi r3, r1, 0x18
.L_8000A51C:
/* 8000A51C 0000745C  81 83 00 00 */	lwz r12, 0(r3)
/* 8000A520 00007460  28 0C 00 00 */	cmplwi r12, 0
/* 8000A524 00007464  40 82 00 0C */	bne .L_8000A530
/* 8000A528 00007468  3C 60 80 47 */	lis r3, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@ha
/* 8000A52C 0000746C  81 83 32 F0 */	lwz r12, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@l(r3)
.L_8000A530:
/* 8000A530 00007470  C8 5F 00 18 */	lfd f2, 0x18(r31)
/* 8000A534 00007474  7D 89 03 A6 */	mtctr r12
/* 8000A538 00007478  4E 80 04 21 */	bctrl 
.L_8000A53C:
/* 8000A53C 0000747C  C8 1F 00 08 */	lfd f0, 8(r31)
/* 8000A540 00007480  FC 21 00 2A */	fadd f1, f1, f0
/* 8000A544 00007484  48 00 00 DC */	b .L_8000A620
.L_8000A548:
/* 8000A548 00007488  C8 3F 00 08 */	lfd f1, 8(r31)
/* 8000A54C 0000748C  C8 02 80 40 */	lfd f0, lbl_805163A0@sda21(r2)
/* 8000A550 00007490  FC 23 08 28 */	fsub f1, f3, f1
/* 8000A554 00007494  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8000A558 00007498  40 80 00 50 */	bge .L_8000A5A8
/* 8000A55C 0000749C  80 9F 00 38 */	lwz r4, 0x38(r31)
/* 8000A560 000074A0  38 00 00 00 */	li r0, 0
/* 8000A564 000074A4  3C 60 80 47 */	lis r3, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@ha
/* 8000A568 000074A8  28 04 00 04 */	cmplwi r4, 4
/* 8000A56C 000074AC  90 01 00 14 */	stw r0, 0x14(r1)
/* 8000A570 000074B0  54 84 10 3A */	slwi r4, r4, 2
/* 8000A574 000074B4  38 03 32 F0 */	addi r0, r3, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@l
/* 8000A578 000074B8  7C 60 22 14 */	add r3, r0, r4
/* 8000A57C 000074BC  41 80 00 08 */	blt .L_8000A584
/* 8000A580 000074C0  38 61 00 14 */	addi r3, r1, 0x14
.L_8000A584:
/* 8000A584 000074C4  81 83 00 00 */	lwz r12, 0(r3)
/* 8000A588 000074C8  28 0C 00 00 */	cmplwi r12, 0
/* 8000A58C 000074CC  40 82 00 0C */	bne .L_8000A598
/* 8000A590 000074D0  3C 60 80 47 */	lis r3, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@ha
/* 8000A594 000074D4  81 83 32 F0 */	lwz r12, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@l(r3)
.L_8000A598:
/* 8000A598 000074D8  C8 5F 00 18 */	lfd f2, 0x18(r31)
/* 8000A59C 000074DC  7D 89 03 A6 */	mtctr r12
/* 8000A5A0 000074E0  4E 80 04 21 */	bctrl 
/* 8000A5A4 000074E4  48 00 00 5C */	b .L_8000A600
.L_8000A5A8:
/* 8000A5A8 000074E8  C8 1F 00 18 */	lfd f0, 0x18(r31)
/* 8000A5AC 000074EC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8000A5B0 000074F0  4C 41 13 82 */	cror 2, 1, 2
/* 8000A5B4 000074F4  40 82 00 4C */	bne .L_8000A600
/* 8000A5B8 000074F8  80 9F 00 3C */	lwz r4, 0x3c(r31)
/* 8000A5BC 000074FC  38 00 00 00 */	li r0, 0
/* 8000A5C0 00007500  3C 60 80 47 */	lis r3, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@ha
/* 8000A5C4 00007504  28 04 00 04 */	cmplwi r4, 4
/* 8000A5C8 00007508  90 01 00 10 */	stw r0, 0x10(r1)
/* 8000A5CC 0000750C  54 84 10 3A */	slwi r4, r4, 2
/* 8000A5D0 00007510  38 03 32 F0 */	addi r0, r3, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@l
/* 8000A5D4 00007514  7C 60 22 14 */	add r3, r0, r4
/* 8000A5D8 00007518  41 80 00 08 */	blt .L_8000A5E0
/* 8000A5DC 0000751C  38 61 00 10 */	addi r3, r1, 0x10
.L_8000A5E0:
/* 8000A5E0 00007520  81 83 00 00 */	lwz r12, 0(r3)
/* 8000A5E4 00007524  28 0C 00 00 */	cmplwi r12, 0
/* 8000A5E8 00007528  40 82 00 0C */	bne .L_8000A5F4
/* 8000A5EC 0000752C  3C 60 80 47 */	lis r3, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@ha
/* 8000A5F0 00007530  81 83 32 F0 */	lwz r12, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@l(r3)
.L_8000A5F4:
/* 8000A5F4 00007534  C8 5F 00 18 */	lfd f2, 0x18(r31)
/* 8000A5F8 00007538  7D 89 03 A6 */	mtctr r12
/* 8000A5FC 0000753C  4E 80 04 21 */	bctrl 
.L_8000A600:
/* 8000A600 00007540  C8 7F 00 08 */	lfd f3, 8(r31)
/* 8000A604 00007544  FC 5E F8 28 */	fsub f2, f30, f31
/* 8000A608 00007548  C8 1F 00 18 */	lfd f0, 0x18(r31)
/* 8000A60C 0000754C  FC 21 18 2A */	fadd f1, f1, f3
/* 8000A610 00007550  FC 21 18 28 */	fsub f1, f1, f3
/* 8000A614 00007554  FC 21 00 B2 */	fmul f1, f1, f2
/* 8000A618 00007558  FC 01 00 24 */	fdiv f0, f1, f0
/* 8000A61C 0000755C  FC 3F 00 2A */	fadd f1, f31, f0
.L_8000A620:
/* 8000A620 00007560  D8 21 00 08 */	stfd f1, 8(r1)
/* 8000A624 00007564  38 61 00 44 */	addi r3, r1, 0x44
/* 8000A628 00007568  38 81 00 40 */	addi r4, r1, 0x40
/* 8000A62C 0000756C  38 A1 00 3C */	addi r5, r1, 0x3c
/* 8000A630 00007570  80 1F 00 54 */	lwz r0, 0x54(r31)
/* 8000A634 00007574  38 C1 00 38 */	addi r6, r1, 0x38
/* 8000A638 00007578  38 E1 00 08 */	addi r7, r1, 8
/* 8000A63C 0000757C  90 01 00 38 */	stw r0, 0x38(r1)
/* 8000A640 00007580  80 1F 00 50 */	lwz r0, 0x50(r31)
/* 8000A644 00007584  90 01 00 3C */	stw r0, 0x3c(r1)
/* 8000A648 00007588  80 1F 00 4C */	lwz r0, 0x4c(r31)
/* 8000A64C 0000758C  90 01 00 40 */	stw r0, 0x40(r1)
/* 8000A650 00007590  48 00 00 81 */	bl "findUpperBound_binary_current<Q37JStudio29TFunctionValue_list_parameter15TIterator_data_,d>__7JGadgetFQ37JStudio29TFunctionValue_list_parameter15TIterator_data_Q37JStudio29TFunctionValue_list_parameter15TIterator_data_Q37JStudio29TFunctionValue_list_parameter15TIterator_data_RCd"
/* 8000A654 00007594  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8000A658 00007598  90 1F 00 54 */	stw r0, 0x54(r31)
/* 8000A65C 0000759C  80 7F 00 54 */	lwz r3, 0x54(r31)
/* 8000A660 000075A0  80 1F 00 4C */	lwz r0, 0x4c(r31)
/* 8000A664 000075A4  7C 03 00 40 */	cmplw r3, r0
/* 8000A668 000075A8  40 82 00 0C */	bne .L_8000A674
/* 8000A66C 000075AC  C0 23 00 04 */	lfs f1, 4(r3)
/* 8000A670 000075B0  48 00 00 3C */	b .L_8000A6AC
.L_8000A674:
/* 8000A674 000075B4  80 1F 00 50 */	lwz r0, 0x50(r31)
/* 8000A678 000075B8  7C 03 00 40 */	cmplw r3, r0
/* 8000A67C 000075BC  40 82 00 1C */	bne .L_8000A698
/* 8000A680 000075C0  80 7F 00 54 */	lwz r3, 0x54(r31)
/* 8000A684 000075C4  38 03 FF F8 */	addi r0, r3, -8
/* 8000A688 000075C8  90 1F 00 54 */	stw r0, 0x54(r31)
/* 8000A68C 000075CC  80 7F 00 54 */	lwz r3, 0x54(r31)
/* 8000A690 000075D0  C0 23 00 04 */	lfs f1, 4(r3)
/* 8000A694 000075D4  48 00 00 18 */	b .L_8000A6AC
.L_8000A698:
/* 8000A698 000075D8  81 9F 00 58 */	lwz r12, 0x58(r31)
/* 8000A69C 000075DC  7F E3 FB 78 */	mr r3, r31
/* 8000A6A0 000075E0  C8 21 00 08 */	lfd f1, 8(r1)
/* 8000A6A4 000075E4  7D 89 03 A6 */	mtctr r12
/* 8000A6A8 000075E8  4E 80 04 21 */	bctrl 
.L_8000A6AC:
/* 8000A6AC 000075EC  E3 E1 00 68 */	psq_l f31, 104(r1), 0, qr0
/* 8000A6B0 000075F0  CB E1 00 60 */	lfd f31, 0x60(r1)
/* 8000A6B4 000075F4  E3 C1 00 58 */	psq_l f30, 88(r1), 0, qr0
/* 8000A6B8 000075F8  CB C1 00 50 */	lfd f30, 0x50(r1)
/* 8000A6BC 000075FC  80 01 00 74 */	lwz r0, 0x74(r1)
/* 8000A6C0 00007600  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 8000A6C4 00007604  7C 08 03 A6 */	mtlr r0
/* 8000A6C8 00007608  38 21 00 70 */	addi r1, r1, 0x70
/* 8000A6CC 0000760C  4E 80 00 20 */	blr 
.endfn getValue__Q27JStudio29TFunctionValue_list_parameterFd

.fn "findUpperBound_binary_current<Q37JStudio29TFunctionValue_list_parameter15TIterator_data_,d>__7JGadgetFQ37JStudio29TFunctionValue_list_parameter15TIterator_data_Q37JStudio29TFunctionValue_list_parameter15TIterator_data_Q37JStudio29TFunctionValue_list_parameter15TIterator_data_RCd", local
/* 8000A6D0 00007610  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8000A6D4 00007614  7C 08 02 A6 */	mflr r0
/* 8000A6D8 00007618  81 06 00 00 */	lwz r8, 0(r6)
/* 8000A6DC 0000761C  90 01 00 34 */	stw r0, 0x34(r1)
/* 8000A6E0 00007620  38 C1 00 10 */	addi r6, r1, 0x10
/* 8000A6E4 00007624  81 25 00 00 */	lwz r9, 0(r5)
/* 8000A6E8 00007628  38 A1 00 14 */	addi r5, r1, 0x14
/* 8000A6EC 0000762C  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 8000A6F0 00007630  7C 7F 1B 78 */	mr r31, r3
/* 8000A6F4 00007634  80 04 00 00 */	lwz r0, 0(r4)
/* 8000A6F8 00007638  38 81 00 18 */	addi r4, r1, 0x18
/* 8000A6FC 0000763C  89 41 00 08 */	lbz r10, 8(r1)
/* 8000A700 00007640  91 01 00 10 */	stw r8, 0x10(r1)
/* 8000A704 00007644  39 01 00 0C */	addi r8, r1, 0xc
/* 8000A708 00007648  99 41 00 0C */	stb r10, 0xc(r1)
/* 8000A70C 0000764C  91 21 00 14 */	stw r9, 0x14(r1)
/* 8000A710 00007650  90 01 00 18 */	stw r0, 0x18(r1)
/* 8000A714 00007654  48 00 00 19 */	bl "findUpperBound_binary_current<Q37JStudio29TFunctionValue_list_parameter15TIterator_data_,d,Q23std7less<d>>__7JGadgetFQ37JStudio29TFunctionValue_list_parameter15TIterator_data_Q37JStudio29TFunctionValue_list_parameter15TIterator_data_Q37JStudio29TFunctionValue_list_parameter15TIterator_data_RCdQ23std7less<d>"
/* 8000A718 00007658  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8000A71C 0000765C  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 8000A720 00007660  7C 08 03 A6 */	mtlr r0
/* 8000A724 00007664  38 21 00 30 */	addi r1, r1, 0x30
/* 8000A728 00007668  4E 80 00 20 */	blr 
.endfn "findUpperBound_binary_current<Q37JStudio29TFunctionValue_list_parameter15TIterator_data_,d>__7JGadgetFQ37JStudio29TFunctionValue_list_parameter15TIterator_data_Q37JStudio29TFunctionValue_list_parameter15TIterator_data_Q37JStudio29TFunctionValue_list_parameter15TIterator_data_RCd"

.fn "findUpperBound_binary_current<Q37JStudio29TFunctionValue_list_parameter15TIterator_data_,d,Q23std7less<d>>__7JGadgetFQ37JStudio29TFunctionValue_list_parameter15TIterator_data_Q37JStudio29TFunctionValue_list_parameter15TIterator_data_Q37JStudio29TFunctionValue_list_parameter15TIterator_data_RCdQ23std7less<d>", local
/* 8000A72C 0000766C  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 8000A730 00007670  7C 08 02 A6 */	mflr r0
/* 8000A734 00007674  81 26 00 00 */	lwz r9, 0(r6)
/* 8000A738 00007678  90 01 00 64 */	stw r0, 0x64(r1)
/* 8000A73C 0000767C  80 05 00 00 */	lwz r0, 0(r5)
/* 8000A740 00007680  93 E1 00 5C */	stw r31, 0x5c(r1)
/* 8000A744 00007684  7C 7F 1B 78 */	mr r31, r3
/* 8000A748 00007688  7C 09 00 50 */	subf r0, r9, r0
/* 8000A74C 0000768C  7C 03 00 34 */	cntlzw r3, r0
/* 8000A750 00007690  54 60 DE 3F */	rlwinm. r0, r3, 0x1b, 0x18, 0x1f
/* 8000A754 00007694  54 60 D9 7E */	srwi r0, r3, 5
/* 8000A758 00007698  40 82 00 18 */	bne .L_8000A770
/* 8000A75C 0000769C  C8 27 00 00 */	lfd f1, 0(r7)
/* 8000A760 000076A0  C0 09 00 00 */	lfs f0, 0(r9)
/* 8000A764 000076A4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8000A768 000076A8  7C 00 00 26 */	mfcr r0
/* 8000A76C 000076AC  54 00 0F FE */	srwi r0, r0, 0x1f
.L_8000A770:
/* 8000A770 000076B0  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 8000A774 000076B4  41 82 00 F4 */	beq .L_8000A868
/* 8000A778 000076B8  80 84 00 00 */	lwz r4, 0(r4)
/* 8000A77C 000076BC  80 66 00 00 */	lwz r3, 0(r6)
/* 8000A780 000076C0  88 08 00 00 */	lbz r0, 0(r8)
/* 8000A784 000076C4  7C 04 18 40 */	cmplw r4, r3
/* 8000A788 000076C8  90 81 00 50 */	stw r4, 0x50(r1)
/* 8000A78C 000076CC  90 61 00 54 */	stw r3, 0x54(r1)
/* 8000A790 000076D0  98 01 00 14 */	stb r0, 0x14(r1)
/* 8000A794 000076D4  40 82 00 10 */	bne .L_8000A7A4
/* 8000A798 000076D8  90 61 00 4C */	stw r3, 0x4c(r1)
/* 8000A79C 000076DC  38 61 00 4C */	addi r3, r1, 0x4c
/* 8000A7A0 000076E0  48 00 01 9C */	b .L_8000A93C
.L_8000A7A4:
/* 8000A7A4 000076E4  38 63 FF F8 */	addi r3, r3, -8
/* 8000A7A8 000076E8  90 81 00 30 */	stw r4, 0x30(r1)
/* 8000A7AC 000076EC  7C 04 18 50 */	subf r0, r4, r3
/* 8000A7B0 000076F0  C8 27 00 00 */	lfd f1, 0(r7)
/* 8000A7B4 000076F4  7C 00 16 70 */	srawi r0, r0, 2
/* 8000A7B8 000076F8  90 61 00 54 */	stw r3, 0x54(r1)
/* 8000A7BC 000076FC  7C 00 01 94 */	addze r0, r0
/* 8000A7C0 00007700  38 80 00 01 */	li r4, 1
/* 8000A7C4 00007704  90 61 00 34 */	stw r3, 0x34(r1)
/* 8000A7C8 00007708  54 05 F8 7E */	srwi r5, r0, 1
/* 8000A7CC 0000770C  90 61 00 3C */	stw r3, 0x3c(r1)
.L_8000A7D0:
/* 8000A7D0 00007710  80 61 00 3C */	lwz r3, 0x3c(r1)
/* 8000A7D4 00007714  C0 03 00 00 */	lfs f0, 0(r3)
/* 8000A7D8 00007718  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8000A7DC 0000771C  41 80 00 20 */	blt .L_8000A7FC
/* 8000A7E0 00007720  2C 04 00 01 */	cmpwi r4, 1
/* 8000A7E4 00007724  40 82 00 44 */	bne .L_8000A828
/* 8000A7E8 00007728  38 03 00 08 */	addi r0, r3, 8
/* 8000A7EC 0000772C  38 61 00 4C */	addi r3, r1, 0x4c
/* 8000A7F0 00007730  90 01 00 3C */	stw r0, 0x3c(r1)
/* 8000A7F4 00007734  90 01 00 4C */	stw r0, 0x4c(r1)
/* 8000A7F8 00007738  48 00 01 44 */	b .L_8000A93C
.L_8000A7FC:
/* 8000A7FC 0000773C  7C A4 28 51 */	subf. r5, r4, r5
/* 8000A800 00007740  90 61 00 54 */	stw r3, 0x54(r1)
/* 8000A804 00007744  41 81 00 10 */	bgt .L_8000A814
/* 8000A808 00007748  80 01 00 50 */	lwz r0, 0x50(r1)
/* 8000A80C 0000774C  90 01 00 3C */	stw r0, 0x3c(r1)
/* 8000A810 00007750  48 00 00 18 */	b .L_8000A828
.L_8000A814:
/* 8000A814 00007754  54 80 18 38 */	slwi r0, r4, 3
/* 8000A818 00007758  54 84 18 38 */	slwi r4, r4, 3
/* 8000A81C 0000775C  7C 00 18 50 */	subf r0, r0, r3
/* 8000A820 00007760  90 01 00 3C */	stw r0, 0x3c(r1)
/* 8000A824 00007764  4B FF FF AC */	b .L_8000A7D0
.L_8000A828:
/* 8000A828 00007768  80 81 00 54 */	lwz r4, 0x54(r1)
/* 8000A82C 0000776C  7C E6 3B 78 */	mr r6, r7
/* 8000A830 00007770  89 01 00 14 */	lbz r8, 0x14(r1)
/* 8000A834 00007774  38 61 00 4C */	addi r3, r1, 0x4c
/* 8000A838 00007778  39 24 00 08 */	addi r9, r4, 8
/* 8000A83C 0000777C  80 01 00 3C */	lwz r0, 0x3c(r1)
/* 8000A840 00007780  91 21 00 54 */	stw r9, 0x54(r1)
/* 8000A844 00007784  38 81 00 28 */	addi r4, r1, 0x28
/* 8000A848 00007788  38 A1 00 2C */	addi r5, r1, 0x2c
/* 8000A84C 0000778C  38 E1 00 0C */	addi r7, r1, 0xc
/* 8000A850 00007790  99 01 00 0C */	stb r8, 0xc(r1)
/* 8000A854 00007794  91 21 00 2C */	stw r9, 0x2c(r1)
/* 8000A858 00007798  90 01 00 28 */	stw r0, 0x28(r1)
/* 8000A85C 0000779C  48 00 11 B5 */	bl "upper_bound<Q37JStudio29TFunctionValue_list_parameter15TIterator_data_,d,Q23std7less<d>>__3stdFQ37JStudio29TFunctionValue_list_parameter15TIterator_data_Q37JStudio29TFunctionValue_list_parameter15TIterator_data_RCdQ23std7less<d>"
/* 8000A860 000077A0  38 61 00 4C */	addi r3, r1, 0x4c
/* 8000A864 000077A4  48 00 00 D8 */	b .L_8000A93C
.L_8000A868:
/* 8000A868 000077A8  80 86 00 00 */	lwz r4, 0(r6)
/* 8000A86C 000077AC  80 65 00 00 */	lwz r3, 0(r5)
/* 8000A870 000077B0  88 08 00 00 */	lbz r0, 0(r8)
/* 8000A874 000077B4  7C 04 18 40 */	cmplw r4, r3
/* 8000A878 000077B8  90 81 00 44 */	stw r4, 0x44(r1)
/* 8000A87C 000077BC  90 61 00 48 */	stw r3, 0x48(r1)
/* 8000A880 000077C0  98 01 00 10 */	stb r0, 0x10(r1)
/* 8000A884 000077C4  40 82 00 10 */	bne .L_8000A894
/* 8000A888 000077C8  90 61 00 40 */	stw r3, 0x40(r1)
/* 8000A88C 000077CC  38 61 00 40 */	addi r3, r1, 0x40
/* 8000A890 000077D0  48 00 00 AC */	b .L_8000A93C
.L_8000A894:
/* 8000A894 000077D4  7C 04 18 50 */	subf r0, r4, r3
/* 8000A898 000077D8  90 61 00 24 */	stw r3, 0x24(r1)
/* 8000A89C 000077DC  7C 00 16 70 */	srawi r0, r0, 2
/* 8000A8A0 000077E0  C8 27 00 00 */	lfd f1, 0(r7)
/* 8000A8A4 000077E4  7C 00 01 94 */	addze r0, r0
/* 8000A8A8 000077E8  90 81 00 20 */	stw r4, 0x20(r1)
/* 8000A8AC 000077EC  54 06 F8 7E */	srwi r6, r0, 1
/* 8000A8B0 000077F0  38 A0 00 01 */	li r5, 1
/* 8000A8B4 000077F4  90 81 00 38 */	stw r4, 0x38(r1)
.L_8000A8B8:
/* 8000A8B8 000077F8  80 61 00 38 */	lwz r3, 0x38(r1)
/* 8000A8BC 000077FC  C0 03 00 00 */	lfs f0, 0(r3)
/* 8000A8C0 00007800  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8000A8C4 00007804  40 80 00 18 */	bge .L_8000A8DC
/* 8000A8C8 00007808  2C 05 00 01 */	cmpwi r5, 1
/* 8000A8CC 0000780C  40 82 00 3C */	bne .L_8000A908
/* 8000A8D0 00007810  90 61 00 40 */	stw r3, 0x40(r1)
/* 8000A8D4 00007814  38 61 00 40 */	addi r3, r1, 0x40
/* 8000A8D8 00007818  48 00 00 64 */	b .L_8000A93C
.L_8000A8DC:
/* 8000A8DC 0000781C  7C C5 30 51 */	subf. r6, r5, r6
/* 8000A8E0 00007820  90 61 00 44 */	stw r3, 0x44(r1)
/* 8000A8E4 00007824  41 81 00 10 */	bgt .L_8000A8F4
/* 8000A8E8 00007828  80 01 00 48 */	lwz r0, 0x48(r1)
/* 8000A8EC 0000782C  90 01 00 38 */	stw r0, 0x38(r1)
/* 8000A8F0 00007830  48 00 00 18 */	b .L_8000A908
.L_8000A8F4:
/* 8000A8F4 00007834  54 A0 18 38 */	slwi r0, r5, 3
/* 8000A8F8 00007838  54 A5 18 38 */	slwi r5, r5, 3
/* 8000A8FC 0000783C  7C 03 02 14 */	add r0, r3, r0
/* 8000A900 00007840  90 01 00 38 */	stw r0, 0x38(r1)
/* 8000A904 00007844  4B FF FF B4 */	b .L_8000A8B8
.L_8000A908:
/* 8000A908 00007848  88 A1 00 10 */	lbz r5, 0x10(r1)
/* 8000A90C 0000784C  7C E6 3B 78 */	mr r6, r7
/* 8000A910 00007850  81 01 00 38 */	lwz r8, 0x38(r1)
/* 8000A914 00007854  38 61 00 40 */	addi r3, r1, 0x40
/* 8000A918 00007858  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8000A91C 0000785C  38 81 00 18 */	addi r4, r1, 0x18
/* 8000A920 00007860  98 A1 00 08 */	stb r5, 8(r1)
/* 8000A924 00007864  38 A1 00 1C */	addi r5, r1, 0x1c
/* 8000A928 00007868  38 E1 00 08 */	addi r7, r1, 8
/* 8000A92C 0000786C  91 01 00 1C */	stw r8, 0x1c(r1)
/* 8000A930 00007870  90 01 00 18 */	stw r0, 0x18(r1)
/* 8000A934 00007874  48 00 10 DD */	bl "upper_bound<Q37JStudio29TFunctionValue_list_parameter15TIterator_data_,d,Q23std7less<d>>__3stdFQ37JStudio29TFunctionValue_list_parameter15TIterator_data_Q37JStudio29TFunctionValue_list_parameter15TIterator_data_RCdQ23std7less<d>"
/* 8000A938 00007878  38 61 00 40 */	addi r3, r1, 0x40
.L_8000A93C:
/* 8000A93C 0000787C  80 03 00 00 */	lwz r0, 0(r3)
/* 8000A940 00007880  90 1F 00 00 */	stw r0, 0(r31)
/* 8000A944 00007884  80 01 00 64 */	lwz r0, 0x64(r1)
/* 8000A948 00007888  83 E1 00 5C */	lwz r31, 0x5c(r1)
/* 8000A94C 0000788C  7C 08 03 A6 */	mtlr r0
/* 8000A950 00007890  38 21 00 60 */	addi r1, r1, 0x60
/* 8000A954 00007894  4E 80 00 20 */	blr 
.endfn "findUpperBound_binary_current<Q37JStudio29TFunctionValue_list_parameter15TIterator_data_,d,Q23std7less<d>>__7JGadgetFQ37JStudio29TFunctionValue_list_parameter15TIterator_data_Q37JStudio29TFunctionValue_list_parameter15TIterator_data_Q37JStudio29TFunctionValue_list_parameter15TIterator_data_RCdQ23std7less<d>"

.fn update_INTERPOLATE_NONE___Q27JStudio29TFunctionValue_list_parameterFRCQ27JStudio29TFunctionValue_list_parameterd, global
/* 8000A958 00007898  80 63 00 54 */	lwz r3, 0x54(r3)
/* 8000A95C 0000789C  C0 23 FF FC */	lfs f1, -4(r3)
/* 8000A960 000078A0  4E 80 00 20 */	blr 
.endfn update_INTERPOLATE_NONE___Q27JStudio29TFunctionValue_list_parameterFRCQ27JStudio29TFunctionValue_list_parameterd

.fn update_INTERPOLATE_LINEAR___Q27JStudio29TFunctionValue_list_parameterFRCQ27JStudio29TFunctionValue_list_parameterd, global
/* 8000A964 000078A4  80 63 00 54 */	lwz r3, 0x54(r3)
/* 8000A968 000078A8  C0 63 FF F8 */	lfs f3, -8(r3)
/* 8000A96C 000078AC  C0 83 FF FC */	lfs f4, -4(r3)
/* 8000A970 000078B0  C0 43 00 04 */	lfs f2, 4(r3)
/* 8000A974 000078B4  FC 21 18 28 */	fsub f1, f1, f3
/* 8000A978 000078B8  C0 03 00 00 */	lfs f0, 0(r3)
/* 8000A97C 000078BC  FC 42 20 28 */	fsub f2, f2, f4
/* 8000A980 000078C0  FC 00 18 28 */	fsub f0, f0, f3
/* 8000A984 000078C4  FC 22 00 72 */	fmul f1, f2, f1
/* 8000A988 000078C8  FC 01 00 24 */	fdiv f0, f1, f0
/* 8000A98C 000078CC  FC 24 00 2A */	fadd f1, f4, f0
/* 8000A990 000078D0  4E 80 00 20 */	blr 
.endfn update_INTERPOLATE_LINEAR___Q27JStudio29TFunctionValue_list_parameterFRCQ27JStudio29TFunctionValue_list_parameterd

.fn update_INTERPOLATE_PLATEAU___Q27JStudio29TFunctionValue_list_parameterFRCQ27JStudio29TFunctionValue_list_parameterd, global
/* 8000A994 000078D4  80 63 00 54 */	lwz r3, 0x54(r3)
/* 8000A998 000078D8  C8 C2 80 48 */	lfd f6, lbl_805163A8@sda21(r2)
/* 8000A99C 000078DC  C0 43 FF F8 */	lfs f2, -8(r3)
/* 8000A9A0 000078E0  C0 03 00 00 */	lfs f0, 0(r3)
/* 8000A9A4 000078E4  FD 01 10 28 */	fsub f8, f1, f2
/* 8000A9A8 000078E8  C8 62 80 58 */	lfd f3, lbl_805163B8@sda21(r2)
/* 8000A9AC 000078EC  FC 80 10 28 */	fsub f4, f0, f2
/* 8000A9B0 000078F0  C8 42 80 50 */	lfd f2, lbl_805163B0@sda21(r2)
/* 8000A9B4 000078F4  C0 03 00 04 */	lfs f0, 4(r3)
/* 8000A9B8 000078F8  C0 23 FF FC */	lfs f1, -4(r3)
/* 8000A9BC 000078FC  FC A6 20 24 */	fdiv f5, f6, f4
/* 8000A9C0 00007900  C8 82 80 40 */	lfd f4, lbl_805163A0@sda21(r2)
/* 8000A9C4 00007904  FC E8 01 72 */	fmul f7, f8, f5
/* 8000A9C8 00007908  FC 63 11 FA */	fmadd f3, f3, f7, f2
/* 8000A9CC 0000790C  FC 47 01 F2 */	fmul f2, f7, f7
/* 8000A9D0 00007910  FC A7 30 28 */	fsub f5, f7, f6
/* 8000A9D4 00007914  FC 43 00 B2 */	fmul f2, f3, f2
/* 8000A9D8 00007918  FC 65 01 72 */	fmul f3, f5, f5
/* 8000A9DC 0000791C  FC 02 00 32 */	fmul f0, f2, f0
/* 8000A9E0 00007920  FC 46 10 28 */	fsub f2, f6, f2
/* 8000A9E4 00007924  FC A5 02 32 */	fmul f5, f5, f8
/* 8000A9E8 00007928  FC 68 00 F2 */	fmul f3, f8, f3
/* 8000A9EC 0000792C  FC 02 00 7A */	fmadd f0, f2, f1, f0
/* 8000A9F0 00007930  FC 27 01 72 */	fmul f1, f7, f5
/* 8000A9F4 00007934  FC 03 01 3A */	fmadd f0, f3, f4, f0
/* 8000A9F8 00007938  FC 21 01 3A */	fmadd f1, f1, f4, f0
/* 8000A9FC 0000793C  4E 80 00 20 */	blr 
.endfn update_INTERPOLATE_PLATEAU___Q27JStudio29TFunctionValue_list_parameterFRCQ27JStudio29TFunctionValue_list_parameterd

.fn update_INTERPOLATE_BSPLINE_dataMore3___Q27JStudio29TFunctionValue_list_parameterFRCQ27JStudio29TFunctionValue_list_parameterd, global
/* 8000AA00 00007940  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 8000AA04 00007944  DB E1 00 50 */	stfd f31, 0x50(r1)
/* 8000AA08 00007948  F3 E1 00 58 */	psq_st f31, 88(r1), 0, qr0
/* 8000AA0C 0000794C  DB C1 00 40 */	stfd f30, 0x40(r1)
/* 8000AA10 00007950  F3 C1 00 48 */	psq_st f30, 72(r1), 0, qr0
/* 8000AA14 00007954  DB A1 00 30 */	stfd f29, 0x30(r1)
/* 8000AA18 00007958  F3 A1 00 38 */	psq_st f29, 56(r1), 0, qr0
/* 8000AA1C 0000795C  DB 81 00 20 */	stfd f28, 0x20(r1)
/* 8000AA20 00007960  F3 81 00 28 */	psq_st f28, 40(r1), 0, qr0
/* 8000AA24 00007964  DB 61 00 10 */	stfd f27, 0x10(r1)
/* 8000AA28 00007968  F3 61 00 18 */	psq_st f27, 24(r1), 0, qr0
/* 8000AA2C 0000796C  80 A3 00 54 */	lwz r5, 0x54(r3)
/* 8000AA30 00007970  80 83 00 50 */	lwz r4, 0x50(r3)
/* 8000AA34 00007974  80 03 00 4C */	lwz r0, 0x4c(r3)
/* 8000AA38 00007978  7C 65 20 50 */	subf r3, r5, r4
/* 8000AA3C 0000797C  C0 85 FF FC */	lfs f4, -4(r5)
/* 8000AA40 00007980  7C 63 16 70 */	srawi r3, r3, 2
/* 8000AA44 00007984  7C 00 28 50 */	subf r0, r0, r5
/* 8000AA48 00007988  7C 63 01 94 */	addze r3, r3
/* 8000AA4C 0000798C  C0 A5 00 04 */	lfs f5, 4(r5)
/* 8000AA50 00007990  7C 00 16 70 */	srawi r0, r0, 2
/* 8000AA54 00007994  C0 C5 FF F8 */	lfs f6, -8(r5)
/* 8000AA58 00007998  7C 00 01 94 */	addze r0, r0
/* 8000AA5C 0000799C  C3 E5 00 00 */	lfs f31, 0(r5)
/* 8000AA60 000079A0  2C 00 00 03 */	cmpwi r0, 3
/* 8000AA64 000079A4  41 82 00 D8 */	beq .L_8000AB3C
/* 8000AA68 000079A8  40 80 00 10 */	bge .L_8000AA78
/* 8000AA6C 000079AC  2C 00 00 02 */	cmpwi r0, 2
/* 8000AA70 000079B0  40 80 00 14 */	bge .L_8000AA84
/* 8000AA74 000079B4  48 00 00 C8 */	b .L_8000AB3C
.L_8000AA78:
/* 8000AA78 000079B8  2C 00 00 05 */	cmpwi r0, 5
/* 8000AA7C 000079BC  40 80 00 C0 */	bge .L_8000AB3C
/* 8000AA80 000079C0  48 00 00 54 */	b .L_8000AAD4
.L_8000AA84:
/* 8000AA84 000079C4  C8 02 80 78 */	lfd f0, lbl_805163D8@sda21(r2)
/* 8000AA88 000079C8  2C 03 00 03 */	cmpwi r3, 3
/* 8000AA8C 000079CC  C3 C5 00 08 */	lfs f30, 8(r5)
/* 8000AA90 000079D0  FC 40 01 B2 */	fmul f2, f0, f6
/* 8000AA94 000079D4  C1 05 00 0C */	lfs f8, 0xc(r5)
/* 8000AA98 000079D8  FC E0 29 38 */	fmsub f7, f0, f4, f5
/* 8000AA9C 000079DC  FF 62 F8 28 */	fsub f27, f2, f31
/* 8000AAA0 000079E0  FD 22 F0 28 */	fsub f9, f2, f30
/* 8000AAA4 000079E4  41 82 00 28 */	beq .L_8000AACC
/* 8000AAA8 000079E8  40 80 00 10 */	bge .L_8000AAB8
/* 8000AAAC 000079EC  2C 03 00 02 */	cmpwi r3, 2
/* 8000AAB0 000079F0  40 80 00 10 */	bge .L_8000AAC0
/* 8000AAB4 000079F4  48 00 00 18 */	b .L_8000AACC
.L_8000AAB8:
/* 8000AAB8 000079F8  2C 03 00 05 */	cmpwi r3, 5
/* 8000AABC 000079FC  40 80 00 10 */	bge .L_8000AACC
.L_8000AAC0:
/* 8000AAC0 00007A00  C8 02 80 78 */	lfd f0, lbl_805163D8@sda21(r2)
/* 8000AAC4 00007A04  FD 40 FF B8 */	fmsub f10, f0, f30, f31
/* 8000AAC8 00007A08  48 00 00 DC */	b .L_8000ABA4
.L_8000AACC:
/* 8000AACC 00007A0C  C1 45 00 10 */	lfs f10, 0x10(r5)
/* 8000AAD0 00007A10  48 00 00 D4 */	b .L_8000ABA4
.L_8000AAD4:
/* 8000AAD4 00007A14  C3 65 FF F0 */	lfs f27, -0x10(r5)
/* 8000AAD8 00007A18  2C 03 00 03 */	cmpwi r3, 3
/* 8000AADC 00007A1C  C8 02 80 78 */	lfd f0, lbl_805163D8@sda21(r2)
/* 8000AAE0 00007A20  C0 E5 FF F4 */	lfs f7, -0xc(r5)
/* 8000AAE4 00007A24  FD 20 36 F8 */	fmsub f9, f0, f27, f6
/* 8000AAE8 00007A28  41 82 00 44 */	beq .L_8000AB2C
/* 8000AAEC 00007A2C  40 80 00 10 */	bge .L_8000AAFC
/* 8000AAF0 00007A30  2C 03 00 02 */	cmpwi r3, 2
/* 8000AAF4 00007A34  40 80 00 14 */	bge .L_8000AB08
/* 8000AAF8 00007A38  48 00 00 34 */	b .L_8000AB2C
.L_8000AAFC:
/* 8000AAFC 00007A3C  2C 03 00 05 */	cmpwi r3, 5
/* 8000AB00 00007A40  40 80 00 2C */	bge .L_8000AB2C
/* 8000AB04 00007A44  48 00 00 18 */	b .L_8000AB1C
.L_8000AB08:
/* 8000AB08 00007A48  FC 40 07 F2 */	fmul f2, f0, f31
/* 8000AB0C 00007A4C  FD 00 21 78 */	fmsub f8, f0, f5, f4
/* 8000AB10 00007A50  FF C2 30 28 */	fsub f30, f2, f6
/* 8000AB14 00007A54  FD 42 D8 28 */	fsub f10, f2, f27
/* 8000AB18 00007A58  48 00 00 8C */	b .L_8000ABA4
.L_8000AB1C:
/* 8000AB1C 00007A5C  C3 C5 00 08 */	lfs f30, 8(r5)
/* 8000AB20 00007A60  C1 05 00 0C */	lfs f8, 0xc(r5)
/* 8000AB24 00007A64  FD 40 FF B8 */	fmsub f10, f0, f30, f31
/* 8000AB28 00007A68  48 00 00 7C */	b .L_8000ABA4
.L_8000AB2C:
/* 8000AB2C 00007A6C  C1 05 00 0C */	lfs f8, 0xc(r5)
/* 8000AB30 00007A70  C3 C5 00 08 */	lfs f30, 8(r5)
/* 8000AB34 00007A74  C1 45 00 10 */	lfs f10, 0x10(r5)
/* 8000AB38 00007A78  48 00 00 6C */	b .L_8000ABA4
.L_8000AB3C:
/* 8000AB3C 00007A7C  2C 03 00 03 */	cmpwi r3, 3
/* 8000AB40 00007A80  C0 E5 FF F4 */	lfs f7, -0xc(r5)
/* 8000AB44 00007A84  C3 65 FF F0 */	lfs f27, -0x10(r5)
/* 8000AB48 00007A88  C1 25 FF E8 */	lfs f9, -0x18(r5)
/* 8000AB4C 00007A8C  41 82 00 4C */	beq .L_8000AB98
/* 8000AB50 00007A90  40 80 00 10 */	bge .L_8000AB60
/* 8000AB54 00007A94  2C 03 00 02 */	cmpwi r3, 2
/* 8000AB58 00007A98  40 80 00 14 */	bge .L_8000AB6C
/* 8000AB5C 00007A9C  48 00 00 3C */	b .L_8000AB98
.L_8000AB60:
/* 8000AB60 00007AA0  2C 03 00 05 */	cmpwi r3, 5
/* 8000AB64 00007AA4  40 80 00 34 */	bge .L_8000AB98
/* 8000AB68 00007AA8  48 00 00 1C */	b .L_8000AB84
.L_8000AB6C:
/* 8000AB6C 00007AAC  C8 02 80 78 */	lfd f0, lbl_805163D8@sda21(r2)
/* 8000AB70 00007AB0  FC 40 07 F2 */	fmul f2, f0, f31
/* 8000AB74 00007AB4  FD 00 21 78 */	fmsub f8, f0, f5, f4
/* 8000AB78 00007AB8  FF C2 30 28 */	fsub f30, f2, f6
/* 8000AB7C 00007ABC  FD 42 D8 28 */	fsub f10, f2, f27
/* 8000AB80 00007AC0  48 00 00 24 */	b .L_8000ABA4
.L_8000AB84:
/* 8000AB84 00007AC4  C3 C5 00 08 */	lfs f30, 8(r5)
/* 8000AB88 00007AC8  C8 02 80 78 */	lfd f0, lbl_805163D8@sda21(r2)
/* 8000AB8C 00007ACC  C1 05 00 0C */	lfs f8, 0xc(r5)
/* 8000AB90 00007AD0  FD 40 FF B8 */	fmsub f10, f0, f30, f31
/* 8000AB94 00007AD4  48 00 00 10 */	b .L_8000ABA4
.L_8000AB98:
/* 8000AB98 00007AD8  C1 05 00 0C */	lfs f8, 0xc(r5)
/* 8000AB9C 00007ADC  C3 C5 00 08 */	lfs f30, 8(r5)
/* 8000ABA0 00007AE0  C1 45 00 10 */	lfs f10, 0x10(r5)
.L_8000ABA4:
/* 8000ABA4 00007AE4  FC 7F 30 28 */	fsub f3, f31, f6
/* 8000ABA8 00007AE8  C9 62 80 48 */	lfd f11, lbl_805163A8@sda21(r2)
/* 8000ABAC 00007AEC  FC 41 30 28 */	fsub f2, f1, f6
/* 8000ABB0 00007AF0  FC 1F 08 28 */	fsub f0, f31, f1
/* 8000ABB4 00007AF4  FD 8B 18 24 */	fdiv f12, f11, f3
/* 8000ABB8 00007AF8  FD 62 03 32 */	fmul f11, f2, f12
/* 8000ABBC 00007AFC  FC 7E 30 28 */	fsub f3, f30, f6
/* 8000ABC0 00007B00  FD 80 03 32 */	fmul f12, f0, f12
/* 8000ABC4 00007B04  FF AB 18 24 */	fdiv f29, f11, f3
/* 8000ABC8 00007B08  FD 7F D8 28 */	fsub f11, f31, f27
/* 8000ABCC 00007B0C  FF 9E 08 28 */	fsub f28, f30, f1
/* 8000ABD0 00007B10  FC 61 D8 28 */	fsub f3, f1, f27
/* 8000ABD4 00007B14  FD AC 58 24 */	fdiv f13, f12, f11
/* 8000ABD8 00007B18  FD 9C 07 72 */	fmul f12, f28, f29
/* 8000ABDC 00007B1C  FD 7E D8 28 */	fsub f11, f30, f27
/* 8000ABE0 00007B20  FF C0 03 72 */	fmul f30, f0, f13
/* 8000ABE4 00007B24  FD A3 63 7A */	fmadd f13, f3, f13, f12
/* 8000ABE8 00007B28  FF FF 48 28 */	fsub f31, f31, f9
/* 8000ABEC 00007B2C  FD 82 07 72 */	fmul f12, f2, f29
/* 8000ABF0 00007B30  FD AD 58 24 */	fdiv f13, f13, f11
/* 8000ABF4 00007B34  FF DE F8 24 */	fdiv f30, f30, f31
/* 8000ABF8 00007B38  FD 6A 30 28 */	fsub f11, f10, f6
/* 8000ABFC 00007B3C  FC DC 03 72 */	fmul f6, f28, f13
/* 8000AC00 00007B40  FD 6C 58 24 */	fdiv f11, f12, f11
/* 8000AC04 00007B44  FD 21 48 28 */	fsub f9, f1, f9
/* 8000AC08 00007B48  FD 4A 08 28 */	fsub f10, f10, f1
/* 8000AC0C 00007B4C  FC 20 07 B2 */	fmul f1, f0, f30
/* 8000AC10 00007B50  FC 09 37 BA */	fmadd f0, f9, f30, f6
/* 8000AC14 00007B54  FC CA 02 F2 */	fmul f6, f10, f11
/* 8000AC18 00007B58  FC 00 01 32 */	fmul f0, f0, f4
/* 8000AC1C 00007B5C  FC 63 33 7A */	fmadd f3, f3, f13, f6
/* 8000AC20 00007B60  FC 01 01 FA */	fmadd f0, f1, f7, f0
/* 8000AC24 00007B64  FC 22 02 F2 */	fmul f1, f2, f11
/* 8000AC28 00007B68  FC 03 01 7A */	fmadd f0, f3, f5, f0
/* 8000AC2C 00007B6C  FC 21 02 3A */	fmadd f1, f1, f8, f0
/* 8000AC30 00007B70  E3 E1 00 58 */	psq_l f31, 88(r1), 0, qr0
/* 8000AC34 00007B74  CB E1 00 50 */	lfd f31, 0x50(r1)
/* 8000AC38 00007B78  E3 C1 00 48 */	psq_l f30, 72(r1), 0, qr0
/* 8000AC3C 00007B7C  CB C1 00 40 */	lfd f30, 0x40(r1)
/* 8000AC40 00007B80  E3 A1 00 38 */	psq_l f29, 56(r1), 0, qr0
/* 8000AC44 00007B84  CB A1 00 30 */	lfd f29, 0x30(r1)
/* 8000AC48 00007B88  E3 81 00 28 */	psq_l f28, 40(r1), 0, qr0
/* 8000AC4C 00007B8C  CB 81 00 20 */	lfd f28, 0x20(r1)
/* 8000AC50 00007B90  E3 61 00 18 */	psq_l f27, 24(r1), 0, qr0
/* 8000AC54 00007B94  CB 61 00 10 */	lfd f27, 0x10(r1)
/* 8000AC58 00007B98  38 21 00 60 */	addi r1, r1, 0x60
/* 8000AC5C 00007B9C  4E 80 00 20 */	blr 
.endfn update_INTERPOLATE_BSPLINE_dataMore3___Q27JStudio29TFunctionValue_list_parameterFRCQ27JStudio29TFunctionValue_list_parameterd

.fn __ct__Q27JStudio22TFunctionValue_hermiteFv, global
/* 8000AC60 00007BA0  3C C0 80 4A */	lis r6, __vt__Q27JStudio14TFunctionValue@ha
/* 8000AC64 00007BA4  3C A0 80 51 */	lis r5, __float_nan@ha
/* 8000AC68 00007BA8  38 06 E5 28 */	addi r0, r6, __vt__Q27JStudio14TFunctionValue@l
/* 8000AC6C 00007BAC  3C 80 80 4A */	lis r4, __vt__Q27JStudio22TFunctionValue_hermite@ha
/* 8000AC70 00007BB0  90 03 00 00 */	stw r0, 0(r3)
/* 8000AC74 00007BB4  38 C5 48 B0 */	addi r6, r5, __float_nan@l
/* 8000AC78 00007BB8  38 A0 00 00 */	li r5, 0
/* 8000AC7C 00007BBC  38 04 E4 68 */	addi r0, r4, __vt__Q27JStudio22TFunctionValue_hermite@l
/* 8000AC80 00007BC0  C0 06 00 00 */	lfs f0, 0(r6)
/* 8000AC84 00007BC4  D8 03 00 08 */	stfd f0, 8(r3)
/* 8000AC88 00007BC8  C8 03 00 08 */	lfd f0, 8(r3)
/* 8000AC8C 00007BCC  D8 03 00 10 */	stfd f0, 0x10(r3)
/* 8000AC90 00007BD0  C8 03 00 08 */	lfd f0, 8(r3)
/* 8000AC94 00007BD4  D8 03 00 18 */	stfd f0, 0x18(r3)
/* 8000AC98 00007BD8  98 A3 00 20 */	stb r5, 0x20(r3)
/* 8000AC9C 00007BDC  98 A3 00 21 */	stb r5, 0x21(r3)
/* 8000ACA0 00007BE0  C8 03 00 08 */	lfd f0, 8(r3)
/* 8000ACA4 00007BE4  D8 03 00 28 */	stfd f0, 0x28(r3)
/* 8000ACA8 00007BE8  C8 03 00 08 */	lfd f0, 8(r3)
/* 8000ACAC 00007BEC  D8 03 00 30 */	stfd f0, 0x30(r3)
/* 8000ACB0 00007BF0  90 A3 00 38 */	stw r5, 0x38(r3)
/* 8000ACB4 00007BF4  90 A3 00 3C */	stw r5, 0x3c(r3)
/* 8000ACB8 00007BF8  90 03 00 00 */	stw r0, 0(r3)
/* 8000ACBC 00007BFC  90 A3 00 40 */	stw r5, 0x40(r3)
/* 8000ACC0 00007C00  90 A3 00 44 */	stw r5, 0x44(r3)
/* 8000ACC4 00007C04  90 A3 00 48 */	stw r5, 0x48(r3)
/* 8000ACC8 00007C08  90 A3 00 4C */	stw r5, 0x4c(r3)
/* 8000ACCC 00007C0C  80 03 00 48 */	lwz r0, 0x48(r3)
/* 8000ACD0 00007C10  90 03 00 50 */	stw r0, 0x50(r3)
/* 8000ACD4 00007C14  80 03 00 4C */	lwz r0, 0x4c(r3)
/* 8000ACD8 00007C18  90 03 00 54 */	stw r0, 0x54(r3)
/* 8000ACDC 00007C1C  80 03 00 50 */	lwz r0, 0x50(r3)
/* 8000ACE0 00007C20  90 03 00 58 */	stw r0, 0x58(r3)
/* 8000ACE4 00007C24  80 03 00 4C */	lwz r0, 0x4c(r3)
/* 8000ACE8 00007C28  90 03 00 5C */	stw r0, 0x5c(r3)
/* 8000ACEC 00007C2C  80 03 00 50 */	lwz r0, 0x50(r3)
/* 8000ACF0 00007C30  90 03 00 60 */	stw r0, 0x60(r3)
/* 8000ACF4 00007C34  4E 80 00 20 */	blr 
.endfn __ct__Q27JStudio22TFunctionValue_hermiteFv

.fn getType__Q27JStudio22TFunctionValue_hermiteCFv, global
/* 8000ACF8 00007C38  38 60 00 06 */	li r3, 6
/* 8000ACFC 00007C3C  4E 80 00 20 */	blr 
.endfn getType__Q27JStudio22TFunctionValue_hermiteCFv

.fn getAttributeSet__Q27JStudio22TFunctionValue_hermiteFv, global
/* 8000AD00 00007C40  28 04 00 00 */	cmplwi r4, 0
/* 8000AD04 00007C44  41 82 00 08 */	beq .L_8000AD0C
/* 8000AD08 00007C48  38 84 00 08 */	addi r4, r4, 8
.L_8000AD0C:
/* 8000AD0C 00007C4C  38 00 00 00 */	li r0, 0
/* 8000AD10 00007C50  90 03 00 00 */	stw r0, 0(r3)
/* 8000AD14 00007C54  90 83 00 04 */	stw r4, 4(r3)
/* 8000AD18 00007C58  90 03 00 08 */	stw r0, 8(r3)
/* 8000AD1C 00007C5C  4E 80 00 20 */	blr 
.endfn getAttributeSet__Q27JStudio22TFunctionValue_hermiteFv

.fn data_set__Q27JStudio22TFunctionValue_hermiteFPCfUlUl, global
/* 8000AD20 00007C60  90 83 00 40 */	stw r4, 0x40(r3)
/* 8000AD24 00007C64  90 A3 00 44 */	stw r5, 0x44(r3)
/* 8000AD28 00007C68  90 C3 00 48 */	stw r6, 0x48(r3)
/* 8000AD2C 00007C6C  80 83 00 48 */	lwz r4, 0x48(r3)
/* 8000AD30 00007C70  80 03 00 40 */	lwz r0, 0x40(r3)
/* 8000AD34 00007C74  90 03 00 4C */	stw r0, 0x4c(r3)
/* 8000AD38 00007C78  90 83 00 50 */	stw r4, 0x50(r3)
/* 8000AD3C 00007C7C  80 A3 00 48 */	lwz r5, 0x48(r3)
/* 8000AD40 00007C80  80 03 00 44 */	lwz r0, 0x44(r3)
/* 8000AD44 00007C84  80 83 00 40 */	lwz r4, 0x40(r3)
/* 8000AD48 00007C88  7C 00 29 D6 */	mullw r0, r0, r5
/* 8000AD4C 00007C8C  54 00 10 3A */	slwi r0, r0, 2
/* 8000AD50 00007C90  7C 04 02 14 */	add r0, r4, r0
/* 8000AD54 00007C94  90 03 00 54 */	stw r0, 0x54(r3)
/* 8000AD58 00007C98  90 A3 00 58 */	stw r5, 0x58(r3)
/* 8000AD5C 00007C9C  80 03 00 4C */	lwz r0, 0x4c(r3)
/* 8000AD60 00007CA0  90 03 00 5C */	stw r0, 0x5c(r3)
/* 8000AD64 00007CA4  80 03 00 50 */	lwz r0, 0x50(r3)
/* 8000AD68 00007CA8  90 03 00 60 */	stw r0, 0x60(r3)
/* 8000AD6C 00007CAC  4E 80 00 20 */	blr 
.endfn data_set__Q27JStudio22TFunctionValue_hermiteFPCfUlUl

.fn initialize__Q27JStudio22TFunctionValue_hermiteFv, global
/* 8000AD70 00007CB0  3C 80 80 51 */	lis r4, __float_nan@ha
/* 8000AD74 00007CB4  38 00 00 00 */	li r0, 0
/* 8000AD78 00007CB8  C0 04 48 B0 */	lfs f0, __float_nan@l(r4)
/* 8000AD7C 00007CBC  D8 03 00 08 */	stfd f0, 8(r3)
/* 8000AD80 00007CC0  C8 03 00 08 */	lfd f0, 8(r3)
/* 8000AD84 00007CC4  D8 03 00 10 */	stfd f0, 0x10(r3)
/* 8000AD88 00007CC8  C8 03 00 08 */	lfd f0, 8(r3)
/* 8000AD8C 00007CCC  D8 03 00 18 */	stfd f0, 0x18(r3)
/* 8000AD90 00007CD0  98 03 00 20 */	stb r0, 0x20(r3)
/* 8000AD94 00007CD4  98 03 00 21 */	stb r0, 0x21(r3)
/* 8000AD98 00007CD8  90 03 00 38 */	stw r0, 0x38(r3)
/* 8000AD9C 00007CDC  90 03 00 3C */	stw r0, 0x3c(r3)
/* 8000ADA0 00007CE0  90 03 00 40 */	stw r0, 0x40(r3)
/* 8000ADA4 00007CE4  90 03 00 44 */	stw r0, 0x44(r3)
/* 8000ADA8 00007CE8  90 03 00 48 */	stw r0, 0x48(r3)
/* 8000ADAC 00007CEC  80 83 00 48 */	lwz r4, 0x48(r3)
/* 8000ADB0 00007CF0  90 03 00 4C */	stw r0, 0x4c(r3)
/* 8000ADB4 00007CF4  90 83 00 50 */	stw r4, 0x50(r3)
/* 8000ADB8 00007CF8  80 03 00 4C */	lwz r0, 0x4c(r3)
/* 8000ADBC 00007CFC  90 03 00 54 */	stw r0, 0x54(r3)
/* 8000ADC0 00007D00  80 03 00 50 */	lwz r0, 0x50(r3)
/* 8000ADC4 00007D04  90 03 00 58 */	stw r0, 0x58(r3)
/* 8000ADC8 00007D08  80 03 00 4C */	lwz r0, 0x4c(r3)
/* 8000ADCC 00007D0C  90 03 00 5C */	stw r0, 0x5c(r3)
/* 8000ADD0 00007D10  80 03 00 50 */	lwz r0, 0x50(r3)
/* 8000ADD4 00007D14  90 03 00 60 */	stw r0, 0x60(r3)
/* 8000ADD8 00007D18  4E 80 00 20 */	blr 
.endfn initialize__Q27JStudio22TFunctionValue_hermiteFv

.fn prepare__Q27JStudio22TFunctionValue_hermiteFv, global
/* 8000ADDC 00007D1C  88 03 00 20 */	lbz r0, 0x20(r3)
/* 8000ADE0 00007D20  7C 00 07 74 */	extsb r0, r0
/* 8000ADE4 00007D24  2C 00 00 02 */	cmpwi r0, 2
/* 8000ADE8 00007D28  41 82 00 50 */	beq .L_8000AE38
/* 8000ADEC 00007D2C  40 80 00 14 */	bge .L_8000AE00
/* 8000ADF0 00007D30  2C 00 00 00 */	cmpwi r0, 0
/* 8000ADF4 00007D34  41 82 00 1C */	beq .L_8000AE10
/* 8000ADF8 00007D38  40 80 00 2C */	bge .L_8000AE24
/* 8000ADFC 00007D3C  48 00 00 14 */	b .L_8000AE10
.L_8000AE00:
/* 8000AE00 00007D40  2C 00 00 04 */	cmpwi r0, 4
/* 8000AE04 00007D44  41 82 00 5C */	beq .L_8000AE60
/* 8000AE08 00007D48  40 80 00 08 */	bge .L_8000AE10
/* 8000AE0C 00007D4C  48 00 00 40 */	b .L_8000AE4C
.L_8000AE10:
/* 8000AE10 00007D50  C8 22 80 40 */	lfd f1, lbl_805163A0@sda21(r2)
/* 8000AE14 00007D54  C8 02 80 48 */	lfd f0, lbl_805163A8@sda21(r2)
/* 8000AE18 00007D58  D8 23 00 28 */	stfd f1, 0x28(r3)
/* 8000AE1C 00007D5C  D8 03 00 30 */	stfd f0, 0x30(r3)
/* 8000AE20 00007D60  4E 80 00 20 */	blr 
.L_8000AE24:
/* 8000AE24 00007D64  C8 22 80 40 */	lfd f1, lbl_805163A0@sda21(r2)
/* 8000AE28 00007D68  C8 02 80 80 */	lfd f0, lbl_805163E0@sda21(r2)
/* 8000AE2C 00007D6C  D8 23 00 28 */	stfd f1, 0x28(r3)
/* 8000AE30 00007D70  D8 03 00 30 */	stfd f0, 0x30(r3)
/* 8000AE34 00007D74  4E 80 00 20 */	blr 
.L_8000AE38:
/* 8000AE38 00007D78  C8 23 00 08 */	lfd f1, 8(r3)
/* 8000AE3C 00007D7C  C8 02 80 80 */	lfd f0, lbl_805163E0@sda21(r2)
/* 8000AE40 00007D80  D8 23 00 28 */	stfd f1, 0x28(r3)
/* 8000AE44 00007D84  D8 03 00 30 */	stfd f0, 0x30(r3)
/* 8000AE48 00007D88  4E 80 00 20 */	blr 
.L_8000AE4C:
/* 8000AE4C 00007D8C  C8 23 00 10 */	lfd f1, 0x10(r3)
/* 8000AE50 00007D90  C8 02 80 80 */	lfd f0, lbl_805163E0@sda21(r2)
/* 8000AE54 00007D94  D8 23 00 28 */	stfd f1, 0x28(r3)
/* 8000AE58 00007D98  D8 03 00 30 */	stfd f0, 0x30(r3)
/* 8000AE5C 00007D9C  4E 80 00 20 */	blr 
.L_8000AE60:
/* 8000AE60 00007DA0  C8 23 00 08 */	lfd f1, 8(r3)
/* 8000AE64 00007DA4  C8 03 00 10 */	lfd f0, 0x10(r3)
/* 8000AE68 00007DA8  C8 42 80 68 */	lfd f2, lbl_805163C8@sda21(r2)
/* 8000AE6C 00007DAC  FC 21 00 2A */	fadd f1, f1, f0
/* 8000AE70 00007DB0  C8 02 80 80 */	lfd f0, lbl_805163E0@sda21(r2)
/* 8000AE74 00007DB4  FC 22 00 72 */	fmul f1, f2, f1
/* 8000AE78 00007DB8  D8 23 00 28 */	stfd f1, 0x28(r3)
/* 8000AE7C 00007DBC  D8 03 00 30 */	stfd f0, 0x30(r3)
/* 8000AE80 00007DC0  4E 80 00 20 */	blr 
.endfn prepare__Q27JStudio22TFunctionValue_hermiteFv

.fn getValue__Q27JStudio22TFunctionValue_hermiteFd, global
/* 8000AE84 00007DC4  94 21 FF 80 */	stwu r1, -0x80(r1)
/* 8000AE88 00007DC8  7C 08 02 A6 */	mflr r0
/* 8000AE8C 00007DCC  90 01 00 84 */	stw r0, 0x84(r1)
/* 8000AE90 00007DD0  DB E1 00 70 */	stfd f31, 0x70(r1)
/* 8000AE94 00007DD4  F3 E1 00 78 */	psq_st f31, 120(r1), 0, qr0
/* 8000AE98 00007DD8  DB C1 00 60 */	stfd f30, 0x60(r1)
/* 8000AE9C 00007DDC  F3 C1 00 68 */	psq_st f30, 104(r1), 0, qr0
/* 8000AEA0 00007DE0  93 E1 00 5C */	stw r31, 0x5c(r1)
/* 8000AEA4 00007DE4  D8 21 00 08 */	stfd f1, 8(r1)
/* 8000AEA8 00007DE8  7C 7F 1B 78 */	mr r31, r3
/* 8000AEAC 00007DEC  80 63 00 44 */	lwz r3, 0x44(r3)
/* 8000AEB0 00007DF0  80 1F 00 48 */	lwz r0, 0x48(r31)
/* 8000AEB4 00007DF4  38 63 FF FF */	addi r3, r3, -1
/* 8000AEB8 00007DF8  C8 5F 00 28 */	lfd f2, 0x28(r31)
/* 8000AEBC 00007DFC  7C 03 01 D6 */	mullw r0, r3, r0
/* 8000AEC0 00007E00  88 7F 00 21 */	lbz r3, 0x21(r31)
/* 8000AEC4 00007E04  FC 01 10 28 */	fsub f0, f1, f2
/* 8000AEC8 00007E08  C8 3F 00 30 */	lfd f1, 0x30(r31)
/* 8000AECC 00007E0C  7C 63 07 74 */	extsb r3, r3
/* 8000AED0 00007E10  80 9F 00 40 */	lwz r4, 0x40(r31)
/* 8000AED4 00007E14  54 00 10 3A */	slwi r0, r0, 2
/* 8000AED8 00007E18  FC 61 10 3A */	fmadd f3, f1, f0, f2
/* 8000AEDC 00007E1C  2C 03 00 02 */	cmpwi r3, 2
/* 8000AEE0 00007E20  C3 E4 00 00 */	lfs f31, 0(r4)
/* 8000AEE4 00007E24  7F C4 04 2E */	lfsx f30, r4, r0
/* 8000AEE8 00007E28  41 82 01 B4 */	beq .L_8000B09C
/* 8000AEEC 00007E2C  40 80 00 14 */	bge .L_8000AF00
/* 8000AEF0 00007E30  2C 03 00 00 */	cmpwi r3, 0
/* 8000AEF4 00007E34  41 82 00 1C */	beq .L_8000AF10
/* 8000AEF8 00007E38  40 80 00 DC */	bge .L_8000AFD4
/* 8000AEFC 00007E3C  48 00 00 14 */	b .L_8000AF10
.L_8000AF00:
/* 8000AF00 00007E40  2C 03 00 04 */	cmpwi r3, 4
/* 8000AF04 00007E44  41 82 03 38 */	beq .L_8000B23C
/* 8000AF08 00007E48  40 80 00 08 */	bge .L_8000AF10
/* 8000AF0C 00007E4C  48 00 02 5C */	b .L_8000B168
.L_8000AF10:
/* 8000AF10 00007E50  C8 3F 00 08 */	lfd f1, 8(r31)
/* 8000AF14 00007E54  C8 02 80 40 */	lfd f0, lbl_805163A0@sda21(r2)
/* 8000AF18 00007E58  FC 23 08 28 */	fsub f1, f3, f1
/* 8000AF1C 00007E5C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8000AF20 00007E60  40 80 00 50 */	bge .L_8000AF70
/* 8000AF24 00007E64  80 9F 00 38 */	lwz r4, 0x38(r31)
/* 8000AF28 00007E68  38 00 00 00 */	li r0, 0
/* 8000AF2C 00007E6C  3C 60 80 47 */	lis r3, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@ha
/* 8000AF30 00007E70  28 04 00 04 */	cmplwi r4, 4
/* 8000AF34 00007E74  90 01 00 34 */	stw r0, 0x34(r1)
/* 8000AF38 00007E78  54 84 10 3A */	slwi r4, r4, 2
/* 8000AF3C 00007E7C  38 03 32 F0 */	addi r0, r3, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@l
/* 8000AF40 00007E80  7C 60 22 14 */	add r3, r0, r4
/* 8000AF44 00007E84  41 80 00 08 */	blt .L_8000AF4C
/* 8000AF48 00007E88  38 61 00 34 */	addi r3, r1, 0x34
.L_8000AF4C:
/* 8000AF4C 00007E8C  81 83 00 00 */	lwz r12, 0(r3)
/* 8000AF50 00007E90  28 0C 00 00 */	cmplwi r12, 0
/* 8000AF54 00007E94  40 82 00 0C */	bne .L_8000AF60
/* 8000AF58 00007E98  3C 60 80 47 */	lis r3, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@ha
/* 8000AF5C 00007E9C  81 83 32 F0 */	lwz r12, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@l(r3)
.L_8000AF60:
/* 8000AF60 00007EA0  C8 5F 00 18 */	lfd f2, 0x18(r31)
/* 8000AF64 00007EA4  7D 89 03 A6 */	mtctr r12
/* 8000AF68 00007EA8  4E 80 04 21 */	bctrl 
/* 8000AF6C 00007EAC  48 00 00 5C */	b .L_8000AFC8
.L_8000AF70:
/* 8000AF70 00007EB0  C8 1F 00 18 */	lfd f0, 0x18(r31)
/* 8000AF74 00007EB4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8000AF78 00007EB8  4C 41 13 82 */	cror 2, 1, 2
/* 8000AF7C 00007EBC  40 82 00 4C */	bne .L_8000AFC8
/* 8000AF80 00007EC0  80 9F 00 3C */	lwz r4, 0x3c(r31)
/* 8000AF84 00007EC4  38 00 00 00 */	li r0, 0
/* 8000AF88 00007EC8  3C 60 80 47 */	lis r3, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@ha
/* 8000AF8C 00007ECC  28 04 00 04 */	cmplwi r4, 4
/* 8000AF90 00007ED0  90 01 00 30 */	stw r0, 0x30(r1)
/* 8000AF94 00007ED4  54 84 10 3A */	slwi r4, r4, 2
/* 8000AF98 00007ED8  38 03 32 F0 */	addi r0, r3, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@l
/* 8000AF9C 00007EDC  7C 60 22 14 */	add r3, r0, r4
/* 8000AFA0 00007EE0  41 80 00 08 */	blt .L_8000AFA8
/* 8000AFA4 00007EE4  38 61 00 30 */	addi r3, r1, 0x30
.L_8000AFA8:
/* 8000AFA8 00007EE8  81 83 00 00 */	lwz r12, 0(r3)
/* 8000AFAC 00007EEC  28 0C 00 00 */	cmplwi r12, 0
/* 8000AFB0 00007EF0  40 82 00 0C */	bne .L_8000AFBC
/* 8000AFB4 00007EF4  3C 60 80 47 */	lis r3, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@ha
/* 8000AFB8 00007EF8  81 83 32 F0 */	lwz r12, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@l(r3)
.L_8000AFBC:
/* 8000AFBC 00007EFC  C8 5F 00 18 */	lfd f2, 0x18(r31)
/* 8000AFC0 00007F00  7D 89 03 A6 */	mtctr r12
/* 8000AFC4 00007F04  4E 80 04 21 */	bctrl 
.L_8000AFC8:
/* 8000AFC8 00007F08  C8 1F 00 08 */	lfd f0, 8(r31)
/* 8000AFCC 00007F0C  FC 21 00 2A */	fadd f1, f1, f0
/* 8000AFD0 00007F10  48 00 03 44 */	b .L_8000B314
.L_8000AFD4:
/* 8000AFD4 00007F14  C8 5F 00 08 */	lfd f2, 8(r31)
/* 8000AFD8 00007F18  C8 02 80 40 */	lfd f0, lbl_805163A0@sda21(r2)
/* 8000AFDC 00007F1C  FC 23 10 2A */	fadd f1, f3, f2
/* 8000AFE0 00007F20  FC 21 10 28 */	fsub f1, f1, f2
/* 8000AFE4 00007F24  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8000AFE8 00007F28  40 80 00 50 */	bge .L_8000B038
/* 8000AFEC 00007F2C  80 9F 00 38 */	lwz r4, 0x38(r31)
/* 8000AFF0 00007F30  38 00 00 00 */	li r0, 0
/* 8000AFF4 00007F34  3C 60 80 47 */	lis r3, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@ha
/* 8000AFF8 00007F38  28 04 00 04 */	cmplwi r4, 4
/* 8000AFFC 00007F3C  90 01 00 2C */	stw r0, 0x2c(r1)
/* 8000B000 00007F40  54 84 10 3A */	slwi r4, r4, 2
/* 8000B004 00007F44  38 03 32 F0 */	addi r0, r3, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@l
/* 8000B008 00007F48  7C 60 22 14 */	add r3, r0, r4
/* 8000B00C 00007F4C  41 80 00 08 */	blt .L_8000B014
/* 8000B010 00007F50  38 61 00 2C */	addi r3, r1, 0x2c
.L_8000B014:
/* 8000B014 00007F54  81 83 00 00 */	lwz r12, 0(r3)
/* 8000B018 00007F58  28 0C 00 00 */	cmplwi r12, 0
/* 8000B01C 00007F5C  40 82 00 0C */	bne .L_8000B028
/* 8000B020 00007F60  3C 60 80 47 */	lis r3, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@ha
/* 8000B024 00007F64  81 83 32 F0 */	lwz r12, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@l(r3)
.L_8000B028:
/* 8000B028 00007F68  C8 5F 00 18 */	lfd f2, 0x18(r31)
/* 8000B02C 00007F6C  7D 89 03 A6 */	mtctr r12
/* 8000B030 00007F70  4E 80 04 21 */	bctrl 
/* 8000B034 00007F74  48 00 00 5C */	b .L_8000B090
.L_8000B038:
/* 8000B038 00007F78  C8 1F 00 18 */	lfd f0, 0x18(r31)
/* 8000B03C 00007F7C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8000B040 00007F80  4C 41 13 82 */	cror 2, 1, 2
/* 8000B044 00007F84  40 82 00 4C */	bne .L_8000B090
/* 8000B048 00007F88  80 9F 00 3C */	lwz r4, 0x3c(r31)
/* 8000B04C 00007F8C  38 00 00 00 */	li r0, 0
/* 8000B050 00007F90  3C 60 80 47 */	lis r3, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@ha
/* 8000B054 00007F94  28 04 00 04 */	cmplwi r4, 4
/* 8000B058 00007F98  90 01 00 28 */	stw r0, 0x28(r1)
/* 8000B05C 00007F9C  54 84 10 3A */	slwi r4, r4, 2
/* 8000B060 00007FA0  38 03 32 F0 */	addi r0, r3, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@l
/* 8000B064 00007FA4  7C 60 22 14 */	add r3, r0, r4
/* 8000B068 00007FA8  41 80 00 08 */	blt .L_8000B070
/* 8000B06C 00007FAC  38 61 00 28 */	addi r3, r1, 0x28
.L_8000B070:
/* 8000B070 00007FB0  81 83 00 00 */	lwz r12, 0(r3)
/* 8000B074 00007FB4  28 0C 00 00 */	cmplwi r12, 0
/* 8000B078 00007FB8  40 82 00 0C */	bne .L_8000B084
/* 8000B07C 00007FBC  3C 60 80 47 */	lis r3, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@ha
/* 8000B080 00007FC0  81 83 32 F0 */	lwz r12, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@l(r3)
.L_8000B084:
/* 8000B084 00007FC4  C8 5F 00 18 */	lfd f2, 0x18(r31)
/* 8000B088 00007FC8  7D 89 03 A6 */	mtctr r12
/* 8000B08C 00007FCC  4E 80 04 21 */	bctrl 
.L_8000B090:
/* 8000B090 00007FD0  C8 1F 00 08 */	lfd f0, 8(r31)
/* 8000B094 00007FD4  FC 21 00 2A */	fadd f1, f1, f0
/* 8000B098 00007FD8  48 00 02 7C */	b .L_8000B314
.L_8000B09C:
/* 8000B09C 00007FDC  C8 1F 00 10 */	lfd f0, 0x10(r31)
/* 8000B0A0 00007FE0  C8 5F 00 08 */	lfd f2, 8(r31)
/* 8000B0A4 00007FE4  FC 23 00 2A */	fadd f1, f3, f0
/* 8000B0A8 00007FE8  C8 02 80 40 */	lfd f0, lbl_805163A0@sda21(r2)
/* 8000B0AC 00007FEC  FC 21 10 28 */	fsub f1, f1, f2
/* 8000B0B0 00007FF0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8000B0B4 00007FF4  40 80 00 50 */	bge .L_8000B104
/* 8000B0B8 00007FF8  80 9F 00 38 */	lwz r4, 0x38(r31)
/* 8000B0BC 00007FFC  38 00 00 00 */	li r0, 0
/* 8000B0C0 00008000  3C 60 80 47 */	lis r3, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@ha
/* 8000B0C4 00008004  28 04 00 04 */	cmplwi r4, 4
/* 8000B0C8 00008008  90 01 00 24 */	stw r0, 0x24(r1)
/* 8000B0CC 0000800C  54 84 10 3A */	slwi r4, r4, 2
/* 8000B0D0 00008010  38 03 32 F0 */	addi r0, r3, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@l
/* 8000B0D4 00008014  7C 60 22 14 */	add r3, r0, r4
/* 8000B0D8 00008018  41 80 00 08 */	blt .L_8000B0E0
/* 8000B0DC 0000801C  38 61 00 24 */	addi r3, r1, 0x24
.L_8000B0E0:
/* 8000B0E0 00008020  81 83 00 00 */	lwz r12, 0(r3)
/* 8000B0E4 00008024  28 0C 00 00 */	cmplwi r12, 0
/* 8000B0E8 00008028  40 82 00 0C */	bne .L_8000B0F4
/* 8000B0EC 0000802C  3C 60 80 47 */	lis r3, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@ha
/* 8000B0F0 00008030  81 83 32 F0 */	lwz r12, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@l(r3)
.L_8000B0F4:
/* 8000B0F4 00008034  C8 5F 00 18 */	lfd f2, 0x18(r31)
/* 8000B0F8 00008038  7D 89 03 A6 */	mtctr r12
/* 8000B0FC 0000803C  4E 80 04 21 */	bctrl 
/* 8000B100 00008040  48 00 00 5C */	b .L_8000B15C
.L_8000B104:
/* 8000B104 00008044  C8 1F 00 18 */	lfd f0, 0x18(r31)
/* 8000B108 00008048  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8000B10C 0000804C  4C 41 13 82 */	cror 2, 1, 2
/* 8000B110 00008050  40 82 00 4C */	bne .L_8000B15C
/* 8000B114 00008054  80 9F 00 3C */	lwz r4, 0x3c(r31)
/* 8000B118 00008058  38 00 00 00 */	li r0, 0
/* 8000B11C 0000805C  3C 60 80 47 */	lis r3, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@ha
/* 8000B120 00008060  28 04 00 04 */	cmplwi r4, 4
/* 8000B124 00008064  90 01 00 20 */	stw r0, 0x20(r1)
/* 8000B128 00008068  54 84 10 3A */	slwi r4, r4, 2
/* 8000B12C 0000806C  38 03 32 F0 */	addi r0, r3, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@l
/* 8000B130 00008070  7C 60 22 14 */	add r3, r0, r4
/* 8000B134 00008074  41 80 00 08 */	blt .L_8000B13C
/* 8000B138 00008078  38 61 00 20 */	addi r3, r1, 0x20
.L_8000B13C:
/* 8000B13C 0000807C  81 83 00 00 */	lwz r12, 0(r3)
/* 8000B140 00008080  28 0C 00 00 */	cmplwi r12, 0
/* 8000B144 00008084  40 82 00 0C */	bne .L_8000B150
/* 8000B148 00008088  3C 60 80 47 */	lis r3, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@ha
/* 8000B14C 0000808C  81 83 32 F0 */	lwz r12, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@l(r3)
.L_8000B150:
/* 8000B150 00008090  C8 5F 00 18 */	lfd f2, 0x18(r31)
/* 8000B154 00008094  7D 89 03 A6 */	mtctr r12
/* 8000B158 00008098  4E 80 04 21 */	bctrl 
.L_8000B15C:
/* 8000B15C 0000809C  C8 1F 00 08 */	lfd f0, 8(r31)
/* 8000B160 000080A0  FC 21 00 2A */	fadd f1, f1, f0
/* 8000B164 000080A4  48 00 01 B0 */	b .L_8000B314
.L_8000B168:
/* 8000B168 000080A8  C8 9F 00 08 */	lfd f4, 8(r31)
/* 8000B16C 000080AC  C8 1F 00 10 */	lfd f0, 0x10(r31)
/* 8000B170 000080B0  C8 42 80 68 */	lfd f2, lbl_805163C8@sda21(r2)
/* 8000B174 000080B4  FC 24 00 2A */	fadd f1, f4, f0
/* 8000B178 000080B8  C8 02 80 40 */	lfd f0, lbl_805163A0@sda21(r2)
/* 8000B17C 000080BC  FC 22 18 7A */	fmadd f1, f2, f1, f3
/* 8000B180 000080C0  FC 21 20 28 */	fsub f1, f1, f4
/* 8000B184 000080C4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8000B188 000080C8  40 80 00 50 */	bge .L_8000B1D8
/* 8000B18C 000080CC  80 9F 00 38 */	lwz r4, 0x38(r31)
/* 8000B190 000080D0  38 00 00 00 */	li r0, 0
/* 8000B194 000080D4  3C 60 80 47 */	lis r3, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@ha
/* 8000B198 000080D8  28 04 00 04 */	cmplwi r4, 4
/* 8000B19C 000080DC  90 01 00 1C */	stw r0, 0x1c(r1)
/* 8000B1A0 000080E0  54 84 10 3A */	slwi r4, r4, 2
/* 8000B1A4 000080E4  38 03 32 F0 */	addi r0, r3, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@l
/* 8000B1A8 000080E8  7C 60 22 14 */	add r3, r0, r4
/* 8000B1AC 000080EC  41 80 00 08 */	blt .L_8000B1B4
/* 8000B1B0 000080F0  38 61 00 1C */	addi r3, r1, 0x1c
.L_8000B1B4:
/* 8000B1B4 000080F4  81 83 00 00 */	lwz r12, 0(r3)
/* 8000B1B8 000080F8  28 0C 00 00 */	cmplwi r12, 0
/* 8000B1BC 000080FC  40 82 00 0C */	bne .L_8000B1C8
/* 8000B1C0 00008100  3C 60 80 47 */	lis r3, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@ha
/* 8000B1C4 00008104  81 83 32 F0 */	lwz r12, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@l(r3)
.L_8000B1C8:
/* 8000B1C8 00008108  C8 5F 00 18 */	lfd f2, 0x18(r31)
/* 8000B1CC 0000810C  7D 89 03 A6 */	mtctr r12
/* 8000B1D0 00008110  4E 80 04 21 */	bctrl 
/* 8000B1D4 00008114  48 00 00 5C */	b .L_8000B230
.L_8000B1D8:
/* 8000B1D8 00008118  C8 1F 00 18 */	lfd f0, 0x18(r31)
/* 8000B1DC 0000811C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8000B1E0 00008120  4C 41 13 82 */	cror 2, 1, 2
/* 8000B1E4 00008124  40 82 00 4C */	bne .L_8000B230
/* 8000B1E8 00008128  80 9F 00 3C */	lwz r4, 0x3c(r31)
/* 8000B1EC 0000812C  38 00 00 00 */	li r0, 0
/* 8000B1F0 00008130  3C 60 80 47 */	lis r3, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@ha
/* 8000B1F4 00008134  28 04 00 04 */	cmplwi r4, 4
/* 8000B1F8 00008138  90 01 00 18 */	stw r0, 0x18(r1)
/* 8000B1FC 0000813C  54 84 10 3A */	slwi r4, r4, 2
/* 8000B200 00008140  38 03 32 F0 */	addi r0, r3, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@l
/* 8000B204 00008144  7C 60 22 14 */	add r3, r0, r4
/* 8000B208 00008148  41 80 00 08 */	blt .L_8000B210
/* 8000B20C 0000814C  38 61 00 18 */	addi r3, r1, 0x18
.L_8000B210:
/* 8000B210 00008150  81 83 00 00 */	lwz r12, 0(r3)
/* 8000B214 00008154  28 0C 00 00 */	cmplwi r12, 0
/* 8000B218 00008158  40 82 00 0C */	bne .L_8000B224
/* 8000B21C 0000815C  3C 60 80 47 */	lis r3, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@ha
/* 8000B220 00008160  81 83 32 F0 */	lwz r12, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@l(r3)
.L_8000B224:
/* 8000B224 00008164  C8 5F 00 18 */	lfd f2, 0x18(r31)
/* 8000B228 00008168  7D 89 03 A6 */	mtctr r12
/* 8000B22C 0000816C  4E 80 04 21 */	bctrl 
.L_8000B230:
/* 8000B230 00008170  C8 1F 00 08 */	lfd f0, 8(r31)
/* 8000B234 00008174  FC 21 00 2A */	fadd f1, f1, f0
/* 8000B238 00008178  48 00 00 DC */	b .L_8000B314
.L_8000B23C:
/* 8000B23C 0000817C  C8 3F 00 08 */	lfd f1, 8(r31)
/* 8000B240 00008180  C8 02 80 40 */	lfd f0, lbl_805163A0@sda21(r2)
/* 8000B244 00008184  FC 23 08 28 */	fsub f1, f3, f1
/* 8000B248 00008188  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8000B24C 0000818C  40 80 00 50 */	bge .L_8000B29C
/* 8000B250 00008190  80 9F 00 38 */	lwz r4, 0x38(r31)
/* 8000B254 00008194  38 00 00 00 */	li r0, 0
/* 8000B258 00008198  3C 60 80 47 */	lis r3, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@ha
/* 8000B25C 0000819C  28 04 00 04 */	cmplwi r4, 4
/* 8000B260 000081A0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8000B264 000081A4  54 84 10 3A */	slwi r4, r4, 2
/* 8000B268 000081A8  38 03 32 F0 */	addi r0, r3, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@l
/* 8000B26C 000081AC  7C 60 22 14 */	add r3, r0, r4
/* 8000B270 000081B0  41 80 00 08 */	blt .L_8000B278
/* 8000B274 000081B4  38 61 00 14 */	addi r3, r1, 0x14
.L_8000B278:
/* 8000B278 000081B8  81 83 00 00 */	lwz r12, 0(r3)
/* 8000B27C 000081BC  28 0C 00 00 */	cmplwi r12, 0
/* 8000B280 000081C0  40 82 00 0C */	bne .L_8000B28C
/* 8000B284 000081C4  3C 60 80 47 */	lis r3, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@ha
/* 8000B288 000081C8  81 83 32 F0 */	lwz r12, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@l(r3)
.L_8000B28C:
/* 8000B28C 000081CC  C8 5F 00 18 */	lfd f2, 0x18(r31)
/* 8000B290 000081D0  7D 89 03 A6 */	mtctr r12
/* 8000B294 000081D4  4E 80 04 21 */	bctrl 
/* 8000B298 000081D8  48 00 00 5C */	b .L_8000B2F4
.L_8000B29C:
/* 8000B29C 000081DC  C8 1F 00 18 */	lfd f0, 0x18(r31)
/* 8000B2A0 000081E0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8000B2A4 000081E4  4C 41 13 82 */	cror 2, 1, 2
/* 8000B2A8 000081E8  40 82 00 4C */	bne .L_8000B2F4
/* 8000B2AC 000081EC  80 9F 00 3C */	lwz r4, 0x3c(r31)
/* 8000B2B0 000081F0  38 00 00 00 */	li r0, 0
/* 8000B2B4 000081F4  3C 60 80 47 */	lis r3, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@ha
/* 8000B2B8 000081F8  28 04 00 04 */	cmplwi r4, 4
/* 8000B2BC 000081FC  90 01 00 10 */	stw r0, 0x10(r1)
/* 8000B2C0 00008200  54 84 10 3A */	slwi r4, r4, 2
/* 8000B2C4 00008204  38 03 32 F0 */	addi r0, r3, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@l
/* 8000B2C8 00008208  7C 60 22 14 */	add r3, r0, r4
/* 8000B2CC 0000820C  41 80 00 08 */	blt .L_8000B2D4
/* 8000B2D0 00008210  38 61 00 10 */	addi r3, r1, 0x10
.L_8000B2D4:
/* 8000B2D4 00008214  81 83 00 00 */	lwz r12, 0(r3)
/* 8000B2D8 00008218  28 0C 00 00 */	cmplwi r12, 0
/* 8000B2DC 0000821C  40 82 00 0C */	bne .L_8000B2E8
/* 8000B2E0 00008220  3C 60 80 47 */	lis r3, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@ha
/* 8000B2E4 00008224  81 83 32 F0 */	lwz r12, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@l(r3)
.L_8000B2E8:
/* 8000B2E8 00008228  C8 5F 00 18 */	lfd f2, 0x18(r31)
/* 8000B2EC 0000822C  7D 89 03 A6 */	mtctr r12
/* 8000B2F0 00008230  4E 80 04 21 */	bctrl 
.L_8000B2F4:
/* 8000B2F4 00008234  C8 7F 00 08 */	lfd f3, 8(r31)
/* 8000B2F8 00008238  FC 5E F8 28 */	fsub f2, f30, f31
/* 8000B2FC 0000823C  C8 1F 00 18 */	lfd f0, 0x18(r31)
/* 8000B300 00008240  FC 21 18 2A */	fadd f1, f1, f3
/* 8000B304 00008244  FC 21 18 28 */	fsub f1, f1, f3
/* 8000B308 00008248  FC 21 00 B2 */	fmul f1, f1, f2
/* 8000B30C 0000824C  FC 01 00 24 */	fdiv f0, f1, f0
/* 8000B310 00008250  FC 3F 00 2A */	fadd f1, f31, f0
.L_8000B314:
/* 8000B314 00008254  D8 21 00 08 */	stfd f1, 8(r1)
/* 8000B318 00008258  38 61 00 50 */	addi r3, r1, 0x50
/* 8000B31C 0000825C  38 81 00 48 */	addi r4, r1, 0x48
/* 8000B320 00008260  38 A1 00 40 */	addi r5, r1, 0x40
/* 8000B324 00008264  81 1F 00 5C */	lwz r8, 0x5c(r31)
/* 8000B328 00008268  38 C1 00 38 */	addi r6, r1, 0x38
/* 8000B32C 0000826C  80 1F 00 60 */	lwz r0, 0x60(r31)
/* 8000B330 00008270  38 E1 00 08 */	addi r7, r1, 8
/* 8000B334 00008274  91 01 00 38 */	stw r8, 0x38(r1)
/* 8000B338 00008278  90 01 00 3C */	stw r0, 0x3c(r1)
/* 8000B33C 0000827C  81 1F 00 54 */	lwz r8, 0x54(r31)
/* 8000B340 00008280  80 1F 00 58 */	lwz r0, 0x58(r31)
/* 8000B344 00008284  91 01 00 40 */	stw r8, 0x40(r1)
/* 8000B348 00008288  90 01 00 44 */	stw r0, 0x44(r1)
/* 8000B34C 0000828C  81 1F 00 4C */	lwz r8, 0x4c(r31)
/* 8000B350 00008290  80 1F 00 50 */	lwz r0, 0x50(r31)
/* 8000B354 00008294  91 01 00 48 */	stw r8, 0x48(r1)
/* 8000B358 00008298  90 01 00 4C */	stw r0, 0x4c(r1)
/* 8000B35C 0000829C  48 00 00 F9 */	bl "findUpperBound_binary_current<Q37JStudio22TFunctionValue_hermite15TIterator_data_,d>__7JGadgetFQ37JStudio22TFunctionValue_hermite15TIterator_data_Q37JStudio22TFunctionValue_hermite15TIterator_data_Q37JStudio22TFunctionValue_hermite15TIterator_data_RCd"
/* 8000B360 000082A0  80 01 00 50 */	lwz r0, 0x50(r1)
/* 8000B364 000082A4  90 1F 00 5C */	stw r0, 0x5c(r31)
/* 8000B368 000082A8  80 01 00 54 */	lwz r0, 0x54(r1)
/* 8000B36C 000082AC  90 1F 00 60 */	stw r0, 0x60(r31)
/* 8000B370 000082B0  80 9F 00 5C */	lwz r4, 0x5c(r31)
/* 8000B374 000082B4  80 1F 00 4C */	lwz r0, 0x4c(r31)
/* 8000B378 000082B8  7C 04 00 40 */	cmplw r4, r0
/* 8000B37C 000082BC  40 82 00 0C */	bne .L_8000B388
/* 8000B380 000082C0  C0 24 00 04 */	lfs f1, 4(r4)
/* 8000B384 000082C4  48 00 00 AC */	b .L_8000B430
.L_8000B388:
/* 8000B388 000082C8  80 1F 00 54 */	lwz r0, 0x54(r31)
/* 8000B38C 000082CC  7C 04 00 40 */	cmplw r4, r0
/* 8000B390 000082D0  40 82 00 24 */	bne .L_8000B3B4
/* 8000B394 000082D4  80 7F 00 60 */	lwz r3, 0x60(r31)
/* 8000B398 000082D8  80 1F 00 5C */	lwz r0, 0x5c(r31)
/* 8000B39C 000082DC  54 63 10 3A */	slwi r3, r3, 2
/* 8000B3A0 000082E0  7C 03 00 50 */	subf r0, r3, r0
/* 8000B3A4 000082E4  90 1F 00 5C */	stw r0, 0x5c(r31)
/* 8000B3A8 000082E8  80 7F 00 5C */	lwz r3, 0x5c(r31)
/* 8000B3AC 000082EC  C0 23 00 04 */	lfs f1, 4(r3)
/* 8000B3B0 000082F0  48 00 00 80 */	b .L_8000B430
.L_8000B3B4:
/* 8000B3B4 000082F4  80 1F 00 48 */	lwz r0, 0x48(r31)
/* 8000B3B8 000082F8  C0 04 00 00 */	lfs f0, 0(r4)
/* 8000B3BC 000082FC  54 00 10 3A */	slwi r0, r0, 2
/* 8000B3C0 00008300  C8 E2 80 48 */	lfd f7, lbl_805163A8@sda21(r2)
/* 8000B3C4 00008304  7C A0 20 50 */	subf r5, r0, r4
/* 8000B3C8 00008308  C8 21 00 08 */	lfd f1, 8(r1)
/* 8000B3CC 0000830C  C0 A5 00 00 */	lfs f5, 0(r5)
/* 8000B3D0 00008310  7C 65 02 14 */	add r3, r5, r0
/* 8000B3D4 00008314  C8 82 80 58 */	lfd f4, lbl_805163B8@sda21(r2)
/* 8000B3D8 00008318  FC 60 28 28 */	fsub f3, f0, f5
/* 8000B3DC 0000831C  C8 42 80 50 */	lfd f2, lbl_805163B0@sda21(r2)
/* 8000B3E0 00008320  FD 21 28 28 */	fsub f9, f1, f5
/* 8000B3E4 00008324  C0 04 00 04 */	lfs f0, 4(r4)
/* 8000B3E8 00008328  C0 25 00 04 */	lfs f1, 4(r5)
/* 8000B3EC 0000832C  FC C7 18 24 */	fdiv f6, f7, f3
/* 8000B3F0 00008330  C0 63 FF FC */	lfs f3, -4(r3)
/* 8000B3F4 00008334  C0 A4 00 08 */	lfs f5, 8(r4)
/* 8000B3F8 00008338  FD 09 01 B2 */	fmul f8, f9, f6
/* 8000B3FC 0000833C  FC 84 12 3A */	fmadd f4, f4, f8, f2
/* 8000B400 00008340  FC 48 02 32 */	fmul f2, f8, f8
/* 8000B404 00008344  FC C8 38 28 */	fsub f6, f8, f7
/* 8000B408 00008348  FC 44 00 B2 */	fmul f2, f4, f2
/* 8000B40C 0000834C  FC 86 01 B2 */	fmul f4, f6, f6
/* 8000B410 00008350  FC 02 00 32 */	fmul f0, f2, f0
/* 8000B414 00008354  FC 47 10 28 */	fsub f2, f7, f2
/* 8000B418 00008358  FC C6 02 72 */	fmul f6, f6, f9
/* 8000B41C 0000835C  FC 89 01 32 */	fmul f4, f9, f4
/* 8000B420 00008360  FC 02 00 7A */	fmadd f0, f2, f1, f0
/* 8000B424 00008364  FC 28 01 B2 */	fmul f1, f8, f6
/* 8000B428 00008368  FC 04 00 FA */	fmadd f0, f4, f3, f0
/* 8000B42C 0000836C  FC 21 01 7A */	fmadd f1, f1, f5, f0
.L_8000B430:
/* 8000B430 00008370  E3 E1 00 78 */	psq_l f31, 120(r1), 0, qr0
/* 8000B434 00008374  CB E1 00 70 */	lfd f31, 0x70(r1)
/* 8000B438 00008378  E3 C1 00 68 */	psq_l f30, 104(r1), 0, qr0
/* 8000B43C 0000837C  CB C1 00 60 */	lfd f30, 0x60(r1)
/* 8000B440 00008380  80 01 00 84 */	lwz r0, 0x84(r1)
/* 8000B444 00008384  83 E1 00 5C */	lwz r31, 0x5c(r1)
/* 8000B448 00008388  7C 08 03 A6 */	mtlr r0
/* 8000B44C 0000838C  38 21 00 80 */	addi r1, r1, 0x80
/* 8000B450 00008390  4E 80 00 20 */	blr 
.endfn getValue__Q27JStudio22TFunctionValue_hermiteFd

.fn "findUpperBound_binary_current<Q37JStudio22TFunctionValue_hermite15TIterator_data_,d>__7JGadgetFQ37JStudio22TFunctionValue_hermite15TIterator_data_Q37JStudio22TFunctionValue_hermite15TIterator_data_Q37JStudio22TFunctionValue_hermite15TIterator_data_RCd", local
/* 8000B454 00008394  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 8000B458 00008398  7C 08 02 A6 */	mflr r0
/* 8000B45C 0000839C  81 86 00 04 */	lwz r12, 4(r6)
/* 8000B460 000083A0  90 01 00 44 */	stw r0, 0x44(r1)
/* 8000B464 000083A4  39 01 00 0C */	addi r8, r1, 0xc
/* 8000B468 000083A8  81 65 00 00 */	lwz r11, 0(r5)
/* 8000B46C 000083AC  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 8000B470 000083B0  83 E6 00 00 */	lwz r31, 0(r6)
/* 8000B474 000083B4  38 C1 00 10 */	addi r6, r1, 0x10
/* 8000B478 000083B8  93 C1 00 38 */	stw r30, 0x38(r1)
/* 8000B47C 000083BC  81 45 00 04 */	lwz r10, 4(r5)
/* 8000B480 000083C0  38 A1 00 18 */	addi r5, r1, 0x18
/* 8000B484 000083C4  93 A1 00 34 */	stw r29, 0x34(r1)
/* 8000B488 000083C8  7C 7D 1B 78 */	mr r29, r3
/* 8000B48C 000083CC  8B C1 00 08 */	lbz r30, 8(r1)
/* 8000B490 000083D0  81 24 00 00 */	lwz r9, 0(r4)
/* 8000B494 000083D4  80 04 00 04 */	lwz r0, 4(r4)
/* 8000B498 000083D8  38 81 00 20 */	addi r4, r1, 0x20
/* 8000B49C 000083DC  9B C1 00 0C */	stb r30, 0xc(r1)
/* 8000B4A0 000083E0  93 E1 00 10 */	stw r31, 0x10(r1)
/* 8000B4A4 000083E4  91 81 00 14 */	stw r12, 0x14(r1)
/* 8000B4A8 000083E8  91 61 00 18 */	stw r11, 0x18(r1)
/* 8000B4AC 000083EC  91 41 00 1C */	stw r10, 0x1c(r1)
/* 8000B4B0 000083F0  91 21 00 20 */	stw r9, 0x20(r1)
/* 8000B4B4 000083F4  90 01 00 24 */	stw r0, 0x24(r1)
/* 8000B4B8 000083F8  48 00 00 21 */	bl "findUpperBound_binary_current<Q37JStudio22TFunctionValue_hermite15TIterator_data_,d,Q23std7less<d>>__7JGadgetFQ37JStudio22TFunctionValue_hermite15TIterator_data_Q37JStudio22TFunctionValue_hermite15TIterator_data_Q37JStudio22TFunctionValue_hermite15TIterator_data_RCdQ23std7less<d>"
/* 8000B4BC 000083FC  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8000B4C0 00008400  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 8000B4C4 00008404  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 8000B4C8 00008408  83 A1 00 34 */	lwz r29, 0x34(r1)
/* 8000B4CC 0000840C  7C 08 03 A6 */	mtlr r0
/* 8000B4D0 00008410  38 21 00 40 */	addi r1, r1, 0x40
/* 8000B4D4 00008414  4E 80 00 20 */	blr 
.endfn "findUpperBound_binary_current<Q37JStudio22TFunctionValue_hermite15TIterator_data_,d>__7JGadgetFQ37JStudio22TFunctionValue_hermite15TIterator_data_Q37JStudio22TFunctionValue_hermite15TIterator_data_Q37JStudio22TFunctionValue_hermite15TIterator_data_RCd"

.fn "findUpperBound_binary_current<Q37JStudio22TFunctionValue_hermite15TIterator_data_,d,Q23std7less<d>>__7JGadgetFQ37JStudio22TFunctionValue_hermite15TIterator_data_Q37JStudio22TFunctionValue_hermite15TIterator_data_Q37JStudio22TFunctionValue_hermite15TIterator_data_RCdQ23std7less<d>", local
/* 8000B4D8 00008418  94 21 FF 60 */	stwu r1, -0xa0(r1)
/* 8000B4DC 0000841C  7C 08 02 A6 */	mflr r0
/* 8000B4E0 00008420  81 26 00 00 */	lwz r9, 0(r6)
/* 8000B4E4 00008424  90 01 00 A4 */	stw r0, 0xa4(r1)
/* 8000B4E8 00008428  80 05 00 00 */	lwz r0, 0(r5)
/* 8000B4EC 0000842C  93 E1 00 9C */	stw r31, 0x9c(r1)
/* 8000B4F0 00008430  7C 7F 1B 78 */	mr r31, r3
/* 8000B4F4 00008434  7C 09 00 50 */	subf r0, r9, r0
/* 8000B4F8 00008438  7C 03 00 34 */	cntlzw r3, r0
/* 8000B4FC 0000843C  54 60 DE 3F */	rlwinm. r0, r3, 0x1b, 0x18, 0x1f
/* 8000B500 00008440  54 60 D9 7E */	srwi r0, r3, 5
/* 8000B504 00008444  40 82 00 18 */	bne .L_8000B51C
/* 8000B508 00008448  C8 27 00 00 */	lfd f1, 0(r7)
/* 8000B50C 0000844C  C0 09 00 00 */	lfs f0, 0(r9)
/* 8000B510 00008450  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8000B514 00008454  7C 00 00 26 */	mfcr r0
/* 8000B518 00008458  54 00 0F FE */	srwi r0, r0, 0x1f
.L_8000B51C:
/* 8000B51C 0000845C  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 8000B520 00008460  41 82 01 54 */	beq .L_8000B674
/* 8000B524 00008464  81 24 00 00 */	lwz r9, 0(r4)
/* 8000B528 00008468  80 66 00 00 */	lwz r3, 0(r6)
/* 8000B52C 0000846C  80 A4 00 04 */	lwz r5, 4(r4)
/* 8000B530 00008470  80 86 00 04 */	lwz r4, 4(r6)
/* 8000B534 00008474  7C 09 18 40 */	cmplw r9, r3
/* 8000B538 00008478  88 08 00 00 */	lbz r0, 0(r8)
/* 8000B53C 0000847C  91 21 00 88 */	stw r9, 0x88(r1)
/* 8000B540 00008480  90 A1 00 8C */	stw r5, 0x8c(r1)
/* 8000B544 00008484  90 61 00 90 */	stw r3, 0x90(r1)
/* 8000B548 00008488  90 81 00 94 */	stw r4, 0x94(r1)
/* 8000B54C 0000848C  98 01 00 14 */	stb r0, 0x14(r1)
/* 8000B550 00008490  40 82 00 14 */	bne .L_8000B564
/* 8000B554 00008494  90 61 00 80 */	stw r3, 0x80(r1)
/* 8000B558 00008498  38 A1 00 80 */	addi r5, r1, 0x80
/* 8000B55C 0000849C  90 81 00 84 */	stw r4, 0x84(r1)
/* 8000B560 000084A0  48 00 02 38 */	b .L_8000B798
.L_8000B564:
/* 8000B564 000084A4  54 80 10 3A */	slwi r0, r4, 2
/* 8000B568 000084A8  90 81 00 54 */	stw r4, 0x54(r1)
/* 8000B56C 000084AC  7C 60 18 50 */	subf r3, r0, r3
/* 8000B570 000084B0  C8 27 00 00 */	lfd f1, 0(r7)
/* 8000B574 000084B4  7C 09 18 50 */	subf r0, r9, r3
/* 8000B578 000084B8  90 61 00 90 */	stw r3, 0x90(r1)
/* 8000B57C 000084BC  7C 00 16 70 */	srawi r0, r0, 2
/* 8000B580 000084C0  38 C0 00 01 */	li r6, 1
/* 8000B584 000084C4  7C 00 01 94 */	addze r0, r0
/* 8000B588 000084C8  90 61 00 50 */	stw r3, 0x50(r1)
/* 8000B58C 000084CC  7D 00 23 96 */	divwu r8, r0, r4
/* 8000B590 000084D0  91 21 00 48 */	stw r9, 0x48(r1)
/* 8000B594 000084D4  90 A1 00 4C */	stw r5, 0x4c(r1)
/* 8000B598 000084D8  90 61 00 60 */	stw r3, 0x60(r1)
/* 8000B59C 000084DC  90 81 00 64 */	stw r4, 0x64(r1)
.L_8000B5A0:
/* 8000B5A0 000084E0  80 81 00 60 */	lwz r4, 0x60(r1)
/* 8000B5A4 000084E4  C0 04 00 00 */	lfs f0, 0(r4)
/* 8000B5A8 000084E8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8000B5AC 000084EC  41 80 00 30 */	blt .L_8000B5DC
/* 8000B5B0 000084F0  2C 06 00 01 */	cmpwi r6, 1
/* 8000B5B4 000084F4  40 82 00 6C */	bne .L_8000B620
/* 8000B5B8 000084F8  80 61 00 64 */	lwz r3, 0x64(r1)
/* 8000B5BC 000084FC  38 A1 00 80 */	addi r5, r1, 0x80
/* 8000B5C0 00008500  80 01 00 64 */	lwz r0, 0x64(r1)
/* 8000B5C4 00008504  54 63 10 3A */	slwi r3, r3, 2
/* 8000B5C8 00008508  7C 64 1A 14 */	add r3, r4, r3
/* 8000B5CC 0000850C  90 01 00 84 */	stw r0, 0x84(r1)
/* 8000B5D0 00008510  90 61 00 60 */	stw r3, 0x60(r1)
/* 8000B5D4 00008514  90 61 00 80 */	stw r3, 0x80(r1)
/* 8000B5D8 00008518  48 00 01 C0 */	b .L_8000B798
.L_8000B5DC:
/* 8000B5DC 0000851C  80 01 00 64 */	lwz r0, 0x64(r1)
/* 8000B5E0 00008520  7D 06 40 51 */	subf. r8, r6, r8
/* 8000B5E4 00008524  90 81 00 90 */	stw r4, 0x90(r1)
/* 8000B5E8 00008528  90 01 00 94 */	stw r0, 0x94(r1)
/* 8000B5EC 0000852C  41 81 00 18 */	bgt .L_8000B604
/* 8000B5F0 00008530  80 61 00 88 */	lwz r3, 0x88(r1)
/* 8000B5F4 00008534  80 01 00 8C */	lwz r0, 0x8c(r1)
/* 8000B5F8 00008538  90 61 00 60 */	stw r3, 0x60(r1)
/* 8000B5FC 0000853C  90 01 00 64 */	stw r0, 0x64(r1)
/* 8000B600 00008540  48 00 00 20 */	b .L_8000B620
.L_8000B604:
/* 8000B604 00008544  80 01 00 64 */	lwz r0, 0x64(r1)
/* 8000B608 00008548  7C 00 31 D6 */	mullw r0, r0, r6
/* 8000B60C 0000854C  54 C6 18 38 */	slwi r6, r6, 3
/* 8000B610 00008550  54 00 10 3A */	slwi r0, r0, 2
/* 8000B614 00008554  7C 00 20 50 */	subf r0, r0, r4
/* 8000B618 00008558  90 01 00 60 */	stw r0, 0x60(r1)
/* 8000B61C 0000855C  4B FF FF 84 */	b .L_8000B5A0
.L_8000B620:
/* 8000B620 00008560  81 61 00 94 */	lwz r11, 0x94(r1)
/* 8000B624 00008564  7C E6 3B 78 */	mr r6, r7
/* 8000B628 00008568  80 81 00 90 */	lwz r4, 0x90(r1)
/* 8000B62C 0000856C  38 61 00 80 */	addi r3, r1, 0x80
/* 8000B630 00008570  55 60 10 3A */	slwi r0, r11, 2
/* 8000B634 00008574  89 21 00 14 */	lbz r9, 0x14(r1)
/* 8000B638 00008578  7D 44 02 14 */	add r10, r4, r0
/* 8000B63C 0000857C  81 01 00 60 */	lwz r8, 0x60(r1)
/* 8000B640 00008580  80 01 00 64 */	lwz r0, 0x64(r1)
/* 8000B644 00008584  38 81 00 38 */	addi r4, r1, 0x38
/* 8000B648 00008588  91 41 00 90 */	stw r10, 0x90(r1)
/* 8000B64C 0000858C  38 A1 00 40 */	addi r5, r1, 0x40
/* 8000B650 00008590  38 E1 00 0C */	addi r7, r1, 0xc
/* 8000B654 00008594  99 21 00 0C */	stb r9, 0xc(r1)
/* 8000B658 00008598  91 41 00 40 */	stw r10, 0x40(r1)
/* 8000B65C 0000859C  91 61 00 44 */	stw r11, 0x44(r1)
/* 8000B660 000085A0  91 01 00 38 */	stw r8, 0x38(r1)
/* 8000B664 000085A4  90 01 00 3C */	stw r0, 0x3c(r1)
/* 8000B668 000085A8  48 00 04 29 */	bl "upper_bound<Q37JStudio22TFunctionValue_hermite15TIterator_data_,d,Q23std7less<d>>__3stdFQ37JStudio22TFunctionValue_hermite15TIterator_data_Q37JStudio22TFunctionValue_hermite15TIterator_data_RCdQ23std7less<d>"
/* 8000B66C 000085AC  38 A1 00 80 */	addi r5, r1, 0x80
/* 8000B670 000085B0  48 00 01 28 */	b .L_8000B798
.L_8000B674:
/* 8000B674 000085B4  81 26 00 00 */	lwz r9, 0(r6)
/* 8000B678 000085B8  80 85 00 00 */	lwz r4, 0(r5)
/* 8000B67C 000085BC  80 C6 00 04 */	lwz r6, 4(r6)
/* 8000B680 000085C0  80 65 00 04 */	lwz r3, 4(r5)
/* 8000B684 000085C4  7C 09 20 40 */	cmplw r9, r4
/* 8000B688 000085C8  88 08 00 00 */	lbz r0, 0(r8)
/* 8000B68C 000085CC  91 21 00 70 */	stw r9, 0x70(r1)
/* 8000B690 000085D0  90 C1 00 74 */	stw r6, 0x74(r1)
/* 8000B694 000085D4  90 81 00 78 */	stw r4, 0x78(r1)
/* 8000B698 000085D8  90 61 00 7C */	stw r3, 0x7c(r1)
/* 8000B69C 000085DC  98 01 00 10 */	stb r0, 0x10(r1)
/* 8000B6A0 000085E0  40 82 00 14 */	bne .L_8000B6B4
/* 8000B6A4 000085E4  90 81 00 68 */	stw r4, 0x68(r1)
/* 8000B6A8 000085E8  38 A1 00 68 */	addi r5, r1, 0x68
/* 8000B6AC 000085EC  90 61 00 6C */	stw r3, 0x6c(r1)
/* 8000B6B0 000085F0  48 00 00 E8 */	b .L_8000B798
.L_8000B6B4:
/* 8000B6B4 000085F4  7C 09 20 50 */	subf r0, r9, r4
/* 8000B6B8 000085F8  90 81 00 30 */	stw r4, 0x30(r1)
/* 8000B6BC 000085FC  7C 00 16 70 */	srawi r0, r0, 2
/* 8000B6C0 00008600  C8 27 00 00 */	lfd f1, 0(r7)
/* 8000B6C4 00008604  7C 00 01 94 */	addze r0, r0
/* 8000B6C8 00008608  90 61 00 34 */	stw r3, 0x34(r1)
/* 8000B6CC 0000860C  7C 80 1B 96 */	divwu r4, r0, r3
/* 8000B6D0 00008610  38 60 00 01 */	li r3, 1
/* 8000B6D4 00008614  91 21 00 28 */	stw r9, 0x28(r1)
/* 8000B6D8 00008618  90 C1 00 2C */	stw r6, 0x2c(r1)
/* 8000B6DC 0000861C  91 21 00 58 */	stw r9, 0x58(r1)
/* 8000B6E0 00008620  90 C1 00 5C */	stw r6, 0x5c(r1)
.L_8000B6E4:
/* 8000B6E4 00008624  80 C1 00 58 */	lwz r6, 0x58(r1)
/* 8000B6E8 00008628  C0 06 00 00 */	lfs f0, 0(r6)
/* 8000B6EC 0000862C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8000B6F0 00008630  40 80 00 20 */	bge .L_8000B710
/* 8000B6F4 00008634  2C 03 00 01 */	cmpwi r3, 1
/* 8000B6F8 00008638  40 82 00 5C */	bne .L_8000B754
/* 8000B6FC 0000863C  80 01 00 5C */	lwz r0, 0x5c(r1)
/* 8000B700 00008640  38 A1 00 68 */	addi r5, r1, 0x68
/* 8000B704 00008644  90 C1 00 68 */	stw r6, 0x68(r1)
/* 8000B708 00008648  90 01 00 6C */	stw r0, 0x6c(r1)
/* 8000B70C 0000864C  48 00 00 8C */	b .L_8000B798
.L_8000B710:
/* 8000B710 00008650  80 01 00 5C */	lwz r0, 0x5c(r1)
/* 8000B714 00008654  7C 83 20 51 */	subf. r4, r3, r4
/* 8000B718 00008658  90 C1 00 70 */	stw r6, 0x70(r1)
/* 8000B71C 0000865C  90 01 00 74 */	stw r0, 0x74(r1)
/* 8000B720 00008660  41 81 00 18 */	bgt .L_8000B738
/* 8000B724 00008664  80 61 00 78 */	lwz r3, 0x78(r1)
/* 8000B728 00008668  80 01 00 7C */	lwz r0, 0x7c(r1)
/* 8000B72C 0000866C  90 61 00 58 */	stw r3, 0x58(r1)
/* 8000B730 00008670  90 01 00 5C */	stw r0, 0x5c(r1)
/* 8000B734 00008674  48 00 00 20 */	b .L_8000B754
.L_8000B738:
/* 8000B738 00008678  80 01 00 5C */	lwz r0, 0x5c(r1)
/* 8000B73C 0000867C  7C 00 19 D6 */	mullw r0, r0, r3
/* 8000B740 00008680  54 63 18 38 */	slwi r3, r3, 3
/* 8000B744 00008684  54 00 10 3A */	slwi r0, r0, 2
/* 8000B748 00008688  7C 06 02 14 */	add r0, r6, r0
/* 8000B74C 0000868C  90 01 00 58 */	stw r0, 0x58(r1)
/* 8000B750 00008690  4B FF FF 94 */	b .L_8000B6E4
.L_8000B754:
/* 8000B754 00008694  89 61 00 10 */	lbz r11, 0x10(r1)
/* 8000B758 00008698  7C E6 3B 78 */	mr r6, r7
/* 8000B75C 0000869C  81 41 00 58 */	lwz r10, 0x58(r1)
/* 8000B760 000086A0  38 61 00 68 */	addi r3, r1, 0x68
/* 8000B764 000086A4  81 21 00 5C */	lwz r9, 0x5c(r1)
/* 8000B768 000086A8  38 81 00 18 */	addi r4, r1, 0x18
/* 8000B76C 000086AC  81 01 00 70 */	lwz r8, 0x70(r1)
/* 8000B770 000086B0  38 A1 00 20 */	addi r5, r1, 0x20
/* 8000B774 000086B4  80 01 00 74 */	lwz r0, 0x74(r1)
/* 8000B778 000086B8  38 E1 00 08 */	addi r7, r1, 8
/* 8000B77C 000086BC  99 61 00 08 */	stb r11, 8(r1)
/* 8000B780 000086C0  91 41 00 20 */	stw r10, 0x20(r1)
/* 8000B784 000086C4  91 21 00 24 */	stw r9, 0x24(r1)
/* 8000B788 000086C8  91 01 00 18 */	stw r8, 0x18(r1)
/* 8000B78C 000086CC  90 01 00 1C */	stw r0, 0x1c(r1)
/* 8000B790 000086D0  48 00 03 01 */	bl "upper_bound<Q37JStudio22TFunctionValue_hermite15TIterator_data_,d,Q23std7less<d>>__3stdFQ37JStudio22TFunctionValue_hermite15TIterator_data_Q37JStudio22TFunctionValue_hermite15TIterator_data_RCdQ23std7less<d>"
/* 8000B794 000086D4  38 A1 00 68 */	addi r5, r1, 0x68
.L_8000B798:
/* 8000B798 000086D8  80 05 00 00 */	lwz r0, 0(r5)
/* 8000B79C 000086DC  90 1F 00 00 */	stw r0, 0(r31)
/* 8000B7A0 000086E0  80 05 00 04 */	lwz r0, 4(r5)
/* 8000B7A4 000086E4  90 1F 00 04 */	stw r0, 4(r31)
/* 8000B7A8 000086E8  83 E1 00 9C */	lwz r31, 0x9c(r1)
/* 8000B7AC 000086EC  80 01 00 A4 */	lwz r0, 0xa4(r1)
/* 8000B7B0 000086F0  7C 08 03 A6 */	mtlr r0
/* 8000B7B4 000086F4  38 21 00 A0 */	addi r1, r1, 0xa0
/* 8000B7B8 000086F8  4E 80 00 20 */	blr 
.endfn "findUpperBound_binary_current<Q37JStudio22TFunctionValue_hermite15TIterator_data_,d,Q23std7less<d>>__7JGadgetFQ37JStudio22TFunctionValue_hermite15TIterator_data_Q37JStudio22TFunctionValue_hermite15TIterator_data_Q37JStudio22TFunctionValue_hermite15TIterator_data_RCdQ23std7less<d>"

.fn __dt__Q27JStudio22TFunctionValue_hermiteFv, weak
/* 8000B7BC 000086FC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8000B7C0 00008700  7C 08 02 A6 */	mflr r0
/* 8000B7C4 00008704  90 01 00 14 */	stw r0, 0x14(r1)
/* 8000B7C8 00008708  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8000B7CC 0000870C  7C 7F 1B 79 */	or. r31, r3, r3
/* 8000B7D0 00008710  41 82 00 30 */	beq .L_8000B800
/* 8000B7D4 00008714  3C 60 80 4A */	lis r3, __vt__Q27JStudio22TFunctionValue_hermite@ha
/* 8000B7D8 00008718  38 03 E4 68 */	addi r0, r3, __vt__Q27JStudio22TFunctionValue_hermite@l
/* 8000B7DC 0000871C  90 1F 00 00 */	stw r0, 0(r31)
/* 8000B7E0 00008720  41 82 00 10 */	beq .L_8000B7F0
/* 8000B7E4 00008724  3C 60 80 4A */	lis r3, __vt__Q27JStudio14TFunctionValue@ha
/* 8000B7E8 00008728  38 03 E5 28 */	addi r0, r3, __vt__Q27JStudio14TFunctionValue@l
/* 8000B7EC 0000872C  90 1F 00 00 */	stw r0, 0(r31)
.L_8000B7F0:
/* 8000B7F0 00008730  7C 80 07 35 */	extsh. r0, r4
/* 8000B7F4 00008734  40 81 00 0C */	ble .L_8000B800
/* 8000B7F8 00008738  7F E3 FB 78 */	mr r3, r31
/* 8000B7FC 0000873C  48 01 88 B9 */	bl __dl__FPv
.L_8000B800:
/* 8000B800 00008740  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8000B804 00008744  7F E3 FB 78 */	mr r3, r31
/* 8000B808 00008748  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8000B80C 0000874C  7C 08 03 A6 */	mtlr r0
/* 8000B810 00008750  38 21 00 10 */	addi r1, r1, 0x10
/* 8000B814 00008754  4E 80 00 20 */	blr 
.endfn __dt__Q27JStudio22TFunctionValue_hermiteFv

.fn __dt__Q27JStudio29TFunctionValue_list_parameterFv, weak
/* 8000B818 00008758  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8000B81C 0000875C  7C 08 02 A6 */	mflr r0
/* 8000B820 00008760  90 01 00 14 */	stw r0, 0x14(r1)
/* 8000B824 00008764  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8000B828 00008768  7C 7F 1B 79 */	or. r31, r3, r3
/* 8000B82C 0000876C  41 82 00 30 */	beq .L_8000B85C
/* 8000B830 00008770  3C 60 80 4A */	lis r3, __vt__Q27JStudio29TFunctionValue_list_parameter@ha
/* 8000B834 00008774  38 03 E4 88 */	addi r0, r3, __vt__Q27JStudio29TFunctionValue_list_parameter@l
/* 8000B838 00008778  90 1F 00 00 */	stw r0, 0(r31)
/* 8000B83C 0000877C  41 82 00 10 */	beq .L_8000B84C
/* 8000B840 00008780  3C 60 80 4A */	lis r3, __vt__Q27JStudio14TFunctionValue@ha
/* 8000B844 00008784  38 03 E5 28 */	addi r0, r3, __vt__Q27JStudio14TFunctionValue@l
/* 8000B848 00008788  90 1F 00 00 */	stw r0, 0(r31)
.L_8000B84C:
/* 8000B84C 0000878C  7C 80 07 35 */	extsh. r0, r4
/* 8000B850 00008790  40 81 00 0C */	ble .L_8000B85C
/* 8000B854 00008794  7F E3 FB 78 */	mr r3, r31
/* 8000B858 00008798  48 01 88 5D */	bl __dl__FPv
.L_8000B85C:
/* 8000B85C 0000879C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8000B860 000087A0  7F E3 FB 78 */	mr r3, r31
/* 8000B864 000087A4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8000B868 000087A8  7C 08 03 A6 */	mtlr r0
/* 8000B86C 000087AC  38 21 00 10 */	addi r1, r1, 0x10
/* 8000B870 000087B0  4E 80 00 20 */	blr 
.endfn __dt__Q27JStudio29TFunctionValue_list_parameterFv

.fn __dt__Q27JStudio19TFunctionValue_listFv, weak
/* 8000B874 000087B4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8000B878 000087B8  7C 08 02 A6 */	mflr r0
/* 8000B87C 000087BC  90 01 00 14 */	stw r0, 0x14(r1)
/* 8000B880 000087C0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8000B884 000087C4  7C 7F 1B 79 */	or. r31, r3, r3
/* 8000B888 000087C8  41 82 00 30 */	beq .L_8000B8B8
/* 8000B88C 000087CC  3C 60 80 4A */	lis r3, __vt__Q27JStudio19TFunctionValue_list@ha
/* 8000B890 000087D0  38 03 E4 A8 */	addi r0, r3, __vt__Q27JStudio19TFunctionValue_list@l
/* 8000B894 000087D4  90 1F 00 00 */	stw r0, 0(r31)
/* 8000B898 000087D8  41 82 00 10 */	beq .L_8000B8A8
/* 8000B89C 000087DC  3C 60 80 4A */	lis r3, __vt__Q27JStudio14TFunctionValue@ha
/* 8000B8A0 000087E0  38 03 E5 28 */	addi r0, r3, __vt__Q27JStudio14TFunctionValue@l
/* 8000B8A4 000087E4  90 1F 00 00 */	stw r0, 0(r31)
.L_8000B8A8:
/* 8000B8A8 000087E8  7C 80 07 35 */	extsh. r0, r4
/* 8000B8AC 000087EC  40 81 00 0C */	ble .L_8000B8B8
/* 8000B8B0 000087F0  7F E3 FB 78 */	mr r3, r31
/* 8000B8B4 000087F4  48 01 88 01 */	bl __dl__FPv
.L_8000B8B8:
/* 8000B8B8 000087F8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8000B8BC 000087FC  7F E3 FB 78 */	mr r3, r31
/* 8000B8C0 00008800  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8000B8C4 00008804  7C 08 03 A6 */	mtlr r0
/* 8000B8C8 00008808  38 21 00 10 */	addi r1, r1, 0x10
/* 8000B8CC 0000880C  4E 80 00 20 */	blr 
.endfn __dt__Q27JStudio19TFunctionValue_listFv

.fn __dt__Q27JStudio25TFunctionValue_transitionFv, weak
/* 8000B8D0 00008810  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8000B8D4 00008814  7C 08 02 A6 */	mflr r0
/* 8000B8D8 00008818  90 01 00 14 */	stw r0, 0x14(r1)
/* 8000B8DC 0000881C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8000B8E0 00008820  7C 7F 1B 79 */	or. r31, r3, r3
/* 8000B8E4 00008824  41 82 00 30 */	beq .L_8000B914
/* 8000B8E8 00008828  3C 60 80 4A */	lis r3, __vt__Q27JStudio25TFunctionValue_transition@ha
/* 8000B8EC 0000882C  38 03 E4 C8 */	addi r0, r3, __vt__Q27JStudio25TFunctionValue_transition@l
/* 8000B8F0 00008830  90 1F 00 00 */	stw r0, 0(r31)
/* 8000B8F4 00008834  41 82 00 10 */	beq .L_8000B904
/* 8000B8F8 00008838  3C 60 80 4A */	lis r3, __vt__Q27JStudio14TFunctionValue@ha
/* 8000B8FC 0000883C  38 03 E5 28 */	addi r0, r3, __vt__Q27JStudio14TFunctionValue@l
/* 8000B900 00008840  90 1F 00 00 */	stw r0, 0(r31)
.L_8000B904:
/* 8000B904 00008844  7C 80 07 35 */	extsh. r0, r4
/* 8000B908 00008848  40 81 00 0C */	ble .L_8000B914
/* 8000B90C 0000884C  7F E3 FB 78 */	mr r3, r31
/* 8000B910 00008850  48 01 87 A5 */	bl __dl__FPv
.L_8000B914:
/* 8000B914 00008854  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8000B918 00008858  7F E3 FB 78 */	mr r3, r31
/* 8000B91C 0000885C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8000B920 00008860  7C 08 03 A6 */	mtlr r0
/* 8000B924 00008864  38 21 00 10 */	addi r1, r1, 0x10
/* 8000B928 00008868  4E 80 00 20 */	blr 
.endfn __dt__Q27JStudio25TFunctionValue_transitionFv

.fn __dt__Q27JStudio23TFunctionValue_constantFv, weak
/* 8000B92C 0000886C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8000B930 00008870  7C 08 02 A6 */	mflr r0
/* 8000B934 00008874  90 01 00 14 */	stw r0, 0x14(r1)
/* 8000B938 00008878  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8000B93C 0000887C  7C 7F 1B 79 */	or. r31, r3, r3
/* 8000B940 00008880  41 82 00 30 */	beq .L_8000B970
/* 8000B944 00008884  3C 60 80 4A */	lis r3, __vt__Q27JStudio23TFunctionValue_constant@ha
/* 8000B948 00008888  38 03 E4 E8 */	addi r0, r3, __vt__Q27JStudio23TFunctionValue_constant@l
/* 8000B94C 0000888C  90 1F 00 00 */	stw r0, 0(r31)
/* 8000B950 00008890  41 82 00 10 */	beq .L_8000B960
/* 8000B954 00008894  3C 60 80 4A */	lis r3, __vt__Q27JStudio14TFunctionValue@ha
/* 8000B958 00008898  38 03 E5 28 */	addi r0, r3, __vt__Q27JStudio14TFunctionValue@l
/* 8000B95C 0000889C  90 1F 00 00 */	stw r0, 0(r31)
.L_8000B960:
/* 8000B960 000088A0  7C 80 07 35 */	extsh. r0, r4
/* 8000B964 000088A4  40 81 00 0C */	ble .L_8000B970
/* 8000B968 000088A8  7F E3 FB 78 */	mr r3, r31
/* 8000B96C 000088AC  48 01 87 49 */	bl __dl__FPv
.L_8000B970:
/* 8000B970 000088B0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8000B974 000088B4  7F E3 FB 78 */	mr r3, r31
/* 8000B978 000088B8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8000B97C 000088BC  7C 08 03 A6 */	mtlr r0
/* 8000B980 000088C0  38 21 00 10 */	addi r1, r1, 0x10
/* 8000B984 000088C4  4E 80 00 20 */	blr 
.endfn __dt__Q27JStudio23TFunctionValue_constantFv

.fn __dt__Q27JStudio24TFunctionValue_compositeFv, weak
/* 8000B988 000088C8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8000B98C 000088CC  7C 08 02 A6 */	mflr r0
/* 8000B990 000088D0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8000B994 000088D4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8000B998 000088D8  7C 9F 23 78 */	mr r31, r4
/* 8000B99C 000088DC  93 C1 00 08 */	stw r30, 8(r1)
/* 8000B9A0 000088E0  7C 7E 1B 79 */	or. r30, r3, r3
/* 8000B9A4 000088E4  41 82 00 50 */	beq .L_8000B9F4
/* 8000B9A8 000088E8  3C 60 80 4A */	lis r3, __vt__Q27JStudio24TFunctionValue_composite@ha
/* 8000B9AC 000088EC  34 1E 00 04 */	addic. r0, r30, 4
/* 8000B9B0 000088F0  38 03 E5 08 */	addi r0, r3, __vt__Q27JStudio24TFunctionValue_composite@l
/* 8000B9B4 000088F4  90 1E 00 00 */	stw r0, 0(r30)
/* 8000B9B8 000088F8  41 82 00 18 */	beq .L_8000B9D0
/* 8000B9BC 000088FC  34 1E 00 04 */	addic. r0, r30, 4
/* 8000B9C0 00008900  41 82 00 10 */	beq .L_8000B9D0
/* 8000B9C4 00008904  38 7E 00 04 */	addi r3, r30, 4
/* 8000B9C8 00008908  38 80 00 00 */	li r4, 0
/* 8000B9CC 0000890C  48 01 C1 BD */	bl __dt__Q27JGadget20TVector_pointer_voidFv
.L_8000B9D0:
/* 8000B9D0 00008910  28 1E 00 00 */	cmplwi r30, 0
/* 8000B9D4 00008914  41 82 00 10 */	beq .L_8000B9E4
/* 8000B9D8 00008918  3C 60 80 4A */	lis r3, __vt__Q27JStudio14TFunctionValue@ha
/* 8000B9DC 0000891C  38 03 E5 28 */	addi r0, r3, __vt__Q27JStudio14TFunctionValue@l
/* 8000B9E0 00008920  90 1E 00 00 */	stw r0, 0(r30)
.L_8000B9E4:
/* 8000B9E4 00008924  7F E0 07 35 */	extsh. r0, r31
/* 8000B9E8 00008928  40 81 00 0C */	ble .L_8000B9F4
/* 8000B9EC 0000892C  7F C3 F3 78 */	mr r3, r30
/* 8000B9F0 00008930  48 01 86 C5 */	bl __dl__FPv
.L_8000B9F4:
/* 8000B9F4 00008934  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8000B9F8 00008938  7F C3 F3 78 */	mr r3, r30
/* 8000B9FC 0000893C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8000BA00 00008940  83 C1 00 08 */	lwz r30, 8(r1)
/* 8000BA04 00008944  7C 08 03 A6 */	mtlr r0
/* 8000BA08 00008948  38 21 00 10 */	addi r1, r1, 0x10
/* 8000BA0C 0000894C  4E 80 00 20 */	blr 
.endfn __dt__Q27JStudio24TFunctionValue_compositeFv

.fn "upper_bound<Q37JStudio29TFunctionValue_list_parameter15TIterator_data_,d,Q23std7less<d>>__3stdFQ37JStudio29TFunctionValue_list_parameter15TIterator_data_Q37JStudio29TFunctionValue_list_parameter15TIterator_data_RCdQ23std7less<d>", weak
/* 8000BA10 00008950  80 05 00 00 */	lwz r0, 0(r5)
/* 8000BA14 00008954  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8000BA18 00008958  80 A4 00 00 */	lwz r5, 0(r4)
/* 8000BA1C 0000895C  90 01 00 0C */	stw r0, 0xc(r1)
/* 8000BA20 00008960  7C 05 00 50 */	subf r0, r5, r0
/* 8000BA24 00008964  C8 26 00 00 */	lfd f1, 0(r6)
/* 8000BA28 00008968  7C 00 16 70 */	srawi r0, r0, 2
/* 8000BA2C 0000896C  90 A1 00 08 */	stw r5, 8(r1)
/* 8000BA30 00008970  7C 00 01 94 */	addze r0, r0
/* 8000BA34 00008974  54 06 F8 7E */	srwi r6, r0, 1
/* 8000BA38 00008978  48 00 00 40 */	b .L_8000BA78
.L_8000BA3C:
/* 8000BA3C 0000897C  54 C0 0F FE */	srwi r0, r6, 0x1f
/* 8000BA40 00008980  80 A4 00 00 */	lwz r5, 0(r4)
/* 8000BA44 00008984  7C 00 32 14 */	add r0, r0, r6
/* 8000BA48 00008988  7C 07 0E 70 */	srawi r7, r0, 1
/* 8000BA4C 0000898C  54 E0 18 38 */	slwi r0, r7, 3
/* 8000BA50 00008990  7C A5 02 14 */	add r5, r5, r0
/* 8000BA54 00008994  C0 05 00 00 */	lfs f0, 0(r5)
/* 8000BA58 00008998  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8000BA5C 0000899C  41 80 00 18 */	blt .L_8000BA74
/* 8000BA60 000089A0  38 A5 00 08 */	addi r5, r5, 8
/* 8000BA64 000089A4  38 07 00 01 */	addi r0, r7, 1
/* 8000BA68 000089A8  90 A4 00 00 */	stw r5, 0(r4)
/* 8000BA6C 000089AC  7C C0 30 50 */	subf r6, r0, r6
/* 8000BA70 000089B0  48 00 00 08 */	b .L_8000BA78
.L_8000BA74:
/* 8000BA74 000089B4  7C E6 3B 78 */	mr r6, r7
.L_8000BA78:
/* 8000BA78 000089B8  2C 06 00 00 */	cmpwi r6, 0
/* 8000BA7C 000089BC  41 81 FF C0 */	bgt .L_8000BA3C
/* 8000BA80 000089C0  80 04 00 00 */	lwz r0, 0(r4)
/* 8000BA84 000089C4  90 03 00 00 */	stw r0, 0(r3)
/* 8000BA88 000089C8  38 21 00 10 */	addi r1, r1, 0x10
/* 8000BA8C 000089CC  4E 80 00 20 */	blr 
.endfn "upper_bound<Q37JStudio29TFunctionValue_list_parameter15TIterator_data_,d,Q23std7less<d>>__3stdFQ37JStudio29TFunctionValue_list_parameter15TIterator_data_Q37JStudio29TFunctionValue_list_parameter15TIterator_data_RCdQ23std7less<d>"

.fn "upper_bound<Q37JStudio22TFunctionValue_hermite15TIterator_data_,d,Q23std7less<d>>__3stdFQ37JStudio22TFunctionValue_hermite15TIterator_data_Q37JStudio22TFunctionValue_hermite15TIterator_data_RCdQ23std7less<d>", weak
/* 8000BA90 000089D0  81 25 00 00 */	lwz r9, 0(r5)
/* 8000BA94 000089D4  80 E4 00 00 */	lwz r7, 0(r4)
/* 8000BA98 000089D8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8000BA9C 000089DC  81 05 00 04 */	lwz r8, 4(r5)
/* 8000BAA0 000089E0  7C 07 48 50 */	subf r0, r7, r9
/* 8000BAA4 000089E4  7C 00 16 70 */	srawi r0, r0, 2
/* 8000BAA8 000089E8  80 A4 00 04 */	lwz r5, 4(r4)
/* 8000BAAC 000089EC  7C 00 01 94 */	addze r0, r0
/* 8000BAB0 000089F0  91 21 00 10 */	stw r9, 0x10(r1)
/* 8000BAB4 000089F4  7D 20 43 96 */	divwu r9, r0, r8
/* 8000BAB8 000089F8  C8 26 00 00 */	lfd f1, 0(r6)
/* 8000BABC 000089FC  91 01 00 14 */	stw r8, 0x14(r1)
/* 8000BAC0 00008A00  90 E1 00 08 */	stw r7, 8(r1)
/* 8000BAC4 00008A04  90 A1 00 0C */	stw r5, 0xc(r1)
/* 8000BAC8 00008A08  48 00 00 60 */	b .L_8000BB28
.L_8000BACC:
/* 8000BACC 00008A0C  55 20 0F FE */	srwi r0, r9, 0x1f
/* 8000BAD0 00008A10  80 E4 00 04 */	lwz r7, 4(r4)
/* 8000BAD4 00008A14  7C 00 4A 14 */	add r0, r0, r9
/* 8000BAD8 00008A18  80 A4 00 00 */	lwz r5, 0(r4)
/* 8000BADC 00008A1C  7C 08 0E 70 */	srawi r8, r0, 1
/* 8000BAE0 00008A20  90 E1 00 1C */	stw r7, 0x1c(r1)
/* 8000BAE4 00008A24  7C 07 41 D6 */	mullw r0, r7, r8
/* 8000BAE8 00008A28  90 A1 00 18 */	stw r5, 0x18(r1)
/* 8000BAEC 00008A2C  54 00 10 3A */	slwi r0, r0, 2
/* 8000BAF0 00008A30  7C C5 02 14 */	add r6, r5, r0
/* 8000BAF4 00008A34  C0 06 00 00 */	lfs f0, 0(r6)
/* 8000BAF8 00008A38  90 C1 00 18 */	stw r6, 0x18(r1)
/* 8000BAFC 00008A3C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8000BB00 00008A40  41 80 00 24 */	blt .L_8000BB24
/* 8000BB04 00008A44  54 E5 10 3A */	slwi r5, r7, 2
/* 8000BB08 00008A48  38 08 00 01 */	addi r0, r8, 1
/* 8000BB0C 00008A4C  7C A6 2A 14 */	add r5, r6, r5
/* 8000BB10 00008A50  90 E4 00 04 */	stw r7, 4(r4)
/* 8000BB14 00008A54  7D 20 48 50 */	subf r9, r0, r9
/* 8000BB18 00008A58  90 A1 00 18 */	stw r5, 0x18(r1)
/* 8000BB1C 00008A5C  90 A4 00 00 */	stw r5, 0(r4)
/* 8000BB20 00008A60  48 00 00 08 */	b .L_8000BB28
.L_8000BB24:
/* 8000BB24 00008A64  7D 09 43 78 */	mr r9, r8
.L_8000BB28:
/* 8000BB28 00008A68  2C 09 00 00 */	cmpwi r9, 0
/* 8000BB2C 00008A6C  41 81 FF A0 */	bgt .L_8000BACC
/* 8000BB30 00008A70  80 A4 00 00 */	lwz r5, 0(r4)
/* 8000BB34 00008A74  80 04 00 04 */	lwz r0, 4(r4)
/* 8000BB38 00008A78  90 A3 00 00 */	stw r5, 0(r3)
/* 8000BB3C 00008A7C  90 03 00 04 */	stw r0, 4(r3)
/* 8000BB40 00008A80  38 21 00 20 */	addi r1, r1, 0x20
/* 8000BB44 00008A84  4E 80 00 20 */	blr 
.endfn "upper_bound<Q37JStudio22TFunctionValue_hermite15TIterator_data_,d,Q23std7less<d>>__3stdFQ37JStudio22TFunctionValue_hermite15TIterator_data_Q37JStudio22TFunctionValue_hermite15TIterator_data_RCdQ23std7less<d>"
