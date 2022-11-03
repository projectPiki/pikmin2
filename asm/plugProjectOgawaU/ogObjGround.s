.include "macros.inc"
.section .ctors, "wa"  # 0x80472F00 - 0x804732C0
lbl_constructor:
.4byte __sinit_ogObjGround_cpp

.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
lbl_8048E110:
	.4byte 0
	.4byte 0
	.4byte 0
.balign 4
lbl_8048E11C:
	.asciz "ogObjGround.cpp"
.balign 4
lbl_8048E12C: #Shift-JIS
	.4byte 0x45525221
	.4byte 0x20696E20
	.4byte 0x4F626A43
	.4byte 0x61766520
	.4byte 0x43726561
	.4byte 0x74658EB8
	.4byte 0x94738149
	.4byte 0x0A000000
.balign 4
lbl_8048E14C:
	.asciz "sun_meter.blo"
.balign 4
lbl_8048E15C:
	.asciz "doping.blo"
.balign 4
lbl_8048E168:
	.asciz "orima.blo"
.balign 4
lbl_8048E174:
	.asciz "gr_pikmin.blo"
.balign 4
lbl_8048E184:
	.asciz "sensor.blo"
.balign 4
lbl_8048E190:
	.asciz "screenObj.h"
.balign 4
lbl_8048E19C:
	.asciz "P2Assert"

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
govNAN___Q24Game5P2JST:
	.float 0.0
	.float 0.0
	.float 0.0
.global __vt__Q32og9newScreen9ObjGround
__vt__Q32og9newScreen9ObjGround:
	.4byte 0
	.4byte 0
	.4byte __dt__Q32og9newScreen9ObjGroundFv
	.4byte getChildCount__5CNodeFv
	.4byte 0
	.4byte 0
	.4byte "@24@__dt__Q32og9newScreen9ObjGroundFv"
	.4byte update__Q26Screen7ObjBaseFv
	.4byte draw__Q26Screen7ObjBaseFR8Graphics
	.4byte start__Q26Screen7ObjBaseFPCQ26Screen13StartSceneArg
	.4byte end__Q26Screen7ObjBaseFPCQ26Screen11EndSceneArg
	.4byte setOwner__Q26Screen7ObjBaseFPQ26Screen9SceneBase
	.4byte getOwner__Q26Screen7ObjBaseCFv
	.4byte create__Q26Screen7ObjBaseFP10JKRArchive
	.4byte confirmSetScene__Q26Screen7ObjBaseFRQ26Screen11SetSceneArg
	.4byte confirmStartScene__Q26Screen7ObjBaseFPQ26Screen13StartSceneArg
	.4byte confirmEndScene__Q26Screen7ObjBaseFPQ26Screen11EndSceneArg
	.4byte doStart__Q32og9newScreen9ObjGroundFPCQ26Screen13StartSceneArg
	.4byte doEnd__Q32og9newScreen9ObjGroundFPCQ26Screen11EndSceneArg
	.4byte doCreate__Q32og9newScreen9ObjGroundFP10JKRArchive
	.4byte doUpdateFadein__Q32og9newScreen9ObjGroundFv
	.4byte doUpdateFadeinFinish__Q32og9newScreen9ObjGroundFv
	.4byte doUpdate__Q32og9newScreen9ObjGroundFv
	.4byte doUpdateFinish__Q32og9newScreen9ObjGroundFv
	.4byte doUpdateFadeout__Q32og9newScreen9ObjGroundFv
	.4byte doUpdateFadeoutFinish__Q32og9newScreen9ObjGroundFv
	.4byte doDraw__Q32og9newScreen9ObjGroundFR8Graphics
	.4byte doConfirmSetScene__Q26Screen7ObjBaseFRQ26Screen11SetSceneArg
	.4byte doConfirmStartScene__Q26Screen7ObjBaseFPQ26Screen13StartSceneArg
	.4byte doConfirmEndScene__Q26Screen7ObjBaseFRPQ26Screen11EndSceneArg

.section .bss  # 0x804EFC20 - 0x8051467C
# ogObjGround.cpp
.comm msVal__Q32og9newScreen9ObjGround, 0x28, 4

.section .sbss # 0x80514D80 - 0x80516360
.balign 8
gu32NAN___Q24Game5P2JST:
	.skip 0x4
gfNAN___Q24Game5P2JST:
	.skip 0x4

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
lbl_8051D6F0:
	.float 0.0
lbl_8051D6F4:
	.float 1.0
lbl_8051D6F8:
	.float 0.9
lbl_8051D6FC:
	.float 0.8
lbl_8051D700:
	.float 900.0
lbl_8051D704:
	.float 0.5
lbl_8051D708: #pi
	.float 3.1415927
lbl_8051D70C:
	.float 0.4
lbl_8051D710:
	.float 325.9493
.balign 8
lbl_8051D718:
	.4byte 0x43300000
	.4byte 0x00000000
lbl_8051D720:
	.float 0.3
lbl_8051D724:
	.float 0.1
lbl_8051D728:
	.float -50.0
lbl_8051D72C:
	.float 10.0
lbl_8051D730:
	.float -40.0
lbl_8051D734:
	.float -30.0

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global __ct__Q32og9newScreen9ObjGroundFPCc
__ct__Q32og9newScreen9ObjGroundFPCc:
/* 8030DEB8 0030ADF8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8030DEBC 0030ADFC  7C 08 02 A6 */	mflr r0
/* 8030DEC0 0030AE00  90 01 00 14 */	stw r0, 0x14(r1)
/* 8030DEC4 0030AE04  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8030DEC8 0030AE08  7C 9F 23 78 */	mr r31, r4
/* 8030DECC 0030AE0C  93 C1 00 08 */	stw r30, 8(r1)
/* 8030DED0 0030AE10  7C 7E 1B 78 */	mr r30, r3
/* 8030DED4 0030AE14  48 14 5C 15 */	bl __ct__Q26Screen7ObjBaseFv
/* 8030DED8 0030AE18  3C 60 80 4E */	lis r3, __vt__Q32og9newScreen9ObjGround@ha
/* 8030DEDC 0030AE1C  C0 02 F3 90 */	lfs f0, lbl_8051D6F0@sda21(r2)
/* 8030DEE0 0030AE20  38 63 82 E4 */	addi r3, r3, __vt__Q32og9newScreen9ObjGround@l
/* 8030DEE4 0030AE24  38 00 00 00 */	li r0, 0
/* 8030DEE8 0030AE28  90 7E 00 00 */	stw r3, 0(r30)
/* 8030DEEC 0030AE2C  38 83 00 10 */	addi r4, r3, 0x10
/* 8030DEF0 0030AE30  7F C3 F3 78 */	mr r3, r30
/* 8030DEF4 0030AE34  90 9E 00 18 */	stw r4, 0x18(r30)
/* 8030DEF8 0030AE38  D0 1E 00 5C */	stfs f0, 0x5c(r30)
/* 8030DEFC 0030AE3C  D0 1E 00 60 */	stfs f0, 0x60(r30)
/* 8030DF00 0030AE40  93 FE 00 14 */	stw r31, 0x14(r30)
/* 8030DF04 0030AE44  90 1E 00 38 */	stw r0, 0x38(r30)
/* 8030DF08 0030AE48  90 1E 00 3C */	stw r0, 0x3c(r30)
/* 8030DF0C 0030AE4C  90 1E 00 40 */	stw r0, 0x40(r30)
/* 8030DF10 0030AE50  90 1E 00 44 */	stw r0, 0x44(r30)
/* 8030DF14 0030AE54  90 1E 00 48 */	stw r0, 0x48(r30)
/* 8030DF18 0030AE58  90 1E 00 4C */	stw r0, 0x4c(r30)
/* 8030DF1C 0030AE5C  90 1E 00 50 */	stw r0, 0x50(r30)
/* 8030DF20 0030AE60  90 1E 00 54 */	stw r0, 0x54(r30)
/* 8030DF24 0030AE64  90 1E 00 58 */	stw r0, 0x58(r30)
/* 8030DF28 0030AE68  98 1E 00 64 */	stb r0, 0x64(r30)
/* 8030DF2C 0030AE6C  90 1E 00 68 */	stw r0, 0x68(r30)
/* 8030DF30 0030AE70  D0 1E 00 6C */	stfs f0, 0x6c(r30)
/* 8030DF34 0030AE74  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8030DF38 0030AE78  83 C1 00 08 */	lwz r30, 8(r1)
/* 8030DF3C 0030AE7C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8030DF40 0030AE80  7C 08 03 A6 */	mtlr r0
/* 8030DF44 0030AE84  38 21 00 10 */	addi r1, r1, 0x10
/* 8030DF48 0030AE88  4E 80 00 20 */	blr 

