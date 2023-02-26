.include "macros.inc"
.section .ctors, "wa"  # 0x80472F00 - 0x804732C0
lbl_constructor:
	.4byte __sinit_movieMessage_cpp

.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
.obj lbl_8049A6E0, local
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj lbl_8049A6E0
.balign 4
.obj lbl_8049A6EC, local
	.asciz "movieMessage"
.endobj lbl_8049A6EC
.balign 4
.obj lbl_8049A6FC, local
	.asciz "movieMessage.cpp"
.endobj lbl_8049A6FC
.balign 4
.obj lbl_8049A710, local
	.asciz "P2Assert"
.endobj lbl_8049A710
.balign 4
.obj lbl_8049A71C, local
	.asciz "anim/pod.btp"
.endobj lbl_8049A71C
.balign 4
.obj lbl_8049A72C, local
	.asciz "anim/pod.bck"
.endobj lbl_8049A72C
.balign 4
.obj lbl_8049A73C, local
	.asciz "anim/pod.bpk"
.endobj lbl_8049A73C
.balign 4
.obj lbl_8049A74C, local
	.asciz "mg_window.blo"
.endobj lbl_8049A74C
.balign 4
.obj lbl_8049A75C, local
	.asciz "P2JME::Movie::TControl::onInit"
.endobj lbl_8049A75C
.balign 4
.obj lbl_8049A77C, local
	.asciz "PMT_onInit_arc"
.endobj lbl_8049A77C
.balign 4
.obj lbl_8049A78C, local
	.asciz "new_screen/cmn/message_window.szs"
.endobj lbl_8049A78C
.balign 4
.obj lbl_8049A7B0, local
	.asciz "new_screen/cmn/gold_pod_for_message_window.szs"
.endobj lbl_8049A7B0
.balign 4
.obj lbl_8049A7E0, local
	.asciz "new_screen/cmn/pod_for_message_window.szs"
.endobj lbl_8049A7E0
.balign 4
.obj lbl_8049A80C, local
	.asciz "%s is not found.\n"
.endobj lbl_8049A80C
.balign 4
.obj lbl_8049A820, local
	.asciz "PMT_onInit_initRenderingProcessor"
.endobj lbl_8049A820
.balign 4
.obj lbl_8049A844, local
	.asciz "messageObj.h"
.endobj lbl_8049A844

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.obj govNAN___Q24Game5P2JST, local
	.float 0.0
	.float 0.0
	.float 0.0
.endobj govNAN___Q24Game5P2JST
.obj __vt__Q35P2JME5Movie8TControl, global
	.4byte 0
	.4byte 0
	.4byte __dt__Q35P2JME5Movie8TControlFv
	.4byte reset__Q35P2JME5Movie8TControlFv
	.4byte update__Q25P2JME8TControlFv
	.4byte update__Q35P2JME5Movie8TControlFP10ControllerP10Controller
	.4byte draw__Q35P2JME5Movie8TControlFR8Graphics
	.4byte draw__Q35P2JME6Window8TControlFPA4_fPA4_f
	.4byte setMessageID__Q25P2JME8TControlFUlUl
	.4byte setMessageID__Q25P2JME8TControlFPc
	.4byte setMessageID__Q25P2JME8TControlFUx
	.4byte setMessageCode__Q25P2JME8TControlFUsUs
	.4byte setMessageCode__Q25P2JME8TControlFUl
	.4byte onInit__Q35P2JME5Movie8TControlFv
	.4byte createReference__Q25P2JME8TControlFv
	.4byte createResourceContainer__Q25P2JME8TControlFv
	.4byte createSequenceProcessor__Q35P2JME6Window8TControlFv
	.4byte createRenderingProcessor__Q35P2JME6Window8TControlFv
.endobj __vt__Q35P2JME5Movie8TControl
.obj __vt__Q35P2JME5Movie19MessageWindowScreen, weak
	.4byte 0
	.4byte 0
	.4byte __dt__Q35P2JME5Movie19MessageWindowScreenFv
	.4byte getTypeID__9J2DScreenCFv
	.4byte move__7J2DPaneFff
	.4byte add__7J2DPaneFff
	.4byte resize__7J2DPaneFff
	.4byte setCullBack__7J2DPaneFb
	.4byte setCullBack__7J2DPaneF11_GXCullMode
	.4byte setAlpha__7J2DPaneFUc
	.4byte setConnectParent__7J2DPaneFb
	.4byte calcMtx__9J2DScreenFv
	.4byte update__Q29P2DScreen3MgrFv
	.4byte drawSelf__7J2DPaneFff
	.4byte drawSelf__9J2DScreenFffPA3_A4_f
	.4byte search__9J2DScreenFUx
	.4byte searchUserInfo__9J2DScreenFUx
	.4byte makeMatrix__7J2DPaneFff
	.4byte makeMatrix__7J2DPaneFffff
	.4byte isUsed__9J2DScreenFPC7ResTIMG
	.4byte isUsed__9J2DScreenFPC7ResFONT
	.4byte clearAnmTransform__9J2DScreenFv
	.4byte rewriteAlpha__7J2DPaneFv
	.4byte setAnimation__9J2DScreenFP10J2DAnmBase
	.4byte setAnimation__9J2DScreenFP15J2DAnmTransform
	.4byte setAnimation__9J2DScreenFP11J2DAnmColor
	.4byte setAnimation__9J2DScreenFP16J2DAnmTexPattern
	.4byte setAnimation__9J2DScreenFP19J2DAnmTextureSRTKey
	.4byte setAnimation__9J2DScreenFP15J2DAnmTevRegKey
	.4byte setAnimation__9J2DScreenFP20J2DAnmVisibilityFull
	.4byte setAnimation__9J2DScreenFP14J2DAnmVtxColor
	.4byte animationTransform__7J2DPaneFPC15J2DAnmTransform
	.4byte setVisibileAnimation__7J2DPaneFP20J2DAnmVisibilityFull
	.4byte setAnimationVF__9J2DScreenFP20J2DAnmVisibilityFull
	.4byte setVtxColorAnimation__7J2DPaneFP14J2DAnmVtxColor
	.4byte setAnimationVC__9J2DScreenFP14J2DAnmVtxColor
	.4byte animationPane__7J2DPaneFPC15J2DAnmTransform
	.4byte createPane__9J2DScreenFRC18J2DScrnBlockHeaderP20JSURandomInputStreamP7J2DPaneUl
	.4byte createPane__9J2DScreenFRC18J2DScrnBlockHeaderP20JSURandomInputStreamP7J2DPaneUlP10JKRArchive
	.4byte draw__Q29P2DScreen10Mgr_tuningFR8GraphicsR14J2DGrafContext
.endobj __vt__Q35P2JME5Movie19MessageWindowScreen
.obj __vt__Q35P2JME5Movie13PodIconScreen, global
	.4byte 0
	.4byte 0
	.4byte __dt__Q35P2JME5Movie13PodIconScreenFv
	.4byte getTypeID__9J2DScreenCFv
	.4byte move__7J2DPaneFff
	.4byte add__7J2DPaneFff
	.4byte resize__7J2DPaneFff
	.4byte setCullBack__7J2DPaneFb
	.4byte setCullBack__7J2DPaneF11_GXCullMode
	.4byte setAlpha__7J2DPaneFUc
	.4byte setConnectParent__7J2DPaneFb
	.4byte calcMtx__9J2DScreenFv
	.4byte update__Q35P2JME5Movie13PodIconScreenFv
	.4byte drawSelf__7J2DPaneFff
	.4byte drawSelf__9J2DScreenFffPA3_A4_f
	.4byte search__9J2DScreenFUx
	.4byte searchUserInfo__9J2DScreenFUx
	.4byte makeMatrix__7J2DPaneFff
	.4byte makeMatrix__7J2DPaneFffff
	.4byte isUsed__9J2DScreenFPC7ResTIMG
	.4byte isUsed__9J2DScreenFPC7ResFONT
	.4byte clearAnmTransform__9J2DScreenFv
	.4byte rewriteAlpha__7J2DPaneFv
	.4byte setAnimation__9J2DScreenFP10J2DAnmBase
	.4byte setAnimation__9J2DScreenFP15J2DAnmTransform
	.4byte setAnimation__9J2DScreenFP11J2DAnmColor
	.4byte setAnimation__9J2DScreenFP16J2DAnmTexPattern
	.4byte setAnimation__9J2DScreenFP19J2DAnmTextureSRTKey
	.4byte setAnimation__9J2DScreenFP15J2DAnmTevRegKey
	.4byte setAnimation__9J2DScreenFP20J2DAnmVisibilityFull
	.4byte setAnimation__9J2DScreenFP14J2DAnmVtxColor
	.4byte animationTransform__7J2DPaneFPC15J2DAnmTransform
	.4byte setVisibileAnimation__7J2DPaneFP20J2DAnmVisibilityFull
	.4byte setAnimationVF__9J2DScreenFP20J2DAnmVisibilityFull
	.4byte setVtxColorAnimation__7J2DPaneFP14J2DAnmVtxColor
	.4byte setAnimationVC__9J2DScreenFP14J2DAnmVtxColor
	.4byte animationPane__7J2DPaneFPC15J2DAnmTransform
	.4byte createPane__9J2DScreenFRC18J2DScrnBlockHeaderP20JSURandomInputStreamP7J2DPaneUl
	.4byte createPane__9J2DScreenFRC18J2DScrnBlockHeaderP20JSURandomInputStreamP7J2DPaneUlP10JKRArchive
	.4byte draw__Q29P2DScreen10Mgr_tuningFR8GraphicsR14J2DGrafContext
.endobj __vt__Q35P2JME5Movie13PodIconScreen
.obj __vt__Q35P2JME5Movie8AbtnPane, global
	.4byte 0
	.4byte 0
	.4byte __dt__Q35P2JME5Movie8AbtnPaneFv
	.4byte getChildCount__5CNodeFv
	.4byte update__Q35P2JME5Movie8AbtnPaneFv
	.4byte draw__Q29P2DScreen4NodeFR8GraphicsR14J2DGrafContext
	.4byte doInit__Q35P2JME5Movie8AbtnPaneFv
.endobj __vt__Q35P2JME5Movie8AbtnPane
.obj __vt__Q35P2JME5Movie10WindowPane, global
	.4byte 0
	.4byte 0
	.4byte __dt__Q35P2JME5Movie10WindowPaneFv
	.4byte getChildCount__5CNodeFv
	.4byte update__Q35P2JME5Movie10WindowPaneFv
	.4byte draw__Q29P2DScreen4NodeFR8GraphicsR14J2DGrafContext
	.4byte doInit__Q35P2JME5Movie10WindowPaneFv
.endobj __vt__Q35P2JME5Movie10WindowPane

.section .sbss # 0x80514D80 - 0x80516360
.balign 8
.obj gu32NAN___Q24Game5P2JST, local
	.skip 0x4
.endobj gu32NAN___Q24Game5P2JST
.obj gfNAN___Q24Game5P2JST, local
	.skip 0x4
.endobj gfNAN___Q24Game5P2JST

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
.obj lbl_805207B8, local
	.float 0.0
.endobj lbl_805207B8
.obj lbl_805207BC, local
	.float 10.0
.endobj lbl_805207BC
.obj lbl_805207C0, local
	.float 90.0
.endobj lbl_805207C0
.obj lbl_805207C4, local
	.float 180.0
.endobj lbl_805207C4
.obj lbl_805207C8, local
	.float 1.0
.endobj lbl_805207C8
.obj lbl_805207CC, local
	.float 500.0
.endobj lbl_805207CC
.obj lbl_805207D0, local # pi
	.float 3.1415927
.endobj lbl_805207D0
.obj lbl_805207D4, local
	.float 0.0055555557
.endobj lbl_805207D4
.obj lbl_805207D8, local
	.float 325.9493
.endobj lbl_805207D8
.obj lbl_805207DC, local
	.float -325.9493
.endobj lbl_805207DC
.obj lbl_805207E0, local
	.float 0.2
.endobj lbl_805207E0
.obj lbl_805207E4, local
	.float 0.72
.endobj lbl_805207E4
.obj lbl_805207E8, local
	.float 270.0
.endobj lbl_805207E8
.obj lbl_805207EC, local
	.float 57.295776
.endobj lbl_805207EC
.obj lbl_805207F0, local
	.float 255.0
.endobj lbl_805207F0
.balign 8
.obj lbl_805207F8, local
	.8byte 0x4330000000000000
.endobj lbl_805207F8
.balign 4
.obj lbl_80520800, local # tau
	.float 6.2831855
.endobj lbl_80520800
.obj lbl_80520804, local
	.float 0.5
.endobj lbl_80520804
.obj lbl_80520808, local
	.float 2.0
.endobj lbl_80520808
.obj lbl_8052080C, local
	.float 0.75
.endobj lbl_8052080C
.obj lbl_80520810, local
	.float 100.0
.endobj lbl_80520810
.obj lbl_80520814, local
	.float 25.0
.endobj lbl_80520814
.obj lbl_80520818, local
	.float 250.0
.endobj lbl_80520818
.obj lbl_8052081C, local
	.float 32768.0
.endobj lbl_8052081C
.balign 8
.obj lbl_80520820, local
	.8byte 0x4330000080000000
.endobj lbl_80520820
.obj lbl_80520828, local
	.float 0.3
.endobj lbl_80520828
.obj lbl_8052082C, local
	.float 1.25
.endobj lbl_8052082C
.obj lbl_80520830, local
	.float 0.65
.endobj lbl_80520830
.balign 4
.obj lbl_80520834, local
	.asciz "pod.blo"
.endobj lbl_80520834
.balign 4
.obj lbl_8052083C, local
	.float 0.0001
.endobj lbl_8052083C
.obj lbl_80520840, local
	.float 0.35
.endobj lbl_80520840
.obj lbl_80520844, local
	.float 20.0
.endobj lbl_80520844
.obj lbl_80520848, local
	.float -0.0
.endobj lbl_80520848
.balign 4
.obj lbl_8052084C, local
	.asciz "podIcon"
.endobj lbl_8052084C
.balign 4
.obj lbl_80520854, local
	.asciz "message"
.endobj lbl_80520854

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.fn doInit__Q35P2JME5Movie10WindowPaneFv, global
/* 80434F5C 00431E9C  80 83 00 18 */	lwz r4, 0x18(r3)
/* 80434F60 00431EA0  C0 02 24 58 */	lfs f0, lbl_805207B8@sda21(r2)
/* 80434F64 00431EA4  C0 44 00 D8 */	lfs f2, 0xd8(r4)
/* 80434F68 00431EA8  C0 24 00 D4 */	lfs f1, 0xd4(r4)
/* 80434F6C 00431EAC  D0 23 00 28 */	stfs f1, 0x28(r3)
/* 80434F70 00431EB0  D0 43 00 2C */	stfs f2, 0x2c(r3)
/* 80434F74 00431EB4  D0 03 00 30 */	stfs f0, 0x30(r3)
/* 80434F78 00431EB8  4E 80 00 20 */	blr 
.endfn doInit__Q35P2JME5Movie10WindowPaneFv

.fn update__Q35P2JME5Movie10WindowPaneFv, global
/* 80434F7C 00431EBC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80434F80 00431EC0  7C 08 02 A6 */	mflr r0
/* 80434F84 00431EC4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80434F88 00431EC8  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 80434F8C 00431ECC  2C 00 00 02 */	cmpwi r0, 2
/* 80434F90 00431ED0  41 82 01 38 */	beq .L_804350C8
/* 80434F94 00431ED4  40 80 00 14 */	bge .L_80434FA8
/* 80434F98 00431ED8  2C 00 00 00 */	cmpwi r0, 0
/* 80434F9C 00431EDC  41 82 00 1C */	beq .L_80434FB8
/* 80434FA0 00431EE0  40 80 00 28 */	bge .L_80434FC8
/* 80434FA4 00431EE4  48 00 01 24 */	b .L_804350C8
.L_80434FA8:
/* 80434FA8 00431EE8  2C 00 00 04 */	cmpwi r0, 4
/* 80434FAC 00431EEC  41 82 00 0C */	beq .L_80434FB8
/* 80434FB0 00431EF0  40 80 01 18 */	bge .L_804350C8
/* 80434FB4 00431EF4  48 00 00 BC */	b .L_80435070
.L_80434FB8:
/* 80434FB8 00431EF8  80 83 00 18 */	lwz r4, 0x18(r3)
/* 80434FBC 00431EFC  38 00 00 00 */	li r0, 0
/* 80434FC0 00431F00  98 04 00 B0 */	stb r0, 0xb0(r4)
/* 80434FC4 00431F04  48 00 01 04 */	b .L_804350C8
.L_80434FC8:
/* 80434FC8 00431F08  80 8D 9A EC */	lwz r4, sys@sda21(r13)
/* 80434FCC 00431F0C  C0 23 00 20 */	lfs f1, 0x20(r3)
/* 80434FD0 00431F10  C0 04 00 54 */	lfs f0, 0x54(r4)
/* 80434FD4 00431F14  EC 01 00 2A */	fadds f0, f1, f0
/* 80434FD8 00431F18  D0 03 00 20 */	stfs f0, 0x20(r3)
/* 80434FDC 00431F1C  C0 03 00 20 */	lfs f0, 0x20(r3)
/* 80434FE0 00431F20  C0 23 00 24 */	lfs f1, 0x24(r3)
/* 80434FE4 00431F24  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 80434FE8 00431F28  40 81 00 68 */	ble .L_80435050
/* 80434FEC 00431F2C  D0 23 00 20 */	stfs f1, 0x20(r3)
/* 80434FF0 00431F30  C0 22 24 58 */	lfs f1, lbl_805207B8@sda21(r2)
/* 80434FF4 00431F34  C0 63 00 44 */	lfs f3, 0x44(r3)
/* 80434FF8 00431F38  C0 43 00 48 */	lfs f2, 0x48(r3)
/* 80434FFC 00431F3C  EC 03 00 F2 */	fmuls f0, f3, f3
/* 80435000 00431F40  C0 83 00 4C */	lfs f4, 0x4c(r3)
/* 80435004 00431F44  EC 42 00 B2 */	fmuls f2, f2, f2
/* 80435008 00431F48  EC 84 01 32 */	fmuls f4, f4, f4
/* 8043500C 00431F4C  EC 00 10 2A */	fadds f0, f0, f2
/* 80435010 00431F50  EC 04 00 2A */	fadds f0, f4, f0
/* 80435014 00431F54  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 80435018 00431F58  40 81 00 20 */	ble .L_80435038
/* 8043501C 00431F5C  EC 03 10 FA */	fmadds f0, f3, f3, f2
/* 80435020 00431F60  EC 44 00 2A */	fadds f2, f4, f0
/* 80435024 00431F64  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 80435028 00431F68  40 81 00 14 */	ble .L_8043503C
/* 8043502C 00431F6C  FC 00 10 34 */	frsqrte f0, f2
/* 80435030 00431F70  EC 40 00 B2 */	fmuls f2, f0, f2
/* 80435034 00431F74  48 00 00 08 */	b .L_8043503C
.L_80435038:
/* 80435038 00431F78  FC 40 08 90 */	fmr f2, f1
.L_8043503C:
/* 8043503C 00431F7C  C0 02 24 5C */	lfs f0, lbl_805207BC@sda21(r2)
/* 80435040 00431F80  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80435044 00431F84  40 80 00 0C */	bge .L_80435050
/* 80435048 00431F88  38 00 00 02 */	li r0, 2
/* 8043504C 00431F8C  90 03 00 1C */	stw r0, 0x1c(r3)
.L_80435050:
/* 80435050 00431F90  C0 23 00 20 */	lfs f1, 0x20(r3)
/* 80435054 00431F94  C0 03 00 24 */	lfs f0, 0x24(r3)
/* 80435058 00431F98  C0 42 24 64 */	lfs f2, lbl_805207C4@sda21(r2)
/* 8043505C 00431F9C  EC 21 00 24 */	fdivs f1, f1, f0
/* 80435060 00431FA0  C0 02 24 60 */	lfs f0, lbl_805207C0@sda21(r2)
/* 80435064 00431FA4  EC 02 00 7A */	fmadds f0, f2, f1, f0
/* 80435068 00431FA8  D0 03 00 34 */	stfs f0, 0x34(r3)
/* 8043506C 00431FAC  48 00 00 5C */	b .L_804350C8
.L_80435070:
/* 80435070 00431FB0  80 8D 9A EC */	lwz r4, sys@sda21(r13)
/* 80435074 00431FB4  C0 23 00 20 */	lfs f1, 0x20(r3)
/* 80435078 00431FB8  C0 04 00 54 */	lfs f0, 0x54(r4)
/* 8043507C 00431FBC  EC 01 00 2A */	fadds f0, f1, f0
/* 80435080 00431FC0  D0 03 00 20 */	stfs f0, 0x20(r3)
/* 80435084 00431FC4  C0 23 00 20 */	lfs f1, 0x20(r3)
/* 80435088 00431FC8  C0 03 00 24 */	lfs f0, 0x24(r3)
/* 8043508C 00431FCC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80435090 00431FD0  40 81 00 14 */	ble .L_804350A4
/* 80435094 00431FD4  38 00 00 04 */	li r0, 4
/* 80435098 00431FD8  90 03 00 1C */	stw r0, 0x1c(r3)
/* 8043509C 00431FDC  C0 03 00 24 */	lfs f0, 0x24(r3)
/* 804350A0 00431FE0  D0 03 00 20 */	stfs f0, 0x20(r3)
.L_804350A4:
/* 804350A4 00431FE4  C0 23 00 20 */	lfs f1, 0x20(r3)
/* 804350A8 00431FE8  C0 03 00 24 */	lfs f0, 0x24(r3)
/* 804350AC 00431FEC  C0 42 24 68 */	lfs f2, lbl_805207C8@sda21(r2)
/* 804350B0 00431FF0  EC 21 00 24 */	fdivs f1, f1, f0
/* 804350B4 00431FF4  C0 62 24 64 */	lfs f3, lbl_805207C4@sda21(r2)
/* 804350B8 00431FF8  C0 02 24 60 */	lfs f0, lbl_805207C0@sda21(r2)
/* 804350BC 00431FFC  EC 22 08 28 */	fsubs f1, f2, f1
/* 804350C0 00432000  EC 03 00 7A */	fmadds f0, f3, f1, f0
/* 804350C4 00432004  D0 03 00 34 */	stfs f0, 0x34(r3)
.L_804350C8:
/* 804350C8 00432008  38 80 00 00 */	li r4, 0
/* 804350CC 0043200C  48 00 00 15 */	bl moveWindow__Q35P2JME5Movie10WindowPaneFb
/* 804350D0 00432010  80 01 00 14 */	lwz r0, 0x14(r1)
/* 804350D4 00432014  7C 08 03 A6 */	mtlr r0
/* 804350D8 00432018  38 21 00 10 */	addi r1, r1, 0x10
/* 804350DC 0043201C  4E 80 00 20 */	blr 
.endfn update__Q35P2JME5Movie10WindowPaneFv

