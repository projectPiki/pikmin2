.include "macros.inc"
.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 0x8
.global __vt__Q32og6Screen14ContenaCounter
__vt__Q32og6Screen14ContenaCounter:
	.4byte 0
	.4byte 0
	.4byte __dt__Q32og6Screen14ContenaCounterFv
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

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global __ct__Q32og6Screen14ContenaCounterFPQ32og6Screen17DispMemberContena
__ct__Q32og6Screen14ContenaCounterFPQ32og6Screen17DispMemberContena:
/* 80307B58 00304A98  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80307B5C 00304A9C  7C 08 02 A6 */	mflr r0
/* 80307B60 00304AA0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80307B64 00304AA4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80307B68 00304AA8  7C 9F 23 78 */	mr r31, r4
/* 80307B6C 00304AAC  93 C1 00 08 */	stw r30, 8(r1)
/* 80307B70 00304AB0  7C 7E 1B 78 */	mr r30, r3
/* 80307B74 00304AB4  48 12 D2 39 */	bl __ct__Q29P2DScreen10Mgr_tuningFv
/* 80307B78 00304AB8  3C 60 80 4E */	lis r3, __vt__Q32og6Screen14ContenaCounter@ha
/* 80307B7C 00304ABC  38 00 00 00 */	li r0, 0
/* 80307B80 00304AC0  38 83 80 28 */	addi r4, r3, __vt__Q32og6Screen14ContenaCounter@l
/* 80307B84 00304AC4  7F C3 F3 78 */	mr r3, r30
/* 80307B88 00304AC8  90 9E 00 00 */	stw r4, 0(r30)
/* 80307B8C 00304ACC  93 FE 01 48 */	stw r31, 0x148(r30)
/* 80307B90 00304AD0  80 9E 01 48 */	lwz r4, 0x148(r30)
/* 80307B94 00304AD4  38 84 00 0C */	addi r4, r4, 0xc
/* 80307B98 00304AD8  90 9E 01 64 */	stw r4, 0x164(r30)
/* 80307B9C 00304ADC  80 9E 01 48 */	lwz r4, 0x148(r30)
/* 80307BA0 00304AE0  38 84 00 28 */	addi r4, r4, 0x28
/* 80307BA4 00304AE4  90 9E 01 68 */	stw r4, 0x168(r30)
/* 80307BA8 00304AE8  80 9E 01 48 */	lwz r4, 0x148(r30)
/* 80307BAC 00304AEC  38 84 00 14 */	addi r4, r4, 0x14
/* 80307BB0 00304AF0  90 9E 01 6C */	stw r4, 0x16c(r30)
/* 80307BB4 00304AF4  80 9E 01 48 */	lwz r4, 0x148(r30)
/* 80307BB8 00304AF8  38 84 00 20 */	addi r4, r4, 0x20
/* 80307BBC 00304AFC  90 9E 01 70 */	stw r4, 0x170(r30)
/* 80307BC0 00304B00  90 1E 01 4C */	stw r0, 0x14c(r30)
/* 80307BC4 00304B04  90 1E 01 50 */	stw r0, 0x150(r30)
/* 80307BC8 00304B08  90 1E 01 54 */	stw r0, 0x154(r30)
/* 80307BCC 00304B0C  90 1E 01 58 */	stw r0, 0x158(r30)
/* 80307BD0 00304B10  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80307BD4 00304B14  83 C1 00 08 */	lwz r30, 8(r1)
/* 80307BD8 00304B18  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80307BDC 00304B1C  7C 08 03 A6 */	mtlr r0
/* 80307BE0 00304B20  38 21 00 10 */	addi r1, r1, 0x10
/* 80307BE4 00304B24  4E 80 00 20 */	blr 