.global __dt__Q32og9newScreen9ObjGroundFv
__dt__Q32og9newScreen9ObjGroundFv:
/* 8030DF4C 0030AE8C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8030DF50 0030AE90  7C 08 02 A6 */	mflr r0
/* 8030DF54 0030AE94  90 01 00 14 */	stw r0, 0x14(r1)
/* 8030DF58 0030AE98  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8030DF5C 0030AE9C  7C 9F 23 78 */	mr r31, r4
/* 8030DF60 0030AEA0  93 C1 00 08 */	stw r30, 8(r1)
/* 8030DF64 0030AEA4  7C 7E 1B 79 */	or. r30, r3, r3
/* 8030DF68 0030AEA8  41 82 00 74 */	beq .L_8030DFDC
/* 8030DF6C 0030AEAC  3C 80 80 4E */	lis r4, __vt__Q32og9newScreen9ObjGround@ha
/* 8030DF70 0030AEB0  38 84 82 E4 */	addi r4, r4, __vt__Q32og9newScreen9ObjGround@l
/* 8030DF74 0030AEB4  90 9E 00 00 */	stw r4, 0(r30)
/* 8030DF78 0030AEB8  38 04 00 10 */	addi r0, r4, 0x10
/* 8030DF7C 0030AEBC  90 1E 00 18 */	stw r0, 0x18(r30)
/* 8030DF80 0030AEC0  41 82 00 4C */	beq .L_8030DFCC
/* 8030DF84 0030AEC4  3C 80 80 4F */	lis r4, __vt__Q26Screen7ObjBase@ha
/* 8030DF88 0030AEC8  38 84 D7 58 */	addi r4, r4, __vt__Q26Screen7ObjBase@l
/* 8030DF8C 0030AECC  90 9E 00 00 */	stw r4, 0(r30)
/* 8030DF90 0030AED0  38 04 00 10 */	addi r0, r4, 0x10
/* 8030DF94 0030AED4  90 1E 00 18 */	stw r0, 0x18(r30)
/* 8030DF98 0030AED8  41 82 00 34 */	beq .L_8030DFCC
/* 8030DF9C 0030AEDC  3C 80 80 4E */	lis r4, __vt__Q26Screen8IObjBase@ha
/* 8030DFA0 0030AEE0  38 84 82 40 */	addi r4, r4, __vt__Q26Screen8IObjBase@l
/* 8030DFA4 0030AEE4  90 9E 00 00 */	stw r4, 0(r30)
/* 8030DFA8 0030AEE8  38 04 00 10 */	addi r0, r4, 0x10
/* 8030DFAC 0030AEEC  90 1E 00 18 */	stw r0, 0x18(r30)
/* 8030DFB0 0030AEF0  48 10 36 21 */	bl del__5CNodeFv
/* 8030DFB4 0030AEF4  38 7E 00 18 */	addi r3, r30, 0x18
/* 8030DFB8 0030AEF8  38 80 00 00 */	li r4, 0
/* 8030DFBC 0030AEFC  4B D0 F0 79 */	bl __dt__11JKRDisposerFv
/* 8030DFC0 0030AF00  7F C3 F3 78 */	mr r3, r30
/* 8030DFC4 0030AF04  38 80 00 00 */	li r4, 0
/* 8030DFC8 0030AF08  48 10 35 C1 */	bl __dt__5CNodeFv
.L_8030DFCC:
/* 8030DFCC 0030AF0C  7F E0 07 35 */	extsh. r0, r31
/* 8030DFD0 0030AF10  40 81 00 0C */	ble .L_8030DFDC
/* 8030DFD4 0030AF14  7F C3 F3 78 */	mr r3, r30
/* 8030DFD8 0030AF18  4B D1 60 DD */	bl __dl__FPv
.L_8030DFDC:
/* 8030DFDC 0030AF1C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8030DFE0 0030AF20  7F C3 F3 78 */	mr r3, r30
/* 8030DFE4 0030AF24  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8030DFE8 0030AF28  83 C1 00 08 */	lwz r30, 8(r1)
/* 8030DFEC 0030AF2C  7C 08 03 A6 */	mtlr r0
/* 8030DFF0 0030AF30  38 21 00 10 */	addi r1, r1, 0x10
/* 8030DFF4 0030AF34  4E 80 00 20 */	blr 