.fn moveWindow__Q35P2JME5Movie10WindowPaneFb, global
/* 804350E0 00432020  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 804350E4 00432024  7C 08 02 A6 */	mflr r0
/* 804350E8 00432028  90 01 00 54 */	stw r0, 0x54(r1)
/* 804350EC 0043202C  DB E1 00 40 */	stfd f31, 0x40(r1)
/* 804350F0 00432030  F3 E1 00 48 */	psq_st f31, 72(r1), 0, qr0
/* 804350F4 00432034  DB C1 00 30 */	stfd f30, 0x30(r1)
/* 804350F8 00432038  F3 C1 00 38 */	psq_st f30, 56(r1), 0, qr0
/* 804350FC 0043203C  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 80435100 00432040  7C 7F 1B 78 */	mr r31, r3
/* 80435104 00432044  C0 22 24 74 */	lfs f1, lbl_805207D4@sda21(r2)
/* 80435108 00432048  C0 03 00 34 */	lfs f0, 0x34(r3)
/* 8043510C 0043204C  C0 42 24 70 */	lfs f2, lbl_805207D0@sda21(r2)
/* 80435110 00432050  EC 21 00 32 */	fmuls f1, f1, f0
/* 80435114 00432054  C0 83 00 28 */	lfs f4, 0x28(r3)
/* 80435118 00432058  C0 62 24 6C */	lfs f3, lbl_805207CC@sda21(r2)
/* 8043511C 0043205C  C0 02 24 58 */	lfs f0, lbl_805207B8@sda21(r2)
/* 80435120 00432060  EC A2 00 72 */	fmuls f5, f2, f1
/* 80435124 00432064  C3 C3 00 2C */	lfs f30, 0x2c(r3)
/* 80435128 00432068  EF E4 18 2A */	fadds f31, f4, f3
/* 8043512C 0043206C  FC 20 28 90 */	fmr f1, f5
/* 80435130 00432070  FC 05 00 40 */	fcmpo cr0, f5, f0
/* 80435134 00432074  40 80 00 08 */	bge .L_8043513C
/* 80435138 00432078  FC 20 28 50 */	fneg f1, f5
.L_8043513C:
/* 8043513C 0043207C  C0 42 24 78 */	lfs f2, lbl_805207D8@sda21(r2)
/* 80435140 00432080  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 80435144 00432084  C0 02 24 58 */	lfs f0, lbl_805207B8@sda21(r2)
/* 80435148 00432088  38 A3 71 A0 */	addi r5, r3, sincosTable___5JMath@l
/* 8043514C 0043208C  EC 21 00 B2 */	fmuls f1, f1, f2
/* 80435150 00432090  C0 62 24 6C */	lfs f3, lbl_805207CC@sda21(r2)
/* 80435154 00432094  FC 05 00 40 */	fcmpo cr0, f5, f0
/* 80435158 00432098  FC 00 08 1E */	fctiwz f0, f1
/* 8043515C 0043209C  D8 01 00 08 */	stfd f0, 8(r1)
/* 80435160 004320A0  80 01 00 0C */	lwz r0, 0xc(r1)
/* 80435164 004320A4  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 80435168 004320A8  7C 65 02 14 */	add r3, r5, r0
/* 8043516C 004320AC  C0 03 00 04 */	lfs f0, 4(r3)
/* 80435170 004320B0  EC 83 F0 3A */	fmadds f4, f3, f0, f30
/* 80435174 004320B4  40 80 00 28 */	bge .L_8043519C
/* 80435178 004320B8  C0 02 24 7C */	lfs f0, lbl_805207DC@sda21(r2)
/* 8043517C 004320BC  EC 05 00 32 */	fmuls f0, f5, f0
/* 80435180 004320C0  FC 00 00 1E */	fctiwz f0, f0
/* 80435184 004320C4  D8 01 00 10 */	stfd f0, 0x10(r1)
/* 80435188 004320C8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8043518C 004320CC  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 80435190 004320D0  7C 05 04 2E */	lfsx f0, r5, r0
/* 80435194 004320D4  FC 00 00 50 */	fneg f0, f0
/* 80435198 004320D8  48 00 00 1C */	b .L_804351B4
.L_8043519C:
/* 8043519C 004320DC  EC 05 00 B2 */	fmuls f0, f5, f2
/* 804351A0 004320E0  FC 00 00 1E */	fctiwz f0, f0
/* 804351A4 004320E4  D8 01 00 18 */	stfd f0, 0x18(r1)
/* 804351A8 004320E8  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 804351AC 004320EC  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 804351B0 004320F0  7C 05 04 2E */	lfsx f0, r5, r0
.L_804351B4:
/* 804351B4 004320F4  54 80 06 3F */	clrlwi. r0, r4, 0x18
/* 804351B8 004320F8  EC 43 F8 3A */	fmadds f2, f3, f0, f31
/* 804351BC 004320FC  41 82 00 24 */	beq .L_804351E0
/* 804351C0 00432100  D0 5F 00 38 */	stfs f2, 0x38(r31)
/* 804351C4 00432104  C0 02 24 58 */	lfs f0, lbl_805207B8@sda21(r2)
/* 804351C8 00432108  D0 9F 00 3C */	stfs f4, 0x3c(r31)
/* 804351CC 0043210C  D0 1F 00 40 */	stfs f0, 0x40(r31)
/* 804351D0 00432110  D0 1F 00 44 */	stfs f0, 0x44(r31)
/* 804351D4 00432114  D0 1F 00 48 */	stfs f0, 0x48(r31)
/* 804351D8 00432118  D0 1F 00 4C */	stfs f0, 0x4c(r31)
/* 804351DC 0043211C  48 00 00 AC */	b .L_80435288
.L_804351E0:
/* 804351E0 00432120  C0 3F 00 38 */	lfs f1, 0x38(r31)
/* 804351E4 00432124  C0 1F 00 3C */	lfs f0, 0x3c(r31)
/* 804351E8 00432128  EC A2 08 28 */	fsubs f5, f2, f1
/* 804351EC 0043212C  C0 42 24 80 */	lfs f2, lbl_805207E0@sda21(r2)
/* 804351F0 00432130  EC C4 00 28 */	fsubs f6, f4, f0
/* 804351F4 00432134  C0 1F 00 44 */	lfs f0, 0x44(r31)
/* 804351F8 00432138  C0 7F 00 40 */	lfs f3, 0x40(r31)
/* 804351FC 0043213C  EC A5 00 B2 */	fmuls f5, f5, f2
/* 80435200 00432140  C0 82 24 58 */	lfs f4, lbl_805207B8@sda21(r2)
/* 80435204 00432144  EC C6 00 B2 */	fmuls f6, f6, f2
/* 80435208 00432148  C0 22 24 84 */	lfs f1, lbl_805207E4@sda21(r2)
/* 8043520C 0043214C  EC 00 28 2A */	fadds f0, f0, f5
/* 80435210 00432150  EC 64 18 28 */	fsubs f3, f4, f3
/* 80435214 00432154  D0 1F 00 44 */	stfs f0, 0x44(r31)
/* 80435218 00432158  EC 63 00 B2 */	fmuls f3, f3, f2
/* 8043521C 0043215C  C0 1F 00 48 */	lfs f0, 0x48(r31)
/* 80435220 00432160  EC 00 30 2A */	fadds f0, f0, f6
/* 80435224 00432164  D0 1F 00 48 */	stfs f0, 0x48(r31)
/* 80435228 00432168  C0 1F 00 4C */	lfs f0, 0x4c(r31)
/* 8043522C 0043216C  EC 00 18 2A */	fadds f0, f0, f3
/* 80435230 00432170  D0 1F 00 4C */	stfs f0, 0x4c(r31)
/* 80435234 00432174  C0 1F 00 44 */	lfs f0, 0x44(r31)
/* 80435238 00432178  EC 00 00 72 */	fmuls f0, f0, f1
/* 8043523C 0043217C  D0 1F 00 44 */	stfs f0, 0x44(r31)
/* 80435240 00432180  C0 1F 00 48 */	lfs f0, 0x48(r31)
/* 80435244 00432184  EC 00 00 72 */	fmuls f0, f0, f1
/* 80435248 00432188  D0 1F 00 48 */	stfs f0, 0x48(r31)
/* 8043524C 0043218C  C0 1F 00 4C */	lfs f0, 0x4c(r31)
/* 80435250 00432190  EC 00 00 72 */	fmuls f0, f0, f1
/* 80435254 00432194  D0 1F 00 4C */	stfs f0, 0x4c(r31)
/* 80435258 00432198  C0 3F 00 38 */	lfs f1, 0x38(r31)
/* 8043525C 0043219C  C0 1F 00 44 */	lfs f0, 0x44(r31)
/* 80435260 004321A0  EC 01 00 2A */	fadds f0, f1, f0
/* 80435264 004321A4  D0 1F 00 38 */	stfs f0, 0x38(r31)
/* 80435268 004321A8  C0 3F 00 3C */	lfs f1, 0x3c(r31)
/* 8043526C 004321AC  C0 1F 00 48 */	lfs f0, 0x48(r31)
/* 80435270 004321B0  EC 01 00 2A */	fadds f0, f1, f0
/* 80435274 004321B4  D0 1F 00 3C */	stfs f0, 0x3c(r31)
/* 80435278 004321B8  C0 3F 00 40 */	lfs f1, 0x40(r31)
/* 8043527C 004321BC  C0 1F 00 4C */	lfs f0, 0x4c(r31)
/* 80435280 004321C0  EC 01 00 2A */	fadds f0, f1, f0
/* 80435284 004321C4  D0 1F 00 40 */	stfs f0, 0x40(r31)
.L_80435288:
/* 80435288 004321C8  80 7F 00 18 */	lwz r3, 0x18(r31)
/* 8043528C 004321CC  C0 3F 00 3C */	lfs f1, 0x3c(r31)
/* 80435290 004321D0  C0 1F 00 38 */	lfs f0, 0x38(r31)
/* 80435294 004321D4  D0 03 00 D4 */	stfs f0, 0xd4(r3)
/* 80435298 004321D8  D0 23 00 D8 */	stfs f1, 0xd8(r3)
/* 8043529C 004321DC  81 83 00 00 */	lwz r12, 0(r3)
/* 804352A0 004321E0  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 804352A4 004321E4  7D 89 03 A6 */	mtctr r12
/* 804352A8 004321E8  4E 80 04 21 */	bctrl 
/* 804352AC 004321EC  C0 3F 00 38 */	lfs f1, 0x38(r31)
/* 804352B0 004321F0  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 804352B4 004321F4  C0 1F 00 3C */	lfs f0, 0x3c(r31)
/* 804352B8 004321F8  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 804352BC 004321FC  EC 21 F8 28 */	fsubs f1, f1, f31
/* 804352C0 00432200  EC 40 F0 28 */	fsubs f2, f0, f30
/* 804352C4 00432204  4B BF FE 45 */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 804352C8 00432208  FF C0 08 90 */	fmr f30, f1
/* 804352CC 0043220C  C0 3F 00 34 */	lfs f1, 0x34(r31)
/* 804352D0 00432210  4B FD C9 01 */	bl roundAng__Ff
/* 804352D4 00432214  C0 02 24 88 */	lfs f0, lbl_805207E8@sda21(r2)
/* 804352D8 00432218  C0 42 24 64 */	lfs f2, lbl_805207C4@sda21(r2)
/* 804352DC 0043221C  EC 61 00 28 */	fsubs f3, f1, f0
/* 804352E0 00432220  C0 22 24 8C */	lfs f1, lbl_805207EC@sda21(r2)
/* 804352E4 00432224  C0 02 24 60 */	lfs f0, lbl_805207C0@sda21(r2)
/* 804352E8 00432228  80 7F 00 18 */	lwz r3, 0x18(r31)
/* 804352EC 0043222C  EC 63 10 24 */	fdivs f3, f3, f2
/* 804352F0 00432230  C0 42 24 68 */	lfs f2, lbl_805207C8@sda21(r2)
/* 804352F4 00432234  EC 01 07 BA */	fmadds f0, f1, f30, f0
/* 804352F8 00432238  FC 20 1A 10 */	fabs f1, f3
/* 804352FC 0043223C  D0 03 00 C0 */	stfs f0, 0xc0(r3)
/* 80435300 00432240  FC 00 08 18 */	frsp f0, f1
/* 80435304 00432244  81 83 00 00 */	lwz r12, 0(r3)
/* 80435308 00432248  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 8043530C 0043224C  EF C2 00 2A */	fadds f30, f2, f0
/* 80435310 00432250  7D 89 03 A6 */	mtctr r12
/* 80435314 00432254  4E 80 04 21 */	bctrl 
/* 80435318 00432258  80 7F 00 18 */	lwz r3, 0x18(r31)
/* 8043531C 0043225C  D3 C3 00 CC */	stfs f30, 0xcc(r3)
/* 80435320 00432260  D3 C3 00 D0 */	stfs f30, 0xd0(r3)
/* 80435324 00432264  81 83 00 00 */	lwz r12, 0(r3)
/* 80435328 00432268  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 8043532C 0043226C  7D 89 03 A6 */	mtctr r12
/* 80435330 00432270  4E 80 04 21 */	bctrl 
/* 80435334 00432274  E3 E1 00 48 */	psq_l f31, 72(r1), 0, qr0
/* 80435338 00432278  CB E1 00 40 */	lfd f31, 0x40(r1)
/* 8043533C 0043227C  E3 C1 00 38 */	psq_l f30, 56(r1), 0, qr0
/* 80435340 00432280  CB C1 00 30 */	lfd f30, 0x30(r1)
/* 80435344 00432284  80 01 00 54 */	lwz r0, 0x54(r1)
/* 80435348 00432288  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 8043534C 0043228C  7C 08 03 A6 */	mtlr r0
/* 80435350 00432290  38 21 00 50 */	addi r1, r1, 0x50
/* 80435354 00432294  4E 80 00 20 */	blr 
.endfn moveWindow__Q35P2JME5Movie10WindowPaneFb

.fn open__Q35P2JME5Movie10WindowPaneFf, global
/* 80435358 00432298  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8043535C 0043229C  7C 08 02 A6 */	mflr r0
/* 80435360 004322A0  C0 42 24 58 */	lfs f2, lbl_805207B8@sda21(r2)
/* 80435364 004322A4  38 80 00 01 */	li r4, 1
/* 80435368 004322A8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8043536C 004322AC  38 00 00 01 */	li r0, 1
/* 80435370 004322B0  C0 02 24 60 */	lfs f0, lbl_805207C0@sda21(r2)
/* 80435374 004322B4  80 A3 00 18 */	lwz r5, 0x18(r3)
/* 80435378 004322B8  98 05 00 B0 */	stb r0, 0xb0(r5)
/* 8043537C 004322BC  90 03 00 1C */	stw r0, 0x1c(r3)
/* 80435380 004322C0  D0 43 00 20 */	stfs f2, 0x20(r3)
/* 80435384 004322C4  D0 23 00 24 */	stfs f1, 0x24(r3)
/* 80435388 004322C8  D0 03 00 34 */	stfs f0, 0x34(r3)
/* 8043538C 004322CC  4B FF FD 55 */	bl moveWindow__Q35P2JME5Movie10WindowPaneFb
/* 80435390 004322D0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80435394 004322D4  7C 08 03 A6 */	mtlr r0
/* 80435398 004322D8  38 21 00 10 */	addi r1, r1, 0x10
/* 8043539C 004322DC  4E 80 00 20 */	blr 
.endfn open__Q35P2JME5Movie10WindowPaneFf

.fn doInit__Q35P2JME5Movie8AbtnPaneFv, global
/* 804353A0 004322E0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 804353A4 004322E4  7C 08 02 A6 */	mflr r0
/* 804353A8 004322E8  38 80 00 00 */	li r4, 0
/* 804353AC 004322EC  90 01 00 14 */	stw r0, 0x14(r1)
/* 804353B0 004322F0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 804353B4 004322F4  7C 7F 1B 78 */	mr r31, r3
/* 804353B8 004322F8  80 63 00 18 */	lwz r3, 0x18(r3)
/* 804353BC 004322FC  81 83 00 00 */	lwz r12, 0(r3)
/* 804353C0 00432300  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 804353C4 00432304  7D 89 03 A6 */	mtctr r12
/* 804353C8 00432308  4E 80 04 21 */	bctrl 
/* 804353CC 0043230C  80 7F 00 18 */	lwz r3, 0x18(r31)
/* 804353D0 00432310  38 80 00 01 */	li r4, 1
/* 804353D4 00432314  38 00 00 00 */	li r0, 0
/* 804353D8 00432318  98 83 00 B0 */	stb r4, 0xb0(r3)
/* 804353DC 0043231C  90 1F 00 1C */	stw r0, 0x1c(r31)
/* 804353E0 00432320  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 804353E4 00432324  80 01 00 14 */	lwz r0, 0x14(r1)
/* 804353E8 00432328  7C 08 03 A6 */	mtlr r0
/* 804353EC 0043232C  38 21 00 10 */	addi r1, r1, 0x10
/* 804353F0 00432330  4E 80 00 20 */	blr 
.endfn doInit__Q35P2JME5Movie8AbtnPaneFv

.fn update__Q35P2JME5Movie8AbtnPaneFv, global
/* 804353F4 00432334  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 804353F8 00432338  7C 08 02 A6 */	mflr r0
/* 804353FC 0043233C  C0 42 24 A0 */	lfs f2, lbl_80520800@sda21(r2)
/* 80435400 00432340  90 01 00 14 */	stw r0, 0x14(r1)
/* 80435404 00432344  C0 22 24 68 */	lfs f1, lbl_805207C8@sda21(r2)
/* 80435408 00432348  C0 03 00 20 */	lfs f0, 0x20(r3)
/* 8043540C 0043234C  EC 42 00 32 */	fmuls f2, f2, f0
/* 80435410 00432350  C0 02 24 58 */	lfs f0, lbl_805207B8@sda21(r2)
/* 80435414 00432354  EC 22 08 24 */	fdivs f1, f2, f1
/* 80435418 00432358  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8043541C 0043235C  40 80 00 08 */	bge .L_80435424
/* 80435420 00432360  FC 20 08 50 */	fneg f1, f1
.L_80435424:
/* 80435424 00432364  C0 02 24 78 */	lfs f0, lbl_805207D8@sda21(r2)
/* 80435428 00432368  3C 80 80 50 */	lis r4, sincosTable___5JMath@ha
/* 8043542C 0043236C  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 80435430 00432370  38 A4 71 A0 */	addi r5, r4, sincosTable___5JMath@l
/* 80435434 00432374  EC 01 00 32 */	fmuls f0, f1, f0
/* 80435438 00432378  C0 62 24 68 */	lfs f3, lbl_805207C8@sda21(r2)
/* 8043543C 0043237C  C0 22 24 A4 */	lfs f1, lbl_80520804@sda21(r2)
/* 80435440 00432380  2C 00 00 01 */	cmpwi r0, 1
/* 80435444 00432384  FC 00 00 1E */	fctiwz f0, f0
/* 80435448 00432388  D8 01 00 08 */	stfd f0, 8(r1)
/* 8043544C 0043238C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80435450 00432390  54 84 1C B8 */	rlwinm r4, r4, 3, 0x12, 0x1c
/* 80435454 00432394  7C 85 22 14 */	add r4, r5, r4
/* 80435458 00432398  C0 04 00 04 */	lfs f0, 4(r4)
/* 8043545C 0043239C  EC 03 00 28 */	fsubs f0, f3, f0
/* 80435460 004323A0  EC 81 00 32 */	fmuls f4, f1, f0
/* 80435464 004323A4  41 82 00 44 */	beq .L_804354A8
/* 80435468 004323A8  40 80 00 68 */	bge .L_804354D0
/* 8043546C 004323AC  2C 00 00 00 */	cmpwi r0, 0
/* 80435470 004323B0  40 80 00 08 */	bge .L_80435478
/* 80435474 004323B4  48 00 00 5C */	b .L_804354D0
.L_80435478:
/* 80435478 004323B8  80 8D 9A EC */	lwz r4, sys@sda21(r13)
/* 8043547C 004323BC  C0 62 24 A8 */	lfs f3, lbl_80520808@sda21(r2)
/* 80435480 004323C0  C0 44 00 54 */	lfs f2, 0x54(r4)
/* 80435484 004323C4  C0 23 00 24 */	lfs f1, 0x24(r3)
/* 80435488 004323C8  C0 02 24 58 */	lfs f0, lbl_805207B8@sda21(r2)
/* 8043548C 004323CC  EC 23 08 BC */	fnmsubs f1, f3, f2, f1
/* 80435490 004323D0  D0 23 00 24 */	stfs f1, 0x24(r3)
/* 80435494 004323D4  C0 23 00 24 */	lfs f1, 0x24(r3)
/* 80435498 004323D8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8043549C 004323DC  40 80 00 34 */	bge .L_804354D0
/* 804354A0 004323E0  D0 03 00 24 */	stfs f0, 0x24(r3)
/* 804354A4 004323E4  48 00 00 2C */	b .L_804354D0
.L_804354A8:
/* 804354A8 004323E8  80 8D 9A EC */	lwz r4, sys@sda21(r13)
/* 804354AC 004323EC  C0 42 24 A8 */	lfs f2, lbl_80520808@sda21(r2)
/* 804354B0 004323F0  C0 24 00 54 */	lfs f1, 0x54(r4)
/* 804354B4 004323F4  C0 03 00 24 */	lfs f0, 0x24(r3)
/* 804354B8 004323F8  EC 02 00 7A */	fmadds f0, f2, f1, f0
/* 804354BC 004323FC  D0 03 00 24 */	stfs f0, 0x24(r3)
/* 804354C0 00432400  C0 03 00 24 */	lfs f0, 0x24(r3)
/* 804354C4 00432404  FC 00 18 40 */	fcmpo cr0, f0, f3
/* 804354C8 00432408  40 81 00 08 */	ble .L_804354D0
/* 804354CC 0043240C  D0 63 00 24 */	stfs f3, 0x24(r3)
.L_804354D0:
/* 804354D0 00432410  80 8D 9A EC */	lwz r4, sys@sda21(r13)
/* 804354D4 00432414  C0 43 00 20 */	lfs f2, 0x20(r3)
/* 804354D8 00432418  C0 24 00 54 */	lfs f1, 0x54(r4)
/* 804354DC 0043241C  C0 02 24 68 */	lfs f0, lbl_805207C8@sda21(r2)
/* 804354E0 00432420  EC 22 08 2A */	fadds f1, f2, f1
/* 804354E4 00432424  D0 23 00 20 */	stfs f1, 0x20(r3)
/* 804354E8 00432428  C0 23 00 20 */	lfs f1, 0x20(r3)
/* 804354EC 0043242C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 804354F0 00432430  40 81 00 0C */	ble .L_804354FC
/* 804354F4 00432434  C0 02 24 58 */	lfs f0, lbl_805207B8@sda21(r2)
/* 804354F8 00432438  D0 03 00 20 */	stfs f0, 0x20(r3)
.L_804354FC:
/* 804354FC 0043243C  C0 02 24 90 */	lfs f0, lbl_805207F0@sda21(r2)
/* 80435500 00432440  C0 23 00 24 */	lfs f1, 0x24(r3)
/* 80435504 00432444  EC 40 01 32 */	fmuls f2, f0, f4
/* 80435508 00432448  C0 02 24 58 */	lfs f0, lbl_805207B8@sda21(r2)
/* 8043550C 0043244C  80 63 00 18 */	lwz r3, 0x18(r3)
/* 80435510 00432450  EC 22 00 72 */	fmuls f1, f2, f1
/* 80435514 00432454  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80435518 00432458  4C 41 13 82 */	cror 2, 1, 2
/* 8043551C 0043245C  40 82 00 10 */	bne .L_8043552C
/* 80435520 00432460  C0 02 24 A4 */	lfs f0, lbl_80520804@sda21(r2)
/* 80435524 00432464  EC 00 08 2A */	fadds f0, f0, f1
/* 80435528 00432468  48 00 00 0C */	b .L_80435534
.L_8043552C:
/* 8043552C 0043246C  C0 02 24 A4 */	lfs f0, lbl_80520804@sda21(r2)
/* 80435530 00432470  EC 01 00 28 */	fsubs f0, f1, f0
.L_80435534:
/* 80435534 00432474  FC 00 00 1E */	fctiwz f0, f0
/* 80435538 00432478  81 83 00 00 */	lwz r12, 0(r3)
/* 8043553C 0043247C  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 80435540 00432480  D8 01 00 08 */	stfd f0, 8(r1)
/* 80435544 00432484  80 01 00 0C */	lwz r0, 0xc(r1)
/* 80435548 00432488  54 04 06 3E */	clrlwi r4, r0, 0x18
/* 8043554C 0043248C  7D 89 03 A6 */	mtctr r12
/* 80435550 00432490  4E 80 04 21 */	bctrl 
/* 80435554 00432494  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80435558 00432498  7C 08 03 A6 */	mtlr r0
/* 8043555C 0043249C  38 21 00 10 */	addi r1, r1, 0x10
/* 80435560 004324A0  4E 80 00 20 */	blr 
.endfn update__Q35P2JME5Movie8AbtnPaneFv

