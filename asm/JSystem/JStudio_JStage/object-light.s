.include "macros.inc"
.section .ctors, "wa"  # 0x80472F00 - 0x804732C0
lbl_constructor:
.4byte "__sinit_object-light_cpp"

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.obj __vt__Q314JStudio_JStage14TAdaptor_light20TVVOutput_direction_, global
	.4byte 0
	.4byte 0
	.4byte __cl__Q314JStudio_JStage14TAdaptor_light20TVVOutput_direction_CFfPQ27JStudio8TAdaptor
	.4byte __dt__Q314JStudio_JStage14TAdaptor_light20TVVOutput_direction_Fv
.endobj __vt__Q314JStudio_JStage14TAdaptor_light20TVVOutput_direction_
.obj __vt__Q214JStudio_JStage14TAdaptor_light, global
	.4byte 0
	.4byte 0
	.4byte __dt__Q214JStudio_JStage14TAdaptor_lightFv
	.4byte adaptor_do_prepare__Q214JStudio_JStage14TAdaptor_lightFPCQ27JStudio7TObject
	.4byte adaptor_do_begin__Q214JStudio_JStage14TAdaptor_lightFPCQ27JStudio7TObject
	.4byte adaptor_do_end__Q214JStudio_JStage14TAdaptor_lightFPCQ27JStudio7TObject
	.4byte adaptor_do_update__Q214JStudio_JStage14TAdaptor_lightFPCQ27JStudio7TObjectUl
	.4byte adaptor_do_data__Q214JStudio_JStage14TAdaptor_lightFPCQ27JStudio7TObjectPCvUlPCvUl
	.4byte adaptor_do_ENABLE__Q214JStudio_JStage14TAdaptor_lightFQ37JStudio4data15TEOperationDataPCvUl
	.4byte adaptor_do_FACULTY__Q214JStudio_JStage14TAdaptor_lightFQ37JStudio4data15TEOperationDataPCvUl
.endobj __vt__Q214JStudio_JStage14TAdaptor_light

.section .bss  # 0x804EFC20 - 0x8051467C
.balign 8
.lcomm lbl_804EFDA0, 0xC, 4
.lcomm lbl_804EFDAC, 0xC, 4
.lcomm lbl_804EFDB8, 0xC, 4
.lcomm lbl_804EFDC4, 0xC, 4
.lcomm lbl_804EFDD0, 0xC, 4
.lcomm lbl_804EFDDC, 0xC, 4
# object-light.cpp
.comm saoVVOutput_direction___Q214JStudio_JStage14TAdaptor_light, 0x48, 4

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
.obj lbl_80516480, local
	.float 0.0
.endobj lbl_80516480
.balign 8
.obj lbl_80516488, local
	.double 0.5
.endobj lbl_80516488
.balign 8
.obj lbl_80516490, local
	.double 3.0
.endobj lbl_80516490
.balign 8
.obj lbl_80516498, local
	.double 0.0
.endobj lbl_80516498
.obj lbl_805164A0, local
	.float 57.29578
.endobj lbl_805164A0
.obj lbl_805164A4, local
	.float 0.017453292
.endobj lbl_805164A4

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.fn __ct__Q214JStudio_JStage14TAdaptor_lightFPCQ26JStage7TSystemPQ26JStage6TLight, global
/* 800113C8 0000E308  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 800113CC 0000E30C  7C 08 02 A6 */	mflr r0
/* 800113D0 0000E310  3C C0 80 4A */	lis r6, __vt__Q27JStudio8TAdaptor@ha
/* 800113D4 0000E314  3C E0 80 4A */	lis r7, __vt__Q27JStudio14TAdaptor_light@ha
/* 800113D8 0000E318  90 01 00 24 */	stw r0, 0x24(r1)
/* 800113DC 0000E31C  38 06 F4 68 */	addi r0, r6, __vt__Q27JStudio8TAdaptor@l
/* 800113E0 0000E320  3C C0 80 00 */	lis r6, __ct__Q27JStudio14TVariableValueFv@ha
/* 800113E4 0000E324  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 800113E8 0000E328  7C BF 2B 78 */	mr r31, r5
/* 800113EC 0000E32C  38 A7 F2 D4 */	addi r5, r7, __vt__Q27JStudio14TAdaptor_light@l
/* 800113F0 0000E330  38 E0 00 0D */	li r7, 0xd
/* 800113F4 0000E334  93 C1 00 18 */	stw r30, 0x18(r1)
/* 800113F8 0000E338  7C 9E 23 78 */	mr r30, r4
/* 800113FC 0000E33C  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80011400 0000E340  7C 7D 1B 78 */	mr r29, r3
/* 80011404 0000E344  7F A8 EB 78 */	mr r8, r29
/* 80011408 0000E348  90 03 00 00 */	stw r0, 0(r3)
/* 8001140C 0000E34C  38 68 00 0C */	addi r3, r8, 0xc
/* 80011410 0000E350  38 00 00 0D */	li r0, 0xd
/* 80011414 0000E354  90 7D 00 04 */	stw r3, 4(r29)
/* 80011418 0000E358  90 1D 00 08 */	stw r0, 8(r29)
/* 8001141C 0000E35C  38 06 58 08 */	addi r0, r6, __ct__Q27JStudio14TVariableValueFv@l
/* 80011420 0000E360  7C 04 03 78 */	mr r4, r0
/* 80011424 0000E364  38 C0 00 14 */	li r6, 0x14
/* 80011428 0000E368  90 BD 00 00 */	stw r5, 0(r29)
/* 8001142C 0000E36C  38 A0 00 00 */	li r5, 0
/* 80011430 0000E370  48 0B 04 0D */	bl __construct_array
/* 80011434 0000E374  3C 60 80 4A */	lis r3, __vt__Q214JStudio_JStage14TAdaptor_light@ha
/* 80011438 0000E378  38 00 00 00 */	li r0, 0
/* 8001143C 0000E37C  38 83 F5 88 */	addi r4, r3, __vt__Q214JStudio_JStage14TAdaptor_light@l
/* 80011440 0000E380  7F A3 EB 78 */	mr r3, r29
/* 80011444 0000E384  90 9D 00 00 */	stw r4, 0(r29)
/* 80011448 0000E388  93 DD 01 10 */	stw r30, 0x110(r29)
/* 8001144C 0000E38C  93 FD 01 14 */	stw r31, 0x114(r29)
/* 80011450 0000E390  90 1D 01 18 */	stw r0, 0x118(r29)
/* 80011454 0000E394  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80011458 0000E398  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8001145C 0000E39C  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80011460 0000E3A0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80011464 0000E3A4  7C 08 03 A6 */	mtlr r0
/* 80011468 0000E3A8  38 21 00 20 */	addi r1, r1, 0x20
/* 8001146C 0000E3AC  4E 80 00 20 */	blr 
.endfn __ct__Q214JStudio_JStage14TAdaptor_lightFPCQ26JStage7TSystemPQ26JStage6TLight

.fn __dt__Q214JStudio_JStage14TAdaptor_lightFv, global
/* 80011470 0000E3B0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80011474 0000E3B4  7C 08 02 A6 */	mflr r0
/* 80011478 0000E3B8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8001147C 0000E3BC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80011480 0000E3C0  7C 9F 23 78 */	mr r31, r4
/* 80011484 0000E3C4  93 C1 00 08 */	stw r30, 8(r1)
/* 80011488 0000E3C8  7C 7E 1B 79 */	or. r30, r3, r3
/* 8001148C 0000E3CC  41 82 00 40 */	beq .L_800114CC
/* 80011490 0000E3D0  3C A0 80 4A */	lis r5, __vt__Q214JStudio_JStage14TAdaptor_light@ha
/* 80011494 0000E3D4  38 80 00 00 */	li r4, 0
/* 80011498 0000E3D8  38 05 F5 88 */	addi r0, r5, __vt__Q214JStudio_JStage14TAdaptor_light@l
/* 8001149C 0000E3DC  90 1E 00 00 */	stw r0, 0(r30)
/* 800114A0 0000E3E0  81 83 00 00 */	lwz r12, 0(r3)
/* 800114A4 0000E3E4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 800114A8 0000E3E8  7D 89 03 A6 */	mtctr r12
/* 800114AC 0000E3EC  4E 80 04 21 */	bctrl 
/* 800114B0 0000E3F0  7F C3 F3 78 */	mr r3, r30
/* 800114B4 0000E3F4  38 80 00 00 */	li r4, 0
/* 800114B8 0000E3F8  4B FF D2 F5 */	bl __dt__Q27JStudio14TAdaptor_lightFv
/* 800114BC 0000E3FC  7F E0 07 35 */	extsh. r0, r31
/* 800114C0 0000E400  40 81 00 0C */	ble .L_800114CC
/* 800114C4 0000E404  7F C3 F3 78 */	mr r3, r30
/* 800114C8 0000E408  48 01 2B ED */	bl __dl__FPv
.L_800114CC:
/* 800114CC 0000E40C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800114D0 0000E410  7F C3 F3 78 */	mr r3, r30
/* 800114D4 0000E414  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 800114D8 0000E418  83 C1 00 08 */	lwz r30, 8(r1)
/* 800114DC 0000E41C  7C 08 03 A6 */	mtlr r0
/* 800114E0 0000E420  38 21 00 10 */	addi r1, r1, 0x10
/* 800114E4 0000E424  4E 80 00 20 */	blr 
.endfn __dt__Q214JStudio_JStage14TAdaptor_lightFv