.global doCreate__Q32og9newScreen9ObjGroundFP10JKRArchive
doCreate__Q32og9newScreen9ObjGroundFP10JKRArchive:
/* 8030DFF8 0030AF38  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8030DFFC 0030AF3C  7C 08 02 A6 */	mflr r0
/* 8030E000 0030AF40  3C A0 80 49 */	lis r5, lbl_8048E110@ha
/* 8030E004 0030AF44  90 01 00 24 */	stw r0, 0x24(r1)
/* 8030E008 0030AF48  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8030E00C 0030AF4C  3B E5 E1 10 */	addi r31, r5, lbl_8048E110@l
/* 8030E010 0030AF50  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8030E014 0030AF54  7C 9E 23 78 */	mr r30, r4
/* 8030E018 0030AF58  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8030E01C 0030AF5C  7C 7D 1B 78 */	mr r29, r3
/* 8030E020 0030AF60  93 81 00 10 */	stw r28, 0x10(r1)
/* 8030E024 0030AF64  48 14 5F 85 */	bl getDispMember__Q26Screen7ObjBaseFv
/* 8030E028 0030AF68  3C 80 00 4F */	lis r4, 0x004F4741@ha
/* 8030E02C 0030AF6C  3C C0 4F 55 */	lis r6, 0x4F554E44@ha
/* 8030E030 0030AF70  38 A0 47 52 */	li r5, 0x4752
/* 8030E034 0030AF74  7C 7C 1B 78 */	mr r28, r3
/* 8030E038 0030AF78  38 84 47 41 */	addi r4, r4, 0x004F4741@l
/* 8030E03C 0030AF7C  38 C6 4E 44 */	addi r6, r6, 0x4F554E44@l
/* 8030E040 0030AF80  48 00 12 DD */	bl isID__Q32og6Screen14DispMemberBaseFUlUx
/* 8030E044 0030AF84  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8030E048 0030AF88  41 82 00 0C */	beq .L_8030E054
/* 8030E04C 0030AF8C  93 9D 00 38 */	stw r28, 0x38(r29)
/* 8030E050 0030AF90  48 00 01 4C */	b .L_8030E19C
.L_8030E054:
/* 8030E054 0030AF94  3C 80 00 4F */	lis r4, 0x004F4741@ha
/* 8030E058 0030AF98  3C C0 55 4D */	lis r6, 0x554D4D59@ha
/* 8030E05C 0030AF9C  7F 83 E3 78 */	mr r3, r28
/* 8030E060 0030AFA0  38 A0 00 44 */	li r5, 0x44
/* 8030E064 0030AFA4  38 84 47 41 */	addi r4, r4, 0x004F4741@l
/* 8030E068 0030AFA8  38 C6 4D 59 */	addi r6, r6, 0x554D4D59@l
/* 8030E06C 0030AFAC  48 00 12 B1 */	bl isID__Q32og6Screen14DispMemberBaseFUlUx
/* 8030E070 0030AFB0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8030E074 0030AFB4  41 82 01 14 */	beq .L_8030E188
/* 8030E078 0030AFB8  38 60 00 88 */	li r3, 0x88
/* 8030E07C 0030AFBC  4B D1 5E 29 */	bl __nw__FUl
/* 8030E080 0030AFC0  28 03 00 00 */	cmplwi r3, 0
/* 8030E084 0030AFC4  41 82 00 FC */	beq .L_8030E180
/* 8030E088 0030AFC8  3C 80 80 4B */	lis r4, __vt__Q32og6Screen14DispMemberBase@ha
/* 8030E08C 0030AFCC  3C C0 80 4B */	lis r6, __vt__Q32og6Screen16DispMemberGround@ha
/* 8030E090 0030AFD0  39 84 11 48 */	addi r12, r4, __vt__Q32og6Screen14DispMemberBase@l
/* 8030E094 0030AFD4  3C A0 80 4B */	lis r5, __vt__Q32og6Screen21DispMemberDayEndCount@ha
/* 8030E098 0030AFD8  91 83 00 00 */	stw r12, 0(r3)
/* 8030E09C 0030AFDC  39 60 00 00 */	li r11, 0
/* 8030E0A0 0030AFE0  3C 80 80 4B */	lis r4, __vt__Q32og6Screen17DispMemberHurryUp@ha
/* 8030E0A4 0030AFE4  38 06 10 DC */	addi r0, r6, __vt__Q32og6Screen16DispMemberGround@l
/* 8030E0A8 0030AFE8  91 63 00 04 */	stw r11, 4(r3)
/* 8030E0AC 0030AFEC  39 40 04 D2 */	li r10, 0x4d2
/* 8030E0B0 0030AFF0  C0 02 F3 90 */	lfs f0, lbl_8051D6F0@sda21(r2)
/* 8030E0B4 0030AFF4  39 20 00 32 */	li r9, 0x32
/* 8030E0B8 0030AFF8  90 03 00 00 */	stw r0, 0(r3)
/* 8030E0BC 0030AFFC  39 00 00 01 */	li r8, 1
/* 8030E0C0 0030B000  C0 62 F3 94 */	lfs f3, lbl_8051D6F4@sda21(r2)
/* 8030E0C4 0030B004  38 E0 00 02 */	li r7, 2
/* 8030E0C8 0030B008  D0 03 00 08 */	stfs f0, 8(r3)
/* 8030E0CC 0030B00C  38 C0 00 0A */	li r6, 0xa
/* 8030E0D0 0030B010  38 A5 10 C4 */	addi r5, r5, __vt__Q32og6Screen21DispMemberDayEndCount@l
/* 8030E0D4 0030B014  C0 42 F3 98 */	lfs f2, lbl_8051D6F8@sda21(r2)
/* 8030E0D8 0030B018  91 63 00 0C */	stw r11, 0xc(r3)
/* 8030E0DC 0030B01C  38 04 10 AC */	addi r0, r4, __vt__Q32og6Screen17DispMemberHurryUp@l
/* 8030E0E0 0030B020  C0 22 F3 9C */	lfs f1, lbl_8051D6FC@sda21(r2)
/* 8030E0E4 0030B024  91 63 00 14 */	stw r11, 0x14(r3)
/* 8030E0E8 0030B028  C0 02 F3 A0 */	lfs f0, lbl_8051D700@sda21(r2)
/* 8030E0EC 0030B02C  91 43 00 10 */	stw r10, 0x10(r3)
/* 8030E0F0 0030B030  91 23 00 18 */	stw r9, 0x18(r3)
/* 8030E0F4 0030B034  99 63 00 1C */	stb r11, 0x1c(r3)
/* 8030E0F8 0030B038  91 63 00 20 */	stw r11, 0x20(r3)
/* 8030E0FC 0030B03C  D0 63 00 24 */	stfs f3, 0x24(r3)
/* 8030E100 0030B040  91 03 00 28 */	stw r8, 0x28(r3)
/* 8030E104 0030B044  90 E3 00 2C */	stw r7, 0x2c(r3)
/* 8030E108 0030B048  90 C3 00 30 */	stw r6, 0x30(r3)
/* 8030E10C 0030B04C  90 C3 00 34 */	stw r6, 0x34(r3)
/* 8030E110 0030B050  99 03 00 38 */	stb r8, 0x38(r3)
/* 8030E114 0030B054  D0 63 00 3C */	stfs f3, 0x3c(r3)
/* 8030E118 0030B058  91 03 00 40 */	stw r8, 0x40(r3)
/* 8030E11C 0030B05C  90 E3 00 44 */	stw r7, 0x44(r3)
/* 8030E120 0030B060  90 C3 00 48 */	stw r6, 0x48(r3)
/* 8030E124 0030B064  90 C3 00 4C */	stw r6, 0x4c(r3)
/* 8030E128 0030B068  99 03 00 50 */	stb r8, 0x50(r3)
/* 8030E12C 0030B06C  91 83 00 68 */	stw r12, 0x68(r3)
/* 8030E130 0030B070  91 63 00 6C */	stw r11, 0x6c(r3)
/* 8030E134 0030B074  90 A3 00 68 */	stw r5, 0x68(r3)
/* 8030E138 0030B078  D0 43 00 74 */	stfs f2, 0x74(r3)
/* 8030E13C 0030B07C  D0 43 00 70 */	stfs f2, 0x70(r3)
/* 8030E140 0030B080  91 83 00 78 */	stw r12, 0x78(r3)
/* 8030E144 0030B084  91 63 00 7C */	stw r11, 0x7c(r3)
/* 8030E148 0030B088  90 03 00 78 */	stw r0, 0x78(r3)
/* 8030E14C 0030B08C  D0 23 00 84 */	stfs f1, 0x84(r3)
/* 8030E150 0030B090  D0 23 00 80 */	stfs f1, 0x80(r3)
/* 8030E154 0030B094  99 63 00 5E */	stb r11, 0x5e(r3)
/* 8030E158 0030B098  D0 03 00 54 */	stfs f0, 0x54(r3)
/* 8030E15C 0030B09C  99 63 00 5C */	stb r11, 0x5c(r3)
/* 8030E160 0030B0A0  99 03 00 5D */	stb r8, 0x5d(r3)
/* 8030E164 0030B0A4  91 03 00 58 */	stw r8, 0x58(r3)
/* 8030E168 0030B0A8  99 63 00 5F */	stb r11, 0x5f(r3)
/* 8030E16C 0030B0AC  99 63 00 60 */	stb r11, 0x60(r3)
/* 8030E170 0030B0B0  99 63 00 61 */	stb r11, 0x61(r3)
/* 8030E174 0030B0B4  99 63 00 62 */	stb r11, 0x62(r3)
/* 8030E178 0030B0B8  99 63 00 63 */	stb r11, 0x63(r3)
/* 8030E17C 0030B0BC  99 63 00 64 */	stb r11, 0x64(r3)
.L_8030E180:
/* 8030E180 0030B0C0  90 7D 00 38 */	stw r3, 0x38(r29)
/* 8030E184 0030B0C4  48 00 00 18 */	b .L_8030E19C
.L_8030E188:
/* 8030E188 0030B0C8  38 7F 00 0C */	addi r3, r31, 0xc
/* 8030E18C 0030B0CC  38 BF 00 1C */	addi r5, r31, 0x1c
/* 8030E190 0030B0D0  38 80 00 BA */	li r4, 0xba
/* 8030E194 0030B0D4  4C C6 31 82 */	crclr 6
/* 8030E198 0030B0D8  4B D1 C4 A9 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8030E19C:
/* 8030E19C 0030B0DC  38 60 01 50 */	li r3, 0x150
/* 8030E1A0 0030B0E0  4B D1 5D 05 */	bl __nw__FUl
/* 8030E1A4 0030B0E4  7C 60 1B 79 */	or. r0, r3, r3
/* 8030E1A8 0030B0E8  41 82 00 0C */	beq .L_8030E1B4
/* 8030E1AC 0030B0EC  4B FF 93 59 */	bl __ct__Q32og6Screen8SunMeterFv
/* 8030E1B0 0030B0F0  7C 60 1B 78 */	mr r0, r3
.L_8030E1B4:
/* 8030E1B4 0030B0F4  90 1D 00 44 */	stw r0, 0x44(r29)
/* 8030E1B8 0030B0F8  38 60 01 98 */	li r3, 0x198
/* 8030E1BC 0030B0FC  4B D1 5C E9 */	bl __nw__FUl
/* 8030E1C0 0030B100  7C 60 1B 79 */	or. r0, r3, r3
/* 8030E1C4 0030B104  41 82 00 0C */	beq .L_8030E1D0
/* 8030E1C8 0030B108  4B FF 54 45 */	bl __ct__Q32og6Screen12DopingScreenFv
/* 8030E1CC 0030B10C  7C 60 1B 78 */	mr r0, r3
.L_8030E1D0:
/* 8030E1D0 0030B110  90 1D 00 48 */	stw r0, 0x48(r29)
/* 8030E1D4 0030B114  38 60 01 58 */	li r3, 0x158
/* 8030E1D8 0030B118  4B D1 5C CD */	bl __nw__FUl
/* 8030E1DC 0030B11C  7C 7C 1B 79 */	or. r28, r3, r3
/* 8030E1E0 0030B120  41 82 00 24 */	beq .L_8030E204
/* 8030E1E4 0030B124  48 12 6B C9 */	bl __ct__Q29P2DScreen10Mgr_tuningFv
/* 8030E1E8 0030B128  3C 60 80 4D */	lis r3, __vt__Q32og6Screen13NaviLifeGauge@ha
/* 8030E1EC 0030B12C  38 00 00 00 */	li r0, 0
/* 8030E1F0 0030B130  38 63 7E 70 */	addi r3, r3, __vt__Q32og6Screen13NaviLifeGauge@l
/* 8030E1F4 0030B134  90 7C 00 00 */	stw r3, 0(r28)
/* 8030E1F8 0030B138  90 1C 01 48 */	stw r0, 0x148(r28)
/* 8030E1FC 0030B13C  90 1C 01 4C */	stw r0, 0x14c(r28)
/* 8030E200 0030B140  90 1C 01 50 */	stw r0, 0x150(r28)
.L_8030E204:
/* 8030E204 0030B144  93 9D 00 4C */	stw r28, 0x4c(r29)
/* 8030E208 0030B148  38 60 01 58 */	li r3, 0x158
/* 8030E20C 0030B14C  4B D1 5C 99 */	bl __nw__FUl
/* 8030E210 0030B150  7C 7C 1B 79 */	or. r28, r3, r3
/* 8030E214 0030B154  41 82 00 24 */	beq .L_8030E238
/* 8030E218 0030B158  48 12 6B 95 */	bl __ct__Q29P2DScreen10Mgr_tuningFv
/* 8030E21C 0030B15C  3C 60 80 4D */	lis r3, __vt__Q32og6Screen13NaviLifeGauge@ha
/* 8030E220 0030B160  38 00 00 00 */	li r0, 0
/* 8030E224 0030B164  38 63 7E 70 */	addi r3, r3, __vt__Q32og6Screen13NaviLifeGauge@l
/* 8030E228 0030B168  90 7C 00 00 */	stw r3, 0(r28)
/* 8030E22C 0030B16C  90 1C 01 48 */	stw r0, 0x148(r28)
/* 8030E230 0030B170  90 1C 01 4C */	stw r0, 0x14c(r28)
/* 8030E234 0030B174  90 1C 01 50 */	stw r0, 0x150(r28)
.L_8030E238:
/* 8030E238 0030B178  93 9D 00 50 */	stw r28, 0x50(r29)
/* 8030E23C 0030B17C  38 60 01 A8 */	li r3, 0x1a8
/* 8030E240 0030B180  4B D1 5C 65 */	bl __nw__FUl
/* 8030E244 0030B184  7C 60 1B 79 */	or. r0, r3, r3
/* 8030E248 0030B188  41 82 00 0C */	beq .L_8030E254
/* 8030E24C 0030B18C  4B FF 5F D1 */	bl __ct__Q32og6Screen13PikminCounterFv
/* 8030E250 0030B190  7C 60 1B 78 */	mr r0, r3
.L_8030E254:
/* 8030E254 0030B194  90 1D 00 54 */	stw r0, 0x54(r29)
/* 8030E258 0030B198  38 60 01 48 */	li r3, 0x148
/* 8030E25C 0030B19C  4B D1 5C 49 */	bl __nw__FUl
/* 8030E260 0030B1A0  7C 60 1B 79 */	or. r0, r3, r3
/* 8030E264 0030B1A4  41 82 00 0C */	beq .L_8030E270
/* 8030E268 0030B1A8  48 12 6B 45 */	bl __ct__Q29P2DScreen10Mgr_tuningFv
/* 8030E26C 0030B1AC  7C 60 1B 78 */	mr r0, r3
.L_8030E270:
/* 8030E270 0030B1B0  90 1D 00 58 */	stw r0, 0x58(r29)
/* 8030E274 0030B1B4  38 60 00 0C */	li r3, 0xc
/* 8030E278 0030B1B8  4B D1 5C 2D */	bl __nw__FUl
/* 8030E27C 0030B1BC  7C 60 1B 79 */	or. r0, r3, r3
/* 8030E280 0030B1C0  41 82 00 10 */	beq .L_8030E290
/* 8030E284 0030B1C4  38 80 00 06 */	li r4, 6
/* 8030E288 0030B1C8  48 00 0D 01 */	bl __ct__Q32og6Screen8BloGroupFUs
/* 8030E28C 0030B1CC  7C 60 1B 78 */	mr r0, r3
.L_8030E290:
/* 8030E290 0030B1D0  90 1D 00 40 */	stw r0, 0x40(r29)
/* 8030E294 0030B1D4  7F C7 F3 78 */	mr r7, r30
/* 8030E298 0030B1D8  38 9F 00 3C */	addi r4, r31, 0x3c
/* 8030E29C 0030B1DC  3C C0 01 04 */	lis r6, 0x104
/* 8030E2A0 0030B1E0  80 7D 00 40 */	lwz r3, 0x40(r29)
/* 8030E2A4 0030B1E4  80 BD 00 44 */	lwz r5, 0x44(r29)
/* 8030E2A8 0030B1E8  48 00 0D 79 */	bl addBlo__Q32og6Screen8BloGroupFPcPQ29P2DScreen10Mgr_tuningUlP10JKRArchive
/* 8030E2AC 0030B1EC  80 7D 00 40 */	lwz r3, 0x40(r29)
/* 8030E2B0 0030B1F0  7F C7 F3 78 */	mr r7, r30
/* 8030E2B4 0030B1F4  80 BD 00 48 */	lwz r5, 0x48(r29)
/* 8030E2B8 0030B1F8  38 9F 00 4C */	addi r4, r31, 0x4c
/* 8030E2BC 0030B1FC  3C C0 01 04 */	lis r6, 0x104
/* 8030E2C0 0030B200  48 00 0D 61 */	bl addBlo__Q32og6Screen8BloGroupFPcPQ29P2DScreen10Mgr_tuningUlP10JKRArchive
/* 8030E2C4 0030B204  80 7D 00 40 */	lwz r3, 0x40(r29)
/* 8030E2C8 0030B208  7F C7 F3 78 */	mr r7, r30
/* 8030E2CC 0030B20C  80 BD 00 4C */	lwz r5, 0x4c(r29)
/* 8030E2D0 0030B210  38 9F 00 58 */	addi r4, r31, 0x58
/* 8030E2D4 0030B214  3C C0 01 04 */	lis r6, 0x104
/* 8030E2D8 0030B218  48 00 0D 49 */	bl addBlo__Q32og6Screen8BloGroupFPcPQ29P2DScreen10Mgr_tuningUlP10JKRArchive
/* 8030E2DC 0030B21C  80 7D 00 40 */	lwz r3, 0x40(r29)
/* 8030E2E0 0030B220  7F C7 F3 78 */	mr r7, r30
/* 8030E2E4 0030B224  80 BD 00 50 */	lwz r5, 0x50(r29)
/* 8030E2E8 0030B228  38 9F 00 58 */	addi r4, r31, 0x58
/* 8030E2EC 0030B22C  3C C0 01 04 */	lis r6, 0x104
/* 8030E2F0 0030B230  48 00 0D 31 */	bl addBlo__Q32og6Screen8BloGroupFPcPQ29P2DScreen10Mgr_tuningUlP10JKRArchive
/* 8030E2F4 0030B234  80 7D 00 40 */	lwz r3, 0x40(r29)
/* 8030E2F8 0030B238  7F C7 F3 78 */	mr r7, r30
/* 8030E2FC 0030B23C  80 BD 00 54 */	lwz r5, 0x54(r29)
/* 8030E300 0030B240  38 9F 00 64 */	addi r4, r31, 0x64
/* 8030E304 0030B244  3C C0 01 04 */	lis r6, 0x104
/* 8030E308 0030B248  48 00 0D 19 */	bl addBlo__Q32og6Screen8BloGroupFPcPQ29P2DScreen10Mgr_tuningUlP10JKRArchive
/* 8030E30C 0030B24C  80 7D 00 40 */	lwz r3, 0x40(r29)
/* 8030E310 0030B250  7F C7 F3 78 */	mr r7, r30
/* 8030E314 0030B254  80 BD 00 58 */	lwz r5, 0x58(r29)
/* 8030E318 0030B258  38 9F 00 74 */	addi r4, r31, 0x74
/* 8030E31C 0030B25C  3C C0 01 04 */	lis r6, 0x104
/* 8030E320 0030B260  48 00 0D 01 */	bl addBlo__Q32og6Screen8BloGroupFPcPQ29P2DScreen10Mgr_tuningUlP10JKRArchive
/* 8030E324 0030B264  80 7D 00 44 */	lwz r3, 0x44(r29)
/* 8030E328 0030B268  4B FF 92 21 */	bl setCallBack__Q32og6Screen8SunMeterFv
/* 8030E32C 0030B26C  80 7D 00 48 */	lwz r3, 0x48(r29)
/* 8030E330 0030B270  7F C4 F3 78 */	mr r4, r30
/* 8030E334 0030B274  4B FF 53 CD */	bl setCallBack__Q32og6Screen12DopingScreenFP10JKRArchive
/* 8030E338 0030B278  80 9D 00 38 */	lwz r4, 0x38(r29)
/* 8030E33C 0030B27C  38 A0 00 00 */	li r5, 0
/* 8030E340 0030B280  80 7D 00 4C */	lwz r3, 0x4c(r29)
/* 8030E344 0030B284  38 84 00 24 */	addi r4, r4, 0x24
/* 8030E348 0030B288  4B FF 8C 61 */	bl setCallBack__Q32og6Screen13NaviLifeGaugeFPQ32og6Screen8DataNaviQ42og6Screen18CallBack_LifeGauge13LifeGaugeType
/* 8030E34C 0030B28C  80 9D 00 38 */	lwz r4, 0x38(r29)
/* 8030E350 0030B290  88 04 00 5E */	lbz r0, 0x5e(r4)
/* 8030E354 0030B294  28 00 00 00 */	cmplwi r0, 0
/* 8030E358 0030B298  41 82 00 18 */	beq .L_8030E370
/* 8030E35C 0030B29C  80 7D 00 50 */	lwz r3, 0x50(r29)
/* 8030E360 0030B2A0  38 84 00 3C */	addi r4, r4, 0x3c
/* 8030E364 0030B2A4  38 A0 00 02 */	li r5, 2
/* 8030E368 0030B2A8  4B FF 8C 41 */	bl setCallBack__Q32og6Screen13NaviLifeGaugeFPQ32og6Screen8DataNaviQ42og6Screen18CallBack_LifeGauge13LifeGaugeType
/* 8030E36C 0030B2AC  48 00 00 14 */	b .L_8030E380
.L_8030E370:
/* 8030E370 0030B2B0  80 7D 00 50 */	lwz r3, 0x50(r29)
/* 8030E374 0030B2B4  38 84 00 3C */	addi r4, r4, 0x3c
/* 8030E378 0030B2B8  38 A0 00 01 */	li r5, 1
/* 8030E37C 0030B2BC  4B FF 8C 2D */	bl setCallBack__Q32og6Screen13NaviLifeGaugeFPQ32og6Screen8DataNaviQ42og6Screen18CallBack_LifeGauge13LifeGaugeType
.L_8030E380:
/* 8030E380 0030B2C0  80 7D 00 54 */	lwz r3, 0x54(r29)
/* 8030E384 0030B2C4  7F C4 F3 78 */	mr r4, r30
/* 8030E388 0030B2C8  81 83 00 00 */	lwz r12, 0(r3)
/* 8030E38C 0030B2CC  81 8C 00 A0 */	lwz r12, 0xa0(r12)
/* 8030E390 0030B2D0  7D 89 03 A6 */	mtctr r12
/* 8030E394 0030B2D4  4E 80 04 21 */	bctrl 
/* 8030E398 0030B2D8  80 9D 00 38 */	lwz r4, 0x38(r29)
/* 8030E39C 0030B2DC  38 60 00 94 */	li r3, 0x94
/* 8030E3A0 0030B2E0  C0 02 F3 90 */	lfs f0, lbl_8051D6F0@sda21(r2)
/* 8030E3A4 0030B2E4  80 04 00 20 */	lwz r0, 0x20(r4)
/* 8030E3A8 0030B2E8  90 1D 00 68 */	stw r0, 0x68(r29)
/* 8030E3AC 0030B2EC  D0 1D 00 6C */	stfs f0, 0x6c(r29)
/* 8030E3B0 0030B2F0  4B D1 5A F5 */	bl __nw__FUl
/* 8030E3B4 0030B2F4  7C 60 1B 79 */	or. r0, r3, r3
/* 8030E3B8 0030B2F8  41 82 00 0C */	beq .L_8030E3C4
/* 8030E3BC 0030B2FC  48 01 F5 2D */	bl __ct__Q32og6Screen13OtakaraSensorFv
/* 8030E3C0 0030B300  7C 60 1B 78 */	mr r0, r3
.L_8030E3C4:
/* 8030E3C4 0030B304  90 1D 00 3C */	stw r0, 0x3c(r29)
/* 8030E3C8 0030B308  3C A0 6E 73 */	lis r5, 0x6E736F72@ha
/* 8030E3CC 0030B30C  3C 80 00 4E */	lis r4, 0x004E7365@ha
/* 8030E3D0 0030B310  80 7D 00 58 */	lwz r3, 0x58(r29)
/* 8030E3D4 0030B314  38 C5 6F 72 */	addi r6, r5, 0x6E736F72@l
/* 8030E3D8 0030B318  38 A4 73 65 */	addi r5, r4, 0x004E7365@l
/* 8030E3DC 0030B31C  81 83 00 00 */	lwz r12, 0(r3)
/* 8030E3E0 0030B320  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8030E3E4 0030B324  7D 89 03 A6 */	mtctr r12
/* 8030E3E8 0030B328  4E 80 04 21 */	bctrl 
/* 8030E3EC 0030B32C  7C 7E 1B 78 */	mr r30, r3
/* 8030E3F0 0030B330  80 7D 00 58 */	lwz r3, 0x58(r29)
/* 8030E3F4 0030B334  3C 80 68 61 */	lis r4, 0x68617269@ha
/* 8030E3F8 0030B338  38 A0 00 4E */	li r5, 0x4e
/* 8030E3FC 0030B33C  81 83 00 00 */	lwz r12, 0(r3)
/* 8030E400 0030B340  38 C4 72 69 */	addi r6, r4, 0x68617269@l
/* 8030E404 0030B344  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8030E408 0030B348  7D 89 03 A6 */	mtctr r12
/* 8030E40C 0030B34C  4E 80 04 21 */	bctrl 
/* 8030E410 0030B350  80 BD 00 38 */	lwz r5, 0x38(r29)
/* 8030E414 0030B354  7C 64 1B 78 */	mr r4, r3
/* 8030E418 0030B358  80 7D 00 3C */	lwz r3, 0x3c(r29)
/* 8030E41C 0030B35C  80 C5 00 58 */	lwz r6, 0x58(r5)
/* 8030E420 0030B360  7F C5 F3 78 */	mr r5, r30
/* 8030E424 0030B364  48 01 F6 05 */	bl init__Q32og6Screen13OtakaraSensorFP7J2DPaneP7J2DPanei
/* 8030E428 0030B368  80 BD 00 38 */	lwz r5, 0x38(r29)
/* 8030E42C 0030B36C  80 7D 00 48 */	lwz r3, 0x48(r29)
/* 8030E430 0030B370  88 85 00 5F */	lbz r4, 0x5f(r5)
/* 8030E434 0030B374  88 A5 00 60 */	lbz r5, 0x60(r5)
/* 8030E438 0030B378  4B FF 58 5D */	bl setDopingEnable__Q32og6Screen12DopingScreenFbb
/* 8030E43C 0030B37C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8030E440 0030B380  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8030E444 0030B384  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8030E448 0030B388  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8030E44C 0030B38C  83 81 00 10 */	lwz r28, 0x10(r1)
/* 8030E450 0030B390  7C 08 03 A6 */	mtlr r0
/* 8030E454 0030B394  38 21 00 20 */	addi r1, r1, 0x20
/* 8030E458 0030B398  4E 80 00 20 */	blr 