.fn update__Q35P2JME5Movie13PodIconScreenFv, global
/* 80435564 004324A4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80435568 004324A8  7C 08 02 A6 */	mflr r0
/* 8043556C 004324AC  90 01 00 24 */	stw r0, 0x24(r1)
/* 80435570 004324B0  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80435574 004324B4  7C 7F 1B 78 */	mr r31, r3
/* 80435578 004324B8  80 03 01 48 */	lwz r0, 0x148(r3)
/* 8043557C 004324BC  2C 00 FF FF */	cmpwi r0, -1
/* 80435580 004324C0  41 82 04 00 */	beq .L_80435980
/* 80435584 004324C4  C0 3F 01 60 */	lfs f1, 0x160(r31)
/* 80435588 004324C8  3C 00 43 30 */	lis r0, 0x4330
/* 8043558C 004324CC  C0 02 24 68 */	lfs f0, lbl_805207C8@sda21(r2)
/* 80435590 004324D0  90 01 00 08 */	stw r0, 8(r1)
/* 80435594 004324D4  EC 01 00 2A */	fadds f0, f1, f0
/* 80435598 004324D8  C8 22 24 C0 */	lfd f1, lbl_80520820@sda21(r2)
/* 8043559C 004324DC  D0 1F 01 60 */	stfs f0, 0x160(r31)
/* 804355A0 004324E0  80 7F 01 5C */	lwz r3, 0x15c(r31)
/* 804355A4 004324E4  C0 5F 01 60 */	lfs f2, 0x160(r31)
/* 804355A8 004324E8  A8 63 00 06 */	lha r3, 6(r3)
/* 804355AC 004324EC  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 804355B0 004324F0  90 61 00 0C */	stw r3, 0xc(r1)
/* 804355B4 004324F4  C8 01 00 08 */	lfd f0, 8(r1)
/* 804355B8 004324F8  EC 00 08 28 */	fsubs f0, f0, f1
/* 804355BC 004324FC  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 804355C0 00432500  4C 41 13 82 */	cror 2, 1, 2
/* 804355C4 00432504  40 82 00 1C */	bne .L_804355E0
/* 804355C8 00432508  90 61 00 0C */	stw r3, 0xc(r1)
/* 804355CC 0043250C  90 01 00 08 */	stw r0, 8(r1)
/* 804355D0 00432510  C8 01 00 08 */	lfd f0, 8(r1)
/* 804355D4 00432514  EC 00 08 28 */	fsubs f0, f0, f1
/* 804355D8 00432518  EC 02 00 28 */	fsubs f0, f2, f0
/* 804355DC 0043251C  D0 1F 01 60 */	stfs f0, 0x160(r31)
.L_804355E0:
/* 804355E0 00432520  C0 3F 01 60 */	lfs f1, 0x160(r31)
/* 804355E4 00432524  3C 00 43 30 */	lis r0, 0x4330
/* 804355E8 00432528  80 7F 01 5C */	lwz r3, 0x15c(r31)
/* 804355EC 0043252C  C0 02 24 68 */	lfs f0, lbl_805207C8@sda21(r2)
/* 804355F0 00432530  D0 23 00 08 */	stfs f1, 8(r3)
/* 804355F4 00432534  C8 22 24 C0 */	lfd f1, lbl_80520820@sda21(r2)
/* 804355F8 00432538  C0 5F 01 58 */	lfs f2, 0x158(r31)
/* 804355FC 0043253C  90 01 00 08 */	stw r0, 8(r1)
/* 80435600 00432540  EC 02 00 2A */	fadds f0, f2, f0
/* 80435604 00432544  D0 1F 01 58 */	stfs f0, 0x158(r31)
/* 80435608 00432548  80 7F 01 54 */	lwz r3, 0x154(r31)
/* 8043560C 0043254C  C0 5F 01 58 */	lfs f2, 0x158(r31)
/* 80435610 00432550  A8 63 00 06 */	lha r3, 6(r3)
/* 80435614 00432554  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 80435618 00432558  90 61 00 0C */	stw r3, 0xc(r1)
/* 8043561C 0043255C  C8 01 00 08 */	lfd f0, 8(r1)
/* 80435620 00432560  EC 00 08 28 */	fsubs f0, f0, f1
/* 80435624 00432564  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80435628 00432568  4C 41 13 82 */	cror 2, 1, 2
/* 8043562C 0043256C  40 82 00 1C */	bne .L_80435648
/* 80435630 00432570  90 61 00 0C */	stw r3, 0xc(r1)
/* 80435634 00432574  90 01 00 08 */	stw r0, 8(r1)
/* 80435638 00432578  C8 01 00 08 */	lfd f0, 8(r1)
/* 8043563C 0043257C  EC 00 08 28 */	fsubs f0, f0, f1
/* 80435640 00432580  EC 02 00 28 */	fsubs f0, f2, f0
/* 80435644 00432584  D0 1F 01 58 */	stfs f0, 0x158(r31)
.L_80435648:
/* 80435648 00432588  C0 3F 01 58 */	lfs f1, 0x158(r31)
/* 8043564C 0043258C  3C 00 43 30 */	lis r0, 0x4330
/* 80435650 00432590  80 7F 01 54 */	lwz r3, 0x154(r31)
/* 80435654 00432594  C0 02 24 68 */	lfs f0, lbl_805207C8@sda21(r2)
/* 80435658 00432598  D0 23 00 08 */	stfs f1, 8(r3)
/* 8043565C 0043259C  C8 22 24 C0 */	lfd f1, lbl_80520820@sda21(r2)
/* 80435660 004325A0  C0 5F 01 50 */	lfs f2, 0x150(r31)
/* 80435664 004325A4  90 01 00 08 */	stw r0, 8(r1)
/* 80435668 004325A8  EC 02 00 2A */	fadds f0, f2, f0
/* 8043566C 004325AC  D0 1F 01 50 */	stfs f0, 0x150(r31)
/* 80435670 004325B0  80 7F 01 4C */	lwz r3, 0x14c(r31)
/* 80435674 004325B4  C0 5F 01 50 */	lfs f2, 0x150(r31)
/* 80435678 004325B8  A8 63 00 06 */	lha r3, 6(r3)
/* 8043567C 004325BC  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 80435680 004325C0  90 61 00 0C */	stw r3, 0xc(r1)
/* 80435684 004325C4  C8 01 00 08 */	lfd f0, 8(r1)
/* 80435688 004325C8  EC 00 08 28 */	fsubs f0, f0, f1
/* 8043568C 004325CC  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80435690 004325D0  4C 41 13 82 */	cror 2, 1, 2
/* 80435694 004325D4  40 82 00 1C */	bne .L_804356B0
/* 80435698 004325D8  90 61 00 0C */	stw r3, 0xc(r1)
/* 8043569C 004325DC  90 01 00 08 */	stw r0, 8(r1)
/* 804356A0 004325E0  C8 01 00 08 */	lfd f0, 8(r1)
/* 804356A4 004325E4  EC 00 08 28 */	fsubs f0, f0, f1
/* 804356A8 004325E8  EC 02 00 28 */	fsubs f0, f2, f0
/* 804356AC 004325EC  D0 1F 01 50 */	stfs f0, 0x150(r31)
.L_804356B0:
/* 804356B0 004325F0  C0 1F 01 50 */	lfs f0, 0x150(r31)
/* 804356B4 004325F4  7F E3 FB 78 */	mr r3, r31
/* 804356B8 004325F8  80 9F 01 4C */	lwz r4, 0x14c(r31)
/* 804356BC 004325FC  D0 04 00 08 */	stfs f0, 8(r4)
/* 804356C0 00432600  4B C0 B4 6D */	bl animation__9J2DScreenFv
/* 804356C4 00432604  C0 3F 01 74 */	lfs f1, 0x174(r31)
/* 804356C8 00432608  C0 1F 01 68 */	lfs f0, 0x168(r31)
/* 804356CC 0043260C  C0 7F 01 78 */	lfs f3, 0x178(r31)
/* 804356D0 00432610  EC C1 00 28 */	fsubs f6, f1, f0
/* 804356D4 00432614  C0 5F 01 6C */	lfs f2, 0x16c(r31)
/* 804356D8 00432618  C0 3F 01 70 */	lfs f1, 0x170(r31)
/* 804356DC 0043261C  C0 1F 01 64 */	lfs f0, 0x164(r31)
/* 804356E0 00432620  ED 63 10 28 */	fsubs f11, f3, f2
/* 804356E4 00432624  EC 46 01 B2 */	fmuls f2, f6, f6
/* 804356E8 00432628  EC 61 00 28 */	fsubs f3, f1, f0
/* 804356EC 0043262C  C0 22 24 58 */	lfs f1, lbl_805207B8@sda21(r2)
/* 804356F0 00432630  EC 8B 02 F2 */	fmuls f4, f11, f11
/* 804356F4 00432634  EC 03 10 FA */	fmadds f0, f3, f3, f2
/* 804356F8 00432638  EC 04 00 2A */	fadds f0, f4, f0
/* 804356FC 0043263C  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 80435700 00432640  40 81 00 14 */	ble .L_80435714
/* 80435704 00432644  40 81 00 14 */	ble .L_80435718
/* 80435708 00432648  FC 20 00 34 */	frsqrte f1, f0
/* 8043570C 0043264C  EC 01 00 32 */	fmuls f0, f1, f0
/* 80435710 00432650  48 00 00 08 */	b .L_80435718
.L_80435714:
/* 80435714 00432654  FC 00 08 90 */	fmr f0, f1
.L_80435718:
/* 80435718 00432658  C0 22 24 DC */	lfs f1, lbl_8052083C@sda21(r2)
/* 8043571C 0043265C  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 80435720 00432660  40 81 01 40 */	ble .L_80435860
/* 80435724 00432664  C1 22 24 68 */	lfs f9, lbl_805207C8@sda21(r2)
/* 80435728 00432668  C0 BF 01 80 */	lfs f5, 0x180(r31)
/* 8043572C 0043266C  ED 49 00 24 */	fdivs f10, f9, f0
/* 80435730 00432670  C0 FF 01 7C */	lfs f7, 0x17c(r31)
/* 80435734 00432674  C1 1F 01 84 */	lfs f8, 0x184(r31)
/* 80435738 00432678  C0 22 24 A4 */	lfs f1, lbl_80520804@sda21(r2)
/* 8043573C 0043267C  C0 82 24 80 */	lfs f4, lbl_805207E0@sda21(r2)
/* 80435740 00432680  C0 5F 01 7C */	lfs f2, 0x17c(r31)
/* 80435744 00432684  ED A6 02 B2 */	fmuls f13, f6, f10
/* 80435748 00432688  C0 C2 24 E0 */	lfs f6, lbl_80520840@sda21(r2)
/* 8043574C 0043268C  ED 83 02 B2 */	fmuls f12, f3, f10
/* 80435750 00432690  C0 62 24 58 */	lfs f3, lbl_805207B8@sda21(r2)
/* 80435754 00432694  ED 4B 02 B2 */	fmuls f10, f11, f10
/* 80435758 00432698  EC AD 01 72 */	fmuls f5, f13, f5
/* 8043575C 0043269C  EC AC 29 FA */	fmadds f5, f12, f7, f5
/* 80435760 004326A0  EC AA 2A 3A */	fmadds f5, f10, f8, f5
/* 80435764 004326A4  EC A9 28 2A */	fadds f5, f9, f5
/* 80435768 004326A8  EC A5 00 72 */	fmuls f5, f5, f1
/* 8043576C 004326AC  EC 29 28 28 */	fsubs f1, f9, f5
/* 80435770 004326B0  EC A5 01 72 */	fmuls f5, f5, f5
/* 80435774 004326B4  EC 29 08 2A */	fadds f1, f9, f1
/* 80435778 004326B8  EC A0 01 72 */	fmuls f5, f0, f5
/* 8043577C 004326BC  EC 84 00 72 */	fmuls f4, f4, f1
/* 80435780 004326C0  EC 26 01 72 */	fmuls f1, f6, f5
/* 80435784 004326C4  ED 8C 01 32 */	fmuls f12, f12, f4
/* 80435788 004326C8  ED AD 01 32 */	fmuls f13, f13, f4
/* 8043578C 004326CC  ED 4A 01 32 */	fmuls f10, f10, f4
/* 80435790 004326D0  EC 42 60 2A */	fadds f2, f2, f12
/* 80435794 004326D4  D0 5F 01 7C */	stfs f2, 0x17c(r31)
/* 80435798 004326D8  C0 5F 01 80 */	lfs f2, 0x180(r31)
/* 8043579C 004326DC  EC 42 68 2A */	fadds f2, f2, f13
/* 804357A0 004326E0  D0 5F 01 80 */	stfs f2, 0x180(r31)
/* 804357A4 004326E4  C0 5F 01 84 */	lfs f2, 0x184(r31)
/* 804357A8 004326E8  EC 42 50 2A */	fadds f2, f2, f10
/* 804357AC 004326EC  D0 5F 01 84 */	stfs f2, 0x184(r31)
/* 804357B0 004326F0  C0 BF 01 7C */	lfs f5, 0x17c(r31)
/* 804357B4 004326F4  C0 9F 01 80 */	lfs f4, 0x180(r31)
/* 804357B8 004326F8  C0 DF 01 84 */	lfs f6, 0x184(r31)
/* 804357BC 004326FC  EC 45 01 72 */	fmuls f2, f5, f5
/* 804357C0 00432700  EC 84 01 32 */	fmuls f4, f4, f4
/* 804357C4 00432704  EC C6 01 B2 */	fmuls f6, f6, f6
/* 804357C8 00432708  EC 42 20 2A */	fadds f2, f2, f4
/* 804357CC 0043270C  EC 46 10 2A */	fadds f2, f6, f2
/* 804357D0 00432710  FC 02 18 40 */	fcmpo cr0, f2, f3
/* 804357D4 00432714  40 81 00 20 */	ble .L_804357F4
/* 804357D8 00432718  EC 45 21 7A */	fmadds f2, f5, f5, f4
/* 804357DC 0043271C  EC 86 10 2A */	fadds f4, f6, f2
/* 804357E0 00432720  FC 04 18 40 */	fcmpo cr0, f4, f3
/* 804357E4 00432724  40 81 00 14 */	ble .L_804357F8
/* 804357E8 00432728  FC 40 20 34 */	frsqrte f2, f4
/* 804357EC 0043272C  EC 82 01 32 */	fmuls f4, f2, f4
/* 804357F0 00432730  48 00 00 08 */	b .L_804357F8
.L_804357F4:
/* 804357F4 00432734  FC 80 18 90 */	fmr f4, f3
.L_804357F8:
/* 804357F8 00432738  C0 42 24 58 */	lfs f2, lbl_805207B8@sda21(r2)
/* 804357FC 0043273C  FC 04 10 40 */	fcmpo cr0, f4, f2
/* 80435800 00432740  40 81 00 30 */	ble .L_80435830
/* 80435804 00432744  C0 62 24 68 */	lfs f3, lbl_805207C8@sda21(r2)
/* 80435808 00432748  C0 5F 01 7C */	lfs f2, 0x17c(r31)
/* 8043580C 0043274C  EC 63 20 24 */	fdivs f3, f3, f4
/* 80435810 00432750  EC 42 00 F2 */	fmuls f2, f2, f3
/* 80435814 00432754  D0 5F 01 7C */	stfs f2, 0x17c(r31)
/* 80435818 00432758  C0 5F 01 80 */	lfs f2, 0x180(r31)
/* 8043581C 0043275C  EC 42 00 F2 */	fmuls f2, f2, f3
/* 80435820 00432760  D0 5F 01 80 */	stfs f2, 0x180(r31)
/* 80435824 00432764  C0 5F 01 84 */	lfs f2, 0x184(r31)
/* 80435828 00432768  EC 42 00 F2 */	fmuls f2, f2, f3
/* 8043582C 0043276C  D0 5F 01 84 */	stfs f2, 0x184(r31)
.L_80435830:
/* 80435830 00432770  C0 7F 01 7C */	lfs f3, 0x17c(r31)
/* 80435834 00432774  C0 5F 01 64 */	lfs f2, 0x164(r31)
/* 80435838 00432778  EC 43 10 7A */	fmadds f2, f3, f1, f2
/* 8043583C 0043277C  D0 5F 01 64 */	stfs f2, 0x164(r31)
/* 80435840 00432780  C0 7F 01 80 */	lfs f3, 0x180(r31)
/* 80435844 00432784  C0 5F 01 68 */	lfs f2, 0x168(r31)
/* 80435848 00432788  EC 43 10 7A */	fmadds f2, f3, f1, f2
/* 8043584C 0043278C  D0 5F 01 68 */	stfs f2, 0x168(r31)
/* 80435850 00432790  C0 7F 01 84 */	lfs f3, 0x184(r31)
/* 80435854 00432794  C0 5F 01 6C */	lfs f2, 0x16c(r31)
/* 80435858 00432798  EC 23 10 7A */	fmadds f1, f3, f1, f2
/* 8043585C 0043279C  D0 3F 01 6C */	stfs f1, 0x16c(r31)
.L_80435860:
/* 80435860 004327A0  C0 7F 01 6C */	lfs f3, 0x16c(r31)
/* 80435864 004327A4  C0 42 24 E4 */	lfs f2, lbl_80520844@sda21(r2)
/* 80435868 004327A8  C0 22 24 A4 */	lfs f1, lbl_80520804@sda21(r2)
/* 8043586C 004327AC  EC 43 10 24 */	fdivs f2, f3, f2
/* 80435870 004327B0  FC C0 10 90 */	fmr f6, f2
/* 80435874 004327B4  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 80435878 004327B8  40 80 00 08 */	bge .L_80435880
/* 8043587C 004327BC  FC C0 08 90 */	fmr f6, f1
.L_80435880:
/* 80435880 004327C0  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80435884 004327C4  C0 22 24 68 */	lfs f1, lbl_805207C8@sda21(r2)
/* 80435888 004327C8  88 03 00 2F */	lbz r0, 0x2f(r3)
/* 8043588C 004327CC  EC C6 08 2A */	fadds f6, f6, f1
/* 80435890 004327D0  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 80435894 004327D4  41 82 00 38 */	beq .L_804358CC
/* 80435898 004327D8  C0 5F 01 64 */	lfs f2, 0x164(r31)
/* 8043589C 004327DC  C0 22 24 B8 */	lfs f1, lbl_80520818@sda21(r2)
/* 804358A0 004327E0  C0 BF 01 68 */	lfs f5, 0x168(r31)
/* 804358A4 004327E4  C0 82 24 B4 */	lfs f4, lbl_80520814@sda21(r2)
/* 804358A8 004327E8  EC 62 08 28 */	fsubs f3, f2, f1
/* 804358AC 004327EC  C0 42 24 3C */	lfs f2, mstTuningTransX__Q29P2DScreen10Mgr_tuning@sda21(r2)
/* 804358B0 004327F0  EC 85 20 28 */	fsubs f4, f5, f4
/* 804358B4 004327F4  C0 22 24 40 */	lfs f1, mstTuningTransY__Q29P2DScreen10Mgr_tuning@sda21(r2)
/* 804358B8 004327F8  EC 43 10 2A */	fadds f2, f3, f2
/* 804358BC 004327FC  EC 24 08 2A */	fadds f1, f4, f1
/* 804358C0 00432800  D0 5F 01 40 */	stfs f2, 0x140(r31)
/* 804358C4 00432804  D0 3F 01 44 */	stfs f1, 0x144(r31)
/* 804358C8 00432808  48 00 00 34 */	b .L_804358FC
.L_804358CC:
/* 804358CC 0043280C  C0 5F 01 64 */	lfs f2, 0x164(r31)
/* 804358D0 00432810  C0 22 24 B8 */	lfs f1, lbl_80520818@sda21(r2)
/* 804358D4 00432814  C0 BF 01 68 */	lfs f5, 0x168(r31)
/* 804358D8 00432818  C0 82 24 5C */	lfs f4, lbl_805207BC@sda21(r2)
/* 804358DC 0043281C  EC 62 08 28 */	fsubs f3, f2, f1
/* 804358E0 00432820  C0 42 24 3C */	lfs f2, mstTuningTransX__Q29P2DScreen10Mgr_tuning@sda21(r2)
/* 804358E4 00432824  EC 85 20 28 */	fsubs f4, f5, f4
/* 804358E8 00432828  C0 22 24 40 */	lfs f1, mstTuningTransY__Q29P2DScreen10Mgr_tuning@sda21(r2)
/* 804358EC 0043282C  EC 43 10 2A */	fadds f2, f3, f2
/* 804358F0 00432830  EC 24 08 2A */	fadds f1, f4, f1
/* 804358F4 00432834  D0 5F 01 40 */	stfs f2, 0x140(r31)
/* 804358F8 00432838  D0 3F 01 44 */	stfs f1, 0x144(r31)
.L_804358FC:
/* 804358FC 0043283C  C0 22 24 34 */	lfs f1, mstTuningScaleX__Q29P2DScreen10Mgr_tuning@sda21(r2)
/* 80435900 00432840  C0 42 24 38 */	lfs f2, mstTuningScaleY__Q29P2DScreen10Mgr_tuning@sda21(r2)
/* 80435904 00432844  EC 66 00 72 */	fmuls f3, f6, f1
/* 80435908 00432848  C0 22 24 5C */	lfs f1, lbl_805207BC@sda21(r2)
/* 8043590C 0043284C  EC 46 00 B2 */	fmuls f2, f6, f2
/* 80435910 00432850  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 80435914 00432854  D0 7F 01 38 */	stfs f3, 0x138(r31)
/* 80435918 00432858  D0 5F 01 3C */	stfs f2, 0x13c(r31)
/* 8043591C 0043285C  40 80 00 40 */	bge .L_8043595C
/* 80435920 00432860  80 1F 01 48 */	lwz r0, 0x148(r31)
/* 80435924 00432864  2C 00 00 01 */	cmpwi r0, 1
/* 80435928 00432868  41 82 00 34 */	beq .L_8043595C
/* 8043592C 0043286C  40 80 00 10 */	bge .L_8043593C
/* 80435930 00432870  2C 00 00 00 */	cmpwi r0, 0
/* 80435934 00432874  40 80 00 14 */	bge .L_80435948
/* 80435938 00432878  48 00 00 24 */	b .L_8043595C
.L_8043593C:
/* 8043593C 0043287C  2C 00 00 03 */	cmpwi r0, 3
/* 80435940 00432880  40 80 00 1C */	bge .L_8043595C
/* 80435944 00432884  48 00 00 10 */	b .L_80435954
.L_80435948:
/* 80435948 00432888  38 00 00 01 */	li r0, 1
/* 8043594C 0043288C  90 1F 01 48 */	stw r0, 0x148(r31)
/* 80435950 00432890  48 00 00 0C */	b .L_8043595C
.L_80435954:
/* 80435954 00432894  38 00 00 03 */	li r0, 3
/* 80435958 00432898  90 1F 01 48 */	stw r0, 0x148(r31)
.L_8043595C:
/* 8043595C 0043289C  80 1F 01 48 */	lwz r0, 0x148(r31)
/* 80435960 004328A0  2C 00 00 00 */	cmpwi r0, 0
/* 80435964 004328A4  41 82 00 0C */	beq .L_80435970
/* 80435968 004328A8  2C 00 00 01 */	cmpwi r0, 1
/* 8043596C 004328AC  40 82 00 14 */	bne .L_80435980
.L_80435970:
/* 80435970 004328B0  80 6D 98 58 */	lwz r3, spSysIF__8PSSystem@sda21(r13)
/* 80435974 004328B4  38 80 40 07 */	li r4, 0x4007
/* 80435978 004328B8  38 A0 00 00 */	li r5, 0
/* 8043597C 004328BC  4B F0 2C B5 */	bl playSystemSe__Q28PSSystem5SysIFFUlUl
.L_80435980:
/* 80435980 004328C0  7F E3 FB 78 */	mr r3, r31
/* 80435984 004328C4  4B FF F3 5D */	bl update__Q29P2DScreen3MgrFv
/* 80435988 004328C8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8043598C 004328CC  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80435990 004328D0  7C 08 03 A6 */	mtlr r0
/* 80435994 004328D4  38 21 00 20 */	addi r1, r1, 0x20
/* 80435998 004328D8  4E 80 00 20 */	blr 
.endfn update__Q35P2JME5Movie13PodIconScreenFv