.fn adaptor_do_prepare__Q214JStudio_JStage14TAdaptor_lightFPCQ27JStudio7TObject, global
/* 800114E8 0000E428  3C 80 80 50 */	lis r4, saoVVOutput_direction___Q214JStudio_JStage14TAdaptor_light@ha
/* 800114EC 0000E42C  38 04 6A 8C */	addi r0, r4, saoVVOutput_direction___Q214JStudio_JStage14TAdaptor_light@l
/* 800114F0 0000E430  7C 05 03 78 */	mr r5, r0
/* 800114F4 0000E434  48 00 00 2C */	b .L_80011520
.L_800114F8:
/* 800114F8 0000E438  1C 00 00 14 */	mulli r0, r0, 0x14
/* 800114FC 0000E43C  80 83 00 04 */	lwz r4, 4(r3)
/* 80011500 0000E440  28 05 00 00 */	cmplwi r5, 0
/* 80011504 0000E444  7C 84 02 14 */	add r4, r4, r0
/* 80011508 0000E448  41 82 00 0C */	beq .L_80011514
/* 8001150C 0000E44C  7C A0 2B 78 */	mr r0, r5
/* 80011510 0000E450  48 00 00 08 */	b .L_80011518
.L_80011514:
/* 80011514 0000E454  38 0D 87 10 */	addi r0, r13, soOutput_none___Q27JStudio14TVariableValue@sda21
.L_80011518:
/* 80011518 0000E458  90 04 00 10 */	stw r0, 0x10(r4)
/* 8001151C 0000E45C  38 A5 00 0C */	addi r5, r5, 0xc
.L_80011520:
/* 80011520 0000E460  80 05 00 04 */	lwz r0, 4(r5)
/* 80011524 0000E464  2C 00 FF FF */	cmpwi r0, -1
/* 80011528 0000E468  40 82 FF D0 */	bne .L_800114F8
/* 8001152C 0000E46C  4E 80 00 20 */	blr 
.endfn adaptor_do_prepare__Q214JStudio_JStage14TAdaptor_lightFPCQ27JStudio7TObject