.global commonUpdate__Q32og9newScreen9ObjGroundFv
commonUpdate__Q32og9newScreen9ObjGroundFv:
/* 8030E45C 0030B39C  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8030E460 0030B3A0  7C 08 02 A6 */	mflr r0
/* 8030E464 0030B3A4  90 01 00 34 */	stw r0, 0x34(r1)
/* 8030E468 0030B3A8  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 8030E46C 0030B3AC  7C 7F 1B 78 */	mr r31, r3
/* 8030E470 0030B3B0  93 C1 00 28 */	stw r30, 0x28(r1)
/* 8030E474 0030B3B4  48 00 9A B5 */	bl checkMovieActive__Q22og9newScreenFv
/* 8030E478 0030B3B8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8030E47C 0030B3BC  40 82 00 94 */	bne .L_8030E510
/* 8030E480 0030B3C0  80 9F 00 38 */	lwz r4, 0x38(r31)
/* 8030E484 0030B3C4  80 7F 00 44 */	lwz r3, 0x44(r31)
/* 8030E488 0030B3C8  C0 04 00 08 */	lfs f0, 8(r4)
/* 8030E48C 0030B3CC  D0 03 01 4C */	stfs f0, 0x14c(r3)
/* 8030E490 0030B3D0  80 9F 00 38 */	lwz r4, 0x38(r31)
/* 8030E494 0030B3D4  88 04 00 38 */	lbz r0, 0x38(r4)
/* 8030E498 0030B3D8  28 00 00 00 */	cmplwi r0, 0
/* 8030E49C 0030B3DC  41 82 00 28 */	beq .L_8030E4C4
/* 8030E4A0 0030B3E0  80 7F 00 48 */	lwz r3, 0x48(r31)
/* 8030E4A4 0030B3E4  38 84 00 24 */	addi r4, r4, 0x24
/* 8030E4A8 0030B3E8  4B FF 55 25 */	bl setParam__Q32og6Screen12DopingScreenFRQ32og6Screen8DataNavi
/* 8030E4AC 0030B3EC  80 BF 00 38 */	lwz r5, 0x38(r31)
/* 8030E4B0 0030B3F0  80 7F 00 54 */	lwz r3, 0x54(r31)
/* 8030E4B4 0030B3F4  38 85 00 08 */	addi r4, r5, 8
/* 8030E4B8 0030B3F8  38 A5 00 24 */	addi r5, r5, 0x24
/* 8030E4BC 0030B3FC  4B FF 5E 1D */	bl setParam__Q32og6Screen13PikminCounterFRQ32og6Screen8DataGameRQ32og6Screen8DataNavi
/* 8030E4C0 0030B400  48 00 00 24 */	b .L_8030E4E4
.L_8030E4C4:
/* 8030E4C4 0030B404  80 7F 00 48 */	lwz r3, 0x48(r31)
/* 8030E4C8 0030B408  38 84 00 3C */	addi r4, r4, 0x3c
/* 8030E4CC 0030B40C  4B FF 55 01 */	bl setParam__Q32og6Screen12DopingScreenFRQ32og6Screen8DataNavi
/* 8030E4D0 0030B410  80 BF 00 38 */	lwz r5, 0x38(r31)
/* 8030E4D4 0030B414  80 7F 00 54 */	lwz r3, 0x54(r31)
/* 8030E4D8 0030B418  38 85 00 08 */	addi r4, r5, 8
/* 8030E4DC 0030B41C  38 A5 00 3C */	addi r5, r5, 0x3c
/* 8030E4E0 0030B420  4B FF 5D F9 */	bl setParam__Q32og6Screen13PikminCounterFRQ32og6Screen8DataGameRQ32og6Screen8DataNavi
.L_8030E4E4:
/* 8030E4E4 0030B424  80 7F 00 38 */	lwz r3, 0x38(r31)
/* 8030E4E8 0030B428  88 03 00 5E */	lbz r0, 0x5e(r3)
/* 8030E4EC 0030B42C  28 00 00 00 */	cmplwi r0, 0
/* 8030E4F0 0030B430  41 82 00 14 */	beq .L_8030E504
/* 8030E4F4 0030B434  80 7F 00 50 */	lwz r3, 0x50(r31)
/* 8030E4F8 0030B438  38 80 00 02 */	li r4, 2
/* 8030E4FC 0030B43C  4B FF 8B C5 */	bl setType__Q32og6Screen13NaviLifeGaugeFQ42og6Screen18CallBack_LifeGauge13LifeGaugeType
/* 8030E500 0030B440  48 00 00 10 */	b .L_8030E510
.L_8030E504:
/* 8030E504 0030B444  80 7F 00 50 */	lwz r3, 0x50(r31)
/* 8030E508 0030B448  38 80 00 01 */	li r4, 1
/* 8030E50C 0030B44C  4B FF 8B B5 */	bl setType__Q32og6Screen13NaviLifeGaugeFQ42og6Screen18CallBack_LifeGauge13LifeGaugeType
.L_8030E510:
/* 8030E510 0030B450  48 11 4D 15 */	bl getRenderModeObj__6SystemFv
/* 8030E514 0030B454  A3 C3 00 04 */	lhz r30, 4(r3)
/* 8030E518 0030B458  48 11 4D 0D */	bl getRenderModeObj__6SystemFv
/* 8030E51C 0030B45C  A0 63 00 06 */	lhz r3, 6(r3)
/* 8030E520 0030B460  3C 00 43 30 */	lis r0, 0x4330
/* 8030E524 0030B464  93 C1 00 0C */	stw r30, 0xc(r1)
/* 8030E528 0030B468  38 80 00 7A */	li r4, 0x7a
/* 8030E52C 0030B46C  C8 82 F3 B8 */	lfd f4, lbl_8051D718@sda21(r2)
/* 8030E530 0030B470  90 01 00 08 */	stw r0, 8(r1)
/* 8030E534 0030B474  C0 42 F3 A4 */	lfs f2, lbl_8051D704@sda21(r2)
/* 8030E538 0030B478  C8 01 00 08 */	lfd f0, 8(r1)
/* 8030E53C 0030B47C  90 61 00 14 */	stw r3, 0x14(r1)
/* 8030E540 0030B480  EC 20 20 28 */	fsubs f1, f0, f4
/* 8030E544 0030B484  80 7F 00 40 */	lwz r3, 0x40(r31)
/* 8030E548 0030B488  90 01 00 10 */	stw r0, 0x10(r1)
/* 8030E54C 0030B48C  C0 62 F3 90 */	lfs f3, lbl_8051D6F0@sda21(r2)
/* 8030E550 0030B490  C8 01 00 10 */	lfd f0, 0x10(r1)
/* 8030E554 0030B494  EC 21 00 B2 */	fmuls f1, f1, f2
/* 8030E558 0030B498  EC 00 20 28 */	fsubs f0, f0, f4
/* 8030E55C 0030B49C  EC 40 00 B2 */	fmuls f2, f0, f2
/* 8030E560 0030B4A0  48 00 0B A5 */	bl rotate__Q32og6Screen8BloGroupFff13J2DRotateAxisf
/* 8030E564 0030B4A4  C0 22 F3 94 */	lfs f1, lbl_8051D6F4@sda21(r2)
/* 8030E568 0030B4A8  C0 1F 00 60 */	lfs f0, 0x60(r31)
/* 8030E56C 0030B4AC  C0 62 F3 A8 */	lfs f3, lbl_8051D708@sda21(r2)
/* 8030E570 0030B4B0  EC 41 00 2A */	fadds f2, f1, f0
/* 8030E574 0030B4B4  C0 22 F3 A4 */	lfs f1, lbl_8051D704@sda21(r2)
/* 8030E578 0030B4B8  C0 02 F3 90 */	lfs f0, lbl_8051D6F0@sda21(r2)
/* 8030E57C 0030B4BC  EC 43 00 B2 */	fmuls f2, f3, f2
/* 8030E580 0030B4C0  EC 42 00 72 */	fmuls f2, f2, f1
/* 8030E584 0030B4C4  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 8030E588 0030B4C8  40 80 00 08 */	bge .L_8030E590
/* 8030E58C 0030B4CC  FC 40 10 50 */	fneg f2, f2
.L_8030E590:
/* 8030E590 0030B4D0  C0 02 F3 B0 */	lfs f0, lbl_8051D710@sda21(r2)
/* 8030E594 0030B4D4  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 8030E598 0030B4D8  38 83 71 A0 */	addi r4, r3, sincosTable___5JMath@l
/* 8030E59C 0030B4DC  C0 22 F3 94 */	lfs f1, lbl_8051D6F4@sda21(r2)
/* 8030E5A0 0030B4E0  EC 02 00 32 */	fmuls f0, f2, f0
/* 8030E5A4 0030B4E4  C0 42 F3 AC */	lfs f2, lbl_8051D70C@sda21(r2)
/* 8030E5A8 0030B4E8  80 7F 00 40 */	lwz r3, 0x40(r31)
/* 8030E5AC 0030B4EC  FC 00 00 1E */	fctiwz f0, f0
/* 8030E5B0 0030B4F0  D8 01 00 18 */	stfd f0, 0x18(r1)
/* 8030E5B4 0030B4F4  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 8030E5B8 0030B4F8  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8030E5BC 0030B4FC  7C 84 02 14 */	add r4, r4, r0
/* 8030E5C0 0030B500  C0 04 00 04 */	lfs f0, 4(r4)
/* 8030E5C4 0030B504  FC 00 00 50 */	fneg f0, f0
/* 8030E5C8 0030B508  EC 01 00 28 */	fsubs f0, f1, f0
/* 8030E5CC 0030B50C  EC 22 08 3A */	fmadds f1, f2, f0, f1
/* 8030E5D0 0030B510  48 00 0A F1 */	bl scale__Q32og6Screen8BloGroupFf
/* 8030E5D4 0030B514  80 7F 00 40 */	lwz r3, 0x40(r31)
/* 8030E5D8 0030B518  48 00 0B D1 */	bl update__Q32og6Screen8BloGroupFv
/* 8030E5DC 0030B51C  80 DF 00 38 */	lwz r6, 0x38(r31)
/* 8030E5E0 0030B520  80 7F 00 3C */	lwz r3, 0x3c(r31)
/* 8030E5E4 0030B524  C0 26 00 54 */	lfs f1, 0x54(r6)
/* 8030E5E8 0030B528  80 86 00 58 */	lwz r4, 0x58(r6)
/* 8030E5EC 0030B52C  88 A6 00 63 */	lbz r5, 0x63(r6)
/* 8030E5F0 0030B530  88 C6 00 64 */	lbz r6, 0x64(r6)
/* 8030E5F4 0030B534  48 01 F4 DD */	bl setParam__Q32og6Screen13OtakaraSensorFfibb
/* 8030E5F8 0030B538  80 7F 00 3C */	lwz r3, 0x3c(r31)
/* 8030E5FC 0030B53C  48 01 F8 1D */	bl updateInit__Q32og6Screen13OtakaraSensorFv
/* 8030E600 0030B540  80 7F 00 38 */	lwz r3, 0x38(r31)
/* 8030E604 0030B544  88 03 00 5C */	lbz r0, 0x5c(r3)
/* 8030E608 0030B548  28 00 00 00 */	cmplwi r0, 0
/* 8030E60C 0030B54C  41 82 00 74 */	beq .L_8030E680
/* 8030E610 0030B550  80 7F 00 3C */	lwz r3, 0x3c(r31)
/* 8030E614 0030B554  48 01 F6 69 */	bl show__Q32og6Screen13OtakaraSensorFv
/* 8030E618 0030B558  80 7F 00 3C */	lwz r3, 0x3c(r31)
/* 8030E61C 0030B55C  48 01 F7 75 */	bl update__Q32og6Screen13OtakaraSensorFv
/* 8030E620 0030B560  3C 80 80 51 */	lis r4, msVal__Q32og9newScreen9ObjGround@ha
/* 8030E624 0030B564  80 7F 00 3C */	lwz r3, 0x3c(r31)
/* 8030E628 0030B568  38 84 3C 18 */	addi r4, r4, msVal__Q32og9newScreen9ObjGround@l
/* 8030E62C 0030B56C  C0 24 00 10 */	lfs f1, 0x10(r4)
/* 8030E630 0030B570  C0 44 00 14 */	lfs f2, 0x14(r4)
/* 8030E634 0030B574  48 01 F6 7D */	bl adjPos__Q32og6Screen13OtakaraSensorFff
/* 8030E638 0030B578  3C 80 80 51 */	lis r4, msVal__Q32og9newScreen9ObjGround@ha
/* 8030E63C 0030B57C  80 7F 00 3C */	lwz r3, 0x3c(r31)
/* 8030E640 0030B580  38 84 3C 18 */	addi r4, r4, msVal__Q32og9newScreen9ObjGround@l
/* 8030E644 0030B584  C0 24 00 18 */	lfs f1, 0x18(r4)
/* 8030E648 0030B588  48 01 F7 41 */	bl adjScale__Q32og6Screen13OtakaraSensorFf
/* 8030E64C 0030B58C  3C 60 80 51 */	lis r3, msVal__Q32og9newScreen7ObjCave@ha
/* 8030E650 0030B590  80 9F 00 3C */	lwz r4, 0x3c(r31)
/* 8030E654 0030B594  38 63 3D DC */	addi r3, r3, msVal__Q32og9newScreen7ObjCave@l
/* 8030E658 0030B598  C0 23 00 38 */	lfs f1, 0x38(r3)
/* 8030E65C 0030B59C  C0 03 00 34 */	lfs f0, 0x34(r3)
/* 8030E660 0030B5A0  D0 04 00 5C */	stfs f0, 0x5c(r4)
/* 8030E664 0030B5A4  D0 24 00 60 */	stfs f1, 0x60(r4)
/* 8030E668 0030B5A8  C0 23 00 40 */	lfs f1, 0x40(r3)
/* 8030E66C 0030B5AC  80 9F 00 3C */	lwz r4, 0x3c(r31)
/* 8030E670 0030B5B0  C0 03 00 3C */	lfs f0, 0x3c(r3)
/* 8030E674 0030B5B4  D0 04 00 64 */	stfs f0, 0x64(r4)
/* 8030E678 0030B5B8  D0 24 00 68 */	stfs f1, 0x68(r4)
/* 8030E67C 0030B5BC  48 00 00 0C */	b .L_8030E688
.L_8030E680:
/* 8030E680 0030B5C0  80 7F 00 3C */	lwz r3, 0x3c(r31)
/* 8030E684 0030B5C4  48 01 F6 09 */	bl hide__Q32og6Screen13OtakaraSensorFv
.L_8030E688:
/* 8030E688 0030B5C8  80 7F 00 38 */	lwz r3, 0x38(r31)
/* 8030E68C 0030B5CC  88 03 00 61 */	lbz r0, 0x61(r3)
/* 8030E690 0030B5D0  28 00 00 00 */	cmplwi r0, 0
/* 8030E694 0030B5D4  41 82 00 14 */	beq .L_8030E6A8
/* 8030E698 0030B5D8  80 7F 00 48 */	lwz r3, 0x48(r31)
/* 8030E69C 0030B5DC  4B FF 56 3D */	bl openDopingUp__Q32og6Screen12DopingScreenFv
/* 8030E6A0 0030B5E0  80 7F 00 48 */	lwz r3, 0x48(r31)
/* 8030E6A4 0030B5E4  4B FF 56 55 */	bl openDopingKey__Q32og6Screen12DopingScreenFv
.L_8030E6A8:
/* 8030E6A8 0030B5E8  80 7F 00 38 */	lwz r3, 0x38(r31)
/* 8030E6AC 0030B5EC  88 03 00 62 */	lbz r0, 0x62(r3)
/* 8030E6B0 0030B5F0  28 00 00 00 */	cmplwi r0, 0
/* 8030E6B4 0030B5F4  41 82 00 14 */	beq .L_8030E6C8
/* 8030E6B8 0030B5F8  80 7F 00 48 */	lwz r3, 0x48(r31)
/* 8030E6BC 0030B5FC  4B FF 56 2D */	bl openDopingDown__Q32og6Screen12DopingScreenFv
/* 8030E6C0 0030B600  80 7F 00 48 */	lwz r3, 0x48(r31)
/* 8030E6C4 0030B604  4B FF 56 35 */	bl openDopingKey__Q32og6Screen12DopingScreenFv
.L_8030E6C8:
/* 8030E6C8 0030B608  3C 80 80 51 */	lis r4, msVal__Q32og9newScreen9ObjGround@ha
/* 8030E6CC 0030B60C  80 7F 00 48 */	lwz r3, 0x48(r31)
/* 8030E6D0 0030B610  38 84 3C 18 */	addi r4, r4, msVal__Q32og9newScreen9ObjGround@l
/* 8030E6D4 0030B614  C0 24 00 1C */	lfs f1, 0x1c(r4)
/* 8030E6D8 0030B618  C0 44 00 20 */	lfs f2, 0x20(r4)
/* 8030E6DC 0030B61C  4B FF 55 AD */	bl adjPos__Q32og6Screen12DopingScreenFff
/* 8030E6E0 0030B620  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8030E6E4 0030B624  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 8030E6E8 0030B628  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 8030E6EC 0030B62C  7C 08 03 A6 */	mtlr r0
/* 8030E6F0 0030B630  38 21 00 30 */	addi r1, r1, 0x30
/* 8030E6F4 0030B634  4E 80 00 20 */	blr 

