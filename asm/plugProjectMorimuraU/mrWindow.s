.include "macros.inc"
.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.global __vt__Q28Morimura24TSelectExplanationWindow
__vt__Q28Morimura24TSelectExplanationWindow:
	.4byte 0
	.4byte 0
	.4byte create__Q28Morimura11TScreenBaseFPCcUl
	.4byte update__Q28Morimura24TSelectExplanationWindowFv
	.4byte draw__Q28Morimura24TSelectExplanationWindowFR8GraphicsP13J2DPerspGraph
	.4byte 0
.global __vt__Q28Morimura17TConfirmEndWindow
__vt__Q28Morimura17TConfirmEndWindow:
	.4byte 0
	.4byte 0
	.4byte __dt__Q28Morimura17TConfirmEndWindowFv
	.4byte getChildCount__5CNodeFv
	.4byte 0
	.4byte 0
	.4byte "@24@__dt__Q28Morimura17TConfirmEndWindowFv"
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
	.4byte doStart__Q28Morimura17TConfirmEndWindowFPCQ26Screen13StartSceneArg
	.4byte doEnd__Q32og9newScreen15ObjSMenuPauseVSFPCQ26Screen11EndSceneArg
	.4byte doCreate__Q32og9newScreen22ObjWorldMapInfoWindow0FP10JKRArchive
	.4byte doUpdateFadein__Q28Morimura17TConfirmEndWindowFv
	.4byte doUpdateFadeinFinish__Q28Morimura17TConfirmEndWindowFv
	.4byte doUpdate__Q32og9newScreen15ObjSMenuPauseVSFv
	.4byte doUpdateFinish__Q32og9newScreen15ObjSMenuPauseVSFv
	.4byte doUpdateFadeout__Q28Morimura17TConfirmEndWindowFv
	.4byte doUpdateFadeoutFinish__Q28Morimura17TConfirmEndWindowFv
	.4byte doDraw__Q28Morimura17TConfirmEndWindowFR8Graphics
	.4byte doConfirmSetScene__Q26Screen7ObjBaseFRQ26Screen11SetSceneArg
	.4byte doConfirmStartScene__Q26Screen7ObjBaseFPQ26Screen13StartSceneArg
	.4byte doConfirmEndScene__Q26Screen7ObjBaseFRPQ26Screen11EndSceneArg
	.4byte in_L__Q32og9newScreen15ObjSMenuPauseVSFv
	.4byte in_R__Q32og9newScreen15ObjSMenuPauseVSFv
	.4byte wait__Q32og9newScreen15ObjSMenuPauseVSFv
	.4byte out_L__Q32og9newScreen22ObjWorldMapInfoWindow0Fv
	.4byte out_R__Q32og9newScreen15ObjSMenuPauseVSFv
	.4byte loop__Q32og9newScreen12ObjSMenuBaseFv
	.4byte doUpdateCancelAction__Q32og9newScreen15ObjSMenuPauseVSFv
	.4byte doUpdateRAction__Q32og9newScreen15ObjSMenuPauseVSFv
	.4byte doUpdateLAction__Q32og9newScreen15ObjSMenuPauseVSFv
	.4byte updateFadeIn__Q32og9newScreen12ObjSMenuBaseFv
	.4byte updateFadeOut__Q32og9newScreen12ObjSMenuBaseFv
	.4byte commonUpdate__Q32og9newScreen22ObjWorldMapInfoWindow0Fv
	.4byte out_cancel__Q32og9newScreen22ObjWorldMapInfoWindow0Fv
	.4byte out_menu_0__Q32og9newScreen22ObjWorldMapInfoWindow0Fv
	.4byte out_menu_1__Q32og9newScreen22ObjWorldMapInfoWindow0Fv
	.4byte getResult__Q32og9newScreen22ObjWorldMapInfoWindow0Fv

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
.global lbl_8051F358
lbl_8051F358:
	.4byte 0x00000000
.global lbl_8051F35C
lbl_8051F35C:
	.float 0.05
.global lbl_8051F360
lbl_8051F360:
	.float 0.1
.global lbl_8051F364
lbl_8051F364:
	.float 1.0
.global lbl_8051F368
lbl_8051F368:
	.4byte 0x3DF5C28F
