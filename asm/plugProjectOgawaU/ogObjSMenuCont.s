.include "macros.inc"
.section .ctors, "wa"  # 0x80472F00 - 0x804732C0
lbl_constructor:
.4byte __sinit_ogObjSMenuCont_cpp

.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
lbl_8048F7D0:
	.asciz "ogObjSMenuCont.cpp"
.balign 4
lbl_8048F7E4:
	.asciz "s_menu_controller.blo"
.balign 4
lbl_8048F7FC:
	.asciz "s_menu_controller.btk"
.balign 4
lbl_8048F814:
	.asciz "s_menu_controller_02.btk"
.balign 4
lbl_8048F830:
	.asciz "screenObj.h"
.balign 4
lbl_8048F83C:
	.asciz "P2Assert"

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.global __vt__Q32og9newScreen12ObjSMenuCont
__vt__Q32og9newScreen12ObjSMenuCont:
	.4byte 0
	.4byte 0
	.4byte __dt__Q32og9newScreen12ObjSMenuContFv
	.4byte getChildCount__5CNodeFv
	.4byte 0
	.4byte 0
	.4byte "@24@__dt__Q32og9newScreen12ObjSMenuContFv"
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
	.4byte doStart__Q32og9newScreen12ObjSMenuContFPCQ26Screen13StartSceneArg
	.4byte doEnd__Q32og9newScreen12ObjSMenuContFPCQ26Screen11EndSceneArg
	.4byte doCreate__Q32og9newScreen12ObjSMenuContFP10JKRArchive
	.4byte doUpdateFadein__Q32og9newScreen12ObjSMenuBaseFv
	.4byte doUpdateFadeinFinish__Q32og9newScreen12ObjSMenuBaseFv
	.4byte doUpdate__Q32og9newScreen12ObjSMenuContFv
	.4byte doUpdateFinish__Q32og9newScreen12ObjSMenuContFv
	.4byte doUpdateFadeout__Q32og9newScreen12ObjSMenuContFv
	.4byte doUpdateFadeoutFinish__Q32og9newScreen12ObjSMenuBaseFv
	.4byte doDraw__Q32og9newScreen12ObjSMenuContFR8Graphics
	.4byte doConfirmSetScene__Q26Screen7ObjBaseFRQ26Screen11SetSceneArg
	.4byte doConfirmStartScene__Q26Screen7ObjBaseFPQ26Screen13StartSceneArg
	.4byte doConfirmEndScene__Q26Screen7ObjBaseFRPQ26Screen11EndSceneArg
	.4byte in_L__Q32og9newScreen12ObjSMenuContFv
	.4byte in_R__Q32og9newScreen12ObjSMenuContFv
	.4byte wait__Q32og9newScreen12ObjSMenuContFv
	.4byte out_L__Q32og9newScreen12ObjSMenuContFv
	.4byte out_R__Q32og9newScreen12ObjSMenuContFv
	.4byte loop__Q32og9newScreen12ObjSMenuBaseFv
	.4byte doUpdateCancelAction__Q32og9newScreen12ObjSMenuContFv
	.4byte doUpdateRAction__Q32og9newScreen12ObjSMenuContFv
	.4byte doUpdateLAction__Q32og9newScreen12ObjSMenuContFv
	.4byte updateFadeIn__Q32og9newScreen12ObjSMenuBaseFv
	.4byte updateFadeOut__Q32og9newScreen12ObjSMenuBaseFv
	.4byte commonUpdate__Q32og9newScreen12ObjSMenuContFv

.section .sbss # 0x80514D80 - 0x80516360
.balign 8
.global msVal__Q32og9newScreen12ObjSMenuCont
msVal__Q32og9newScreen12ObjSMenuCont:
	.skip 0x8

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
lbl_8051E090:
	.float 0.0
lbl_8051E094:
	.float 15.0
lbl_8051E098:
	.float 1.0

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global __ct__Q32og9newScreen12ObjSMenuContFPCc
__ct__Q32og9newScreen12ObjSMenuContFPCc:
/* 80330658 0032D598  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8033065C 0032D59C  7C 08 02 A6 */	mflr r0
/* 80330660 0032D5A0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80330664 0032D5A4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80330668 0032D5A8  7C 9F 23 78 */	mr r31, r4
/* 8033066C 0032D5AC  93 C1 00 08 */	stw r30, 8(r1)
/* 80330670 0032D5B0  7C 7E 1B 78 */	mr r30, r3
/* 80330674 0032D5B4  4B FE 5B 9D */	bl __ct__Q32og9newScreen12ObjSMenuBaseFv
/* 80330678 0032D5B8  3C 60 80 4E */	lis r3, __vt__Q32og9newScreen12ObjSMenuCont@ha
/* 8033067C 0032D5BC  38 00 00 00 */	li r0, 0
/* 80330680 0032D5C0  38 83 A3 D8 */	addi r4, r3, __vt__Q32og9newScreen12ObjSMenuCont@l
/* 80330684 0032D5C4  7F C3 F3 78 */	mr r3, r30
/* 80330688 0032D5C8  90 9E 00 00 */	stw r4, 0(r30)
/* 8033068C 0032D5CC  38 84 00 10 */	addi r4, r4, 0x10
/* 80330690 0032D5D0  90 9E 00 18 */	stw r4, 0x18(r30)
/* 80330694 0032D5D4  90 1E 00 A8 */	stw r0, 0xa8(r30)
/* 80330698 0032D5D8  90 1E 00 AC */	stw r0, 0xac(r30)
/* 8033069C 0032D5DC  90 1E 00 B0 */	stw r0, 0xb0(r30)
/* 803306A0 0032D5E0  93 FE 00 14 */	stw r31, 0x14(r30)
/* 803306A4 0032D5E4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803306A8 0032D5E8  83 C1 00 08 */	lwz r30, 8(r1)
/* 803306AC 0032D5EC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803306B0 0032D5F0  7C 08 03 A6 */	mtlr r0
/* 803306B4 0032D5F4  38 21 00 10 */	addi r1, r1, 0x10
/* 803306B8 0032D5F8  4E 80 00 20 */	blr 

