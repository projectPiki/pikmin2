.include "macros.inc"
.section .ctors, "wa"  # 0x80472F00 - 0x804732C0
lbl_constructor:
.4byte __sinit_ogObjSMenuMap_cpp

.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
.obj lbl_8048E1A8, local
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj lbl_8048E1A8
.balign 4
.obj lbl_8048E1B4, local
	.asciz "ogObjSMenuMap.cpp"
.endobj lbl_8048E1B4
.balign 4
.obj lbl_8048E1C8, local
	.asciz "SMenuMap : randMapMgr is not found!!!\n"
.endobj lbl_8048E1C8
.balign 4
.obj lbl_8048E1F0, local
	.asciz "map_tutorial.bti"
.endobj lbl_8048E1F0
.balign 4
.obj lbl_8048E204, local
	.asciz "map_forest.bti"
.endobj lbl_8048E204
.balign 4
.obj lbl_8048E214, local
	.asciz "map_yakushima.bti"
.endobj lbl_8048E214
.balign 4
.obj lbl_8048E228, local
	.asciz "map_last.bti"
.endobj lbl_8048E228
.balign 8
.obj lbl_8048E238, local # u64 literals
	.8byte 0x006F72696D615F6C
	.8byte 0x00006C756A695F6C
	.8byte 0x74616B6172615F6C
.endobj lbl_8048E238
.balign 4
.obj lbl_8048E250, local
	.asciz "map_icon.blo"
.endobj lbl_8048E250
.balign 4
.obj lbl_8048E260, local
	.asciz "Radar type ERR!! (%d)\n"
.endobj lbl_8048E260
.balign 4
.obj lbl_8048E278, local
	.asciz "cave name number is overflow!!\n"
.endobj lbl_8048E278
.balign 4
.obj lbl_8048E298, local
	.asciz "s_menu_map_l.blo"
.endobj lbl_8048E298
.balign 4
.obj lbl_8048E2AC, local
	.asciz "s_menu_map_l.btk"
.endobj lbl_8048E2AC
.balign 4
.obj lbl_8048E2C0, local
	.asciz "s_menu_map_l_02.btk"
.endobj lbl_8048E2C0
.balign 4
.obj lbl_8048E2D4, local
	.asciz "s_menu_map_l_03.btk"
.endobj lbl_8048E2D4
.balign 4
.obj lbl_8048E2E8, local
	.asciz "screenObj.h"
.endobj lbl_8048E2E8
.balign 4
.obj lbl_8048E2F4, local
	.asciz "P2Assert"
.endobj lbl_8048E2F4

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.obj govNAN___Q24Game5P2JST, local
	.float 0.0
	.float 0.0
	.float 0.0
.endobj govNAN___Q24Game5P2JST
.balign 8
.obj map_icon_tag__Q22og9newScreen, global
	.8byte 0x6F6E69796F6E5F72
	.8byte 0x6F6E69796F6E5F62
	.8byte 0x6F6E69796F6E5F79
	.8byte 0x000070696B695F72
	.8byte 0x0070696B695F5F62
	.8byte 0x000070696B695F79
	.8byte 0x0070696B695F626C
	.8byte 0x000070696B695F77
	.8byte 0x0070696B695F6672
	.8byte 0x0070696B695F6D65
	.8byte 0x006B616E6B657475
	.8byte 0x0000000063617665
	.8byte 0x0000000000706F74
	.8byte 0x006C756A695F6273
	.8byte 0x6F72696D615F6273
	.8byte 0x000000000075666F
	.8byte 0x74616B61725F6273
	.8byte 0x74616B61725F6273
	.8byte 0x74616B61725F6273
	.8byte 0x0000000063617665
	.8byte 0x0000636F6D705F63
	.8byte 0x0000000063617665
.endobj map_icon_tag__Q22og9newScreen
.obj __vt__Q26Screen11SetSceneArg, weak
	.4byte 0
	.4byte 0
	.4byte getSceneType__Q26Screen11SetSceneArgCFv
	.4byte getClassSize__Q26Screen11SetSceneArgFv
.endobj __vt__Q26Screen11SetSceneArg
.obj __vt__Q26Screen12SceneArgBase, weak
	.4byte 0
	.4byte 0
	.4byte getSceneType__Q26Screen12SceneArgBaseCFv
	.4byte 0
.endobj __vt__Q26Screen12SceneArgBase
.obj __vt__Q32og9newScreen11ObjSMenuMap, global
	.4byte 0
	.4byte 0
	.4byte __dt__Q32og9newScreen11ObjSMenuMapFv
	.4byte getChildCount__5CNodeFv
	.4byte 0
	.4byte 0
	.4byte "@24@__dt__Q32og9newScreen11ObjSMenuMapFv"
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
	.4byte doStart__Q32og9newScreen11ObjSMenuMapFPCQ26Screen13StartSceneArg
	.4byte doEnd__Q32og9newScreen11ObjSMenuMapFPCQ26Screen11EndSceneArg
	.4byte doCreate__Q32og9newScreen11ObjSMenuMapFP10JKRArchive
	.4byte doUpdateFadein__Q32og9newScreen12ObjSMenuBaseFv
	.4byte doUpdateFadeinFinish__Q32og9newScreen12ObjSMenuBaseFv
	.4byte doUpdate__Q32og9newScreen11ObjSMenuMapFv
	.4byte doUpdateFinish__Q32og9newScreen11ObjSMenuMapFv
	.4byte doUpdateFadeout__Q32og9newScreen11ObjSMenuMapFv
	.4byte doUpdateFadeoutFinish__Q32og9newScreen12ObjSMenuBaseFv
	.4byte doDraw__Q32og9newScreen11ObjSMenuMapFR8Graphics
	.4byte doConfirmSetScene__Q26Screen7ObjBaseFRQ26Screen11SetSceneArg
	.4byte doConfirmStartScene__Q26Screen7ObjBaseFPQ26Screen13StartSceneArg
	.4byte doConfirmEndScene__Q26Screen7ObjBaseFRPQ26Screen11EndSceneArg
	.4byte in_L__Q32og9newScreen11ObjSMenuMapFv
	.4byte in_R__Q32og9newScreen11ObjSMenuMapFv
	.4byte wait__Q32og9newScreen11ObjSMenuMapFv
	.4byte out_L__Q32og9newScreen11ObjSMenuMapFv
	.4byte out_R__Q32og9newScreen11ObjSMenuMapFv
	.4byte loop__Q32og9newScreen12ObjSMenuBaseFv
	.4byte doUpdateCancelAction__Q32og9newScreen11ObjSMenuMapFv
	.4byte doUpdateRAction__Q32og9newScreen11ObjSMenuMapFv
	.4byte doUpdateLAction__Q32og9newScreen11ObjSMenuMapFv
	.4byte updateFadeIn__Q32og9newScreen12ObjSMenuBaseFv
	.4byte updateFadeOut__Q32og9newScreen12ObjSMenuBaseFv
	.4byte commonUpdate__Q32og9newScreen11ObjSMenuMapFv
.endobj __vt__Q32og9newScreen11ObjSMenuMap

.section .bss  # 0x804EFC20 - 0x8051467C
# ogObjSMenuMap.cpp
.comm msVal__Q32og9newScreen11ObjSMenuMap, 0x50, 4

.section .sbss # 0x80514D80 - 0x80516360
.balign 8
.obj gu32NAN___Q24Game5P2JST, local
	.skip 0x4
.endobj gu32NAN___Q24Game5P2JST
.obj gfNAN___Q24Game5P2JST, local
	.skip 0x4
.endobj gfNAN___Q24Game5P2JST
.obj nv_frame$4824, local
	.skip 0x4
.endobj nv_frame$4824
.obj init$4825, local
	.skip 0x1
.endobj init$4825

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
.obj lbl_8051D740, local
	.float 0.0
.endobj lbl_8051D740
.obj lbl_8051D744, local
	.float 1.0
.endobj lbl_8051D744
.obj lbl_8051D748, local
	.float -0.2
.endobj lbl_8051D748
.obj lbl_8051D74C, local
	.float 0.047
.endobj lbl_8051D74C
.obj lbl_8051D750, local
	.float -0.6
.endobj lbl_8051D750
.obj lbl_8051D754, local
	.float 1400.0
.endobj lbl_8051D754
.obj lbl_8051D758, local
	.float 4705.6
.endobj lbl_8051D758
.obj lbl_8051D75C, local
	.float 24.5
.endobj lbl_8051D75C
.obj lbl_8051D760, local
	.float 0.5
.endobj lbl_8051D760
.obj lbl_8051D764, local
	.float 0.058
.endobj lbl_8051D764
.obj lbl_8051D768, local
	.float -8.85
.endobj lbl_8051D768
.balign 8
.obj lbl_8051D770, local
	.8byte 0x4330000080000000
.endobj lbl_8051D770
.obj lbl_8051D778, local
	.float 30.0
.endobj lbl_8051D778
.obj lbl_8051D77C, local
	.float 40.0
.endobj lbl_8051D77C
.obj lbl_8051D780, local
	.float 10.0
.endobj lbl_8051D780
.balign 4
.obj lbl_8051D784, local
	.asciz ""
.endobj lbl_8051D784
.balign 4
.obj lbl_8051D788, local
	.float 24.0
.endobj lbl_8051D788
.obj lbl_8051D78C, local # tau
	.float 6.2831855
.endobj lbl_8051D78C
.obj lbl_8051D790, local
	.float 360.0
.endobj lbl_8051D790
.obj lbl_8051D794, local
	.float 325.9493
.endobj lbl_8051D794
.obj lbl_8051D798, local
	.float -325.9493
.endobj lbl_8051D798
.obj lbl_8051D79C, local
	.float -1.0
.endobj lbl_8051D79C
.obj lbl_8051D7A0, local
	.float 0.1
.endobj lbl_8051D7A0
.obj lbl_8051D7A4, local
	.float -0.1
.endobj lbl_8051D7A4
.obj lbl_8051D7A8, local
	.float 0.4
.endobj lbl_8051D7A8
.obj lbl_8051D7AC, local
	.float -0.4
.endobj lbl_8051D7AC
.obj lbl_8051D7B0, local
	.float 0.03
.endobj lbl_8051D7B0
.balign 8
.obj lbl_8051D7B8, local
	.double 255.0
.endobj lbl_8051D7B8
.balign 8
.obj lbl_8051D7C0, local
	.double 1.0
.endobj lbl_8051D7C0
.obj lbl_8051D7C8, local
	.float 180.0
.endobj lbl_8051D7C8
.obj lbl_8051D7CC, local # pi
	.float 3.1415927
.endobj lbl_8051D7CC
.obj lbl_8051D7D0, local
	.float -50.0
.endobj lbl_8051D7D0
.obj lbl_8051D7D4, local
	.float 255.0
.endobj lbl_8051D7D4
.obj lbl_8051D7D8, local
	.float 0.6
.endobj lbl_8051D7D8
.obj lbl_8051D7DC, local
	.float 2.0
.endobj lbl_8051D7DC
.obj lbl_8051D7E0, local
	.float 45.0
.endobj lbl_8051D7E0
.obj lbl_8051D7E4, local
	.float 640.0
.endobj lbl_8051D7E4
.obj lbl_8051D7E8, local
	.float 480.0
.endobj lbl_8051D7E8
.obj lbl_8051D7EC, local
	.float 0.999
.endobj lbl_8051D7EC
.obj lbl_8051D7F0, local
	.float -0.999
.endobj lbl_8051D7F0
.balign 8
.obj lbl_8051D7F8, local
	.8byte 0x4330000000000000
.endobj lbl_8051D7F8
.obj lbl_8051D800, local
	.float 15.0
.endobj lbl_8051D800
.obj lbl_8051D804, local
	.float 5.5
.endobj lbl_8051D804
.obj lbl_8051D808, local
	.float 1.8
.endobj lbl_8051D808
.obj lbl_8051D80C, local
	.float 8.0
.endobj lbl_8051D80C
.obj lbl_8051D810, local
	.float 0.7
.endobj lbl_8051D810
.obj lbl_8051D814, local
	.float 1.5
.endobj lbl_8051D814
.obj lbl_8051D818, local
	.float 22.0
.endobj lbl_8051D818
.obj lbl_8051D81C, local
	.float 12.0
.endobj lbl_8051D81C
.obj lbl_8051D820, local
	.float 0.92
.endobj lbl_8051D820

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.fn __ct__Q32og9newScreen11ObjSMenuMapFPCc, global
/* 8030F6F0 0030C630  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8030F6F4 0030C634  7C 08 02 A6 */	mflr r0
/* 8030F6F8 0030C638  90 01 00 14 */	stw r0, 0x14(r1)
/* 8030F6FC 0030C63C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8030F700 0030C640  7C 9F 23 78 */	mr r31, r4
/* 8030F704 0030C644  93 C1 00 08 */	stw r30, 8(r1)
/* 8030F708 0030C648  7C 7E 1B 78 */	mr r30, r3
/* 8030F70C 0030C64C  48 00 6B 05 */	bl __ct__Q32og9newScreen12ObjSMenuBaseFv
/* 8030F710 0030C650  3C 60 80 4E */	lis r3, __vt__Q32og9newScreen11ObjSMenuMap@ha
/* 8030F714 0030C654  C0 22 F3 E0 */	lfs f1, lbl_8051D740@sda21(r2)
/* 8030F718 0030C658  38 63 84 78 */	addi r3, r3, __vt__Q32og9newScreen11ObjSMenuMap@l
/* 8030F71C 0030C65C  C0 02 F3 E4 */	lfs f0, lbl_8051D744@sda21(r2)
/* 8030F720 0030C660  90 7E 00 00 */	stw r3, 0(r30)
/* 8030F724 0030C664  38 63 00 10 */	addi r3, r3, 0x10
/* 8030F728 0030C668  38 80 00 00 */	li r4, 0
/* 8030F72C 0030C66C  38 00 00 FF */	li r0, 0xff
/* 8030F730 0030C670  90 7E 00 18 */	stw r3, 0x18(r30)
/* 8030F734 0030C674  7F C3 F3 78 */	mr r3, r30
/* 8030F738 0030C678  D0 3E 00 E0 */	stfs f1, 0xe0(r30)
/* 8030F73C 0030C67C  D0 3E 00 E4 */	stfs f1, 0xe4(r30)
/* 8030F740 0030C680  D0 1E 00 E8 */	stfs f0, 0xe8(r30)
/* 8030F744 0030C684  D0 3E 00 EC */	stfs f1, 0xec(r30)
/* 8030F748 0030C688  D0 1E 00 F0 */	stfs f0, 0xf0(r30)
/* 8030F74C 0030C68C  D0 1E 00 F4 */	stfs f0, 0xf4(r30)
/* 8030F750 0030C690  D0 3E 00 F8 */	stfs f1, 0xf8(r30)
/* 8030F754 0030C694  D0 3E 00 FC */	stfs f1, 0xfc(r30)
/* 8030F758 0030C698  D0 3E 01 00 */	stfs f1, 0x100(r30)
/* 8030F75C 0030C69C  D0 3E 01 04 */	stfs f1, 0x104(r30)
/* 8030F760 0030C6A0  D0 1E 01 08 */	stfs f0, 0x108(r30)
/* 8030F764 0030C6A4  D0 1E 01 0C */	stfs f0, 0x10c(r30)
/* 8030F768 0030C6A8  D0 3E 01 10 */	stfs f1, 0x110(r30)
/* 8030F76C 0030C6AC  D0 3E 01 14 */	stfs f1, 0x114(r30)
/* 8030F770 0030C6B0  90 9E 00 A8 */	stw r4, 0xa8(r30)
/* 8030F774 0030C6B4  90 9E 00 AC */	stw r4, 0xac(r30)
/* 8030F778 0030C6B8  90 9E 00 B0 */	stw r4, 0xb0(r30)
/* 8030F77C 0030C6BC  93 FE 00 14 */	stw r31, 0x14(r30)
/* 8030F780 0030C6C0  90 9E 00 B4 */	stw r4, 0xb4(r30)
/* 8030F784 0030C6C4  90 9E 00 B8 */	stw r4, 0xb8(r30)
/* 8030F788 0030C6C8  90 9E 00 BC */	stw r4, 0xbc(r30)
/* 8030F78C 0030C6CC  90 9E 00 C0 */	stw r4, 0xc0(r30)
/* 8030F790 0030C6D0  90 9E 00 C4 */	stw r4, 0xc4(r30)
/* 8030F794 0030C6D4  90 9E 01 28 */	stw r4, 0x128(r30)
/* 8030F798 0030C6D8  90 9E 00 C8 */	stw r4, 0xc8(r30)
/* 8030F79C 0030C6DC  90 9E 00 CC */	stw r4, 0xcc(r30)
/* 8030F7A0 0030C6E0  90 9E 00 D0 */	stw r4, 0xd0(r30)
/* 8030F7A4 0030C6E4  90 9E 00 D4 */	stw r4, 0xd4(r30)
/* 8030F7A8 0030C6E8  90 9E 00 D8 */	stw r4, 0xd8(r30)
/* 8030F7AC 0030C6EC  90 9E 00 DC */	stw r4, 0xdc(r30)
/* 8030F7B0 0030C6F0  90 9E 01 1C */	stw r4, 0x11c(r30)
/* 8030F7B4 0030C6F4  98 9E 01 20 */	stb r4, 0x120(r30)
/* 8030F7B8 0030C6F8  90 9E 01 18 */	stw r4, 0x118(r30)
/* 8030F7BC 0030C6FC  90 9E 01 24 */	stw r4, 0x124(r30)
/* 8030F7C0 0030C700  90 9E 01 2C */	stw r4, 0x12c(r30)
/* 8030F7C4 0030C704  90 9E 01 30 */	stw r4, 0x130(r30)
/* 8030F7C8 0030C708  90 9E 01 34 */	stw r4, 0x134(r30)
/* 8030F7CC 0030C70C  D0 1E 01 38 */	stfs f0, 0x138(r30)
/* 8030F7D0 0030C710  98 1E 01 3C */	stb r0, 0x13c(r30)
/* 8030F7D4 0030C714  90 9E 01 54 */	stw r4, 0x154(r30)
/* 8030F7D8 0030C718  90 9E 01 40 */	stw r4, 0x140(r30)
/* 8030F7DC 0030C71C  90 9E 01 44 */	stw r4, 0x144(r30)
/* 8030F7E0 0030C720  90 9E 01 48 */	stw r4, 0x148(r30)
/* 8030F7E4 0030C724  90 9E 01 4C */	stw r4, 0x14c(r30)
/* 8030F7E8 0030C728  90 9E 01 50 */	stw r4, 0x150(r30)
/* 8030F7EC 0030C72C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8030F7F0 0030C730  83 C1 00 08 */	lwz r30, 8(r1)
/* 8030F7F4 0030C734  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8030F7F8 0030C738  7C 08 03 A6 */	mtlr r0
/* 8030F7FC 0030C73C  38 21 00 10 */	addi r1, r1, 0x10
/* 8030F800 0030C740  4E 80 00 20 */	blr 
.endfn __ct__Q32og9newScreen11ObjSMenuMapFPCc

.fn __dt__Q32og9newScreen12ObjSMenuBaseFv, weak
/* 8030F804 0030C744  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8030F808 0030C748  7C 08 02 A6 */	mflr r0
/* 8030F80C 0030C74C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8030F810 0030C750  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8030F814 0030C754  7C 9F 23 78 */	mr r31, r4
/* 8030F818 0030C758  93 C1 00 08 */	stw r30, 8(r1)
/* 8030F81C 0030C75C  7C 7E 1B 79 */	or. r30, r3, r3
/* 8030F820 0030C760  41 82 00 74 */	beq .L_8030F894
/* 8030F824 0030C764  3C 80 80 4E */	lis r4, __vt__Q32og9newScreen12ObjSMenuBase@ha
/* 8030F828 0030C768  38 84 89 B0 */	addi r4, r4, __vt__Q32og9newScreen12ObjSMenuBase@l
/* 8030F82C 0030C76C  90 9E 00 00 */	stw r4, 0(r30)
/* 8030F830 0030C770  38 04 00 10 */	addi r0, r4, 0x10
/* 8030F834 0030C774  90 1E 00 18 */	stw r0, 0x18(r30)
/* 8030F838 0030C778  41 82 00 4C */	beq .L_8030F884
/* 8030F83C 0030C77C  3C 80 80 4F */	lis r4, __vt__Q26Screen7ObjBase@ha
/* 8030F840 0030C780  38 84 D7 58 */	addi r4, r4, __vt__Q26Screen7ObjBase@l
/* 8030F844 0030C784  90 9E 00 00 */	stw r4, 0(r30)
/* 8030F848 0030C788  38 04 00 10 */	addi r0, r4, 0x10
/* 8030F84C 0030C78C  90 1E 00 18 */	stw r0, 0x18(r30)
/* 8030F850 0030C790  41 82 00 34 */	beq .L_8030F884
/* 8030F854 0030C794  3C 80 80 4E */	lis r4, __vt__Q26Screen8IObjBase@ha
/* 8030F858 0030C798  38 84 82 40 */	addi r4, r4, __vt__Q26Screen8IObjBase@l
/* 8030F85C 0030C79C  90 9E 00 00 */	stw r4, 0(r30)
/* 8030F860 0030C7A0  38 04 00 10 */	addi r0, r4, 0x10
/* 8030F864 0030C7A4  90 1E 00 18 */	stw r0, 0x18(r30)
/* 8030F868 0030C7A8  48 10 1D 69 */	bl del__5CNodeFv
/* 8030F86C 0030C7AC  38 7E 00 18 */	addi r3, r30, 0x18
/* 8030F870 0030C7B0  38 80 00 00 */	li r4, 0
/* 8030F874 0030C7B4  4B D0 D7 C1 */	bl __dt__11JKRDisposerFv
/* 8030F878 0030C7B8  7F C3 F3 78 */	mr r3, r30
/* 8030F87C 0030C7BC  38 80 00 00 */	li r4, 0
/* 8030F880 0030C7C0  48 10 1D 09 */	bl __dt__5CNodeFv
.L_8030F884:
/* 8030F884 0030C7C4  7F E0 07 35 */	extsh. r0, r31
/* 8030F888 0030C7C8  40 81 00 0C */	ble .L_8030F894
/* 8030F88C 0030C7CC  7F C3 F3 78 */	mr r3, r30
/* 8030F890 0030C7D0  4B D1 48 25 */	bl __dl__FPv
.L_8030F894:
/* 8030F894 0030C7D4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8030F898 0030C7D8  7F C3 F3 78 */	mr r3, r30
/* 8030F89C 0030C7DC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8030F8A0 0030C7E0  83 C1 00 08 */	lwz r30, 8(r1)
/* 8030F8A4 0030C7E4  7C 08 03 A6 */	mtlr r0
/* 8030F8A8 0030C7E8  38 21 00 10 */	addi r1, r1, 0x10
/* 8030F8AC 0030C7EC  4E 80 00 20 */	blr 
.endfn __dt__Q32og9newScreen12ObjSMenuBaseFv

.fn __dt__Q32og9newScreen11ObjSMenuMapFv, global
/* 8030F8B0 0030C7F0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8030F8B4 0030C7F4  7C 08 02 A6 */	mflr r0
/* 8030F8B8 0030C7F8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8030F8BC 0030C7FC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8030F8C0 0030C800  7C 9F 23 78 */	mr r31, r4
/* 8030F8C4 0030C804  93 C1 00 08 */	stw r30, 8(r1)
/* 8030F8C8 0030C808  7C 7E 1B 79 */	or. r30, r3, r3
/* 8030F8CC 0030C80C  41 82 00 8C */	beq .L_8030F958
/* 8030F8D0 0030C810  3C 80 80 4E */	lis r4, __vt__Q32og9newScreen11ObjSMenuMap@ha
/* 8030F8D4 0030C814  38 84 84 78 */	addi r4, r4, __vt__Q32og9newScreen11ObjSMenuMap@l
/* 8030F8D8 0030C818  90 9E 00 00 */	stw r4, 0(r30)
/* 8030F8DC 0030C81C  38 04 00 10 */	addi r0, r4, 0x10
/* 8030F8E0 0030C820  90 1E 00 18 */	stw r0, 0x18(r30)
/* 8030F8E4 0030C824  41 82 00 64 */	beq .L_8030F948
/* 8030F8E8 0030C828  3C 80 80 4E */	lis r4, __vt__Q32og9newScreen12ObjSMenuBase@ha
/* 8030F8EC 0030C82C  38 84 89 B0 */	addi r4, r4, __vt__Q32og9newScreen12ObjSMenuBase@l
/* 8030F8F0 0030C830  90 9E 00 00 */	stw r4, 0(r30)
/* 8030F8F4 0030C834  38 04 00 10 */	addi r0, r4, 0x10
/* 8030F8F8 0030C838  90 1E 00 18 */	stw r0, 0x18(r30)
/* 8030F8FC 0030C83C  41 82 00 4C */	beq .L_8030F948
/* 8030F900 0030C840  3C 80 80 4F */	lis r4, __vt__Q26Screen7ObjBase@ha
/* 8030F904 0030C844  38 84 D7 58 */	addi r4, r4, __vt__Q26Screen7ObjBase@l
/* 8030F908 0030C848  90 9E 00 00 */	stw r4, 0(r30)
/* 8030F90C 0030C84C  38 04 00 10 */	addi r0, r4, 0x10
/* 8030F910 0030C850  90 1E 00 18 */	stw r0, 0x18(r30)
/* 8030F914 0030C854  41 82 00 34 */	beq .L_8030F948
/* 8030F918 0030C858  3C 80 80 4E */	lis r4, __vt__Q26Screen8IObjBase@ha
/* 8030F91C 0030C85C  38 84 82 40 */	addi r4, r4, __vt__Q26Screen8IObjBase@l
/* 8030F920 0030C860  90 9E 00 00 */	stw r4, 0(r30)
/* 8030F924 0030C864  38 04 00 10 */	addi r0, r4, 0x10
/* 8030F928 0030C868  90 1E 00 18 */	stw r0, 0x18(r30)
/* 8030F92C 0030C86C  48 10 1C A5 */	bl del__5CNodeFv
/* 8030F930 0030C870  38 7E 00 18 */	addi r3, r30, 0x18
/* 8030F934 0030C874  38 80 00 00 */	li r4, 0
/* 8030F938 0030C878  4B D0 D6 FD */	bl __dt__11JKRDisposerFv
/* 8030F93C 0030C87C  7F C3 F3 78 */	mr r3, r30
/* 8030F940 0030C880  38 80 00 00 */	li r4, 0
/* 8030F944 0030C884  48 10 1C 45 */	bl __dt__5CNodeFv
.L_8030F948:
/* 8030F948 0030C888  7F E0 07 35 */	extsh. r0, r31
/* 8030F94C 0030C88C  40 81 00 0C */	ble .L_8030F958
/* 8030F950 0030C890  7F C3 F3 78 */	mr r3, r30
/* 8030F954 0030C894  4B D1 47 61 */	bl __dl__FPv
.L_8030F958:
/* 8030F958 0030C898  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8030F95C 0030C89C  7F C3 F3 78 */	mr r3, r30
/* 8030F960 0030C8A0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8030F964 0030C8A4  83 C1 00 08 */	lwz r30, 8(r1)
/* 8030F968 0030C8A8  7C 08 03 A6 */	mtlr r0
/* 8030F96C 0030C8AC  38 21 00 10 */	addi r1, r1, 0x10
/* 8030F970 0030C8B0  4E 80 00 20 */	blr 
.endfn __dt__Q32og9newScreen11ObjSMenuMapFv

.fn setMapTexture__Q32og9newScreen11ObjSMenuMapFv, global
/* 8030F974 0030C8B4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8030F978 0030C8B8  7C 08 02 A6 */	mflr r0
/* 8030F97C 0030C8BC  C0 22 F3 E0 */	lfs f1, lbl_8051D740@sda21(r2)
/* 8030F980 0030C8C0  3C C0 5F 6D */	lis r6, 0x5F6D6170@ha
/* 8030F984 0030C8C4  90 01 00 24 */	stw r0, 0x24(r1)
/* 8030F988 0030C8C8  3C A0 00 6E */	lis r5, 0x006E6577@ha
/* 8030F98C 0030C8CC  3C 80 80 49 */	lis r4, lbl_8048E1A8@ha
/* 8030F990 0030C8D0  FC 40 08 90 */	fmr f2, f1
/* 8030F994 0030C8D4  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8030F998 0030C8D8  7C 7F 1B 78 */	mr r31, r3
/* 8030F99C 0030C8DC  38 C6 61 70 */	addi r6, r6, 0x5F6D6170@l
/* 8030F9A0 0030C8E0  38 A5 65 77 */	addi r5, r5, 0x006E6577@l
/* 8030F9A4 0030C8E4  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8030F9A8 0030C8E8  3B C4 E1 A8 */	addi r30, r4, lbl_8048E1A8@l
/* 8030F9AC 0030C8EC  80 63 00 B4 */	lwz r3, 0xb4(r3)
/* 8030F9B0 0030C8F0  80 9F 00 C4 */	lwz r4, 0xc4(r31)
/* 8030F9B4 0030C8F4  4B FF F2 9D */	bl CopyPictureToPane__Q22og6ScreenFP12J2DPictureExP7J2DPaneffUx
/* 8030F9B8 0030C8F8  90 7F 00 C8 */	stw r3, 0xc8(r31)
/* 8030F9BC 0030C8FC  38 80 00 FF */	li r4, 0xff
/* 8030F9C0 0030C900  80 7F 00 C8 */	lwz r3, 0xc8(r31)
/* 8030F9C4 0030C904  81 83 00 00 */	lwz r12, 0(r3)
/* 8030F9C8 0030C908  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8030F9CC 0030C90C  7D 89 03 A6 */	mtctr r12
/* 8030F9D0 0030C910  4E 80 04 21 */	bctrl 
/* 8030F9D4 0030C914  80 7F 00 B4 */	lwz r3, 0xb4(r31)
/* 8030F9D8 0030C918  38 00 00 00 */	li r0, 0
/* 8030F9DC 0030C91C  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 8030F9E0 0030C920  80 7F 00 A8 */	lwz r3, 0xa8(r31)
/* 8030F9E4 0030C924  88 03 00 49 */	lbz r0, 0x49(r3)
/* 8030F9E8 0030C928  28 00 00 00 */	cmplwi r0, 0
/* 8030F9EC 0030C92C  41 82 00 70 */	beq .L_8030FA5C
/* 8030F9F0 0030C930  88 03 00 4A */	lbz r0, 0x4a(r3)
/* 8030F9F4 0030C934  28 00 00 00 */	cmplwi r0, 0
/* 8030F9F8 0030C938  41 82 00 64 */	beq .L_8030FA5C
/* 8030F9FC 0030C93C  80 6D 96 88 */	lwz r3, randMapMgr__Q24Game4Cave@sda21(r13)
/* 8030FA00 0030C940  28 03 00 00 */	cmplwi r3, 0
/* 8030FA04 0030C944  41 82 00 40 */	beq .L_8030FA44
/* 8030FA08 0030C948  4B F3 53 A5 */	bl setCaptureOn__Q34Game4Cave10RandMapMgrFv
/* 8030FA0C 0030C94C  80 6D 96 88 */	lwz r3, randMapMgr__Q24Game4Cave@sda21(r13)
/* 8030FA10 0030C950  4B F3 54 A9 */	bl getRadarMapTexture__Q34Game4Cave10RandMapMgrFv
/* 8030FA14 0030C954  90 7F 00 C0 */	stw r3, 0xc0(r31)
/* 8030FA18 0030C958  38 A0 00 00 */	li r5, 0
/* 8030FA1C 0030C95C  80 7F 00 C8 */	lwz r3, 0xc8(r31)
/* 8030FA20 0030C960  80 9F 00 C0 */	lwz r4, 0xc0(r31)
/* 8030FA24 0030C964  81 83 00 00 */	lwz r12, 0(r3)
/* 8030FA28 0030C968  80 84 00 20 */	lwz r4, 0x20(r4)
/* 8030FA2C 0030C96C  81 8C 01 10 */	lwz r12, 0x110(r12)
/* 8030FA30 0030C970  7D 89 03 A6 */	mtctr r12
/* 8030FA34 0030C974  4E 80 04 21 */	bctrl 
/* 8030FA38 0030C978  38 00 00 01 */	li r0, 1
/* 8030FA3C 0030C97C  98 1F 01 20 */	stb r0, 0x120(r31)
/* 8030FA40 0030C980  48 00 00 C4 */	b .L_8030FB04
.L_8030FA44:
/* 8030FA44 0030C984  38 7E 00 0C */	addi r3, r30, 0xc
/* 8030FA48 0030C988  38 BE 00 20 */	addi r5, r30, 0x20
/* 8030FA4C 0030C98C  38 80 01 86 */	li r4, 0x186
/* 8030FA50 0030C990  4C C6 31 82 */	crclr 6
/* 8030FA54 0030C994  4B D1 AB ED */	bl panic_f__12JUTExceptionFPCciPCce
/* 8030FA58 0030C998  48 00 00 AC */	b .L_8030FB04
.L_8030FA5C:
/* 8030FA5C 0030C99C  80 03 00 3C */	lwz r0, 0x3c(r3)
/* 8030FA60 0030C9A0  2C 00 00 02 */	cmpwi r0, 2
/* 8030FA64 0030C9A4  41 82 00 64 */	beq .L_8030FAC8
/* 8030FA68 0030C9A8  40 80 00 14 */	bge .L_8030FA7C
/* 8030FA6C 0030C9AC  2C 00 00 00 */	cmpwi r0, 0
/* 8030FA70 0030C9B0  41 82 00 18 */	beq .L_8030FA88
/* 8030FA74 0030C9B4  40 80 00 34 */	bge .L_8030FAA8
/* 8030FA78 0030C9B8  48 00 00 8C */	b .L_8030FB04
.L_8030FA7C:
/* 8030FA7C 0030C9BC  2C 00 00 04 */	cmpwi r0, 4
/* 8030FA80 0030C9C0  40 80 00 84 */	bge .L_8030FB04
/* 8030FA84 0030C9C4  48 00 00 64 */	b .L_8030FAE8
.L_8030FA88:
/* 8030FA88 0030C9C8  80 7F 00 C8 */	lwz r3, 0xc8(r31)
/* 8030FA8C 0030C9CC  38 9E 00 48 */	addi r4, r30, 0x48
/* 8030FA90 0030C9D0  38 A0 00 00 */	li r5, 0
/* 8030FA94 0030C9D4  81 83 00 00 */	lwz r12, 0(r3)
/* 8030FA98 0030C9D8  81 8C 01 14 */	lwz r12, 0x114(r12)
/* 8030FA9C 0030C9DC  7D 89 03 A6 */	mtctr r12
/* 8030FAA0 0030C9E0  4E 80 04 21 */	bctrl 
/* 8030FAA4 0030C9E4  48 00 00 60 */	b .L_8030FB04
.L_8030FAA8:
/* 8030FAA8 0030C9E8  80 7F 00 C8 */	lwz r3, 0xc8(r31)
/* 8030FAAC 0030C9EC  38 9E 00 5C */	addi r4, r30, 0x5c
/* 8030FAB0 0030C9F0  38 A0 00 00 */	li r5, 0
/* 8030FAB4 0030C9F4  81 83 00 00 */	lwz r12, 0(r3)
/* 8030FAB8 0030C9F8  81 8C 01 14 */	lwz r12, 0x114(r12)
/* 8030FABC 0030C9FC  7D 89 03 A6 */	mtctr r12
/* 8030FAC0 0030CA00  4E 80 04 21 */	bctrl 
/* 8030FAC4 0030CA04  48 00 00 40 */	b .L_8030FB04
.L_8030FAC8:
/* 8030FAC8 0030CA08  80 7F 00 C8 */	lwz r3, 0xc8(r31)
/* 8030FACC 0030CA0C  38 9E 00 6C */	addi r4, r30, 0x6c
/* 8030FAD0 0030CA10  38 A0 00 00 */	li r5, 0
/* 8030FAD4 0030CA14  81 83 00 00 */	lwz r12, 0(r3)
/* 8030FAD8 0030CA18  81 8C 01 14 */	lwz r12, 0x114(r12)
/* 8030FADC 0030CA1C  7D 89 03 A6 */	mtctr r12
/* 8030FAE0 0030CA20  4E 80 04 21 */	bctrl 
/* 8030FAE4 0030CA24  48 00 00 20 */	b .L_8030FB04
.L_8030FAE8:
/* 8030FAE8 0030CA28  80 7F 00 C8 */	lwz r3, 0xc8(r31)
/* 8030FAEC 0030CA2C  38 9E 00 80 */	addi r4, r30, 0x80
/* 8030FAF0 0030CA30  38 A0 00 00 */	li r5, 0
/* 8030FAF4 0030CA34  81 83 00 00 */	lwz r12, 0(r3)
/* 8030FAF8 0030CA38  81 8C 01 14 */	lwz r12, 0x114(r12)
/* 8030FAFC 0030CA3C  7D 89 03 A6 */	mtctr r12
/* 8030FB00 0030CA40  4E 80 04 21 */	bctrl 
.L_8030FB04:
/* 8030FB04 0030CA44  80 7F 00 C8 */	lwz r3, 0xc8(r31)
/* 8030FB08 0030CA48  38 80 00 00 */	li r4, 0
/* 8030FB0C 0030CA4C  81 83 00 00 */	lwz r12, 0(r3)
/* 8030FB10 0030CA50  81 8C 01 20 */	lwz r12, 0x120(r12)
/* 8030FB14 0030CA54  7D 89 03 A6 */	mtctr r12
/* 8030FB18 0030CA58  4E 80 04 21 */	bctrl 
/* 8030FB1C 0030CA5C  80 63 00 20 */	lwz r3, 0x20(r3)
/* 8030FB20 0030CA60  3C 00 43 30 */	lis r0, 0x4330
/* 8030FB24 0030CA64  90 01 00 08 */	stw r0, 8(r1)
/* 8030FB28 0030CA68  38 80 00 00 */	li r4, 0
/* 8030FB2C 0030CA6C  A0 03 00 02 */	lhz r0, 2(r3)
/* 8030FB30 0030CA70  C8 22 F4 10 */	lfd f1, lbl_8051D770@sda21(r2)
/* 8030FB34 0030CA74  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 8030FB38 0030CA78  90 01 00 0C */	stw r0, 0xc(r1)
/* 8030FB3C 0030CA7C  C8 01 00 08 */	lfd f0, 8(r1)
/* 8030FB40 0030CA80  EC 00 08 28 */	fsubs f0, f0, f1
/* 8030FB44 0030CA84  D0 1F 00 F8 */	stfs f0, 0xf8(r31)
/* 8030FB48 0030CA88  80 7F 00 C8 */	lwz r3, 0xc8(r31)
/* 8030FB4C 0030CA8C  81 83 00 00 */	lwz r12, 0(r3)
/* 8030FB50 0030CA90  81 8C 01 20 */	lwz r12, 0x120(r12)
/* 8030FB54 0030CA94  7D 89 03 A6 */	mtctr r12
/* 8030FB58 0030CA98  4E 80 04 21 */	bctrl 
/* 8030FB5C 0030CA9C  80 63 00 20 */	lwz r3, 0x20(r3)
/* 8030FB60 0030CAA0  3C 00 43 30 */	lis r0, 0x4330
/* 8030FB64 0030CAA4  90 01 00 10 */	stw r0, 0x10(r1)
/* 8030FB68 0030CAA8  A0 03 00 04 */	lhz r0, 4(r3)
/* 8030FB6C 0030CAAC  C8 22 F4 10 */	lfd f1, lbl_8051D770@sda21(r2)
/* 8030FB70 0030CAB0  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 8030FB74 0030CAB4  90 01 00 14 */	stw r0, 0x14(r1)
/* 8030FB78 0030CAB8  C8 01 00 10 */	lfd f0, 0x10(r1)
/* 8030FB7C 0030CABC  EC 00 08 28 */	fsubs f0, f0, f1
/* 8030FB80 0030CAC0  D0 1F 00 FC */	stfs f0, 0xfc(r31)
/* 8030FB84 0030CAC4  80 7F 00 C8 */	lwz r3, 0xc8(r31)
/* 8030FB88 0030CAC8  C0 23 00 28 */	lfs f1, 0x28(r3)
/* 8030FB8C 0030CACC  C0 03 00 20 */	lfs f0, 0x20(r3)
/* 8030FB90 0030CAD0  EC 01 00 28 */	fsubs f0, f1, f0
/* 8030FB94 0030CAD4  D0 1F 01 00 */	stfs f0, 0x100(r31)
/* 8030FB98 0030CAD8  80 7F 00 C8 */	lwz r3, 0xc8(r31)
/* 8030FB9C 0030CADC  C0 23 00 2C */	lfs f1, 0x2c(r3)
/* 8030FBA0 0030CAE0  C0 03 00 24 */	lfs f0, 0x24(r3)
/* 8030FBA4 0030CAE4  EC 01 00 28 */	fsubs f0, f1, f0
/* 8030FBA8 0030CAE8  D0 1F 01 04 */	stfs f0, 0x104(r31)
/* 8030FBAC 0030CAEC  80 7F 00 C8 */	lwz r3, 0xc8(r31)
/* 8030FBB0 0030CAF0  C0 3F 00 F8 */	lfs f1, 0xf8(r31)
/* 8030FBB4 0030CAF4  81 83 00 00 */	lwz r12, 0(r3)
/* 8030FBB8 0030CAF8  C0 5F 00 FC */	lfs f2, 0xfc(r31)
/* 8030FBBC 0030CAFC  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8030FBC0 0030CB00  7D 89 03 A6 */	mtctr r12
/* 8030FBC4 0030CB04  4E 80 04 21 */	bctrl 
/* 8030FBC8 0030CB08  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8030FBCC 0030CB0C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8030FBD0 0030CB10  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8030FBD4 0030CB14  7C 08 03 A6 */	mtlr r0
/* 8030FBD8 0030CB18  38 21 00 20 */	addi r1, r1, 0x20
/* 8030FBDC 0030CB1C  4E 80 00 20 */	blr 
.endfn setMapTexture__Q32og9newScreen11ObjSMenuMapFv

.fn tuningIcon__Q32og9newScreen11ObjSMenuMapFv, global
/* 8030FBE0 0030CB20  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 8030FBE4 0030CB24  7C 08 02 A6 */	mflr r0
/* 8030FBE8 0030CB28  90 01 00 44 */	stw r0, 0x44(r1)
/* 8030FBEC 0030CB2C  BF 41 00 28 */	stmw r26, 0x28(r1)
/* 8030FBF0 0030CB30  7C 7F 1B 78 */	mr r31, r3
/* 8030FBF4 0030CB34  80 63 00 A8 */	lwz r3, 0xa8(r3)
/* 8030FBF8 0030CB38  88 03 00 4A */	lbz r0, 0x4a(r3)
/* 8030FBFC 0030CB3C  28 00 00 00 */	cmplwi r0, 0
/* 8030FC00 0030CB40  41 82 00 6C */	beq .L_8030FC6C
/* 8030FC04 0030CB44  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 8030FC08 0030CB48  4B E4 B0 19 */	bl getActiveNavi__Q24Game7NaviMgrFv
/* 8030FC0C 0030CB4C  A0 03 02 DC */	lhz r0, 0x2dc(r3)
/* 8030FC10 0030CB50  2C 00 00 00 */	cmpwi r0, 0
/* 8030FC14 0030CB54  40 82 00 30 */	bne .L_8030FC44
/* 8030FC18 0030CB58  80 9F 00 D8 */	lwz r4, 0xd8(r31)
/* 8030FC1C 0030CB5C  28 04 00 00 */	cmplwi r4, 0
/* 8030FC20 0030CB60  41 82 00 0C */	beq .L_8030FC2C
/* 8030FC24 0030CB64  80 7F 00 C8 */	lwz r3, 0xc8(r31)
/* 8030FC28 0030CB68  4B D2 7A 9D */	bl appendChild__7J2DPaneFP7J2DPane
.L_8030FC2C:
/* 8030FC2C 0030CB6C  80 9F 00 D0 */	lwz r4, 0xd0(r31)
/* 8030FC30 0030CB70  28 04 00 00 */	cmplwi r4, 0
/* 8030FC34 0030CB74  41 82 00 38 */	beq .L_8030FC6C
/* 8030FC38 0030CB78  80 7F 00 C8 */	lwz r3, 0xc8(r31)
/* 8030FC3C 0030CB7C  4B D2 7A 89 */	bl appendChild__7J2DPaneFP7J2DPane
/* 8030FC40 0030CB80  48 00 00 2C */	b .L_8030FC6C
.L_8030FC44:
/* 8030FC44 0030CB84  80 9F 00 D0 */	lwz r4, 0xd0(r31)
/* 8030FC48 0030CB88  28 04 00 00 */	cmplwi r4, 0
/* 8030FC4C 0030CB8C  41 82 00 0C */	beq .L_8030FC58
/* 8030FC50 0030CB90  80 7F 00 C8 */	lwz r3, 0xc8(r31)
/* 8030FC54 0030CB94  4B D2 7A 71 */	bl appendChild__7J2DPaneFP7J2DPane
.L_8030FC58:
/* 8030FC58 0030CB98  80 9F 00 D8 */	lwz r4, 0xd8(r31)
/* 8030FC5C 0030CB9C  28 04 00 00 */	cmplwi r4, 0
/* 8030FC60 0030CBA0  41 82 00 0C */	beq .L_8030FC6C
/* 8030FC64 0030CBA4  80 7F 00 C8 */	lwz r3, 0xc8(r31)
/* 8030FC68 0030CBA8  4B D2 7A 5D */	bl appendChild__7J2DPaneFP7J2DPane
.L_8030FC6C:
/* 8030FC6C 0030CBAC  3C 60 80 4E */	lis r3, map_icon_tag__Q22og9newScreen@ha
/* 8030FC70 0030CBB0  3B A0 00 00 */	li r29, 0
/* 8030FC74 0030CBB4  3B C3 83 A8 */	addi r30, r3, map_icon_tag__Q22og9newScreen@l
.L_8030FC78:
/* 8030FC78 0030CBB8  80 7F 00 BC */	lwz r3, 0xbc(r31)
/* 8030FC7C 0030CBBC  83 9E 00 00 */	lwz r28, 0(r30)
/* 8030FC80 0030CBC0  81 83 00 00 */	lwz r12, 0(r3)
/* 8030FC84 0030CBC4  83 7E 00 04 */	lwz r27, 4(r30)
/* 8030FC88 0030CBC8  7F 85 E3 78 */	mr r5, r28
/* 8030FC8C 0030CBCC  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8030FC90 0030CBD0  7F 66 DB 78 */	mr r6, r27
/* 8030FC94 0030CBD4  7D 89 03 A6 */	mtctr r12
/* 8030FC98 0030CBD8  4E 80 04 21 */	bctrl 
/* 8030FC9C 0030CBDC  7C 7A 1B 79 */	or. r26, r3, r3
/* 8030FCA0 0030CBE0  41 82 00 20 */	beq .L_8030FCC0
/* 8030FCA4 0030CBE4  4B D2 94 3D */	bl getParentPane__7J2DPaneFv
/* 8030FCA8 0030CBE8  28 03 00 00 */	cmplwi r3, 0
/* 8030FCAC 0030CBEC  41 82 00 14 */	beq .L_8030FCC0
/* 8030FCB0 0030CBF0  7F 43 D3 78 */	mr r3, r26
/* 8030FCB4 0030CBF4  4B D2 94 2D */	bl getParentPane__7J2DPaneFv
/* 8030FCB8 0030CBF8  7F 44 D3 78 */	mr r4, r26
/* 8030FCBC 0030CBFC  4B D2 7B 79 */	bl removeChild__7J2DPaneFP7J2DPane
.L_8030FCC0:
/* 8030FCC0 0030CC00  80 7F 01 24 */	lwz r3, 0x124(r31)
/* 8030FCC4 0030CC04  7F 66 DB 78 */	mr r6, r27
/* 8030FCC8 0030CC08  7F 85 E3 78 */	mr r5, r28
/* 8030FCCC 0030CC0C  81 83 00 00 */	lwz r12, 0(r3)
/* 8030FCD0 0030CC10  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8030FCD4 0030CC14  7D 89 03 A6 */	mtctr r12
/* 8030FCD8 0030CC18  4E 80 04 21 */	bctrl 
/* 8030FCDC 0030CC1C  7C 7A 1B 79 */	or. r26, r3, r3
/* 8030FCE0 0030CC20  41 82 00 20 */	beq .L_8030FD00
/* 8030FCE4 0030CC24  4B D2 93 FD */	bl getParentPane__7J2DPaneFv
/* 8030FCE8 0030CC28  28 03 00 00 */	cmplwi r3, 0
/* 8030FCEC 0030CC2C  41 82 00 14 */	beq .L_8030FD00
/* 8030FCF0 0030CC30  7F 43 D3 78 */	mr r3, r26
/* 8030FCF4 0030CC34  4B D2 93 ED */	bl getParentPane__7J2DPaneFv
/* 8030FCF8 0030CC38  7F 44 D3 78 */	mr r4, r26
/* 8030FCFC 0030CC3C  4B D2 7B 39 */	bl removeChild__7J2DPaneFP7J2DPane
.L_8030FD00:
/* 8030FD00 0030CC40  3B BD 00 01 */	addi r29, r29, 1
/* 8030FD04 0030CC44  3B DE 00 08 */	addi r30, r30, 8
/* 8030FD08 0030CC48  2C 1D 00 16 */	cmpwi r29, 0x16
/* 8030FD0C 0030CC4C  41 80 FF 6C */	blt .L_8030FC78
/* 8030FD10 0030CC50  3C 60 80 49 */	lis r3, lbl_8048E238@ha
/* 8030FD14 0030CC54  CC 43 E2 38 */	lfdu f2, lbl_8048E238@l(r3)
/* 8030FD18 0030CC58  3B C1 00 08 */	addi r30, r1, 8
/* 8030FD1C 0030CC5C  3B 40 00 00 */	li r26, 0
/* 8030FD20 0030CC60  C8 23 00 08 */	lfd f1, 8(r3)
/* 8030FD24 0030CC64  C8 03 00 10 */	lfd f0, 0x10(r3)
/* 8030FD28 0030CC68  D8 41 00 08 */	stfd f2, 8(r1)
/* 8030FD2C 0030CC6C  D8 21 00 10 */	stfd f1, 0x10(r1)
/* 8030FD30 0030CC70  D8 01 00 18 */	stfd f0, 0x18(r1)
.L_8030FD34:
/* 8030FD34 0030CC74  80 7F 01 24 */	lwz r3, 0x124(r31)
/* 8030FD38 0030CC78  80 BE 00 00 */	lwz r5, 0(r30)
/* 8030FD3C 0030CC7C  81 83 00 00 */	lwz r12, 0(r3)
/* 8030FD40 0030CC80  80 DE 00 04 */	lwz r6, 4(r30)
/* 8030FD44 0030CC84  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8030FD48 0030CC88  7D 89 03 A6 */	mtctr r12
/* 8030FD4C 0030CC8C  4E 80 04 21 */	bctrl 
/* 8030FD50 0030CC90  7C 7B 1B 79 */	or. r27, r3, r3
/* 8030FD54 0030CC94  41 82 00 20 */	beq .L_8030FD74
/* 8030FD58 0030CC98  4B D2 93 89 */	bl getParentPane__7J2DPaneFv
/* 8030FD5C 0030CC9C  28 03 00 00 */	cmplwi r3, 0
/* 8030FD60 0030CCA0  41 82 00 14 */	beq .L_8030FD74
/* 8030FD64 0030CCA4  7F 63 DB 78 */	mr r3, r27
/* 8030FD68 0030CCA8  4B D2 93 79 */	bl getParentPane__7J2DPaneFv
/* 8030FD6C 0030CCAC  7F 64 DB 78 */	mr r4, r27
/* 8030FD70 0030CCB0  4B D2 7A C5 */	bl removeChild__7J2DPaneFP7J2DPane
.L_8030FD74:
/* 8030FD74 0030CCB4  3B 5A 00 01 */	addi r26, r26, 1
/* 8030FD78 0030CCB8  3B DE 00 08 */	addi r30, r30, 8
/* 8030FD7C 0030CCBC  2C 1A 00 03 */	cmpwi r26, 3
/* 8030FD80 0030CCC0  41 80 FF B4 */	blt .L_8030FD34
/* 8030FD84 0030CCC4  BB 41 00 28 */	lmw r26, 0x28(r1)
/* 8030FD88 0030CCC8  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8030FD8C 0030CCCC  7C 08 03 A6 */	mtlr r0
/* 8030FD90 0030CCD0  38 21 00 40 */	addi r1, r1, 0x40
/* 8030FD94 0030CCD4  4E 80 00 20 */	blr 
.endfn tuningIcon__Q32og9newScreen11ObjSMenuMapFv

.fn initMapIcon__Q32og9newScreen11ObjSMenuMapFP10JKRArchive, global
/* 8030FD98 0030CCD8  94 21 FF 10 */	stwu r1, -0xf0(r1)
/* 8030FD9C 0030CCDC  7C 08 02 A6 */	mflr r0
/* 8030FDA0 0030CCE0  90 01 00 F4 */	stw r0, 0xf4(r1)
/* 8030FDA4 0030CCE4  DB E1 00 E0 */	stfd f31, 0xe0(r1)
/* 8030FDA8 0030CCE8  F3 E1 00 E8 */	psq_st f31, 232(r1), 0, qr0
/* 8030FDAC 0030CCEC  DB C1 00 D0 */	stfd f30, 0xd0(r1)
/* 8030FDB0 0030CCF0  F3 C1 00 D8 */	psq_st f30, 216(r1), 0, qr0
/* 8030FDB4 0030CCF4  BE A1 00 A4 */	stmw r21, 0xa4(r1)
/* 8030FDB8 0030CCF8  7C 7F 1B 78 */	mr r31, r3
/* 8030FDBC 0030CCFC  3C A0 80 49 */	lis r5, lbl_8048E1A8@ha
/* 8030FDC0 0030CD00  38 60 00 04 */	li r3, 4
/* 8030FDC4 0030CD04  7C 97 23 78 */	mr r23, r4
/* 8030FDC8 0030CD08  3B 25 E1 A8 */	addi r25, r5, lbl_8048E1A8@l
/* 8030FDCC 0030CD0C  64 63 00 04 */	oris r3, r3, 4
/* 8030FDD0 0030CD10  7C 72 E3 A6 */	mtspr 0x392, r3
/* 8030FDD4 0030CD14  38 60 00 05 */	li r3, 5
/* 8030FDD8 0030CD18  64 63 00 05 */	oris r3, r3, 5
/* 8030FDDC 0030CD1C  7C 73 E3 A6 */	mtspr 0x393, r3
/* 8030FDE0 0030CD20  38 60 00 06 */	li r3, 6
/* 8030FDE4 0030CD24  64 63 00 06 */	oris r3, r3, 6
/* 8030FDE8 0030CD28  7C 74 E3 A6 */	mtspr 0x394, r3
/* 8030FDEC 0030CD2C  38 60 00 07 */	li r3, 7
/* 8030FDF0 0030CD30  64 63 00 07 */	oris r3, r3, 7
/* 8030FDF4 0030CD34  7C 75 E3 A6 */	mtspr 0x395, r3
/* 8030FDF8 0030CD38  80 7F 00 AC */	lwz r3, 0xac(r31)
/* 8030FDFC 0030CD3C  3C 80 00 6D */	lis r4, 0x006D6170@ha
/* 8030FE00 0030CD40  38 A0 00 00 */	li r5, 0
/* 8030FE04 0030CD44  81 83 00 00 */	lwz r12, 0(r3)
/* 8030FE08 0030CD48  38 C4 61 70 */	addi r6, r4, 0x006D6170@l
/* 8030FE0C 0030CD4C  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8030FE10 0030CD50  7D 89 03 A6 */	mtctr r12
/* 8030FE14 0030CD54  4E 80 04 21 */	bctrl 
/* 8030FE18 0030CD58  7C 78 1B 78 */	mr r24, r3
/* 8030FE1C 0030CD5C  4B D2 92 C5 */	bl getParentPane__7J2DPaneFv
/* 8030FE20 0030CD60  28 03 00 00 */	cmplwi r3, 0
/* 8030FE24 0030CD64  41 82 00 14 */	beq .L_8030FE38
/* 8030FE28 0030CD68  7F 03 C3 78 */	mr r3, r24
/* 8030FE2C 0030CD6C  4B D2 92 B5 */	bl getParentPane__7J2DPaneFv
/* 8030FE30 0030CD70  7F 04 C3 78 */	mr r4, r24
/* 8030FE34 0030CD74  4B D2 7A 01 */	bl removeChild__7J2DPaneFP7J2DPane
.L_8030FE38:
/* 8030FE38 0030CD78  38 60 01 48 */	li r3, 0x148
/* 8030FE3C 0030CD7C  4B D1 40 69 */	bl __nw__FUl
/* 8030FE40 0030CD80  7C 60 1B 79 */	or. r0, r3, r3
/* 8030FE44 0030CD84  41 82 00 0C */	beq .L_8030FE50
/* 8030FE48 0030CD88  48 12 4F 65 */	bl __ct__Q29P2DScreen10Mgr_tuningFv
/* 8030FE4C 0030CD8C  7C 60 1B 78 */	mr r0, r3
.L_8030FE50:
/* 8030FE50 0030CD90  90 1F 00 BC */	stw r0, 0xbc(r31)
/* 8030FE54 0030CD94  7E E6 BB 78 */	mr r6, r23
/* 8030FE58 0030CD98  38 99 00 A8 */	addi r4, r25, 0xa8
/* 8030FE5C 0030CD9C  3C A0 00 04 */	lis r5, 4
/* 8030FE60 0030CDA0  80 7F 00 BC */	lwz r3, 0xbc(r31)
/* 8030FE64 0030CDA4  4B D2 F7 C1 */	bl set__9J2DScreenFPCcUlP10JKRArchive
/* 8030FE68 0030CDA8  80 7F 00 BC */	lwz r3, 0xbc(r31)
/* 8030FE6C 0030CDAC  3C 80 52 4F */	lis r4, 0x524F4F54@ha
/* 8030FE70 0030CDB0  38 C4 4F 54 */	addi r6, r4, 0x524F4F54@l
/* 8030FE74 0030CDB4  38 A0 00 00 */	li r5, 0
/* 8030FE78 0030CDB8  81 83 00 00 */	lwz r12, 0(r3)
/* 8030FE7C 0030CDBC  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8030FE80 0030CDC0  7D 89 03 A6 */	mtctr r12
/* 8030FE84 0030CDC4  4E 80 04 21 */	bctrl 
/* 8030FE88 0030CDC8  90 7F 00 C4 */	stw r3, 0xc4(r31)
/* 8030FE8C 0030CDCC  3C A0 69 5F */	lis r5, 0x695F5F62@ha
/* 8030FE90 0030CDD0  3C 80 00 70 */	lis r4, 0x0070696B@ha
/* 8030FE94 0030CDD4  80 7F 00 BC */	lwz r3, 0xbc(r31)
/* 8030FE98 0030CDD8  38 C5 5F 62 */	addi r6, r5, 0x695F5F62@l
/* 8030FE9C 0030CDDC  38 A4 69 6B */	addi r5, r4, 0x0070696B@l
/* 8030FEA0 0030CDE0  4B FF 30 0D */	bl TagSearch__Q22og6ScreenFP9J2DScreenUx
/* 8030FEA4 0030CDE4  3C 80 80 51 */	lis r4, msVal__Q32og9newScreen11ObjSMenuMap@ha
/* 8030FEA8 0030CDE8  7C 78 1B 78 */	mr r24, r3
/* 8030FEAC 0030CDEC  38 A4 3C 40 */	addi r5, r4, msVal__Q32og9newScreen11ObjSMenuMap@l
/* 8030FEB0 0030CDF0  80 05 00 48 */	lwz r0, 0x48(r5)
/* 8030FEB4 0030CDF4  38 81 00 1C */	addi r4, r1, 0x1c
/* 8030FEB8 0030CDF8  90 01 00 1C */	stw r0, 0x1c(r1)
/* 8030FEBC 0030CDFC  81 83 00 00 */	lwz r12, 0(r3)
/* 8030FEC0 0030CE00  81 8C 01 2C */	lwz r12, 0x12c(r12)
/* 8030FEC4 0030CE04  7D 89 03 A6 */	mtctr r12
/* 8030FEC8 0030CE08  4E 80 04 21 */	bctrl 
/* 8030FECC 0030CE0C  3C 80 80 51 */	lis r4, msVal__Q32og9newScreen11ObjSMenuMap@ha
/* 8030FED0 0030CE10  7F 03 C3 78 */	mr r3, r24
/* 8030FED4 0030CE14  38 A4 3C 40 */	addi r5, r4, msVal__Q32og9newScreen11ObjSMenuMap@l
/* 8030FED8 0030CE18  38 81 00 18 */	addi r4, r1, 0x18
/* 8030FEDC 0030CE1C  80 05 00 4C */	lwz r0, 0x4c(r5)
/* 8030FEE0 0030CE20  90 01 00 18 */	stw r0, 0x18(r1)
/* 8030FEE4 0030CE24  81 98 00 00 */	lwz r12, 0(r24)
/* 8030FEE8 0030CE28  81 8C 01 28 */	lwz r12, 0x128(r12)
/* 8030FEEC 0030CE2C  7D 89 03 A6 */	mtctr r12
/* 8030FEF0 0030CE30  4E 80 04 21 */	bctrl 
/* 8030FEF4 0030CE34  38 60 01 48 */	li r3, 0x148
/* 8030FEF8 0030CE38  4B D1 3F AD */	bl __nw__FUl
/* 8030FEFC 0030CE3C  7C 60 1B 79 */	or. r0, r3, r3
/* 8030FF00 0030CE40  41 82 00 0C */	beq .L_8030FF0C
/* 8030FF04 0030CE44  48 12 4E A9 */	bl __ct__Q29P2DScreen10Mgr_tuningFv
/* 8030FF08 0030CE48  7C 60 1B 78 */	mr r0, r3
.L_8030FF0C:
/* 8030FF0C 0030CE4C  90 1F 01 24 */	stw r0, 0x124(r31)
/* 8030FF10 0030CE50  7E E6 BB 78 */	mr r6, r23
/* 8030FF14 0030CE54  38 99 00 A8 */	addi r4, r25, 0xa8
/* 8030FF18 0030CE58  3C A0 00 04 */	lis r5, 4
/* 8030FF1C 0030CE5C  80 7F 01 24 */	lwz r3, 0x124(r31)
/* 8030FF20 0030CE60  4B D2 F7 05 */	bl set__9J2DScreenFPCcUlP10JKRArchive
/* 8030FF24 0030CE64  7F E3 FB 78 */	mr r3, r31
/* 8030FF28 0030CE68  4B FF FA 4D */	bl setMapTexture__Q32og9newScreen11ObjSMenuMapFv
/* 8030FF2C 0030CE6C  C0 1F 00 F8 */	lfs f0, 0xf8(r31)
/* 8030FF30 0030CE70  C0 22 F4 00 */	lfs f1, lbl_8051D760@sda21(r2)
/* 8030FF34 0030CE74  FC 00 00 50 */	fneg f0, f0
/* 8030FF38 0030CE78  EC 00 00 72 */	fmuls f0, f0, f1
/* 8030FF3C 0030CE7C  D0 1F 00 E0 */	stfs f0, 0xe0(r31)
/* 8030FF40 0030CE80  C0 1F 00 FC */	lfs f0, 0xfc(r31)
/* 8030FF44 0030CE84  FC 00 00 50 */	fneg f0, f0
/* 8030FF48 0030CE88  EC 00 00 72 */	fmuls f0, f0, f1
/* 8030FF4C 0030CE8C  D0 1F 00 E4 */	stfs f0, 0xe4(r31)
/* 8030FF50 0030CE90  80 9F 00 A8 */	lwz r4, 0xa8(r31)
/* 8030FF54 0030CE94  88 04 00 4A */	lbz r0, 0x4a(r4)
/* 8030FF58 0030CE98  28 00 00 00 */	cmplwi r0, 0
/* 8030FF5C 0030CE9C  41 82 01 54 */	beq .L_803100B0
/* 8030FF60 0030CEA0  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 8030FF64 0030CEA4  4B E4 AC BD */	bl getActiveNavi__Q24Game7NaviMgrFv
/* 8030FF68 0030CEA8  7C 64 1B 78 */	mr r4, r3
/* 8030FF6C 0030CEAC  38 61 00 7C */	addi r3, r1, 0x7c
/* 8030FF70 0030CEB0  81 84 00 00 */	lwz r12, 0(r4)
/* 8030FF74 0030CEB4  81 8C 00 08 */	lwz r12, 8(r12)
/* 8030FF78 0030CEB8  7D 89 03 A6 */	mtctr r12
/* 8030FF7C 0030CEBC  4E 80 04 21 */	bctrl 
/* 8030FF80 0030CEC0  C0 41 00 7C */	lfs f2, 0x7c(r1)
/* 8030FF84 0030CEC4  C0 21 00 80 */	lfs f1, 0x80(r1)
/* 8030FF88 0030CEC8  C0 01 00 84 */	lfs f0, 0x84(r1)
/* 8030FF8C 0030CECC  D0 41 00 70 */	stfs f2, 0x70(r1)
/* 8030FF90 0030CED0  D0 21 00 74 */	stfs f1, 0x74(r1)
/* 8030FF94 0030CED4  D0 01 00 78 */	stfs f0, 0x78(r1)
/* 8030FF98 0030CED8  80 BF 00 A8 */	lwz r5, 0xa8(r31)
/* 8030FF9C 0030CEDC  88 05 00 49 */	lbz r0, 0x49(r5)
/* 8030FFA0 0030CEE0  28 00 00 00 */	cmplwi r0, 0
/* 8030FFA4 0030CEE4  41 82 00 4C */	beq .L_8030FFF0
/* 8030FFA8 0030CEE8  80 6D 96 88 */	lwz r3, randMapMgr__Q24Game4Cave@sda21(r13)
/* 8030FFAC 0030CEEC  28 03 00 00 */	cmplwi r3, 0
/* 8030FFB0 0030CEF0  41 82 01 00 */	beq .L_803100B0
/* 8030FFB4 0030CEF4  38 81 00 70 */	addi r4, r1, 0x70
/* 8030FFB8 0030CEF8  38 A1 00 08 */	addi r5, r1, 8
/* 8030FFBC 0030CEFC  38 C1 00 0C */	addi r6, r1, 0xc
/* 8030FFC0 0030CF00  4B F3 4F 25 */	bl "getPositionOnTex__Q34Game4Cave10RandMapMgrFR10Vector3<f>RfRf"
/* 8030FFC4 0030CF04  C0 42 F3 E8 */	lfs f2, lbl_8051D748@sda21(r2)
/* 8030FFC8 0030CF08  C0 01 00 08 */	lfs f0, 8(r1)
/* 8030FFCC 0030CF0C  C0 22 F3 F0 */	lfs f1, lbl_8051D750@sda21(r2)
/* 8030FFD0 0030CF10  EC 02 00 2A */	fadds f0, f2, f0
/* 8030FFD4 0030CF14  FC 00 00 50 */	fneg f0, f0
/* 8030FFD8 0030CF18  D0 1F 00 E0 */	stfs f0, 0xe0(r31)
/* 8030FFDC 0030CF1C  C0 01 00 0C */	lfs f0, 0xc(r1)
/* 8030FFE0 0030CF20  EC 01 00 2A */	fadds f0, f1, f0
/* 8030FFE4 0030CF24  FC 00 00 50 */	fneg f0, f0
/* 8030FFE8 0030CF28  D0 1F 00 E4 */	stfs f0, 0xe4(r31)
/* 8030FFEC 0030CF2C  48 00 00 C4 */	b .L_803100B0
.L_8030FFF0:
/* 8030FFF0 0030CF30  D0 01 00 2C */	stfs f0, 0x2c(r1)
/* 8030FFF4 0030CF34  C1 02 F3 E0 */	lfs f8, lbl_8051D740@sda21(r2)
/* 8030FFF8 0030CF38  D0 41 00 28 */	stfs f2, 0x28(r1)
/* 8030FFFC 0030CF3C  80 01 00 2C */	lwz r0, 0x2c(r1)
/* 80310000 0030CF40  FC E0 40 90 */	fmr f7, f8
/* 80310004 0030CF44  80 81 00 28 */	lwz r4, 0x28(r1)
/* 80310008 0030CF48  90 01 00 34 */	stw r0, 0x34(r1)
/* 8031000C 0030CF4C  90 81 00 30 */	stw r4, 0x30(r1)
/* 80310010 0030CF50  C0 81 00 34 */	lfs f4, 0x34(r1)
/* 80310014 0030CF54  41 82 00 28 */	beq .L_8031003C
/* 80310018 0030CF58  C0 62 F3 EC */	lfs f3, lbl_8051D74C@sda21(r2)
/* 8031001C 0030CF5C  C0 02 F3 F0 */	lfs f0, lbl_8051D750@sda21(r2)
/* 80310020 0030CF60  C0 41 00 30 */	lfs f2, 0x30(r1)
/* 80310024 0030CF64  C0 22 F3 E8 */	lfs f1, lbl_8051D748@sda21(r2)
/* 80310028 0030CF68  EC 03 01 3A */	fmadds f0, f3, f4, f0
/* 8031002C 0030CF6C  EC 23 08 BA */	fmadds f1, f3, f2, f1
/* 80310030 0030CF70  EC E7 00 2A */	fadds f7, f7, f0
/* 80310034 0030CF74  ED 08 08 2A */	fadds f8, f8, f1
/* 80310038 0030CF78  48 00 00 68 */	b .L_803100A0
.L_8031003C:
/* 8031003C 0030CF7C  80 05 00 3C */	lwz r0, 0x3c(r5)
/* 80310040 0030CF80  FC C0 40 90 */	fmr f6, f8
/* 80310044 0030CF84  2C 00 00 03 */	cmpwi r0, 3
/* 80310048 0030CF88  40 82 00 18 */	bne .L_80310060
/* 8031004C 0030CF8C  C0 42 F3 F4 */	lfs f2, lbl_8051D754@sda21(r2)
/* 80310050 0030CF90  C0 3F 00 F8 */	lfs f1, 0xf8(r31)
/* 80310054 0030CF94  C0 02 F3 F8 */	lfs f0, lbl_8051D758@sda21(r2)
/* 80310058 0030CF98  EC 22 00 72 */	fmuls f1, f2, f1
/* 8031005C 0030CF9C  EC C1 00 24 */	fdivs f6, f1, f0
.L_80310060:
/* 80310060 0030CFA0  C0 42 F4 04 */	lfs f2, lbl_8051D764@sda21(r2)
/* 80310064 0030CFA4  C0 21 00 30 */	lfs f1, 0x30(r1)
/* 80310068 0030CFA8  C0 7F 00 F8 */	lfs f3, 0xf8(r31)
/* 8031006C 0030CFAC  EC 02 01 32 */	fmuls f0, f2, f4
/* 80310070 0030CFB0  EC 42 00 72 */	fmuls f2, f2, f1
/* 80310074 0030CFB4  C0 82 F4 00 */	lfs f4, lbl_8051D760@sda21(r2)
/* 80310078 0030CFB8  C0 3F 00 FC */	lfs f1, 0xfc(r31)
/* 8031007C 0030CFBC  C0 A2 F3 FC */	lfs f5, lbl_8051D75C@sda21(r2)
/* 80310080 0030CFC0  EC 63 11 3A */	fmadds f3, f3, f4, f2
/* 80310084 0030CFC4  C0 42 F4 08 */	lfs f2, lbl_8051D768@sda21(r2)
/* 80310088 0030CFC8  EC 01 01 3A */	fmadds f0, f1, f4, f0
/* 8031008C 0030CFCC  EC 25 18 2A */	fadds f1, f5, f3
/* 80310090 0030CFD0  EC 02 00 2A */	fadds f0, f2, f0
/* 80310094 0030CFD4  EC 26 08 2A */	fadds f1, f6, f1
/* 80310098 0030CFD8  EC E7 00 2A */	fadds f7, f7, f0
/* 8031009C 0030CFDC  ED 08 08 2A */	fadds f8, f8, f1
.L_803100A0:
/* 803100A0 0030CFE0  FC 20 40 50 */	fneg f1, f8
/* 803100A4 0030CFE4  FC 00 38 50 */	fneg f0, f7
/* 803100A8 0030CFE8  D0 3F 00 E0 */	stfs f1, 0xe0(r31)
/* 803100AC 0030CFEC  D0 1F 00 E4 */	stfs f0, 0xe4(r31)
.L_803100B0:
/* 803100B0 0030CFF0  C0 3F 01 00 */	lfs f1, 0x100(r31)
/* 803100B4 0030CFF4  3C A0 6D 70 */	lis r5, 0x6D706173@ha
/* 803100B8 0030CFF8  C0 1F 00 F8 */	lfs f0, 0xf8(r31)
/* 803100BC 0030CFFC  3C 80 00 4E */	lis r4, 0x004E636F@ha
/* 803100C0 0030D000  38 C5 61 73 */	addi r6, r5, 0x6D706173@l
/* 803100C4 0030D004  EC 01 00 24 */	fdivs f0, f1, f0
/* 803100C8 0030D008  38 A4 63 6F */	addi r5, r4, 0x004E636F@l
/* 803100CC 0030D00C  D0 1F 00 F0 */	stfs f0, 0xf0(r31)
/* 803100D0 0030D010  C0 3F 01 04 */	lfs f1, 0x104(r31)
/* 803100D4 0030D014  C0 1F 00 FC */	lfs f0, 0xfc(r31)
/* 803100D8 0030D018  EC 01 00 24 */	fdivs f0, f1, f0
/* 803100DC 0030D01C  D0 1F 00 F4 */	stfs f0, 0xf4(r31)
/* 803100E0 0030D020  80 7F 00 AC */	lwz r3, 0xac(r31)
/* 803100E4 0030D024  81 83 00 00 */	lwz r12, 0(r3)
/* 803100E8 0030D028  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 803100EC 0030D02C  7D 89 03 A6 */	mtctr r12
/* 803100F0 0030D030  4E 80 04 21 */	bctrl 
/* 803100F4 0030D034  90 7F 01 28 */	stw r3, 0x128(r31)
/* 803100F8 0030D038  3C A0 70 61 */	lis r5, 0x70617373@ha
/* 803100FC 0030D03C  3C 80 00 63 */	lis r4, 0x00636F6D@ha
/* 80310100 0030D040  80 7F 01 24 */	lwz r3, 0x124(r31)
/* 80310104 0030D044  38 C5 73 73 */	addi r6, r5, 0x70617373@l
/* 80310108 0030D048  38 A4 6F 6D */	addi r5, r4, 0x00636F6D@l
/* 8031010C 0030D04C  81 83 00 00 */	lwz r12, 0(r3)
/* 80310110 0030D050  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 80310114 0030D054  7D 89 03 A6 */	mtctr r12
/* 80310118 0030D058  4E 80 04 21 */	bctrl 
/* 8031011C 0030D05C  90 7F 01 2C */	stw r3, 0x12c(r31)
/* 80310120 0030D060  3C A0 70 61 */	lis r5, 0x70617373@ha
/* 80310124 0030D064  3C 80 00 63 */	lis r4, 0x00636F6D@ha
/* 80310128 0030D068  80 7F 00 BC */	lwz r3, 0xbc(r31)
/* 8031012C 0030D06C  38 C5 73 73 */	addi r6, r5, 0x70617373@l
/* 80310130 0030D070  38 A4 6F 6D */	addi r5, r4, 0x00636F6D@l
/* 80310134 0030D074  81 83 00 00 */	lwz r12, 0(r3)
/* 80310138 0030D078  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8031013C 0030D07C  7D 89 03 A6 */	mtctr r12
/* 80310140 0030D080  4E 80 04 21 */	bctrl 
/* 80310144 0030D084  7C 77 1B 78 */	mr r23, r3
/* 80310148 0030D088  4B D2 8F 99 */	bl getParentPane__7J2DPaneFv
/* 8031014C 0030D08C  28 03 00 00 */	cmplwi r3, 0
/* 80310150 0030D090  41 82 00 14 */	beq .L_80310164
/* 80310154 0030D094  7E E3 BB 78 */	mr r3, r23
/* 80310158 0030D098  4B D2 8F 89 */	bl getParentPane__7J2DPaneFv
/* 8031015C 0030D09C  7E E4 BB 78 */	mr r4, r23
/* 80310160 0030D0A0  4B D2 76 D5 */	bl removeChild__7J2DPaneFP7J2DPane
.L_80310164:
/* 80310164 0030D0A4  38 60 03 20 */	li r3, 0x320
/* 80310168 0030D0A8  4B D1 3E 45 */	bl __nwa__FUl
/* 8031016C 0030D0AC  3B 00 00 00 */	li r24, 0
/* 80310170 0030D0B0  90 7F 00 CC */	stw r3, 0xcc(r31)
/* 80310174 0030D0B4  7F 17 C3 78 */	mr r23, r24
/* 80310178 0030D0B8  3B 40 00 00 */	li r26, 0
.L_8031017C:
/* 8031017C 0030D0BC  38 60 00 04 */	li r3, 4
/* 80310180 0030D0C0  4B D1 3D 25 */	bl __nw__FUl
/* 80310184 0030D0C4  28 03 00 00 */	cmplwi r3, 0
/* 80310188 0030D0C8  41 82 00 08 */	beq .L_80310190
/* 8031018C 0030D0CC  92 E3 00 00 */	stw r23, 0(r3)
.L_80310190:
/* 80310190 0030D0D0  80 9F 00 CC */	lwz r4, 0xcc(r31)
/* 80310194 0030D0D4  3B 5A 00 01 */	addi r26, r26, 1
/* 80310198 0030D0D8  2C 1A 00 C8 */	cmpwi r26, 0xc8
/* 8031019C 0030D0DC  7C 64 C1 2E */	stwx r3, r4, r24
/* 803101A0 0030D0E0  3B 18 00 04 */	addi r24, r24, 4
/* 803101A4 0030D0E4  41 80 FF D8 */	blt .L_8031017C
/* 803101A8 0030D0E8  38 00 00 00 */	li r0, 0
/* 803101AC 0030D0EC  3B A0 00 00 */	li r29, 0
/* 803101B0 0030D0F0  90 1F 01 54 */	stw r0, 0x154(r31)
/* 803101B4 0030D0F4  80 6D 95 B0 */	lwz r3, mgr__5Radar@sda21(r13)
/* 803101B8 0030D0F8  28 03 00 00 */	cmplwi r3, 0
/* 803101BC 0030D0FC  41 82 08 20 */	beq .L_803109DC
/* 803101C0 0030D100  80 9F 00 A8 */	lwz r4, 0xa8(r31)
/* 803101C4 0030D104  88 04 00 4A */	lbz r0, 0x4a(r4)
/* 803101C8 0030D108  28 00 00 00 */	cmplwi r0, 0
/* 803101CC 0030D10C  40 82 00 08 */	bne .L_803101D4
/* 803101D0 0030D110  4B F0 E7 85 */	bl ogDummpyInit__Q25Radar3MgrFv
.L_803101D4:
/* 803101D4 0030D114  80 CD 95 B0 */	lwz r6, mgr__5Radar@sda21(r13)
/* 803101D8 0030D118  3C A0 80 51 */	lis r5, msVal__Q32og9newScreen11ObjSMenuMap@ha
/* 803101DC 0030D11C  3C 80 80 4E */	lis r4, map_icon_tag__Q22og9newScreen@ha
/* 803101E0 0030D120  3B 40 00 00 */	li r26, 0
/* 803101E4 0030D124  83 86 00 10 */	lwz r28, 0x10(r6)
/* 803101E8 0030D128  3B C5 3C 40 */	addi r30, r5, msVal__Q32og9newScreen11ObjSMenuMap@l
/* 803101EC 0030D12C  3B 04 83 A8 */	addi r24, r4, map_icon_tag__Q22og9newScreen@l
/* 803101F0 0030D130  48 00 07 E4 */	b .L_803109D4
.L_803101F4:
/* 803101F4 0030D134  82 FC 00 18 */	lwz r23, 0x18(r28)
/* 803101F8 0030D138  2C 17 00 00 */	cmpwi r23, 0
/* 803101FC 0030D13C  41 80 00 0C */	blt .L_80310208
/* 80310200 0030D140  2C 17 00 16 */	cmpwi r23, 0x16
/* 80310204 0030D144  41 80 00 1C */	blt .L_80310220
.L_80310208:
/* 80310208 0030D148  7E E6 BB 78 */	mr r6, r23
/* 8031020C 0030D14C  38 79 00 0C */	addi r3, r25, 0xc
/* 80310210 0030D150  38 B9 00 B8 */	addi r5, r25, 0xb8
/* 80310214 0030D154  38 80 02 39 */	li r4, 0x239
/* 80310218 0030D158  4C C6 31 82 */	crclr 6
/* 8031021C 0030D15C  4B D1 A4 25 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80310220:
/* 80310220 0030D160  7F 84 E3 78 */	mr r4, r28
/* 80310224 0030D164  38 61 00 40 */	addi r3, r1, 0x40
/* 80310228 0030D168  4B F0 E0 65 */	bl getPosition__Q25Radar5PointFv
/* 8031022C 0030D16C  C0 01 00 44 */	lfs f0, 0x44(r1)
/* 80310230 0030D170  C0 21 00 40 */	lfs f1, 0x40(r1)
/* 80310234 0030D174  D0 01 00 4C */	stfs f0, 0x4c(r1)
/* 80310238 0030D178  80 BF 00 A8 */	lwz r5, 0xa8(r31)
/* 8031023C 0030D17C  D0 21 00 48 */	stfs f1, 0x48(r1)
/* 80310240 0030D180  C3 C2 F3 E0 */	lfs f30, lbl_8051D740@sda21(r2)
/* 80310244 0030D184  D0 21 00 4C */	stfs f1, 0x4c(r1)
/* 80310248 0030D188  88 05 00 49 */	lbz r0, 0x49(r5)
/* 8031024C 0030D18C  FF E0 F0 90 */	fmr f31, f30
/* 80310250 0030D190  D0 01 00 48 */	stfs f0, 0x48(r1)
/* 80310254 0030D194  80 81 00 4C */	lwz r4, 0x4c(r1)
/* 80310258 0030D198  28 00 00 00 */	cmplwi r0, 0
/* 8031025C 0030D19C  80 01 00 48 */	lwz r0, 0x48(r1)
/* 80310260 0030D1A0  90 81 00 3C */	stw r4, 0x3c(r1)
/* 80310264 0030D1A4  90 01 00 38 */	stw r0, 0x38(r1)
/* 80310268 0030D1A8  C0 81 00 3C */	lfs f4, 0x3c(r1)
/* 8031026C 0030D1AC  41 82 00 28 */	beq .L_80310294
/* 80310270 0030D1B0  C0 62 F3 EC */	lfs f3, lbl_8051D74C@sda21(r2)
/* 80310274 0030D1B4  C0 02 F3 F0 */	lfs f0, lbl_8051D750@sda21(r2)
/* 80310278 0030D1B8  C0 41 00 38 */	lfs f2, 0x38(r1)
/* 8031027C 0030D1BC  C0 22 F3 E8 */	lfs f1, lbl_8051D748@sda21(r2)
/* 80310280 0030D1C0  EC 03 01 3A */	fmadds f0, f3, f4, f0
/* 80310284 0030D1C4  EC 23 08 BA */	fmadds f1, f3, f2, f1
/* 80310288 0030D1C8  EF FF 00 2A */	fadds f31, f31, f0
/* 8031028C 0030D1CC  EF DE 08 2A */	fadds f30, f30, f1
/* 80310290 0030D1D0  48 00 00 68 */	b .L_803102F8
.L_80310294:
/* 80310294 0030D1D4  80 05 00 3C */	lwz r0, 0x3c(r5)
/* 80310298 0030D1D8  FC C0 F0 90 */	fmr f6, f30
/* 8031029C 0030D1DC  2C 00 00 03 */	cmpwi r0, 3
/* 803102A0 0030D1E0  40 82 00 18 */	bne .L_803102B8
/* 803102A4 0030D1E4  C0 42 F3 F4 */	lfs f2, lbl_8051D754@sda21(r2)
/* 803102A8 0030D1E8  C0 3F 00 F8 */	lfs f1, 0xf8(r31)
/* 803102AC 0030D1EC  C0 02 F3 F8 */	lfs f0, lbl_8051D758@sda21(r2)
/* 803102B0 0030D1F0  EC 22 00 72 */	fmuls f1, f2, f1
/* 803102B4 0030D1F4  EC C1 00 24 */	fdivs f6, f1, f0
.L_803102B8:
/* 803102B8 0030D1F8  C0 42 F4 04 */	lfs f2, lbl_8051D764@sda21(r2)
/* 803102BC 0030D1FC  C0 21 00 38 */	lfs f1, 0x38(r1)
/* 803102C0 0030D200  C0 7F 00 F8 */	lfs f3, 0xf8(r31)
/* 803102C4 0030D204  EC 02 01 32 */	fmuls f0, f2, f4
/* 803102C8 0030D208  EC 42 00 72 */	fmuls f2, f2, f1
/* 803102CC 0030D20C  C0 82 F4 00 */	lfs f4, lbl_8051D760@sda21(r2)
/* 803102D0 0030D210  C0 3F 00 FC */	lfs f1, 0xfc(r31)
/* 803102D4 0030D214  C0 A2 F3 FC */	lfs f5, lbl_8051D75C@sda21(r2)
/* 803102D8 0030D218  EC 63 11 3A */	fmadds f3, f3, f4, f2
/* 803102DC 0030D21C  C0 42 F4 08 */	lfs f2, lbl_8051D768@sda21(r2)
/* 803102E0 0030D220  EC 01 01 3A */	fmadds f0, f1, f4, f0
/* 803102E4 0030D224  EC 25 18 2A */	fadds f1, f5, f3
/* 803102E8 0030D228  EC 02 00 2A */	fadds f0, f2, f0
/* 803102EC 0030D22C  EC 26 08 2A */	fadds f1, f6, f1
/* 803102F0 0030D230  EF FF 00 2A */	fadds f31, f31, f0
/* 803102F4 0030D234  EF DE 08 2A */	fadds f30, f30, f1
.L_803102F8:
/* 803102F8 0030D238  56 E0 18 38 */	slwi r0, r23, 3
/* 803102FC 0030D23C  80 7F 00 BC */	lwz r3, 0xbc(r31)
/* 80310300 0030D240  7C 98 02 14 */	add r4, r24, r0
/* 80310304 0030D244  82 C4 00 00 */	lwz r22, 0(r4)
/* 80310308 0030D248  82 A4 00 04 */	lwz r21, 4(r4)
/* 8031030C 0030D24C  7E C5 B3 78 */	mr r5, r22
/* 80310310 0030D250  7E A6 AB 78 */	mr r6, r21
/* 80310314 0030D254  4B FF 2B 99 */	bl TagSearch__Q22og6ScreenFP9J2DScreenUx
/* 80310318 0030D258  81 83 00 00 */	lwz r12, 0(r3)
/* 8031031C 0030D25C  7C 7B 1B 78 */	mr r27, r3
/* 80310320 0030D260  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 80310324 0030D264  7D 89 03 A6 */	mtctr r12
/* 80310328 0030D268  4E 80 04 21 */	bctrl 
/* 8031032C 0030D26C  7E A4 AB 78 */	mr r4, r21
/* 80310330 0030D270  7E C3 B3 78 */	mr r3, r22
/* 80310334 0030D274  38 A1 00 88 */	addi r5, r1, 0x88
/* 80310338 0030D278  4B FF 28 95 */	bl TagToName__Q22og6ScreenFUxPc
/* 8031033C 0030D27C  2C 17 00 0F */	cmpwi r23, 0xf
/* 80310340 0030D280  41 82 04 E8 */	beq .L_80310828
/* 80310344 0030D284  40 80 00 14 */	bge .L_80310358
/* 80310348 0030D288  2C 17 00 0D */	cmpwi r23, 0xd
/* 8031034C 0030D28C  41 82 02 7C */	beq .L_803105C8
/* 80310350 0030D290  40 80 00 14 */	bge .L_80310364
/* 80310354 0030D294  48 00 04 D4 */	b .L_80310828
.L_80310358:
/* 80310358 0030D298  2C 17 00 14 */	cmpwi r23, 0x14
/* 8031035C 0030D29C  40 80 04 CC */	bge .L_80310828
/* 80310360 0030D2A0  48 00 06 68 */	b .L_803109C8
.L_80310364:
/* 80310364 0030D2A4  38 00 00 00 */	li r0, 0
/* 80310368 0030D2A8  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 8031036C 0030D2AC  3C 80 80 4B */	lis r4, "__vt__22Iterator<Q24Game4Navi>"@ha
/* 80310370 0030D2B0  90 01 00 6C */	stw r0, 0x6c(r1)
/* 80310374 0030D2B4  38 84 BC B4 */	addi r4, r4, "__vt__22Iterator<Q24Game4Navi>"@l
/* 80310378 0030D2B8  28 00 00 00 */	cmplwi r0, 0
/* 8031037C 0030D2BC  90 81 00 60 */	stw r4, 0x60(r1)
/* 80310380 0030D2C0  90 01 00 64 */	stw r0, 0x64(r1)
/* 80310384 0030D2C4  90 61 00 68 */	stw r3, 0x68(r1)
/* 80310388 0030D2C8  40 82 00 1C */	bne .L_803103A4
/* 8031038C 0030D2CC  81 83 00 00 */	lwz r12, 0(r3)
/* 80310390 0030D2D0  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80310394 0030D2D4  7D 89 03 A6 */	mtctr r12
/* 80310398 0030D2D8  4E 80 04 21 */	bctrl 
/* 8031039C 0030D2DC  90 61 00 64 */	stw r3, 0x64(r1)
/* 803103A0 0030D2E0  48 00 01 8C */	b .L_8031052C
.L_803103A4:
/* 803103A4 0030D2E4  81 83 00 00 */	lwz r12, 0(r3)
/* 803103A8 0030D2E8  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 803103AC 0030D2EC  7D 89 03 A6 */	mtctr r12
/* 803103B0 0030D2F0  4E 80 04 21 */	bctrl 
/* 803103B4 0030D2F4  90 61 00 64 */	stw r3, 0x64(r1)
/* 803103B8 0030D2F8  48 00 00 58 */	b .L_80310410
.L_803103BC:
/* 803103BC 0030D2FC  80 61 00 68 */	lwz r3, 0x68(r1)
/* 803103C0 0030D300  80 81 00 64 */	lwz r4, 0x64(r1)
/* 803103C4 0030D304  81 83 00 00 */	lwz r12, 0(r3)
/* 803103C8 0030D308  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 803103CC 0030D30C  7D 89 03 A6 */	mtctr r12
/* 803103D0 0030D310  4E 80 04 21 */	bctrl 
/* 803103D4 0030D314  7C 64 1B 78 */	mr r4, r3
/* 803103D8 0030D318  80 61 00 6C */	lwz r3, 0x6c(r1)
/* 803103DC 0030D31C  81 83 00 00 */	lwz r12, 0(r3)
/* 803103E0 0030D320  81 8C 00 08 */	lwz r12, 8(r12)
/* 803103E4 0030D324  7D 89 03 A6 */	mtctr r12
/* 803103E8 0030D328  4E 80 04 21 */	bctrl 
/* 803103EC 0030D32C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803103F0 0030D330  40 82 01 3C */	bne .L_8031052C
/* 803103F4 0030D334  80 61 00 68 */	lwz r3, 0x68(r1)
/* 803103F8 0030D338  80 81 00 64 */	lwz r4, 0x64(r1)
/* 803103FC 0030D33C  81 83 00 00 */	lwz r12, 0(r3)
/* 80310400 0030D340  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80310404 0030D344  7D 89 03 A6 */	mtctr r12
/* 80310408 0030D348  4E 80 04 21 */	bctrl 
/* 8031040C 0030D34C  90 61 00 64 */	stw r3, 0x64(r1)
.L_80310410:
/* 80310410 0030D350  81 81 00 60 */	lwz r12, 0x60(r1)
/* 80310414 0030D354  38 61 00 60 */	addi r3, r1, 0x60
/* 80310418 0030D358  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8031041C 0030D35C  7D 89 03 A6 */	mtctr r12
/* 80310420 0030D360  4E 80 04 21 */	bctrl 
/* 80310424 0030D364  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80310428 0030D368  41 82 FF 94 */	beq .L_803103BC
/* 8031042C 0030D36C  48 00 01 00 */	b .L_8031052C
.L_80310430:
/* 80310430 0030D370  80 61 00 68 */	lwz r3, 0x68(r1)
/* 80310434 0030D374  81 83 00 00 */	lwz r12, 0(r3)
/* 80310438 0030D378  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8031043C 0030D37C  7D 89 03 A6 */	mtctr r12
/* 80310440 0030D380  4E 80 04 21 */	bctrl 
/* 80310444 0030D384  81 83 00 00 */	lwz r12, 0(r3)
/* 80310448 0030D388  7C 77 1B 78 */	mr r23, r3
/* 8031044C 0030D38C  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 80310450 0030D390  7D 89 03 A6 */	mtctr r12
/* 80310454 0030D394  4E 80 04 21 */	bctrl 
/* 80310458 0030D398  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8031045C 0030D39C  41 82 00 14 */	beq .L_80310470
/* 80310460 0030D3A0  A0 17 02 DC */	lhz r0, 0x2dc(r23)
/* 80310464 0030D3A4  2C 00 00 00 */	cmpwi r0, 0
/* 80310468 0030D3A8  40 82 00 08 */	bne .L_80310470
/* 8031046C 0030D3AC  48 00 00 E4 */	b .L_80310550
.L_80310470:
/* 80310470 0030D3B0  80 01 00 6C */	lwz r0, 0x6c(r1)
/* 80310474 0030D3B4  28 00 00 00 */	cmplwi r0, 0
/* 80310478 0030D3B8  40 82 00 24 */	bne .L_8031049C
/* 8031047C 0030D3BC  80 61 00 68 */	lwz r3, 0x68(r1)
/* 80310480 0030D3C0  80 81 00 64 */	lwz r4, 0x64(r1)
/* 80310484 0030D3C4  81 83 00 00 */	lwz r12, 0(r3)
/* 80310488 0030D3C8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8031048C 0030D3CC  7D 89 03 A6 */	mtctr r12
/* 80310490 0030D3D0  4E 80 04 21 */	bctrl 
/* 80310494 0030D3D4  90 61 00 64 */	stw r3, 0x64(r1)
/* 80310498 0030D3D8  48 00 00 94 */	b .L_8031052C
.L_8031049C:
/* 8031049C 0030D3DC  80 61 00 68 */	lwz r3, 0x68(r1)
/* 803104A0 0030D3E0  80 81 00 64 */	lwz r4, 0x64(r1)
/* 803104A4 0030D3E4  81 83 00 00 */	lwz r12, 0(r3)
/* 803104A8 0030D3E8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 803104AC 0030D3EC  7D 89 03 A6 */	mtctr r12
/* 803104B0 0030D3F0  4E 80 04 21 */	bctrl 
/* 803104B4 0030D3F4  90 61 00 64 */	stw r3, 0x64(r1)
/* 803104B8 0030D3F8  48 00 00 58 */	b .L_80310510
.L_803104BC:
/* 803104BC 0030D3FC  80 61 00 68 */	lwz r3, 0x68(r1)
/* 803104C0 0030D400  80 81 00 64 */	lwz r4, 0x64(r1)
/* 803104C4 0030D404  81 83 00 00 */	lwz r12, 0(r3)
/* 803104C8 0030D408  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 803104CC 0030D40C  7D 89 03 A6 */	mtctr r12
/* 803104D0 0030D410  4E 80 04 21 */	bctrl 
/* 803104D4 0030D414  7C 64 1B 78 */	mr r4, r3
/* 803104D8 0030D418  80 61 00 6C */	lwz r3, 0x6c(r1)
/* 803104DC 0030D41C  81 83 00 00 */	lwz r12, 0(r3)
/* 803104E0 0030D420  81 8C 00 08 */	lwz r12, 8(r12)
/* 803104E4 0030D424  7D 89 03 A6 */	mtctr r12
/* 803104E8 0030D428  4E 80 04 21 */	bctrl 
/* 803104EC 0030D42C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803104F0 0030D430  40 82 00 3C */	bne .L_8031052C
/* 803104F4 0030D434  80 61 00 68 */	lwz r3, 0x68(r1)
/* 803104F8 0030D438  80 81 00 64 */	lwz r4, 0x64(r1)
/* 803104FC 0030D43C  81 83 00 00 */	lwz r12, 0(r3)
/* 80310500 0030D440  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80310504 0030D444  7D 89 03 A6 */	mtctr r12
/* 80310508 0030D448  4E 80 04 21 */	bctrl 
/* 8031050C 0030D44C  90 61 00 64 */	stw r3, 0x64(r1)
.L_80310510:
/* 80310510 0030D450  81 81 00 60 */	lwz r12, 0x60(r1)
/* 80310514 0030D454  38 61 00 60 */	addi r3, r1, 0x60
/* 80310518 0030D458  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8031051C 0030D45C  7D 89 03 A6 */	mtctr r12
/* 80310520 0030D460  4E 80 04 21 */	bctrl 
/* 80310524 0030D464  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80310528 0030D468  41 82 FF 94 */	beq .L_803104BC
.L_8031052C:
/* 8031052C 0030D46C  80 61 00 68 */	lwz r3, 0x68(r1)
/* 80310530 0030D470  81 83 00 00 */	lwz r12, 0(r3)
/* 80310534 0030D474  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80310538 0030D478  7D 89 03 A6 */	mtctr r12
/* 8031053C 0030D47C  4E 80 04 21 */	bctrl 
/* 80310540 0030D480  80 81 00 64 */	lwz r4, 0x64(r1)
/* 80310544 0030D484  7C 04 18 40 */	cmplw r4, r3
/* 80310548 0030D488  40 82 FE E8 */	bne .L_80310430
/* 8031054C 0030D48C  3A E0 00 00 */	li r23, 0
.L_80310550:
/* 80310550 0030D490  92 FF 00 D4 */	stw r23, 0xd4(r31)
/* 80310554 0030D494  80 1F 00 D4 */	lwz r0, 0xd4(r31)
/* 80310558 0030D498  28 00 00 00 */	cmplwi r0, 0
/* 8031055C 0030D49C  41 82 04 6C */	beq .L_803109C8
/* 80310560 0030D4A0  3C A0 6D 61 */	lis r5, 0x6D615F6C@ha
/* 80310564 0030D4A4  3C 80 00 6F */	lis r4, 0x006F7269@ha
/* 80310568 0030D4A8  80 7F 00 BC */	lwz r3, 0xbc(r31)
/* 8031056C 0030D4AC  38 C5 5F 6C */	addi r6, r5, 0x6D615F6C@l
/* 80310570 0030D4B0  38 A4 72 69 */	addi r5, r4, 0x006F7269@l
/* 80310574 0030D4B4  4B FF 29 39 */	bl TagSearch__Q22og6ScreenFP9J2DScreenUx
/* 80310578 0030D4B8  FC 20 F0 90 */	fmr f1, f30
/* 8031057C 0030D4BC  3C C0 72 69 */	lis r6, 0x72696D61@ha
/* 80310580 0030D4C0  3C A0 69 65 */	lis r5, 0x69655F4F@ha
/* 80310584 0030D4C4  FC 40 F8 90 */	fmr f2, f31
/* 80310588 0030D4C8  80 9F 00 C8 */	lwz r4, 0xc8(r31)
/* 8031058C 0030D4CC  38 C6 6D 61 */	addi r6, r6, 0x72696D61@l
/* 80310590 0030D4D0  38 A5 5F 4F */	addi r5, r5, 0x69655F4F@l
/* 80310594 0030D4D4  4B FF E6 BD */	bl CopyPictureToPane__Q22og6ScreenFP12J2DPictureExP7J2DPaneffUx
/* 80310598 0030D4D8  90 7F 01 30 */	stw r3, 0x130(r31)
/* 8031059C 0030D4DC  3C C0 72 69 */	lis r6, 0x72696D61@ha
/* 803105A0 0030D4E0  FC 20 F0 90 */	fmr f1, f30
/* 803105A4 0030D4E4  3C A0 69 63 */	lis r5, 0x69635F4F@ha
/* 803105A8 0030D4E8  FC 40 F8 90 */	fmr f2, f31
/* 803105AC 0030D4EC  80 9F 00 C8 */	lwz r4, 0xc8(r31)
/* 803105B0 0030D4F0  7F 63 DB 78 */	mr r3, r27
/* 803105B4 0030D4F4  38 C6 6D 61 */	addi r6, r6, 0x72696D61@l
/* 803105B8 0030D4F8  38 A5 5F 4F */	addi r5, r5, 0x69635F4F@l
/* 803105BC 0030D4FC  4B FF E6 95 */	bl CopyPictureToPane__Q22og6ScreenFP12J2DPictureExP7J2DPaneffUx
/* 803105C0 0030D500  90 7F 00 D0 */	stw r3, 0xd0(r31)
/* 803105C4 0030D504  48 00 04 04 */	b .L_803109C8
.L_803105C8:
/* 803105C8 0030D508  38 00 00 00 */	li r0, 0
/* 803105CC 0030D50C  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 803105D0 0030D510  3C 80 80 4B */	lis r4, "__vt__22Iterator<Q24Game4Navi>"@ha
/* 803105D4 0030D514  90 01 00 5C */	stw r0, 0x5c(r1)
/* 803105D8 0030D518  38 84 BC B4 */	addi r4, r4, "__vt__22Iterator<Q24Game4Navi>"@l
/* 803105DC 0030D51C  28 00 00 00 */	cmplwi r0, 0
/* 803105E0 0030D520  90 81 00 50 */	stw r4, 0x50(r1)
/* 803105E4 0030D524  90 01 00 54 */	stw r0, 0x54(r1)
/* 803105E8 0030D528  90 61 00 58 */	stw r3, 0x58(r1)
/* 803105EC 0030D52C  40 82 00 1C */	bne .L_80310608
/* 803105F0 0030D530  81 83 00 00 */	lwz r12, 0(r3)
/* 803105F4 0030D534  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 803105F8 0030D538  7D 89 03 A6 */	mtctr r12
/* 803105FC 0030D53C  4E 80 04 21 */	bctrl 
/* 80310600 0030D540  90 61 00 54 */	stw r3, 0x54(r1)
/* 80310604 0030D544  48 00 01 8C */	b .L_80310790
.L_80310608:
/* 80310608 0030D548  81 83 00 00 */	lwz r12, 0(r3)
/* 8031060C 0030D54C  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80310610 0030D550  7D 89 03 A6 */	mtctr r12
/* 80310614 0030D554  4E 80 04 21 */	bctrl 
/* 80310618 0030D558  90 61 00 54 */	stw r3, 0x54(r1)
/* 8031061C 0030D55C  48 00 00 58 */	b .L_80310674
.L_80310620:
/* 80310620 0030D560  80 61 00 58 */	lwz r3, 0x58(r1)
/* 80310624 0030D564  80 81 00 54 */	lwz r4, 0x54(r1)
/* 80310628 0030D568  81 83 00 00 */	lwz r12, 0(r3)
/* 8031062C 0030D56C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80310630 0030D570  7D 89 03 A6 */	mtctr r12
/* 80310634 0030D574  4E 80 04 21 */	bctrl 
/* 80310638 0030D578  7C 64 1B 78 */	mr r4, r3
/* 8031063C 0030D57C  80 61 00 5C */	lwz r3, 0x5c(r1)
/* 80310640 0030D580  81 83 00 00 */	lwz r12, 0(r3)
/* 80310644 0030D584  81 8C 00 08 */	lwz r12, 8(r12)
/* 80310648 0030D588  7D 89 03 A6 */	mtctr r12
/* 8031064C 0030D58C  4E 80 04 21 */	bctrl 
/* 80310650 0030D590  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80310654 0030D594  40 82 01 3C */	bne .L_80310790
/* 80310658 0030D598  80 61 00 58 */	lwz r3, 0x58(r1)
/* 8031065C 0030D59C  80 81 00 54 */	lwz r4, 0x54(r1)
/* 80310660 0030D5A0  81 83 00 00 */	lwz r12, 0(r3)
/* 80310664 0030D5A4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80310668 0030D5A8  7D 89 03 A6 */	mtctr r12
/* 8031066C 0030D5AC  4E 80 04 21 */	bctrl 
/* 80310670 0030D5B0  90 61 00 54 */	stw r3, 0x54(r1)
.L_80310674:
/* 80310674 0030D5B4  81 81 00 50 */	lwz r12, 0x50(r1)
/* 80310678 0030D5B8  38 61 00 50 */	addi r3, r1, 0x50
/* 8031067C 0030D5BC  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80310680 0030D5C0  7D 89 03 A6 */	mtctr r12
/* 80310684 0030D5C4  4E 80 04 21 */	bctrl 
/* 80310688 0030D5C8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8031068C 0030D5CC  41 82 FF 94 */	beq .L_80310620
/* 80310690 0030D5D0  48 00 01 00 */	b .L_80310790
.L_80310694:
/* 80310694 0030D5D4  80 61 00 58 */	lwz r3, 0x58(r1)
/* 80310698 0030D5D8  81 83 00 00 */	lwz r12, 0(r3)
/* 8031069C 0030D5DC  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 803106A0 0030D5E0  7D 89 03 A6 */	mtctr r12
/* 803106A4 0030D5E4  4E 80 04 21 */	bctrl 
/* 803106A8 0030D5E8  81 83 00 00 */	lwz r12, 0(r3)
/* 803106AC 0030D5EC  7C 77 1B 78 */	mr r23, r3
/* 803106B0 0030D5F0  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 803106B4 0030D5F4  7D 89 03 A6 */	mtctr r12
/* 803106B8 0030D5F8  4E 80 04 21 */	bctrl 
/* 803106BC 0030D5FC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803106C0 0030D600  41 82 00 14 */	beq .L_803106D4
/* 803106C4 0030D604  A0 17 02 DC */	lhz r0, 0x2dc(r23)
/* 803106C8 0030D608  2C 00 00 01 */	cmpwi r0, 1
/* 803106CC 0030D60C  40 82 00 08 */	bne .L_803106D4
/* 803106D0 0030D610  48 00 00 E4 */	b .L_803107B4
.L_803106D4:
/* 803106D4 0030D614  80 01 00 5C */	lwz r0, 0x5c(r1)
/* 803106D8 0030D618  28 00 00 00 */	cmplwi r0, 0
/* 803106DC 0030D61C  40 82 00 24 */	bne .L_80310700
/* 803106E0 0030D620  80 61 00 58 */	lwz r3, 0x58(r1)
/* 803106E4 0030D624  80 81 00 54 */	lwz r4, 0x54(r1)
/* 803106E8 0030D628  81 83 00 00 */	lwz r12, 0(r3)
/* 803106EC 0030D62C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 803106F0 0030D630  7D 89 03 A6 */	mtctr r12
/* 803106F4 0030D634  4E 80 04 21 */	bctrl 
/* 803106F8 0030D638  90 61 00 54 */	stw r3, 0x54(r1)
/* 803106FC 0030D63C  48 00 00 94 */	b .L_80310790
.L_80310700:
/* 80310700 0030D640  80 61 00 58 */	lwz r3, 0x58(r1)
/* 80310704 0030D644  80 81 00 54 */	lwz r4, 0x54(r1)
/* 80310708 0030D648  81 83 00 00 */	lwz r12, 0(r3)
/* 8031070C 0030D64C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80310710 0030D650  7D 89 03 A6 */	mtctr r12
/* 80310714 0030D654  4E 80 04 21 */	bctrl 
/* 80310718 0030D658  90 61 00 54 */	stw r3, 0x54(r1)
/* 8031071C 0030D65C  48 00 00 58 */	b .L_80310774
.L_80310720:
/* 80310720 0030D660  80 61 00 58 */	lwz r3, 0x58(r1)
/* 80310724 0030D664  80 81 00 54 */	lwz r4, 0x54(r1)
/* 80310728 0030D668  81 83 00 00 */	lwz r12, 0(r3)
/* 8031072C 0030D66C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80310730 0030D670  7D 89 03 A6 */	mtctr r12
/* 80310734 0030D674  4E 80 04 21 */	bctrl 
/* 80310738 0030D678  7C 64 1B 78 */	mr r4, r3
/* 8031073C 0030D67C  80 61 00 5C */	lwz r3, 0x5c(r1)
/* 80310740 0030D680  81 83 00 00 */	lwz r12, 0(r3)
/* 80310744 0030D684  81 8C 00 08 */	lwz r12, 8(r12)
/* 80310748 0030D688  7D 89 03 A6 */	mtctr r12
/* 8031074C 0030D68C  4E 80 04 21 */	bctrl 
/* 80310750 0030D690  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80310754 0030D694  40 82 00 3C */	bne .L_80310790
/* 80310758 0030D698  80 61 00 58 */	lwz r3, 0x58(r1)
/* 8031075C 0030D69C  80 81 00 54 */	lwz r4, 0x54(r1)
/* 80310760 0030D6A0  81 83 00 00 */	lwz r12, 0(r3)
/* 80310764 0030D6A4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80310768 0030D6A8  7D 89 03 A6 */	mtctr r12
/* 8031076C 0030D6AC  4E 80 04 21 */	bctrl 
/* 80310770 0030D6B0  90 61 00 54 */	stw r3, 0x54(r1)
.L_80310774:
/* 80310774 0030D6B4  81 81 00 50 */	lwz r12, 0x50(r1)
/* 80310778 0030D6B8  38 61 00 50 */	addi r3, r1, 0x50
/* 8031077C 0030D6BC  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80310780 0030D6C0  7D 89 03 A6 */	mtctr r12
/* 80310784 0030D6C4  4E 80 04 21 */	bctrl 
/* 80310788 0030D6C8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8031078C 0030D6CC  41 82 FF 94 */	beq .L_80310720
.L_80310790:
/* 80310790 0030D6D0  80 61 00 58 */	lwz r3, 0x58(r1)
/* 80310794 0030D6D4  81 83 00 00 */	lwz r12, 0(r3)
/* 80310798 0030D6D8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8031079C 0030D6DC  7D 89 03 A6 */	mtctr r12
/* 803107A0 0030D6E0  4E 80 04 21 */	bctrl 
/* 803107A4 0030D6E4  80 81 00 54 */	lwz r4, 0x54(r1)
/* 803107A8 0030D6E8  7C 04 18 40 */	cmplw r4, r3
/* 803107AC 0030D6EC  40 82 FE E8 */	bne .L_80310694
/* 803107B0 0030D6F0  3A E0 00 00 */	li r23, 0
.L_803107B4:
/* 803107B4 0030D6F4  92 FF 00 DC */	stw r23, 0xdc(r31)
/* 803107B8 0030D6F8  80 1F 00 DC */	lwz r0, 0xdc(r31)
/* 803107BC 0030D6FC  28 00 00 00 */	cmplwi r0, 0
/* 803107C0 0030D700  41 82 02 08 */	beq .L_803109C8
/* 803107C4 0030D704  3C 80 6A 69 */	lis r4, 0x6A695F6C@ha
/* 803107C8 0030D708  80 7F 00 BC */	lwz r3, 0xbc(r31)
/* 803107CC 0030D70C  38 C4 5F 6C */	addi r6, r4, 0x6A695F6C@l
/* 803107D0 0030D710  38 A0 6C 75 */	li r5, 0x6c75
/* 803107D4 0030D714  4B FF 26 D9 */	bl TagSearch__Q22og6ScreenFP9J2DScreenUx
/* 803107D8 0030D718  FC 20 F0 90 */	fmr f1, f30
/* 803107DC 0030D71C  3C C0 4C 75 */	lis r6, 0x4C756A69@ha
/* 803107E0 0030D720  3C A0 00 69 */	lis r5, 0x0069655F@ha
/* 803107E4 0030D724  FC 40 F8 90 */	fmr f2, f31
/* 803107E8 0030D728  80 9F 00 C8 */	lwz r4, 0xc8(r31)
/* 803107EC 0030D72C  38 C6 6A 69 */	addi r6, r6, 0x4C756A69@l
/* 803107F0 0030D730  38 A5 65 5F */	addi r5, r5, 0x0069655F@l
/* 803107F4 0030D734  4B FF E4 5D */	bl CopyPictureToPane__Q22og6ScreenFP12J2DPictureExP7J2DPaneffUx
/* 803107F8 0030D738  90 7F 01 34 */	stw r3, 0x134(r31)
/* 803107FC 0030D73C  3C C0 4C 75 */	lis r6, 0x4C756A69@ha
/* 80310800 0030D740  FC 20 F0 90 */	fmr f1, f30
/* 80310804 0030D744  3C A0 00 69 */	lis r5, 0x0069635F@ha
/* 80310808 0030D748  FC 40 F8 90 */	fmr f2, f31
/* 8031080C 0030D74C  80 9F 00 C8 */	lwz r4, 0xc8(r31)
/* 80310810 0030D750  7F 63 DB 78 */	mr r3, r27
/* 80310814 0030D754  38 C6 6A 69 */	addi r6, r6, 0x4C756A69@l
/* 80310818 0030D758  38 A5 63 5F */	addi r5, r5, 0x0069635F@l
/* 8031081C 0030D75C  4B FF E4 35 */	bl CopyPictureToPane__Q22og6ScreenFP12J2DPictureExP7J2DPaneffUx
/* 80310820 0030D760  90 7F 00 D8 */	stw r3, 0xd8(r31)
/* 80310824 0030D764  48 00 01 A4 */	b .L_803109C8
.L_80310828:
/* 80310828 0030D768  3C 80 66 66 */	lis r4, 0x66666667@ha
/* 8031082C 0030D76C  3C A0 5F 30 */	lis r5, 0x5F303030@ha
/* 80310830 0030D770  38 04 66 67 */	addi r0, r4, 0x66666667@l
/* 80310834 0030D774  3C C0 69 63 */	lis r6, 0x69636F6E@ha
/* 80310838 0030D778  7D 60 E8 96 */	mulhw r11, r0, r29
/* 8031083C 0030D77C  38 E5 30 30 */	addi r7, r5, 0x5F303030@l
/* 80310840 0030D780  3C 80 51 EC */	lis r4, 0x51EB851F@ha
/* 80310844 0030D784  FC 20 F0 90 */	fmr f1, f30
/* 80310848 0030D788  38 C6 6F 6E */	addi r6, r6, 0x69636F6E@l
/* 8031084C 0030D78C  FC 40 F8 90 */	fmr f2, f31
/* 80310850 0030D790  7D 68 16 70 */	srawi r8, r11, 2
/* 80310854 0030D794  38 A4 85 1F */	addi r5, r4, 0x51EB851F@l
/* 80310858 0030D798  55 09 0F FE */	srwi r9, r8, 0x1f
/* 8031085C 0030D79C  80 9F 00 C8 */	lwz r4, 0xc8(r31)
/* 80310860 0030D7A0  7D 08 4A 14 */	add r8, r8, r9
/* 80310864 0030D7A4  7F 63 DB 78 */	mr r3, r27
/* 80310868 0030D7A8  1D 08 00 0A */	mulli r8, r8, 0xa
/* 8031086C 0030D7AC  7D 28 E8 50 */	subf r9, r8, r29
/* 80310870 0030D7B0  7D 28 FE 70 */	srawi r8, r9, 0x1f
/* 80310874 0030D7B4  7D 49 38 14 */	addc r10, r9, r7
/* 80310878 0030D7B8  7D 28 31 14 */	adde r9, r8, r6
/* 8031087C 0030D7BC  7D 66 16 70 */	srawi r6, r11, 2
/* 80310880 0030D7C0  54 C7 0F FE */	srwi r7, r6, 0x1f
/* 80310884 0030D7C4  7D 06 3A 14 */	add r8, r6, r7
/* 80310888 0030D7C8  7C C0 40 96 */	mulhw r6, r0, r8
/* 8031088C 0030D7CC  7C C6 16 70 */	srawi r6, r6, 2
/* 80310890 0030D7D0  54 C7 0F FE */	srwi r7, r6, 0x1f
/* 80310894 0030D7D4  7C C6 3A 14 */	add r6, r6, r7
/* 80310898 0030D7D8  1C C6 00 0A */	mulli r6, r6, 0xa
/* 8031089C 0030D7DC  7C C6 40 50 */	subf r6, r6, r8
/* 803108A0 0030D7E0  54 C7 40 2E */	slwi r7, r6, 8
/* 803108A4 0030D7E4  7C E6 FE 70 */	srawi r6, r7, 0x1f
/* 803108A8 0030D7E8  7D 0A 38 14 */	addc r8, r10, r7
/* 803108AC 0030D7EC  7C A5 E8 96 */	mulhw r5, r5, r29
/* 803108B0 0030D7F0  7C E9 31 14 */	adde r7, r9, r6
/* 803108B4 0030D7F4  7C A5 2E 70 */	srawi r5, r5, 5
/* 803108B8 0030D7F8  54 A6 0F FE */	srwi r6, r5, 0x1f
/* 803108BC 0030D7FC  7C C5 32 14 */	add r6, r5, r6
/* 803108C0 0030D800  7C 00 30 96 */	mulhw r0, r0, r6
/* 803108C4 0030D804  7C 00 16 70 */	srawi r0, r0, 2
/* 803108C8 0030D808  54 05 0F FE */	srwi r5, r0, 0x1f
/* 803108CC 0030D80C  7C 00 2A 14 */	add r0, r0, r5
/* 803108D0 0030D810  1C 00 00 0A */	mulli r0, r0, 0xa
/* 803108D4 0030D814  7C 00 30 50 */	subf r0, r0, r6
/* 803108D8 0030D818  54 05 80 1E */	slwi r5, r0, 0x10
/* 803108DC 0030D81C  7C A0 FE 70 */	srawi r0, r5, 0x1f
/* 803108E0 0030D820  7C C8 28 14 */	addc r6, r8, r5
/* 803108E4 0030D824  7C A7 01 14 */	adde r5, r7, r0
/* 803108E8 0030D828  4B FF E3 69 */	bl CopyPictureToPane__Q22og6ScreenFP12J2DPictureExP7J2DPaneffUx
/* 803108EC 0030D82C  7C 7B 1B 79 */	or. r27, r3, r3
/* 803108F0 0030D830  41 82 00 D8 */	beq .L_803109C8
/* 803108F4 0030D834  2C 17 00 12 */	cmpwi r23, 0x12
/* 803108F8 0030D838  40 82 00 80 */	bne .L_80310978
/* 803108FC 0030D83C  88 FE 00 13 */	lbz r7, 0x13(r30)
/* 80310900 0030D840  38 81 00 14 */	addi r4, r1, 0x14
/* 80310904 0030D844  88 DE 00 14 */	lbz r6, 0x14(r30)
/* 80310908 0030D848  88 BE 00 15 */	lbz r5, 0x15(r30)
/* 8031090C 0030D84C  88 1E 00 16 */	lbz r0, 0x16(r30)
/* 80310910 0030D850  98 E1 00 24 */	stb r7, 0x24(r1)
/* 80310914 0030D854  89 1E 00 17 */	lbz r8, 0x17(r30)
/* 80310918 0030D858  98 C1 00 25 */	stb r6, 0x25(r1)
/* 8031091C 0030D85C  88 FE 00 18 */	lbz r7, 0x18(r30)
/* 80310920 0030D860  98 A1 00 26 */	stb r5, 0x26(r1)
/* 80310924 0030D864  88 DE 00 19 */	lbz r6, 0x19(r30)
/* 80310928 0030D868  98 01 00 27 */	stb r0, 0x27(r1)
/* 8031092C 0030D86C  88 BE 00 1A */	lbz r5, 0x1a(r30)
/* 80310930 0030D870  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80310934 0030D874  99 01 00 20 */	stb r8, 0x20(r1)
/* 80310938 0030D878  90 01 00 14 */	stw r0, 0x14(r1)
/* 8031093C 0030D87C  81 83 00 00 */	lwz r12, 0(r3)
/* 80310940 0030D880  98 E1 00 21 */	stb r7, 0x21(r1)
/* 80310944 0030D884  81 8C 01 2C */	lwz r12, 0x12c(r12)
/* 80310948 0030D888  98 C1 00 22 */	stb r6, 0x22(r1)
/* 8031094C 0030D88C  98 A1 00 23 */	stb r5, 0x23(r1)
/* 80310950 0030D890  7D 89 03 A6 */	mtctr r12
/* 80310954 0030D894  4E 80 04 21 */	bctrl 
/* 80310958 0030D898  80 01 00 20 */	lwz r0, 0x20(r1)
/* 8031095C 0030D89C  7F 63 DB 78 */	mr r3, r27
/* 80310960 0030D8A0  38 81 00 10 */	addi r4, r1, 0x10
/* 80310964 0030D8A4  90 01 00 10 */	stw r0, 0x10(r1)
/* 80310968 0030D8A8  81 9B 00 00 */	lwz r12, 0(r27)
/* 8031096C 0030D8AC  81 8C 01 28 */	lwz r12, 0x128(r12)
/* 80310970 0030D8B0  7D 89 03 A6 */	mtctr r12
/* 80310974 0030D8B4  4E 80 04 21 */	bctrl 
.L_80310978:
/* 80310978 0030D8B8  2C 17 00 0B */	cmpwi r23, 0xb
/* 8031097C 0030D8BC  41 82 00 0C */	beq .L_80310988
/* 80310980 0030D8C0  2C 17 00 14 */	cmpwi r23, 0x14
/* 80310984 0030D8C4  40 82 00 30 */	bne .L_803109B4
.L_80310988:
/* 80310988 0030D8C8  80 7C 00 20 */	lwz r3, 0x20(r28)
/* 8031098C 0030D8CC  48 00 C3 F5 */	bl caveIDtoMsgID__Q22og9newScreenFUl
/* 80310990 0030D8D0  38 A0 00 01 */	li r5, 1
/* 80310994 0030D8D4  38 C0 00 03 */	li r6, 3
/* 80310998 0030D8D8  4B FF 1F 89 */	bl maskTag__Q22og6ScreenFUxUsUs
/* 8031099C 0030D8DC  7C 67 1B 78 */	mr r7, r3
/* 803109A0 0030D8E0  7C 88 23 78 */	mr r8, r4
/* 803109A4 0030D8E4  7F E3 FB 78 */	mr r3, r31
/* 803109A8 0030D8E8  7F 64 DB 78 */	mr r4, r27
/* 803109AC 0030D8EC  57 A5 04 3E */	clrlwi r5, r29, 0x10
/* 803109B0 0030D8F0  48 00 00 5D */	bl appendCaveName__Q32og9newScreen11ObjSMenuMapFP7J2DPaneUsUx
.L_803109B4:
/* 803109B4 0030D8F4  80 9F 00 CC */	lwz r4, 0xcc(r31)
/* 803109B8 0030D8F8  3B BD 00 01 */	addi r29, r29, 1
/* 803109BC 0030D8FC  7C 84 D0 2E */	lwzx r4, r4, r26
/* 803109C0 0030D900  3B 5A 00 04 */	addi r26, r26, 4
/* 803109C4 0030D904  93 64 00 00 */	stw r27, 0(r4)
.L_803109C8:
/* 803109C8 0030D908  2C 1D 00 C8 */	cmpwi r29, 0xc8
/* 803109CC 0030D90C  40 80 00 10 */	bge .L_803109DC
/* 803109D0 0030D910  83 9C 00 04 */	lwz r28, 4(r28)
.L_803109D4:
/* 803109D4 0030D914  28 1C 00 00 */	cmplwi r28, 0
/* 803109D8 0030D918  40 82 F8 1C */	bne .L_803101F4
.L_803109DC:
/* 803109DC 0030D91C  93 BF 01 1C */	stw r29, 0x11c(r31)
/* 803109E0 0030D920  7F E3 FB 78 */	mr r3, r31
/* 803109E4 0030D924  4B FF F1 FD */	bl tuningIcon__Q32og9newScreen11ObjSMenuMapFv
/* 803109E8 0030D928  E3 E1 00 E8 */	psq_l f31, 232(r1), 0, qr0
/* 803109EC 0030D92C  CB E1 00 E0 */	lfd f31, 0xe0(r1)
/* 803109F0 0030D930  E3 C1 00 D8 */	psq_l f30, 216(r1), 0, qr0
/* 803109F4 0030D934  CB C1 00 D0 */	lfd f30, 0xd0(r1)
/* 803109F8 0030D938  BA A1 00 A4 */	lmw r21, 0xa4(r1)
/* 803109FC 0030D93C  80 01 00 F4 */	lwz r0, 0xf4(r1)
/* 80310A00 0030D940  7C 08 03 A6 */	mtlr r0
/* 80310A04 0030D944  38 21 00 F0 */	addi r1, r1, 0xf0
/* 80310A08 0030D948  4E 80 00 20 */	blr 
.endfn initMapIcon__Q32og9newScreen11ObjSMenuMapFP10JKRArchive

.fn appendCaveName__Q32og9newScreen11ObjSMenuMapFP7J2DPaneUsUx, global
/* 80310A0C 0030D94C  94 21 FF 90 */	stwu r1, -0x70(r1)
/* 80310A10 0030D950  7C 08 02 A6 */	mflr r0
/* 80310A14 0030D954  3D 20 54 78 */	lis r9, 0x54783F3F@ha
/* 80310A18 0030D958  3C C0 63 61 */	lis r6, 0x63617665@ha
/* 80310A1C 0030D95C  90 01 00 74 */	stw r0, 0x74(r1)
/* 80310A20 0030D960  BF 21 00 54 */	stmw r25, 0x54(r1)
/* 80310A24 0030D964  7C 7B 1B 78 */	mr r27, r3
/* 80310A28 0030D968  7C 9C 23 78 */	mr r28, r4
/* 80310A2C 0030D96C  7C FE 3B 78 */	mr r30, r7
/* 80310A30 0030D970  7D 1D 43 78 */	mr r29, r8
/* 80310A34 0030D974  38 89 3F 3F */	addi r4, r9, 0x54783F3F@l
/* 80310A38 0030D978  38 66 76 65 */	addi r3, r6, 0x63617665@l
/* 80310A3C 0030D97C  4B FF 1D D9 */	bl maskTag2__Q22og6ScreenFUxUs
/* 80310A40 0030D980  7C 99 23 78 */	mr r25, r4
/* 80310A44 0030D984  7C 7A 1B 78 */	mr r26, r3
/* 80310A48 0030D988  7F A4 EB 78 */	mr r4, r29
/* 80310A4C 0030D98C  7F C3 F3 78 */	mr r3, r30
/* 80310A50 0030D990  38 A1 00 40 */	addi r5, r1, 0x40
/* 80310A54 0030D994  4B FF 21 79 */	bl TagToName__Q22og6ScreenFUxPc
/* 80310A58 0030D998  C0 62 F4 18 */	lfs f3, lbl_8051D778@sda21(r2)
/* 80310A5C 0030D99C  38 60 01 38 */	li r3, 0x138
/* 80310A60 0030D9A0  C0 42 F3 E0 */	lfs f2, lbl_8051D740@sda21(r2)
/* 80310A64 0030D9A4  C0 22 F4 1C */	lfs f1, lbl_8051D77C@sda21(r2)
/* 80310A68 0030D9A8  C0 02 F4 20 */	lfs f0, lbl_8051D780@sda21(r2)
/* 80310A6C 0030D9AC  D0 61 00 30 */	stfs f3, 0x30(r1)
/* 80310A70 0030D9B0  D0 41 00 34 */	stfs f2, 0x34(r1)
/* 80310A74 0030D9B4  D0 21 00 38 */	stfs f1, 0x38(r1)
/* 80310A78 0030D9B8  D0 01 00 3C */	stfs f0, 0x3c(r1)
/* 80310A7C 0030D9BC  4B D1 34 29 */	bl __nw__FUl
/* 80310A80 0030D9C0  7C 7F 1B 79 */	or. r31, r3, r3
/* 80310A84 0030D9C4  41 82 00 30 */	beq .L_80310AB4
/* 80310A88 0030D9C8  38 00 00 02 */	li r0, 2
/* 80310A8C 0030D9CC  7F 26 CB 78 */	mr r6, r25
/* 80310A90 0030D9D0  90 01 00 08 */	stw r0, 8(r1)
/* 80310A94 0030D9D4  7F 45 D3 78 */	mr r5, r26
/* 80310A98 0030D9D8  38 E1 00 30 */	addi r7, r1, 0x30
/* 80310A9C 0030D9DC  39 00 00 00 */	li r8, 0
/* 80310AA0 0030D9E0  90 01 00 0C */	stw r0, 0xc(r1)
/* 80310AA4 0030D9E4  39 22 F4 24 */	addi r9, r2, lbl_8051D784@sda21
/* 80310AA8 0030D9E8  39 40 FF FF */	li r10, -1
/* 80310AAC 0030D9EC  4B D3 0A 41 */	bl "__ct__10J2DTextBoxFUxRCQ29JGeometry8TBox2<f>PC7ResFONTPCcs18J2DTextBoxHBinding18J2DTextBoxVBinding"
/* 80310AB0 0030D9F0  7C 7F 1B 78 */	mr r31, r3
.L_80310AB4:
/* 80310AB4 0030D9F4  39 00 00 FF */	li r8, 0xff
/* 80310AB8 0030D9F8  38 00 00 00 */	li r0, 0
/* 80310ABC 0030D9FC  99 01 00 2C */	stb r8, 0x2c(r1)
/* 80310AC0 0030DA00  7F E3 FB 78 */	mr r3, r31
/* 80310AC4 0030DA04  C0 02 F4 28 */	lfs f0, lbl_8051D788@sda21(r2)
/* 80310AC8 0030DA08  38 81 00 14 */	addi r4, r1, 0x14
/* 80310ACC 0030DA0C  99 01 00 2D */	stb r8, 0x2d(r1)
/* 80310AD0 0030DA10  38 A1 00 10 */	addi r5, r1, 0x10
/* 80310AD4 0030DA14  D0 1F 01 1C */	stfs f0, 0x11c(r31)
/* 80310AD8 0030DA18  99 01 00 2E */	stb r8, 0x2e(r1)
/* 80310ADC 0030DA1C  99 01 00 2F */	stb r8, 0x2f(r1)
/* 80310AE0 0030DA20  80 C1 00 2C */	lwz r6, 0x2c(r1)
/* 80310AE4 0030DA24  D0 1F 01 20 */	stfs f0, 0x120(r31)
/* 80310AE8 0030DA28  90 C1 00 1C */	stw r6, 0x1c(r1)
/* 80310AEC 0030DA2C  88 E1 00 1C */	lbz r7, 0x1c(r1)
/* 80310AF0 0030DA30  99 01 00 28 */	stb r8, 0x28(r1)
/* 80310AF4 0030DA34  88 C1 00 1D */	lbz r6, 0x1d(r1)
/* 80310AF8 0030DA38  98 FF 01 04 */	stb r7, 0x104(r31)
/* 80310AFC 0030DA3C  88 E1 00 1E */	lbz r7, 0x1e(r1)
/* 80310B00 0030DA40  98 DF 01 05 */	stb r6, 0x105(r31)
/* 80310B04 0030DA44  88 C1 00 1F */	lbz r6, 0x1f(r1)
/* 80310B08 0030DA48  98 FF 01 06 */	stb r7, 0x106(r31)
/* 80310B0C 0030DA4C  99 01 00 29 */	stb r8, 0x29(r1)
/* 80310B10 0030DA50  99 01 00 2A */	stb r8, 0x2a(r1)
/* 80310B14 0030DA54  99 01 00 2B */	stb r8, 0x2b(r1)
/* 80310B18 0030DA58  80 E1 00 28 */	lwz r7, 0x28(r1)
/* 80310B1C 0030DA5C  98 DF 01 07 */	stb r6, 0x107(r31)
/* 80310B20 0030DA60  90 E1 00 18 */	stw r7, 0x18(r1)
/* 80310B24 0030DA64  88 C1 00 18 */	lbz r6, 0x18(r1)
/* 80310B28 0030DA68  88 E1 00 19 */	lbz r7, 0x19(r1)
/* 80310B2C 0030DA6C  98 DF 01 08 */	stb r6, 0x108(r31)
/* 80310B30 0030DA70  88 C1 00 1A */	lbz r6, 0x1a(r1)
/* 80310B34 0030DA74  98 FF 01 09 */	stb r7, 0x109(r31)
/* 80310B38 0030DA78  88 E1 00 1B */	lbz r7, 0x1b(r1)
/* 80310B3C 0030DA7C  98 DF 01 0A */	stb r6, 0x10a(r31)
/* 80310B40 0030DA80  99 01 00 24 */	stb r8, 0x24(r1)
/* 80310B44 0030DA84  99 01 00 25 */	stb r8, 0x25(r1)
/* 80310B48 0030DA88  99 01 00 26 */	stb r8, 0x26(r1)
/* 80310B4C 0030DA8C  99 01 00 27 */	stb r8, 0x27(r1)
/* 80310B50 0030DA90  98 01 00 20 */	stb r0, 0x20(r1)
/* 80310B54 0030DA94  80 C1 00 24 */	lwz r6, 0x24(r1)
/* 80310B58 0030DA98  98 FF 01 0B */	stb r7, 0x10b(r31)
/* 80310B5C 0030DA9C  98 01 00 21 */	stb r0, 0x21(r1)
/* 80310B60 0030DAA0  98 01 00 22 */	stb r0, 0x22(r1)
/* 80310B64 0030DAA4  98 01 00 23 */	stb r0, 0x23(r1)
/* 80310B68 0030DAA8  80 01 00 20 */	lwz r0, 0x20(r1)
/* 80310B6C 0030DAAC  90 C1 00 10 */	stw r6, 0x10(r1)
/* 80310B70 0030DAB0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80310B74 0030DAB4  81 9F 00 00 */	lwz r12, 0(r31)
/* 80310B78 0030DAB8  81 8C 00 AC */	lwz r12, 0xac(r12)
/* 80310B7C 0030DABC  7D 89 03 A6 */	mtctr r12
/* 80310B80 0030DAC0  4E 80 04 21 */	bctrl 
/* 80310B84 0030DAC4  7F 83 E3 78 */	mr r3, r28
/* 80310B88 0030DAC8  7F E4 FB 78 */	mr r4, r31
/* 80310B8C 0030DACC  4B D2 6B 39 */	bl appendChild__7J2DPaneFP7J2DPane
/* 80310B90 0030DAD0  93 BF 00 1C */	stw r29, 0x1c(r31)
/* 80310B94 0030DAD4  93 DF 00 18 */	stw r30, 0x18(r31)
/* 80310B98 0030DAD8  80 1B 01 54 */	lwz r0, 0x154(r27)
/* 80310B9C 0030DADC  2C 00 00 05 */	cmpwi r0, 5
/* 80310BA0 0030DAE0  40 80 00 20 */	bge .L_80310BC0
/* 80310BA4 0030DAE4  54 00 10 3A */	slwi r0, r0, 2
/* 80310BA8 0030DAE8  7C 7B 02 14 */	add r3, r27, r0
/* 80310BAC 0030DAEC  93 E3 01 40 */	stw r31, 0x140(r3)
/* 80310BB0 0030DAF0  80 7B 01 54 */	lwz r3, 0x154(r27)
/* 80310BB4 0030DAF4  38 03 00 01 */	addi r0, r3, 1
/* 80310BB8 0030DAF8  90 1B 01 54 */	stw r0, 0x154(r27)
/* 80310BBC 0030DAFC  48 00 00 20 */	b .L_80310BDC
.L_80310BC0:
/* 80310BC0 0030DB00  3C 60 80 49 */	lis r3, lbl_8048E1B4@ha
/* 80310BC4 0030DB04  3C A0 80 49 */	lis r5, lbl_8048E278@ha
/* 80310BC8 0030DB08  38 63 E1 B4 */	addi r3, r3, lbl_8048E1B4@l
/* 80310BCC 0030DB0C  38 80 02 E9 */	li r4, 0x2e9
/* 80310BD0 0030DB10  38 A5 E2 78 */	addi r5, r5, lbl_8048E278@l
/* 80310BD4 0030DB14  4C C6 31 82 */	crclr 6
/* 80310BD8 0030DB18  4B D1 9A 69 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80310BDC:
/* 80310BDC 0030DB1C  BB 21 00 54 */	lmw r25, 0x54(r1)
/* 80310BE0 0030DB20  80 01 00 74 */	lwz r0, 0x74(r1)
/* 80310BE4 0030DB24  7C 08 03 A6 */	mtlr r0
/* 80310BE8 0030DB28  38 21 00 70 */	addi r1, r1, 0x70
/* 80310BEC 0030DB2C  4E 80 00 20 */	blr 
.endfn appendCaveName__Q32og9newScreen11ObjSMenuMapFP7J2DPaneUsUx

.fn transMap__Q32og9newScreen11ObjSMenuMapFv, global
/* 80310BF0 0030DB30  94 21 FF 80 */	stwu r1, -0x80(r1)
/* 80310BF4 0030DB34  7C 08 02 A6 */	mflr r0
/* 80310BF8 0030DB38  90 01 00 84 */	stw r0, 0x84(r1)
/* 80310BFC 0030DB3C  DB E1 00 70 */	stfd f31, 0x70(r1)
/* 80310C00 0030DB40  F3 E1 00 78 */	psq_st f31, 120(r1), 0, qr0
/* 80310C04 0030DB44  DB C1 00 60 */	stfd f30, 0x60(r1)
/* 80310C08 0030DB48  F3 C1 00 68 */	psq_st f30, 104(r1), 0, qr0
/* 80310C0C 0030DB4C  DB A1 00 50 */	stfd f29, 0x50(r1)
/* 80310C10 0030DB50  F3 A1 00 58 */	psq_st f29, 88(r1), 0, qr0
/* 80310C14 0030DB54  DB 81 00 40 */	stfd f28, 0x40(r1)
/* 80310C18 0030DB58  F3 81 00 48 */	psq_st f28, 72(r1), 0, qr0
/* 80310C1C 0030DB5C  DB 61 00 30 */	stfd f27, 0x30(r1)
/* 80310C20 0030DB60  F3 61 00 38 */	psq_st f27, 56(r1), 0, qr0
/* 80310C24 0030DB64  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 80310C28 0030DB68  7C 7F 1B 78 */	mr r31, r3
/* 80310C2C 0030DB6C  3C 60 80 51 */	lis r3, msVal__Q32og9newScreen11ObjSMenuMap@ha
/* 80310C30 0030DB70  80 1F 00 C0 */	lwz r0, 0xc0(r31)
/* 80310C34 0030DB74  38 63 3C 40 */	addi r3, r3, msVal__Q32og9newScreen11ObjSMenuMap@l
/* 80310C38 0030DB78  C0 03 00 1C */	lfs f0, 0x1c(r3)
/* 80310C3C 0030DB7C  28 00 00 00 */	cmplwi r0, 0
/* 80310C40 0030DB80  41 82 00 08 */	beq .L_80310C48
/* 80310C44 0030DB84  C0 03 00 20 */	lfs f0, 0x20(r3)
.L_80310C48:
/* 80310C48 0030DB88  C0 62 F4 2C */	lfs f3, lbl_8051D78C@sda21(r2)
/* 80310C4C 0030DB8C  C0 3F 00 EC */	lfs f1, 0xec(r31)
/* 80310C50 0030DB90  C0 42 F4 30 */	lfs f2, lbl_8051D790@sda21(r2)
/* 80310C54 0030DB94  EC 63 00 72 */	fmuls f3, f3, f1
/* 80310C58 0030DB98  C0 22 F3 E0 */	lfs f1, lbl_8051D740@sda21(r2)
/* 80310C5C 0030DB9C  EC 83 10 24 */	fdivs f4, f3, f2
/* 80310C60 0030DBA0  FC 40 20 90 */	fmr f2, f4
/* 80310C64 0030DBA4  FC 04 08 40 */	fcmpo cr0, f4, f1
/* 80310C68 0030DBA8  40 80 00 08 */	bge .L_80310C70
/* 80310C6C 0030DBAC  FC 40 20 50 */	fneg f2, f4
.L_80310C70:
/* 80310C70 0030DBB0  C0 62 F4 34 */	lfs f3, lbl_8051D794@sda21(r2)
/* 80310C74 0030DBB4  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 80310C78 0030DBB8  C0 22 F3 E0 */	lfs f1, lbl_8051D740@sda21(r2)
/* 80310C7C 0030DBBC  38 83 71 A0 */	addi r4, r3, sincosTable___5JMath@l
/* 80310C80 0030DBC0  EC 42 00 F2 */	fmuls f2, f2, f3
/* 80310C84 0030DBC4  FC 04 08 40 */	fcmpo cr0, f4, f1
/* 80310C88 0030DBC8  FC 20 10 1E */	fctiwz f1, f2
/* 80310C8C 0030DBCC  D8 21 00 08 */	stfd f1, 8(r1)
/* 80310C90 0030DBD0  80 01 00 0C */	lwz r0, 0xc(r1)
/* 80310C94 0030DBD4  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 80310C98 0030DBD8  7C 64 02 14 */	add r3, r4, r0
/* 80310C9C 0030DBDC  C3 E3 00 04 */	lfs f31, 4(r3)
/* 80310CA0 0030DBE0  40 80 00 28 */	bge .L_80310CC8
/* 80310CA4 0030DBE4  C0 22 F4 38 */	lfs f1, lbl_8051D798@sda21(r2)
/* 80310CA8 0030DBE8  EC 24 00 72 */	fmuls f1, f4, f1
/* 80310CAC 0030DBEC  FC 20 08 1E */	fctiwz f1, f1
/* 80310CB0 0030DBF0  D8 21 00 10 */	stfd f1, 0x10(r1)
/* 80310CB4 0030DBF4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80310CB8 0030DBF8  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 80310CBC 0030DBFC  7C 24 04 2E */	lfsx f1, r4, r0
/* 80310CC0 0030DC00  FF C0 08 50 */	fneg f30, f1
/* 80310CC4 0030DC04  48 00 00 1C */	b .L_80310CE0
.L_80310CC8:
/* 80310CC8 0030DC08  EC 24 00 F2 */	fmuls f1, f4, f3
/* 80310CCC 0030DC0C  FC 20 08 1E */	fctiwz f1, f1
/* 80310CD0 0030DC10  D8 21 00 18 */	stfd f1, 0x18(r1)
/* 80310CD4 0030DC14  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 80310CD8 0030DC18  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 80310CDC 0030DC1C  7F C4 04 2E */	lfsx f30, r4, r0
.L_80310CE0:
/* 80310CE0 0030DC20  80 7F 01 18 */	lwz r3, 0x118(r31)
/* 80310CE4 0030DC24  80 83 00 18 */	lwz r4, 0x18(r3)
/* 80310CE8 0030DC28  C3 83 00 48 */	lfs f28, 0x48(r3)
/* 80310CEC 0030DC2C  54 80 07 39 */	rlwinm. r0, r4, 0, 0x1c, 0x1c
/* 80310CF0 0030DC30  C3 63 00 4C */	lfs f27, 0x4c(r3)
/* 80310CF4 0030DC34  41 82 00 08 */	beq .L_80310CFC
/* 80310CF8 0030DC38  C3 62 F3 E4 */	lfs f27, lbl_8051D744@sda21(r2)
.L_80310CFC:
/* 80310CFC 0030DC3C  54 80 07 7B */	rlwinm. r0, r4, 0, 0x1d, 0x1d
/* 80310D00 0030DC40  41 82 00 08 */	beq .L_80310D08
/* 80310D04 0030DC44  C3 62 F4 3C */	lfs f27, lbl_8051D79C@sda21(r2)
.L_80310D08:
/* 80310D08 0030DC48  54 80 07 FF */	clrlwi. r0, r4, 0x1f
/* 80310D0C 0030DC4C  41 82 00 08 */	beq .L_80310D14
/* 80310D10 0030DC50  C3 82 F4 3C */	lfs f28, lbl_8051D79C@sda21(r2)
.L_80310D14:
/* 80310D14 0030DC54  54 80 07 BD */	rlwinm. r0, r4, 0, 0x1e, 0x1e
/* 80310D18 0030DC58  41 82 00 08 */	beq .L_80310D20
/* 80310D1C 0030DC5C  C3 82 F3 E4 */	lfs f28, lbl_8051D744@sda21(r2)
.L_80310D20:
/* 80310D20 0030DC60  EC 7C 07 32 */	fmuls f3, f28, f28
/* 80310D24 0030DC64  C0 22 F3 E0 */	lfs f1, lbl_8051D740@sda21(r2)
/* 80310D28 0030DC68  EC 5B 06 F2 */	fmuls f2, f27, f27
/* 80310D2C 0030DC6C  EC 43 10 2A */	fadds f2, f3, f2
/* 80310D30 0030DC70  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 80310D34 0030DC74  40 81 00 14 */	ble .L_80310D48
/* 80310D38 0030DC78  40 81 00 14 */	ble .L_80310D4C
/* 80310D3C 0030DC7C  FC 20 10 34 */	frsqrte f1, f2
/* 80310D40 0030DC80  EC 41 00 B2 */	fmuls f2, f1, f2
/* 80310D44 0030DC84  48 00 00 08 */	b .L_80310D4C
.L_80310D48:
/* 80310D48 0030DC88  FC 40 08 90 */	fmr f2, f1
.L_80310D4C:
/* 80310D4C 0030DC8C  C0 22 F3 E4 */	lfs f1, lbl_8051D744@sda21(r2)
/* 80310D50 0030DC90  FC 60 10 90 */	fmr f3, f2
/* 80310D54 0030DC94  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 80310D58 0030DC98  40 81 00 08 */	ble .L_80310D60
/* 80310D5C 0030DC9C  FC 60 08 90 */	fmr f3, f1
.L_80310D60:
/* 80310D60 0030DCA0  3C 60 80 51 */	lis r3, msVal__Q32og9newScreen11ObjSMenuMap@ha
/* 80310D64 0030DCA4  C0 22 F4 40 */	lfs f1, lbl_8051D7A0@sda21(r2)
/* 80310D68 0030DCA8  38 63 3C 40 */	addi r3, r3, msVal__Q32og9newScreen11ObjSMenuMap@l
/* 80310D6C 0030DCAC  C0 43 00 3C */	lfs f2, 0x3c(r3)
/* 80310D70 0030DCB0  EC 83 00 B2 */	fmuls f4, f3, f2
/* 80310D74 0030DCB4  FC 04 08 40 */	fcmpo cr0, f4, f1
/* 80310D78 0030DCB8  40 80 00 08 */	bge .L_80310D80
/* 80310D7C 0030DCBC  C0 82 F3 E0 */	lfs f4, lbl_8051D740@sda21(r2)
.L_80310D80:
/* 80310D80 0030DCC0  C0 62 F3 E4 */	lfs f3, lbl_8051D744@sda21(r2)
/* 80310D84 0030DCC4  C0 5F 00 E8 */	lfs f2, 0xe8(r31)
/* 80310D88 0030DCC8  C0 22 F4 40 */	lfs f1, lbl_8051D7A0@sda21(r2)
/* 80310D8C 0030DCCC  EC 43 10 24 */	fdivs f2, f3, f2
/* 80310D90 0030DCD0  EC 00 00 B2 */	fmuls f0, f0, f2
/* 80310D94 0030DCD4  FC 1C 08 40 */	fcmpo cr0, f28, f1
/* 80310D98 0030DCD8  EF A4 00 32 */	fmuls f29, f4, f0
/* 80310D9C 0030DCDC  40 81 00 24 */	ble .L_80310DC0
/* 80310DA0 0030DCE0  C0 1F 00 E0 */	lfs f0, 0xe0(r31)
/* 80310DA4 0030DCE4  EC 1D 07 FC */	fnmsubs f0, f29, f31, f0
/* 80310DA8 0030DCE8  D0 1F 00 E0 */	stfs f0, 0xe0(r31)
/* 80310DAC 0030DCEC  C0 1F 00 E4 */	lfs f0, 0xe4(r31)
/* 80310DB0 0030DCF0  EC 1D 07 BC */	fnmsubs f0, f29, f30, f0
/* 80310DB4 0030DCF4  D0 1F 00 E4 */	stfs f0, 0xe4(r31)
/* 80310DB8 0030DCF8  80 6D 97 A8 */	lwz r3, ogSound__2og@sda21(r13)
/* 80310DBC 0030DCFC  4B FF BF 3D */	bl setScroll__Q22og5SoundFv
.L_80310DC0:
/* 80310DC0 0030DD00  C0 02 F4 44 */	lfs f0, lbl_8051D7A4@sda21(r2)
/* 80310DC4 0030DD04  FC 1C 00 40 */	fcmpo cr0, f28, f0
/* 80310DC8 0030DD08  40 80 00 24 */	bge .L_80310DEC
/* 80310DCC 0030DD0C  C0 1F 00 E0 */	lfs f0, 0xe0(r31)
/* 80310DD0 0030DD10  EC 1D 07 FA */	fmadds f0, f29, f31, f0
/* 80310DD4 0030DD14  D0 1F 00 E0 */	stfs f0, 0xe0(r31)
/* 80310DD8 0030DD18  C0 1F 00 E4 */	lfs f0, 0xe4(r31)
/* 80310DDC 0030DD1C  EC 1D 07 BA */	fmadds f0, f29, f30, f0
/* 80310DE0 0030DD20  D0 1F 00 E4 */	stfs f0, 0xe4(r31)
/* 80310DE4 0030DD24  80 6D 97 A8 */	lwz r3, ogSound__2og@sda21(r13)
/* 80310DE8 0030DD28  4B FF BF 11 */	bl setScroll__Q22og5SoundFv
.L_80310DEC:
/* 80310DEC 0030DD2C  C0 02 F4 40 */	lfs f0, lbl_8051D7A0@sda21(r2)
/* 80310DF0 0030DD30  FC 1B 00 40 */	fcmpo cr0, f27, f0
/* 80310DF4 0030DD34  40 81 00 24 */	ble .L_80310E18
/* 80310DF8 0030DD38  C0 1F 00 E0 */	lfs f0, 0xe0(r31)
/* 80310DFC 0030DD3C  EC 1D 07 BC */	fnmsubs f0, f29, f30, f0
/* 80310E00 0030DD40  D0 1F 00 E0 */	stfs f0, 0xe0(r31)
/* 80310E04 0030DD44  C0 1F 00 E4 */	lfs f0, 0xe4(r31)
/* 80310E08 0030DD48  EC 1D 07 FA */	fmadds f0, f29, f31, f0
/* 80310E0C 0030DD4C  D0 1F 00 E4 */	stfs f0, 0xe4(r31)
/* 80310E10 0030DD50  80 6D 97 A8 */	lwz r3, ogSound__2og@sda21(r13)
/* 80310E14 0030DD54  4B FF BE E5 */	bl setScroll__Q22og5SoundFv
.L_80310E18:
/* 80310E18 0030DD58  C0 02 F4 44 */	lfs f0, lbl_8051D7A4@sda21(r2)
/* 80310E1C 0030DD5C  FC 1B 00 40 */	fcmpo cr0, f27, f0
/* 80310E20 0030DD60  40 80 00 24 */	bge .L_80310E44
/* 80310E24 0030DD64  C0 1F 00 E0 */	lfs f0, 0xe0(r31)
/* 80310E28 0030DD68  EC 1D 07 BA */	fmadds f0, f29, f30, f0
/* 80310E2C 0030DD6C  D0 1F 00 E0 */	stfs f0, 0xe0(r31)
/* 80310E30 0030DD70  C0 1F 00 E4 */	lfs f0, 0xe4(r31)
/* 80310E34 0030DD74  EC 1D 07 FC */	fnmsubs f0, f29, f31, f0
/* 80310E38 0030DD78  D0 1F 00 E4 */	stfs f0, 0xe4(r31)
/* 80310E3C 0030DD7C  80 6D 97 A8 */	lwz r3, ogSound__2og@sda21(r13)
/* 80310E40 0030DD80  4B FF BE B9 */	bl setScroll__Q22og5SoundFv
.L_80310E44:
/* 80310E44 0030DD84  C0 1F 00 F8 */	lfs f0, 0xf8(r31)
/* 80310E48 0030DD88  C0 3F 00 E0 */	lfs f1, 0xe0(r31)
/* 80310E4C 0030DD8C  FC 00 00 50 */	fneg f0, f0
/* 80310E50 0030DD90  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80310E54 0030DD94  40 80 00 08 */	bge .L_80310E5C
/* 80310E58 0030DD98  D0 1F 00 E0 */	stfs f0, 0xe0(r31)
.L_80310E5C:
/* 80310E5C 0030DD9C  C0 3F 00 E0 */	lfs f1, 0xe0(r31)
/* 80310E60 0030DDA0  C0 02 F3 E0 */	lfs f0, lbl_8051D740@sda21(r2)
/* 80310E64 0030DDA4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80310E68 0030DDA8  40 81 00 08 */	ble .L_80310E70
/* 80310E6C 0030DDAC  D0 1F 00 E0 */	stfs f0, 0xe0(r31)
.L_80310E70:
/* 80310E70 0030DDB0  C0 1F 00 FC */	lfs f0, 0xfc(r31)
/* 80310E74 0030DDB4  C0 3F 00 E4 */	lfs f1, 0xe4(r31)
/* 80310E78 0030DDB8  FC 00 00 50 */	fneg f0, f0
/* 80310E7C 0030DDBC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80310E80 0030DDC0  40 80 00 08 */	bge .L_80310E88
/* 80310E84 0030DDC4  D0 1F 00 E4 */	stfs f0, 0xe4(r31)
.L_80310E88:
/* 80310E88 0030DDC8  C0 3F 00 E4 */	lfs f1, 0xe4(r31)
/* 80310E8C 0030DDCC  C0 02 F3 E0 */	lfs f0, lbl_8051D740@sda21(r2)
/* 80310E90 0030DDD0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80310E94 0030DDD4  40 81 00 08 */	ble .L_80310E9C
/* 80310E98 0030DDD8  D0 1F 00 E4 */	stfs f0, 0xe4(r31)
.L_80310E9C:
/* 80310E9C 0030DDDC  E3 E1 00 78 */	psq_l f31, 120(r1), 0, qr0
/* 80310EA0 0030DDE0  CB E1 00 70 */	lfd f31, 0x70(r1)
/* 80310EA4 0030DDE4  E3 C1 00 68 */	psq_l f30, 104(r1), 0, qr0
/* 80310EA8 0030DDE8  CB C1 00 60 */	lfd f30, 0x60(r1)
/* 80310EAC 0030DDEC  E3 A1 00 58 */	psq_l f29, 88(r1), 0, qr0
/* 80310EB0 0030DDF0  CB A1 00 50 */	lfd f29, 0x50(r1)
/* 80310EB4 0030DDF4  E3 81 00 48 */	psq_l f28, 72(r1), 0, qr0
/* 80310EB8 0030DDF8  CB 81 00 40 */	lfd f28, 0x40(r1)
/* 80310EBC 0030DDFC  E3 61 00 38 */	psq_l f27, 56(r1), 0, qr0
/* 80310EC0 0030DE00  CB 61 00 30 */	lfd f27, 0x30(r1)
/* 80310EC4 0030DE04  80 01 00 84 */	lwz r0, 0x84(r1)
/* 80310EC8 0030DE08  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 80310ECC 0030DE0C  7C 08 03 A6 */	mtlr r0
/* 80310ED0 0030DE10  38 21 00 80 */	addi r1, r1, 0x80
/* 80310ED4 0030DE14  4E 80 00 20 */	blr 
.endfn transMap__Q32og9newScreen11ObjSMenuMapFv

.fn doCreate__Q32og9newScreen11ObjSMenuMapFP10JKRArchive, global
/* 80310ED8 0030DE18  94 21 FF 90 */	stwu r1, -0x70(r1)
/* 80310EDC 0030DE1C  7C 08 02 A6 */	mflr r0
/* 80310EE0 0030DE20  3C A0 80 49 */	lis r5, lbl_8048E1A8@ha
/* 80310EE4 0030DE24  90 01 00 74 */	stw r0, 0x74(r1)
/* 80310EE8 0030DE28  BE 41 00 38 */	stmw r18, 0x38(r1)
/* 80310EEC 0030DE2C  7C 7D 1B 78 */	mr r29, r3
/* 80310EF0 0030DE30  7C 9E 23 78 */	mr r30, r4
/* 80310EF4 0030DE34  3A 45 E1 A8 */	addi r18, r5, lbl_8048E1A8@l
/* 80310EF8 0030DE38  48 14 30 B1 */	bl getDispMember__Q26Screen7ObjBaseFv
/* 80310EFC 0030DE3C  3C 80 00 4F */	lis r4, 0x004F4741@ha
/* 80310F00 0030DE40  3C C0 5F 4D */	lis r6, 0x5F4D4150@ha
/* 80310F04 0030DE44  38 A0 53 4D */	li r5, 0x534d
/* 80310F08 0030DE48  7C 7F 1B 78 */	mr r31, r3
/* 80310F0C 0030DE4C  38 84 47 41 */	addi r4, r4, 0x004F4741@l
/* 80310F10 0030DE50  38 C6 41 50 */	addi r6, r6, 0x5F4D4150@l
/* 80310F14 0030DE54  4B FF E5 AD */	bl getSubMember__Q32og6Screen14DispMemberBaseFUlUx
/* 80310F18 0030DE58  90 7D 00 A8 */	stw r3, 0xa8(r29)
/* 80310F1C 0030DE5C  80 1D 00 A8 */	lwz r0, 0xa8(r29)
/* 80310F20 0030DE60  28 00 00 00 */	cmplwi r0, 0
/* 80310F24 0030DE64  40 82 00 40 */	bne .L_80310F64
/* 80310F28 0030DE68  38 60 00 C4 */	li r3, 0xc4
/* 80310F2C 0030DE6C  4B D1 2F 79 */	bl __nw__FUl
/* 80310F30 0030DE70  7C 60 1B 79 */	or. r0, r3, r3
/* 80310F34 0030DE74  41 82 00 0C */	beq .L_80310F40
/* 80310F38 0030DE78  4B F0 43 C1 */	bl __ct__Q32og6Screen18DispMemberSMenuAllFv
/* 80310F3C 0030DE7C  7C 60 1B 78 */	mr r0, r3
.L_80310F40:
/* 80310F40 0030DE80  3C 80 00 4F */	lis r4, 0x004F4741@ha
/* 80310F44 0030DE84  3C A0 5F 4D */	lis r5, 0x5F4D4150@ha
/* 80310F48 0030DE88  7C 1F 03 78 */	mr r31, r0
/* 80310F4C 0030DE8C  7C 03 03 78 */	mr r3, r0
/* 80310F50 0030DE90  38 84 47 41 */	addi r4, r4, 0x004F4741@l
/* 80310F54 0030DE94  38 C5 41 50 */	addi r6, r5, 0x5F4D4150@l
/* 80310F58 0030DE98  38 A0 53 4D */	li r5, 0x534d
/* 80310F5C 0030DE9C  4B FF E5 65 */	bl getSubMember__Q32og6Screen14DispMemberBaseFUlUx
/* 80310F60 0030DEA0  90 7D 00 A8 */	stw r3, 0xa8(r29)
.L_80310F64:
/* 80310F64 0030DEA4  38 60 01 A8 */	li r3, 0x1a8
/* 80310F68 0030DEA8  4B D1 2F 3D */	bl __nw__FUl
/* 80310F6C 0030DEAC  7C 60 1B 79 */	or. r0, r3, r3
/* 80310F70 0030DEB0  41 82 00 14 */	beq .L_80310F84
/* 80310F74 0030DEB4  80 9D 00 A8 */	lwz r4, 0xa8(r29)
/* 80310F78 0030DEB8  38 84 00 08 */	addi r4, r4, 8
/* 80310F7C 0030DEBC  4B FF 6E 51 */	bl __ct__Q32og6Screen10MapCounterFPQ32og6Screen7DataMap
/* 80310F80 0030DEC0  7C 60 1B 78 */	mr r0, r3
.L_80310F84:
/* 80310F84 0030DEC4  90 1D 00 AC */	stw r0, 0xac(r29)
/* 80310F88 0030DEC8  7F C6 F3 78 */	mr r6, r30
/* 80310F8C 0030DECC  38 92 00 F0 */	addi r4, r18, 0xf0
/* 80310F90 0030DED0  3C A0 01 04 */	lis r5, 0x104
/* 80310F94 0030DED4  80 7D 00 AC */	lwz r3, 0xac(r29)
/* 80310F98 0030DED8  4B D2 E6 8D */	bl set__9J2DScreenFPCcUlP10JKRArchive
/* 80310F9C 0030DEDC  38 60 00 1C */	li r3, 0x1c
/* 80310FA0 0030DEE0  4B D1 2F 05 */	bl __nw__FUl
/* 80310FA4 0030DEE4  7C 60 1B 79 */	or. r0, r3, r3
/* 80310FA8 0030DEE8  41 82 00 10 */	beq .L_80310FB8
/* 80310FAC 0030DEEC  38 80 00 03 */	li r4, 3
/* 80310FB0 0030DEF0  4B FF 44 A9 */	bl __ct__Q32og6Screen9AnimGroupFi
/* 80310FB4 0030DEF4  7C 60 1B 78 */	mr r0, r3
.L_80310FB8:
/* 80310FB8 0030DEF8  90 1D 00 B0 */	stw r0, 0xb0(r29)
/* 80310FBC 0030DEFC  3C 60 80 51 */	lis r3, msBaseVal__Q32og9newScreen12ObjSMenuBase@ha
/* 80310FC0 0030DF00  38 E3 3C F4 */	addi r7, r3, msBaseVal__Q32og9newScreen12ObjSMenuBase@l
/* 80310FC4 0030DF04  7F C4 F3 78 */	mr r4, r30
/* 80310FC8 0030DF08  80 7D 00 B0 */	lwz r3, 0xb0(r29)
/* 80310FCC 0030DF0C  38 D2 01 04 */	addi r6, r18, 0x104
/* 80310FD0 0030DF10  80 BD 00 AC */	lwz r5, 0xac(r29)
/* 80310FD4 0030DF14  C0 27 00 00 */	lfs f1, 0(r7)
/* 80310FD8 0030DF18  4B FF 49 C1 */	bl registAnimGroupScreen__Q22og6ScreenFPQ32og6Screen9AnimGroupP10JKRArchiveP9J2DScreenPcf
/* 80310FDC 0030DF1C  3C 80 80 51 */	lis r4, msBaseVal__Q32og9newScreen12ObjSMenuBase@ha
/* 80310FE0 0030DF20  80 7D 00 B0 */	lwz r3, 0xb0(r29)
/* 80310FE4 0030DF24  C0 24 3C F4 */	lfs f1, msBaseVal__Q32og9newScreen12ObjSMenuBase@l(r4)
/* 80310FE8 0030DF28  7F C4 F3 78 */	mr r4, r30
/* 80310FEC 0030DF2C  80 BD 00 AC */	lwz r5, 0xac(r29)
/* 80310FF0 0030DF30  38 D2 01 18 */	addi r6, r18, 0x118
/* 80310FF4 0030DF34  4B FF 49 A5 */	bl registAnimGroupScreen__Q22og6ScreenFPQ32og6Screen9AnimGroupP10JKRArchiveP9J2DScreenPcf
/* 80310FF8 0030DF38  3C 80 80 51 */	lis r4, msBaseVal__Q32og9newScreen12ObjSMenuBase@ha
/* 80310FFC 0030DF3C  80 7D 00 B0 */	lwz r3, 0xb0(r29)
/* 80311000 0030DF40  C0 24 3C F4 */	lfs f1, msBaseVal__Q32og9newScreen12ObjSMenuBase@l(r4)
/* 80311004 0030DF44  7F C4 F3 78 */	mr r4, r30
/* 80311008 0030DF48  80 BD 00 AC */	lwz r5, 0xac(r29)
/* 8031100C 0030DF4C  38 D2 01 2C */	addi r6, r18, 0x12c
/* 80311010 0030DF50  4B FF 49 89 */	bl registAnimGroupScreen__Q22og6ScreenFPQ32og6Screen9AnimGroupP10JKRArchiveP9J2DScreenPcf
/* 80311014 0030DF54  80 7D 00 AC */	lwz r3, 0xac(r29)
/* 80311018 0030DF58  7F C4 F3 78 */	mr r4, r30
/* 8031101C 0030DF5C  4B FF 6F D5 */	bl setCallBack__Q32og6Screen10MapCounterFP10JKRArchive
/* 80311020 0030DF60  3C A0 63 65 */	lis r5, 0x63656E74@ha
/* 80311024 0030DF64  3C 80 6D 61 */	lis r4, 0x6D61705F@ha
/* 80311028 0030DF68  80 7D 00 AC */	lwz r3, 0xac(r29)
/* 8031102C 0030DF6C  38 C5 6E 74 */	addi r6, r5, 0x63656E74@l
/* 80311030 0030DF70  38 A4 70 5F */	addi r5, r4, 0x6D61705F@l
/* 80311034 0030DF74  4B FF 1E 79 */	bl TagSearch__Q22og6ScreenFP9J2DScreenUx
/* 80311038 0030DF78  90 7D 00 B4 */	stw r3, 0xb4(r29)
/* 8031103C 0030DF7C  80 7D 00 A8 */	lwz r3, 0xa8(r29)
/* 80311040 0030DF80  88 03 00 49 */	lbz r0, 0x49(r3)
/* 80311044 0030DF84  28 00 00 00 */	cmplwi r0, 0
/* 80311048 0030DF88  41 82 00 24 */	beq .L_8031106C
/* 8031104C 0030DF8C  88 03 00 4A */	lbz r0, 0x4a(r3)
/* 80311050 0030DF90  28 00 00 00 */	cmplwi r0, 0
/* 80311054 0030DF94  41 82 00 18 */	beq .L_8031106C
/* 80311058 0030DF98  3C 60 80 51 */	lis r3, msVal__Q32og9newScreen11ObjSMenuMap@ha
/* 8031105C 0030DF9C  38 63 3C 40 */	addi r3, r3, msVal__Q32og9newScreen11ObjSMenuMap@l
/* 80311060 0030DFA0  C0 03 00 30 */	lfs f0, 0x30(r3)
/* 80311064 0030DFA4  D0 1D 01 38 */	stfs f0, 0x138(r29)
/* 80311068 0030DFA8  48 00 00 14 */	b .L_8031107C
.L_8031106C:
/* 8031106C 0030DFAC  3C 60 80 51 */	lis r3, msVal__Q32og9newScreen11ObjSMenuMap@ha
/* 80311070 0030DFB0  38 63 3C 40 */	addi r3, r3, msVal__Q32og9newScreen11ObjSMenuMap@l
/* 80311074 0030DFB4  C0 03 00 2C */	lfs f0, 0x2c(r3)
/* 80311078 0030DFB8  D0 1D 01 38 */	stfs f0, 0x138(r29)
.L_8031107C:
/* 8031107C 0030DFBC  C0 3D 01 38 */	lfs f1, 0x138(r29)
/* 80311080 0030DFC0  C0 02 F3 E0 */	lfs f0, lbl_8051D740@sda21(r2)
/* 80311084 0030DFC4  D0 3D 00 E8 */	stfs f1, 0xe8(r29)
/* 80311088 0030DFC8  D0 1D 00 EC */	stfs f0, 0xec(r29)
/* 8031108C 0030DFCC  80 7D 00 A8 */	lwz r3, 0xa8(r29)
/* 80311090 0030DFD0  88 03 00 4A */	lbz r0, 0x4a(r3)
/* 80311094 0030DFD4  28 00 00 00 */	cmplwi r0, 0
/* 80311098 0030DFD8  41 82 00 54 */	beq .L_803110EC
/* 8031109C 0030DFDC  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 803110A0 0030DFE0  4B E4 9B 81 */	bl getActiveNavi__Q24Game7NaviMgrFv
/* 803110A4 0030DFE4  80 8D 96 A0 */	lwz r4, cameraMgr__4Game@sda21(r13)
/* 803110A8 0030DFE8  A0 03 02 DC */	lhz r0, 0x2dc(r3)
/* 803110AC 0030DFEC  38 61 00 18 */	addi r3, r1, 0x18
/* 803110B0 0030DFF0  80 84 00 24 */	lwz r4, 0x24(r4)
/* 803110B4 0030DFF4  54 00 10 3A */	slwi r0, r0, 2
/* 803110B8 0030DFF8  7C 84 00 2E */	lwzx r4, r4, r0
/* 803110BC 0030DFFC  48 10 92 19 */	bl getViewVector__11CullFrustumFv
/* 803110C0 0030E000  C0 01 00 20 */	lfs f0, 0x20(r1)
/* 803110C4 0030E004  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 803110C8 0030E008  C0 21 00 18 */	lfs f1, 0x18(r1)
/* 803110CC 0030E00C  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 803110D0 0030E010  FC 40 00 50 */	fneg f2, f0
/* 803110D4 0030E014  4B D2 40 35 */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 803110D8 0030E018  C0 02 F4 6C */	lfs f0, lbl_8051D7CC@sda21(r2)
/* 803110DC 0030E01C  C0 42 F4 68 */	lfs f2, lbl_8051D7C8@sda21(r2)
/* 803110E0 0030E020  EC 01 00 24 */	fdivs f0, f1, f0
/* 803110E4 0030E024  EC 02 00 32 */	fmuls f0, f2, f0
/* 803110E8 0030E028  D0 1D 00 EC */	stfs f0, 0xec(r29)
.L_803110EC:
/* 803110EC 0030E02C  7F A3 EB 78 */	mr r3, r29
/* 803110F0 0030E030  7F C4 F3 78 */	mr r4, r30
/* 803110F4 0030E034  4B FF EC A5 */	bl initMapIcon__Q32og9newScreen11ObjSMenuMapFP10JKRArchive
/* 803110F8 0030E038  3C 60 80 51 */	lis r3, msVal__Q32og9newScreen11ObjSMenuMap@ha
/* 803110FC 0030E03C  38 81 00 10 */	addi r4, r1, 0x10
/* 80311100 0030E040  39 03 3C 40 */	addi r8, r3, msVal__Q32og9newScreen11ObjSMenuMap@l
/* 80311104 0030E044  88 68 00 0B */	lbz r3, 0xb(r8)
/* 80311108 0030E048  88 C8 00 0C */	lbz r6, 0xc(r8)
/* 8031110C 0030E04C  88 A8 00 0D */	lbz r5, 0xd(r8)
/* 80311110 0030E050  88 08 00 0E */	lbz r0, 0xe(r8)
/* 80311114 0030E054  98 61 00 08 */	stb r3, 8(r1)
/* 80311118 0030E058  88 68 00 0F */	lbz r3, 0xf(r8)
/* 8031111C 0030E05C  98 C1 00 09 */	stb r6, 9(r1)
/* 80311120 0030E060  88 E8 00 10 */	lbz r7, 0x10(r8)
/* 80311124 0030E064  98 A1 00 0A */	stb r5, 0xa(r1)
/* 80311128 0030E068  88 C8 00 11 */	lbz r6, 0x11(r8)
/* 8031112C 0030E06C  98 01 00 0B */	stb r0, 0xb(r1)
/* 80311130 0030E070  88 A8 00 12 */	lbz r5, 0x12(r8)
/* 80311134 0030E074  80 01 00 08 */	lwz r0, 8(r1)
/* 80311138 0030E078  98 61 00 0C */	stb r3, 0xc(r1)
/* 8031113C 0030E07C  90 01 00 10 */	stw r0, 0x10(r1)
/* 80311140 0030E080  80 7D 00 C8 */	lwz r3, 0xc8(r29)
/* 80311144 0030E084  98 E1 00 0D */	stb r7, 0xd(r1)
/* 80311148 0030E088  81 83 00 00 */	lwz r12, 0(r3)
/* 8031114C 0030E08C  98 C1 00 0E */	stb r6, 0xe(r1)
/* 80311150 0030E090  81 8C 01 2C */	lwz r12, 0x12c(r12)
/* 80311154 0030E094  98 A1 00 0F */	stb r5, 0xf(r1)
/* 80311158 0030E098  7D 89 03 A6 */	mtctr r12
/* 8031115C 0030E09C  4E 80 04 21 */	bctrl 
/* 80311160 0030E0A0  80 01 00 0C */	lwz r0, 0xc(r1)
/* 80311164 0030E0A4  38 81 00 14 */	addi r4, r1, 0x14
/* 80311168 0030E0A8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8031116C 0030E0AC  80 7D 00 C8 */	lwz r3, 0xc8(r29)
/* 80311170 0030E0B0  81 83 00 00 */	lwz r12, 0(r3)
/* 80311174 0030E0B4  81 8C 01 28 */	lwz r12, 0x128(r12)
/* 80311178 0030E0B8  7D 89 03 A6 */	mtctr r12
/* 8031117C 0030E0BC  4E 80 04 21 */	bctrl 
/* 80311180 0030E0C0  80 7D 00 A8 */	lwz r3, 0xa8(r29)
/* 80311184 0030E0C4  3A 60 00 00 */	li r19, 0
/* 80311188 0030E0C8  7E 72 9B 78 */	mr r18, r19
/* 8031118C 0030E0CC  88 03 00 49 */	lbz r0, 0x49(r3)
/* 80311190 0030E0D0  28 00 00 00 */	cmplwi r0, 0
/* 80311194 0030E0D4  41 82 00 38 */	beq .L_803111CC
/* 80311198 0030E0D8  88 03 00 4A */	lbz r0, 0x4a(r3)
/* 8031119C 0030E0DC  28 00 00 00 */	cmplwi r0, 0
/* 803111A0 0030E0E0  41 82 00 2C */	beq .L_803111CC
/* 803111A4 0030E0E4  80 63 00 40 */	lwz r3, 0x40(r3)
/* 803111A8 0030E0E8  48 00 BB D9 */	bl caveIDtoMsgID__Q22og9newScreenFUl
/* 803111AC 0030E0EC  38 A0 00 01 */	li r5, 1
/* 803111B0 0030E0F0  38 C0 00 03 */	li r6, 3
/* 803111B4 0030E0F4  4B FF 17 6D */	bl maskTag__Q22og6ScreenFUxUsUs
/* 803111B8 0030E0F8  7C 93 23 78 */	mr r19, r4
/* 803111BC 0030E0FC  38 A1 00 24 */	addi r5, r1, 0x24
/* 803111C0 0030E100  7C 72 1B 78 */	mr r18, r3
/* 803111C4 0030E104  4B FF 1A 09 */	bl TagToName__Q22og6ScreenFUxPc
/* 803111C8 0030E108  48 00 00 94 */	b .L_8031125C
.L_803111CC:
/* 803111CC 0030E10C  80 03 00 3C */	lwz r0, 0x3c(r3)
/* 803111D0 0030E110  2C 00 00 02 */	cmpwi r0, 2
/* 803111D4 0030E114  41 82 00 50 */	beq .L_80311224
/* 803111D8 0030E118  40 80 00 14 */	bge .L_803111EC
/* 803111DC 0030E11C  2C 00 00 00 */	cmpwi r0, 0
/* 803111E0 0030E120  41 82 00 1C */	beq .L_803111FC
/* 803111E4 0030E124  40 80 00 2C */	bge .L_80311210
/* 803111E8 0030E128  48 00 00 74 */	b .L_8031125C
.L_803111EC:
/* 803111EC 0030E12C  2C 00 00 04 */	cmpwi r0, 4
/* 803111F0 0030E130  41 82 00 5C */	beq .L_8031124C
/* 803111F4 0030E134  40 80 00 68 */	bge .L_8031125C
/* 803111F8 0030E138  48 00 00 40 */	b .L_80311238
.L_803111FC:
/* 803111FC 0030E13C  3C 80 30 5F */	lis r4, 0x305F3033@ha
/* 80311200 0030E140  3C 60 00 38 */	lis r3, 0x00383339@ha
/* 80311204 0030E144  3A 64 30 33 */	addi r19, r4, 0x305F3033@l
/* 80311208 0030E148  3A 43 33 39 */	addi r18, r3, 0x00383339@l
/* 8031120C 0030E14C  48 00 00 50 */	b .L_8031125C
.L_80311210:
/* 80311210 0030E150  3C 80 31 5F */	lis r4, 0x315F3033@ha
/* 80311214 0030E154  3C 60 00 38 */	lis r3, 0x00383339@ha
/* 80311218 0030E158  3A 64 30 33 */	addi r19, r4, 0x315F3033@l
/* 8031121C 0030E15C  3A 43 33 39 */	addi r18, r3, 0x00383339@l
/* 80311220 0030E160  48 00 00 3C */	b .L_8031125C
.L_80311224:
/* 80311224 0030E164  3C 80 32 5F */	lis r4, 0x325F3033@ha
/* 80311228 0030E168  3C 60 00 38 */	lis r3, 0x00383339@ha
/* 8031122C 0030E16C  3A 64 30 33 */	addi r19, r4, 0x325F3033@l
/* 80311230 0030E170  3A 43 33 39 */	addi r18, r3, 0x00383339@l
/* 80311234 0030E174  48 00 00 28 */	b .L_8031125C
.L_80311238:
/* 80311238 0030E178  3C 80 33 5F */	lis r4, 0x335F3033@ha
/* 8031123C 0030E17C  3C 60 00 38 */	lis r3, 0x00383339@ha
/* 80311240 0030E180  3A 64 30 33 */	addi r19, r4, 0x335F3033@l
/* 80311244 0030E184  3A 43 33 39 */	addi r18, r3, 0x00383339@l
/* 80311248 0030E188  48 00 00 14 */	b .L_8031125C
.L_8031124C:
/* 8031124C 0030E18C  3C 80 34 5F */	lis r4, 0x345F3033@ha
/* 80311250 0030E190  3C 60 00 38 */	lis r3, 0x00383339@ha
/* 80311254 0030E194  3A 64 30 33 */	addi r19, r4, 0x345F3033@l
/* 80311258 0030E198  3A 43 33 39 */	addi r18, r3, 0x00383339@l
.L_8031125C:
/* 8031125C 0030E19C  80 7D 00 AC */	lwz r3, 0xac(r29)
/* 80311260 0030E1A0  3C 80 61 70 */	lis r4, 0x61707469@ha
/* 80311264 0030E1A4  38 C4 74 69 */	addi r6, r4, 0x61707469@l
/* 80311268 0030E1A8  38 A0 54 6D */	li r5, 0x546d
/* 8031126C 0030E1AC  81 83 00 00 */	lwz r12, 0(r3)
/* 80311270 0030E1B0  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 80311274 0030E1B4  7D 89 03 A6 */	mtctr r12
/* 80311278 0030E1B8  4E 80 04 21 */	bctrl 
/* 8031127C 0030E1BC  92 63 00 1C */	stw r19, 0x1c(r3)
/* 80311280 0030E1C0  92 43 00 18 */	stw r18, 0x18(r3)
/* 80311284 0030E1C4  80 7D 00 BC */	lwz r3, 0xbc(r29)
/* 80311288 0030E1C8  4B FF 8B 79 */	bl setCallBackMessage__Q22og6ScreenFPQ29P2DScreen3Mgr
/* 8031128C 0030E1CC  80 7D 00 AC */	lwz r3, 0xac(r29)
/* 80311290 0030E1D0  3C 80 70 6B */	lis r4, 0x706B3031@ha
/* 80311294 0030E1D4  38 C4 30 31 */	addi r6, r4, 0x706B3031@l
/* 80311298 0030E1D8  38 A0 00 4E */	li r5, 0x4e
/* 8031129C 0030E1DC  81 83 00 00 */	lwz r12, 0(r3)
/* 803112A0 0030E1E0  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 803112A4 0030E1E4  7D 89 03 A6 */	mtctr r12
/* 803112A8 0030E1E8  4E 80 04 21 */	bctrl 
/* 803112AC 0030E1EC  7C 72 1B 78 */	mr r18, r3
/* 803112B0 0030E1F0  80 7D 00 AC */	lwz r3, 0xac(r29)
/* 803112B4 0030E1F4  3C 80 70 6B */	lis r4, 0x706B3032@ha
/* 803112B8 0030E1F8  38 A0 00 4E */	li r5, 0x4e
/* 803112BC 0030E1FC  81 83 00 00 */	lwz r12, 0(r3)
/* 803112C0 0030E200  38 C4 30 32 */	addi r6, r4, 0x706B3032@l
/* 803112C4 0030E204  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 803112C8 0030E208  7D 89 03 A6 */	mtctr r12
/* 803112CC 0030E20C  4E 80 04 21 */	bctrl 
/* 803112D0 0030E210  7C 73 1B 78 */	mr r19, r3
/* 803112D4 0030E214  80 7D 00 AC */	lwz r3, 0xac(r29)
/* 803112D8 0030E218  3C 80 70 6B */	lis r4, 0x706B3033@ha
/* 803112DC 0030E21C  38 A0 00 4E */	li r5, 0x4e
/* 803112E0 0030E220  81 83 00 00 */	lwz r12, 0(r3)
/* 803112E4 0030E224  38 C4 30 33 */	addi r6, r4, 0x706B3033@l
/* 803112E8 0030E228  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 803112EC 0030E22C  7D 89 03 A6 */	mtctr r12
/* 803112F0 0030E230  4E 80 04 21 */	bctrl 
/* 803112F4 0030E234  7C 74 1B 78 */	mr r20, r3
/* 803112F8 0030E238  80 7D 00 AC */	lwz r3, 0xac(r29)
/* 803112FC 0030E23C  3C 80 70 6B */	lis r4, 0x706B3034@ha
/* 80311300 0030E240  38 A0 00 4E */	li r5, 0x4e
/* 80311304 0030E244  81 83 00 00 */	lwz r12, 0(r3)
/* 80311308 0030E248  38 C4 30 34 */	addi r6, r4, 0x706B3034@l
/* 8031130C 0030E24C  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 80311310 0030E250  7D 89 03 A6 */	mtctr r12
/* 80311314 0030E254  4E 80 04 21 */	bctrl 
/* 80311318 0030E258  7C 75 1B 78 */	mr r21, r3
/* 8031131C 0030E25C  80 7D 00 AC */	lwz r3, 0xac(r29)
/* 80311320 0030E260  3C 80 70 6B */	lis r4, 0x706B3035@ha
/* 80311324 0030E264  38 A0 00 4E */	li r5, 0x4e
/* 80311328 0030E268  81 83 00 00 */	lwz r12, 0(r3)
/* 8031132C 0030E26C  38 C4 30 35 */	addi r6, r4, 0x706B3035@l
/* 80311330 0030E270  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 80311334 0030E274  7D 89 03 A6 */	mtctr r12
/* 80311338 0030E278  4E 80 04 21 */	bctrl 
/* 8031133C 0030E27C  7C 76 1B 78 */	mr r22, r3
/* 80311340 0030E280  80 7D 00 AC */	lwz r3, 0xac(r29)
/* 80311344 0030E284  3C 80 70 6B */	lis r4, 0x706B3036@ha
/* 80311348 0030E288  38 A0 00 4E */	li r5, 0x4e
/* 8031134C 0030E28C  81 83 00 00 */	lwz r12, 0(r3)
/* 80311350 0030E290  38 C4 30 36 */	addi r6, r4, 0x706B3036@l
/* 80311354 0030E294  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 80311358 0030E298  7D 89 03 A6 */	mtctr r12
/* 8031135C 0030E29C  4E 80 04 21 */	bctrl 
/* 80311360 0030E2A0  7C 77 1B 78 */	mr r23, r3
/* 80311364 0030E2A4  80 7D 00 AC */	lwz r3, 0xac(r29)
/* 80311368 0030E2A8  3C 80 70 6B */	lis r4, 0x706B3037@ha
/* 8031136C 0030E2AC  38 A0 00 4E */	li r5, 0x4e
/* 80311370 0030E2B0  81 83 00 00 */	lwz r12, 0(r3)
/* 80311374 0030E2B4  38 C4 30 37 */	addi r6, r4, 0x706B3037@l
/* 80311378 0030E2B8  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8031137C 0030E2BC  7D 89 03 A6 */	mtctr r12
/* 80311380 0030E2C0  4E 80 04 21 */	bctrl 
/* 80311384 0030E2C4  7C 78 1B 78 */	mr r24, r3
/* 80311388 0030E2C8  80 7D 00 AC */	lwz r3, 0xac(r29)
/* 8031138C 0030E2CC  3C 80 70 6B */	lis r4, 0x706B3038@ha
/* 80311390 0030E2D0  38 A0 00 4E */	li r5, 0x4e
/* 80311394 0030E2D4  81 83 00 00 */	lwz r12, 0(r3)
/* 80311398 0030E2D8  38 C4 30 38 */	addi r6, r4, 0x706B3038@l
/* 8031139C 0030E2DC  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 803113A0 0030E2E0  7D 89 03 A6 */	mtctr r12
/* 803113A4 0030E2E4  4E 80 04 21 */	bctrl 
/* 803113A8 0030E2E8  7C 79 1B 78 */	mr r25, r3
/* 803113AC 0030E2EC  80 7D 00 AC */	lwz r3, 0xac(r29)
/* 803113B0 0030E2F0  3C 80 70 6B */	lis r4, 0x706B3039@ha
/* 803113B4 0030E2F4  38 A0 00 4E */	li r5, 0x4e
/* 803113B8 0030E2F8  81 83 00 00 */	lwz r12, 0(r3)
/* 803113BC 0030E2FC  38 C4 30 39 */	addi r6, r4, 0x706B3039@l
/* 803113C0 0030E300  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 803113C4 0030E304  7D 89 03 A6 */	mtctr r12
/* 803113C8 0030E308  4E 80 04 21 */	bctrl 
/* 803113CC 0030E30C  7C 7A 1B 78 */	mr r26, r3
/* 803113D0 0030E310  80 7D 00 AC */	lwz r3, 0xac(r29)
/* 803113D4 0030E314  3C 80 70 6B */	lis r4, 0x706B3130@ha
/* 803113D8 0030E318  38 A0 00 4E */	li r5, 0x4e
/* 803113DC 0030E31C  81 83 00 00 */	lwz r12, 0(r3)
/* 803113E0 0030E320  38 C4 31 30 */	addi r6, r4, 0x706B3130@l
/* 803113E4 0030E324  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 803113E8 0030E328  7D 89 03 A6 */	mtctr r12
/* 803113EC 0030E32C  4E 80 04 21 */	bctrl 
/* 803113F0 0030E330  7C 7B 1B 78 */	mr r27, r3
/* 803113F4 0030E334  80 7D 00 AC */	lwz r3, 0xac(r29)
/* 803113F8 0030E338  3C 80 70 6B */	lis r4, 0x706B3131@ha
/* 803113FC 0030E33C  38 A0 00 4E */	li r5, 0x4e
/* 80311400 0030E340  81 83 00 00 */	lwz r12, 0(r3)
/* 80311404 0030E344  38 C4 31 31 */	addi r6, r4, 0x706B3131@l
/* 80311408 0030E348  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8031140C 0030E34C  7D 89 03 A6 */	mtctr r12
/* 80311410 0030E350  4E 80 04 21 */	bctrl 
/* 80311414 0030E354  80 9D 00 A8 */	lwz r4, 0xa8(r29)
/* 80311418 0030E358  7C 7C 1B 78 */	mr r28, r3
/* 8031141C 0030E35C  88 04 00 44 */	lbz r0, 0x44(r4)
/* 80311420 0030E360  28 00 00 00 */	cmplwi r0, 0
/* 80311424 0030E364  40 82 00 1C */	bne .L_80311440
/* 80311428 0030E368  38 00 00 00 */	li r0, 0
/* 8031142C 0030E36C  38 80 00 00 */	li r4, 0
/* 80311430 0030E370  98 12 00 B0 */	stb r0, 0xb0(r18)
/* 80311434 0030E374  98 17 00 B0 */	stb r0, 0xb0(r23)
/* 80311438 0030E378  80 7D 00 AC */	lwz r3, 0xac(r29)
/* 8031143C 0030E37C  4B FF 6A 75 */	bl dispRed__Q32og6Screen10MapCounterFb
.L_80311440:
/* 80311440 0030E380  80 7D 00 A8 */	lwz r3, 0xa8(r29)
/* 80311444 0030E384  88 03 00 45 */	lbz r0, 0x45(r3)
/* 80311448 0030E388  28 00 00 00 */	cmplwi r0, 0
/* 8031144C 0030E38C  40 82 00 1C */	bne .L_80311468
/* 80311450 0030E390  38 00 00 00 */	li r0, 0
/* 80311454 0030E394  38 80 00 00 */	li r4, 0
/* 80311458 0030E398  98 13 00 B0 */	stb r0, 0xb0(r19)
/* 8031145C 0030E39C  98 18 00 B0 */	stb r0, 0xb0(r24)
/* 80311460 0030E3A0  80 7D 00 AC */	lwz r3, 0xac(r29)
/* 80311464 0030E3A4  4B FF 6A 85 */	bl dispYellow__Q32og6Screen10MapCounterFb
.L_80311468:
/* 80311468 0030E3A8  80 7D 00 A8 */	lwz r3, 0xa8(r29)
/* 8031146C 0030E3AC  88 03 00 46 */	lbz r0, 0x46(r3)
/* 80311470 0030E3B0  28 00 00 00 */	cmplwi r0, 0
/* 80311474 0030E3B4  40 82 00 1C */	bne .L_80311490
/* 80311478 0030E3B8  38 00 00 00 */	li r0, 0
/* 8031147C 0030E3BC  38 80 00 00 */	li r4, 0
/* 80311480 0030E3C0  98 14 00 B0 */	stb r0, 0xb0(r20)
/* 80311484 0030E3C4  98 19 00 B0 */	stb r0, 0xb0(r25)
/* 80311488 0030E3C8  80 7D 00 AC */	lwz r3, 0xac(r29)
/* 8031148C 0030E3CC  4B FF 6A 95 */	bl dispBlue__Q32og6Screen10MapCounterFb
.L_80311490:
/* 80311490 0030E3D0  80 7D 00 A8 */	lwz r3, 0xa8(r29)
/* 80311494 0030E3D4  88 03 00 47 */	lbz r0, 0x47(r3)
/* 80311498 0030E3D8  28 00 00 00 */	cmplwi r0, 0
/* 8031149C 0030E3DC  40 82 00 1C */	bne .L_803114B8
/* 803114A0 0030E3E0  38 00 00 00 */	li r0, 0
/* 803114A4 0030E3E4  38 80 00 00 */	li r4, 0
/* 803114A8 0030E3E8  98 15 00 B0 */	stb r0, 0xb0(r21)
/* 803114AC 0030E3EC  98 1A 00 B0 */	stb r0, 0xb0(r26)
/* 803114B0 0030E3F0  80 7D 00 AC */	lwz r3, 0xac(r29)
/* 803114B4 0030E3F4  4B FF 6A A5 */	bl dispWhite__Q32og6Screen10MapCounterFb
.L_803114B8:
/* 803114B8 0030E3F8  80 7D 00 A8 */	lwz r3, 0xa8(r29)
/* 803114BC 0030E3FC  88 03 00 48 */	lbz r0, 0x48(r3)
/* 803114C0 0030E400  28 00 00 00 */	cmplwi r0, 0
/* 803114C4 0030E404  40 82 00 1C */	bne .L_803114E0
/* 803114C8 0030E408  38 00 00 00 */	li r0, 0
/* 803114CC 0030E40C  38 80 00 00 */	li r4, 0
/* 803114D0 0030E410  98 16 00 B0 */	stb r0, 0xb0(r22)
/* 803114D4 0030E414  98 1B 00 B0 */	stb r0, 0xb0(r27)
/* 803114D8 0030E418  80 7D 00 AC */	lwz r3, 0xac(r29)
/* 803114DC 0030E41C  4B FF 6A B5 */	bl dispBlack__Q32og6Screen10MapCounterFb
.L_803114E0:
/* 803114E0 0030E420  80 7D 00 A8 */	lwz r3, 0xa8(r29)
/* 803114E4 0030E424  88 03 00 44 */	lbz r0, 0x44(r3)
/* 803114E8 0030E428  28 00 00 00 */	cmplwi r0, 0
/* 803114EC 0030E42C  40 82 00 48 */	bne .L_80311534
/* 803114F0 0030E430  88 03 00 45 */	lbz r0, 0x45(r3)
/* 803114F4 0030E434  28 00 00 00 */	cmplwi r0, 0
/* 803114F8 0030E438  40 82 00 3C */	bne .L_80311534
/* 803114FC 0030E43C  88 03 00 46 */	lbz r0, 0x46(r3)
/* 80311500 0030E440  28 00 00 00 */	cmplwi r0, 0
/* 80311504 0030E444  40 82 00 30 */	bne .L_80311534
/* 80311508 0030E448  88 03 00 47 */	lbz r0, 0x47(r3)
/* 8031150C 0030E44C  28 00 00 00 */	cmplwi r0, 0
/* 80311510 0030E450  40 82 00 24 */	bne .L_80311534
/* 80311514 0030E454  88 03 00 48 */	lbz r0, 0x48(r3)
/* 80311518 0030E458  28 00 00 00 */	cmplwi r0, 0
/* 8031151C 0030E45C  40 82 00 18 */	bne .L_80311534
/* 80311520 0030E460  38 00 00 00 */	li r0, 0
/* 80311524 0030E464  38 80 00 00 */	li r4, 0
/* 80311528 0030E468  98 1C 00 B0 */	stb r0, 0xb0(r28)
/* 8031152C 0030E46C  80 7D 00 AC */	lwz r3, 0xac(r29)
/* 80311530 0030E470  4B FF 6A 99 */	bl dispFree__Q32og6Screen10MapCounterFb
.L_80311534:
/* 80311534 0030E474  80 7D 00 AC */	lwz r3, 0xac(r29)
/* 80311538 0030E478  3C A0 63 6B */	lis r5, 0x636B6574@ha
/* 8031153C 0030E47C  3C 80 00 4E */	lis r4, 0x004E726F@ha
/* 80311540 0030E480  81 83 00 00 */	lwz r12, 0(r3)
/* 80311544 0030E484  38 C5 65 74 */	addi r6, r5, 0x636B6574@l
/* 80311548 0030E488  38 A4 72 6F */	addi r5, r4, 0x004E726F@l
/* 8031154C 0030E48C  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 80311550 0030E490  7D 89 03 A6 */	mtctr r12
/* 80311554 0030E494  4E 80 04 21 */	bctrl 
/* 80311558 0030E498  80 9D 00 A8 */	lwz r4, 0xa8(r29)
/* 8031155C 0030E49C  88 04 00 47 */	lbz r0, 0x47(r4)
/* 80311560 0030E4A0  28 00 00 00 */	cmplwi r0, 0
/* 80311564 0030E4A4  40 82 00 10 */	bne .L_80311574
/* 80311568 0030E4A8  88 04 00 48 */	lbz r0, 0x48(r4)
/* 8031156C 0030E4AC  28 00 00 00 */	cmplwi r0, 0
/* 80311570 0030E4B0  41 82 00 AC */	beq .L_8031161C
.L_80311574:
/* 80311574 0030E4B4  38 00 00 01 */	li r0, 1
/* 80311578 0030E4B8  3C A0 63 6B */	lis r5, 0x636B5F31@ha
/* 8031157C 0030E4BC  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 80311580 0030E4C0  3C 80 00 4E */	lis r4, 0x004E726F@ha
/* 80311584 0030E4C4  38 C5 5F 31 */	addi r6, r5, 0x636B5F31@l
/* 80311588 0030E4C8  80 7D 00 AC */	lwz r3, 0xac(r29)
/* 8031158C 0030E4CC  38 A4 72 6F */	addi r5, r4, 0x004E726F@l
/* 80311590 0030E4D0  81 83 00 00 */	lwz r12, 0(r3)
/* 80311594 0030E4D4  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 80311598 0030E4D8  7D 89 03 A6 */	mtctr r12
/* 8031159C 0030E4DC  4E 80 04 21 */	bctrl 
/* 803115A0 0030E4E0  7C 73 1B 78 */	mr r19, r3
/* 803115A4 0030E4E4  80 7D 00 AC */	lwz r3, 0xac(r29)
/* 803115A8 0030E4E8  3C A0 63 6B */	lis r5, 0x636B5F32@ha
/* 803115AC 0030E4EC  3C 80 00 4E */	lis r4, 0x004E726F@ha
/* 803115B0 0030E4F0  81 83 00 00 */	lwz r12, 0(r3)
/* 803115B4 0030E4F4  38 C5 5F 32 */	addi r6, r5, 0x636B5F32@l
/* 803115B8 0030E4F8  38 A4 72 6F */	addi r5, r4, 0x004E726F@l
/* 803115BC 0030E4FC  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 803115C0 0030E500  7D 89 03 A6 */	mtctr r12
/* 803115C4 0030E504  4E 80 04 21 */	bctrl 
/* 803115C8 0030E508  38 00 00 00 */	li r0, 0
/* 803115CC 0030E50C  7C 72 1B 78 */	mr r18, r3
/* 803115D0 0030E510  98 13 00 B0 */	stb r0, 0xb0(r19)
/* 803115D4 0030E514  3C 80 00 4F */	lis r4, 0x004F4741@ha
/* 803115D8 0030E518  3C C0 41 55 */	lis r6, 0x41555345@ha
/* 803115DC 0030E51C  3C A0 53 4D */	lis r5, 0x534D5F50@ha
/* 803115E0 0030E520  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 803115E4 0030E524  7F E3 FB 78 */	mr r3, r31
/* 803115E8 0030E528  38 84 47 41 */	addi r4, r4, 0x004F4741@l
/* 803115EC 0030E52C  38 C6 53 45 */	addi r6, r6, 0x41555345@l
/* 803115F0 0030E530  38 A5 5F 50 */	addi r5, r5, 0x534D5F50@l
/* 803115F4 0030E534  4B FF DE CD */	bl getSubMember__Q32og6Screen14DispMemberBaseFUlUx
/* 803115F8 0030E538  80 03 00 0C */	lwz r0, 0xc(r3)
/* 803115FC 0030E53C  28 00 27 10 */	cmplwi r0, 0x2710
/* 80311600 0030E540  41 80 00 10 */	blt .L_80311610
/* 80311604 0030E544  38 00 00 01 */	li r0, 1
/* 80311608 0030E548  98 12 00 B0 */	stb r0, 0xb0(r18)
/* 8031160C 0030E54C  48 00 00 54 */	b .L_80311660
.L_80311610:
/* 80311610 0030E550  38 00 00 01 */	li r0, 1
/* 80311614 0030E554  98 13 00 B0 */	stb r0, 0xb0(r19)
/* 80311618 0030E558  48 00 00 48 */	b .L_80311660
.L_8031161C:
/* 8031161C 0030E55C  38 00 00 00 */	li r0, 0
/* 80311620 0030E560  3C A0 72 65 */	lis r5, 0x72657475@ha
/* 80311624 0030E564  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 80311628 0030E568  3C 80 4E 74 */	lis r4, 0x4E746169@ha
/* 8031162C 0030E56C  38 C5 74 75 */	addi r6, r5, 0x72657475@l
/* 80311630 0030E570  80 7D 00 AC */	lwz r3, 0xac(r29)
/* 80311634 0030E574  38 A4 61 69 */	addi r5, r4, 0x4E746169@l
/* 80311638 0030E578  81 83 00 00 */	lwz r12, 0(r3)
/* 8031163C 0030E57C  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 80311640 0030E580  7D 89 03 A6 */	mtctr r12
/* 80311644 0030E584  4E 80 04 21 */	bctrl 
/* 80311648 0030E588  81 83 00 00 */	lwz r12, 0(r3)
/* 8031164C 0030E58C  C0 22 F3 E0 */	lfs f1, lbl_8051D740@sda21(r2)
/* 80311650 0030E590  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80311654 0030E594  C0 42 F4 70 */	lfs f2, lbl_8051D7D0@sda21(r2)
/* 80311658 0030E598  7D 89 03 A6 */	mtctr r12
/* 8031165C 0030E59C  4E 80 04 21 */	bctrl 
.L_80311660:
/* 80311660 0030E5A0  80 7D 00 AC */	lwz r3, 0xac(r29)
/* 80311664 0030E5A4  3C A0 79 6E */	lis r5, 0x796E5F31@ha
/* 80311668 0030E5A8  3C 80 00 4E */	lis r4, 0x004E6F6E@ha
/* 8031166C 0030E5AC  81 83 00 00 */	lwz r12, 0(r3)
/* 80311670 0030E5B0  38 C5 5F 31 */	addi r6, r5, 0x796E5F31@l
/* 80311674 0030E5B4  38 A4 6F 6E */	addi r5, r4, 0x004E6F6E@l
/* 80311678 0030E5B8  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8031167C 0030E5BC  7D 89 03 A6 */	mtctr r12
/* 80311680 0030E5C0  4E 80 04 21 */	bctrl 
/* 80311684 0030E5C4  7C 74 1B 78 */	mr r20, r3
/* 80311688 0030E5C8  80 7D 00 AC */	lwz r3, 0xac(r29)
/* 8031168C 0030E5CC  3C A0 79 6E */	lis r5, 0x796E5F32@ha
/* 80311690 0030E5D0  3C 80 00 4E */	lis r4, 0x004E6F6E@ha
/* 80311694 0030E5D4  81 83 00 00 */	lwz r12, 0(r3)
/* 80311698 0030E5D8  38 C5 5F 32 */	addi r6, r5, 0x796E5F32@l
/* 8031169C 0030E5DC  38 A4 6F 6E */	addi r5, r4, 0x004E6F6E@l
/* 803116A0 0030E5E0  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 803116A4 0030E5E4  7D 89 03 A6 */	mtctr r12
/* 803116A8 0030E5E8  4E 80 04 21 */	bctrl 
/* 803116AC 0030E5EC  7C 73 1B 78 */	mr r19, r3
/* 803116B0 0030E5F0  80 7D 00 AC */	lwz r3, 0xac(r29)
/* 803116B4 0030E5F4  3C A0 79 6E */	lis r5, 0x796E5F33@ha
/* 803116B8 0030E5F8  3C 80 00 4E */	lis r4, 0x004E6F6E@ha
/* 803116BC 0030E5FC  81 83 00 00 */	lwz r12, 0(r3)
/* 803116C0 0030E600  38 C5 5F 33 */	addi r6, r5, 0x796E5F33@l
/* 803116C4 0030E604  38 A4 6F 6E */	addi r5, r4, 0x004E6F6E@l
/* 803116C8 0030E608  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 803116CC 0030E60C  7D 89 03 A6 */	mtctr r12
/* 803116D0 0030E610  4E 80 04 21 */	bctrl 
/* 803116D4 0030E614  7C 72 1B 78 */	mr r18, r3
/* 803116D8 0030E618  80 7D 00 AC */	lwz r3, 0xac(r29)
/* 803116DC 0030E61C  3C A0 79 6E */	lis r5, 0x796E5F34@ha
/* 803116E0 0030E620  3C 80 00 4E */	lis r4, 0x004E6F6E@ha
/* 803116E4 0030E624  81 83 00 00 */	lwz r12, 0(r3)
/* 803116E8 0030E628  38 C5 5F 34 */	addi r6, r5, 0x796E5F34@l
/* 803116EC 0030E62C  38 A4 6F 6E */	addi r5, r4, 0x004E6F6E@l
/* 803116F0 0030E630  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 803116F4 0030E634  7D 89 03 A6 */	mtctr r12
/* 803116F8 0030E638  4E 80 04 21 */	bctrl 
/* 803116FC 0030E63C  38 00 00 00 */	li r0, 0
/* 80311700 0030E640  98 14 00 B0 */	stb r0, 0xb0(r20)
/* 80311704 0030E644  98 13 00 B0 */	stb r0, 0xb0(r19)
/* 80311708 0030E648  98 12 00 B0 */	stb r0, 0xb0(r18)
/* 8031170C 0030E64C  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 80311710 0030E650  80 9D 00 A8 */	lwz r4, 0xa8(r29)
/* 80311714 0030E654  88 A4 00 44 */	lbz r5, 0x44(r4)
/* 80311718 0030E658  28 05 00 00 */	cmplwi r5, 0
/* 8031171C 0030E65C  41 82 00 28 */	beq .L_80311744
/* 80311720 0030E660  88 04 00 45 */	lbz r0, 0x45(r4)
/* 80311724 0030E664  28 00 00 00 */	cmplwi r0, 0
/* 80311728 0030E668  41 82 00 1C */	beq .L_80311744
/* 8031172C 0030E66C  88 04 00 46 */	lbz r0, 0x46(r4)
/* 80311730 0030E670  28 00 00 00 */	cmplwi r0, 0
/* 80311734 0030E674  41 82 00 10 */	beq .L_80311744
/* 80311738 0030E678  38 00 00 01 */	li r0, 1
/* 8031173C 0030E67C  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 80311740 0030E680  48 00 00 54 */	b .L_80311794
.L_80311744:
/* 80311744 0030E684  28 05 00 00 */	cmplwi r5, 0
/* 80311748 0030E688  41 82 00 1C */	beq .L_80311764
/* 8031174C 0030E68C  88 04 00 46 */	lbz r0, 0x46(r4)
/* 80311750 0030E690  28 00 00 00 */	cmplwi r0, 0
/* 80311754 0030E694  41 82 00 10 */	beq .L_80311764
/* 80311758 0030E698  38 00 00 01 */	li r0, 1
/* 8031175C 0030E69C  98 12 00 B0 */	stb r0, 0xb0(r18)
/* 80311760 0030E6A0  48 00 00 34 */	b .L_80311794
.L_80311764:
/* 80311764 0030E6A4  28 05 00 00 */	cmplwi r5, 0
/* 80311768 0030E6A8  41 82 00 1C */	beq .L_80311784
/* 8031176C 0030E6AC  88 04 00 45 */	lbz r0, 0x45(r4)
/* 80311770 0030E6B0  28 00 00 00 */	cmplwi r0, 0
/* 80311774 0030E6B4  41 82 00 10 */	beq .L_80311784
/* 80311778 0030E6B8  38 00 00 01 */	li r0, 1
/* 8031177C 0030E6BC  98 13 00 B0 */	stb r0, 0xb0(r19)
/* 80311780 0030E6C0  48 00 00 14 */	b .L_80311794
.L_80311784:
/* 80311784 0030E6C4  28 05 00 00 */	cmplwi r5, 0
/* 80311788 0030E6C8  41 82 00 0C */	beq .L_80311794
/* 8031178C 0030E6CC  38 00 00 01 */	li r0, 1
/* 80311790 0030E6D0  98 14 00 B0 */	stb r0, 0xb0(r20)
.L_80311794:
/* 80311794 0030E6D4  80 7D 00 AC */	lwz r3, 0xac(r29)
/* 80311798 0030E6D8  3C 80 61 69 */	lis r4, 0x61695F31@ha
/* 8031179C 0030E6DC  38 C4 5F 31 */	addi r6, r4, 0x61695F31@l
/* 803117A0 0030E6E0  38 A0 4E 74 */	li r5, 0x4e74
/* 803117A4 0030E6E4  81 83 00 00 */	lwz r12, 0(r3)
/* 803117A8 0030E6E8  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 803117AC 0030E6EC  7D 89 03 A6 */	mtctr r12
/* 803117B0 0030E6F0  4E 80 04 21 */	bctrl 
/* 803117B4 0030E6F4  7C 72 1B 78 */	mr r18, r3
/* 803117B8 0030E6F8  80 7D 00 AC */	lwz r3, 0xac(r29)
/* 803117BC 0030E6FC  3C 80 61 69 */	lis r4, 0x61695F32@ha
/* 803117C0 0030E700  38 A0 4E 74 */	li r5, 0x4e74
/* 803117C4 0030E704  81 83 00 00 */	lwz r12, 0(r3)
/* 803117C8 0030E708  38 C4 5F 32 */	addi r6, r4, 0x61695F32@l
/* 803117CC 0030E70C  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 803117D0 0030E710  7D 89 03 A6 */	mtctr r12
/* 803117D4 0030E714  4E 80 04 21 */	bctrl 
/* 803117D8 0030E718  38 00 00 00 */	li r0, 0
/* 803117DC 0030E71C  98 12 00 B0 */	stb r0, 0xb0(r18)
/* 803117E0 0030E720  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 803117E4 0030E724  80 9D 00 A8 */	lwz r4, 0xa8(r29)
/* 803117E8 0030E728  88 04 00 46 */	lbz r0, 0x46(r4)
/* 803117EC 0030E72C  28 00 00 00 */	cmplwi r0, 0
/* 803117F0 0030E730  41 82 00 0C */	beq .L_803117FC
/* 803117F4 0030E734  38 00 00 01 */	li r0, 1
/* 803117F8 0030E738  98 12 00 B0 */	stb r0, 0xb0(r18)
.L_803117FC:
/* 803117FC 0030E73C  80 9D 00 A8 */	lwz r4, 0xa8(r29)
/* 80311800 0030E740  88 04 00 45 */	lbz r0, 0x45(r4)
/* 80311804 0030E744  28 00 00 00 */	cmplwi r0, 0
/* 80311808 0030E748  41 82 00 0C */	beq .L_80311814
/* 8031180C 0030E74C  38 00 00 01 */	li r0, 1
/* 80311810 0030E750  98 03 00 B0 */	stb r0, 0xb0(r3)
.L_80311814:
/* 80311814 0030E754  80 BD 00 AC */	lwz r5, 0xac(r29)
/* 80311818 0030E758  7F A3 EB 78 */	mr r3, r29
/* 8031181C 0030E75C  7F C4 F3 78 */	mr r4, r30
/* 80311820 0030E760  48 00 4B 59 */	bl doCreateAfter__Q32og9newScreen12ObjSMenuBaseFP10JKRArchivePQ29P2DScreen3Mgr
/* 80311824 0030E764  BA 41 00 38 */	lmw r18, 0x38(r1)
/* 80311828 0030E768  80 01 00 74 */	lwz r0, 0x74(r1)
/* 8031182C 0030E76C  7C 08 03 A6 */	mtlr r0
/* 80311830 0030E770  38 21 00 70 */	addi r1, r1, 0x70
/* 80311834 0030E774  4E 80 00 20 */	blr 
.endfn doCreate__Q32og9newScreen11ObjSMenuMapFP10JKRArchive

.fn updateMap__Q32og9newScreen11ObjSMenuMapFv, global
/* 80311838 0030E778  94 21 FF 70 */	stwu r1, -0x90(r1)
/* 8031183C 0030E77C  7C 08 02 A6 */	mflr r0
/* 80311840 0030E780  90 01 00 94 */	stw r0, 0x94(r1)
/* 80311844 0030E784  DB E1 00 80 */	stfd f31, 0x80(r1)
/* 80311848 0030E788  F3 E1 00 88 */	psq_st f31, 136(r1), 0, qr0
/* 8031184C 0030E78C  DB C1 00 70 */	stfd f30, 0x70(r1)
/* 80311850 0030E790  F3 C1 00 78 */	psq_st f30, 120(r1), 0, qr0
/* 80311854 0030E794  DB A1 00 60 */	stfd f29, 0x60(r1)
/* 80311858 0030E798  F3 A1 00 68 */	psq_st f29, 104(r1), 0, qr0
/* 8031185C 0030E79C  BF 41 00 48 */	stmw r26, 0x48(r1)
/* 80311860 0030E7A0  81 83 00 00 */	lwz r12, 0(r3)
/* 80311864 0030E7A4  7C 7C 1B 78 */	mr r28, r3
/* 80311868 0030E7A8  81 8C 00 30 */	lwz r12, 0x30(r12)
/* 8031186C 0030E7AC  7D 89 03 A6 */	mtctr r12
/* 80311870 0030E7B0  4E 80 04 21 */	bctrl 
/* 80311874 0030E7B4  48 14 09 BD */	bl getGamePad__Q26Screen9SceneBaseCFv
/* 80311878 0030E7B8  90 7C 01 18 */	stw r3, 0x118(r28)
/* 8031187C 0030E7BC  88 0D 97 D4 */	lbz r0, init$4825@sda21(r13)
/* 80311880 0030E7C0  7C 00 07 75 */	extsb. r0, r0
/* 80311884 0030E7C4  40 82 00 14 */	bne .L_80311898
/* 80311888 0030E7C8  C0 02 F3 E0 */	lfs f0, lbl_8051D740@sda21(r2)
/* 8031188C 0030E7CC  38 00 00 01 */	li r0, 1
/* 80311890 0030E7D0  98 0D 97 D4 */	stb r0, init$4825@sda21(r13)
/* 80311894 0030E7D4  D0 0D 97 D0 */	stfs f0, nv_frame$4824@sda21(r13)
.L_80311898:
/* 80311898 0030E7D8  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8031189C 0030E7DC  C0 4D 97 D0 */	lfs f2, nv_frame$4824@sda21(r13)
/* 803118A0 0030E7E0  C0 23 00 54 */	lfs f1, 0x54(r3)
/* 803118A4 0030E7E4  C0 02 F3 E4 */	lfs f0, lbl_8051D744@sda21(r2)
/* 803118A8 0030E7E8  EC 22 08 2A */	fadds f1, f2, f1
/* 803118AC 0030E7EC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 803118B0 0030E7F0  D0 2D 97 D0 */	stfs f1, nv_frame$4824@sda21(r13)
/* 803118B4 0030E7F4  40 81 00 0C */	ble .L_803118C0
/* 803118B8 0030E7F8  C0 02 F3 E0 */	lfs f0, lbl_8051D740@sda21(r2)
/* 803118BC 0030E7FC  D0 0D 97 D0 */	stfs f0, nv_frame$4824@sda21(r13)
.L_803118C0:
/* 803118C0 0030E800  C0 42 F4 2C */	lfs f2, lbl_8051D78C@sda21(r2)
/* 803118C4 0030E804  C0 2D 97 D0 */	lfs f1, nv_frame$4824@sda21(r13)
/* 803118C8 0030E808  C0 02 F3 E0 */	lfs f0, lbl_8051D740@sda21(r2)
/* 803118CC 0030E80C  EC 82 00 72 */	fmuls f4, f2, f1
/* 803118D0 0030E810  C0 E2 F4 74 */	lfs f7, lbl_8051D7D4@sda21(r2)
/* 803118D4 0030E814  C0 C2 F4 78 */	lfs f6, lbl_8051D7D8@sda21(r2)
/* 803118D8 0030E818  C0 22 F3 E4 */	lfs f1, lbl_8051D744@sda21(r2)
/* 803118DC 0030E81C  FC 04 00 40 */	fcmpo cr0, f4, f0
/* 803118E0 0030E820  40 80 00 30 */	bge .L_80311910
/* 803118E4 0030E824  C0 02 F4 38 */	lfs f0, lbl_8051D798@sda21(r2)
/* 803118E8 0030E828  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 803118EC 0030E82C  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 803118F0 0030E830  EC 04 00 32 */	fmuls f0, f4, f0
/* 803118F4 0030E834  FC 00 00 1E */	fctiwz f0, f0
/* 803118F8 0030E838  D8 01 00 08 */	stfd f0, 8(r1)
/* 803118FC 0030E83C  80 01 00 0C */	lwz r0, 0xc(r1)
/* 80311900 0030E840  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 80311904 0030E844  7C 03 04 2E */	lfsx f0, r3, r0
/* 80311908 0030E848  FC 00 00 50 */	fneg f0, f0
/* 8031190C 0030E84C  48 00 00 28 */	b .L_80311934
.L_80311910:
/* 80311910 0030E850  C0 02 F4 34 */	lfs f0, lbl_8051D794@sda21(r2)
/* 80311914 0030E854  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 80311918 0030E858  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 8031191C 0030E85C  EC 04 00 32 */	fmuls f0, f4, f0
/* 80311920 0030E860  FC 00 00 1E */	fctiwz f0, f0
/* 80311924 0030E864  D8 01 00 10 */	stfd f0, 0x10(r1)
/* 80311928 0030E868  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8031192C 0030E86C  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 80311930 0030E870  7C 03 04 2E */	lfsx f0, r3, r0
.L_80311934:
/* 80311934 0030E874  EC 61 00 2A */	fadds f3, f1, f0
/* 80311938 0030E878  C0 02 F4 00 */	lfs f0, lbl_8051D760@sda21(r2)
/* 8031193C 0030E87C  C0 22 F4 6C */	lfs f1, lbl_8051D7CC@sda21(r2)
/* 80311940 0030E880  C0 42 F4 48 */	lfs f2, lbl_8051D7A8@sda21(r2)
/* 80311944 0030E884  EC A3 00 32 */	fmuls f5, f3, f0
/* 80311948 0030E888  C0 02 F3 E0 */	lfs f0, lbl_8051D740@sda21(r2)
/* 8031194C 0030E88C  ED 01 20 2A */	fadds f8, f1, f4
/* 80311950 0030E890  C0 82 F4 74 */	lfs f4, lbl_8051D7D4@sda21(r2)
/* 80311954 0030E894  C0 62 F4 78 */	lfs f3, lbl_8051D7D8@sda21(r2)
/* 80311958 0030E898  EC 46 11 7A */	fmadds f2, f6, f5, f2
/* 8031195C 0030E89C  FC 08 00 40 */	fcmpo cr0, f8, f0
/* 80311960 0030E8A0  C0 22 F3 E4 */	lfs f1, lbl_8051D744@sda21(r2)
/* 80311964 0030E8A4  EC 07 00 B2 */	fmuls f0, f7, f2
/* 80311968 0030E8A8  FC 00 00 1E */	fctiwz f0, f0
/* 8031196C 0030E8AC  D8 01 00 18 */	stfd f0, 0x18(r1)
/* 80311970 0030E8B0  83 C1 00 1C */	lwz r30, 0x1c(r1)
/* 80311974 0030E8B4  40 80 00 30 */	bge .L_803119A4
/* 80311978 0030E8B8  C0 02 F4 38 */	lfs f0, lbl_8051D798@sda21(r2)
/* 8031197C 0030E8BC  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 80311980 0030E8C0  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 80311984 0030E8C4  EC 08 00 32 */	fmuls f0, f8, f0
/* 80311988 0030E8C8  FC 00 00 1E */	fctiwz f0, f0
/* 8031198C 0030E8CC  D8 01 00 20 */	stfd f0, 0x20(r1)
/* 80311990 0030E8D0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80311994 0030E8D4  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 80311998 0030E8D8  7C 03 04 2E */	lfsx f0, r3, r0
/* 8031199C 0030E8DC  FC 00 00 50 */	fneg f0, f0
/* 803119A0 0030E8E0  48 00 00 28 */	b .L_803119C8
.L_803119A4:
/* 803119A4 0030E8E4  C0 02 F4 34 */	lfs f0, lbl_8051D794@sda21(r2)
/* 803119A8 0030E8E8  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 803119AC 0030E8EC  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 803119B0 0030E8F0  EC 08 00 32 */	fmuls f0, f8, f0
/* 803119B4 0030E8F4  FC 00 00 1E */	fctiwz f0, f0
/* 803119B8 0030E8F8  D8 01 00 28 */	stfd f0, 0x28(r1)
/* 803119BC 0030E8FC  80 01 00 2C */	lwz r0, 0x2c(r1)
/* 803119C0 0030E900  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 803119C4 0030E904  7C 03 04 2E */	lfsx f0, r3, r0
.L_803119C8:
/* 803119C8 0030E908  EC 41 00 2A */	fadds f2, f1, f0
/* 803119CC 0030E90C  C0 22 F4 00 */	lfs f1, lbl_8051D760@sda21(r2)
/* 803119D0 0030E910  C0 02 F4 48 */	lfs f0, lbl_8051D7A8@sda21(r2)
/* 803119D4 0030E914  38 00 00 FF */	li r0, 0xff
/* 803119D8 0030E918  C0 DC 00 E8 */	lfs f6, 0xe8(r28)
/* 803119DC 0030E91C  EC 22 00 72 */	fmuls f1, f2, f1
/* 803119E0 0030E920  C0 BC 01 38 */	lfs f5, 0x138(r28)
/* 803119E4 0030E924  EC 03 00 7A */	fmadds f0, f3, f1, f0
/* 803119E8 0030E928  FC 06 28 40 */	fcmpo cr0, f6, f5
/* 803119EC 0030E92C  EC 04 00 32 */	fmuls f0, f4, f0
/* 803119F0 0030E930  FC 00 00 1E */	fctiwz f0, f0
/* 803119F4 0030E934  D8 01 00 30 */	stfd f0, 0x30(r1)
/* 803119F8 0030E938  83 A1 00 34 */	lwz r29, 0x34(r1)
/* 803119FC 0030E93C  40 80 00 34 */	bge .L_80311A30
/* 80311A00 0030E940  3C 60 80 51 */	lis r3, msVal__Q32og9newScreen11ObjSMenuMap@ha
/* 80311A04 0030E944  EC 25 30 28 */	fsubs f1, f5, f6
/* 80311A08 0030E948  C0 03 3C 40 */	lfs f0, msVal__Q32og9newScreen11ObjSMenuMap@l(r3)
/* 80311A0C 0030E94C  C8 42 F4 60 */	lfd f2, lbl_8051D7C0@sda21(r2)
/* 80311A10 0030E950  EC 05 00 28 */	fsubs f0, f5, f0
/* 80311A14 0030E954  C8 62 F4 58 */	lfd f3, lbl_8051D7B8@sda21(r2)
/* 80311A18 0030E958  EC 01 00 24 */	fdivs f0, f1, f0
/* 80311A1C 0030E95C  FC 02 00 28 */	fsub f0, f2, f0
/* 80311A20 0030E960  FC 03 00 32 */	fmul f0, f3, f0
/* 80311A24 0030E964  FC 00 00 1E */	fctiwz f0, f0
/* 80311A28 0030E968  D8 01 00 38 */	stfd f0, 0x38(r1)
/* 80311A2C 0030E96C  80 01 00 3C */	lwz r0, 0x3c(r1)
.L_80311A30:
/* 80311A30 0030E970  98 1C 01 3C */	stb r0, 0x13c(r28)
/* 80311A34 0030E974  7F 9F E3 78 */	mr r31, r28
/* 80311A38 0030E978  3B 60 00 00 */	li r27, 0
/* 80311A3C 0030E97C  48 00 00 24 */	b .L_80311A60
.L_80311A40:
/* 80311A40 0030E980  80 7F 01 40 */	lwz r3, 0x140(r31)
/* 80311A44 0030E984  88 9C 01 3C */	lbz r4, 0x13c(r28)
/* 80311A48 0030E988  81 83 00 00 */	lwz r12, 0(r3)
/* 80311A4C 0030E98C  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 80311A50 0030E990  7D 89 03 A6 */	mtctr r12
/* 80311A54 0030E994  4E 80 04 21 */	bctrl 
/* 80311A58 0030E998  3B FF 00 04 */	addi r31, r31, 4
/* 80311A5C 0030E99C  3B 7B 00 01 */	addi r27, r27, 1
.L_80311A60:
/* 80311A60 0030E9A0  80 1C 01 54 */	lwz r0, 0x154(r28)
/* 80311A64 0030E9A4  7C 1B 00 00 */	cmpw r27, r0
/* 80311A68 0030E9A8  41 80 FF D8 */	blt .L_80311A40
/* 80311A6C 0030E9AC  80 7C 00 A8 */	lwz r3, 0xa8(r28)
/* 80311A70 0030E9B0  C3 FC 00 E8 */	lfs f31, 0xe8(r28)
/* 80311A74 0030E9B4  88 03 00 49 */	lbz r0, 0x49(r3)
/* 80311A78 0030E9B8  28 00 00 00 */	cmplwi r0, 0
/* 80311A7C 0030E9BC  41 82 00 0C */	beq .L_80311A88
/* 80311A80 0030E9C0  C0 02 F4 7C */	lfs f0, lbl_8051D7DC@sda21(r2)
/* 80311A84 0030E9C4  EF FF 00 32 */	fmuls f31, f31, f0
.L_80311A88:
/* 80311A88 0030E9C8  C3 DC 00 E0 */	lfs f30, 0xe0(r28)
/* 80311A8C 0030E9CC  38 80 00 04 */	li r4, 4
/* 80311A90 0030E9D0  C3 BC 00 E4 */	lfs f29, 0xe4(r28)
/* 80311A94 0030E9D4  FC 20 F0 50 */	fneg f1, f30
/* 80311A98 0030E9D8  FC 00 E8 50 */	fneg f0, f29
/* 80311A9C 0030E9DC  D0 3C 01 10 */	stfs f1, 0x110(r28)
/* 80311AA0 0030E9E0  D0 1C 01 14 */	stfs f0, 0x114(r28)
/* 80311AA4 0030E9E4  80 7C 00 C8 */	lwz r3, 0xc8(r28)
/* 80311AA8 0030E9E8  4B D2 72 15 */	bl setBasePosition__7J2DPaneF15J2DBasePosition
/* 80311AAC 0030E9EC  80 7C 00 C8 */	lwz r3, 0xc8(r28)
/* 80311AB0 0030E9F0  D3 E3 00 CC */	stfs f31, 0xcc(r3)
/* 80311AB4 0030E9F4  D3 E3 00 D0 */	stfs f31, 0xd0(r3)
/* 80311AB8 0030E9F8  81 83 00 00 */	lwz r12, 0(r3)
/* 80311ABC 0030E9FC  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 80311AC0 0030EA00  7D 89 03 A6 */	mtctr r12
/* 80311AC4 0030EA04  4E 80 04 21 */	bctrl 
/* 80311AC8 0030EA08  80 7C 00 C8 */	lwz r3, 0xc8(r28)
/* 80311ACC 0030EA0C  38 80 00 7A */	li r4, 0x7a
/* 80311AD0 0030EA10  C0 3C 01 10 */	lfs f1, 0x110(r28)
/* 80311AD4 0030EA14  C0 5C 01 14 */	lfs f2, 0x114(r28)
/* 80311AD8 0030EA18  C0 7C 00 EC */	lfs f3, 0xec(r28)
/* 80311ADC 0030EA1C  4B D2 69 25 */	bl rotate__7J2DPaneFff13J2DRotateAxisf
/* 80311AE0 0030EA20  80 7C 00 C8 */	lwz r3, 0xc8(r28)
/* 80311AE4 0030EA24  3C 80 80 51 */	lis r4, msVal__Q32og9newScreen11ObjSMenuMap@ha
/* 80311AE8 0030EA28  38 84 3C 40 */	addi r4, r4, msVal__Q32og9newScreen11ObjSMenuMap@l
/* 80311AEC 0030EA2C  81 83 00 00 */	lwz r12, 0(r3)
/* 80311AF0 0030EA30  C0 24 00 34 */	lfs f1, 0x34(r4)
/* 80311AF4 0030EA34  C0 04 00 38 */	lfs f0, 0x38(r4)
/* 80311AF8 0030EA38  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80311AFC 0030EA3C  EC 3E 08 2A */	fadds f1, f30, f1
/* 80311B00 0030EA40  EC 5D 00 2A */	fadds f2, f29, f0
/* 80311B04 0030EA44  7D 89 03 A6 */	mtctr r12
/* 80311B08 0030EA48  4E 80 04 21 */	bctrl 
/* 80311B0C 0030EA4C  3C 60 80 51 */	lis r3, msVal__Q32og9newScreen11ObjSMenuMap@ha
/* 80311B10 0030EA50  C3 C2 F4 30 */	lfs f30, lbl_8051D790@sda21(r2)
/* 80311B14 0030EA54  3B E3 3C 40 */	addi r31, r3, msVal__Q32og9newScreen11ObjSMenuMap@l
/* 80311B18 0030EA58  3B 40 00 00 */	li r26, 0
/* 80311B1C 0030EA5C  3B 60 00 00 */	li r27, 0
/* 80311B20 0030EA60  48 00 00 60 */	b .L_80311B80
.L_80311B24:
/* 80311B24 0030EA64  C0 1F 00 24 */	lfs f0, 0x24(r31)
/* 80311B28 0030EA68  80 7C 00 CC */	lwz r3, 0xcc(r28)
/* 80311B2C 0030EA6C  EC 00 F8 24 */	fdivs f0, f0, f31
/* 80311B30 0030EA70  7C 63 D8 2E */	lwzx r3, r3, r27
/* 80311B34 0030EA74  80 63 00 00 */	lwz r3, 0(r3)
/* 80311B38 0030EA78  D0 03 00 CC */	stfs f0, 0xcc(r3)
/* 80311B3C 0030EA7C  D0 03 00 D0 */	stfs f0, 0xd0(r3)
/* 80311B40 0030EA80  81 83 00 00 */	lwz r12, 0(r3)
/* 80311B44 0030EA84  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 80311B48 0030EA88  7D 89 03 A6 */	mtctr r12
/* 80311B4C 0030EA8C  4E 80 04 21 */	bctrl 
/* 80311B50 0030EA90  80 7C 00 CC */	lwz r3, 0xcc(r28)
/* 80311B54 0030EA94  C0 1C 00 EC */	lfs f0, 0xec(r28)
/* 80311B58 0030EA98  7C 63 D8 2E */	lwzx r3, r3, r27
/* 80311B5C 0030EA9C  EC 1E 00 28 */	fsubs f0, f30, f0
/* 80311B60 0030EAA0  80 63 00 00 */	lwz r3, 0(r3)
/* 80311B64 0030EAA4  D0 03 00 C0 */	stfs f0, 0xc0(r3)
/* 80311B68 0030EAA8  81 83 00 00 */	lwz r12, 0(r3)
/* 80311B6C 0030EAAC  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 80311B70 0030EAB0  7D 89 03 A6 */	mtctr r12
/* 80311B74 0030EAB4  4E 80 04 21 */	bctrl 
/* 80311B78 0030EAB8  3B 7B 00 04 */	addi r27, r27, 4
/* 80311B7C 0030EABC  3B 5A 00 01 */	addi r26, r26, 1
.L_80311B80:
/* 80311B80 0030EAC0  80 1C 01 1C */	lwz r0, 0x11c(r28)
/* 80311B84 0030EAC4  7C 1A 00 00 */	cmpw r26, r0
/* 80311B88 0030EAC8  41 80 FF 9C */	blt .L_80311B24
/* 80311B8C 0030EACC  80 1C 00 D0 */	lwz r0, 0xd0(r28)
/* 80311B90 0030EAD0  28 00 00 00 */	cmplwi r0, 0
/* 80311B94 0030EAD4  41 82 01 04 */	beq .L_80311C98
/* 80311B98 0030EAD8  80 7C 00 D4 */	lwz r3, 0xd4(r28)
/* 80311B9C 0030EADC  28 03 00 00 */	cmplwi r3, 0
/* 80311BA0 0030EAE0  41 82 00 F8 */	beq .L_80311C98
/* 80311BA4 0030EAE4  C0 1F 00 24 */	lfs f0, 0x24(r31)
/* 80311BA8 0030EAE8  3C 80 80 51 */	lis r4, msVal__Q32og9newScreen11ObjSMenuMap@ha
/* 80311BAC 0030EAEC  81 83 00 00 */	lwz r12, 0(r3)
/* 80311BB0 0030EAF0  38 84 3C 40 */	addi r4, r4, msVal__Q32og9newScreen11ObjSMenuMap@l
/* 80311BB4 0030EAF4  EC 00 F8 24 */	fdivs f0, f0, f31
/* 80311BB8 0030EAF8  C0 24 00 28 */	lfs f1, 0x28(r4)
/* 80311BBC 0030EAFC  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 80311BC0 0030EB00  EF A1 00 32 */	fmuls f29, f1, f0
/* 80311BC4 0030EB04  7D 89 03 A6 */	mtctr r12
/* 80311BC8 0030EB08  4E 80 04 21 */	bctrl 
/* 80311BCC 0030EB0C  FF C0 08 90 */	fmr f30, f1
/* 80311BD0 0030EB10  80 7C 00 D0 */	lwz r3, 0xd0(r28)
/* 80311BD4 0030EB14  38 80 00 04 */	li r4, 4
/* 80311BD8 0030EB18  4B D2 70 E5 */	bl setBasePosition__7J2DPaneF15J2DBasePosition
/* 80311BDC 0030EB1C  80 7C 00 D0 */	lwz r3, 0xd0(r28)
/* 80311BE0 0030EB20  D3 A3 00 CC */	stfs f29, 0xcc(r3)
/* 80311BE4 0030EB24  D3 A3 00 D0 */	stfs f29, 0xd0(r3)
/* 80311BE8 0030EB28  81 83 00 00 */	lwz r12, 0(r3)
/* 80311BEC 0030EB2C  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 80311BF0 0030EB30  7D 89 03 A6 */	mtctr r12
/* 80311BF4 0030EB34  4E 80 04 21 */	bctrl 
/* 80311BF8 0030EB38  C0 02 F4 30 */	lfs f0, lbl_8051D790@sda21(r2)
/* 80311BFC 0030EB3C  C0 42 F4 80 */	lfs f2, lbl_8051D7E0@sda21(r2)
/* 80311C00 0030EB40  EC 20 07 B2 */	fmuls f1, f0, f30
/* 80311C04 0030EB44  C0 02 F4 2C */	lfs f0, lbl_8051D78C@sda21(r2)
/* 80311C08 0030EB48  80 7C 00 D0 */	lwz r3, 0xd0(r28)
/* 80311C0C 0030EB4C  EC 01 00 24 */	fdivs f0, f1, f0
/* 80311C10 0030EB50  EF C2 00 2A */	fadds f30, f2, f0
/* 80311C14 0030EB54  D3 C3 00 C0 */	stfs f30, 0xc0(r3)
/* 80311C18 0030EB58  81 83 00 00 */	lwz r12, 0(r3)
/* 80311C1C 0030EB5C  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 80311C20 0030EB60  7D 89 03 A6 */	mtctr r12
/* 80311C24 0030EB64  4E 80 04 21 */	bctrl 
/* 80311C28 0030EB68  80 7C 01 30 */	lwz r3, 0x130(r28)
/* 80311C2C 0030EB6C  38 80 00 04 */	li r4, 4
/* 80311C30 0030EB70  4B D2 70 8D */	bl setBasePosition__7J2DPaneF15J2DBasePosition
/* 80311C34 0030EB74  80 7C 01 30 */	lwz r3, 0x130(r28)
/* 80311C38 0030EB78  D3 A3 00 CC */	stfs f29, 0xcc(r3)
/* 80311C3C 0030EB7C  D3 A3 00 D0 */	stfs f29, 0xd0(r3)
/* 80311C40 0030EB80  81 83 00 00 */	lwz r12, 0(r3)
/* 80311C44 0030EB84  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 80311C48 0030EB88  7D 89 03 A6 */	mtctr r12
/* 80311C4C 0030EB8C  4E 80 04 21 */	bctrl 
/* 80311C50 0030EB90  80 7C 01 30 */	lwz r3, 0x130(r28)
/* 80311C54 0030EB94  D3 C3 00 C0 */	stfs f30, 0xc0(r3)
/* 80311C58 0030EB98  81 83 00 00 */	lwz r12, 0(r3)
/* 80311C5C 0030EB9C  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 80311C60 0030EBA0  7D 89 03 A6 */	mtctr r12
/* 80311C64 0030EBA4  4E 80 04 21 */	bctrl 
/* 80311C68 0030EBA8  80 7C 00 D0 */	lwz r3, 0xd0(r28)
/* 80311C6C 0030EBAC  7F C4 F3 78 */	mr r4, r30
/* 80311C70 0030EBB0  81 83 00 00 */	lwz r12, 0(r3)
/* 80311C74 0030EBB4  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 80311C78 0030EBB8  7D 89 03 A6 */	mtctr r12
/* 80311C7C 0030EBBC  4E 80 04 21 */	bctrl 
/* 80311C80 0030EBC0  80 7C 01 30 */	lwz r3, 0x130(r28)
/* 80311C84 0030EBC4  7F C4 F3 78 */	mr r4, r30
/* 80311C88 0030EBC8  81 83 00 00 */	lwz r12, 0(r3)
/* 80311C8C 0030EBCC  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 80311C90 0030EBD0  7D 89 03 A6 */	mtctr r12
/* 80311C94 0030EBD4  4E 80 04 21 */	bctrl 
.L_80311C98:
/* 80311C98 0030EBD8  80 1C 00 D8 */	lwz r0, 0xd8(r28)
/* 80311C9C 0030EBDC  28 00 00 00 */	cmplwi r0, 0
/* 80311CA0 0030EBE0  41 82 01 04 */	beq .L_80311DA4
/* 80311CA4 0030EBE4  80 7C 00 DC */	lwz r3, 0xdc(r28)
/* 80311CA8 0030EBE8  28 03 00 00 */	cmplwi r3, 0
/* 80311CAC 0030EBEC  41 82 00 F8 */	beq .L_80311DA4
/* 80311CB0 0030EBF0  C0 1F 00 24 */	lfs f0, 0x24(r31)
/* 80311CB4 0030EBF4  3C 80 80 51 */	lis r4, msVal__Q32og9newScreen11ObjSMenuMap@ha
/* 80311CB8 0030EBF8  81 83 00 00 */	lwz r12, 0(r3)
/* 80311CBC 0030EBFC  38 84 3C 40 */	addi r4, r4, msVal__Q32og9newScreen11ObjSMenuMap@l
/* 80311CC0 0030EC00  EC 00 F8 24 */	fdivs f0, f0, f31
/* 80311CC4 0030EC04  C0 24 00 28 */	lfs f1, 0x28(r4)
/* 80311CC8 0030EC08  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 80311CCC 0030EC0C  EF A1 00 32 */	fmuls f29, f1, f0
/* 80311CD0 0030EC10  7D 89 03 A6 */	mtctr r12
/* 80311CD4 0030EC14  4E 80 04 21 */	bctrl 
/* 80311CD8 0030EC18  FF E0 08 90 */	fmr f31, f1
/* 80311CDC 0030EC1C  80 7C 00 D8 */	lwz r3, 0xd8(r28)
/* 80311CE0 0030EC20  38 80 00 04 */	li r4, 4
/* 80311CE4 0030EC24  4B D2 6F D9 */	bl setBasePosition__7J2DPaneF15J2DBasePosition
/* 80311CE8 0030EC28  80 7C 00 D8 */	lwz r3, 0xd8(r28)
/* 80311CEC 0030EC2C  D3 A3 00 CC */	stfs f29, 0xcc(r3)
/* 80311CF0 0030EC30  D3 A3 00 D0 */	stfs f29, 0xd0(r3)
/* 80311CF4 0030EC34  81 83 00 00 */	lwz r12, 0(r3)
/* 80311CF8 0030EC38  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 80311CFC 0030EC3C  7D 89 03 A6 */	mtctr r12
/* 80311D00 0030EC40  4E 80 04 21 */	bctrl 
/* 80311D04 0030EC44  C0 02 F4 30 */	lfs f0, lbl_8051D790@sda21(r2)
/* 80311D08 0030EC48  C0 42 F4 80 */	lfs f2, lbl_8051D7E0@sda21(r2)
/* 80311D0C 0030EC4C  EC 20 07 F2 */	fmuls f1, f0, f31
/* 80311D10 0030EC50  C0 02 F4 2C */	lfs f0, lbl_8051D78C@sda21(r2)
/* 80311D14 0030EC54  80 7C 00 D8 */	lwz r3, 0xd8(r28)
/* 80311D18 0030EC58  EC 01 00 24 */	fdivs f0, f1, f0
/* 80311D1C 0030EC5C  EF C2 00 2A */	fadds f30, f2, f0
/* 80311D20 0030EC60  D3 C3 00 C0 */	stfs f30, 0xc0(r3)
/* 80311D24 0030EC64  81 83 00 00 */	lwz r12, 0(r3)
/* 80311D28 0030EC68  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 80311D2C 0030EC6C  7D 89 03 A6 */	mtctr r12
/* 80311D30 0030EC70  4E 80 04 21 */	bctrl 
/* 80311D34 0030EC74  80 7C 01 34 */	lwz r3, 0x134(r28)
/* 80311D38 0030EC78  38 80 00 04 */	li r4, 4
/* 80311D3C 0030EC7C  4B D2 6F 81 */	bl setBasePosition__7J2DPaneF15J2DBasePosition
/* 80311D40 0030EC80  80 7C 01 34 */	lwz r3, 0x134(r28)
/* 80311D44 0030EC84  D3 A3 00 CC */	stfs f29, 0xcc(r3)
/* 80311D48 0030EC88  D3 A3 00 D0 */	stfs f29, 0xd0(r3)
/* 80311D4C 0030EC8C  81 83 00 00 */	lwz r12, 0(r3)
/* 80311D50 0030EC90  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 80311D54 0030EC94  7D 89 03 A6 */	mtctr r12
/* 80311D58 0030EC98  4E 80 04 21 */	bctrl 
/* 80311D5C 0030EC9C  80 7C 01 34 */	lwz r3, 0x134(r28)
/* 80311D60 0030ECA0  D3 C3 00 C0 */	stfs f30, 0xc0(r3)
/* 80311D64 0030ECA4  81 83 00 00 */	lwz r12, 0(r3)
/* 80311D68 0030ECA8  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 80311D6C 0030ECAC  7D 89 03 A6 */	mtctr r12
/* 80311D70 0030ECB0  4E 80 04 21 */	bctrl 
/* 80311D74 0030ECB4  80 7C 00 D8 */	lwz r3, 0xd8(r28)
/* 80311D78 0030ECB8  7F A4 EB 78 */	mr r4, r29
/* 80311D7C 0030ECBC  81 83 00 00 */	lwz r12, 0(r3)
/* 80311D80 0030ECC0  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 80311D84 0030ECC4  7D 89 03 A6 */	mtctr r12
/* 80311D88 0030ECC8  4E 80 04 21 */	bctrl 
/* 80311D8C 0030ECCC  80 7C 01 34 */	lwz r3, 0x134(r28)
/* 80311D90 0030ECD0  7F A4 EB 78 */	mr r4, r29
/* 80311D94 0030ECD4  81 83 00 00 */	lwz r12, 0(r3)
/* 80311D98 0030ECD8  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 80311D9C 0030ECDC  7D 89 03 A6 */	mtctr r12
/* 80311DA0 0030ECE0  4E 80 04 21 */	bctrl 
.L_80311DA4:
/* 80311DA4 0030ECE4  E3 E1 00 88 */	psq_l f31, 136(r1), 0, qr0
/* 80311DA8 0030ECE8  CB E1 00 80 */	lfd f31, 0x80(r1)
/* 80311DAC 0030ECEC  E3 C1 00 78 */	psq_l f30, 120(r1), 0, qr0
/* 80311DB0 0030ECF0  CB C1 00 70 */	lfd f30, 0x70(r1)
/* 80311DB4 0030ECF4  E3 A1 00 68 */	psq_l f29, 104(r1), 0, qr0
/* 80311DB8 0030ECF8  CB A1 00 60 */	lfd f29, 0x60(r1)
/* 80311DBC 0030ECFC  BB 41 00 48 */	lmw r26, 0x48(r1)
/* 80311DC0 0030ED00  80 01 00 94 */	lwz r0, 0x94(r1)
/* 80311DC4 0030ED04  7C 08 03 A6 */	mtlr r0
/* 80311DC8 0030ED08  38 21 00 90 */	addi r1, r1, 0x90
/* 80311DCC 0030ED0C  4E 80 00 20 */	blr 
.endfn updateMap__Q32og9newScreen11ObjSMenuMapFv

.fn commonUpdate__Q32og9newScreen11ObjSMenuMapFv, global
/* 80311DD0 0030ED10  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80311DD4 0030ED14  7C 08 02 A6 */	mflr r0
/* 80311DD8 0030ED18  90 01 00 14 */	stw r0, 0x14(r1)
/* 80311DDC 0030ED1C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80311DE0 0030ED20  7C 7F 1B 78 */	mr r31, r3
/* 80311DE4 0030ED24  48 00 47 59 */	bl commonUpdateBase__Q32og9newScreen12ObjSMenuBaseFv
/* 80311DE8 0030ED28  3C 80 80 51 */	lis r4, msVal__Q32og9newScreen11ObjSMenuMap@ha
/* 80311DEC 0030ED2C  7F E3 FB 78 */	mr r3, r31
/* 80311DF0 0030ED30  38 84 3C 40 */	addi r4, r4, msVal__Q32og9newScreen11ObjSMenuMap@l
/* 80311DF4 0030ED34  C0 24 00 40 */	lfs f1, 0x40(r4)
/* 80311DF8 0030ED38  C0 44 00 44 */	lfs f2, 0x44(r4)
/* 80311DFC 0030ED3C  48 00 45 3D */	bl setSMenuScale__Q32og9newScreen12ObjSMenuBaseFff
/* 80311E00 0030ED40  80 7F 00 B0 */	lwz r3, 0xb0(r31)
/* 80311E04 0030ED44  4B FF 36 E5 */	bl update__Q32og6Screen9AnimGroupFv
/* 80311E08 0030ED48  7F E3 FB 78 */	mr r3, r31
/* 80311E0C 0030ED4C  4B FF FA 2D */	bl updateMap__Q32og9newScreen11ObjSMenuMapFv
/* 80311E10 0030ED50  C0 7F 00 40 */	lfs f3, 0x40(r31)
/* 80311E14 0030ED54  C0 42 24 3C */	lfs f2, mstTuningTransX__Q29P2DScreen10Mgr_tuning@sda21(r2)
/* 80311E18 0030ED58  C0 22 F3 E0 */	lfs f1, lbl_8051D740@sda21(r2)
/* 80311E1C 0030ED5C  C0 02 24 40 */	lfs f0, mstTuningTransY__Q29P2DScreen10Mgr_tuning@sda21(r2)
/* 80311E20 0030ED60  EC 43 10 2A */	fadds f2, f3, f2
/* 80311E24 0030ED64  80 7F 00 AC */	lwz r3, 0xac(r31)
/* 80311E28 0030ED68  EC 01 00 2A */	fadds f0, f1, f0
/* 80311E2C 0030ED6C  D0 43 01 40 */	stfs f2, 0x140(r3)
/* 80311E30 0030ED70  D0 03 01 44 */	stfs f0, 0x144(r3)
/* 80311E34 0030ED74  80 7F 00 AC */	lwz r3, 0xac(r31)
/* 80311E38 0030ED78  4B D2 EC F5 */	bl animation__9J2DScreenFv
/* 80311E3C 0030ED7C  80 7F 00 AC */	lwz r3, 0xac(r31)
/* 80311E40 0030ED80  81 83 00 00 */	lwz r12, 0(r3)
/* 80311E44 0030ED84  81 8C 00 30 */	lwz r12, 0x30(r12)
/* 80311E48 0030ED88  7D 89 03 A6 */	mtctr r12
/* 80311E4C 0030ED8C  4E 80 04 21 */	bctrl 
/* 80311E50 0030ED90  80 7F 00 BC */	lwz r3, 0xbc(r31)
/* 80311E54 0030ED94  81 83 00 00 */	lwz r12, 0(r3)
/* 80311E58 0030ED98  81 8C 00 30 */	lwz r12, 0x30(r12)
/* 80311E5C 0030ED9C  7D 89 03 A6 */	mtctr r12
/* 80311E60 0030EDA0  4E 80 04 21 */	bctrl 
/* 80311E64 0030EDA4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80311E68 0030EDA8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80311E6C 0030EDAC  7C 08 03 A6 */	mtlr r0
/* 80311E70 0030EDB0  38 21 00 10 */	addi r1, r1, 0x10
/* 80311E74 0030EDB4  4E 80 00 20 */	blr 
.endfn commonUpdate__Q32og9newScreen11ObjSMenuMapFv

.fn doUpdateLAction__Q32og9newScreen11ObjSMenuMapFv, global
/* 80311E78 0030EDB8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80311E7C 0030EDBC  7C 08 02 A6 */	mflr r0
/* 80311E80 0030EDC0  90 01 00 24 */	stw r0, 0x24(r1)
/* 80311E84 0030EDC4  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80311E88 0030EDC8  7C 7F 1B 78 */	mr r31, r3
/* 80311E8C 0030EDCC  48 14 21 1D */	bl getDispMember__Q26Screen7ObjBaseFv
/* 80311E90 0030EDD0  3C A0 80 4E */	lis r5, __vt__Q26Screen12SceneArgBase@ha
/* 80311E94 0030EDD4  3C 80 80 4E */	lis r4, __vt__Q26Screen11SetSceneArg@ha
/* 80311E98 0030EDD8  38 05 84 68 */	addi r0, r5, __vt__Q26Screen12SceneArgBase@l
/* 80311E9C 0030EDDC  38 C0 27 1C */	li r6, 0x271c
/* 80311EA0 0030EDE0  90 01 00 08 */	stw r0, 8(r1)
/* 80311EA4 0030EDE4  38 E4 84 58 */	addi r7, r4, __vt__Q26Screen11SetSceneArg@l
/* 80311EA8 0030EDE8  38 A0 00 00 */	li r5, 0
/* 80311EAC 0030EDEC  38 00 00 01 */	li r0, 1
/* 80311EB0 0030EDF0  90 61 00 14 */	stw r3, 0x14(r1)
/* 80311EB4 0030EDF4  7F E3 FB 78 */	mr r3, r31
/* 80311EB8 0030EDF8  38 81 00 08 */	addi r4, r1, 8
/* 80311EBC 0030EDFC  90 E1 00 08 */	stw r7, 8(r1)
/* 80311EC0 0030EE00  90 C1 00 0C */	stw r6, 0xc(r1)
/* 80311EC4 0030EE04  98 A1 00 10 */	stb r5, 0x10(r1)
/* 80311EC8 0030EE08  98 01 00 11 */	stb r0, 0x11(r1)
/* 80311ECC 0030EE0C  48 00 49 2D */	bl jump_L__Q32og9newScreen12ObjSMenuBaseFRQ26Screen11SetSceneArg
/* 80311ED0 0030EE10  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80311ED4 0030EE14  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80311ED8 0030EE18  7C 08 03 A6 */	mtlr r0
/* 80311EDC 0030EE1C  38 21 00 20 */	addi r1, r1, 0x20
/* 80311EE0 0030EE20  4E 80 00 20 */	blr 
.endfn doUpdateLAction__Q32og9newScreen11ObjSMenuMapFv

.fn doUpdateRAction__Q32og9newScreen11ObjSMenuMapFv, global
/* 80311EE4 0030EE24  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80311EE8 0030EE28  7C 08 02 A6 */	mflr r0
/* 80311EEC 0030EE2C  90 01 00 34 */	stw r0, 0x34(r1)
/* 80311EF0 0030EE30  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 80311EF4 0030EE34  7C 7F 1B 78 */	mr r31, r3
/* 80311EF8 0030EE38  80 83 00 A8 */	lwz r4, 0xa8(r3)
/* 80311EFC 0030EE3C  88 04 00 49 */	lbz r0, 0x49(r4)
/* 80311F00 0030EE40  28 00 00 00 */	cmplwi r0, 0
/* 80311F04 0030EE44  41 82 00 4C */	beq .L_80311F50
/* 80311F08 0030EE48  48 14 20 A1 */	bl getDispMember__Q26Screen7ObjBaseFv
/* 80311F0C 0030EE4C  3C A0 80 4E */	lis r5, __vt__Q26Screen12SceneArgBase@ha
/* 80311F10 0030EE50  3C 80 80 4E */	lis r4, __vt__Q26Screen11SetSceneArg@ha
/* 80311F14 0030EE54  38 05 84 68 */	addi r0, r5, __vt__Q26Screen12SceneArgBase@l
/* 80311F18 0030EE58  38 C0 27 1B */	li r6, 0x271b
/* 80311F1C 0030EE5C  90 01 00 18 */	stw r0, 0x18(r1)
/* 80311F20 0030EE60  38 E4 84 58 */	addi r7, r4, __vt__Q26Screen11SetSceneArg@l
/* 80311F24 0030EE64  38 A0 00 00 */	li r5, 0
/* 80311F28 0030EE68  38 00 00 01 */	li r0, 1
/* 80311F2C 0030EE6C  90 61 00 24 */	stw r3, 0x24(r1)
/* 80311F30 0030EE70  7F E3 FB 78 */	mr r3, r31
/* 80311F34 0030EE74  38 81 00 18 */	addi r4, r1, 0x18
/* 80311F38 0030EE78  90 E1 00 18 */	stw r7, 0x18(r1)
/* 80311F3C 0030EE7C  90 C1 00 1C */	stw r6, 0x1c(r1)
/* 80311F40 0030EE80  98 A1 00 20 */	stb r5, 0x20(r1)
/* 80311F44 0030EE84  98 01 00 21 */	stb r0, 0x21(r1)
/* 80311F48 0030EE88  48 00 49 95 */	bl jump_R__Q32og9newScreen12ObjSMenuBaseFRQ26Screen11SetSceneArg
/* 80311F4C 0030EE8C  48 00 00 48 */	b .L_80311F94
.L_80311F50:
/* 80311F50 0030EE90  48 14 20 59 */	bl getDispMember__Q26Screen7ObjBaseFv
/* 80311F54 0030EE94  3C A0 80 4E */	lis r5, __vt__Q26Screen12SceneArgBase@ha
/* 80311F58 0030EE98  3C 80 80 4E */	lis r4, __vt__Q26Screen11SetSceneArg@ha
/* 80311F5C 0030EE9C  38 05 84 68 */	addi r0, r5, __vt__Q26Screen12SceneArgBase@l
/* 80311F60 0030EEA0  38 C0 27 1A */	li r6, 0x271a
/* 80311F64 0030EEA4  90 01 00 08 */	stw r0, 8(r1)
/* 80311F68 0030EEA8  38 E4 84 58 */	addi r7, r4, __vt__Q26Screen11SetSceneArg@l
/* 80311F6C 0030EEAC  38 A0 00 00 */	li r5, 0
/* 80311F70 0030EEB0  38 00 00 01 */	li r0, 1
/* 80311F74 0030EEB4  90 61 00 14 */	stw r3, 0x14(r1)
/* 80311F78 0030EEB8  7F E3 FB 78 */	mr r3, r31
/* 80311F7C 0030EEBC  38 81 00 08 */	addi r4, r1, 8
/* 80311F80 0030EEC0  90 E1 00 08 */	stw r7, 8(r1)
/* 80311F84 0030EEC4  90 C1 00 0C */	stw r6, 0xc(r1)
/* 80311F88 0030EEC8  98 A1 00 10 */	stb r5, 0x10(r1)
/* 80311F8C 0030EECC  98 01 00 11 */	stb r0, 0x11(r1)
/* 80311F90 0030EED0  48 00 49 4D */	bl jump_R__Q32og9newScreen12ObjSMenuBaseFRQ26Screen11SetSceneArg
.L_80311F94:
/* 80311F94 0030EED4  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80311F98 0030EED8  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 80311F9C 0030EEDC  7C 08 03 A6 */	mtlr r0
/* 80311FA0 0030EEE0  38 21 00 30 */	addi r1, r1, 0x30
/* 80311FA4 0030EEE4  4E 80 00 20 */	blr 
.endfn doUpdateRAction__Q32og9newScreen11ObjSMenuMapFv

.fn doUpdate__Q32og9newScreen11ObjSMenuMapFv, global
/* 80311FA8 0030EEE8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80311FAC 0030EEEC  7C 08 02 A6 */	mflr r0
/* 80311FB0 0030EEF0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80311FB4 0030EEF4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80311FB8 0030EEF8  7C 7F 1B 78 */	mr r31, r3
/* 80311FBC 0030EEFC  81 83 00 00 */	lwz r12, 0(r3)
/* 80311FC0 0030EF00  81 8C 00 30 */	lwz r12, 0x30(r12)
/* 80311FC4 0030EF04  7D 89 03 A6 */	mtctr r12
/* 80311FC8 0030EF08  4E 80 04 21 */	bctrl 
/* 80311FCC 0030EF0C  48 14 02 65 */	bl getGamePad__Q26Screen9SceneBaseCFv
/* 80311FD0 0030EF10  90 7F 01 18 */	stw r3, 0x118(r31)
/* 80311FD4 0030EF14  7F E3 FB 78 */	mr r3, r31
/* 80311FD8 0030EF18  4B FF EC 19 */	bl transMap__Q32og9newScreen11ObjSMenuMapFv
/* 80311FDC 0030EF1C  80 7F 01 18 */	lwz r3, 0x118(r31)
/* 80311FE0 0030EF20  38 00 00 00 */	li r0, 0
/* 80311FE4 0030EF24  C0 02 F4 48 */	lfs f0, lbl_8051D7A8@sda21(r2)
/* 80311FE8 0030EF28  7C 04 03 78 */	mr r4, r0
/* 80311FEC 0030EF2C  C0 23 00 5C */	lfs f1, 0x5c(r3)
/* 80311FF0 0030EF30  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80311FF4 0030EF34  40 81 00 08 */	ble .L_80311FFC
/* 80311FF8 0030EF38  38 00 00 01 */	li r0, 1
.L_80311FFC:
/* 80311FFC 0030EF3C  C0 02 F4 4C */	lfs f0, lbl_8051D7AC@sda21(r2)
/* 80312000 0030EF40  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80312004 0030EF44  40 80 00 08 */	bge .L_8031200C
/* 80312008 0030EF48  38 80 00 01 */	li r4, 1
.L_8031200C:
/* 8031200C 0030EF4C  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 80312010 0030EF50  41 82 00 3C */	beq .L_8031204C
/* 80312014 0030EF54  C0 22 F4 50 */	lfs f1, lbl_8051D7B0@sda21(r2)
/* 80312018 0030EF58  3C 60 80 51 */	lis r3, msVal__Q32og9newScreen11ObjSMenuMap@ha
/* 8031201C 0030EF5C  C0 1F 00 E8 */	lfs f0, 0xe8(r31)
/* 80312020 0030EF60  38 63 3C 40 */	addi r3, r3, msVal__Q32og9newScreen11ObjSMenuMap@l
/* 80312024 0030EF64  EC 01 00 3A */	fmadds f0, f1, f0, f0
/* 80312028 0030EF68  D0 1F 00 E8 */	stfs f0, 0xe8(r31)
/* 8031202C 0030EF6C  C0 1F 00 E8 */	lfs f0, 0xe8(r31)
/* 80312030 0030EF70  C0 23 00 04 */	lfs f1, 4(r3)
/* 80312034 0030EF74  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 80312038 0030EF78  40 81 00 08 */	ble .L_80312040
/* 8031203C 0030EF7C  D0 3F 00 E8 */	stfs f1, 0xe8(r31)
.L_80312040:
/* 80312040 0030EF80  80 6D 97 A8 */	lwz r3, ogSound__2og@sda21(r13)
/* 80312044 0030EF84  4B FF AC 5D */	bl setZoomIn__Q22og5SoundFv
/* 80312048 0030EF88  48 00 00 3C */	b .L_80312084
.L_8031204C:
/* 8031204C 0030EF8C  54 80 06 3F */	clrlwi. r0, r4, 0x18
/* 80312050 0030EF90  41 82 00 34 */	beq .L_80312084
/* 80312054 0030EF94  C0 22 F4 50 */	lfs f1, lbl_8051D7B0@sda21(r2)
/* 80312058 0030EF98  3C 60 80 51 */	lis r3, msVal__Q32og9newScreen11ObjSMenuMap@ha
/* 8031205C 0030EF9C  C0 1F 00 E8 */	lfs f0, 0xe8(r31)
/* 80312060 0030EFA0  EC 01 00 3C */	fnmsubs f0, f1, f0, f0
/* 80312064 0030EFA4  D0 1F 00 E8 */	stfs f0, 0xe8(r31)
/* 80312068 0030EFA8  C0 1F 00 E8 */	lfs f0, 0xe8(r31)
/* 8031206C 0030EFAC  C0 23 3C 40 */	lfs f1, msVal__Q32og9newScreen11ObjSMenuMap@l(r3)
/* 80312070 0030EFB0  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 80312074 0030EFB4  40 80 00 08 */	bge .L_8031207C
/* 80312078 0030EFB8  D0 3F 00 E8 */	stfs f1, 0xe8(r31)
.L_8031207C:
/* 8031207C 0030EFBC  80 6D 97 A8 */	lwz r3, ogSound__2og@sda21(r13)
/* 80312080 0030EFC0  4B FF AC 4D */	bl setZoomOut__Q22og5SoundFv
.L_80312084:
/* 80312084 0030EFC4  7F E3 FB 78 */	mr r3, r31
/* 80312088 0030EFC8  81 9F 00 00 */	lwz r12, 0(r31)
/* 8031208C 0030EFCC  81 8C 00 A4 */	lwz r12, 0xa4(r12)
/* 80312090 0030EFD0  7D 89 03 A6 */	mtctr r12
/* 80312094 0030EFD4  4E 80 04 21 */	bctrl 
/* 80312098 0030EFD8  7F E3 FB 78 */	mr r3, r31
/* 8031209C 0030EFDC  48 00 44 C1 */	bl doUpdate__Q32og9newScreen12ObjSMenuBaseFv
/* 803120A0 0030EFE0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803120A4 0030EFE4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803120A8 0030EFE8  7C 08 03 A6 */	mtlr r0
/* 803120AC 0030EFEC  38 21 00 10 */	addi r1, r1, 0x10
/* 803120B0 0030EFF0  4E 80 00 20 */	blr 
.endfn doUpdate__Q32og9newScreen11ObjSMenuMapFv

.fn doDraw__Q32og9newScreen11ObjSMenuMapFR8Graphics, global
/* 803120B4 0030EFF4  94 21 FD 40 */	stwu r1, -0x2c0(r1)
/* 803120B8 0030EFF8  7C 08 02 A6 */	mflr r0
/* 803120BC 0030EFFC  90 01 02 C4 */	stw r0, 0x2c4(r1)
/* 803120C0 0030F000  93 E1 02 BC */	stw r31, 0x2bc(r1)
/* 803120C4 0030F004  93 C1 02 B8 */	stw r30, 0x2b8(r1)
/* 803120C8 0030F008  7C 9E 23 78 */	mr r30, r4
/* 803120CC 0030F00C  3B FE 01 90 */	addi r31, r30, 0x190
/* 803120D0 0030F010  93 A1 02 B4 */	stw r29, 0x2b4(r1)
/* 803120D4 0030F014  7C 7D 1B 78 */	mr r29, r3
/* 803120D8 0030F018  48 00 01 15 */	bl drawMap__Q32og9newScreen11ObjSMenuMapFR8Graphics
/* 803120DC 0030F01C  38 61 00 08 */	addi r3, r1, 8
/* 803120E0 0030F020  48 11 52 E5 */	bl __ct__8GraphicsFv
/* 803120E4 0030F024  80 7D 00 BC */	lwz r3, 0xbc(r29)
/* 803120E8 0030F028  7F E5 FB 78 */	mr r5, r31
/* 803120EC 0030F02C  38 81 00 08 */	addi r4, r1, 8
/* 803120F0 0030F030  81 83 00 00 */	lwz r12, 0(r3)
/* 803120F4 0030F034  81 8C 00 9C */	lwz r12, 0x9c(r12)
/* 803120F8 0030F038  7D 89 03 A6 */	mtctr r12
/* 803120FC 0030F03C  4E 80 04 21 */	bctrl 
/* 80312100 0030F040  80 9D 01 2C */	lwz r4, 0x12c(r29)
/* 80312104 0030F044  28 04 00 00 */	cmplwi r4, 0
/* 80312108 0030F048  41 82 00 1C */	beq .L_80312124
/* 8031210C 0030F04C  80 7D 01 28 */	lwz r3, 0x128(r29)
/* 80312110 0030F050  28 03 00 00 */	cmplwi r3, 0
/* 80312114 0030F054  41 82 00 10 */	beq .L_80312124
/* 80312118 0030F058  38 63 00 80 */	addi r3, r3, 0x80
/* 8031211C 0030F05C  38 84 00 50 */	addi r4, r4, 0x50
/* 80312120 0030F060  4B DD 81 AD */	bl PSMTXCopy
.L_80312124:
/* 80312124 0030F064  7F E3 FB 78 */	mr r3, r31
/* 80312128 0030F068  81 9F 00 00 */	lwz r12, 0(r31)
/* 8031212C 0030F06C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80312130 0030F070  7D 89 03 A6 */	mtctr r12
/* 80312134 0030F074  4E 80 04 21 */	bctrl 
/* 80312138 0030F078  80 7D 01 24 */	lwz r3, 0x124(r29)
/* 8031213C 0030F07C  7F C4 F3 78 */	mr r4, r30
/* 80312140 0030F080  7F E5 FB 78 */	mr r5, r31
/* 80312144 0030F084  81 83 00 00 */	lwz r12, 0(r3)
/* 80312148 0030F088  81 8C 00 9C */	lwz r12, 0x9c(r12)
/* 8031214C 0030F08C  7D 89 03 A6 */	mtctr r12
/* 80312150 0030F090  4E 80 04 21 */	bctrl 
/* 80312154 0030F094  7F E3 FB 78 */	mr r3, r31
/* 80312158 0030F098  81 9F 00 00 */	lwz r12, 0(r31)
/* 8031215C 0030F09C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80312160 0030F0A0  7D 89 03 A6 */	mtctr r12
/* 80312164 0030F0A4  4E 80 04 21 */	bctrl 
/* 80312168 0030F0A8  7F A3 EB 78 */	mr r3, r29
/* 8031216C 0030F0AC  7F C4 F3 78 */	mr r4, r30
/* 80312170 0030F0B0  48 00 4D 1D */	bl drawYaji__Q32og9newScreen12ObjSMenuBaseFR8Graphics
/* 80312174 0030F0B4  3C 60 80 4E */	lis r3, __vt__8Graphics@ha
/* 80312178 0030F0B8  34 81 01 98 */	addic. r4, r1, 0x198
/* 8031217C 0030F0BC  38 03 83 60 */	addi r0, r3, __vt__8Graphics@l
/* 80312180 0030F0C0  90 01 02 74 */	stw r0, 0x274(r1)
/* 80312184 0030F0C4  41 82 00 24 */	beq .L_803121A8
/* 80312188 0030F0C8  3C 60 80 4A */	lis r3, __vt__13J2DPerspGraph@ha
/* 8031218C 0030F0CC  28 04 00 00 */	cmplwi r4, 0
/* 80312190 0030F0D0  38 03 06 28 */	addi r0, r3, __vt__13J2DPerspGraph@l
/* 80312194 0030F0D4  90 04 00 00 */	stw r0, 0(r4)
/* 80312198 0030F0D8  41 82 00 10 */	beq .L_803121A8
/* 8031219C 0030F0DC  3C 60 80 4A */	lis r3, __vt__14J2DGrafContext@ha
/* 803121A0 0030F0E0  38 03 06 50 */	addi r0, r3, __vt__14J2DGrafContext@l
/* 803121A4 0030F0E4  90 04 00 00 */	stw r0, 0(r4)
.L_803121A8:
/* 803121A8 0030F0E8  34 81 00 C4 */	addic. r4, r1, 0xc4
/* 803121AC 0030F0EC  41 82 00 24 */	beq .L_803121D0
/* 803121B0 0030F0F0  3C 60 80 4A */	lis r3, __vt__13J2DOrthoGraph@ha
/* 803121B4 0030F0F4  28 04 00 00 */	cmplwi r4, 0
/* 803121B8 0030F0F8  38 03 06 00 */	addi r0, r3, __vt__13J2DOrthoGraph@l
/* 803121BC 0030F0FC  90 04 00 00 */	stw r0, 0(r4)
/* 803121C0 0030F100  41 82 00 10 */	beq .L_803121D0
/* 803121C4 0030F104  3C 60 80 4A */	lis r3, __vt__14J2DGrafContext@ha
/* 803121C8 0030F108  38 03 06 50 */	addi r0, r3, __vt__14J2DGrafContext@l
/* 803121CC 0030F10C  90 04 00 00 */	stw r0, 0(r4)
.L_803121D0:
/* 803121D0 0030F110  80 01 02 C4 */	lwz r0, 0x2c4(r1)
/* 803121D4 0030F114  83 E1 02 BC */	lwz r31, 0x2bc(r1)
/* 803121D8 0030F118  83 C1 02 B8 */	lwz r30, 0x2b8(r1)
/* 803121DC 0030F11C  83 A1 02 B4 */	lwz r29, 0x2b4(r1)
/* 803121E0 0030F120  7C 08 03 A6 */	mtlr r0
/* 803121E4 0030F124  38 21 02 C0 */	addi r1, r1, 0x2c0
/* 803121E8 0030F128  4E 80 00 20 */	blr 
.endfn doDraw__Q32og9newScreen11ObjSMenuMapFR8Graphics

.fn drawMap__Q32og9newScreen11ObjSMenuMapFR8Graphics, global
/* 803121EC 0030F12C  94 21 FF 60 */	stwu r1, -0xa0(r1)
/* 803121F0 0030F130  7C 08 02 A6 */	mflr r0
/* 803121F4 0030F134  90 01 00 A4 */	stw r0, 0xa4(r1)
/* 803121F8 0030F138  93 E1 00 9C */	stw r31, 0x9c(r1)
/* 803121FC 0030F13C  93 C1 00 98 */	stw r30, 0x98(r1)
/* 80312200 0030F140  7C 9E 23 78 */	mr r30, r4
/* 80312204 0030F144  3B FE 01 90 */	addi r31, r30, 0x190
/* 80312208 0030F148  93 A1 00 94 */	stw r29, 0x94(r1)
/* 8031220C 0030F14C  7C 7D 1B 78 */	mr r29, r3
/* 80312210 0030F150  88 03 01 20 */	lbz r0, 0x120(r3)
/* 80312214 0030F154  28 00 00 00 */	cmplwi r0, 0
/* 80312218 0030F158  41 82 00 D8 */	beq .L_803122F0
/* 8031221C 0030F15C  80 6D 96 88 */	lwz r3, randMapMgr__Q24Game4Cave@sda21(r13)
/* 80312220 0030F160  4B F3 2C 99 */	bl getRadarMapTexture__Q34Game4Cave10RandMapMgrFv
/* 80312224 0030F164  90 7D 00 C0 */	stw r3, 0xc0(r29)
/* 80312228 0030F168  38 A0 00 00 */	li r5, 0
/* 8031222C 0030F16C  80 7D 00 C8 */	lwz r3, 0xc8(r29)
/* 80312230 0030F170  80 9D 00 C0 */	lwz r4, 0xc0(r29)
/* 80312234 0030F174  81 83 00 00 */	lwz r12, 0(r3)
/* 80312238 0030F178  80 84 00 20 */	lwz r4, 0x20(r4)
/* 8031223C 0030F17C  81 8C 01 10 */	lwz r12, 0x110(r12)
/* 80312240 0030F180  7D 89 03 A6 */	mtctr r12
/* 80312244 0030F184  4E 80 04 21 */	bctrl 
/* 80312248 0030F188  38 00 00 00 */	li r0, 0
/* 8031224C 0030F18C  38 80 00 00 */	li r4, 0
/* 80312250 0030F190  98 1D 01 20 */	stb r0, 0x120(r29)
/* 80312254 0030F194  80 7D 00 C8 */	lwz r3, 0xc8(r29)
/* 80312258 0030F198  81 83 00 00 */	lwz r12, 0(r3)
/* 8031225C 0030F19C  81 8C 01 20 */	lwz r12, 0x120(r12)
/* 80312260 0030F1A0  7D 89 03 A6 */	mtctr r12
/* 80312264 0030F1A4  4E 80 04 21 */	bctrl 
/* 80312268 0030F1A8  80 63 00 20 */	lwz r3, 0x20(r3)
/* 8031226C 0030F1AC  3C 00 43 30 */	lis r0, 0x4330
/* 80312270 0030F1B0  90 01 00 80 */	stw r0, 0x80(r1)
/* 80312274 0030F1B4  38 80 00 00 */	li r4, 0
/* 80312278 0030F1B8  A0 03 00 02 */	lhz r0, 2(r3)
/* 8031227C 0030F1BC  C8 22 F4 10 */	lfd f1, lbl_8051D770@sda21(r2)
/* 80312280 0030F1C0  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 80312284 0030F1C4  90 01 00 84 */	stw r0, 0x84(r1)
/* 80312288 0030F1C8  C8 01 00 80 */	lfd f0, 0x80(r1)
/* 8031228C 0030F1CC  EC 00 08 28 */	fsubs f0, f0, f1
/* 80312290 0030F1D0  D0 1D 00 F8 */	stfs f0, 0xf8(r29)
/* 80312294 0030F1D4  80 7D 00 C8 */	lwz r3, 0xc8(r29)
/* 80312298 0030F1D8  81 83 00 00 */	lwz r12, 0(r3)
/* 8031229C 0030F1DC  81 8C 01 20 */	lwz r12, 0x120(r12)
/* 803122A0 0030F1E0  7D 89 03 A6 */	mtctr r12
/* 803122A4 0030F1E4  4E 80 04 21 */	bctrl 
/* 803122A8 0030F1E8  80 63 00 20 */	lwz r3, 0x20(r3)
/* 803122AC 0030F1EC  3C 00 43 30 */	lis r0, 0x4330
/* 803122B0 0030F1F0  90 01 00 88 */	stw r0, 0x88(r1)
/* 803122B4 0030F1F4  A0 03 00 04 */	lhz r0, 4(r3)
/* 803122B8 0030F1F8  C8 22 F4 10 */	lfd f1, lbl_8051D770@sda21(r2)
/* 803122BC 0030F1FC  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 803122C0 0030F200  90 01 00 8C */	stw r0, 0x8c(r1)
/* 803122C4 0030F204  C8 01 00 88 */	lfd f0, 0x88(r1)
/* 803122C8 0030F208  EC 00 08 28 */	fsubs f0, f0, f1
/* 803122CC 0030F20C  D0 1D 00 FC */	stfs f0, 0xfc(r29)
/* 803122D0 0030F210  C0 3D 01 00 */	lfs f1, 0x100(r29)
/* 803122D4 0030F214  C0 1D 00 F8 */	lfs f0, 0xf8(r29)
/* 803122D8 0030F218  EC 01 00 24 */	fdivs f0, f1, f0
/* 803122DC 0030F21C  D0 1D 00 F0 */	stfs f0, 0xf0(r29)
/* 803122E0 0030F220  C0 3D 01 04 */	lfs f1, 0x104(r29)
/* 803122E4 0030F224  C0 1D 00 FC */	lfs f0, 0xfc(r29)
/* 803122E8 0030F228  EC 01 00 24 */	fdivs f0, f1, f0
/* 803122EC 0030F22C  D0 1D 00 F4 */	stfs f0, 0xf4(r29)
.L_803122F0:
/* 803122F0 0030F230  80 7D 01 28 */	lwz r3, 0x128(r29)
/* 803122F4 0030F234  28 03 00 00 */	cmplwi r3, 0
/* 803122F8 0030F238  41 82 00 1C */	beq .L_80312314
/* 803122FC 0030F23C  C0 1D 00 EC */	lfs f0, 0xec(r29)
/* 80312300 0030F240  D0 03 00 C0 */	stfs f0, 0xc0(r3)
/* 80312304 0030F244  81 83 00 00 */	lwz r12, 0(r3)
/* 80312308 0030F248  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 8031230C 0030F24C  7D 89 03 A6 */	mtctr r12
/* 80312310 0030F250  4E 80 04 21 */	bctrl 
.L_80312314:
/* 80312314 0030F254  80 7D 00 AC */	lwz r3, 0xac(r29)
/* 80312318 0030F258  28 03 00 00 */	cmplwi r3, 0
/* 8031231C 0030F25C  41 82 00 1C */	beq .L_80312338
/* 80312320 0030F260  81 83 00 00 */	lwz r12, 0(r3)
/* 80312324 0030F264  7F C4 F3 78 */	mr r4, r30
/* 80312328 0030F268  7F E5 FB 78 */	mr r5, r31
/* 8031232C 0030F26C  81 8C 00 9C */	lwz r12, 0x9c(r12)
/* 80312330 0030F270  7D 89 03 A6 */	mtctr r12
/* 80312334 0030F274  4E 80 04 21 */	bctrl 
.L_80312338:
/* 80312338 0030F278  7F E3 FB 78 */	mr r3, r31
/* 8031233C 0030F27C  81 9F 00 00 */	lwz r12, 0(r31)
/* 80312340 0030F280  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80312344 0030F284  7D 89 03 A6 */	mtctr r12
/* 80312348 0030F288  4E 80 04 21 */	bctrl 
/* 8031234C 0030F28C  80 8D 9A EC */	lwz r4, sys@sda21(r13)
/* 80312350 0030F290  3C 60 80 51 */	lis r3, j3dSys@ha
/* 80312354 0030F294  38 63 F2 30 */	addi r3, r3, j3dSys@l
/* 80312358 0030F298  83 C4 00 24 */	lwz r30, 0x24(r4)
/* 8031235C 0030F29C  4B D4 B8 B1 */	bl drawInit__6J3DSysFv
/* 80312360 0030F2A0  7F C3 F3 78 */	mr r3, r30
/* 80312364 0030F2A4  38 80 00 00 */	li r4, 0
/* 80312368 0030F2A8  48 11 34 B5 */	bl initPrimDraw__8GraphicsFP7Matrixf
/* 8031236C 0030F2AC  38 60 00 00 */	li r3, 0
/* 80312370 0030F2B0  4B DD 6D BD */	bl GXSetColorUpdate
/* 80312374 0030F2B4  38 60 00 00 */	li r3, 0
/* 80312378 0030F2B8  4B DD 6D E1 */	bl GXSetAlphaUpdate
/* 8031237C 0030F2BC  38 60 00 00 */	li r3, 0
/* 80312380 0030F2C0  4B DD 6D AD */	bl GXSetColorUpdate
/* 80312384 0030F2C4  C0 62 F3 E0 */	lfs f3, lbl_8051D740@sda21(r2)
/* 80312388 0030F2C8  39 00 00 C8 */	li r8, 0xc8
/* 8031238C 0030F2CC  C0 42 F4 84 */	lfs f2, lbl_8051D7E4@sda21(r2)
/* 80312390 0030F2D0  38 E0 00 0A */	li r7, 0xa
/* 80312394 0030F2D4  C0 02 F4 88 */	lfs f0, lbl_8051D7E8@sda21(r2)
/* 80312398 0030F2D8  38 00 00 9B */	li r0, 0x9b
/* 8031239C 0030F2DC  D0 61 00 70 */	stfs f3, 0x70(r1)
/* 803123A0 0030F2E0  7F A3 EB 78 */	mr r3, r29
/* 803123A4 0030F2E4  C0 22 F4 8C */	lfs f1, lbl_8051D7EC@sda21(r2)
/* 803123A8 0030F2E8  7F C4 F3 78 */	mr r4, r30
/* 803123AC 0030F2EC  D0 61 00 74 */	stfs f3, 0x74(r1)
/* 803123B0 0030F2F0  38 A1 00 70 */	addi r5, r1, 0x70
/* 803123B4 0030F2F4  38 C1 00 0C */	addi r6, r1, 0xc
/* 803123B8 0030F2F8  D0 41 00 78 */	stfs f2, 0x78(r1)
/* 803123BC 0030F2FC  D0 01 00 7C */	stfs f0, 0x7c(r1)
/* 803123C0 0030F300  99 01 00 0C */	stb r8, 0xc(r1)
/* 803123C4 0030F304  98 E1 00 0D */	stb r7, 0xd(r1)
/* 803123C8 0030F308  99 01 00 0E */	stb r8, 0xe(r1)
/* 803123CC 0030F30C  98 01 00 0F */	stb r0, 0xf(r1)
/* 803123D0 0030F310  48 00 01 49 */	bl "drawRectZ__Q32og9newScreen11ObjSMenuMapFR8GraphicsR7Rect<f>R6Color4f"
/* 803123D4 0030F314  80 9D 00 B4 */	lwz r4, 0xb4(r29)
/* 803123D8 0030F318  38 61 00 34 */	addi r3, r1, 0x34
/* 803123DC 0030F31C  38 A0 00 00 */	li r5, 0
/* 803123E0 0030F320  4B D2 6B B9 */	bl getGlbVtx__7J2DPaneCFUc
/* 803123E4 0030F324  80 C1 00 34 */	lwz r6, 0x34(r1)
/* 803123E8 0030F328  38 61 00 28 */	addi r3, r1, 0x28
/* 803123EC 0030F32C  80 81 00 38 */	lwz r4, 0x38(r1)
/* 803123F0 0030F330  38 A0 00 01 */	li r5, 1
/* 803123F4 0030F334  80 01 00 3C */	lwz r0, 0x3c(r1)
/* 803123F8 0030F338  90 C1 00 64 */	stw r6, 0x64(r1)
/* 803123FC 0030F33C  90 81 00 68 */	stw r4, 0x68(r1)
/* 80312400 0030F340  90 01 00 6C */	stw r0, 0x6c(r1)
/* 80312404 0030F344  80 9D 00 B4 */	lwz r4, 0xb4(r29)
/* 80312408 0030F348  4B D2 6B 91 */	bl getGlbVtx__7J2DPaneCFUc
/* 8031240C 0030F34C  80 C1 00 28 */	lwz r6, 0x28(r1)
/* 80312410 0030F350  38 61 00 1C */	addi r3, r1, 0x1c
/* 80312414 0030F354  80 81 00 2C */	lwz r4, 0x2c(r1)
/* 80312418 0030F358  38 A0 00 02 */	li r5, 2
/* 8031241C 0030F35C  80 01 00 30 */	lwz r0, 0x30(r1)
/* 80312420 0030F360  90 C1 00 58 */	stw r6, 0x58(r1)
/* 80312424 0030F364  90 81 00 5C */	stw r4, 0x5c(r1)
/* 80312428 0030F368  90 01 00 60 */	stw r0, 0x60(r1)
/* 8031242C 0030F36C  80 9D 00 B4 */	lwz r4, 0xb4(r29)
/* 80312430 0030F370  4B D2 6B 69 */	bl getGlbVtx__7J2DPaneCFUc
/* 80312434 0030F374  80 C1 00 1C */	lwz r6, 0x1c(r1)
/* 80312438 0030F378  38 61 00 10 */	addi r3, r1, 0x10
/* 8031243C 0030F37C  80 81 00 20 */	lwz r4, 0x20(r1)
/* 80312440 0030F380  38 A0 00 03 */	li r5, 3
/* 80312444 0030F384  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80312448 0030F388  90 C1 00 4C */	stw r6, 0x4c(r1)
/* 8031244C 0030F38C  90 81 00 50 */	stw r4, 0x50(r1)
/* 80312450 0030F390  90 01 00 54 */	stw r0, 0x54(r1)
/* 80312454 0030F394  80 9D 00 B4 */	lwz r4, 0xb4(r29)
/* 80312458 0030F398  4B D2 6B 41 */	bl getGlbVtx__7J2DPaneCFUc
/* 8031245C 0030F39C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80312460 0030F3A0  39 40 00 00 */	li r10, 0
/* 80312464 0030F3A4  80 A1 00 14 */	lwz r5, 0x14(r1)
/* 80312468 0030F3A8  39 60 00 64 */	li r11, 0x64
/* 8031246C 0030F3AC  81 01 00 18 */	lwz r8, 0x18(r1)
/* 80312470 0030F3B0  38 00 00 9B */	li r0, 0x9b
/* 80312474 0030F3B4  90 61 00 40 */	stw r3, 0x40(r1)
/* 80312478 0030F3B8  7F A3 EB 78 */	mr r3, r29
/* 8031247C 0030F3BC  C0 22 F4 90 */	lfs f1, lbl_8051D7F0@sda21(r2)
/* 80312480 0030F3C0  7F C4 F3 78 */	mr r4, r30
/* 80312484 0030F3C4  90 A1 00 44 */	stw r5, 0x44(r1)
/* 80312488 0030F3C8  38 A1 00 64 */	addi r5, r1, 0x64
/* 8031248C 0030F3CC  38 C1 00 58 */	addi r6, r1, 0x58
/* 80312490 0030F3D0  38 E1 00 4C */	addi r7, r1, 0x4c
/* 80312494 0030F3D4  91 01 00 48 */	stw r8, 0x48(r1)
/* 80312498 0030F3D8  39 01 00 40 */	addi r8, r1, 0x40
/* 8031249C 0030F3DC  39 21 00 08 */	addi r9, r1, 8
/* 803124A0 0030F3E0  99 61 00 08 */	stb r11, 8(r1)
/* 803124A4 0030F3E4  99 41 00 09 */	stb r10, 9(r1)
/* 803124A8 0030F3E8  99 41 00 0A */	stb r10, 0xa(r1)
/* 803124AC 0030F3EC  98 01 00 0B */	stb r0, 0xb(r1)
/* 803124B0 0030F3F0  48 00 02 49 */	bl drawVecZ__Q32og9newScreen11ObjSMenuMapFR8GraphicsR3VecR3VecR3VecR3VecR6Color4f
/* 803124B4 0030F3F4  38 60 00 01 */	li r3, 1
/* 803124B8 0030F3F8  4B DD 6C 75 */	bl GXSetColorUpdate
/* 803124BC 0030F3FC  80 7D 00 B4 */	lwz r3, 0xb4(r29)
/* 803124C0 0030F400  80 9D 00 C4 */	lwz r4, 0xc4(r29)
/* 803124C4 0030F404  38 63 00 80 */	addi r3, r3, 0x80
/* 803124C8 0030F408  38 84 00 50 */	addi r4, r4, 0x50
/* 803124CC 0030F40C  4B DD 7E 01 */	bl PSMTXCopy
/* 803124D0 0030F410  7F E3 FB 78 */	mr r3, r31
/* 803124D4 0030F414  81 9F 00 00 */	lwz r12, 0(r31)
/* 803124D8 0030F418  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 803124DC 0030F41C  7D 89 03 A6 */	mtctr r12
/* 803124E0 0030F420  4E 80 04 21 */	bctrl 
/* 803124E4 0030F424  38 60 00 01 */	li r3, 1
/* 803124E8 0030F428  4B DD 6C D1 */	bl GXSetZCompLoc
/* 803124EC 0030F42C  38 60 00 01 */	li r3, 1
/* 803124F0 0030F430  38 80 00 01 */	li r4, 1
/* 803124F4 0030F434  38 A0 00 00 */	li r5, 0
/* 803124F8 0030F438  4B DD 6C 8D */	bl GXSetZMode
/* 803124FC 0030F43C  80 01 00 A4 */	lwz r0, 0xa4(r1)
/* 80312500 0030F440  83 E1 00 9C */	lwz r31, 0x9c(r1)
/* 80312504 0030F444  83 C1 00 98 */	lwz r30, 0x98(r1)
/* 80312508 0030F448  83 A1 00 94 */	lwz r29, 0x94(r1)
/* 8031250C 0030F44C  7C 08 03 A6 */	mtlr r0
/* 80312510 0030F450  38 21 00 A0 */	addi r1, r1, 0xa0
/* 80312514 0030F454  4E 80 00 20 */	blr 
.endfn drawMap__Q32og9newScreen11ObjSMenuMapFR8Graphics

.fn "drawRectZ__Q32og9newScreen11ObjSMenuMapFR8GraphicsR7Rect<f>R6Color4f", global
/* 80312518 0030F458  94 21 FF 70 */	stwu r1, -0x90(r1)
/* 8031251C 0030F45C  7C 08 02 A6 */	mflr r0
/* 80312520 0030F460  90 01 00 94 */	stw r0, 0x94(r1)
/* 80312524 0030F464  DB E1 00 80 */	stfd f31, 0x80(r1)
/* 80312528 0030F468  F3 E1 00 88 */	psq_st f31, 136(r1), 0, qr0
/* 8031252C 0030F46C  93 E1 00 7C */	stw r31, 0x7c(r1)
/* 80312530 0030F470  93 C1 00 78 */	stw r30, 0x78(r1)
/* 80312534 0030F474  FF E0 08 90 */	fmr f31, f1
/* 80312538 0030F478  7C BE 2B 78 */	mr r30, r5
/* 8031253C 0030F47C  7C DF 33 78 */	mr r31, r6
/* 80312540 0030F480  38 60 00 01 */	li r3, 1
/* 80312544 0030F484  38 80 00 07 */	li r4, 7
/* 80312548 0030F488  38 A0 00 01 */	li r5, 1
/* 8031254C 0030F48C  4B DD 6C 39 */	bl GXSetZMode
/* 80312550 0030F490  C0 22 F3 E0 */	lfs f1, lbl_8051D740@sda21(r2)
/* 80312554 0030F494  38 61 00 38 */	addi r3, r1, 0x38
/* 80312558 0030F498  C0 42 F4 88 */	lfs f2, lbl_8051D7E8@sda21(r2)
/* 8031255C 0030F49C  FC 60 08 90 */	fmr f3, f1
/* 80312560 0030F4A0  C0 82 F4 84 */	lfs f4, lbl_8051D7E4@sda21(r2)
/* 80312564 0030F4A4  C0 A2 F4 3C */	lfs f5, lbl_8051D79C@sda21(r2)
/* 80312568 0030F4A8  C0 C2 F3 E4 */	lfs f6, lbl_8051D744@sda21(r2)
/* 8031256C 0030F4AC  4B DD 88 6D */	bl C_MTXOrtho
/* 80312570 0030F4B0  38 61 00 38 */	addi r3, r1, 0x38
/* 80312574 0030F4B4  38 80 00 01 */	li r4, 1
/* 80312578 0030F4B8  4B DD 6E D1 */	bl GXSetProjection
/* 8031257C 0030F4BC  38 61 00 08 */	addi r3, r1, 8
/* 80312580 0030F4C0  4B DD 7D 21 */	bl PSMTXIdentity
/* 80312584 0030F4C4  38 61 00 08 */	addi r3, r1, 8
/* 80312588 0030F4C8  38 80 00 00 */	li r4, 0
/* 8031258C 0030F4CC  4B DD 6F ED */	bl GXLoadPosMtxImm
/* 80312590 0030F4D0  38 60 00 00 */	li r3, 0
/* 80312594 0030F4D4  4B DD 36 15 */	bl GXSetCullMode
/* 80312598 0030F4D8  4B DD 21 39 */	bl GXClearVtxDesc
/* 8031259C 0030F4DC  38 60 00 09 */	li r3, 9
/* 803125A0 0030F4E0  38 80 00 01 */	li r4, 1
/* 803125A4 0030F4E4  4B DD 1C E1 */	bl GXSetVtxDesc
/* 803125A8 0030F4E8  38 60 00 0B */	li r3, 0xb
/* 803125AC 0030F4EC  38 80 00 01 */	li r4, 1
/* 803125B0 0030F4F0  4B DD 1C D5 */	bl GXSetVtxDesc
/* 803125B4 0030F4F4  38 60 00 00 */	li r3, 0
/* 803125B8 0030F4F8  38 80 00 09 */	li r4, 9
/* 803125BC 0030F4FC  38 A0 00 01 */	li r5, 1
/* 803125C0 0030F500  38 C0 00 04 */	li r6, 4
/* 803125C4 0030F504  38 E0 00 00 */	li r7, 0
/* 803125C8 0030F508  4B DD 21 41 */	bl GXSetVtxAttrFmt
/* 803125CC 0030F50C  38 60 00 00 */	li r3, 0
/* 803125D0 0030F510  38 80 00 0B */	li r4, 0xb
/* 803125D4 0030F514  38 A0 00 01 */	li r5, 1
/* 803125D8 0030F518  38 C0 00 05 */	li r6, 5
/* 803125DC 0030F51C  38 E0 00 00 */	li r7, 0
/* 803125E0 0030F520  4B DD 21 29 */	bl GXSetVtxAttrFmt
/* 803125E4 0030F524  38 60 00 80 */	li r3, 0x80
/* 803125E8 0030F528  38 80 00 00 */	li r4, 0
/* 803125EC 0030F52C  38 A0 00 04 */	li r5, 4
/* 803125F0 0030F530  4B DD 33 99 */	bl GXBegin
/* 803125F4 0030F534  C0 3E 00 04 */	lfs f1, 4(r30)
/* 803125F8 0030F538  3D 20 CC 01 */	lis r9, 0xCC008000@ha
/* 803125FC 0030F53C  C0 1E 00 00 */	lfs f0, 0(r30)
/* 80312600 0030F540  38 60 00 01 */	li r3, 1
/* 80312604 0030F544  38 80 00 01 */	li r4, 1
/* 80312608 0030F548  38 A0 00 01 */	li r5, 1
/* 8031260C 0030F54C  D0 09 80 00 */	stfs f0, 0xCC008000@l(r9)
/* 80312610 0030F550  D0 29 80 00 */	stfs f1, 0xCC008000@l(r9)
/* 80312614 0030F554  D3 E9 80 00 */	stfs f31, 0xCC008000@l(r9)
/* 80312618 0030F558  89 1F 00 03 */	lbz r8, 3(r31)
/* 8031261C 0030F55C  88 FF 00 02 */	lbz r7, 2(r31)
/* 80312620 0030F560  88 DF 00 01 */	lbz r6, 1(r31)
/* 80312624 0030F564  88 1F 00 00 */	lbz r0, 0(r31)
/* 80312628 0030F568  98 09 80 00 */	stb r0, 0xCC008000@l(r9)
/* 8031262C 0030F56C  98 C9 80 00 */	stb r6, 0xCC008000@l(r9)
/* 80312630 0030F570  98 E9 80 00 */	stb r7, 0xCC008000@l(r9)
/* 80312634 0030F574  99 09 80 00 */	stb r8, 0xCC008000@l(r9)
/* 80312638 0030F578  C0 3E 00 0C */	lfs f1, 0xc(r30)
/* 8031263C 0030F57C  C0 1E 00 00 */	lfs f0, 0(r30)
/* 80312640 0030F580  D0 09 80 00 */	stfs f0, 0xCC008000@l(r9)
/* 80312644 0030F584  D0 29 80 00 */	stfs f1, 0xCC008000@l(r9)
/* 80312648 0030F588  D3 E9 80 00 */	stfs f31, 0xCC008000@l(r9)
/* 8031264C 0030F58C  89 1F 00 03 */	lbz r8, 3(r31)
/* 80312650 0030F590  88 FF 00 02 */	lbz r7, 2(r31)
/* 80312654 0030F594  88 DF 00 01 */	lbz r6, 1(r31)
/* 80312658 0030F598  88 1F 00 00 */	lbz r0, 0(r31)
/* 8031265C 0030F59C  98 09 80 00 */	stb r0, 0xCC008000@l(r9)
/* 80312660 0030F5A0  98 C9 80 00 */	stb r6, 0xCC008000@l(r9)
/* 80312664 0030F5A4  98 E9 80 00 */	stb r7, 0xCC008000@l(r9)
/* 80312668 0030F5A8  99 09 80 00 */	stb r8, 0xCC008000@l(r9)
/* 8031266C 0030F5AC  C0 3E 00 0C */	lfs f1, 0xc(r30)
/* 80312670 0030F5B0  C0 1E 00 08 */	lfs f0, 8(r30)
/* 80312674 0030F5B4  D0 09 80 00 */	stfs f0, 0xCC008000@l(r9)
/* 80312678 0030F5B8  D0 29 80 00 */	stfs f1, 0xCC008000@l(r9)
/* 8031267C 0030F5BC  D3 E9 80 00 */	stfs f31, 0xCC008000@l(r9)
/* 80312680 0030F5C0  89 1F 00 03 */	lbz r8, 3(r31)
/* 80312684 0030F5C4  88 FF 00 02 */	lbz r7, 2(r31)
/* 80312688 0030F5C8  88 DF 00 01 */	lbz r6, 1(r31)
/* 8031268C 0030F5CC  88 1F 00 00 */	lbz r0, 0(r31)
/* 80312690 0030F5D0  98 09 80 00 */	stb r0, 0xCC008000@l(r9)
/* 80312694 0030F5D4  98 C9 80 00 */	stb r6, 0xCC008000@l(r9)
/* 80312698 0030F5D8  98 E9 80 00 */	stb r7, 0xCC008000@l(r9)
/* 8031269C 0030F5DC  99 09 80 00 */	stb r8, 0xCC008000@l(r9)
/* 803126A0 0030F5E0  C0 3E 00 04 */	lfs f1, 4(r30)
/* 803126A4 0030F5E4  C0 1E 00 08 */	lfs f0, 8(r30)
/* 803126A8 0030F5E8  D0 09 80 00 */	stfs f0, 0xCC008000@l(r9)
/* 803126AC 0030F5EC  D0 29 80 00 */	stfs f1, 0xCC008000@l(r9)
/* 803126B0 0030F5F0  D3 E9 80 00 */	stfs f31, 0xCC008000@l(r9)
/* 803126B4 0030F5F4  89 1F 00 03 */	lbz r8, 3(r31)
/* 803126B8 0030F5F8  88 FF 00 02 */	lbz r7, 2(r31)
/* 803126BC 0030F5FC  88 DF 00 01 */	lbz r6, 1(r31)
/* 803126C0 0030F600  88 1F 00 00 */	lbz r0, 0(r31)
/* 803126C4 0030F604  98 09 80 00 */	stb r0, 0xCC008000@l(r9)
/* 803126C8 0030F608  98 C9 80 00 */	stb r6, 0xCC008000@l(r9)
/* 803126CC 0030F60C  98 E9 80 00 */	stb r7, 0xCC008000@l(r9)
/* 803126D0 0030F610  99 09 80 00 */	stb r8, 0xCC008000@l(r9)
/* 803126D4 0030F614  4B DD 6A B1 */	bl GXSetZMode
/* 803126D8 0030F618  E3 E1 00 88 */	psq_l f31, 136(r1), 0, qr0
/* 803126DC 0030F61C  80 01 00 94 */	lwz r0, 0x94(r1)
/* 803126E0 0030F620  CB E1 00 80 */	lfd f31, 0x80(r1)
/* 803126E4 0030F624  83 E1 00 7C */	lwz r31, 0x7c(r1)
/* 803126E8 0030F628  83 C1 00 78 */	lwz r30, 0x78(r1)
/* 803126EC 0030F62C  7C 08 03 A6 */	mtlr r0
/* 803126F0 0030F630  38 21 00 90 */	addi r1, r1, 0x90
/* 803126F4 0030F634  4E 80 00 20 */	blr 
.endfn "drawRectZ__Q32og9newScreen11ObjSMenuMapFR8GraphicsR7Rect<f>R6Color4f"

.fn drawVecZ__Q32og9newScreen11ObjSMenuMapFR8GraphicsR3VecR3VecR3VecR3VecR6Color4f, global
/* 803126F8 0030F638  94 21 FF 40 */	stwu r1, -0xc0(r1)
/* 803126FC 0030F63C  7C 08 02 A6 */	mflr r0
/* 80312700 0030F640  90 01 00 C4 */	stw r0, 0xc4(r1)
/* 80312704 0030F644  DB E1 00 B0 */	stfd f31, 0xb0(r1)
/* 80312708 0030F648  F3 E1 00 B8 */	psq_st f31, 184(r1), 0, qr0
/* 8031270C 0030F64C  BF 21 00 94 */	stmw r25, 0x94(r1)
/* 80312710 0030F650  FF E0 08 90 */	fmr f31, f1
/* 80312714 0030F654  7C B9 2B 78 */	mr r25, r5
/* 80312718 0030F658  7C DA 33 78 */	mr r26, r6
/* 8031271C 0030F65C  7C FE 3B 78 */	mr r30, r7
/* 80312720 0030F660  7D 1B 43 78 */	mr r27, r8
/* 80312724 0030F664  7D 3F 4B 78 */	mr r31, r9
/* 80312728 0030F668  48 11 0A FD */	bl getRenderModeObj__6SystemFv
/* 8031272C 0030F66C  A3 A3 00 04 */	lhz r29, 4(r3)
/* 80312730 0030F670  48 11 0A F5 */	bl getRenderModeObj__6SystemFv
/* 80312734 0030F674  A3 83 00 06 */	lhz r28, 6(r3)
/* 80312738 0030F678  38 60 00 01 */	li r3, 1
/* 8031273C 0030F67C  38 80 00 07 */	li r4, 7
/* 80312740 0030F680  38 A0 00 01 */	li r5, 1
/* 80312744 0030F684  4B DD 6A 41 */	bl GXSetZMode
/* 80312748 0030F688  3C 00 43 30 */	lis r0, 0x4330
/* 8031274C 0030F68C  C0 22 F3 E0 */	lfs f1, lbl_8051D740@sda21(r2)
/* 80312750 0030F690  93 81 00 7C */	stw r28, 0x7c(r1)
/* 80312754 0030F694  38 61 00 38 */	addi r3, r1, 0x38
/* 80312758 0030F698  C8 82 F4 98 */	lfd f4, lbl_8051D7F8@sda21(r2)
/* 8031275C 0030F69C  FC 60 08 90 */	fmr f3, f1
/* 80312760 0030F6A0  90 01 00 78 */	stw r0, 0x78(r1)
/* 80312764 0030F6A4  C0 A2 F4 3C */	lfs f5, lbl_8051D79C@sda21(r2)
/* 80312768 0030F6A8  C8 01 00 78 */	lfd f0, 0x78(r1)
/* 8031276C 0030F6AC  93 A1 00 84 */	stw r29, 0x84(r1)
/* 80312770 0030F6B0  EC 40 20 28 */	fsubs f2, f0, f4
/* 80312774 0030F6B4  C0 C2 F3 E4 */	lfs f6, lbl_8051D744@sda21(r2)
/* 80312778 0030F6B8  90 01 00 80 */	stw r0, 0x80(r1)
/* 8031277C 0030F6BC  C8 01 00 80 */	lfd f0, 0x80(r1)
/* 80312780 0030F6C0  EC 80 20 28 */	fsubs f4, f0, f4
/* 80312784 0030F6C4  4B DD 86 55 */	bl C_MTXOrtho
/* 80312788 0030F6C8  38 61 00 38 */	addi r3, r1, 0x38
/* 8031278C 0030F6CC  38 80 00 01 */	li r4, 1
/* 80312790 0030F6D0  4B DD 6C B9 */	bl GXSetProjection
/* 80312794 0030F6D4  38 61 00 08 */	addi r3, r1, 8
/* 80312798 0030F6D8  4B DD 7B 09 */	bl PSMTXIdentity
/* 8031279C 0030F6DC  38 61 00 08 */	addi r3, r1, 8
/* 803127A0 0030F6E0  38 80 00 00 */	li r4, 0
/* 803127A4 0030F6E4  4B DD 6D D5 */	bl GXLoadPosMtxImm
/* 803127A8 0030F6E8  38 60 00 00 */	li r3, 0
/* 803127AC 0030F6EC  4B DD 33 FD */	bl GXSetCullMode
/* 803127B0 0030F6F0  4B DD 1F 21 */	bl GXClearVtxDesc
/* 803127B4 0030F6F4  38 60 00 09 */	li r3, 9
/* 803127B8 0030F6F8  38 80 00 01 */	li r4, 1
/* 803127BC 0030F6FC  4B DD 1A C9 */	bl GXSetVtxDesc
/* 803127C0 0030F700  38 60 00 0B */	li r3, 0xb
/* 803127C4 0030F704  38 80 00 01 */	li r4, 1
/* 803127C8 0030F708  4B DD 1A BD */	bl GXSetVtxDesc
/* 803127CC 0030F70C  38 60 00 00 */	li r3, 0
/* 803127D0 0030F710  38 80 00 09 */	li r4, 9
/* 803127D4 0030F714  38 A0 00 01 */	li r5, 1
/* 803127D8 0030F718  38 C0 00 04 */	li r6, 4
/* 803127DC 0030F71C  38 E0 00 00 */	li r7, 0
/* 803127E0 0030F720  4B DD 1F 29 */	bl GXSetVtxAttrFmt
/* 803127E4 0030F724  38 60 00 00 */	li r3, 0
/* 803127E8 0030F728  38 80 00 0B */	li r4, 0xb
/* 803127EC 0030F72C  38 A0 00 01 */	li r5, 1
/* 803127F0 0030F730  38 C0 00 05 */	li r6, 5
/* 803127F4 0030F734  38 E0 00 00 */	li r7, 0
/* 803127F8 0030F738  4B DD 1F 11 */	bl GXSetVtxAttrFmt
/* 803127FC 0030F73C  38 60 00 80 */	li r3, 0x80
/* 80312800 0030F740  38 80 00 00 */	li r4, 0
/* 80312804 0030F744  38 A0 00 04 */	li r5, 4
/* 80312808 0030F748  4B DD 31 81 */	bl GXBegin
/* 8031280C 0030F74C  C0 39 00 04 */	lfs f1, 4(r25)
/* 80312810 0030F750  3D 20 CC 01 */	lis r9, 0xCC008000@ha
/* 80312814 0030F754  C0 19 00 00 */	lfs f0, 0(r25)
/* 80312818 0030F758  38 60 00 01 */	li r3, 1
/* 8031281C 0030F75C  38 80 00 01 */	li r4, 1
/* 80312820 0030F760  38 A0 00 01 */	li r5, 1
/* 80312824 0030F764  D0 09 80 00 */	stfs f0, 0xCC008000@l(r9)
/* 80312828 0030F768  D0 29 80 00 */	stfs f1, 0xCC008000@l(r9)
/* 8031282C 0030F76C  D3 E9 80 00 */	stfs f31, 0xCC008000@l(r9)
/* 80312830 0030F770  89 1F 00 03 */	lbz r8, 3(r31)
/* 80312834 0030F774  88 FF 00 02 */	lbz r7, 2(r31)
/* 80312838 0030F778  88 DF 00 01 */	lbz r6, 1(r31)
/* 8031283C 0030F77C  88 1F 00 00 */	lbz r0, 0(r31)
/* 80312840 0030F780  98 09 80 00 */	stb r0, 0xCC008000@l(r9)
/* 80312844 0030F784  98 C9 80 00 */	stb r6, 0xCC008000@l(r9)
/* 80312848 0030F788  98 E9 80 00 */	stb r7, 0xCC008000@l(r9)
/* 8031284C 0030F78C  99 09 80 00 */	stb r8, 0xCC008000@l(r9)
/* 80312850 0030F790  C0 3A 00 04 */	lfs f1, 4(r26)
/* 80312854 0030F794  C0 1A 00 00 */	lfs f0, 0(r26)
/* 80312858 0030F798  D0 09 80 00 */	stfs f0, 0xCC008000@l(r9)
/* 8031285C 0030F79C  D0 29 80 00 */	stfs f1, 0xCC008000@l(r9)
/* 80312860 0030F7A0  D3 E9 80 00 */	stfs f31, 0xCC008000@l(r9)
/* 80312864 0030F7A4  89 1F 00 03 */	lbz r8, 3(r31)
/* 80312868 0030F7A8  88 FF 00 02 */	lbz r7, 2(r31)
/* 8031286C 0030F7AC  88 DF 00 01 */	lbz r6, 1(r31)
/* 80312870 0030F7B0  88 1F 00 00 */	lbz r0, 0(r31)
/* 80312874 0030F7B4  98 09 80 00 */	stb r0, 0xCC008000@l(r9)
/* 80312878 0030F7B8  98 C9 80 00 */	stb r6, 0xCC008000@l(r9)
/* 8031287C 0030F7BC  98 E9 80 00 */	stb r7, 0xCC008000@l(r9)
/* 80312880 0030F7C0  99 09 80 00 */	stb r8, 0xCC008000@l(r9)
/* 80312884 0030F7C4  C0 3B 00 04 */	lfs f1, 4(r27)
/* 80312888 0030F7C8  C0 1B 00 00 */	lfs f0, 0(r27)
/* 8031288C 0030F7CC  D0 09 80 00 */	stfs f0, 0xCC008000@l(r9)
/* 80312890 0030F7D0  D0 29 80 00 */	stfs f1, 0xCC008000@l(r9)
/* 80312894 0030F7D4  D3 E9 80 00 */	stfs f31, 0xCC008000@l(r9)
/* 80312898 0030F7D8  89 1F 00 03 */	lbz r8, 3(r31)
/* 8031289C 0030F7DC  88 FF 00 02 */	lbz r7, 2(r31)
/* 803128A0 0030F7E0  88 DF 00 01 */	lbz r6, 1(r31)
/* 803128A4 0030F7E4  88 1F 00 00 */	lbz r0, 0(r31)
/* 803128A8 0030F7E8  98 09 80 00 */	stb r0, 0xCC008000@l(r9)
/* 803128AC 0030F7EC  98 C9 80 00 */	stb r6, 0xCC008000@l(r9)
/* 803128B0 0030F7F0  98 E9 80 00 */	stb r7, 0xCC008000@l(r9)
/* 803128B4 0030F7F4  99 09 80 00 */	stb r8, 0xCC008000@l(r9)
/* 803128B8 0030F7F8  C0 3E 00 04 */	lfs f1, 4(r30)
/* 803128BC 0030F7FC  C0 1E 00 00 */	lfs f0, 0(r30)
/* 803128C0 0030F800  D0 09 80 00 */	stfs f0, 0xCC008000@l(r9)
/* 803128C4 0030F804  D0 29 80 00 */	stfs f1, 0xCC008000@l(r9)
/* 803128C8 0030F808  D3 E9 80 00 */	stfs f31, 0xCC008000@l(r9)
/* 803128CC 0030F80C  89 1F 00 03 */	lbz r8, 3(r31)
/* 803128D0 0030F810  88 FF 00 02 */	lbz r7, 2(r31)
/* 803128D4 0030F814  88 DF 00 01 */	lbz r6, 1(r31)
/* 803128D8 0030F818  88 1F 00 00 */	lbz r0, 0(r31)
/* 803128DC 0030F81C  98 09 80 00 */	stb r0, 0xCC008000@l(r9)
/* 803128E0 0030F820  98 C9 80 00 */	stb r6, 0xCC008000@l(r9)
/* 803128E4 0030F824  98 E9 80 00 */	stb r7, 0xCC008000@l(r9)
/* 803128E8 0030F828  99 09 80 00 */	stb r8, 0xCC008000@l(r9)
/* 803128EC 0030F82C  4B DD 68 99 */	bl GXSetZMode
/* 803128F0 0030F830  E3 E1 00 B8 */	psq_l f31, 184(r1), 0, qr0
/* 803128F4 0030F834  CB E1 00 B0 */	lfd f31, 0xb0(r1)
/* 803128F8 0030F838  BB 21 00 94 */	lmw r25, 0x94(r1)
/* 803128FC 0030F83C  80 01 00 C4 */	lwz r0, 0xc4(r1)
/* 80312900 0030F840  7C 08 03 A6 */	mtlr r0
/* 80312904 0030F844  38 21 00 C0 */	addi r1, r1, 0xc0
/* 80312908 0030F848  4E 80 00 20 */	blr 
.endfn drawVecZ__Q32og9newScreen11ObjSMenuMapFR8GraphicsR3VecR3VecR3VecR3VecR6Color4f

.fn doStart__Q32og9newScreen11ObjSMenuMapFPCQ26Screen13StartSceneArg, global
/* 8031290C 0030F84C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80312910 0030F850  7C 08 02 A6 */	mflr r0
/* 80312914 0030F854  C0 22 F3 E0 */	lfs f1, lbl_8051D740@sda21(r2)
/* 80312918 0030F858  90 01 00 14 */	stw r0, 0x14(r1)
/* 8031291C 0030F85C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80312920 0030F860  7C 9F 23 78 */	mr r31, r4
/* 80312924 0030F864  93 C1 00 08 */	stw r30, 8(r1)
/* 80312928 0030F868  7C 7E 1B 78 */	mr r30, r3
/* 8031292C 0030F86C  80 63 00 B0 */	lwz r3, 0xb0(r3)
/* 80312930 0030F870  4B FF 2E 31 */	bl setFrame__Q32og6Screen9AnimGroupFf
/* 80312934 0030F874  80 7E 00 B0 */	lwz r3, 0xb0(r30)
/* 80312938 0030F878  38 80 00 01 */	li r4, 1
/* 8031293C 0030F87C  4B FF 2D C9 */	bl setRepeat__Q32og6Screen9AnimGroupFb
/* 80312940 0030F880  80 7E 00 B0 */	lwz r3, 0xb0(r30)
/* 80312944 0030F884  C0 22 F3 E4 */	lfs f1, lbl_8051D744@sda21(r2)
/* 80312948 0030F888  4B FF 2D 61 */	bl setSpeed__Q32og6Screen9AnimGroupFf
/* 8031294C 0030F88C  80 7E 00 B0 */	lwz r3, 0xb0(r30)
/* 80312950 0030F890  4B FF 2F 69 */	bl start__Q32og6Screen9AnimGroupFv
/* 80312954 0030F894  3C 60 00 36 */	lis r3, 0x00363035@ha
/* 80312958 0030F898  3C C0 31 5F */	lis r6, 0x315F3030@ha
/* 8031295C 0030F89C  38 A3 30 35 */	addi r5, r3, 0x00363035@l
/* 80312960 0030F8A0  3D 00 32 5F */	lis r8, 0x325F3030@ha
/* 80312964 0030F8A4  3C 80 30 5F */	lis r4, 0x305F3030@ha
/* 80312968 0030F8A8  7F C3 F3 78 */	mr r3, r30
/* 8031296C 0030F8AC  7C A7 2B 78 */	mr r7, r5
/* 80312970 0030F8B0  7C A9 2B 78 */	mr r9, r5
/* 80312974 0030F8B4  38 C6 30 30 */	addi r6, r6, 0x315F3030@l
/* 80312978 0030F8B8  39 08 30 30 */	addi r8, r8, 0x325F3030@l
/* 8031297C 0030F8BC  39 44 30 30 */	addi r10, r4, 0x305F3030@l
/* 80312980 0030F8C0  48 00 41 91 */	bl setYajiName__Q32og9newScreen12ObjSMenuBaseFUxUxUx
/* 80312984 0030F8C4  7F C3 F3 78 */	mr r3, r30
/* 80312988 0030F8C8  48 00 41 F5 */	bl stopYaji__Q32og9newScreen12ObjSMenuBaseFv
/* 8031298C 0030F8CC  7F C3 F3 78 */	mr r3, r30
/* 80312990 0030F8D0  7F E4 FB 78 */	mr r4, r31
/* 80312994 0030F8D4  48 00 40 2D */	bl start_LR__Q32og9newScreen12ObjSMenuBaseFPCQ26Screen13StartSceneArg
/* 80312998 0030F8D8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8031299C 0030F8DC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803129A0 0030F8E0  83 C1 00 08 */	lwz r30, 8(r1)
/* 803129A4 0030F8E4  7C 08 03 A6 */	mtlr r0
/* 803129A8 0030F8E8  38 21 00 10 */	addi r1, r1, 0x10
/* 803129AC 0030F8EC  4E 80 00 20 */	blr 
.endfn doStart__Q32og9newScreen11ObjSMenuMapFPCQ26Screen13StartSceneArg

.fn doEnd__Q32og9newScreen11ObjSMenuMapFPCQ26Screen11EndSceneArg, global
/* 803129B0 0030F8F0  38 60 00 01 */	li r3, 1
/* 803129B4 0030F8F4  4E 80 00 20 */	blr 
.endfn doEnd__Q32og9newScreen11ObjSMenuMapFPCQ26Screen11EndSceneArg

.fn doUpdateFinish__Q32og9newScreen11ObjSMenuMapFv, global
/* 803129B8 0030F8F8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803129BC 0030F8FC  7C 08 02 A6 */	mflr r0
/* 803129C0 0030F900  90 01 00 14 */	stw r0, 0x14(r1)
/* 803129C4 0030F904  48 00 3C C5 */	bl doUpdateFinish__Q32og9newScreen12ObjSMenuBaseFv
/* 803129C8 0030F908  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803129CC 0030F90C  7C 08 03 A6 */	mtlr r0
/* 803129D0 0030F910  38 21 00 10 */	addi r1, r1, 0x10
/* 803129D4 0030F914  4E 80 00 20 */	blr 
.endfn doUpdateFinish__Q32og9newScreen11ObjSMenuMapFv

.fn doUpdateFadeout__Q32og9newScreen11ObjSMenuMapFv, global
/* 803129D8 0030F918  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803129DC 0030F91C  7C 08 02 A6 */	mflr r0
/* 803129E0 0030F920  90 01 00 14 */	stw r0, 0x14(r1)
/* 803129E4 0030F924  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803129E8 0030F928  7C 7F 1B 78 */	mr r31, r3
/* 803129EC 0030F92C  81 83 00 00 */	lwz r12, 0(r3)
/* 803129F0 0030F930  81 8C 00 A4 */	lwz r12, 0xa4(r12)
/* 803129F4 0030F934  7D 89 03 A6 */	mtctr r12
/* 803129F8 0030F938  4E 80 04 21 */	bctrl 
/* 803129FC 0030F93C  7F E3 FB 78 */	mr r3, r31
/* 80312A00 0030F940  81 9F 00 00 */	lwz r12, 0(r31)
/* 80312A04 0030F944  81 8C 00 A0 */	lwz r12, 0xa0(r12)
/* 80312A08 0030F948  7D 89 03 A6 */	mtctr r12
/* 80312A0C 0030F94C  4E 80 04 21 */	bctrl 
/* 80312A10 0030F950  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80312A14 0030F954  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80312A18 0030F958  7C 08 03 A6 */	mtlr r0
/* 80312A1C 0030F95C  38 21 00 10 */	addi r1, r1, 0x10
/* 80312A20 0030F960  4E 80 00 20 */	blr 
.endfn doUpdateFadeout__Q32og9newScreen11ObjSMenuMapFv

.fn in_L__Q32og9newScreen11ObjSMenuMapFv, global
/* 80312A24 0030F964  38 00 00 00 */	li r0, 0
/* 80312A28 0030F968  C0 02 F4 A0 */	lfs f0, lbl_8051D800@sda21(r2)
/* 80312A2C 0030F96C  90 03 00 38 */	stw r0, 0x38(r3)
/* 80312A30 0030F970  D0 03 00 4C */	stfs f0, 0x4c(r3)
/* 80312A34 0030F974  4E 80 00 20 */	blr 
.endfn in_L__Q32og9newScreen11ObjSMenuMapFv

.fn in_R__Q32og9newScreen11ObjSMenuMapFv, global
/* 80312A38 0030F978  38 00 00 01 */	li r0, 1
/* 80312A3C 0030F97C  C0 02 F4 A0 */	lfs f0, lbl_8051D800@sda21(r2)
/* 80312A40 0030F980  90 03 00 38 */	stw r0, 0x38(r3)
/* 80312A44 0030F984  D0 03 00 4C */	stfs f0, 0x4c(r3)
/* 80312A48 0030F988  4E 80 00 20 */	blr 
.endfn in_R__Q32og9newScreen11ObjSMenuMapFv

.fn wait__Q32og9newScreen11ObjSMenuMapFv, global
/* 80312A4C 0030F98C  38 00 00 04 */	li r0, 4
/* 80312A50 0030F990  90 03 00 38 */	stw r0, 0x38(r3)
/* 80312A54 0030F994  4E 80 00 20 */	blr 
.endfn wait__Q32og9newScreen11ObjSMenuMapFv

.fn out_L__Q32og9newScreen11ObjSMenuMapFv, global
/* 80312A58 0030F998  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80312A5C 0030F99C  7C 08 02 A6 */	mflr r0
/* 80312A60 0030F9A0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80312A64 0030F9A4  38 00 00 02 */	li r0, 2
/* 80312A68 0030F9A8  90 03 00 38 */	stw r0, 0x38(r3)
/* 80312A6C 0030F9AC  80 6D 97 A8 */	lwz r3, ogSound__2og@sda21(r13)
/* 80312A70 0030F9B0  4B FF A1 D9 */	bl setSMenuLR__Q22og5SoundFv
/* 80312A74 0030F9B4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80312A78 0030F9B8  7C 08 03 A6 */	mtlr r0
/* 80312A7C 0030F9BC  38 21 00 10 */	addi r1, r1, 0x10
/* 80312A80 0030F9C0  4E 80 00 20 */	blr 
.endfn out_L__Q32og9newScreen11ObjSMenuMapFv

.fn out_R__Q32og9newScreen11ObjSMenuMapFv, global
/* 80312A84 0030F9C4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80312A88 0030F9C8  7C 08 02 A6 */	mflr r0
/* 80312A8C 0030F9CC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80312A90 0030F9D0  38 00 00 03 */	li r0, 3
/* 80312A94 0030F9D4  90 03 00 38 */	stw r0, 0x38(r3)
/* 80312A98 0030F9D8  80 6D 97 A8 */	lwz r3, ogSound__2og@sda21(r13)
/* 80312A9C 0030F9DC  4B FF A1 AD */	bl setSMenuLR__Q22og5SoundFv
/* 80312AA0 0030F9E0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80312AA4 0030F9E4  7C 08 03 A6 */	mtlr r0
/* 80312AA8 0030F9E8  38 21 00 10 */	addi r1, r1, 0x10
/* 80312AAC 0030F9EC  4E 80 00 20 */	blr 
.endfn out_R__Q32og9newScreen11ObjSMenuMapFv

.fn getClassSize__Q26Screen11SetSceneArgFv, weak
/* 80312AB0 0030F9F0  38 60 00 10 */	li r3, 0x10
/* 80312AB4 0030F9F4  4E 80 00 20 */	blr 
.endfn getClassSize__Q26Screen11SetSceneArgFv

.fn getSceneType__Q26Screen11SetSceneArgCFv, weak
/* 80312AB8 0030F9F8  80 63 00 04 */	lwz r3, 4(r3)
/* 80312ABC 0030F9FC  4E 80 00 20 */	blr 
.endfn getSceneType__Q26Screen11SetSceneArgCFv

.fn getSceneType__Q26Screen12SceneArgBaseCFv, weak
/* 80312AC0 0030FA00  38 60 00 00 */	li r3, 0
/* 80312AC4 0030FA04  4E 80 00 20 */	blr 
.endfn getSceneType__Q26Screen12SceneArgBaseCFv

.fn doUpdateCancelAction__Q32og9newScreen11ObjSMenuMapFv, weak
/* 80312AC8 0030FA08  4E 80 00 20 */	blr 
.endfn doUpdateCancelAction__Q32og9newScreen11ObjSMenuMapFv

.fn __sinit_ogObjSMenuMap_cpp, local
/* 80312ACC 0030FA0C  3C 60 80 51 */	lis r3, msVal__Q32og9newScreen11ObjSMenuMap@ha
/* 80312AD0 0030FA10  3C 80 80 51 */	lis r4, __float_nan@ha
/* 80312AD4 0030FA14  39 60 FF FF */	li r11, -1
/* 80312AD8 0030FA18  C1 64 48 B0 */	lfs f11, __float_nan@l(r4)
/* 80312ADC 0030FA1C  39 23 3C 40 */	addi r9, r3, msVal__Q32og9newScreen11ObjSMenuMap@l
/* 80312AE0 0030FA20  C1 02 F4 A8 */	lfs f8, lbl_8051D808@sda21(r2)
/* 80312AE4 0030FA24  39 00 00 FF */	li r8, 0xff
/* 80312AE8 0030FA28  38 A0 00 00 */	li r5, 0
/* 80312AEC 0030FA2C  91 69 00 4C */	stw r11, 0x4c(r9)
/* 80312AF0 0030FA30  38 C0 00 DC */	li r6, 0xdc
/* 80312AF4 0030FA34  3C 60 80 4E */	lis r3, govNAN___Q24Game5P2JST@ha
/* 80312AF8 0030FA38  C1 42 F4 A4 */	lfs f10, lbl_8051D804@sda21(r2)
/* 80312AFC 0030FA3C  39 43 83 98 */	addi r10, r3, govNAN___Q24Game5P2JST@l
/* 80312B00 0030FA40  91 69 00 48 */	stw r11, 0x48(r9)
/* 80312B04 0030FA44  C1 22 F4 7C */	lfs f9, lbl_8051D7DC@sda21(r2)
/* 80312B08 0030FA48  38 E0 00 D2 */	li r7, 0xd2
/* 80312B0C 0030FA4C  C0 E2 F4 00 */	lfs f7, lbl_8051D760@sda21(r2)
/* 80312B10 0030FA50  38 80 00 32 */	li r4, 0x32
/* 80312B14 0030FA54  C0 C2 F4 AC */	lfs f6, lbl_8051D80C@sda21(r2)
/* 80312B18 0030FA58  38 60 00 84 */	li r3, 0x84
/* 80312B1C 0030FA5C  C0 A2 F4 B0 */	lfs f5, lbl_8051D810@sda21(r2)
/* 80312B20 0030FA60  38 00 00 80 */	li r0, 0x80
/* 80312B24 0030FA64  C0 82 F4 B4 */	lfs f4, lbl_8051D814@sda21(r2)
/* 80312B28 0030FA68  C0 62 F4 B8 */	lfs f3, lbl_8051D818@sda21(r2)
/* 80312B2C 0030FA6C  C0 42 F4 BC */	lfs f2, lbl_8051D81C@sda21(r2)
/* 80312B30 0030FA70  C0 22 F3 E4 */	lfs f1, lbl_8051D744@sda21(r2)
/* 80312B34 0030FA74  C0 02 F4 C0 */	lfs f0, lbl_8051D820@sda21(r2)
/* 80312B38 0030FA78  91 6D 97 C8 */	stw r11, gu32NAN___Q24Game5P2JST@sda21(r13)
/* 80312B3C 0030FA7C  D1 6D 97 CC */	stfs f11, gfNAN___Q24Game5P2JST@sda21(r13)
/* 80312B40 0030FA80  D1 6A 00 00 */	stfs f11, 0(r10)
/* 80312B44 0030FA84  D1 6A 00 04 */	stfs f11, 4(r10)
/* 80312B48 0030FA88  D1 6A 00 08 */	stfs f11, 8(r10)
/* 80312B4C 0030FA8C  99 09 00 08 */	stb r8, 8(r9)
/* 80312B50 0030FA90  99 09 00 09 */	stb r8, 9(r9)
/* 80312B54 0030FA94  99 09 00 0A */	stb r8, 0xa(r9)
/* 80312B58 0030FA98  98 E9 00 0B */	stb r7, 0xb(r9)
/* 80312B5C 0030FA9C  98 C9 00 0C */	stb r6, 0xc(r9)
/* 80312B60 0030FAA0  99 09 00 0D */	stb r8, 0xd(r9)
/* 80312B64 0030FAA4  99 09 00 0E */	stb r8, 0xe(r9)
/* 80312B68 0030FAA8  98 A9 00 0F */	stb r5, 0xf(r9)
/* 80312B6C 0030FAAC  98 A9 00 10 */	stb r5, 0x10(r9)
/* 80312B70 0030FAB0  98 89 00 11 */	stb r4, 0x11(r9)
/* 80312B74 0030FAB4  98 A9 00 12 */	stb r5, 0x12(r9)
/* 80312B78 0030FAB8  99 09 00 13 */	stb r8, 0x13(r9)
/* 80312B7C 0030FABC  98 69 00 14 */	stb r3, 0x14(r9)
/* 80312B80 0030FAC0  98 A9 00 15 */	stb r5, 0x15(r9)
/* 80312B84 0030FAC4  99 09 00 16 */	stb r8, 0x16(r9)
/* 80312B88 0030FAC8  99 09 00 17 */	stb r8, 0x17(r9)
/* 80312B8C 0030FACC  98 A9 00 18 */	stb r5, 0x18(r9)
/* 80312B90 0030FAD0  98 A9 00 19 */	stb r5, 0x19(r9)
/* 80312B94 0030FAD4  98 A9 00 1A */	stb r5, 0x1a(r9)
/* 80312B98 0030FAD8  D1 49 00 1C */	stfs f10, 0x1c(r9)
/* 80312B9C 0030FADC  D1 29 00 20 */	stfs f9, 0x20(r9)
/* 80312BA0 0030FAE0  D1 09 00 3C */	stfs f8, 0x3c(r9)
/* 80312BA4 0030FAE4  98 C9 00 1B */	stb r6, 0x1b(r9)
/* 80312BA8 0030FAE8  D0 E9 00 00 */	stfs f7, 0(r9)
/* 80312BAC 0030FAEC  D0 C9 00 04 */	stfs f6, 4(r9)
/* 80312BB0 0030FAF0  D0 A9 00 24 */	stfs f5, 0x24(r9)
/* 80312BB4 0030FAF4  D0 89 00 28 */	stfs f4, 0x28(r9)
/* 80312BB8 0030FAF8  D1 09 00 2C */	stfs f8, 0x2c(r9)
/* 80312BBC 0030FAFC  D1 09 00 30 */	stfs f8, 0x30(r9)
/* 80312BC0 0030FB00  D0 69 00 34 */	stfs f3, 0x34(r9)
/* 80312BC4 0030FB04  D0 49 00 38 */	stfs f2, 0x38(r9)
/* 80312BC8 0030FB08  D0 29 00 40 */	stfs f1, 0x40(r9)
/* 80312BCC 0030FB0C  D0 09 00 44 */	stfs f0, 0x44(r9)
/* 80312BD0 0030FB10  98 A9 00 48 */	stb r5, 0x48(r9)
/* 80312BD4 0030FB14  98 09 00 49 */	stb r0, 0x49(r9)
/* 80312BD8 0030FB18  99 09 00 4A */	stb r8, 0x4a(r9)
/* 80312BDC 0030FB1C  99 09 00 4B */	stb r8, 0x4b(r9)
/* 80312BE0 0030FB20  98 A9 00 4C */	stb r5, 0x4c(r9)
/* 80312BE4 0030FB24  99 09 00 4D */	stb r8, 0x4d(r9)
/* 80312BE8 0030FB28  99 09 00 4E */	stb r8, 0x4e(r9)
/* 80312BEC 0030FB2C  98 A9 00 4F */	stb r5, 0x4f(r9)
/* 80312BF0 0030FB30  4E 80 00 20 */	blr 
.endfn __sinit_ogObjSMenuMap_cpp

.fn "@24@__dt__Q32og9newScreen11ObjSMenuMapFv", weak
/* 80312BF4 0030FB34  38 63 FF E8 */	addi r3, r3, -24
/* 80312BF8 0030FB38  4B FF CC B8 */	b __dt__Q32og9newScreen11ObjSMenuMapFv
.endfn "@24@__dt__Q32og9newScreen11ObjSMenuMapFv"