.global lbl_8051F36C
lbl_8051F36C:
	.4byte 0xBDF5C28F

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global __ct__Q28Morimura17TConfirmEndWindowFPCc
__ct__Q28Morimura17TConfirmEndWindowFPCc:
/* 803A3644 003A0584  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803A3648 003A0588  7C 08 02 A6 */	mflr r0
/* 803A364C 003A058C  90 01 00 14 */	stw r0, 0x14(r1)
/* 803A3650 003A0590  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803A3654 003A0594  7C 7F 1B 78 */	mr r31, r3
/* 803A3658 003A0598  4B F8 7C E9 */	bl __ct__Q32og9newScreen22ObjWorldMapInfoWindow0FPCc
/* 803A365C 003A059C  3C 60 80 4E */	lis r3, __vt__Q28Morimura17TConfirmEndWindow@ha
/* 803A3660 003A05A0  38 00 00 00 */	li r0, 0
/* 803A3664 003A05A4  38 83 59 98 */	addi r4, r3, __vt__Q28Morimura17TConfirmEndWindow@l
/* 803A3668 003A05A8  7F E3 FB 78 */	mr r3, r31
/* 803A366C 003A05AC  90 9F 00 00 */	stw r4, 0(r31)
/* 803A3670 003A05B0  38 84 00 10 */	addi r4, r4, 0x10
/* 803A3674 003A05B4  90 9F 00 18 */	stw r4, 0x18(r31)
/* 803A3678 003A05B8  98 1F 00 D4 */	stb r0, 0xd4(r31)
/* 803A367C 003A05BC  98 1F 00 D5 */	stb r0, 0xd5(r31)
/* 803A3680 003A05C0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803A3684 003A05C4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803A3688 003A05C8  7C 08 03 A6 */	mtlr r0
/* 803A368C 003A05CC  38 21 00 10 */	addi r1, r1, 0x10
/* 803A3690 003A05D0  4E 80 00 20 */	blr 

.global doStart__Q28Morimura17TConfirmEndWindowFPCQ26Screen13StartSceneArg
doStart__Q28Morimura17TConfirmEndWindowFPCQ26Screen13StartSceneArg:
/* 803A3694 003A05D4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803A3698 003A05D8  7C 08 02 A6 */	mflr r0
/* 803A369C 003A05DC  C0 02 0F F8 */	lfs f0, lbl_8051F358@sda21(r2)
/* 803A36A0 003A05E0  38 A0 00 00 */	li r5, 0
/* 803A36A4 003A05E4  90 01 00 14 */	stw r0, 0x14(r1)
/* 803A36A8 003A05E8  38 00 00 01 */	li r0, 1
/* 803A36AC 003A05EC  D0 03 00 44 */	stfs f0, 0x44(r3)
/* 803A36B0 003A05F0  98 A3 00 D4 */	stb r5, 0xd4(r3)
/* 803A36B4 003A05F4  98 03 00 D5 */	stb r0, 0xd5(r3)
/* 803A36B8 003A05F8  80 A3 00 CC */	lwz r5, 0xcc(r3)
/* 803A36BC 003A05FC  98 05 00 21 */	stb r0, 0x21(r5)
/* 803A36C0 003A0600  4B F8 80 C9 */	bl doStart__Q32og9newScreen22ObjWorldMapInfoWindow0FPCQ26Screen13StartSceneArg
/* 803A36C4 003A0604  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803A36C8 003A0608  7C 08 03 A6 */	mtlr r0
/* 803A36CC 003A060C  38 21 00 10 */	addi r1, r1, 0x10
/* 803A36D0 003A0610  4E 80 00 20 */	blr 