.global __dt__Q32og9newScreen12ObjSMenuContFv
__dt__Q32og9newScreen12ObjSMenuContFv:
/* 803306BC 0032D5FC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803306C0 0032D600  7C 08 02 A6 */	mflr r0
/* 803306C4 0032D604  90 01 00 14 */	stw r0, 0x14(r1)
/* 803306C8 0032D608  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803306CC 0032D60C  7C 9F 23 78 */	mr r31, r4
/* 803306D0 0032D610  93 C1 00 08 */	stw r30, 8(r1)
/* 803306D4 0032D614  7C 7E 1B 79 */	or. r30, r3, r3
/* 803306D8 0032D618  41 82 00 8C */	beq .L_80330764
/* 803306DC 0032D61C  3C 80 80 4E */	lis r4, __vt__Q32og9newScreen12ObjSMenuCont@ha
/* 803306E0 0032D620  38 84 A3 D8 */	addi r4, r4, __vt__Q32og9newScreen12ObjSMenuCont@l
/* 803306E4 0032D624  90 9E 00 00 */	stw r4, 0(r30)
/* 803306E8 0032D628  38 04 00 10 */	addi r0, r4, 0x10
/* 803306EC 0032D62C  90 1E 00 18 */	stw r0, 0x18(r30)
/* 803306F0 0032D630  41 82 00 64 */	beq .L_80330754
/* 803306F4 0032D634  3C 80 80 4E */	lis r4, __vt__Q32og9newScreen12ObjSMenuBase@ha
/* 803306F8 0032D638  38 84 89 B0 */	addi r4, r4, __vt__Q32og9newScreen12ObjSMenuBase@l
/* 803306FC 0032D63C  90 9E 00 00 */	stw r4, 0(r30)
/* 80330700 0032D640  38 04 00 10 */	addi r0, r4, 0x10
/* 80330704 0032D644  90 1E 00 18 */	stw r0, 0x18(r30)
/* 80330708 0032D648  41 82 00 4C */	beq .L_80330754
/* 8033070C 0032D64C  3C 80 80 4F */	lis r4, __vt__Q26Screen7ObjBase@ha
/* 80330710 0032D650  38 84 D7 58 */	addi r4, r4, __vt__Q26Screen7ObjBase@l
/* 80330714 0032D654  90 9E 00 00 */	stw r4, 0(r30)
/* 80330718 0032D658  38 04 00 10 */	addi r0, r4, 0x10
/* 8033071C 0032D65C  90 1E 00 18 */	stw r0, 0x18(r30)
/* 80330720 0032D660  41 82 00 34 */	beq .L_80330754
/* 80330724 0032D664  3C 80 80 4E */	lis r4, __vt__Q26Screen8IObjBase@ha
/* 80330728 0032D668  38 84 82 40 */	addi r4, r4, __vt__Q26Screen8IObjBase@l
/* 8033072C 0032D66C  90 9E 00 00 */	stw r4, 0(r30)
/* 80330730 0032D670  38 04 00 10 */	addi r0, r4, 0x10
/* 80330734 0032D674  90 1E 00 18 */	stw r0, 0x18(r30)
/* 80330738 0032D678  48 0E 0E 99 */	bl del__5CNodeFv
/* 8033073C 0032D67C  38 7E 00 18 */	addi r3, r30, 0x18
/* 80330740 0032D680  38 80 00 00 */	li r4, 0
/* 80330744 0032D684  4B CE C8 F1 */	bl __dt__11JKRDisposerFv
/* 80330748 0032D688  7F C3 F3 78 */	mr r3, r30
/* 8033074C 0032D68C  38 80 00 00 */	li r4, 0
/* 80330750 0032D690  48 0E 0E 39 */	bl __dt__5CNodeFv
.L_80330754:
/* 80330754 0032D694  7F E0 07 35 */	extsh. r0, r31
/* 80330758 0032D698  40 81 00 0C */	ble .L_80330764
/* 8033075C 0032D69C  7F C3 F3 78 */	mr r3, r30
/* 80330760 0032D6A0  4B CF 39 55 */	bl __dl__FPv
.L_80330764:
/* 80330764 0032D6A4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80330768 0032D6A8  7F C3 F3 78 */	mr r3, r30
/* 8033076C 0032D6AC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80330770 0032D6B0  83 C1 00 08 */	lwz r30, 8(r1)
/* 80330774 0032D6B4  7C 08 03 A6 */	mtlr r0
/* 80330778 0032D6B8  38 21 00 10 */	addi r1, r1, 0x10
/* 8033077C 0032D6BC  4E 80 00 20 */	blr 