.global doUpdate__Q32og9newScreen9ObjGroundFv
doUpdate__Q32og9newScreen9ObjGroundFv:
/* 8030E6F8 0030B638  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8030E6FC 0030B63C  7C 08 02 A6 */	mflr r0
/* 8030E700 0030B640  90 01 00 14 */	stw r0, 0x14(r1)
/* 8030E704 0030B644  4B FF FD 59 */	bl commonUpdate__Q32og9newScreen9ObjGroundFv
/* 8030E708 0030B648  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8030E70C 0030B64C  38 60 00 00 */	li r3, 0
/* 8030E710 0030B650  7C 08 03 A6 */	mtlr r0
/* 8030E714 0030B654  38 21 00 10 */	addi r1, r1, 0x10
/* 8030E718 0030B658  4E 80 00 20 */	blr 

.global doDraw__Q32og9newScreen9ObjGroundFR8Graphics
doDraw__Q32og9newScreen9ObjGroundFR8Graphics:
/* 8030E71C 0030B65C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8030E720 0030B660  7C 08 02 A6 */	mflr r0
/* 8030E724 0030B664  90 01 00 14 */	stw r0, 0x14(r1)
/* 8030E728 0030B668  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8030E72C 0030B66C  7C 9F 23 78 */	mr r31, r4
/* 8030E730 0030B670  93 C1 00 08 */	stw r30, 8(r1)
/* 8030E734 0030B674  7C 7E 1B 78 */	mr r30, r3
/* 8030E738 0030B678  80 63 00 38 */	lwz r3, 0x38(r3)
/* 8030E73C 0030B67C  88 03 00 5D */	lbz r0, 0x5d(r3)
/* 8030E740 0030B680  28 00 00 00 */	cmplwi r0, 0
/* 8030E744 0030B684  41 82 00 14 */	beq .L_8030E758
/* 8030E748 0030B688  80 7E 00 44 */	lwz r3, 0x44(r30)
/* 8030E74C 0030B68C  38 00 00 01 */	li r0, 1
/* 8030E750 0030B690  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 8030E754 0030B694  48 00 00 10 */	b .L_8030E764
.L_8030E758:
/* 8030E758 0030B698  80 7E 00 44 */	lwz r3, 0x44(r30)
/* 8030E75C 0030B69C  38 00 00 00 */	li r0, 0
/* 8030E760 0030B6A0  98 03 00 B0 */	stb r0, 0xb0(r3)
.L_8030E764:
/* 8030E764 0030B6A4  80 7E 00 40 */	lwz r3, 0x40(r30)
/* 8030E768 0030B6A8  28 03 00 00 */	cmplwi r3, 0
/* 8030E76C 0030B6AC  41 82 00 0C */	beq .L_8030E778
/* 8030E770 0030B6B0  38 9F 01 90 */	addi r4, r31, 0x190
/* 8030E774 0030B6B4  48 00 0A A5 */	bl draw__Q32og6Screen8BloGroupFP13J2DPerspGraph
.L_8030E778:
/* 8030E778 0030B6B8  80 7E 00 38 */	lwz r3, 0x38(r30)
/* 8030E77C 0030B6BC  88 03 00 5C */	lbz r0, 0x5c(r3)
/* 8030E780 0030B6C0  28 00 00 00 */	cmplwi r0, 0
/* 8030E784 0030B6C4  41 82 00 10 */	beq .L_8030E794
/* 8030E788 0030B6C8  80 7E 00 3C */	lwz r3, 0x3c(r30)
/* 8030E78C 0030B6CC  38 9F 01 90 */	addi r4, r31, 0x190
/* 8030E790 0030B6D0  48 02 02 BD */	bl draw__Q32og6Screen13OtakaraSensorFR14J2DGrafContext
.L_8030E794:
/* 8030E794 0030B6D4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8030E798 0030B6D8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8030E79C 0030B6DC  83 C1 00 08 */	lwz r30, 8(r1)
/* 8030E7A0 0030B6E0  7C 08 03 A6 */	mtlr r0
/* 8030E7A4 0030B6E4  38 21 00 10 */	addi r1, r1, 0x10
/* 8030E7A8 0030B6E8  4E 80 00 20 */	blr 