.global doUpdateFadeinFinish__Q28Morimura17TConfirmEndWindowFv
doUpdateFadeinFinish__Q28Morimura17TConfirmEndWindowFv:
/* 803A36D4 003A0614  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803A36D8 003A0618  7C 08 02 A6 */	mflr r0
/* 803A36DC 003A061C  C0 22 0F FC */	lfs f1, lbl_8051F35C@sda21(r2)
/* 803A36E0 003A0620  90 01 00 14 */	stw r0, 0x14(r1)
/* 803A36E4 003A0624  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803A36E8 003A0628  7C 7F 1B 78 */	mr r31, r3
/* 803A36EC 003A062C  80 63 00 B8 */	lwz r3, 0xb8(r3)
/* 803A36F0 003A0630  4B F6 5D 65 */	bl open__Q32og6Screen15AnimText_ScreenFf
/* 803A36F4 003A0634  80 7F 00 BC */	lwz r3, 0xbc(r31)
/* 803A36F8 003A0638  C0 22 10 00 */	lfs f1, lbl_8051F360@sda21(r2)
/* 803A36FC 003A063C  4B F6 5D 59 */	bl open__Q32og6Screen15AnimText_ScreenFf
/* 803A3700 003A0640  80 9F 00 AC */	lwz r4, 0xac(r31)
/* 803A3704 003A0644  7F E3 FB 78 */	mr r3, r31
/* 803A3708 003A0648  4B F8 5F 01 */	bl blink_Menu__Q32og9newScreen15ObjSMenuPauseVSFi
/* 803A370C 003A064C  7F E3 FB 78 */	mr r3, r31
/* 803A3710 003A0650  4B F8 64 15 */	bl doUpdateFadeinFinish__Q32og9newScreen15ObjSMenuPauseVSFv
/* 803A3714 003A0654  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803A3718 003A0658  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803A371C 003A065C  7C 08 03 A6 */	mtlr r0
/* 803A3720 003A0660  38 21 00 10 */	addi r1, r1, 0x10
/* 803A3724 003A0664  4E 80 00 20 */	blr 

.global doUpdateFadein__Q28Morimura17TConfirmEndWindowFv
doUpdateFadein__Q28Morimura17TConfirmEndWindowFv:
/* 803A3728 003A0668  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803A372C 003A066C  7C 08 02 A6 */	mflr r0
/* 803A3730 003A0670  90 01 00 14 */	stw r0, 0x14(r1)
/* 803A3734 003A0674  4B F8 80 E1 */	bl doUpdateFadein__Q32og9newScreen22ObjWorldMapInfoWindow0Fv
/* 803A3738 003A0678  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803A373C 003A067C  7C 08 03 A6 */	mtlr r0
/* 803A3740 003A0680  38 21 00 10 */	addi r1, r1, 0x10
/* 803A3744 003A0684  4E 80 00 20 */	blr 

.global doUpdateFadeoutFinish__Q28Morimura17TConfirmEndWindowFv
doUpdateFadeoutFinish__Q28Morimura17TConfirmEndWindowFv:
/* 803A3748 003A0688  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803A374C 003A068C  7C 08 02 A6 */	mflr r0
/* 803A3750 003A0690  90 01 00 14 */	stw r0, 0x14(r1)
/* 803A3754 003A0694  38 00 00 00 */	li r0, 0
/* 803A3758 003A0698  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803A375C 003A069C  7C 7F 1B 78 */	mr r31, r3
/* 803A3760 003A06A0  98 03 00 D4 */	stb r0, 0xd4(r3)
/* 803A3764 003A06A4  80 63 00 B8 */	lwz r3, 0xb8(r3)
/* 803A3768 003A06A8  4B F6 5C D5 */	bl stop__Q32og6Screen15AnimText_ScreenFv
/* 803A376C 003A06AC  80 7F 00 BC */	lwz r3, 0xbc(r31)
/* 803A3770 003A06B0  4B F6 5C CD */	bl stop__Q32og6Screen15AnimText_ScreenFv
/* 803A3774 003A06B4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803A3778 003A06B8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803A377C 003A06BC  7C 08 03 A6 */	mtlr r0
/* 803A3780 003A06C0  38 21 00 10 */	addi r1, r1, 0x10
/* 803A3784 003A06C4  4E 80 00 20 */	blr 

.global doUpdateFadeout__Q28Morimura17TConfirmEndWindowFv
doUpdateFadeout__Q28Morimura17TConfirmEndWindowFv:
/* 803A3788 003A06C8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803A378C 003A06CC  7C 08 02 A6 */	mflr r0
/* 803A3790 003A06D0  90 01 00 14 */	stw r0, 0x14(r1)
/* 803A3794 003A06D4  38 00 00 00 */	li r0, 0
/* 803A3798 003A06D8  98 03 00 D5 */	stb r0, 0xd5(r3)
/* 803A379C 003A06DC  4B F8 64 19 */	bl doUpdateFadeout__Q32og9newScreen15ObjSMenuPauseVSFv
/* 803A37A0 003A06E0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803A37A4 003A06E4  7C 08 03 A6 */	mtlr r0
/* 803A37A8 003A06E8  38 21 00 10 */	addi r1, r1, 0x10
/* 803A37AC 003A06EC  4E 80 00 20 */	blr 