.global doCreate__Q32og9newScreen12ObjSMenuContFP10JKRArchive
doCreate__Q32og9newScreen12ObjSMenuContFP10JKRArchive:
/* 80330780 0032D6C0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80330784 0032D6C4  7C 08 02 A6 */	mflr r0
/* 80330788 0032D6C8  3C A0 80 49 */	lis r5, lbl_8048F7D0@ha
/* 8033078C 0032D6CC  90 01 00 24 */	stw r0, 0x24(r1)
/* 80330790 0032D6D0  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80330794 0032D6D4  3B E5 F7 D0 */	addi r31, r5, lbl_8048F7D0@l
/* 80330798 0032D6D8  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8033079C 0032D6DC  7C 9E 23 78 */	mr r30, r4
/* 803307A0 0032D6E0  93 A1 00 14 */	stw r29, 0x14(r1)
/* 803307A4 0032D6E4  7C 7D 1B 78 */	mr r29, r3
/* 803307A8 0032D6E8  48 12 38 01 */	bl getDispMember__Q26Screen7ObjBaseFv
/* 803307AC 0032D6EC  3C 80 00 4F */	lis r4, 0x004F4741@ha
/* 803307B0 0032D6F0  3C C0 43 4F */	lis r6, 0x434F4E54@ha
/* 803307B4 0032D6F4  3C A0 00 53 */	lis r5, 0x00534D5F@ha
/* 803307B8 0032D6F8  38 84 47 41 */	addi r4, r4, 0x004F4741@l
/* 803307BC 0032D6FC  38 C6 4E 54 */	addi r6, r6, 0x434F4E54@l
/* 803307C0 0032D700  38 A5 4D 5F */	addi r5, r5, 0x00534D5F@l
/* 803307C4 0032D704  4B FD EC FD */	bl getSubMember__Q32og6Screen14DispMemberBaseFUlUx
/* 803307C8 0032D708  90 7D 00 A8 */	stw r3, 0xa8(r29)
/* 803307CC 0032D70C  80 1D 00 A8 */	lwz r0, 0xa8(r29)
/* 803307D0 0032D710  28 00 00 00 */	cmplwi r0, 0
/* 803307D4 0032D714  40 82 00 40 */	bne .L_80330814
/* 803307D8 0032D718  38 60 00 C4 */	li r3, 0xc4
/* 803307DC 0032D71C  4B CF 36 C9 */	bl __nw__FUl
/* 803307E0 0032D720  7C 60 1B 79 */	or. r0, r3, r3
/* 803307E4 0032D724  41 82 00 0C */	beq .L_803307F0
/* 803307E8 0032D728  4B EE 4B 11 */	bl __ct__Q32og6Screen18DispMemberSMenuAllFv
/* 803307EC 0032D72C  7C 60 1B 78 */	mr r0, r3
.L_803307F0:
/* 803307F0 0032D730  3C 80 00 4F */	lis r4, 0x004F4741@ha
/* 803307F4 0032D734  3C C0 43 4F */	lis r6, 0x434F4E54@ha
/* 803307F8 0032D738  3C A0 00 53 */	lis r5, 0x00534D5F@ha
/* 803307FC 0032D73C  7C 03 03 78 */	mr r3, r0
/* 80330800 0032D740  38 84 47 41 */	addi r4, r4, 0x004F4741@l
/* 80330804 0032D744  38 C6 4E 54 */	addi r6, r6, 0x434F4E54@l
/* 80330808 0032D748  38 A5 4D 5F */	addi r5, r5, 0x00534D5F@l
/* 8033080C 0032D74C  4B FD EC B5 */	bl getSubMember__Q32og6Screen14DispMemberBaseFUlUx
/* 80330810 0032D750  90 7D 00 A8 */	stw r3, 0xa8(r29)
.L_80330814:
/* 80330814 0032D754  38 60 01 48 */	li r3, 0x148
/* 80330818 0032D758  4B CF 36 8D */	bl __nw__FUl
/* 8033081C 0032D75C  7C 60 1B 79 */	or. r0, r3, r3
/* 80330820 0032D760  41 82 00 0C */	beq .L_8033082C
/* 80330824 0032D764  48 10 45 89 */	bl __ct__Q29P2DScreen10Mgr_tuningFv
/* 80330828 0032D768  7C 60 1B 78 */	mr r0, r3
.L_8033082C:
/* 8033082C 0032D76C  90 1D 00 AC */	stw r0, 0xac(r29)
/* 80330830 0032D770  7F C6 F3 78 */	mr r6, r30
/* 80330834 0032D774  38 9F 00 14 */	addi r4, r31, 0x14
/* 80330838 0032D778  3C A0 01 04 */	lis r5, 0x104
/* 8033083C 0032D77C  80 7D 00 AC */	lwz r3, 0xac(r29)
/* 80330840 0032D780  4B D0 ED E5 */	bl set__9J2DScreenFPCcUlP10JKRArchive
/* 80330844 0032D784  38 60 00 1C */	li r3, 0x1c
/* 80330848 0032D788  4B CF 36 5D */	bl __nw__FUl
/* 8033084C 0032D78C  7C 60 1B 79 */	or. r0, r3, r3
/* 80330850 0032D790  41 82 00 10 */	beq .L_80330860
/* 80330854 0032D794  38 80 00 02 */	li r4, 2
/* 80330858 0032D798  4B FD 4C 01 */	bl __ct__Q32og6Screen9AnimGroupFi
/* 8033085C 0032D79C  7C 60 1B 78 */	mr r0, r3
.L_80330860:
/* 80330860 0032D7A0  90 1D 00 B0 */	stw r0, 0xb0(r29)
/* 80330864 0032D7A4  3C 60 80 51 */	lis r3, msBaseVal__Q32og9newScreen12ObjSMenuBase@ha
/* 80330868 0032D7A8  38 E3 3C F4 */	addi r7, r3, msBaseVal__Q32og9newScreen12ObjSMenuBase@l
/* 8033086C 0032D7AC  7F C4 F3 78 */	mr r4, r30
/* 80330870 0032D7B0  80 7D 00 B0 */	lwz r3, 0xb0(r29)
/* 80330874 0032D7B4  38 DF 00 2C */	addi r6, r31, 0x2c
/* 80330878 0032D7B8  80 BD 00 AC */	lwz r5, 0xac(r29)
/* 8033087C 0032D7BC  C0 27 00 00 */	lfs f1, 0(r7)
/* 80330880 0032D7C0  4B FD 51 19 */	bl registAnimGroupScreen__Q22og6ScreenFPQ32og6Screen9AnimGroupP10JKRArchiveP9J2DScreenPcf
/* 80330884 0032D7C4  3C 80 80 51 */	lis r4, msBaseVal__Q32og9newScreen12ObjSMenuBase@ha
/* 80330888 0032D7C8  80 7D 00 B0 */	lwz r3, 0xb0(r29)
/* 8033088C 0032D7CC  C0 24 3C F4 */	lfs f1, msBaseVal__Q32og9newScreen12ObjSMenuBase@l(r4)
/* 80330890 0032D7D0  7F C4 F3 78 */	mr r4, r30
/* 80330894 0032D7D4  80 BD 00 AC */	lwz r5, 0xac(r29)
/* 80330898 0032D7D8  38 DF 00 44 */	addi r6, r31, 0x44
/* 8033089C 0032D7DC  4B FD 50 FD */	bl registAnimGroupScreen__Q22og6ScreenFPQ32og6Screen9AnimGroupP10JKRArchiveP9J2DScreenPcf
/* 803308A0 0032D7E0  80 BD 00 AC */	lwz r5, 0xac(r29)
/* 803308A4 0032D7E4  7F A3 EB 78 */	mr r3, r29
/* 803308A8 0032D7E8  7F C4 F3 78 */	mr r4, r30
/* 803308AC 0032D7EC  4B FE 5A CD */	bl doCreateAfter__Q32og9newScreen12ObjSMenuBaseFP10JKRArchivePQ29P2DScreen3Mgr
/* 803308B0 0032D7F0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 803308B4 0032D7F4  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 803308B8 0032D7F8  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 803308BC 0032D7FC  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 803308C0 0032D800  7C 08 03 A6 */	mtlr r0
/* 803308C4 0032D804  38 21 00 20 */	addi r1, r1, 0x20
/* 803308C8 0032D808  4E 80 00 20 */	blr 