.fn adaptor_do_begin__Q214JStudio_JStage14TAdaptor_lightFPCQ27JStudio7TObject, global
/* 80011530 0000E470  94 21 FF 70 */	stwu r1, -0x90(r1)
/* 80011534 0000E474  7C 08 02 A6 */	mflr r0
/* 80011538 0000E478  90 01 00 94 */	stw r0, 0x94(r1)
/* 8001153C 0000E47C  DB E1 00 80 */	stfd f31, 0x80(r1)
/* 80011540 0000E480  F3 E1 00 88 */	psq_st f31, 136(r1), 0, qr0
/* 80011544 0000E484  DB C1 00 70 */	stfd f30, 0x70(r1)
/* 80011548 0000E488  F3 C1 00 78 */	psq_st f30, 120(r1), 0, qr0
/* 8001154C 0000E48C  DB A1 00 60 */	stfd f29, 0x60(r1)
/* 80011550 0000E490  F3 A1 00 68 */	psq_st f29, 104(r1), 0, qr0
/* 80011554 0000E494  93 E1 00 5C */	stw r31, 0x5c(r1)
/* 80011558 0000E498  93 C1 00 58 */	stw r30, 0x58(r1)
/* 8001155C 0000E49C  93 A1 00 54 */	stw r29, 0x54(r1)
/* 80011560 0000E4A0  7C 7E 1B 78 */	mr r30, r3
/* 80011564 0000E4A4  7C 9D 23 78 */	mr r29, r4
/* 80011568 0000E4A8  83 E3 01 14 */	lwz r31, 0x114(r3)
/* 8001156C 0000E4AC  7F E3 FB 78 */	mr r3, r31
/* 80011570 0000E4B0  81 9F 00 00 */	lwz r12, 0(r31)
/* 80011574 0000E4B4  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80011578 0000E4B8  7D 89 03 A6 */	mtctr r12
/* 8001157C 0000E4BC  4E 80 04 21 */	bctrl 
/* 80011580 0000E4C0  81 9F 00 00 */	lwz r12, 0(r31)
/* 80011584 0000E4C4  60 64 00 01 */	ori r4, r3, 1
/* 80011588 0000E4C8  7F E3 FB 78 */	mr r3, r31
/* 8001158C 0000E4CC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80011590 0000E4D0  7D 89 03 A6 */	mtctr r12
/* 80011594 0000E4D4  4E 80 04 21 */	bctrl 
/* 80011598 0000E4D8  80 7E 01 14 */	lwz r3, 0x114(r30)
/* 8001159C 0000E4DC  83 BD 00 14 */	lwz r29, 0x14(r29)
/* 800115A0 0000E4E0  81 83 00 00 */	lwz r12, 0(r3)
/* 800115A4 0000E4E4  81 8C 00 4C */	lwz r12, 0x4c(r12)
/* 800115A8 0000E4E8  7D 89 03 A6 */	mtctr r12
/* 800115AC 0000E4EC  4E 80 04 21 */	bctrl 
/* 800115B0 0000E4F0  3C 80 80 47 */	lis r4, sauVariableValue_4_COLOR_RGBA__Q27JStudio14TAdaptor_light@ha
/* 800115B4 0000E4F4  90 61 00 0C */	stw r3, 0xc(r1)
/* 800115B8 0000E4F8  38 84 33 D0 */	addi r4, r4, sauVariableValue_4_COLOR_RGBA__Q27JStudio14TAdaptor_light@l
/* 800115BC 0000E4FC  7F C3 F3 78 */	mr r3, r30
/* 800115C0 0000E500  38 A1 00 0C */	addi r5, r1, 0xc
/* 800115C4 0000E504  4B FF BD A1 */	bl adaptor_setVariableValue_GXColor__Q27JStudio8TAdaptorFPCUlRC8_GXColor
/* 800115C8 0000E508  80 7E 01 14 */	lwz r3, 0x114(r30)
/* 800115CC 0000E50C  38 81 00 34 */	addi r4, r1, 0x34
/* 800115D0 0000E510  81 83 00 00 */	lwz r12, 0(r3)
/* 800115D4 0000E514  81 8C 00 44 */	lwz r12, 0x44(r12)
/* 800115D8 0000E518  7D 89 03 A6 */	mtctr r12
/* 800115DC 0000E51C  4E 80 04 21 */	bctrl 
/* 800115E0 0000E520  80 7E 01 14 */	lwz r3, 0x114(r30)
/* 800115E4 0000E524  3B E1 00 40 */	addi r31, r1, 0x40
/* 800115E8 0000E528  7F E4 FB 78 */	mr r4, r31
/* 800115EC 0000E52C  81 83 00 00 */	lwz r12, 0(r3)
/* 800115F0 0000E530  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 800115F4 0000E534  7D 89 03 A6 */	mtctr r12
/* 800115F8 0000E538  4E 80 04 21 */	bctrl 
/* 800115FC 0000E53C  88 1D 00 75 */	lbz r0, 0x75(r29)
/* 80011600 0000E540  28 00 00 00 */	cmplwi r0, 0
/* 80011604 0000E544  40 82 00 0C */	bne .L_80011610
/* 80011608 0000E548  3B E1 00 34 */	addi r31, r1, 0x34
/* 8001160C 0000E54C  48 00 00 28 */	b .L_80011634
.L_80011610:
/* 80011610 0000E550  38 7D 00 C8 */	addi r3, r29, 0xc8
/* 80011614 0000E554  38 81 00 34 */	addi r4, r1, 0x34
/* 80011618 0000E558  38 A1 00 1C */	addi r5, r1, 0x1c
/* 8001161C 0000E55C  48 0D 95 BD */	bl PSMTXMultVec
/* 80011620 0000E560  7F E4 FB 78 */	mr r4, r31
/* 80011624 0000E564  38 7D 00 C8 */	addi r3, r29, 0xc8
/* 80011628 0000E568  38 A1 00 28 */	addi r5, r1, 0x28
/* 8001162C 0000E56C  48 0D 96 01 */	bl PSMTXMultVecSR
/* 80011630 0000E570  3B E1 00 1C */	addi r31, r1, 0x1c
.L_80011634:
/* 80011634 0000E574  3C 60 80 47 */	lis r3, sauVariableValue_3_POSITION_XYZ__Q27JStudio14TAdaptor_light@ha
/* 80011638 0000E578  7F E5 FB 78 */	mr r5, r31
/* 8001163C 0000E57C  38 83 33 E0 */	addi r4, r3, sauVariableValue_3_POSITION_XYZ__Q27JStudio14TAdaptor_light@l
/* 80011640 0000E580  7F C3 F3 78 */	mr r3, r30
/* 80011644 0000E584  4B FF BC 79 */	bl adaptor_setVariableValue_Vec__Q27JStudio8TAdaptorFPCUlRC3Vec
/* 80011648 0000E588  C0 5F 00 14 */	lfs f2, 0x14(r31)
/* 8001164C 0000E58C  C0 3F 00 0C */	lfs f1, 0xc(r31)
/* 80011650 0000E590  EC 62 00 B2 */	fmuls f3, f2, f2
/* 80011654 0000E594  C0 02 81 20 */	lfs f0, lbl_80516480@sda21(r2)
/* 80011658 0000E598  C3 DF 00 10 */	lfs f30, 0x10(r31)
/* 8001165C 0000E59C  EF E1 18 7A */	fmadds f31, f1, f1, f3
/* 80011660 0000E5A0  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 80011664 0000E5A4  40 81 00 4C */	ble .L_800116B0
/* 80011668 0000E5A8  FC 60 F8 34 */	frsqrte f3, f31
/* 8001166C 0000E5AC  C8 A2 81 28 */	lfd f5, lbl_80516488@sda21(r2)
/* 80011670 0000E5B0  C8 82 81 30 */	lfd f4, lbl_80516490@sda21(r2)
/* 80011674 0000E5B4  FC 03 00 F2 */	fmul f0, f3, f3
/* 80011678 0000E5B8  FC 65 00 F2 */	fmul f3, f5, f3
/* 8001167C 0000E5BC  FC 1F 20 3C */	fnmsub f0, f31, f0, f4
/* 80011680 0000E5C0  FC 63 00 32 */	fmul f3, f3, f0
/* 80011684 0000E5C4  FC 03 00 F2 */	fmul f0, f3, f3
/* 80011688 0000E5C8  FC 65 00 F2 */	fmul f3, f5, f3
/* 8001168C 0000E5CC  FC 1F 20 3C */	fnmsub f0, f31, f0, f4
/* 80011690 0000E5D0  FC 63 00 32 */	fmul f3, f3, f0
/* 80011694 0000E5D4  FC 03 00 F2 */	fmul f0, f3, f3
/* 80011698 0000E5D8  FC 65 00 F2 */	fmul f3, f5, f3
/* 8001169C 0000E5DC  FC 1F 20 3C */	fnmsub f0, f31, f0, f4
/* 800116A0 0000E5E0  FC 03 00 32 */	fmul f0, f3, f0
/* 800116A4 0000E5E4  FF FF 00 32 */	fmul f31, f31, f0
/* 800116A8 0000E5E8  FF E0 F8 18 */	frsp f31, f31
/* 800116AC 0000E5EC  48 00 00 88 */	b .L_80011734
.L_800116B0:
/* 800116B0 0000E5F0  C8 02 81 38 */	lfd f0, lbl_80516498@sda21(r2)
/* 800116B4 0000E5F4  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 800116B8 0000E5F8  40 80 00 10 */	bge .L_800116C8
/* 800116BC 0000E5FC  3C 60 80 51 */	lis r3, __float_nan@ha
/* 800116C0 0000E600  C3 E3 48 B0 */	lfs f31, __float_nan@l(r3)
/* 800116C4 0000E604  48 00 00 70 */	b .L_80011734
.L_800116C8:
/* 800116C8 0000E608  D3 E1 00 08 */	stfs f31, 8(r1)
/* 800116CC 0000E60C  3C 00 7F 80 */	lis r0, 0x7f80
/* 800116D0 0000E610  80 81 00 08 */	lwz r4, 8(r1)
/* 800116D4 0000E614  54 83 00 50 */	rlwinm r3, r4, 0, 1, 8
/* 800116D8 0000E618  7C 03 00 00 */	cmpw r3, r0
/* 800116DC 0000E61C  41 82 00 14 */	beq .L_800116F0
/* 800116E0 0000E620  40 80 00 40 */	bge .L_80011720
/* 800116E4 0000E624  2C 03 00 00 */	cmpwi r3, 0
/* 800116E8 0000E628  41 82 00 20 */	beq .L_80011708
/* 800116EC 0000E62C  48 00 00 34 */	b .L_80011720
.L_800116F0:
/* 800116F0 0000E630  54 80 02 7F */	clrlwi. r0, r4, 9
/* 800116F4 0000E634  41 82 00 0C */	beq .L_80011700
/* 800116F8 0000E638  38 00 00 01 */	li r0, 1
/* 800116FC 0000E63C  48 00 00 28 */	b .L_80011724
.L_80011700:
/* 80011700 0000E640  38 00 00 02 */	li r0, 2
/* 80011704 0000E644  48 00 00 20 */	b .L_80011724
.L_80011708:
/* 80011708 0000E648  54 80 02 7F */	clrlwi. r0, r4, 9
/* 8001170C 0000E64C  41 82 00 0C */	beq .L_80011718
/* 80011710 0000E650  38 00 00 05 */	li r0, 5
/* 80011714 0000E654  48 00 00 10 */	b .L_80011724
.L_80011718:
/* 80011718 0000E658  38 00 00 03 */	li r0, 3
/* 8001171C 0000E65C  48 00 00 08 */	b .L_80011724
.L_80011720:
/* 80011720 0000E660  38 00 00 04 */	li r0, 4
.L_80011724:
/* 80011724 0000E664  2C 00 00 01 */	cmpwi r0, 1
/* 80011728 0000E668  40 82 00 0C */	bne .L_80011734
/* 8001172C 0000E66C  3C 60 80 51 */	lis r3, __float_nan@ha
/* 80011730 0000E670  C3 E3 48 B0 */	lfs f31, __float_nan@l(r3)
.L_80011734:
/* 80011734 0000E674  48 0B E2 59 */	bl atan2
/* 80011738 0000E678  FF A0 08 18 */	frsp f29, f1
/* 8001173C 0000E67C  FC 20 F0 90 */	fmr f1, f30
/* 80011740 0000E680  FC 40 F8 90 */	fmr f2, f31
/* 80011744 0000E684  48 0B E2 49 */	bl atan2
/* 80011748 0000E688  3C 60 80 01 */	lis r3, update_immediate___Q27JStudio14TVariableValueFPQ27JStudio14TVariableValued@ha
/* 8001174C 0000E68C  80 DE 00 04 */	lwz r6, 4(r30)
/* 80011750 0000E690  38 E3 D0 B0 */	addi r7, r3, update_immediate___Q27JStudio14TVariableValueFPQ27JStudio14TVariableValued@l
/* 80011754 0000E694  C0 42 81 40 */	lfs f2, lbl_805164A0@sda21(r2)
/* 80011758 0000E698  90 E6 00 D0 */	stw r7, 0xd0(r6)
/* 8001175C 0000E69C  38 00 00 00 */	li r0, 0
/* 80011760 0000E6A0  EC 02 07 72 */	fmuls f0, f2, f29
/* 80011764 0000E6A4  7F E3 FB 78 */	mr r3, r31
/* 80011768 0000E6A8  90 06 00 CC */	stw r0, 0xcc(r6)
/* 8001176C 0000E6AC  FC 20 08 18 */	frsp f1, f1
/* 80011770 0000E6B0  38 9F 00 0C */	addi r4, r31, 0xc
/* 80011774 0000E6B4  38 A1 00 10 */	addi r5, r1, 0x10
/* 80011778 0000E6B8  D0 06 00 D4 */	stfs f0, 0xd4(r6)
/* 8001177C 0000E6BC  EC 02 00 72 */	fmuls f0, f2, f1
/* 80011780 0000E6C0  80 DE 00 04 */	lwz r6, 4(r30)
/* 80011784 0000E6C4  90 E6 00 E4 */	stw r7, 0xe4(r6)
/* 80011788 0000E6C8  90 06 00 E0 */	stw r0, 0xe0(r6)
/* 8001178C 0000E6CC  D0 06 00 E8 */	stfs f0, 0xe8(r6)
/* 80011790 0000E6D0  48 0D 97 25 */	bl PSVECAdd
/* 80011794 0000E6D4  3C 80 80 47 */	lis r4, sauVariableValue_3_TARGET_POSITION_XYZ__Q27JStudio14TAdaptor_light@ha
/* 80011798 0000E6D8  7F C3 F3 78 */	mr r3, r30
/* 8001179C 0000E6DC  38 84 33 EC */	addi r4, r4, sauVariableValue_3_TARGET_POSITION_XYZ__Q27JStudio14TAdaptor_light@l
/* 800117A0 0000E6E0  38 A1 00 10 */	addi r5, r1, 0x10
/* 800117A4 0000E6E4  4B FF BB 19 */	bl adaptor_setVariableValue_Vec__Q27JStudio8TAdaptorFPCUlRC3Vec
/* 800117A8 0000E6E8  E3 E1 00 88 */	psq_l f31, 136(r1), 0, qr0
/* 800117AC 0000E6EC  CB E1 00 80 */	lfd f31, 0x80(r1)
/* 800117B0 0000E6F0  E3 C1 00 78 */	psq_l f30, 120(r1), 0, qr0
/* 800117B4 0000E6F4  CB C1 00 70 */	lfd f30, 0x70(r1)
/* 800117B8 0000E6F8  E3 A1 00 68 */	psq_l f29, 104(r1), 0, qr0
/* 800117BC 0000E6FC  CB A1 00 60 */	lfd f29, 0x60(r1)
/* 800117C0 0000E700  83 E1 00 5C */	lwz r31, 0x5c(r1)
/* 800117C4 0000E704  83 C1 00 58 */	lwz r30, 0x58(r1)
/* 800117C8 0000E708  80 01 00 94 */	lwz r0, 0x94(r1)
/* 800117CC 0000E70C  83 A1 00 54 */	lwz r29, 0x54(r1)
/* 800117D0 0000E710  7C 08 03 A6 */	mtlr r0
/* 800117D4 0000E714  38 21 00 90 */	addi r1, r1, 0x90
/* 800117D8 0000E718  4E 80 00 20 */	blr 
.endfn adaptor_do_begin__Q214JStudio_JStage14TAdaptor_lightFPCQ27JStudio7TObject