.global doDraw__Q28Morimura17TConfirmEndWindowFR8Graphics
doDraw__Q28Morimura17TConfirmEndWindowFR8Graphics:
/* 803A37B0 003A06F0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803A37B4 003A06F4  7C 08 02 A6 */	mflr r0
/* 803A37B8 003A06F8  90 01 00 14 */	stw r0, 0x14(r1)
/* 803A37BC 003A06FC  88 03 00 D4 */	lbz r0, 0xd4(r3)
/* 803A37C0 003A0700  28 00 00 00 */	cmplwi r0, 0
/* 803A37C4 003A0704  41 82 00 0C */	beq .L_803A37D0
/* 803A37C8 003A0708  4B F8 62 65 */	bl doDraw__Q32og9newScreen15ObjSMenuPauseVSFR8Graphics
/* 803A37CC 003A070C  48 00 00 0C */	b .L_803A37D8
.L_803A37D0:
/* 803A37D0 003A0710  38 00 00 01 */	li r0, 1
/* 803A37D4 003A0714  98 03 00 D4 */	stb r0, 0xd4(r3)
.L_803A37D8:
/* 803A37D8 003A0718  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803A37DC 003A071C  7C 08 03 A6 */	mtlr r0
/* 803A37E0 003A0720  38 21 00 10 */	addi r1, r1, 0x10
/* 803A37E4 003A0724  4E 80 00 20 */	blr 

.global setRetireMsg__Q28Morimura17TConfirmEndWindowFUx
setRetireMsg__Q28Morimura17TConfirmEndWindowFUx:
/* 803A37E8 003A0728  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803A37EC 003A072C  7C 08 02 A6 */	mflr r0
/* 803A37F0 003A0730  90 01 00 14 */	stw r0, 0x14(r1)
/* 803A37F4 003A0734  80 63 00 BC */	lwz r3, 0xbc(r3)
/* 803A37F8 003A0738  4B F6 5C 29 */	bl setText__Q32og6Screen15AnimText_ScreenFUx
/* 803A37FC 003A073C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803A3800 003A0740  7C 08 03 A6 */	mtlr r0
/* 803A3804 003A0744  38 21 00 10 */	addi r1, r1, 0x10
/* 803A3808 003A0748  4E 80 00 20 */	blr 

.global __ct__Q28Morimura24TSelectExplanationWindowFP10JKRArchivei
__ct__Q28Morimura24TSelectExplanationWindowFP10JKRArchivei:
/* 803A380C 003A074C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803A3810 003A0750  7C 08 02 A6 */	mflr r0
/* 803A3814 003A0754  90 01 00 14 */	stw r0, 0x14(r1)
/* 803A3818 003A0758  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803A381C 003A075C  7C 7F 1B 78 */	mr r31, r3
/* 803A3820 003A0760  4B FF DB 89 */	bl __ct__Q28Morimura11TScreenBaseFP10JKRArchivei
/* 803A3824 003A0764  3C 60 80 4E */	lis r3, __vt__Q28Morimura24TSelectExplanationWindow@ha
/* 803A3828 003A0768  38 00 00 00 */	li r0, 0
/* 803A382C 003A076C  38 63 59 80 */	addi r3, r3, __vt__Q28Morimura24TSelectExplanationWindow@l
/* 803A3830 003A0770  C0 02 0F F8 */	lfs f0, lbl_8051F358@sda21(r2)
/* 803A3834 003A0774  90 7F 00 00 */	stw r3, 0(r31)
/* 803A3838 003A0778  38 60 00 1C */	li r3, 0x1c
/* 803A383C 003A077C  90 1F 00 18 */	stw r0, 0x18(r31)
/* 803A3840 003A0780  D0 1F 00 24 */	stfs f0, 0x24(r31)
/* 803A3844 003A0784  D0 1F 00 28 */	stfs f0, 0x28(r31)
/* 803A3848 003A0788  D0 1F 00 1C */	stfs f0, 0x1c(r31)
/* 803A384C 003A078C  D0 1F 00 20 */	stfs f0, 0x20(r31)
/* 803A3850 003A0790  4B C8 06 55 */	bl __nw__FUl
/* 803A3854 003A0794  7C 60 1B 79 */	or. r0, r3, r3
/* 803A3858 003A0798  41 82 00 0C */	beq .L_803A3864
/* 803A385C 003A079C  4B F8 55 A9 */	bl __ct__Q32og6Screen8ScaleMgrFv
/* 803A3860 003A07A0  7C 60 1B 78 */	mr r0, r3
.L_803A3864:
/* 803A3864 003A07A4  90 1F 00 2C */	stw r0, 0x2c(r31)
/* 803A3868 003A07A8  7F E3 FB 78 */	mr r3, r31
/* 803A386C 003A07AC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803A3870 003A07B0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803A3874 003A07B4  7C 08 03 A6 */	mtlr r0
/* 803A3878 003A07B8  38 21 00 10 */	addi r1, r1, 0x10
/* 803A387C 003A07BC  4E 80 00 20 */	blr 