.global setblo__Q32og6Screen14ContenaCounterFPcP10JKRArchive
setblo__Q32og6Screen14ContenaCounterFPcP10JKRArchive:
/* 80307BE8 00304B28  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80307BEC 00304B2C  7C 08 02 A6 */	mflr r0
/* 80307BF0 00304B30  90 01 00 24 */	stw r0, 0x24(r1)
/* 80307BF4 00304B34  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80307BF8 00304B38  7C BF 2B 78 */	mr r31, r5
/* 80307BFC 00304B3C  7F E6 FB 78 */	mr r6, r31
/* 80307C00 00304B40  3C A0 01 04 */	lis r5, 0x104
/* 80307C04 00304B44  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80307C08 00304B48  7C 7E 1B 78 */	mr r30, r3
/* 80307C0C 00304B4C  4B D3 7A 19 */	bl set__9J2DScreenFPCcUlP10JKRArchive
/* 80307C10 00304B50  38 60 00 04 */	li r3, 4
/* 80307C14 00304B54  64 63 00 04 */	oris r3, r3, 4
/* 80307C18 00304B58  7C 72 E3 A6 */	mtspr 0x392, r3
/* 80307C1C 00304B5C  38 60 00 05 */	li r3, 5
/* 80307C20 00304B60  64 63 00 05 */	oris r3, r3, 5
/* 80307C24 00304B64  7C 73 E3 A6 */	mtspr 0x393, r3
/* 80307C28 00304B68  38 60 00 06 */	li r3, 6
/* 80307C2C 00304B6C  64 63 00 06 */	oris r3, r3, 6
/* 80307C30 00304B70  7C 74 E3 A6 */	mtspr 0x394, r3
/* 80307C34 00304B74  38 60 00 07 */	li r3, 7
/* 80307C38 00304B78  64 63 00 07 */	oris r3, r3, 7
/* 80307C3C 00304B7C  7C 75 E3 A6 */	mtspr 0x395, r3
/* 80307C40 00304B80  7F C3 F3 78 */	mr r3, r30
/* 80307C44 00304B84  4B FF B6 D1 */	bl setAlphaScreen__Q22og6ScreenFP7J2DPane
/* 80307C48 00304B88  7F C3 F3 78 */	mr r3, r30
/* 80307C4C 00304B8C  38 80 00 FF */	li r4, 0xff
/* 80307C50 00304B90  81 9E 00 00 */	lwz r12, 0(r30)
/* 80307C54 00304B94  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 80307C58 00304B98  7D 89 03 A6 */	mtctr r12
/* 80307C5C 00304B9C  4E 80 04 21 */	bctrl 
/* 80307C60 00304BA0  93 E1 00 08 */	stw r31, 8(r1)
/* 80307C64 00304BA4  3C 80 61 5F */	lis r4, 0x615F6B31@ha
/* 80307C68 00304BA8  7F C3 F3 78 */	mr r3, r30
/* 80307C6C 00304BAC  38 A0 00 00 */	li r5, 0
/* 80307C70 00304BB0  80 FE 01 64 */	lwz r7, 0x164(r30)
/* 80307C74 00304BB4  38 C4 6B 31 */	addi r6, r4, 0x615F6B31@l
/* 80307C78 00304BB8  39 00 00 05 */	li r8, 5
/* 80307C7C 00304BBC  39 20 00 01 */	li r9, 1
/* 80307C80 00304BC0  39 40 00 01 */	li r10, 1
/* 80307C84 00304BC4  48 00 49 85 */	bl setCallBack_CounterRV__Q22og6ScreenFPQ29P2DScreen3MgrUxPUlUsbbP10JKRArchive
/* 80307C88 00304BC8  90 7E 01 4C */	stw r3, 0x14c(r30)
/* 80307C8C 00304BCC  3C 80 62 5F */	lis r4, 0x625F6B31@ha
/* 80307C90 00304BD0  7F C3 F3 78 */	mr r3, r30
/* 80307C94 00304BD4  38 A0 00 00 */	li r5, 0
/* 80307C98 00304BD8  93 E1 00 08 */	stw r31, 8(r1)
/* 80307C9C 00304BDC  38 C4 6B 31 */	addi r6, r4, 0x625F6B31@l
/* 80307CA0 00304BE0  39 00 00 04 */	li r8, 4
/* 80307CA4 00304BE4  39 20 00 00 */	li r9, 0
/* 80307CA8 00304BE8  80 FE 01 68 */	lwz r7, 0x168(r30)
/* 80307CAC 00304BEC  39 40 00 01 */	li r10, 1
/* 80307CB0 00304BF0  48 00 49 59 */	bl setCallBack_CounterRV__Q22og6ScreenFPQ29P2DScreen3MgrUxPUlUsbbP10JKRArchive
/* 80307CB4 00304BF4  90 7E 01 50 */	stw r3, 0x150(r30)
/* 80307CB8 00304BF8  3C 80 63 5F */	lis r4, 0x635F6B31@ha
/* 80307CBC 00304BFC  7F C3 F3 78 */	mr r3, r30
/* 80307CC0 00304C00  38 A0 00 00 */	li r5, 0
/* 80307CC4 00304C04  93 E1 00 08 */	stw r31, 8(r1)
/* 80307CC8 00304C08  38 C4 6B 31 */	addi r6, r4, 0x635F6B31@l
/* 80307CCC 00304C0C  39 00 00 04 */	li r8, 4
/* 80307CD0 00304C10  39 20 00 01 */	li r9, 1
/* 80307CD4 00304C14  80 FE 01 6C */	lwz r7, 0x16c(r30)
/* 80307CD8 00304C18  39 40 00 01 */	li r10, 1
/* 80307CDC 00304C1C  48 00 49 2D */	bl setCallBack_CounterRV__Q22og6ScreenFPQ29P2DScreen3MgrUxPUlUsbbP10JKRArchive
/* 80307CE0 00304C20  90 7E 01 54 */	stw r3, 0x154(r30)
/* 80307CE4 00304C24  3C 80 64 5F */	lis r4, 0x645F6B31@ha
/* 80307CE8 00304C28  7F C3 F3 78 */	mr r3, r30
/* 80307CEC 00304C2C  38 A0 00 00 */	li r5, 0
/* 80307CF0 00304C30  93 E1 00 08 */	stw r31, 8(r1)
/* 80307CF4 00304C34  38 C4 6B 31 */	addi r6, r4, 0x645F6B31@l
/* 80307CF8 00304C38  39 00 00 04 */	li r8, 4
/* 80307CFC 00304C3C  39 20 00 01 */	li r9, 1
/* 80307D00 00304C40  80 FE 01 70 */	lwz r7, 0x170(r30)
/* 80307D04 00304C44  39 40 00 01 */	li r10, 1
/* 80307D08 00304C48  48 00 49 01 */	bl setCallBack_CounterRV__Q22og6ScreenFPQ29P2DScreen3MgrUxPUlUsbbP10JKRArchive
/* 80307D0C 00304C4C  90 7E 01 58 */	stw r3, 0x158(r30)
/* 80307D10 00304C50  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80307D14 00304C54  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80307D18 00304C58  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80307D1C 00304C5C  7C 08 03 A6 */	mtlr r0
/* 80307D20 00304C60  38 21 00 20 */	addi r1, r1, 0x20
/* 80307D24 00304C64  4E 80 00 20 */	blr 