.global doStart__Q32og9newScreen9ObjGroundFPCQ26Screen13StartSceneArg
doStart__Q32og9newScreen9ObjGroundFPCQ26Screen13StartSceneArg:
/* 8030E7AC 0030B6EC  C0 02 F3 90 */	lfs f0, lbl_8051D6F0@sda21(r2)
/* 8030E7B0 0030B6F0  D0 03 00 5C */	stfs f0, 0x5c(r3)
/* 8030E7B4 0030B6F4  D0 03 00 60 */	stfs f0, 0x60(r3)
/* 8030E7B8 0030B6F8  38 60 00 01 */	li r3, 1
/* 8030E7BC 0030B6FC  4E 80 00 20 */	blr 

.global doEnd__Q32og9newScreen9ObjGroundFPCQ26Screen11EndSceneArg
doEnd__Q32og9newScreen9ObjGroundFPCQ26Screen11EndSceneArg:
/* 8030E7C0 0030B700  C0 02 F3 90 */	lfs f0, lbl_8051D6F0@sda21(r2)
/* 8030E7C4 0030B704  D0 03 00 5C */	stfs f0, 0x5c(r3)
/* 8030E7C8 0030B708  38 60 00 01 */	li r3, 1
/* 8030E7CC 0030B70C  4E 80 00 20 */	blr 