.global update__Q28Morimura24TSelectExplanationWindowFv
update__Q28Morimura24TSelectExplanationWindowFv:
/* 803A3880 003A07C0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 803A3884 003A07C4  7C 08 02 A6 */	mflr r0
/* 803A3888 003A07C8  90 01 00 24 */	stw r0, 0x24(r1)
/* 803A388C 003A07CC  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 803A3890 003A07D0  93 C1 00 18 */	stw r30, 0x18(r1)
/* 803A3894 003A07D4  93 A1 00 14 */	stw r29, 0x14(r1)
/* 803A3898 003A07D8  7C 7D 1B 78 */	mr r29, r3
/* 803A389C 003A07DC  80 03 00 18 */	lwz r0, 0x18(r3)
/* 803A38A0 003A07E0  2C 00 00 00 */	cmpwi r0, 0
/* 803A38A4 003A07E4  40 82 00 10 */	bne .L_803A38B4
/* 803A38A8 003A07E8  C0 02 0F F8 */	lfs f0, lbl_8051F358@sda21(r2)
/* 803A38AC 003A07EC  D0 1D 00 24 */	stfs f0, 0x24(r29)
/* 803A38B0 003A07F0  48 00 00 EC */	b .L_803A399C
.L_803A38B4:
/* 803A38B4 003A07F4  80 7D 00 08 */	lwz r3, 8(r29)
/* 803A38B8 003A07F8  81 83 00 00 */	lwz r12, 0(r3)
/* 803A38BC 003A07FC  81 8C 00 30 */	lwz r12, 0x30(r12)
/* 803A38C0 003A0800  7D 89 03 A6 */	mtctr r12
/* 803A38C4 003A0804  4E 80 04 21 */	bctrl 
/* 803A38C8 003A0808  3B C0 00 00 */	li r30, 0
/* 803A38CC 003A080C  3B E0 00 00 */	li r31, 0
/* 803A38D0 003A0810  48 00 00 18 */	b .L_803A38E8
.L_803A38D4:
/* 803A38D4 003A0814  80 7D 00 04 */	lwz r3, 4(r29)
/* 803A38D8 003A0818  7C 63 F8 2E */	lwzx r3, r3, r31
/* 803A38DC 003A081C  4B F6 15 35 */	bl update__Q32og6Screen12AnimBaseBaseFv
/* 803A38E0 003A0820  3B FF 00 04 */	addi r31, r31, 4
/* 803A38E4 003A0824  3B DE 00 01 */	addi r30, r30, 1
.L_803A38E8:
/* 803A38E8 003A0828  80 1D 00 10 */	lwz r0, 0x10(r29)
/* 803A38EC 003A082C  7C 1E 00 00 */	cmpw r30, r0
/* 803A38F0 003A0830  41 80 FF E4 */	blt .L_803A38D4
/* 803A38F4 003A0834  80 1D 00 18 */	lwz r0, 0x18(r29)
/* 803A38F8 003A0838  2C 00 00 02 */	cmpwi r0, 2
/* 803A38FC 003A083C  41 82 00 98 */	beq .L_803A3994
/* 803A3900 003A0840  40 80 00 10 */	bge .L_803A3910
/* 803A3904 003A0844  2C 00 00 01 */	cmpwi r0, 1
/* 803A3908 003A0848  40 80 00 14 */	bge .L_803A391C
/* 803A390C 003A084C  48 00 00 88 */	b .L_803A3994
.L_803A3910:
/* 803A3910 003A0850  2C 00 00 04 */	cmpwi r0, 4
/* 803A3914 003A0854  40 80 00 80 */	bge .L_803A3994
/* 803A3918 003A0858  48 00 00 4C */	b .L_803A3964
.L_803A391C:
/* 803A391C 003A085C  C0 5D 00 28 */	lfs f2, 0x28(r29)
/* 803A3920 003A0860  C0 3D 00 24 */	lfs f1, 0x24(r29)
/* 803A3924 003A0864  C0 02 10 04 */	lfs f0, lbl_8051F364@sda21(r2)
/* 803A3928 003A0868  EC 22 08 2A */	fadds f1, f2, f1
/* 803A392C 003A086C  D0 3D 00 28 */	stfs f1, 0x28(r29)
/* 803A3930 003A0870  C0 3D 00 28 */	lfs f1, 0x28(r29)
/* 803A3934 003A0874  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 803A3938 003A0878  4C 41 13 82 */	cror 2, 1, 2
/* 803A393C 003A087C  40 82 00 58 */	bne .L_803A3994
/* 803A3940 003A0880  D0 1D 00 28 */	stfs f0, 0x28(r29)
/* 803A3944 003A0884  7F A3 EB 78 */	mr r3, r29
/* 803A3948 003A0888  81 9D 00 00 */	lwz r12, 0(r29)
/* 803A394C 003A088C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 803A3950 003A0890  7D 89 03 A6 */	mtctr r12
/* 803A3954 003A0894  4E 80 04 21 */	bctrl 
/* 803A3958 003A0898  38 00 00 02 */	li r0, 2
/* 803A395C 003A089C  90 1D 00 18 */	stw r0, 0x18(r29)
/* 803A3960 003A08A0  48 00 00 34 */	b .L_803A3994
.L_803A3964:
/* 803A3964 003A08A4  C0 5D 00 28 */	lfs f2, 0x28(r29)
/* 803A3968 003A08A8  C0 3D 00 24 */	lfs f1, 0x24(r29)
/* 803A396C 003A08AC  C0 02 0F F8 */	lfs f0, lbl_8051F358@sda21(r2)
/* 803A3970 003A08B0  EC 22 08 2A */	fadds f1, f2, f1
/* 803A3974 003A08B4  D0 3D 00 28 */	stfs f1, 0x28(r29)
/* 803A3978 003A08B8  C0 3D 00 28 */	lfs f1, 0x28(r29)
/* 803A397C 003A08BC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 803A3980 003A08C0  40 80 00 14 */	bge .L_803A3994
/* 803A3984 003A08C4  D0 1D 00 28 */	stfs f0, 0x28(r29)
/* 803A3988 003A08C8  38 00 00 00 */	li r0, 0
/* 803A398C 003A08CC  D0 1D 00 24 */	stfs f0, 0x24(r29)
/* 803A3990 003A08D0  90 1D 00 18 */	stw r0, 0x18(r29)
.L_803A3994:
/* 803A3994 003A08D4  80 7D 00 08 */	lwz r3, 8(r29)
/* 803A3998 003A08D8  4B C9 D1 95 */	bl animation__9J2DScreenFv
.L_803A399C:
/* 803A399C 003A08DC  C0 22 10 04 */	lfs f1, lbl_8051F364@sda21(r2)
/* 803A39A0 003A08E0  C0 1D 00 28 */	lfs f0, 0x28(r29)
/* 803A39A4 003A08E4  C0 5D 00 1C */	lfs f2, 0x1c(r29)
/* 803A39A8 003A08E8  EC 81 00 28 */	fsubs f4, f1, f0
/* 803A39AC 003A08EC  C0 7D 00 20 */	lfs f3, 0x20(r29)
/* 803A39B0 003A08F0  C0 22 24 3C */	lfs f1, mstTuningTransX__Q29P2DScreen10Mgr_tuning@sda21(r2)
/* 803A39B4 003A08F4  C0 02 24 40 */	lfs f0, mstTuningTransY__Q29P2DScreen10Mgr_tuning@sda21(r2)
/* 803A39B8 003A08F8  EC 44 00 B2 */	fmuls f2, f4, f2
/* 803A39BC 003A08FC  80 7D 00 08 */	lwz r3, 8(r29)
/* 803A39C0 003A0900  EC 64 00 F2 */	fmuls f3, f4, f3
/* 803A39C4 003A0904  EC 22 08 2A */	fadds f1, f2, f1
/* 803A39C8 003A0908  EC 03 00 2A */	fadds f0, f3, f0
/* 803A39CC 003A090C  D0 23 01 40 */	stfs f1, 0x140(r3)
/* 803A39D0 003A0910  D0 03 01 44 */	stfs f0, 0x144(r3)
/* 803A39D4 003A0914  80 7D 00 2C */	lwz r3, 0x2c(r29)
/* 803A39D8 003A0918  4B F8 55 AD */	bl calc__Q32og6Screen8ScaleMgrFv
/* 803A39DC 003A091C  C0 42 24 34 */	lfs f2, mstTuningScaleX__Q29P2DScreen10Mgr_tuning@sda21(r2)
/* 803A39E0 003A0920  C0 02 24 38 */	lfs f0, mstTuningScaleY__Q29P2DScreen10Mgr_tuning@sda21(r2)
/* 803A39E4 003A0924  EC 41 00 B2 */	fmuls f2, f1, f2
/* 803A39E8 003A0928  80 7D 00 08 */	lwz r3, 8(r29)
/* 803A39EC 003A092C  EC 01 00 32 */	fmuls f0, f1, f0
/* 803A39F0 003A0930  D0 43 01 38 */	stfs f2, 0x138(r3)
/* 803A39F4 003A0934  D0 03 01 3C */	stfs f0, 0x13c(r3)
/* 803A39F8 003A0938  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 803A39FC 003A093C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 803A3A00 003A0940  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 803A3A04 003A0944  80 01 00 24 */	lwz r0, 0x24(r1)
/* 803A3A08 003A0948  7C 08 03 A6 */	mtlr r0
/* 803A3A0C 003A094C  38 21 00 20 */	addi r1, r1, 0x20
/* 803A3A10 003A0950  4E 80 00 20 */	blr 