.global __dt__Q32og6Screen14ContenaCounterFv
__dt__Q32og6Screen14ContenaCounterFv:
/* 80307D28 00304C68  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80307D2C 00304C6C  7C 08 02 A6 */	mflr r0
/* 80307D30 00304C70  90 01 00 14 */	stw r0, 0x14(r1)
/* 80307D34 00304C74  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80307D38 00304C78  7C 9F 23 78 */	mr r31, r4
/* 80307D3C 00304C7C  93 C1 00 08 */	stw r30, 8(r1)
/* 80307D40 00304C80  7C 7E 1B 79 */	or. r30, r3, r3
/* 80307D44 00304C84  41 82 00 6C */	beq lbl_80307DB0
/* 80307D48 00304C88  3C 60 80 4E */	lis r3, __vt__Q32og6Screen14ContenaCounter@ha
/* 80307D4C 00304C8C  38 03 80 28 */	addi r0, r3, __vt__Q32og6Screen14ContenaCounter@l
/* 80307D50 00304C90  90 1E 00 00 */	stw r0, 0(r30)
/* 80307D54 00304C94  41 82 00 4C */	beq lbl_80307DA0
/* 80307D58 00304C98  3C 60 80 4F */	lis r3, __vt__Q29P2DScreen10Mgr_tuning@ha
/* 80307D5C 00304C9C  38 03 C5 00 */	addi r0, r3, __vt__Q29P2DScreen10Mgr_tuning@l
/* 80307D60 00304CA0  90 1E 00 00 */	stw r0, 0(r30)
/* 80307D64 00304CA4  41 82 00 3C */	beq lbl_80307DA0
/* 80307D68 00304CA8  3C 60 80 4F */	lis r3, __vt__Q29P2DScreen3Mgr@ha
/* 80307D6C 00304CAC  34 1E 01 18 */	addic. r0, r30, 0x118
/* 80307D70 00304CB0  38 03 C5 A0 */	addi r0, r3, __vt__Q29P2DScreen3Mgr@l
/* 80307D74 00304CB4  90 1E 00 00 */	stw r0, 0(r30)
/* 80307D78 00304CB8  41 82 00 1C */	beq lbl_80307D94
/* 80307D7C 00304CBC  3C 80 80 4D */	lis r4, __vt__Q29P2DScreen4Node@ha
/* 80307D80 00304CC0  38 7E 01 18 */	addi r3, r30, 0x118
/* 80307D84 00304CC4  38 04 7B 0C */	addi r0, r4, __vt__Q29P2DScreen4Node@l
/* 80307D88 00304CC8  38 80 00 00 */	li r4, 0
/* 80307D8C 00304CCC  90 1E 01 18 */	stw r0, 0x118(r30)
/* 80307D90 00304CD0  48 10 97 F9 */	bl __dt__5CNodeFv
lbl_80307D94:
/* 80307D94 00304CD4  7F C3 F3 78 */	mr r3, r30
/* 80307D98 00304CD8  38 80 00 00 */	li r4, 0
/* 80307D9C 00304CDC  4B D3 77 81 */	bl __dt__9J2DScreenFv
lbl_80307DA0:
/* 80307DA0 00304CE0  7F E0 07 35 */	extsh. r0, r31
/* 80307DA4 00304CE4  40 81 00 0C */	ble lbl_80307DB0
/* 80307DA8 00304CE8  7F C3 F3 78 */	mr r3, r30
/* 80307DAC 00304CEC  4B D1 C3 09 */	bl __dl__FPv
lbl_80307DB0:
/* 80307DB0 00304CF0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80307DB4 00304CF4  7F C3 F3 78 */	mr r3, r30
/* 80307DB8 00304CF8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80307DBC 00304CFC  83 C1 00 08 */	lwz r30, 8(r1)
/* 80307DC0 00304D00  7C 08 03 A6 */	mtlr r0
/* 80307DC4 00304D04  38 21 00 10 */	addi r1, r1, 0x10
/* 80307DC8 00304D08  4E 80 00 20 */	blr 