.global doUpdateFadein__Q32og9newScreen9ObjGroundFv
doUpdateFadein__Q32og9newScreen9ObjGroundFv:
/* 8030E7D0 0030B710  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8030E7D4 0030B714  7C 08 02 A6 */	mflr r0
/* 8030E7D8 0030B718  3C 80 80 51 */	lis r4, msVal__Q32og9newScreen9ObjGround@ha
/* 8030E7DC 0030B71C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8030E7E0 0030B720  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8030E7E4 0030B724  3B E0 00 00 */	li r31, 0
/* 8030E7E8 0030B728  80 AD 9A EC */	lwz r5, sys@sda21(r13)
/* 8030E7EC 0030B72C  C0 23 00 5C */	lfs f1, 0x5c(r3)
/* 8030E7F0 0030B730  C0 05 00 54 */	lfs f0, 0x54(r5)
/* 8030E7F4 0030B734  EC 01 00 2A */	fadds f0, f1, f0
/* 8030E7F8 0030B738  D0 03 00 5C */	stfs f0, 0x5c(r3)
/* 8030E7FC 0030B73C  C0 03 00 5C */	lfs f0, 0x5c(r3)
/* 8030E800 0030B740  C0 24 3C 18 */	lfs f1, msVal__Q32og9newScreen9ObjGround@l(r4)
/* 8030E804 0030B744  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 8030E808 0030B748  40 81 00 0C */	ble .L_8030E814
/* 8030E80C 0030B74C  D0 23 00 5C */	stfs f1, 0x5c(r3)
/* 8030E810 0030B750  3B E0 00 01 */	li r31, 1
.L_8030E814:
/* 8030E814 0030B754  3C 80 80 51 */	lis r4, msVal__Q32og9newScreen9ObjGround@ha
/* 8030E818 0030B758  C0 23 00 5C */	lfs f1, 0x5c(r3)
/* 8030E81C 0030B75C  C0 04 3C 18 */	lfs f0, msVal__Q32og9newScreen9ObjGround@l(r4)
/* 8030E820 0030B760  EC 01 00 24 */	fdivs f0, f1, f0
/* 8030E824 0030B764  D0 03 00 60 */	stfs f0, 0x60(r3)
/* 8030E828 0030B768  4B FF FC 35 */	bl commonUpdate__Q32og9newScreen9ObjGroundFv
/* 8030E82C 0030B76C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8030E830 0030B770  7F E3 FB 78 */	mr r3, r31
/* 8030E834 0030B774  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8030E838 0030B778  7C 08 03 A6 */	mtlr r0
/* 8030E83C 0030B77C  38 21 00 10 */	addi r1, r1, 0x10
/* 8030E840 0030B780  4E 80 00 20 */	blr 