.fn adaptor_do_end__Q214JStudio_JStage14TAdaptor_lightFPCQ27JStudio7TObject, global
/* 800117DC 0000E71C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800117E0 0000E720  7C 08 02 A6 */	mflr r0
/* 800117E4 0000E724  90 01 00 14 */	stw r0, 0x14(r1)
/* 800117E8 0000E728  93 E1 00 0C */	stw r31, 0xc(r1)
/* 800117EC 0000E72C  83 E3 01 14 */	lwz r31, 0x114(r3)
/* 800117F0 0000E730  81 9F 00 00 */	lwz r12, 0(r31)
/* 800117F4 0000E734  7F E3 FB 78 */	mr r3, r31
/* 800117F8 0000E738  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 800117FC 0000E73C  7D 89 03 A6 */	mtctr r12
/* 80011800 0000E740  4E 80 04 21 */	bctrl 
/* 80011804 0000E744  81 9F 00 00 */	lwz r12, 0(r31)
/* 80011808 0000E748  54 64 00 3C */	rlwinm r4, r3, 0, 0, 0x1e
/* 8001180C 0000E74C  7F E3 FB 78 */	mr r3, r31
/* 80011810 0000E750  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80011814 0000E754  7D 89 03 A6 */	mtctr r12
/* 80011818 0000E758  4E 80 04 21 */	bctrl 
/* 8001181C 0000E75C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80011820 0000E760  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80011824 0000E764  7C 08 03 A6 */	mtlr r0
/* 80011828 0000E768  38 21 00 10 */	addi r1, r1, 0x10
/* 8001182C 0000E76C  4E 80 00 20 */	blr 
.endfn adaptor_do_end__Q214JStudio_JStage14TAdaptor_lightFPCQ27JStudio7TObject