.global doUpdateLAction__Q32og9newScreen12ObjSMenuContFv
doUpdateLAction__Q32og9newScreen12ObjSMenuContFv:
/* 803308CC 0032D80C  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 803308D0 0032D810  7C 08 02 A6 */	mflr r0
/* 803308D4 0032D814  90 01 00 34 */	stw r0, 0x34(r1)
/* 803308D8 0032D818  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 803308DC 0032D81C  7C 7F 1B 78 */	mr r31, r3
/* 803308E0 0032D820  48 12 36 C9 */	bl getDispMember__Q26Screen7ObjBaseFv
/* 803308E4 0032D824  88 03 00 A5 */	lbz r0, 0xa5(r3)
/* 803308E8 0032D828  28 00 00 00 */	cmplwi r0, 0
/* 803308EC 0032D82C  41 82 00 50 */	beq .L_8033093C
/* 803308F0 0032D830  7F E3 FB 78 */	mr r3, r31
/* 803308F4 0032D834  48 12 36 B5 */	bl getDispMember__Q26Screen7ObjBaseFv
/* 803308F8 0032D838  3C A0 80 4E */	lis r5, __vt__Q26Screen12SceneArgBase@ha
/* 803308FC 0032D83C  3C 80 80 4E */	lis r4, __vt__Q26Screen11SetSceneArg@ha
/* 80330900 0032D840  38 05 84 68 */	addi r0, r5, __vt__Q26Screen12SceneArgBase@l
/* 80330904 0032D844  38 C0 27 1B */	li r6, 0x271b
/* 80330908 0032D848  90 01 00 18 */	stw r0, 0x18(r1)
/* 8033090C 0032D84C  38 E4 84 58 */	addi r7, r4, __vt__Q26Screen11SetSceneArg@l
/* 80330910 0032D850  38 A0 00 00 */	li r5, 0
/* 80330914 0032D854  38 00 00 01 */	li r0, 1
/* 80330918 0032D858  90 61 00 24 */	stw r3, 0x24(r1)
/* 8033091C 0032D85C  7F E3 FB 78 */	mr r3, r31
/* 80330920 0032D860  38 81 00 18 */	addi r4, r1, 0x18
/* 80330924 0032D864  90 E1 00 18 */	stw r7, 0x18(r1)
/* 80330928 0032D868  90 C1 00 1C */	stw r6, 0x1c(r1)
/* 8033092C 0032D86C  98 A1 00 20 */	stb r5, 0x20(r1)
/* 80330930 0032D870  98 01 00 21 */	stb r0, 0x21(r1)
/* 80330934 0032D874  4B FE 5E C5 */	bl jump_L__Q32og9newScreen12ObjSMenuBaseFRQ26Screen11SetSceneArg
/* 80330938 0032D878  48 00 00 4C */	b .L_80330984
.L_8033093C:
/* 8033093C 0032D87C  7F E3 FB 78 */	mr r3, r31
/* 80330940 0032D880  48 12 36 69 */	bl getDispMember__Q26Screen7ObjBaseFv
/* 80330944 0032D884  3C A0 80 4E */	lis r5, __vt__Q26Screen12SceneArgBase@ha
/* 80330948 0032D888  3C 80 80 4E */	lis r4, __vt__Q26Screen11SetSceneArg@ha
/* 8033094C 0032D88C  38 05 84 68 */	addi r0, r5, __vt__Q26Screen12SceneArgBase@l
/* 80330950 0032D890  38 C0 27 1A */	li r6, 0x271a
/* 80330954 0032D894  90 01 00 08 */	stw r0, 8(r1)
/* 80330958 0032D898  38 E4 84 58 */	addi r7, r4, __vt__Q26Screen11SetSceneArg@l
/* 8033095C 0032D89C  38 A0 00 00 */	li r5, 0
/* 80330960 0032D8A0  38 00 00 01 */	li r0, 1
/* 80330964 0032D8A4  90 61 00 14 */	stw r3, 0x14(r1)
/* 80330968 0032D8A8  7F E3 FB 78 */	mr r3, r31
/* 8033096C 0032D8AC  38 81 00 08 */	addi r4, r1, 8
/* 80330970 0032D8B0  90 E1 00 08 */	stw r7, 8(r1)
/* 80330974 0032D8B4  90 C1 00 0C */	stw r6, 0xc(r1)
/* 80330978 0032D8B8  98 A1 00 10 */	stb r5, 0x10(r1)
/* 8033097C 0032D8BC  98 01 00 11 */	stb r0, 0x11(r1)
/* 80330980 0032D8C0  4B FE 5E 79 */	bl jump_L__Q32og9newScreen12ObjSMenuBaseFRQ26Screen11SetSceneArg
.L_80330984:
/* 80330984 0032D8C4  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80330988 0032D8C8  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 8033098C 0032D8CC  7C 08 03 A6 */	mtlr r0
/* 80330990 0032D8D0  38 21 00 30 */	addi r1, r1, 0x30
/* 80330994 0032D8D4  4E 80 00 20 */	blr 