.global doUpdateFadeinFinish__Q32og9newScreen9ObjGroundFv
doUpdateFadeinFinish__Q32og9newScreen9ObjGroundFv:
/* 8030E844 0030B784  4E 80 00 20 */	blr 

.global doUpdateFinish__Q32og9newScreen9ObjGroundFv
doUpdateFinish__Q32og9newScreen9ObjGroundFv:
/* 8030E848 0030B788  C0 02 F3 90 */	lfs f0, lbl_8051D6F0@sda21(r2)
/* 8030E84C 0030B78C  D0 03 00 5C */	stfs f0, 0x5c(r3)
/* 8030E850 0030B790  4E 80 00 20 */	blr 

.global doUpdateFadeout__Q32og9newScreen9ObjGroundFv
doUpdateFadeout__Q32og9newScreen9ObjGroundFv:
/* 8030E854 0030B794  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8030E858 0030B798  7C 08 02 A6 */	mflr r0
/* 8030E85C 0030B79C  3C 80 80 51 */	lis r4, msVal__Q32og9newScreen9ObjGround@ha
/* 8030E860 0030B7A0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8030E864 0030B7A4  38 84 3C 18 */	addi r4, r4, msVal__Q32og9newScreen9ObjGround@l
/* 8030E868 0030B7A8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8030E86C 0030B7AC  3B E0 00 00 */	li r31, 0
/* 8030E870 0030B7B0  80 AD 9A EC */	lwz r5, sys@sda21(r13)
/* 8030E874 0030B7B4  C0 23 00 5C */	lfs f1, 0x5c(r3)
/* 8030E878 0030B7B8  C0 05 00 54 */	lfs f0, 0x54(r5)
/* 8030E87C 0030B7BC  EC 01 00 2A */	fadds f0, f1, f0
/* 8030E880 0030B7C0  D0 03 00 5C */	stfs f0, 0x5c(r3)
/* 8030E884 0030B7C4  C0 03 00 5C */	lfs f0, 0x5c(r3)
/* 8030E888 0030B7C8  C0 24 00 04 */	lfs f1, 4(r4)
/* 8030E88C 0030B7CC  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 8030E890 0030B7D0  40 81 00 0C */	ble .L_8030E89C
/* 8030E894 0030B7D4  D0 23 00 5C */	stfs f1, 0x5c(r3)
/* 8030E898 0030B7D8  3B E0 00 01 */	li r31, 1
.L_8030E89C:
/* 8030E89C 0030B7DC  C0 23 00 5C */	lfs f1, 0x5c(r3)
/* 8030E8A0 0030B7E0  C0 04 00 04 */	lfs f0, 4(r4)
/* 8030E8A4 0030B7E4  C0 42 F3 94 */	lfs f2, lbl_8051D6F4@sda21(r2)
/* 8030E8A8 0030B7E8  EC 01 00 24 */	fdivs f0, f1, f0
/* 8030E8AC 0030B7EC  EC 02 00 28 */	fsubs f0, f2, f0
/* 8030E8B0 0030B7F0  D0 03 00 60 */	stfs f0, 0x60(r3)
/* 8030E8B4 0030B7F4  4B FF FB A9 */	bl commonUpdate__Q32og9newScreen9ObjGroundFv
/* 8030E8B8 0030B7F8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8030E8BC 0030B7FC  7F E3 FB 78 */	mr r3, r31
/* 8030E8C0 0030B800  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8030E8C4 0030B804  7C 08 03 A6 */	mtlr r0
/* 8030E8C8 0030B808  38 21 00 10 */	addi r1, r1, 0x10
/* 8030E8CC 0030B80C  4E 80 00 20 */	blr 

.global doUpdateFadeoutFinish__Q32og9newScreen9ObjGroundFv
doUpdateFadeoutFinish__Q32og9newScreen9ObjGroundFv:
/* 8030E8D0 0030B810  4E 80 00 20 */	blr 

__sinit_ogObjGround_cpp: #static initializer
/* 8030E8D4 0030B814  3C 60 80 51 */	lis r3, __float_nan@ha
/* 8030E8D8 0030B818  C0 E2 F3 C0 */	lfs f7, lbl_8051D720@sda21(r2)
/* 8030E8DC 0030B81C  38 A3 48 B0 */	addi r5, r3, __float_nan@l
/* 8030E8E0 0030B820  3C 80 80 4E */	lis r4, govNAN___Q24Game5P2JST@ha
/* 8030E8E4 0030B824  C1 05 00 00 */	lfs f8, 0(r5)
/* 8030E8E8 0030B828  3C 60 80 51 */	lis r3, msVal__Q32og9newScreen9ObjGround@ha
/* 8030E8EC 0030B82C  38 A0 FF FF */	li r5, -1
/* 8030E8F0 0030B830  C0 82 F3 90 */	lfs f4, lbl_8051D6F0@sda21(r2)
/* 8030E8F4 0030B834  D5 04 82 D8 */	stfsu f8, govNAN___Q24Game5P2JST@l(r4)
/* 8030E8F8 0030B838  38 00 00 00 */	li r0, 0
/* 8030E8FC 0030B83C  C0 C2 F3 C4 */	lfs f6, lbl_8051D724@sda21(r2)
/* 8030E900 0030B840  D4 E3 3C 18 */	stfsu f7, msVal__Q32og9newScreen9ObjGround@l(r3)
/* 8030E904 0030B844  C0 A2 F3 C8 */	lfs f5, lbl_8051D728@sda21(r2)
/* 8030E908 0030B848  C0 62 F3 CC */	lfs f3, lbl_8051D72C@sda21(r2)
/* 8030E90C 0030B84C  C0 42 F3 D0 */	lfs f2, lbl_8051D730@sda21(r2)
/* 8030E910 0030B850  C0 22 F3 98 */	lfs f1, lbl_8051D6F8@sda21(r2)
/* 8030E914 0030B854  C0 02 F3 D4 */	lfs f0, lbl_8051D734@sda21(r2)
/* 8030E918 0030B858  90 AD 97 B8 */	stw r5, gu32NAN___Q24Game5P2JST@sda21(r13)
/* 8030E91C 0030B85C  D1 0D 97 BC */	stfs f8, gfNAN___Q24Game5P2JST@sda21(r13)
/* 8030E920 0030B860  D1 04 00 04 */	stfs f8, 4(r4)
/* 8030E924 0030B864  D1 04 00 08 */	stfs f8, 8(r4)
/* 8030E928 0030B868  D0 C3 00 04 */	stfs f6, 4(r3)
/* 8030E92C 0030B86C  D0 A3 00 08 */	stfs f5, 8(r3)
/* 8030E930 0030B870  D0 83 00 0C */	stfs f4, 0xc(r3)
/* 8030E934 0030B874  D0 63 00 10 */	stfs f3, 0x10(r3)
/* 8030E938 0030B878  D0 43 00 14 */	stfs f2, 0x14(r3)
/* 8030E93C 0030B87C  D0 23 00 18 */	stfs f1, 0x18(r3)
/* 8030E940 0030B880  98 03 00 24 */	stb r0, 0x24(r3)
/* 8030E944 0030B884  D0 83 00 1C */	stfs f4, 0x1c(r3)
/* 8030E948 0030B888  D0 03 00 20 */	stfs f0, 0x20(r3)
/* 8030E94C 0030B88C  4E 80 00 20 */	blr 

.global "@24@__dt__Q32og9newScreen9ObjGroundFv"
"@24@__dt__Q32og9newScreen9ObjGroundFv":
/* 8030E950 0030B890  38 63 FF E8 */	addi r3, r3, -24
/* 8030E954 0030B894  4B FF F5 F8 */	b __dt__Q32og9newScreen9ObjGroundFv