.fn adaptor_do_update__Q214JStudio_JStage14TAdaptor_lightFPCQ27JStudio7TObjectUl, global
/* 80011830 0000E770  94 21 FF 70 */	stwu r1, -0x90(r1)
/* 80011834 0000E774  7C 08 02 A6 */	mflr r0
/* 80011838 0000E778  90 01 00 94 */	stw r0, 0x94(r1)
/* 8001183C 0000E77C  DB E1 00 80 */	stfd f31, 0x80(r1)
/* 80011840 0000E780  F3 E1 00 88 */	psq_st f31, 136(r1), 0, qr0
/* 80011844 0000E784  DB C1 00 70 */	stfd f30, 0x70(r1)
/* 80011848 0000E788  F3 C1 00 78 */	psq_st f30, 120(r1), 0, qr0
/* 8001184C 0000E78C  DB A1 00 60 */	stfd f29, 0x60(r1)
/* 80011850 0000E790  F3 A1 00 68 */	psq_st f29, 104(r1), 0, qr0
/* 80011854 0000E794  93 E1 00 5C */	stw r31, 0x5c(r1)
/* 80011858 0000E798  93 C1 00 58 */	stw r30, 0x58(r1)
/* 8001185C 0000E79C  3C A0 80 47 */	lis r5, sauVariableValue_4_COLOR_RGBA__Q27JStudio14TAdaptor_light@ha
/* 80011860 0000E7A0  83 E4 00 14 */	lwz r31, 0x14(r4)
/* 80011864 0000E7A4  38 A5 33 D0 */	addi r5, r5, sauVariableValue_4_COLOR_RGBA__Q27JStudio14TAdaptor_light@l
/* 80011868 0000E7A8  7C 7E 1B 78 */	mr r30, r3
/* 8001186C 0000E7AC  38 81 00 0C */	addi r4, r1, 0xc
/* 80011870 0000E7B0  4B FF BB D5 */	bl adaptor_getVariableValue_GXColor__Q27JStudio8TAdaptorCFP8_GXColorPCUl
/* 80011874 0000E7B4  80 01 00 0C */	lwz r0, 0xc(r1)
/* 80011878 0000E7B8  38 81 00 08 */	addi r4, r1, 8
/* 8001187C 0000E7BC  90 01 00 08 */	stw r0, 8(r1)
/* 80011880 0000E7C0  80 7E 01 14 */	lwz r3, 0x114(r30)
/* 80011884 0000E7C4  81 83 00 00 */	lwz r12, 0(r3)
/* 80011888 0000E7C8  81 8C 00 50 */	lwz r12, 0x50(r12)
/* 8001188C 0000E7CC  7D 89 03 A6 */	mtctr r12
/* 80011890 0000E7D0  4E 80 04 21 */	bctrl 
/* 80011894 0000E7D4  3C 80 80 47 */	lis r4, sauVariableValue_3_POSITION_XYZ__Q27JStudio14TAdaptor_light@ha
/* 80011898 0000E7D8  7F C3 F3 78 */	mr r3, r30
/* 8001189C 0000E7DC  38 A4 33 E0 */	addi r5, r4, sauVariableValue_3_POSITION_XYZ__Q27JStudio14TAdaptor_light@l
/* 800118A0 0000E7E0  38 81 00 34 */	addi r4, r1, 0x34
/* 800118A4 0000E7E4  4B FF BA 89 */	bl adaptor_getVariableValue_Vec__Q27JStudio8TAdaptorCFP3VecPCUl
/* 800118A8 0000E7E8  80 1E 01 18 */	lwz r0, 0x118(r30)
/* 800118AC 0000E7EC  2C 00 00 02 */	cmpwi r0, 2
/* 800118B0 0000E7F0  41 82 00 78 */	beq .L_80011928
/* 800118B4 0000E7F4  40 80 00 98 */	bge .L_8001194C
/* 800118B8 0000E7F8  2C 00 00 01 */	cmpwi r0, 1
/* 800118BC 0000E7FC  40 80 00 08 */	bge .L_800118C4
/* 800118C0 0000E800  48 00 00 8C */	b .L_8001194C
.L_800118C4:
/* 800118C4 0000E804  80 7E 00 04 */	lwz r3, 4(r30)
/* 800118C8 0000E808  C0 22 81 44 */	lfs f1, lbl_805164A4@sda21(r2)
/* 800118CC 0000E80C  C0 03 00 DC */	lfs f0, 0xdc(r3)
/* 800118D0 0000E810  C3 E3 00 C8 */	lfs f31, 0xc8(r3)
/* 800118D4 0000E814  EF A1 00 32 */	fmuls f29, f1, f0
/* 800118D8 0000E818  FC 20 E8 90 */	fmr f1, f29
/* 800118DC 0000E81C  48 0B D9 D9 */	bl cos
/* 800118E0 0000E820  FF C0 08 18 */	frsp f30, f1
/* 800118E4 0000E824  FC 20 E8 90 */	fmr f1, f29
/* 800118E8 0000E828  48 0B DF 35 */	bl sin
/* 800118EC 0000E82C  C0 02 81 44 */	lfs f0, lbl_805164A4@sda21(r2)
/* 800118F0 0000E830  FF A0 08 18 */	frsp f29, f1
/* 800118F4 0000E834  EF E0 07 F2 */	fmuls f31, f0, f31
/* 800118F8 0000E838  FC 20 F8 90 */	fmr f1, f31
/* 800118FC 0000E83C  48 0B DF 21 */	bl sin
/* 80011900 0000E840  FC 00 08 18 */	frsp f0, f1
/* 80011904 0000E844  D3 A1 00 44 */	stfs f29, 0x44(r1)
/* 80011908 0000E848  FC 20 F8 90 */	fmr f1, f31
/* 8001190C 0000E84C  EC 1E 00 32 */	fmuls f0, f30, f0
/* 80011910 0000E850  D0 01 00 40 */	stfs f0, 0x40(r1)
/* 80011914 0000E854  48 0B D9 A1 */	bl cos
/* 80011918 0000E858  FC 00 08 18 */	frsp f0, f1
/* 8001191C 0000E85C  EC 1E 00 32 */	fmuls f0, f30, f0
/* 80011920 0000E860  D0 01 00 48 */	stfs f0, 0x48(r1)
/* 80011924 0000E864  48 00 00 28 */	b .L_8001194C
.L_80011928:
/* 80011928 0000E868  3C 80 80 47 */	lis r4, sauVariableValue_3_TARGET_POSITION_XYZ__Q27JStudio14TAdaptor_light@ha
/* 8001192C 0000E86C  7F C3 F3 78 */	mr r3, r30
/* 80011930 0000E870  38 A4 33 EC */	addi r5, r4, sauVariableValue_3_TARGET_POSITION_XYZ__Q27JStudio14TAdaptor_light@l
/* 80011934 0000E874  38 81 00 10 */	addi r4, r1, 0x10
/* 80011938 0000E878  4B FF B9 F5 */	bl adaptor_getVariableValue_Vec__Q27JStudio8TAdaptorCFP3VecPCUl
/* 8001193C 0000E87C  38 61 00 10 */	addi r3, r1, 0x10
/* 80011940 0000E880  38 81 00 34 */	addi r4, r1, 0x34
/* 80011944 0000E884  38 A1 00 40 */	addi r5, r1, 0x40
/* 80011948 0000E888  48 0D 95 91 */	bl PSVECSubtract
.L_8001194C:
/* 8001194C 0000E88C  88 1F 00 74 */	lbz r0, 0x74(r31)
/* 80011950 0000E890  28 00 00 00 */	cmplwi r0, 0
/* 80011954 0000E894  40 82 00 0C */	bne .L_80011960
/* 80011958 0000E898  3B E1 00 34 */	addi r31, r1, 0x34
/* 8001195C 0000E89C  48 00 00 28 */	b .L_80011984
.L_80011960:
/* 80011960 0000E8A0  38 7F 00 98 */	addi r3, r31, 0x98
/* 80011964 0000E8A4  38 81 00 34 */	addi r4, r1, 0x34
/* 80011968 0000E8A8  38 A1 00 1C */	addi r5, r1, 0x1c
/* 8001196C 0000E8AC  48 0D 92 6D */	bl PSMTXMultVec
/* 80011970 0000E8B0  38 7F 00 98 */	addi r3, r31, 0x98
/* 80011974 0000E8B4  38 81 00 40 */	addi r4, r1, 0x40
/* 80011978 0000E8B8  38 A1 00 28 */	addi r5, r1, 0x28
/* 8001197C 0000E8BC  48 0D 92 B1 */	bl PSMTXMultVecSR
/* 80011980 0000E8C0  3B E1 00 1C */	addi r31, r1, 0x1c
.L_80011984:
/* 80011984 0000E8C4  80 7E 01 14 */	lwz r3, 0x114(r30)
/* 80011988 0000E8C8  7F E4 FB 78 */	mr r4, r31
/* 8001198C 0000E8CC  81 83 00 00 */	lwz r12, 0(r3)
/* 80011990 0000E8D0  81 8C 00 48 */	lwz r12, 0x48(r12)
/* 80011994 0000E8D4  7D 89 03 A6 */	mtctr r12
/* 80011998 0000E8D8  4E 80 04 21 */	bctrl 
/* 8001199C 0000E8DC  80 7E 01 14 */	lwz r3, 0x114(r30)
/* 800119A0 0000E8E0  38 9F 00 0C */	addi r4, r31, 0xc
/* 800119A4 0000E8E4  81 83 00 00 */	lwz r12, 0(r3)
/* 800119A8 0000E8E8  81 8C 00 68 */	lwz r12, 0x68(r12)
/* 800119AC 0000E8EC  7D 89 03 A6 */	mtctr r12
/* 800119B0 0000E8F0  4E 80 04 21 */	bctrl 
/* 800119B4 0000E8F4  80 7E 01 14 */	lwz r3, 0x114(r30)
/* 800119B8 0000E8F8  81 83 00 00 */	lwz r12, 0(r3)
/* 800119BC 0000E8FC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 800119C0 0000E900  7D 89 03 A6 */	mtctr r12
/* 800119C4 0000E904  4E 80 04 21 */	bctrl 
/* 800119C8 0000E908  E3 E1 00 88 */	psq_l f31, 136(r1), 0, qr0
/* 800119CC 0000E90C  CB E1 00 80 */	lfd f31, 0x80(r1)
/* 800119D0 0000E910  E3 C1 00 78 */	psq_l f30, 120(r1), 0, qr0
/* 800119D4 0000E914  CB C1 00 70 */	lfd f30, 0x70(r1)
/* 800119D8 0000E918  E3 A1 00 68 */	psq_l f29, 104(r1), 0, qr0
/* 800119DC 0000E91C  CB A1 00 60 */	lfd f29, 0x60(r1)
/* 800119E0 0000E920  83 E1 00 5C */	lwz r31, 0x5c(r1)
/* 800119E4 0000E924  80 01 00 94 */	lwz r0, 0x94(r1)
/* 800119E8 0000E928  83 C1 00 58 */	lwz r30, 0x58(r1)
/* 800119EC 0000E92C  7C 08 03 A6 */	mtlr r0
/* 800119F0 0000E930  38 21 00 90 */	addi r1, r1, 0x90
/* 800119F4 0000E934  4E 80 00 20 */	blr 
.endfn adaptor_do_update__Q214JStudio_JStage14TAdaptor_lightFPCQ27JStudio7TObjectUl

.fn adaptor_do_data__Q214JStudio_JStage14TAdaptor_lightFPCQ27JStudio7TObjectPCvUlPCvUl, global
/* 800119F8 0000E938  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800119FC 0000E93C  7C 08 02 A6 */	mflr r0
/* 80011A00 0000E940  7C A4 2B 78 */	mr r4, r5
/* 80011A04 0000E944  7C C5 33 78 */	mr r5, r6
/* 80011A08 0000E948  90 01 00 14 */	stw r0, 0x14(r1)
/* 80011A0C 0000E94C  7C E6 3B 78 */	mr r6, r7
/* 80011A10 0000E950  7D 07 43 78 */	mr r7, r8
/* 80011A14 0000E954  80 63 01 14 */	lwz r3, 0x114(r3)
/* 80011A18 0000E958  48 00 06 2D */	bl adaptor_data___Q214JStudio_JStage16TAdaptor_object_FPQ26JStage7TObjectPCvUlPCvUl
/* 80011A1C 0000E95C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80011A20 0000E960  7C 08 03 A6 */	mtlr r0
/* 80011A24 0000E964  38 21 00 10 */	addi r1, r1, 0x10
/* 80011A28 0000E968  4E 80 00 20 */	blr 
.endfn adaptor_do_data__Q214JStudio_JStage14TAdaptor_lightFPCQ27JStudio7TObjectPCvUlPCvUl