.global doUpdateRAction__Q32og9newScreen12ObjSMenuContFv
doUpdateRAction__Q32og9newScreen12ObjSMenuContFv:
/* 80330998 0032D8D8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8033099C 0032D8DC  7C 08 02 A6 */	mflr r0
/* 803309A0 0032D8E0  90 01 00 24 */	stw r0, 0x24(r1)
/* 803309A4 0032D8E4  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 803309A8 0032D8E8  7C 7F 1B 78 */	mr r31, r3
/* 803309AC 0032D8EC  48 12 35 FD */	bl getDispMember__Q26Screen7ObjBaseFv
/* 803309B0 0032D8F0  3C A0 80 4E */	lis r5, __vt__Q26Screen12SceneArgBase@ha
/* 803309B4 0032D8F4  3C 80 80 4E */	lis r4, __vt__Q26Screen11SetSceneArg@ha
/* 803309B8 0032D8F8  38 05 84 68 */	addi r0, r5, __vt__Q26Screen12SceneArgBase@l
/* 803309BC 0032D8FC  38 C0 27 1C */	li r6, 0x271c
/* 803309C0 0032D900  90 01 00 08 */	stw r0, 8(r1)
/* 803309C4 0032D904  38 E4 84 58 */	addi r7, r4, __vt__Q26Screen11SetSceneArg@l
/* 803309C8 0032D908  38 A0 00 00 */	li r5, 0
/* 803309CC 0032D90C  38 00 00 01 */	li r0, 1
/* 803309D0 0032D910  90 61 00 14 */	stw r3, 0x14(r1)
/* 803309D4 0032D914  7F E3 FB 78 */	mr r3, r31
/* 803309D8 0032D918  38 81 00 08 */	addi r4, r1, 8
/* 803309DC 0032D91C  90 E1 00 08 */	stw r7, 8(r1)
/* 803309E0 0032D920  90 C1 00 0C */	stw r6, 0xc(r1)
/* 803309E4 0032D924  98 A1 00 10 */	stb r5, 0x10(r1)
/* 803309E8 0032D928  98 01 00 11 */	stb r0, 0x11(r1)
/* 803309EC 0032D92C  4B FE 5E F1 */	bl jump_R__Q32og9newScreen12ObjSMenuBaseFRQ26Screen11SetSceneArg
/* 803309F0 0032D930  80 01 00 24 */	lwz r0, 0x24(r1)
/* 803309F4 0032D934  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 803309F8 0032D938  7C 08 03 A6 */	mtlr r0
/* 803309FC 0032D93C  38 21 00 20 */	addi r1, r1, 0x20
/* 80330A00 0032D940  4E 80 00 20 */	blr 

.global commonUpdate__Q32og9newScreen12ObjSMenuContFv
commonUpdate__Q32og9newScreen12ObjSMenuContFv:
/* 80330A04 0032D944  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80330A08 0032D948  7C 08 02 A6 */	mflr r0
/* 80330A0C 0032D94C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80330A10 0032D950  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80330A14 0032D954  7C 7F 1B 78 */	mr r31, r3
/* 80330A18 0032D958  4B FE 5B 25 */	bl commonUpdateBase__Q32og9newScreen12ObjSMenuBaseFv
/* 80330A1C 0032D95C  38 6D 98 40 */	addi r3, r13, msVal__Q32og9newScreen12ObjSMenuCont@sda21
/* 80330A20 0032D960  C0 2D 98 40 */	lfs f1, msVal__Q32og9newScreen12ObjSMenuCont@sda21(r13)
/* 80330A24 0032D964  C0 43 00 04 */	lfs f2, 4(r3)
/* 80330A28 0032D968  7F E3 FB 78 */	mr r3, r31
/* 80330A2C 0032D96C  4B FE 59 0D */	bl setSMenuScale__Q32og9newScreen12ObjSMenuBaseFff
/* 80330A30 0032D970  80 7F 00 B0 */	lwz r3, 0xb0(r31)
/* 80330A34 0032D974  4B FD 4A B5 */	bl update__Q32og6Screen9AnimGroupFv
/* 80330A38 0032D978  C0 7F 00 40 */	lfs f3, 0x40(r31)
/* 80330A3C 0032D97C  C0 42 24 3C */	lfs f2, mstTuningTransX__Q29P2DScreen10Mgr_tuning@sda21(r2)
/* 80330A40 0032D980  C0 22 FD 30 */	lfs f1, lbl_8051E090@sda21(r2)
/* 80330A44 0032D984  C0 02 24 40 */	lfs f0, mstTuningTransY__Q29P2DScreen10Mgr_tuning@sda21(r2)
/* 80330A48 0032D988  EC 43 10 2A */	fadds f2, f3, f2
/* 80330A4C 0032D98C  80 7F 00 AC */	lwz r3, 0xac(r31)
/* 80330A50 0032D990  EC 01 00 2A */	fadds f0, f1, f0
/* 80330A54 0032D994  D0 43 01 40 */	stfs f2, 0x140(r3)
/* 80330A58 0032D998  D0 03 01 44 */	stfs f0, 0x144(r3)
/* 80330A5C 0032D99C  80 7F 00 AC */	lwz r3, 0xac(r31)
/* 80330A60 0032D9A0  81 83 00 00 */	lwz r12, 0(r3)
/* 80330A64 0032D9A4  81 8C 00 30 */	lwz r12, 0x30(r12)
/* 80330A68 0032D9A8  7D 89 03 A6 */	mtctr r12
/* 80330A6C 0032D9AC  4E 80 04 21 */	bctrl 
/* 80330A70 0032D9B0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80330A74 0032D9B4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80330A78 0032D9B8  7C 08 03 A6 */	mtlr r0
/* 80330A7C 0032D9BC  38 21 00 10 */	addi r1, r1, 0x10
/* 80330A80 0032D9C0  4E 80 00 20 */	blr 