.fn __ct__Q35P2JME5Movie8TControlFv, global
/* 8043599C 004328DC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 804359A0 004328E0  7C 08 02 A6 */	mflr r0
/* 804359A4 004328E4  90 01 00 14 */	stw r0, 0x14(r1)
/* 804359A8 004328E8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 804359AC 004328EC  7C 7F 1B 78 */	mr r31, r3
/* 804359B0 004328F0  48 00 A7 3D */	bl __ct__Q35P2JME6Window8TControlFv
/* 804359B4 004328F4  3C 60 80 4F */	lis r3, __vt__Q35P2JME5Movie8TControl@ha
/* 804359B8 004328F8  38 00 00 00 */	li r0, 0
/* 804359BC 004328FC  38 83 C6 4C */	addi r4, r3, __vt__Q35P2JME5Movie8TControl@l
/* 804359C0 00432900  7F E3 FB 78 */	mr r3, r31
/* 804359C4 00432904  90 9F 00 00 */	stw r4, 0(r31)
/* 804359C8 00432908  90 1F 00 5C */	stw r0, 0x5c(r31)
/* 804359CC 0043290C  90 1F 00 60 */	stw r0, 0x60(r31)
/* 804359D0 00432910  90 1F 00 64 */	stw r0, 0x64(r31)
/* 804359D4 00432914  98 1F 00 68 */	stb r0, 0x68(r31)
/* 804359D8 00432918  90 1F 00 6C */	stw r0, 0x6c(r31)
/* 804359DC 0043291C  98 1F 00 70 */	stb r0, 0x70(r31)
/* 804359E0 00432920  98 1F 00 71 */	stb r0, 0x71(r31)
/* 804359E4 00432924  98 1F 00 72 */	stb r0, 0x72(r31)
/* 804359E8 00432928  98 1F 00 73 */	stb r0, 0x73(r31)
/* 804359EC 0043292C  98 1F 00 70 */	stb r0, 0x70(r31)
/* 804359F0 00432930  98 1F 00 71 */	stb r0, 0x71(r31)
/* 804359F4 00432934  98 1F 00 72 */	stb r0, 0x72(r31)
/* 804359F8 00432938  98 1F 00 73 */	stb r0, 0x73(r31)
/* 804359FC 0043293C  80 1F 00 70 */	lwz r0, 0x70(r31)
/* 80435A00 00432940  60 00 00 01 */	ori r0, r0, 1
/* 80435A04 00432944  90 1F 00 70 */	stw r0, 0x70(r31)
/* 80435A08 00432948  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80435A0C 0043294C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80435A10 00432950  7C 08 03 A6 */	mtlr r0
/* 80435A14 00432954  38 21 00 10 */	addi r1, r1, 0x10
/* 80435A18 00432958  4E 80 00 20 */	blr 
.endfn __ct__Q35P2JME5Movie8TControlFv

.fn __dt__Q35P2JME6Window8TControlFv, weak
/* 80435A1C 0043295C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80435A20 00432960  7C 08 02 A6 */	mflr r0
/* 80435A24 00432964  90 01 00 14 */	stw r0, 0x14(r1)
/* 80435A28 00432968  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80435A2C 0043296C  7C 9F 23 78 */	mr r31, r4
/* 80435A30 00432970  93 C1 00 08 */	stw r30, 8(r1)
/* 80435A34 00432974  7C 7E 1B 79 */	or. r30, r3, r3
/* 80435A38 00432978  41 82 00 38 */	beq .L_80435A70
/* 80435A3C 0043297C  3C 80 80 4F */	lis r4, __vt__Q35P2JME6Window8TControl@ha
/* 80435A40 00432980  38 04 CC 5C */	addi r0, r4, __vt__Q35P2JME6Window8TControl@l
/* 80435A44 00432984  90 1E 00 00 */	stw r0, 0(r30)
/* 80435A48 00432988  41 82 00 18 */	beq .L_80435A60
/* 80435A4C 0043298C  3C A0 80 4F */	lis r5, __vt__Q25P2JME8TControl@ha
/* 80435A50 00432990  38 80 00 00 */	li r4, 0
/* 80435A54 00432994  38 05 C9 F0 */	addi r0, r5, __vt__Q25P2JME8TControl@l
/* 80435A58 00432998  90 1E 00 00 */	stw r0, 0(r30)
/* 80435A5C 0043299C  4B BD 29 8D */	bl __dt__Q28JMessage8TControlFv
.L_80435A60:
/* 80435A60 004329A0  7F E0 07 35 */	extsh. r0, r31
/* 80435A64 004329A4  40 81 00 0C */	ble .L_80435A70
/* 80435A68 004329A8  7F C3 F3 78 */	mr r3, r30
/* 80435A6C 004329AC  4B BE E6 49 */	bl __dl__FPv
.L_80435A70:
/* 80435A70 004329B0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80435A74 004329B4  7F C3 F3 78 */	mr r3, r30
/* 80435A78 004329B8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80435A7C 004329BC  83 C1 00 08 */	lwz r30, 8(r1)
/* 80435A80 004329C0  7C 08 03 A6 */	mtlr r0
/* 80435A84 004329C4  38 21 00 10 */	addi r1, r1, 0x10
/* 80435A88 004329C8  4E 80 00 20 */	blr 
.endfn __dt__Q35P2JME6Window8TControlFv

