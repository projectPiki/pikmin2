#include "Dolphin/gx.h"
#include "JSystem/J2D/J2DColorBlock.h"
#include "JSystem/J2D/J2DGXColorS10.h"
#include "JSystem/J2D/J2DIndBlock.h"
#include "JSystem/J2D/J2DPEBlock.h"
#include "JSystem/J2D/J2DTevBlock.h"
#include "JSystem/J2D/J2DTexGenBlock.h"
#include "JSystem/J2D/J2DTexMtx.h"
#include "JSystem/J2D/J2DTypes.h"
#include "JSystem/J3D/J3DTypes.h"
#include "JSystem/JUT/JUTFont.h"
#include "JSystem/JUT/JUTPalette.h"
#include "JSystem/JUT/JUTTexture.h"
#include "JSystem/JUT/TColor.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_804785D0
    lbl_804785D0:
        .4byte 0x00000000
        .4byte 0x00000002
        .4byte 0x00000001
        .4byte 0x00000003

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__15J2DIndBlockFull
    __vt__15J2DIndBlockFull:
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
    .global __vt__11J2DIndBlock
    __vt__11J2DIndBlock:
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
    .global __vt__13J2DTevBlock16
    __vt__13J2DTevBlock16:
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
    .global __vt__12J2DTevBlock8
    __vt__12J2DTevBlock8:
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
    .global __vt__12J2DTevBlock4
    __vt__12J2DTevBlock4:
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
    .global __vt__12J2DTevBlock2
    __vt__12J2DTevBlock2:
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
    .global __vt__12J2DTevBlock1
    __vt__12J2DTevBlock1:
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
    .global __vt__11J2DTevBlock
    __vt__11J2DTevBlock:
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
    .global __vt__14J2DTexGenBlock
    __vt__14J2DTexGenBlock:
        .4byte 0
        .4byte 0
        .4byte __dt__14J2DTexGenBlockFv
        .4byte 0
*/

/*
 * --INFO--
 * Address:	80049B20
 * Size:	0000AC
 */