.global doUpdate__Q32og9newScreen12ObjSMenuContFv
doUpdate__Q32og9newScreen12ObjSMenuContFv:
/* 80330A84 0032D9C4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80330A88 0032D9C8  7C 08 02 A6 */	mflr r0
/* 80330A8C 0032D9CC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80330A90 0032D9D0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80330A94 0032D9D4  7C 7F 1B 78 */	mr r31, r3
/* 80330A98 0032D9D8  81 83 00 00 */	lwz r12, 0(r3)
/* 80330A9C 0032D9DC  81 8C 00 A4 */	lwz r12, 0xa4(r12)
/* 80330AA0 0032D9E0  7D 89 03 A6 */	mtctr r12
/* 80330AA4 0032D9E4  4E 80 04 21 */	bctrl 
/* 80330AA8 0032D9E8  7F E3 FB 78 */	mr r3, r31
/* 80330AAC 0032D9EC  4B FE 5A B1 */	bl doUpdate__Q32og9newScreen12ObjSMenuBaseFv
/* 80330AB0 0032D9F0  7C 60 1B 78 */	mr r0, r3
/* 80330AB4 0032D9F4  80 7F 00 AC */	lwz r3, 0xac(r31)
/* 80330AB8 0032D9F8  7C 1F 03 78 */	mr r31, r0
/* 80330ABC 0032D9FC  4B D1 00 71 */	bl animation__9J2DScreenFv
/* 80330AC0 0032DA00  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80330AC4 0032DA04  7F E3 FB 78 */	mr r3, r31
/* 80330AC8 0032DA08  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80330ACC 0032DA0C  7C 08 03 A6 */	mtlr r0
/* 80330AD0 0032DA10  38 21 00 10 */	addi r1, r1, 0x10
/* 80330AD4 0032DA14  4E 80 00 20 */	blr 

.global doDraw__Q32og9newScreen12ObjSMenuContFR8Graphics
doDraw__Q32og9newScreen12ObjSMenuContFR8Graphics:
/* 80330AD8 0032DA18  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80330ADC 0032DA1C  7C 08 02 A6 */	mflr r0
/* 80330AE0 0032DA20  90 01 00 24 */	stw r0, 0x24(r1)
/* 80330AE4 0032DA24  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80330AE8 0032DA28  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80330AEC 0032DA2C  7C 9E 23 78 */	mr r30, r4
/* 80330AF0 0032DA30  3B FE 01 90 */	addi r31, r30, 0x190
/* 80330AF4 0032DA34  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80330AF8 0032DA38  7C 7D 1B 78 */	mr r29, r3
/* 80330AFC 0032DA3C  7F E3 FB 78 */	mr r3, r31
/* 80330B00 0032DA40  81 9F 00 00 */	lwz r12, 0(r31)
/* 80330B04 0032DA44  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80330B08 0032DA48  7D 89 03 A6 */	mtctr r12
/* 80330B0C 0032DA4C  4E 80 04 21 */	bctrl 
/* 80330B10 0032DA50  80 7D 00 AC */	lwz r3, 0xac(r29)
/* 80330B14 0032DA54  28 03 00 00 */	cmplwi r3, 0
/* 80330B18 0032DA58  41 82 00 1C */	beq .L_80330B34
/* 80330B1C 0032DA5C  81 83 00 00 */	lwz r12, 0(r3)
/* 80330B20 0032DA60  7F C4 F3 78 */	mr r4, r30
/* 80330B24 0032DA64  7F E5 FB 78 */	mr r5, r31
/* 80330B28 0032DA68  81 8C 00 9C */	lwz r12, 0x9c(r12)
/* 80330B2C 0032DA6C  7D 89 03 A6 */	mtctr r12
/* 80330B30 0032DA70  4E 80 04 21 */	bctrl 
.L_80330B34:
/* 80330B34 0032DA74  7F A3 EB 78 */	mr r3, r29
/* 80330B38 0032DA78  7F C4 F3 78 */	mr r4, r30
/* 80330B3C 0032DA7C  4B FE 63 51 */	bl drawYaji__Q32og9newScreen12ObjSMenuBaseFR8Graphics
/* 80330B40 0032DA80  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80330B44 0032DA84  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80330B48 0032DA88  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80330B4C 0032DA8C  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80330B50 0032DA90  7C 08 03 A6 */	mtlr r0
/* 80330B54 0032DA94  38 21 00 20 */	addi r1, r1, 0x20
/* 80330B58 0032DA98  4E 80 00 20 */	blr 

.global in_L__Q32og9newScreen12ObjSMenuContFv
in_L__Q32og9newScreen12ObjSMenuContFv:
/* 80330B5C 0032DA9C  38 00 00 00 */	li r0, 0
/* 80330B60 0032DAA0  C0 02 FD 34 */	lfs f0, lbl_8051E094@sda21(r2)
/* 80330B64 0032DAA4  90 03 00 38 */	stw r0, 0x38(r3)
/* 80330B68 0032DAA8  D0 03 00 4C */	stfs f0, 0x4c(r3)
/* 80330B6C 0032DAAC  4E 80 00 20 */	blr 