.fn onInit__Q35P2JME5Movie8TControlFv, global
/* 80435A8C 004329CC  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 80435A90 004329D0  7C 08 02 A6 */	mflr r0
/* 80435A94 004329D4  3C 80 80 4A */	lis r4, lbl_8049A6E0@ha
/* 80435A98 004329D8  38 A0 00 00 */	li r5, 0
/* 80435A9C 004329DC  90 01 00 44 */	stw r0, 0x44(r1)
/* 80435AA0 004329E0  BF 61 00 2C */	stmw r27, 0x2c(r1)
/* 80435AA4 004329E4  7C 7D 1B 78 */	mr r29, r3
/* 80435AA8 004329E8  3B E4 A6 E0 */	addi r31, r4, lbl_8049A6E0@l
/* 80435AAC 004329EC  38 9F 00 7C */	addi r4, r31, 0x7c
/* 80435AB0 004329F0  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80435AB4 004329F4  4B FE D8 A9 */	bl heapStatusStart__6SystemFPcP7JKRHeap
/* 80435AB8 004329F8  80 6D 9B D8 */	lwz r3, gP2JMEMgr@sda21(r13)
/* 80435ABC 004329FC  28 03 00 00 */	cmplwi r3, 0
/* 80435AC0 00432A00  41 82 00 20 */	beq .L_80435AE0
/* 80435AC4 00432A04  80 83 00 18 */	lwz r4, 0x18(r3)
/* 80435AC8 00432A08  7F A3 EB 78 */	mr r3, r29
/* 80435ACC 00432A0C  48 00 30 01 */	bl setFont__Q25P2JME8TControlFP7JUTFont
/* 80435AD0 00432A10  80 8D 9B D8 */	lwz r4, gP2JMEMgr@sda21(r13)
/* 80435AD4 00432A14  7F A3 EB 78 */	mr r3, r29
/* 80435AD8 00432A18  80 84 00 18 */	lwz r4, 0x18(r4)
/* 80435ADC 00432A1C  48 00 30 5D */	bl setRubyFont__Q25P2JME8TControlFP7JUTFont
.L_80435AE0:
/* 80435AE0 00432A20  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80435AE4 00432A24  38 9F 00 9C */	addi r4, r31, 0x9c
/* 80435AE8 00432A28  38 A0 00 00 */	li r5, 0
/* 80435AEC 00432A2C  4B FE D8 71 */	bl heapStatusStart__6SystemFPcP7JKRHeap
/* 80435AF0 00432A30  38 7F 00 AC */	addi r3, r31, 0xac
/* 80435AF4 00432A34  38 80 00 01 */	li r4, 1
/* 80435AF8 00432A38  38 A0 00 00 */	li r5, 0
/* 80435AFC 00432A3C  38 C0 00 01 */	li r6, 1
/* 80435B00 00432A40  4B BE 56 31 */	bl mount__10JKRArchiveFPCcQ210JKRArchive10EMountModeP7JKRHeapQ210JKRArchive15EMountDirection
/* 80435B04 00432A44  7C 7B 1B 79 */	or. r27, r3, r3
/* 80435B08 00432A48  41 82 02 E8 */	beq .L_80435DF0
/* 80435B0C 00432A4C  38 60 01 58 */	li r3, 0x158
/* 80435B10 00432A50  4B BE E3 95 */	bl __nw__FUl
/* 80435B14 00432A54  7C 7C 1B 79 */	or. r28, r3, r3
/* 80435B18 00432A58  41 82 00 14 */	beq .L_80435B2C
/* 80435B1C 00432A5C  4B FF F2 91 */	bl __ct__Q29P2DScreen10Mgr_tuningFv
/* 80435B20 00432A60  3C 60 80 4F */	lis r3, __vt__Q35P2JME5Movie19MessageWindowScreen@ha
/* 80435B24 00432A64  38 03 C6 94 */	addi r0, r3, __vt__Q35P2JME5Movie19MessageWindowScreen@l
/* 80435B28 00432A68  90 1C 00 00 */	stw r0, 0(r28)
.L_80435B2C:
/* 80435B2C 00432A6C  93 9D 00 5C */	stw r28, 0x5c(r29)
/* 80435B30 00432A70  7F 66 DB 78 */	mr r6, r27
/* 80435B34 00432A74  38 9F 00 6C */	addi r4, r31, 0x6c
/* 80435B38 00432A78  38 A0 00 00 */	li r5, 0
/* 80435B3C 00432A7C  83 DD 00 5C */	lwz r30, 0x5c(r29)
/* 80435B40 00432A80  7F C3 F3 78 */	mr r3, r30
/* 80435B44 00432A84  4B C0 9A E1 */	bl set__9J2DScreenFPCcUlP10JKRArchive
/* 80435B48 00432A88  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80435B4C 00432A8C  40 82 00 18 */	bne .L_80435B64
/* 80435B50 00432A90  38 7F 00 1C */	addi r3, r31, 0x1c
/* 80435B54 00432A94  38 BF 00 30 */	addi r5, r31, 0x30
/* 80435B58 00432A98  38 80 02 2A */	li r4, 0x22a
/* 80435B5C 00432A9C  4C C6 31 82 */	crclr 6
/* 80435B60 00432AA0  4B BF 4A E1 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80435B64:
/* 80435B64 00432AA4  38 60 00 50 */	li r3, 0x50
/* 80435B68 00432AA8  4B BE E3 3D */	bl __nw__FUl
/* 80435B6C 00432AAC  7C 7C 1B 79 */	or. r28, r3, r3
/* 80435B70 00432AB0  41 82 00 8C */	beq .L_80435BFC
/* 80435B74 00432AB4  4B FD B8 1D */	bl __ct__5CNodeFv
/* 80435B78 00432AB8  3C 60 80 4D */	lis r3, __vt__Q29P2DScreen4Node@ha
/* 80435B7C 00432ABC  3C A0 80 4D */	lis r5, __vt__Q29P2DScreen12CallBackNode@ha
/* 80435B80 00432AC0  38 03 7B 0C */	addi r0, r3, __vt__Q29P2DScreen4Node@l
/* 80435B84 00432AC4  38 C0 00 00 */	li r6, 0
/* 80435B88 00432AC8  90 1C 00 00 */	stw r0, 0(r28)
/* 80435B8C 00432ACC  3C 80 80 4F */	lis r4, __vt__Q35P2JME5Movie10WindowPane@ha
/* 80435B90 00432AD0  38 A5 7F 2C */	addi r5, r5, __vt__Q29P2DScreen12CallBackNode@l
/* 80435B94 00432AD4  C0 02 24 58 */	lfs f0, lbl_805207B8@sda21(r2)
/* 80435B98 00432AD8  90 DC 00 18 */	stw r6, 0x18(r28)
/* 80435B9C 00432ADC  38 04 C7 F0 */	addi r0, r4, __vt__Q35P2JME5Movie10WindowPane@l
/* 80435BA0 00432AE0  3C 60 80 51 */	lis r3, "zero__10Vector3<f>"@ha
/* 80435BA4 00432AE4  90 BC 00 00 */	stw r5, 0(r28)
/* 80435BA8 00432AE8  90 1C 00 00 */	stw r0, 0(r28)
/* 80435BAC 00432AEC  90 DC 00 1C */	stw r6, 0x1c(r28)
/* 80435BB0 00432AF0  D0 1C 00 20 */	stfs f0, 0x20(r28)
/* 80435BB4 00432AF4  C4 03 41 E4 */	lfsu f0, "zero__10Vector3<f>"@l(r3)
/* 80435BB8 00432AF8  D0 1C 00 28 */	stfs f0, 0x28(r28)
/* 80435BBC 00432AFC  C0 03 00 04 */	lfs f0, 4(r3)
/* 80435BC0 00432B00  D0 1C 00 2C */	stfs f0, 0x2c(r28)
/* 80435BC4 00432B04  C0 03 00 08 */	lfs f0, 8(r3)
/* 80435BC8 00432B08  D0 1C 00 30 */	stfs f0, 0x30(r28)
/* 80435BCC 00432B0C  C0 03 00 00 */	lfs f0, 0(r3)
/* 80435BD0 00432B10  D0 1C 00 38 */	stfs f0, 0x38(r28)
/* 80435BD4 00432B14  C0 03 00 04 */	lfs f0, 4(r3)
/* 80435BD8 00432B18  D0 1C 00 3C */	stfs f0, 0x3c(r28)
/* 80435BDC 00432B1C  C0 03 00 08 */	lfs f0, 8(r3)
/* 80435BE0 00432B20  D0 1C 00 40 */	stfs f0, 0x40(r28)
/* 80435BE4 00432B24  C0 03 00 00 */	lfs f0, 0(r3)
/* 80435BE8 00432B28  D0 1C 00 44 */	stfs f0, 0x44(r28)
/* 80435BEC 00432B2C  C0 03 00 04 */	lfs f0, 4(r3)
/* 80435BF0 00432B30  D0 1C 00 48 */	stfs f0, 0x48(r28)
/* 80435BF4 00432B34  C0 03 00 08 */	lfs f0, 8(r3)
/* 80435BF8 00432B38  D0 1C 00 4C */	stfs f0, 0x4c(r28)
.L_80435BFC:
/* 80435BFC 00432B3C  93 9E 01 48 */	stw r28, 0x148(r30)
/* 80435C00 00432B40  3C A0 6C 6C */	lis r5, 0x6C6C3030@ha
/* 80435C04 00432B44  3C 80 6D 67 */	lis r4, 0x6D676E75@ha
/* 80435C08 00432B48  7F C3 F3 78 */	mr r3, r30
/* 80435C0C 00432B4C  80 FE 01 48 */	lwz r7, 0x148(r30)
/* 80435C10 00432B50  38 C5 30 30 */	addi r6, r5, 0x6C6C3030@l
/* 80435C14 00432B54  38 A4 6E 75 */	addi r5, r4, 0x6D676E75@l
/* 80435C18 00432B58  4B FF EF 0D */	bl addCallBack__Q29P2DScreen3MgrFUxPQ29P2DScreen4Node
/* 80435C1C 00432B5C  38 60 00 28 */	li r3, 0x28
/* 80435C20 00432B60  4B BE E2 85 */	bl __nw__FUl
/* 80435C24 00432B64  7C 7C 1B 79 */	or. r28, r3, r3
/* 80435C28 00432B68  41 82 00 4C */	beq .L_80435C74
/* 80435C2C 00432B6C  4B FD B7 65 */	bl __ct__5CNodeFv
/* 80435C30 00432B70  3C 60 80 4D */	lis r3, __vt__Q29P2DScreen4Node@ha
/* 80435C34 00432B74  3C 80 80 4D */	lis r4, __vt__Q29P2DScreen12CallBackNode@ha
/* 80435C38 00432B78  38 03 7B 0C */	addi r0, r3, __vt__Q29P2DScreen4Node@l
/* 80435C3C 00432B7C  3C 60 80 4F */	lis r3, __vt__Q35P2JME5Movie8AbtnPane@ha
/* 80435C40 00432B80  90 1C 00 00 */	stw r0, 0(r28)
/* 80435C44 00432B84  38 A0 00 00 */	li r5, 0
/* 80435C48 00432B88  38 84 7F 2C */	addi r4, r4, __vt__Q29P2DScreen12CallBackNode@l
/* 80435C4C 00432B8C  38 03 C7 D4 */	addi r0, r3, __vt__Q35P2JME5Movie8AbtnPane@l
/* 80435C50 00432B90  90 BC 00 18 */	stw r5, 0x18(r28)
/* 80435C54 00432B94  C0 22 24 58 */	lfs f1, lbl_805207B8@sda21(r2)
/* 80435C58 00432B98  90 9C 00 00 */	stw r4, 0(r28)
/* 80435C5C 00432B9C  C0 02 24 E8 */	lfs f0, lbl_80520848@sda21(r2)
/* 80435C60 00432BA0  90 1C 00 00 */	stw r0, 0(r28)
/* 80435C64 00432BA4  90 BC 00 1C */	stw r5, 0x1c(r28)
/* 80435C68 00432BA8  D0 3C 00 20 */	stfs f1, 0x20(r28)
/* 80435C6C 00432BAC  D0 3C 00 24 */	stfs f1, 0x24(r28)
/* 80435C70 00432BB0  D0 1C 00 20 */	stfs f0, 0x20(r28)
.L_80435C74:
/* 80435C74 00432BB4  93 9E 01 4C */	stw r28, 0x14c(r30)
/* 80435C78 00432BB8  3C A0 62 74 */	lis r5, 0x62746E5F@ha
/* 80435C7C 00432BBC  3C 80 6D 67 */	lis r4, 0x6D675F61@ha
/* 80435C80 00432BC0  7F C3 F3 78 */	mr r3, r30
/* 80435C84 00432BC4  80 FE 01 4C */	lwz r7, 0x14c(r30)
/* 80435C88 00432BC8  38 C5 6E 5F */	addi r6, r5, 0x62746E5F@l
/* 80435C8C 00432BCC  38 A4 5F 61 */	addi r5, r4, 0x6D675F61@l
/* 80435C90 00432BD0  4B FF EE 95 */	bl addCallBack__Q29P2DScreen3MgrFUxPQ29P2DScreen4Node
/* 80435C94 00432BD4  38 60 00 28 */	li r3, 0x28
/* 80435C98 00432BD8  4B BE E2 0D */	bl __nw__FUl
/* 80435C9C 00432BDC  7C 7C 1B 79 */	or. r28, r3, r3
/* 80435CA0 00432BE0  41 82 00 4C */	beq .L_80435CEC
/* 80435CA4 00432BE4  4B FD B6 ED */	bl __ct__5CNodeFv
/* 80435CA8 00432BE8  3C 60 80 4D */	lis r3, __vt__Q29P2DScreen4Node@ha
/* 80435CAC 00432BEC  3C 80 80 4D */	lis r4, __vt__Q29P2DScreen12CallBackNode@ha
/* 80435CB0 00432BF0  38 03 7B 0C */	addi r0, r3, __vt__Q29P2DScreen4Node@l
/* 80435CB4 00432BF4  3C 60 80 4F */	lis r3, __vt__Q35P2JME5Movie8AbtnPane@ha
/* 80435CB8 00432BF8  90 1C 00 00 */	stw r0, 0(r28)
/* 80435CBC 00432BFC  38 A0 00 00 */	li r5, 0
/* 80435CC0 00432C00  38 84 7F 2C */	addi r4, r4, __vt__Q29P2DScreen12CallBackNode@l
/* 80435CC4 00432C04  38 03 C7 D4 */	addi r0, r3, __vt__Q35P2JME5Movie8AbtnPane@l
/* 80435CC8 00432C08  90 BC 00 18 */	stw r5, 0x18(r28)
/* 80435CCC 00432C0C  C0 22 24 58 */	lfs f1, lbl_805207B8@sda21(r2)
/* 80435CD0 00432C10  90 9C 00 00 */	stw r4, 0(r28)
/* 80435CD4 00432C14  C0 02 24 E8 */	lfs f0, lbl_80520848@sda21(r2)
/* 80435CD8 00432C18  90 1C 00 00 */	stw r0, 0(r28)
/* 80435CDC 00432C1C  90 BC 00 1C */	stw r5, 0x1c(r28)
/* 80435CE0 00432C20  D0 3C 00 20 */	stfs f1, 0x20(r28)
/* 80435CE4 00432C24  D0 3C 00 24 */	stfs f1, 0x24(r28)
/* 80435CE8 00432C28  D0 1C 00 20 */	stfs f0, 0x20(r28)
.L_80435CEC:
/* 80435CEC 00432C2C  93 9E 01 50 */	stw r28, 0x150(r30)
/* 80435CF0 00432C30  3C A0 79 61 */	lis r5, 0x79616A69@ha
/* 80435CF4 00432C34  3C 80 00 6D */	lis r4, 0x006D675F@ha
/* 80435CF8 00432C38  7F C3 F3 78 */	mr r3, r30
/* 80435CFC 00432C3C  80 FE 01 50 */	lwz r7, 0x150(r30)
/* 80435D00 00432C40  38 C5 6A 69 */	addi r6, r5, 0x79616A69@l
/* 80435D04 00432C44  38 A4 67 5F */	addi r5, r4, 0x006D675F@l
/* 80435D08 00432C48  4B FF EE 1D */	bl addCallBack__Q29P2DScreen3MgrFUxPQ29P2DScreen4Node
/* 80435D0C 00432C4C  7F C3 F3 78 */	mr r3, r30
/* 80435D10 00432C50  3C A0 61 6A */	lis r5, 0x616A6931@ha
/* 80435D14 00432C54  81 9E 00 00 */	lwz r12, 0(r30)
/* 80435D18 00432C58  3C 80 6D 67 */	lis r4, 0x6D675F79@ha
/* 80435D1C 00432C5C  38 C5 69 31 */	addi r6, r5, 0x616A6931@l
/* 80435D20 00432C60  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 80435D24 00432C64  38 A4 5F 79 */	addi r5, r4, 0x6D675F79@l
/* 80435D28 00432C68  7D 89 03 A6 */	mtctr r12
/* 80435D2C 00432C6C  4E 80 04 21 */	bctrl 
/* 80435D30 00432C70  38 80 00 01 */	li r4, 1
/* 80435D34 00432C74  38 A0 00 00 */	li r5, 0
/* 80435D38 00432C78  4B C0 30 75 */	bl setInfluencedAlpha__7J2DPaneFbb
/* 80435D3C 00432C7C  7F C3 F3 78 */	mr r3, r30
/* 80435D40 00432C80  3C A0 5F 30 */	lis r5, 0x5F303031@ha
/* 80435D44 00432C84  81 9E 00 00 */	lwz r12, 0(r30)
/* 80435D48 00432C88  3C 80 50 49 */	lis r4, 0x50494354@ha
/* 80435D4C 00432C8C  38 C5 30 31 */	addi r6, r5, 0x5F303031@l
/* 80435D50 00432C90  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 80435D54 00432C94  38 A4 43 54 */	addi r5, r4, 0x50494354@l
/* 80435D58 00432C98  7D 89 03 A6 */	mtctr r12
/* 80435D5C 00432C9C  4E 80 04 21 */	bctrl 
/* 80435D60 00432CA0  38 80 00 01 */	li r4, 1
/* 80435D64 00432CA4  38 A0 00 00 */	li r5, 0
/* 80435D68 00432CA8  4B C0 30 45 */	bl setInfluencedAlpha__7J2DPaneFbb
/* 80435D6C 00432CAC  80 7D 00 5C */	lwz r3, 0x5c(r29)
/* 80435D70 00432CB0  3C A0 65 6D */	lis r5, 0x656D6F5F@ha
/* 80435D74 00432CB4  3C 80 6D 67 */	lis r4, 0x6D675F64@ha
/* 80435D78 00432CB8  81 83 00 00 */	lwz r12, 0(r3)
/* 80435D7C 00432CBC  38 C5 6F 5F */	addi r6, r5, 0x656D6F5F@l
/* 80435D80 00432CC0  38 A4 5F 64 */	addi r5, r4, 0x6D675F64@l
/* 80435D84 00432CC4  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 80435D88 00432CC8  7D 89 03 A6 */	mtctr r12
/* 80435D8C 00432CCC  4E 80 04 21 */	bctrl 
/* 80435D90 00432CD0  7C 7B 1B 79 */	or. r27, r3, r3
/* 80435D94 00432CD4  40 82 00 18 */	bne .L_80435DAC
/* 80435D98 00432CD8  38 7F 00 1C */	addi r3, r31, 0x1c
/* 80435D9C 00432CDC  38 BF 00 30 */	addi r5, r31, 0x30
/* 80435DA0 00432CE0  38 80 02 78 */	li r4, 0x278
/* 80435DA4 00432CE4  4C C6 31 82 */	crclr 6
/* 80435DA8 00432CE8  4B BF 48 99 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80435DAC:
/* 80435DAC 00432CEC  7F 63 DB 78 */	mr r3, r27
/* 80435DB0 00432CF0  81 9B 00 00 */	lwz r12, 0(r27)
/* 80435DB4 00432CF4  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 80435DB8 00432CF8  7D 89 03 A6 */	mtctr r12
/* 80435DBC 00432CFC  4E 80 04 21 */	bctrl 
/* 80435DC0 00432D00  54 60 04 3E */	clrlwi r0, r3, 0x10
/* 80435DC4 00432D04  28 00 00 13 */	cmplwi r0, 0x13
/* 80435DC8 00432D08  41 82 00 18 */	beq .L_80435DE0
/* 80435DCC 00432D0C  38 7F 00 1C */	addi r3, r31, 0x1c
/* 80435DD0 00432D10  38 BF 00 30 */	addi r5, r31, 0x30
/* 80435DD4 00432D14  38 80 02 79 */	li r4, 0x279
/* 80435DD8 00432D18  4C C6 31 82 */	crclr 6
/* 80435DDC 00432D1C  4B BF 48 65 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80435DE0:
/* 80435DE0 00432D20  93 7D 00 64 */	stw r27, 0x64(r29)
/* 80435DE4 00432D24  80 7D 00 40 */	lwz r3, 0x40(r29)
/* 80435DE8 00432D28  80 9D 00 64 */	lwz r4, 0x64(r29)
/* 80435DEC 00432D2C  48 00 70 81 */	bl setTextBoxInfo__Q25P2JME19TRenderingProcessorFP7J2DPane
.L_80435DF0:
/* 80435DF0 00432D30  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80435DF4 00432D34  38 82 24 EC */	addi r4, r2, lbl_8052084C@sda21
/* 80435DF8 00432D38  38 A0 00 00 */	li r5, 0
/* 80435DFC 00432D3C  4B FE D5 61 */	bl heapStatusStart__6SystemFPcP7JKRHeap
/* 80435E00 00432D40  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80435E04 00432D44  3B 9F 01 00 */	addi r28, r31, 0x100
/* 80435E08 00432D48  88 03 00 2F */	lbz r0, 0x2f(r3)
/* 80435E0C 00432D4C  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 80435E10 00432D50  41 82 00 08 */	beq .L_80435E18
/* 80435E14 00432D54  3B 9F 00 D0 */	addi r28, r31, 0xd0
.L_80435E18:
/* 80435E18 00432D58  7F 83 E3 78 */	mr r3, r28
/* 80435E1C 00432D5C  38 80 00 01 */	li r4, 1
/* 80435E20 00432D60  38 A0 00 00 */	li r5, 0
/* 80435E24 00432D64  38 C0 00 01 */	li r6, 1
/* 80435E28 00432D68  4B BE 53 09 */	bl mount__10JKRArchiveFPCcQ210JKRArchive10EMountModeP7JKRHeapQ210JKRArchive15EMountDirection
/* 80435E2C 00432D6C  7C 7E 1B 79 */	or. r30, r3, r3
/* 80435E30 00432D70  41 82 03 90 */	beq .L_804361C0
/* 80435E34 00432D74  38 60 01 88 */	li r3, 0x188
/* 80435E38 00432D78  4B BE E0 6D */	bl __nw__FUl
/* 80435E3C 00432D7C  7C 64 1B 79 */	or. r4, r3, r3
/* 80435E40 00432D80  41 82 01 DC */	beq .L_8043601C
/* 80435E44 00432D84  7C 9C 23 78 */	mr r28, r4
/* 80435E48 00432D88  4B FF EF 65 */	bl __ct__Q29P2DScreen10Mgr_tuningFv
/* 80435E4C 00432D8C  3C 80 80 4F */	lis r4, __vt__Q35P2JME5Movie13PodIconScreen@ha
/* 80435E50 00432D90  38 60 FF FF */	li r3, -1
/* 80435E54 00432D94  38 84 C7 34 */	addi r4, r4, __vt__Q35P2JME5Movie13PodIconScreen@l
/* 80435E58 00432D98  38 00 00 00 */	li r0, 0
/* 80435E5C 00432D9C  90 9C 00 00 */	stw r4, 0(r28)
/* 80435E60 00432DA0  C0 02 24 58 */	lfs f0, lbl_805207B8@sda21(r2)
/* 80435E64 00432DA4  90 7C 01 48 */	stw r3, 0x148(r28)
/* 80435E68 00432DA8  90 1C 01 4C */	stw r0, 0x14c(r28)
/* 80435E6C 00432DAC  D0 1C 01 50 */	stfs f0, 0x150(r28)
/* 80435E70 00432DB0  90 1C 01 54 */	stw r0, 0x154(r28)
/* 80435E74 00432DB4  D0 1C 01 58 */	stfs f0, 0x158(r28)
/* 80435E78 00432DB8  90 1C 01 5C */	stw r0, 0x15c(r28)
/* 80435E7C 00432DBC  D0 1C 01 60 */	stfs f0, 0x160(r28)
/* 80435E80 00432DC0  4B FE D3 A5 */	bl getRenderModeObj__6SystemFv
/* 80435E84 00432DC4  A3 63 00 06 */	lhz r27, 6(r3)
/* 80435E88 00432DC8  4B FE D3 9D */	bl getRenderModeObj__6SystemFv
/* 80435E8C 00432DCC  A0 63 00 04 */	lhz r3, 4(r3)
/* 80435E90 00432DD0  3C 00 43 30 */	lis r0, 0x4330
/* 80435E94 00432DD4  90 01 00 08 */	stw r0, 8(r1)
/* 80435E98 00432DD8  C8 62 24 98 */	lfd f3, lbl_805207F8@sda21(r2)
/* 80435E9C 00432DDC  90 61 00 0C */	stw r3, 0xc(r1)
/* 80435EA0 00432DE0  C0 42 24 AC */	lfs f2, lbl_8052080C@sda21(r2)
/* 80435EA4 00432DE4  C8 01 00 08 */	lfd f0, 8(r1)
/* 80435EA8 00432DE8  93 61 00 14 */	stw r27, 0x14(r1)
/* 80435EAC 00432DEC  EC 20 18 28 */	fsubs f1, f0, f3
/* 80435EB0 00432DF0  C0 02 24 B0 */	lfs f0, lbl_80520810@sda21(r2)
/* 80435EB4 00432DF4  90 01 00 10 */	stw r0, 0x10(r1)
/* 80435EB8 00432DF8  EC 42 00 72 */	fmuls f2, f2, f1
/* 80435EBC 00432DFC  C8 21 00 10 */	lfd f1, 0x10(r1)
/* 80435EC0 00432E00  EC 21 18 28 */	fsubs f1, f1, f3
/* 80435EC4 00432E04  D0 5C 01 64 */	stfs f2, 0x164(r28)
/* 80435EC8 00432E08  D0 3C 01 68 */	stfs f1, 0x168(r28)
/* 80435ECC 00432E0C  D0 1C 01 6C */	stfs f0, 0x16c(r28)
/* 80435ED0 00432E10  4B C9 36 D1 */	bl rand
/* 80435ED4 00432E14  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 80435ED8 00432E18  3C 00 43 30 */	lis r0, 0x4330
/* 80435EDC 00432E1C  90 61 00 1C */	stw r3, 0x1c(r1)
/* 80435EE0 00432E20  C0 02 24 68 */	lfs f0, lbl_805207C8@sda21(r2)
/* 80435EE4 00432E24  90 01 00 18 */	stw r0, 0x18(r1)
/* 80435EE8 00432E28  C8 62 24 C0 */	lfd f3, lbl_80520820@sda21(r2)
/* 80435EEC 00432E2C  C8 21 00 18 */	lfd f1, 0x18(r1)
/* 80435EF0 00432E30  C0 42 24 BC */	lfs f2, lbl_8052081C@sda21(r2)
/* 80435EF4 00432E34  EC 61 18 28 */	fsubs f3, f1, f3
/* 80435EF8 00432E38  D0 1C 01 7C */	stfs f0, 0x17c(r28)
/* 80435EFC 00432E3C  C0 22 24 58 */	lfs f1, lbl_805207B8@sda21(r2)
/* 80435F00 00432E40  EC 03 10 24 */	fdivs f0, f3, f2
/* 80435F04 00432E44  D0 1C 01 80 */	stfs f0, 0x180(r28)
/* 80435F08 00432E48  D0 3C 01 84 */	stfs f1, 0x184(r28)
/* 80435F0C 00432E4C  C0 7C 01 7C */	lfs f3, 0x17c(r28)
/* 80435F10 00432E50  C0 5C 01 80 */	lfs f2, 0x180(r28)
/* 80435F14 00432E54  C0 9C 01 84 */	lfs f4, 0x184(r28)
/* 80435F18 00432E58  EC 03 00 F2 */	fmuls f0, f3, f3
/* 80435F1C 00432E5C  EC 42 00 B2 */	fmuls f2, f2, f2
/* 80435F20 00432E60  EC 84 01 32 */	fmuls f4, f4, f4
/* 80435F24 00432E64  EC 00 10 2A */	fadds f0, f0, f2
/* 80435F28 00432E68  EC 04 00 2A */	fadds f0, f4, f0
/* 80435F2C 00432E6C  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 80435F30 00432E70  40 81 00 20 */	ble .L_80435F50
/* 80435F34 00432E74  EC 03 10 FA */	fmadds f0, f3, f3, f2
/* 80435F38 00432E78  EC 44 00 2A */	fadds f2, f4, f0
/* 80435F3C 00432E7C  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 80435F40 00432E80  40 81 00 14 */	ble .L_80435F54
/* 80435F44 00432E84  FC 00 10 34 */	frsqrte f0, f2
/* 80435F48 00432E88  EC 40 00 B2 */	fmuls f2, f0, f2
/* 80435F4C 00432E8C  48 00 00 08 */	b .L_80435F54
.L_80435F50:
/* 80435F50 00432E90  FC 40 08 90 */	fmr f2, f1
.L_80435F54:
/* 80435F54 00432E94  C0 02 24 58 */	lfs f0, lbl_805207B8@sda21(r2)
/* 80435F58 00432E98  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80435F5C 00432E9C  40 81 00 30 */	ble .L_80435F8C
/* 80435F60 00432EA0  C0 22 24 68 */	lfs f1, lbl_805207C8@sda21(r2)
/* 80435F64 00432EA4  C0 1C 01 7C */	lfs f0, 0x17c(r28)
/* 80435F68 00432EA8  EC 21 10 24 */	fdivs f1, f1, f2
/* 80435F6C 00432EAC  EC 00 00 72 */	fmuls f0, f0, f1
/* 80435F70 00432EB0  D0 1C 01 7C */	stfs f0, 0x17c(r28)
/* 80435F74 00432EB4  C0 1C 01 80 */	lfs f0, 0x180(r28)
/* 80435F78 00432EB8  EC 00 00 72 */	fmuls f0, f0, f1
/* 80435F7C 00432EBC  D0 1C 01 80 */	stfs f0, 0x180(r28)
/* 80435F80 00432EC0  C0 1C 01 84 */	lfs f0, 0x184(r28)
/* 80435F84 00432EC4  EC 00 00 72 */	fmuls f0, f0, f1
/* 80435F88 00432EC8  D0 1C 01 84 */	stfs f0, 0x184(r28)
.L_80435F8C:
/* 80435F8C 00432ECC  C0 02 24 58 */	lfs f0, lbl_805207B8@sda21(r2)
/* 80435F90 00432ED0  D0 1C 01 70 */	stfs f0, 0x170(r28)
/* 80435F94 00432ED4  D0 1C 01 74 */	stfs f0, 0x174(r28)
/* 80435F98 00432ED8  D0 1C 01 78 */	stfs f0, 0x178(r28)
/* 80435F9C 00432EDC  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80435FA0 00432EE0  88 03 00 2F */	lbz r0, 0x2f(r3)
/* 80435FA4 00432EE4  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 80435FA8 00432EE8  41 82 00 38 */	beq .L_80435FE0
/* 80435FAC 00432EEC  C0 3C 01 64 */	lfs f1, 0x164(r28)
/* 80435FB0 00432EF0  C0 02 24 B8 */	lfs f0, lbl_80520818@sda21(r2)
/* 80435FB4 00432EF4  C0 9C 01 68 */	lfs f4, 0x168(r28)
/* 80435FB8 00432EF8  C0 62 24 B4 */	lfs f3, lbl_80520814@sda21(r2)
/* 80435FBC 00432EFC  EC 41 00 28 */	fsubs f2, f1, f0
/* 80435FC0 00432F00  C0 22 24 3C */	lfs f1, mstTuningTransX__Q29P2DScreen10Mgr_tuning@sda21(r2)
/* 80435FC4 00432F04  EC 64 18 28 */	fsubs f3, f4, f3
/* 80435FC8 00432F08  C0 02 24 40 */	lfs f0, mstTuningTransY__Q29P2DScreen10Mgr_tuning@sda21(r2)
/* 80435FCC 00432F0C  EC 22 08 2A */	fadds f1, f2, f1
/* 80435FD0 00432F10  EC 03 00 2A */	fadds f0, f3, f0
/* 80435FD4 00432F14  D0 3C 01 40 */	stfs f1, 0x140(r28)
/* 80435FD8 00432F18  D0 1C 01 44 */	stfs f0, 0x144(r28)
/* 80435FDC 00432F1C  48 00 00 34 */	b .L_80436010
.L_80435FE0:
/* 80435FE0 00432F20  C0 3C 01 64 */	lfs f1, 0x164(r28)
/* 80435FE4 00432F24  C0 02 24 B8 */	lfs f0, lbl_80520818@sda21(r2)
/* 80435FE8 00432F28  C0 9C 01 68 */	lfs f4, 0x168(r28)
/* 80435FEC 00432F2C  C0 62 24 5C */	lfs f3, lbl_805207BC@sda21(r2)
/* 80435FF0 00432F30  EC 41 00 28 */	fsubs f2, f1, f0
/* 80435FF4 00432F34  C0 22 24 3C */	lfs f1, mstTuningTransX__Q29P2DScreen10Mgr_tuning@sda21(r2)
/* 80435FF8 00432F38  EC 64 18 28 */	fsubs f3, f4, f3
/* 80435FFC 00432F3C  C0 02 24 40 */	lfs f0, mstTuningTransY__Q29P2DScreen10Mgr_tuning@sda21(r2)
/* 80436000 00432F40  EC 22 08 2A */	fadds f1, f2, f1
/* 80436004 00432F44  EC 03 00 2A */	fadds f0, f3, f0
/* 80436008 00432F48  D0 3C 01 40 */	stfs f1, 0x140(r28)
/* 8043600C 00432F4C  D0 1C 01 44 */	stfs f0, 0x144(r28)
.L_80436010:
/* 80436010 00432F50  38 00 00 00 */	li r0, 0
/* 80436014 00432F54  7F 84 E3 78 */	mr r4, r28
/* 80436018 00432F58  98 1C 00 B0 */	stb r0, 0xb0(r28)
.L_8043601C:
/* 8043601C 00432F5C  90 9D 00 60 */	stw r4, 0x60(r29)
/* 80436020 00432F60  7F C6 F3 78 */	mr r6, r30
/* 80436024 00432F64  38 82 24 D4 */	addi r4, r2, lbl_80520834@sda21
/* 80436028 00432F68  3C A0 00 04 */	lis r5, 4
/* 8043602C 00432F6C  83 7D 00 60 */	lwz r27, 0x60(r29)
/* 80436030 00432F70  7F 63 DB 78 */	mr r3, r27
/* 80436034 00432F74  4B C0 95 F1 */	bl set__9J2DScreenFPCcUlP10JKRArchive
/* 80436038 00432F78  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8043603C 00432F7C  40 82 00 18 */	bne .L_80436054
/* 80436040 00432F80  38 7F 00 1C */	addi r3, r31, 0x1c
/* 80436044 00432F84  38 BF 00 30 */	addi r5, r31, 0x30
/* 80436048 00432F88  38 80 01 AC */	li r4, 0x1ac
/* 8043604C 00432F8C  4C C6 31 82 */	crclr 6
/* 80436050 00432F90  4B BF 45 F1 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80436054:
/* 80436054 00432F94  7F C3 F3 78 */	mr r3, r30
/* 80436058 00432F98  38 9F 00 3C */	addi r4, r31, 0x3c
/* 8043605C 00432F9C  81 9E 00 00 */	lwz r12, 0(r30)
/* 80436060 00432FA0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80436064 00432FA4  7D 89 03 A6 */	mtctr r12
/* 80436068 00432FA8  4E 80 04 21 */	bctrl 
/* 8043606C 00432FAC  7C 7C 1B 79 */	or. r28, r3, r3
/* 80436070 00432FB0  40 82 00 18 */	bne .L_80436088
/* 80436074 00432FB4  38 7F 00 1C */	addi r3, r31, 0x1c
/* 80436078 00432FB8  38 BF 00 30 */	addi r5, r31, 0x30
/* 8043607C 00432FBC  38 80 01 B1 */	li r4, 0x1b1
/* 80436080 00432FC0  4C C6 31 82 */	crclr 6
/* 80436084 00432FC4  4B BF 45 BD */	bl panic_f__12JUTExceptionFPCciPCce
.L_80436088:
/* 80436088 00432FC8  7F 83 E3 78 */	mr r3, r28
/* 8043608C 00432FCC  4B C1 18 91 */	bl load__20J2DAnmLoaderDataBaseFPCv
/* 80436090 00432FD0  90 7B 01 5C */	stw r3, 0x15c(r27)
/* 80436094 00432FD4  80 1B 01 5C */	lwz r0, 0x15c(r27)
/* 80436098 00432FD8  28 00 00 00 */	cmplwi r0, 0
/* 8043609C 00432FDC  40 82 00 18 */	bne .L_804360B4
/* 804360A0 00432FE0  38 7F 00 1C */	addi r3, r31, 0x1c
/* 804360A4 00432FE4  38 BF 00 30 */	addi r5, r31, 0x30
/* 804360A8 00432FE8  38 80 01 B3 */	li r4, 0x1b3
/* 804360AC 00432FEC  4C C6 31 82 */	crclr 6
/* 804360B0 00432FF0  4B BF 45 91 */	bl panic_f__12JUTExceptionFPCciPCce
.L_804360B4:
/* 804360B4 00432FF4  7F 63 DB 78 */	mr r3, r27
/* 804360B8 00432FF8  80 9B 01 5C */	lwz r4, 0x15c(r27)
/* 804360BC 00432FFC  81 9B 00 00 */	lwz r12, 0(r27)
/* 804360C0 00433000  81 8C 00 68 */	lwz r12, 0x68(r12)
/* 804360C4 00433004  7D 89 03 A6 */	mtctr r12
/* 804360C8 00433008  4E 80 04 21 */	bctrl 
/* 804360CC 0043300C  7F C3 F3 78 */	mr r3, r30
/* 804360D0 00433010  38 9F 00 4C */	addi r4, r31, 0x4c
/* 804360D4 00433014  81 9E 00 00 */	lwz r12, 0(r30)
/* 804360D8 00433018  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 804360DC 0043301C  7D 89 03 A6 */	mtctr r12
/* 804360E0 00433020  4E 80 04 21 */	bctrl 
/* 804360E4 00433024  7C 7C 1B 79 */	or. r28, r3, r3
/* 804360E8 00433028  40 82 00 18 */	bne .L_80436100
/* 804360EC 0043302C  38 7F 00 1C */	addi r3, r31, 0x1c
/* 804360F0 00433030  38 BF 00 30 */	addi r5, r31, 0x30
/* 804360F4 00433034  38 80 01 B8 */	li r4, 0x1b8
/* 804360F8 00433038  4C C6 31 82 */	crclr 6
/* 804360FC 0043303C  4B BF 45 45 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80436100:
/* 80436100 00433040  7F 83 E3 78 */	mr r3, r28
/* 80436104 00433044  4B C1 18 19 */	bl load__20J2DAnmLoaderDataBaseFPCv
/* 80436108 00433048  90 7B 01 54 */	stw r3, 0x154(r27)
/* 8043610C 0043304C  80 1B 01 54 */	lwz r0, 0x154(r27)
/* 80436110 00433050  28 00 00 00 */	cmplwi r0, 0
/* 80436114 00433054  40 82 00 18 */	bne .L_8043612C
/* 80436118 00433058  38 7F 00 1C */	addi r3, r31, 0x1c
/* 8043611C 0043305C  38 BF 00 30 */	addi r5, r31, 0x30
/* 80436120 00433060  38 80 01 BA */	li r4, 0x1ba
/* 80436124 00433064  4C C6 31 82 */	crclr 6
/* 80436128 00433068  4B BF 45 19 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8043612C:
/* 8043612C 0043306C  7F 63 DB 78 */	mr r3, r27
/* 80436130 00433070  80 9B 01 54 */	lwz r4, 0x154(r27)
/* 80436134 00433074  81 9B 00 00 */	lwz r12, 0(r27)
/* 80436138 00433078  81 8C 00 60 */	lwz r12, 0x60(r12)
/* 8043613C 0043307C  7D 89 03 A6 */	mtctr r12
/* 80436140 00433080  4E 80 04 21 */	bctrl 
/* 80436144 00433084  7F C3 F3 78 */	mr r3, r30
/* 80436148 00433088  38 9F 00 5C */	addi r4, r31, 0x5c
/* 8043614C 0043308C  81 9E 00 00 */	lwz r12, 0(r30)
/* 80436150 00433090  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80436154 00433094  7D 89 03 A6 */	mtctr r12
/* 80436158 00433098  4E 80 04 21 */	bctrl 
/* 8043615C 0043309C  7C 7C 1B 79 */	or. r28, r3, r3
/* 80436160 004330A0  40 82 00 18 */	bne .L_80436178
/* 80436164 004330A4  38 7F 00 1C */	addi r3, r31, 0x1c
/* 80436168 004330A8  38 BF 00 30 */	addi r5, r31, 0x30
/* 8043616C 004330AC  38 80 01 BF */	li r4, 0x1bf
/* 80436170 004330B0  4C C6 31 82 */	crclr 6
/* 80436174 004330B4  4B BF 44 CD */	bl panic_f__12JUTExceptionFPCciPCce
.L_80436178:
/* 80436178 004330B8  7F 83 E3 78 */	mr r3, r28
/* 8043617C 004330BC  4B C1 17 A1 */	bl load__20J2DAnmLoaderDataBaseFPCv
/* 80436180 004330C0  90 7B 01 4C */	stw r3, 0x14c(r27)
/* 80436184 004330C4  80 1B 01 4C */	lwz r0, 0x14c(r27)
/* 80436188 004330C8  28 00 00 00 */	cmplwi r0, 0
/* 8043618C 004330CC  40 82 00 18 */	bne .L_804361A4
/* 80436190 004330D0  38 7F 00 1C */	addi r3, r31, 0x1c
/* 80436194 004330D4  38 BF 00 30 */	addi r5, r31, 0x30
/* 80436198 004330D8  38 80 01 C1 */	li r4, 0x1c1
/* 8043619C 004330DC  4C C6 31 82 */	crclr 6
/* 804361A0 004330E0  4B BF 44 A1 */	bl panic_f__12JUTExceptionFPCciPCce
.L_804361A4:
/* 804361A4 004330E4  7F 63 DB 78 */	mr r3, r27
/* 804361A8 004330E8  80 9B 01 4C */	lwz r4, 0x14c(r27)
/* 804361AC 004330EC  81 9B 00 00 */	lwz r12, 0(r27)
/* 804361B0 004330F0  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 804361B4 004330F4  7D 89 03 A6 */	mtctr r12
/* 804361B8 004330F8  4E 80 04 21 */	bctrl 
/* 804361BC 004330FC  48 00 00 1C */	b .L_804361D8
.L_804361C0:
/* 804361C0 00433100  7F 86 E3 78 */	mr r6, r28
/* 804361C4 00433104  38 7F 00 1C */	addi r3, r31, 0x1c
/* 804361C8 00433108  38 BF 01 2C */	addi r5, r31, 0x12c
/* 804361CC 0043310C  38 80 02 92 */	li r4, 0x292
/* 804361D0 00433110  4C C6 31 82 */	crclr 6
/* 804361D4 00433114  4B BF 44 6D */	bl panic_f__12JUTExceptionFPCciPCce
.L_804361D8:
/* 804361D8 00433118  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 804361DC 0043311C  38 82 24 EC */	addi r4, r2, lbl_8052084C@sda21
/* 804361E0 00433120  4B FE D1 85 */	bl heapStatusEnd__6SystemFPc
/* 804361E4 00433124  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 804361E8 00433128  38 9F 00 9C */	addi r4, r31, 0x9c
/* 804361EC 0043312C  4B FE D1 79 */	bl heapStatusEnd__6SystemFPc
/* 804361F0 00433130  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 804361F4 00433134  38 9F 01 40 */	addi r4, r31, 0x140
/* 804361F8 00433138  38 A0 00 00 */	li r5, 0
/* 804361FC 0043313C  4B FE D1 61 */	bl heapStatusStart__6SystemFPcP7JKRHeap
/* 80436200 00433140  7F A3 EB 78 */	mr r3, r29
/* 80436204 00433144  38 80 04 00 */	li r4, 0x400
/* 80436208 00433148  48 00 9F 35 */	bl initRenderingProcessor__Q35P2JME6Window8TControlFUl
/* 8043620C 0043314C  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80436210 00433150  38 9F 01 40 */	addi r4, r31, 0x140
/* 80436214 00433154  4B FE D1 51 */	bl heapStatusEnd__6SystemFPc
/* 80436218 00433158  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8043621C 0043315C  38 9F 00 7C */	addi r4, r31, 0x7c
/* 80436220 00433160  4B FE D1 45 */	bl heapStatusEnd__6SystemFPc
/* 80436224 00433164  BB 61 00 2C */	lmw r27, 0x2c(r1)
/* 80436228 00433168  38 60 00 01 */	li r3, 1
/* 8043622C 0043316C  80 01 00 44 */	lwz r0, 0x44(r1)
/* 80436230 00433170  7C 08 03 A6 */	mtlr r0
/* 80436234 00433174  38 21 00 40 */	addi r1, r1, 0x40
/* 80436238 00433178  4E 80 00 20 */	blr 
.endfn onInit__Q35P2JME5Movie8TControlFv

