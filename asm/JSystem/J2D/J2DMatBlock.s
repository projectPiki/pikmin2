.include "macros.inc"
.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
.obj lbl_804785D0, local
	.4byte 0x00000000
	.4byte 0x00000002
	.4byte 0x00000001
	.4byte 0x00000003
.endobj lbl_804785D0

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.obj __vt__15J2DIndBlockFull, global
	.4byte 0
	.4byte 0
	.4byte initialize__15J2DIndBlockFullFv
	.4byte setGX__15J2DIndBlockFullFv
	.4byte getType__15J2DIndBlockFullFv
	.4byte setIndTexStageNum__15J2DIndBlockFullFUc
	.4byte getIndTexStageNum__15J2DIndBlockFullCFv
	.4byte setIndTexOrder__15J2DIndBlockFullFUl14J2DIndTexOrder
	.4byte getIndTexOrder__15J2DIndBlockFullFUl
	.4byte setIndTexMtx__15J2DIndBlockFullFUl12J2DIndTexMtx
	.4byte getIndTexMtx__15J2DIndBlockFullFUl
	.4byte setIndTexCoordScale__15J2DIndBlockFullFUl19J2DIndTexCoordScale
	.4byte getIndTexCoordScale__15J2DIndBlockFullFUl
	.4byte __dt__15J2DIndBlockFullFv
.endobj __vt__15J2DIndBlockFull
.obj __vt__11J2DIndBlock, weak
	.4byte 0
	.4byte 0
	.4byte initialize__11J2DIndBlockFv
	.4byte setGX__11J2DIndBlockFv
	.4byte 0
	.4byte setIndTexStageNum__11J2DIndBlockFUc
	.4byte getIndTexStageNum__11J2DIndBlockCFv
	.4byte setIndTexOrder__11J2DIndBlockFUl14J2DIndTexOrder
	.4byte getIndTexOrder__11J2DIndBlockFUl
	.4byte setIndTexMtx__11J2DIndBlockFUl12J2DIndTexMtx
	.4byte getIndTexMtx__11J2DIndBlockFUl
	.4byte setIndTexCoordScale__11J2DIndBlockFUl19J2DIndTexCoordScale
	.4byte getIndTexCoordScale__11J2DIndBlockFUl
	.4byte __dt__11J2DIndBlockFv
.endobj __vt__11J2DIndBlock
.obj __vt__13J2DTevBlock16, global
	.4byte 0
	.4byte 0
	.4byte initialize__13J2DTevBlock16Fv
	.4byte setGX__13J2DTevBlock16Fv
	.4byte loadTexture__13J2DTevBlock16F11_GXTexMapIDUl
	.4byte getType__13J2DTevBlock16Fv
	.4byte getMaxStage__13J2DTevBlock16Fv
	.4byte setTexNo__13J2DTevBlock16FUlUs
	.4byte getTexNo__13J2DTevBlock16CFUl
	.4byte setFontNo__13J2DTevBlock16FUs
	.4byte getFontNo__13J2DTevBlock16CFv
	.4byte setTevOrder__13J2DTevBlock16FUl11J2DTevOrder
	.4byte getTevOrder__13J2DTevBlock16FUl
	.4byte setTevColor__13J2DTevBlock16FUl13J2DGXColorS10
	.4byte getTevColor__13J2DTevBlock16FUl
	.4byte setTevKColor__13J2DTevBlock16FUlQ28JUtility6TColor
	.4byte getTevKColor__13J2DTevBlock16FUl
	.4byte setTevKColorSel__13J2DTevBlock16FUlUc
	.4byte getTevKColorSel__13J2DTevBlock16FUl
	.4byte setTevKAlphaSel__13J2DTevBlock16FUlUc
	.4byte getTevKAlphaSel__13J2DTevBlock16FUl
	.4byte setTevStageNum__13J2DTevBlock16FUc
	.4byte getTevStageNum__13J2DTevBlock16CFv
	.4byte setTevStage__13J2DTevBlock16FUl11J2DTevStage
	.4byte getTevStage__13J2DTevBlock16FUl
	.4byte setTevSwapModeInfo__13J2DTevBlock16FUl18J2DTevSwapModeInfo
	.4byte setTevSwapModeTable__13J2DTevBlock16FUl19J2DTevSwapModeTable
	.4byte getTevSwapModeTable__13J2DTevBlock16FUl
	.4byte setIndTevStage__13J2DTevBlock16FUl14J2DIndTevStage
	.4byte getIndTevStage__13J2DTevBlock16FUl
	.4byte insertTexture__13J2DTevBlock16FUlPC7ResTIMG
	.4byte insertTexture__13J2DTevBlock16FUlPC7ResTIMGP10JUTPalette
	.4byte insertTexture__13J2DTevBlock16FUlP10JUTTexture
	.4byte setTexture__13J2DTevBlock16FUlPC7ResTIMG
	.4byte setTexture__13J2DTevBlock16FUlP10JUTTexture
	.4byte removeTexture__13J2DTevBlock16FUl
	.4byte setFont__13J2DTevBlock16FP7ResFONT
	.4byte setFont__13J2DTevBlock16FP7JUTFont
	.4byte setPalette__13J2DTevBlock16FUlPC7ResTLUT
	.4byte prepareTexture__13J2DTevBlock16FUc
	.4byte getTexture__13J2DTevBlock16FUl
	.4byte getPalette__13J2DTevBlock16FUl
	.4byte getFont__13J2DTevBlock16Fv
	.4byte shiftDeleteFlag__13J2DTevBlock16FUcb
	.4byte setUndeleteFlag__13J2DTevBlock16FUc
	.4byte setFontUndeleteFlag__13J2DTevBlock16Fv
	.4byte __dt__13J2DTevBlock16Fv
.endobj __vt__13J2DTevBlock16
.obj __vt__12J2DTevBlock8, global
	.4byte 0
	.4byte 0
	.4byte initialize__12J2DTevBlock8Fv
	.4byte setGX__12J2DTevBlock8Fv
	.4byte loadTexture__12J2DTevBlock8F11_GXTexMapIDUl
	.4byte getType__12J2DTevBlock8Fv
	.4byte getMaxStage__12J2DTevBlock8Fv
	.4byte setTexNo__12J2DTevBlock8FUlUs
	.4byte getTexNo__12J2DTevBlock8CFUl
	.4byte setFontNo__12J2DTevBlock8FUs
	.4byte getFontNo__12J2DTevBlock8CFv
	.4byte setTevOrder__12J2DTevBlock8FUl11J2DTevOrder
	.4byte getTevOrder__12J2DTevBlock8FUl
	.4byte setTevColor__12J2DTevBlock8FUl13J2DGXColorS10
	.4byte getTevColor__12J2DTevBlock8FUl
	.4byte setTevKColor__12J2DTevBlock8FUlQ28JUtility6TColor
	.4byte getTevKColor__12J2DTevBlock8FUl
	.4byte setTevKColorSel__12J2DTevBlock8FUlUc
	.4byte getTevKColorSel__12J2DTevBlock8FUl
	.4byte setTevKAlphaSel__12J2DTevBlock8FUlUc
	.4byte getTevKAlphaSel__12J2DTevBlock8FUl
	.4byte setTevStageNum__12J2DTevBlock8FUc
	.4byte getTevStageNum__12J2DTevBlock8CFv
	.4byte setTevStage__12J2DTevBlock8FUl11J2DTevStage
	.4byte getTevStage__12J2DTevBlock8FUl
	.4byte setTevSwapModeInfo__12J2DTevBlock8FUl18J2DTevSwapModeInfo
	.4byte setTevSwapModeTable__12J2DTevBlock8FUl19J2DTevSwapModeTable
	.4byte getTevSwapModeTable__12J2DTevBlock8FUl
	.4byte setIndTevStage__12J2DTevBlock8FUl14J2DIndTevStage
	.4byte getIndTevStage__12J2DTevBlock8FUl
	.4byte insertTexture__12J2DTevBlock8FUlPC7ResTIMG
	.4byte insertTexture__12J2DTevBlock8FUlPC7ResTIMGP10JUTPalette
	.4byte insertTexture__12J2DTevBlock8FUlP10JUTTexture
	.4byte setTexture__12J2DTevBlock8FUlPC7ResTIMG
	.4byte setTexture__12J2DTevBlock8FUlP10JUTTexture
	.4byte removeTexture__12J2DTevBlock8FUl
	.4byte setFont__12J2DTevBlock8FP7ResFONT
	.4byte setFont__12J2DTevBlock8FP7JUTFont
	.4byte setPalette__12J2DTevBlock8FUlPC7ResTLUT
	.4byte prepareTexture__12J2DTevBlock8FUc
	.4byte getTexture__12J2DTevBlock8FUl
	.4byte getPalette__12J2DTevBlock8FUl
	.4byte getFont__12J2DTevBlock8Fv
	.4byte shiftDeleteFlag__12J2DTevBlock8FUcb
	.4byte setUndeleteFlag__12J2DTevBlock8FUc
	.4byte setFontUndeleteFlag__12J2DTevBlock8Fv
	.4byte __dt__12J2DTevBlock8Fv
.endobj __vt__12J2DTevBlock8
.obj __vt__12J2DTevBlock4, global
	.4byte 0
	.4byte 0
	.4byte initialize__12J2DTevBlock4Fv
	.4byte setGX__12J2DTevBlock4Fv
	.4byte loadTexture__12J2DTevBlock4F11_GXTexMapIDUl
	.4byte getType__12J2DTevBlock4Fv
	.4byte getMaxStage__12J2DTevBlock4Fv
	.4byte setTexNo__12J2DTevBlock4FUlUs
	.4byte getTexNo__12J2DTevBlock4CFUl
	.4byte setFontNo__12J2DTevBlock4FUs
	.4byte getFontNo__12J2DTevBlock4CFv
	.4byte setTevOrder__12J2DTevBlock4FUl11J2DTevOrder
	.4byte getTevOrder__12J2DTevBlock4FUl
	.4byte setTevColor__12J2DTevBlock4FUl13J2DGXColorS10
	.4byte getTevColor__12J2DTevBlock4FUl
	.4byte setTevKColor__12J2DTevBlock4FUlQ28JUtility6TColor
	.4byte getTevKColor__12J2DTevBlock4FUl
	.4byte setTevKColorSel__12J2DTevBlock4FUlUc
	.4byte getTevKColorSel__12J2DTevBlock4FUl
	.4byte setTevKAlphaSel__12J2DTevBlock4FUlUc
	.4byte getTevKAlphaSel__12J2DTevBlock4FUl
	.4byte setTevStageNum__12J2DTevBlock4FUc
	.4byte getTevStageNum__12J2DTevBlock4CFv
	.4byte setTevStage__12J2DTevBlock4FUl11J2DTevStage
	.4byte getTevStage__12J2DTevBlock4FUl
	.4byte setTevSwapModeInfo__12J2DTevBlock4FUl18J2DTevSwapModeInfo
	.4byte setTevSwapModeTable__12J2DTevBlock4FUl19J2DTevSwapModeTable
	.4byte getTevSwapModeTable__12J2DTevBlock4FUl
	.4byte setIndTevStage__12J2DTevBlock4FUl14J2DIndTevStage
	.4byte getIndTevStage__12J2DTevBlock4FUl
	.4byte insertTexture__12J2DTevBlock4FUlPC7ResTIMG
	.4byte insertTexture__12J2DTevBlock4FUlPC7ResTIMGP10JUTPalette
	.4byte insertTexture__12J2DTevBlock4FUlP10JUTTexture
	.4byte setTexture__12J2DTevBlock4FUlPC7ResTIMG
	.4byte setTexture__12J2DTevBlock4FUlP10JUTTexture
	.4byte removeTexture__12J2DTevBlock4FUl
	.4byte setFont__12J2DTevBlock4FP7ResFONT
	.4byte setFont__12J2DTevBlock4FP7JUTFont
	.4byte setPalette__12J2DTevBlock4FUlPC7ResTLUT
	.4byte prepareTexture__12J2DTevBlock4FUc
	.4byte getTexture__12J2DTevBlock4FUl
	.4byte getPalette__12J2DTevBlock4FUl
	.4byte getFont__12J2DTevBlock4Fv
	.4byte shiftDeleteFlag__12J2DTevBlock4FUcb
	.4byte setUndeleteFlag__12J2DTevBlock4FUc
	.4byte setFontUndeleteFlag__12J2DTevBlock4Fv
	.4byte __dt__12J2DTevBlock4Fv
.endobj __vt__12J2DTevBlock4
.obj __vt__12J2DTevBlock2, global
	.4byte 0
	.4byte 0
	.4byte initialize__12J2DTevBlock2Fv
	.4byte setGX__12J2DTevBlock2Fv
	.4byte loadTexture__12J2DTevBlock2F11_GXTexMapIDUl
	.4byte getType__12J2DTevBlock2Fv
	.4byte getMaxStage__12J2DTevBlock2Fv
	.4byte setTexNo__12J2DTevBlock2FUlUs
	.4byte getTexNo__12J2DTevBlock2CFUl
	.4byte setFontNo__12J2DTevBlock2FUs
	.4byte getFontNo__12J2DTevBlock2CFv
	.4byte setTevOrder__12J2DTevBlock2FUl11J2DTevOrder
	.4byte getTevOrder__12J2DTevBlock2FUl
	.4byte setTevColor__12J2DTevBlock2FUl13J2DGXColorS10
	.4byte getTevColor__12J2DTevBlock2FUl
	.4byte setTevKColor__12J2DTevBlock2FUlQ28JUtility6TColor
	.4byte getTevKColor__12J2DTevBlock2FUl
	.4byte setTevKColorSel__12J2DTevBlock2FUlUc
	.4byte getTevKColorSel__12J2DTevBlock2FUl
	.4byte setTevKAlphaSel__12J2DTevBlock2FUlUc
	.4byte getTevKAlphaSel__12J2DTevBlock2FUl
	.4byte setTevStageNum__12J2DTevBlock2FUc
	.4byte getTevStageNum__12J2DTevBlock2CFv
	.4byte setTevStage__12J2DTevBlock2FUl11J2DTevStage
	.4byte getTevStage__12J2DTevBlock2FUl
	.4byte setTevSwapModeInfo__12J2DTevBlock2FUl18J2DTevSwapModeInfo
	.4byte setTevSwapModeTable__12J2DTevBlock2FUl19J2DTevSwapModeTable
	.4byte getTevSwapModeTable__12J2DTevBlock2FUl
	.4byte setIndTevStage__12J2DTevBlock2FUl14J2DIndTevStage
	.4byte getIndTevStage__12J2DTevBlock2FUl
	.4byte insertTexture__12J2DTevBlock2FUlPC7ResTIMG
	.4byte insertTexture__12J2DTevBlock2FUlPC7ResTIMGP10JUTPalette
	.4byte insertTexture__12J2DTevBlock2FUlP10JUTTexture
	.4byte setTexture__12J2DTevBlock2FUlPC7ResTIMG
	.4byte setTexture__12J2DTevBlock2FUlP10JUTTexture
	.4byte removeTexture__12J2DTevBlock2FUl
	.4byte setFont__12J2DTevBlock2FP7ResFONT
	.4byte setFont__12J2DTevBlock2FP7JUTFont
	.4byte setPalette__12J2DTevBlock2FUlPC7ResTLUT
	.4byte prepareTexture__12J2DTevBlock2FUc
	.4byte getTexture__12J2DTevBlock2FUl
	.4byte getPalette__12J2DTevBlock2FUl
	.4byte getFont__12J2DTevBlock2Fv
	.4byte shiftDeleteFlag__12J2DTevBlock2FUcb
	.4byte setUndeleteFlag__12J2DTevBlock2FUc
	.4byte setFontUndeleteFlag__12J2DTevBlock2Fv
	.4byte __dt__12J2DTevBlock2Fv
.endobj __vt__12J2DTevBlock2
.obj __vt__12J2DTevBlock1, global
	.4byte 0
	.4byte 0
	.4byte initialize__12J2DTevBlock1Fv
	.4byte setGX__12J2DTevBlock1Fv
	.4byte loadTexture__12J2DTevBlock1F11_GXTexMapIDUl
	.4byte getType__12J2DTevBlock1Fv
	.4byte getMaxStage__12J2DTevBlock1Fv
	.4byte setTexNo__12J2DTevBlock1FUlUs
	.4byte getTexNo__12J2DTevBlock1CFUl
	.4byte setFontNo__12J2DTevBlock1FUs
	.4byte getFontNo__12J2DTevBlock1CFv
	.4byte setTevOrder__12J2DTevBlock1FUl11J2DTevOrder
	.4byte getTevOrder__12J2DTevBlock1FUl
	.4byte setTevColor__12J2DTevBlock1FUl13J2DGXColorS10
	.4byte getTevColor__12J2DTevBlock1FUl
	.4byte setTevKColor__12J2DTevBlock1FUlQ28JUtility6TColor
	.4byte getTevKColor__12J2DTevBlock1FUl
	.4byte setTevKColorSel__12J2DTevBlock1FUlUc
	.4byte getTevKColorSel__12J2DTevBlock1FUl
	.4byte setTevKAlphaSel__12J2DTevBlock1FUlUc
	.4byte getTevKAlphaSel__12J2DTevBlock1FUl
	.4byte setTevStageNum__12J2DTevBlock1FUc
	.4byte getTevStageNum__12J2DTevBlock1CFv
	.4byte setTevStage__12J2DTevBlock1FUl11J2DTevStage
	.4byte getTevStage__12J2DTevBlock1FUl
	.4byte setTevSwapModeInfo__12J2DTevBlock1FUl18J2DTevSwapModeInfo
	.4byte setTevSwapModeTable__12J2DTevBlock1FUl19J2DTevSwapModeTable
	.4byte getTevSwapModeTable__12J2DTevBlock1FUl
	.4byte setIndTevStage__12J2DTevBlock1FUl14J2DIndTevStage
	.4byte getIndTevStage__12J2DTevBlock1FUl
	.4byte insertTexture__12J2DTevBlock1FUlPC7ResTIMG
	.4byte insertTexture__12J2DTevBlock1FUlPC7ResTIMGP10JUTPalette
	.4byte insertTexture__12J2DTevBlock1FUlP10JUTTexture
	.4byte setTexture__12J2DTevBlock1FUlPC7ResTIMG
	.4byte setTexture__12J2DTevBlock1FUlP10JUTTexture
	.4byte removeTexture__12J2DTevBlock1FUl
	.4byte setFont__12J2DTevBlock1FP7ResFONT
	.4byte setFont__12J2DTevBlock1FP7JUTFont
	.4byte setPalette__12J2DTevBlock1FUlPC7ResTLUT
	.4byte prepareTexture__12J2DTevBlock1FUc
	.4byte getTexture__12J2DTevBlock1FUl
	.4byte getPalette__12J2DTevBlock1FUl
	.4byte getFont__12J2DTevBlock1Fv
	.4byte shiftDeleteFlag__12J2DTevBlock1FUcb
	.4byte setUndeleteFlag__12J2DTevBlock1FUc
	.4byte setFontUndeleteFlag__12J2DTevBlock1Fv
	.4byte __dt__12J2DTevBlock1Fv
.endobj __vt__12J2DTevBlock1
.obj __vt__11J2DTevBlock, global
	.4byte 0
	.4byte 0
	.4byte initialize__11J2DTevBlockFv
	.4byte setGX__11J2DTevBlockFv
	.4byte loadTexture__11J2DTevBlockF11_GXTexMapIDUl
	.4byte 0
	.4byte 0
	.4byte setTexNo__11J2DTevBlockFUlUs
	.4byte getTexNo__11J2DTevBlockCFUl
	.4byte setFontNo__11J2DTevBlockFUs
	.4byte getFontNo__11J2DTevBlockCFv
	.4byte setTevOrder__11J2DTevBlockFUl11J2DTevOrder
	.4byte getTevOrder__11J2DTevBlockFUl
	.4byte setTevColor__11J2DTevBlockFUl13J2DGXColorS10
	.4byte getTevColor__11J2DTevBlockFUl
	.4byte setTevKColor__11J2DTevBlockFUlQ28JUtility6TColor
	.4byte getTevKColor__11J2DTevBlockFUl
	.4byte setTevKColorSel__11J2DTevBlockFUlUc
	.4byte getTevKColorSel__11J2DTevBlockFUl
	.4byte setTevKAlphaSel__11J2DTevBlockFUlUc
	.4byte getTevKAlphaSel__11J2DTevBlockFUl
	.4byte setTevStageNum__11J2DTevBlockFUc
	.4byte getTevStageNum__11J2DTevBlockCFv
	.4byte setTevStage__11J2DTevBlockFUl11J2DTevStage
	.4byte getTevStage__11J2DTevBlockFUl
	.4byte setTevSwapModeInfo__11J2DTevBlockFUl18J2DTevSwapModeInfo
	.4byte setTevSwapModeTable__11J2DTevBlockFUl19J2DTevSwapModeTable
	.4byte getTevSwapModeTable__11J2DTevBlockFUl
	.4byte setIndTevStage__11J2DTevBlockFUl14J2DIndTevStage
	.4byte getIndTevStage__11J2DTevBlockFUl
	.4byte insertTexture__11J2DTevBlockFUlPC7ResTIMG
	.4byte insertTexture__11J2DTevBlockFUlPC7ResTIMGP10JUTPalette
	.4byte insertTexture__11J2DTevBlockFUlP10JUTTexture
	.4byte setTexture__11J2DTevBlockFUlPC7ResTIMG
	.4byte setTexture__11J2DTevBlockFUlP10JUTTexture
	.4byte removeTexture__11J2DTevBlockFUl
	.4byte setFont__11J2DTevBlockFP7ResFONT
	.4byte setFont__11J2DTevBlockFP7JUTFont
	.4byte setPalette__11J2DTevBlockFUlPC7ResTLUT
	.4byte prepareTexture__11J2DTevBlockFUc
	.4byte getTexture__11J2DTevBlockFUl
	.4byte getPalette__11J2DTevBlockFUl
	.4byte getFont__11J2DTevBlockFv
	.4byte shiftDeleteFlag__11J2DTevBlockFUcb
	.4byte setUndeleteFlag__11J2DTevBlockFUc
	.4byte setFontUndeleteFlag__11J2DTevBlockFv
	.4byte __dt__11J2DTevBlockFv
.endobj __vt__11J2DTevBlock
.obj __vt__14J2DTexGenBlock, global
	.4byte 0
	.4byte 0
	.4byte __dt__14J2DTexGenBlockFv
.endobj __vt__14J2DTexGenBlock

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.fn initialize__13J2DColorBlockFv, global
/* 80049B20 00046A60  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80049B24 00046A64  38 80 00 02 */	li r4, 2
/* 80049B28 00046A68  81 22 85 AC */	lwz r9, j2dDefaultColInfo@sda21(r2)
/* 80049B2C 00046A6C  39 42 85 D8 */	addi r10, r2, j2dDefaultColorChanInfo@sda21
/* 80049B30 00046A70  38 00 00 00 */	li r0, 0
/* 80049B34 00046A74  91 21 00 08 */	stw r9, 8(r1)
/* 80049B38 00046A78  89 01 00 08 */	lbz r8, 8(r1)
/* 80049B3C 00046A7C  88 E1 00 09 */	lbz r7, 9(r1)
/* 80049B40 00046A80  99 03 00 00 */	stb r8, 0(r3)
/* 80049B44 00046A84  88 C1 00 0A */	lbz r6, 0xa(r1)
/* 80049B48 00046A88  88 A1 00 0B */	lbz r5, 0xb(r1)
/* 80049B4C 00046A8C  98 E3 00 01 */	stb r7, 1(r3)
/* 80049B50 00046A90  98 C3 00 02 */	stb r6, 2(r3)
/* 80049B54 00046A94  91 21 00 08 */	stw r9, 8(r1)
/* 80049B58 00046A98  99 01 00 0C */	stb r8, 0xc(r1)
/* 80049B5C 00046A9C  89 01 00 08 */	lbz r8, 8(r1)
/* 80049B60 00046AA0  98 A3 00 03 */	stb r5, 3(r3)
/* 80049B64 00046AA4  98 E1 00 0D */	stb r7, 0xd(r1)
/* 80049B68 00046AA8  88 E1 00 09 */	lbz r7, 9(r1)
/* 80049B6C 00046AAC  99 03 00 04 */	stb r8, 4(r3)
/* 80049B70 00046AB0  98 C1 00 0E */	stb r6, 0xe(r1)
/* 80049B74 00046AB4  88 C1 00 0A */	lbz r6, 0xa(r1)
/* 80049B78 00046AB8  98 E3 00 05 */	stb r7, 5(r3)
/* 80049B7C 00046ABC  98 A1 00 0F */	stb r5, 0xf(r1)
/* 80049B80 00046AC0  88 A1 00 0B */	lbz r5, 0xb(r1)
/* 80049B84 00046AC4  98 C3 00 06 */	stb r6, 6(r3)
/* 80049B88 00046AC8  98 A3 00 07 */	stb r5, 7(r3)
/* 80049B8C 00046ACC  98 83 00 08 */	stb r4, 8(r3)
/* 80049B90 00046AD0  88 8A 00 01 */	lbz r4, 1(r10)
/* 80049B94 00046AD4  99 01 00 0C */	stb r8, 0xc(r1)
/* 80049B98 00046AD8  B0 83 00 0A */	sth r4, 0xa(r3)
/* 80049B9C 00046ADC  88 8A 00 01 */	lbz r4, 1(r10)
/* 80049BA0 00046AE0  98 E1 00 0D */	stb r7, 0xd(r1)
/* 80049BA4 00046AE4  B0 83 00 0C */	sth r4, 0xc(r3)
/* 80049BA8 00046AE8  88 8A 00 01 */	lbz r4, 1(r10)
/* 80049BAC 00046AEC  98 C1 00 0E */	stb r6, 0xe(r1)
/* 80049BB0 00046AF0  B0 83 00 0E */	sth r4, 0xe(r3)
/* 80049BB4 00046AF4  88 8A 00 01 */	lbz r4, 1(r10)
/* 80049BB8 00046AF8  98 A1 00 0F */	stb r5, 0xf(r1)
/* 80049BBC 00046AFC  B0 83 00 10 */	sth r4, 0x10(r3)
/* 80049BC0 00046B00  98 03 00 12 */	stb r0, 0x12(r3)
/* 80049BC4 00046B04  38 21 00 10 */	addi r1, r1, 0x10
/* 80049BC8 00046B08  4E 80 00 20 */	blr 
.endfn initialize__13J2DColorBlockFv

.fn setGX__13J2DColorBlockFv, global
/* 80049BCC 00046B0C  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80049BD0 00046B10  7C 08 02 A6 */	mflr r0
/* 80049BD4 00046B14  90 01 00 34 */	stw r0, 0x34(r1)
/* 80049BD8 00046B18  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 80049BDC 00046B1C  93 C1 00 28 */	stw r30, 0x28(r1)
/* 80049BE0 00046B20  3B C0 00 00 */	li r30, 0
/* 80049BE4 00046B24  93 A1 00 24 */	stw r29, 0x24(r1)
/* 80049BE8 00046B28  93 81 00 20 */	stw r28, 0x20(r1)
/* 80049BEC 00046B2C  7C 7C 1B 78 */	mr r28, r3
/* 80049BF0 00046B30  7F 9F E3 78 */	mr r31, r28
.L_80049BF4:
/* 80049BF4 00046B34  80 1F 00 00 */	lwz r0, 0(r31)
/* 80049BF8 00046B38  38 7E 00 04 */	addi r3, r30, 4
/* 80049BFC 00046B3C  38 81 00 08 */	addi r4, r1, 8
/* 80049C00 00046B40  90 01 00 08 */	stw r0, 8(r1)
/* 80049C04 00046B44  48 09 D1 71 */	bl GXSetChanMatColor
/* 80049C08 00046B48  3B DE 00 01 */	addi r30, r30, 1
/* 80049C0C 00046B4C  3B FF 00 04 */	addi r31, r31, 4
/* 80049C10 00046B50  2C 1E 00 02 */	cmpwi r30, 2
/* 80049C14 00046B54  41 80 FF E0 */	blt .L_80049BF4
/* 80049C18 00046B58  88 7C 00 08 */	lbz r3, 8(r28)
/* 80049C1C 00046B5C  48 09 D2 49 */	bl GXSetNumChans
/* 80049C20 00046B60  3C 60 80 48 */	lis r3, lbl_804785D0@ha
/* 80049C24 00046B64  7F 9F E3 78 */	mr r31, r28
/* 80049C28 00046B68  38 C3 85 D0 */	addi r6, r3, lbl_804785D0@l
/* 80049C2C 00046B6C  3B C1 00 0C */	addi r30, r1, 0xc
/* 80049C30 00046B70  80 A6 00 00 */	lwz r5, 0(r6)
/* 80049C34 00046B74  3B A0 00 00 */	li r29, 0
/* 80049C38 00046B78  80 86 00 04 */	lwz r4, 4(r6)
/* 80049C3C 00046B7C  80 66 00 08 */	lwz r3, 8(r6)
/* 80049C40 00046B80  80 06 00 0C */	lwz r0, 0xc(r6)
/* 80049C44 00046B84  90 A1 00 0C */	stw r5, 0xc(r1)
/* 80049C48 00046B88  90 81 00 10 */	stw r4, 0x10(r1)
/* 80049C4C 00046B8C  90 61 00 14 */	stw r3, 0x14(r1)
/* 80049C50 00046B90  90 01 00 18 */	stw r0, 0x18(r1)
/* 80049C54 00046B94  48 00 00 34 */	b .L_80049C88
.L_80049C58:
/* 80049C58 00046B98  A0 1F 00 0A */	lhz r0, 0xa(r31)
/* 80049C5C 00046B9C  38 80 00 00 */	li r4, 0
/* 80049C60 00046BA0  80 7E 00 00 */	lwz r3, 0(r30)
/* 80049C64 00046BA4  38 A0 00 00 */	li r5, 0
/* 80049C68 00046BA8  54 06 07 FE */	clrlwi r6, r0, 0x1f
/* 80049C6C 00046BAC  38 E0 00 00 */	li r7, 0
/* 80049C70 00046BB0  39 00 00 00 */	li r8, 0
/* 80049C74 00046BB4  39 20 00 02 */	li r9, 2
/* 80049C78 00046BB8  48 09 D2 29 */	bl GXSetChanCtrl
/* 80049C7C 00046BBC  3B FF 00 02 */	addi r31, r31, 2
/* 80049C80 00046BC0  3B DE 00 04 */	addi r30, r30, 4
/* 80049C84 00046BC4  3B BD 00 01 */	addi r29, r29, 1
.L_80049C88:
/* 80049C88 00046BC8  88 1C 00 08 */	lbz r0, 8(r28)
/* 80049C8C 00046BCC  54 00 08 3C */	slwi r0, r0, 1
/* 80049C90 00046BD0  7C 1D 00 00 */	cmpw r29, r0
/* 80049C94 00046BD4  41 80 FF C4 */	blt .L_80049C58
/* 80049C98 00046BD8  88 7C 00 12 */	lbz r3, 0x12(r28)
/* 80049C9C 00046BDC  48 09 BF 0D */	bl GXSetCullMode
/* 80049CA0 00046BE0  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80049CA4 00046BE4  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 80049CA8 00046BE8  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 80049CAC 00046BEC  83 A1 00 24 */	lwz r29, 0x24(r1)
/* 80049CB0 00046BF0  83 81 00 20 */	lwz r28, 0x20(r1)
/* 80049CB4 00046BF4  7C 08 03 A6 */	mtlr r0
/* 80049CB8 00046BF8  38 21 00 30 */	addi r1, r1, 0x30
/* 80049CBC 00046BFC  4E 80 00 20 */	blr 
.endfn setGX__13J2DColorBlockFv

.fn initialize__14J2DTexGenBlockFv, global
/* 80049CC0 00046C00  38 A0 00 00 */	li r5, 0
/* 80049CC4 00046C04  3C 80 80 48 */	lis r4, j2dDefaultTexCoordInfo@ha
/* 80049CC8 00046C08  90 A3 00 00 */	stw r5, 0(r3)
/* 80049CCC 00046C0C  8C 04 86 48 */	lbzu r0, j2dDefaultTexCoordInfo@l(r4)
/* 80049CD0 00046C10  98 03 00 04 */	stb r0, 4(r3)
/* 80049CD4 00046C14  88 04 00 01 */	lbz r0, 1(r4)
/* 80049CD8 00046C18  98 03 00 05 */	stb r0, 5(r3)
/* 80049CDC 00046C1C  88 04 00 02 */	lbz r0, 2(r4)
/* 80049CE0 00046C20  98 03 00 06 */	stb r0, 6(r3)
/* 80049CE4 00046C24  88 04 00 00 */	lbz r0, 0(r4)
/* 80049CE8 00046C28  98 03 00 08 */	stb r0, 8(r3)
/* 80049CEC 00046C2C  88 04 00 01 */	lbz r0, 1(r4)
/* 80049CF0 00046C30  98 03 00 09 */	stb r0, 9(r3)
/* 80049CF4 00046C34  88 04 00 02 */	lbz r0, 2(r4)
/* 80049CF8 00046C38  98 03 00 0A */	stb r0, 0xa(r3)
/* 80049CFC 00046C3C  88 04 00 00 */	lbz r0, 0(r4)
/* 80049D00 00046C40  98 03 00 0C */	stb r0, 0xc(r3)
/* 80049D04 00046C44  88 04 00 01 */	lbz r0, 1(r4)
/* 80049D08 00046C48  98 03 00 0D */	stb r0, 0xd(r3)
/* 80049D0C 00046C4C  88 04 00 02 */	lbz r0, 2(r4)
/* 80049D10 00046C50  98 03 00 0E */	stb r0, 0xe(r3)
/* 80049D14 00046C54  88 04 00 00 */	lbz r0, 0(r4)
/* 80049D18 00046C58  98 03 00 10 */	stb r0, 0x10(r3)
/* 80049D1C 00046C5C  88 04 00 01 */	lbz r0, 1(r4)
/* 80049D20 00046C60  98 03 00 11 */	stb r0, 0x11(r3)
/* 80049D24 00046C64  88 04 00 02 */	lbz r0, 2(r4)
/* 80049D28 00046C68  98 03 00 12 */	stb r0, 0x12(r3)
/* 80049D2C 00046C6C  88 04 00 00 */	lbz r0, 0(r4)
/* 80049D30 00046C70  98 03 00 14 */	stb r0, 0x14(r3)
/* 80049D34 00046C74  88 04 00 01 */	lbz r0, 1(r4)
/* 80049D38 00046C78  98 03 00 15 */	stb r0, 0x15(r3)
/* 80049D3C 00046C7C  88 04 00 02 */	lbz r0, 2(r4)
/* 80049D40 00046C80  98 03 00 16 */	stb r0, 0x16(r3)
/* 80049D44 00046C84  88 04 00 00 */	lbz r0, 0(r4)
/* 80049D48 00046C88  98 03 00 18 */	stb r0, 0x18(r3)
/* 80049D4C 00046C8C  88 04 00 01 */	lbz r0, 1(r4)
/* 80049D50 00046C90  98 03 00 19 */	stb r0, 0x19(r3)
/* 80049D54 00046C94  88 04 00 02 */	lbz r0, 2(r4)
/* 80049D58 00046C98  98 03 00 1A */	stb r0, 0x1a(r3)
/* 80049D5C 00046C9C  88 04 00 00 */	lbz r0, 0(r4)
/* 80049D60 00046CA0  98 03 00 1C */	stb r0, 0x1c(r3)
/* 80049D64 00046CA4  88 04 00 01 */	lbz r0, 1(r4)
/* 80049D68 00046CA8  98 03 00 1D */	stb r0, 0x1d(r3)
/* 80049D6C 00046CAC  88 04 00 02 */	lbz r0, 2(r4)
/* 80049D70 00046CB0  98 03 00 1E */	stb r0, 0x1e(r3)
/* 80049D74 00046CB4  88 04 00 00 */	lbz r0, 0(r4)
/* 80049D78 00046CB8  98 03 00 20 */	stb r0, 0x20(r3)
/* 80049D7C 00046CBC  88 04 00 01 */	lbz r0, 1(r4)
/* 80049D80 00046CC0  98 03 00 21 */	stb r0, 0x21(r3)
/* 80049D84 00046CC4  88 04 00 02 */	lbz r0, 2(r4)
/* 80049D88 00046CC8  98 03 00 22 */	stb r0, 0x22(r3)
/* 80049D8C 00046CCC  90 A3 00 24 */	stw r5, 0x24(r3)
/* 80049D90 00046CD0  90 A3 00 28 */	stw r5, 0x28(r3)
/* 80049D94 00046CD4  90 A3 00 2C */	stw r5, 0x2c(r3)
/* 80049D98 00046CD8  90 A3 00 30 */	stw r5, 0x30(r3)
/* 80049D9C 00046CDC  90 A3 00 34 */	stw r5, 0x34(r3)
/* 80049DA0 00046CE0  90 A3 00 38 */	stw r5, 0x38(r3)
/* 80049DA4 00046CE4  90 A3 00 3C */	stw r5, 0x3c(r3)
/* 80049DA8 00046CE8  90 A3 00 40 */	stw r5, 0x40(r3)
/* 80049DAC 00046CEC  4E 80 00 20 */	blr 
.endfn initialize__14J2DTexGenBlockFv

.fn setGX__14J2DTexGenBlockFv, global
/* 80049DB0 00046CF0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80049DB4 00046CF4  7C 08 02 A6 */	mflr r0
/* 80049DB8 00046CF8  90 01 00 24 */	stw r0, 0x24(r1)
/* 80049DBC 00046CFC  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80049DC0 00046D00  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80049DC4 00046D04  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80049DC8 00046D08  7C 7D 1B 78 */	mr r29, r3
/* 80049DCC 00046D0C  80 03 00 00 */	lwz r0, 0(r3)
/* 80049DD0 00046D10  54 03 06 3E */	clrlwi r3, r0, 0x18
/* 80049DD4 00046D14  48 09 B1 C9 */	bl GXSetNumTexGens
/* 80049DD8 00046D18  7F BF EB 78 */	mr r31, r29
/* 80049DDC 00046D1C  3B C0 00 00 */	li r30, 0
/* 80049DE0 00046D20  48 00 00 28 */	b .L_80049E08
.L_80049DE4:
/* 80049DE4 00046D24  88 9F 00 04 */	lbz r4, 4(r31)
/* 80049DE8 00046D28  7F C3 F3 78 */	mr r3, r30
/* 80049DEC 00046D2C  88 BF 00 05 */	lbz r5, 5(r31)
/* 80049DF0 00046D30  38 E0 00 00 */	li r7, 0
/* 80049DF4 00046D34  88 DF 00 06 */	lbz r6, 6(r31)
/* 80049DF8 00046D38  39 00 00 7D */	li r8, 0x7d
/* 80049DFC 00046D3C  48 09 AF 21 */	bl GXSetTexCoordGen2
/* 80049E00 00046D40  3B FF 00 04 */	addi r31, r31, 4
/* 80049E04 00046D44  3B DE 00 01 */	addi r30, r30, 1
.L_80049E08:
/* 80049E08 00046D48  80 1D 00 00 */	lwz r0, 0(r29)
/* 80049E0C 00046D4C  7C 1E 00 40 */	cmplw r30, r0
/* 80049E10 00046D50  41 80 FF D4 */	blt .L_80049DE4
/* 80049E14 00046D54  3B C0 00 00 */	li r30, 0
/* 80049E18 00046D58  48 00 00 24 */	b .L_80049E3C
.L_80049E1C:
/* 80049E1C 00046D5C  57 C3 15 BA */	rlwinm r3, r30, 2, 0x16, 0x1d
/* 80049E20 00046D60  57 C4 06 3E */	clrlwi r4, r30, 0x18
/* 80049E24 00046D64  38 03 00 24 */	addi r0, r3, 0x24
/* 80049E28 00046D68  7C 7D 00 2E */	lwzx r3, r29, r0
/* 80049E2C 00046D6C  28 03 00 00 */	cmplwi r3, 0
/* 80049E30 00046D70  41 82 00 08 */	beq .L_80049E38
/* 80049E34 00046D74  48 00 F3 E9 */	bl load__9J2DTexMtxFUl
.L_80049E38:
/* 80049E38 00046D78  3B DE 00 01 */	addi r30, r30, 1
.L_80049E3C:
/* 80049E3C 00046D7C  57 C0 06 3E */	clrlwi r0, r30, 0x18
/* 80049E40 00046D80  28 00 00 08 */	cmplwi r0, 8
/* 80049E44 00046D84  41 80 FF D8 */	blt .L_80049E1C
/* 80049E48 00046D88  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80049E4C 00046D8C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80049E50 00046D90  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80049E54 00046D94  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80049E58 00046D98  7C 08 03 A6 */	mtlr r0
/* 80049E5C 00046D9C  38 21 00 20 */	addi r1, r1, 0x20
/* 80049E60 00046DA0  4E 80 00 20 */	blr 
.endfn setGX__14J2DTexGenBlockFv

.fn __dt__14J2DTexGenBlockFv, global
/* 80049E64 00046DA4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80049E68 00046DA8  7C 08 02 A6 */	mflr r0
/* 80049E6C 00046DAC  90 01 00 24 */	stw r0, 0x24(r1)
/* 80049E70 00046DB0  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80049E74 00046DB4  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80049E78 00046DB8  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80049E7C 00046DBC  7C 9D 23 78 */	mr r29, r4
/* 80049E80 00046DC0  93 81 00 10 */	stw r28, 0x10(r1)
/* 80049E84 00046DC4  7C 7C 1B 79 */	or. r28, r3, r3
/* 80049E88 00046DC8  41 82 00 48 */	beq .L_80049ED0
/* 80049E8C 00046DCC  3C 60 80 4A */	lis r3, __vt__14J2DTexGenBlock@ha
/* 80049E90 00046DD0  7F 9F E3 78 */	mr r31, r28
/* 80049E94 00046DD4  38 03 11 50 */	addi r0, r3, __vt__14J2DTexGenBlock@l
/* 80049E98 00046DD8  3B C0 00 00 */	li r30, 0
/* 80049E9C 00046DDC  90 1C 00 44 */	stw r0, 0x44(r28)
.L_80049EA0:
/* 80049EA0 00046DE0  80 7F 00 24 */	lwz r3, 0x24(r31)
/* 80049EA4 00046DE4  28 03 00 00 */	cmplwi r3, 0
/* 80049EA8 00046DE8  41 82 00 08 */	beq .L_80049EB0
/* 80049EAC 00046DEC  4B FD A2 09 */	bl __dl__FPv
.L_80049EB0:
/* 80049EB0 00046DF0  3B DE 00 01 */	addi r30, r30, 1
/* 80049EB4 00046DF4  3B FF 00 04 */	addi r31, r31, 4
/* 80049EB8 00046DF8  2C 1E 00 08 */	cmpwi r30, 8
/* 80049EBC 00046DFC  41 80 FF E4 */	blt .L_80049EA0
/* 80049EC0 00046E00  7F A0 07 35 */	extsh. r0, r29
/* 80049EC4 00046E04  40 81 00 0C */	ble .L_80049ED0
/* 80049EC8 00046E08  7F 83 E3 78 */	mr r3, r28
/* 80049ECC 00046E0C  4B FD A1 E9 */	bl __dl__FPv
.L_80049ED0:
/* 80049ED0 00046E10  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80049ED4 00046E14  7F 83 E3 78 */	mr r3, r28
/* 80049ED8 00046E18  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80049EDC 00046E1C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80049EE0 00046E20  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80049EE4 00046E24  83 81 00 10 */	lwz r28, 0x10(r1)
/* 80049EE8 00046E28  7C 08 03 A6 */	mtlr r0
/* 80049EEC 00046E2C  38 21 00 20 */	addi r1, r1, 0x20
/* 80049EF0 00046E30  4E 80 00 20 */	blr 
.endfn __dt__14J2DTexGenBlockFv

.fn setTexMtx__14J2DTexGenBlockFUlR9J2DTexMtx, global
/* 80049EF4 00046E34  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 80049EF8 00046E38  7C 08 02 A6 */	mflr r0
/* 80049EFC 00046E3C  90 01 00 44 */	stw r0, 0x44(r1)
/* 80049F00 00046E40  54 80 10 3A */	slwi r0, r4, 2
/* 80049F04 00046E44  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 80049F08 00046E48  7F E3 02 14 */	add r31, r3, r0
/* 80049F0C 00046E4C  93 C1 00 38 */	stw r30, 0x38(r1)
/* 80049F10 00046E50  7C BE 2B 78 */	mr r30, r5
/* 80049F14 00046E54  81 3F 00 24 */	lwz r9, 0x24(r31)
/* 80049F18 00046E58  28 09 00 00 */	cmplwi r9, 0
/* 80049F1C 00046E5C  40 82 00 78 */	bne .L_80049F94
/* 80049F20 00046E60  38 60 00 54 */	li r3, 0x54
/* 80049F24 00046E64  4B FD 9F 81 */	bl __nw__FUl
/* 80049F28 00046E68  28 03 00 00 */	cmplwi r3, 0
/* 80049F2C 00046E6C  41 82 00 54 */	beq .L_80049F80
/* 80049F30 00046E70  C0 1E 00 04 */	lfs f0, 4(r30)
/* 80049F34 00046E74  D0 03 00 04 */	stfs f0, 4(r3)
/* 80049F38 00046E78  C0 1E 00 08 */	lfs f0, 8(r30)
/* 80049F3C 00046E7C  D0 03 00 08 */	stfs f0, 8(r3)
/* 80049F40 00046E80  C0 1E 00 0C */	lfs f0, 0xc(r30)
/* 80049F44 00046E84  D0 03 00 0C */	stfs f0, 0xc(r3)
/* 80049F48 00046E88  88 1E 00 00 */	lbz r0, 0(r30)
/* 80049F4C 00046E8C  98 03 00 00 */	stb r0, 0(r3)
/* 80049F50 00046E90  88 1E 00 01 */	lbz r0, 1(r30)
/* 80049F54 00046E94  98 03 00 01 */	stb r0, 1(r3)
/* 80049F58 00046E98  C0 1E 00 10 */	lfs f0, 0x10(r30)
/* 80049F5C 00046E9C  D0 03 00 10 */	stfs f0, 0x10(r3)
/* 80049F60 00046EA0  C0 1E 00 14 */	lfs f0, 0x14(r30)
/* 80049F64 00046EA4  D0 03 00 14 */	stfs f0, 0x14(r3)
/* 80049F68 00046EA8  C0 1E 00 18 */	lfs f0, 0x18(r30)
/* 80049F6C 00046EAC  D0 03 00 18 */	stfs f0, 0x18(r3)
/* 80049F70 00046EB0  C0 1E 00 1C */	lfs f0, 0x1c(r30)
/* 80049F74 00046EB4  D0 03 00 1C */	stfs f0, 0x1c(r3)
/* 80049F78 00046EB8  C0 1E 00 20 */	lfs f0, 0x20(r30)
/* 80049F7C 00046EBC  D0 03 00 20 */	stfs f0, 0x20(r3)
.L_80049F80:
/* 80049F80 00046EC0  90 7F 00 24 */	stw r3, 0x24(r31)
/* 80049F84 00046EC4  80 1F 00 24 */	lwz r0, 0x24(r31)
/* 80049F88 00046EC8  28 00 00 00 */	cmplwi r0, 0
/* 80049F8C 00046ECC  40 82 00 A0 */	bne .L_8004A02C
/* 80049F90 00046ED0  48 00 00 A4 */	b .L_8004A034
.L_80049F94:
/* 80049F94 00046ED4  80 7E 00 04 */	lwz r3, 4(r30)
/* 80049F98 00046ED8  80 1E 00 08 */	lwz r0, 8(r30)
/* 80049F9C 00046EDC  90 61 00 0C */	stw r3, 0xc(r1)
/* 80049FA0 00046EE0  80 7E 00 00 */	lwz r3, 0(r30)
/* 80049FA4 00046EE4  90 01 00 10 */	stw r0, 0x10(r1)
/* 80049FA8 00046EE8  80 1E 00 0C */	lwz r0, 0xc(r30)
/* 80049FAC 00046EEC  81 1E 00 10 */	lwz r8, 0x10(r30)
/* 80049FB0 00046EF0  80 FE 00 14 */	lwz r7, 0x14(r30)
/* 80049FB4 00046EF4  90 61 00 08 */	stw r3, 8(r1)
/* 80049FB8 00046EF8  80 DE 00 18 */	lwz r6, 0x18(r30)
/* 80049FBC 00046EFC  80 BE 00 1C */	lwz r5, 0x1c(r30)
/* 80049FC0 00046F00  80 9E 00 20 */	lwz r4, 0x20(r30)
/* 80049FC4 00046F04  C0 01 00 0C */	lfs f0, 0xc(r1)
/* 80049FC8 00046F08  90 01 00 14 */	stw r0, 0x14(r1)
/* 80049FCC 00046F0C  C0 21 00 10 */	lfs f1, 0x10(r1)
/* 80049FD0 00046F10  D0 09 00 04 */	stfs f0, 4(r9)
/* 80049FD4 00046F14  C0 01 00 14 */	lfs f0, 0x14(r1)
/* 80049FD8 00046F18  D0 29 00 08 */	stfs f1, 8(r9)
/* 80049FDC 00046F1C  88 61 00 08 */	lbz r3, 8(r1)
/* 80049FE0 00046F20  D0 09 00 0C */	stfs f0, 0xc(r9)
/* 80049FE4 00046F24  88 01 00 09 */	lbz r0, 9(r1)
/* 80049FE8 00046F28  91 01 00 18 */	stw r8, 0x18(r1)
/* 80049FEC 00046F2C  98 69 00 00 */	stb r3, 0(r9)
/* 80049FF0 00046F30  C0 01 00 18 */	lfs f0, 0x18(r1)
/* 80049FF4 00046F34  90 E1 00 1C */	stw r7, 0x1c(r1)
/* 80049FF8 00046F38  98 09 00 01 */	stb r0, 1(r9)
/* 80049FFC 00046F3C  C0 21 00 1C */	lfs f1, 0x1c(r1)
/* 8004A000 00046F40  90 C1 00 20 */	stw r6, 0x20(r1)
/* 8004A004 00046F44  D0 09 00 10 */	stfs f0, 0x10(r9)
/* 8004A008 00046F48  C0 01 00 20 */	lfs f0, 0x20(r1)
/* 8004A00C 00046F4C  90 A1 00 24 */	stw r5, 0x24(r1)
/* 8004A010 00046F50  D0 29 00 14 */	stfs f1, 0x14(r9)
/* 8004A014 00046F54  C0 21 00 24 */	lfs f1, 0x24(r1)
/* 8004A018 00046F58  90 81 00 28 */	stw r4, 0x28(r1)
/* 8004A01C 00046F5C  D0 09 00 18 */	stfs f0, 0x18(r9)
/* 8004A020 00046F60  C0 01 00 28 */	lfs f0, 0x28(r1)
/* 8004A024 00046F64  D0 29 00 1C */	stfs f1, 0x1c(r9)
/* 8004A028 00046F68  D0 09 00 20 */	stfs f0, 0x20(r9)
.L_8004A02C:
/* 8004A02C 00046F6C  80 7F 00 24 */	lwz r3, 0x24(r31)
/* 8004A030 00046F70  48 00 F2 1D */	bl calc__9J2DTexMtxFv
.L_8004A034:
/* 8004A034 00046F74  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8004A038 00046F78  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 8004A03C 00046F7C  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 8004A040 00046F80  7C 08 03 A6 */	mtlr r0
/* 8004A044 00046F84  38 21 00 40 */	addi r1, r1, 0x40
/* 8004A048 00046F88  4E 80 00 20 */	blr 
.endfn setTexMtx__14J2DTexGenBlockFUlR9J2DTexMtx

.fn getTexMtx__14J2DTexGenBlockFUlR9J2DTexMtx, global
/* 8004A04C 00046F8C  54 80 10 3A */	slwi r0, r4, 2
/* 8004A050 00046F90  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8004A054 00046F94  7C 63 02 14 */	add r3, r3, r0
/* 8004A058 00046F98  80 83 00 24 */	lwz r4, 0x24(r3)
/* 8004A05C 00046F9C  28 04 00 00 */	cmplwi r4, 0
/* 8004A060 00046FA0  41 82 00 9C */	beq .L_8004A0FC
/* 8004A064 00046FA4  80 64 00 04 */	lwz r3, 4(r4)
/* 8004A068 00046FA8  80 04 00 08 */	lwz r0, 8(r4)
/* 8004A06C 00046FAC  90 61 00 0C */	stw r3, 0xc(r1)
/* 8004A070 00046FB0  80 64 00 00 */	lwz r3, 0(r4)
/* 8004A074 00046FB4  90 01 00 10 */	stw r0, 0x10(r1)
/* 8004A078 00046FB8  80 04 00 0C */	lwz r0, 0xc(r4)
/* 8004A07C 00046FBC  81 24 00 10 */	lwz r9, 0x10(r4)
/* 8004A080 00046FC0  81 04 00 14 */	lwz r8, 0x14(r4)
/* 8004A084 00046FC4  90 61 00 08 */	stw r3, 8(r1)
/* 8004A088 00046FC8  80 E4 00 18 */	lwz r7, 0x18(r4)
/* 8004A08C 00046FCC  80 C4 00 1C */	lwz r6, 0x1c(r4)
/* 8004A090 00046FD0  80 84 00 20 */	lwz r4, 0x20(r4)
/* 8004A094 00046FD4  C0 01 00 0C */	lfs f0, 0xc(r1)
/* 8004A098 00046FD8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8004A09C 00046FDC  C0 21 00 10 */	lfs f1, 0x10(r1)
/* 8004A0A0 00046FE0  D0 05 00 04 */	stfs f0, 4(r5)
/* 8004A0A4 00046FE4  C0 01 00 14 */	lfs f0, 0x14(r1)
/* 8004A0A8 00046FE8  D0 25 00 08 */	stfs f1, 8(r5)
/* 8004A0AC 00046FEC  88 61 00 08 */	lbz r3, 8(r1)
/* 8004A0B0 00046FF0  D0 05 00 0C */	stfs f0, 0xc(r5)
/* 8004A0B4 00046FF4  88 01 00 09 */	lbz r0, 9(r1)
/* 8004A0B8 00046FF8  91 21 00 18 */	stw r9, 0x18(r1)
/* 8004A0BC 00046FFC  98 65 00 00 */	stb r3, 0(r5)
/* 8004A0C0 00047000  C0 01 00 18 */	lfs f0, 0x18(r1)
/* 8004A0C4 00047004  91 01 00 1C */	stw r8, 0x1c(r1)
/* 8004A0C8 00047008  98 05 00 01 */	stb r0, 1(r5)
/* 8004A0CC 0004700C  C0 21 00 1C */	lfs f1, 0x1c(r1)
/* 8004A0D0 00047010  90 E1 00 20 */	stw r7, 0x20(r1)
/* 8004A0D4 00047014  D0 05 00 10 */	stfs f0, 0x10(r5)
/* 8004A0D8 00047018  C0 01 00 20 */	lfs f0, 0x20(r1)
/* 8004A0DC 0004701C  90 C1 00 24 */	stw r6, 0x24(r1)
/* 8004A0E0 00047020  D0 25 00 14 */	stfs f1, 0x14(r5)
/* 8004A0E4 00047024  C0 21 00 24 */	lfs f1, 0x24(r1)
/* 8004A0E8 00047028  90 81 00 28 */	stw r4, 0x28(r1)
/* 8004A0EC 0004702C  D0 05 00 18 */	stfs f0, 0x18(r5)
/* 8004A0F0 00047030  C0 01 00 28 */	lfs f0, 0x28(r1)
/* 8004A0F4 00047034  D0 25 00 1C */	stfs f1, 0x1c(r5)
/* 8004A0F8 00047038  D0 05 00 20 */	stfs f0, 0x20(r5)
.L_8004A0FC:
/* 8004A0FC 0004703C  38 21 00 30 */	addi r1, r1, 0x30
/* 8004A100 00047040  4E 80 00 20 */	blr 
.endfn getTexMtx__14J2DTexGenBlockFUlR9J2DTexMtx

.fn getTexture__11J2DTevBlockFUl, global
/* 8004A104 00047044  38 60 00 00 */	li r3, 0
/* 8004A108 00047048  4E 80 00 20 */	blr 
.endfn getTexture__11J2DTevBlockFUl

.fn getPalette__11J2DTevBlockFUl, global
/* 8004A10C 0004704C  38 60 00 00 */	li r3, 0
/* 8004A110 00047050  4E 80 00 20 */	blr 
.endfn getPalette__11J2DTevBlockFUl

.fn __ct__12J2DTevBlock1Fv, global
/* 8004A114 00047054  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8004A118 00047058  7C 08 02 A6 */	mflr r0
/* 8004A11C 0004705C  3C 80 80 4A */	lis r4, __vt__11J2DTevBlock@ha
/* 8004A120 00047060  38 A0 00 00 */	li r5, 0
/* 8004A124 00047064  90 01 00 14 */	stw r0, 0x14(r1)
/* 8004A128 00047068  38 04 10 94 */	addi r0, r4, __vt__11J2DTevBlock@l
/* 8004A12C 0004706C  3C 80 80 05 */	lis r4, __ct__11J2DTevOrderFv@ha
/* 8004A130 00047070  38 C0 00 04 */	li r6, 4
/* 8004A134 00047074  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8004A138 00047078  7C 7F 1B 78 */	mr r31, r3
/* 8004A13C 0004707C  3C 60 80 4A */	lis r3, __vt__12J2DTevBlock1@ha
/* 8004A140 00047080  38 84 A2 C4 */	addi r4, r4, __ct__11J2DTevOrderFv@l
/* 8004A144 00047084  90 1F 00 00 */	stw r0, 0(r31)
/* 8004A148 00047088  38 03 0F D8 */	addi r0, r3, __vt__12J2DTevBlock1@l
/* 8004A14C 0004708C  38 7F 00 08 */	addi r3, r31, 8
/* 8004A150 00047090  38 E0 00 01 */	li r7, 1
/* 8004A154 00047094  90 1F 00 00 */	stw r0, 0(r31)
/* 8004A158 00047098  48 07 76 E5 */	bl __construct_array
/* 8004A15C 0004709C  3C 80 80 05 */	lis r4, __ct__13J2DGXColorS10Fv@ha
/* 8004A160 000470A0  38 7F 00 0C */	addi r3, r31, 0xc
/* 8004A164 000470A4  38 84 A2 C0 */	addi r4, r4, __ct__13J2DGXColorS10Fv@l
/* 8004A168 000470A8  38 A0 00 00 */	li r5, 0
/* 8004A16C 000470AC  38 C0 00 08 */	li r6, 8
/* 8004A170 000470B0  38 E0 00 04 */	li r7, 4
/* 8004A174 000470B4  48 07 76 C9 */	bl __construct_array
/* 8004A178 000470B8  3C 80 80 05 */	lis r4, __ct__11J2DTevStageFv@ha
/* 8004A17C 000470BC  38 7F 00 2C */	addi r3, r31, 0x2c
/* 8004A180 000470C0  38 84 95 D8 */	addi r4, r4, __ct__11J2DTevStageFv@l
/* 8004A184 000470C4  38 A0 00 00 */	li r5, 0
/* 8004A188 000470C8  38 C0 00 08 */	li r6, 8
/* 8004A18C 000470CC  38 E0 00 01 */	li r7, 1
/* 8004A190 000470D0  48 07 76 AD */	bl __construct_array
/* 8004A194 000470D4  3C 80 80 04 */	lis r4, __ct__Q28JUtility6TColorFv@ha
/* 8004A198 000470D8  38 7F 00 34 */	addi r3, r31, 0x34
/* 8004A19C 000470DC  38 84 9B 94 */	addi r4, r4, __ct__Q28JUtility6TColorFv@l
/* 8004A1A0 000470E0  38 A0 00 00 */	li r5, 0
/* 8004A1A4 000470E4  38 C0 00 04 */	li r6, 4
/* 8004A1A8 000470E8  38 E0 00 04 */	li r7, 4
/* 8004A1AC 000470EC  48 07 76 91 */	bl __construct_array
/* 8004A1B0 000470F0  3C 80 80 05 */	lis r4, __ct__19J2DTevSwapModeTableFv@ha
/* 8004A1B4 000470F4  38 7F 00 46 */	addi r3, r31, 0x46
/* 8004A1B8 000470F8  38 84 A2 B4 */	addi r4, r4, __ct__19J2DTevSwapModeTableFv@l
/* 8004A1BC 000470FC  38 A0 00 00 */	li r5, 0
/* 8004A1C0 00047100  38 C0 00 01 */	li r6, 1
/* 8004A1C4 00047104  38 E0 00 04 */	li r7, 4
/* 8004A1C8 00047108  48 07 76 75 */	bl __construct_array
/* 8004A1CC 0004710C  3C 80 80 05 */	lis r4, __ct__14J2DIndTevStageFv@ha
/* 8004A1D0 00047110  38 7F 00 4C */	addi r3, r31, 0x4c
/* 8004A1D4 00047114  38 84 A2 20 */	addi r4, r4, __ct__14J2DIndTevStageFv@l
/* 8004A1D8 00047118  38 A0 00 00 */	li r5, 0
/* 8004A1DC 0004711C  38 C0 00 04 */	li r6, 4
/* 8004A1E0 00047120  38 E0 00 01 */	li r7, 1
/* 8004A1E4 00047124  48 07 76 59 */	bl __construct_array
/* 8004A1E8 00047128  38 00 00 00 */	li r0, 0
/* 8004A1EC 0004712C  7F E3 FB 78 */	mr r3, r31
/* 8004A1F0 00047130  90 1F 00 50 */	stw r0, 0x50(r31)
/* 8004A1F4 00047134  98 1F 00 5C */	stb r0, 0x5c(r31)
/* 8004A1F8 00047138  81 9F 00 00 */	lwz r12, 0(r31)
/* 8004A1FC 0004713C  81 8C 00 08 */	lwz r12, 8(r12)
/* 8004A200 00047140  7D 89 03 A6 */	mtctr r12
/* 8004A204 00047144  4E 80 04 21 */	bctrl 
/* 8004A208 00047148  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8004A20C 0004714C  7F E3 FB 78 */	mr r3, r31
/* 8004A210 00047150  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8004A214 00047154  7C 08 03 A6 */	mtlr r0
/* 8004A218 00047158  38 21 00 10 */	addi r1, r1, 0x10
/* 8004A21C 0004715C  4E 80 00 20 */	blr 
.endfn __ct__12J2DTevBlock1Fv

.fn __ct__14J2DIndTevStageFv, weak
/* 8004A220 00047160  3C 80 80 48 */	lis r4, j2dDefaultIndTevStageInfo@ha
/* 8004A224 00047164  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8004A228 00047168  38 A4 86 BC */	addi r5, r4, j2dDefaultIndTevStageInfo@l
/* 8004A22C 0004716C  80 85 00 04 */	lwz r4, 4(r5)
/* 8004A230 00047170  80 05 00 08 */	lwz r0, 8(r5)
/* 8004A234 00047174  90 81 00 0C */	stw r4, 0xc(r1)
/* 8004A238 00047178  80 85 00 00 */	lwz r4, 0(r5)
/* 8004A23C 0004717C  90 01 00 10 */	stw r0, 0x10(r1)
/* 8004A240 00047180  88 01 00 0F */	lbz r0, 0xf(r1)
/* 8004A244 00047184  90 81 00 08 */	stw r4, 8(r1)
/* 8004A248 00047188  88 81 00 10 */	lbz r4, 0x10(r1)
/* 8004A24C 0004718C  54 00 A8 14 */	slwi r0, r0, 0x15
/* 8004A250 00047190  88 A1 00 0E */	lbz r5, 0xe(r1)
/* 8004A254 00047194  54 84 B0 12 */	slwi r4, r4, 0x16
/* 8004A258 00047198  88 C1 00 0B */	lbz r6, 0xb(r1)
/* 8004A25C 0004719C  7C 80 03 78 */	or r0, r4, r0
/* 8004A260 000471A0  54 A5 A0 16 */	slwi r5, r5, 0x14
/* 8004A264 000471A4  88 E1 00 0D */	lbz r7, 0xd(r1)
/* 8004A268 000471A8  7C A0 03 78 */	or r0, r5, r0
/* 8004A26C 000471AC  54 C4 80 1E */	slwi r4, r6, 0x10
/* 8004A270 000471B0  89 01 00 0C */	lbz r8, 0xc(r1)
/* 8004A274 000471B4  89 21 00 0A */	lbz r9, 0xa(r1)
/* 8004A278 000471B8  7C 80 03 78 */	or r0, r4, r0
/* 8004A27C 000471BC  54 E5 58 28 */	slwi r5, r7, 0xb
/* 8004A280 000471C0  89 41 00 09 */	lbz r10, 9(r1)
/* 8004A284 000471C4  7C A0 03 78 */	or r0, r5, r0
/* 8004A288 000471C8  55 06 40 2E */	slwi r6, r8, 8
/* 8004A28C 000471CC  7C C0 03 78 */	or r0, r6, r0
/* 8004A290 000471D0  55 24 20 36 */	slwi r4, r9, 4
/* 8004A294 000471D4  55 45 10 3A */	slwi r5, r10, 2
/* 8004A298 000471D8  88 C1 00 08 */	lbz r6, 8(r1)
/* 8004A29C 000471DC  7C 80 03 78 */	or r0, r4, r0
/* 8004A2A0 000471E0  7C A0 03 78 */	or r0, r5, r0
/* 8004A2A4 000471E4  7C C0 03 78 */	or r0, r6, r0
/* 8004A2A8 000471E8  90 03 00 00 */	stw r0, 0(r3)
/* 8004A2AC 000471EC  38 21 00 20 */	addi r1, r1, 0x20
/* 8004A2B0 000471F0  4E 80 00 20 */	blr 
.endfn __ct__14J2DIndTevStageFv

.fn __ct__19J2DTevSwapModeTableFv, weak
/* 8004A2B4 000471F4  88 02 85 DC */	lbz r0, j2dDefaultTevSwapTable@sda21(r2)
/* 8004A2B8 000471F8  98 03 00 00 */	stb r0, 0(r3)
/* 8004A2BC 000471FC  4E 80 00 20 */	blr 
.endfn __ct__19J2DTevSwapModeTableFv

.fn __ct__13J2DGXColorS10Fv, weak
/* 8004A2C0 00047200  4E 80 00 20 */	blr 
.endfn __ct__13J2DGXColorS10Fv

.fn __ct__11J2DTevOrderFv, weak
/* 8004A2C4 00047204  88 02 85 B0 */	lbz r0, j2dDefaultTevOrderInfoNull@sda21(r2)
/* 8004A2C8 00047208  38 82 85 B0 */	addi r4, r2, j2dDefaultTevOrderInfoNull@sda21
/* 8004A2CC 0004720C  98 03 00 00 */	stb r0, 0(r3)
/* 8004A2D0 00047210  88 04 00 01 */	lbz r0, 1(r4)
/* 8004A2D4 00047214  98 03 00 01 */	stb r0, 1(r3)
/* 8004A2D8 00047218  88 04 00 02 */	lbz r0, 2(r4)
/* 8004A2DC 0004721C  98 03 00 02 */	stb r0, 2(r3)
/* 8004A2E0 00047220  4E 80 00 20 */	blr 
.endfn __ct__11J2DTevOrderFv

.fn __dt__11J2DTevBlockFv, weak
/* 8004A2E4 00047224  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8004A2E8 00047228  7C 08 02 A6 */	mflr r0
/* 8004A2EC 0004722C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8004A2F0 00047230  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8004A2F4 00047234  7C 7F 1B 79 */	or. r31, r3, r3
/* 8004A2F8 00047238  41 82 00 1C */	beq .L_8004A314
/* 8004A2FC 0004723C  3C A0 80 4A */	lis r5, __vt__11J2DTevBlock@ha
/* 8004A300 00047240  7C 80 07 35 */	extsh. r0, r4
/* 8004A304 00047244  38 05 10 94 */	addi r0, r5, __vt__11J2DTevBlock@l
/* 8004A308 00047248  90 1F 00 00 */	stw r0, 0(r31)
/* 8004A30C 0004724C  40 81 00 08 */	ble .L_8004A314
/* 8004A310 00047250  4B FD 9D A5 */	bl __dl__FPv
.L_8004A314:
/* 8004A314 00047254  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8004A318 00047258  7F E3 FB 78 */	mr r3, r31
/* 8004A31C 0004725C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8004A320 00047260  7C 08 03 A6 */	mtlr r0
/* 8004A324 00047264  38 21 00 10 */	addi r1, r1, 0x10
/* 8004A328 00047268  4E 80 00 20 */	blr 
.endfn __dt__11J2DTevBlockFv

.fn __dt__12J2DTevBlock1Fv, global
/* 8004A32C 0004726C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8004A330 00047270  7C 08 02 A6 */	mflr r0
/* 8004A334 00047274  90 01 00 14 */	stw r0, 0x14(r1)
/* 8004A338 00047278  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8004A33C 0004727C  7C 9F 23 78 */	mr r31, r4
/* 8004A340 00047280  93 C1 00 08 */	stw r30, 8(r1)
/* 8004A344 00047284  7C 7E 1B 79 */	or. r30, r3, r3
/* 8004A348 00047288  41 82 00 80 */	beq .L_8004A3C8
/* 8004A34C 0004728C  3C 60 80 4A */	lis r3, __vt__12J2DTevBlock1@ha
/* 8004A350 00047290  38 03 0F D8 */	addi r0, r3, __vt__12J2DTevBlock1@l
/* 8004A354 00047294  90 1E 00 00 */	stw r0, 0(r30)
/* 8004A358 00047298  88 1E 00 5C */	lbz r0, 0x5c(r30)
/* 8004A35C 0004729C  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 8004A360 000472A0  41 82 00 10 */	beq .L_8004A370
/* 8004A364 000472A4  80 7E 00 50 */	lwz r3, 0x50(r30)
/* 8004A368 000472A8  38 80 00 01 */	li r4, 1
/* 8004A36C 000472AC  4B FE 8C A5 */	bl __dt__10JUTTextureFv
.L_8004A370:
/* 8004A370 000472B0  80 7E 00 54 */	lwz r3, 0x54(r30)
/* 8004A374 000472B4  4B FD 9D 41 */	bl __dl__FPv
/* 8004A378 000472B8  88 1E 00 5C */	lbz r0, 0x5c(r30)
/* 8004A37C 000472BC  54 00 06 31 */	rlwinm. r0, r0, 0, 0x18, 0x18
/* 8004A380 000472C0  41 82 00 24 */	beq .L_8004A3A4
/* 8004A384 000472C4  80 7E 00 58 */	lwz r3, 0x58(r30)
/* 8004A388 000472C8  28 03 00 00 */	cmplwi r3, 0
/* 8004A38C 000472CC  41 82 00 18 */	beq .L_8004A3A4
/* 8004A390 000472D0  81 83 00 00 */	lwz r12, 0(r3)
/* 8004A394 000472D4  38 80 00 01 */	li r4, 1
/* 8004A398 000472D8  81 8C 00 08 */	lwz r12, 8(r12)
/* 8004A39C 000472DC  7D 89 03 A6 */	mtctr r12
/* 8004A3A0 000472E0  4E 80 04 21 */	bctrl 
.L_8004A3A4:
/* 8004A3A4 000472E4  28 1E 00 00 */	cmplwi r30, 0
/* 8004A3A8 000472E8  41 82 00 10 */	beq .L_8004A3B8
/* 8004A3AC 000472EC  3C 60 80 4A */	lis r3, __vt__11J2DTevBlock@ha
/* 8004A3B0 000472F0  38 03 10 94 */	addi r0, r3, __vt__11J2DTevBlock@l
/* 8004A3B4 000472F4  90 1E 00 00 */	stw r0, 0(r30)
.L_8004A3B8:
/* 8004A3B8 000472F8  7F E0 07 35 */	extsh. r0, r31
/* 8004A3BC 000472FC  40 81 00 0C */	ble .L_8004A3C8
/* 8004A3C0 00047300  7F C3 F3 78 */	mr r3, r30
/* 8004A3C4 00047304  4B FD 9C F1 */	bl __dl__FPv
.L_8004A3C8:
/* 8004A3C8 00047308  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8004A3CC 0004730C  7F C3 F3 78 */	mr r3, r30
/* 8004A3D0 00047310  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8004A3D4 00047314  83 C1 00 08 */	lwz r30, 8(r1)
/* 8004A3D8 00047318  7C 08 03 A6 */	mtlr r0
/* 8004A3DC 0004731C  38 21 00 10 */	addi r1, r1, 0x10
/* 8004A3E0 00047320  4E 80 00 20 */	blr 
.endfn __dt__12J2DTevBlock1Fv

.fn initialize__12J2DTevBlock1Fv, global
/* 8004A3E4 00047324  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8004A3E8 00047328  38 C2 85 B8 */	addi r6, r2, j2dDefaultTevColor@sda21
/* 8004A3EC 0004732C  3C 80 00 01 */	lis r4, 0x0000FFFF@ha
/* 8004A3F0 00047330  39 82 85 B0 */	addi r12, r2, j2dDefaultTevOrderInfoNull@sda21
/* 8004A3F4 00047334  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 8004A3F8 00047338  38 04 FF FF */	addi r0, r4, 0x0000FFFF@l
/* 8004A3FC 0004733C  A9 42 85 B8 */	lha r10, j2dDefaultTevColor@sda21(r2)
/* 8004A400 00047340  38 A0 00 C0 */	li r5, 0xc0
/* 8004A404 00047344  B0 03 00 04 */	sth r0, 4(r3)
/* 8004A408 00047348  38 80 00 C1 */	li r4, 0xc1
/* 8004A40C 0004734C  A9 26 00 02 */	lha r9, 2(r6)
/* 8004A410 00047350  7C 7F 1B 78 */	mr r31, r3
/* 8004A414 00047354  B0 03 00 06 */	sth r0, 6(r3)
/* 8004A418 00047358  38 00 00 02 */	li r0, 2
/* 8004A41C 0004735C  A9 06 00 04 */	lha r8, 4(r6)
/* 8004A420 00047360  88 E2 85 B0 */	lbz r7, j2dDefaultTevOrderInfoNull@sda21(r2)
/* 8004A424 00047364  A8 C6 00 06 */	lha r6, 6(r6)
/* 8004A428 00047368  98 E3 00 08 */	stb r7, 8(r3)
/* 8004A42C 0004736C  80 E2 85 C4 */	lwz r7, j2dDefaultTevKColor@sda21(r2)
/* 8004A430 00047370  89 6C 00 01 */	lbz r11, 1(r12)
/* 8004A434 00047374  99 63 00 09 */	stb r11, 9(r3)
/* 8004A438 00047378  89 6C 00 02 */	lbz r11, 2(r12)
/* 8004A43C 0004737C  99 63 00 0A */	stb r11, 0xa(r3)
/* 8004A440 00047380  B1 43 00 0C */	sth r10, 0xc(r3)
/* 8004A444 00047384  B1 23 00 0E */	sth r9, 0xe(r3)
/* 8004A448 00047388  B1 03 00 10 */	sth r8, 0x10(r3)
/* 8004A44C 0004738C  B0 C3 00 12 */	sth r6, 0x12(r3)
/* 8004A450 00047390  B1 43 00 14 */	sth r10, 0x14(r3)
/* 8004A454 00047394  B1 23 00 16 */	sth r9, 0x16(r3)
/* 8004A458 00047398  B1 03 00 18 */	sth r8, 0x18(r3)
/* 8004A45C 0004739C  B0 C3 00 1A */	sth r6, 0x1a(r3)
/* 8004A460 000473A0  B1 43 00 1C */	sth r10, 0x1c(r3)
/* 8004A464 000473A4  B1 23 00 1E */	sth r9, 0x1e(r3)
/* 8004A468 000473A8  B1 03 00 20 */	sth r8, 0x20(r3)
/* 8004A46C 000473AC  B0 C3 00 22 */	sth r6, 0x22(r3)
/* 8004A470 000473B0  B1 43 00 24 */	sth r10, 0x24(r3)
/* 8004A474 000473B4  B1 23 00 26 */	sth r9, 0x26(r3)
/* 8004A478 000473B8  B1 03 00 28 */	sth r8, 0x28(r3)
/* 8004A47C 000473BC  B0 C3 00 2A */	sth r6, 0x2a(r3)
/* 8004A480 000473C0  98 A3 00 2C */	stb r5, 0x2c(r3)
/* 8004A484 000473C4  98 83 00 30 */	stb r4, 0x30(r3)
/* 8004A488 000473C8  7C 09 03 A6 */	mtctr r0
.L_8004A48C:
/* 8004A48C 000473CC  90 E1 00 08 */	stw r7, 8(r1)
/* 8004A490 000473D0  88 C1 00 08 */	lbz r6, 8(r1)
/* 8004A494 000473D4  88 A1 00 09 */	lbz r5, 9(r1)
/* 8004A498 000473D8  98 DF 00 34 */	stb r6, 0x34(r31)
/* 8004A49C 000473DC  88 81 00 0A */	lbz r4, 0xa(r1)
/* 8004A4A0 000473E0  88 01 00 0B */	lbz r0, 0xb(r1)
/* 8004A4A4 000473E4  98 BF 00 35 */	stb r5, 0x35(r31)
/* 8004A4A8 000473E8  98 9F 00 36 */	stb r4, 0x36(r31)
/* 8004A4AC 000473EC  90 E1 00 08 */	stw r7, 8(r1)
/* 8004A4B0 000473F0  98 C1 00 0C */	stb r6, 0xc(r1)
/* 8004A4B4 000473F4  88 C1 00 08 */	lbz r6, 8(r1)
/* 8004A4B8 000473F8  98 1F 00 37 */	stb r0, 0x37(r31)
/* 8004A4BC 000473FC  98 A1 00 0D */	stb r5, 0xd(r1)
/* 8004A4C0 00047400  88 A1 00 09 */	lbz r5, 9(r1)
/* 8004A4C4 00047404  98 DF 00 38 */	stb r6, 0x38(r31)
/* 8004A4C8 00047408  98 81 00 0E */	stb r4, 0xe(r1)
/* 8004A4CC 0004740C  88 81 00 0A */	lbz r4, 0xa(r1)
/* 8004A4D0 00047410  98 BF 00 39 */	stb r5, 0x39(r31)
/* 8004A4D4 00047414  98 01 00 0F */	stb r0, 0xf(r1)
/* 8004A4D8 00047418  88 01 00 0B */	lbz r0, 0xb(r1)
/* 8004A4DC 0004741C  98 9F 00 3A */	stb r4, 0x3a(r31)
/* 8004A4E0 00047420  98 1F 00 3B */	stb r0, 0x3b(r31)
/* 8004A4E4 00047424  3B FF 00 08 */	addi r31, r31, 8
/* 8004A4E8 00047428  98 C1 00 0C */	stb r6, 0xc(r1)
/* 8004A4EC 0004742C  98 A1 00 0D */	stb r5, 0xd(r1)
/* 8004A4F0 00047430  98 81 00 0E */	stb r4, 0xe(r1)
/* 8004A4F4 00047434  98 01 00 0F */	stb r0, 0xf(r1)
/* 8004A4F8 00047438  42 00 FF 94 */	bdnz .L_8004A48C
/* 8004A4FC 0004743C  38 E0 00 FF */	li r7, 0xff
/* 8004A500 00047440  3C A0 80 48 */	lis r5, j2dDefaultIndTevStageInfo@ha
/* 8004A504 00047444  98 E3 00 44 */	stb r7, 0x44(r3)
/* 8004A508 00047448  38 82 85 CC */	addi r4, r2, j2dDefaultTevSwapModeTable@sda21
/* 8004A50C 0004744C  38 C5 86 BC */	addi r6, r5, j2dDefaultIndTevStageInfo@l
/* 8004A510 00047450  38 00 00 00 */	li r0, 0
/* 8004A514 00047454  98 E3 00 45 */	stb r7, 0x45(r3)
/* 8004A518 00047458  88 A4 00 01 */	lbz r5, 1(r4)
/* 8004A51C 0004745C  89 04 00 02 */	lbz r8, 2(r4)
/* 8004A520 00047460  88 E2 85 CC */	lbz r7, j2dDefaultTevSwapModeTable@sda21(r2)
/* 8004A524 00047464  54 A5 25 36 */	rlwinm r5, r5, 4, 0x14, 0x1b
/* 8004A528 00047468  55 08 10 3A */	slwi r8, r8, 2
/* 8004A52C 0004746C  89 24 00 03 */	lbz r9, 3(r4)
/* 8004A530 00047470  7C A5 42 14 */	add r5, r5, r8
/* 8004A534 00047474  54 E7 30 32 */	slwi r7, r7, 6
/* 8004A538 00047478  7C A5 4A 14 */	add r5, r5, r9
/* 8004A53C 0004747C  7C A7 2A 14 */	add r5, r7, r5
/* 8004A540 00047480  98 A3 00 46 */	stb r5, 0x46(r3)
/* 8004A544 00047484  88 A4 00 01 */	lbz r5, 1(r4)
/* 8004A548 00047488  89 04 00 02 */	lbz r8, 2(r4)
/* 8004A54C 0004748C  88 E2 85 CC */	lbz r7, j2dDefaultTevSwapModeTable@sda21(r2)
/* 8004A550 00047490  54 A5 25 36 */	rlwinm r5, r5, 4, 0x14, 0x1b
/* 8004A554 00047494  55 08 10 3A */	slwi r8, r8, 2
/* 8004A558 00047498  89 24 00 03 */	lbz r9, 3(r4)
/* 8004A55C 0004749C  7C A5 42 14 */	add r5, r5, r8
/* 8004A560 000474A0  54 E7 30 32 */	slwi r7, r7, 6
/* 8004A564 000474A4  7C A5 4A 14 */	add r5, r5, r9
/* 8004A568 000474A8  7C A7 2A 14 */	add r5, r7, r5
/* 8004A56C 000474AC  98 A3 00 47 */	stb r5, 0x47(r3)
/* 8004A570 000474B0  88 A4 00 01 */	lbz r5, 1(r4)
/* 8004A574 000474B4  89 04 00 02 */	lbz r8, 2(r4)
/* 8004A578 000474B8  88 E2 85 CC */	lbz r7, j2dDefaultTevSwapModeTable@sda21(r2)
/* 8004A57C 000474BC  54 A5 25 36 */	rlwinm r5, r5, 4, 0x14, 0x1b
/* 8004A580 000474C0  55 08 10 3A */	slwi r8, r8, 2
/* 8004A584 000474C4  89 24 00 03 */	lbz r9, 3(r4)
/* 8004A588 000474C8  7C A5 42 14 */	add r5, r5, r8
/* 8004A58C 000474CC  54 E7 30 32 */	slwi r7, r7, 6
/* 8004A590 000474D0  7C A5 4A 14 */	add r5, r5, r9
/* 8004A594 000474D4  7C A7 2A 14 */	add r5, r7, r5
/* 8004A598 000474D8  98 A3 00 48 */	stb r5, 0x48(r3)
/* 8004A59C 000474DC  89 04 00 02 */	lbz r8, 2(r4)
/* 8004A5A0 000474E0  88 A4 00 01 */	lbz r5, 1(r4)
/* 8004A5A4 000474E4  88 E2 85 CC */	lbz r7, j2dDefaultTevSwapModeTable@sda21(r2)
/* 8004A5A8 000474E8  55 08 10 3A */	slwi r8, r8, 2
/* 8004A5AC 000474EC  54 A5 20 36 */	slwi r5, r5, 4
/* 8004A5B0 000474F0  89 24 00 03 */	lbz r9, 3(r4)
/* 8004A5B4 000474F4  7C 85 42 14 */	add r4, r5, r8
/* 8004A5B8 000474F8  54 E5 30 32 */	slwi r5, r7, 6
/* 8004A5BC 000474FC  7C 84 4A 14 */	add r4, r4, r9
/* 8004A5C0 00047500  7C 85 22 14 */	add r4, r5, r4
/* 8004A5C4 00047504  98 83 00 49 */	stb r4, 0x49(r3)
/* 8004A5C8 00047508  80 A6 00 04 */	lwz r5, 4(r6)
/* 8004A5CC 0004750C  80 86 00 08 */	lwz r4, 8(r6)
/* 8004A5D0 00047510  90 A1 00 14 */	stw r5, 0x14(r1)
/* 8004A5D4 00047514  80 A6 00 00 */	lwz r5, 0(r6)
/* 8004A5D8 00047518  90 81 00 18 */	stw r4, 0x18(r1)
/* 8004A5DC 0004751C  88 81 00 17 */	lbz r4, 0x17(r1)
/* 8004A5E0 00047520  90 A1 00 10 */	stw r5, 0x10(r1)
/* 8004A5E4 00047524  88 A1 00 18 */	lbz r5, 0x18(r1)
/* 8004A5E8 00047528  54 84 A8 14 */	slwi r4, r4, 0x15
/* 8004A5EC 0004752C  88 C1 00 16 */	lbz r6, 0x16(r1)
/* 8004A5F0 00047530  54 A5 B0 12 */	slwi r5, r5, 0x16
/* 8004A5F4 00047534  88 E1 00 13 */	lbz r7, 0x13(r1)
/* 8004A5F8 00047538  7C A4 23 78 */	or r4, r5, r4
/* 8004A5FC 0004753C  54 C6 A0 16 */	slwi r6, r6, 0x14
/* 8004A600 00047540  89 01 00 15 */	lbz r8, 0x15(r1)
/* 8004A604 00047544  7C C4 23 78 */	or r4, r6, r4
/* 8004A608 00047548  54 E5 80 1E */	slwi r5, r7, 0x10
/* 8004A60C 0004754C  89 21 00 14 */	lbz r9, 0x14(r1)
/* 8004A610 00047550  89 41 00 12 */	lbz r10, 0x12(r1)
/* 8004A614 00047554  7C A4 23 78 */	or r4, r5, r4
/* 8004A618 00047558  55 06 58 28 */	slwi r6, r8, 0xb
/* 8004A61C 0004755C  89 61 00 11 */	lbz r11, 0x11(r1)
/* 8004A620 00047560  7C C4 23 78 */	or r4, r6, r4
/* 8004A624 00047564  55 27 40 2E */	slwi r7, r9, 8
/* 8004A628 00047568  7C E4 23 78 */	or r4, r7, r4
/* 8004A62C 0004756C  55 45 20 36 */	slwi r5, r10, 4
/* 8004A630 00047570  55 66 10 3A */	slwi r6, r11, 2
/* 8004A634 00047574  88 E1 00 10 */	lbz r7, 0x10(r1)
/* 8004A638 00047578  7C A4 23 78 */	or r4, r5, r4
/* 8004A63C 0004757C  7C C4 23 78 */	or r4, r6, r4
/* 8004A640 00047580  7C E4 23 78 */	or r4, r7, r4
/* 8004A644 00047584  90 83 00 4C */	stw r4, 0x4c(r3)
/* 8004A648 00047588  90 03 00 54 */	stw r0, 0x54(r3)
/* 8004A64C 0004758C  90 03 00 58 */	stw r0, 0x58(r3)
/* 8004A650 00047590  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 8004A654 00047594  38 21 00 30 */	addi r1, r1, 0x30
/* 8004A658 00047598  4E 80 00 20 */	blr 
.endfn initialize__12J2DTevBlock1Fv

.fn prepareTexture__12J2DTevBlock1FUc, global
/* 8004A65C 0004759C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8004A660 000475A0  7C 08 02 A6 */	mflr r0
/* 8004A664 000475A4  90 01 00 14 */	stw r0, 0x14(r1)
/* 8004A668 000475A8  54 80 06 3F */	clrlwi. r0, r4, 0x18
/* 8004A66C 000475AC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8004A670 000475B0  7C 9F 23 78 */	mr r31, r4
/* 8004A674 000475B4  93 C1 00 08 */	stw r30, 8(r1)
/* 8004A678 000475B8  7C 7E 1B 78 */	mr r30, r3
/* 8004A67C 000475BC  40 82 00 0C */	bne .L_8004A688
/* 8004A680 000475C0  38 60 00 01 */	li r3, 1
/* 8004A684 000475C4  48 00 00 7C */	b .L_8004A700
.L_8004A688:
/* 8004A688 000475C8  80 1E 00 50 */	lwz r0, 0x50(r30)
/* 8004A68C 000475CC  28 00 00 00 */	cmplwi r0, 0
/* 8004A690 000475D0  40 82 00 54 */	bne .L_8004A6E4
/* 8004A694 000475D4  38 60 00 40 */	li r3, 0x40
/* 8004A698 000475D8  4B FD 98 0D */	bl __nw__FUl
/* 8004A69C 000475DC  28 03 00 00 */	cmplwi r3, 0
/* 8004A6A0 000475E0  41 82 00 1C */	beq .L_8004A6BC
/* 8004A6A4 000475E4  88 83 00 3B */	lbz r4, 0x3b(r3)
/* 8004A6A8 000475E8  38 00 00 00 */	li r0, 0
/* 8004A6AC 000475EC  54 84 07 BC */	rlwinm r4, r4, 0, 0x1e, 0x1e
/* 8004A6B0 000475F0  98 83 00 3B */	stb r4, 0x3b(r3)
/* 8004A6B4 000475F4  90 03 00 28 */	stw r0, 0x28(r3)
/* 8004A6B8 000475F8  90 03 00 20 */	stw r0, 0x20(r3)
.L_8004A6BC:
/* 8004A6BC 000475FC  90 7E 00 50 */	stw r3, 0x50(r30)
/* 8004A6C0 00047600  80 1E 00 50 */	lwz r0, 0x50(r30)
/* 8004A6C4 00047604  28 00 00 00 */	cmplwi r0, 0
/* 8004A6C8 00047608  40 82 00 0C */	bne .L_8004A6D4
/* 8004A6CC 0004760C  38 60 00 00 */	li r3, 0
/* 8004A6D0 00047610  48 00 00 30 */	b .L_8004A700
.L_8004A6D4:
/* 8004A6D4 00047614  88 1E 00 5C */	lbz r0, 0x5c(r30)
/* 8004A6D8 00047618  54 00 06 30 */	rlwinm r0, r0, 0, 0x18, 0x18
/* 8004A6DC 0004761C  60 00 00 01 */	ori r0, r0, 1
/* 8004A6E0 00047620  98 1E 00 5C */	stb r0, 0x5c(r30)
.L_8004A6E4:
/* 8004A6E4 00047624  57 E4 06 3E */	clrlwi r4, r31, 0x18
/* 8004A6E8 00047628  38 60 00 01 */	li r3, 1
/* 8004A6EC 0004762C  20 04 00 01 */	subfic r0, r4, 1
/* 8004A6F0 00047630  7C 63 23 38 */	orc r3, r3, r4
/* 8004A6F4 00047634  54 00 F8 7E */	srwi r0, r0, 1
/* 8004A6F8 00047638  7C 00 18 50 */	subf r0, r0, r3
/* 8004A6FC 0004763C  54 03 0F FE */	srwi r3, r0, 0x1f
.L_8004A700:
/* 8004A700 00047640  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8004A704 00047644  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8004A708 00047648  83 C1 00 08 */	lwz r30, 8(r1)
/* 8004A70C 0004764C  7C 08 03 A6 */	mtlr r0
/* 8004A710 00047650  38 21 00 10 */	addi r1, r1, 0x10
/* 8004A714 00047654  4E 80 00 20 */	blr 
.endfn prepareTexture__12J2DTevBlock1FUc

.fn insertTexture__12J2DTevBlock1FUlPC7ResTIMGP10JUTPalette, global
/* 8004A718 00047658  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8004A71C 0004765C  7C 08 02 A6 */	mflr r0
/* 8004A720 00047660  28 04 00 00 */	cmplwi r4, 0
/* 8004A724 00047664  90 01 00 24 */	stw r0, 0x24(r1)
/* 8004A728 00047668  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8004A72C 0004766C  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8004A730 00047670  7C DE 33 78 */	mr r30, r6
/* 8004A734 00047674  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8004A738 00047678  7C BD 2B 78 */	mr r29, r5
/* 8004A73C 0004767C  93 81 00 10 */	stw r28, 0x10(r1)
/* 8004A740 00047680  7C 7C 1B 78 */	mr r28, r3
/* 8004A744 00047684  40 82 00 0C */	bne .L_8004A750
/* 8004A748 00047688  28 1D 00 00 */	cmplwi r29, 0
/* 8004A74C 0004768C  40 82 00 0C */	bne .L_8004A758
.L_8004A750:
/* 8004A750 00047690  38 60 00 00 */	li r3, 0
/* 8004A754 00047694  48 00 00 D8 */	b .L_8004A82C
.L_8004A758:
/* 8004A758 00047698  80 7C 00 50 */	lwz r3, 0x50(r28)
/* 8004A75C 0004769C  28 03 00 00 */	cmplwi r3, 0
/* 8004A760 000476A0  41 82 00 18 */	beq .L_8004A778
/* 8004A764 000476A4  80 03 00 20 */	lwz r0, 0x20(r3)
/* 8004A768 000476A8  28 00 00 00 */	cmplwi r0, 0
/* 8004A76C 000476AC  41 82 00 0C */	beq .L_8004A778
/* 8004A770 000476B0  38 60 00 00 */	li r3, 0
/* 8004A774 000476B4  48 00 00 B8 */	b .L_8004A82C
.L_8004A778:
/* 8004A778 000476B8  28 03 00 00 */	cmplwi r3, 0
/* 8004A77C 000476BC  40 82 00 64 */	bne .L_8004A7E0
/* 8004A780 000476C0  38 60 00 40 */	li r3, 0x40
/* 8004A784 000476C4  4B FD 97 21 */	bl __nw__FUl
/* 8004A788 000476C8  7C 7F 1B 79 */	or. r31, r3, r3
/* 8004A78C 000476CC  41 82 00 24 */	beq .L_8004A7B0
/* 8004A790 000476D0  38 00 00 00 */	li r0, 0
/* 8004A794 000476D4  7F A4 EB 78 */	mr r4, r29
/* 8004A798 000476D8  90 1F 00 28 */	stw r0, 0x28(r31)
/* 8004A79C 000476DC  38 A0 00 00 */	li r5, 0
/* 8004A7A0 000476E0  4B FE 88 E5 */	bl storeTIMG__10JUTTextureFPC7ResTIMGUc
/* 8004A7A4 000476E4  88 1F 00 3B */	lbz r0, 0x3b(r31)
/* 8004A7A8 000476E8  54 00 07 BC */	rlwinm r0, r0, 0, 0x1e, 0x1e
/* 8004A7AC 000476EC  98 1F 00 3B */	stb r0, 0x3b(r31)
.L_8004A7B0:
/* 8004A7B0 000476F0  93 FC 00 50 */	stw r31, 0x50(r28)
/* 8004A7B4 000476F4  80 7C 00 50 */	lwz r3, 0x50(r28)
/* 8004A7B8 000476F8  28 03 00 00 */	cmplwi r3, 0
/* 8004A7BC 000476FC  40 82 00 0C */	bne .L_8004A7C8
/* 8004A7C0 00047700  38 60 00 00 */	li r3, 0
/* 8004A7C4 00047704  48 00 00 68 */	b .L_8004A82C
.L_8004A7C8:
/* 8004A7C8 00047708  28 1E 00 00 */	cmplwi r30, 0
/* 8004A7CC 0004770C  41 82 00 38 */	beq .L_8004A804
/* 8004A7D0 00047710  7F A4 EB 78 */	mr r4, r29
/* 8004A7D4 00047714  7F C5 F3 78 */	mr r5, r30
/* 8004A7D8 00047718  4B FE 8A 59 */	bl storeTIMG__10JUTTextureFPC7ResTIMGP10JUTPalette
/* 8004A7DC 0004771C  48 00 00 28 */	b .L_8004A804
.L_8004A7E0:
/* 8004A7E0 00047720  28 1E 00 00 */	cmplwi r30, 0
/* 8004A7E4 00047724  40 82 00 14 */	bne .L_8004A7F8
/* 8004A7E8 00047728  7F A4 EB 78 */	mr r4, r29
/* 8004A7EC 0004772C  38 A0 00 00 */	li r5, 0
/* 8004A7F0 00047730  4B FE 88 95 */	bl storeTIMG__10JUTTextureFPC7ResTIMGUc
/* 8004A7F4 00047734  48 00 00 10 */	b .L_8004A804
.L_8004A7F8:
/* 8004A7F8 00047738  7F A4 EB 78 */	mr r4, r29
/* 8004A7FC 0004773C  7F C5 F3 78 */	mr r5, r30
/* 8004A800 00047740  4B FE 8A 31 */	bl storeTIMG__10JUTTextureFPC7ResTIMGP10JUTPalette
.L_8004A804:
/* 8004A804 00047744  88 1C 00 5C */	lbz r0, 0x5c(r28)
/* 8004A808 00047748  3C 80 00 01 */	lis r4, 0x0000FFFF@ha
/* 8004A80C 0004774C  38 A0 00 00 */	li r5, 0
/* 8004A810 00047750  38 60 00 01 */	li r3, 1
/* 8004A814 00047754  54 06 06 30 */	rlwinm r6, r0, 0, 0x18, 0x18
/* 8004A818 00047758  38 04 FF FF */	addi r0, r4, 0x0000FFFF@l
/* 8004A81C 0004775C  60 C4 00 01 */	ori r4, r6, 1
/* 8004A820 00047760  98 9C 00 5C */	stb r4, 0x5c(r28)
/* 8004A824 00047764  90 BC 00 54 */	stw r5, 0x54(r28)
/* 8004A828 00047768  B0 1C 00 04 */	sth r0, 4(r28)
.L_8004A82C:
/* 8004A82C 0004776C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8004A830 00047770  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8004A834 00047774  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8004A838 00047778  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8004A83C 0004777C  83 81 00 10 */	lwz r28, 0x10(r1)
/* 8004A840 00047780  7C 08 03 A6 */	mtlr r0
/* 8004A844 00047784  38 21 00 20 */	addi r1, r1, 0x20
/* 8004A848 00047788  4E 80 00 20 */	blr 
.endfn insertTexture__12J2DTevBlock1FUlPC7ResTIMGP10JUTPalette

.fn insertTexture__12J2DTevBlock1FUlP10JUTTexture, global
/* 8004A84C 0004778C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8004A850 00047790  7C 08 02 A6 */	mflr r0
/* 8004A854 00047794  90 01 00 14 */	stw r0, 0x14(r1)
/* 8004A858 00047798  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8004A85C 0004779C  7C BF 2B 78 */	mr r31, r5
/* 8004A860 000477A0  93 C1 00 08 */	stw r30, 8(r1)
/* 8004A864 000477A4  7C 7E 1B 78 */	mr r30, r3
/* 8004A868 000477A8  80 63 00 50 */	lwz r3, 0x50(r3)
/* 8004A86C 000477AC  28 03 00 00 */	cmplwi r3, 0
/* 8004A870 000477B0  41 82 00 18 */	beq .L_8004A888
/* 8004A874 000477B4  80 03 00 20 */	lwz r0, 0x20(r3)
/* 8004A878 000477B8  28 00 00 00 */	cmplwi r0, 0
/* 8004A87C 000477BC  41 82 00 0C */	beq .L_8004A888
/* 8004A880 000477C0  38 60 00 00 */	li r3, 0
/* 8004A884 000477C4  48 00 00 58 */	b .L_8004A8DC
.L_8004A888:
/* 8004A888 000477C8  28 04 00 00 */	cmplwi r4, 0
/* 8004A88C 000477CC  40 82 00 0C */	bne .L_8004A898
/* 8004A890 000477D0  28 1F 00 00 */	cmplwi r31, 0
/* 8004A894 000477D4  40 82 00 0C */	bne .L_8004A8A0
.L_8004A898:
/* 8004A898 000477D8  38 60 00 00 */	li r3, 0
/* 8004A89C 000477DC  48 00 00 40 */	b .L_8004A8DC
.L_8004A8A0:
/* 8004A8A0 000477E0  88 1E 00 5C */	lbz r0, 0x5c(r30)
/* 8004A8A4 000477E4  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 8004A8A8 000477E8  41 82 00 0C */	beq .L_8004A8B4
/* 8004A8AC 000477EC  38 80 00 01 */	li r4, 1
/* 8004A8B0 000477F0  4B FE 87 61 */	bl __dt__10JUTTextureFv
.L_8004A8B4:
/* 8004A8B4 000477F4  93 FE 00 50 */	stw r31, 0x50(r30)
/* 8004A8B8 000477F8  3C 80 00 01 */	lis r4, 0x0000FFFF@ha
/* 8004A8BC 000477FC  38 A0 00 00 */	li r5, 0
/* 8004A8C0 00047800  38 60 00 01 */	li r3, 1
/* 8004A8C4 00047804  88 DE 00 5C */	lbz r6, 0x5c(r30)
/* 8004A8C8 00047808  38 04 FF FF */	addi r0, r4, 0x0000FFFF@l
/* 8004A8CC 0004780C  54 C4 06 30 */	rlwinm r4, r6, 0, 0x18, 0x18
/* 8004A8D0 00047810  98 9E 00 5C */	stb r4, 0x5c(r30)
/* 8004A8D4 00047814  90 BE 00 54 */	stw r5, 0x54(r30)
/* 8004A8D8 00047818  B0 1E 00 04 */	sth r0, 4(r30)
.L_8004A8DC:
/* 8004A8DC 0004781C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8004A8E0 00047820  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8004A8E4 00047824  83 C1 00 08 */	lwz r30, 8(r1)
/* 8004A8E8 00047828  7C 08 03 A6 */	mtlr r0
/* 8004A8EC 0004782C  38 21 00 10 */	addi r1, r1, 0x10
/* 8004A8F0 00047830  4E 80 00 20 */	blr 
.endfn insertTexture__12J2DTevBlock1FUlP10JUTTexture

.fn setTexture__12J2DTevBlock1FUlPC7ResTIMG, global
/* 8004A8F4 00047834  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8004A8F8 00047838  7C 08 02 A6 */	mflr r0
/* 8004A8FC 0004783C  28 04 00 00 */	cmplwi r4, 0
/* 8004A900 00047840  90 01 00 24 */	stw r0, 0x24(r1)
/* 8004A904 00047844  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8004A908 00047848  7C 7F 1B 78 */	mr r31, r3
/* 8004A90C 0004784C  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8004A910 00047850  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8004A914 00047854  7C BD 2B 78 */	mr r29, r5
/* 8004A918 00047858  41 82 00 0C */	beq .L_8004A924
/* 8004A91C 0004785C  38 60 00 00 */	li r3, 0
/* 8004A920 00047860  48 00 01 50 */	b .L_8004AA70
.L_8004A924:
/* 8004A924 00047864  80 7F 00 50 */	lwz r3, 0x50(r31)
/* 8004A928 00047868  28 03 00 00 */	cmplwi r3, 0
/* 8004A92C 0004786C  40 82 00 78 */	bne .L_8004A9A4
/* 8004A930 00047870  28 1D 00 00 */	cmplwi r29, 0
/* 8004A934 00047874  41 82 00 60 */	beq .L_8004A994
/* 8004A938 00047878  38 60 00 40 */	li r3, 0x40
/* 8004A93C 0004787C  4B FD 95 69 */	bl __nw__FUl
/* 8004A940 00047880  7C 7E 1B 79 */	or. r30, r3, r3
/* 8004A944 00047884  41 82 00 24 */	beq .L_8004A968
/* 8004A948 00047888  38 00 00 00 */	li r0, 0
/* 8004A94C 0004788C  7F A4 EB 78 */	mr r4, r29
/* 8004A950 00047890  90 1E 00 28 */	stw r0, 0x28(r30)
/* 8004A954 00047894  38 A0 00 00 */	li r5, 0
/* 8004A958 00047898  4B FE 87 2D */	bl storeTIMG__10JUTTextureFPC7ResTIMGUc
/* 8004A95C 0004789C  88 1E 00 3B */	lbz r0, 0x3b(r30)
/* 8004A960 000478A0  54 00 07 BC */	rlwinm r0, r0, 0, 0x1e, 0x1e
/* 8004A964 000478A4  98 1E 00 3B */	stb r0, 0x3b(r30)
.L_8004A968:
/* 8004A968 000478A8  93 DF 00 50 */	stw r30, 0x50(r31)
/* 8004A96C 000478AC  80 1F 00 50 */	lwz r0, 0x50(r31)
/* 8004A970 000478B0  28 00 00 00 */	cmplwi r0, 0
/* 8004A974 000478B4  40 82 00 0C */	bne .L_8004A980
/* 8004A978 000478B8  38 60 00 00 */	li r3, 0
/* 8004A97C 000478BC  48 00 00 F4 */	b .L_8004AA70
.L_8004A980:
/* 8004A980 000478C0  88 1F 00 5C */	lbz r0, 0x5c(r31)
/* 8004A984 000478C4  54 00 06 30 */	rlwinm r0, r0, 0, 0x18, 0x18
/* 8004A988 000478C8  60 00 00 01 */	ori r0, r0, 1
/* 8004A98C 000478CC  98 1F 00 5C */	stb r0, 0x5c(r31)
/* 8004A990 000478D0  48 00 00 C0 */	b .L_8004AA50
.L_8004A994:
/* 8004A994 000478D4  88 1F 00 5C */	lbz r0, 0x5c(r31)
/* 8004A998 000478D8  54 00 06 30 */	rlwinm r0, r0, 0, 0x18, 0x18
/* 8004A99C 000478DC  98 1F 00 5C */	stb r0, 0x5c(r31)
/* 8004A9A0 000478E0  48 00 00 B0 */	b .L_8004AA50
.L_8004A9A4:
/* 8004A9A4 000478E4  88 1F 00 5C */	lbz r0, 0x5c(r31)
/* 8004A9A8 000478E8  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 8004A9AC 000478EC  41 82 00 3C */	beq .L_8004A9E8
/* 8004A9B0 000478F0  28 1D 00 00 */	cmplwi r29, 0
/* 8004A9B4 000478F4  41 82 00 14 */	beq .L_8004A9C8
/* 8004A9B8 000478F8  7F A4 EB 78 */	mr r4, r29
/* 8004A9BC 000478FC  38 A0 00 00 */	li r5, 0
/* 8004A9C0 00047900  4B FE 86 C5 */	bl storeTIMG__10JUTTextureFPC7ResTIMGUc
/* 8004A9C4 00047904  48 00 00 8C */	b .L_8004AA50
.L_8004A9C8:
/* 8004A9C8 00047908  38 80 00 01 */	li r4, 1
/* 8004A9CC 0004790C  4B FE 86 45 */	bl __dt__10JUTTextureFv
/* 8004A9D0 00047910  38 00 00 00 */	li r0, 0
/* 8004A9D4 00047914  90 1F 00 50 */	stw r0, 0x50(r31)
/* 8004A9D8 00047918  88 1F 00 5C */	lbz r0, 0x5c(r31)
/* 8004A9DC 0004791C  54 00 06 30 */	rlwinm r0, r0, 0, 0x18, 0x18
/* 8004A9E0 00047920  98 1F 00 5C */	stb r0, 0x5c(r31)
/* 8004A9E4 00047924  48 00 00 6C */	b .L_8004AA50
.L_8004A9E8:
/* 8004A9E8 00047928  38 00 00 00 */	li r0, 0
/* 8004A9EC 0004792C  28 1D 00 00 */	cmplwi r29, 0
/* 8004A9F0 00047930  90 1F 00 50 */	stw r0, 0x50(r31)
/* 8004A9F4 00047934  41 82 00 5C */	beq .L_8004AA50
/* 8004A9F8 00047938  38 60 00 40 */	li r3, 0x40
/* 8004A9FC 0004793C  4B FD 94 A9 */	bl __nw__FUl
/* 8004AA00 00047940  7C 7E 1B 79 */	or. r30, r3, r3
/* 8004AA04 00047944  41 82 00 24 */	beq .L_8004AA28
/* 8004AA08 00047948  38 00 00 00 */	li r0, 0
/* 8004AA0C 0004794C  7F A4 EB 78 */	mr r4, r29
/* 8004AA10 00047950  90 1E 00 28 */	stw r0, 0x28(r30)
/* 8004AA14 00047954  38 A0 00 00 */	li r5, 0
/* 8004AA18 00047958  4B FE 86 6D */	bl storeTIMG__10JUTTextureFPC7ResTIMGUc
/* 8004AA1C 0004795C  88 1E 00 3B */	lbz r0, 0x3b(r30)
/* 8004AA20 00047960  54 00 07 BC */	rlwinm r0, r0, 0, 0x1e, 0x1e
/* 8004AA24 00047964  98 1E 00 3B */	stb r0, 0x3b(r30)
.L_8004AA28:
/* 8004AA28 00047968  93 DF 00 50 */	stw r30, 0x50(r31)
/* 8004AA2C 0004796C  80 1F 00 50 */	lwz r0, 0x50(r31)
/* 8004AA30 00047970  28 00 00 00 */	cmplwi r0, 0
/* 8004AA34 00047974  40 82 00 0C */	bne .L_8004AA40
/* 8004AA38 00047978  38 60 00 00 */	li r3, 0
/* 8004AA3C 0004797C  48 00 00 34 */	b .L_8004AA70
.L_8004AA40:
/* 8004AA40 00047980  88 1F 00 5C */	lbz r0, 0x5c(r31)
/* 8004AA44 00047984  54 00 06 30 */	rlwinm r0, r0, 0, 0x18, 0x18
/* 8004AA48 00047988  60 00 00 01 */	ori r0, r0, 1
/* 8004AA4C 0004798C  98 1F 00 5C */	stb r0, 0x5c(r31)
.L_8004AA50:
/* 8004AA50 00047990  80 7F 00 54 */	lwz r3, 0x54(r31)
/* 8004AA54 00047994  4B FD 96 61 */	bl __dl__FPv
/* 8004AA58 00047998  38 00 00 00 */	li r0, 0
/* 8004AA5C 0004799C  3C 60 00 01 */	lis r3, 0x0000FFFF@ha
/* 8004AA60 000479A0  90 1F 00 54 */	stw r0, 0x54(r31)
/* 8004AA64 000479A4  38 03 FF FF */	addi r0, r3, 0x0000FFFF@l
/* 8004AA68 000479A8  38 60 00 01 */	li r3, 1
/* 8004AA6C 000479AC  B0 1F 00 04 */	sth r0, 4(r31)
.L_8004AA70:
/* 8004AA70 000479B0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8004AA74 000479B4  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8004AA78 000479B8  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8004AA7C 000479BC  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8004AA80 000479C0  7C 08 03 A6 */	mtlr r0
/* 8004AA84 000479C4  38 21 00 20 */	addi r1, r1, 0x20
/* 8004AA88 000479C8  4E 80 00 20 */	blr 
.endfn setTexture__12J2DTevBlock1FUlPC7ResTIMG

.fn setTexture__12J2DTevBlock1FUlP10JUTTexture, global
/* 8004AA8C 000479CC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8004AA90 000479D0  7C 08 02 A6 */	mflr r0
/* 8004AA94 000479D4  28 04 00 00 */	cmplwi r4, 0
/* 8004AA98 000479D8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8004AA9C 000479DC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8004AAA0 000479E0  7C BF 2B 78 */	mr r31, r5
/* 8004AAA4 000479E4  93 C1 00 08 */	stw r30, 8(r1)
/* 8004AAA8 000479E8  7C 7E 1B 78 */	mr r30, r3
/* 8004AAAC 000479EC  41 82 00 0C */	beq .L_8004AAB8
/* 8004AAB0 000479F0  38 60 00 00 */	li r3, 0
/* 8004AAB4 000479F4  48 00 00 4C */	b .L_8004AB00
.L_8004AAB8:
/* 8004AAB8 000479F8  88 1E 00 5C */	lbz r0, 0x5c(r30)
/* 8004AABC 000479FC  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 8004AAC0 00047A00  41 82 00 10 */	beq .L_8004AAD0
/* 8004AAC4 00047A04  80 7E 00 50 */	lwz r3, 0x50(r30)
/* 8004AAC8 00047A08  38 80 00 01 */	li r4, 1
/* 8004AACC 00047A0C  4B FE 85 45 */	bl __dt__10JUTTextureFv
.L_8004AAD0:
/* 8004AAD0 00047A10  93 FE 00 50 */	stw r31, 0x50(r30)
/* 8004AAD4 00047A14  88 1E 00 5C */	lbz r0, 0x5c(r30)
/* 8004AAD8 00047A18  54 00 06 30 */	rlwinm r0, r0, 0, 0x18, 0x18
/* 8004AADC 00047A1C  98 1E 00 5C */	stb r0, 0x5c(r30)
/* 8004AAE0 00047A20  80 7E 00 54 */	lwz r3, 0x54(r30)
/* 8004AAE4 00047A24  4B FD 95 D1 */	bl __dl__FPv
/* 8004AAE8 00047A28  38 00 00 00 */	li r0, 0
/* 8004AAEC 00047A2C  3C 60 00 01 */	lis r3, 0x0000FFFF@ha
/* 8004AAF0 00047A30  90 1E 00 54 */	stw r0, 0x54(r30)
/* 8004AAF4 00047A34  38 03 FF FF */	addi r0, r3, 0x0000FFFF@l
/* 8004AAF8 00047A38  38 60 00 01 */	li r3, 1
/* 8004AAFC 00047A3C  B0 1E 00 04 */	sth r0, 4(r30)
.L_8004AB00:
/* 8004AB00 00047A40  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8004AB04 00047A44  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8004AB08 00047A48  83 C1 00 08 */	lwz r30, 8(r1)
/* 8004AB0C 00047A4C  7C 08 03 A6 */	mtlr r0
/* 8004AB10 00047A50  38 21 00 10 */	addi r1, r1, 0x10
/* 8004AB14 00047A54  4E 80 00 20 */	blr 
.endfn setTexture__12J2DTevBlock1FUlP10JUTTexture

.fn removeTexture__12J2DTevBlock1FUl, global
/* 8004AB18 00047A58  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8004AB1C 00047A5C  7C 08 02 A6 */	mflr r0
/* 8004AB20 00047A60  28 04 00 01 */	cmplwi r4, 1
/* 8004AB24 00047A64  90 01 00 14 */	stw r0, 0x14(r1)
/* 8004AB28 00047A68  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8004AB2C 00047A6C  7C 7F 1B 78 */	mr r31, r3
/* 8004AB30 00047A70  41 80 00 0C */	blt .L_8004AB3C
/* 8004AB34 00047A74  38 60 00 00 */	li r3, 0
/* 8004AB38 00047A78  48 00 00 48 */	b .L_8004AB80
.L_8004AB3C:
/* 8004AB3C 00047A7C  88 1F 00 5C */	lbz r0, 0x5c(r31)
/* 8004AB40 00047A80  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 8004AB44 00047A84  41 82 00 10 */	beq .L_8004AB54
/* 8004AB48 00047A88  80 7F 00 50 */	lwz r3, 0x50(r31)
/* 8004AB4C 00047A8C  38 80 00 01 */	li r4, 1
/* 8004AB50 00047A90  4B FE 84 C1 */	bl __dt__10JUTTextureFv
.L_8004AB54:
/* 8004AB54 00047A94  38 00 00 00 */	li r0, 0
/* 8004AB58 00047A98  90 1F 00 50 */	stw r0, 0x50(r31)
/* 8004AB5C 00047A9C  88 1F 00 5C */	lbz r0, 0x5c(r31)
/* 8004AB60 00047AA0  54 00 06 30 */	rlwinm r0, r0, 0, 0x18, 0x18
/* 8004AB64 00047AA4  98 1F 00 5C */	stb r0, 0x5c(r31)
/* 8004AB68 00047AA8  80 7F 00 54 */	lwz r3, 0x54(r31)
/* 8004AB6C 00047AAC  4B FD 95 49 */	bl __dl__FPv
/* 8004AB70 00047AB0  3C 80 00 01 */	lis r4, 0x0000FFFF@ha
/* 8004AB74 00047AB4  38 60 00 01 */	li r3, 1
/* 8004AB78 00047AB8  38 04 FF FF */	addi r0, r4, 0x0000FFFF@l
/* 8004AB7C 00047ABC  B0 1F 00 04 */	sth r0, 4(r31)
.L_8004AB80:
/* 8004AB80 00047AC0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8004AB84 00047AC4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8004AB88 00047AC8  7C 08 03 A6 */	mtlr r0
/* 8004AB8C 00047ACC  38 21 00 10 */	addi r1, r1, 0x10
/* 8004AB90 00047AD0  4E 80 00 20 */	blr 
.endfn removeTexture__12J2DTevBlock1FUl

.fn setFont__12J2DTevBlock1FP7ResFONT, global
/* 8004AB94 00047AD4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8004AB98 00047AD8  7C 08 02 A6 */	mflr r0
/* 8004AB9C 00047ADC  90 01 00 24 */	stw r0, 0x24(r1)
/* 8004ABA0 00047AE0  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8004ABA4 00047AE4  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8004ABA8 00047AE8  7C 9E 23 79 */	or. r30, r4, r4
/* 8004ABAC 00047AEC  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8004ABB0 00047AF0  7C 7D 1B 78 */	mr r29, r3
/* 8004ABB4 00047AF4  40 82 00 0C */	bne .L_8004ABC0
/* 8004ABB8 00047AF8  38 60 00 00 */	li r3, 0
/* 8004ABBC 00047AFC  48 00 00 78 */	b .L_8004AC34
.L_8004ABC0:
/* 8004ABC0 00047B00  38 60 00 70 */	li r3, 0x70
/* 8004ABC4 00047B04  4B FD 92 E1 */	bl __nw__FUl
/* 8004ABC8 00047B08  7C 7F 1B 79 */	or. r31, r3, r3
/* 8004ABCC 00047B0C  41 82 00 14 */	beq .L_8004ABE0
/* 8004ABD0 00047B10  7F C4 F3 78 */	mr r4, r30
/* 8004ABD4 00047B14  38 A0 00 00 */	li r5, 0
/* 8004ABD8 00047B18  4B FE 65 F5 */	bl __ct__10JUTResFontFPC7ResFONTP7JKRHeap
/* 8004ABDC 00047B1C  7C 7F 1B 78 */	mr r31, r3
.L_8004ABE0:
/* 8004ABE0 00047B20  28 1F 00 00 */	cmplwi r31, 0
/* 8004ABE4 00047B24  40 82 00 0C */	bne .L_8004ABF0
/* 8004ABE8 00047B28  38 60 00 00 */	li r3, 0
/* 8004ABEC 00047B2C  48 00 00 48 */	b .L_8004AC34
.L_8004ABF0:
/* 8004ABF0 00047B30  88 1D 00 5C */	lbz r0, 0x5c(r29)
/* 8004ABF4 00047B34  54 00 06 31 */	rlwinm. r0, r0, 0, 0x18, 0x18
/* 8004ABF8 00047B38  41 82 00 24 */	beq .L_8004AC1C
/* 8004ABFC 00047B3C  80 7D 00 58 */	lwz r3, 0x58(r29)
/* 8004AC00 00047B40  28 03 00 00 */	cmplwi r3, 0
/* 8004AC04 00047B44  41 82 00 18 */	beq .L_8004AC1C
/* 8004AC08 00047B48  81 83 00 00 */	lwz r12, 0(r3)
/* 8004AC0C 00047B4C  38 80 00 01 */	li r4, 1
/* 8004AC10 00047B50  81 8C 00 08 */	lwz r12, 8(r12)
/* 8004AC14 00047B54  7D 89 03 A6 */	mtctr r12
/* 8004AC18 00047B58  4E 80 04 21 */	bctrl 
.L_8004AC1C:
/* 8004AC1C 00047B5C  93 FD 00 58 */	stw r31, 0x58(r29)
/* 8004AC20 00047B60  38 60 00 01 */	li r3, 1
/* 8004AC24 00047B64  88 1D 00 5C */	lbz r0, 0x5c(r29)
/* 8004AC28 00047B68  54 00 06 7E */	clrlwi r0, r0, 0x19
/* 8004AC2C 00047B6C  60 00 00 80 */	ori r0, r0, 0x80
/* 8004AC30 00047B70  98 1D 00 5C */	stb r0, 0x5c(r29)
.L_8004AC34:
/* 8004AC34 00047B74  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8004AC38 00047B78  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8004AC3C 00047B7C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8004AC40 00047B80  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8004AC44 00047B84  7C 08 03 A6 */	mtlr r0
/* 8004AC48 00047B88  38 21 00 20 */	addi r1, r1, 0x20
/* 8004AC4C 00047B8C  4E 80 00 20 */	blr 
.endfn setFont__12J2DTevBlock1FP7ResFONT

.fn setFont__12J2DTevBlock1FP7JUTFont, global
/* 8004AC50 00047B90  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8004AC54 00047B94  7C 08 02 A6 */	mflr r0
/* 8004AC58 00047B98  90 01 00 14 */	stw r0, 0x14(r1)
/* 8004AC5C 00047B9C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8004AC60 00047BA0  7C 9F 23 79 */	or. r31, r4, r4
/* 8004AC64 00047BA4  93 C1 00 08 */	stw r30, 8(r1)
/* 8004AC68 00047BA8  7C 7E 1B 78 */	mr r30, r3
/* 8004AC6C 00047BAC  40 82 00 0C */	bne .L_8004AC78
/* 8004AC70 00047BB0  38 60 00 00 */	li r3, 0
/* 8004AC74 00047BB4  48 00 00 44 */	b .L_8004ACB8
.L_8004AC78:
/* 8004AC78 00047BB8  88 1E 00 5C */	lbz r0, 0x5c(r30)
/* 8004AC7C 00047BBC  54 00 06 31 */	rlwinm. r0, r0, 0, 0x18, 0x18
/* 8004AC80 00047BC0  41 82 00 24 */	beq .L_8004ACA4
/* 8004AC84 00047BC4  80 7E 00 58 */	lwz r3, 0x58(r30)
/* 8004AC88 00047BC8  28 03 00 00 */	cmplwi r3, 0
/* 8004AC8C 00047BCC  41 82 00 18 */	beq .L_8004ACA4
/* 8004AC90 00047BD0  81 83 00 00 */	lwz r12, 0(r3)
/* 8004AC94 00047BD4  38 80 00 01 */	li r4, 1
/* 8004AC98 00047BD8  81 8C 00 08 */	lwz r12, 8(r12)
/* 8004AC9C 00047BDC  7D 89 03 A6 */	mtctr r12
/* 8004ACA0 00047BE0  4E 80 04 21 */	bctrl 
.L_8004ACA4:
/* 8004ACA4 00047BE4  93 FE 00 58 */	stw r31, 0x58(r30)
/* 8004ACA8 00047BE8  38 60 00 01 */	li r3, 1
/* 8004ACAC 00047BEC  88 1E 00 5C */	lbz r0, 0x5c(r30)
/* 8004ACB0 00047BF0  54 00 06 7E */	clrlwi r0, r0, 0x19
/* 8004ACB4 00047BF4  98 1E 00 5C */	stb r0, 0x5c(r30)
.L_8004ACB8:
/* 8004ACB8 00047BF8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8004ACBC 00047BFC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8004ACC0 00047C00  83 C1 00 08 */	lwz r30, 8(r1)
/* 8004ACC4 00047C04  7C 08 03 A6 */	mtlr r0
/* 8004ACC8 00047C08  38 21 00 10 */	addi r1, r1, 0x10
/* 8004ACCC 00047C0C  4E 80 00 20 */	blr 
.endfn setFont__12J2DTevBlock1FP7JUTFont

.fn setPalette__12J2DTevBlock1FUlPC7ResTLUT, global
/* 8004ACD0 00047C10  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8004ACD4 00047C14  7C 08 02 A6 */	mflr r0
/* 8004ACD8 00047C18  28 04 00 00 */	cmplwi r4, 0
/* 8004ACDC 00047C1C  90 01 00 24 */	stw r0, 0x24(r1)
/* 8004ACE0 00047C20  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8004ACE4 00047C24  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8004ACE8 00047C28  7C BE 2B 78 */	mr r30, r5
/* 8004ACEC 00047C2C  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8004ACF0 00047C30  7C 7D 1B 78 */	mr r29, r3
/* 8004ACF4 00047C34  41 82 00 0C */	beq .L_8004AD00
/* 8004ACF8 00047C38  38 60 00 00 */	li r3, 0
/* 8004ACFC 00047C3C  48 00 00 80 */	b .L_8004AD7C
.L_8004AD00:
/* 8004AD00 00047C40  28 1E 00 00 */	cmplwi r30, 0
/* 8004AD04 00047C44  41 82 00 64 */	beq .L_8004AD68
/* 8004AD08 00047C48  80 7D 00 54 */	lwz r3, 0x54(r29)
/* 8004AD0C 00047C4C  28 03 00 00 */	cmplwi r3, 0
/* 8004AD10 00047C50  40 82 00 38 */	bne .L_8004AD48
/* 8004AD14 00047C54  38 60 00 18 */	li r3, 0x18
/* 8004AD18 00047C58  4B FD 91 8D */	bl __nw__FUl
/* 8004AD1C 00047C5C  7C 7F 1B 79 */	or. r31, r3, r3
/* 8004AD20 00047C60  41 82 00 10 */	beq .L_8004AD30
/* 8004AD24 00047C64  7F C5 F3 78 */	mr r5, r30
/* 8004AD28 00047C68  38 80 00 00 */	li r4, 0
/* 8004AD2C 00047C6C  4B FE 41 99 */	bl storeTLUT__10JUTPaletteF7_GXTlutP7ResTLUT
.L_8004AD30:
/* 8004AD30 00047C70  93 FD 00 54 */	stw r31, 0x54(r29)
/* 8004AD34 00047C74  80 1D 00 54 */	lwz r0, 0x54(r29)
/* 8004AD38 00047C78  28 00 00 00 */	cmplwi r0, 0
/* 8004AD3C 00047C7C  40 82 00 14 */	bne .L_8004AD50
/* 8004AD40 00047C80  38 60 00 00 */	li r3, 0
/* 8004AD44 00047C84  48 00 00 38 */	b .L_8004AD7C
.L_8004AD48:
/* 8004AD48 00047C88  38 80 00 00 */	li r4, 0
/* 8004AD4C 00047C8C  4B FE 41 79 */	bl storeTLUT__10JUTPaletteF7_GXTlutP7ResTLUT
.L_8004AD50:
/* 8004AD50 00047C90  80 7D 00 50 */	lwz r3, 0x50(r29)
/* 8004AD54 00047C94  28 03 00 00 */	cmplwi r3, 0
/* 8004AD58 00047C98  41 82 00 20 */	beq .L_8004AD78
/* 8004AD5C 00047C9C  80 9D 00 54 */	lwz r4, 0x54(r29)
/* 8004AD60 00047CA0  4B FE 86 3D */	bl attachPalette__10JUTTextureFP10JUTPalette
/* 8004AD64 00047CA4  48 00 00 14 */	b .L_8004AD78
.L_8004AD68:
/* 8004AD68 00047CA8  80 7D 00 54 */	lwz r3, 0x54(r29)
/* 8004AD6C 00047CAC  4B FD 93 49 */	bl __dl__FPv
/* 8004AD70 00047CB0  38 00 00 00 */	li r0, 0
/* 8004AD74 00047CB4  90 1D 00 54 */	stw r0, 0x54(r29)
.L_8004AD78:
/* 8004AD78 00047CB8  38 60 00 01 */	li r3, 1
.L_8004AD7C:
/* 8004AD7C 00047CBC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8004AD80 00047CC0  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8004AD84 00047CC4  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8004AD88 00047CC8  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8004AD8C 00047CCC  7C 08 03 A6 */	mtlr r0
/* 8004AD90 00047CD0  38 21 00 20 */	addi r1, r1, 0x20
/* 8004AD94 00047CD4  4E 80 00 20 */	blr 
.endfn setPalette__12J2DTevBlock1FUlPC7ResTLUT

.fn shiftDeleteFlag__12J2DTevBlock1FUcb, global
/* 8004AD98 00047CD8  88 03 00 5C */	lbz r0, 0x5c(r3)
/* 8004AD9C 00047CDC  54 00 06 30 */	rlwinm r0, r0, 0, 0x18, 0x18
/* 8004ADA0 00047CE0  98 03 00 5C */	stb r0, 0x5c(r3)
/* 8004ADA4 00047CE4  4E 80 00 20 */	blr 
.endfn shiftDeleteFlag__12J2DTevBlock1FUcb

.fn setGX__12J2DTevBlock1Fv, global
/* 8004ADA8 00047CE8  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8004ADAC 00047CEC  7C 08 02 A6 */	mflr r0
/* 8004ADB0 00047CF0  38 80 00 00 */	li r4, 0
/* 8004ADB4 00047CF4  38 A0 00 00 */	li r5, 0
/* 8004ADB8 00047CF8  90 01 00 34 */	stw r0, 0x34(r1)
/* 8004ADBC 00047CFC  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 8004ADC0 00047D00  7C 7F 1B 78 */	mr r31, r3
/* 8004ADC4 00047D04  93 C1 00 28 */	stw r30, 0x28(r1)
/* 8004ADC8 00047D08  93 A1 00 24 */	stw r29, 0x24(r1)
/* 8004ADCC 00047D0C  93 81 00 20 */	stw r28, 0x20(r1)
/* 8004ADD0 00047D10  81 83 00 00 */	lwz r12, 0(r3)
/* 8004ADD4 00047D14  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8004ADD8 00047D18  7D 89 03 A6 */	mtctr r12
/* 8004ADDC 00047D1C  4E 80 04 21 */	bctrl 
/* 8004ADE0 00047D20  88 9F 00 08 */	lbz r4, 8(r31)
/* 8004ADE4 00047D24  38 60 00 00 */	li r3, 0
/* 8004ADE8 00047D28  88 BF 00 09 */	lbz r5, 9(r31)
/* 8004ADEC 00047D2C  88 DF 00 0A */	lbz r6, 0xa(r31)
/* 8004ADF0 00047D30  48 09 DC 2D */	bl GXSetTevOrder
/* 8004ADF4 00047D34  7F FD FB 78 */	mr r29, r31
/* 8004ADF8 00047D38  3B C1 00 0C */	addi r30, r1, 0xc
/* 8004ADFC 00047D3C  3B 80 00 00 */	li r28, 0
.L_8004AE00:
/* 8004AE00 00047D40  80 9D 00 0C */	lwz r4, 0xc(r29)
/* 8004AE04 00047D44  2C 1C 00 03 */	cmpwi r28, 3
/* 8004AE08 00047D48  80 1D 00 10 */	lwz r0, 0x10(r29)
/* 8004AE0C 00047D4C  38 60 00 00 */	li r3, 0
/* 8004AE10 00047D50  90 81 00 0C */	stw r4, 0xc(r1)
/* 8004AE14 00047D54  90 01 00 10 */	stw r0, 0x10(r1)
/* 8004AE18 00047D58  41 82 00 08 */	beq .L_8004AE20
/* 8004AE1C 00047D5C  38 7C 00 01 */	addi r3, r28, 1
.L_8004AE20:
/* 8004AE20 00047D60  7F C4 F3 78 */	mr r4, r30
/* 8004AE24 00047D64  48 09 D8 B9 */	bl GXSetTevColorS10
/* 8004AE28 00047D68  3B 9C 00 01 */	addi r28, r28, 1
/* 8004AE2C 00047D6C  3B BD 00 08 */	addi r29, r29, 8
/* 8004AE30 00047D70  2C 1C 00 04 */	cmpwi r28, 4
/* 8004AE34 00047D74  41 80 FF CC */	blt .L_8004AE00
/* 8004AE38 00047D78  38 60 00 01 */	li r3, 1
/* 8004AE3C 00047D7C  48 09 DD 7D */	bl GXSetNumTevStages
/* 8004AE40 00047D80  88 1F 00 2F */	lbz r0, 0x2f(r31)
/* 8004AE44 00047D84  38 60 00 00 */	li r3, 0
/* 8004AE48 00047D88  88 BF 00 2E */	lbz r5, 0x2e(r31)
/* 8004AE4C 00047D8C  54 06 E7 3E */	rlwinm r6, r0, 0x1c, 0x1c, 0x1f
/* 8004AE50 00047D90  54 07 07 3E */	clrlwi r7, r0, 0x1c
/* 8004AE54 00047D94  54 A4 E7 3E */	rlwinm r4, r5, 0x1c, 0x1c, 0x1f
/* 8004AE58 00047D98  54 A5 07 3E */	clrlwi r5, r5, 0x1c
/* 8004AE5C 00047D9C  48 09 D6 AD */	bl GXSetTevColorIn
/* 8004AE60 00047DA0  88 BF 00 32 */	lbz r5, 0x32(r31)
/* 8004AE64 00047DA4  38 60 00 00 */	li r3, 0
/* 8004AE68 00047DA8  88 DF 00 33 */	lbz r6, 0x33(r31)
/* 8004AE6C 00047DAC  54 A0 06 34 */	rlwinm r0, r5, 0, 0x18, 0x1a
/* 8004AE70 00047DB0  7C 04 2E 70 */	srawi r4, r0, 5
/* 8004AE74 00047DB4  54 C7 E7 7E */	rlwinm r7, r6, 0x1c, 0x1d, 0x1f
/* 8004AE78 00047DB8  54 C0 CF FE */	rlwinm r0, r6, 0x19, 0x1f, 0x1f
/* 8004AE7C 00047DBC  50 A0 0F 7C */	rlwimi r0, r5, 1, 0x1d, 0x1e
/* 8004AE80 00047DC0  54 84 06 3E */	clrlwi r4, r4, 0x18
/* 8004AE84 00047DC4  54 A5 F7 7E */	rlwinm r5, r5, 0x1e, 0x1d, 0x1f
/* 8004AE88 00047DC8  54 06 06 3E */	clrlwi r6, r0, 0x18
/* 8004AE8C 00047DCC  48 09 D6 C1 */	bl GXSetTevAlphaIn
/* 8004AE90 00047DD0  88 FF 00 2D */	lbz r7, 0x2d(r31)
/* 8004AE94 00047DD4  38 60 00 00 */	li r3, 0
/* 8004AE98 00047DD8  54 E0 06 B6 */	rlwinm r0, r7, 0, 0x1a, 0x1b
/* 8004AE9C 00047DDC  54 E5 07 BE */	clrlwi r5, r7, 0x1e
/* 8004AEA0 00047DE0  7C 06 26 70 */	srawi r6, r0, 4
/* 8004AEA4 00047DE4  54 E9 F7 FE */	rlwinm r9, r7, 0x1e, 0x1f, 0x1f
/* 8004AEA8 00047DE8  54 E0 EF 7C */	rlwinm r0, r7, 0x1d, 0x1d, 0x1e
/* 8004AEAC 00047DEC  28 05 00 03 */	cmplwi r5, 3
/* 8004AEB0 00047DF0  7C 89 02 14 */	add r4, r9, r0
/* 8004AEB4 00047DF4  54 E8 D7 BE */	rlwinm r8, r7, 0x1a, 0x1e, 0x1f
/* 8004AEB8 00047DF8  38 04 00 08 */	addi r0, r4, 8
/* 8004AEBC 00047DFC  54 C6 06 3E */	clrlwi r6, r6, 0x18
/* 8004AEC0 00047E00  54 E7 EF FE */	rlwinm r7, r7, 0x1d, 0x1f, 0x1f
/* 8004AEC4 00047E04  54 00 06 3E */	clrlwi r0, r0, 0x18
/* 8004AEC8 00047E08  41 82 00 08 */	beq .L_8004AED0
/* 8004AECC 00047E0C  7D 20 4B 78 */	mr r0, r9
.L_8004AED0:
/* 8004AED0 00047E10  54 04 06 3E */	clrlwi r4, r0, 0x18
/* 8004AED4 00047E14  48 09 D6 BD */	bl GXSetTevColorOp
/* 8004AED8 00047E18  88 FF 00 31 */	lbz r7, 0x31(r31)
/* 8004AEDC 00047E1C  38 60 00 00 */	li r3, 0
/* 8004AEE0 00047E20  54 E0 06 B6 */	rlwinm r0, r7, 0, 0x1a, 0x1b
/* 8004AEE4 00047E24  54 E5 07 BE */	clrlwi r5, r7, 0x1e
/* 8004AEE8 00047E28  7C 06 26 70 */	srawi r6, r0, 4
/* 8004AEEC 00047E2C  54 E9 F7 FE */	rlwinm r9, r7, 0x1e, 0x1f, 0x1f
/* 8004AEF0 00047E30  54 E0 EF 7C */	rlwinm r0, r7, 0x1d, 0x1d, 0x1e
/* 8004AEF4 00047E34  28 05 00 03 */	cmplwi r5, 3
/* 8004AEF8 00047E38  7C 89 02 14 */	add r4, r9, r0
/* 8004AEFC 00047E3C  54 E8 D7 BE */	rlwinm r8, r7, 0x1a, 0x1e, 0x1f
/* 8004AF00 00047E40  38 04 00 08 */	addi r0, r4, 8
/* 8004AF04 00047E44  54 C6 06 3E */	clrlwi r6, r6, 0x18
/* 8004AF08 00047E48  54 E7 EF FE */	rlwinm r7, r7, 0x1d, 0x1f, 0x1f
/* 8004AF0C 00047E4C  54 00 06 3E */	clrlwi r0, r0, 0x18
/* 8004AF10 00047E50  41 82 00 08 */	beq .L_8004AF18
/* 8004AF14 00047E54  7D 20 4B 78 */	mr r0, r9
.L_8004AF18:
/* 8004AF18 00047E58  54 04 06 3E */	clrlwi r4, r0, 0x18
/* 8004AF1C 00047E5C  48 09 D6 DD */	bl GXSetTevAlphaOp
/* 8004AF20 00047E60  88 1F 00 44 */	lbz r0, 0x44(r31)
/* 8004AF24 00047E64  38 80 00 00 */	li r4, 0
/* 8004AF28 00047E68  28 00 00 FF */	cmplwi r0, 0xff
/* 8004AF2C 00047E6C  41 82 00 08 */	beq .L_8004AF34
/* 8004AF30 00047E70  7C 04 03 78 */	mr r4, r0
.L_8004AF34:
/* 8004AF34 00047E74  38 60 00 00 */	li r3, 0
/* 8004AF38 00047E78  48 09 D8 95 */	bl GXSetTevKColorSel
/* 8004AF3C 00047E7C  88 1F 00 45 */	lbz r0, 0x45(r31)
/* 8004AF40 00047E80  38 80 00 00 */	li r4, 0
/* 8004AF44 00047E84  28 00 00 FF */	cmplwi r0, 0xff
/* 8004AF48 00047E88  41 82 00 08 */	beq .L_8004AF50
/* 8004AF4C 00047E8C  7C 04 03 78 */	mr r4, r0
.L_8004AF50:
/* 8004AF50 00047E90  38 60 00 00 */	li r3, 0
/* 8004AF54 00047E94  48 09 D8 D5 */	bl GXSetTevKAlphaSel
/* 8004AF58 00047E98  3B 80 00 00 */	li r28, 0
/* 8004AF5C 00047E9C  7F FD FB 78 */	mr r29, r31
.L_8004AF60:
/* 8004AF60 00047EA0  80 1D 00 34 */	lwz r0, 0x34(r29)
/* 8004AF64 00047EA4  7F 83 E3 78 */	mr r3, r28
/* 8004AF68 00047EA8  38 81 00 08 */	addi r4, r1, 8
/* 8004AF6C 00047EAC  90 01 00 08 */	stw r0, 8(r1)
/* 8004AF70 00047EB0  48 09 D7 E9 */	bl GXSetTevKColor
/* 8004AF74 00047EB4  3B 9C 00 01 */	addi r28, r28, 1
/* 8004AF78 00047EB8  3B BD 00 04 */	addi r29, r29, 4
/* 8004AF7C 00047EBC  2C 1C 00 04 */	cmpwi r28, 4
/* 8004AF80 00047EC0  41 80 FF E0 */	blt .L_8004AF60
/* 8004AF84 00047EC4  88 1F 00 33 */	lbz r0, 0x33(r31)
/* 8004AF88 00047EC8  38 60 00 00 */	li r3, 0
/* 8004AF8C 00047ECC  54 04 07 BE */	clrlwi r4, r0, 0x1e
/* 8004AF90 00047ED0  54 05 F7 BE */	rlwinm r5, r0, 0x1e, 0x1e, 0x1f
/* 8004AF94 00047ED4  48 09 D8 F1 */	bl GXSetTevSwapMode
/* 8004AF98 00047ED8  3B 80 00 00 */	li r28, 0
.L_8004AF9C:
/* 8004AF9C 00047EDC  38 1C 00 46 */	addi r0, r28, 0x46
/* 8004AFA0 00047EE0  7F 83 E3 78 */	mr r3, r28
/* 8004AFA4 00047EE4  7C 1F 00 AE */	lbzx r0, r31, r0
/* 8004AFA8 00047EE8  54 04 D7 BE */	rlwinm r4, r0, 0x1a, 0x1e, 0x1f
/* 8004AFAC 00047EEC  54 05 E7 BE */	rlwinm r5, r0, 0x1c, 0x1e, 0x1f
/* 8004AFB0 00047EF0  54 06 F7 BE */	rlwinm r6, r0, 0x1e, 0x1e, 0x1f
/* 8004AFB4 00047EF4  54 07 07 BE */	clrlwi r7, r0, 0x1e
/* 8004AFB8 00047EF8  48 09 D9 15 */	bl GXSetTevSwapModeTable
/* 8004AFBC 00047EFC  3B 9C 00 01 */	addi r28, r28, 1
/* 8004AFC0 00047F00  2C 1C 00 04 */	cmpwi r28, 4
/* 8004AFC4 00047F04  41 80 FF D8 */	blt .L_8004AF9C
/* 8004AFC8 00047F08  38 7F 00 4C */	addi r3, r31, 0x4c
/* 8004AFCC 00047F0C  38 80 00 00 */	li r4, 0
/* 8004AFD0 00047F10  48 00 E5 F5 */	bl load__14J2DIndTevStageFUc
/* 8004AFD4 00047F14  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8004AFD8 00047F18  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 8004AFDC 00047F1C  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 8004AFE0 00047F20  83 A1 00 24 */	lwz r29, 0x24(r1)
/* 8004AFE4 00047F24  83 81 00 20 */	lwz r28, 0x20(r1)
/* 8004AFE8 00047F28  7C 08 03 A6 */	mtlr r0
/* 8004AFEC 00047F2C  38 21 00 30 */	addi r1, r1, 0x30
/* 8004AFF0 00047F30  4E 80 00 20 */	blr 
.endfn setGX__12J2DTevBlock1Fv

.fn loadTexture__12J2DTevBlock1F11_GXTexMapIDUl, global
/* 8004AFF4 00047F34  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8004AFF8 00047F38  7C 08 02 A6 */	mflr r0
/* 8004AFFC 00047F3C  28 05 00 00 */	cmplwi r5, 0
/* 8004B000 00047F40  90 01 00 14 */	stw r0, 0x14(r1)
/* 8004B004 00047F44  40 82 00 28 */	bne .L_8004B02C
/* 8004B008 00047F48  54 A0 10 3A */	slwi r0, r5, 2
/* 8004B00C 00047F4C  7C 63 02 14 */	add r3, r3, r0
/* 8004B010 00047F50  80 63 00 50 */	lwz r3, 0x50(r3)
/* 8004B014 00047F54  28 03 00 00 */	cmplwi r3, 0
/* 8004B018 00047F58  41 82 00 14 */	beq .L_8004B02C
/* 8004B01C 00047F5C  80 03 00 20 */	lwz r0, 0x20(r3)
/* 8004B020 00047F60  28 00 00 00 */	cmplwi r0, 0
/* 8004B024 00047F64  41 82 00 08 */	beq .L_8004B02C
/* 8004B028 00047F68  4B FE 86 09 */	bl load__10JUTTextureF11_GXTexMapID
.L_8004B02C:
/* 8004B02C 00047F6C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8004B030 00047F70  7C 08 03 A6 */	mtlr r0
/* 8004B034 00047F74  38 21 00 10 */	addi r1, r1, 0x10
/* 8004B038 00047F78  4E 80 00 20 */	blr 
.endfn loadTexture__12J2DTevBlock1F11_GXTexMapIDUl

.fn __ct__12J2DTevBlock2Fv, global
/* 8004B03C 00047F7C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8004B040 00047F80  7C 08 02 A6 */	mflr r0
/* 8004B044 00047F84  3C 80 80 4A */	lis r4, __vt__11J2DTevBlock@ha
/* 8004B048 00047F88  38 A0 00 00 */	li r5, 0
/* 8004B04C 00047F8C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8004B050 00047F90  38 04 10 94 */	addi r0, r4, __vt__11J2DTevBlock@l
/* 8004B054 00047F94  3C 80 80 05 */	lis r4, __ct__11J2DTevOrderFv@ha
/* 8004B058 00047F98  38 C0 00 04 */	li r6, 4
/* 8004B05C 00047F9C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8004B060 00047FA0  7C 7F 1B 78 */	mr r31, r3
/* 8004B064 00047FA4  3C 60 80 4A */	lis r3, __vt__12J2DTevBlock2@ha
/* 8004B068 00047FA8  38 84 A2 C4 */	addi r4, r4, __ct__11J2DTevOrderFv@l
/* 8004B06C 00047FAC  90 1F 00 00 */	stw r0, 0(r31)
/* 8004B070 00047FB0  38 03 0F 1C */	addi r0, r3, __vt__12J2DTevBlock2@l
/* 8004B074 00047FB4  38 7F 00 0A */	addi r3, r31, 0xa
/* 8004B078 00047FB8  38 E0 00 02 */	li r7, 2
/* 8004B07C 00047FBC  90 1F 00 00 */	stw r0, 0(r31)
/* 8004B080 00047FC0  48 07 67 BD */	bl __construct_array
/* 8004B084 00047FC4  3C 80 80 05 */	lis r4, __ct__13J2DGXColorS10Fv@ha
/* 8004B088 00047FC8  38 7F 00 12 */	addi r3, r31, 0x12
/* 8004B08C 00047FCC  38 84 A2 C0 */	addi r4, r4, __ct__13J2DGXColorS10Fv@l
/* 8004B090 00047FD0  38 A0 00 00 */	li r5, 0
/* 8004B094 00047FD4  38 C0 00 08 */	li r6, 8
/* 8004B098 00047FD8  38 E0 00 04 */	li r7, 4
/* 8004B09C 00047FDC  48 07 67 A1 */	bl __construct_array
/* 8004B0A0 00047FE0  3C 80 80 05 */	lis r4, __ct__11J2DTevStageFv@ha
/* 8004B0A4 00047FE4  38 7F 00 33 */	addi r3, r31, 0x33
/* 8004B0A8 00047FE8  38 84 95 D8 */	addi r4, r4, __ct__11J2DTevStageFv@l
/* 8004B0AC 00047FEC  38 A0 00 00 */	li r5, 0
/* 8004B0B0 00047FF0  38 C0 00 08 */	li r6, 8
/* 8004B0B4 00047FF4  38 E0 00 02 */	li r7, 2
/* 8004B0B8 00047FF8  48 07 67 85 */	bl __construct_array
/* 8004B0BC 00047FFC  3C 80 80 04 */	lis r4, __ct__Q28JUtility6TColorFv@ha
/* 8004B0C0 00048000  38 7F 00 44 */	addi r3, r31, 0x44
/* 8004B0C4 00048004  38 84 9B 94 */	addi r4, r4, __ct__Q28JUtility6TColorFv@l
/* 8004B0C8 00048008  38 A0 00 00 */	li r5, 0
/* 8004B0CC 0004800C  38 C0 00 04 */	li r6, 4
/* 8004B0D0 00048010  38 E0 00 04 */	li r7, 4
/* 8004B0D4 00048014  48 07 67 69 */	bl __construct_array
/* 8004B0D8 00048018  3C 80 80 05 */	lis r4, __ct__19J2DTevSwapModeTableFv@ha
/* 8004B0DC 0004801C  38 7F 00 58 */	addi r3, r31, 0x58
/* 8004B0E0 00048020  38 84 A2 B4 */	addi r4, r4, __ct__19J2DTevSwapModeTableFv@l
/* 8004B0E4 00048024  38 A0 00 00 */	li r5, 0
/* 8004B0E8 00048028  38 C0 00 01 */	li r6, 1
/* 8004B0EC 0004802C  38 E0 00 04 */	li r7, 4
/* 8004B0F0 00048030  48 07 67 4D */	bl __construct_array
/* 8004B0F4 00048034  3C 80 80 05 */	lis r4, __ct__14J2DIndTevStageFv@ha
/* 8004B0F8 00048038  38 7F 00 5C */	addi r3, r31, 0x5c
/* 8004B0FC 0004803C  38 84 A2 20 */	addi r4, r4, __ct__14J2DIndTevStageFv@l
/* 8004B100 00048040  38 A0 00 00 */	li r5, 0
/* 8004B104 00048044  38 C0 00 04 */	li r6, 4
/* 8004B108 00048048  38 E0 00 02 */	li r7, 2
/* 8004B10C 0004804C  48 07 67 31 */	bl __construct_array
/* 8004B110 00048050  38 00 00 00 */	li r0, 0
/* 8004B114 00048054  7F E3 FB 78 */	mr r3, r31
/* 8004B118 00048058  90 1F 00 64 */	stw r0, 0x64(r31)
/* 8004B11C 0004805C  90 1F 00 68 */	stw r0, 0x68(r31)
/* 8004B120 00048060  98 1F 00 78 */	stb r0, 0x78(r31)
/* 8004B124 00048064  81 9F 00 00 */	lwz r12, 0(r31)
/* 8004B128 00048068  81 8C 00 08 */	lwz r12, 8(r12)
/* 8004B12C 0004806C  7D 89 03 A6 */	mtctr r12
/* 8004B130 00048070  4E 80 04 21 */	bctrl 
/* 8004B134 00048074  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8004B138 00048078  7F E3 FB 78 */	mr r3, r31
/* 8004B13C 0004807C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8004B140 00048080  7C 08 03 A6 */	mtlr r0
/* 8004B144 00048084  38 21 00 10 */	addi r1, r1, 0x10
/* 8004B148 00048088  4E 80 00 20 */	blr 
.endfn __ct__12J2DTevBlock2Fv

.fn __dt__12J2DTevBlock2Fv, global
/* 8004B14C 0004808C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8004B150 00048090  7C 08 02 A6 */	mflr r0
/* 8004B154 00048094  90 01 00 14 */	stw r0, 0x14(r1)
/* 8004B158 00048098  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8004B15C 0004809C  7C 9F 23 78 */	mr r31, r4
/* 8004B160 000480A0  93 C1 00 08 */	stw r30, 8(r1)
/* 8004B164 000480A4  7C 7E 1B 79 */	or. r30, r3, r3
/* 8004B168 000480A8  41 82 00 A0 */	beq .L_8004B208
/* 8004B16C 000480AC  3C 60 80 4A */	lis r3, __vt__12J2DTevBlock2@ha
/* 8004B170 000480B0  38 03 0F 1C */	addi r0, r3, __vt__12J2DTevBlock2@l
/* 8004B174 000480B4  90 1E 00 00 */	stw r0, 0(r30)
/* 8004B178 000480B8  88 1E 00 78 */	lbz r0, 0x78(r30)
/* 8004B17C 000480BC  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 8004B180 000480C0  41 82 00 10 */	beq .L_8004B190
/* 8004B184 000480C4  80 7E 00 64 */	lwz r3, 0x64(r30)
/* 8004B188 000480C8  38 80 00 01 */	li r4, 1
/* 8004B18C 000480CC  4B FE 7E 85 */	bl __dt__10JUTTextureFv
.L_8004B190:
/* 8004B190 000480D0  88 1E 00 78 */	lbz r0, 0x78(r30)
/* 8004B194 000480D4  54 00 07 BD */	rlwinm. r0, r0, 0, 0x1e, 0x1e
/* 8004B198 000480D8  41 82 00 10 */	beq .L_8004B1A8
/* 8004B19C 000480DC  80 7E 00 68 */	lwz r3, 0x68(r30)
/* 8004B1A0 000480E0  38 80 00 01 */	li r4, 1
/* 8004B1A4 000480E4  4B FE 7E 6D */	bl __dt__10JUTTextureFv
.L_8004B1A8:
/* 8004B1A8 000480E8  80 7E 00 6C */	lwz r3, 0x6c(r30)
/* 8004B1AC 000480EC  4B FD 8F 09 */	bl __dl__FPv
/* 8004B1B0 000480F0  80 7E 00 70 */	lwz r3, 0x70(r30)
/* 8004B1B4 000480F4  4B FD 8F 01 */	bl __dl__FPv
/* 8004B1B8 000480F8  88 1E 00 78 */	lbz r0, 0x78(r30)
/* 8004B1BC 000480FC  54 00 06 31 */	rlwinm. r0, r0, 0, 0x18, 0x18
/* 8004B1C0 00048100  41 82 00 24 */	beq .L_8004B1E4
/* 8004B1C4 00048104  80 7E 00 74 */	lwz r3, 0x74(r30)
/* 8004B1C8 00048108  28 03 00 00 */	cmplwi r3, 0
/* 8004B1CC 0004810C  41 82 00 18 */	beq .L_8004B1E4
/* 8004B1D0 00048110  81 83 00 00 */	lwz r12, 0(r3)
/* 8004B1D4 00048114  38 80 00 01 */	li r4, 1
/* 8004B1D8 00048118  81 8C 00 08 */	lwz r12, 8(r12)
/* 8004B1DC 0004811C  7D 89 03 A6 */	mtctr r12
/* 8004B1E0 00048120  4E 80 04 21 */	bctrl 
.L_8004B1E4:
/* 8004B1E4 00048124  28 1E 00 00 */	cmplwi r30, 0
/* 8004B1E8 00048128  41 82 00 10 */	beq .L_8004B1F8
/* 8004B1EC 0004812C  3C 60 80 4A */	lis r3, __vt__11J2DTevBlock@ha
/* 8004B1F0 00048130  38 03 10 94 */	addi r0, r3, __vt__11J2DTevBlock@l
/* 8004B1F4 00048134  90 1E 00 00 */	stw r0, 0(r30)
.L_8004B1F8:
/* 8004B1F8 00048138  7F E0 07 35 */	extsh. r0, r31
/* 8004B1FC 0004813C  40 81 00 0C */	ble .L_8004B208
/* 8004B200 00048140  7F C3 F3 78 */	mr r3, r30
/* 8004B204 00048144  4B FD 8E B1 */	bl __dl__FPv
.L_8004B208:
/* 8004B208 00048148  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8004B20C 0004814C  7F C3 F3 78 */	mr r3, r30
/* 8004B210 00048150  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8004B214 00048154  83 C1 00 08 */	lwz r30, 8(r1)
/* 8004B218 00048158  7C 08 03 A6 */	mtlr r0
/* 8004B21C 0004815C  38 21 00 10 */	addi r1, r1, 0x10
/* 8004B220 00048160  4E 80 00 20 */	blr 
.endfn __dt__12J2DTevBlock2Fv

.fn initialize__12J2DTevBlock2Fv, global
/* 8004B224 00048164  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 8004B228 00048168  38 E2 85 B8 */	addi r7, r2, j2dDefaultTevColor@sda21
/* 8004B22C 0004816C  3C 80 00 01 */	lis r4, 0x0000FFFF@ha
/* 8004B230 00048170  A9 87 00 02 */	lha r12, 2(r7)
/* 8004B234 00048174  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 8004B238 00048178  38 04 FF FF */	addi r0, r4, 0x0000FFFF@l
/* 8004B23C 0004817C  AB E2 85 B8 */	lha r31, j2dDefaultTevColor@sda21(r2)
/* 8004B240 00048180  39 20 00 01 */	li r9, 1
/* 8004B244 00048184  93 C1 00 38 */	stw r30, 0x38(r1)
/* 8004B248 00048188  39 00 00 C0 */	li r8, 0xc0
/* 8004B24C 0004818C  A9 67 00 04 */	lha r11, 4(r7)
/* 8004B250 00048190  38 C0 00 C1 */	li r6, 0xc1
/* 8004B254 00048194  93 A1 00 34 */	stw r29, 0x34(r1)
/* 8004B258 00048198  38 A0 00 C2 */	li r5, 0xc2
/* 8004B25C 0004819C  A9 47 00 06 */	lha r10, 6(r7)
/* 8004B260 000481A0  38 80 00 C3 */	li r4, 0xc3
/* 8004B264 000481A4  93 81 00 30 */	stw r28, 0x30(r1)
/* 8004B268 000481A8  3B 82 85 B0 */	addi r28, r2, j2dDefaultTevOrderInfoNull@sda21
/* 8004B26C 000481AC  7C 7D 1B 78 */	mr r29, r3
/* 8004B270 000481B0  80 E2 85 C4 */	lwz r7, j2dDefaultTevKColor@sda21(r2)
/* 8004B274 000481B4  B0 03 00 04 */	sth r0, 4(r3)
/* 8004B278 000481B8  B0 03 00 06 */	sth r0, 6(r3)
/* 8004B27C 000481BC  B0 03 00 08 */	sth r0, 8(r3)
/* 8004B280 000481C0  38 00 00 02 */	li r0, 2
/* 8004B284 000481C4  8B C2 85 B0 */	lbz r30, j2dDefaultTevOrderInfoNull@sda21(r2)
/* 8004B288 000481C8  9B C3 00 0A */	stb r30, 0xa(r3)
/* 8004B28C 000481CC  8B DC 00 01 */	lbz r30, 1(r28)
/* 8004B290 000481D0  9B C3 00 0B */	stb r30, 0xb(r3)
/* 8004B294 000481D4  8B DC 00 02 */	lbz r30, 2(r28)
/* 8004B298 000481D8  9B C3 00 0C */	stb r30, 0xc(r3)
/* 8004B29C 000481DC  8B C2 85 B0 */	lbz r30, j2dDefaultTevOrderInfoNull@sda21(r2)
/* 8004B2A0 000481E0  9B C3 00 0E */	stb r30, 0xe(r3)
/* 8004B2A4 000481E4  8B DC 00 01 */	lbz r30, 1(r28)
/* 8004B2A8 000481E8  9B C3 00 0F */	stb r30, 0xf(r3)
/* 8004B2AC 000481EC  8B DC 00 02 */	lbz r30, 2(r28)
/* 8004B2B0 000481F0  9B C3 00 10 */	stb r30, 0x10(r3)
/* 8004B2B4 000481F4  B3 E3 00 12 */	sth r31, 0x12(r3)
/* 8004B2B8 000481F8  B1 83 00 14 */	sth r12, 0x14(r3)
/* 8004B2BC 000481FC  B1 63 00 16 */	sth r11, 0x16(r3)
/* 8004B2C0 00048200  B1 43 00 18 */	sth r10, 0x18(r3)
/* 8004B2C4 00048204  B3 E3 00 1A */	sth r31, 0x1a(r3)
/* 8004B2C8 00048208  B1 83 00 1C */	sth r12, 0x1c(r3)
/* 8004B2CC 0004820C  B1 63 00 1E */	sth r11, 0x1e(r3)
/* 8004B2D0 00048210  B1 43 00 20 */	sth r10, 0x20(r3)
/* 8004B2D4 00048214  B3 E3 00 22 */	sth r31, 0x22(r3)
/* 8004B2D8 00048218  B1 83 00 24 */	sth r12, 0x24(r3)
/* 8004B2DC 0004821C  B1 63 00 26 */	sth r11, 0x26(r3)
/* 8004B2E0 00048220  B1 43 00 28 */	sth r10, 0x28(r3)
/* 8004B2E4 00048224  B3 E3 00 2A */	sth r31, 0x2a(r3)
/* 8004B2E8 00048228  B1 83 00 2C */	sth r12, 0x2c(r3)
/* 8004B2EC 0004822C  B1 63 00 2E */	sth r11, 0x2e(r3)
/* 8004B2F0 00048230  B1 43 00 30 */	sth r10, 0x30(r3)
/* 8004B2F4 00048234  99 23 00 32 */	stb r9, 0x32(r3)
/* 8004B2F8 00048238  99 03 00 33 */	stb r8, 0x33(r3)
/* 8004B2FC 0004823C  98 C3 00 37 */	stb r6, 0x37(r3)
/* 8004B300 00048240  98 A3 00 3B */	stb r5, 0x3b(r3)
/* 8004B304 00048244  98 83 00 3F */	stb r4, 0x3f(r3)
/* 8004B308 00048248  7C 09 03 A6 */	mtctr r0
.L_8004B30C:
/* 8004B30C 0004824C  90 E1 00 08 */	stw r7, 8(r1)
/* 8004B310 00048250  88 C1 00 08 */	lbz r6, 8(r1)
/* 8004B314 00048254  88 A1 00 09 */	lbz r5, 9(r1)
/* 8004B318 00048258  98 DD 00 44 */	stb r6, 0x44(r29)
/* 8004B31C 0004825C  88 81 00 0A */	lbz r4, 0xa(r1)
/* 8004B320 00048260  88 01 00 0B */	lbz r0, 0xb(r1)
/* 8004B324 00048264  98 BD 00 45 */	stb r5, 0x45(r29)
/* 8004B328 00048268  98 9D 00 46 */	stb r4, 0x46(r29)
/* 8004B32C 0004826C  90 E1 00 08 */	stw r7, 8(r1)
/* 8004B330 00048270  98 C1 00 0C */	stb r6, 0xc(r1)
/* 8004B334 00048274  88 C1 00 08 */	lbz r6, 8(r1)
/* 8004B338 00048278  98 1D 00 47 */	stb r0, 0x47(r29)
/* 8004B33C 0004827C  98 A1 00 0D */	stb r5, 0xd(r1)
/* 8004B340 00048280  88 A1 00 09 */	lbz r5, 9(r1)
/* 8004B344 00048284  98 DD 00 48 */	stb r6, 0x48(r29)
/* 8004B348 00048288  98 81 00 0E */	stb r4, 0xe(r1)
/* 8004B34C 0004828C  88 81 00 0A */	lbz r4, 0xa(r1)
/* 8004B350 00048290  98 BD 00 49 */	stb r5, 0x49(r29)
/* 8004B354 00048294  98 01 00 0F */	stb r0, 0xf(r1)
/* 8004B358 00048298  88 01 00 0B */	lbz r0, 0xb(r1)
/* 8004B35C 0004829C  98 9D 00 4A */	stb r4, 0x4a(r29)
/* 8004B360 000482A0  98 1D 00 4B */	stb r0, 0x4b(r29)
/* 8004B364 000482A4  3B BD 00 08 */	addi r29, r29, 8
/* 8004B368 000482A8  98 C1 00 0C */	stb r6, 0xc(r1)
/* 8004B36C 000482AC  98 A1 00 0D */	stb r5, 0xd(r1)
/* 8004B370 000482B0  98 81 00 0E */	stb r4, 0xe(r1)
/* 8004B374 000482B4  98 01 00 0F */	stb r0, 0xf(r1)
/* 8004B378 000482B8  42 00 FF 94 */	bdnz .L_8004B30C
/* 8004B37C 000482BC  38 00 00 FF */	li r0, 0xff
/* 8004B380 000482C0  3C 80 80 48 */	lis r4, j2dDefaultIndTevStageInfo@ha
/* 8004B384 000482C4  98 03 00 54 */	stb r0, 0x54(r3)
/* 8004B388 000482C8  38 A2 85 CC */	addi r5, r2, j2dDefaultTevSwapModeTable@sda21
/* 8004B38C 000482CC  38 84 86 BC */	addi r4, r4, j2dDefaultIndTevStageInfo@l
/* 8004B390 000482D0  98 03 00 55 */	stb r0, 0x55(r3)
/* 8004B394 000482D4  98 03 00 56 */	stb r0, 0x56(r3)
/* 8004B398 000482D8  98 03 00 57 */	stb r0, 0x57(r3)
/* 8004B39C 000482DC  88 05 00 01 */	lbz r0, 1(r5)
/* 8004B3A0 000482E0  88 E5 00 02 */	lbz r7, 2(r5)
/* 8004B3A4 000482E4  88 C2 85 CC */	lbz r6, j2dDefaultTevSwapModeTable@sda21(r2)
/* 8004B3A8 000482E8  54 00 25 36 */	rlwinm r0, r0, 4, 0x14, 0x1b
/* 8004B3AC 000482EC  54 E7 10 3A */	slwi r7, r7, 2
/* 8004B3B0 000482F0  89 05 00 03 */	lbz r8, 3(r5)
/* 8004B3B4 000482F4  7C 00 3A 14 */	add r0, r0, r7
/* 8004B3B8 000482F8  54 C6 30 32 */	slwi r6, r6, 6
/* 8004B3BC 000482FC  7C 00 42 14 */	add r0, r0, r8
/* 8004B3C0 00048300  7C 06 02 14 */	add r0, r6, r0
/* 8004B3C4 00048304  98 03 00 58 */	stb r0, 0x58(r3)
/* 8004B3C8 00048308  88 05 00 01 */	lbz r0, 1(r5)
/* 8004B3CC 0004830C  88 E5 00 02 */	lbz r7, 2(r5)
/* 8004B3D0 00048310  88 C2 85 CC */	lbz r6, j2dDefaultTevSwapModeTable@sda21(r2)
/* 8004B3D4 00048314  54 00 25 36 */	rlwinm r0, r0, 4, 0x14, 0x1b
/* 8004B3D8 00048318  54 E7 10 3A */	slwi r7, r7, 2
/* 8004B3DC 0004831C  89 05 00 03 */	lbz r8, 3(r5)
/* 8004B3E0 00048320  7C 00 3A 14 */	add r0, r0, r7
/* 8004B3E4 00048324  54 C6 30 32 */	slwi r6, r6, 6
/* 8004B3E8 00048328  7C 00 42 14 */	add r0, r0, r8
/* 8004B3EC 0004832C  7C 06 02 14 */	add r0, r6, r0
/* 8004B3F0 00048330  98 03 00 59 */	stb r0, 0x59(r3)
/* 8004B3F4 00048334  88 05 00 01 */	lbz r0, 1(r5)
/* 8004B3F8 00048338  88 E5 00 02 */	lbz r7, 2(r5)
/* 8004B3FC 0004833C  88 C2 85 CC */	lbz r6, j2dDefaultTevSwapModeTable@sda21(r2)
/* 8004B400 00048340  54 00 25 36 */	rlwinm r0, r0, 4, 0x14, 0x1b
/* 8004B404 00048344  54 E7 10 3A */	slwi r7, r7, 2
/* 8004B408 00048348  89 05 00 03 */	lbz r8, 3(r5)
/* 8004B40C 0004834C  7C 00 3A 14 */	add r0, r0, r7
/* 8004B410 00048350  54 C6 30 32 */	slwi r6, r6, 6
/* 8004B414 00048354  7C 00 42 14 */	add r0, r0, r8
/* 8004B418 00048358  7C 06 02 14 */	add r0, r6, r0
/* 8004B41C 0004835C  98 03 00 5A */	stb r0, 0x5a(r3)
/* 8004B420 00048360  88 E5 00 02 */	lbz r7, 2(r5)
/* 8004B424 00048364  88 05 00 01 */	lbz r0, 1(r5)
/* 8004B428 00048368  88 C2 85 CC */	lbz r6, j2dDefaultTevSwapModeTable@sda21(r2)
/* 8004B42C 0004836C  54 E7 10 3A */	slwi r7, r7, 2
/* 8004B430 00048370  54 00 20 36 */	slwi r0, r0, 4
/* 8004B434 00048374  89 05 00 03 */	lbz r8, 3(r5)
/* 8004B438 00048378  7C 00 3A 14 */	add r0, r0, r7
/* 8004B43C 0004837C  54 C5 30 32 */	slwi r5, r6, 6
/* 8004B440 00048380  7C 00 42 14 */	add r0, r0, r8
/* 8004B444 00048384  7C 05 02 14 */	add r0, r5, r0
/* 8004B448 00048388  98 03 00 5B */	stb r0, 0x5b(r3)
/* 8004B44C 0004838C  80 A4 00 04 */	lwz r5, 4(r4)
/* 8004B450 00048390  80 04 00 08 */	lwz r0, 8(r4)
/* 8004B454 00048394  90 A1 00 20 */	stw r5, 0x20(r1)
/* 8004B458 00048398  80 A4 00 00 */	lwz r5, 0(r4)
/* 8004B45C 0004839C  90 01 00 24 */	stw r0, 0x24(r1)
/* 8004B460 000483A0  88 01 00 23 */	lbz r0, 0x23(r1)
/* 8004B464 000483A4  90 A1 00 1C */	stw r5, 0x1c(r1)
/* 8004B468 000483A8  88 A1 00 24 */	lbz r5, 0x24(r1)
/* 8004B46C 000483AC  54 00 A8 14 */	slwi r0, r0, 0x15
/* 8004B470 000483B0  88 C1 00 22 */	lbz r6, 0x22(r1)
/* 8004B474 000483B4  54 A5 B0 12 */	slwi r5, r5, 0x16
/* 8004B478 000483B8  88 E1 00 1F */	lbz r7, 0x1f(r1)
/* 8004B47C 000483BC  7C A0 03 78 */	or r0, r5, r0
/* 8004B480 000483C0  54 C6 A0 16 */	slwi r6, r6, 0x14
/* 8004B484 000483C4  89 01 00 21 */	lbz r8, 0x21(r1)
/* 8004B488 000483C8  7C C0 03 78 */	or r0, r6, r0
/* 8004B48C 000483CC  54 E5 80 1E */	slwi r5, r7, 0x10
/* 8004B490 000483D0  89 21 00 20 */	lbz r9, 0x20(r1)
/* 8004B494 000483D4  89 41 00 1E */	lbz r10, 0x1e(r1)
/* 8004B498 000483D8  7C A0 03 78 */	or r0, r5, r0
/* 8004B49C 000483DC  55 06 58 28 */	slwi r6, r8, 0xb
/* 8004B4A0 000483E0  89 61 00 1D */	lbz r11, 0x1d(r1)
/* 8004B4A4 000483E4  7C C0 03 78 */	or r0, r6, r0
/* 8004B4A8 000483E8  55 27 40 2E */	slwi r7, r9, 8
/* 8004B4AC 000483EC  7C E0 03 78 */	or r0, r7, r0
/* 8004B4B0 000483F0  55 45 20 36 */	slwi r5, r10, 4
/* 8004B4B4 000483F4  55 66 10 3A */	slwi r6, r11, 2
/* 8004B4B8 000483F8  88 E1 00 1C */	lbz r7, 0x1c(r1)
/* 8004B4BC 000483FC  7C A0 03 78 */	or r0, r5, r0
/* 8004B4C0 00048400  7C C0 03 78 */	or r0, r6, r0
/* 8004B4C4 00048404  7C E0 03 78 */	or r0, r7, r0
/* 8004B4C8 00048408  90 03 00 5C */	stw r0, 0x5c(r3)
/* 8004B4CC 0004840C  80 C4 00 00 */	lwz r6, 0(r4)
/* 8004B4D0 00048410  80 A4 00 04 */	lwz r5, 4(r4)
/* 8004B4D4 00048414  80 04 00 08 */	lwz r0, 8(r4)
/* 8004B4D8 00048418  90 C1 00 10 */	stw r6, 0x10(r1)
/* 8004B4DC 0004841C  90 A1 00 14 */	stw r5, 0x14(r1)
/* 8004B4E0 00048420  90 01 00 18 */	stw r0, 0x18(r1)
/* 8004B4E4 00048424  88 A1 00 18 */	lbz r5, 0x18(r1)
/* 8004B4E8 00048428  38 00 00 00 */	li r0, 0
/* 8004B4EC 0004842C  88 81 00 17 */	lbz r4, 0x17(r1)
/* 8004B4F0 00048430  88 C1 00 16 */	lbz r6, 0x16(r1)
/* 8004B4F4 00048434  54 A5 B0 12 */	slwi r5, r5, 0x16
/* 8004B4F8 00048438  54 84 A8 14 */	slwi r4, r4, 0x15
/* 8004B4FC 0004843C  88 E1 00 13 */	lbz r7, 0x13(r1)
/* 8004B500 00048440  89 01 00 15 */	lbz r8, 0x15(r1)
/* 8004B504 00048444  54 C6 A0 16 */	slwi r6, r6, 0x14
/* 8004B508 00048448  7C A4 23 78 */	or r4, r5, r4
/* 8004B50C 0004844C  89 21 00 14 */	lbz r9, 0x14(r1)
/* 8004B510 00048450  89 41 00 12 */	lbz r10, 0x12(r1)
/* 8004B514 00048454  54 E5 80 1E */	slwi r5, r7, 0x10
/* 8004B518 00048458  7C C4 23 78 */	or r4, r6, r4
/* 8004B51C 0004845C  89 61 00 11 */	lbz r11, 0x11(r1)
/* 8004B520 00048460  55 06 58 28 */	slwi r6, r8, 0xb
/* 8004B524 00048464  55 27 40 2E */	slwi r7, r9, 8
/* 8004B528 00048468  7C A4 23 78 */	or r4, r5, r4
/* 8004B52C 0004846C  55 45 20 36 */	slwi r5, r10, 4
/* 8004B530 00048470  7C C4 23 78 */	or r4, r6, r4
/* 8004B534 00048474  55 66 10 3A */	slwi r6, r11, 2
/* 8004B538 00048478  7C E4 23 78 */	or r4, r7, r4
/* 8004B53C 0004847C  88 E1 00 10 */	lbz r7, 0x10(r1)
/* 8004B540 00048480  7C A4 23 78 */	or r4, r5, r4
/* 8004B544 00048484  7C C4 23 78 */	or r4, r6, r4
/* 8004B548 00048488  7C E4 23 78 */	or r4, r7, r4
/* 8004B54C 0004848C  90 83 00 60 */	stw r4, 0x60(r3)
/* 8004B550 00048490  90 03 00 6C */	stw r0, 0x6c(r3)
/* 8004B554 00048494  90 03 00 70 */	stw r0, 0x70(r3)
/* 8004B558 00048498  90 03 00 74 */	stw r0, 0x74(r3)
/* 8004B55C 0004849C  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 8004B560 000484A0  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 8004B564 000484A4  83 A1 00 34 */	lwz r29, 0x34(r1)
/* 8004B568 000484A8  83 81 00 30 */	lwz r28, 0x30(r1)
/* 8004B56C 000484AC  38 21 00 40 */	addi r1, r1, 0x40
/* 8004B570 000484B0  4E 80 00 20 */	blr 
.endfn initialize__12J2DTevBlock2Fv

.fn prepareTexture__12J2DTevBlock2FUc, global
/* 8004B574 000484B4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8004B578 000484B8  7C 08 02 A6 */	mflr r0
/* 8004B57C 000484BC  90 01 00 24 */	stw r0, 0x24(r1)
/* 8004B580 000484C0  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8004B584 000484C4  54 9F 06 3E */	clrlwi r31, r4, 0x18
/* 8004B588 000484C8  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8004B58C 000484CC  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8004B590 000484D0  3B A0 00 00 */	li r29, 0
/* 8004B594 000484D4  93 81 00 10 */	stw r28, 0x10(r1)
/* 8004B598 000484D8  7C 7C 1B 78 */	mr r28, r3
/* 8004B59C 000484DC  48 00 00 88 */	b .L_8004B624
.L_8004B5A0:
/* 8004B5A0 000484E0  57 A0 06 3E */	clrlwi r0, r29, 0x18
/* 8004B5A4 000484E4  28 00 00 02 */	cmplwi r0, 2
/* 8004B5A8 000484E8  41 80 00 0C */	blt .L_8004B5B4
/* 8004B5AC 000484EC  38 60 00 00 */	li r3, 0
/* 8004B5B0 000484F0  48 00 00 84 */	b .L_8004B634
.L_8004B5B4:
/* 8004B5B4 000484F4  57 A3 15 BA */	rlwinm r3, r29, 2, 0x16, 0x1d
/* 8004B5B8 000484F8  3B C3 00 64 */	addi r30, r3, 0x64
/* 8004B5BC 000484FC  7C 1C F0 2E */	lwzx r0, r28, r30
/* 8004B5C0 00048500  28 00 00 00 */	cmplwi r0, 0
/* 8004B5C4 00048504  40 82 00 5C */	bne .L_8004B620
/* 8004B5C8 00048508  38 60 00 40 */	li r3, 0x40
/* 8004B5CC 0004850C  4B FD 88 D9 */	bl __nw__FUl
/* 8004B5D0 00048510  28 03 00 00 */	cmplwi r3, 0
/* 8004B5D4 00048514  41 82 00 1C */	beq .L_8004B5F0
/* 8004B5D8 00048518  88 83 00 3B */	lbz r4, 0x3b(r3)
/* 8004B5DC 0004851C  38 00 00 00 */	li r0, 0
/* 8004B5E0 00048520  54 84 07 BC */	rlwinm r4, r4, 0, 0x1e, 0x1e
/* 8004B5E4 00048524  98 83 00 3B */	stb r4, 0x3b(r3)
/* 8004B5E8 00048528  90 03 00 28 */	stw r0, 0x28(r3)
/* 8004B5EC 0004852C  90 03 00 20 */	stw r0, 0x20(r3)
.L_8004B5F0:
/* 8004B5F0 00048530  7C 7C F1 2E */	stwx r3, r28, r30
/* 8004B5F4 00048534  7C 1C F0 2E */	lwzx r0, r28, r30
/* 8004B5F8 00048538  28 00 00 00 */	cmplwi r0, 0
/* 8004B5FC 0004853C  40 82 00 0C */	bne .L_8004B608
/* 8004B600 00048540  38 60 00 00 */	li r3, 0
/* 8004B604 00048544  48 00 00 30 */	b .L_8004B634
.L_8004B608:
/* 8004B608 00048548  57 A0 06 3E */	clrlwi r0, r29, 0x18
/* 8004B60C 0004854C  38 60 00 01 */	li r3, 1
/* 8004B610 00048550  88 9C 00 78 */	lbz r4, 0x78(r28)
/* 8004B614 00048554  7C 60 00 30 */	slw r0, r3, r0
/* 8004B618 00048558  7C 80 03 78 */	or r0, r4, r0
/* 8004B61C 0004855C  98 1C 00 78 */	stb r0, 0x78(r28)
.L_8004B620:
/* 8004B620 00048560  3B BD 00 01 */	addi r29, r29, 1
.L_8004B624:
/* 8004B624 00048564  57 A0 06 3E */	clrlwi r0, r29, 0x18
/* 8004B628 00048568  7C 00 F8 40 */	cmplw r0, r31
/* 8004B62C 0004856C  41 80 FF 74 */	blt .L_8004B5A0
/* 8004B630 00048570  38 60 00 01 */	li r3, 1
.L_8004B634:
/* 8004B634 00048574  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8004B638 00048578  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8004B63C 0004857C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8004B640 00048580  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8004B644 00048584  83 81 00 10 */	lwz r28, 0x10(r1)
/* 8004B648 00048588  7C 08 03 A6 */	mtlr r0
/* 8004B64C 0004858C  38 21 00 20 */	addi r1, r1, 0x20
/* 8004B650 00048590  4E 80 00 20 */	blr 
.endfn prepareTexture__12J2DTevBlock2FUc

.fn insertTexture__12J2DTevBlock2FUlPC7ResTIMGP10JUTPalette, global
/* 8004B654 00048594  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8004B658 00048598  7C 08 02 A6 */	mflr r0
/* 8004B65C 0004859C  90 01 00 34 */	stw r0, 0x34(r1)
/* 8004B660 000485A0  BF 21 00 14 */	stmw r25, 0x14(r1)
/* 8004B664 000485A4  7C 9C 23 78 */	mr r28, r4
/* 8004B668 000485A8  28 1C 00 02 */	cmplwi r28, 2
/* 8004B66C 000485AC  7C 7B 1B 78 */	mr r27, r3
/* 8004B670 000485B0  7C BD 2B 78 */	mr r29, r5
/* 8004B674 000485B4  7C DE 33 78 */	mr r30, r6
/* 8004B678 000485B8  40 80 00 0C */	bge .L_8004B684
/* 8004B67C 000485BC  28 1D 00 00 */	cmplwi r29, 0
/* 8004B680 000485C0  40 82 00 0C */	bne .L_8004B68C
.L_8004B684:
/* 8004B684 000485C4  38 60 00 00 */	li r3, 0
/* 8004B688 000485C8  48 00 02 84 */	b .L_8004B90C
.L_8004B68C:
/* 8004B68C 000485CC  3B E0 00 00 */	li r31, 0
/* 8004B690 000485D0  48 00 00 28 */	b .L_8004B6B8
.L_8004B694:
/* 8004B694 000485D4  57 E3 15 BA */	rlwinm r3, r31, 2, 0x16, 0x1d
/* 8004B698 000485D8  38 03 00 64 */	addi r0, r3, 0x64
/* 8004B69C 000485DC  7C 7B 00 2E */	lwzx r3, r27, r0
/* 8004B6A0 000485E0  28 03 00 00 */	cmplwi r3, 0
/* 8004B6A4 000485E4  41 82 00 20 */	beq .L_8004B6C4
/* 8004B6A8 000485E8  80 03 00 20 */	lwz r0, 0x20(r3)
/* 8004B6AC 000485EC  28 00 00 00 */	cmplwi r0, 0
/* 8004B6B0 000485F0  41 82 00 14 */	beq .L_8004B6C4
/* 8004B6B4 000485F4  3B FF 00 01 */	addi r31, r31, 1
.L_8004B6B8:
/* 8004B6B8 000485F8  57 E0 06 3E */	clrlwi r0, r31, 0x18
/* 8004B6BC 000485FC  28 00 00 02 */	cmplwi r0, 2
/* 8004B6C0 00048600  41 80 FF D4 */	blt .L_8004B694
.L_8004B6C4:
/* 8004B6C4 00048604  57 E0 06 3E */	clrlwi r0, r31, 0x18
/* 8004B6C8 00048608  7C 00 E0 40 */	cmplw r0, r28
/* 8004B6CC 0004860C  40 80 00 0C */	bge .L_8004B6D8
/* 8004B6D0 00048610  38 60 00 00 */	li r3, 0
/* 8004B6D4 00048614  48 00 02 38 */	b .L_8004B90C
.L_8004B6D8:
/* 8004B6D8 00048618  28 00 00 02 */	cmplwi r0, 2
/* 8004B6DC 0004861C  40 82 00 0C */	bne .L_8004B6E8
/* 8004B6E0 00048620  38 60 00 00 */	li r3, 0
/* 8004B6E4 00048624  48 00 02 28 */	b .L_8004B90C
.L_8004B6E8:
/* 8004B6E8 00048628  88 1D 00 08 */	lbz r0, 8(r29)
/* 8004B6EC 0004862C  3B 20 00 00 */	li r25, 0
/* 8004B6F0 00048630  28 00 00 00 */	cmplwi r0, 0
/* 8004B6F4 00048634  41 82 00 48 */	beq .L_8004B73C
/* 8004B6F8 00048638  28 1E 00 00 */	cmplwi r30, 0
/* 8004B6FC 0004863C  40 82 00 40 */	bne .L_8004B73C
/* 8004B700 00048640  80 9B 00 64 */	lwz r4, 0x64(r27)
/* 8004B704 00048644  28 04 00 00 */	cmplwi r4, 0
/* 8004B708 00048648  41 82 00 34 */	beq .L_8004B73C
/* 8004B70C 0004864C  80 64 00 20 */	lwz r3, 0x20(r4)
/* 8004B710 00048650  28 03 00 00 */	cmplwi r3, 0
/* 8004B714 00048654  41 82 00 28 */	beq .L_8004B73C
/* 8004B718 00048658  88 03 00 08 */	lbz r0, 8(r3)
/* 8004B71C 0004865C  28 00 00 00 */	cmplwi r0, 0
/* 8004B720 00048660  41 82 00 1C */	beq .L_8004B73C
/* 8004B724 00048664  88 04 00 3A */	lbz r0, 0x3a(r4)
/* 8004B728 00048668  2C 00 00 00 */	cmpwi r0, 0
/* 8004B72C 0004866C  41 82 00 0C */	beq .L_8004B738
/* 8004B730 00048670  2C 00 00 10 */	cmpwi r0, 0x10
/* 8004B734 00048674  40 82 00 08 */	bne .L_8004B73C
.L_8004B738:
/* 8004B738 00048678  3B 20 00 01 */	li r25, 1
.L_8004B73C:
/* 8004B73C 0004867C  57 E0 15 BA */	rlwinm r0, r31, 2, 0x16, 0x1d
/* 8004B740 00048680  7C 7B 02 14 */	add r3, r27, r0
/* 8004B744 00048684  83 43 00 64 */	lwz r26, 0x64(r3)
/* 8004B748 00048688  28 1A 00 00 */	cmplwi r26, 0
/* 8004B74C 0004868C  40 82 00 BC */	bne .L_8004B808
/* 8004B750 00048690  38 60 00 40 */	li r3, 0x40
/* 8004B754 00048694  4B FD 87 51 */	bl __nw__FUl
/* 8004B758 00048698  7C 7F 1B 79 */	or. r31, r3, r3
/* 8004B75C 0004869C  41 82 00 24 */	beq .L_8004B780
/* 8004B760 000486A0  38 00 00 00 */	li r0, 0
/* 8004B764 000486A4  7F A4 EB 78 */	mr r4, r29
/* 8004B768 000486A8  90 1F 00 28 */	stw r0, 0x28(r31)
/* 8004B76C 000486AC  7F 25 CB 78 */	mr r5, r25
/* 8004B770 000486B0  4B FE 79 15 */	bl storeTIMG__10JUTTextureFPC7ResTIMGUc
/* 8004B774 000486B4  88 1F 00 3B */	lbz r0, 0x3b(r31)
/* 8004B778 000486B8  54 00 07 BC */	rlwinm r0, r0, 0, 0x1e, 0x1e
/* 8004B77C 000486BC  98 1F 00 3B */	stb r0, 0x3b(r31)
.L_8004B780:
/* 8004B780 000486C0  28 1F 00 00 */	cmplwi r31, 0
/* 8004B784 000486C4  40 82 00 0C */	bne .L_8004B790
/* 8004B788 000486C8  38 60 00 00 */	li r3, 0
/* 8004B78C 000486CC  48 00 01 80 */	b .L_8004B90C
.L_8004B790:
/* 8004B790 000486D0  28 1E 00 00 */	cmplwi r30, 0
/* 8004B794 000486D4  41 82 00 14 */	beq .L_8004B7A8
/* 8004B798 000486D8  7F E3 FB 78 */	mr r3, r31
/* 8004B79C 000486DC  7F A4 EB 78 */	mr r4, r29
/* 8004B7A0 000486E0  7F C5 F3 78 */	mr r5, r30
/* 8004B7A4 000486E4  4B FE 7A 8D */	bl storeTIMG__10JUTTextureFPC7ResTIMGP10JUTPalette
.L_8004B7A8:
/* 8004B7A8 000486E8  28 1C 00 00 */	cmplwi r28, 0
/* 8004B7AC 000486EC  40 82 00 1C */	bne .L_8004B7C8
/* 8004B7B0 000486F0  80 1B 00 64 */	lwz r0, 0x64(r27)
/* 8004B7B4 000486F4  90 1B 00 68 */	stw r0, 0x68(r27)
/* 8004B7B8 000486F8  80 1B 00 6C */	lwz r0, 0x6c(r27)
/* 8004B7BC 000486FC  90 1B 00 70 */	stw r0, 0x70(r27)
/* 8004B7C0 00048700  A0 1B 00 04 */	lhz r0, 4(r27)
/* 8004B7C4 00048704  B0 1B 00 06 */	sth r0, 6(r27)
.L_8004B7C8:
/* 8004B7C8 00048708  57 80 10 3A */	slwi r0, r28, 2
/* 8004B7CC 0004870C  7F 63 DB 78 */	mr r3, r27
/* 8004B7D0 00048710  7C BB 02 14 */	add r5, r27, r0
/* 8004B7D4 00048714  57 84 06 3E */	clrlwi r4, r28, 0x18
/* 8004B7D8 00048718  93 E5 00 64 */	stw r31, 0x64(r5)
/* 8004B7DC 0004871C  38 A0 00 01 */	li r5, 1
/* 8004B7E0 00048720  81 9B 00 00 */	lwz r12, 0(r27)
/* 8004B7E4 00048724  81 8C 00 AC */	lwz r12, 0xac(r12)
/* 8004B7E8 00048728  7D 89 03 A6 */	mtctr r12
/* 8004B7EC 0004872C  4E 80 04 21 */	bctrl 
/* 8004B7F0 00048730  38 00 00 01 */	li r0, 1
/* 8004B7F4 00048734  88 7B 00 78 */	lbz r3, 0x78(r27)
/* 8004B7F8 00048738  7C 00 E0 30 */	slw r0, r0, r28
/* 8004B7FC 0004873C  7C 60 03 78 */	or r0, r3, r0
/* 8004B800 00048740  98 1B 00 78 */	stb r0, 0x78(r27)
/* 8004B804 00048744  48 00 00 E0 */	b .L_8004B8E4
.L_8004B808:
/* 8004B808 00048748  28 1E 00 00 */	cmplwi r30, 0
/* 8004B80C 0004874C  40 82 00 18 */	bne .L_8004B824
/* 8004B810 00048750  7F 43 D3 78 */	mr r3, r26
/* 8004B814 00048754  7F A4 EB 78 */	mr r4, r29
/* 8004B818 00048758  7F 25 CB 78 */	mr r5, r25
/* 8004B81C 0004875C  4B FE 78 69 */	bl storeTIMG__10JUTTextureFPC7ResTIMGUc
/* 8004B820 00048760  48 00 00 14 */	b .L_8004B834
.L_8004B824:
/* 8004B824 00048764  7F 43 D3 78 */	mr r3, r26
/* 8004B828 00048768  7F A4 EB 78 */	mr r4, r29
/* 8004B82C 0004876C  7F C5 F3 78 */	mr r5, r30
/* 8004B830 00048770  4B FE 7A 01 */	bl storeTIMG__10JUTTextureFPC7ResTIMGP10JUTPalette
.L_8004B834:
/* 8004B834 00048774  88 1B 00 78 */	lbz r0, 0x78(r27)
/* 8004B838 00048778  28 1C 00 00 */	cmplwi r28, 0
/* 8004B83C 0004877C  54 03 07 FE */	clrlwi r3, r0, 0x1f
/* 8004B840 00048780  54 00 FF FE */	rlwinm r0, r0, 0x1f, 0x1f, 0x1f
/* 8004B844 00048784  98 61 00 08 */	stb r3, 8(r1)
/* 8004B848 00048788  98 01 00 09 */	stb r0, 9(r1)
/* 8004B84C 0004878C  40 82 00 2C */	bne .L_8004B878
/* 8004B850 00048790  57 E0 06 3E */	clrlwi r0, r31, 0x18
/* 8004B854 00048794  28 00 00 01 */	cmplwi r0, 1
/* 8004B858 00048798  40 82 00 20 */	bne .L_8004B878
/* 8004B85C 0004879C  80 1B 00 64 */	lwz r0, 0x64(r27)
/* 8004B860 000487A0  98 61 00 09 */	stb r3, 9(r1)
/* 8004B864 000487A4  90 1B 00 68 */	stw r0, 0x68(r27)
/* 8004B868 000487A8  80 1B 00 6C */	lwz r0, 0x6c(r27)
/* 8004B86C 000487AC  90 1B 00 70 */	stw r0, 0x70(r27)
/* 8004B870 000487B0  A0 1B 00 04 */	lhz r0, 4(r27)
/* 8004B874 000487B4  B0 1B 00 06 */	sth r0, 6(r27)
.L_8004B878:
/* 8004B878 000487B8  57 80 10 3A */	slwi r0, r28, 2
/* 8004B87C 000487BC  38 A1 00 08 */	addi r5, r1, 8
/* 8004B880 000487C0  7C 7B 02 14 */	add r3, r27, r0
/* 8004B884 000487C4  38 E0 00 00 */	li r7, 0
/* 8004B888 000487C8  93 43 00 64 */	stw r26, 0x64(r3)
/* 8004B88C 000487CC  38 60 00 01 */	li r3, 1
/* 8004B890 000487D0  88 1B 00 78 */	lbz r0, 0x78(r27)
/* 8004B894 000487D4  54 00 06 30 */	rlwinm r0, r0, 0, 0x18, 0x18
/* 8004B898 000487D8  98 1B 00 78 */	stb r0, 0x78(r27)
/* 8004B89C 000487DC  48 00 00 28 */	b .L_8004B8C4
.L_8004B8A0:
/* 8004B8A0 000487E0  54 E6 06 3E */	clrlwi r6, r7, 0x18
/* 8004B8A4 000487E4  7C 05 30 AE */	lbzx r0, r5, r6
/* 8004B8A8 000487E8  28 00 00 00 */	cmplwi r0, 0
/* 8004B8AC 000487EC  41 82 00 14 */	beq .L_8004B8C0
/* 8004B8B0 000487F0  88 9B 00 78 */	lbz r4, 0x78(r27)
/* 8004B8B4 000487F4  7C 60 30 30 */	slw r0, r3, r6
/* 8004B8B8 000487F8  7C 80 03 78 */	or r0, r4, r0
/* 8004B8BC 000487FC  98 1B 00 78 */	stb r0, 0x78(r27)
.L_8004B8C0:
/* 8004B8C0 00048800  38 E7 00 01 */	addi r7, r7, 1
.L_8004B8C4:
/* 8004B8C4 00048804  54 E0 06 3E */	clrlwi r0, r7, 0x18
/* 8004B8C8 00048808  28 00 00 02 */	cmplwi r0, 2
/* 8004B8CC 0004880C  41 80 FF D4 */	blt .L_8004B8A0
/* 8004B8D0 00048810  38 00 00 01 */	li r0, 1
/* 8004B8D4 00048814  88 7B 00 78 */	lbz r3, 0x78(r27)
/* 8004B8D8 00048818  7C 00 E0 30 */	slw r0, r0, r28
/* 8004B8DC 0004881C  7C 60 03 78 */	or r0, r3, r0
/* 8004B8E0 00048820  98 1B 00 78 */	stb r0, 0x78(r27)
.L_8004B8E4:
/* 8004B8E4 00048824  57 83 10 3A */	slwi r3, r28, 2
/* 8004B8E8 00048828  57 80 08 3C */	slwi r0, r28, 1
/* 8004B8EC 0004882C  7C 9B 1A 14 */	add r4, r27, r3
/* 8004B8F0 00048830  38 A0 00 00 */	li r5, 0
/* 8004B8F4 00048834  3C 60 00 01 */	lis r3, 0x0000FFFF@ha
/* 8004B8F8 00048838  90 A4 00 6C */	stw r5, 0x6c(r4)
/* 8004B8FC 0004883C  38 83 FF FF */	addi r4, r3, 0x0000FFFF@l
/* 8004B900 00048840  7C 7B 02 14 */	add r3, r27, r0
/* 8004B904 00048844  B0 83 00 04 */	sth r4, 4(r3)
/* 8004B908 00048848  38 60 00 01 */	li r3, 1
.L_8004B90C:
/* 8004B90C 0004884C  BB 21 00 14 */	lmw r25, 0x14(r1)
/* 8004B910 00048850  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8004B914 00048854  7C 08 03 A6 */	mtlr r0
/* 8004B918 00048858  38 21 00 30 */	addi r1, r1, 0x30
/* 8004B91C 0004885C  4E 80 00 20 */	blr 
.endfn insertTexture__12J2DTevBlock2FUlPC7ResTIMGP10JUTPalette

.fn insertTexture__12J2DTevBlock2FUlP10JUTTexture, global
/* 8004B920 00048860  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8004B924 00048864  7C 08 02 A6 */	mflr r0
/* 8004B928 00048868  90 01 00 24 */	stw r0, 0x24(r1)
/* 8004B92C 0004886C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8004B930 00048870  7C BF 2B 78 */	mr r31, r5
/* 8004B934 00048874  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8004B938 00048878  7C 9E 23 78 */	mr r30, r4
/* 8004B93C 0004887C  28 1E 00 02 */	cmplwi r30, 2
/* 8004B940 00048880  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8004B944 00048884  7C 7D 1B 78 */	mr r29, r3
/* 8004B948 00048888  40 80 00 0C */	bge .L_8004B954
/* 8004B94C 0004888C  28 1F 00 00 */	cmplwi r31, 0
/* 8004B950 00048890  40 82 00 0C */	bne .L_8004B95C
.L_8004B954:
/* 8004B954 00048894  38 60 00 00 */	li r3, 0
/* 8004B958 00048898  48 00 01 14 */	b .L_8004BA6C
.L_8004B95C:
/* 8004B95C 0004889C  38 80 00 00 */	li r4, 0
/* 8004B960 000488A0  48 00 00 28 */	b .L_8004B988
.L_8004B964:
/* 8004B964 000488A4  54 83 15 BA */	rlwinm r3, r4, 2, 0x16, 0x1d
/* 8004B968 000488A8  38 03 00 64 */	addi r0, r3, 0x64
/* 8004B96C 000488AC  7C 7D 00 2E */	lwzx r3, r29, r0
/* 8004B970 000488B0  28 03 00 00 */	cmplwi r3, 0
/* 8004B974 000488B4  41 82 00 20 */	beq .L_8004B994
/* 8004B978 000488B8  80 03 00 20 */	lwz r0, 0x20(r3)
/* 8004B97C 000488BC  28 00 00 00 */	cmplwi r0, 0
/* 8004B980 000488C0  41 82 00 14 */	beq .L_8004B994
/* 8004B984 000488C4  38 84 00 01 */	addi r4, r4, 1
.L_8004B988:
/* 8004B988 000488C8  54 80 06 3E */	clrlwi r0, r4, 0x18
/* 8004B98C 000488CC  28 00 00 02 */	cmplwi r0, 2
/* 8004B990 000488D0  41 80 FF D4 */	blt .L_8004B964
.L_8004B994:
/* 8004B994 000488D4  54 80 06 3E */	clrlwi r0, r4, 0x18
/* 8004B998 000488D8  7C 00 F0 40 */	cmplw r0, r30
/* 8004B99C 000488DC  40 80 00 0C */	bge .L_8004B9A8
/* 8004B9A0 000488E0  38 60 00 00 */	li r3, 0
/* 8004B9A4 000488E4  48 00 00 C8 */	b .L_8004BA6C
.L_8004B9A8:
/* 8004B9A8 000488E8  28 00 00 02 */	cmplwi r0, 2
/* 8004B9AC 000488EC  40 82 00 0C */	bne .L_8004B9B8
/* 8004B9B0 000488F0  38 60 00 00 */	li r3, 0
/* 8004B9B4 000488F4  48 00 00 B8 */	b .L_8004BA6C
.L_8004B9B8:
/* 8004B9B8 000488F8  80 7D 00 68 */	lwz r3, 0x68(r29)
/* 8004B9BC 000488FC  28 03 00 00 */	cmplwi r3, 0
/* 8004B9C0 00048900  41 82 00 30 */	beq .L_8004B9F0
/* 8004B9C4 00048904  80 03 00 20 */	lwz r0, 0x20(r3)
/* 8004B9C8 00048908  28 00 00 00 */	cmplwi r0, 0
/* 8004B9CC 0004890C  40 82 00 24 */	bne .L_8004B9F0
/* 8004B9D0 00048910  88 1D 00 78 */	lbz r0, 0x78(r29)
/* 8004B9D4 00048914  54 00 07 BD */	rlwinm. r0, r0, 0, 0x1e, 0x1e
/* 8004B9D8 00048918  41 82 00 0C */	beq .L_8004B9E4
/* 8004B9DC 0004891C  38 80 00 01 */	li r4, 1
/* 8004B9E0 00048920  4B FE 76 31 */	bl __dt__10JUTTextureFv
.L_8004B9E4:
/* 8004B9E4 00048924  88 1D 00 78 */	lbz r0, 0x78(r29)
/* 8004B9E8 00048928  54 00 07 FA */	rlwinm r0, r0, 0, 0x1f, 0x1d
/* 8004B9EC 0004892C  98 1D 00 78 */	stb r0, 0x78(r29)
.L_8004B9F0:
/* 8004B9F0 00048930  28 1E 00 00 */	cmplwi r30, 0
/* 8004B9F4 00048934  40 82 00 1C */	bne .L_8004BA10
/* 8004B9F8 00048938  80 1D 00 64 */	lwz r0, 0x64(r29)
/* 8004B9FC 0004893C  90 1D 00 68 */	stw r0, 0x68(r29)
/* 8004BA00 00048940  80 1D 00 6C */	lwz r0, 0x6c(r29)
/* 8004BA04 00048944  90 1D 00 70 */	stw r0, 0x70(r29)
/* 8004BA08 00048948  A0 1D 00 04 */	lhz r0, 4(r29)
/* 8004BA0C 0004894C  B0 1D 00 06 */	sth r0, 6(r29)
.L_8004BA10:
/* 8004BA10 00048950  57 C3 10 3A */	slwi r3, r30, 2
/* 8004BA14 00048954  57 C0 08 3C */	slwi r0, r30, 1
/* 8004BA18 00048958  7C BD 1A 14 */	add r5, r29, r3
/* 8004BA1C 0004895C  3C 60 00 01 */	lis r3, 0x0000FFFF@ha
/* 8004BA20 00048960  93 E5 00 64 */	stw r31, 0x64(r5)
/* 8004BA24 00048964  38 80 00 00 */	li r4, 0
/* 8004BA28 00048968  38 E3 FF FF */	addi r7, r3, 0x0000FFFF@l
/* 8004BA2C 0004896C  7C DD 02 14 */	add r6, r29, r0
/* 8004BA30 00048970  90 85 00 6C */	stw r4, 0x6c(r5)
/* 8004BA34 00048974  7F A3 EB 78 */	mr r3, r29
/* 8004BA38 00048978  57 C4 06 3E */	clrlwi r4, r30, 0x18
/* 8004BA3C 0004897C  38 A0 00 01 */	li r5, 1
/* 8004BA40 00048980  B0 E6 00 04 */	sth r7, 4(r6)
/* 8004BA44 00048984  81 9D 00 00 */	lwz r12, 0(r29)
/* 8004BA48 00048988  81 8C 00 AC */	lwz r12, 0xac(r12)
/* 8004BA4C 0004898C  7D 89 03 A6 */	mtctr r12
/* 8004BA50 00048990  4E 80 04 21 */	bctrl 
/* 8004BA54 00048994  38 00 00 01 */	li r0, 1
/* 8004BA58 00048998  88 9D 00 78 */	lbz r4, 0x78(r29)
/* 8004BA5C 0004899C  7C 00 F0 30 */	slw r0, r0, r30
/* 8004BA60 000489A0  38 60 00 01 */	li r3, 1
/* 8004BA64 000489A4  7C 80 00 78 */	andc r0, r4, r0
/* 8004BA68 000489A8  98 1D 00 78 */	stb r0, 0x78(r29)
.L_8004BA6C:
/* 8004BA6C 000489AC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8004BA70 000489B0  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8004BA74 000489B4  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8004BA78 000489B8  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8004BA7C 000489BC  7C 08 03 A6 */	mtlr r0
/* 8004BA80 000489C0  38 21 00 20 */	addi r1, r1, 0x20
/* 8004BA84 000489C4  4E 80 00 20 */	blr 
.endfn insertTexture__12J2DTevBlock2FUlP10JUTTexture

.fn setTexture__12J2DTevBlock2FUlPC7ResTIMG, global
/* 8004BA88 000489C8  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8004BA8C 000489CC  7C 08 02 A6 */	mflr r0
/* 8004BA90 000489D0  90 01 00 34 */	stw r0, 0x34(r1)
/* 8004BA94 000489D4  BF 21 00 14 */	stmw r25, 0x14(r1)
/* 8004BA98 000489D8  7C 9A 23 78 */	mr r26, r4
/* 8004BA9C 000489DC  28 1A 00 02 */	cmplwi r26, 2
/* 8004BAA0 000489E0  7C 79 1B 78 */	mr r25, r3
/* 8004BAA4 000489E4  7C BB 2B 78 */	mr r27, r5
/* 8004BAA8 000489E8  41 80 00 0C */	blt .L_8004BAB4
/* 8004BAAC 000489EC  38 60 00 00 */	li r3, 0
/* 8004BAB0 000489F0  48 00 01 E0 */	b .L_8004BC90
.L_8004BAB4:
/* 8004BAB4 000489F4  28 1B 00 00 */	cmplwi r27, 0
/* 8004BAB8 000489F8  3B 80 00 00 */	li r28, 0
/* 8004BABC 000489FC  41 82 00 64 */	beq .L_8004BB20
/* 8004BAC0 00048A00  88 1B 00 08 */	lbz r0, 8(r27)
/* 8004BAC4 00048A04  28 00 00 00 */	cmplwi r0, 0
/* 8004BAC8 00048A08  41 82 00 58 */	beq .L_8004BB20
/* 8004BACC 00048A0C  7F 40 00 34 */	cntlzw r0, r26
/* 8004BAD0 00048A10  54 00 ED BA */	rlwinm r0, r0, 0x1d, 0x16, 0x1d
/* 8004BAD4 00048A14  7C 79 02 14 */	add r3, r25, r0
/* 8004BAD8 00048A18  80 83 00 64 */	lwz r4, 0x64(r3)
/* 8004BADC 00048A1C  28 04 00 00 */	cmplwi r4, 0
/* 8004BAE0 00048A20  41 82 00 40 */	beq .L_8004BB20
/* 8004BAE4 00048A24  80 64 00 20 */	lwz r3, 0x20(r4)
/* 8004BAE8 00048A28  28 03 00 00 */	cmplwi r3, 0
/* 8004BAEC 00048A2C  41 82 00 34 */	beq .L_8004BB20
/* 8004BAF0 00048A30  88 03 00 08 */	lbz r0, 8(r3)
/* 8004BAF4 00048A34  28 00 00 00 */	cmplwi r0, 0
/* 8004BAF8 00048A38  41 82 00 28 */	beq .L_8004BB20
/* 8004BAFC 00048A3C  88 64 00 3A */	lbz r3, 0x3a(r4)
/* 8004BB00 00048A40  38 00 00 00 */	li r0, 0
/* 8004BB04 00048A44  2C 03 00 10 */	cmpwi r3, 0x10
/* 8004BB08 00048A48  41 80 00 08 */	blt .L_8004BB10
/* 8004BB0C 00048A4C  38 00 00 10 */	li r0, 0x10
.L_8004BB10:
/* 8004BB10 00048A50  7C 00 18 50 */	subf r0, r0, r3
/* 8004BB14 00048A54  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 8004BB18 00048A58  40 82 00 08 */	bne .L_8004BB20
/* 8004BB1C 00048A5C  3B 80 00 01 */	li r28, 1
.L_8004BB20:
/* 8004BB20 00048A60  57 5D 10 3A */	slwi r29, r26, 2
/* 8004BB24 00048A64  7F F9 EA 14 */	add r31, r25, r29
/* 8004BB28 00048A68  80 7F 00 64 */	lwz r3, 0x64(r31)
/* 8004BB2C 00048A6C  28 03 00 00 */	cmplwi r3, 0
/* 8004BB30 00048A70  40 82 00 84 */	bne .L_8004BBB4
/* 8004BB34 00048A74  28 1B 00 00 */	cmplwi r27, 0
/* 8004BB38 00048A78  41 82 00 64 */	beq .L_8004BB9C
/* 8004BB3C 00048A7C  38 60 00 40 */	li r3, 0x40
/* 8004BB40 00048A80  4B FD 83 65 */	bl __nw__FUl
/* 8004BB44 00048A84  7C 7E 1B 79 */	or. r30, r3, r3
/* 8004BB48 00048A88  41 82 00 24 */	beq .L_8004BB6C
/* 8004BB4C 00048A8C  38 00 00 00 */	li r0, 0
/* 8004BB50 00048A90  7F 64 DB 78 */	mr r4, r27
/* 8004BB54 00048A94  90 1E 00 28 */	stw r0, 0x28(r30)
/* 8004BB58 00048A98  7F 85 E3 78 */	mr r5, r28
/* 8004BB5C 00048A9C  4B FE 75 29 */	bl storeTIMG__10JUTTextureFPC7ResTIMGUc
/* 8004BB60 00048AA0  88 1E 00 3B */	lbz r0, 0x3b(r30)
/* 8004BB64 00048AA4  54 00 07 BC */	rlwinm r0, r0, 0, 0x1e, 0x1e
/* 8004BB68 00048AA8  98 1E 00 3B */	stb r0, 0x3b(r30)
.L_8004BB6C:
/* 8004BB6C 00048AAC  93 DF 00 64 */	stw r30, 0x64(r31)
/* 8004BB70 00048AB0  80 1F 00 64 */	lwz r0, 0x64(r31)
/* 8004BB74 00048AB4  28 00 00 00 */	cmplwi r0, 0
/* 8004BB78 00048AB8  40 82 00 0C */	bne .L_8004BB84
/* 8004BB7C 00048ABC  38 60 00 00 */	li r3, 0
/* 8004BB80 00048AC0  48 00 01 10 */	b .L_8004BC90
.L_8004BB84:
/* 8004BB84 00048AC4  38 00 00 01 */	li r0, 1
/* 8004BB88 00048AC8  88 79 00 78 */	lbz r3, 0x78(r25)
/* 8004BB8C 00048ACC  7C 00 D0 30 */	slw r0, r0, r26
/* 8004BB90 00048AD0  7C 60 03 78 */	or r0, r3, r0
/* 8004BB94 00048AD4  98 19 00 78 */	stb r0, 0x78(r25)
/* 8004BB98 00048AD8  48 00 00 CC */	b .L_8004BC64
.L_8004BB9C:
/* 8004BB9C 00048ADC  38 00 00 01 */	li r0, 1
/* 8004BBA0 00048AE0  88 79 00 78 */	lbz r3, 0x78(r25)
/* 8004BBA4 00048AE4  7C 00 D0 30 */	slw r0, r0, r26
/* 8004BBA8 00048AE8  7C 60 00 78 */	andc r0, r3, r0
/* 8004BBAC 00048AEC  98 19 00 78 */	stb r0, 0x78(r25)
/* 8004BBB0 00048AF0  48 00 00 B4 */	b .L_8004BC64
.L_8004BBB4:
/* 8004BBB4 00048AF4  38 00 00 01 */	li r0, 1
/* 8004BBB8 00048AF8  88 99 00 78 */	lbz r4, 0x78(r25)
/* 8004BBBC 00048AFC  7C 1E D0 30 */	slw r30, r0, r26
/* 8004BBC0 00048B00  7C 80 F0 39 */	and. r0, r4, r30
/* 8004BBC4 00048B04  41 82 00 3C */	beq .L_8004BC00
/* 8004BBC8 00048B08  28 1B 00 00 */	cmplwi r27, 0
/* 8004BBCC 00048B0C  41 82 00 14 */	beq .L_8004BBE0
/* 8004BBD0 00048B10  7F 64 DB 78 */	mr r4, r27
/* 8004BBD4 00048B14  7F 85 E3 78 */	mr r5, r28
/* 8004BBD8 00048B18  4B FE 74 AD */	bl storeTIMG__10JUTTextureFPC7ResTIMGUc
/* 8004BBDC 00048B1C  48 00 00 88 */	b .L_8004BC64
.L_8004BBE0:
/* 8004BBE0 00048B20  38 80 00 01 */	li r4, 1
/* 8004BBE4 00048B24  4B FE 74 2D */	bl __dt__10JUTTextureFv
/* 8004BBE8 00048B28  38 00 00 00 */	li r0, 0
/* 8004BBEC 00048B2C  90 1F 00 64 */	stw r0, 0x64(r31)
/* 8004BBF0 00048B30  88 19 00 78 */	lbz r0, 0x78(r25)
/* 8004BBF4 00048B34  7C 00 F0 78 */	andc r0, r0, r30
/* 8004BBF8 00048B38  98 19 00 78 */	stb r0, 0x78(r25)
/* 8004BBFC 00048B3C  48 00 00 68 */	b .L_8004BC64
.L_8004BC00:
/* 8004BC00 00048B40  38 00 00 00 */	li r0, 0
/* 8004BC04 00048B44  28 1B 00 00 */	cmplwi r27, 0
/* 8004BC08 00048B48  90 1F 00 64 */	stw r0, 0x64(r31)
/* 8004BC0C 00048B4C  41 82 00 58 */	beq .L_8004BC64
/* 8004BC10 00048B50  38 60 00 40 */	li r3, 0x40
/* 8004BC14 00048B54  4B FD 82 91 */	bl __nw__FUl
/* 8004BC18 00048B58  7C 7C 1B 79 */	or. r28, r3, r3
/* 8004BC1C 00048B5C  41 82 00 24 */	beq .L_8004BC40
/* 8004BC20 00048B60  38 00 00 00 */	li r0, 0
/* 8004BC24 00048B64  7F 64 DB 78 */	mr r4, r27
/* 8004BC28 00048B68  90 1C 00 28 */	stw r0, 0x28(r28)
/* 8004BC2C 00048B6C  38 A0 00 00 */	li r5, 0
/* 8004BC30 00048B70  4B FE 74 55 */	bl storeTIMG__10JUTTextureFPC7ResTIMGUc
/* 8004BC34 00048B74  88 1C 00 3B */	lbz r0, 0x3b(r28)
/* 8004BC38 00048B78  54 00 07 BC */	rlwinm r0, r0, 0, 0x1e, 0x1e
/* 8004BC3C 00048B7C  98 1C 00 3B */	stb r0, 0x3b(r28)
.L_8004BC40:
/* 8004BC40 00048B80  93 9F 00 64 */	stw r28, 0x64(r31)
/* 8004BC44 00048B84  80 1F 00 64 */	lwz r0, 0x64(r31)
/* 8004BC48 00048B88  28 00 00 00 */	cmplwi r0, 0
/* 8004BC4C 00048B8C  40 82 00 0C */	bne .L_8004BC58
/* 8004BC50 00048B90  38 60 00 00 */	li r3, 0
/* 8004BC54 00048B94  48 00 00 3C */	b .L_8004BC90
.L_8004BC58:
/* 8004BC58 00048B98  88 19 00 78 */	lbz r0, 0x78(r25)
/* 8004BC5C 00048B9C  7C 00 F3 78 */	or r0, r0, r30
/* 8004BC60 00048BA0  98 19 00 78 */	stb r0, 0x78(r25)
.L_8004BC64:
/* 8004BC64 00048BA4  7F 79 EA 14 */	add r27, r25, r29
/* 8004BC68 00048BA8  80 7B 00 6C */	lwz r3, 0x6c(r27)
/* 8004BC6C 00048BAC  4B FD 84 49 */	bl __dl__FPv
/* 8004BC70 00048BB0  38 80 00 00 */	li r4, 0
/* 8004BC74 00048BB4  57 40 08 3C */	slwi r0, r26, 1
/* 8004BC78 00048BB8  3C 60 00 01 */	lis r3, 0x0000FFFF@ha
/* 8004BC7C 00048BBC  90 9B 00 6C */	stw r4, 0x6c(r27)
/* 8004BC80 00048BC0  38 83 FF FF */	addi r4, r3, 0x0000FFFF@l
/* 8004BC84 00048BC4  7C 79 02 14 */	add r3, r25, r0
/* 8004BC88 00048BC8  B0 83 00 04 */	sth r4, 4(r3)
/* 8004BC8C 00048BCC  38 60 00 01 */	li r3, 1
.L_8004BC90:
/* 8004BC90 00048BD0  BB 21 00 14 */	lmw r25, 0x14(r1)
/* 8004BC94 00048BD4  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8004BC98 00048BD8  7C 08 03 A6 */	mtlr r0
/* 8004BC9C 00048BDC  38 21 00 30 */	addi r1, r1, 0x30
/* 8004BCA0 00048BE0  4E 80 00 20 */	blr 
.endfn setTexture__12J2DTevBlock2FUlPC7ResTIMG

.fn setTexture__12J2DTevBlock2FUlP10JUTTexture, global
/* 8004BCA4 00048BE4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8004BCA8 00048BE8  7C 08 02 A6 */	mflr r0
/* 8004BCAC 00048BEC  90 01 00 24 */	stw r0, 0x24(r1)
/* 8004BCB0 00048BF0  BF 61 00 0C */	stmw r27, 0xc(r1)
/* 8004BCB4 00048BF4  7C 9C 23 78 */	mr r28, r4
/* 8004BCB8 00048BF8  28 1C 00 02 */	cmplwi r28, 2
/* 8004BCBC 00048BFC  7C 7B 1B 78 */	mr r27, r3
/* 8004BCC0 00048C00  7C BD 2B 78 */	mr r29, r5
/* 8004BCC4 00048C04  41 80 00 0C */	blt .L_8004BCD0
/* 8004BCC8 00048C08  38 60 00 00 */	li r3, 0
/* 8004BCCC 00048C0C  48 00 00 6C */	b .L_8004BD38
.L_8004BCD0:
/* 8004BCD0 00048C10  38 00 00 01 */	li r0, 1
/* 8004BCD4 00048C14  88 7B 00 78 */	lbz r3, 0x78(r27)
/* 8004BCD8 00048C18  7C 1E E0 30 */	slw r30, r0, r28
/* 8004BCDC 00048C1C  7C 60 F0 39 */	and. r0, r3, r30
/* 8004BCE0 00048C20  41 82 00 18 */	beq .L_8004BCF8
/* 8004BCE4 00048C24  57 80 10 3A */	slwi r0, r28, 2
/* 8004BCE8 00048C28  38 80 00 01 */	li r4, 1
/* 8004BCEC 00048C2C  7C 7B 02 14 */	add r3, r27, r0
/* 8004BCF0 00048C30  80 63 00 64 */	lwz r3, 0x64(r3)
/* 8004BCF4 00048C34  4B FE 73 1D */	bl __dt__10JUTTextureFv
.L_8004BCF8:
/* 8004BCF8 00048C38  57 80 10 3A */	slwi r0, r28, 2
/* 8004BCFC 00048C3C  7F FB 02 14 */	add r31, r27, r0
/* 8004BD00 00048C40  93 BF 00 64 */	stw r29, 0x64(r31)
/* 8004BD04 00048C44  88 1B 00 78 */	lbz r0, 0x78(r27)
/* 8004BD08 00048C48  7C 00 F0 78 */	andc r0, r0, r30
/* 8004BD0C 00048C4C  98 1B 00 78 */	stb r0, 0x78(r27)
/* 8004BD10 00048C50  80 7F 00 6C */	lwz r3, 0x6c(r31)
/* 8004BD14 00048C54  4B FD 83 A1 */	bl __dl__FPv
/* 8004BD18 00048C58  38 80 00 00 */	li r4, 0
/* 8004BD1C 00048C5C  57 80 08 3C */	slwi r0, r28, 1
/* 8004BD20 00048C60  3C 60 00 01 */	lis r3, 0x0000FFFF@ha
/* 8004BD24 00048C64  90 9F 00 6C */	stw r4, 0x6c(r31)
/* 8004BD28 00048C68  38 83 FF FF */	addi r4, r3, 0x0000FFFF@l
/* 8004BD2C 00048C6C  7C 7B 02 14 */	add r3, r27, r0
/* 8004BD30 00048C70  B0 83 00 04 */	sth r4, 4(r3)
/* 8004BD34 00048C74  38 60 00 01 */	li r3, 1
.L_8004BD38:
/* 8004BD38 00048C78  BB 61 00 0C */	lmw r27, 0xc(r1)
/* 8004BD3C 00048C7C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8004BD40 00048C80  7C 08 03 A6 */	mtlr r0
/* 8004BD44 00048C84  38 21 00 20 */	addi r1, r1, 0x20
/* 8004BD48 00048C88  4E 80 00 20 */	blr 
.endfn setTexture__12J2DTevBlock2FUlP10JUTTexture

.fn removeTexture__12J2DTevBlock2FUl, global
/* 8004BD4C 00048C8C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8004BD50 00048C90  7C 08 02 A6 */	mflr r0
/* 8004BD54 00048C94  90 01 00 14 */	stw r0, 0x14(r1)
/* 8004BD58 00048C98  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8004BD5C 00048C9C  7C 9F 23 78 */	mr r31, r4
/* 8004BD60 00048CA0  28 1F 00 02 */	cmplwi r31, 2
/* 8004BD64 00048CA4  93 C1 00 08 */	stw r30, 8(r1)
/* 8004BD68 00048CA8  7C 7E 1B 78 */	mr r30, r3
/* 8004BD6C 00048CAC  41 80 00 0C */	blt .L_8004BD78
/* 8004BD70 00048CB0  38 60 00 00 */	li r3, 0
/* 8004BD74 00048CB4  48 00 00 94 */	b .L_8004BE08
.L_8004BD78:
/* 8004BD78 00048CB8  38 00 00 01 */	li r0, 1
/* 8004BD7C 00048CBC  88 7E 00 78 */	lbz r3, 0x78(r30)
/* 8004BD80 00048CC0  7C 00 F8 30 */	slw r0, r0, r31
/* 8004BD84 00048CC4  7C 60 00 39 */	and. r0, r3, r0
/* 8004BD88 00048CC8  41 82 00 18 */	beq .L_8004BDA0
/* 8004BD8C 00048CCC  57 E0 10 3A */	slwi r0, r31, 2
/* 8004BD90 00048CD0  38 80 00 01 */	li r4, 1
/* 8004BD94 00048CD4  7C 7E 02 14 */	add r3, r30, r0
/* 8004BD98 00048CD8  80 63 00 64 */	lwz r3, 0x64(r3)
/* 8004BD9C 00048CDC  4B FE 72 75 */	bl __dt__10JUTTextureFv
.L_8004BDA0:
/* 8004BDA0 00048CE0  57 E0 10 3A */	slwi r0, r31, 2
/* 8004BDA4 00048CE4  7C 7E 02 14 */	add r3, r30, r0
/* 8004BDA8 00048CE8  80 63 00 6C */	lwz r3, 0x6c(r3)
/* 8004BDAC 00048CEC  4B FD 83 09 */	bl __dl__FPv
/* 8004BDB0 00048CF0  28 1F 00 00 */	cmplwi r31, 0
/* 8004BDB4 00048CF4  40 82 00 1C */	bne .L_8004BDD0
/* 8004BDB8 00048CF8  80 1E 00 68 */	lwz r0, 0x68(r30)
/* 8004BDBC 00048CFC  90 1E 00 64 */	stw r0, 0x64(r30)
/* 8004BDC0 00048D00  80 1E 00 70 */	lwz r0, 0x70(r30)
/* 8004BDC4 00048D04  90 1E 00 6C */	stw r0, 0x6c(r30)
/* 8004BDC8 00048D08  A0 1E 00 06 */	lhz r0, 6(r30)
/* 8004BDCC 00048D0C  B0 1E 00 04 */	sth r0, 4(r30)
.L_8004BDD0:
/* 8004BDD0 00048D10  38 A0 00 00 */	li r5, 0
/* 8004BDD4 00048D14  3C 60 00 01 */	lis r3, 0x0000FFFF@ha
/* 8004BDD8 00048D18  90 BE 00 68 */	stw r5, 0x68(r30)
/* 8004BDDC 00048D1C  38 03 FF FF */	addi r0, r3, 0x0000FFFF@l
/* 8004BDE0 00048D20  7F C3 F3 78 */	mr r3, r30
/* 8004BDE4 00048D24  57 E4 06 3E */	clrlwi r4, r31, 0x18
/* 8004BDE8 00048D28  90 BE 00 70 */	stw r5, 0x70(r30)
/* 8004BDEC 00048D2C  38 A0 00 00 */	li r5, 0
/* 8004BDF0 00048D30  B0 1E 00 06 */	sth r0, 6(r30)
/* 8004BDF4 00048D34  81 9E 00 00 */	lwz r12, 0(r30)
/* 8004BDF8 00048D38  81 8C 00 AC */	lwz r12, 0xac(r12)
/* 8004BDFC 00048D3C  7D 89 03 A6 */	mtctr r12
/* 8004BE00 00048D40  4E 80 04 21 */	bctrl 
/* 8004BE04 00048D44  38 60 00 01 */	li r3, 1
.L_8004BE08:
/* 8004BE08 00048D48  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8004BE0C 00048D4C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8004BE10 00048D50  83 C1 00 08 */	lwz r30, 8(r1)
/* 8004BE14 00048D54  7C 08 03 A6 */	mtlr r0
/* 8004BE18 00048D58  38 21 00 10 */	addi r1, r1, 0x10
/* 8004BE1C 00048D5C  4E 80 00 20 */	blr 
.endfn removeTexture__12J2DTevBlock2FUl

.fn setFont__12J2DTevBlock2FP7ResFONT, global
/* 8004BE20 00048D60  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8004BE24 00048D64  7C 08 02 A6 */	mflr r0
/* 8004BE28 00048D68  90 01 00 24 */	stw r0, 0x24(r1)
/* 8004BE2C 00048D6C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8004BE30 00048D70  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8004BE34 00048D74  7C 9E 23 79 */	or. r30, r4, r4
/* 8004BE38 00048D78  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8004BE3C 00048D7C  7C 7D 1B 78 */	mr r29, r3
/* 8004BE40 00048D80  40 82 00 0C */	bne .L_8004BE4C
/* 8004BE44 00048D84  38 60 00 00 */	li r3, 0
/* 8004BE48 00048D88  48 00 00 78 */	b .L_8004BEC0
.L_8004BE4C:
/* 8004BE4C 00048D8C  38 60 00 70 */	li r3, 0x70
/* 8004BE50 00048D90  4B FD 80 55 */	bl __nw__FUl
/* 8004BE54 00048D94  7C 7F 1B 79 */	or. r31, r3, r3
/* 8004BE58 00048D98  41 82 00 14 */	beq .L_8004BE6C
/* 8004BE5C 00048D9C  7F C4 F3 78 */	mr r4, r30
/* 8004BE60 00048DA0  38 A0 00 00 */	li r5, 0
/* 8004BE64 00048DA4  4B FE 53 69 */	bl __ct__10JUTResFontFPC7ResFONTP7JKRHeap
/* 8004BE68 00048DA8  7C 7F 1B 78 */	mr r31, r3
.L_8004BE6C:
/* 8004BE6C 00048DAC  28 1F 00 00 */	cmplwi r31, 0
/* 8004BE70 00048DB0  40 82 00 0C */	bne .L_8004BE7C
/* 8004BE74 00048DB4  38 60 00 00 */	li r3, 0
/* 8004BE78 00048DB8  48 00 00 48 */	b .L_8004BEC0
.L_8004BE7C:
/* 8004BE7C 00048DBC  88 1D 00 78 */	lbz r0, 0x78(r29)
/* 8004BE80 00048DC0  54 00 06 31 */	rlwinm. r0, r0, 0, 0x18, 0x18
/* 8004BE84 00048DC4  41 82 00 24 */	beq .L_8004BEA8
/* 8004BE88 00048DC8  80 7D 00 74 */	lwz r3, 0x74(r29)
/* 8004BE8C 00048DCC  28 03 00 00 */	cmplwi r3, 0
/* 8004BE90 00048DD0  41 82 00 18 */	beq .L_8004BEA8
/* 8004BE94 00048DD4  81 83 00 00 */	lwz r12, 0(r3)
/* 8004BE98 00048DD8  38 80 00 01 */	li r4, 1
/* 8004BE9C 00048DDC  81 8C 00 08 */	lwz r12, 8(r12)
/* 8004BEA0 00048DE0  7D 89 03 A6 */	mtctr r12
/* 8004BEA4 00048DE4  4E 80 04 21 */	bctrl 
.L_8004BEA8:
/* 8004BEA8 00048DE8  93 FD 00 74 */	stw r31, 0x74(r29)
/* 8004BEAC 00048DEC  38 60 00 01 */	li r3, 1
/* 8004BEB0 00048DF0  88 1D 00 78 */	lbz r0, 0x78(r29)
/* 8004BEB4 00048DF4  54 00 06 7E */	clrlwi r0, r0, 0x19
/* 8004BEB8 00048DF8  60 00 00 80 */	ori r0, r0, 0x80
/* 8004BEBC 00048DFC  98 1D 00 78 */	stb r0, 0x78(r29)
.L_8004BEC0:
/* 8004BEC0 00048E00  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8004BEC4 00048E04  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8004BEC8 00048E08  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8004BECC 00048E0C  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8004BED0 00048E10  7C 08 03 A6 */	mtlr r0
/* 8004BED4 00048E14  38 21 00 20 */	addi r1, r1, 0x20
/* 8004BED8 00048E18  4E 80 00 20 */	blr 
.endfn setFont__12J2DTevBlock2FP7ResFONT

.fn setFont__12J2DTevBlock2FP7JUTFont, global
/* 8004BEDC 00048E1C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8004BEE0 00048E20  7C 08 02 A6 */	mflr r0
/* 8004BEE4 00048E24  90 01 00 14 */	stw r0, 0x14(r1)
/* 8004BEE8 00048E28  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8004BEEC 00048E2C  7C 9F 23 79 */	or. r31, r4, r4
/* 8004BEF0 00048E30  93 C1 00 08 */	stw r30, 8(r1)
/* 8004BEF4 00048E34  7C 7E 1B 78 */	mr r30, r3
/* 8004BEF8 00048E38  40 82 00 0C */	bne .L_8004BF04
/* 8004BEFC 00048E3C  38 60 00 00 */	li r3, 0
/* 8004BF00 00048E40  48 00 00 44 */	b .L_8004BF44
.L_8004BF04:
/* 8004BF04 00048E44  88 1E 00 78 */	lbz r0, 0x78(r30)
/* 8004BF08 00048E48  54 00 06 31 */	rlwinm. r0, r0, 0, 0x18, 0x18
/* 8004BF0C 00048E4C  41 82 00 24 */	beq .L_8004BF30
/* 8004BF10 00048E50  80 7E 00 74 */	lwz r3, 0x74(r30)
/* 8004BF14 00048E54  28 03 00 00 */	cmplwi r3, 0
/* 8004BF18 00048E58  41 82 00 18 */	beq .L_8004BF30
/* 8004BF1C 00048E5C  81 83 00 00 */	lwz r12, 0(r3)
/* 8004BF20 00048E60  38 80 00 01 */	li r4, 1
/* 8004BF24 00048E64  81 8C 00 08 */	lwz r12, 8(r12)
/* 8004BF28 00048E68  7D 89 03 A6 */	mtctr r12
/* 8004BF2C 00048E6C  4E 80 04 21 */	bctrl 
.L_8004BF30:
/* 8004BF30 00048E70  93 FE 00 74 */	stw r31, 0x74(r30)
/* 8004BF34 00048E74  38 60 00 01 */	li r3, 1
/* 8004BF38 00048E78  88 1E 00 78 */	lbz r0, 0x78(r30)
/* 8004BF3C 00048E7C  54 00 06 7E */	clrlwi r0, r0, 0x19
/* 8004BF40 00048E80  98 1E 00 78 */	stb r0, 0x78(r30)
.L_8004BF44:
/* 8004BF44 00048E84  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8004BF48 00048E88  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8004BF4C 00048E8C  83 C1 00 08 */	lwz r30, 8(r1)
/* 8004BF50 00048E90  7C 08 03 A6 */	mtlr r0
/* 8004BF54 00048E94  38 21 00 10 */	addi r1, r1, 0x10
/* 8004BF58 00048E98  4E 80 00 20 */	blr 
.endfn setFont__12J2DTevBlock2FP7JUTFont

.fn setPalette__12J2DTevBlock2FUlPC7ResTLUT, global
/* 8004BF5C 00048E9C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8004BF60 00048EA0  7C 08 02 A6 */	mflr r0
/* 8004BF64 00048EA4  90 01 00 24 */	stw r0, 0x24(r1)
/* 8004BF68 00048EA8  BF 41 00 08 */	stmw r26, 8(r1)
/* 8004BF6C 00048EAC  7C 9B 23 78 */	mr r27, r4
/* 8004BF70 00048EB0  28 1B 00 02 */	cmplwi r27, 2
/* 8004BF74 00048EB4  7C 7A 1B 78 */	mr r26, r3
/* 8004BF78 00048EB8  7C BC 2B 78 */	mr r28, r5
/* 8004BF7C 00048EBC  41 80 00 0C */	blt .L_8004BF88
/* 8004BF80 00048EC0  38 60 00 00 */	li r3, 0
/* 8004BF84 00048EC4  48 00 00 94 */	b .L_8004C018
.L_8004BF88:
/* 8004BF88 00048EC8  28 1C 00 00 */	cmplwi r28, 0
/* 8004BF8C 00048ECC  41 82 00 70 */	beq .L_8004BFFC
/* 8004BF90 00048ED0  57 7D 10 3A */	slwi r29, r27, 2
/* 8004BF94 00048ED4  7F DA EA 14 */	add r30, r26, r29
/* 8004BF98 00048ED8  80 7E 00 6C */	lwz r3, 0x6c(r30)
/* 8004BF9C 00048EDC  28 03 00 00 */	cmplwi r3, 0
/* 8004BFA0 00048EE0  40 82 00 38 */	bne .L_8004BFD8
/* 8004BFA4 00048EE4  38 60 00 18 */	li r3, 0x18
/* 8004BFA8 00048EE8  4B FD 7E FD */	bl __nw__FUl
/* 8004BFAC 00048EEC  7C 7F 1B 79 */	or. r31, r3, r3
/* 8004BFB0 00048EF0  41 82 00 10 */	beq .L_8004BFC0
/* 8004BFB4 00048EF4  7F 64 DB 78 */	mr r4, r27
/* 8004BFB8 00048EF8  7F 85 E3 78 */	mr r5, r28
/* 8004BFBC 00048EFC  4B FE 2F 09 */	bl storeTLUT__10JUTPaletteF7_GXTlutP7ResTLUT
.L_8004BFC0:
/* 8004BFC0 00048F00  93 FE 00 6C */	stw r31, 0x6c(r30)
/* 8004BFC4 00048F04  80 1E 00 6C */	lwz r0, 0x6c(r30)
/* 8004BFC8 00048F08  28 00 00 00 */	cmplwi r0, 0
/* 8004BFCC 00048F0C  40 82 00 14 */	bne .L_8004BFE0
/* 8004BFD0 00048F10  38 60 00 00 */	li r3, 0
/* 8004BFD4 00048F14  48 00 00 44 */	b .L_8004C018
.L_8004BFD8:
/* 8004BFD8 00048F18  38 80 00 00 */	li r4, 0
/* 8004BFDC 00048F1C  4B FE 2E E9 */	bl storeTLUT__10JUTPaletteF7_GXTlutP7ResTLUT
.L_8004BFE0:
/* 8004BFE0 00048F20  7C 7A EA 14 */	add r3, r26, r29
/* 8004BFE4 00048F24  80 63 00 64 */	lwz r3, 0x64(r3)
/* 8004BFE8 00048F28  28 03 00 00 */	cmplwi r3, 0
/* 8004BFEC 00048F2C  41 82 00 28 */	beq .L_8004C014
/* 8004BFF0 00048F30  80 9E 00 6C */	lwz r4, 0x6c(r30)
/* 8004BFF4 00048F34  4B FE 73 A9 */	bl attachPalette__10JUTTextureFP10JUTPalette
/* 8004BFF8 00048F38  48 00 00 1C */	b .L_8004C014
.L_8004BFFC:
/* 8004BFFC 00048F3C  57 60 10 3A */	slwi r0, r27, 2
/* 8004C000 00048F40  7F BA 02 14 */	add r29, r26, r0
/* 8004C004 00048F44  80 7D 00 6C */	lwz r3, 0x6c(r29)
/* 8004C008 00048F48  4B FD 80 AD */	bl __dl__FPv
/* 8004C00C 00048F4C  38 00 00 00 */	li r0, 0
/* 8004C010 00048F50  90 1D 00 6C */	stw r0, 0x6c(r29)
.L_8004C014:
/* 8004C014 00048F54  38 60 00 01 */	li r3, 1
.L_8004C018:
/* 8004C018 00048F58  BB 41 00 08 */	lmw r26, 8(r1)
/* 8004C01C 00048F5C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8004C020 00048F60  7C 08 03 A6 */	mtlr r0
/* 8004C024 00048F64  38 21 00 20 */	addi r1, r1, 0x20
/* 8004C028 00048F68  4E 80 00 20 */	blr 
.endfn setPalette__12J2DTevBlock2FUlPC7ResTLUT

.fn shiftDeleteFlag__12J2DTevBlock2FUcb, global
/* 8004C02C 00048F6C  88 C3 00 78 */	lbz r6, 0x78(r3)
/* 8004C030 00048F70  54 A0 06 3F */	clrlwi. r0, r5, 0x18
/* 8004C034 00048F74  54 C0 06 7E */	clrlwi r0, r6, 0x19
/* 8004C038 00048F78  54 C6 06 30 */	rlwinm r6, r6, 0, 0x18, 0x18
/* 8004C03C 00048F7C  98 03 00 78 */	stb r0, 0x78(r3)
/* 8004C040 00048F80  41 82 00 30 */	beq .L_8004C070
/* 8004C044 00048F84  54 80 06 3E */	clrlwi r0, r4, 0x18
/* 8004C048 00048F88  38 80 00 01 */	li r4, 1
/* 8004C04C 00048F8C  7C 84 00 30 */	slw r4, r4, r0
/* 8004C050 00048F90  88 A3 00 78 */	lbz r5, 0x78(r3)
/* 8004C054 00048F94  38 84 FF FF */	addi r4, r4, -1
/* 8004C058 00048F98  7C A0 20 78 */	andc r0, r5, r4
/* 8004C05C 00048F9C  7C A4 20 38 */	and r4, r5, r4
/* 8004C060 00048FA0  54 00 08 3C */	slwi r0, r0, 1
/* 8004C064 00048FA4  7C 80 03 78 */	or r0, r4, r0
/* 8004C068 00048FA8  98 03 00 78 */	stb r0, 0x78(r3)
/* 8004C06C 00048FAC  48 00 00 38 */	b .L_8004C0A4
.L_8004C070:
/* 8004C070 00048FB0  54 87 06 3E */	clrlwi r7, r4, 0x18
/* 8004C074 00048FB4  38 A0 00 01 */	li r5, 1
/* 8004C078 00048FB8  38 07 00 01 */	addi r0, r7, 1
/* 8004C07C 00048FBC  89 03 00 78 */	lbz r8, 0x78(r3)
/* 8004C080 00048FC0  7C A4 00 30 */	slw r4, r5, r0
/* 8004C084 00048FC4  7C A5 38 30 */	slw r5, r5, r7
/* 8004C088 00048FC8  38 04 FF FF */	addi r0, r4, -1
/* 8004C08C 00048FCC  38 85 FF FF */	addi r4, r5, -1
/* 8004C090 00048FD0  7D 00 00 78 */	andc r0, r8, r0
/* 8004C094 00048FD4  7D 04 20 38 */	and r4, r8, r4
/* 8004C098 00048FD8  7C 00 0E 70 */	srawi r0, r0, 1
/* 8004C09C 00048FDC  7C 80 03 78 */	or r0, r4, r0
/* 8004C0A0 00048FE0  98 03 00 78 */	stb r0, 0x78(r3)
.L_8004C0A4:
/* 8004C0A4 00048FE4  88 03 00 78 */	lbz r0, 0x78(r3)
/* 8004C0A8 00048FE8  7C 00 33 78 */	or r0, r0, r6
/* 8004C0AC 00048FEC  98 03 00 78 */	stb r0, 0x78(r3)
/* 8004C0B0 00048FF0  4E 80 00 20 */	blr 
.endfn shiftDeleteFlag__12J2DTevBlock2FUcb

.fn setGX__12J2DTevBlock2Fv, global
/* 8004C0B4 00048FF4  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8004C0B8 00048FF8  7C 08 02 A6 */	mflr r0
/* 8004C0BC 00048FFC  90 01 00 34 */	stw r0, 0x34(r1)
/* 8004C0C0 00049000  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 8004C0C4 00049004  93 C1 00 28 */	stw r30, 0x28(r1)
/* 8004C0C8 00049008  93 A1 00 24 */	stw r29, 0x24(r1)
/* 8004C0CC 0004900C  7C 7D 1B 78 */	mr r29, r3
/* 8004C0D0 00049010  93 81 00 20 */	stw r28, 0x20(r1)
/* 8004C0D4 00049014  3B 80 00 00 */	li r28, 0
.L_8004C0D8:
/* 8004C0D8 00049018  7F A3 EB 78 */	mr r3, r29
/* 8004C0DC 0004901C  7F 84 E3 78 */	mr r4, r28
/* 8004C0E0 00049020  81 9D 00 00 */	lwz r12, 0(r29)
/* 8004C0E4 00049024  7F 85 E3 78 */	mr r5, r28
/* 8004C0E8 00049028  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8004C0EC 0004902C  7D 89 03 A6 */	mtctr r12
/* 8004C0F0 00049030  4E 80 04 21 */	bctrl 
/* 8004C0F4 00049034  3B 9C 00 01 */	addi r28, r28, 1
/* 8004C0F8 00049038  2C 1C 00 02 */	cmpwi r28, 2
/* 8004C0FC 0004903C  41 80 FF DC */	blt .L_8004C0D8
/* 8004C100 00049040  7F BE EB 78 */	mr r30, r29
/* 8004C104 00049044  3B 80 00 00 */	li r28, 0
/* 8004C108 00049048  48 00 00 20 */	b .L_8004C128
.L_8004C10C:
/* 8004C10C 0004904C  88 9E 00 0A */	lbz r4, 0xa(r30)
/* 8004C110 00049050  7F 83 E3 78 */	mr r3, r28
/* 8004C114 00049054  88 BE 00 0B */	lbz r5, 0xb(r30)
/* 8004C118 00049058  88 DE 00 0C */	lbz r6, 0xc(r30)
/* 8004C11C 0004905C  48 09 C9 01 */	bl GXSetTevOrder
/* 8004C120 00049060  3B DE 00 04 */	addi r30, r30, 4
/* 8004C124 00049064  3B 9C 00 01 */	addi r28, r28, 1
.L_8004C128:
/* 8004C128 00049068  88 1D 00 32 */	lbz r0, 0x32(r29)
/* 8004C12C 0004906C  7C 1C 00 00 */	cmpw r28, r0
/* 8004C130 00049070  41 80 FF DC */	blt .L_8004C10C
/* 8004C134 00049074  7F BF EB 78 */	mr r31, r29
/* 8004C138 00049078  3B C1 00 0C */	addi r30, r1, 0xc
/* 8004C13C 0004907C  3B 80 00 00 */	li r28, 0
.L_8004C140:
/* 8004C140 00049080  80 9F 00 12 */	lwz r4, 0x12(r31)
/* 8004C144 00049084  2C 1C 00 03 */	cmpwi r28, 3
/* 8004C148 00049088  80 1F 00 16 */	lwz r0, 0x16(r31)
/* 8004C14C 0004908C  38 60 00 00 */	li r3, 0
/* 8004C150 00049090  90 81 00 0C */	stw r4, 0xc(r1)
/* 8004C154 00049094  90 01 00 10 */	stw r0, 0x10(r1)
/* 8004C158 00049098  41 82 00 08 */	beq .L_8004C160
/* 8004C15C 0004909C  38 7C 00 01 */	addi r3, r28, 1
.L_8004C160:
/* 8004C160 000490A0  7F C4 F3 78 */	mr r4, r30
/* 8004C164 000490A4  48 09 C5 79 */	bl GXSetTevColorS10
/* 8004C168 000490A8  3B 9C 00 01 */	addi r28, r28, 1
/* 8004C16C 000490AC  3B FF 00 08 */	addi r31, r31, 8
/* 8004C170 000490B0  2C 1C 00 04 */	cmpwi r28, 4
/* 8004C174 000490B4  41 80 FF CC */	blt .L_8004C140
/* 8004C178 000490B8  88 7D 00 32 */	lbz r3, 0x32(r29)
/* 8004C17C 000490BC  48 09 CA 3D */	bl GXSetNumTevStages
/* 8004C180 000490C0  7F BE EB 78 */	mr r30, r29
/* 8004C184 000490C4  3B E0 00 00 */	li r31, 0
/* 8004C188 000490C8  48 00 01 28 */	b .L_8004C2B0
.L_8004C18C:
/* 8004C18C 000490CC  88 1E 00 36 */	lbz r0, 0x36(r30)
/* 8004C190 000490D0  7F E3 FB 78 */	mr r3, r31
/* 8004C194 000490D4  88 BE 00 35 */	lbz r5, 0x35(r30)
/* 8004C198 000490D8  54 06 E7 3E */	rlwinm r6, r0, 0x1c, 0x1c, 0x1f
/* 8004C19C 000490DC  54 07 07 3E */	clrlwi r7, r0, 0x1c
/* 8004C1A0 000490E0  54 A4 E7 3E */	rlwinm r4, r5, 0x1c, 0x1c, 0x1f
/* 8004C1A4 000490E4  54 A5 07 3E */	clrlwi r5, r5, 0x1c
/* 8004C1A8 000490E8  48 09 C3 61 */	bl GXSetTevColorIn
/* 8004C1AC 000490EC  88 BE 00 39 */	lbz r5, 0x39(r30)
/* 8004C1B0 000490F0  7F E3 FB 78 */	mr r3, r31
/* 8004C1B4 000490F4  88 DE 00 3A */	lbz r6, 0x3a(r30)
/* 8004C1B8 000490F8  54 A0 06 34 */	rlwinm r0, r5, 0, 0x18, 0x1a
/* 8004C1BC 000490FC  7C 04 2E 70 */	srawi r4, r0, 5
/* 8004C1C0 00049100  54 C7 E7 7E */	rlwinm r7, r6, 0x1c, 0x1d, 0x1f
/* 8004C1C4 00049104  54 C0 CF FE */	rlwinm r0, r6, 0x19, 0x1f, 0x1f
/* 8004C1C8 00049108  50 A0 0F 7C */	rlwimi r0, r5, 1, 0x1d, 0x1e
/* 8004C1CC 0004910C  54 84 06 3E */	clrlwi r4, r4, 0x18
/* 8004C1D0 00049110  54 A5 F7 7E */	rlwinm r5, r5, 0x1e, 0x1d, 0x1f
/* 8004C1D4 00049114  54 06 06 3E */	clrlwi r6, r0, 0x18
/* 8004C1D8 00049118  48 09 C3 75 */	bl GXSetTevAlphaIn
/* 8004C1DC 0004911C  88 FE 00 34 */	lbz r7, 0x34(r30)
/* 8004C1E0 00049120  7F E3 FB 78 */	mr r3, r31
/* 8004C1E4 00049124  54 E0 06 B6 */	rlwinm r0, r7, 0, 0x1a, 0x1b
/* 8004C1E8 00049128  54 E5 07 BE */	clrlwi r5, r7, 0x1e
/* 8004C1EC 0004912C  7C 06 26 70 */	srawi r6, r0, 4
/* 8004C1F0 00049130  54 E9 F7 FE */	rlwinm r9, r7, 0x1e, 0x1f, 0x1f
/* 8004C1F4 00049134  54 E0 EF 7C */	rlwinm r0, r7, 0x1d, 0x1d, 0x1e
/* 8004C1F8 00049138  28 05 00 03 */	cmplwi r5, 3
/* 8004C1FC 0004913C  7C 89 02 14 */	add r4, r9, r0
/* 8004C200 00049140  54 E8 D7 BE */	rlwinm r8, r7, 0x1a, 0x1e, 0x1f
/* 8004C204 00049144  38 04 00 08 */	addi r0, r4, 8
/* 8004C208 00049148  54 C6 06 3E */	clrlwi r6, r6, 0x18
/* 8004C20C 0004914C  54 E7 EF FE */	rlwinm r7, r7, 0x1d, 0x1f, 0x1f
/* 8004C210 00049150  54 00 06 3E */	clrlwi r0, r0, 0x18
/* 8004C214 00049154  41 82 00 08 */	beq .L_8004C21C
/* 8004C218 00049158  7D 20 4B 78 */	mr r0, r9
.L_8004C21C:
/* 8004C21C 0004915C  54 04 06 3E */	clrlwi r4, r0, 0x18
/* 8004C220 00049160  48 09 C3 71 */	bl GXSetTevColorOp
/* 8004C224 00049164  88 FE 00 38 */	lbz r7, 0x38(r30)
/* 8004C228 00049168  7F E3 FB 78 */	mr r3, r31
/* 8004C22C 0004916C  54 E0 06 B6 */	rlwinm r0, r7, 0, 0x1a, 0x1b
/* 8004C230 00049170  54 E5 07 BE */	clrlwi r5, r7, 0x1e
/* 8004C234 00049174  7C 06 26 70 */	srawi r6, r0, 4
/* 8004C238 00049178  54 E9 F7 FE */	rlwinm r9, r7, 0x1e, 0x1f, 0x1f
/* 8004C23C 0004917C  54 E0 EF 7C */	rlwinm r0, r7, 0x1d, 0x1d, 0x1e
/* 8004C240 00049180  28 05 00 03 */	cmplwi r5, 3
/* 8004C244 00049184  7C 89 02 14 */	add r4, r9, r0
/* 8004C248 00049188  54 E8 D7 BE */	rlwinm r8, r7, 0x1a, 0x1e, 0x1f
/* 8004C24C 0004918C  38 04 00 08 */	addi r0, r4, 8
/* 8004C250 00049190  54 C6 06 3E */	clrlwi r6, r6, 0x18
/* 8004C254 00049194  54 E7 EF FE */	rlwinm r7, r7, 0x1d, 0x1f, 0x1f
/* 8004C258 00049198  54 00 06 3E */	clrlwi r0, r0, 0x18
/* 8004C25C 0004919C  41 82 00 08 */	beq .L_8004C264
/* 8004C260 000491A0  7D 20 4B 78 */	mr r0, r9
.L_8004C264:
/* 8004C264 000491A4  54 04 06 3E */	clrlwi r4, r0, 0x18
/* 8004C268 000491A8  48 09 C3 91 */	bl GXSetTevAlphaOp
/* 8004C26C 000491AC  7F 9D FA 14 */	add r28, r29, r31
/* 8004C270 000491B0  38 80 00 00 */	li r4, 0
/* 8004C274 000491B4  88 1C 00 54 */	lbz r0, 0x54(r28)
/* 8004C278 000491B8  28 00 00 FF */	cmplwi r0, 0xff
/* 8004C27C 000491BC  41 82 00 08 */	beq .L_8004C284
/* 8004C280 000491C0  7C 04 03 78 */	mr r4, r0
.L_8004C284:
/* 8004C284 000491C4  7F E3 FB 78 */	mr r3, r31
/* 8004C288 000491C8  48 09 C5 45 */	bl GXSetTevKColorSel
/* 8004C28C 000491CC  88 1C 00 56 */	lbz r0, 0x56(r28)
/* 8004C290 000491D0  38 80 00 00 */	li r4, 0
/* 8004C294 000491D4  28 00 00 FF */	cmplwi r0, 0xff
/* 8004C298 000491D8  41 82 00 08 */	beq .L_8004C2A0
/* 8004C29C 000491DC  7C 04 03 78 */	mr r4, r0
.L_8004C2A0:
/* 8004C2A0 000491E0  7F E3 FB 78 */	mr r3, r31
/* 8004C2A4 000491E4  48 09 C5 85 */	bl GXSetTevKAlphaSel
/* 8004C2A8 000491E8  3B DE 00 08 */	addi r30, r30, 8
/* 8004C2AC 000491EC  3B FF 00 01 */	addi r31, r31, 1
.L_8004C2B0:
/* 8004C2B0 000491F0  88 1D 00 32 */	lbz r0, 0x32(r29)
/* 8004C2B4 000491F4  7C 1F 00 00 */	cmpw r31, r0
/* 8004C2B8 000491F8  41 80 FE D4 */	blt .L_8004C18C
/* 8004C2BC 000491FC  3B 80 00 00 */	li r28, 0
/* 8004C2C0 00049200  7F BE EB 78 */	mr r30, r29
.L_8004C2C4:
/* 8004C2C4 00049204  80 1E 00 44 */	lwz r0, 0x44(r30)
/* 8004C2C8 00049208  7F 83 E3 78 */	mr r3, r28
/* 8004C2CC 0004920C  38 81 00 08 */	addi r4, r1, 8
/* 8004C2D0 00049210  90 01 00 08 */	stw r0, 8(r1)
/* 8004C2D4 00049214  48 09 C4 85 */	bl GXSetTevKColor
/* 8004C2D8 00049218  3B 9C 00 01 */	addi r28, r28, 1
/* 8004C2DC 0004921C  3B DE 00 04 */	addi r30, r30, 4
/* 8004C2E0 00049220  2C 1C 00 04 */	cmpwi r28, 4
/* 8004C2E4 00049224  41 80 FF E0 */	blt .L_8004C2C4
/* 8004C2E8 00049228  7F BE EB 78 */	mr r30, r29
/* 8004C2EC 0004922C  3B 80 00 00 */	li r28, 0
/* 8004C2F0 00049230  48 00 00 20 */	b .L_8004C310
.L_8004C2F4:
/* 8004C2F4 00049234  88 1E 00 3A */	lbz r0, 0x3a(r30)
/* 8004C2F8 00049238  7F 83 E3 78 */	mr r3, r28
/* 8004C2FC 0004923C  54 04 07 BE */	clrlwi r4, r0, 0x1e
/* 8004C300 00049240  54 05 F7 BE */	rlwinm r5, r0, 0x1e, 0x1e, 0x1f
/* 8004C304 00049244  48 09 C5 81 */	bl GXSetTevSwapMode
/* 8004C308 00049248  3B DE 00 08 */	addi r30, r30, 8
/* 8004C30C 0004924C  3B 9C 00 01 */	addi r28, r28, 1
.L_8004C310:
/* 8004C310 00049250  88 1D 00 32 */	lbz r0, 0x32(r29)
/* 8004C314 00049254  7C 1C 00 00 */	cmpw r28, r0
/* 8004C318 00049258  41 80 FF DC */	blt .L_8004C2F4
/* 8004C31C 0004925C  3B 80 00 00 */	li r28, 0
.L_8004C320:
/* 8004C320 00049260  38 1C 00 58 */	addi r0, r28, 0x58
/* 8004C324 00049264  7F 83 E3 78 */	mr r3, r28
/* 8004C328 00049268  7C 1D 00 AE */	lbzx r0, r29, r0
/* 8004C32C 0004926C  54 04 D7 BE */	rlwinm r4, r0, 0x1a, 0x1e, 0x1f
/* 8004C330 00049270  54 05 E7 BE */	rlwinm r5, r0, 0x1c, 0x1e, 0x1f
/* 8004C334 00049274  54 06 F7 BE */	rlwinm r6, r0, 0x1e, 0x1e, 0x1f
/* 8004C338 00049278  54 07 07 BE */	clrlwi r7, r0, 0x1e
/* 8004C33C 0004927C  48 09 C5 91 */	bl GXSetTevSwapModeTable
/* 8004C340 00049280  3B 9C 00 01 */	addi r28, r28, 1
/* 8004C344 00049284  2C 1C 00 04 */	cmpwi r28, 4
/* 8004C348 00049288  41 80 FF D8 */	blt .L_8004C320
/* 8004C34C 0004928C  3B 80 00 00 */	li r28, 0
/* 8004C350 00049290  48 00 00 1C */	b .L_8004C36C
.L_8004C354:
/* 8004C354 00049294  57 83 15 BA */	rlwinm r3, r28, 2, 0x16, 0x1d
/* 8004C358 00049298  7F 84 E3 78 */	mr r4, r28
/* 8004C35C 0004929C  38 63 00 5C */	addi r3, r3, 0x5c
/* 8004C360 000492A0  7C 7D 1A 14 */	add r3, r29, r3
/* 8004C364 000492A4  48 00 D2 61 */	bl load__14J2DIndTevStageFUc
/* 8004C368 000492A8  3B 9C 00 01 */	addi r28, r28, 1
.L_8004C36C:
/* 8004C36C 000492AC  88 1D 00 32 */	lbz r0, 0x32(r29)
/* 8004C370 000492B0  57 83 06 3E */	clrlwi r3, r28, 0x18
/* 8004C374 000492B4  7C 03 00 40 */	cmplw r3, r0
/* 8004C378 000492B8  41 80 FF DC */	blt .L_8004C354
/* 8004C37C 000492BC  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8004C380 000492C0  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 8004C384 000492C4  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 8004C388 000492C8  83 A1 00 24 */	lwz r29, 0x24(r1)
/* 8004C38C 000492CC  83 81 00 20 */	lwz r28, 0x20(r1)
/* 8004C390 000492D0  7C 08 03 A6 */	mtlr r0
/* 8004C394 000492D4  38 21 00 30 */	addi r1, r1, 0x30
/* 8004C398 000492D8  4E 80 00 20 */	blr 
.endfn setGX__12J2DTevBlock2Fv

.fn loadTexture__12J2DTevBlock2F11_GXTexMapIDUl, global
/* 8004C39C 000492DC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8004C3A0 000492E0  7C 08 02 A6 */	mflr r0
/* 8004C3A4 000492E4  28 05 00 02 */	cmplwi r5, 2
/* 8004C3A8 000492E8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8004C3AC 000492EC  40 80 00 28 */	bge .L_8004C3D4
/* 8004C3B0 000492F0  54 A0 10 3A */	slwi r0, r5, 2
/* 8004C3B4 000492F4  7C 63 02 14 */	add r3, r3, r0
/* 8004C3B8 000492F8  80 63 00 64 */	lwz r3, 0x64(r3)
/* 8004C3BC 000492FC  28 03 00 00 */	cmplwi r3, 0
/* 8004C3C0 00049300  41 82 00 14 */	beq .L_8004C3D4
/* 8004C3C4 00049304  80 03 00 20 */	lwz r0, 0x20(r3)
/* 8004C3C8 00049308  28 00 00 00 */	cmplwi r0, 0
/* 8004C3CC 0004930C  41 82 00 08 */	beq .L_8004C3D4
/* 8004C3D0 00049310  4B FE 72 61 */	bl load__10JUTTextureF11_GXTexMapID
.L_8004C3D4:
/* 8004C3D4 00049314  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8004C3D8 00049318  7C 08 03 A6 */	mtlr r0
/* 8004C3DC 0004931C  38 21 00 10 */	addi r1, r1, 0x10
/* 8004C3E0 00049320  4E 80 00 20 */	blr 
.endfn loadTexture__12J2DTevBlock2F11_GXTexMapIDUl

.fn __ct__12J2DTevBlock4Fv, global
/* 8004C3E4 00049324  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8004C3E8 00049328  7C 08 02 A6 */	mflr r0
/* 8004C3EC 0004932C  3C 80 80 4A */	lis r4, __vt__11J2DTevBlock@ha
/* 8004C3F0 00049330  38 A0 00 00 */	li r5, 0
/* 8004C3F4 00049334  90 01 00 14 */	stw r0, 0x14(r1)
/* 8004C3F8 00049338  38 04 10 94 */	addi r0, r4, __vt__11J2DTevBlock@l
/* 8004C3FC 0004933C  3C 80 80 05 */	lis r4, __ct__11J2DTevOrderFv@ha
/* 8004C400 00049340  38 C0 00 04 */	li r6, 4
/* 8004C404 00049344  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8004C408 00049348  7C 7F 1B 78 */	mr r31, r3
/* 8004C40C 0004934C  3C 60 80 4A */	lis r3, __vt__12J2DTevBlock4@ha
/* 8004C410 00049350  38 84 A2 C4 */	addi r4, r4, __ct__11J2DTevOrderFv@l
/* 8004C414 00049354  90 1F 00 00 */	stw r0, 0(r31)
/* 8004C418 00049358  38 03 0E 60 */	addi r0, r3, __vt__12J2DTevBlock4@l
/* 8004C41C 0004935C  38 7F 00 0E */	addi r3, r31, 0xe
/* 8004C420 00049360  38 E0 00 04 */	li r7, 4
/* 8004C424 00049364  90 1F 00 00 */	stw r0, 0(r31)
/* 8004C428 00049368  48 07 54 15 */	bl __construct_array
/* 8004C42C 0004936C  3C 80 80 05 */	lis r4, __ct__13J2DGXColorS10Fv@ha
/* 8004C430 00049370  38 7F 00 1E */	addi r3, r31, 0x1e
/* 8004C434 00049374  38 84 A2 C0 */	addi r4, r4, __ct__13J2DGXColorS10Fv@l
/* 8004C438 00049378  38 A0 00 00 */	li r5, 0
/* 8004C43C 0004937C  38 C0 00 08 */	li r6, 8
/* 8004C440 00049380  38 E0 00 04 */	li r7, 4
/* 8004C444 00049384  48 07 53 F9 */	bl __construct_array
/* 8004C448 00049388  3C 80 80 05 */	lis r4, __ct__11J2DTevStageFv@ha
/* 8004C44C 0004938C  38 7F 00 3F */	addi r3, r31, 0x3f
/* 8004C450 00049390  38 84 95 D8 */	addi r4, r4, __ct__11J2DTevStageFv@l
/* 8004C454 00049394  38 A0 00 00 */	li r5, 0
/* 8004C458 00049398  38 C0 00 08 */	li r6, 8
/* 8004C45C 0004939C  38 E0 00 04 */	li r7, 4
/* 8004C460 000493A0  48 07 53 DD */	bl __construct_array
/* 8004C464 000493A4  3C 80 80 04 */	lis r4, __ct__Q28JUtility6TColorFv@ha
/* 8004C468 000493A8  38 7F 00 60 */	addi r3, r31, 0x60
/* 8004C46C 000493AC  38 84 9B 94 */	addi r4, r4, __ct__Q28JUtility6TColorFv@l
/* 8004C470 000493B0  38 A0 00 00 */	li r5, 0
/* 8004C474 000493B4  38 C0 00 04 */	li r6, 4
/* 8004C478 000493B8  38 E0 00 04 */	li r7, 4
/* 8004C47C 000493BC  48 07 53 C1 */	bl __construct_array
/* 8004C480 000493C0  3C 80 80 05 */	lis r4, __ct__19J2DTevSwapModeTableFv@ha
/* 8004C484 000493C4  38 7F 00 78 */	addi r3, r31, 0x78
/* 8004C488 000493C8  38 84 A2 B4 */	addi r4, r4, __ct__19J2DTevSwapModeTableFv@l
/* 8004C48C 000493CC  38 A0 00 00 */	li r5, 0
/* 8004C490 000493D0  38 C0 00 01 */	li r6, 1
/* 8004C494 000493D4  38 E0 00 04 */	li r7, 4
/* 8004C498 000493D8  48 07 53 A5 */	bl __construct_array
/* 8004C49C 000493DC  3C 80 80 05 */	lis r4, __ct__14J2DIndTevStageFv@ha
/* 8004C4A0 000493E0  38 7F 00 7C */	addi r3, r31, 0x7c
/* 8004C4A4 000493E4  38 84 A2 20 */	addi r4, r4, __ct__14J2DIndTevStageFv@l
/* 8004C4A8 000493E8  38 A0 00 00 */	li r5, 0
/* 8004C4AC 000493EC  38 C0 00 04 */	li r6, 4
/* 8004C4B0 000493F0  38 E0 00 04 */	li r7, 4
/* 8004C4B4 000493F4  48 07 53 89 */	bl __construct_array
/* 8004C4B8 000493F8  38 00 00 00 */	li r0, 0
/* 8004C4BC 000493FC  7F E3 FB 78 */	mr r3, r31
/* 8004C4C0 00049400  90 1F 00 8C */	stw r0, 0x8c(r31)
/* 8004C4C4 00049404  90 1F 00 90 */	stw r0, 0x90(r31)
/* 8004C4C8 00049408  90 1F 00 94 */	stw r0, 0x94(r31)
/* 8004C4CC 0004940C  90 1F 00 98 */	stw r0, 0x98(r31)
/* 8004C4D0 00049410  98 1F 00 B0 */	stb r0, 0xb0(r31)
/* 8004C4D4 00049414  81 9F 00 00 */	lwz r12, 0(r31)
/* 8004C4D8 00049418  81 8C 00 08 */	lwz r12, 8(r12)
/* 8004C4DC 0004941C  7D 89 03 A6 */	mtctr r12
/* 8004C4E0 00049420  4E 80 04 21 */	bctrl 
/* 8004C4E4 00049424  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8004C4E8 00049428  7F E3 FB 78 */	mr r3, r31
/* 8004C4EC 0004942C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8004C4F0 00049430  7C 08 03 A6 */	mtlr r0
/* 8004C4F4 00049434  38 21 00 10 */	addi r1, r1, 0x10
/* 8004C4F8 00049438  4E 80 00 20 */	blr 
.endfn __ct__12J2DTevBlock4Fv

.fn __dt__12J2DTevBlock4Fv, global
/* 8004C4FC 0004943C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8004C500 00049440  7C 08 02 A6 */	mflr r0
/* 8004C504 00049444  90 01 00 24 */	stw r0, 0x24(r1)
/* 8004C508 00049448  BF 61 00 0C */	stmw r27, 0xc(r1)
/* 8004C50C 0004944C  7C 7B 1B 79 */	or. r27, r3, r3
/* 8004C510 00049450  7C 9C 23 78 */	mr r28, r4
/* 8004C514 00049454  41 82 00 A0 */	beq .L_8004C5B4
/* 8004C518 00049458  3C 60 80 4A */	lis r3, __vt__12J2DTevBlock4@ha
/* 8004C51C 0004945C  7F 7E DB 78 */	mr r30, r27
/* 8004C520 00049460  38 03 0E 60 */	addi r0, r3, __vt__12J2DTevBlock4@l
/* 8004C524 00049464  3B A0 00 00 */	li r29, 0
/* 8004C528 00049468  90 1B 00 00 */	stw r0, 0(r27)
/* 8004C52C 0004946C  3B E0 00 01 */	li r31, 1
.L_8004C530:
/* 8004C530 00049470  88 7B 00 B0 */	lbz r3, 0xb0(r27)
/* 8004C534 00049474  7F E0 E8 30 */	slw r0, r31, r29
/* 8004C538 00049478  7C 60 00 39 */	and. r0, r3, r0
/* 8004C53C 0004947C  41 82 00 10 */	beq .L_8004C54C
/* 8004C540 00049480  80 7E 00 8C */	lwz r3, 0x8c(r30)
/* 8004C544 00049484  38 80 00 01 */	li r4, 1
/* 8004C548 00049488  4B FE 6A C9 */	bl __dt__10JUTTextureFv
.L_8004C54C:
/* 8004C54C 0004948C  80 7E 00 9C */	lwz r3, 0x9c(r30)
/* 8004C550 00049490  4B FD 7B 65 */	bl __dl__FPv
/* 8004C554 00049494  3B BD 00 01 */	addi r29, r29, 1
/* 8004C558 00049498  3B DE 00 04 */	addi r30, r30, 4
/* 8004C55C 0004949C  2C 1D 00 04 */	cmpwi r29, 4
/* 8004C560 000494A0  41 80 FF D0 */	blt .L_8004C530
/* 8004C564 000494A4  88 1B 00 B0 */	lbz r0, 0xb0(r27)
/* 8004C568 000494A8  54 00 06 31 */	rlwinm. r0, r0, 0, 0x18, 0x18
/* 8004C56C 000494AC  41 82 00 24 */	beq .L_8004C590
/* 8004C570 000494B0  80 7B 00 AC */	lwz r3, 0xac(r27)
/* 8004C574 000494B4  28 03 00 00 */	cmplwi r3, 0
/* 8004C578 000494B8  41 82 00 18 */	beq .L_8004C590
/* 8004C57C 000494BC  81 83 00 00 */	lwz r12, 0(r3)
/* 8004C580 000494C0  38 80 00 01 */	li r4, 1
/* 8004C584 000494C4  81 8C 00 08 */	lwz r12, 8(r12)
/* 8004C588 000494C8  7D 89 03 A6 */	mtctr r12
/* 8004C58C 000494CC  4E 80 04 21 */	bctrl 
.L_8004C590:
/* 8004C590 000494D0  28 1B 00 00 */	cmplwi r27, 0
/* 8004C594 000494D4  41 82 00 10 */	beq .L_8004C5A4
/* 8004C598 000494D8  3C 60 80 4A */	lis r3, __vt__11J2DTevBlock@ha
/* 8004C59C 000494DC  38 03 10 94 */	addi r0, r3, __vt__11J2DTevBlock@l
/* 8004C5A0 000494E0  90 1B 00 00 */	stw r0, 0(r27)
.L_8004C5A4:
/* 8004C5A4 000494E4  7F 80 07 35 */	extsh. r0, r28
/* 8004C5A8 000494E8  40 81 00 0C */	ble .L_8004C5B4
/* 8004C5AC 000494EC  7F 63 DB 78 */	mr r3, r27
/* 8004C5B0 000494F0  4B FD 7B 05 */	bl __dl__FPv
.L_8004C5B4:
/* 8004C5B4 000494F4  7F 63 DB 78 */	mr r3, r27
/* 8004C5B8 000494F8  BB 61 00 0C */	lmw r27, 0xc(r1)
/* 8004C5BC 000494FC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8004C5C0 00049500  7C 08 03 A6 */	mtlr r0
/* 8004C5C4 00049504  38 21 00 20 */	addi r1, r1, 0x20
/* 8004C5C8 00049508  4E 80 00 20 */	blr 
.endfn __dt__12J2DTevBlock4Fv

.fn initialize__12J2DTevBlock4Fv, global
/* 8004C5CC 0004950C  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 8004C5D0 00049510  3C 80 00 01 */	lis r4, 0x0000FFFF@ha
/* 8004C5D4 00049514  38 04 FF FF */	addi r0, r4, 0x0000FFFF@l
/* 8004C5D8 00049518  38 A2 85 B0 */	addi r5, r2, j2dDefaultTevOrderInfoNull@sda21
/* 8004C5DC 0004951C  BF 01 00 20 */	stmw r24, 0x20(r1)
/* 8004C5E0 00049520  38 C2 85 B8 */	addi r6, r2, j2dDefaultTevColor@sda21
/* 8004C5E4 00049524  AB 22 85 B8 */	lha r25, j2dDefaultTevColor@sda21(r2)
/* 8004C5E8 00049528  3B A0 00 01 */	li r29, 1
/* 8004C5EC 0004952C  AB 46 00 02 */	lha r26, 2(r6)
/* 8004C5F0 00049530  3B C0 00 C0 */	li r30, 0xc0
/* 8004C5F4 00049534  AB 66 00 04 */	lha r27, 4(r6)
/* 8004C5F8 00049538  3B E0 00 C1 */	li r31, 0xc1
/* 8004C5FC 0004953C  AB 86 00 06 */	lha r28, 6(r6)
/* 8004C600 00049540  39 80 00 C2 */	li r12, 0xc2
/* 8004C604 00049544  39 60 00 C3 */	li r11, 0xc3
/* 8004C608 00049548  39 40 00 C4 */	li r10, 0xc4
/* 8004C60C 0004954C  39 20 00 C5 */	li r9, 0xc5
/* 8004C610 00049550  38 E0 00 C6 */	li r7, 0xc6
/* 8004C614 00049554  38 C0 00 C7 */	li r6, 0xc7
/* 8004C618 00049558  7C 64 1B 78 */	mr r4, r3
/* 8004C61C 0004955C  81 02 85 C4 */	lwz r8, j2dDefaultTevKColor@sda21(r2)
/* 8004C620 00049560  B0 03 00 04 */	sth r0, 4(r3)
/* 8004C624 00049564  B0 03 00 06 */	sth r0, 6(r3)
/* 8004C628 00049568  B0 03 00 08 */	sth r0, 8(r3)
/* 8004C62C 0004956C  B0 03 00 0A */	sth r0, 0xa(r3)
/* 8004C630 00049570  B0 03 00 0C */	sth r0, 0xc(r3)
/* 8004C634 00049574  38 00 00 02 */	li r0, 2
/* 8004C638 00049578  8B 02 85 B0 */	lbz r24, j2dDefaultTevOrderInfoNull@sda21(r2)
/* 8004C63C 0004957C  9B 03 00 0E */	stb r24, 0xe(r3)
/* 8004C640 00049580  8B 05 00 01 */	lbz r24, 1(r5)
/* 8004C644 00049584  9B 03 00 0F */	stb r24, 0xf(r3)
/* 8004C648 00049588  8B 05 00 02 */	lbz r24, 2(r5)
/* 8004C64C 0004958C  9B 03 00 10 */	stb r24, 0x10(r3)
/* 8004C650 00049590  8B 02 85 B0 */	lbz r24, j2dDefaultTevOrderInfoNull@sda21(r2)
/* 8004C654 00049594  9B 03 00 12 */	stb r24, 0x12(r3)
/* 8004C658 00049598  8B 05 00 01 */	lbz r24, 1(r5)
/* 8004C65C 0004959C  9B 03 00 13 */	stb r24, 0x13(r3)
/* 8004C660 000495A0  8B 05 00 02 */	lbz r24, 2(r5)
/* 8004C664 000495A4  9B 03 00 14 */	stb r24, 0x14(r3)
/* 8004C668 000495A8  8B 02 85 B0 */	lbz r24, j2dDefaultTevOrderInfoNull@sda21(r2)
/* 8004C66C 000495AC  9B 03 00 16 */	stb r24, 0x16(r3)
/* 8004C670 000495B0  8B 05 00 01 */	lbz r24, 1(r5)
/* 8004C674 000495B4  9B 03 00 17 */	stb r24, 0x17(r3)
/* 8004C678 000495B8  8B 05 00 02 */	lbz r24, 2(r5)
/* 8004C67C 000495BC  9B 03 00 18 */	stb r24, 0x18(r3)
/* 8004C680 000495C0  8B 02 85 B0 */	lbz r24, j2dDefaultTevOrderInfoNull@sda21(r2)
/* 8004C684 000495C4  9B 03 00 1A */	stb r24, 0x1a(r3)
/* 8004C688 000495C8  8B 05 00 01 */	lbz r24, 1(r5)
/* 8004C68C 000495CC  9B 03 00 1B */	stb r24, 0x1b(r3)
/* 8004C690 000495D0  88 A5 00 02 */	lbz r5, 2(r5)
/* 8004C694 000495D4  98 A3 00 1C */	stb r5, 0x1c(r3)
/* 8004C698 000495D8  B3 23 00 1E */	sth r25, 0x1e(r3)
/* 8004C69C 000495DC  B3 43 00 20 */	sth r26, 0x20(r3)
/* 8004C6A0 000495E0  B3 63 00 22 */	sth r27, 0x22(r3)
/* 8004C6A4 000495E4  B3 83 00 24 */	sth r28, 0x24(r3)
/* 8004C6A8 000495E8  B3 23 00 26 */	sth r25, 0x26(r3)
/* 8004C6AC 000495EC  B3 43 00 28 */	sth r26, 0x28(r3)
/* 8004C6B0 000495F0  B3 63 00 2A */	sth r27, 0x2a(r3)
/* 8004C6B4 000495F4  B3 83 00 2C */	sth r28, 0x2c(r3)
/* 8004C6B8 000495F8  B3 23 00 2E */	sth r25, 0x2e(r3)
/* 8004C6BC 000495FC  B3 43 00 30 */	sth r26, 0x30(r3)
/* 8004C6C0 00049600  B3 63 00 32 */	sth r27, 0x32(r3)
/* 8004C6C4 00049604  B3 83 00 34 */	sth r28, 0x34(r3)
/* 8004C6C8 00049608  B3 23 00 36 */	sth r25, 0x36(r3)
/* 8004C6CC 0004960C  B3 43 00 38 */	sth r26, 0x38(r3)
/* 8004C6D0 00049610  B3 63 00 3A */	sth r27, 0x3a(r3)
/* 8004C6D4 00049614  B3 83 00 3C */	sth r28, 0x3c(r3)
/* 8004C6D8 00049618  9B A3 00 3E */	stb r29, 0x3e(r3)
/* 8004C6DC 0004961C  9B C3 00 3F */	stb r30, 0x3f(r3)
/* 8004C6E0 00049620  9B E3 00 43 */	stb r31, 0x43(r3)
/* 8004C6E4 00049624  99 83 00 47 */	stb r12, 0x47(r3)
/* 8004C6E8 00049628  99 63 00 4B */	stb r11, 0x4b(r3)
/* 8004C6EC 0004962C  99 43 00 4F */	stb r10, 0x4f(r3)
/* 8004C6F0 00049630  99 23 00 53 */	stb r9, 0x53(r3)
/* 8004C6F4 00049634  98 E3 00 57 */	stb r7, 0x57(r3)
/* 8004C6F8 00049638  98 C3 00 5B */	stb r6, 0x5b(r3)
/* 8004C6FC 0004963C  7C 09 03 A6 */	mtctr r0
.L_8004C700:
/* 8004C700 00049640  91 01 00 08 */	stw r8, 8(r1)
/* 8004C704 00049644  88 E1 00 08 */	lbz r7, 8(r1)
/* 8004C708 00049648  88 C1 00 09 */	lbz r6, 9(r1)
/* 8004C70C 0004964C  98 E4 00 60 */	stb r7, 0x60(r4)
/* 8004C710 00049650  88 A1 00 0A */	lbz r5, 0xa(r1)
/* 8004C714 00049654  88 01 00 0B */	lbz r0, 0xb(r1)
/* 8004C718 00049658  98 C4 00 61 */	stb r6, 0x61(r4)
/* 8004C71C 0004965C  98 A4 00 62 */	stb r5, 0x62(r4)
/* 8004C720 00049660  91 01 00 08 */	stw r8, 8(r1)
/* 8004C724 00049664  98 E1 00 0C */	stb r7, 0xc(r1)
/* 8004C728 00049668  88 E1 00 08 */	lbz r7, 8(r1)
/* 8004C72C 0004966C  98 04 00 63 */	stb r0, 0x63(r4)
/* 8004C730 00049670  98 C1 00 0D */	stb r6, 0xd(r1)
/* 8004C734 00049674  88 C1 00 09 */	lbz r6, 9(r1)
/* 8004C738 00049678  98 E4 00 64 */	stb r7, 0x64(r4)
/* 8004C73C 0004967C  98 A1 00 0E */	stb r5, 0xe(r1)
/* 8004C740 00049680  88 A1 00 0A */	lbz r5, 0xa(r1)
/* 8004C744 00049684  98 C4 00 65 */	stb r6, 0x65(r4)
/* 8004C748 00049688  98 01 00 0F */	stb r0, 0xf(r1)
/* 8004C74C 0004968C  88 01 00 0B */	lbz r0, 0xb(r1)
/* 8004C750 00049690  98 A4 00 66 */	stb r5, 0x66(r4)
/* 8004C754 00049694  98 04 00 67 */	stb r0, 0x67(r4)
/* 8004C758 00049698  38 84 00 08 */	addi r4, r4, 8
/* 8004C75C 0004969C  98 E1 00 0C */	stb r7, 0xc(r1)
/* 8004C760 000496A0  98 C1 00 0D */	stb r6, 0xd(r1)
/* 8004C764 000496A4  98 A1 00 0E */	stb r5, 0xe(r1)
/* 8004C768 000496A8  98 01 00 0F */	stb r0, 0xf(r1)
/* 8004C76C 000496AC  42 00 FF 94 */	bdnz .L_8004C700
/* 8004C770 000496B0  38 E0 00 FF */	li r7, 0xff
/* 8004C774 000496B4  3C 80 80 48 */	lis r4, j2dDefaultIndTevStageInfo@ha
/* 8004C778 000496B8  98 E3 00 70 */	stb r7, 0x70(r3)
/* 8004C77C 000496BC  38 C2 85 CC */	addi r6, r2, j2dDefaultTevSwapModeTable@sda21
/* 8004C780 000496C0  38 00 00 02 */	li r0, 2
/* 8004C784 000496C4  7C 65 1B 78 */	mr r5, r3
/* 8004C788 000496C8  98 E3 00 74 */	stb r7, 0x74(r3)
/* 8004C78C 000496CC  38 84 86 BC */	addi r4, r4, j2dDefaultIndTevStageInfo@l
/* 8004C790 000496D0  98 E3 00 71 */	stb r7, 0x71(r3)
/* 8004C794 000496D4  98 E3 00 75 */	stb r7, 0x75(r3)
/* 8004C798 000496D8  98 E3 00 72 */	stb r7, 0x72(r3)
/* 8004C79C 000496DC  98 E3 00 76 */	stb r7, 0x76(r3)
/* 8004C7A0 000496E0  98 E3 00 73 */	stb r7, 0x73(r3)
/* 8004C7A4 000496E4  98 E3 00 77 */	stb r7, 0x77(r3)
/* 8004C7A8 000496E8  88 E6 00 01 */	lbz r7, 1(r6)
/* 8004C7AC 000496EC  89 26 00 02 */	lbz r9, 2(r6)
/* 8004C7B0 000496F0  89 02 85 CC */	lbz r8, j2dDefaultTevSwapModeTable@sda21(r2)
/* 8004C7B4 000496F4  54 E7 25 36 */	rlwinm r7, r7, 4, 0x14, 0x1b
/* 8004C7B8 000496F8  55 29 10 3A */	slwi r9, r9, 2
/* 8004C7BC 000496FC  89 46 00 03 */	lbz r10, 3(r6)
/* 8004C7C0 00049700  7C E7 4A 14 */	add r7, r7, r9
/* 8004C7C4 00049704  55 08 30 32 */	slwi r8, r8, 6
/* 8004C7C8 00049708  7C E7 52 14 */	add r7, r7, r10
/* 8004C7CC 0004970C  7C E8 3A 14 */	add r7, r8, r7
/* 8004C7D0 00049710  98 E3 00 78 */	stb r7, 0x78(r3)
/* 8004C7D4 00049714  88 E6 00 01 */	lbz r7, 1(r6)
/* 8004C7D8 00049718  89 26 00 02 */	lbz r9, 2(r6)
/* 8004C7DC 0004971C  89 02 85 CC */	lbz r8, j2dDefaultTevSwapModeTable@sda21(r2)
/* 8004C7E0 00049720  54 E7 25 36 */	rlwinm r7, r7, 4, 0x14, 0x1b
/* 8004C7E4 00049724  55 29 10 3A */	slwi r9, r9, 2
/* 8004C7E8 00049728  89 46 00 03 */	lbz r10, 3(r6)
/* 8004C7EC 0004972C  7C E7 4A 14 */	add r7, r7, r9
/* 8004C7F0 00049730  55 08 30 32 */	slwi r8, r8, 6
/* 8004C7F4 00049734  7C E7 52 14 */	add r7, r7, r10
/* 8004C7F8 00049738  7C E8 3A 14 */	add r7, r8, r7
/* 8004C7FC 0004973C  98 E3 00 79 */	stb r7, 0x79(r3)
/* 8004C800 00049740  88 E6 00 01 */	lbz r7, 1(r6)
/* 8004C804 00049744  89 26 00 02 */	lbz r9, 2(r6)
/* 8004C808 00049748  89 02 85 CC */	lbz r8, j2dDefaultTevSwapModeTable@sda21(r2)
/* 8004C80C 0004974C  54 E7 25 36 */	rlwinm r7, r7, 4, 0x14, 0x1b
/* 8004C810 00049750  55 29 10 3A */	slwi r9, r9, 2
/* 8004C814 00049754  89 46 00 03 */	lbz r10, 3(r6)
/* 8004C818 00049758  7C E7 4A 14 */	add r7, r7, r9
/* 8004C81C 0004975C  55 08 30 32 */	slwi r8, r8, 6
/* 8004C820 00049760  7C E7 52 14 */	add r7, r7, r10
/* 8004C824 00049764  7C E8 3A 14 */	add r7, r8, r7
/* 8004C828 00049768  98 E3 00 7A */	stb r7, 0x7a(r3)
/* 8004C82C 0004976C  89 26 00 02 */	lbz r9, 2(r6)
/* 8004C830 00049770  88 E6 00 01 */	lbz r7, 1(r6)
/* 8004C834 00049774  89 02 85 CC */	lbz r8, j2dDefaultTevSwapModeTable@sda21(r2)
/* 8004C838 00049778  55 29 10 3A */	slwi r9, r9, 2
/* 8004C83C 0004977C  54 E7 20 36 */	slwi r7, r7, 4
/* 8004C840 00049780  89 46 00 03 */	lbz r10, 3(r6)
/* 8004C844 00049784  7C C7 4A 14 */	add r6, r7, r9
/* 8004C848 00049788  55 07 30 32 */	slwi r7, r8, 6
/* 8004C84C 0004978C  7C C6 52 14 */	add r6, r6, r10
/* 8004C850 00049790  7C C7 32 14 */	add r6, r7, r6
/* 8004C854 00049794  98 C3 00 7B */	stb r6, 0x7b(r3)
/* 8004C858 00049798  7C 09 03 A6 */	mtctr r0
.L_8004C85C:
/* 8004C85C 0004979C  80 C4 00 04 */	lwz r6, 4(r4)
/* 8004C860 000497A0  80 04 00 08 */	lwz r0, 8(r4)
/* 8004C864 000497A4  90 C1 00 14 */	stw r6, 0x14(r1)
/* 8004C868 000497A8  80 C4 00 00 */	lwz r6, 0(r4)
/* 8004C86C 000497AC  90 01 00 18 */	stw r0, 0x18(r1)
/* 8004C870 000497B0  88 01 00 17 */	lbz r0, 0x17(r1)
/* 8004C874 000497B4  90 C1 00 10 */	stw r6, 0x10(r1)
/* 8004C878 000497B8  88 C1 00 18 */	lbz r6, 0x18(r1)
/* 8004C87C 000497BC  54 00 A8 14 */	slwi r0, r0, 0x15
/* 8004C880 000497C0  88 E1 00 16 */	lbz r7, 0x16(r1)
/* 8004C884 000497C4  54 C6 B0 12 */	slwi r6, r6, 0x16
/* 8004C888 000497C8  89 01 00 13 */	lbz r8, 0x13(r1)
/* 8004C88C 000497CC  89 21 00 15 */	lbz r9, 0x15(r1)
/* 8004C890 000497D0  54 E7 A0 16 */	slwi r7, r7, 0x14
/* 8004C894 000497D4  7C C0 03 78 */	or r0, r6, r0
/* 8004C898 000497D8  89 41 00 14 */	lbz r10, 0x14(r1)
/* 8004C89C 000497DC  89 61 00 12 */	lbz r11, 0x12(r1)
/* 8004C8A0 000497E0  55 06 80 1E */	slwi r6, r8, 0x10
/* 8004C8A4 000497E4  7C E0 03 78 */	or r0, r7, r0
/* 8004C8A8 000497E8  89 81 00 11 */	lbz r12, 0x11(r1)
/* 8004C8AC 000497EC  55 27 58 28 */	slwi r7, r9, 0xb
/* 8004C8B0 000497F0  55 48 40 2E */	slwi r8, r10, 8
/* 8004C8B4 000497F4  7C C0 03 78 */	or r0, r6, r0
/* 8004C8B8 000497F8  55 66 20 36 */	slwi r6, r11, 4
/* 8004C8BC 000497FC  7C E0 03 78 */	or r0, r7, r0
/* 8004C8C0 00049800  55 87 10 3A */	slwi r7, r12, 2
/* 8004C8C4 00049804  7D 00 03 78 */	or r0, r8, r0
/* 8004C8C8 00049808  89 01 00 10 */	lbz r8, 0x10(r1)
/* 8004C8CC 0004980C  7C C0 03 78 */	or r0, r6, r0
/* 8004C8D0 00049810  7C E0 03 78 */	or r0, r7, r0
/* 8004C8D4 00049814  7D 00 03 78 */	or r0, r8, r0
/* 8004C8D8 00049818  90 05 00 7C */	stw r0, 0x7c(r5)
/* 8004C8DC 0004981C  80 C4 00 04 */	lwz r6, 4(r4)
/* 8004C8E0 00049820  80 04 00 08 */	lwz r0, 8(r4)
/* 8004C8E4 00049824  90 C1 00 14 */	stw r6, 0x14(r1)
/* 8004C8E8 00049828  80 C4 00 00 */	lwz r6, 0(r4)
/* 8004C8EC 0004982C  90 01 00 18 */	stw r0, 0x18(r1)
/* 8004C8F0 00049830  88 01 00 17 */	lbz r0, 0x17(r1)
/* 8004C8F4 00049834  90 C1 00 10 */	stw r6, 0x10(r1)
/* 8004C8F8 00049838  88 C1 00 18 */	lbz r6, 0x18(r1)
/* 8004C8FC 0004983C  54 00 A8 14 */	slwi r0, r0, 0x15
/* 8004C900 00049840  88 E1 00 16 */	lbz r7, 0x16(r1)
/* 8004C904 00049844  54 C6 B0 12 */	slwi r6, r6, 0x16
/* 8004C908 00049848  89 01 00 13 */	lbz r8, 0x13(r1)
/* 8004C90C 0004984C  89 21 00 15 */	lbz r9, 0x15(r1)
/* 8004C910 00049850  54 E7 A0 16 */	slwi r7, r7, 0x14
/* 8004C914 00049854  7C C0 03 78 */	or r0, r6, r0
/* 8004C918 00049858  89 41 00 14 */	lbz r10, 0x14(r1)
/* 8004C91C 0004985C  89 61 00 12 */	lbz r11, 0x12(r1)
/* 8004C920 00049860  55 06 80 1E */	slwi r6, r8, 0x10
/* 8004C924 00049864  7C E0 03 78 */	or r0, r7, r0
/* 8004C928 00049868  89 81 00 11 */	lbz r12, 0x11(r1)
/* 8004C92C 0004986C  55 27 58 28 */	slwi r7, r9, 0xb
/* 8004C930 00049870  55 48 40 2E */	slwi r8, r10, 8
/* 8004C934 00049874  7C C0 03 78 */	or r0, r6, r0
/* 8004C938 00049878  55 66 20 36 */	slwi r6, r11, 4
/* 8004C93C 0004987C  7C E0 03 78 */	or r0, r7, r0
/* 8004C940 00049880  55 87 10 3A */	slwi r7, r12, 2
/* 8004C944 00049884  7D 00 03 78 */	or r0, r8, r0
/* 8004C948 00049888  89 01 00 10 */	lbz r8, 0x10(r1)
/* 8004C94C 0004988C  7C C0 03 78 */	or r0, r6, r0
/* 8004C950 00049890  7C E0 03 78 */	or r0, r7, r0
/* 8004C954 00049894  7D 00 03 78 */	or r0, r8, r0
/* 8004C958 00049898  90 05 00 80 */	stw r0, 0x80(r5)
/* 8004C95C 0004989C  38 A5 00 08 */	addi r5, r5, 8
/* 8004C960 000498A0  42 00 FE FC */	bdnz .L_8004C85C
/* 8004C964 000498A4  38 00 00 00 */	li r0, 0
/* 8004C968 000498A8  90 03 00 9C */	stw r0, 0x9c(r3)
/* 8004C96C 000498AC  90 03 00 A0 */	stw r0, 0xa0(r3)
/* 8004C970 000498B0  90 03 00 A4 */	stw r0, 0xa4(r3)
/* 8004C974 000498B4  90 03 00 A8 */	stw r0, 0xa8(r3)
/* 8004C978 000498B8  90 03 00 AC */	stw r0, 0xac(r3)
/* 8004C97C 000498BC  BB 01 00 20 */	lmw r24, 0x20(r1)
/* 8004C980 000498C0  38 21 00 40 */	addi r1, r1, 0x40
/* 8004C984 000498C4  4E 80 00 20 */	blr 
.endfn initialize__12J2DTevBlock4Fv

.fn prepareTexture__12J2DTevBlock4FUc, global
/* 8004C988 000498C8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8004C98C 000498CC  7C 08 02 A6 */	mflr r0
/* 8004C990 000498D0  90 01 00 24 */	stw r0, 0x24(r1)
/* 8004C994 000498D4  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8004C998 000498D8  54 9F 06 3E */	clrlwi r31, r4, 0x18
/* 8004C99C 000498DC  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8004C9A0 000498E0  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8004C9A4 000498E4  3B A0 00 00 */	li r29, 0
/* 8004C9A8 000498E8  93 81 00 10 */	stw r28, 0x10(r1)
/* 8004C9AC 000498EC  7C 7C 1B 78 */	mr r28, r3
/* 8004C9B0 000498F0  48 00 00 88 */	b .L_8004CA38
.L_8004C9B4:
/* 8004C9B4 000498F4  57 A0 06 3E */	clrlwi r0, r29, 0x18
/* 8004C9B8 000498F8  28 00 00 04 */	cmplwi r0, 4
/* 8004C9BC 000498FC  41 80 00 0C */	blt .L_8004C9C8
/* 8004C9C0 00049900  38 60 00 00 */	li r3, 0
/* 8004C9C4 00049904  48 00 00 84 */	b .L_8004CA48
.L_8004C9C8:
/* 8004C9C8 00049908  57 A3 15 BA */	rlwinm r3, r29, 2, 0x16, 0x1d
/* 8004C9CC 0004990C  3B C3 00 8C */	addi r30, r3, 0x8c
/* 8004C9D0 00049910  7C 1C F0 2E */	lwzx r0, r28, r30
/* 8004C9D4 00049914  28 00 00 00 */	cmplwi r0, 0
/* 8004C9D8 00049918  40 82 00 5C */	bne .L_8004CA34
/* 8004C9DC 0004991C  38 60 00 40 */	li r3, 0x40
/* 8004C9E0 00049920  4B FD 74 C5 */	bl __nw__FUl
/* 8004C9E4 00049924  28 03 00 00 */	cmplwi r3, 0
/* 8004C9E8 00049928  41 82 00 1C */	beq .L_8004CA04
/* 8004C9EC 0004992C  88 83 00 3B */	lbz r4, 0x3b(r3)
/* 8004C9F0 00049930  38 00 00 00 */	li r0, 0
/* 8004C9F4 00049934  54 84 07 BC */	rlwinm r4, r4, 0, 0x1e, 0x1e
/* 8004C9F8 00049938  98 83 00 3B */	stb r4, 0x3b(r3)
/* 8004C9FC 0004993C  90 03 00 28 */	stw r0, 0x28(r3)
/* 8004CA00 00049940  90 03 00 20 */	stw r0, 0x20(r3)
.L_8004CA04:
/* 8004CA04 00049944  7C 7C F1 2E */	stwx r3, r28, r30
/* 8004CA08 00049948  7C 1C F0 2E */	lwzx r0, r28, r30
/* 8004CA0C 0004994C  28 00 00 00 */	cmplwi r0, 0
/* 8004CA10 00049950  40 82 00 0C */	bne .L_8004CA1C
/* 8004CA14 00049954  38 60 00 00 */	li r3, 0
/* 8004CA18 00049958  48 00 00 30 */	b .L_8004CA48
.L_8004CA1C:
/* 8004CA1C 0004995C  57 A0 06 3E */	clrlwi r0, r29, 0x18
/* 8004CA20 00049960  38 60 00 01 */	li r3, 1
/* 8004CA24 00049964  88 9C 00 B0 */	lbz r4, 0xb0(r28)
/* 8004CA28 00049968  7C 60 00 30 */	slw r0, r3, r0
/* 8004CA2C 0004996C  7C 80 03 78 */	or r0, r4, r0
/* 8004CA30 00049970  98 1C 00 B0 */	stb r0, 0xb0(r28)
.L_8004CA34:
/* 8004CA34 00049974  3B BD 00 01 */	addi r29, r29, 1
.L_8004CA38:
/* 8004CA38 00049978  57 A0 06 3E */	clrlwi r0, r29, 0x18
/* 8004CA3C 0004997C  7C 00 F8 40 */	cmplw r0, r31
/* 8004CA40 00049980  41 80 FF 74 */	blt .L_8004C9B4
/* 8004CA44 00049984  38 60 00 01 */	li r3, 1
.L_8004CA48:
/* 8004CA48 00049988  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8004CA4C 0004998C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8004CA50 00049990  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8004CA54 00049994  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8004CA58 00049998  83 81 00 10 */	lwz r28, 0x10(r1)
/* 8004CA5C 0004999C  7C 08 03 A6 */	mtlr r0
/* 8004CA60 000499A0  38 21 00 20 */	addi r1, r1, 0x20
/* 8004CA64 000499A4  4E 80 00 20 */	blr 
.endfn prepareTexture__12J2DTevBlock4FUc

.fn insertTexture__12J2DTevBlock4FUlPC7ResTIMGP10JUTPalette, global
/* 8004CA68 000499A8  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8004CA6C 000499AC  7C 08 02 A6 */	mflr r0
/* 8004CA70 000499B0  90 01 00 34 */	stw r0, 0x34(r1)
/* 8004CA74 000499B4  BF 21 00 14 */	stmw r25, 0x14(r1)
/* 8004CA78 000499B8  7C 9A 23 78 */	mr r26, r4
/* 8004CA7C 000499BC  28 1A 00 04 */	cmplwi r26, 4
/* 8004CA80 000499C0  7C 79 1B 78 */	mr r25, r3
/* 8004CA84 000499C4  7C BB 2B 78 */	mr r27, r5
/* 8004CA88 000499C8  7C DC 33 78 */	mr r28, r6
/* 8004CA8C 000499CC  40 80 00 0C */	bge .L_8004CA98
/* 8004CA90 000499D0  28 1B 00 00 */	cmplwi r27, 0
/* 8004CA94 000499D4  40 82 00 0C */	bne .L_8004CAA0
.L_8004CA98:
/* 8004CA98 000499D8  38 60 00 00 */	li r3, 0
/* 8004CA9C 000499DC  48 00 03 64 */	b .L_8004CE00
.L_8004CAA0:
/* 8004CAA0 000499E0  3B C0 00 00 */	li r30, 0
/* 8004CAA4 000499E4  48 00 00 28 */	b .L_8004CACC
.L_8004CAA8:
/* 8004CAA8 000499E8  57 C3 15 BA */	rlwinm r3, r30, 2, 0x16, 0x1d
/* 8004CAAC 000499EC  38 03 00 8C */	addi r0, r3, 0x8c
/* 8004CAB0 000499F0  7C 79 00 2E */	lwzx r3, r25, r0
/* 8004CAB4 000499F4  28 03 00 00 */	cmplwi r3, 0
/* 8004CAB8 000499F8  41 82 00 20 */	beq .L_8004CAD8
/* 8004CABC 000499FC  80 03 00 20 */	lwz r0, 0x20(r3)
/* 8004CAC0 00049A00  28 00 00 00 */	cmplwi r0, 0
/* 8004CAC4 00049A04  41 82 00 14 */	beq .L_8004CAD8
/* 8004CAC8 00049A08  3B DE 00 01 */	addi r30, r30, 1
.L_8004CACC:
/* 8004CACC 00049A0C  57 C0 06 3E */	clrlwi r0, r30, 0x18
/* 8004CAD0 00049A10  28 00 00 04 */	cmplwi r0, 4
/* 8004CAD4 00049A14  41 80 FF D4 */	blt .L_8004CAA8
.L_8004CAD8:
/* 8004CAD8 00049A18  57 C0 06 3E */	clrlwi r0, r30, 0x18
/* 8004CADC 00049A1C  7C 00 D0 40 */	cmplw r0, r26
/* 8004CAE0 00049A20  40 80 00 0C */	bge .L_8004CAEC
/* 8004CAE4 00049A24  38 60 00 00 */	li r3, 0
/* 8004CAE8 00049A28  48 00 03 18 */	b .L_8004CE00
.L_8004CAEC:
/* 8004CAEC 00049A2C  28 00 00 04 */	cmplwi r0, 4
/* 8004CAF0 00049A30  40 82 00 0C */	bne .L_8004CAFC
/* 8004CAF4 00049A34  38 60 00 00 */	li r3, 0
/* 8004CAF8 00049A38  48 00 03 08 */	b .L_8004CE00
.L_8004CAFC:
/* 8004CAFC 00049A3C  88 1B 00 08 */	lbz r0, 8(r27)
/* 8004CB00 00049A40  3B A0 00 00 */	li r29, 0
/* 8004CB04 00049A44  28 00 00 00 */	cmplwi r0, 0
/* 8004CB08 00049A48  41 82 00 B4 */	beq .L_8004CBBC
/* 8004CB0C 00049A4C  28 1C 00 00 */	cmplwi r28, 0
/* 8004CB10 00049A50  40 82 00 AC */	bne .L_8004CBBC
/* 8004CB14 00049A54  38 00 00 03 */	li r0, 3
/* 8004CB18 00049A58  7F 25 CB 78 */	mr r5, r25
/* 8004CB1C 00049A5C  38 E0 00 00 */	li r7, 0
/* 8004CB20 00049A60  7C 09 03 A6 */	mtctr r0
/* 8004CB24 00049A64  38 60 00 01 */	li r3, 1
.L_8004CB28:
/* 8004CB28 00049A68  80 C5 00 8C */	lwz r6, 0x8c(r5)
/* 8004CB2C 00049A6C  28 06 00 00 */	cmplwi r6, 0
/* 8004CB30 00049A70  41 82 00 4C */	beq .L_8004CB7C
/* 8004CB34 00049A74  80 86 00 20 */	lwz r4, 0x20(r6)
/* 8004CB38 00049A78  28 04 00 00 */	cmplwi r4, 0
/* 8004CB3C 00049A7C  41 82 00 40 */	beq .L_8004CB7C
/* 8004CB40 00049A80  88 04 00 08 */	lbz r0, 8(r4)
/* 8004CB44 00049A84  28 00 00 00 */	cmplwi r0, 0
/* 8004CB48 00049A88  41 82 00 34 */	beq .L_8004CB7C
/* 8004CB4C 00049A8C  88 86 00 3A */	lbz r4, 0x3a(r6)
/* 8004CB50 00049A90  38 00 00 00 */	li r0, 0
/* 8004CB54 00049A94  2C 04 00 10 */	cmpwi r4, 0x10
/* 8004CB58 00049A98  41 80 00 08 */	blt .L_8004CB60
/* 8004CB5C 00049A9C  38 00 00 10 */	li r0, 0x10
.L_8004CB60:
/* 8004CB60 00049AA0  7C 00 20 50 */	subf r0, r0, r4
/* 8004CB64 00049AA4  54 00 06 3E */	clrlwi r0, r0, 0x18
/* 8004CB68 00049AA8  28 00 00 04 */	cmplwi r0, 4
/* 8004CB6C 00049AAC  40 80 00 10 */	bge .L_8004CB7C
/* 8004CB70 00049AB0  7C 60 00 30 */	slw r0, r3, r0
/* 8004CB74 00049AB4  7C E0 03 78 */	or r0, r7, r0
/* 8004CB78 00049AB8  54 07 06 3E */	clrlwi r7, r0, 0x18
.L_8004CB7C:
/* 8004CB7C 00049ABC  38 A5 00 04 */	addi r5, r5, 4
/* 8004CB80 00049AC0  42 00 FF A8 */	bdnz .L_8004CB28
/* 8004CB84 00049AC4  54 E4 06 3E */	clrlwi r4, r7, 0x18
/* 8004CB88 00049AC8  38 A0 00 00 */	li r5, 0
/* 8004CB8C 00049ACC  38 60 00 01 */	li r3, 1
/* 8004CB90 00049AD0  48 00 00 20 */	b .L_8004CBB0
.L_8004CB94:
/* 8004CB94 00049AD4  54 A0 06 3E */	clrlwi r0, r5, 0x18
/* 8004CB98 00049AD8  7C 60 00 30 */	slw r0, r3, r0
/* 8004CB9C 00049ADC  7C 80 00 39 */	and. r0, r4, r0
/* 8004CBA0 00049AE0  40 82 00 0C */	bne .L_8004CBAC
/* 8004CBA4 00049AE4  7C BD 2B 78 */	mr r29, r5
/* 8004CBA8 00049AE8  48 00 00 14 */	b .L_8004CBBC
.L_8004CBAC:
/* 8004CBAC 00049AEC  38 A5 00 01 */	addi r5, r5, 1
.L_8004CBB0:
/* 8004CBB0 00049AF0  54 A0 06 3E */	clrlwi r0, r5, 0x18
/* 8004CBB4 00049AF4  28 00 00 04 */	cmplwi r0, 4
/* 8004CBB8 00049AF8  41 80 FF DC */	blt .L_8004CB94
.L_8004CBBC:
/* 8004CBBC 00049AFC  57 C0 15 BA */	rlwinm r0, r30, 2, 0x16, 0x1d
/* 8004CBC0 00049B00  7C 79 02 14 */	add r3, r25, r0
/* 8004CBC4 00049B04  83 E3 00 8C */	lwz r31, 0x8c(r3)
/* 8004CBC8 00049B08  28 1F 00 00 */	cmplwi r31, 0
/* 8004CBCC 00049B0C  40 82 00 EC */	bne .L_8004CCB8
/* 8004CBD0 00049B10  38 60 00 40 */	li r3, 0x40
/* 8004CBD4 00049B14  4B FD 72 D1 */	bl __nw__FUl
/* 8004CBD8 00049B18  7C 7F 1B 79 */	or. r31, r3, r3
/* 8004CBDC 00049B1C  41 82 00 24 */	beq .L_8004CC00
/* 8004CBE0 00049B20  38 00 00 00 */	li r0, 0
/* 8004CBE4 00049B24  7F 64 DB 78 */	mr r4, r27
/* 8004CBE8 00049B28  90 1F 00 28 */	stw r0, 0x28(r31)
/* 8004CBEC 00049B2C  7F A5 EB 78 */	mr r5, r29
/* 8004CBF0 00049B30  4B FE 64 95 */	bl storeTIMG__10JUTTextureFPC7ResTIMGUc
/* 8004CBF4 00049B34  88 1F 00 3B */	lbz r0, 0x3b(r31)
/* 8004CBF8 00049B38  54 00 07 BC */	rlwinm r0, r0, 0, 0x1e, 0x1e
/* 8004CBFC 00049B3C  98 1F 00 3B */	stb r0, 0x3b(r31)
.L_8004CC00:
/* 8004CC00 00049B40  28 1F 00 00 */	cmplwi r31, 0
/* 8004CC04 00049B44  40 82 00 0C */	bne .L_8004CC10
/* 8004CC08 00049B48  38 60 00 00 */	li r3, 0
/* 8004CC0C 00049B4C  48 00 01 F4 */	b .L_8004CE00
.L_8004CC10:
/* 8004CC10 00049B50  28 1C 00 00 */	cmplwi r28, 0
/* 8004CC14 00049B54  41 82 00 14 */	beq .L_8004CC28
/* 8004CC18 00049B58  7F E3 FB 78 */	mr r3, r31
/* 8004CC1C 00049B5C  7F 64 DB 78 */	mr r4, r27
/* 8004CC20 00049B60  7F 85 E3 78 */	mr r5, r28
/* 8004CC24 00049B64  4B FE 66 0D */	bl storeTIMG__10JUTTextureFPC7ResTIMGP10JUTPalette
.L_8004CC28:
/* 8004CC28 00049B68  39 00 00 03 */	li r8, 3
/* 8004CC2C 00049B6C  48 00 00 40 */	b .L_8004CC6C
.L_8004CC30:
/* 8004CC30 00049B70  54 83 10 3A */	slwi r3, r4, 2
/* 8004CC34 00049B74  55 00 15 BA */	rlwinm r0, r8, 2, 0x16, 0x1d
/* 8004CC38 00049B78  7C D9 1A 14 */	add r6, r25, r3
/* 8004CC3C 00049B7C  54 84 08 3C */	slwi r4, r4, 1
/* 8004CC40 00049B80  80 A6 00 88 */	lwz r5, 0x88(r6)
/* 8004CC44 00049B84  7C F9 02 14 */	add r7, r25, r0
/* 8004CC48 00049B88  55 03 0D FC */	rlwinm r3, r8, 1, 0x17, 0x1e
/* 8004CC4C 00049B8C  38 84 00 02 */	addi r4, r4, 2
/* 8004CC50 00049B90  90 A7 00 8C */	stw r5, 0x8c(r7)
/* 8004CC54 00049B94  38 03 00 04 */	addi r0, r3, 4
/* 8004CC58 00049B98  39 08 FF FF */	addi r8, r8, -1
/* 8004CC5C 00049B9C  80 66 00 98 */	lwz r3, 0x98(r6)
/* 8004CC60 00049BA0  90 67 00 9C */	stw r3, 0x9c(r7)
/* 8004CC64 00049BA4  7C 79 22 2E */	lhzx r3, r25, r4
/* 8004CC68 00049BA8  7C 79 03 2E */	sthx r3, r25, r0
.L_8004CC6C:
/* 8004CC6C 00049BAC  55 04 06 3E */	clrlwi r4, r8, 0x18
/* 8004CC70 00049BB0  7C 04 D0 40 */	cmplw r4, r26
/* 8004CC74 00049BB4  41 81 FF BC */	bgt .L_8004CC30
/* 8004CC78 00049BB8  57 40 10 3A */	slwi r0, r26, 2
/* 8004CC7C 00049BBC  7F 23 CB 78 */	mr r3, r25
/* 8004CC80 00049BC0  7C B9 02 14 */	add r5, r25, r0
/* 8004CC84 00049BC4  57 44 06 3E */	clrlwi r4, r26, 0x18
/* 8004CC88 00049BC8  93 E5 00 8C */	stw r31, 0x8c(r5)
/* 8004CC8C 00049BCC  38 A0 00 01 */	li r5, 1
/* 8004CC90 00049BD0  81 99 00 00 */	lwz r12, 0(r25)
/* 8004CC94 00049BD4  81 8C 00 AC */	lwz r12, 0xac(r12)
/* 8004CC98 00049BD8  7D 89 03 A6 */	mtctr r12
/* 8004CC9C 00049BDC  4E 80 04 21 */	bctrl 
/* 8004CCA0 00049BE0  38 00 00 01 */	li r0, 1
/* 8004CCA4 00049BE4  88 79 00 B0 */	lbz r3, 0xb0(r25)
/* 8004CCA8 00049BE8  7C 00 D0 30 */	slw r0, r0, r26
/* 8004CCAC 00049BEC  7C 60 03 78 */	or r0, r3, r0
/* 8004CCB0 00049BF0  98 19 00 B0 */	stb r0, 0xb0(r25)
/* 8004CCB4 00049BF4  48 00 01 24 */	b .L_8004CDD8
.L_8004CCB8:
/* 8004CCB8 00049BF8  28 1C 00 00 */	cmplwi r28, 0
/* 8004CCBC 00049BFC  40 82 00 18 */	bne .L_8004CCD4
/* 8004CCC0 00049C00  7F E3 FB 78 */	mr r3, r31
/* 8004CCC4 00049C04  7F 64 DB 78 */	mr r4, r27
/* 8004CCC8 00049C08  7F A5 EB 78 */	mr r5, r29
/* 8004CCCC 00049C0C  4B FE 63 B9 */	bl storeTIMG__10JUTTextureFPC7ResTIMGUc
/* 8004CCD0 00049C10  48 00 00 14 */	b .L_8004CCE4
.L_8004CCD4:
/* 8004CCD4 00049C14  7F E3 FB 78 */	mr r3, r31
/* 8004CCD8 00049C18  7F 64 DB 78 */	mr r4, r27
/* 8004CCDC 00049C1C  7F 85 E3 78 */	mr r5, r28
/* 8004CCE0 00049C20  4B FE 65 51 */	bl storeTIMG__10JUTTextureFPC7ResTIMGP10JUTPalette
.L_8004CCE4:
/* 8004CCE4 00049C24  88 19 00 B0 */	lbz r0, 0xb0(r25)
/* 8004CCE8 00049C28  7F CA F3 78 */	mr r10, r30
/* 8004CCEC 00049C2C  38 61 00 08 */	addi r3, r1, 8
/* 8004CCF0 00049C30  54 06 07 FE */	clrlwi r6, r0, 0x1f
/* 8004CCF4 00049C34  54 05 FF FE */	rlwinm r5, r0, 0x1f, 0x1f, 0x1f
/* 8004CCF8 00049C38  54 04 F7 FE */	rlwinm r4, r0, 0x1e, 0x1f, 0x1f
/* 8004CCFC 00049C3C  54 00 EF FE */	rlwinm r0, r0, 0x1d, 0x1f, 0x1f
/* 8004CD00 00049C40  98 C1 00 08 */	stb r6, 8(r1)
/* 8004CD04 00049C44  98 A1 00 09 */	stb r5, 9(r1)
/* 8004CD08 00049C48  98 81 00 0A */	stb r4, 0xa(r1)
/* 8004CD0C 00049C4C  98 01 00 0B */	stb r0, 0xb(r1)
/* 8004CD10 00049C50  48 00 00 50 */	b .L_8004CD60
.L_8004CD14:
/* 8004CD14 00049C54  54 E4 10 3A */	slwi r4, r7, 2
/* 8004CD18 00049C58  55 40 15 BA */	rlwinm r0, r10, 2, 0x16, 0x1d
/* 8004CD1C 00049C5C  7D 19 22 14 */	add r8, r25, r4
/* 8004CD20 00049C60  54 E5 08 3C */	slwi r5, r7, 1
/* 8004CD24 00049C64  80 C8 00 88 */	lwz r6, 0x88(r8)
/* 8004CD28 00049C68  7D 39 02 14 */	add r9, r25, r0
/* 8004CD2C 00049C6C  38 07 FF FF */	addi r0, r7, -1
/* 8004CD30 00049C70  55 44 0D FC */	rlwinm r4, r10, 1, 0x17, 0x1e
/* 8004CD34 00049C74  90 C9 00 8C */	stw r6, 0x8c(r9)
/* 8004CD38 00049C78  55 47 06 3E */	clrlwi r7, r10, 0x18
/* 8004CD3C 00049C7C  7C 03 00 AE */	lbzx r0, r3, r0
/* 8004CD40 00049C80  38 A5 00 02 */	addi r5, r5, 2
/* 8004CD44 00049C84  80 C8 00 98 */	lwz r6, 0x98(r8)
/* 8004CD48 00049C88  38 84 00 04 */	addi r4, r4, 4
/* 8004CD4C 00049C8C  7C 03 39 AE */	stbx r0, r3, r7
/* 8004CD50 00049C90  39 4A FF FF */	addi r10, r10, -1
/* 8004CD54 00049C94  90 C9 00 9C */	stw r6, 0x9c(r9)
/* 8004CD58 00049C98  7C 19 2A 2E */	lhzx r0, r25, r5
/* 8004CD5C 00049C9C  7C 19 23 2E */	sthx r0, r25, r4
.L_8004CD60:
/* 8004CD60 00049CA0  55 47 06 3E */	clrlwi r7, r10, 0x18
/* 8004CD64 00049CA4  7C 07 D0 40 */	cmplw r7, r26
/* 8004CD68 00049CA8  41 81 FF AC */	bgt .L_8004CD14
/* 8004CD6C 00049CAC  57 40 10 3A */	slwi r0, r26, 2
/* 8004CD70 00049CB0  38 A1 00 08 */	addi r5, r1, 8
/* 8004CD74 00049CB4  7C 79 02 14 */	add r3, r25, r0
/* 8004CD78 00049CB8  38 E0 00 00 */	li r7, 0
/* 8004CD7C 00049CBC  93 E3 00 8C */	stw r31, 0x8c(r3)
/* 8004CD80 00049CC0  38 60 00 01 */	li r3, 1
/* 8004CD84 00049CC4  88 19 00 B0 */	lbz r0, 0xb0(r25)
/* 8004CD88 00049CC8  54 00 06 30 */	rlwinm r0, r0, 0, 0x18, 0x18
/* 8004CD8C 00049CCC  98 19 00 B0 */	stb r0, 0xb0(r25)
/* 8004CD90 00049CD0  48 00 00 28 */	b .L_8004CDB8
.L_8004CD94:
/* 8004CD94 00049CD4  54 E6 06 3E */	clrlwi r6, r7, 0x18
/* 8004CD98 00049CD8  7C 05 30 AE */	lbzx r0, r5, r6
/* 8004CD9C 00049CDC  28 00 00 00 */	cmplwi r0, 0
/* 8004CDA0 00049CE0  41 82 00 14 */	beq .L_8004CDB4
/* 8004CDA4 00049CE4  88 99 00 B0 */	lbz r4, 0xb0(r25)
/* 8004CDA8 00049CE8  7C 60 30 30 */	slw r0, r3, r6
/* 8004CDAC 00049CEC  7C 80 03 78 */	or r0, r4, r0
/* 8004CDB0 00049CF0  98 19 00 B0 */	stb r0, 0xb0(r25)
.L_8004CDB4:
/* 8004CDB4 00049CF4  38 E7 00 01 */	addi r7, r7, 1
.L_8004CDB8:
/* 8004CDB8 00049CF8  54 E0 06 3E */	clrlwi r0, r7, 0x18
/* 8004CDBC 00049CFC  28 00 00 04 */	cmplwi r0, 4
/* 8004CDC0 00049D00  41 80 FF D4 */	blt .L_8004CD94
/* 8004CDC4 00049D04  38 00 00 01 */	li r0, 1
/* 8004CDC8 00049D08  88 79 00 B0 */	lbz r3, 0xb0(r25)
/* 8004CDCC 00049D0C  7C 00 D0 30 */	slw r0, r0, r26
/* 8004CDD0 00049D10  7C 60 03 78 */	or r0, r3, r0
/* 8004CDD4 00049D14  98 19 00 B0 */	stb r0, 0xb0(r25)
.L_8004CDD8:
/* 8004CDD8 00049D18  57 43 10 3A */	slwi r3, r26, 2
/* 8004CDDC 00049D1C  57 40 08 3C */	slwi r0, r26, 1
/* 8004CDE0 00049D20  7C 99 1A 14 */	add r4, r25, r3
/* 8004CDE4 00049D24  38 A0 00 00 */	li r5, 0
/* 8004CDE8 00049D28  3C 60 00 01 */	lis r3, 0x0000FFFF@ha
/* 8004CDEC 00049D2C  90 A4 00 9C */	stw r5, 0x9c(r4)
/* 8004CDF0 00049D30  38 83 FF FF */	addi r4, r3, 0x0000FFFF@l
/* 8004CDF4 00049D34  7C 79 02 14 */	add r3, r25, r0
/* 8004CDF8 00049D38  B0 83 00 04 */	sth r4, 4(r3)
/* 8004CDFC 00049D3C  38 60 00 01 */	li r3, 1
.L_8004CE00:
/* 8004CE00 00049D40  BB 21 00 14 */	lmw r25, 0x14(r1)
/* 8004CE04 00049D44  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8004CE08 00049D48  7C 08 03 A6 */	mtlr r0
/* 8004CE0C 00049D4C  38 21 00 30 */	addi r1, r1, 0x30
/* 8004CE10 00049D50  4E 80 00 20 */	blr 
.endfn insertTexture__12J2DTevBlock4FUlPC7ResTIMGP10JUTPalette

.fn insertTexture__12J2DTevBlock4FUlP10JUTTexture, global
/* 8004CE14 00049D54  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8004CE18 00049D58  7C 08 02 A6 */	mflr r0
/* 8004CE1C 00049D5C  90 01 00 24 */	stw r0, 0x24(r1)
/* 8004CE20 00049D60  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8004CE24 00049D64  7C BF 2B 78 */	mr r31, r5
/* 8004CE28 00049D68  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8004CE2C 00049D6C  7C 9E 23 78 */	mr r30, r4
/* 8004CE30 00049D70  28 1E 00 04 */	cmplwi r30, 4
/* 8004CE34 00049D74  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8004CE38 00049D78  7C 7D 1B 78 */	mr r29, r3
/* 8004CE3C 00049D7C  40 80 00 0C */	bge .L_8004CE48
/* 8004CE40 00049D80  28 1F 00 00 */	cmplwi r31, 0
/* 8004CE44 00049D84  40 82 00 0C */	bne .L_8004CE50
.L_8004CE48:
/* 8004CE48 00049D88  38 60 00 00 */	li r3, 0
/* 8004CE4C 00049D8C  48 00 01 44 */	b .L_8004CF90
.L_8004CE50:
/* 8004CE50 00049D90  38 80 00 00 */	li r4, 0
/* 8004CE54 00049D94  48 00 00 28 */	b .L_8004CE7C
.L_8004CE58:
/* 8004CE58 00049D98  54 83 15 BA */	rlwinm r3, r4, 2, 0x16, 0x1d
/* 8004CE5C 00049D9C  38 03 00 8C */	addi r0, r3, 0x8c
/* 8004CE60 00049DA0  7C 7D 00 2E */	lwzx r3, r29, r0
/* 8004CE64 00049DA4  28 03 00 00 */	cmplwi r3, 0
/* 8004CE68 00049DA8  41 82 00 20 */	beq .L_8004CE88
/* 8004CE6C 00049DAC  80 03 00 20 */	lwz r0, 0x20(r3)
/* 8004CE70 00049DB0  28 00 00 00 */	cmplwi r0, 0
/* 8004CE74 00049DB4  41 82 00 14 */	beq .L_8004CE88
/* 8004CE78 00049DB8  38 84 00 01 */	addi r4, r4, 1
.L_8004CE7C:
/* 8004CE7C 00049DBC  54 80 06 3E */	clrlwi r0, r4, 0x18
/* 8004CE80 00049DC0  28 00 00 04 */	cmplwi r0, 4
/* 8004CE84 00049DC4  41 80 FF D4 */	blt .L_8004CE58
.L_8004CE88:
/* 8004CE88 00049DC8  54 80 06 3E */	clrlwi r0, r4, 0x18
/* 8004CE8C 00049DCC  7C 00 F0 40 */	cmplw r0, r30
/* 8004CE90 00049DD0  40 80 00 0C */	bge .L_8004CE9C
/* 8004CE94 00049DD4  38 60 00 00 */	li r3, 0
/* 8004CE98 00049DD8  48 00 00 F8 */	b .L_8004CF90
.L_8004CE9C:
/* 8004CE9C 00049DDC  28 00 00 04 */	cmplwi r0, 4
/* 8004CEA0 00049DE0  40 82 00 0C */	bne .L_8004CEAC
/* 8004CEA4 00049DE4  38 60 00 00 */	li r3, 0
/* 8004CEA8 00049DE8  48 00 00 E8 */	b .L_8004CF90
.L_8004CEAC:
/* 8004CEAC 00049DEC  80 7D 00 98 */	lwz r3, 0x98(r29)
/* 8004CEB0 00049DF0  28 03 00 00 */	cmplwi r3, 0
/* 8004CEB4 00049DF4  41 82 00 30 */	beq .L_8004CEE4
/* 8004CEB8 00049DF8  80 03 00 20 */	lwz r0, 0x20(r3)
/* 8004CEBC 00049DFC  28 00 00 00 */	cmplwi r0, 0
/* 8004CEC0 00049E00  40 82 00 24 */	bne .L_8004CEE4
/* 8004CEC4 00049E04  88 1D 00 B0 */	lbz r0, 0xb0(r29)
/* 8004CEC8 00049E08  54 00 07 39 */	rlwinm. r0, r0, 0, 0x1c, 0x1c
/* 8004CECC 00049E0C  41 82 00 0C */	beq .L_8004CED8
/* 8004CED0 00049E10  38 80 00 01 */	li r4, 1
/* 8004CED4 00049E14  4B FE 61 3D */	bl __dt__10JUTTextureFv
.L_8004CED8:
/* 8004CED8 00049E18  88 1D 00 B0 */	lbz r0, 0xb0(r29)
/* 8004CEDC 00049E1C  54 00 07 76 */	rlwinm r0, r0, 0, 0x1d, 0x1b
/* 8004CEE0 00049E20  98 1D 00 B0 */	stb r0, 0xb0(r29)
.L_8004CEE4:
/* 8004CEE4 00049E24  39 00 00 03 */	li r8, 3
/* 8004CEE8 00049E28  48 00 00 40 */	b .L_8004CF28
.L_8004CEEC:
/* 8004CEEC 00049E2C  54 83 10 3A */	slwi r3, r4, 2
/* 8004CEF0 00049E30  55 00 15 BA */	rlwinm r0, r8, 2, 0x16, 0x1d
/* 8004CEF4 00049E34  7C DD 1A 14 */	add r6, r29, r3
/* 8004CEF8 00049E38  54 84 08 3C */	slwi r4, r4, 1
/* 8004CEFC 00049E3C  80 A6 00 88 */	lwz r5, 0x88(r6)
/* 8004CF00 00049E40  7C FD 02 14 */	add r7, r29, r0
/* 8004CF04 00049E44  55 03 0D FC */	rlwinm r3, r8, 1, 0x17, 0x1e
/* 8004CF08 00049E48  38 84 00 02 */	addi r4, r4, 2
/* 8004CF0C 00049E4C  90 A7 00 8C */	stw r5, 0x8c(r7)
/* 8004CF10 00049E50  38 03 00 04 */	addi r0, r3, 4
/* 8004CF14 00049E54  39 08 FF FF */	addi r8, r8, -1
/* 8004CF18 00049E58  80 66 00 98 */	lwz r3, 0x98(r6)
/* 8004CF1C 00049E5C  90 67 00 9C */	stw r3, 0x9c(r7)
/* 8004CF20 00049E60  7C 7D 22 2E */	lhzx r3, r29, r4
/* 8004CF24 00049E64  7C 7D 03 2E */	sthx r3, r29, r0
.L_8004CF28:
/* 8004CF28 00049E68  55 04 06 3E */	clrlwi r4, r8, 0x18
/* 8004CF2C 00049E6C  7C 04 F0 40 */	cmplw r4, r30
/* 8004CF30 00049E70  41 81 FF BC */	bgt .L_8004CEEC
/* 8004CF34 00049E74  57 C3 10 3A */	slwi r3, r30, 2
/* 8004CF38 00049E78  57 C0 08 3C */	slwi r0, r30, 1
/* 8004CF3C 00049E7C  7C BD 1A 14 */	add r5, r29, r3
/* 8004CF40 00049E80  3C 60 00 01 */	lis r3, 0x0000FFFF@ha
/* 8004CF44 00049E84  93 E5 00 8C */	stw r31, 0x8c(r5)
/* 8004CF48 00049E88  38 80 00 00 */	li r4, 0
/* 8004CF4C 00049E8C  38 E3 FF FF */	addi r7, r3, 0x0000FFFF@l
/* 8004CF50 00049E90  7C DD 02 14 */	add r6, r29, r0
/* 8004CF54 00049E94  90 85 00 9C */	stw r4, 0x9c(r5)
/* 8004CF58 00049E98  7F A3 EB 78 */	mr r3, r29
/* 8004CF5C 00049E9C  57 C4 06 3E */	clrlwi r4, r30, 0x18
/* 8004CF60 00049EA0  38 A0 00 01 */	li r5, 1
/* 8004CF64 00049EA4  B0 E6 00 04 */	sth r7, 4(r6)
/* 8004CF68 00049EA8  81 9D 00 00 */	lwz r12, 0(r29)
/* 8004CF6C 00049EAC  81 8C 00 AC */	lwz r12, 0xac(r12)
/* 8004CF70 00049EB0  7D 89 03 A6 */	mtctr r12
/* 8004CF74 00049EB4  4E 80 04 21 */	bctrl 
/* 8004CF78 00049EB8  38 00 00 01 */	li r0, 1
/* 8004CF7C 00049EBC  88 9D 00 B0 */	lbz r4, 0xb0(r29)
/* 8004CF80 00049EC0  7C 00 F0 30 */	slw r0, r0, r30
/* 8004CF84 00049EC4  38 60 00 01 */	li r3, 1
/* 8004CF88 00049EC8  7C 80 00 78 */	andc r0, r4, r0
/* 8004CF8C 00049ECC  98 1D 00 B0 */	stb r0, 0xb0(r29)
.L_8004CF90:
/* 8004CF90 00049ED0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8004CF94 00049ED4  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8004CF98 00049ED8  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8004CF9C 00049EDC  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8004CFA0 00049EE0  7C 08 03 A6 */	mtlr r0
/* 8004CFA4 00049EE4  38 21 00 20 */	addi r1, r1, 0x20
/* 8004CFA8 00049EE8  4E 80 00 20 */	blr 
.endfn insertTexture__12J2DTevBlock4FUlP10JUTTexture

.fn setTexture__12J2DTevBlock4FUlPC7ResTIMG, global
/* 8004CFAC 00049EEC  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8004CFB0 00049EF0  7C 08 02 A6 */	mflr r0
/* 8004CFB4 00049EF4  90 01 00 34 */	stw r0, 0x34(r1)
/* 8004CFB8 00049EF8  BF 21 00 14 */	stmw r25, 0x14(r1)
/* 8004CFBC 00049EFC  7C 9A 23 78 */	mr r26, r4
/* 8004CFC0 00049F00  28 1A 00 04 */	cmplwi r26, 4
/* 8004CFC4 00049F04  7C 79 1B 78 */	mr r25, r3
/* 8004CFC8 00049F08  7C BB 2B 78 */	mr r27, r5
/* 8004CFCC 00049F0C  41 80 00 0C */	blt .L_8004CFD8
/* 8004CFD0 00049F10  38 60 00 00 */	li r3, 0
/* 8004CFD4 00049F14  48 00 02 A8 */	b .L_8004D27C
.L_8004CFD8:
/* 8004CFD8 00049F18  28 1B 00 00 */	cmplwi r27, 0
/* 8004CFDC 00049F1C  3B 80 00 00 */	li r28, 0
/* 8004CFE0 00049F20  41 82 01 2C */	beq .L_8004D10C
/* 8004CFE4 00049F24  88 1B 00 08 */	lbz r0, 8(r27)
/* 8004CFE8 00049F28  28 00 00 00 */	cmplwi r0, 0
/* 8004CFEC 00049F2C  41 82 01 20 */	beq .L_8004D10C
/* 8004CFF0 00049F30  38 00 00 02 */	li r0, 2
/* 8004CFF4 00049F34  7F 24 CB 78 */	mr r4, r25
/* 8004CFF8 00049F38  38 C0 00 00 */	li r6, 0
/* 8004CFFC 00049F3C  38 E0 00 00 */	li r7, 0
/* 8004D000 00049F40  7C 09 03 A6 */	mtctr r0
.L_8004D004:
/* 8004D004 00049F44  7C 07 D0 40 */	cmplw r7, r26
/* 8004D008 00049F48  41 82 00 5C */	beq .L_8004D064
/* 8004D00C 00049F4C  80 A4 00 8C */	lwz r5, 0x8c(r4)
/* 8004D010 00049F50  28 05 00 00 */	cmplwi r5, 0
/* 8004D014 00049F54  41 82 00 50 */	beq .L_8004D064
/* 8004D018 00049F58  80 65 00 20 */	lwz r3, 0x20(r5)
/* 8004D01C 00049F5C  28 03 00 00 */	cmplwi r3, 0
/* 8004D020 00049F60  41 82 00 44 */	beq .L_8004D064
/* 8004D024 00049F64  88 03 00 08 */	lbz r0, 8(r3)
/* 8004D028 00049F68  28 00 00 00 */	cmplwi r0, 0
/* 8004D02C 00049F6C  41 82 00 38 */	beq .L_8004D064
/* 8004D030 00049F70  88 65 00 3A */	lbz r3, 0x3a(r5)
/* 8004D034 00049F74  38 00 00 00 */	li r0, 0
/* 8004D038 00049F78  2C 03 00 10 */	cmpwi r3, 0x10
/* 8004D03C 00049F7C  41 80 00 08 */	blt .L_8004D044
/* 8004D040 00049F80  38 00 00 10 */	li r0, 0x10
.L_8004D044:
/* 8004D044 00049F84  7C 00 18 50 */	subf r0, r0, r3
/* 8004D048 00049F88  54 03 06 3E */	clrlwi r3, r0, 0x18
/* 8004D04C 00049F8C  28 03 00 04 */	cmplwi r3, 4
/* 8004D050 00049F90  40 80 00 14 */	bge .L_8004D064
/* 8004D054 00049F94  38 00 00 01 */	li r0, 1
/* 8004D058 00049F98  7C 00 18 30 */	slw r0, r0, r3
/* 8004D05C 00049F9C  7C C0 03 78 */	or r0, r6, r0
/* 8004D060 00049FA0  54 06 06 3E */	clrlwi r6, r0, 0x18
.L_8004D064:
/* 8004D064 00049FA4  38 E7 00 01 */	addi r7, r7, 1
/* 8004D068 00049FA8  7C 07 D0 40 */	cmplw r7, r26
/* 8004D06C 00049FAC  41 82 00 5C */	beq .L_8004D0C8
/* 8004D070 00049FB0  80 A4 00 90 */	lwz r5, 0x90(r4)
/* 8004D074 00049FB4  28 05 00 00 */	cmplwi r5, 0
/* 8004D078 00049FB8  41 82 00 50 */	beq .L_8004D0C8
/* 8004D07C 00049FBC  80 65 00 20 */	lwz r3, 0x20(r5)
/* 8004D080 00049FC0  28 03 00 00 */	cmplwi r3, 0
/* 8004D084 00049FC4  41 82 00 44 */	beq .L_8004D0C8
/* 8004D088 00049FC8  88 03 00 08 */	lbz r0, 8(r3)
/* 8004D08C 00049FCC  28 00 00 00 */	cmplwi r0, 0
/* 8004D090 00049FD0  41 82 00 38 */	beq .L_8004D0C8
/* 8004D094 00049FD4  88 65 00 3A */	lbz r3, 0x3a(r5)
/* 8004D098 00049FD8  38 00 00 00 */	li r0, 0
/* 8004D09C 00049FDC  2C 03 00 10 */	cmpwi r3, 0x10
/* 8004D0A0 00049FE0  41 80 00 08 */	blt .L_8004D0A8
/* 8004D0A4 00049FE4  38 00 00 10 */	li r0, 0x10
.L_8004D0A8:
/* 8004D0A8 00049FE8  7C 00 18 50 */	subf r0, r0, r3
/* 8004D0AC 00049FEC  54 03 06 3E */	clrlwi r3, r0, 0x18
/* 8004D0B0 00049FF0  28 03 00 04 */	cmplwi r3, 4
/* 8004D0B4 00049FF4  40 80 00 14 */	bge .L_8004D0C8
/* 8004D0B8 00049FF8  38 00 00 01 */	li r0, 1
/* 8004D0BC 00049FFC  7C 00 18 30 */	slw r0, r0, r3
/* 8004D0C0 0004A000  7C C0 03 78 */	or r0, r6, r0
/* 8004D0C4 0004A004  54 06 06 3E */	clrlwi r6, r0, 0x18
.L_8004D0C8:
/* 8004D0C8 0004A008  38 84 00 08 */	addi r4, r4, 8
/* 8004D0CC 0004A00C  38 E7 00 01 */	addi r7, r7, 1
/* 8004D0D0 0004A010  42 00 FF 34 */	bdnz .L_8004D004
/* 8004D0D4 0004A014  54 C4 06 3E */	clrlwi r4, r6, 0x18
/* 8004D0D8 0004A018  38 A0 00 00 */	li r5, 0
/* 8004D0DC 0004A01C  38 60 00 01 */	li r3, 1
/* 8004D0E0 0004A020  48 00 00 20 */	b .L_8004D100
.L_8004D0E4:
/* 8004D0E4 0004A024  54 A0 06 3E */	clrlwi r0, r5, 0x18
/* 8004D0E8 0004A028  7C 60 00 30 */	slw r0, r3, r0
/* 8004D0EC 0004A02C  7C 80 00 39 */	and. r0, r4, r0
/* 8004D0F0 0004A030  40 82 00 0C */	bne .L_8004D0FC
/* 8004D0F4 0004A034  7C BC 2B 78 */	mr r28, r5
/* 8004D0F8 0004A038  48 00 00 14 */	b .L_8004D10C
.L_8004D0FC:
/* 8004D0FC 0004A03C  38 A5 00 01 */	addi r5, r5, 1
.L_8004D100:
/* 8004D100 0004A040  54 A0 06 3E */	clrlwi r0, r5, 0x18
/* 8004D104 0004A044  28 00 00 04 */	cmplwi r0, 4
/* 8004D108 0004A048  41 80 FF DC */	blt .L_8004D0E4
.L_8004D10C:
/* 8004D10C 0004A04C  57 5D 10 3A */	slwi r29, r26, 2
/* 8004D110 0004A050  7F F9 EA 14 */	add r31, r25, r29
/* 8004D114 0004A054  80 7F 00 8C */	lwz r3, 0x8c(r31)
/* 8004D118 0004A058  28 03 00 00 */	cmplwi r3, 0
/* 8004D11C 0004A05C  40 82 00 84 */	bne .L_8004D1A0
/* 8004D120 0004A060  28 1B 00 00 */	cmplwi r27, 0
/* 8004D124 0004A064  41 82 00 64 */	beq .L_8004D188
/* 8004D128 0004A068  38 60 00 40 */	li r3, 0x40
/* 8004D12C 0004A06C  4B FD 6D 79 */	bl __nw__FUl
/* 8004D130 0004A070  7C 7E 1B 79 */	or. r30, r3, r3
/* 8004D134 0004A074  41 82 00 24 */	beq .L_8004D158
/* 8004D138 0004A078  38 00 00 00 */	li r0, 0
/* 8004D13C 0004A07C  7F 64 DB 78 */	mr r4, r27
/* 8004D140 0004A080  90 1E 00 28 */	stw r0, 0x28(r30)
/* 8004D144 0004A084  7F 85 E3 78 */	mr r5, r28
/* 8004D148 0004A088  4B FE 5F 3D */	bl storeTIMG__10JUTTextureFPC7ResTIMGUc
/* 8004D14C 0004A08C  88 1E 00 3B */	lbz r0, 0x3b(r30)
/* 8004D150 0004A090  54 00 07 BC */	rlwinm r0, r0, 0, 0x1e, 0x1e
/* 8004D154 0004A094  98 1E 00 3B */	stb r0, 0x3b(r30)
.L_8004D158:
/* 8004D158 0004A098  93 DF 00 8C */	stw r30, 0x8c(r31)
/* 8004D15C 0004A09C  80 1F 00 8C */	lwz r0, 0x8c(r31)
/* 8004D160 0004A0A0  28 00 00 00 */	cmplwi r0, 0
/* 8004D164 0004A0A4  40 82 00 0C */	bne .L_8004D170
/* 8004D168 0004A0A8  38 60 00 00 */	li r3, 0
/* 8004D16C 0004A0AC  48 00 01 10 */	b .L_8004D27C
.L_8004D170:
/* 8004D170 0004A0B0  38 00 00 01 */	li r0, 1
/* 8004D174 0004A0B4  88 79 00 B0 */	lbz r3, 0xb0(r25)
/* 8004D178 0004A0B8  7C 00 D0 30 */	slw r0, r0, r26
/* 8004D17C 0004A0BC  7C 60 03 78 */	or r0, r3, r0
/* 8004D180 0004A0C0  98 19 00 B0 */	stb r0, 0xb0(r25)
/* 8004D184 0004A0C4  48 00 00 CC */	b .L_8004D250
.L_8004D188:
/* 8004D188 0004A0C8  38 00 00 01 */	li r0, 1
/* 8004D18C 0004A0CC  88 79 00 B0 */	lbz r3, 0xb0(r25)
/* 8004D190 0004A0D0  7C 00 D0 30 */	slw r0, r0, r26
/* 8004D194 0004A0D4  7C 60 00 78 */	andc r0, r3, r0
/* 8004D198 0004A0D8  98 19 00 B0 */	stb r0, 0xb0(r25)
/* 8004D19C 0004A0DC  48 00 00 B4 */	b .L_8004D250
.L_8004D1A0:
/* 8004D1A0 0004A0E0  38 00 00 01 */	li r0, 1
/* 8004D1A4 0004A0E4  88 99 00 B0 */	lbz r4, 0xb0(r25)
/* 8004D1A8 0004A0E8  7C 1E D0 30 */	slw r30, r0, r26
/* 8004D1AC 0004A0EC  7C 80 F0 39 */	and. r0, r4, r30
/* 8004D1B0 0004A0F0  41 82 00 3C */	beq .L_8004D1EC
/* 8004D1B4 0004A0F4  28 1B 00 00 */	cmplwi r27, 0
/* 8004D1B8 0004A0F8  41 82 00 14 */	beq .L_8004D1CC
/* 8004D1BC 0004A0FC  7F 64 DB 78 */	mr r4, r27
/* 8004D1C0 0004A100  7F 85 E3 78 */	mr r5, r28
/* 8004D1C4 0004A104  4B FE 5E C1 */	bl storeTIMG__10JUTTextureFPC7ResTIMGUc
/* 8004D1C8 0004A108  48 00 00 88 */	b .L_8004D250
.L_8004D1CC:
/* 8004D1CC 0004A10C  38 80 00 01 */	li r4, 1
/* 8004D1D0 0004A110  4B FE 5E 41 */	bl __dt__10JUTTextureFv
/* 8004D1D4 0004A114  38 00 00 00 */	li r0, 0
/* 8004D1D8 0004A118  90 1F 00 8C */	stw r0, 0x8c(r31)
/* 8004D1DC 0004A11C  88 19 00 B0 */	lbz r0, 0xb0(r25)
/* 8004D1E0 0004A120  7C 00 F0 78 */	andc r0, r0, r30
/* 8004D1E4 0004A124  98 19 00 B0 */	stb r0, 0xb0(r25)
/* 8004D1E8 0004A128  48 00 00 68 */	b .L_8004D250
.L_8004D1EC:
/* 8004D1EC 0004A12C  38 00 00 00 */	li r0, 0
/* 8004D1F0 0004A130  28 1B 00 00 */	cmplwi r27, 0
/* 8004D1F4 0004A134  90 1F 00 8C */	stw r0, 0x8c(r31)
/* 8004D1F8 0004A138  41 82 00 58 */	beq .L_8004D250
/* 8004D1FC 0004A13C  38 60 00 40 */	li r3, 0x40
/* 8004D200 0004A140  4B FD 6C A5 */	bl __nw__FUl
/* 8004D204 0004A144  7C 7C 1B 79 */	or. r28, r3, r3
/* 8004D208 0004A148  41 82 00 24 */	beq .L_8004D22C
/* 8004D20C 0004A14C  38 00 00 00 */	li r0, 0
/* 8004D210 0004A150  7F 64 DB 78 */	mr r4, r27
/* 8004D214 0004A154  90 1C 00 28 */	stw r0, 0x28(r28)
/* 8004D218 0004A158  38 A0 00 00 */	li r5, 0
/* 8004D21C 0004A15C  4B FE 5E 69 */	bl storeTIMG__10JUTTextureFPC7ResTIMGUc
/* 8004D220 0004A160  88 1C 00 3B */	lbz r0, 0x3b(r28)
/* 8004D224 0004A164  54 00 07 BC */	rlwinm r0, r0, 0, 0x1e, 0x1e
/* 8004D228 0004A168  98 1C 00 3B */	stb r0, 0x3b(r28)
.L_8004D22C:
/* 8004D22C 0004A16C  93 9F 00 8C */	stw r28, 0x8c(r31)
/* 8004D230 0004A170  80 1F 00 8C */	lwz r0, 0x8c(r31)
/* 8004D234 0004A174  28 00 00 00 */	cmplwi r0, 0
/* 8004D238 0004A178  40 82 00 0C */	bne .L_8004D244
/* 8004D23C 0004A17C  38 60 00 00 */	li r3, 0
/* 8004D240 0004A180  48 00 00 3C */	b .L_8004D27C
.L_8004D244:
/* 8004D244 0004A184  88 19 00 B0 */	lbz r0, 0xb0(r25)
/* 8004D248 0004A188  7C 00 F3 78 */	or r0, r0, r30
/* 8004D24C 0004A18C  98 19 00 B0 */	stb r0, 0xb0(r25)
.L_8004D250:
/* 8004D250 0004A190  7F 79 EA 14 */	add r27, r25, r29
/* 8004D254 0004A194  80 7B 00 9C */	lwz r3, 0x9c(r27)
/* 8004D258 0004A198  4B FD 6E 5D */	bl __dl__FPv
/* 8004D25C 0004A19C  38 80 00 00 */	li r4, 0
/* 8004D260 0004A1A0  57 40 08 3C */	slwi r0, r26, 1
/* 8004D264 0004A1A4  3C 60 00 01 */	lis r3, 0x0000FFFF@ha
/* 8004D268 0004A1A8  90 9B 00 9C */	stw r4, 0x9c(r27)
/* 8004D26C 0004A1AC  38 83 FF FF */	addi r4, r3, 0x0000FFFF@l
/* 8004D270 0004A1B0  7C 79 02 14 */	add r3, r25, r0
/* 8004D274 0004A1B4  B0 83 00 04 */	sth r4, 4(r3)
/* 8004D278 0004A1B8  38 60 00 01 */	li r3, 1
.L_8004D27C:
/* 8004D27C 0004A1BC  BB 21 00 14 */	lmw r25, 0x14(r1)
/* 8004D280 0004A1C0  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8004D284 0004A1C4  7C 08 03 A6 */	mtlr r0
/* 8004D288 0004A1C8  38 21 00 30 */	addi r1, r1, 0x30
/* 8004D28C 0004A1CC  4E 80 00 20 */	blr 
.endfn setTexture__12J2DTevBlock4FUlPC7ResTIMG

.fn setTexture__12J2DTevBlock4FUlP10JUTTexture, global
/* 8004D290 0004A1D0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8004D294 0004A1D4  7C 08 02 A6 */	mflr r0
/* 8004D298 0004A1D8  90 01 00 24 */	stw r0, 0x24(r1)
/* 8004D29C 0004A1DC  BF 61 00 0C */	stmw r27, 0xc(r1)
/* 8004D2A0 0004A1E0  7C 9C 23 78 */	mr r28, r4
/* 8004D2A4 0004A1E4  28 1C 00 04 */	cmplwi r28, 4
/* 8004D2A8 0004A1E8  7C 7B 1B 78 */	mr r27, r3
/* 8004D2AC 0004A1EC  7C BD 2B 78 */	mr r29, r5
/* 8004D2B0 0004A1F0  41 80 00 0C */	blt .L_8004D2BC
/* 8004D2B4 0004A1F4  38 60 00 00 */	li r3, 0
/* 8004D2B8 0004A1F8  48 00 00 6C */	b .L_8004D324
.L_8004D2BC:
/* 8004D2BC 0004A1FC  38 00 00 01 */	li r0, 1
/* 8004D2C0 0004A200  88 7B 00 B0 */	lbz r3, 0xb0(r27)
/* 8004D2C4 0004A204  7C 1E E0 30 */	slw r30, r0, r28
/* 8004D2C8 0004A208  7C 60 F0 39 */	and. r0, r3, r30
/* 8004D2CC 0004A20C  41 82 00 18 */	beq .L_8004D2E4
/* 8004D2D0 0004A210  57 80 10 3A */	slwi r0, r28, 2
/* 8004D2D4 0004A214  38 80 00 01 */	li r4, 1
/* 8004D2D8 0004A218  7C 7B 02 14 */	add r3, r27, r0
/* 8004D2DC 0004A21C  80 63 00 8C */	lwz r3, 0x8c(r3)
/* 8004D2E0 0004A220  4B FE 5D 31 */	bl __dt__10JUTTextureFv
.L_8004D2E4:
/* 8004D2E4 0004A224  57 80 10 3A */	slwi r0, r28, 2
/* 8004D2E8 0004A228  7F FB 02 14 */	add r31, r27, r0
/* 8004D2EC 0004A22C  93 BF 00 8C */	stw r29, 0x8c(r31)
/* 8004D2F0 0004A230  88 1B 00 B0 */	lbz r0, 0xb0(r27)
/* 8004D2F4 0004A234  7C 00 F0 78 */	andc r0, r0, r30
/* 8004D2F8 0004A238  98 1B 00 B0 */	stb r0, 0xb0(r27)
/* 8004D2FC 0004A23C  80 7F 00 9C */	lwz r3, 0x9c(r31)
/* 8004D300 0004A240  4B FD 6D B5 */	bl __dl__FPv
/* 8004D304 0004A244  38 80 00 00 */	li r4, 0
/* 8004D308 0004A248  57 80 08 3C */	slwi r0, r28, 1
/* 8004D30C 0004A24C  3C 60 00 01 */	lis r3, 0x0000FFFF@ha
/* 8004D310 0004A250  90 9F 00 9C */	stw r4, 0x9c(r31)
/* 8004D314 0004A254  38 83 FF FF */	addi r4, r3, 0x0000FFFF@l
/* 8004D318 0004A258  7C 7B 02 14 */	add r3, r27, r0
/* 8004D31C 0004A25C  B0 83 00 04 */	sth r4, 4(r3)
/* 8004D320 0004A260  38 60 00 01 */	li r3, 1
.L_8004D324:
/* 8004D324 0004A264  BB 61 00 0C */	lmw r27, 0xc(r1)
/* 8004D328 0004A268  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8004D32C 0004A26C  7C 08 03 A6 */	mtlr r0
/* 8004D330 0004A270  38 21 00 20 */	addi r1, r1, 0x20
/* 8004D334 0004A274  4E 80 00 20 */	blr 
.endfn setTexture__12J2DTevBlock4FUlP10JUTTexture

.fn removeTexture__12J2DTevBlock4FUl, global
/* 8004D338 0004A278  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8004D33C 0004A27C  7C 08 02 A6 */	mflr r0
/* 8004D340 0004A280  90 01 00 24 */	stw r0, 0x24(r1)
/* 8004D344 0004A284  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8004D348 0004A288  7C 9F 23 78 */	mr r31, r4
/* 8004D34C 0004A28C  28 1F 00 04 */	cmplwi r31, 4
/* 8004D350 0004A290  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8004D354 0004A294  7C 7E 1B 78 */	mr r30, r3
/* 8004D358 0004A298  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8004D35C 0004A29C  41 80 00 0C */	blt .L_8004D368
/* 8004D360 0004A2A0  38 60 00 00 */	li r3, 0
/* 8004D364 0004A2A4  48 00 01 C8 */	b .L_8004D52C
.L_8004D368:
/* 8004D368 0004A2A8  38 00 00 01 */	li r0, 1
/* 8004D36C 0004A2AC  88 7E 00 B0 */	lbz r3, 0xb0(r30)
/* 8004D370 0004A2B0  7C 00 F8 30 */	slw r0, r0, r31
/* 8004D374 0004A2B4  7C 60 00 39 */	and. r0, r3, r0
/* 8004D378 0004A2B8  41 82 00 18 */	beq .L_8004D390
/* 8004D37C 0004A2BC  57 E0 10 3A */	slwi r0, r31, 2
/* 8004D380 0004A2C0  38 80 00 01 */	li r4, 1
/* 8004D384 0004A2C4  7C 7E 02 14 */	add r3, r30, r0
/* 8004D388 0004A2C8  80 63 00 8C */	lwz r3, 0x8c(r3)
/* 8004D38C 0004A2CC  4B FE 5C 85 */	bl __dt__10JUTTextureFv
.L_8004D390:
/* 8004D390 0004A2D0  57 FD 10 3A */	slwi r29, r31, 2
/* 8004D394 0004A2D4  7C 7E EA 14 */	add r3, r30, r29
/* 8004D398 0004A2D8  80 63 00 9C */	lwz r3, 0x9c(r3)
/* 8004D39C 0004A2DC  4B FD 6D 19 */	bl __dl__FPv
/* 8004D3A0 0004A2E0  28 1F 00 03 */	cmplwi r31, 3
/* 8004D3A4 0004A2E4  7F E5 FB 78 */	mr r5, r31
/* 8004D3A8 0004A2E8  40 80 01 4C */	bge .L_8004D4F4
/* 8004D3AC 0004A2EC  20 1F 00 03 */	subfic r0, r31, 3
/* 8004D3B0 0004A2F0  28 00 00 08 */	cmplwi r0, 8
/* 8004D3B4 0004A2F4  40 81 00 FC */	ble .L_8004D4B0
/* 8004D3B8 0004A2F8  20 1F 00 02 */	subfic r0, r31, 2
/* 8004D3BC 0004A2FC  57 E4 08 3C */	slwi r4, r31, 1
/* 8004D3C0 0004A300  54 00 E8 FE */	srwi r0, r0, 3
/* 8004D3C4 0004A304  7C 7E EA 14 */	add r3, r30, r29
/* 8004D3C8 0004A308  7C 9E 22 14 */	add r4, r30, r4
/* 8004D3CC 0004A30C  7C 09 03 A6 */	mtctr r0
/* 8004D3D0 0004A310  3C C0 00 00 */	lis r6, 0x-0000005@ha
/* 8004D3D4 0004A314  38 C6 FF FB */	addi r6, r6, 0x-0000005@l
/* 8004D3D8 0004A318  7C 1F 30 40 */	cmplw r31, r6
/* 8004D3DC 0004A31C  40 80 00 D4 */	bge .L_8004D4B0
.L_8004D3E0:
/* 8004D3E0 0004A320  80 03 00 90 */	lwz r0, 0x90(r3)
/* 8004D3E4 0004A324  38 A5 00 08 */	addi r5, r5, 8
/* 8004D3E8 0004A328  90 03 00 8C */	stw r0, 0x8c(r3)
/* 8004D3EC 0004A32C  80 03 00 A0 */	lwz r0, 0xa0(r3)
/* 8004D3F0 0004A330  90 03 00 9C */	stw r0, 0x9c(r3)
/* 8004D3F4 0004A334  A0 04 00 06 */	lhz r0, 6(r4)
/* 8004D3F8 0004A338  B0 04 00 04 */	sth r0, 4(r4)
/* 8004D3FC 0004A33C  80 03 00 94 */	lwz r0, 0x94(r3)
/* 8004D400 0004A340  90 03 00 90 */	stw r0, 0x90(r3)
/* 8004D404 0004A344  80 03 00 A4 */	lwz r0, 0xa4(r3)
/* 8004D408 0004A348  90 03 00 A0 */	stw r0, 0xa0(r3)
/* 8004D40C 0004A34C  A0 04 00 08 */	lhz r0, 8(r4)
/* 8004D410 0004A350  B0 04 00 06 */	sth r0, 6(r4)
/* 8004D414 0004A354  80 03 00 98 */	lwz r0, 0x98(r3)
/* 8004D418 0004A358  90 03 00 94 */	stw r0, 0x94(r3)
/* 8004D41C 0004A35C  80 03 00 A8 */	lwz r0, 0xa8(r3)
/* 8004D420 0004A360  90 03 00 A4 */	stw r0, 0xa4(r3)
/* 8004D424 0004A364  A0 04 00 0A */	lhz r0, 0xa(r4)
/* 8004D428 0004A368  B0 04 00 08 */	sth r0, 8(r4)
/* 8004D42C 0004A36C  80 03 00 9C */	lwz r0, 0x9c(r3)
/* 8004D430 0004A370  90 03 00 98 */	stw r0, 0x98(r3)
/* 8004D434 0004A374  80 03 00 AC */	lwz r0, 0xac(r3)
/* 8004D438 0004A378  90 03 00 A8 */	stw r0, 0xa8(r3)
/* 8004D43C 0004A37C  A0 04 00 0C */	lhz r0, 0xc(r4)
/* 8004D440 0004A380  B0 04 00 0A */	sth r0, 0xa(r4)
/* 8004D444 0004A384  80 03 00 A0 */	lwz r0, 0xa0(r3)
/* 8004D448 0004A388  90 03 00 9C */	stw r0, 0x9c(r3)
/* 8004D44C 0004A38C  80 03 00 B0 */	lwz r0, 0xb0(r3)
/* 8004D450 0004A390  90 03 00 AC */	stw r0, 0xac(r3)
/* 8004D454 0004A394  A0 04 00 0E */	lhz r0, 0xe(r4)
/* 8004D458 0004A398  B0 04 00 0C */	sth r0, 0xc(r4)
/* 8004D45C 0004A39C  80 03 00 A4 */	lwz r0, 0xa4(r3)
/* 8004D460 0004A3A0  90 03 00 A0 */	stw r0, 0xa0(r3)
/* 8004D464 0004A3A4  80 03 00 B4 */	lwz r0, 0xb4(r3)
/* 8004D468 0004A3A8  90 03 00 B0 */	stw r0, 0xb0(r3)
/* 8004D46C 0004A3AC  A0 04 00 10 */	lhz r0, 0x10(r4)
/* 8004D470 0004A3B0  B0 04 00 0E */	sth r0, 0xe(r4)
/* 8004D474 0004A3B4  80 03 00 A8 */	lwz r0, 0xa8(r3)
/* 8004D478 0004A3B8  90 03 00 A4 */	stw r0, 0xa4(r3)
/* 8004D47C 0004A3BC  80 03 00 B8 */	lwz r0, 0xb8(r3)
/* 8004D480 0004A3C0  90 03 00 B4 */	stw r0, 0xb4(r3)
/* 8004D484 0004A3C4  A0 04 00 12 */	lhz r0, 0x12(r4)
/* 8004D488 0004A3C8  B0 04 00 10 */	sth r0, 0x10(r4)
/* 8004D48C 0004A3CC  80 03 00 AC */	lwz r0, 0xac(r3)
/* 8004D490 0004A3D0  90 03 00 A8 */	stw r0, 0xa8(r3)
/* 8004D494 0004A3D4  80 03 00 BC */	lwz r0, 0xbc(r3)
/* 8004D498 0004A3D8  90 03 00 B8 */	stw r0, 0xb8(r3)
/* 8004D49C 0004A3DC  38 63 00 20 */	addi r3, r3, 0x20
/* 8004D4A0 0004A3E0  A0 04 00 14 */	lhz r0, 0x14(r4)
/* 8004D4A4 0004A3E4  B0 04 00 12 */	sth r0, 0x12(r4)
/* 8004D4A8 0004A3E8  38 84 00 10 */	addi r4, r4, 0x10
/* 8004D4AC 0004A3EC  42 00 FF 34 */	bdnz .L_8004D3E0
.L_8004D4B0:
/* 8004D4B0 0004A3F0  54 A4 10 3A */	slwi r4, r5, 2
/* 8004D4B4 0004A3F4  54 A3 08 3C */	slwi r3, r5, 1
/* 8004D4B8 0004A3F8  20 05 00 03 */	subfic r0, r5, 3
/* 8004D4BC 0004A3FC  7C 9E 22 14 */	add r4, r30, r4
/* 8004D4C0 0004A400  7C 7E 1A 14 */	add r3, r30, r3
/* 8004D4C4 0004A404  7C 09 03 A6 */	mtctr r0
/* 8004D4C8 0004A408  28 05 00 03 */	cmplwi r5, 3
/* 8004D4CC 0004A40C  40 80 00 28 */	bge .L_8004D4F4
.L_8004D4D0:
/* 8004D4D0 0004A410  80 04 00 90 */	lwz r0, 0x90(r4)
/* 8004D4D4 0004A414  90 04 00 8C */	stw r0, 0x8c(r4)
/* 8004D4D8 0004A418  80 04 00 A0 */	lwz r0, 0xa0(r4)
/* 8004D4DC 0004A41C  90 04 00 9C */	stw r0, 0x9c(r4)
/* 8004D4E0 0004A420  38 84 00 04 */	addi r4, r4, 4
/* 8004D4E4 0004A424  A0 03 00 06 */	lhz r0, 6(r3)
/* 8004D4E8 0004A428  B0 03 00 04 */	sth r0, 4(r3)
/* 8004D4EC 0004A42C  38 63 00 02 */	addi r3, r3, 2
/* 8004D4F0 0004A430  42 00 FF E0 */	bdnz .L_8004D4D0
.L_8004D4F4:
/* 8004D4F4 0004A434  38 A0 00 00 */	li r5, 0
/* 8004D4F8 0004A438  3C 60 00 01 */	lis r3, 0x0000FFFF@ha
/* 8004D4FC 0004A43C  90 BE 00 98 */	stw r5, 0x98(r30)
/* 8004D500 0004A440  38 03 FF FF */	addi r0, r3, 0x0000FFFF@l
/* 8004D504 0004A444  7F C3 F3 78 */	mr r3, r30
/* 8004D508 0004A448  57 E4 06 3E */	clrlwi r4, r31, 0x18
/* 8004D50C 0004A44C  90 BE 00 A8 */	stw r5, 0xa8(r30)
/* 8004D510 0004A450  38 A0 00 00 */	li r5, 0
/* 8004D514 0004A454  B0 1E 00 0A */	sth r0, 0xa(r30)
/* 8004D518 0004A458  81 9E 00 00 */	lwz r12, 0(r30)
/* 8004D51C 0004A45C  81 8C 00 AC */	lwz r12, 0xac(r12)
/* 8004D520 0004A460  7D 89 03 A6 */	mtctr r12
/* 8004D524 0004A464  4E 80 04 21 */	bctrl 
/* 8004D528 0004A468  38 60 00 01 */	li r3, 1
.L_8004D52C:
/* 8004D52C 0004A46C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8004D530 0004A470  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8004D534 0004A474  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8004D538 0004A478  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8004D53C 0004A47C  7C 08 03 A6 */	mtlr r0
/* 8004D540 0004A480  38 21 00 20 */	addi r1, r1, 0x20
/* 8004D544 0004A484  4E 80 00 20 */	blr 
.endfn removeTexture__12J2DTevBlock4FUl

.fn setFont__12J2DTevBlock4FP7ResFONT, global
/* 8004D548 0004A488  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8004D54C 0004A48C  7C 08 02 A6 */	mflr r0
/* 8004D550 0004A490  90 01 00 24 */	stw r0, 0x24(r1)
/* 8004D554 0004A494  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8004D558 0004A498  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8004D55C 0004A49C  7C 9E 23 79 */	or. r30, r4, r4
/* 8004D560 0004A4A0  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8004D564 0004A4A4  7C 7D 1B 78 */	mr r29, r3
/* 8004D568 0004A4A8  40 82 00 0C */	bne .L_8004D574
/* 8004D56C 0004A4AC  38 60 00 00 */	li r3, 0
/* 8004D570 0004A4B0  48 00 00 78 */	b .L_8004D5E8
.L_8004D574:
/* 8004D574 0004A4B4  38 60 00 70 */	li r3, 0x70
/* 8004D578 0004A4B8  4B FD 69 2D */	bl __nw__FUl
/* 8004D57C 0004A4BC  7C 7F 1B 79 */	or. r31, r3, r3
/* 8004D580 0004A4C0  41 82 00 14 */	beq .L_8004D594
/* 8004D584 0004A4C4  7F C4 F3 78 */	mr r4, r30
/* 8004D588 0004A4C8  38 A0 00 00 */	li r5, 0
/* 8004D58C 0004A4CC  4B FE 3C 41 */	bl __ct__10JUTResFontFPC7ResFONTP7JKRHeap
/* 8004D590 0004A4D0  7C 7F 1B 78 */	mr r31, r3
.L_8004D594:
/* 8004D594 0004A4D4  28 1F 00 00 */	cmplwi r31, 0
/* 8004D598 0004A4D8  40 82 00 0C */	bne .L_8004D5A4
/* 8004D59C 0004A4DC  38 60 00 00 */	li r3, 0
/* 8004D5A0 0004A4E0  48 00 00 48 */	b .L_8004D5E8
.L_8004D5A4:
/* 8004D5A4 0004A4E4  88 1D 00 B0 */	lbz r0, 0xb0(r29)
/* 8004D5A8 0004A4E8  54 00 06 31 */	rlwinm. r0, r0, 0, 0x18, 0x18
/* 8004D5AC 0004A4EC  41 82 00 24 */	beq .L_8004D5D0
/* 8004D5B0 0004A4F0  80 7D 00 AC */	lwz r3, 0xac(r29)
/* 8004D5B4 0004A4F4  28 03 00 00 */	cmplwi r3, 0
/* 8004D5B8 0004A4F8  41 82 00 18 */	beq .L_8004D5D0
/* 8004D5BC 0004A4FC  81 83 00 00 */	lwz r12, 0(r3)
/* 8004D5C0 0004A500  38 80 00 01 */	li r4, 1
/* 8004D5C4 0004A504  81 8C 00 08 */	lwz r12, 8(r12)
/* 8004D5C8 0004A508  7D 89 03 A6 */	mtctr r12
/* 8004D5CC 0004A50C  4E 80 04 21 */	bctrl 
.L_8004D5D0:
/* 8004D5D0 0004A510  93 FD 00 AC */	stw r31, 0xac(r29)
/* 8004D5D4 0004A514  38 60 00 01 */	li r3, 1
/* 8004D5D8 0004A518  88 1D 00 B0 */	lbz r0, 0xb0(r29)
/* 8004D5DC 0004A51C  54 00 06 7E */	clrlwi r0, r0, 0x19
/* 8004D5E0 0004A520  60 00 00 80 */	ori r0, r0, 0x80
/* 8004D5E4 0004A524  98 1D 00 B0 */	stb r0, 0xb0(r29)
.L_8004D5E8:
/* 8004D5E8 0004A528  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8004D5EC 0004A52C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8004D5F0 0004A530  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8004D5F4 0004A534  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8004D5F8 0004A538  7C 08 03 A6 */	mtlr r0
/* 8004D5FC 0004A53C  38 21 00 20 */	addi r1, r1, 0x20
/* 8004D600 0004A540  4E 80 00 20 */	blr 
.endfn setFont__12J2DTevBlock4FP7ResFONT

.fn setFont__12J2DTevBlock4FP7JUTFont, global
/* 8004D604 0004A544  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8004D608 0004A548  7C 08 02 A6 */	mflr r0
/* 8004D60C 0004A54C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8004D610 0004A550  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8004D614 0004A554  7C 9F 23 79 */	or. r31, r4, r4
/* 8004D618 0004A558  93 C1 00 08 */	stw r30, 8(r1)
/* 8004D61C 0004A55C  7C 7E 1B 78 */	mr r30, r3
/* 8004D620 0004A560  40 82 00 0C */	bne .L_8004D62C
/* 8004D624 0004A564  38 60 00 00 */	li r3, 0
/* 8004D628 0004A568  48 00 00 44 */	b .L_8004D66C
.L_8004D62C:
/* 8004D62C 0004A56C  88 1E 00 B0 */	lbz r0, 0xb0(r30)
/* 8004D630 0004A570  54 00 06 31 */	rlwinm. r0, r0, 0, 0x18, 0x18
/* 8004D634 0004A574  41 82 00 24 */	beq .L_8004D658
/* 8004D638 0004A578  80 7E 00 AC */	lwz r3, 0xac(r30)
/* 8004D63C 0004A57C  28 03 00 00 */	cmplwi r3, 0
/* 8004D640 0004A580  41 82 00 18 */	beq .L_8004D658
/* 8004D644 0004A584  81 83 00 00 */	lwz r12, 0(r3)
/* 8004D648 0004A588  38 80 00 01 */	li r4, 1
/* 8004D64C 0004A58C  81 8C 00 08 */	lwz r12, 8(r12)
/* 8004D650 0004A590  7D 89 03 A6 */	mtctr r12
/* 8004D654 0004A594  4E 80 04 21 */	bctrl 
.L_8004D658:
/* 8004D658 0004A598  93 FE 00 AC */	stw r31, 0xac(r30)
/* 8004D65C 0004A59C  38 60 00 01 */	li r3, 1
/* 8004D660 0004A5A0  88 1E 00 B0 */	lbz r0, 0xb0(r30)
/* 8004D664 0004A5A4  54 00 06 7E */	clrlwi r0, r0, 0x19
/* 8004D668 0004A5A8  98 1E 00 B0 */	stb r0, 0xb0(r30)
.L_8004D66C:
/* 8004D66C 0004A5AC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8004D670 0004A5B0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8004D674 0004A5B4  83 C1 00 08 */	lwz r30, 8(r1)
/* 8004D678 0004A5B8  7C 08 03 A6 */	mtlr r0
/* 8004D67C 0004A5BC  38 21 00 10 */	addi r1, r1, 0x10
/* 8004D680 0004A5C0  4E 80 00 20 */	blr 
.endfn setFont__12J2DTevBlock4FP7JUTFont

.fn setPalette__12J2DTevBlock4FUlPC7ResTLUT, global
/* 8004D684 0004A5C4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8004D688 0004A5C8  7C 08 02 A6 */	mflr r0
/* 8004D68C 0004A5CC  90 01 00 24 */	stw r0, 0x24(r1)
/* 8004D690 0004A5D0  BF 41 00 08 */	stmw r26, 8(r1)
/* 8004D694 0004A5D4  7C 9B 23 78 */	mr r27, r4
/* 8004D698 0004A5D8  28 1B 00 04 */	cmplwi r27, 4
/* 8004D69C 0004A5DC  7C 7A 1B 78 */	mr r26, r3
/* 8004D6A0 0004A5E0  7C BC 2B 78 */	mr r28, r5
/* 8004D6A4 0004A5E4  41 80 00 0C */	blt .L_8004D6B0
/* 8004D6A8 0004A5E8  38 60 00 00 */	li r3, 0
/* 8004D6AC 0004A5EC  48 00 00 94 */	b .L_8004D740
.L_8004D6B0:
/* 8004D6B0 0004A5F0  28 1C 00 00 */	cmplwi r28, 0
/* 8004D6B4 0004A5F4  41 82 00 70 */	beq .L_8004D724
/* 8004D6B8 0004A5F8  57 7D 10 3A */	slwi r29, r27, 2
/* 8004D6BC 0004A5FC  7F DA EA 14 */	add r30, r26, r29
/* 8004D6C0 0004A600  80 7E 00 9C */	lwz r3, 0x9c(r30)
/* 8004D6C4 0004A604  28 03 00 00 */	cmplwi r3, 0
/* 8004D6C8 0004A608  40 82 00 38 */	bne .L_8004D700
/* 8004D6CC 0004A60C  38 60 00 18 */	li r3, 0x18
/* 8004D6D0 0004A610  4B FD 67 D5 */	bl __nw__FUl
/* 8004D6D4 0004A614  7C 7F 1B 79 */	or. r31, r3, r3
/* 8004D6D8 0004A618  41 82 00 10 */	beq .L_8004D6E8
/* 8004D6DC 0004A61C  7F 64 DB 78 */	mr r4, r27
/* 8004D6E0 0004A620  7F 85 E3 78 */	mr r5, r28
/* 8004D6E4 0004A624  4B FE 17 E1 */	bl storeTLUT__10JUTPaletteF7_GXTlutP7ResTLUT
.L_8004D6E8:
/* 8004D6E8 0004A628  93 FE 00 9C */	stw r31, 0x9c(r30)
/* 8004D6EC 0004A62C  80 1E 00 9C */	lwz r0, 0x9c(r30)
/* 8004D6F0 0004A630  28 00 00 00 */	cmplwi r0, 0
/* 8004D6F4 0004A634  40 82 00 14 */	bne .L_8004D708
/* 8004D6F8 0004A638  38 60 00 00 */	li r3, 0
/* 8004D6FC 0004A63C  48 00 00 44 */	b .L_8004D740
.L_8004D700:
/* 8004D700 0004A640  38 80 00 00 */	li r4, 0
/* 8004D704 0004A644  4B FE 17 C1 */	bl storeTLUT__10JUTPaletteF7_GXTlutP7ResTLUT
.L_8004D708:
/* 8004D708 0004A648  7C 7A EA 14 */	add r3, r26, r29
/* 8004D70C 0004A64C  80 63 00 8C */	lwz r3, 0x8c(r3)
/* 8004D710 0004A650  28 03 00 00 */	cmplwi r3, 0
/* 8004D714 0004A654  41 82 00 28 */	beq .L_8004D73C
/* 8004D718 0004A658  80 9E 00 9C */	lwz r4, 0x9c(r30)
/* 8004D71C 0004A65C  4B FE 5C 81 */	bl attachPalette__10JUTTextureFP10JUTPalette
/* 8004D720 0004A660  48 00 00 1C */	b .L_8004D73C
.L_8004D724:
/* 8004D724 0004A664  57 60 10 3A */	slwi r0, r27, 2
/* 8004D728 0004A668  7F BA 02 14 */	add r29, r26, r0
/* 8004D72C 0004A66C  80 7D 00 9C */	lwz r3, 0x9c(r29)
/* 8004D730 0004A670  4B FD 69 85 */	bl __dl__FPv
/* 8004D734 0004A674  38 00 00 00 */	li r0, 0
/* 8004D738 0004A678  90 1D 00 9C */	stw r0, 0x9c(r29)
.L_8004D73C:
/* 8004D73C 0004A67C  38 60 00 01 */	li r3, 1
.L_8004D740:
/* 8004D740 0004A680  BB 41 00 08 */	lmw r26, 8(r1)
/* 8004D744 0004A684  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8004D748 0004A688  7C 08 03 A6 */	mtlr r0
/* 8004D74C 0004A68C  38 21 00 20 */	addi r1, r1, 0x20
/* 8004D750 0004A690  4E 80 00 20 */	blr 
.endfn setPalette__12J2DTevBlock4FUlPC7ResTLUT

.fn shiftDeleteFlag__12J2DTevBlock4FUcb, global
/* 8004D754 0004A694  88 C3 00 B0 */	lbz r6, 0xb0(r3)
/* 8004D758 0004A698  54 A0 06 3F */	clrlwi. r0, r5, 0x18
/* 8004D75C 0004A69C  54 C0 06 7E */	clrlwi r0, r6, 0x19
/* 8004D760 0004A6A0  54 C6 06 30 */	rlwinm r6, r6, 0, 0x18, 0x18
/* 8004D764 0004A6A4  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 8004D768 0004A6A8  41 82 00 30 */	beq .L_8004D798
/* 8004D76C 0004A6AC  54 80 06 3E */	clrlwi r0, r4, 0x18
/* 8004D770 0004A6B0  38 80 00 01 */	li r4, 1
/* 8004D774 0004A6B4  7C 84 00 30 */	slw r4, r4, r0
/* 8004D778 0004A6B8  88 A3 00 B0 */	lbz r5, 0xb0(r3)
/* 8004D77C 0004A6BC  38 84 FF FF */	addi r4, r4, -1
/* 8004D780 0004A6C0  7C A0 20 78 */	andc r0, r5, r4
/* 8004D784 0004A6C4  7C A4 20 38 */	and r4, r5, r4
/* 8004D788 0004A6C8  54 00 08 3C */	slwi r0, r0, 1
/* 8004D78C 0004A6CC  7C 80 03 78 */	or r0, r4, r0
/* 8004D790 0004A6D0  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 8004D794 0004A6D4  48 00 00 38 */	b .L_8004D7CC
.L_8004D798:
/* 8004D798 0004A6D8  54 87 06 3E */	clrlwi r7, r4, 0x18
/* 8004D79C 0004A6DC  38 A0 00 01 */	li r5, 1
/* 8004D7A0 0004A6E0  38 07 00 01 */	addi r0, r7, 1
/* 8004D7A4 0004A6E4  89 03 00 B0 */	lbz r8, 0xb0(r3)
/* 8004D7A8 0004A6E8  7C A4 00 30 */	slw r4, r5, r0
/* 8004D7AC 0004A6EC  7C A5 38 30 */	slw r5, r5, r7
/* 8004D7B0 0004A6F0  38 04 FF FF */	addi r0, r4, -1
/* 8004D7B4 0004A6F4  38 85 FF FF */	addi r4, r5, -1
/* 8004D7B8 0004A6F8  7D 00 00 78 */	andc r0, r8, r0
/* 8004D7BC 0004A6FC  7D 04 20 38 */	and r4, r8, r4
/* 8004D7C0 0004A700  7C 00 0E 70 */	srawi r0, r0, 1
/* 8004D7C4 0004A704  7C 80 03 78 */	or r0, r4, r0
/* 8004D7C8 0004A708  98 03 00 B0 */	stb r0, 0xb0(r3)
.L_8004D7CC:
/* 8004D7CC 0004A70C  88 03 00 B0 */	lbz r0, 0xb0(r3)
/* 8004D7D0 0004A710  7C 00 33 78 */	or r0, r0, r6
/* 8004D7D4 0004A714  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 8004D7D8 0004A718  4E 80 00 20 */	blr 
.endfn shiftDeleteFlag__12J2DTevBlock4FUcb

.fn setGX__12J2DTevBlock4Fv, global
/* 8004D7DC 0004A71C  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8004D7E0 0004A720  7C 08 02 A6 */	mflr r0
/* 8004D7E4 0004A724  90 01 00 34 */	stw r0, 0x34(r1)
/* 8004D7E8 0004A728  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 8004D7EC 0004A72C  93 C1 00 28 */	stw r30, 0x28(r1)
/* 8004D7F0 0004A730  93 A1 00 24 */	stw r29, 0x24(r1)
/* 8004D7F4 0004A734  7C 7D 1B 78 */	mr r29, r3
/* 8004D7F8 0004A738  93 81 00 20 */	stw r28, 0x20(r1)
/* 8004D7FC 0004A73C  3B 80 00 00 */	li r28, 0
.L_8004D800:
/* 8004D800 0004A740  7F A3 EB 78 */	mr r3, r29
/* 8004D804 0004A744  7F 84 E3 78 */	mr r4, r28
/* 8004D808 0004A748  81 9D 00 00 */	lwz r12, 0(r29)
/* 8004D80C 0004A74C  7F 85 E3 78 */	mr r5, r28
/* 8004D810 0004A750  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8004D814 0004A754  7D 89 03 A6 */	mtctr r12
/* 8004D818 0004A758  4E 80 04 21 */	bctrl 
/* 8004D81C 0004A75C  3B 9C 00 01 */	addi r28, r28, 1
/* 8004D820 0004A760  2C 1C 00 04 */	cmpwi r28, 4
/* 8004D824 0004A764  41 80 FF DC */	blt .L_8004D800
/* 8004D828 0004A768  7F BE EB 78 */	mr r30, r29
/* 8004D82C 0004A76C  3B 80 00 00 */	li r28, 0
/* 8004D830 0004A770  48 00 00 20 */	b .L_8004D850
.L_8004D834:
/* 8004D834 0004A774  88 9E 00 0E */	lbz r4, 0xe(r30)
/* 8004D838 0004A778  7F 83 E3 78 */	mr r3, r28
/* 8004D83C 0004A77C  88 BE 00 0F */	lbz r5, 0xf(r30)
/* 8004D840 0004A780  88 DE 00 10 */	lbz r6, 0x10(r30)
/* 8004D844 0004A784  48 09 B1 D9 */	bl GXSetTevOrder
/* 8004D848 0004A788  3B DE 00 04 */	addi r30, r30, 4
/* 8004D84C 0004A78C  3B 9C 00 01 */	addi r28, r28, 1
.L_8004D850:
/* 8004D850 0004A790  88 1D 00 3E */	lbz r0, 0x3e(r29)
/* 8004D854 0004A794  7C 1C 00 00 */	cmpw r28, r0
/* 8004D858 0004A798  41 80 FF DC */	blt .L_8004D834
/* 8004D85C 0004A79C  7F BF EB 78 */	mr r31, r29
/* 8004D860 0004A7A0  3B C1 00 0C */	addi r30, r1, 0xc
/* 8004D864 0004A7A4  3B 80 00 00 */	li r28, 0
.L_8004D868:
/* 8004D868 0004A7A8  80 9F 00 1E */	lwz r4, 0x1e(r31)
/* 8004D86C 0004A7AC  2C 1C 00 03 */	cmpwi r28, 3
/* 8004D870 0004A7B0  80 1F 00 22 */	lwz r0, 0x22(r31)
/* 8004D874 0004A7B4  38 60 00 00 */	li r3, 0
/* 8004D878 0004A7B8  90 81 00 0C */	stw r4, 0xc(r1)
/* 8004D87C 0004A7BC  90 01 00 10 */	stw r0, 0x10(r1)
/* 8004D880 0004A7C0  41 82 00 08 */	beq .L_8004D888
/* 8004D884 0004A7C4  38 7C 00 01 */	addi r3, r28, 1
.L_8004D888:
/* 8004D888 0004A7C8  7F C4 F3 78 */	mr r4, r30
/* 8004D88C 0004A7CC  48 09 AE 51 */	bl GXSetTevColorS10
/* 8004D890 0004A7D0  3B 9C 00 01 */	addi r28, r28, 1
/* 8004D894 0004A7D4  3B FF 00 08 */	addi r31, r31, 8
/* 8004D898 0004A7D8  2C 1C 00 04 */	cmpwi r28, 4
/* 8004D89C 0004A7DC  41 80 FF CC */	blt .L_8004D868
/* 8004D8A0 0004A7E0  88 7D 00 3E */	lbz r3, 0x3e(r29)
/* 8004D8A4 0004A7E4  48 09 B3 15 */	bl GXSetNumTevStages
/* 8004D8A8 0004A7E8  7F BE EB 78 */	mr r30, r29
/* 8004D8AC 0004A7EC  3B E0 00 00 */	li r31, 0
/* 8004D8B0 0004A7F0  48 00 01 28 */	b .L_8004D9D8
.L_8004D8B4:
/* 8004D8B4 0004A7F4  88 1E 00 42 */	lbz r0, 0x42(r30)
/* 8004D8B8 0004A7F8  7F E3 FB 78 */	mr r3, r31
/* 8004D8BC 0004A7FC  88 BE 00 41 */	lbz r5, 0x41(r30)
/* 8004D8C0 0004A800  54 06 E7 3E */	rlwinm r6, r0, 0x1c, 0x1c, 0x1f
/* 8004D8C4 0004A804  54 07 07 3E */	clrlwi r7, r0, 0x1c
/* 8004D8C8 0004A808  54 A4 E7 3E */	rlwinm r4, r5, 0x1c, 0x1c, 0x1f
/* 8004D8CC 0004A80C  54 A5 07 3E */	clrlwi r5, r5, 0x1c
/* 8004D8D0 0004A810  48 09 AC 39 */	bl GXSetTevColorIn
/* 8004D8D4 0004A814  88 BE 00 45 */	lbz r5, 0x45(r30)
/* 8004D8D8 0004A818  7F E3 FB 78 */	mr r3, r31
/* 8004D8DC 0004A81C  88 DE 00 46 */	lbz r6, 0x46(r30)
/* 8004D8E0 0004A820  54 A0 06 34 */	rlwinm r0, r5, 0, 0x18, 0x1a
/* 8004D8E4 0004A824  7C 04 2E 70 */	srawi r4, r0, 5
/* 8004D8E8 0004A828  54 C7 E7 7E */	rlwinm r7, r6, 0x1c, 0x1d, 0x1f
/* 8004D8EC 0004A82C  54 C0 CF FE */	rlwinm r0, r6, 0x19, 0x1f, 0x1f
/* 8004D8F0 0004A830  50 A0 0F 7C */	rlwimi r0, r5, 1, 0x1d, 0x1e
/* 8004D8F4 0004A834  54 84 06 3E */	clrlwi r4, r4, 0x18
/* 8004D8F8 0004A838  54 A5 F7 7E */	rlwinm r5, r5, 0x1e, 0x1d, 0x1f
/* 8004D8FC 0004A83C  54 06 06 3E */	clrlwi r6, r0, 0x18
/* 8004D900 0004A840  48 09 AC 4D */	bl GXSetTevAlphaIn
/* 8004D904 0004A844  88 FE 00 40 */	lbz r7, 0x40(r30)
/* 8004D908 0004A848  7F E3 FB 78 */	mr r3, r31
/* 8004D90C 0004A84C  54 E0 06 B6 */	rlwinm r0, r7, 0, 0x1a, 0x1b
/* 8004D910 0004A850  54 E5 07 BE */	clrlwi r5, r7, 0x1e
/* 8004D914 0004A854  7C 06 26 70 */	srawi r6, r0, 4
/* 8004D918 0004A858  54 E9 F7 FE */	rlwinm r9, r7, 0x1e, 0x1f, 0x1f
/* 8004D91C 0004A85C  54 E0 EF 7C */	rlwinm r0, r7, 0x1d, 0x1d, 0x1e
/* 8004D920 0004A860  28 05 00 03 */	cmplwi r5, 3
/* 8004D924 0004A864  7C 89 02 14 */	add r4, r9, r0
/* 8004D928 0004A868  54 E8 D7 BE */	rlwinm r8, r7, 0x1a, 0x1e, 0x1f
/* 8004D92C 0004A86C  38 04 00 08 */	addi r0, r4, 8
/* 8004D930 0004A870  54 C6 06 3E */	clrlwi r6, r6, 0x18
/* 8004D934 0004A874  54 E7 EF FE */	rlwinm r7, r7, 0x1d, 0x1f, 0x1f
/* 8004D938 0004A878  54 00 06 3E */	clrlwi r0, r0, 0x18
/* 8004D93C 0004A87C  41 82 00 08 */	beq .L_8004D944
/* 8004D940 0004A880  7D 20 4B 78 */	mr r0, r9
.L_8004D944:
/* 8004D944 0004A884  54 04 06 3E */	clrlwi r4, r0, 0x18
/* 8004D948 0004A888  48 09 AC 49 */	bl GXSetTevColorOp
/* 8004D94C 0004A88C  88 FE 00 44 */	lbz r7, 0x44(r30)
/* 8004D950 0004A890  7F E3 FB 78 */	mr r3, r31
/* 8004D954 0004A894  54 E0 06 B6 */	rlwinm r0, r7, 0, 0x1a, 0x1b
/* 8004D958 0004A898  54 E5 07 BE */	clrlwi r5, r7, 0x1e
/* 8004D95C 0004A89C  7C 06 26 70 */	srawi r6, r0, 4
/* 8004D960 0004A8A0  54 E9 F7 FE */	rlwinm r9, r7, 0x1e, 0x1f, 0x1f
/* 8004D964 0004A8A4  54 E0 EF 7C */	rlwinm r0, r7, 0x1d, 0x1d, 0x1e
/* 8004D968 0004A8A8  28 05 00 03 */	cmplwi r5, 3
/* 8004D96C 0004A8AC  7C 89 02 14 */	add r4, r9, r0
/* 8004D970 0004A8B0  54 E8 D7 BE */	rlwinm r8, r7, 0x1a, 0x1e, 0x1f
/* 8004D974 0004A8B4  38 04 00 08 */	addi r0, r4, 8
/* 8004D978 0004A8B8  54 C6 06 3E */	clrlwi r6, r6, 0x18
/* 8004D97C 0004A8BC  54 E7 EF FE */	rlwinm r7, r7, 0x1d, 0x1f, 0x1f
/* 8004D980 0004A8C0  54 00 06 3E */	clrlwi r0, r0, 0x18
/* 8004D984 0004A8C4  41 82 00 08 */	beq .L_8004D98C
/* 8004D988 0004A8C8  7D 20 4B 78 */	mr r0, r9
.L_8004D98C:
/* 8004D98C 0004A8CC  54 04 06 3E */	clrlwi r4, r0, 0x18
/* 8004D990 0004A8D0  48 09 AC 69 */	bl GXSetTevAlphaOp
/* 8004D994 0004A8D4  7F 9D FA 14 */	add r28, r29, r31
/* 8004D998 0004A8D8  38 80 00 00 */	li r4, 0
/* 8004D99C 0004A8DC  88 1C 00 70 */	lbz r0, 0x70(r28)
/* 8004D9A0 0004A8E0  28 00 00 FF */	cmplwi r0, 0xff
/* 8004D9A4 0004A8E4  41 82 00 08 */	beq .L_8004D9AC
/* 8004D9A8 0004A8E8  7C 04 03 78 */	mr r4, r0
.L_8004D9AC:
/* 8004D9AC 0004A8EC  7F E3 FB 78 */	mr r3, r31
/* 8004D9B0 0004A8F0  48 09 AE 1D */	bl GXSetTevKColorSel
/* 8004D9B4 0004A8F4  88 1C 00 74 */	lbz r0, 0x74(r28)
/* 8004D9B8 0004A8F8  38 80 00 00 */	li r4, 0
/* 8004D9BC 0004A8FC  28 00 00 FF */	cmplwi r0, 0xff
/* 8004D9C0 0004A900  41 82 00 08 */	beq .L_8004D9C8
/* 8004D9C4 0004A904  7C 04 03 78 */	mr r4, r0
.L_8004D9C8:
/* 8004D9C8 0004A908  7F E3 FB 78 */	mr r3, r31
/* 8004D9CC 0004A90C  48 09 AE 5D */	bl GXSetTevKAlphaSel
/* 8004D9D0 0004A910  3B DE 00 08 */	addi r30, r30, 8
/* 8004D9D4 0004A914  3B FF 00 01 */	addi r31, r31, 1
.L_8004D9D8:
/* 8004D9D8 0004A918  88 1D 00 3E */	lbz r0, 0x3e(r29)
/* 8004D9DC 0004A91C  7C 1F 00 00 */	cmpw r31, r0
/* 8004D9E0 0004A920  41 80 FE D4 */	blt .L_8004D8B4
/* 8004D9E4 0004A924  3B 80 00 00 */	li r28, 0
/* 8004D9E8 0004A928  7F BE EB 78 */	mr r30, r29
.L_8004D9EC:
/* 8004D9EC 0004A92C  80 1E 00 60 */	lwz r0, 0x60(r30)
/* 8004D9F0 0004A930  7F 83 E3 78 */	mr r3, r28
/* 8004D9F4 0004A934  38 81 00 08 */	addi r4, r1, 8
/* 8004D9F8 0004A938  90 01 00 08 */	stw r0, 8(r1)
/* 8004D9FC 0004A93C  48 09 AD 5D */	bl GXSetTevKColor
/* 8004DA00 0004A940  3B 9C 00 01 */	addi r28, r28, 1
/* 8004DA04 0004A944  3B DE 00 04 */	addi r30, r30, 4
/* 8004DA08 0004A948  2C 1C 00 04 */	cmpwi r28, 4
/* 8004DA0C 0004A94C  41 80 FF E0 */	blt .L_8004D9EC
/* 8004DA10 0004A950  7F BE EB 78 */	mr r30, r29
/* 8004DA14 0004A954  3B 80 00 00 */	li r28, 0
/* 8004DA18 0004A958  48 00 00 20 */	b .L_8004DA38
.L_8004DA1C:
/* 8004DA1C 0004A95C  88 1E 00 46 */	lbz r0, 0x46(r30)
/* 8004DA20 0004A960  7F 83 E3 78 */	mr r3, r28
/* 8004DA24 0004A964  54 04 07 BE */	clrlwi r4, r0, 0x1e
/* 8004DA28 0004A968  54 05 F7 BE */	rlwinm r5, r0, 0x1e, 0x1e, 0x1f
/* 8004DA2C 0004A96C  48 09 AE 59 */	bl GXSetTevSwapMode
/* 8004DA30 0004A970  3B DE 00 08 */	addi r30, r30, 8
/* 8004DA34 0004A974  3B 9C 00 01 */	addi r28, r28, 1
.L_8004DA38:
/* 8004DA38 0004A978  88 1D 00 3E */	lbz r0, 0x3e(r29)
/* 8004DA3C 0004A97C  7C 1C 00 00 */	cmpw r28, r0
/* 8004DA40 0004A980  41 80 FF DC */	blt .L_8004DA1C
/* 8004DA44 0004A984  3B 80 00 00 */	li r28, 0
.L_8004DA48:
/* 8004DA48 0004A988  38 1C 00 78 */	addi r0, r28, 0x78
/* 8004DA4C 0004A98C  7F 83 E3 78 */	mr r3, r28
/* 8004DA50 0004A990  7C 1D 00 AE */	lbzx r0, r29, r0
/* 8004DA54 0004A994  54 04 D7 BE */	rlwinm r4, r0, 0x1a, 0x1e, 0x1f
/* 8004DA58 0004A998  54 05 E7 BE */	rlwinm r5, r0, 0x1c, 0x1e, 0x1f
/* 8004DA5C 0004A99C  54 06 F7 BE */	rlwinm r6, r0, 0x1e, 0x1e, 0x1f
/* 8004DA60 0004A9A0  54 07 07 BE */	clrlwi r7, r0, 0x1e
/* 8004DA64 0004A9A4  48 09 AE 69 */	bl GXSetTevSwapModeTable
/* 8004DA68 0004A9A8  3B 9C 00 01 */	addi r28, r28, 1
/* 8004DA6C 0004A9AC  2C 1C 00 04 */	cmpwi r28, 4
/* 8004DA70 0004A9B0  41 80 FF D8 */	blt .L_8004DA48
/* 8004DA74 0004A9B4  3B 80 00 00 */	li r28, 0
/* 8004DA78 0004A9B8  48 00 00 1C */	b .L_8004DA94
.L_8004DA7C:
/* 8004DA7C 0004A9BC  57 83 15 BA */	rlwinm r3, r28, 2, 0x16, 0x1d
/* 8004DA80 0004A9C0  7F 84 E3 78 */	mr r4, r28
/* 8004DA84 0004A9C4  38 63 00 7C */	addi r3, r3, 0x7c
/* 8004DA88 0004A9C8  7C 7D 1A 14 */	add r3, r29, r3
/* 8004DA8C 0004A9CC  48 00 BB 39 */	bl load__14J2DIndTevStageFUc
/* 8004DA90 0004A9D0  3B 9C 00 01 */	addi r28, r28, 1
.L_8004DA94:
/* 8004DA94 0004A9D4  88 1D 00 3E */	lbz r0, 0x3e(r29)
/* 8004DA98 0004A9D8  57 83 06 3E */	clrlwi r3, r28, 0x18
/* 8004DA9C 0004A9DC  7C 03 00 40 */	cmplw r3, r0
/* 8004DAA0 0004A9E0  41 80 FF DC */	blt .L_8004DA7C
/* 8004DAA4 0004A9E4  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8004DAA8 0004A9E8  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 8004DAAC 0004A9EC  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 8004DAB0 0004A9F0  83 A1 00 24 */	lwz r29, 0x24(r1)
/* 8004DAB4 0004A9F4  83 81 00 20 */	lwz r28, 0x20(r1)
/* 8004DAB8 0004A9F8  7C 08 03 A6 */	mtlr r0
/* 8004DABC 0004A9FC  38 21 00 30 */	addi r1, r1, 0x30
/* 8004DAC0 0004AA00  4E 80 00 20 */	blr 
.endfn setGX__12J2DTevBlock4Fv

.fn loadTexture__12J2DTevBlock4F11_GXTexMapIDUl, global
/* 8004DAC4 0004AA04  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8004DAC8 0004AA08  7C 08 02 A6 */	mflr r0
/* 8004DACC 0004AA0C  28 05 00 04 */	cmplwi r5, 4
/* 8004DAD0 0004AA10  90 01 00 14 */	stw r0, 0x14(r1)
/* 8004DAD4 0004AA14  40 80 00 28 */	bge .L_8004DAFC
/* 8004DAD8 0004AA18  54 A0 10 3A */	slwi r0, r5, 2
/* 8004DADC 0004AA1C  7C 63 02 14 */	add r3, r3, r0
/* 8004DAE0 0004AA20  80 63 00 8C */	lwz r3, 0x8c(r3)
/* 8004DAE4 0004AA24  28 03 00 00 */	cmplwi r3, 0
/* 8004DAE8 0004AA28  41 82 00 14 */	beq .L_8004DAFC
/* 8004DAEC 0004AA2C  80 03 00 20 */	lwz r0, 0x20(r3)
/* 8004DAF0 0004AA30  28 00 00 00 */	cmplwi r0, 0
/* 8004DAF4 0004AA34  41 82 00 08 */	beq .L_8004DAFC
/* 8004DAF8 0004AA38  4B FE 5B 39 */	bl load__10JUTTextureF11_GXTexMapID
.L_8004DAFC:
/* 8004DAFC 0004AA3C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8004DB00 0004AA40  7C 08 03 A6 */	mtlr r0
/* 8004DB04 0004AA44  38 21 00 10 */	addi r1, r1, 0x10
/* 8004DB08 0004AA48  4E 80 00 20 */	blr 
.endfn loadTexture__12J2DTevBlock4F11_GXTexMapIDUl

.fn __ct__12J2DTevBlock8Fv, global
/* 8004DB0C 0004AA4C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8004DB10 0004AA50  7C 08 02 A6 */	mflr r0
/* 8004DB14 0004AA54  3C 80 80 4A */	lis r4, __vt__11J2DTevBlock@ha
/* 8004DB18 0004AA58  38 A0 00 00 */	li r5, 0
/* 8004DB1C 0004AA5C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8004DB20 0004AA60  38 04 10 94 */	addi r0, r4, __vt__11J2DTevBlock@l
/* 8004DB24 0004AA64  3C 80 80 05 */	lis r4, __ct__11J2DTevOrderFv@ha
/* 8004DB28 0004AA68  38 C0 00 04 */	li r6, 4
/* 8004DB2C 0004AA6C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8004DB30 0004AA70  7C 7F 1B 78 */	mr r31, r3
/* 8004DB34 0004AA74  3C 60 80 4A */	lis r3, __vt__12J2DTevBlock8@ha
/* 8004DB38 0004AA78  38 84 A2 C4 */	addi r4, r4, __ct__11J2DTevOrderFv@l
/* 8004DB3C 0004AA7C  90 1F 00 00 */	stw r0, 0(r31)
/* 8004DB40 0004AA80  38 03 0D A4 */	addi r0, r3, __vt__12J2DTevBlock8@l
/* 8004DB44 0004AA84  38 7F 00 16 */	addi r3, r31, 0x16
/* 8004DB48 0004AA88  38 E0 00 08 */	li r7, 8
/* 8004DB4C 0004AA8C  90 1F 00 00 */	stw r0, 0(r31)
/* 8004DB50 0004AA90  48 07 3C ED */	bl __construct_array
/* 8004DB54 0004AA94  3C 80 80 05 */	lis r4, __ct__13J2DGXColorS10Fv@ha
/* 8004DB58 0004AA98  38 7F 00 36 */	addi r3, r31, 0x36
/* 8004DB5C 0004AA9C  38 84 A2 C0 */	addi r4, r4, __ct__13J2DGXColorS10Fv@l
/* 8004DB60 0004AAA0  38 A0 00 00 */	li r5, 0
/* 8004DB64 0004AAA4  38 C0 00 08 */	li r6, 8
/* 8004DB68 0004AAA8  38 E0 00 04 */	li r7, 4
/* 8004DB6C 0004AAAC  48 07 3C D1 */	bl __construct_array
/* 8004DB70 0004AAB0  3C 80 80 05 */	lis r4, __ct__11J2DTevStageFv@ha
/* 8004DB74 0004AAB4  38 7F 00 57 */	addi r3, r31, 0x57
/* 8004DB78 0004AAB8  38 84 95 D8 */	addi r4, r4, __ct__11J2DTevStageFv@l
/* 8004DB7C 0004AABC  38 A0 00 00 */	li r5, 0
/* 8004DB80 0004AAC0  38 C0 00 08 */	li r6, 8
/* 8004DB84 0004AAC4  38 E0 00 08 */	li r7, 8
/* 8004DB88 0004AAC8  48 07 3C B5 */	bl __construct_array
/* 8004DB8C 0004AACC  3C 80 80 04 */	lis r4, __ct__Q28JUtility6TColorFv@ha
/* 8004DB90 0004AAD0  38 7F 00 98 */	addi r3, r31, 0x98
/* 8004DB94 0004AAD4  38 84 9B 94 */	addi r4, r4, __ct__Q28JUtility6TColorFv@l
/* 8004DB98 0004AAD8  38 A0 00 00 */	li r5, 0
/* 8004DB9C 0004AADC  38 C0 00 04 */	li r6, 4
/* 8004DBA0 0004AAE0  38 E0 00 04 */	li r7, 4
/* 8004DBA4 0004AAE4  48 07 3C 99 */	bl __construct_array
/* 8004DBA8 0004AAE8  3C 80 80 05 */	lis r4, __ct__19J2DTevSwapModeTableFv@ha
/* 8004DBAC 0004AAEC  38 7F 00 B8 */	addi r3, r31, 0xb8
/* 8004DBB0 0004AAF0  38 84 A2 B4 */	addi r4, r4, __ct__19J2DTevSwapModeTableFv@l
/* 8004DBB4 0004AAF4  38 A0 00 00 */	li r5, 0
/* 8004DBB8 0004AAF8  38 C0 00 01 */	li r6, 1
/* 8004DBBC 0004AAFC  38 E0 00 04 */	li r7, 4
/* 8004DBC0 0004AB00  48 07 3C 7D */	bl __construct_array
/* 8004DBC4 0004AB04  3C 80 80 05 */	lis r4, __ct__14J2DIndTevStageFv@ha
/* 8004DBC8 0004AB08  38 7F 00 BC */	addi r3, r31, 0xbc
/* 8004DBCC 0004AB0C  38 84 A2 20 */	addi r4, r4, __ct__14J2DIndTevStageFv@l
/* 8004DBD0 0004AB10  38 A0 00 00 */	li r5, 0
/* 8004DBD4 0004AB14  38 C0 00 04 */	li r6, 4
/* 8004DBD8 0004AB18  38 E0 00 08 */	li r7, 8
/* 8004DBDC 0004AB1C  48 07 3C 61 */	bl __construct_array
/* 8004DBE0 0004AB20  38 00 00 00 */	li r0, 0
/* 8004DBE4 0004AB24  7F E3 FB 78 */	mr r3, r31
/* 8004DBE8 0004AB28  90 1F 00 DC */	stw r0, 0xdc(r31)
/* 8004DBEC 0004AB2C  90 1F 00 E0 */	stw r0, 0xe0(r31)
/* 8004DBF0 0004AB30  90 1F 00 E4 */	stw r0, 0xe4(r31)
/* 8004DBF4 0004AB34  90 1F 00 E8 */	stw r0, 0xe8(r31)
/* 8004DBF8 0004AB38  90 1F 00 EC */	stw r0, 0xec(r31)
/* 8004DBFC 0004AB3C  90 1F 00 F0 */	stw r0, 0xf0(r31)
/* 8004DC00 0004AB40  90 1F 00 F4 */	stw r0, 0xf4(r31)
/* 8004DC04 0004AB44  90 1F 00 F8 */	stw r0, 0xf8(r31)
/* 8004DC08 0004AB48  98 1F 01 20 */	stb r0, 0x120(r31)
/* 8004DC0C 0004AB4C  81 9F 00 00 */	lwz r12, 0(r31)
/* 8004DC10 0004AB50  81 8C 00 08 */	lwz r12, 8(r12)
/* 8004DC14 0004AB54  7D 89 03 A6 */	mtctr r12
/* 8004DC18 0004AB58  4E 80 04 21 */	bctrl 
/* 8004DC1C 0004AB5C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8004DC20 0004AB60  7F E3 FB 78 */	mr r3, r31
/* 8004DC24 0004AB64  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8004DC28 0004AB68  7C 08 03 A6 */	mtlr r0
/* 8004DC2C 0004AB6C  38 21 00 10 */	addi r1, r1, 0x10
/* 8004DC30 0004AB70  4E 80 00 20 */	blr 
.endfn __ct__12J2DTevBlock8Fv

.fn __dt__12J2DTevBlock8Fv, global
/* 8004DC34 0004AB74  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8004DC38 0004AB78  7C 08 02 A6 */	mflr r0
/* 8004DC3C 0004AB7C  90 01 00 24 */	stw r0, 0x24(r1)
/* 8004DC40 0004AB80  BF 61 00 0C */	stmw r27, 0xc(r1)
/* 8004DC44 0004AB84  7C 7B 1B 79 */	or. r27, r3, r3
/* 8004DC48 0004AB88  7C 9C 23 78 */	mr r28, r4
/* 8004DC4C 0004AB8C  41 82 00 A0 */	beq .L_8004DCEC
/* 8004DC50 0004AB90  3C 60 80 4A */	lis r3, __vt__12J2DTevBlock8@ha
/* 8004DC54 0004AB94  7F 7E DB 78 */	mr r30, r27
/* 8004DC58 0004AB98  38 03 0D A4 */	addi r0, r3, __vt__12J2DTevBlock8@l
/* 8004DC5C 0004AB9C  3B A0 00 00 */	li r29, 0
/* 8004DC60 0004ABA0  90 1B 00 00 */	stw r0, 0(r27)
/* 8004DC64 0004ABA4  3B E0 00 01 */	li r31, 1
.L_8004DC68:
/* 8004DC68 0004ABA8  88 7B 01 20 */	lbz r3, 0x120(r27)
/* 8004DC6C 0004ABAC  7F E0 E8 30 */	slw r0, r31, r29
/* 8004DC70 0004ABB0  7C 60 00 39 */	and. r0, r3, r0
/* 8004DC74 0004ABB4  41 82 00 10 */	beq .L_8004DC84
/* 8004DC78 0004ABB8  80 7E 00 DC */	lwz r3, 0xdc(r30)
/* 8004DC7C 0004ABBC  38 80 00 01 */	li r4, 1
/* 8004DC80 0004ABC0  4B FE 53 91 */	bl __dt__10JUTTextureFv
.L_8004DC84:
/* 8004DC84 0004ABC4  80 7E 00 FC */	lwz r3, 0xfc(r30)
/* 8004DC88 0004ABC8  4B FD 64 2D */	bl __dl__FPv
/* 8004DC8C 0004ABCC  3B BD 00 01 */	addi r29, r29, 1
/* 8004DC90 0004ABD0  3B DE 00 04 */	addi r30, r30, 4
/* 8004DC94 0004ABD4  2C 1D 00 08 */	cmpwi r29, 8
/* 8004DC98 0004ABD8  41 80 FF D0 */	blt .L_8004DC68
/* 8004DC9C 0004ABDC  88 1B 01 21 */	lbz r0, 0x121(r27)
/* 8004DCA0 0004ABE0  28 00 00 00 */	cmplwi r0, 0
/* 8004DCA4 0004ABE4  41 82 00 24 */	beq .L_8004DCC8
/* 8004DCA8 0004ABE8  80 7B 01 1C */	lwz r3, 0x11c(r27)
/* 8004DCAC 0004ABEC  28 03 00 00 */	cmplwi r3, 0
/* 8004DCB0 0004ABF0  41 82 00 18 */	beq .L_8004DCC8
/* 8004DCB4 0004ABF4  81 83 00 00 */	lwz r12, 0(r3)
/* 8004DCB8 0004ABF8  38 80 00 01 */	li r4, 1
/* 8004DCBC 0004ABFC  81 8C 00 08 */	lwz r12, 8(r12)
/* 8004DCC0 0004AC00  7D 89 03 A6 */	mtctr r12
/* 8004DCC4 0004AC04  4E 80 04 21 */	bctrl 
.L_8004DCC8:
/* 8004DCC8 0004AC08  28 1B 00 00 */	cmplwi r27, 0
/* 8004DCCC 0004AC0C  41 82 00 10 */	beq .L_8004DCDC
/* 8004DCD0 0004AC10  3C 60 80 4A */	lis r3, __vt__11J2DTevBlock@ha
/* 8004DCD4 0004AC14  38 03 10 94 */	addi r0, r3, __vt__11J2DTevBlock@l
/* 8004DCD8 0004AC18  90 1B 00 00 */	stw r0, 0(r27)
.L_8004DCDC:
/* 8004DCDC 0004AC1C  7F 80 07 35 */	extsh. r0, r28
/* 8004DCE0 0004AC20  40 81 00 0C */	ble .L_8004DCEC
/* 8004DCE4 0004AC24  7F 63 DB 78 */	mr r3, r27
/* 8004DCE8 0004AC28  4B FD 63 CD */	bl __dl__FPv
.L_8004DCEC:
/* 8004DCEC 0004AC2C  7F 63 DB 78 */	mr r3, r27
/* 8004DCF0 0004AC30  BB 61 00 0C */	lmw r27, 0xc(r1)
/* 8004DCF4 0004AC34  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8004DCF8 0004AC38  7C 08 03 A6 */	mtlr r0
/* 8004DCFC 0004AC3C  38 21 00 20 */	addi r1, r1, 0x20
/* 8004DD00 0004AC40  4E 80 00 20 */	blr 
.endfn __dt__12J2DTevBlock8Fv

.fn initialize__12J2DTevBlock8Fv, global
/* 8004DD04 0004AC44  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 8004DD08 0004AC48  39 02 85 B8 */	addi r8, r2, j2dDefaultTevColor@sda21
/* 8004DD0C 0004AC4C  3C A0 00 01 */	lis r5, 0x0000FFFF@ha
/* 8004DD10 0004AC50  38 82 85 B0 */	addi r4, r2, j2dDefaultTevOrderInfoNull@sda21
/* 8004DD14 0004AC54  BE A1 00 24 */	stmw r21, 0x24(r1)
/* 8004DD18 0004AC58  38 C5 FF FF */	addi r6, r5, 0x0000FFFF@l
/* 8004DD1C 0004AC5C  A8 A2 85 B8 */	lha r5, j2dDefaultTevColor@sda21(r2)
/* 8004DD20 0004AC60  A8 08 00 02 */	lha r0, 2(r8)
/* 8004DD24 0004AC64  A8 E8 00 04 */	lha r7, 4(r8)
/* 8004DD28 0004AC68  AA C8 00 06 */	lha r22, 6(r8)
/* 8004DD2C 0004AC6C  B0 C3 00 04 */	sth r6, 4(r3)
/* 8004DD30 0004AC70  B0 C3 00 06 */	sth r6, 6(r3)
/* 8004DD34 0004AC74  B0 C3 00 08 */	sth r6, 8(r3)
/* 8004DD38 0004AC78  B0 C3 00 0A */	sth r6, 0xa(r3)
/* 8004DD3C 0004AC7C  B0 C3 00 0C */	sth r6, 0xc(r3)
/* 8004DD40 0004AC80  B0 C3 00 0E */	sth r6, 0xe(r3)
/* 8004DD44 0004AC84  B0 C3 00 10 */	sth r6, 0x10(r3)
/* 8004DD48 0004AC88  B0 C3 00 12 */	sth r6, 0x12(r3)
/* 8004DD4C 0004AC8C  B0 C3 00 14 */	sth r6, 0x14(r3)
/* 8004DD50 0004AC90  88 C2 85 B0 */	lbz r6, j2dDefaultTevOrderInfoNull@sda21(r2)
/* 8004DD54 0004AC94  98 C3 00 16 */	stb r6, 0x16(r3)
/* 8004DD58 0004AC98  88 C4 00 01 */	lbz r6, 1(r4)
/* 8004DD5C 0004AC9C  98 C3 00 17 */	stb r6, 0x17(r3)
/* 8004DD60 0004ACA0  88 C4 00 02 */	lbz r6, 2(r4)
/* 8004DD64 0004ACA4  98 C3 00 18 */	stb r6, 0x18(r3)
/* 8004DD68 0004ACA8  88 C2 85 B0 */	lbz r6, j2dDefaultTevOrderInfoNull@sda21(r2)
/* 8004DD6C 0004ACAC  98 C3 00 1A */	stb r6, 0x1a(r3)
/* 8004DD70 0004ACB0  88 C4 00 01 */	lbz r6, 1(r4)
/* 8004DD74 0004ACB4  98 C3 00 1B */	stb r6, 0x1b(r3)
/* 8004DD78 0004ACB8  88 C4 00 02 */	lbz r6, 2(r4)
/* 8004DD7C 0004ACBC  98 C3 00 1C */	stb r6, 0x1c(r3)
/* 8004DD80 0004ACC0  88 C2 85 B0 */	lbz r6, j2dDefaultTevOrderInfoNull@sda21(r2)
/* 8004DD84 0004ACC4  98 C3 00 1E */	stb r6, 0x1e(r3)
/* 8004DD88 0004ACC8  88 C4 00 01 */	lbz r6, 1(r4)
/* 8004DD8C 0004ACCC  98 C3 00 1F */	stb r6, 0x1f(r3)
/* 8004DD90 0004ACD0  88 C4 00 02 */	lbz r6, 2(r4)
/* 8004DD94 0004ACD4  98 C3 00 20 */	stb r6, 0x20(r3)
/* 8004DD98 0004ACD8  88 C2 85 B0 */	lbz r6, j2dDefaultTevOrderInfoNull@sda21(r2)
/* 8004DD9C 0004ACDC  98 C3 00 22 */	stb r6, 0x22(r3)
/* 8004DDA0 0004ACE0  88 C4 00 01 */	lbz r6, 1(r4)
/* 8004DDA4 0004ACE4  98 C3 00 23 */	stb r6, 0x23(r3)
/* 8004DDA8 0004ACE8  88 C4 00 02 */	lbz r6, 2(r4)
/* 8004DDAC 0004ACEC  98 C3 00 24 */	stb r6, 0x24(r3)
/* 8004DDB0 0004ACF0  88 C2 85 B0 */	lbz r6, j2dDefaultTevOrderInfoNull@sda21(r2)
/* 8004DDB4 0004ACF4  98 C3 00 26 */	stb r6, 0x26(r3)
/* 8004DDB8 0004ACF8  88 C4 00 01 */	lbz r6, 1(r4)
/* 8004DDBC 0004ACFC  98 C3 00 27 */	stb r6, 0x27(r3)
/* 8004DDC0 0004AD00  88 C4 00 02 */	lbz r6, 2(r4)
/* 8004DDC4 0004AD04  98 C3 00 28 */	stb r6, 0x28(r3)
/* 8004DDC8 0004AD08  88 C2 85 B0 */	lbz r6, j2dDefaultTevOrderInfoNull@sda21(r2)
/* 8004DDCC 0004AD0C  98 C3 00 2A */	stb r6, 0x2a(r3)
/* 8004DDD0 0004AD10  88 C4 00 01 */	lbz r6, 1(r4)
/* 8004DDD4 0004AD14  98 C3 00 2B */	stb r6, 0x2b(r3)
/* 8004DDD8 0004AD18  88 C4 00 02 */	lbz r6, 2(r4)
/* 8004DDDC 0004AD1C  98 C3 00 2C */	stb r6, 0x2c(r3)
/* 8004DDE0 0004AD20  88 C2 85 B0 */	lbz r6, j2dDefaultTevOrderInfoNull@sda21(r2)
/* 8004DDE4 0004AD24  98 C3 00 2E */	stb r6, 0x2e(r3)
/* 8004DDE8 0004AD28  88 C4 00 01 */	lbz r6, 1(r4)
/* 8004DDEC 0004AD2C  98 C3 00 2F */	stb r6, 0x2f(r3)
/* 8004DDF0 0004AD30  88 C4 00 02 */	lbz r6, 2(r4)
/* 8004DDF4 0004AD34  98 C3 00 30 */	stb r6, 0x30(r3)
/* 8004DDF8 0004AD38  88 C2 85 B0 */	lbz r6, j2dDefaultTevOrderInfoNull@sda21(r2)
/* 8004DDFC 0004AD3C  98 C3 00 32 */	stb r6, 0x32(r3)
/* 8004DE00 0004AD40  88 C4 00 01 */	lbz r6, 1(r4)
/* 8004DE04 0004AD44  98 C3 00 33 */	stb r6, 0x33(r3)
/* 8004DE08 0004AD48  88 84 00 02 */	lbz r4, 2(r4)
/* 8004DE0C 0004AD4C  98 83 00 34 */	stb r4, 0x34(r3)
/* 8004DE10 0004AD50  B0 A3 00 36 */	sth r5, 0x36(r3)
/* 8004DE14 0004AD54  B0 03 00 38 */	sth r0, 0x38(r3)
/* 8004DE18 0004AD58  B0 E3 00 3A */	sth r7, 0x3a(r3)
/* 8004DE1C 0004AD5C  B2 C3 00 3C */	sth r22, 0x3c(r3)
/* 8004DE20 0004AD60  B0 A3 00 3E */	sth r5, 0x3e(r3)
/* 8004DE24 0004AD64  B0 03 00 40 */	sth r0, 0x40(r3)
/* 8004DE28 0004AD68  B0 E3 00 42 */	sth r7, 0x42(r3)
/* 8004DE2C 0004AD6C  B2 C3 00 44 */	sth r22, 0x44(r3)
/* 8004DE30 0004AD70  B0 A3 00 46 */	sth r5, 0x46(r3)
/* 8004DE34 0004AD74  3A E0 00 01 */	li r23, 1
/* 8004DE38 0004AD78  3B 00 00 C0 */	li r24, 0xc0
/* 8004DE3C 0004AD7C  3B 20 00 C1 */	li r25, 0xc1
/* 8004DE40 0004AD80  B0 03 00 48 */	sth r0, 0x48(r3)
/* 8004DE44 0004AD84  3B 40 00 C2 */	li r26, 0xc2
/* 8004DE48 0004AD88  3B 60 00 C3 */	li r27, 0xc3
/* 8004DE4C 0004AD8C  3B 80 00 C4 */	li r28, 0xc4
/* 8004DE50 0004AD90  B0 E3 00 4A */	sth r7, 0x4a(r3)
/* 8004DE54 0004AD94  3B A0 00 C5 */	li r29, 0xc5
/* 8004DE58 0004AD98  3B C0 00 C6 */	li r30, 0xc6
/* 8004DE5C 0004AD9C  3B E0 00 C7 */	li r31, 0xc7
/* 8004DE60 0004ADA0  B2 C3 00 4C */	sth r22, 0x4c(r3)
/* 8004DE64 0004ADA4  39 80 00 C8 */	li r12, 0xc8
/* 8004DE68 0004ADA8  39 60 00 C9 */	li r11, 0xc9
/* 8004DE6C 0004ADAC  39 40 00 CA */	li r10, 0xca
/* 8004DE70 0004ADB0  B0 A3 00 4E */	sth r5, 0x4e(r3)
/* 8004DE74 0004ADB4  39 20 00 CB */	li r9, 0xcb
/* 8004DE78 0004ADB8  39 00 00 CC */	li r8, 0xcc
/* 8004DE7C 0004ADBC  38 C0 00 CD */	li r6, 0xcd
/* 8004DE80 0004ADC0  B0 03 00 50 */	sth r0, 0x50(r3)
/* 8004DE84 0004ADC4  38 A0 00 CE */	li r5, 0xce
/* 8004DE88 0004ADC8  38 80 00 CF */	li r4, 0xcf
/* 8004DE8C 0004ADCC  38 00 00 02 */	li r0, 2
/* 8004DE90 0004ADD0  B0 E3 00 52 */	sth r7, 0x52(r3)
/* 8004DE94 0004ADD4  7C 75 1B 78 */	mr r21, r3
/* 8004DE98 0004ADD8  80 E2 85 C4 */	lwz r7, j2dDefaultTevKColor@sda21(r2)
/* 8004DE9C 0004ADDC  B2 C3 00 54 */	sth r22, 0x54(r3)
/* 8004DEA0 0004ADE0  9A E3 00 56 */	stb r23, 0x56(r3)
/* 8004DEA4 0004ADE4  9B 03 00 57 */	stb r24, 0x57(r3)
/* 8004DEA8 0004ADE8  9B 23 00 5B */	stb r25, 0x5b(r3)
/* 8004DEAC 0004ADEC  9B 43 00 5F */	stb r26, 0x5f(r3)
/* 8004DEB0 0004ADF0  9B 63 00 63 */	stb r27, 0x63(r3)
/* 8004DEB4 0004ADF4  9B 83 00 67 */	stb r28, 0x67(r3)
/* 8004DEB8 0004ADF8  9B A3 00 6B */	stb r29, 0x6b(r3)
/* 8004DEBC 0004ADFC  9B C3 00 6F */	stb r30, 0x6f(r3)
/* 8004DEC0 0004AE00  9B E3 00 73 */	stb r31, 0x73(r3)
/* 8004DEC4 0004AE04  99 83 00 77 */	stb r12, 0x77(r3)
/* 8004DEC8 0004AE08  99 63 00 7B */	stb r11, 0x7b(r3)
/* 8004DECC 0004AE0C  99 43 00 7F */	stb r10, 0x7f(r3)
/* 8004DED0 0004AE10  99 23 00 83 */	stb r9, 0x83(r3)
/* 8004DED4 0004AE14  99 03 00 87 */	stb r8, 0x87(r3)
/* 8004DED8 0004AE18  98 C3 00 8B */	stb r6, 0x8b(r3)
/* 8004DEDC 0004AE1C  98 A3 00 8F */	stb r5, 0x8f(r3)
/* 8004DEE0 0004AE20  98 83 00 93 */	stb r4, 0x93(r3)
/* 8004DEE4 0004AE24  7C 09 03 A6 */	mtctr r0
.L_8004DEE8:
/* 8004DEE8 0004AE28  90 E1 00 08 */	stw r7, 8(r1)
/* 8004DEEC 0004AE2C  88 C1 00 08 */	lbz r6, 8(r1)
/* 8004DEF0 0004AE30  88 A1 00 09 */	lbz r5, 9(r1)
/* 8004DEF4 0004AE34  98 D5 00 98 */	stb r6, 0x98(r21)
/* 8004DEF8 0004AE38  88 81 00 0A */	lbz r4, 0xa(r1)
/* 8004DEFC 0004AE3C  88 01 00 0B */	lbz r0, 0xb(r1)
/* 8004DF00 0004AE40  98 B5 00 99 */	stb r5, 0x99(r21)
/* 8004DF04 0004AE44  98 95 00 9A */	stb r4, 0x9a(r21)
/* 8004DF08 0004AE48  90 E1 00 08 */	stw r7, 8(r1)
/* 8004DF0C 0004AE4C  98 C1 00 0C */	stb r6, 0xc(r1)
/* 8004DF10 0004AE50  88 C1 00 08 */	lbz r6, 8(r1)
/* 8004DF14 0004AE54  98 15 00 9B */	stb r0, 0x9b(r21)
/* 8004DF18 0004AE58  98 A1 00 0D */	stb r5, 0xd(r1)
/* 8004DF1C 0004AE5C  88 A1 00 09 */	lbz r5, 9(r1)
/* 8004DF20 0004AE60  98 D5 00 9C */	stb r6, 0x9c(r21)
/* 8004DF24 0004AE64  98 81 00 0E */	stb r4, 0xe(r1)
/* 8004DF28 0004AE68  88 81 00 0A */	lbz r4, 0xa(r1)
/* 8004DF2C 0004AE6C  98 B5 00 9D */	stb r5, 0x9d(r21)
/* 8004DF30 0004AE70  98 01 00 0F */	stb r0, 0xf(r1)
/* 8004DF34 0004AE74  88 01 00 0B */	lbz r0, 0xb(r1)
/* 8004DF38 0004AE78  98 95 00 9E */	stb r4, 0x9e(r21)
/* 8004DF3C 0004AE7C  98 15 00 9F */	stb r0, 0x9f(r21)
/* 8004DF40 0004AE80  3A B5 00 08 */	addi r21, r21, 8
/* 8004DF44 0004AE84  98 C1 00 0C */	stb r6, 0xc(r1)
/* 8004DF48 0004AE88  98 A1 00 0D */	stb r5, 0xd(r1)
/* 8004DF4C 0004AE8C  98 81 00 0E */	stb r4, 0xe(r1)
/* 8004DF50 0004AE90  98 01 00 0F */	stb r0, 0xf(r1)
/* 8004DF54 0004AE94  42 00 FF 94 */	bdnz .L_8004DEE8
/* 8004DF58 0004AE98  38 E0 00 FF */	li r7, 0xff
/* 8004DF5C 0004AE9C  3C 80 80 48 */	lis r4, j2dDefaultIndTevStageInfo@ha
/* 8004DF60 0004AEA0  98 E3 00 A8 */	stb r7, 0xa8(r3)
/* 8004DF64 0004AEA4  38 C2 85 CC */	addi r6, r2, j2dDefaultTevSwapModeTable@sda21
/* 8004DF68 0004AEA8  38 00 00 04 */	li r0, 4
/* 8004DF6C 0004AEAC  7C 65 1B 78 */	mr r5, r3
/* 8004DF70 0004AEB0  98 E3 00 B0 */	stb r7, 0xb0(r3)
/* 8004DF74 0004AEB4  38 84 86 BC */	addi r4, r4, j2dDefaultIndTevStageInfo@l
/* 8004DF78 0004AEB8  98 E3 00 A9 */	stb r7, 0xa9(r3)
/* 8004DF7C 0004AEBC  98 E3 00 B1 */	stb r7, 0xb1(r3)
/* 8004DF80 0004AEC0  98 E3 00 AA */	stb r7, 0xaa(r3)
/* 8004DF84 0004AEC4  98 E3 00 B2 */	stb r7, 0xb2(r3)
/* 8004DF88 0004AEC8  98 E3 00 AB */	stb r7, 0xab(r3)
/* 8004DF8C 0004AECC  98 E3 00 B3 */	stb r7, 0xb3(r3)
/* 8004DF90 0004AED0  98 E3 00 AC */	stb r7, 0xac(r3)
/* 8004DF94 0004AED4  98 E3 00 B4 */	stb r7, 0xb4(r3)
/* 8004DF98 0004AED8  98 E3 00 AD */	stb r7, 0xad(r3)
/* 8004DF9C 0004AEDC  98 E3 00 B5 */	stb r7, 0xb5(r3)
/* 8004DFA0 0004AEE0  98 E3 00 AE */	stb r7, 0xae(r3)
/* 8004DFA4 0004AEE4  98 E3 00 B6 */	stb r7, 0xb6(r3)
/* 8004DFA8 0004AEE8  98 E3 00 AF */	stb r7, 0xaf(r3)
/* 8004DFAC 0004AEEC  98 E3 00 B7 */	stb r7, 0xb7(r3)
/* 8004DFB0 0004AEF0  88 E6 00 01 */	lbz r7, 1(r6)
/* 8004DFB4 0004AEF4  89 26 00 02 */	lbz r9, 2(r6)
/* 8004DFB8 0004AEF8  89 02 85 CC */	lbz r8, j2dDefaultTevSwapModeTable@sda21(r2)
/* 8004DFBC 0004AEFC  54 E7 25 36 */	rlwinm r7, r7, 4, 0x14, 0x1b
/* 8004DFC0 0004AF00  55 29 10 3A */	slwi r9, r9, 2
/* 8004DFC4 0004AF04  89 46 00 03 */	lbz r10, 3(r6)
/* 8004DFC8 0004AF08  7C E7 4A 14 */	add r7, r7, r9
/* 8004DFCC 0004AF0C  55 08 30 32 */	slwi r8, r8, 6
/* 8004DFD0 0004AF10  7C E7 52 14 */	add r7, r7, r10
/* 8004DFD4 0004AF14  7C E8 3A 14 */	add r7, r8, r7
/* 8004DFD8 0004AF18  98 E3 00 B8 */	stb r7, 0xb8(r3)
/* 8004DFDC 0004AF1C  88 E6 00 01 */	lbz r7, 1(r6)
/* 8004DFE0 0004AF20  89 26 00 02 */	lbz r9, 2(r6)
/* 8004DFE4 0004AF24  89 02 85 CC */	lbz r8, j2dDefaultTevSwapModeTable@sda21(r2)
/* 8004DFE8 0004AF28  54 E7 25 36 */	rlwinm r7, r7, 4, 0x14, 0x1b
/* 8004DFEC 0004AF2C  55 29 10 3A */	slwi r9, r9, 2
/* 8004DFF0 0004AF30  89 46 00 03 */	lbz r10, 3(r6)
/* 8004DFF4 0004AF34  7C E7 4A 14 */	add r7, r7, r9
/* 8004DFF8 0004AF38  55 08 30 32 */	slwi r8, r8, 6
/* 8004DFFC 0004AF3C  7C E7 52 14 */	add r7, r7, r10
/* 8004E000 0004AF40  7C E8 3A 14 */	add r7, r8, r7
/* 8004E004 0004AF44  98 E3 00 B9 */	stb r7, 0xb9(r3)
/* 8004E008 0004AF48  88 E6 00 01 */	lbz r7, 1(r6)
/* 8004E00C 0004AF4C  89 26 00 02 */	lbz r9, 2(r6)
/* 8004E010 0004AF50  89 02 85 CC */	lbz r8, j2dDefaultTevSwapModeTable@sda21(r2)
/* 8004E014 0004AF54  54 E7 25 36 */	rlwinm r7, r7, 4, 0x14, 0x1b
/* 8004E018 0004AF58  55 29 10 3A */	slwi r9, r9, 2
/* 8004E01C 0004AF5C  89 46 00 03 */	lbz r10, 3(r6)
/* 8004E020 0004AF60  7C E7 4A 14 */	add r7, r7, r9
/* 8004E024 0004AF64  55 08 30 32 */	slwi r8, r8, 6
/* 8004E028 0004AF68  7C E7 52 14 */	add r7, r7, r10
/* 8004E02C 0004AF6C  7C E8 3A 14 */	add r7, r8, r7
/* 8004E030 0004AF70  98 E3 00 BA */	stb r7, 0xba(r3)
/* 8004E034 0004AF74  89 26 00 02 */	lbz r9, 2(r6)
/* 8004E038 0004AF78  88 E6 00 01 */	lbz r7, 1(r6)
/* 8004E03C 0004AF7C  89 02 85 CC */	lbz r8, j2dDefaultTevSwapModeTable@sda21(r2)
/* 8004E040 0004AF80  55 29 10 3A */	slwi r9, r9, 2
/* 8004E044 0004AF84  54 E7 20 36 */	slwi r7, r7, 4
/* 8004E048 0004AF88  89 46 00 03 */	lbz r10, 3(r6)
/* 8004E04C 0004AF8C  7C C7 4A 14 */	add r6, r7, r9
/* 8004E050 0004AF90  55 07 30 32 */	slwi r7, r8, 6
/* 8004E054 0004AF94  7C C6 52 14 */	add r6, r6, r10
/* 8004E058 0004AF98  7C C7 32 14 */	add r6, r7, r6
/* 8004E05C 0004AF9C  98 C3 00 BB */	stb r6, 0xbb(r3)
/* 8004E060 0004AFA0  7C 09 03 A6 */	mtctr r0
.L_8004E064:
/* 8004E064 0004AFA4  80 C4 00 04 */	lwz r6, 4(r4)
/* 8004E068 0004AFA8  80 04 00 08 */	lwz r0, 8(r4)
/* 8004E06C 0004AFAC  90 C1 00 14 */	stw r6, 0x14(r1)
/* 8004E070 0004AFB0  80 C4 00 00 */	lwz r6, 0(r4)
/* 8004E074 0004AFB4  90 01 00 18 */	stw r0, 0x18(r1)
/* 8004E078 0004AFB8  88 01 00 17 */	lbz r0, 0x17(r1)
/* 8004E07C 0004AFBC  90 C1 00 10 */	stw r6, 0x10(r1)
/* 8004E080 0004AFC0  88 C1 00 18 */	lbz r6, 0x18(r1)
/* 8004E084 0004AFC4  54 00 A8 14 */	slwi r0, r0, 0x15
/* 8004E088 0004AFC8  88 E1 00 16 */	lbz r7, 0x16(r1)
/* 8004E08C 0004AFCC  54 C6 B0 12 */	slwi r6, r6, 0x16
/* 8004E090 0004AFD0  89 01 00 13 */	lbz r8, 0x13(r1)
/* 8004E094 0004AFD4  89 21 00 15 */	lbz r9, 0x15(r1)
/* 8004E098 0004AFD8  54 E7 A0 16 */	slwi r7, r7, 0x14
/* 8004E09C 0004AFDC  7C C0 03 78 */	or r0, r6, r0
/* 8004E0A0 0004AFE0  89 41 00 14 */	lbz r10, 0x14(r1)
/* 8004E0A4 0004AFE4  89 61 00 12 */	lbz r11, 0x12(r1)
/* 8004E0A8 0004AFE8  55 06 80 1E */	slwi r6, r8, 0x10
/* 8004E0AC 0004AFEC  7C E0 03 78 */	or r0, r7, r0
/* 8004E0B0 0004AFF0  89 81 00 11 */	lbz r12, 0x11(r1)
/* 8004E0B4 0004AFF4  55 27 58 28 */	slwi r7, r9, 0xb
/* 8004E0B8 0004AFF8  55 48 40 2E */	slwi r8, r10, 8
/* 8004E0BC 0004AFFC  7C C0 03 78 */	or r0, r6, r0
/* 8004E0C0 0004B000  55 66 20 36 */	slwi r6, r11, 4
/* 8004E0C4 0004B004  7C E0 03 78 */	or r0, r7, r0
/* 8004E0C8 0004B008  55 87 10 3A */	slwi r7, r12, 2
/* 8004E0CC 0004B00C  7D 00 03 78 */	or r0, r8, r0
/* 8004E0D0 0004B010  89 01 00 10 */	lbz r8, 0x10(r1)
/* 8004E0D4 0004B014  7C C0 03 78 */	or r0, r6, r0
/* 8004E0D8 0004B018  7C E0 03 78 */	or r0, r7, r0
/* 8004E0DC 0004B01C  7D 00 03 78 */	or r0, r8, r0
/* 8004E0E0 0004B020  90 05 00 BC */	stw r0, 0xbc(r5)
/* 8004E0E4 0004B024  80 C4 00 04 */	lwz r6, 4(r4)
/* 8004E0E8 0004B028  80 04 00 08 */	lwz r0, 8(r4)
/* 8004E0EC 0004B02C  90 C1 00 14 */	stw r6, 0x14(r1)
/* 8004E0F0 0004B030  80 C4 00 00 */	lwz r6, 0(r4)
/* 8004E0F4 0004B034  90 01 00 18 */	stw r0, 0x18(r1)
/* 8004E0F8 0004B038  88 01 00 17 */	lbz r0, 0x17(r1)
/* 8004E0FC 0004B03C  90 C1 00 10 */	stw r6, 0x10(r1)
/* 8004E100 0004B040  88 C1 00 18 */	lbz r6, 0x18(r1)
/* 8004E104 0004B044  54 00 A8 14 */	slwi r0, r0, 0x15
/* 8004E108 0004B048  88 E1 00 16 */	lbz r7, 0x16(r1)
/* 8004E10C 0004B04C  54 C6 B0 12 */	slwi r6, r6, 0x16
/* 8004E110 0004B050  89 01 00 13 */	lbz r8, 0x13(r1)
/* 8004E114 0004B054  89 21 00 15 */	lbz r9, 0x15(r1)
/* 8004E118 0004B058  54 E7 A0 16 */	slwi r7, r7, 0x14
/* 8004E11C 0004B05C  7C C0 03 78 */	or r0, r6, r0
/* 8004E120 0004B060  89 41 00 14 */	lbz r10, 0x14(r1)
/* 8004E124 0004B064  89 61 00 12 */	lbz r11, 0x12(r1)
/* 8004E128 0004B068  55 06 80 1E */	slwi r6, r8, 0x10
/* 8004E12C 0004B06C  7C E0 03 78 */	or r0, r7, r0
/* 8004E130 0004B070  89 81 00 11 */	lbz r12, 0x11(r1)
/* 8004E134 0004B074  55 27 58 28 */	slwi r7, r9, 0xb
/* 8004E138 0004B078  55 48 40 2E */	slwi r8, r10, 8
/* 8004E13C 0004B07C  7C C0 03 78 */	or r0, r6, r0
/* 8004E140 0004B080  55 66 20 36 */	slwi r6, r11, 4
/* 8004E144 0004B084  7C E0 03 78 */	or r0, r7, r0
/* 8004E148 0004B088  55 87 10 3A */	slwi r7, r12, 2
/* 8004E14C 0004B08C  7D 00 03 78 */	or r0, r8, r0
/* 8004E150 0004B090  89 01 00 10 */	lbz r8, 0x10(r1)
/* 8004E154 0004B094  7C C0 03 78 */	or r0, r6, r0
/* 8004E158 0004B098  7C E0 03 78 */	or r0, r7, r0
/* 8004E15C 0004B09C  7D 00 03 78 */	or r0, r8, r0
/* 8004E160 0004B0A0  90 05 00 C0 */	stw r0, 0xc0(r5)
/* 8004E164 0004B0A4  38 A5 00 08 */	addi r5, r5, 8
/* 8004E168 0004B0A8  42 00 FE FC */	bdnz .L_8004E064
/* 8004E16C 0004B0AC  38 00 00 00 */	li r0, 0
/* 8004E170 0004B0B0  90 03 00 FC */	stw r0, 0xfc(r3)
/* 8004E174 0004B0B4  90 03 01 00 */	stw r0, 0x100(r3)
/* 8004E178 0004B0B8  90 03 01 04 */	stw r0, 0x104(r3)
/* 8004E17C 0004B0BC  90 03 01 08 */	stw r0, 0x108(r3)
/* 8004E180 0004B0C0  90 03 01 0C */	stw r0, 0x10c(r3)
/* 8004E184 0004B0C4  90 03 01 10 */	stw r0, 0x110(r3)
/* 8004E188 0004B0C8  90 03 01 14 */	stw r0, 0x114(r3)
/* 8004E18C 0004B0CC  90 03 01 18 */	stw r0, 0x118(r3)
/* 8004E190 0004B0D0  90 03 01 1C */	stw r0, 0x11c(r3)
/* 8004E194 0004B0D4  98 03 01 21 */	stb r0, 0x121(r3)
/* 8004E198 0004B0D8  BA A1 00 24 */	lmw r21, 0x24(r1)
/* 8004E19C 0004B0DC  38 21 00 50 */	addi r1, r1, 0x50
/* 8004E1A0 0004B0E0  4E 80 00 20 */	blr 
.endfn initialize__12J2DTevBlock8Fv

.fn prepareTexture__12J2DTevBlock8FUc, global
/* 8004E1A4 0004B0E4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8004E1A8 0004B0E8  7C 08 02 A6 */	mflr r0
/* 8004E1AC 0004B0EC  90 01 00 24 */	stw r0, 0x24(r1)
/* 8004E1B0 0004B0F0  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8004E1B4 0004B0F4  54 9F 06 3E */	clrlwi r31, r4, 0x18
/* 8004E1B8 0004B0F8  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8004E1BC 0004B0FC  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8004E1C0 0004B100  3B A0 00 00 */	li r29, 0
/* 8004E1C4 0004B104  93 81 00 10 */	stw r28, 0x10(r1)
/* 8004E1C8 0004B108  7C 7C 1B 78 */	mr r28, r3
/* 8004E1CC 0004B10C  48 00 00 88 */	b .L_8004E254
.L_8004E1D0:
/* 8004E1D0 0004B110  57 A0 06 3E */	clrlwi r0, r29, 0x18
/* 8004E1D4 0004B114  28 00 00 08 */	cmplwi r0, 8
/* 8004E1D8 0004B118  41 80 00 0C */	blt .L_8004E1E4
/* 8004E1DC 0004B11C  38 60 00 00 */	li r3, 0
/* 8004E1E0 0004B120  48 00 00 84 */	b .L_8004E264
.L_8004E1E4:
/* 8004E1E4 0004B124  57 A3 15 BA */	rlwinm r3, r29, 2, 0x16, 0x1d
/* 8004E1E8 0004B128  3B C3 00 DC */	addi r30, r3, 0xdc
/* 8004E1EC 0004B12C  7C 1C F0 2E */	lwzx r0, r28, r30
/* 8004E1F0 0004B130  28 00 00 00 */	cmplwi r0, 0
/* 8004E1F4 0004B134  40 82 00 5C */	bne .L_8004E250
/* 8004E1F8 0004B138  38 60 00 40 */	li r3, 0x40
/* 8004E1FC 0004B13C  4B FD 5C A9 */	bl __nw__FUl
/* 8004E200 0004B140  28 03 00 00 */	cmplwi r3, 0
/* 8004E204 0004B144  41 82 00 1C */	beq .L_8004E220
/* 8004E208 0004B148  88 83 00 3B */	lbz r4, 0x3b(r3)
/* 8004E20C 0004B14C  38 00 00 00 */	li r0, 0
/* 8004E210 0004B150  54 84 07 BC */	rlwinm r4, r4, 0, 0x1e, 0x1e
/* 8004E214 0004B154  98 83 00 3B */	stb r4, 0x3b(r3)
/* 8004E218 0004B158  90 03 00 28 */	stw r0, 0x28(r3)
/* 8004E21C 0004B15C  90 03 00 20 */	stw r0, 0x20(r3)
.L_8004E220:
/* 8004E220 0004B160  7C 7C F1 2E */	stwx r3, r28, r30
/* 8004E224 0004B164  7C 1C F0 2E */	lwzx r0, r28, r30
/* 8004E228 0004B168  28 00 00 00 */	cmplwi r0, 0
/* 8004E22C 0004B16C  40 82 00 0C */	bne .L_8004E238
/* 8004E230 0004B170  38 60 00 00 */	li r3, 0
/* 8004E234 0004B174  48 00 00 30 */	b .L_8004E264
.L_8004E238:
/* 8004E238 0004B178  57 A0 06 3E */	clrlwi r0, r29, 0x18
/* 8004E23C 0004B17C  38 60 00 01 */	li r3, 1
/* 8004E240 0004B180  88 9C 01 20 */	lbz r4, 0x120(r28)
/* 8004E244 0004B184  7C 60 00 30 */	slw r0, r3, r0
/* 8004E248 0004B188  7C 80 03 78 */	or r0, r4, r0
/* 8004E24C 0004B18C  98 1C 01 20 */	stb r0, 0x120(r28)
.L_8004E250:
/* 8004E250 0004B190  3B BD 00 01 */	addi r29, r29, 1
.L_8004E254:
/* 8004E254 0004B194  57 A0 06 3E */	clrlwi r0, r29, 0x18
/* 8004E258 0004B198  7C 00 F8 40 */	cmplw r0, r31
/* 8004E25C 0004B19C  41 80 FF 74 */	blt .L_8004E1D0
/* 8004E260 0004B1A0  38 60 00 01 */	li r3, 1
.L_8004E264:
/* 8004E264 0004B1A4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8004E268 0004B1A8  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8004E26C 0004B1AC  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8004E270 0004B1B0  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8004E274 0004B1B4  83 81 00 10 */	lwz r28, 0x10(r1)
/* 8004E278 0004B1B8  7C 08 03 A6 */	mtlr r0
/* 8004E27C 0004B1BC  38 21 00 20 */	addi r1, r1, 0x20
/* 8004E280 0004B1C0  4E 80 00 20 */	blr 
.endfn prepareTexture__12J2DTevBlock8FUc

.fn insertTexture__12J2DTevBlock8FUlPC7ResTIMGP10JUTPalette, global
/* 8004E284 0004B1C4  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8004E288 0004B1C8  7C 08 02 A6 */	mflr r0
/* 8004E28C 0004B1CC  90 01 00 34 */	stw r0, 0x34(r1)
/* 8004E290 0004B1D0  BF 21 00 14 */	stmw r25, 0x14(r1)
/* 8004E294 0004B1D4  7C 9A 23 78 */	mr r26, r4
/* 8004E298 0004B1D8  28 1A 00 08 */	cmplwi r26, 8
/* 8004E29C 0004B1DC  7C 79 1B 78 */	mr r25, r3
/* 8004E2A0 0004B1E0  7C BB 2B 78 */	mr r27, r5
/* 8004E2A4 0004B1E4  7C DC 33 78 */	mr r28, r6
/* 8004E2A8 0004B1E8  40 80 00 0C */	bge .L_8004E2B4
/* 8004E2AC 0004B1EC  28 1B 00 00 */	cmplwi r27, 0
/* 8004E2B0 0004B1F0  40 82 00 0C */	bne .L_8004E2BC
.L_8004E2B4:
/* 8004E2B4 0004B1F4  38 60 00 00 */	li r3, 0
/* 8004E2B8 0004B1F8  48 00 03 80 */	b .L_8004E638
.L_8004E2BC:
/* 8004E2BC 0004B1FC  3B C0 00 00 */	li r30, 0
/* 8004E2C0 0004B200  48 00 00 28 */	b .L_8004E2E8
.L_8004E2C4:
/* 8004E2C4 0004B204  57 C3 15 BA */	rlwinm r3, r30, 2, 0x16, 0x1d
/* 8004E2C8 0004B208  38 03 00 DC */	addi r0, r3, 0xdc
/* 8004E2CC 0004B20C  7C 79 00 2E */	lwzx r3, r25, r0
/* 8004E2D0 0004B210  28 03 00 00 */	cmplwi r3, 0
/* 8004E2D4 0004B214  41 82 00 20 */	beq .L_8004E2F4
/* 8004E2D8 0004B218  80 03 00 20 */	lwz r0, 0x20(r3)
/* 8004E2DC 0004B21C  28 00 00 00 */	cmplwi r0, 0
/* 8004E2E0 0004B220  41 82 00 14 */	beq .L_8004E2F4
/* 8004E2E4 0004B224  3B DE 00 01 */	addi r30, r30, 1
.L_8004E2E8:
/* 8004E2E8 0004B228  57 C0 06 3E */	clrlwi r0, r30, 0x18
/* 8004E2EC 0004B22C  28 00 00 08 */	cmplwi r0, 8
/* 8004E2F0 0004B230  41 80 FF D4 */	blt .L_8004E2C4
.L_8004E2F4:
/* 8004E2F4 0004B234  57 C0 06 3E */	clrlwi r0, r30, 0x18
/* 8004E2F8 0004B238  7C 00 D0 40 */	cmplw r0, r26
/* 8004E2FC 0004B23C  40 80 00 0C */	bge .L_8004E308
/* 8004E300 0004B240  38 60 00 00 */	li r3, 0
/* 8004E304 0004B244  48 00 03 34 */	b .L_8004E638
.L_8004E308:
/* 8004E308 0004B248  28 00 00 08 */	cmplwi r0, 8
/* 8004E30C 0004B24C  40 82 00 0C */	bne .L_8004E318
/* 8004E310 0004B250  38 60 00 00 */	li r3, 0
/* 8004E314 0004B254  48 00 03 24 */	b .L_8004E638
.L_8004E318:
/* 8004E318 0004B258  88 1B 00 08 */	lbz r0, 8(r27)
/* 8004E31C 0004B25C  3B A0 00 00 */	li r29, 0
/* 8004E320 0004B260  28 00 00 00 */	cmplwi r0, 0
/* 8004E324 0004B264  41 82 00 B4 */	beq .L_8004E3D8
/* 8004E328 0004B268  28 1C 00 00 */	cmplwi r28, 0
/* 8004E32C 0004B26C  40 82 00 AC */	bne .L_8004E3D8
/* 8004E330 0004B270  38 00 00 07 */	li r0, 7
/* 8004E334 0004B274  7F 25 CB 78 */	mr r5, r25
/* 8004E338 0004B278  38 E0 00 00 */	li r7, 0
/* 8004E33C 0004B27C  7C 09 03 A6 */	mtctr r0
/* 8004E340 0004B280  38 60 00 01 */	li r3, 1
.L_8004E344:
/* 8004E344 0004B284  80 C5 00 DC */	lwz r6, 0xdc(r5)
/* 8004E348 0004B288  28 06 00 00 */	cmplwi r6, 0
/* 8004E34C 0004B28C  41 82 00 4C */	beq .L_8004E398
/* 8004E350 0004B290  80 86 00 20 */	lwz r4, 0x20(r6)
/* 8004E354 0004B294  28 04 00 00 */	cmplwi r4, 0
/* 8004E358 0004B298  41 82 00 40 */	beq .L_8004E398
/* 8004E35C 0004B29C  88 04 00 08 */	lbz r0, 8(r4)
/* 8004E360 0004B2A0  28 00 00 00 */	cmplwi r0, 0
/* 8004E364 0004B2A4  41 82 00 34 */	beq .L_8004E398
/* 8004E368 0004B2A8  88 86 00 3A */	lbz r4, 0x3a(r6)
/* 8004E36C 0004B2AC  38 00 00 00 */	li r0, 0
/* 8004E370 0004B2B0  2C 04 00 10 */	cmpwi r4, 0x10
/* 8004E374 0004B2B4  41 80 00 08 */	blt .L_8004E37C
/* 8004E378 0004B2B8  38 00 00 10 */	li r0, 0x10
.L_8004E37C:
/* 8004E37C 0004B2BC  7C 00 20 50 */	subf r0, r0, r4
/* 8004E380 0004B2C0  54 00 06 3E */	clrlwi r0, r0, 0x18
/* 8004E384 0004B2C4  28 00 00 08 */	cmplwi r0, 8
/* 8004E388 0004B2C8  40 80 00 10 */	bge .L_8004E398
/* 8004E38C 0004B2CC  7C 60 00 30 */	slw r0, r3, r0
/* 8004E390 0004B2D0  7C E0 03 78 */	or r0, r7, r0
/* 8004E394 0004B2D4  54 07 06 3E */	clrlwi r7, r0, 0x18
.L_8004E398:
/* 8004E398 0004B2D8  38 A5 00 04 */	addi r5, r5, 4
/* 8004E39C 0004B2DC  42 00 FF A8 */	bdnz .L_8004E344
/* 8004E3A0 0004B2E0  54 E4 06 3E */	clrlwi r4, r7, 0x18
/* 8004E3A4 0004B2E4  38 A0 00 00 */	li r5, 0
/* 8004E3A8 0004B2E8  38 60 00 01 */	li r3, 1
/* 8004E3AC 0004B2EC  48 00 00 20 */	b .L_8004E3CC
.L_8004E3B0:
/* 8004E3B0 0004B2F0  54 A0 06 3E */	clrlwi r0, r5, 0x18
/* 8004E3B4 0004B2F4  7C 60 00 30 */	slw r0, r3, r0
/* 8004E3B8 0004B2F8  7C 80 00 39 */	and. r0, r4, r0
/* 8004E3BC 0004B2FC  40 82 00 0C */	bne .L_8004E3C8
/* 8004E3C0 0004B300  7C BD 2B 78 */	mr r29, r5
/* 8004E3C4 0004B304  48 00 00 14 */	b .L_8004E3D8
.L_8004E3C8:
/* 8004E3C8 0004B308  38 A5 00 01 */	addi r5, r5, 1
.L_8004E3CC:
/* 8004E3CC 0004B30C  54 A0 06 3E */	clrlwi r0, r5, 0x18
/* 8004E3D0 0004B310  28 00 00 08 */	cmplwi r0, 8
/* 8004E3D4 0004B314  41 80 FF DC */	blt .L_8004E3B0
.L_8004E3D8:
/* 8004E3D8 0004B318  57 C0 15 BA */	rlwinm r0, r30, 2, 0x16, 0x1d
/* 8004E3DC 0004B31C  7C 79 02 14 */	add r3, r25, r0
/* 8004E3E0 0004B320  83 E3 00 DC */	lwz r31, 0xdc(r3)
/* 8004E3E4 0004B324  28 1F 00 00 */	cmplwi r31, 0
/* 8004E3E8 0004B328  40 82 00 EC */	bne .L_8004E4D4
/* 8004E3EC 0004B32C  38 60 00 40 */	li r3, 0x40
/* 8004E3F0 0004B330  4B FD 5A B5 */	bl __nw__FUl
/* 8004E3F4 0004B334  7C 7F 1B 79 */	or. r31, r3, r3
/* 8004E3F8 0004B338  41 82 00 24 */	beq .L_8004E41C
/* 8004E3FC 0004B33C  38 00 00 00 */	li r0, 0
/* 8004E400 0004B340  7F 64 DB 78 */	mr r4, r27
/* 8004E404 0004B344  90 1F 00 28 */	stw r0, 0x28(r31)
/* 8004E408 0004B348  7F A5 EB 78 */	mr r5, r29
/* 8004E40C 0004B34C  4B FE 4C 79 */	bl storeTIMG__10JUTTextureFPC7ResTIMGUc
/* 8004E410 0004B350  88 1F 00 3B */	lbz r0, 0x3b(r31)
/* 8004E414 0004B354  54 00 07 BC */	rlwinm r0, r0, 0, 0x1e, 0x1e
/* 8004E418 0004B358  98 1F 00 3B */	stb r0, 0x3b(r31)
.L_8004E41C:
/* 8004E41C 0004B35C  28 1F 00 00 */	cmplwi r31, 0
/* 8004E420 0004B360  40 82 00 0C */	bne .L_8004E42C
/* 8004E424 0004B364  38 60 00 00 */	li r3, 0
/* 8004E428 0004B368  48 00 02 10 */	b .L_8004E638
.L_8004E42C:
/* 8004E42C 0004B36C  28 1C 00 00 */	cmplwi r28, 0
/* 8004E430 0004B370  41 82 00 14 */	beq .L_8004E444
/* 8004E434 0004B374  7F E3 FB 78 */	mr r3, r31
/* 8004E438 0004B378  7F 64 DB 78 */	mr r4, r27
/* 8004E43C 0004B37C  7F 85 E3 78 */	mr r5, r28
/* 8004E440 0004B380  4B FE 4D F1 */	bl storeTIMG__10JUTTextureFPC7ResTIMGP10JUTPalette
.L_8004E444:
/* 8004E444 0004B384  39 00 00 07 */	li r8, 7
/* 8004E448 0004B388  48 00 00 40 */	b .L_8004E488
.L_8004E44C:
/* 8004E44C 0004B38C  54 83 10 3A */	slwi r3, r4, 2
/* 8004E450 0004B390  55 00 15 BA */	rlwinm r0, r8, 2, 0x16, 0x1d
/* 8004E454 0004B394  7C D9 1A 14 */	add r6, r25, r3
/* 8004E458 0004B398  54 84 08 3C */	slwi r4, r4, 1
/* 8004E45C 0004B39C  80 A6 00 D8 */	lwz r5, 0xd8(r6)
/* 8004E460 0004B3A0  7C F9 02 14 */	add r7, r25, r0
/* 8004E464 0004B3A4  55 03 0D FC */	rlwinm r3, r8, 1, 0x17, 0x1e
/* 8004E468 0004B3A8  38 84 00 02 */	addi r4, r4, 2
/* 8004E46C 0004B3AC  90 A7 00 DC */	stw r5, 0xdc(r7)
/* 8004E470 0004B3B0  38 03 00 04 */	addi r0, r3, 4
/* 8004E474 0004B3B4  39 08 FF FF */	addi r8, r8, -1
/* 8004E478 0004B3B8  80 66 00 F8 */	lwz r3, 0xf8(r6)
/* 8004E47C 0004B3BC  90 67 00 FC */	stw r3, 0xfc(r7)
/* 8004E480 0004B3C0  7C 79 22 2E */	lhzx r3, r25, r4
/* 8004E484 0004B3C4  7C 79 03 2E */	sthx r3, r25, r0
.L_8004E488:
/* 8004E488 0004B3C8  55 04 06 3E */	clrlwi r4, r8, 0x18
/* 8004E48C 0004B3CC  7C 04 D0 40 */	cmplw r4, r26
/* 8004E490 0004B3D0  41 81 FF BC */	bgt .L_8004E44C
/* 8004E494 0004B3D4  57 40 10 3A */	slwi r0, r26, 2
/* 8004E498 0004B3D8  7F 23 CB 78 */	mr r3, r25
/* 8004E49C 0004B3DC  7C B9 02 14 */	add r5, r25, r0
/* 8004E4A0 0004B3E0  57 44 06 3E */	clrlwi r4, r26, 0x18
/* 8004E4A4 0004B3E4  93 E5 00 DC */	stw r31, 0xdc(r5)
/* 8004E4A8 0004B3E8  38 A0 00 01 */	li r5, 1
/* 8004E4AC 0004B3EC  81 99 00 00 */	lwz r12, 0(r25)
/* 8004E4B0 0004B3F0  81 8C 00 AC */	lwz r12, 0xac(r12)
/* 8004E4B4 0004B3F4  7D 89 03 A6 */	mtctr r12
/* 8004E4B8 0004B3F8  4E 80 04 21 */	bctrl 
/* 8004E4BC 0004B3FC  38 00 00 01 */	li r0, 1
/* 8004E4C0 0004B400  88 79 01 20 */	lbz r3, 0x120(r25)
/* 8004E4C4 0004B404  7C 00 D0 30 */	slw r0, r0, r26
/* 8004E4C8 0004B408  7C 60 03 78 */	or r0, r3, r0
/* 8004E4CC 0004B40C  98 19 01 20 */	stb r0, 0x120(r25)
/* 8004E4D0 0004B410  48 00 01 40 */	b .L_8004E610
.L_8004E4D4:
/* 8004E4D4 0004B414  28 1C 00 00 */	cmplwi r28, 0
/* 8004E4D8 0004B418  40 82 00 18 */	bne .L_8004E4F0
/* 8004E4DC 0004B41C  7F E3 FB 78 */	mr r3, r31
/* 8004E4E0 0004B420  7F 64 DB 78 */	mr r4, r27
/* 8004E4E4 0004B424  7F A5 EB 78 */	mr r5, r29
/* 8004E4E8 0004B428  4B FE 4B 9D */	bl storeTIMG__10JUTTextureFPC7ResTIMGUc
/* 8004E4EC 0004B42C  48 00 00 14 */	b .L_8004E500
.L_8004E4F0:
/* 8004E4F0 0004B430  7F E3 FB 78 */	mr r3, r31
/* 8004E4F4 0004B434  7F 64 DB 78 */	mr r4, r27
/* 8004E4F8 0004B438  7F 85 E3 78 */	mr r5, r28
/* 8004E4FC 0004B43C  4B FE 4D 35 */	bl storeTIMG__10JUTTextureFPC7ResTIMGP10JUTPalette
.L_8004E500:
/* 8004E500 0004B440  88 19 01 20 */	lbz r0, 0x120(r25)
/* 8004E504 0004B444  7F C3 F3 78 */	mr r3, r30
/* 8004E508 0004B448  38 81 00 08 */	addi r4, r1, 8
/* 8004E50C 0004B44C  54 0B 07 FE */	clrlwi r11, r0, 0x1f
/* 8004E510 0004B450  54 0A FF FE */	rlwinm r10, r0, 0x1f, 0x1f, 0x1f
/* 8004E514 0004B454  54 09 F7 FE */	rlwinm r9, r0, 0x1e, 0x1f, 0x1f
/* 8004E518 0004B458  54 08 EF FE */	rlwinm r8, r0, 0x1d, 0x1f, 0x1f
/* 8004E51C 0004B45C  54 07 E7 FE */	rlwinm r7, r0, 0x1c, 0x1f, 0x1f
/* 8004E520 0004B460  54 06 DF FE */	rlwinm r6, r0, 0x1b, 0x1f, 0x1f
/* 8004E524 0004B464  54 05 D7 FE */	rlwinm r5, r0, 0x1a, 0x1f, 0x1f
/* 8004E528 0004B468  54 00 CF FE */	rlwinm r0, r0, 0x19, 0x1f, 0x1f
/* 8004E52C 0004B46C  99 61 00 08 */	stb r11, 8(r1)
/* 8004E530 0004B470  99 41 00 09 */	stb r10, 9(r1)
/* 8004E534 0004B474  99 21 00 0A */	stb r9, 0xa(r1)
/* 8004E538 0004B478  99 01 00 0B */	stb r8, 0xb(r1)
/* 8004E53C 0004B47C  98 E1 00 0C */	stb r7, 0xc(r1)
/* 8004E540 0004B480  98 C1 00 0D */	stb r6, 0xd(r1)
/* 8004E544 0004B484  98 A1 00 0E */	stb r5, 0xe(r1)
/* 8004E548 0004B488  98 01 00 0F */	stb r0, 0xf(r1)
/* 8004E54C 0004B48C  48 00 00 50 */	b .L_8004E59C
.L_8004E550:
/* 8004E550 0004B490  55 05 10 3A */	slwi r5, r8, 2
/* 8004E554 0004B494  54 60 15 BA */	rlwinm r0, r3, 2, 0x16, 0x1d
/* 8004E558 0004B498  7D 39 2A 14 */	add r9, r25, r5
/* 8004E55C 0004B49C  55 06 08 3C */	slwi r6, r8, 1
/* 8004E560 0004B4A0  80 E9 00 D8 */	lwz r7, 0xd8(r9)
/* 8004E564 0004B4A4  7D 59 02 14 */	add r10, r25, r0
/* 8004E568 0004B4A8  38 08 FF FF */	addi r0, r8, -1
/* 8004E56C 0004B4AC  54 65 0D FC */	rlwinm r5, r3, 1, 0x17, 0x1e
/* 8004E570 0004B4B0  90 EA 00 DC */	stw r7, 0xdc(r10)
/* 8004E574 0004B4B4  54 68 06 3E */	clrlwi r8, r3, 0x18
/* 8004E578 0004B4B8  7C 04 00 AE */	lbzx r0, r4, r0
/* 8004E57C 0004B4BC  38 C6 00 02 */	addi r6, r6, 2
/* 8004E580 0004B4C0  80 E9 00 F8 */	lwz r7, 0xf8(r9)
/* 8004E584 0004B4C4  38 A5 00 04 */	addi r5, r5, 4
/* 8004E588 0004B4C8  7C 04 41 AE */	stbx r0, r4, r8
/* 8004E58C 0004B4CC  38 63 FF FF */	addi r3, r3, -1
/* 8004E590 0004B4D0  90 EA 00 FC */	stw r7, 0xfc(r10)
/* 8004E594 0004B4D4  7C 19 32 2E */	lhzx r0, r25, r6
/* 8004E598 0004B4D8  7C 19 2B 2E */	sthx r0, r25, r5
.L_8004E59C:
/* 8004E59C 0004B4DC  54 68 06 3E */	clrlwi r8, r3, 0x18
/* 8004E5A0 0004B4E0  7C 08 D0 40 */	cmplw r8, r26
/* 8004E5A4 0004B4E4  41 81 FF AC */	bgt .L_8004E550
/* 8004E5A8 0004B4E8  57 43 10 3A */	slwi r3, r26, 2
/* 8004E5AC 0004B4EC  38 00 00 00 */	li r0, 0
/* 8004E5B0 0004B4F0  7C 79 1A 14 */	add r3, r25, r3
/* 8004E5B4 0004B4F4  38 A1 00 08 */	addi r5, r1, 8
/* 8004E5B8 0004B4F8  93 E3 00 DC */	stw r31, 0xdc(r3)
/* 8004E5BC 0004B4FC  38 E0 00 00 */	li r7, 0
/* 8004E5C0 0004B500  38 60 00 01 */	li r3, 1
/* 8004E5C4 0004B504  98 19 01 20 */	stb r0, 0x120(r25)
/* 8004E5C8 0004B508  48 00 00 28 */	b .L_8004E5F0
.L_8004E5CC:
/* 8004E5CC 0004B50C  54 E6 06 3E */	clrlwi r6, r7, 0x18
/* 8004E5D0 0004B510  7C 05 30 AE */	lbzx r0, r5, r6
/* 8004E5D4 0004B514  28 00 00 00 */	cmplwi r0, 0
/* 8004E5D8 0004B518  41 82 00 14 */	beq .L_8004E5EC
/* 8004E5DC 0004B51C  88 99 01 20 */	lbz r4, 0x120(r25)
/* 8004E5E0 0004B520  7C 60 30 30 */	slw r0, r3, r6
/* 8004E5E4 0004B524  7C 80 03 78 */	or r0, r4, r0
/* 8004E5E8 0004B528  98 19 01 20 */	stb r0, 0x120(r25)
.L_8004E5EC:
/* 8004E5EC 0004B52C  38 E7 00 01 */	addi r7, r7, 1
.L_8004E5F0:
/* 8004E5F0 0004B530  54 E0 06 3E */	clrlwi r0, r7, 0x18
/* 8004E5F4 0004B534  28 00 00 08 */	cmplwi r0, 8
/* 8004E5F8 0004B538  41 80 FF D4 */	blt .L_8004E5CC
/* 8004E5FC 0004B53C  38 00 00 01 */	li r0, 1
/* 8004E600 0004B540  88 79 01 20 */	lbz r3, 0x120(r25)
/* 8004E604 0004B544  7C 00 D0 30 */	slw r0, r0, r26
/* 8004E608 0004B548  7C 60 03 78 */	or r0, r3, r0
/* 8004E60C 0004B54C  98 19 01 20 */	stb r0, 0x120(r25)
.L_8004E610:
/* 8004E610 0004B550  57 43 10 3A */	slwi r3, r26, 2
/* 8004E614 0004B554  57 40 08 3C */	slwi r0, r26, 1
/* 8004E618 0004B558  7C 99 1A 14 */	add r4, r25, r3
/* 8004E61C 0004B55C  38 A0 00 00 */	li r5, 0
/* 8004E620 0004B560  3C 60 00 01 */	lis r3, 0x0000FFFF@ha
/* 8004E624 0004B564  90 A4 00 FC */	stw r5, 0xfc(r4)
/* 8004E628 0004B568  38 83 FF FF */	addi r4, r3, 0x0000FFFF@l
/* 8004E62C 0004B56C  7C 79 02 14 */	add r3, r25, r0
/* 8004E630 0004B570  B0 83 00 04 */	sth r4, 4(r3)
/* 8004E634 0004B574  38 60 00 01 */	li r3, 1
.L_8004E638:
/* 8004E638 0004B578  BB 21 00 14 */	lmw r25, 0x14(r1)
/* 8004E63C 0004B57C  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8004E640 0004B580  7C 08 03 A6 */	mtlr r0
/* 8004E644 0004B584  38 21 00 30 */	addi r1, r1, 0x30
/* 8004E648 0004B588  4E 80 00 20 */	blr 
.endfn insertTexture__12J2DTevBlock8FUlPC7ResTIMGP10JUTPalette

.fn insertTexture__12J2DTevBlock8FUlP10JUTTexture, global
/* 8004E64C 0004B58C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8004E650 0004B590  7C 08 02 A6 */	mflr r0
/* 8004E654 0004B594  90 01 00 24 */	stw r0, 0x24(r1)
/* 8004E658 0004B598  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8004E65C 0004B59C  7C BF 2B 78 */	mr r31, r5
/* 8004E660 0004B5A0  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8004E664 0004B5A4  7C 9E 23 78 */	mr r30, r4
/* 8004E668 0004B5A8  28 1E 00 08 */	cmplwi r30, 8
/* 8004E66C 0004B5AC  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8004E670 0004B5B0  7C 7D 1B 78 */	mr r29, r3
/* 8004E674 0004B5B4  40 80 00 0C */	bge .L_8004E680
/* 8004E678 0004B5B8  28 1F 00 00 */	cmplwi r31, 0
/* 8004E67C 0004B5BC  40 82 00 0C */	bne .L_8004E688
.L_8004E680:
/* 8004E680 0004B5C0  38 60 00 00 */	li r3, 0
/* 8004E684 0004B5C4  48 00 01 44 */	b .L_8004E7C8
.L_8004E688:
/* 8004E688 0004B5C8  38 80 00 00 */	li r4, 0
/* 8004E68C 0004B5CC  48 00 00 28 */	b .L_8004E6B4
.L_8004E690:
/* 8004E690 0004B5D0  54 83 15 BA */	rlwinm r3, r4, 2, 0x16, 0x1d
/* 8004E694 0004B5D4  38 03 00 DC */	addi r0, r3, 0xdc
/* 8004E698 0004B5D8  7C 7D 00 2E */	lwzx r3, r29, r0
/* 8004E69C 0004B5DC  28 03 00 00 */	cmplwi r3, 0
/* 8004E6A0 0004B5E0  41 82 00 20 */	beq .L_8004E6C0
/* 8004E6A4 0004B5E4  80 03 00 20 */	lwz r0, 0x20(r3)
/* 8004E6A8 0004B5E8  28 00 00 00 */	cmplwi r0, 0
/* 8004E6AC 0004B5EC  41 82 00 14 */	beq .L_8004E6C0
/* 8004E6B0 0004B5F0  38 84 00 01 */	addi r4, r4, 1
.L_8004E6B4:
/* 8004E6B4 0004B5F4  54 80 06 3E */	clrlwi r0, r4, 0x18
/* 8004E6B8 0004B5F8  28 00 00 08 */	cmplwi r0, 8
/* 8004E6BC 0004B5FC  41 80 FF D4 */	blt .L_8004E690
.L_8004E6C0:
/* 8004E6C0 0004B600  54 80 06 3E */	clrlwi r0, r4, 0x18
/* 8004E6C4 0004B604  7C 00 F0 40 */	cmplw r0, r30
/* 8004E6C8 0004B608  40 80 00 0C */	bge .L_8004E6D4
/* 8004E6CC 0004B60C  38 60 00 00 */	li r3, 0
/* 8004E6D0 0004B610  48 00 00 F8 */	b .L_8004E7C8
.L_8004E6D4:
/* 8004E6D4 0004B614  28 00 00 08 */	cmplwi r0, 8
/* 8004E6D8 0004B618  40 82 00 0C */	bne .L_8004E6E4
/* 8004E6DC 0004B61C  38 60 00 00 */	li r3, 0
/* 8004E6E0 0004B620  48 00 00 E8 */	b .L_8004E7C8
.L_8004E6E4:
/* 8004E6E4 0004B624  80 7D 00 F8 */	lwz r3, 0xf8(r29)
/* 8004E6E8 0004B628  28 03 00 00 */	cmplwi r3, 0
/* 8004E6EC 0004B62C  41 82 00 30 */	beq .L_8004E71C
/* 8004E6F0 0004B630  80 03 00 20 */	lwz r0, 0x20(r3)
/* 8004E6F4 0004B634  28 00 00 00 */	cmplwi r0, 0
/* 8004E6F8 0004B638  40 82 00 24 */	bne .L_8004E71C
/* 8004E6FC 0004B63C  88 1D 01 20 */	lbz r0, 0x120(r29)
/* 8004E700 0004B640  54 00 06 31 */	rlwinm. r0, r0, 0, 0x18, 0x18
/* 8004E704 0004B644  41 82 00 0C */	beq .L_8004E710
/* 8004E708 0004B648  38 80 00 01 */	li r4, 1
/* 8004E70C 0004B64C  4B FE 49 05 */	bl __dt__10JUTTextureFv
.L_8004E710:
/* 8004E710 0004B650  88 1D 01 20 */	lbz r0, 0x120(r29)
/* 8004E714 0004B654  54 00 06 7E */	clrlwi r0, r0, 0x19
/* 8004E718 0004B658  98 1D 01 20 */	stb r0, 0x120(r29)
.L_8004E71C:
/* 8004E71C 0004B65C  39 00 00 07 */	li r8, 7
/* 8004E720 0004B660  48 00 00 40 */	b .L_8004E760
.L_8004E724:
/* 8004E724 0004B664  54 83 10 3A */	slwi r3, r4, 2
/* 8004E728 0004B668  55 00 15 BA */	rlwinm r0, r8, 2, 0x16, 0x1d
/* 8004E72C 0004B66C  7C DD 1A 14 */	add r6, r29, r3
/* 8004E730 0004B670  54 84 08 3C */	slwi r4, r4, 1
/* 8004E734 0004B674  80 A6 00 D8 */	lwz r5, 0xd8(r6)
/* 8004E738 0004B678  7C FD 02 14 */	add r7, r29, r0
/* 8004E73C 0004B67C  55 03 0D FC */	rlwinm r3, r8, 1, 0x17, 0x1e
/* 8004E740 0004B680  38 84 00 02 */	addi r4, r4, 2
/* 8004E744 0004B684  90 A7 00 DC */	stw r5, 0xdc(r7)
/* 8004E748 0004B688  38 03 00 04 */	addi r0, r3, 4
/* 8004E74C 0004B68C  39 08 FF FF */	addi r8, r8, -1
/* 8004E750 0004B690  80 66 00 F8 */	lwz r3, 0xf8(r6)
/* 8004E754 0004B694  90 67 00 FC */	stw r3, 0xfc(r7)
/* 8004E758 0004B698  7C 7D 22 2E */	lhzx r3, r29, r4
/* 8004E75C 0004B69C  7C 7D 03 2E */	sthx r3, r29, r0
.L_8004E760:
/* 8004E760 0004B6A0  55 04 06 3E */	clrlwi r4, r8, 0x18
/* 8004E764 0004B6A4  7C 04 F0 40 */	cmplw r4, r30
/* 8004E768 0004B6A8  41 81 FF BC */	bgt .L_8004E724
/* 8004E76C 0004B6AC  57 C3 10 3A */	slwi r3, r30, 2
/* 8004E770 0004B6B0  57 C0 08 3C */	slwi r0, r30, 1
/* 8004E774 0004B6B4  7C BD 1A 14 */	add r5, r29, r3
/* 8004E778 0004B6B8  3C 60 00 01 */	lis r3, 0x0000FFFF@ha
/* 8004E77C 0004B6BC  93 E5 00 DC */	stw r31, 0xdc(r5)
/* 8004E780 0004B6C0  38 80 00 00 */	li r4, 0
/* 8004E784 0004B6C4  38 E3 FF FF */	addi r7, r3, 0x0000FFFF@l
/* 8004E788 0004B6C8  7C DD 02 14 */	add r6, r29, r0
/* 8004E78C 0004B6CC  90 85 00 FC */	stw r4, 0xfc(r5)
/* 8004E790 0004B6D0  7F A3 EB 78 */	mr r3, r29
/* 8004E794 0004B6D4  57 C4 06 3E */	clrlwi r4, r30, 0x18
/* 8004E798 0004B6D8  38 A0 00 01 */	li r5, 1
/* 8004E79C 0004B6DC  B0 E6 00 04 */	sth r7, 4(r6)
/* 8004E7A0 0004B6E0  81 9D 00 00 */	lwz r12, 0(r29)
/* 8004E7A4 0004B6E4  81 8C 00 AC */	lwz r12, 0xac(r12)
/* 8004E7A8 0004B6E8  7D 89 03 A6 */	mtctr r12
/* 8004E7AC 0004B6EC  4E 80 04 21 */	bctrl 
/* 8004E7B0 0004B6F0  38 00 00 01 */	li r0, 1
/* 8004E7B4 0004B6F4  88 9D 01 20 */	lbz r4, 0x120(r29)
/* 8004E7B8 0004B6F8  7C 00 F0 30 */	slw r0, r0, r30
/* 8004E7BC 0004B6FC  38 60 00 01 */	li r3, 1
/* 8004E7C0 0004B700  7C 80 00 78 */	andc r0, r4, r0
/* 8004E7C4 0004B704  98 1D 01 20 */	stb r0, 0x120(r29)
.L_8004E7C8:
/* 8004E7C8 0004B708  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8004E7CC 0004B70C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8004E7D0 0004B710  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8004E7D4 0004B714  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8004E7D8 0004B718  7C 08 03 A6 */	mtlr r0
/* 8004E7DC 0004B71C  38 21 00 20 */	addi r1, r1, 0x20
/* 8004E7E0 0004B720  4E 80 00 20 */	blr 
.endfn insertTexture__12J2DTevBlock8FUlP10JUTTexture

.fn setTexture__12J2DTevBlock8FUlPC7ResTIMG, global
/* 8004E7E4 0004B724  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8004E7E8 0004B728  7C 08 02 A6 */	mflr r0
/* 8004E7EC 0004B72C  90 01 00 34 */	stw r0, 0x34(r1)
/* 8004E7F0 0004B730  BF 21 00 14 */	stmw r25, 0x14(r1)
/* 8004E7F4 0004B734  7C 9A 23 78 */	mr r26, r4
/* 8004E7F8 0004B738  28 1A 00 08 */	cmplwi r26, 8
/* 8004E7FC 0004B73C  7C 79 1B 78 */	mr r25, r3
/* 8004E800 0004B740  7C BB 2B 78 */	mr r27, r5
/* 8004E804 0004B744  41 80 00 0C */	blt .L_8004E810
/* 8004E808 0004B748  38 60 00 00 */	li r3, 0
/* 8004E80C 0004B74C  48 00 02 A8 */	b .L_8004EAB4
.L_8004E810:
/* 8004E810 0004B750  28 1B 00 00 */	cmplwi r27, 0
/* 8004E814 0004B754  3B 80 00 00 */	li r28, 0
/* 8004E818 0004B758  41 82 01 2C */	beq .L_8004E944
/* 8004E81C 0004B75C  88 1B 00 08 */	lbz r0, 8(r27)
/* 8004E820 0004B760  28 00 00 00 */	cmplwi r0, 0
/* 8004E824 0004B764  41 82 01 20 */	beq .L_8004E944
/* 8004E828 0004B768  38 00 00 04 */	li r0, 4
/* 8004E82C 0004B76C  7F 24 CB 78 */	mr r4, r25
/* 8004E830 0004B770  38 C0 00 00 */	li r6, 0
/* 8004E834 0004B774  38 E0 00 00 */	li r7, 0
/* 8004E838 0004B778  7C 09 03 A6 */	mtctr r0
.L_8004E83C:
/* 8004E83C 0004B77C  7C 07 D0 40 */	cmplw r7, r26
/* 8004E840 0004B780  41 82 00 5C */	beq .L_8004E89C
/* 8004E844 0004B784  80 A4 00 DC */	lwz r5, 0xdc(r4)
/* 8004E848 0004B788  28 05 00 00 */	cmplwi r5, 0
/* 8004E84C 0004B78C  41 82 00 50 */	beq .L_8004E89C
/* 8004E850 0004B790  80 65 00 20 */	lwz r3, 0x20(r5)
/* 8004E854 0004B794  28 03 00 00 */	cmplwi r3, 0
/* 8004E858 0004B798  41 82 00 44 */	beq .L_8004E89C
/* 8004E85C 0004B79C  88 03 00 08 */	lbz r0, 8(r3)
/* 8004E860 0004B7A0  28 00 00 00 */	cmplwi r0, 0
/* 8004E864 0004B7A4  41 82 00 38 */	beq .L_8004E89C
/* 8004E868 0004B7A8  88 65 00 3A */	lbz r3, 0x3a(r5)
/* 8004E86C 0004B7AC  38 00 00 00 */	li r0, 0
/* 8004E870 0004B7B0  2C 03 00 10 */	cmpwi r3, 0x10
/* 8004E874 0004B7B4  41 80 00 08 */	blt .L_8004E87C
/* 8004E878 0004B7B8  38 00 00 10 */	li r0, 0x10
.L_8004E87C:
/* 8004E87C 0004B7BC  7C 00 18 50 */	subf r0, r0, r3
/* 8004E880 0004B7C0  54 03 06 3E */	clrlwi r3, r0, 0x18
/* 8004E884 0004B7C4  28 03 00 08 */	cmplwi r3, 8
/* 8004E888 0004B7C8  40 80 00 14 */	bge .L_8004E89C
/* 8004E88C 0004B7CC  38 00 00 01 */	li r0, 1
/* 8004E890 0004B7D0  7C 00 18 30 */	slw r0, r0, r3
/* 8004E894 0004B7D4  7C C0 03 78 */	or r0, r6, r0
/* 8004E898 0004B7D8  54 06 06 3E */	clrlwi r6, r0, 0x18
.L_8004E89C:
/* 8004E89C 0004B7DC  38 E7 00 01 */	addi r7, r7, 1
/* 8004E8A0 0004B7E0  7C 07 D0 40 */	cmplw r7, r26
/* 8004E8A4 0004B7E4  41 82 00 5C */	beq .L_8004E900
/* 8004E8A8 0004B7E8  80 A4 00 E0 */	lwz r5, 0xe0(r4)
/* 8004E8AC 0004B7EC  28 05 00 00 */	cmplwi r5, 0
/* 8004E8B0 0004B7F0  41 82 00 50 */	beq .L_8004E900
/* 8004E8B4 0004B7F4  80 65 00 20 */	lwz r3, 0x20(r5)
/* 8004E8B8 0004B7F8  28 03 00 00 */	cmplwi r3, 0
/* 8004E8BC 0004B7FC  41 82 00 44 */	beq .L_8004E900
/* 8004E8C0 0004B800  88 03 00 08 */	lbz r0, 8(r3)
/* 8004E8C4 0004B804  28 00 00 00 */	cmplwi r0, 0
/* 8004E8C8 0004B808  41 82 00 38 */	beq .L_8004E900
/* 8004E8CC 0004B80C  88 65 00 3A */	lbz r3, 0x3a(r5)
/* 8004E8D0 0004B810  38 00 00 00 */	li r0, 0
/* 8004E8D4 0004B814  2C 03 00 10 */	cmpwi r3, 0x10
/* 8004E8D8 0004B818  41 80 00 08 */	blt .L_8004E8E0
/* 8004E8DC 0004B81C  38 00 00 10 */	li r0, 0x10
.L_8004E8E0:
/* 8004E8E0 0004B820  7C 00 18 50 */	subf r0, r0, r3
/* 8004E8E4 0004B824  54 03 06 3E */	clrlwi r3, r0, 0x18
/* 8004E8E8 0004B828  28 03 00 08 */	cmplwi r3, 8
/* 8004E8EC 0004B82C  40 80 00 14 */	bge .L_8004E900
/* 8004E8F0 0004B830  38 00 00 01 */	li r0, 1
/* 8004E8F4 0004B834  7C 00 18 30 */	slw r0, r0, r3
/* 8004E8F8 0004B838  7C C0 03 78 */	or r0, r6, r0
/* 8004E8FC 0004B83C  54 06 06 3E */	clrlwi r6, r0, 0x18
.L_8004E900:
/* 8004E900 0004B840  38 84 00 08 */	addi r4, r4, 8
/* 8004E904 0004B844  38 E7 00 01 */	addi r7, r7, 1
/* 8004E908 0004B848  42 00 FF 34 */	bdnz .L_8004E83C
/* 8004E90C 0004B84C  54 C4 06 3E */	clrlwi r4, r6, 0x18
/* 8004E910 0004B850  38 A0 00 00 */	li r5, 0
/* 8004E914 0004B854  38 60 00 01 */	li r3, 1
/* 8004E918 0004B858  48 00 00 20 */	b .L_8004E938
.L_8004E91C:
/* 8004E91C 0004B85C  54 A0 06 3E */	clrlwi r0, r5, 0x18
/* 8004E920 0004B860  7C 60 00 30 */	slw r0, r3, r0
/* 8004E924 0004B864  7C 80 00 39 */	and. r0, r4, r0
/* 8004E928 0004B868  40 82 00 0C */	bne .L_8004E934
/* 8004E92C 0004B86C  7C BC 2B 78 */	mr r28, r5
/* 8004E930 0004B870  48 00 00 14 */	b .L_8004E944
.L_8004E934:
/* 8004E934 0004B874  38 A5 00 01 */	addi r5, r5, 1
.L_8004E938:
/* 8004E938 0004B878  54 A0 06 3E */	clrlwi r0, r5, 0x18
/* 8004E93C 0004B87C  28 00 00 04 */	cmplwi r0, 4
/* 8004E940 0004B880  41 80 FF DC */	blt .L_8004E91C
.L_8004E944:
/* 8004E944 0004B884  57 5D 10 3A */	slwi r29, r26, 2
/* 8004E948 0004B888  7F F9 EA 14 */	add r31, r25, r29
/* 8004E94C 0004B88C  80 7F 00 DC */	lwz r3, 0xdc(r31)
/* 8004E950 0004B890  28 03 00 00 */	cmplwi r3, 0
/* 8004E954 0004B894  40 82 00 84 */	bne .L_8004E9D8
/* 8004E958 0004B898  28 1B 00 00 */	cmplwi r27, 0
/* 8004E95C 0004B89C  41 82 00 64 */	beq .L_8004E9C0
/* 8004E960 0004B8A0  38 60 00 40 */	li r3, 0x40
/* 8004E964 0004B8A4  4B FD 55 41 */	bl __nw__FUl
/* 8004E968 0004B8A8  7C 7E 1B 79 */	or. r30, r3, r3
/* 8004E96C 0004B8AC  41 82 00 24 */	beq .L_8004E990
/* 8004E970 0004B8B0  38 00 00 00 */	li r0, 0
/* 8004E974 0004B8B4  7F 64 DB 78 */	mr r4, r27
/* 8004E978 0004B8B8  90 1E 00 28 */	stw r0, 0x28(r30)
/* 8004E97C 0004B8BC  7F 85 E3 78 */	mr r5, r28
/* 8004E980 0004B8C0  4B FE 47 05 */	bl storeTIMG__10JUTTextureFPC7ResTIMGUc
/* 8004E984 0004B8C4  88 1E 00 3B */	lbz r0, 0x3b(r30)
/* 8004E988 0004B8C8  54 00 07 BC */	rlwinm r0, r0, 0, 0x1e, 0x1e
/* 8004E98C 0004B8CC  98 1E 00 3B */	stb r0, 0x3b(r30)
.L_8004E990:
/* 8004E990 0004B8D0  93 DF 00 DC */	stw r30, 0xdc(r31)
/* 8004E994 0004B8D4  80 1F 00 DC */	lwz r0, 0xdc(r31)
/* 8004E998 0004B8D8  28 00 00 00 */	cmplwi r0, 0
/* 8004E99C 0004B8DC  40 82 00 0C */	bne .L_8004E9A8
/* 8004E9A0 0004B8E0  38 60 00 00 */	li r3, 0
/* 8004E9A4 0004B8E4  48 00 01 10 */	b .L_8004EAB4
.L_8004E9A8:
/* 8004E9A8 0004B8E8  38 00 00 01 */	li r0, 1
/* 8004E9AC 0004B8EC  88 79 01 20 */	lbz r3, 0x120(r25)
/* 8004E9B0 0004B8F0  7C 00 D0 30 */	slw r0, r0, r26
/* 8004E9B4 0004B8F4  7C 60 03 78 */	or r0, r3, r0
/* 8004E9B8 0004B8F8  98 19 01 20 */	stb r0, 0x120(r25)
/* 8004E9BC 0004B8FC  48 00 00 CC */	b .L_8004EA88
.L_8004E9C0:
/* 8004E9C0 0004B900  38 00 00 01 */	li r0, 1
/* 8004E9C4 0004B904  88 79 01 20 */	lbz r3, 0x120(r25)
/* 8004E9C8 0004B908  7C 00 D0 30 */	slw r0, r0, r26
/* 8004E9CC 0004B90C  7C 60 00 78 */	andc r0, r3, r0
/* 8004E9D0 0004B910  98 19 01 20 */	stb r0, 0x120(r25)
/* 8004E9D4 0004B914  48 00 00 B4 */	b .L_8004EA88
.L_8004E9D8:
/* 8004E9D8 0004B918  38 00 00 01 */	li r0, 1
/* 8004E9DC 0004B91C  88 99 01 20 */	lbz r4, 0x120(r25)
/* 8004E9E0 0004B920  7C 1E D0 30 */	slw r30, r0, r26
/* 8004E9E4 0004B924  7C 80 F0 39 */	and. r0, r4, r30
/* 8004E9E8 0004B928  41 82 00 3C */	beq .L_8004EA24
/* 8004E9EC 0004B92C  28 1B 00 00 */	cmplwi r27, 0
/* 8004E9F0 0004B930  41 82 00 14 */	beq .L_8004EA04
/* 8004E9F4 0004B934  7F 64 DB 78 */	mr r4, r27
/* 8004E9F8 0004B938  7F 85 E3 78 */	mr r5, r28
/* 8004E9FC 0004B93C  4B FE 46 89 */	bl storeTIMG__10JUTTextureFPC7ResTIMGUc
/* 8004EA00 0004B940  48 00 00 88 */	b .L_8004EA88
.L_8004EA04:
/* 8004EA04 0004B944  38 80 00 01 */	li r4, 1
/* 8004EA08 0004B948  4B FE 46 09 */	bl __dt__10JUTTextureFv
/* 8004EA0C 0004B94C  38 00 00 00 */	li r0, 0
/* 8004EA10 0004B950  90 1F 00 DC */	stw r0, 0xdc(r31)
/* 8004EA14 0004B954  88 19 01 20 */	lbz r0, 0x120(r25)
/* 8004EA18 0004B958  7C 00 F0 78 */	andc r0, r0, r30
/* 8004EA1C 0004B95C  98 19 01 20 */	stb r0, 0x120(r25)
/* 8004EA20 0004B960  48 00 00 68 */	b .L_8004EA88
.L_8004EA24:
/* 8004EA24 0004B964  38 00 00 00 */	li r0, 0
/* 8004EA28 0004B968  28 1B 00 00 */	cmplwi r27, 0
/* 8004EA2C 0004B96C  90 1F 00 DC */	stw r0, 0xdc(r31)
/* 8004EA30 0004B970  41 82 00 58 */	beq .L_8004EA88
/* 8004EA34 0004B974  38 60 00 40 */	li r3, 0x40
/* 8004EA38 0004B978  4B FD 54 6D */	bl __nw__FUl
/* 8004EA3C 0004B97C  7C 7C 1B 79 */	or. r28, r3, r3
/* 8004EA40 0004B980  41 82 00 24 */	beq .L_8004EA64
/* 8004EA44 0004B984  38 00 00 00 */	li r0, 0
/* 8004EA48 0004B988  7F 64 DB 78 */	mr r4, r27
/* 8004EA4C 0004B98C  90 1C 00 28 */	stw r0, 0x28(r28)
/* 8004EA50 0004B990  38 A0 00 00 */	li r5, 0
/* 8004EA54 0004B994  4B FE 46 31 */	bl storeTIMG__10JUTTextureFPC7ResTIMGUc
/* 8004EA58 0004B998  88 1C 00 3B */	lbz r0, 0x3b(r28)
/* 8004EA5C 0004B99C  54 00 07 BC */	rlwinm r0, r0, 0, 0x1e, 0x1e
/* 8004EA60 0004B9A0  98 1C 00 3B */	stb r0, 0x3b(r28)
.L_8004EA64:
/* 8004EA64 0004B9A4  93 9F 00 DC */	stw r28, 0xdc(r31)
/* 8004EA68 0004B9A8  80 1F 00 DC */	lwz r0, 0xdc(r31)
/* 8004EA6C 0004B9AC  28 00 00 00 */	cmplwi r0, 0
/* 8004EA70 0004B9B0  40 82 00 0C */	bne .L_8004EA7C
/* 8004EA74 0004B9B4  38 60 00 00 */	li r3, 0
/* 8004EA78 0004B9B8  48 00 00 3C */	b .L_8004EAB4
.L_8004EA7C:
/* 8004EA7C 0004B9BC  88 19 01 20 */	lbz r0, 0x120(r25)
/* 8004EA80 0004B9C0  7C 00 F3 78 */	or r0, r0, r30
/* 8004EA84 0004B9C4  98 19 01 20 */	stb r0, 0x120(r25)
.L_8004EA88:
/* 8004EA88 0004B9C8  7F 79 EA 14 */	add r27, r25, r29
/* 8004EA8C 0004B9CC  80 7B 00 FC */	lwz r3, 0xfc(r27)
/* 8004EA90 0004B9D0  4B FD 56 25 */	bl __dl__FPv
/* 8004EA94 0004B9D4  38 80 00 00 */	li r4, 0
/* 8004EA98 0004B9D8  57 40 08 3C */	slwi r0, r26, 1
/* 8004EA9C 0004B9DC  3C 60 00 01 */	lis r3, 0x0000FFFF@ha
/* 8004EAA0 0004B9E0  90 9B 00 FC */	stw r4, 0xfc(r27)
/* 8004EAA4 0004B9E4  38 83 FF FF */	addi r4, r3, 0x0000FFFF@l
/* 8004EAA8 0004B9E8  7C 79 02 14 */	add r3, r25, r0
/* 8004EAAC 0004B9EC  B0 83 00 04 */	sth r4, 4(r3)
/* 8004EAB0 0004B9F0  38 60 00 01 */	li r3, 1
.L_8004EAB4:
/* 8004EAB4 0004B9F4  BB 21 00 14 */	lmw r25, 0x14(r1)
/* 8004EAB8 0004B9F8  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8004EABC 0004B9FC  7C 08 03 A6 */	mtlr r0
/* 8004EAC0 0004BA00  38 21 00 30 */	addi r1, r1, 0x30
/* 8004EAC4 0004BA04  4E 80 00 20 */	blr 
.endfn setTexture__12J2DTevBlock8FUlPC7ResTIMG

.fn setTexture__12J2DTevBlock8FUlP10JUTTexture, global
/* 8004EAC8 0004BA08  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8004EACC 0004BA0C  7C 08 02 A6 */	mflr r0
/* 8004EAD0 0004BA10  90 01 00 24 */	stw r0, 0x24(r1)
/* 8004EAD4 0004BA14  BF 61 00 0C */	stmw r27, 0xc(r1)
/* 8004EAD8 0004BA18  7C 9C 23 78 */	mr r28, r4
/* 8004EADC 0004BA1C  28 1C 00 08 */	cmplwi r28, 8
/* 8004EAE0 0004BA20  7C 7B 1B 78 */	mr r27, r3
/* 8004EAE4 0004BA24  7C BD 2B 78 */	mr r29, r5
/* 8004EAE8 0004BA28  41 80 00 0C */	blt .L_8004EAF4
/* 8004EAEC 0004BA2C  38 60 00 00 */	li r3, 0
/* 8004EAF0 0004BA30  48 00 00 6C */	b .L_8004EB5C
.L_8004EAF4:
/* 8004EAF4 0004BA34  38 00 00 01 */	li r0, 1
/* 8004EAF8 0004BA38  88 7B 01 20 */	lbz r3, 0x120(r27)
/* 8004EAFC 0004BA3C  7C 1E E0 30 */	slw r30, r0, r28
/* 8004EB00 0004BA40  7C 60 F0 39 */	and. r0, r3, r30
/* 8004EB04 0004BA44  41 82 00 18 */	beq .L_8004EB1C
/* 8004EB08 0004BA48  57 80 10 3A */	slwi r0, r28, 2
/* 8004EB0C 0004BA4C  38 80 00 01 */	li r4, 1
/* 8004EB10 0004BA50  7C 7B 02 14 */	add r3, r27, r0
/* 8004EB14 0004BA54  80 63 00 DC */	lwz r3, 0xdc(r3)
/* 8004EB18 0004BA58  4B FE 44 F9 */	bl __dt__10JUTTextureFv
.L_8004EB1C:
/* 8004EB1C 0004BA5C  57 80 10 3A */	slwi r0, r28, 2
/* 8004EB20 0004BA60  7F FB 02 14 */	add r31, r27, r0
/* 8004EB24 0004BA64  93 BF 00 DC */	stw r29, 0xdc(r31)
/* 8004EB28 0004BA68  88 1B 01 20 */	lbz r0, 0x120(r27)
/* 8004EB2C 0004BA6C  7C 00 F0 78 */	andc r0, r0, r30
/* 8004EB30 0004BA70  98 1B 01 20 */	stb r0, 0x120(r27)
/* 8004EB34 0004BA74  80 7F 00 FC */	lwz r3, 0xfc(r31)
/* 8004EB38 0004BA78  4B FD 55 7D */	bl __dl__FPv
/* 8004EB3C 0004BA7C  38 80 00 00 */	li r4, 0
/* 8004EB40 0004BA80  57 80 08 3C */	slwi r0, r28, 1
/* 8004EB44 0004BA84  3C 60 00 01 */	lis r3, 0x0000FFFF@ha
/* 8004EB48 0004BA88  90 9F 00 FC */	stw r4, 0xfc(r31)
/* 8004EB4C 0004BA8C  38 83 FF FF */	addi r4, r3, 0x0000FFFF@l
/* 8004EB50 0004BA90  7C 7B 02 14 */	add r3, r27, r0
/* 8004EB54 0004BA94  B0 83 00 04 */	sth r4, 4(r3)
/* 8004EB58 0004BA98  38 60 00 01 */	li r3, 1
.L_8004EB5C:
/* 8004EB5C 0004BA9C  BB 61 00 0C */	lmw r27, 0xc(r1)
/* 8004EB60 0004BAA0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8004EB64 0004BAA4  7C 08 03 A6 */	mtlr r0
/* 8004EB68 0004BAA8  38 21 00 20 */	addi r1, r1, 0x20
/* 8004EB6C 0004BAAC  4E 80 00 20 */	blr 
.endfn setTexture__12J2DTevBlock8FUlP10JUTTexture

.fn removeTexture__12J2DTevBlock8FUl, global
/* 8004EB70 0004BAB0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8004EB74 0004BAB4  7C 08 02 A6 */	mflr r0
/* 8004EB78 0004BAB8  90 01 00 24 */	stw r0, 0x24(r1)
/* 8004EB7C 0004BABC  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8004EB80 0004BAC0  7C 9F 23 78 */	mr r31, r4
/* 8004EB84 0004BAC4  28 1F 00 08 */	cmplwi r31, 8
/* 8004EB88 0004BAC8  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8004EB8C 0004BACC  7C 7E 1B 78 */	mr r30, r3
/* 8004EB90 0004BAD0  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8004EB94 0004BAD4  41 80 00 0C */	blt .L_8004EBA0
/* 8004EB98 0004BAD8  38 60 00 00 */	li r3, 0
/* 8004EB9C 0004BADC  48 00 01 C8 */	b .L_8004ED64
.L_8004EBA0:
/* 8004EBA0 0004BAE0  38 00 00 01 */	li r0, 1
/* 8004EBA4 0004BAE4  88 7E 01 20 */	lbz r3, 0x120(r30)
/* 8004EBA8 0004BAE8  7C 00 F8 30 */	slw r0, r0, r31
/* 8004EBAC 0004BAEC  7C 60 00 39 */	and. r0, r3, r0
/* 8004EBB0 0004BAF0  41 82 00 18 */	beq .L_8004EBC8
/* 8004EBB4 0004BAF4  57 E0 10 3A */	slwi r0, r31, 2
/* 8004EBB8 0004BAF8  38 80 00 01 */	li r4, 1
/* 8004EBBC 0004BAFC  7C 7E 02 14 */	add r3, r30, r0
/* 8004EBC0 0004BB00  80 63 00 DC */	lwz r3, 0xdc(r3)
/* 8004EBC4 0004BB04  4B FE 44 4D */	bl __dt__10JUTTextureFv
.L_8004EBC8:
/* 8004EBC8 0004BB08  57 FD 10 3A */	slwi r29, r31, 2
/* 8004EBCC 0004BB0C  7C 7E EA 14 */	add r3, r30, r29
/* 8004EBD0 0004BB10  80 63 00 FC */	lwz r3, 0xfc(r3)
/* 8004EBD4 0004BB14  4B FD 54 E1 */	bl __dl__FPv
/* 8004EBD8 0004BB18  28 1F 00 07 */	cmplwi r31, 7
/* 8004EBDC 0004BB1C  7F E5 FB 78 */	mr r5, r31
/* 8004EBE0 0004BB20  40 80 01 4C */	bge .L_8004ED2C
/* 8004EBE4 0004BB24  20 1F 00 07 */	subfic r0, r31, 7
/* 8004EBE8 0004BB28  28 00 00 08 */	cmplwi r0, 8
/* 8004EBEC 0004BB2C  40 81 00 FC */	ble .L_8004ECE8
/* 8004EBF0 0004BB30  20 1F 00 06 */	subfic r0, r31, 6
/* 8004EBF4 0004BB34  57 E4 08 3C */	slwi r4, r31, 1
/* 8004EBF8 0004BB38  54 00 E8 FE */	srwi r0, r0, 3
/* 8004EBFC 0004BB3C  7C 7E EA 14 */	add r3, r30, r29
/* 8004EC00 0004BB40  7C 9E 22 14 */	add r4, r30, r4
/* 8004EC04 0004BB44  7C 09 03 A6 */	mtctr r0
/* 8004EC08 0004BB48  3C C0 00 00 */	lis r6, 0x-0000001@ha
/* 8004EC0C 0004BB4C  38 C6 FF FF */	addi r6, r6, 0x-0000001@l
/* 8004EC10 0004BB50  7C 1F 30 40 */	cmplw r31, r6
/* 8004EC14 0004BB54  40 80 00 D4 */	bge .L_8004ECE8
.L_8004EC18:
/* 8004EC18 0004BB58  80 03 00 E0 */	lwz r0, 0xe0(r3)
/* 8004EC1C 0004BB5C  38 A5 00 08 */	addi r5, r5, 8
/* 8004EC20 0004BB60  90 03 00 DC */	stw r0, 0xdc(r3)
/* 8004EC24 0004BB64  80 03 01 00 */	lwz r0, 0x100(r3)
/* 8004EC28 0004BB68  90 03 00 FC */	stw r0, 0xfc(r3)
/* 8004EC2C 0004BB6C  A0 04 00 06 */	lhz r0, 6(r4)
/* 8004EC30 0004BB70  B0 04 00 04 */	sth r0, 4(r4)
/* 8004EC34 0004BB74  80 03 00 E4 */	lwz r0, 0xe4(r3)
/* 8004EC38 0004BB78  90 03 00 E0 */	stw r0, 0xe0(r3)
/* 8004EC3C 0004BB7C  80 03 01 04 */	lwz r0, 0x104(r3)
/* 8004EC40 0004BB80  90 03 01 00 */	stw r0, 0x100(r3)
/* 8004EC44 0004BB84  A0 04 00 08 */	lhz r0, 8(r4)
/* 8004EC48 0004BB88  B0 04 00 06 */	sth r0, 6(r4)
/* 8004EC4C 0004BB8C  80 03 00 E8 */	lwz r0, 0xe8(r3)
/* 8004EC50 0004BB90  90 03 00 E4 */	stw r0, 0xe4(r3)
/* 8004EC54 0004BB94  80 03 01 08 */	lwz r0, 0x108(r3)
/* 8004EC58 0004BB98  90 03 01 04 */	stw r0, 0x104(r3)
/* 8004EC5C 0004BB9C  A0 04 00 0A */	lhz r0, 0xa(r4)
/* 8004EC60 0004BBA0  B0 04 00 08 */	sth r0, 8(r4)
/* 8004EC64 0004BBA4  80 03 00 EC */	lwz r0, 0xec(r3)
/* 8004EC68 0004BBA8  90 03 00 E8 */	stw r0, 0xe8(r3)
/* 8004EC6C 0004BBAC  80 03 01 0C */	lwz r0, 0x10c(r3)
/* 8004EC70 0004BBB0  90 03 01 08 */	stw r0, 0x108(r3)
/* 8004EC74 0004BBB4  A0 04 00 0C */	lhz r0, 0xc(r4)
/* 8004EC78 0004BBB8  B0 04 00 0A */	sth r0, 0xa(r4)
/* 8004EC7C 0004BBBC  80 03 00 F0 */	lwz r0, 0xf0(r3)
/* 8004EC80 0004BBC0  90 03 00 EC */	stw r0, 0xec(r3)
/* 8004EC84 0004BBC4  80 03 01 10 */	lwz r0, 0x110(r3)
/* 8004EC88 0004BBC8  90 03 01 0C */	stw r0, 0x10c(r3)
/* 8004EC8C 0004BBCC  A0 04 00 0E */	lhz r0, 0xe(r4)
/* 8004EC90 0004BBD0  B0 04 00 0C */	sth r0, 0xc(r4)
/* 8004EC94 0004BBD4  80 03 00 F4 */	lwz r0, 0xf4(r3)
/* 8004EC98 0004BBD8  90 03 00 F0 */	stw r0, 0xf0(r3)
/* 8004EC9C 0004BBDC  80 03 01 14 */	lwz r0, 0x114(r3)
/* 8004ECA0 0004BBE0  90 03 01 10 */	stw r0, 0x110(r3)
/* 8004ECA4 0004BBE4  A0 04 00 10 */	lhz r0, 0x10(r4)
/* 8004ECA8 0004BBE8  B0 04 00 0E */	sth r0, 0xe(r4)
/* 8004ECAC 0004BBEC  80 03 00 F8 */	lwz r0, 0xf8(r3)
/* 8004ECB0 0004BBF0  90 03 00 F4 */	stw r0, 0xf4(r3)
/* 8004ECB4 0004BBF4  80 03 01 18 */	lwz r0, 0x118(r3)
/* 8004ECB8 0004BBF8  90 03 01 14 */	stw r0, 0x114(r3)
/* 8004ECBC 0004BBFC  A0 04 00 12 */	lhz r0, 0x12(r4)
/* 8004ECC0 0004BC00  B0 04 00 10 */	sth r0, 0x10(r4)
/* 8004ECC4 0004BC04  80 03 00 FC */	lwz r0, 0xfc(r3)
/* 8004ECC8 0004BC08  90 03 00 F8 */	stw r0, 0xf8(r3)
/* 8004ECCC 0004BC0C  80 03 01 1C */	lwz r0, 0x11c(r3)
/* 8004ECD0 0004BC10  90 03 01 18 */	stw r0, 0x118(r3)
/* 8004ECD4 0004BC14  38 63 00 20 */	addi r3, r3, 0x20
/* 8004ECD8 0004BC18  A0 04 00 14 */	lhz r0, 0x14(r4)
/* 8004ECDC 0004BC1C  B0 04 00 12 */	sth r0, 0x12(r4)
/* 8004ECE0 0004BC20  38 84 00 10 */	addi r4, r4, 0x10
/* 8004ECE4 0004BC24  42 00 FF 34 */	bdnz .L_8004EC18
.L_8004ECE8:
/* 8004ECE8 0004BC28  54 A4 10 3A */	slwi r4, r5, 2
/* 8004ECEC 0004BC2C  54 A3 08 3C */	slwi r3, r5, 1
/* 8004ECF0 0004BC30  20 05 00 07 */	subfic r0, r5, 7
/* 8004ECF4 0004BC34  7C 9E 22 14 */	add r4, r30, r4
/* 8004ECF8 0004BC38  7C 7E 1A 14 */	add r3, r30, r3
/* 8004ECFC 0004BC3C  7C 09 03 A6 */	mtctr r0
/* 8004ED00 0004BC40  28 05 00 07 */	cmplwi r5, 7
/* 8004ED04 0004BC44  40 80 00 28 */	bge .L_8004ED2C
.L_8004ED08:
/* 8004ED08 0004BC48  80 04 00 E0 */	lwz r0, 0xe0(r4)
/* 8004ED0C 0004BC4C  90 04 00 DC */	stw r0, 0xdc(r4)
/* 8004ED10 0004BC50  80 04 01 00 */	lwz r0, 0x100(r4)
/* 8004ED14 0004BC54  90 04 00 FC */	stw r0, 0xfc(r4)
/* 8004ED18 0004BC58  38 84 00 04 */	addi r4, r4, 4
/* 8004ED1C 0004BC5C  A0 03 00 06 */	lhz r0, 6(r3)
/* 8004ED20 0004BC60  B0 03 00 04 */	sth r0, 4(r3)
/* 8004ED24 0004BC64  38 63 00 02 */	addi r3, r3, 2
/* 8004ED28 0004BC68  42 00 FF E0 */	bdnz .L_8004ED08
.L_8004ED2C:
/* 8004ED2C 0004BC6C  38 A0 00 00 */	li r5, 0
/* 8004ED30 0004BC70  3C 60 00 01 */	lis r3, 0x0000FFFF@ha
/* 8004ED34 0004BC74  90 BE 00 F8 */	stw r5, 0xf8(r30)
/* 8004ED38 0004BC78  38 03 FF FF */	addi r0, r3, 0x0000FFFF@l
/* 8004ED3C 0004BC7C  7F C3 F3 78 */	mr r3, r30
/* 8004ED40 0004BC80  57 E4 06 3E */	clrlwi r4, r31, 0x18
/* 8004ED44 0004BC84  90 BE 01 18 */	stw r5, 0x118(r30)
/* 8004ED48 0004BC88  38 A0 00 00 */	li r5, 0
/* 8004ED4C 0004BC8C  B0 1E 00 12 */	sth r0, 0x12(r30)
/* 8004ED50 0004BC90  81 9E 00 00 */	lwz r12, 0(r30)
/* 8004ED54 0004BC94  81 8C 00 AC */	lwz r12, 0xac(r12)
/* 8004ED58 0004BC98  7D 89 03 A6 */	mtctr r12
/* 8004ED5C 0004BC9C  4E 80 04 21 */	bctrl 
/* 8004ED60 0004BCA0  38 60 00 01 */	li r3, 1
.L_8004ED64:
/* 8004ED64 0004BCA4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8004ED68 0004BCA8  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8004ED6C 0004BCAC  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8004ED70 0004BCB0  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8004ED74 0004BCB4  7C 08 03 A6 */	mtlr r0
/* 8004ED78 0004BCB8  38 21 00 20 */	addi r1, r1, 0x20
/* 8004ED7C 0004BCBC  4E 80 00 20 */	blr 
.endfn removeTexture__12J2DTevBlock8FUl

.fn setFont__12J2DTevBlock8FP7ResFONT, global
/* 8004ED80 0004BCC0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8004ED84 0004BCC4  7C 08 02 A6 */	mflr r0
/* 8004ED88 0004BCC8  90 01 00 24 */	stw r0, 0x24(r1)
/* 8004ED8C 0004BCCC  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8004ED90 0004BCD0  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8004ED94 0004BCD4  7C 9E 23 79 */	or. r30, r4, r4
/* 8004ED98 0004BCD8  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8004ED9C 0004BCDC  7C 7D 1B 78 */	mr r29, r3
/* 8004EDA0 0004BCE0  40 82 00 0C */	bne .L_8004EDAC
/* 8004EDA4 0004BCE4  38 60 00 00 */	li r3, 0
/* 8004EDA8 0004BCE8  48 00 00 70 */	b .L_8004EE18
.L_8004EDAC:
/* 8004EDAC 0004BCEC  38 60 00 70 */	li r3, 0x70
/* 8004EDB0 0004BCF0  4B FD 50 F5 */	bl __nw__FUl
/* 8004EDB4 0004BCF4  7C 7F 1B 79 */	or. r31, r3, r3
/* 8004EDB8 0004BCF8  41 82 00 14 */	beq .L_8004EDCC
/* 8004EDBC 0004BCFC  7F C4 F3 78 */	mr r4, r30
/* 8004EDC0 0004BD00  38 A0 00 00 */	li r5, 0
/* 8004EDC4 0004BD04  4B FE 24 09 */	bl __ct__10JUTResFontFPC7ResFONTP7JKRHeap
/* 8004EDC8 0004BD08  7C 7F 1B 78 */	mr r31, r3
.L_8004EDCC:
/* 8004EDCC 0004BD0C  28 1F 00 00 */	cmplwi r31, 0
/* 8004EDD0 0004BD10  40 82 00 0C */	bne .L_8004EDDC
/* 8004EDD4 0004BD14  38 60 00 00 */	li r3, 0
/* 8004EDD8 0004BD18  48 00 00 40 */	b .L_8004EE18
.L_8004EDDC:
/* 8004EDDC 0004BD1C  88 1D 01 21 */	lbz r0, 0x121(r29)
/* 8004EDE0 0004BD20  28 00 00 00 */	cmplwi r0, 0
/* 8004EDE4 0004BD24  41 82 00 24 */	beq .L_8004EE08
/* 8004EDE8 0004BD28  80 7D 01 1C */	lwz r3, 0x11c(r29)
/* 8004EDEC 0004BD2C  28 03 00 00 */	cmplwi r3, 0
/* 8004EDF0 0004BD30  41 82 00 18 */	beq .L_8004EE08
/* 8004EDF4 0004BD34  81 83 00 00 */	lwz r12, 0(r3)
/* 8004EDF8 0004BD38  38 80 00 01 */	li r4, 1
/* 8004EDFC 0004BD3C  81 8C 00 08 */	lwz r12, 8(r12)
/* 8004EE00 0004BD40  7D 89 03 A6 */	mtctr r12
/* 8004EE04 0004BD44  4E 80 04 21 */	bctrl 
.L_8004EE08:
/* 8004EE08 0004BD48  93 FD 01 1C */	stw r31, 0x11c(r29)
/* 8004EE0C 0004BD4C  38 00 00 01 */	li r0, 1
/* 8004EE10 0004BD50  38 60 00 01 */	li r3, 1
/* 8004EE14 0004BD54  98 1D 01 21 */	stb r0, 0x121(r29)
.L_8004EE18:
/* 8004EE18 0004BD58  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8004EE1C 0004BD5C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8004EE20 0004BD60  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8004EE24 0004BD64  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8004EE28 0004BD68  7C 08 03 A6 */	mtlr r0
/* 8004EE2C 0004BD6C  38 21 00 20 */	addi r1, r1, 0x20
/* 8004EE30 0004BD70  4E 80 00 20 */	blr 
.endfn setFont__12J2DTevBlock8FP7ResFONT

.fn setFont__12J2DTevBlock8FP7JUTFont, global
/* 8004EE34 0004BD74  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8004EE38 0004BD78  7C 08 02 A6 */	mflr r0
/* 8004EE3C 0004BD7C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8004EE40 0004BD80  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8004EE44 0004BD84  7C 9F 23 79 */	or. r31, r4, r4
/* 8004EE48 0004BD88  93 C1 00 08 */	stw r30, 8(r1)
/* 8004EE4C 0004BD8C  7C 7E 1B 78 */	mr r30, r3
/* 8004EE50 0004BD90  40 82 00 0C */	bne .L_8004EE5C
/* 8004EE54 0004BD94  38 60 00 00 */	li r3, 0
/* 8004EE58 0004BD98  48 00 00 40 */	b .L_8004EE98
.L_8004EE5C:
/* 8004EE5C 0004BD9C  88 1E 01 21 */	lbz r0, 0x121(r30)
/* 8004EE60 0004BDA0  28 00 00 00 */	cmplwi r0, 0
/* 8004EE64 0004BDA4  41 82 00 24 */	beq .L_8004EE88
/* 8004EE68 0004BDA8  80 7E 01 1C */	lwz r3, 0x11c(r30)
/* 8004EE6C 0004BDAC  28 03 00 00 */	cmplwi r3, 0
/* 8004EE70 0004BDB0  41 82 00 18 */	beq .L_8004EE88
/* 8004EE74 0004BDB4  81 83 00 00 */	lwz r12, 0(r3)
/* 8004EE78 0004BDB8  38 80 00 01 */	li r4, 1
/* 8004EE7C 0004BDBC  81 8C 00 08 */	lwz r12, 8(r12)
/* 8004EE80 0004BDC0  7D 89 03 A6 */	mtctr r12
/* 8004EE84 0004BDC4  4E 80 04 21 */	bctrl 
.L_8004EE88:
/* 8004EE88 0004BDC8  93 FE 01 1C */	stw r31, 0x11c(r30)
/* 8004EE8C 0004BDCC  38 00 00 00 */	li r0, 0
/* 8004EE90 0004BDD0  38 60 00 01 */	li r3, 1
/* 8004EE94 0004BDD4  98 1E 01 21 */	stb r0, 0x121(r30)
.L_8004EE98:
/* 8004EE98 0004BDD8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8004EE9C 0004BDDC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8004EEA0 0004BDE0  83 C1 00 08 */	lwz r30, 8(r1)
/* 8004EEA4 0004BDE4  7C 08 03 A6 */	mtlr r0
/* 8004EEA8 0004BDE8  38 21 00 10 */	addi r1, r1, 0x10
/* 8004EEAC 0004BDEC  4E 80 00 20 */	blr 
.endfn setFont__12J2DTevBlock8FP7JUTFont

.fn setPalette__12J2DTevBlock8FUlPC7ResTLUT, global
/* 8004EEB0 0004BDF0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8004EEB4 0004BDF4  7C 08 02 A6 */	mflr r0
/* 8004EEB8 0004BDF8  90 01 00 24 */	stw r0, 0x24(r1)
/* 8004EEBC 0004BDFC  BF 41 00 08 */	stmw r26, 8(r1)
/* 8004EEC0 0004BE00  7C 9B 23 78 */	mr r27, r4
/* 8004EEC4 0004BE04  28 1B 00 08 */	cmplwi r27, 8
/* 8004EEC8 0004BE08  7C 7A 1B 78 */	mr r26, r3
/* 8004EECC 0004BE0C  7C BC 2B 78 */	mr r28, r5
/* 8004EED0 0004BE10  41 80 00 0C */	blt .L_8004EEDC
/* 8004EED4 0004BE14  38 60 00 00 */	li r3, 0
/* 8004EED8 0004BE18  48 00 00 94 */	b .L_8004EF6C
.L_8004EEDC:
/* 8004EEDC 0004BE1C  28 1C 00 00 */	cmplwi r28, 0
/* 8004EEE0 0004BE20  41 82 00 70 */	beq .L_8004EF50
/* 8004EEE4 0004BE24  57 7D 10 3A */	slwi r29, r27, 2
/* 8004EEE8 0004BE28  7F DA EA 14 */	add r30, r26, r29
/* 8004EEEC 0004BE2C  80 7E 00 FC */	lwz r3, 0xfc(r30)
/* 8004EEF0 0004BE30  28 03 00 00 */	cmplwi r3, 0
/* 8004EEF4 0004BE34  40 82 00 38 */	bne .L_8004EF2C
/* 8004EEF8 0004BE38  38 60 00 18 */	li r3, 0x18
/* 8004EEFC 0004BE3C  4B FD 4F A9 */	bl __nw__FUl
/* 8004EF00 0004BE40  7C 7F 1B 79 */	or. r31, r3, r3
/* 8004EF04 0004BE44  41 82 00 10 */	beq .L_8004EF14
/* 8004EF08 0004BE48  7F 64 DB 78 */	mr r4, r27
/* 8004EF0C 0004BE4C  7F 85 E3 78 */	mr r5, r28
/* 8004EF10 0004BE50  4B FD FF B5 */	bl storeTLUT__10JUTPaletteF7_GXTlutP7ResTLUT
.L_8004EF14:
/* 8004EF14 0004BE54  93 FE 00 FC */	stw r31, 0xfc(r30)
/* 8004EF18 0004BE58  80 1E 00 FC */	lwz r0, 0xfc(r30)
/* 8004EF1C 0004BE5C  28 00 00 00 */	cmplwi r0, 0
/* 8004EF20 0004BE60  40 82 00 14 */	bne .L_8004EF34
/* 8004EF24 0004BE64  38 60 00 00 */	li r3, 0
/* 8004EF28 0004BE68  48 00 00 44 */	b .L_8004EF6C
.L_8004EF2C:
/* 8004EF2C 0004BE6C  38 80 00 00 */	li r4, 0
/* 8004EF30 0004BE70  4B FD FF 95 */	bl storeTLUT__10JUTPaletteF7_GXTlutP7ResTLUT
.L_8004EF34:
/* 8004EF34 0004BE74  7C 7A EA 14 */	add r3, r26, r29
/* 8004EF38 0004BE78  80 63 00 DC */	lwz r3, 0xdc(r3)
/* 8004EF3C 0004BE7C  28 03 00 00 */	cmplwi r3, 0
/* 8004EF40 0004BE80  41 82 00 28 */	beq .L_8004EF68
/* 8004EF44 0004BE84  80 9E 00 FC */	lwz r4, 0xfc(r30)
/* 8004EF48 0004BE88  4B FE 44 55 */	bl attachPalette__10JUTTextureFP10JUTPalette
/* 8004EF4C 0004BE8C  48 00 00 1C */	b .L_8004EF68
.L_8004EF50:
/* 8004EF50 0004BE90  57 60 10 3A */	slwi r0, r27, 2
/* 8004EF54 0004BE94  7F BA 02 14 */	add r29, r26, r0
/* 8004EF58 0004BE98  80 7D 00 FC */	lwz r3, 0xfc(r29)
/* 8004EF5C 0004BE9C  4B FD 51 59 */	bl __dl__FPv
/* 8004EF60 0004BEA0  38 00 00 00 */	li r0, 0
/* 8004EF64 0004BEA4  90 1D 00 FC */	stw r0, 0xfc(r29)
.L_8004EF68:
/* 8004EF68 0004BEA8  38 60 00 01 */	li r3, 1
.L_8004EF6C:
/* 8004EF6C 0004BEAC  BB 41 00 08 */	lmw r26, 8(r1)
/* 8004EF70 0004BEB0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8004EF74 0004BEB4  7C 08 03 A6 */	mtlr r0
/* 8004EF78 0004BEB8  38 21 00 20 */	addi r1, r1, 0x20
/* 8004EF7C 0004BEBC  4E 80 00 20 */	blr 
.endfn setPalette__12J2DTevBlock8FUlPC7ResTLUT

.fn shiftDeleteFlag__12J2DTevBlock8FUcb, global
/* 8004EF80 0004BEC0  54 A0 06 3F */	clrlwi. r0, r5, 0x18
/* 8004EF84 0004BEC4  41 82 00 30 */	beq .L_8004EFB4
/* 8004EF88 0004BEC8  54 80 06 3E */	clrlwi r0, r4, 0x18
/* 8004EF8C 0004BECC  38 80 00 01 */	li r4, 1
/* 8004EF90 0004BED0  7C 84 00 30 */	slw r4, r4, r0
/* 8004EF94 0004BED4  88 A3 01 20 */	lbz r5, 0x120(r3)
/* 8004EF98 0004BED8  38 84 FF FF */	addi r4, r4, -1
/* 8004EF9C 0004BEDC  7C A0 20 78 */	andc r0, r5, r4
/* 8004EFA0 0004BEE0  7C A4 20 38 */	and r4, r5, r4
/* 8004EFA4 0004BEE4  54 00 08 3C */	slwi r0, r0, 1
/* 8004EFA8 0004BEE8  7C 80 03 78 */	or r0, r4, r0
/* 8004EFAC 0004BEEC  98 03 01 20 */	stb r0, 0x120(r3)
/* 8004EFB0 0004BEF0  4E 80 00 20 */	blr 
.L_8004EFB4:
/* 8004EFB4 0004BEF4  54 86 06 3E */	clrlwi r6, r4, 0x18
/* 8004EFB8 0004BEF8  38 A0 00 01 */	li r5, 1
/* 8004EFBC 0004BEFC  38 06 00 01 */	addi r0, r6, 1
/* 8004EFC0 0004BF00  88 E3 01 20 */	lbz r7, 0x120(r3)
/* 8004EFC4 0004BF04  7C A4 00 30 */	slw r4, r5, r0
/* 8004EFC8 0004BF08  7C A5 30 30 */	slw r5, r5, r6
/* 8004EFCC 0004BF0C  38 04 FF FF */	addi r0, r4, -1
/* 8004EFD0 0004BF10  38 85 FF FF */	addi r4, r5, -1
/* 8004EFD4 0004BF14  7C E0 00 78 */	andc r0, r7, r0
/* 8004EFD8 0004BF18  7C E4 20 38 */	and r4, r7, r4
/* 8004EFDC 0004BF1C  7C 00 0E 70 */	srawi r0, r0, 1
/* 8004EFE0 0004BF20  7C 80 03 78 */	or r0, r4, r0
/* 8004EFE4 0004BF24  98 03 01 20 */	stb r0, 0x120(r3)
/* 8004EFE8 0004BF28  4E 80 00 20 */	blr 
.endfn shiftDeleteFlag__12J2DTevBlock8FUcb

.fn setGX__12J2DTevBlock8Fv, global
/* 8004EFEC 0004BF2C  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8004EFF0 0004BF30  7C 08 02 A6 */	mflr r0
/* 8004EFF4 0004BF34  90 01 00 34 */	stw r0, 0x34(r1)
/* 8004EFF8 0004BF38  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 8004EFFC 0004BF3C  93 C1 00 28 */	stw r30, 0x28(r1)
/* 8004F000 0004BF40  93 A1 00 24 */	stw r29, 0x24(r1)
/* 8004F004 0004BF44  7C 7D 1B 78 */	mr r29, r3
/* 8004F008 0004BF48  93 81 00 20 */	stw r28, 0x20(r1)
/* 8004F00C 0004BF4C  3B 80 00 00 */	li r28, 0
.L_8004F010:
/* 8004F010 0004BF50  7F A3 EB 78 */	mr r3, r29
/* 8004F014 0004BF54  7F 84 E3 78 */	mr r4, r28
/* 8004F018 0004BF58  81 9D 00 00 */	lwz r12, 0(r29)
/* 8004F01C 0004BF5C  7F 85 E3 78 */	mr r5, r28
/* 8004F020 0004BF60  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8004F024 0004BF64  7D 89 03 A6 */	mtctr r12
/* 8004F028 0004BF68  4E 80 04 21 */	bctrl 
/* 8004F02C 0004BF6C  3B 9C 00 01 */	addi r28, r28, 1
/* 8004F030 0004BF70  2C 1C 00 08 */	cmpwi r28, 8
/* 8004F034 0004BF74  41 80 FF DC */	blt .L_8004F010
/* 8004F038 0004BF78  7F BE EB 78 */	mr r30, r29
/* 8004F03C 0004BF7C  3B 80 00 00 */	li r28, 0
/* 8004F040 0004BF80  48 00 00 20 */	b .L_8004F060
.L_8004F044:
/* 8004F044 0004BF84  88 9E 00 16 */	lbz r4, 0x16(r30)
/* 8004F048 0004BF88  7F 83 E3 78 */	mr r3, r28
/* 8004F04C 0004BF8C  88 BE 00 17 */	lbz r5, 0x17(r30)
/* 8004F050 0004BF90  88 DE 00 18 */	lbz r6, 0x18(r30)
/* 8004F054 0004BF94  48 09 99 C9 */	bl GXSetTevOrder
/* 8004F058 0004BF98  3B DE 00 04 */	addi r30, r30, 4
/* 8004F05C 0004BF9C  3B 9C 00 01 */	addi r28, r28, 1
.L_8004F060:
/* 8004F060 0004BFA0  88 1D 00 56 */	lbz r0, 0x56(r29)
/* 8004F064 0004BFA4  7C 1C 00 00 */	cmpw r28, r0
/* 8004F068 0004BFA8  41 80 FF DC */	blt .L_8004F044
/* 8004F06C 0004BFAC  7F BF EB 78 */	mr r31, r29
/* 8004F070 0004BFB0  3B C1 00 0C */	addi r30, r1, 0xc
/* 8004F074 0004BFB4  3B 80 00 00 */	li r28, 0
.L_8004F078:
/* 8004F078 0004BFB8  80 9F 00 36 */	lwz r4, 0x36(r31)
/* 8004F07C 0004BFBC  2C 1C 00 03 */	cmpwi r28, 3
/* 8004F080 0004BFC0  80 1F 00 3A */	lwz r0, 0x3a(r31)
/* 8004F084 0004BFC4  38 60 00 00 */	li r3, 0
/* 8004F088 0004BFC8  90 81 00 0C */	stw r4, 0xc(r1)
/* 8004F08C 0004BFCC  90 01 00 10 */	stw r0, 0x10(r1)
/* 8004F090 0004BFD0  41 82 00 08 */	beq .L_8004F098
/* 8004F094 0004BFD4  38 7C 00 01 */	addi r3, r28, 1
.L_8004F098:
/* 8004F098 0004BFD8  7F C4 F3 78 */	mr r4, r30
/* 8004F09C 0004BFDC  48 09 96 41 */	bl GXSetTevColorS10
/* 8004F0A0 0004BFE0  3B 9C 00 01 */	addi r28, r28, 1
/* 8004F0A4 0004BFE4  3B FF 00 08 */	addi r31, r31, 8
/* 8004F0A8 0004BFE8  2C 1C 00 04 */	cmpwi r28, 4
/* 8004F0AC 0004BFEC  41 80 FF CC */	blt .L_8004F078
/* 8004F0B0 0004BFF0  88 7D 00 56 */	lbz r3, 0x56(r29)
/* 8004F0B4 0004BFF4  48 09 9B 05 */	bl GXSetNumTevStages
/* 8004F0B8 0004BFF8  7F BE EB 78 */	mr r30, r29
/* 8004F0BC 0004BFFC  3B E0 00 00 */	li r31, 0
/* 8004F0C0 0004C000  48 00 01 28 */	b .L_8004F1E8
.L_8004F0C4:
/* 8004F0C4 0004C004  88 1E 00 5A */	lbz r0, 0x5a(r30)
/* 8004F0C8 0004C008  7F E3 FB 78 */	mr r3, r31
/* 8004F0CC 0004C00C  88 BE 00 59 */	lbz r5, 0x59(r30)
/* 8004F0D0 0004C010  54 06 E7 3E */	rlwinm r6, r0, 0x1c, 0x1c, 0x1f
/* 8004F0D4 0004C014  54 07 07 3E */	clrlwi r7, r0, 0x1c
/* 8004F0D8 0004C018  54 A4 E7 3E */	rlwinm r4, r5, 0x1c, 0x1c, 0x1f
/* 8004F0DC 0004C01C  54 A5 07 3E */	clrlwi r5, r5, 0x1c
/* 8004F0E0 0004C020  48 09 94 29 */	bl GXSetTevColorIn
/* 8004F0E4 0004C024  88 BE 00 5D */	lbz r5, 0x5d(r30)
/* 8004F0E8 0004C028  7F E3 FB 78 */	mr r3, r31
/* 8004F0EC 0004C02C  88 DE 00 5E */	lbz r6, 0x5e(r30)
/* 8004F0F0 0004C030  54 A0 06 34 */	rlwinm r0, r5, 0, 0x18, 0x1a
/* 8004F0F4 0004C034  7C 04 2E 70 */	srawi r4, r0, 5
/* 8004F0F8 0004C038  54 C7 E7 7E */	rlwinm r7, r6, 0x1c, 0x1d, 0x1f
/* 8004F0FC 0004C03C  54 C0 CF FE */	rlwinm r0, r6, 0x19, 0x1f, 0x1f
/* 8004F100 0004C040  50 A0 0F 7C */	rlwimi r0, r5, 1, 0x1d, 0x1e
/* 8004F104 0004C044  54 84 06 3E */	clrlwi r4, r4, 0x18
/* 8004F108 0004C048  54 A5 F7 7E */	rlwinm r5, r5, 0x1e, 0x1d, 0x1f
/* 8004F10C 0004C04C  54 06 06 3E */	clrlwi r6, r0, 0x18
/* 8004F110 0004C050  48 09 94 3D */	bl GXSetTevAlphaIn
/* 8004F114 0004C054  88 FE 00 58 */	lbz r7, 0x58(r30)
/* 8004F118 0004C058  7F E3 FB 78 */	mr r3, r31
/* 8004F11C 0004C05C  54 E0 06 B6 */	rlwinm r0, r7, 0, 0x1a, 0x1b
/* 8004F120 0004C060  54 E5 07 BE */	clrlwi r5, r7, 0x1e
/* 8004F124 0004C064  7C 06 26 70 */	srawi r6, r0, 4
/* 8004F128 0004C068  54 E9 F7 FE */	rlwinm r9, r7, 0x1e, 0x1f, 0x1f
/* 8004F12C 0004C06C  54 E0 EF 7C */	rlwinm r0, r7, 0x1d, 0x1d, 0x1e
/* 8004F130 0004C070  28 05 00 03 */	cmplwi r5, 3
/* 8004F134 0004C074  7C 89 02 14 */	add r4, r9, r0
/* 8004F138 0004C078  54 E8 D7 BE */	rlwinm r8, r7, 0x1a, 0x1e, 0x1f
/* 8004F13C 0004C07C  38 04 00 08 */	addi r0, r4, 8
/* 8004F140 0004C080  54 C6 06 3E */	clrlwi r6, r6, 0x18
/* 8004F144 0004C084  54 E7 EF FE */	rlwinm r7, r7, 0x1d, 0x1f, 0x1f
/* 8004F148 0004C088  54 00 06 3E */	clrlwi r0, r0, 0x18
/* 8004F14C 0004C08C  41 82 00 08 */	beq .L_8004F154
/* 8004F150 0004C090  7D 20 4B 78 */	mr r0, r9
.L_8004F154:
/* 8004F154 0004C094  54 04 06 3E */	clrlwi r4, r0, 0x18
/* 8004F158 0004C098  48 09 94 39 */	bl GXSetTevColorOp
/* 8004F15C 0004C09C  88 FE 00 5C */	lbz r7, 0x5c(r30)
/* 8004F160 0004C0A0  7F E3 FB 78 */	mr r3, r31
/* 8004F164 0004C0A4  54 E0 06 B6 */	rlwinm r0, r7, 0, 0x1a, 0x1b
/* 8004F168 0004C0A8  54 E5 07 BE */	clrlwi r5, r7, 0x1e
/* 8004F16C 0004C0AC  7C 06 26 70 */	srawi r6, r0, 4
/* 8004F170 0004C0B0  54 E9 F7 FE */	rlwinm r9, r7, 0x1e, 0x1f, 0x1f
/* 8004F174 0004C0B4  54 E0 EF 7C */	rlwinm r0, r7, 0x1d, 0x1d, 0x1e
/* 8004F178 0004C0B8  28 05 00 03 */	cmplwi r5, 3
/* 8004F17C 0004C0BC  7C 89 02 14 */	add r4, r9, r0
/* 8004F180 0004C0C0  54 E8 D7 BE */	rlwinm r8, r7, 0x1a, 0x1e, 0x1f
/* 8004F184 0004C0C4  38 04 00 08 */	addi r0, r4, 8
/* 8004F188 0004C0C8  54 C6 06 3E */	clrlwi r6, r6, 0x18
/* 8004F18C 0004C0CC  54 E7 EF FE */	rlwinm r7, r7, 0x1d, 0x1f, 0x1f
/* 8004F190 0004C0D0  54 00 06 3E */	clrlwi r0, r0, 0x18
/* 8004F194 0004C0D4  41 82 00 08 */	beq .L_8004F19C
/* 8004F198 0004C0D8  7D 20 4B 78 */	mr r0, r9
.L_8004F19C:
/* 8004F19C 0004C0DC  54 04 06 3E */	clrlwi r4, r0, 0x18
/* 8004F1A0 0004C0E0  48 09 94 59 */	bl GXSetTevAlphaOp
/* 8004F1A4 0004C0E4  7F 9D FA 14 */	add r28, r29, r31
/* 8004F1A8 0004C0E8  38 80 00 00 */	li r4, 0
/* 8004F1AC 0004C0EC  88 1C 00 A8 */	lbz r0, 0xa8(r28)
/* 8004F1B0 0004C0F0  28 00 00 FF */	cmplwi r0, 0xff
/* 8004F1B4 0004C0F4  41 82 00 08 */	beq .L_8004F1BC
/* 8004F1B8 0004C0F8  7C 04 03 78 */	mr r4, r0
.L_8004F1BC:
/* 8004F1BC 0004C0FC  7F E3 FB 78 */	mr r3, r31
/* 8004F1C0 0004C100  48 09 96 0D */	bl GXSetTevKColorSel
/* 8004F1C4 0004C104  88 1C 00 B0 */	lbz r0, 0xb0(r28)
/* 8004F1C8 0004C108  38 80 00 00 */	li r4, 0
/* 8004F1CC 0004C10C  28 00 00 FF */	cmplwi r0, 0xff
/* 8004F1D0 0004C110  41 82 00 08 */	beq .L_8004F1D8
/* 8004F1D4 0004C114  7C 04 03 78 */	mr r4, r0
.L_8004F1D8:
/* 8004F1D8 0004C118  7F E3 FB 78 */	mr r3, r31
/* 8004F1DC 0004C11C  48 09 96 4D */	bl GXSetTevKAlphaSel
/* 8004F1E0 0004C120  3B DE 00 08 */	addi r30, r30, 8
/* 8004F1E4 0004C124  3B FF 00 01 */	addi r31, r31, 1
.L_8004F1E8:
/* 8004F1E8 0004C128  88 1D 00 56 */	lbz r0, 0x56(r29)
/* 8004F1EC 0004C12C  7C 1F 00 00 */	cmpw r31, r0
/* 8004F1F0 0004C130  41 80 FE D4 */	blt .L_8004F0C4
/* 8004F1F4 0004C134  3B 80 00 00 */	li r28, 0
/* 8004F1F8 0004C138  7F BE EB 78 */	mr r30, r29
.L_8004F1FC:
/* 8004F1FC 0004C13C  80 1E 00 98 */	lwz r0, 0x98(r30)
/* 8004F200 0004C140  7F 83 E3 78 */	mr r3, r28
/* 8004F204 0004C144  38 81 00 08 */	addi r4, r1, 8
/* 8004F208 0004C148  90 01 00 08 */	stw r0, 8(r1)
/* 8004F20C 0004C14C  48 09 95 4D */	bl GXSetTevKColor
/* 8004F210 0004C150  3B 9C 00 01 */	addi r28, r28, 1
/* 8004F214 0004C154  3B DE 00 04 */	addi r30, r30, 4
/* 8004F218 0004C158  2C 1C 00 04 */	cmpwi r28, 4
/* 8004F21C 0004C15C  41 80 FF E0 */	blt .L_8004F1FC
/* 8004F220 0004C160  7F BE EB 78 */	mr r30, r29
/* 8004F224 0004C164  3B 80 00 00 */	li r28, 0
/* 8004F228 0004C168  48 00 00 20 */	b .L_8004F248
.L_8004F22C:
/* 8004F22C 0004C16C  88 1E 00 5E */	lbz r0, 0x5e(r30)
/* 8004F230 0004C170  7F 83 E3 78 */	mr r3, r28
/* 8004F234 0004C174  54 04 07 BE */	clrlwi r4, r0, 0x1e
/* 8004F238 0004C178  54 05 F7 BE */	rlwinm r5, r0, 0x1e, 0x1e, 0x1f
/* 8004F23C 0004C17C  48 09 96 49 */	bl GXSetTevSwapMode
/* 8004F240 0004C180  3B DE 00 08 */	addi r30, r30, 8
/* 8004F244 0004C184  3B 9C 00 01 */	addi r28, r28, 1
.L_8004F248:
/* 8004F248 0004C188  88 1D 00 56 */	lbz r0, 0x56(r29)
/* 8004F24C 0004C18C  7C 1C 00 00 */	cmpw r28, r0
/* 8004F250 0004C190  41 80 FF DC */	blt .L_8004F22C
/* 8004F254 0004C194  3B 80 00 00 */	li r28, 0
.L_8004F258:
/* 8004F258 0004C198  38 1C 00 B8 */	addi r0, r28, 0xb8
/* 8004F25C 0004C19C  7F 83 E3 78 */	mr r3, r28
/* 8004F260 0004C1A0  7C 1D 00 AE */	lbzx r0, r29, r0
/* 8004F264 0004C1A4  54 04 D7 BE */	rlwinm r4, r0, 0x1a, 0x1e, 0x1f
/* 8004F268 0004C1A8  54 05 E7 BE */	rlwinm r5, r0, 0x1c, 0x1e, 0x1f
/* 8004F26C 0004C1AC  54 06 F7 BE */	rlwinm r6, r0, 0x1e, 0x1e, 0x1f
/* 8004F270 0004C1B0  54 07 07 BE */	clrlwi r7, r0, 0x1e
/* 8004F274 0004C1B4  48 09 96 59 */	bl GXSetTevSwapModeTable
/* 8004F278 0004C1B8  3B 9C 00 01 */	addi r28, r28, 1
/* 8004F27C 0004C1BC  2C 1C 00 04 */	cmpwi r28, 4
/* 8004F280 0004C1C0  41 80 FF D8 */	blt .L_8004F258
/* 8004F284 0004C1C4  3B 80 00 00 */	li r28, 0
/* 8004F288 0004C1C8  48 00 00 1C */	b .L_8004F2A4
.L_8004F28C:
/* 8004F28C 0004C1CC  57 83 15 BA */	rlwinm r3, r28, 2, 0x16, 0x1d
/* 8004F290 0004C1D0  7F 84 E3 78 */	mr r4, r28
/* 8004F294 0004C1D4  38 63 00 BC */	addi r3, r3, 0xbc
/* 8004F298 0004C1D8  7C 7D 1A 14 */	add r3, r29, r3
/* 8004F29C 0004C1DC  48 00 A3 29 */	bl load__14J2DIndTevStageFUc
/* 8004F2A0 0004C1E0  3B 9C 00 01 */	addi r28, r28, 1
.L_8004F2A4:
/* 8004F2A4 0004C1E4  88 1D 00 56 */	lbz r0, 0x56(r29)
/* 8004F2A8 0004C1E8  57 83 06 3E */	clrlwi r3, r28, 0x18
/* 8004F2AC 0004C1EC  7C 03 00 40 */	cmplw r3, r0
/* 8004F2B0 0004C1F0  41 80 FF DC */	blt .L_8004F28C
/* 8004F2B4 0004C1F4  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8004F2B8 0004C1F8  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 8004F2BC 0004C1FC  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 8004F2C0 0004C200  83 A1 00 24 */	lwz r29, 0x24(r1)
/* 8004F2C4 0004C204  83 81 00 20 */	lwz r28, 0x20(r1)
/* 8004F2C8 0004C208  7C 08 03 A6 */	mtlr r0
/* 8004F2CC 0004C20C  38 21 00 30 */	addi r1, r1, 0x30
/* 8004F2D0 0004C210  4E 80 00 20 */	blr 
.endfn setGX__12J2DTevBlock8Fv

.fn loadTexture__12J2DTevBlock8F11_GXTexMapIDUl, global
/* 8004F2D4 0004C214  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8004F2D8 0004C218  7C 08 02 A6 */	mflr r0
/* 8004F2DC 0004C21C  28 05 00 08 */	cmplwi r5, 8
/* 8004F2E0 0004C220  90 01 00 14 */	stw r0, 0x14(r1)
/* 8004F2E4 0004C224  40 80 00 28 */	bge .L_8004F30C
/* 8004F2E8 0004C228  54 A0 10 3A */	slwi r0, r5, 2
/* 8004F2EC 0004C22C  7C 63 02 14 */	add r3, r3, r0
/* 8004F2F0 0004C230  80 63 00 DC */	lwz r3, 0xdc(r3)
/* 8004F2F4 0004C234  28 03 00 00 */	cmplwi r3, 0
/* 8004F2F8 0004C238  41 82 00 14 */	beq .L_8004F30C
/* 8004F2FC 0004C23C  80 03 00 20 */	lwz r0, 0x20(r3)
/* 8004F300 0004C240  28 00 00 00 */	cmplwi r0, 0
/* 8004F304 0004C244  41 82 00 08 */	beq .L_8004F30C
/* 8004F308 0004C248  4B FE 43 29 */	bl load__10JUTTextureF11_GXTexMapID
.L_8004F30C:
/* 8004F30C 0004C24C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8004F310 0004C250  7C 08 03 A6 */	mtlr r0
/* 8004F314 0004C254  38 21 00 10 */	addi r1, r1, 0x10
/* 8004F318 0004C258  4E 80 00 20 */	blr 
.endfn loadTexture__12J2DTevBlock8F11_GXTexMapIDUl

.fn __ct__13J2DTevBlock16Fv, global
/* 8004F31C 0004C25C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8004F320 0004C260  7C 08 02 A6 */	mflr r0
/* 8004F324 0004C264  3C 80 80 4A */	lis r4, __vt__11J2DTevBlock@ha
/* 8004F328 0004C268  38 A0 00 00 */	li r5, 0
/* 8004F32C 0004C26C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8004F330 0004C270  38 04 10 94 */	addi r0, r4, __vt__11J2DTevBlock@l
/* 8004F334 0004C274  3C 80 80 05 */	lis r4, __ct__11J2DTevOrderFv@ha
/* 8004F338 0004C278  38 C0 00 04 */	li r6, 4
/* 8004F33C 0004C27C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8004F340 0004C280  7C 7F 1B 78 */	mr r31, r3
/* 8004F344 0004C284  3C 60 80 4A */	lis r3, __vt__13J2DTevBlock16@ha
/* 8004F348 0004C288  38 84 A2 C4 */	addi r4, r4, __ct__11J2DTevOrderFv@l
/* 8004F34C 0004C28C  90 1F 00 00 */	stw r0, 0(r31)
/* 8004F350 0004C290  38 03 0C E8 */	addi r0, r3, __vt__13J2DTevBlock16@l
/* 8004F354 0004C294  38 7F 00 16 */	addi r3, r31, 0x16
/* 8004F358 0004C298  38 E0 00 10 */	li r7, 0x10
/* 8004F35C 0004C29C  90 1F 00 00 */	stw r0, 0(r31)
/* 8004F360 0004C2A0  48 07 24 DD */	bl __construct_array
/* 8004F364 0004C2A4  3C 80 80 05 */	lis r4, __ct__13J2DGXColorS10Fv@ha
/* 8004F368 0004C2A8  38 7F 00 56 */	addi r3, r31, 0x56
/* 8004F36C 0004C2AC  38 84 A2 C0 */	addi r4, r4, __ct__13J2DGXColorS10Fv@l
/* 8004F370 0004C2B0  38 A0 00 00 */	li r5, 0
/* 8004F374 0004C2B4  38 C0 00 08 */	li r6, 8
/* 8004F378 0004C2B8  38 E0 00 04 */	li r7, 4
/* 8004F37C 0004C2BC  48 07 24 C1 */	bl __construct_array
/* 8004F380 0004C2C0  3C 80 80 05 */	lis r4, __ct__11J2DTevStageFv@ha
/* 8004F384 0004C2C4  38 7F 00 77 */	addi r3, r31, 0x77
/* 8004F388 0004C2C8  38 84 95 D8 */	addi r4, r4, __ct__11J2DTevStageFv@l
/* 8004F38C 0004C2CC  38 A0 00 00 */	li r5, 0
/* 8004F390 0004C2D0  38 C0 00 08 */	li r6, 8
/* 8004F394 0004C2D4  38 E0 00 10 */	li r7, 0x10
/* 8004F398 0004C2D8  48 07 24 A5 */	bl __construct_array
/* 8004F39C 0004C2DC  3C 80 80 04 */	lis r4, __ct__Q28JUtility6TColorFv@ha
/* 8004F3A0 0004C2E0  38 7F 00 F8 */	addi r3, r31, 0xf8
/* 8004F3A4 0004C2E4  38 84 9B 94 */	addi r4, r4, __ct__Q28JUtility6TColorFv@l
/* 8004F3A8 0004C2E8  38 A0 00 00 */	li r5, 0
/* 8004F3AC 0004C2EC  38 C0 00 04 */	li r6, 4
/* 8004F3B0 0004C2F0  38 E0 00 04 */	li r7, 4
/* 8004F3B4 0004C2F4  48 07 24 89 */	bl __construct_array
/* 8004F3B8 0004C2F8  3C 80 80 05 */	lis r4, __ct__19J2DTevSwapModeTableFv@ha
/* 8004F3BC 0004C2FC  38 7F 01 28 */	addi r3, r31, 0x128
/* 8004F3C0 0004C300  38 84 A2 B4 */	addi r4, r4, __ct__19J2DTevSwapModeTableFv@l
/* 8004F3C4 0004C304  38 A0 00 00 */	li r5, 0
/* 8004F3C8 0004C308  38 C0 00 01 */	li r6, 1
/* 8004F3CC 0004C30C  38 E0 00 04 */	li r7, 4
/* 8004F3D0 0004C310  48 07 24 6D */	bl __construct_array
/* 8004F3D4 0004C314  3C 80 80 05 */	lis r4, __ct__14J2DIndTevStageFv@ha
/* 8004F3D8 0004C318  38 7F 01 2C */	addi r3, r31, 0x12c
/* 8004F3DC 0004C31C  38 84 A2 20 */	addi r4, r4, __ct__14J2DIndTevStageFv@l
/* 8004F3E0 0004C320  38 A0 00 00 */	li r5, 0
/* 8004F3E4 0004C324  38 C0 00 04 */	li r6, 4
/* 8004F3E8 0004C328  38 E0 00 10 */	li r7, 0x10
/* 8004F3EC 0004C32C  48 07 24 51 */	bl __construct_array
/* 8004F3F0 0004C330  38 00 00 00 */	li r0, 0
/* 8004F3F4 0004C334  7F E3 FB 78 */	mr r3, r31
/* 8004F3F8 0004C338  90 1F 01 6C */	stw r0, 0x16c(r31)
/* 8004F3FC 0004C33C  90 1F 01 70 */	stw r0, 0x170(r31)
/* 8004F400 0004C340  90 1F 01 74 */	stw r0, 0x174(r31)
/* 8004F404 0004C344  90 1F 01 78 */	stw r0, 0x178(r31)
/* 8004F408 0004C348  90 1F 01 7C */	stw r0, 0x17c(r31)
/* 8004F40C 0004C34C  90 1F 01 80 */	stw r0, 0x180(r31)
/* 8004F410 0004C350  90 1F 01 84 */	stw r0, 0x184(r31)
/* 8004F414 0004C354  90 1F 01 88 */	stw r0, 0x188(r31)
/* 8004F418 0004C358  98 1F 01 B0 */	stb r0, 0x1b0(r31)
/* 8004F41C 0004C35C  81 9F 00 00 */	lwz r12, 0(r31)
/* 8004F420 0004C360  81 8C 00 08 */	lwz r12, 8(r12)
/* 8004F424 0004C364  7D 89 03 A6 */	mtctr r12
/* 8004F428 0004C368  4E 80 04 21 */	bctrl 
/* 8004F42C 0004C36C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8004F430 0004C370  7F E3 FB 78 */	mr r3, r31
/* 8004F434 0004C374  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8004F438 0004C378  7C 08 03 A6 */	mtlr r0
/* 8004F43C 0004C37C  38 21 00 10 */	addi r1, r1, 0x10
/* 8004F440 0004C380  4E 80 00 20 */	blr 
.endfn __ct__13J2DTevBlock16Fv

.fn __dt__13J2DTevBlock16Fv, global
/* 8004F444 0004C384  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8004F448 0004C388  7C 08 02 A6 */	mflr r0
/* 8004F44C 0004C38C  90 01 00 24 */	stw r0, 0x24(r1)
/* 8004F450 0004C390  BF 61 00 0C */	stmw r27, 0xc(r1)
/* 8004F454 0004C394  7C 7B 1B 79 */	or. r27, r3, r3
/* 8004F458 0004C398  7C 9C 23 78 */	mr r28, r4
/* 8004F45C 0004C39C  41 82 00 A0 */	beq .L_8004F4FC
/* 8004F460 0004C3A0  3C 60 80 4A */	lis r3, __vt__13J2DTevBlock16@ha
/* 8004F464 0004C3A4  7F 7E DB 78 */	mr r30, r27
/* 8004F468 0004C3A8  38 03 0C E8 */	addi r0, r3, __vt__13J2DTevBlock16@l
/* 8004F46C 0004C3AC  3B A0 00 00 */	li r29, 0
/* 8004F470 0004C3B0  90 1B 00 00 */	stw r0, 0(r27)
/* 8004F474 0004C3B4  3B E0 00 01 */	li r31, 1
.L_8004F478:
/* 8004F478 0004C3B8  88 7B 01 B0 */	lbz r3, 0x1b0(r27)
/* 8004F47C 0004C3BC  7F E0 E8 30 */	slw r0, r31, r29
/* 8004F480 0004C3C0  7C 60 00 39 */	and. r0, r3, r0
/* 8004F484 0004C3C4  41 82 00 10 */	beq .L_8004F494
/* 8004F488 0004C3C8  80 7E 01 6C */	lwz r3, 0x16c(r30)
/* 8004F48C 0004C3CC  38 80 00 01 */	li r4, 1
/* 8004F490 0004C3D0  4B FE 3B 81 */	bl __dt__10JUTTextureFv
.L_8004F494:
/* 8004F494 0004C3D4  80 7E 01 8C */	lwz r3, 0x18c(r30)
/* 8004F498 0004C3D8  4B FD 4C 1D */	bl __dl__FPv
/* 8004F49C 0004C3DC  3B BD 00 01 */	addi r29, r29, 1
/* 8004F4A0 0004C3E0  3B DE 00 04 */	addi r30, r30, 4
/* 8004F4A4 0004C3E4  2C 1D 00 08 */	cmpwi r29, 8
/* 8004F4A8 0004C3E8  41 80 FF D0 */	blt .L_8004F478
/* 8004F4AC 0004C3EC  88 1B 01 B1 */	lbz r0, 0x1b1(r27)
/* 8004F4B0 0004C3F0  28 00 00 00 */	cmplwi r0, 0
/* 8004F4B4 0004C3F4  41 82 00 24 */	beq .L_8004F4D8
/* 8004F4B8 0004C3F8  80 7B 01 AC */	lwz r3, 0x1ac(r27)
/* 8004F4BC 0004C3FC  28 03 00 00 */	cmplwi r3, 0
/* 8004F4C0 0004C400  41 82 00 18 */	beq .L_8004F4D8
/* 8004F4C4 0004C404  81 83 00 00 */	lwz r12, 0(r3)
/* 8004F4C8 0004C408  38 80 00 01 */	li r4, 1
/* 8004F4CC 0004C40C  81 8C 00 08 */	lwz r12, 8(r12)
/* 8004F4D0 0004C410  7D 89 03 A6 */	mtctr r12
/* 8004F4D4 0004C414  4E 80 04 21 */	bctrl 
.L_8004F4D8:
/* 8004F4D8 0004C418  28 1B 00 00 */	cmplwi r27, 0
/* 8004F4DC 0004C41C  41 82 00 10 */	beq .L_8004F4EC
/* 8004F4E0 0004C420  3C 60 80 4A */	lis r3, __vt__11J2DTevBlock@ha
/* 8004F4E4 0004C424  38 03 10 94 */	addi r0, r3, __vt__11J2DTevBlock@l
/* 8004F4E8 0004C428  90 1B 00 00 */	stw r0, 0(r27)
.L_8004F4EC:
/* 8004F4EC 0004C42C  7F 80 07 35 */	extsh. r0, r28
/* 8004F4F0 0004C430  40 81 00 0C */	ble .L_8004F4FC
/* 8004F4F4 0004C434  7F 63 DB 78 */	mr r3, r27
/* 8004F4F8 0004C438  4B FD 4B BD */	bl __dl__FPv
.L_8004F4FC:
/* 8004F4FC 0004C43C  7F 63 DB 78 */	mr r3, r27
/* 8004F500 0004C440  BB 61 00 0C */	lmw r27, 0xc(r1)
/* 8004F504 0004C444  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8004F508 0004C448  7C 08 03 A6 */	mtlr r0
/* 8004F50C 0004C44C  38 21 00 20 */	addi r1, r1, 0x20
/* 8004F510 0004C450  4E 80 00 20 */	blr 
.endfn __dt__13J2DTevBlock16Fv

.fn initialize__13J2DTevBlock16Fv, global
/* 8004F514 0004C454  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8004F518 0004C458  3C 80 00 01 */	lis r4, 0x0000FFFF@ha
/* 8004F51C 0004C45C  38 C4 FF FF */	addi r6, r4, 0x0000FFFF@l
/* 8004F520 0004C460  38 00 00 02 */	li r0, 2
/* 8004F524 0004C464  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 8004F528 0004C468  7C 64 1B 78 */	mr r4, r3
/* 8004F52C 0004C46C  38 A2 85 B0 */	addi r5, r2, j2dDefaultTevOrderInfoNull@sda21
/* 8004F530 0004C470  B0 C3 00 04 */	sth r6, 4(r3)
/* 8004F534 0004C474  B0 C3 00 06 */	sth r6, 6(r3)
/* 8004F538 0004C478  B0 C3 00 08 */	sth r6, 8(r3)
/* 8004F53C 0004C47C  B0 C3 00 0A */	sth r6, 0xa(r3)
/* 8004F540 0004C480  B0 C3 00 0C */	sth r6, 0xc(r3)
/* 8004F544 0004C484  B0 C3 00 0E */	sth r6, 0xe(r3)
/* 8004F548 0004C488  B0 C3 00 10 */	sth r6, 0x10(r3)
/* 8004F54C 0004C48C  B0 C3 00 12 */	sth r6, 0x12(r3)
/* 8004F550 0004C490  B0 C3 00 14 */	sth r6, 0x14(r3)
/* 8004F554 0004C494  7C 09 03 A6 */	mtctr r0
.L_8004F558:
/* 8004F558 0004C498  88 02 85 B0 */	lbz r0, j2dDefaultTevOrderInfoNull@sda21(r2)
/* 8004F55C 0004C49C  98 04 00 16 */	stb r0, 0x16(r4)
/* 8004F560 0004C4A0  88 05 00 01 */	lbz r0, 1(r5)
/* 8004F564 0004C4A4  98 04 00 17 */	stb r0, 0x17(r4)
/* 8004F568 0004C4A8  88 05 00 02 */	lbz r0, 2(r5)
/* 8004F56C 0004C4AC  98 04 00 18 */	stb r0, 0x18(r4)
/* 8004F570 0004C4B0  88 02 85 B0 */	lbz r0, j2dDefaultTevOrderInfoNull@sda21(r2)
/* 8004F574 0004C4B4  98 04 00 1A */	stb r0, 0x1a(r4)
/* 8004F578 0004C4B8  88 05 00 01 */	lbz r0, 1(r5)
/* 8004F57C 0004C4BC  98 04 00 1B */	stb r0, 0x1b(r4)
/* 8004F580 0004C4C0  88 05 00 02 */	lbz r0, 2(r5)
/* 8004F584 0004C4C4  98 04 00 1C */	stb r0, 0x1c(r4)
/* 8004F588 0004C4C8  88 02 85 B0 */	lbz r0, j2dDefaultTevOrderInfoNull@sda21(r2)
/* 8004F58C 0004C4CC  98 04 00 1E */	stb r0, 0x1e(r4)
/* 8004F590 0004C4D0  88 05 00 01 */	lbz r0, 1(r5)
/* 8004F594 0004C4D4  98 04 00 1F */	stb r0, 0x1f(r4)
/* 8004F598 0004C4D8  88 05 00 02 */	lbz r0, 2(r5)
/* 8004F59C 0004C4DC  98 04 00 20 */	stb r0, 0x20(r4)
/* 8004F5A0 0004C4E0  88 02 85 B0 */	lbz r0, j2dDefaultTevOrderInfoNull@sda21(r2)
/* 8004F5A4 0004C4E4  98 04 00 22 */	stb r0, 0x22(r4)
/* 8004F5A8 0004C4E8  88 05 00 01 */	lbz r0, 1(r5)
/* 8004F5AC 0004C4EC  98 04 00 23 */	stb r0, 0x23(r4)
/* 8004F5B0 0004C4F0  88 05 00 02 */	lbz r0, 2(r5)
/* 8004F5B4 0004C4F4  98 04 00 24 */	stb r0, 0x24(r4)
/* 8004F5B8 0004C4F8  88 02 85 B0 */	lbz r0, j2dDefaultTevOrderInfoNull@sda21(r2)
/* 8004F5BC 0004C4FC  98 04 00 26 */	stb r0, 0x26(r4)
/* 8004F5C0 0004C500  88 05 00 01 */	lbz r0, 1(r5)
/* 8004F5C4 0004C504  98 04 00 27 */	stb r0, 0x27(r4)
/* 8004F5C8 0004C508  88 05 00 02 */	lbz r0, 2(r5)
/* 8004F5CC 0004C50C  98 04 00 28 */	stb r0, 0x28(r4)
/* 8004F5D0 0004C510  88 02 85 B0 */	lbz r0, j2dDefaultTevOrderInfoNull@sda21(r2)
/* 8004F5D4 0004C514  98 04 00 2A */	stb r0, 0x2a(r4)
/* 8004F5D8 0004C518  88 05 00 01 */	lbz r0, 1(r5)
/* 8004F5DC 0004C51C  98 04 00 2B */	stb r0, 0x2b(r4)
/* 8004F5E0 0004C520  88 05 00 02 */	lbz r0, 2(r5)
/* 8004F5E4 0004C524  98 04 00 2C */	stb r0, 0x2c(r4)
/* 8004F5E8 0004C528  88 02 85 B0 */	lbz r0, j2dDefaultTevOrderInfoNull@sda21(r2)
/* 8004F5EC 0004C52C  98 04 00 2E */	stb r0, 0x2e(r4)
/* 8004F5F0 0004C530  88 05 00 01 */	lbz r0, 1(r5)
/* 8004F5F4 0004C534  98 04 00 2F */	stb r0, 0x2f(r4)
/* 8004F5F8 0004C538  88 05 00 02 */	lbz r0, 2(r5)
/* 8004F5FC 0004C53C  98 04 00 30 */	stb r0, 0x30(r4)
/* 8004F600 0004C540  88 02 85 B0 */	lbz r0, j2dDefaultTevOrderInfoNull@sda21(r2)
/* 8004F604 0004C544  98 04 00 32 */	stb r0, 0x32(r4)
/* 8004F608 0004C548  88 05 00 01 */	lbz r0, 1(r5)
/* 8004F60C 0004C54C  98 04 00 33 */	stb r0, 0x33(r4)
/* 8004F610 0004C550  88 05 00 02 */	lbz r0, 2(r5)
/* 8004F614 0004C554  98 04 00 34 */	stb r0, 0x34(r4)
/* 8004F618 0004C558  38 84 00 20 */	addi r4, r4, 0x20
/* 8004F61C 0004C55C  42 00 FF 3C */	bdnz .L_8004F558
/* 8004F620 0004C560  A9 62 85 B8 */	lha r11, j2dDefaultTevColor@sda21(r2)
/* 8004F624 0004C564  38 C2 85 B8 */	addi r6, r2, j2dDefaultTevColor@sda21
/* 8004F628 0004C568  A9 46 00 02 */	lha r10, 2(r6)
/* 8004F62C 0004C56C  38 E0 00 01 */	li r7, 1
/* 8004F630 0004C570  B1 63 00 56 */	sth r11, 0x56(r3)
/* 8004F634 0004C574  38 00 00 02 */	li r0, 2
/* 8004F638 0004C578  A9 26 00 04 */	lha r9, 4(r6)
/* 8004F63C 0004C57C  7C 64 1B 78 */	mr r4, r3
/* 8004F640 0004C580  B1 43 00 58 */	sth r10, 0x58(r3)
/* 8004F644 0004C584  38 A0 00 00 */	li r5, 0
/* 8004F648 0004C588  A9 06 00 06 */	lha r8, 6(r6)
/* 8004F64C 0004C58C  38 C0 00 00 */	li r6, 0
/* 8004F650 0004C590  B1 23 00 5A */	sth r9, 0x5a(r3)
/* 8004F654 0004C594  B1 03 00 5C */	sth r8, 0x5c(r3)
/* 8004F658 0004C598  B1 63 00 5E */	sth r11, 0x5e(r3)
/* 8004F65C 0004C59C  B1 43 00 60 */	sth r10, 0x60(r3)
/* 8004F660 0004C5A0  B1 23 00 62 */	sth r9, 0x62(r3)
/* 8004F664 0004C5A4  B1 03 00 64 */	sth r8, 0x64(r3)
/* 8004F668 0004C5A8  B1 63 00 66 */	sth r11, 0x66(r3)
/* 8004F66C 0004C5AC  B1 43 00 68 */	sth r10, 0x68(r3)
/* 8004F670 0004C5B0  B1 23 00 6A */	sth r9, 0x6a(r3)
/* 8004F674 0004C5B4  B1 03 00 6C */	sth r8, 0x6c(r3)
/* 8004F678 0004C5B8  B1 63 00 6E */	sth r11, 0x6e(r3)
/* 8004F67C 0004C5BC  B1 43 00 70 */	sth r10, 0x70(r3)
/* 8004F680 0004C5C0  B1 23 00 72 */	sth r9, 0x72(r3)
/* 8004F684 0004C5C4  B1 03 00 74 */	sth r8, 0x74(r3)
/* 8004F688 0004C5C8  98 E3 00 76 */	stb r7, 0x76(r3)
/* 8004F68C 0004C5CC  7C 09 03 A6 */	mtctr r0
.L_8004F690:
/* 8004F690 0004C5D0  38 06 00 C0 */	addi r0, r6, 0xc0
/* 8004F694 0004C5D4  38 E6 00 C1 */	addi r7, r6, 0xc1
/* 8004F698 0004C5D8  98 04 00 77 */	stb r0, 0x77(r4)
/* 8004F69C 0004C5DC  38 05 00 01 */	addi r0, r5, 1
/* 8004F6A0 0004C5E0  54 08 08 3C */	slwi r8, r0, 1
/* 8004F6A4 0004C5E4  38 C6 00 10 */	addi r6, r6, 0x10
/* 8004F6A8 0004C5E8  98 E4 00 7B */	stb r7, 0x7b(r4)
/* 8004F6AC 0004C5EC  38 E8 00 C0 */	addi r7, r8, 0xc0
/* 8004F6B0 0004C5F0  38 05 00 02 */	addi r0, r5, 2
/* 8004F6B4 0004C5F4  39 28 00 C1 */	addi r9, r8, 0xc1
/* 8004F6B8 0004C5F8  98 E4 00 7F */	stb r7, 0x7f(r4)
/* 8004F6BC 0004C5FC  54 0A 08 3C */	slwi r10, r0, 1
/* 8004F6C0 0004C600  39 0A 00 C0 */	addi r8, r10, 0xc0
/* 8004F6C4 0004C604  38 05 00 03 */	addi r0, r5, 3
/* 8004F6C8 0004C608  99 24 00 83 */	stb r9, 0x83(r4)
/* 8004F6CC 0004C60C  54 09 08 3C */	slwi r9, r0, 1
/* 8004F6D0 0004C610  38 EA 00 C1 */	addi r7, r10, 0xc1
/* 8004F6D4 0004C614  38 05 00 04 */	addi r0, r5, 4
/* 8004F6D8 0004C618  99 04 00 87 */	stb r8, 0x87(r4)
/* 8004F6DC 0004C61C  54 0B 08 3C */	slwi r11, r0, 1
/* 8004F6E0 0004C620  39 49 00 C0 */	addi r10, r9, 0xc0
/* 8004F6E4 0004C624  38 05 00 05 */	addi r0, r5, 5
/* 8004F6E8 0004C628  98 E4 00 8B */	stb r7, 0x8b(r4)
/* 8004F6EC 0004C62C  54 0C 08 3C */	slwi r12, r0, 1
/* 8004F6F0 0004C630  39 29 00 C1 */	addi r9, r9, 0xc1
/* 8004F6F4 0004C634  39 0B 00 C0 */	addi r8, r11, 0xc0
/* 8004F6F8 0004C638  99 44 00 8F */	stb r10, 0x8f(r4)
/* 8004F6FC 0004C63C  38 EB 00 C1 */	addi r7, r11, 0xc1
/* 8004F700 0004C640  39 6C 00 C0 */	addi r11, r12, 0xc0
/* 8004F704 0004C644  39 4C 00 C1 */	addi r10, r12, 0xc1
/* 8004F708 0004C648  99 24 00 93 */	stb r9, 0x93(r4)
/* 8004F70C 0004C64C  38 05 00 06 */	addi r0, r5, 6
/* 8004F710 0004C650  54 0C 08 3C */	slwi r12, r0, 1
/* 8004F714 0004C654  99 04 00 97 */	stb r8, 0x97(r4)
/* 8004F718 0004C658  38 05 00 07 */	addi r0, r5, 7
/* 8004F71C 0004C65C  54 1F 08 3C */	slwi r31, r0, 1
/* 8004F720 0004C660  39 2C 00 C0 */	addi r9, r12, 0xc0
/* 8004F724 0004C664  98 E4 00 9B */	stb r7, 0x9b(r4)
/* 8004F728 0004C668  39 0C 00 C1 */	addi r8, r12, 0xc1
/* 8004F72C 0004C66C  38 FF 00 C0 */	addi r7, r31, 0xc0
/* 8004F730 0004C670  38 1F 00 C1 */	addi r0, r31, 0xc1
/* 8004F734 0004C674  99 64 00 9F */	stb r11, 0x9f(r4)
/* 8004F738 0004C678  38 A5 00 08 */	addi r5, r5, 8
/* 8004F73C 0004C67C  99 44 00 A3 */	stb r10, 0xa3(r4)
/* 8004F740 0004C680  99 24 00 A7 */	stb r9, 0xa7(r4)
/* 8004F744 0004C684  99 04 00 AB */	stb r8, 0xab(r4)
/* 8004F748 0004C688  98 E4 00 AF */	stb r7, 0xaf(r4)
/* 8004F74C 0004C68C  98 04 00 B3 */	stb r0, 0xb3(r4)
/* 8004F750 0004C690  38 84 00 40 */	addi r4, r4, 0x40
/* 8004F754 0004C694  42 00 FF 3C */	bdnz .L_8004F690
/* 8004F758 0004C698  38 00 00 02 */	li r0, 2
/* 8004F75C 0004C69C  7C 68 1B 78 */	mr r8, r3
/* 8004F760 0004C6A0  80 E2 85 C4 */	lwz r7, j2dDefaultTevKColor@sda21(r2)
/* 8004F764 0004C6A4  7C 09 03 A6 */	mtctr r0
.L_8004F768:
/* 8004F768 0004C6A8  90 E1 00 08 */	stw r7, 8(r1)
/* 8004F76C 0004C6AC  88 C1 00 08 */	lbz r6, 8(r1)
/* 8004F770 0004C6B0  88 A1 00 09 */	lbz r5, 9(r1)
/* 8004F774 0004C6B4  98 C8 00 F8 */	stb r6, 0xf8(r8)
/* 8004F778 0004C6B8  88 81 00 0A */	lbz r4, 0xa(r1)
/* 8004F77C 0004C6BC  88 01 00 0B */	lbz r0, 0xb(r1)
/* 8004F780 0004C6C0  98 A8 00 F9 */	stb r5, 0xf9(r8)
/* 8004F784 0004C6C4  98 88 00 FA */	stb r4, 0xfa(r8)
/* 8004F788 0004C6C8  90 E1 00 08 */	stw r7, 8(r1)
/* 8004F78C 0004C6CC  98 C1 00 0C */	stb r6, 0xc(r1)
/* 8004F790 0004C6D0  88 C1 00 08 */	lbz r6, 8(r1)
/* 8004F794 0004C6D4  98 08 00 FB */	stb r0, 0xfb(r8)
/* 8004F798 0004C6D8  98 A1 00 0D */	stb r5, 0xd(r1)
/* 8004F79C 0004C6DC  88 A1 00 09 */	lbz r5, 9(r1)
/* 8004F7A0 0004C6E0  98 C8 00 FC */	stb r6, 0xfc(r8)
/* 8004F7A4 0004C6E4  98 81 00 0E */	stb r4, 0xe(r1)
/* 8004F7A8 0004C6E8  88 81 00 0A */	lbz r4, 0xa(r1)
/* 8004F7AC 0004C6EC  98 A8 00 FD */	stb r5, 0xfd(r8)
/* 8004F7B0 0004C6F0  98 01 00 0F */	stb r0, 0xf(r1)
/* 8004F7B4 0004C6F4  88 01 00 0B */	lbz r0, 0xb(r1)
/* 8004F7B8 0004C6F8  98 88 00 FE */	stb r4, 0xfe(r8)
/* 8004F7BC 0004C6FC  98 08 00 FF */	stb r0, 0xff(r8)
/* 8004F7C0 0004C700  39 08 00 08 */	addi r8, r8, 8
/* 8004F7C4 0004C704  98 C1 00 0C */	stb r6, 0xc(r1)
/* 8004F7C8 0004C708  98 A1 00 0D */	stb r5, 0xd(r1)
/* 8004F7CC 0004C70C  98 81 00 0E */	stb r4, 0xe(r1)
/* 8004F7D0 0004C710  98 01 00 0F */	stb r0, 0xf(r1)
/* 8004F7D4 0004C714  42 00 FF 94 */	bdnz .L_8004F768
/* 8004F7D8 0004C718  38 E0 00 FF */	li r7, 0xff
/* 8004F7DC 0004C71C  3C 80 80 48 */	lis r4, j2dDefaultIndTevStageInfo@ha
/* 8004F7E0 0004C720  98 E3 01 08 */	stb r7, 0x108(r3)
/* 8004F7E4 0004C724  38 C2 85 CC */	addi r6, r2, j2dDefaultTevSwapModeTable@sda21
/* 8004F7E8 0004C728  38 00 00 08 */	li r0, 8
/* 8004F7EC 0004C72C  7C 65 1B 78 */	mr r5, r3
/* 8004F7F0 0004C730  98 E3 01 18 */	stb r7, 0x118(r3)
/* 8004F7F4 0004C734  38 84 86 BC */	addi r4, r4, j2dDefaultIndTevStageInfo@l
/* 8004F7F8 0004C738  98 E3 01 09 */	stb r7, 0x109(r3)
/* 8004F7FC 0004C73C  98 E3 01 19 */	stb r7, 0x119(r3)
/* 8004F800 0004C740  98 E3 01 0A */	stb r7, 0x10a(r3)
/* 8004F804 0004C744  98 E3 01 1A */	stb r7, 0x11a(r3)
/* 8004F808 0004C748  98 E3 01 0B */	stb r7, 0x10b(r3)
/* 8004F80C 0004C74C  98 E3 01 1B */	stb r7, 0x11b(r3)
/* 8004F810 0004C750  98 E3 01 0C */	stb r7, 0x10c(r3)
/* 8004F814 0004C754  98 E3 01 1C */	stb r7, 0x11c(r3)
/* 8004F818 0004C758  98 E3 01 0D */	stb r7, 0x10d(r3)
/* 8004F81C 0004C75C  98 E3 01 1D */	stb r7, 0x11d(r3)
/* 8004F820 0004C760  98 E3 01 0E */	stb r7, 0x10e(r3)
/* 8004F824 0004C764  98 E3 01 1E */	stb r7, 0x11e(r3)
/* 8004F828 0004C768  98 E3 01 0F */	stb r7, 0x10f(r3)
/* 8004F82C 0004C76C  98 E3 01 1F */	stb r7, 0x11f(r3)
/* 8004F830 0004C770  98 E3 01 10 */	stb r7, 0x110(r3)
/* 8004F834 0004C774  98 E3 01 20 */	stb r7, 0x120(r3)
/* 8004F838 0004C778  98 E3 01 11 */	stb r7, 0x111(r3)
/* 8004F83C 0004C77C  98 E3 01 21 */	stb r7, 0x121(r3)
/* 8004F840 0004C780  98 E3 01 12 */	stb r7, 0x112(r3)
/* 8004F844 0004C784  98 E3 01 22 */	stb r7, 0x122(r3)
/* 8004F848 0004C788  98 E3 01 13 */	stb r7, 0x113(r3)
/* 8004F84C 0004C78C  98 E3 01 23 */	stb r7, 0x123(r3)
/* 8004F850 0004C790  98 E3 01 14 */	stb r7, 0x114(r3)
/* 8004F854 0004C794  98 E3 01 24 */	stb r7, 0x124(r3)
/* 8004F858 0004C798  98 E3 01 15 */	stb r7, 0x115(r3)
/* 8004F85C 0004C79C  98 E3 01 25 */	stb r7, 0x125(r3)
/* 8004F860 0004C7A0  98 E3 01 16 */	stb r7, 0x116(r3)
/* 8004F864 0004C7A4  98 E3 01 26 */	stb r7, 0x126(r3)
/* 8004F868 0004C7A8  98 E3 01 17 */	stb r7, 0x117(r3)
/* 8004F86C 0004C7AC  98 E3 01 27 */	stb r7, 0x127(r3)
/* 8004F870 0004C7B0  88 E6 00 01 */	lbz r7, 1(r6)
/* 8004F874 0004C7B4  89 26 00 02 */	lbz r9, 2(r6)
/* 8004F878 0004C7B8  89 02 85 CC */	lbz r8, j2dDefaultTevSwapModeTable@sda21(r2)
/* 8004F87C 0004C7BC  54 E7 25 36 */	rlwinm r7, r7, 4, 0x14, 0x1b
/* 8004F880 0004C7C0  55 29 10 3A */	slwi r9, r9, 2
/* 8004F884 0004C7C4  89 46 00 03 */	lbz r10, 3(r6)
/* 8004F888 0004C7C8  7C E7 4A 14 */	add r7, r7, r9
/* 8004F88C 0004C7CC  55 08 30 32 */	slwi r8, r8, 6
/* 8004F890 0004C7D0  7C E7 52 14 */	add r7, r7, r10
/* 8004F894 0004C7D4  7C E8 3A 14 */	add r7, r8, r7
/* 8004F898 0004C7D8  98 E3 01 28 */	stb r7, 0x128(r3)
/* 8004F89C 0004C7DC  88 E6 00 01 */	lbz r7, 1(r6)
/* 8004F8A0 0004C7E0  89 26 00 02 */	lbz r9, 2(r6)
/* 8004F8A4 0004C7E4  89 02 85 CC */	lbz r8, j2dDefaultTevSwapModeTable@sda21(r2)
/* 8004F8A8 0004C7E8  54 E7 25 36 */	rlwinm r7, r7, 4, 0x14, 0x1b
/* 8004F8AC 0004C7EC  55 29 10 3A */	slwi r9, r9, 2
/* 8004F8B0 0004C7F0  89 46 00 03 */	lbz r10, 3(r6)
/* 8004F8B4 0004C7F4  7C E7 4A 14 */	add r7, r7, r9
/* 8004F8B8 0004C7F8  55 08 30 32 */	slwi r8, r8, 6
/* 8004F8BC 0004C7FC  7C E7 52 14 */	add r7, r7, r10
/* 8004F8C0 0004C800  7C E8 3A 14 */	add r7, r8, r7
/* 8004F8C4 0004C804  98 E3 01 29 */	stb r7, 0x129(r3)
/* 8004F8C8 0004C808  88 E6 00 01 */	lbz r7, 1(r6)
/* 8004F8CC 0004C80C  89 26 00 02 */	lbz r9, 2(r6)
/* 8004F8D0 0004C810  89 02 85 CC */	lbz r8, j2dDefaultTevSwapModeTable@sda21(r2)
/* 8004F8D4 0004C814  54 E7 25 36 */	rlwinm r7, r7, 4, 0x14, 0x1b
/* 8004F8D8 0004C818  55 29 10 3A */	slwi r9, r9, 2
/* 8004F8DC 0004C81C  89 46 00 03 */	lbz r10, 3(r6)
/* 8004F8E0 0004C820  7C E7 4A 14 */	add r7, r7, r9
/* 8004F8E4 0004C824  55 08 30 32 */	slwi r8, r8, 6
/* 8004F8E8 0004C828  7C E7 52 14 */	add r7, r7, r10
/* 8004F8EC 0004C82C  7C E8 3A 14 */	add r7, r8, r7
/* 8004F8F0 0004C830  98 E3 01 2A */	stb r7, 0x12a(r3)
/* 8004F8F4 0004C834  89 26 00 02 */	lbz r9, 2(r6)
/* 8004F8F8 0004C838  88 E6 00 01 */	lbz r7, 1(r6)
/* 8004F8FC 0004C83C  89 02 85 CC */	lbz r8, j2dDefaultTevSwapModeTable@sda21(r2)
/* 8004F900 0004C840  55 29 10 3A */	slwi r9, r9, 2
/* 8004F904 0004C844  54 E7 20 36 */	slwi r7, r7, 4
/* 8004F908 0004C848  89 46 00 03 */	lbz r10, 3(r6)
/* 8004F90C 0004C84C  7C C7 4A 14 */	add r6, r7, r9
/* 8004F910 0004C850  55 07 30 32 */	slwi r7, r8, 6
/* 8004F914 0004C854  7C C6 52 14 */	add r6, r6, r10
/* 8004F918 0004C858  7C C7 32 14 */	add r6, r7, r6
/* 8004F91C 0004C85C  98 C3 01 2B */	stb r6, 0x12b(r3)
/* 8004F920 0004C860  7C 09 03 A6 */	mtctr r0
.L_8004F924:
/* 8004F924 0004C864  80 C4 00 04 */	lwz r6, 4(r4)
/* 8004F928 0004C868  80 04 00 08 */	lwz r0, 8(r4)
/* 8004F92C 0004C86C  90 C1 00 14 */	stw r6, 0x14(r1)
/* 8004F930 0004C870  80 C4 00 00 */	lwz r6, 0(r4)
/* 8004F934 0004C874  90 01 00 18 */	stw r0, 0x18(r1)
/* 8004F938 0004C878  88 01 00 17 */	lbz r0, 0x17(r1)
/* 8004F93C 0004C87C  90 C1 00 10 */	stw r6, 0x10(r1)
/* 8004F940 0004C880  88 C1 00 18 */	lbz r6, 0x18(r1)
/* 8004F944 0004C884  54 00 A8 14 */	slwi r0, r0, 0x15
/* 8004F948 0004C888  88 E1 00 16 */	lbz r7, 0x16(r1)
/* 8004F94C 0004C88C  54 C6 B0 12 */	slwi r6, r6, 0x16
/* 8004F950 0004C890  89 01 00 13 */	lbz r8, 0x13(r1)
/* 8004F954 0004C894  89 21 00 15 */	lbz r9, 0x15(r1)
/* 8004F958 0004C898  54 E7 A0 16 */	slwi r7, r7, 0x14
/* 8004F95C 0004C89C  7C C0 03 78 */	or r0, r6, r0
/* 8004F960 0004C8A0  89 41 00 14 */	lbz r10, 0x14(r1)
/* 8004F964 0004C8A4  89 61 00 12 */	lbz r11, 0x12(r1)
/* 8004F968 0004C8A8  55 06 80 1E */	slwi r6, r8, 0x10
/* 8004F96C 0004C8AC  7C E0 03 78 */	or r0, r7, r0
/* 8004F970 0004C8B0  89 81 00 11 */	lbz r12, 0x11(r1)
/* 8004F974 0004C8B4  55 27 58 28 */	slwi r7, r9, 0xb
/* 8004F978 0004C8B8  55 48 40 2E */	slwi r8, r10, 8
/* 8004F97C 0004C8BC  7C C0 03 78 */	or r0, r6, r0
/* 8004F980 0004C8C0  55 66 20 36 */	slwi r6, r11, 4
/* 8004F984 0004C8C4  7C E0 03 78 */	or r0, r7, r0
/* 8004F988 0004C8C8  55 87 10 3A */	slwi r7, r12, 2
/* 8004F98C 0004C8CC  7D 00 03 78 */	or r0, r8, r0
/* 8004F990 0004C8D0  89 01 00 10 */	lbz r8, 0x10(r1)
/* 8004F994 0004C8D4  7C C0 03 78 */	or r0, r6, r0
/* 8004F998 0004C8D8  7C E0 03 78 */	or r0, r7, r0
/* 8004F99C 0004C8DC  7D 00 03 78 */	or r0, r8, r0
/* 8004F9A0 0004C8E0  90 05 01 2C */	stw r0, 0x12c(r5)
/* 8004F9A4 0004C8E4  80 C4 00 04 */	lwz r6, 4(r4)
/* 8004F9A8 0004C8E8  80 04 00 08 */	lwz r0, 8(r4)
/* 8004F9AC 0004C8EC  90 C1 00 14 */	stw r6, 0x14(r1)
/* 8004F9B0 0004C8F0  80 C4 00 00 */	lwz r6, 0(r4)
/* 8004F9B4 0004C8F4  90 01 00 18 */	stw r0, 0x18(r1)
/* 8004F9B8 0004C8F8  88 01 00 17 */	lbz r0, 0x17(r1)
/* 8004F9BC 0004C8FC  90 C1 00 10 */	stw r6, 0x10(r1)
/* 8004F9C0 0004C900  88 C1 00 18 */	lbz r6, 0x18(r1)
/* 8004F9C4 0004C904  54 00 A8 14 */	slwi r0, r0, 0x15
/* 8004F9C8 0004C908  88 E1 00 16 */	lbz r7, 0x16(r1)
/* 8004F9CC 0004C90C  54 C6 B0 12 */	slwi r6, r6, 0x16
/* 8004F9D0 0004C910  89 01 00 13 */	lbz r8, 0x13(r1)
/* 8004F9D4 0004C914  89 21 00 15 */	lbz r9, 0x15(r1)
/* 8004F9D8 0004C918  54 E7 A0 16 */	slwi r7, r7, 0x14
/* 8004F9DC 0004C91C  7C C0 03 78 */	or r0, r6, r0
/* 8004F9E0 0004C920  89 41 00 14 */	lbz r10, 0x14(r1)
/* 8004F9E4 0004C924  89 61 00 12 */	lbz r11, 0x12(r1)
/* 8004F9E8 0004C928  55 06 80 1E */	slwi r6, r8, 0x10
/* 8004F9EC 0004C92C  7C E0 03 78 */	or r0, r7, r0
/* 8004F9F0 0004C930  89 81 00 11 */	lbz r12, 0x11(r1)
/* 8004F9F4 0004C934  55 27 58 28 */	slwi r7, r9, 0xb
/* 8004F9F8 0004C938  55 48 40 2E */	slwi r8, r10, 8
/* 8004F9FC 0004C93C  7C C0 03 78 */	or r0, r6, r0
/* 8004FA00 0004C940  55 66 20 36 */	slwi r6, r11, 4
/* 8004FA04 0004C944  7C E0 03 78 */	or r0, r7, r0
/* 8004FA08 0004C948  55 87 10 3A */	slwi r7, r12, 2
/* 8004FA0C 0004C94C  7D 00 03 78 */	or r0, r8, r0
/* 8004FA10 0004C950  89 01 00 10 */	lbz r8, 0x10(r1)
/* 8004FA14 0004C954  7C C0 03 78 */	or r0, r6, r0
/* 8004FA18 0004C958  7C E0 03 78 */	or r0, r7, r0
/* 8004FA1C 0004C95C  7D 00 03 78 */	or r0, r8, r0
/* 8004FA20 0004C960  90 05 01 30 */	stw r0, 0x130(r5)
/* 8004FA24 0004C964  38 A5 00 08 */	addi r5, r5, 8
/* 8004FA28 0004C968  42 00 FE FC */	bdnz .L_8004F924
/* 8004FA2C 0004C96C  38 00 00 00 */	li r0, 0
/* 8004FA30 0004C970  90 03 01 8C */	stw r0, 0x18c(r3)
/* 8004FA34 0004C974  90 03 01 90 */	stw r0, 0x190(r3)
/* 8004FA38 0004C978  90 03 01 94 */	stw r0, 0x194(r3)
/* 8004FA3C 0004C97C  90 03 01 98 */	stw r0, 0x198(r3)
/* 8004FA40 0004C980  90 03 01 9C */	stw r0, 0x19c(r3)
/* 8004FA44 0004C984  90 03 01 A0 */	stw r0, 0x1a0(r3)
/* 8004FA48 0004C988  90 03 01 A4 */	stw r0, 0x1a4(r3)
/* 8004FA4C 0004C98C  90 03 01 A8 */	stw r0, 0x1a8(r3)
/* 8004FA50 0004C990  90 03 01 AC */	stw r0, 0x1ac(r3)
/* 8004FA54 0004C994  98 03 01 B1 */	stb r0, 0x1b1(r3)
/* 8004FA58 0004C998  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 8004FA5C 0004C99C  38 21 00 30 */	addi r1, r1, 0x30
/* 8004FA60 0004C9A0  4E 80 00 20 */	blr 
.endfn initialize__13J2DTevBlock16Fv

.fn prepareTexture__13J2DTevBlock16FUc, global
/* 8004FA64 0004C9A4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8004FA68 0004C9A8  7C 08 02 A6 */	mflr r0
/* 8004FA6C 0004C9AC  90 01 00 24 */	stw r0, 0x24(r1)
/* 8004FA70 0004C9B0  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8004FA74 0004C9B4  54 9F 06 3E */	clrlwi r31, r4, 0x18
/* 8004FA78 0004C9B8  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8004FA7C 0004C9BC  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8004FA80 0004C9C0  3B A0 00 00 */	li r29, 0
/* 8004FA84 0004C9C4  93 81 00 10 */	stw r28, 0x10(r1)
/* 8004FA88 0004C9C8  7C 7C 1B 78 */	mr r28, r3
/* 8004FA8C 0004C9CC  48 00 00 88 */	b .L_8004FB14
.L_8004FA90:
/* 8004FA90 0004C9D0  57 A0 06 3E */	clrlwi r0, r29, 0x18
/* 8004FA94 0004C9D4  28 00 00 08 */	cmplwi r0, 8
/* 8004FA98 0004C9D8  41 80 00 0C */	blt .L_8004FAA4
/* 8004FA9C 0004C9DC  38 60 00 00 */	li r3, 0
/* 8004FAA0 0004C9E0  48 00 00 84 */	b .L_8004FB24
.L_8004FAA4:
/* 8004FAA4 0004C9E4  57 A3 15 BA */	rlwinm r3, r29, 2, 0x16, 0x1d
/* 8004FAA8 0004C9E8  3B C3 01 6C */	addi r30, r3, 0x16c
/* 8004FAAC 0004C9EC  7C 1C F0 2E */	lwzx r0, r28, r30
/* 8004FAB0 0004C9F0  28 00 00 00 */	cmplwi r0, 0
/* 8004FAB4 0004C9F4  40 82 00 5C */	bne .L_8004FB10
/* 8004FAB8 0004C9F8  38 60 00 40 */	li r3, 0x40
/* 8004FABC 0004C9FC  4B FD 43 E9 */	bl __nw__FUl
/* 8004FAC0 0004CA00  28 03 00 00 */	cmplwi r3, 0
/* 8004FAC4 0004CA04  41 82 00 1C */	beq .L_8004FAE0
/* 8004FAC8 0004CA08  88 83 00 3B */	lbz r4, 0x3b(r3)
/* 8004FACC 0004CA0C  38 00 00 00 */	li r0, 0
/* 8004FAD0 0004CA10  54 84 07 BC */	rlwinm r4, r4, 0, 0x1e, 0x1e
/* 8004FAD4 0004CA14  98 83 00 3B */	stb r4, 0x3b(r3)
/* 8004FAD8 0004CA18  90 03 00 28 */	stw r0, 0x28(r3)
/* 8004FADC 0004CA1C  90 03 00 20 */	stw r0, 0x20(r3)
.L_8004FAE0:
/* 8004FAE0 0004CA20  7C 7C F1 2E */	stwx r3, r28, r30
/* 8004FAE4 0004CA24  7C 1C F0 2E */	lwzx r0, r28, r30
/* 8004FAE8 0004CA28  28 00 00 00 */	cmplwi r0, 0
/* 8004FAEC 0004CA2C  40 82 00 0C */	bne .L_8004FAF8
/* 8004FAF0 0004CA30  38 60 00 00 */	li r3, 0
/* 8004FAF4 0004CA34  48 00 00 30 */	b .L_8004FB24
.L_8004FAF8:
/* 8004FAF8 0004CA38  57 A0 06 3E */	clrlwi r0, r29, 0x18
/* 8004FAFC 0004CA3C  38 60 00 01 */	li r3, 1
/* 8004FB00 0004CA40  88 9C 01 B0 */	lbz r4, 0x1b0(r28)
/* 8004FB04 0004CA44  7C 60 00 30 */	slw r0, r3, r0
/* 8004FB08 0004CA48  7C 80 03 78 */	or r0, r4, r0
/* 8004FB0C 0004CA4C  98 1C 01 B0 */	stb r0, 0x1b0(r28)
.L_8004FB10:
/* 8004FB10 0004CA50  3B BD 00 01 */	addi r29, r29, 1
.L_8004FB14:
/* 8004FB14 0004CA54  57 A0 06 3E */	clrlwi r0, r29, 0x18
/* 8004FB18 0004CA58  7C 00 F8 40 */	cmplw r0, r31
/* 8004FB1C 0004CA5C  41 80 FF 74 */	blt .L_8004FA90
/* 8004FB20 0004CA60  38 60 00 01 */	li r3, 1
.L_8004FB24:
/* 8004FB24 0004CA64  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8004FB28 0004CA68  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8004FB2C 0004CA6C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8004FB30 0004CA70  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8004FB34 0004CA74  83 81 00 10 */	lwz r28, 0x10(r1)
/* 8004FB38 0004CA78  7C 08 03 A6 */	mtlr r0
/* 8004FB3C 0004CA7C  38 21 00 20 */	addi r1, r1, 0x20
/* 8004FB40 0004CA80  4E 80 00 20 */	blr 
.endfn prepareTexture__13J2DTevBlock16FUc

.fn insertTexture__13J2DTevBlock16FUlPC7ResTIMGP10JUTPalette, global
/* 8004FB44 0004CA84  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8004FB48 0004CA88  7C 08 02 A6 */	mflr r0
/* 8004FB4C 0004CA8C  90 01 00 34 */	stw r0, 0x34(r1)
/* 8004FB50 0004CA90  BF 21 00 14 */	stmw r25, 0x14(r1)
/* 8004FB54 0004CA94  7C 9A 23 78 */	mr r26, r4
/* 8004FB58 0004CA98  28 1A 00 08 */	cmplwi r26, 8
/* 8004FB5C 0004CA9C  7C 79 1B 78 */	mr r25, r3
/* 8004FB60 0004CAA0  7C BB 2B 78 */	mr r27, r5
/* 8004FB64 0004CAA4  7C DC 33 78 */	mr r28, r6
/* 8004FB68 0004CAA8  40 80 00 0C */	bge .L_8004FB74
/* 8004FB6C 0004CAAC  28 1B 00 00 */	cmplwi r27, 0
/* 8004FB70 0004CAB0  40 82 00 0C */	bne .L_8004FB7C
.L_8004FB74:
/* 8004FB74 0004CAB4  38 60 00 00 */	li r3, 0
/* 8004FB78 0004CAB8  48 00 03 80 */	b .L_8004FEF8
.L_8004FB7C:
/* 8004FB7C 0004CABC  3B C0 00 00 */	li r30, 0
/* 8004FB80 0004CAC0  48 00 00 28 */	b .L_8004FBA8
.L_8004FB84:
/* 8004FB84 0004CAC4  57 C3 15 BA */	rlwinm r3, r30, 2, 0x16, 0x1d
/* 8004FB88 0004CAC8  38 03 01 6C */	addi r0, r3, 0x16c
/* 8004FB8C 0004CACC  7C 79 00 2E */	lwzx r3, r25, r0
/* 8004FB90 0004CAD0  28 03 00 00 */	cmplwi r3, 0
/* 8004FB94 0004CAD4  41 82 00 20 */	beq .L_8004FBB4
/* 8004FB98 0004CAD8  80 03 00 20 */	lwz r0, 0x20(r3)
/* 8004FB9C 0004CADC  28 00 00 00 */	cmplwi r0, 0
/* 8004FBA0 0004CAE0  41 82 00 14 */	beq .L_8004FBB4
/* 8004FBA4 0004CAE4  3B DE 00 01 */	addi r30, r30, 1
.L_8004FBA8:
/* 8004FBA8 0004CAE8  57 C0 06 3E */	clrlwi r0, r30, 0x18
/* 8004FBAC 0004CAEC  28 00 00 08 */	cmplwi r0, 8
/* 8004FBB0 0004CAF0  41 80 FF D4 */	blt .L_8004FB84
.L_8004FBB4:
/* 8004FBB4 0004CAF4  57 C0 06 3E */	clrlwi r0, r30, 0x18
/* 8004FBB8 0004CAF8  7C 00 D0 40 */	cmplw r0, r26
/* 8004FBBC 0004CAFC  40 80 00 0C */	bge .L_8004FBC8
/* 8004FBC0 0004CB00  38 60 00 00 */	li r3, 0
/* 8004FBC4 0004CB04  48 00 03 34 */	b .L_8004FEF8
.L_8004FBC8:
/* 8004FBC8 0004CB08  28 00 00 08 */	cmplwi r0, 8
/* 8004FBCC 0004CB0C  40 82 00 0C */	bne .L_8004FBD8
/* 8004FBD0 0004CB10  38 60 00 00 */	li r3, 0
/* 8004FBD4 0004CB14  48 00 03 24 */	b .L_8004FEF8
.L_8004FBD8:
/* 8004FBD8 0004CB18  88 1B 00 08 */	lbz r0, 8(r27)
/* 8004FBDC 0004CB1C  3B A0 00 00 */	li r29, 0
/* 8004FBE0 0004CB20  28 00 00 00 */	cmplwi r0, 0
/* 8004FBE4 0004CB24  41 82 00 B4 */	beq .L_8004FC98
/* 8004FBE8 0004CB28  28 1C 00 00 */	cmplwi r28, 0
/* 8004FBEC 0004CB2C  40 82 00 AC */	bne .L_8004FC98
/* 8004FBF0 0004CB30  38 00 00 07 */	li r0, 7
/* 8004FBF4 0004CB34  7F 25 CB 78 */	mr r5, r25
/* 8004FBF8 0004CB38  38 E0 00 00 */	li r7, 0
/* 8004FBFC 0004CB3C  7C 09 03 A6 */	mtctr r0
/* 8004FC00 0004CB40  38 60 00 01 */	li r3, 1
.L_8004FC04:
/* 8004FC04 0004CB44  80 C5 01 6C */	lwz r6, 0x16c(r5)
/* 8004FC08 0004CB48  28 06 00 00 */	cmplwi r6, 0
/* 8004FC0C 0004CB4C  41 82 00 4C */	beq .L_8004FC58
/* 8004FC10 0004CB50  80 86 00 20 */	lwz r4, 0x20(r6)
/* 8004FC14 0004CB54  28 04 00 00 */	cmplwi r4, 0
/* 8004FC18 0004CB58  41 82 00 40 */	beq .L_8004FC58
/* 8004FC1C 0004CB5C  88 04 00 08 */	lbz r0, 8(r4)
/* 8004FC20 0004CB60  28 00 00 00 */	cmplwi r0, 0
/* 8004FC24 0004CB64  41 82 00 34 */	beq .L_8004FC58
/* 8004FC28 0004CB68  88 86 00 3A */	lbz r4, 0x3a(r6)
/* 8004FC2C 0004CB6C  38 00 00 00 */	li r0, 0
/* 8004FC30 0004CB70  2C 04 00 10 */	cmpwi r4, 0x10
/* 8004FC34 0004CB74  41 80 00 08 */	blt .L_8004FC3C
/* 8004FC38 0004CB78  38 00 00 10 */	li r0, 0x10
.L_8004FC3C:
/* 8004FC3C 0004CB7C  7C 00 20 50 */	subf r0, r0, r4
/* 8004FC40 0004CB80  54 00 06 3E */	clrlwi r0, r0, 0x18
/* 8004FC44 0004CB84  28 00 00 08 */	cmplwi r0, 8
/* 8004FC48 0004CB88  40 80 00 10 */	bge .L_8004FC58
/* 8004FC4C 0004CB8C  7C 60 00 30 */	slw r0, r3, r0
/* 8004FC50 0004CB90  7C E0 03 78 */	or r0, r7, r0
/* 8004FC54 0004CB94  54 07 06 3E */	clrlwi r7, r0, 0x18
.L_8004FC58:
/* 8004FC58 0004CB98  38 A5 00 04 */	addi r5, r5, 4
/* 8004FC5C 0004CB9C  42 00 FF A8 */	bdnz .L_8004FC04
/* 8004FC60 0004CBA0  54 E4 06 3E */	clrlwi r4, r7, 0x18
/* 8004FC64 0004CBA4  38 A0 00 00 */	li r5, 0
/* 8004FC68 0004CBA8  38 60 00 01 */	li r3, 1
/* 8004FC6C 0004CBAC  48 00 00 20 */	b .L_8004FC8C
.L_8004FC70:
/* 8004FC70 0004CBB0  54 A0 06 3E */	clrlwi r0, r5, 0x18
/* 8004FC74 0004CBB4  7C 60 00 30 */	slw r0, r3, r0
/* 8004FC78 0004CBB8  7C 80 00 39 */	and. r0, r4, r0
/* 8004FC7C 0004CBBC  40 82 00 0C */	bne .L_8004FC88
/* 8004FC80 0004CBC0  7C BD 2B 78 */	mr r29, r5
/* 8004FC84 0004CBC4  48 00 00 14 */	b .L_8004FC98
.L_8004FC88:
/* 8004FC88 0004CBC8  38 A5 00 01 */	addi r5, r5, 1
.L_8004FC8C:
/* 8004FC8C 0004CBCC  54 A0 06 3E */	clrlwi r0, r5, 0x18
/* 8004FC90 0004CBD0  28 00 00 08 */	cmplwi r0, 8
/* 8004FC94 0004CBD4  41 80 FF DC */	blt .L_8004FC70
.L_8004FC98:
/* 8004FC98 0004CBD8  57 C0 15 BA */	rlwinm r0, r30, 2, 0x16, 0x1d
/* 8004FC9C 0004CBDC  7C 79 02 14 */	add r3, r25, r0
/* 8004FCA0 0004CBE0  83 E3 01 6C */	lwz r31, 0x16c(r3)
/* 8004FCA4 0004CBE4  28 1F 00 00 */	cmplwi r31, 0
/* 8004FCA8 0004CBE8  40 82 00 EC */	bne .L_8004FD94
/* 8004FCAC 0004CBEC  38 60 00 40 */	li r3, 0x40
/* 8004FCB0 0004CBF0  4B FD 41 F5 */	bl __nw__FUl
/* 8004FCB4 0004CBF4  7C 7F 1B 79 */	or. r31, r3, r3
/* 8004FCB8 0004CBF8  41 82 00 24 */	beq .L_8004FCDC
/* 8004FCBC 0004CBFC  38 00 00 00 */	li r0, 0
/* 8004FCC0 0004CC00  7F 64 DB 78 */	mr r4, r27
/* 8004FCC4 0004CC04  90 1F 00 28 */	stw r0, 0x28(r31)
/* 8004FCC8 0004CC08  7F A5 EB 78 */	mr r5, r29
/* 8004FCCC 0004CC0C  4B FE 33 B9 */	bl storeTIMG__10JUTTextureFPC7ResTIMGUc
/* 8004FCD0 0004CC10  88 1F 00 3B */	lbz r0, 0x3b(r31)
/* 8004FCD4 0004CC14  54 00 07 BC */	rlwinm r0, r0, 0, 0x1e, 0x1e
/* 8004FCD8 0004CC18  98 1F 00 3B */	stb r0, 0x3b(r31)
.L_8004FCDC:
/* 8004FCDC 0004CC1C  28 1F 00 00 */	cmplwi r31, 0
/* 8004FCE0 0004CC20  40 82 00 0C */	bne .L_8004FCEC
/* 8004FCE4 0004CC24  38 60 00 00 */	li r3, 0
/* 8004FCE8 0004CC28  48 00 02 10 */	b .L_8004FEF8
.L_8004FCEC:
/* 8004FCEC 0004CC2C  28 1C 00 00 */	cmplwi r28, 0
/* 8004FCF0 0004CC30  41 82 00 14 */	beq .L_8004FD04
/* 8004FCF4 0004CC34  7F E3 FB 78 */	mr r3, r31
/* 8004FCF8 0004CC38  7F 64 DB 78 */	mr r4, r27
/* 8004FCFC 0004CC3C  7F 85 E3 78 */	mr r5, r28
/* 8004FD00 0004CC40  4B FE 35 31 */	bl storeTIMG__10JUTTextureFPC7ResTIMGP10JUTPalette
.L_8004FD04:
/* 8004FD04 0004CC44  39 00 00 07 */	li r8, 7
/* 8004FD08 0004CC48  48 00 00 40 */	b .L_8004FD48
.L_8004FD0C:
/* 8004FD0C 0004CC4C  54 83 10 3A */	slwi r3, r4, 2
/* 8004FD10 0004CC50  55 00 15 BA */	rlwinm r0, r8, 2, 0x16, 0x1d
/* 8004FD14 0004CC54  7C D9 1A 14 */	add r6, r25, r3
/* 8004FD18 0004CC58  54 84 08 3C */	slwi r4, r4, 1
/* 8004FD1C 0004CC5C  80 A6 01 68 */	lwz r5, 0x168(r6)
/* 8004FD20 0004CC60  7C F9 02 14 */	add r7, r25, r0
/* 8004FD24 0004CC64  55 03 0D FC */	rlwinm r3, r8, 1, 0x17, 0x1e
/* 8004FD28 0004CC68  38 84 00 02 */	addi r4, r4, 2
/* 8004FD2C 0004CC6C  90 A7 01 6C */	stw r5, 0x16c(r7)
/* 8004FD30 0004CC70  38 03 00 04 */	addi r0, r3, 4
/* 8004FD34 0004CC74  39 08 FF FF */	addi r8, r8, -1
/* 8004FD38 0004CC78  80 66 01 88 */	lwz r3, 0x188(r6)
/* 8004FD3C 0004CC7C  90 67 01 8C */	stw r3, 0x18c(r7)
/* 8004FD40 0004CC80  7C 79 22 2E */	lhzx r3, r25, r4
/* 8004FD44 0004CC84  7C 79 03 2E */	sthx r3, r25, r0
.L_8004FD48:
/* 8004FD48 0004CC88  55 04 06 3E */	clrlwi r4, r8, 0x18
/* 8004FD4C 0004CC8C  7C 04 D0 40 */	cmplw r4, r26
/* 8004FD50 0004CC90  41 81 FF BC */	bgt .L_8004FD0C
/* 8004FD54 0004CC94  57 40 10 3A */	slwi r0, r26, 2
/* 8004FD58 0004CC98  7F 23 CB 78 */	mr r3, r25
/* 8004FD5C 0004CC9C  7C B9 02 14 */	add r5, r25, r0
/* 8004FD60 0004CCA0  57 44 06 3E */	clrlwi r4, r26, 0x18
/* 8004FD64 0004CCA4  93 E5 01 6C */	stw r31, 0x16c(r5)
/* 8004FD68 0004CCA8  38 A0 00 01 */	li r5, 1
/* 8004FD6C 0004CCAC  81 99 00 00 */	lwz r12, 0(r25)
/* 8004FD70 0004CCB0  81 8C 00 AC */	lwz r12, 0xac(r12)
/* 8004FD74 0004CCB4  7D 89 03 A6 */	mtctr r12
/* 8004FD78 0004CCB8  4E 80 04 21 */	bctrl 
/* 8004FD7C 0004CCBC  38 00 00 01 */	li r0, 1
/* 8004FD80 0004CCC0  88 79 01 B0 */	lbz r3, 0x1b0(r25)
/* 8004FD84 0004CCC4  7C 00 D0 30 */	slw r0, r0, r26
/* 8004FD88 0004CCC8  7C 60 03 78 */	or r0, r3, r0
/* 8004FD8C 0004CCCC  98 19 01 B0 */	stb r0, 0x1b0(r25)
/* 8004FD90 0004CCD0  48 00 01 40 */	b .L_8004FED0
.L_8004FD94:
/* 8004FD94 0004CCD4  28 1C 00 00 */	cmplwi r28, 0
/* 8004FD98 0004CCD8  40 82 00 18 */	bne .L_8004FDB0
/* 8004FD9C 0004CCDC  7F E3 FB 78 */	mr r3, r31
/* 8004FDA0 0004CCE0  7F 64 DB 78 */	mr r4, r27
/* 8004FDA4 0004CCE4  7F A5 EB 78 */	mr r5, r29
/* 8004FDA8 0004CCE8  4B FE 32 DD */	bl storeTIMG__10JUTTextureFPC7ResTIMGUc
/* 8004FDAC 0004CCEC  48 00 00 14 */	b .L_8004FDC0
.L_8004FDB0:
/* 8004FDB0 0004CCF0  7F E3 FB 78 */	mr r3, r31
/* 8004FDB4 0004CCF4  7F 64 DB 78 */	mr r4, r27
/* 8004FDB8 0004CCF8  7F 85 E3 78 */	mr r5, r28
/* 8004FDBC 0004CCFC  4B FE 34 75 */	bl storeTIMG__10JUTTextureFPC7ResTIMGP10JUTPalette
.L_8004FDC0:
/* 8004FDC0 0004CD00  88 19 01 B0 */	lbz r0, 0x1b0(r25)
/* 8004FDC4 0004CD04  7F C3 F3 78 */	mr r3, r30
/* 8004FDC8 0004CD08  38 81 00 08 */	addi r4, r1, 8
/* 8004FDCC 0004CD0C  54 0B 07 FE */	clrlwi r11, r0, 0x1f
/* 8004FDD0 0004CD10  54 0A FF FE */	rlwinm r10, r0, 0x1f, 0x1f, 0x1f
/* 8004FDD4 0004CD14  54 09 F7 FE */	rlwinm r9, r0, 0x1e, 0x1f, 0x1f
/* 8004FDD8 0004CD18  54 08 EF FE */	rlwinm r8, r0, 0x1d, 0x1f, 0x1f
/* 8004FDDC 0004CD1C  54 07 E7 FE */	rlwinm r7, r0, 0x1c, 0x1f, 0x1f
/* 8004FDE0 0004CD20  54 06 DF FE */	rlwinm r6, r0, 0x1b, 0x1f, 0x1f
/* 8004FDE4 0004CD24  54 05 D7 FE */	rlwinm r5, r0, 0x1a, 0x1f, 0x1f
/* 8004FDE8 0004CD28  54 00 CF FE */	rlwinm r0, r0, 0x19, 0x1f, 0x1f
/* 8004FDEC 0004CD2C  99 61 00 08 */	stb r11, 8(r1)
/* 8004FDF0 0004CD30  99 41 00 09 */	stb r10, 9(r1)
/* 8004FDF4 0004CD34  99 21 00 0A */	stb r9, 0xa(r1)
/* 8004FDF8 0004CD38  99 01 00 0B */	stb r8, 0xb(r1)
/* 8004FDFC 0004CD3C  98 E1 00 0C */	stb r7, 0xc(r1)
/* 8004FE00 0004CD40  98 C1 00 0D */	stb r6, 0xd(r1)
/* 8004FE04 0004CD44  98 A1 00 0E */	stb r5, 0xe(r1)
/* 8004FE08 0004CD48  98 01 00 0F */	stb r0, 0xf(r1)
/* 8004FE0C 0004CD4C  48 00 00 50 */	b .L_8004FE5C
.L_8004FE10:
/* 8004FE10 0004CD50  55 05 10 3A */	slwi r5, r8, 2
/* 8004FE14 0004CD54  54 60 15 BA */	rlwinm r0, r3, 2, 0x16, 0x1d
/* 8004FE18 0004CD58  7D 39 2A 14 */	add r9, r25, r5
/* 8004FE1C 0004CD5C  55 06 08 3C */	slwi r6, r8, 1
/* 8004FE20 0004CD60  80 E9 01 68 */	lwz r7, 0x168(r9)
/* 8004FE24 0004CD64  7D 59 02 14 */	add r10, r25, r0
/* 8004FE28 0004CD68  38 08 FF FF */	addi r0, r8, -1
/* 8004FE2C 0004CD6C  54 65 0D FC */	rlwinm r5, r3, 1, 0x17, 0x1e
/* 8004FE30 0004CD70  90 EA 01 6C */	stw r7, 0x16c(r10)
/* 8004FE34 0004CD74  54 68 06 3E */	clrlwi r8, r3, 0x18
/* 8004FE38 0004CD78  7C 04 00 AE */	lbzx r0, r4, r0
/* 8004FE3C 0004CD7C  38 C6 00 02 */	addi r6, r6, 2
/* 8004FE40 0004CD80  80 E9 01 88 */	lwz r7, 0x188(r9)
/* 8004FE44 0004CD84  38 A5 00 04 */	addi r5, r5, 4
/* 8004FE48 0004CD88  7C 04 41 AE */	stbx r0, r4, r8
/* 8004FE4C 0004CD8C  38 63 FF FF */	addi r3, r3, -1
/* 8004FE50 0004CD90  90 EA 01 8C */	stw r7, 0x18c(r10)
/* 8004FE54 0004CD94  7C 19 32 2E */	lhzx r0, r25, r6
/* 8004FE58 0004CD98  7C 19 2B 2E */	sthx r0, r25, r5
.L_8004FE5C:
/* 8004FE5C 0004CD9C  54 68 06 3E */	clrlwi r8, r3, 0x18
/* 8004FE60 0004CDA0  7C 08 D0 40 */	cmplw r8, r26
/* 8004FE64 0004CDA4  41 81 FF AC */	bgt .L_8004FE10
/* 8004FE68 0004CDA8  57 43 10 3A */	slwi r3, r26, 2
/* 8004FE6C 0004CDAC  38 00 00 00 */	li r0, 0
/* 8004FE70 0004CDB0  7C 79 1A 14 */	add r3, r25, r3
/* 8004FE74 0004CDB4  38 A1 00 08 */	addi r5, r1, 8
/* 8004FE78 0004CDB8  93 E3 01 6C */	stw r31, 0x16c(r3)
/* 8004FE7C 0004CDBC  38 E0 00 00 */	li r7, 0
/* 8004FE80 0004CDC0  38 60 00 01 */	li r3, 1
/* 8004FE84 0004CDC4  98 19 01 B0 */	stb r0, 0x1b0(r25)
/* 8004FE88 0004CDC8  48 00 00 28 */	b .L_8004FEB0
.L_8004FE8C:
/* 8004FE8C 0004CDCC  54 E6 06 3E */	clrlwi r6, r7, 0x18
/* 8004FE90 0004CDD0  7C 05 30 AE */	lbzx r0, r5, r6
/* 8004FE94 0004CDD4  28 00 00 00 */	cmplwi r0, 0
/* 8004FE98 0004CDD8  41 82 00 14 */	beq .L_8004FEAC
/* 8004FE9C 0004CDDC  88 99 01 B0 */	lbz r4, 0x1b0(r25)
/* 8004FEA0 0004CDE0  7C 60 30 30 */	slw r0, r3, r6
/* 8004FEA4 0004CDE4  7C 80 03 78 */	or r0, r4, r0
/* 8004FEA8 0004CDE8  98 19 01 B0 */	stb r0, 0x1b0(r25)
.L_8004FEAC:
/* 8004FEAC 0004CDEC  38 E7 00 01 */	addi r7, r7, 1
.L_8004FEB0:
/* 8004FEB0 0004CDF0  54 E0 06 3E */	clrlwi r0, r7, 0x18
/* 8004FEB4 0004CDF4  28 00 00 08 */	cmplwi r0, 8
/* 8004FEB8 0004CDF8  41 80 FF D4 */	blt .L_8004FE8C
/* 8004FEBC 0004CDFC  38 00 00 01 */	li r0, 1
/* 8004FEC0 0004CE00  88 79 01 B0 */	lbz r3, 0x1b0(r25)
/* 8004FEC4 0004CE04  7C 00 D0 30 */	slw r0, r0, r26
/* 8004FEC8 0004CE08  7C 60 03 78 */	or r0, r3, r0
/* 8004FECC 0004CE0C  98 19 01 B0 */	stb r0, 0x1b0(r25)
.L_8004FED0:
/* 8004FED0 0004CE10  57 43 10 3A */	slwi r3, r26, 2
/* 8004FED4 0004CE14  57 40 08 3C */	slwi r0, r26, 1
/* 8004FED8 0004CE18  7C 99 1A 14 */	add r4, r25, r3
/* 8004FEDC 0004CE1C  38 A0 00 00 */	li r5, 0
/* 8004FEE0 0004CE20  3C 60 00 01 */	lis r3, 0x0000FFFF@ha
/* 8004FEE4 0004CE24  90 A4 01 8C */	stw r5, 0x18c(r4)
/* 8004FEE8 0004CE28  38 83 FF FF */	addi r4, r3, 0x0000FFFF@l
/* 8004FEEC 0004CE2C  7C 79 02 14 */	add r3, r25, r0
/* 8004FEF0 0004CE30  B0 83 00 04 */	sth r4, 4(r3)
/* 8004FEF4 0004CE34  38 60 00 01 */	li r3, 1
.L_8004FEF8:
/* 8004FEF8 0004CE38  BB 21 00 14 */	lmw r25, 0x14(r1)
/* 8004FEFC 0004CE3C  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8004FF00 0004CE40  7C 08 03 A6 */	mtlr r0
/* 8004FF04 0004CE44  38 21 00 30 */	addi r1, r1, 0x30
/* 8004FF08 0004CE48  4E 80 00 20 */	blr 
.endfn insertTexture__13J2DTevBlock16FUlPC7ResTIMGP10JUTPalette

.fn insertTexture__13J2DTevBlock16FUlP10JUTTexture, global
/* 8004FF0C 0004CE4C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8004FF10 0004CE50  7C 08 02 A6 */	mflr r0
/* 8004FF14 0004CE54  90 01 00 24 */	stw r0, 0x24(r1)
/* 8004FF18 0004CE58  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8004FF1C 0004CE5C  7C BF 2B 78 */	mr r31, r5
/* 8004FF20 0004CE60  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8004FF24 0004CE64  7C 9E 23 78 */	mr r30, r4
/* 8004FF28 0004CE68  28 1E 00 08 */	cmplwi r30, 8
/* 8004FF2C 0004CE6C  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8004FF30 0004CE70  7C 7D 1B 78 */	mr r29, r3
/* 8004FF34 0004CE74  40 80 00 0C */	bge .L_8004FF40
/* 8004FF38 0004CE78  28 1F 00 00 */	cmplwi r31, 0
/* 8004FF3C 0004CE7C  40 82 00 0C */	bne .L_8004FF48
.L_8004FF40:
/* 8004FF40 0004CE80  38 60 00 00 */	li r3, 0
/* 8004FF44 0004CE84  48 00 01 44 */	b .L_80050088
.L_8004FF48:
/* 8004FF48 0004CE88  38 80 00 00 */	li r4, 0
/* 8004FF4C 0004CE8C  48 00 00 28 */	b .L_8004FF74
.L_8004FF50:
/* 8004FF50 0004CE90  54 83 15 BA */	rlwinm r3, r4, 2, 0x16, 0x1d
/* 8004FF54 0004CE94  38 03 01 6C */	addi r0, r3, 0x16c
/* 8004FF58 0004CE98  7C 7D 00 2E */	lwzx r3, r29, r0
/* 8004FF5C 0004CE9C  28 03 00 00 */	cmplwi r3, 0
/* 8004FF60 0004CEA0  41 82 00 20 */	beq .L_8004FF80
/* 8004FF64 0004CEA4  80 03 00 20 */	lwz r0, 0x20(r3)
/* 8004FF68 0004CEA8  28 00 00 00 */	cmplwi r0, 0
/* 8004FF6C 0004CEAC  41 82 00 14 */	beq .L_8004FF80
/* 8004FF70 0004CEB0  38 84 00 01 */	addi r4, r4, 1
.L_8004FF74:
/* 8004FF74 0004CEB4  54 80 06 3E */	clrlwi r0, r4, 0x18
/* 8004FF78 0004CEB8  28 00 00 08 */	cmplwi r0, 8
/* 8004FF7C 0004CEBC  41 80 FF D4 */	blt .L_8004FF50
.L_8004FF80:
/* 8004FF80 0004CEC0  54 80 06 3E */	clrlwi r0, r4, 0x18
/* 8004FF84 0004CEC4  7C 00 F0 40 */	cmplw r0, r30
/* 8004FF88 0004CEC8  40 80 00 0C */	bge .L_8004FF94
/* 8004FF8C 0004CECC  38 60 00 00 */	li r3, 0
/* 8004FF90 0004CED0  48 00 00 F8 */	b .L_80050088
.L_8004FF94:
/* 8004FF94 0004CED4  28 00 00 08 */	cmplwi r0, 8
/* 8004FF98 0004CED8  40 82 00 0C */	bne .L_8004FFA4
/* 8004FF9C 0004CEDC  38 60 00 00 */	li r3, 0
/* 8004FFA0 0004CEE0  48 00 00 E8 */	b .L_80050088
.L_8004FFA4:
/* 8004FFA4 0004CEE4  80 7D 01 88 */	lwz r3, 0x188(r29)
/* 8004FFA8 0004CEE8  28 03 00 00 */	cmplwi r3, 0
/* 8004FFAC 0004CEEC  41 82 00 30 */	beq .L_8004FFDC
/* 8004FFB0 0004CEF0  80 03 00 20 */	lwz r0, 0x20(r3)
/* 8004FFB4 0004CEF4  28 00 00 00 */	cmplwi r0, 0
/* 8004FFB8 0004CEF8  40 82 00 24 */	bne .L_8004FFDC
/* 8004FFBC 0004CEFC  88 1D 01 B0 */	lbz r0, 0x1b0(r29)
/* 8004FFC0 0004CF00  54 00 06 31 */	rlwinm. r0, r0, 0, 0x18, 0x18
/* 8004FFC4 0004CF04  41 82 00 0C */	beq .L_8004FFD0
/* 8004FFC8 0004CF08  38 80 00 01 */	li r4, 1
/* 8004FFCC 0004CF0C  4B FE 30 45 */	bl __dt__10JUTTextureFv
.L_8004FFD0:
/* 8004FFD0 0004CF10  88 1D 01 B0 */	lbz r0, 0x1b0(r29)
/* 8004FFD4 0004CF14  54 00 06 7E */	clrlwi r0, r0, 0x19
/* 8004FFD8 0004CF18  98 1D 01 B0 */	stb r0, 0x1b0(r29)
.L_8004FFDC:
/* 8004FFDC 0004CF1C  39 00 00 07 */	li r8, 7
/* 8004FFE0 0004CF20  48 00 00 40 */	b .L_80050020
.L_8004FFE4:
/* 8004FFE4 0004CF24  54 83 10 3A */	slwi r3, r4, 2
/* 8004FFE8 0004CF28  55 00 15 BA */	rlwinm r0, r8, 2, 0x16, 0x1d
/* 8004FFEC 0004CF2C  7C DD 1A 14 */	add r6, r29, r3
/* 8004FFF0 0004CF30  54 84 08 3C */	slwi r4, r4, 1
/* 8004FFF4 0004CF34  80 A6 01 68 */	lwz r5, 0x168(r6)
/* 8004FFF8 0004CF38  7C FD 02 14 */	add r7, r29, r0
/* 8004FFFC 0004CF3C  55 03 0D FC */	rlwinm r3, r8, 1, 0x17, 0x1e
/* 80050000 0004CF40  38 84 00 02 */	addi r4, r4, 2
/* 80050004 0004CF44  90 A7 01 6C */	stw r5, 0x16c(r7)
/* 80050008 0004CF48  38 03 00 04 */	addi r0, r3, 4
/* 8005000C 0004CF4C  39 08 FF FF */	addi r8, r8, -1
/* 80050010 0004CF50  80 66 01 88 */	lwz r3, 0x188(r6)
/* 80050014 0004CF54  90 67 01 8C */	stw r3, 0x18c(r7)
/* 80050018 0004CF58  7C 7D 22 2E */	lhzx r3, r29, r4
/* 8005001C 0004CF5C  7C 7D 03 2E */	sthx r3, r29, r0
.L_80050020:
/* 80050020 0004CF60  55 04 06 3E */	clrlwi r4, r8, 0x18
/* 80050024 0004CF64  7C 04 F0 40 */	cmplw r4, r30
/* 80050028 0004CF68  41 81 FF BC */	bgt .L_8004FFE4
/* 8005002C 0004CF6C  57 C3 10 3A */	slwi r3, r30, 2
/* 80050030 0004CF70  57 C0 08 3C */	slwi r0, r30, 1
/* 80050034 0004CF74  7C BD 1A 14 */	add r5, r29, r3
/* 80050038 0004CF78  3C 60 00 01 */	lis r3, 0x0000FFFF@ha
/* 8005003C 0004CF7C  93 E5 01 6C */	stw r31, 0x16c(r5)
/* 80050040 0004CF80  38 80 00 00 */	li r4, 0
/* 80050044 0004CF84  38 E3 FF FF */	addi r7, r3, 0x0000FFFF@l
/* 80050048 0004CF88  7C DD 02 14 */	add r6, r29, r0
/* 8005004C 0004CF8C  90 85 01 8C */	stw r4, 0x18c(r5)
/* 80050050 0004CF90  7F A3 EB 78 */	mr r3, r29
/* 80050054 0004CF94  57 C4 06 3E */	clrlwi r4, r30, 0x18
/* 80050058 0004CF98  38 A0 00 01 */	li r5, 1
/* 8005005C 0004CF9C  B0 E6 00 04 */	sth r7, 4(r6)
/* 80050060 0004CFA0  81 9D 00 00 */	lwz r12, 0(r29)
/* 80050064 0004CFA4  81 8C 00 AC */	lwz r12, 0xac(r12)
/* 80050068 0004CFA8  7D 89 03 A6 */	mtctr r12
/* 8005006C 0004CFAC  4E 80 04 21 */	bctrl 
/* 80050070 0004CFB0  38 00 00 01 */	li r0, 1
/* 80050074 0004CFB4  88 9D 01 B0 */	lbz r4, 0x1b0(r29)
/* 80050078 0004CFB8  7C 00 F0 30 */	slw r0, r0, r30
/* 8005007C 0004CFBC  38 60 00 01 */	li r3, 1
/* 80050080 0004CFC0  7C 80 00 78 */	andc r0, r4, r0
/* 80050084 0004CFC4  98 1D 01 B0 */	stb r0, 0x1b0(r29)
.L_80050088:
/* 80050088 0004CFC8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8005008C 0004CFCC  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80050090 0004CFD0  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80050094 0004CFD4  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80050098 0004CFD8  7C 08 03 A6 */	mtlr r0
/* 8005009C 0004CFDC  38 21 00 20 */	addi r1, r1, 0x20
/* 800500A0 0004CFE0  4E 80 00 20 */	blr 
.endfn insertTexture__13J2DTevBlock16FUlP10JUTTexture

.fn setTexture__13J2DTevBlock16FUlPC7ResTIMG, global
/* 800500A4 0004CFE4  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 800500A8 0004CFE8  7C 08 02 A6 */	mflr r0
/* 800500AC 0004CFEC  90 01 00 34 */	stw r0, 0x34(r1)
/* 800500B0 0004CFF0  BF 21 00 14 */	stmw r25, 0x14(r1)
/* 800500B4 0004CFF4  7C 9A 23 78 */	mr r26, r4
/* 800500B8 0004CFF8  28 1A 00 08 */	cmplwi r26, 8
/* 800500BC 0004CFFC  7C 79 1B 78 */	mr r25, r3
/* 800500C0 0004D000  7C BB 2B 78 */	mr r27, r5
/* 800500C4 0004D004  41 80 00 0C */	blt .L_800500D0
/* 800500C8 0004D008  38 60 00 00 */	li r3, 0
/* 800500CC 0004D00C  48 00 02 A8 */	b .L_80050374
.L_800500D0:
/* 800500D0 0004D010  28 1B 00 00 */	cmplwi r27, 0
/* 800500D4 0004D014  3B 80 00 00 */	li r28, 0
/* 800500D8 0004D018  41 82 01 2C */	beq .L_80050204
/* 800500DC 0004D01C  88 1B 00 08 */	lbz r0, 8(r27)
/* 800500E0 0004D020  28 00 00 00 */	cmplwi r0, 0
/* 800500E4 0004D024  41 82 01 20 */	beq .L_80050204
/* 800500E8 0004D028  38 00 00 04 */	li r0, 4
/* 800500EC 0004D02C  7F 24 CB 78 */	mr r4, r25
/* 800500F0 0004D030  38 C0 00 00 */	li r6, 0
/* 800500F4 0004D034  38 E0 00 00 */	li r7, 0
/* 800500F8 0004D038  7C 09 03 A6 */	mtctr r0
.L_800500FC:
/* 800500FC 0004D03C  7C 07 D0 40 */	cmplw r7, r26
/* 80050100 0004D040  41 82 00 5C */	beq .L_8005015C
/* 80050104 0004D044  80 A4 01 6C */	lwz r5, 0x16c(r4)
/* 80050108 0004D048  28 05 00 00 */	cmplwi r5, 0
/* 8005010C 0004D04C  41 82 00 50 */	beq .L_8005015C
/* 80050110 0004D050  80 65 00 20 */	lwz r3, 0x20(r5)
/* 80050114 0004D054  28 03 00 00 */	cmplwi r3, 0
/* 80050118 0004D058  41 82 00 44 */	beq .L_8005015C
/* 8005011C 0004D05C  88 03 00 08 */	lbz r0, 8(r3)
/* 80050120 0004D060  28 00 00 00 */	cmplwi r0, 0
/* 80050124 0004D064  41 82 00 38 */	beq .L_8005015C
/* 80050128 0004D068  88 65 00 3A */	lbz r3, 0x3a(r5)
/* 8005012C 0004D06C  38 00 00 00 */	li r0, 0
/* 80050130 0004D070  2C 03 00 10 */	cmpwi r3, 0x10
/* 80050134 0004D074  41 80 00 08 */	blt .L_8005013C
/* 80050138 0004D078  38 00 00 10 */	li r0, 0x10
.L_8005013C:
/* 8005013C 0004D07C  7C 00 18 50 */	subf r0, r0, r3
/* 80050140 0004D080  54 03 06 3E */	clrlwi r3, r0, 0x18
/* 80050144 0004D084  28 03 00 08 */	cmplwi r3, 8
/* 80050148 0004D088  40 80 00 14 */	bge .L_8005015C
/* 8005014C 0004D08C  38 00 00 01 */	li r0, 1
/* 80050150 0004D090  7C 00 18 30 */	slw r0, r0, r3
/* 80050154 0004D094  7C C0 03 78 */	or r0, r6, r0
/* 80050158 0004D098  54 06 06 3E */	clrlwi r6, r0, 0x18
.L_8005015C:
/* 8005015C 0004D09C  38 E7 00 01 */	addi r7, r7, 1
/* 80050160 0004D0A0  7C 07 D0 40 */	cmplw r7, r26
/* 80050164 0004D0A4  41 82 00 5C */	beq .L_800501C0
/* 80050168 0004D0A8  80 A4 01 70 */	lwz r5, 0x170(r4)
/* 8005016C 0004D0AC  28 05 00 00 */	cmplwi r5, 0
/* 80050170 0004D0B0  41 82 00 50 */	beq .L_800501C0
/* 80050174 0004D0B4  80 65 00 20 */	lwz r3, 0x20(r5)
/* 80050178 0004D0B8  28 03 00 00 */	cmplwi r3, 0
/* 8005017C 0004D0BC  41 82 00 44 */	beq .L_800501C0
/* 80050180 0004D0C0  88 03 00 08 */	lbz r0, 8(r3)
/* 80050184 0004D0C4  28 00 00 00 */	cmplwi r0, 0
/* 80050188 0004D0C8  41 82 00 38 */	beq .L_800501C0
/* 8005018C 0004D0CC  88 65 00 3A */	lbz r3, 0x3a(r5)
/* 80050190 0004D0D0  38 00 00 00 */	li r0, 0
/* 80050194 0004D0D4  2C 03 00 10 */	cmpwi r3, 0x10
/* 80050198 0004D0D8  41 80 00 08 */	blt .L_800501A0
/* 8005019C 0004D0DC  38 00 00 10 */	li r0, 0x10
.L_800501A0:
/* 800501A0 0004D0E0  7C 00 18 50 */	subf r0, r0, r3
/* 800501A4 0004D0E4  54 03 06 3E */	clrlwi r3, r0, 0x18
/* 800501A8 0004D0E8  28 03 00 08 */	cmplwi r3, 8
/* 800501AC 0004D0EC  40 80 00 14 */	bge .L_800501C0
/* 800501B0 0004D0F0  38 00 00 01 */	li r0, 1
/* 800501B4 0004D0F4  7C 00 18 30 */	slw r0, r0, r3
/* 800501B8 0004D0F8  7C C0 03 78 */	or r0, r6, r0
/* 800501BC 0004D0FC  54 06 06 3E */	clrlwi r6, r0, 0x18
.L_800501C0:
/* 800501C0 0004D100  38 84 00 08 */	addi r4, r4, 8
/* 800501C4 0004D104  38 E7 00 01 */	addi r7, r7, 1
/* 800501C8 0004D108  42 00 FF 34 */	bdnz .L_800500FC
/* 800501CC 0004D10C  54 C4 06 3E */	clrlwi r4, r6, 0x18
/* 800501D0 0004D110  38 A0 00 00 */	li r5, 0
/* 800501D4 0004D114  38 60 00 01 */	li r3, 1
/* 800501D8 0004D118  48 00 00 20 */	b .L_800501F8
.L_800501DC:
/* 800501DC 0004D11C  54 A0 06 3E */	clrlwi r0, r5, 0x18
/* 800501E0 0004D120  7C 60 00 30 */	slw r0, r3, r0
/* 800501E4 0004D124  7C 80 00 39 */	and. r0, r4, r0
/* 800501E8 0004D128  40 82 00 0C */	bne .L_800501F4
/* 800501EC 0004D12C  7C BC 2B 78 */	mr r28, r5
/* 800501F0 0004D130  48 00 00 14 */	b .L_80050204
.L_800501F4:
/* 800501F4 0004D134  38 A5 00 01 */	addi r5, r5, 1
.L_800501F8:
/* 800501F8 0004D138  54 A0 06 3E */	clrlwi r0, r5, 0x18
/* 800501FC 0004D13C  28 00 00 04 */	cmplwi r0, 4
/* 80050200 0004D140  41 80 FF DC */	blt .L_800501DC
.L_80050204:
/* 80050204 0004D144  57 5D 10 3A */	slwi r29, r26, 2
/* 80050208 0004D148  7F F9 EA 14 */	add r31, r25, r29
/* 8005020C 0004D14C  80 7F 01 6C */	lwz r3, 0x16c(r31)
/* 80050210 0004D150  28 03 00 00 */	cmplwi r3, 0
/* 80050214 0004D154  40 82 00 84 */	bne .L_80050298
/* 80050218 0004D158  28 1B 00 00 */	cmplwi r27, 0
/* 8005021C 0004D15C  41 82 00 64 */	beq .L_80050280
/* 80050220 0004D160  38 60 00 40 */	li r3, 0x40
/* 80050224 0004D164  4B FD 3C 81 */	bl __nw__FUl
/* 80050228 0004D168  7C 7E 1B 79 */	or. r30, r3, r3
/* 8005022C 0004D16C  41 82 00 24 */	beq .L_80050250
/* 80050230 0004D170  38 00 00 00 */	li r0, 0
/* 80050234 0004D174  7F 64 DB 78 */	mr r4, r27
/* 80050238 0004D178  90 1E 00 28 */	stw r0, 0x28(r30)
/* 8005023C 0004D17C  7F 85 E3 78 */	mr r5, r28
/* 80050240 0004D180  4B FE 2E 45 */	bl storeTIMG__10JUTTextureFPC7ResTIMGUc
/* 80050244 0004D184  88 1E 00 3B */	lbz r0, 0x3b(r30)
/* 80050248 0004D188  54 00 07 BC */	rlwinm r0, r0, 0, 0x1e, 0x1e
/* 8005024C 0004D18C  98 1E 00 3B */	stb r0, 0x3b(r30)
.L_80050250:
/* 80050250 0004D190  93 DF 01 6C */	stw r30, 0x16c(r31)
/* 80050254 0004D194  80 1F 01 6C */	lwz r0, 0x16c(r31)
/* 80050258 0004D198  28 00 00 00 */	cmplwi r0, 0
/* 8005025C 0004D19C  40 82 00 0C */	bne .L_80050268
/* 80050260 0004D1A0  38 60 00 00 */	li r3, 0
/* 80050264 0004D1A4  48 00 01 10 */	b .L_80050374
.L_80050268:
/* 80050268 0004D1A8  38 00 00 01 */	li r0, 1
/* 8005026C 0004D1AC  88 79 01 B0 */	lbz r3, 0x1b0(r25)
/* 80050270 0004D1B0  7C 00 D0 30 */	slw r0, r0, r26
/* 80050274 0004D1B4  7C 60 03 78 */	or r0, r3, r0
/* 80050278 0004D1B8  98 19 01 B0 */	stb r0, 0x1b0(r25)
/* 8005027C 0004D1BC  48 00 00 CC */	b .L_80050348
.L_80050280:
/* 80050280 0004D1C0  38 00 00 01 */	li r0, 1
/* 80050284 0004D1C4  88 79 01 B0 */	lbz r3, 0x1b0(r25)
/* 80050288 0004D1C8  7C 00 D0 30 */	slw r0, r0, r26
/* 8005028C 0004D1CC  7C 60 00 78 */	andc r0, r3, r0
/* 80050290 0004D1D0  98 19 01 B0 */	stb r0, 0x1b0(r25)
/* 80050294 0004D1D4  48 00 00 B4 */	b .L_80050348
.L_80050298:
/* 80050298 0004D1D8  38 00 00 01 */	li r0, 1
/* 8005029C 0004D1DC  88 99 01 B0 */	lbz r4, 0x1b0(r25)
/* 800502A0 0004D1E0  7C 1E D0 30 */	slw r30, r0, r26
/* 800502A4 0004D1E4  7C 80 F0 39 */	and. r0, r4, r30
/* 800502A8 0004D1E8  41 82 00 3C */	beq .L_800502E4
/* 800502AC 0004D1EC  28 1B 00 00 */	cmplwi r27, 0
/* 800502B0 0004D1F0  41 82 00 14 */	beq .L_800502C4
/* 800502B4 0004D1F4  7F 64 DB 78 */	mr r4, r27
/* 800502B8 0004D1F8  7F 85 E3 78 */	mr r5, r28
/* 800502BC 0004D1FC  4B FE 2D C9 */	bl storeTIMG__10JUTTextureFPC7ResTIMGUc
/* 800502C0 0004D200  48 00 00 88 */	b .L_80050348
.L_800502C4:
/* 800502C4 0004D204  38 80 00 01 */	li r4, 1
/* 800502C8 0004D208  4B FE 2D 49 */	bl __dt__10JUTTextureFv
/* 800502CC 0004D20C  38 00 00 00 */	li r0, 0
/* 800502D0 0004D210  90 1F 01 6C */	stw r0, 0x16c(r31)
/* 800502D4 0004D214  88 19 01 B0 */	lbz r0, 0x1b0(r25)
/* 800502D8 0004D218  7C 00 F0 78 */	andc r0, r0, r30
/* 800502DC 0004D21C  98 19 01 B0 */	stb r0, 0x1b0(r25)
/* 800502E0 0004D220  48 00 00 68 */	b .L_80050348
.L_800502E4:
/* 800502E4 0004D224  38 00 00 00 */	li r0, 0
/* 800502E8 0004D228  28 1B 00 00 */	cmplwi r27, 0
/* 800502EC 0004D22C  90 1F 01 6C */	stw r0, 0x16c(r31)
/* 800502F0 0004D230  41 82 00 58 */	beq .L_80050348
/* 800502F4 0004D234  38 60 00 40 */	li r3, 0x40
/* 800502F8 0004D238  4B FD 3B AD */	bl __nw__FUl
/* 800502FC 0004D23C  7C 7C 1B 79 */	or. r28, r3, r3
/* 80050300 0004D240  41 82 00 24 */	beq .L_80050324
/* 80050304 0004D244  38 00 00 00 */	li r0, 0
/* 80050308 0004D248  7F 64 DB 78 */	mr r4, r27
/* 8005030C 0004D24C  90 1C 00 28 */	stw r0, 0x28(r28)
/* 80050310 0004D250  38 A0 00 00 */	li r5, 0
/* 80050314 0004D254  4B FE 2D 71 */	bl storeTIMG__10JUTTextureFPC7ResTIMGUc
/* 80050318 0004D258  88 1C 00 3B */	lbz r0, 0x3b(r28)
/* 8005031C 0004D25C  54 00 07 BC */	rlwinm r0, r0, 0, 0x1e, 0x1e
/* 80050320 0004D260  98 1C 00 3B */	stb r0, 0x3b(r28)
.L_80050324:
/* 80050324 0004D264  93 9F 01 6C */	stw r28, 0x16c(r31)
/* 80050328 0004D268  80 1F 01 6C */	lwz r0, 0x16c(r31)
/* 8005032C 0004D26C  28 00 00 00 */	cmplwi r0, 0
/* 80050330 0004D270  40 82 00 0C */	bne .L_8005033C
/* 80050334 0004D274  38 60 00 00 */	li r3, 0
/* 80050338 0004D278  48 00 00 3C */	b .L_80050374
.L_8005033C:
/* 8005033C 0004D27C  88 19 01 B0 */	lbz r0, 0x1b0(r25)
/* 80050340 0004D280  7C 00 F3 78 */	or r0, r0, r30
/* 80050344 0004D284  98 19 01 B0 */	stb r0, 0x1b0(r25)
.L_80050348:
/* 80050348 0004D288  7F 79 EA 14 */	add r27, r25, r29
/* 8005034C 0004D28C  80 7B 01 8C */	lwz r3, 0x18c(r27)
/* 80050350 0004D290  4B FD 3D 65 */	bl __dl__FPv
/* 80050354 0004D294  38 80 00 00 */	li r4, 0
/* 80050358 0004D298  57 40 08 3C */	slwi r0, r26, 1
/* 8005035C 0004D29C  3C 60 00 01 */	lis r3, 0x0000FFFF@ha
/* 80050360 0004D2A0  90 9B 01 8C */	stw r4, 0x18c(r27)
/* 80050364 0004D2A4  38 83 FF FF */	addi r4, r3, 0x0000FFFF@l
/* 80050368 0004D2A8  7C 79 02 14 */	add r3, r25, r0
/* 8005036C 0004D2AC  B0 83 00 04 */	sth r4, 4(r3)
/* 80050370 0004D2B0  38 60 00 01 */	li r3, 1
.L_80050374:
/* 80050374 0004D2B4  BB 21 00 14 */	lmw r25, 0x14(r1)
/* 80050378 0004D2B8  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8005037C 0004D2BC  7C 08 03 A6 */	mtlr r0
/* 80050380 0004D2C0  38 21 00 30 */	addi r1, r1, 0x30
/* 80050384 0004D2C4  4E 80 00 20 */	blr 
.endfn setTexture__13J2DTevBlock16FUlPC7ResTIMG

.fn setTexture__13J2DTevBlock16FUlP10JUTTexture, global
/* 80050388 0004D2C8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8005038C 0004D2CC  7C 08 02 A6 */	mflr r0
/* 80050390 0004D2D0  90 01 00 24 */	stw r0, 0x24(r1)
/* 80050394 0004D2D4  BF 61 00 0C */	stmw r27, 0xc(r1)
/* 80050398 0004D2D8  7C 9C 23 78 */	mr r28, r4
/* 8005039C 0004D2DC  28 1C 00 08 */	cmplwi r28, 8
/* 800503A0 0004D2E0  7C 7B 1B 78 */	mr r27, r3
/* 800503A4 0004D2E4  7C BD 2B 78 */	mr r29, r5
/* 800503A8 0004D2E8  41 80 00 0C */	blt .L_800503B4
/* 800503AC 0004D2EC  38 60 00 00 */	li r3, 0
/* 800503B0 0004D2F0  48 00 00 6C */	b .L_8005041C
.L_800503B4:
/* 800503B4 0004D2F4  38 00 00 01 */	li r0, 1
/* 800503B8 0004D2F8  88 7B 01 B0 */	lbz r3, 0x1b0(r27)
/* 800503BC 0004D2FC  7C 1E E0 30 */	slw r30, r0, r28
/* 800503C0 0004D300  7C 60 F0 39 */	and. r0, r3, r30
/* 800503C4 0004D304  41 82 00 18 */	beq .L_800503DC
/* 800503C8 0004D308  57 80 10 3A */	slwi r0, r28, 2
/* 800503CC 0004D30C  38 80 00 01 */	li r4, 1
/* 800503D0 0004D310  7C 7B 02 14 */	add r3, r27, r0
/* 800503D4 0004D314  80 63 01 6C */	lwz r3, 0x16c(r3)
/* 800503D8 0004D318  4B FE 2C 39 */	bl __dt__10JUTTextureFv
.L_800503DC:
/* 800503DC 0004D31C  57 80 10 3A */	slwi r0, r28, 2
/* 800503E0 0004D320  7F FB 02 14 */	add r31, r27, r0
/* 800503E4 0004D324  93 BF 01 6C */	stw r29, 0x16c(r31)
/* 800503E8 0004D328  88 1B 01 B0 */	lbz r0, 0x1b0(r27)
/* 800503EC 0004D32C  7C 00 F0 78 */	andc r0, r0, r30
/* 800503F0 0004D330  98 1B 01 B0 */	stb r0, 0x1b0(r27)
/* 800503F4 0004D334  80 7F 01 8C */	lwz r3, 0x18c(r31)
/* 800503F8 0004D338  4B FD 3C BD */	bl __dl__FPv
/* 800503FC 0004D33C  38 80 00 00 */	li r4, 0
/* 80050400 0004D340  57 80 08 3C */	slwi r0, r28, 1
/* 80050404 0004D344  3C 60 00 01 */	lis r3, 0x0000FFFF@ha
/* 80050408 0004D348  90 9F 01 8C */	stw r4, 0x18c(r31)
/* 8005040C 0004D34C  38 83 FF FF */	addi r4, r3, 0x0000FFFF@l
/* 80050410 0004D350  7C 7B 02 14 */	add r3, r27, r0
/* 80050414 0004D354  B0 83 00 04 */	sth r4, 4(r3)
/* 80050418 0004D358  38 60 00 01 */	li r3, 1
.L_8005041C:
/* 8005041C 0004D35C  BB 61 00 0C */	lmw r27, 0xc(r1)
/* 80050420 0004D360  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80050424 0004D364  7C 08 03 A6 */	mtlr r0
/* 80050428 0004D368  38 21 00 20 */	addi r1, r1, 0x20
/* 8005042C 0004D36C  4E 80 00 20 */	blr 
.endfn setTexture__13J2DTevBlock16FUlP10JUTTexture

.fn removeTexture__13J2DTevBlock16FUl, global
/* 80050430 0004D370  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80050434 0004D374  7C 08 02 A6 */	mflr r0
/* 80050438 0004D378  90 01 00 24 */	stw r0, 0x24(r1)
/* 8005043C 0004D37C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80050440 0004D380  7C 9F 23 78 */	mr r31, r4
/* 80050444 0004D384  28 1F 00 08 */	cmplwi r31, 8
/* 80050448 0004D388  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8005044C 0004D38C  7C 7E 1B 78 */	mr r30, r3
/* 80050450 0004D390  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80050454 0004D394  41 80 00 0C */	blt .L_80050460
/* 80050458 0004D398  38 60 00 00 */	li r3, 0
/* 8005045C 0004D39C  48 00 01 C8 */	b .L_80050624
.L_80050460:
/* 80050460 0004D3A0  38 00 00 01 */	li r0, 1
/* 80050464 0004D3A4  88 7E 01 B0 */	lbz r3, 0x1b0(r30)
/* 80050468 0004D3A8  7C 00 F8 30 */	slw r0, r0, r31
/* 8005046C 0004D3AC  7C 60 00 39 */	and. r0, r3, r0
/* 80050470 0004D3B0  41 82 00 18 */	beq .L_80050488
/* 80050474 0004D3B4  57 E0 10 3A */	slwi r0, r31, 2
/* 80050478 0004D3B8  38 80 00 01 */	li r4, 1
/* 8005047C 0004D3BC  7C 7E 02 14 */	add r3, r30, r0
/* 80050480 0004D3C0  80 63 01 6C */	lwz r3, 0x16c(r3)
/* 80050484 0004D3C4  4B FE 2B 8D */	bl __dt__10JUTTextureFv
.L_80050488:
/* 80050488 0004D3C8  57 FD 10 3A */	slwi r29, r31, 2
/* 8005048C 0004D3CC  7C 7E EA 14 */	add r3, r30, r29
/* 80050490 0004D3D0  80 63 01 8C */	lwz r3, 0x18c(r3)
/* 80050494 0004D3D4  4B FD 3C 21 */	bl __dl__FPv
/* 80050498 0004D3D8  28 1F 00 07 */	cmplwi r31, 7
/* 8005049C 0004D3DC  7F E5 FB 78 */	mr r5, r31
/* 800504A0 0004D3E0  40 80 01 4C */	bge .L_800505EC
/* 800504A4 0004D3E4  20 1F 00 07 */	subfic r0, r31, 7
/* 800504A8 0004D3E8  28 00 00 08 */	cmplwi r0, 8
/* 800504AC 0004D3EC  40 81 00 FC */	ble .L_800505A8
/* 800504B0 0004D3F0  20 1F 00 06 */	subfic r0, r31, 6
/* 800504B4 0004D3F4  57 E4 08 3C */	slwi r4, r31, 1
/* 800504B8 0004D3F8  54 00 E8 FE */	srwi r0, r0, 3
/* 800504BC 0004D3FC  7C 7E EA 14 */	add r3, r30, r29
/* 800504C0 0004D400  7C 9E 22 14 */	add r4, r30, r4
/* 800504C4 0004D404  7C 09 03 A6 */	mtctr r0
/* 800504C8 0004D408  3C C0 00 00 */	lis r6, 0x-0000001@ha
/* 800504CC 0004D40C  38 C6 FF FF */	addi r6, r6, 0x-0000001@l
/* 800504D0 0004D410  7C 1F 30 40 */	cmplw r31, r6
/* 800504D4 0004D414  40 80 00 D4 */	bge .L_800505A8
.L_800504D8:
/* 800504D8 0004D418  80 03 01 70 */	lwz r0, 0x170(r3)
/* 800504DC 0004D41C  38 A5 00 08 */	addi r5, r5, 8
/* 800504E0 0004D420  90 03 01 6C */	stw r0, 0x16c(r3)
/* 800504E4 0004D424  80 03 01 90 */	lwz r0, 0x190(r3)
/* 800504E8 0004D428  90 03 01 8C */	stw r0, 0x18c(r3)
/* 800504EC 0004D42C  A0 04 00 06 */	lhz r0, 6(r4)
/* 800504F0 0004D430  B0 04 00 04 */	sth r0, 4(r4)
/* 800504F4 0004D434  80 03 01 74 */	lwz r0, 0x174(r3)
/* 800504F8 0004D438  90 03 01 70 */	stw r0, 0x170(r3)
/* 800504FC 0004D43C  80 03 01 94 */	lwz r0, 0x194(r3)
/* 80050500 0004D440  90 03 01 90 */	stw r0, 0x190(r3)
/* 80050504 0004D444  A0 04 00 08 */	lhz r0, 8(r4)
/* 80050508 0004D448  B0 04 00 06 */	sth r0, 6(r4)
/* 8005050C 0004D44C  80 03 01 78 */	lwz r0, 0x178(r3)
/* 80050510 0004D450  90 03 01 74 */	stw r0, 0x174(r3)
/* 80050514 0004D454  80 03 01 98 */	lwz r0, 0x198(r3)
/* 80050518 0004D458  90 03 01 94 */	stw r0, 0x194(r3)
/* 8005051C 0004D45C  A0 04 00 0A */	lhz r0, 0xa(r4)
/* 80050520 0004D460  B0 04 00 08 */	sth r0, 8(r4)
/* 80050524 0004D464  80 03 01 7C */	lwz r0, 0x17c(r3)
/* 80050528 0004D468  90 03 01 78 */	stw r0, 0x178(r3)
/* 8005052C 0004D46C  80 03 01 9C */	lwz r0, 0x19c(r3)
/* 80050530 0004D470  90 03 01 98 */	stw r0, 0x198(r3)
/* 80050534 0004D474  A0 04 00 0C */	lhz r0, 0xc(r4)
/* 80050538 0004D478  B0 04 00 0A */	sth r0, 0xa(r4)
/* 8005053C 0004D47C  80 03 01 80 */	lwz r0, 0x180(r3)
/* 80050540 0004D480  90 03 01 7C */	stw r0, 0x17c(r3)
/* 80050544 0004D484  80 03 01 A0 */	lwz r0, 0x1a0(r3)
/* 80050548 0004D488  90 03 01 9C */	stw r0, 0x19c(r3)
/* 8005054C 0004D48C  A0 04 00 0E */	lhz r0, 0xe(r4)
/* 80050550 0004D490  B0 04 00 0C */	sth r0, 0xc(r4)
/* 80050554 0004D494  80 03 01 84 */	lwz r0, 0x184(r3)
/* 80050558 0004D498  90 03 01 80 */	stw r0, 0x180(r3)
/* 8005055C 0004D49C  80 03 01 A4 */	lwz r0, 0x1a4(r3)
/* 80050560 0004D4A0  90 03 01 A0 */	stw r0, 0x1a0(r3)
/* 80050564 0004D4A4  A0 04 00 10 */	lhz r0, 0x10(r4)
/* 80050568 0004D4A8  B0 04 00 0E */	sth r0, 0xe(r4)
/* 8005056C 0004D4AC  80 03 01 88 */	lwz r0, 0x188(r3)
/* 80050570 0004D4B0  90 03 01 84 */	stw r0, 0x184(r3)
/* 80050574 0004D4B4  80 03 01 A8 */	lwz r0, 0x1a8(r3)
/* 80050578 0004D4B8  90 03 01 A4 */	stw r0, 0x1a4(r3)
/* 8005057C 0004D4BC  A0 04 00 12 */	lhz r0, 0x12(r4)
/* 80050580 0004D4C0  B0 04 00 10 */	sth r0, 0x10(r4)
/* 80050584 0004D4C4  80 03 01 8C */	lwz r0, 0x18c(r3)
/* 80050588 0004D4C8  90 03 01 88 */	stw r0, 0x188(r3)
/* 8005058C 0004D4CC  80 03 01 AC */	lwz r0, 0x1ac(r3)
/* 80050590 0004D4D0  90 03 01 A8 */	stw r0, 0x1a8(r3)
/* 80050594 0004D4D4  38 63 00 20 */	addi r3, r3, 0x20
/* 80050598 0004D4D8  A0 04 00 14 */	lhz r0, 0x14(r4)
/* 8005059C 0004D4DC  B0 04 00 12 */	sth r0, 0x12(r4)
/* 800505A0 0004D4E0  38 84 00 10 */	addi r4, r4, 0x10
/* 800505A4 0004D4E4  42 00 FF 34 */	bdnz .L_800504D8
.L_800505A8:
/* 800505A8 0004D4E8  54 A4 10 3A */	slwi r4, r5, 2
/* 800505AC 0004D4EC  54 A3 08 3C */	slwi r3, r5, 1
/* 800505B0 0004D4F0  20 05 00 07 */	subfic r0, r5, 7
/* 800505B4 0004D4F4  7C 9E 22 14 */	add r4, r30, r4
/* 800505B8 0004D4F8  7C 7E 1A 14 */	add r3, r30, r3
/* 800505BC 0004D4FC  7C 09 03 A6 */	mtctr r0
/* 800505C0 0004D500  28 05 00 07 */	cmplwi r5, 7
/* 800505C4 0004D504  40 80 00 28 */	bge .L_800505EC
.L_800505C8:
/* 800505C8 0004D508  80 04 01 70 */	lwz r0, 0x170(r4)
/* 800505CC 0004D50C  90 04 01 6C */	stw r0, 0x16c(r4)
/* 800505D0 0004D510  80 04 01 90 */	lwz r0, 0x190(r4)
/* 800505D4 0004D514  90 04 01 8C */	stw r0, 0x18c(r4)
/* 800505D8 0004D518  38 84 00 04 */	addi r4, r4, 4
/* 800505DC 0004D51C  A0 03 00 06 */	lhz r0, 6(r3)
/* 800505E0 0004D520  B0 03 00 04 */	sth r0, 4(r3)
/* 800505E4 0004D524  38 63 00 02 */	addi r3, r3, 2
/* 800505E8 0004D528  42 00 FF E0 */	bdnz .L_800505C8
.L_800505EC:
/* 800505EC 0004D52C  38 A0 00 00 */	li r5, 0
/* 800505F0 0004D530  3C 60 00 01 */	lis r3, 0x0000FFFF@ha
/* 800505F4 0004D534  90 BE 01 88 */	stw r5, 0x188(r30)
/* 800505F8 0004D538  38 03 FF FF */	addi r0, r3, 0x0000FFFF@l
/* 800505FC 0004D53C  7F C3 F3 78 */	mr r3, r30
/* 80050600 0004D540  57 E4 06 3E */	clrlwi r4, r31, 0x18
/* 80050604 0004D544  90 BE 01 A8 */	stw r5, 0x1a8(r30)
/* 80050608 0004D548  38 A0 00 00 */	li r5, 0
/* 8005060C 0004D54C  B0 1E 00 12 */	sth r0, 0x12(r30)
/* 80050610 0004D550  81 9E 00 00 */	lwz r12, 0(r30)
/* 80050614 0004D554  81 8C 00 AC */	lwz r12, 0xac(r12)
/* 80050618 0004D558  7D 89 03 A6 */	mtctr r12
/* 8005061C 0004D55C  4E 80 04 21 */	bctrl 
/* 80050620 0004D560  38 60 00 01 */	li r3, 1
.L_80050624:
/* 80050624 0004D564  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80050628 0004D568  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8005062C 0004D56C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80050630 0004D570  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80050634 0004D574  7C 08 03 A6 */	mtlr r0
/* 80050638 0004D578  38 21 00 20 */	addi r1, r1, 0x20
/* 8005063C 0004D57C  4E 80 00 20 */	blr 
.endfn removeTexture__13J2DTevBlock16FUl

.fn setFont__13J2DTevBlock16FP7ResFONT, global
/* 80050640 0004D580  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80050644 0004D584  7C 08 02 A6 */	mflr r0
/* 80050648 0004D588  90 01 00 24 */	stw r0, 0x24(r1)
/* 8005064C 0004D58C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80050650 0004D590  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80050654 0004D594  7C 9E 23 79 */	or. r30, r4, r4
/* 80050658 0004D598  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8005065C 0004D59C  7C 7D 1B 78 */	mr r29, r3
/* 80050660 0004D5A0  40 82 00 0C */	bne .L_8005066C
/* 80050664 0004D5A4  38 60 00 00 */	li r3, 0
/* 80050668 0004D5A8  48 00 00 70 */	b .L_800506D8
.L_8005066C:
/* 8005066C 0004D5AC  38 60 00 70 */	li r3, 0x70
/* 80050670 0004D5B0  4B FD 38 35 */	bl __nw__FUl
/* 80050674 0004D5B4  7C 7F 1B 79 */	or. r31, r3, r3
/* 80050678 0004D5B8  41 82 00 14 */	beq .L_8005068C
/* 8005067C 0004D5BC  7F C4 F3 78 */	mr r4, r30
/* 80050680 0004D5C0  38 A0 00 00 */	li r5, 0
/* 80050684 0004D5C4  4B FE 0B 49 */	bl __ct__10JUTResFontFPC7ResFONTP7JKRHeap
/* 80050688 0004D5C8  7C 7F 1B 78 */	mr r31, r3
.L_8005068C:
/* 8005068C 0004D5CC  28 1F 00 00 */	cmplwi r31, 0
/* 80050690 0004D5D0  40 82 00 0C */	bne .L_8005069C
/* 80050694 0004D5D4  38 60 00 00 */	li r3, 0
/* 80050698 0004D5D8  48 00 00 40 */	b .L_800506D8
.L_8005069C:
/* 8005069C 0004D5DC  88 1D 01 B1 */	lbz r0, 0x1b1(r29)
/* 800506A0 0004D5E0  28 00 00 00 */	cmplwi r0, 0
/* 800506A4 0004D5E4  41 82 00 24 */	beq .L_800506C8
/* 800506A8 0004D5E8  80 7D 01 AC */	lwz r3, 0x1ac(r29)
/* 800506AC 0004D5EC  28 03 00 00 */	cmplwi r3, 0
/* 800506B0 0004D5F0  41 82 00 18 */	beq .L_800506C8
/* 800506B4 0004D5F4  81 83 00 00 */	lwz r12, 0(r3)
/* 800506B8 0004D5F8  38 80 00 01 */	li r4, 1
/* 800506BC 0004D5FC  81 8C 00 08 */	lwz r12, 8(r12)
/* 800506C0 0004D600  7D 89 03 A6 */	mtctr r12
/* 800506C4 0004D604  4E 80 04 21 */	bctrl 
.L_800506C8:
/* 800506C8 0004D608  93 FD 01 AC */	stw r31, 0x1ac(r29)
/* 800506CC 0004D60C  38 00 00 01 */	li r0, 1
/* 800506D0 0004D610  38 60 00 01 */	li r3, 1
/* 800506D4 0004D614  98 1D 01 B1 */	stb r0, 0x1b1(r29)
.L_800506D8:
/* 800506D8 0004D618  80 01 00 24 */	lwz r0, 0x24(r1)
/* 800506DC 0004D61C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 800506E0 0004D620  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 800506E4 0004D624  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 800506E8 0004D628  7C 08 03 A6 */	mtlr r0
/* 800506EC 0004D62C  38 21 00 20 */	addi r1, r1, 0x20
/* 800506F0 0004D630  4E 80 00 20 */	blr 
.endfn setFont__13J2DTevBlock16FP7ResFONT

.fn setFont__13J2DTevBlock16FP7JUTFont, global
/* 800506F4 0004D634  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800506F8 0004D638  7C 08 02 A6 */	mflr r0
/* 800506FC 0004D63C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80050700 0004D640  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80050704 0004D644  7C 9F 23 79 */	or. r31, r4, r4
/* 80050708 0004D648  93 C1 00 08 */	stw r30, 8(r1)
/* 8005070C 0004D64C  7C 7E 1B 78 */	mr r30, r3
/* 80050710 0004D650  40 82 00 0C */	bne .L_8005071C
/* 80050714 0004D654  38 60 00 00 */	li r3, 0
/* 80050718 0004D658  48 00 00 40 */	b .L_80050758
.L_8005071C:
/* 8005071C 0004D65C  88 1E 01 B1 */	lbz r0, 0x1b1(r30)
/* 80050720 0004D660  28 00 00 00 */	cmplwi r0, 0
/* 80050724 0004D664  41 82 00 24 */	beq .L_80050748
/* 80050728 0004D668  80 7E 01 AC */	lwz r3, 0x1ac(r30)
/* 8005072C 0004D66C  28 03 00 00 */	cmplwi r3, 0
/* 80050730 0004D670  41 82 00 18 */	beq .L_80050748
/* 80050734 0004D674  81 83 00 00 */	lwz r12, 0(r3)
/* 80050738 0004D678  38 80 00 01 */	li r4, 1
/* 8005073C 0004D67C  81 8C 00 08 */	lwz r12, 8(r12)
/* 80050740 0004D680  7D 89 03 A6 */	mtctr r12
/* 80050744 0004D684  4E 80 04 21 */	bctrl 
.L_80050748:
/* 80050748 0004D688  93 FE 01 AC */	stw r31, 0x1ac(r30)
/* 8005074C 0004D68C  38 00 00 00 */	li r0, 0
/* 80050750 0004D690  38 60 00 01 */	li r3, 1
/* 80050754 0004D694  98 1E 01 B1 */	stb r0, 0x1b1(r30)
.L_80050758:
/* 80050758 0004D698  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8005075C 0004D69C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80050760 0004D6A0  83 C1 00 08 */	lwz r30, 8(r1)
/* 80050764 0004D6A4  7C 08 03 A6 */	mtlr r0
/* 80050768 0004D6A8  38 21 00 10 */	addi r1, r1, 0x10
/* 8005076C 0004D6AC  4E 80 00 20 */	blr 
.endfn setFont__13J2DTevBlock16FP7JUTFont

.fn setPalette__13J2DTevBlock16FUlPC7ResTLUT, global
/* 80050770 0004D6B0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80050774 0004D6B4  7C 08 02 A6 */	mflr r0
/* 80050778 0004D6B8  90 01 00 24 */	stw r0, 0x24(r1)
/* 8005077C 0004D6BC  BF 41 00 08 */	stmw r26, 8(r1)
/* 80050780 0004D6C0  7C 9B 23 78 */	mr r27, r4
/* 80050784 0004D6C4  28 1B 00 08 */	cmplwi r27, 8
/* 80050788 0004D6C8  7C 7A 1B 78 */	mr r26, r3
/* 8005078C 0004D6CC  7C BC 2B 78 */	mr r28, r5
/* 80050790 0004D6D0  41 80 00 0C */	blt .L_8005079C
/* 80050794 0004D6D4  38 60 00 00 */	li r3, 0
/* 80050798 0004D6D8  48 00 00 94 */	b .L_8005082C
.L_8005079C:
/* 8005079C 0004D6DC  28 1C 00 00 */	cmplwi r28, 0
/* 800507A0 0004D6E0  41 82 00 70 */	beq .L_80050810
/* 800507A4 0004D6E4  57 7D 10 3A */	slwi r29, r27, 2
/* 800507A8 0004D6E8  7F DA EA 14 */	add r30, r26, r29
/* 800507AC 0004D6EC  80 7E 01 8C */	lwz r3, 0x18c(r30)
/* 800507B0 0004D6F0  28 03 00 00 */	cmplwi r3, 0
/* 800507B4 0004D6F4  40 82 00 38 */	bne .L_800507EC
/* 800507B8 0004D6F8  38 60 00 18 */	li r3, 0x18
/* 800507BC 0004D6FC  4B FD 36 E9 */	bl __nw__FUl
/* 800507C0 0004D700  7C 7F 1B 79 */	or. r31, r3, r3
/* 800507C4 0004D704  41 82 00 10 */	beq .L_800507D4
/* 800507C8 0004D708  7F 64 DB 78 */	mr r4, r27
/* 800507CC 0004D70C  7F 85 E3 78 */	mr r5, r28
/* 800507D0 0004D710  4B FD E6 F5 */	bl storeTLUT__10JUTPaletteF7_GXTlutP7ResTLUT
.L_800507D4:
/* 800507D4 0004D714  93 FE 01 8C */	stw r31, 0x18c(r30)
/* 800507D8 0004D718  80 1E 01 8C */	lwz r0, 0x18c(r30)
/* 800507DC 0004D71C  28 00 00 00 */	cmplwi r0, 0
/* 800507E0 0004D720  40 82 00 14 */	bne .L_800507F4
/* 800507E4 0004D724  38 60 00 00 */	li r3, 0
/* 800507E8 0004D728  48 00 00 44 */	b .L_8005082C
.L_800507EC:
/* 800507EC 0004D72C  38 80 00 00 */	li r4, 0
/* 800507F0 0004D730  4B FD E6 D5 */	bl storeTLUT__10JUTPaletteF7_GXTlutP7ResTLUT
.L_800507F4:
/* 800507F4 0004D734  7C 7A EA 14 */	add r3, r26, r29
/* 800507F8 0004D738  80 63 01 6C */	lwz r3, 0x16c(r3)
/* 800507FC 0004D73C  28 03 00 00 */	cmplwi r3, 0
/* 80050800 0004D740  41 82 00 28 */	beq .L_80050828
/* 80050804 0004D744  80 9E 01 8C */	lwz r4, 0x18c(r30)
/* 80050808 0004D748  4B FE 2B 95 */	bl attachPalette__10JUTTextureFP10JUTPalette
/* 8005080C 0004D74C  48 00 00 1C */	b .L_80050828
.L_80050810:
/* 80050810 0004D750  57 60 10 3A */	slwi r0, r27, 2
/* 80050814 0004D754  7F BA 02 14 */	add r29, r26, r0
/* 80050818 0004D758  80 7D 01 8C */	lwz r3, 0x18c(r29)
/* 8005081C 0004D75C  4B FD 38 99 */	bl __dl__FPv
/* 80050820 0004D760  38 00 00 00 */	li r0, 0
/* 80050824 0004D764  90 1D 01 8C */	stw r0, 0x18c(r29)
.L_80050828:
/* 80050828 0004D768  38 60 00 01 */	li r3, 1
.L_8005082C:
/* 8005082C 0004D76C  BB 41 00 08 */	lmw r26, 8(r1)
/* 80050830 0004D770  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80050834 0004D774  7C 08 03 A6 */	mtlr r0
/* 80050838 0004D778  38 21 00 20 */	addi r1, r1, 0x20
/* 8005083C 0004D77C  4E 80 00 20 */	blr 
.endfn setPalette__13J2DTevBlock16FUlPC7ResTLUT

.fn shiftDeleteFlag__13J2DTevBlock16FUcb, global
/* 80050840 0004D780  54 A0 06 3F */	clrlwi. r0, r5, 0x18
/* 80050844 0004D784  41 82 00 30 */	beq .L_80050874
/* 80050848 0004D788  54 80 06 3E */	clrlwi r0, r4, 0x18
/* 8005084C 0004D78C  38 80 00 01 */	li r4, 1
/* 80050850 0004D790  7C 84 00 30 */	slw r4, r4, r0
/* 80050854 0004D794  88 A3 01 B0 */	lbz r5, 0x1b0(r3)
/* 80050858 0004D798  38 84 FF FF */	addi r4, r4, -1
/* 8005085C 0004D79C  7C A0 20 78 */	andc r0, r5, r4
/* 80050860 0004D7A0  7C A4 20 38 */	and r4, r5, r4
/* 80050864 0004D7A4  54 00 08 3C */	slwi r0, r0, 1
/* 80050868 0004D7A8  7C 80 03 78 */	or r0, r4, r0
/* 8005086C 0004D7AC  98 03 01 B0 */	stb r0, 0x1b0(r3)
/* 80050870 0004D7B0  4E 80 00 20 */	blr 
.L_80050874:
/* 80050874 0004D7B4  54 86 06 3E */	clrlwi r6, r4, 0x18
/* 80050878 0004D7B8  38 A0 00 01 */	li r5, 1
/* 8005087C 0004D7BC  38 06 00 01 */	addi r0, r6, 1
/* 80050880 0004D7C0  88 E3 01 B0 */	lbz r7, 0x1b0(r3)
/* 80050884 0004D7C4  7C A4 00 30 */	slw r4, r5, r0
/* 80050888 0004D7C8  7C A5 30 30 */	slw r5, r5, r6
/* 8005088C 0004D7CC  38 04 FF FF */	addi r0, r4, -1
/* 80050890 0004D7D0  38 85 FF FF */	addi r4, r5, -1
/* 80050894 0004D7D4  7C E0 00 78 */	andc r0, r7, r0
/* 80050898 0004D7D8  7C E4 20 38 */	and r4, r7, r4
/* 8005089C 0004D7DC  7C 00 0E 70 */	srawi r0, r0, 1
/* 800508A0 0004D7E0  7C 80 03 78 */	or r0, r4, r0
/* 800508A4 0004D7E4  98 03 01 B0 */	stb r0, 0x1b0(r3)
/* 800508A8 0004D7E8  4E 80 00 20 */	blr 
.endfn shiftDeleteFlag__13J2DTevBlock16FUcb

.fn setGX__13J2DTevBlock16Fv, global
/* 800508AC 0004D7EC  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 800508B0 0004D7F0  7C 08 02 A6 */	mflr r0
/* 800508B4 0004D7F4  90 01 00 34 */	stw r0, 0x34(r1)
/* 800508B8 0004D7F8  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 800508BC 0004D7FC  93 C1 00 28 */	stw r30, 0x28(r1)
/* 800508C0 0004D800  93 A1 00 24 */	stw r29, 0x24(r1)
/* 800508C4 0004D804  7C 7D 1B 78 */	mr r29, r3
/* 800508C8 0004D808  93 81 00 20 */	stw r28, 0x20(r1)
/* 800508CC 0004D80C  3B 80 00 00 */	li r28, 0
.L_800508D0:
/* 800508D0 0004D810  7F A3 EB 78 */	mr r3, r29
/* 800508D4 0004D814  7F 84 E3 78 */	mr r4, r28
/* 800508D8 0004D818  81 9D 00 00 */	lwz r12, 0(r29)
/* 800508DC 0004D81C  7F 85 E3 78 */	mr r5, r28
/* 800508E0 0004D820  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 800508E4 0004D824  7D 89 03 A6 */	mtctr r12
/* 800508E8 0004D828  4E 80 04 21 */	bctrl 
/* 800508EC 0004D82C  3B 9C 00 01 */	addi r28, r28, 1
/* 800508F0 0004D830  2C 1C 00 08 */	cmpwi r28, 8
/* 800508F4 0004D834  41 80 FF DC */	blt .L_800508D0
/* 800508F8 0004D838  7F BE EB 78 */	mr r30, r29
/* 800508FC 0004D83C  3B 80 00 00 */	li r28, 0
/* 80050900 0004D840  48 00 00 20 */	b .L_80050920
.L_80050904:
/* 80050904 0004D844  88 9E 00 16 */	lbz r4, 0x16(r30)
/* 80050908 0004D848  7F 83 E3 78 */	mr r3, r28
/* 8005090C 0004D84C  88 BE 00 17 */	lbz r5, 0x17(r30)
/* 80050910 0004D850  88 DE 00 18 */	lbz r6, 0x18(r30)
/* 80050914 0004D854  48 09 81 09 */	bl GXSetTevOrder
/* 80050918 0004D858  3B DE 00 04 */	addi r30, r30, 4
/* 8005091C 0004D85C  3B 9C 00 01 */	addi r28, r28, 1
.L_80050920:
/* 80050920 0004D860  88 1D 00 76 */	lbz r0, 0x76(r29)
/* 80050924 0004D864  7C 1C 00 00 */	cmpw r28, r0
/* 80050928 0004D868  41 80 FF DC */	blt .L_80050904
/* 8005092C 0004D86C  7F BF EB 78 */	mr r31, r29
/* 80050930 0004D870  3B C1 00 0C */	addi r30, r1, 0xc
/* 80050934 0004D874  3B 80 00 00 */	li r28, 0
.L_80050938:
/* 80050938 0004D878  80 9F 00 56 */	lwz r4, 0x56(r31)
/* 8005093C 0004D87C  2C 1C 00 03 */	cmpwi r28, 3
/* 80050940 0004D880  80 1F 00 5A */	lwz r0, 0x5a(r31)
/* 80050944 0004D884  38 60 00 00 */	li r3, 0
/* 80050948 0004D888  90 81 00 0C */	stw r4, 0xc(r1)
/* 8005094C 0004D88C  90 01 00 10 */	stw r0, 0x10(r1)
/* 80050950 0004D890  41 82 00 08 */	beq .L_80050958
/* 80050954 0004D894  38 7C 00 01 */	addi r3, r28, 1
.L_80050958:
/* 80050958 0004D898  7F C4 F3 78 */	mr r4, r30
/* 8005095C 0004D89C  48 09 7D 81 */	bl GXSetTevColorS10
/* 80050960 0004D8A0  3B 9C 00 01 */	addi r28, r28, 1
/* 80050964 0004D8A4  3B FF 00 08 */	addi r31, r31, 8
/* 80050968 0004D8A8  2C 1C 00 04 */	cmpwi r28, 4
/* 8005096C 0004D8AC  41 80 FF CC */	blt .L_80050938
/* 80050970 0004D8B0  88 7D 00 76 */	lbz r3, 0x76(r29)
/* 80050974 0004D8B4  48 09 82 45 */	bl GXSetNumTevStages
/* 80050978 0004D8B8  7F BE EB 78 */	mr r30, r29
/* 8005097C 0004D8BC  3B E0 00 00 */	li r31, 0
/* 80050980 0004D8C0  48 00 01 28 */	b .L_80050AA8
.L_80050984:
/* 80050984 0004D8C4  88 1E 00 7A */	lbz r0, 0x7a(r30)
/* 80050988 0004D8C8  7F E3 FB 78 */	mr r3, r31
/* 8005098C 0004D8CC  88 BE 00 79 */	lbz r5, 0x79(r30)
/* 80050990 0004D8D0  54 06 E7 3E */	rlwinm r6, r0, 0x1c, 0x1c, 0x1f
/* 80050994 0004D8D4  54 07 07 3E */	clrlwi r7, r0, 0x1c
/* 80050998 0004D8D8  54 A4 E7 3E */	rlwinm r4, r5, 0x1c, 0x1c, 0x1f
/* 8005099C 0004D8DC  54 A5 07 3E */	clrlwi r5, r5, 0x1c
/* 800509A0 0004D8E0  48 09 7B 69 */	bl GXSetTevColorIn
/* 800509A4 0004D8E4  88 BE 00 7D */	lbz r5, 0x7d(r30)
/* 800509A8 0004D8E8  7F E3 FB 78 */	mr r3, r31
/* 800509AC 0004D8EC  88 DE 00 7E */	lbz r6, 0x7e(r30)
/* 800509B0 0004D8F0  54 A0 06 34 */	rlwinm r0, r5, 0, 0x18, 0x1a
/* 800509B4 0004D8F4  7C 04 2E 70 */	srawi r4, r0, 5
/* 800509B8 0004D8F8  54 C7 E7 7E */	rlwinm r7, r6, 0x1c, 0x1d, 0x1f
/* 800509BC 0004D8FC  54 C0 CF FE */	rlwinm r0, r6, 0x19, 0x1f, 0x1f
/* 800509C0 0004D900  50 A0 0F 7C */	rlwimi r0, r5, 1, 0x1d, 0x1e
/* 800509C4 0004D904  54 84 06 3E */	clrlwi r4, r4, 0x18
/* 800509C8 0004D908  54 A5 F7 7E */	rlwinm r5, r5, 0x1e, 0x1d, 0x1f
/* 800509CC 0004D90C  54 06 06 3E */	clrlwi r6, r0, 0x18
/* 800509D0 0004D910  48 09 7B 7D */	bl GXSetTevAlphaIn
/* 800509D4 0004D914  88 FE 00 78 */	lbz r7, 0x78(r30)
/* 800509D8 0004D918  7F E3 FB 78 */	mr r3, r31
/* 800509DC 0004D91C  54 E0 06 B6 */	rlwinm r0, r7, 0, 0x1a, 0x1b
/* 800509E0 0004D920  54 E5 07 BE */	clrlwi r5, r7, 0x1e
/* 800509E4 0004D924  7C 06 26 70 */	srawi r6, r0, 4
/* 800509E8 0004D928  54 E9 F7 FE */	rlwinm r9, r7, 0x1e, 0x1f, 0x1f
/* 800509EC 0004D92C  54 E0 EF 7C */	rlwinm r0, r7, 0x1d, 0x1d, 0x1e
/* 800509F0 0004D930  28 05 00 03 */	cmplwi r5, 3
/* 800509F4 0004D934  7C 89 02 14 */	add r4, r9, r0
/* 800509F8 0004D938  54 E8 D7 BE */	rlwinm r8, r7, 0x1a, 0x1e, 0x1f
/* 800509FC 0004D93C  38 04 00 08 */	addi r0, r4, 8
/* 80050A00 0004D940  54 C6 06 3E */	clrlwi r6, r6, 0x18
/* 80050A04 0004D944  54 E7 EF FE */	rlwinm r7, r7, 0x1d, 0x1f, 0x1f
/* 80050A08 0004D948  54 00 06 3E */	clrlwi r0, r0, 0x18
/* 80050A0C 0004D94C  41 82 00 08 */	beq .L_80050A14
/* 80050A10 0004D950  7D 20 4B 78 */	mr r0, r9
.L_80050A14:
/* 80050A14 0004D954  54 04 06 3E */	clrlwi r4, r0, 0x18
/* 80050A18 0004D958  48 09 7B 79 */	bl GXSetTevColorOp
/* 80050A1C 0004D95C  88 FE 00 7C */	lbz r7, 0x7c(r30)
/* 80050A20 0004D960  7F E3 FB 78 */	mr r3, r31
/* 80050A24 0004D964  54 E0 06 B6 */	rlwinm r0, r7, 0, 0x1a, 0x1b
/* 80050A28 0004D968  54 E5 07 BE */	clrlwi r5, r7, 0x1e
/* 80050A2C 0004D96C  7C 06 26 70 */	srawi r6, r0, 4
/* 80050A30 0004D970  54 E9 F7 FE */	rlwinm r9, r7, 0x1e, 0x1f, 0x1f
/* 80050A34 0004D974  54 E0 EF 7C */	rlwinm r0, r7, 0x1d, 0x1d, 0x1e
/* 80050A38 0004D978  28 05 00 03 */	cmplwi r5, 3
/* 80050A3C 0004D97C  7C 89 02 14 */	add r4, r9, r0
/* 80050A40 0004D980  54 E8 D7 BE */	rlwinm r8, r7, 0x1a, 0x1e, 0x1f
/* 80050A44 0004D984  38 04 00 08 */	addi r0, r4, 8
/* 80050A48 0004D988  54 C6 06 3E */	clrlwi r6, r6, 0x18
/* 80050A4C 0004D98C  54 E7 EF FE */	rlwinm r7, r7, 0x1d, 0x1f, 0x1f
/* 80050A50 0004D990  54 00 06 3E */	clrlwi r0, r0, 0x18
/* 80050A54 0004D994  41 82 00 08 */	beq .L_80050A5C
/* 80050A58 0004D998  7D 20 4B 78 */	mr r0, r9
.L_80050A5C:
/* 80050A5C 0004D99C  54 04 06 3E */	clrlwi r4, r0, 0x18
/* 80050A60 0004D9A0  48 09 7B 99 */	bl GXSetTevAlphaOp
/* 80050A64 0004D9A4  7F 9D FA 14 */	add r28, r29, r31
/* 80050A68 0004D9A8  38 80 00 00 */	li r4, 0
/* 80050A6C 0004D9AC  88 1C 01 08 */	lbz r0, 0x108(r28)
/* 80050A70 0004D9B0  28 00 00 FF */	cmplwi r0, 0xff
/* 80050A74 0004D9B4  41 82 00 08 */	beq .L_80050A7C
/* 80050A78 0004D9B8  7C 04 03 78 */	mr r4, r0
.L_80050A7C:
/* 80050A7C 0004D9BC  7F E3 FB 78 */	mr r3, r31
/* 80050A80 0004D9C0  48 09 7D 4D */	bl GXSetTevKColorSel
/* 80050A84 0004D9C4  88 1C 01 18 */	lbz r0, 0x118(r28)
/* 80050A88 0004D9C8  38 80 00 00 */	li r4, 0
/* 80050A8C 0004D9CC  28 00 00 FF */	cmplwi r0, 0xff
/* 80050A90 0004D9D0  41 82 00 08 */	beq .L_80050A98
/* 80050A94 0004D9D4  7C 04 03 78 */	mr r4, r0
.L_80050A98:
/* 80050A98 0004D9D8  7F E3 FB 78 */	mr r3, r31
/* 80050A9C 0004D9DC  48 09 7D 8D */	bl GXSetTevKAlphaSel
/* 80050AA0 0004D9E0  3B DE 00 08 */	addi r30, r30, 8
/* 80050AA4 0004D9E4  3B FF 00 01 */	addi r31, r31, 1
.L_80050AA8:
/* 80050AA8 0004D9E8  88 1D 00 76 */	lbz r0, 0x76(r29)
/* 80050AAC 0004D9EC  7C 1F 00 00 */	cmpw r31, r0
/* 80050AB0 0004D9F0  41 80 FE D4 */	blt .L_80050984
/* 80050AB4 0004D9F4  3B 80 00 00 */	li r28, 0
/* 80050AB8 0004D9F8  7F BE EB 78 */	mr r30, r29
.L_80050ABC:
/* 80050ABC 0004D9FC  80 1E 00 F8 */	lwz r0, 0xf8(r30)
/* 80050AC0 0004DA00  7F 83 E3 78 */	mr r3, r28
/* 80050AC4 0004DA04  38 81 00 08 */	addi r4, r1, 8
/* 80050AC8 0004DA08  90 01 00 08 */	stw r0, 8(r1)
/* 80050ACC 0004DA0C  48 09 7C 8D */	bl GXSetTevKColor
/* 80050AD0 0004DA10  3B 9C 00 01 */	addi r28, r28, 1
/* 80050AD4 0004DA14  3B DE 00 04 */	addi r30, r30, 4
/* 80050AD8 0004DA18  2C 1C 00 04 */	cmpwi r28, 4
/* 80050ADC 0004DA1C  41 80 FF E0 */	blt .L_80050ABC
/* 80050AE0 0004DA20  7F BE EB 78 */	mr r30, r29
/* 80050AE4 0004DA24  3B 80 00 00 */	li r28, 0
/* 80050AE8 0004DA28  48 00 00 20 */	b .L_80050B08
.L_80050AEC:
/* 80050AEC 0004DA2C  88 1E 00 7E */	lbz r0, 0x7e(r30)
/* 80050AF0 0004DA30  7F 83 E3 78 */	mr r3, r28
/* 80050AF4 0004DA34  54 04 07 BE */	clrlwi r4, r0, 0x1e
/* 80050AF8 0004DA38  54 05 F7 BE */	rlwinm r5, r0, 0x1e, 0x1e, 0x1f
/* 80050AFC 0004DA3C  48 09 7D 89 */	bl GXSetTevSwapMode
/* 80050B00 0004DA40  3B DE 00 08 */	addi r30, r30, 8
/* 80050B04 0004DA44  3B 9C 00 01 */	addi r28, r28, 1
.L_80050B08:
/* 80050B08 0004DA48  88 1D 00 76 */	lbz r0, 0x76(r29)
/* 80050B0C 0004DA4C  7C 1C 00 00 */	cmpw r28, r0
/* 80050B10 0004DA50  41 80 FF DC */	blt .L_80050AEC
/* 80050B14 0004DA54  3B 80 00 00 */	li r28, 0
.L_80050B18:
/* 80050B18 0004DA58  38 1C 01 28 */	addi r0, r28, 0x128
/* 80050B1C 0004DA5C  7F 83 E3 78 */	mr r3, r28
/* 80050B20 0004DA60  7C 1D 00 AE */	lbzx r0, r29, r0
/* 80050B24 0004DA64  54 04 D7 BE */	rlwinm r4, r0, 0x1a, 0x1e, 0x1f
/* 80050B28 0004DA68  54 05 E7 BE */	rlwinm r5, r0, 0x1c, 0x1e, 0x1f
/* 80050B2C 0004DA6C  54 06 F7 BE */	rlwinm r6, r0, 0x1e, 0x1e, 0x1f
/* 80050B30 0004DA70  54 07 07 BE */	clrlwi r7, r0, 0x1e
/* 80050B34 0004DA74  48 09 7D 99 */	bl GXSetTevSwapModeTable
/* 80050B38 0004DA78  3B 9C 00 01 */	addi r28, r28, 1
/* 80050B3C 0004DA7C  2C 1C 00 04 */	cmpwi r28, 4
/* 80050B40 0004DA80  41 80 FF D8 */	blt .L_80050B18
/* 80050B44 0004DA84  3B 80 00 00 */	li r28, 0
/* 80050B48 0004DA88  48 00 00 1C */	b .L_80050B64
.L_80050B4C:
/* 80050B4C 0004DA8C  57 83 15 BA */	rlwinm r3, r28, 2, 0x16, 0x1d
/* 80050B50 0004DA90  7F 84 E3 78 */	mr r4, r28
/* 80050B54 0004DA94  38 63 01 2C */	addi r3, r3, 0x12c
/* 80050B58 0004DA98  7C 7D 1A 14 */	add r3, r29, r3
/* 80050B5C 0004DA9C  48 00 8A 69 */	bl load__14J2DIndTevStageFUc
/* 80050B60 0004DAA0  3B 9C 00 01 */	addi r28, r28, 1
.L_80050B64:
/* 80050B64 0004DAA4  88 1D 00 76 */	lbz r0, 0x76(r29)
/* 80050B68 0004DAA8  57 83 06 3E */	clrlwi r3, r28, 0x18
/* 80050B6C 0004DAAC  7C 03 00 40 */	cmplw r3, r0
/* 80050B70 0004DAB0  41 80 FF DC */	blt .L_80050B4C
/* 80050B74 0004DAB4  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80050B78 0004DAB8  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 80050B7C 0004DABC  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 80050B80 0004DAC0  83 A1 00 24 */	lwz r29, 0x24(r1)
/* 80050B84 0004DAC4  83 81 00 20 */	lwz r28, 0x20(r1)
/* 80050B88 0004DAC8  7C 08 03 A6 */	mtlr r0
/* 80050B8C 0004DACC  38 21 00 30 */	addi r1, r1, 0x30
/* 80050B90 0004DAD0  4E 80 00 20 */	blr 
.endfn setGX__13J2DTevBlock16Fv

.fn loadTexture__13J2DTevBlock16F11_GXTexMapIDUl, global
/* 80050B94 0004DAD4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80050B98 0004DAD8  7C 08 02 A6 */	mflr r0
/* 80050B9C 0004DADC  28 05 00 08 */	cmplwi r5, 8
/* 80050BA0 0004DAE0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80050BA4 0004DAE4  40 80 00 28 */	bge .L_80050BCC
/* 80050BA8 0004DAE8  54 A0 10 3A */	slwi r0, r5, 2
/* 80050BAC 0004DAEC  7C 63 02 14 */	add r3, r3, r0
/* 80050BB0 0004DAF0  80 63 01 6C */	lwz r3, 0x16c(r3)
/* 80050BB4 0004DAF4  28 03 00 00 */	cmplwi r3, 0
/* 80050BB8 0004DAF8  41 82 00 14 */	beq .L_80050BCC
/* 80050BBC 0004DAFC  80 03 00 20 */	lwz r0, 0x20(r3)
/* 80050BC0 0004DB00  28 00 00 00 */	cmplwi r0, 0
/* 80050BC4 0004DB04  41 82 00 08 */	beq .L_80050BCC
/* 80050BC8 0004DB08  4B FE 2A 69 */	bl load__10JUTTextureF11_GXTexMapID
.L_80050BCC:
/* 80050BCC 0004DB0C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80050BD0 0004DB10  7C 08 03 A6 */	mtlr r0
/* 80050BD4 0004DB14  38 21 00 10 */	addi r1, r1, 0x10
/* 80050BD8 0004DB18  4E 80 00 20 */	blr 
.endfn loadTexture__13J2DTevBlock16F11_GXTexMapIDUl

.fn initialize__15J2DIndBlockFullFv, global
/* 80050BDC 0004DB1C  38 00 00 00 */	li r0, 0
/* 80050BE0 0004DB20  3C 80 80 48 */	lis r4, j2dDefaultIndTexMtxInfo@ha
/* 80050BE4 0004DB24  98 03 00 04 */	stb r0, 4(r3)
/* 80050BE8 0004DB28  38 84 86 8C */	addi r4, r4, j2dDefaultIndTexMtxInfo@l
/* 80050BEC 0004DB2C  38 C2 85 B4 */	addi r6, r2, j2dDefaultIndTexOrderNull@sda21
/* 80050BF0 0004DB30  88 02 85 B4 */	lbz r0, j2dDefaultIndTexOrderNull@sda21(r2)
/* 80050BF4 0004DB34  38 A4 00 0C */	addi r5, r4, 0xc
/* 80050BF8 0004DB38  98 03 00 05 */	stb r0, 5(r3)
/* 80050BFC 0004DB3C  88 06 00 01 */	lbz r0, 1(r6)
/* 80050C00 0004DB40  98 03 00 06 */	stb r0, 6(r3)
/* 80050C04 0004DB44  88 02 85 B4 */	lbz r0, j2dDefaultIndTexOrderNull@sda21(r2)
/* 80050C08 0004DB48  98 03 00 07 */	stb r0, 7(r3)
/* 80050C0C 0004DB4C  88 06 00 01 */	lbz r0, 1(r6)
/* 80050C10 0004DB50  98 03 00 08 */	stb r0, 8(r3)
/* 80050C14 0004DB54  88 02 85 B4 */	lbz r0, j2dDefaultIndTexOrderNull@sda21(r2)
/* 80050C18 0004DB58  98 03 00 09 */	stb r0, 9(r3)
/* 80050C1C 0004DB5C  88 06 00 01 */	lbz r0, 1(r6)
/* 80050C20 0004DB60  98 03 00 0A */	stb r0, 0xa(r3)
/* 80050C24 0004DB64  88 02 85 B4 */	lbz r0, j2dDefaultIndTexOrderNull@sda21(r2)
/* 80050C28 0004DB68  98 03 00 0B */	stb r0, 0xb(r3)
/* 80050C2C 0004DB6C  88 06 00 01 */	lbz r0, 1(r6)
/* 80050C30 0004DB70  98 03 00 0C */	stb r0, 0xc(r3)
/* 80050C34 0004DB74  C0 04 00 00 */	lfs f0, 0(r4)
/* 80050C38 0004DB78  D0 03 00 10 */	stfs f0, 0x10(r3)
/* 80050C3C 0004DB7C  C0 04 00 04 */	lfs f0, 4(r4)
/* 80050C40 0004DB80  D0 03 00 14 */	stfs f0, 0x14(r3)
/* 80050C44 0004DB84  C0 04 00 08 */	lfs f0, 8(r4)
/* 80050C48 0004DB88  D0 03 00 18 */	stfs f0, 0x18(r3)
/* 80050C4C 0004DB8C  C0 04 00 0C */	lfs f0, 0xc(r4)
/* 80050C50 0004DB90  D0 03 00 1C */	stfs f0, 0x1c(r3)
/* 80050C54 0004DB94  C0 04 00 10 */	lfs f0, 0x10(r4)
/* 80050C58 0004DB98  D0 03 00 20 */	stfs f0, 0x20(r3)
/* 80050C5C 0004DB9C  C0 04 00 14 */	lfs f0, 0x14(r4)
/* 80050C60 0004DBA0  D0 03 00 24 */	stfs f0, 0x24(r3)
/* 80050C64 0004DBA4  88 04 00 18 */	lbz r0, 0x18(r4)
/* 80050C68 0004DBA8  98 03 00 28 */	stb r0, 0x28(r3)
/* 80050C6C 0004DBAC  C0 04 00 00 */	lfs f0, 0(r4)
/* 80050C70 0004DBB0  D0 03 00 2C */	stfs f0, 0x2c(r3)
/* 80050C74 0004DBB4  C0 04 00 04 */	lfs f0, 4(r4)
/* 80050C78 0004DBB8  D0 03 00 30 */	stfs f0, 0x30(r3)
/* 80050C7C 0004DBBC  C0 04 00 08 */	lfs f0, 8(r4)
/* 80050C80 0004DBC0  D0 03 00 34 */	stfs f0, 0x34(r3)
/* 80050C84 0004DBC4  C0 05 00 00 */	lfs f0, 0(r5)
/* 80050C88 0004DBC8  D0 03 00 38 */	stfs f0, 0x38(r3)
/* 80050C8C 0004DBCC  C0 05 00 04 */	lfs f0, 4(r5)
/* 80050C90 0004DBD0  D0 03 00 3C */	stfs f0, 0x3c(r3)
/* 80050C94 0004DBD4  C0 05 00 08 */	lfs f0, 8(r5)
/* 80050C98 0004DBD8  D0 03 00 40 */	stfs f0, 0x40(r3)
/* 80050C9C 0004DBDC  88 04 00 18 */	lbz r0, 0x18(r4)
/* 80050CA0 0004DBE0  98 03 00 44 */	stb r0, 0x44(r3)
/* 80050CA4 0004DBE4  C0 04 00 00 */	lfs f0, 0(r4)
/* 80050CA8 0004DBE8  38 C2 85 C0 */	addi r6, r2, j2dDefaultIndTexCoordScaleInfo@sda21
/* 80050CAC 0004DBEC  D0 03 00 48 */	stfs f0, 0x48(r3)
/* 80050CB0 0004DBF0  C0 04 00 04 */	lfs f0, 4(r4)
/* 80050CB4 0004DBF4  D0 03 00 4C */	stfs f0, 0x4c(r3)
/* 80050CB8 0004DBF8  C0 04 00 08 */	lfs f0, 8(r4)
/* 80050CBC 0004DBFC  D0 03 00 50 */	stfs f0, 0x50(r3)
/* 80050CC0 0004DC00  C0 05 00 00 */	lfs f0, 0(r5)
/* 80050CC4 0004DC04  D0 03 00 54 */	stfs f0, 0x54(r3)
/* 80050CC8 0004DC08  C0 05 00 04 */	lfs f0, 4(r5)
/* 80050CCC 0004DC0C  D0 03 00 58 */	stfs f0, 0x58(r3)
/* 80050CD0 0004DC10  C0 05 00 08 */	lfs f0, 8(r5)
/* 80050CD4 0004DC14  D0 03 00 5C */	stfs f0, 0x5c(r3)
/* 80050CD8 0004DC18  88 04 00 18 */	lbz r0, 0x18(r4)
/* 80050CDC 0004DC1C  98 03 00 60 */	stb r0, 0x60(r3)
/* 80050CE0 0004DC20  88 02 85 C0 */	lbz r0, j2dDefaultIndTexCoordScaleInfo@sda21(r2)
/* 80050CE4 0004DC24  98 03 00 64 */	stb r0, 0x64(r3)
/* 80050CE8 0004DC28  88 06 00 01 */	lbz r0, 1(r6)
/* 80050CEC 0004DC2C  98 03 00 65 */	stb r0, 0x65(r3)
/* 80050CF0 0004DC30  88 02 85 C0 */	lbz r0, j2dDefaultIndTexCoordScaleInfo@sda21(r2)
/* 80050CF4 0004DC34  98 03 00 66 */	stb r0, 0x66(r3)
/* 80050CF8 0004DC38  88 06 00 01 */	lbz r0, 1(r6)
/* 80050CFC 0004DC3C  98 03 00 67 */	stb r0, 0x67(r3)
/* 80050D00 0004DC40  88 02 85 C0 */	lbz r0, j2dDefaultIndTexCoordScaleInfo@sda21(r2)
/* 80050D04 0004DC44  98 03 00 68 */	stb r0, 0x68(r3)
/* 80050D08 0004DC48  88 06 00 01 */	lbz r0, 1(r6)
/* 80050D0C 0004DC4C  98 03 00 69 */	stb r0, 0x69(r3)
/* 80050D10 0004DC50  88 02 85 C0 */	lbz r0, j2dDefaultIndTexCoordScaleInfo@sda21(r2)
/* 80050D14 0004DC54  98 03 00 6A */	stb r0, 0x6a(r3)
/* 80050D18 0004DC58  88 06 00 01 */	lbz r0, 1(r6)
/* 80050D1C 0004DC5C  98 03 00 6B */	stb r0, 0x6b(r3)
/* 80050D20 0004DC60  4E 80 00 20 */	blr 
.endfn initialize__15J2DIndBlockFullFv

.fn setGX__15J2DIndBlockFullFv, global
/* 80050D24 0004DC64  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80050D28 0004DC68  7C 08 02 A6 */	mflr r0
/* 80050D2C 0004DC6C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80050D30 0004DC70  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80050D34 0004DC74  93 C1 00 08 */	stw r30, 8(r1)
/* 80050D38 0004DC78  7C 7E 1B 78 */	mr r30, r3
/* 80050D3C 0004DC7C  88 63 00 04 */	lbz r3, 4(r3)
/* 80050D40 0004DC80  48 09 76 15 */	bl GXSetNumIndStages
/* 80050D44 0004DC84  3B E0 00 00 */	li r31, 0
/* 80050D48 0004DC88  48 00 00 20 */	b .L_80050D68
.L_80050D4C:
/* 80050D4C 0004DC8C  57 E0 06 3E */	clrlwi r0, r31, 0x18
/* 80050D50 0004DC90  7F E4 FB 78 */	mr r4, r31
/* 80050D54 0004DC94  1C 60 00 1C */	mulli r3, r0, 0x1c
/* 80050D58 0004DC98  38 63 00 10 */	addi r3, r3, 0x10
/* 80050D5C 0004DC9C  7C 7E 1A 14 */	add r3, r30, r3
/* 80050D60 0004DCA0  48 00 88 B9 */	bl load__12J2DIndTexMtxFUc
/* 80050D64 0004DCA4  3B FF 00 01 */	addi r31, r31, 1
.L_80050D68:
/* 80050D68 0004DCA8  88 1E 00 04 */	lbz r0, 4(r30)
/* 80050D6C 0004DCAC  57 E3 06 3E */	clrlwi r3, r31, 0x18
/* 80050D70 0004DCB0  7C 03 00 40 */	cmplw r3, r0
/* 80050D74 0004DCB4  41 80 FF D8 */	blt .L_80050D4C
/* 80050D78 0004DCB8  3B E0 00 00 */	li r31, 0
/* 80050D7C 0004DCBC  48 00 00 1C */	b .L_80050D98
.L_80050D80:
/* 80050D80 0004DCC0  57 E3 0D FC */	rlwinm r3, r31, 1, 0x17, 0x1e
/* 80050D84 0004DCC4  7F E4 FB 78 */	mr r4, r31
/* 80050D88 0004DCC8  38 63 00 64 */	addi r3, r3, 0x64
/* 80050D8C 0004DCCC  7C 7E 1A 14 */	add r3, r30, r3
/* 80050D90 0004DCD0  48 00 88 B9 */	bl load__19J2DIndTexCoordScaleFUc
/* 80050D94 0004DCD4  3B FF 00 01 */	addi r31, r31, 1
.L_80050D98:
/* 80050D98 0004DCD8  88 1E 00 04 */	lbz r0, 4(r30)
/* 80050D9C 0004DCDC  57 E3 06 3E */	clrlwi r3, r31, 0x18
/* 80050DA0 0004DCE0  7C 03 00 40 */	cmplw r3, r0
/* 80050DA4 0004DCE4  41 80 FF DC */	blt .L_80050D80
/* 80050DA8 0004DCE8  3B E0 00 00 */	li r31, 0
/* 80050DAC 0004DCEC  48 00 00 1C */	b .L_80050DC8
.L_80050DB0:
/* 80050DB0 0004DCF0  57 E3 0D FC */	rlwinm r3, r31, 1, 0x17, 0x1e
/* 80050DB4 0004DCF4  7F E4 FB 78 */	mr r4, r31
/* 80050DB8 0004DCF8  38 63 00 05 */	addi r3, r3, 5
/* 80050DBC 0004DCFC  7C 7E 1A 14 */	add r3, r30, r3
/* 80050DC0 0004DD00  48 00 88 B9 */	bl load__14J2DIndTexOrderFUc
/* 80050DC4 0004DD04  3B FF 00 01 */	addi r31, r31, 1
.L_80050DC8:
/* 80050DC8 0004DD08  88 1E 00 04 */	lbz r0, 4(r30)
/* 80050DCC 0004DD0C  57 E3 06 3E */	clrlwi r3, r31, 0x18
/* 80050DD0 0004DD10  7C 03 00 40 */	cmplw r3, r0
/* 80050DD4 0004DD14  41 80 FF DC */	blt .L_80050DB0
/* 80050DD8 0004DD18  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80050DDC 0004DD1C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80050DE0 0004DD20  83 C1 00 08 */	lwz r30, 8(r1)
/* 80050DE4 0004DD24  7C 08 03 A6 */	mtlr r0
/* 80050DE8 0004DD28  38 21 00 10 */	addi r1, r1, 0x10
/* 80050DEC 0004DD2C  4E 80 00 20 */	blr 
.endfn setGX__15J2DIndBlockFullFv

.fn initialize__10J2DPEBlockFv, global
/* 80050DF0 0004DD30  A0 C2 85 DE */	lhz r6, j2dDefaultAlphaCmp@sda21(r2)
/* 80050DF4 0004DD34  38 80 00 00 */	li r4, 0
/* 80050DF8 0004DD38  38 A2 85 D0 */	addi r5, r2, j2dDefaultBlendInfo@sda21
/* 80050DFC 0004DD3C  88 02 85 D4 */	lbz r0, j2dDefaultDither@sda21(r2)
/* 80050E00 0004DD40  B0 C3 00 00 */	sth r6, 0(r3)
/* 80050E04 0004DD44  98 83 00 02 */	stb r4, 2(r3)
/* 80050E08 0004DD48  98 83 00 03 */	stb r4, 3(r3)
/* 80050E0C 0004DD4C  88 82 85 D0 */	lbz r4, j2dDefaultBlendInfo@sda21(r2)
/* 80050E10 0004DD50  98 83 00 04 */	stb r4, 4(r3)
/* 80050E14 0004DD54  88 85 00 01 */	lbz r4, 1(r5)
/* 80050E18 0004DD58  98 83 00 05 */	stb r4, 5(r3)
/* 80050E1C 0004DD5C  88 85 00 02 */	lbz r4, 2(r5)
/* 80050E20 0004DD60  98 83 00 06 */	stb r4, 6(r3)
/* 80050E24 0004DD64  88 85 00 03 */	lbz r4, 3(r5)
/* 80050E28 0004DD68  98 83 00 07 */	stb r4, 7(r3)
/* 80050E2C 0004DD6C  98 03 00 08 */	stb r0, 8(r3)
/* 80050E30 0004DD70  4E 80 00 20 */	blr 
.endfn initialize__10J2DPEBlockFv

.fn setGX__10J2DPEBlockFv, global
/* 80050E34 0004DD74  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80050E38 0004DD78  7C 08 02 A6 */	mflr r0
/* 80050E3C 0004DD7C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80050E40 0004DD80  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80050E44 0004DD84  7C 7F 1B 78 */	mr r31, r3
/* 80050E48 0004DD88  A0 03 00 00 */	lhz r0, 0(r3)
/* 80050E4C 0004DD8C  88 83 00 02 */	lbz r4, 2(r3)
/* 80050E50 0004DD90  88 FF 00 03 */	lbz r7, 3(r31)
/* 80050E54 0004DD94  54 03 DF 7E */	rlwinm r3, r0, 0x1b, 0x1d, 0x1f
/* 80050E58 0004DD98  54 05 EF BE */	rlwinm r5, r0, 0x1d, 0x1e, 0x1f
/* 80050E5C 0004DD9C  54 06 07 7E */	clrlwi r6, r0, 0x1d
/* 80050E60 0004DDA0  48 09 7A ED */	bl GXSetAlphaCompare
/* 80050E64 0004DDA4  88 7F 00 04 */	lbz r3, 4(r31)
/* 80050E68 0004DDA8  88 9F 00 05 */	lbz r4, 5(r31)
/* 80050E6C 0004DDAC  88 BF 00 06 */	lbz r5, 6(r31)
/* 80050E70 0004DDB0  88 DF 00 07 */	lbz r6, 7(r31)
/* 80050E74 0004DDB4  48 09 82 65 */	bl GXSetBlendMode
/* 80050E78 0004DDB8  88 7F 00 08 */	lbz r3, 8(r31)
/* 80050E7C 0004DDBC  48 09 84 45 */	bl GXSetDither
/* 80050E80 0004DDC0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80050E84 0004DDC4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80050E88 0004DDC8  7C 08 03 A6 */	mtlr r0
/* 80050E8C 0004DDCC  38 21 00 10 */	addi r1, r1, 0x10
/* 80050E90 0004DDD0  4E 80 00 20 */	blr 
.endfn setGX__10J2DPEBlockFv

.fn getType__15J2DIndBlockFullFv, weak
/* 80050E94 0004DDD4  3C 60 49 42 */	lis r3, 0x49424C46@ha
/* 80050E98 0004DDD8  38 63 4C 46 */	addi r3, r3, 0x49424C46@l
/* 80050E9C 0004DDDC  4E 80 00 20 */	blr 
.endfn getType__15J2DIndBlockFullFv

.fn setIndTexStageNum__15J2DIndBlockFullFUc, weak
/* 80050EA0 0004DDE0  98 83 00 04 */	stb r4, 4(r3)
/* 80050EA4 0004DDE4  4E 80 00 20 */	blr 
.endfn setIndTexStageNum__15J2DIndBlockFullFUc

.fn getIndTexStageNum__15J2DIndBlockFullCFv, weak
/* 80050EA8 0004DDE8  88 63 00 04 */	lbz r3, 4(r3)
/* 80050EAC 0004DDEC  4E 80 00 20 */	blr 
.endfn getIndTexStageNum__15J2DIndBlockFullCFv

.fn setIndTexOrder__15J2DIndBlockFullFUl14J2DIndTexOrder, weak
/* 80050EB0 0004DDF0  54 80 08 3C */	slwi r0, r4, 1
/* 80050EB4 0004DDF4  88 85 00 00 */	lbz r4, 0(r5)
/* 80050EB8 0004DDF8  7C 63 02 14 */	add r3, r3, r0
/* 80050EBC 0004DDFC  88 05 00 01 */	lbz r0, 1(r5)
/* 80050EC0 0004DE00  98 83 00 05 */	stb r4, 5(r3)
/* 80050EC4 0004DE04  98 03 00 06 */	stb r0, 6(r3)
/* 80050EC8 0004DE08  4E 80 00 20 */	blr 
.endfn setIndTexOrder__15J2DIndBlockFullFUl14J2DIndTexOrder

.fn getIndTexOrder__15J2DIndBlockFullFUl, weak
/* 80050ECC 0004DE0C  54 84 08 3C */	slwi r4, r4, 1
/* 80050ED0 0004DE10  7C 60 1B 78 */	mr r0, r3
/* 80050ED4 0004DE14  38 64 00 05 */	addi r3, r4, 5
/* 80050ED8 0004DE18  7C 60 1A 14 */	add r3, r0, r3
/* 80050EDC 0004DE1C  4E 80 00 20 */	blr 
.endfn getIndTexOrder__15J2DIndBlockFullFUl

.fn setIndTexMtx__15J2DIndBlockFullFUl12J2DIndTexMtx, weak
/* 80050EE0 0004DE20  1C 04 00 1C */	mulli r0, r4, 0x1c
/* 80050EE4 0004DE24  C0 45 00 00 */	lfs f2, 0(r5)
/* 80050EE8 0004DE28  C0 25 00 04 */	lfs f1, 4(r5)
/* 80050EEC 0004DE2C  C0 05 00 08 */	lfs f0, 8(r5)
/* 80050EF0 0004DE30  7C 63 02 14 */	add r3, r3, r0
/* 80050EF4 0004DE34  88 05 00 18 */	lbz r0, 0x18(r5)
/* 80050EF8 0004DE38  D0 43 00 10 */	stfs f2, 0x10(r3)
/* 80050EFC 0004DE3C  C0 45 00 0C */	lfs f2, 0xc(r5)
/* 80050F00 0004DE40  D0 23 00 14 */	stfs f1, 0x14(r3)
/* 80050F04 0004DE44  C0 25 00 10 */	lfs f1, 0x10(r5)
/* 80050F08 0004DE48  D0 03 00 18 */	stfs f0, 0x18(r3)
/* 80050F0C 0004DE4C  C0 05 00 14 */	lfs f0, 0x14(r5)
/* 80050F10 0004DE50  D0 43 00 1C */	stfs f2, 0x1c(r3)
/* 80050F14 0004DE54  D0 23 00 20 */	stfs f1, 0x20(r3)
/* 80050F18 0004DE58  D0 03 00 24 */	stfs f0, 0x24(r3)
/* 80050F1C 0004DE5C  98 03 00 28 */	stb r0, 0x28(r3)
/* 80050F20 0004DE60  4E 80 00 20 */	blr 
.endfn setIndTexMtx__15J2DIndBlockFullFUl12J2DIndTexMtx

.fn getIndTexMtx__15J2DIndBlockFullFUl, weak
/* 80050F24 0004DE64  1C 84 00 1C */	mulli r4, r4, 0x1c
/* 80050F28 0004DE68  7C 60 1B 78 */	mr r0, r3
/* 80050F2C 0004DE6C  38 64 00 10 */	addi r3, r4, 0x10
/* 80050F30 0004DE70  7C 60 1A 14 */	add r3, r0, r3
/* 80050F34 0004DE74  4E 80 00 20 */	blr 
.endfn getIndTexMtx__15J2DIndBlockFullFUl

.fn setIndTexCoordScale__15J2DIndBlockFullFUl19J2DIndTexCoordScale, weak
/* 80050F38 0004DE78  54 80 08 3C */	slwi r0, r4, 1
/* 80050F3C 0004DE7C  88 85 00 00 */	lbz r4, 0(r5)
/* 80050F40 0004DE80  7C 63 02 14 */	add r3, r3, r0
/* 80050F44 0004DE84  88 05 00 01 */	lbz r0, 1(r5)
/* 80050F48 0004DE88  98 83 00 64 */	stb r4, 0x64(r3)
/* 80050F4C 0004DE8C  98 03 00 65 */	stb r0, 0x65(r3)
/* 80050F50 0004DE90  4E 80 00 20 */	blr 
.endfn setIndTexCoordScale__15J2DIndBlockFullFUl19J2DIndTexCoordScale

.fn getIndTexCoordScale__15J2DIndBlockFullFUl, weak
/* 80050F54 0004DE94  54 84 08 3C */	slwi r4, r4, 1
/* 80050F58 0004DE98  7C 60 1B 78 */	mr r0, r3
/* 80050F5C 0004DE9C  38 64 00 64 */	addi r3, r4, 0x64
/* 80050F60 0004DEA0  7C 60 1A 14 */	add r3, r0, r3
/* 80050F64 0004DEA4  4E 80 00 20 */	blr 
.endfn getIndTexCoordScale__15J2DIndBlockFullFUl

.fn __dt__15J2DIndBlockFullFv, weak
/* 80050F68 0004DEA8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80050F6C 0004DEAC  7C 08 02 A6 */	mflr r0
/* 80050F70 0004DEB0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80050F74 0004DEB4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80050F78 0004DEB8  7C 9F 23 78 */	mr r31, r4
/* 80050F7C 0004DEBC  93 C1 00 08 */	stw r30, 8(r1)
/* 80050F80 0004DEC0  7C 7E 1B 79 */	or. r30, r3, r3
/* 80050F84 0004DEC4  41 82 00 64 */	beq .L_80050FE8
/* 80050F88 0004DEC8  3C 60 80 4A */	lis r3, __vt__15J2DIndBlockFull@ha
/* 80050F8C 0004DECC  3C 80 80 05 */	lis r4, __dt__19J2DIndTexCoordScaleFv@ha
/* 80050F90 0004DED0  38 03 0C 78 */	addi r0, r3, __vt__15J2DIndBlockFull@l
/* 80050F94 0004DED4  38 A0 00 02 */	li r5, 2
/* 80050F98 0004DED8  90 1E 00 00 */	stw r0, 0(r30)
/* 80050F9C 0004DEDC  38 7E 00 64 */	addi r3, r30, 0x64
/* 80050FA0 0004DEE0  38 84 10 40 */	addi r4, r4, __dt__19J2DIndTexCoordScaleFv@l
/* 80050FA4 0004DEE4  38 C0 00 04 */	li r6, 4
/* 80050FA8 0004DEE8  48 07 08 1D */	bl __destroy_arr
/* 80050FAC 0004DEEC  3C 80 80 05 */	lis r4, __dt__12J2DIndTexMtxFv@ha
/* 80050FB0 0004DEF0  38 7E 00 10 */	addi r3, r30, 0x10
/* 80050FB4 0004DEF4  38 84 10 04 */	addi r4, r4, __dt__12J2DIndTexMtxFv@l
/* 80050FB8 0004DEF8  38 A0 00 1C */	li r5, 0x1c
/* 80050FBC 0004DEFC  38 C0 00 03 */	li r6, 3
/* 80050FC0 0004DF00  48 07 08 05 */	bl __destroy_arr
/* 80050FC4 0004DF04  28 1E 00 00 */	cmplwi r30, 0
/* 80050FC8 0004DF08  41 82 00 10 */	beq .L_80050FD8
/* 80050FCC 0004DF0C  3C 60 80 4A */	lis r3, __vt__11J2DIndBlock@ha
/* 80050FD0 0004DF10  38 03 0C B0 */	addi r0, r3, __vt__11J2DIndBlock@l
/* 80050FD4 0004DF14  90 1E 00 00 */	stw r0, 0(r30)
.L_80050FD8:
/* 80050FD8 0004DF18  7F E0 07 35 */	extsh. r0, r31
/* 80050FDC 0004DF1C  40 81 00 0C */	ble .L_80050FE8
/* 80050FE0 0004DF20  7F C3 F3 78 */	mr r3, r30
/* 80050FE4 0004DF24  4B FD 30 D1 */	bl __dl__FPv
.L_80050FE8:
/* 80050FE8 0004DF28  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80050FEC 0004DF2C  7F C3 F3 78 */	mr r3, r30
/* 80050FF0 0004DF30  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80050FF4 0004DF34  83 C1 00 08 */	lwz r30, 8(r1)
/* 80050FF8 0004DF38  7C 08 03 A6 */	mtlr r0
/* 80050FFC 0004DF3C  38 21 00 10 */	addi r1, r1, 0x10
/* 80051000 0004DF40  4E 80 00 20 */	blr 
.endfn __dt__15J2DIndBlockFullFv

.fn __dt__12J2DIndTexMtxFv, weak
/* 80051004 0004DF44  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80051008 0004DF48  7C 08 02 A6 */	mflr r0
/* 8005100C 0004DF4C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80051010 0004DF50  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80051014 0004DF54  7C 7F 1B 79 */	or. r31, r3, r3
/* 80051018 0004DF58  41 82 00 10 */	beq .L_80051028
/* 8005101C 0004DF5C  7C 80 07 35 */	extsh. r0, r4
/* 80051020 0004DF60  40 81 00 08 */	ble .L_80051028
/* 80051024 0004DF64  4B FD 30 91 */	bl __dl__FPv
.L_80051028:
/* 80051028 0004DF68  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8005102C 0004DF6C  7F E3 FB 78 */	mr r3, r31
/* 80051030 0004DF70  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80051034 0004DF74  7C 08 03 A6 */	mtlr r0
/* 80051038 0004DF78  38 21 00 10 */	addi r1, r1, 0x10
/* 8005103C 0004DF7C  4E 80 00 20 */	blr 
.endfn __dt__12J2DIndTexMtxFv

.fn __dt__19J2DIndTexCoordScaleFv, weak
/* 80051040 0004DF80  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80051044 0004DF84  7C 08 02 A6 */	mflr r0
/* 80051048 0004DF88  90 01 00 14 */	stw r0, 0x14(r1)
/* 8005104C 0004DF8C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80051050 0004DF90  7C 7F 1B 79 */	or. r31, r3, r3
/* 80051054 0004DF94  41 82 00 10 */	beq .L_80051064
/* 80051058 0004DF98  7C 80 07 35 */	extsh. r0, r4
/* 8005105C 0004DF9C  40 81 00 08 */	ble .L_80051064
/* 80051060 0004DFA0  4B FD 30 55 */	bl __dl__FPv
.L_80051064:
/* 80051064 0004DFA4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80051068 0004DFA8  7F E3 FB 78 */	mr r3, r31
/* 8005106C 0004DFAC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80051070 0004DFB0  7C 08 03 A6 */	mtlr r0
/* 80051074 0004DFB4  38 21 00 10 */	addi r1, r1, 0x10
/* 80051078 0004DFB8  4E 80 00 20 */	blr 
.endfn __dt__19J2DIndTexCoordScaleFv

.fn initialize__11J2DIndBlockFv, weak
/* 8005107C 0004DFBC  4E 80 00 20 */	blr 
.endfn initialize__11J2DIndBlockFv

.fn setGX__11J2DIndBlockFv, weak
/* 80051080 0004DFC0  4E 80 00 20 */	blr 
.endfn setGX__11J2DIndBlockFv

.fn setIndTexStageNum__11J2DIndBlockFUc, weak
/* 80051084 0004DFC4  4E 80 00 20 */	blr 
.endfn setIndTexStageNum__11J2DIndBlockFUc

.fn setIndTexOrder__11J2DIndBlockFUl14J2DIndTexOrder, weak
/* 80051088 0004DFC8  4E 80 00 20 */	blr 
.endfn setIndTexOrder__11J2DIndBlockFUl14J2DIndTexOrder

.fn getIndTexOrder__11J2DIndBlockFUl, weak
/* 8005108C 0004DFCC  38 60 00 00 */	li r3, 0
/* 80051090 0004DFD0  4E 80 00 20 */	blr 
.endfn getIndTexOrder__11J2DIndBlockFUl

.fn setIndTexMtx__11J2DIndBlockFUl12J2DIndTexMtx, weak
/* 80051094 0004DFD4  4E 80 00 20 */	blr 
.endfn setIndTexMtx__11J2DIndBlockFUl12J2DIndTexMtx

.fn getIndTexMtx__11J2DIndBlockFUl, weak
/* 80051098 0004DFD8  38 60 00 00 */	li r3, 0
/* 8005109C 0004DFDC  4E 80 00 20 */	blr 
.endfn getIndTexMtx__11J2DIndBlockFUl

.fn setIndTexCoordScale__11J2DIndBlockFUl19J2DIndTexCoordScale, weak
/* 800510A0 0004DFE0  4E 80 00 20 */	blr 
.endfn setIndTexCoordScale__11J2DIndBlockFUl19J2DIndTexCoordScale

.fn getIndTexCoordScale__11J2DIndBlockFUl, weak
/* 800510A4 0004DFE4  38 60 00 00 */	li r3, 0
/* 800510A8 0004DFE8  4E 80 00 20 */	blr 
.endfn getIndTexCoordScale__11J2DIndBlockFUl

.fn __dt__11J2DIndBlockFv, weak
/* 800510AC 0004DFEC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800510B0 0004DFF0  7C 08 02 A6 */	mflr r0
/* 800510B4 0004DFF4  90 01 00 14 */	stw r0, 0x14(r1)
/* 800510B8 0004DFF8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 800510BC 0004DFFC  7C 7F 1B 79 */	or. r31, r3, r3
/* 800510C0 0004E000  41 82 00 1C */	beq .L_800510DC
/* 800510C4 0004E004  3C A0 80 4A */	lis r5, __vt__11J2DIndBlock@ha
/* 800510C8 0004E008  7C 80 07 35 */	extsh. r0, r4
/* 800510CC 0004E00C  38 05 0C B0 */	addi r0, r5, __vt__11J2DIndBlock@l
/* 800510D0 0004E010  90 1F 00 00 */	stw r0, 0(r31)
/* 800510D4 0004E014  40 81 00 08 */	ble .L_800510DC
/* 800510D8 0004E018  4B FD 2F DD */	bl __dl__FPv
.L_800510DC:
/* 800510DC 0004E01C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800510E0 0004E020  7F E3 FB 78 */	mr r3, r31
/* 800510E4 0004E024  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 800510E8 0004E028  7C 08 03 A6 */	mtlr r0
/* 800510EC 0004E02C  38 21 00 10 */	addi r1, r1, 0x10
/* 800510F0 0004E030  4E 80 00 20 */	blr 
.endfn __dt__11J2DIndBlockFv

.fn getType__13J2DTevBlock16Fv, weak
/* 800510F4 0004E034  3C 60 54 56 */	lis r3, 0x54563136@ha
/* 800510F8 0004E038  38 63 31 36 */	addi r3, r3, 0x54563136@l
/* 800510FC 0004E03C  4E 80 00 20 */	blr 
.endfn getType__13J2DTevBlock16Fv

.fn getMaxStage__13J2DTevBlock16Fv, weak
/* 80051100 0004E040  38 60 00 10 */	li r3, 0x10
/* 80051104 0004E044  4E 80 00 20 */	blr 
.endfn getMaxStage__13J2DTevBlock16Fv

.fn setTexNo__13J2DTevBlock16FUlUs, weak
/* 80051108 0004E048  54 80 08 3C */	slwi r0, r4, 1
/* 8005110C 0004E04C  7C 63 02 14 */	add r3, r3, r0
/* 80051110 0004E050  B0 A3 00 04 */	sth r5, 4(r3)
/* 80051114 0004E054  4E 80 00 20 */	blr 
.endfn setTexNo__13J2DTevBlock16FUlUs

.fn getTexNo__13J2DTevBlock16CFUl, weak
/* 80051118 0004E058  54 80 08 3C */	slwi r0, r4, 1
/* 8005111C 0004E05C  7C 63 02 14 */	add r3, r3, r0
/* 80051120 0004E060  A0 63 00 04 */	lhz r3, 4(r3)
/* 80051124 0004E064  4E 80 00 20 */	blr 
.endfn getTexNo__13J2DTevBlock16CFUl

.fn setFontNo__13J2DTevBlock16FUs, weak
/* 80051128 0004E068  B0 83 00 14 */	sth r4, 0x14(r3)
/* 8005112C 0004E06C  4E 80 00 20 */	blr 
.endfn setFontNo__13J2DTevBlock16FUs

.fn getFontNo__13J2DTevBlock16CFv, weak
/* 80051130 0004E070  A0 63 00 14 */	lhz r3, 0x14(r3)
/* 80051134 0004E074  4E 80 00 20 */	blr 
.endfn getFontNo__13J2DTevBlock16CFv

.fn setTevOrder__13J2DTevBlock16FUl11J2DTevOrder, weak
/* 80051138 0004E078  54 84 10 3A */	slwi r4, r4, 2
/* 8005113C 0004E07C  88 05 00 00 */	lbz r0, 0(r5)
/* 80051140 0004E080  7C 83 22 14 */	add r4, r3, r4
/* 80051144 0004E084  88 65 00 01 */	lbz r3, 1(r5)
/* 80051148 0004E088  98 04 00 16 */	stb r0, 0x16(r4)
/* 8005114C 0004E08C  88 05 00 02 */	lbz r0, 2(r5)
/* 80051150 0004E090  98 64 00 17 */	stb r3, 0x17(r4)
/* 80051154 0004E094  98 04 00 18 */	stb r0, 0x18(r4)
/* 80051158 0004E098  4E 80 00 20 */	blr 
.endfn setTevOrder__13J2DTevBlock16FUl11J2DTevOrder

.fn getTevOrder__13J2DTevBlock16FUl, weak
/* 8005115C 0004E09C  54 84 10 3A */	slwi r4, r4, 2
/* 80051160 0004E0A0  7C 60 1B 78 */	mr r0, r3
/* 80051164 0004E0A4  38 64 00 16 */	addi r3, r4, 0x16
/* 80051168 0004E0A8  7C 60 1A 14 */	add r3, r0, r3
/* 8005116C 0004E0AC  4E 80 00 20 */	blr 
.endfn getTevOrder__13J2DTevBlock16FUl

.fn setTevColor__13J2DTevBlock16FUl13J2DGXColorS10, weak
/* 80051170 0004E0B0  54 80 18 38 */	slwi r0, r4, 3
/* 80051174 0004E0B4  A8 C5 00 00 */	lha r6, 0(r5)
/* 80051178 0004E0B8  7C 83 02 14 */	add r4, r3, r0
/* 8005117C 0004E0BC  A8 05 00 02 */	lha r0, 2(r5)
/* 80051180 0004E0C0  B0 C4 00 56 */	sth r6, 0x56(r4)
/* 80051184 0004E0C4  A8 65 00 04 */	lha r3, 4(r5)
/* 80051188 0004E0C8  B0 04 00 58 */	sth r0, 0x58(r4)
/* 8005118C 0004E0CC  A8 05 00 06 */	lha r0, 6(r5)
/* 80051190 0004E0D0  B0 64 00 5A */	sth r3, 0x5a(r4)
/* 80051194 0004E0D4  B0 04 00 5C */	sth r0, 0x5c(r4)
/* 80051198 0004E0D8  4E 80 00 20 */	blr 
.endfn setTevColor__13J2DTevBlock16FUl13J2DGXColorS10

.fn getTevColor__13J2DTevBlock16FUl, weak
/* 8005119C 0004E0DC  54 84 18 38 */	slwi r4, r4, 3
/* 800511A0 0004E0E0  7C 60 1B 78 */	mr r0, r3
/* 800511A4 0004E0E4  38 64 00 56 */	addi r3, r4, 0x56
/* 800511A8 0004E0E8  7C 60 1A 14 */	add r3, r0, r3
/* 800511AC 0004E0EC  4E 80 00 20 */	blr 
.endfn getTevColor__13J2DTevBlock16FUl

.fn setTevKColor__13J2DTevBlock16FUlQ28JUtility6TColor, weak
/* 800511B0 0004E0F0  54 80 10 3A */	slwi r0, r4, 2
/* 800511B4 0004E0F4  88 C5 00 00 */	lbz r6, 0(r5)
/* 800511B8 0004E0F8  7C 83 02 14 */	add r4, r3, r0
/* 800511BC 0004E0FC  88 05 00 01 */	lbz r0, 1(r5)
/* 800511C0 0004E100  98 C4 00 F8 */	stb r6, 0xf8(r4)
/* 800511C4 0004E104  88 65 00 02 */	lbz r3, 2(r5)
/* 800511C8 0004E108  98 04 00 F9 */	stb r0, 0xf9(r4)
/* 800511CC 0004E10C  88 05 00 03 */	lbz r0, 3(r5)
/* 800511D0 0004E110  98 64 00 FA */	stb r3, 0xfa(r4)
/* 800511D4 0004E114  98 04 00 FB */	stb r0, 0xfb(r4)
/* 800511D8 0004E118  4E 80 00 20 */	blr 
.endfn setTevKColor__13J2DTevBlock16FUlQ28JUtility6TColor

.fn getTevKColor__13J2DTevBlock16FUl, weak
/* 800511DC 0004E11C  54 84 10 3A */	slwi r4, r4, 2
/* 800511E0 0004E120  7C 60 1B 78 */	mr r0, r3
/* 800511E4 0004E124  38 64 00 F8 */	addi r3, r4, 0xf8
/* 800511E8 0004E128  7C 60 1A 14 */	add r3, r0, r3
/* 800511EC 0004E12C  4E 80 00 20 */	blr 
.endfn getTevKColor__13J2DTevBlock16FUl

.fn setTevKColorSel__13J2DTevBlock16FUlUc, weak
/* 800511F0 0004E130  7C 63 22 14 */	add r3, r3, r4
/* 800511F4 0004E134  98 A3 01 08 */	stb r5, 0x108(r3)
/* 800511F8 0004E138  4E 80 00 20 */	blr 
.endfn setTevKColorSel__13J2DTevBlock16FUlUc

.fn getTevKColorSel__13J2DTevBlock16FUl, weak
/* 800511FC 0004E13C  7C 63 22 14 */	add r3, r3, r4
/* 80051200 0004E140  88 63 01 08 */	lbz r3, 0x108(r3)
/* 80051204 0004E144  4E 80 00 20 */	blr 
.endfn getTevKColorSel__13J2DTevBlock16FUl

.fn setTevKAlphaSel__13J2DTevBlock16FUlUc, weak
/* 80051208 0004E148  7C 63 22 14 */	add r3, r3, r4
/* 8005120C 0004E14C  98 A3 01 18 */	stb r5, 0x118(r3)
/* 80051210 0004E150  4E 80 00 20 */	blr 
.endfn setTevKAlphaSel__13J2DTevBlock16FUlUc

.fn getTevKAlphaSel__13J2DTevBlock16FUl, weak
/* 80051214 0004E154  7C 63 22 14 */	add r3, r3, r4
/* 80051218 0004E158  88 63 01 18 */	lbz r3, 0x118(r3)
/* 8005121C 0004E15C  4E 80 00 20 */	blr 
.endfn getTevKAlphaSel__13J2DTevBlock16FUl

.fn setTevStageNum__13J2DTevBlock16FUc, weak
/* 80051220 0004E160  98 83 00 76 */	stb r4, 0x76(r3)
/* 80051224 0004E164  4E 80 00 20 */	blr 
.endfn setTevStageNum__13J2DTevBlock16FUc

.fn getTevStageNum__13J2DTevBlock16CFv, weak
/* 80051228 0004E168  88 63 00 76 */	lbz r3, 0x76(r3)
/* 8005122C 0004E16C  4E 80 00 20 */	blr 
.endfn getTevStageNum__13J2DTevBlock16CFv

.fn setTevStage__13J2DTevBlock16FUl11J2DTevStage, weak
/* 80051230 0004E170  54 80 18 38 */	slwi r0, r4, 3
/* 80051234 0004E174  88 C5 00 01 */	lbz r6, 1(r5)
/* 80051238 0004E178  7C 83 02 14 */	add r4, r3, r0
/* 8005123C 0004E17C  88 05 00 02 */	lbz r0, 2(r5)
/* 80051240 0004E180  98 C4 00 78 */	stb r6, 0x78(r4)
/* 80051244 0004E184  88 65 00 03 */	lbz r3, 3(r5)
/* 80051248 0004E188  98 04 00 79 */	stb r0, 0x79(r4)
/* 8005124C 0004E18C  88 05 00 05 */	lbz r0, 5(r5)
/* 80051250 0004E190  98 64 00 7A */	stb r3, 0x7a(r4)
/* 80051254 0004E194  88 65 00 06 */	lbz r3, 6(r5)
/* 80051258 0004E198  98 04 00 7C */	stb r0, 0x7c(r4)
/* 8005125C 0004E19C  88 05 00 07 */	lbz r0, 7(r5)
/* 80051260 0004E1A0  98 64 00 7D */	stb r3, 0x7d(r4)
/* 80051264 0004E1A4  98 04 00 7E */	stb r0, 0x7e(r4)
/* 80051268 0004E1A8  4E 80 00 20 */	blr 
.endfn setTevStage__13J2DTevBlock16FUl11J2DTevStage

.fn getTevStage__13J2DTevBlock16FUl, weak
/* 8005126C 0004E1AC  54 84 18 38 */	slwi r4, r4, 3
/* 80051270 0004E1B0  7C 60 1B 78 */	mr r0, r3
/* 80051274 0004E1B4  38 64 00 77 */	addi r3, r4, 0x77
/* 80051278 0004E1B8  7C 60 1A 14 */	add r3, r0, r3
/* 8005127C 0004E1BC  4E 80 00 20 */	blr 
.endfn getTevStage__13J2DTevBlock16FUl

.fn setTevSwapModeInfo__13J2DTevBlock16FUl18J2DTevSwapModeInfo, weak
/* 80051280 0004E1C0  54 80 18 38 */	slwi r0, r4, 3
/* 80051284 0004E1C4  88 85 00 01 */	lbz r4, 1(r5)
/* 80051288 0004E1C8  7C C3 02 14 */	add r6, r3, r0
/* 8005128C 0004E1CC  88 05 00 00 */	lbz r0, 0(r5)
/* 80051290 0004E1D0  88 A6 00 7E */	lbz r5, 0x7e(r6)
/* 80051294 0004E1D4  54 83 10 3A */	slwi r3, r4, 2
/* 80051298 0004E1D8  54 A4 07 B6 */	rlwinm r4, r5, 0, 0x1e, 0x1b
/* 8005129C 0004E1DC  7C 83 1B 78 */	or r3, r4, r3
/* 800512A0 0004E1E0  98 66 00 7E */	stb r3, 0x7e(r6)
/* 800512A4 0004E1E4  88 66 00 7E */	lbz r3, 0x7e(r6)
/* 800512A8 0004E1E8  54 63 00 3A */	rlwinm r3, r3, 0, 0, 0x1d
/* 800512AC 0004E1EC  7C 60 03 78 */	or r0, r3, r0
/* 800512B0 0004E1F0  98 06 00 7E */	stb r0, 0x7e(r6)
/* 800512B4 0004E1F4  4E 80 00 20 */	blr 
.endfn setTevSwapModeInfo__13J2DTevBlock16FUl18J2DTevSwapModeInfo

.fn setTevSwapModeTable__13J2DTevBlock16FUl19J2DTevSwapModeTable, weak
/* 800512B8 0004E1F8  88 05 00 00 */	lbz r0, 0(r5)
/* 800512BC 0004E1FC  7C 63 22 14 */	add r3, r3, r4
/* 800512C0 0004E200  98 03 01 28 */	stb r0, 0x128(r3)
/* 800512C4 0004E204  4E 80 00 20 */	blr 
.endfn setTevSwapModeTable__13J2DTevBlock16FUl19J2DTevSwapModeTable

.fn getTevSwapModeTable__13J2DTevBlock16FUl, weak
/* 800512C8 0004E208  7C 60 1B 78 */	mr r0, r3
/* 800512CC 0004E20C  38 64 01 28 */	addi r3, r4, 0x128
/* 800512D0 0004E210  7C 60 1A 14 */	add r3, r0, r3
/* 800512D4 0004E214  4E 80 00 20 */	blr 
.endfn getTevSwapModeTable__13J2DTevBlock16FUl

.fn setIndTevStage__13J2DTevBlock16FUl14J2DIndTevStage, weak
/* 800512D8 0004E218  54 80 10 3A */	slwi r0, r4, 2
/* 800512DC 0004E21C  80 85 00 00 */	lwz r4, 0(r5)
/* 800512E0 0004E220  7C 63 02 14 */	add r3, r3, r0
/* 800512E4 0004E224  90 83 01 2C */	stw r4, 0x12c(r3)
/* 800512E8 0004E228  4E 80 00 20 */	blr 
.endfn setIndTevStage__13J2DTevBlock16FUl14J2DIndTevStage

.fn getIndTevStage__13J2DTevBlock16FUl, weak
/* 800512EC 0004E22C  54 84 10 3A */	slwi r4, r4, 2
/* 800512F0 0004E230  7C 60 1B 78 */	mr r0, r3
/* 800512F4 0004E234  38 64 01 2C */	addi r3, r4, 0x12c
/* 800512F8 0004E238  7C 60 1A 14 */	add r3, r0, r3
/* 800512FC 0004E23C  4E 80 00 20 */	blr 
.endfn getIndTevStage__13J2DTevBlock16FUl

.fn insertTexture__13J2DTevBlock16FUlPC7ResTIMG, weak
/* 80051300 0004E240  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80051304 0004E244  7C 08 02 A6 */	mflr r0
/* 80051308 0004E248  38 C0 00 00 */	li r6, 0
/* 8005130C 0004E24C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80051310 0004E250  81 83 00 00 */	lwz r12, 0(r3)
/* 80051314 0004E254  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 80051318 0004E258  7D 89 03 A6 */	mtctr r12
/* 8005131C 0004E25C  4E 80 04 21 */	bctrl 
/* 80051320 0004E260  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80051324 0004E264  7C 08 03 A6 */	mtlr r0
/* 80051328 0004E268  38 21 00 10 */	addi r1, r1, 0x10
/* 8005132C 0004E26C  4E 80 00 20 */	blr 
.endfn insertTexture__13J2DTevBlock16FUlPC7ResTIMG

.fn getTexture__13J2DTevBlock16FUl, weak
/* 80051330 0004E270  28 04 00 08 */	cmplwi r4, 8
/* 80051334 0004E274  41 80 00 0C */	blt .L_80051340
/* 80051338 0004E278  38 60 00 00 */	li r3, 0
/* 8005133C 0004E27C  4E 80 00 20 */	blr 
.L_80051340:
/* 80051340 0004E280  54 80 10 3A */	slwi r0, r4, 2
/* 80051344 0004E284  7C 63 02 14 */	add r3, r3, r0
/* 80051348 0004E288  80 63 01 6C */	lwz r3, 0x16c(r3)
/* 8005134C 0004E28C  4E 80 00 20 */	blr 
.endfn getTexture__13J2DTevBlock16FUl

.fn getPalette__13J2DTevBlock16FUl, weak
/* 80051350 0004E290  28 04 00 08 */	cmplwi r4, 8
/* 80051354 0004E294  41 80 00 0C */	blt .L_80051360
/* 80051358 0004E298  38 60 00 00 */	li r3, 0
/* 8005135C 0004E29C  4E 80 00 20 */	blr 
.L_80051360:
/* 80051360 0004E2A0  54 80 10 3A */	slwi r0, r4, 2
/* 80051364 0004E2A4  7C 63 02 14 */	add r3, r3, r0
/* 80051368 0004E2A8  80 63 01 8C */	lwz r3, 0x18c(r3)
/* 8005136C 0004E2AC  4E 80 00 20 */	blr 
.endfn getPalette__13J2DTevBlock16FUl

.fn getFont__13J2DTevBlock16Fv, weak
/* 80051370 0004E2B0  80 63 01 AC */	lwz r3, 0x1ac(r3)
/* 80051374 0004E2B4  4E 80 00 20 */	blr 
.endfn getFont__13J2DTevBlock16Fv

.fn setUndeleteFlag__13J2DTevBlock16FUc, weak
/* 80051378 0004E2B8  88 03 01 B0 */	lbz r0, 0x1b0(r3)
/* 8005137C 0004E2BC  7C 00 20 38 */	and r0, r0, r4
/* 80051380 0004E2C0  98 03 01 B0 */	stb r0, 0x1b0(r3)
/* 80051384 0004E2C4  4E 80 00 20 */	blr 
.endfn setUndeleteFlag__13J2DTevBlock16FUc

.fn setFontUndeleteFlag__13J2DTevBlock16Fv, weak
/* 80051388 0004E2C8  38 00 00 00 */	li r0, 0
/* 8005138C 0004E2CC  98 03 01 B1 */	stb r0, 0x1b1(r3)
/* 80051390 0004E2D0  4E 80 00 20 */	blr 
.endfn setFontUndeleteFlag__13J2DTevBlock16Fv

.fn getType__12J2DTevBlock8Fv, weak
/* 80051394 0004E2D4  3C 60 54 56 */	lis r3, 0x54564238@ha
/* 80051398 0004E2D8  38 63 42 38 */	addi r3, r3, 0x54564238@l
/* 8005139C 0004E2DC  4E 80 00 20 */	blr 
.endfn getType__12J2DTevBlock8Fv

.fn getMaxStage__12J2DTevBlock8Fv, weak
/* 800513A0 0004E2E0  38 60 00 08 */	li r3, 8
/* 800513A4 0004E2E4  4E 80 00 20 */	blr 
.endfn getMaxStage__12J2DTevBlock8Fv

.fn setTexNo__12J2DTevBlock8FUlUs, weak
/* 800513A8 0004E2E8  54 80 08 3C */	slwi r0, r4, 1
/* 800513AC 0004E2EC  7C 63 02 14 */	add r3, r3, r0
/* 800513B0 0004E2F0  B0 A3 00 04 */	sth r5, 4(r3)
/* 800513B4 0004E2F4  4E 80 00 20 */	blr 
.endfn setTexNo__12J2DTevBlock8FUlUs

.fn getTexNo__12J2DTevBlock8CFUl, weak
/* 800513B8 0004E2F8  54 80 08 3C */	slwi r0, r4, 1
/* 800513BC 0004E2FC  7C 63 02 14 */	add r3, r3, r0
/* 800513C0 0004E300  A0 63 00 04 */	lhz r3, 4(r3)
/* 800513C4 0004E304  4E 80 00 20 */	blr 
.endfn getTexNo__12J2DTevBlock8CFUl

.fn setFontNo__12J2DTevBlock8FUs, weak
/* 800513C8 0004E308  B0 83 00 14 */	sth r4, 0x14(r3)
/* 800513CC 0004E30C  4E 80 00 20 */	blr 
.endfn setFontNo__12J2DTevBlock8FUs

.fn getFontNo__12J2DTevBlock8CFv, weak
/* 800513D0 0004E310  A0 63 00 14 */	lhz r3, 0x14(r3)
/* 800513D4 0004E314  4E 80 00 20 */	blr 
.endfn getFontNo__12J2DTevBlock8CFv

.fn setTevOrder__12J2DTevBlock8FUl11J2DTevOrder, weak
/* 800513D8 0004E318  54 84 10 3A */	slwi r4, r4, 2
/* 800513DC 0004E31C  88 05 00 00 */	lbz r0, 0(r5)
/* 800513E0 0004E320  7C 83 22 14 */	add r4, r3, r4
/* 800513E4 0004E324  88 65 00 01 */	lbz r3, 1(r5)
/* 800513E8 0004E328  98 04 00 16 */	stb r0, 0x16(r4)
/* 800513EC 0004E32C  88 05 00 02 */	lbz r0, 2(r5)
/* 800513F0 0004E330  98 64 00 17 */	stb r3, 0x17(r4)
/* 800513F4 0004E334  98 04 00 18 */	stb r0, 0x18(r4)
/* 800513F8 0004E338  4E 80 00 20 */	blr 
.endfn setTevOrder__12J2DTevBlock8FUl11J2DTevOrder

.fn getTevOrder__12J2DTevBlock8FUl, weak
/* 800513FC 0004E33C  54 84 10 3A */	slwi r4, r4, 2
/* 80051400 0004E340  7C 60 1B 78 */	mr r0, r3
/* 80051404 0004E344  38 64 00 16 */	addi r3, r4, 0x16
/* 80051408 0004E348  7C 60 1A 14 */	add r3, r0, r3
/* 8005140C 0004E34C  4E 80 00 20 */	blr 
.endfn getTevOrder__12J2DTevBlock8FUl

.fn setTevColor__12J2DTevBlock8FUl13J2DGXColorS10, weak
/* 80051410 0004E350  54 80 18 38 */	slwi r0, r4, 3
/* 80051414 0004E354  A8 C5 00 00 */	lha r6, 0(r5)
/* 80051418 0004E358  7C 83 02 14 */	add r4, r3, r0
/* 8005141C 0004E35C  A8 05 00 02 */	lha r0, 2(r5)
/* 80051420 0004E360  B0 C4 00 36 */	sth r6, 0x36(r4)
/* 80051424 0004E364  A8 65 00 04 */	lha r3, 4(r5)
/* 80051428 0004E368  B0 04 00 38 */	sth r0, 0x38(r4)
/* 8005142C 0004E36C  A8 05 00 06 */	lha r0, 6(r5)
/* 80051430 0004E370  B0 64 00 3A */	sth r3, 0x3a(r4)
/* 80051434 0004E374  B0 04 00 3C */	sth r0, 0x3c(r4)
/* 80051438 0004E378  4E 80 00 20 */	blr 
.endfn setTevColor__12J2DTevBlock8FUl13J2DGXColorS10

.fn getTevColor__12J2DTevBlock8FUl, weak
/* 8005143C 0004E37C  54 84 18 38 */	slwi r4, r4, 3
/* 80051440 0004E380  7C 60 1B 78 */	mr r0, r3
/* 80051444 0004E384  38 64 00 36 */	addi r3, r4, 0x36
/* 80051448 0004E388  7C 60 1A 14 */	add r3, r0, r3
/* 8005144C 0004E38C  4E 80 00 20 */	blr 
.endfn getTevColor__12J2DTevBlock8FUl

.fn setTevKColor__12J2DTevBlock8FUlQ28JUtility6TColor, weak
/* 80051450 0004E390  54 80 10 3A */	slwi r0, r4, 2
/* 80051454 0004E394  88 C5 00 00 */	lbz r6, 0(r5)
/* 80051458 0004E398  7C 83 02 14 */	add r4, r3, r0
/* 8005145C 0004E39C  88 05 00 01 */	lbz r0, 1(r5)
/* 80051460 0004E3A0  98 C4 00 98 */	stb r6, 0x98(r4)
/* 80051464 0004E3A4  88 65 00 02 */	lbz r3, 2(r5)
/* 80051468 0004E3A8  98 04 00 99 */	stb r0, 0x99(r4)
/* 8005146C 0004E3AC  88 05 00 03 */	lbz r0, 3(r5)
/* 80051470 0004E3B0  98 64 00 9A */	stb r3, 0x9a(r4)
/* 80051474 0004E3B4  98 04 00 9B */	stb r0, 0x9b(r4)
/* 80051478 0004E3B8  4E 80 00 20 */	blr 
.endfn setTevKColor__12J2DTevBlock8FUlQ28JUtility6TColor

.fn getTevKColor__12J2DTevBlock8FUl, weak
/* 8005147C 0004E3BC  54 84 10 3A */	slwi r4, r4, 2
/* 80051480 0004E3C0  7C 60 1B 78 */	mr r0, r3
/* 80051484 0004E3C4  38 64 00 98 */	addi r3, r4, 0x98
/* 80051488 0004E3C8  7C 60 1A 14 */	add r3, r0, r3
/* 8005148C 0004E3CC  4E 80 00 20 */	blr 
.endfn getTevKColor__12J2DTevBlock8FUl

.fn setTevKColorSel__12J2DTevBlock8FUlUc, weak
/* 80051490 0004E3D0  7C 63 22 14 */	add r3, r3, r4
/* 80051494 0004E3D4  98 A3 00 A8 */	stb r5, 0xa8(r3)
/* 80051498 0004E3D8  4E 80 00 20 */	blr 
.endfn setTevKColorSel__12J2DTevBlock8FUlUc

.fn getTevKColorSel__12J2DTevBlock8FUl, weak
/* 8005149C 0004E3DC  7C 63 22 14 */	add r3, r3, r4
/* 800514A0 0004E3E0  88 63 00 A8 */	lbz r3, 0xa8(r3)
/* 800514A4 0004E3E4  4E 80 00 20 */	blr 
.endfn getTevKColorSel__12J2DTevBlock8FUl

.fn setTevKAlphaSel__12J2DTevBlock8FUlUc, weak
/* 800514A8 0004E3E8  7C 63 22 14 */	add r3, r3, r4
/* 800514AC 0004E3EC  98 A3 00 B0 */	stb r5, 0xb0(r3)
/* 800514B0 0004E3F0  4E 80 00 20 */	blr 
.endfn setTevKAlphaSel__12J2DTevBlock8FUlUc

.fn getTevKAlphaSel__12J2DTevBlock8FUl, weak
/* 800514B4 0004E3F4  7C 63 22 14 */	add r3, r3, r4
/* 800514B8 0004E3F8  88 63 00 B0 */	lbz r3, 0xb0(r3)
/* 800514BC 0004E3FC  4E 80 00 20 */	blr 
.endfn getTevKAlphaSel__12J2DTevBlock8FUl

.fn setTevStageNum__12J2DTevBlock8FUc, weak
/* 800514C0 0004E400  98 83 00 56 */	stb r4, 0x56(r3)
/* 800514C4 0004E404  4E 80 00 20 */	blr 
.endfn setTevStageNum__12J2DTevBlock8FUc

.fn getTevStageNum__12J2DTevBlock8CFv, weak
/* 800514C8 0004E408  88 63 00 56 */	lbz r3, 0x56(r3)
/* 800514CC 0004E40C  4E 80 00 20 */	blr 
.endfn getTevStageNum__12J2DTevBlock8CFv

.fn setTevStage__12J2DTevBlock8FUl11J2DTevStage, weak
/* 800514D0 0004E410  54 80 18 38 */	slwi r0, r4, 3
/* 800514D4 0004E414  88 C5 00 01 */	lbz r6, 1(r5)
/* 800514D8 0004E418  7C 83 02 14 */	add r4, r3, r0
/* 800514DC 0004E41C  88 05 00 02 */	lbz r0, 2(r5)
/* 800514E0 0004E420  98 C4 00 58 */	stb r6, 0x58(r4)
/* 800514E4 0004E424  88 65 00 03 */	lbz r3, 3(r5)
/* 800514E8 0004E428  98 04 00 59 */	stb r0, 0x59(r4)
/* 800514EC 0004E42C  88 05 00 05 */	lbz r0, 5(r5)
/* 800514F0 0004E430  98 64 00 5A */	stb r3, 0x5a(r4)
/* 800514F4 0004E434  88 65 00 06 */	lbz r3, 6(r5)
/* 800514F8 0004E438  98 04 00 5C */	stb r0, 0x5c(r4)
/* 800514FC 0004E43C  88 05 00 07 */	lbz r0, 7(r5)
/* 80051500 0004E440  98 64 00 5D */	stb r3, 0x5d(r4)
/* 80051504 0004E444  98 04 00 5E */	stb r0, 0x5e(r4)
/* 80051508 0004E448  4E 80 00 20 */	blr 
.endfn setTevStage__12J2DTevBlock8FUl11J2DTevStage

.fn getTevStage__12J2DTevBlock8FUl, weak
/* 8005150C 0004E44C  54 84 18 38 */	slwi r4, r4, 3
/* 80051510 0004E450  7C 60 1B 78 */	mr r0, r3
/* 80051514 0004E454  38 64 00 57 */	addi r3, r4, 0x57
/* 80051518 0004E458  7C 60 1A 14 */	add r3, r0, r3
/* 8005151C 0004E45C  4E 80 00 20 */	blr 
.endfn getTevStage__12J2DTevBlock8FUl

.fn setTevSwapModeInfo__12J2DTevBlock8FUl18J2DTevSwapModeInfo, weak
/* 80051520 0004E460  54 80 18 38 */	slwi r0, r4, 3
/* 80051524 0004E464  88 85 00 01 */	lbz r4, 1(r5)
/* 80051528 0004E468  7C C3 02 14 */	add r6, r3, r0
/* 8005152C 0004E46C  88 05 00 00 */	lbz r0, 0(r5)
/* 80051530 0004E470  88 A6 00 5E */	lbz r5, 0x5e(r6)
/* 80051534 0004E474  54 83 10 3A */	slwi r3, r4, 2
/* 80051538 0004E478  54 A4 07 B6 */	rlwinm r4, r5, 0, 0x1e, 0x1b
/* 8005153C 0004E47C  7C 83 1B 78 */	or r3, r4, r3
/* 80051540 0004E480  98 66 00 5E */	stb r3, 0x5e(r6)
/* 80051544 0004E484  88 66 00 5E */	lbz r3, 0x5e(r6)
/* 80051548 0004E488  54 63 00 3A */	rlwinm r3, r3, 0, 0, 0x1d
/* 8005154C 0004E48C  7C 60 03 78 */	or r0, r3, r0
/* 80051550 0004E490  98 06 00 5E */	stb r0, 0x5e(r6)
/* 80051554 0004E494  4E 80 00 20 */	blr 
.endfn setTevSwapModeInfo__12J2DTevBlock8FUl18J2DTevSwapModeInfo

.fn setTevSwapModeTable__12J2DTevBlock8FUl19J2DTevSwapModeTable, weak
/* 80051558 0004E498  88 05 00 00 */	lbz r0, 0(r5)
/* 8005155C 0004E49C  7C 63 22 14 */	add r3, r3, r4
/* 80051560 0004E4A0  98 03 00 B8 */	stb r0, 0xb8(r3)
/* 80051564 0004E4A4  4E 80 00 20 */	blr 
.endfn setTevSwapModeTable__12J2DTevBlock8FUl19J2DTevSwapModeTable

.fn getTevSwapModeTable__12J2DTevBlock8FUl, weak
/* 80051568 0004E4A8  7C 60 1B 78 */	mr r0, r3
/* 8005156C 0004E4AC  38 64 00 B8 */	addi r3, r4, 0xb8
/* 80051570 0004E4B0  7C 60 1A 14 */	add r3, r0, r3
/* 80051574 0004E4B4  4E 80 00 20 */	blr 
.endfn getTevSwapModeTable__12J2DTevBlock8FUl

.fn setIndTevStage__12J2DTevBlock8FUl14J2DIndTevStage, weak
/* 80051578 0004E4B8  54 80 10 3A */	slwi r0, r4, 2
/* 8005157C 0004E4BC  80 85 00 00 */	lwz r4, 0(r5)
/* 80051580 0004E4C0  7C 63 02 14 */	add r3, r3, r0
/* 80051584 0004E4C4  90 83 00 BC */	stw r4, 0xbc(r3)
/* 80051588 0004E4C8  4E 80 00 20 */	blr 
.endfn setIndTevStage__12J2DTevBlock8FUl14J2DIndTevStage

.fn getIndTevStage__12J2DTevBlock8FUl, weak
/* 8005158C 0004E4CC  54 84 10 3A */	slwi r4, r4, 2
/* 80051590 0004E4D0  7C 60 1B 78 */	mr r0, r3
/* 80051594 0004E4D4  38 64 00 BC */	addi r3, r4, 0xbc
/* 80051598 0004E4D8  7C 60 1A 14 */	add r3, r0, r3
/* 8005159C 0004E4DC  4E 80 00 20 */	blr 
.endfn getIndTevStage__12J2DTevBlock8FUl

.fn insertTexture__12J2DTevBlock8FUlPC7ResTIMG, weak
/* 800515A0 0004E4E0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800515A4 0004E4E4  7C 08 02 A6 */	mflr r0
/* 800515A8 0004E4E8  38 C0 00 00 */	li r6, 0
/* 800515AC 0004E4EC  90 01 00 14 */	stw r0, 0x14(r1)
/* 800515B0 0004E4F0  81 83 00 00 */	lwz r12, 0(r3)
/* 800515B4 0004E4F4  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 800515B8 0004E4F8  7D 89 03 A6 */	mtctr r12
/* 800515BC 0004E4FC  4E 80 04 21 */	bctrl 
/* 800515C0 0004E500  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800515C4 0004E504  7C 08 03 A6 */	mtlr r0
/* 800515C8 0004E508  38 21 00 10 */	addi r1, r1, 0x10
/* 800515CC 0004E50C  4E 80 00 20 */	blr 
.endfn insertTexture__12J2DTevBlock8FUlPC7ResTIMG

.fn getTexture__12J2DTevBlock8FUl, weak
/* 800515D0 0004E510  28 04 00 08 */	cmplwi r4, 8
/* 800515D4 0004E514  41 80 00 0C */	blt .L_800515E0
/* 800515D8 0004E518  38 60 00 00 */	li r3, 0
/* 800515DC 0004E51C  4E 80 00 20 */	blr 
.L_800515E0:
/* 800515E0 0004E520  54 80 10 3A */	slwi r0, r4, 2
/* 800515E4 0004E524  7C 63 02 14 */	add r3, r3, r0
/* 800515E8 0004E528  80 63 00 DC */	lwz r3, 0xdc(r3)
/* 800515EC 0004E52C  4E 80 00 20 */	blr 
.endfn getTexture__12J2DTevBlock8FUl

.fn getPalette__12J2DTevBlock8FUl, weak
/* 800515F0 0004E530  28 04 00 08 */	cmplwi r4, 8
/* 800515F4 0004E534  41 80 00 0C */	blt .L_80051600
/* 800515F8 0004E538  38 60 00 00 */	li r3, 0
/* 800515FC 0004E53C  4E 80 00 20 */	blr 
.L_80051600:
/* 80051600 0004E540  54 80 10 3A */	slwi r0, r4, 2
/* 80051604 0004E544  7C 63 02 14 */	add r3, r3, r0
/* 80051608 0004E548  80 63 00 FC */	lwz r3, 0xfc(r3)
/* 8005160C 0004E54C  4E 80 00 20 */	blr 
.endfn getPalette__12J2DTevBlock8FUl

.fn getFont__12J2DTevBlock8Fv, weak
/* 80051610 0004E550  80 63 01 1C */	lwz r3, 0x11c(r3)
/* 80051614 0004E554  4E 80 00 20 */	blr 
.endfn getFont__12J2DTevBlock8Fv

.fn setUndeleteFlag__12J2DTevBlock8FUc, weak
/* 80051618 0004E558  88 03 01 20 */	lbz r0, 0x120(r3)
/* 8005161C 0004E55C  7C 00 20 38 */	and r0, r0, r4
/* 80051620 0004E560  98 03 01 20 */	stb r0, 0x120(r3)
/* 80051624 0004E564  4E 80 00 20 */	blr 
.endfn setUndeleteFlag__12J2DTevBlock8FUc

.fn setFontUndeleteFlag__12J2DTevBlock8Fv, weak
/* 80051628 0004E568  38 00 00 00 */	li r0, 0
/* 8005162C 0004E56C  98 03 01 21 */	stb r0, 0x121(r3)
/* 80051630 0004E570  4E 80 00 20 */	blr 
.endfn setFontUndeleteFlag__12J2DTevBlock8Fv

.fn getType__12J2DTevBlock4Fv, weak
/* 80051634 0004E574  3C 60 54 56 */	lis r3, 0x54564234@ha
/* 80051638 0004E578  38 63 42 34 */	addi r3, r3, 0x54564234@l
/* 8005163C 0004E57C  4E 80 00 20 */	blr 
.endfn getType__12J2DTevBlock4Fv

.fn getMaxStage__12J2DTevBlock4Fv, weak
/* 80051640 0004E580  38 60 00 04 */	li r3, 4
/* 80051644 0004E584  4E 80 00 20 */	blr 
.endfn getMaxStage__12J2DTevBlock4Fv

.fn setTexNo__12J2DTevBlock4FUlUs, weak
/* 80051648 0004E588  54 80 08 3C */	slwi r0, r4, 1
/* 8005164C 0004E58C  7C 63 02 14 */	add r3, r3, r0
/* 80051650 0004E590  B0 A3 00 04 */	sth r5, 4(r3)
/* 80051654 0004E594  4E 80 00 20 */	blr 
.endfn setTexNo__12J2DTevBlock4FUlUs

.fn getTexNo__12J2DTevBlock4CFUl, weak
/* 80051658 0004E598  54 80 08 3C */	slwi r0, r4, 1
/* 8005165C 0004E59C  7C 63 02 14 */	add r3, r3, r0
/* 80051660 0004E5A0  A0 63 00 04 */	lhz r3, 4(r3)
/* 80051664 0004E5A4  4E 80 00 20 */	blr 
.endfn getTexNo__12J2DTevBlock4CFUl

.fn setFontNo__12J2DTevBlock4FUs, weak
/* 80051668 0004E5A8  B0 83 00 0C */	sth r4, 0xc(r3)
/* 8005166C 0004E5AC  4E 80 00 20 */	blr 
.endfn setFontNo__12J2DTevBlock4FUs

.fn getFontNo__12J2DTevBlock4CFv, weak
/* 80051670 0004E5B0  A0 63 00 0C */	lhz r3, 0xc(r3)
/* 80051674 0004E5B4  4E 80 00 20 */	blr 
.endfn getFontNo__12J2DTevBlock4CFv

.fn setTevOrder__12J2DTevBlock4FUl11J2DTevOrder, weak
/* 80051678 0004E5B8  54 84 10 3A */	slwi r4, r4, 2
/* 8005167C 0004E5BC  88 05 00 00 */	lbz r0, 0(r5)
/* 80051680 0004E5C0  7C 83 22 14 */	add r4, r3, r4
/* 80051684 0004E5C4  88 65 00 01 */	lbz r3, 1(r5)
/* 80051688 0004E5C8  98 04 00 0E */	stb r0, 0xe(r4)
/* 8005168C 0004E5CC  88 05 00 02 */	lbz r0, 2(r5)
/* 80051690 0004E5D0  98 64 00 0F */	stb r3, 0xf(r4)
/* 80051694 0004E5D4  98 04 00 10 */	stb r0, 0x10(r4)
/* 80051698 0004E5D8  4E 80 00 20 */	blr 
.endfn setTevOrder__12J2DTevBlock4FUl11J2DTevOrder

.fn getTevOrder__12J2DTevBlock4FUl, weak
/* 8005169C 0004E5DC  54 84 10 3A */	slwi r4, r4, 2
/* 800516A0 0004E5E0  7C 60 1B 78 */	mr r0, r3
/* 800516A4 0004E5E4  38 64 00 0E */	addi r3, r4, 0xe
/* 800516A8 0004E5E8  7C 60 1A 14 */	add r3, r0, r3
/* 800516AC 0004E5EC  4E 80 00 20 */	blr 
.endfn getTevOrder__12J2DTevBlock4FUl

.fn setTevColor__12J2DTevBlock4FUl13J2DGXColorS10, weak
/* 800516B0 0004E5F0  54 80 18 38 */	slwi r0, r4, 3
/* 800516B4 0004E5F4  A8 C5 00 00 */	lha r6, 0(r5)
/* 800516B8 0004E5F8  7C 83 02 14 */	add r4, r3, r0
/* 800516BC 0004E5FC  A8 05 00 02 */	lha r0, 2(r5)
/* 800516C0 0004E600  B0 C4 00 1E */	sth r6, 0x1e(r4)
/* 800516C4 0004E604  A8 65 00 04 */	lha r3, 4(r5)
/* 800516C8 0004E608  B0 04 00 20 */	sth r0, 0x20(r4)
/* 800516CC 0004E60C  A8 05 00 06 */	lha r0, 6(r5)
/* 800516D0 0004E610  B0 64 00 22 */	sth r3, 0x22(r4)
/* 800516D4 0004E614  B0 04 00 24 */	sth r0, 0x24(r4)
/* 800516D8 0004E618  4E 80 00 20 */	blr 
.endfn setTevColor__12J2DTevBlock4FUl13J2DGXColorS10

.fn getTevColor__12J2DTevBlock4FUl, weak
/* 800516DC 0004E61C  54 84 18 38 */	slwi r4, r4, 3
/* 800516E0 0004E620  7C 60 1B 78 */	mr r0, r3
/* 800516E4 0004E624  38 64 00 1E */	addi r3, r4, 0x1e
/* 800516E8 0004E628  7C 60 1A 14 */	add r3, r0, r3
/* 800516EC 0004E62C  4E 80 00 20 */	blr 
.endfn getTevColor__12J2DTevBlock4FUl

.fn setTevKColor__12J2DTevBlock4FUlQ28JUtility6TColor, weak
/* 800516F0 0004E630  54 80 10 3A */	slwi r0, r4, 2
/* 800516F4 0004E634  88 C5 00 00 */	lbz r6, 0(r5)
/* 800516F8 0004E638  7C 83 02 14 */	add r4, r3, r0
/* 800516FC 0004E63C  88 05 00 01 */	lbz r0, 1(r5)
/* 80051700 0004E640  98 C4 00 60 */	stb r6, 0x60(r4)
/* 80051704 0004E644  88 65 00 02 */	lbz r3, 2(r5)
/* 80051708 0004E648  98 04 00 61 */	stb r0, 0x61(r4)
/* 8005170C 0004E64C  88 05 00 03 */	lbz r0, 3(r5)
/* 80051710 0004E650  98 64 00 62 */	stb r3, 0x62(r4)
/* 80051714 0004E654  98 04 00 63 */	stb r0, 0x63(r4)
/* 80051718 0004E658  4E 80 00 20 */	blr 
.endfn setTevKColor__12J2DTevBlock4FUlQ28JUtility6TColor

.fn getTevKColor__12J2DTevBlock4FUl, weak
/* 8005171C 0004E65C  54 84 10 3A */	slwi r4, r4, 2
/* 80051720 0004E660  7C 60 1B 78 */	mr r0, r3
/* 80051724 0004E664  38 64 00 60 */	addi r3, r4, 0x60
/* 80051728 0004E668  7C 60 1A 14 */	add r3, r0, r3
/* 8005172C 0004E66C  4E 80 00 20 */	blr 
.endfn getTevKColor__12J2DTevBlock4FUl

.fn setTevKColorSel__12J2DTevBlock4FUlUc, weak
/* 80051730 0004E670  7C 63 22 14 */	add r3, r3, r4
/* 80051734 0004E674  98 A3 00 70 */	stb r5, 0x70(r3)
/* 80051738 0004E678  4E 80 00 20 */	blr 
.endfn setTevKColorSel__12J2DTevBlock4FUlUc

.fn getTevKColorSel__12J2DTevBlock4FUl, weak
/* 8005173C 0004E67C  7C 63 22 14 */	add r3, r3, r4
/* 80051740 0004E680  88 63 00 70 */	lbz r3, 0x70(r3)
/* 80051744 0004E684  4E 80 00 20 */	blr 
.endfn getTevKColorSel__12J2DTevBlock4FUl

.fn setTevKAlphaSel__12J2DTevBlock4FUlUc, weak
/* 80051748 0004E688  7C 63 22 14 */	add r3, r3, r4
/* 8005174C 0004E68C  98 A3 00 74 */	stb r5, 0x74(r3)
/* 80051750 0004E690  4E 80 00 20 */	blr 
.endfn setTevKAlphaSel__12J2DTevBlock4FUlUc

.fn getTevKAlphaSel__12J2DTevBlock4FUl, weak
/* 80051754 0004E694  7C 63 22 14 */	add r3, r3, r4
/* 80051758 0004E698  88 63 00 74 */	lbz r3, 0x74(r3)
/* 8005175C 0004E69C  4E 80 00 20 */	blr 
.endfn getTevKAlphaSel__12J2DTevBlock4FUl

.fn setTevStageNum__12J2DTevBlock4FUc, weak
/* 80051760 0004E6A0  98 83 00 3E */	stb r4, 0x3e(r3)
/* 80051764 0004E6A4  4E 80 00 20 */	blr 
.endfn setTevStageNum__12J2DTevBlock4FUc

.fn getTevStageNum__12J2DTevBlock4CFv, weak
/* 80051768 0004E6A8  88 63 00 3E */	lbz r3, 0x3e(r3)
/* 8005176C 0004E6AC  4E 80 00 20 */	blr 
.endfn getTevStageNum__12J2DTevBlock4CFv

.fn setTevStage__12J2DTevBlock4FUl11J2DTevStage, weak
/* 80051770 0004E6B0  54 80 18 38 */	slwi r0, r4, 3
/* 80051774 0004E6B4  88 C5 00 01 */	lbz r6, 1(r5)
/* 80051778 0004E6B8  7C 83 02 14 */	add r4, r3, r0
/* 8005177C 0004E6BC  88 05 00 02 */	lbz r0, 2(r5)
/* 80051780 0004E6C0  98 C4 00 40 */	stb r6, 0x40(r4)
/* 80051784 0004E6C4  88 65 00 03 */	lbz r3, 3(r5)
/* 80051788 0004E6C8  98 04 00 41 */	stb r0, 0x41(r4)
/* 8005178C 0004E6CC  88 05 00 05 */	lbz r0, 5(r5)
/* 80051790 0004E6D0  98 64 00 42 */	stb r3, 0x42(r4)
/* 80051794 0004E6D4  88 65 00 06 */	lbz r3, 6(r5)
/* 80051798 0004E6D8  98 04 00 44 */	stb r0, 0x44(r4)
/* 8005179C 0004E6DC  88 05 00 07 */	lbz r0, 7(r5)
/* 800517A0 0004E6E0  98 64 00 45 */	stb r3, 0x45(r4)
/* 800517A4 0004E6E4  98 04 00 46 */	stb r0, 0x46(r4)
/* 800517A8 0004E6E8  4E 80 00 20 */	blr 
.endfn setTevStage__12J2DTevBlock4FUl11J2DTevStage

.fn getTevStage__12J2DTevBlock4FUl, weak
/* 800517AC 0004E6EC  54 84 18 38 */	slwi r4, r4, 3
/* 800517B0 0004E6F0  7C 60 1B 78 */	mr r0, r3
/* 800517B4 0004E6F4  38 64 00 3F */	addi r3, r4, 0x3f
/* 800517B8 0004E6F8  7C 60 1A 14 */	add r3, r0, r3
/* 800517BC 0004E6FC  4E 80 00 20 */	blr 
.endfn getTevStage__12J2DTevBlock4FUl

.fn setTevSwapModeInfo__12J2DTevBlock4FUl18J2DTevSwapModeInfo, weak
/* 800517C0 0004E700  54 80 18 38 */	slwi r0, r4, 3
/* 800517C4 0004E704  88 85 00 01 */	lbz r4, 1(r5)
/* 800517C8 0004E708  7C C3 02 14 */	add r6, r3, r0
/* 800517CC 0004E70C  88 05 00 00 */	lbz r0, 0(r5)
/* 800517D0 0004E710  88 A6 00 46 */	lbz r5, 0x46(r6)
/* 800517D4 0004E714  54 83 10 3A */	slwi r3, r4, 2
/* 800517D8 0004E718  54 A4 07 B6 */	rlwinm r4, r5, 0, 0x1e, 0x1b
/* 800517DC 0004E71C  7C 83 1B 78 */	or r3, r4, r3
/* 800517E0 0004E720  98 66 00 46 */	stb r3, 0x46(r6)
/* 800517E4 0004E724  88 66 00 46 */	lbz r3, 0x46(r6)
/* 800517E8 0004E728  54 63 00 3A */	rlwinm r3, r3, 0, 0, 0x1d
/* 800517EC 0004E72C  7C 60 03 78 */	or r0, r3, r0
/* 800517F0 0004E730  98 06 00 46 */	stb r0, 0x46(r6)
/* 800517F4 0004E734  4E 80 00 20 */	blr 
.endfn setTevSwapModeInfo__12J2DTevBlock4FUl18J2DTevSwapModeInfo

.fn setTevSwapModeTable__12J2DTevBlock4FUl19J2DTevSwapModeTable, weak
/* 800517F8 0004E738  88 05 00 00 */	lbz r0, 0(r5)
/* 800517FC 0004E73C  7C 63 22 14 */	add r3, r3, r4
/* 80051800 0004E740  98 03 00 78 */	stb r0, 0x78(r3)
/* 80051804 0004E744  4E 80 00 20 */	blr 
.endfn setTevSwapModeTable__12J2DTevBlock4FUl19J2DTevSwapModeTable

.fn getTevSwapModeTable__12J2DTevBlock4FUl, weak
/* 80051808 0004E748  7C 60 1B 78 */	mr r0, r3
/* 8005180C 0004E74C  38 64 00 78 */	addi r3, r4, 0x78
/* 80051810 0004E750  7C 60 1A 14 */	add r3, r0, r3
/* 80051814 0004E754  4E 80 00 20 */	blr 
.endfn getTevSwapModeTable__12J2DTevBlock4FUl

.fn setIndTevStage__12J2DTevBlock4FUl14J2DIndTevStage, weak
/* 80051818 0004E758  54 80 10 3A */	slwi r0, r4, 2
/* 8005181C 0004E75C  80 85 00 00 */	lwz r4, 0(r5)
/* 80051820 0004E760  7C 63 02 14 */	add r3, r3, r0
/* 80051824 0004E764  90 83 00 7C */	stw r4, 0x7c(r3)
/* 80051828 0004E768  4E 80 00 20 */	blr 
.endfn setIndTevStage__12J2DTevBlock4FUl14J2DIndTevStage

.fn getIndTevStage__12J2DTevBlock4FUl, weak
/* 8005182C 0004E76C  54 84 10 3A */	slwi r4, r4, 2
/* 80051830 0004E770  7C 60 1B 78 */	mr r0, r3
/* 80051834 0004E774  38 64 00 7C */	addi r3, r4, 0x7c
/* 80051838 0004E778  7C 60 1A 14 */	add r3, r0, r3
/* 8005183C 0004E77C  4E 80 00 20 */	blr 
.endfn getIndTevStage__12J2DTevBlock4FUl

.fn insertTexture__12J2DTevBlock4FUlPC7ResTIMG, weak
/* 80051840 0004E780  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80051844 0004E784  7C 08 02 A6 */	mflr r0
/* 80051848 0004E788  38 C0 00 00 */	li r6, 0
/* 8005184C 0004E78C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80051850 0004E790  81 83 00 00 */	lwz r12, 0(r3)
/* 80051854 0004E794  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 80051858 0004E798  7D 89 03 A6 */	mtctr r12
/* 8005185C 0004E79C  4E 80 04 21 */	bctrl 
/* 80051860 0004E7A0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80051864 0004E7A4  7C 08 03 A6 */	mtlr r0
/* 80051868 0004E7A8  38 21 00 10 */	addi r1, r1, 0x10
/* 8005186C 0004E7AC  4E 80 00 20 */	blr 
.endfn insertTexture__12J2DTevBlock4FUlPC7ResTIMG

.fn getTexture__12J2DTevBlock4FUl, weak
/* 80051870 0004E7B0  28 04 00 04 */	cmplwi r4, 4
/* 80051874 0004E7B4  41 80 00 0C */	blt .L_80051880
/* 80051878 0004E7B8  38 60 00 00 */	li r3, 0
/* 8005187C 0004E7BC  4E 80 00 20 */	blr 
.L_80051880:
/* 80051880 0004E7C0  54 80 10 3A */	slwi r0, r4, 2
/* 80051884 0004E7C4  7C 63 02 14 */	add r3, r3, r0
/* 80051888 0004E7C8  80 63 00 8C */	lwz r3, 0x8c(r3)
/* 8005188C 0004E7CC  4E 80 00 20 */	blr 
.endfn getTexture__12J2DTevBlock4FUl

.fn getPalette__12J2DTevBlock4FUl, weak
/* 80051890 0004E7D0  28 04 00 04 */	cmplwi r4, 4
/* 80051894 0004E7D4  41 80 00 0C */	blt .L_800518A0
/* 80051898 0004E7D8  38 60 00 00 */	li r3, 0
/* 8005189C 0004E7DC  4E 80 00 20 */	blr 
.L_800518A0:
/* 800518A0 0004E7E0  54 80 10 3A */	slwi r0, r4, 2
/* 800518A4 0004E7E4  7C 63 02 14 */	add r3, r3, r0
/* 800518A8 0004E7E8  80 63 00 9C */	lwz r3, 0x9c(r3)
/* 800518AC 0004E7EC  4E 80 00 20 */	blr 
.endfn getPalette__12J2DTevBlock4FUl

.fn getFont__12J2DTevBlock4Fv, weak
/* 800518B0 0004E7F0  80 63 00 AC */	lwz r3, 0xac(r3)
/* 800518B4 0004E7F4  4E 80 00 20 */	blr 
.endfn getFont__12J2DTevBlock4Fv

.fn setUndeleteFlag__12J2DTevBlock4FUc, weak
/* 800518B8 0004E7F8  88 03 00 B0 */	lbz r0, 0xb0(r3)
/* 800518BC 0004E7FC  7C 00 20 38 */	and r0, r0, r4
/* 800518C0 0004E800  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 800518C4 0004E804  4E 80 00 20 */	blr 
.endfn setUndeleteFlag__12J2DTevBlock4FUc

.fn setFontUndeleteFlag__12J2DTevBlock4Fv, weak
/* 800518C8 0004E808  88 03 00 B0 */	lbz r0, 0xb0(r3)
/* 800518CC 0004E80C  54 00 06 7E */	clrlwi r0, r0, 0x19
/* 800518D0 0004E810  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 800518D4 0004E814  4E 80 00 20 */	blr 
.endfn setFontUndeleteFlag__12J2DTevBlock4Fv

.fn getType__12J2DTevBlock2Fv, weak
/* 800518D8 0004E818  3C 60 54 56 */	lis r3, 0x54564232@ha
/* 800518DC 0004E81C  38 63 42 32 */	addi r3, r3, 0x54564232@l
/* 800518E0 0004E820  4E 80 00 20 */	blr 
.endfn getType__12J2DTevBlock2Fv

.fn getMaxStage__12J2DTevBlock2Fv, weak
/* 800518E4 0004E824  38 60 00 02 */	li r3, 2
/* 800518E8 0004E828  4E 80 00 20 */	blr 
.endfn getMaxStage__12J2DTevBlock2Fv

.fn setTexNo__12J2DTevBlock2FUlUs, weak
/* 800518EC 0004E82C  54 80 08 3C */	slwi r0, r4, 1
/* 800518F0 0004E830  7C 63 02 14 */	add r3, r3, r0
/* 800518F4 0004E834  B0 A3 00 04 */	sth r5, 4(r3)
/* 800518F8 0004E838  4E 80 00 20 */	blr 
.endfn setTexNo__12J2DTevBlock2FUlUs

.fn getTexNo__12J2DTevBlock2CFUl, weak
/* 800518FC 0004E83C  54 80 08 3C */	slwi r0, r4, 1
/* 80051900 0004E840  7C 63 02 14 */	add r3, r3, r0
/* 80051904 0004E844  A0 63 00 04 */	lhz r3, 4(r3)
/* 80051908 0004E848  4E 80 00 20 */	blr 
.endfn getTexNo__12J2DTevBlock2CFUl

.fn setFontNo__12J2DTevBlock2FUs, weak
/* 8005190C 0004E84C  B0 83 00 08 */	sth r4, 8(r3)
/* 80051910 0004E850  4E 80 00 20 */	blr 
.endfn setFontNo__12J2DTevBlock2FUs

.fn getFontNo__12J2DTevBlock2CFv, weak
/* 80051914 0004E854  A0 63 00 08 */	lhz r3, 8(r3)
/* 80051918 0004E858  4E 80 00 20 */	blr 
.endfn getFontNo__12J2DTevBlock2CFv

.fn setTevOrder__12J2DTevBlock2FUl11J2DTevOrder, weak
/* 8005191C 0004E85C  54 84 10 3A */	slwi r4, r4, 2
/* 80051920 0004E860  88 05 00 00 */	lbz r0, 0(r5)
/* 80051924 0004E864  7C 83 22 14 */	add r4, r3, r4
/* 80051928 0004E868  88 65 00 01 */	lbz r3, 1(r5)
/* 8005192C 0004E86C  98 04 00 0A */	stb r0, 0xa(r4)
/* 80051930 0004E870  88 05 00 02 */	lbz r0, 2(r5)
/* 80051934 0004E874  98 64 00 0B */	stb r3, 0xb(r4)
/* 80051938 0004E878  98 04 00 0C */	stb r0, 0xc(r4)
/* 8005193C 0004E87C  4E 80 00 20 */	blr 
.endfn setTevOrder__12J2DTevBlock2FUl11J2DTevOrder

.fn getTevOrder__12J2DTevBlock2FUl, weak
/* 80051940 0004E880  54 84 10 3A */	slwi r4, r4, 2
/* 80051944 0004E884  7C 60 1B 78 */	mr r0, r3
/* 80051948 0004E888  38 64 00 0A */	addi r3, r4, 0xa
/* 8005194C 0004E88C  7C 60 1A 14 */	add r3, r0, r3
/* 80051950 0004E890  4E 80 00 20 */	blr 
.endfn getTevOrder__12J2DTevBlock2FUl

.fn setTevColor__12J2DTevBlock2FUl13J2DGXColorS10, weak
/* 80051954 0004E894  54 80 18 38 */	slwi r0, r4, 3
/* 80051958 0004E898  A8 C5 00 00 */	lha r6, 0(r5)
/* 8005195C 0004E89C  7C 83 02 14 */	add r4, r3, r0
/* 80051960 0004E8A0  A8 05 00 02 */	lha r0, 2(r5)
/* 80051964 0004E8A4  B0 C4 00 12 */	sth r6, 0x12(r4)
/* 80051968 0004E8A8  A8 65 00 04 */	lha r3, 4(r5)
/* 8005196C 0004E8AC  B0 04 00 14 */	sth r0, 0x14(r4)
/* 80051970 0004E8B0  A8 05 00 06 */	lha r0, 6(r5)
/* 80051974 0004E8B4  B0 64 00 16 */	sth r3, 0x16(r4)
/* 80051978 0004E8B8  B0 04 00 18 */	sth r0, 0x18(r4)
/* 8005197C 0004E8BC  4E 80 00 20 */	blr 
.endfn setTevColor__12J2DTevBlock2FUl13J2DGXColorS10

.fn getTevColor__12J2DTevBlock2FUl, weak
/* 80051980 0004E8C0  54 84 18 38 */	slwi r4, r4, 3
/* 80051984 0004E8C4  7C 60 1B 78 */	mr r0, r3
/* 80051988 0004E8C8  38 64 00 12 */	addi r3, r4, 0x12
/* 8005198C 0004E8CC  7C 60 1A 14 */	add r3, r0, r3
/* 80051990 0004E8D0  4E 80 00 20 */	blr 
.endfn getTevColor__12J2DTevBlock2FUl

.fn setTevKColor__12J2DTevBlock2FUlQ28JUtility6TColor, weak
/* 80051994 0004E8D4  54 80 10 3A */	slwi r0, r4, 2
/* 80051998 0004E8D8  88 C5 00 00 */	lbz r6, 0(r5)
/* 8005199C 0004E8DC  7C 83 02 14 */	add r4, r3, r0
/* 800519A0 0004E8E0  88 05 00 01 */	lbz r0, 1(r5)
/* 800519A4 0004E8E4  98 C4 00 44 */	stb r6, 0x44(r4)
/* 800519A8 0004E8E8  88 65 00 02 */	lbz r3, 2(r5)
/* 800519AC 0004E8EC  98 04 00 45 */	stb r0, 0x45(r4)
/* 800519B0 0004E8F0  88 05 00 03 */	lbz r0, 3(r5)
/* 800519B4 0004E8F4  98 64 00 46 */	stb r3, 0x46(r4)
/* 800519B8 0004E8F8  98 04 00 47 */	stb r0, 0x47(r4)
/* 800519BC 0004E8FC  4E 80 00 20 */	blr 
.endfn setTevKColor__12J2DTevBlock2FUlQ28JUtility6TColor

.fn getTevKColor__12J2DTevBlock2FUl, weak
/* 800519C0 0004E900  54 84 10 3A */	slwi r4, r4, 2
/* 800519C4 0004E904  7C 60 1B 78 */	mr r0, r3
/* 800519C8 0004E908  38 64 00 44 */	addi r3, r4, 0x44
/* 800519CC 0004E90C  7C 60 1A 14 */	add r3, r0, r3
/* 800519D0 0004E910  4E 80 00 20 */	blr 
.endfn getTevKColor__12J2DTevBlock2FUl

.fn setTevKColorSel__12J2DTevBlock2FUlUc, weak
/* 800519D4 0004E914  7C 63 22 14 */	add r3, r3, r4
/* 800519D8 0004E918  98 A3 00 54 */	stb r5, 0x54(r3)
/* 800519DC 0004E91C  4E 80 00 20 */	blr 
.endfn setTevKColorSel__12J2DTevBlock2FUlUc

.fn getTevKColorSel__12J2DTevBlock2FUl, weak
/* 800519E0 0004E920  7C 63 22 14 */	add r3, r3, r4
/* 800519E4 0004E924  88 63 00 54 */	lbz r3, 0x54(r3)
/* 800519E8 0004E928  4E 80 00 20 */	blr 
.endfn getTevKColorSel__12J2DTevBlock2FUl

.fn setTevKAlphaSel__12J2DTevBlock2FUlUc, weak
/* 800519EC 0004E92C  7C 63 22 14 */	add r3, r3, r4
/* 800519F0 0004E930  98 A3 00 56 */	stb r5, 0x56(r3)
/* 800519F4 0004E934  4E 80 00 20 */	blr 
.endfn setTevKAlphaSel__12J2DTevBlock2FUlUc

.fn getTevKAlphaSel__12J2DTevBlock2FUl, weak
/* 800519F8 0004E938  7C 63 22 14 */	add r3, r3, r4
/* 800519FC 0004E93C  88 63 00 56 */	lbz r3, 0x56(r3)
/* 80051A00 0004E940  4E 80 00 20 */	blr 
.endfn getTevKAlphaSel__12J2DTevBlock2FUl

.fn setTevStageNum__12J2DTevBlock2FUc, weak
/* 80051A04 0004E944  98 83 00 32 */	stb r4, 0x32(r3)
/* 80051A08 0004E948  4E 80 00 20 */	blr 
.endfn setTevStageNum__12J2DTevBlock2FUc

.fn getTevStageNum__12J2DTevBlock2CFv, weak
/* 80051A0C 0004E94C  88 63 00 32 */	lbz r3, 0x32(r3)
/* 80051A10 0004E950  4E 80 00 20 */	blr 
.endfn getTevStageNum__12J2DTevBlock2CFv

.fn setTevStage__12J2DTevBlock2FUl11J2DTevStage, weak
/* 80051A14 0004E954  54 80 18 38 */	slwi r0, r4, 3
/* 80051A18 0004E958  88 C5 00 01 */	lbz r6, 1(r5)
/* 80051A1C 0004E95C  7C 83 02 14 */	add r4, r3, r0
/* 80051A20 0004E960  88 05 00 02 */	lbz r0, 2(r5)
/* 80051A24 0004E964  98 C4 00 34 */	stb r6, 0x34(r4)
/* 80051A28 0004E968  88 65 00 03 */	lbz r3, 3(r5)
/* 80051A2C 0004E96C  98 04 00 35 */	stb r0, 0x35(r4)
/* 80051A30 0004E970  88 05 00 05 */	lbz r0, 5(r5)
/* 80051A34 0004E974  98 64 00 36 */	stb r3, 0x36(r4)
/* 80051A38 0004E978  88 65 00 06 */	lbz r3, 6(r5)
/* 80051A3C 0004E97C  98 04 00 38 */	stb r0, 0x38(r4)
/* 80051A40 0004E980  88 05 00 07 */	lbz r0, 7(r5)
/* 80051A44 0004E984  98 64 00 39 */	stb r3, 0x39(r4)
/* 80051A48 0004E988  98 04 00 3A */	stb r0, 0x3a(r4)
/* 80051A4C 0004E98C  4E 80 00 20 */	blr 
.endfn setTevStage__12J2DTevBlock2FUl11J2DTevStage

.fn getTevStage__12J2DTevBlock2FUl, weak
/* 80051A50 0004E990  54 84 18 38 */	slwi r4, r4, 3
/* 80051A54 0004E994  7C 60 1B 78 */	mr r0, r3
/* 80051A58 0004E998  38 64 00 33 */	addi r3, r4, 0x33
/* 80051A5C 0004E99C  7C 60 1A 14 */	add r3, r0, r3
/* 80051A60 0004E9A0  4E 80 00 20 */	blr 
.endfn getTevStage__12J2DTevBlock2FUl

.fn setTevSwapModeInfo__12J2DTevBlock2FUl18J2DTevSwapModeInfo, weak
/* 80051A64 0004E9A4  54 80 18 38 */	slwi r0, r4, 3
/* 80051A68 0004E9A8  88 85 00 01 */	lbz r4, 1(r5)
/* 80051A6C 0004E9AC  7C C3 02 14 */	add r6, r3, r0
/* 80051A70 0004E9B0  88 05 00 00 */	lbz r0, 0(r5)
/* 80051A74 0004E9B4  88 A6 00 3A */	lbz r5, 0x3a(r6)
/* 80051A78 0004E9B8  54 83 10 3A */	slwi r3, r4, 2
/* 80051A7C 0004E9BC  54 A4 07 B6 */	rlwinm r4, r5, 0, 0x1e, 0x1b
/* 80051A80 0004E9C0  7C 83 1B 78 */	or r3, r4, r3
/* 80051A84 0004E9C4  98 66 00 3A */	stb r3, 0x3a(r6)
/* 80051A88 0004E9C8  88 66 00 3A */	lbz r3, 0x3a(r6)
/* 80051A8C 0004E9CC  54 63 00 3A */	rlwinm r3, r3, 0, 0, 0x1d
/* 80051A90 0004E9D0  7C 60 03 78 */	or r0, r3, r0
/* 80051A94 0004E9D4  98 06 00 3A */	stb r0, 0x3a(r6)
/* 80051A98 0004E9D8  4E 80 00 20 */	blr 
.endfn setTevSwapModeInfo__12J2DTevBlock2FUl18J2DTevSwapModeInfo

.fn setTevSwapModeTable__12J2DTevBlock2FUl19J2DTevSwapModeTable, weak
/* 80051A9C 0004E9DC  88 05 00 00 */	lbz r0, 0(r5)
/* 80051AA0 0004E9E0  7C 63 22 14 */	add r3, r3, r4
/* 80051AA4 0004E9E4  98 03 00 58 */	stb r0, 0x58(r3)
/* 80051AA8 0004E9E8  4E 80 00 20 */	blr 
.endfn setTevSwapModeTable__12J2DTevBlock2FUl19J2DTevSwapModeTable

.fn getTevSwapModeTable__12J2DTevBlock2FUl, weak
/* 80051AAC 0004E9EC  7C 60 1B 78 */	mr r0, r3
/* 80051AB0 0004E9F0  38 64 00 58 */	addi r3, r4, 0x58
/* 80051AB4 0004E9F4  7C 60 1A 14 */	add r3, r0, r3
/* 80051AB8 0004E9F8  4E 80 00 20 */	blr 
.endfn getTevSwapModeTable__12J2DTevBlock2FUl

.fn setIndTevStage__12J2DTevBlock2FUl14J2DIndTevStage, weak
/* 80051ABC 0004E9FC  54 80 10 3A */	slwi r0, r4, 2
/* 80051AC0 0004EA00  80 85 00 00 */	lwz r4, 0(r5)
/* 80051AC4 0004EA04  7C 63 02 14 */	add r3, r3, r0
/* 80051AC8 0004EA08  90 83 00 5C */	stw r4, 0x5c(r3)
/* 80051ACC 0004EA0C  4E 80 00 20 */	blr 
.endfn setIndTevStage__12J2DTevBlock2FUl14J2DIndTevStage

.fn getIndTevStage__12J2DTevBlock2FUl, weak
/* 80051AD0 0004EA10  54 84 10 3A */	slwi r4, r4, 2
/* 80051AD4 0004EA14  7C 60 1B 78 */	mr r0, r3
/* 80051AD8 0004EA18  38 64 00 5C */	addi r3, r4, 0x5c
/* 80051ADC 0004EA1C  7C 60 1A 14 */	add r3, r0, r3
/* 80051AE0 0004EA20  4E 80 00 20 */	blr 
.endfn getIndTevStage__12J2DTevBlock2FUl

.fn insertTexture__12J2DTevBlock2FUlPC7ResTIMG, weak
/* 80051AE4 0004EA24  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80051AE8 0004EA28  7C 08 02 A6 */	mflr r0
/* 80051AEC 0004EA2C  38 C0 00 00 */	li r6, 0
/* 80051AF0 0004EA30  90 01 00 14 */	stw r0, 0x14(r1)
/* 80051AF4 0004EA34  81 83 00 00 */	lwz r12, 0(r3)
/* 80051AF8 0004EA38  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 80051AFC 0004EA3C  7D 89 03 A6 */	mtctr r12
/* 80051B00 0004EA40  4E 80 04 21 */	bctrl 
/* 80051B04 0004EA44  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80051B08 0004EA48  7C 08 03 A6 */	mtlr r0
/* 80051B0C 0004EA4C  38 21 00 10 */	addi r1, r1, 0x10
/* 80051B10 0004EA50  4E 80 00 20 */	blr 
.endfn insertTexture__12J2DTevBlock2FUlPC7ResTIMG

.fn getTexture__12J2DTevBlock2FUl, weak
/* 80051B14 0004EA54  28 04 00 02 */	cmplwi r4, 2
/* 80051B18 0004EA58  41 80 00 0C */	blt .L_80051B24
/* 80051B1C 0004EA5C  38 60 00 00 */	li r3, 0
/* 80051B20 0004EA60  4E 80 00 20 */	blr 
.L_80051B24:
/* 80051B24 0004EA64  54 80 10 3A */	slwi r0, r4, 2
/* 80051B28 0004EA68  7C 63 02 14 */	add r3, r3, r0
/* 80051B2C 0004EA6C  80 63 00 64 */	lwz r3, 0x64(r3)
/* 80051B30 0004EA70  4E 80 00 20 */	blr 
.endfn getTexture__12J2DTevBlock2FUl

.fn getPalette__12J2DTevBlock2FUl, weak
/* 80051B34 0004EA74  28 04 00 02 */	cmplwi r4, 2
/* 80051B38 0004EA78  41 80 00 0C */	blt .L_80051B44
/* 80051B3C 0004EA7C  38 60 00 00 */	li r3, 0
/* 80051B40 0004EA80  4E 80 00 20 */	blr 
.L_80051B44:
/* 80051B44 0004EA84  54 80 10 3A */	slwi r0, r4, 2
/* 80051B48 0004EA88  7C 63 02 14 */	add r3, r3, r0
/* 80051B4C 0004EA8C  80 63 00 6C */	lwz r3, 0x6c(r3)
/* 80051B50 0004EA90  4E 80 00 20 */	blr 
.endfn getPalette__12J2DTevBlock2FUl

.fn getFont__12J2DTevBlock2Fv, weak
/* 80051B54 0004EA94  80 63 00 74 */	lwz r3, 0x74(r3)
/* 80051B58 0004EA98  4E 80 00 20 */	blr 
.endfn getFont__12J2DTevBlock2Fv

.fn setUndeleteFlag__12J2DTevBlock2FUc, weak
/* 80051B5C 0004EA9C  88 03 00 78 */	lbz r0, 0x78(r3)
/* 80051B60 0004EAA0  7C 00 20 38 */	and r0, r0, r4
/* 80051B64 0004EAA4  98 03 00 78 */	stb r0, 0x78(r3)
/* 80051B68 0004EAA8  4E 80 00 20 */	blr 
.endfn setUndeleteFlag__12J2DTevBlock2FUc

.fn setFontUndeleteFlag__12J2DTevBlock2Fv, weak
/* 80051B6C 0004EAAC  88 03 00 78 */	lbz r0, 0x78(r3)
/* 80051B70 0004EAB0  54 00 06 7E */	clrlwi r0, r0, 0x19
/* 80051B74 0004EAB4  98 03 00 78 */	stb r0, 0x78(r3)
/* 80051B78 0004EAB8  4E 80 00 20 */	blr 
.endfn setFontUndeleteFlag__12J2DTevBlock2Fv

.fn getType__12J2DTevBlock1Fv, weak
/* 80051B7C 0004EABC  3C 60 54 56 */	lis r3, 0x54564231@ha
/* 80051B80 0004EAC0  38 63 42 31 */	addi r3, r3, 0x54564231@l
/* 80051B84 0004EAC4  4E 80 00 20 */	blr 
.endfn getType__12J2DTevBlock1Fv

.fn getMaxStage__12J2DTevBlock1Fv, weak
/* 80051B88 0004EAC8  38 60 00 01 */	li r3, 1
/* 80051B8C 0004EACC  4E 80 00 20 */	blr 
.endfn getMaxStage__12J2DTevBlock1Fv

.fn setTexNo__12J2DTevBlock1FUlUs, weak
/* 80051B90 0004EAD0  54 80 08 3C */	slwi r0, r4, 1
/* 80051B94 0004EAD4  7C 63 02 14 */	add r3, r3, r0
/* 80051B98 0004EAD8  B0 A3 00 04 */	sth r5, 4(r3)
/* 80051B9C 0004EADC  4E 80 00 20 */	blr 
.endfn setTexNo__12J2DTevBlock1FUlUs

.fn getTexNo__12J2DTevBlock1CFUl, weak
/* 80051BA0 0004EAE0  54 80 08 3C */	slwi r0, r4, 1
/* 80051BA4 0004EAE4  7C 63 02 14 */	add r3, r3, r0
/* 80051BA8 0004EAE8  A0 63 00 04 */	lhz r3, 4(r3)
/* 80051BAC 0004EAEC  4E 80 00 20 */	blr 
.endfn getTexNo__12J2DTevBlock1CFUl

.fn setFontNo__12J2DTevBlock1FUs, weak
/* 80051BB0 0004EAF0  B0 83 00 06 */	sth r4, 6(r3)
/* 80051BB4 0004EAF4  4E 80 00 20 */	blr 
.endfn setFontNo__12J2DTevBlock1FUs

.fn getFontNo__12J2DTevBlock1CFv, weak
/* 80051BB8 0004EAF8  A0 63 00 06 */	lhz r3, 6(r3)
/* 80051BBC 0004EAFC  4E 80 00 20 */	blr 
.endfn getFontNo__12J2DTevBlock1CFv

.fn setTevOrder__12J2DTevBlock1FUl11J2DTevOrder, weak
/* 80051BC0 0004EB00  54 84 10 3A */	slwi r4, r4, 2
/* 80051BC4 0004EB04  88 05 00 00 */	lbz r0, 0(r5)
/* 80051BC8 0004EB08  7C 83 22 14 */	add r4, r3, r4
/* 80051BCC 0004EB0C  88 65 00 01 */	lbz r3, 1(r5)
/* 80051BD0 0004EB10  98 04 00 08 */	stb r0, 8(r4)
/* 80051BD4 0004EB14  88 05 00 02 */	lbz r0, 2(r5)
/* 80051BD8 0004EB18  98 64 00 09 */	stb r3, 9(r4)
/* 80051BDC 0004EB1C  98 04 00 0A */	stb r0, 0xa(r4)
/* 80051BE0 0004EB20  4E 80 00 20 */	blr 
.endfn setTevOrder__12J2DTevBlock1FUl11J2DTevOrder

.fn getTevOrder__12J2DTevBlock1FUl, weak
/* 80051BE4 0004EB24  54 84 10 3A */	slwi r4, r4, 2
/* 80051BE8 0004EB28  7C 60 1B 78 */	mr r0, r3
/* 80051BEC 0004EB2C  38 64 00 08 */	addi r3, r4, 8
/* 80051BF0 0004EB30  7C 60 1A 14 */	add r3, r0, r3
/* 80051BF4 0004EB34  4E 80 00 20 */	blr 
.endfn getTevOrder__12J2DTevBlock1FUl

.fn setTevColor__12J2DTevBlock1FUl13J2DGXColorS10, weak
/* 80051BF8 0004EB38  54 80 18 38 */	slwi r0, r4, 3
/* 80051BFC 0004EB3C  A8 C5 00 00 */	lha r6, 0(r5)
/* 80051C00 0004EB40  7C 83 02 14 */	add r4, r3, r0
/* 80051C04 0004EB44  A8 05 00 02 */	lha r0, 2(r5)
/* 80051C08 0004EB48  B0 C4 00 0C */	sth r6, 0xc(r4)
/* 80051C0C 0004EB4C  A8 65 00 04 */	lha r3, 4(r5)
/* 80051C10 0004EB50  B0 04 00 0E */	sth r0, 0xe(r4)
/* 80051C14 0004EB54  A8 05 00 06 */	lha r0, 6(r5)
/* 80051C18 0004EB58  B0 64 00 10 */	sth r3, 0x10(r4)
/* 80051C1C 0004EB5C  B0 04 00 12 */	sth r0, 0x12(r4)
/* 80051C20 0004EB60  4E 80 00 20 */	blr 
.endfn setTevColor__12J2DTevBlock1FUl13J2DGXColorS10

.fn getTevColor__12J2DTevBlock1FUl, weak
/* 80051C24 0004EB64  54 84 18 38 */	slwi r4, r4, 3
/* 80051C28 0004EB68  7C 60 1B 78 */	mr r0, r3
/* 80051C2C 0004EB6C  38 64 00 0C */	addi r3, r4, 0xc
/* 80051C30 0004EB70  7C 60 1A 14 */	add r3, r0, r3
/* 80051C34 0004EB74  4E 80 00 20 */	blr 
.endfn getTevColor__12J2DTevBlock1FUl

.fn setTevKColor__12J2DTevBlock1FUlQ28JUtility6TColor, weak
/* 80051C38 0004EB78  54 80 10 3A */	slwi r0, r4, 2
/* 80051C3C 0004EB7C  88 C5 00 00 */	lbz r6, 0(r5)
/* 80051C40 0004EB80  7C 83 02 14 */	add r4, r3, r0
/* 80051C44 0004EB84  88 05 00 01 */	lbz r0, 1(r5)
/* 80051C48 0004EB88  98 C4 00 34 */	stb r6, 0x34(r4)
/* 80051C4C 0004EB8C  88 65 00 02 */	lbz r3, 2(r5)
/* 80051C50 0004EB90  98 04 00 35 */	stb r0, 0x35(r4)
/* 80051C54 0004EB94  88 05 00 03 */	lbz r0, 3(r5)
/* 80051C58 0004EB98  98 64 00 36 */	stb r3, 0x36(r4)
/* 80051C5C 0004EB9C  98 04 00 37 */	stb r0, 0x37(r4)
/* 80051C60 0004EBA0  4E 80 00 20 */	blr 
.endfn setTevKColor__12J2DTevBlock1FUlQ28JUtility6TColor

.fn getTevKColor__12J2DTevBlock1FUl, weak
/* 80051C64 0004EBA4  54 84 10 3A */	slwi r4, r4, 2
/* 80051C68 0004EBA8  7C 60 1B 78 */	mr r0, r3
/* 80051C6C 0004EBAC  38 64 00 34 */	addi r3, r4, 0x34
/* 80051C70 0004EBB0  7C 60 1A 14 */	add r3, r0, r3
/* 80051C74 0004EBB4  4E 80 00 20 */	blr 
.endfn getTevKColor__12J2DTevBlock1FUl

.fn setTevKColorSel__12J2DTevBlock1FUlUc, weak
/* 80051C78 0004EBB8  7C 63 22 14 */	add r3, r3, r4
/* 80051C7C 0004EBBC  98 A3 00 44 */	stb r5, 0x44(r3)
/* 80051C80 0004EBC0  4E 80 00 20 */	blr 
.endfn setTevKColorSel__12J2DTevBlock1FUlUc

.fn getTevKColorSel__12J2DTevBlock1FUl, weak
/* 80051C84 0004EBC4  7C 63 22 14 */	add r3, r3, r4
/* 80051C88 0004EBC8  88 63 00 44 */	lbz r3, 0x44(r3)
/* 80051C8C 0004EBCC  4E 80 00 20 */	blr 
.endfn getTevKColorSel__12J2DTevBlock1FUl

.fn setTevKAlphaSel__12J2DTevBlock1FUlUc, weak
/* 80051C90 0004EBD0  7C 63 22 14 */	add r3, r3, r4
/* 80051C94 0004EBD4  98 A3 00 45 */	stb r5, 0x45(r3)
/* 80051C98 0004EBD8  4E 80 00 20 */	blr 
.endfn setTevKAlphaSel__12J2DTevBlock1FUlUc

.fn getTevKAlphaSel__12J2DTevBlock1FUl, weak
/* 80051C9C 0004EBDC  7C 63 22 14 */	add r3, r3, r4
/* 80051CA0 0004EBE0  88 63 00 45 */	lbz r3, 0x45(r3)
/* 80051CA4 0004EBE4  4E 80 00 20 */	blr 
.endfn getTevKAlphaSel__12J2DTevBlock1FUl

.fn setTevStageNum__12J2DTevBlock1FUc, weak
/* 80051CA8 0004EBE8  4E 80 00 20 */	blr 
.endfn setTevStageNum__12J2DTevBlock1FUc

.fn getTevStageNum__12J2DTevBlock1CFv, weak
/* 80051CAC 0004EBEC  38 60 00 01 */	li r3, 1
/* 80051CB0 0004EBF0  4E 80 00 20 */	blr 
.endfn getTevStageNum__12J2DTevBlock1CFv

.fn setTevStage__12J2DTevBlock1FUl11J2DTevStage, weak
/* 80051CB4 0004EBF4  54 80 18 38 */	slwi r0, r4, 3
/* 80051CB8 0004EBF8  88 C5 00 01 */	lbz r6, 1(r5)
/* 80051CBC 0004EBFC  7C 83 02 14 */	add r4, r3, r0
/* 80051CC0 0004EC00  88 05 00 02 */	lbz r0, 2(r5)
/* 80051CC4 0004EC04  98 C4 00 2D */	stb r6, 0x2d(r4)
/* 80051CC8 0004EC08  88 65 00 03 */	lbz r3, 3(r5)
/* 80051CCC 0004EC0C  98 04 00 2E */	stb r0, 0x2e(r4)
/* 80051CD0 0004EC10  88 05 00 05 */	lbz r0, 5(r5)
/* 80051CD4 0004EC14  98 64 00 2F */	stb r3, 0x2f(r4)
/* 80051CD8 0004EC18  88 65 00 06 */	lbz r3, 6(r5)
/* 80051CDC 0004EC1C  98 04 00 31 */	stb r0, 0x31(r4)
/* 80051CE0 0004EC20  88 05 00 07 */	lbz r0, 7(r5)
/* 80051CE4 0004EC24  98 64 00 32 */	stb r3, 0x32(r4)
/* 80051CE8 0004EC28  98 04 00 33 */	stb r0, 0x33(r4)
/* 80051CEC 0004EC2C  4E 80 00 20 */	blr 
.endfn setTevStage__12J2DTevBlock1FUl11J2DTevStage

.fn getTevStage__12J2DTevBlock1FUl, weak
/* 80051CF0 0004EC30  54 84 18 38 */	slwi r4, r4, 3
/* 80051CF4 0004EC34  7C 60 1B 78 */	mr r0, r3
/* 80051CF8 0004EC38  38 64 00 2C */	addi r3, r4, 0x2c
/* 80051CFC 0004EC3C  7C 60 1A 14 */	add r3, r0, r3
/* 80051D00 0004EC40  4E 80 00 20 */	blr 
.endfn getTevStage__12J2DTevBlock1FUl

.fn setTevSwapModeInfo__12J2DTevBlock1FUl18J2DTevSwapModeInfo, weak
/* 80051D04 0004EC44  54 80 18 38 */	slwi r0, r4, 3
/* 80051D08 0004EC48  88 85 00 01 */	lbz r4, 1(r5)
/* 80051D0C 0004EC4C  7C C3 02 14 */	add r6, r3, r0
/* 80051D10 0004EC50  88 05 00 00 */	lbz r0, 0(r5)
/* 80051D14 0004EC54  88 A6 00 33 */	lbz r5, 0x33(r6)
/* 80051D18 0004EC58  54 83 10 3A */	slwi r3, r4, 2
/* 80051D1C 0004EC5C  54 A4 07 B6 */	rlwinm r4, r5, 0, 0x1e, 0x1b
/* 80051D20 0004EC60  7C 83 1B 78 */	or r3, r4, r3
/* 80051D24 0004EC64  98 66 00 33 */	stb r3, 0x33(r6)
/* 80051D28 0004EC68  88 66 00 33 */	lbz r3, 0x33(r6)
/* 80051D2C 0004EC6C  54 63 00 3A */	rlwinm r3, r3, 0, 0, 0x1d
/* 80051D30 0004EC70  7C 60 03 78 */	or r0, r3, r0
/* 80051D34 0004EC74  98 06 00 33 */	stb r0, 0x33(r6)
/* 80051D38 0004EC78  4E 80 00 20 */	blr 
.endfn setTevSwapModeInfo__12J2DTevBlock1FUl18J2DTevSwapModeInfo

.fn setTevSwapModeTable__12J2DTevBlock1FUl19J2DTevSwapModeTable, weak
/* 80051D3C 0004EC7C  88 05 00 00 */	lbz r0, 0(r5)
/* 80051D40 0004EC80  7C 63 22 14 */	add r3, r3, r4
/* 80051D44 0004EC84  98 03 00 46 */	stb r0, 0x46(r3)
/* 80051D48 0004EC88  4E 80 00 20 */	blr 
.endfn setTevSwapModeTable__12J2DTevBlock1FUl19J2DTevSwapModeTable

.fn getTevSwapModeTable__12J2DTevBlock1FUl, weak
/* 80051D4C 0004EC8C  7C 60 1B 78 */	mr r0, r3
/* 80051D50 0004EC90  38 64 00 46 */	addi r3, r4, 0x46
/* 80051D54 0004EC94  7C 60 1A 14 */	add r3, r0, r3
/* 80051D58 0004EC98  4E 80 00 20 */	blr 
.endfn getTevSwapModeTable__12J2DTevBlock1FUl

.fn setIndTevStage__12J2DTevBlock1FUl14J2DIndTevStage, weak
/* 80051D5C 0004EC9C  54 80 10 3A */	slwi r0, r4, 2
/* 80051D60 0004ECA0  80 85 00 00 */	lwz r4, 0(r5)
/* 80051D64 0004ECA4  7C 63 02 14 */	add r3, r3, r0
/* 80051D68 0004ECA8  90 83 00 4C */	stw r4, 0x4c(r3)
/* 80051D6C 0004ECAC  4E 80 00 20 */	blr 
.endfn setIndTevStage__12J2DTevBlock1FUl14J2DIndTevStage

.fn getIndTevStage__12J2DTevBlock1FUl, weak
/* 80051D70 0004ECB0  54 84 10 3A */	slwi r4, r4, 2
/* 80051D74 0004ECB4  7C 60 1B 78 */	mr r0, r3
/* 80051D78 0004ECB8  38 64 00 4C */	addi r3, r4, 0x4c
/* 80051D7C 0004ECBC  7C 60 1A 14 */	add r3, r0, r3
/* 80051D80 0004ECC0  4E 80 00 20 */	blr 
.endfn getIndTevStage__12J2DTevBlock1FUl

.fn insertTexture__12J2DTevBlock1FUlPC7ResTIMG, weak
/* 80051D84 0004ECC4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80051D88 0004ECC8  7C 08 02 A6 */	mflr r0
/* 80051D8C 0004ECCC  38 C0 00 00 */	li r6, 0
/* 80051D90 0004ECD0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80051D94 0004ECD4  81 83 00 00 */	lwz r12, 0(r3)
/* 80051D98 0004ECD8  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 80051D9C 0004ECDC  7D 89 03 A6 */	mtctr r12
/* 80051DA0 0004ECE0  4E 80 04 21 */	bctrl 
/* 80051DA4 0004ECE4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80051DA8 0004ECE8  7C 08 03 A6 */	mtlr r0
/* 80051DAC 0004ECEC  38 21 00 10 */	addi r1, r1, 0x10
/* 80051DB0 0004ECF0  4E 80 00 20 */	blr 
.endfn insertTexture__12J2DTevBlock1FUlPC7ResTIMG

.fn getTexture__12J2DTevBlock1FUl, weak
/* 80051DB4 0004ECF4  28 04 00 01 */	cmplwi r4, 1
/* 80051DB8 0004ECF8  41 80 00 0C */	blt .L_80051DC4
/* 80051DBC 0004ECFC  38 60 00 00 */	li r3, 0
/* 80051DC0 0004ED00  4E 80 00 20 */	blr 
.L_80051DC4:
/* 80051DC4 0004ED04  54 80 10 3A */	slwi r0, r4, 2
/* 80051DC8 0004ED08  7C 63 02 14 */	add r3, r3, r0
/* 80051DCC 0004ED0C  80 63 00 50 */	lwz r3, 0x50(r3)
/* 80051DD0 0004ED10  4E 80 00 20 */	blr 
.endfn getTexture__12J2DTevBlock1FUl

.fn getPalette__12J2DTevBlock1FUl, weak
/* 80051DD4 0004ED14  28 04 00 01 */	cmplwi r4, 1
/* 80051DD8 0004ED18  41 80 00 0C */	blt .L_80051DE4
/* 80051DDC 0004ED1C  38 60 00 00 */	li r3, 0
/* 80051DE0 0004ED20  4E 80 00 20 */	blr 
.L_80051DE4:
/* 80051DE4 0004ED24  54 80 10 3A */	slwi r0, r4, 2
/* 80051DE8 0004ED28  7C 63 02 14 */	add r3, r3, r0
/* 80051DEC 0004ED2C  80 63 00 54 */	lwz r3, 0x54(r3)
/* 80051DF0 0004ED30  4E 80 00 20 */	blr 
.endfn getPalette__12J2DTevBlock1FUl

.fn getFont__12J2DTevBlock1Fv, weak
/* 80051DF4 0004ED34  80 63 00 58 */	lwz r3, 0x58(r3)
/* 80051DF8 0004ED38  4E 80 00 20 */	blr 
.endfn getFont__12J2DTevBlock1Fv

.fn setUndeleteFlag__12J2DTevBlock1FUc, weak
/* 80051DFC 0004ED3C  88 03 00 5C */	lbz r0, 0x5c(r3)
/* 80051E00 0004ED40  7C 00 20 38 */	and r0, r0, r4
/* 80051E04 0004ED44  98 03 00 5C */	stb r0, 0x5c(r3)
/* 80051E08 0004ED48  4E 80 00 20 */	blr 
.endfn setUndeleteFlag__12J2DTevBlock1FUc

.fn setFontUndeleteFlag__12J2DTevBlock1Fv, weak
/* 80051E0C 0004ED4C  88 03 00 5C */	lbz r0, 0x5c(r3)
/* 80051E10 0004ED50  54 00 06 7E */	clrlwi r0, r0, 0x19
/* 80051E14 0004ED54  98 03 00 5C */	stb r0, 0x5c(r3)
/* 80051E18 0004ED58  4E 80 00 20 */	blr 
.endfn setFontUndeleteFlag__12J2DTevBlock1Fv

.fn initialize__11J2DTevBlockFv, weak
/* 80051E1C 0004ED5C  4E 80 00 20 */	blr 
.endfn initialize__11J2DTevBlockFv

.fn setGX__11J2DTevBlockFv, weak
/* 80051E20 0004ED60  4E 80 00 20 */	blr 
.endfn setGX__11J2DTevBlockFv

.fn loadTexture__11J2DTevBlockF11_GXTexMapIDUl, weak
/* 80051E24 0004ED64  4E 80 00 20 */	blr 
.endfn loadTexture__11J2DTevBlockF11_GXTexMapIDUl

.fn setFontNo__11J2DTevBlockFUs, weak
/* 80051E28 0004ED68  4E 80 00 20 */	blr 
.endfn setFontNo__11J2DTevBlockFUs

.fn setTevKColor__11J2DTevBlockFUlQ28JUtility6TColor, weak
/* 80051E2C 0004ED6C  4E 80 00 20 */	blr 
.endfn setTevKColor__11J2DTevBlockFUlQ28JUtility6TColor

.fn getTevKColorSel__11J2DTevBlockFUl, weak
/* 80051E30 0004ED70  38 60 00 00 */	li r3, 0
/* 80051E34 0004ED74  4E 80 00 20 */	blr 
.endfn getTevKColorSel__11J2DTevBlockFUl

.fn getTevKAlphaSel__11J2DTevBlockFUl, weak
/* 80051E38 0004ED78  38 60 00 00 */	li r3, 0
/* 80051E3C 0004ED7C  4E 80 00 20 */	blr 
.endfn getTevKAlphaSel__11J2DTevBlockFUl

.fn setTevStage__11J2DTevBlockFUl11J2DTevStage, weak
/* 80051E40 0004ED80  4E 80 00 20 */	blr 
.endfn setTevStage__11J2DTevBlockFUl11J2DTevStage

.fn setTevSwapModeInfo__11J2DTevBlockFUl18J2DTevSwapModeInfo, weak
/* 80051E44 0004ED84  4E 80 00 20 */	blr 
.endfn setTevSwapModeInfo__11J2DTevBlockFUl18J2DTevSwapModeInfo

.fn setTevSwapModeTable__11J2DTevBlockFUl19J2DTevSwapModeTable, weak
/* 80051E48 0004ED88  4E 80 00 20 */	blr 
.endfn setTevSwapModeTable__11J2DTevBlockFUl19J2DTevSwapModeTable

.fn setIndTevStage__11J2DTevBlockFUl14J2DIndTevStage, weak
/* 80051E4C 0004ED8C  4E 80 00 20 */	blr 
.endfn setIndTevStage__11J2DTevBlockFUl14J2DIndTevStage

.fn getIndTevStage__11J2DTevBlockFUl, weak
/* 80051E50 0004ED90  38 60 00 00 */	li r3, 0
/* 80051E54 0004ED94  4E 80 00 20 */	blr 
.endfn getIndTevStage__11J2DTevBlockFUl

.fn insertTexture__11J2DTevBlockFUlP10JUTTexture, weak
/* 80051E58 0004ED98  38 60 00 00 */	li r3, 0
/* 80051E5C 0004ED9C  4E 80 00 20 */	blr 
.endfn insertTexture__11J2DTevBlockFUlP10JUTTexture

.fn insertTexture__11J2DTevBlockFUlPC7ResTIMGP10JUTPalette, weak
/* 80051E60 0004EDA0  38 60 00 00 */	li r3, 0
/* 80051E64 0004EDA4  4E 80 00 20 */	blr 
.endfn insertTexture__11J2DTevBlockFUlPC7ResTIMGP10JUTPalette

.fn setTexture__11J2DTevBlockFUlP10JUTTexture, weak
/* 80051E68 0004EDA8  38 60 00 00 */	li r3, 0
/* 80051E6C 0004EDAC  4E 80 00 20 */	blr 
.endfn setTexture__11J2DTevBlockFUlP10JUTTexture

.fn setTexture__11J2DTevBlockFUlPC7ResTIMG, weak
/* 80051E70 0004EDB0  38 60 00 00 */	li r3, 0
/* 80051E74 0004EDB4  4E 80 00 20 */	blr 
.endfn setTexture__11J2DTevBlockFUlPC7ResTIMG

.fn removeTexture__11J2DTevBlockFUl, weak
/* 80051E78 0004EDB8  38 60 00 00 */	li r3, 0
/* 80051E7C 0004EDBC  4E 80 00 20 */	blr 
.endfn removeTexture__11J2DTevBlockFUl

.fn setFont__11J2DTevBlockFP7JUTFont, weak
/* 80051E80 0004EDC0  38 60 00 00 */	li r3, 0
/* 80051E84 0004EDC4  4E 80 00 20 */	blr 
.endfn setFont__11J2DTevBlockFP7JUTFont

.fn setFont__11J2DTevBlockFP7ResFONT, weak
/* 80051E88 0004EDC8  38 60 00 00 */	li r3, 0
/* 80051E8C 0004EDCC  4E 80 00 20 */	blr 
.endfn setFont__11J2DTevBlockFP7ResFONT

.fn setPalette__11J2DTevBlockFUlPC7ResTLUT, weak
/* 80051E90 0004EDD0  38 60 00 00 */	li r3, 0
/* 80051E94 0004EDD4  4E 80 00 20 */	blr 
.endfn setPalette__11J2DTevBlockFUlPC7ResTLUT

.fn prepareTexture__11J2DTevBlockFUc, weak
/* 80051E98 0004EDD8  38 60 00 00 */	li r3, 0
/* 80051E9C 0004EDDC  4E 80 00 20 */	blr 
.endfn prepareTexture__11J2DTevBlockFUc

.fn shiftDeleteFlag__11J2DTevBlockFUcb, weak
/* 80051EA0 0004EDE0  4E 80 00 20 */	blr 
.endfn shiftDeleteFlag__11J2DTevBlockFUcb