.global in_R__Q32og9newScreen12ObjSMenuContFv
in_R__Q32og9newScreen12ObjSMenuContFv:
/* 80330B70 0032DAB0  38 00 00 01 */	li r0, 1
/* 80330B74 0032DAB4  C0 02 FD 34 */	lfs f0, lbl_8051E094@sda21(r2)
/* 80330B78 0032DAB8  90 03 00 38 */	stw r0, 0x38(r3)
/* 80330B7C 0032DABC  D0 03 00 4C */	stfs f0, 0x4c(r3)
/* 80330B80 0032DAC0  4E 80 00 20 */	blr 

.global wait__Q32og9newScreen12ObjSMenuContFv
wait__Q32og9newScreen12ObjSMenuContFv:
/* 80330B84 0032DAC4  38 00 00 04 */	li r0, 4
/* 80330B88 0032DAC8  90 03 00 38 */	stw r0, 0x38(r3)
/* 80330B8C 0032DACC  4E 80 00 20 */	blr 

.global out_L__Q32og9newScreen12ObjSMenuContFv
out_L__Q32og9newScreen12ObjSMenuContFv:
/* 80330B90 0032DAD0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80330B94 0032DAD4  7C 08 02 A6 */	mflr r0
/* 80330B98 0032DAD8  90 01 00 14 */	stw r0, 0x14(r1)
/* 80330B9C 0032DADC  38 00 00 02 */	li r0, 2
/* 80330BA0 0032DAE0  90 03 00 38 */	stw r0, 0x38(r3)
/* 80330BA4 0032DAE4  80 6D 97 A8 */	lwz r3, ogSound__2og@sda21(r13)
/* 80330BA8 0032DAE8  4B FD C0 A1 */	bl setSMenuLR__Q22og5SoundFv
/* 80330BAC 0032DAEC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80330BB0 0032DAF0  7C 08 03 A6 */	mtlr r0
/* 80330BB4 0032DAF4  38 21 00 10 */	addi r1, r1, 0x10
/* 80330BB8 0032DAF8  4E 80 00 20 */	blr 

.global out_R__Q32og9newScreen12ObjSMenuContFv
out_R__Q32og9newScreen12ObjSMenuContFv:
/* 80330BBC 0032DAFC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80330BC0 0032DB00  7C 08 02 A6 */	mflr r0
/* 80330BC4 0032DB04  90 01 00 14 */	stw r0, 0x14(r1)
/* 80330BC8 0032DB08  38 00 00 03 */	li r0, 3
/* 80330BCC 0032DB0C  90 03 00 38 */	stw r0, 0x38(r3)
/* 80330BD0 0032DB10  80 6D 97 A8 */	lwz r3, ogSound__2og@sda21(r13)
/* 80330BD4 0032DB14  4B FD C0 75 */	bl setSMenuLR__Q22og5SoundFv
/* 80330BD8 0032DB18  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80330BDC 0032DB1C  7C 08 03 A6 */	mtlr r0
/* 80330BE0 0032DB20  38 21 00 10 */	addi r1, r1, 0x10
/* 80330BE4 0032DB24  4E 80 00 20 */	blr 

.global doStart__Q32og9newScreen12ObjSMenuContFPCQ26Screen13StartSceneArg
doStart__Q32og9newScreen12ObjSMenuContFPCQ26Screen13StartSceneArg:
/* 80330BE8 0032DB28  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80330BEC 0032DB2C  7C 08 02 A6 */	mflr r0
/* 80330BF0 0032DB30  C0 22 FD 30 */	lfs f1, lbl_8051E090@sda21(r2)
/* 80330BF4 0032DB34  90 01 00 14 */	stw r0, 0x14(r1)
/* 80330BF8 0032DB38  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80330BFC 0032DB3C  7C 9F 23 78 */	mr r31, r4
/* 80330C00 0032DB40  93 C1 00 08 */	stw r30, 8(r1)
/* 80330C04 0032DB44  7C 7E 1B 78 */	mr r30, r3
/* 80330C08 0032DB48  80 63 00 B0 */	lwz r3, 0xb0(r3)
/* 80330C0C 0032DB4C  4B FD 4B 55 */	bl setFrame__Q32og6Screen9AnimGroupFf
/* 80330C10 0032DB50  80 7E 00 B0 */	lwz r3, 0xb0(r30)
/* 80330C14 0032DB54  38 80 00 01 */	li r4, 1
/* 80330C18 0032DB58  4B FD 4A ED */	bl setRepeat__Q32og6Screen9AnimGroupFb
/* 80330C1C 0032DB5C  80 7E 00 B0 */	lwz r3, 0xb0(r30)
/* 80330C20 0032DB60  C0 22 FD 38 */	lfs f1, lbl_8051E098@sda21(r2)
/* 80330C24 0032DB64  4B FD 4A 85 */	bl setSpeed__Q32og6Screen9AnimGroupFf
/* 80330C28 0032DB68  80 7E 00 B0 */	lwz r3, 0xb0(r30)
/* 80330C2C 0032DB6C  4B FD 4C 8D */	bl start__Q32og6Screen9AnimGroupFv
/* 80330C30 0032DB70  3C 60 00 36 */	lis r3, 0x00363035@ha
/* 80330C34 0032DB74  3C C0 32 5F */	lis r6, 0x325F3030@ha
/* 80330C38 0032DB78  38 A3 30 35 */	addi r5, r3, 0x00363035@l
/* 80330C3C 0032DB7C  3D 00 30 5F */	lis r8, 0x305F3030@ha
/* 80330C40 0032DB80  3C 80 31 5F */	lis r4, 0x315F3030@ha
/* 80330C44 0032DB84  7F C3 F3 78 */	mr r3, r30
/* 80330C48 0032DB88  7C A7 2B 78 */	mr r7, r5
/* 80330C4C 0032DB8C  7C A9 2B 78 */	mr r9, r5
/* 80330C50 0032DB90  38 C6 30 30 */	addi r6, r6, 0x325F3030@l
/* 80330C54 0032DB94  39 08 30 30 */	addi r8, r8, 0x305F3030@l
/* 80330C58 0032DB98  39 44 30 30 */	addi r10, r4, 0x315F3030@l
/* 80330C5C 0032DB9C  4B FE 5E B5 */	bl setYajiName__Q32og9newScreen12ObjSMenuBaseFUxUxUx
/* 80330C60 0032DBA0  7F C3 F3 78 */	mr r3, r30
/* 80330C64 0032DBA4  4B FE 5F 19 */	bl stopYaji__Q32og9newScreen12ObjSMenuBaseFv
/* 80330C68 0032DBA8  7F C3 F3 78 */	mr r3, r30
/* 80330C6C 0032DBAC  7F E4 FB 78 */	mr r4, r31
/* 80330C70 0032DBB0  4B FE 5D 51 */	bl start_LR__Q32og9newScreen12ObjSMenuBaseFPCQ26Screen13StartSceneArg
/* 80330C74 0032DBB4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80330C78 0032DBB8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80330C7C 0032DBBC  83 C1 00 08 */	lwz r30, 8(r1)
/* 80330C80 0032DBC0  7C 08 03 A6 */	mtlr r0
/* 80330C84 0032DBC4  38 21 00 10 */	addi r1, r1, 0x10
/* 80330C88 0032DBC8  4E 80 00 20 */	blr 