.fn adaptor_do_FACULTY__Q214JStudio_JStage14TAdaptor_lightFQ37JStudio4data15TEOperationDataPCvUl, global
/* 80011A2C 0000E96C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80011A30 0000E970  7C 08 02 A6 */	mflr r0
/* 80011A34 0000E974  2C 04 00 02 */	cmpwi r4, 2
/* 80011A38 0000E978  90 01 00 14 */	stw r0, 0x14(r1)
/* 80011A3C 0000E97C  41 82 00 08 */	beq .L_80011A44
/* 80011A40 0000E980  48 00 00 54 */	b .L_80011A94
.L_80011A44:
/* 80011A44 0000E984  80 05 00 00 */	lwz r0, 0(r5)
/* 80011A48 0000E988  2C 00 03 02 */	cmpwi r0, 0x302
/* 80011A4C 0000E98C  41 82 00 28 */	beq .L_80011A74
/* 80011A50 0000E990  40 80 00 10 */	bge .L_80011A60
/* 80011A54 0000E994  2C 00 03 01 */	cmpwi r0, 0x301
/* 80011A58 0000E998  40 80 00 14 */	bge .L_80011A6C
/* 80011A5C 0000E99C  48 00 00 38 */	b .L_80011A94
.L_80011A60:
/* 80011A60 0000E9A0  2C 00 03 04 */	cmpwi r0, 0x304
/* 80011A64 0000E9A4  40 80 00 30 */	bge .L_80011A94
/* 80011A68 0000E9A8  48 00 00 14 */	b .L_80011A7C
.L_80011A6C:
/* 80011A6C 0000E9AC  38 80 00 01 */	li r4, 1
/* 80011A70 0000E9B0  48 00 00 10 */	b .L_80011A80
.L_80011A74:
/* 80011A74 0000E9B4  38 80 00 02 */	li r4, 2
/* 80011A78 0000E9B8  48 00 00 08 */	b .L_80011A80
.L_80011A7C:
/* 80011A7C 0000E9BC  38 80 00 03 */	li r4, 3
.L_80011A80:
/* 80011A80 0000E9C0  80 63 01 14 */	lwz r3, 0x114(r3)
/* 80011A84 0000E9C4  81 83 00 00 */	lwz r12, 0(r3)
/* 80011A88 0000E9C8  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 80011A8C 0000E9CC  7D 89 03 A6 */	mtctr r12
/* 80011A90 0000E9D0  4E 80 04 21 */	bctrl 
.L_80011A94:
/* 80011A94 0000E9D4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80011A98 0000E9D8  7C 08 03 A6 */	mtlr r0
/* 80011A9C 0000E9DC  38 21 00 10 */	addi r1, r1, 0x10
/* 80011AA0 0000E9E0  4E 80 00 20 */	blr 
.endfn adaptor_do_FACULTY__Q214JStudio_JStage14TAdaptor_lightFQ37JStudio4data15TEOperationDataPCvUl

.fn adaptor_do_ENABLE__Q214JStudio_JStage14TAdaptor_lightFQ37JStudio4data15TEOperationDataPCvUl, global
/* 80011AA4 0000E9E4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80011AA8 0000E9E8  7C 08 02 A6 */	mflr r0
/* 80011AAC 0000E9EC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80011AB0 0000E9F0  80 63 01 14 */	lwz r3, 0x114(r3)
/* 80011AB4 0000E9F4  48 00 06 51 */	bl adaptor_ENABLE___Q214JStudio_JStage16TAdaptor_object_FPQ26JStage7TObjectQ37JStudio4data15TEOperationDataPCvUl
/* 80011AB8 0000E9F8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80011ABC 0000E9FC  7C 08 03 A6 */	mtlr r0
/* 80011AC0 0000EA00  38 21 00 10 */	addi r1, r1, 0x10
/* 80011AC4 0000EA04  4E 80 00 20 */	blr 
.endfn adaptor_do_ENABLE__Q214JStudio_JStage14TAdaptor_lightFQ37JStudio4data15TEOperationDataPCvUl

.fn __cl__Q314JStudio_JStage14TAdaptor_light20TVVOutput_direction_CFfPQ27JStudio8TAdaptor, global
/* 80011AC8 0000EA08  80 03 00 08 */	lwz r0, 8(r3)
/* 80011ACC 0000EA0C  90 04 01 18 */	stw r0, 0x118(r4)
/* 80011AD0 0000EA10  4E 80 00 20 */	blr 
.endfn __cl__Q314JStudio_JStage14TAdaptor_light20TVVOutput_direction_CFfPQ27JStudio8TAdaptor

.fn __dt__Q314JStudio_JStage14TAdaptor_light20TVVOutput_direction_Fv, weak
/* 80011AD4 0000EA14  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80011AD8 0000EA18  7C 08 02 A6 */	mflr r0
/* 80011ADC 0000EA1C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80011AE0 0000EA20  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80011AE4 0000EA24  7C 9F 23 78 */	mr r31, r4
/* 80011AE8 0000EA28  93 C1 00 08 */	stw r30, 8(r1)
/* 80011AEC 0000EA2C  7C 7E 1B 79 */	or. r30, r3, r3
/* 80011AF0 0000EA30  41 82 00 28 */	beq .L_80011B18
/* 80011AF4 0000EA34  3C A0 80 4A */	lis r5, __vt__Q314JStudio_JStage14TAdaptor_light20TVVOutput_direction_@ha
/* 80011AF8 0000EA38  38 80 00 00 */	li r4, 0
/* 80011AFC 0000EA3C  38 05 F5 78 */	addi r0, r5, __vt__Q314JStudio_JStage14TAdaptor_light20TVVOutput_direction_@l
/* 80011B00 0000EA40  90 1E 00 00 */	stw r0, 0(r30)
/* 80011B04 0000EA44  4B FF B5 65 */	bl __dt__Q37JStudio14TVariableValue7TOutputFv
/* 80011B08 0000EA48  7F E0 07 35 */	extsh. r0, r31
/* 80011B0C 0000EA4C  40 81 00 0C */	ble .L_80011B18
/* 80011B10 0000EA50  7F C3 F3 78 */	mr r3, r30
/* 80011B14 0000EA54  48 01 25 A1 */	bl __dl__FPv
.L_80011B18:
/* 80011B18 0000EA58  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80011B1C 0000EA5C  7F C3 F3 78 */	mr r3, r30
/* 80011B20 0000EA60  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80011B24 0000EA64  83 C1 00 08 */	lwz r30, 8(r1)
/* 80011B28 0000EA68  7C 08 03 A6 */	mtlr r0
/* 80011B2C 0000EA6C  38 21 00 10 */	addi r1, r1, 0x10
/* 80011B30 0000EA70  4E 80 00 20 */	blr 
.endfn __dt__Q314JStudio_JStage14TAdaptor_light20TVVOutput_direction_Fv