.global draw__Q28Morimura24TSelectExplanationWindowFR8GraphicsP13J2DPerspGraph
draw__Q28Morimura24TSelectExplanationWindowFR8GraphicsP13J2DPerspGraph:
/* 803A3A14 003A0954  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803A3A18 003A0958  7C 08 02 A6 */	mflr r0
/* 803A3A1C 003A095C  90 01 00 14 */	stw r0, 0x14(r1)
/* 803A3A20 003A0960  80 03 00 18 */	lwz r0, 0x18(r3)
/* 803A3A24 003A0964  2C 00 00 00 */	cmpwi r0, 0
/* 803A3A28 003A0968  41 82 00 08 */	beq .L_803A3A30
/* 803A3A2C 003A096C  4B FF DB 6D */	bl draw__Q28Morimura11TScreenBaseFR8GraphicsP13J2DPerspGraph
.L_803A3A30:
/* 803A3A30 003A0970  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803A3A34 003A0974  7C 08 03 A6 */	mtlr r0
/* 803A3A38 003A0978  38 21 00 10 */	addi r1, r1, 0x10
/* 803A3A3C 003A097C  4E 80 00 20 */	blr 

.global openWindow__Q28Morimura24TSelectExplanationWindowFv
openWindow__Q28Morimura24TSelectExplanationWindowFv:
/* 803A3A40 003A0980  C0 02 10 08 */	lfs f0, lbl_8051F368@sda21(r2)
/* 803A3A44 003A0984  38 00 00 01 */	li r0, 1
/* 803A3A48 003A0988  D0 03 00 24 */	stfs f0, 0x24(r3)
/* 803A3A4C 003A098C  90 03 00 18 */	stw r0, 0x18(r3)
/* 803A3A50 003A0990  4E 80 00 20 */	blr 