.global doEnd__Q32og9newScreen12ObjSMenuContFPCQ26Screen11EndSceneArg
doEnd__Q32og9newScreen12ObjSMenuContFPCQ26Screen11EndSceneArg:
/* 80330C8C 0032DBCC  38 60 00 01 */	li r3, 1
/* 80330C90 0032DBD0  4E 80 00 20 */	blr 

.global doUpdateFinish__Q32og9newScreen12ObjSMenuContFv
doUpdateFinish__Q32og9newScreen12ObjSMenuContFv:
/* 80330C94 0032DBD4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80330C98 0032DBD8  7C 08 02 A6 */	mflr r0
/* 80330C9C 0032DBDC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80330CA0 0032DBE0  4B FE 59 E9 */	bl doUpdateFinish__Q32og9newScreen12ObjSMenuBaseFv
/* 80330CA4 0032DBE4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80330CA8 0032DBE8  7C 08 03 A6 */	mtlr r0
/* 80330CAC 0032DBEC  38 21 00 10 */	addi r1, r1, 0x10
/* 80330CB0 0032DBF0  4E 80 00 20 */	blr 

.global doUpdateFadeout__Q32og9newScreen12ObjSMenuContFv
doUpdateFadeout__Q32og9newScreen12ObjSMenuContFv:
/* 80330CB4 0032DBF4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80330CB8 0032DBF8  7C 08 02 A6 */	mflr r0
/* 80330CBC 0032DBFC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80330CC0 0032DC00  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80330CC4 0032DC04  7C 7F 1B 78 */	mr r31, r3
/* 80330CC8 0032DC08  81 83 00 00 */	lwz r12, 0(r3)
/* 80330CCC 0032DC0C  81 8C 00 A4 */	lwz r12, 0xa4(r12)
/* 80330CD0 0032DC10  7D 89 03 A6 */	mtctr r12
/* 80330CD4 0032DC14  4E 80 04 21 */	bctrl 
/* 80330CD8 0032DC18  7F E3 FB 78 */	mr r3, r31
/* 80330CDC 0032DC1C  81 9F 00 00 */	lwz r12, 0(r31)
/* 80330CE0 0032DC20  81 8C 00 A0 */	lwz r12, 0xa0(r12)
/* 80330CE4 0032DC24  7D 89 03 A6 */	mtctr r12
/* 80330CE8 0032DC28  4E 80 04 21 */	bctrl 
/* 80330CEC 0032DC2C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80330CF0 0032DC30  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80330CF4 0032DC34  7C 08 03 A6 */	mtlr r0
/* 80330CF8 0032DC38  38 21 00 10 */	addi r1, r1, 0x10
/* 80330CFC 0032DC3C  4E 80 00 20 */	blr 

.global doUpdateCancelAction__Q32og9newScreen12ObjSMenuContFv
doUpdateCancelAction__Q32og9newScreen12ObjSMenuContFv:
/* 80330D00 0032DC40  4E 80 00 20 */	blr 

__sinit_ogObjSMenuCont_cpp: # static initializer
/* 80330D04 0032DC44  C0 02 FD 38 */	lfs f0, lbl_8051E098@sda21(r2)
/* 80330D08 0032DC48  38 6D 98 40 */	addi r3, r13, msVal__Q32og9newScreen12ObjSMenuCont@sda21
/* 80330D0C 0032DC4C  D0 0D 98 40 */	stfs f0, msVal__Q32og9newScreen12ObjSMenuCont@sda21(r13)
/* 80330D10 0032DC50  D0 03 00 04 */	stfs f0, 4(r3)
/* 80330D14 0032DC54  4E 80 00 20 */	blr 

.global "@24@__dt__Q32og9newScreen12ObjSMenuContFv"
"@24@__dt__Q32og9newScreen12ObjSMenuContFv":
/* 80330D18 0032DC58  38 63 FF E8 */	addi r3, r3, -24
/* 80330D1C 0032DC5C  4B FF F9 A0 */	b __dt__Q32og9newScreen12ObjSMenuContFv