.fn "__sinit_object-light_cpp", local
/* 80011B34 0000EA74  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 80011B38 0000EA78  7C 08 02 A6 */	mflr r0
/* 80011B3C 0000EA7C  3C 80 80 4A */	lis r4, __vt__Q37JStudio14TVariableValue7TOutput@ha
/* 80011B40 0000EA80  3C 60 80 50 */	lis r3, saoVVOutput_direction___Q214JStudio_JStage14TAdaptor_light@ha
/* 80011B44 0000EA84  90 01 00 64 */	stw r0, 0x64(r1)
/* 80011B48 0000EA88  38 A4 F4 98 */	addi r5, r4, __vt__Q37JStudio14TVariableValue7TOutput@l
/* 80011B4C 0000EA8C  3C 80 80 4A */	lis r4, __vt__Q314JStudio_JStage14TAdaptor_light20TVVOutput_direction_@ha
/* 80011B50 0000EA90  38 C0 00 0A */	li r6, 0xa
/* 80011B54 0000EA94  93 E1 00 5C */	stw r31, 0x5c(r1)
/* 80011B58 0000EA98  38 00 00 01 */	li r0, 1
/* 80011B5C 0000EA9C  38 E4 F5 78 */	addi r7, r4, __vt__Q314JStudio_JStage14TAdaptor_light20TVVOutput_direction_@l
/* 80011B60 0000EAA0  3C 80 80 01 */	lis r4, __dt__Q314JStudio_JStage14TAdaptor_light20TVVOutput_direction_Fv@ha
/* 80011B64 0000EAA4  94 A3 6A 8C */	stwu r5, saoVVOutput_direction___Q214JStudio_JStage14TAdaptor_light@l(r3)
/* 80011B68 0000EAA8  38 84 1A D4 */	addi r4, r4, __dt__Q314JStudio_JStage14TAdaptor_light20TVVOutput_direction_Fv@l
/* 80011B6C 0000EAAC  90 A1 00 44 */	stw r5, 0x44(r1)
/* 80011B70 0000EAB0  3C A0 80 4F */	lis r5, lbl_804EFDA0@ha
/* 80011B74 0000EAB4  3B E5 FD A0 */	addi r31, r5, lbl_804EFDA0@l
/* 80011B78 0000EAB8  90 E1 00 44 */	stw r7, 0x44(r1)
/* 80011B7C 0000EABC  38 BF 00 00 */	addi r5, r31, 0
/* 80011B80 0000EAC0  90 C1 00 48 */	stw r6, 0x48(r1)
/* 80011B84 0000EAC4  90 01 00 4C */	stw r0, 0x4c(r1)
/* 80011B88 0000EAC8  90 E3 00 00 */	stw r7, 0(r3)
/* 80011B8C 0000EACC  90 C3 00 04 */	stw r6, 4(r3)
/* 80011B90 0000EAD0  90 03 00 08 */	stw r0, 8(r3)
/* 80011B94 0000EAD4  48 0A FB 6D */	bl __register_global_object
/* 80011B98 0000EAD8  3C 80 80 4A */	lis r4, __vt__Q314JStudio_JStage14TAdaptor_light20TVVOutput_direction_@ha
/* 80011B9C 0000EADC  38 61 00 44 */	addi r3, r1, 0x44
/* 80011BA0 0000EAE0  38 04 F5 78 */	addi r0, r4, __vt__Q314JStudio_JStage14TAdaptor_light20TVVOutput_direction_@l
/* 80011BA4 0000EAE4  38 80 00 00 */	li r4, 0
/* 80011BA8 0000EAE8  90 01 00 44 */	stw r0, 0x44(r1)
/* 80011BAC 0000EAEC  4B FF B4 BD */	bl __dt__Q37JStudio14TVariableValue7TOutputFv
/* 80011BB0 0000EAF0  3C A0 80 4A */	lis r5, __vt__Q37JStudio14TVariableValue7TOutput@ha
/* 80011BB4 0000EAF4  3C 60 80 50 */	lis r3, saoVVOutput_direction___Q214JStudio_JStage14TAdaptor_light@ha
/* 80011BB8 0000EAF8  38 A5 F4 98 */	addi r5, r5, __vt__Q37JStudio14TVariableValue7TOutput@l
/* 80011BBC 0000EAFC  3C 80 80 4A */	lis r4, __vt__Q314JStudio_JStage14TAdaptor_light20TVVOutput_direction_@ha
/* 80011BC0 0000EB00  38 63 6A 8C */	addi r3, r3, saoVVOutput_direction___Q214JStudio_JStage14TAdaptor_light@l
/* 80011BC4 0000EB04  90 A1 00 38 */	stw r5, 0x38(r1)
/* 80011BC8 0000EB08  38 E4 F5 78 */	addi r7, r4, __vt__Q314JStudio_JStage14TAdaptor_light20TVVOutput_direction_@l
/* 80011BCC 0000EB0C  38 C0 00 0B */	li r6, 0xb
/* 80011BD0 0000EB10  94 A3 00 0C */	stwu r5, 0xc(r3)
/* 80011BD4 0000EB14  38 00 00 01 */	li r0, 1
/* 80011BD8 0000EB18  3C 80 80 01 */	lis r4, __dt__Q314JStudio_JStage14TAdaptor_light20TVVOutput_direction_Fv@ha
/* 80011BDC 0000EB1C  38 BF 00 0C */	addi r5, r31, 0xc
/* 80011BE0 0000EB20  90 E1 00 38 */	stw r7, 0x38(r1)
/* 80011BE4 0000EB24  38 84 1A D4 */	addi r4, r4, __dt__Q314JStudio_JStage14TAdaptor_light20TVVOutput_direction_Fv@l
/* 80011BE8 0000EB28  90 C1 00 3C */	stw r6, 0x3c(r1)
/* 80011BEC 0000EB2C  90 01 00 40 */	stw r0, 0x40(r1)
/* 80011BF0 0000EB30  90 E3 00 00 */	stw r7, 0(r3)
/* 80011BF4 0000EB34  90 C3 00 04 */	stw r6, 4(r3)
/* 80011BF8 0000EB38  90 03 00 08 */	stw r0, 8(r3)
/* 80011BFC 0000EB3C  48 0A FB 05 */	bl __register_global_object
/* 80011C00 0000EB40  3C 80 80 4A */	lis r4, __vt__Q314JStudio_JStage14TAdaptor_light20TVVOutput_direction_@ha
/* 80011C04 0000EB44  38 61 00 38 */	addi r3, r1, 0x38
/* 80011C08 0000EB48  38 04 F5 78 */	addi r0, r4, __vt__Q314JStudio_JStage14TAdaptor_light20TVVOutput_direction_@l
/* 80011C0C 0000EB4C  38 80 00 00 */	li r4, 0
/* 80011C10 0000EB50  90 01 00 38 */	stw r0, 0x38(r1)
/* 80011C14 0000EB54  4B FF B4 55 */	bl __dt__Q37JStudio14TVariableValue7TOutputFv
/* 80011C18 0000EB58  3C A0 80 4A */	lis r5, __vt__Q37JStudio14TVariableValue7TOutput@ha
/* 80011C1C 0000EB5C  3C 60 80 50 */	lis r3, saoVVOutput_direction___Q214JStudio_JStage14TAdaptor_light@ha
/* 80011C20 0000EB60  38 A5 F4 98 */	addi r5, r5, __vt__Q37JStudio14TVariableValue7TOutput@l
/* 80011C24 0000EB64  3C 80 80 4A */	lis r4, __vt__Q314JStudio_JStage14TAdaptor_light20TVVOutput_direction_@ha
/* 80011C28 0000EB68  38 63 6A 8C */	addi r3, r3, saoVVOutput_direction___Q214JStudio_JStage14TAdaptor_light@l
/* 80011C2C 0000EB6C  90 A1 00 2C */	stw r5, 0x2c(r1)
/* 80011C30 0000EB70  38 E4 F5 78 */	addi r7, r4, __vt__Q314JStudio_JStage14TAdaptor_light20TVVOutput_direction_@l
/* 80011C34 0000EB74  38 C0 00 07 */	li r6, 7
/* 80011C38 0000EB78  94 A3 00 18 */	stwu r5, 0x18(r3)
/* 80011C3C 0000EB7C  38 00 00 02 */	li r0, 2
/* 80011C40 0000EB80  3C 80 80 01 */	lis r4, __dt__Q314JStudio_JStage14TAdaptor_light20TVVOutput_direction_Fv@ha
/* 80011C44 0000EB84  38 BF 00 18 */	addi r5, r31, 0x18
/* 80011C48 0000EB88  90 E1 00 2C */	stw r7, 0x2c(r1)
/* 80011C4C 0000EB8C  38 84 1A D4 */	addi r4, r4, __dt__Q314JStudio_JStage14TAdaptor_light20TVVOutput_direction_Fv@l
/* 80011C50 0000EB90  90 C1 00 30 */	stw r6, 0x30(r1)
/* 80011C54 0000EB94  90 01 00 34 */	stw r0, 0x34(r1)
/* 80011C58 0000EB98  90 E3 00 00 */	stw r7, 0(r3)
/* 80011C5C 0000EB9C  90 C3 00 04 */	stw r6, 4(r3)
/* 80011C60 0000EBA0  90 03 00 08 */	stw r0, 8(r3)
/* 80011C64 0000EBA4  48 0A FA 9D */	bl __register_global_object
/* 80011C68 0000EBA8  3C 80 80 4A */	lis r4, __vt__Q314JStudio_JStage14TAdaptor_light20TVVOutput_direction_@ha
/* 80011C6C 0000EBAC  38 61 00 2C */	addi r3, r1, 0x2c
/* 80011C70 0000EBB0  38 04 F5 78 */	addi r0, r4, __vt__Q314JStudio_JStage14TAdaptor_light20TVVOutput_direction_@l
/* 80011C74 0000EBB4  38 80 00 00 */	li r4, 0
/* 80011C78 0000EBB8  90 01 00 2C */	stw r0, 0x2c(r1)
/* 80011C7C 0000EBBC  4B FF B3 ED */	bl __dt__Q37JStudio14TVariableValue7TOutputFv
/* 80011C80 0000EBC0  3C A0 80 4A */	lis r5, __vt__Q37JStudio14TVariableValue7TOutput@ha
/* 80011C84 0000EBC4  3C 60 80 50 */	lis r3, saoVVOutput_direction___Q214JStudio_JStage14TAdaptor_light@ha
/* 80011C88 0000EBC8  38 A5 F4 98 */	addi r5, r5, __vt__Q37JStudio14TVariableValue7TOutput@l
/* 80011C8C 0000EBCC  3C 80 80 4A */	lis r4, __vt__Q314JStudio_JStage14TAdaptor_light20TVVOutput_direction_@ha
/* 80011C90 0000EBD0  38 63 6A 8C */	addi r3, r3, saoVVOutput_direction___Q214JStudio_JStage14TAdaptor_light@l
/* 80011C94 0000EBD4  90 A1 00 20 */	stw r5, 0x20(r1)
/* 80011C98 0000EBD8  38 E4 F5 78 */	addi r7, r4, __vt__Q314JStudio_JStage14TAdaptor_light20TVVOutput_direction_@l
/* 80011C9C 0000EBDC  38 C0 00 08 */	li r6, 8
/* 80011CA0 0000EBE0  94 A3 00 24 */	stwu r5, 0x24(r3)
/* 80011CA4 0000EBE4  38 00 00 02 */	li r0, 2
/* 80011CA8 0000EBE8  3C 80 80 01 */	lis r4, __dt__Q314JStudio_JStage14TAdaptor_light20TVVOutput_direction_Fv@ha
/* 80011CAC 0000EBEC  38 BF 00 24 */	addi r5, r31, 0x24
/* 80011CB0 0000EBF0  90 E1 00 20 */	stw r7, 0x20(r1)
/* 80011CB4 0000EBF4  38 84 1A D4 */	addi r4, r4, __dt__Q314JStudio_JStage14TAdaptor_light20TVVOutput_direction_Fv@l
/* 80011CB8 0000EBF8  90 C1 00 24 */	stw r6, 0x24(r1)
/* 80011CBC 0000EBFC  90 01 00 28 */	stw r0, 0x28(r1)
/* 80011CC0 0000EC00  90 E3 00 00 */	stw r7, 0(r3)
/* 80011CC4 0000EC04  90 C3 00 04 */	stw r6, 4(r3)
/* 80011CC8 0000EC08  90 03 00 08 */	stw r0, 8(r3)
/* 80011CCC 0000EC0C  48 0A FA 35 */	bl __register_global_object
/* 80011CD0 0000EC10  3C 80 80 4A */	lis r4, __vt__Q314JStudio_JStage14TAdaptor_light20TVVOutput_direction_@ha
/* 80011CD4 0000EC14  38 61 00 20 */	addi r3, r1, 0x20
/* 80011CD8 0000EC18  38 04 F5 78 */	addi r0, r4, __vt__Q314JStudio_JStage14TAdaptor_light20TVVOutput_direction_@l
/* 80011CDC 0000EC1C  38 80 00 00 */	li r4, 0
/* 80011CE0 0000EC20  90 01 00 20 */	stw r0, 0x20(r1)
/* 80011CE4 0000EC24  4B FF B3 85 */	bl __dt__Q37JStudio14TVariableValue7TOutputFv
/* 80011CE8 0000EC28  3C A0 80 4A */	lis r5, __vt__Q37JStudio14TVariableValue7TOutput@ha
/* 80011CEC 0000EC2C  3C 60 80 50 */	lis r3, saoVVOutput_direction___Q214JStudio_JStage14TAdaptor_light@ha
/* 80011CF0 0000EC30  38 A5 F4 98 */	addi r5, r5, __vt__Q37JStudio14TVariableValue7TOutput@l
/* 80011CF4 0000EC34  3C 80 80 4A */	lis r4, __vt__Q314JStudio_JStage14TAdaptor_light20TVVOutput_direction_@ha
/* 80011CF8 0000EC38  38 63 6A 8C */	addi r3, r3, saoVVOutput_direction___Q214JStudio_JStage14TAdaptor_light@l
/* 80011CFC 0000EC3C  90 A1 00 14 */	stw r5, 0x14(r1)
/* 80011D00 0000EC40  38 E4 F5 78 */	addi r7, r4, __vt__Q314JStudio_JStage14TAdaptor_light20TVVOutput_direction_@l
/* 80011D04 0000EC44  38 C0 00 09 */	li r6, 9
/* 80011D08 0000EC48  94 A3 00 30 */	stwu r5, 0x30(r3)
/* 80011D0C 0000EC4C  38 00 00 02 */	li r0, 2
/* 80011D10 0000EC50  3C 80 80 01 */	lis r4, __dt__Q314JStudio_JStage14TAdaptor_light20TVVOutput_direction_Fv@ha
/* 80011D14 0000EC54  38 BF 00 30 */	addi r5, r31, 0x30
/* 80011D18 0000EC58  90 E1 00 14 */	stw r7, 0x14(r1)
/* 80011D1C 0000EC5C  38 84 1A D4 */	addi r4, r4, __dt__Q314JStudio_JStage14TAdaptor_light20TVVOutput_direction_Fv@l
/* 80011D20 0000EC60  90 C1 00 18 */	stw r6, 0x18(r1)
/* 80011D24 0000EC64  90 01 00 1C */	stw r0, 0x1c(r1)
/* 80011D28 0000EC68  90 E3 00 00 */	stw r7, 0(r3)
/* 80011D2C 0000EC6C  90 C3 00 04 */	stw r6, 4(r3)
/* 80011D30 0000EC70  90 03 00 08 */	stw r0, 8(r3)
/* 80011D34 0000EC74  48 0A F9 CD */	bl __register_global_object
/* 80011D38 0000EC78  3C 80 80 4A */	lis r4, __vt__Q314JStudio_JStage14TAdaptor_light20TVVOutput_direction_@ha
/* 80011D3C 0000EC7C  38 61 00 14 */	addi r3, r1, 0x14
/* 80011D40 0000EC80  38 04 F5 78 */	addi r0, r4, __vt__Q314JStudio_JStage14TAdaptor_light20TVVOutput_direction_@l
/* 80011D44 0000EC84  38 80 00 00 */	li r4, 0
/* 80011D48 0000EC88  90 01 00 14 */	stw r0, 0x14(r1)
/* 80011D4C 0000EC8C  4B FF B3 1D */	bl __dt__Q37JStudio14TVariableValue7TOutputFv
/* 80011D50 0000EC90  3C A0 80 4A */	lis r5, __vt__Q37JStudio14TVariableValue7TOutput@ha
/* 80011D54 0000EC94  3C 60 80 50 */	lis r3, saoVVOutput_direction___Q214JStudio_JStage14TAdaptor_light@ha
/* 80011D58 0000EC98  38 A5 F4 98 */	addi r5, r5, __vt__Q37JStudio14TVariableValue7TOutput@l
/* 80011D5C 0000EC9C  3C 80 80 4A */	lis r4, __vt__Q314JStudio_JStage14TAdaptor_light20TVVOutput_direction_@ha
/* 80011D60 0000ECA0  38 63 6A 8C */	addi r3, r3, saoVVOutput_direction___Q214JStudio_JStage14TAdaptor_light@l
/* 80011D64 0000ECA4  90 A1 00 08 */	stw r5, 8(r1)
/* 80011D68 0000ECA8  38 E4 F5 78 */	addi r7, r4, __vt__Q314JStudio_JStage14TAdaptor_light20TVVOutput_direction_@l
/* 80011D6C 0000ECAC  38 C0 FF FF */	li r6, -1
/* 80011D70 0000ECB0  94 A3 00 3C */	stwu r5, 0x3c(r3)
/* 80011D74 0000ECB4  38 00 00 00 */	li r0, 0
/* 80011D78 0000ECB8  3C 80 80 01 */	lis r4, __dt__Q314JStudio_JStage14TAdaptor_light20TVVOutput_direction_Fv@ha
/* 80011D7C 0000ECBC  38 BF 00 3C */	addi r5, r31, 0x3c
/* 80011D80 0000ECC0  90 E1 00 08 */	stw r7, 8(r1)
/* 80011D84 0000ECC4  38 84 1A D4 */	addi r4, r4, __dt__Q314JStudio_JStage14TAdaptor_light20TVVOutput_direction_Fv@l
/* 80011D88 0000ECC8  90 C1 00 0C */	stw r6, 0xc(r1)
/* 80011D8C 0000ECCC  90 01 00 10 */	stw r0, 0x10(r1)
/* 80011D90 0000ECD0  90 E3 00 00 */	stw r7, 0(r3)
/* 80011D94 0000ECD4  90 C3 00 04 */	stw r6, 4(r3)
/* 80011D98 0000ECD8  90 03 00 08 */	stw r0, 8(r3)
/* 80011D9C 0000ECDC  48 0A F9 65 */	bl __register_global_object
/* 80011DA0 0000ECE0  3C 80 80 4A */	lis r4, __vt__Q314JStudio_JStage14TAdaptor_light20TVVOutput_direction_@ha
/* 80011DA4 0000ECE4  38 61 00 08 */	addi r3, r1, 8
/* 80011DA8 0000ECE8  38 04 F5 78 */	addi r0, r4, __vt__Q314JStudio_JStage14TAdaptor_light20TVVOutput_direction_@l
/* 80011DAC 0000ECEC  38 80 00 00 */	li r4, 0
/* 80011DB0 0000ECF0  90 01 00 08 */	stw r0, 8(r1)
/* 80011DB4 0000ECF4  4B FF B2 B5 */	bl __dt__Q37JStudio14TVariableValue7TOutputFv
/* 80011DB8 0000ECF8  80 01 00 64 */	lwz r0, 0x64(r1)
/* 80011DBC 0000ECFC  83 E1 00 5C */	lwz r31, 0x5c(r1)
/* 80011DC0 0000ED00  7C 08 03 A6 */	mtlr r0
/* 80011DC4 0000ED04  38 21 00 60 */	addi r1, r1, 0x60
/* 80011DC8 0000ED08  4E 80 00 20 */	blr 
.endfn "__sinit_object-light_cpp"