.global closeWindow__Q28Morimura24TSelectExplanationWindowFv
closeWindow__Q28Morimura24TSelectExplanationWindowFv:
/* 803A3A54 003A0994  C0 02 10 0C */	lfs f0, lbl_8051F36C@sda21(r2)
/* 803A3A58 003A0998  38 00 00 03 */	li r0, 3
/* 803A3A5C 003A099C  D0 03 00 24 */	stfs f0, 0x24(r3)
/* 803A3A60 003A09A0  90 03 00 18 */	stw r0, 0x18(r3)
/* 803A3A64 003A09A4  4E 80 00 20 */	blr 

.global __dt__Q28Morimura17TConfirmEndWindowFv
__dt__Q28Morimura17TConfirmEndWindowFv:
/* 803A3A68 003A09A8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803A3A6C 003A09AC  7C 08 02 A6 */	mflr r0
/* 803A3A70 003A09B0  90 01 00 14 */	stw r0, 0x14(r1)
/* 803A3A74 003A09B4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803A3A78 003A09B8  7C 9F 23 78 */	mr r31, r4
/* 803A3A7C 003A09BC  93 C1 00 08 */	stw r30, 8(r1)
/* 803A3A80 003A09C0  7C 7E 1B 79 */	or. r30, r3, r3
/* 803A3A84 003A09C4  41 82 00 48 */	beq .L_803A3ACC
/* 803A3A88 003A09C8  3C 80 80 4E */	lis r4, __vt__Q28Morimura17TConfirmEndWindow@ha
/* 803A3A8C 003A09CC  38 84 59 98 */	addi r4, r4, __vt__Q28Morimura17TConfirmEndWindow@l
/* 803A3A90 003A09D0  90 9E 00 00 */	stw r4, 0(r30)
/* 803A3A94 003A09D4  38 04 00 10 */	addi r0, r4, 0x10
/* 803A3A98 003A09D8  90 1E 00 18 */	stw r0, 0x18(r30)
/* 803A3A9C 003A09DC  41 82 00 20 */	beq .L_803A3ABC
/* 803A3AA0 003A09E0  3C A0 80 4E */	lis r5, __vt__Q32og9newScreen22ObjWorldMapInfoWindow0@ha
/* 803A3AA4 003A09E4  38 80 00 00 */	li r4, 0
/* 803A3AA8 003A09E8  38 A5 9D 50 */	addi r5, r5, __vt__Q32og9newScreen22ObjWorldMapInfoWindow0@l
/* 803A3AAC 003A09EC  90 BE 00 00 */	stw r5, 0(r30)
/* 803A3AB0 003A09F0  38 05 00 10 */	addi r0, r5, 0x10
/* 803A3AB4 003A09F4  90 1E 00 18 */	stw r0, 0x18(r30)
/* 803A3AB8 003A09F8  4B F8 57 59 */	bl __dt__Q32og9newScreen15ObjSMenuPauseVSFv
.L_803A3ABC:
/* 803A3ABC 003A09FC  7F E0 07 35 */	extsh. r0, r31
/* 803A3AC0 003A0A00  40 81 00 0C */	ble .L_803A3ACC
/* 803A3AC4 003A0A04  7F C3 F3 78 */	mr r3, r30
/* 803A3AC8 003A0A08  4B C8 05 ED */	bl __dl__FPv
.L_803A3ACC:
/* 803A3ACC 003A0A0C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803A3AD0 003A0A10  7F C3 F3 78 */	mr r3, r30
/* 803A3AD4 003A0A14  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803A3AD8 003A0A18  83 C1 00 08 */	lwz r30, 8(r1)
/* 803A3ADC 003A0A1C  7C 08 03 A6 */	mtlr r0
/* 803A3AE0 003A0A20  38 21 00 10 */	addi r1, r1, 0x10
/* 803A3AE4 003A0A24  4E 80 00 20 */	blr 

.global "@24@__dt__Q28Morimura17TConfirmEndWindowFv"
"@24@__dt__Q28Morimura17TConfirmEndWindowFv":
/* 803A3AE8 003A0A28  38 63 FF E8 */	addi r3, r3, -24
/* 803A3AEC 003A0A2C  4B FF FF 7C */	b __dt__Q28Morimura17TConfirmEndWindowFv