void J2DColorBlock::initialize()
{
	u32 colInfo               = j2dDefaultColInfo;
	J2DColorChanInfo chanInfo = j2dDefaultColorChanInfo;
	for (int i = 0; i < 2; i++) {
		// m_colors[i] = j2dDefaultColInfo;
		m_colors[i] = colInfo;
	}
	// m_colors[0]    = colInfo;
	// m_colors[1]    = colInfo;
	m_channelCount = 2;
	for (int i = 0; i < 4; i++) {
		// m_channels[i].m_data = j2dDefaultColorChanInfo._01;
		m_channels[i].m_data = chanInfo._01;
	}
	m_cullMode = GX_CULL_NONE;
	/*
	stwu     r1, -0x10(r1)
	li       r4, 2
	lwz      r9, j2dDefaultColInfo@sda21(r2)
	addi     r10, r2, j2dDefaultColorChanInfo@sda21
	li       r0, 0
	stw      r9, 8(r1)
	lbz      r8, 8(r1)
	lbz      r7, 9(r1)
	stb      r8, 0(r3)
	lbz      r6, 0xa(r1)
	lbz      r5, 0xb(r1)
	stb      r7, 1(r3)
	stb      r6, 2(r3)
	stw      r9, 8(r1)
	stb      r8, 0xc(r1)
	lbz      r8, 8(r1)
	stb      r5, 3(r3)
	stb      r7, 0xd(r1)
	lbz      r7, 9(r1)
	stb      r8, 4(r3)
	stb      r6, 0xe(r1)
	lbz      r6, 0xa(r1)
	stb      r7, 5(r3)
	stb      r5, 0xf(r1)
	lbz      r5, 0xb(r1)
	stb      r6, 6(r3)
	stb      r5, 7(r3)
	stb      r4, 8(r3)
	lbz      r4, 1(r10)
	stb      r8, 0xc(r1)
	sth      r4, 0xa(r3)
	lbz      r4, 1(r10)
	stb      r7, 0xd(r1)
	sth      r4, 0xc(r3)
	lbz      r4, 1(r10)
	stb      r6, 0xe(r1)
	sth      r4, 0xe(r3)
	lbz      r4, 1(r10)
	stb      r5, 0xf(r1)
	sth      r4, 0x10(r3)
	stb      r0, 0x12(r3)
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80049BCC
 * Size:	0000F4
 */
void J2DColorBlock::setGX()
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	stw      r30, 0x28(r1)
	li       r30, 0
	stw      r29, 0x24(r1)
	stw      r28, 0x20(r1)
	mr       r28, r3
	mr       r31, r28

lbl_80049BF4:
	lwz      r0, 0(r31)
	addi     r3, r30, 4
	addi     r4, r1, 8
	stw      r0, 8(r1)
	bl       GXSetChanMatColor
	addi     r30, r30, 1
	addi     r31, r31, 4
	cmpwi    r30, 2
	blt      lbl_80049BF4
	lbz      r3, 8(r28)
	bl       GXSetNumChans
	lis      r3, lbl_804785D0@ha
	mr       r31, r28
	addi     r6, r3, lbl_804785D0@l
	addi     r30, r1, 0xc
	lwz      r5, 0(r6)
	li       r29, 0
	lwz      r4, 4(r6)
	lwz      r3, 8(r6)
	lwz      r0, 0xc(r6)
	stw      r5, 0xc(r1)
	stw      r4, 0x10(r1)
	stw      r3, 0x14(r1)
	stw      r0, 0x18(r1)
	b        lbl_80049C88

lbl_80049C58:
	lhz      r0, 0xa(r31)
	li       r4, 0
	lwz      r3, 0(r30)
	li       r5, 0
	clrlwi   r6, r0, 0x1f
	li       r7, 0
	li       r8, 0
	li       r9, 2
	bl       GXSetChanCtrl
	addi     r31, r31, 2
	addi     r30, r30, 4
	addi     r29, r29, 1

lbl_80049C88:
	lbz      r0, 8(r28)
	slwi     r0, r0, 1
	cmpw     r29, r0
	blt      lbl_80049C58
	lbz      r3, 0x12(r28)
	bl       GXSetCullMode
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	lwz      r29, 0x24(r1)
	lwz      r28, 0x20(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	80049CC0
 * Size:	0000F0
 * initialize__14J2DTexGenBlockFv
 */
void J2DTexGenBlock::initialize()
{
	m_texGenNum = 0;
	for (int i = 0; i < 8; i++) {
		m_texCoords[i]._00 = j2dDefaultTexCoordInfo[0]._00;
		m_texCoords[i]._01 = j2dDefaultTexCoordInfo[0]._01;
		m_texCoords[i]._02 = j2dDefaultTexCoordInfo[0]._02;
	}
	for (int i = 0; i < 8; i++) {
		m_texMtxes[i] = nullptr;
	}
}

/*
 * --INFO--
 * Address:	80049DB0
 * Size:	0000B4
 */
void J2DTexGenBlock::setGX()
{
	GXSetNumTexGens(m_texGenNum);
	for (int i = 0; i < m_texGenNum; i++) {
		GXSetTexCoordGen2((GXTexCoordID)i, (GXTexGenType)m_texCoords[i]._00, (GXTexGenSrc)m_texCoords[i]._01, m_texCoords[i]._02, GX_FALSE,
		                  0x7D);
	}
	for (u8 i = 0; i < 8; i++) {
		if (m_texMtxes[i] != nullptr) {
			m_texMtxes[i]->load(i);
		}
	}
}

/*
 * --INFO--
 * Address:	80049E64
 * Size:	000090
 * __dt__14J2DTexGenBlockFv
 */
J2DTexGenBlock::~J2DTexGenBlock()
{
	for (int i = 0; i < 8; i++) {
		delete m_texMtxes[i];
	}
}

/*
 * --INFO--
 * Address:	80049EF4
 * Size:	000158
 */
void J2DTexGenBlock::setTexMtx(unsigned long index, J2DTexMtx& mtx)
{
	if (m_texMtxes[index] == nullptr) {
		m_texMtxes[index] = new J2DTexMtx(&mtx.m_info);
		if (m_texMtxes[index] == nullptr) {
			return;
		}
	} else {
		m_texMtxes[index]->m_info = mtx.m_info;
	}
	m_texMtxes[index]->calc();
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	slwi     r0, r4, 2
	stw      r31, 0x3c(r1)
	add      r31, r3, r0
	stw      r30, 0x38(r1)
	mr       r30, r5
	lwz      r9, 0x24(r31)
	cmplwi   r9, 0
	bne      lbl_80049F94
	li       r3, 0x54
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_80049F80
	lfs      f0, 4(r30)
	stfs     f0, 4(r3)
	lfs      f0, 8(r30)
	stfs     f0, 8(r3)
	lfs      f0, 0xc(r30)
	stfs     f0, 0xc(r3)
	lbz      r0, 0(r30)
	stb      r0, 0(r3)
	lbz      r0, 1(r30)
	stb      r0, 1(r3)
	lfs      f0, 0x10(r30)
	stfs     f0, 0x10(r3)
	lfs      f0, 0x14(r30)
	stfs     f0, 0x14(r3)
	lfs      f0, 0x18(r30)
	stfs     f0, 0x18(r3)
	lfs      f0, 0x1c(r30)
	stfs     f0, 0x1c(r3)
	lfs      f0, 0x20(r30)
	stfs     f0, 0x20(r3)

lbl_80049F80:
	stw      r3, 0x24(r31)
	lwz      r0, 0x24(r31)
	cmplwi   r0, 0
	bne      lbl_8004A02C
	b        lbl_8004A034

lbl_80049F94:
	lwz      r3, 4(r30)
	lwz      r0, 8(r30)
	stw      r3, 0xc(r1)
	lwz      r3, 0(r30)
	stw      r0, 0x10(r1)
	lwz      r0, 0xc(r30)
	lwz      r8, 0x10(r30)
	lwz      r7, 0x14(r30)
	stw      r3, 8(r1)
	lwz      r6, 0x18(r30)
	lwz      r5, 0x1c(r30)
	lwz      r4, 0x20(r30)
	lfs      f0, 0xc(r1)
	stw      r0, 0x14(r1)
	lfs      f1, 0x10(r1)
	stfs     f0, 4(r9)
	lfs      f0, 0x14(r1)
	stfs     f1, 8(r9)
	lbz      r3, 8(r1)
	stfs     f0, 0xc(r9)
	lbz      r0, 9(r1)
	stw      r8, 0x18(r1)
	stb      r3, 0(r9)
	lfs      f0, 0x18(r1)
	stw      r7, 0x1c(r1)
	stb      r0, 1(r9)
	lfs      f1, 0x1c(r1)
	stw      r6, 0x20(r1)
	stfs     f0, 0x10(r9)
	lfs      f0, 0x20(r1)
	stw      r5, 0x24(r1)
	stfs     f1, 0x14(r9)
	lfs      f1, 0x24(r1)
	stw      r4, 0x28(r1)
	stfs     f0, 0x18(r9)
	lfs      f0, 0x28(r1)
	stfs     f1, 0x1c(r9)
	stfs     f0, 0x20(r9)

lbl_8004A02C:
	lwz      r3, 0x24(r31)
	bl       calc__9J2DTexMtxFv

lbl_8004A034:
	lwz      r0, 0x44(r1)
	lwz      r31, 0x3c(r1)
	lwz      r30, 0x38(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	8004A04C
 * Size:	0000B8
 */
void J2DTexGenBlock::getTexMtx(unsigned long index, J2DTexMtx& texMtx)
{
	/*
	slwi     r0, r4, 2
	stwu     r1, -0x30(r1)
	add      r3, r3, r0
	lwz      r4, 0x24(r3)
	cmplwi   r4, 0
	beq      lbl_8004A0FC
	lwz      r3, 4(r4)
	lwz      r0, 8(r4)
	stw      r3, 0xc(r1)
	lwz      r3, 0(r4)
	stw      r0, 0x10(r1)
	lwz      r0, 0xc(r4)
	lwz      r9, 0x10(r4)
	lwz      r8, 0x14(r4)
	stw      r3, 8(r1)
	lwz      r7, 0x18(r4)
	lwz      r6, 0x1c(r4)
	lwz      r4, 0x20(r4)
	lfs      f0, 0xc(r1)
	stw      r0, 0x14(r1)
	lfs      f1, 0x10(r1)
	stfs     f0, 4(r5)
	lfs      f0, 0x14(r1)
	stfs     f1, 8(r5)
	lbz      r3, 8(r1)
	stfs     f0, 0xc(r5)
	lbz      r0, 9(r1)
	stw      r9, 0x18(r1)
	stb      r3, 0(r5)
	lfs      f0, 0x18(r1)
	stw      r8, 0x1c(r1)
	stb      r0, 1(r5)
	lfs      f1, 0x1c(r1)
	stw      r7, 0x20(r1)
	stfs     f0, 0x10(r5)
	lfs      f0, 0x20(r1)
	stw      r6, 0x24(r1)
	stfs     f1, 0x14(r5)
	lfs      f1, 0x24(r1)
	stw      r4, 0x28(r1)
	stfs     f0, 0x18(r5)
	lfs      f0, 0x28(r1)
	stfs     f1, 0x1c(r5)
	stfs     f0, 0x20(r5)

lbl_8004A0FC:
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	8004A104
 * Size:	000008
 */
JUTTexture* J2DTevBlock::getTexture(unsigned long index) { return 0x0; }

/*
 * --INFO--
 * Address:	8004A10C
 * Size:	000008
 */
JUTPalette* J2DTevBlock::getPalette(unsigned long index) { return 0x0; }

/*
 * --INFO--
 * Address:	8004A114
 * Size:	00010C
 * __ct__12J2DTevBlock1Fv
 */
J2DTevBlock1::J2DTevBlock1()
    : J2DTevBlock()
    , m_orders()
    , m_colors()
    , m_stages()
    , m_kColors()
    , m_swapModeTables()
    , m_indStages()
{
	m_textures[0] = nullptr;
	_5C           = 0;
	initialize();
}

/*
 * --INFO--
 * Address:	8004A220
 * Size:	000094
 * __ct__14J2DIndTevStageFv
 */
J2DIndTevStage::J2DIndTevStage()
{
	/*
	lis      r4, j2dDefaultIndTevStageInfo@ha
	stwu     r1, -0x20(r1)
	addi     r5, r4, j2dDefaultIndTevStageInfo@l
	lwz      r4, 4(r5)
	lwz      r0, 8(r5)
	stw      r4, 0xc(r1)
	lwz      r4, 0(r5)
	stw      r0, 0x10(r1)
	lbz      r0, 0xf(r1)
	stw      r4, 8(r1)
	lbz      r4, 0x10(r1)
	slwi     r0, r0, 0x15
	lbz      r5, 0xe(r1)
	slwi     r4, r4, 0x16
	lbz      r6, 0xb(r1)
	or       r0, r4, r0
	slwi     r5, r5, 0x14
	lbz      r7, 0xd(r1)
	or       r0, r5, r0
	slwi     r4, r6, 0x10
	lbz      r8, 0xc(r1)
	lbz      r9, 0xa(r1)
	or       r0, r4, r0
	slwi     r5, r7, 0xb
	lbz      r10, 9(r1)
	or       r0, r5, r0
	slwi     r6, r8, 8
	or       r0, r6, r0
	slwi     r4, r9, 4
	slwi     r5, r10, 2
	lbz      r6, 8(r1)
	or       r0, r4, r0
	or       r0, r5, r0
	or       r0, r6, r0
	stw      r0, 0(r3)
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8004A2B4
 * Size:	00000C
 * __ct__19J2DTevSwapModeTableFv
 */
J2DTevSwapModeTable::J2DTevSwapModeTable()
{
	/*
	lbz      r0, j2dDefaultTevSwapTable@sda21(r2)
	stb      r0, 0(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8004A2C0
 * Size:	000004
 * __ct__13J2DGXColorS10Fv
 */
// J2DGXColorS10::J2DGXColorS10() { }

/*
 * --INFO--
 * Address:	8004A2C4
 * Size:	000020
 * __ct__11J2DTevOrderFv
 */
// J2DTevOrder::J2DTevOrder()
// {
// 	_00 = j2dDefaultTevOrderInfoNull._00;
// 	_01 = j2dDefaultTevOrderInfoNull._01;
// 	_02 = j2dDefaultTevOrderInfoNull._02;
// }

/*
 * --INFO--
 * Address:	8004A2E4
 * Size:	000048
 * __dt__11J2DTevBlockFv
 */
// J2DTevBlock::~J2DTevBlock() { }

/*
 * --INFO--
 * Address:	8004A32C
 * Size:	0000B8
 * __dt__12J2DTevBlock1Fv
 */
J2DTevBlock1::~J2DTevBlock1()
{
	if ((_5C & 0x01) != 0) {
		delete m_textures[0];
	}
	delete m_palettes[0];
	if ((_5C & 0x80) != 0) {
		delete m_font;
	}
}

/*
 * --INFO--
 * Address:	8004A3E4
 * Size:	000278
 * initialize__12J2DTevBlock1Fv
 */
void J2DTevBlock1::initialize()
{
	J2DGXColorS10 tevColor     = j2dDefaultTevColor;
	JUtility::TColor tevKColor = j2dDefaultTevKColor;
	J2DTevOrderInfo* orderInfo = &j2dDefaultTevOrderInfoNull;
	for (int i = 0; i < 1; i++) {
		m_texIndices[i] = 0xFFFF;
	}
	m_fontNo = 0xFFFF;
	for (int i = 0; i < 1; i++) {
		m_orders[i] = *orderInfo;
	}
	for (int i = 0; i < 4; i++) {
		m_colors[i] = tevColor;
	}
	for (int i = 0; i < 1; i++) {
		m_stages[i]._00            = 0xC0 + i * 2;
		m_stages[i]._04.asBytes[0] = 0xC1 + i * 2;
	}
	for (int i = 0; i < 4; i++) {
		m_kColors[i] = tevColor;
	}
	for (int i = 0; i < 1; i++) {
		m_kColorSels[i] = 0xFF;
		m_kAlphaSels[i] = 0xFF;
	}
	for (int i = 0; i < 4; i++) {
		// m_swapModeTables[i].m_data = j2dDefaultTevSwapModeTable[0] * 0x40 + j2dDefaultTevSwapModeTable[1] * 0x10
		//                    + j2dDefaultTevSwapModeTable[2] * 0x04 + j2dDefaultTevSwapModeTable[3];

		// m_swapModeTables[i]._0 = j2dDefaultTevSwapModeTable[3];
		// m_swapModeTables[i]._2 = j2dDefaultTevSwapModeTable[2];
		// m_swapModeTables[i]._4 = j2dDefaultTevSwapModeTable[1];
		// m_swapModeTables[i]._6 = j2dDefaultTevSwapModeTable[0];
		m_swapModeTables[i] = J2DTevSwapModeTable(j2dDefaultTevSwapModeTable[3], j2dDefaultTevSwapModeTable[2],
		                                          j2dDefaultTevSwapModeTable[1], j2dDefaultTevSwapModeTable[0]);
		// m_swapModeTables[i]._0[0]._00 = j2dDefaultTevSwapModeTable[0];
		// m_swapModeTables[i]._0[1]._00 = j2dDefaultTevSwapModeTable[1];
		// m_swapModeTables[i]._0[2]._00 = j2dDefaultTevSwapModeTable[2];
		// m_swapModeTables[i]._0[3]._00 = j2dDefaultTevSwapModeTable[3];
	}
	for (int i = 0; i < 1; i++) {
		m_textures[i] = nullptr;
	}
	for (int i = 0; i < 1; i++) {
		m_palettes[i] = nullptr;
	}
	m_font = nullptr;
	/*
	stwu     r1, -0x30(r1)
	addi     r6, r2, j2dDefaultTevColor@sda21
	lis      r4, 0x0000FFFF@ha
	addi     r12, r2, j2dDefaultTevOrderInfoNull@sda21
	stw      r31, 0x2c(r1)
	addi     r0, r4, 0x0000FFFF@l
	lha      r10, j2dDefaultTevColor@sda21(r2)
	li       r5, 0xc0
	sth      r0, 4(r3)
	li       r4, 0xc1
	lha      r9, 2(r6)
	mr       r31, r3
	sth      r0, 6(r3)
	li       r0, 2
	lha      r8, 4(r6)
	lbz      r7, j2dDefaultTevOrderInfoNull@sda21(r2)
	lha      r6, 6(r6)
	stb      r7, 8(r3)
	lwz      r7, j2dDefaultTevKColor@sda21(r2)
	lbz      r11, 1(r12)
	stb      r11, 9(r3)
	lbz      r11, 2(r12)
	stb      r11, 0xa(r3)
	sth      r10, 0xc(r3)
	sth      r9, 0xe(r3)
	sth      r8, 0x10(r3)
	sth      r6, 0x12(r3)
	sth      r10, 0x14(r3)
	sth      r9, 0x16(r3)
	sth      r8, 0x18(r3)
	sth      r6, 0x1a(r3)
	sth      r10, 0x1c(r3)
	sth      r9, 0x1e(r3)
	sth      r8, 0x20(r3)
	sth      r6, 0x22(r3)
	sth      r10, 0x24(r3)
	sth      r9, 0x26(r3)
	sth      r8, 0x28(r3)
	sth      r6, 0x2a(r3)
	stb      r5, 0x2c(r3)
	stb      r4, 0x30(r3)
	mtctr    r0

lbl_8004A48C:
	stw      r7, 8(r1)
	lbz      r6, 8(r1)
	lbz      r5, 9(r1)
	stb      r6, 0x34(r31)
	lbz      r4, 0xa(r1)
	lbz      r0, 0xb(r1)
	stb      r5, 0x35(r31)
	stb      r4, 0x36(r31)
	stw      r7, 8(r1)
	stb      r6, 0xc(r1)
	lbz      r6, 8(r1)
	stb      r0, 0x37(r31)
	stb      r5, 0xd(r1)
	lbz      r5, 9(r1)
	stb      r6, 0x38(r31)
	stb      r4, 0xe(r1)
	lbz      r4, 0xa(r1)
	stb      r5, 0x39(r31)
	stb      r0, 0xf(r1)
	lbz      r0, 0xb(r1)
	stb      r4, 0x3a(r31)
	stb      r0, 0x3b(r31)
	addi     r31, r31, 8
	stb      r6, 0xc(r1)
	stb      r5, 0xd(r1)
	stb      r4, 0xe(r1)
	stb      r0, 0xf(r1)
	bdnz     lbl_8004A48C
	li       r7, 0xff
	lis      r5, j2dDefaultIndTevStageInfo@ha
	stb      r7, 0x44(r3)
	addi     r4, r2, j2dDefaultTevSwapModeTable@sda21
	addi     r6, r5, j2dDefaultIndTevStageInfo@l
	li       r0, 0
	stb      r7, 0x45(r3)
	lbz      r5, 1(r4)
	lbz      r8, 2(r4)
	lbz      r7, j2dDefaultTevSwapModeTable@sda21(r2)
	rlwinm   r5, r5, 4, 0x14, 0x1b
	slwi     r8, r8, 2
	lbz      r9, 3(r4)
	add      r5, r5, r8
	slwi     r7, r7, 6
	add      r5, r5, r9
	add      r5, r7, r5
	stb      r5, 0x46(r3)
	lbz      r5, 1(r4)
	lbz      r8, 2(r4)
	lbz      r7, j2dDefaultTevSwapModeTable@sda21(r2)
	rlwinm   r5, r5, 4, 0x14, 0x1b
	slwi     r8, r8, 2
	lbz      r9, 3(r4)
	add      r5, r5, r8
	slwi     r7, r7, 6
	add      r5, r5, r9
	add      r5, r7, r5
	stb      r5, 0x47(r3)
	lbz      r5, 1(r4)
	lbz      r8, 2(r4)
	lbz      r7, j2dDefaultTevSwapModeTable@sda21(r2)
	rlwinm   r5, r5, 4, 0x14, 0x1b
	slwi     r8, r8, 2
	lbz      r9, 3(r4)
	add      r5, r5, r8
	slwi     r7, r7, 6
	add      r5, r5, r9
	add      r5, r7, r5
	stb      r5, 0x48(r3)
	lbz      r8, 2(r4)
	lbz      r5, 1(r4)
	lbz      r7, j2dDefaultTevSwapModeTable@sda21(r2)
	slwi     r8, r8, 2
	slwi     r5, r5, 4
	lbz      r9, 3(r4)
	add      r4, r5, r8
	slwi     r5, r7, 6
	add      r4, r4, r9
	add      r4, r5, r4
	stb      r4, 0x49(r3)
	lwz      r5, 4(r6)
	lwz      r4, 8(r6)
	stw      r5, 0x14(r1)
	lwz      r5, 0(r6)
	stw      r4, 0x18(r1)
	lbz      r4, 0x17(r1)
	stw      r5, 0x10(r1)
	lbz      r5, 0x18(r1)
	slwi     r4, r4, 0x15
	lbz      r6, 0x16(r1)
	slwi     r5, r5, 0x16
	lbz      r7, 0x13(r1)
	or       r4, r5, r4
	slwi     r6, r6, 0x14
	lbz      r8, 0x15(r1)
	or       r4, r6, r4
	slwi     r5, r7, 0x10
	lbz      r9, 0x14(r1)
	lbz      r10, 0x12(r1)
	or       r4, r5, r4
	slwi     r6, r8, 0xb
	lbz      r11, 0x11(r1)
	or       r4, r6, r4
	slwi     r7, r9, 8
	or       r4, r7, r4
	slwi     r5, r10, 4
	slwi     r6, r11, 2
	lbz      r7, 0x10(r1)
	or       r4, r5, r4
	or       r4, r6, r4
	or       r4, r7, r4
	stw      r4, 0x4c(r3)
	stw      r0, 0x54(r3)
	stw      r0, 0x58(r3)
	lwz      r31, 0x2c(r1)
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	8004A65C
 * Size:	0000BC
 */
bool J2DTevBlock1::prepareTexture(unsigned char count)
{
	if (count == 0) {
		return true;
	}
	if (m_textures[0] == nullptr) {
		m_textures[0] = new JUTTexture();
		if (m_textures[0] == nullptr) {
			return false;
		}
		_5C = _5C & 0x80 | 1;
	}
	return count <= 1;
}

/*
 * --INFO--
 * Address:	8004A718
 * Size:	000134
 * insertTexture__12J2DTevBlock1FUlPC7ResTIMGP10JUTPalette
 */
bool J2DTevBlock1::insertTexture(unsigned long, const ResTIMG*, JUTPalette*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	cmplwi   r4, 0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r30, r6
	stw      r29, 0x14(r1)
	mr       r29, r5
	stw      r28, 0x10(r1)
	mr       r28, r3
	bne      lbl_8004A750
	cmplwi   r29, 0
	bne      lbl_8004A758

lbl_8004A750:
	li       r3, 0
	b        lbl_8004A82C

lbl_8004A758:
	lwz      r3, 0x50(r28)
	cmplwi   r3, 0
	beq      lbl_8004A778
	lwz      r0, 0x20(r3)
	cmplwi   r0, 0
	beq      lbl_8004A778
	li       r3, 0
	b        lbl_8004A82C

lbl_8004A778:
	cmplwi   r3, 0
	bne      lbl_8004A7E0
	li       r3, 0x40
	bl       __nw__FUl
	or.      r31, r3, r3
	beq      lbl_8004A7B0
	li       r0, 0
	mr       r4, r29
	stw      r0, 0x28(r31)
	li       r5, 0
	bl       storeTIMG__10JUTTextureFPC7ResTIMGUc
	lbz      r0, 0x3b(r31)
	rlwinm   r0, r0, 0, 0x1e, 0x1e
	stb      r0, 0x3b(r31)

lbl_8004A7B0:
	stw      r31, 0x50(r28)
	lwz      r3, 0x50(r28)
	cmplwi   r3, 0
	bne      lbl_8004A7C8
	li       r3, 0
	b        lbl_8004A82C

lbl_8004A7C8:
	cmplwi   r30, 0
	beq      lbl_8004A804
	mr       r4, r29
	mr       r5, r30
	bl       storeTIMG__10JUTTextureFPC7ResTIMGP10JUTPalette
	b        lbl_8004A804

lbl_8004A7E0:
	cmplwi   r30, 0
	bne      lbl_8004A7F8
	mr       r4, r29
	li       r5, 0
	bl       storeTIMG__10JUTTextureFPC7ResTIMGUc
	b        lbl_8004A804

lbl_8004A7F8:
	mr       r4, r29
	mr       r5, r30
	bl       storeTIMG__10JUTTextureFPC7ResTIMGP10JUTPalette

lbl_8004A804:
	lbz      r0, 0x5c(r28)
	lis      r4, 0x0000FFFF@ha
	li       r5, 0
	li       r3, 1
	rlwinm   r6, r0, 0, 0x18, 0x18
	addi     r0, r4, 0x0000FFFF@l
	ori      r4, r6, 1
	stb      r4, 0x5c(r28)
	stw      r5, 0x54(r28)
	sth      r0, 4(r28)

lbl_8004A82C:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r28, 0x10(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8004A84C
 * Size:	0000A8
 * insertTexture__12J2DTevBlock1FUlP10JUTTexture
 */
bool J2DTevBlock1::insertTexture(unsigned long, JUTTexture*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r5
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r3, 0x50(r3)
	cmplwi   r3, 0
	beq      lbl_8004A888
	lwz      r0, 0x20(r3)
	cmplwi   r0, 0
	beq      lbl_8004A888
	li       r3, 0
	b        lbl_8004A8DC

lbl_8004A888:
	cmplwi   r4, 0
	bne      lbl_8004A898
	cmplwi   r31, 0
	bne      lbl_8004A8A0

lbl_8004A898:
	li       r3, 0
	b        lbl_8004A8DC

lbl_8004A8A0:
	lbz      r0, 0x5c(r30)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_8004A8B4
	li       r4, 1
	bl       __dt__10JUTTextureFv

lbl_8004A8B4:
	stw      r31, 0x50(r30)
	lis      r4, 0x0000FFFF@ha
	li       r5, 0
	li       r3, 1
	lbz      r6, 0x5c(r30)
	addi     r0, r4, 0x0000FFFF@l
	rlwinm   r4, r6, 0, 0x18, 0x18
	stb      r4, 0x5c(r30)
	stw      r5, 0x54(r30)
	sth      r0, 4(r30)

lbl_8004A8DC:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8004A8F4
 * Size:	000198
 * setTexture__12J2DTevBlock1FUlPC7ResTIMG
 */
bool J2DTevBlock1::setTexture(unsigned long index, const ResTIMG* img)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	cmplwi   r4, 0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r5
	beq      lbl_8004A924
	li       r3, 0
	b        lbl_8004AA70

lbl_8004A924:
	lwz      r3, 0x50(r31)
	cmplwi   r3, 0
	bne      lbl_8004A9A4
	cmplwi   r29, 0
	beq      lbl_8004A994
	li       r3, 0x40
	bl       __nw__FUl
	or.      r30, r3, r3
	beq      lbl_8004A968
	li       r0, 0
	mr       r4, r29
	stw      r0, 0x28(r30)
	li       r5, 0
	bl       storeTIMG__10JUTTextureFPC7ResTIMGUc
	lbz      r0, 0x3b(r30)
	rlwinm   r0, r0, 0, 0x1e, 0x1e
	stb      r0, 0x3b(r30)

lbl_8004A968:
	stw      r30, 0x50(r31)
	lwz      r0, 0x50(r31)
	cmplwi   r0, 0
	bne      lbl_8004A980
	li       r3, 0
	b        lbl_8004AA70

lbl_8004A980:
	lbz      r0, 0x5c(r31)
	rlwinm   r0, r0, 0, 0x18, 0x18
	ori      r0, r0, 1
	stb      r0, 0x5c(r31)
	b        lbl_8004AA50

lbl_8004A994:
	lbz      r0, 0x5c(r31)
	rlwinm   r0, r0, 0, 0x18, 0x18
	stb      r0, 0x5c(r31)
	b        lbl_8004AA50

lbl_8004A9A4:
	lbz      r0, 0x5c(r31)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_8004A9E8
	cmplwi   r29, 0
	beq      lbl_8004A9C8
	mr       r4, r29
	li       r5, 0
	bl       storeTIMG__10JUTTextureFPC7ResTIMGUc
	b        lbl_8004AA50

lbl_8004A9C8:
	li       r4, 1
	bl       __dt__10JUTTextureFv
	li       r0, 0
	stw      r0, 0x50(r31)
	lbz      r0, 0x5c(r31)
	rlwinm   r0, r0, 0, 0x18, 0x18
	stb      r0, 0x5c(r31)
	b        lbl_8004AA50

lbl_8004A9E8:
	li       r0, 0
	cmplwi   r29, 0
	stw      r0, 0x50(r31)
	beq      lbl_8004AA50
	li       r3, 0x40
	bl       __nw__FUl
	or.      r30, r3, r3
	beq      lbl_8004AA28
	li       r0, 0
	mr       r4, r29
	stw      r0, 0x28(r30)
	li       r5, 0
	bl       storeTIMG__10JUTTextureFPC7ResTIMGUc
	lbz      r0, 0x3b(r30)
	rlwinm   r0, r0, 0, 0x1e, 0x1e
	stb      r0, 0x3b(r30)

lbl_8004AA28:
	stw      r30, 0x50(r31)
	lwz      r0, 0x50(r31)
	cmplwi   r0, 0
	bne      lbl_8004AA40
	li       r3, 0
	b        lbl_8004AA70

lbl_8004AA40:
	lbz      r0, 0x5c(r31)
	rlwinm   r0, r0, 0, 0x18, 0x18
	ori      r0, r0, 1
	stb      r0, 0x5c(r31)

lbl_8004AA50:
	lwz      r3, 0x54(r31)
	bl       __dl__FPv
	li       r0, 0
	lis      r3, 0x0000FFFF@ha
	stw      r0, 0x54(r31)
	addi     r0, r3, 0x0000FFFF@l
	li       r3, 1
	sth      r0, 4(r31)

lbl_8004AA70:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8004AA8C
 * Size:	00008C
 * setTexture__12J2DTevBlock1FUlP10JUTTexture
 */
bool J2DTevBlock1::setTexture(unsigned long index, JUTTexture* texture)
{
	if (index != 0) {
		return false;
	}
	if ((_5C & 1) != 0) {
		delete m_textures[0];
	}
	m_textures[0] = texture;
	_5C &= 0x80;
	delete m_palettes[0];
	m_palettes[0]   = nullptr;
	m_texIndices[0] = 0xFFFF;
	return true;
}

/*
 * --INFO--
 * Address:	8004AB18
 * Size:	00007C
 * removeTexture__12J2DTevBlock1FUl
 */
bool J2DTevBlock1::removeTexture(unsigned long)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	cmplwi   r4, 1
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	blt      lbl_8004AB3C
	li       r3, 0
	b        lbl_8004AB80

lbl_8004AB3C:
	lbz      r0, 0x5c(r31)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_8004AB54
	lwz      r3, 0x50(r31)
	li       r4, 1
	bl       __dt__10JUTTextureFv

lbl_8004AB54:
	li       r0, 0
	stw      r0, 0x50(r31)
	lbz      r0, 0x5c(r31)
	rlwinm   r0, r0, 0, 0x18, 0x18
	stb      r0, 0x5c(r31)
	lwz      r3, 0x54(r31)
	bl       __dl__FPv
	lis      r4, 0x0000FFFF@ha
	li       r3, 1
	addi     r0, r4, 0x0000FFFF@l
	sth      r0, 4(r31)

lbl_8004AB80:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8004AB94
 * Size:	0000BC
 * setFont__12J2DTevBlock1FP7ResFONT
 */
bool J2DTevBlock1::setFont(ResFONT* font)
{
	if (font == nullptr) {
		return false;
	}
	JUTResFont* jutFont = new JUTResFont(font, nullptr);
	if (jutFont == nullptr) {
		return false;
	}
	if ((_5C & 0x80) != 0) {
		delete m_font;
	}
	m_font = jutFont;
	_5C    = _5C & 0x7F | 0x80;
	return true;
}

/*
 * --INFO--
 * Address:	8004AC50
 * Size:	000080
 * setFont__12J2DTevBlock1FP7JUTFont
 */
bool J2DTevBlock1::setFont(JUTFont* font)
{
	if (font == nullptr) {
		return false;
	}
	if ((_5C & 0x80) != 0) {
		delete m_font;
	}
	m_font = static_cast<JUTResFont*>(font);
	_5C &= 0x7F;
	return true;
}

/*
 * --INFO--
 * Address:	8004ACD0
 * Size:	0000C8
 * setPalette__12J2DTevBlock1FUlPC7ResTLUT
 */
bool J2DTevBlock1::setPalette(unsigned long index, const ResTLUT* lut)
{
	if (index != 0) {
		return false;
	}
	if (lut != nullptr) {
		if (m_palettes[0] == nullptr) {
			m_palettes[0] = new JUTPalette(0, const_cast<ResTLUT*>(lut));
			if (m_palettes[0] == nullptr) {
				return false;
			}
		} else {
			m_palettes[0]->storeTLUT(GX_TLUT0, const_cast<ResTLUT*>(lut));
		}
		if (m_textures[0] != nullptr) {
			m_textures[0]->attachPalette(m_palettes[0]);
		}
	} else {
		delete m_palettes[0];
		m_palettes[0] = nullptr;
	}
	return true;
}

/*
 * --INFO--
 * Address:	8004AD98
 * Size:	000010
 * shiftDeleteFlag__12J2DTevBlock1FUcb
 */
void J2DTevBlock1::shiftDeleteFlag(unsigned char flag, bool direction) { _5C = _5C & 0x80; }

/*
 * --INFO--
 * Address:	8004ADA8
 * Size:	00024C
 * setGX__12J2DTevBlock1Fv
 */
void J2DTevBlock1::setGX()
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	li       r4, 0
	li       r5, 0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	mr       r31, r3
	stw      r30, 0x28(r1)
	stw      r29, 0x24(r1)
	stw      r28, 0x20(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lbz      r4, 8(r31)
	li       r3, 0
	lbz      r5, 9(r31)
	lbz      r6, 0xa(r31)
	bl       GXSetTevOrder
	mr       r29, r31
	addi     r30, r1, 0xc
	li       r28, 0

lbl_8004AE00:
	lwz      r4, 0xc(r29)
	cmpwi    r28, 3
	lwz      r0, 0x10(r29)
	li       r3, 0
	stw      r4, 0xc(r1)
	stw      r0, 0x10(r1)
	beq      lbl_8004AE20
	addi     r3, r28, 1

lbl_8004AE20:
	mr       r4, r30
	bl       GXSetTevColorS10
	addi     r28, r28, 1
	addi     r29, r29, 8
	cmpwi    r28, 4
	blt      lbl_8004AE00
	li       r3, 1
	bl       GXSetNumTevStages
	lbz      r0, 0x2f(r31)
	li       r3, 0
	lbz      r5, 0x2e(r31)
	rlwinm   r6, r0, 0x1c, 0x1c, 0x1f
	clrlwi   r7, r0, 0x1c
	rlwinm   r4, r5, 0x1c, 0x1c, 0x1f
	clrlwi   r5, r5, 0x1c
	bl       GXSetTevColorIn
	lbz      r5, 0x32(r31)
	li       r3, 0
	lbz      r6, 0x33(r31)
	rlwinm   r0, r5, 0, 0x18, 0x1a
	srawi    r4, r0, 5
	rlwinm   r7, r6, 0x1c, 0x1d, 0x1f
	rlwinm   r0, r6, 0x19, 0x1f, 0x1f
	rlwimi   r0, r5, 1, 0x1d, 0x1e
	clrlwi   r4, r4, 0x18
	rlwinm   r5, r5, 0x1e, 0x1d, 0x1f
	clrlwi   r6, r0, 0x18
	bl       GXSetTevAlphaIn
	lbz      r7, 0x2d(r31)
	li       r3, 0
	rlwinm   r0, r7, 0, 0x1a, 0x1b
	clrlwi   r5, r7, 0x1e
	srawi    r6, r0, 4
	rlwinm   r9, r7, 0x1e, 0x1f, 0x1f
	rlwinm   r0, r7, 0x1d, 0x1d, 0x1e
	cmplwi   r5, 3
	add      r4, r9, r0
	rlwinm   r8, r7, 0x1a, 0x1e, 0x1f
	addi     r0, r4, 8
	clrlwi   r6, r6, 0x18
	rlwinm   r7, r7, 0x1d, 0x1f, 0x1f
	clrlwi   r0, r0, 0x18
	beq      lbl_8004AED0
	mr       r0, r9

lbl_8004AED0:
	clrlwi   r4, r0, 0x18
	bl       GXSetTevColorOp
	lbz      r7, 0x31(r31)
	li       r3, 0
	rlwinm   r0, r7, 0, 0x1a, 0x1b
	clrlwi   r5, r7, 0x1e
	srawi    r6, r0, 4
	rlwinm   r9, r7, 0x1e, 0x1f, 0x1f
	rlwinm   r0, r7, 0x1d, 0x1d, 0x1e
	cmplwi   r5, 3
	add      r4, r9, r0
	rlwinm   r8, r7, 0x1a, 0x1e, 0x1f
	addi     r0, r4, 8
	clrlwi   r6, r6, 0x18
	rlwinm   r7, r7, 0x1d, 0x1f, 0x1f
	clrlwi   r0, r0, 0x18
	beq      lbl_8004AF18
	mr       r0, r9

lbl_8004AF18:
	clrlwi   r4, r0, 0x18
	bl       GXSetTevAlphaOp
	lbz      r0, 0x44(r31)
	li       r4, 0
	cmplwi   r0, 0xff
	beq      lbl_8004AF34
	mr       r4, r0

lbl_8004AF34:
	li       r3, 0
	bl       GXSetTevKColorSel
	lbz      r0, 0x45(r31)
	li       r4, 0
	cmplwi   r0, 0xff
	beq      lbl_8004AF50
	mr       r4, r0

lbl_8004AF50:
	li       r3, 0
	bl       GXSetTevKAlphaSel
	li       r28, 0
	mr       r29, r31

lbl_8004AF60:
	lwz      r0, 0x34(r29)
	mr       r3, r28
	addi     r4, r1, 8
	stw      r0, 8(r1)
	bl       GXSetTevKColor
	addi     r28, r28, 1
	addi     r29, r29, 4
	cmpwi    r28, 4
	blt      lbl_8004AF60
	lbz      r0, 0x33(r31)
	li       r3, 0
	clrlwi   r4, r0, 0x1e
	rlwinm   r5, r0, 0x1e, 0x1e, 0x1f
	bl       GXSetTevSwapMode
	li       r28, 0

lbl_8004AF9C:
	addi     r0, r28, 0x46
	mr       r3, r28
	lbzx     r0, r31, r0
	rlwinm   r4, r0, 0x1a, 0x1e, 0x1f
	rlwinm   r5, r0, 0x1c, 0x1e, 0x1f
	rlwinm   r6, r0, 0x1e, 0x1e, 0x1f
	clrlwi   r7, r0, 0x1e
	bl       GXSetTevSwapModeTable
	addi     r28, r28, 1
	cmpwi    r28, 4
	blt      lbl_8004AF9C
	addi     r3, r31, 0x4c
	li       r4, 0
	bl       load__14J2DIndTevStageFUc
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	lwz      r29, 0x24(r1)
	lwz      r28, 0x20(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	8004AFF4
 * Size:	000048
 * loadTexture__12J2DTevBlock1F11_GXTexMapIDUl
 */
void J2DTevBlock1::loadTexture(_GXTexMapID id, unsigned long index)
{
	if (index == 0 && m_textures[index] != nullptr && m_textures[index]->_20 != nullptr) {
		m_textures[index]->load(id);
	}
}

/*
 * --INFO--
 * Address:	8004B03C
 * Size:	000110
 * __ct__12J2DTevBlock2Fv
 */
J2DTevBlock2::J2DTevBlock2()
    : J2DTevBlock()
    , m_orders()
    , m_colors()
    , m_stages()
    , m_kColors()
    , m_swapModeTables()
    , m_indStages()
{
	for (int i = 0; i < 2; i++) {
		m_textures[i] = nullptr;
	}
	_78 = 0;
	initialize();
}

/*
 * --INFO--
 * Address:	8004B14C
 * Size:	0000D8
 * __dt__12J2DTevBlock2Fv
 */
J2DTevBlock2::~J2DTevBlock2()
{
	if ((_78 & 1) != 0) {
		delete m_textures[0];
	}
	if ((_78 & 2) != 0) {
		delete m_textures[1];
	}
	delete m_palettes[0];
	delete m_palettes[1];
	if ((_78 & 0x80) != 0) {
		delete m_font;
	}
}

/*
 * --INFO--
 * Address:	8004B224
 * Size:	000350
 * initialize__12J2DTevBlock2Fv
 */
void J2DTevBlock2::initialize()
{
	/*
	stwu     r1, -0x40(r1)
	addi     r7, r2, j2dDefaultTevColor@sda21
	lis      r4, 0x0000FFFF@ha
	lha      r12, 2(r7)
	stw      r31, 0x3c(r1)
	addi     r0, r4, 0x0000FFFF@l
	lha      r31, j2dDefaultTevColor@sda21(r2)
	li       r9, 1
	stw      r30, 0x38(r1)
	li       r8, 0xc0
	lha      r11, 4(r7)
	li       r6, 0xc1
	stw      r29, 0x34(r1)
	li       r5, 0xc2
	lha      r10, 6(r7)
	li       r4, 0xc3
	stw      r28, 0x30(r1)
	addi     r28, r2, j2dDefaultTevOrderInfoNull@sda21
	mr       r29, r3
	lwz      r7, j2dDefaultTevKColor@sda21(r2)
	sth      r0, 4(r3)
	sth      r0, 6(r3)
	sth      r0, 8(r3)
	li       r0, 2
	lbz      r30, j2dDefaultTevOrderInfoNull@sda21(r2)
	stb      r30, 0xa(r3)
	lbz      r30, 1(r28)
	stb      r30, 0xb(r3)
	lbz      r30, 2(r28)
	stb      r30, 0xc(r3)
	lbz      r30, j2dDefaultTevOrderInfoNull@sda21(r2)
	stb      r30, 0xe(r3)
	lbz      r30, 1(r28)
	stb      r30, 0xf(r3)
	lbz      r30, 2(r28)
	stb      r30, 0x10(r3)
	sth      r31, 0x12(r3)
	sth      r12, 0x14(r3)
	sth      r11, 0x16(r3)
	sth      r10, 0x18(r3)
	sth      r31, 0x1a(r3)
	sth      r12, 0x1c(r3)
	sth      r11, 0x1e(r3)
	sth      r10, 0x20(r3)
	sth      r31, 0x22(r3)
	sth      r12, 0x24(r3)
	sth      r11, 0x26(r3)
	sth      r10, 0x28(r3)
	sth      r31, 0x2a(r3)
	sth      r12, 0x2c(r3)
	sth      r11, 0x2e(r3)
	sth      r10, 0x30(r3)
	stb      r9, 0x32(r3)
	stb      r8, 0x33(r3)
	stb      r6, 0x37(r3)
	stb      r5, 0x3b(r3)
	stb      r4, 0x3f(r3)
	mtctr    r0

lbl_8004B30C:
	stw      r7, 8(r1)
	lbz      r6, 8(r1)
	lbz      r5, 9(r1)
	stb      r6, 0x44(r29)
	lbz      r4, 0xa(r1)
	lbz      r0, 0xb(r1)
	stb      r5, 0x45(r29)
	stb      r4, 0x46(r29)
	stw      r7, 8(r1)
	stb      r6, 0xc(r1)
	lbz      r6, 8(r1)
	stb      r0, 0x47(r29)
	stb      r5, 0xd(r1)
	lbz      r5, 9(r1)
	stb      r6, 0x48(r29)
	stb      r4, 0xe(r1)
	lbz      r4, 0xa(r1)
	stb      r5, 0x49(r29)
	stb      r0, 0xf(r1)
	lbz      r0, 0xb(r1)
	stb      r4, 0x4a(r29)
	stb      r0, 0x4b(r29)
	addi     r29, r29, 8
	stb      r6, 0xc(r1)
	stb      r5, 0xd(r1)
	stb      r4, 0xe(r1)
	stb      r0, 0xf(r1)
	bdnz     lbl_8004B30C
	li       r0, 0xff
	lis      r4, j2dDefaultIndTevStageInfo@ha
	stb      r0, 0x54(r3)
	addi     r5, r2, j2dDefaultTevSwapModeTable@sda21
	addi     r4, r4, j2dDefaultIndTevStageInfo@l
	stb      r0, 0x55(r3)
	stb      r0, 0x56(r3)
	stb      r0, 0x57(r3)
	lbz      r0, 1(r5)
	lbz      r7, 2(r5)
	lbz      r6, j2dDefaultTevSwapModeTable@sda21(r2)
	rlwinm   r0, r0, 4, 0x14, 0x1b
	slwi     r7, r7, 2
	lbz      r8, 3(r5)
	add      r0, r0, r7
	slwi     r6, r6, 6
	add      r0, r0, r8
	add      r0, r6, r0
	stb      r0, 0x58(r3)
	lbz      r0, 1(r5)
	lbz      r7, 2(r5)
	lbz      r6, j2dDefaultTevSwapModeTable@sda21(r2)
	rlwinm   r0, r0, 4, 0x14, 0x1b
	slwi     r7, r7, 2
	lbz      r8, 3(r5)
	add      r0, r0, r7
	slwi     r6, r6, 6
	add      r0, r0, r8
	add      r0, r6, r0
	stb      r0, 0x59(r3)
	lbz      r0, 1(r5)
	lbz      r7, 2(r5)
	lbz      r6, j2dDefaultTevSwapModeTable@sda21(r2)
	rlwinm   r0, r0, 4, 0x14, 0x1b
	slwi     r7, r7, 2
	lbz      r8, 3(r5)
	add      r0, r0, r7
	slwi     r6, r6, 6
	add      r0, r0, r8
	add      r0, r6, r0
	stb      r0, 0x5a(r3)
	lbz      r7, 2(r5)
	lbz      r0, 1(r5)
	lbz      r6, j2dDefaultTevSwapModeTable@sda21(r2)
	slwi     r7, r7, 2
	slwi     r0, r0, 4
	lbz      r8, 3(r5)
	add      r0, r0, r7
	slwi     r5, r6, 6
	add      r0, r0, r8
	add      r0, r5, r0
	stb      r0, 0x5b(r3)
	lwz      r5, 4(r4)
	lwz      r0, 8(r4)
	stw      r5, 0x20(r1)
	lwz      r5, 0(r4)
	stw      r0, 0x24(r1)
	lbz      r0, 0x23(r1)
	stw      r5, 0x1c(r1)
	lbz      r5, 0x24(r1)
	slwi     r0, r0, 0x15
	lbz      r6, 0x22(r1)
	slwi     r5, r5, 0x16
	lbz      r7, 0x1f(r1)
	or       r0, r5, r0
	slwi     r6, r6, 0x14
	lbz      r8, 0x21(r1)
	or       r0, r6, r0
	slwi     r5, r7, 0x10
	lbz      r9, 0x20(r1)
	lbz      r10, 0x1e(r1)
	or       r0, r5, r0
	slwi     r6, r8, 0xb
	lbz      r11, 0x1d(r1)
	or       r0, r6, r0
	slwi     r7, r9, 8
	or       r0, r7, r0
	slwi     r5, r10, 4
	slwi     r6, r11, 2
	lbz      r7, 0x1c(r1)
	or       r0, r5, r0
	or       r0, r6, r0
	or       r0, r7, r0
	stw      r0, 0x5c(r3)
	lwz      r6, 0(r4)
	lwz      r5, 4(r4)
	lwz      r0, 8(r4)
	stw      r6, 0x10(r1)
	stw      r5, 0x14(r1)
	stw      r0, 0x18(r1)
	lbz      r5, 0x18(r1)
	li       r0, 0
	lbz      r4, 0x17(r1)
	lbz      r6, 0x16(r1)
	slwi     r5, r5, 0x16
	slwi     r4, r4, 0x15
	lbz      r7, 0x13(r1)
	lbz      r8, 0x15(r1)
	slwi     r6, r6, 0x14
	or       r4, r5, r4
	lbz      r9, 0x14(r1)
	lbz      r10, 0x12(r1)
	slwi     r5, r7, 0x10
	or       r4, r6, r4
	lbz      r11, 0x11(r1)
	slwi     r6, r8, 0xb
	slwi     r7, r9, 8
	or       r4, r5, r4
	slwi     r5, r10, 4
	or       r4, r6, r4
	slwi     r6, r11, 2
	or       r4, r7, r4
	lbz      r7, 0x10(r1)
	or       r4, r5, r4
	or       r4, r6, r4
	or       r4, r7, r4
	stw      r4, 0x60(r3)
	stw      r0, 0x6c(r3)
	stw      r0, 0x70(r3)
	stw      r0, 0x74(r3)
	lwz      r31, 0x3c(r1)
	lwz      r30, 0x38(r1)
	lwz      r29, 0x34(r1)
	lwz      r28, 0x30(r1)
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	8004B574
 * Size:	0000E0
 * prepareTexture__12J2DTevBlock2FUc
 */
bool J2DTevBlock2::prepareTexture(unsigned char count)
{
	for (u8 i = 0; i < count; i++) {
		if (i >= 2) {
			return false;
		}
		if (m_textures[i] == nullptr) {
			m_textures[i] = new JUTTexture();
			if (m_textures[i] == nullptr) {
				return false;
			}
			_78 |= (1 << i);
		}
	}
	return true;
}

/*
 * --INFO--
 * Address:	8004B654
 * Size:	0002CC
 * insertTexture__12J2DTevBlock2FUlPC7ResTIMGP10JUTPalette
 */
bool J2DTevBlock2::insertTexture(unsigned long, const ResTIMG*, JUTPalette*)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stmw     r25, 0x14(r1)
	mr       r28, r4
	cmplwi   r28, 2
	mr       r27, r3
	mr       r29, r5
	mr       r30, r6
	bge      lbl_8004B684
	cmplwi   r29, 0
	bne      lbl_8004B68C

lbl_8004B684:
	li       r3, 0
	b        lbl_8004B90C

lbl_8004B68C:
	li       r31, 0
	b        lbl_8004B6B8

lbl_8004B694:
	rlwinm   r3, r31, 2, 0x16, 0x1d
	addi     r0, r3, 0x64
	lwzx     r3, r27, r0
	cmplwi   r3, 0
	beq      lbl_8004B6C4
	lwz      r0, 0x20(r3)
	cmplwi   r0, 0
	beq      lbl_8004B6C4
	addi     r31, r31, 1

lbl_8004B6B8:
	clrlwi   r0, r31, 0x18
	cmplwi   r0, 2
	blt      lbl_8004B694

lbl_8004B6C4:
	clrlwi   r0, r31, 0x18
	cmplw    r0, r28
	bge      lbl_8004B6D8
	li       r3, 0
	b        lbl_8004B90C

lbl_8004B6D8:
	cmplwi   r0, 2
	bne      lbl_8004B6E8
	li       r3, 0
	b        lbl_8004B90C

lbl_8004B6E8:
	lbz      r0, 8(r29)
	li       r25, 0
	cmplwi   r0, 0
	beq      lbl_8004B73C
	cmplwi   r30, 0
	bne      lbl_8004B73C
	lwz      r4, 0x64(r27)
	cmplwi   r4, 0
	beq      lbl_8004B73C
	lwz      r3, 0x20(r4)
	cmplwi   r3, 0
	beq      lbl_8004B73C
	lbz      r0, 8(r3)
	cmplwi   r0, 0
	beq      lbl_8004B73C
	lbz      r0, 0x3a(r4)
	cmpwi    r0, 0
	beq      lbl_8004B738
	cmpwi    r0, 0x10
	bne      lbl_8004B73C

lbl_8004B738:
	li       r25, 1

lbl_8004B73C:
	rlwinm   r0, r31, 2, 0x16, 0x1d
	add      r3, r27, r0
	lwz      r26, 0x64(r3)
	cmplwi   r26, 0
	bne      lbl_8004B808
	li       r3, 0x40
	bl       __nw__FUl
	or.      r31, r3, r3
	beq      lbl_8004B780
	li       r0, 0
	mr       r4, r29
	stw      r0, 0x28(r31)
	mr       r5, r25
	bl       storeTIMG__10JUTTextureFPC7ResTIMGUc
	lbz      r0, 0x3b(r31)
	rlwinm   r0, r0, 0, 0x1e, 0x1e
	stb      r0, 0x3b(r31)

lbl_8004B780:
	cmplwi   r31, 0
	bne      lbl_8004B790
	li       r3, 0
	b        lbl_8004B90C

lbl_8004B790:
	cmplwi   r30, 0
	beq      lbl_8004B7A8
	mr       r3, r31
	mr       r4, r29
	mr       r5, r30
	bl       storeTIMG__10JUTTextureFPC7ResTIMGP10JUTPalette

lbl_8004B7A8:
	cmplwi   r28, 0
	bne      lbl_8004B7C8
	lwz      r0, 0x64(r27)
	stw      r0, 0x68(r27)
	lwz      r0, 0x6c(r27)
	stw      r0, 0x70(r27)
	lhz      r0, 4(r27)
	sth      r0, 6(r27)

lbl_8004B7C8:
	slwi     r0, r28, 2
	mr       r3, r27
	add      r5, r27, r0
	clrlwi   r4, r28, 0x18
	stw      r31, 0x64(r5)
	li       r5, 1
	lwz      r12, 0(r27)
	lwz      r12, 0xac(r12)
	mtctr    r12
	bctrl
	li       r0, 1
	lbz      r3, 0x78(r27)
	slw      r0, r0, r28
	or       r0, r3, r0
	stb      r0, 0x78(r27)
	b        lbl_8004B8E4

lbl_8004B808:
	cmplwi   r30, 0
	bne      lbl_8004B824
	mr       r3, r26
	mr       r4, r29
	mr       r5, r25
	bl       storeTIMG__10JUTTextureFPC7ResTIMGUc
	b        lbl_8004B834

lbl_8004B824:
	mr       r3, r26
	mr       r4, r29
	mr       r5, r30
	bl       storeTIMG__10JUTTextureFPC7ResTIMGP10JUTPalette

lbl_8004B834:
	lbz      r0, 0x78(r27)
	cmplwi   r28, 0
	clrlwi   r3, r0, 0x1f
	rlwinm   r0, r0, 0x1f, 0x1f, 0x1f
	stb      r3, 8(r1)
	stb      r0, 9(r1)
	bne      lbl_8004B878
	clrlwi   r0, r31, 0x18
	cmplwi   r0, 1
	bne      lbl_8004B878
	lwz      r0, 0x64(r27)
	stb      r3, 9(r1)
	stw      r0, 0x68(r27)
	lwz      r0, 0x6c(r27)
	stw      r0, 0x70(r27)
	lhz      r0, 4(r27)
	sth      r0, 6(r27)

lbl_8004B878:
	slwi     r0, r28, 2
	addi     r5, r1, 8
	add      r3, r27, r0
	li       r7, 0
	stw      r26, 0x64(r3)
	li       r3, 1
	lbz      r0, 0x78(r27)
	rlwinm   r0, r0, 0, 0x18, 0x18
	stb      r0, 0x78(r27)
	b        lbl_8004B8C4

lbl_8004B8A0:
	clrlwi   r6, r7, 0x18
	lbzx     r0, r5, r6
	cmplwi   r0, 0
	beq      lbl_8004B8C0
	lbz      r4, 0x78(r27)
	slw      r0, r3, r6
	or       r0, r4, r0
	stb      r0, 0x78(r27)

lbl_8004B8C0:
	addi     r7, r7, 1

lbl_8004B8C4:
	clrlwi   r0, r7, 0x18
	cmplwi   r0, 2
	blt      lbl_8004B8A0
	li       r0, 1
	lbz      r3, 0x78(r27)
	slw      r0, r0, r28
	or       r0, r3, r0
	stb      r0, 0x78(r27)

lbl_8004B8E4:
	slwi     r3, r28, 2
	slwi     r0, r28, 1
	add      r4, r27, r3
	li       r5, 0
	lis      r3, 0x0000FFFF@ha
	stw      r5, 0x6c(r4)
	addi     r4, r3, 0x0000FFFF@l
	add      r3, r27, r0
	sth      r4, 4(r3)
	li       r3, 1

lbl_8004B90C:
	lmw      r25, 0x14(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	8004B920
 * Size:	000168
 * insertTexture__12J2DTevBlock2FUlP10JUTTexture
 */
bool J2DTevBlock2::insertTexture(unsigned long, JUTTexture*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r5
	stw      r30, 0x18(r1)
	mr       r30, r4
	cmplwi   r30, 2
	stw      r29, 0x14(r1)
	mr       r29, r3
	bge      lbl_8004B954
	cmplwi   r31, 0
	bne      lbl_8004B95C

lbl_8004B954:
	li       r3, 0
	b        lbl_8004BA6C

lbl_8004B95C:
	li       r4, 0
	b        lbl_8004B988

lbl_8004B964:
	rlwinm   r3, r4, 2, 0x16, 0x1d
	addi     r0, r3, 0x64
	lwzx     r3, r29, r0
	cmplwi   r3, 0
	beq      lbl_8004B994
	lwz      r0, 0x20(r3)
	cmplwi   r0, 0
	beq      lbl_8004B994
	addi     r4, r4, 1

lbl_8004B988:
	clrlwi   r0, r4, 0x18
	cmplwi   r0, 2
	blt      lbl_8004B964

lbl_8004B994:
	clrlwi   r0, r4, 0x18
	cmplw    r0, r30
	bge      lbl_8004B9A8
	li       r3, 0
	b        lbl_8004BA6C

lbl_8004B9A8:
	cmplwi   r0, 2
	bne      lbl_8004B9B8
	li       r3, 0
	b        lbl_8004BA6C

lbl_8004B9B8:
	lwz      r3, 0x68(r29)
	cmplwi   r3, 0
	beq      lbl_8004B9F0
	lwz      r0, 0x20(r3)
	cmplwi   r0, 0
	bne      lbl_8004B9F0
	lbz      r0, 0x78(r29)
	rlwinm.  r0, r0, 0, 0x1e, 0x1e
	beq      lbl_8004B9E4
	li       r4, 1
	bl       __dt__10JUTTextureFv

lbl_8004B9E4:
	lbz      r0, 0x78(r29)
	rlwinm   r0, r0, 0, 0x1f, 0x1d
	stb      r0, 0x78(r29)

lbl_8004B9F0:
	cmplwi   r30, 0
	bne      lbl_8004BA10
	lwz      r0, 0x64(r29)
	stw      r0, 0x68(r29)
	lwz      r0, 0x6c(r29)
	stw      r0, 0x70(r29)
	lhz      r0, 4(r29)
	sth      r0, 6(r29)

lbl_8004BA10:
	slwi     r3, r30, 2
	slwi     r0, r30, 1
	add      r5, r29, r3
	lis      r3, 0x0000FFFF@ha
	stw      r31, 0x64(r5)
	li       r4, 0
	addi     r7, r3, 0x0000FFFF@l
	add      r6, r29, r0
	stw      r4, 0x6c(r5)
	mr       r3, r29
	clrlwi   r4, r30, 0x18
	li       r5, 1
	sth      r7, 4(r6)
	lwz      r12, 0(r29)
	lwz      r12, 0xac(r12)
	mtctr    r12
	bctrl
	li       r0, 1
	lbz      r4, 0x78(r29)
	slw      r0, r0, r30
	li       r3, 1
	andc     r0, r4, r0
	stb      r0, 0x78(r29)

lbl_8004BA6C:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8004BA88
 * Size:	00021C
 * setTexture__12J2DTevBlock2FUlPC7ResTIMG
 */
bool J2DTevBlock2::setTexture(unsigned long index, const ResTIMG* img)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stmw     r25, 0x14(r1)
	mr       r26, r4
	cmplwi   r26, 2
	mr       r25, r3
	mr       r27, r5
	blt      lbl_8004BAB4
	li       r3, 0
	b        lbl_8004BC90

lbl_8004BAB4:
	cmplwi   r27, 0
	li       r28, 0
	beq      lbl_8004BB20
	lbz      r0, 8(r27)
	cmplwi   r0, 0
	beq      lbl_8004BB20
	cntlzw   r0, r26
	rlwinm   r0, r0, 0x1d, 0x16, 0x1d
	add      r3, r25, r0
	lwz      r4, 0x64(r3)
	cmplwi   r4, 0
	beq      lbl_8004BB20
	lwz      r3, 0x20(r4)
	cmplwi   r3, 0
	beq      lbl_8004BB20
	lbz      r0, 8(r3)
	cmplwi   r0, 0
	beq      lbl_8004BB20
	lbz      r3, 0x3a(r4)
	li       r0, 0
	cmpwi    r3, 0x10
	blt      lbl_8004BB10
	li       r0, 0x10

lbl_8004BB10:
	subf     r0, r0, r3
	clrlwi.  r0, r0, 0x18
	bne      lbl_8004BB20
	li       r28, 1

lbl_8004BB20:
	slwi     r29, r26, 2
	add      r31, r25, r29
	lwz      r3, 0x64(r31)
	cmplwi   r3, 0
	bne      lbl_8004BBB4
	cmplwi   r27, 0
	beq      lbl_8004BB9C
	li       r3, 0x40
	bl       __nw__FUl
	or.      r30, r3, r3
	beq      lbl_8004BB6C
	li       r0, 0
	mr       r4, r27
	stw      r0, 0x28(r30)
	mr       r5, r28
	bl       storeTIMG__10JUTTextureFPC7ResTIMGUc
	lbz      r0, 0x3b(r30)
	rlwinm   r0, r0, 0, 0x1e, 0x1e
	stb      r0, 0x3b(r30)

lbl_8004BB6C:
	stw      r30, 0x64(r31)
	lwz      r0, 0x64(r31)
	cmplwi   r0, 0
	bne      lbl_8004BB84
	li       r3, 0
	b        lbl_8004BC90

lbl_8004BB84:
	li       r0, 1
	lbz      r3, 0x78(r25)
	slw      r0, r0, r26
	or       r0, r3, r0
	stb      r0, 0x78(r25)
	b        lbl_8004BC64

lbl_8004BB9C:
	li       r0, 1
	lbz      r3, 0x78(r25)
	slw      r0, r0, r26
	andc     r0, r3, r0
	stb      r0, 0x78(r25)
	b        lbl_8004BC64

lbl_8004BBB4:
	li       r0, 1
	lbz      r4, 0x78(r25)
	slw      r30, r0, r26
	and.     r0, r4, r30
	beq      lbl_8004BC00
	cmplwi   r27, 0
	beq      lbl_8004BBE0
	mr       r4, r27
	mr       r5, r28
	bl       storeTIMG__10JUTTextureFPC7ResTIMGUc
	b        lbl_8004BC64

lbl_8004BBE0:
	li       r4, 1
	bl       __dt__10JUTTextureFv
	li       r0, 0
	stw      r0, 0x64(r31)
	lbz      r0, 0x78(r25)
	andc     r0, r0, r30
	stb      r0, 0x78(r25)
	b        lbl_8004BC64

lbl_8004BC00:
	li       r0, 0
	cmplwi   r27, 0
	stw      r0, 0x64(r31)
	beq      lbl_8004BC64
	li       r3, 0x40
	bl       __nw__FUl
	or.      r28, r3, r3
	beq      lbl_8004BC40
	li       r0, 0
	mr       r4, r27
	stw      r0, 0x28(r28)
	li       r5, 0
	bl       storeTIMG__10JUTTextureFPC7ResTIMGUc
	lbz      r0, 0x3b(r28)
	rlwinm   r0, r0, 0, 0x1e, 0x1e
	stb      r0, 0x3b(r28)

lbl_8004BC40:
	stw      r28, 0x64(r31)
	lwz      r0, 0x64(r31)
	cmplwi   r0, 0
	bne      lbl_8004BC58
	li       r3, 0
	b        lbl_8004BC90

lbl_8004BC58:
	lbz      r0, 0x78(r25)
	or       r0, r0, r30
	stb      r0, 0x78(r25)

lbl_8004BC64:
	add      r27, r25, r29
	lwz      r3, 0x6c(r27)
	bl       __dl__FPv
	li       r4, 0
	slwi     r0, r26, 1
	lis      r3, 0x0000FFFF@ha
	stw      r4, 0x6c(r27)
	addi     r4, r3, 0x0000FFFF@l
	add      r3, r25, r0
	sth      r4, 4(r3)
	li       r3, 1

lbl_8004BC90:
	lmw      r25, 0x14(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	8004BCA4
 * Size:	0000A8
 * setTexture__12J2DTevBlock2FUlP10JUTTexture
 */
bool J2DTevBlock2::setTexture(unsigned long index, JUTTexture* texture)
{
	if (index >= 2) {
		return false;
	}
	if ((_78 & 1 << index) != 0) {
		delete m_textures[index];
	}
	m_textures[index] = texture;
	_78 &= ~(1 << index);
	delete m_palettes[index];
	m_palettes[index]   = nullptr;
	m_texIndices[index] = 0xFFFF;
	return true;
}

/*
 * --INFO--
 * Address:	8004BD4C
 * Size:	0000D4
 * removeTexture__12J2DTevBlock2FUl
 */
bool J2DTevBlock2::removeTexture(unsigned long)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	cmplwi   r31, 2
	stw      r30, 8(r1)
	mr       r30, r3
	blt      lbl_8004BD78
	li       r3, 0
	b        lbl_8004BE08

lbl_8004BD78:
	li       r0, 1
	lbz      r3, 0x78(r30)
	slw      r0, r0, r31
	and.     r0, r3, r0
	beq      lbl_8004BDA0
	slwi     r0, r31, 2
	li       r4, 1
	add      r3, r30, r0
	lwz      r3, 0x64(r3)
	bl       __dt__10JUTTextureFv

lbl_8004BDA0:
	slwi     r0, r31, 2
	add      r3, r30, r0
	lwz      r3, 0x6c(r3)
	bl       __dl__FPv
	cmplwi   r31, 0
	bne      lbl_8004BDD0
	lwz      r0, 0x68(r30)
	stw      r0, 0x64(r30)
	lwz      r0, 0x70(r30)
	stw      r0, 0x6c(r30)
	lhz      r0, 6(r30)
	sth      r0, 4(r30)

lbl_8004BDD0:
	li       r5, 0
	lis      r3, 0x0000FFFF@ha
	stw      r5, 0x68(r30)
	addi     r0, r3, 0x0000FFFF@l
	mr       r3, r30
	clrlwi   r4, r31, 0x18
	stw      r5, 0x70(r30)
	li       r5, 0
	sth      r0, 6(r30)
	lwz      r12, 0(r30)
	lwz      r12, 0xac(r12)
	mtctr    r12
	bctrl
	li       r3, 1

lbl_8004BE08:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8004BE20
 * Size:	0000BC
 * setFont__12J2DTevBlock2FP7ResFONT
 */
bool J2DTevBlock2::setFont(ResFONT* font)
{
	if (font == nullptr) {
		return false;
	}
	JUTResFont* jutFont = new JUTResFont(font, nullptr);
	if (jutFont == nullptr) {
		return false;
	}
	if ((_78 & 0x80) != 0) {
		delete m_font;
	}
	m_font = jutFont;
	_78    = _78 & 0x7F | 0x80;
	return true;
}

/*
 * --INFO--
 * Address:	8004BEDC
 * Size:	000080
 * setFont__12J2DTevBlock2FP7JUTFont
 */
bool J2DTevBlock2::setFont(JUTFont* font)
{
	if (font == nullptr) {
		return false;
	}
	if ((_78 & 0x80) != 0) {
		delete m_font;
	}
	m_font = static_cast<JUTResFont*>(font);
	_78 &= 0x7F;
	return true;
}

/*
 * --INFO--
 * Address:	8004BF5C
 * Size:	0000D0
 * setPalette__12J2DTevBlock2FUlPC7ResTLUT
 */
bool J2DTevBlock2::setPalette(unsigned long index, const ResTLUT* lut)
{
	if (index >= 2) {
		return false;
	}
	if (lut != nullptr) {
		if (m_palettes[index] == nullptr) {
			m_palettes[index] = new JUTPalette(index, const_cast<ResTLUT*>(lut));
			if (m_palettes[index] == nullptr) {
				return false;
			}
		} else {
			m_palettes[index]->storeTLUT(GX_TLUT0, const_cast<ResTLUT*>(lut));
		}
		if (m_textures[index] != nullptr) {
			m_textures[index]->attachPalette(m_palettes[index]);
		}
	} else {
		delete m_palettes[index];
		m_palettes[index] = nullptr;
	}
	return true;
}

/*
 * --INFO--
 * Address:	8004C02C
 * Size:	000088
 * shiftDeleteFlag__12J2DTevBlock2FUcb
 */
void J2DTevBlock2::shiftDeleteFlag(unsigned char p1, bool p2)
{
	u8 fontFlag = _78 & 0x80;
	_78 &= 0x7F;
	if (p2) {
		u32 v1 = ((1 << p1) - 1);
		_78    = (_78 & v1) | ((_78 & ~v1) << 1);
	} else {
		_78 = (_78 & (1 << p1) - 1) | ((_78 & ~((1 << (p1 + 1)) - 1)) >> 1);
	}
	_78 = _78 | fontFlag;
}

/*
 * --INFO--
 * Address:	8004C0B4
 * Size:	0002E8
 * setGX__12J2DTevBlock2Fv
 */
void J2DTevBlock2::setGX()
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	stw      r30, 0x28(r1)
	stw      r29, 0x24(r1)
	mr       r29, r3
	stw      r28, 0x20(r1)
	li       r28, 0

lbl_8004C0D8:
	mr       r3, r29
	mr       r4, r28
	lwz      r12, 0(r29)
	mr       r5, r28
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	addi     r28, r28, 1
	cmpwi    r28, 2
	blt      lbl_8004C0D8
	mr       r30, r29
	li       r28, 0
	b        lbl_8004C128

lbl_8004C10C:
	lbz      r4, 0xa(r30)
	mr       r3, r28
	lbz      r5, 0xb(r30)
	lbz      r6, 0xc(r30)
	bl       GXSetTevOrder
	addi     r30, r30, 4
	addi     r28, r28, 1

lbl_8004C128:
	lbz      r0, 0x32(r29)
	cmpw     r28, r0
	blt      lbl_8004C10C
	mr       r31, r29
	addi     r30, r1, 0xc
	li       r28, 0

lbl_8004C140:
	lwz      r4, 0x12(r31)
	cmpwi    r28, 3
	lwz      r0, 0x16(r31)
	li       r3, 0
	stw      r4, 0xc(r1)
	stw      r0, 0x10(r1)
	beq      lbl_8004C160
	addi     r3, r28, 1

lbl_8004C160:
	mr       r4, r30
	bl       GXSetTevColorS10
	addi     r28, r28, 1
	addi     r31, r31, 8
	cmpwi    r28, 4
	blt      lbl_8004C140
	lbz      r3, 0x32(r29)
	bl       GXSetNumTevStages
	mr       r30, r29
	li       r31, 0
	b        lbl_8004C2B0

lbl_8004C18C:
	lbz      r0, 0x36(r30)
	mr       r3, r31
	lbz      r5, 0x35(r30)
	rlwinm   r6, r0, 0x1c, 0x1c, 0x1f
	clrlwi   r7, r0, 0x1c
	rlwinm   r4, r5, 0x1c, 0x1c, 0x1f
	clrlwi   r5, r5, 0x1c
	bl       GXSetTevColorIn
	lbz      r5, 0x39(r30)
	mr       r3, r31
	lbz      r6, 0x3a(r30)
	rlwinm   r0, r5, 0, 0x18, 0x1a
	srawi    r4, r0, 5
	rlwinm   r7, r6, 0x1c, 0x1d, 0x1f
	rlwinm   r0, r6, 0x19, 0x1f, 0x1f
	rlwimi   r0, r5, 1, 0x1d, 0x1e
	clrlwi   r4, r4, 0x18
	rlwinm   r5, r5, 0x1e, 0x1d, 0x1f
	clrlwi   r6, r0, 0x18
	bl       GXSetTevAlphaIn
	lbz      r7, 0x34(r30)
	mr       r3, r31
	rlwinm   r0, r7, 0, 0x1a, 0x1b
	clrlwi   r5, r7, 0x1e
	srawi    r6, r0, 4
	rlwinm   r9, r7, 0x1e, 0x1f, 0x1f
	rlwinm   r0, r7, 0x1d, 0x1d, 0x1e
	cmplwi   r5, 3
	add      r4, r9, r0
	rlwinm   r8, r7, 0x1a, 0x1e, 0x1f
	addi     r0, r4, 8
	clrlwi   r6, r6, 0x18
	rlwinm   r7, r7, 0x1d, 0x1f, 0x1f
	clrlwi   r0, r0, 0x18
	beq      lbl_8004C21C
	mr       r0, r9

lbl_8004C21C:
	clrlwi   r4, r0, 0x18
	bl       GXSetTevColorOp
	lbz      r7, 0x38(r30)
	mr       r3, r31
	rlwinm   r0, r7, 0, 0x1a, 0x1b
	clrlwi   r5, r7, 0x1e
	srawi    r6, r0, 4
	rlwinm   r9, r7, 0x1e, 0x1f, 0x1f
	rlwinm   r0, r7, 0x1d, 0x1d, 0x1e
	cmplwi   r5, 3
	add      r4, r9, r0
	rlwinm   r8, r7, 0x1a, 0x1e, 0x1f
	addi     r0, r4, 8
	clrlwi   r6, r6, 0x18
	rlwinm   r7, r7, 0x1d, 0x1f, 0x1f
	clrlwi   r0, r0, 0x18
	beq      lbl_8004C264
	mr       r0, r9

lbl_8004C264:
	clrlwi   r4, r0, 0x18
	bl       GXSetTevAlphaOp
	add      r28, r29, r31
	li       r4, 0
	lbz      r0, 0x54(r28)
	cmplwi   r0, 0xff
	beq      lbl_8004C284
	mr       r4, r0

lbl_8004C284:
	mr       r3, r31
	bl       GXSetTevKColorSel
	lbz      r0, 0x56(r28)
	li       r4, 0
	cmplwi   r0, 0xff
	beq      lbl_8004C2A0
	mr       r4, r0

lbl_8004C2A0:
	mr       r3, r31
	bl       GXSetTevKAlphaSel
	addi     r30, r30, 8
	addi     r31, r31, 1

lbl_8004C2B0:
	lbz      r0, 0x32(r29)
	cmpw     r31, r0
	blt      lbl_8004C18C
	li       r28, 0
	mr       r30, r29

lbl_8004C2C4:
	lwz      r0, 0x44(r30)
	mr       r3, r28
	addi     r4, r1, 8
	stw      r0, 8(r1)
	bl       GXSetTevKColor
	addi     r28, r28, 1
	addi     r30, r30, 4
	cmpwi    r28, 4
	blt      lbl_8004C2C4
	mr       r30, r29
	li       r28, 0
	b        lbl_8004C310

lbl_8004C2F4:
	lbz      r0, 0x3a(r30)
	mr       r3, r28
	clrlwi   r4, r0, 0x1e
	rlwinm   r5, r0, 0x1e, 0x1e, 0x1f
	bl       GXSetTevSwapMode
	addi     r30, r30, 8
	addi     r28, r28, 1

lbl_8004C310:
	lbz      r0, 0x32(r29)
	cmpw     r28, r0
	blt      lbl_8004C2F4
	li       r28, 0

lbl_8004C320:
	addi     r0, r28, 0x58
	mr       r3, r28
	lbzx     r0, r29, r0
	rlwinm   r4, r0, 0x1a, 0x1e, 0x1f
	rlwinm   r5, r0, 0x1c, 0x1e, 0x1f
	rlwinm   r6, r0, 0x1e, 0x1e, 0x1f
	clrlwi   r7, r0, 0x1e
	bl       GXSetTevSwapModeTable
	addi     r28, r28, 1
	cmpwi    r28, 4
	blt      lbl_8004C320
	li       r28, 0
	b        lbl_8004C36C

lbl_8004C354:
	rlwinm   r3, r28, 2, 0x16, 0x1d
	mr       r4, r28
	addi     r3, r3, 0x5c
	add      r3, r29, r3
	bl       load__14J2DIndTevStageFUc
	addi     r28, r28, 1

lbl_8004C36C:
	lbz      r0, 0x32(r29)
	clrlwi   r3, r28, 0x18
	cmplw    r3, r0
	blt      lbl_8004C354
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	lwz      r29, 0x24(r1)
	lwz      r28, 0x20(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	8004C39C
 * Size:	000048
 * loadTexture__12J2DTevBlock2F11_GXTexMapIDUl
 */
void J2DTevBlock2::loadTexture(_GXTexMapID id, unsigned long index)
{
	if (index < 2 && m_textures[index] != nullptr && m_textures[index]->_20 != nullptr) {
		m_textures[index]->load(id);
	}
}

/*
 * --INFO--
 * Address:	8004C3E4
 * Size:	000118
 */
J2DTevBlock4::J2DTevBlock4()
    : J2DTevBlock()
    , m_orders()
    , m_colors()
    , m_stages()
    , m_kColors()
    , m_swapModeTables()
    , m_indStages()
{
	for (int i = 0; i < 4; i++) {
		m_textures[i] = nullptr;
	}
	_B0 = 0;
	initialize();
}

/*
 * --INFO--
 * Address:	8004C4FC
 * Size:	0000D0
 */
J2DTevBlock4::~J2DTevBlock4()
{
	for (int i = 0; i < 4; i++) {
		if ((_B0 & 1 << i) != 0) {
			delete m_textures[i];
		}
		delete m_palettes[i];
	}
	if ((_B0 & 0x80) != 0) {
		delete m_font;
	}
}

/*
 * --INFO--
 * Address:	8004C5CC
 * Size:	0003BC
 */
void J2DTevBlock4::initialize()
{
	for (int i = 0; i < 4; i++) {
		m_texIndices[i] = 0xFFFF;
	}
	m_fontNo = 0xFFFF;
	for (int i = 0; i < 4; i++) {
		m_orders[i] = j2dDefaultTevOrderInfoNull;
	}
	for (int i = 0; i < 4; i++) {
		m_colors[i] = j2dDefaultTevColor;
	}
	m_stageNum = 1;
	for (int i = 0; i < 4; i++) {
		m_stages[i]._00            = 0xC0 + i * 2;
		m_stages[i]._04.asBytes[0] = 0xC1 + i * 2;
	}
	for (int i = 0; i < 2; i++) {
		m_kColors[0 + (2 * i)] = j2dDefaultTevKColor;
		m_kColors[1 + (2 * i)] = j2dDefaultTevKColor;
	}
	for (int i = 0; i < 4; i++) {
		m_kColorSels[i] = 0xFF;
		m_kAlphaSels[i] = 0xFF;
	}
	for (int i = 0; i < 4; i++) {
		// m_swapModeTables[i].m_data = j2dDefaultTevSwapModeTable[0] * 0x40 + j2dDefaultTevSwapModeTable[1] * 0x10
		//                    + j2dDefaultTevSwapModeTable[2] * 0x04 + j2dDefaultTevSwapModeTable[3];

		m_swapModeTables[i]._0 = j2dDefaultTevSwapModeTable[3];
		m_swapModeTables[i]._2 = j2dDefaultTevSwapModeTable[2];
		m_swapModeTables[i]._4 = j2dDefaultTevSwapModeTable[1];
		m_swapModeTables[i]._6 = j2dDefaultTevSwapModeTable[0];
		// m_swapModeTables[i]._0[0]._00 = j2dDefaultTevSwapModeTable[0];
		// m_swapModeTables[i]._0[1]._00 = j2dDefaultTevSwapModeTable[1];
		// m_swapModeTables[i]._0[2]._00 = j2dDefaultTevSwapModeTable[2];
		// m_swapModeTables[i]._0[3]._00 = j2dDefaultTevSwapModeTable[3];
	}
	for (int i = 0; i < 2; i++) {
		m_textures[0 + (2 * i)] = nullptr;
		m_textures[1 + (2 * i)] = nullptr;
	}
	for (int i = 0; i < 4; i++) {
		m_palettes[i] = nullptr;
	}
	m_font = nullptr;
	/*
	stwu     r1, -0x40(r1)
	lis      r4, 0x0000FFFF@ha
	addi     r0, r4, 0x0000FFFF@l
	addi     r5, r2, j2dDefaultTevOrderInfoNull@sda21
	stmw     r24, 0x20(r1)
	addi     r6, r2, j2dDefaultTevColor@sda21
	lha      r25, j2dDefaultTevColor@sda21(r2)
	li       r29, 1
	lha      r26, 2(r6)
	li       r30, 0xc0
	lha      r27, 4(r6)
	li       r31, 0xc1
	lha      r28, 6(r6)
	li       r12, 0xc2
	li       r11, 0xc3
	li       r10, 0xc4
	li       r9, 0xc5
	li       r7, 0xc6
	li       r6, 0xc7
	mr       r4, r3
	lwz      r8, j2dDefaultTevKColor@sda21(r2)
	sth      r0, 4(r3)
	sth      r0, 6(r3)
	sth      r0, 8(r3)
	sth      r0, 0xa(r3)
	sth      r0, 0xc(r3)
	li       r0, 2
	lbz      r24, j2dDefaultTevOrderInfoNull@sda21(r2)
	stb      r24, 0xe(r3)
	lbz      r24, 1(r5)
	stb      r24, 0xf(r3)
	lbz      r24, 2(r5)
	stb      r24, 0x10(r3)
	lbz      r24, j2dDefaultTevOrderInfoNull@sda21(r2)
	stb      r24, 0x12(r3)
	lbz      r24, 1(r5)
	stb      r24, 0x13(r3)
	lbz      r24, 2(r5)
	stb      r24, 0x14(r3)
	lbz      r24, j2dDefaultTevOrderInfoNull@sda21(r2)
	stb      r24, 0x16(r3)
	lbz      r24, 1(r5)
	stb      r24, 0x17(r3)
	lbz      r24, 2(r5)
	stb      r24, 0x18(r3)
	lbz      r24, j2dDefaultTevOrderInfoNull@sda21(r2)
	stb      r24, 0x1a(r3)
	lbz      r24, 1(r5)
	stb      r24, 0x1b(r3)
	lbz      r5, 2(r5)
	stb      r5, 0x1c(r3)
	sth      r25, 0x1e(r3)
	sth      r26, 0x20(r3)
	sth      r27, 0x22(r3)
	sth      r28, 0x24(r3)
	sth      r25, 0x26(r3)
	sth      r26, 0x28(r3)
	sth      r27, 0x2a(r3)
	sth      r28, 0x2c(r3)
	sth      r25, 0x2e(r3)
	sth      r26, 0x30(r3)
	sth      r27, 0x32(r3)
	sth      r28, 0x34(r3)
	sth      r25, 0x36(r3)
	sth      r26, 0x38(r3)
	sth      r27, 0x3a(r3)
	sth      r28, 0x3c(r3)
	stb      r29, 0x3e(r3)
	stb      r30, 0x3f(r3)
	stb      r31, 0x43(r3)
	stb      r12, 0x47(r3)
	stb      r11, 0x4b(r3)
	stb      r10, 0x4f(r3)
	stb      r9, 0x53(r3)
	stb      r7, 0x57(r3)
	stb      r6, 0x5b(r3)
	mtctr    r0

lbl_8004C700:
	stw      r8, 8(r1)
	lbz      r7, 8(r1)
	lbz      r6, 9(r1)
	stb      r7, 0x60(r4)
	lbz      r5, 0xa(r1)
	lbz      r0, 0xb(r1)
	stb      r6, 0x61(r4)
	stb      r5, 0x62(r4)
	stw      r8, 8(r1)
	stb      r7, 0xc(r1)
	lbz      r7, 8(r1)
	stb      r0, 0x63(r4)
	stb      r6, 0xd(r1)
	lbz      r6, 9(r1)
	stb      r7, 0x64(r4)
	stb      r5, 0xe(r1)
	lbz      r5, 0xa(r1)
	stb      r6, 0x65(r4)
	stb      r0, 0xf(r1)
	lbz      r0, 0xb(r1)
	stb      r5, 0x66(r4)
	stb      r0, 0x67(r4)
	addi     r4, r4, 8
	stb      r7, 0xc(r1)
	stb      r6, 0xd(r1)
	stb      r5, 0xe(r1)
	stb      r0, 0xf(r1)
	bdnz     lbl_8004C700
	li       r7, 0xff
	lis      r4, j2dDefaultIndTevStageInfo@ha
	stb      r7, 0x70(r3)
	addi     r6, r2, j2dDefaultTevSwapModeTable@sda21
	li       r0, 2
	mr       r5, r3
	stb      r7, 0x74(r3)
	addi     r4, r4, j2dDefaultIndTevStageInfo@l
	stb      r7, 0x71(r3)
	stb      r7, 0x75(r3)
	stb      r7, 0x72(r3)
	stb      r7, 0x76(r3)
	stb      r7, 0x73(r3)
	stb      r7, 0x77(r3)
	lbz      r7, 1(r6)
	lbz      r9, 2(r6)
	lbz      r8, j2dDefaultTevSwapModeTable@sda21(r2)
	rlwinm   r7, r7, 4, 0x14, 0x1b
	slwi     r9, r9, 2
	lbz      r10, 3(r6)
	add      r7, r7, r9
	slwi     r8, r8, 6
	add      r7, r7, r10
	add      r7, r8, r7
	stb      r7, 0x78(r3)
	lbz      r7, 1(r6)
	lbz      r9, 2(r6)
	lbz      r8, j2dDefaultTevSwapModeTable@sda21(r2)
	rlwinm   r7, r7, 4, 0x14, 0x1b
	slwi     r9, r9, 2
	lbz      r10, 3(r6)
	add      r7, r7, r9
	slwi     r8, r8, 6
	add      r7, r7, r10
	add      r7, r8, r7
	stb      r7, 0x79(r3)
	lbz      r7, 1(r6)
	lbz      r9, 2(r6)
	lbz      r8, j2dDefaultTevSwapModeTable@sda21(r2)
	rlwinm   r7, r7, 4, 0x14, 0x1b
	slwi     r9, r9, 2
	lbz      r10, 3(r6)
	add      r7, r7, r9
	slwi     r8, r8, 6
	add      r7, r7, r10
	add      r7, r8, r7
	stb      r7, 0x7a(r3)
	lbz      r9, 2(r6)
	lbz      r7, 1(r6)
	lbz      r8, j2dDefaultTevSwapModeTable@sda21(r2)
	slwi     r9, r9, 2
	slwi     r7, r7, 4
	lbz      r10, 3(r6)
	add      r6, r7, r9
	slwi     r7, r8, 6
	add      r6, r6, r10
	add      r6, r7, r6
	stb      r6, 0x7b(r3)
	mtctr    r0

lbl_8004C85C:
	lwz      r6, 4(r4)
	lwz      r0, 8(r4)
	stw      r6, 0x14(r1)
	lwz      r6, 0(r4)
	stw      r0, 0x18(r1)
	lbz      r0, 0x17(r1)
	stw      r6, 0x10(r1)
	lbz      r6, 0x18(r1)
	slwi     r0, r0, 0x15
	lbz      r7, 0x16(r1)
	slwi     r6, r6, 0x16
	lbz      r8, 0x13(r1)
	lbz      r9, 0x15(r1)
	slwi     r7, r7, 0x14
	or       r0, r6, r0
	lbz      r10, 0x14(r1)
	lbz      r11, 0x12(r1)
	slwi     r6, r8, 0x10
	or       r0, r7, r0
	lbz      r12, 0x11(r1)
	slwi     r7, r9, 0xb
	slwi     r8, r10, 8
	or       r0, r6, r0
	slwi     r6, r11, 4
	or       r0, r7, r0
	slwi     r7, r12, 2
	or       r0, r8, r0
	lbz      r8, 0x10(r1)
	or       r0, r6, r0
	or       r0, r7, r0
	or       r0, r8, r0
	stw      r0, 0x7c(r5)
	lwz      r6, 4(r4)
	lwz      r0, 8(r4)
	stw      r6, 0x14(r1)
	lwz      r6, 0(r4)
	stw      r0, 0x18(r1)
	lbz      r0, 0x17(r1)
	stw      r6, 0x10(r1)
	lbz      r6, 0x18(r1)
	slwi     r0, r0, 0x15
	lbz      r7, 0x16(r1)
	slwi     r6, r6, 0x16
	lbz      r8, 0x13(r1)
	lbz      r9, 0x15(r1)
	slwi     r7, r7, 0x14
	or       r0, r6, r0
	lbz      r10, 0x14(r1)
	lbz      r11, 0x12(r1)
	slwi     r6, r8, 0x10
	or       r0, r7, r0
	lbz      r12, 0x11(r1)
	slwi     r7, r9, 0xb
	slwi     r8, r10, 8
	or       r0, r6, r0
	slwi     r6, r11, 4
	or       r0, r7, r0
	slwi     r7, r12, 2
	or       r0, r8, r0
	lbz      r8, 0x10(r1)
	or       r0, r6, r0
	or       r0, r7, r0
	or       r0, r8, r0
	stw      r0, 0x80(r5)
	addi     r5, r5, 8
	bdnz     lbl_8004C85C
	li       r0, 0
	stw      r0, 0x9c(r3)
	stw      r0, 0xa0(r3)
	stw      r0, 0xa4(r3)
	stw      r0, 0xa8(r3)
	stw      r0, 0xac(r3)
	lmw      r24, 0x20(r1)
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	8004C988
 * Size:	0000E0
 * prepareTexture__12J2DTevBlock4FUc
 */
bool J2DTevBlock4::prepareTexture(unsigned char count)
{
	for (u8 i = 0; i < count; i++) {
		if (i >= 4) {
			return false;
		}
		if (m_textures[i] == nullptr) {
			m_textures[i] = new JUTTexture();
			if (m_textures[i] == nullptr) {
				return false;
			}
			_B0 |= (1 << i);
		}
	}
	return true;
}

/*
 * --INFO--
 * Address:	8004CA68
 * Size:	0003AC
 */
bool J2DTevBlock4::insertTexture(unsigned long, const ResTIMG*, JUTPalette*)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stmw     r25, 0x14(r1)
	mr       r26, r4
	cmplwi   r26, 4
	mr       r25, r3
	mr       r27, r5
	mr       r28, r6
	bge      lbl_8004CA98
	cmplwi   r27, 0
	bne      lbl_8004CAA0

lbl_8004CA98:
	li       r3, 0
	b        lbl_8004CE00

lbl_8004CAA0:
	li       r30, 0
	b        lbl_8004CACC

lbl_8004CAA8:
	rlwinm   r3, r30, 2, 0x16, 0x1d
	addi     r0, r3, 0x8c
	lwzx     r3, r25, r0
	cmplwi   r3, 0
	beq      lbl_8004CAD8
	lwz      r0, 0x20(r3)
	cmplwi   r0, 0
	beq      lbl_8004CAD8
	addi     r30, r30, 1

lbl_8004CACC:
	clrlwi   r0, r30, 0x18
	cmplwi   r0, 4
	blt      lbl_8004CAA8

lbl_8004CAD8:
	clrlwi   r0, r30, 0x18
	cmplw    r0, r26
	bge      lbl_8004CAEC
	li       r3, 0
	b        lbl_8004CE00

lbl_8004CAEC:
	cmplwi   r0, 4
	bne      lbl_8004CAFC
	li       r3, 0
	b        lbl_8004CE00

lbl_8004CAFC:
	lbz      r0, 8(r27)
	li       r29, 0
	cmplwi   r0, 0
	beq      lbl_8004CBBC
	cmplwi   r28, 0
	bne      lbl_8004CBBC
	li       r0, 3
	mr       r5, r25
	li       r7, 0
	mtctr    r0
	li       r3, 1

lbl_8004CB28:
	lwz      r6, 0x8c(r5)
	cmplwi   r6, 0
	beq      lbl_8004CB7C
	lwz      r4, 0x20(r6)
	cmplwi   r4, 0
	beq      lbl_8004CB7C
	lbz      r0, 8(r4)
	cmplwi   r0, 0
	beq      lbl_8004CB7C
	lbz      r4, 0x3a(r6)
	li       r0, 0
	cmpwi    r4, 0x10
	blt      lbl_8004CB60
	li       r0, 0x10

lbl_8004CB60:
	subf     r0, r0, r4
	clrlwi   r0, r0, 0x18
	cmplwi   r0, 4
	bge      lbl_8004CB7C
	slw      r0, r3, r0
	or       r0, r7, r0
	clrlwi   r7, r0, 0x18

lbl_8004CB7C:
	addi     r5, r5, 4
	bdnz     lbl_8004CB28
	clrlwi   r4, r7, 0x18
	li       r5, 0
	li       r3, 1
	b        lbl_8004CBB0

lbl_8004CB94:
	clrlwi   r0, r5, 0x18
	slw      r0, r3, r0
	and.     r0, r4, r0
	bne      lbl_8004CBAC
	mr       r29, r5
	b        lbl_8004CBBC

lbl_8004CBAC:
	addi     r5, r5, 1

lbl_8004CBB0:
	clrlwi   r0, r5, 0x18
	cmplwi   r0, 4
	blt      lbl_8004CB94

lbl_8004CBBC:
	rlwinm   r0, r30, 2, 0x16, 0x1d
	add      r3, r25, r0
	lwz      r31, 0x8c(r3)
	cmplwi   r31, 0
	bne      lbl_8004CCB8
	li       r3, 0x40
	bl       __nw__FUl
	or.      r31, r3, r3
	beq      lbl_8004CC00
	li       r0, 0
	mr       r4, r27
	stw      r0, 0x28(r31)
	mr       r5, r29
	bl       storeTIMG__10JUTTextureFPC7ResTIMGUc
	lbz      r0, 0x3b(r31)
	rlwinm   r0, r0, 0, 0x1e, 0x1e
	stb      r0, 0x3b(r31)

lbl_8004CC00:
	cmplwi   r31, 0
	bne      lbl_8004CC10
	li       r3, 0
	b        lbl_8004CE00

lbl_8004CC10:
	cmplwi   r28, 0
	beq      lbl_8004CC28
	mr       r3, r31
	mr       r4, r27
	mr       r5, r28
	bl       storeTIMG__10JUTTextureFPC7ResTIMGP10JUTPalette

lbl_8004CC28:
	li       r8, 3
	b        lbl_8004CC6C

lbl_8004CC30:
	slwi     r3, r4, 2
	rlwinm   r0, r8, 2, 0x16, 0x1d
	add      r6, r25, r3
	slwi     r4, r4, 1
	lwz      r5, 0x88(r6)
	add      r7, r25, r0
	rlwinm   r3, r8, 1, 0x17, 0x1e
	addi     r4, r4, 2
	stw      r5, 0x8c(r7)
	addi     r0, r3, 4
	addi     r8, r8, -1
	lwz      r3, 0x98(r6)
	stw      r3, 0x9c(r7)
	lhzx     r3, r25, r4
	sthx     r3, r25, r0

lbl_8004CC6C:
	clrlwi   r4, r8, 0x18
	cmplw    r4, r26
	bgt      lbl_8004CC30
	slwi     r0, r26, 2
	mr       r3, r25
	add      r5, r25, r0
	clrlwi   r4, r26, 0x18
	stw      r31, 0x8c(r5)
	li       r5, 1
	lwz      r12, 0(r25)
	lwz      r12, 0xac(r12)
	mtctr    r12
	bctrl
	li       r0, 1
	lbz      r3, 0xb0(r25)
	slw      r0, r0, r26
	or       r0, r3, r0
	stb      r0, 0xb0(r25)
	b        lbl_8004CDD8

lbl_8004CCB8:
	cmplwi   r28, 0
	bne      lbl_8004CCD4
	mr       r3, r31
	mr       r4, r27
	mr       r5, r29
	bl       storeTIMG__10JUTTextureFPC7ResTIMGUc
	b        lbl_8004CCE4

lbl_8004CCD4:
	mr       r3, r31
	mr       r4, r27
	mr       r5, r28
	bl       storeTIMG__10JUTTextureFPC7ResTIMGP10JUTPalette

lbl_8004CCE4:
	lbz      r0, 0xb0(r25)
	mr       r10, r30
	addi     r3, r1, 8
	clrlwi   r6, r0, 0x1f
	rlwinm   r5, r0, 0x1f, 0x1f, 0x1f
	rlwinm   r4, r0, 0x1e, 0x1f, 0x1f
	rlwinm   r0, r0, 0x1d, 0x1f, 0x1f
	stb      r6, 8(r1)
	stb      r5, 9(r1)
	stb      r4, 0xa(r1)
	stb      r0, 0xb(r1)
	b        lbl_8004CD60

lbl_8004CD14:
	slwi     r4, r7, 2
	rlwinm   r0, r10, 2, 0x16, 0x1d
	add      r8, r25, r4
	slwi     r5, r7, 1
	lwz      r6, 0x88(r8)
	add      r9, r25, r0
	addi     r0, r7, -1
	rlwinm   r4, r10, 1, 0x17, 0x1e
	stw      r6, 0x8c(r9)
	clrlwi   r7, r10, 0x18
	lbzx     r0, r3, r0
	addi     r5, r5, 2
	lwz      r6, 0x98(r8)
	addi     r4, r4, 4
	stbx     r0, r3, r7
	addi     r10, r10, -1
	stw      r6, 0x9c(r9)
	lhzx     r0, r25, r5
	sthx     r0, r25, r4

lbl_8004CD60:
	clrlwi   r7, r10, 0x18
	cmplw    r7, r26
	bgt      lbl_8004CD14
	slwi     r0, r26, 2
	addi     r5, r1, 8
	add      r3, r25, r0
	li       r7, 0
	stw      r31, 0x8c(r3)
	li       r3, 1
	lbz      r0, 0xb0(r25)
	rlwinm   r0, r0, 0, 0x18, 0x18
	stb      r0, 0xb0(r25)
	b        lbl_8004CDB8

lbl_8004CD94:
	clrlwi   r6, r7, 0x18
	lbzx     r0, r5, r6
	cmplwi   r0, 0
	beq      lbl_8004CDB4
	lbz      r4, 0xb0(r25)
	slw      r0, r3, r6
	or       r0, r4, r0
	stb      r0, 0xb0(r25)

lbl_8004CDB4:
	addi     r7, r7, 1

lbl_8004CDB8:
	clrlwi   r0, r7, 0x18
	cmplwi   r0, 4
	blt      lbl_8004CD94
	li       r0, 1
	lbz      r3, 0xb0(r25)
	slw      r0, r0, r26
	or       r0, r3, r0
	stb      r0, 0xb0(r25)

lbl_8004CDD8:
	slwi     r3, r26, 2
	slwi     r0, r26, 1
	add      r4, r25, r3
	li       r5, 0
	lis      r3, 0x0000FFFF@ha
	stw      r5, 0x9c(r4)
	addi     r4, r3, 0x0000FFFF@l
	add      r3, r25, r0
	sth      r4, 4(r3)
	li       r3, 1

lbl_8004CE00:
	lmw      r25, 0x14(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	8004CE14
 * Size:	000198
 */
bool J2DTevBlock4::insertTexture(unsigned long, JUTTexture*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r5
	stw      r30, 0x18(r1)
	mr       r30, r4
	cmplwi   r30, 4
	stw      r29, 0x14(r1)
	mr       r29, r3
	bge      lbl_8004CE48
	cmplwi   r31, 0
	bne      lbl_8004CE50

lbl_8004CE48:
	li       r3, 0
	b        lbl_8004CF90

lbl_8004CE50:
	li       r4, 0
	b        lbl_8004CE7C

lbl_8004CE58:
	rlwinm   r3, r4, 2, 0x16, 0x1d
	addi     r0, r3, 0x8c
	lwzx     r3, r29, r0
	cmplwi   r3, 0
	beq      lbl_8004CE88
	lwz      r0, 0x20(r3)
	cmplwi   r0, 0
	beq      lbl_8004CE88
	addi     r4, r4, 1

lbl_8004CE7C:
	clrlwi   r0, r4, 0x18
	cmplwi   r0, 4
	blt      lbl_8004CE58

lbl_8004CE88:
	clrlwi   r0, r4, 0x18
	cmplw    r0, r30
	bge      lbl_8004CE9C
	li       r3, 0
	b        lbl_8004CF90

lbl_8004CE9C:
	cmplwi   r0, 4
	bne      lbl_8004CEAC
	li       r3, 0
	b        lbl_8004CF90

lbl_8004CEAC:
	lwz      r3, 0x98(r29)
	cmplwi   r3, 0
	beq      lbl_8004CEE4
	lwz      r0, 0x20(r3)
	cmplwi   r0, 0
	bne      lbl_8004CEE4
	lbz      r0, 0xb0(r29)
	rlwinm.  r0, r0, 0, 0x1c, 0x1c
	beq      lbl_8004CED8
	li       r4, 1
	bl       __dt__10JUTTextureFv

lbl_8004CED8:
	lbz      r0, 0xb0(r29)
	rlwinm   r0, r0, 0, 0x1d, 0x1b
	stb      r0, 0xb0(r29)

lbl_8004CEE4:
	li       r8, 3
	b        lbl_8004CF28

lbl_8004CEEC:
	slwi     r3, r4, 2
	rlwinm   r0, r8, 2, 0x16, 0x1d
	add      r6, r29, r3
	slwi     r4, r4, 1
	lwz      r5, 0x88(r6)
	add      r7, r29, r0
	rlwinm   r3, r8, 1, 0x17, 0x1e
	addi     r4, r4, 2
	stw      r5, 0x8c(r7)
	addi     r0, r3, 4
	addi     r8, r8, -1
	lwz      r3, 0x98(r6)
	stw      r3, 0x9c(r7)
	lhzx     r3, r29, r4
	sthx     r3, r29, r0

lbl_8004CF28:
	clrlwi   r4, r8, 0x18
	cmplw    r4, r30
	bgt      lbl_8004CEEC
	slwi     r3, r30, 2
	slwi     r0, r30, 1
	add      r5, r29, r3
	lis      r3, 0x0000FFFF@ha
	stw      r31, 0x8c(r5)
	li       r4, 0
	addi     r7, r3, 0x0000FFFF@l
	add      r6, r29, r0
	stw      r4, 0x9c(r5)
	mr       r3, r29
	clrlwi   r4, r30, 0x18
	li       r5, 1
	sth      r7, 4(r6)
	lwz      r12, 0(r29)
	lwz      r12, 0xac(r12)
	mtctr    r12
	bctrl
	li       r0, 1
	lbz      r4, 0xb0(r29)
	slw      r0, r0, r30
	li       r3, 1
	andc     r0, r4, r0
	stb      r0, 0xb0(r29)

lbl_8004CF90:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8004CFAC
 * Size:	0002E4
 * setTexture__12J2DTevBlock4FUlPC7ResTIMG
 */
bool J2DTevBlock4::setTexture(unsigned long index, const ResTIMG* img)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stmw     r25, 0x14(r1)
	mr       r26, r4
	cmplwi   r26, 4
	mr       r25, r3
	mr       r27, r5
	blt      lbl_8004CFD8
	li       r3, 0
	b        lbl_8004D27C

lbl_8004CFD8:
	cmplwi   r27, 0
	li       r28, 0
	beq      lbl_8004D10C
	lbz      r0, 8(r27)
	cmplwi   r0, 0
	beq      lbl_8004D10C
	li       r0, 2
	mr       r4, r25
	li       r6, 0
	li       r7, 0
	mtctr    r0

lbl_8004D004:
	cmplw    r7, r26
	beq      lbl_8004D064
	lwz      r5, 0x8c(r4)
	cmplwi   r5, 0
	beq      lbl_8004D064
	lwz      r3, 0x20(r5)
	cmplwi   r3, 0
	beq      lbl_8004D064
	lbz      r0, 8(r3)
	cmplwi   r0, 0
	beq      lbl_8004D064
	lbz      r3, 0x3a(r5)
	li       r0, 0
	cmpwi    r3, 0x10
	blt      lbl_8004D044
	li       r0, 0x10

lbl_8004D044:
	subf     r0, r0, r3
	clrlwi   r3, r0, 0x18
	cmplwi   r3, 4
	bge      lbl_8004D064
	li       r0, 1
	slw      r0, r0, r3
	or       r0, r6, r0
	clrlwi   r6, r0, 0x18

lbl_8004D064:
	addi     r7, r7, 1
	cmplw    r7, r26
	beq      lbl_8004D0C8
	lwz      r5, 0x90(r4)
	cmplwi   r5, 0
	beq      lbl_8004D0C8
	lwz      r3, 0x20(r5)
	cmplwi   r3, 0
	beq      lbl_8004D0C8
	lbz      r0, 8(r3)
	cmplwi   r0, 0
	beq      lbl_8004D0C8
	lbz      r3, 0x3a(r5)
	li       r0, 0
	cmpwi    r3, 0x10
	blt      lbl_8004D0A8
	li       r0, 0x10

lbl_8004D0A8:
	subf     r0, r0, r3
	clrlwi   r3, r0, 0x18
	cmplwi   r3, 4
	bge      lbl_8004D0C8
	li       r0, 1
	slw      r0, r0, r3
	or       r0, r6, r0
	clrlwi   r6, r0, 0x18

lbl_8004D0C8:
	addi     r4, r4, 8
	addi     r7, r7, 1
	bdnz     lbl_8004D004
	clrlwi   r4, r6, 0x18
	li       r5, 0
	li       r3, 1
	b        lbl_8004D100

lbl_8004D0E4:
	clrlwi   r0, r5, 0x18
	slw      r0, r3, r0
	and.     r0, r4, r0
	bne      lbl_8004D0FC
	mr       r28, r5
	b        lbl_8004D10C

lbl_8004D0FC:
	addi     r5, r5, 1

lbl_8004D100:
	clrlwi   r0, r5, 0x18
	cmplwi   r0, 4
	blt      lbl_8004D0E4

lbl_8004D10C:
	slwi     r29, r26, 2
	add      r31, r25, r29
	lwz      r3, 0x8c(r31)
	cmplwi   r3, 0
	bne      lbl_8004D1A0
	cmplwi   r27, 0
	beq      lbl_8004D188
	li       r3, 0x40
	bl       __nw__FUl
	or.      r30, r3, r3
	beq      lbl_8004D158
	li       r0, 0
	mr       r4, r27
	stw      r0, 0x28(r30)
	mr       r5, r28
	bl       storeTIMG__10JUTTextureFPC7ResTIMGUc
	lbz      r0, 0x3b(r30)
	rlwinm   r0, r0, 0, 0x1e, 0x1e
	stb      r0, 0x3b(r30)

lbl_8004D158:
	stw      r30, 0x8c(r31)
	lwz      r0, 0x8c(r31)
	cmplwi   r0, 0
	bne      lbl_8004D170
	li       r3, 0
	b        lbl_8004D27C

lbl_8004D170:
	li       r0, 1
	lbz      r3, 0xb0(r25)
	slw      r0, r0, r26
	or       r0, r3, r0
	stb      r0, 0xb0(r25)
	b        lbl_8004D250

lbl_8004D188:
	li       r0, 1
	lbz      r3, 0xb0(r25)
	slw      r0, r0, r26
	andc     r0, r3, r0
	stb      r0, 0xb0(r25)
	b        lbl_8004D250

lbl_8004D1A0:
	li       r0, 1
	lbz      r4, 0xb0(r25)
	slw      r30, r0, r26
	and.     r0, r4, r30
	beq      lbl_8004D1EC
	cmplwi   r27, 0
	beq      lbl_8004D1CC
	mr       r4, r27
	mr       r5, r28
	bl       storeTIMG__10JUTTextureFPC7ResTIMGUc
	b        lbl_8004D250

lbl_8004D1CC:
	li       r4, 1
	bl       __dt__10JUTTextureFv
	li       r0, 0
	stw      r0, 0x8c(r31)
	lbz      r0, 0xb0(r25)
	andc     r0, r0, r30
	stb      r0, 0xb0(r25)
	b        lbl_8004D250

lbl_8004D1EC:
	li       r0, 0
	cmplwi   r27, 0
	stw      r0, 0x8c(r31)
	beq      lbl_8004D250
	li       r3, 0x40
	bl       __nw__FUl
	or.      r28, r3, r3
	beq      lbl_8004D22C
	li       r0, 0
	mr       r4, r27
	stw      r0, 0x28(r28)
	li       r5, 0
	bl       storeTIMG__10JUTTextureFPC7ResTIMGUc
	lbz      r0, 0x3b(r28)
	rlwinm   r0, r0, 0, 0x1e, 0x1e
	stb      r0, 0x3b(r28)

lbl_8004D22C:
	stw      r28, 0x8c(r31)
	lwz      r0, 0x8c(r31)
	cmplwi   r0, 0
	bne      lbl_8004D244
	li       r3, 0
	b        lbl_8004D27C

lbl_8004D244:
	lbz      r0, 0xb0(r25)
	or       r0, r0, r30
	stb      r0, 0xb0(r25)

lbl_8004D250:
	add      r27, r25, r29
	lwz      r3, 0x9c(r27)
	bl       __dl__FPv
	li       r4, 0
	slwi     r0, r26, 1
	lis      r3, 0x0000FFFF@ha
	stw      r4, 0x9c(r27)
	addi     r4, r3, 0x0000FFFF@l
	add      r3, r25, r0
	sth      r4, 4(r3)
	li       r3, 1

lbl_8004D27C:
	lmw      r25, 0x14(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	8004D290
 * Size:	0000A8
 * setTexture__12J2DTevBlock4FUlP10JUTTexture
 */
bool J2DTevBlock4::setTexture(unsigned long index, JUTTexture* texture)
{
	if (index >= 4) {
		return false;
	}
	if ((_B0 & 1 << index) != 0) {
		delete m_textures[index];
	}
	m_textures[index] = texture;
	_B0 &= ~(1 << index);
	delete m_palettes[index];
	m_palettes[index]   = nullptr;
	m_texIndices[index] = 0xFFFF;
	return true;
}

/*
 * --INFO--
 * Address:	8004D338
 * Size:	000210
 * removeTexture__12J2DTevBlock4FUl
 */
bool J2DTevBlock4::removeTexture(unsigned long)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r4
	cmplwi   r31, 4
	stw      r30, 0x18(r1)
	mr       r30, r3
	stw      r29, 0x14(r1)
	blt      lbl_8004D368
	li       r3, 0
	b        lbl_8004D52C

lbl_8004D368:
	li       r0, 1
	lbz      r3, 0xb0(r30)
	slw      r0, r0, r31
	and.     r0, r3, r0
	beq      lbl_8004D390
	slwi     r0, r31, 2
	li       r4, 1
	add      r3, r30, r0
	lwz      r3, 0x8c(r3)
	bl       __dt__10JUTTextureFv

lbl_8004D390:
	slwi     r29, r31, 2
	add      r3, r30, r29
	lwz      r3, 0x9c(r3)
	bl       __dl__FPv
	cmplwi   r31, 3
	mr       r5, r31
	bge      lbl_8004D4F4
	subfic   r0, r31, 3
	cmplwi   r0, 8
	ble      lbl_8004D4B0
	subfic   r0, r31, 2
	slwi     r4, r31, 1
	srwi     r0, r0, 3
	add      r3, r30, r29
	add      r4, r30, r4
	mtctr    r0
	lis      r6, 0x-0000005@ha
	addi     r6, r6, 0x-0000005@l
	cmplw    r31, r6
	bge      lbl_8004D4B0

lbl_8004D3E0:
	lwz      r0, 0x90(r3)
	addi     r5, r5, 8
	stw      r0, 0x8c(r3)
	lwz      r0, 0xa0(r3)
	stw      r0, 0x9c(r3)
	lhz      r0, 6(r4)
	sth      r0, 4(r4)
	lwz      r0, 0x94(r3)
	stw      r0, 0x90(r3)
	lwz      r0, 0xa4(r3)
	stw      r0, 0xa0(r3)
	lhz      r0, 8(r4)
	sth      r0, 6(r4)
	lwz      r0, 0x98(r3)
	stw      r0, 0x94(r3)
	lwz      r0, 0xa8(r3)
	stw      r0, 0xa4(r3)
	lhz      r0, 0xa(r4)
	sth      r0, 8(r4)
	lwz      r0, 0x9c(r3)
	stw      r0, 0x98(r3)
	lwz      r0, 0xac(r3)
	stw      r0, 0xa8(r3)
	lhz      r0, 0xc(r4)
	sth      r0, 0xa(r4)
	lwz      r0, 0xa0(r3)
	stw      r0, 0x9c(r3)
	lwz      r0, 0xb0(r3)
	stw      r0, 0xac(r3)
	lhz      r0, 0xe(r4)
	sth      r0, 0xc(r4)
	lwz      r0, 0xa4(r3)
	stw      r0, 0xa0(r3)
	lwz      r0, 0xb4(r3)
	stw      r0, 0xb0(r3)
	lhz      r0, 0x10(r4)
	sth      r0, 0xe(r4)
	lwz      r0, 0xa8(r3)
	stw      r0, 0xa4(r3)
	lwz      r0, 0xb8(r3)
	stw      r0, 0xb4(r3)
	lhz      r0, 0x12(r4)
	sth      r0, 0x10(r4)
	lwz      r0, 0xac(r3)
	stw      r0, 0xa8(r3)
	lwz      r0, 0xbc(r3)
	stw      r0, 0xb8(r3)
	addi     r3, r3, 0x20
	lhz      r0, 0x14(r4)
	sth      r0, 0x12(r4)
	addi     r4, r4, 0x10
	bdnz     lbl_8004D3E0

lbl_8004D4B0:
	slwi     r4, r5, 2
	slwi     r3, r5, 1
	subfic   r0, r5, 3
	add      r4, r30, r4
	add      r3, r30, r3
	mtctr    r0
	cmplwi   r5, 3
	bge      lbl_8004D4F4

lbl_8004D4D0:
	lwz      r0, 0x90(r4)
	stw      r0, 0x8c(r4)
	lwz      r0, 0xa0(r4)
	stw      r0, 0x9c(r4)
	addi     r4, r4, 4
	lhz      r0, 6(r3)
	sth      r0, 4(r3)
	addi     r3, r3, 2
	bdnz     lbl_8004D4D0

lbl_8004D4F4:
	li       r5, 0
	lis      r3, 0x0000FFFF@ha
	stw      r5, 0x98(r30)
	addi     r0, r3, 0x0000FFFF@l
	mr       r3, r30
	clrlwi   r4, r31, 0x18
	stw      r5, 0xa8(r30)
	li       r5, 0
	sth      r0, 0xa(r30)
	lwz      r12, 0(r30)
	lwz      r12, 0xac(r12)
	mtctr    r12
	bctrl
	li       r3, 1

lbl_8004D52C:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8004D548
 * Size:	0000BC
 */
bool J2DTevBlock4::setFont(ResFONT* font)
{
	if (font == nullptr) {
		return false;
	}
	JUTResFont* jutFont = new JUTResFont(font, nullptr);
	if (jutFont == nullptr) {
		return false;
	}
	if ((_B0 & 0x80) != 0) {
		delete m_font;
	}
	m_font = jutFont;
	_B0    = _B0 & 0x7F | 0x80;
	return true;
}

/*
 * --INFO--
 * Address:	8004D604
 * Size:	000080
 * setFont__12J2DTevBlock4FP7JUTFont
 */
bool J2DTevBlock4::setFont(JUTFont* font)
{
	if (font == nullptr) {
		return false;
	}
	if ((_B0 & 0x80) != 0) {
		delete m_font;
	}
	m_font = static_cast<JUTResFont*>(font);
	_B0 &= 0x7F;
	return true;
}

/*
 * --INFO--
 * Address:	8004D684
 * Size:	0000D0
 * setPalette__12J2DTevBlock4FUlPC7ResTLUT
 */
bool J2DTevBlock4::setPalette(unsigned long index, const ResTLUT* lut)
{
	if (index >= 4) {
		return false;
	}
	if (lut != nullptr) {
		if (m_palettes[index] == nullptr) {
			m_palettes[index] = new JUTPalette(index, const_cast<ResTLUT*>(lut));
			if (m_palettes[index] == nullptr) {
				return false;
			}
		} else {
			m_palettes[index]->storeTLUT(GX_TLUT0, const_cast<ResTLUT*>(lut));
		}
		if (m_textures[index] != nullptr) {
			m_textures[index]->attachPalette(m_palettes[index]);
		}
	} else {
		delete m_palettes[index];
		m_palettes[index] = nullptr;
	}
	return true;
}

/*
 * --INFO--
 * Address:	8004D754
 * Size:	000088
 */
void J2DTevBlock4::shiftDeleteFlag(unsigned char p1, bool p2)
{
	u8 fontFlag = _B0 & 0x80;
	_B0 &= 0x7F;
	if (p2) {
		u32 v1 = ((1 << p1) - 1);
		_B0    = (_B0 & v1) | ((_B0 & ~v1) << 1);
	} else {
		_B0 = (_B0 & (1 << p1) - 1) | ((_B0 & ~((1 << (p1 + 1)) - 1)) >> 1);
	}
	_B0 = _B0 | fontFlag;
	/*
	lbz      r6, 0xb0(r3)
	clrlwi.  r0, r5, 0x18
	clrlwi   r0, r6, 0x19
	rlwinm   r6, r6, 0, 0x18, 0x18
	stb      r0, 0xb0(r3)
	beq      lbl_8004D798
	clrlwi   r0, r4, 0x18
	li       r4, 1
	slw      r4, r4, r0
	lbz      r5, 0xb0(r3)
	addi     r4, r4, -1
	andc     r0, r5, r4
	and      r4, r5, r4
	slwi     r0, r0, 1
	or       r0, r4, r0
	stb      r0, 0xb0(r3)
	b        lbl_8004D7CC

lbl_8004D798:
	clrlwi   r7, r4, 0x18
	li       r5, 1
	addi     r0, r7, 1
	lbz      r8, 0xb0(r3)
	slw      r4, r5, r0
	slw      r5, r5, r7
	addi     r0, r4, -1
	addi     r4, r5, -1
	andc     r0, r8, r0
	and      r4, r8, r4
	srawi    r0, r0, 1
	or       r0, r4, r0
	stb      r0, 0xb0(r3)

lbl_8004D7CC:
	lbz      r0, 0xb0(r3)
	or       r0, r0, r6
	stb      r0, 0xb0(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8004D7DC
 * Size:	0002E8
 */
void J2DTevBlock4::setGX()
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	stw      r30, 0x28(r1)
	stw      r29, 0x24(r1)
	mr       r29, r3
	stw      r28, 0x20(r1)
	li       r28, 0

lbl_8004D800:
	mr       r3, r29
	mr       r4, r28
	lwz      r12, 0(r29)
	mr       r5, r28
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	addi     r28, r28, 1
	cmpwi    r28, 4
	blt      lbl_8004D800
	mr       r30, r29
	li       r28, 0
	b        lbl_8004D850

lbl_8004D834:
	lbz      r4, 0xe(r30)
	mr       r3, r28
	lbz      r5, 0xf(r30)
	lbz      r6, 0x10(r30)
	bl       GXSetTevOrder
	addi     r30, r30, 4
	addi     r28, r28, 1

lbl_8004D850:
	lbz      r0, 0x3e(r29)
	cmpw     r28, r0
	blt      lbl_8004D834
	mr       r31, r29
	addi     r30, r1, 0xc
	li       r28, 0

lbl_8004D868:
	lwz      r4, 0x1e(r31)
	cmpwi    r28, 3
	lwz      r0, 0x22(r31)
	li       r3, 0
	stw      r4, 0xc(r1)
	stw      r0, 0x10(r1)
	beq      lbl_8004D888
	addi     r3, r28, 1

lbl_8004D888:
	mr       r4, r30
	bl       GXSetTevColorS10
	addi     r28, r28, 1
	addi     r31, r31, 8
	cmpwi    r28, 4
	blt      lbl_8004D868
	lbz      r3, 0x3e(r29)
	bl       GXSetNumTevStages
	mr       r30, r29
	li       r31, 0
	b        lbl_8004D9D8

lbl_8004D8B4:
	lbz      r0, 0x42(r30)
	mr       r3, r31
	lbz      r5, 0x41(r30)
	rlwinm   r6, r0, 0x1c, 0x1c, 0x1f
	clrlwi   r7, r0, 0x1c
	rlwinm   r4, r5, 0x1c, 0x1c, 0x1f
	clrlwi   r5, r5, 0x1c
	bl       GXSetTevColorIn
	lbz      r5, 0x45(r30)
	mr       r3, r31
	lbz      r6, 0x46(r30)
	rlwinm   r0, r5, 0, 0x18, 0x1a
	srawi    r4, r0, 5
	rlwinm   r7, r6, 0x1c, 0x1d, 0x1f
	rlwinm   r0, r6, 0x19, 0x1f, 0x1f
	rlwimi   r0, r5, 1, 0x1d, 0x1e
	clrlwi   r4, r4, 0x18
	rlwinm   r5, r5, 0x1e, 0x1d, 0x1f
	clrlwi   r6, r0, 0x18
	bl       GXSetTevAlphaIn
	lbz      r7, 0x40(r30)
	mr       r3, r31
	rlwinm   r0, r7, 0, 0x1a, 0x1b
	clrlwi   r5, r7, 0x1e
	srawi    r6, r0, 4
	rlwinm   r9, r7, 0x1e, 0x1f, 0x1f
	rlwinm   r0, r7, 0x1d, 0x1d, 0x1e
	cmplwi   r5, 3
	add      r4, r9, r0
	rlwinm   r8, r7, 0x1a, 0x1e, 0x1f
	addi     r0, r4, 8
	clrlwi   r6, r6, 0x18
	rlwinm   r7, r7, 0x1d, 0x1f, 0x1f
	clrlwi   r0, r0, 0x18
	beq      lbl_8004D944
	mr       r0, r9

lbl_8004D944:
	clrlwi   r4, r0, 0x18
	bl       GXSetTevColorOp
	lbz      r7, 0x44(r30)
	mr       r3, r31
	rlwinm   r0, r7, 0, 0x1a, 0x1b
	clrlwi   r5, r7, 0x1e
	srawi    r6, r0, 4
	rlwinm   r9, r7, 0x1e, 0x1f, 0x1f
	rlwinm   r0, r7, 0x1d, 0x1d, 0x1e
	cmplwi   r5, 3
	add      r4, r9, r0
	rlwinm   r8, r7, 0x1a, 0x1e, 0x1f
	addi     r0, r4, 8
	clrlwi   r6, r6, 0x18
	rlwinm   r7, r7, 0x1d, 0x1f, 0x1f
	clrlwi   r0, r0, 0x18
	beq      lbl_8004D98C
	mr       r0, r9

lbl_8004D98C:
	clrlwi   r4, r0, 0x18
	bl       GXSetTevAlphaOp
	add      r28, r29, r31
	li       r4, 0
	lbz      r0, 0x70(r28)
	cmplwi   r0, 0xff
	beq      lbl_8004D9AC
	mr       r4, r0

lbl_8004D9AC:
	mr       r3, r31
	bl       GXSetTevKColorSel
	lbz      r0, 0x74(r28)
	li       r4, 0
	cmplwi   r0, 0xff
	beq      lbl_8004D9C8
	mr       r4, r0

lbl_8004D9C8:
	mr       r3, r31
	bl       GXSetTevKAlphaSel
	addi     r30, r30, 8
	addi     r31, r31, 1

lbl_8004D9D8:
	lbz      r0, 0x3e(r29)
	cmpw     r31, r0
	blt      lbl_8004D8B4
	li       r28, 0
	mr       r30, r29

lbl_8004D9EC:
	lwz      r0, 0x60(r30)
	mr       r3, r28
	addi     r4, r1, 8
	stw      r0, 8(r1)
	bl       GXSetTevKColor
	addi     r28, r28, 1
	addi     r30, r30, 4
	cmpwi    r28, 4
	blt      lbl_8004D9EC
	mr       r30, r29
	li       r28, 0
	b        lbl_8004DA38

lbl_8004DA1C:
	lbz      r0, 0x46(r30)
	mr       r3, r28
	clrlwi   r4, r0, 0x1e
	rlwinm   r5, r0, 0x1e, 0x1e, 0x1f
	bl       GXSetTevSwapMode
	addi     r30, r30, 8
	addi     r28, r28, 1

lbl_8004DA38:
	lbz      r0, 0x3e(r29)
	cmpw     r28, r0
	blt      lbl_8004DA1C
	li       r28, 0

lbl_8004DA48:
	addi     r0, r28, 0x78
	mr       r3, r28
	lbzx     r0, r29, r0
	rlwinm   r4, r0, 0x1a, 0x1e, 0x1f
	rlwinm   r5, r0, 0x1c, 0x1e, 0x1f
	rlwinm   r6, r0, 0x1e, 0x1e, 0x1f
	clrlwi   r7, r0, 0x1e
	bl       GXSetTevSwapModeTable
	addi     r28, r28, 1
	cmpwi    r28, 4
	blt      lbl_8004DA48
	li       r28, 0
	b        lbl_8004DA94

lbl_8004DA7C:
	rlwinm   r3, r28, 2, 0x16, 0x1d
	mr       r4, r28
	addi     r3, r3, 0x7c
	add      r3, r29, r3
	bl       load__14J2DIndTevStageFUc
	addi     r28, r28, 1

lbl_8004DA94:
	lbz      r0, 0x3e(r29)
	clrlwi   r3, r28, 0x18
	cmplw    r3, r0
	blt      lbl_8004DA7C
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	lwz      r29, 0x24(r1)
	lwz      r28, 0x20(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	8004DAC4
 * Size:	000048
 * loadTexture__12J2DTevBlock4F11_GXTexMapIDUl
 */
void J2DTevBlock4::loadTexture(_GXTexMapID id, unsigned long index)
{
	if (index < 4 && m_textures[index] != nullptr && m_textures[index]->_20 != nullptr) {
		m_textures[index]->load(id);
	}
}

/*
 * --INFO--
 * Address:	8004DB0C
 * Size:	000128
 */
J2DTevBlock8::J2DTevBlock8()
    : J2DTevBlock()
    , m_orders()
    , m_colors()
    , m_stages()
    , m_kColors()
    , m_swapModeTables()
    , m_indStages()
{
	for (int i = 0; i < 8; i++) {
		m_textures[i] = nullptr;
	}
	_120 = 0;
	initialize();
}

/*
 * --INFO--
 * Address:	8004DC34
 * Size:	0000D0
 */
J2DTevBlock8::~J2DTevBlock8()
{
	for (int i = 0; i < 8; i++) {
		if ((_120 & 1 << i) != 0) {
			delete m_textures[i];
		}
		delete m_palettes[i];
	}
	if (_121 != 0) {
		delete m_font;
	}
}

/*
 * --INFO--
 * Address:	8004DD04
 * Size:	0004A0
 */
void J2DTevBlock8::initialize()
{
	/*
	stwu     r1, -0x50(r1)
	addi     r8, r2, j2dDefaultTevColor@sda21
	lis      r5, 0x0000FFFF@ha
	addi     r4, r2, j2dDefaultTevOrderInfoNull@sda21
	stmw     r21, 0x24(r1)
	addi     r6, r5, 0x0000FFFF@l
	lha      r5, j2dDefaultTevColor@sda21(r2)
	lha      r0, 2(r8)
	lha      r7, 4(r8)
	lha      r22, 6(r8)
	sth      r6, 4(r3)
	sth      r6, 6(r3)
	sth      r6, 8(r3)
	sth      r6, 0xa(r3)
	sth      r6, 0xc(r3)
	sth      r6, 0xe(r3)
	sth      r6, 0x10(r3)
	sth      r6, 0x12(r3)
	sth      r6, 0x14(r3)
	lbz      r6, j2dDefaultTevOrderInfoNull@sda21(r2)
	stb      r6, 0x16(r3)
	lbz      r6, 1(r4)
	stb      r6, 0x17(r3)
	lbz      r6, 2(r4)
	stb      r6, 0x18(r3)
	lbz      r6, j2dDefaultTevOrderInfoNull@sda21(r2)
	stb      r6, 0x1a(r3)
	lbz      r6, 1(r4)
	stb      r6, 0x1b(r3)
	lbz      r6, 2(r4)
	stb      r6, 0x1c(r3)
	lbz      r6, j2dDefaultTevOrderInfoNull@sda21(r2)
	stb      r6, 0x1e(r3)
	lbz      r6, 1(r4)
	stb      r6, 0x1f(r3)
	lbz      r6, 2(r4)
	stb      r6, 0x20(r3)
	lbz      r6, j2dDefaultTevOrderInfoNull@sda21(r2)
	stb      r6, 0x22(r3)
	lbz      r6, 1(r4)
	stb      r6, 0x23(r3)
	lbz      r6, 2(r4)
	stb      r6, 0x24(r3)
	lbz      r6, j2dDefaultTevOrderInfoNull@sda21(r2)
	stb      r6, 0x26(r3)
	lbz      r6, 1(r4)
	stb      r6, 0x27(r3)
	lbz      r6, 2(r4)
	stb      r6, 0x28(r3)
	lbz      r6, j2dDefaultTevOrderInfoNull@sda21(r2)
	stb      r6, 0x2a(r3)
	lbz      r6, 1(r4)
	stb      r6, 0x2b(r3)
	lbz      r6, 2(r4)
	stb      r6, 0x2c(r3)
	lbz      r6, j2dDefaultTevOrderInfoNull@sda21(r2)
	stb      r6, 0x2e(r3)
	lbz      r6, 1(r4)
	stb      r6, 0x2f(r3)
	lbz      r6, 2(r4)
	stb      r6, 0x30(r3)
	lbz      r6, j2dDefaultTevOrderInfoNull@sda21(r2)
	stb      r6, 0x32(r3)
	lbz      r6, 1(r4)
	stb      r6, 0x33(r3)
	lbz      r4, 2(r4)
	stb      r4, 0x34(r3)
	sth      r5, 0x36(r3)
	sth      r0, 0x38(r3)
	sth      r7, 0x3a(r3)
	sth      r22, 0x3c(r3)
	sth      r5, 0x3e(r3)
	sth      r0, 0x40(r3)
	sth      r7, 0x42(r3)
	sth      r22, 0x44(r3)
	sth      r5, 0x46(r3)
	li       r23, 1
	li       r24, 0xc0
	li       r25, 0xc1
	sth      r0, 0x48(r3)
	li       r26, 0xc2
	li       r27, 0xc3
	li       r28, 0xc4
	sth      r7, 0x4a(r3)
	li       r29, 0xc5
	li       r30, 0xc6
	li       r31, 0xc7
	sth      r22, 0x4c(r3)
	li       r12, 0xc8
	li       r11, 0xc9
	li       r10, 0xca
	sth      r5, 0x4e(r3)
	li       r9, 0xcb
	li       r8, 0xcc
	li       r6, 0xcd
	sth      r0, 0x50(r3)
	li       r5, 0xce
	li       r4, 0xcf
	li       r0, 2
	sth      r7, 0x52(r3)
	mr       r21, r3
	lwz      r7, j2dDefaultTevKColor@sda21(r2)
	sth      r22, 0x54(r3)
	stb      r23, 0x56(r3)
	stb      r24, 0x57(r3)
	stb      r25, 0x5b(r3)
	stb      r26, 0x5f(r3)
	stb      r27, 0x63(r3)
	stb      r28, 0x67(r3)
	stb      r29, 0x6b(r3)
	stb      r30, 0x6f(r3)
	stb      r31, 0x73(r3)
	stb      r12, 0x77(r3)
	stb      r11, 0x7b(r3)
	stb      r10, 0x7f(r3)
	stb      r9, 0x83(r3)
	stb      r8, 0x87(r3)
	stb      r6, 0x8b(r3)
	stb      r5, 0x8f(r3)
	stb      r4, 0x93(r3)
	mtctr    r0

lbl_8004DEE8:
	stw      r7, 8(r1)
	lbz      r6, 8(r1)
	lbz      r5, 9(r1)
	stb      r6, 0x98(r21)
	lbz      r4, 0xa(r1)
	lbz      r0, 0xb(r1)
	stb      r5, 0x99(r21)
	stb      r4, 0x9a(r21)
	stw      r7, 8(r1)
	stb      r6, 0xc(r1)
	lbz      r6, 8(r1)
	stb      r0, 0x9b(r21)
	stb      r5, 0xd(r1)
	lbz      r5, 9(r1)
	stb      r6, 0x9c(r21)
	stb      r4, 0xe(r1)
	lbz      r4, 0xa(r1)
	stb      r5, 0x9d(r21)
	stb      r0, 0xf(r1)
	lbz      r0, 0xb(r1)
	stb      r4, 0x9e(r21)
	stb      r0, 0x9f(r21)
	addi     r21, r21, 8
	stb      r6, 0xc(r1)
	stb      r5, 0xd(r1)
	stb      r4, 0xe(r1)
	stb      r0, 0xf(r1)
	bdnz     lbl_8004DEE8
	li       r7, 0xff
	lis      r4, j2dDefaultIndTevStageInfo@ha
	stb      r7, 0xa8(r3)
	addi     r6, r2, j2dDefaultTevSwapModeTable@sda21
	li       r0, 4
	mr       r5, r3
	stb      r7, 0xb0(r3)
	addi     r4, r4, j2dDefaultIndTevStageInfo@l
	stb      r7, 0xa9(r3)
	stb      r7, 0xb1(r3)
	stb      r7, 0xaa(r3)
	stb      r7, 0xb2(r3)
	stb      r7, 0xab(r3)
	stb      r7, 0xb3(r3)
	stb      r7, 0xac(r3)
	stb      r7, 0xb4(r3)
	stb      r7, 0xad(r3)
	stb      r7, 0xb5(r3)
	stb      r7, 0xae(r3)
	stb      r7, 0xb6(r3)
	stb      r7, 0xaf(r3)
	stb      r7, 0xb7(r3)
	lbz      r7, 1(r6)
	lbz      r9, 2(r6)
	lbz      r8, j2dDefaultTevSwapModeTable@sda21(r2)
	rlwinm   r7, r7, 4, 0x14, 0x1b
	slwi     r9, r9, 2
	lbz      r10, 3(r6)
	add      r7, r7, r9
	slwi     r8, r8, 6
	add      r7, r7, r10
	add      r7, r8, r7
	stb      r7, 0xb8(r3)
	lbz      r7, 1(r6)
	lbz      r9, 2(r6)
	lbz      r8, j2dDefaultTevSwapModeTable@sda21(r2)
	rlwinm   r7, r7, 4, 0x14, 0x1b
	slwi     r9, r9, 2
	lbz      r10, 3(r6)
	add      r7, r7, r9
	slwi     r8, r8, 6
	add      r7, r7, r10
	add      r7, r8, r7
	stb      r7, 0xb9(r3)
	lbz      r7, 1(r6)
	lbz      r9, 2(r6)
	lbz      r8, j2dDefaultTevSwapModeTable@sda21(r2)
	rlwinm   r7, r7, 4, 0x14, 0x1b
	slwi     r9, r9, 2
	lbz      r10, 3(r6)
	add      r7, r7, r9
	slwi     r8, r8, 6
	add      r7, r7, r10
	add      r7, r8, r7
	stb      r7, 0xba(r3)
	lbz      r9, 2(r6)
	lbz      r7, 1(r6)
	lbz      r8, j2dDefaultTevSwapModeTable@sda21(r2)
	slwi     r9, r9, 2
	slwi     r7, r7, 4
	lbz      r10, 3(r6)
	add      r6, r7, r9
	slwi     r7, r8, 6
	add      r6, r6, r10
	add      r6, r7, r6
	stb      r6, 0xbb(r3)
	mtctr    r0

lbl_8004E064:
	lwz      r6, 4(r4)
	lwz      r0, 8(r4)
	stw      r6, 0x14(r1)
	lwz      r6, 0(r4)
	stw      r0, 0x18(r1)
	lbz      r0, 0x17(r1)
	stw      r6, 0x10(r1)
	lbz      r6, 0x18(r1)
	slwi     r0, r0, 0x15
	lbz      r7, 0x16(r1)
	slwi     r6, r6, 0x16
	lbz      r8, 0x13(r1)
	lbz      r9, 0x15(r1)
	slwi     r7, r7, 0x14
	or       r0, r6, r0
	lbz      r10, 0x14(r1)
	lbz      r11, 0x12(r1)
	slwi     r6, r8, 0x10
	or       r0, r7, r0
	lbz      r12, 0x11(r1)
	slwi     r7, r9, 0xb
	slwi     r8, r10, 8
	or       r0, r6, r0
	slwi     r6, r11, 4
	or       r0, r7, r0
	slwi     r7, r12, 2
	or       r0, r8, r0
	lbz      r8, 0x10(r1)
	or       r0, r6, r0
	or       r0, r7, r0
	or       r0, r8, r0
	stw      r0, 0xbc(r5)
	lwz      r6, 4(r4)
	lwz      r0, 8(r4)
	stw      r6, 0x14(r1)
	lwz      r6, 0(r4)
	stw      r0, 0x18(r1)
	lbz      r0, 0x17(r1)
	stw      r6, 0x10(r1)
	lbz      r6, 0x18(r1)
	slwi     r0, r0, 0x15
	lbz      r7, 0x16(r1)
	slwi     r6, r6, 0x16
	lbz      r8, 0x13(r1)
	lbz      r9, 0x15(r1)
	slwi     r7, r7, 0x14
	or       r0, r6, r0
	lbz      r10, 0x14(r1)
	lbz      r11, 0x12(r1)
	slwi     r6, r8, 0x10
	or       r0, r7, r0
	lbz      r12, 0x11(r1)
	slwi     r7, r9, 0xb
	slwi     r8, r10, 8
	or       r0, r6, r0
	slwi     r6, r11, 4
	or       r0, r7, r0
	slwi     r7, r12, 2
	or       r0, r8, r0
	lbz      r8, 0x10(r1)
	or       r0, r6, r0
	or       r0, r7, r0
	or       r0, r8, r0
	stw      r0, 0xc0(r5)
	addi     r5, r5, 8
	bdnz     lbl_8004E064
	li       r0, 0
	stw      r0, 0xfc(r3)
	stw      r0, 0x100(r3)
	stw      r0, 0x104(r3)
	stw      r0, 0x108(r3)
	stw      r0, 0x10c(r3)
	stw      r0, 0x110(r3)
	stw      r0, 0x114(r3)
	stw      r0, 0x118(r3)
	stw      r0, 0x11c(r3)
	stb      r0, 0x121(r3)
	lmw      r21, 0x24(r1)
	addi     r1, r1, 0x50
	blr
	*/
}

/*
 * --INFO--
 * Address:	8004E1A4
 * Size:	0000E0
 * prepareTexture__12J2DTevBlock8FUc
 */
bool J2DTevBlock8::prepareTexture(unsigned char count)
{
	for (u8 i = 0; i < count; i++) {
		if (i >= 8) {
			return false;
		}
		if (m_textures[i] == nullptr) {
			m_textures[i] = new JUTTexture();
			if (m_textures[i] == nullptr) {
				return false;
			}
			_120 |= (1 << i);
		}
	}
	return true;
}

/*
 * --INFO--
 * Address:	8004E284
 * Size:	0003C8
 */
bool J2DTevBlock8::insertTexture(unsigned long, const ResTIMG*, JUTPalette*)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stmw     r25, 0x14(r1)
	mr       r26, r4
	cmplwi   r26, 8
	mr       r25, r3
	mr       r27, r5
	mr       r28, r6
	bge      lbl_8004E2B4
	cmplwi   r27, 0
	bne      lbl_8004E2BC

lbl_8004E2B4:
	li       r3, 0
	b        lbl_8004E638

lbl_8004E2BC:
	li       r30, 0
	b        lbl_8004E2E8

lbl_8004E2C4:
	rlwinm   r3, r30, 2, 0x16, 0x1d
	addi     r0, r3, 0xdc
	lwzx     r3, r25, r0
	cmplwi   r3, 0
	beq      lbl_8004E2F4
	lwz      r0, 0x20(r3)
	cmplwi   r0, 0
	beq      lbl_8004E2F4
	addi     r30, r30, 1

lbl_8004E2E8:
	clrlwi   r0, r30, 0x18
	cmplwi   r0, 8
	blt      lbl_8004E2C4

lbl_8004E2F4:
	clrlwi   r0, r30, 0x18
	cmplw    r0, r26
	bge      lbl_8004E308
	li       r3, 0
	b        lbl_8004E638

lbl_8004E308:
	cmplwi   r0, 8
	bne      lbl_8004E318
	li       r3, 0
	b        lbl_8004E638

lbl_8004E318:
	lbz      r0, 8(r27)
	li       r29, 0
	cmplwi   r0, 0
	beq      lbl_8004E3D8
	cmplwi   r28, 0
	bne      lbl_8004E3D8
	li       r0, 7
	mr       r5, r25
	li       r7, 0
	mtctr    r0
	li       r3, 1

lbl_8004E344:
	lwz      r6, 0xdc(r5)
	cmplwi   r6, 0
	beq      lbl_8004E398
	lwz      r4, 0x20(r6)
	cmplwi   r4, 0
	beq      lbl_8004E398
	lbz      r0, 8(r4)
	cmplwi   r0, 0
	beq      lbl_8004E398
	lbz      r4, 0x3a(r6)
	li       r0, 0
	cmpwi    r4, 0x10
	blt      lbl_8004E37C
	li       r0, 0x10

lbl_8004E37C:
	subf     r0, r0, r4
	clrlwi   r0, r0, 0x18
	cmplwi   r0, 8
	bge      lbl_8004E398
	slw      r0, r3, r0
	or       r0, r7, r0
	clrlwi   r7, r0, 0x18

lbl_8004E398:
	addi     r5, r5, 4
	bdnz     lbl_8004E344
	clrlwi   r4, r7, 0x18
	li       r5, 0
	li       r3, 1
	b        lbl_8004E3CC

lbl_8004E3B0:
	clrlwi   r0, r5, 0x18
	slw      r0, r3, r0
	and.     r0, r4, r0
	bne      lbl_8004E3C8
	mr       r29, r5
	b        lbl_8004E3D8

lbl_8004E3C8:
	addi     r5, r5, 1

lbl_8004E3CC:
	clrlwi   r0, r5, 0x18
	cmplwi   r0, 8
	blt      lbl_8004E3B0

lbl_8004E3D8:
	rlwinm   r0, r30, 2, 0x16, 0x1d
	add      r3, r25, r0
	lwz      r31, 0xdc(r3)
	cmplwi   r31, 0
	bne      lbl_8004E4D4
	li       r3, 0x40
	bl       __nw__FUl
	or.      r31, r3, r3
	beq      lbl_8004E41C
	li       r0, 0
	mr       r4, r27
	stw      r0, 0x28(r31)
	mr       r5, r29
	bl       storeTIMG__10JUTTextureFPC7ResTIMGUc
	lbz      r0, 0x3b(r31)
	rlwinm   r0, r0, 0, 0x1e, 0x1e
	stb      r0, 0x3b(r31)

lbl_8004E41C:
	cmplwi   r31, 0
	bne      lbl_8004E42C
	li       r3, 0
	b        lbl_8004E638

lbl_8004E42C:
	cmplwi   r28, 0
	beq      lbl_8004E444
	mr       r3, r31
	mr       r4, r27
	mr       r5, r28
	bl       storeTIMG__10JUTTextureFPC7ResTIMGP10JUTPalette

lbl_8004E444:
	li       r8, 7
	b        lbl_8004E488

lbl_8004E44C:
	slwi     r3, r4, 2
	rlwinm   r0, r8, 2, 0x16, 0x1d
	add      r6, r25, r3
	slwi     r4, r4, 1
	lwz      r5, 0xd8(r6)
	add      r7, r25, r0
	rlwinm   r3, r8, 1, 0x17, 0x1e
	addi     r4, r4, 2
	stw      r5, 0xdc(r7)
	addi     r0, r3, 4
	addi     r8, r8, -1
	lwz      r3, 0xf8(r6)
	stw      r3, 0xfc(r7)
	lhzx     r3, r25, r4
	sthx     r3, r25, r0

lbl_8004E488:
	clrlwi   r4, r8, 0x18
	cmplw    r4, r26
	bgt      lbl_8004E44C
	slwi     r0, r26, 2
	mr       r3, r25
	add      r5, r25, r0
	clrlwi   r4, r26, 0x18
	stw      r31, 0xdc(r5)
	li       r5, 1
	lwz      r12, 0(r25)
	lwz      r12, 0xac(r12)
	mtctr    r12
	bctrl
	li       r0, 1
	lbz      r3, 0x120(r25)
	slw      r0, r0, r26
	or       r0, r3, r0
	stb      r0, 0x120(r25)
	b        lbl_8004E610

lbl_8004E4D4:
	cmplwi   r28, 0
	bne      lbl_8004E4F0
	mr       r3, r31
	mr       r4, r27
	mr       r5, r29
	bl       storeTIMG__10JUTTextureFPC7ResTIMGUc
	b        lbl_8004E500

lbl_8004E4F0:
	mr       r3, r31
	mr       r4, r27
	mr       r5, r28
	bl       storeTIMG__10JUTTextureFPC7ResTIMGP10JUTPalette

lbl_8004E500:
	lbz      r0, 0x120(r25)
	mr       r3, r30
	addi     r4, r1, 8
	clrlwi   r11, r0, 0x1f
	rlwinm   r10, r0, 0x1f, 0x1f, 0x1f
	rlwinm   r9, r0, 0x1e, 0x1f, 0x1f
	rlwinm   r8, r0, 0x1d, 0x1f, 0x1f
	rlwinm   r7, r0, 0x1c, 0x1f, 0x1f
	rlwinm   r6, r0, 0x1b, 0x1f, 0x1f
	rlwinm   r5, r0, 0x1a, 0x1f, 0x1f
	rlwinm   r0, r0, 0x19, 0x1f, 0x1f
	stb      r11, 8(r1)
	stb      r10, 9(r1)
	stb      r9, 0xa(r1)
	stb      r8, 0xb(r1)
	stb      r7, 0xc(r1)
	stb      r6, 0xd(r1)
	stb      r5, 0xe(r1)
	stb      r0, 0xf(r1)
	b        lbl_8004E59C

lbl_8004E550:
	slwi     r5, r8, 2
	rlwinm   r0, r3, 2, 0x16, 0x1d
	add      r9, r25, r5
	slwi     r6, r8, 1
	lwz      r7, 0xd8(r9)
	add      r10, r25, r0
	addi     r0, r8, -1
	rlwinm   r5, r3, 1, 0x17, 0x1e
	stw      r7, 0xdc(r10)
	clrlwi   r8, r3, 0x18
	lbzx     r0, r4, r0
	addi     r6, r6, 2
	lwz      r7, 0xf8(r9)
	addi     r5, r5, 4
	stbx     r0, r4, r8
	addi     r3, r3, -1
	stw      r7, 0xfc(r10)
	lhzx     r0, r25, r6
	sthx     r0, r25, r5

lbl_8004E59C:
	clrlwi   r8, r3, 0x18
	cmplw    r8, r26
	bgt      lbl_8004E550
	slwi     r3, r26, 2
	li       r0, 0
	add      r3, r25, r3
	addi     r5, r1, 8
	stw      r31, 0xdc(r3)
	li       r7, 0
	li       r3, 1
	stb      r0, 0x120(r25)
	b        lbl_8004E5F0

lbl_8004E5CC:
	clrlwi   r6, r7, 0x18
	lbzx     r0, r5, r6
	cmplwi   r0, 0
	beq      lbl_8004E5EC
	lbz      r4, 0x120(r25)
	slw      r0, r3, r6
	or       r0, r4, r0
	stb      r0, 0x120(r25)

lbl_8004E5EC:
	addi     r7, r7, 1

lbl_8004E5F0:
	clrlwi   r0, r7, 0x18
	cmplwi   r0, 8
	blt      lbl_8004E5CC
	li       r0, 1
	lbz      r3, 0x120(r25)
	slw      r0, r0, r26
	or       r0, r3, r0
	stb      r0, 0x120(r25)

lbl_8004E610:
	slwi     r3, r26, 2
	slwi     r0, r26, 1
	add      r4, r25, r3
	li       r5, 0
	lis      r3, 0x0000FFFF@ha
	stw      r5, 0xfc(r4)
	addi     r4, r3, 0x0000FFFF@l
	add      r3, r25, r0
	sth      r4, 4(r3)
	li       r3, 1

lbl_8004E638:
	lmw      r25, 0x14(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	8004E64C
 * Size:	000198
 */
bool J2DTevBlock8::insertTexture(unsigned long, JUTTexture*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r5
	stw      r30, 0x18(r1)
	mr       r30, r4
	cmplwi   r30, 8
	stw      r29, 0x14(r1)
	mr       r29, r3
	bge      lbl_8004E680
	cmplwi   r31, 0
	bne      lbl_8004E688

lbl_8004E680:
	li       r3, 0
	b        lbl_8004E7C8

lbl_8004E688:
	li       r4, 0
	b        lbl_8004E6B4

lbl_8004E690:
	rlwinm   r3, r4, 2, 0x16, 0x1d
	addi     r0, r3, 0xdc
	lwzx     r3, r29, r0
	cmplwi   r3, 0
	beq      lbl_8004E6C0
	lwz      r0, 0x20(r3)
	cmplwi   r0, 0
	beq      lbl_8004E6C0
	addi     r4, r4, 1

lbl_8004E6B4:
	clrlwi   r0, r4, 0x18
	cmplwi   r0, 8
	blt      lbl_8004E690

lbl_8004E6C0:
	clrlwi   r0, r4, 0x18
	cmplw    r0, r30
	bge      lbl_8004E6D4
	li       r3, 0
	b        lbl_8004E7C8

lbl_8004E6D4:
	cmplwi   r0, 8
	bne      lbl_8004E6E4
	li       r3, 0
	b        lbl_8004E7C8

lbl_8004E6E4:
	lwz      r3, 0xf8(r29)
	cmplwi   r3, 0
	beq      lbl_8004E71C
	lwz      r0, 0x20(r3)
	cmplwi   r0, 0
	bne      lbl_8004E71C
	lbz      r0, 0x120(r29)
	rlwinm.  r0, r0, 0, 0x18, 0x18
	beq      lbl_8004E710
	li       r4, 1
	bl       __dt__10JUTTextureFv

lbl_8004E710:
	lbz      r0, 0x120(r29)
	clrlwi   r0, r0, 0x19
	stb      r0, 0x120(r29)

lbl_8004E71C:
	li       r8, 7
	b        lbl_8004E760

lbl_8004E724:
	slwi     r3, r4, 2
	rlwinm   r0, r8, 2, 0x16, 0x1d
	add      r6, r29, r3
	slwi     r4, r4, 1
	lwz      r5, 0xd8(r6)
	add      r7, r29, r0
	rlwinm   r3, r8, 1, 0x17, 0x1e
	addi     r4, r4, 2
	stw      r5, 0xdc(r7)
	addi     r0, r3, 4
	addi     r8, r8, -1
	lwz      r3, 0xf8(r6)
	stw      r3, 0xfc(r7)
	lhzx     r3, r29, r4
	sthx     r3, r29, r0

lbl_8004E760:
	clrlwi   r4, r8, 0x18
	cmplw    r4, r30
	bgt      lbl_8004E724
	slwi     r3, r30, 2
	slwi     r0, r30, 1
	add      r5, r29, r3
	lis      r3, 0x0000FFFF@ha
	stw      r31, 0xdc(r5)
	li       r4, 0
	addi     r7, r3, 0x0000FFFF@l
	add      r6, r29, r0
	stw      r4, 0xfc(r5)
	mr       r3, r29
	clrlwi   r4, r30, 0x18
	li       r5, 1
	sth      r7, 4(r6)
	lwz      r12, 0(r29)
	lwz      r12, 0xac(r12)
	mtctr    r12
	bctrl
	li       r0, 1
	lbz      r4, 0x120(r29)
	slw      r0, r0, r30
	li       r3, 1
	andc     r0, r4, r0
	stb      r0, 0x120(r29)

lbl_8004E7C8:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8004E7E4
 * Size:	0002E4
 * setTexture__12J2DTevBlock8FUlPC7ResTIMG
 */
bool J2DTevBlock8::setTexture(unsigned long index, const ResTIMG* img)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stmw     r25, 0x14(r1)
	mr       r26, r4
	cmplwi   r26, 8
	mr       r25, r3
	mr       r27, r5
	blt      lbl_8004E810
	li       r3, 0
	b        lbl_8004EAB4

lbl_8004E810:
	cmplwi   r27, 0
	li       r28, 0
	beq      lbl_8004E944
	lbz      r0, 8(r27)
	cmplwi   r0, 0
	beq      lbl_8004E944
	li       r0, 4
	mr       r4, r25
	li       r6, 0
	li       r7, 0
	mtctr    r0

lbl_8004E83C:
	cmplw    r7, r26
	beq      lbl_8004E89C
	lwz      r5, 0xdc(r4)
	cmplwi   r5, 0
	beq      lbl_8004E89C
	lwz      r3, 0x20(r5)
	cmplwi   r3, 0
	beq      lbl_8004E89C
	lbz      r0, 8(r3)
	cmplwi   r0, 0
	beq      lbl_8004E89C
	lbz      r3, 0x3a(r5)
	li       r0, 0
	cmpwi    r3, 0x10
	blt      lbl_8004E87C
	li       r0, 0x10

lbl_8004E87C:
	subf     r0, r0, r3
	clrlwi   r3, r0, 0x18
	cmplwi   r3, 8
	bge      lbl_8004E89C
	li       r0, 1
	slw      r0, r0, r3
	or       r0, r6, r0
	clrlwi   r6, r0, 0x18

lbl_8004E89C:
	addi     r7, r7, 1
	cmplw    r7, r26
	beq      lbl_8004E900
	lwz      r5, 0xe0(r4)
	cmplwi   r5, 0
	beq      lbl_8004E900
	lwz      r3, 0x20(r5)
	cmplwi   r3, 0
	beq      lbl_8004E900
	lbz      r0, 8(r3)
	cmplwi   r0, 0
	beq      lbl_8004E900
	lbz      r3, 0x3a(r5)
	li       r0, 0
	cmpwi    r3, 0x10
	blt      lbl_8004E8E0
	li       r0, 0x10

lbl_8004E8E0:
	subf     r0, r0, r3
	clrlwi   r3, r0, 0x18
	cmplwi   r3, 8
	bge      lbl_8004E900
	li       r0, 1
	slw      r0, r0, r3
	or       r0, r6, r0
	clrlwi   r6, r0, 0x18

lbl_8004E900:
	addi     r4, r4, 8
	addi     r7, r7, 1
	bdnz     lbl_8004E83C
	clrlwi   r4, r6, 0x18
	li       r5, 0
	li       r3, 1
	b        lbl_8004E938

lbl_8004E91C:
	clrlwi   r0, r5, 0x18
	slw      r0, r3, r0
	and.     r0, r4, r0
	bne      lbl_8004E934
	mr       r28, r5
	b        lbl_8004E944

lbl_8004E934:
	addi     r5, r5, 1

lbl_8004E938:
	clrlwi   r0, r5, 0x18
	cmplwi   r0, 4
	blt      lbl_8004E91C

lbl_8004E944:
	slwi     r29, r26, 2
	add      r31, r25, r29
	lwz      r3, 0xdc(r31)
	cmplwi   r3, 0
	bne      lbl_8004E9D8
	cmplwi   r27, 0
	beq      lbl_8004E9C0
	li       r3, 0x40
	bl       __nw__FUl
	or.      r30, r3, r3
	beq      lbl_8004E990
	li       r0, 0
	mr       r4, r27
	stw      r0, 0x28(r30)
	mr       r5, r28
	bl       storeTIMG__10JUTTextureFPC7ResTIMGUc
	lbz      r0, 0x3b(r30)
	rlwinm   r0, r0, 0, 0x1e, 0x1e
	stb      r0, 0x3b(r30)

lbl_8004E990:
	stw      r30, 0xdc(r31)
	lwz      r0, 0xdc(r31)
	cmplwi   r0, 0
	bne      lbl_8004E9A8
	li       r3, 0
	b        lbl_8004EAB4

lbl_8004E9A8:
	li       r0, 1
	lbz      r3, 0x120(r25)
	slw      r0, r0, r26
	or       r0, r3, r0
	stb      r0, 0x120(r25)
	b        lbl_8004EA88

lbl_8004E9C0:
	li       r0, 1
	lbz      r3, 0x120(r25)
	slw      r0, r0, r26
	andc     r0, r3, r0
	stb      r0, 0x120(r25)
	b        lbl_8004EA88

lbl_8004E9D8:
	li       r0, 1
	lbz      r4, 0x120(r25)
	slw      r30, r0, r26
	and.     r0, r4, r30
	beq      lbl_8004EA24
	cmplwi   r27, 0
	beq      lbl_8004EA04
	mr       r4, r27
	mr       r5, r28
	bl       storeTIMG__10JUTTextureFPC7ResTIMGUc
	b        lbl_8004EA88

lbl_8004EA04:
	li       r4, 1
	bl       __dt__10JUTTextureFv
	li       r0, 0
	stw      r0, 0xdc(r31)
	lbz      r0, 0x120(r25)
	andc     r0, r0, r30
	stb      r0, 0x120(r25)
	b        lbl_8004EA88

lbl_8004EA24:
	li       r0, 0
	cmplwi   r27, 0
	stw      r0, 0xdc(r31)
	beq      lbl_8004EA88
	li       r3, 0x40
	bl       __nw__FUl
	or.      r28, r3, r3
	beq      lbl_8004EA64
	li       r0, 0
	mr       r4, r27
	stw      r0, 0x28(r28)
	li       r5, 0
	bl       storeTIMG__10JUTTextureFPC7ResTIMGUc
	lbz      r0, 0x3b(r28)
	rlwinm   r0, r0, 0, 0x1e, 0x1e
	stb      r0, 0x3b(r28)

lbl_8004EA64:
	stw      r28, 0xdc(r31)
	lwz      r0, 0xdc(r31)
	cmplwi   r0, 0
	bne      lbl_8004EA7C
	li       r3, 0
	b        lbl_8004EAB4

lbl_8004EA7C:
	lbz      r0, 0x120(r25)
	or       r0, r0, r30
	stb      r0, 0x120(r25)

lbl_8004EA88:
	add      r27, r25, r29
	lwz      r3, 0xfc(r27)
	bl       __dl__FPv
	li       r4, 0
	slwi     r0, r26, 1
	lis      r3, 0x0000FFFF@ha
	stw      r4, 0xfc(r27)
	addi     r4, r3, 0x0000FFFF@l
	add      r3, r25, r0
	sth      r4, 4(r3)
	li       r3, 1

lbl_8004EAB4:
	lmw      r25, 0x14(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	8004EAC8
 * Size:	0000A8
 * setTexture__12J2DTevBlock8FUlP10JUTTexture
 */
bool J2DTevBlock8::setTexture(unsigned long index, JUTTexture* texture)
{
	if (index >= 8) {
		return false;
	}
	if ((_120 & 1 << index) != 0) {
		delete m_textures[index];
	}
	m_textures[index] = texture;
	_120 &= ~(1 << index);
	delete m_palettes[index];
	m_palettes[index]   = nullptr;
	m_texIndices[index] = 0xFFFF;
	return true;
}

/*
 * --INFO--
 * Address:	8004EB70
 * Size:	000210
 * removeTexture__12J2DTevBlock8FUl
 */
bool J2DTevBlock8::removeTexture(unsigned long)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r4
	cmplwi   r31, 8
	stw      r30, 0x18(r1)
	mr       r30, r3
	stw      r29, 0x14(r1)
	blt      lbl_8004EBA0
	li       r3, 0
	b        lbl_8004ED64

lbl_8004EBA0:
	li       r0, 1
	lbz      r3, 0x120(r30)
	slw      r0, r0, r31
	and.     r0, r3, r0
	beq      lbl_8004EBC8
	slwi     r0, r31, 2
	li       r4, 1
	add      r3, r30, r0
	lwz      r3, 0xdc(r3)
	bl       __dt__10JUTTextureFv

lbl_8004EBC8:
	slwi     r29, r31, 2
	add      r3, r30, r29
	lwz      r3, 0xfc(r3)
	bl       __dl__FPv
	cmplwi   r31, 7
	mr       r5, r31
	bge      lbl_8004ED2C
	subfic   r0, r31, 7
	cmplwi   r0, 8
	ble      lbl_8004ECE8
	subfic   r0, r31, 6
	slwi     r4, r31, 1
	srwi     r0, r0, 3
	add      r3, r30, r29
	add      r4, r30, r4
	mtctr    r0
	lis      r6, 0x-0000001@ha
	addi     r6, r6, 0x-0000001@l
	cmplw    r31, r6
	bge      lbl_8004ECE8

lbl_8004EC18:
	lwz      r0, 0xe0(r3)
	addi     r5, r5, 8
	stw      r0, 0xdc(r3)
	lwz      r0, 0x100(r3)
	stw      r0, 0xfc(r3)
	lhz      r0, 6(r4)
	sth      r0, 4(r4)
	lwz      r0, 0xe4(r3)
	stw      r0, 0xe0(r3)
	lwz      r0, 0x104(r3)
	stw      r0, 0x100(r3)
	lhz      r0, 8(r4)
	sth      r0, 6(r4)
	lwz      r0, 0xe8(r3)
	stw      r0, 0xe4(r3)
	lwz      r0, 0x108(r3)
	stw      r0, 0x104(r3)
	lhz      r0, 0xa(r4)
	sth      r0, 8(r4)
	lwz      r0, 0xec(r3)
	stw      r0, 0xe8(r3)
	lwz      r0, 0x10c(r3)
	stw      r0, 0x108(r3)
	lhz      r0, 0xc(r4)
	sth      r0, 0xa(r4)
	lwz      r0, 0xf0(r3)
	stw      r0, 0xec(r3)
	lwz      r0, 0x110(r3)
	stw      r0, 0x10c(r3)
	lhz      r0, 0xe(r4)
	sth      r0, 0xc(r4)
	lwz      r0, 0xf4(r3)
	stw      r0, 0xf0(r3)
	lwz      r0, 0x114(r3)
	stw      r0, 0x110(r3)
	lhz      r0, 0x10(r4)
	sth      r0, 0xe(r4)
	lwz      r0, 0xf8(r3)
	stw      r0, 0xf4(r3)
	lwz      r0, 0x118(r3)
	stw      r0, 0x114(r3)
	lhz      r0, 0x12(r4)
	sth      r0, 0x10(r4)
	lwz      r0, 0xfc(r3)
	stw      r0, 0xf8(r3)
	lwz      r0, 0x11c(r3)
	stw      r0, 0x118(r3)
	addi     r3, r3, 0x20
	lhz      r0, 0x14(r4)
	sth      r0, 0x12(r4)
	addi     r4, r4, 0x10
	bdnz     lbl_8004EC18

lbl_8004ECE8:
	slwi     r4, r5, 2
	slwi     r3, r5, 1
	subfic   r0, r5, 7
	add      r4, r30, r4
	add      r3, r30, r3
	mtctr    r0
	cmplwi   r5, 7
	bge      lbl_8004ED2C

lbl_8004ED08:
	lwz      r0, 0xe0(r4)
	stw      r0, 0xdc(r4)
	lwz      r0, 0x100(r4)
	stw      r0, 0xfc(r4)
	addi     r4, r4, 4
	lhz      r0, 6(r3)
	sth      r0, 4(r3)
	addi     r3, r3, 2
	bdnz     lbl_8004ED08

lbl_8004ED2C:
	li       r5, 0
	lis      r3, 0x0000FFFF@ha
	stw      r5, 0xf8(r30)
	addi     r0, r3, 0x0000FFFF@l
	mr       r3, r30
	clrlwi   r4, r31, 0x18
	stw      r5, 0x118(r30)
	li       r5, 0
	sth      r0, 0x12(r30)
	lwz      r12, 0(r30)
	lwz      r12, 0xac(r12)
	mtctr    r12
	bctrl
	li       r3, 1

lbl_8004ED64:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8004ED80
 * Size:	0000B4
 */
bool J2DTevBlock8::setFont(ResFONT* font)
{
	if (font == nullptr) {
		return false;
	}
	JUTResFont* jutFont = new JUTResFont(font, nullptr);
	if (jutFont == nullptr) {
		return false;
	}
	if (_121 != 0) {
		delete m_font;
	}
	m_font = jutFont;
	_121   = 1;
	return true;
}

/*
 * --INFO--
 * Address:	8004EE34
 * Size:	00007C
 * setFont__12J2DTevBlock8FP7JUTFont
 */
bool J2DTevBlock8::setFont(JUTFont* font)
{
	if (font == nullptr) {
		return false;
	}
	if (_121 != 0) {
		delete m_font;
	}
	m_font = static_cast<JUTResFont*>(font);
	_121   = 0;
	return true;
}

/*
 * --INFO--
 * Address:	8004EEB0
 * Size:	0000D0
 * setPalette__12J2DTevBlock8FUlPC7ResTLUT
 */
bool J2DTevBlock8::setPalette(unsigned long index, const ResTLUT* lut)
{
	if (index >= 8) {
		return false;
	}
	if (lut != nullptr) {
		if (m_palettes[index] == nullptr) {
			m_palettes[index] = new JUTPalette(index, const_cast<ResTLUT*>(lut));
			if (m_palettes[index] == nullptr) {
				return false;
			}
		} else {
			m_palettes[index]->storeTLUT(GX_TLUT0, const_cast<ResTLUT*>(lut));
		}
		if (m_textures[index] != nullptr) {
			m_textures[index]->attachPalette(m_palettes[index]);
		}
	} else {
		delete m_palettes[index];
		m_palettes[index] = nullptr;
	}
	return true;
}

/*
 * --INFO--
 * Address:	8004EF80
 * Size:	00006C
 */
void J2DTevBlock8::shiftDeleteFlag(unsigned char flag, bool direction)
{
	if (direction) {
		u32 v1 = ((1 << flag) - 1);
		_120   = (_120 & v1) | ((_120 & ~v1) << 1);
	} else {
		_120 = (_120 & (1 << flag) - 1) | ((_120 & ~((1 << (flag + 1)) - 1)) >> 1);
	}
}

/*
 * --INFO--
 * Address:	8004EFEC
 * Size:	0002E8
 */
void J2DTevBlock8::setGX()
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	stw      r30, 0x28(r1)
	stw      r29, 0x24(r1)
	mr       r29, r3
	stw      r28, 0x20(r1)
	li       r28, 0

lbl_8004F010:
	mr       r3, r29
	mr       r4, r28
	lwz      r12, 0(r29)
	mr       r5, r28
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	addi     r28, r28, 1
	cmpwi    r28, 8
	blt      lbl_8004F010
	mr       r30, r29
	li       r28, 0
	b        lbl_8004F060

lbl_8004F044:
	lbz      r4, 0x16(r30)
	mr       r3, r28
	lbz      r5, 0x17(r30)
	lbz      r6, 0x18(r30)
	bl       GXSetTevOrder
	addi     r30, r30, 4
	addi     r28, r28, 1

lbl_8004F060:
	lbz      r0, 0x56(r29)
	cmpw     r28, r0
	blt      lbl_8004F044
	mr       r31, r29
	addi     r30, r1, 0xc
	li       r28, 0

lbl_8004F078:
	lwz      r4, 0x36(r31)
	cmpwi    r28, 3
	lwz      r0, 0x3a(r31)
	li       r3, 0
	stw      r4, 0xc(r1)
	stw      r0, 0x10(r1)
	beq      lbl_8004F098
	addi     r3, r28, 1

lbl_8004F098:
	mr       r4, r30
	bl       GXSetTevColorS10
	addi     r28, r28, 1
	addi     r31, r31, 8
	cmpwi    r28, 4
	blt      lbl_8004F078
	lbz      r3, 0x56(r29)
	bl       GXSetNumTevStages
	mr       r30, r29
	li       r31, 0
	b        lbl_8004F1E8

lbl_8004F0C4:
	lbz      r0, 0x5a(r30)
	mr       r3, r31
	lbz      r5, 0x59(r30)
	rlwinm   r6, r0, 0x1c, 0x1c, 0x1f
	clrlwi   r7, r0, 0x1c
	rlwinm   r4, r5, 0x1c, 0x1c, 0x1f
	clrlwi   r5, r5, 0x1c
	bl       GXSetTevColorIn
	lbz      r5, 0x5d(r30)
	mr       r3, r31
	lbz      r6, 0x5e(r30)
	rlwinm   r0, r5, 0, 0x18, 0x1a
	srawi    r4, r0, 5
	rlwinm   r7, r6, 0x1c, 0x1d, 0x1f
	rlwinm   r0, r6, 0x19, 0x1f, 0x1f
	rlwimi   r0, r5, 1, 0x1d, 0x1e
	clrlwi   r4, r4, 0x18
	rlwinm   r5, r5, 0x1e, 0x1d, 0x1f
	clrlwi   r6, r0, 0x18
	bl       GXSetTevAlphaIn
	lbz      r7, 0x58(r30)
	mr       r3, r31
	rlwinm   r0, r7, 0, 0x1a, 0x1b
	clrlwi   r5, r7, 0x1e
	srawi    r6, r0, 4
	rlwinm   r9, r7, 0x1e, 0x1f, 0x1f
	rlwinm   r0, r7, 0x1d, 0x1d, 0x1e
	cmplwi   r5, 3
	add      r4, r9, r0
	rlwinm   r8, r7, 0x1a, 0x1e, 0x1f
	addi     r0, r4, 8
	clrlwi   r6, r6, 0x18
	rlwinm   r7, r7, 0x1d, 0x1f, 0x1f
	clrlwi   r0, r0, 0x18
	beq      lbl_8004F154
	mr       r0, r9

lbl_8004F154:
	clrlwi   r4, r0, 0x18
	bl       GXSetTevColorOp
	lbz      r7, 0x5c(r30)
	mr       r3, r31
	rlwinm   r0, r7, 0, 0x1a, 0x1b
	clrlwi   r5, r7, 0x1e
	srawi    r6, r0, 4
	rlwinm   r9, r7, 0x1e, 0x1f, 0x1f
	rlwinm   r0, r7, 0x1d, 0x1d, 0x1e
	cmplwi   r5, 3
	add      r4, r9, r0
	rlwinm   r8, r7, 0x1a, 0x1e, 0x1f
	addi     r0, r4, 8
	clrlwi   r6, r6, 0x18
	rlwinm   r7, r7, 0x1d, 0x1f, 0x1f
	clrlwi   r0, r0, 0x18
	beq      lbl_8004F19C
	mr       r0, r9

lbl_8004F19C:
	clrlwi   r4, r0, 0x18
	bl       GXSetTevAlphaOp
	add      r28, r29, r31
	li       r4, 0
	lbz      r0, 0xa8(r28)
	cmplwi   r0, 0xff
	beq      lbl_8004F1BC
	mr       r4, r0

lbl_8004F1BC:
	mr       r3, r31
	bl       GXSetTevKColorSel
	lbz      r0, 0xb0(r28)
	li       r4, 0
	cmplwi   r0, 0xff
	beq      lbl_8004F1D8
	mr       r4, r0

lbl_8004F1D8:
	mr       r3, r31
	bl       GXSetTevKAlphaSel
	addi     r30, r30, 8
	addi     r31, r31, 1

lbl_8004F1E8:
	lbz      r0, 0x56(r29)
	cmpw     r31, r0
	blt      lbl_8004F0C4
	li       r28, 0
	mr       r30, r29

lbl_8004F1FC:
	lwz      r0, 0x98(r30)
	mr       r3, r28
	addi     r4, r1, 8
	stw      r0, 8(r1)
	bl       GXSetTevKColor
	addi     r28, r28, 1
	addi     r30, r30, 4
	cmpwi    r28, 4
	blt      lbl_8004F1FC
	mr       r30, r29
	li       r28, 0
	b        lbl_8004F248

lbl_8004F22C:
	lbz      r0, 0x5e(r30)
	mr       r3, r28
	clrlwi   r4, r0, 0x1e
	rlwinm   r5, r0, 0x1e, 0x1e, 0x1f
	bl       GXSetTevSwapMode
	addi     r30, r30, 8
	addi     r28, r28, 1

lbl_8004F248:
	lbz      r0, 0x56(r29)
	cmpw     r28, r0
	blt      lbl_8004F22C
	li       r28, 0

lbl_8004F258:
	addi     r0, r28, 0xb8
	mr       r3, r28
	lbzx     r0, r29, r0
	rlwinm   r4, r0, 0x1a, 0x1e, 0x1f
	rlwinm   r5, r0, 0x1c, 0x1e, 0x1f
	rlwinm   r6, r0, 0x1e, 0x1e, 0x1f
	clrlwi   r7, r0, 0x1e
	bl       GXSetTevSwapModeTable
	addi     r28, r28, 1
	cmpwi    r28, 4
	blt      lbl_8004F258
	li       r28, 0
	b        lbl_8004F2A4

lbl_8004F28C:
	rlwinm   r3, r28, 2, 0x16, 0x1d
	mr       r4, r28
	addi     r3, r3, 0xbc
	add      r3, r29, r3
	bl       load__14J2DIndTevStageFUc
	addi     r28, r28, 1

lbl_8004F2A4:
	lbz      r0, 0x56(r29)
	clrlwi   r3, r28, 0x18
	cmplw    r3, r0
	blt      lbl_8004F28C
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	lwz      r29, 0x24(r1)
	lwz      r28, 0x20(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	8004F2D4
 * Size:	000048
 * loadTexture__12J2DTevBlock8F11_GXTexMapIDUl
 */
void J2DTevBlock8::loadTexture(_GXTexMapID id, unsigned long index)
{
	if (index < 8 && m_textures[index] != nullptr && m_textures[index]->_20 != nullptr) {
		m_textures[index]->load(id);
	}
}

/*
 * --INFO--
 * Address:	8004F31C
 * Size:	000128
 */
J2DTevBlock16::J2DTevBlock16()
    : J2DTevBlock()
    , m_orders()
    , m_colors()
    , m_stages()
    , m_kColors()
    , m_swapModeTables()
    , m_indStages()
{
	for (int i = 0; i < 8; i++) {
		m_textures[i] = nullptr;
	}
	_1B0 = 0;
	initialize();
}

/*
 * --INFO--
 * Address:	8004F444
 * Size:	0000D0
 */
J2DTevBlock16::~J2DTevBlock16()
{
	for (int i = 0; i < 8; i++) {
		if ((_1B0 & 1 << i) != 0) {
			delete m_textures[i];
		}
		delete m_palettes[i];
	}
	if (_1B1 != 0) {
		delete m_font;
	}
}

/*
 * --INFO--
 * Address:	8004F514
 * Size:	000550
 */
void J2DTevBlock16::initialize()
{
	/*
	stwu     r1, -0x30(r1)
	lis      r4, 0x0000FFFF@ha
	addi     r6, r4, 0x0000FFFF@l
	li       r0, 2
	stw      r31, 0x2c(r1)
	mr       r4, r3
	addi     r5, r2, j2dDefaultTevOrderInfoNull@sda21
	sth      r6, 4(r3)
	sth      r6, 6(r3)
	sth      r6, 8(r3)
	sth      r6, 0xa(r3)
	sth      r6, 0xc(r3)
	sth      r6, 0xe(r3)
	sth      r6, 0x10(r3)
	sth      r6, 0x12(r3)
	sth      r6, 0x14(r3)
	mtctr    r0

lbl_8004F558:
	lbz      r0, j2dDefaultTevOrderInfoNull@sda21(r2)
	stb      r0, 0x16(r4)
	lbz      r0, 1(r5)
	stb      r0, 0x17(r4)
	lbz      r0, 2(r5)
	stb      r0, 0x18(r4)
	lbz      r0, j2dDefaultTevOrderInfoNull@sda21(r2)
	stb      r0, 0x1a(r4)
	lbz      r0, 1(r5)
	stb      r0, 0x1b(r4)
	lbz      r0, 2(r5)
	stb      r0, 0x1c(r4)
	lbz      r0, j2dDefaultTevOrderInfoNull@sda21(r2)
	stb      r0, 0x1e(r4)
	lbz      r0, 1(r5)
	stb      r0, 0x1f(r4)
	lbz      r0, 2(r5)
	stb      r0, 0x20(r4)
	lbz      r0, j2dDefaultTevOrderInfoNull@sda21(r2)
	stb      r0, 0x22(r4)
	lbz      r0, 1(r5)
	stb      r0, 0x23(r4)
	lbz      r0, 2(r5)
	stb      r0, 0x24(r4)
	lbz      r0, j2dDefaultTevOrderInfoNull@sda21(r2)
	stb      r0, 0x26(r4)
	lbz      r0, 1(r5)
	stb      r0, 0x27(r4)
	lbz      r0, 2(r5)
	stb      r0, 0x28(r4)
	lbz      r0, j2dDefaultTevOrderInfoNull@sda21(r2)
	stb      r0, 0x2a(r4)
	lbz      r0, 1(r5)
	stb      r0, 0x2b(r4)
	lbz      r0, 2(r5)
	stb      r0, 0x2c(r4)
	lbz      r0, j2dDefaultTevOrderInfoNull@sda21(r2)
	stb      r0, 0x2e(r4)
	lbz      r0, 1(r5)
	stb      r0, 0x2f(r4)
	lbz      r0, 2(r5)
	stb      r0, 0x30(r4)
	lbz      r0, j2dDefaultTevOrderInfoNull@sda21(r2)
	stb      r0, 0x32(r4)
	lbz      r0, 1(r5)
	stb      r0, 0x33(r4)
	lbz      r0, 2(r5)
	stb      r0, 0x34(r4)
	addi     r4, r4, 0x20
	bdnz     lbl_8004F558
	lha      r11, j2dDefaultTevColor@sda21(r2)
	addi     r6, r2, j2dDefaultTevColor@sda21
	lha      r10, 2(r6)
	li       r7, 1
	sth      r11, 0x56(r3)
	li       r0, 2
	lha      r9, 4(r6)
	mr       r4, r3
	sth      r10, 0x58(r3)
	li       r5, 0
	lha      r8, 6(r6)
	li       r6, 0
	sth      r9, 0x5a(r3)
	sth      r8, 0x5c(r3)
	sth      r11, 0x5e(r3)
	sth      r10, 0x60(r3)
	sth      r9, 0x62(r3)
	sth      r8, 0x64(r3)
	sth      r11, 0x66(r3)
	sth      r10, 0x68(r3)
	sth      r9, 0x6a(r3)
	sth      r8, 0x6c(r3)
	sth      r11, 0x6e(r3)
	sth      r10, 0x70(r3)
	sth      r9, 0x72(r3)
	sth      r8, 0x74(r3)
	stb      r7, 0x76(r3)
	mtctr    r0

lbl_8004F690:
	addi     r0, r6, 0xc0
	addi     r7, r6, 0xc1
	stb      r0, 0x77(r4)
	addi     r0, r5, 1
	slwi     r8, r0, 1
	addi     r6, r6, 0x10
	stb      r7, 0x7b(r4)
	addi     r7, r8, 0xc0
	addi     r0, r5, 2
	addi     r9, r8, 0xc1
	stb      r7, 0x7f(r4)
	slwi     r10, r0, 1
	addi     r8, r10, 0xc0
	addi     r0, r5, 3
	stb      r9, 0x83(r4)
	slwi     r9, r0, 1
	addi     r7, r10, 0xc1
	addi     r0, r5, 4
	stb      r8, 0x87(r4)
	slwi     r11, r0, 1
	addi     r10, r9, 0xc0
	addi     r0, r5, 5
	stb      r7, 0x8b(r4)
	slwi     r12, r0, 1
	addi     r9, r9, 0xc1
	addi     r8, r11, 0xc0
	stb      r10, 0x8f(r4)
	addi     r7, r11, 0xc1
	addi     r11, r12, 0xc0
	addi     r10, r12, 0xc1
	stb      r9, 0x93(r4)
	addi     r0, r5, 6
	slwi     r12, r0, 1
	stb      r8, 0x97(r4)
	addi     r0, r5, 7
	slwi     r31, r0, 1
	addi     r9, r12, 0xc0
	stb      r7, 0x9b(r4)
	addi     r8, r12, 0xc1
	addi     r7, r31, 0xc0
	addi     r0, r31, 0xc1
	stb      r11, 0x9f(r4)
	addi     r5, r5, 8
	stb      r10, 0xa3(r4)
	stb      r9, 0xa7(r4)
	stb      r8, 0xab(r4)
	stb      r7, 0xaf(r4)
	stb      r0, 0xb3(r4)
	addi     r4, r4, 0x40
	bdnz     lbl_8004F690
	li       r0, 2
	mr       r8, r3
	lwz      r7, j2dDefaultTevKColor@sda21(r2)
	mtctr    r0

lbl_8004F768:
	stw      r7, 8(r1)
	lbz      r6, 8(r1)
	lbz      r5, 9(r1)
	stb      r6, 0xf8(r8)
	lbz      r4, 0xa(r1)
	lbz      r0, 0xb(r1)
	stb      r5, 0xf9(r8)
	stb      r4, 0xfa(r8)
	stw      r7, 8(r1)
	stb      r6, 0xc(r1)
	lbz      r6, 8(r1)
	stb      r0, 0xfb(r8)
	stb      r5, 0xd(r1)
	lbz      r5, 9(r1)
	stb      r6, 0xfc(r8)
	stb      r4, 0xe(r1)
	lbz      r4, 0xa(r1)
	stb      r5, 0xfd(r8)
	stb      r0, 0xf(r1)
	lbz      r0, 0xb(r1)
	stb      r4, 0xfe(r8)
	stb      r0, 0xff(r8)
	addi     r8, r8, 8
	stb      r6, 0xc(r1)
	stb      r5, 0xd(r1)
	stb      r4, 0xe(r1)
	stb      r0, 0xf(r1)
	bdnz     lbl_8004F768
	li       r7, 0xff
	lis      r4, j2dDefaultIndTevStageInfo@ha
	stb      r7, 0x108(r3)
	addi     r6, r2, j2dDefaultTevSwapModeTable@sda21
	li       r0, 8
	mr       r5, r3
	stb      r7, 0x118(r3)
	addi     r4, r4, j2dDefaultIndTevStageInfo@l
	stb      r7, 0x109(r3)
	stb      r7, 0x119(r3)
	stb      r7, 0x10a(r3)
	stb      r7, 0x11a(r3)
	stb      r7, 0x10b(r3)
	stb      r7, 0x11b(r3)
	stb      r7, 0x10c(r3)
	stb      r7, 0x11c(r3)
	stb      r7, 0x10d(r3)
	stb      r7, 0x11d(r3)
	stb      r7, 0x10e(r3)
	stb      r7, 0x11e(r3)
	stb      r7, 0x10f(r3)
	stb      r7, 0x11f(r3)
	stb      r7, 0x110(r3)
	stb      r7, 0x120(r3)
	stb      r7, 0x111(r3)
	stb      r7, 0x121(r3)
	stb      r7, 0x112(r3)
	stb      r7, 0x122(r3)
	stb      r7, 0x113(r3)
	stb      r7, 0x123(r3)
	stb      r7, 0x114(r3)
	stb      r7, 0x124(r3)
	stb      r7, 0x115(r3)
	stb      r7, 0x125(r3)
	stb      r7, 0x116(r3)
	stb      r7, 0x126(r3)
	stb      r7, 0x117(r3)
	stb      r7, 0x127(r3)
	lbz      r7, 1(r6)
	lbz      r9, 2(r6)
	lbz      r8, j2dDefaultTevSwapModeTable@sda21(r2)
	rlwinm   r7, r7, 4, 0x14, 0x1b
	slwi     r9, r9, 2
	lbz      r10, 3(r6)
	add      r7, r7, r9
	slwi     r8, r8, 6
	add      r7, r7, r10
	add      r7, r8, r7
	stb      r7, 0x128(r3)
	lbz      r7, 1(r6)
	lbz      r9, 2(r6)
	lbz      r8, j2dDefaultTevSwapModeTable@sda21(r2)
	rlwinm   r7, r7, 4, 0x14, 0x1b
	slwi     r9, r9, 2
	lbz      r10, 3(r6)
	add      r7, r7, r9
	slwi     r8, r8, 6
	add      r7, r7, r10
	add      r7, r8, r7
	stb      r7, 0x129(r3)
	lbz      r7, 1(r6)
	lbz      r9, 2(r6)
	lbz      r8, j2dDefaultTevSwapModeTable@sda21(r2)
	rlwinm   r7, r7, 4, 0x14, 0x1b
	slwi     r9, r9, 2
	lbz      r10, 3(r6)
	add      r7, r7, r9
	slwi     r8, r8, 6
	add      r7, r7, r10
	add      r7, r8, r7
	stb      r7, 0x12a(r3)
	lbz      r9, 2(r6)
	lbz      r7, 1(r6)
	lbz      r8, j2dDefaultTevSwapModeTable@sda21(r2)
	slwi     r9, r9, 2
	slwi     r7, r7, 4
	lbz      r10, 3(r6)
	add      r6, r7, r9
	slwi     r7, r8, 6
	add      r6, r6, r10
	add      r6, r7, r6
	stb      r6, 0x12b(r3)
	mtctr    r0

lbl_8004F924:
	lwz      r6, 4(r4)
	lwz      r0, 8(r4)
	stw      r6, 0x14(r1)
	lwz      r6, 0(r4)
	stw      r0, 0x18(r1)
	lbz      r0, 0x17(r1)
	stw      r6, 0x10(r1)
	lbz      r6, 0x18(r1)
	slwi     r0, r0, 0x15
	lbz      r7, 0x16(r1)
	slwi     r6, r6, 0x16
	lbz      r8, 0x13(r1)
	lbz      r9, 0x15(r1)
	slwi     r7, r7, 0x14
	or       r0, r6, r0
	lbz      r10, 0x14(r1)
	lbz      r11, 0x12(r1)
	slwi     r6, r8, 0x10
	or       r0, r7, r0
	lbz      r12, 0x11(r1)
	slwi     r7, r9, 0xb
	slwi     r8, r10, 8
	or       r0, r6, r0
	slwi     r6, r11, 4
	or       r0, r7, r0
	slwi     r7, r12, 2
	or       r0, r8, r0
	lbz      r8, 0x10(r1)
	or       r0, r6, r0
	or       r0, r7, r0
	or       r0, r8, r0
	stw      r0, 0x12c(r5)
	lwz      r6, 4(r4)
	lwz      r0, 8(r4)
	stw      r6, 0x14(r1)
	lwz      r6, 0(r4)
	stw      r0, 0x18(r1)
	lbz      r0, 0x17(r1)
	stw      r6, 0x10(r1)
	lbz      r6, 0x18(r1)
	slwi     r0, r0, 0x15
	lbz      r7, 0x16(r1)
	slwi     r6, r6, 0x16
	lbz      r8, 0x13(r1)
	lbz      r9, 0x15(r1)
	slwi     r7, r7, 0x14
	or       r0, r6, r0
	lbz      r10, 0x14(r1)
	lbz      r11, 0x12(r1)
	slwi     r6, r8, 0x10
	or       r0, r7, r0
	lbz      r12, 0x11(r1)
	slwi     r7, r9, 0xb
	slwi     r8, r10, 8
	or       r0, r6, r0
	slwi     r6, r11, 4
	or       r0, r7, r0
	slwi     r7, r12, 2
	or       r0, r8, r0
	lbz      r8, 0x10(r1)
	or       r0, r6, r0
	or       r0, r7, r0
	or       r0, r8, r0
	stw      r0, 0x130(r5)
	addi     r5, r5, 8
	bdnz     lbl_8004F924
	li       r0, 0
	stw      r0, 0x18c(r3)
	stw      r0, 0x190(r3)
	stw      r0, 0x194(r3)
	stw      r0, 0x198(r3)
	stw      r0, 0x19c(r3)
	stw      r0, 0x1a0(r3)
	stw      r0, 0x1a4(r3)
	stw      r0, 0x1a8(r3)
	stw      r0, 0x1ac(r3)
	stb      r0, 0x1b1(r3)
	lwz      r31, 0x2c(r1)
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	8004FA64
 * Size:	0000E0
 * prepareTexture__13J2DTevBlock16FUc
 */
bool J2DTevBlock16::prepareTexture(unsigned char count)
{
	for (u8 i = 0; i < count; i++) {
		if (i >= 8) {
			return false;
		}
		if (m_textures[i] == nullptr) {
			m_textures[i] = new JUTTexture();
			if (m_textures[i] == nullptr) {
				return false;
			}
			_1B0 |= (1 << i);
		}
	}
	return true;
}

/*
 * --INFO--
 * Address:	8004FB44
 * Size:	0003C8
 */
bool J2DTevBlock16::insertTexture(unsigned long, const ResTIMG*, JUTPalette*)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stmw     r25, 0x14(r1)
	mr       r26, r4
	cmplwi   r26, 8
	mr       r25, r3
	mr       r27, r5
	mr       r28, r6
	bge      lbl_8004FB74
	cmplwi   r27, 0
	bne      lbl_8004FB7C

lbl_8004FB74:
	li       r3, 0
	b        lbl_8004FEF8

lbl_8004FB7C:
	li       r30, 0
	b        lbl_8004FBA8

lbl_8004FB84:
	rlwinm   r3, r30, 2, 0x16, 0x1d
	addi     r0, r3, 0x16c
	lwzx     r3, r25, r0
	cmplwi   r3, 0
	beq      lbl_8004FBB4
	lwz      r0, 0x20(r3)
	cmplwi   r0, 0
	beq      lbl_8004FBB4
	addi     r30, r30, 1

lbl_8004FBA8:
	clrlwi   r0, r30, 0x18
	cmplwi   r0, 8
	blt      lbl_8004FB84

lbl_8004FBB4:
	clrlwi   r0, r30, 0x18
	cmplw    r0, r26
	bge      lbl_8004FBC8
	li       r3, 0
	b        lbl_8004FEF8

lbl_8004FBC8:
	cmplwi   r0, 8
	bne      lbl_8004FBD8
	li       r3, 0
	b        lbl_8004FEF8

lbl_8004FBD8:
	lbz      r0, 8(r27)
	li       r29, 0
	cmplwi   r0, 0
	beq      lbl_8004FC98
	cmplwi   r28, 0
	bne      lbl_8004FC98
	li       r0, 7
	mr       r5, r25
	li       r7, 0
	mtctr    r0
	li       r3, 1

lbl_8004FC04:
	lwz      r6, 0x16c(r5)
	cmplwi   r6, 0
	beq      lbl_8004FC58
	lwz      r4, 0x20(r6)
	cmplwi   r4, 0
	beq      lbl_8004FC58
	lbz      r0, 8(r4)
	cmplwi   r0, 0
	beq      lbl_8004FC58
	lbz      r4, 0x3a(r6)
	li       r0, 0
	cmpwi    r4, 0x10
	blt      lbl_8004FC3C
	li       r0, 0x10

lbl_8004FC3C:
	subf     r0, r0, r4
	clrlwi   r0, r0, 0x18
	cmplwi   r0, 8
	bge      lbl_8004FC58
	slw      r0, r3, r0
	or       r0, r7, r0
	clrlwi   r7, r0, 0x18

lbl_8004FC58:
	addi     r5, r5, 4
	bdnz     lbl_8004FC04
	clrlwi   r4, r7, 0x18
	li       r5, 0
	li       r3, 1
	b        lbl_8004FC8C

lbl_8004FC70:
	clrlwi   r0, r5, 0x18
	slw      r0, r3, r0
	and.     r0, r4, r0
	bne      lbl_8004FC88
	mr       r29, r5
	b        lbl_8004FC98

lbl_8004FC88:
	addi     r5, r5, 1

lbl_8004FC8C:
	clrlwi   r0, r5, 0x18
	cmplwi   r0, 8
	blt      lbl_8004FC70

lbl_8004FC98:
	rlwinm   r0, r30, 2, 0x16, 0x1d
	add      r3, r25, r0
	lwz      r31, 0x16c(r3)
	cmplwi   r31, 0
	bne      lbl_8004FD94
	li       r3, 0x40
	bl       __nw__FUl
	or.      r31, r3, r3
	beq      lbl_8004FCDC
	li       r0, 0
	mr       r4, r27
	stw      r0, 0x28(r31)
	mr       r5, r29
	bl       storeTIMG__10JUTTextureFPC7ResTIMGUc
	lbz      r0, 0x3b(r31)
	rlwinm   r0, r0, 0, 0x1e, 0x1e
	stb      r0, 0x3b(r31)

lbl_8004FCDC:
	cmplwi   r31, 0
	bne      lbl_8004FCEC
	li       r3, 0
	b        lbl_8004FEF8

lbl_8004FCEC:
	cmplwi   r28, 0
	beq      lbl_8004FD04
	mr       r3, r31
	mr       r4, r27
	mr       r5, r28
	bl       storeTIMG__10JUTTextureFPC7ResTIMGP10JUTPalette

lbl_8004FD04:
	li       r8, 7
	b        lbl_8004FD48

lbl_8004FD0C:
	slwi     r3, r4, 2
	rlwinm   r0, r8, 2, 0x16, 0x1d
	add      r6, r25, r3
	slwi     r4, r4, 1
	lwz      r5, 0x168(r6)
	add      r7, r25, r0
	rlwinm   r3, r8, 1, 0x17, 0x1e
	addi     r4, r4, 2
	stw      r5, 0x16c(r7)
	addi     r0, r3, 4
	addi     r8, r8, -1
	lwz      r3, 0x188(r6)
	stw      r3, 0x18c(r7)
	lhzx     r3, r25, r4
	sthx     r3, r25, r0

lbl_8004FD48:
	clrlwi   r4, r8, 0x18
	cmplw    r4, r26
	bgt      lbl_8004FD0C
	slwi     r0, r26, 2
	mr       r3, r25
	add      r5, r25, r0
	clrlwi   r4, r26, 0x18
	stw      r31, 0x16c(r5)
	li       r5, 1
	lwz      r12, 0(r25)
	lwz      r12, 0xac(r12)
	mtctr    r12
	bctrl
	li       r0, 1
	lbz      r3, 0x1b0(r25)
	slw      r0, r0, r26
	or       r0, r3, r0
	stb      r0, 0x1b0(r25)
	b        lbl_8004FED0

lbl_8004FD94:
	cmplwi   r28, 0
	bne      lbl_8004FDB0
	mr       r3, r31
	mr       r4, r27
	mr       r5, r29
	bl       storeTIMG__10JUTTextureFPC7ResTIMGUc
	b        lbl_8004FDC0

lbl_8004FDB0:
	mr       r3, r31
	mr       r4, r27
	mr       r5, r28
	bl       storeTIMG__10JUTTextureFPC7ResTIMGP10JUTPalette

lbl_8004FDC0:
	lbz      r0, 0x1b0(r25)
	mr       r3, r30
	addi     r4, r1, 8
	clrlwi   r11, r0, 0x1f
	rlwinm   r10, r0, 0x1f, 0x1f, 0x1f
	rlwinm   r9, r0, 0x1e, 0x1f, 0x1f
	rlwinm   r8, r0, 0x1d, 0x1f, 0x1f
	rlwinm   r7, r0, 0x1c, 0x1f, 0x1f
	rlwinm   r6, r0, 0x1b, 0x1f, 0x1f
	rlwinm   r5, r0, 0x1a, 0x1f, 0x1f
	rlwinm   r0, r0, 0x19, 0x1f, 0x1f
	stb      r11, 8(r1)
	stb      r10, 9(r1)
	stb      r9, 0xa(r1)
	stb      r8, 0xb(r1)
	stb      r7, 0xc(r1)
	stb      r6, 0xd(r1)
	stb      r5, 0xe(r1)
	stb      r0, 0xf(r1)
	b        lbl_8004FE5C

lbl_8004FE10:
	slwi     r5, r8, 2
	rlwinm   r0, r3, 2, 0x16, 0x1d
	add      r9, r25, r5
	slwi     r6, r8, 1
	lwz      r7, 0x168(r9)
	add      r10, r25, r0
	addi     r0, r8, -1
	rlwinm   r5, r3, 1, 0x17, 0x1e
	stw      r7, 0x16c(r10)
	clrlwi   r8, r3, 0x18
	lbzx     r0, r4, r0
	addi     r6, r6, 2
	lwz      r7, 0x188(r9)
	addi     r5, r5, 4
	stbx     r0, r4, r8
	addi     r3, r3, -1
	stw      r7, 0x18c(r10)
	lhzx     r0, r25, r6
	sthx     r0, r25, r5

lbl_8004FE5C:
	clrlwi   r8, r3, 0x18
	cmplw    r8, r26
	bgt      lbl_8004FE10
	slwi     r3, r26, 2
	li       r0, 0
	add      r3, r25, r3
	addi     r5, r1, 8
	stw      r31, 0x16c(r3)
	li       r7, 0
	li       r3, 1
	stb      r0, 0x1b0(r25)
	b        lbl_8004FEB0

lbl_8004FE8C:
	clrlwi   r6, r7, 0x18
	lbzx     r0, r5, r6
	cmplwi   r0, 0
	beq      lbl_8004FEAC
	lbz      r4, 0x1b0(r25)
	slw      r0, r3, r6
	or       r0, r4, r0
	stb      r0, 0x1b0(r25)

lbl_8004FEAC:
	addi     r7, r7, 1

lbl_8004FEB0:
	clrlwi   r0, r7, 0x18
	cmplwi   r0, 8
	blt      lbl_8004FE8C
	li       r0, 1
	lbz      r3, 0x1b0(r25)
	slw      r0, r0, r26
	or       r0, r3, r0
	stb      r0, 0x1b0(r25)

lbl_8004FED0:
	slwi     r3, r26, 2
	slwi     r0, r26, 1
	add      r4, r25, r3
	li       r5, 0
	lis      r3, 0x0000FFFF@ha
	stw      r5, 0x18c(r4)
	addi     r4, r3, 0x0000FFFF@l
	add      r3, r25, r0
	sth      r4, 4(r3)
	li       r3, 1

lbl_8004FEF8:
	lmw      r25, 0x14(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	8004FF0C
 * Size:	000198
 */
bool J2DTevBlock16::insertTexture(unsigned long, JUTTexture*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r5
	stw      r30, 0x18(r1)
	mr       r30, r4
	cmplwi   r30, 8
	stw      r29, 0x14(r1)
	mr       r29, r3
	bge      lbl_8004FF40
	cmplwi   r31, 0
	bne      lbl_8004FF48

lbl_8004FF40:
	li       r3, 0
	b        lbl_80050088

lbl_8004FF48:
	li       r4, 0
	b        lbl_8004FF74

lbl_8004FF50:
	rlwinm   r3, r4, 2, 0x16, 0x1d
	addi     r0, r3, 0x16c
	lwzx     r3, r29, r0
	cmplwi   r3, 0
	beq      lbl_8004FF80
	lwz      r0, 0x20(r3)
	cmplwi   r0, 0
	beq      lbl_8004FF80
	addi     r4, r4, 1

lbl_8004FF74:
	clrlwi   r0, r4, 0x18
	cmplwi   r0, 8
	blt      lbl_8004FF50

lbl_8004FF80:
	clrlwi   r0, r4, 0x18
	cmplw    r0, r30
	bge      lbl_8004FF94
	li       r3, 0
	b        lbl_80050088

lbl_8004FF94:
	cmplwi   r0, 8
	bne      lbl_8004FFA4
	li       r3, 0
	b        lbl_80050088

lbl_8004FFA4:
	lwz      r3, 0x188(r29)
	cmplwi   r3, 0
	beq      lbl_8004FFDC
	lwz      r0, 0x20(r3)
	cmplwi   r0, 0
	bne      lbl_8004FFDC
	lbz      r0, 0x1b0(r29)
	rlwinm.  r0, r0, 0, 0x18, 0x18
	beq      lbl_8004FFD0
	li       r4, 1
	bl       __dt__10JUTTextureFv

lbl_8004FFD0:
	lbz      r0, 0x1b0(r29)
	clrlwi   r0, r0, 0x19
	stb      r0, 0x1b0(r29)

lbl_8004FFDC:
	li       r8, 7
	b        lbl_80050020

lbl_8004FFE4:
	slwi     r3, r4, 2
	rlwinm   r0, r8, 2, 0x16, 0x1d
	add      r6, r29, r3
	slwi     r4, r4, 1
	lwz      r5, 0x168(r6)
	add      r7, r29, r0
	rlwinm   r3, r8, 1, 0x17, 0x1e
	addi     r4, r4, 2
	stw      r5, 0x16c(r7)
	addi     r0, r3, 4
	addi     r8, r8, -1
	lwz      r3, 0x188(r6)
	stw      r3, 0x18c(r7)
	lhzx     r3, r29, r4
	sthx     r3, r29, r0

lbl_80050020:
	clrlwi   r4, r8, 0x18
	cmplw    r4, r30
	bgt      lbl_8004FFE4
	slwi     r3, r30, 2
	slwi     r0, r30, 1
	add      r5, r29, r3
	lis      r3, 0x0000FFFF@ha
	stw      r31, 0x16c(r5)
	li       r4, 0
	addi     r7, r3, 0x0000FFFF@l
	add      r6, r29, r0
	stw      r4, 0x18c(r5)
	mr       r3, r29
	clrlwi   r4, r30, 0x18
	li       r5, 1
	sth      r7, 4(r6)
	lwz      r12, 0(r29)
	lwz      r12, 0xac(r12)
	mtctr    r12
	bctrl
	li       r0, 1
	lbz      r4, 0x1b0(r29)
	slw      r0, r0, r30
	li       r3, 1
	andc     r0, r4, r0
	stb      r0, 0x1b0(r29)

lbl_80050088:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	800500A4
 * Size:	0002E4
 * setTexture__13J2DTevBlock16FUlPC7ResTIMG
 */
bool J2DTevBlock16::setTexture(unsigned long index, const ResTIMG* img)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stmw     r25, 0x14(r1)
	mr       r26, r4
	cmplwi   r26, 8
	mr       r25, r3
	mr       r27, r5
	blt      lbl_800500D0
	li       r3, 0
	b        lbl_80050374

lbl_800500D0:
	cmplwi   r27, 0
	li       r28, 0
	beq      lbl_80050204
	lbz      r0, 8(r27)
	cmplwi   r0, 0
	beq      lbl_80050204
	li       r0, 4
	mr       r4, r25
	li       r6, 0
	li       r7, 0
	mtctr    r0

lbl_800500FC:
	cmplw    r7, r26
	beq      lbl_8005015C
	lwz      r5, 0x16c(r4)
	cmplwi   r5, 0
	beq      lbl_8005015C
	lwz      r3, 0x20(r5)
	cmplwi   r3, 0
	beq      lbl_8005015C
	lbz      r0, 8(r3)
	cmplwi   r0, 0
	beq      lbl_8005015C
	lbz      r3, 0x3a(r5)
	li       r0, 0
	cmpwi    r3, 0x10
	blt      lbl_8005013C
	li       r0, 0x10

lbl_8005013C:
	subf     r0, r0, r3
	clrlwi   r3, r0, 0x18
	cmplwi   r3, 8
	bge      lbl_8005015C
	li       r0, 1
	slw      r0, r0, r3
	or       r0, r6, r0
	clrlwi   r6, r0, 0x18

lbl_8005015C:
	addi     r7, r7, 1
	cmplw    r7, r26
	beq      lbl_800501C0
	lwz      r5, 0x170(r4)
	cmplwi   r5, 0
	beq      lbl_800501C0
	lwz      r3, 0x20(r5)
	cmplwi   r3, 0
	beq      lbl_800501C0
	lbz      r0, 8(r3)
	cmplwi   r0, 0
	beq      lbl_800501C0
	lbz      r3, 0x3a(r5)
	li       r0, 0
	cmpwi    r3, 0x10
	blt      lbl_800501A0
	li       r0, 0x10

lbl_800501A0:
	subf     r0, r0, r3
	clrlwi   r3, r0, 0x18
	cmplwi   r3, 8
	bge      lbl_800501C0
	li       r0, 1
	slw      r0, r0, r3
	or       r0, r6, r0
	clrlwi   r6, r0, 0x18

lbl_800501C0:
	addi     r4, r4, 8
	addi     r7, r7, 1
	bdnz     lbl_800500FC
	clrlwi   r4, r6, 0x18
	li       r5, 0
	li       r3, 1
	b        lbl_800501F8

lbl_800501DC:
	clrlwi   r0, r5, 0x18
	slw      r0, r3, r0
	and.     r0, r4, r0
	bne      lbl_800501F4
	mr       r28, r5
	b        lbl_80050204

lbl_800501F4:
	addi     r5, r5, 1

lbl_800501F8:
	clrlwi   r0, r5, 0x18
	cmplwi   r0, 4
	blt      lbl_800501DC

lbl_80050204:
	slwi     r29, r26, 2
	add      r31, r25, r29
	lwz      r3, 0x16c(r31)
	cmplwi   r3, 0
	bne      lbl_80050298
	cmplwi   r27, 0
	beq      lbl_80050280
	li       r3, 0x40
	bl       __nw__FUl
	or.      r30, r3, r3
	beq      lbl_80050250
	li       r0, 0
	mr       r4, r27
	stw      r0, 0x28(r30)
	mr       r5, r28
	bl       storeTIMG__10JUTTextureFPC7ResTIMGUc
	lbz      r0, 0x3b(r30)
	rlwinm   r0, r0, 0, 0x1e, 0x1e
	stb      r0, 0x3b(r30)

lbl_80050250:
	stw      r30, 0x16c(r31)
	lwz      r0, 0x16c(r31)
	cmplwi   r0, 0
	bne      lbl_80050268
	li       r3, 0
	b        lbl_80050374

lbl_80050268:
	li       r0, 1
	lbz      r3, 0x1b0(r25)
	slw      r0, r0, r26
	or       r0, r3, r0
	stb      r0, 0x1b0(r25)
	b        lbl_80050348

lbl_80050280:
	li       r0, 1
	lbz      r3, 0x1b0(r25)
	slw      r0, r0, r26
	andc     r0, r3, r0
	stb      r0, 0x1b0(r25)
	b        lbl_80050348

lbl_80050298:
	li       r0, 1
	lbz      r4, 0x1b0(r25)
	slw      r30, r0, r26
	and.     r0, r4, r30
	beq      lbl_800502E4
	cmplwi   r27, 0
	beq      lbl_800502C4
	mr       r4, r27
	mr       r5, r28
	bl       storeTIMG__10JUTTextureFPC7ResTIMGUc
	b        lbl_80050348

lbl_800502C4:
	li       r4, 1
	bl       __dt__10JUTTextureFv
	li       r0, 0
	stw      r0, 0x16c(r31)
	lbz      r0, 0x1b0(r25)
	andc     r0, r0, r30
	stb      r0, 0x1b0(r25)
	b        lbl_80050348

lbl_800502E4:
	li       r0, 0
	cmplwi   r27, 0
	stw      r0, 0x16c(r31)
	beq      lbl_80050348
	li       r3, 0x40
	bl       __nw__FUl
	or.      r28, r3, r3
	beq      lbl_80050324
	li       r0, 0
	mr       r4, r27
	stw      r0, 0x28(r28)
	li       r5, 0
	bl       storeTIMG__10JUTTextureFPC7ResTIMGUc
	lbz      r0, 0x3b(r28)
	rlwinm   r0, r0, 0, 0x1e, 0x1e
	stb      r0, 0x3b(r28)

lbl_80050324:
	stw      r28, 0x16c(r31)
	lwz      r0, 0x16c(r31)
	cmplwi   r0, 0
	bne      lbl_8005033C
	li       r3, 0
	b        lbl_80050374

lbl_8005033C:
	lbz      r0, 0x1b0(r25)
	or       r0, r0, r30
	stb      r0, 0x1b0(r25)

lbl_80050348:
	add      r27, r25, r29
	lwz      r3, 0x18c(r27)
	bl       __dl__FPv
	li       r4, 0
	slwi     r0, r26, 1
	lis      r3, 0x0000FFFF@ha
	stw      r4, 0x18c(r27)
	addi     r4, r3, 0x0000FFFF@l
	add      r3, r25, r0
	sth      r4, 4(r3)
	li       r3, 1

lbl_80050374:
	lmw      r25, 0x14(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	80050388
 * Size:	0000A8
 * setTexture__13J2DTevBlock16FUlP10JUTTexture
 */
bool J2DTevBlock16::setTexture(unsigned long index, JUTTexture* texture)
{
	if (index >= 8) {
		return false;
	}
	if ((_1B0 & 1 << index) != 0) {
		delete m_textures[index];
	}
	m_textures[index] = texture;
	_1B0 &= ~(1 << index);
	delete m_palettes[index];
	m_palettes[index]   = nullptr;
	m_texIndices[index] = 0xFFFF;
	return true;
}

/*
 * --INFO--
 * Address:	80050430
 * Size:	000210
 * removeTexture__13J2DTevBlock16FUl
 */
bool J2DTevBlock16::removeTexture(unsigned long)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r4
	cmplwi   r31, 8
	stw      r30, 0x18(r1)
	mr       r30, r3
	stw      r29, 0x14(r1)
	blt      lbl_80050460
	li       r3, 0
	b        lbl_80050624

lbl_80050460:
	li       r0, 1
	lbz      r3, 0x1b0(r30)
	slw      r0, r0, r31
	and.     r0, r3, r0
	beq      lbl_80050488
	slwi     r0, r31, 2
	li       r4, 1
	add      r3, r30, r0
	lwz      r3, 0x16c(r3)
	bl       __dt__10JUTTextureFv

lbl_80050488:
	slwi     r29, r31, 2
	add      r3, r30, r29
	lwz      r3, 0x18c(r3)
	bl       __dl__FPv
	cmplwi   r31, 7
	mr       r5, r31
	bge      lbl_800505EC
	subfic   r0, r31, 7
	cmplwi   r0, 8
	ble      lbl_800505A8
	subfic   r0, r31, 6
	slwi     r4, r31, 1
	srwi     r0, r0, 3
	add      r3, r30, r29
	add      r4, r30, r4
	mtctr    r0
	lis      r6, 0x-0000001@ha
	addi     r6, r6, 0x-0000001@l
	cmplw    r31, r6
	bge      lbl_800505A8

lbl_800504D8:
	lwz      r0, 0x170(r3)
	addi     r5, r5, 8
	stw      r0, 0x16c(r3)
	lwz      r0, 0x190(r3)
	stw      r0, 0x18c(r3)
	lhz      r0, 6(r4)
	sth      r0, 4(r4)
	lwz      r0, 0x174(r3)
	stw      r0, 0x170(r3)
	lwz      r0, 0x194(r3)
	stw      r0, 0x190(r3)
	lhz      r0, 8(r4)
	sth      r0, 6(r4)
	lwz      r0, 0x178(r3)
	stw      r0, 0x174(r3)
	lwz      r0, 0x198(r3)
	stw      r0, 0x194(r3)
	lhz      r0, 0xa(r4)
	sth      r0, 8(r4)
	lwz      r0, 0x17c(r3)
	stw      r0, 0x178(r3)
	lwz      r0, 0x19c(r3)
	stw      r0, 0x198(r3)
	lhz      r0, 0xc(r4)
	sth      r0, 0xa(r4)
	lwz      r0, 0x180(r3)
	stw      r0, 0x17c(r3)
	lwz      r0, 0x1a0(r3)
	stw      r0, 0x19c(r3)
	lhz      r0, 0xe(r4)
	sth      r0, 0xc(r4)
	lwz      r0, 0x184(r3)
	stw      r0, 0x180(r3)
	lwz      r0, 0x1a4(r3)
	stw      r0, 0x1a0(r3)
	lhz      r0, 0x10(r4)
	sth      r0, 0xe(r4)
	lwz      r0, 0x188(r3)
	stw      r0, 0x184(r3)
	lwz      r0, 0x1a8(r3)
	stw      r0, 0x1a4(r3)
	lhz      r0, 0x12(r4)
	sth      r0, 0x10(r4)
	lwz      r0, 0x18c(r3)
	stw      r0, 0x188(r3)
	lwz      r0, 0x1ac(r3)
	stw      r0, 0x1a8(r3)
	addi     r3, r3, 0x20
	lhz      r0, 0x14(r4)
	sth      r0, 0x12(r4)
	addi     r4, r4, 0x10
	bdnz     lbl_800504D8

lbl_800505A8:
	slwi     r4, r5, 2
	slwi     r3, r5, 1
	subfic   r0, r5, 7
	add      r4, r30, r4
	add      r3, r30, r3
	mtctr    r0
	cmplwi   r5, 7
	bge      lbl_800505EC

lbl_800505C8:
	lwz      r0, 0x170(r4)
	stw      r0, 0x16c(r4)
	lwz      r0, 0x190(r4)
	stw      r0, 0x18c(r4)
	addi     r4, r4, 4
	lhz      r0, 6(r3)
	sth      r0, 4(r3)
	addi     r3, r3, 2
	bdnz     lbl_800505C8

lbl_800505EC:
	li       r5, 0
	lis      r3, 0x0000FFFF@ha
	stw      r5, 0x188(r30)
	addi     r0, r3, 0x0000FFFF@l
	mr       r3, r30
	clrlwi   r4, r31, 0x18
	stw      r5, 0x1a8(r30)
	li       r5, 0
	sth      r0, 0x12(r30)
	lwz      r12, 0(r30)
	lwz      r12, 0xac(r12)
	mtctr    r12
	bctrl
	li       r3, 1

lbl_80050624:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80050640
 * Size:	0000B4
 */
bool J2DTevBlock16::setFont(ResFONT* font)
{
	if (font == nullptr) {
		return false;
	}
	JUTResFont* jutFont = new JUTResFont(font, nullptr);
	if (jutFont == nullptr) {
		return false;
	}
	if (_1B1 != 0) {
		delete m_font;
	}
	m_font = jutFont;
	_1B1   = 1;
	return true;
}

/*
 * --INFO--
 * Address:	800506F4
 * Size:	00007C
 * setFont__13J2DTevBlock16FP7JUTFont
 */
bool J2DTevBlock16::setFont(JUTFont* font)
{
	if (font == nullptr) {
		return false;
	}
	if (_1B1 != 0) {
		delete m_font;
	}
	m_font = static_cast<JUTResFont*>(font);
	_1B1   = 0;
	return true;
}

/*
 * --INFO--
 * Address:	80050770
 * Size:	0000D0
 * setPalette__13J2DTevBlock16FUlPC7ResTLUT
 */
bool J2DTevBlock16::setPalette(unsigned long index, const ResTLUT* lut)
{
	if (index >= 8) {
		return false;
	}
	if (lut != nullptr) {
		if (m_palettes[index] == nullptr) {
			m_palettes[index] = new JUTPalette(index, const_cast<ResTLUT*>(lut));
			if (m_palettes[index] == nullptr) {
				return false;
			}
		} else {
			m_palettes[index]->storeTLUT(GX_TLUT0, const_cast<ResTLUT*>(lut));
		}
		if (m_textures[index] != nullptr) {
			m_textures[index]->attachPalette(m_palettes[index]);
		}
	} else {
		delete m_palettes[index];
		m_palettes[index] = nullptr;
	}
	return true;
}

/*
 * --INFO--
 * Address:	80050840
 * Size:	00006C
 */
void J2DTevBlock16::shiftDeleteFlag(unsigned char flag, bool direction)
{
	if (direction) {
		u32 v1 = ((1 << flag) - 1);
		_1B0   = (_1B0 & v1) | ((_1B0 & ~v1) << 1);
	} else {
		_1B0 = (_1B0 & (1 << flag) - 1) | ((_1B0 & ~((1 << (flag + 1)) - 1)) >> 1);
	}
}

/*
 * --INFO--
 * Address:	800508AC
 * Size:	0002E8
 */
void J2DTevBlock16::setGX()
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	stw      r30, 0x28(r1)
	stw      r29, 0x24(r1)
	mr       r29, r3
	stw      r28, 0x20(r1)
	li       r28, 0

lbl_800508D0:
	mr       r3, r29
	mr       r4, r28
	lwz      r12, 0(r29)
	mr       r5, r28
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	addi     r28, r28, 1
	cmpwi    r28, 8
	blt      lbl_800508D0
	mr       r30, r29
	li       r28, 0
	b        lbl_80050920

lbl_80050904:
	lbz      r4, 0x16(r30)
	mr       r3, r28
	lbz      r5, 0x17(r30)
	lbz      r6, 0x18(r30)
	bl       GXSetTevOrder
	addi     r30, r30, 4
	addi     r28, r28, 1

lbl_80050920:
	lbz      r0, 0x76(r29)
	cmpw     r28, r0
	blt      lbl_80050904
	mr       r31, r29
	addi     r30, r1, 0xc
	li       r28, 0

lbl_80050938:
	lwz      r4, 0x56(r31)
	cmpwi    r28, 3
	lwz      r0, 0x5a(r31)
	li       r3, 0
	stw      r4, 0xc(r1)
	stw      r0, 0x10(r1)
	beq      lbl_80050958
	addi     r3, r28, 1

lbl_80050958:
	mr       r4, r30
	bl       GXSetTevColorS10
	addi     r28, r28, 1
	addi     r31, r31, 8
	cmpwi    r28, 4
	blt      lbl_80050938
	lbz      r3, 0x76(r29)
	bl       GXSetNumTevStages
	mr       r30, r29
	li       r31, 0
	b        lbl_80050AA8

lbl_80050984:
	lbz      r0, 0x7a(r30)
	mr       r3, r31
	lbz      r5, 0x79(r30)
	rlwinm   r6, r0, 0x1c, 0x1c, 0x1f
	clrlwi   r7, r0, 0x1c
	rlwinm   r4, r5, 0x1c, 0x1c, 0x1f
	clrlwi   r5, r5, 0x1c
	bl       GXSetTevColorIn
	lbz      r5, 0x7d(r30)
	mr       r3, r31
	lbz      r6, 0x7e(r30)
	rlwinm   r0, r5, 0, 0x18, 0x1a
	srawi    r4, r0, 5
	rlwinm   r7, r6, 0x1c, 0x1d, 0x1f
	rlwinm   r0, r6, 0x19, 0x1f, 0x1f
	rlwimi   r0, r5, 1, 0x1d, 0x1e
	clrlwi   r4, r4, 0x18
	rlwinm   r5, r5, 0x1e, 0x1d, 0x1f
	clrlwi   r6, r0, 0x18
	bl       GXSetTevAlphaIn
	lbz      r7, 0x78(r30)
	mr       r3, r31
	rlwinm   r0, r7, 0, 0x1a, 0x1b
	clrlwi   r5, r7, 0x1e
	srawi    r6, r0, 4
	rlwinm   r9, r7, 0x1e, 0x1f, 0x1f
	rlwinm   r0, r7, 0x1d, 0x1d, 0x1e
	cmplwi   r5, 3
	add      r4, r9, r0
	rlwinm   r8, r7, 0x1a, 0x1e, 0x1f
	addi     r0, r4, 8
	clrlwi   r6, r6, 0x18
	rlwinm   r7, r7, 0x1d, 0x1f, 0x1f
	clrlwi   r0, r0, 0x18
	beq      lbl_80050A14
	mr       r0, r9

lbl_80050A14:
	clrlwi   r4, r0, 0x18
	bl       GXSetTevColorOp
	lbz      r7, 0x7c(r30)
	mr       r3, r31
	rlwinm   r0, r7, 0, 0x1a, 0x1b
	clrlwi   r5, r7, 0x1e
	srawi    r6, r0, 4
	rlwinm   r9, r7, 0x1e, 0x1f, 0x1f
	rlwinm   r0, r7, 0x1d, 0x1d, 0x1e
	cmplwi   r5, 3
	add      r4, r9, r0
	rlwinm   r8, r7, 0x1a, 0x1e, 0x1f
	addi     r0, r4, 8
	clrlwi   r6, r6, 0x18
	rlwinm   r7, r7, 0x1d, 0x1f, 0x1f
	clrlwi   r0, r0, 0x18
	beq      lbl_80050A5C
	mr       r0, r9

lbl_80050A5C:
	clrlwi   r4, r0, 0x18
	bl       GXSetTevAlphaOp
	add      r28, r29, r31
	li       r4, 0
	lbz      r0, 0x108(r28)
	cmplwi   r0, 0xff
	beq      lbl_80050A7C
	mr       r4, r0

lbl_80050A7C:
	mr       r3, r31
	bl       GXSetTevKColorSel
	lbz      r0, 0x118(r28)
	li       r4, 0
	cmplwi   r0, 0xff
	beq      lbl_80050A98
	mr       r4, r0

lbl_80050A98:
	mr       r3, r31
	bl       GXSetTevKAlphaSel
	addi     r30, r30, 8
	addi     r31, r31, 1

lbl_80050AA8:
	lbz      r0, 0x76(r29)
	cmpw     r31, r0
	blt      lbl_80050984
	li       r28, 0
	mr       r30, r29

lbl_80050ABC:
	lwz      r0, 0xf8(r30)
	mr       r3, r28
	addi     r4, r1, 8
	stw      r0, 8(r1)
	bl       GXSetTevKColor
	addi     r28, r28, 1
	addi     r30, r30, 4
	cmpwi    r28, 4
	blt      lbl_80050ABC
	mr       r30, r29
	li       r28, 0
	b        lbl_80050B08

lbl_80050AEC:
	lbz      r0, 0x7e(r30)
	mr       r3, r28
	clrlwi   r4, r0, 0x1e
	rlwinm   r5, r0, 0x1e, 0x1e, 0x1f
	bl       GXSetTevSwapMode
	addi     r30, r30, 8
	addi     r28, r28, 1

lbl_80050B08:
	lbz      r0, 0x76(r29)
	cmpw     r28, r0
	blt      lbl_80050AEC
	li       r28, 0

lbl_80050B18:
	addi     r0, r28, 0x128
	mr       r3, r28
	lbzx     r0, r29, r0
	rlwinm   r4, r0, 0x1a, 0x1e, 0x1f
	rlwinm   r5, r0, 0x1c, 0x1e, 0x1f
	rlwinm   r6, r0, 0x1e, 0x1e, 0x1f
	clrlwi   r7, r0, 0x1e
	bl       GXSetTevSwapModeTable
	addi     r28, r28, 1
	cmpwi    r28, 4
	blt      lbl_80050B18
	li       r28, 0
	b        lbl_80050B64

lbl_80050B4C:
	rlwinm   r3, r28, 2, 0x16, 0x1d
	mr       r4, r28
	addi     r3, r3, 0x12c
	add      r3, r29, r3
	bl       load__14J2DIndTevStageFUc
	addi     r28, r28, 1

lbl_80050B64:
	lbz      r0, 0x76(r29)
	clrlwi   r3, r28, 0x18
	cmplw    r3, r0
	blt      lbl_80050B4C
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	lwz      r29, 0x24(r1)
	lwz      r28, 0x20(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	80050B94
 * Size:	000048
 * loadTexture__13J2DTevBlock16F11_GXTexMapIDUl
 */
void J2DTevBlock16::loadTexture(_GXTexMapID id, unsigned long index)
{
	if (index < 8 && m_textures[index] != nullptr && m_textures[index]->_20 != nullptr) {
		m_textures[index]->load(id);
	}
}

/*
 * --INFO--
 * Address:	80050BDC
 * Size:	000148
 * initialize__15J2DIndBlockFullFv
 */
void J2DIndBlockFull::initialize()
{
	m_texStageNum = 0;
	for (int i = 0; i < 4; i++) {
		m_texOrders[i] = j2dDefaultIndTexOrderNull;
	}
	for (int i = 0; i < 3; i++) {
		m_texMtxes[i]._00 = j2dDefaultIndTexMtxInfo._00;
		m_texMtxes[i]._04 = j2dDefaultIndTexMtxInfo._04;
		m_texMtxes[i]._08 = j2dDefaultIndTexMtxInfo._08;
		m_texMtxes[i]._0C = j2dDefaultIndTexMtxInfo._0C;
		m_texMtxes[i]._10 = j2dDefaultIndTexMtxInfo._10;
		m_texMtxes[i]._14 = j2dDefaultIndTexMtxInfo._14;
		m_texMtxes[i]._18 = j2dDefaultIndTexMtxInfo._18;
	}
	for (int i = 0; i < 4; i++) {
		m_texCoordScales[i] = j2dDefaultIndTexCoordScaleInfo;
	}
	/*
	li       r0, 0
	lis      r4, j2dDefaultIndTexMtxInfo@ha
	stb      r0, 4(r3)
	addi     r4, r4, j2dDefaultIndTexMtxInfo@l
	addi     r6, r2, j2dDefaultIndTexOrderNull@sda21
	lbz      r0, j2dDefaultIndTexOrderNull@sda21(r2)
	addi     r5, r4, 0xc
	stb      r0, 5(r3)
	lbz      r0, 1(r6)
	stb      r0, 6(r3)
	lbz      r0, j2dDefaultIndTexOrderNull@sda21(r2)
	stb      r0, 7(r3)
	lbz      r0, 1(r6)
	stb      r0, 8(r3)
	lbz      r0, j2dDefaultIndTexOrderNull@sda21(r2)
	stb      r0, 9(r3)
	lbz      r0, 1(r6)
	stb      r0, 0xa(r3)
	lbz      r0, j2dDefaultIndTexOrderNull@sda21(r2)
	stb      r0, 0xb(r3)
	lbz      r0, 1(r6)
	stb      r0, 0xc(r3)
	lfs      f0, 0(r4)
	stfs     f0, 0x10(r3)
	lfs      f0, 4(r4)
	stfs     f0, 0x14(r3)
	lfs      f0, 8(r4)
	stfs     f0, 0x18(r3)
	lfs      f0, 0xc(r4)
	stfs     f0, 0x1c(r3)
	lfs      f0, 0x10(r4)
	stfs     f0, 0x20(r3)
	lfs      f0, 0x14(r4)
	stfs     f0, 0x24(r3)
	lbz      r0, 0x18(r4)
	stb      r0, 0x28(r3)
	lfs      f0, 0(r4)
	stfs     f0, 0x2c(r3)
	lfs      f0, 4(r4)
	stfs     f0, 0x30(r3)
	lfs      f0, 8(r4)
	stfs     f0, 0x34(r3)
	lfs      f0, 0(r5)
	stfs     f0, 0x38(r3)
	lfs      f0, 4(r5)
	stfs     f0, 0x3c(r3)
	lfs      f0, 8(r5)
	stfs     f0, 0x40(r3)
	lbz      r0, 0x18(r4)
	stb      r0, 0x44(r3)
	lfs      f0, 0(r4)
	addi     r6, r2, j2dDefaultIndTexCoordScaleInfo@sda21
	stfs     f0, 0x48(r3)
	lfs      f0, 4(r4)
	stfs     f0, 0x4c(r3)
	lfs      f0, 8(r4)
	stfs     f0, 0x50(r3)
	lfs      f0, 0(r5)
	stfs     f0, 0x54(r3)
	lfs      f0, 4(r5)
	stfs     f0, 0x58(r3)
	lfs      f0, 8(r5)
	stfs     f0, 0x5c(r3)
	lbz      r0, 0x18(r4)
	stb      r0, 0x60(r3)
	lbz      r0, j2dDefaultIndTexCoordScaleInfo@sda21(r2)
	stb      r0, 0x64(r3)
	lbz      r0, 1(r6)
	stb      r0, 0x65(r3)
	lbz      r0, j2dDefaultIndTexCoordScaleInfo@sda21(r2)
	stb      r0, 0x66(r3)
	lbz      r0, 1(r6)
	stb      r0, 0x67(r3)
	lbz      r0, j2dDefaultIndTexCoordScaleInfo@sda21(r2)
	stb      r0, 0x68(r3)
	lbz      r0, 1(r6)
	stb      r0, 0x69(r3)
	lbz      r0, j2dDefaultIndTexCoordScaleInfo@sda21(r2)
	stb      r0, 0x6a(r3)
	lbz      r0, 1(r6)
	stb      r0, 0x6b(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80050D24
 * Size:	0000CC
 * setGX__15J2DIndBlockFullFv
 */
void J2DIndBlockFull::setGX()
{
	GXSetNumIndStages(m_texStageNum);
	for (u8 i = 0; i < m_texStageNum; i++) {
		m_texMtxes[i].load(i);
	}
	for (u8 i = 0; i < m_texStageNum; i++) {
		m_texCoordScales[i].load(i);
	}
	for (u8 i = 0; i < m_texStageNum; i++) {
		m_texOrders[i].load(i);
	}
}

/*
 * --INFO--
 * Address:	80050DF0
 * Size:	000044
 * initialize__10J2DPEBlockFv
 */
void J2DPEBlock::initialize()
{
	m_alphaComp.m_alphaComp = j2dDefaultAlphaCmp;
	m_alphaComp.m_ref0      = 0;
	m_alphaComp.m_ref1      = 0;
	m_blendInfo             = j2dDefaultBlendInfo;
	m_dither                = j2dDefaultDither;
}

/*
 * --INFO--
 * Address:	80050E34
 * Size:	000060
 * setGX__10J2DPEBlockFv
 * TODO: _03 might not be part of J2DAlphaComp
 */
void J2DPEBlock::setGX()
{
	GXSetAlphaCompare(static_cast<GXCompare>(m_alphaComp._00 >> 5 & 7), m_alphaComp._02, static_cast<GXAlphaOp>(m_alphaComp._00 >> 3 & 3),
	                  static_cast<GXCompare>(m_alphaComp._00 & 7), m_alphaComp._03);
	GXSetBlendMode((GXBlendMode)m_blendInfo.m_type, (GXBlendFactor)m_blendInfo.m_srcFactor, (GXBlendFactor)m_blendInfo.m_destFactor,
	               (GXLogicOp)_07);
	GXSetDither(m_dither);
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lhz      r0, 0(r3)
	lbz      r4, 2(r3)
	lbz      r7, 3(r31)
	rlwinm   r3, r0, 0x1b, 0x1d, 0x1f
	rlwinm   r5, r0, 0x1d, 0x1e, 0x1f
	clrlwi   r6, r0, 0x1d
	bl       GXSetAlphaCompare
	lbz      r3, 4(r31)
	lbz      r4, 5(r31)
	lbz      r5, 6(r31)
	lbz      r6, 7(r31)
	bl       GXSetBlendMode
	lbz      r3, 8(r31)
	bl       GXSetDither
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80050E94
 * Size:	00000C
 * getType__15J2DIndBlockFullFv
 */
// u32 J2DIndBlockFull::getType() { return JBT_IndFull; }

/*
 * --INFO--
 * Address:	80050EA0
 * Size:	000008
 */
// void J2DIndBlockFull::setIndTexStageNum(unsigned char texStageNum) { m_texStageNum = texStageNum; }

/*
 * --INFO--
 * Address:	80050EA8
 * Size:	000008
 */
// u8 J2DIndBlockFull::getIndTexStageNum() const { return m_texStageNum; }

/*
 * --INFO--
 * Address:	80050EB0
 * Size:	00001C
 */
// void J2DIndBlockFull::setIndTexOrder(unsigned long index, J2DIndTexOrder order) { m_texOrders[index] = order; }

/*
 * --INFO--
 * Address:	80050ECC
 * Size:	000014
 */
// J2DIndTexOrder* J2DIndBlockFull::getIndTexOrder(unsigned long index) { return m_texOrders + index; }

/*
 * --INFO--
 * Address:	80050EE0
 * Size:	000044
 */
void J2DIndBlockFull::setIndTexMtx(unsigned long index, J2DIndTexMtx texMtx)
{
	/*
	mulli    r0, r4, 0x1c
	lfs      f2, 0(r5)
	lfs      f1, 4(r5)
	lfs      f0, 8(r5)
	add      r3, r3, r0
	lbz      r0, 0x18(r5)
	stfs     f2, 0x10(r3)
	lfs      f2, 0xc(r5)
	stfs     f1, 0x14(r3)
	lfs      f1, 0x10(r5)
	stfs     f0, 0x18(r3)
	lfs      f0, 0x14(r5)
	stfs     f2, 0x1c(r3)
	stfs     f1, 0x20(r3)
	stfs     f0, 0x24(r3)
	stb      r0, 0x28(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80050F24
 * Size:	000014
 */
// J2DIndTexMtx* J2DIndBlockFull::getIndTexMtx(unsigned long index) { return m_texMtxes + index; }

/*
 * --INFO--
 * Address:	80050F38
 * Size:	00001C
 */
// void J2DIndBlockFull::setIndTexCoordScale(unsigned long index, J2DIndTexCoordScale scale) { m_texCoordScales[index] = scale; }

/*
 * --INFO--
 * Address:	80050F54
 * Size:	000014
 */
// J2DIndTexCoordScale* J2DIndBlockFull::getIndTexCoordScale(unsigned long index) { return m_texCoordScales + index; }

/*
 * --INFO--
 * Address:	80050F68
 * Size:	00009C
 * __dt__15J2DIndBlockFullFv
 */
// J2DIndBlockFull::~J2DIndBlockFull() { }

/*
 * --INFO--
 * Address:	80051004
 * Size:	00003C
 * __dt__12J2DIndTexMtxFv
 */
// J2DIndTexMtx::~J2DIndTexMtx() { }

/*
 * --INFO--
 * Address:	80051040
 * Size:	00003C
 * __dt__19J2DIndTexCoordScaleFv
 */
// J2DIndTexCoordScale::~J2DIndTexCoordScale() { }

/*
 * --INFO--
 * Address:	8005107C
 * Size:	000004
 */
// void J2DIndBlock::initialize() { }

/*
 * --INFO--
 * Address:	80051080
 * Size:	000004
 */
// void J2DIndBlock::setGX() { }

/*
 * --INFO--
 * Address:	80051084
 * Size:	000004
 */
// void J2DIndBlock::setIndTexStageNum(unsigned char texStageNum) { }

/*
 * --INFO--
 * Address:	80051088
 * Size:	000004
 */
// void J2DIndBlock::setIndTexOrder(unsigned long index, J2DIndTexOrder order) { }

/*
 * --INFO--
 * Address:	8005108C
 * Size:	000008
 */
// J2DIndTexOrder* J2DIndBlock::getIndTexOrder(unsigned long index) { return nullptr; }

/*
 * --INFO--
 * Address:	80051094
 * Size:	000004
 */
// void J2DIndBlock::setIndTexMtx(unsigned long index, J2DIndTexMtx texMtx) { }

/*
 * --INFO--
 * Address:	80051098
 * Size:	000008
 */
// J2DIndTexMtx* J2DIndBlock::getIndTexMtx(unsigned long index) { return nullptr; }

/*
 * --INFO--
 * Address:	800510A0
 * Size:	000004
 */
// void J2DIndBlock::setIndTexCoordScale(unsigned long, J2DIndTexCoordScale) { }

/*
 * --INFO--
 * Address:	800510A4
 * Size:	000008
 */
// J2DIndTexCoordScale* J2DIndBlock::getIndTexCoordScale(unsigned long) { return nullptr; }

/*
 * --INFO--
 * Address:	800510AC
 * Size:	000048
 * __dt__11J2DIndBlockFv
 */
// J2DIndBlock::~J2DIndBlock() { }

/*
 * --INFO--
 * Address:	800510F4
 * Size:	00000C
 */
// u32 J2DTevBlock16::getType() { return JBT_Tev16; }

/*
 * --INFO--
 * Address:	80051100
 * Size:	000008
 */
// u32 J2DTevBlock16::getMaxStage() { return 0x10; }

/*
 * --INFO--
 * Address:	80051108
 * Size:	000010
 */
// void J2DTevBlock16::setTexNo(unsigned long index, unsigned short texNo) { m_texIndices[index] = texNo; }

/*
 * --INFO--
 * Address:	80051118
 * Size:	000010
 */
// u16 J2DTevBlock16::getTexNo(unsigned long index) const { return m_texIndices[index]; }

/*
 * --INFO--
 * Address:	80051128
 * Size:	000008
 */
// void J2DTevBlock16::setFontNo(unsigned short fontNo) { m_fontNo = fontNo; }

/*
 * --INFO--
 * Address:	80051130
 * Size:	000008
 */
// u16 J2DTevBlock16::getFontNo() const { return m_fontNo; }

/*
 * --INFO--
 * Address:	80051138
 * Size:	000024
 */
// void J2DTevBlock16::setTevOrder(unsigned long index, J2DTevOrder order) { m_orders[index] = order; }

/*
 * --INFO--
 * Address:	8005115C
 * Size:	000014
 */
// J2DTevOrder* J2DTevBlock16::getTevOrder(unsigned long index) { return m_orders + index; }

/*
 * --INFO--
 * Address:	80051170
 * Size:	00002C
 */
// void J2DTevBlock16::setTevColor(unsigned long index, J2DGXColorS10 color) { m_colors[index] = color; }

/*
 * --INFO--
 * Address:	8005119C
 * Size:	000014
 */
// J2DGXColorS10* J2DTevBlock16::getTevColor(unsigned long index) { return m_colors + index; }

/*
 * --INFO--
 * Address:	800511B0
 * Size:	00002C
 */
void J2DTevBlock16::setTevKColor(unsigned long index, JUtility::TColor color)
{
	m_kColors[index].r = color.r;
	m_kColors[index].g = color.g;
	m_kColors[index].b = color.b;
	m_kColors[index].a = color.a;
}

/*
 * --INFO--
 * Address:	800511DC
 * Size:	000014
 */
// JUtility::TColor* J2DTevBlock16::getTevKColor(unsigned long index) { return m_kColors + index; }

/*
 * --INFO--
 * Address:	800511F0
 * Size:	00000C
 */
// void J2DTevBlock16::setTevKColorSel(unsigned long index, unsigned char sel) { m_kColorSels[index] = sel; }

/*
 * --INFO--
 * Address:	800511FC
 * Size:	00000C
 */
// u8 J2DTevBlock16::getTevKColorSel(unsigned long index) { return m_kColorSels[index]; }

/*
 * --INFO--
 * Address:	80051208
 * Size:	00000C
 */
// void J2DTevBlock16::setTevKAlphaSel(unsigned long index, unsigned char sel) { m_kAlphaSels[index] = sel; }

/*
 * --INFO--
 * Address:	80051214
 * Size:	00000C
 */
// u8 J2DTevBlock16::getTevKAlphaSel(unsigned long index) { return m_kAlphaSels[index]; }

/*
 * --INFO--
 * Address:	80051220
 * Size:	000008
 */
// void J2DTevBlock16::setTevStageNum(unsigned char stageNum) { m_stageNum = stageNum; }

/*
 * --INFO--
 * Address:	80051228
 * Size:	000008
 */
// u8 J2DTevBlock16::getTevStageNum() const { return m_stageNum; }

/*
 * --INFO--
 * Address:	80051230
 * Size:	00003C
 * setTevStage__13J2DTevBlock16FUl11J2DTevStage
 */
// void J2DTevBlock16::setTevStage(unsigned long index, J2DTevStage stage) { m_stages[index] = stage; }

/*
 * --INFO--
 * Address:	8005126C
 * Size:	000014
 * getTevStage__13J2DTevBlock16FUl
 */
// J2DTevStage* J2DTevBlock16::getTevStage(unsigned long index) { return m_stages + index; }

/*
 * --INFO--
 * Address:	80051280
 * Size:	000038
 */
void J2DTevBlock16::setTevSwapModeInfo(unsigned long index, J2DTevSwapModeInfo info)
{
	/*
	slwi     r0, r4, 3
	lbz      r4, 1(r5)
	add      r6, r3, r0
	lbz      r0, 0(r5)
	lbz      r5, 0x7e(r6)
	slwi     r3, r4, 2
	rlwinm   r4, r5, 0, 0x1e, 0x1b
	or       r3, r4, r3
	stb      r3, 0x7e(r6)
	lbz      r3, 0x7e(r6)
	rlwinm   r3, r3, 0, 0, 0x1d
	or       r0, r3, r0
	stb      r0, 0x7e(r6)
	blr
	*/
}

/*
 * --INFO--
 * Address:	800512B8
 * Size:	000010
 */
// void J2DTevBlock16::setTevSwapModeTable(unsigned long index, J2DTevSwapModeTable table) { m_swapModeTables[index] = table; }

/*
 * --INFO--
 * Address:	800512C8
 * Size:	000010
 */
// J2DTevSwapModeTable* J2DTevBlock16::getTevSwapModeTable(unsigned long index) { return m_swapModeTables + index; }

/*
 * --INFO--
 * Address:	800512D8
 * Size:	000014
 */
// void J2DTevBlock16::setIndTevStage(unsigned long index, J2DIndTevStage stage) { m_indStages[index] = stage; }

/*
 * --INFO--
 * Address:	800512EC
 * Size:	000014
 */
// J2DIndTevStage* J2DTevBlock16::getIndTevStage(unsigned long index) { return m_indStages + index; }

/*
 * --INFO--
 * Address:	80051300
 * Size:	000030
 */
// bool J2DTevBlock16::insertTexture(unsigned long index, const ResTIMG* img) { return insertTexture(index, img, nullptr); }

/*
 * --INFO--
 * Address:	80051330
 * Size:	000020
 */
// JUTTexture* J2DTevBlock16::getTexture(unsigned long index) { return (index >= 8) ? nullptr : m_textures[index]; }

/*
 * --INFO--
 * Address:	80051350
 * Size:	000020
 */
// JUTPalette* J2DTevBlock16::getPalette(unsigned long index)
// {
// 	if (index >= 8) {
// 		return nullptr;
// 	}
// 	return m_palettes[index];
// }

/*
 * --INFO--
 * Address:	80051370
 * Size:	000008
 */
// JUTFont* J2DTevBlock16::getFont() { return m_font; }

/*
 * --INFO--
 * Address:	80051378
 * Size:	000010
 */
// void J2DTevBlock16::setUndeleteFlag(unsigned char flag) { _1B0 &= flag; }

/*
 * --INFO--
 * Address:	80051388
 * Size:	00000C
 */
// void J2DTevBlock16::setFontUndeleteFlag() { _1B1 = 0; }

/*
 * --INFO--
 * Address:	80051394
 * Size:	00000C
 */
// u32 J2DTevBlock8::getType() { return JBT_Tev8; }

/*
 * --INFO--
 * Address:	800513A0
 * Size:	000008
 */
// u32 J2DTevBlock8::getMaxStage() { return 0x8; }

/*
 * --INFO--
 * Address:	800513A8
 * Size:	000010
 */
// void J2DTevBlock8::setTexNo(unsigned long index, unsigned short texNo) { m_texIndices[index] = texNo; }

/*
 * --INFO--
 * Address:	800513B8
 * Size:	000010
 */
// u16 J2DTevBlock8::getTexNo(unsigned long index) const { return m_texIndices[index]; }

/*
 * --INFO--
 * Address:	800513C8
 * Size:	000008
 */
// void J2DTevBlock8::setFontNo(unsigned short fontNo) { m_fontNo = fontNo; }

/*
 * --INFO--
 * Address:	800513D0
 * Size:	000008
 */
// u16 J2DTevBlock8::getFontNo() const { return m_fontNo; }

/*
 * --INFO--
 * Address:	800513D8
 * Size:	000024
 */
// void J2DTevBlock8::setTevOrder(unsigned long index, J2DTevOrder order) { m_orders[index] = order; }

/*
 * --INFO--
 * Address:	800513FC
 * Size:	000014
 */
// J2DTevOrder* J2DTevBlock8::getTevOrder(unsigned long index) { return m_orders + index; }

/*
 * --INFO--
 * Address:	80051410
 * Size:	00002C
 */
// void J2DTevBlock8::setTevColor(unsigned long index, J2DGXColorS10 color) { m_colors[index] = color; }

/*
 * --INFO--
 * Address:	8005143C
 * Size:	000014
 */
// J2DGXColorS10* J2DTevBlock8::getTevColor(unsigned long index) { return m_colors + index; }

/*
 * --INFO--
 * Address:	80051450
 * Size:	00002C
 */
void J2DTevBlock8::setTevKColor(unsigned long index, JUtility::TColor color)
{
	m_kColors[index].r = color.r;
	m_kColors[index].g = color.g;
	m_kColors[index].b = color.b;
	m_kColors[index].a = color.a;
}

/*
 * --INFO--
 * Address:	8005147C
 * Size:	000014
 */
// JUtility::TColor* J2DTevBlock8::getTevKColor(unsigned long index) { return m_kColors + index; }

/*
 * --INFO--
 * Address:	80051490
 * Size:	00000C
 */
// void J2DTevBlock8::setTevKColorSel(unsigned long index, unsigned char sel) { m_kColorSels[index] = sel; }

/*
 * --INFO--
 * Address:	8005149C
 * Size:	00000C
 */
// u8 J2DTevBlock8::getTevKColorSel(unsigned long index) { return m_kColorSels[index]; }

/*
 * --INFO--
 * Address:	800514A8
 * Size:	00000C
 */
// void J2DTevBlock8::setTevKAlphaSel(unsigned long index, unsigned char sel) { m_kAlphaSels[index] = sel; }

/*
 * --INFO--
 * Address:	800514B4
 * Size:	00000C
 */
// u8 J2DTevBlock8::getTevKAlphaSel(unsigned long index) { return m_kAlphaSels[index]; }

/*
 * --INFO--
 * Address:	800514C0
 * Size:	000008
 */
// void J2DTevBlock8::setTevStageNum(unsigned char stageNum) { m_stageNum = stageNum; }

/*
 * --INFO--
 * Address:	800514C8
 * Size:	000008
 */
// u8 J2DTevBlock8::getTevStageNum() const { return m_stageNum; }

/*
 * --INFO--
 * Address:	800514D0
 * Size:	00003C
 * setTevStage__12J2DTevBlock8FUl11J2DTevStage
 */
// void J2DTevBlock8::setTevStage(unsigned long index, J2DTevStage stage) { m_stages[index] = stage; }

/*
 * --INFO--
 * Address:	8005150C
 * Size:	000014
 * getTevStage__12J2DTevBlock8FUl
 */
// J2DTevStage* J2DTevBlock8::getTevStage(unsigned long index) { return m_stages + index; }

/*
 * --INFO--
 * Address:	80051520
 * Size:	000038
 */
void J2DTevBlock8::setTevSwapModeInfo(unsigned long index, J2DTevSwapModeInfo info)
{
	/*
	slwi     r0, r4, 3
	lbz      r4, 1(r5)
	add      r6, r3, r0
	lbz      r0, 0(r5)
	lbz      r5, 0x5e(r6)
	slwi     r3, r4, 2
	rlwinm   r4, r5, 0, 0x1e, 0x1b
	or       r3, r4, r3
	stb      r3, 0x5e(r6)
	lbz      r3, 0x5e(r6)
	rlwinm   r3, r3, 0, 0, 0x1d
	or       r0, r3, r0
	stb      r0, 0x5e(r6)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80051558
 * Size:	000010
 */
// void J2DTevBlock8::setTevSwapModeTable(unsigned long index, J2DTevSwapModeTable table) { m_swapModeTables[index] = table; }

/*
 * --INFO--
 * Address:	80051568
 * Size:	000010
 */
// J2DTevSwapModeTable* J2DTevBlock8::getTevSwapModeTable(unsigned long index) { return m_swapModeTables + index; }

/*
 * --INFO--
 * Address:	80051578
 * Size:	000014
 */
// void J2DTevBlock8::setIndTevStage(unsigned long index, J2DIndTevStage stage) { m_indStages[index] = stage; }

/*
 * --INFO--
 * Address:	8005158C
 * Size:	000014
 */
// J2DIndTevStage* J2DTevBlock8::getIndTevStage(unsigned long index) { return m_indStages + index; }

/*
 * --INFO--
 * Address:	800515A0
 * Size:	000030
 */
// bool J2DTevBlock8::insertTexture(unsigned long index, const ResTIMG* img) { return insertTexture(index, img, nullptr); }

/*
 * --INFO--
 * Address:	800515D0
 * Size:	000020
 */
// JUTTexture* J2DTevBlock8::getTexture(unsigned long index) { return (index >= 8) ? nullptr : m_textures[index]; }

/*
 * --INFO--
 * Address:	800515F0
 * Size:	000020
 */
// JUTPalette* J2DTevBlock8::getPalette(unsigned long index)
// {
// 	if (index >= 8) {
// 		return nullptr;
// 	}
// 	return m_palettes[index];
// }

/*
 * --INFO--
 * Address:	80051610
 * Size:	000008
 */
// JUTFont* J2DTevBlock8::getFont() { return m_font; }

/*
 * --INFO--
 * Address:	80051618
 * Size:	000010
 */
// void J2DTevBlock8::setUndeleteFlag(unsigned char flag) { _120 &= flag; }

/*
 * --INFO--
 * Address:	80051628
 * Size:	00000C
 */
// void J2DTevBlock8::setFontUndeleteFlag() { _121 = 0; }

/*
 * --INFO--
 * Address:	80051634
 * Size:	00000C
 */
// u32 J2DTevBlock4::getType() { return JBT_Tev4; }

/*
 * --INFO--
 * Address:	80051640
 * Size:	000008
 */
// u32 J2DTevBlock4::getMaxStage() { return 0x4; }

/*
 * --INFO--
 * Address:	80051648
 * Size:	000010
 */
// void J2DTevBlock4::setTexNo(unsigned long index, unsigned short texNo) { m_texIndices[index] = texNo; }

/*
 * --INFO--
 * Address:	80051658
 * Size:	000010
 */
// u16 J2DTevBlock4::getTexNo(unsigned long index) const { return m_texIndices[index]; }

/*
 * --INFO--
 * Address:	80051668
 * Size:	000008
 */
// void J2DTevBlock4::setFontNo(unsigned short fontNo) { m_fontNo = fontNo; }

/*
 * --INFO--
 * Address:	80051670
 * Size:	000008
 */
// u16 J2DTevBlock4::getFontNo() const { return m_fontNo; }

/*
 * --INFO--
 * Address:	80051678
 * Size:	000024
 */
// void J2DTevBlock4::setTevOrder(unsigned long index, J2DTevOrder order) { m_orders[index] = order; }

/*
 * --INFO--
 * Address:	8005169C
 * Size:	000014
 */
// J2DTevOrder* J2DTevBlock4::getTevOrder(unsigned long index) { return m_orders + index; }

/*
 * --INFO--
 * Address:	800516B0
 * Size:	00002C
 */
// void J2DTevBlock4::setTevColor(unsigned long index, J2DGXColorS10 color) { m_colors[index] = color; }

/*
 * --INFO--
 * Address:	800516DC
 * Size:	000014
 */
// J2DGXColorS10* J2DTevBlock4::getTevColor(unsigned long index) { return m_colors + index; }

/*
 * --INFO--
 * Address:	800516F0
 * Size:	00002C
 */
void J2DTevBlock4::setTevKColor(unsigned long index, JUtility::TColor color)
{
	m_kColors[index].r = color.r;
	m_kColors[index].g = color.g;
	m_kColors[index].b = color.b;
	m_kColors[index].a = color.a;
}

/*
 * --INFO--
 * Address:	8005171C
 * Size:	000014
 */
// JUtility::TColor* J2DTevBlock4::getTevKColor(unsigned long index) { return m_kColors + index; }

/*
 * --INFO--
 * Address:	80051730
 * Size:	00000C
 */
// void J2DTevBlock4::setTevKColorSel(unsigned long index, unsigned char sel) { m_kColorSels[index] = sel; }

/*
 * --INFO--
 * Address:	8005173C
 * Size:	00000C
 */
// u8 J2DTevBlock4::getTevKColorSel(unsigned long index) { return m_kColorSels[index]; }

/*
 * --INFO--
 * Address:	80051748
 * Size:	00000C
 */
// void J2DTevBlock4::setTevKAlphaSel(unsigned long index, unsigned char sel) { m_kAlphaSels[index] = sel; }

/*
 * --INFO--
 * Address:	80051754
 * Size:	00000C
 */
// u8 J2DTevBlock4::getTevKAlphaSel(unsigned long index) { return m_kAlphaSels[index]; }

/*
 * --INFO--
 * Address:	80051760
 * Size:	000008
 */
// void J2DTevBlock4::setTevStageNum(unsigned char stageNum) { m_stageNum = stageNum; }

/*
 * --INFO--
 * Address:	80051768
 * Size:	000008
 */
// u8 J2DTevBlock4::getTevStageNum() const { return m_stageNum; }

/*
 * --INFO--
 * Address:	80051770
 * Size:	00003C
 * setTevStage__12J2DTevBlock4FUl11J2DTevStage
 */
// void J2DTevBlock4::setTevStage(unsigned long index, J2DTevStage stage) { m_stages[index] = stage; }

/*
 * --INFO--
 * Address:	800517AC
 * Size:	000014
 * getTevStage__12J2DTevBlock4FUl
 */
// J2DTevStage* J2DTevBlock4::getTevStage(unsigned long index) { return m_stages + index; }

/*
 * --INFO--
 * Address:	800517C0
 * Size:	000038
 */
void J2DTevBlock4::setTevSwapModeInfo(unsigned long index, J2DTevSwapModeInfo info)
{
	/*
	slwi     r0, r4, 3
	lbz      r4, 1(r5)
	add      r6, r3, r0
	lbz      r0, 0(r5)
	lbz      r5, 0x46(r6)
	slwi     r3, r4, 2
	rlwinm   r4, r5, 0, 0x1e, 0x1b
	or       r3, r4, r3
	stb      r3, 0x46(r6)
	lbz      r3, 0x46(r6)
	rlwinm   r3, r3, 0, 0, 0x1d
	or       r0, r3, r0
	stb      r0, 0x46(r6)
	blr
	*/
}

/*
 * --INFO--
 * Address:	800517F8
 * Size:	000010
 */
// void J2DTevBlock4::setTevSwapModeTable(unsigned long index, J2DTevSwapModeTable table) { m_swapModeTables[index] = table; }

/*
 * --INFO--
 * Address:	80051808
 * Size:	000010
 */
// J2DTevSwapModeTable* J2DTevBlock4::getTevSwapModeTable(unsigned long index) { return m_swapModeTables + index; }

/*
 * --INFO--
 * Address:	80051818
 * Size:	000014
 */
// void J2DTevBlock4::setIndTevStage(unsigned long index, J2DIndTevStage stage) { m_indStages[index] = stage; }

/*
 * --INFO--
 * Address:	8005182C
 * Size:	000014
 */
// J2DIndTevStage* J2DTevBlock4::getIndTevStage(unsigned long index) { return m_indStages + index; }

/*
 * --INFO--
 * Address:	80051840
 * Size:	000030
 */
// bool J2DTevBlock4::insertTexture(unsigned long index, const ResTIMG* img) { return insertTexture(index, img, nullptr); }

/*
 * --INFO--
 * Address:	80051870
 * Size:	000020
 */
// JUTTexture* J2DTevBlock4::getTexture(unsigned long index) { return (index >= 4) ? nullptr : m_textures[index]; }

/*
 * --INFO--
 * Address:	80051890
 * Size:	000020
 */
// JUTPalette* J2DTevBlock4::getPalette(unsigned long index)
// {
// 	if (index >= 4) {
// 		return nullptr;
// 	}
// 	return m_palettes[index];
// }

/*
 * --INFO--
 * Address:	800518B0
 * Size:	000008
 */
// JUTFont* J2DTevBlock4::getFont() { return m_font; }

/*
 * --INFO--
 * Address:	800518B8
 * Size:	000010
 */
// void J2DTevBlock4::setUndeleteFlag(unsigned char flag) { _B0 &= flag; }

/*
 * --INFO--
 * Address:	800518C8
 * Size:	000010
 */
// void J2DTevBlock4::setFontUndeleteFlag() { _B0 &= 0x7F; }

/*
 * --INFO--
 * Address:	800518D8
 * Size:	00000C
 */
// u32 J2DTevBlock2::getType() { return JBT_Tev2; }

/*
 * --INFO--
 * Address:	800518E4
 * Size:	000008
 */
// u32 J2DTevBlock2::getMaxStage() { return 0x2; }

/*
 * --INFO--
 * Address:	800518EC
 * Size:	000010
 */
// void J2DTevBlock2::setTexNo(unsigned long index, unsigned short texNo) { m_texIndices[index] = texNo; }

/*
 * --INFO--
 * Address:	800518FC
 * Size:	000010
 */
// u16 J2DTevBlock2::getTexNo(unsigned long index) const { return m_texIndices[index]; }

/*
 * --INFO--
 * Address:	8005190C
 * Size:	000008
 */
// void J2DTevBlock2::setFontNo(unsigned short fontNo) { m_fontNo = fontNo; }

/*
 * --INFO--
 * Address:	80051914
 * Size:	000008
 */
// u16 J2DTevBlock2::getFontNo() const { return m_fontNo; }

/*
 * --INFO--
 * Address:	8005191C
 * Size:	000024
 */
// void J2DTevBlock2::setTevOrder(unsigned long index, J2DTevOrder order) { m_orders[index] = order; }

/*
 * --INFO--
 * Address:	80051940
 * Size:	000014
 */
// J2DTevOrder* J2DTevBlock2::getTevOrder(unsigned long index) { return m_orders + index; }

/*
 * --INFO--
 * Address:	80051954
 * Size:	00002C
 */
// void J2DTevBlock2::setTevColor(unsigned long index, J2DGXColorS10 color) { m_colors[index] = color; }

/*
 * --INFO--
 * Address:	80051980
 * Size:	000014
 */
// J2DGXColorS10* J2DTevBlock2::getTevColor(unsigned long index) { return m_colors + index; }

/*
 * --INFO--
 * Address:	80051994
 * Size:	00002C
 */
void J2DTevBlock2::setTevKColor(unsigned long index, JUtility::TColor color)
{
	m_kColors[index].r = color.r;
	m_kColors[index].g = color.g;
	m_kColors[index].b = color.b;
	m_kColors[index].a = color.a;
}

/*
 * --INFO--
 * Address:	800519C0
 * Size:	000014
 */
// JUtility::TColor* J2DTevBlock2::getTevKColor(unsigned long index) { return m_kColors + index; }

/*
 * --INFO--
 * Address:	800519D4
 * Size:	00000C
 */
// void J2DTevBlock2::setTevKColorSel(unsigned long index, unsigned char sel) { m_kColorSels[index] = sel; }

/*
 * --INFO--
 * Address:	800519E0
 * Size:	00000C
 */
// u8 J2DTevBlock2::getTevKColorSel(unsigned long index) { return m_kColorSels[index]; }

/*
 * --INFO--
 * Address:	800519EC
 * Size:	00000C
 */
// void J2DTevBlock2::setTevKAlphaSel(unsigned long index, unsigned char sel) { m_kAlphaSels[index] = sel; }

/*
 * --INFO--
 * Address:	800519F8
 * Size:	00000C
 */
// u8 J2DTevBlock2::getTevKAlphaSel(unsigned long index) { return m_kAlphaSels[index]; }

/*
 * --INFO--
 * Address:	80051A04
 * Size:	000008
 */
// void J2DTevBlock2::setTevStageNum(unsigned char stageNum) { m_stageNum = stageNum; }

/*
 * --INFO--
 * Address:	80051A0C
 * Size:	000008
 */
// u8 J2DTevBlock2::getTevStageNum() const { return m_stageNum; }

/*
 * --INFO--
 * Address:	80051A14
 * Size:	00003C
 * setTevStage__12J2DTevBlock2FUl11J2DTevStage
 */
// void J2DTevBlock2::setTevStage(unsigned long index, J2DTevStage stage) { m_stages[index] = stage; }

/*
 * --INFO--
 * Address:	80051A50
 * Size:	000014
 * getTevStage__12J2DTevBlock2FUl
 */
// J2DTevStage* J2DTevBlock2::getTevStage(unsigned long index) { return m_stages + index; }

/*
 * --INFO--
 * Address:	80051A64
 * Size:	000038
 */
void J2DTevBlock2::setTevSwapModeInfo(unsigned long index, J2DTevSwapModeInfo info)
{
	m_stages[index]._04.asStruct._1 = info._01 << 1;
	m_stages[index]._04.asStruct._0 = info._00;
	// m_stages[index]._06._0 = info._00;
	/*
	slwi     r0, r4, 3
	lbz      r4, 1(r5)
	add      r6, r3, r0
	lbz      r0, 0(r5)
	lbz      r5, 0x3a(r6)
	slwi     r3, r4, 2
	rlwinm   r4, r5, 0, 0x1e, 0x1b
	or       r3, r4, r3
	stb      r3, 0x3a(r6)
	lbz      r3, 0x3a(r6)
	rlwinm   r3, r3, 0, 0, 0x1d
	or       r0, r3, r0
	stb      r0, 0x3a(r6)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80051A9C
 * Size:	000010
 */
// void J2DTevBlock2::setTevSwapModeTable(unsigned long index, J2DTevSwapModeTable table) { m_swapModeTables[index] = table; }

/*
 * --INFO--
 * Address:	80051AAC
 * Size:	000010
 */
// J2DTevSwapModeTable* J2DTevBlock2::getTevSwapModeTable(unsigned long index) { return m_swapModeTables + index; }

/*
 * --INFO--
 * Address:	80051ABC
 * Size:	000014
 */
// void J2DTevBlock2::setIndTevStage(unsigned long index, J2DIndTevStage stage) { m_indStages[index] = stage; }

/*
 * --INFO--
 * Address:	80051AD0
 * Size:	000014
 */
// J2DIndTevStage* J2DTevBlock2::getIndTevStage(unsigned long index) { return m_indStages + index; }

/*
 * --INFO--
 * Address:	80051AE4
 * Size:	000030
 */
// bool J2DTevBlock2::insertTexture(unsigned long index, const ResTIMG* img) { return insertTexture(index, img, nullptr); }

/*
 * --INFO--
 * Address:	80051B14
 * Size:	000020
 */
// JUTTexture* J2DTevBlock2::getTexture(unsigned long index) { return (index >= 2) ? nullptr : m_textures[index]; }

/*
 * --INFO--
 * Address:	80051B34
 * Size:	000020
 */
// JUTPalette* J2DTevBlock2::getPalette(unsigned long index)
// {
// 	if (index >= 2) {
// 		return nullptr;
// 	}
// 	return m_palettes[index];
// }

/*
 * --INFO--
 * Address:	80051B54
 * Size:	000008
 */
// JUTFont* J2DTevBlock2::getFont() { return m_font; }

/*
 * --INFO--
 * Address:	80051B5C
 * Size:	000010
 */
// void J2DTevBlock2::setUndeleteFlag(unsigned char flag) { _78 &= flag; }

/*
 * --INFO--
 * Address:	80051B6C
 * Size:	000010
 */
// void J2DTevBlock2::setFontUndeleteFlag() { _78 &= 0x7F; }

/*
 * --INFO--
 * Address:	80051B7C
 * Size:	00000C
 */
// u32 J2DTevBlock1::getType() { return JBT_Tev1; }

/*
 * --INFO--
 * Address:	80051B88
 * Size:	000008
 */
// u32 J2DTevBlock1::getMaxStage() { return 0x1; }

/*
 * --INFO--
 * Address:	80051B90
 * Size:	000010
 */
// void J2DTevBlock1::setTexNo(unsigned long index, unsigned short texNo) { m_texIndices[index] = texNo; }

/*
 * --INFO--
 * Address:	80051BA0
 * Size:	000010
 */
// u16 J2DTevBlock1::getTexNo(unsigned long index) const { return m_texIndices[index]; }

/*
 * --INFO--
 * Address:	80051BB0
 * Size:	000008
 */
// void J2DTevBlock1::setFontNo(unsigned short fontNo) { m_fontNo = fontNo; }

/*
 * --INFO--
 * Address:	80051BB8
 * Size:	000008
 */
// u16 J2DTevBlock1::getFontNo() const { return m_fontNo; }

/*
 * --INFO--
 * Address:	80051BC0
 * Size:	000024
 */
// void J2DTevBlock1::setTevOrder(unsigned long index, J2DTevOrder order) { m_orders[index] = order; }

/*
 * --INFO--
 * Address:	80051BE4
 * Size:	000014
 */
// J2DTevOrder* J2DTevBlock1::getTevOrder(unsigned long index) { return m_orders + index; }

/*
 * --INFO--
 * Address:	80051BF8
 * Size:	00002C
 */
// void J2DTevBlock1::setTevColor(unsigned long index, J2DGXColorS10 color) { m_colors[index] = color; }

/*
 * --INFO--
 * Address:	80051C24
 * Size:	000014
 */
// J2DGXColorS10* J2DTevBlock1::getTevColor(unsigned long index) { return m_colors + index; }

/*
 * --INFO--
 * Address:	80051C38
 * Size:	00002C
 */
void J2DTevBlock1::setTevKColor(unsigned long index, JUtility::TColor color)
{
	m_kColors[index].r = color.r;
	m_kColors[index].g = color.g;
	m_kColors[index].b = color.b;
	m_kColors[index].a = color.a;
}

/*
 * --INFO--
 * Address:	80051C64
 * Size:	000014
 */
// JUtility::TColor* J2DTevBlock1::getTevKColor(unsigned long index) { return m_kColors + index; }

/*
 * --INFO--
 * Address:	80051C78
 * Size:	00000C
 */
// void J2DTevBlock1::setTevKColorSel(unsigned long index, unsigned char sel) { m_kColorSels[index] = sel; }

/*
 * --INFO--
 * Address:	80051C84
 * Size:	00000C
 */
// u8 J2DTevBlock1::getTevKColorSel(unsigned long index) { return m_kColorSels[index]; }

/*
 * --INFO--
 * Address:	80051C90
 * Size:	00000C
 */
// void J2DTevBlock1::setTevKAlphaSel(unsigned long index, unsigned char sel) { m_kAlphaSels[index] = sel; }

/*
 * --INFO--
 * Address:	80051C9C
 * Size:	00000C
 */
// u8 J2DTevBlock1::getTevKAlphaSel(unsigned long index) { return m_kAlphaSels[index]; }

/*
 * --INFO--
 * Address:	80051CA8
 * Size:	000004
 */
// void J2DTevBlock1::setTevStageNum(unsigned char stageNum) { }

/*
 * --INFO--
 * Address:	80051CAC
 * Size:	000008
 */
// u8 J2DTevBlock1::getTevStageNum() const { return 0x1; }

/*
 * --INFO--
 * Address:	80051CB4
 * Size:	00003C
 * setTevStage__12J2DTevBlock1FUl11J2DTevStage
 */
// void J2DTevBlock1::setTevStage(unsigned long index, J2DTevStage stage) { m_stages[index] = stage; }

/*
 * --INFO--
 * Address:	80051CF0
 * Size:	000014
 * getTevStage__12J2DTevBlock1FUl
 */
// J2DTevStage* J2DTevBlock1::getTevStage(unsigned long index) { return m_stages + index; }

/*
 * --INFO--
 * Address:	80051D04
 * Size:	000038
 */
void J2DTevBlock1::setTevSwapModeInfo(unsigned long index, J2DTevSwapModeInfo info)
{
	/*
	slwi     r0, r4, 3
	lbz      r4, 1(r5)
	add      r6, r3, r0
	lbz      r0, 0(r5)
	lbz      r5, 0x33(r6)
	slwi     r3, r4, 2
	rlwinm   r4, r5, 0, 0x1e, 0x1b
	or       r3, r4, r3
	stb      r3, 0x33(r6)
	lbz      r3, 0x33(r6)
	rlwinm   r3, r3, 0, 0, 0x1d
	or       r0, r3, r0
	stb      r0, 0x33(r6)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80051D3C
 * Size:	000010
 */
// void J2DTevBlock1::setTevSwapModeTable(unsigned long index, J2DTevSwapModeTable table) { m_swapModeTables[index] = table; }

/*
 * --INFO--
 * Address:	80051D4C
 * Size:	000010
 */
// J2DTevSwapModeTable* J2DTevBlock1::getTevSwapModeTable(unsigned long index) { return m_swapModeTables + index; }

/*
 * --INFO--
 * Address:	80051D5C
 * Size:	000014
 */
// void J2DTevBlock1::setIndTevStage(unsigned long index, J2DIndTevStage stage) { m_indStages[index] = stage; }

/*
 * --INFO--
 * Address:	80051D70
 * Size:	000014
 */
// J2DIndTevStage* J2DTevBlock1::getIndTevStage(unsigned long index) { return m_indStages + index; }

/*
 * --INFO--
 * Address:	80051D84
 * Size:	000030
 */
// bool J2DTevBlock1::insertTexture(unsigned long index, const ResTIMG* img) { return insertTexture(index, img, nullptr); }

/*
 * --INFO--
 * Address:	80051DB4
 * Size:	000020
 */
// JUTTexture* J2DTevBlock1::getTexture(unsigned long index) { return (index >= 1) ? nullptr : m_textures[index]; }

/*
 * --INFO--
 * Address:	80051DD4
 * Size:	000020
 */
// JUTPalette* J2DTevBlock1::getPalette(unsigned long index)
// {
// 	if (index >= 1) {
// 		return nullptr;
// 	}
// 	return m_palettes[index];
// }

/*
 * --INFO--
 * Address:	80051DF4
 * Size:	000008
 */
// JUTFont* J2DTevBlock1::getFont() { return m_font; }

/*
 * --INFO--
 * Address:	80051DFC
 * Size:	000010
 */
// void J2DTevBlock1::setUndeleteFlag(unsigned char flag) { _5C &= flag; }

/*
 * --INFO--
 * Address:	80051E0C
 * Size:	000010
 */
// void J2DTevBlock1::setFontUndeleteFlag() { _5C &= 0x7F; }

/*
 * --INFO--
 * Address:	80051E1C
 * Size:	000004
 */
// void J2DTevBlock::initialize() { }

/*
 * --INFO--
 * Address:	80051E20
 * Size:	000004
 */
// void J2DTevBlock::setGX() { }

/*
 * --INFO--
 * Address:	80051E24
 * Size:	000004
 * loadTexture__11J2DTevBlockF11_GXTexMapIDUl
 */
// void J2DTevBlock::loadTexture(_GXTexMapID id, unsigned long index) { }

/*
 * --INFO--
 * Address:	80051E28
 * Size:	000004
 */
// void J2DTevBlock::setFontNo(unsigned short) { }

/*
 * --INFO--
 * Address:	80051E2C
 * Size:	000004
 */
// void J2DTevBlock::setTevKColor(unsigned long index, JUtility::TColor color) { }

/*
 * --INFO--
 * Address:	80051E30
 * Size:	000008
 */
// u8 J2DTevBlock::getTevKColorSel(unsigned long index) { return 0x0; }

/*
 * --INFO--
 * Address:	80051E38
 * Size:	000008
 */
// u8 J2DTevBlock::getTevKAlphaSel(unsigned long index) { return 0x0; }

/*
 * --INFO--
 * Address:	80051E40
 * Size:	000004
 * setTevStage__11J2DTevBlockFUl11J2DTevStage
 */
// void J2DTevBlock::setTevStage(unsigned long index, J2DTevStage stage) { }

/*
 * --INFO--
 * Address:	80051E44
 * Size:	000004
 */
// void J2DTevBlock::setTevSwapModeInfo(unsigned long index, J2DTevSwapModeInfo info) { }

/*
 * --INFO--
 * Address:	80051E48
 * Size:	000004
 */
// void J2DTevBlock::setTevSwapModeTable(unsigned long index, J2DTevSwapModeTable table) { }

/*
 * --INFO--
 * Address:	80051E4C
 * Size:	000004
 */
// void J2DTevBlock::setIndTevStage(unsigned long index, J2DIndTevStage stage) { }

/*
 * --INFO--
 * Address:	80051E50
 * Size:	000008
 */
// J2DIndTevStage* J2DTevBlock::getIndTevStage(unsigned long index) { return nullptr; }

/*
 * --INFO--
 * Address:	80051E58
 * Size:	000008
 */
// bool J2DTevBlock::insertTexture(unsigned long, JUTTexture*) { return false; }

/*
 * --INFO--
 * Address:	80051E60
 * Size:	000008
 */
// bool J2DTevBlock::insertTexture(unsigned long, const ResTIMG*, JUTPalette*) { return false; }

/*
 * --INFO--
 * Address:	80051E68
 * Size:	000008
 * setTexture__11J2DTevBlockFUlPC7ResTIMG
 */
// bool J2DTevBlock::setTexture(unsigned long index, JUTTexture* texture) { return false; }

/*
 * --INFO--
 * Address:	80051E70
 * Size:	000008
 * setTexture__11J2DTevBlockFUlP10JUTTexture
 */
// bool J2DTevBlock::setTexture(unsigned long index, const ResTIMG* img) { return false; }

/*
 * --INFO--
 * Address:	80051E78
 * Size:	000008
 * removeTexture__11J2DTevBlockFUl
 */
// bool J2DTevBlock::removeTexture(unsigned long) { return false; }

/*
 * --INFO--
 * Address:	80051E80
 * Size:	000008
 */
// bool J2DTevBlock::setFont(JUTFont* font) { return false; }

/*
 * --INFO--
 * Address:	80051E88
 * Size:	000008
 */
// bool J2DTevBlock::setFont(ResFONT* font) { return false; }

/*
 * --INFO--
 * Address:	80051E90
 * Size:	000008
 * setPalette__11J2DTevBlockFUlPC7ResTLUT
 */
// bool J2DTevBlock::setPalette(unsigned long index, const ResTLUT* lut) { return false; }

/*
 * --INFO--
 * Address:	80051E98
 * Size:	000008
 * prepareTexture__11J2DTevBlockFUc
 */
// bool J2DTevBlock::prepareTexture(unsigned char count) { return false; }

/*
 * --INFO--
 * Address:	80051EA0
 * Size:	000004
 */
// void J2DTevBlock::shiftDeleteFlag(unsigned char, bool) { }