.fn reset__Q35P2JME5Movie8TControlFv, global
/* 8043623C 0043317C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80436240 00433180  7C 08 02 A6 */	mflr r0
/* 80436244 00433184  90 01 00 14 */	stw r0, 0x14(r1)
/* 80436248 00433188  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8043624C 0043318C  7C 7F 1B 78 */	mr r31, r3
/* 80436250 00433190  48 00 A1 75 */	bl reset__Q35P2JME6Window8TControlFv
/* 80436254 00433194  7F E3 FB 78 */	mr r3, r31
/* 80436258 00433198  38 80 00 00 */	li r4, 0
/* 8043625C 0043319C  48 00 00 19 */	bl setMode__Q35P2JME5Movie8TControlFQ45P2JME5Movie8TControl9EModeFlag
/* 80436260 004331A0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80436264 004331A4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80436268 004331A8  7C 08 03 A6 */	mtlr r0
/* 8043626C 004331AC  38 21 00 10 */	addi r1, r1, 0x10
/* 80436270 004331B0  4E 80 00 20 */	blr 
.endfn reset__Q35P2JME5Movie8TControlFv

.fn setMode__Q35P2JME5Movie8TControlFQ45P2JME5Movie8TControl9EModeFlag, global
/* 80436274 004331B4  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 80436278 004331B8  7C 08 02 A6 */	mflr r0
/* 8043627C 004331BC  90 01 00 44 */	stw r0, 0x44(r1)
/* 80436280 004331C0  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 80436284 004331C4  F3 E1 00 38 */	psq_st f31, 56(r1), 0, qr0
/* 80436288 004331C8  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 8043628C 004331CC  93 C1 00 28 */	stw r30, 0x28(r1)
/* 80436290 004331D0  93 A1 00 24 */	stw r29, 0x24(r1)
/* 80436294 004331D4  93 81 00 20 */	stw r28, 0x20(r1)
/* 80436298 004331D8  7C 7E 1B 78 */	mr r30, r3
/* 8043629C 004331DC  2C 04 00 02 */	cmpwi r4, 2
/* 804362A0 004331E0  83 E3 00 6C */	lwz r31, 0x6c(r3)
/* 804362A4 004331E4  90 83 00 6C */	stw r4, 0x6c(r3)
/* 804362A8 004331E8  41 82 01 D4 */	beq .L_8043647C
/* 804362AC 004331EC  40 80 00 14 */	bge .L_804362C0
/* 804362B0 004331F0  2C 04 00 00 */	cmpwi r4, 0
/* 804362B4 004331F4  41 82 00 18 */	beq .L_804362CC
/* 804362B8 004331F8  40 80 00 40 */	bge .L_804362F8
/* 804362BC 004331FC  48 00 04 6C */	b .L_80436728
.L_804362C0:
/* 804362C0 00433200  2C 04 00 04 */	cmpwi r4, 4
/* 804362C4 00433204  40 80 04 64 */	bge .L_80436728
/* 804362C8 00433208  48 00 01 C8 */	b .L_80436490
.L_804362CC:
/* 804362CC 0043320C  38 00 00 00 */	li r0, 0
/* 804362D0 00433210  98 1E 00 68 */	stb r0, 0x68(r30)
/* 804362D4 00433214  80 7E 00 5C */	lwz r3, 0x5c(r30)
/* 804362D8 00433218  80 63 01 48 */	lwz r3, 0x148(r3)
/* 804362DC 0043321C  80 63 00 18 */	lwz r3, 0x18(r3)
/* 804362E0 00433220  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 804362E4 00433224  80 7E 00 3C */	lwz r3, 0x3c(r30)
/* 804362E8 00433228  80 03 00 68 */	lwz r0, 0x68(r3)
/* 804362EC 0043322C  60 00 00 01 */	ori r0, r0, 1
/* 804362F0 00433230  90 03 00 68 */	stw r0, 0x68(r3)
/* 804362F4 00433234  48 00 04 34 */	b .L_80436728
.L_804362F8:
/* 804362F8 00433238  80 6D 98 58 */	lwz r3, spSysIF__8PSSystem@sda21(r13)
/* 804362FC 0043323C  38 80 18 6F */	li r4, 0x186f
/* 80436300 00433240  38 A0 00 00 */	li r5, 0
/* 80436304 00433244  4B F0 23 2D */	bl playSystemSe__Q28PSSystem5SysIFFUlUl
/* 80436308 00433248  80 7E 00 5C */	lwz r3, 0x5c(r30)
/* 8043630C 0043324C  C0 22 24 A4 */	lfs f1, lbl_80520804@sda21(r2)
/* 80436310 00433250  48 00 04 45 */	bl open__Q35P2JME5Movie19MessageWindowScreenFf
/* 80436314 00433254  83 BE 00 60 */	lwz r29, 0x60(r30)
/* 80436318 00433258  4B C9 32 89 */	bl rand
/* 8043631C 0043325C  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 80436320 00433260  3C 00 43 30 */	lis r0, 0x4330
/* 80436324 00433264  90 61 00 0C */	stw r3, 0xc(r1)
/* 80436328 00433268  C0 02 24 68 */	lfs f0, lbl_805207C8@sda21(r2)
/* 8043632C 0043326C  90 01 00 08 */	stw r0, 8(r1)
/* 80436330 00433270  C8 62 24 C0 */	lfd f3, lbl_80520820@sda21(r2)
/* 80436334 00433274  C8 21 00 08 */	lfd f1, 8(r1)
/* 80436338 00433278  C0 42 24 BC */	lfs f2, lbl_8052081C@sda21(r2)
/* 8043633C 0043327C  EC 61 18 28 */	fsubs f3, f1, f3
/* 80436340 00433280  D0 1D 01 7C */	stfs f0, 0x17c(r29)
/* 80436344 00433284  C0 22 24 58 */	lfs f1, lbl_805207B8@sda21(r2)
/* 80436348 00433288  EC 03 10 24 */	fdivs f0, f3, f2
/* 8043634C 0043328C  D0 1D 01 80 */	stfs f0, 0x180(r29)
/* 80436350 00433290  D0 3D 01 84 */	stfs f1, 0x184(r29)
/* 80436354 00433294  C0 7D 01 7C */	lfs f3, 0x17c(r29)
/* 80436358 00433298  C0 5D 01 80 */	lfs f2, 0x180(r29)
/* 8043635C 0043329C  C0 9D 01 84 */	lfs f4, 0x184(r29)
/* 80436360 004332A0  EC 03 00 F2 */	fmuls f0, f3, f3
/* 80436364 004332A4  EC 42 00 B2 */	fmuls f2, f2, f2
/* 80436368 004332A8  EC 84 01 32 */	fmuls f4, f4, f4
/* 8043636C 004332AC  EC 00 10 2A */	fadds f0, f0, f2
/* 80436370 004332B0  EC 04 00 2A */	fadds f0, f4, f0
/* 80436374 004332B4  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 80436378 004332B8  40 81 00 20 */	ble .L_80436398
/* 8043637C 004332BC  EC 03 10 FA */	fmadds f0, f3, f3, f2
/* 80436380 004332C0  EC 44 00 2A */	fadds f2, f4, f0
/* 80436384 004332C4  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 80436388 004332C8  40 81 00 14 */	ble .L_8043639C
/* 8043638C 004332CC  FC 00 10 34 */	frsqrte f0, f2
/* 80436390 004332D0  EC 40 00 B2 */	fmuls f2, f0, f2
/* 80436394 004332D4  48 00 00 08 */	b .L_8043639C
.L_80436398:
/* 80436398 004332D8  FC 40 08 90 */	fmr f2, f1
.L_8043639C:
/* 8043639C 004332DC  C0 02 24 58 */	lfs f0, lbl_805207B8@sda21(r2)
/* 804363A0 004332E0  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 804363A4 004332E4  40 81 00 30 */	ble .L_804363D4
/* 804363A8 004332E8  C0 22 24 68 */	lfs f1, lbl_805207C8@sda21(r2)
/* 804363AC 004332EC  C0 1D 01 7C */	lfs f0, 0x17c(r29)
/* 804363B0 004332F0  EC 21 10 24 */	fdivs f1, f1, f2
/* 804363B4 004332F4  EC 00 00 72 */	fmuls f0, f0, f1
/* 804363B8 004332F8  D0 1D 01 7C */	stfs f0, 0x17c(r29)
/* 804363BC 004332FC  C0 1D 01 80 */	lfs f0, 0x180(r29)
/* 804363C0 00433300  EC 00 00 72 */	fmuls f0, f0, f1
/* 804363C4 00433304  D0 1D 01 80 */	stfs f0, 0x180(r29)
/* 804363C8 00433308  C0 1D 01 84 */	lfs f0, 0x184(r29)
/* 804363CC 0043330C  EC 00 00 72 */	fmuls f0, f0, f1
/* 804363D0 00433310  D0 1D 01 84 */	stfs f0, 0x184(r29)
.L_804363D4:
/* 804363D4 00433314  C0 02 24 58 */	lfs f0, lbl_805207B8@sda21(r2)
/* 804363D8 00433318  D0 1D 01 70 */	stfs f0, 0x170(r29)
/* 804363DC 0043331C  D0 1D 01 74 */	stfs f0, 0x174(r29)
/* 804363E0 00433320  D0 1D 01 78 */	stfs f0, 0x178(r29)
/* 804363E4 00433324  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 804363E8 00433328  88 03 00 2F */	lbz r0, 0x2f(r3)
/* 804363EC 0043332C  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 804363F0 00433330  41 82 00 38 */	beq .L_80436428
/* 804363F4 00433334  C0 3D 01 64 */	lfs f1, 0x164(r29)
/* 804363F8 00433338  C0 02 24 B8 */	lfs f0, lbl_80520818@sda21(r2)
/* 804363FC 0043333C  C0 9D 01 68 */	lfs f4, 0x168(r29)
/* 80436400 00433340  C0 62 24 B4 */	lfs f3, lbl_80520814@sda21(r2)
/* 80436404 00433344  EC 41 00 28 */	fsubs f2, f1, f0
/* 80436408 00433348  C0 22 24 3C */	lfs f1, mstTuningTransX__Q29P2DScreen10Mgr_tuning@sda21(r2)
/* 8043640C 0043334C  EC 64 18 28 */	fsubs f3, f4, f3
/* 80436410 00433350  C0 02 24 40 */	lfs f0, mstTuningTransY__Q29P2DScreen10Mgr_tuning@sda21(r2)
/* 80436414 00433354  EC 22 08 2A */	fadds f1, f2, f1
/* 80436418 00433358  EC 03 00 2A */	fadds f0, f3, f0
/* 8043641C 0043335C  D0 3D 01 40 */	stfs f1, 0x140(r29)
/* 80436420 00433360  D0 1D 01 44 */	stfs f0, 0x144(r29)
/* 80436424 00433364  48 00 00 34 */	b .L_80436458
.L_80436428:
/* 80436428 00433368  C0 3D 01 64 */	lfs f1, 0x164(r29)
/* 8043642C 0043336C  C0 02 24 B8 */	lfs f0, lbl_80520818@sda21(r2)
/* 80436430 00433370  C0 9D 01 68 */	lfs f4, 0x168(r29)
/* 80436434 00433374  C0 62 24 5C */	lfs f3, lbl_805207BC@sda21(r2)
/* 80436438 00433378  EC 41 00 28 */	fsubs f2, f1, f0
/* 8043643C 0043337C  C0 22 24 3C */	lfs f1, mstTuningTransX__Q29P2DScreen10Mgr_tuning@sda21(r2)
/* 80436440 00433380  EC 64 18 28 */	fsubs f3, f4, f3
/* 80436444 00433384  C0 02 24 40 */	lfs f0, mstTuningTransY__Q29P2DScreen10Mgr_tuning@sda21(r2)
/* 80436448 00433388  EC 22 08 2A */	fadds f1, f2, f1
/* 8043644C 0043338C  EC 03 00 2A */	fadds f0, f3, f0
/* 80436450 00433390  D0 3D 01 40 */	stfs f1, 0x140(r29)
/* 80436454 00433394  D0 1D 01 44 */	stfs f0, 0x144(r29)
.L_80436458:
/* 80436458 00433398  38 60 00 01 */	li r3, 1
/* 8043645C 0043339C  38 00 00 00 */	li r0, 0
/* 80436460 004333A0  98 7D 00 B0 */	stb r3, 0xb0(r29)
/* 80436464 004333A4  90 1D 01 48 */	stw r0, 0x148(r29)
/* 80436468 004333A8  80 7E 00 3C */	lwz r3, 0x3c(r30)
/* 8043646C 004333AC  80 03 00 68 */	lwz r0, 0x68(r3)
/* 80436470 004333B0  60 00 00 01 */	ori r0, r0, 1
/* 80436474 004333B4  90 03 00 68 */	stw r0, 0x68(r3)
/* 80436478 004333B8  48 00 02 B0 */	b .L_80436728
.L_8043647C:
/* 8043647C 004333BC  80 7E 00 3C */	lwz r3, 0x3c(r30)
/* 80436480 004333C0  80 03 00 68 */	lwz r0, 0x68(r3)
/* 80436484 004333C4  54 00 00 3C */	rlwinm r0, r0, 0, 0, 0x1e
/* 80436488 004333C8  90 03 00 68 */	stw r0, 0x68(r3)
/* 8043648C 004333CC  48 00 02 9C */	b .L_80436728
.L_80436490:
/* 80436490 004333D0  80 6D 98 58 */	lwz r3, spSysIF__8PSSystem@sda21(r13)
/* 80436494 004333D4  38 80 18 70 */	li r4, 0x1870
/* 80436498 004333D8  38 A0 00 00 */	li r5, 0
/* 8043649C 004333DC  4B F0 21 95 */	bl playSystemSe__Q28PSSystem5SysIFFUlUl
/* 804364A0 004333E0  80 7E 00 5C */	lwz r3, 0x5c(r30)
/* 804364A4 004333E4  38 80 00 01 */	li r4, 1
/* 804364A8 004333E8  38 00 00 03 */	li r0, 3
/* 804364AC 004333EC  C0 22 24 58 */	lfs f1, lbl_805207B8@sda21(r2)
/* 804364B0 004333F0  80 A3 01 48 */	lwz r5, 0x148(r3)
/* 804364B4 004333F4  C0 02 24 A4 */	lfs f0, lbl_80520804@sda21(r2)
/* 804364B8 004333F8  80 65 00 18 */	lwz r3, 0x18(r5)
/* 804364BC 004333FC  98 83 00 B0 */	stb r4, 0xb0(r3)
/* 804364C0 00433400  90 05 00 1C */	stw r0, 0x1c(r5)
/* 804364C4 00433404  D0 25 00 20 */	stfs f1, 0x20(r5)
/* 804364C8 00433408  D0 05 00 24 */	stfs f0, 0x24(r5)
/* 804364CC 0043340C  83 BE 00 60 */	lwz r29, 0x60(r30)
/* 804364D0 00433410  4B C9 30 D1 */	bl rand
/* 804364D4 00433414  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 804364D8 00433418  3C 00 43 30 */	lis r0, 0x4330
/* 804364DC 0043341C  90 61 00 0C */	stw r3, 0xc(r1)
/* 804364E0 00433420  C8 62 24 C0 */	lfd f3, lbl_80520820@sda21(r2)
/* 804364E4 00433424  90 01 00 08 */	stw r0, 8(r1)
/* 804364E8 00433428  C0 22 24 BC */	lfs f1, lbl_8052081C@sda21(r2)
/* 804364EC 0043342C  C8 41 00 08 */	lfd f2, 8(r1)
/* 804364F0 00433430  C0 02 24 A8 */	lfs f0, lbl_80520808@sda21(r2)
/* 804364F4 00433434  EC 42 18 28 */	fsubs f2, f2, f3
/* 804364F8 00433438  EC 22 08 24 */	fdivs f1, f2, f1
/* 804364FC 0043343C  EC 00 00 72 */	fmuls f0, f0, f1
/* 80436500 00433440  FC 00 00 1E */	fctiwz f0, f0
/* 80436504 00433444  D8 01 00 10 */	stfd f0, 0x10(r1)
/* 80436508 00433448  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8043650C 0043344C  2C 00 00 01 */	cmpwi r0, 1
/* 80436510 00433450  41 82 00 A4 */	beq .L_804365B4
/* 80436514 00433454  40 80 01 24 */	bge .L_80436638
/* 80436518 00433458  2C 00 00 00 */	cmpwi r0, 0
/* 8043651C 0043345C  40 80 00 08 */	bge .L_80436524
/* 80436520 00433460  48 00 01 18 */	b .L_80436638
.L_80436524:
/* 80436524 00433464  4B FE CD 01 */	bl getRenderModeObj__6SystemFv
/* 80436528 00433468  A3 C3 00 06 */	lhz r30, 6(r3)
/* 8043652C 0043346C  4B FE CC F9 */	bl getRenderModeObj__6SystemFv
/* 80436530 00433470  A3 83 00 04 */	lhz r28, 4(r3)
/* 80436534 00433474  4B C9 30 6D */	bl rand
/* 80436538 00433478  3C 80 43 30 */	lis r4, 0x4330
/* 8043653C 0043347C  6C 60 80 00 */	xoris r0, r3, 0x8000
/* 80436540 00433480  90 01 00 14 */	stw r0, 0x14(r1)
/* 80436544 00433484  7C 1E 00 D0 */	neg r0, r30
/* 80436548 00433488  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 8043654C 0043348C  C8 A2 24 C0 */	lfd f5, lbl_80520820@sda21(r2)
/* 80436550 00433490  90 81 00 10 */	stw r4, 0x10(r1)
/* 80436554 00433494  C0 02 24 BC */	lfs f0, lbl_8052081C@sda21(r2)
/* 80436558 00433498  C8 21 00 10 */	lfd f1, 0x10(r1)
/* 8043655C 0043349C  93 81 00 0C */	stw r28, 0xc(r1)
/* 80436560 004334A0  EC 21 28 28 */	fsubs f1, f1, f5
/* 80436564 004334A4  C0 82 24 A4 */	lfs f4, lbl_80520804@sda21(r2)
/* 80436568 004334A8  90 81 00 08 */	stw r4, 8(r1)
/* 8043656C 004334AC  C0 42 24 C8 */	lfs f2, lbl_80520828@sda21(r2)
/* 80436570 004334B0  EC C1 00 24 */	fdivs f6, f1, f0
/* 80436574 004334B4  90 01 00 1C */	stw r0, 0x1c(r1)
/* 80436578 004334B8  C8 62 24 98 */	lfd f3, lbl_805207F8@sda21(r2)
/* 8043657C 004334BC  90 81 00 18 */	stw r4, 0x18(r1)
/* 80436580 004334C0  C8 01 00 08 */	lfd f0, 8(r1)
/* 80436584 004334C4  C8 21 00 18 */	lfd f1, 0x18(r1)
/* 80436588 004334C8  EC 84 11 BA */	fmadds f4, f4, f6, f2
/* 8043658C 004334CC  C0 42 24 CC */	lfs f2, lbl_8052082C@sda21(r2)
/* 80436590 004334D0  EC 60 18 28 */	fsubs f3, f0, f3
/* 80436594 004334D4  C0 02 24 B0 */	lfs f0, lbl_80520810@sda21(r2)
/* 80436598 004334D8  EC 21 28 28 */	fsubs f1, f1, f5
/* 8043659C 004334DC  EC 64 00 F2 */	fmuls f3, f4, f3
/* 804365A0 004334E0  EC 22 00 72 */	fmuls f1, f2, f1
/* 804365A4 004334E4  D0 7D 01 70 */	stfs f3, 0x170(r29)
/* 804365A8 004334E8  D0 3D 01 74 */	stfs f1, 0x174(r29)
/* 804365AC 004334EC  D0 1D 01 78 */	stfs f0, 0x178(r29)
/* 804365B0 004334F0  48 00 00 88 */	b .L_80436638
.L_804365B4:
/* 804365B4 004334F4  4B FE CC 71 */	bl getRenderModeObj__6SystemFv
/* 804365B8 004334F8  A3 83 00 06 */	lhz r28, 6(r3)
/* 804365BC 004334FC  4B FE CC 69 */	bl getRenderModeObj__6SystemFv
/* 804365C0 00433500  A3 C3 00 04 */	lhz r30, 4(r3)
/* 804365C4 00433504  4B C9 2F DD */	bl rand
/* 804365C8 00433508  3C 00 43 30 */	lis r0, 0x4330
/* 804365CC 0043350C  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 804365D0 00433510  90 61 00 1C */	stw r3, 0x1c(r1)
/* 804365D4 00433514  C8 42 24 C0 */	lfd f2, lbl_80520820@sda21(r2)
/* 804365D8 00433518  90 01 00 18 */	stw r0, 0x18(r1)
/* 804365DC 0043351C  C0 02 24 BC */	lfs f0, lbl_8052081C@sda21(r2)
/* 804365E0 00433520  C8 21 00 18 */	lfd f1, 0x18(r1)
/* 804365E4 00433524  93 C1 00 14 */	stw r30, 0x14(r1)
/* 804365E8 00433528  EC 21 10 28 */	fsubs f1, f1, f2
/* 804365EC 0043352C  C0 62 24 A4 */	lfs f3, lbl_80520804@sda21(r2)
/* 804365F0 00433530  90 01 00 10 */	stw r0, 0x10(r1)
/* 804365F4 00433534  C0 42 24 C8 */	lfs f2, lbl_80520828@sda21(r2)
/* 804365F8 00433538  EC A1 00 24 */	fdivs f5, f1, f0
/* 804365FC 0043353C  93 81 00 0C */	stw r28, 0xc(r1)
/* 80436600 00433540  C8 82 24 98 */	lfd f4, lbl_805207F8@sda21(r2)
/* 80436604 00433544  90 01 00 08 */	stw r0, 8(r1)
/* 80436608 00433548  C8 01 00 10 */	lfd f0, 0x10(r1)
/* 8043660C 0043354C  C8 21 00 08 */	lfd f1, 8(r1)
/* 80436610 00433550  EC A3 11 7A */	fmadds f5, f3, f5, f2
/* 80436614 00433554  C0 42 24 D0 */	lfs f2, lbl_80520830@sda21(r2)
/* 80436618 00433558  EC 60 20 28 */	fsubs f3, f0, f4
/* 8043661C 0043355C  C0 02 24 B0 */	lfs f0, lbl_80520810@sda21(r2)
/* 80436620 00433560  EC 21 20 28 */	fsubs f1, f1, f4
/* 80436624 00433564  EC 65 00 F2 */	fmuls f3, f5, f3
/* 80436628 00433568  EC 22 00 72 */	fmuls f1, f2, f1
/* 8043662C 0043356C  D0 7D 01 70 */	stfs f3, 0x170(r29)
/* 80436630 00433570  D0 3D 01 74 */	stfs f1, 0x174(r29)
/* 80436634 00433574  D0 1D 01 78 */	stfs f0, 0x178(r29)
.L_80436638:
/* 80436638 00433578  4B C9 2F 69 */	bl rand
/* 8043663C 0043357C  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 80436640 00433580  3C 00 43 30 */	lis r0, 0x4330
/* 80436644 00433584  90 61 00 1C */	stw r3, 0x1c(r1)
/* 80436648 00433588  C8 42 24 C0 */	lfd f2, lbl_80520820@sda21(r2)
/* 8043664C 0043358C  90 01 00 18 */	stw r0, 0x18(r1)
/* 80436650 00433590  C0 02 24 BC */	lfs f0, lbl_8052081C@sda21(r2)
/* 80436654 00433594  C8 21 00 18 */	lfd f1, 0x18(r1)
/* 80436658 00433598  EC 21 10 28 */	fsubs f1, f1, f2
/* 8043665C 0043359C  EF E1 00 24 */	fdivs f31, f1, f0
/* 80436660 004335A0  4B C9 2F 41 */	bl rand
/* 80436664 004335A4  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 80436668 004335A8  3C 00 43 30 */	lis r0, 0x4330
/* 8043666C 004335AC  90 61 00 14 */	stw r3, 0x14(r1)
/* 80436670 004335B0  C8 62 24 C0 */	lfd f3, lbl_80520820@sda21(r2)
/* 80436674 004335B4  90 01 00 10 */	stw r0, 0x10(r1)
/* 80436678 004335B8  C0 42 24 BC */	lfs f2, lbl_8052081C@sda21(r2)
/* 8043667C 004335BC  C8 21 00 10 */	lfd f1, 0x10(r1)
/* 80436680 004335C0  C0 02 24 A4 */	lfs f0, lbl_80520804@sda21(r2)
/* 80436684 004335C4  EC 61 18 28 */	fsubs f3, f1, f3
/* 80436688 004335C8  C0 22 24 58 */	lfs f1, lbl_805207B8@sda21(r2)
/* 8043668C 004335CC  EC 43 10 24 */	fdivs f2, f3, f2
/* 80436690 004335D0  EC 00 00 BA */	fmadds f0, f0, f2, f0
/* 80436694 004335D4  D0 1D 01 7C */	stfs f0, 0x17c(r29)
/* 80436698 004335D8  D3 FD 01 80 */	stfs f31, 0x180(r29)
/* 8043669C 004335DC  D0 3D 01 84 */	stfs f1, 0x184(r29)
/* 804366A0 004335E0  C0 7D 01 7C */	lfs f3, 0x17c(r29)
/* 804366A4 004335E4  C0 5D 01 80 */	lfs f2, 0x180(r29)
/* 804366A8 004335E8  C0 9D 01 84 */	lfs f4, 0x184(r29)
/* 804366AC 004335EC  EC 03 00 F2 */	fmuls f0, f3, f3
/* 804366B0 004335F0  EC 42 00 B2 */	fmuls f2, f2, f2
/* 804366B4 004335F4  EC 84 01 32 */	fmuls f4, f4, f4
/* 804366B8 004335F8  EC 00 10 2A */	fadds f0, f0, f2
/* 804366BC 004335FC  EC 04 00 2A */	fadds f0, f4, f0
/* 804366C0 00433600  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 804366C4 00433604  40 81 00 20 */	ble .L_804366E4
/* 804366C8 00433608  EC 03 10 FA */	fmadds f0, f3, f3, f2
/* 804366CC 0043360C  EC 44 00 2A */	fadds f2, f4, f0
/* 804366D0 00433610  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 804366D4 00433614  40 81 00 14 */	ble .L_804366E8
/* 804366D8 00433618  FC 00 10 34 */	frsqrte f0, f2
/* 804366DC 0043361C  EC 40 00 B2 */	fmuls f2, f0, f2
/* 804366E0 00433620  48 00 00 08 */	b .L_804366E8
.L_804366E4:
/* 804366E4 00433624  FC 40 08 90 */	fmr f2, f1
.L_804366E8:
/* 804366E8 00433628  C0 02 24 58 */	lfs f0, lbl_805207B8@sda21(r2)
/* 804366EC 0043362C  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 804366F0 00433630  40 81 00 30 */	ble .L_80436720
/* 804366F4 00433634  C0 22 24 68 */	lfs f1, lbl_805207C8@sda21(r2)
/* 804366F8 00433638  C0 1D 01 7C */	lfs f0, 0x17c(r29)
/* 804366FC 0043363C  EC 21 10 24 */	fdivs f1, f1, f2
/* 80436700 00433640  EC 00 00 72 */	fmuls f0, f0, f1
/* 80436704 00433644  D0 1D 01 7C */	stfs f0, 0x17c(r29)
/* 80436708 00433648  C0 1D 01 80 */	lfs f0, 0x180(r29)
/* 8043670C 0043364C  EC 00 00 72 */	fmuls f0, f0, f1
/* 80436710 00433650  D0 1D 01 80 */	stfs f0, 0x180(r29)
/* 80436714 00433654  C0 1D 01 84 */	lfs f0, 0x184(r29)
/* 80436718 00433658  EC 00 00 72 */	fmuls f0, f0, f1
/* 8043671C 0043365C  D0 1D 01 84 */	stfs f0, 0x184(r29)
.L_80436720:
/* 80436720 00433660  38 00 00 02 */	li r0, 2
/* 80436724 00433664  90 1D 01 48 */	stw r0, 0x148(r29)
.L_80436728:
/* 80436728 00433668  7F E3 FB 78 */	mr r3, r31
/* 8043672C 0043366C  E3 E1 00 38 */	psq_l f31, 56(r1), 0, qr0
/* 80436730 00433670  80 01 00 44 */	lwz r0, 0x44(r1)
/* 80436734 00433674  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 80436738 00433678  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 8043673C 0043367C  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 80436740 00433680  83 A1 00 24 */	lwz r29, 0x24(r1)
/* 80436744 00433684  83 81 00 20 */	lwz r28, 0x20(r1)
/* 80436748 00433688  7C 08 03 A6 */	mtlr r0
/* 8043674C 0043368C  38 21 00 40 */	addi r1, r1, 0x40
/* 80436750 00433690  4E 80 00 20 */	blr 
.endfn setMode__Q35P2JME5Movie8TControlFQ45P2JME5Movie8TControl9EModeFlag

.fn open__Q35P2JME5Movie19MessageWindowScreenFf, weak
/* 80436754 00433694  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80436758 00433698  7C 08 02 A6 */	mflr r0
/* 8043675C 0043369C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80436760 004336A0  80 63 01 48 */	lwz r3, 0x148(r3)
/* 80436764 004336A4  4B FF EB F5 */	bl open__Q35P2JME5Movie10WindowPaneFf
/* 80436768 004336A8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8043676C 004336AC  7C 08 03 A6 */	mtlr r0
/* 80436770 004336B0  38 21 00 10 */	addi r1, r1, 0x10
/* 80436774 004336B4  4E 80 00 20 */	blr 
.endfn open__Q35P2JME5Movie19MessageWindowScreenFf

.fn update__Q35P2JME5Movie8TControlFP10ControllerP10Controller, global
/* 80436778 004336B8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8043677C 004336BC  7C 08 02 A6 */	mflr r0
/* 80436780 004336C0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80436784 004336C4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80436788 004336C8  7C 7F 1B 78 */	mr r31, r3
/* 8043678C 004336CC  93 C1 00 08 */	stw r30, 8(r1)
/* 80436790 004336D0  48 00 9A AD */	bl update__Q35P2JME6Window8TControlFP10ControllerP10Controller
/* 80436794 004336D4  80 1F 00 70 */	lwz r0, 0x70(r31)
/* 80436798 004336D8  7C 7E 1B 78 */	mr r30, r3
/* 8043679C 004336DC  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 804367A0 004336E0  41 82 00 54 */	beq .L_804367F4
/* 804367A4 004336E4  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 804367A8 004336E8  28 03 00 00 */	cmplwi r3, 0
/* 804367AC 004336EC  41 82 00 48 */	beq .L_804367F4
/* 804367B0 004336F0  80 03 01 F0 */	lwz r0, 0x1f0(r3)
/* 804367B4 004336F4  54 00 07 BD */	rlwinm. r0, r0, 0, 0x1e, 0x1e
/* 804367B8 004336F8  41 82 00 3C */	beq .L_804367F4
/* 804367BC 004336FC  88 1F 00 68 */	lbz r0, 0x68(r31)
/* 804367C0 00433700  28 00 00 00 */	cmplwi r0, 0
/* 804367C4 00433704  41 82 00 28 */	beq .L_804367EC
/* 804367C8 00433708  7F E3 FB 78 */	mr r3, r31
/* 804367CC 0043370C  81 9F 00 00 */	lwz r12, 0(r31)
/* 804367D0 00433710  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 804367D4 00433714  7D 89 03 A6 */	mtctr r12
/* 804367D8 00433718  4E 80 04 21 */	bctrl 
/* 804367DC 0043371C  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 804367E0 00433720  38 80 00 01 */	li r4, 1
/* 804367E4 00433724  38 A0 00 00 */	li r5, 0
/* 804367E8 00433728  4B FF 7B A1 */	bl unsuspend__Q24Game11MoviePlayerFlb
.L_804367EC:
/* 804367EC 0043372C  38 60 00 01 */	li r3, 1
/* 804367F0 00433730  48 00 01 98 */	b .L_80436988
.L_804367F4:
/* 804367F4 00433734  80 7F 00 5C */	lwz r3, 0x5c(r31)
/* 804367F8 00433738  28 03 00 00 */	cmplwi r3, 0
/* 804367FC 0043373C  41 82 00 14 */	beq .L_80436810
/* 80436800 00433740  81 83 00 00 */	lwz r12, 0(r3)
/* 80436804 00433744  81 8C 00 30 */	lwz r12, 0x30(r12)
/* 80436808 00433748  7D 89 03 A6 */	mtctr r12
/* 8043680C 0043374C  4E 80 04 21 */	bctrl 
.L_80436810:
/* 80436810 00433750  80 7F 00 60 */	lwz r3, 0x60(r31)
/* 80436814 00433754  28 03 00 00 */	cmplwi r3, 0
/* 80436818 00433758  41 82 00 14 */	beq .L_8043682C
/* 8043681C 0043375C  81 83 00 00 */	lwz r12, 0(r3)
/* 80436820 00433760  81 8C 00 30 */	lwz r12, 0x30(r12)
/* 80436824 00433764  7D 89 03 A6 */	mtctr r12
/* 80436828 00433768  4E 80 04 21 */	bctrl 
.L_8043682C:
/* 8043682C 0043376C  80 1F 00 6C */	lwz r0, 0x6c(r31)
/* 80436830 00433770  2C 00 00 02 */	cmpwi r0, 2
/* 80436834 00433774  41 82 00 94 */	beq .L_804368C8
/* 80436838 00433778  40 80 00 14 */	bge .L_8043684C
/* 8043683C 0043377C  2C 00 00 00 */	cmpwi r0, 0
/* 80436840 00433780  41 82 00 18 */	beq .L_80436858
/* 80436844 00433784  40 80 00 60 */	bge .L_804368A4
/* 80436848 00433788  48 00 00 F8 */	b .L_80436940
.L_8043684C:
/* 8043684C 0043378C  2C 00 00 04 */	cmpwi r0, 4
/* 80436850 00433790  40 80 00 F0 */	bge .L_80436940
/* 80436854 00433794  48 00 00 90 */	b .L_804368E4
.L_80436858:
/* 80436858 00433798  57 C0 06 3F */	clrlwi. r0, r30, 0x18
/* 8043685C 0043379C  41 82 00 3C */	beq .L_80436898
/* 80436860 004337A0  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80436864 004337A4  28 03 00 00 */	cmplwi r3, 0
/* 80436868 004337A8  41 82 00 18 */	beq .L_80436880
/* 8043686C 004337AC  38 80 00 01 */	li r4, 1
/* 80436870 004337B0  38 A2 24 F4 */	addi r5, r2, lbl_80520854@sda21
/* 80436874 004337B4  38 C0 00 03 */	li r6, 3
/* 80436878 004337B8  4B D7 E7 1D */	bl setPause__Q24Game10GameSystemFbPci
/* 8043687C 004337BC  98 7F 00 74 */	stb r3, 0x74(r31)
.L_80436880:
/* 80436880 004337C0  7F E3 FB 78 */	mr r3, r31
/* 80436884 004337C4  38 80 00 01 */	li r4, 1
/* 80436888 004337C8  4B FF F9 ED */	bl setMode__Q35P2JME5Movie8TControlFQ45P2JME5Movie8TControl9EModeFlag
/* 8043688C 004337CC  38 00 00 01 */	li r0, 1
/* 80436890 004337D0  98 1F 00 68 */	stb r0, 0x68(r31)
/* 80436894 004337D4  48 00 00 AC */	b .L_80436940
.L_80436898:
/* 80436898 004337D8  38 00 00 00 */	li r0, 0
/* 8043689C 004337DC  98 1F 00 68 */	stb r0, 0x68(r31)
/* 804368A0 004337E0  48 00 00 A0 */	b .L_80436940
.L_804368A4:
/* 804368A4 004337E4  80 7F 00 5C */	lwz r3, 0x5c(r31)
/* 804368A8 004337E8  80 63 01 48 */	lwz r3, 0x148(r3)
/* 804368AC 004337EC  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 804368B0 004337F0  2C 00 00 02 */	cmpwi r0, 2
/* 804368B4 004337F4  40 82 00 8C */	bne .L_80436940
/* 804368B8 004337F8  7F E3 FB 78 */	mr r3, r31
/* 804368BC 004337FC  38 80 00 02 */	li r4, 2
/* 804368C0 00433800  4B FF F9 B5 */	bl setMode__Q35P2JME5Movie8TControlFQ45P2JME5Movie8TControl9EModeFlag
/* 804368C4 00433804  48 00 00 7C */	b .L_80436940
.L_804368C8:
/* 804368C8 00433808  80 1F 00 4C */	lwz r0, 0x4c(r31)
/* 804368CC 0043380C  54 00 07 BD */	rlwinm. r0, r0, 0, 0x1e, 0x1e
/* 804368D0 00433810  41 82 00 70 */	beq .L_80436940
/* 804368D4 00433814  7F E3 FB 78 */	mr r3, r31
/* 804368D8 00433818  38 80 00 03 */	li r4, 3
/* 804368DC 0043381C  4B FF F9 99 */	bl setMode__Q35P2JME5Movie8TControlFQ45P2JME5Movie8TControl9EModeFlag
/* 804368E0 00433820  48 00 00 60 */	b .L_80436940
.L_804368E4:
/* 804368E4 00433824  80 7F 00 5C */	lwz r3, 0x5c(r31)
/* 804368E8 00433828  80 63 01 48 */	lwz r3, 0x148(r3)
/* 804368EC 0043382C  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 804368F0 00433830  2C 00 00 04 */	cmpwi r0, 4
/* 804368F4 00433834  40 82 00 4C */	bne .L_80436940
/* 804368F8 00433838  80 7F 00 60 */	lwz r3, 0x60(r31)
/* 804368FC 0043383C  80 03 01 48 */	lwz r0, 0x148(r3)
/* 80436900 00433840  2C 00 00 03 */	cmpwi r0, 3
/* 80436904 00433844  40 82 00 3C */	bne .L_80436940
/* 80436908 00433848  7F E3 FB 78 */	mr r3, r31
/* 8043690C 0043384C  81 9F 00 00 */	lwz r12, 0(r31)
/* 80436910 00433850  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 80436914 00433854  7D 89 03 A6 */	mtctr r12
/* 80436918 00433858  4E 80 04 21 */	bctrl 
/* 8043691C 0043385C  80 1F 00 70 */	lwz r0, 0x70(r31)
/* 80436920 00433860  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 80436924 00433864  41 82 00 1C */	beq .L_80436940
/* 80436928 00433868  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 8043692C 0043386C  28 03 00 00 */	cmplwi r3, 0
/* 80436930 00433870  41 82 00 10 */	beq .L_80436940
/* 80436934 00433874  38 80 00 01 */	li r4, 1
/* 80436938 00433878  38 A0 00 01 */	li r5, 1
/* 8043693C 0043387C  4B FF 7A 4D */	bl unsuspend__Q24Game11MoviePlayerFlb
.L_80436940:
/* 80436940 00433880  80 7F 00 3C */	lwz r3, 0x3c(r31)
/* 80436944 00433884  80 03 00 68 */	lwz r0, 0x68(r3)
/* 80436948 00433888  54 00 07 BD */	rlwinm. r0, r0, 0, 0x1e, 0x1e
/* 8043694C 0043388C  41 82 00 20 */	beq .L_8043696C
/* 80436950 00433890  80 9F 00 5C */	lwz r4, 0x5c(r31)
/* 80436954 00433894  38 00 00 01 */	li r0, 1
/* 80436958 00433898  80 64 01 4C */	lwz r3, 0x14c(r4)
/* 8043695C 0043389C  90 03 00 1C */	stw r0, 0x1c(r3)
/* 80436960 004338A0  80 64 01 50 */	lwz r3, 0x150(r4)
/* 80436964 004338A4  90 03 00 1C */	stw r0, 0x1c(r3)
/* 80436968 004338A8  48 00 00 1C */	b .L_80436984
.L_8043696C:
/* 8043696C 004338AC  80 9F 00 5C */	lwz r4, 0x5c(r31)
/* 80436970 004338B0  38 00 00 00 */	li r0, 0
/* 80436974 004338B4  80 64 01 4C */	lwz r3, 0x14c(r4)
/* 80436978 004338B8  90 03 00 1C */	stw r0, 0x1c(r3)
/* 8043697C 004338BC  80 64 01 50 */	lwz r3, 0x150(r4)
/* 80436980 004338C0  90 03 00 1C */	stw r0, 0x1c(r3)
.L_80436984:
/* 80436984 004338C4  88 7F 00 68 */	lbz r3, 0x68(r31)
.L_80436988:
/* 80436988 004338C8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8043698C 004338CC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80436990 004338D0  83 C1 00 08 */	lwz r30, 8(r1)
/* 80436994 004338D4  7C 08 03 A6 */	mtlr r0
/* 80436998 004338D8  38 21 00 10 */	addi r1, r1, 0x10
/* 8043699C 004338DC  4E 80 00 20 */	blr 
.endfn update__Q35P2JME5Movie8TControlFP10ControllerP10Controller

.fn draw__Q35P2JME5Movie8TControlFR8Graphics, global
/* 804369A0 004338E0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 804369A4 004338E4  7C 08 02 A6 */	mflr r0
/* 804369A8 004338E8  90 01 00 24 */	stw r0, 0x24(r1)
/* 804369AC 004338EC  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 804369B0 004338F0  93 C1 00 18 */	stw r30, 0x18(r1)
/* 804369B4 004338F4  7C 9E 23 78 */	mr r30, r4
/* 804369B8 004338F8  93 A1 00 14 */	stw r29, 0x14(r1)
/* 804369BC 004338FC  7C 7D 1B 78 */	mr r29, r3
/* 804369C0 00433900  80 03 00 5C */	lwz r0, 0x5c(r3)
/* 804369C4 00433904  28 00 00 00 */	cmplwi r0, 0
/* 804369C8 00433908  41 82 00 88 */	beq .L_80436A50
/* 804369CC 0043390C  80 1D 00 6C */	lwz r0, 0x6c(r29)
/* 804369D0 00433910  2C 00 00 00 */	cmpwi r0, 0
/* 804369D4 00433914  41 82 00 7C */	beq .L_80436A50
/* 804369D8 00433918  38 7E 01 90 */	addi r3, r30, 0x190
/* 804369DC 0043391C  81 9E 01 90 */	lwz r12, 0x190(r30)
/* 804369E0 00433920  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 804369E4 00433924  7D 89 03 A6 */	mtctr r12
/* 804369E8 00433928  4E 80 04 21 */	bctrl 
/* 804369EC 0043392C  80 7D 00 5C */	lwz r3, 0x5c(r29)
/* 804369F0 00433930  7F C4 F3 78 */	mr r4, r30
/* 804369F4 00433934  38 BE 01 90 */	addi r5, r30, 0x190
/* 804369F8 00433938  81 83 00 00 */	lwz r12, 0(r3)
/* 804369FC 0043393C  81 8C 00 9C */	lwz r12, 0x9c(r12)
/* 80436A00 00433940  7D 89 03 A6 */	mtctr r12
/* 80436A04 00433944  4E 80 04 21 */	bctrl 
/* 80436A08 00433948  80 9D 00 64 */	lwz r4, 0x64(r29)
/* 80436A0C 0043394C  28 04 00 00 */	cmplwi r4, 0
/* 80436A10 00433950  41 82 00 24 */	beq .L_80436A34
/* 80436A14 00433954  3B FE 02 10 */	addi r31, r30, 0x210
/* 80436A18 00433958  7F A3 EB 78 */	mr r3, r29
/* 80436A1C 0043395C  7F E5 FB 78 */	mr r5, r31
/* 80436A20 00433960  38 84 00 80 */	addi r4, r4, 0x80
/* 80436A24 00433964  48 00 24 D9 */	bl draw__Q25P2JME8TControlFPA4_fPA4_f
/* 80436A28 00433968  7F E3 FB 78 */	mr r3, r31
/* 80436A2C 0043396C  38 80 00 00 */	li r4, 0
/* 80436A30 00433970  4B CB 2B 49 */	bl GXLoadPosMtxImm
.L_80436A34:
/* 80436A34 00433974  80 7D 00 60 */	lwz r3, 0x60(r29)
/* 80436A38 00433978  7F C4 F3 78 */	mr r4, r30
/* 80436A3C 0043397C  38 BE 01 90 */	addi r5, r30, 0x190
/* 80436A40 00433980  81 83 00 00 */	lwz r12, 0(r3)
/* 80436A44 00433984  81 8C 00 9C */	lwz r12, 0x9c(r12)
/* 80436A48 00433988  7D 89 03 A6 */	mtctr r12
/* 80436A4C 0043398C  4E 80 04 21 */	bctrl 
.L_80436A50:
/* 80436A50 00433990  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80436A54 00433994  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80436A58 00433998  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80436A5C 0043399C  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80436A60 004339A0  7C 08 03 A6 */	mtlr r0
/* 80436A64 004339A4  38 21 00 20 */	addi r1, r1, 0x20
/* 80436A68 004339A8  4E 80 00 20 */	blr 
.endfn draw__Q35P2JME5Movie8TControlFR8Graphics

.fn __dt__Q35P2JME5Movie8TControlFv, weak
/* 80436A6C 004339AC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80436A70 004339B0  7C 08 02 A6 */	mflr r0
/* 80436A74 004339B4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80436A78 004339B8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80436A7C 004339BC  7C 9F 23 78 */	mr r31, r4
/* 80436A80 004339C0  93 C1 00 08 */	stw r30, 8(r1)
/* 80436A84 004339C4  7C 7E 1B 79 */	or. r30, r3, r3
/* 80436A88 004339C8  41 82 00 48 */	beq .L_80436AD0
/* 80436A8C 004339CC  3C 80 80 4F */	lis r4, __vt__Q35P2JME5Movie8TControl@ha
/* 80436A90 004339D0  38 04 C6 4C */	addi r0, r4, __vt__Q35P2JME5Movie8TControl@l
/* 80436A94 004339D4  90 1E 00 00 */	stw r0, 0(r30)
/* 80436A98 004339D8  41 82 00 28 */	beq .L_80436AC0
/* 80436A9C 004339DC  3C 80 80 4F */	lis r4, __vt__Q35P2JME6Window8TControl@ha
/* 80436AA0 004339E0  38 04 CC 5C */	addi r0, r4, __vt__Q35P2JME6Window8TControl@l
/* 80436AA4 004339E4  90 1E 00 00 */	stw r0, 0(r30)
/* 80436AA8 004339E8  41 82 00 18 */	beq .L_80436AC0
/* 80436AAC 004339EC  3C A0 80 4F */	lis r5, __vt__Q25P2JME8TControl@ha
/* 80436AB0 004339F0  38 80 00 00 */	li r4, 0
/* 80436AB4 004339F4  38 05 C9 F0 */	addi r0, r5, __vt__Q25P2JME8TControl@l
/* 80436AB8 004339F8  90 1E 00 00 */	stw r0, 0(r30)
/* 80436ABC 004339FC  4B BD 19 2D */	bl __dt__Q28JMessage8TControlFv
.L_80436AC0:
/* 80436AC0 00433A00  7F E0 07 35 */	extsh. r0, r31
/* 80436AC4 00433A04  40 81 00 0C */	ble .L_80436AD0
/* 80436AC8 00433A08  7F C3 F3 78 */	mr r3, r30
/* 80436ACC 00433A0C  4B BE D5 E9 */	bl __dl__FPv
.L_80436AD0:
/* 80436AD0 00433A10  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80436AD4 00433A14  7F C3 F3 78 */	mr r3, r30
/* 80436AD8 00433A18  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80436ADC 00433A1C  83 C1 00 08 */	lwz r30, 8(r1)
/* 80436AE0 00433A20  7C 08 03 A6 */	mtlr r0
/* 80436AE4 00433A24  38 21 00 10 */	addi r1, r1, 0x10
/* 80436AE8 00433A28  4E 80 00 20 */	blr 
.endfn __dt__Q35P2JME5Movie8TControlFv

.fn draw__Q35P2JME6Window8TControlFPA4_fPA4_f, weak
/* 80436AEC 00433A2C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80436AF0 00433A30  7C 08 02 A6 */	mflr r0
/* 80436AF4 00433A34  90 01 00 14 */	stw r0, 0x14(r1)
/* 80436AF8 00433A38  48 00 24 05 */	bl draw__Q25P2JME8TControlFPA4_fPA4_f
/* 80436AFC 00433A3C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80436B00 00433A40  7C 08 03 A6 */	mtlr r0
/* 80436B04 00433A44  38 21 00 10 */	addi r1, r1, 0x10
/* 80436B08 00433A48  4E 80 00 20 */	blr 
.endfn draw__Q35P2JME6Window8TControlFPA4_fPA4_f

.fn createRenderingProcessor__Q35P2JME6Window8TControlFv, weak
/* 80436B0C 00433A4C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80436B10 00433A50  7C 08 02 A6 */	mflr r0
/* 80436B14 00433A54  90 01 00 14 */	stw r0, 0x14(r1)
/* 80436B18 00433A58  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80436B1C 00433A5C  93 C1 00 08 */	stw r30, 8(r1)
/* 80436B20 00433A60  7C 7E 1B 78 */	mr r30, r3
/* 80436B24 00433A64  38 60 01 44 */	li r3, 0x144
/* 80436B28 00433A68  4B BE D3 7D */	bl __nw__FUl
/* 80436B2C 00433A6C  7C 7F 1B 79 */	or. r31, r3, r3
/* 80436B30 00433A70  41 82 00 3C */	beq .L_80436B6C
/* 80436B34 00433A74  80 1E 00 38 */	lwz r0, 0x38(r30)
/* 80436B38 00433A78  28 00 00 00 */	cmplwi r0, 0
/* 80436B3C 00433A7C  40 82 00 20 */	bne .L_80436B5C
/* 80436B40 00433A80  3C 60 80 4A */	lis r3, lbl_8049A844@ha
/* 80436B44 00433A84  3C A0 80 4A */	lis r5, lbl_8049A710@ha
/* 80436B48 00433A88  38 63 A8 44 */	addi r3, r3, lbl_8049A844@l
/* 80436B4C 00433A8C  38 80 00 79 */	li r4, 0x79
/* 80436B50 00433A90  38 A5 A7 10 */	addi r5, r5, lbl_8049A710@l
/* 80436B54 00433A94  4C C6 31 82 */	crclr 6
/* 80436B58 00433A98  4B BF 3A E9 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80436B5C:
/* 80436B5C 00433A9C  80 9E 00 38 */	lwz r4, 0x38(r30)
/* 80436B60 00433AA0  7F E3 FB 78 */	mr r3, r31
/* 80436B64 00433AA4  48 00 89 99 */	bl __ct__Q35P2JME6Window19TRenderingProcessorFPQ28JMessage10TReference
/* 80436B68 00433AA8  7C 7F 1B 78 */	mr r31, r3
.L_80436B6C:
/* 80436B6C 00433AAC  93 FE 00 40 */	stw r31, 0x40(r30)
/* 80436B70 00433AB0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80436B74 00433AB4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80436B78 00433AB8  83 C1 00 08 */	lwz r30, 8(r1)
/* 80436B7C 00433ABC  7C 08 03 A6 */	mtlr r0
/* 80436B80 00433AC0  38 21 00 10 */	addi r1, r1, 0x10
/* 80436B84 00433AC4  4E 80 00 20 */	blr 
.endfn createRenderingProcessor__Q35P2JME6Window8TControlFv

.fn createSequenceProcessor__Q35P2JME6Window8TControlFv, weak
/* 80436B88 00433AC8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80436B8C 00433ACC  7C 08 02 A6 */	mflr r0
/* 80436B90 00433AD0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80436B94 00433AD4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80436B98 00433AD8  93 C1 00 08 */	stw r30, 8(r1)
/* 80436B9C 00433ADC  7C 7E 1B 78 */	mr r30, r3
/* 80436BA0 00433AE0  38 60 00 70 */	li r3, 0x70
/* 80436BA4 00433AE4  4B BE D3 01 */	bl __nw__FUl
/* 80436BA8 00433AE8  7C 7F 1B 79 */	or. r31, r3, r3
/* 80436BAC 00433AEC  41 82 00 40 */	beq .L_80436BEC
/* 80436BB0 00433AF0  80 1E 00 38 */	lwz r0, 0x38(r30)
/* 80436BB4 00433AF4  28 00 00 00 */	cmplwi r0, 0
/* 80436BB8 00433AF8  40 82 00 20 */	bne .L_80436BD8
/* 80436BBC 00433AFC  3C 60 80 4A */	lis r3, lbl_8049A844@ha
/* 80436BC0 00433B00  3C A0 80 4A */	lis r5, lbl_8049A710@ha
/* 80436BC4 00433B04  38 63 A8 44 */	addi r3, r3, lbl_8049A844@l
/* 80436BC8 00433B08  38 80 00 79 */	li r4, 0x79
/* 80436BCC 00433B0C  38 A5 A7 10 */	addi r5, r5, lbl_8049A710@l
/* 80436BD0 00433B10  4C C6 31 82 */	crclr 6
/* 80436BD4 00433B14  4B BF 3A 6D */	bl panic_f__12JUTExceptionFPCciPCce
.L_80436BD8:
/* 80436BD8 00433B18  80 9E 00 38 */	lwz r4, 0x38(r30)
/* 80436BDC 00433B1C  7F E3 FB 78 */	mr r3, r31
/* 80436BE0 00433B20  7F C5 F3 78 */	mr r5, r30
/* 80436BE4 00433B24  48 00 86 E5 */	bl __ct__Q35P2JME6Window18TSequenceProcessorFPQ28JMessage10TReferencePQ28JMessage8TControl
/* 80436BE8 00433B28  7C 7F 1B 78 */	mr r31, r3
.L_80436BEC:
/* 80436BEC 00433B2C  93 FE 00 3C */	stw r31, 0x3c(r30)
/* 80436BF0 00433B30  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80436BF4 00433B34  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80436BF8 00433B38  83 C1 00 08 */	lwz r30, 8(r1)
/* 80436BFC 00433B3C  7C 08 03 A6 */	mtlr r0
/* 80436C00 00433B40  38 21 00 10 */	addi r1, r1, 0x10
/* 80436C04 00433B44  4E 80 00 20 */	blr 
.endfn createSequenceProcessor__Q35P2JME6Window8TControlFv

.fn setMessageID__Q25P2JME8TControlFUx, weak
/* 80436C08 00433B48  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80436C0C 00433B4C  7C 08 02 A6 */	mflr r0
/* 80436C10 00433B50  90 01 00 14 */	stw r0, 0x14(r1)
/* 80436C14 00433B54  38 81 00 08 */	addi r4, r1, 8
/* 80436C18 00433B58  90 A1 00 08 */	stw r5, 8(r1)
/* 80436C1C 00433B5C  90 C1 00 0C */	stw r6, 0xc(r1)
/* 80436C20 00433B60  81 83 00 00 */	lwz r12, 0(r3)
/* 80436C24 00433B64  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 80436C28 00433B68  7D 89 03 A6 */	mtctr r12
/* 80436C2C 00433B6C  4E 80 04 21 */	bctrl 
/* 80436C30 00433B70  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80436C34 00433B74  7C 08 03 A6 */	mtlr r0
/* 80436C38 00433B78  38 21 00 10 */	addi r1, r1, 0x10
/* 80436C3C 00433B7C  4E 80 00 20 */	blr 
.endfn setMessageID__Q25P2JME8TControlFUx

.fn createReference__Q25P2JME8TControlFv, weak
/* 80436C40 00433B80  80 8D 9B D8 */	lwz r4, gP2JMEMgr@sda21(r13)
/* 80436C44 00433B84  80 04 00 34 */	lwz r0, 0x34(r4)
/* 80436C48 00433B88  90 03 00 38 */	stw r0, 0x38(r3)
/* 80436C4C 00433B8C  4E 80 00 20 */	blr 
.endfn createReference__Q25P2JME8TControlFv

.fn createResourceContainer__Q25P2JME8TControlFv, weak
/* 80436C50 00433B90  80 8D 9B D8 */	lwz r4, gP2JMEMgr@sda21(r13)
/* 80436C54 00433B94  80 04 00 30 */	lwz r0, 0x30(r4)
/* 80436C58 00433B98  90 03 00 44 */	stw r0, 0x44(r3)
/* 80436C5C 00433B9C  4E 80 00 20 */	blr 
.endfn createResourceContainer__Q25P2JME8TControlFv

.fn __dt__Q35P2JME5Movie19MessageWindowScreenFv, weak
/* 80436C60 00433BA0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80436C64 00433BA4  7C 08 02 A6 */	mflr r0
/* 80436C68 00433BA8  90 01 00 14 */	stw r0, 0x14(r1)
/* 80436C6C 00433BAC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80436C70 00433BB0  7C 9F 23 78 */	mr r31, r4
/* 80436C74 00433BB4  93 C1 00 08 */	stw r30, 8(r1)
/* 80436C78 00433BB8  7C 7E 1B 79 */	or. r30, r3, r3
/* 80436C7C 00433BBC  41 82 00 6C */	beq .L_80436CE8
/* 80436C80 00433BC0  3C 60 80 4F */	lis r3, __vt__Q35P2JME5Movie19MessageWindowScreen@ha
/* 80436C84 00433BC4  38 03 C6 94 */	addi r0, r3, __vt__Q35P2JME5Movie19MessageWindowScreen@l
/* 80436C88 00433BC8  90 1E 00 00 */	stw r0, 0(r30)
/* 80436C8C 00433BCC  41 82 00 4C */	beq .L_80436CD8
/* 80436C90 00433BD0  3C 60 80 4F */	lis r3, __vt__Q29P2DScreen10Mgr_tuning@ha
/* 80436C94 00433BD4  38 03 C5 00 */	addi r0, r3, __vt__Q29P2DScreen10Mgr_tuning@l
/* 80436C98 00433BD8  90 1E 00 00 */	stw r0, 0(r30)
/* 80436C9C 00433BDC  41 82 00 3C */	beq .L_80436CD8
/* 80436CA0 00433BE0  3C 60 80 4F */	lis r3, __vt__Q29P2DScreen3Mgr@ha
/* 80436CA4 00433BE4  34 1E 01 18 */	addic. r0, r30, 0x118
/* 80436CA8 00433BE8  38 03 C5 A0 */	addi r0, r3, __vt__Q29P2DScreen3Mgr@l
/* 80436CAC 00433BEC  90 1E 00 00 */	stw r0, 0(r30)
/* 80436CB0 00433BF0  41 82 00 1C */	beq .L_80436CCC
/* 80436CB4 00433BF4  3C 80 80 4D */	lis r4, __vt__Q29P2DScreen4Node@ha
/* 80436CB8 00433BF8  38 7E 01 18 */	addi r3, r30, 0x118
/* 80436CBC 00433BFC  38 04 7B 0C */	addi r0, r4, __vt__Q29P2DScreen4Node@l
/* 80436CC0 00433C00  38 80 00 00 */	li r4, 0
/* 80436CC4 00433C04  90 1E 01 18 */	stw r0, 0x118(r30)
/* 80436CC8 00433C08  4B FD A8 C1 */	bl __dt__5CNodeFv
.L_80436CCC:
/* 80436CCC 00433C0C  7F C3 F3 78 */	mr r3, r30
/* 80436CD0 00433C10  38 80 00 00 */	li r4, 0
/* 80436CD4 00433C14  4B C0 88 49 */	bl __dt__9J2DScreenFv
.L_80436CD8:
/* 80436CD8 00433C18  7F E0 07 35 */	extsh. r0, r31
/* 80436CDC 00433C1C  40 81 00 0C */	ble .L_80436CE8
/* 80436CE0 00433C20  7F C3 F3 78 */	mr r3, r30
/* 80436CE4 00433C24  4B BE D3 D1 */	bl __dl__FPv
.L_80436CE8:
/* 80436CE8 00433C28  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80436CEC 00433C2C  7F C3 F3 78 */	mr r3, r30
/* 80436CF0 00433C30  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80436CF4 00433C34  83 C1 00 08 */	lwz r30, 8(r1)
/* 80436CF8 00433C38  7C 08 03 A6 */	mtlr r0
/* 80436CFC 00433C3C  38 21 00 10 */	addi r1, r1, 0x10
/* 80436D00 00433C40  4E 80 00 20 */	blr 
.endfn __dt__Q35P2JME5Movie19MessageWindowScreenFv

.fn __dt__Q35P2JME5Movie13PodIconScreenFv, weak
/* 80436D04 00433C44  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80436D08 00433C48  7C 08 02 A6 */	mflr r0
/* 80436D0C 00433C4C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80436D10 00433C50  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80436D14 00433C54  7C 9F 23 78 */	mr r31, r4
/* 80436D18 00433C58  93 C1 00 08 */	stw r30, 8(r1)
/* 80436D1C 00433C5C  7C 7E 1B 79 */	or. r30, r3, r3
/* 80436D20 00433C60  41 82 00 6C */	beq .L_80436D8C
/* 80436D24 00433C64  3C 60 80 4F */	lis r3, __vt__Q35P2JME5Movie13PodIconScreen@ha
/* 80436D28 00433C68  38 03 C7 34 */	addi r0, r3, __vt__Q35P2JME5Movie13PodIconScreen@l
/* 80436D2C 00433C6C  90 1E 00 00 */	stw r0, 0(r30)
/* 80436D30 00433C70  41 82 00 4C */	beq .L_80436D7C
/* 80436D34 00433C74  3C 60 80 4F */	lis r3, __vt__Q29P2DScreen10Mgr_tuning@ha
/* 80436D38 00433C78  38 03 C5 00 */	addi r0, r3, __vt__Q29P2DScreen10Mgr_tuning@l
/* 80436D3C 00433C7C  90 1E 00 00 */	stw r0, 0(r30)
/* 80436D40 00433C80  41 82 00 3C */	beq .L_80436D7C
/* 80436D44 00433C84  3C 60 80 4F */	lis r3, __vt__Q29P2DScreen3Mgr@ha
/* 80436D48 00433C88  34 1E 01 18 */	addic. r0, r30, 0x118
/* 80436D4C 00433C8C  38 03 C5 A0 */	addi r0, r3, __vt__Q29P2DScreen3Mgr@l
/* 80436D50 00433C90  90 1E 00 00 */	stw r0, 0(r30)
/* 80436D54 00433C94  41 82 00 1C */	beq .L_80436D70
/* 80436D58 00433C98  3C 80 80 4D */	lis r4, __vt__Q29P2DScreen4Node@ha
/* 80436D5C 00433C9C  38 7E 01 18 */	addi r3, r30, 0x118
/* 80436D60 00433CA0  38 04 7B 0C */	addi r0, r4, __vt__Q29P2DScreen4Node@l
/* 80436D64 00433CA4  38 80 00 00 */	li r4, 0
/* 80436D68 00433CA8  90 1E 01 18 */	stw r0, 0x118(r30)
/* 80436D6C 00433CAC  4B FD A8 1D */	bl __dt__5CNodeFv
.L_80436D70:
/* 80436D70 00433CB0  7F C3 F3 78 */	mr r3, r30
/* 80436D74 00433CB4  38 80 00 00 */	li r4, 0
/* 80436D78 00433CB8  4B C0 87 A5 */	bl __dt__9J2DScreenFv
.L_80436D7C:
/* 80436D7C 00433CBC  7F E0 07 35 */	extsh. r0, r31
/* 80436D80 00433CC0  40 81 00 0C */	ble .L_80436D8C
/* 80436D84 00433CC4  7F C3 F3 78 */	mr r3, r30
/* 80436D88 00433CC8  4B BE D3 2D */	bl __dl__FPv
.L_80436D8C:
/* 80436D8C 00433CCC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80436D90 00433CD0  7F C3 F3 78 */	mr r3, r30
/* 80436D94 00433CD4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80436D98 00433CD8  83 C1 00 08 */	lwz r30, 8(r1)
/* 80436D9C 00433CDC  7C 08 03 A6 */	mtlr r0
/* 80436DA0 00433CE0  38 21 00 10 */	addi r1, r1, 0x10
/* 80436DA4 00433CE4  4E 80 00 20 */	blr 
.endfn __dt__Q35P2JME5Movie13PodIconScreenFv

.fn __dt__Q35P2JME5Movie8AbtnPaneFv, weak
/* 80436DA8 00433CE8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80436DAC 00433CEC  7C 08 02 A6 */	mflr r0
/* 80436DB0 00433CF0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80436DB4 00433CF4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80436DB8 00433CF8  7C 9F 23 78 */	mr r31, r4
/* 80436DBC 00433CFC  93 C1 00 08 */	stw r30, 8(r1)
/* 80436DC0 00433D00  7C 7E 1B 79 */	or. r30, r3, r3
/* 80436DC4 00433D04  41 82 00 48 */	beq .L_80436E0C
/* 80436DC8 00433D08  3C 80 80 4F */	lis r4, __vt__Q35P2JME5Movie8AbtnPane@ha
/* 80436DCC 00433D0C  38 04 C7 D4 */	addi r0, r4, __vt__Q35P2JME5Movie8AbtnPane@l
/* 80436DD0 00433D10  90 1E 00 00 */	stw r0, 0(r30)
/* 80436DD4 00433D14  41 82 00 28 */	beq .L_80436DFC
/* 80436DD8 00433D18  3C 80 80 4D */	lis r4, __vt__Q29P2DScreen12CallBackNode@ha
/* 80436DDC 00433D1C  38 04 7F 2C */	addi r0, r4, __vt__Q29P2DScreen12CallBackNode@l
/* 80436DE0 00433D20  90 1E 00 00 */	stw r0, 0(r30)
/* 80436DE4 00433D24  41 82 00 18 */	beq .L_80436DFC
/* 80436DE8 00433D28  3C A0 80 4D */	lis r5, __vt__Q29P2DScreen4Node@ha
/* 80436DEC 00433D2C  38 80 00 00 */	li r4, 0
/* 80436DF0 00433D30  38 05 7B 0C */	addi r0, r5, __vt__Q29P2DScreen4Node@l
/* 80436DF4 00433D34  90 1E 00 00 */	stw r0, 0(r30)
/* 80436DF8 00433D38  4B FD A7 91 */	bl __dt__5CNodeFv
.L_80436DFC:
/* 80436DFC 00433D3C  7F E0 07 35 */	extsh. r0, r31
/* 80436E00 00433D40  40 81 00 0C */	ble .L_80436E0C
/* 80436E04 00433D44  7F C3 F3 78 */	mr r3, r30
/* 80436E08 00433D48  4B BE D2 AD */	bl __dl__FPv
.L_80436E0C:
/* 80436E0C 00433D4C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80436E10 00433D50  7F C3 F3 78 */	mr r3, r30
/* 80436E14 00433D54  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80436E18 00433D58  83 C1 00 08 */	lwz r30, 8(r1)
/* 80436E1C 00433D5C  7C 08 03 A6 */	mtlr r0
/* 80436E20 00433D60  38 21 00 10 */	addi r1, r1, 0x10
/* 80436E24 00433D64  4E 80 00 20 */	blr 
.endfn __dt__Q35P2JME5Movie8AbtnPaneFv

.fn __dt__Q35P2JME5Movie10WindowPaneFv, weak
/* 80436E28 00433D68  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80436E2C 00433D6C  7C 08 02 A6 */	mflr r0
/* 80436E30 00433D70  90 01 00 14 */	stw r0, 0x14(r1)
/* 80436E34 00433D74  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80436E38 00433D78  7C 9F 23 78 */	mr r31, r4
/* 80436E3C 00433D7C  93 C1 00 08 */	stw r30, 8(r1)
/* 80436E40 00433D80  7C 7E 1B 79 */	or. r30, r3, r3
/* 80436E44 00433D84  41 82 00 48 */	beq .L_80436E8C
/* 80436E48 00433D88  3C 80 80 4F */	lis r4, __vt__Q35P2JME5Movie10WindowPane@ha
/* 80436E4C 00433D8C  38 04 C7 F0 */	addi r0, r4, __vt__Q35P2JME5Movie10WindowPane@l
/* 80436E50 00433D90  90 1E 00 00 */	stw r0, 0(r30)
/* 80436E54 00433D94  41 82 00 28 */	beq .L_80436E7C
/* 80436E58 00433D98  3C 80 80 4D */	lis r4, __vt__Q29P2DScreen12CallBackNode@ha
/* 80436E5C 00433D9C  38 04 7F 2C */	addi r0, r4, __vt__Q29P2DScreen12CallBackNode@l
/* 80436E60 00433DA0  90 1E 00 00 */	stw r0, 0(r30)
/* 80436E64 00433DA4  41 82 00 18 */	beq .L_80436E7C
/* 80436E68 00433DA8  3C A0 80 4D */	lis r5, __vt__Q29P2DScreen4Node@ha
/* 80436E6C 00433DAC  38 80 00 00 */	li r4, 0
/* 80436E70 00433DB0  38 05 7B 0C */	addi r0, r5, __vt__Q29P2DScreen4Node@l
/* 80436E74 00433DB4  90 1E 00 00 */	stw r0, 0(r30)
/* 80436E78 00433DB8  4B FD A7 11 */	bl __dt__5CNodeFv
.L_80436E7C:
/* 80436E7C 00433DBC  7F E0 07 35 */	extsh. r0, r31
/* 80436E80 00433DC0  40 81 00 0C */	ble .L_80436E8C
/* 80436E84 00433DC4  7F C3 F3 78 */	mr r3, r30
/* 80436E88 00433DC8  4B BE D2 2D */	bl __dl__FPv
.L_80436E8C:
/* 80436E8C 00433DCC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80436E90 00433DD0  7F C3 F3 78 */	mr r3, r30
/* 80436E94 00433DD4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80436E98 00433DD8  83 C1 00 08 */	lwz r30, 8(r1)
/* 80436E9C 00433DDC  7C 08 03 A6 */	mtlr r0
/* 80436EA0 00433DE0  38 21 00 10 */	addi r1, r1, 0x10
/* 80436EA4 00433DE4  4E 80 00 20 */	blr 
.endfn __dt__Q35P2JME5Movie10WindowPaneFv

.fn __sinit_movieMessage_cpp, local
/* 80436EA8 00433DE8  3C 80 80 51 */	lis r4, __float_nan@ha
/* 80436EAC 00433DEC  38 00 FF FF */	li r0, -1
/* 80436EB0 00433DF0  C0 04 48 B0 */	lfs f0, __float_nan@l(r4)
/* 80436EB4 00433DF4  3C 60 80 4F */	lis r3, govNAN___Q24Game5P2JST@ha
/* 80436EB8 00433DF8  90 0D 9B B8 */	stw r0, gu32NAN___Q24Game5P2JST@sda21(r13)
/* 80436EBC 00433DFC  D4 03 C6 40 */	stfsu f0, govNAN___Q24Game5P2JST@l(r3)
/* 80436EC0 00433E00  D0 0D 9B BC */	stfs f0, gfNAN___Q24Game5P2JST@sda21(r13)
/* 80436EC4 00433E04  D0 03 00 04 */	stfs f0, 4(r3)
/* 80436EC8 00433E08  D0 03 00 08 */	stfs f0, 8(r3)
/* 80436ECC 00433E0C  4E 80 00 20 */	blr 
.endfn __sinit_movieMessage_cpp
