.include "macros.inc"
.section .ctors, "wa"  # 0x80472F00 - 0x804732C0
lbl_constructor:
.4byte __sinit_J3DMatBlock_cpp

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.obj lbl_804A20F0, local
	.4byte .L_80081300
	.4byte .L_800811EC
	.4byte .L_80081240
	.4byte .L_80081270
	.4byte .L_80081300
	.4byte .L_800812B4
	.4byte .L_800811EC
	.4byte .L_800811EC
	.4byte .L_80081240
	.4byte .L_80081270
	.4byte .L_800812B4
	.4byte .L_800812B4
.endobj lbl_804A20F0
.obj lbl_804A2120, local
	.4byte .L_80081440
	.4byte .L_8008139C
	.4byte .L_800813B0
	.4byte .L_800813E0
	.4byte .L_80081440
	.4byte .L_800813F4
	.4byte .L_8008139C
	.4byte .L_8008139C
	.4byte .L_800813B0
	.4byte .L_800813E0
	.4byte .L_800813F4
	.4byte .L_800813F4
.endobj lbl_804A2120
.obj lbl_804A2150, local
	.4byte .L_80081570
	.4byte .L_800814D8
	.4byte .L_800814F4
	.4byte .L_8008151C
	.4byte .L_80081570
	.4byte .L_80081538
	.4byte .L_800814D8
	.4byte .L_800814D8
	.4byte .L_800814F4
	.4byte .L_8008151C
	.4byte .L_80081538
	.4byte .L_80081538
.endobj lbl_804A2150
.obj lbl_804A2180, local
	.4byte .L_80081688
	.4byte .L_80081618
	.4byte .L_80081634
	.4byte .L_80081650
	.4byte .L_80081688
	.4byte .L_8008166C
	.4byte .L_80081618
	.4byte .L_80081618
	.4byte .L_80081634
	.4byte .L_80081650
	.4byte .L_8008166C
	.4byte .L_8008166C
.endobj lbl_804A2180
.obj __vt__14J3DPEBlockFull, global
	.4byte 0
	.4byte 0
	.4byte reset__14J3DPEBlockFullFP10J3DPEBlock
	.4byte load__14J3DPEBlockFullFv
	.4byte patch__14J3DPEBlockFullFv
	.4byte diff__14J3DPEBlockFullFUl
	.4byte diffFog__14J3DPEBlockFullFv
	.4byte diffBlend__14J3DPEBlockFullFv
	.4byte countDLSize__14J3DPEBlockFullFv
	.4byte getType__14J3DPEBlockFullFv
	.4byte setFog__14J3DPEBlockFullF6J3DFog
	.4byte setFog__14J3DPEBlockFullFP6J3DFog
	.4byte getFog__14J3DPEBlockFullFv
	.4byte setAlphaComp__14J3DPEBlockFullFPC12J3DAlphaComp
	.4byte setAlphaComp__14J3DPEBlockFullFRC12J3DAlphaComp
	.4byte getAlphaComp__14J3DPEBlockFullFv
	.4byte setBlend__14J3DPEBlockFullFPC8J3DBlend
	.4byte setBlend__14J3DPEBlockFullFRC8J3DBlend
	.4byte getBlend__14J3DPEBlockFullFv
	.4byte setZMode__14J3DPEBlockFullFPC8J3DZMode
	.4byte setZMode__14J3DPEBlockFullF8J3DZMode
	.4byte getZMode__14J3DPEBlockFullFv
	.4byte setZCompLoc__14J3DPEBlockFullFPCUc
	.4byte setZCompLoc__14J3DPEBlockFullFUc
	.4byte getZCompLoc__14J3DPEBlockFullCFv
	.4byte setDither__14J3DPEBlockFullFPCUc
	.4byte setDither__14J3DPEBlockFullFUc
	.4byte getDither__14J3DPEBlockFullCFv
	.4byte getFogOffset__14J3DPEBlockFullCFv
	.4byte setFogOffset__14J3DPEBlockFullFUl
	.4byte __dt__14J3DPEBlockFullFv
.endobj __vt__14J3DPEBlockFull
.obj __vt__16J3DPEBlockFogOff, global
	.4byte 0
	.4byte 0
	.4byte reset__16J3DPEBlockFogOffFP10J3DPEBlock
	.4byte load__16J3DPEBlockFogOffFv
	.4byte patch__10J3DPEBlockFv
	.4byte diff__16J3DPEBlockFogOffFUl
	.4byte diffFog__10J3DPEBlockFv
	.4byte diffBlend__16J3DPEBlockFogOffFv
	.4byte countDLSize__16J3DPEBlockFogOffFv
	.4byte getType__16J3DPEBlockFogOffFv
	.4byte setFog__10J3DPEBlockF6J3DFog
	.4byte setFog__10J3DPEBlockFP6J3DFog
	.4byte getFog__10J3DPEBlockFv
	.4byte setAlphaComp__16J3DPEBlockFogOffFPC12J3DAlphaComp
	.4byte setAlphaComp__16J3DPEBlockFogOffFRC12J3DAlphaComp
	.4byte getAlphaComp__16J3DPEBlockFogOffFv
	.4byte setBlend__16J3DPEBlockFogOffFPC8J3DBlend
	.4byte setBlend__16J3DPEBlockFogOffFRC8J3DBlend
	.4byte getBlend__16J3DPEBlockFogOffFv
	.4byte setZMode__16J3DPEBlockFogOffFPC8J3DZMode
	.4byte setZMode__16J3DPEBlockFogOffF8J3DZMode
	.4byte getZMode__16J3DPEBlockFogOffFv
	.4byte setZCompLoc__16J3DPEBlockFogOffFPCUc
	.4byte setZCompLoc__16J3DPEBlockFogOffFUc
	.4byte getZCompLoc__16J3DPEBlockFogOffCFv
	.4byte setDither__16J3DPEBlockFogOffFPCUc
	.4byte setDither__16J3DPEBlockFogOffFUc
	.4byte getDither__16J3DPEBlockFogOffCFv
	.4byte getFogOffset__10J3DPEBlockCFv
	.4byte setFogOffset__10J3DPEBlockFUl
	.4byte __dt__16J3DPEBlockFogOffFv
.endobj __vt__16J3DPEBlockFogOff
.obj __vt__13J3DTevBlock16, global
	.4byte 0
	.4byte 0
	.4byte reset__13J3DTevBlock16FP11J3DTevBlock
	.4byte load__13J3DTevBlock16Fv
	.4byte diff__11J3DTevBlockFUl
	.4byte diffTexNo__13J3DTevBlock16Fv
	.4byte diffTevReg__13J3DTevBlock16Fv
	.4byte diffTexCoordScale__13J3DTevBlock16Fv
	.4byte diffTevStage__13J3DTevBlock16Fv
	.4byte diffTevStageIndirect__13J3DTevBlock16Fv
	.4byte patch__13J3DTevBlock16Fv
	.4byte patchTexNo__13J3DTevBlock16Fv
	.4byte patchTevReg__13J3DTevBlock16Fv
	.4byte patchTexNoAndTexCoordScale__13J3DTevBlock16Fv
	.4byte ptrToIndex__13J3DTevBlock16Fv
	.4byte indexToPtr__13J3DTevBlock16Fv
	.4byte getType__13J3DTevBlock16Fv
	.4byte countDLSize__13J3DTevBlock16Fv
	.4byte setTexNo__13J3DTevBlock16FUlPCUs
	.4byte setTexNo__13J3DTevBlock16FUlUs
	.4byte getTexNo__13J3DTevBlock16CFUl
	.4byte setTevOrder__13J3DTevBlock16FUlPC11J3DTevOrder
	.4byte setTevOrder__13J3DTevBlock16FUl11J3DTevOrder
	.4byte getTevOrder__13J3DTevBlock16FUl
	.4byte setTevColor__13J3DTevBlock16FUlPC13J3DGXColorS10
	.4byte setTevColor__13J3DTevBlock16FUl13J3DGXColorS10
	.4byte getTevColor__13J3DTevBlock16FUl
	.4byte setTevKColor__13J3DTevBlock16FUlPC10J3DGXColor
	.4byte setTevKColor__13J3DTevBlock16FUl10J3DGXColor
	.4byte getTevKColor__13J3DTevBlock16FUl
	.4byte setTevKColorSel__13J3DTevBlock16FUlPCUc
	.4byte setTevKColorSel__13J3DTevBlock16FUlUc
	.4byte getTevKColorSel__13J3DTevBlock16FUl
	.4byte setTevKAlphaSel__13J3DTevBlock16FUlPCUc
	.4byte setTevKAlphaSel__13J3DTevBlock16FUlUc
	.4byte getTevKAlphaSel__13J3DTevBlock16FUl
	.4byte setTevStageNum__13J3DTevBlock16FPCUc
	.4byte setTevStageNum__13J3DTevBlock16FUc
	.4byte getTevStageNum__13J3DTevBlock16CFv
	.4byte setTevStage__13J3DTevBlock16FUlPC11J3DTevStage
	.4byte setTevStage__13J3DTevBlock16FUl11J3DTevStage
	.4byte getTevStage__13J3DTevBlock16FUl
	.4byte setTevSwapModeInfo__13J3DTevBlock16FUlPC18J3DTevSwapModeInfo
	.4byte setTevSwapModeInfo__13J3DTevBlock16FUl18J3DTevSwapModeInfo
	.4byte setTevSwapModeTable__13J3DTevBlock16FUlPC19J3DTevSwapModeTable
	.4byte setTevSwapModeTable__13J3DTevBlock16FUl19J3DTevSwapModeTable
	.4byte getTevSwapModeTable__13J3DTevBlock16FUl
	.4byte setIndTevStage__13J3DTevBlock16FUlPC14J3DIndTevStage
	.4byte setIndTevStage__13J3DTevBlock16FUl14J3DIndTevStage
	.4byte getIndTevStage__13J3DTevBlock16FUl
	.4byte getTexNoOffset__13J3DTevBlock16CFv
	.4byte getTevRegOffset__13J3DTevBlock16CFv
	.4byte setTexNoOffset__11J3DTevBlockFUl
	.4byte setTevRegOffset__13J3DTevBlock16FUl
	.4byte __dt__13J3DTevBlock16Fv
.endobj __vt__13J3DTevBlock16
.obj __vt__12J3DTevBlock4, global
	.4byte 0
	.4byte 0
	.4byte reset__12J3DTevBlock4FP11J3DTevBlock
	.4byte load__12J3DTevBlock4Fv
	.4byte diff__11J3DTevBlockFUl
	.4byte diffTexNo__12J3DTevBlock4Fv
	.4byte diffTevReg__12J3DTevBlock4Fv
	.4byte diffTexCoordScale__12J3DTevBlock4Fv
	.4byte diffTevStage__12J3DTevBlock4Fv
	.4byte diffTevStageIndirect__12J3DTevBlock4Fv
	.4byte patch__12J3DTevBlock4Fv
	.4byte patchTexNo__12J3DTevBlock4Fv
	.4byte patchTevReg__12J3DTevBlock4Fv
	.4byte patchTexNoAndTexCoordScale__12J3DTevBlock4Fv
	.4byte ptrToIndex__12J3DTevBlock4Fv
	.4byte indexToPtr__12J3DTevBlock4Fv
	.4byte getType__12J3DTevBlock4Fv
	.4byte countDLSize__12J3DTevBlock4Fv
	.4byte setTexNo__12J3DTevBlock4FUlPCUs
	.4byte setTexNo__12J3DTevBlock4FUlUs
	.4byte getTexNo__12J3DTevBlock4CFUl
	.4byte setTevOrder__12J3DTevBlock4FUlPC11J3DTevOrder
	.4byte setTevOrder__12J3DTevBlock4FUl11J3DTevOrder
	.4byte getTevOrder__12J3DTevBlock4FUl
	.4byte setTevColor__12J3DTevBlock4FUlPC13J3DGXColorS10
	.4byte setTevColor__12J3DTevBlock4FUl13J3DGXColorS10
	.4byte getTevColor__12J3DTevBlock4FUl
	.4byte setTevKColor__12J3DTevBlock4FUlPC10J3DGXColor
	.4byte setTevKColor__12J3DTevBlock4FUl10J3DGXColor
	.4byte getTevKColor__12J3DTevBlock4FUl
	.4byte setTevKColorSel__12J3DTevBlock4FUlPCUc
	.4byte setTevKColorSel__12J3DTevBlock4FUlUc
	.4byte getTevKColorSel__12J3DTevBlock4FUl
	.4byte setTevKAlphaSel__12J3DTevBlock4FUlPCUc
	.4byte setTevKAlphaSel__12J3DTevBlock4FUlUc
	.4byte getTevKAlphaSel__12J3DTevBlock4FUl
	.4byte setTevStageNum__12J3DTevBlock4FPCUc
	.4byte setTevStageNum__12J3DTevBlock4FUc
	.4byte getTevStageNum__12J3DTevBlock4CFv
	.4byte setTevStage__12J3DTevBlock4FUlPC11J3DTevStage
	.4byte setTevStage__12J3DTevBlock4FUl11J3DTevStage
	.4byte getTevStage__12J3DTevBlock4FUl
	.4byte setTevSwapModeInfo__12J3DTevBlock4FUlPC18J3DTevSwapModeInfo
	.4byte setTevSwapModeInfo__12J3DTevBlock4FUl18J3DTevSwapModeInfo
	.4byte setTevSwapModeTable__12J3DTevBlock4FUlPC19J3DTevSwapModeTable
	.4byte setTevSwapModeTable__12J3DTevBlock4FUl19J3DTevSwapModeTable
	.4byte getTevSwapModeTable__12J3DTevBlock4FUl
	.4byte setIndTevStage__12J3DTevBlock4FUlPC14J3DIndTevStage
	.4byte setIndTevStage__12J3DTevBlock4FUl14J3DIndTevStage
	.4byte getIndTevStage__12J3DTevBlock4FUl
	.4byte getTexNoOffset__12J3DTevBlock4CFv
	.4byte getTevRegOffset__12J3DTevBlock4CFv
	.4byte setTexNoOffset__11J3DTevBlockFUl
	.4byte setTevRegOffset__12J3DTevBlock4FUl
	.4byte __dt__12J3DTevBlock4Fv
.endobj __vt__12J3DTevBlock4
.obj __vt__12J3DTevBlock2, global
	.4byte 0
	.4byte 0
	.4byte reset__12J3DTevBlock2FP11J3DTevBlock
	.4byte load__12J3DTevBlock2Fv
	.4byte diff__11J3DTevBlockFUl
	.4byte diffTexNo__12J3DTevBlock2Fv
	.4byte diffTevReg__12J3DTevBlock2Fv
	.4byte diffTexCoordScale__12J3DTevBlock2Fv
	.4byte diffTevStage__12J3DTevBlock2Fv
	.4byte diffTevStageIndirect__12J3DTevBlock2Fv
	.4byte patch__12J3DTevBlock2Fv
	.4byte patchTexNo__12J3DTevBlock2Fv
	.4byte patchTevReg__12J3DTevBlock2Fv
	.4byte patchTexNoAndTexCoordScale__12J3DTevBlock2Fv
	.4byte ptrToIndex__12J3DTevBlock2Fv
	.4byte indexToPtr__12J3DTevBlock2Fv
	.4byte getType__12J3DTevBlock2Fv
	.4byte countDLSize__12J3DTevBlock2Fv
	.4byte setTexNo__12J3DTevBlock2FUlPCUs
	.4byte setTexNo__12J3DTevBlock2FUlUs
	.4byte getTexNo__12J3DTevBlock2CFUl
	.4byte setTevOrder__12J3DTevBlock2FUlPC11J3DTevOrder
	.4byte setTevOrder__12J3DTevBlock2FUl11J3DTevOrder
	.4byte getTevOrder__12J3DTevBlock2FUl
	.4byte setTevColor__12J3DTevBlock2FUlPC13J3DGXColorS10
	.4byte setTevColor__12J3DTevBlock2FUl13J3DGXColorS10
	.4byte getTevColor__12J3DTevBlock2FUl
	.4byte setTevKColor__12J3DTevBlock2FUlPC10J3DGXColor
	.4byte setTevKColor__12J3DTevBlock2FUl10J3DGXColor
	.4byte getTevKColor__12J3DTevBlock2FUl
	.4byte setTevKColorSel__12J3DTevBlock2FUlPCUc
	.4byte setTevKColorSel__12J3DTevBlock2FUlUc
	.4byte getTevKColorSel__12J3DTevBlock2FUl
	.4byte setTevKAlphaSel__12J3DTevBlock2FUlPCUc
	.4byte setTevKAlphaSel__12J3DTevBlock2FUlUc
	.4byte getTevKAlphaSel__12J3DTevBlock2FUl
	.4byte setTevStageNum__12J3DTevBlock2FPCUc
	.4byte setTevStageNum__12J3DTevBlock2FUc
	.4byte getTevStageNum__12J3DTevBlock2CFv
	.4byte setTevStage__12J3DTevBlock2FUlPC11J3DTevStage
	.4byte setTevStage__12J3DTevBlock2FUl11J3DTevStage
	.4byte getTevStage__12J3DTevBlock2FUl
	.4byte setTevSwapModeInfo__12J3DTevBlock2FUlPC18J3DTevSwapModeInfo
	.4byte setTevSwapModeInfo__12J3DTevBlock2FUl18J3DTevSwapModeInfo
	.4byte setTevSwapModeTable__12J3DTevBlock2FUlPC19J3DTevSwapModeTable
	.4byte setTevSwapModeTable__12J3DTevBlock2FUl19J3DTevSwapModeTable
	.4byte getTevSwapModeTable__12J3DTevBlock2FUl
	.4byte setIndTevStage__12J3DTevBlock2FUlPC14J3DIndTevStage
	.4byte setIndTevStage__12J3DTevBlock2FUl14J3DIndTevStage
	.4byte getIndTevStage__12J3DTevBlock2FUl
	.4byte getTexNoOffset__12J3DTevBlock2CFv
	.4byte getTevRegOffset__12J3DTevBlock2CFv
	.4byte setTexNoOffset__11J3DTevBlockFUl
	.4byte setTevRegOffset__12J3DTevBlock2FUl
	.4byte __dt__12J3DTevBlock2Fv
.endobj __vt__12J3DTevBlock2
.obj __vt__12J3DTevBlock1, global
	.4byte 0
	.4byte 0
	.4byte reset__12J3DTevBlock1FP11J3DTevBlock
	.4byte load__12J3DTevBlock1Fv
	.4byte diff__11J3DTevBlockFUl
	.4byte diffTexNo__12J3DTevBlock1Fv
	.4byte diffTevReg__12J3DTevBlock1Fv
	.4byte diffTexCoordScale__12J3DTevBlock1Fv
	.4byte diffTevStage__12J3DTevBlock1Fv
	.4byte diffTevStageIndirect__12J3DTevBlock1Fv
	.4byte patch__12J3DTevBlock1Fv
	.4byte patchTexNo__12J3DTevBlock1Fv
	.4byte patchTevReg__12J3DTevBlock1Fv
	.4byte patchTexNoAndTexCoordScale__12J3DTevBlock1Fv
	.4byte ptrToIndex__12J3DTevBlock1Fv
	.4byte indexToPtr__12J3DTevBlock1Fv
	.4byte getType__12J3DTevBlock1Fv
	.4byte countDLSize__12J3DTevBlock1Fv
	.4byte setTexNo__12J3DTevBlock1FUlPCUs
	.4byte setTexNo__12J3DTevBlock1FUlUs
	.4byte getTexNo__12J3DTevBlock1CFUl
	.4byte setTevOrder__12J3DTevBlock1FUlPC11J3DTevOrder
	.4byte setTevOrder__12J3DTevBlock1FUl11J3DTevOrder
	.4byte getTevOrder__12J3DTevBlock1FUl
	.4byte setTevColor__11J3DTevBlockFUlPC13J3DGXColorS10
	.4byte setTevColor__11J3DTevBlockFUl13J3DGXColorS10
	.4byte getTevColor__11J3DTevBlockFUl
	.4byte setTevKColor__11J3DTevBlockFUlPC10J3DGXColor
	.4byte setTevKColor__11J3DTevBlockFUl10J3DGXColor
	.4byte getTevKColor__11J3DTevBlockFUl
	.4byte setTevKColorSel__11J3DTevBlockFUlPCUc
	.4byte setTevKColorSel__11J3DTevBlockFUlUc
	.4byte getTevKColorSel__11J3DTevBlockFUl
	.4byte setTevKAlphaSel__11J3DTevBlockFUlPCUc
	.4byte setTevKAlphaSel__11J3DTevBlockFUlUc
	.4byte getTevKAlphaSel__11J3DTevBlockFUl
	.4byte setTevStageNum__12J3DTevBlock1FPCUc
	.4byte setTevStageNum__12J3DTevBlock1FUc
	.4byte getTevStageNum__12J3DTevBlock1CFv
	.4byte setTevStage__12J3DTevBlock1FUlPC11J3DTevStage
	.4byte setTevStage__12J3DTevBlock1FUl11J3DTevStage
	.4byte getTevStage__12J3DTevBlock1FUl
	.4byte setTevSwapModeInfo__11J3DTevBlockFUlPC18J3DTevSwapModeInfo
	.4byte setTevSwapModeInfo__11J3DTevBlockFUl18J3DTevSwapModeInfo
	.4byte setTevSwapModeTable__11J3DTevBlockFUlPC19J3DTevSwapModeTable
	.4byte setTevSwapModeTable__11J3DTevBlockFUl19J3DTevSwapModeTable
	.4byte getTevSwapModeTable__11J3DTevBlockFUl
	.4byte setIndTevStage__12J3DTevBlock1FUlPC14J3DIndTevStage
	.4byte setIndTevStage__12J3DTevBlock1FUl14J3DIndTevStage
	.4byte getIndTevStage__12J3DTevBlock1FUl
	.4byte getTexNoOffset__12J3DTevBlock1CFv
	.4byte getTevRegOffset__11J3DTevBlockCFv
	.4byte setTexNoOffset__11J3DTevBlockFUl
	.4byte setTevRegOffset__11J3DTevBlockFUl
	.4byte __dt__12J3DTevBlock1Fv
.endobj __vt__12J3DTevBlock1
.obj __vt__18J3DTevBlockPatched, global
	.4byte 0
	.4byte 0
	.4byte reset__18J3DTevBlockPatchedFP11J3DTevBlock
	.4byte load__18J3DTevBlockPatchedFv
	.4byte diff__11J3DTevBlockFUl
	.4byte diffTexNo__18J3DTevBlockPatchedFv
	.4byte diffTevReg__18J3DTevBlockPatchedFv
	.4byte diffTexCoordScale__18J3DTevBlockPatchedFv
	.4byte diffTevStage__18J3DTevBlockPatchedFv
	.4byte diffTevStageIndirect__18J3DTevBlockPatchedFv
	.4byte patch__18J3DTevBlockPatchedFv
	.4byte patchTexNo__18J3DTevBlockPatchedFv
	.4byte patchTevReg__18J3DTevBlockPatchedFv
	.4byte patchTexNoAndTexCoordScale__18J3DTevBlockPatchedFv
	.4byte ptrToIndex__18J3DTevBlockPatchedFv
	.4byte indexToPtr__18J3DTevBlockPatchedFv
	.4byte getType__18J3DTevBlockPatchedFv
	.4byte countDLSize__18J3DTevBlockPatchedFv
	.4byte setTexNo__18J3DTevBlockPatchedFUlPCUs
	.4byte setTexNo__18J3DTevBlockPatchedFUlUs
	.4byte getTexNo__18J3DTevBlockPatchedCFUl
	.4byte setTevOrder__18J3DTevBlockPatchedFUlPC11J3DTevOrder
	.4byte setTevOrder__18J3DTevBlockPatchedFUl11J3DTevOrder
	.4byte getTevOrder__18J3DTevBlockPatchedFUl
	.4byte setTevColor__18J3DTevBlockPatchedFUlPC13J3DGXColorS10
	.4byte setTevColor__18J3DTevBlockPatchedFUl13J3DGXColorS10
	.4byte getTevColor__18J3DTevBlockPatchedFUl
	.4byte setTevKColor__18J3DTevBlockPatchedFUlPC10J3DGXColor
	.4byte setTevKColor__18J3DTevBlockPatchedFUl10J3DGXColor
	.4byte getTevKColor__18J3DTevBlockPatchedFUl
	.4byte setTevKColorSel__18J3DTevBlockPatchedFUlPCUc
	.4byte setTevKColorSel__18J3DTevBlockPatchedFUlUc
	.4byte getTevKColorSel__18J3DTevBlockPatchedFUl
	.4byte setTevKAlphaSel__11J3DTevBlockFUlPCUc
	.4byte setTevKAlphaSel__11J3DTevBlockFUlUc
	.4byte getTevKAlphaSel__11J3DTevBlockFUl
	.4byte setTevStageNum__18J3DTevBlockPatchedFPCUc
	.4byte setTevStageNum__18J3DTevBlockPatchedFUc
	.4byte getTevStageNum__18J3DTevBlockPatchedCFv
	.4byte setTevStage__18J3DTevBlockPatchedFUlPC11J3DTevStage
	.4byte setTevStage__18J3DTevBlockPatchedFUl11J3DTevStage
	.4byte getTevStage__18J3DTevBlockPatchedFUl
	.4byte setTevSwapModeInfo__11J3DTevBlockFUlPC18J3DTevSwapModeInfo
	.4byte setTevSwapModeInfo__11J3DTevBlockFUl18J3DTevSwapModeInfo
	.4byte setTevSwapModeTable__11J3DTevBlockFUlPC19J3DTevSwapModeTable
	.4byte setTevSwapModeTable__11J3DTevBlockFUl19J3DTevSwapModeTable
	.4byte getTevSwapModeTable__11J3DTevBlockFUl
	.4byte setIndTevStage__18J3DTevBlockPatchedFUlPC14J3DIndTevStage
	.4byte setIndTevStage__18J3DTevBlockPatchedFUl14J3DIndTevStage
	.4byte getIndTevStage__18J3DTevBlockPatchedFUl
	.4byte getTexNoOffset__18J3DTevBlockPatchedCFv
	.4byte getTevRegOffset__18J3DTevBlockPatchedCFv
	.4byte setTexNoOffset__11J3DTevBlockFUl
	.4byte setTevRegOffset__18J3DTevBlockPatchedFUl
	.4byte __dt__18J3DTevBlockPatchedFv
.endobj __vt__18J3DTevBlockPatched
.obj __vt__19J3DTexGenBlockBasic, global
	.4byte 0
	.4byte 0
	.4byte reset__19J3DTexGenBlockBasicFP14J3DTexGenBlock
	.4byte calc__21J3DTexGenBlockPatchedFPA4_Cf
	.4byte calcWithoutViewMtx__21J3DTexGenBlockPatchedFPA4_Cf
	.4byte calcPostTexMtx__21J3DTexGenBlockPatchedFPA4_Cf
	.4byte calcPostTexMtxWithoutViewMtx__21J3DTexGenBlockPatchedFPA4_Cf
	.4byte load__19J3DTexGenBlockBasicFv
	.4byte patch__19J3DTexGenBlockBasicFv
	.4byte diff__21J3DTexGenBlockPatchedFUl
	.4byte diffTexMtx__21J3DTexGenBlockPatchedFv
	.4byte diffTexGen__21J3DTexGenBlockPatchedFv
	.4byte countDLSize__19J3DTexGenBlockBasicFv
	.4byte getType__19J3DTexGenBlockBasicFv
	.4byte setTexGenNum__21J3DTexGenBlockPatchedFPCUl
	.4byte setTexGenNum__21J3DTexGenBlockPatchedFUl
	.4byte getTexGenNum__21J3DTexGenBlockPatchedCFv
	.4byte setTexCoord__21J3DTexGenBlockPatchedFUlPC11J3DTexCoord
	.4byte getTexCoord__21J3DTexGenBlockPatchedFUl
	.4byte setTexMtx__21J3DTexGenBlockPatchedFUlP9J3DTexMtx
	.4byte getTexMtx__21J3DTexGenBlockPatchedFUl
	.4byte setNBTScale__19J3DTexGenBlockBasicFPC11J3DNBTScale
	.4byte setNBTScale__19J3DTexGenBlockBasicF11J3DNBTScale
	.4byte getNBTScale__19J3DTexGenBlockBasicFv
	.4byte getTexMtxOffset__21J3DTexGenBlockPatchedCFv
	.4byte setTexMtxOffset__21J3DTexGenBlockPatchedFUl
	.4byte __dt__19J3DTexGenBlockBasicFv
.endobj __vt__19J3DTexGenBlockBasic
.obj __vt__15J3DTexGenBlock4, global
	.4byte 0
	.4byte 0
	.4byte reset__15J3DTexGenBlock4FP14J3DTexGenBlock
	.4byte calc__21J3DTexGenBlockPatchedFPA4_Cf
	.4byte calcWithoutViewMtx__21J3DTexGenBlockPatchedFPA4_Cf
	.4byte calcPostTexMtx__21J3DTexGenBlockPatchedFPA4_Cf
	.4byte calcPostTexMtxWithoutViewMtx__21J3DTexGenBlockPatchedFPA4_Cf
	.4byte load__15J3DTexGenBlock4Fv
	.4byte patch__15J3DTexGenBlock4Fv
	.4byte diff__21J3DTexGenBlockPatchedFUl
	.4byte diffTexMtx__21J3DTexGenBlockPatchedFv
	.4byte diffTexGen__21J3DTexGenBlockPatchedFv
	.4byte countDLSize__15J3DTexGenBlock4Fv
	.4byte getType__15J3DTexGenBlock4Fv
	.4byte setTexGenNum__21J3DTexGenBlockPatchedFPCUl
	.4byte setTexGenNum__21J3DTexGenBlockPatchedFUl
	.4byte getTexGenNum__21J3DTexGenBlockPatchedCFv
	.4byte setTexCoord__21J3DTexGenBlockPatchedFUlPC11J3DTexCoord
	.4byte getTexCoord__21J3DTexGenBlockPatchedFUl
	.4byte setTexMtx__21J3DTexGenBlockPatchedFUlP9J3DTexMtx
	.4byte getTexMtx__21J3DTexGenBlockPatchedFUl
	.4byte setNBTScale__15J3DTexGenBlock4FPC11J3DNBTScale
	.4byte setNBTScale__15J3DTexGenBlock4F11J3DNBTScale
	.4byte getNBTScale__15J3DTexGenBlock4Fv
	.4byte getTexMtxOffset__21J3DTexGenBlockPatchedCFv
	.4byte setTexMtxOffset__21J3DTexGenBlockPatchedFUl
	.4byte __dt__15J3DTexGenBlock4Fv
.endobj __vt__15J3DTexGenBlock4
.obj __vt__21J3DTexGenBlockPatched, global
	.4byte 0
	.4byte 0
	.4byte reset__21J3DTexGenBlockPatchedFP14J3DTexGenBlock
	.4byte calc__21J3DTexGenBlockPatchedFPA4_Cf
	.4byte calcWithoutViewMtx__21J3DTexGenBlockPatchedFPA4_Cf
	.4byte calcPostTexMtx__21J3DTexGenBlockPatchedFPA4_Cf
	.4byte calcPostTexMtxWithoutViewMtx__21J3DTexGenBlockPatchedFPA4_Cf
	.4byte load__21J3DTexGenBlockPatchedFv
	.4byte patch__21J3DTexGenBlockPatchedFv
	.4byte diff__21J3DTexGenBlockPatchedFUl
	.4byte diffTexMtx__21J3DTexGenBlockPatchedFv
	.4byte diffTexGen__21J3DTexGenBlockPatchedFv
	.4byte countDLSize__21J3DTexGenBlockPatchedFv
	.4byte getType__21J3DTexGenBlockPatchedFv
	.4byte setTexGenNum__21J3DTexGenBlockPatchedFPCUl
	.4byte setTexGenNum__21J3DTexGenBlockPatchedFUl
	.4byte getTexGenNum__21J3DTexGenBlockPatchedCFv
	.4byte setTexCoord__21J3DTexGenBlockPatchedFUlPC11J3DTexCoord
	.4byte getTexCoord__21J3DTexGenBlockPatchedFUl
	.4byte setTexMtx__21J3DTexGenBlockPatchedFUlP9J3DTexMtx
	.4byte getTexMtx__21J3DTexGenBlockPatchedFUl
	.4byte setNBTScale__14J3DTexGenBlockFPC11J3DNBTScale
	.4byte setNBTScale__14J3DTexGenBlockF11J3DNBTScale
	.4byte getNBTScale__14J3DTexGenBlockFv
	.4byte getTexMtxOffset__21J3DTexGenBlockPatchedCFv
	.4byte setTexMtxOffset__21J3DTexGenBlockPatchedFUl
	.4byte __dt__21J3DTexGenBlockPatchedFv
.endobj __vt__21J3DTexGenBlockPatched
.obj __vt__20J3DColorBlockLightOn, global
	.4byte 0
	.4byte 0
	.4byte load__20J3DColorBlockLightOnFv
	.4byte reset__20J3DColorBlockLightOnFP13J3DColorBlock
	.4byte patch__20J3DColorBlockLightOnFv
	.4byte patchMatColor__20J3DColorBlockLightOnFv
	.4byte patchLight__20J3DColorBlockLightOnFv
	.4byte diff__20J3DColorBlockLightOnFUl
	.4byte diffMatColor__20J3DColorBlockLightOnFv
	.4byte diffLight__20J3DColorBlockLightOnFv
	.4byte countDLSize__20J3DColorBlockLightOnFv
	.4byte getType__20J3DColorBlockLightOnFv
	.4byte setMatColor__20J3DColorBlockLightOnFUlPC10J3DGXColor
	.4byte setMatColor__20J3DColorBlockLightOnFUl10J3DGXColor
	.4byte getMatColor__20J3DColorBlockLightOnFUl
	.4byte setAmbColor__20J3DColorBlockLightOnFUlPC10J3DGXColor
	.4byte setAmbColor__20J3DColorBlockLightOnFUl10J3DGXColor
	.4byte getAmbColor__20J3DColorBlockLightOnFUl
	.4byte setColorChanNum__20J3DColorBlockLightOnFUc
	.4byte setColorChanNum__20J3DColorBlockLightOnFPCUc
	.4byte getColorChanNum__20J3DColorBlockLightOnCFv
	.4byte setColorChan__20J3DColorBlockLightOnFUlRC12J3DColorChan
	.4byte setColorChan__20J3DColorBlockLightOnFUlPC12J3DColorChan
	.4byte getColorChan__20J3DColorBlockLightOnFUl
	.4byte setLight__20J3DColorBlockLightOnFUlP11J3DLightObj
	.4byte getLight__20J3DColorBlockLightOnFUl
	.4byte setCullMode__20J3DColorBlockLightOnFPCUc
	.4byte setCullMode__20J3DColorBlockLightOnFUc
	.4byte getCullMode__20J3DColorBlockLightOnCFv
	.4byte getMatColorOffset__20J3DColorBlockLightOnCFv
	.4byte getColorChanOffset__20J3DColorBlockLightOnCFv
	.4byte setMatColorOffset__20J3DColorBlockLightOnFUl
	.4byte setColorChanOffset__20J3DColorBlockLightOnFUl
	.4byte __dt__20J3DColorBlockLightOnFv
.endobj __vt__20J3DColorBlockLightOn
.obj __vt__22J3DColorBlockAmbientOn, global
	.4byte 0
	.4byte 0
	.4byte load__22J3DColorBlockAmbientOnFv
	.4byte reset__22J3DColorBlockAmbientOnFP13J3DColorBlock
	.4byte patch__21J3DColorBlockLightOffFv
	.4byte patchMatColor__21J3DColorBlockLightOffFv
	.4byte patchLight__21J3DColorBlockLightOffFv
	.4byte diff__21J3DColorBlockLightOffFUl
	.4byte diffMatColor__21J3DColorBlockLightOffFv
	.4byte diffLight__21J3DColorBlockLightOffFv
	.4byte countDLSize__22J3DColorBlockAmbientOnFv
	.4byte getType__22J3DColorBlockAmbientOnFv
	.4byte setMatColor__21J3DColorBlockLightOffFUlPC10J3DGXColor
	.4byte setMatColor__21J3DColorBlockLightOffFUl10J3DGXColor
	.4byte getMatColor__21J3DColorBlockLightOffFUl
	.4byte setAmbColor__22J3DColorBlockAmbientOnFUlPC10J3DGXColor
	.4byte setAmbColor__22J3DColorBlockAmbientOnFUl10J3DGXColor
	.4byte getAmbColor__22J3DColorBlockAmbientOnFUl
	.4byte setColorChanNum__21J3DColorBlockLightOffFUc
	.4byte setColorChanNum__21J3DColorBlockLightOffFPCUc
	.4byte getColorChanNum__21J3DColorBlockLightOffCFv
	.4byte setColorChan__21J3DColorBlockLightOffFUlRC12J3DColorChan
	.4byte setColorChan__21J3DColorBlockLightOffFUlPC12J3DColorChan
	.4byte getColorChan__21J3DColorBlockLightOffFUl
	.4byte setLight__13J3DColorBlockFUlP11J3DLightObj
	.4byte getLight__13J3DColorBlockFUl
	.4byte setCullMode__21J3DColorBlockLightOffFPCUc
	.4byte setCullMode__21J3DColorBlockLightOffFUc
	.4byte getCullMode__21J3DColorBlockLightOffCFv
	.4byte getMatColorOffset__21J3DColorBlockLightOffCFv
	.4byte getColorChanOffset__21J3DColorBlockLightOffCFv
	.4byte setMatColorOffset__21J3DColorBlockLightOffFUl
	.4byte setColorChanOffset__21J3DColorBlockLightOffFUl
	.4byte __dt__22J3DColorBlockAmbientOnFv
.endobj __vt__22J3DColorBlockAmbientOn
.obj __vt__13J3DPEBlockXlu, global
	.4byte 0
	.4byte 0
	.4byte reset__10J3DPEBlockFP10J3DPEBlock
	.4byte load__13J3DPEBlockXluFv
	.4byte patch__10J3DPEBlockFv
	.4byte diff__10J3DPEBlockFUl
	.4byte diffFog__10J3DPEBlockFv
	.4byte diffBlend__10J3DPEBlockFv
	.4byte countDLSize__13J3DPEBlockXluFv
	.4byte getType__13J3DPEBlockXluFv
	.4byte setFog__10J3DPEBlockF6J3DFog
	.4byte setFog__10J3DPEBlockFP6J3DFog
	.4byte getFog__10J3DPEBlockFv
	.4byte setAlphaComp__10J3DPEBlockFPC12J3DAlphaComp
	.4byte setAlphaComp__10J3DPEBlockFRC12J3DAlphaComp
	.4byte getAlphaComp__10J3DPEBlockFv
	.4byte setBlend__10J3DPEBlockFPC8J3DBlend
	.4byte setBlend__10J3DPEBlockFRC8J3DBlend
	.4byte getBlend__10J3DPEBlockFv
	.4byte setZMode__10J3DPEBlockFPC8J3DZMode
	.4byte setZMode__10J3DPEBlockF8J3DZMode
	.4byte getZMode__10J3DPEBlockFv
	.4byte setZCompLoc__10J3DPEBlockFPCUc
	.4byte setZCompLoc__10J3DPEBlockFUc
	.4byte getZCompLoc__10J3DPEBlockCFv
	.4byte setDither__10J3DPEBlockFPCUc
	.4byte setDither__10J3DPEBlockFUc
	.4byte getDither__10J3DPEBlockCFv
	.4byte getFogOffset__10J3DPEBlockCFv
	.4byte setFogOffset__10J3DPEBlockFUl
	.4byte __dt__13J3DPEBlockXluFv
.endobj __vt__13J3DPEBlockXlu
.obj __vt__17J3DPEBlockTexEdge, global
	.4byte 0
	.4byte 0
	.4byte reset__10J3DPEBlockFP10J3DPEBlock
	.4byte load__17J3DPEBlockTexEdgeFv
	.4byte patch__10J3DPEBlockFv
	.4byte diff__10J3DPEBlockFUl
	.4byte diffFog__10J3DPEBlockFv
	.4byte diffBlend__10J3DPEBlockFv
	.4byte countDLSize__17J3DPEBlockTexEdgeFv
	.4byte getType__17J3DPEBlockTexEdgeFv
	.4byte setFog__10J3DPEBlockF6J3DFog
	.4byte setFog__10J3DPEBlockFP6J3DFog
	.4byte getFog__10J3DPEBlockFv
	.4byte setAlphaComp__10J3DPEBlockFPC12J3DAlphaComp
	.4byte setAlphaComp__10J3DPEBlockFRC12J3DAlphaComp
	.4byte getAlphaComp__10J3DPEBlockFv
	.4byte setBlend__10J3DPEBlockFPC8J3DBlend
	.4byte setBlend__10J3DPEBlockFRC8J3DBlend
	.4byte getBlend__10J3DPEBlockFv
	.4byte setZMode__10J3DPEBlockFPC8J3DZMode
	.4byte setZMode__10J3DPEBlockF8J3DZMode
	.4byte getZMode__10J3DPEBlockFv
	.4byte setZCompLoc__10J3DPEBlockFPCUc
	.4byte setZCompLoc__10J3DPEBlockFUc
	.4byte getZCompLoc__10J3DPEBlockCFv
	.4byte setDither__10J3DPEBlockFPCUc
	.4byte setDither__10J3DPEBlockFUc
	.4byte getDither__10J3DPEBlockCFv
	.4byte getFogOffset__10J3DPEBlockCFv
	.4byte setFogOffset__10J3DPEBlockFUl
	.4byte __dt__17J3DPEBlockTexEdgeFv
.endobj __vt__17J3DPEBlockTexEdge
.obj __vt__13J3DPEBlockOpa, global
	.4byte 0
	.4byte 0
	.4byte reset__10J3DPEBlockFP10J3DPEBlock
	.4byte load__13J3DPEBlockOpaFv
	.4byte patch__10J3DPEBlockFv
	.4byte diff__10J3DPEBlockFUl
	.4byte diffFog__10J3DPEBlockFv
	.4byte diffBlend__10J3DPEBlockFv
	.4byte countDLSize__13J3DPEBlockOpaFv
	.4byte getType__13J3DPEBlockOpaFv
	.4byte setFog__10J3DPEBlockF6J3DFog
	.4byte setFog__10J3DPEBlockFP6J3DFog
	.4byte getFog__10J3DPEBlockFv
	.4byte setAlphaComp__10J3DPEBlockFPC12J3DAlphaComp
	.4byte setAlphaComp__10J3DPEBlockFRC12J3DAlphaComp
	.4byte getAlphaComp__10J3DPEBlockFv
	.4byte setBlend__10J3DPEBlockFPC8J3DBlend
	.4byte setBlend__10J3DPEBlockFRC8J3DBlend
	.4byte getBlend__10J3DPEBlockFv
	.4byte setZMode__10J3DPEBlockFPC8J3DZMode
	.4byte setZMode__10J3DPEBlockF8J3DZMode
	.4byte getZMode__10J3DPEBlockFv
	.4byte setZCompLoc__10J3DPEBlockFPCUc
	.4byte setZCompLoc__10J3DPEBlockFUc
	.4byte getZCompLoc__10J3DPEBlockCFv
	.4byte setDither__10J3DPEBlockFPCUc
	.4byte setDither__10J3DPEBlockFUc
	.4byte getDither__10J3DPEBlockCFv
	.4byte getFogOffset__10J3DPEBlockCFv
	.4byte setFogOffset__10J3DPEBlockFUl
	.4byte __dt__13J3DPEBlockOpaFv
.endobj __vt__13J3DPEBlockOpa
.obj __vt__15J3DIndBlockFull, global
	.4byte 0
	.4byte 0
	.4byte reset__15J3DIndBlockFullFP11J3DIndBlock
	.4byte diff__15J3DIndBlockFullFUl
	.4byte load__15J3DIndBlockFullFv
	.4byte countDLSize__15J3DIndBlockFullFv
	.4byte getType__15J3DIndBlockFullFv
	.4byte setIndTexStageNum__15J3DIndBlockFullFUc
	.4byte getIndTexStageNum__15J3DIndBlockFullCFv
	.4byte setIndTexOrder__15J3DIndBlockFullFUl14J3DIndTexOrder
	.4byte setIndTexOrder__15J3DIndBlockFullFUlPC14J3DIndTexOrder
	.4byte getIndTexOrder__15J3DIndBlockFullFUl
	.4byte setIndTexMtx__15J3DIndBlockFullFUlPC12J3DIndTexMtx
	.4byte setIndTexMtx__15J3DIndBlockFullFUl12J3DIndTexMtx
	.4byte getIndTexMtx__15J3DIndBlockFullFUl
	.4byte setIndTexCoordScale__15J3DIndBlockFullFUlPC19J3DIndTexCoordScale
	.4byte setIndTexCoordScale__15J3DIndBlockFullFUl19J3DIndTexCoordScale
	.4byte getIndTexCoordScale__15J3DIndBlockFullFUl
	.4byte __dt__15J3DIndBlockFullFv
.endobj __vt__15J3DIndBlockFull
.obj __vt__11J3DTevBlock, global
	.4byte 0
	.4byte 0
	.4byte reset__11J3DTevBlockFP11J3DTevBlock
	.4byte load__11J3DTevBlockFv
	.4byte diff__11J3DTevBlockFUl
	.4byte diffTexNo__11J3DTevBlockFv
	.4byte diffTevReg__11J3DTevBlockFv
	.4byte diffTexCoordScale__11J3DTevBlockFv
	.4byte diffTevStage__11J3DTevBlockFv
	.4byte diffTevStageIndirect__11J3DTevBlockFv
	.4byte patch__11J3DTevBlockFv
	.4byte patchTexNo__11J3DTevBlockFv
	.4byte patchTevReg__11J3DTevBlockFv
	.4byte patchTexNoAndTexCoordScale__11J3DTevBlockFv
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte countDLSize__11J3DTevBlockFv
	.4byte setTexNo__11J3DTevBlockFUlPCUs
	.4byte setTexNo__11J3DTevBlockFUlUs
	.4byte getTexNo__11J3DTevBlockCFUl
	.4byte setTevOrder__11J3DTevBlockFUlPC11J3DTevOrder
	.4byte setTevOrder__11J3DTevBlockFUl11J3DTevOrder
	.4byte getTevOrder__11J3DTevBlockFUl
	.4byte setTevColor__11J3DTevBlockFUlPC13J3DGXColorS10
	.4byte setTevColor__11J3DTevBlockFUl13J3DGXColorS10
	.4byte getTevColor__11J3DTevBlockFUl
	.4byte setTevKColor__11J3DTevBlockFUlPC10J3DGXColor
	.4byte setTevKColor__11J3DTevBlockFUl10J3DGXColor
	.4byte getTevKColor__11J3DTevBlockFUl
	.4byte setTevKColorSel__11J3DTevBlockFUlPCUc
	.4byte setTevKColorSel__11J3DTevBlockFUlUc
	.4byte getTevKColorSel__11J3DTevBlockFUl
	.4byte setTevKAlphaSel__11J3DTevBlockFUlPCUc
	.4byte setTevKAlphaSel__11J3DTevBlockFUlUc
	.4byte getTevKAlphaSel__11J3DTevBlockFUl
	.4byte setTevStageNum__11J3DTevBlockFPCUc
	.4byte setTevStageNum__11J3DTevBlockFUc
	.4byte getTevStageNum__11J3DTevBlockCFv
	.4byte setTevStage__11J3DTevBlockFUlPC11J3DTevStage
	.4byte setTevStage__11J3DTevBlockFUl11J3DTevStage
	.4byte getTevStage__11J3DTevBlockFUl
	.4byte setTevSwapModeInfo__11J3DTevBlockFUlPC18J3DTevSwapModeInfo
	.4byte setTevSwapModeInfo__11J3DTevBlockFUl18J3DTevSwapModeInfo
	.4byte setTevSwapModeTable__11J3DTevBlockFUlPC19J3DTevSwapModeTable
	.4byte setTevSwapModeTable__11J3DTevBlockFUl19J3DTevSwapModeTable
	.4byte getTevSwapModeTable__11J3DTevBlockFUl
	.4byte setIndTevStage__11J3DTevBlockFUlPC14J3DIndTevStage
	.4byte setIndTevStage__11J3DTevBlockFUl14J3DIndTevStage
	.4byte getIndTevStage__11J3DTevBlockFUl
	.4byte getTexNoOffset__11J3DTevBlockCFv
	.4byte getTevRegOffset__11J3DTevBlockCFv
	.4byte setTexNoOffset__11J3DTevBlockFUl
	.4byte setTevRegOffset__11J3DTevBlockFUl
	.4byte __dt__11J3DTevBlockFv
.endobj __vt__11J3DTevBlock
.obj __vt__21J3DColorBlockLightOff, global
	.4byte 0
	.4byte 0
	.4byte load__21J3DColorBlockLightOffFv
	.4byte reset__21J3DColorBlockLightOffFP13J3DColorBlock
	.4byte patch__21J3DColorBlockLightOffFv
	.4byte patchMatColor__21J3DColorBlockLightOffFv
	.4byte patchLight__21J3DColorBlockLightOffFv
	.4byte diff__21J3DColorBlockLightOffFUl
	.4byte diffMatColor__21J3DColorBlockLightOffFv
	.4byte diffLight__21J3DColorBlockLightOffFv
	.4byte countDLSize__21J3DColorBlockLightOffFv
	.4byte getType__21J3DColorBlockLightOffFv
	.4byte setMatColor__21J3DColorBlockLightOffFUlPC10J3DGXColor
	.4byte setMatColor__21J3DColorBlockLightOffFUl10J3DGXColor
	.4byte getMatColor__21J3DColorBlockLightOffFUl
	.4byte setAmbColor__13J3DColorBlockFUlPC10J3DGXColor
	.4byte setAmbColor__13J3DColorBlockFUl10J3DGXColor
	.4byte getAmbColor__13J3DColorBlockFUl
	.4byte setColorChanNum__21J3DColorBlockLightOffFUc
	.4byte setColorChanNum__21J3DColorBlockLightOffFPCUc
	.4byte getColorChanNum__21J3DColorBlockLightOffCFv
	.4byte setColorChan__21J3DColorBlockLightOffFUlRC12J3DColorChan
	.4byte setColorChan__21J3DColorBlockLightOffFUlPC12J3DColorChan
	.4byte getColorChan__21J3DColorBlockLightOffFUl
	.4byte setLight__13J3DColorBlockFUlP11J3DLightObj
	.4byte getLight__13J3DColorBlockFUl
	.4byte setCullMode__21J3DColorBlockLightOffFPCUc
	.4byte setCullMode__21J3DColorBlockLightOffFUc
	.4byte getCullMode__21J3DColorBlockLightOffCFv
	.4byte getMatColorOffset__21J3DColorBlockLightOffCFv
	.4byte getColorChanOffset__21J3DColorBlockLightOffCFv
	.4byte setMatColorOffset__21J3DColorBlockLightOffFUl
	.4byte setColorChanOffset__21J3DColorBlockLightOffFUl
	.4byte __dt__21J3DColorBlockLightOffFv
.endobj __vt__21J3DColorBlockLightOff

.section .sdata, "wa"  # 0x80514680 - 0x80514D80
.balign 8
.obj SizeOfLoadMatColors, local
	.4byte 0xd
.endobj SizeOfLoadMatColors
.obj SizeOfLoadAmbColors, local
	.4byte 0xd
.endobj SizeOfLoadAmbColors
.obj SizeOfLoadColorChans, local
	.4byte 0x15
.endobj SizeOfLoadColorChans

.section .sbss # 0x80514D80 - 0x80516360
.balign 8
.obj SizeOfJ3DColorBlockLightOffLoad, local
	.skip 0x4
.endobj SizeOfJ3DColorBlockLightOffLoad
.obj SizeOfJ3DColorBlockAmbientOnLoad, local
	.skip 0x4
.endobj SizeOfJ3DColorBlockAmbientOnLoad

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
.obj lbl_80516AD8, local
	.4byte 0x02000201
.endobj lbl_80516AD8
.obj lbl_80516ADC, local
	.float 0.0
.endobj lbl_80516ADC

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.fn initialize__21J3DColorBlockLightOffFv, global
/* 800771C0 00074100  38 E0 00 00 */	li r7, 0
/* 800771C4 00074104  39 02 86 60 */	addi r8, r2, j3dDefaultColInfo@sda21
/* 800771C8 00074108  98 E3 00 0C */	stb r7, 0xc(r3)
/* 800771CC 0007410C  88 C2 86 60 */	lbz r6, j3dDefaultColInfo@sda21(r2)
/* 800771D0 00074110  88 A8 00 01 */	lbz r5, 1(r8)
/* 800771D4 00074114  98 C3 00 04 */	stb r6, 4(r3)
/* 800771D8 00074118  88 88 00 02 */	lbz r4, 2(r8)
/* 800771DC 0007411C  98 A3 00 05 */	stb r5, 5(r3)
/* 800771E0 00074120  88 08 00 03 */	lbz r0, 3(r8)
/* 800771E4 00074124  98 83 00 06 */	stb r4, 6(r3)
/* 800771E8 00074128  98 03 00 07 */	stb r0, 7(r3)
/* 800771EC 0007412C  98 C3 00 08 */	stb r6, 8(r3)
/* 800771F0 00074130  98 A3 00 09 */	stb r5, 9(r3)
/* 800771F4 00074134  98 83 00 0A */	stb r4, 0xa(r3)
/* 800771F8 00074138  98 03 00 0B */	stb r0, 0xb(r3)
/* 800771FC 0007413C  90 E3 00 18 */	stw r7, 0x18(r3)
/* 80077200 00074140  90 E3 00 1C */	stw r7, 0x1c(r3)
/* 80077204 00074144  4E 80 00 20 */	blr 
.endfn initialize__21J3DColorBlockLightOffFv

.fn initialize__22J3DColorBlockAmbientOnFv, global
/* 80077208 00074148  39 20 00 00 */	li r9, 0
/* 8007720C 0007414C  38 A2 86 60 */	addi r5, r2, j3dDefaultColInfo@sda21
/* 80077210 00074150  99 23 00 0C */	stb r9, 0xc(r3)
/* 80077214 00074154  39 42 86 64 */	addi r10, r2, j3dDefaultAmbInfo@sda21
/* 80077218 00074158  88 82 86 60 */	lbz r4, j3dDefaultColInfo@sda21(r2)
/* 8007721C 0007415C  88 05 00 01 */	lbz r0, 1(r5)
/* 80077220 00074160  98 83 00 04 */	stb r4, 4(r3)
/* 80077224 00074164  89 05 00 02 */	lbz r8, 2(r5)
/* 80077228 00074168  98 03 00 05 */	stb r0, 5(r3)
/* 8007722C 0007416C  88 E5 00 03 */	lbz r7, 3(r5)
/* 80077230 00074170  99 03 00 06 */	stb r8, 6(r3)
/* 80077234 00074174  88 C2 86 64 */	lbz r6, j3dDefaultAmbInfo@sda21(r2)
/* 80077238 00074178  98 E3 00 07 */	stb r7, 7(r3)
/* 8007723C 0007417C  88 AA 00 01 */	lbz r5, 1(r10)
/* 80077240 00074180  98 83 00 08 */	stb r4, 8(r3)
/* 80077244 00074184  88 8A 00 02 */	lbz r4, 2(r10)
/* 80077248 00074188  98 03 00 09 */	stb r0, 9(r3)
/* 8007724C 0007418C  88 0A 00 03 */	lbz r0, 3(r10)
/* 80077250 00074190  99 03 00 0A */	stb r8, 0xa(r3)
/* 80077254 00074194  98 E3 00 0B */	stb r7, 0xb(r3)
/* 80077258 00074198  98 C3 00 20 */	stb r6, 0x20(r3)
/* 8007725C 0007419C  98 A3 00 21 */	stb r5, 0x21(r3)
/* 80077260 000741A0  98 83 00 22 */	stb r4, 0x22(r3)
/* 80077264 000741A4  98 03 00 23 */	stb r0, 0x23(r3)
/* 80077268 000741A8  98 C3 00 24 */	stb r6, 0x24(r3)
/* 8007726C 000741AC  98 A3 00 25 */	stb r5, 0x25(r3)
/* 80077270 000741B0  98 83 00 26 */	stb r4, 0x26(r3)
/* 80077274 000741B4  98 03 00 27 */	stb r0, 0x27(r3)
/* 80077278 000741B8  91 23 00 18 */	stw r9, 0x18(r3)
/* 8007727C 000741BC  91 23 00 1C */	stw r9, 0x1c(r3)
/* 80077280 000741C0  4E 80 00 20 */	blr 
.endfn initialize__22J3DColorBlockAmbientOnFv

.fn initialize__20J3DColorBlockLightOnFv, global
/* 80077284 000741C4  39 20 00 00 */	li r9, 0
/* 80077288 000741C8  38 A2 86 60 */	addi r5, r2, j3dDefaultColInfo@sda21
/* 8007728C 000741CC  99 23 00 14 */	stb r9, 0x14(r3)
/* 80077290 000741D0  39 42 86 64 */	addi r10, r2, j3dDefaultAmbInfo@sda21
/* 80077294 000741D4  88 82 86 60 */	lbz r4, j3dDefaultColInfo@sda21(r2)
/* 80077298 000741D8  88 05 00 01 */	lbz r0, 1(r5)
/* 8007729C 000741DC  98 83 00 04 */	stb r4, 4(r3)
/* 800772A0 000741E0  89 05 00 02 */	lbz r8, 2(r5)
/* 800772A4 000741E4  98 03 00 05 */	stb r0, 5(r3)
/* 800772A8 000741E8  88 E5 00 03 */	lbz r7, 3(r5)
/* 800772AC 000741EC  99 03 00 06 */	stb r8, 6(r3)
/* 800772B0 000741F0  88 C2 86 64 */	lbz r6, j3dDefaultAmbInfo@sda21(r2)
/* 800772B4 000741F4  98 E3 00 07 */	stb r7, 7(r3)
/* 800772B8 000741F8  88 AA 00 01 */	lbz r5, 1(r10)
/* 800772BC 000741FC  98 83 00 08 */	stb r4, 8(r3)
/* 800772C0 00074200  88 8A 00 02 */	lbz r4, 2(r10)
/* 800772C4 00074204  98 03 00 09 */	stb r0, 9(r3)
/* 800772C8 00074208  88 0A 00 03 */	lbz r0, 3(r10)
/* 800772CC 0007420C  99 03 00 0A */	stb r8, 0xa(r3)
/* 800772D0 00074210  98 E3 00 0B */	stb r7, 0xb(r3)
/* 800772D4 00074214  98 C3 00 0C */	stb r6, 0xc(r3)
/* 800772D8 00074218  98 A3 00 0D */	stb r5, 0xd(r3)
/* 800772DC 0007421C  98 83 00 0E */	stb r4, 0xe(r3)
/* 800772E0 00074220  98 03 00 0F */	stb r0, 0xf(r3)
/* 800772E4 00074224  98 C3 00 10 */	stb r6, 0x10(r3)
/* 800772E8 00074228  98 A3 00 11 */	stb r5, 0x11(r3)
/* 800772EC 0007422C  98 83 00 12 */	stb r4, 0x12(r3)
/* 800772F0 00074230  98 03 00 13 */	stb r0, 0x13(r3)
/* 800772F4 00074234  91 23 00 20 */	stw r9, 0x20(r3)
/* 800772F8 00074238  91 23 00 24 */	stw r9, 0x24(r3)
/* 800772FC 0007423C  91 23 00 28 */	stw r9, 0x28(r3)
/* 80077300 00074240  91 23 00 2C */	stw r9, 0x2c(r3)
/* 80077304 00074244  91 23 00 30 */	stw r9, 0x30(r3)
/* 80077308 00074248  91 23 00 34 */	stw r9, 0x34(r3)
/* 8007730C 0007424C  91 23 00 38 */	stw r9, 0x38(r3)
/* 80077310 00074250  91 23 00 3C */	stw r9, 0x3c(r3)
/* 80077314 00074254  91 23 00 44 */	stw r9, 0x44(r3)
/* 80077318 00074258  91 23 00 48 */	stw r9, 0x48(r3)
/* 8007731C 0007425C  4E 80 00 20 */	blr 
.endfn initialize__20J3DColorBlockLightOnFv

.fn initialize__21J3DTexGenBlockPatchedFv, global
/* 80077320 00074260  38 00 00 00 */	li r0, 0
/* 80077324 00074264  90 03 00 04 */	stw r0, 4(r3)
/* 80077328 00074268  90 03 00 38 */	stw r0, 0x38(r3)
/* 8007732C 0007426C  90 03 00 3C */	stw r0, 0x3c(r3)
/* 80077330 00074270  90 03 00 40 */	stw r0, 0x40(r3)
/* 80077334 00074274  90 03 00 44 */	stw r0, 0x44(r3)
/* 80077338 00074278  90 03 00 48 */	stw r0, 0x48(r3)
/* 8007733C 0007427C  90 03 00 4C */	stw r0, 0x4c(r3)
/* 80077340 00074280  90 03 00 50 */	stw r0, 0x50(r3)
/* 80077344 00074284  90 03 00 54 */	stw r0, 0x54(r3)
/* 80077348 00074288  90 03 00 58 */	stw r0, 0x58(r3)
/* 8007734C 0007428C  4E 80 00 20 */	blr 
.endfn initialize__21J3DTexGenBlockPatchedFv

.fn initialize__15J3DTexGenBlock4Fv, global
/* 80077350 00074290  38 00 00 00 */	li r0, 0
/* 80077354 00074294  90 03 00 04 */	stw r0, 4(r3)
/* 80077358 00074298  90 03 00 38 */	stw r0, 0x38(r3)
/* 8007735C 0007429C  90 03 00 3C */	stw r0, 0x3c(r3)
/* 80077360 000742A0  90 03 00 40 */	stw r0, 0x40(r3)
/* 80077364 000742A4  90 03 00 44 */	stw r0, 0x44(r3)
/* 80077368 000742A8  90 03 00 58 */	stw r0, 0x58(r3)
/* 8007736C 000742AC  4E 80 00 20 */	blr 
.endfn initialize__15J3DTexGenBlock4Fv

.fn initialize__19J3DTexGenBlockBasicFv, global
/* 80077370 000742B0  38 00 00 00 */	li r0, 0
/* 80077374 000742B4  90 03 00 04 */	stw r0, 4(r3)
/* 80077378 000742B8  90 03 00 38 */	stw r0, 0x38(r3)
/* 8007737C 000742BC  90 03 00 3C */	stw r0, 0x3c(r3)
/* 80077380 000742C0  90 03 00 40 */	stw r0, 0x40(r3)
/* 80077384 000742C4  90 03 00 44 */	stw r0, 0x44(r3)
/* 80077388 000742C8  90 03 00 48 */	stw r0, 0x48(r3)
/* 8007738C 000742CC  90 03 00 4C */	stw r0, 0x4c(r3)
/* 80077390 000742D0  90 03 00 50 */	stw r0, 0x50(r3)
/* 80077394 000742D4  90 03 00 54 */	stw r0, 0x54(r3)
/* 80077398 000742D8  90 03 00 58 */	stw r0, 0x58(r3)
/* 8007739C 000742DC  4E 80 00 20 */	blr 
.endfn initialize__19J3DTexGenBlockBasicFv

.fn initialize__15J3DTevBlockNullFv, global
/* 800773A0 000742E0  38 00 00 00 */	li r0, 0
/* 800773A4 000742E4  90 03 00 04 */	stw r0, 4(r3)
/* 800773A8 000742E8  4E 80 00 20 */	blr 
.endfn initialize__15J3DTevBlockNullFv

.fn initialize__18J3DTevBlockPatchedFv, global
/* 800773AC 000742EC  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 800773B0 000742F0  3C 80 00 01 */	lis r4, 0x0000FFFF@ha
/* 800773B4 000742F4  39 64 FF FF */	addi r11, r4, 0x0000FFFF@l
/* 800773B8 000742F8  39 40 00 C0 */	li r10, 0xc0
/* 800773BC 000742FC  BE 41 00 08 */	stmw r18, 8(r1)
/* 800773C0 00074300  3A 42 86 74 */	addi r18, r2, j3dDefaultTevColor@sda21
/* 800773C4 00074304  39 20 00 C1 */	li r9, 0xc1
/* 800773C8 00074308  39 00 00 C2 */	li r8, 0xc2
/* 800773CC 0007430C  38 E0 00 C3 */	li r7, 0xc3
/* 800773D0 00074310  3A 60 00 C4 */	li r19, 0xc4
/* 800773D4 00074314  3A 80 00 C5 */	li r20, 0xc5
/* 800773D8 00074318  3A A0 00 C6 */	li r21, 0xc6
/* 800773DC 0007431C  3A C0 00 C7 */	li r22, 0xc7
/* 800773E0 00074320  3A E0 00 C8 */	li r23, 0xc8
/* 800773E4 00074324  3B 00 00 C9 */	li r24, 0xc9
/* 800773E8 00074328  3B 20 00 CA */	li r25, 0xca
/* 800773EC 0007432C  3B 40 00 CB */	li r26, 0xcb
/* 800773F0 00074330  3B 60 00 CC */	li r27, 0xcc
/* 800773F4 00074334  3B 80 00 CD */	li r28, 0xcd
/* 800773F8 00074338  3B A0 00 CE */	li r29, 0xce
/* 800773FC 0007433C  3B C0 00 CF */	li r30, 0xcf
/* 80077400 00074340  AB E2 86 74 */	lha r31, j3dDefaultTevColor@sda21(r2)
/* 80077404 00074344  A9 92 00 02 */	lha r12, 2(r18)
/* 80077408 00074348  38 82 86 80 */	addi r4, r2, j3dDefaultTevKColor@sda21
/* 8007740C 0007434C  38 C0 00 0C */	li r6, 0xc
/* 80077410 00074350  38 A0 00 01 */	li r5, 1
/* 80077414 00074354  38 00 00 00 */	li r0, 0
/* 80077418 00074358  B1 63 00 08 */	sth r11, 8(r3)
/* 8007741C 0007435C  B1 63 00 0A */	sth r11, 0xa(r3)
/* 80077420 00074360  B1 63 00 0C */	sth r11, 0xc(r3)
/* 80077424 00074364  B1 63 00 0E */	sth r11, 0xe(r3)
/* 80077428 00074368  B1 63 00 10 */	sth r11, 0x10(r3)
/* 8007742C 0007436C  B1 63 00 12 */	sth r11, 0x12(r3)
/* 80077430 00074370  B1 63 00 14 */	sth r11, 0x14(r3)
/* 80077434 00074374  B1 63 00 16 */	sth r11, 0x16(r3)
/* 80077438 00074378  A9 72 00 04 */	lha r11, 4(r18)
/* 8007743C 0007437C  99 43 00 38 */	stb r10, 0x38(r3)
/* 80077440 00074380  A9 52 00 06 */	lha r10, 6(r18)
/* 80077444 00074384  99 23 00 3C */	stb r9, 0x3c(r3)
/* 80077448 00074388  89 22 86 80 */	lbz r9, j3dDefaultTevKColor@sda21(r2)
/* 8007744C 0007438C  99 03 00 40 */	stb r8, 0x40(r3)
/* 80077450 00074390  89 04 00 01 */	lbz r8, 1(r4)
/* 80077454 00074394  98 E3 00 44 */	stb r7, 0x44(r3)
/* 80077458 00074398  88 E4 00 02 */	lbz r7, 2(r4)
/* 8007745C 0007439C  9A 63 00 48 */	stb r19, 0x48(r3)
/* 80077460 000743A0  88 84 00 03 */	lbz r4, 3(r4)
/* 80077464 000743A4  9A 83 00 4C */	stb r20, 0x4c(r3)
/* 80077468 000743A8  9A A3 00 50 */	stb r21, 0x50(r3)
/* 8007746C 000743AC  9A C3 00 54 */	stb r22, 0x54(r3)
/* 80077470 000743B0  9A E3 00 58 */	stb r23, 0x58(r3)
/* 80077474 000743B4  9B 03 00 5C */	stb r24, 0x5c(r3)
/* 80077478 000743B8  9B 23 00 60 */	stb r25, 0x60(r3)
/* 8007747C 000743BC  9B 43 00 64 */	stb r26, 0x64(r3)
/* 80077480 000743C0  9B 63 00 68 */	stb r27, 0x68(r3)
/* 80077484 000743C4  9B 83 00 6C */	stb r28, 0x6c(r3)
/* 80077488 000743C8  9B A3 00 70 */	stb r29, 0x70(r3)
/* 8007748C 000743CC  9B C3 00 74 */	stb r30, 0x74(r3)
/* 80077490 000743D0  B3 E3 00 98 */	sth r31, 0x98(r3)
/* 80077494 000743D4  B1 83 00 9A */	sth r12, 0x9a(r3)
/* 80077498 000743D8  B1 63 00 9C */	sth r11, 0x9c(r3)
/* 8007749C 000743DC  B1 43 00 9E */	sth r10, 0x9e(r3)
/* 800774A0 000743E0  B3 E3 00 A0 */	sth r31, 0xa0(r3)
/* 800774A4 000743E4  B1 83 00 A2 */	sth r12, 0xa2(r3)
/* 800774A8 000743E8  B1 63 00 A4 */	sth r11, 0xa4(r3)
/* 800774AC 000743EC  B1 43 00 A6 */	sth r10, 0xa6(r3)
/* 800774B0 000743F0  B3 E3 00 A8 */	sth r31, 0xa8(r3)
/* 800774B4 000743F4  B1 83 00 AA */	sth r12, 0xaa(r3)
/* 800774B8 000743F8  B1 63 00 AC */	sth r11, 0xac(r3)
/* 800774BC 000743FC  B1 43 00 AE */	sth r10, 0xae(r3)
/* 800774C0 00074400  99 23 00 B8 */	stb r9, 0xb8(r3)
/* 800774C4 00074404  99 03 00 B9 */	stb r8, 0xb9(r3)
/* 800774C8 00074408  98 E3 00 BA */	stb r7, 0xba(r3)
/* 800774CC 0007440C  98 83 00 BB */	stb r4, 0xbb(r3)
/* 800774D0 00074410  99 23 00 BC */	stb r9, 0xbc(r3)
/* 800774D4 00074414  99 03 00 BD */	stb r8, 0xbd(r3)
/* 800774D8 00074418  98 E3 00 BE */	stb r7, 0xbe(r3)
/* 800774DC 0007441C  98 83 00 BF */	stb r4, 0xbf(r3)
/* 800774E0 00074420  99 23 00 C0 */	stb r9, 0xc0(r3)
/* 800774E4 00074424  99 03 00 C1 */	stb r8, 0xc1(r3)
/* 800774E8 00074428  98 E3 00 C2 */	stb r7, 0xc2(r3)
/* 800774EC 0007442C  98 83 00 C3 */	stb r4, 0xc3(r3)
/* 800774F0 00074430  99 23 00 C4 */	stb r9, 0xc4(r3)
/* 800774F4 00074434  99 03 00 C5 */	stb r8, 0xc5(r3)
/* 800774F8 00074438  98 E3 00 C6 */	stb r7, 0xc6(r3)
/* 800774FC 0007443C  98 83 00 C7 */	stb r4, 0xc7(r3)
/* 80077500 00074440  98 C3 00 C8 */	stb r6, 0xc8(r3)
/* 80077504 00074444  98 C3 00 C9 */	stb r6, 0xc9(r3)
/* 80077508 00074448  98 C3 00 CA */	stb r6, 0xca(r3)
/* 8007750C 0007444C  98 C3 00 CB */	stb r6, 0xcb(r3)
/* 80077510 00074450  98 C3 00 CC */	stb r6, 0xcc(r3)
/* 80077514 00074454  98 C3 00 CD */	stb r6, 0xcd(r3)
/* 80077518 00074458  98 C3 00 CE */	stb r6, 0xce(r3)
/* 8007751C 0007445C  98 C3 00 CF */	stb r6, 0xcf(r3)
/* 80077520 00074460  98 A3 00 D0 */	stb r5, 0xd0(r3)
/* 80077524 00074464  90 03 00 04 */	stw r0, 4(r3)
/* 80077528 00074468  90 03 00 D4 */	stw r0, 0xd4(r3)
/* 8007752C 0007446C  BA 41 00 08 */	lmw r18, 8(r1)
/* 80077530 00074470  38 21 00 40 */	addi r1, r1, 0x40
/* 80077534 00074474  4E 80 00 20 */	blr 
.endfn initialize__18J3DTevBlockPatchedFv

.fn initialize__12J3DTevBlock1Fv, global
/* 80077538 00074478  3C 80 00 01 */	lis r4, 0x0000FFFF@ha
/* 8007753C 0007447C  38 A0 00 C0 */	li r5, 0xc0
/* 80077540 00074480  38 04 FF FF */	addi r0, r4, 0x0000FFFF@l
/* 80077544 00074484  38 80 00 C1 */	li r4, 0xc1
/* 80077548 00074488  B0 03 00 08 */	sth r0, 8(r3)
/* 8007754C 0007448C  38 00 00 00 */	li r0, 0
/* 80077550 00074490  98 A3 00 0E */	stb r5, 0xe(r3)
/* 80077554 00074494  98 83 00 12 */	stb r4, 0x12(r3)
/* 80077558 00074498  90 03 00 04 */	stw r0, 4(r3)
/* 8007755C 0007449C  4E 80 00 20 */	blr 
.endfn initialize__12J3DTevBlock1Fv

.fn initialize__12J3DTevBlock2Fv, global
/* 80077560 000744A0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80077564 000744A4  3C 80 00 01 */	lis r4, 0x0000FFFF@ha
/* 80077568 000744A8  38 84 FF FF */	addi r4, r4, 0x0000FFFF@l
/* 8007756C 000744AC  38 00 00 01 */	li r0, 1
/* 80077570 000744B0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80077574 000744B4  3B E2 86 74 */	addi r31, r2, j3dDefaultTevColor@sda21
/* 80077578 000744B8  39 00 00 C0 */	li r8, 0xc0
/* 8007757C 000744BC  38 E0 00 C1 */	li r7, 0xc1
/* 80077580 000744C0  93 C1 00 08 */	stw r30, 8(r1)
/* 80077584 000744C4  38 C0 00 C2 */	li r6, 0xc2
/* 80077588 000744C8  38 A0 00 C3 */	li r5, 0xc3
/* 8007758C 000744CC  39 80 00 1C */	li r12, 0x1c
/* 80077590 000744D0  B0 83 00 08 */	sth r4, 8(r3)
/* 80077594 000744D4  3B C2 86 80 */	addi r30, r2, j3dDefaultTevKColor@sda21
/* 80077598 000744D8  A9 62 86 74 */	lha r11, j3dDefaultTevColor@sda21(r2)
/* 8007759C 000744DC  B0 83 00 0A */	sth r4, 0xa(r3)
/* 800775A0 000744E0  38 80 00 0C */	li r4, 0xc
/* 800775A4 000744E4  A9 5F 00 02 */	lha r10, 2(r31)
/* 800775A8 000744E8  98 03 00 34 */	stb r0, 0x34(r3)
/* 800775AC 000744EC  38 00 00 00 */	li r0, 0
/* 800775B0 000744F0  A9 3F 00 04 */	lha r9, 4(r31)
/* 800775B4 000744F4  99 03 00 35 */	stb r8, 0x35(r3)
/* 800775B8 000744F8  A9 1F 00 06 */	lha r8, 6(r31)
/* 800775BC 000744FC  98 E3 00 39 */	stb r7, 0x39(r3)
/* 800775C0 00074500  88 E2 86 80 */	lbz r7, j3dDefaultTevKColor@sda21(r2)
/* 800775C4 00074504  98 C3 00 3D */	stb r6, 0x3d(r3)
/* 800775C8 00074508  88 DE 00 01 */	lbz r6, 1(r30)
/* 800775CC 0007450C  98 A3 00 41 */	stb r5, 0x41(r3)
/* 800775D0 00074510  88 BE 00 02 */	lbz r5, 2(r30)
/* 800775D4 00074514  98 83 00 55 */	stb r4, 0x55(r3)
/* 800775D8 00074518  98 83 00 56 */	stb r4, 0x56(r3)
/* 800775DC 0007451C  88 9E 00 03 */	lbz r4, 3(r30)
/* 800775E0 00074520  99 83 00 57 */	stb r12, 0x57(r3)
/* 800775E4 00074524  99 83 00 58 */	stb r12, 0x58(r3)
/* 800775E8 00074528  B1 63 00 14 */	sth r11, 0x14(r3)
/* 800775EC 0007452C  B1 43 00 16 */	sth r10, 0x16(r3)
/* 800775F0 00074530  B1 23 00 18 */	sth r9, 0x18(r3)
/* 800775F4 00074534  B1 03 00 1A */	sth r8, 0x1a(r3)
/* 800775F8 00074538  B1 63 00 1C */	sth r11, 0x1c(r3)
/* 800775FC 0007453C  B1 43 00 1E */	sth r10, 0x1e(r3)
/* 80077600 00074540  B1 23 00 20 */	sth r9, 0x20(r3)
/* 80077604 00074544  B1 03 00 22 */	sth r8, 0x22(r3)
/* 80077608 00074548  B1 63 00 24 */	sth r11, 0x24(r3)
/* 8007760C 0007454C  B1 43 00 26 */	sth r10, 0x26(r3)
/* 80077610 00074550  B1 23 00 28 */	sth r9, 0x28(r3)
/* 80077614 00074554  B1 03 00 2A */	sth r8, 0x2a(r3)
/* 80077618 00074558  98 E3 00 45 */	stb r7, 0x45(r3)
/* 8007761C 0007455C  98 C3 00 46 */	stb r6, 0x46(r3)
/* 80077620 00074560  98 A3 00 47 */	stb r5, 0x47(r3)
/* 80077624 00074564  98 83 00 48 */	stb r4, 0x48(r3)
/* 80077628 00074568  98 E3 00 49 */	stb r7, 0x49(r3)
/* 8007762C 0007456C  98 C3 00 4A */	stb r6, 0x4a(r3)
/* 80077630 00074570  98 A3 00 4B */	stb r5, 0x4b(r3)
/* 80077634 00074574  98 83 00 4C */	stb r4, 0x4c(r3)
/* 80077638 00074578  98 E3 00 4D */	stb r7, 0x4d(r3)
/* 8007763C 0007457C  98 C3 00 4E */	stb r6, 0x4e(r3)
/* 80077640 00074580  98 A3 00 4F */	stb r5, 0x4f(r3)
/* 80077644 00074584  98 83 00 50 */	stb r4, 0x50(r3)
/* 80077648 00074588  98 E3 00 51 */	stb r7, 0x51(r3)
/* 8007764C 0007458C  98 C3 00 52 */	stb r6, 0x52(r3)
/* 80077650 00074590  98 A3 00 53 */	stb r5, 0x53(r3)
/* 80077654 00074594  98 83 00 54 */	stb r4, 0x54(r3)
/* 80077658 00074598  90 03 00 04 */	stw r0, 4(r3)
/* 8007765C 0007459C  90 03 00 68 */	stw r0, 0x68(r3)
/* 80077660 000745A0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80077664 000745A4  83 C1 00 08 */	lwz r30, 8(r1)
/* 80077668 000745A8  38 21 00 10 */	addi r1, r1, 0x10
/* 8007766C 000745AC  4E 80 00 20 */	blr 
.endfn initialize__12J3DTevBlock2Fv

.fn initialize__12J3DTevBlock4Fv, global
/* 80077670 000745B0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80077674 000745B4  3C 80 00 01 */	lis r4, 0x0000FFFF@ha
/* 80077678 000745B8  39 44 FF FF */	addi r10, r4, 0x0000FFFF@l
/* 8007767C 000745BC  38 00 00 01 */	li r0, 1
/* 80077680 000745C0  BF 61 00 0C */	stmw r27, 0xc(r1)
/* 80077684 000745C4  39 20 00 C0 */	li r9, 0xc0
/* 80077688 000745C8  39 00 00 C1 */	li r8, 0xc1
/* 8007768C 000745CC  38 E0 00 C2 */	li r7, 0xc2
/* 80077690 000745D0  38 C0 00 C3 */	li r6, 0xc3
/* 80077694 000745D4  38 A0 00 C4 */	li r5, 0xc4
/* 80077698 000745D8  38 80 00 C5 */	li r4, 0xc5
/* 8007769C 000745DC  3B A0 00 C6 */	li r29, 0xc6
/* 800776A0 000745E0  3B C0 00 C7 */	li r30, 0xc7
/* 800776A4 000745E4  3B E0 00 0C */	li r31, 0xc
/* 800776A8 000745E8  39 80 00 1C */	li r12, 0x1c
/* 800776AC 000745EC  A9 62 86 74 */	lha r11, j3dDefaultTevColor@sda21(r2)
/* 800776B0 000745F0  3B 82 86 74 */	addi r28, r2, j3dDefaultTevColor@sda21
/* 800776B4 000745F4  3B 62 86 80 */	addi r27, r2, j3dDefaultTevKColor@sda21
/* 800776B8 000745F8  B1 43 00 08 */	sth r10, 8(r3)
/* 800776BC 000745FC  B1 43 00 0A */	sth r10, 0xa(r3)
/* 800776C0 00074600  B1 43 00 0C */	sth r10, 0xc(r3)
/* 800776C4 00074604  B1 43 00 0E */	sth r10, 0xe(r3)
/* 800776C8 00074608  A9 5C 00 02 */	lha r10, 2(r28)
/* 800776CC 0007460C  98 03 00 20 */	stb r0, 0x20(r3)
/* 800776D0 00074610  38 00 00 00 */	li r0, 0
/* 800776D4 00074614  99 23 00 21 */	stb r9, 0x21(r3)
/* 800776D8 00074618  A9 3C 00 04 */	lha r9, 4(r28)
/* 800776DC 0007461C  99 03 00 25 */	stb r8, 0x25(r3)
/* 800776E0 00074620  A9 1C 00 06 */	lha r8, 6(r28)
/* 800776E4 00074624  98 E3 00 29 */	stb r7, 0x29(r3)
/* 800776E8 00074628  88 E2 86 80 */	lbz r7, j3dDefaultTevKColor@sda21(r2)
/* 800776EC 0007462C  98 C3 00 2D */	stb r6, 0x2d(r3)
/* 800776F0 00074630  88 DB 00 01 */	lbz r6, 1(r27)
/* 800776F4 00074634  98 A3 00 31 */	stb r5, 0x31(r3)
/* 800776F8 00074638  88 BB 00 02 */	lbz r5, 2(r27)
/* 800776FC 0007463C  98 83 00 35 */	stb r4, 0x35(r3)
/* 80077700 00074640  88 9B 00 03 */	lbz r4, 3(r27)
/* 80077704 00074644  9B A3 00 39 */	stb r29, 0x39(r3)
/* 80077708 00074648  9B C3 00 3D */	stb r30, 0x3d(r3)
/* 8007770C 0007464C  9B E3 00 72 */	stb r31, 0x72(r3)
/* 80077710 00074650  9B E3 00 73 */	stb r31, 0x73(r3)
/* 80077714 00074654  9B E3 00 74 */	stb r31, 0x74(r3)
/* 80077718 00074658  9B E3 00 75 */	stb r31, 0x75(r3)
/* 8007771C 0007465C  99 83 00 76 */	stb r12, 0x76(r3)
/* 80077720 00074660  99 83 00 77 */	stb r12, 0x77(r3)
/* 80077724 00074664  99 83 00 78 */	stb r12, 0x78(r3)
/* 80077728 00074668  99 83 00 79 */	stb r12, 0x79(r3)
/* 8007772C 0007466C  B1 63 00 42 */	sth r11, 0x42(r3)
/* 80077730 00074670  B1 43 00 44 */	sth r10, 0x44(r3)
/* 80077734 00074674  B1 23 00 46 */	sth r9, 0x46(r3)
/* 80077738 00074678  B1 03 00 48 */	sth r8, 0x48(r3)
/* 8007773C 0007467C  B1 63 00 4A */	sth r11, 0x4a(r3)
/* 80077740 00074680  B1 43 00 4C */	sth r10, 0x4c(r3)
/* 80077744 00074684  B1 23 00 4E */	sth r9, 0x4e(r3)
/* 80077748 00074688  B1 03 00 50 */	sth r8, 0x50(r3)
/* 8007774C 0007468C  B1 63 00 52 */	sth r11, 0x52(r3)
/* 80077750 00074690  B1 43 00 54 */	sth r10, 0x54(r3)
/* 80077754 00074694  B1 23 00 56 */	sth r9, 0x56(r3)
/* 80077758 00074698  B1 03 00 58 */	sth r8, 0x58(r3)
/* 8007775C 0007469C  98 E3 00 62 */	stb r7, 0x62(r3)
/* 80077760 000746A0  98 C3 00 63 */	stb r6, 0x63(r3)
/* 80077764 000746A4  98 A3 00 64 */	stb r5, 0x64(r3)
/* 80077768 000746A8  98 83 00 65 */	stb r4, 0x65(r3)
/* 8007776C 000746AC  98 E3 00 66 */	stb r7, 0x66(r3)
/* 80077770 000746B0  98 C3 00 67 */	stb r6, 0x67(r3)
/* 80077774 000746B4  98 A3 00 68 */	stb r5, 0x68(r3)
/* 80077778 000746B8  98 83 00 69 */	stb r4, 0x69(r3)
/* 8007777C 000746BC  98 E3 00 6A */	stb r7, 0x6a(r3)
/* 80077780 000746C0  98 C3 00 6B */	stb r6, 0x6b(r3)
/* 80077784 000746C4  98 A3 00 6C */	stb r5, 0x6c(r3)
/* 80077788 000746C8  98 83 00 6D */	stb r4, 0x6d(r3)
/* 8007778C 000746CC  98 E3 00 6E */	stb r7, 0x6e(r3)
/* 80077790 000746D0  98 C3 00 6F */	stb r6, 0x6f(r3)
/* 80077794 000746D4  98 A3 00 70 */	stb r5, 0x70(r3)
/* 80077798 000746D8  98 83 00 71 */	stb r4, 0x71(r3)
/* 8007779C 000746DC  90 03 00 04 */	stw r0, 4(r3)
/* 800777A0 000746E0  90 03 00 90 */	stw r0, 0x90(r3)
/* 800777A4 000746E4  BB 61 00 0C */	lmw r27, 0xc(r1)
/* 800777A8 000746E8  38 21 00 20 */	addi r1, r1, 0x20
/* 800777AC 000746EC  4E 80 00 20 */	blr 
.endfn initialize__12J3DTevBlock4Fv

.fn initialize__13J3DTevBlock16Fv, global
/* 800777B0 000746F0  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 800777B4 000746F4  3C 80 00 01 */	lis r4, 0x0000FFFF@ha
/* 800777B8 000746F8  39 44 FF FF */	addi r10, r4, 0x0000FFFF@l
/* 800777BC 000746FC  39 62 86 74 */	addi r11, r2, j3dDefaultTevColor@sda21
/* 800777C0 00074700  BF 21 00 14 */	stmw r25, 0x14(r1)
/* 800777C4 00074704  3B 22 86 80 */	addi r25, r2, j3dDefaultTevKColor@sda21
/* 800777C8 00074708  3B 40 00 01 */	li r26, 1
/* 800777CC 0007470C  AB 62 86 74 */	lha r27, j3dDefaultTevColor@sda21(r2)
/* 800777D0 00074710  AB 8B 00 02 */	lha r28, 2(r11)
/* 800777D4 00074714  39 20 00 0C */	li r9, 0xc
/* 800777D8 00074718  AB AB 00 04 */	lha r29, 4(r11)
/* 800777DC 0007471C  39 00 00 1C */	li r8, 0x1c
/* 800777E0 00074720  AB CB 00 06 */	lha r30, 6(r11)
/* 800777E4 00074724  38 00 00 02 */	li r0, 2
/* 800777E8 00074728  8B E2 86 80 */	lbz r31, j3dDefaultTevKColor@sda21(r2)
/* 800777EC 0007472C  7C 65 1B 78 */	mr r5, r3
/* 800777F0 00074730  89 99 00 01 */	lbz r12, 1(r25)
/* 800777F4 00074734  38 E0 00 00 */	li r7, 0
/* 800777F8 00074738  89 79 00 02 */	lbz r11, 2(r25)
/* 800777FC 0007473C  38 80 00 C0 */	li r4, 0xc0
/* 80077800 00074740  38 C0 00 C1 */	li r6, 0xc1
/* 80077804 00074744  B1 43 00 08 */	sth r10, 8(r3)
/* 80077808 00074748  B1 43 00 0A */	sth r10, 0xa(r3)
/* 8007780C 0007474C  B1 43 00 0C */	sth r10, 0xc(r3)
/* 80077810 00074750  B1 43 00 0E */	sth r10, 0xe(r3)
/* 80077814 00074754  B1 43 00 10 */	sth r10, 0x10(r3)
/* 80077818 00074758  B1 43 00 12 */	sth r10, 0x12(r3)
/* 8007781C 0007475C  B1 43 00 14 */	sth r10, 0x14(r3)
/* 80077820 00074760  B1 43 00 16 */	sth r10, 0x16(r3)
/* 80077824 00074764  89 59 00 03 */	lbz r10, 3(r25)
/* 80077828 00074768  9B 43 00 58 */	stb r26, 0x58(r3)
/* 8007782C 0007476C  B3 63 00 DA */	sth r27, 0xda(r3)
/* 80077830 00074770  B3 83 00 DC */	sth r28, 0xdc(r3)
/* 80077834 00074774  B3 A3 00 DE */	sth r29, 0xde(r3)
/* 80077838 00074778  B3 C3 00 E0 */	sth r30, 0xe0(r3)
/* 8007783C 0007477C  B3 63 00 E2 */	sth r27, 0xe2(r3)
/* 80077840 00074780  B3 83 00 E4 */	sth r28, 0xe4(r3)
/* 80077844 00074784  B3 A3 00 E6 */	sth r29, 0xe6(r3)
/* 80077848 00074788  B3 C3 00 E8 */	sth r30, 0xe8(r3)
/* 8007784C 0007478C  B3 63 00 EA */	sth r27, 0xea(r3)
/* 80077850 00074790  B3 83 00 EC */	sth r28, 0xec(r3)
/* 80077854 00074794  B3 A3 00 EE */	sth r29, 0xee(r3)
/* 80077858 00074798  B3 C3 00 F0 */	sth r30, 0xf0(r3)
/* 8007785C 0007479C  9B E3 00 FA */	stb r31, 0xfa(r3)
/* 80077860 000747A0  99 83 00 FB */	stb r12, 0xfb(r3)
/* 80077864 000747A4  99 63 00 FC */	stb r11, 0xfc(r3)
/* 80077868 000747A8  99 43 00 FD */	stb r10, 0xfd(r3)
/* 8007786C 000747AC  9B E3 00 FE */	stb r31, 0xfe(r3)
/* 80077870 000747B0  99 83 00 FF */	stb r12, 0xff(r3)
/* 80077874 000747B4  99 63 01 00 */	stb r11, 0x100(r3)
/* 80077878 000747B8  99 43 01 01 */	stb r10, 0x101(r3)
/* 8007787C 000747BC  9B E3 01 02 */	stb r31, 0x102(r3)
/* 80077880 000747C0  99 83 01 03 */	stb r12, 0x103(r3)
/* 80077884 000747C4  99 63 01 04 */	stb r11, 0x104(r3)
/* 80077888 000747C8  99 43 01 05 */	stb r10, 0x105(r3)
/* 8007788C 000747CC  9B E3 01 06 */	stb r31, 0x106(r3)
/* 80077890 000747D0  99 83 01 07 */	stb r12, 0x107(r3)
/* 80077894 000747D4  99 63 01 08 */	stb r11, 0x108(r3)
/* 80077898 000747D8  99 43 01 09 */	stb r10, 0x109(r3)
/* 8007789C 000747DC  99 23 01 0A */	stb r9, 0x10a(r3)
/* 800778A0 000747E0  99 23 01 0B */	stb r9, 0x10b(r3)
/* 800778A4 000747E4  99 23 01 0C */	stb r9, 0x10c(r3)
/* 800778A8 000747E8  99 23 01 0D */	stb r9, 0x10d(r3)
/* 800778AC 000747EC  99 23 01 0E */	stb r9, 0x10e(r3)
/* 800778B0 000747F0  99 23 01 0F */	stb r9, 0x10f(r3)
/* 800778B4 000747F4  99 23 01 10 */	stb r9, 0x110(r3)
/* 800778B8 000747F8  99 23 01 11 */	stb r9, 0x111(r3)
/* 800778BC 000747FC  99 23 01 12 */	stb r9, 0x112(r3)
/* 800778C0 00074800  99 23 01 13 */	stb r9, 0x113(r3)
/* 800778C4 00074804  99 23 01 14 */	stb r9, 0x114(r3)
/* 800778C8 00074808  99 23 01 15 */	stb r9, 0x115(r3)
/* 800778CC 0007480C  99 23 01 16 */	stb r9, 0x116(r3)
/* 800778D0 00074810  99 23 01 17 */	stb r9, 0x117(r3)
/* 800778D4 00074814  99 23 01 18 */	stb r9, 0x118(r3)
/* 800778D8 00074818  99 23 01 19 */	stb r9, 0x119(r3)
/* 800778DC 0007481C  99 03 01 1A */	stb r8, 0x11a(r3)
/* 800778E0 00074820  99 03 01 1B */	stb r8, 0x11b(r3)
/* 800778E4 00074824  99 03 01 1C */	stb r8, 0x11c(r3)
/* 800778E8 00074828  99 03 01 1D */	stb r8, 0x11d(r3)
/* 800778EC 0007482C  99 03 01 1E */	stb r8, 0x11e(r3)
/* 800778F0 00074830  99 03 01 1F */	stb r8, 0x11f(r3)
/* 800778F4 00074834  99 03 01 20 */	stb r8, 0x120(r3)
/* 800778F8 00074838  99 03 01 21 */	stb r8, 0x121(r3)
/* 800778FC 0007483C  99 03 01 22 */	stb r8, 0x122(r3)
/* 80077900 00074840  99 03 01 23 */	stb r8, 0x123(r3)
/* 80077904 00074844  99 03 01 24 */	stb r8, 0x124(r3)
/* 80077908 00074848  99 03 01 25 */	stb r8, 0x125(r3)
/* 8007790C 0007484C  99 03 01 26 */	stb r8, 0x126(r3)
/* 80077910 00074850  99 03 01 27 */	stb r8, 0x127(r3)
/* 80077914 00074854  99 03 01 28 */	stb r8, 0x128(r3)
/* 80077918 00074858  99 03 01 29 */	stb r8, 0x129(r3)
/* 8007791C 0007485C  7C 09 03 A6 */	mtctr r0
.L_80077920:
/* 80077920 00074860  98 85 00 59 */	stb r4, 0x59(r5)
/* 80077924 00074864  38 07 00 01 */	addi r0, r7, 1
/* 80077928 00074868  54 09 08 3C */	slwi r9, r0, 1
/* 8007792C 0007486C  38 84 00 10 */	addi r4, r4, 0x10
/* 80077930 00074870  98 C5 00 5D */	stb r6, 0x5d(r5)
/* 80077934 00074874  39 09 00 C0 */	addi r8, r9, 0xc0
/* 80077938 00074878  38 07 00 02 */	addi r0, r7, 2
/* 8007793C 0007487C  39 49 00 C1 */	addi r10, r9, 0xc1
/* 80077940 00074880  99 05 00 61 */	stb r8, 0x61(r5)
/* 80077944 00074884  54 0B 08 3C */	slwi r11, r0, 1
/* 80077948 00074888  39 2B 00 C0 */	addi r9, r11, 0xc0
/* 8007794C 0007488C  38 07 00 03 */	addi r0, r7, 3
/* 80077950 00074890  99 45 00 65 */	stb r10, 0x65(r5)
/* 80077954 00074894  54 0A 08 3C */	slwi r10, r0, 1
/* 80077958 00074898  39 0B 00 C1 */	addi r8, r11, 0xc1
/* 8007795C 0007489C  38 07 00 04 */	addi r0, r7, 4
/* 80077960 000748A0  99 25 00 69 */	stb r9, 0x69(r5)
/* 80077964 000748A4  54 0C 08 3C */	slwi r12, r0, 1
/* 80077968 000748A8  39 6A 00 C0 */	addi r11, r10, 0xc0
/* 8007796C 000748AC  38 07 00 05 */	addi r0, r7, 5
/* 80077970 000748B0  99 05 00 6D */	stb r8, 0x6d(r5)
/* 80077974 000748B4  54 19 08 3C */	slwi r25, r0, 1
/* 80077978 000748B8  39 4A 00 C1 */	addi r10, r10, 0xc1
/* 8007797C 000748BC  39 2C 00 C0 */	addi r9, r12, 0xc0
/* 80077980 000748C0  99 65 00 71 */	stb r11, 0x71(r5)
/* 80077984 000748C4  39 0C 00 C1 */	addi r8, r12, 0xc1
/* 80077988 000748C8  39 99 00 C0 */	addi r12, r25, 0xc0
/* 8007798C 000748CC  39 79 00 C1 */	addi r11, r25, 0xc1
/* 80077990 000748D0  99 45 00 75 */	stb r10, 0x75(r5)
/* 80077994 000748D4  38 07 00 06 */	addi r0, r7, 6
/* 80077998 000748D8  54 19 08 3C */	slwi r25, r0, 1
/* 8007799C 000748DC  38 C6 00 10 */	addi r6, r6, 0x10
/* 800779A0 000748E0  99 25 00 79 */	stb r9, 0x79(r5)
/* 800779A4 000748E4  38 07 00 07 */	addi r0, r7, 7
/* 800779A8 000748E8  54 1A 08 3C */	slwi r26, r0, 1
/* 800779AC 000748EC  39 59 00 C0 */	addi r10, r25, 0xc0
/* 800779B0 000748F0  99 05 00 7D */	stb r8, 0x7d(r5)
/* 800779B4 000748F4  39 39 00 C1 */	addi r9, r25, 0xc1
/* 800779B8 000748F8  39 1A 00 C0 */	addi r8, r26, 0xc0
/* 800779BC 000748FC  38 1A 00 C1 */	addi r0, r26, 0xc1
/* 800779C0 00074900  99 85 00 81 */	stb r12, 0x81(r5)
/* 800779C4 00074904  38 E7 00 08 */	addi r7, r7, 8
/* 800779C8 00074908  99 65 00 85 */	stb r11, 0x85(r5)
/* 800779CC 0007490C  99 45 00 89 */	stb r10, 0x89(r5)
/* 800779D0 00074910  99 25 00 8D */	stb r9, 0x8d(r5)
/* 800779D4 00074914  99 05 00 91 */	stb r8, 0x91(r5)
/* 800779D8 00074918  98 05 00 95 */	stb r0, 0x95(r5)
/* 800779DC 0007491C  38 A5 00 40 */	addi r5, r5, 0x40
/* 800779E0 00074920  42 00 FF 40 */	bdnz .L_80077920
/* 800779E4 00074924  38 00 00 00 */	li r0, 0
/* 800779E8 00074928  90 03 00 04 */	stw r0, 4(r3)
/* 800779EC 0007492C  90 03 01 70 */	stw r0, 0x170(r3)
/* 800779F0 00074930  BB 21 00 14 */	lmw r25, 0x14(r1)
/* 800779F4 00074934  38 21 00 30 */	addi r1, r1, 0x30
/* 800779F8 00074938  4E 80 00 20 */	blr 
.endfn initialize__13J3DTevBlock16Fv

.fn initialize__15J3DIndBlockFullFv, global
/* 800779FC 0007493C  38 00 00 00 */	li r0, 0
/* 80077A00 00074940  98 03 00 04 */	stb r0, 4(r3)
/* 80077A04 00074944  4E 80 00 20 */	blr 
.endfn initialize__15J3DIndBlockFullFv

.fn initialize__16J3DPEBlockFogOffFv, global
/* 80077A08 00074948  3C A0 00 01 */	lis r5, 0x0000FFFF@ha
/* 80077A0C 0007494C  38 80 00 FF */	li r4, 0xff
/* 80077A10 00074950  38 A5 FF FF */	addi r5, r5, 0x0000FFFF@l
/* 80077A14 00074954  38 00 00 01 */	li r0, 1
/* 80077A18 00074958  B0 A3 00 04 */	sth r5, 4(r3)
/* 80077A1C 0007495C  B0 A3 00 0C */	sth r5, 0xc(r3)
/* 80077A20 00074960  98 83 00 0E */	stb r4, 0xe(r3)
/* 80077A24 00074964  98 03 00 0F */	stb r0, 0xf(r3)
/* 80077A28 00074968  4E 80 00 20 */	blr 
.endfn initialize__16J3DPEBlockFogOffFv

.fn initialize__14J3DPEBlockFullFv, global
/* 80077A2C 0007496C  3C 80 00 01 */	lis r4, 0x0000FFFF@ha
/* 80077A30 00074970  38 A0 00 FF */	li r5, 0xff
/* 80077A34 00074974  38 C4 FF FF */	addi r6, r4, 0x0000FFFF@l
/* 80077A38 00074978  38 80 00 01 */	li r4, 1
/* 80077A3C 0007497C  B0 C3 00 30 */	sth r6, 0x30(r3)
/* 80077A40 00074980  38 00 00 00 */	li r0, 0
/* 80077A44 00074984  B0 C3 00 38 */	sth r6, 0x38(r3)
/* 80077A48 00074988  98 A3 00 3A */	stb r5, 0x3a(r3)
/* 80077A4C 0007498C  98 83 00 3B */	stb r4, 0x3b(r3)
/* 80077A50 00074990  90 03 00 3C */	stw r0, 0x3c(r3)
/* 80077A54 00074994  4E 80 00 20 */	blr 
.endfn initialize__14J3DPEBlockFullFv

.fn countDLSize__21J3DColorBlockLightOffFv, global
/* 80077A58 00074998  38 60 00 22 */	li r3, 0x22
/* 80077A5C 0007499C  4E 80 00 20 */	blr 
.endfn countDLSize__21J3DColorBlockLightOffFv

.fn countDLSize__22J3DColorBlockAmbientOnFv, global
/* 80077A60 000749A0  38 60 00 2F */	li r3, 0x2f
/* 80077A64 000749A4  4E 80 00 20 */	blr 
.endfn countDLSize__22J3DColorBlockAmbientOnFv

.fn countDLSize__20J3DColorBlockLightOnFv, global
/* 80077A68 000749A8  38 60 02 6F */	li r3, 0x26f
/* 80077A6C 000749AC  4E 80 00 20 */	blr 
.endfn countDLSize__20J3DColorBlockLightOnFv

.fn countDLSize__21J3DTexGenBlockPatchedFv, global
/* 80077A70 000749B0  38 60 01 A8 */	li r3, 0x1a8
/* 80077A74 000749B4  4E 80 00 20 */	blr 
.endfn countDLSize__21J3DTexGenBlockPatchedFv

.fn countDLSize__15J3DTexGenBlock4Fv, global
/* 80077A78 000749B8  38 60 00 FE */	li r3, 0xfe
/* 80077A7C 000749BC  4E 80 00 20 */	blr 
.endfn countDLSize__15J3DTexGenBlock4Fv

.fn countDLSize__19J3DTexGenBlockBasicFv, global
/* 80077A80 000749C0  38 60 01 F2 */	li r3, 0x1f2
/* 80077A84 000749C4  4E 80 00 20 */	blr 
.endfn countDLSize__19J3DTexGenBlockBasicFv

.fn countDLSize__18J3DTevBlockPatchedFv, global
/* 80077A88 000749C8  38 60 02 30 */	li r3, 0x230
/* 80077A8C 000749CC  4E 80 00 20 */	blr 
.endfn countDLSize__18J3DTevBlockPatchedFv

.fn countDLSize__12J3DTevBlock1Fv, global
/* 80077A90 000749D0  38 60 00 69 */	li r3, 0x69
/* 80077A94 000749D4  4E 80 00 20 */	blr 
.endfn countDLSize__12J3DTevBlock1Fv

.fn countDLSize__12J3DTevBlock2Fv, global
/* 80077A98 000749D8  38 60 01 4F */	li r3, 0x14f
/* 80077A9C 000749DC  4E 80 00 20 */	blr 
.endfn countDLSize__12J3DTevBlock2Fv

.fn countDLSize__12J3DTevBlock4Fv, global
/* 80077AA0 000749E0  38 60 02 44 */	li r3, 0x244
/* 80077AA4 000749E4  4E 80 00 20 */	blr 
.endfn countDLSize__12J3DTevBlock4Fv

.fn countDLSize__13J3DTevBlock16Fv, global
/* 80077AA8 000749E8  38 60 03 E8 */	li r3, 0x3e8
/* 80077AAC 000749EC  4E 80 00 20 */	blr 
.endfn countDLSize__13J3DTevBlock16Fv

.fn countDLSize__15J3DIndBlockFullFv, global
/* 80077AB0 000749F0  38 60 00 8C */	li r3, 0x8c
/* 80077AB4 000749F4  4E 80 00 20 */	blr 
.endfn countDLSize__15J3DIndBlockFullFv

.fn countDLSize__13J3DPEBlockOpaFv, global
/* 80077AB8 000749F8  38 60 00 1E */	li r3, 0x1e
/* 80077ABC 000749FC  4E 80 00 20 */	blr 
.endfn countDLSize__13J3DPEBlockOpaFv

.fn countDLSize__17J3DPEBlockTexEdgeFv, global
/* 80077AC0 00074A00  38 60 00 1E */	li r3, 0x1e
/* 80077AC4 00074A04  4E 80 00 20 */	blr 
.endfn countDLSize__17J3DPEBlockTexEdgeFv

.fn countDLSize__13J3DPEBlockXluFv, global
/* 80077AC8 00074A08  38 60 00 1E */	li r3, 0x1e
/* 80077ACC 00074A0C  4E 80 00 20 */	blr 
.endfn countDLSize__13J3DPEBlockXluFv

.fn countDLSize__16J3DPEBlockFogOffFv, global
/* 80077AD0 00074A10  38 60 00 1E */	li r3, 0x1e
/* 80077AD4 00074A14  4E 80 00 20 */	blr 
.endfn countDLSize__16J3DPEBlockFogOffFv

.fn countDLSize__14J3DPEBlockFullFv, global
/* 80077AD8 00074A18  38 60 00 55 */	li r3, 0x55
/* 80077ADC 00074A1C  4E 80 00 20 */	blr 
.endfn countDLSize__14J3DPEBlockFullFv

.fn load__21J3DColorBlockLightOffFv, global
/* 80077AE0 00074A20  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80077AE4 00074A24  7C 08 02 A6 */	mflr r0
/* 80077AE8 00074A28  90 01 00 24 */	stw r0, 0x24(r1)
/* 80077AEC 00074A2C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80077AF0 00074A30  7C 7F 1B 78 */	mr r31, r3
/* 80077AF4 00074A34  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 80077AF8 00074A38  80 6D 89 98 */	lwz r3, SizeOfJ3DColorBlockLightOffLoad@sda21(r13)
/* 80077AFC 00074A3C  80 85 00 08 */	lwz r4, 8(r5)
/* 80077B00 00074A40  80 05 00 0C */	lwz r0, 0xc(r5)
/* 80077B04 00074A44  7C 64 1A 14 */	add r3, r4, r3
/* 80077B08 00074A48  7C 03 00 40 */	cmplw r3, r0
/* 80077B0C 00074A4C  40 81 00 08 */	ble .L_80077B14
/* 80077B10 00074A50  48 06 A1 31 */	bl GDOverflowed
.L_80077B14:
/* 80077B14 00074A54  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 80077B18 00074A58  38 60 00 10 */	li r3, 0x10
/* 80077B1C 00074A5C  38 00 00 00 */	li r0, 0
/* 80077B20 00074A60  39 00 00 01 */	li r8, 1
/* 80077B24 00074A64  80 A4 00 00 */	lwz r5, 0(r4)
/* 80077B28 00074A68  38 E0 00 0C */	li r7, 0xc
/* 80077B2C 00074A6C  80 84 00 08 */	lwz r4, 8(r4)
/* 80077B30 00074A70  7C 85 20 50 */	subf r4, r5, r4
/* 80077B34 00074A74  90 9F 00 18 */	stw r4, 0x18(r31)
/* 80077B38 00074A78  80 CD 8E A8 */	lwz r6, __GDCurrentDL@sda21(r13)
/* 80077B3C 00074A7C  80 A6 00 08 */	lwz r5, 8(r6)
/* 80077B40 00074A80  38 85 00 01 */	addi r4, r5, 1
/* 80077B44 00074A84  90 86 00 08 */	stw r4, 8(r6)
/* 80077B48 00074A88  98 65 00 00 */	stb r3, 0(r5)
/* 80077B4C 00074A8C  80 CD 8E A8 */	lwz r6, __GDCurrentDL@sda21(r13)
/* 80077B50 00074A90  80 A6 00 08 */	lwz r5, 8(r6)
/* 80077B54 00074A94  38 85 00 01 */	addi r4, r5, 1
/* 80077B58 00074A98  90 86 00 08 */	stw r4, 8(r6)
/* 80077B5C 00074A9C  98 05 00 00 */	stb r0, 0(r5)
/* 80077B60 00074AA0  80 CD 8E A8 */	lwz r6, __GDCurrentDL@sda21(r13)
/* 80077B64 00074AA4  80 A6 00 08 */	lwz r5, 8(r6)
/* 80077B68 00074AA8  38 85 00 01 */	addi r4, r5, 1
/* 80077B6C 00074AAC  90 86 00 08 */	stw r4, 8(r6)
/* 80077B70 00074AB0  99 05 00 00 */	stb r8, 0(r5)
/* 80077B74 00074AB4  80 CD 8E A8 */	lwz r6, __GDCurrentDL@sda21(r13)
/* 80077B78 00074AB8  80 A6 00 08 */	lwz r5, 8(r6)
/* 80077B7C 00074ABC  38 85 00 01 */	addi r4, r5, 1
/* 80077B80 00074AC0  90 86 00 08 */	stw r4, 8(r6)
/* 80077B84 00074AC4  98 65 00 00 */	stb r3, 0(r5)
/* 80077B88 00074AC8  80 CD 8E A8 */	lwz r6, __GDCurrentDL@sda21(r13)
/* 80077B8C 00074ACC  80 A6 00 08 */	lwz r5, 8(r6)
/* 80077B90 00074AD0  38 85 00 01 */	addi r4, r5, 1
/* 80077B94 00074AD4  90 86 00 08 */	stw r4, 8(r6)
/* 80077B98 00074AD8  98 E5 00 00 */	stb r7, 0(r5)
/* 80077B9C 00074ADC  80 CD 8E A8 */	lwz r6, __GDCurrentDL@sda21(r13)
/* 80077BA0 00074AE0  81 5F 00 04 */	lwz r10, 4(r31)
/* 80077BA4 00074AE4  80 A6 00 08 */	lwz r5, 8(r6)
/* 80077BA8 00074AE8  55 49 46 3E */	srwi r9, r10, 0x18
/* 80077BAC 00074AEC  55 48 86 3E */	rlwinm r8, r10, 0x10, 0x18, 0x1f
/* 80077BB0 00074AF0  38 85 00 01 */	addi r4, r5, 1
/* 80077BB4 00074AF4  55 47 C6 3E */	rlwinm r7, r10, 0x18, 0x18, 0x1f
/* 80077BB8 00074AF8  90 86 00 08 */	stw r4, 8(r6)
/* 80077BBC 00074AFC  99 25 00 00 */	stb r9, 0(r5)
/* 80077BC0 00074B00  80 CD 8E A8 */	lwz r6, __GDCurrentDL@sda21(r13)
/* 80077BC4 00074B04  80 A6 00 08 */	lwz r5, 8(r6)
/* 80077BC8 00074B08  38 85 00 01 */	addi r4, r5, 1
/* 80077BCC 00074B0C  90 86 00 08 */	stw r4, 8(r6)
/* 80077BD0 00074B10  99 05 00 00 */	stb r8, 0(r5)
/* 80077BD4 00074B14  80 CD 8E A8 */	lwz r6, __GDCurrentDL@sda21(r13)
/* 80077BD8 00074B18  80 A6 00 08 */	lwz r5, 8(r6)
/* 80077BDC 00074B1C  38 85 00 01 */	addi r4, r5, 1
/* 80077BE0 00074B20  90 86 00 08 */	stw r4, 8(r6)
/* 80077BE4 00074B24  98 E5 00 00 */	stb r7, 0(r5)
/* 80077BE8 00074B28  80 CD 8E A8 */	lwz r6, __GDCurrentDL@sda21(r13)
/* 80077BEC 00074B2C  80 A6 00 08 */	lwz r5, 8(r6)
/* 80077BF0 00074B30  38 85 00 01 */	addi r4, r5, 1
/* 80077BF4 00074B34  90 86 00 08 */	stw r4, 8(r6)
/* 80077BF8 00074B38  99 45 00 00 */	stb r10, 0(r5)
/* 80077BFC 00074B3C  80 CD 8E A8 */	lwz r6, __GDCurrentDL@sda21(r13)
/* 80077C00 00074B40  81 5F 00 08 */	lwz r10, 8(r31)
/* 80077C04 00074B44  80 A6 00 08 */	lwz r5, 8(r6)
/* 80077C08 00074B48  55 49 46 3E */	srwi r9, r10, 0x18
/* 80077C0C 00074B4C  55 48 86 3E */	rlwinm r8, r10, 0x10, 0x18, 0x1f
/* 80077C10 00074B50  38 85 00 01 */	addi r4, r5, 1
/* 80077C14 00074B54  55 47 C6 3E */	rlwinm r7, r10, 0x18, 0x18, 0x1f
/* 80077C18 00074B58  90 86 00 08 */	stw r4, 8(r6)
/* 80077C1C 00074B5C  99 25 00 00 */	stb r9, 0(r5)
/* 80077C20 00074B60  80 CD 8E A8 */	lwz r6, __GDCurrentDL@sda21(r13)
/* 80077C24 00074B64  80 A6 00 08 */	lwz r5, 8(r6)
/* 80077C28 00074B68  38 85 00 01 */	addi r4, r5, 1
/* 80077C2C 00074B6C  90 86 00 08 */	stw r4, 8(r6)
/* 80077C30 00074B70  99 05 00 00 */	stb r8, 0(r5)
/* 80077C34 00074B74  80 CD 8E A8 */	lwz r6, __GDCurrentDL@sda21(r13)
/* 80077C38 00074B78  80 A6 00 08 */	lwz r5, 8(r6)
/* 80077C3C 00074B7C  38 85 00 01 */	addi r4, r5, 1
/* 80077C40 00074B80  90 86 00 08 */	stw r4, 8(r6)
/* 80077C44 00074B84  98 E5 00 00 */	stb r7, 0(r5)
/* 80077C48 00074B88  80 CD 8E A8 */	lwz r6, __GDCurrentDL@sda21(r13)
/* 80077C4C 00074B8C  80 A6 00 08 */	lwz r5, 8(r6)
/* 80077C50 00074B90  38 85 00 01 */	addi r4, r5, 1
/* 80077C54 00074B94  90 86 00 08 */	stw r4, 8(r6)
/* 80077C58 00074B98  99 45 00 00 */	stb r10, 0(r5)
/* 80077C5C 00074B9C  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 80077C60 00074BA0  39 20 00 03 */	li r9, 3
/* 80077C64 00074BA4  38 E0 00 0E */	li r7, 0xe
/* 80077C68 00074BA8  38 81 00 14 */	addi r4, r1, 0x14
/* 80077C6C 00074BAC  80 C5 00 00 */	lwz r6, 0(r5)
/* 80077C70 00074BB0  80 A5 00 08 */	lwz r5, 8(r5)
/* 80077C74 00074BB4  7C A6 28 50 */	subf r5, r6, r5
/* 80077C78 00074BB8  90 BF 00 1C */	stw r5, 0x1c(r31)
/* 80077C7C 00074BBC  81 0D 8E A8 */	lwz r8, __GDCurrentDL@sda21(r13)
/* 80077C80 00074BC0  80 C8 00 08 */	lwz r6, 8(r8)
/* 80077C84 00074BC4  38 A6 00 01 */	addi r5, r6, 1
/* 80077C88 00074BC8  90 A8 00 08 */	stw r5, 8(r8)
/* 80077C8C 00074BCC  98 66 00 00 */	stb r3, 0(r6)
/* 80077C90 00074BD0  81 0D 8E A8 */	lwz r8, __GDCurrentDL@sda21(r13)
/* 80077C94 00074BD4  80 C8 00 08 */	lwz r6, 8(r8)
/* 80077C98 00074BD8  38 A6 00 01 */	addi r5, r6, 1
/* 80077C9C 00074BDC  90 A8 00 08 */	stw r5, 8(r8)
/* 80077CA0 00074BE0  98 06 00 00 */	stb r0, 0(r6)
/* 80077CA4 00074BE4  81 0D 8E A8 */	lwz r8, __GDCurrentDL@sda21(r13)
/* 80077CA8 00074BE8  80 C8 00 08 */	lwz r6, 8(r8)
/* 80077CAC 00074BEC  38 A6 00 01 */	addi r5, r6, 1
/* 80077CB0 00074BF0  90 A8 00 08 */	stw r5, 8(r8)
/* 80077CB4 00074BF4  99 26 00 00 */	stb r9, 0(r6)
/* 80077CB8 00074BF8  81 0D 8E A8 */	lwz r8, __GDCurrentDL@sda21(r13)
/* 80077CBC 00074BFC  80 C8 00 08 */	lwz r6, 8(r8)
/* 80077CC0 00074C00  38 A6 00 01 */	addi r5, r6, 1
/* 80077CC4 00074C04  90 A8 00 08 */	stw r5, 8(r8)
/* 80077CC8 00074C08  98 66 00 00 */	stb r3, 0(r6)
/* 80077CCC 00074C0C  80 CD 8E A8 */	lwz r6, __GDCurrentDL@sda21(r13)
/* 80077CD0 00074C10  80 A6 00 08 */	lwz r5, 8(r6)
/* 80077CD4 00074C14  38 65 00 01 */	addi r3, r5, 1
/* 80077CD8 00074C18  90 66 00 08 */	stw r3, 8(r6)
/* 80077CDC 00074C1C  98 E5 00 00 */	stb r7, 0(r5)
/* 80077CE0 00074C20  A1 3F 00 0E */	lhz r9, 0xe(r31)
/* 80077CE4 00074C24  80 A2 87 78 */	lwz r5, lbl_80516AD8@sda21(r2)
/* 80077CE8 00074C28  55 23 BF BE */	rlwinm r3, r9, 0x17, 0x1e, 0x1f
/* 80077CEC 00074C2C  55 27 CE 36 */	rlwinm r7, r9, 0x19, 0x18, 0x1b
/* 80077CF0 00074C30  90 A1 00 14 */	stw r5, 0x14(r1)
/* 80077CF4 00074C34  55 2A 07 FE */	clrlwi r10, r9, 0x1f
/* 80077CF8 00074C38  51 27 F7 3E */	rlwimi r7, r9, 0x1e, 0x1c, 0x1f
/* 80077CFC 00074C3C  55 2B CF BE */	rlwinm r11, r9, 0x19, 0x1e, 0x1f
/* 80077D00 00074C40  7D 04 18 AE */	lbzx r8, r4, r3
/* 80077D04 00074C44  51 2A 07 BC */	rlwimi r10, r9, 0, 0x1e, 0x1e
/* 80077D08 00074C48  50 EA 16 BA */	rlwimi r10, r7, 2, 0x1a, 0x1d
/* 80077D0C 00074C4C  7C 68 00 D0 */	neg r3, r8
/* 80077D10 00074C50  2C 08 00 00 */	cmpwi r8, 0
/* 80077D14 00074C54  7C 65 43 78 */	or r5, r3, r8
/* 80077D18 00074C58  20 88 00 02 */	subfic r4, r8, 2
/* 80077D1C 00074C5C  38 68 FF FE */	addi r3, r8, -2
/* 80077D20 00074C60  54 E8 3C 68 */	rlwinm r8, r7, 7, 0x11, 0x14
/* 80077D24 00074C64  7C 83 1B 78 */	or r3, r4, r3
/* 80077D28 00074C68  54 A7 5D 6A */	rlwinm r7, r5, 0xb, 0x15, 0x15
/* 80077D2C 00074C6C  54 66 55 AC */	rlwinm r6, r3, 0xa, 0x16, 0x16
/* 80077D30 00074C70  51 2A 06 72 */	rlwimi r10, r9, 0, 0x19, 0x19
/* 80077D34 00074C74  40 82 00 08 */	bne .L_80077D3C
/* 80077D38 00074C78  7C 0B 03 78 */	mr r11, r0
.L_80077D3C:
/* 80077D3C 00074C7C  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 80077D40 00074C80  55 60 38 30 */	slwi r0, r11, 7
/* 80077D44 00074C84  7D 40 03 78 */	or r0, r10, r0
/* 80077D48 00074C88  38 61 00 10 */	addi r3, r1, 0x10
/* 80077D4C 00074C8C  80 85 00 08 */	lwz r4, 8(r5)
/* 80077D50 00074C90  7C C0 03 78 */	or r0, r6, r0
/* 80077D54 00074C94  7C E6 03 78 */	or r6, r7, r0
/* 80077D58 00074C98  38 04 00 01 */	addi r0, r4, 1
/* 80077D5C 00074C9C  7D 08 33 78 */	or r8, r8, r6
/* 80077D60 00074CA0  90 05 00 08 */	stw r0, 8(r5)
/* 80077D64 00074CA4  55 00 46 3E */	srwi r0, r8, 0x18
/* 80077D68 00074CA8  98 04 00 00 */	stb r0, 0(r4)
/* 80077D6C 00074CAC  55 07 86 3E */	rlwinm r7, r8, 0x10, 0x18, 0x1f
/* 80077D70 00074CB0  55 06 C6 3E */	rlwinm r6, r8, 0x18, 0x18, 0x1f
/* 80077D74 00074CB4  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 80077D78 00074CB8  80 85 00 08 */	lwz r4, 8(r5)
/* 80077D7C 00074CBC  38 04 00 01 */	addi r0, r4, 1
/* 80077D80 00074CC0  90 05 00 08 */	stw r0, 8(r5)
/* 80077D84 00074CC4  98 E4 00 00 */	stb r7, 0(r4)
/* 80077D88 00074CC8  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 80077D8C 00074CCC  80 85 00 08 */	lwz r4, 8(r5)
/* 80077D90 00074CD0  38 04 00 01 */	addi r0, r4, 1
/* 80077D94 00074CD4  90 05 00 08 */	stw r0, 8(r5)
/* 80077D98 00074CD8  98 C4 00 00 */	stb r6, 0(r4)
/* 80077D9C 00074CDC  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 80077DA0 00074CE0  80 85 00 08 */	lwz r4, 8(r5)
/* 80077DA4 00074CE4  38 04 00 01 */	addi r0, r4, 1
/* 80077DA8 00074CE8  90 05 00 08 */	stw r0, 8(r5)
/* 80077DAC 00074CEC  99 04 00 00 */	stb r8, 0(r4)
/* 80077DB0 00074CF0  80 02 87 78 */	lwz r0, lbl_80516AD8@sda21(r2)
/* 80077DB4 00074CF4  A1 1F 00 12 */	lhz r8, 0x12(r31)
/* 80077DB8 00074CF8  90 01 00 10 */	stw r0, 0x10(r1)
/* 80077DBC 00074CFC  55 00 BF BE */	rlwinm r0, r8, 0x17, 0x1e, 0x1f
/* 80077DC0 00074D00  55 06 CE 36 */	rlwinm r6, r8, 0x19, 0x18, 0x1b
/* 80077DC4 00074D04  7C E3 00 AE */	lbzx r7, r3, r0
/* 80077DC8 00074D08  55 09 07 FE */	clrlwi r9, r8, 0x1f
/* 80077DCC 00074D0C  51 06 F7 3E */	rlwimi r6, r8, 0x1e, 0x1c, 0x1f
/* 80077DD0 00074D10  55 0A CF BE */	rlwinm r10, r8, 0x19, 0x1e, 0x1f
/* 80077DD4 00074D14  7C 07 00 D0 */	neg r0, r7
/* 80077DD8 00074D18  51 09 07 BC */	rlwimi r9, r8, 0, 0x1e, 0x1e
/* 80077DDC 00074D1C  7C 04 3B 78 */	or r4, r0, r7
/* 80077DE0 00074D20  2C 07 00 00 */	cmpwi r7, 0
/* 80077DE4 00074D24  20 67 00 02 */	subfic r3, r7, 2
/* 80077DE8 00074D28  38 07 FF FE */	addi r0, r7, -2
/* 80077DEC 00074D2C  7C 60 03 78 */	or r0, r3, r0
/* 80077DF0 00074D30  50 C9 16 BA */	rlwimi r9, r6, 2, 0x1a, 0x1d
/* 80077DF4 00074D34  55 03 D7 FE */	rlwinm r3, r8, 0x1a, 0x1f, 0x1f
/* 80077DF8 00074D38  54 C8 3C 68 */	rlwinm r8, r6, 7, 0x11, 0x14
/* 80077DFC 00074D3C  54 87 5D 6A */	rlwinm r7, r4, 0xb, 0x15, 0x15
/* 80077E00 00074D40  54 06 55 AC */	rlwinm r6, r0, 0xa, 0x16, 0x16
/* 80077E04 00074D44  50 69 36 72 */	rlwimi r9, r3, 6, 0x19, 0x19
/* 80077E08 00074D48  40 82 00 08 */	bne .L_80077E10
/* 80077E0C 00074D4C  39 40 00 00 */	li r10, 0
.L_80077E10:
/* 80077E10 00074D50  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 80077E14 00074D54  55 40 38 30 */	slwi r0, r10, 7
/* 80077E18 00074D58  7D 20 03 78 */	or r0, r9, r0
/* 80077E1C 00074D5C  38 61 00 0C */	addi r3, r1, 0xc
/* 80077E20 00074D60  80 85 00 08 */	lwz r4, 8(r5)
/* 80077E24 00074D64  7C C0 03 78 */	or r0, r6, r0
/* 80077E28 00074D68  7C E6 03 78 */	or r6, r7, r0
/* 80077E2C 00074D6C  38 04 00 01 */	addi r0, r4, 1
/* 80077E30 00074D70  7D 08 33 78 */	or r8, r8, r6
/* 80077E34 00074D74  90 05 00 08 */	stw r0, 8(r5)
/* 80077E38 00074D78  55 00 46 3E */	srwi r0, r8, 0x18
/* 80077E3C 00074D7C  98 04 00 00 */	stb r0, 0(r4)
/* 80077E40 00074D80  55 07 86 3E */	rlwinm r7, r8, 0x10, 0x18, 0x1f
/* 80077E44 00074D84  55 06 C6 3E */	rlwinm r6, r8, 0x18, 0x18, 0x1f
/* 80077E48 00074D88  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 80077E4C 00074D8C  80 85 00 08 */	lwz r4, 8(r5)
/* 80077E50 00074D90  38 04 00 01 */	addi r0, r4, 1
/* 80077E54 00074D94  90 05 00 08 */	stw r0, 8(r5)
/* 80077E58 00074D98  98 E4 00 00 */	stb r7, 0(r4)
/* 80077E5C 00074D9C  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 80077E60 00074DA0  80 85 00 08 */	lwz r4, 8(r5)
/* 80077E64 00074DA4  38 04 00 01 */	addi r0, r4, 1
/* 80077E68 00074DA8  90 05 00 08 */	stw r0, 8(r5)
/* 80077E6C 00074DAC  98 C4 00 00 */	stb r6, 0(r4)
/* 80077E70 00074DB0  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 80077E74 00074DB4  80 85 00 08 */	lwz r4, 8(r5)
/* 80077E78 00074DB8  38 04 00 01 */	addi r0, r4, 1
/* 80077E7C 00074DBC  90 05 00 08 */	stw r0, 8(r5)
/* 80077E80 00074DC0  99 04 00 00 */	stb r8, 0(r4)
/* 80077E84 00074DC4  80 02 87 78 */	lwz r0, lbl_80516AD8@sda21(r2)
/* 80077E88 00074DC8  A1 1F 00 10 */	lhz r8, 0x10(r31)
/* 80077E8C 00074DCC  90 01 00 0C */	stw r0, 0xc(r1)
/* 80077E90 00074DD0  55 00 BF BE */	rlwinm r0, r8, 0x17, 0x1e, 0x1f
/* 80077E94 00074DD4  55 06 CE 36 */	rlwinm r6, r8, 0x19, 0x18, 0x1b
/* 80077E98 00074DD8  7C E3 00 AE */	lbzx r7, r3, r0
/* 80077E9C 00074DDC  55 09 07 FE */	clrlwi r9, r8, 0x1f
/* 80077EA0 00074DE0  51 06 F7 3E */	rlwimi r6, r8, 0x1e, 0x1c, 0x1f
/* 80077EA4 00074DE4  55 0A CF BE */	rlwinm r10, r8, 0x19, 0x1e, 0x1f
/* 80077EA8 00074DE8  7C 07 00 D0 */	neg r0, r7
/* 80077EAC 00074DEC  51 09 07 BC */	rlwimi r9, r8, 0, 0x1e, 0x1e
/* 80077EB0 00074DF0  7C 04 3B 78 */	or r4, r0, r7
/* 80077EB4 00074DF4  2C 07 00 00 */	cmpwi r7, 0
/* 80077EB8 00074DF8  20 67 00 02 */	subfic r3, r7, 2
/* 80077EBC 00074DFC  38 07 FF FE */	addi r0, r7, -2
/* 80077EC0 00074E00  7C 60 03 78 */	or r0, r3, r0
/* 80077EC4 00074E04  50 C9 16 BA */	rlwimi r9, r6, 2, 0x1a, 0x1d
/* 80077EC8 00074E08  55 03 D7 FE */	rlwinm r3, r8, 0x1a, 0x1f, 0x1f
/* 80077ECC 00074E0C  54 C8 3C 68 */	rlwinm r8, r6, 7, 0x11, 0x14
/* 80077ED0 00074E10  54 87 5D 6A */	rlwinm r7, r4, 0xb, 0x15, 0x15
/* 80077ED4 00074E14  54 06 55 AC */	rlwinm r6, r0, 0xa, 0x16, 0x16
/* 80077ED8 00074E18  50 69 36 72 */	rlwimi r9, r3, 6, 0x19, 0x19
/* 80077EDC 00074E1C  40 82 00 08 */	bne .L_80077EE4
/* 80077EE0 00074E20  39 40 00 00 */	li r10, 0
.L_80077EE4:
/* 80077EE4 00074E24  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 80077EE8 00074E28  55 40 38 30 */	slwi r0, r10, 7
/* 80077EEC 00074E2C  7D 20 03 78 */	or r0, r9, r0
/* 80077EF0 00074E30  38 61 00 08 */	addi r3, r1, 8
/* 80077EF4 00074E34  80 85 00 08 */	lwz r4, 8(r5)
/* 80077EF8 00074E38  7C C0 03 78 */	or r0, r6, r0
/* 80077EFC 00074E3C  7C E6 03 78 */	or r6, r7, r0
/* 80077F00 00074E40  38 04 00 01 */	addi r0, r4, 1
/* 80077F04 00074E44  7D 08 33 78 */	or r8, r8, r6
/* 80077F08 00074E48  90 05 00 08 */	stw r0, 8(r5)
/* 80077F0C 00074E4C  55 00 46 3E */	srwi r0, r8, 0x18
/* 80077F10 00074E50  98 04 00 00 */	stb r0, 0(r4)
/* 80077F14 00074E54  55 07 86 3E */	rlwinm r7, r8, 0x10, 0x18, 0x1f
/* 80077F18 00074E58  55 06 C6 3E */	rlwinm r6, r8, 0x18, 0x18, 0x1f
/* 80077F1C 00074E5C  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 80077F20 00074E60  80 85 00 08 */	lwz r4, 8(r5)
/* 80077F24 00074E64  38 04 00 01 */	addi r0, r4, 1
/* 80077F28 00074E68  90 05 00 08 */	stw r0, 8(r5)
/* 80077F2C 00074E6C  98 E4 00 00 */	stb r7, 0(r4)
/* 80077F30 00074E70  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 80077F34 00074E74  80 85 00 08 */	lwz r4, 8(r5)
/* 80077F38 00074E78  38 04 00 01 */	addi r0, r4, 1
/* 80077F3C 00074E7C  90 05 00 08 */	stw r0, 8(r5)
/* 80077F40 00074E80  98 C4 00 00 */	stb r6, 0(r4)
/* 80077F44 00074E84  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 80077F48 00074E88  80 85 00 08 */	lwz r4, 8(r5)
/* 80077F4C 00074E8C  38 04 00 01 */	addi r0, r4, 1
/* 80077F50 00074E90  90 05 00 08 */	stw r0, 8(r5)
/* 80077F54 00074E94  99 04 00 00 */	stb r8, 0(r4)
/* 80077F58 00074E98  80 02 87 78 */	lwz r0, lbl_80516AD8@sda21(r2)
/* 80077F5C 00074E9C  A1 5F 00 14 */	lhz r10, 0x14(r31)
/* 80077F60 00074EA0  90 01 00 08 */	stw r0, 8(r1)
/* 80077F64 00074EA4  55 40 BF BE */	rlwinm r0, r10, 0x17, 0x1e, 0x1f
/* 80077F68 00074EA8  55 46 CE 36 */	rlwinm r6, r10, 0x19, 0x18, 0x1b
/* 80077F6C 00074EAC  7C E3 00 AE */	lbzx r7, r3, r0
/* 80077F70 00074EB0  55 48 07 FE */	clrlwi r8, r10, 0x1f
/* 80077F74 00074EB4  51 46 F7 3E */	rlwimi r6, r10, 0x1e, 0x1c, 0x1f
/* 80077F78 00074EB8  55 49 CF BE */	rlwinm r9, r10, 0x19, 0x1e, 0x1f
/* 80077F7C 00074EBC  7C 07 00 D0 */	neg r0, r7
/* 80077F80 00074EC0  51 48 07 BC */	rlwimi r8, r10, 0, 0x1e, 0x1e
/* 80077F84 00074EC4  7C 04 3B 78 */	or r4, r0, r7
/* 80077F88 00074EC8  2C 07 00 00 */	cmpwi r7, 0
/* 80077F8C 00074ECC  20 67 00 02 */	subfic r3, r7, 2
/* 80077F90 00074ED0  38 07 FF FE */	addi r0, r7, -2
/* 80077F94 00074ED4  7C 60 03 78 */	or r0, r3, r0
/* 80077F98 00074ED8  50 C8 16 BA */	rlwimi r8, r6, 2, 0x1a, 0x1d
/* 80077F9C 00074EDC  54 C7 3C 68 */	rlwinm r7, r6, 7, 0x11, 0x14
/* 80077FA0 00074EE0  54 86 5D 6A */	rlwinm r6, r4, 0xb, 0x15, 0x15
/* 80077FA4 00074EE4  54 05 55 AC */	rlwinm r5, r0, 0xa, 0x16, 0x16
/* 80077FA8 00074EE8  51 48 06 72 */	rlwimi r8, r10, 0, 0x19, 0x19
/* 80077FAC 00074EEC  40 82 00 08 */	bne .L_80077FB4
/* 80077FB0 00074EF0  39 20 00 00 */	li r9, 0
.L_80077FB4:
/* 80077FB4 00074EF4  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 80077FB8 00074EF8  55 20 38 30 */	slwi r0, r9, 7
/* 80077FBC 00074EFC  7D 00 03 78 */	or r0, r8, r0
/* 80077FC0 00074F00  80 64 00 08 */	lwz r3, 8(r4)
/* 80077FC4 00074F04  7C A0 03 78 */	or r0, r5, r0
/* 80077FC8 00074F08  7C C5 03 78 */	or r5, r6, r0
/* 80077FCC 00074F0C  38 03 00 01 */	addi r0, r3, 1
/* 80077FD0 00074F10  7C E7 2B 78 */	or r7, r7, r5
/* 80077FD4 00074F14  90 04 00 08 */	stw r0, 8(r4)
/* 80077FD8 00074F18  54 E0 46 3E */	srwi r0, r7, 0x18
/* 80077FDC 00074F1C  98 03 00 00 */	stb r0, 0(r3)
/* 80077FE0 00074F20  54 E6 86 3E */	rlwinm r6, r7, 0x10, 0x18, 0x1f
/* 80077FE4 00074F24  54 E5 C6 3E */	rlwinm r5, r7, 0x18, 0x18, 0x1f
/* 80077FE8 00074F28  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 80077FEC 00074F2C  80 64 00 08 */	lwz r3, 8(r4)
/* 80077FF0 00074F30  38 03 00 01 */	addi r0, r3, 1
/* 80077FF4 00074F34  90 04 00 08 */	stw r0, 8(r4)
/* 80077FF8 00074F38  98 C3 00 00 */	stb r6, 0(r3)
/* 80077FFC 00074F3C  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 80078000 00074F40  80 64 00 08 */	lwz r3, 8(r4)
/* 80078004 00074F44  38 03 00 01 */	addi r0, r3, 1
/* 80078008 00074F48  90 04 00 08 */	stw r0, 8(r4)
/* 8007800C 00074F4C  98 A3 00 00 */	stb r5, 0(r3)
/* 80078010 00074F50  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 80078014 00074F54  80 64 00 08 */	lwz r3, 8(r4)
/* 80078018 00074F58  38 03 00 01 */	addi r0, r3, 1
/* 8007801C 00074F5C  90 04 00 08 */	stw r0, 8(r4)
/* 80078020 00074F60  98 E3 00 00 */	stb r7, 0(r3)
/* 80078024 00074F64  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80078028 00074F68  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8007802C 00074F6C  7C 08 03 A6 */	mtlr r0
/* 80078030 00074F70  38 21 00 20 */	addi r1, r1, 0x20
/* 80078034 00074F74  4E 80 00 20 */	blr 
.endfn load__21J3DColorBlockLightOffFv

.fn load__22J3DColorBlockAmbientOnFv, global
/* 80078038 00074F78  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8007803C 00074F7C  7C 08 02 A6 */	mflr r0
/* 80078040 00074F80  90 01 00 24 */	stw r0, 0x24(r1)
/* 80078044 00074F84  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80078048 00074F88  7C 7F 1B 78 */	mr r31, r3
/* 8007804C 00074F8C  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 80078050 00074F90  80 6D 89 9C */	lwz r3, SizeOfJ3DColorBlockAmbientOnLoad@sda21(r13)
/* 80078054 00074F94  80 85 00 08 */	lwz r4, 8(r5)
/* 80078058 00074F98  80 05 00 0C */	lwz r0, 0xc(r5)
/* 8007805C 00074F9C  7C 64 1A 14 */	add r3, r4, r3
/* 80078060 00074FA0  7C 03 00 40 */	cmplw r3, r0
/* 80078064 00074FA4  40 81 00 08 */	ble .L_8007806C
/* 80078068 00074FA8  48 06 9B D9 */	bl GDOverflowed
.L_8007806C:
/* 8007806C 00074FAC  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 80078070 00074FB0  38 80 00 10 */	li r4, 0x10
/* 80078074 00074FB4  38 60 00 00 */	li r3, 0
/* 80078078 00074FB8  38 00 00 01 */	li r0, 1
/* 8007807C 00074FBC  80 C5 00 00 */	lwz r6, 0(r5)
/* 80078080 00074FC0  39 00 00 0C */	li r8, 0xc
/* 80078084 00074FC4  80 A5 00 08 */	lwz r5, 8(r5)
/* 80078088 00074FC8  7C A6 28 50 */	subf r5, r6, r5
/* 8007808C 00074FCC  90 BF 00 18 */	stw r5, 0x18(r31)
/* 80078090 00074FD0  80 ED 8E A8 */	lwz r7, __GDCurrentDL@sda21(r13)
/* 80078094 00074FD4  80 C7 00 08 */	lwz r6, 8(r7)
/* 80078098 00074FD8  38 A6 00 01 */	addi r5, r6, 1
/* 8007809C 00074FDC  90 A7 00 08 */	stw r5, 8(r7)
/* 800780A0 00074FE0  98 86 00 00 */	stb r4, 0(r6)
/* 800780A4 00074FE4  80 ED 8E A8 */	lwz r7, __GDCurrentDL@sda21(r13)
/* 800780A8 00074FE8  80 C7 00 08 */	lwz r6, 8(r7)
/* 800780AC 00074FEC  38 A6 00 01 */	addi r5, r6, 1
/* 800780B0 00074FF0  90 A7 00 08 */	stw r5, 8(r7)
/* 800780B4 00074FF4  98 66 00 00 */	stb r3, 0(r6)
/* 800780B8 00074FF8  80 ED 8E A8 */	lwz r7, __GDCurrentDL@sda21(r13)
/* 800780BC 00074FFC  80 C7 00 08 */	lwz r6, 8(r7)
/* 800780C0 00075000  38 A6 00 01 */	addi r5, r6, 1
/* 800780C4 00075004  90 A7 00 08 */	stw r5, 8(r7)
/* 800780C8 00075008  98 06 00 00 */	stb r0, 0(r6)
/* 800780CC 0007500C  80 ED 8E A8 */	lwz r7, __GDCurrentDL@sda21(r13)
/* 800780D0 00075010  80 C7 00 08 */	lwz r6, 8(r7)
/* 800780D4 00075014  38 A6 00 01 */	addi r5, r6, 1
/* 800780D8 00075018  90 A7 00 08 */	stw r5, 8(r7)
/* 800780DC 0007501C  98 86 00 00 */	stb r4, 0(r6)
/* 800780E0 00075020  80 ED 8E A8 */	lwz r7, __GDCurrentDL@sda21(r13)
/* 800780E4 00075024  80 C7 00 08 */	lwz r6, 8(r7)
/* 800780E8 00075028  38 A6 00 01 */	addi r5, r6, 1
/* 800780EC 0007502C  90 A7 00 08 */	stw r5, 8(r7)
/* 800780F0 00075030  99 06 00 00 */	stb r8, 0(r6)
/* 800780F4 00075034  80 ED 8E A8 */	lwz r7, __GDCurrentDL@sda21(r13)
/* 800780F8 00075038  81 7F 00 04 */	lwz r11, 4(r31)
/* 800780FC 0007503C  80 C7 00 08 */	lwz r6, 8(r7)
/* 80078100 00075040  55 6A 46 3E */	srwi r10, r11, 0x18
/* 80078104 00075044  55 69 86 3E */	rlwinm r9, r11, 0x10, 0x18, 0x1f
/* 80078108 00075048  38 A6 00 01 */	addi r5, r6, 1
/* 8007810C 0007504C  55 68 C6 3E */	rlwinm r8, r11, 0x18, 0x18, 0x1f
/* 80078110 00075050  90 A7 00 08 */	stw r5, 8(r7)
/* 80078114 00075054  99 46 00 00 */	stb r10, 0(r6)
/* 80078118 00075058  80 ED 8E A8 */	lwz r7, __GDCurrentDL@sda21(r13)
/* 8007811C 0007505C  80 C7 00 08 */	lwz r6, 8(r7)
/* 80078120 00075060  38 A6 00 01 */	addi r5, r6, 1
/* 80078124 00075064  90 A7 00 08 */	stw r5, 8(r7)
/* 80078128 00075068  99 26 00 00 */	stb r9, 0(r6)
/* 8007812C 0007506C  80 ED 8E A8 */	lwz r7, __GDCurrentDL@sda21(r13)
/* 80078130 00075070  80 C7 00 08 */	lwz r6, 8(r7)
/* 80078134 00075074  38 A6 00 01 */	addi r5, r6, 1
/* 80078138 00075078  90 A7 00 08 */	stw r5, 8(r7)
/* 8007813C 0007507C  99 06 00 00 */	stb r8, 0(r6)
/* 80078140 00075080  80 ED 8E A8 */	lwz r7, __GDCurrentDL@sda21(r13)
/* 80078144 00075084  80 C7 00 08 */	lwz r6, 8(r7)
/* 80078148 00075088  38 A6 00 01 */	addi r5, r6, 1
/* 8007814C 0007508C  90 A7 00 08 */	stw r5, 8(r7)
/* 80078150 00075090  99 66 00 00 */	stb r11, 0(r6)
/* 80078154 00075094  80 ED 8E A8 */	lwz r7, __GDCurrentDL@sda21(r13)
/* 80078158 00075098  81 7F 00 08 */	lwz r11, 8(r31)
/* 8007815C 0007509C  80 C7 00 08 */	lwz r6, 8(r7)
/* 80078160 000750A0  55 6A 46 3E */	srwi r10, r11, 0x18
/* 80078164 000750A4  55 69 86 3E */	rlwinm r9, r11, 0x10, 0x18, 0x1f
/* 80078168 000750A8  38 A6 00 01 */	addi r5, r6, 1
/* 8007816C 000750AC  55 68 C6 3E */	rlwinm r8, r11, 0x18, 0x18, 0x1f
/* 80078170 000750B0  90 A7 00 08 */	stw r5, 8(r7)
/* 80078174 000750B4  99 46 00 00 */	stb r10, 0(r6)
/* 80078178 000750B8  80 ED 8E A8 */	lwz r7, __GDCurrentDL@sda21(r13)
/* 8007817C 000750BC  80 C7 00 08 */	lwz r6, 8(r7)
/* 80078180 000750C0  38 A6 00 01 */	addi r5, r6, 1
/* 80078184 000750C4  90 A7 00 08 */	stw r5, 8(r7)
/* 80078188 000750C8  99 26 00 00 */	stb r9, 0(r6)
/* 8007818C 000750CC  80 ED 8E A8 */	lwz r7, __GDCurrentDL@sda21(r13)
/* 80078190 000750D0  80 C7 00 08 */	lwz r6, 8(r7)
/* 80078194 000750D4  38 A6 00 01 */	addi r5, r6, 1
/* 80078198 000750D8  90 A7 00 08 */	stw r5, 8(r7)
/* 8007819C 000750DC  99 06 00 00 */	stb r8, 0(r6)
/* 800781A0 000750E0  80 ED 8E A8 */	lwz r7, __GDCurrentDL@sda21(r13)
/* 800781A4 000750E4  80 C7 00 08 */	lwz r6, 8(r7)
/* 800781A8 000750E8  38 A6 00 01 */	addi r5, r6, 1
/* 800781AC 000750EC  90 A7 00 08 */	stw r5, 8(r7)
/* 800781B0 000750F0  99 66 00 00 */	stb r11, 0(r6)
/* 800781B4 000750F4  81 0D 8E A8 */	lwz r8, __GDCurrentDL@sda21(r13)
/* 800781B8 000750F8  38 E0 00 0A */	li r7, 0xa
/* 800781BC 000750FC  80 C8 00 08 */	lwz r6, 8(r8)
/* 800781C0 00075100  38 A6 00 01 */	addi r5, r6, 1
/* 800781C4 00075104  90 A8 00 08 */	stw r5, 8(r8)
/* 800781C8 00075108  98 86 00 00 */	stb r4, 0(r6)
/* 800781CC 0007510C  81 0D 8E A8 */	lwz r8, __GDCurrentDL@sda21(r13)
/* 800781D0 00075110  80 C8 00 08 */	lwz r6, 8(r8)
/* 800781D4 00075114  38 A6 00 01 */	addi r5, r6, 1
/* 800781D8 00075118  90 A8 00 08 */	stw r5, 8(r8)
/* 800781DC 0007511C  98 66 00 00 */	stb r3, 0(r6)
/* 800781E0 00075120  81 0D 8E A8 */	lwz r8, __GDCurrentDL@sda21(r13)
/* 800781E4 00075124  80 C8 00 08 */	lwz r6, 8(r8)
/* 800781E8 00075128  38 A6 00 01 */	addi r5, r6, 1
/* 800781EC 0007512C  90 A8 00 08 */	stw r5, 8(r8)
/* 800781F0 00075130  98 06 00 00 */	stb r0, 0(r6)
/* 800781F4 00075134  80 CD 8E A8 */	lwz r6, __GDCurrentDL@sda21(r13)
/* 800781F8 00075138  80 A6 00 08 */	lwz r5, 8(r6)
/* 800781FC 0007513C  38 05 00 01 */	addi r0, r5, 1
/* 80078200 00075140  90 06 00 08 */	stw r0, 8(r6)
/* 80078204 00075144  98 85 00 00 */	stb r4, 0(r5)
/* 80078208 00075148  80 CD 8E A8 */	lwz r6, __GDCurrentDL@sda21(r13)
/* 8007820C 0007514C  80 A6 00 08 */	lwz r5, 8(r6)
/* 80078210 00075150  38 05 00 01 */	addi r0, r5, 1
/* 80078214 00075154  90 06 00 08 */	stw r0, 8(r6)
/* 80078218 00075158  98 E5 00 00 */	stb r7, 0(r5)
/* 8007821C 0007515C  80 CD 8E A8 */	lwz r6, __GDCurrentDL@sda21(r13)
/* 80078220 00075160  81 5F 00 20 */	lwz r10, 0x20(r31)
/* 80078224 00075164  80 A6 00 08 */	lwz r5, 8(r6)
/* 80078228 00075168  55 49 46 3E */	srwi r9, r10, 0x18
/* 8007822C 0007516C  55 48 86 3E */	rlwinm r8, r10, 0x10, 0x18, 0x1f
/* 80078230 00075170  38 05 00 01 */	addi r0, r5, 1
/* 80078234 00075174  55 47 C6 3E */	rlwinm r7, r10, 0x18, 0x18, 0x1f
/* 80078238 00075178  90 06 00 08 */	stw r0, 8(r6)
/* 8007823C 0007517C  99 25 00 00 */	stb r9, 0(r5)
/* 80078240 00075180  80 CD 8E A8 */	lwz r6, __GDCurrentDL@sda21(r13)
/* 80078244 00075184  80 A6 00 08 */	lwz r5, 8(r6)
/* 80078248 00075188  38 05 00 01 */	addi r0, r5, 1
/* 8007824C 0007518C  90 06 00 08 */	stw r0, 8(r6)
/* 80078250 00075190  99 05 00 00 */	stb r8, 0(r5)
/* 80078254 00075194  80 CD 8E A8 */	lwz r6, __GDCurrentDL@sda21(r13)
/* 80078258 00075198  80 A6 00 08 */	lwz r5, 8(r6)
/* 8007825C 0007519C  38 05 00 01 */	addi r0, r5, 1
/* 80078260 000751A0  90 06 00 08 */	stw r0, 8(r6)
/* 80078264 000751A4  98 E5 00 00 */	stb r7, 0(r5)
/* 80078268 000751A8  80 CD 8E A8 */	lwz r6, __GDCurrentDL@sda21(r13)
/* 8007826C 000751AC  80 A6 00 08 */	lwz r5, 8(r6)
/* 80078270 000751B0  38 05 00 01 */	addi r0, r5, 1
/* 80078274 000751B4  90 06 00 08 */	stw r0, 8(r6)
/* 80078278 000751B8  99 45 00 00 */	stb r10, 0(r5)
/* 8007827C 000751BC  80 CD 8E A8 */	lwz r6, __GDCurrentDL@sda21(r13)
/* 80078280 000751C0  81 5F 00 24 */	lwz r10, 0x24(r31)
/* 80078284 000751C4  80 A6 00 08 */	lwz r5, 8(r6)
/* 80078288 000751C8  55 49 46 3E */	srwi r9, r10, 0x18
/* 8007828C 000751CC  55 48 86 3E */	rlwinm r8, r10, 0x10, 0x18, 0x1f
/* 80078290 000751D0  38 05 00 01 */	addi r0, r5, 1
/* 80078294 000751D4  55 47 C6 3E */	rlwinm r7, r10, 0x18, 0x18, 0x1f
/* 80078298 000751D8  90 06 00 08 */	stw r0, 8(r6)
/* 8007829C 000751DC  99 25 00 00 */	stb r9, 0(r5)
/* 800782A0 000751E0  80 CD 8E A8 */	lwz r6, __GDCurrentDL@sda21(r13)
/* 800782A4 000751E4  80 A6 00 08 */	lwz r5, 8(r6)
/* 800782A8 000751E8  38 05 00 01 */	addi r0, r5, 1
/* 800782AC 000751EC  90 06 00 08 */	stw r0, 8(r6)
/* 800782B0 000751F0  99 05 00 00 */	stb r8, 0(r5)
/* 800782B4 000751F4  80 CD 8E A8 */	lwz r6, __GDCurrentDL@sda21(r13)
/* 800782B8 000751F8  80 A6 00 08 */	lwz r5, 8(r6)
/* 800782BC 000751FC  38 05 00 01 */	addi r0, r5, 1
/* 800782C0 00075200  90 06 00 08 */	stw r0, 8(r6)
/* 800782C4 00075204  98 E5 00 00 */	stb r7, 0(r5)
/* 800782C8 00075208  80 CD 8E A8 */	lwz r6, __GDCurrentDL@sda21(r13)
/* 800782CC 0007520C  80 A6 00 08 */	lwz r5, 8(r6)
/* 800782D0 00075210  38 05 00 01 */	addi r0, r5, 1
/* 800782D4 00075214  90 06 00 08 */	stw r0, 8(r6)
/* 800782D8 00075218  99 45 00 00 */	stb r10, 0(r5)
/* 800782DC 0007521C  80 CD 8E A8 */	lwz r6, __GDCurrentDL@sda21(r13)
/* 800782E0 00075220  80 A6 00 00 */	lwz r5, 0(r6)
/* 800782E4 00075224  80 06 00 08 */	lwz r0, 8(r6)
/* 800782E8 00075228  7C 05 00 50 */	subf r0, r5, r0
/* 800782EC 0007522C  90 1F 00 1C */	stw r0, 0x1c(r31)
/* 800782F0 00075230  81 0D 8E A8 */	lwz r8, __GDCurrentDL@sda21(r13)
/* 800782F4 00075234  39 20 00 03 */	li r9, 3
/* 800782F8 00075238  38 E0 00 0E */	li r7, 0xe
/* 800782FC 0007523C  38 A1 00 14 */	addi r5, r1, 0x14
/* 80078300 00075240  80 C8 00 08 */	lwz r6, 8(r8)
/* 80078304 00075244  38 06 00 01 */	addi r0, r6, 1
/* 80078308 00075248  90 08 00 08 */	stw r0, 8(r8)
/* 8007830C 0007524C  98 86 00 00 */	stb r4, 0(r6)
/* 80078310 00075250  81 0D 8E A8 */	lwz r8, __GDCurrentDL@sda21(r13)
/* 80078314 00075254  80 C8 00 08 */	lwz r6, 8(r8)
/* 80078318 00075258  38 06 00 01 */	addi r0, r6, 1
/* 8007831C 0007525C  90 08 00 08 */	stw r0, 8(r8)
/* 80078320 00075260  98 66 00 00 */	stb r3, 0(r6)
/* 80078324 00075264  81 0D 8E A8 */	lwz r8, __GDCurrentDL@sda21(r13)
/* 80078328 00075268  80 C8 00 08 */	lwz r6, 8(r8)
/* 8007832C 0007526C  38 06 00 01 */	addi r0, r6, 1
/* 80078330 00075270  90 08 00 08 */	stw r0, 8(r8)
/* 80078334 00075274  99 26 00 00 */	stb r9, 0(r6)
/* 80078338 00075278  81 0D 8E A8 */	lwz r8, __GDCurrentDL@sda21(r13)
/* 8007833C 0007527C  80 C8 00 08 */	lwz r6, 8(r8)
/* 80078340 00075280  38 06 00 01 */	addi r0, r6, 1
/* 80078344 00075284  90 08 00 08 */	stw r0, 8(r8)
/* 80078348 00075288  98 86 00 00 */	stb r4, 0(r6)
/* 8007834C 0007528C  80 CD 8E A8 */	lwz r6, __GDCurrentDL@sda21(r13)
/* 80078350 00075290  80 86 00 08 */	lwz r4, 8(r6)
/* 80078354 00075294  38 04 00 01 */	addi r0, r4, 1
/* 80078358 00075298  90 06 00 08 */	stw r0, 8(r6)
/* 8007835C 0007529C  98 E4 00 00 */	stb r7, 0(r4)
/* 80078360 000752A0  80 02 87 78 */	lwz r0, lbl_80516AD8@sda21(r2)
/* 80078364 000752A4  A1 7F 00 0E */	lhz r11, 0xe(r31)
/* 80078368 000752A8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8007836C 000752AC  55 60 BF BE */	rlwinm r0, r11, 0x17, 0x1e, 0x1f
/* 80078370 000752B0  55 67 CE 36 */	rlwinm r7, r11, 0x19, 0x18, 0x1b
/* 80078374 000752B4  7D 05 00 AE */	lbzx r8, r5, r0
/* 80078378 000752B8  55 69 07 FE */	clrlwi r9, r11, 0x1f
/* 8007837C 000752BC  51 67 F7 3E */	rlwimi r7, r11, 0x1e, 0x1c, 0x1f
/* 80078380 000752C0  55 6A CF BE */	rlwinm r10, r11, 0x19, 0x1e, 0x1f
/* 80078384 000752C4  7C 08 00 D0 */	neg r0, r8
/* 80078388 000752C8  51 69 07 BC */	rlwimi r9, r11, 0, 0x1e, 0x1e
/* 8007838C 000752CC  7C 05 43 78 */	or r5, r0, r8
/* 80078390 000752D0  2C 08 00 00 */	cmpwi r8, 0
/* 80078394 000752D4  20 88 00 02 */	subfic r4, r8, 2
/* 80078398 000752D8  38 08 FF FE */	addi r0, r8, -2
/* 8007839C 000752DC  7C 80 03 78 */	or r0, r4, r0
/* 800783A0 000752E0  50 E9 16 BA */	rlwimi r9, r7, 2, 0x1a, 0x1d
/* 800783A4 000752E4  54 E8 3C 68 */	rlwinm r8, r7, 7, 0x11, 0x14
/* 800783A8 000752E8  54 A7 5D 6A */	rlwinm r7, r5, 0xb, 0x15, 0x15
/* 800783AC 000752EC  54 06 55 AC */	rlwinm r6, r0, 0xa, 0x16, 0x16
/* 800783B0 000752F0  51 69 06 72 */	rlwimi r9, r11, 0, 0x19, 0x19
/* 800783B4 000752F4  40 82 00 08 */	bne .L_800783BC
/* 800783B8 000752F8  7C 6A 1B 78 */	mr r10, r3
.L_800783BC:
/* 800783BC 000752FC  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 800783C0 00075300  55 40 38 30 */	slwi r0, r10, 7
/* 800783C4 00075304  7D 20 03 78 */	or r0, r9, r0
/* 800783C8 00075308  38 61 00 10 */	addi r3, r1, 0x10
/* 800783CC 0007530C  80 85 00 08 */	lwz r4, 8(r5)
/* 800783D0 00075310  7C C0 03 78 */	or r0, r6, r0
/* 800783D4 00075314  7C E6 03 78 */	or r6, r7, r0
/* 800783D8 00075318  38 04 00 01 */	addi r0, r4, 1
/* 800783DC 0007531C  7D 08 33 78 */	or r8, r8, r6
/* 800783E0 00075320  90 05 00 08 */	stw r0, 8(r5)
/* 800783E4 00075324  55 00 46 3E */	srwi r0, r8, 0x18
/* 800783E8 00075328  98 04 00 00 */	stb r0, 0(r4)
/* 800783EC 0007532C  55 07 86 3E */	rlwinm r7, r8, 0x10, 0x18, 0x1f
/* 800783F0 00075330  55 06 C6 3E */	rlwinm r6, r8, 0x18, 0x18, 0x1f
/* 800783F4 00075334  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 800783F8 00075338  80 85 00 08 */	lwz r4, 8(r5)
/* 800783FC 0007533C  38 04 00 01 */	addi r0, r4, 1
/* 80078400 00075340  90 05 00 08 */	stw r0, 8(r5)
/* 80078404 00075344  98 E4 00 00 */	stb r7, 0(r4)
/* 80078408 00075348  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 8007840C 0007534C  80 85 00 08 */	lwz r4, 8(r5)
/* 80078410 00075350  38 04 00 01 */	addi r0, r4, 1
/* 80078414 00075354  90 05 00 08 */	stw r0, 8(r5)
/* 80078418 00075358  98 C4 00 00 */	stb r6, 0(r4)
/* 8007841C 0007535C  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 80078420 00075360  80 85 00 08 */	lwz r4, 8(r5)
/* 80078424 00075364  38 04 00 01 */	addi r0, r4, 1
/* 80078428 00075368  90 05 00 08 */	stw r0, 8(r5)
/* 8007842C 0007536C  99 04 00 00 */	stb r8, 0(r4)
/* 80078430 00075370  80 02 87 78 */	lwz r0, lbl_80516AD8@sda21(r2)
/* 80078434 00075374  A1 1F 00 12 */	lhz r8, 0x12(r31)
/* 80078438 00075378  90 01 00 10 */	stw r0, 0x10(r1)
/* 8007843C 0007537C  55 00 BF BE */	rlwinm r0, r8, 0x17, 0x1e, 0x1f
/* 80078440 00075380  55 06 CE 36 */	rlwinm r6, r8, 0x19, 0x18, 0x1b
/* 80078444 00075384  7C E3 00 AE */	lbzx r7, r3, r0
/* 80078448 00075388  55 09 07 FE */	clrlwi r9, r8, 0x1f
/* 8007844C 0007538C  51 06 F7 3E */	rlwimi r6, r8, 0x1e, 0x1c, 0x1f
/* 80078450 00075390  55 0A CF BE */	rlwinm r10, r8, 0x19, 0x1e, 0x1f
/* 80078454 00075394  7C 07 00 D0 */	neg r0, r7
/* 80078458 00075398  51 09 07 BC */	rlwimi r9, r8, 0, 0x1e, 0x1e
/* 8007845C 0007539C  7C 04 3B 78 */	or r4, r0, r7
/* 80078460 000753A0  2C 07 00 00 */	cmpwi r7, 0
/* 80078464 000753A4  20 67 00 02 */	subfic r3, r7, 2
/* 80078468 000753A8  38 07 FF FE */	addi r0, r7, -2
/* 8007846C 000753AC  7C 60 03 78 */	or r0, r3, r0
/* 80078470 000753B0  50 C9 16 BA */	rlwimi r9, r6, 2, 0x1a, 0x1d
/* 80078474 000753B4  55 03 D7 FE */	rlwinm r3, r8, 0x1a, 0x1f, 0x1f
/* 80078478 000753B8  54 C8 3C 68 */	rlwinm r8, r6, 7, 0x11, 0x14
/* 8007847C 000753BC  54 87 5D 6A */	rlwinm r7, r4, 0xb, 0x15, 0x15
/* 80078480 000753C0  54 06 55 AC */	rlwinm r6, r0, 0xa, 0x16, 0x16
/* 80078484 000753C4  50 69 36 72 */	rlwimi r9, r3, 6, 0x19, 0x19
/* 80078488 000753C8  40 82 00 08 */	bne .L_80078490
/* 8007848C 000753CC  39 40 00 00 */	li r10, 0
.L_80078490:
/* 80078490 000753D0  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 80078494 000753D4  55 40 38 30 */	slwi r0, r10, 7
/* 80078498 000753D8  7D 20 03 78 */	or r0, r9, r0
/* 8007849C 000753DC  38 61 00 0C */	addi r3, r1, 0xc
/* 800784A0 000753E0  80 85 00 08 */	lwz r4, 8(r5)
/* 800784A4 000753E4  7C C0 03 78 */	or r0, r6, r0
/* 800784A8 000753E8  7C E6 03 78 */	or r6, r7, r0
/* 800784AC 000753EC  38 04 00 01 */	addi r0, r4, 1
/* 800784B0 000753F0  7D 08 33 78 */	or r8, r8, r6
/* 800784B4 000753F4  90 05 00 08 */	stw r0, 8(r5)
/* 800784B8 000753F8  55 00 46 3E */	srwi r0, r8, 0x18
/* 800784BC 000753FC  98 04 00 00 */	stb r0, 0(r4)
/* 800784C0 00075400  55 07 86 3E */	rlwinm r7, r8, 0x10, 0x18, 0x1f
/* 800784C4 00075404  55 06 C6 3E */	rlwinm r6, r8, 0x18, 0x18, 0x1f
/* 800784C8 00075408  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 800784CC 0007540C  80 85 00 08 */	lwz r4, 8(r5)
/* 800784D0 00075410  38 04 00 01 */	addi r0, r4, 1
/* 800784D4 00075414  90 05 00 08 */	stw r0, 8(r5)
/* 800784D8 00075418  98 E4 00 00 */	stb r7, 0(r4)
/* 800784DC 0007541C  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 800784E0 00075420  80 85 00 08 */	lwz r4, 8(r5)
/* 800784E4 00075424  38 04 00 01 */	addi r0, r4, 1
/* 800784E8 00075428  90 05 00 08 */	stw r0, 8(r5)
/* 800784EC 0007542C  98 C4 00 00 */	stb r6, 0(r4)
/* 800784F0 00075430  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 800784F4 00075434  80 85 00 08 */	lwz r4, 8(r5)
/* 800784F8 00075438  38 04 00 01 */	addi r0, r4, 1
/* 800784FC 0007543C  90 05 00 08 */	stw r0, 8(r5)
/* 80078500 00075440  99 04 00 00 */	stb r8, 0(r4)
/* 80078504 00075444  80 02 87 78 */	lwz r0, lbl_80516AD8@sda21(r2)
/* 80078508 00075448  A1 1F 00 10 */	lhz r8, 0x10(r31)
/* 8007850C 0007544C  90 01 00 0C */	stw r0, 0xc(r1)
/* 80078510 00075450  55 00 BF BE */	rlwinm r0, r8, 0x17, 0x1e, 0x1f
/* 80078514 00075454  55 06 CE 36 */	rlwinm r6, r8, 0x19, 0x18, 0x1b
/* 80078518 00075458  7C E3 00 AE */	lbzx r7, r3, r0
/* 8007851C 0007545C  55 09 07 FE */	clrlwi r9, r8, 0x1f
/* 80078520 00075460  51 06 F7 3E */	rlwimi r6, r8, 0x1e, 0x1c, 0x1f
/* 80078524 00075464  55 0A CF BE */	rlwinm r10, r8, 0x19, 0x1e, 0x1f
/* 80078528 00075468  7C 07 00 D0 */	neg r0, r7
/* 8007852C 0007546C  51 09 07 BC */	rlwimi r9, r8, 0, 0x1e, 0x1e
/* 80078530 00075470  7C 04 3B 78 */	or r4, r0, r7
/* 80078534 00075474  2C 07 00 00 */	cmpwi r7, 0
/* 80078538 00075478  20 67 00 02 */	subfic r3, r7, 2
/* 8007853C 0007547C  38 07 FF FE */	addi r0, r7, -2
/* 80078540 00075480  7C 60 03 78 */	or r0, r3, r0
/* 80078544 00075484  50 C9 16 BA */	rlwimi r9, r6, 2, 0x1a, 0x1d
/* 80078548 00075488  55 03 D7 FE */	rlwinm r3, r8, 0x1a, 0x1f, 0x1f
/* 8007854C 0007548C  54 C8 3C 68 */	rlwinm r8, r6, 7, 0x11, 0x14
/* 80078550 00075490  54 87 5D 6A */	rlwinm r7, r4, 0xb, 0x15, 0x15
/* 80078554 00075494  54 06 55 AC */	rlwinm r6, r0, 0xa, 0x16, 0x16
/* 80078558 00075498  50 69 36 72 */	rlwimi r9, r3, 6, 0x19, 0x19
/* 8007855C 0007549C  40 82 00 08 */	bne .L_80078564
/* 80078560 000754A0  39 40 00 00 */	li r10, 0
.L_80078564:
/* 80078564 000754A4  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 80078568 000754A8  55 40 38 30 */	slwi r0, r10, 7
/* 8007856C 000754AC  7D 20 03 78 */	or r0, r9, r0
/* 80078570 000754B0  38 61 00 08 */	addi r3, r1, 8
/* 80078574 000754B4  80 85 00 08 */	lwz r4, 8(r5)
/* 80078578 000754B8  7C C0 03 78 */	or r0, r6, r0
/* 8007857C 000754BC  7C E6 03 78 */	or r6, r7, r0
/* 80078580 000754C0  38 04 00 01 */	addi r0, r4, 1
/* 80078584 000754C4  7D 08 33 78 */	or r8, r8, r6
/* 80078588 000754C8  90 05 00 08 */	stw r0, 8(r5)
/* 8007858C 000754CC  55 00 46 3E */	srwi r0, r8, 0x18
/* 80078590 000754D0  98 04 00 00 */	stb r0, 0(r4)
/* 80078594 000754D4  55 07 86 3E */	rlwinm r7, r8, 0x10, 0x18, 0x1f
/* 80078598 000754D8  55 06 C6 3E */	rlwinm r6, r8, 0x18, 0x18, 0x1f
/* 8007859C 000754DC  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 800785A0 000754E0  80 85 00 08 */	lwz r4, 8(r5)
/* 800785A4 000754E4  38 04 00 01 */	addi r0, r4, 1
/* 800785A8 000754E8  90 05 00 08 */	stw r0, 8(r5)
/* 800785AC 000754EC  98 E4 00 00 */	stb r7, 0(r4)
/* 800785B0 000754F0  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 800785B4 000754F4  80 85 00 08 */	lwz r4, 8(r5)
/* 800785B8 000754F8  38 04 00 01 */	addi r0, r4, 1
/* 800785BC 000754FC  90 05 00 08 */	stw r0, 8(r5)
/* 800785C0 00075500  98 C4 00 00 */	stb r6, 0(r4)
/* 800785C4 00075504  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 800785C8 00075508  80 85 00 08 */	lwz r4, 8(r5)
/* 800785CC 0007550C  38 04 00 01 */	addi r0, r4, 1
/* 800785D0 00075510  90 05 00 08 */	stw r0, 8(r5)
/* 800785D4 00075514  99 04 00 00 */	stb r8, 0(r4)
/* 800785D8 00075518  80 02 87 78 */	lwz r0, lbl_80516AD8@sda21(r2)
/* 800785DC 0007551C  A1 5F 00 14 */	lhz r10, 0x14(r31)
/* 800785E0 00075520  90 01 00 08 */	stw r0, 8(r1)
/* 800785E4 00075524  55 40 BF BE */	rlwinm r0, r10, 0x17, 0x1e, 0x1f
/* 800785E8 00075528  55 46 CE 36 */	rlwinm r6, r10, 0x19, 0x18, 0x1b
/* 800785EC 0007552C  7C E3 00 AE */	lbzx r7, r3, r0
/* 800785F0 00075530  55 48 07 FE */	clrlwi r8, r10, 0x1f
/* 800785F4 00075534  51 46 F7 3E */	rlwimi r6, r10, 0x1e, 0x1c, 0x1f
/* 800785F8 00075538  55 49 CF BE */	rlwinm r9, r10, 0x19, 0x1e, 0x1f
/* 800785FC 0007553C  7C 07 00 D0 */	neg r0, r7
/* 80078600 00075540  51 48 07 BC */	rlwimi r8, r10, 0, 0x1e, 0x1e
/* 80078604 00075544  7C 04 3B 78 */	or r4, r0, r7
/* 80078608 00075548  2C 07 00 00 */	cmpwi r7, 0
/* 8007860C 0007554C  20 67 00 02 */	subfic r3, r7, 2
/* 80078610 00075550  38 07 FF FE */	addi r0, r7, -2
/* 80078614 00075554  7C 60 03 78 */	or r0, r3, r0
/* 80078618 00075558  50 C8 16 BA */	rlwimi r8, r6, 2, 0x1a, 0x1d
/* 8007861C 0007555C  54 C7 3C 68 */	rlwinm r7, r6, 7, 0x11, 0x14
/* 80078620 00075560  54 86 5D 6A */	rlwinm r6, r4, 0xb, 0x15, 0x15
/* 80078624 00075564  54 05 55 AC */	rlwinm r5, r0, 0xa, 0x16, 0x16
/* 80078628 00075568  51 48 06 72 */	rlwimi r8, r10, 0, 0x19, 0x19
/* 8007862C 0007556C  40 82 00 08 */	bne .L_80078634
/* 80078630 00075570  39 20 00 00 */	li r9, 0
.L_80078634:
/* 80078634 00075574  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 80078638 00075578  55 20 38 30 */	slwi r0, r9, 7
/* 8007863C 0007557C  7D 00 03 78 */	or r0, r8, r0
/* 80078640 00075580  80 64 00 08 */	lwz r3, 8(r4)
/* 80078644 00075584  7C A0 03 78 */	or r0, r5, r0
/* 80078648 00075588  7C C5 03 78 */	or r5, r6, r0
/* 8007864C 0007558C  38 03 00 01 */	addi r0, r3, 1
/* 80078650 00075590  7C E7 2B 78 */	or r7, r7, r5
/* 80078654 00075594  90 04 00 08 */	stw r0, 8(r4)
/* 80078658 00075598  54 E0 46 3E */	srwi r0, r7, 0x18
/* 8007865C 0007559C  98 03 00 00 */	stb r0, 0(r3)
/* 80078660 000755A0  54 E6 86 3E */	rlwinm r6, r7, 0x10, 0x18, 0x1f
/* 80078664 000755A4  54 E5 C6 3E */	rlwinm r5, r7, 0x18, 0x18, 0x1f
/* 80078668 000755A8  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 8007866C 000755AC  80 64 00 08 */	lwz r3, 8(r4)
/* 80078670 000755B0  38 03 00 01 */	addi r0, r3, 1
/* 80078674 000755B4  90 04 00 08 */	stw r0, 8(r4)
/* 80078678 000755B8  98 C3 00 00 */	stb r6, 0(r3)
/* 8007867C 000755BC  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 80078680 000755C0  80 64 00 08 */	lwz r3, 8(r4)
/* 80078684 000755C4  38 03 00 01 */	addi r0, r3, 1
/* 80078688 000755C8  90 04 00 08 */	stw r0, 8(r4)
/* 8007868C 000755CC  98 A3 00 00 */	stb r5, 0(r3)
/* 80078690 000755D0  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 80078694 000755D4  80 64 00 08 */	lwz r3, 8(r4)
/* 80078698 000755D8  38 03 00 01 */	addi r0, r3, 1
/* 8007869C 000755DC  90 04 00 08 */	stw r0, 8(r4)
/* 800786A0 000755E0  98 E3 00 00 */	stb r7, 0(r3)
/* 800786A4 000755E4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 800786A8 000755E8  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 800786AC 000755EC  7C 08 03 A6 */	mtlr r0
/* 800786B0 000755F0  38 21 00 20 */	addi r1, r1, 0x20
/* 800786B4 000755F4  4E 80 00 20 */	blr 
.endfn load__22J3DColorBlockAmbientOnFv

.fn load__20J3DColorBlockLightOnFv, global
/* 800786B8 000755F8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 800786BC 000755FC  7C 08 02 A6 */	mflr r0
/* 800786C0 00075600  90 01 00 24 */	stw r0, 0x24(r1)
/* 800786C4 00075604  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 800786C8 00075608  7C 7F 1B 78 */	mr r31, r3
/* 800786CC 0007560C  93 C1 00 18 */	stw r30, 0x18(r1)
/* 800786D0 00075610  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 800786D4 00075614  80 6D 89 9C */	lwz r3, SizeOfJ3DColorBlockAmbientOnLoad@sda21(r13)
/* 800786D8 00075618  80 85 00 08 */	lwz r4, 8(r5)
/* 800786DC 0007561C  80 05 00 0C */	lwz r0, 0xc(r5)
/* 800786E0 00075620  7C 64 1A 14 */	add r3, r4, r3
/* 800786E4 00075624  7C 03 00 40 */	cmplw r3, r0
/* 800786E8 00075628  40 81 00 08 */	ble .L_800786F0
/* 800786EC 0007562C  48 06 95 55 */	bl GDOverflowed
.L_800786F0:
/* 800786F0 00075630  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 800786F4 00075634  38 80 00 10 */	li r4, 0x10
/* 800786F8 00075638  38 60 00 00 */	li r3, 0
/* 800786FC 0007563C  38 00 00 01 */	li r0, 1
/* 80078700 00075640  80 C5 00 00 */	lwz r6, 0(r5)
/* 80078704 00075644  39 00 00 0C */	li r8, 0xc
/* 80078708 00075648  80 A5 00 08 */	lwz r5, 8(r5)
/* 8007870C 0007564C  7C A6 28 50 */	subf r5, r6, r5
/* 80078710 00075650  90 BF 00 44 */	stw r5, 0x44(r31)
/* 80078714 00075654  80 ED 8E A8 */	lwz r7, __GDCurrentDL@sda21(r13)
/* 80078718 00075658  80 C7 00 08 */	lwz r6, 8(r7)
/* 8007871C 0007565C  38 A6 00 01 */	addi r5, r6, 1
/* 80078720 00075660  90 A7 00 08 */	stw r5, 8(r7)
/* 80078724 00075664  98 86 00 00 */	stb r4, 0(r6)
/* 80078728 00075668  80 ED 8E A8 */	lwz r7, __GDCurrentDL@sda21(r13)
/* 8007872C 0007566C  80 C7 00 08 */	lwz r6, 8(r7)
/* 80078730 00075670  38 A6 00 01 */	addi r5, r6, 1
/* 80078734 00075674  90 A7 00 08 */	stw r5, 8(r7)
/* 80078738 00075678  98 66 00 00 */	stb r3, 0(r6)
/* 8007873C 0007567C  80 ED 8E A8 */	lwz r7, __GDCurrentDL@sda21(r13)
/* 80078740 00075680  80 C7 00 08 */	lwz r6, 8(r7)
/* 80078744 00075684  38 A6 00 01 */	addi r5, r6, 1
/* 80078748 00075688  90 A7 00 08 */	stw r5, 8(r7)
/* 8007874C 0007568C  98 06 00 00 */	stb r0, 0(r6)
/* 80078750 00075690  80 ED 8E A8 */	lwz r7, __GDCurrentDL@sda21(r13)
/* 80078754 00075694  80 C7 00 08 */	lwz r6, 8(r7)
/* 80078758 00075698  38 A6 00 01 */	addi r5, r6, 1
/* 8007875C 0007569C  90 A7 00 08 */	stw r5, 8(r7)
/* 80078760 000756A0  98 86 00 00 */	stb r4, 0(r6)
/* 80078764 000756A4  80 ED 8E A8 */	lwz r7, __GDCurrentDL@sda21(r13)
/* 80078768 000756A8  80 C7 00 08 */	lwz r6, 8(r7)
/* 8007876C 000756AC  38 A6 00 01 */	addi r5, r6, 1
/* 80078770 000756B0  90 A7 00 08 */	stw r5, 8(r7)
/* 80078774 000756B4  99 06 00 00 */	stb r8, 0(r6)
/* 80078778 000756B8  80 ED 8E A8 */	lwz r7, __GDCurrentDL@sda21(r13)
/* 8007877C 000756BC  81 7F 00 04 */	lwz r11, 4(r31)
/* 80078780 000756C0  80 C7 00 08 */	lwz r6, 8(r7)
/* 80078784 000756C4  55 6A 46 3E */	srwi r10, r11, 0x18
/* 80078788 000756C8  55 69 86 3E */	rlwinm r9, r11, 0x10, 0x18, 0x1f
/* 8007878C 000756CC  38 A6 00 01 */	addi r5, r6, 1
/* 80078790 000756D0  55 68 C6 3E */	rlwinm r8, r11, 0x18, 0x18, 0x1f
/* 80078794 000756D4  90 A7 00 08 */	stw r5, 8(r7)
/* 80078798 000756D8  99 46 00 00 */	stb r10, 0(r6)
/* 8007879C 000756DC  80 ED 8E A8 */	lwz r7, __GDCurrentDL@sda21(r13)
/* 800787A0 000756E0  80 C7 00 08 */	lwz r6, 8(r7)
/* 800787A4 000756E4  38 A6 00 01 */	addi r5, r6, 1
/* 800787A8 000756E8  90 A7 00 08 */	stw r5, 8(r7)
/* 800787AC 000756EC  99 26 00 00 */	stb r9, 0(r6)
/* 800787B0 000756F0  80 ED 8E A8 */	lwz r7, __GDCurrentDL@sda21(r13)
/* 800787B4 000756F4  80 C7 00 08 */	lwz r6, 8(r7)
/* 800787B8 000756F8  38 A6 00 01 */	addi r5, r6, 1
/* 800787BC 000756FC  90 A7 00 08 */	stw r5, 8(r7)
/* 800787C0 00075700  99 06 00 00 */	stb r8, 0(r6)
/* 800787C4 00075704  80 ED 8E A8 */	lwz r7, __GDCurrentDL@sda21(r13)
/* 800787C8 00075708  80 C7 00 08 */	lwz r6, 8(r7)
/* 800787CC 0007570C  38 A6 00 01 */	addi r5, r6, 1
/* 800787D0 00075710  90 A7 00 08 */	stw r5, 8(r7)
/* 800787D4 00075714  99 66 00 00 */	stb r11, 0(r6)
/* 800787D8 00075718  80 ED 8E A8 */	lwz r7, __GDCurrentDL@sda21(r13)
/* 800787DC 0007571C  81 7F 00 08 */	lwz r11, 8(r31)
/* 800787E0 00075720  80 C7 00 08 */	lwz r6, 8(r7)
/* 800787E4 00075724  55 6A 46 3E */	srwi r10, r11, 0x18
/* 800787E8 00075728  55 69 86 3E */	rlwinm r9, r11, 0x10, 0x18, 0x1f
/* 800787EC 0007572C  38 A6 00 01 */	addi r5, r6, 1
/* 800787F0 00075730  55 68 C6 3E */	rlwinm r8, r11, 0x18, 0x18, 0x1f
/* 800787F4 00075734  90 A7 00 08 */	stw r5, 8(r7)
/* 800787F8 00075738  99 46 00 00 */	stb r10, 0(r6)
/* 800787FC 0007573C  80 ED 8E A8 */	lwz r7, __GDCurrentDL@sda21(r13)
/* 80078800 00075740  80 C7 00 08 */	lwz r6, 8(r7)
/* 80078804 00075744  38 A6 00 01 */	addi r5, r6, 1
/* 80078808 00075748  90 A7 00 08 */	stw r5, 8(r7)
/* 8007880C 0007574C  99 26 00 00 */	stb r9, 0(r6)
/* 80078810 00075750  80 ED 8E A8 */	lwz r7, __GDCurrentDL@sda21(r13)
/* 80078814 00075754  80 C7 00 08 */	lwz r6, 8(r7)
/* 80078818 00075758  38 A6 00 01 */	addi r5, r6, 1
/* 8007881C 0007575C  90 A7 00 08 */	stw r5, 8(r7)
/* 80078820 00075760  99 06 00 00 */	stb r8, 0(r6)
/* 80078824 00075764  80 ED 8E A8 */	lwz r7, __GDCurrentDL@sda21(r13)
/* 80078828 00075768  80 C7 00 08 */	lwz r6, 8(r7)
/* 8007882C 0007576C  38 A6 00 01 */	addi r5, r6, 1
/* 80078830 00075770  90 A7 00 08 */	stw r5, 8(r7)
/* 80078834 00075774  99 66 00 00 */	stb r11, 0(r6)
/* 80078838 00075778  81 0D 8E A8 */	lwz r8, __GDCurrentDL@sda21(r13)
/* 8007883C 0007577C  38 E0 00 0A */	li r7, 0xa
/* 80078840 00075780  80 C8 00 08 */	lwz r6, 8(r8)
/* 80078844 00075784  38 A6 00 01 */	addi r5, r6, 1
/* 80078848 00075788  90 A8 00 08 */	stw r5, 8(r8)
/* 8007884C 0007578C  98 86 00 00 */	stb r4, 0(r6)
/* 80078850 00075790  81 0D 8E A8 */	lwz r8, __GDCurrentDL@sda21(r13)
/* 80078854 00075794  80 C8 00 08 */	lwz r6, 8(r8)
/* 80078858 00075798  38 A6 00 01 */	addi r5, r6, 1
/* 8007885C 0007579C  90 A8 00 08 */	stw r5, 8(r8)
/* 80078860 000757A0  98 66 00 00 */	stb r3, 0(r6)
/* 80078864 000757A4  81 0D 8E A8 */	lwz r8, __GDCurrentDL@sda21(r13)
/* 80078868 000757A8  80 C8 00 08 */	lwz r6, 8(r8)
/* 8007886C 000757AC  38 A6 00 01 */	addi r5, r6, 1
/* 80078870 000757B0  90 A8 00 08 */	stw r5, 8(r8)
/* 80078874 000757B4  98 06 00 00 */	stb r0, 0(r6)
/* 80078878 000757B8  80 CD 8E A8 */	lwz r6, __GDCurrentDL@sda21(r13)
/* 8007887C 000757BC  80 A6 00 08 */	lwz r5, 8(r6)
/* 80078880 000757C0  38 05 00 01 */	addi r0, r5, 1
/* 80078884 000757C4  90 06 00 08 */	stw r0, 8(r6)
/* 80078888 000757C8  98 85 00 00 */	stb r4, 0(r5)
/* 8007888C 000757CC  80 CD 8E A8 */	lwz r6, __GDCurrentDL@sda21(r13)
/* 80078890 000757D0  80 A6 00 08 */	lwz r5, 8(r6)
/* 80078894 000757D4  38 05 00 01 */	addi r0, r5, 1
/* 80078898 000757D8  90 06 00 08 */	stw r0, 8(r6)
/* 8007889C 000757DC  98 E5 00 00 */	stb r7, 0(r5)
/* 800788A0 000757E0  80 CD 8E A8 */	lwz r6, __GDCurrentDL@sda21(r13)
/* 800788A4 000757E4  81 5F 00 0C */	lwz r10, 0xc(r31)
/* 800788A8 000757E8  80 A6 00 08 */	lwz r5, 8(r6)
/* 800788AC 000757EC  55 49 46 3E */	srwi r9, r10, 0x18
/* 800788B0 000757F0  55 48 86 3E */	rlwinm r8, r10, 0x10, 0x18, 0x1f
/* 800788B4 000757F4  38 05 00 01 */	addi r0, r5, 1
/* 800788B8 000757F8  55 47 C6 3E */	rlwinm r7, r10, 0x18, 0x18, 0x1f
/* 800788BC 000757FC  90 06 00 08 */	stw r0, 8(r6)
/* 800788C0 00075800  99 25 00 00 */	stb r9, 0(r5)
/* 800788C4 00075804  80 CD 8E A8 */	lwz r6, __GDCurrentDL@sda21(r13)
/* 800788C8 00075808  80 A6 00 08 */	lwz r5, 8(r6)
/* 800788CC 0007580C  38 05 00 01 */	addi r0, r5, 1
/* 800788D0 00075810  90 06 00 08 */	stw r0, 8(r6)
/* 800788D4 00075814  99 05 00 00 */	stb r8, 0(r5)
/* 800788D8 00075818  80 CD 8E A8 */	lwz r6, __GDCurrentDL@sda21(r13)
/* 800788DC 0007581C  80 A6 00 08 */	lwz r5, 8(r6)
/* 800788E0 00075820  38 05 00 01 */	addi r0, r5, 1
/* 800788E4 00075824  90 06 00 08 */	stw r0, 8(r6)
/* 800788E8 00075828  98 E5 00 00 */	stb r7, 0(r5)
/* 800788EC 0007582C  80 CD 8E A8 */	lwz r6, __GDCurrentDL@sda21(r13)
/* 800788F0 00075830  80 A6 00 08 */	lwz r5, 8(r6)
/* 800788F4 00075834  38 05 00 01 */	addi r0, r5, 1
/* 800788F8 00075838  90 06 00 08 */	stw r0, 8(r6)
/* 800788FC 0007583C  99 45 00 00 */	stb r10, 0(r5)
/* 80078900 00075840  80 CD 8E A8 */	lwz r6, __GDCurrentDL@sda21(r13)
/* 80078904 00075844  81 5F 00 10 */	lwz r10, 0x10(r31)
/* 80078908 00075848  80 A6 00 08 */	lwz r5, 8(r6)
/* 8007890C 0007584C  55 49 46 3E */	srwi r9, r10, 0x18
/* 80078910 00075850  55 48 86 3E */	rlwinm r8, r10, 0x10, 0x18, 0x1f
/* 80078914 00075854  38 05 00 01 */	addi r0, r5, 1
/* 80078918 00075858  55 47 C6 3E */	rlwinm r7, r10, 0x18, 0x18, 0x1f
/* 8007891C 0007585C  90 06 00 08 */	stw r0, 8(r6)
/* 80078920 00075860  99 25 00 00 */	stb r9, 0(r5)
/* 80078924 00075864  80 CD 8E A8 */	lwz r6, __GDCurrentDL@sda21(r13)
/* 80078928 00075868  80 A6 00 08 */	lwz r5, 8(r6)
/* 8007892C 0007586C  38 05 00 01 */	addi r0, r5, 1
/* 80078930 00075870  90 06 00 08 */	stw r0, 8(r6)
/* 80078934 00075874  99 05 00 00 */	stb r8, 0(r5)
/* 80078938 00075878  80 CD 8E A8 */	lwz r6, __GDCurrentDL@sda21(r13)
/* 8007893C 0007587C  80 A6 00 08 */	lwz r5, 8(r6)
/* 80078940 00075880  38 05 00 01 */	addi r0, r5, 1
/* 80078944 00075884  90 06 00 08 */	stw r0, 8(r6)
/* 80078948 00075888  98 E5 00 00 */	stb r7, 0(r5)
/* 8007894C 0007588C  80 CD 8E A8 */	lwz r6, __GDCurrentDL@sda21(r13)
/* 80078950 00075890  80 A6 00 08 */	lwz r5, 8(r6)
/* 80078954 00075894  38 05 00 01 */	addi r0, r5, 1
/* 80078958 00075898  90 06 00 08 */	stw r0, 8(r6)
/* 8007895C 0007589C  99 45 00 00 */	stb r10, 0(r5)
/* 80078960 000758A0  80 CD 8E A8 */	lwz r6, __GDCurrentDL@sda21(r13)
/* 80078964 000758A4  80 A6 00 00 */	lwz r5, 0(r6)
/* 80078968 000758A8  80 06 00 08 */	lwz r0, 8(r6)
/* 8007896C 000758AC  7C 05 00 50 */	subf r0, r5, r0
/* 80078970 000758B0  90 1F 00 48 */	stw r0, 0x48(r31)
/* 80078974 000758B4  81 0D 8E A8 */	lwz r8, __GDCurrentDL@sda21(r13)
/* 80078978 000758B8  39 20 00 03 */	li r9, 3
/* 8007897C 000758BC  38 E0 00 0E */	li r7, 0xe
/* 80078980 000758C0  38 A1 00 14 */	addi r5, r1, 0x14
/* 80078984 000758C4  80 C8 00 08 */	lwz r6, 8(r8)
/* 80078988 000758C8  38 06 00 01 */	addi r0, r6, 1
/* 8007898C 000758CC  90 08 00 08 */	stw r0, 8(r8)
/* 80078990 000758D0  98 86 00 00 */	stb r4, 0(r6)
/* 80078994 000758D4  81 0D 8E A8 */	lwz r8, __GDCurrentDL@sda21(r13)
/* 80078998 000758D8  80 C8 00 08 */	lwz r6, 8(r8)
/* 8007899C 000758DC  38 06 00 01 */	addi r0, r6, 1
/* 800789A0 000758E0  90 08 00 08 */	stw r0, 8(r8)
/* 800789A4 000758E4  98 66 00 00 */	stb r3, 0(r6)
/* 800789A8 000758E8  81 0D 8E A8 */	lwz r8, __GDCurrentDL@sda21(r13)
/* 800789AC 000758EC  80 C8 00 08 */	lwz r6, 8(r8)
/* 800789B0 000758F0  38 06 00 01 */	addi r0, r6, 1
/* 800789B4 000758F4  90 08 00 08 */	stw r0, 8(r8)
/* 800789B8 000758F8  99 26 00 00 */	stb r9, 0(r6)
/* 800789BC 000758FC  81 0D 8E A8 */	lwz r8, __GDCurrentDL@sda21(r13)
/* 800789C0 00075900  80 C8 00 08 */	lwz r6, 8(r8)
/* 800789C4 00075904  38 06 00 01 */	addi r0, r6, 1
/* 800789C8 00075908  90 08 00 08 */	stw r0, 8(r8)
/* 800789CC 0007590C  98 86 00 00 */	stb r4, 0(r6)
/* 800789D0 00075910  80 CD 8E A8 */	lwz r6, __GDCurrentDL@sda21(r13)
/* 800789D4 00075914  80 86 00 08 */	lwz r4, 8(r6)
/* 800789D8 00075918  38 04 00 01 */	addi r0, r4, 1
/* 800789DC 0007591C  90 06 00 08 */	stw r0, 8(r6)
/* 800789E0 00075920  98 E4 00 00 */	stb r7, 0(r4)
/* 800789E4 00075924  80 02 87 78 */	lwz r0, lbl_80516AD8@sda21(r2)
/* 800789E8 00075928  A1 7F 00 16 */	lhz r11, 0x16(r31)
/* 800789EC 0007592C  90 01 00 14 */	stw r0, 0x14(r1)
/* 800789F0 00075930  55 60 BF BE */	rlwinm r0, r11, 0x17, 0x1e, 0x1f
/* 800789F4 00075934  55 67 CE 36 */	rlwinm r7, r11, 0x19, 0x18, 0x1b
/* 800789F8 00075938  7D 05 00 AE */	lbzx r8, r5, r0
/* 800789FC 0007593C  55 69 07 FE */	clrlwi r9, r11, 0x1f
/* 80078A00 00075940  51 67 F7 3E */	rlwimi r7, r11, 0x1e, 0x1c, 0x1f
/* 80078A04 00075944  55 6A CF BE */	rlwinm r10, r11, 0x19, 0x1e, 0x1f
/* 80078A08 00075948  7C 08 00 D0 */	neg r0, r8
/* 80078A0C 0007594C  51 69 07 BC */	rlwimi r9, r11, 0, 0x1e, 0x1e
/* 80078A10 00075950  7C 05 43 78 */	or r5, r0, r8
/* 80078A14 00075954  2C 08 00 00 */	cmpwi r8, 0
/* 80078A18 00075958  20 88 00 02 */	subfic r4, r8, 2
/* 80078A1C 0007595C  38 08 FF FE */	addi r0, r8, -2
/* 80078A20 00075960  7C 80 03 78 */	or r0, r4, r0
/* 80078A24 00075964  50 E9 16 BA */	rlwimi r9, r7, 2, 0x1a, 0x1d
/* 80078A28 00075968  54 E8 3C 68 */	rlwinm r8, r7, 7, 0x11, 0x14
/* 80078A2C 0007596C  54 A7 5D 6A */	rlwinm r7, r5, 0xb, 0x15, 0x15
/* 80078A30 00075970  54 06 55 AC */	rlwinm r6, r0, 0xa, 0x16, 0x16
/* 80078A34 00075974  51 69 06 72 */	rlwimi r9, r11, 0, 0x19, 0x19
/* 80078A38 00075978  40 82 00 08 */	bne .L_80078A40
/* 80078A3C 0007597C  7C 6A 1B 78 */	mr r10, r3
.L_80078A40:
/* 80078A40 00075980  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 80078A44 00075984  55 40 38 30 */	slwi r0, r10, 7
/* 80078A48 00075988  7D 20 03 78 */	or r0, r9, r0
/* 80078A4C 0007598C  38 61 00 10 */	addi r3, r1, 0x10
/* 80078A50 00075990  80 85 00 08 */	lwz r4, 8(r5)
/* 80078A54 00075994  7C C0 03 78 */	or r0, r6, r0
/* 80078A58 00075998  7C E6 03 78 */	or r6, r7, r0
/* 80078A5C 0007599C  38 04 00 01 */	addi r0, r4, 1
/* 80078A60 000759A0  7D 08 33 78 */	or r8, r8, r6
/* 80078A64 000759A4  90 05 00 08 */	stw r0, 8(r5)
/* 80078A68 000759A8  55 00 46 3E */	srwi r0, r8, 0x18
/* 80078A6C 000759AC  98 04 00 00 */	stb r0, 0(r4)
/* 80078A70 000759B0  55 07 86 3E */	rlwinm r7, r8, 0x10, 0x18, 0x1f
/* 80078A74 000759B4  55 06 C6 3E */	rlwinm r6, r8, 0x18, 0x18, 0x1f
/* 80078A78 000759B8  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 80078A7C 000759BC  80 85 00 08 */	lwz r4, 8(r5)
/* 80078A80 000759C0  38 04 00 01 */	addi r0, r4, 1
/* 80078A84 000759C4  90 05 00 08 */	stw r0, 8(r5)
/* 80078A88 000759C8  98 E4 00 00 */	stb r7, 0(r4)
/* 80078A8C 000759CC  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 80078A90 000759D0  80 85 00 08 */	lwz r4, 8(r5)
/* 80078A94 000759D4  38 04 00 01 */	addi r0, r4, 1
/* 80078A98 000759D8  90 05 00 08 */	stw r0, 8(r5)
/* 80078A9C 000759DC  98 C4 00 00 */	stb r6, 0(r4)
/* 80078AA0 000759E0  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 80078AA4 000759E4  80 85 00 08 */	lwz r4, 8(r5)
/* 80078AA8 000759E8  38 04 00 01 */	addi r0, r4, 1
/* 80078AAC 000759EC  90 05 00 08 */	stw r0, 8(r5)
/* 80078AB0 000759F0  99 04 00 00 */	stb r8, 0(r4)
/* 80078AB4 000759F4  80 02 87 78 */	lwz r0, lbl_80516AD8@sda21(r2)
/* 80078AB8 000759F8  A1 1F 00 1A */	lhz r8, 0x1a(r31)
/* 80078ABC 000759FC  90 01 00 10 */	stw r0, 0x10(r1)
/* 80078AC0 00075A00  55 00 BF BE */	rlwinm r0, r8, 0x17, 0x1e, 0x1f
/* 80078AC4 00075A04  55 06 CE 36 */	rlwinm r6, r8, 0x19, 0x18, 0x1b
/* 80078AC8 00075A08  7C E3 00 AE */	lbzx r7, r3, r0
/* 80078ACC 00075A0C  55 09 07 FE */	clrlwi r9, r8, 0x1f
/* 80078AD0 00075A10  51 06 F7 3E */	rlwimi r6, r8, 0x1e, 0x1c, 0x1f
/* 80078AD4 00075A14  55 0A CF BE */	rlwinm r10, r8, 0x19, 0x1e, 0x1f
/* 80078AD8 00075A18  7C 07 00 D0 */	neg r0, r7
/* 80078ADC 00075A1C  51 09 07 BC */	rlwimi r9, r8, 0, 0x1e, 0x1e
/* 80078AE0 00075A20  7C 04 3B 78 */	or r4, r0, r7
/* 80078AE4 00075A24  2C 07 00 00 */	cmpwi r7, 0
/* 80078AE8 00075A28  20 67 00 02 */	subfic r3, r7, 2
/* 80078AEC 00075A2C  38 07 FF FE */	addi r0, r7, -2
/* 80078AF0 00075A30  7C 60 03 78 */	or r0, r3, r0
/* 80078AF4 00075A34  50 C9 16 BA */	rlwimi r9, r6, 2, 0x1a, 0x1d
/* 80078AF8 00075A38  55 03 D7 FE */	rlwinm r3, r8, 0x1a, 0x1f, 0x1f
/* 80078AFC 00075A3C  54 C8 3C 68 */	rlwinm r8, r6, 7, 0x11, 0x14
/* 80078B00 00075A40  54 87 5D 6A */	rlwinm r7, r4, 0xb, 0x15, 0x15
/* 80078B04 00075A44  54 06 55 AC */	rlwinm r6, r0, 0xa, 0x16, 0x16
/* 80078B08 00075A48  50 69 36 72 */	rlwimi r9, r3, 6, 0x19, 0x19
/* 80078B0C 00075A4C  40 82 00 08 */	bne .L_80078B14
/* 80078B10 00075A50  39 40 00 00 */	li r10, 0
.L_80078B14:
/* 80078B14 00075A54  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 80078B18 00075A58  55 40 38 30 */	slwi r0, r10, 7
/* 80078B1C 00075A5C  7D 20 03 78 */	or r0, r9, r0
/* 80078B20 00075A60  38 61 00 0C */	addi r3, r1, 0xc
/* 80078B24 00075A64  80 85 00 08 */	lwz r4, 8(r5)
/* 80078B28 00075A68  7C C0 03 78 */	or r0, r6, r0
/* 80078B2C 00075A6C  7C E6 03 78 */	or r6, r7, r0
/* 80078B30 00075A70  38 04 00 01 */	addi r0, r4, 1
/* 80078B34 00075A74  7D 08 33 78 */	or r8, r8, r6
/* 80078B38 00075A78  90 05 00 08 */	stw r0, 8(r5)
/* 80078B3C 00075A7C  55 00 46 3E */	srwi r0, r8, 0x18
/* 80078B40 00075A80  98 04 00 00 */	stb r0, 0(r4)
/* 80078B44 00075A84  55 07 86 3E */	rlwinm r7, r8, 0x10, 0x18, 0x1f
/* 80078B48 00075A88  55 06 C6 3E */	rlwinm r6, r8, 0x18, 0x18, 0x1f
/* 80078B4C 00075A8C  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 80078B50 00075A90  80 85 00 08 */	lwz r4, 8(r5)
/* 80078B54 00075A94  38 04 00 01 */	addi r0, r4, 1
/* 80078B58 00075A98  90 05 00 08 */	stw r0, 8(r5)
/* 80078B5C 00075A9C  98 E4 00 00 */	stb r7, 0(r4)
/* 80078B60 00075AA0  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 80078B64 00075AA4  80 85 00 08 */	lwz r4, 8(r5)
/* 80078B68 00075AA8  38 04 00 01 */	addi r0, r4, 1
/* 80078B6C 00075AAC  90 05 00 08 */	stw r0, 8(r5)
/* 80078B70 00075AB0  98 C4 00 00 */	stb r6, 0(r4)
/* 80078B74 00075AB4  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 80078B78 00075AB8  80 85 00 08 */	lwz r4, 8(r5)
/* 80078B7C 00075ABC  38 04 00 01 */	addi r0, r4, 1
/* 80078B80 00075AC0  90 05 00 08 */	stw r0, 8(r5)
/* 80078B84 00075AC4  99 04 00 00 */	stb r8, 0(r4)
/* 80078B88 00075AC8  80 02 87 78 */	lwz r0, lbl_80516AD8@sda21(r2)
/* 80078B8C 00075ACC  A1 1F 00 18 */	lhz r8, 0x18(r31)
/* 80078B90 00075AD0  90 01 00 0C */	stw r0, 0xc(r1)
/* 80078B94 00075AD4  55 00 BF BE */	rlwinm r0, r8, 0x17, 0x1e, 0x1f
/* 80078B98 00075AD8  55 06 CE 36 */	rlwinm r6, r8, 0x19, 0x18, 0x1b
/* 80078B9C 00075ADC  7C E3 00 AE */	lbzx r7, r3, r0
/* 80078BA0 00075AE0  55 09 07 FE */	clrlwi r9, r8, 0x1f
/* 80078BA4 00075AE4  51 06 F7 3E */	rlwimi r6, r8, 0x1e, 0x1c, 0x1f
/* 80078BA8 00075AE8  55 0A CF BE */	rlwinm r10, r8, 0x19, 0x1e, 0x1f
/* 80078BAC 00075AEC  7C 07 00 D0 */	neg r0, r7
/* 80078BB0 00075AF0  51 09 07 BC */	rlwimi r9, r8, 0, 0x1e, 0x1e
/* 80078BB4 00075AF4  7C 04 3B 78 */	or r4, r0, r7
/* 80078BB8 00075AF8  2C 07 00 00 */	cmpwi r7, 0
/* 80078BBC 00075AFC  20 67 00 02 */	subfic r3, r7, 2
/* 80078BC0 00075B00  38 07 FF FE */	addi r0, r7, -2
/* 80078BC4 00075B04  7C 60 03 78 */	or r0, r3, r0
/* 80078BC8 00075B08  50 C9 16 BA */	rlwimi r9, r6, 2, 0x1a, 0x1d
/* 80078BCC 00075B0C  55 03 D7 FE */	rlwinm r3, r8, 0x1a, 0x1f, 0x1f
/* 80078BD0 00075B10  54 C8 3C 68 */	rlwinm r8, r6, 7, 0x11, 0x14
/* 80078BD4 00075B14  54 87 5D 6A */	rlwinm r7, r4, 0xb, 0x15, 0x15
/* 80078BD8 00075B18  54 06 55 AC */	rlwinm r6, r0, 0xa, 0x16, 0x16
/* 80078BDC 00075B1C  50 69 36 72 */	rlwimi r9, r3, 6, 0x19, 0x19
/* 80078BE0 00075B20  40 82 00 08 */	bne .L_80078BE8
/* 80078BE4 00075B24  39 40 00 00 */	li r10, 0
.L_80078BE8:
/* 80078BE8 00075B28  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 80078BEC 00075B2C  55 40 38 30 */	slwi r0, r10, 7
/* 80078BF0 00075B30  7D 20 03 78 */	or r0, r9, r0
/* 80078BF4 00075B34  38 61 00 08 */	addi r3, r1, 8
/* 80078BF8 00075B38  80 85 00 08 */	lwz r4, 8(r5)
/* 80078BFC 00075B3C  7C C0 03 78 */	or r0, r6, r0
/* 80078C00 00075B40  7C E6 03 78 */	or r6, r7, r0
/* 80078C04 00075B44  38 04 00 01 */	addi r0, r4, 1
/* 80078C08 00075B48  7D 08 33 78 */	or r8, r8, r6
/* 80078C0C 00075B4C  90 05 00 08 */	stw r0, 8(r5)
/* 80078C10 00075B50  55 00 46 3E */	srwi r0, r8, 0x18
/* 80078C14 00075B54  98 04 00 00 */	stb r0, 0(r4)
/* 80078C18 00075B58  55 07 86 3E */	rlwinm r7, r8, 0x10, 0x18, 0x1f
/* 80078C1C 00075B5C  55 06 C6 3E */	rlwinm r6, r8, 0x18, 0x18, 0x1f
/* 80078C20 00075B60  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 80078C24 00075B64  80 85 00 08 */	lwz r4, 8(r5)
/* 80078C28 00075B68  38 04 00 01 */	addi r0, r4, 1
/* 80078C2C 00075B6C  90 05 00 08 */	stw r0, 8(r5)
/* 80078C30 00075B70  98 E4 00 00 */	stb r7, 0(r4)
/* 80078C34 00075B74  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 80078C38 00075B78  80 85 00 08 */	lwz r4, 8(r5)
/* 80078C3C 00075B7C  38 04 00 01 */	addi r0, r4, 1
/* 80078C40 00075B80  90 05 00 08 */	stw r0, 8(r5)
/* 80078C44 00075B84  98 C4 00 00 */	stb r6, 0(r4)
/* 80078C48 00075B88  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 80078C4C 00075B8C  80 85 00 08 */	lwz r4, 8(r5)
/* 80078C50 00075B90  38 04 00 01 */	addi r0, r4, 1
/* 80078C54 00075B94  90 05 00 08 */	stw r0, 8(r5)
/* 80078C58 00075B98  99 04 00 00 */	stb r8, 0(r4)
/* 80078C5C 00075B9C  80 02 87 78 */	lwz r0, lbl_80516AD8@sda21(r2)
/* 80078C60 00075BA0  A1 5F 00 1C */	lhz r10, 0x1c(r31)
/* 80078C64 00075BA4  90 01 00 08 */	stw r0, 8(r1)
/* 80078C68 00075BA8  55 40 BF BE */	rlwinm r0, r10, 0x17, 0x1e, 0x1f
/* 80078C6C 00075BAC  55 46 CE 36 */	rlwinm r6, r10, 0x19, 0x18, 0x1b
/* 80078C70 00075BB0  7C E3 00 AE */	lbzx r7, r3, r0
/* 80078C74 00075BB4  55 48 07 FE */	clrlwi r8, r10, 0x1f
/* 80078C78 00075BB8  51 46 F7 3E */	rlwimi r6, r10, 0x1e, 0x1c, 0x1f
/* 80078C7C 00075BBC  55 49 CF BE */	rlwinm r9, r10, 0x19, 0x1e, 0x1f
/* 80078C80 00075BC0  7C 07 00 D0 */	neg r0, r7
/* 80078C84 00075BC4  51 48 07 BC */	rlwimi r8, r10, 0, 0x1e, 0x1e
/* 80078C88 00075BC8  7C 04 3B 78 */	or r4, r0, r7
/* 80078C8C 00075BCC  2C 07 00 00 */	cmpwi r7, 0
/* 80078C90 00075BD0  20 67 00 02 */	subfic r3, r7, 2
/* 80078C94 00075BD4  38 07 FF FE */	addi r0, r7, -2
/* 80078C98 00075BD8  7C 60 03 78 */	or r0, r3, r0
/* 80078C9C 00075BDC  50 C8 16 BA */	rlwimi r8, r6, 2, 0x1a, 0x1d
/* 80078CA0 00075BE0  54 C7 3C 68 */	rlwinm r7, r6, 7, 0x11, 0x14
/* 80078CA4 00075BE4  54 86 5D 6A */	rlwinm r6, r4, 0xb, 0x15, 0x15
/* 80078CA8 00075BE8  54 05 55 AC */	rlwinm r5, r0, 0xa, 0x16, 0x16
/* 80078CAC 00075BEC  51 48 06 72 */	rlwimi r8, r10, 0, 0x19, 0x19
/* 80078CB0 00075BF0  40 82 00 08 */	bne .L_80078CB8
/* 80078CB4 00075BF4  39 20 00 00 */	li r9, 0
.L_80078CB8:
/* 80078CB8 00075BF8  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 80078CBC 00075BFC  55 20 38 30 */	slwi r0, r9, 7
/* 80078CC0 00075C00  7D 00 03 78 */	or r0, r8, r0
/* 80078CC4 00075C04  3B C0 00 00 */	li r30, 0
/* 80078CC8 00075C08  80 64 00 08 */	lwz r3, 8(r4)
/* 80078CCC 00075C0C  7C A0 03 78 */	or r0, r5, r0
/* 80078CD0 00075C10  7C C5 03 78 */	or r5, r6, r0
/* 80078CD4 00075C14  38 03 00 01 */	addi r0, r3, 1
/* 80078CD8 00075C18  7C E7 2B 78 */	or r7, r7, r5
/* 80078CDC 00075C1C  90 04 00 08 */	stw r0, 8(r4)
/* 80078CE0 00075C20  54 E0 46 3E */	srwi r0, r7, 0x18
/* 80078CE4 00075C24  98 03 00 00 */	stb r0, 0(r3)
/* 80078CE8 00075C28  54 E6 86 3E */	rlwinm r6, r7, 0x10, 0x18, 0x1f
/* 80078CEC 00075C2C  54 E5 C6 3E */	rlwinm r5, r7, 0x18, 0x18, 0x1f
/* 80078CF0 00075C30  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 80078CF4 00075C34  80 64 00 08 */	lwz r3, 8(r4)
/* 80078CF8 00075C38  38 03 00 01 */	addi r0, r3, 1
/* 80078CFC 00075C3C  90 04 00 08 */	stw r0, 8(r4)
/* 80078D00 00075C40  98 C3 00 00 */	stb r6, 0(r3)
/* 80078D04 00075C44  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 80078D08 00075C48  80 64 00 08 */	lwz r3, 8(r4)
/* 80078D0C 00075C4C  38 03 00 01 */	addi r0, r3, 1
/* 80078D10 00075C50  90 04 00 08 */	stw r0, 8(r4)
/* 80078D14 00075C54  98 A3 00 00 */	stb r5, 0(r3)
/* 80078D18 00075C58  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 80078D1C 00075C5C  80 64 00 08 */	lwz r3, 8(r4)
/* 80078D20 00075C60  38 03 00 01 */	addi r0, r3, 1
/* 80078D24 00075C64  90 04 00 08 */	stw r0, 8(r4)
/* 80078D28 00075C68  98 E3 00 00 */	stb r7, 0(r3)
.L_80078D2C:
/* 80078D2C 00075C6C  80 7F 00 20 */	lwz r3, 0x20(r31)
/* 80078D30 00075C70  28 03 00 00 */	cmplwi r3, 0
/* 80078D34 00075C74  41 82 00 0C */	beq .L_80078D40
/* 80078D38 00075C78  7F C4 F3 78 */	mr r4, r30
/* 80078D3C 00075C7C  4B FE AD E9 */	bl load__11J3DLightObjCFUl
.L_80078D40:
/* 80078D40 00075C80  3B DE 00 01 */	addi r30, r30, 1
/* 80078D44 00075C84  3B FF 00 04 */	addi r31, r31, 4
/* 80078D48 00075C88  28 1E 00 08 */	cmplwi r30, 8
/* 80078D4C 00075C8C  41 80 FF E0 */	blt .L_80078D2C
/* 80078D50 00075C90  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80078D54 00075C94  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80078D58 00075C98  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80078D5C 00075C9C  7C 08 03 A6 */	mtlr r0
/* 80078D60 00075CA0  38 21 00 20 */	addi r1, r1, 0x20
/* 80078D64 00075CA4  4E 80 00 20 */	blr 
.endfn load__20J3DColorBlockLightOnFv

.fn patch__21J3DColorBlockLightOffFv, global
/* 80078D68 00075CA8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80078D6C 00075CAC  7C 08 02 A6 */	mflr r0
/* 80078D70 00075CB0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80078D74 00075CB4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80078D78 00075CB8  7C 7F 1B 78 */	mr r31, r3
/* 80078D7C 00075CBC  81 83 00 00 */	lwz r12, 0(r3)
/* 80078D80 00075CC0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80078D84 00075CC4  7D 89 03 A6 */	mtctr r12
/* 80078D88 00075CC8  4E 80 04 21 */	bctrl 
/* 80078D8C 00075CCC  7F E3 FB 78 */	mr r3, r31
/* 80078D90 00075CD0  81 9F 00 00 */	lwz r12, 0(r31)
/* 80078D94 00075CD4  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80078D98 00075CD8  7D 89 03 A6 */	mtctr r12
/* 80078D9C 00075CDC  4E 80 04 21 */	bctrl 
/* 80078DA0 00075CE0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80078DA4 00075CE4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80078DA8 00075CE8  7C 08 03 A6 */	mtlr r0
/* 80078DAC 00075CEC  38 21 00 10 */	addi r1, r1, 0x10
/* 80078DB0 00075CF0  4E 80 00 20 */	blr 
.endfn patch__21J3DColorBlockLightOffFv

.fn patchMatColor__21J3DColorBlockLightOffFv, global
/* 80078DB4 00075CF4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80078DB8 00075CF8  7C 08 02 A6 */	mflr r0
/* 80078DBC 00075CFC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80078DC0 00075D00  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80078DC4 00075D04  93 C1 00 08 */	stw r30, 8(r1)
/* 80078DC8 00075D08  7C 7E 1B 78 */	mr r30, r3
/* 80078DCC 00075D0C  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 80078DD0 00075D10  80 03 00 18 */	lwz r0, 0x18(r3)
/* 80078DD4 00075D14  80 64 00 00 */	lwz r3, 0(r4)
/* 80078DD8 00075D18  7C 03 02 14 */	add r0, r3, r0
/* 80078DDC 00075D1C  90 04 00 08 */	stw r0, 8(r4)
/* 80078DE0 00075D20  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 80078DE4 00075D24  80 6D 80 B0 */	lwz r3, SizeOfLoadMatColors@sda21(r13)
/* 80078DE8 00075D28  83 E4 00 08 */	lwz r31, 8(r4)
/* 80078DEC 00075D2C  80 04 00 0C */	lwz r0, 0xc(r4)
/* 80078DF0 00075D30  7C 7F 1A 14 */	add r3, r31, r3
/* 80078DF4 00075D34  7C 03 00 40 */	cmplw r3, r0
/* 80078DF8 00075D38  40 81 00 08 */	ble .L_80078E00
/* 80078DFC 00075D3C  48 06 8E 45 */	bl GDOverflowed
.L_80078E00:
/* 80078E00 00075D40  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 80078E04 00075D44  39 20 00 10 */	li r9, 0x10
/* 80078E08 00075D48  39 00 00 00 */	li r8, 0
/* 80078E0C 00075D4C  38 E0 00 01 */	li r7, 1
/* 80078E10 00075D50  80 85 00 08 */	lwz r4, 8(r5)
/* 80078E14 00075D54  38 C0 00 0C */	li r6, 0xc
/* 80078E18 00075D58  7F E3 FB 78 */	mr r3, r31
/* 80078E1C 00075D5C  38 04 00 01 */	addi r0, r4, 1
/* 80078E20 00075D60  90 05 00 08 */	stw r0, 8(r5)
/* 80078E24 00075D64  99 24 00 00 */	stb r9, 0(r4)
/* 80078E28 00075D68  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 80078E2C 00075D6C  80 85 00 08 */	lwz r4, 8(r5)
/* 80078E30 00075D70  38 04 00 01 */	addi r0, r4, 1
/* 80078E34 00075D74  90 05 00 08 */	stw r0, 8(r5)
/* 80078E38 00075D78  99 04 00 00 */	stb r8, 0(r4)
/* 80078E3C 00075D7C  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 80078E40 00075D80  80 85 00 08 */	lwz r4, 8(r5)
/* 80078E44 00075D84  38 04 00 01 */	addi r0, r4, 1
/* 80078E48 00075D88  90 05 00 08 */	stw r0, 8(r5)
/* 80078E4C 00075D8C  98 E4 00 00 */	stb r7, 0(r4)
/* 80078E50 00075D90  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 80078E54 00075D94  80 85 00 08 */	lwz r4, 8(r5)
/* 80078E58 00075D98  38 04 00 01 */	addi r0, r4, 1
/* 80078E5C 00075D9C  90 05 00 08 */	stw r0, 8(r5)
/* 80078E60 00075DA0  99 24 00 00 */	stb r9, 0(r4)
/* 80078E64 00075DA4  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 80078E68 00075DA8  80 85 00 08 */	lwz r4, 8(r5)
/* 80078E6C 00075DAC  38 04 00 01 */	addi r0, r4, 1
/* 80078E70 00075DB0  90 05 00 08 */	stw r0, 8(r5)
/* 80078E74 00075DB4  98 C4 00 00 */	stb r6, 0(r4)
/* 80078E78 00075DB8  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 80078E7C 00075DBC  81 3E 00 04 */	lwz r9, 4(r30)
/* 80078E80 00075DC0  80 85 00 08 */	lwz r4, 8(r5)
/* 80078E84 00075DC4  55 28 46 3E */	srwi r8, r9, 0x18
/* 80078E88 00075DC8  55 27 86 3E */	rlwinm r7, r9, 0x10, 0x18, 0x1f
/* 80078E8C 00075DCC  38 04 00 01 */	addi r0, r4, 1
/* 80078E90 00075DD0  55 26 C6 3E */	rlwinm r6, r9, 0x18, 0x18, 0x1f
/* 80078E94 00075DD4  90 05 00 08 */	stw r0, 8(r5)
/* 80078E98 00075DD8  99 04 00 00 */	stb r8, 0(r4)
/* 80078E9C 00075DDC  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 80078EA0 00075DE0  80 85 00 08 */	lwz r4, 8(r5)
/* 80078EA4 00075DE4  38 04 00 01 */	addi r0, r4, 1
/* 80078EA8 00075DE8  90 05 00 08 */	stw r0, 8(r5)
/* 80078EAC 00075DEC  98 E4 00 00 */	stb r7, 0(r4)
/* 80078EB0 00075DF0  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 80078EB4 00075DF4  80 85 00 08 */	lwz r4, 8(r5)
/* 80078EB8 00075DF8  38 04 00 01 */	addi r0, r4, 1
/* 80078EBC 00075DFC  90 05 00 08 */	stw r0, 8(r5)
/* 80078EC0 00075E00  98 C4 00 00 */	stb r6, 0(r4)
/* 80078EC4 00075E04  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 80078EC8 00075E08  80 85 00 08 */	lwz r4, 8(r5)
/* 80078ECC 00075E0C  38 04 00 01 */	addi r0, r4, 1
/* 80078ED0 00075E10  90 05 00 08 */	stw r0, 8(r5)
/* 80078ED4 00075E14  99 24 00 00 */	stb r9, 0(r4)
/* 80078ED8 00075E18  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 80078EDC 00075E1C  81 3E 00 08 */	lwz r9, 8(r30)
/* 80078EE0 00075E20  80 85 00 08 */	lwz r4, 8(r5)
/* 80078EE4 00075E24  55 28 46 3E */	srwi r8, r9, 0x18
/* 80078EE8 00075E28  55 27 86 3E */	rlwinm r7, r9, 0x10, 0x18, 0x1f
/* 80078EEC 00075E2C  38 04 00 01 */	addi r0, r4, 1
/* 80078EF0 00075E30  55 26 C6 3E */	rlwinm r6, r9, 0x18, 0x18, 0x1f
/* 80078EF4 00075E34  90 05 00 08 */	stw r0, 8(r5)
/* 80078EF8 00075E38  99 04 00 00 */	stb r8, 0(r4)
/* 80078EFC 00075E3C  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 80078F00 00075E40  80 85 00 08 */	lwz r4, 8(r5)
/* 80078F04 00075E44  38 04 00 01 */	addi r0, r4, 1
/* 80078F08 00075E48  90 05 00 08 */	stw r0, 8(r5)
/* 80078F0C 00075E4C  98 E4 00 00 */	stb r7, 0(r4)
/* 80078F10 00075E50  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 80078F14 00075E54  80 85 00 08 */	lwz r4, 8(r5)
/* 80078F18 00075E58  38 04 00 01 */	addi r0, r4, 1
/* 80078F1C 00075E5C  90 05 00 08 */	stw r0, 8(r5)
/* 80078F20 00075E60  98 C4 00 00 */	stb r6, 0(r4)
/* 80078F24 00075E64  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 80078F28 00075E68  80 85 00 08 */	lwz r4, 8(r5)
/* 80078F2C 00075E6C  38 04 00 01 */	addi r0, r4, 1
/* 80078F30 00075E70  90 05 00 08 */	stw r0, 8(r5)
/* 80078F34 00075E74  99 24 00 00 */	stb r9, 0(r4)
/* 80078F38 00075E78  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 80078F3C 00075E7C  80 04 00 08 */	lwz r0, 8(r4)
/* 80078F40 00075E80  7C 9F 00 50 */	subf r4, r31, r0
/* 80078F44 00075E84  48 07 38 05 */	bl DCStoreRange
/* 80078F48 00075E88  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80078F4C 00075E8C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80078F50 00075E90  83 C1 00 08 */	lwz r30, 8(r1)
/* 80078F54 00075E94  7C 08 03 A6 */	mtlr r0
/* 80078F58 00075E98  38 21 00 10 */	addi r1, r1, 0x10
/* 80078F5C 00075E9C  4E 80 00 20 */	blr 
.endfn patchMatColor__21J3DColorBlockLightOffFv

.fn patchLight__21J3DColorBlockLightOffFv, global
/* 80078F60 00075EA0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80078F64 00075EA4  7C 08 02 A6 */	mflr r0
/* 80078F68 00075EA8  90 01 00 24 */	stw r0, 0x24(r1)
/* 80078F6C 00075EAC  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80078F70 00075EB0  7C 7F 1B 78 */	mr r31, r3
/* 80078F74 00075EB4  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80078F78 00075EB8  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 80078F7C 00075EBC  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 80078F80 00075EC0  80 64 00 00 */	lwz r3, 0(r4)
/* 80078F84 00075EC4  7C 03 02 14 */	add r0, r3, r0
/* 80078F88 00075EC8  90 04 00 08 */	stw r0, 8(r4)
/* 80078F8C 00075ECC  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 80078F90 00075ED0  80 6D 80 B8 */	lwz r3, SizeOfLoadColorChans@sda21(r13)
/* 80078F94 00075ED4  83 C4 00 08 */	lwz r30, 8(r4)
/* 80078F98 00075ED8  80 04 00 0C */	lwz r0, 0xc(r4)
/* 80078F9C 00075EDC  7C 7E 1A 14 */	add r3, r30, r3
/* 80078FA0 00075EE0  7C 03 00 40 */	cmplw r3, r0
/* 80078FA4 00075EE4  40 81 00 08 */	ble .L_80078FAC
/* 80078FA8 00075EE8  48 06 8C 99 */	bl GDOverflowed
.L_80078FAC:
/* 80078FAC 00075EEC  80 CD 8E A8 */	lwz r6, __GDCurrentDL@sda21(r13)
/* 80078FB0 00075EF0  39 20 00 10 */	li r9, 0x10
/* 80078FB4 00075EF4  38 00 00 00 */	li r0, 0
/* 80078FB8 00075EF8  39 00 00 03 */	li r8, 3
/* 80078FBC 00075EFC  80 A6 00 08 */	lwz r5, 8(r6)
/* 80078FC0 00075F00  38 E0 00 0E */	li r7, 0xe
/* 80078FC4 00075F04  38 61 00 14 */	addi r3, r1, 0x14
/* 80078FC8 00075F08  38 85 00 01 */	addi r4, r5, 1
/* 80078FCC 00075F0C  90 86 00 08 */	stw r4, 8(r6)
/* 80078FD0 00075F10  99 25 00 00 */	stb r9, 0(r5)
/* 80078FD4 00075F14  80 CD 8E A8 */	lwz r6, __GDCurrentDL@sda21(r13)
/* 80078FD8 00075F18  80 A6 00 08 */	lwz r5, 8(r6)
/* 80078FDC 00075F1C  38 85 00 01 */	addi r4, r5, 1
/* 80078FE0 00075F20  90 86 00 08 */	stw r4, 8(r6)
/* 80078FE4 00075F24  98 05 00 00 */	stb r0, 0(r5)
/* 80078FE8 00075F28  80 CD 8E A8 */	lwz r6, __GDCurrentDL@sda21(r13)
/* 80078FEC 00075F2C  80 A6 00 08 */	lwz r5, 8(r6)
/* 80078FF0 00075F30  38 85 00 01 */	addi r4, r5, 1
/* 80078FF4 00075F34  90 86 00 08 */	stw r4, 8(r6)
/* 80078FF8 00075F38  99 05 00 00 */	stb r8, 0(r5)
/* 80078FFC 00075F3C  80 CD 8E A8 */	lwz r6, __GDCurrentDL@sda21(r13)
/* 80079000 00075F40  80 A6 00 08 */	lwz r5, 8(r6)
/* 80079004 00075F44  38 85 00 01 */	addi r4, r5, 1
/* 80079008 00075F48  90 86 00 08 */	stw r4, 8(r6)
/* 8007900C 00075F4C  99 25 00 00 */	stb r9, 0(r5)
/* 80079010 00075F50  80 CD 8E A8 */	lwz r6, __GDCurrentDL@sda21(r13)
/* 80079014 00075F54  80 A6 00 08 */	lwz r5, 8(r6)
/* 80079018 00075F58  38 85 00 01 */	addi r4, r5, 1
/* 8007901C 00075F5C  90 86 00 08 */	stw r4, 8(r6)
/* 80079020 00075F60  98 E5 00 00 */	stb r7, 0(r5)
/* 80079024 00075F64  80 82 87 78 */	lwz r4, lbl_80516AD8@sda21(r2)
/* 80079028 00075F68  A1 7F 00 0E */	lhz r11, 0xe(r31)
/* 8007902C 00075F6C  90 81 00 14 */	stw r4, 0x14(r1)
/* 80079030 00075F70  55 64 BF BE */	rlwinm r4, r11, 0x17, 0x1e, 0x1f
/* 80079034 00075F74  55 67 CE 36 */	rlwinm r7, r11, 0x19, 0x18, 0x1b
/* 80079038 00075F78  7D 03 20 AE */	lbzx r8, r3, r4
/* 8007903C 00075F7C  55 69 07 FE */	clrlwi r9, r11, 0x1f
/* 80079040 00075F80  51 67 F7 3E */	rlwimi r7, r11, 0x1e, 0x1c, 0x1f
/* 80079044 00075F84  55 6A CF BE */	rlwinm r10, r11, 0x19, 0x1e, 0x1f
/* 80079048 00075F88  7C 68 00 D0 */	neg r3, r8
/* 8007904C 00075F8C  51 69 07 BC */	rlwimi r9, r11, 0, 0x1e, 0x1e
/* 80079050 00075F90  7C 65 43 78 */	or r5, r3, r8
/* 80079054 00075F94  2C 08 00 00 */	cmpwi r8, 0
/* 80079058 00075F98  20 88 00 02 */	subfic r4, r8, 2
/* 8007905C 00075F9C  38 68 FF FE */	addi r3, r8, -2
/* 80079060 00075FA0  7C 83 1B 78 */	or r3, r4, r3
/* 80079064 00075FA4  50 E9 16 BA */	rlwimi r9, r7, 2, 0x1a, 0x1d
/* 80079068 00075FA8  54 E8 3C 68 */	rlwinm r8, r7, 7, 0x11, 0x14
/* 8007906C 00075FAC  54 A7 5D 6A */	rlwinm r7, r5, 0xb, 0x15, 0x15
/* 80079070 00075FB0  54 66 55 AC */	rlwinm r6, r3, 0xa, 0x16, 0x16
/* 80079074 00075FB4  51 69 06 72 */	rlwimi r9, r11, 0, 0x19, 0x19
/* 80079078 00075FB8  40 82 00 08 */	bne .L_80079080
/* 8007907C 00075FBC  7C 0A 03 78 */	mr r10, r0
.L_80079080:
/* 80079080 00075FC0  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 80079084 00075FC4  55 40 38 30 */	slwi r0, r10, 7
/* 80079088 00075FC8  7D 20 03 78 */	or r0, r9, r0
/* 8007908C 00075FCC  38 61 00 10 */	addi r3, r1, 0x10
/* 80079090 00075FD0  80 85 00 08 */	lwz r4, 8(r5)
/* 80079094 00075FD4  7C C0 03 78 */	or r0, r6, r0
/* 80079098 00075FD8  7C E6 03 78 */	or r6, r7, r0
/* 8007909C 00075FDC  38 04 00 01 */	addi r0, r4, 1
/* 800790A0 00075FE0  7D 08 33 78 */	or r8, r8, r6
/* 800790A4 00075FE4  90 05 00 08 */	stw r0, 8(r5)
/* 800790A8 00075FE8  55 00 46 3E */	srwi r0, r8, 0x18
/* 800790AC 00075FEC  98 04 00 00 */	stb r0, 0(r4)
/* 800790B0 00075FF0  55 07 86 3E */	rlwinm r7, r8, 0x10, 0x18, 0x1f
/* 800790B4 00075FF4  55 06 C6 3E */	rlwinm r6, r8, 0x18, 0x18, 0x1f
/* 800790B8 00075FF8  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 800790BC 00075FFC  80 85 00 08 */	lwz r4, 8(r5)
/* 800790C0 00076000  38 04 00 01 */	addi r0, r4, 1
/* 800790C4 00076004  90 05 00 08 */	stw r0, 8(r5)
/* 800790C8 00076008  98 E4 00 00 */	stb r7, 0(r4)
/* 800790CC 0007600C  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 800790D0 00076010  80 85 00 08 */	lwz r4, 8(r5)
/* 800790D4 00076014  38 04 00 01 */	addi r0, r4, 1
/* 800790D8 00076018  90 05 00 08 */	stw r0, 8(r5)
/* 800790DC 0007601C  98 C4 00 00 */	stb r6, 0(r4)
/* 800790E0 00076020  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 800790E4 00076024  80 85 00 08 */	lwz r4, 8(r5)
/* 800790E8 00076028  38 04 00 01 */	addi r0, r4, 1
/* 800790EC 0007602C  90 05 00 08 */	stw r0, 8(r5)
/* 800790F0 00076030  99 04 00 00 */	stb r8, 0(r4)
/* 800790F4 00076034  80 02 87 78 */	lwz r0, lbl_80516AD8@sda21(r2)
/* 800790F8 00076038  A1 1F 00 12 */	lhz r8, 0x12(r31)
/* 800790FC 0007603C  90 01 00 10 */	stw r0, 0x10(r1)
/* 80079100 00076040  55 00 BF BE */	rlwinm r0, r8, 0x17, 0x1e, 0x1f
/* 80079104 00076044  55 06 CE 36 */	rlwinm r6, r8, 0x19, 0x18, 0x1b
/* 80079108 00076048  7C E3 00 AE */	lbzx r7, r3, r0
/* 8007910C 0007604C  55 09 07 FE */	clrlwi r9, r8, 0x1f
/* 80079110 00076050  51 06 F7 3E */	rlwimi r6, r8, 0x1e, 0x1c, 0x1f
/* 80079114 00076054  55 0A CF BE */	rlwinm r10, r8, 0x19, 0x1e, 0x1f
/* 80079118 00076058  7C 07 00 D0 */	neg r0, r7
/* 8007911C 0007605C  51 09 07 BC */	rlwimi r9, r8, 0, 0x1e, 0x1e
/* 80079120 00076060  7C 04 3B 78 */	or r4, r0, r7
/* 80079124 00076064  2C 07 00 00 */	cmpwi r7, 0
/* 80079128 00076068  20 67 00 02 */	subfic r3, r7, 2
/* 8007912C 0007606C  38 07 FF FE */	addi r0, r7, -2
/* 80079130 00076070  7C 60 03 78 */	or r0, r3, r0
/* 80079134 00076074  50 C9 16 BA */	rlwimi r9, r6, 2, 0x1a, 0x1d
/* 80079138 00076078  55 03 D7 FE */	rlwinm r3, r8, 0x1a, 0x1f, 0x1f
/* 8007913C 0007607C  54 C8 3C 68 */	rlwinm r8, r6, 7, 0x11, 0x14
/* 80079140 00076080  54 87 5D 6A */	rlwinm r7, r4, 0xb, 0x15, 0x15
/* 80079144 00076084  54 06 55 AC */	rlwinm r6, r0, 0xa, 0x16, 0x16
/* 80079148 00076088  50 69 36 72 */	rlwimi r9, r3, 6, 0x19, 0x19
/* 8007914C 0007608C  40 82 00 08 */	bne .L_80079154
/* 80079150 00076090  39 40 00 00 */	li r10, 0
.L_80079154:
/* 80079154 00076094  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 80079158 00076098  55 40 38 30 */	slwi r0, r10, 7
/* 8007915C 0007609C  7D 20 03 78 */	or r0, r9, r0
/* 80079160 000760A0  38 61 00 0C */	addi r3, r1, 0xc
/* 80079164 000760A4  80 85 00 08 */	lwz r4, 8(r5)
/* 80079168 000760A8  7C C0 03 78 */	or r0, r6, r0
/* 8007916C 000760AC  7C E6 03 78 */	or r6, r7, r0
/* 80079170 000760B0  38 04 00 01 */	addi r0, r4, 1
/* 80079174 000760B4  7D 08 33 78 */	or r8, r8, r6
/* 80079178 000760B8  90 05 00 08 */	stw r0, 8(r5)
/* 8007917C 000760BC  55 00 46 3E */	srwi r0, r8, 0x18
/* 80079180 000760C0  98 04 00 00 */	stb r0, 0(r4)
/* 80079184 000760C4  55 07 86 3E */	rlwinm r7, r8, 0x10, 0x18, 0x1f
/* 80079188 000760C8  55 06 C6 3E */	rlwinm r6, r8, 0x18, 0x18, 0x1f
/* 8007918C 000760CC  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 80079190 000760D0  80 85 00 08 */	lwz r4, 8(r5)
/* 80079194 000760D4  38 04 00 01 */	addi r0, r4, 1
/* 80079198 000760D8  90 05 00 08 */	stw r0, 8(r5)
/* 8007919C 000760DC  98 E4 00 00 */	stb r7, 0(r4)
/* 800791A0 000760E0  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 800791A4 000760E4  80 85 00 08 */	lwz r4, 8(r5)
/* 800791A8 000760E8  38 04 00 01 */	addi r0, r4, 1
/* 800791AC 000760EC  90 05 00 08 */	stw r0, 8(r5)
/* 800791B0 000760F0  98 C4 00 00 */	stb r6, 0(r4)
/* 800791B4 000760F4  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 800791B8 000760F8  80 85 00 08 */	lwz r4, 8(r5)
/* 800791BC 000760FC  38 04 00 01 */	addi r0, r4, 1
/* 800791C0 00076100  90 05 00 08 */	stw r0, 8(r5)
/* 800791C4 00076104  99 04 00 00 */	stb r8, 0(r4)
/* 800791C8 00076108  80 02 87 78 */	lwz r0, lbl_80516AD8@sda21(r2)
/* 800791CC 0007610C  A1 1F 00 10 */	lhz r8, 0x10(r31)
/* 800791D0 00076110  90 01 00 0C */	stw r0, 0xc(r1)
/* 800791D4 00076114  55 00 BF BE */	rlwinm r0, r8, 0x17, 0x1e, 0x1f
/* 800791D8 00076118  55 06 CE 36 */	rlwinm r6, r8, 0x19, 0x18, 0x1b
/* 800791DC 0007611C  7C E3 00 AE */	lbzx r7, r3, r0
/* 800791E0 00076120  55 09 07 FE */	clrlwi r9, r8, 0x1f
/* 800791E4 00076124  51 06 F7 3E */	rlwimi r6, r8, 0x1e, 0x1c, 0x1f
/* 800791E8 00076128  55 0A CF BE */	rlwinm r10, r8, 0x19, 0x1e, 0x1f
/* 800791EC 0007612C  7C 07 00 D0 */	neg r0, r7
/* 800791F0 00076130  51 09 07 BC */	rlwimi r9, r8, 0, 0x1e, 0x1e
/* 800791F4 00076134  7C 04 3B 78 */	or r4, r0, r7
/* 800791F8 00076138  2C 07 00 00 */	cmpwi r7, 0
/* 800791FC 0007613C  20 67 00 02 */	subfic r3, r7, 2
/* 80079200 00076140  38 07 FF FE */	addi r0, r7, -2
/* 80079204 00076144  7C 60 03 78 */	or r0, r3, r0
/* 80079208 00076148  50 C9 16 BA */	rlwimi r9, r6, 2, 0x1a, 0x1d
/* 8007920C 0007614C  55 03 D7 FE */	rlwinm r3, r8, 0x1a, 0x1f, 0x1f
/* 80079210 00076150  54 C8 3C 68 */	rlwinm r8, r6, 7, 0x11, 0x14
/* 80079214 00076154  54 87 5D 6A */	rlwinm r7, r4, 0xb, 0x15, 0x15
/* 80079218 00076158  54 06 55 AC */	rlwinm r6, r0, 0xa, 0x16, 0x16
/* 8007921C 0007615C  50 69 36 72 */	rlwimi r9, r3, 6, 0x19, 0x19
/* 80079220 00076160  40 82 00 08 */	bne .L_80079228
/* 80079224 00076164  39 40 00 00 */	li r10, 0
.L_80079228:
/* 80079228 00076168  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 8007922C 0007616C  55 40 38 30 */	slwi r0, r10, 7
/* 80079230 00076170  7D 20 03 78 */	or r0, r9, r0
/* 80079234 00076174  38 61 00 08 */	addi r3, r1, 8
/* 80079238 00076178  80 85 00 08 */	lwz r4, 8(r5)
/* 8007923C 0007617C  7C C0 03 78 */	or r0, r6, r0
/* 80079240 00076180  7C E6 03 78 */	or r6, r7, r0
/* 80079244 00076184  38 04 00 01 */	addi r0, r4, 1
/* 80079248 00076188  7D 08 33 78 */	or r8, r8, r6
/* 8007924C 0007618C  90 05 00 08 */	stw r0, 8(r5)
/* 80079250 00076190  55 00 46 3E */	srwi r0, r8, 0x18
/* 80079254 00076194  98 04 00 00 */	stb r0, 0(r4)
/* 80079258 00076198  55 07 86 3E */	rlwinm r7, r8, 0x10, 0x18, 0x1f
/* 8007925C 0007619C  55 06 C6 3E */	rlwinm r6, r8, 0x18, 0x18, 0x1f
/* 80079260 000761A0  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 80079264 000761A4  80 85 00 08 */	lwz r4, 8(r5)
/* 80079268 000761A8  38 04 00 01 */	addi r0, r4, 1
/* 8007926C 000761AC  90 05 00 08 */	stw r0, 8(r5)
/* 80079270 000761B0  98 E4 00 00 */	stb r7, 0(r4)
/* 80079274 000761B4  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 80079278 000761B8  80 85 00 08 */	lwz r4, 8(r5)
/* 8007927C 000761BC  38 04 00 01 */	addi r0, r4, 1
/* 80079280 000761C0  90 05 00 08 */	stw r0, 8(r5)
/* 80079284 000761C4  98 C4 00 00 */	stb r6, 0(r4)
/* 80079288 000761C8  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 8007928C 000761CC  80 85 00 08 */	lwz r4, 8(r5)
/* 80079290 000761D0  38 04 00 01 */	addi r0, r4, 1
/* 80079294 000761D4  90 05 00 08 */	stw r0, 8(r5)
/* 80079298 000761D8  99 04 00 00 */	stb r8, 0(r4)
/* 8007929C 000761DC  80 02 87 78 */	lwz r0, lbl_80516AD8@sda21(r2)
/* 800792A0 000761E0  A1 1F 00 14 */	lhz r8, 0x14(r31)
/* 800792A4 000761E4  90 01 00 08 */	stw r0, 8(r1)
/* 800792A8 000761E8  55 00 BF BE */	rlwinm r0, r8, 0x17, 0x1e, 0x1f
/* 800792AC 000761EC  55 06 CE 36 */	rlwinm r6, r8, 0x19, 0x18, 0x1b
/* 800792B0 000761F0  7C E3 00 AE */	lbzx r7, r3, r0
/* 800792B4 000761F4  55 09 07 FE */	clrlwi r9, r8, 0x1f
/* 800792B8 000761F8  51 06 F7 3E */	rlwimi r6, r8, 0x1e, 0x1c, 0x1f
/* 800792BC 000761FC  55 0A CF BE */	rlwinm r10, r8, 0x19, 0x1e, 0x1f
/* 800792C0 00076200  7C 07 00 D0 */	neg r0, r7
/* 800792C4 00076204  51 09 07 BC */	rlwimi r9, r8, 0, 0x1e, 0x1e
/* 800792C8 00076208  7C 04 3B 78 */	or r4, r0, r7
/* 800792CC 0007620C  2C 07 00 00 */	cmpwi r7, 0
/* 800792D0 00076210  20 67 00 02 */	subfic r3, r7, 2
/* 800792D4 00076214  38 07 FF FE */	addi r0, r7, -2
/* 800792D8 00076218  7C 60 03 78 */	or r0, r3, r0
/* 800792DC 0007621C  50 C9 16 BA */	rlwimi r9, r6, 2, 0x1a, 0x1d
/* 800792E0 00076220  55 03 D7 FE */	rlwinm r3, r8, 0x1a, 0x1f, 0x1f
/* 800792E4 00076224  54 C8 3C 68 */	rlwinm r8, r6, 7, 0x11, 0x14
/* 800792E8 00076228  54 87 5D 6A */	rlwinm r7, r4, 0xb, 0x15, 0x15
/* 800792EC 0007622C  54 06 55 AC */	rlwinm r6, r0, 0xa, 0x16, 0x16
/* 800792F0 00076230  50 69 36 72 */	rlwimi r9, r3, 6, 0x19, 0x19
/* 800792F4 00076234  40 82 00 08 */	bne .L_800792FC
/* 800792F8 00076238  39 40 00 00 */	li r10, 0
.L_800792FC:
/* 800792FC 0007623C  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 80079300 00076240  55 40 38 30 */	slwi r0, r10, 7
/* 80079304 00076244  7D 20 03 78 */	or r0, r9, r0
/* 80079308 00076248  7F C3 F3 78 */	mr r3, r30
/* 8007930C 0007624C  80 85 00 08 */	lwz r4, 8(r5)
/* 80079310 00076250  7C C0 03 78 */	or r0, r6, r0
/* 80079314 00076254  7C E6 03 78 */	or r6, r7, r0
/* 80079318 00076258  38 04 00 01 */	addi r0, r4, 1
/* 8007931C 0007625C  7D 08 33 78 */	or r8, r8, r6
/* 80079320 00076260  90 05 00 08 */	stw r0, 8(r5)
/* 80079324 00076264  55 00 46 3E */	srwi r0, r8, 0x18
/* 80079328 00076268  98 04 00 00 */	stb r0, 0(r4)
/* 8007932C 0007626C  55 07 86 3E */	rlwinm r7, r8, 0x10, 0x18, 0x1f
/* 80079330 00076270  55 06 C6 3E */	rlwinm r6, r8, 0x18, 0x18, 0x1f
/* 80079334 00076274  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 80079338 00076278  80 85 00 08 */	lwz r4, 8(r5)
/* 8007933C 0007627C  38 04 00 01 */	addi r0, r4, 1
/* 80079340 00076280  90 05 00 08 */	stw r0, 8(r5)
/* 80079344 00076284  98 E4 00 00 */	stb r7, 0(r4)
/* 80079348 00076288  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 8007934C 0007628C  80 85 00 08 */	lwz r4, 8(r5)
/* 80079350 00076290  38 04 00 01 */	addi r0, r4, 1
/* 80079354 00076294  90 05 00 08 */	stw r0, 8(r5)
/* 80079358 00076298  98 C4 00 00 */	stb r6, 0(r4)
/* 8007935C 0007629C  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 80079360 000762A0  80 85 00 08 */	lwz r4, 8(r5)
/* 80079364 000762A4  38 04 00 01 */	addi r0, r4, 1
/* 80079368 000762A8  90 05 00 08 */	stw r0, 8(r5)
/* 8007936C 000762AC  99 04 00 00 */	stb r8, 0(r4)
/* 80079370 000762B0  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 80079374 000762B4  80 04 00 08 */	lwz r0, 8(r4)
/* 80079378 000762B8  7C 9E 00 50 */	subf r4, r30, r0
/* 8007937C 000762BC  48 07 33 CD */	bl DCStoreRange
/* 80079380 000762C0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80079384 000762C4  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80079388 000762C8  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8007938C 000762CC  7C 08 03 A6 */	mtlr r0
/* 80079390 000762D0  38 21 00 20 */	addi r1, r1, 0x20
/* 80079394 000762D4  4E 80 00 20 */	blr 
.endfn patchLight__21J3DColorBlockLightOffFv

.fn patch__20J3DColorBlockLightOnFv, global
/* 80079398 000762D8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8007939C 000762DC  7C 08 02 A6 */	mflr r0
/* 800793A0 000762E0  90 01 00 14 */	stw r0, 0x14(r1)
/* 800793A4 000762E4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 800793A8 000762E8  7C 7F 1B 78 */	mr r31, r3
/* 800793AC 000762EC  81 83 00 00 */	lwz r12, 0(r3)
/* 800793B0 000762F0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 800793B4 000762F4  7D 89 03 A6 */	mtctr r12
/* 800793B8 000762F8  4E 80 04 21 */	bctrl 
/* 800793BC 000762FC  7F E3 FB 78 */	mr r3, r31
/* 800793C0 00076300  81 9F 00 00 */	lwz r12, 0(r31)
/* 800793C4 00076304  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 800793C8 00076308  7D 89 03 A6 */	mtctr r12
/* 800793CC 0007630C  4E 80 04 21 */	bctrl 
/* 800793D0 00076310  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800793D4 00076314  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 800793D8 00076318  7C 08 03 A6 */	mtlr r0
/* 800793DC 0007631C  38 21 00 10 */	addi r1, r1, 0x10
/* 800793E0 00076320  4E 80 00 20 */	blr 
.endfn patch__20J3DColorBlockLightOnFv

.fn patchMatColor__20J3DColorBlockLightOnFv, global
/* 800793E4 00076324  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800793E8 00076328  7C 08 02 A6 */	mflr r0
/* 800793EC 0007632C  90 01 00 14 */	stw r0, 0x14(r1)
/* 800793F0 00076330  93 E1 00 0C */	stw r31, 0xc(r1)
/* 800793F4 00076334  93 C1 00 08 */	stw r30, 8(r1)
/* 800793F8 00076338  7C 7E 1B 78 */	mr r30, r3
/* 800793FC 0007633C  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 80079400 00076340  80 03 00 44 */	lwz r0, 0x44(r3)
/* 80079404 00076344  80 64 00 00 */	lwz r3, 0(r4)
/* 80079408 00076348  7C 03 02 14 */	add r0, r3, r0
/* 8007940C 0007634C  90 04 00 08 */	stw r0, 8(r4)
/* 80079410 00076350  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 80079414 00076354  80 6D 80 B0 */	lwz r3, SizeOfLoadMatColors@sda21(r13)
/* 80079418 00076358  83 E4 00 08 */	lwz r31, 8(r4)
/* 8007941C 0007635C  80 04 00 0C */	lwz r0, 0xc(r4)
/* 80079420 00076360  7C 7F 1A 14 */	add r3, r31, r3
/* 80079424 00076364  7C 03 00 40 */	cmplw r3, r0
/* 80079428 00076368  40 81 00 08 */	ble .L_80079430
/* 8007942C 0007636C  48 06 88 15 */	bl GDOverflowed
.L_80079430:
/* 80079430 00076370  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 80079434 00076374  39 20 00 10 */	li r9, 0x10
/* 80079438 00076378  39 00 00 00 */	li r8, 0
/* 8007943C 0007637C  38 E0 00 01 */	li r7, 1
/* 80079440 00076380  80 85 00 08 */	lwz r4, 8(r5)
/* 80079444 00076384  38 C0 00 0C */	li r6, 0xc
/* 80079448 00076388  7F E3 FB 78 */	mr r3, r31
/* 8007944C 0007638C  38 04 00 01 */	addi r0, r4, 1
/* 80079450 00076390  90 05 00 08 */	stw r0, 8(r5)
/* 80079454 00076394  99 24 00 00 */	stb r9, 0(r4)
/* 80079458 00076398  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 8007945C 0007639C  80 85 00 08 */	lwz r4, 8(r5)
/* 80079460 000763A0  38 04 00 01 */	addi r0, r4, 1
/* 80079464 000763A4  90 05 00 08 */	stw r0, 8(r5)
/* 80079468 000763A8  99 04 00 00 */	stb r8, 0(r4)
/* 8007946C 000763AC  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 80079470 000763B0  80 85 00 08 */	lwz r4, 8(r5)
/* 80079474 000763B4  38 04 00 01 */	addi r0, r4, 1
/* 80079478 000763B8  90 05 00 08 */	stw r0, 8(r5)
/* 8007947C 000763BC  98 E4 00 00 */	stb r7, 0(r4)
/* 80079480 000763C0  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 80079484 000763C4  80 85 00 08 */	lwz r4, 8(r5)
/* 80079488 000763C8  38 04 00 01 */	addi r0, r4, 1
/* 8007948C 000763CC  90 05 00 08 */	stw r0, 8(r5)
/* 80079490 000763D0  99 24 00 00 */	stb r9, 0(r4)
/* 80079494 000763D4  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 80079498 000763D8  80 85 00 08 */	lwz r4, 8(r5)
/* 8007949C 000763DC  38 04 00 01 */	addi r0, r4, 1
/* 800794A0 000763E0  90 05 00 08 */	stw r0, 8(r5)
/* 800794A4 000763E4  98 C4 00 00 */	stb r6, 0(r4)
/* 800794A8 000763E8  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 800794AC 000763EC  81 3E 00 04 */	lwz r9, 4(r30)
/* 800794B0 000763F0  80 85 00 08 */	lwz r4, 8(r5)
/* 800794B4 000763F4  55 28 46 3E */	srwi r8, r9, 0x18
/* 800794B8 000763F8  55 27 86 3E */	rlwinm r7, r9, 0x10, 0x18, 0x1f
/* 800794BC 000763FC  38 04 00 01 */	addi r0, r4, 1
/* 800794C0 00076400  55 26 C6 3E */	rlwinm r6, r9, 0x18, 0x18, 0x1f
/* 800794C4 00076404  90 05 00 08 */	stw r0, 8(r5)
/* 800794C8 00076408  99 04 00 00 */	stb r8, 0(r4)
/* 800794CC 0007640C  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 800794D0 00076410  80 85 00 08 */	lwz r4, 8(r5)
/* 800794D4 00076414  38 04 00 01 */	addi r0, r4, 1
/* 800794D8 00076418  90 05 00 08 */	stw r0, 8(r5)
/* 800794DC 0007641C  98 E4 00 00 */	stb r7, 0(r4)
/* 800794E0 00076420  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 800794E4 00076424  80 85 00 08 */	lwz r4, 8(r5)
/* 800794E8 00076428  38 04 00 01 */	addi r0, r4, 1
/* 800794EC 0007642C  90 05 00 08 */	stw r0, 8(r5)
/* 800794F0 00076430  98 C4 00 00 */	stb r6, 0(r4)
/* 800794F4 00076434  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 800794F8 00076438  80 85 00 08 */	lwz r4, 8(r5)
/* 800794FC 0007643C  38 04 00 01 */	addi r0, r4, 1
/* 80079500 00076440  90 05 00 08 */	stw r0, 8(r5)
/* 80079504 00076444  99 24 00 00 */	stb r9, 0(r4)
/* 80079508 00076448  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 8007950C 0007644C  81 3E 00 08 */	lwz r9, 8(r30)
/* 80079510 00076450  80 85 00 08 */	lwz r4, 8(r5)
/* 80079514 00076454  55 28 46 3E */	srwi r8, r9, 0x18
/* 80079518 00076458  55 27 86 3E */	rlwinm r7, r9, 0x10, 0x18, 0x1f
/* 8007951C 0007645C  38 04 00 01 */	addi r0, r4, 1
/* 80079520 00076460  55 26 C6 3E */	rlwinm r6, r9, 0x18, 0x18, 0x1f
/* 80079524 00076464  90 05 00 08 */	stw r0, 8(r5)
/* 80079528 00076468  99 04 00 00 */	stb r8, 0(r4)
/* 8007952C 0007646C  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 80079530 00076470  80 85 00 08 */	lwz r4, 8(r5)
/* 80079534 00076474  38 04 00 01 */	addi r0, r4, 1
/* 80079538 00076478  90 05 00 08 */	stw r0, 8(r5)
/* 8007953C 0007647C  98 E4 00 00 */	stb r7, 0(r4)
/* 80079540 00076480  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 80079544 00076484  80 85 00 08 */	lwz r4, 8(r5)
/* 80079548 00076488  38 04 00 01 */	addi r0, r4, 1
/* 8007954C 0007648C  90 05 00 08 */	stw r0, 8(r5)
/* 80079550 00076490  98 C4 00 00 */	stb r6, 0(r4)
/* 80079554 00076494  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 80079558 00076498  80 85 00 08 */	lwz r4, 8(r5)
/* 8007955C 0007649C  38 04 00 01 */	addi r0, r4, 1
/* 80079560 000764A0  90 05 00 08 */	stw r0, 8(r5)
/* 80079564 000764A4  99 24 00 00 */	stb r9, 0(r4)
/* 80079568 000764A8  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 8007956C 000764AC  80 04 00 08 */	lwz r0, 8(r4)
/* 80079570 000764B0  7C 9F 00 50 */	subf r4, r31, r0
/* 80079574 000764B4  48 07 31 D5 */	bl DCStoreRange
/* 80079578 000764B8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8007957C 000764BC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80079580 000764C0  83 C1 00 08 */	lwz r30, 8(r1)
/* 80079584 000764C4  7C 08 03 A6 */	mtlr r0
/* 80079588 000764C8  38 21 00 10 */	addi r1, r1, 0x10
/* 8007958C 000764CC  4E 80 00 20 */	blr 
.endfn patchMatColor__20J3DColorBlockLightOnFv

.fn patchLight__20J3DColorBlockLightOnFv, global
/* 80079590 000764D0  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80079594 000764D4  7C 08 02 A6 */	mflr r0
/* 80079598 000764D8  90 01 00 34 */	stw r0, 0x34(r1)
/* 8007959C 000764DC  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 800795A0 000764E0  7C 7F 1B 78 */	mr r31, r3
/* 800795A4 000764E4  93 C1 00 28 */	stw r30, 0x28(r1)
/* 800795A8 000764E8  93 A1 00 24 */	stw r29, 0x24(r1)
/* 800795AC 000764EC  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 800795B0 000764F0  80 03 00 48 */	lwz r0, 0x48(r3)
/* 800795B4 000764F4  80 64 00 00 */	lwz r3, 0(r4)
/* 800795B8 000764F8  7C 03 02 14 */	add r0, r3, r0
/* 800795BC 000764FC  90 04 00 08 */	stw r0, 8(r4)
/* 800795C0 00076500  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 800795C4 00076504  80 6D 80 B8 */	lwz r3, SizeOfLoadColorChans@sda21(r13)
/* 800795C8 00076508  83 C4 00 08 */	lwz r30, 8(r4)
/* 800795CC 0007650C  80 04 00 0C */	lwz r0, 0xc(r4)
/* 800795D0 00076510  7C 7E 1A 14 */	add r3, r30, r3
/* 800795D4 00076514  7C 03 00 40 */	cmplw r3, r0
/* 800795D8 00076518  40 81 00 08 */	ble .L_800795E0
/* 800795DC 0007651C  48 06 86 65 */	bl GDOverflowed
.L_800795E0:
/* 800795E0 00076520  80 CD 8E A8 */	lwz r6, __GDCurrentDL@sda21(r13)
/* 800795E4 00076524  39 20 00 10 */	li r9, 0x10
/* 800795E8 00076528  38 00 00 00 */	li r0, 0
/* 800795EC 0007652C  39 00 00 03 */	li r8, 3
/* 800795F0 00076530  80 A6 00 08 */	lwz r5, 8(r6)
/* 800795F4 00076534  38 E0 00 0E */	li r7, 0xe
/* 800795F8 00076538  38 61 00 14 */	addi r3, r1, 0x14
/* 800795FC 0007653C  38 85 00 01 */	addi r4, r5, 1
/* 80079600 00076540  90 86 00 08 */	stw r4, 8(r6)
/* 80079604 00076544  99 25 00 00 */	stb r9, 0(r5)
/* 80079608 00076548  80 CD 8E A8 */	lwz r6, __GDCurrentDL@sda21(r13)
/* 8007960C 0007654C  80 A6 00 08 */	lwz r5, 8(r6)
/* 80079610 00076550  38 85 00 01 */	addi r4, r5, 1
/* 80079614 00076554  90 86 00 08 */	stw r4, 8(r6)
/* 80079618 00076558  98 05 00 00 */	stb r0, 0(r5)
/* 8007961C 0007655C  80 CD 8E A8 */	lwz r6, __GDCurrentDL@sda21(r13)
/* 80079620 00076560  80 A6 00 08 */	lwz r5, 8(r6)
/* 80079624 00076564  38 85 00 01 */	addi r4, r5, 1
/* 80079628 00076568  90 86 00 08 */	stw r4, 8(r6)
/* 8007962C 0007656C  99 05 00 00 */	stb r8, 0(r5)
/* 80079630 00076570  80 CD 8E A8 */	lwz r6, __GDCurrentDL@sda21(r13)
/* 80079634 00076574  80 A6 00 08 */	lwz r5, 8(r6)
/* 80079638 00076578  38 85 00 01 */	addi r4, r5, 1
/* 8007963C 0007657C  90 86 00 08 */	stw r4, 8(r6)
/* 80079640 00076580  99 25 00 00 */	stb r9, 0(r5)
/* 80079644 00076584  80 CD 8E A8 */	lwz r6, __GDCurrentDL@sda21(r13)
/* 80079648 00076588  80 A6 00 08 */	lwz r5, 8(r6)
/* 8007964C 0007658C  38 85 00 01 */	addi r4, r5, 1
/* 80079650 00076590  90 86 00 08 */	stw r4, 8(r6)
/* 80079654 00076594  98 E5 00 00 */	stb r7, 0(r5)
/* 80079658 00076598  80 82 87 78 */	lwz r4, lbl_80516AD8@sda21(r2)
/* 8007965C 0007659C  A1 7F 00 16 */	lhz r11, 0x16(r31)
/* 80079660 000765A0  90 81 00 14 */	stw r4, 0x14(r1)
/* 80079664 000765A4  55 64 BF BE */	rlwinm r4, r11, 0x17, 0x1e, 0x1f
/* 80079668 000765A8  55 67 CE 36 */	rlwinm r7, r11, 0x19, 0x18, 0x1b
/* 8007966C 000765AC  7D 03 20 AE */	lbzx r8, r3, r4
/* 80079670 000765B0  55 69 07 FE */	clrlwi r9, r11, 0x1f
/* 80079674 000765B4  51 67 F7 3E */	rlwimi r7, r11, 0x1e, 0x1c, 0x1f
/* 80079678 000765B8  55 6A CF BE */	rlwinm r10, r11, 0x19, 0x1e, 0x1f
/* 8007967C 000765BC  7C 68 00 D0 */	neg r3, r8
/* 80079680 000765C0  51 69 07 BC */	rlwimi r9, r11, 0, 0x1e, 0x1e
/* 80079684 000765C4  7C 65 43 78 */	or r5, r3, r8
/* 80079688 000765C8  2C 08 00 00 */	cmpwi r8, 0
/* 8007968C 000765CC  20 88 00 02 */	subfic r4, r8, 2
/* 80079690 000765D0  38 68 FF FE */	addi r3, r8, -2
/* 80079694 000765D4  7C 83 1B 78 */	or r3, r4, r3
/* 80079698 000765D8  50 E9 16 BA */	rlwimi r9, r7, 2, 0x1a, 0x1d
/* 8007969C 000765DC  54 E8 3C 68 */	rlwinm r8, r7, 7, 0x11, 0x14
/* 800796A0 000765E0  54 A7 5D 6A */	rlwinm r7, r5, 0xb, 0x15, 0x15
/* 800796A4 000765E4  54 66 55 AC */	rlwinm r6, r3, 0xa, 0x16, 0x16
/* 800796A8 000765E8  51 69 06 72 */	rlwimi r9, r11, 0, 0x19, 0x19
/* 800796AC 000765EC  40 82 00 08 */	bne .L_800796B4
/* 800796B0 000765F0  7C 0A 03 78 */	mr r10, r0
.L_800796B4:
/* 800796B4 000765F4  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 800796B8 000765F8  55 40 38 30 */	slwi r0, r10, 7
/* 800796BC 000765FC  7D 20 03 78 */	or r0, r9, r0
/* 800796C0 00076600  38 61 00 10 */	addi r3, r1, 0x10
/* 800796C4 00076604  80 85 00 08 */	lwz r4, 8(r5)
/* 800796C8 00076608  7C C0 03 78 */	or r0, r6, r0
/* 800796CC 0007660C  7C E6 03 78 */	or r6, r7, r0
/* 800796D0 00076610  38 04 00 01 */	addi r0, r4, 1
/* 800796D4 00076614  7D 08 33 78 */	or r8, r8, r6
/* 800796D8 00076618  90 05 00 08 */	stw r0, 8(r5)
/* 800796DC 0007661C  55 00 46 3E */	srwi r0, r8, 0x18
/* 800796E0 00076620  98 04 00 00 */	stb r0, 0(r4)
/* 800796E4 00076624  55 07 86 3E */	rlwinm r7, r8, 0x10, 0x18, 0x1f
/* 800796E8 00076628  55 06 C6 3E */	rlwinm r6, r8, 0x18, 0x18, 0x1f
/* 800796EC 0007662C  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 800796F0 00076630  80 85 00 08 */	lwz r4, 8(r5)
/* 800796F4 00076634  38 04 00 01 */	addi r0, r4, 1
/* 800796F8 00076638  90 05 00 08 */	stw r0, 8(r5)
/* 800796FC 0007663C  98 E4 00 00 */	stb r7, 0(r4)
/* 80079700 00076640  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 80079704 00076644  80 85 00 08 */	lwz r4, 8(r5)
/* 80079708 00076648  38 04 00 01 */	addi r0, r4, 1
/* 8007970C 0007664C  90 05 00 08 */	stw r0, 8(r5)
/* 80079710 00076650  98 C4 00 00 */	stb r6, 0(r4)
/* 80079714 00076654  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 80079718 00076658  80 85 00 08 */	lwz r4, 8(r5)
/* 8007971C 0007665C  38 04 00 01 */	addi r0, r4, 1
/* 80079720 00076660  90 05 00 08 */	stw r0, 8(r5)
/* 80079724 00076664  99 04 00 00 */	stb r8, 0(r4)
/* 80079728 00076668  80 02 87 78 */	lwz r0, lbl_80516AD8@sda21(r2)
/* 8007972C 0007666C  A1 1F 00 1A */	lhz r8, 0x1a(r31)
/* 80079730 00076670  90 01 00 10 */	stw r0, 0x10(r1)
/* 80079734 00076674  55 00 BF BE */	rlwinm r0, r8, 0x17, 0x1e, 0x1f
/* 80079738 00076678  55 06 CE 36 */	rlwinm r6, r8, 0x19, 0x18, 0x1b
/* 8007973C 0007667C  7C E3 00 AE */	lbzx r7, r3, r0
/* 80079740 00076680  55 09 07 FE */	clrlwi r9, r8, 0x1f
/* 80079744 00076684  51 06 F7 3E */	rlwimi r6, r8, 0x1e, 0x1c, 0x1f
/* 80079748 00076688  55 0A CF BE */	rlwinm r10, r8, 0x19, 0x1e, 0x1f
/* 8007974C 0007668C  7C 07 00 D0 */	neg r0, r7
/* 80079750 00076690  51 09 07 BC */	rlwimi r9, r8, 0, 0x1e, 0x1e
/* 80079754 00076694  7C 04 3B 78 */	or r4, r0, r7
/* 80079758 00076698  2C 07 00 00 */	cmpwi r7, 0
/* 8007975C 0007669C  20 67 00 02 */	subfic r3, r7, 2
/* 80079760 000766A0  38 07 FF FE */	addi r0, r7, -2
/* 80079764 000766A4  7C 60 03 78 */	or r0, r3, r0
/* 80079768 000766A8  50 C9 16 BA */	rlwimi r9, r6, 2, 0x1a, 0x1d
/* 8007976C 000766AC  55 03 D7 FE */	rlwinm r3, r8, 0x1a, 0x1f, 0x1f
/* 80079770 000766B0  54 C8 3C 68 */	rlwinm r8, r6, 7, 0x11, 0x14
/* 80079774 000766B4  54 87 5D 6A */	rlwinm r7, r4, 0xb, 0x15, 0x15
/* 80079778 000766B8  54 06 55 AC */	rlwinm r6, r0, 0xa, 0x16, 0x16
/* 8007977C 000766BC  50 69 36 72 */	rlwimi r9, r3, 6, 0x19, 0x19
/* 80079780 000766C0  40 82 00 08 */	bne .L_80079788
/* 80079784 000766C4  39 40 00 00 */	li r10, 0
.L_80079788:
/* 80079788 000766C8  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 8007978C 000766CC  55 40 38 30 */	slwi r0, r10, 7
/* 80079790 000766D0  7D 20 03 78 */	or r0, r9, r0
/* 80079794 000766D4  38 61 00 0C */	addi r3, r1, 0xc
/* 80079798 000766D8  80 85 00 08 */	lwz r4, 8(r5)
/* 8007979C 000766DC  7C C0 03 78 */	or r0, r6, r0
/* 800797A0 000766E0  7C E6 03 78 */	or r6, r7, r0
/* 800797A4 000766E4  38 04 00 01 */	addi r0, r4, 1
/* 800797A8 000766E8  7D 08 33 78 */	or r8, r8, r6
/* 800797AC 000766EC  90 05 00 08 */	stw r0, 8(r5)
/* 800797B0 000766F0  55 00 46 3E */	srwi r0, r8, 0x18
/* 800797B4 000766F4  98 04 00 00 */	stb r0, 0(r4)
/* 800797B8 000766F8  55 07 86 3E */	rlwinm r7, r8, 0x10, 0x18, 0x1f
/* 800797BC 000766FC  55 06 C6 3E */	rlwinm r6, r8, 0x18, 0x18, 0x1f
/* 800797C0 00076700  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 800797C4 00076704  80 85 00 08 */	lwz r4, 8(r5)
/* 800797C8 00076708  38 04 00 01 */	addi r0, r4, 1
/* 800797CC 0007670C  90 05 00 08 */	stw r0, 8(r5)
/* 800797D0 00076710  98 E4 00 00 */	stb r7, 0(r4)
/* 800797D4 00076714  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 800797D8 00076718  80 85 00 08 */	lwz r4, 8(r5)
/* 800797DC 0007671C  38 04 00 01 */	addi r0, r4, 1
/* 800797E0 00076720  90 05 00 08 */	stw r0, 8(r5)
/* 800797E4 00076724  98 C4 00 00 */	stb r6, 0(r4)
/* 800797E8 00076728  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 800797EC 0007672C  80 85 00 08 */	lwz r4, 8(r5)
/* 800797F0 00076730  38 04 00 01 */	addi r0, r4, 1
/* 800797F4 00076734  90 05 00 08 */	stw r0, 8(r5)
/* 800797F8 00076738  99 04 00 00 */	stb r8, 0(r4)
/* 800797FC 0007673C  80 02 87 78 */	lwz r0, lbl_80516AD8@sda21(r2)
/* 80079800 00076740  A1 1F 00 18 */	lhz r8, 0x18(r31)
/* 80079804 00076744  90 01 00 0C */	stw r0, 0xc(r1)
/* 80079808 00076748  55 00 BF BE */	rlwinm r0, r8, 0x17, 0x1e, 0x1f
/* 8007980C 0007674C  55 06 CE 36 */	rlwinm r6, r8, 0x19, 0x18, 0x1b
/* 80079810 00076750  7C E3 00 AE */	lbzx r7, r3, r0
/* 80079814 00076754  55 09 07 FE */	clrlwi r9, r8, 0x1f
/* 80079818 00076758  51 06 F7 3E */	rlwimi r6, r8, 0x1e, 0x1c, 0x1f
/* 8007981C 0007675C  55 0A CF BE */	rlwinm r10, r8, 0x19, 0x1e, 0x1f
/* 80079820 00076760  7C 07 00 D0 */	neg r0, r7
/* 80079824 00076764  51 09 07 BC */	rlwimi r9, r8, 0, 0x1e, 0x1e
/* 80079828 00076768  7C 04 3B 78 */	or r4, r0, r7
/* 8007982C 0007676C  2C 07 00 00 */	cmpwi r7, 0
/* 80079830 00076770  20 67 00 02 */	subfic r3, r7, 2
/* 80079834 00076774  38 07 FF FE */	addi r0, r7, -2
/* 80079838 00076778  7C 60 03 78 */	or r0, r3, r0
/* 8007983C 0007677C  50 C9 16 BA */	rlwimi r9, r6, 2, 0x1a, 0x1d
/* 80079840 00076780  55 03 D7 FE */	rlwinm r3, r8, 0x1a, 0x1f, 0x1f
/* 80079844 00076784  54 C8 3C 68 */	rlwinm r8, r6, 7, 0x11, 0x14
/* 80079848 00076788  54 87 5D 6A */	rlwinm r7, r4, 0xb, 0x15, 0x15
/* 8007984C 0007678C  54 06 55 AC */	rlwinm r6, r0, 0xa, 0x16, 0x16
/* 80079850 00076790  50 69 36 72 */	rlwimi r9, r3, 6, 0x19, 0x19
/* 80079854 00076794  40 82 00 08 */	bne .L_8007985C
/* 80079858 00076798  39 40 00 00 */	li r10, 0
.L_8007985C:
/* 8007985C 0007679C  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 80079860 000767A0  55 40 38 30 */	slwi r0, r10, 7
/* 80079864 000767A4  7D 20 03 78 */	or r0, r9, r0
/* 80079868 000767A8  38 61 00 08 */	addi r3, r1, 8
/* 8007986C 000767AC  80 85 00 08 */	lwz r4, 8(r5)
/* 80079870 000767B0  7C C0 03 78 */	or r0, r6, r0
/* 80079874 000767B4  7C E6 03 78 */	or r6, r7, r0
/* 80079878 000767B8  38 04 00 01 */	addi r0, r4, 1
/* 8007987C 000767BC  7D 08 33 78 */	or r8, r8, r6
/* 80079880 000767C0  90 05 00 08 */	stw r0, 8(r5)
/* 80079884 000767C4  55 00 46 3E */	srwi r0, r8, 0x18
/* 80079888 000767C8  98 04 00 00 */	stb r0, 0(r4)
/* 8007988C 000767CC  55 07 86 3E */	rlwinm r7, r8, 0x10, 0x18, 0x1f
/* 80079890 000767D0  55 06 C6 3E */	rlwinm r6, r8, 0x18, 0x18, 0x1f
/* 80079894 000767D4  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 80079898 000767D8  80 85 00 08 */	lwz r4, 8(r5)
/* 8007989C 000767DC  38 04 00 01 */	addi r0, r4, 1
/* 800798A0 000767E0  90 05 00 08 */	stw r0, 8(r5)
/* 800798A4 000767E4  98 E4 00 00 */	stb r7, 0(r4)
/* 800798A8 000767E8  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 800798AC 000767EC  80 85 00 08 */	lwz r4, 8(r5)
/* 800798B0 000767F0  38 04 00 01 */	addi r0, r4, 1
/* 800798B4 000767F4  90 05 00 08 */	stw r0, 8(r5)
/* 800798B8 000767F8  98 C4 00 00 */	stb r6, 0(r4)
/* 800798BC 000767FC  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 800798C0 00076800  80 85 00 08 */	lwz r4, 8(r5)
/* 800798C4 00076804  38 04 00 01 */	addi r0, r4, 1
/* 800798C8 00076808  90 05 00 08 */	stw r0, 8(r5)
/* 800798CC 0007680C  99 04 00 00 */	stb r8, 0(r4)
/* 800798D0 00076810  80 02 87 78 */	lwz r0, lbl_80516AD8@sda21(r2)
/* 800798D4 00076814  A1 5F 00 1C */	lhz r10, 0x1c(r31)
/* 800798D8 00076818  90 01 00 08 */	stw r0, 8(r1)
/* 800798DC 0007681C  55 40 BF BE */	rlwinm r0, r10, 0x17, 0x1e, 0x1f
/* 800798E0 00076820  55 46 CE 36 */	rlwinm r6, r10, 0x19, 0x18, 0x1b
/* 800798E4 00076824  7C E3 00 AE */	lbzx r7, r3, r0
/* 800798E8 00076828  55 48 07 FE */	clrlwi r8, r10, 0x1f
/* 800798EC 0007682C  51 46 F7 3E */	rlwimi r6, r10, 0x1e, 0x1c, 0x1f
/* 800798F0 00076830  55 49 CF BE */	rlwinm r9, r10, 0x19, 0x1e, 0x1f
/* 800798F4 00076834  7C 07 00 D0 */	neg r0, r7
/* 800798F8 00076838  51 48 07 BC */	rlwimi r8, r10, 0, 0x1e, 0x1e
/* 800798FC 0007683C  7C 04 3B 78 */	or r4, r0, r7
/* 80079900 00076840  2C 07 00 00 */	cmpwi r7, 0
/* 80079904 00076844  20 67 00 02 */	subfic r3, r7, 2
/* 80079908 00076848  38 07 FF FE */	addi r0, r7, -2
/* 8007990C 0007684C  7C 60 03 78 */	or r0, r3, r0
/* 80079910 00076850  50 C8 16 BA */	rlwimi r8, r6, 2, 0x1a, 0x1d
/* 80079914 00076854  54 C7 3C 68 */	rlwinm r7, r6, 7, 0x11, 0x14
/* 80079918 00076858  54 86 5D 6A */	rlwinm r6, r4, 0xb, 0x15, 0x15
/* 8007991C 0007685C  54 05 55 AC */	rlwinm r5, r0, 0xa, 0x16, 0x16
/* 80079920 00076860  51 48 06 72 */	rlwimi r8, r10, 0, 0x19, 0x19
/* 80079924 00076864  40 82 00 08 */	bne .L_8007992C
/* 80079928 00076868  39 20 00 00 */	li r9, 0
.L_8007992C:
/* 8007992C 0007686C  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 80079930 00076870  55 20 38 30 */	slwi r0, r9, 7
/* 80079934 00076874  7D 00 03 78 */	or r0, r8, r0
/* 80079938 00076878  3B A0 00 00 */	li r29, 0
/* 8007993C 0007687C  80 64 00 08 */	lwz r3, 8(r4)
/* 80079940 00076880  7C A0 03 78 */	or r0, r5, r0
/* 80079944 00076884  7C C5 03 78 */	or r5, r6, r0
/* 80079948 00076888  38 03 00 01 */	addi r0, r3, 1
/* 8007994C 0007688C  7C E7 2B 78 */	or r7, r7, r5
/* 80079950 00076890  90 04 00 08 */	stw r0, 8(r4)
/* 80079954 00076894  54 E0 46 3E */	srwi r0, r7, 0x18
/* 80079958 00076898  98 03 00 00 */	stb r0, 0(r3)
/* 8007995C 0007689C  54 E6 86 3E */	rlwinm r6, r7, 0x10, 0x18, 0x1f
/* 80079960 000768A0  54 E5 C6 3E */	rlwinm r5, r7, 0x18, 0x18, 0x1f
/* 80079964 000768A4  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 80079968 000768A8  80 64 00 08 */	lwz r3, 8(r4)
/* 8007996C 000768AC  38 03 00 01 */	addi r0, r3, 1
/* 80079970 000768B0  90 04 00 08 */	stw r0, 8(r4)
/* 80079974 000768B4  98 C3 00 00 */	stb r6, 0(r3)
/* 80079978 000768B8  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 8007997C 000768BC  80 64 00 08 */	lwz r3, 8(r4)
/* 80079980 000768C0  38 03 00 01 */	addi r0, r3, 1
/* 80079984 000768C4  90 04 00 08 */	stw r0, 8(r4)
/* 80079988 000768C8  98 A3 00 00 */	stb r5, 0(r3)
/* 8007998C 000768CC  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 80079990 000768D0  80 64 00 08 */	lwz r3, 8(r4)
/* 80079994 000768D4  38 03 00 01 */	addi r0, r3, 1
/* 80079998 000768D8  90 04 00 08 */	stw r0, 8(r4)
/* 8007999C 000768DC  98 E3 00 00 */	stb r7, 0(r3)
.L_800799A0:
/* 800799A0 000768E0  80 7F 00 20 */	lwz r3, 0x20(r31)
/* 800799A4 000768E4  28 03 00 00 */	cmplwi r3, 0
/* 800799A8 000768E8  41 82 00 0C */	beq .L_800799B4
/* 800799AC 000768EC  7F A4 EB 78 */	mr r4, r29
/* 800799B0 000768F0  4B FE A1 75 */	bl load__11J3DLightObjCFUl
.L_800799B4:
/* 800799B4 000768F4  3B BD 00 01 */	addi r29, r29, 1
/* 800799B8 000768F8  3B FF 00 04 */	addi r31, r31, 4
/* 800799BC 000768FC  28 1D 00 08 */	cmplwi r29, 8
/* 800799C0 00076900  41 80 FF E0 */	blt .L_800799A0
/* 800799C4 00076904  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 800799C8 00076908  7F C3 F3 78 */	mr r3, r30
/* 800799CC 0007690C  80 04 00 08 */	lwz r0, 8(r4)
/* 800799D0 00076910  7C 9E 00 50 */	subf r4, r30, r0
/* 800799D4 00076914  48 07 2D 75 */	bl DCStoreRange
/* 800799D8 00076918  80 01 00 34 */	lwz r0, 0x34(r1)
/* 800799DC 0007691C  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 800799E0 00076920  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 800799E4 00076924  83 A1 00 24 */	lwz r29, 0x24(r1)
/* 800799E8 00076928  7C 08 03 A6 */	mtlr r0
/* 800799EC 0007692C  38 21 00 30 */	addi r1, r1, 0x30
/* 800799F0 00076930  4E 80 00 20 */	blr 
.endfn patchLight__20J3DColorBlockLightOnFv

.fn diff__21J3DColorBlockLightOffFUl, global
/* 800799F4 00076934  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800799F8 00076938  7C 08 02 A6 */	mflr r0
/* 800799FC 0007693C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80079A00 00076940  54 80 07 FF */	clrlwi. r0, r4, 0x1f
/* 80079A04 00076944  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80079A08 00076948  7C 9F 23 78 */	mr r31, r4
/* 80079A0C 0007694C  93 C1 00 08 */	stw r30, 8(r1)
/* 80079A10 00076950  7C 7E 1B 78 */	mr r30, r3
/* 80079A14 00076954  41 82 00 14 */	beq .L_80079A28
/* 80079A18 00076958  81 83 00 00 */	lwz r12, 0(r3)
/* 80079A1C 0007695C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80079A20 00076960  7D 89 03 A6 */	mtctr r12
/* 80079A24 00076964  4E 80 04 21 */	bctrl 
.L_80079A28:
/* 80079A28 00076968  57 E0 07 BD */	rlwinm. r0, r31, 0, 0x1e, 0x1e
/* 80079A2C 0007696C  41 82 00 18 */	beq .L_80079A44
/* 80079A30 00076970  7F C3 F3 78 */	mr r3, r30
/* 80079A34 00076974  81 9E 00 00 */	lwz r12, 0(r30)
/* 80079A38 00076978  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 80079A3C 0007697C  7D 89 03 A6 */	mtctr r12
/* 80079A40 00076980  4E 80 04 21 */	bctrl 
.L_80079A44:
/* 80079A44 00076984  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80079A48 00076988  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80079A4C 0007698C  83 C1 00 08 */	lwz r30, 8(r1)
/* 80079A50 00076990  7C 08 03 A6 */	mtlr r0
/* 80079A54 00076994  38 21 00 10 */	addi r1, r1, 0x10
/* 80079A58 00076998  4E 80 00 20 */	blr 
.endfn diff__21J3DColorBlockLightOffFUl

.fn diffMatColor__21J3DColorBlockLightOffFv, global
/* 80079A5C 0007699C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80079A60 000769A0  7C 08 02 A6 */	mflr r0
/* 80079A64 000769A4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80079A68 000769A8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80079A6C 000769AC  7C 7F 1B 78 */	mr r31, r3
/* 80079A70 000769B0  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 80079A74 000769B4  80 6D 80 B0 */	lwz r3, SizeOfLoadMatColors@sda21(r13)
/* 80079A78 000769B8  80 85 00 08 */	lwz r4, 8(r5)
/* 80079A7C 000769BC  80 05 00 0C */	lwz r0, 0xc(r5)
/* 80079A80 000769C0  7C 64 1A 14 */	add r3, r4, r3
/* 80079A84 000769C4  7C 03 00 40 */	cmplw r3, r0
/* 80079A88 000769C8  40 81 00 08 */	ble .L_80079A90
/* 80079A8C 000769CC  48 06 81 B5 */	bl GDOverflowed
.L_80079A90:
/* 80079A90 000769D0  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 80079A94 000769D4  39 00 00 10 */	li r8, 0x10
/* 80079A98 000769D8  38 E0 00 00 */	li r7, 0
/* 80079A9C 000769DC  38 C0 00 01 */	li r6, 1
/* 80079AA0 000769E0  80 64 00 08 */	lwz r3, 8(r4)
/* 80079AA4 000769E4  38 A0 00 0C */	li r5, 0xc
/* 80079AA8 000769E8  38 03 00 01 */	addi r0, r3, 1
/* 80079AAC 000769EC  90 04 00 08 */	stw r0, 8(r4)
/* 80079AB0 000769F0  99 03 00 00 */	stb r8, 0(r3)
/* 80079AB4 000769F4  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 80079AB8 000769F8  80 64 00 08 */	lwz r3, 8(r4)
/* 80079ABC 000769FC  38 03 00 01 */	addi r0, r3, 1
/* 80079AC0 00076A00  90 04 00 08 */	stw r0, 8(r4)
/* 80079AC4 00076A04  98 E3 00 00 */	stb r7, 0(r3)
/* 80079AC8 00076A08  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 80079ACC 00076A0C  80 64 00 08 */	lwz r3, 8(r4)
/* 80079AD0 00076A10  38 03 00 01 */	addi r0, r3, 1
/* 80079AD4 00076A14  90 04 00 08 */	stw r0, 8(r4)
/* 80079AD8 00076A18  98 C3 00 00 */	stb r6, 0(r3)
/* 80079ADC 00076A1C  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 80079AE0 00076A20  80 64 00 08 */	lwz r3, 8(r4)
/* 80079AE4 00076A24  38 03 00 01 */	addi r0, r3, 1
/* 80079AE8 00076A28  90 04 00 08 */	stw r0, 8(r4)
/* 80079AEC 00076A2C  99 03 00 00 */	stb r8, 0(r3)
/* 80079AF0 00076A30  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 80079AF4 00076A34  80 64 00 08 */	lwz r3, 8(r4)
/* 80079AF8 00076A38  38 03 00 01 */	addi r0, r3, 1
/* 80079AFC 00076A3C  90 04 00 08 */	stw r0, 8(r4)
/* 80079B00 00076A40  98 A3 00 00 */	stb r5, 0(r3)
/* 80079B04 00076A44  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 80079B08 00076A48  81 1F 00 04 */	lwz r8, 4(r31)
/* 80079B0C 00076A4C  80 64 00 08 */	lwz r3, 8(r4)
/* 80079B10 00076A50  55 07 46 3E */	srwi r7, r8, 0x18
/* 80079B14 00076A54  55 06 86 3E */	rlwinm r6, r8, 0x10, 0x18, 0x1f
/* 80079B18 00076A58  38 03 00 01 */	addi r0, r3, 1
/* 80079B1C 00076A5C  55 05 C6 3E */	rlwinm r5, r8, 0x18, 0x18, 0x1f
/* 80079B20 00076A60  90 04 00 08 */	stw r0, 8(r4)
/* 80079B24 00076A64  98 E3 00 00 */	stb r7, 0(r3)
/* 80079B28 00076A68  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 80079B2C 00076A6C  80 64 00 08 */	lwz r3, 8(r4)
/* 80079B30 00076A70  38 03 00 01 */	addi r0, r3, 1
/* 80079B34 00076A74  90 04 00 08 */	stw r0, 8(r4)
/* 80079B38 00076A78  98 C3 00 00 */	stb r6, 0(r3)
/* 80079B3C 00076A7C  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 80079B40 00076A80  80 64 00 08 */	lwz r3, 8(r4)
/* 80079B44 00076A84  38 03 00 01 */	addi r0, r3, 1
/* 80079B48 00076A88  90 04 00 08 */	stw r0, 8(r4)
/* 80079B4C 00076A8C  98 A3 00 00 */	stb r5, 0(r3)
/* 80079B50 00076A90  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 80079B54 00076A94  80 64 00 08 */	lwz r3, 8(r4)
/* 80079B58 00076A98  38 03 00 01 */	addi r0, r3, 1
/* 80079B5C 00076A9C  90 04 00 08 */	stw r0, 8(r4)
/* 80079B60 00076AA0  99 03 00 00 */	stb r8, 0(r3)
/* 80079B64 00076AA4  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 80079B68 00076AA8  81 1F 00 08 */	lwz r8, 8(r31)
/* 80079B6C 00076AAC  80 64 00 08 */	lwz r3, 8(r4)
/* 80079B70 00076AB0  55 07 46 3E */	srwi r7, r8, 0x18
/* 80079B74 00076AB4  55 06 86 3E */	rlwinm r6, r8, 0x10, 0x18, 0x1f
/* 80079B78 00076AB8  38 03 00 01 */	addi r0, r3, 1
/* 80079B7C 00076ABC  55 05 C6 3E */	rlwinm r5, r8, 0x18, 0x18, 0x1f
/* 80079B80 00076AC0  90 04 00 08 */	stw r0, 8(r4)
/* 80079B84 00076AC4  98 E3 00 00 */	stb r7, 0(r3)
/* 80079B88 00076AC8  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 80079B8C 00076ACC  80 64 00 08 */	lwz r3, 8(r4)
/* 80079B90 00076AD0  38 03 00 01 */	addi r0, r3, 1
/* 80079B94 00076AD4  90 04 00 08 */	stw r0, 8(r4)
/* 80079B98 00076AD8  98 C3 00 00 */	stb r6, 0(r3)
/* 80079B9C 00076ADC  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 80079BA0 00076AE0  80 64 00 08 */	lwz r3, 8(r4)
/* 80079BA4 00076AE4  38 03 00 01 */	addi r0, r3, 1
/* 80079BA8 00076AE8  90 04 00 08 */	stw r0, 8(r4)
/* 80079BAC 00076AEC  98 A3 00 00 */	stb r5, 0(r3)
/* 80079BB0 00076AF0  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 80079BB4 00076AF4  80 64 00 08 */	lwz r3, 8(r4)
/* 80079BB8 00076AF8  38 03 00 01 */	addi r0, r3, 1
/* 80079BBC 00076AFC  90 04 00 08 */	stw r0, 8(r4)
/* 80079BC0 00076B00  99 03 00 00 */	stb r8, 0(r3)
/* 80079BC4 00076B04  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80079BC8 00076B08  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80079BCC 00076B0C  7C 08 03 A6 */	mtlr r0
/* 80079BD0 00076B10  38 21 00 10 */	addi r1, r1, 0x10
/* 80079BD4 00076B14  4E 80 00 20 */	blr 
.endfn diffMatColor__21J3DColorBlockLightOffFv

.fn diffLight__21J3DColorBlockLightOffFv, global
/* 80079BD8 00076B18  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80079BDC 00076B1C  7C 08 02 A6 */	mflr r0
/* 80079BE0 00076B20  90 01 00 24 */	stw r0, 0x24(r1)
/* 80079BE4 00076B24  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80079BE8 00076B28  7C 7F 1B 78 */	mr r31, r3
/* 80079BEC 00076B2C  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 80079BF0 00076B30  80 6D 80 B8 */	lwz r3, SizeOfLoadColorChans@sda21(r13)
/* 80079BF4 00076B34  80 85 00 08 */	lwz r4, 8(r5)
/* 80079BF8 00076B38  80 05 00 0C */	lwz r0, 0xc(r5)
/* 80079BFC 00076B3C  7C 64 1A 14 */	add r3, r4, r3
/* 80079C00 00076B40  7C 03 00 40 */	cmplw r3, r0
/* 80079C04 00076B44  40 81 00 08 */	ble .L_80079C0C
/* 80079C08 00076B48  48 06 80 39 */	bl GDOverflowed
.L_80079C0C:
/* 80079C0C 00076B4C  80 CD 8E A8 */	lwz r6, __GDCurrentDL@sda21(r13)
/* 80079C10 00076B50  39 20 00 10 */	li r9, 0x10
/* 80079C14 00076B54  38 00 00 00 */	li r0, 0
/* 80079C18 00076B58  39 00 00 03 */	li r8, 3
/* 80079C1C 00076B5C  80 A6 00 08 */	lwz r5, 8(r6)
/* 80079C20 00076B60  38 E0 00 0E */	li r7, 0xe
/* 80079C24 00076B64  38 61 00 14 */	addi r3, r1, 0x14
/* 80079C28 00076B68  38 85 00 01 */	addi r4, r5, 1
/* 80079C2C 00076B6C  90 86 00 08 */	stw r4, 8(r6)
/* 80079C30 00076B70  99 25 00 00 */	stb r9, 0(r5)
/* 80079C34 00076B74  80 CD 8E A8 */	lwz r6, __GDCurrentDL@sda21(r13)
/* 80079C38 00076B78  80 A6 00 08 */	lwz r5, 8(r6)
/* 80079C3C 00076B7C  38 85 00 01 */	addi r4, r5, 1
/* 80079C40 00076B80  90 86 00 08 */	stw r4, 8(r6)
/* 80079C44 00076B84  98 05 00 00 */	stb r0, 0(r5)
/* 80079C48 00076B88  80 CD 8E A8 */	lwz r6, __GDCurrentDL@sda21(r13)
/* 80079C4C 00076B8C  80 A6 00 08 */	lwz r5, 8(r6)
/* 80079C50 00076B90  38 85 00 01 */	addi r4, r5, 1
/* 80079C54 00076B94  90 86 00 08 */	stw r4, 8(r6)
/* 80079C58 00076B98  99 05 00 00 */	stb r8, 0(r5)
/* 80079C5C 00076B9C  80 CD 8E A8 */	lwz r6, __GDCurrentDL@sda21(r13)
/* 80079C60 00076BA0  80 A6 00 08 */	lwz r5, 8(r6)
/* 80079C64 00076BA4  38 85 00 01 */	addi r4, r5, 1
/* 80079C68 00076BA8  90 86 00 08 */	stw r4, 8(r6)
/* 80079C6C 00076BAC  99 25 00 00 */	stb r9, 0(r5)
/* 80079C70 00076BB0  80 CD 8E A8 */	lwz r6, __GDCurrentDL@sda21(r13)
/* 80079C74 00076BB4  80 A6 00 08 */	lwz r5, 8(r6)
/* 80079C78 00076BB8  38 85 00 01 */	addi r4, r5, 1
/* 80079C7C 00076BBC  90 86 00 08 */	stw r4, 8(r6)
/* 80079C80 00076BC0  98 E5 00 00 */	stb r7, 0(r5)
/* 80079C84 00076BC4  80 82 87 78 */	lwz r4, lbl_80516AD8@sda21(r2)
/* 80079C88 00076BC8  A1 7F 00 0E */	lhz r11, 0xe(r31)
/* 80079C8C 00076BCC  90 81 00 14 */	stw r4, 0x14(r1)
/* 80079C90 00076BD0  55 64 BF BE */	rlwinm r4, r11, 0x17, 0x1e, 0x1f
/* 80079C94 00076BD4  55 67 CE 36 */	rlwinm r7, r11, 0x19, 0x18, 0x1b
/* 80079C98 00076BD8  7D 03 20 AE */	lbzx r8, r3, r4
/* 80079C9C 00076BDC  55 69 07 FE */	clrlwi r9, r11, 0x1f
/* 80079CA0 00076BE0  51 67 F7 3E */	rlwimi r7, r11, 0x1e, 0x1c, 0x1f
/* 80079CA4 00076BE4  55 6A CF BE */	rlwinm r10, r11, 0x19, 0x1e, 0x1f
/* 80079CA8 00076BE8  7C 68 00 D0 */	neg r3, r8
/* 80079CAC 00076BEC  51 69 07 BC */	rlwimi r9, r11, 0, 0x1e, 0x1e
/* 80079CB0 00076BF0  7C 65 43 78 */	or r5, r3, r8
/* 80079CB4 00076BF4  2C 08 00 00 */	cmpwi r8, 0
/* 80079CB8 00076BF8  20 88 00 02 */	subfic r4, r8, 2
/* 80079CBC 00076BFC  38 68 FF FE */	addi r3, r8, -2
/* 80079CC0 00076C00  7C 83 1B 78 */	or r3, r4, r3
/* 80079CC4 00076C04  50 E9 16 BA */	rlwimi r9, r7, 2, 0x1a, 0x1d
/* 80079CC8 00076C08  54 E8 3C 68 */	rlwinm r8, r7, 7, 0x11, 0x14
/* 80079CCC 00076C0C  54 A7 5D 6A */	rlwinm r7, r5, 0xb, 0x15, 0x15
/* 80079CD0 00076C10  54 66 55 AC */	rlwinm r6, r3, 0xa, 0x16, 0x16
/* 80079CD4 00076C14  51 69 06 72 */	rlwimi r9, r11, 0, 0x19, 0x19
/* 80079CD8 00076C18  40 82 00 08 */	bne .L_80079CE0
/* 80079CDC 00076C1C  7C 0A 03 78 */	mr r10, r0
.L_80079CE0:
/* 80079CE0 00076C20  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 80079CE4 00076C24  55 40 38 30 */	slwi r0, r10, 7
/* 80079CE8 00076C28  7D 20 03 78 */	or r0, r9, r0
/* 80079CEC 00076C2C  38 61 00 10 */	addi r3, r1, 0x10
/* 80079CF0 00076C30  80 85 00 08 */	lwz r4, 8(r5)
/* 80079CF4 00076C34  7C C0 03 78 */	or r0, r6, r0
/* 80079CF8 00076C38  7C E6 03 78 */	or r6, r7, r0
/* 80079CFC 00076C3C  38 04 00 01 */	addi r0, r4, 1
/* 80079D00 00076C40  7D 08 33 78 */	or r8, r8, r6
/* 80079D04 00076C44  90 05 00 08 */	stw r0, 8(r5)
/* 80079D08 00076C48  55 00 46 3E */	srwi r0, r8, 0x18
/* 80079D0C 00076C4C  98 04 00 00 */	stb r0, 0(r4)
/* 80079D10 00076C50  55 07 86 3E */	rlwinm r7, r8, 0x10, 0x18, 0x1f
/* 80079D14 00076C54  55 06 C6 3E */	rlwinm r6, r8, 0x18, 0x18, 0x1f
/* 80079D18 00076C58  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 80079D1C 00076C5C  80 85 00 08 */	lwz r4, 8(r5)
/* 80079D20 00076C60  38 04 00 01 */	addi r0, r4, 1
/* 80079D24 00076C64  90 05 00 08 */	stw r0, 8(r5)
/* 80079D28 00076C68  98 E4 00 00 */	stb r7, 0(r4)
/* 80079D2C 00076C6C  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 80079D30 00076C70  80 85 00 08 */	lwz r4, 8(r5)
/* 80079D34 00076C74  38 04 00 01 */	addi r0, r4, 1
/* 80079D38 00076C78  90 05 00 08 */	stw r0, 8(r5)
/* 80079D3C 00076C7C  98 C4 00 00 */	stb r6, 0(r4)
/* 80079D40 00076C80  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 80079D44 00076C84  80 85 00 08 */	lwz r4, 8(r5)
/* 80079D48 00076C88  38 04 00 01 */	addi r0, r4, 1
/* 80079D4C 00076C8C  90 05 00 08 */	stw r0, 8(r5)
/* 80079D50 00076C90  99 04 00 00 */	stb r8, 0(r4)
/* 80079D54 00076C94  80 02 87 78 */	lwz r0, lbl_80516AD8@sda21(r2)
/* 80079D58 00076C98  A1 1F 00 12 */	lhz r8, 0x12(r31)
/* 80079D5C 00076C9C  90 01 00 10 */	stw r0, 0x10(r1)
/* 80079D60 00076CA0  55 00 BF BE */	rlwinm r0, r8, 0x17, 0x1e, 0x1f
/* 80079D64 00076CA4  55 06 CE 36 */	rlwinm r6, r8, 0x19, 0x18, 0x1b
/* 80079D68 00076CA8  7C E3 00 AE */	lbzx r7, r3, r0
/* 80079D6C 00076CAC  55 09 07 FE */	clrlwi r9, r8, 0x1f
/* 80079D70 00076CB0  51 06 F7 3E */	rlwimi r6, r8, 0x1e, 0x1c, 0x1f
/* 80079D74 00076CB4  55 0A CF BE */	rlwinm r10, r8, 0x19, 0x1e, 0x1f
/* 80079D78 00076CB8  7C 07 00 D0 */	neg r0, r7
/* 80079D7C 00076CBC  51 09 07 BC */	rlwimi r9, r8, 0, 0x1e, 0x1e
/* 80079D80 00076CC0  7C 04 3B 78 */	or r4, r0, r7
/* 80079D84 00076CC4  2C 07 00 00 */	cmpwi r7, 0
/* 80079D88 00076CC8  20 67 00 02 */	subfic r3, r7, 2
/* 80079D8C 00076CCC  38 07 FF FE */	addi r0, r7, -2
/* 80079D90 00076CD0  7C 60 03 78 */	or r0, r3, r0
/* 80079D94 00076CD4  50 C9 16 BA */	rlwimi r9, r6, 2, 0x1a, 0x1d
/* 80079D98 00076CD8  55 03 D7 FE */	rlwinm r3, r8, 0x1a, 0x1f, 0x1f
/* 80079D9C 00076CDC  54 C8 3C 68 */	rlwinm r8, r6, 7, 0x11, 0x14
/* 80079DA0 00076CE0  54 87 5D 6A */	rlwinm r7, r4, 0xb, 0x15, 0x15
/* 80079DA4 00076CE4  54 06 55 AC */	rlwinm r6, r0, 0xa, 0x16, 0x16
/* 80079DA8 00076CE8  50 69 36 72 */	rlwimi r9, r3, 6, 0x19, 0x19
/* 80079DAC 00076CEC  40 82 00 08 */	bne .L_80079DB4
/* 80079DB0 00076CF0  39 40 00 00 */	li r10, 0
.L_80079DB4:
/* 80079DB4 00076CF4  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 80079DB8 00076CF8  55 40 38 30 */	slwi r0, r10, 7
/* 80079DBC 00076CFC  7D 20 03 78 */	or r0, r9, r0
/* 80079DC0 00076D00  38 61 00 0C */	addi r3, r1, 0xc
/* 80079DC4 00076D04  80 85 00 08 */	lwz r4, 8(r5)
/* 80079DC8 00076D08  7C C0 03 78 */	or r0, r6, r0
/* 80079DCC 00076D0C  7C E6 03 78 */	or r6, r7, r0
/* 80079DD0 00076D10  38 04 00 01 */	addi r0, r4, 1
/* 80079DD4 00076D14  7D 08 33 78 */	or r8, r8, r6
/* 80079DD8 00076D18  90 05 00 08 */	stw r0, 8(r5)
/* 80079DDC 00076D1C  55 00 46 3E */	srwi r0, r8, 0x18
/* 80079DE0 00076D20  98 04 00 00 */	stb r0, 0(r4)
/* 80079DE4 00076D24  55 07 86 3E */	rlwinm r7, r8, 0x10, 0x18, 0x1f
/* 80079DE8 00076D28  55 06 C6 3E */	rlwinm r6, r8, 0x18, 0x18, 0x1f
/* 80079DEC 00076D2C  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 80079DF0 00076D30  80 85 00 08 */	lwz r4, 8(r5)
/* 80079DF4 00076D34  38 04 00 01 */	addi r0, r4, 1
/* 80079DF8 00076D38  90 05 00 08 */	stw r0, 8(r5)
/* 80079DFC 00076D3C  98 E4 00 00 */	stb r7, 0(r4)
/* 80079E00 00076D40  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 80079E04 00076D44  80 85 00 08 */	lwz r4, 8(r5)
/* 80079E08 00076D48  38 04 00 01 */	addi r0, r4, 1
/* 80079E0C 00076D4C  90 05 00 08 */	stw r0, 8(r5)
/* 80079E10 00076D50  98 C4 00 00 */	stb r6, 0(r4)
/* 80079E14 00076D54  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 80079E18 00076D58  80 85 00 08 */	lwz r4, 8(r5)
/* 80079E1C 00076D5C  38 04 00 01 */	addi r0, r4, 1
/* 80079E20 00076D60  90 05 00 08 */	stw r0, 8(r5)
/* 80079E24 00076D64  99 04 00 00 */	stb r8, 0(r4)
/* 80079E28 00076D68  80 02 87 78 */	lwz r0, lbl_80516AD8@sda21(r2)
/* 80079E2C 00076D6C  A1 1F 00 10 */	lhz r8, 0x10(r31)
/* 80079E30 00076D70  90 01 00 0C */	stw r0, 0xc(r1)
/* 80079E34 00076D74  55 00 BF BE */	rlwinm r0, r8, 0x17, 0x1e, 0x1f
/* 80079E38 00076D78  55 06 CE 36 */	rlwinm r6, r8, 0x19, 0x18, 0x1b
/* 80079E3C 00076D7C  7C E3 00 AE */	lbzx r7, r3, r0
/* 80079E40 00076D80  55 09 07 FE */	clrlwi r9, r8, 0x1f
/* 80079E44 00076D84  51 06 F7 3E */	rlwimi r6, r8, 0x1e, 0x1c, 0x1f
/* 80079E48 00076D88  55 0A CF BE */	rlwinm r10, r8, 0x19, 0x1e, 0x1f
/* 80079E4C 00076D8C  7C 07 00 D0 */	neg r0, r7
/* 80079E50 00076D90  51 09 07 BC */	rlwimi r9, r8, 0, 0x1e, 0x1e
/* 80079E54 00076D94  7C 04 3B 78 */	or r4, r0, r7
/* 80079E58 00076D98  2C 07 00 00 */	cmpwi r7, 0
/* 80079E5C 00076D9C  20 67 00 02 */	subfic r3, r7, 2
/* 80079E60 00076DA0  38 07 FF FE */	addi r0, r7, -2
/* 80079E64 00076DA4  7C 60 03 78 */	or r0, r3, r0
/* 80079E68 00076DA8  50 C9 16 BA */	rlwimi r9, r6, 2, 0x1a, 0x1d
/* 80079E6C 00076DAC  55 03 D7 FE */	rlwinm r3, r8, 0x1a, 0x1f, 0x1f
/* 80079E70 00076DB0  54 C8 3C 68 */	rlwinm r8, r6, 7, 0x11, 0x14
/* 80079E74 00076DB4  54 87 5D 6A */	rlwinm r7, r4, 0xb, 0x15, 0x15
/* 80079E78 00076DB8  54 06 55 AC */	rlwinm r6, r0, 0xa, 0x16, 0x16
/* 80079E7C 00076DBC  50 69 36 72 */	rlwimi r9, r3, 6, 0x19, 0x19
/* 80079E80 00076DC0  40 82 00 08 */	bne .L_80079E88
/* 80079E84 00076DC4  39 40 00 00 */	li r10, 0
.L_80079E88:
/* 80079E88 00076DC8  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 80079E8C 00076DCC  55 40 38 30 */	slwi r0, r10, 7
/* 80079E90 00076DD0  7D 20 03 78 */	or r0, r9, r0
/* 80079E94 00076DD4  38 61 00 08 */	addi r3, r1, 8
/* 80079E98 00076DD8  80 85 00 08 */	lwz r4, 8(r5)
/* 80079E9C 00076DDC  7C C0 03 78 */	or r0, r6, r0
/* 80079EA0 00076DE0  7C E6 03 78 */	or r6, r7, r0
/* 80079EA4 00076DE4  38 04 00 01 */	addi r0, r4, 1
/* 80079EA8 00076DE8  7D 08 33 78 */	or r8, r8, r6
/* 80079EAC 00076DEC  90 05 00 08 */	stw r0, 8(r5)
/* 80079EB0 00076DF0  55 00 46 3E */	srwi r0, r8, 0x18
/* 80079EB4 00076DF4  98 04 00 00 */	stb r0, 0(r4)
/* 80079EB8 00076DF8  55 07 86 3E */	rlwinm r7, r8, 0x10, 0x18, 0x1f
/* 80079EBC 00076DFC  55 06 C6 3E */	rlwinm r6, r8, 0x18, 0x18, 0x1f
/* 80079EC0 00076E00  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 80079EC4 00076E04  80 85 00 08 */	lwz r4, 8(r5)
/* 80079EC8 00076E08  38 04 00 01 */	addi r0, r4, 1
/* 80079ECC 00076E0C  90 05 00 08 */	stw r0, 8(r5)
/* 80079ED0 00076E10  98 E4 00 00 */	stb r7, 0(r4)
/* 80079ED4 00076E14  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 80079ED8 00076E18  80 85 00 08 */	lwz r4, 8(r5)
/* 80079EDC 00076E1C  38 04 00 01 */	addi r0, r4, 1
/* 80079EE0 00076E20  90 05 00 08 */	stw r0, 8(r5)
/* 80079EE4 00076E24  98 C4 00 00 */	stb r6, 0(r4)
/* 80079EE8 00076E28  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 80079EEC 00076E2C  80 85 00 08 */	lwz r4, 8(r5)
/* 80079EF0 00076E30  38 04 00 01 */	addi r0, r4, 1
/* 80079EF4 00076E34  90 05 00 08 */	stw r0, 8(r5)
/* 80079EF8 00076E38  99 04 00 00 */	stb r8, 0(r4)
/* 80079EFC 00076E3C  80 02 87 78 */	lwz r0, lbl_80516AD8@sda21(r2)
/* 80079F00 00076E40  A1 5F 00 14 */	lhz r10, 0x14(r31)
/* 80079F04 00076E44  90 01 00 08 */	stw r0, 8(r1)
/* 80079F08 00076E48  55 40 BF BE */	rlwinm r0, r10, 0x17, 0x1e, 0x1f
/* 80079F0C 00076E4C  55 46 CE 36 */	rlwinm r6, r10, 0x19, 0x18, 0x1b
/* 80079F10 00076E50  7C E3 00 AE */	lbzx r7, r3, r0
/* 80079F14 00076E54  55 48 07 FE */	clrlwi r8, r10, 0x1f
/* 80079F18 00076E58  51 46 F7 3E */	rlwimi r6, r10, 0x1e, 0x1c, 0x1f
/* 80079F1C 00076E5C  55 49 CF BE */	rlwinm r9, r10, 0x19, 0x1e, 0x1f
/* 80079F20 00076E60  7C 07 00 D0 */	neg r0, r7
/* 80079F24 00076E64  51 48 07 BC */	rlwimi r8, r10, 0, 0x1e, 0x1e
/* 80079F28 00076E68  7C 04 3B 78 */	or r4, r0, r7
/* 80079F2C 00076E6C  2C 07 00 00 */	cmpwi r7, 0
/* 80079F30 00076E70  20 67 00 02 */	subfic r3, r7, 2
/* 80079F34 00076E74  38 07 FF FE */	addi r0, r7, -2
/* 80079F38 00076E78  7C 60 03 78 */	or r0, r3, r0
/* 80079F3C 00076E7C  50 C8 16 BA */	rlwimi r8, r6, 2, 0x1a, 0x1d
/* 80079F40 00076E80  54 C7 3C 68 */	rlwinm r7, r6, 7, 0x11, 0x14
/* 80079F44 00076E84  54 86 5D 6A */	rlwinm r6, r4, 0xb, 0x15, 0x15
/* 80079F48 00076E88  54 05 55 AC */	rlwinm r5, r0, 0xa, 0x16, 0x16
/* 80079F4C 00076E8C  51 48 06 72 */	rlwimi r8, r10, 0, 0x19, 0x19
/* 80079F50 00076E90  40 82 00 08 */	bne .L_80079F58
/* 80079F54 00076E94  39 20 00 00 */	li r9, 0
.L_80079F58:
/* 80079F58 00076E98  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 80079F5C 00076E9C  55 20 38 30 */	slwi r0, r9, 7
/* 80079F60 00076EA0  7D 00 03 78 */	or r0, r8, r0
/* 80079F64 00076EA4  80 64 00 08 */	lwz r3, 8(r4)
/* 80079F68 00076EA8  7C A0 03 78 */	or r0, r5, r0
/* 80079F6C 00076EAC  7C C5 03 78 */	or r5, r6, r0
/* 80079F70 00076EB0  38 03 00 01 */	addi r0, r3, 1
/* 80079F74 00076EB4  7C E7 2B 78 */	or r7, r7, r5
/* 80079F78 00076EB8  90 04 00 08 */	stw r0, 8(r4)
/* 80079F7C 00076EBC  54 E0 46 3E */	srwi r0, r7, 0x18
/* 80079F80 00076EC0  98 03 00 00 */	stb r0, 0(r3)
/* 80079F84 00076EC4  54 E6 86 3E */	rlwinm r6, r7, 0x10, 0x18, 0x1f
/* 80079F88 00076EC8  54 E5 C6 3E */	rlwinm r5, r7, 0x18, 0x18, 0x1f
/* 80079F8C 00076ECC  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 80079F90 00076ED0  80 64 00 08 */	lwz r3, 8(r4)
/* 80079F94 00076ED4  38 03 00 01 */	addi r0, r3, 1
/* 80079F98 00076ED8  90 04 00 08 */	stw r0, 8(r4)
/* 80079F9C 00076EDC  98 C3 00 00 */	stb r6, 0(r3)
/* 80079FA0 00076EE0  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 80079FA4 00076EE4  80 64 00 08 */	lwz r3, 8(r4)
/* 80079FA8 00076EE8  38 03 00 01 */	addi r0, r3, 1
/* 80079FAC 00076EEC  90 04 00 08 */	stw r0, 8(r4)
/* 80079FB0 00076EF0  98 A3 00 00 */	stb r5, 0(r3)
/* 80079FB4 00076EF4  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 80079FB8 00076EF8  80 64 00 08 */	lwz r3, 8(r4)
/* 80079FBC 00076EFC  38 03 00 01 */	addi r0, r3, 1
/* 80079FC0 00076F00  90 04 00 08 */	stw r0, 8(r4)
/* 80079FC4 00076F04  98 E3 00 00 */	stb r7, 0(r3)
/* 80079FC8 00076F08  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80079FCC 00076F0C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80079FD0 00076F10  7C 08 03 A6 */	mtlr r0
/* 80079FD4 00076F14  38 21 00 20 */	addi r1, r1, 0x20
/* 80079FD8 00076F18  4E 80 00 20 */	blr 
.endfn diffLight__21J3DColorBlockLightOffFv

.fn diff__20J3DColorBlockLightOnFUl, global
/* 80079FDC 00076F1C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80079FE0 00076F20  7C 08 02 A6 */	mflr r0
/* 80079FE4 00076F24  90 01 00 14 */	stw r0, 0x14(r1)
/* 80079FE8 00076F28  54 80 07 FF */	clrlwi. r0, r4, 0x1f
/* 80079FEC 00076F2C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80079FF0 00076F30  7C 9F 23 78 */	mr r31, r4
/* 80079FF4 00076F34  93 C1 00 08 */	stw r30, 8(r1)
/* 80079FF8 00076F38  7C 7E 1B 78 */	mr r30, r3
/* 80079FFC 00076F3C  41 82 00 14 */	beq .L_8007A010
/* 8007A000 00076F40  81 83 00 00 */	lwz r12, 0(r3)
/* 8007A004 00076F44  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8007A008 00076F48  7D 89 03 A6 */	mtctr r12
/* 8007A00C 00076F4C  4E 80 04 21 */	bctrl 
.L_8007A010:
/* 8007A010 00076F50  57 E0 07 BD */	rlwinm. r0, r31, 0, 0x1e, 0x1e
/* 8007A014 00076F54  40 82 00 0C */	bne .L_8007A020
/* 8007A018 00076F58  57 E0 E7 3F */	rlwinm. r0, r31, 0x1c, 0x1c, 0x1f
/* 8007A01C 00076F5C  41 82 00 18 */	beq .L_8007A034
.L_8007A020:
/* 8007A020 00076F60  7F C3 F3 78 */	mr r3, r30
/* 8007A024 00076F64  81 9E 00 00 */	lwz r12, 0(r30)
/* 8007A028 00076F68  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8007A02C 00076F6C  7D 89 03 A6 */	mtctr r12
/* 8007A030 00076F70  4E 80 04 21 */	bctrl 
.L_8007A034:
/* 8007A034 00076F74  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8007A038 00076F78  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8007A03C 00076F7C  83 C1 00 08 */	lwz r30, 8(r1)
/* 8007A040 00076F80  7C 08 03 A6 */	mtlr r0
/* 8007A044 00076F84  38 21 00 10 */	addi r1, r1, 0x10
/* 8007A048 00076F88  4E 80 00 20 */	blr 
.endfn diff__20J3DColorBlockLightOnFUl

.fn diffMatColor__20J3DColorBlockLightOnFv, global
/* 8007A04C 00076F8C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8007A050 00076F90  7C 08 02 A6 */	mflr r0
/* 8007A054 00076F94  90 01 00 14 */	stw r0, 0x14(r1)
/* 8007A058 00076F98  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8007A05C 00076F9C  7C 7F 1B 78 */	mr r31, r3
/* 8007A060 00076FA0  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 8007A064 00076FA4  80 6D 80 B0 */	lwz r3, SizeOfLoadMatColors@sda21(r13)
/* 8007A068 00076FA8  80 85 00 08 */	lwz r4, 8(r5)
/* 8007A06C 00076FAC  80 05 00 0C */	lwz r0, 0xc(r5)
/* 8007A070 00076FB0  7C 64 1A 14 */	add r3, r4, r3
/* 8007A074 00076FB4  7C 03 00 40 */	cmplw r3, r0
/* 8007A078 00076FB8  40 81 00 08 */	ble .L_8007A080
/* 8007A07C 00076FBC  48 06 7B C5 */	bl GDOverflowed
.L_8007A080:
/* 8007A080 00076FC0  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 8007A084 00076FC4  39 00 00 10 */	li r8, 0x10
/* 8007A088 00076FC8  38 E0 00 00 */	li r7, 0
/* 8007A08C 00076FCC  38 C0 00 01 */	li r6, 1
/* 8007A090 00076FD0  80 64 00 08 */	lwz r3, 8(r4)
/* 8007A094 00076FD4  38 A0 00 0C */	li r5, 0xc
/* 8007A098 00076FD8  38 03 00 01 */	addi r0, r3, 1
/* 8007A09C 00076FDC  90 04 00 08 */	stw r0, 8(r4)
/* 8007A0A0 00076FE0  99 03 00 00 */	stb r8, 0(r3)
/* 8007A0A4 00076FE4  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 8007A0A8 00076FE8  80 64 00 08 */	lwz r3, 8(r4)
/* 8007A0AC 00076FEC  38 03 00 01 */	addi r0, r3, 1
/* 8007A0B0 00076FF0  90 04 00 08 */	stw r0, 8(r4)
/* 8007A0B4 00076FF4  98 E3 00 00 */	stb r7, 0(r3)
/* 8007A0B8 00076FF8  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 8007A0BC 00076FFC  80 64 00 08 */	lwz r3, 8(r4)
/* 8007A0C0 00077000  38 03 00 01 */	addi r0, r3, 1
/* 8007A0C4 00077004  90 04 00 08 */	stw r0, 8(r4)
/* 8007A0C8 00077008  98 C3 00 00 */	stb r6, 0(r3)
/* 8007A0CC 0007700C  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 8007A0D0 00077010  80 64 00 08 */	lwz r3, 8(r4)
/* 8007A0D4 00077014  38 03 00 01 */	addi r0, r3, 1
/* 8007A0D8 00077018  90 04 00 08 */	stw r0, 8(r4)
/* 8007A0DC 0007701C  99 03 00 00 */	stb r8, 0(r3)
/* 8007A0E0 00077020  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 8007A0E4 00077024  80 64 00 08 */	lwz r3, 8(r4)
/* 8007A0E8 00077028  38 03 00 01 */	addi r0, r3, 1
/* 8007A0EC 0007702C  90 04 00 08 */	stw r0, 8(r4)
/* 8007A0F0 00077030  98 A3 00 00 */	stb r5, 0(r3)
/* 8007A0F4 00077034  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 8007A0F8 00077038  81 1F 00 04 */	lwz r8, 4(r31)
/* 8007A0FC 0007703C  80 64 00 08 */	lwz r3, 8(r4)
/* 8007A100 00077040  55 07 46 3E */	srwi r7, r8, 0x18
/* 8007A104 00077044  55 06 86 3E */	rlwinm r6, r8, 0x10, 0x18, 0x1f
/* 8007A108 00077048  38 03 00 01 */	addi r0, r3, 1
/* 8007A10C 0007704C  55 05 C6 3E */	rlwinm r5, r8, 0x18, 0x18, 0x1f
/* 8007A110 00077050  90 04 00 08 */	stw r0, 8(r4)
/* 8007A114 00077054  98 E3 00 00 */	stb r7, 0(r3)
/* 8007A118 00077058  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 8007A11C 0007705C  80 64 00 08 */	lwz r3, 8(r4)
/* 8007A120 00077060  38 03 00 01 */	addi r0, r3, 1
/* 8007A124 00077064  90 04 00 08 */	stw r0, 8(r4)
/* 8007A128 00077068  98 C3 00 00 */	stb r6, 0(r3)
/* 8007A12C 0007706C  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 8007A130 00077070  80 64 00 08 */	lwz r3, 8(r4)
/* 8007A134 00077074  38 03 00 01 */	addi r0, r3, 1
/* 8007A138 00077078  90 04 00 08 */	stw r0, 8(r4)
/* 8007A13C 0007707C  98 A3 00 00 */	stb r5, 0(r3)
/* 8007A140 00077080  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 8007A144 00077084  80 64 00 08 */	lwz r3, 8(r4)
/* 8007A148 00077088  38 03 00 01 */	addi r0, r3, 1
/* 8007A14C 0007708C  90 04 00 08 */	stw r0, 8(r4)
/* 8007A150 00077090  99 03 00 00 */	stb r8, 0(r3)
/* 8007A154 00077094  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 8007A158 00077098  81 1F 00 08 */	lwz r8, 8(r31)
/* 8007A15C 0007709C  80 64 00 08 */	lwz r3, 8(r4)
/* 8007A160 000770A0  55 07 46 3E */	srwi r7, r8, 0x18
/* 8007A164 000770A4  55 06 86 3E */	rlwinm r6, r8, 0x10, 0x18, 0x1f
/* 8007A168 000770A8  38 03 00 01 */	addi r0, r3, 1
/* 8007A16C 000770AC  55 05 C6 3E */	rlwinm r5, r8, 0x18, 0x18, 0x1f
/* 8007A170 000770B0  90 04 00 08 */	stw r0, 8(r4)
/* 8007A174 000770B4  98 E3 00 00 */	stb r7, 0(r3)
/* 8007A178 000770B8  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 8007A17C 000770BC  80 64 00 08 */	lwz r3, 8(r4)
/* 8007A180 000770C0  38 03 00 01 */	addi r0, r3, 1
/* 8007A184 000770C4  90 04 00 08 */	stw r0, 8(r4)
/* 8007A188 000770C8  98 C3 00 00 */	stb r6, 0(r3)
/* 8007A18C 000770CC  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 8007A190 000770D0  80 64 00 08 */	lwz r3, 8(r4)
/* 8007A194 000770D4  38 03 00 01 */	addi r0, r3, 1
/* 8007A198 000770D8  90 04 00 08 */	stw r0, 8(r4)
/* 8007A19C 000770DC  98 A3 00 00 */	stb r5, 0(r3)
/* 8007A1A0 000770E0  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 8007A1A4 000770E4  80 64 00 08 */	lwz r3, 8(r4)
/* 8007A1A8 000770E8  38 03 00 01 */	addi r0, r3, 1
/* 8007A1AC 000770EC  90 04 00 08 */	stw r0, 8(r4)
/* 8007A1B0 000770F0  99 03 00 00 */	stb r8, 0(r3)
/* 8007A1B4 000770F4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8007A1B8 000770F8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8007A1BC 000770FC  7C 08 03 A6 */	mtlr r0
/* 8007A1C0 00077100  38 21 00 10 */	addi r1, r1, 0x10
/* 8007A1C4 00077104  4E 80 00 20 */	blr 
.endfn diffMatColor__20J3DColorBlockLightOnFv

.fn diffLight__20J3DColorBlockLightOnFv, global
/* 8007A1C8 00077108  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8007A1CC 0007710C  7C 08 02 A6 */	mflr r0
/* 8007A1D0 00077110  90 01 00 24 */	stw r0, 0x24(r1)
/* 8007A1D4 00077114  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8007A1D8 00077118  7C 7F 1B 78 */	mr r31, r3
/* 8007A1DC 0007711C  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8007A1E0 00077120  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 8007A1E4 00077124  80 6D 80 B8 */	lwz r3, SizeOfLoadColorChans@sda21(r13)
/* 8007A1E8 00077128  80 85 00 08 */	lwz r4, 8(r5)
/* 8007A1EC 0007712C  80 05 00 0C */	lwz r0, 0xc(r5)
/* 8007A1F0 00077130  7C 64 1A 14 */	add r3, r4, r3
/* 8007A1F4 00077134  7C 03 00 40 */	cmplw r3, r0
/* 8007A1F8 00077138  40 81 00 08 */	ble .L_8007A200
/* 8007A1FC 0007713C  48 06 7A 45 */	bl GDOverflowed
.L_8007A200:
/* 8007A200 00077140  80 CD 8E A8 */	lwz r6, __GDCurrentDL@sda21(r13)
/* 8007A204 00077144  39 20 00 10 */	li r9, 0x10
/* 8007A208 00077148  38 00 00 00 */	li r0, 0
/* 8007A20C 0007714C  39 00 00 03 */	li r8, 3
/* 8007A210 00077150  80 A6 00 08 */	lwz r5, 8(r6)
/* 8007A214 00077154  38 E0 00 0E */	li r7, 0xe
/* 8007A218 00077158  38 61 00 14 */	addi r3, r1, 0x14
/* 8007A21C 0007715C  38 85 00 01 */	addi r4, r5, 1
/* 8007A220 00077160  90 86 00 08 */	stw r4, 8(r6)
/* 8007A224 00077164  99 25 00 00 */	stb r9, 0(r5)
/* 8007A228 00077168  80 CD 8E A8 */	lwz r6, __GDCurrentDL@sda21(r13)
/* 8007A22C 0007716C  80 A6 00 08 */	lwz r5, 8(r6)
/* 8007A230 00077170  38 85 00 01 */	addi r4, r5, 1
/* 8007A234 00077174  90 86 00 08 */	stw r4, 8(r6)
/* 8007A238 00077178  98 05 00 00 */	stb r0, 0(r5)
/* 8007A23C 0007717C  80 CD 8E A8 */	lwz r6, __GDCurrentDL@sda21(r13)
/* 8007A240 00077180  80 A6 00 08 */	lwz r5, 8(r6)
/* 8007A244 00077184  38 85 00 01 */	addi r4, r5, 1
/* 8007A248 00077188  90 86 00 08 */	stw r4, 8(r6)
/* 8007A24C 0007718C  99 05 00 00 */	stb r8, 0(r5)
/* 8007A250 00077190  80 CD 8E A8 */	lwz r6, __GDCurrentDL@sda21(r13)
/* 8007A254 00077194  80 A6 00 08 */	lwz r5, 8(r6)
/* 8007A258 00077198  38 85 00 01 */	addi r4, r5, 1
/* 8007A25C 0007719C  90 86 00 08 */	stw r4, 8(r6)
/* 8007A260 000771A0  99 25 00 00 */	stb r9, 0(r5)
/* 8007A264 000771A4  80 CD 8E A8 */	lwz r6, __GDCurrentDL@sda21(r13)
/* 8007A268 000771A8  80 A6 00 08 */	lwz r5, 8(r6)
/* 8007A26C 000771AC  38 85 00 01 */	addi r4, r5, 1
/* 8007A270 000771B0  90 86 00 08 */	stw r4, 8(r6)
/* 8007A274 000771B4  98 E5 00 00 */	stb r7, 0(r5)
/* 8007A278 000771B8  80 82 87 78 */	lwz r4, lbl_80516AD8@sda21(r2)
/* 8007A27C 000771BC  A1 7F 00 16 */	lhz r11, 0x16(r31)
/* 8007A280 000771C0  90 81 00 14 */	stw r4, 0x14(r1)
/* 8007A284 000771C4  55 64 BF BE */	rlwinm r4, r11, 0x17, 0x1e, 0x1f
/* 8007A288 000771C8  55 67 CE 36 */	rlwinm r7, r11, 0x19, 0x18, 0x1b
/* 8007A28C 000771CC  7D 03 20 AE */	lbzx r8, r3, r4
/* 8007A290 000771D0  55 69 07 FE */	clrlwi r9, r11, 0x1f
/* 8007A294 000771D4  51 67 F7 3E */	rlwimi r7, r11, 0x1e, 0x1c, 0x1f
/* 8007A298 000771D8  55 6A CF BE */	rlwinm r10, r11, 0x19, 0x1e, 0x1f
/* 8007A29C 000771DC  7C 68 00 D0 */	neg r3, r8
/* 8007A2A0 000771E0  51 69 07 BC */	rlwimi r9, r11, 0, 0x1e, 0x1e
/* 8007A2A4 000771E4  7C 65 43 78 */	or r5, r3, r8
/* 8007A2A8 000771E8  2C 08 00 00 */	cmpwi r8, 0
/* 8007A2AC 000771EC  20 88 00 02 */	subfic r4, r8, 2
/* 8007A2B0 000771F0  38 68 FF FE */	addi r3, r8, -2
/* 8007A2B4 000771F4  7C 83 1B 78 */	or r3, r4, r3
/* 8007A2B8 000771F8  50 E9 16 BA */	rlwimi r9, r7, 2, 0x1a, 0x1d
/* 8007A2BC 000771FC  54 E8 3C 68 */	rlwinm r8, r7, 7, 0x11, 0x14
/* 8007A2C0 00077200  54 A7 5D 6A */	rlwinm r7, r5, 0xb, 0x15, 0x15
/* 8007A2C4 00077204  54 66 55 AC */	rlwinm r6, r3, 0xa, 0x16, 0x16
/* 8007A2C8 00077208  51 69 06 72 */	rlwimi r9, r11, 0, 0x19, 0x19
/* 8007A2CC 0007720C  40 82 00 08 */	bne .L_8007A2D4
/* 8007A2D0 00077210  7C 0A 03 78 */	mr r10, r0
.L_8007A2D4:
/* 8007A2D4 00077214  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 8007A2D8 00077218  55 40 38 30 */	slwi r0, r10, 7
/* 8007A2DC 0007721C  7D 20 03 78 */	or r0, r9, r0
/* 8007A2E0 00077220  38 61 00 10 */	addi r3, r1, 0x10
/* 8007A2E4 00077224  80 85 00 08 */	lwz r4, 8(r5)
/* 8007A2E8 00077228  7C C0 03 78 */	or r0, r6, r0
/* 8007A2EC 0007722C  7C E6 03 78 */	or r6, r7, r0
/* 8007A2F0 00077230  38 04 00 01 */	addi r0, r4, 1
/* 8007A2F4 00077234  7D 08 33 78 */	or r8, r8, r6
/* 8007A2F8 00077238  90 05 00 08 */	stw r0, 8(r5)
/* 8007A2FC 0007723C  55 00 46 3E */	srwi r0, r8, 0x18
/* 8007A300 00077240  98 04 00 00 */	stb r0, 0(r4)
/* 8007A304 00077244  55 07 86 3E */	rlwinm r7, r8, 0x10, 0x18, 0x1f
/* 8007A308 00077248  55 06 C6 3E */	rlwinm r6, r8, 0x18, 0x18, 0x1f
/* 8007A30C 0007724C  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 8007A310 00077250  80 85 00 08 */	lwz r4, 8(r5)
/* 8007A314 00077254  38 04 00 01 */	addi r0, r4, 1
/* 8007A318 00077258  90 05 00 08 */	stw r0, 8(r5)
/* 8007A31C 0007725C  98 E4 00 00 */	stb r7, 0(r4)
/* 8007A320 00077260  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 8007A324 00077264  80 85 00 08 */	lwz r4, 8(r5)
/* 8007A328 00077268  38 04 00 01 */	addi r0, r4, 1
/* 8007A32C 0007726C  90 05 00 08 */	stw r0, 8(r5)
/* 8007A330 00077270  98 C4 00 00 */	stb r6, 0(r4)
/* 8007A334 00077274  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 8007A338 00077278  80 85 00 08 */	lwz r4, 8(r5)
/* 8007A33C 0007727C  38 04 00 01 */	addi r0, r4, 1
/* 8007A340 00077280  90 05 00 08 */	stw r0, 8(r5)
/* 8007A344 00077284  99 04 00 00 */	stb r8, 0(r4)
/* 8007A348 00077288  80 02 87 78 */	lwz r0, lbl_80516AD8@sda21(r2)
/* 8007A34C 0007728C  A1 1F 00 1A */	lhz r8, 0x1a(r31)
/* 8007A350 00077290  90 01 00 10 */	stw r0, 0x10(r1)
/* 8007A354 00077294  55 00 BF BE */	rlwinm r0, r8, 0x17, 0x1e, 0x1f
/* 8007A358 00077298  55 06 CE 36 */	rlwinm r6, r8, 0x19, 0x18, 0x1b
/* 8007A35C 0007729C  7C E3 00 AE */	lbzx r7, r3, r0
/* 8007A360 000772A0  55 09 07 FE */	clrlwi r9, r8, 0x1f
/* 8007A364 000772A4  51 06 F7 3E */	rlwimi r6, r8, 0x1e, 0x1c, 0x1f
/* 8007A368 000772A8  55 0A CF BE */	rlwinm r10, r8, 0x19, 0x1e, 0x1f
/* 8007A36C 000772AC  7C 07 00 D0 */	neg r0, r7
/* 8007A370 000772B0  51 09 07 BC */	rlwimi r9, r8, 0, 0x1e, 0x1e
/* 8007A374 000772B4  7C 04 3B 78 */	or r4, r0, r7
/* 8007A378 000772B8  2C 07 00 00 */	cmpwi r7, 0
/* 8007A37C 000772BC  20 67 00 02 */	subfic r3, r7, 2
/* 8007A380 000772C0  38 07 FF FE */	addi r0, r7, -2
/* 8007A384 000772C4  7C 60 03 78 */	or r0, r3, r0
/* 8007A388 000772C8  50 C9 16 BA */	rlwimi r9, r6, 2, 0x1a, 0x1d
/* 8007A38C 000772CC  55 03 D7 FE */	rlwinm r3, r8, 0x1a, 0x1f, 0x1f
/* 8007A390 000772D0  54 C8 3C 68 */	rlwinm r8, r6, 7, 0x11, 0x14
/* 8007A394 000772D4  54 87 5D 6A */	rlwinm r7, r4, 0xb, 0x15, 0x15
/* 8007A398 000772D8  54 06 55 AC */	rlwinm r6, r0, 0xa, 0x16, 0x16
/* 8007A39C 000772DC  50 69 36 72 */	rlwimi r9, r3, 6, 0x19, 0x19
/* 8007A3A0 000772E0  40 82 00 08 */	bne .L_8007A3A8
/* 8007A3A4 000772E4  39 40 00 00 */	li r10, 0
.L_8007A3A8:
/* 8007A3A8 000772E8  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 8007A3AC 000772EC  55 40 38 30 */	slwi r0, r10, 7
/* 8007A3B0 000772F0  7D 20 03 78 */	or r0, r9, r0
/* 8007A3B4 000772F4  38 61 00 0C */	addi r3, r1, 0xc
/* 8007A3B8 000772F8  80 85 00 08 */	lwz r4, 8(r5)
/* 8007A3BC 000772FC  7C C0 03 78 */	or r0, r6, r0
/* 8007A3C0 00077300  7C E6 03 78 */	or r6, r7, r0
/* 8007A3C4 00077304  38 04 00 01 */	addi r0, r4, 1
/* 8007A3C8 00077308  7D 08 33 78 */	or r8, r8, r6
/* 8007A3CC 0007730C  90 05 00 08 */	stw r0, 8(r5)
/* 8007A3D0 00077310  55 00 46 3E */	srwi r0, r8, 0x18
/* 8007A3D4 00077314  98 04 00 00 */	stb r0, 0(r4)
/* 8007A3D8 00077318  55 07 86 3E */	rlwinm r7, r8, 0x10, 0x18, 0x1f
/* 8007A3DC 0007731C  55 06 C6 3E */	rlwinm r6, r8, 0x18, 0x18, 0x1f
/* 8007A3E0 00077320  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 8007A3E4 00077324  80 85 00 08 */	lwz r4, 8(r5)
/* 8007A3E8 00077328  38 04 00 01 */	addi r0, r4, 1
/* 8007A3EC 0007732C  90 05 00 08 */	stw r0, 8(r5)
/* 8007A3F0 00077330  98 E4 00 00 */	stb r7, 0(r4)
/* 8007A3F4 00077334  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 8007A3F8 00077338  80 85 00 08 */	lwz r4, 8(r5)
/* 8007A3FC 0007733C  38 04 00 01 */	addi r0, r4, 1
/* 8007A400 00077340  90 05 00 08 */	stw r0, 8(r5)
/* 8007A404 00077344  98 C4 00 00 */	stb r6, 0(r4)
/* 8007A408 00077348  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 8007A40C 0007734C  80 85 00 08 */	lwz r4, 8(r5)
/* 8007A410 00077350  38 04 00 01 */	addi r0, r4, 1
/* 8007A414 00077354  90 05 00 08 */	stw r0, 8(r5)
/* 8007A418 00077358  99 04 00 00 */	stb r8, 0(r4)
/* 8007A41C 0007735C  80 02 87 78 */	lwz r0, lbl_80516AD8@sda21(r2)
/* 8007A420 00077360  A1 1F 00 18 */	lhz r8, 0x18(r31)
/* 8007A424 00077364  90 01 00 0C */	stw r0, 0xc(r1)
/* 8007A428 00077368  55 00 BF BE */	rlwinm r0, r8, 0x17, 0x1e, 0x1f
/* 8007A42C 0007736C  55 06 CE 36 */	rlwinm r6, r8, 0x19, 0x18, 0x1b
/* 8007A430 00077370  7C E3 00 AE */	lbzx r7, r3, r0
/* 8007A434 00077374  55 09 07 FE */	clrlwi r9, r8, 0x1f
/* 8007A438 00077378  51 06 F7 3E */	rlwimi r6, r8, 0x1e, 0x1c, 0x1f
/* 8007A43C 0007737C  55 0A CF BE */	rlwinm r10, r8, 0x19, 0x1e, 0x1f
/* 8007A440 00077380  7C 07 00 D0 */	neg r0, r7
/* 8007A444 00077384  51 09 07 BC */	rlwimi r9, r8, 0, 0x1e, 0x1e
/* 8007A448 00077388  7C 04 3B 78 */	or r4, r0, r7
/* 8007A44C 0007738C  2C 07 00 00 */	cmpwi r7, 0
/* 8007A450 00077390  20 67 00 02 */	subfic r3, r7, 2
/* 8007A454 00077394  38 07 FF FE */	addi r0, r7, -2
/* 8007A458 00077398  7C 60 03 78 */	or r0, r3, r0
/* 8007A45C 0007739C  50 C9 16 BA */	rlwimi r9, r6, 2, 0x1a, 0x1d
/* 8007A460 000773A0  55 03 D7 FE */	rlwinm r3, r8, 0x1a, 0x1f, 0x1f
/* 8007A464 000773A4  54 C8 3C 68 */	rlwinm r8, r6, 7, 0x11, 0x14
/* 8007A468 000773A8  54 87 5D 6A */	rlwinm r7, r4, 0xb, 0x15, 0x15
/* 8007A46C 000773AC  54 06 55 AC */	rlwinm r6, r0, 0xa, 0x16, 0x16
/* 8007A470 000773B0  50 69 36 72 */	rlwimi r9, r3, 6, 0x19, 0x19
/* 8007A474 000773B4  40 82 00 08 */	bne .L_8007A47C
/* 8007A478 000773B8  39 40 00 00 */	li r10, 0
.L_8007A47C:
/* 8007A47C 000773BC  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 8007A480 000773C0  55 40 38 30 */	slwi r0, r10, 7
/* 8007A484 000773C4  7D 20 03 78 */	or r0, r9, r0
/* 8007A488 000773C8  38 61 00 08 */	addi r3, r1, 8
/* 8007A48C 000773CC  80 85 00 08 */	lwz r4, 8(r5)
/* 8007A490 000773D0  7C C0 03 78 */	or r0, r6, r0
/* 8007A494 000773D4  7C E6 03 78 */	or r6, r7, r0
/* 8007A498 000773D8  38 04 00 01 */	addi r0, r4, 1
/* 8007A49C 000773DC  7D 08 33 78 */	or r8, r8, r6
/* 8007A4A0 000773E0  90 05 00 08 */	stw r0, 8(r5)
/* 8007A4A4 000773E4  55 00 46 3E */	srwi r0, r8, 0x18
/* 8007A4A8 000773E8  98 04 00 00 */	stb r0, 0(r4)
/* 8007A4AC 000773EC  55 07 86 3E */	rlwinm r7, r8, 0x10, 0x18, 0x1f
/* 8007A4B0 000773F0  55 06 C6 3E */	rlwinm r6, r8, 0x18, 0x18, 0x1f
/* 8007A4B4 000773F4  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 8007A4B8 000773F8  80 85 00 08 */	lwz r4, 8(r5)
/* 8007A4BC 000773FC  38 04 00 01 */	addi r0, r4, 1
/* 8007A4C0 00077400  90 05 00 08 */	stw r0, 8(r5)
/* 8007A4C4 00077404  98 E4 00 00 */	stb r7, 0(r4)
/* 8007A4C8 00077408  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 8007A4CC 0007740C  80 85 00 08 */	lwz r4, 8(r5)
/* 8007A4D0 00077410  38 04 00 01 */	addi r0, r4, 1
/* 8007A4D4 00077414  90 05 00 08 */	stw r0, 8(r5)
/* 8007A4D8 00077418  98 C4 00 00 */	stb r6, 0(r4)
/* 8007A4DC 0007741C  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 8007A4E0 00077420  80 85 00 08 */	lwz r4, 8(r5)
/* 8007A4E4 00077424  38 04 00 01 */	addi r0, r4, 1
/* 8007A4E8 00077428  90 05 00 08 */	stw r0, 8(r5)
/* 8007A4EC 0007742C  99 04 00 00 */	stb r8, 0(r4)
/* 8007A4F0 00077430  80 02 87 78 */	lwz r0, lbl_80516AD8@sda21(r2)
/* 8007A4F4 00077434  A1 5F 00 1C */	lhz r10, 0x1c(r31)
/* 8007A4F8 00077438  90 01 00 08 */	stw r0, 8(r1)
/* 8007A4FC 0007743C  55 40 BF BE */	rlwinm r0, r10, 0x17, 0x1e, 0x1f
/* 8007A500 00077440  55 46 CE 36 */	rlwinm r6, r10, 0x19, 0x18, 0x1b
/* 8007A504 00077444  7C E3 00 AE */	lbzx r7, r3, r0
/* 8007A508 00077448  55 48 07 FE */	clrlwi r8, r10, 0x1f
/* 8007A50C 0007744C  51 46 F7 3E */	rlwimi r6, r10, 0x1e, 0x1c, 0x1f
/* 8007A510 00077450  55 49 CF BE */	rlwinm r9, r10, 0x19, 0x1e, 0x1f
/* 8007A514 00077454  7C 07 00 D0 */	neg r0, r7
/* 8007A518 00077458  51 48 07 BC */	rlwimi r8, r10, 0, 0x1e, 0x1e
/* 8007A51C 0007745C  7C 04 3B 78 */	or r4, r0, r7
/* 8007A520 00077460  2C 07 00 00 */	cmpwi r7, 0
/* 8007A524 00077464  20 67 00 02 */	subfic r3, r7, 2
/* 8007A528 00077468  38 07 FF FE */	addi r0, r7, -2
/* 8007A52C 0007746C  7C 60 03 78 */	or r0, r3, r0
/* 8007A530 00077470  50 C8 16 BA */	rlwimi r8, r6, 2, 0x1a, 0x1d
/* 8007A534 00077474  54 C7 3C 68 */	rlwinm r7, r6, 7, 0x11, 0x14
/* 8007A538 00077478  54 86 5D 6A */	rlwinm r6, r4, 0xb, 0x15, 0x15
/* 8007A53C 0007747C  54 05 55 AC */	rlwinm r5, r0, 0xa, 0x16, 0x16
/* 8007A540 00077480  51 48 06 72 */	rlwimi r8, r10, 0, 0x19, 0x19
/* 8007A544 00077484  40 82 00 08 */	bne .L_8007A54C
/* 8007A548 00077488  39 20 00 00 */	li r9, 0
.L_8007A54C:
/* 8007A54C 0007748C  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 8007A550 00077490  55 20 38 30 */	slwi r0, r9, 7
/* 8007A554 00077494  7D 00 03 78 */	or r0, r8, r0
/* 8007A558 00077498  3B C0 00 00 */	li r30, 0
/* 8007A55C 0007749C  80 64 00 08 */	lwz r3, 8(r4)
/* 8007A560 000774A0  7C A0 03 78 */	or r0, r5, r0
/* 8007A564 000774A4  7C C5 03 78 */	or r5, r6, r0
/* 8007A568 000774A8  38 03 00 01 */	addi r0, r3, 1
/* 8007A56C 000774AC  7C E7 2B 78 */	or r7, r7, r5
/* 8007A570 000774B0  90 04 00 08 */	stw r0, 8(r4)
/* 8007A574 000774B4  54 E0 46 3E */	srwi r0, r7, 0x18
/* 8007A578 000774B8  98 03 00 00 */	stb r0, 0(r3)
/* 8007A57C 000774BC  54 E6 86 3E */	rlwinm r6, r7, 0x10, 0x18, 0x1f
/* 8007A580 000774C0  54 E5 C6 3E */	rlwinm r5, r7, 0x18, 0x18, 0x1f
/* 8007A584 000774C4  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 8007A588 000774C8  80 64 00 08 */	lwz r3, 8(r4)
/* 8007A58C 000774CC  38 03 00 01 */	addi r0, r3, 1
/* 8007A590 000774D0  90 04 00 08 */	stw r0, 8(r4)
/* 8007A594 000774D4  98 C3 00 00 */	stb r6, 0(r3)
/* 8007A598 000774D8  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 8007A59C 000774DC  80 64 00 08 */	lwz r3, 8(r4)
/* 8007A5A0 000774E0  38 03 00 01 */	addi r0, r3, 1
/* 8007A5A4 000774E4  90 04 00 08 */	stw r0, 8(r4)
/* 8007A5A8 000774E8  98 A3 00 00 */	stb r5, 0(r3)
/* 8007A5AC 000774EC  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 8007A5B0 000774F0  80 64 00 08 */	lwz r3, 8(r4)
/* 8007A5B4 000774F4  38 03 00 01 */	addi r0, r3, 1
/* 8007A5B8 000774F8  90 04 00 08 */	stw r0, 8(r4)
/* 8007A5BC 000774FC  98 E3 00 00 */	stb r7, 0(r3)
.L_8007A5C0:
/* 8007A5C0 00077500  80 7F 00 20 */	lwz r3, 0x20(r31)
/* 8007A5C4 00077504  28 03 00 00 */	cmplwi r3, 0
/* 8007A5C8 00077508  41 82 00 0C */	beq .L_8007A5D4
/* 8007A5CC 0007750C  7F C4 F3 78 */	mr r4, r30
/* 8007A5D0 00077510  4B FE 95 55 */	bl load__11J3DLightObjCFUl
.L_8007A5D4:
/* 8007A5D4 00077514  3B DE 00 01 */	addi r30, r30, 1
/* 8007A5D8 00077518  3B FF 00 04 */	addi r31, r31, 4
/* 8007A5DC 0007751C  28 1E 00 08 */	cmplwi r30, 8
/* 8007A5E0 00077520  41 80 FF E0 */	blt .L_8007A5C0
/* 8007A5E4 00077524  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8007A5E8 00077528  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8007A5EC 0007752C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8007A5F0 00077530  7C 08 03 A6 */	mtlr r0
/* 8007A5F4 00077534  38 21 00 20 */	addi r1, r1, 0x20
/* 8007A5F8 00077538  4E 80 00 20 */	blr 
.endfn diffLight__20J3DColorBlockLightOnFv

.fn load__15J3DTexGenBlock4Fv, global
/* 8007A5FC 0007753C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8007A600 00077540  7C 08 02 A6 */	mflr r0
/* 8007A604 00077544  90 01 00 24 */	stw r0, 0x24(r1)
/* 8007A608 00077548  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8007A60C 0007754C  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8007A610 00077550  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8007A614 00077554  3B A0 00 00 */	li r29, 0
/* 8007A618 00077558  93 81 00 10 */	stw r28, 0x10(r1)
/* 8007A61C 0007755C  7C 7C 1B 78 */	mr r28, r3
/* 8007A620 00077560  7F 9F E3 78 */	mr r31, r28
/* 8007A624 00077564  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 8007A628 00077568  7F 9E E3 78 */	mr r30, r28
/* 8007A62C 0007756C  80 64 00 00 */	lwz r3, 0(r4)
/* 8007A630 00077570  80 04 00 08 */	lwz r0, 8(r4)
/* 8007A634 00077574  7C 03 00 50 */	subf r0, r3, r0
/* 8007A638 00077578  90 1C 00 58 */	stw r0, 0x58(r28)
.L_8007A63C:
/* 8007A63C 0007757C  80 7F 00 38 */	lwz r3, 0x38(r31)
/* 8007A640 00077580  28 03 00 00 */	cmplwi r3, 0
/* 8007A644 00077584  41 82 00 18 */	beq .L_8007A65C
/* 8007A648 00077588  88 1E 00 0A */	lbz r0, 0xa(r30)
/* 8007A64C 0007758C  28 00 00 3C */	cmplwi r0, 0x3c
/* 8007A650 00077590  41 82 00 0C */	beq .L_8007A65C
/* 8007A654 00077594  7F A4 EB 78 */	mr r4, r29
/* 8007A658 00077598  4B FE 9A B1 */	bl load__9J3DTexMtxCFUl
.L_8007A65C:
/* 8007A65C 0007759C  3B BD 00 01 */	addi r29, r29, 1
/* 8007A660 000775A0  3B DE 00 06 */	addi r30, r30, 6
/* 8007A664 000775A4  28 1D 00 04 */	cmplwi r29, 4
/* 8007A668 000775A8  3B FF 00 04 */	addi r31, r31, 4
/* 8007A66C 000775AC  41 80 FF D0 */	blt .L_8007A63C
/* 8007A670 000775B0  80 7C 00 04 */	lwz r3, 4(r28)
/* 8007A674 000775B4  28 03 00 00 */	cmplwi r3, 0
/* 8007A678 000775B8  41 82 00 0C */	beq .L_8007A684
/* 8007A67C 000775BC  38 9C 00 08 */	addi r4, r28, 8
/* 8007A680 000775C0  4B FE 95 59 */	bl loadTexCoordGens__FUlP11J3DTexCoord
.L_8007A684:
/* 8007A684 000775C4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8007A688 000775C8  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8007A68C 000775CC  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8007A690 000775D0  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8007A694 000775D4  83 81 00 10 */	lwz r28, 0x10(r1)
/* 8007A698 000775D8  7C 08 03 A6 */	mtlr r0
/* 8007A69C 000775DC  38 21 00 20 */	addi r1, r1, 0x20
/* 8007A6A0 000775E0  4E 80 00 20 */	blr 
.endfn load__15J3DTexGenBlock4Fv

.fn load__19J3DTexGenBlockBasicFv, global
/* 8007A6A4 000775E4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8007A6A8 000775E8  7C 08 02 A6 */	mflr r0
/* 8007A6AC 000775EC  90 01 00 24 */	stw r0, 0x24(r1)
/* 8007A6B0 000775F0  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8007A6B4 000775F4  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8007A6B8 000775F8  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8007A6BC 000775FC  3B A0 00 00 */	li r29, 0
/* 8007A6C0 00077600  93 81 00 10 */	stw r28, 0x10(r1)
/* 8007A6C4 00077604  7C 7C 1B 78 */	mr r28, r3
/* 8007A6C8 00077608  7F 9F E3 78 */	mr r31, r28
/* 8007A6CC 0007760C  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 8007A6D0 00077610  7F 9E E3 78 */	mr r30, r28
/* 8007A6D4 00077614  80 64 00 00 */	lwz r3, 0(r4)
/* 8007A6D8 00077618  80 04 00 08 */	lwz r0, 8(r4)
/* 8007A6DC 0007761C  7C 03 00 50 */	subf r0, r3, r0
/* 8007A6E0 00077620  90 1C 00 58 */	stw r0, 0x58(r28)
.L_8007A6E4:
/* 8007A6E4 00077624  80 7F 00 38 */	lwz r3, 0x38(r31)
/* 8007A6E8 00077628  28 03 00 00 */	cmplwi r3, 0
/* 8007A6EC 0007762C  41 82 00 18 */	beq .L_8007A704
/* 8007A6F0 00077630  88 1E 00 0A */	lbz r0, 0xa(r30)
/* 8007A6F4 00077634  28 00 00 3C */	cmplwi r0, 0x3c
/* 8007A6F8 00077638  41 82 00 0C */	beq .L_8007A704
/* 8007A6FC 0007763C  7F A4 EB 78 */	mr r4, r29
/* 8007A700 00077640  4B FE 9A 09 */	bl load__9J3DTexMtxCFUl
.L_8007A704:
/* 8007A704 00077644  3B BD 00 01 */	addi r29, r29, 1
/* 8007A708 00077648  3B DE 00 06 */	addi r30, r30, 6
/* 8007A70C 0007764C  28 1D 00 08 */	cmplwi r29, 8
/* 8007A710 00077650  3B FF 00 04 */	addi r31, r31, 4
/* 8007A714 00077654  41 80 FF D0 */	blt .L_8007A6E4
/* 8007A718 00077658  80 7C 00 04 */	lwz r3, 4(r28)
/* 8007A71C 0007765C  28 03 00 00 */	cmplwi r3, 0
/* 8007A720 00077660  41 82 00 0C */	beq .L_8007A72C
/* 8007A724 00077664  38 9C 00 08 */	addi r4, r28, 8
/* 8007A728 00077668  4B FE 94 B1 */	bl loadTexCoordGens__FUlP11J3DTexCoord
.L_8007A72C:
/* 8007A72C 0007766C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8007A730 00077670  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8007A734 00077674  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8007A738 00077678  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8007A73C 0007767C  83 81 00 10 */	lwz r28, 0x10(r1)
/* 8007A740 00077680  7C 08 03 A6 */	mtlr r0
/* 8007A744 00077684  38 21 00 20 */	addi r1, r1, 0x20
/* 8007A748 00077688  4E 80 00 20 */	blr 
.endfn load__19J3DTexGenBlockBasicFv

.fn patch__21J3DTexGenBlockPatchedFv, global
/* 8007A74C 0007768C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8007A750 00077690  7C 08 02 A6 */	mflr r0
/* 8007A754 00077694  90 01 00 24 */	stw r0, 0x24(r1)
/* 8007A758 00077698  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8007A75C 0007769C  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8007A760 000776A0  7C 7E 1B 78 */	mr r30, r3
/* 8007A764 000776A4  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8007A768 000776A8  3B A0 00 00 */	li r29, 0
/* 8007A76C 000776AC  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 8007A770 000776B0  80 03 00 58 */	lwz r0, 0x58(r3)
/* 8007A774 000776B4  80 64 00 00 */	lwz r3, 0(r4)
/* 8007A778 000776B8  7C 03 02 14 */	add r0, r3, r0
/* 8007A77C 000776BC  90 04 00 08 */	stw r0, 8(r4)
/* 8007A780 000776C0  80 6D 8E A8 */	lwz r3, __GDCurrentDL@sda21(r13)
/* 8007A784 000776C4  83 E3 00 08 */	lwz r31, 8(r3)
.L_8007A788:
/* 8007A788 000776C8  80 7E 00 38 */	lwz r3, 0x38(r30)
/* 8007A78C 000776CC  28 03 00 00 */	cmplwi r3, 0
/* 8007A790 000776D0  41 82 00 0C */	beq .L_8007A79C
/* 8007A794 000776D4  7F A4 EB 78 */	mr r4, r29
/* 8007A798 000776D8  4B FE 99 71 */	bl load__9J3DTexMtxCFUl
.L_8007A79C:
/* 8007A79C 000776DC  3B BD 00 01 */	addi r29, r29, 1
/* 8007A7A0 000776E0  3B DE 00 04 */	addi r30, r30, 4
/* 8007A7A4 000776E4  28 1D 00 08 */	cmplwi r29, 8
/* 8007A7A8 000776E8  41 80 FF E0 */	blt .L_8007A788
/* 8007A7AC 000776EC  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 8007A7B0 000776F0  7F E3 FB 78 */	mr r3, r31
/* 8007A7B4 000776F4  80 04 00 08 */	lwz r0, 8(r4)
/* 8007A7B8 000776F8  7C 9F 00 50 */	subf r4, r31, r0
/* 8007A7BC 000776FC  48 07 1F 8D */	bl DCStoreRange
/* 8007A7C0 00077700  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8007A7C4 00077704  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8007A7C8 00077708  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8007A7CC 0007770C  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8007A7D0 00077710  7C 08 03 A6 */	mtlr r0
/* 8007A7D4 00077714  38 21 00 20 */	addi r1, r1, 0x20
/* 8007A7D8 00077718  4E 80 00 20 */	blr 
.endfn patch__21J3DTexGenBlockPatchedFv

.fn patch__15J3DTexGenBlock4Fv, global
/* 8007A7DC 0007771C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8007A7E0 00077720  7C 08 02 A6 */	mflr r0
/* 8007A7E4 00077724  90 01 00 24 */	stw r0, 0x24(r1)
/* 8007A7E8 00077728  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8007A7EC 0007772C  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8007A7F0 00077730  7C 7E 1B 78 */	mr r30, r3
/* 8007A7F4 00077734  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8007A7F8 00077738  7C 7D 1B 78 */	mr r29, r3
/* 8007A7FC 0007773C  93 81 00 10 */	stw r28, 0x10(r1)
/* 8007A800 00077740  3B 80 00 00 */	li r28, 0
/* 8007A804 00077744  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 8007A808 00077748  80 03 00 58 */	lwz r0, 0x58(r3)
/* 8007A80C 0007774C  80 85 00 00 */	lwz r4, 0(r5)
/* 8007A810 00077750  7C 04 02 14 */	add r0, r4, r0
/* 8007A814 00077754  90 05 00 08 */	stw r0, 8(r5)
/* 8007A818 00077758  80 6D 8E A8 */	lwz r3, __GDCurrentDL@sda21(r13)
/* 8007A81C 0007775C  83 E3 00 08 */	lwz r31, 8(r3)
.L_8007A820:
/* 8007A820 00077760  80 7E 00 38 */	lwz r3, 0x38(r30)
/* 8007A824 00077764  28 03 00 00 */	cmplwi r3, 0
/* 8007A828 00077768  41 82 00 18 */	beq .L_8007A840
/* 8007A82C 0007776C  88 1D 00 0A */	lbz r0, 0xa(r29)
/* 8007A830 00077770  28 00 00 3C */	cmplwi r0, 0x3c
/* 8007A834 00077774  41 82 00 0C */	beq .L_8007A840
/* 8007A838 00077778  7F 84 E3 78 */	mr r4, r28
/* 8007A83C 0007777C  4B FE 98 CD */	bl load__9J3DTexMtxCFUl
.L_8007A840:
/* 8007A840 00077780  3B 9C 00 01 */	addi r28, r28, 1
/* 8007A844 00077784  3B BD 00 06 */	addi r29, r29, 6
/* 8007A848 00077788  28 1C 00 04 */	cmplwi r28, 4
/* 8007A84C 0007778C  3B DE 00 04 */	addi r30, r30, 4
/* 8007A850 00077790  41 80 FF D0 */	blt .L_8007A820
/* 8007A854 00077794  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 8007A858 00077798  7F E3 FB 78 */	mr r3, r31
/* 8007A85C 0007779C  80 04 00 08 */	lwz r0, 8(r4)
/* 8007A860 000777A0  7C 9F 00 50 */	subf r4, r31, r0
/* 8007A864 000777A4  48 07 1E E5 */	bl DCStoreRange
/* 8007A868 000777A8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8007A86C 000777AC  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8007A870 000777B0  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8007A874 000777B4  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8007A878 000777B8  83 81 00 10 */	lwz r28, 0x10(r1)
/* 8007A87C 000777BC  7C 08 03 A6 */	mtlr r0
/* 8007A880 000777C0  38 21 00 20 */	addi r1, r1, 0x20
/* 8007A884 000777C4  4E 80 00 20 */	blr 
.endfn patch__15J3DTexGenBlock4Fv

.fn patch__19J3DTexGenBlockBasicFv, global
/* 8007A888 000777C8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8007A88C 000777CC  7C 08 02 A6 */	mflr r0
/* 8007A890 000777D0  90 01 00 24 */	stw r0, 0x24(r1)
/* 8007A894 000777D4  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8007A898 000777D8  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8007A89C 000777DC  7C 7E 1B 78 */	mr r30, r3
/* 8007A8A0 000777E0  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8007A8A4 000777E4  7C 7D 1B 78 */	mr r29, r3
/* 8007A8A8 000777E8  93 81 00 10 */	stw r28, 0x10(r1)
/* 8007A8AC 000777EC  3B 80 00 00 */	li r28, 0
/* 8007A8B0 000777F0  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 8007A8B4 000777F4  80 03 00 58 */	lwz r0, 0x58(r3)
/* 8007A8B8 000777F8  80 85 00 00 */	lwz r4, 0(r5)
/* 8007A8BC 000777FC  7C 04 02 14 */	add r0, r4, r0
/* 8007A8C0 00077800  90 05 00 08 */	stw r0, 8(r5)
/* 8007A8C4 00077804  80 6D 8E A8 */	lwz r3, __GDCurrentDL@sda21(r13)
/* 8007A8C8 00077808  83 E3 00 08 */	lwz r31, 8(r3)
.L_8007A8CC:
/* 8007A8CC 0007780C  80 7E 00 38 */	lwz r3, 0x38(r30)
/* 8007A8D0 00077810  28 03 00 00 */	cmplwi r3, 0
/* 8007A8D4 00077814  41 82 00 18 */	beq .L_8007A8EC
/* 8007A8D8 00077818  88 1D 00 0A */	lbz r0, 0xa(r29)
/* 8007A8DC 0007781C  28 00 00 3C */	cmplwi r0, 0x3c
/* 8007A8E0 00077820  41 82 00 0C */	beq .L_8007A8EC
/* 8007A8E4 00077824  7F 84 E3 78 */	mr r4, r28
/* 8007A8E8 00077828  4B FE 98 21 */	bl load__9J3DTexMtxCFUl
.L_8007A8EC:
/* 8007A8EC 0007782C  3B 9C 00 01 */	addi r28, r28, 1
/* 8007A8F0 00077830  3B BD 00 06 */	addi r29, r29, 6
/* 8007A8F4 00077834  28 1C 00 08 */	cmplwi r28, 8
/* 8007A8F8 00077838  3B DE 00 04 */	addi r30, r30, 4
/* 8007A8FC 0007783C  41 80 FF D0 */	blt .L_8007A8CC
/* 8007A900 00077840  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 8007A904 00077844  7F E3 FB 78 */	mr r3, r31
/* 8007A908 00077848  80 04 00 08 */	lwz r0, 8(r4)
/* 8007A90C 0007784C  7C 9F 00 50 */	subf r4, r31, r0
/* 8007A910 00077850  48 07 1E 39 */	bl DCStoreRange
/* 8007A914 00077854  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8007A918 00077858  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8007A91C 0007785C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8007A920 00077860  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8007A924 00077864  83 81 00 10 */	lwz r28, 0x10(r1)
/* 8007A928 00077868  7C 08 03 A6 */	mtlr r0
/* 8007A92C 0007786C  38 21 00 20 */	addi r1, r1, 0x20
/* 8007A930 00077870  4E 80 00 20 */	blr 
.endfn patch__19J3DTexGenBlockBasicFv

.fn diff__21J3DTexGenBlockPatchedFUl, global
/* 8007A934 00077874  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8007A938 00077878  7C 08 02 A6 */	mflr r0
/* 8007A93C 0007787C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8007A940 00077880  54 80 C7 3F */	rlwinm. r0, r4, 0x18, 0x1c, 0x1f
/* 8007A944 00077884  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8007A948 00077888  7C 9F 23 78 */	mr r31, r4
/* 8007A94C 0007788C  93 C1 00 08 */	stw r30, 8(r1)
/* 8007A950 00077890  7C 7E 1B 78 */	mr r30, r3
/* 8007A954 00077894  41 82 00 30 */	beq .L_8007A984
/* 8007A958 00077898  81 83 00 00 */	lwz r12, 0(r3)
/* 8007A95C 0007789C  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 8007A960 000778A0  7D 89 03 A6 */	mtctr r12
/* 8007A964 000778A4  4E 80 04 21 */	bctrl 
/* 8007A968 000778A8  57 E0 04 E7 */	rlwinm. r0, r31, 0, 0x13, 0x13
/* 8007A96C 000778AC  41 82 00 18 */	beq .L_8007A984
/* 8007A970 000778B0  7F C3 F3 78 */	mr r3, r30
/* 8007A974 000778B4  81 9E 00 00 */	lwz r12, 0(r30)
/* 8007A978 000778B8  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 8007A97C 000778BC  7D 89 03 A6 */	mtctr r12
/* 8007A980 000778C0  4E 80 04 21 */	bctrl 
.L_8007A984:
/* 8007A984 000778C4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8007A988 000778C8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8007A98C 000778CC  83 C1 00 08 */	lwz r30, 8(r1)
/* 8007A990 000778D0  7C 08 03 A6 */	mtlr r0
/* 8007A994 000778D4  38 21 00 10 */	addi r1, r1, 0x10
/* 8007A998 000778D8  4E 80 00 20 */	blr 
.endfn diff__21J3DTexGenBlockPatchedFUl

.fn diffTexMtx__21J3DTexGenBlockPatchedFv, global
/* 8007A99C 000778DC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8007A9A0 000778E0  7C 08 02 A6 */	mflr r0
/* 8007A9A4 000778E4  90 01 00 14 */	stw r0, 0x14(r1)
/* 8007A9A8 000778E8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8007A9AC 000778EC  7C 7F 1B 78 */	mr r31, r3
/* 8007A9B0 000778F0  93 C1 00 08 */	stw r30, 8(r1)
/* 8007A9B4 000778F4  3B C0 00 00 */	li r30, 0
.L_8007A9B8:
/* 8007A9B8 000778F8  80 7F 00 38 */	lwz r3, 0x38(r31)
/* 8007A9BC 000778FC  28 03 00 00 */	cmplwi r3, 0
/* 8007A9C0 00077900  41 82 00 0C */	beq .L_8007A9CC
/* 8007A9C4 00077904  7F C4 F3 78 */	mr r4, r30
/* 8007A9C8 00077908  4B FE 97 41 */	bl load__9J3DTexMtxCFUl
.L_8007A9CC:
/* 8007A9CC 0007790C  3B DE 00 01 */	addi r30, r30, 1
/* 8007A9D0 00077910  3B FF 00 04 */	addi r31, r31, 4
/* 8007A9D4 00077914  28 1E 00 08 */	cmplwi r30, 8
/* 8007A9D8 00077918  41 80 FF E0 */	blt .L_8007A9B8
/* 8007A9DC 0007791C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8007A9E0 00077920  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8007A9E4 00077924  83 C1 00 08 */	lwz r30, 8(r1)
/* 8007A9E8 00077928  7C 08 03 A6 */	mtlr r0
/* 8007A9EC 0007792C  38 21 00 10 */	addi r1, r1, 0x10
/* 8007A9F0 00077930  4E 80 00 20 */	blr 
.endfn diffTexMtx__21J3DTexGenBlockPatchedFv

.fn diffTexGen__21J3DTexGenBlockPatchedFv, global
/* 8007A9F4 00077934  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8007A9F8 00077938  7C 08 02 A6 */	mflr r0
/* 8007A9FC 0007793C  7C 64 1B 78 */	mr r4, r3
/* 8007AA00 00077940  90 01 00 14 */	stw r0, 0x14(r1)
/* 8007AA04 00077944  80 63 00 04 */	lwz r3, 4(r3)
/* 8007AA08 00077948  28 03 00 00 */	cmplwi r3, 0
/* 8007AA0C 0007794C  41 82 00 0C */	beq .L_8007AA18
/* 8007AA10 00077950  38 84 00 08 */	addi r4, r4, 8
/* 8007AA14 00077954  4B FE 91 C5 */	bl loadTexCoordGens__FUlP11J3DTexCoord
.L_8007AA18:
/* 8007AA18 00077958  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8007AA1C 0007795C  7C 08 03 A6 */	mtlr r0
/* 8007AA20 00077960  38 21 00 10 */	addi r1, r1, 0x10
/* 8007AA24 00077964  4E 80 00 20 */	blr 
.endfn diffTexGen__21J3DTexGenBlockPatchedFv

.fn load__12J3DTevBlock1Fv, global
/* 8007AA28 00077968  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8007AA2C 0007796C  7C 08 02 A6 */	mflr r0
/* 8007AA30 00077970  90 01 00 14 */	stw r0, 0x14(r1)
/* 8007AA34 00077974  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8007AA38 00077978  7C 7F 1B 78 */	mr r31, r3
/* 8007AA3C 0007797C  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 8007AA40 00077980  80 64 00 00 */	lwz r3, 0(r4)
/* 8007AA44 00077984  80 04 00 08 */	lwz r0, 8(r4)
/* 8007AA48 00077988  7C 03 00 50 */	subf r0, r3, r0
/* 8007AA4C 0007798C  90 1F 00 04 */	stw r0, 4(r31)
/* 8007AA50 00077990  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 8007AA54 00077994  80 64 00 08 */	lwz r3, 8(r4)
/* 8007AA58 00077998  80 04 00 0C */	lwz r0, 0xc(r4)
/* 8007AA5C 0007799C  38 63 00 69 */	addi r3, r3, 0x69
/* 8007AA60 000779A0  7C 03 00 40 */	cmplw r3, r0
/* 8007AA64 000779A4  40 81 00 08 */	ble .L_8007AA6C
/* 8007AA68 000779A8  48 06 71 D9 */	bl GDOverflowed
.L_8007AA6C:
/* 8007AA6C 000779AC  A0 1F 00 08 */	lhz r0, 8(r31)
/* 8007AA70 000779B0  28 00 FF FF */	cmplwi r0, 0xffff
/* 8007AA74 000779B4  41 82 00 10 */	beq .L_8007AA84
/* 8007AA78 000779B8  38 9F 00 08 */	addi r4, r31, 8
/* 8007AA7C 000779BC  38 60 00 00 */	li r3, 0
/* 8007AA80 000779C0  4B FE A9 09 */	bl loadTexNo__FUlRCUs
.L_8007AA84:
/* 8007AA84 000779C4  88 9F 00 0A */	lbz r4, 0xa(r31)
/* 8007AA88 000779C8  38 60 00 00 */	li r3, 0
/* 8007AA8C 000779CC  88 BF 00 0B */	lbz r5, 0xb(r31)
/* 8007AA90 000779D0  38 E0 00 FF */	li r7, 0xff
/* 8007AA94 000779D4  88 DF 00 0C */	lbz r6, 0xc(r31)
/* 8007AA98 000779D8  39 00 00 FF */	li r8, 0xff
/* 8007AA9C 000779DC  39 20 00 FF */	li r9, 0xff
/* 8007AAA0 000779E0  4B FF BA 59 */	bl J3DGDSetTevOrder__F13_GXTevStageID13_GXTexCoordID11_GXTexMapID12_GXChannelID13_GXTexCoordID11_GXTexMapID12_GXChannelID
/* 8007AAA4 000779E4  88 9F 00 0B */	lbz r4, 0xb(r31)
/* 8007AAA8 000779E8  3C 60 80 51 */	lis r3, sTexCoordScaleTable__6J3DSys@ha
/* 8007AAAC 000779EC  38 03 F4 1C */	addi r0, r3, sTexCoordScaleTable__6J3DSys@l
/* 8007AAB0 000779F0  88 7F 00 0A */	lbz r3, 0xa(r31)
/* 8007AAB4 000779F4  54 84 1E B8 */	rlwinm r4, r4, 3, 0x1a, 0x1c
/* 8007AAB8 000779F8  38 C0 00 00 */	li r6, 0
/* 8007AABC 000779FC  7C E0 22 14 */	add r7, r0, r4
/* 8007AAC0 00077A00  39 20 00 00 */	li r9, 0
/* 8007AAC4 00077A04  A0 87 00 04 */	lhz r4, 4(r7)
/* 8007AAC8 00077A08  A0 07 00 06 */	lhz r0, 6(r7)
/* 8007AACC 00077A0C  20 A4 00 01 */	subfic r5, r4, 1
/* 8007AAD0 00077A10  A0 87 00 00 */	lhz r4, 0(r7)
/* 8007AAD4 00077A14  20 00 00 01 */	subfic r0, r0, 1
/* 8007AAD8 00077A18  A0 E7 00 02 */	lhz r7, 2(r7)
/* 8007AADC 00077A1C  7C A5 00 34 */	cntlzw r5, r5
/* 8007AAE0 00077A20  7C 00 00 34 */	cntlzw r0, r0
/* 8007AAE4 00077A24  54 A5 DE 3E */	rlwinm r5, r5, 0x1b, 0x18, 0x1f
/* 8007AAE8 00077A28  54 08 DE 3E */	rlwinm r8, r0, 0x1b, 0x18, 0x1f
/* 8007AAEC 00077A2C  4B FF AB 39 */	bl J3DGDSetTexCoordScale2__F13_GXTexCoordIDUsUcUcUsUcUc
/* 8007AAF0 00077A30  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 8007AAF4 00077A34  38 00 00 61 */	li r0, 0x61
/* 8007AAF8 00077A38  81 3F 00 0E */	lwz r9, 0xe(r31)
/* 8007AAFC 00077A3C  80 85 00 08 */	lwz r4, 8(r5)
/* 8007AB00 00077A40  55 28 46 3E */	srwi r8, r9, 0x18
/* 8007AB04 00077A44  55 27 86 3E */	rlwinm r7, r9, 0x10, 0x18, 0x1f
/* 8007AB08 00077A48  38 64 00 01 */	addi r3, r4, 1
/* 8007AB0C 00077A4C  55 26 C6 3E */	rlwinm r6, r9, 0x18, 0x18, 0x1f
/* 8007AB10 00077A50  90 65 00 08 */	stw r3, 8(r5)
/* 8007AB14 00077A54  98 04 00 00 */	stb r0, 0(r4)
/* 8007AB18 00077A58  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 8007AB1C 00077A5C  80 85 00 08 */	lwz r4, 8(r5)
/* 8007AB20 00077A60  38 64 00 01 */	addi r3, r4, 1
/* 8007AB24 00077A64  90 65 00 08 */	stw r3, 8(r5)
/* 8007AB28 00077A68  99 04 00 00 */	stb r8, 0(r4)
/* 8007AB2C 00077A6C  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 8007AB30 00077A70  80 85 00 08 */	lwz r4, 8(r5)
/* 8007AB34 00077A74  38 64 00 01 */	addi r3, r4, 1
/* 8007AB38 00077A78  90 65 00 08 */	stw r3, 8(r5)
/* 8007AB3C 00077A7C  98 E4 00 00 */	stb r7, 0(r4)
/* 8007AB40 00077A80  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 8007AB44 00077A84  80 85 00 08 */	lwz r4, 8(r5)
/* 8007AB48 00077A88  38 64 00 01 */	addi r3, r4, 1
/* 8007AB4C 00077A8C  90 65 00 08 */	stw r3, 8(r5)
/* 8007AB50 00077A90  98 C4 00 00 */	stb r6, 0(r4)
/* 8007AB54 00077A94  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 8007AB58 00077A98  80 85 00 08 */	lwz r4, 8(r5)
/* 8007AB5C 00077A9C  38 64 00 01 */	addi r3, r4, 1
/* 8007AB60 00077AA0  90 65 00 08 */	stw r3, 8(r5)
/* 8007AB64 00077AA4  99 24 00 00 */	stb r9, 0(r4)
/* 8007AB68 00077AA8  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 8007AB6C 00077AAC  81 3F 00 12 */	lwz r9, 0x12(r31)
/* 8007AB70 00077AB0  80 85 00 08 */	lwz r4, 8(r5)
/* 8007AB74 00077AB4  55 28 46 3E */	srwi r8, r9, 0x18
/* 8007AB78 00077AB8  55 27 86 3E */	rlwinm r7, r9, 0x10, 0x18, 0x1f
/* 8007AB7C 00077ABC  38 64 00 01 */	addi r3, r4, 1
/* 8007AB80 00077AC0  55 26 C6 3E */	rlwinm r6, r9, 0x18, 0x18, 0x1f
/* 8007AB84 00077AC4  90 65 00 08 */	stw r3, 8(r5)
/* 8007AB88 00077AC8  98 04 00 00 */	stb r0, 0(r4)
/* 8007AB8C 00077ACC  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 8007AB90 00077AD0  80 85 00 08 */	lwz r4, 8(r5)
/* 8007AB94 00077AD4  38 64 00 01 */	addi r3, r4, 1
/* 8007AB98 00077AD8  90 65 00 08 */	stw r3, 8(r5)
/* 8007AB9C 00077ADC  99 04 00 00 */	stb r8, 0(r4)
/* 8007ABA0 00077AE0  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 8007ABA4 00077AE4  80 85 00 08 */	lwz r4, 8(r5)
/* 8007ABA8 00077AE8  38 64 00 01 */	addi r3, r4, 1
/* 8007ABAC 00077AEC  90 65 00 08 */	stw r3, 8(r5)
/* 8007ABB0 00077AF0  98 E4 00 00 */	stb r7, 0(r4)
/* 8007ABB4 00077AF4  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 8007ABB8 00077AF8  80 85 00 08 */	lwz r4, 8(r5)
/* 8007ABBC 00077AFC  38 64 00 01 */	addi r3, r4, 1
/* 8007ABC0 00077B00  90 65 00 08 */	stw r3, 8(r5)
/* 8007ABC4 00077B04  98 C4 00 00 */	stb r6, 0(r4)
/* 8007ABC8 00077B08  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 8007ABCC 00077B0C  80 85 00 08 */	lwz r4, 8(r5)
/* 8007ABD0 00077B10  38 64 00 01 */	addi r3, r4, 1
/* 8007ABD4 00077B14  90 65 00 08 */	stw r3, 8(r5)
/* 8007ABD8 00077B18  99 24 00 00 */	stb r9, 0(r4)
/* 8007ABDC 00077B1C  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 8007ABE0 00077B20  80 7F 00 18 */	lwz r3, 0x18(r31)
/* 8007ABE4 00077B24  80 85 00 08 */	lwz r4, 8(r5)
/* 8007ABE8 00077B28  64 68 10 00 */	oris r8, r3, 0x1000
/* 8007ABEC 00077B2C  38 64 00 01 */	addi r3, r4, 1
/* 8007ABF0 00077B30  90 65 00 08 */	stw r3, 8(r5)
/* 8007ABF4 00077B34  55 07 46 3E */	srwi r7, r8, 0x18
/* 8007ABF8 00077B38  55 06 86 3E */	rlwinm r6, r8, 0x10, 0x18, 0x1f
/* 8007ABFC 00077B3C  55 05 C6 3E */	rlwinm r5, r8, 0x18, 0x18, 0x1f
/* 8007AC00 00077B40  98 04 00 00 */	stb r0, 0(r4)
/* 8007AC04 00077B44  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 8007AC08 00077B48  80 64 00 08 */	lwz r3, 8(r4)
/* 8007AC0C 00077B4C  38 03 00 01 */	addi r0, r3, 1
/* 8007AC10 00077B50  90 04 00 08 */	stw r0, 8(r4)
/* 8007AC14 00077B54  98 E3 00 00 */	stb r7, 0(r3)
/* 8007AC18 00077B58  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 8007AC1C 00077B5C  80 64 00 08 */	lwz r3, 8(r4)
/* 8007AC20 00077B60  38 03 00 01 */	addi r0, r3, 1
/* 8007AC24 00077B64  90 04 00 08 */	stw r0, 8(r4)
/* 8007AC28 00077B68  98 C3 00 00 */	stb r6, 0(r3)
/* 8007AC2C 00077B6C  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 8007AC30 00077B70  80 64 00 08 */	lwz r3, 8(r4)
/* 8007AC34 00077B74  38 03 00 01 */	addi r0, r3, 1
/* 8007AC38 00077B78  90 04 00 08 */	stw r0, 8(r4)
/* 8007AC3C 00077B7C  98 A3 00 00 */	stb r5, 0(r3)
/* 8007AC40 00077B80  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 8007AC44 00077B84  80 64 00 08 */	lwz r3, 8(r4)
/* 8007AC48 00077B88  38 03 00 01 */	addi r0, r3, 1
/* 8007AC4C 00077B8C  90 04 00 08 */	stw r0, 8(r4)
/* 8007AC50 00077B90  99 03 00 00 */	stb r8, 0(r3)
/* 8007AC54 00077B94  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8007AC58 00077B98  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8007AC5C 00077B9C  7C 08 03 A6 */	mtlr r0
/* 8007AC60 00077BA0  38 21 00 10 */	addi r1, r1, 0x10
/* 8007AC64 00077BA4  4E 80 00 20 */	blr 
.endfn load__12J3DTevBlock1Fv

.fn load__12J3DTevBlock2Fv, global
/* 8007AC68 00077BA8  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 8007AC6C 00077BAC  7C 08 02 A6 */	mflr r0
/* 8007AC70 00077BB0  90 01 00 44 */	stw r0, 0x44(r1)
/* 8007AC74 00077BB4  BF 21 00 24 */	stmw r25, 0x24(r1)
/* 8007AC78 00077BB8  7C 7E 1B 78 */	mr r30, r3
/* 8007AC7C 00077BBC  7F D9 F3 78 */	mr r25, r30
/* 8007AC80 00077BC0  3B 40 00 00 */	li r26, 0
/* 8007AC84 00077BC4  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 8007AC88 00077BC8  8B E3 00 34 */	lbz r31, 0x34(r3)
/* 8007AC8C 00077BCC  80 64 00 00 */	lwz r3, 0(r4)
/* 8007AC90 00077BD0  80 04 00 08 */	lwz r0, 8(r4)
/* 8007AC94 00077BD4  7C 03 00 50 */	subf r0, r3, r0
/* 8007AC98 00077BD8  90 1E 00 04 */	stw r0, 4(r30)
.L_8007AC9C:
/* 8007AC9C 00077BDC  A0 19 00 08 */	lhz r0, 8(r25)
/* 8007ACA0 00077BE0  28 00 FF FF */	cmplwi r0, 0xffff
/* 8007ACA4 00077BE4  41 82 00 10 */	beq .L_8007ACB4
/* 8007ACA8 00077BE8  7F 43 D3 78 */	mr r3, r26
/* 8007ACAC 00077BEC  38 99 00 08 */	addi r4, r25, 8
/* 8007ACB0 00077BF0  4B FE A6 D9 */	bl loadTexNo__FUlRCUs
.L_8007ACB4:
/* 8007ACB4 00077BF4  3B 5A 00 01 */	addi r26, r26, 1
/* 8007ACB8 00077BF8  3B 39 00 02 */	addi r25, r25, 2
/* 8007ACBC 00077BFC  28 1A 00 02 */	cmplwi r26, 2
/* 8007ACC0 00077C00  41 80 FF DC */	blt .L_8007AC9C
/* 8007ACC4 00077C04  88 9E 00 0C */	lbz r4, 0xc(r30)
/* 8007ACC8 00077C08  38 60 00 00 */	li r3, 0
/* 8007ACCC 00077C0C  88 BE 00 0D */	lbz r5, 0xd(r30)
/* 8007ACD0 00077C10  88 DE 00 0E */	lbz r6, 0xe(r30)
/* 8007ACD4 00077C14  88 FE 00 10 */	lbz r7, 0x10(r30)
/* 8007ACD8 00077C18  89 1E 00 11 */	lbz r8, 0x11(r30)
/* 8007ACDC 00077C1C  89 3E 00 12 */	lbz r9, 0x12(r30)
/* 8007ACE0 00077C20  4B FF B8 19 */	bl J3DGDSetTevOrder__F13_GXTevStageID13_GXTexCoordID11_GXTexMapID12_GXChannelID13_GXTexCoordID11_GXTexMapID12_GXChannelID
/* 8007ACE4 00077C24  88 9E 00 0D */	lbz r4, 0xd(r30)
/* 8007ACE8 00077C28  3C 60 80 51 */	lis r3, sTexCoordScaleTable__6J3DSys@ha
/* 8007ACEC 00077C2C  38 03 F4 1C */	addi r0, r3, sTexCoordScaleTable__6J3DSys@l
/* 8007ACF0 00077C30  88 7E 00 0C */	lbz r3, 0xc(r30)
/* 8007ACF4 00077C34  54 84 1E B8 */	rlwinm r4, r4, 3, 0x1a, 0x1c
/* 8007ACF8 00077C38  38 C0 00 00 */	li r6, 0
/* 8007ACFC 00077C3C  7C E0 22 14 */	add r7, r0, r4
/* 8007AD00 00077C40  39 20 00 00 */	li r9, 0
/* 8007AD04 00077C44  A0 87 00 04 */	lhz r4, 4(r7)
/* 8007AD08 00077C48  A0 07 00 06 */	lhz r0, 6(r7)
/* 8007AD0C 00077C4C  20 A4 00 01 */	subfic r5, r4, 1
/* 8007AD10 00077C50  A0 87 00 00 */	lhz r4, 0(r7)
/* 8007AD14 00077C54  20 00 00 01 */	subfic r0, r0, 1
/* 8007AD18 00077C58  A0 E7 00 02 */	lhz r7, 2(r7)
/* 8007AD1C 00077C5C  7C A5 00 34 */	cntlzw r5, r5
/* 8007AD20 00077C60  7C 00 00 34 */	cntlzw r0, r0
/* 8007AD24 00077C64  54 A5 DE 3E */	rlwinm r5, r5, 0x1b, 0x18, 0x1f
/* 8007AD28 00077C68  54 08 DE 3E */	rlwinm r8, r0, 0x1b, 0x18, 0x1f
/* 8007AD2C 00077C6C  4B FF A8 F9 */	bl J3DGDSetTexCoordScale2__F13_GXTexCoordIDUsUcUcUsUcUc
/* 8007AD30 00077C70  88 9E 00 11 */	lbz r4, 0x11(r30)
/* 8007AD34 00077C74  3C 60 80 51 */	lis r3, sTexCoordScaleTable__6J3DSys@ha
/* 8007AD38 00077C78  38 63 F4 1C */	addi r3, r3, sTexCoordScaleTable__6J3DSys@l
/* 8007AD3C 00077C7C  88 1E 00 10 */	lbz r0, 0x10(r30)
/* 8007AD40 00077C80  54 84 1E B8 */	rlwinm r4, r4, 3, 0x1a, 0x1c
/* 8007AD44 00077C84  38 C0 00 00 */	li r6, 0
/* 8007AD48 00077C88  7C E3 22 14 */	add r7, r3, r4
/* 8007AD4C 00077C8C  54 03 07 7E */	clrlwi r3, r0, 0x1d
/* 8007AD50 00077C90  A0 87 00 04 */	lhz r4, 4(r7)
/* 8007AD54 00077C94  39 20 00 00 */	li r9, 0
/* 8007AD58 00077C98  A0 07 00 06 */	lhz r0, 6(r7)
/* 8007AD5C 00077C9C  20 A4 00 01 */	subfic r5, r4, 1
/* 8007AD60 00077CA0  A0 87 00 00 */	lhz r4, 0(r7)
/* 8007AD64 00077CA4  20 00 00 01 */	subfic r0, r0, 1
/* 8007AD68 00077CA8  A0 E7 00 02 */	lhz r7, 2(r7)
/* 8007AD6C 00077CAC  7C A5 00 34 */	cntlzw r5, r5
/* 8007AD70 00077CB0  7C 00 00 34 */	cntlzw r0, r0
/* 8007AD74 00077CB4  54 A5 DE 3E */	rlwinm r5, r5, 0x1b, 0x18, 0x1f
/* 8007AD78 00077CB8  54 08 DE 3E */	rlwinm r8, r0, 0x1b, 0x18, 0x1f
/* 8007AD7C 00077CBC  4B FF A8 A9 */	bl J3DGDSetTexCoordScale2__F13_GXTexCoordIDUsUcUcUsUcUc
/* 8007AD80 00077CC0  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 8007AD84 00077CC4  7F D9 F3 78 */	mr r25, r30
/* 8007AD88 00077CC8  3B 40 00 00 */	li r26, 0
/* 8007AD8C 00077CCC  80 64 00 00 */	lwz r3, 0(r4)
/* 8007AD90 00077CD0  80 04 00 08 */	lwz r0, 8(r4)
/* 8007AD94 00077CD4  7C 03 00 50 */	subf r0, r3, r0
/* 8007AD98 00077CD8  90 1E 00 68 */	stw r0, 0x68(r30)
.L_8007AD9C:
/* 8007AD9C 00077CDC  80 B9 00 14 */	lwz r5, 0x14(r25)
/* 8007ADA0 00077CE0  38 7A 00 01 */	addi r3, r26, 1
/* 8007ADA4 00077CE4  80 19 00 18 */	lwz r0, 0x18(r25)
/* 8007ADA8 00077CE8  38 81 00 0C */	addi r4, r1, 0xc
/* 8007ADAC 00077CEC  90 A1 00 0C */	stw r5, 0xc(r1)
/* 8007ADB0 00077CF0  90 01 00 10 */	stw r0, 0x10(r1)
/* 8007ADB4 00077CF4  4B FF BA 35 */	bl J3DGDSetTevColorS10__F11_GXTevRegID11_GXColorS10
/* 8007ADB8 00077CF8  3B 5A 00 01 */	addi r26, r26, 1
/* 8007ADBC 00077CFC  3B 39 00 08 */	addi r25, r25, 8
/* 8007ADC0 00077D00  28 1A 00 03 */	cmplwi r26, 3
/* 8007ADC4 00077D04  41 80 FF D8 */	blt .L_8007AD9C
/* 8007ADC8 00077D08  3B 40 00 00 */	li r26, 0
/* 8007ADCC 00077D0C  7F D9 F3 78 */	mr r25, r30
.L_8007ADD0:
/* 8007ADD0 00077D10  80 19 00 45 */	lwz r0, 0x45(r25)
/* 8007ADD4 00077D14  7F 43 D3 78 */	mr r3, r26
/* 8007ADD8 00077D18  38 81 00 08 */	addi r4, r1, 8
/* 8007ADDC 00077D1C  90 01 00 08 */	stw r0, 8(r1)
/* 8007ADE0 00077D20  4B FF B8 A1 */	bl J3DGDSetTevKColor__F14_GXTevKColorID8_GXColor
/* 8007ADE4 00077D24  3B 5A 00 01 */	addi r26, r26, 1
/* 8007ADE8 00077D28  3B 39 00 04 */	addi r25, r25, 4
/* 8007ADEC 00077D2C  28 1A 00 04 */	cmplwi r26, 4
/* 8007ADF0 00077D30  41 80 FF E0 */	blt .L_8007ADD0
/* 8007ADF4 00077D34  7F C3 F3 78 */	mr r3, r30
/* 8007ADF8 00077D38  7F C4 F3 78 */	mr r4, r30
/* 8007ADFC 00077D3C  38 A0 00 00 */	li r5, 0
/* 8007AE00 00077D40  7F E9 03 A6 */	mtctr r31
/* 8007AE04 00077D44  28 1F 00 00 */	cmplwi r31, 0
/* 8007AE08 00077D48  40 81 01 80 */	ble .L_8007AF88
.L_8007AE0C:
/* 8007AE0C 00077D4C  81 2D 8E A8 */	lwz r9, __GDCurrentDL@sda21(r13)
/* 8007AE10 00077D50  38 C5 00 10 */	addi r6, r5, 0x10
/* 8007AE14 00077D54  83 23 00 35 */	lwz r25, 0x35(r3)
/* 8007AE18 00077D58  38 00 00 61 */	li r0, 0x61
/* 8007AE1C 00077D5C  81 09 00 08 */	lwz r8, 8(r9)
/* 8007AE20 00077D60  54 C6 C0 0E */	slwi r6, r6, 0x18
/* 8007AE24 00077D64  57 2C 46 3E */	srwi r12, r25, 0x18
/* 8007AE28 00077D68  57 2B 86 3E */	rlwinm r11, r25, 0x10, 0x18, 0x1f
/* 8007AE2C 00077D6C  38 E8 00 01 */	addi r7, r8, 1
/* 8007AE30 00077D70  57 2A C6 3E */	rlwinm r10, r25, 0x18, 0x18, 0x1f
/* 8007AE34 00077D74  90 E9 00 08 */	stw r7, 8(r9)
/* 8007AE38 00077D78  38 A5 00 01 */	addi r5, r5, 1
/* 8007AE3C 00077D7C  98 08 00 00 */	stb r0, 0(r8)
/* 8007AE40 00077D80  81 2D 8E A8 */	lwz r9, __GDCurrentDL@sda21(r13)
/* 8007AE44 00077D84  81 09 00 08 */	lwz r8, 8(r9)
/* 8007AE48 00077D88  38 E8 00 01 */	addi r7, r8, 1
/* 8007AE4C 00077D8C  90 E9 00 08 */	stw r7, 8(r9)
/* 8007AE50 00077D90  99 88 00 00 */	stb r12, 0(r8)
/* 8007AE54 00077D94  81 2D 8E A8 */	lwz r9, __GDCurrentDL@sda21(r13)
/* 8007AE58 00077D98  81 09 00 08 */	lwz r8, 8(r9)
/* 8007AE5C 00077D9C  38 E8 00 01 */	addi r7, r8, 1
/* 8007AE60 00077DA0  90 E9 00 08 */	stw r7, 8(r9)
/* 8007AE64 00077DA4  99 68 00 00 */	stb r11, 0(r8)
/* 8007AE68 00077DA8  81 2D 8E A8 */	lwz r9, __GDCurrentDL@sda21(r13)
/* 8007AE6C 00077DAC  81 09 00 08 */	lwz r8, 8(r9)
/* 8007AE70 00077DB0  38 E8 00 01 */	addi r7, r8, 1
/* 8007AE74 00077DB4  90 E9 00 08 */	stw r7, 8(r9)
/* 8007AE78 00077DB8  99 48 00 00 */	stb r10, 0(r8)
/* 8007AE7C 00077DBC  81 2D 8E A8 */	lwz r9, __GDCurrentDL@sda21(r13)
/* 8007AE80 00077DC0  81 09 00 08 */	lwz r8, 8(r9)
/* 8007AE84 00077DC4  38 E8 00 01 */	addi r7, r8, 1
/* 8007AE88 00077DC8  90 E9 00 08 */	stw r7, 8(r9)
/* 8007AE8C 00077DCC  9B 28 00 00 */	stb r25, 0(r8)
/* 8007AE90 00077DD0  81 2D 8E A8 */	lwz r9, __GDCurrentDL@sda21(r13)
/* 8007AE94 00077DD4  83 23 00 39 */	lwz r25, 0x39(r3)
/* 8007AE98 00077DD8  38 63 00 08 */	addi r3, r3, 8
/* 8007AE9C 00077DDC  81 09 00 08 */	lwz r8, 8(r9)
/* 8007AEA0 00077DE0  57 2C 46 3E */	srwi r12, r25, 0x18
/* 8007AEA4 00077DE4  57 2B 86 3E */	rlwinm r11, r25, 0x10, 0x18, 0x1f
/* 8007AEA8 00077DE8  38 E8 00 01 */	addi r7, r8, 1
/* 8007AEAC 00077DEC  57 2A C6 3E */	rlwinm r10, r25, 0x18, 0x18, 0x1f
/* 8007AEB0 00077DF0  90 E9 00 08 */	stw r7, 8(r9)
/* 8007AEB4 00077DF4  98 08 00 00 */	stb r0, 0(r8)
/* 8007AEB8 00077DF8  81 2D 8E A8 */	lwz r9, __GDCurrentDL@sda21(r13)
/* 8007AEBC 00077DFC  81 09 00 08 */	lwz r8, 8(r9)
/* 8007AEC0 00077E00  38 E8 00 01 */	addi r7, r8, 1
/* 8007AEC4 00077E04  90 E9 00 08 */	stw r7, 8(r9)
/* 8007AEC8 00077E08  99 88 00 00 */	stb r12, 0(r8)
/* 8007AECC 00077E0C  81 2D 8E A8 */	lwz r9, __GDCurrentDL@sda21(r13)
/* 8007AED0 00077E10  81 09 00 08 */	lwz r8, 8(r9)
/* 8007AED4 00077E14  38 E8 00 01 */	addi r7, r8, 1
/* 8007AED8 00077E18  90 E9 00 08 */	stw r7, 8(r9)
/* 8007AEDC 00077E1C  99 68 00 00 */	stb r11, 0(r8)
/* 8007AEE0 00077E20  81 2D 8E A8 */	lwz r9, __GDCurrentDL@sda21(r13)
/* 8007AEE4 00077E24  81 09 00 08 */	lwz r8, 8(r9)
/* 8007AEE8 00077E28  38 E8 00 01 */	addi r7, r8, 1
/* 8007AEEC 00077E2C  90 E9 00 08 */	stw r7, 8(r9)
/* 8007AEF0 00077E30  99 48 00 00 */	stb r10, 0(r8)
/* 8007AEF4 00077E34  81 2D 8E A8 */	lwz r9, __GDCurrentDL@sda21(r13)
/* 8007AEF8 00077E38  81 09 00 08 */	lwz r8, 8(r9)
/* 8007AEFC 00077E3C  38 E8 00 01 */	addi r7, r8, 1
/* 8007AF00 00077E40  90 E9 00 08 */	stw r7, 8(r9)
/* 8007AF04 00077E44  9B 28 00 00 */	stb r25, 0(r8)
/* 8007AF08 00077E48  81 0D 8E A8 */	lwz r8, __GDCurrentDL@sda21(r13)
/* 8007AF0C 00077E4C  81 24 00 60 */	lwz r9, 0x60(r4)
/* 8007AF10 00077E50  38 84 00 04 */	addi r4, r4, 4
/* 8007AF14 00077E54  80 E8 00 08 */	lwz r7, 8(r8)
/* 8007AF18 00077E58  7D 2B 33 78 */	or r11, r9, r6
/* 8007AF1C 00077E5C  38 C7 00 01 */	addi r6, r7, 1
/* 8007AF20 00077E60  90 C8 00 08 */	stw r6, 8(r8)
/* 8007AF24 00077E64  55 6A 46 3E */	srwi r10, r11, 0x18
/* 8007AF28 00077E68  55 69 86 3E */	rlwinm r9, r11, 0x10, 0x18, 0x1f
/* 8007AF2C 00077E6C  55 68 C6 3E */	rlwinm r8, r11, 0x18, 0x18, 0x1f
/* 8007AF30 00077E70  98 07 00 00 */	stb r0, 0(r7)
/* 8007AF34 00077E74  80 ED 8E A8 */	lwz r7, __GDCurrentDL@sda21(r13)
/* 8007AF38 00077E78  80 C7 00 08 */	lwz r6, 8(r7)
/* 8007AF3C 00077E7C  38 06 00 01 */	addi r0, r6, 1
/* 8007AF40 00077E80  90 07 00 08 */	stw r0, 8(r7)
/* 8007AF44 00077E84  99 46 00 00 */	stb r10, 0(r6)
/* 8007AF48 00077E88  80 ED 8E A8 */	lwz r7, __GDCurrentDL@sda21(r13)
/* 8007AF4C 00077E8C  80 C7 00 08 */	lwz r6, 8(r7)
/* 8007AF50 00077E90  38 06 00 01 */	addi r0, r6, 1
/* 8007AF54 00077E94  90 07 00 08 */	stw r0, 8(r7)
/* 8007AF58 00077E98  99 26 00 00 */	stb r9, 0(r6)
/* 8007AF5C 00077E9C  80 ED 8E A8 */	lwz r7, __GDCurrentDL@sda21(r13)
/* 8007AF60 00077EA0  80 C7 00 08 */	lwz r6, 8(r7)
/* 8007AF64 00077EA4  38 06 00 01 */	addi r0, r6, 1
/* 8007AF68 00077EA8  90 07 00 08 */	stw r0, 8(r7)
/* 8007AF6C 00077EAC  99 06 00 00 */	stb r8, 0(r6)
/* 8007AF70 00077EB0  80 ED 8E A8 */	lwz r7, __GDCurrentDL@sda21(r13)
/* 8007AF74 00077EB4  80 C7 00 08 */	lwz r6, 8(r7)
/* 8007AF78 00077EB8  38 06 00 01 */	addi r0, r6, 1
/* 8007AF7C 00077EBC  90 07 00 08 */	stw r0, 8(r7)
/* 8007AF80 00077EC0  99 66 00 00 */	stb r11, 0(r6)
/* 8007AF84 00077EC4  42 00 FE 88 */	bdnz .L_8007AE0C
.L_8007AF88:
/* 8007AF88 00077EC8  3C 60 80 51 */	lis r3, j3dTevSwapTableTable@ha
/* 8007AF8C 00077ECC  38 00 00 04 */	li r0, 4
/* 8007AF90 00077ED0  38 63 19 94 */	addi r3, r3, j3dTevSwapTableTable@l
/* 8007AF94 00077ED4  38 C0 00 00 */	li r6, 0
/* 8007AF98 00077ED8  38 80 00 00 */	li r4, 0
/* 8007AF9C 00077EDC  7C 09 03 A6 */	mtctr r0
.L_8007AFA0:
/* 8007AFA0 00077EE0  38 A4 00 59 */	addi r5, r4, 0x59
/* 8007AFA4 00077EE4  81 8D 8E A8 */	lwz r12, __GDCurrentDL@sda21(r13)
/* 8007AFA8 00077EE8  7C FE 28 AE */	lbzx r7, r30, r5
/* 8007AFAC 00077EEC  54 C0 0F FE */	srwi r0, r6, 0x1f
/* 8007AFB0 00077EF0  81 6C 00 08 */	lwz r11, 8(r12)
/* 8007AFB4 00077EF4  7C 00 32 14 */	add r0, r0, r6
/* 8007AFB8 00077EF8  54 E7 10 3A */	slwi r7, r7, 2
/* 8007AFBC 00077EFC  8B 5E 00 58 */	lbz r26, 0x58(r30)
/* 8007AFC0 00077F00  7D 23 3A 14 */	add r9, r3, r7
/* 8007AFC4 00077F04  8B 7E 00 56 */	lbz r27, 0x56(r30)
/* 8007AFC8 00077F08  89 09 00 01 */	lbz r8, 1(r9)
/* 8007AFCC 00077F0C  7C 07 0E 70 */	srawi r7, r0, 1
/* 8007AFD0 00077F10  8B 29 00 00 */	lbz r25, 0(r9)
/* 8007AFD4 00077F14  39 4B 00 01 */	addi r10, r11, 1
/* 8007AFD8 00077F18  8B 9E 00 57 */	lbz r28, 0x57(r30)
/* 8007AFDC 00077F1C  55 09 10 3A */	slwi r9, r8, 2
/* 8007AFE0 00077F20  8B FE 00 55 */	lbz r31, 0x55(r30)
/* 8007AFE4 00077F24  38 00 00 61 */	li r0, 0x61
/* 8007AFE8 00077F28  7F 29 4B 78 */	or r9, r25, r9
/* 8007AFEC 00077F2C  39 06 00 02 */	addi r8, r6, 2
/* 8007AFF0 00077F30  91 4C 00 08 */	stw r10, 8(r12)
/* 8007AFF4 00077F34  57 EA 20 36 */	slwi r10, r31, 4
/* 8007AFF8 00077F38  7D 49 4B 78 */	or r9, r10, r9
/* 8007AFFC 00077F3C  3B A7 00 F6 */	addi r29, r7, 0xf6
/* 8007B000 00077F40  98 0B 00 00 */	stb r0, 0(r11)
/* 8007B004 00077F44  57 8B 48 2C */	slwi r11, r28, 9
/* 8007B008 00077F48  55 07 0F FE */	srwi r7, r8, 0x1f
/* 8007B00C 00077F4C  57 6C 70 22 */	slwi r12, r27, 0xe
/* 8007B010 00077F50  7C E7 42 14 */	add r7, r7, r8
/* 8007B014 00077F54  7D 6B 4B 78 */	or r11, r11, r9
/* 8007B018 00077F58  81 4D 8E A8 */	lwz r10, __GDCurrentDL@sda21(r13)
/* 8007B01C 00077F5C  57 5F 98 18 */	slwi r31, r26, 0x13
/* 8007B020 00077F60  7D 88 5B 78 */	or r8, r12, r11
/* 8007B024 00077F64  7C E7 0E 70 */	srawi r7, r7, 1
/* 8007B028 00077F68  7F F9 43 78 */	or r25, r31, r8
/* 8007B02C 00077F6C  81 2A 00 08 */	lwz r9, 8(r10)
/* 8007B030 00077F70  53 B9 C0 0E */	rlwimi r25, r29, 0x18, 0, 7
/* 8007B034 00077F74  39 67 00 F6 */	addi r11, r7, 0xf6
/* 8007B038 00077F78  39 09 00 01 */	addi r8, r9, 1
/* 8007B03C 00077F7C  91 0A 00 08 */	stw r8, 8(r10)
/* 8007B040 00077F80  57 27 46 3E */	srwi r7, r25, 0x18
/* 8007B044 00077F84  57 2C 86 3E */	rlwinm r12, r25, 0x10, 0x18, 0x1f
/* 8007B048 00077F88  57 2A C6 3E */	rlwinm r10, r25, 0x18, 0x18, 0x1f
/* 8007B04C 00077F8C  98 E9 00 00 */	stb r7, 0(r9)
/* 8007B050 00077F90  81 2D 8E A8 */	lwz r9, __GDCurrentDL@sda21(r13)
/* 8007B054 00077F94  81 09 00 08 */	lwz r8, 8(r9)
/* 8007B058 00077F98  38 E8 00 01 */	addi r7, r8, 1
/* 8007B05C 00077F9C  90 E9 00 08 */	stw r7, 8(r9)
/* 8007B060 00077FA0  99 88 00 00 */	stb r12, 0(r8)
/* 8007B064 00077FA4  81 2D 8E A8 */	lwz r9, __GDCurrentDL@sda21(r13)
/* 8007B068 00077FA8  81 09 00 08 */	lwz r8, 8(r9)
/* 8007B06C 00077FAC  38 E8 00 01 */	addi r7, r8, 1
/* 8007B070 00077FB0  90 E9 00 08 */	stw r7, 8(r9)
/* 8007B074 00077FB4  99 48 00 00 */	stb r10, 0(r8)
/* 8007B078 00077FB8  81 2D 8E A8 */	lwz r9, __GDCurrentDL@sda21(r13)
/* 8007B07C 00077FBC  81 09 00 08 */	lwz r8, 8(r9)
/* 8007B080 00077FC0  38 E8 00 01 */	addi r7, r8, 1
/* 8007B084 00077FC4  90 E9 00 08 */	stw r7, 8(r9)
/* 8007B088 00077FC8  9B 28 00 00 */	stb r25, 0(r8)
/* 8007B08C 00077FCC  7C BE 28 AE */	lbzx r5, r30, r5
/* 8007B090 00077FD0  83 ED 8E A8 */	lwz r31, __GDCurrentDL@sda21(r13)
/* 8007B094 00077FD4  54 A5 10 3A */	slwi r5, r5, 2
/* 8007B098 00077FD8  88 FE 00 58 */	lbz r7, 0x58(r30)
/* 8007B09C 00077FDC  7F 23 2A 14 */	add r25, r3, r5
/* 8007B0A0 00077FE0  89 3E 00 56 */	lbz r9, 0x56(r30)
/* 8007B0A4 00077FE4  88 B9 00 03 */	lbz r5, 3(r25)
/* 8007B0A8 00077FE8  54 EA 98 18 */	slwi r10, r7, 0x13
/* 8007B0AC 00077FEC  81 9F 00 08 */	lwz r12, 8(r31)
/* 8007B0B0 00077FF0  55 29 70 22 */	slwi r9, r9, 0xe
/* 8007B0B4 00077FF4  89 1E 00 57 */	lbz r8, 0x57(r30)
/* 8007B0B8 00077FF8  54 A5 10 3A */	slwi r5, r5, 2
/* 8007B0BC 00077FFC  8B 59 00 02 */	lbz r26, 2(r25)
/* 8007B0C0 00078000  38 EC 00 01 */	addi r7, r12, 1
/* 8007B0C4 00078004  8B 3E 00 55 */	lbz r25, 0x55(r30)
/* 8007B0C8 00078008  55 08 48 2C */	slwi r8, r8, 9
/* 8007B0CC 0007800C  7F 45 2B 78 */	or r5, r26, r5
/* 8007B0D0 00078010  90 FF 00 08 */	stw r7, 8(r31)
/* 8007B0D4 00078014  57 27 20 36 */	slwi r7, r25, 4
/* 8007B0D8 00078018  7C E5 2B 78 */	or r5, r7, r5
/* 8007B0DC 0007801C  98 0C 00 00 */	stb r0, 0(r12)
/* 8007B0E0 00078020  7D 00 2B 78 */	or r0, r8, r5
/* 8007B0E4 00078024  7D 20 03 78 */	or r0, r9, r0
/* 8007B0E8 00078028  80 ED 8E A8 */	lwz r7, __GDCurrentDL@sda21(r13)
/* 8007B0EC 0007802C  7D 4A 03 78 */	or r10, r10, r0
/* 8007B0F0 00078030  51 6A C0 0E */	rlwimi r10, r11, 0x18, 0, 7
/* 8007B0F4 00078034  80 A7 00 08 */	lwz r5, 8(r7)
/* 8007B0F8 00078038  55 48 46 3E */	srwi r8, r10, 0x18
/* 8007B0FC 0007803C  38 05 00 01 */	addi r0, r5, 1
/* 8007B100 00078040  90 07 00 08 */	stw r0, 8(r7)
/* 8007B104 00078044  99 05 00 00 */	stb r8, 0(r5)
/* 8007B108 00078048  80 ED 8E A8 */	lwz r7, __GDCurrentDL@sda21(r13)
/* 8007B10C 0007804C  55 49 86 3E */	rlwinm r9, r10, 0x10, 0x18, 0x1f
/* 8007B110 00078050  55 48 C6 3E */	rlwinm r8, r10, 0x18, 0x18, 0x1f
/* 8007B114 00078054  38 84 00 01 */	addi r4, r4, 1
/* 8007B118 00078058  80 A7 00 08 */	lwz r5, 8(r7)
/* 8007B11C 0007805C  38 C6 00 04 */	addi r6, r6, 4
/* 8007B120 00078060  38 05 00 01 */	addi r0, r5, 1
/* 8007B124 00078064  90 07 00 08 */	stw r0, 8(r7)
/* 8007B128 00078068  99 25 00 00 */	stb r9, 0(r5)
/* 8007B12C 0007806C  80 ED 8E A8 */	lwz r7, __GDCurrentDL@sda21(r13)
/* 8007B130 00078070  80 A7 00 08 */	lwz r5, 8(r7)
/* 8007B134 00078074  38 05 00 01 */	addi r0, r5, 1
/* 8007B138 00078078  90 07 00 08 */	stw r0, 8(r7)
/* 8007B13C 0007807C  99 05 00 00 */	stb r8, 0(r5)
/* 8007B140 00078080  80 ED 8E A8 */	lwz r7, __GDCurrentDL@sda21(r13)
/* 8007B144 00078084  80 A7 00 08 */	lwz r5, 8(r7)
/* 8007B148 00078088  38 05 00 01 */	addi r0, r5, 1
/* 8007B14C 0007808C  90 07 00 08 */	stw r0, 8(r7)
/* 8007B150 00078090  99 45 00 00 */	stb r10, 0(r5)
/* 8007B154 00078094  42 00 FE 4C */	bdnz .L_8007AFA0
/* 8007B158 00078098  BB 21 00 24 */	lmw r25, 0x24(r1)
/* 8007B15C 0007809C  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8007B160 000780A0  7C 08 03 A6 */	mtlr r0
/* 8007B164 000780A4  38 21 00 40 */	addi r1, r1, 0x40
/* 8007B168 000780A8  4E 80 00 20 */	blr 
.endfn load__12J3DTevBlock2Fv

.fn load__12J3DTevBlock4Fv, global
/* 8007B16C 000780AC  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 8007B170 000780B0  7C 08 02 A6 */	mflr r0
/* 8007B174 000780B4  90 01 00 44 */	stw r0, 0x44(r1)
/* 8007B178 000780B8  BF 21 00 24 */	stmw r25, 0x24(r1)
/* 8007B17C 000780BC  7C 7B 1B 78 */	mr r27, r3
/* 8007B180 000780C0  7F 79 DB 78 */	mr r25, r27
/* 8007B184 000780C4  3B 40 00 00 */	li r26, 0
/* 8007B188 000780C8  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 8007B18C 000780CC  8B A3 00 20 */	lbz r29, 0x20(r3)
/* 8007B190 000780D0  80 64 00 00 */	lwz r3, 0(r4)
/* 8007B194 000780D4  80 04 00 08 */	lwz r0, 8(r4)
/* 8007B198 000780D8  7C 03 00 50 */	subf r0, r3, r0
/* 8007B19C 000780DC  90 1B 00 04 */	stw r0, 4(r27)
.L_8007B1A0:
/* 8007B1A0 000780E0  A0 19 00 08 */	lhz r0, 8(r25)
/* 8007B1A4 000780E4  28 00 FF FF */	cmplwi r0, 0xffff
/* 8007B1A8 000780E8  41 82 00 10 */	beq .L_8007B1B8
/* 8007B1AC 000780EC  7F 43 D3 78 */	mr r3, r26
/* 8007B1B0 000780F0  38 99 00 08 */	addi r4, r25, 8
/* 8007B1B4 000780F4  4B FE A1 D5 */	bl loadTexNo__FUlRCUs
.L_8007B1B8:
/* 8007B1B8 000780F8  3B 5A 00 01 */	addi r26, r26, 1
/* 8007B1BC 000780FC  3B 39 00 02 */	addi r25, r25, 2
/* 8007B1C0 00078100  28 1A 00 04 */	cmplwi r26, 4
/* 8007B1C4 00078104  41 80 FF DC */	blt .L_8007B1A0
/* 8007B1C8 00078108  3C 60 80 51 */	lis r3, sTexCoordScaleTable__6J3DSys@ha
/* 8007B1CC 0007810C  7F 7E DB 78 */	mr r30, r27
/* 8007B1D0 00078110  3B E3 F4 1C */	addi r31, r3, sTexCoordScaleTable__6J3DSys@l
/* 8007B1D4 00078114  3B 80 00 00 */	li r28, 0
/* 8007B1D8 00078118  48 00 00 C8 */	b .L_8007B2A0
.L_8007B1DC:
/* 8007B1DC 0007811C  38 1C 00 01 */	addi r0, r28, 1
/* 8007B1E0 00078120  88 9E 00 10 */	lbz r4, 0x10(r30)
/* 8007B1E4 00078124  54 00 10 3A */	slwi r0, r0, 2
/* 8007B1E8 00078128  88 BE 00 11 */	lbz r5, 0x11(r30)
/* 8007B1EC 0007812C  7F 3B 02 14 */	add r25, r27, r0
/* 8007B1F0 00078130  88 DE 00 12 */	lbz r6, 0x12(r30)
/* 8007B1F4 00078134  88 F9 00 10 */	lbz r7, 0x10(r25)
/* 8007B1F8 00078138  7F 83 E3 78 */	mr r3, r28
/* 8007B1FC 0007813C  89 19 00 11 */	lbz r8, 0x11(r25)
/* 8007B200 00078140  89 39 00 12 */	lbz r9, 0x12(r25)
/* 8007B204 00078144  4B FF B2 F5 */	bl J3DGDSetTevOrder__F13_GXTevStageID13_GXTexCoordID11_GXTexMapID12_GXChannelID13_GXTexCoordID11_GXTexMapID12_GXChannelID
/* 8007B208 00078148  88 7E 00 11 */	lbz r3, 0x11(r30)
/* 8007B20C 0007814C  38 C0 00 00 */	li r6, 0
/* 8007B210 00078150  88 1E 00 10 */	lbz r0, 0x10(r30)
/* 8007B214 00078154  39 20 00 00 */	li r9, 0
/* 8007B218 00078158  54 63 1E B8 */	rlwinm r3, r3, 3, 0x1a, 0x1c
/* 8007B21C 0007815C  7C FF 1A 14 */	add r7, r31, r3
/* 8007B220 00078160  A0 87 00 04 */	lhz r4, 4(r7)
/* 8007B224 00078164  54 03 07 7E */	clrlwi r3, r0, 0x1d
/* 8007B228 00078168  A0 07 00 06 */	lhz r0, 6(r7)
/* 8007B22C 0007816C  20 A4 00 01 */	subfic r5, r4, 1
/* 8007B230 00078170  A0 87 00 00 */	lhz r4, 0(r7)
/* 8007B234 00078174  20 00 00 01 */	subfic r0, r0, 1
/* 8007B238 00078178  A0 E7 00 02 */	lhz r7, 2(r7)
/* 8007B23C 0007817C  7C A5 00 34 */	cntlzw r5, r5
/* 8007B240 00078180  7C 00 00 34 */	cntlzw r0, r0
/* 8007B244 00078184  54 A5 DE 3E */	rlwinm r5, r5, 0x1b, 0x18, 0x1f
/* 8007B248 00078188  54 08 DE 3E */	rlwinm r8, r0, 0x1b, 0x18, 0x1f
/* 8007B24C 0007818C  4B FF A3 D9 */	bl J3DGDSetTexCoordScale2__F13_GXTexCoordIDUsUcUcUsUcUc
/* 8007B250 00078190  88 79 00 11 */	lbz r3, 0x11(r25)
/* 8007B254 00078194  38 C0 00 00 */	li r6, 0
/* 8007B258 00078198  88 19 00 10 */	lbz r0, 0x10(r25)
/* 8007B25C 0007819C  39 20 00 00 */	li r9, 0
/* 8007B260 000781A0  54 63 1E B8 */	rlwinm r3, r3, 3, 0x1a, 0x1c
/* 8007B264 000781A4  7C FF 1A 14 */	add r7, r31, r3
/* 8007B268 000781A8  A0 87 00 04 */	lhz r4, 4(r7)
/* 8007B26C 000781AC  54 03 07 7E */	clrlwi r3, r0, 0x1d
/* 8007B270 000781B0  A0 07 00 06 */	lhz r0, 6(r7)
/* 8007B274 000781B4  20 A4 00 01 */	subfic r5, r4, 1
/* 8007B278 000781B8  A0 87 00 00 */	lhz r4, 0(r7)
/* 8007B27C 000781BC  20 00 00 01 */	subfic r0, r0, 1
/* 8007B280 000781C0  A0 E7 00 02 */	lhz r7, 2(r7)
/* 8007B284 000781C4  7C A5 00 34 */	cntlzw r5, r5
/* 8007B288 000781C8  7C 00 00 34 */	cntlzw r0, r0
/* 8007B28C 000781CC  54 A5 DE 3E */	rlwinm r5, r5, 0x1b, 0x18, 0x1f
/* 8007B290 000781D0  54 08 DE 3E */	rlwinm r8, r0, 0x1b, 0x18, 0x1f
/* 8007B294 000781D4  4B FF A3 91 */	bl J3DGDSetTexCoordScale2__F13_GXTexCoordIDUsUcUcUsUcUc
/* 8007B298 000781D8  3B DE 00 08 */	addi r30, r30, 8
/* 8007B29C 000781DC  3B 9C 00 02 */	addi r28, r28, 2
.L_8007B2A0:
/* 8007B2A0 000781E0  7C 1C E8 40 */	cmplw r28, r29
/* 8007B2A4 000781E4  41 80 FF 38 */	blt .L_8007B1DC
/* 8007B2A8 000781E8  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 8007B2AC 000781EC  7F 79 DB 78 */	mr r25, r27
/* 8007B2B0 000781F0  3B 40 00 00 */	li r26, 0
/* 8007B2B4 000781F4  80 64 00 00 */	lwz r3, 0(r4)
/* 8007B2B8 000781F8  80 04 00 08 */	lwz r0, 8(r4)
/* 8007B2BC 000781FC  7C 03 00 50 */	subf r0, r3, r0
/* 8007B2C0 00078200  90 1B 00 90 */	stw r0, 0x90(r27)
.L_8007B2C4:
/* 8007B2C4 00078204  80 B9 00 42 */	lwz r5, 0x42(r25)
/* 8007B2C8 00078208  38 7A 00 01 */	addi r3, r26, 1
/* 8007B2CC 0007820C  80 19 00 46 */	lwz r0, 0x46(r25)
/* 8007B2D0 00078210  38 81 00 0C */	addi r4, r1, 0xc
/* 8007B2D4 00078214  90 A1 00 0C */	stw r5, 0xc(r1)
/* 8007B2D8 00078218  90 01 00 10 */	stw r0, 0x10(r1)
/* 8007B2DC 0007821C  4B FF B5 0D */	bl J3DGDSetTevColorS10__F11_GXTevRegID11_GXColorS10
/* 8007B2E0 00078220  3B 5A 00 01 */	addi r26, r26, 1
/* 8007B2E4 00078224  3B 39 00 08 */	addi r25, r25, 8
/* 8007B2E8 00078228  28 1A 00 03 */	cmplwi r26, 3
/* 8007B2EC 0007822C  41 80 FF D8 */	blt .L_8007B2C4
/* 8007B2F0 00078230  3B 40 00 00 */	li r26, 0
/* 8007B2F4 00078234  7F 79 DB 78 */	mr r25, r27
.L_8007B2F8:
/* 8007B2F8 00078238  80 19 00 62 */	lwz r0, 0x62(r25)
/* 8007B2FC 0007823C  7F 43 D3 78 */	mr r3, r26
/* 8007B300 00078240  38 81 00 08 */	addi r4, r1, 8
/* 8007B304 00078244  90 01 00 08 */	stw r0, 8(r1)
/* 8007B308 00078248  4B FF B3 79 */	bl J3DGDSetTevKColor__F14_GXTevKColorID8_GXColor
/* 8007B30C 0007824C  3B 5A 00 01 */	addi r26, r26, 1
/* 8007B310 00078250  3B 39 00 04 */	addi r25, r25, 4
/* 8007B314 00078254  28 1A 00 04 */	cmplwi r26, 4
/* 8007B318 00078258  41 80 FF E0 */	blt .L_8007B2F8
/* 8007B31C 0007825C  7F 63 DB 78 */	mr r3, r27
/* 8007B320 00078260  7F 64 DB 78 */	mr r4, r27
/* 8007B324 00078264  38 A0 00 00 */	li r5, 0
/* 8007B328 00078268  7F A9 03 A6 */	mtctr r29
/* 8007B32C 0007826C  28 1D 00 00 */	cmplwi r29, 0
/* 8007B330 00078270  40 81 01 80 */	ble .L_8007B4B0
.L_8007B334:
/* 8007B334 00078274  81 2D 8E A8 */	lwz r9, __GDCurrentDL@sda21(r13)
/* 8007B338 00078278  38 C5 00 10 */	addi r6, r5, 0x10
/* 8007B33C 0007827C  83 23 00 21 */	lwz r25, 0x21(r3)
/* 8007B340 00078280  38 00 00 61 */	li r0, 0x61
/* 8007B344 00078284  81 09 00 08 */	lwz r8, 8(r9)
/* 8007B348 00078288  54 C6 C0 0E */	slwi r6, r6, 0x18
/* 8007B34C 0007828C  57 2C 46 3E */	srwi r12, r25, 0x18
/* 8007B350 00078290  57 2B 86 3E */	rlwinm r11, r25, 0x10, 0x18, 0x1f
/* 8007B354 00078294  38 E8 00 01 */	addi r7, r8, 1
/* 8007B358 00078298  57 2A C6 3E */	rlwinm r10, r25, 0x18, 0x18, 0x1f
/* 8007B35C 0007829C  90 E9 00 08 */	stw r7, 8(r9)
/* 8007B360 000782A0  38 A5 00 01 */	addi r5, r5, 1
/* 8007B364 000782A4  98 08 00 00 */	stb r0, 0(r8)
/* 8007B368 000782A8  81 2D 8E A8 */	lwz r9, __GDCurrentDL@sda21(r13)
/* 8007B36C 000782AC  81 09 00 08 */	lwz r8, 8(r9)
/* 8007B370 000782B0  38 E8 00 01 */	addi r7, r8, 1
/* 8007B374 000782B4  90 E9 00 08 */	stw r7, 8(r9)
/* 8007B378 000782B8  99 88 00 00 */	stb r12, 0(r8)
/* 8007B37C 000782BC  81 2D 8E A8 */	lwz r9, __GDCurrentDL@sda21(r13)
/* 8007B380 000782C0  81 09 00 08 */	lwz r8, 8(r9)
/* 8007B384 000782C4  38 E8 00 01 */	addi r7, r8, 1
/* 8007B388 000782C8  90 E9 00 08 */	stw r7, 8(r9)
/* 8007B38C 000782CC  99 68 00 00 */	stb r11, 0(r8)
/* 8007B390 000782D0  81 2D 8E A8 */	lwz r9, __GDCurrentDL@sda21(r13)
/* 8007B394 000782D4  81 09 00 08 */	lwz r8, 8(r9)
/* 8007B398 000782D8  38 E8 00 01 */	addi r7, r8, 1
/* 8007B39C 000782DC  90 E9 00 08 */	stw r7, 8(r9)
/* 8007B3A0 000782E0  99 48 00 00 */	stb r10, 0(r8)
/* 8007B3A4 000782E4  81 2D 8E A8 */	lwz r9, __GDCurrentDL@sda21(r13)
/* 8007B3A8 000782E8  81 09 00 08 */	lwz r8, 8(r9)
/* 8007B3AC 000782EC  38 E8 00 01 */	addi r7, r8, 1
/* 8007B3B0 000782F0  90 E9 00 08 */	stw r7, 8(r9)
/* 8007B3B4 000782F4  9B 28 00 00 */	stb r25, 0(r8)
/* 8007B3B8 000782F8  81 2D 8E A8 */	lwz r9, __GDCurrentDL@sda21(r13)
/* 8007B3BC 000782FC  83 23 00 25 */	lwz r25, 0x25(r3)
/* 8007B3C0 00078300  38 63 00 08 */	addi r3, r3, 8
/* 8007B3C4 00078304  81 09 00 08 */	lwz r8, 8(r9)
/* 8007B3C8 00078308  57 2C 46 3E */	srwi r12, r25, 0x18
/* 8007B3CC 0007830C  57 2B 86 3E */	rlwinm r11, r25, 0x10, 0x18, 0x1f
/* 8007B3D0 00078310  38 E8 00 01 */	addi r7, r8, 1
/* 8007B3D4 00078314  57 2A C6 3E */	rlwinm r10, r25, 0x18, 0x18, 0x1f
/* 8007B3D8 00078318  90 E9 00 08 */	stw r7, 8(r9)
/* 8007B3DC 0007831C  98 08 00 00 */	stb r0, 0(r8)
/* 8007B3E0 00078320  81 2D 8E A8 */	lwz r9, __GDCurrentDL@sda21(r13)
/* 8007B3E4 00078324  81 09 00 08 */	lwz r8, 8(r9)
/* 8007B3E8 00078328  38 E8 00 01 */	addi r7, r8, 1
/* 8007B3EC 0007832C  90 E9 00 08 */	stw r7, 8(r9)
/* 8007B3F0 00078330  99 88 00 00 */	stb r12, 0(r8)
/* 8007B3F4 00078334  81 2D 8E A8 */	lwz r9, __GDCurrentDL@sda21(r13)
/* 8007B3F8 00078338  81 09 00 08 */	lwz r8, 8(r9)
/* 8007B3FC 0007833C  38 E8 00 01 */	addi r7, r8, 1
/* 8007B400 00078340  90 E9 00 08 */	stw r7, 8(r9)
/* 8007B404 00078344  99 68 00 00 */	stb r11, 0(r8)
/* 8007B408 00078348  81 2D 8E A8 */	lwz r9, __GDCurrentDL@sda21(r13)
/* 8007B40C 0007834C  81 09 00 08 */	lwz r8, 8(r9)
/* 8007B410 00078350  38 E8 00 01 */	addi r7, r8, 1
/* 8007B414 00078354  90 E9 00 08 */	stw r7, 8(r9)
/* 8007B418 00078358  99 48 00 00 */	stb r10, 0(r8)
/* 8007B41C 0007835C  81 2D 8E A8 */	lwz r9, __GDCurrentDL@sda21(r13)
/* 8007B420 00078360  81 09 00 08 */	lwz r8, 8(r9)
/* 8007B424 00078364  38 E8 00 01 */	addi r7, r8, 1
/* 8007B428 00078368  90 E9 00 08 */	stw r7, 8(r9)
/* 8007B42C 0007836C  9B 28 00 00 */	stb r25, 0(r8)
/* 8007B430 00078370  81 0D 8E A8 */	lwz r8, __GDCurrentDL@sda21(r13)
/* 8007B434 00078374  81 24 00 80 */	lwz r9, 0x80(r4)
/* 8007B438 00078378  38 84 00 04 */	addi r4, r4, 4
/* 8007B43C 0007837C  80 E8 00 08 */	lwz r7, 8(r8)
/* 8007B440 00078380  7D 2B 33 78 */	or r11, r9, r6
/* 8007B444 00078384  38 C7 00 01 */	addi r6, r7, 1
/* 8007B448 00078388  90 C8 00 08 */	stw r6, 8(r8)
/* 8007B44C 0007838C  55 6A 46 3E */	srwi r10, r11, 0x18
/* 8007B450 00078390  55 69 86 3E */	rlwinm r9, r11, 0x10, 0x18, 0x1f
/* 8007B454 00078394  55 68 C6 3E */	rlwinm r8, r11, 0x18, 0x18, 0x1f
/* 8007B458 00078398  98 07 00 00 */	stb r0, 0(r7)
/* 8007B45C 0007839C  80 ED 8E A8 */	lwz r7, __GDCurrentDL@sda21(r13)
/* 8007B460 000783A0  80 C7 00 08 */	lwz r6, 8(r7)
/* 8007B464 000783A4  38 06 00 01 */	addi r0, r6, 1
/* 8007B468 000783A8  90 07 00 08 */	stw r0, 8(r7)
/* 8007B46C 000783AC  99 46 00 00 */	stb r10, 0(r6)
/* 8007B470 000783B0  80 ED 8E A8 */	lwz r7, __GDCurrentDL@sda21(r13)
/* 8007B474 000783B4  80 C7 00 08 */	lwz r6, 8(r7)
/* 8007B478 000783B8  38 06 00 01 */	addi r0, r6, 1
/* 8007B47C 000783BC  90 07 00 08 */	stw r0, 8(r7)
/* 8007B480 000783C0  99 26 00 00 */	stb r9, 0(r6)
/* 8007B484 000783C4  80 ED 8E A8 */	lwz r7, __GDCurrentDL@sda21(r13)
/* 8007B488 000783C8  80 C7 00 08 */	lwz r6, 8(r7)
/* 8007B48C 000783CC  38 06 00 01 */	addi r0, r6, 1
/* 8007B490 000783D0  90 07 00 08 */	stw r0, 8(r7)
/* 8007B494 000783D4  99 06 00 00 */	stb r8, 0(r6)
/* 8007B498 000783D8  80 ED 8E A8 */	lwz r7, __GDCurrentDL@sda21(r13)
/* 8007B49C 000783DC  80 C7 00 08 */	lwz r6, 8(r7)
/* 8007B4A0 000783E0  38 06 00 01 */	addi r0, r6, 1
/* 8007B4A4 000783E4  90 07 00 08 */	stw r0, 8(r7)
/* 8007B4A8 000783E8  99 66 00 00 */	stb r11, 0(r6)
/* 8007B4AC 000783EC  42 00 FE 88 */	bdnz .L_8007B334
.L_8007B4B0:
/* 8007B4B0 000783F0  3C 60 80 51 */	lis r3, j3dTevSwapTableTable@ha
/* 8007B4B4 000783F4  38 00 00 04 */	li r0, 4
/* 8007B4B8 000783F8  38 63 19 94 */	addi r3, r3, j3dTevSwapTableTable@l
/* 8007B4BC 000783FC  38 C0 00 00 */	li r6, 0
/* 8007B4C0 00078400  38 80 00 00 */	li r4, 0
/* 8007B4C4 00078404  7C 09 03 A6 */	mtctr r0
.L_8007B4C8:
/* 8007B4C8 00078408  38 A4 00 7A */	addi r5, r4, 0x7a
/* 8007B4CC 0007840C  81 8D 8E A8 */	lwz r12, __GDCurrentDL@sda21(r13)
/* 8007B4D0 00078410  7C FB 28 AE */	lbzx r7, r27, r5
/* 8007B4D4 00078414  54 C0 0F FE */	srwi r0, r6, 0x1f
/* 8007B4D8 00078418  81 6C 00 08 */	lwz r11, 8(r12)
/* 8007B4DC 0007841C  7C 00 32 14 */	add r0, r0, r6
/* 8007B4E0 00078420  54 E7 10 3A */	slwi r7, r7, 2
/* 8007B4E4 00078424  8B 5B 00 77 */	lbz r26, 0x77(r27)
/* 8007B4E8 00078428  7D 23 3A 14 */	add r9, r3, r7
/* 8007B4EC 0007842C  8B FB 00 73 */	lbz r31, 0x73(r27)
/* 8007B4F0 00078430  89 09 00 01 */	lbz r8, 1(r9)
/* 8007B4F4 00078434  7C 07 0E 70 */	srawi r7, r0, 1
/* 8007B4F8 00078438  8B 29 00 00 */	lbz r25, 0(r9)
/* 8007B4FC 0007843C  39 4B 00 01 */	addi r10, r11, 1
/* 8007B500 00078440  8B DB 00 76 */	lbz r30, 0x76(r27)
/* 8007B504 00078444  55 09 10 3A */	slwi r9, r8, 2
/* 8007B508 00078448  8B 9B 00 72 */	lbz r28, 0x72(r27)
/* 8007B50C 0007844C  38 00 00 61 */	li r0, 0x61
/* 8007B510 00078450  7F 29 4B 78 */	or r9, r25, r9
/* 8007B514 00078454  39 06 00 02 */	addi r8, r6, 2
/* 8007B518 00078458  91 4C 00 08 */	stw r10, 8(r12)
/* 8007B51C 0007845C  57 8A 20 36 */	slwi r10, r28, 4
/* 8007B520 00078460  7D 49 4B 78 */	or r9, r10, r9
/* 8007B524 00078464  3B A7 00 F6 */	addi r29, r7, 0xf6
/* 8007B528 00078468  98 0B 00 00 */	stb r0, 0(r11)
/* 8007B52C 0007846C  57 CB 48 2C */	slwi r11, r30, 9
/* 8007B530 00078470  55 07 0F FE */	srwi r7, r8, 0x1f
/* 8007B534 00078474  57 EC 70 22 */	slwi r12, r31, 0xe
/* 8007B538 00078478  7C E7 42 14 */	add r7, r7, r8
/* 8007B53C 0007847C  7D 6B 4B 78 */	or r11, r11, r9
/* 8007B540 00078480  81 4D 8E A8 */	lwz r10, __GDCurrentDL@sda21(r13)
/* 8007B544 00078484  57 5C 98 18 */	slwi r28, r26, 0x13
/* 8007B548 00078488  7D 88 5B 78 */	or r8, r12, r11
/* 8007B54C 0007848C  7C E7 0E 70 */	srawi r7, r7, 1
/* 8007B550 00078490  7F 99 43 78 */	or r25, r28, r8
/* 8007B554 00078494  81 2A 00 08 */	lwz r9, 8(r10)
/* 8007B558 00078498  53 B9 C0 0E */	rlwimi r25, r29, 0x18, 0, 7
/* 8007B55C 0007849C  39 67 00 F6 */	addi r11, r7, 0xf6
/* 8007B560 000784A0  39 09 00 01 */	addi r8, r9, 1
/* 8007B564 000784A4  91 0A 00 08 */	stw r8, 8(r10)
/* 8007B568 000784A8  57 27 46 3E */	srwi r7, r25, 0x18
/* 8007B56C 000784AC  57 2C 86 3E */	rlwinm r12, r25, 0x10, 0x18, 0x1f
/* 8007B570 000784B0  57 2A C6 3E */	rlwinm r10, r25, 0x18, 0x18, 0x1f
/* 8007B574 000784B4  98 E9 00 00 */	stb r7, 0(r9)
/* 8007B578 000784B8  81 2D 8E A8 */	lwz r9, __GDCurrentDL@sda21(r13)
/* 8007B57C 000784BC  81 09 00 08 */	lwz r8, 8(r9)
/* 8007B580 000784C0  38 E8 00 01 */	addi r7, r8, 1
/* 8007B584 000784C4  90 E9 00 08 */	stw r7, 8(r9)
/* 8007B588 000784C8  99 88 00 00 */	stb r12, 0(r8)
/* 8007B58C 000784CC  81 2D 8E A8 */	lwz r9, __GDCurrentDL@sda21(r13)
/* 8007B590 000784D0  81 09 00 08 */	lwz r8, 8(r9)
/* 8007B594 000784D4  38 E8 00 01 */	addi r7, r8, 1
/* 8007B598 000784D8  90 E9 00 08 */	stw r7, 8(r9)
/* 8007B59C 000784DC  99 48 00 00 */	stb r10, 0(r8)
/* 8007B5A0 000784E0  81 2D 8E A8 */	lwz r9, __GDCurrentDL@sda21(r13)
/* 8007B5A4 000784E4  81 09 00 08 */	lwz r8, 8(r9)
/* 8007B5A8 000784E8  38 E8 00 01 */	addi r7, r8, 1
/* 8007B5AC 000784EC  90 E9 00 08 */	stw r7, 8(r9)
/* 8007B5B0 000784F0  9B 28 00 00 */	stb r25, 0(r8)
/* 8007B5B4 000784F4  7C BB 28 AE */	lbzx r5, r27, r5
/* 8007B5B8 000784F8  83 8D 8E A8 */	lwz r28, __GDCurrentDL@sda21(r13)
/* 8007B5BC 000784FC  54 A5 10 3A */	slwi r5, r5, 2
/* 8007B5C0 00078500  88 FB 00 79 */	lbz r7, 0x79(r27)
/* 8007B5C4 00078504  7F 23 2A 14 */	add r25, r3, r5
/* 8007B5C8 00078508  89 3B 00 75 */	lbz r9, 0x75(r27)
/* 8007B5CC 0007850C  88 B9 00 03 */	lbz r5, 3(r25)
/* 8007B5D0 00078510  54 EA 98 18 */	slwi r10, r7, 0x13
/* 8007B5D4 00078514  81 9C 00 08 */	lwz r12, 8(r28)
/* 8007B5D8 00078518  55 29 70 22 */	slwi r9, r9, 0xe
/* 8007B5DC 0007851C  89 1B 00 78 */	lbz r8, 0x78(r27)
/* 8007B5E0 00078520  54 A5 10 3A */	slwi r5, r5, 2
/* 8007B5E4 00078524  8B 59 00 02 */	lbz r26, 2(r25)
/* 8007B5E8 00078528  38 EC 00 01 */	addi r7, r12, 1
/* 8007B5EC 0007852C  8B 3B 00 74 */	lbz r25, 0x74(r27)
/* 8007B5F0 00078530  55 08 48 2C */	slwi r8, r8, 9
/* 8007B5F4 00078534  7F 45 2B 78 */	or r5, r26, r5
/* 8007B5F8 00078538  90 FC 00 08 */	stw r7, 8(r28)
/* 8007B5FC 0007853C  57 27 20 36 */	slwi r7, r25, 4
/* 8007B600 00078540  7C E5 2B 78 */	or r5, r7, r5
/* 8007B604 00078544  98 0C 00 00 */	stb r0, 0(r12)
/* 8007B608 00078548  7D 00 2B 78 */	or r0, r8, r5
/* 8007B60C 0007854C  7D 20 03 78 */	or r0, r9, r0
/* 8007B610 00078550  80 ED 8E A8 */	lwz r7, __GDCurrentDL@sda21(r13)
/* 8007B614 00078554  7D 4A 03 78 */	or r10, r10, r0
/* 8007B618 00078558  51 6A C0 0E */	rlwimi r10, r11, 0x18, 0, 7
/* 8007B61C 0007855C  80 A7 00 08 */	lwz r5, 8(r7)
/* 8007B620 00078560  55 48 46 3E */	srwi r8, r10, 0x18
/* 8007B624 00078564  38 05 00 01 */	addi r0, r5, 1
/* 8007B628 00078568  90 07 00 08 */	stw r0, 8(r7)
/* 8007B62C 0007856C  99 05 00 00 */	stb r8, 0(r5)
/* 8007B630 00078570  80 ED 8E A8 */	lwz r7, __GDCurrentDL@sda21(r13)
/* 8007B634 00078574  55 49 86 3E */	rlwinm r9, r10, 0x10, 0x18, 0x1f
/* 8007B638 00078578  55 48 C6 3E */	rlwinm r8, r10, 0x18, 0x18, 0x1f
/* 8007B63C 0007857C  38 84 00 01 */	addi r4, r4, 1
/* 8007B640 00078580  80 A7 00 08 */	lwz r5, 8(r7)
/* 8007B644 00078584  38 C6 00 04 */	addi r6, r6, 4
/* 8007B648 00078588  38 05 00 01 */	addi r0, r5, 1
/* 8007B64C 0007858C  90 07 00 08 */	stw r0, 8(r7)
/* 8007B650 00078590  99 25 00 00 */	stb r9, 0(r5)
/* 8007B654 00078594  80 ED 8E A8 */	lwz r7, __GDCurrentDL@sda21(r13)
/* 8007B658 00078598  80 A7 00 08 */	lwz r5, 8(r7)
/* 8007B65C 0007859C  38 05 00 01 */	addi r0, r5, 1
/* 8007B660 000785A0  90 07 00 08 */	stw r0, 8(r7)
/* 8007B664 000785A4  99 05 00 00 */	stb r8, 0(r5)
/* 8007B668 000785A8  80 ED 8E A8 */	lwz r7, __GDCurrentDL@sda21(r13)
/* 8007B66C 000785AC  80 A7 00 08 */	lwz r5, 8(r7)
/* 8007B670 000785B0  38 05 00 01 */	addi r0, r5, 1
/* 8007B674 000785B4  90 07 00 08 */	stw r0, 8(r7)
/* 8007B678 000785B8  99 45 00 00 */	stb r10, 0(r5)
/* 8007B67C 000785BC  42 00 FE 4C */	bdnz .L_8007B4C8
/* 8007B680 000785C0  BB 21 00 24 */	lmw r25, 0x24(r1)
/* 8007B684 000785C4  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8007B688 000785C8  7C 08 03 A6 */	mtlr r0
/* 8007B68C 000785CC  38 21 00 40 */	addi r1, r1, 0x40
/* 8007B690 000785D0  4E 80 00 20 */	blr 
.endfn load__12J3DTevBlock4Fv

.fn load__13J3DTevBlock16Fv, global
/* 8007B694 000785D4  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 8007B698 000785D8  7C 08 02 A6 */	mflr r0
/* 8007B69C 000785DC  90 01 00 44 */	stw r0, 0x44(r1)
/* 8007B6A0 000785E0  BF 21 00 24 */	stmw r25, 0x24(r1)
/* 8007B6A4 000785E4  7C 7B 1B 78 */	mr r27, r3
/* 8007B6A8 000785E8  7F 79 DB 78 */	mr r25, r27
/* 8007B6AC 000785EC  3B 40 00 00 */	li r26, 0
/* 8007B6B0 000785F0  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 8007B6B4 000785F4  8B A3 00 58 */	lbz r29, 0x58(r3)
/* 8007B6B8 000785F8  80 64 00 00 */	lwz r3, 0(r4)
/* 8007B6BC 000785FC  80 04 00 08 */	lwz r0, 8(r4)
/* 8007B6C0 00078600  7C 03 00 50 */	subf r0, r3, r0
/* 8007B6C4 00078604  90 1B 00 04 */	stw r0, 4(r27)
.L_8007B6C8:
/* 8007B6C8 00078608  A0 19 00 08 */	lhz r0, 8(r25)
/* 8007B6CC 0007860C  28 00 FF FF */	cmplwi r0, 0xffff
/* 8007B6D0 00078610  41 82 00 10 */	beq .L_8007B6E0
/* 8007B6D4 00078614  7F 43 D3 78 */	mr r3, r26
/* 8007B6D8 00078618  38 99 00 08 */	addi r4, r25, 8
/* 8007B6DC 0007861C  4B FE 9C AD */	bl loadTexNo__FUlRCUs
.L_8007B6E0:
/* 8007B6E0 00078620  3B 5A 00 01 */	addi r26, r26, 1
/* 8007B6E4 00078624  3B 39 00 02 */	addi r25, r25, 2
/* 8007B6E8 00078628  28 1A 00 08 */	cmplwi r26, 8
/* 8007B6EC 0007862C  41 80 FF DC */	blt .L_8007B6C8
/* 8007B6F0 00078630  3C 60 80 51 */	lis r3, sTexCoordScaleTable__6J3DSys@ha
/* 8007B6F4 00078634  7F 7E DB 78 */	mr r30, r27
/* 8007B6F8 00078638  3B E3 F4 1C */	addi r31, r3, sTexCoordScaleTable__6J3DSys@l
/* 8007B6FC 0007863C  3B 80 00 00 */	li r28, 0
/* 8007B700 00078640  48 00 00 C8 */	b .L_8007B7C8
.L_8007B704:
/* 8007B704 00078644  38 1C 00 01 */	addi r0, r28, 1
/* 8007B708 00078648  88 9E 00 18 */	lbz r4, 0x18(r30)
/* 8007B70C 0007864C  54 00 10 3A */	slwi r0, r0, 2
/* 8007B710 00078650  88 BE 00 19 */	lbz r5, 0x19(r30)
/* 8007B714 00078654  7F 3B 02 14 */	add r25, r27, r0
/* 8007B718 00078658  88 DE 00 1A */	lbz r6, 0x1a(r30)
/* 8007B71C 0007865C  88 F9 00 18 */	lbz r7, 0x18(r25)
/* 8007B720 00078660  7F 83 E3 78 */	mr r3, r28
/* 8007B724 00078664  89 19 00 19 */	lbz r8, 0x19(r25)
/* 8007B728 00078668  89 39 00 1A */	lbz r9, 0x1a(r25)
/* 8007B72C 0007866C  4B FF AD CD */	bl J3DGDSetTevOrder__F13_GXTevStageID13_GXTexCoordID11_GXTexMapID12_GXChannelID13_GXTexCoordID11_GXTexMapID12_GXChannelID
/* 8007B730 00078670  88 7E 00 19 */	lbz r3, 0x19(r30)
/* 8007B734 00078674  38 C0 00 00 */	li r6, 0
/* 8007B738 00078678  88 1E 00 18 */	lbz r0, 0x18(r30)
/* 8007B73C 0007867C  39 20 00 00 */	li r9, 0
/* 8007B740 00078680  54 63 1E B8 */	rlwinm r3, r3, 3, 0x1a, 0x1c
/* 8007B744 00078684  7C FF 1A 14 */	add r7, r31, r3
/* 8007B748 00078688  A0 87 00 04 */	lhz r4, 4(r7)
/* 8007B74C 0007868C  54 03 07 7E */	clrlwi r3, r0, 0x1d
/* 8007B750 00078690  A0 07 00 06 */	lhz r0, 6(r7)
/* 8007B754 00078694  20 A4 00 01 */	subfic r5, r4, 1
/* 8007B758 00078698  A0 87 00 00 */	lhz r4, 0(r7)
/* 8007B75C 0007869C  20 00 00 01 */	subfic r0, r0, 1
/* 8007B760 000786A0  A0 E7 00 02 */	lhz r7, 2(r7)
/* 8007B764 000786A4  7C A5 00 34 */	cntlzw r5, r5
/* 8007B768 000786A8  7C 00 00 34 */	cntlzw r0, r0
/* 8007B76C 000786AC  54 A5 DE 3E */	rlwinm r5, r5, 0x1b, 0x18, 0x1f
/* 8007B770 000786B0  54 08 DE 3E */	rlwinm r8, r0, 0x1b, 0x18, 0x1f
/* 8007B774 000786B4  4B FF 9E B1 */	bl J3DGDSetTexCoordScale2__F13_GXTexCoordIDUsUcUcUsUcUc
/* 8007B778 000786B8  88 79 00 19 */	lbz r3, 0x19(r25)
/* 8007B77C 000786BC  38 C0 00 00 */	li r6, 0
/* 8007B780 000786C0  88 19 00 18 */	lbz r0, 0x18(r25)
/* 8007B784 000786C4  39 20 00 00 */	li r9, 0
/* 8007B788 000786C8  54 63 1E B8 */	rlwinm r3, r3, 3, 0x1a, 0x1c
/* 8007B78C 000786CC  7C FF 1A 14 */	add r7, r31, r3
/* 8007B790 000786D0  A0 87 00 04 */	lhz r4, 4(r7)
/* 8007B794 000786D4  54 03 07 7E */	clrlwi r3, r0, 0x1d
/* 8007B798 000786D8  A0 07 00 06 */	lhz r0, 6(r7)
/* 8007B79C 000786DC  20 A4 00 01 */	subfic r5, r4, 1
/* 8007B7A0 000786E0  A0 87 00 00 */	lhz r4, 0(r7)
/* 8007B7A4 000786E4  20 00 00 01 */	subfic r0, r0, 1
/* 8007B7A8 000786E8  A0 E7 00 02 */	lhz r7, 2(r7)
/* 8007B7AC 000786EC  7C A5 00 34 */	cntlzw r5, r5
/* 8007B7B0 000786F0  7C 00 00 34 */	cntlzw r0, r0
/* 8007B7B4 000786F4  54 A5 DE 3E */	rlwinm r5, r5, 0x1b, 0x18, 0x1f
/* 8007B7B8 000786F8  54 08 DE 3E */	rlwinm r8, r0, 0x1b, 0x18, 0x1f
/* 8007B7BC 000786FC  4B FF 9E 69 */	bl J3DGDSetTexCoordScale2__F13_GXTexCoordIDUsUcUcUsUcUc
/* 8007B7C0 00078700  3B DE 00 08 */	addi r30, r30, 8
/* 8007B7C4 00078704  3B 9C 00 02 */	addi r28, r28, 2
.L_8007B7C8:
/* 8007B7C8 00078708  7C 1C E8 40 */	cmplw r28, r29
/* 8007B7CC 0007870C  41 80 FF 38 */	blt .L_8007B704
/* 8007B7D0 00078710  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 8007B7D4 00078714  7F 79 DB 78 */	mr r25, r27
/* 8007B7D8 00078718  3B 40 00 00 */	li r26, 0
/* 8007B7DC 0007871C  80 64 00 00 */	lwz r3, 0(r4)
/* 8007B7E0 00078720  80 04 00 08 */	lwz r0, 8(r4)
/* 8007B7E4 00078724  7C 03 00 50 */	subf r0, r3, r0
/* 8007B7E8 00078728  90 1B 01 70 */	stw r0, 0x170(r27)
.L_8007B7EC:
/* 8007B7EC 0007872C  80 B9 00 DA */	lwz r5, 0xda(r25)
/* 8007B7F0 00078730  38 7A 00 01 */	addi r3, r26, 1
/* 8007B7F4 00078734  80 19 00 DE */	lwz r0, 0xde(r25)
/* 8007B7F8 00078738  38 81 00 0C */	addi r4, r1, 0xc
/* 8007B7FC 0007873C  90 A1 00 0C */	stw r5, 0xc(r1)
/* 8007B800 00078740  90 01 00 10 */	stw r0, 0x10(r1)
/* 8007B804 00078744  4B FF AF E5 */	bl J3DGDSetTevColorS10__F11_GXTevRegID11_GXColorS10
/* 8007B808 00078748  3B 5A 00 01 */	addi r26, r26, 1
/* 8007B80C 0007874C  3B 39 00 08 */	addi r25, r25, 8
/* 8007B810 00078750  28 1A 00 03 */	cmplwi r26, 3
/* 8007B814 00078754  41 80 FF D8 */	blt .L_8007B7EC
/* 8007B818 00078758  3B 40 00 00 */	li r26, 0
/* 8007B81C 0007875C  7F 79 DB 78 */	mr r25, r27
.L_8007B820:
/* 8007B820 00078760  80 19 00 FA */	lwz r0, 0xfa(r25)
/* 8007B824 00078764  7F 43 D3 78 */	mr r3, r26
/* 8007B828 00078768  38 81 00 08 */	addi r4, r1, 8
/* 8007B82C 0007876C  90 01 00 08 */	stw r0, 8(r1)
/* 8007B830 00078770  4B FF AE 51 */	bl J3DGDSetTevKColor__F14_GXTevKColorID8_GXColor
/* 8007B834 00078774  3B 5A 00 01 */	addi r26, r26, 1
/* 8007B838 00078778  3B 39 00 04 */	addi r25, r25, 4
/* 8007B83C 0007877C  28 1A 00 04 */	cmplwi r26, 4
/* 8007B840 00078780  41 80 FF E0 */	blt .L_8007B820
/* 8007B844 00078784  7F 63 DB 78 */	mr r3, r27
/* 8007B848 00078788  7F 64 DB 78 */	mr r4, r27
/* 8007B84C 0007878C  38 A0 00 00 */	li r5, 0
/* 8007B850 00078790  7F A9 03 A6 */	mtctr r29
/* 8007B854 00078794  28 1D 00 00 */	cmplwi r29, 0
/* 8007B858 00078798  40 81 01 80 */	ble .L_8007B9D8
.L_8007B85C:
/* 8007B85C 0007879C  81 2D 8E A8 */	lwz r9, __GDCurrentDL@sda21(r13)
/* 8007B860 000787A0  38 C5 00 10 */	addi r6, r5, 0x10
/* 8007B864 000787A4  83 23 00 59 */	lwz r25, 0x59(r3)
/* 8007B868 000787A8  38 00 00 61 */	li r0, 0x61
/* 8007B86C 000787AC  81 09 00 08 */	lwz r8, 8(r9)
/* 8007B870 000787B0  54 C6 C0 0E */	slwi r6, r6, 0x18
/* 8007B874 000787B4  57 2C 46 3E */	srwi r12, r25, 0x18
/* 8007B878 000787B8  57 2B 86 3E */	rlwinm r11, r25, 0x10, 0x18, 0x1f
/* 8007B87C 000787BC  38 E8 00 01 */	addi r7, r8, 1
/* 8007B880 000787C0  57 2A C6 3E */	rlwinm r10, r25, 0x18, 0x18, 0x1f
/* 8007B884 000787C4  90 E9 00 08 */	stw r7, 8(r9)
/* 8007B888 000787C8  38 A5 00 01 */	addi r5, r5, 1
/* 8007B88C 000787CC  98 08 00 00 */	stb r0, 0(r8)
/* 8007B890 000787D0  81 2D 8E A8 */	lwz r9, __GDCurrentDL@sda21(r13)
/* 8007B894 000787D4  81 09 00 08 */	lwz r8, 8(r9)
/* 8007B898 000787D8  38 E8 00 01 */	addi r7, r8, 1
/* 8007B89C 000787DC  90 E9 00 08 */	stw r7, 8(r9)
/* 8007B8A0 000787E0  99 88 00 00 */	stb r12, 0(r8)
/* 8007B8A4 000787E4  81 2D 8E A8 */	lwz r9, __GDCurrentDL@sda21(r13)
/* 8007B8A8 000787E8  81 09 00 08 */	lwz r8, 8(r9)
/* 8007B8AC 000787EC  38 E8 00 01 */	addi r7, r8, 1
/* 8007B8B0 000787F0  90 E9 00 08 */	stw r7, 8(r9)
/* 8007B8B4 000787F4  99 68 00 00 */	stb r11, 0(r8)
/* 8007B8B8 000787F8  81 2D 8E A8 */	lwz r9, __GDCurrentDL@sda21(r13)
/* 8007B8BC 000787FC  81 09 00 08 */	lwz r8, 8(r9)
/* 8007B8C0 00078800  38 E8 00 01 */	addi r7, r8, 1
/* 8007B8C4 00078804  90 E9 00 08 */	stw r7, 8(r9)
/* 8007B8C8 00078808  99 48 00 00 */	stb r10, 0(r8)
/* 8007B8CC 0007880C  81 2D 8E A8 */	lwz r9, __GDCurrentDL@sda21(r13)
/* 8007B8D0 00078810  81 09 00 08 */	lwz r8, 8(r9)
/* 8007B8D4 00078814  38 E8 00 01 */	addi r7, r8, 1
/* 8007B8D8 00078818  90 E9 00 08 */	stw r7, 8(r9)
/* 8007B8DC 0007881C  9B 28 00 00 */	stb r25, 0(r8)
/* 8007B8E0 00078820  81 2D 8E A8 */	lwz r9, __GDCurrentDL@sda21(r13)
/* 8007B8E4 00078824  83 23 00 5D */	lwz r25, 0x5d(r3)
/* 8007B8E8 00078828  38 63 00 08 */	addi r3, r3, 8
/* 8007B8EC 0007882C  81 09 00 08 */	lwz r8, 8(r9)
/* 8007B8F0 00078830  57 2C 46 3E */	srwi r12, r25, 0x18
/* 8007B8F4 00078834  57 2B 86 3E */	rlwinm r11, r25, 0x10, 0x18, 0x1f
/* 8007B8F8 00078838  38 E8 00 01 */	addi r7, r8, 1
/* 8007B8FC 0007883C  57 2A C6 3E */	rlwinm r10, r25, 0x18, 0x18, 0x1f
/* 8007B900 00078840  90 E9 00 08 */	stw r7, 8(r9)
/* 8007B904 00078844  98 08 00 00 */	stb r0, 0(r8)
/* 8007B908 00078848  81 2D 8E A8 */	lwz r9, __GDCurrentDL@sda21(r13)
/* 8007B90C 0007884C  81 09 00 08 */	lwz r8, 8(r9)
/* 8007B910 00078850  38 E8 00 01 */	addi r7, r8, 1
/* 8007B914 00078854  90 E9 00 08 */	stw r7, 8(r9)
/* 8007B918 00078858  99 88 00 00 */	stb r12, 0(r8)
/* 8007B91C 0007885C  81 2D 8E A8 */	lwz r9, __GDCurrentDL@sda21(r13)
/* 8007B920 00078860  81 09 00 08 */	lwz r8, 8(r9)
/* 8007B924 00078864  38 E8 00 01 */	addi r7, r8, 1
/* 8007B928 00078868  90 E9 00 08 */	stw r7, 8(r9)
/* 8007B92C 0007886C  99 68 00 00 */	stb r11, 0(r8)
/* 8007B930 00078870  81 2D 8E A8 */	lwz r9, __GDCurrentDL@sda21(r13)
/* 8007B934 00078874  81 09 00 08 */	lwz r8, 8(r9)
/* 8007B938 00078878  38 E8 00 01 */	addi r7, r8, 1
/* 8007B93C 0007887C  90 E9 00 08 */	stw r7, 8(r9)
/* 8007B940 00078880  99 48 00 00 */	stb r10, 0(r8)
/* 8007B944 00078884  81 2D 8E A8 */	lwz r9, __GDCurrentDL@sda21(r13)
/* 8007B948 00078888  81 09 00 08 */	lwz r8, 8(r9)
/* 8007B94C 0007888C  38 E8 00 01 */	addi r7, r8, 1
/* 8007B950 00078890  90 E9 00 08 */	stw r7, 8(r9)
/* 8007B954 00078894  9B 28 00 00 */	stb r25, 0(r8)
/* 8007B958 00078898  81 0D 8E A8 */	lwz r8, __GDCurrentDL@sda21(r13)
/* 8007B95C 0007889C  81 24 01 30 */	lwz r9, 0x130(r4)
/* 8007B960 000788A0  38 84 00 04 */	addi r4, r4, 4
/* 8007B964 000788A4  80 E8 00 08 */	lwz r7, 8(r8)
/* 8007B968 000788A8  7D 2B 33 78 */	or r11, r9, r6
/* 8007B96C 000788AC  38 C7 00 01 */	addi r6, r7, 1
/* 8007B970 000788B0  90 C8 00 08 */	stw r6, 8(r8)
/* 8007B974 000788B4  55 6A 46 3E */	srwi r10, r11, 0x18
/* 8007B978 000788B8  55 69 86 3E */	rlwinm r9, r11, 0x10, 0x18, 0x1f
/* 8007B97C 000788BC  55 68 C6 3E */	rlwinm r8, r11, 0x18, 0x18, 0x1f
/* 8007B980 000788C0  98 07 00 00 */	stb r0, 0(r7)
/* 8007B984 000788C4  80 ED 8E A8 */	lwz r7, __GDCurrentDL@sda21(r13)
/* 8007B988 000788C8  80 C7 00 08 */	lwz r6, 8(r7)
/* 8007B98C 000788CC  38 06 00 01 */	addi r0, r6, 1
/* 8007B990 000788D0  90 07 00 08 */	stw r0, 8(r7)
/* 8007B994 000788D4  99 46 00 00 */	stb r10, 0(r6)
/* 8007B998 000788D8  80 ED 8E A8 */	lwz r7, __GDCurrentDL@sda21(r13)
/* 8007B99C 000788DC  80 C7 00 08 */	lwz r6, 8(r7)
/* 8007B9A0 000788E0  38 06 00 01 */	addi r0, r6, 1
/* 8007B9A4 000788E4  90 07 00 08 */	stw r0, 8(r7)
/* 8007B9A8 000788E8  99 26 00 00 */	stb r9, 0(r6)
/* 8007B9AC 000788EC  80 ED 8E A8 */	lwz r7, __GDCurrentDL@sda21(r13)
/* 8007B9B0 000788F0  80 C7 00 08 */	lwz r6, 8(r7)
/* 8007B9B4 000788F4  38 06 00 01 */	addi r0, r6, 1
/* 8007B9B8 000788F8  90 07 00 08 */	stw r0, 8(r7)
/* 8007B9BC 000788FC  99 06 00 00 */	stb r8, 0(r6)
/* 8007B9C0 00078900  80 ED 8E A8 */	lwz r7, __GDCurrentDL@sda21(r13)
/* 8007B9C4 00078904  80 C7 00 08 */	lwz r6, 8(r7)
/* 8007B9C8 00078908  38 06 00 01 */	addi r0, r6, 1
/* 8007B9CC 0007890C  90 07 00 08 */	stw r0, 8(r7)
/* 8007B9D0 00078910  99 66 00 00 */	stb r11, 0(r6)
/* 8007B9D4 00078914  42 00 FE 88 */	bdnz .L_8007B85C
.L_8007B9D8:
/* 8007B9D8 00078918  3C 60 80 51 */	lis r3, j3dTevSwapTableTable@ha
/* 8007B9DC 0007891C  38 00 00 04 */	li r0, 4
/* 8007B9E0 00078920  38 63 19 94 */	addi r3, r3, j3dTevSwapTableTable@l
/* 8007B9E4 00078924  38 E0 00 00 */	li r7, 0
/* 8007B9E8 00078928  38 80 00 00 */	li r4, 0
/* 8007B9EC 0007892C  7C 09 03 A6 */	mtctr r0
.L_8007B9F0:
/* 8007B9F0 00078930  38 C4 01 2A */	addi r6, r4, 0x12a
/* 8007B9F4 00078934  7C BB 3A 14 */	add r5, r27, r7
/* 8007B9F8 00078938  7D 1B 30 AE */	lbzx r8, r27, r6
/* 8007B9FC 0007893C  54 E0 0F FE */	srwi r0, r7, 0x1f
/* 8007BA00 00078940  81 8D 8E A8 */	lwz r12, __GDCurrentDL@sda21(r13)
/* 8007BA04 00078944  7C 00 3A 14 */	add r0, r0, r7
/* 8007BA08 00078948  55 08 10 3A */	slwi r8, r8, 2
/* 8007BA0C 0007894C  89 65 01 0A */	lbz r11, 0x10a(r5)
/* 8007BA10 00078950  7F 23 42 14 */	add r25, r3, r8
/* 8007BA14 00078954  83 8C 00 08 */	lwz r28, 8(r12)
/* 8007BA18 00078958  89 39 00 01 */	lbz r9, 1(r25)
/* 8007BA1C 0007895C  7C 08 0E 70 */	srawi r8, r0, 1
/* 8007BA20 00078960  8B 45 01 1B */	lbz r26, 0x11b(r5)
/* 8007BA24 00078964  39 5C 00 01 */	addi r10, r28, 1
/* 8007BA28 00078968  8B E5 01 0B */	lbz r31, 0x10b(r5)
/* 8007BA2C 0007896C  3B C8 00 F6 */	addi r30, r8, 0xf6
/* 8007BA30 00078970  55 28 10 3A */	slwi r8, r9, 2
/* 8007BA34 00078974  8B A5 01 1A */	lbz r29, 0x11a(r5)
/* 8007BA38 00078978  8B 39 00 00 */	lbz r25, 0(r25)
/* 8007BA3C 0007897C  38 00 00 61 */	li r0, 0x61
/* 8007BA40 00078980  55 6B 20 36 */	slwi r11, r11, 4
/* 8007BA44 00078984  39 27 00 02 */	addi r9, r7, 2
/* 8007BA48 00078988  91 4C 00 08 */	stw r10, 8(r12)
/* 8007BA4C 0007898C  7F 2A 43 78 */	or r10, r25, r8
/* 8007BA50 00078990  57 AC 48 2C */	slwi r12, r29, 9
/* 8007BA54 00078994  57 5D 98 18 */	slwi r29, r26, 0x13
/* 8007BA58 00078998  98 1C 00 00 */	stb r0, 0(r28)
/* 8007BA5C 0007899C  7D 6A 53 78 */	or r10, r11, r10
/* 8007BA60 000789A0  55 28 0F FE */	srwi r8, r9, 0x1f
/* 8007BA64 000789A4  57 FC 70 22 */	slwi r28, r31, 0xe
/* 8007BA68 000789A8  7D 8A 53 78 */	or r10, r12, r10
/* 8007BA6C 000789AC  81 6D 8E A8 */	lwz r11, __GDCurrentDL@sda21(r13)
/* 8007BA70 000789B0  7F 8A 53 78 */	or r10, r28, r10
/* 8007BA74 000789B4  7D 08 4A 14 */	add r8, r8, r9
/* 8007BA78 000789B8  7F B9 53 78 */	or r25, r29, r10
/* 8007BA7C 000789BC  81 4B 00 08 */	lwz r10, 8(r11)
/* 8007BA80 000789C0  53 D9 C0 0E */	rlwimi r25, r30, 0x18, 0, 7
/* 8007BA84 000789C4  7D 08 0E 70 */	srawi r8, r8, 1
/* 8007BA88 000789C8  39 2A 00 01 */	addi r9, r10, 1
/* 8007BA8C 000789CC  91 2B 00 08 */	stw r9, 8(r11)
/* 8007BA90 000789D0  57 29 46 3E */	srwi r9, r25, 0x18
/* 8007BA94 000789D4  39 68 00 F6 */	addi r11, r8, 0xf6
/* 8007BA98 000789D8  57 3C 86 3E */	rlwinm r28, r25, 0x10, 0x18, 0x1f
/* 8007BA9C 000789DC  99 2A 00 00 */	stb r9, 0(r10)
/* 8007BAA0 000789E0  57 2C C6 3E */	rlwinm r12, r25, 0x18, 0x18, 0x1f
/* 8007BAA4 000789E4  81 4D 8E A8 */	lwz r10, __GDCurrentDL@sda21(r13)
/* 8007BAA8 000789E8  81 2A 00 08 */	lwz r9, 8(r10)
/* 8007BAAC 000789EC  39 09 00 01 */	addi r8, r9, 1
/* 8007BAB0 000789F0  91 0A 00 08 */	stw r8, 8(r10)
/* 8007BAB4 000789F4  9B 89 00 00 */	stb r28, 0(r9)
/* 8007BAB8 000789F8  81 4D 8E A8 */	lwz r10, __GDCurrentDL@sda21(r13)
/* 8007BABC 000789FC  81 2A 00 08 */	lwz r9, 8(r10)
/* 8007BAC0 00078A00  39 09 00 01 */	addi r8, r9, 1
/* 8007BAC4 00078A04  91 0A 00 08 */	stw r8, 8(r10)
/* 8007BAC8 00078A08  99 89 00 00 */	stb r12, 0(r9)
/* 8007BACC 00078A0C  81 4D 8E A8 */	lwz r10, __GDCurrentDL@sda21(r13)
/* 8007BAD0 00078A10  81 2A 00 08 */	lwz r9, 8(r10)
/* 8007BAD4 00078A14  39 09 00 01 */	addi r8, r9, 1
/* 8007BAD8 00078A18  91 0A 00 08 */	stw r8, 8(r10)
/* 8007BADC 00078A1C  9B 29 00 00 */	stb r25, 0(r9)
/* 8007BAE0 00078A20  7C DB 30 AE */	lbzx r6, r27, r6
/* 8007BAE4 00078A24  83 AD 8E A8 */	lwz r29, __GDCurrentDL@sda21(r13)
/* 8007BAE8 00078A28  54 C6 10 3A */	slwi r6, r6, 2
/* 8007BAEC 00078A2C  89 05 01 1D */	lbz r8, 0x11d(r5)
/* 8007BAF0 00078A30  7F 23 32 14 */	add r25, r3, r6
/* 8007BAF4 00078A34  83 9D 00 08 */	lwz r28, 8(r29)
/* 8007BAF8 00078A38  88 D9 00 03 */	lbz r6, 3(r25)
/* 8007BAFC 00078A3C  55 0A 98 18 */	slwi r10, r8, 0x13
/* 8007BB00 00078A40  89 25 01 0D */	lbz r9, 0x10d(r5)
/* 8007BB04 00078A44  39 9C 00 01 */	addi r12, r28, 1
/* 8007BB08 00078A48  89 05 01 1C */	lbz r8, 0x11c(r5)
/* 8007BB0C 00078A4C  54 C6 10 3A */	slwi r6, r6, 2
/* 8007BB10 00078A50  8B 59 00 02 */	lbz r26, 2(r25)
/* 8007BB14 00078A54  55 29 70 22 */	slwi r9, r9, 0xe
/* 8007BB18 00078A58  8B 25 01 0C */	lbz r25, 0x10c(r5)
/* 8007BB1C 00078A5C  55 08 48 2C */	slwi r8, r8, 9
/* 8007BB20 00078A60  7F 45 33 78 */	or r5, r26, r6
/* 8007BB24 00078A64  91 9D 00 08 */	stw r12, 8(r29)
/* 8007BB28 00078A68  57 26 20 36 */	slwi r6, r25, 4
/* 8007BB2C 00078A6C  7C C5 2B 78 */	or r5, r6, r5
/* 8007BB30 00078A70  98 1C 00 00 */	stb r0, 0(r28)
/* 8007BB34 00078A74  7D 00 2B 78 */	or r0, r8, r5
/* 8007BB38 00078A78  7D 20 03 78 */	or r0, r9, r0
/* 8007BB3C 00078A7C  80 CD 8E A8 */	lwz r6, __GDCurrentDL@sda21(r13)
/* 8007BB40 00078A80  7D 4A 03 78 */	or r10, r10, r0
/* 8007BB44 00078A84  51 6A C0 0E */	rlwimi r10, r11, 0x18, 0, 7
/* 8007BB48 00078A88  80 A6 00 08 */	lwz r5, 8(r6)
/* 8007BB4C 00078A8C  55 48 46 3E */	srwi r8, r10, 0x18
/* 8007BB50 00078A90  38 05 00 01 */	addi r0, r5, 1
/* 8007BB54 00078A94  90 06 00 08 */	stw r0, 8(r6)
/* 8007BB58 00078A98  99 05 00 00 */	stb r8, 0(r5)
/* 8007BB5C 00078A9C  80 CD 8E A8 */	lwz r6, __GDCurrentDL@sda21(r13)
/* 8007BB60 00078AA0  55 49 86 3E */	rlwinm r9, r10, 0x10, 0x18, 0x1f
/* 8007BB64 00078AA4  55 48 C6 3E */	rlwinm r8, r10, 0x18, 0x18, 0x1f
/* 8007BB68 00078AA8  38 84 00 01 */	addi r4, r4, 1
/* 8007BB6C 00078AAC  80 A6 00 08 */	lwz r5, 8(r6)
/* 8007BB70 00078AB0  38 E7 00 04 */	addi r7, r7, 4
/* 8007BB74 00078AB4  38 05 00 01 */	addi r0, r5, 1
/* 8007BB78 00078AB8  90 06 00 08 */	stw r0, 8(r6)
/* 8007BB7C 00078ABC  99 25 00 00 */	stb r9, 0(r5)
/* 8007BB80 00078AC0  80 CD 8E A8 */	lwz r6, __GDCurrentDL@sda21(r13)
/* 8007BB84 00078AC4  80 A6 00 08 */	lwz r5, 8(r6)
/* 8007BB88 00078AC8  38 05 00 01 */	addi r0, r5, 1
/* 8007BB8C 00078ACC  90 06 00 08 */	stw r0, 8(r6)
/* 8007BB90 00078AD0  99 05 00 00 */	stb r8, 0(r5)
/* 8007BB94 00078AD4  80 CD 8E A8 */	lwz r6, __GDCurrentDL@sda21(r13)
/* 8007BB98 00078AD8  80 A6 00 08 */	lwz r5, 8(r6)
/* 8007BB9C 00078ADC  38 05 00 01 */	addi r0, r5, 1
/* 8007BBA0 00078AE0  90 06 00 08 */	stw r0, 8(r6)
/* 8007BBA4 00078AE4  99 45 00 00 */	stb r10, 0(r5)
/* 8007BBA8 00078AE8  42 00 FE 48 */	bdnz .L_8007B9F0
/* 8007BBAC 00078AEC  BB 21 00 24 */	lmw r25, 0x24(r1)
/* 8007BBB0 00078AF0  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8007BBB4 00078AF4  7C 08 03 A6 */	mtlr r0
/* 8007BBB8 00078AF8  38 21 00 40 */	addi r1, r1, 0x40
/* 8007BBBC 00078AFC  4E 80 00 20 */	blr 
.endfn load__13J3DTevBlock16Fv

.fn patchTexNo__18J3DTevBlockPatchedFv, global
/* 8007BBC0 00078B00  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8007BBC4 00078B04  7C 08 02 A6 */	mflr r0
/* 8007BBC8 00078B08  90 01 00 24 */	stw r0, 0x24(r1)
/* 8007BBCC 00078B0C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8007BBD0 00078B10  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8007BBD4 00078B14  7C 7E 1B 78 */	mr r30, r3
/* 8007BBD8 00078B18  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8007BBDC 00078B1C  3B A0 00 00 */	li r29, 0
/* 8007BBE0 00078B20  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 8007BBE4 00078B24  80 03 00 04 */	lwz r0, 4(r3)
/* 8007BBE8 00078B28  80 64 00 00 */	lwz r3, 0(r4)
/* 8007BBEC 00078B2C  7C 03 02 14 */	add r0, r3, r0
/* 8007BBF0 00078B30  90 04 00 08 */	stw r0, 8(r4)
/* 8007BBF4 00078B34  80 6D 8E A8 */	lwz r3, __GDCurrentDL@sda21(r13)
/* 8007BBF8 00078B38  83 E3 00 08 */	lwz r31, 8(r3)
.L_8007BBFC:
/* 8007BBFC 00078B3C  A0 1E 00 08 */	lhz r0, 8(r30)
/* 8007BC00 00078B40  28 00 FF FF */	cmplwi r0, 0xffff
/* 8007BC04 00078B44  41 82 00 10 */	beq .L_8007BC14
/* 8007BC08 00078B48  7F A3 EB 78 */	mr r3, r29
/* 8007BC0C 00078B4C  38 9E 00 08 */	addi r4, r30, 8
/* 8007BC10 00078B50  4B FE 97 79 */	bl loadTexNo__FUlRCUs
.L_8007BC14:
/* 8007BC14 00078B54  3B BD 00 01 */	addi r29, r29, 1
/* 8007BC18 00078B58  3B DE 00 02 */	addi r30, r30, 2
/* 8007BC1C 00078B5C  28 1D 00 08 */	cmplwi r29, 8
/* 8007BC20 00078B60  41 80 FF DC */	blt .L_8007BBFC
/* 8007BC24 00078B64  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 8007BC28 00078B68  7F E3 FB 78 */	mr r3, r31
/* 8007BC2C 00078B6C  80 04 00 08 */	lwz r0, 8(r4)
/* 8007BC30 00078B70  7C 9F 00 50 */	subf r4, r31, r0
/* 8007BC34 00078B74  48 07 0B 15 */	bl DCStoreRange
/* 8007BC38 00078B78  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8007BC3C 00078B7C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8007BC40 00078B80  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8007BC44 00078B84  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8007BC48 00078B88  7C 08 03 A6 */	mtlr r0
/* 8007BC4C 00078B8C  38 21 00 20 */	addi r1, r1, 0x20
/* 8007BC50 00078B90  4E 80 00 20 */	blr 
.endfn patchTexNo__18J3DTevBlockPatchedFv

.fn patchTevReg__18J3DTevBlockPatchedFv, global
/* 8007BC54 00078B94  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8007BC58 00078B98  7C 08 02 A6 */	mflr r0
/* 8007BC5C 00078B9C  90 01 00 34 */	stw r0, 0x34(r1)
/* 8007BC60 00078BA0  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 8007BC64 00078BA4  93 C1 00 28 */	stw r30, 0x28(r1)
/* 8007BC68 00078BA8  93 A1 00 24 */	stw r29, 0x24(r1)
/* 8007BC6C 00078BAC  3B A0 00 00 */	li r29, 0
/* 8007BC70 00078BB0  93 81 00 20 */	stw r28, 0x20(r1)
/* 8007BC74 00078BB4  7C 7C 1B 78 */	mr r28, r3
/* 8007BC78 00078BB8  7F 9E E3 78 */	mr r30, r28
/* 8007BC7C 00078BBC  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 8007BC80 00078BC0  80 03 00 D4 */	lwz r0, 0xd4(r3)
/* 8007BC84 00078BC4  80 64 00 00 */	lwz r3, 0(r4)
/* 8007BC88 00078BC8  7C 03 02 14 */	add r0, r3, r0
/* 8007BC8C 00078BCC  90 04 00 08 */	stw r0, 8(r4)
/* 8007BC90 00078BD0  80 6D 8E A8 */	lwz r3, __GDCurrentDL@sda21(r13)
/* 8007BC94 00078BD4  83 E3 00 08 */	lwz r31, 8(r3)
.L_8007BC98:
/* 8007BC98 00078BD8  80 BE 00 98 */	lwz r5, 0x98(r30)
/* 8007BC9C 00078BDC  38 7D 00 01 */	addi r3, r29, 1
/* 8007BCA0 00078BE0  80 1E 00 9C */	lwz r0, 0x9c(r30)
/* 8007BCA4 00078BE4  38 81 00 0C */	addi r4, r1, 0xc
/* 8007BCA8 00078BE8  90 A1 00 0C */	stw r5, 0xc(r1)
/* 8007BCAC 00078BEC  90 01 00 10 */	stw r0, 0x10(r1)
/* 8007BCB0 00078BF0  4B FF AB 39 */	bl J3DGDSetTevColorS10__F11_GXTevRegID11_GXColorS10
/* 8007BCB4 00078BF4  3B BD 00 01 */	addi r29, r29, 1
/* 8007BCB8 00078BF8  3B DE 00 08 */	addi r30, r30, 8
/* 8007BCBC 00078BFC  28 1D 00 03 */	cmplwi r29, 3
/* 8007BCC0 00078C00  41 80 FF D8 */	blt .L_8007BC98
/* 8007BCC4 00078C04  3B A0 00 00 */	li r29, 0
/* 8007BCC8 00078C08  7F 9E E3 78 */	mr r30, r28
.L_8007BCCC:
/* 8007BCCC 00078C0C  80 1E 00 B8 */	lwz r0, 0xb8(r30)
/* 8007BCD0 00078C10  7F A3 EB 78 */	mr r3, r29
/* 8007BCD4 00078C14  38 81 00 08 */	addi r4, r1, 8
/* 8007BCD8 00078C18  90 01 00 08 */	stw r0, 8(r1)
/* 8007BCDC 00078C1C  4B FF A9 A5 */	bl J3DGDSetTevKColor__F14_GXTevKColorID8_GXColor
/* 8007BCE0 00078C20  3B BD 00 01 */	addi r29, r29, 1
/* 8007BCE4 00078C24  3B DE 00 04 */	addi r30, r30, 4
/* 8007BCE8 00078C28  28 1D 00 04 */	cmplwi r29, 4
/* 8007BCEC 00078C2C  41 80 FF E0 */	blt .L_8007BCCC
/* 8007BCF0 00078C30  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 8007BCF4 00078C34  7F E3 FB 78 */	mr r3, r31
/* 8007BCF8 00078C38  80 04 00 08 */	lwz r0, 8(r4)
/* 8007BCFC 00078C3C  7C 9F 00 50 */	subf r4, r31, r0
/* 8007BD00 00078C40  48 07 0A 49 */	bl DCStoreRange
/* 8007BD04 00078C44  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8007BD08 00078C48  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 8007BD0C 00078C4C  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 8007BD10 00078C50  83 A1 00 24 */	lwz r29, 0x24(r1)
/* 8007BD14 00078C54  83 81 00 20 */	lwz r28, 0x20(r1)
/* 8007BD18 00078C58  7C 08 03 A6 */	mtlr r0
/* 8007BD1C 00078C5C  38 21 00 30 */	addi r1, r1, 0x30
/* 8007BD20 00078C60  4E 80 00 20 */	blr 
.endfn patchTevReg__18J3DTevBlockPatchedFv

.fn patchTexNoAndTexCoordScale__18J3DTevBlockPatchedFv, global
/* 8007BD24 00078C64  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8007BD28 00078C68  7C 08 02 A6 */	mflr r0
/* 8007BD2C 00078C6C  90 01 00 34 */	stw r0, 0x34(r1)
/* 8007BD30 00078C70  BF 21 00 14 */	stmw r25, 0x14(r1)
/* 8007BD34 00078C74  7C 7A 1B 78 */	mr r26, r3
/* 8007BD38 00078C78  7F 5B D3 78 */	mr r27, r26
/* 8007BD3C 00078C7C  3B 20 00 00 */	li r25, 0
/* 8007BD40 00078C80  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 8007BD44 00078C84  80 03 00 04 */	lwz r0, 4(r3)
/* 8007BD48 00078C88  80 64 00 00 */	lwz r3, 0(r4)
/* 8007BD4C 00078C8C  7C 03 02 14 */	add r0, r3, r0
/* 8007BD50 00078C90  90 04 00 08 */	stw r0, 8(r4)
/* 8007BD54 00078C94  80 6D 8E A8 */	lwz r3, __GDCurrentDL@sda21(r13)
/* 8007BD58 00078C98  8B 9A 00 D0 */	lbz r28, 0xd0(r26)
/* 8007BD5C 00078C9C  83 C3 00 08 */	lwz r30, 8(r3)
.L_8007BD60:
/* 8007BD60 00078CA0  A0 1B 00 08 */	lhz r0, 8(r27)
/* 8007BD64 00078CA4  28 00 FF FF */	cmplwi r0, 0xffff
/* 8007BD68 00078CA8  41 82 00 10 */	beq .L_8007BD78
/* 8007BD6C 00078CAC  7F 23 CB 78 */	mr r3, r25
/* 8007BD70 00078CB0  38 9B 00 08 */	addi r4, r27, 8
/* 8007BD74 00078CB4  4B FE 96 15 */	bl loadTexNo__FUlRCUs
.L_8007BD78:
/* 8007BD78 00078CB8  3B 39 00 01 */	addi r25, r25, 1
/* 8007BD7C 00078CBC  3B 7B 00 02 */	addi r27, r27, 2
/* 8007BD80 00078CC0  28 19 00 08 */	cmplwi r25, 8
/* 8007BD84 00078CC4  41 80 FF DC */	blt .L_8007BD60
/* 8007BD88 00078CC8  3C 60 80 51 */	lis r3, sTexCoordScaleTable__6J3DSys@ha
/* 8007BD8C 00078CCC  7F 5D D3 78 */	mr r29, r26
/* 8007BD90 00078CD0  3B E3 F4 1C */	addi r31, r3, sTexCoordScaleTable__6J3DSys@l
/* 8007BD94 00078CD4  3B 60 00 00 */	li r27, 0
/* 8007BD98 00078CD8  48 00 00 C8 */	b .L_8007BE60
.L_8007BD9C:
/* 8007BD9C 00078CDC  38 1B 00 01 */	addi r0, r27, 1
/* 8007BDA0 00078CE0  88 9D 00 18 */	lbz r4, 0x18(r29)
/* 8007BDA4 00078CE4  54 00 10 3A */	slwi r0, r0, 2
/* 8007BDA8 00078CE8  88 BD 00 19 */	lbz r5, 0x19(r29)
/* 8007BDAC 00078CEC  7F 3A 02 14 */	add r25, r26, r0
/* 8007BDB0 00078CF0  88 DD 00 1A */	lbz r6, 0x1a(r29)
/* 8007BDB4 00078CF4  88 F9 00 18 */	lbz r7, 0x18(r25)
/* 8007BDB8 00078CF8  7F 63 DB 78 */	mr r3, r27
/* 8007BDBC 00078CFC  89 19 00 19 */	lbz r8, 0x19(r25)
/* 8007BDC0 00078D00  89 39 00 1A */	lbz r9, 0x1a(r25)
/* 8007BDC4 00078D04  4B FF A7 35 */	bl J3DGDSetTevOrder__F13_GXTevStageID13_GXTexCoordID11_GXTexMapID12_GXChannelID13_GXTexCoordID11_GXTexMapID12_GXChannelID
/* 8007BDC8 00078D08  88 7D 00 19 */	lbz r3, 0x19(r29)
/* 8007BDCC 00078D0C  38 C0 00 00 */	li r6, 0
/* 8007BDD0 00078D10  88 1D 00 18 */	lbz r0, 0x18(r29)
/* 8007BDD4 00078D14  39 20 00 00 */	li r9, 0
/* 8007BDD8 00078D18  54 63 1E B8 */	rlwinm r3, r3, 3, 0x1a, 0x1c
/* 8007BDDC 00078D1C  7C FF 1A 14 */	add r7, r31, r3
/* 8007BDE0 00078D20  A0 87 00 04 */	lhz r4, 4(r7)
/* 8007BDE4 00078D24  54 03 07 7E */	clrlwi r3, r0, 0x1d
/* 8007BDE8 00078D28  A0 07 00 06 */	lhz r0, 6(r7)
/* 8007BDEC 00078D2C  20 A4 00 01 */	subfic r5, r4, 1
/* 8007BDF0 00078D30  A0 87 00 00 */	lhz r4, 0(r7)
/* 8007BDF4 00078D34  20 00 00 01 */	subfic r0, r0, 1
/* 8007BDF8 00078D38  A0 E7 00 02 */	lhz r7, 2(r7)
/* 8007BDFC 00078D3C  7C A5 00 34 */	cntlzw r5, r5
/* 8007BE00 00078D40  7C 00 00 34 */	cntlzw r0, r0
/* 8007BE04 00078D44  54 A5 DE 3E */	rlwinm r5, r5, 0x1b, 0x18, 0x1f
/* 8007BE08 00078D48  54 08 DE 3E */	rlwinm r8, r0, 0x1b, 0x18, 0x1f
/* 8007BE0C 00078D4C  4B FF 98 19 */	bl J3DGDSetTexCoordScale2__F13_GXTexCoordIDUsUcUcUsUcUc
/* 8007BE10 00078D50  88 79 00 19 */	lbz r3, 0x19(r25)
/* 8007BE14 00078D54  38 C0 00 00 */	li r6, 0
/* 8007BE18 00078D58  88 19 00 18 */	lbz r0, 0x18(r25)
/* 8007BE1C 00078D5C  39 20 00 00 */	li r9, 0
/* 8007BE20 00078D60  54 63 1E B8 */	rlwinm r3, r3, 3, 0x1a, 0x1c
/* 8007BE24 00078D64  7C FF 1A 14 */	add r7, r31, r3
/* 8007BE28 00078D68  A0 87 00 04 */	lhz r4, 4(r7)
/* 8007BE2C 00078D6C  54 03 07 7E */	clrlwi r3, r0, 0x1d
/* 8007BE30 00078D70  A0 07 00 06 */	lhz r0, 6(r7)
/* 8007BE34 00078D74  20 A4 00 01 */	subfic r5, r4, 1
/* 8007BE38 00078D78  A0 87 00 00 */	lhz r4, 0(r7)
/* 8007BE3C 00078D7C  20 00 00 01 */	subfic r0, r0, 1
/* 8007BE40 00078D80  A0 E7 00 02 */	lhz r7, 2(r7)
/* 8007BE44 00078D84  7C A5 00 34 */	cntlzw r5, r5
/* 8007BE48 00078D88  7C 00 00 34 */	cntlzw r0, r0
/* 8007BE4C 00078D8C  54 A5 DE 3E */	rlwinm r5, r5, 0x1b, 0x18, 0x1f
/* 8007BE50 00078D90  54 08 DE 3E */	rlwinm r8, r0, 0x1b, 0x18, 0x1f
/* 8007BE54 00078D94  4B FF 97 D1 */	bl J3DGDSetTexCoordScale2__F13_GXTexCoordIDUsUcUcUsUcUc
/* 8007BE58 00078D98  3B BD 00 08 */	addi r29, r29, 8
/* 8007BE5C 00078D9C  3B 7B 00 02 */	addi r27, r27, 2
.L_8007BE60:
/* 8007BE60 00078DA0  7C 1B E0 40 */	cmplw r27, r28
/* 8007BE64 00078DA4  41 80 FF 38 */	blt .L_8007BD9C
/* 8007BE68 00078DA8  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 8007BE6C 00078DAC  7F C3 F3 78 */	mr r3, r30
/* 8007BE70 00078DB0  80 04 00 08 */	lwz r0, 8(r4)
/* 8007BE74 00078DB4  7C 9E 00 50 */	subf r4, r30, r0
/* 8007BE78 00078DB8  48 07 08 D1 */	bl DCStoreRange
/* 8007BE7C 00078DBC  BB 21 00 14 */	lmw r25, 0x14(r1)
/* 8007BE80 00078DC0  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8007BE84 00078DC4  7C 08 03 A6 */	mtlr r0
/* 8007BE88 00078DC8  38 21 00 30 */	addi r1, r1, 0x30
/* 8007BE8C 00078DCC  4E 80 00 20 */	blr 
.endfn patchTexNoAndTexCoordScale__18J3DTevBlockPatchedFv

.fn patch__18J3DTevBlockPatchedFv, global
/* 8007BE90 00078DD0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8007BE94 00078DD4  7C 08 02 A6 */	mflr r0
/* 8007BE98 00078DD8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8007BE9C 00078DDC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8007BEA0 00078DE0  7C 7F 1B 78 */	mr r31, r3
/* 8007BEA4 00078DE4  81 83 00 00 */	lwz r12, 0(r3)
/* 8007BEA8 00078DE8  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 8007BEAC 00078DEC  7D 89 03 A6 */	mtctr r12
/* 8007BEB0 00078DF0  4E 80 04 21 */	bctrl 
/* 8007BEB4 00078DF4  7F E3 FB 78 */	mr r3, r31
/* 8007BEB8 00078DF8  81 9F 00 00 */	lwz r12, 0(r31)
/* 8007BEBC 00078DFC  81 8C 00 30 */	lwz r12, 0x30(r12)
/* 8007BEC0 00078E00  7D 89 03 A6 */	mtctr r12
/* 8007BEC4 00078E04  4E 80 04 21 */	bctrl 
/* 8007BEC8 00078E08  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8007BECC 00078E0C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8007BED0 00078E10  7C 08 03 A6 */	mtlr r0
/* 8007BED4 00078E14  38 21 00 10 */	addi r1, r1, 0x10
/* 8007BED8 00078E18  4E 80 00 20 */	blr 
.endfn patch__18J3DTevBlockPatchedFv

.fn patchTexNo__12J3DTevBlock1Fv, global
/* 8007BEDC 00078E1C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8007BEE0 00078E20  7C 08 02 A6 */	mflr r0
/* 8007BEE4 00078E24  90 01 00 14 */	stw r0, 0x14(r1)
/* 8007BEE8 00078E28  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8007BEEC 00078E2C  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 8007BEF0 00078E30  80 03 00 04 */	lwz r0, 4(r3)
/* 8007BEF4 00078E34  80 85 00 00 */	lwz r4, 0(r5)
/* 8007BEF8 00078E38  7C 04 02 14 */	add r0, r4, r0
/* 8007BEFC 00078E3C  90 05 00 08 */	stw r0, 8(r5)
/* 8007BF00 00078E40  A0 03 00 08 */	lhz r0, 8(r3)
/* 8007BF04 00078E44  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 8007BF08 00078E48  28 00 FF FF */	cmplwi r0, 0xffff
/* 8007BF0C 00078E4C  83 E4 00 08 */	lwz r31, 8(r4)
/* 8007BF10 00078E50  41 82 00 10 */	beq .L_8007BF20
/* 8007BF14 00078E54  38 83 00 08 */	addi r4, r3, 8
/* 8007BF18 00078E58  38 60 00 00 */	li r3, 0
/* 8007BF1C 00078E5C  4B FE 94 6D */	bl loadTexNo__FUlRCUs
.L_8007BF20:
/* 8007BF20 00078E60  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 8007BF24 00078E64  7F E3 FB 78 */	mr r3, r31
/* 8007BF28 00078E68  80 04 00 08 */	lwz r0, 8(r4)
/* 8007BF2C 00078E6C  7C 9F 00 50 */	subf r4, r31, r0
/* 8007BF30 00078E70  48 07 08 19 */	bl DCStoreRange
/* 8007BF34 00078E74  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8007BF38 00078E78  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8007BF3C 00078E7C  7C 08 03 A6 */	mtlr r0
/* 8007BF40 00078E80  38 21 00 10 */	addi r1, r1, 0x10
/* 8007BF44 00078E84  4E 80 00 20 */	blr 
.endfn patchTexNo__12J3DTevBlock1Fv

.fn patchTevReg__12J3DTevBlock1Fv, global
/* 8007BF48 00078E88  4E 80 00 20 */	blr 
.endfn patchTevReg__12J3DTevBlock1Fv

.fn patchTexNoAndTexCoordScale__12J3DTevBlock1Fv, global
/* 8007BF4C 00078E8C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8007BF50 00078E90  7C 08 02 A6 */	mflr r0
/* 8007BF54 00078E94  90 01 00 14 */	stw r0, 0x14(r1)
/* 8007BF58 00078E98  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8007BF5C 00078E9C  93 C1 00 08 */	stw r30, 8(r1)
/* 8007BF60 00078EA0  7C 7E 1B 78 */	mr r30, r3
/* 8007BF64 00078EA4  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 8007BF68 00078EA8  80 03 00 04 */	lwz r0, 4(r3)
/* 8007BF6C 00078EAC  80 64 00 00 */	lwz r3, 0(r4)
/* 8007BF70 00078EB0  7C 03 02 14 */	add r0, r3, r0
/* 8007BF74 00078EB4  90 04 00 08 */	stw r0, 8(r4)
/* 8007BF78 00078EB8  A0 1E 00 08 */	lhz r0, 8(r30)
/* 8007BF7C 00078EBC  80 6D 8E A8 */	lwz r3, __GDCurrentDL@sda21(r13)
/* 8007BF80 00078EC0  28 00 FF FF */	cmplwi r0, 0xffff
/* 8007BF84 00078EC4  83 E3 00 08 */	lwz r31, 8(r3)
/* 8007BF88 00078EC8  41 82 00 10 */	beq .L_8007BF98
/* 8007BF8C 00078ECC  38 9E 00 08 */	addi r4, r30, 8
/* 8007BF90 00078ED0  38 60 00 00 */	li r3, 0
/* 8007BF94 00078ED4  4B FE 93 F5 */	bl loadTexNo__FUlRCUs
.L_8007BF98:
/* 8007BF98 00078ED8  88 9E 00 0A */	lbz r4, 0xa(r30)
/* 8007BF9C 00078EDC  38 60 00 00 */	li r3, 0
/* 8007BFA0 00078EE0  88 BE 00 0B */	lbz r5, 0xb(r30)
/* 8007BFA4 00078EE4  38 E0 00 FF */	li r7, 0xff
/* 8007BFA8 00078EE8  88 DE 00 0C */	lbz r6, 0xc(r30)
/* 8007BFAC 00078EEC  39 00 00 FF */	li r8, 0xff
/* 8007BFB0 00078EF0  39 20 00 FF */	li r9, 0xff
/* 8007BFB4 00078EF4  4B FF A5 45 */	bl J3DGDSetTevOrder__F13_GXTevStageID13_GXTexCoordID11_GXTexMapID12_GXChannelID13_GXTexCoordID11_GXTexMapID12_GXChannelID
/* 8007BFB8 00078EF8  88 9E 00 0B */	lbz r4, 0xb(r30)
/* 8007BFBC 00078EFC  3C 60 80 51 */	lis r3, sTexCoordScaleTable__6J3DSys@ha
/* 8007BFC0 00078F00  38 03 F4 1C */	addi r0, r3, sTexCoordScaleTable__6J3DSys@l
/* 8007BFC4 00078F04  88 7E 00 0A */	lbz r3, 0xa(r30)
/* 8007BFC8 00078F08  54 84 1E B8 */	rlwinm r4, r4, 3, 0x1a, 0x1c
/* 8007BFCC 00078F0C  38 C0 00 00 */	li r6, 0
/* 8007BFD0 00078F10  7C E0 22 14 */	add r7, r0, r4
/* 8007BFD4 00078F14  39 20 00 00 */	li r9, 0
/* 8007BFD8 00078F18  A0 87 00 04 */	lhz r4, 4(r7)
/* 8007BFDC 00078F1C  A0 07 00 06 */	lhz r0, 6(r7)
/* 8007BFE0 00078F20  20 A4 00 01 */	subfic r5, r4, 1
/* 8007BFE4 00078F24  A0 87 00 00 */	lhz r4, 0(r7)
/* 8007BFE8 00078F28  20 00 00 01 */	subfic r0, r0, 1
/* 8007BFEC 00078F2C  A0 E7 00 02 */	lhz r7, 2(r7)
/* 8007BFF0 00078F30  7C A5 00 34 */	cntlzw r5, r5
/* 8007BFF4 00078F34  7C 00 00 34 */	cntlzw r0, r0
/* 8007BFF8 00078F38  54 A5 DE 3E */	rlwinm r5, r5, 0x1b, 0x18, 0x1f
/* 8007BFFC 00078F3C  54 08 DE 3E */	rlwinm r8, r0, 0x1b, 0x18, 0x1f
/* 8007C000 00078F40  4B FF 96 25 */	bl J3DGDSetTexCoordScale2__F13_GXTexCoordIDUsUcUcUsUcUc
/* 8007C004 00078F44  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 8007C008 00078F48  7F E3 FB 78 */	mr r3, r31
/* 8007C00C 00078F4C  80 04 00 08 */	lwz r0, 8(r4)
/* 8007C010 00078F50  7C 9F 00 50 */	subf r4, r31, r0
/* 8007C014 00078F54  48 07 07 35 */	bl DCStoreRange
/* 8007C018 00078F58  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8007C01C 00078F5C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8007C020 00078F60  83 C1 00 08 */	lwz r30, 8(r1)
/* 8007C024 00078F64  7C 08 03 A6 */	mtlr r0
/* 8007C028 00078F68  38 21 00 10 */	addi r1, r1, 0x10
/* 8007C02C 00078F6C  4E 80 00 20 */	blr 
.endfn patchTexNoAndTexCoordScale__12J3DTevBlock1Fv

.fn patch__12J3DTevBlock1Fv, global
/* 8007C030 00078F70  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8007C034 00078F74  7C 08 02 A6 */	mflr r0
/* 8007C038 00078F78  90 01 00 14 */	stw r0, 0x14(r1)
/* 8007C03C 00078F7C  81 83 00 00 */	lwz r12, 0(r3)
/* 8007C040 00078F80  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 8007C044 00078F84  7D 89 03 A6 */	mtctr r12
/* 8007C048 00078F88  4E 80 04 21 */	bctrl 
/* 8007C04C 00078F8C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8007C050 00078F90  7C 08 03 A6 */	mtlr r0
/* 8007C054 00078F94  38 21 00 10 */	addi r1, r1, 0x10
/* 8007C058 00078F98  4E 80 00 20 */	blr 
.endfn patch__12J3DTevBlock1Fv

.fn patchTexNo__12J3DTevBlock2Fv, global
/* 8007C05C 00078F9C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8007C060 00078FA0  7C 08 02 A6 */	mflr r0
/* 8007C064 00078FA4  90 01 00 24 */	stw r0, 0x24(r1)
/* 8007C068 00078FA8  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8007C06C 00078FAC  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8007C070 00078FB0  7C 7E 1B 78 */	mr r30, r3
/* 8007C074 00078FB4  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8007C078 00078FB8  3B A0 00 00 */	li r29, 0
/* 8007C07C 00078FBC  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 8007C080 00078FC0  80 03 00 04 */	lwz r0, 4(r3)
/* 8007C084 00078FC4  80 64 00 00 */	lwz r3, 0(r4)
/* 8007C088 00078FC8  7C 03 02 14 */	add r0, r3, r0
/* 8007C08C 00078FCC  90 04 00 08 */	stw r0, 8(r4)
/* 8007C090 00078FD0  80 6D 8E A8 */	lwz r3, __GDCurrentDL@sda21(r13)
/* 8007C094 00078FD4  83 E3 00 08 */	lwz r31, 8(r3)
.L_8007C098:
/* 8007C098 00078FD8  A0 1E 00 08 */	lhz r0, 8(r30)
/* 8007C09C 00078FDC  28 00 FF FF */	cmplwi r0, 0xffff
/* 8007C0A0 00078FE0  41 82 00 10 */	beq .L_8007C0B0
/* 8007C0A4 00078FE4  7F A3 EB 78 */	mr r3, r29
/* 8007C0A8 00078FE8  38 9E 00 08 */	addi r4, r30, 8
/* 8007C0AC 00078FEC  4B FE 92 DD */	bl loadTexNo__FUlRCUs
.L_8007C0B0:
/* 8007C0B0 00078FF0  3B BD 00 01 */	addi r29, r29, 1
/* 8007C0B4 00078FF4  3B DE 00 02 */	addi r30, r30, 2
/* 8007C0B8 00078FF8  28 1D 00 02 */	cmplwi r29, 2
/* 8007C0BC 00078FFC  41 80 FF DC */	blt .L_8007C098
/* 8007C0C0 00079000  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 8007C0C4 00079004  7F E3 FB 78 */	mr r3, r31
/* 8007C0C8 00079008  80 04 00 08 */	lwz r0, 8(r4)
/* 8007C0CC 0007900C  7C 9F 00 50 */	subf r4, r31, r0
/* 8007C0D0 00079010  48 07 06 79 */	bl DCStoreRange
/* 8007C0D4 00079014  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8007C0D8 00079018  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8007C0DC 0007901C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8007C0E0 00079020  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8007C0E4 00079024  7C 08 03 A6 */	mtlr r0
/* 8007C0E8 00079028  38 21 00 20 */	addi r1, r1, 0x20
/* 8007C0EC 0007902C  4E 80 00 20 */	blr 
.endfn patchTexNo__12J3DTevBlock2Fv

.fn patchTevReg__12J3DTevBlock2Fv, global
/* 8007C0F0 00079030  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8007C0F4 00079034  7C 08 02 A6 */	mflr r0
/* 8007C0F8 00079038  90 01 00 34 */	stw r0, 0x34(r1)
/* 8007C0FC 0007903C  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 8007C100 00079040  93 C1 00 28 */	stw r30, 0x28(r1)
/* 8007C104 00079044  93 A1 00 24 */	stw r29, 0x24(r1)
/* 8007C108 00079048  3B A0 00 00 */	li r29, 0
/* 8007C10C 0007904C  93 81 00 20 */	stw r28, 0x20(r1)
/* 8007C110 00079050  7C 7C 1B 78 */	mr r28, r3
/* 8007C114 00079054  7F 9E E3 78 */	mr r30, r28
/* 8007C118 00079058  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 8007C11C 0007905C  80 03 00 68 */	lwz r0, 0x68(r3)
/* 8007C120 00079060  80 64 00 00 */	lwz r3, 0(r4)
/* 8007C124 00079064  7C 03 02 14 */	add r0, r3, r0
/* 8007C128 00079068  90 04 00 08 */	stw r0, 8(r4)
/* 8007C12C 0007906C  80 6D 8E A8 */	lwz r3, __GDCurrentDL@sda21(r13)
/* 8007C130 00079070  83 E3 00 08 */	lwz r31, 8(r3)
.L_8007C134:
/* 8007C134 00079074  80 BE 00 14 */	lwz r5, 0x14(r30)
/* 8007C138 00079078  38 7D 00 01 */	addi r3, r29, 1
/* 8007C13C 0007907C  80 1E 00 18 */	lwz r0, 0x18(r30)
/* 8007C140 00079080  38 81 00 0C */	addi r4, r1, 0xc
/* 8007C144 00079084  90 A1 00 0C */	stw r5, 0xc(r1)
/* 8007C148 00079088  90 01 00 10 */	stw r0, 0x10(r1)
/* 8007C14C 0007908C  4B FF A6 9D */	bl J3DGDSetTevColorS10__F11_GXTevRegID11_GXColorS10
/* 8007C150 00079090  3B BD 00 01 */	addi r29, r29, 1
/* 8007C154 00079094  3B DE 00 08 */	addi r30, r30, 8
/* 8007C158 00079098  28 1D 00 03 */	cmplwi r29, 3
/* 8007C15C 0007909C  41 80 FF D8 */	blt .L_8007C134
/* 8007C160 000790A0  3B A0 00 00 */	li r29, 0
/* 8007C164 000790A4  7F 9E E3 78 */	mr r30, r28
.L_8007C168:
/* 8007C168 000790A8  80 1E 00 45 */	lwz r0, 0x45(r30)
/* 8007C16C 000790AC  7F A3 EB 78 */	mr r3, r29
/* 8007C170 000790B0  38 81 00 08 */	addi r4, r1, 8
/* 8007C174 000790B4  90 01 00 08 */	stw r0, 8(r1)
/* 8007C178 000790B8  4B FF A5 09 */	bl J3DGDSetTevKColor__F14_GXTevKColorID8_GXColor
/* 8007C17C 000790BC  3B BD 00 01 */	addi r29, r29, 1
/* 8007C180 000790C0  3B DE 00 04 */	addi r30, r30, 4
/* 8007C184 000790C4  28 1D 00 04 */	cmplwi r29, 4
/* 8007C188 000790C8  41 80 FF E0 */	blt .L_8007C168
/* 8007C18C 000790CC  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 8007C190 000790D0  7F E3 FB 78 */	mr r3, r31
/* 8007C194 000790D4  80 04 00 08 */	lwz r0, 8(r4)
/* 8007C198 000790D8  7C 9F 00 50 */	subf r4, r31, r0
/* 8007C19C 000790DC  48 07 05 AD */	bl DCStoreRange
/* 8007C1A0 000790E0  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8007C1A4 000790E4  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 8007C1A8 000790E8  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 8007C1AC 000790EC  83 A1 00 24 */	lwz r29, 0x24(r1)
/* 8007C1B0 000790F0  83 81 00 20 */	lwz r28, 0x20(r1)
/* 8007C1B4 000790F4  7C 08 03 A6 */	mtlr r0
/* 8007C1B8 000790F8  38 21 00 30 */	addi r1, r1, 0x30
/* 8007C1BC 000790FC  4E 80 00 20 */	blr 
.endfn patchTevReg__12J3DTevBlock2Fv

.fn patchTexNoAndTexCoordScale__12J3DTevBlock2Fv, global
/* 8007C1C0 00079100  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8007C1C4 00079104  7C 08 02 A6 */	mflr r0
/* 8007C1C8 00079108  90 01 00 24 */	stw r0, 0x24(r1)
/* 8007C1CC 0007910C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8007C1D0 00079110  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8007C1D4 00079114  7C 7E 1B 78 */	mr r30, r3
/* 8007C1D8 00079118  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8007C1DC 0007911C  7F DD F3 78 */	mr r29, r30
/* 8007C1E0 00079120  93 81 00 10 */	stw r28, 0x10(r1)
/* 8007C1E4 00079124  3B 80 00 00 */	li r28, 0
/* 8007C1E8 00079128  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 8007C1EC 0007912C  80 03 00 04 */	lwz r0, 4(r3)
/* 8007C1F0 00079130  80 64 00 00 */	lwz r3, 0(r4)
/* 8007C1F4 00079134  7C 03 02 14 */	add r0, r3, r0
/* 8007C1F8 00079138  90 04 00 08 */	stw r0, 8(r4)
/* 8007C1FC 0007913C  80 6D 8E A8 */	lwz r3, __GDCurrentDL@sda21(r13)
/* 8007C200 00079140  83 E3 00 08 */	lwz r31, 8(r3)
.L_8007C204:
/* 8007C204 00079144  A0 1D 00 08 */	lhz r0, 8(r29)
/* 8007C208 00079148  28 00 FF FF */	cmplwi r0, 0xffff
/* 8007C20C 0007914C  41 82 00 10 */	beq .L_8007C21C
/* 8007C210 00079150  7F 83 E3 78 */	mr r3, r28
/* 8007C214 00079154  38 9D 00 08 */	addi r4, r29, 8
/* 8007C218 00079158  4B FE 91 71 */	bl loadTexNo__FUlRCUs
.L_8007C21C:
/* 8007C21C 0007915C  3B 9C 00 01 */	addi r28, r28, 1
/* 8007C220 00079160  3B BD 00 02 */	addi r29, r29, 2
/* 8007C224 00079164  28 1C 00 02 */	cmplwi r28, 2
/* 8007C228 00079168  41 80 FF DC */	blt .L_8007C204
/* 8007C22C 0007916C  88 9E 00 0C */	lbz r4, 0xc(r30)
/* 8007C230 00079170  38 60 00 00 */	li r3, 0
/* 8007C234 00079174  88 BE 00 0D */	lbz r5, 0xd(r30)
/* 8007C238 00079178  88 DE 00 0E */	lbz r6, 0xe(r30)
/* 8007C23C 0007917C  88 FE 00 10 */	lbz r7, 0x10(r30)
/* 8007C240 00079180  89 1E 00 11 */	lbz r8, 0x11(r30)
/* 8007C244 00079184  89 3E 00 12 */	lbz r9, 0x12(r30)
/* 8007C248 00079188  4B FF A2 B1 */	bl J3DGDSetTevOrder__F13_GXTevStageID13_GXTexCoordID11_GXTexMapID12_GXChannelID13_GXTexCoordID11_GXTexMapID12_GXChannelID
/* 8007C24C 0007918C  88 9E 00 0D */	lbz r4, 0xd(r30)
/* 8007C250 00079190  3C 60 80 51 */	lis r3, sTexCoordScaleTable__6J3DSys@ha
/* 8007C254 00079194  38 03 F4 1C */	addi r0, r3, sTexCoordScaleTable__6J3DSys@l
/* 8007C258 00079198  88 7E 00 0C */	lbz r3, 0xc(r30)
/* 8007C25C 0007919C  54 84 1E B8 */	rlwinm r4, r4, 3, 0x1a, 0x1c
/* 8007C260 000791A0  38 C0 00 00 */	li r6, 0
/* 8007C264 000791A4  7C E0 22 14 */	add r7, r0, r4
/* 8007C268 000791A8  39 20 00 00 */	li r9, 0
/* 8007C26C 000791AC  A0 87 00 04 */	lhz r4, 4(r7)
/* 8007C270 000791B0  A0 07 00 06 */	lhz r0, 6(r7)
/* 8007C274 000791B4  20 A4 00 01 */	subfic r5, r4, 1
/* 8007C278 000791B8  A0 87 00 00 */	lhz r4, 0(r7)
/* 8007C27C 000791BC  20 00 00 01 */	subfic r0, r0, 1
/* 8007C280 000791C0  A0 E7 00 02 */	lhz r7, 2(r7)
/* 8007C284 000791C4  7C A5 00 34 */	cntlzw r5, r5
/* 8007C288 000791C8  7C 00 00 34 */	cntlzw r0, r0
/* 8007C28C 000791CC  54 A5 DE 3E */	rlwinm r5, r5, 0x1b, 0x18, 0x1f
/* 8007C290 000791D0  54 08 DE 3E */	rlwinm r8, r0, 0x1b, 0x18, 0x1f
/* 8007C294 000791D4  4B FF 93 91 */	bl J3DGDSetTexCoordScale2__F13_GXTexCoordIDUsUcUcUsUcUc
/* 8007C298 000791D8  88 9E 00 11 */	lbz r4, 0x11(r30)
/* 8007C29C 000791DC  3C 60 80 51 */	lis r3, sTexCoordScaleTable__6J3DSys@ha
/* 8007C2A0 000791E0  38 63 F4 1C */	addi r3, r3, sTexCoordScaleTable__6J3DSys@l
/* 8007C2A4 000791E4  88 1E 00 10 */	lbz r0, 0x10(r30)
/* 8007C2A8 000791E8  54 84 1E B8 */	rlwinm r4, r4, 3, 0x1a, 0x1c
/* 8007C2AC 000791EC  38 C0 00 00 */	li r6, 0
/* 8007C2B0 000791F0  7C E3 22 14 */	add r7, r3, r4
/* 8007C2B4 000791F4  54 03 07 7E */	clrlwi r3, r0, 0x1d
/* 8007C2B8 000791F8  A0 87 00 04 */	lhz r4, 4(r7)
/* 8007C2BC 000791FC  39 20 00 00 */	li r9, 0
/* 8007C2C0 00079200  A0 07 00 06 */	lhz r0, 6(r7)
/* 8007C2C4 00079204  20 A4 00 01 */	subfic r5, r4, 1
/* 8007C2C8 00079208  A0 87 00 00 */	lhz r4, 0(r7)
/* 8007C2CC 0007920C  20 00 00 01 */	subfic r0, r0, 1
/* 8007C2D0 00079210  A0 E7 00 02 */	lhz r7, 2(r7)
/* 8007C2D4 00079214  7C A5 00 34 */	cntlzw r5, r5
/* 8007C2D8 00079218  7C 00 00 34 */	cntlzw r0, r0
/* 8007C2DC 0007921C  54 A5 DE 3E */	rlwinm r5, r5, 0x1b, 0x18, 0x1f
/* 8007C2E0 00079220  54 08 DE 3E */	rlwinm r8, r0, 0x1b, 0x18, 0x1f
/* 8007C2E4 00079224  4B FF 93 41 */	bl J3DGDSetTexCoordScale2__F13_GXTexCoordIDUsUcUcUsUcUc
/* 8007C2E8 00079228  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 8007C2EC 0007922C  7F E3 FB 78 */	mr r3, r31
/* 8007C2F0 00079230  80 04 00 08 */	lwz r0, 8(r4)
/* 8007C2F4 00079234  7C 9F 00 50 */	subf r4, r31, r0
/* 8007C2F8 00079238  48 07 04 51 */	bl DCStoreRange
/* 8007C2FC 0007923C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8007C300 00079240  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8007C304 00079244  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8007C308 00079248  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8007C30C 0007924C  83 81 00 10 */	lwz r28, 0x10(r1)
/* 8007C310 00079250  7C 08 03 A6 */	mtlr r0
/* 8007C314 00079254  38 21 00 20 */	addi r1, r1, 0x20
/* 8007C318 00079258  4E 80 00 20 */	blr 
.endfn patchTexNoAndTexCoordScale__12J3DTevBlock2Fv

.fn patch__12J3DTevBlock2Fv, global
/* 8007C31C 0007925C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8007C320 00079260  7C 08 02 A6 */	mflr r0
/* 8007C324 00079264  90 01 00 14 */	stw r0, 0x14(r1)
/* 8007C328 00079268  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8007C32C 0007926C  7C 7F 1B 78 */	mr r31, r3
/* 8007C330 00079270  81 83 00 00 */	lwz r12, 0(r3)
/* 8007C334 00079274  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 8007C338 00079278  7D 89 03 A6 */	mtctr r12
/* 8007C33C 0007927C  4E 80 04 21 */	bctrl 
/* 8007C340 00079280  7F E3 FB 78 */	mr r3, r31
/* 8007C344 00079284  81 9F 00 00 */	lwz r12, 0(r31)
/* 8007C348 00079288  81 8C 00 30 */	lwz r12, 0x30(r12)
/* 8007C34C 0007928C  7D 89 03 A6 */	mtctr r12
/* 8007C350 00079290  4E 80 04 21 */	bctrl 
/* 8007C354 00079294  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8007C358 00079298  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8007C35C 0007929C  7C 08 03 A6 */	mtlr r0
/* 8007C360 000792A0  38 21 00 10 */	addi r1, r1, 0x10
/* 8007C364 000792A4  4E 80 00 20 */	blr 
.endfn patch__12J3DTevBlock2Fv

.fn patchTexNo__12J3DTevBlock4Fv, global
/* 8007C368 000792A8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8007C36C 000792AC  7C 08 02 A6 */	mflr r0
/* 8007C370 000792B0  90 01 00 24 */	stw r0, 0x24(r1)
/* 8007C374 000792B4  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8007C378 000792B8  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8007C37C 000792BC  7C 7E 1B 78 */	mr r30, r3
/* 8007C380 000792C0  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8007C384 000792C4  3B A0 00 00 */	li r29, 0
/* 8007C388 000792C8  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 8007C38C 000792CC  80 03 00 04 */	lwz r0, 4(r3)
/* 8007C390 000792D0  80 64 00 00 */	lwz r3, 0(r4)
/* 8007C394 000792D4  7C 03 02 14 */	add r0, r3, r0
/* 8007C398 000792D8  90 04 00 08 */	stw r0, 8(r4)
/* 8007C39C 000792DC  80 6D 8E A8 */	lwz r3, __GDCurrentDL@sda21(r13)
/* 8007C3A0 000792E0  83 E3 00 08 */	lwz r31, 8(r3)
.L_8007C3A4:
/* 8007C3A4 000792E4  A0 1E 00 08 */	lhz r0, 8(r30)
/* 8007C3A8 000792E8  28 00 FF FF */	cmplwi r0, 0xffff
/* 8007C3AC 000792EC  41 82 00 10 */	beq .L_8007C3BC
/* 8007C3B0 000792F0  7F A3 EB 78 */	mr r3, r29
/* 8007C3B4 000792F4  38 9E 00 08 */	addi r4, r30, 8
/* 8007C3B8 000792F8  4B FE 8F D1 */	bl loadTexNo__FUlRCUs
.L_8007C3BC:
/* 8007C3BC 000792FC  3B BD 00 01 */	addi r29, r29, 1
/* 8007C3C0 00079300  3B DE 00 02 */	addi r30, r30, 2
/* 8007C3C4 00079304  28 1D 00 04 */	cmplwi r29, 4
/* 8007C3C8 00079308  41 80 FF DC */	blt .L_8007C3A4
/* 8007C3CC 0007930C  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 8007C3D0 00079310  7F E3 FB 78 */	mr r3, r31
/* 8007C3D4 00079314  80 04 00 08 */	lwz r0, 8(r4)
/* 8007C3D8 00079318  7C 9F 00 50 */	subf r4, r31, r0
/* 8007C3DC 0007931C  48 07 03 6D */	bl DCStoreRange
/* 8007C3E0 00079320  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8007C3E4 00079324  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8007C3E8 00079328  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8007C3EC 0007932C  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8007C3F0 00079330  7C 08 03 A6 */	mtlr r0
/* 8007C3F4 00079334  38 21 00 20 */	addi r1, r1, 0x20
/* 8007C3F8 00079338  4E 80 00 20 */	blr 
.endfn patchTexNo__12J3DTevBlock4Fv

.fn patchTevReg__12J3DTevBlock4Fv, global
/* 8007C3FC 0007933C  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8007C400 00079340  7C 08 02 A6 */	mflr r0
/* 8007C404 00079344  90 01 00 34 */	stw r0, 0x34(r1)
/* 8007C408 00079348  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 8007C40C 0007934C  93 C1 00 28 */	stw r30, 0x28(r1)
/* 8007C410 00079350  93 A1 00 24 */	stw r29, 0x24(r1)
/* 8007C414 00079354  3B A0 00 00 */	li r29, 0
/* 8007C418 00079358  93 81 00 20 */	stw r28, 0x20(r1)
/* 8007C41C 0007935C  7C 7C 1B 78 */	mr r28, r3
/* 8007C420 00079360  7F 9E E3 78 */	mr r30, r28
/* 8007C424 00079364  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 8007C428 00079368  80 03 00 90 */	lwz r0, 0x90(r3)
/* 8007C42C 0007936C  80 64 00 00 */	lwz r3, 0(r4)
/* 8007C430 00079370  7C 03 02 14 */	add r0, r3, r0
/* 8007C434 00079374  90 04 00 08 */	stw r0, 8(r4)
/* 8007C438 00079378  80 6D 8E A8 */	lwz r3, __GDCurrentDL@sda21(r13)
/* 8007C43C 0007937C  83 E3 00 08 */	lwz r31, 8(r3)
.L_8007C440:
/* 8007C440 00079380  80 BE 00 42 */	lwz r5, 0x42(r30)
/* 8007C444 00079384  38 7D 00 01 */	addi r3, r29, 1
/* 8007C448 00079388  80 1E 00 46 */	lwz r0, 0x46(r30)
/* 8007C44C 0007938C  38 81 00 0C */	addi r4, r1, 0xc
/* 8007C450 00079390  90 A1 00 0C */	stw r5, 0xc(r1)
/* 8007C454 00079394  90 01 00 10 */	stw r0, 0x10(r1)
/* 8007C458 00079398  4B FF A3 91 */	bl J3DGDSetTevColorS10__F11_GXTevRegID11_GXColorS10
/* 8007C45C 0007939C  3B BD 00 01 */	addi r29, r29, 1
/* 8007C460 000793A0  3B DE 00 08 */	addi r30, r30, 8
/* 8007C464 000793A4  28 1D 00 03 */	cmplwi r29, 3
/* 8007C468 000793A8  41 80 FF D8 */	blt .L_8007C440
/* 8007C46C 000793AC  3B A0 00 00 */	li r29, 0
/* 8007C470 000793B0  7F 9E E3 78 */	mr r30, r28
.L_8007C474:
/* 8007C474 000793B4  80 1E 00 62 */	lwz r0, 0x62(r30)
/* 8007C478 000793B8  7F A3 EB 78 */	mr r3, r29
/* 8007C47C 000793BC  38 81 00 08 */	addi r4, r1, 8
/* 8007C480 000793C0  90 01 00 08 */	stw r0, 8(r1)
/* 8007C484 000793C4  4B FF A1 FD */	bl J3DGDSetTevKColor__F14_GXTevKColorID8_GXColor
/* 8007C488 000793C8  3B BD 00 01 */	addi r29, r29, 1
/* 8007C48C 000793CC  3B DE 00 04 */	addi r30, r30, 4
/* 8007C490 000793D0  28 1D 00 04 */	cmplwi r29, 4
/* 8007C494 000793D4  41 80 FF E0 */	blt .L_8007C474
/* 8007C498 000793D8  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 8007C49C 000793DC  7F E3 FB 78 */	mr r3, r31
/* 8007C4A0 000793E0  80 04 00 08 */	lwz r0, 8(r4)
/* 8007C4A4 000793E4  7C 9F 00 50 */	subf r4, r31, r0
/* 8007C4A8 000793E8  48 07 02 A1 */	bl DCStoreRange
/* 8007C4AC 000793EC  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8007C4B0 000793F0  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 8007C4B4 000793F4  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 8007C4B8 000793F8  83 A1 00 24 */	lwz r29, 0x24(r1)
/* 8007C4BC 000793FC  83 81 00 20 */	lwz r28, 0x20(r1)
/* 8007C4C0 00079400  7C 08 03 A6 */	mtlr r0
/* 8007C4C4 00079404  38 21 00 30 */	addi r1, r1, 0x30
/* 8007C4C8 00079408  4E 80 00 20 */	blr 
.endfn patchTevReg__12J3DTevBlock4Fv

.fn patchTexNoAndTexCoordScale__12J3DTevBlock4Fv, global
/* 8007C4CC 0007940C  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8007C4D0 00079410  7C 08 02 A6 */	mflr r0
/* 8007C4D4 00079414  90 01 00 34 */	stw r0, 0x34(r1)
/* 8007C4D8 00079418  BF 21 00 14 */	stmw r25, 0x14(r1)
/* 8007C4DC 0007941C  7C 7A 1B 78 */	mr r26, r3
/* 8007C4E0 00079420  7F 5B D3 78 */	mr r27, r26
/* 8007C4E4 00079424  3B 20 00 00 */	li r25, 0
/* 8007C4E8 00079428  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 8007C4EC 0007942C  80 03 00 04 */	lwz r0, 4(r3)
/* 8007C4F0 00079430  80 64 00 00 */	lwz r3, 0(r4)
/* 8007C4F4 00079434  7C 03 02 14 */	add r0, r3, r0
/* 8007C4F8 00079438  90 04 00 08 */	stw r0, 8(r4)
/* 8007C4FC 0007943C  80 6D 8E A8 */	lwz r3, __GDCurrentDL@sda21(r13)
/* 8007C500 00079440  8B 9A 00 20 */	lbz r28, 0x20(r26)
/* 8007C504 00079444  83 C3 00 08 */	lwz r30, 8(r3)
.L_8007C508:
/* 8007C508 00079448  A0 1B 00 08 */	lhz r0, 8(r27)
/* 8007C50C 0007944C  28 00 FF FF */	cmplwi r0, 0xffff
/* 8007C510 00079450  41 82 00 10 */	beq .L_8007C520
/* 8007C514 00079454  7F 23 CB 78 */	mr r3, r25
/* 8007C518 00079458  38 9B 00 08 */	addi r4, r27, 8
/* 8007C51C 0007945C  4B FE 8E 6D */	bl loadTexNo__FUlRCUs
.L_8007C520:
/* 8007C520 00079460  3B 39 00 01 */	addi r25, r25, 1
/* 8007C524 00079464  3B 7B 00 02 */	addi r27, r27, 2
/* 8007C528 00079468  28 19 00 08 */	cmplwi r25, 8
/* 8007C52C 0007946C  41 80 FF DC */	blt .L_8007C508
/* 8007C530 00079470  3C 60 80 51 */	lis r3, sTexCoordScaleTable__6J3DSys@ha
/* 8007C534 00079474  7F 5D D3 78 */	mr r29, r26
/* 8007C538 00079478  3B E3 F4 1C */	addi r31, r3, sTexCoordScaleTable__6J3DSys@l
/* 8007C53C 0007947C  3B 60 00 00 */	li r27, 0
/* 8007C540 00079480  48 00 00 C8 */	b .L_8007C608
.L_8007C544:
/* 8007C544 00079484  38 1B 00 01 */	addi r0, r27, 1
/* 8007C548 00079488  88 9D 00 10 */	lbz r4, 0x10(r29)
/* 8007C54C 0007948C  54 00 10 3A */	slwi r0, r0, 2
/* 8007C550 00079490  88 BD 00 11 */	lbz r5, 0x11(r29)
/* 8007C554 00079494  7F 3A 02 14 */	add r25, r26, r0
/* 8007C558 00079498  88 DD 00 12 */	lbz r6, 0x12(r29)
/* 8007C55C 0007949C  88 F9 00 10 */	lbz r7, 0x10(r25)
/* 8007C560 000794A0  7F 63 DB 78 */	mr r3, r27
/* 8007C564 000794A4  89 19 00 11 */	lbz r8, 0x11(r25)
/* 8007C568 000794A8  89 39 00 12 */	lbz r9, 0x12(r25)
/* 8007C56C 000794AC  4B FF 9F 8D */	bl J3DGDSetTevOrder__F13_GXTevStageID13_GXTexCoordID11_GXTexMapID12_GXChannelID13_GXTexCoordID11_GXTexMapID12_GXChannelID
/* 8007C570 000794B0  88 7D 00 11 */	lbz r3, 0x11(r29)
/* 8007C574 000794B4  38 C0 00 00 */	li r6, 0
/* 8007C578 000794B8  88 1D 00 10 */	lbz r0, 0x10(r29)
/* 8007C57C 000794BC  39 20 00 00 */	li r9, 0
/* 8007C580 000794C0  54 63 1E B8 */	rlwinm r3, r3, 3, 0x1a, 0x1c
/* 8007C584 000794C4  7C FF 1A 14 */	add r7, r31, r3
/* 8007C588 000794C8  A0 87 00 04 */	lhz r4, 4(r7)
/* 8007C58C 000794CC  54 03 07 7E */	clrlwi r3, r0, 0x1d
/* 8007C590 000794D0  A0 07 00 06 */	lhz r0, 6(r7)
/* 8007C594 000794D4  20 A4 00 01 */	subfic r5, r4, 1
/* 8007C598 000794D8  A0 87 00 00 */	lhz r4, 0(r7)
/* 8007C59C 000794DC  20 00 00 01 */	subfic r0, r0, 1
/* 8007C5A0 000794E0  A0 E7 00 02 */	lhz r7, 2(r7)
/* 8007C5A4 000794E4  7C A5 00 34 */	cntlzw r5, r5
/* 8007C5A8 000794E8  7C 00 00 34 */	cntlzw r0, r0
/* 8007C5AC 000794EC  54 A5 DE 3E */	rlwinm r5, r5, 0x1b, 0x18, 0x1f
/* 8007C5B0 000794F0  54 08 DE 3E */	rlwinm r8, r0, 0x1b, 0x18, 0x1f
/* 8007C5B4 000794F4  4B FF 90 71 */	bl J3DGDSetTexCoordScale2__F13_GXTexCoordIDUsUcUcUsUcUc
/* 8007C5B8 000794F8  88 79 00 11 */	lbz r3, 0x11(r25)
/* 8007C5BC 000794FC  38 C0 00 00 */	li r6, 0
/* 8007C5C0 00079500  88 19 00 10 */	lbz r0, 0x10(r25)
/* 8007C5C4 00079504  39 20 00 00 */	li r9, 0
/* 8007C5C8 00079508  54 63 1E B8 */	rlwinm r3, r3, 3, 0x1a, 0x1c
/* 8007C5CC 0007950C  7C FF 1A 14 */	add r7, r31, r3
/* 8007C5D0 00079510  A0 87 00 04 */	lhz r4, 4(r7)
/* 8007C5D4 00079514  54 03 07 7E */	clrlwi r3, r0, 0x1d
/* 8007C5D8 00079518  A0 07 00 06 */	lhz r0, 6(r7)
/* 8007C5DC 0007951C  20 A4 00 01 */	subfic r5, r4, 1
/* 8007C5E0 00079520  A0 87 00 00 */	lhz r4, 0(r7)
/* 8007C5E4 00079524  20 00 00 01 */	subfic r0, r0, 1
/* 8007C5E8 00079528  A0 E7 00 02 */	lhz r7, 2(r7)
/* 8007C5EC 0007952C  7C A5 00 34 */	cntlzw r5, r5
/* 8007C5F0 00079530  7C 00 00 34 */	cntlzw r0, r0
/* 8007C5F4 00079534  54 A5 DE 3E */	rlwinm r5, r5, 0x1b, 0x18, 0x1f
/* 8007C5F8 00079538  54 08 DE 3E */	rlwinm r8, r0, 0x1b, 0x18, 0x1f
/* 8007C5FC 0007953C  4B FF 90 29 */	bl J3DGDSetTexCoordScale2__F13_GXTexCoordIDUsUcUcUsUcUc
/* 8007C600 00079540  3B BD 00 08 */	addi r29, r29, 8
/* 8007C604 00079544  3B 7B 00 02 */	addi r27, r27, 2
.L_8007C608:
/* 8007C608 00079548  7C 1B E0 40 */	cmplw r27, r28
/* 8007C60C 0007954C  41 80 FF 38 */	blt .L_8007C544
/* 8007C610 00079550  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 8007C614 00079554  7F C3 F3 78 */	mr r3, r30
/* 8007C618 00079558  80 04 00 08 */	lwz r0, 8(r4)
/* 8007C61C 0007955C  7C 9E 00 50 */	subf r4, r30, r0
/* 8007C620 00079560  48 07 01 29 */	bl DCStoreRange
/* 8007C624 00079564  BB 21 00 14 */	lmw r25, 0x14(r1)
/* 8007C628 00079568  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8007C62C 0007956C  7C 08 03 A6 */	mtlr r0
/* 8007C630 00079570  38 21 00 30 */	addi r1, r1, 0x30
/* 8007C634 00079574  4E 80 00 20 */	blr 
.endfn patchTexNoAndTexCoordScale__12J3DTevBlock4Fv

.fn patch__12J3DTevBlock4Fv, global
/* 8007C638 00079578  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8007C63C 0007957C  7C 08 02 A6 */	mflr r0
/* 8007C640 00079580  90 01 00 14 */	stw r0, 0x14(r1)
/* 8007C644 00079584  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8007C648 00079588  7C 7F 1B 78 */	mr r31, r3
/* 8007C64C 0007958C  81 83 00 00 */	lwz r12, 0(r3)
/* 8007C650 00079590  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 8007C654 00079594  7D 89 03 A6 */	mtctr r12
/* 8007C658 00079598  4E 80 04 21 */	bctrl 
/* 8007C65C 0007959C  7F E3 FB 78 */	mr r3, r31
/* 8007C660 000795A0  81 9F 00 00 */	lwz r12, 0(r31)
/* 8007C664 000795A4  81 8C 00 30 */	lwz r12, 0x30(r12)
/* 8007C668 000795A8  7D 89 03 A6 */	mtctr r12
/* 8007C66C 000795AC  4E 80 04 21 */	bctrl 
/* 8007C670 000795B0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8007C674 000795B4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8007C678 000795B8  7C 08 03 A6 */	mtlr r0
/* 8007C67C 000795BC  38 21 00 10 */	addi r1, r1, 0x10
/* 8007C680 000795C0  4E 80 00 20 */	blr 
.endfn patch__12J3DTevBlock4Fv

.fn patchTexNo__13J3DTevBlock16Fv, global
/* 8007C684 000795C4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8007C688 000795C8  7C 08 02 A6 */	mflr r0
/* 8007C68C 000795CC  90 01 00 24 */	stw r0, 0x24(r1)
/* 8007C690 000795D0  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8007C694 000795D4  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8007C698 000795D8  7C 7E 1B 78 */	mr r30, r3
/* 8007C69C 000795DC  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8007C6A0 000795E0  3B A0 00 00 */	li r29, 0
/* 8007C6A4 000795E4  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 8007C6A8 000795E8  80 03 00 04 */	lwz r0, 4(r3)
/* 8007C6AC 000795EC  80 64 00 00 */	lwz r3, 0(r4)
/* 8007C6B0 000795F0  7C 03 02 14 */	add r0, r3, r0
/* 8007C6B4 000795F4  90 04 00 08 */	stw r0, 8(r4)
/* 8007C6B8 000795F8  80 6D 8E A8 */	lwz r3, __GDCurrentDL@sda21(r13)
/* 8007C6BC 000795FC  83 E3 00 08 */	lwz r31, 8(r3)
.L_8007C6C0:
/* 8007C6C0 00079600  A0 1E 00 08 */	lhz r0, 8(r30)
/* 8007C6C4 00079604  28 00 FF FF */	cmplwi r0, 0xffff
/* 8007C6C8 00079608  41 82 00 10 */	beq .L_8007C6D8
/* 8007C6CC 0007960C  7F A3 EB 78 */	mr r3, r29
/* 8007C6D0 00079610  38 9E 00 08 */	addi r4, r30, 8
/* 8007C6D4 00079614  4B FE 8C B5 */	bl loadTexNo__FUlRCUs
.L_8007C6D8:
/* 8007C6D8 00079618  3B BD 00 01 */	addi r29, r29, 1
/* 8007C6DC 0007961C  3B DE 00 02 */	addi r30, r30, 2
/* 8007C6E0 00079620  28 1D 00 08 */	cmplwi r29, 8
/* 8007C6E4 00079624  41 80 FF DC */	blt .L_8007C6C0
/* 8007C6E8 00079628  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 8007C6EC 0007962C  7F E3 FB 78 */	mr r3, r31
/* 8007C6F0 00079630  80 04 00 08 */	lwz r0, 8(r4)
/* 8007C6F4 00079634  7C 9F 00 50 */	subf r4, r31, r0
/* 8007C6F8 00079638  48 07 00 51 */	bl DCStoreRange
/* 8007C6FC 0007963C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8007C700 00079640  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8007C704 00079644  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8007C708 00079648  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8007C70C 0007964C  7C 08 03 A6 */	mtlr r0
/* 8007C710 00079650  38 21 00 20 */	addi r1, r1, 0x20
/* 8007C714 00079654  4E 80 00 20 */	blr 
.endfn patchTexNo__13J3DTevBlock16Fv

.fn patchTevReg__13J3DTevBlock16Fv, global
/* 8007C718 00079658  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8007C71C 0007965C  7C 08 02 A6 */	mflr r0
/* 8007C720 00079660  90 01 00 34 */	stw r0, 0x34(r1)
/* 8007C724 00079664  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 8007C728 00079668  93 C1 00 28 */	stw r30, 0x28(r1)
/* 8007C72C 0007966C  93 A1 00 24 */	stw r29, 0x24(r1)
/* 8007C730 00079670  3B A0 00 00 */	li r29, 0
/* 8007C734 00079674  93 81 00 20 */	stw r28, 0x20(r1)
/* 8007C738 00079678  7C 7C 1B 78 */	mr r28, r3
/* 8007C73C 0007967C  7F 9E E3 78 */	mr r30, r28
/* 8007C740 00079680  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 8007C744 00079684  80 03 01 70 */	lwz r0, 0x170(r3)
/* 8007C748 00079688  80 64 00 00 */	lwz r3, 0(r4)
/* 8007C74C 0007968C  7C 03 02 14 */	add r0, r3, r0
/* 8007C750 00079690  90 04 00 08 */	stw r0, 8(r4)
/* 8007C754 00079694  80 6D 8E A8 */	lwz r3, __GDCurrentDL@sda21(r13)
/* 8007C758 00079698  83 E3 00 08 */	lwz r31, 8(r3)
.L_8007C75C:
/* 8007C75C 0007969C  80 BE 00 DA */	lwz r5, 0xda(r30)
/* 8007C760 000796A0  38 7D 00 01 */	addi r3, r29, 1
/* 8007C764 000796A4  80 1E 00 DE */	lwz r0, 0xde(r30)
/* 8007C768 000796A8  38 81 00 0C */	addi r4, r1, 0xc
/* 8007C76C 000796AC  90 A1 00 0C */	stw r5, 0xc(r1)
/* 8007C770 000796B0  90 01 00 10 */	stw r0, 0x10(r1)
/* 8007C774 000796B4  4B FF A0 75 */	bl J3DGDSetTevColorS10__F11_GXTevRegID11_GXColorS10
/* 8007C778 000796B8  3B BD 00 01 */	addi r29, r29, 1
/* 8007C77C 000796BC  3B DE 00 08 */	addi r30, r30, 8
/* 8007C780 000796C0  28 1D 00 03 */	cmplwi r29, 3
/* 8007C784 000796C4  41 80 FF D8 */	blt .L_8007C75C
/* 8007C788 000796C8  3B A0 00 00 */	li r29, 0
/* 8007C78C 000796CC  7F 9E E3 78 */	mr r30, r28
.L_8007C790:
/* 8007C790 000796D0  80 1E 00 FA */	lwz r0, 0xfa(r30)
/* 8007C794 000796D4  7F A3 EB 78 */	mr r3, r29
/* 8007C798 000796D8  38 81 00 08 */	addi r4, r1, 8
/* 8007C79C 000796DC  90 01 00 08 */	stw r0, 8(r1)
/* 8007C7A0 000796E0  4B FF 9E E1 */	bl J3DGDSetTevKColor__F14_GXTevKColorID8_GXColor
/* 8007C7A4 000796E4  3B BD 00 01 */	addi r29, r29, 1
/* 8007C7A8 000796E8  3B DE 00 04 */	addi r30, r30, 4
/* 8007C7AC 000796EC  28 1D 00 04 */	cmplwi r29, 4
/* 8007C7B0 000796F0  41 80 FF E0 */	blt .L_8007C790
/* 8007C7B4 000796F4  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 8007C7B8 000796F8  7F E3 FB 78 */	mr r3, r31
/* 8007C7BC 000796FC  80 04 00 08 */	lwz r0, 8(r4)
/* 8007C7C0 00079700  7C 9F 00 50 */	subf r4, r31, r0
/* 8007C7C4 00079704  48 06 FF 85 */	bl DCStoreRange
/* 8007C7C8 00079708  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8007C7CC 0007970C  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 8007C7D0 00079710  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 8007C7D4 00079714  83 A1 00 24 */	lwz r29, 0x24(r1)
/* 8007C7D8 00079718  83 81 00 20 */	lwz r28, 0x20(r1)
/* 8007C7DC 0007971C  7C 08 03 A6 */	mtlr r0
/* 8007C7E0 00079720  38 21 00 30 */	addi r1, r1, 0x30
/* 8007C7E4 00079724  4E 80 00 20 */	blr 
.endfn patchTevReg__13J3DTevBlock16Fv

.fn patchTexNoAndTexCoordScale__13J3DTevBlock16Fv, global
/* 8007C7E8 00079728  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8007C7EC 0007972C  7C 08 02 A6 */	mflr r0
/* 8007C7F0 00079730  90 01 00 34 */	stw r0, 0x34(r1)
/* 8007C7F4 00079734  BF 21 00 14 */	stmw r25, 0x14(r1)
/* 8007C7F8 00079738  7C 7A 1B 78 */	mr r26, r3
/* 8007C7FC 0007973C  7F 5B D3 78 */	mr r27, r26
/* 8007C800 00079740  3B 20 00 00 */	li r25, 0
/* 8007C804 00079744  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 8007C808 00079748  80 03 00 04 */	lwz r0, 4(r3)
/* 8007C80C 0007974C  80 64 00 00 */	lwz r3, 0(r4)
/* 8007C810 00079750  7C 03 02 14 */	add r0, r3, r0
/* 8007C814 00079754  90 04 00 08 */	stw r0, 8(r4)
/* 8007C818 00079758  80 6D 8E A8 */	lwz r3, __GDCurrentDL@sda21(r13)
/* 8007C81C 0007975C  8B 9A 00 58 */	lbz r28, 0x58(r26)
/* 8007C820 00079760  83 C3 00 08 */	lwz r30, 8(r3)
.L_8007C824:
/* 8007C824 00079764  A0 1B 00 08 */	lhz r0, 8(r27)
/* 8007C828 00079768  28 00 FF FF */	cmplwi r0, 0xffff
/* 8007C82C 0007976C  41 82 00 10 */	beq .L_8007C83C
/* 8007C830 00079770  7F 23 CB 78 */	mr r3, r25
/* 8007C834 00079774  38 9B 00 08 */	addi r4, r27, 8
/* 8007C838 00079778  4B FE 8B 51 */	bl loadTexNo__FUlRCUs
.L_8007C83C:
/* 8007C83C 0007977C  3B 39 00 01 */	addi r25, r25, 1
/* 8007C840 00079780  3B 7B 00 02 */	addi r27, r27, 2
/* 8007C844 00079784  28 19 00 08 */	cmplwi r25, 8
/* 8007C848 00079788  41 80 FF DC */	blt .L_8007C824
/* 8007C84C 0007978C  3C 60 80 51 */	lis r3, sTexCoordScaleTable__6J3DSys@ha
/* 8007C850 00079790  7F 5D D3 78 */	mr r29, r26
/* 8007C854 00079794  3B E3 F4 1C */	addi r31, r3, sTexCoordScaleTable__6J3DSys@l
/* 8007C858 00079798  3B 60 00 00 */	li r27, 0
/* 8007C85C 0007979C  48 00 00 C8 */	b .L_8007C924
.L_8007C860:
/* 8007C860 000797A0  38 1B 00 01 */	addi r0, r27, 1
/* 8007C864 000797A4  88 9D 00 18 */	lbz r4, 0x18(r29)
/* 8007C868 000797A8  54 00 10 3A */	slwi r0, r0, 2
/* 8007C86C 000797AC  88 BD 00 19 */	lbz r5, 0x19(r29)
/* 8007C870 000797B0  7F 3A 02 14 */	add r25, r26, r0
/* 8007C874 000797B4  88 DD 00 1A */	lbz r6, 0x1a(r29)
/* 8007C878 000797B8  88 F9 00 18 */	lbz r7, 0x18(r25)
/* 8007C87C 000797BC  7F 63 DB 78 */	mr r3, r27
/* 8007C880 000797C0  89 19 00 19 */	lbz r8, 0x19(r25)
/* 8007C884 000797C4  89 39 00 1A */	lbz r9, 0x1a(r25)
/* 8007C888 000797C8  4B FF 9C 71 */	bl J3DGDSetTevOrder__F13_GXTevStageID13_GXTexCoordID11_GXTexMapID12_GXChannelID13_GXTexCoordID11_GXTexMapID12_GXChannelID
/* 8007C88C 000797CC  88 7D 00 19 */	lbz r3, 0x19(r29)
/* 8007C890 000797D0  38 C0 00 00 */	li r6, 0
/* 8007C894 000797D4  88 1D 00 18 */	lbz r0, 0x18(r29)
/* 8007C898 000797D8  39 20 00 00 */	li r9, 0
/* 8007C89C 000797DC  54 63 1E B8 */	rlwinm r3, r3, 3, 0x1a, 0x1c
/* 8007C8A0 000797E0  7C FF 1A 14 */	add r7, r31, r3
/* 8007C8A4 000797E4  A0 87 00 04 */	lhz r4, 4(r7)
/* 8007C8A8 000797E8  54 03 07 7E */	clrlwi r3, r0, 0x1d
/* 8007C8AC 000797EC  A0 07 00 06 */	lhz r0, 6(r7)
/* 8007C8B0 000797F0  20 A4 00 01 */	subfic r5, r4, 1
/* 8007C8B4 000797F4  A0 87 00 00 */	lhz r4, 0(r7)
/* 8007C8B8 000797F8  20 00 00 01 */	subfic r0, r0, 1
/* 8007C8BC 000797FC  A0 E7 00 02 */	lhz r7, 2(r7)
/* 8007C8C0 00079800  7C A5 00 34 */	cntlzw r5, r5
/* 8007C8C4 00079804  7C 00 00 34 */	cntlzw r0, r0
/* 8007C8C8 00079808  54 A5 DE 3E */	rlwinm r5, r5, 0x1b, 0x18, 0x1f
/* 8007C8CC 0007980C  54 08 DE 3E */	rlwinm r8, r0, 0x1b, 0x18, 0x1f
/* 8007C8D0 00079810  4B FF 8D 55 */	bl J3DGDSetTexCoordScale2__F13_GXTexCoordIDUsUcUcUsUcUc
/* 8007C8D4 00079814  88 79 00 19 */	lbz r3, 0x19(r25)
/* 8007C8D8 00079818  38 C0 00 00 */	li r6, 0
/* 8007C8DC 0007981C  88 19 00 18 */	lbz r0, 0x18(r25)
/* 8007C8E0 00079820  39 20 00 00 */	li r9, 0
/* 8007C8E4 00079824  54 63 1E B8 */	rlwinm r3, r3, 3, 0x1a, 0x1c
/* 8007C8E8 00079828  7C FF 1A 14 */	add r7, r31, r3
/* 8007C8EC 0007982C  A0 87 00 04 */	lhz r4, 4(r7)
/* 8007C8F0 00079830  54 03 07 7E */	clrlwi r3, r0, 0x1d
/* 8007C8F4 00079834  A0 07 00 06 */	lhz r0, 6(r7)
/* 8007C8F8 00079838  20 A4 00 01 */	subfic r5, r4, 1
/* 8007C8FC 0007983C  A0 87 00 00 */	lhz r4, 0(r7)
/* 8007C900 00079840  20 00 00 01 */	subfic r0, r0, 1
/* 8007C904 00079844  A0 E7 00 02 */	lhz r7, 2(r7)
/* 8007C908 00079848  7C A5 00 34 */	cntlzw r5, r5
/* 8007C90C 0007984C  7C 00 00 34 */	cntlzw r0, r0
/* 8007C910 00079850  54 A5 DE 3E */	rlwinm r5, r5, 0x1b, 0x18, 0x1f
/* 8007C914 00079854  54 08 DE 3E */	rlwinm r8, r0, 0x1b, 0x18, 0x1f
/* 8007C918 00079858  4B FF 8D 0D */	bl J3DGDSetTexCoordScale2__F13_GXTexCoordIDUsUcUcUsUcUc
/* 8007C91C 0007985C  3B BD 00 08 */	addi r29, r29, 8
/* 8007C920 00079860  3B 7B 00 02 */	addi r27, r27, 2
.L_8007C924:
/* 8007C924 00079864  7C 1B E0 40 */	cmplw r27, r28
/* 8007C928 00079868  41 80 FF 38 */	blt .L_8007C860
/* 8007C92C 0007986C  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 8007C930 00079870  7F C3 F3 78 */	mr r3, r30
/* 8007C934 00079874  80 04 00 08 */	lwz r0, 8(r4)
/* 8007C938 00079878  7C 9E 00 50 */	subf r4, r30, r0
/* 8007C93C 0007987C  48 06 FE 0D */	bl DCStoreRange
/* 8007C940 00079880  BB 21 00 14 */	lmw r25, 0x14(r1)
/* 8007C944 00079884  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8007C948 00079888  7C 08 03 A6 */	mtlr r0
/* 8007C94C 0007988C  38 21 00 30 */	addi r1, r1, 0x30
/* 8007C950 00079890  4E 80 00 20 */	blr 
.endfn patchTexNoAndTexCoordScale__13J3DTevBlock16Fv

.fn patch__13J3DTevBlock16Fv, global
/* 8007C954 00079894  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8007C958 00079898  7C 08 02 A6 */	mflr r0
/* 8007C95C 0007989C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8007C960 000798A0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8007C964 000798A4  7C 7F 1B 78 */	mr r31, r3
/* 8007C968 000798A8  81 83 00 00 */	lwz r12, 0(r3)
/* 8007C96C 000798AC  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 8007C970 000798B0  7D 89 03 A6 */	mtctr r12
/* 8007C974 000798B4  4E 80 04 21 */	bctrl 
/* 8007C978 000798B8  7F E3 FB 78 */	mr r3, r31
/* 8007C97C 000798BC  81 9F 00 00 */	lwz r12, 0(r31)
/* 8007C980 000798C0  81 8C 00 30 */	lwz r12, 0x30(r12)
/* 8007C984 000798C4  7D 89 03 A6 */	mtctr r12
/* 8007C988 000798C8  4E 80 04 21 */	bctrl 
/* 8007C98C 000798CC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8007C990 000798D0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8007C994 000798D4  7C 08 03 A6 */	mtlr r0
/* 8007C998 000798D8  38 21 00 10 */	addi r1, r1, 0x10
/* 8007C99C 000798DC  4E 80 00 20 */	blr 
.endfn patch__13J3DTevBlock16Fv

.fn diff__11J3DTevBlockFUl, global
/* 8007C9A0 000798E0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8007C9A4 000798E4  7C 08 02 A6 */	mflr r0
/* 8007C9A8 000798E8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8007C9AC 000798EC  54 80 87 3F */	rlwinm. r0, r4, 0x10, 0x1c, 0x1f
/* 8007C9B0 000798F0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8007C9B4 000798F4  7C 9F 23 78 */	mr r31, r4
/* 8007C9B8 000798F8  93 C1 00 08 */	stw r30, 8(r1)
/* 8007C9BC 000798FC  7C 7E 1B 78 */	mr r30, r3
/* 8007C9C0 00079900  41 82 00 14 */	beq .L_8007C9D4
/* 8007C9C4 00079904  81 83 00 00 */	lwz r12, 0(r3)
/* 8007C9C8 00079908  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8007C9CC 0007990C  7D 89 03 A6 */	mtctr r12
/* 8007C9D0 00079910  4E 80 04 21 */	bctrl 
.L_8007C9D4:
/* 8007C9D4 00079914  57 E0 01 4B */	rlwinm. r0, r31, 0, 5, 5
/* 8007C9D8 00079918  41 82 00 18 */	beq .L_8007C9F0
/* 8007C9DC 0007991C  7F C3 F3 78 */	mr r3, r30
/* 8007C9E0 00079920  81 9E 00 00 */	lwz r12, 0(r30)
/* 8007C9E4 00079924  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8007C9E8 00079928  7D 89 03 A6 */	mtctr r12
/* 8007C9EC 0007992C  4E 80 04 21 */	bctrl 
.L_8007C9F0:
/* 8007C9F0 00079930  57 E0 67 3F */	rlwinm. r0, r31, 0xc, 0x1c, 0x1f
/* 8007C9F4 00079934  41 82 00 34 */	beq .L_8007CA28
/* 8007C9F8 00079938  7F C3 F3 78 */	mr r3, r30
/* 8007C9FC 0007993C  81 9E 00 00 */	lwz r12, 0(r30)
/* 8007CA00 00079940  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8007CA04 00079944  7D 89 03 A6 */	mtctr r12
/* 8007CA08 00079948  4E 80 04 21 */	bctrl 
/* 8007CA0C 0007994C  57 E0 01 09 */	rlwinm. r0, r31, 0, 4, 4
/* 8007CA10 00079950  41 82 00 18 */	beq .L_8007CA28
/* 8007CA14 00079954  7F C3 F3 78 */	mr r3, r30
/* 8007CA18 00079958  81 9E 00 00 */	lwz r12, 0(r30)
/* 8007CA1C 0007995C  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8007CA20 00079960  7D 89 03 A6 */	mtctr r12
/* 8007CA24 00079964  4E 80 04 21 */	bctrl 
.L_8007CA28:
/* 8007CA28 00079968  57 E0 01 CF */	rlwinm. r0, r31, 0, 7, 7
/* 8007CA2C 0007996C  41 82 00 18 */	beq .L_8007CA44
/* 8007CA30 00079970  7F C3 F3 78 */	mr r3, r30
/* 8007CA34 00079974  81 9E 00 00 */	lwz r12, 0(r30)
/* 8007CA38 00079978  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8007CA3C 0007997C  7D 89 03 A6 */	mtctr r12
/* 8007CA40 00079980  4E 80 04 21 */	bctrl 
.L_8007CA44:
/* 8007CA44 00079984  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8007CA48 00079988  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8007CA4C 0007998C  83 C1 00 08 */	lwz r30, 8(r1)
/* 8007CA50 00079990  7C 08 03 A6 */	mtlr r0
/* 8007CA54 00079994  38 21 00 10 */	addi r1, r1, 0x10
/* 8007CA58 00079998  4E 80 00 20 */	blr 
.endfn diff__11J3DTevBlockFUl

.fn diffTexNo__18J3DTevBlockPatchedFv, global
/* 8007CA5C 0007999C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8007CA60 000799A0  7C 08 02 A6 */	mflr r0
/* 8007CA64 000799A4  90 01 00 14 */	stw r0, 0x14(r1)
/* 8007CA68 000799A8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8007CA6C 000799AC  7C 7F 1B 78 */	mr r31, r3
/* 8007CA70 000799B0  93 C1 00 08 */	stw r30, 8(r1)
/* 8007CA74 000799B4  3B C0 00 00 */	li r30, 0
.L_8007CA78:
/* 8007CA78 000799B8  A0 1F 00 08 */	lhz r0, 8(r31)
/* 8007CA7C 000799BC  28 00 FF FF */	cmplwi r0, 0xffff
/* 8007CA80 000799C0  41 82 00 10 */	beq .L_8007CA90
/* 8007CA84 000799C4  7F C3 F3 78 */	mr r3, r30
/* 8007CA88 000799C8  38 9F 00 08 */	addi r4, r31, 8
/* 8007CA8C 000799CC  4B FE 88 FD */	bl loadTexNo__FUlRCUs
.L_8007CA90:
/* 8007CA90 000799D0  3B DE 00 01 */	addi r30, r30, 1
/* 8007CA94 000799D4  3B FF 00 02 */	addi r31, r31, 2
/* 8007CA98 000799D8  28 1E 00 08 */	cmplwi r30, 8
/* 8007CA9C 000799DC  41 80 FF DC */	blt .L_8007CA78
/* 8007CAA0 000799E0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8007CAA4 000799E4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8007CAA8 000799E8  83 C1 00 08 */	lwz r30, 8(r1)
/* 8007CAAC 000799EC  7C 08 03 A6 */	mtlr r0
/* 8007CAB0 000799F0  38 21 00 10 */	addi r1, r1, 0x10
/* 8007CAB4 000799F4  4E 80 00 20 */	blr 
.endfn diffTexNo__18J3DTevBlockPatchedFv

.fn diffTevStage__18J3DTevBlockPatchedFv, global
/* 8007CAB8 000799F8  88 03 00 D0 */	lbz r0, 0xd0(r3)
/* 8007CABC 000799FC  7C 09 03 A6 */	mtctr r0
/* 8007CAC0 00079A00  28 00 00 00 */	cmplwi r0, 0
/* 8007CAC4 00079A04  4C 81 00 20 */	blelr 
.L_8007CAC8:
/* 8007CAC8 00079A08  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 8007CACC 00079A0C  39 20 00 61 */	li r9, 0x61
/* 8007CAD0 00079A10  81 43 00 38 */	lwz r10, 0x38(r3)
/* 8007CAD4 00079A14  80 85 00 08 */	lwz r4, 8(r5)
/* 8007CAD8 00079A18  55 48 46 3E */	srwi r8, r10, 0x18
/* 8007CADC 00079A1C  55 47 86 3E */	rlwinm r7, r10, 0x10, 0x18, 0x1f
/* 8007CAE0 00079A20  38 04 00 01 */	addi r0, r4, 1
/* 8007CAE4 00079A24  55 46 C6 3E */	rlwinm r6, r10, 0x18, 0x18, 0x1f
/* 8007CAE8 00079A28  90 05 00 08 */	stw r0, 8(r5)
/* 8007CAEC 00079A2C  99 24 00 00 */	stb r9, 0(r4)
/* 8007CAF0 00079A30  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 8007CAF4 00079A34  80 85 00 08 */	lwz r4, 8(r5)
/* 8007CAF8 00079A38  38 04 00 01 */	addi r0, r4, 1
/* 8007CAFC 00079A3C  90 05 00 08 */	stw r0, 8(r5)
/* 8007CB00 00079A40  99 04 00 00 */	stb r8, 0(r4)
/* 8007CB04 00079A44  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 8007CB08 00079A48  80 85 00 08 */	lwz r4, 8(r5)
/* 8007CB0C 00079A4C  38 04 00 01 */	addi r0, r4, 1
/* 8007CB10 00079A50  90 05 00 08 */	stw r0, 8(r5)
/* 8007CB14 00079A54  98 E4 00 00 */	stb r7, 0(r4)
/* 8007CB18 00079A58  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 8007CB1C 00079A5C  80 85 00 08 */	lwz r4, 8(r5)
/* 8007CB20 00079A60  38 04 00 01 */	addi r0, r4, 1
/* 8007CB24 00079A64  90 05 00 08 */	stw r0, 8(r5)
/* 8007CB28 00079A68  98 C4 00 00 */	stb r6, 0(r4)
/* 8007CB2C 00079A6C  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 8007CB30 00079A70  80 85 00 08 */	lwz r4, 8(r5)
/* 8007CB34 00079A74  38 04 00 01 */	addi r0, r4, 1
/* 8007CB38 00079A78  90 05 00 08 */	stw r0, 8(r5)
/* 8007CB3C 00079A7C  99 44 00 00 */	stb r10, 0(r4)
/* 8007CB40 00079A80  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 8007CB44 00079A84  81 43 00 3C */	lwz r10, 0x3c(r3)
/* 8007CB48 00079A88  38 63 00 08 */	addi r3, r3, 8
/* 8007CB4C 00079A8C  80 85 00 08 */	lwz r4, 8(r5)
/* 8007CB50 00079A90  55 48 46 3E */	srwi r8, r10, 0x18
/* 8007CB54 00079A94  55 47 86 3E */	rlwinm r7, r10, 0x10, 0x18, 0x1f
/* 8007CB58 00079A98  38 04 00 01 */	addi r0, r4, 1
/* 8007CB5C 00079A9C  55 46 C6 3E */	rlwinm r6, r10, 0x18, 0x18, 0x1f
/* 8007CB60 00079AA0  90 05 00 08 */	stw r0, 8(r5)
/* 8007CB64 00079AA4  99 24 00 00 */	stb r9, 0(r4)
/* 8007CB68 00079AA8  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 8007CB6C 00079AAC  80 85 00 08 */	lwz r4, 8(r5)
/* 8007CB70 00079AB0  38 04 00 01 */	addi r0, r4, 1
/* 8007CB74 00079AB4  90 05 00 08 */	stw r0, 8(r5)
/* 8007CB78 00079AB8  99 04 00 00 */	stb r8, 0(r4)
/* 8007CB7C 00079ABC  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 8007CB80 00079AC0  80 85 00 08 */	lwz r4, 8(r5)
/* 8007CB84 00079AC4  38 04 00 01 */	addi r0, r4, 1
/* 8007CB88 00079AC8  90 05 00 08 */	stw r0, 8(r5)
/* 8007CB8C 00079ACC  98 E4 00 00 */	stb r7, 0(r4)
/* 8007CB90 00079AD0  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 8007CB94 00079AD4  80 85 00 08 */	lwz r4, 8(r5)
/* 8007CB98 00079AD8  38 04 00 01 */	addi r0, r4, 1
/* 8007CB9C 00079ADC  90 05 00 08 */	stw r0, 8(r5)
/* 8007CBA0 00079AE0  98 C4 00 00 */	stb r6, 0(r4)
/* 8007CBA4 00079AE4  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 8007CBA8 00079AE8  80 85 00 08 */	lwz r4, 8(r5)
/* 8007CBAC 00079AEC  38 04 00 01 */	addi r0, r4, 1
/* 8007CBB0 00079AF0  90 05 00 08 */	stw r0, 8(r5)
/* 8007CBB4 00079AF4  99 44 00 00 */	stb r10, 0(r4)
/* 8007CBB8 00079AF8  42 00 FF 10 */	bdnz .L_8007CAC8
/* 8007CBBC 00079AFC  4E 80 00 20 */	blr 
.endfn diffTevStage__18J3DTevBlockPatchedFv

.fn diffTevStageIndirect__18J3DTevBlockPatchedFv, global
/* 8007CBC0 00079B00  88 03 00 D0 */	lbz r0, 0xd0(r3)
/* 8007CBC4 00079B04  39 60 00 00 */	li r11, 0
/* 8007CBC8 00079B08  7C 09 03 A6 */	mtctr r0
/* 8007CBCC 00079B0C  28 00 00 00 */	cmplwi r0, 0
/* 8007CBD0 00079B10  4C 81 00 20 */	blelr 
.L_8007CBD4:
/* 8007CBD4 00079B14  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 8007CBD8 00079B18  38 0B 00 10 */	addi r0, r11, 0x10
/* 8007CBDC 00079B1C  80 C3 00 78 */	lwz r6, 0x78(r3)
/* 8007CBE0 00079B20  54 00 C0 0E */	slwi r0, r0, 0x18
/* 8007CBE4 00079B24  80 85 00 08 */	lwz r4, 8(r5)
/* 8007CBE8 00079B28  39 20 00 61 */	li r9, 0x61
/* 8007CBEC 00079B2C  7C CA 03 78 */	or r10, r6, r0
/* 8007CBF0 00079B30  38 63 00 04 */	addi r3, r3, 4
/* 8007CBF4 00079B34  38 04 00 01 */	addi r0, r4, 1
/* 8007CBF8 00079B38  39 6B 00 01 */	addi r11, r11, 1
/* 8007CBFC 00079B3C  90 05 00 08 */	stw r0, 8(r5)
/* 8007CC00 00079B40  55 48 46 3E */	srwi r8, r10, 0x18
/* 8007CC04 00079B44  55 47 86 3E */	rlwinm r7, r10, 0x10, 0x18, 0x1f
/* 8007CC08 00079B48  55 46 C6 3E */	rlwinm r6, r10, 0x18, 0x18, 0x1f
/* 8007CC0C 00079B4C  99 24 00 00 */	stb r9, 0(r4)
/* 8007CC10 00079B50  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 8007CC14 00079B54  80 85 00 08 */	lwz r4, 8(r5)
/* 8007CC18 00079B58  38 04 00 01 */	addi r0, r4, 1
/* 8007CC1C 00079B5C  90 05 00 08 */	stw r0, 8(r5)
/* 8007CC20 00079B60  99 04 00 00 */	stb r8, 0(r4)
/* 8007CC24 00079B64  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 8007CC28 00079B68  80 85 00 08 */	lwz r4, 8(r5)
/* 8007CC2C 00079B6C  38 04 00 01 */	addi r0, r4, 1
/* 8007CC30 00079B70  90 05 00 08 */	stw r0, 8(r5)
/* 8007CC34 00079B74  98 E4 00 00 */	stb r7, 0(r4)
/* 8007CC38 00079B78  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 8007CC3C 00079B7C  80 85 00 08 */	lwz r4, 8(r5)
/* 8007CC40 00079B80  38 04 00 01 */	addi r0, r4, 1
/* 8007CC44 00079B84  90 05 00 08 */	stw r0, 8(r5)
/* 8007CC48 00079B88  98 C4 00 00 */	stb r6, 0(r4)
/* 8007CC4C 00079B8C  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 8007CC50 00079B90  80 85 00 08 */	lwz r4, 8(r5)
/* 8007CC54 00079B94  38 04 00 01 */	addi r0, r4, 1
/* 8007CC58 00079B98  90 05 00 08 */	stw r0, 8(r5)
/* 8007CC5C 00079B9C  99 44 00 00 */	stb r10, 0(r4)
/* 8007CC60 00079BA0  42 00 FF 74 */	bdnz .L_8007CBD4
/* 8007CC64 00079BA4  4E 80 00 20 */	blr 
.endfn diffTevStageIndirect__18J3DTevBlockPatchedFv

.fn diffTevReg__18J3DTevBlockPatchedFv, global
/* 8007CC68 00079BA8  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8007CC6C 00079BAC  7C 08 02 A6 */	mflr r0
/* 8007CC70 00079BB0  90 01 00 34 */	stw r0, 0x34(r1)
/* 8007CC74 00079BB4  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 8007CC78 00079BB8  93 C1 00 28 */	stw r30, 0x28(r1)
/* 8007CC7C 00079BBC  3B C0 00 00 */	li r30, 0
/* 8007CC80 00079BC0  93 A1 00 24 */	stw r29, 0x24(r1)
/* 8007CC84 00079BC4  7C 7D 1B 78 */	mr r29, r3
/* 8007CC88 00079BC8  7F BF EB 78 */	mr r31, r29
.L_8007CC8C:
/* 8007CC8C 00079BCC  80 BF 00 98 */	lwz r5, 0x98(r31)
/* 8007CC90 00079BD0  38 7E 00 01 */	addi r3, r30, 1
/* 8007CC94 00079BD4  80 1F 00 9C */	lwz r0, 0x9c(r31)
/* 8007CC98 00079BD8  38 81 00 0C */	addi r4, r1, 0xc
/* 8007CC9C 00079BDC  90 A1 00 0C */	stw r5, 0xc(r1)
/* 8007CCA0 00079BE0  90 01 00 10 */	stw r0, 0x10(r1)
/* 8007CCA4 00079BE4  4B FF 9B 45 */	bl J3DGDSetTevColorS10__F11_GXTevRegID11_GXColorS10
/* 8007CCA8 00079BE8  3B DE 00 01 */	addi r30, r30, 1
/* 8007CCAC 00079BEC  3B FF 00 08 */	addi r31, r31, 8
/* 8007CCB0 00079BF0  28 1E 00 03 */	cmplwi r30, 3
/* 8007CCB4 00079BF4  41 80 FF D8 */	blt .L_8007CC8C
/* 8007CCB8 00079BF8  3B C0 00 00 */	li r30, 0
/* 8007CCBC 00079BFC  7F BF EB 78 */	mr r31, r29
.L_8007CCC0:
/* 8007CCC0 00079C00  80 1F 00 B8 */	lwz r0, 0xb8(r31)
/* 8007CCC4 00079C04  7F C3 F3 78 */	mr r3, r30
/* 8007CCC8 00079C08  38 81 00 08 */	addi r4, r1, 8
/* 8007CCCC 00079C0C  90 01 00 08 */	stw r0, 8(r1)
/* 8007CCD0 00079C10  4B FF 99 B1 */	bl J3DGDSetTevKColor__F14_GXTevKColorID8_GXColor
/* 8007CCD4 00079C14  3B DE 00 01 */	addi r30, r30, 1
/* 8007CCD8 00079C18  3B FF 00 04 */	addi r31, r31, 4
/* 8007CCDC 00079C1C  28 1E 00 04 */	cmplwi r30, 4
/* 8007CCE0 00079C20  41 80 FF E0 */	blt .L_8007CCC0
/* 8007CCE4 00079C24  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8007CCE8 00079C28  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 8007CCEC 00079C2C  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 8007CCF0 00079C30  83 A1 00 24 */	lwz r29, 0x24(r1)
/* 8007CCF4 00079C34  7C 08 03 A6 */	mtlr r0
/* 8007CCF8 00079C38  38 21 00 30 */	addi r1, r1, 0x30
/* 8007CCFC 00079C3C  4E 80 00 20 */	blr 
.endfn diffTevReg__18J3DTevBlockPatchedFv

.fn diffTexCoordScale__18J3DTevBlockPatchedFv, global
/* 8007CD00 00079C40  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8007CD04 00079C44  7C 08 02 A6 */	mflr r0
/* 8007CD08 00079C48  90 01 00 24 */	stw r0, 0x24(r1)
/* 8007CD0C 00079C4C  BF 61 00 0C */	stmw r27, 0xc(r1)
/* 8007CD10 00079C50  7C 7B 1B 78 */	mr r27, r3
/* 8007CD14 00079C54  3C 60 80 51 */	lis r3, sTexCoordScaleTable__6J3DSys@ha
/* 8007CD18 00079C58  3B 80 00 00 */	li r28, 0
/* 8007CD1C 00079C5C  7F 7E DB 78 */	mr r30, r27
/* 8007CD20 00079C60  3B E3 F4 1C */	addi r31, r3, sTexCoordScaleTable__6J3DSys@l
/* 8007CD24 00079C64  8B BB 00 D0 */	lbz r29, 0xd0(r27)
/* 8007CD28 00079C68  48 00 00 A8 */	b .L_8007CDD0
.L_8007CD2C:
/* 8007CD2C 00079C6C  88 7E 00 19 */	lbz r3, 0x19(r30)
/* 8007CD30 00079C70  38 C0 00 00 */	li r6, 0
/* 8007CD34 00079C74  88 1E 00 18 */	lbz r0, 0x18(r30)
/* 8007CD38 00079C78  39 20 00 00 */	li r9, 0
/* 8007CD3C 00079C7C  54 63 1E B8 */	rlwinm r3, r3, 3, 0x1a, 0x1c
/* 8007CD40 00079C80  7C FF 1A 14 */	add r7, r31, r3
/* 8007CD44 00079C84  A0 87 00 04 */	lhz r4, 4(r7)
/* 8007CD48 00079C88  54 03 07 7E */	clrlwi r3, r0, 0x1d
/* 8007CD4C 00079C8C  A0 07 00 06 */	lhz r0, 6(r7)
/* 8007CD50 00079C90  20 A4 00 01 */	subfic r5, r4, 1
/* 8007CD54 00079C94  A0 87 00 00 */	lhz r4, 0(r7)
/* 8007CD58 00079C98  20 00 00 01 */	subfic r0, r0, 1
/* 8007CD5C 00079C9C  A0 E7 00 02 */	lhz r7, 2(r7)
/* 8007CD60 00079CA0  7C A5 00 34 */	cntlzw r5, r5
/* 8007CD64 00079CA4  7C 00 00 34 */	cntlzw r0, r0
/* 8007CD68 00079CA8  54 A5 DE 3E */	rlwinm r5, r5, 0x1b, 0x18, 0x1f
/* 8007CD6C 00079CAC  54 08 DE 3E */	rlwinm r8, r0, 0x1b, 0x18, 0x1f
/* 8007CD70 00079CB0  4B FF 88 B5 */	bl J3DGDSetTexCoordScale2__F13_GXTexCoordIDUsUcUcUsUcUc
/* 8007CD74 00079CB4  38 1C 00 01 */	addi r0, r28, 1
/* 8007CD78 00079CB8  38 C0 00 00 */	li r6, 0
/* 8007CD7C 00079CBC  54 00 10 3A */	slwi r0, r0, 2
/* 8007CD80 00079CC0  39 20 00 00 */	li r9, 0
/* 8007CD84 00079CC4  7C 9B 02 14 */	add r4, r27, r0
/* 8007CD88 00079CC8  88 64 00 19 */	lbz r3, 0x19(r4)
/* 8007CD8C 00079CCC  88 04 00 18 */	lbz r0, 0x18(r4)
/* 8007CD90 00079CD0  54 63 1E B8 */	rlwinm r3, r3, 3, 0x1a, 0x1c
/* 8007CD94 00079CD4  7C FF 1A 14 */	add r7, r31, r3
/* 8007CD98 00079CD8  A0 87 00 04 */	lhz r4, 4(r7)
/* 8007CD9C 00079CDC  54 03 07 7E */	clrlwi r3, r0, 0x1d
/* 8007CDA0 00079CE0  A0 07 00 06 */	lhz r0, 6(r7)
/* 8007CDA4 00079CE4  20 A4 00 01 */	subfic r5, r4, 1
/* 8007CDA8 00079CE8  A0 87 00 00 */	lhz r4, 0(r7)
/* 8007CDAC 00079CEC  20 00 00 01 */	subfic r0, r0, 1
/* 8007CDB0 00079CF0  A0 E7 00 02 */	lhz r7, 2(r7)
/* 8007CDB4 00079CF4  7C A5 00 34 */	cntlzw r5, r5
/* 8007CDB8 00079CF8  7C 00 00 34 */	cntlzw r0, r0
/* 8007CDBC 00079CFC  54 A5 DE 3E */	rlwinm r5, r5, 0x1b, 0x18, 0x1f
/* 8007CDC0 00079D00  54 08 DE 3E */	rlwinm r8, r0, 0x1b, 0x18, 0x1f
/* 8007CDC4 00079D04  4B FF 88 61 */	bl J3DGDSetTexCoordScale2__F13_GXTexCoordIDUsUcUcUsUcUc
/* 8007CDC8 00079D08  3B DE 00 08 */	addi r30, r30, 8
/* 8007CDCC 00079D0C  3B 9C 00 02 */	addi r28, r28, 2
.L_8007CDD0:
/* 8007CDD0 00079D10  7C 1C E8 40 */	cmplw r28, r29
/* 8007CDD4 00079D14  41 80 FF 58 */	blt .L_8007CD2C
/* 8007CDD8 00079D18  BB 61 00 0C */	lmw r27, 0xc(r1)
/* 8007CDDC 00079D1C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8007CDE0 00079D20  7C 08 03 A6 */	mtlr r0
/* 8007CDE4 00079D24  38 21 00 20 */	addi r1, r1, 0x20
/* 8007CDE8 00079D28  4E 80 00 20 */	blr 
.endfn diffTexCoordScale__18J3DTevBlockPatchedFv

.fn diffTexNo__12J3DTevBlock1Fv, global
/* 8007CDEC 00079D2C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8007CDF0 00079D30  7C 08 02 A6 */	mflr r0
/* 8007CDF4 00079D34  90 01 00 14 */	stw r0, 0x14(r1)
/* 8007CDF8 00079D38  A0 03 00 08 */	lhz r0, 8(r3)
/* 8007CDFC 00079D3C  28 00 FF FF */	cmplwi r0, 0xffff
/* 8007CE00 00079D40  41 82 00 10 */	beq .L_8007CE10
/* 8007CE04 00079D44  38 83 00 08 */	addi r4, r3, 8
/* 8007CE08 00079D48  38 60 00 00 */	li r3, 0
/* 8007CE0C 00079D4C  4B FE 85 7D */	bl loadTexNo__FUlRCUs
.L_8007CE10:
/* 8007CE10 00079D50  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8007CE14 00079D54  7C 08 03 A6 */	mtlr r0
/* 8007CE18 00079D58  38 21 00 10 */	addi r1, r1, 0x10
/* 8007CE1C 00079D5C  4E 80 00 20 */	blr 
.endfn diffTexNo__12J3DTevBlock1Fv

.fn diffTevReg__12J3DTevBlock1Fv, global
/* 8007CE20 00079D60  4E 80 00 20 */	blr 
.endfn diffTevReg__12J3DTevBlock1Fv

.fn diffTevStage__12J3DTevBlock1Fv, global
/* 8007CE24 00079D64  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 8007CE28 00079D68  39 20 00 61 */	li r9, 0x61
/* 8007CE2C 00079D6C  81 43 00 0E */	lwz r10, 0xe(r3)
/* 8007CE30 00079D70  80 85 00 08 */	lwz r4, 8(r5)
/* 8007CE34 00079D74  55 48 46 3E */	srwi r8, r10, 0x18
/* 8007CE38 00079D78  55 47 86 3E */	rlwinm r7, r10, 0x10, 0x18, 0x1f
/* 8007CE3C 00079D7C  38 04 00 01 */	addi r0, r4, 1
/* 8007CE40 00079D80  55 46 C6 3E */	rlwinm r6, r10, 0x18, 0x18, 0x1f
/* 8007CE44 00079D84  90 05 00 08 */	stw r0, 8(r5)
/* 8007CE48 00079D88  99 24 00 00 */	stb r9, 0(r4)
/* 8007CE4C 00079D8C  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 8007CE50 00079D90  80 85 00 08 */	lwz r4, 8(r5)
/* 8007CE54 00079D94  38 04 00 01 */	addi r0, r4, 1
/* 8007CE58 00079D98  90 05 00 08 */	stw r0, 8(r5)
/* 8007CE5C 00079D9C  99 04 00 00 */	stb r8, 0(r4)
/* 8007CE60 00079DA0  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 8007CE64 00079DA4  80 85 00 08 */	lwz r4, 8(r5)
/* 8007CE68 00079DA8  38 04 00 01 */	addi r0, r4, 1
/* 8007CE6C 00079DAC  90 05 00 08 */	stw r0, 8(r5)
/* 8007CE70 00079DB0  98 E4 00 00 */	stb r7, 0(r4)
/* 8007CE74 00079DB4  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 8007CE78 00079DB8  80 85 00 08 */	lwz r4, 8(r5)
/* 8007CE7C 00079DBC  38 04 00 01 */	addi r0, r4, 1
/* 8007CE80 00079DC0  90 05 00 08 */	stw r0, 8(r5)
/* 8007CE84 00079DC4  98 C4 00 00 */	stb r6, 0(r4)
/* 8007CE88 00079DC8  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 8007CE8C 00079DCC  80 85 00 08 */	lwz r4, 8(r5)
/* 8007CE90 00079DD0  38 04 00 01 */	addi r0, r4, 1
/* 8007CE94 00079DD4  90 05 00 08 */	stw r0, 8(r5)
/* 8007CE98 00079DD8  99 44 00 00 */	stb r10, 0(r4)
/* 8007CE9C 00079DDC  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 8007CEA0 00079DE0  81 03 00 12 */	lwz r8, 0x12(r3)
/* 8007CEA4 00079DE4  80 64 00 08 */	lwz r3, 8(r4)
/* 8007CEA8 00079DE8  55 07 46 3E */	srwi r7, r8, 0x18
/* 8007CEAC 00079DEC  55 06 86 3E */	rlwinm r6, r8, 0x10, 0x18, 0x1f
/* 8007CEB0 00079DF0  38 03 00 01 */	addi r0, r3, 1
/* 8007CEB4 00079DF4  55 05 C6 3E */	rlwinm r5, r8, 0x18, 0x18, 0x1f
/* 8007CEB8 00079DF8  90 04 00 08 */	stw r0, 8(r4)
/* 8007CEBC 00079DFC  99 23 00 00 */	stb r9, 0(r3)
/* 8007CEC0 00079E00  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 8007CEC4 00079E04  80 64 00 08 */	lwz r3, 8(r4)
/* 8007CEC8 00079E08  38 03 00 01 */	addi r0, r3, 1
/* 8007CECC 00079E0C  90 04 00 08 */	stw r0, 8(r4)
/* 8007CED0 00079E10  98 E3 00 00 */	stb r7, 0(r3)
/* 8007CED4 00079E14  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 8007CED8 00079E18  80 64 00 08 */	lwz r3, 8(r4)
/* 8007CEDC 00079E1C  38 03 00 01 */	addi r0, r3, 1
/* 8007CEE0 00079E20  90 04 00 08 */	stw r0, 8(r4)
/* 8007CEE4 00079E24  98 C3 00 00 */	stb r6, 0(r3)
/* 8007CEE8 00079E28  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 8007CEEC 00079E2C  80 64 00 08 */	lwz r3, 8(r4)
/* 8007CEF0 00079E30  38 03 00 01 */	addi r0, r3, 1
/* 8007CEF4 00079E34  90 04 00 08 */	stw r0, 8(r4)
/* 8007CEF8 00079E38  98 A3 00 00 */	stb r5, 0(r3)
/* 8007CEFC 00079E3C  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 8007CF00 00079E40  80 64 00 08 */	lwz r3, 8(r4)
/* 8007CF04 00079E44  38 03 00 01 */	addi r0, r3, 1
/* 8007CF08 00079E48  90 04 00 08 */	stw r0, 8(r4)
/* 8007CF0C 00079E4C  99 03 00 00 */	stb r8, 0(r3)
/* 8007CF10 00079E50  4E 80 00 20 */	blr 
.endfn diffTevStage__12J3DTevBlock1Fv

.fn diffTevStageIndirect__12J3DTevBlock1Fv, global
/* 8007CF14 00079E54  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 8007CF18 00079E58  39 00 00 61 */	li r8, 0x61
/* 8007CF1C 00079E5C  80 03 00 18 */	lwz r0, 0x18(r3)
/* 8007CF20 00079E60  80 64 00 08 */	lwz r3, 8(r4)
/* 8007CF24 00079E64  64 09 10 00 */	oris r9, r0, 0x1000
/* 8007CF28 00079E68  38 03 00 01 */	addi r0, r3, 1
/* 8007CF2C 00079E6C  90 04 00 08 */	stw r0, 8(r4)
/* 8007CF30 00079E70  55 27 46 3E */	srwi r7, r9, 0x18
/* 8007CF34 00079E74  55 26 86 3E */	rlwinm r6, r9, 0x10, 0x18, 0x1f
/* 8007CF38 00079E78  55 25 C6 3E */	rlwinm r5, r9, 0x18, 0x18, 0x1f
/* 8007CF3C 00079E7C  99 03 00 00 */	stb r8, 0(r3)
/* 8007CF40 00079E80  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 8007CF44 00079E84  80 64 00 08 */	lwz r3, 8(r4)
/* 8007CF48 00079E88  38 03 00 01 */	addi r0, r3, 1
/* 8007CF4C 00079E8C  90 04 00 08 */	stw r0, 8(r4)
/* 8007CF50 00079E90  98 E3 00 00 */	stb r7, 0(r3)
/* 8007CF54 00079E94  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 8007CF58 00079E98  80 64 00 08 */	lwz r3, 8(r4)
/* 8007CF5C 00079E9C  38 03 00 01 */	addi r0, r3, 1
/* 8007CF60 00079EA0  90 04 00 08 */	stw r0, 8(r4)
/* 8007CF64 00079EA4  98 C3 00 00 */	stb r6, 0(r3)
/* 8007CF68 00079EA8  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 8007CF6C 00079EAC  80 64 00 08 */	lwz r3, 8(r4)
/* 8007CF70 00079EB0  38 03 00 01 */	addi r0, r3, 1
/* 8007CF74 00079EB4  90 04 00 08 */	stw r0, 8(r4)
/* 8007CF78 00079EB8  98 A3 00 00 */	stb r5, 0(r3)
/* 8007CF7C 00079EBC  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 8007CF80 00079EC0  80 64 00 08 */	lwz r3, 8(r4)
/* 8007CF84 00079EC4  38 03 00 01 */	addi r0, r3, 1
/* 8007CF88 00079EC8  90 04 00 08 */	stw r0, 8(r4)
/* 8007CF8C 00079ECC  99 23 00 00 */	stb r9, 0(r3)
/* 8007CF90 00079ED0  4E 80 00 20 */	blr 
.endfn diffTevStageIndirect__12J3DTevBlock1Fv

.fn diffTexCoordScale__12J3DTevBlock1Fv, global
/* 8007CF94 00079ED4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8007CF98 00079ED8  7C 08 02 A6 */	mflr r0
/* 8007CF9C 00079EDC  3C 80 80 51 */	lis r4, sTexCoordScaleTable__6J3DSys@ha
/* 8007CFA0 00079EE0  38 C0 00 00 */	li r6, 0
/* 8007CFA4 00079EE4  90 01 00 14 */	stw r0, 0x14(r1)
/* 8007CFA8 00079EE8  38 04 F4 1C */	addi r0, r4, sTexCoordScaleTable__6J3DSys@l
/* 8007CFAC 00079EEC  39 20 00 00 */	li r9, 0
/* 8007CFB0 00079EF0  88 A3 00 0B */	lbz r5, 0xb(r3)
/* 8007CFB4 00079EF4  88 63 00 0A */	lbz r3, 0xa(r3)
/* 8007CFB8 00079EF8  54 A4 1E B8 */	rlwinm r4, r5, 3, 0x1a, 0x1c
/* 8007CFBC 00079EFC  7C E0 22 14 */	add r7, r0, r4
/* 8007CFC0 00079F00  A0 87 00 04 */	lhz r4, 4(r7)
/* 8007CFC4 00079F04  A0 07 00 06 */	lhz r0, 6(r7)
/* 8007CFC8 00079F08  20 A4 00 01 */	subfic r5, r4, 1
/* 8007CFCC 00079F0C  A0 87 00 00 */	lhz r4, 0(r7)
/* 8007CFD0 00079F10  20 00 00 01 */	subfic r0, r0, 1
/* 8007CFD4 00079F14  A0 E7 00 02 */	lhz r7, 2(r7)
/* 8007CFD8 00079F18  7C A5 00 34 */	cntlzw r5, r5
/* 8007CFDC 00079F1C  7C 00 00 34 */	cntlzw r0, r0
/* 8007CFE0 00079F20  54 A5 DE 3E */	rlwinm r5, r5, 0x1b, 0x18, 0x1f
/* 8007CFE4 00079F24  54 08 DE 3E */	rlwinm r8, r0, 0x1b, 0x18, 0x1f
/* 8007CFE8 00079F28  4B FF 86 3D */	bl J3DGDSetTexCoordScale2__F13_GXTexCoordIDUsUcUcUsUcUc
/* 8007CFEC 00079F2C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8007CFF0 00079F30  7C 08 03 A6 */	mtlr r0
/* 8007CFF4 00079F34  38 21 00 10 */	addi r1, r1, 0x10
/* 8007CFF8 00079F38  4E 80 00 20 */	blr 
.endfn diffTexCoordScale__12J3DTevBlock1Fv

.fn diffTexNo__12J3DTevBlock2Fv, global
/* 8007CFFC 00079F3C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8007D000 00079F40  7C 08 02 A6 */	mflr r0
/* 8007D004 00079F44  90 01 00 14 */	stw r0, 0x14(r1)
/* 8007D008 00079F48  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8007D00C 00079F4C  7C 7F 1B 78 */	mr r31, r3
/* 8007D010 00079F50  93 C1 00 08 */	stw r30, 8(r1)
/* 8007D014 00079F54  3B C0 00 00 */	li r30, 0
.L_8007D018:
/* 8007D018 00079F58  A0 1F 00 08 */	lhz r0, 8(r31)
/* 8007D01C 00079F5C  28 00 FF FF */	cmplwi r0, 0xffff
/* 8007D020 00079F60  41 82 00 10 */	beq .L_8007D030
/* 8007D024 00079F64  7F C3 F3 78 */	mr r3, r30
/* 8007D028 00079F68  38 9F 00 08 */	addi r4, r31, 8
/* 8007D02C 00079F6C  4B FE 83 5D */	bl loadTexNo__FUlRCUs
.L_8007D030:
/* 8007D030 00079F70  3B DE 00 01 */	addi r30, r30, 1
/* 8007D034 00079F74  3B FF 00 02 */	addi r31, r31, 2
/* 8007D038 00079F78  28 1E 00 02 */	cmplwi r30, 2
/* 8007D03C 00079F7C  41 80 FF DC */	blt .L_8007D018
/* 8007D040 00079F80  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8007D044 00079F84  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8007D048 00079F88  83 C1 00 08 */	lwz r30, 8(r1)
/* 8007D04C 00079F8C  7C 08 03 A6 */	mtlr r0
/* 8007D050 00079F90  38 21 00 10 */	addi r1, r1, 0x10
/* 8007D054 00079F94  4E 80 00 20 */	blr 
.endfn diffTexNo__12J3DTevBlock2Fv

.fn diffTevReg__12J3DTevBlock2Fv, global
/* 8007D058 00079F98  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8007D05C 00079F9C  7C 08 02 A6 */	mflr r0
/* 8007D060 00079FA0  90 01 00 34 */	stw r0, 0x34(r1)
/* 8007D064 00079FA4  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 8007D068 00079FA8  93 C1 00 28 */	stw r30, 0x28(r1)
/* 8007D06C 00079FAC  3B C0 00 00 */	li r30, 0
/* 8007D070 00079FB0  93 A1 00 24 */	stw r29, 0x24(r1)
/* 8007D074 00079FB4  7C 7D 1B 78 */	mr r29, r3
/* 8007D078 00079FB8  7F BF EB 78 */	mr r31, r29
.L_8007D07C:
/* 8007D07C 00079FBC  80 BF 00 14 */	lwz r5, 0x14(r31)
/* 8007D080 00079FC0  38 7E 00 01 */	addi r3, r30, 1
/* 8007D084 00079FC4  80 1F 00 18 */	lwz r0, 0x18(r31)
/* 8007D088 00079FC8  38 81 00 0C */	addi r4, r1, 0xc
/* 8007D08C 00079FCC  90 A1 00 0C */	stw r5, 0xc(r1)
/* 8007D090 00079FD0  90 01 00 10 */	stw r0, 0x10(r1)
/* 8007D094 00079FD4  4B FF 97 55 */	bl J3DGDSetTevColorS10__F11_GXTevRegID11_GXColorS10
/* 8007D098 00079FD8  3B DE 00 01 */	addi r30, r30, 1
/* 8007D09C 00079FDC  3B FF 00 08 */	addi r31, r31, 8
/* 8007D0A0 00079FE0  28 1E 00 03 */	cmplwi r30, 3
/* 8007D0A4 00079FE4  41 80 FF D8 */	blt .L_8007D07C
/* 8007D0A8 00079FE8  3B C0 00 00 */	li r30, 0
/* 8007D0AC 00079FEC  7F BF EB 78 */	mr r31, r29
.L_8007D0B0:
/* 8007D0B0 00079FF0  80 1F 00 45 */	lwz r0, 0x45(r31)
/* 8007D0B4 00079FF4  7F C3 F3 78 */	mr r3, r30
/* 8007D0B8 00079FF8  38 81 00 08 */	addi r4, r1, 8
/* 8007D0BC 00079FFC  90 01 00 08 */	stw r0, 8(r1)
/* 8007D0C0 0007A000  4B FF 95 C1 */	bl J3DGDSetTevKColor__F14_GXTevKColorID8_GXColor
/* 8007D0C4 0007A004  3B DE 00 01 */	addi r30, r30, 1
/* 8007D0C8 0007A008  3B FF 00 04 */	addi r31, r31, 4
/* 8007D0CC 0007A00C  28 1E 00 04 */	cmplwi r30, 4
/* 8007D0D0 0007A010  41 80 FF E0 */	blt .L_8007D0B0
/* 8007D0D4 0007A014  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8007D0D8 0007A018  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 8007D0DC 0007A01C  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 8007D0E0 0007A020  83 A1 00 24 */	lwz r29, 0x24(r1)
/* 8007D0E4 0007A024  7C 08 03 A6 */	mtlr r0
/* 8007D0E8 0007A028  38 21 00 30 */	addi r1, r1, 0x30
/* 8007D0EC 0007A02C  4E 80 00 20 */	blr 
.endfn diffTevReg__12J3DTevBlock2Fv

.fn diffTevStage__12J3DTevBlock2Fv, global
/* 8007D0F0 0007A030  88 03 00 34 */	lbz r0, 0x34(r3)
/* 8007D0F4 0007A034  7C 09 03 A6 */	mtctr r0
/* 8007D0F8 0007A038  28 00 00 00 */	cmplwi r0, 0
/* 8007D0FC 0007A03C  4C 81 00 20 */	blelr 
.L_8007D100:
/* 8007D100 0007A040  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 8007D104 0007A044  39 20 00 61 */	li r9, 0x61
/* 8007D108 0007A048  81 43 00 35 */	lwz r10, 0x35(r3)
/* 8007D10C 0007A04C  80 85 00 08 */	lwz r4, 8(r5)
/* 8007D110 0007A050  55 48 46 3E */	srwi r8, r10, 0x18
/* 8007D114 0007A054  55 47 86 3E */	rlwinm r7, r10, 0x10, 0x18, 0x1f
/* 8007D118 0007A058  38 04 00 01 */	addi r0, r4, 1
/* 8007D11C 0007A05C  55 46 C6 3E */	rlwinm r6, r10, 0x18, 0x18, 0x1f
/* 8007D120 0007A060  90 05 00 08 */	stw r0, 8(r5)
/* 8007D124 0007A064  99 24 00 00 */	stb r9, 0(r4)
/* 8007D128 0007A068  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 8007D12C 0007A06C  80 85 00 08 */	lwz r4, 8(r5)
/* 8007D130 0007A070  38 04 00 01 */	addi r0, r4, 1
/* 8007D134 0007A074  90 05 00 08 */	stw r0, 8(r5)
/* 8007D138 0007A078  99 04 00 00 */	stb r8, 0(r4)
/* 8007D13C 0007A07C  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 8007D140 0007A080  80 85 00 08 */	lwz r4, 8(r5)
/* 8007D144 0007A084  38 04 00 01 */	addi r0, r4, 1
/* 8007D148 0007A088  90 05 00 08 */	stw r0, 8(r5)
/* 8007D14C 0007A08C  98 E4 00 00 */	stb r7, 0(r4)
/* 8007D150 0007A090  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 8007D154 0007A094  80 85 00 08 */	lwz r4, 8(r5)
/* 8007D158 0007A098  38 04 00 01 */	addi r0, r4, 1
/* 8007D15C 0007A09C  90 05 00 08 */	stw r0, 8(r5)
/* 8007D160 0007A0A0  98 C4 00 00 */	stb r6, 0(r4)
/* 8007D164 0007A0A4  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 8007D168 0007A0A8  80 85 00 08 */	lwz r4, 8(r5)
/* 8007D16C 0007A0AC  38 04 00 01 */	addi r0, r4, 1
/* 8007D170 0007A0B0  90 05 00 08 */	stw r0, 8(r5)
/* 8007D174 0007A0B4  99 44 00 00 */	stb r10, 0(r4)
/* 8007D178 0007A0B8  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 8007D17C 0007A0BC  81 43 00 39 */	lwz r10, 0x39(r3)
/* 8007D180 0007A0C0  38 63 00 08 */	addi r3, r3, 8
/* 8007D184 0007A0C4  80 85 00 08 */	lwz r4, 8(r5)
/* 8007D188 0007A0C8  55 48 46 3E */	srwi r8, r10, 0x18
/* 8007D18C 0007A0CC  55 47 86 3E */	rlwinm r7, r10, 0x10, 0x18, 0x1f
/* 8007D190 0007A0D0  38 04 00 01 */	addi r0, r4, 1
/* 8007D194 0007A0D4  55 46 C6 3E */	rlwinm r6, r10, 0x18, 0x18, 0x1f
/* 8007D198 0007A0D8  90 05 00 08 */	stw r0, 8(r5)
/* 8007D19C 0007A0DC  99 24 00 00 */	stb r9, 0(r4)
/* 8007D1A0 0007A0E0  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 8007D1A4 0007A0E4  80 85 00 08 */	lwz r4, 8(r5)
/* 8007D1A8 0007A0E8  38 04 00 01 */	addi r0, r4, 1
/* 8007D1AC 0007A0EC  90 05 00 08 */	stw r0, 8(r5)
/* 8007D1B0 0007A0F0  99 04 00 00 */	stb r8, 0(r4)
/* 8007D1B4 0007A0F4  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 8007D1B8 0007A0F8  80 85 00 08 */	lwz r4, 8(r5)
/* 8007D1BC 0007A0FC  38 04 00 01 */	addi r0, r4, 1
/* 8007D1C0 0007A100  90 05 00 08 */	stw r0, 8(r5)
/* 8007D1C4 0007A104  98 E4 00 00 */	stb r7, 0(r4)
/* 8007D1C8 0007A108  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 8007D1CC 0007A10C  80 85 00 08 */	lwz r4, 8(r5)
/* 8007D1D0 0007A110  38 04 00 01 */	addi r0, r4, 1
/* 8007D1D4 0007A114  90 05 00 08 */	stw r0, 8(r5)
/* 8007D1D8 0007A118  98 C4 00 00 */	stb r6, 0(r4)
/* 8007D1DC 0007A11C  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 8007D1E0 0007A120  80 85 00 08 */	lwz r4, 8(r5)
/* 8007D1E4 0007A124  38 04 00 01 */	addi r0, r4, 1
/* 8007D1E8 0007A128  90 05 00 08 */	stw r0, 8(r5)
/* 8007D1EC 0007A12C  99 44 00 00 */	stb r10, 0(r4)
/* 8007D1F0 0007A130  42 00 FF 10 */	bdnz .L_8007D100
/* 8007D1F4 0007A134  4E 80 00 20 */	blr 
.endfn diffTevStage__12J3DTevBlock2Fv

.fn diffTevStageIndirect__12J3DTevBlock2Fv, global
/* 8007D1F8 0007A138  88 03 00 34 */	lbz r0, 0x34(r3)
/* 8007D1FC 0007A13C  39 60 00 00 */	li r11, 0
/* 8007D200 0007A140  7C 09 03 A6 */	mtctr r0
/* 8007D204 0007A144  28 00 00 00 */	cmplwi r0, 0
/* 8007D208 0007A148  4C 81 00 20 */	blelr 
.L_8007D20C:
/* 8007D20C 0007A14C  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 8007D210 0007A150  38 0B 00 10 */	addi r0, r11, 0x10
/* 8007D214 0007A154  80 C3 00 60 */	lwz r6, 0x60(r3)
/* 8007D218 0007A158  54 00 C0 0E */	slwi r0, r0, 0x18
/* 8007D21C 0007A15C  80 85 00 08 */	lwz r4, 8(r5)
/* 8007D220 0007A160  39 20 00 61 */	li r9, 0x61
/* 8007D224 0007A164  7C CA 03 78 */	or r10, r6, r0
/* 8007D228 0007A168  38 63 00 04 */	addi r3, r3, 4
/* 8007D22C 0007A16C  38 04 00 01 */	addi r0, r4, 1
/* 8007D230 0007A170  39 6B 00 01 */	addi r11, r11, 1
/* 8007D234 0007A174  90 05 00 08 */	stw r0, 8(r5)
/* 8007D238 0007A178  55 48 46 3E */	srwi r8, r10, 0x18
/* 8007D23C 0007A17C  55 47 86 3E */	rlwinm r7, r10, 0x10, 0x18, 0x1f
/* 8007D240 0007A180  55 46 C6 3E */	rlwinm r6, r10, 0x18, 0x18, 0x1f
/* 8007D244 0007A184  99 24 00 00 */	stb r9, 0(r4)
/* 8007D248 0007A188  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 8007D24C 0007A18C  80 85 00 08 */	lwz r4, 8(r5)
/* 8007D250 0007A190  38 04 00 01 */	addi r0, r4, 1
/* 8007D254 0007A194  90 05 00 08 */	stw r0, 8(r5)
/* 8007D258 0007A198  99 04 00 00 */	stb r8, 0(r4)
/* 8007D25C 0007A19C  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 8007D260 0007A1A0  80 85 00 08 */	lwz r4, 8(r5)
/* 8007D264 0007A1A4  38 04 00 01 */	addi r0, r4, 1
/* 8007D268 0007A1A8  90 05 00 08 */	stw r0, 8(r5)
/* 8007D26C 0007A1AC  98 E4 00 00 */	stb r7, 0(r4)
/* 8007D270 0007A1B0  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 8007D274 0007A1B4  80 85 00 08 */	lwz r4, 8(r5)
/* 8007D278 0007A1B8  38 04 00 01 */	addi r0, r4, 1
/* 8007D27C 0007A1BC  90 05 00 08 */	stw r0, 8(r5)
/* 8007D280 0007A1C0  98 C4 00 00 */	stb r6, 0(r4)
/* 8007D284 0007A1C4  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 8007D288 0007A1C8  80 85 00 08 */	lwz r4, 8(r5)
/* 8007D28C 0007A1CC  38 04 00 01 */	addi r0, r4, 1
/* 8007D290 0007A1D0  90 05 00 08 */	stw r0, 8(r5)
/* 8007D294 0007A1D4  99 44 00 00 */	stb r10, 0(r4)
/* 8007D298 0007A1D8  42 00 FF 74 */	bdnz .L_8007D20C
/* 8007D29C 0007A1DC  4E 80 00 20 */	blr 
.endfn diffTevStageIndirect__12J3DTevBlock2Fv

.fn diffTexCoordScale__12J3DTevBlock2Fv, global
/* 8007D2A0 0007A1E0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8007D2A4 0007A1E4  7C 08 02 A6 */	mflr r0
/* 8007D2A8 0007A1E8  38 C0 00 00 */	li r6, 0
/* 8007D2AC 0007A1EC  39 20 00 00 */	li r9, 0
/* 8007D2B0 0007A1F0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8007D2B4 0007A1F4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8007D2B8 0007A1F8  7C 7F 1B 78 */	mr r31, r3
/* 8007D2BC 0007A1FC  3C 60 80 51 */	lis r3, sTexCoordScaleTable__6J3DSys@ha
/* 8007D2C0 0007A200  88 9F 00 0D */	lbz r4, 0xd(r31)
/* 8007D2C4 0007A204  38 03 F4 1C */	addi r0, r3, sTexCoordScaleTable__6J3DSys@l
/* 8007D2C8 0007A208  88 7F 00 0C */	lbz r3, 0xc(r31)
/* 8007D2CC 0007A20C  54 84 1E B8 */	rlwinm r4, r4, 3, 0x1a, 0x1c
/* 8007D2D0 0007A210  7C E0 22 14 */	add r7, r0, r4
/* 8007D2D4 0007A214  A0 87 00 04 */	lhz r4, 4(r7)
/* 8007D2D8 0007A218  A0 07 00 06 */	lhz r0, 6(r7)
/* 8007D2DC 0007A21C  20 A4 00 01 */	subfic r5, r4, 1
/* 8007D2E0 0007A220  A0 87 00 00 */	lhz r4, 0(r7)
/* 8007D2E4 0007A224  20 00 00 01 */	subfic r0, r0, 1
/* 8007D2E8 0007A228  A0 E7 00 02 */	lhz r7, 2(r7)
/* 8007D2EC 0007A22C  7C A5 00 34 */	cntlzw r5, r5
/* 8007D2F0 0007A230  7C 00 00 34 */	cntlzw r0, r0
/* 8007D2F4 0007A234  54 A5 DE 3E */	rlwinm r5, r5, 0x1b, 0x18, 0x1f
/* 8007D2F8 0007A238  54 08 DE 3E */	rlwinm r8, r0, 0x1b, 0x18, 0x1f
/* 8007D2FC 0007A23C  4B FF 83 29 */	bl J3DGDSetTexCoordScale2__F13_GXTexCoordIDUsUcUcUsUcUc
/* 8007D300 0007A240  88 9F 00 11 */	lbz r4, 0x11(r31)
/* 8007D304 0007A244  3C 60 80 51 */	lis r3, sTexCoordScaleTable__6J3DSys@ha
/* 8007D308 0007A248  38 63 F4 1C */	addi r3, r3, sTexCoordScaleTable__6J3DSys@l
/* 8007D30C 0007A24C  88 1F 00 10 */	lbz r0, 0x10(r31)
/* 8007D310 0007A250  54 84 1E B8 */	rlwinm r4, r4, 3, 0x1a, 0x1c
/* 8007D314 0007A254  38 C0 00 00 */	li r6, 0
/* 8007D318 0007A258  7C E3 22 14 */	add r7, r3, r4
/* 8007D31C 0007A25C  54 03 07 7E */	clrlwi r3, r0, 0x1d
/* 8007D320 0007A260  A0 87 00 04 */	lhz r4, 4(r7)
/* 8007D324 0007A264  39 20 00 00 */	li r9, 0
/* 8007D328 0007A268  A0 07 00 06 */	lhz r0, 6(r7)
/* 8007D32C 0007A26C  20 A4 00 01 */	subfic r5, r4, 1
/* 8007D330 0007A270  A0 87 00 00 */	lhz r4, 0(r7)
/* 8007D334 0007A274  20 00 00 01 */	subfic r0, r0, 1
/* 8007D338 0007A278  A0 E7 00 02 */	lhz r7, 2(r7)
/* 8007D33C 0007A27C  7C A5 00 34 */	cntlzw r5, r5
/* 8007D340 0007A280  7C 00 00 34 */	cntlzw r0, r0
/* 8007D344 0007A284  54 A5 DE 3E */	rlwinm r5, r5, 0x1b, 0x18, 0x1f
/* 8007D348 0007A288  54 08 DE 3E */	rlwinm r8, r0, 0x1b, 0x18, 0x1f
/* 8007D34C 0007A28C  4B FF 82 D9 */	bl J3DGDSetTexCoordScale2__F13_GXTexCoordIDUsUcUcUsUcUc
/* 8007D350 0007A290  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8007D354 0007A294  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8007D358 0007A298  7C 08 03 A6 */	mtlr r0
/* 8007D35C 0007A29C  38 21 00 10 */	addi r1, r1, 0x10
/* 8007D360 0007A2A0  4E 80 00 20 */	blr 
.endfn diffTexCoordScale__12J3DTevBlock2Fv

.fn diffTexNo__12J3DTevBlock4Fv, global
/* 8007D364 0007A2A4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8007D368 0007A2A8  7C 08 02 A6 */	mflr r0
/* 8007D36C 0007A2AC  90 01 00 14 */	stw r0, 0x14(r1)
/* 8007D370 0007A2B0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8007D374 0007A2B4  7C 7F 1B 78 */	mr r31, r3
/* 8007D378 0007A2B8  93 C1 00 08 */	stw r30, 8(r1)
/* 8007D37C 0007A2BC  3B C0 00 00 */	li r30, 0
.L_8007D380:
/* 8007D380 0007A2C0  A0 1F 00 08 */	lhz r0, 8(r31)
/* 8007D384 0007A2C4  28 00 FF FF */	cmplwi r0, 0xffff
/* 8007D388 0007A2C8  41 82 00 10 */	beq .L_8007D398
/* 8007D38C 0007A2CC  7F C3 F3 78 */	mr r3, r30
/* 8007D390 0007A2D0  38 9F 00 08 */	addi r4, r31, 8
/* 8007D394 0007A2D4  4B FE 7F F5 */	bl loadTexNo__FUlRCUs
.L_8007D398:
/* 8007D398 0007A2D8  3B DE 00 01 */	addi r30, r30, 1
/* 8007D39C 0007A2DC  3B FF 00 02 */	addi r31, r31, 2
/* 8007D3A0 0007A2E0  28 1E 00 04 */	cmplwi r30, 4
/* 8007D3A4 0007A2E4  41 80 FF DC */	blt .L_8007D380
/* 8007D3A8 0007A2E8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8007D3AC 0007A2EC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8007D3B0 0007A2F0  83 C1 00 08 */	lwz r30, 8(r1)
/* 8007D3B4 0007A2F4  7C 08 03 A6 */	mtlr r0
/* 8007D3B8 0007A2F8  38 21 00 10 */	addi r1, r1, 0x10
/* 8007D3BC 0007A2FC  4E 80 00 20 */	blr 
.endfn diffTexNo__12J3DTevBlock4Fv

.fn diffTevReg__12J3DTevBlock4Fv, global
/* 8007D3C0 0007A300  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8007D3C4 0007A304  7C 08 02 A6 */	mflr r0
/* 8007D3C8 0007A308  90 01 00 34 */	stw r0, 0x34(r1)
/* 8007D3CC 0007A30C  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 8007D3D0 0007A310  93 C1 00 28 */	stw r30, 0x28(r1)
/* 8007D3D4 0007A314  3B C0 00 00 */	li r30, 0
/* 8007D3D8 0007A318  93 A1 00 24 */	stw r29, 0x24(r1)
/* 8007D3DC 0007A31C  7C 7D 1B 78 */	mr r29, r3
/* 8007D3E0 0007A320  7F BF EB 78 */	mr r31, r29
.L_8007D3E4:
/* 8007D3E4 0007A324  80 BF 00 42 */	lwz r5, 0x42(r31)
/* 8007D3E8 0007A328  38 7E 00 01 */	addi r3, r30, 1
/* 8007D3EC 0007A32C  80 1F 00 46 */	lwz r0, 0x46(r31)
/* 8007D3F0 0007A330  38 81 00 0C */	addi r4, r1, 0xc
/* 8007D3F4 0007A334  90 A1 00 0C */	stw r5, 0xc(r1)
/* 8007D3F8 0007A338  90 01 00 10 */	stw r0, 0x10(r1)
/* 8007D3FC 0007A33C  4B FF 93 ED */	bl J3DGDSetTevColorS10__F11_GXTevRegID11_GXColorS10
/* 8007D400 0007A340  3B DE 00 01 */	addi r30, r30, 1
/* 8007D404 0007A344  3B FF 00 08 */	addi r31, r31, 8
/* 8007D408 0007A348  28 1E 00 03 */	cmplwi r30, 3
/* 8007D40C 0007A34C  41 80 FF D8 */	blt .L_8007D3E4
/* 8007D410 0007A350  3B C0 00 00 */	li r30, 0
/* 8007D414 0007A354  7F BF EB 78 */	mr r31, r29
.L_8007D418:
/* 8007D418 0007A358  80 1F 00 62 */	lwz r0, 0x62(r31)
/* 8007D41C 0007A35C  7F C3 F3 78 */	mr r3, r30
/* 8007D420 0007A360  38 81 00 08 */	addi r4, r1, 8
/* 8007D424 0007A364  90 01 00 08 */	stw r0, 8(r1)
/* 8007D428 0007A368  4B FF 92 59 */	bl J3DGDSetTevKColor__F14_GXTevKColorID8_GXColor
/* 8007D42C 0007A36C  3B DE 00 01 */	addi r30, r30, 1
/* 8007D430 0007A370  3B FF 00 04 */	addi r31, r31, 4
/* 8007D434 0007A374  28 1E 00 04 */	cmplwi r30, 4
/* 8007D438 0007A378  41 80 FF E0 */	blt .L_8007D418
/* 8007D43C 0007A37C  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8007D440 0007A380  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 8007D444 0007A384  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 8007D448 0007A388  83 A1 00 24 */	lwz r29, 0x24(r1)
/* 8007D44C 0007A38C  7C 08 03 A6 */	mtlr r0
/* 8007D450 0007A390  38 21 00 30 */	addi r1, r1, 0x30
/* 8007D454 0007A394  4E 80 00 20 */	blr 
.endfn diffTevReg__12J3DTevBlock4Fv

.fn diffTevStage__12J3DTevBlock4Fv, global
/* 8007D458 0007A398  88 03 00 20 */	lbz r0, 0x20(r3)
/* 8007D45C 0007A39C  7C 09 03 A6 */	mtctr r0
/* 8007D460 0007A3A0  28 00 00 00 */	cmplwi r0, 0
/* 8007D464 0007A3A4  4C 81 00 20 */	blelr 
.L_8007D468:
/* 8007D468 0007A3A8  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 8007D46C 0007A3AC  39 20 00 61 */	li r9, 0x61
/* 8007D470 0007A3B0  81 43 00 21 */	lwz r10, 0x21(r3)
/* 8007D474 0007A3B4  80 85 00 08 */	lwz r4, 8(r5)
/* 8007D478 0007A3B8  55 48 46 3E */	srwi r8, r10, 0x18
/* 8007D47C 0007A3BC  55 47 86 3E */	rlwinm r7, r10, 0x10, 0x18, 0x1f
/* 8007D480 0007A3C0  38 04 00 01 */	addi r0, r4, 1
/* 8007D484 0007A3C4  55 46 C6 3E */	rlwinm r6, r10, 0x18, 0x18, 0x1f
/* 8007D488 0007A3C8  90 05 00 08 */	stw r0, 8(r5)
/* 8007D48C 0007A3CC  99 24 00 00 */	stb r9, 0(r4)
/* 8007D490 0007A3D0  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 8007D494 0007A3D4  80 85 00 08 */	lwz r4, 8(r5)
/* 8007D498 0007A3D8  38 04 00 01 */	addi r0, r4, 1
/* 8007D49C 0007A3DC  90 05 00 08 */	stw r0, 8(r5)
/* 8007D4A0 0007A3E0  99 04 00 00 */	stb r8, 0(r4)
/* 8007D4A4 0007A3E4  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 8007D4A8 0007A3E8  80 85 00 08 */	lwz r4, 8(r5)
/* 8007D4AC 0007A3EC  38 04 00 01 */	addi r0, r4, 1
/* 8007D4B0 0007A3F0  90 05 00 08 */	stw r0, 8(r5)
/* 8007D4B4 0007A3F4  98 E4 00 00 */	stb r7, 0(r4)
/* 8007D4B8 0007A3F8  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 8007D4BC 0007A3FC  80 85 00 08 */	lwz r4, 8(r5)
/* 8007D4C0 0007A400  38 04 00 01 */	addi r0, r4, 1
/* 8007D4C4 0007A404  90 05 00 08 */	stw r0, 8(r5)
/* 8007D4C8 0007A408  98 C4 00 00 */	stb r6, 0(r4)
/* 8007D4CC 0007A40C  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 8007D4D0 0007A410  80 85 00 08 */	lwz r4, 8(r5)
/* 8007D4D4 0007A414  38 04 00 01 */	addi r0, r4, 1
/* 8007D4D8 0007A418  90 05 00 08 */	stw r0, 8(r5)
/* 8007D4DC 0007A41C  99 44 00 00 */	stb r10, 0(r4)
/* 8007D4E0 0007A420  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 8007D4E4 0007A424  81 43 00 25 */	lwz r10, 0x25(r3)
/* 8007D4E8 0007A428  38 63 00 08 */	addi r3, r3, 8
/* 8007D4EC 0007A42C  80 85 00 08 */	lwz r4, 8(r5)
/* 8007D4F0 0007A430  55 48 46 3E */	srwi r8, r10, 0x18
/* 8007D4F4 0007A434  55 47 86 3E */	rlwinm r7, r10, 0x10, 0x18, 0x1f
/* 8007D4F8 0007A438  38 04 00 01 */	addi r0, r4, 1
/* 8007D4FC 0007A43C  55 46 C6 3E */	rlwinm r6, r10, 0x18, 0x18, 0x1f
/* 8007D500 0007A440  90 05 00 08 */	stw r0, 8(r5)
/* 8007D504 0007A444  99 24 00 00 */	stb r9, 0(r4)
/* 8007D508 0007A448  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 8007D50C 0007A44C  80 85 00 08 */	lwz r4, 8(r5)
/* 8007D510 0007A450  38 04 00 01 */	addi r0, r4, 1
/* 8007D514 0007A454  90 05 00 08 */	stw r0, 8(r5)
/* 8007D518 0007A458  99 04 00 00 */	stb r8, 0(r4)
/* 8007D51C 0007A45C  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 8007D520 0007A460  80 85 00 08 */	lwz r4, 8(r5)
/* 8007D524 0007A464  38 04 00 01 */	addi r0, r4, 1
/* 8007D528 0007A468  90 05 00 08 */	stw r0, 8(r5)
/* 8007D52C 0007A46C  98 E4 00 00 */	stb r7, 0(r4)
/* 8007D530 0007A470  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 8007D534 0007A474  80 85 00 08 */	lwz r4, 8(r5)
/* 8007D538 0007A478  38 04 00 01 */	addi r0, r4, 1
/* 8007D53C 0007A47C  90 05 00 08 */	stw r0, 8(r5)
/* 8007D540 0007A480  98 C4 00 00 */	stb r6, 0(r4)
/* 8007D544 0007A484  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 8007D548 0007A488  80 85 00 08 */	lwz r4, 8(r5)
/* 8007D54C 0007A48C  38 04 00 01 */	addi r0, r4, 1
/* 8007D550 0007A490  90 05 00 08 */	stw r0, 8(r5)
/* 8007D554 0007A494  99 44 00 00 */	stb r10, 0(r4)
/* 8007D558 0007A498  42 00 FF 10 */	bdnz .L_8007D468
/* 8007D55C 0007A49C  4E 80 00 20 */	blr 
.endfn diffTevStage__12J3DTevBlock4Fv

.fn diffTevStageIndirect__12J3DTevBlock4Fv, global
/* 8007D560 0007A4A0  88 03 00 20 */	lbz r0, 0x20(r3)
/* 8007D564 0007A4A4  39 60 00 00 */	li r11, 0
/* 8007D568 0007A4A8  7C 09 03 A6 */	mtctr r0
/* 8007D56C 0007A4AC  28 00 00 00 */	cmplwi r0, 0
/* 8007D570 0007A4B0  4C 81 00 20 */	blelr 
.L_8007D574:
/* 8007D574 0007A4B4  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 8007D578 0007A4B8  38 0B 00 10 */	addi r0, r11, 0x10
/* 8007D57C 0007A4BC  80 C3 00 80 */	lwz r6, 0x80(r3)
/* 8007D580 0007A4C0  54 00 C0 0E */	slwi r0, r0, 0x18
/* 8007D584 0007A4C4  80 85 00 08 */	lwz r4, 8(r5)
/* 8007D588 0007A4C8  39 20 00 61 */	li r9, 0x61
/* 8007D58C 0007A4CC  7C CA 03 78 */	or r10, r6, r0
/* 8007D590 0007A4D0  38 63 00 04 */	addi r3, r3, 4
/* 8007D594 0007A4D4  38 04 00 01 */	addi r0, r4, 1
/* 8007D598 0007A4D8  39 6B 00 01 */	addi r11, r11, 1
/* 8007D59C 0007A4DC  90 05 00 08 */	stw r0, 8(r5)
/* 8007D5A0 0007A4E0  55 48 46 3E */	srwi r8, r10, 0x18
/* 8007D5A4 0007A4E4  55 47 86 3E */	rlwinm r7, r10, 0x10, 0x18, 0x1f
/* 8007D5A8 0007A4E8  55 46 C6 3E */	rlwinm r6, r10, 0x18, 0x18, 0x1f
/* 8007D5AC 0007A4EC  99 24 00 00 */	stb r9, 0(r4)
/* 8007D5B0 0007A4F0  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 8007D5B4 0007A4F4  80 85 00 08 */	lwz r4, 8(r5)
/* 8007D5B8 0007A4F8  38 04 00 01 */	addi r0, r4, 1
/* 8007D5BC 0007A4FC  90 05 00 08 */	stw r0, 8(r5)
/* 8007D5C0 0007A500  99 04 00 00 */	stb r8, 0(r4)
/* 8007D5C4 0007A504  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 8007D5C8 0007A508  80 85 00 08 */	lwz r4, 8(r5)
/* 8007D5CC 0007A50C  38 04 00 01 */	addi r0, r4, 1
/* 8007D5D0 0007A510  90 05 00 08 */	stw r0, 8(r5)
/* 8007D5D4 0007A514  98 E4 00 00 */	stb r7, 0(r4)
/* 8007D5D8 0007A518  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 8007D5DC 0007A51C  80 85 00 08 */	lwz r4, 8(r5)
/* 8007D5E0 0007A520  38 04 00 01 */	addi r0, r4, 1
/* 8007D5E4 0007A524  90 05 00 08 */	stw r0, 8(r5)
/* 8007D5E8 0007A528  98 C4 00 00 */	stb r6, 0(r4)
/* 8007D5EC 0007A52C  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 8007D5F0 0007A530  80 85 00 08 */	lwz r4, 8(r5)
/* 8007D5F4 0007A534  38 04 00 01 */	addi r0, r4, 1
/* 8007D5F8 0007A538  90 05 00 08 */	stw r0, 8(r5)
/* 8007D5FC 0007A53C  99 44 00 00 */	stb r10, 0(r4)
/* 8007D600 0007A540  42 00 FF 74 */	bdnz .L_8007D574
/* 8007D604 0007A544  4E 80 00 20 */	blr 
.endfn diffTevStageIndirect__12J3DTevBlock4Fv

.fn diffTexCoordScale__12J3DTevBlock4Fv, global
/* 8007D608 0007A548  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8007D60C 0007A54C  7C 08 02 A6 */	mflr r0
/* 8007D610 0007A550  90 01 00 24 */	stw r0, 0x24(r1)
/* 8007D614 0007A554  BF 61 00 0C */	stmw r27, 0xc(r1)
/* 8007D618 0007A558  7C 7B 1B 78 */	mr r27, r3
/* 8007D61C 0007A55C  3C 60 80 51 */	lis r3, sTexCoordScaleTable__6J3DSys@ha
/* 8007D620 0007A560  3B 80 00 00 */	li r28, 0
/* 8007D624 0007A564  7F 7E DB 78 */	mr r30, r27
/* 8007D628 0007A568  3B E3 F4 1C */	addi r31, r3, sTexCoordScaleTable__6J3DSys@l
/* 8007D62C 0007A56C  8B BB 00 20 */	lbz r29, 0x20(r27)
/* 8007D630 0007A570  48 00 00 A8 */	b .L_8007D6D8
.L_8007D634:
/* 8007D634 0007A574  88 7E 00 11 */	lbz r3, 0x11(r30)
/* 8007D638 0007A578  38 C0 00 00 */	li r6, 0
/* 8007D63C 0007A57C  88 1E 00 10 */	lbz r0, 0x10(r30)
/* 8007D640 0007A580  39 20 00 00 */	li r9, 0
/* 8007D644 0007A584  54 63 1E B8 */	rlwinm r3, r3, 3, 0x1a, 0x1c
/* 8007D648 0007A588  7C FF 1A 14 */	add r7, r31, r3
/* 8007D64C 0007A58C  A0 87 00 04 */	lhz r4, 4(r7)
/* 8007D650 0007A590  54 03 07 7E */	clrlwi r3, r0, 0x1d
/* 8007D654 0007A594  A0 07 00 06 */	lhz r0, 6(r7)
/* 8007D658 0007A598  20 A4 00 01 */	subfic r5, r4, 1
/* 8007D65C 0007A59C  A0 87 00 00 */	lhz r4, 0(r7)
/* 8007D660 0007A5A0  20 00 00 01 */	subfic r0, r0, 1
/* 8007D664 0007A5A4  A0 E7 00 02 */	lhz r7, 2(r7)
/* 8007D668 0007A5A8  7C A5 00 34 */	cntlzw r5, r5
/* 8007D66C 0007A5AC  7C 00 00 34 */	cntlzw r0, r0
/* 8007D670 0007A5B0  54 A5 DE 3E */	rlwinm r5, r5, 0x1b, 0x18, 0x1f
/* 8007D674 0007A5B4  54 08 DE 3E */	rlwinm r8, r0, 0x1b, 0x18, 0x1f
/* 8007D678 0007A5B8  4B FF 7F AD */	bl J3DGDSetTexCoordScale2__F13_GXTexCoordIDUsUcUcUsUcUc
/* 8007D67C 0007A5BC  38 1C 00 01 */	addi r0, r28, 1
/* 8007D680 0007A5C0  38 C0 00 00 */	li r6, 0
/* 8007D684 0007A5C4  54 00 10 3A */	slwi r0, r0, 2
/* 8007D688 0007A5C8  39 20 00 00 */	li r9, 0
/* 8007D68C 0007A5CC  7C 9B 02 14 */	add r4, r27, r0
/* 8007D690 0007A5D0  88 64 00 11 */	lbz r3, 0x11(r4)
/* 8007D694 0007A5D4  88 04 00 10 */	lbz r0, 0x10(r4)
/* 8007D698 0007A5D8  54 63 1E B8 */	rlwinm r3, r3, 3, 0x1a, 0x1c
/* 8007D69C 0007A5DC  7C FF 1A 14 */	add r7, r31, r3
/* 8007D6A0 0007A5E0  A0 87 00 04 */	lhz r4, 4(r7)
/* 8007D6A4 0007A5E4  54 03 07 7E */	clrlwi r3, r0, 0x1d
/* 8007D6A8 0007A5E8  A0 07 00 06 */	lhz r0, 6(r7)
/* 8007D6AC 0007A5EC  20 A4 00 01 */	subfic r5, r4, 1
/* 8007D6B0 0007A5F0  A0 87 00 00 */	lhz r4, 0(r7)
/* 8007D6B4 0007A5F4  20 00 00 01 */	subfic r0, r0, 1
/* 8007D6B8 0007A5F8  A0 E7 00 02 */	lhz r7, 2(r7)
/* 8007D6BC 0007A5FC  7C A5 00 34 */	cntlzw r5, r5
/* 8007D6C0 0007A600  7C 00 00 34 */	cntlzw r0, r0
/* 8007D6C4 0007A604  54 A5 DE 3E */	rlwinm r5, r5, 0x1b, 0x18, 0x1f
/* 8007D6C8 0007A608  54 08 DE 3E */	rlwinm r8, r0, 0x1b, 0x18, 0x1f
/* 8007D6CC 0007A60C  4B FF 7F 59 */	bl J3DGDSetTexCoordScale2__F13_GXTexCoordIDUsUcUcUsUcUc
/* 8007D6D0 0007A610  3B DE 00 08 */	addi r30, r30, 8
/* 8007D6D4 0007A614  3B 9C 00 02 */	addi r28, r28, 2
.L_8007D6D8:
/* 8007D6D8 0007A618  7C 1C E8 40 */	cmplw r28, r29
/* 8007D6DC 0007A61C  41 80 FF 58 */	blt .L_8007D634
/* 8007D6E0 0007A620  BB 61 00 0C */	lmw r27, 0xc(r1)
/* 8007D6E4 0007A624  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8007D6E8 0007A628  7C 08 03 A6 */	mtlr r0
/* 8007D6EC 0007A62C  38 21 00 20 */	addi r1, r1, 0x20
/* 8007D6F0 0007A630  4E 80 00 20 */	blr 
.endfn diffTexCoordScale__12J3DTevBlock4Fv

.fn diffTexNo__13J3DTevBlock16Fv, global
/* 8007D6F4 0007A634  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8007D6F8 0007A638  7C 08 02 A6 */	mflr r0
/* 8007D6FC 0007A63C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8007D700 0007A640  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8007D704 0007A644  7C 7F 1B 78 */	mr r31, r3
/* 8007D708 0007A648  93 C1 00 08 */	stw r30, 8(r1)
/* 8007D70C 0007A64C  3B C0 00 00 */	li r30, 0
.L_8007D710:
/* 8007D710 0007A650  A0 1F 00 08 */	lhz r0, 8(r31)
/* 8007D714 0007A654  28 00 FF FF */	cmplwi r0, 0xffff
/* 8007D718 0007A658  41 82 00 10 */	beq .L_8007D728
/* 8007D71C 0007A65C  7F C3 F3 78 */	mr r3, r30
/* 8007D720 0007A660  38 9F 00 08 */	addi r4, r31, 8
/* 8007D724 0007A664  4B FE 7C 65 */	bl loadTexNo__FUlRCUs
.L_8007D728:
/* 8007D728 0007A668  3B DE 00 01 */	addi r30, r30, 1
/* 8007D72C 0007A66C  3B FF 00 02 */	addi r31, r31, 2
/* 8007D730 0007A670  28 1E 00 08 */	cmplwi r30, 8
/* 8007D734 0007A674  41 80 FF DC */	blt .L_8007D710
/* 8007D738 0007A678  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8007D73C 0007A67C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8007D740 0007A680  83 C1 00 08 */	lwz r30, 8(r1)
/* 8007D744 0007A684  7C 08 03 A6 */	mtlr r0
/* 8007D748 0007A688  38 21 00 10 */	addi r1, r1, 0x10
/* 8007D74C 0007A68C  4E 80 00 20 */	blr 
.endfn diffTexNo__13J3DTevBlock16Fv

.fn diffTevReg__13J3DTevBlock16Fv, global
/* 8007D750 0007A690  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8007D754 0007A694  7C 08 02 A6 */	mflr r0
/* 8007D758 0007A698  90 01 00 34 */	stw r0, 0x34(r1)
/* 8007D75C 0007A69C  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 8007D760 0007A6A0  93 C1 00 28 */	stw r30, 0x28(r1)
/* 8007D764 0007A6A4  3B C0 00 00 */	li r30, 0
/* 8007D768 0007A6A8  93 A1 00 24 */	stw r29, 0x24(r1)
/* 8007D76C 0007A6AC  7C 7D 1B 78 */	mr r29, r3
/* 8007D770 0007A6B0  7F BF EB 78 */	mr r31, r29
.L_8007D774:
/* 8007D774 0007A6B4  80 BF 00 DA */	lwz r5, 0xda(r31)
/* 8007D778 0007A6B8  38 7E 00 01 */	addi r3, r30, 1
/* 8007D77C 0007A6BC  80 1F 00 DE */	lwz r0, 0xde(r31)
/* 8007D780 0007A6C0  38 81 00 0C */	addi r4, r1, 0xc
/* 8007D784 0007A6C4  90 A1 00 0C */	stw r5, 0xc(r1)
/* 8007D788 0007A6C8  90 01 00 10 */	stw r0, 0x10(r1)
/* 8007D78C 0007A6CC  4B FF 90 5D */	bl J3DGDSetTevColorS10__F11_GXTevRegID11_GXColorS10
/* 8007D790 0007A6D0  3B DE 00 01 */	addi r30, r30, 1
/* 8007D794 0007A6D4  3B FF 00 08 */	addi r31, r31, 8
/* 8007D798 0007A6D8  28 1E 00 03 */	cmplwi r30, 3
/* 8007D79C 0007A6DC  41 80 FF D8 */	blt .L_8007D774
/* 8007D7A0 0007A6E0  3B C0 00 00 */	li r30, 0
/* 8007D7A4 0007A6E4  7F BF EB 78 */	mr r31, r29
.L_8007D7A8:
/* 8007D7A8 0007A6E8  80 1F 00 FA */	lwz r0, 0xfa(r31)
/* 8007D7AC 0007A6EC  7F C3 F3 78 */	mr r3, r30
/* 8007D7B0 0007A6F0  38 81 00 08 */	addi r4, r1, 8
/* 8007D7B4 0007A6F4  90 01 00 08 */	stw r0, 8(r1)
/* 8007D7B8 0007A6F8  4B FF 8E C9 */	bl J3DGDSetTevKColor__F14_GXTevKColorID8_GXColor
/* 8007D7BC 0007A6FC  3B DE 00 01 */	addi r30, r30, 1
/* 8007D7C0 0007A700  3B FF 00 04 */	addi r31, r31, 4
/* 8007D7C4 0007A704  28 1E 00 04 */	cmplwi r30, 4
/* 8007D7C8 0007A708  41 80 FF E0 */	blt .L_8007D7A8
/* 8007D7CC 0007A70C  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8007D7D0 0007A710  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 8007D7D4 0007A714  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 8007D7D8 0007A718  83 A1 00 24 */	lwz r29, 0x24(r1)
/* 8007D7DC 0007A71C  7C 08 03 A6 */	mtlr r0
/* 8007D7E0 0007A720  38 21 00 30 */	addi r1, r1, 0x30
/* 8007D7E4 0007A724  4E 80 00 20 */	blr 
.endfn diffTevReg__13J3DTevBlock16Fv

.fn diffTevStage__13J3DTevBlock16Fv, global
/* 8007D7E8 0007A728  88 03 00 58 */	lbz r0, 0x58(r3)
/* 8007D7EC 0007A72C  7C 09 03 A6 */	mtctr r0
/* 8007D7F0 0007A730  28 00 00 00 */	cmplwi r0, 0
/* 8007D7F4 0007A734  4C 81 00 20 */	blelr 
.L_8007D7F8:
/* 8007D7F8 0007A738  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 8007D7FC 0007A73C  39 20 00 61 */	li r9, 0x61
/* 8007D800 0007A740  81 43 00 59 */	lwz r10, 0x59(r3)
/* 8007D804 0007A744  80 85 00 08 */	lwz r4, 8(r5)
/* 8007D808 0007A748  55 48 46 3E */	srwi r8, r10, 0x18
/* 8007D80C 0007A74C  55 47 86 3E */	rlwinm r7, r10, 0x10, 0x18, 0x1f
/* 8007D810 0007A750  38 04 00 01 */	addi r0, r4, 1
/* 8007D814 0007A754  55 46 C6 3E */	rlwinm r6, r10, 0x18, 0x18, 0x1f
/* 8007D818 0007A758  90 05 00 08 */	stw r0, 8(r5)
/* 8007D81C 0007A75C  99 24 00 00 */	stb r9, 0(r4)
/* 8007D820 0007A760  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 8007D824 0007A764  80 85 00 08 */	lwz r4, 8(r5)
/* 8007D828 0007A768  38 04 00 01 */	addi r0, r4, 1
/* 8007D82C 0007A76C  90 05 00 08 */	stw r0, 8(r5)
/* 8007D830 0007A770  99 04 00 00 */	stb r8, 0(r4)
/* 8007D834 0007A774  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 8007D838 0007A778  80 85 00 08 */	lwz r4, 8(r5)
/* 8007D83C 0007A77C  38 04 00 01 */	addi r0, r4, 1
/* 8007D840 0007A780  90 05 00 08 */	stw r0, 8(r5)
/* 8007D844 0007A784  98 E4 00 00 */	stb r7, 0(r4)
/* 8007D848 0007A788  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 8007D84C 0007A78C  80 85 00 08 */	lwz r4, 8(r5)
/* 8007D850 0007A790  38 04 00 01 */	addi r0, r4, 1
/* 8007D854 0007A794  90 05 00 08 */	stw r0, 8(r5)
/* 8007D858 0007A798  98 C4 00 00 */	stb r6, 0(r4)
/* 8007D85C 0007A79C  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 8007D860 0007A7A0  80 85 00 08 */	lwz r4, 8(r5)
/* 8007D864 0007A7A4  38 04 00 01 */	addi r0, r4, 1
/* 8007D868 0007A7A8  90 05 00 08 */	stw r0, 8(r5)
/* 8007D86C 0007A7AC  99 44 00 00 */	stb r10, 0(r4)
/* 8007D870 0007A7B0  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 8007D874 0007A7B4  81 43 00 5D */	lwz r10, 0x5d(r3)
/* 8007D878 0007A7B8  38 63 00 08 */	addi r3, r3, 8
/* 8007D87C 0007A7BC  80 85 00 08 */	lwz r4, 8(r5)
/* 8007D880 0007A7C0  55 48 46 3E */	srwi r8, r10, 0x18
/* 8007D884 0007A7C4  55 47 86 3E */	rlwinm r7, r10, 0x10, 0x18, 0x1f
/* 8007D888 0007A7C8  38 04 00 01 */	addi r0, r4, 1
/* 8007D88C 0007A7CC  55 46 C6 3E */	rlwinm r6, r10, 0x18, 0x18, 0x1f
/* 8007D890 0007A7D0  90 05 00 08 */	stw r0, 8(r5)
/* 8007D894 0007A7D4  99 24 00 00 */	stb r9, 0(r4)
/* 8007D898 0007A7D8  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 8007D89C 0007A7DC  80 85 00 08 */	lwz r4, 8(r5)
/* 8007D8A0 0007A7E0  38 04 00 01 */	addi r0, r4, 1
/* 8007D8A4 0007A7E4  90 05 00 08 */	stw r0, 8(r5)
/* 8007D8A8 0007A7E8  99 04 00 00 */	stb r8, 0(r4)
/* 8007D8AC 0007A7EC  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 8007D8B0 0007A7F0  80 85 00 08 */	lwz r4, 8(r5)
/* 8007D8B4 0007A7F4  38 04 00 01 */	addi r0, r4, 1
/* 8007D8B8 0007A7F8  90 05 00 08 */	stw r0, 8(r5)
/* 8007D8BC 0007A7FC  98 E4 00 00 */	stb r7, 0(r4)
/* 8007D8C0 0007A800  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 8007D8C4 0007A804  80 85 00 08 */	lwz r4, 8(r5)
/* 8007D8C8 0007A808  38 04 00 01 */	addi r0, r4, 1
/* 8007D8CC 0007A80C  90 05 00 08 */	stw r0, 8(r5)
/* 8007D8D0 0007A810  98 C4 00 00 */	stb r6, 0(r4)
/* 8007D8D4 0007A814  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 8007D8D8 0007A818  80 85 00 08 */	lwz r4, 8(r5)
/* 8007D8DC 0007A81C  38 04 00 01 */	addi r0, r4, 1
/* 8007D8E0 0007A820  90 05 00 08 */	stw r0, 8(r5)
/* 8007D8E4 0007A824  99 44 00 00 */	stb r10, 0(r4)
/* 8007D8E8 0007A828  42 00 FF 10 */	bdnz .L_8007D7F8
/* 8007D8EC 0007A82C  4E 80 00 20 */	blr 
.endfn diffTevStage__13J3DTevBlock16Fv

.fn diffTevStageIndirect__13J3DTevBlock16Fv, global
/* 8007D8F0 0007A830  88 03 00 58 */	lbz r0, 0x58(r3)
/* 8007D8F4 0007A834  39 60 00 00 */	li r11, 0
/* 8007D8F8 0007A838  7C 09 03 A6 */	mtctr r0
/* 8007D8FC 0007A83C  28 00 00 00 */	cmplwi r0, 0
/* 8007D900 0007A840  4C 81 00 20 */	blelr 
.L_8007D904:
/* 8007D904 0007A844  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 8007D908 0007A848  38 0B 00 10 */	addi r0, r11, 0x10
/* 8007D90C 0007A84C  80 C3 01 30 */	lwz r6, 0x130(r3)
/* 8007D910 0007A850  54 00 C0 0E */	slwi r0, r0, 0x18
/* 8007D914 0007A854  80 85 00 08 */	lwz r4, 8(r5)
/* 8007D918 0007A858  39 20 00 61 */	li r9, 0x61
/* 8007D91C 0007A85C  7C CA 03 78 */	or r10, r6, r0
/* 8007D920 0007A860  38 63 00 04 */	addi r3, r3, 4
/* 8007D924 0007A864  38 04 00 01 */	addi r0, r4, 1
/* 8007D928 0007A868  39 6B 00 01 */	addi r11, r11, 1
/* 8007D92C 0007A86C  90 05 00 08 */	stw r0, 8(r5)
/* 8007D930 0007A870  55 48 46 3E */	srwi r8, r10, 0x18
/* 8007D934 0007A874  55 47 86 3E */	rlwinm r7, r10, 0x10, 0x18, 0x1f
/* 8007D938 0007A878  55 46 C6 3E */	rlwinm r6, r10, 0x18, 0x18, 0x1f
/* 8007D93C 0007A87C  99 24 00 00 */	stb r9, 0(r4)
/* 8007D940 0007A880  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 8007D944 0007A884  80 85 00 08 */	lwz r4, 8(r5)
/* 8007D948 0007A888  38 04 00 01 */	addi r0, r4, 1
/* 8007D94C 0007A88C  90 05 00 08 */	stw r0, 8(r5)
/* 8007D950 0007A890  99 04 00 00 */	stb r8, 0(r4)
/* 8007D954 0007A894  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 8007D958 0007A898  80 85 00 08 */	lwz r4, 8(r5)
/* 8007D95C 0007A89C  38 04 00 01 */	addi r0, r4, 1
/* 8007D960 0007A8A0  90 05 00 08 */	stw r0, 8(r5)
/* 8007D964 0007A8A4  98 E4 00 00 */	stb r7, 0(r4)
/* 8007D968 0007A8A8  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 8007D96C 0007A8AC  80 85 00 08 */	lwz r4, 8(r5)
/* 8007D970 0007A8B0  38 04 00 01 */	addi r0, r4, 1
/* 8007D974 0007A8B4  90 05 00 08 */	stw r0, 8(r5)
/* 8007D978 0007A8B8  98 C4 00 00 */	stb r6, 0(r4)
/* 8007D97C 0007A8BC  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 8007D980 0007A8C0  80 85 00 08 */	lwz r4, 8(r5)
/* 8007D984 0007A8C4  38 04 00 01 */	addi r0, r4, 1
/* 8007D988 0007A8C8  90 05 00 08 */	stw r0, 8(r5)
/* 8007D98C 0007A8CC  99 44 00 00 */	stb r10, 0(r4)
/* 8007D990 0007A8D0  42 00 FF 74 */	bdnz .L_8007D904
/* 8007D994 0007A8D4  4E 80 00 20 */	blr 
.endfn diffTevStageIndirect__13J3DTevBlock16Fv

.fn diffTexCoordScale__13J3DTevBlock16Fv, global
/* 8007D998 0007A8D8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8007D99C 0007A8DC  7C 08 02 A6 */	mflr r0
/* 8007D9A0 0007A8E0  90 01 00 24 */	stw r0, 0x24(r1)
/* 8007D9A4 0007A8E4  BF 61 00 0C */	stmw r27, 0xc(r1)
/* 8007D9A8 0007A8E8  7C 7B 1B 78 */	mr r27, r3
/* 8007D9AC 0007A8EC  3C 60 80 51 */	lis r3, sTexCoordScaleTable__6J3DSys@ha
/* 8007D9B0 0007A8F0  3B 80 00 00 */	li r28, 0
/* 8007D9B4 0007A8F4  7F 7E DB 78 */	mr r30, r27
/* 8007D9B8 0007A8F8  3B E3 F4 1C */	addi r31, r3, sTexCoordScaleTable__6J3DSys@l
/* 8007D9BC 0007A8FC  8B BB 00 58 */	lbz r29, 0x58(r27)
/* 8007D9C0 0007A900  48 00 00 A8 */	b .L_8007DA68
.L_8007D9C4:
/* 8007D9C4 0007A904  88 7E 00 19 */	lbz r3, 0x19(r30)
/* 8007D9C8 0007A908  38 C0 00 00 */	li r6, 0
/* 8007D9CC 0007A90C  88 1E 00 18 */	lbz r0, 0x18(r30)
/* 8007D9D0 0007A910  39 20 00 00 */	li r9, 0
/* 8007D9D4 0007A914  54 63 1E B8 */	rlwinm r3, r3, 3, 0x1a, 0x1c
/* 8007D9D8 0007A918  7C FF 1A 14 */	add r7, r31, r3
/* 8007D9DC 0007A91C  A0 87 00 04 */	lhz r4, 4(r7)
/* 8007D9E0 0007A920  54 03 07 7E */	clrlwi r3, r0, 0x1d
/* 8007D9E4 0007A924  A0 07 00 06 */	lhz r0, 6(r7)
/* 8007D9E8 0007A928  20 A4 00 01 */	subfic r5, r4, 1
/* 8007D9EC 0007A92C  A0 87 00 00 */	lhz r4, 0(r7)
/* 8007D9F0 0007A930  20 00 00 01 */	subfic r0, r0, 1
/* 8007D9F4 0007A934  A0 E7 00 02 */	lhz r7, 2(r7)
/* 8007D9F8 0007A938  7C A5 00 34 */	cntlzw r5, r5
/* 8007D9FC 0007A93C  7C 00 00 34 */	cntlzw r0, r0
/* 8007DA00 0007A940  54 A5 DE 3E */	rlwinm r5, r5, 0x1b, 0x18, 0x1f
/* 8007DA04 0007A944  54 08 DE 3E */	rlwinm r8, r0, 0x1b, 0x18, 0x1f
/* 8007DA08 0007A948  4B FF 7C 1D */	bl J3DGDSetTexCoordScale2__F13_GXTexCoordIDUsUcUcUsUcUc
/* 8007DA0C 0007A94C  38 1C 00 01 */	addi r0, r28, 1
/* 8007DA10 0007A950  38 C0 00 00 */	li r6, 0
/* 8007DA14 0007A954  54 00 10 3A */	slwi r0, r0, 2
/* 8007DA18 0007A958  39 20 00 00 */	li r9, 0
/* 8007DA1C 0007A95C  7C 9B 02 14 */	add r4, r27, r0
/* 8007DA20 0007A960  88 64 00 19 */	lbz r3, 0x19(r4)
/* 8007DA24 0007A964  88 04 00 18 */	lbz r0, 0x18(r4)
/* 8007DA28 0007A968  54 63 1E B8 */	rlwinm r3, r3, 3, 0x1a, 0x1c
/* 8007DA2C 0007A96C  7C FF 1A 14 */	add r7, r31, r3
/* 8007DA30 0007A970  A0 87 00 04 */	lhz r4, 4(r7)
/* 8007DA34 0007A974  54 03 07 7E */	clrlwi r3, r0, 0x1d
/* 8007DA38 0007A978  A0 07 00 06 */	lhz r0, 6(r7)
/* 8007DA3C 0007A97C  20 A4 00 01 */	subfic r5, r4, 1
/* 8007DA40 0007A980  A0 87 00 00 */	lhz r4, 0(r7)
/* 8007DA44 0007A984  20 00 00 01 */	subfic r0, r0, 1
/* 8007DA48 0007A988  A0 E7 00 02 */	lhz r7, 2(r7)
/* 8007DA4C 0007A98C  7C A5 00 34 */	cntlzw r5, r5
/* 8007DA50 0007A990  7C 00 00 34 */	cntlzw r0, r0
/* 8007DA54 0007A994  54 A5 DE 3E */	rlwinm r5, r5, 0x1b, 0x18, 0x1f
/* 8007DA58 0007A998  54 08 DE 3E */	rlwinm r8, r0, 0x1b, 0x18, 0x1f
/* 8007DA5C 0007A99C  4B FF 7B C9 */	bl J3DGDSetTexCoordScale2__F13_GXTexCoordIDUsUcUcUsUcUc
/* 8007DA60 0007A9A0  3B DE 00 08 */	addi r30, r30, 8
/* 8007DA64 0007A9A4  3B 9C 00 02 */	addi r28, r28, 2
.L_8007DA68:
/* 8007DA68 0007A9A8  7C 1C E8 40 */	cmplw r28, r29
/* 8007DA6C 0007A9AC  41 80 FF 58 */	blt .L_8007D9C4
/* 8007DA70 0007A9B0  BB 61 00 0C */	lmw r27, 0xc(r1)
/* 8007DA74 0007A9B4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8007DA78 0007A9B8  7C 08 03 A6 */	mtlr r0
/* 8007DA7C 0007A9BC  38 21 00 20 */	addi r1, r1, 0x20
/* 8007DA80 0007A9C0  4E 80 00 20 */	blr 
.endfn diffTexCoordScale__13J3DTevBlock16Fv

.fn ptrToIndex__13J3DTevBlock16Fv, global
/* 8007DA84 0007A9C4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8007DA88 0007A9C8  7C 08 02 A6 */	mflr r0
/* 8007DA8C 0007A9CC  90 01 00 24 */	stw r0, 0x24(r1)
/* 8007DA90 0007A9D0  BF 41 00 08 */	stmw r26, 8(r1)
/* 8007DA94 0007A9D4  7C 7B 1B 78 */	mr r27, r3
/* 8007DA98 0007A9D8  3C 60 80 51 */	lis r3, j3dSys@ha
/* 8007DA9C 0007A9DC  3B A0 00 00 */	li r29, 0
/* 8007DAA0 0007A9E0  3B 43 F2 30 */	addi r26, r3, j3dSys@l
/* 8007DAA4 0007A9E4  7F 7E DB 78 */	mr r30, r27
/* 8007DAA8 0007A9E8  3B 80 00 00 */	li r28, 0
/* 8007DAAC 0007A9EC  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 8007DAB0 0007A9F0  80 1B 00 04 */	lwz r0, 4(r27)
/* 8007DAB4 0007A9F4  80 85 00 00 */	lwz r4, 0(r5)
/* 8007DAB8 0007A9F8  7C 04 02 14 */	add r0, r4, r0
/* 8007DABC 0007A9FC  90 05 00 08 */	stw r0, 8(r5)
/* 8007DAC0 0007AA00  80 6D 8E A8 */	lwz r3, __GDCurrentDL@sda21(r13)
/* 8007DAC4 0007AA04  83 E3 00 08 */	lwz r31, 8(r3)
.L_8007DAC8:
/* 8007DAC8 0007AA08  A0 1E 00 08 */	lhz r0, 8(r30)
/* 8007DACC 0007AA0C  28 00 FF FF */	cmplwi r0, 0xffff
/* 8007DAD0 0007AA10  41 82 00 50 */	beq .L_8007DB20
/* 8007DAD4 0007AA14  80 CD 8E A8 */	lwz r6, __GDCurrentDL@sda21(r13)
/* 8007DAD8 0007AA18  7F 83 E3 78 */	mr r3, r28
/* 8007DADC 0007AA1C  80 BB 00 04 */	lwz r5, 4(r27)
/* 8007DAE0 0007AA20  38 9E 00 08 */	addi r4, r30, 8
/* 8007DAE4 0007AA24  80 06 00 00 */	lwz r0, 0(r6)
/* 8007DAE8 0007AA28  7C 1D 02 14 */	add r0, r29, r0
/* 8007DAEC 0007AA2C  7C 05 02 14 */	add r0, r5, r0
/* 8007DAF0 0007AA30  90 06 00 08 */	stw r0, 8(r6)
/* 8007DAF4 0007AA34  4B FE 7A 4D */	bl patchTexNo_PtrToIdx__FUlRCUs
/* 8007DAF8 0007AA38  80 7A 00 58 */	lwz r3, 0x58(r26)
/* 8007DAFC 0007AA3C  3B BD 00 14 */	addi r29, r29, 0x14
/* 8007DB00 0007AA40  A0 1E 00 08 */	lhz r0, 8(r30)
/* 8007DB04 0007AA44  80 83 00 04 */	lwz r4, 4(r3)
/* 8007DB08 0007AA48  54 03 28 34 */	slwi r3, r0, 5
/* 8007DB0C 0007AA4C  38 03 00 08 */	addi r0, r3, 8
/* 8007DB10 0007AA50  7C 04 00 AE */	lbzx r0, r4, r0
/* 8007DB14 0007AA54  28 00 00 01 */	cmplwi r0, 1
/* 8007DB18 0007AA58  40 82 00 08 */	bne .L_8007DB20
/* 8007DB1C 0007AA5C  3B BD 00 23 */	addi r29, r29, 0x23
.L_8007DB20:
/* 8007DB20 0007AA60  3B 9C 00 01 */	addi r28, r28, 1
/* 8007DB24 0007AA64  3B DE 00 02 */	addi r30, r30, 2
/* 8007DB28 0007AA68  28 1C 00 08 */	cmplwi r28, 8
/* 8007DB2C 0007AA6C  41 80 FF 9C */	blt .L_8007DAC8
/* 8007DB30 0007AA70  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 8007DB34 0007AA74  7F E3 FB 78 */	mr r3, r31
/* 8007DB38 0007AA78  80 04 00 08 */	lwz r0, 8(r4)
/* 8007DB3C 0007AA7C  7C 9F 00 50 */	subf r4, r31, r0
/* 8007DB40 0007AA80  48 06 EC 09 */	bl DCStoreRange
/* 8007DB44 0007AA84  BB 41 00 08 */	lmw r26, 8(r1)
/* 8007DB48 0007AA88  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8007DB4C 0007AA8C  7C 08 03 A6 */	mtlr r0
/* 8007DB50 0007AA90  38 21 00 20 */	addi r1, r1, 0x20
/* 8007DB54 0007AA94  4E 80 00 20 */	blr 
.endfn ptrToIndex__13J3DTevBlock16Fv

.fn ptrToIndex__18J3DTevBlockPatchedFv, global
/* 8007DB58 0007AA98  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8007DB5C 0007AA9C  7C 08 02 A6 */	mflr r0
/* 8007DB60 0007AAA0  90 01 00 24 */	stw r0, 0x24(r1)
/* 8007DB64 0007AAA4  BF 41 00 08 */	stmw r26, 8(r1)
/* 8007DB68 0007AAA8  7C 7B 1B 78 */	mr r27, r3
/* 8007DB6C 0007AAAC  3C 60 80 51 */	lis r3, j3dSys@ha
/* 8007DB70 0007AAB0  3B A0 00 00 */	li r29, 0
/* 8007DB74 0007AAB4  3B 43 F2 30 */	addi r26, r3, j3dSys@l
/* 8007DB78 0007AAB8  7F 7E DB 78 */	mr r30, r27
/* 8007DB7C 0007AABC  3B 80 00 00 */	li r28, 0
/* 8007DB80 0007AAC0  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 8007DB84 0007AAC4  80 1B 00 04 */	lwz r0, 4(r27)
/* 8007DB88 0007AAC8  80 85 00 00 */	lwz r4, 0(r5)
/* 8007DB8C 0007AACC  7C 04 02 14 */	add r0, r4, r0
/* 8007DB90 0007AAD0  90 05 00 08 */	stw r0, 8(r5)
/* 8007DB94 0007AAD4  80 6D 8E A8 */	lwz r3, __GDCurrentDL@sda21(r13)
/* 8007DB98 0007AAD8  83 E3 00 08 */	lwz r31, 8(r3)
.L_8007DB9C:
/* 8007DB9C 0007AADC  A0 1E 00 08 */	lhz r0, 8(r30)
/* 8007DBA0 0007AAE0  28 00 FF FF */	cmplwi r0, 0xffff
/* 8007DBA4 0007AAE4  41 82 00 50 */	beq .L_8007DBF4
/* 8007DBA8 0007AAE8  80 CD 8E A8 */	lwz r6, __GDCurrentDL@sda21(r13)
/* 8007DBAC 0007AAEC  7F 83 E3 78 */	mr r3, r28
/* 8007DBB0 0007AAF0  80 BB 00 04 */	lwz r5, 4(r27)
/* 8007DBB4 0007AAF4  38 9E 00 08 */	addi r4, r30, 8
/* 8007DBB8 0007AAF8  80 06 00 00 */	lwz r0, 0(r6)
/* 8007DBBC 0007AAFC  7C 1D 02 14 */	add r0, r29, r0
/* 8007DBC0 0007AB00  7C 05 02 14 */	add r0, r5, r0
/* 8007DBC4 0007AB04  90 06 00 08 */	stw r0, 8(r6)
/* 8007DBC8 0007AB08  4B FE 79 79 */	bl patchTexNo_PtrToIdx__FUlRCUs
/* 8007DBCC 0007AB0C  80 7A 00 58 */	lwz r3, 0x58(r26)
/* 8007DBD0 0007AB10  3B BD 00 14 */	addi r29, r29, 0x14
/* 8007DBD4 0007AB14  A0 1E 00 08 */	lhz r0, 8(r30)
/* 8007DBD8 0007AB18  80 83 00 04 */	lwz r4, 4(r3)
/* 8007DBDC 0007AB1C  54 03 28 34 */	slwi r3, r0, 5
/* 8007DBE0 0007AB20  38 03 00 08 */	addi r0, r3, 8
/* 8007DBE4 0007AB24  7C 04 00 AE */	lbzx r0, r4, r0
/* 8007DBE8 0007AB28  28 00 00 01 */	cmplwi r0, 1
/* 8007DBEC 0007AB2C  40 82 00 08 */	bne .L_8007DBF4
/* 8007DBF0 0007AB30  3B BD 00 23 */	addi r29, r29, 0x23
.L_8007DBF4:
/* 8007DBF4 0007AB34  3B 9C 00 01 */	addi r28, r28, 1
/* 8007DBF8 0007AB38  3B DE 00 02 */	addi r30, r30, 2
/* 8007DBFC 0007AB3C  28 1C 00 08 */	cmplwi r28, 8
/* 8007DC00 0007AB40  41 80 FF 9C */	blt .L_8007DB9C
/* 8007DC04 0007AB44  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 8007DC08 0007AB48  7F E3 FB 78 */	mr r3, r31
/* 8007DC0C 0007AB4C  80 04 00 08 */	lwz r0, 8(r4)
/* 8007DC10 0007AB50  7C 9F 00 50 */	subf r4, r31, r0
/* 8007DC14 0007AB54  48 06 EB 35 */	bl DCStoreRange
/* 8007DC18 0007AB58  BB 41 00 08 */	lmw r26, 8(r1)
/* 8007DC1C 0007AB5C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8007DC20 0007AB60  7C 08 03 A6 */	mtlr r0
/* 8007DC24 0007AB64  38 21 00 20 */	addi r1, r1, 0x20
/* 8007DC28 0007AB68  4E 80 00 20 */	blr 
.endfn ptrToIndex__18J3DTevBlockPatchedFv

.fn indexToPtr_private__11J3DTevBlockFUl, global
/* 8007DC2C 0007AB6C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8007DC30 0007AB70  7C 08 02 A6 */	mflr r0
/* 8007DC34 0007AB74  90 01 00 24 */	stw r0, 0x24(r1)
/* 8007DC38 0007AB78  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8007DC3C 0007AB7C  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8007DC40 0007AB80  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8007DC44 0007AB84  3B A0 00 00 */	li r29, 0
/* 8007DC48 0007AB88  80 6D 8E A8 */	lwz r3, __GDCurrentDL@sda21(r13)
/* 8007DC4C 0007AB8C  80 03 00 00 */	lwz r0, 0(r3)
/* 8007DC50 0007AB90  7C 00 22 14 */	add r0, r0, r4
/* 8007DC54 0007AB94  90 03 00 08 */	stw r0, 8(r3)
/* 8007DC58 0007AB98  80 6D 8E A8 */	lwz r3, __GDCurrentDL@sda21(r13)
/* 8007DC5C 0007AB9C  83 E3 00 08 */	lwz r31, 8(r3)
.L_8007DC60:
/* 8007DC60 0007ABA0  80 6D 8E A8 */	lwz r3, __GDCurrentDL@sda21(r13)
/* 8007DC64 0007ABA4  83 C3 00 08 */	lwz r30, 8(r3)
/* 8007DC68 0007ABA8  7F C3 F3 78 */	mr r3, r30
/* 8007DC6C 0007ABAC  4B FE 76 ED */	bl isTexNoReg__FPv
/* 8007DC70 0007ABB0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8007DC74 0007ABB4  41 82 00 24 */	beq .L_8007DC98
/* 8007DC78 0007ABB8  7F C3 F3 78 */	mr r3, r30
/* 8007DC7C 0007ABBC  4B FE 77 01 */	bl getTexNoReg__FPv
/* 8007DC80 0007ABC0  B0 61 00 08 */	sth r3, 8(r1)
/* 8007DC84 0007ABC4  7F A3 EB 78 */	mr r3, r29
/* 8007DC88 0007ABC8  38 81 00 08 */	addi r4, r1, 8
/* 8007DC8C 0007ABCC  4B FE 76 FD */	bl loadTexNo__FUlRCUs
/* 8007DC90 0007ABD0  3B BD 00 01 */	addi r29, r29, 1
/* 8007DC94 0007ABD4  4B FF FF CC */	b .L_8007DC60
.L_8007DC98:
/* 8007DC98 0007ABD8  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 8007DC9C 0007ABDC  7F E3 FB 78 */	mr r3, r31
/* 8007DCA0 0007ABE0  80 04 00 08 */	lwz r0, 8(r4)
/* 8007DCA4 0007ABE4  7C 9F 00 50 */	subf r4, r31, r0
/* 8007DCA8 0007ABE8  48 06 EA A1 */	bl DCStoreRange
/* 8007DCAC 0007ABEC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8007DCB0 0007ABF0  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8007DCB4 0007ABF4  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8007DCB8 0007ABF8  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8007DCBC 0007ABFC  7C 08 03 A6 */	mtlr r0
/* 8007DCC0 0007AC00  38 21 00 20 */	addi r1, r1, 0x20
/* 8007DCC4 0007AC04  4E 80 00 20 */	blr 
.endfn indexToPtr_private__11J3DTevBlockFUl

.fn load__15J3DIndBlockFullFv, global
/* 8007DCC8 0007AC08  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8007DCCC 0007AC0C  7C 08 02 A6 */	mflr r0
/* 8007DCD0 0007AC10  90 01 00 24 */	stw r0, 0x24(r1)
/* 8007DCD4 0007AC14  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8007DCD8 0007AC18  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8007DCDC 0007AC1C  7C 7E 1B 78 */	mr r30, r3
/* 8007DCE0 0007AC20  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8007DCE4 0007AC24  7F DD F3 78 */	mr r29, r30
/* 8007DCE8 0007AC28  93 81 00 10 */	stw r28, 0x10(r1)
/* 8007DCEC 0007AC2C  3B 80 00 00 */	li r28, 0
/* 8007DCF0 0007AC30  8B E3 00 04 */	lbz r31, 4(r3)
/* 8007DCF4 0007AC34  48 00 00 1C */	b .L_8007DD10
.L_8007DCF8:
/* 8007DCF8 0007AC38  88 BD 00 30 */	lbz r5, 0x30(r29)
/* 8007DCFC 0007AC3C  38 7C 00 01 */	addi r3, r28, 1
/* 8007DD00 0007AC40  38 9D 00 18 */	addi r4, r29, 0x18
/* 8007DD04 0007AC44  4B FF 82 35 */	bl J3DGDSetIndTexMtx__F14_GXIndTexMtxIDPA3_fSc
/* 8007DD08 0007AC48  3B BD 00 1C */	addi r29, r29, 0x1c
/* 8007DD0C 0007AC4C  3B 9C 00 01 */	addi r28, r28, 1
.L_8007DD10:
/* 8007DD10 0007AC50  7C 1C F8 40 */	cmplw r28, r31
/* 8007DD14 0007AC54  41 80 FF E4 */	blt .L_8007DCF8
/* 8007DD18 0007AC58  7F DD F3 78 */	mr r29, r30
/* 8007DD1C 0007AC5C  3B 80 00 00 */	li r28, 0
/* 8007DD20 0007AC60  48 00 00 24 */	b .L_8007DD44
.L_8007DD24:
/* 8007DD24 0007AC64  88 9D 00 6C */	lbz r4, 0x6c(r29)
/* 8007DD28 0007AC68  7F 83 E3 78 */	mr r3, r28
/* 8007DD2C 0007AC6C  88 BD 00 6D */	lbz r5, 0x6d(r29)
/* 8007DD30 0007AC70  88 DD 00 70 */	lbz r6, 0x70(r29)
/* 8007DD34 0007AC74  88 FD 00 71 */	lbz r7, 0x71(r29)
/* 8007DD38 0007AC78  4B FF 84 D9 */	bl J3DGDSetIndTexCoordScale__F16_GXIndTexStageID14_GXIndTexScale14_GXIndTexScale14_GXIndTexScale14_GXIndTexScale
/* 8007DD3C 0007AC7C  3B BD 00 08 */	addi r29, r29, 8
/* 8007DD40 0007AC80  3B 9C 00 02 */	addi r28, r28, 2
.L_8007DD44:
/* 8007DD44 0007AC84  7C 1C F8 40 */	cmplw r28, r31
/* 8007DD48 0007AC88  41 80 FF DC */	blt .L_8007DD24
/* 8007DD4C 0007AC8C  88 9E 00 06 */	lbz r4, 6(r30)
/* 8007DD50 0007AC90  3C 60 80 51 */	lis r3, sTexCoordScaleTable__6J3DSys@ha
/* 8007DD54 0007AC94  38 03 F4 1C */	addi r0, r3, sTexCoordScaleTable__6J3DSys@l
/* 8007DD58 0007AC98  88 7E 00 05 */	lbz r3, 5(r30)
/* 8007DD5C 0007AC9C  54 84 1E B8 */	rlwinm r4, r4, 3, 0x1a, 0x1c
/* 8007DD60 0007ACA0  38 C0 00 00 */	li r6, 0
/* 8007DD64 0007ACA4  7C E0 22 14 */	add r7, r0, r4
/* 8007DD68 0007ACA8  39 20 00 00 */	li r9, 0
/* 8007DD6C 0007ACAC  A0 87 00 04 */	lhz r4, 4(r7)
/* 8007DD70 0007ACB0  A0 07 00 06 */	lhz r0, 6(r7)
/* 8007DD74 0007ACB4  20 A4 00 01 */	subfic r5, r4, 1
/* 8007DD78 0007ACB8  A0 87 00 00 */	lhz r4, 0(r7)
/* 8007DD7C 0007ACBC  20 00 00 01 */	subfic r0, r0, 1
/* 8007DD80 0007ACC0  A0 E7 00 02 */	lhz r7, 2(r7)
/* 8007DD84 0007ACC4  7C A5 00 34 */	cntlzw r5, r5
/* 8007DD88 0007ACC8  7C 00 00 34 */	cntlzw r0, r0
/* 8007DD8C 0007ACCC  54 A5 DE 3E */	rlwinm r5, r5, 0x1b, 0x18, 0x1f
/* 8007DD90 0007ACD0  54 08 DE 3E */	rlwinm r8, r0, 0x1b, 0x18, 0x1f
/* 8007DD94 0007ACD4  4B FF 78 91 */	bl J3DGDSetTexCoordScale2__F13_GXTexCoordIDUsUcUcUsUcUc
/* 8007DD98 0007ACD8  88 9E 00 0A */	lbz r4, 0xa(r30)
/* 8007DD9C 0007ACDC  3C 60 80 51 */	lis r3, sTexCoordScaleTable__6J3DSys@ha
/* 8007DDA0 0007ACE0  38 03 F4 1C */	addi r0, r3, sTexCoordScaleTable__6J3DSys@l
/* 8007DDA4 0007ACE4  88 7E 00 09 */	lbz r3, 9(r30)
/* 8007DDA8 0007ACE8  54 84 1E B8 */	rlwinm r4, r4, 3, 0x1a, 0x1c
/* 8007DDAC 0007ACEC  38 C0 00 00 */	li r6, 0
/* 8007DDB0 0007ACF0  7C E0 22 14 */	add r7, r0, r4
/* 8007DDB4 0007ACF4  39 20 00 00 */	li r9, 0
/* 8007DDB8 0007ACF8  A0 87 00 04 */	lhz r4, 4(r7)
/* 8007DDBC 0007ACFC  A0 07 00 06 */	lhz r0, 6(r7)
/* 8007DDC0 0007AD00  20 A4 00 01 */	subfic r5, r4, 1
/* 8007DDC4 0007AD04  A0 87 00 00 */	lhz r4, 0(r7)
/* 8007DDC8 0007AD08  20 00 00 01 */	subfic r0, r0, 1
/* 8007DDCC 0007AD0C  A0 E7 00 02 */	lhz r7, 2(r7)
/* 8007DDD0 0007AD10  7C A5 00 34 */	cntlzw r5, r5
/* 8007DDD4 0007AD14  7C 00 00 34 */	cntlzw r0, r0
/* 8007DDD8 0007AD18  54 A5 DE 3E */	rlwinm r5, r5, 0x1b, 0x18, 0x1f
/* 8007DDDC 0007AD1C  54 08 DE 3E */	rlwinm r8, r0, 0x1b, 0x18, 0x1f
/* 8007DDE0 0007AD20  4B FF 78 45 */	bl J3DGDSetTexCoordScale2__F13_GXTexCoordIDUsUcUcUsUcUc
/* 8007DDE4 0007AD24  88 9E 00 0E */	lbz r4, 0xe(r30)
/* 8007DDE8 0007AD28  3C 60 80 51 */	lis r3, sTexCoordScaleTable__6J3DSys@ha
/* 8007DDEC 0007AD2C  38 03 F4 1C */	addi r0, r3, sTexCoordScaleTable__6J3DSys@l
/* 8007DDF0 0007AD30  88 7E 00 0D */	lbz r3, 0xd(r30)
/* 8007DDF4 0007AD34  54 84 1E B8 */	rlwinm r4, r4, 3, 0x1a, 0x1c
/* 8007DDF8 0007AD38  38 C0 00 00 */	li r6, 0
/* 8007DDFC 0007AD3C  7C E0 22 14 */	add r7, r0, r4
/* 8007DE00 0007AD40  39 20 00 00 */	li r9, 0
/* 8007DE04 0007AD44  A0 87 00 04 */	lhz r4, 4(r7)
/* 8007DE08 0007AD48  A0 07 00 06 */	lhz r0, 6(r7)
/* 8007DE0C 0007AD4C  20 A4 00 01 */	subfic r5, r4, 1
/* 8007DE10 0007AD50  A0 87 00 00 */	lhz r4, 0(r7)
/* 8007DE14 0007AD54  20 00 00 01 */	subfic r0, r0, 1
/* 8007DE18 0007AD58  A0 E7 00 02 */	lhz r7, 2(r7)
/* 8007DE1C 0007AD5C  7C A5 00 34 */	cntlzw r5, r5
/* 8007DE20 0007AD60  7C 00 00 34 */	cntlzw r0, r0
/* 8007DE24 0007AD64  54 A5 DE 3E */	rlwinm r5, r5, 0x1b, 0x18, 0x1f
/* 8007DE28 0007AD68  54 08 DE 3E */	rlwinm r8, r0, 0x1b, 0x18, 0x1f
/* 8007DE2C 0007AD6C  4B FF 77 F9 */	bl J3DGDSetTexCoordScale2__F13_GXTexCoordIDUsUcUcUsUcUc
/* 8007DE30 0007AD70  88 9E 00 12 */	lbz r4, 0x12(r30)
/* 8007DE34 0007AD74  3C 60 80 51 */	lis r3, sTexCoordScaleTable__6J3DSys@ha
/* 8007DE38 0007AD78  38 03 F4 1C */	addi r0, r3, sTexCoordScaleTable__6J3DSys@l
/* 8007DE3C 0007AD7C  88 7E 00 11 */	lbz r3, 0x11(r30)
/* 8007DE40 0007AD80  54 84 1E B8 */	rlwinm r4, r4, 3, 0x1a, 0x1c
/* 8007DE44 0007AD84  38 C0 00 00 */	li r6, 0
/* 8007DE48 0007AD88  7C E0 22 14 */	add r7, r0, r4
/* 8007DE4C 0007AD8C  39 20 00 00 */	li r9, 0
/* 8007DE50 0007AD90  A0 87 00 04 */	lhz r4, 4(r7)
/* 8007DE54 0007AD94  A0 07 00 06 */	lhz r0, 6(r7)
/* 8007DE58 0007AD98  20 A4 00 01 */	subfic r5, r4, 1
/* 8007DE5C 0007AD9C  A0 87 00 00 */	lhz r4, 0(r7)
/* 8007DE60 0007ADA0  20 00 00 01 */	subfic r0, r0, 1
/* 8007DE64 0007ADA4  A0 E7 00 02 */	lhz r7, 2(r7)
/* 8007DE68 0007ADA8  7C A5 00 34 */	cntlzw r5, r5
/* 8007DE6C 0007ADAC  7C 00 00 34 */	cntlzw r0, r0
/* 8007DE70 0007ADB0  54 A5 DE 3E */	rlwinm r5, r5, 0x1b, 0x18, 0x1f
/* 8007DE74 0007ADB4  54 08 DE 3E */	rlwinm r8, r0, 0x1b, 0x18, 0x1f
/* 8007DE78 0007ADB8  4B FF 77 AD */	bl J3DGDSetTexCoordScale2__F13_GXTexCoordIDUsUcUcUsUcUc
/* 8007DE7C 0007ADBC  88 1E 00 12 */	lbz r0, 0x12(r30)
/* 8007DE80 0007ADC0  7F E3 FB 78 */	mr r3, r31
/* 8007DE84 0007ADC4  90 01 00 08 */	stw r0, 8(r1)
/* 8007DE88 0007ADC8  88 9E 00 05 */	lbz r4, 5(r30)
/* 8007DE8C 0007ADCC  88 BE 00 06 */	lbz r5, 6(r30)
/* 8007DE90 0007ADD0  88 DE 00 09 */	lbz r6, 9(r30)
/* 8007DE94 0007ADD4  88 FE 00 0A */	lbz r7, 0xa(r30)
/* 8007DE98 0007ADD8  89 1E 00 0D */	lbz r8, 0xd(r30)
/* 8007DE9C 0007ADDC  89 3E 00 0E */	lbz r9, 0xe(r30)
/* 8007DEA0 0007ADE0  89 5E 00 11 */	lbz r10, 0x11(r30)
/* 8007DEA4 0007ADE4  4B FF 84 5D */	bl J3DGDSetIndTexOrder__FUl13_GXTexCoordID11_GXTexMapID13_GXTexCoordID11_GXTexMapID13_GXTexCoordID11_GXTexMapID13_GXTexCoordID11_GXTexMapID
/* 8007DEA8 0007ADE8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8007DEAC 0007ADEC  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8007DEB0 0007ADF0  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8007DEB4 0007ADF4  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8007DEB8 0007ADF8  83 81 00 10 */	lwz r28, 0x10(r1)
/* 8007DEBC 0007ADFC  7C 08 03 A6 */	mtlr r0
/* 8007DEC0 0007AE00  38 21 00 20 */	addi r1, r1, 0x20
/* 8007DEC4 0007AE04  4E 80 00 20 */	blr 
.endfn load__15J3DIndBlockFullFv

.fn diff__15J3DIndBlockFullFUl, global
/* 8007DEC8 0007AE08  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8007DECC 0007AE0C  7C 08 02 A6 */	mflr r0
/* 8007DED0 0007AE10  90 01 00 24 */	stw r0, 0x24(r1)
/* 8007DED4 0007AE14  54 80 01 09 */	rlwinm. r0, r4, 0, 4, 4
/* 8007DED8 0007AE18  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8007DEDC 0007AE1C  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8007DEE0 0007AE20  7C 7E 1B 78 */	mr r30, r3
/* 8007DEE4 0007AE24  41 82 00 A8 */	beq .L_8007DF8C
/* 8007DEE8 0007AE28  8B FE 00 04 */	lbz r31, 4(r30)
/* 8007DEEC 0007AE2C  38 9E 00 18 */	addi r4, r30, 0x18
/* 8007DEF0 0007AE30  88 BE 00 30 */	lbz r5, 0x30(r30)
/* 8007DEF4 0007AE34  38 60 00 01 */	li r3, 1
/* 8007DEF8 0007AE38  4B FF 80 41 */	bl J3DGDSetIndTexMtx__F14_GXIndTexMtxIDPA3_fSc
/* 8007DEFC 0007AE3C  88 9E 00 6C */	lbz r4, 0x6c(r30)
/* 8007DF00 0007AE40  38 60 00 00 */	li r3, 0
/* 8007DF04 0007AE44  88 BE 00 6D */	lbz r5, 0x6d(r30)
/* 8007DF08 0007AE48  88 DE 00 70 */	lbz r6, 0x70(r30)
/* 8007DF0C 0007AE4C  88 FE 00 71 */	lbz r7, 0x71(r30)
/* 8007DF10 0007AE50  4B FF 83 01 */	bl J3DGDSetIndTexCoordScale__F16_GXIndTexStageID14_GXIndTexScale14_GXIndTexScale14_GXIndTexScale14_GXIndTexScale
/* 8007DF14 0007AE54  88 9E 00 06 */	lbz r4, 6(r30)
/* 8007DF18 0007AE58  3C 60 80 51 */	lis r3, sTexCoordScaleTable__6J3DSys@ha
/* 8007DF1C 0007AE5C  38 03 F4 1C */	addi r0, r3, sTexCoordScaleTable__6J3DSys@l
/* 8007DF20 0007AE60  88 7E 00 05 */	lbz r3, 5(r30)
/* 8007DF24 0007AE64  54 84 1E B8 */	rlwinm r4, r4, 3, 0x1a, 0x1c
/* 8007DF28 0007AE68  38 C0 00 00 */	li r6, 0
/* 8007DF2C 0007AE6C  7C E0 22 14 */	add r7, r0, r4
/* 8007DF30 0007AE70  39 20 00 00 */	li r9, 0
/* 8007DF34 0007AE74  A0 87 00 04 */	lhz r4, 4(r7)
/* 8007DF38 0007AE78  A0 07 00 06 */	lhz r0, 6(r7)
/* 8007DF3C 0007AE7C  20 A4 00 01 */	subfic r5, r4, 1
/* 8007DF40 0007AE80  A0 87 00 00 */	lhz r4, 0(r7)
/* 8007DF44 0007AE84  20 00 00 01 */	subfic r0, r0, 1
/* 8007DF48 0007AE88  A0 E7 00 02 */	lhz r7, 2(r7)
/* 8007DF4C 0007AE8C  7C A5 00 34 */	cntlzw r5, r5
/* 8007DF50 0007AE90  7C 00 00 34 */	cntlzw r0, r0
/* 8007DF54 0007AE94  54 A5 DE 3E */	rlwinm r5, r5, 0x1b, 0x18, 0x1f
/* 8007DF58 0007AE98  54 08 DE 3E */	rlwinm r8, r0, 0x1b, 0x18, 0x1f
/* 8007DF5C 0007AE9C  4B FF 76 C9 */	bl J3DGDSetTexCoordScale2__F13_GXTexCoordIDUsUcUcUsUcUc
/* 8007DF60 0007AEA0  88 1E 00 12 */	lbz r0, 0x12(r30)
/* 8007DF64 0007AEA4  7F E3 FB 78 */	mr r3, r31
/* 8007DF68 0007AEA8  90 01 00 08 */	stw r0, 8(r1)
/* 8007DF6C 0007AEAC  88 9E 00 05 */	lbz r4, 5(r30)
/* 8007DF70 0007AEB0  88 BE 00 06 */	lbz r5, 6(r30)
/* 8007DF74 0007AEB4  88 DE 00 09 */	lbz r6, 9(r30)
/* 8007DF78 0007AEB8  88 FE 00 0A */	lbz r7, 0xa(r30)
/* 8007DF7C 0007AEBC  89 1E 00 0D */	lbz r8, 0xd(r30)
/* 8007DF80 0007AEC0  89 3E 00 0E */	lbz r9, 0xe(r30)
/* 8007DF84 0007AEC4  89 5E 00 11 */	lbz r10, 0x11(r30)
/* 8007DF88 0007AEC8  4B FF 83 79 */	bl J3DGDSetIndTexOrder__FUl13_GXTexCoordID11_GXTexMapID13_GXTexCoordID11_GXTexMapID13_GXTexCoordID11_GXTexMapID13_GXTexCoordID11_GXTexMapID
.L_8007DF8C:
/* 8007DF8C 0007AECC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8007DF90 0007AED0  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8007DF94 0007AED4  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8007DF98 0007AED8  7C 08 03 A6 */	mtlr r0
/* 8007DF9C 0007AEDC  38 21 00 20 */	addi r1, r1, 0x20
/* 8007DFA0 0007AEE0  4E 80 00 20 */	blr 
.endfn diff__15J3DIndBlockFullFUl

.fn load__13J3DPEBlockOpaFv, global
/* 8007DFA4 0007AEE4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8007DFA8 0007AEE8  7C 08 02 A6 */	mflr r0
/* 8007DFAC 0007AEEC  90 01 00 14 */	stw r0, 0x14(r1)
/* 8007DFB0 0007AEF0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8007DFB4 0007AEF4  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 8007DFB8 0007AEF8  80 64 00 08 */	lwz r3, 8(r4)
/* 8007DFBC 0007AEFC  80 04 00 0C */	lwz r0, 0xc(r4)
/* 8007DFC0 0007AF00  38 63 00 1E */	addi r3, r3, 0x1e
/* 8007DFC4 0007AF04  7C 03 00 40 */	cmplw r3, r0
/* 8007DFC8 0007AF08  40 81 00 08 */	ble .L_8007DFD0
/* 8007DFCC 0007AF0C  48 06 3C 75 */	bl GDOverflowed
.L_8007DFD0:
/* 8007DFD0 0007AF10  80 ED 8E A8 */	lwz r7, __GDCurrentDL@sda21(r13)
/* 8007DFD4 0007AF14  38 A0 00 61 */	li r5, 0x61
/* 8007DFD8 0007AF18  3B E0 00 F3 */	li r31, 0xf3
/* 8007DFDC 0007AF1C  39 80 00 3F */	li r12, 0x3f
/* 8007DFE0 0007AF20  80 C7 00 08 */	lwz r6, 8(r7)
/* 8007DFE4 0007AF24  38 80 00 00 */	li r4, 0
/* 8007DFE8 0007AF28  38 60 00 FE */	li r3, 0xfe
/* 8007DFEC 0007AF2C  39 60 00 1F */	li r11, 0x1f
/* 8007DFF0 0007AF30  38 06 00 01 */	addi r0, r6, 1
/* 8007DFF4 0007AF34  39 40 00 E3 */	li r10, 0xe3
/* 8007DFF8 0007AF38  90 07 00 08 */	stw r0, 8(r7)
/* 8007DFFC 0007AF3C  39 20 00 41 */	li r9, 0x41
/* 8007E000 0007AF40  39 00 00 31 */	li r8, 0x31
/* 8007E004 0007AF44  98 A6 00 00 */	stb r5, 0(r6)
/* 8007E008 0007AF48  80 ED 8E A8 */	lwz r7, __GDCurrentDL@sda21(r13)
/* 8007E00C 0007AF4C  80 C7 00 08 */	lwz r6, 8(r7)
/* 8007E010 0007AF50  38 06 00 01 */	addi r0, r6, 1
/* 8007E014 0007AF54  90 07 00 08 */	stw r0, 8(r7)
/* 8007E018 0007AF58  9B E6 00 00 */	stb r31, 0(r6)
/* 8007E01C 0007AF5C  80 ED 8E A8 */	lwz r7, __GDCurrentDL@sda21(r13)
/* 8007E020 0007AF60  80 C7 00 08 */	lwz r6, 8(r7)
/* 8007E024 0007AF64  38 06 00 01 */	addi r0, r6, 1
/* 8007E028 0007AF68  90 07 00 08 */	stw r0, 8(r7)
/* 8007E02C 0007AF6C  99 86 00 00 */	stb r12, 0(r6)
/* 8007E030 0007AF70  80 ED 8E A8 */	lwz r7, __GDCurrentDL@sda21(r13)
/* 8007E034 0007AF74  80 C7 00 08 */	lwz r6, 8(r7)
/* 8007E038 0007AF78  38 06 00 01 */	addi r0, r6, 1
/* 8007E03C 0007AF7C  90 07 00 08 */	stw r0, 8(r7)
/* 8007E040 0007AF80  98 86 00 00 */	stb r4, 0(r6)
/* 8007E044 0007AF84  80 ED 8E A8 */	lwz r7, __GDCurrentDL@sda21(r13)
/* 8007E048 0007AF88  80 C7 00 08 */	lwz r6, 8(r7)
/* 8007E04C 0007AF8C  38 06 00 01 */	addi r0, r6, 1
/* 8007E050 0007AF90  90 07 00 08 */	stw r0, 8(r7)
/* 8007E054 0007AF94  98 86 00 00 */	stb r4, 0(r6)
/* 8007E058 0007AF98  80 ED 8E A8 */	lwz r7, __GDCurrentDL@sda21(r13)
/* 8007E05C 0007AF9C  80 C7 00 08 */	lwz r6, 8(r7)
/* 8007E060 0007AFA0  38 06 00 01 */	addi r0, r6, 1
/* 8007E064 0007AFA4  90 07 00 08 */	stw r0, 8(r7)
/* 8007E068 0007AFA8  98 A6 00 00 */	stb r5, 0(r6)
/* 8007E06C 0007AFAC  80 ED 8E A8 */	lwz r7, __GDCurrentDL@sda21(r13)
/* 8007E070 0007AFB0  80 C7 00 08 */	lwz r6, 8(r7)
/* 8007E074 0007AFB4  38 06 00 01 */	addi r0, r6, 1
/* 8007E078 0007AFB8  90 07 00 08 */	stw r0, 8(r7)
/* 8007E07C 0007AFBC  98 66 00 00 */	stb r3, 0(r6)
/* 8007E080 0007AFC0  80 ED 8E A8 */	lwz r7, __GDCurrentDL@sda21(r13)
/* 8007E084 0007AFC4  80 C7 00 08 */	lwz r6, 8(r7)
/* 8007E088 0007AFC8  38 06 00 01 */	addi r0, r6, 1
/* 8007E08C 0007AFCC  90 07 00 08 */	stw r0, 8(r7)
/* 8007E090 0007AFD0  98 86 00 00 */	stb r4, 0(r6)
/* 8007E094 0007AFD4  80 ED 8E A8 */	lwz r7, __GDCurrentDL@sda21(r13)
/* 8007E098 0007AFD8  80 C7 00 08 */	lwz r6, 8(r7)
/* 8007E09C 0007AFDC  38 06 00 01 */	addi r0, r6, 1
/* 8007E0A0 0007AFE0  90 07 00 08 */	stw r0, 8(r7)
/* 8007E0A4 0007AFE4  99 66 00 00 */	stb r11, 0(r6)
/* 8007E0A8 0007AFE8  80 ED 8E A8 */	lwz r7, __GDCurrentDL@sda21(r13)
/* 8007E0AC 0007AFEC  80 C7 00 08 */	lwz r6, 8(r7)
/* 8007E0B0 0007AFF0  38 06 00 01 */	addi r0, r6, 1
/* 8007E0B4 0007AFF4  90 07 00 08 */	stw r0, 8(r7)
/* 8007E0B8 0007AFF8  99 46 00 00 */	stb r10, 0(r6)
/* 8007E0BC 0007AFFC  80 ED 8E A8 */	lwz r7, __GDCurrentDL@sda21(r13)
/* 8007E0C0 0007B000  80 C7 00 08 */	lwz r6, 8(r7)
/* 8007E0C4 0007B004  38 06 00 01 */	addi r0, r6, 1
/* 8007E0C8 0007B008  90 07 00 08 */	stw r0, 8(r7)
/* 8007E0CC 0007B00C  98 A6 00 00 */	stb r5, 0(r6)
/* 8007E0D0 0007B010  80 ED 8E A8 */	lwz r7, __GDCurrentDL@sda21(r13)
/* 8007E0D4 0007B014  80 C7 00 08 */	lwz r6, 8(r7)
/* 8007E0D8 0007B018  38 06 00 01 */	addi r0, r6, 1
/* 8007E0DC 0007B01C  90 07 00 08 */	stw r0, 8(r7)
/* 8007E0E0 0007B020  99 26 00 00 */	stb r9, 0(r6)
/* 8007E0E4 0007B024  80 ED 8E A8 */	lwz r7, __GDCurrentDL@sda21(r13)
/* 8007E0E8 0007B028  80 C7 00 08 */	lwz r6, 8(r7)
/* 8007E0EC 0007B02C  38 06 00 01 */	addi r0, r6, 1
/* 8007E0F0 0007B030  90 07 00 08 */	stw r0, 8(r7)
/* 8007E0F4 0007B034  98 86 00 00 */	stb r4, 0(r6)
/* 8007E0F8 0007B038  80 ED 8E A8 */	lwz r7, __GDCurrentDL@sda21(r13)
/* 8007E0FC 0007B03C  80 C7 00 08 */	lwz r6, 8(r7)
/* 8007E100 0007B040  38 06 00 01 */	addi r0, r6, 1
/* 8007E104 0007B044  90 07 00 08 */	stw r0, 8(r7)
/* 8007E108 0007B048  99 06 00 00 */	stb r8, 0(r6)
/* 8007E10C 0007B04C  80 ED 8E A8 */	lwz r7, __GDCurrentDL@sda21(r13)
/* 8007E110 0007B050  80 C7 00 08 */	lwz r6, 8(r7)
/* 8007E114 0007B054  38 06 00 01 */	addi r0, r6, 1
/* 8007E118 0007B058  90 07 00 08 */	stw r0, 8(r7)
/* 8007E11C 0007B05C  98 86 00 00 */	stb r4, 0(r6)
/* 8007E120 0007B060  81 2D 8E A8 */	lwz r9, __GDCurrentDL@sda21(r13)
/* 8007E124 0007B064  38 00 00 40 */	li r0, 0x40
/* 8007E128 0007B068  39 40 00 17 */	li r10, 0x17
/* 8007E12C 0007B06C  38 E0 00 43 */	li r7, 0x43
/* 8007E130 0007B070  81 09 00 08 */	lwz r8, 8(r9)
/* 8007E134 0007B074  38 C8 00 01 */	addi r6, r8, 1
/* 8007E138 0007B078  90 C9 00 08 */	stw r6, 8(r9)
/* 8007E13C 0007B07C  98 A8 00 00 */	stb r5, 0(r8)
/* 8007E140 0007B080  81 2D 8E A8 */	lwz r9, __GDCurrentDL@sda21(r13)
/* 8007E144 0007B084  81 09 00 08 */	lwz r8, 8(r9)
/* 8007E148 0007B088  38 C8 00 01 */	addi r6, r8, 1
/* 8007E14C 0007B08C  90 C9 00 08 */	stw r6, 8(r9)
/* 8007E150 0007B090  98 08 00 00 */	stb r0, 0(r8)
/* 8007E154 0007B094  81 2D 8E A8 */	lwz r9, __GDCurrentDL@sda21(r13)
/* 8007E158 0007B098  81 09 00 08 */	lwz r8, 8(r9)
/* 8007E15C 0007B09C  38 C8 00 01 */	addi r6, r8, 1
/* 8007E160 0007B0A0  90 C9 00 08 */	stw r6, 8(r9)
/* 8007E164 0007B0A4  98 88 00 00 */	stb r4, 0(r8)
/* 8007E168 0007B0A8  81 2D 8E A8 */	lwz r9, __GDCurrentDL@sda21(r13)
/* 8007E16C 0007B0AC  81 09 00 08 */	lwz r8, 8(r9)
/* 8007E170 0007B0B0  38 C8 00 01 */	addi r6, r8, 1
/* 8007E174 0007B0B4  90 C9 00 08 */	stw r6, 8(r9)
/* 8007E178 0007B0B8  98 88 00 00 */	stb r4, 0(r8)
/* 8007E17C 0007B0BC  81 2D 8E A8 */	lwz r9, __GDCurrentDL@sda21(r13)
/* 8007E180 0007B0C0  81 09 00 08 */	lwz r8, 8(r9)
/* 8007E184 0007B0C4  38 C8 00 01 */	addi r6, r8, 1
/* 8007E188 0007B0C8  90 C9 00 08 */	stw r6, 8(r9)
/* 8007E18C 0007B0CC  99 48 00 00 */	stb r10, 0(r8)
/* 8007E190 0007B0D0  81 2D 8E A8 */	lwz r9, __GDCurrentDL@sda21(r13)
/* 8007E194 0007B0D4  81 09 00 08 */	lwz r8, 8(r9)
/* 8007E198 0007B0D8  38 C8 00 01 */	addi r6, r8, 1
/* 8007E19C 0007B0DC  90 C9 00 08 */	stw r6, 8(r9)
/* 8007E1A0 0007B0E0  98 A8 00 00 */	stb r5, 0(r8)
/* 8007E1A4 0007B0E4  81 2D 8E A8 */	lwz r9, __GDCurrentDL@sda21(r13)
/* 8007E1A8 0007B0E8  81 09 00 08 */	lwz r8, 8(r9)
/* 8007E1AC 0007B0EC  38 C8 00 01 */	addi r6, r8, 1
/* 8007E1B0 0007B0F0  90 C9 00 08 */	stw r6, 8(r9)
/* 8007E1B4 0007B0F4  98 68 00 00 */	stb r3, 0(r8)
/* 8007E1B8 0007B0F8  81 0D 8E A8 */	lwz r8, __GDCurrentDL@sda21(r13)
/* 8007E1BC 0007B0FC  80 C8 00 08 */	lwz r6, 8(r8)
/* 8007E1C0 0007B100  38 66 00 01 */	addi r3, r6, 1
/* 8007E1C4 0007B104  90 68 00 08 */	stw r3, 8(r8)
/* 8007E1C8 0007B108  98 86 00 00 */	stb r4, 0(r6)
/* 8007E1CC 0007B10C  81 0D 8E A8 */	lwz r8, __GDCurrentDL@sda21(r13)
/* 8007E1D0 0007B110  80 C8 00 08 */	lwz r6, 8(r8)
/* 8007E1D4 0007B114  38 66 00 01 */	addi r3, r6, 1
/* 8007E1D8 0007B118  90 68 00 08 */	stw r3, 8(r8)
/* 8007E1DC 0007B11C  98 86 00 00 */	stb r4, 0(r6)
/* 8007E1E0 0007B120  81 0D 8E A8 */	lwz r8, __GDCurrentDL@sda21(r13)
/* 8007E1E4 0007B124  80 C8 00 08 */	lwz r6, 8(r8)
/* 8007E1E8 0007B128  38 66 00 01 */	addi r3, r6, 1
/* 8007E1EC 0007B12C  90 68 00 08 */	stw r3, 8(r8)
/* 8007E1F0 0007B130  98 06 00 00 */	stb r0, 0(r6)
/* 8007E1F4 0007B134  81 0D 8E A8 */	lwz r8, __GDCurrentDL@sda21(r13)
/* 8007E1F8 0007B138  80 C8 00 08 */	lwz r6, 8(r8)
/* 8007E1FC 0007B13C  38 66 00 01 */	addi r3, r6, 1
/* 8007E200 0007B140  90 68 00 08 */	stw r3, 8(r8)
/* 8007E204 0007B144  98 A6 00 00 */	stb r5, 0(r6)
/* 8007E208 0007B148  80 CD 8E A8 */	lwz r6, __GDCurrentDL@sda21(r13)
/* 8007E20C 0007B14C  80 A6 00 08 */	lwz r5, 8(r6)
/* 8007E210 0007B150  38 65 00 01 */	addi r3, r5, 1
/* 8007E214 0007B154  90 66 00 08 */	stw r3, 8(r6)
/* 8007E218 0007B158  98 E5 00 00 */	stb r7, 0(r5)
/* 8007E21C 0007B15C  80 CD 8E A8 */	lwz r6, __GDCurrentDL@sda21(r13)
/* 8007E220 0007B160  80 A6 00 08 */	lwz r5, 8(r6)
/* 8007E224 0007B164  38 65 00 01 */	addi r3, r5, 1
/* 8007E228 0007B168  90 66 00 08 */	stw r3, 8(r6)
/* 8007E22C 0007B16C  98 85 00 00 */	stb r4, 0(r5)
/* 8007E230 0007B170  80 CD 8E A8 */	lwz r6, __GDCurrentDL@sda21(r13)
/* 8007E234 0007B174  80 A6 00 08 */	lwz r5, 8(r6)
/* 8007E238 0007B178  38 65 00 01 */	addi r3, r5, 1
/* 8007E23C 0007B17C  90 66 00 08 */	stw r3, 8(r6)
/* 8007E240 0007B180  98 85 00 00 */	stb r4, 0(r5)
/* 8007E244 0007B184  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 8007E248 0007B188  80 85 00 08 */	lwz r4, 8(r5)
/* 8007E24C 0007B18C  38 64 00 01 */	addi r3, r4, 1
/* 8007E250 0007B190  90 65 00 08 */	stw r3, 8(r5)
/* 8007E254 0007B194  98 04 00 00 */	stb r0, 0(r4)
/* 8007E258 0007B198  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8007E25C 0007B19C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8007E260 0007B1A0  7C 08 03 A6 */	mtlr r0
/* 8007E264 0007B1A4  38 21 00 10 */	addi r1, r1, 0x10
/* 8007E268 0007B1A8  4E 80 00 20 */	blr 
.endfn load__13J3DPEBlockOpaFv

.fn load__17J3DPEBlockTexEdgeFv, global
/* 8007E26C 0007B1AC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8007E270 0007B1B0  7C 08 02 A6 */	mflr r0
/* 8007E274 0007B1B4  90 01 00 24 */	stw r0, 0x24(r1)
/* 8007E278 0007B1B8  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8007E27C 0007B1BC  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8007E280 0007B1C0  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8007E284 0007B1C4  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 8007E288 0007B1C8  80 64 00 08 */	lwz r3, 8(r4)
/* 8007E28C 0007B1CC  80 04 00 0C */	lwz r0, 0xc(r4)
/* 8007E290 0007B1D0  38 63 00 1E */	addi r3, r3, 0x1e
/* 8007E294 0007B1D4  7C 03 00 40 */	cmplw r3, r0
/* 8007E298 0007B1D8  40 81 00 08 */	ble .L_8007E2A0
/* 8007E29C 0007B1DC  48 06 39 A5 */	bl GDOverflowed
.L_8007E2A0:
/* 8007E2A0 0007B1E0  80 ED 8E A8 */	lwz r7, __GDCurrentDL@sda21(r13)
/* 8007E2A4 0007B1E4  38 A0 00 61 */	li r5, 0x61
/* 8007E2A8 0007B1E8  3B A0 00 F3 */	li r29, 0xf3
/* 8007E2AC 0007B1EC  3B C0 00 1E */	li r30, 0x1e
/* 8007E2B0 0007B1F0  80 C7 00 08 */	lwz r6, 8(r7)
/* 8007E2B4 0007B1F4  3B E0 00 FF */	li r31, 0xff
/* 8007E2B8 0007B1F8  39 80 00 80 */	li r12, 0x80
/* 8007E2BC 0007B1FC  38 80 00 FE */	li r4, 0xfe
/* 8007E2C0 0007B200  38 06 00 01 */	addi r0, r6, 1
/* 8007E2C4 0007B204  38 60 00 00 */	li r3, 0
/* 8007E2C8 0007B208  90 07 00 08 */	stw r0, 8(r7)
/* 8007E2CC 0007B20C  39 60 00 1F */	li r11, 0x1f
/* 8007E2D0 0007B210  39 40 00 E3 */	li r10, 0xe3
/* 8007E2D4 0007B214  39 20 00 41 */	li r9, 0x41
/* 8007E2D8 0007B218  98 A6 00 00 */	stb r5, 0(r6)
/* 8007E2DC 0007B21C  39 00 00 31 */	li r8, 0x31
/* 8007E2E0 0007B220  80 ED 8E A8 */	lwz r7, __GDCurrentDL@sda21(r13)
/* 8007E2E4 0007B224  80 C7 00 08 */	lwz r6, 8(r7)
/* 8007E2E8 0007B228  38 06 00 01 */	addi r0, r6, 1
/* 8007E2EC 0007B22C  90 07 00 08 */	stw r0, 8(r7)
/* 8007E2F0 0007B230  9B A6 00 00 */	stb r29, 0(r6)
/* 8007E2F4 0007B234  80 ED 8E A8 */	lwz r7, __GDCurrentDL@sda21(r13)
/* 8007E2F8 0007B238  80 C7 00 08 */	lwz r6, 8(r7)
/* 8007E2FC 0007B23C  38 06 00 01 */	addi r0, r6, 1
/* 8007E300 0007B240  90 07 00 08 */	stw r0, 8(r7)
/* 8007E304 0007B244  9B C6 00 00 */	stb r30, 0(r6)
/* 8007E308 0007B248  80 ED 8E A8 */	lwz r7, __GDCurrentDL@sda21(r13)
/* 8007E30C 0007B24C  80 C7 00 08 */	lwz r6, 8(r7)
/* 8007E310 0007B250  38 06 00 01 */	addi r0, r6, 1
/* 8007E314 0007B254  90 07 00 08 */	stw r0, 8(r7)
/* 8007E318 0007B258  9B E6 00 00 */	stb r31, 0(r6)
/* 8007E31C 0007B25C  80 ED 8E A8 */	lwz r7, __GDCurrentDL@sda21(r13)
/* 8007E320 0007B260  80 C7 00 08 */	lwz r6, 8(r7)
/* 8007E324 0007B264  38 06 00 01 */	addi r0, r6, 1
/* 8007E328 0007B268  90 07 00 08 */	stw r0, 8(r7)
/* 8007E32C 0007B26C  99 86 00 00 */	stb r12, 0(r6)
/* 8007E330 0007B270  80 ED 8E A8 */	lwz r7, __GDCurrentDL@sda21(r13)
/* 8007E334 0007B274  80 C7 00 08 */	lwz r6, 8(r7)
/* 8007E338 0007B278  38 06 00 01 */	addi r0, r6, 1
/* 8007E33C 0007B27C  90 07 00 08 */	stw r0, 8(r7)
/* 8007E340 0007B280  98 A6 00 00 */	stb r5, 0(r6)
/* 8007E344 0007B284  80 ED 8E A8 */	lwz r7, __GDCurrentDL@sda21(r13)
/* 8007E348 0007B288  80 C7 00 08 */	lwz r6, 8(r7)
/* 8007E34C 0007B28C  38 06 00 01 */	addi r0, r6, 1
/* 8007E350 0007B290  90 07 00 08 */	stw r0, 8(r7)
/* 8007E354 0007B294  98 86 00 00 */	stb r4, 0(r6)
/* 8007E358 0007B298  80 ED 8E A8 */	lwz r7, __GDCurrentDL@sda21(r13)
/* 8007E35C 0007B29C  80 C7 00 08 */	lwz r6, 8(r7)
/* 8007E360 0007B2A0  38 06 00 01 */	addi r0, r6, 1
/* 8007E364 0007B2A4  90 07 00 08 */	stw r0, 8(r7)
/* 8007E368 0007B2A8  98 66 00 00 */	stb r3, 0(r6)
/* 8007E36C 0007B2AC  80 ED 8E A8 */	lwz r7, __GDCurrentDL@sda21(r13)
/* 8007E370 0007B2B0  80 C7 00 08 */	lwz r6, 8(r7)
/* 8007E374 0007B2B4  38 06 00 01 */	addi r0, r6, 1
/* 8007E378 0007B2B8  90 07 00 08 */	stw r0, 8(r7)
/* 8007E37C 0007B2BC  99 66 00 00 */	stb r11, 0(r6)
/* 8007E380 0007B2C0  80 ED 8E A8 */	lwz r7, __GDCurrentDL@sda21(r13)
/* 8007E384 0007B2C4  80 C7 00 08 */	lwz r6, 8(r7)
/* 8007E388 0007B2C8  38 06 00 01 */	addi r0, r6, 1
/* 8007E38C 0007B2CC  90 07 00 08 */	stw r0, 8(r7)
/* 8007E390 0007B2D0  99 46 00 00 */	stb r10, 0(r6)
/* 8007E394 0007B2D4  80 ED 8E A8 */	lwz r7, __GDCurrentDL@sda21(r13)
/* 8007E398 0007B2D8  80 C7 00 08 */	lwz r6, 8(r7)
/* 8007E39C 0007B2DC  38 06 00 01 */	addi r0, r6, 1
/* 8007E3A0 0007B2E0  90 07 00 08 */	stw r0, 8(r7)
/* 8007E3A4 0007B2E4  98 A6 00 00 */	stb r5, 0(r6)
/* 8007E3A8 0007B2E8  80 ED 8E A8 */	lwz r7, __GDCurrentDL@sda21(r13)
/* 8007E3AC 0007B2EC  80 C7 00 08 */	lwz r6, 8(r7)
/* 8007E3B0 0007B2F0  38 06 00 01 */	addi r0, r6, 1
/* 8007E3B4 0007B2F4  90 07 00 08 */	stw r0, 8(r7)
/* 8007E3B8 0007B2F8  99 26 00 00 */	stb r9, 0(r6)
/* 8007E3BC 0007B2FC  80 ED 8E A8 */	lwz r7, __GDCurrentDL@sda21(r13)
/* 8007E3C0 0007B300  80 C7 00 08 */	lwz r6, 8(r7)
/* 8007E3C4 0007B304  38 06 00 01 */	addi r0, r6, 1
/* 8007E3C8 0007B308  90 07 00 08 */	stw r0, 8(r7)
/* 8007E3CC 0007B30C  98 66 00 00 */	stb r3, 0(r6)
/* 8007E3D0 0007B310  80 ED 8E A8 */	lwz r7, __GDCurrentDL@sda21(r13)
/* 8007E3D4 0007B314  80 C7 00 08 */	lwz r6, 8(r7)
/* 8007E3D8 0007B318  38 06 00 01 */	addi r0, r6, 1
/* 8007E3DC 0007B31C  90 07 00 08 */	stw r0, 8(r7)
/* 8007E3E0 0007B320  99 06 00 00 */	stb r8, 0(r6)
/* 8007E3E4 0007B324  80 ED 8E A8 */	lwz r7, __GDCurrentDL@sda21(r13)
/* 8007E3E8 0007B328  80 C7 00 08 */	lwz r6, 8(r7)
/* 8007E3EC 0007B32C  38 06 00 01 */	addi r0, r6, 1
/* 8007E3F0 0007B330  90 07 00 08 */	stw r0, 8(r7)
/* 8007E3F4 0007B334  98 66 00 00 */	stb r3, 0(r6)
/* 8007E3F8 0007B338  81 2D 8E A8 */	lwz r9, __GDCurrentDL@sda21(r13)
/* 8007E3FC 0007B33C  38 00 00 40 */	li r0, 0x40
/* 8007E400 0007B340  39 40 00 17 */	li r10, 0x17
/* 8007E404 0007B344  38 C0 00 43 */	li r6, 0x43
/* 8007E408 0007B348  81 09 00 08 */	lwz r8, 8(r9)
/* 8007E40C 0007B34C  38 E8 00 01 */	addi r7, r8, 1
/* 8007E410 0007B350  90 E9 00 08 */	stw r7, 8(r9)
/* 8007E414 0007B354  98 A8 00 00 */	stb r5, 0(r8)
/* 8007E418 0007B358  81 2D 8E A8 */	lwz r9, __GDCurrentDL@sda21(r13)
/* 8007E41C 0007B35C  81 09 00 08 */	lwz r8, 8(r9)
/* 8007E420 0007B360  38 E8 00 01 */	addi r7, r8, 1
/* 8007E424 0007B364  90 E9 00 08 */	stw r7, 8(r9)
/* 8007E428 0007B368  98 08 00 00 */	stb r0, 0(r8)
/* 8007E42C 0007B36C  81 2D 8E A8 */	lwz r9, __GDCurrentDL@sda21(r13)
/* 8007E430 0007B370  81 09 00 08 */	lwz r8, 8(r9)
/* 8007E434 0007B374  38 E8 00 01 */	addi r7, r8, 1
/* 8007E438 0007B378  90 E9 00 08 */	stw r7, 8(r9)
/* 8007E43C 0007B37C  98 68 00 00 */	stb r3, 0(r8)
/* 8007E440 0007B380  81 2D 8E A8 */	lwz r9, __GDCurrentDL@sda21(r13)
/* 8007E444 0007B384  81 09 00 08 */	lwz r8, 8(r9)
/* 8007E448 0007B388  38 E8 00 01 */	addi r7, r8, 1
/* 8007E44C 0007B38C  90 E9 00 08 */	stw r7, 8(r9)
/* 8007E450 0007B390  98 68 00 00 */	stb r3, 0(r8)
/* 8007E454 0007B394  81 2D 8E A8 */	lwz r9, __GDCurrentDL@sda21(r13)
/* 8007E458 0007B398  81 09 00 08 */	lwz r8, 8(r9)
/* 8007E45C 0007B39C  38 E8 00 01 */	addi r7, r8, 1
/* 8007E460 0007B3A0  90 E9 00 08 */	stw r7, 8(r9)
/* 8007E464 0007B3A4  99 48 00 00 */	stb r10, 0(r8)
/* 8007E468 0007B3A8  81 2D 8E A8 */	lwz r9, __GDCurrentDL@sda21(r13)
/* 8007E46C 0007B3AC  81 09 00 08 */	lwz r8, 8(r9)
/* 8007E470 0007B3B0  38 E8 00 01 */	addi r7, r8, 1
/* 8007E474 0007B3B4  90 E9 00 08 */	stw r7, 8(r9)
/* 8007E478 0007B3B8  98 A8 00 00 */	stb r5, 0(r8)
/* 8007E47C 0007B3BC  81 2D 8E A8 */	lwz r9, __GDCurrentDL@sda21(r13)
/* 8007E480 0007B3C0  81 09 00 08 */	lwz r8, 8(r9)
/* 8007E484 0007B3C4  38 E8 00 01 */	addi r7, r8, 1
/* 8007E488 0007B3C8  90 E9 00 08 */	stw r7, 8(r9)
/* 8007E48C 0007B3CC  98 88 00 00 */	stb r4, 0(r8)
/* 8007E490 0007B3D0  81 0D 8E A8 */	lwz r8, __GDCurrentDL@sda21(r13)
/* 8007E494 0007B3D4  80 E8 00 08 */	lwz r7, 8(r8)
/* 8007E498 0007B3D8  38 87 00 01 */	addi r4, r7, 1
/* 8007E49C 0007B3DC  90 88 00 08 */	stw r4, 8(r8)
/* 8007E4A0 0007B3E0  98 67 00 00 */	stb r3, 0(r7)
/* 8007E4A4 0007B3E4  81 0D 8E A8 */	lwz r8, __GDCurrentDL@sda21(r13)
/* 8007E4A8 0007B3E8  80 E8 00 08 */	lwz r7, 8(r8)
/* 8007E4AC 0007B3EC  38 87 00 01 */	addi r4, r7, 1
/* 8007E4B0 0007B3F0  90 88 00 08 */	stw r4, 8(r8)
/* 8007E4B4 0007B3F4  98 67 00 00 */	stb r3, 0(r7)
/* 8007E4B8 0007B3F8  81 0D 8E A8 */	lwz r8, __GDCurrentDL@sda21(r13)
/* 8007E4BC 0007B3FC  80 E8 00 08 */	lwz r7, 8(r8)
/* 8007E4C0 0007B400  38 87 00 01 */	addi r4, r7, 1
/* 8007E4C4 0007B404  90 88 00 08 */	stw r4, 8(r8)
/* 8007E4C8 0007B408  98 07 00 00 */	stb r0, 0(r7)
/* 8007E4CC 0007B40C  80 ED 8E A8 */	lwz r7, __GDCurrentDL@sda21(r13)
/* 8007E4D0 0007B410  80 87 00 08 */	lwz r4, 8(r7)
/* 8007E4D4 0007B414  38 04 00 01 */	addi r0, r4, 1
/* 8007E4D8 0007B418  90 07 00 08 */	stw r0, 8(r7)
/* 8007E4DC 0007B41C  98 A4 00 00 */	stb r5, 0(r4)
/* 8007E4E0 0007B420  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 8007E4E4 0007B424  80 85 00 08 */	lwz r4, 8(r5)
/* 8007E4E8 0007B428  38 04 00 01 */	addi r0, r4, 1
/* 8007E4EC 0007B42C  90 05 00 08 */	stw r0, 8(r5)
/* 8007E4F0 0007B430  98 C4 00 00 */	stb r6, 0(r4)
/* 8007E4F4 0007B434  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 8007E4F8 0007B438  80 85 00 08 */	lwz r4, 8(r5)
/* 8007E4FC 0007B43C  38 04 00 01 */	addi r0, r4, 1
/* 8007E500 0007B440  90 05 00 08 */	stw r0, 8(r5)
/* 8007E504 0007B444  98 64 00 00 */	stb r3, 0(r4)
/* 8007E508 0007B448  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 8007E50C 0007B44C  80 85 00 08 */	lwz r4, 8(r5)
/* 8007E510 0007B450  38 04 00 01 */	addi r0, r4, 1
/* 8007E514 0007B454  90 05 00 08 */	stw r0, 8(r5)
/* 8007E518 0007B458  98 64 00 00 */	stb r3, 0(r4)
/* 8007E51C 0007B45C  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 8007E520 0007B460  80 85 00 08 */	lwz r4, 8(r5)
/* 8007E524 0007B464  38 04 00 01 */	addi r0, r4, 1
/* 8007E528 0007B468  90 05 00 08 */	stw r0, 8(r5)
/* 8007E52C 0007B46C  98 64 00 00 */	stb r3, 0(r4)
/* 8007E530 0007B470  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8007E534 0007B474  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8007E538 0007B478  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8007E53C 0007B47C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8007E540 0007B480  7C 08 03 A6 */	mtlr r0
/* 8007E544 0007B484  38 21 00 20 */	addi r1, r1, 0x20
/* 8007E548 0007B488  4E 80 00 20 */	blr 
.endfn load__17J3DPEBlockTexEdgeFv

.fn load__13J3DPEBlockXluFv, global
/* 8007E54C 0007B48C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8007E550 0007B490  7C 08 02 A6 */	mflr r0
/* 8007E554 0007B494  90 01 00 14 */	stw r0, 0x14(r1)
/* 8007E558 0007B498  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8007E55C 0007B49C  93 C1 00 08 */	stw r30, 8(r1)
/* 8007E560 0007B4A0  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 8007E564 0007B4A4  80 64 00 08 */	lwz r3, 8(r4)
/* 8007E568 0007B4A8  80 04 00 0C */	lwz r0, 0xc(r4)
/* 8007E56C 0007B4AC  38 63 00 1E */	addi r3, r3, 0x1e
/* 8007E570 0007B4B0  7C 03 00 40 */	cmplw r3, r0
/* 8007E574 0007B4B4  40 81 00 08 */	ble .L_8007E57C
/* 8007E578 0007B4B8  48 06 36 C9 */	bl GDOverflowed
.L_8007E57C:
/* 8007E57C 0007B4BC  80 ED 8E A8 */	lwz r7, __GDCurrentDL@sda21(r13)
/* 8007E580 0007B4C0  38 A0 00 61 */	li r5, 0x61
/* 8007E584 0007B4C4  3B C0 00 F3 */	li r30, 0xf3
/* 8007E588 0007B4C8  3B E0 00 3F */	li r31, 0x3f
/* 8007E58C 0007B4CC  80 C7 00 08 */	lwz r6, 8(r7)
/* 8007E590 0007B4D0  38 80 00 00 */	li r4, 0
/* 8007E594 0007B4D4  38 60 00 FE */	li r3, 0xfe
/* 8007E598 0007B4D8  39 80 00 1F */	li r12, 0x1f
/* 8007E59C 0007B4DC  38 06 00 01 */	addi r0, r6, 1
/* 8007E5A0 0007B4E0  39 60 00 E3 */	li r11, 0xe3
/* 8007E5A4 0007B4E4  90 07 00 08 */	stw r0, 8(r7)
/* 8007E5A8 0007B4E8  39 40 00 41 */	li r10, 0x41
/* 8007E5AC 0007B4EC  39 20 00 34 */	li r9, 0x34
/* 8007E5B0 0007B4F0  39 00 00 A1 */	li r8, 0xa1
/* 8007E5B4 0007B4F4  98 A6 00 00 */	stb r5, 0(r6)
/* 8007E5B8 0007B4F8  80 ED 8E A8 */	lwz r7, __GDCurrentDL@sda21(r13)
/* 8007E5BC 0007B4FC  80 C7 00 08 */	lwz r6, 8(r7)
/* 8007E5C0 0007B500  38 06 00 01 */	addi r0, r6, 1
/* 8007E5C4 0007B504  90 07 00 08 */	stw r0, 8(r7)
/* 8007E5C8 0007B508  9B C6 00 00 */	stb r30, 0(r6)
/* 8007E5CC 0007B50C  80 ED 8E A8 */	lwz r7, __GDCurrentDL@sda21(r13)
/* 8007E5D0 0007B510  80 C7 00 08 */	lwz r6, 8(r7)
/* 8007E5D4 0007B514  38 06 00 01 */	addi r0, r6, 1
/* 8007E5D8 0007B518  90 07 00 08 */	stw r0, 8(r7)
/* 8007E5DC 0007B51C  9B E6 00 00 */	stb r31, 0(r6)
/* 8007E5E0 0007B520  80 ED 8E A8 */	lwz r7, __GDCurrentDL@sda21(r13)
/* 8007E5E4 0007B524  80 C7 00 08 */	lwz r6, 8(r7)
/* 8007E5E8 0007B528  38 06 00 01 */	addi r0, r6, 1
/* 8007E5EC 0007B52C  90 07 00 08 */	stw r0, 8(r7)
/* 8007E5F0 0007B530  98 86 00 00 */	stb r4, 0(r6)
/* 8007E5F4 0007B534  80 ED 8E A8 */	lwz r7, __GDCurrentDL@sda21(r13)
/* 8007E5F8 0007B538  80 C7 00 08 */	lwz r6, 8(r7)
/* 8007E5FC 0007B53C  38 06 00 01 */	addi r0, r6, 1
/* 8007E600 0007B540  90 07 00 08 */	stw r0, 8(r7)
/* 8007E604 0007B544  98 86 00 00 */	stb r4, 0(r6)
/* 8007E608 0007B548  80 ED 8E A8 */	lwz r7, __GDCurrentDL@sda21(r13)
/* 8007E60C 0007B54C  80 C7 00 08 */	lwz r6, 8(r7)
/* 8007E610 0007B550  38 06 00 01 */	addi r0, r6, 1
/* 8007E614 0007B554  90 07 00 08 */	stw r0, 8(r7)
/* 8007E618 0007B558  98 A6 00 00 */	stb r5, 0(r6)
/* 8007E61C 0007B55C  80 ED 8E A8 */	lwz r7, __GDCurrentDL@sda21(r13)
/* 8007E620 0007B560  80 C7 00 08 */	lwz r6, 8(r7)
/* 8007E624 0007B564  38 06 00 01 */	addi r0, r6, 1
/* 8007E628 0007B568  90 07 00 08 */	stw r0, 8(r7)
/* 8007E62C 0007B56C  98 66 00 00 */	stb r3, 0(r6)
/* 8007E630 0007B570  80 ED 8E A8 */	lwz r7, __GDCurrentDL@sda21(r13)
/* 8007E634 0007B574  80 C7 00 08 */	lwz r6, 8(r7)
/* 8007E638 0007B578  38 06 00 01 */	addi r0, r6, 1
/* 8007E63C 0007B57C  90 07 00 08 */	stw r0, 8(r7)
/* 8007E640 0007B580  98 86 00 00 */	stb r4, 0(r6)
/* 8007E644 0007B584  80 ED 8E A8 */	lwz r7, __GDCurrentDL@sda21(r13)
/* 8007E648 0007B588  80 C7 00 08 */	lwz r6, 8(r7)
/* 8007E64C 0007B58C  38 06 00 01 */	addi r0, r6, 1
/* 8007E650 0007B590  90 07 00 08 */	stw r0, 8(r7)
/* 8007E654 0007B594  99 86 00 00 */	stb r12, 0(r6)
/* 8007E658 0007B598  80 ED 8E A8 */	lwz r7, __GDCurrentDL@sda21(r13)
/* 8007E65C 0007B59C  80 C7 00 08 */	lwz r6, 8(r7)
/* 8007E660 0007B5A0  38 06 00 01 */	addi r0, r6, 1
/* 8007E664 0007B5A4  90 07 00 08 */	stw r0, 8(r7)
/* 8007E668 0007B5A8  99 66 00 00 */	stb r11, 0(r6)
/* 8007E66C 0007B5AC  80 ED 8E A8 */	lwz r7, __GDCurrentDL@sda21(r13)
/* 8007E670 0007B5B0  80 C7 00 08 */	lwz r6, 8(r7)
/* 8007E674 0007B5B4  38 06 00 01 */	addi r0, r6, 1
/* 8007E678 0007B5B8  90 07 00 08 */	stw r0, 8(r7)
/* 8007E67C 0007B5BC  98 A6 00 00 */	stb r5, 0(r6)
/* 8007E680 0007B5C0  80 ED 8E A8 */	lwz r7, __GDCurrentDL@sda21(r13)
/* 8007E684 0007B5C4  80 C7 00 08 */	lwz r6, 8(r7)
/* 8007E688 0007B5C8  38 06 00 01 */	addi r0, r6, 1
/* 8007E68C 0007B5CC  90 07 00 08 */	stw r0, 8(r7)
/* 8007E690 0007B5D0  99 46 00 00 */	stb r10, 0(r6)
/* 8007E694 0007B5D4  80 ED 8E A8 */	lwz r7, __GDCurrentDL@sda21(r13)
/* 8007E698 0007B5D8  80 C7 00 08 */	lwz r6, 8(r7)
/* 8007E69C 0007B5DC  38 06 00 01 */	addi r0, r6, 1
/* 8007E6A0 0007B5E0  90 07 00 08 */	stw r0, 8(r7)
/* 8007E6A4 0007B5E4  98 86 00 00 */	stb r4, 0(r6)
/* 8007E6A8 0007B5E8  80 ED 8E A8 */	lwz r7, __GDCurrentDL@sda21(r13)
/* 8007E6AC 0007B5EC  80 C7 00 08 */	lwz r6, 8(r7)
/* 8007E6B0 0007B5F0  38 06 00 01 */	addi r0, r6, 1
/* 8007E6B4 0007B5F4  90 07 00 08 */	stw r0, 8(r7)
/* 8007E6B8 0007B5F8  99 26 00 00 */	stb r9, 0(r6)
/* 8007E6BC 0007B5FC  80 ED 8E A8 */	lwz r7, __GDCurrentDL@sda21(r13)
/* 8007E6C0 0007B600  80 C7 00 08 */	lwz r6, 8(r7)
/* 8007E6C4 0007B604  38 06 00 01 */	addi r0, r6, 1
/* 8007E6C8 0007B608  90 07 00 08 */	stw r0, 8(r7)
/* 8007E6CC 0007B60C  99 06 00 00 */	stb r8, 0(r6)
/* 8007E6D0 0007B610  81 2D 8E A8 */	lwz r9, __GDCurrentDL@sda21(r13)
/* 8007E6D4 0007B614  38 00 00 40 */	li r0, 0x40
/* 8007E6D8 0007B618  39 40 00 07 */	li r10, 7
/* 8007E6DC 0007B61C  38 E0 00 43 */	li r7, 0x43
/* 8007E6E0 0007B620  81 09 00 08 */	lwz r8, 8(r9)
/* 8007E6E4 0007B624  38 C8 00 01 */	addi r6, r8, 1
/* 8007E6E8 0007B628  90 C9 00 08 */	stw r6, 8(r9)
/* 8007E6EC 0007B62C  98 A8 00 00 */	stb r5, 0(r8)
/* 8007E6F0 0007B630  81 2D 8E A8 */	lwz r9, __GDCurrentDL@sda21(r13)
/* 8007E6F4 0007B634  81 09 00 08 */	lwz r8, 8(r9)
/* 8007E6F8 0007B638  38 C8 00 01 */	addi r6, r8, 1
/* 8007E6FC 0007B63C  90 C9 00 08 */	stw r6, 8(r9)
/* 8007E700 0007B640  98 08 00 00 */	stb r0, 0(r8)
/* 8007E704 0007B644  81 2D 8E A8 */	lwz r9, __GDCurrentDL@sda21(r13)
/* 8007E708 0007B648  81 09 00 08 */	lwz r8, 8(r9)
/* 8007E70C 0007B64C  38 C8 00 01 */	addi r6, r8, 1
/* 8007E710 0007B650  90 C9 00 08 */	stw r6, 8(r9)
/* 8007E714 0007B654  98 88 00 00 */	stb r4, 0(r8)
/* 8007E718 0007B658  81 2D 8E A8 */	lwz r9, __GDCurrentDL@sda21(r13)
/* 8007E71C 0007B65C  81 09 00 08 */	lwz r8, 8(r9)
/* 8007E720 0007B660  38 C8 00 01 */	addi r6, r8, 1
/* 8007E724 0007B664  90 C9 00 08 */	stw r6, 8(r9)
/* 8007E728 0007B668  98 88 00 00 */	stb r4, 0(r8)
/* 8007E72C 0007B66C  81 2D 8E A8 */	lwz r9, __GDCurrentDL@sda21(r13)
/* 8007E730 0007B670  81 09 00 08 */	lwz r8, 8(r9)
/* 8007E734 0007B674  38 C8 00 01 */	addi r6, r8, 1
/* 8007E738 0007B678  90 C9 00 08 */	stw r6, 8(r9)
/* 8007E73C 0007B67C  99 48 00 00 */	stb r10, 0(r8)
/* 8007E740 0007B680  81 2D 8E A8 */	lwz r9, __GDCurrentDL@sda21(r13)
/* 8007E744 0007B684  81 09 00 08 */	lwz r8, 8(r9)
/* 8007E748 0007B688  38 C8 00 01 */	addi r6, r8, 1
/* 8007E74C 0007B68C  90 C9 00 08 */	stw r6, 8(r9)
/* 8007E750 0007B690  98 A8 00 00 */	stb r5, 0(r8)
/* 8007E754 0007B694  81 2D 8E A8 */	lwz r9, __GDCurrentDL@sda21(r13)
/* 8007E758 0007B698  81 09 00 08 */	lwz r8, 8(r9)
/* 8007E75C 0007B69C  38 C8 00 01 */	addi r6, r8, 1
/* 8007E760 0007B6A0  90 C9 00 08 */	stw r6, 8(r9)
/* 8007E764 0007B6A4  98 68 00 00 */	stb r3, 0(r8)
/* 8007E768 0007B6A8  81 0D 8E A8 */	lwz r8, __GDCurrentDL@sda21(r13)
/* 8007E76C 0007B6AC  80 C8 00 08 */	lwz r6, 8(r8)
/* 8007E770 0007B6B0  38 66 00 01 */	addi r3, r6, 1
/* 8007E774 0007B6B4  90 68 00 08 */	stw r3, 8(r8)
/* 8007E778 0007B6B8  98 86 00 00 */	stb r4, 0(r6)
/* 8007E77C 0007B6BC  81 0D 8E A8 */	lwz r8, __GDCurrentDL@sda21(r13)
/* 8007E780 0007B6C0  80 C8 00 08 */	lwz r6, 8(r8)
/* 8007E784 0007B6C4  38 66 00 01 */	addi r3, r6, 1
/* 8007E788 0007B6C8  90 68 00 08 */	stw r3, 8(r8)
/* 8007E78C 0007B6CC  98 86 00 00 */	stb r4, 0(r6)
/* 8007E790 0007B6D0  81 0D 8E A8 */	lwz r8, __GDCurrentDL@sda21(r13)
/* 8007E794 0007B6D4  80 C8 00 08 */	lwz r6, 8(r8)
/* 8007E798 0007B6D8  38 66 00 01 */	addi r3, r6, 1
/* 8007E79C 0007B6DC  90 68 00 08 */	stw r3, 8(r8)
/* 8007E7A0 0007B6E0  98 06 00 00 */	stb r0, 0(r6)
/* 8007E7A4 0007B6E4  81 0D 8E A8 */	lwz r8, __GDCurrentDL@sda21(r13)
/* 8007E7A8 0007B6E8  80 C8 00 08 */	lwz r6, 8(r8)
/* 8007E7AC 0007B6EC  38 66 00 01 */	addi r3, r6, 1
/* 8007E7B0 0007B6F0  90 68 00 08 */	stw r3, 8(r8)
/* 8007E7B4 0007B6F4  98 A6 00 00 */	stb r5, 0(r6)
/* 8007E7B8 0007B6F8  80 CD 8E A8 */	lwz r6, __GDCurrentDL@sda21(r13)
/* 8007E7BC 0007B6FC  80 A6 00 08 */	lwz r5, 8(r6)
/* 8007E7C0 0007B700  38 65 00 01 */	addi r3, r5, 1
/* 8007E7C4 0007B704  90 66 00 08 */	stw r3, 8(r6)
/* 8007E7C8 0007B708  98 E5 00 00 */	stb r7, 0(r5)
/* 8007E7CC 0007B70C  80 CD 8E A8 */	lwz r6, __GDCurrentDL@sda21(r13)
/* 8007E7D0 0007B710  80 A6 00 08 */	lwz r5, 8(r6)
/* 8007E7D4 0007B714  38 65 00 01 */	addi r3, r5, 1
/* 8007E7D8 0007B718  90 66 00 08 */	stw r3, 8(r6)
/* 8007E7DC 0007B71C  98 85 00 00 */	stb r4, 0(r5)
/* 8007E7E0 0007B720  80 CD 8E A8 */	lwz r6, __GDCurrentDL@sda21(r13)
/* 8007E7E4 0007B724  80 A6 00 08 */	lwz r5, 8(r6)
/* 8007E7E8 0007B728  38 65 00 01 */	addi r3, r5, 1
/* 8007E7EC 0007B72C  90 66 00 08 */	stw r3, 8(r6)
/* 8007E7F0 0007B730  98 85 00 00 */	stb r4, 0(r5)
/* 8007E7F4 0007B734  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 8007E7F8 0007B738  80 85 00 08 */	lwz r4, 8(r5)
/* 8007E7FC 0007B73C  38 64 00 01 */	addi r3, r4, 1
/* 8007E800 0007B740  90 65 00 08 */	stw r3, 8(r5)
/* 8007E804 0007B744  98 04 00 00 */	stb r0, 0(r4)
/* 8007E808 0007B748  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8007E80C 0007B74C  83 C1 00 08 */	lwz r30, 8(r1)
/* 8007E810 0007B750  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8007E814 0007B754  7C 08 03 A6 */	mtlr r0
/* 8007E818 0007B758  38 21 00 10 */	addi r1, r1, 0x10
/* 8007E81C 0007B75C  4E 80 00 20 */	blr 
.endfn load__13J3DPEBlockXluFv

.fn load__16J3DPEBlockFogOffFv, global
/* 8007E820 0007B760  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8007E824 0007B764  7C 08 02 A6 */	mflr r0
/* 8007E828 0007B768  90 01 00 24 */	stw r0, 0x24(r1)
/* 8007E82C 0007B76C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8007E830 0007B770  7C 7F 1B 78 */	mr r31, r3
/* 8007E834 0007B774  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8007E838 0007B778  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8007E83C 0007B77C  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 8007E840 0007B780  80 64 00 08 */	lwz r3, 8(r4)
/* 8007E844 0007B784  80 04 00 0C */	lwz r0, 0xc(r4)
/* 8007E848 0007B788  38 63 00 1E */	addi r3, r3, 0x1e
/* 8007E84C 0007B78C  7C 03 00 40 */	cmplw r3, r0
/* 8007E850 0007B790  40 81 00 08 */	ble .L_8007E858
/* 8007E854 0007B794  48 06 33 ED */	bl GDOverflowed
.L_8007E858:
/* 8007E858 0007B798  A0 1F 00 04 */	lhz r0, 4(r31)
/* 8007E85C 0007B79C  3C 60 80 51 */	lis r3, j3dAlphaCmpTable@ha
/* 8007E860 0007B7A0  81 0D 8E A8 */	lwz r8, __GDCurrentDL@sda21(r13)
/* 8007E864 0007B7A4  38 83 1D 94 */	addi r4, r3, j3dAlphaCmpTable@l
/* 8007E868 0007B7A8  1C A0 00 03 */	mulli r5, r0, 3
/* 8007E86C 0007B7AC  89 5F 00 07 */	lbz r10, 7(r31)
/* 8007E870 0007B7B0  80 E8 00 08 */	lwz r7, 8(r8)
/* 8007E874 0007B7B4  38 00 00 61 */	li r0, 0x61
/* 8007E878 0007B7B8  3B A0 00 FE */	li r29, 0xfe
/* 8007E87C 0007B7BC  7C 64 2A 14 */	add r3, r4, r5
/* 8007E880 0007B7C0  7D 24 28 AE */	lbzx r9, r4, r5
/* 8007E884 0007B7C4  38 A7 00 01 */	addi r5, r7, 1
/* 8007E888 0007B7C8  88 83 00 02 */	lbz r4, 2(r3)
/* 8007E88C 0007B7CC  3B C0 00 00 */	li r30, 0
/* 8007E890 0007B7D0  88 C3 00 01 */	lbz r6, 1(r3)
/* 8007E894 0007B7D4  55 43 44 2E */	rlwinm r3, r10, 8, 0x10, 0x17
/* 8007E898 0007B7D8  89 5F 00 06 */	lbz r10, 6(r31)
/* 8007E89C 0007B7DC  54 84 98 18 */	slwi r4, r4, 0x13
/* 8007E8A0 0007B7E0  54 C6 B0 12 */	slwi r6, r6, 0x16
/* 8007E8A4 0007B7E4  39 80 00 1F */	li r12, 0x1f
/* 8007E8A8 0007B7E8  90 A8 00 08 */	stw r5, 8(r8)
/* 8007E8AC 0007B7EC  51 43 06 3E */	rlwimi r3, r10, 0, 0x18, 0x1f
/* 8007E8B0 0007B7F0  51 23 82 1E */	rlwimi r3, r9, 0x10, 8, 0xf
/* 8007E8B4 0007B7F4  39 60 00 E7 */	li r11, 0xe7
/* 8007E8B8 0007B7F8  98 07 00 00 */	stb r0, 0(r7)
/* 8007E8BC 0007B7FC  7C 83 1B 78 */	or r3, r4, r3
/* 8007E8C0 0007B800  7C C3 1B 78 */	or r3, r6, r3
/* 8007E8C4 0007B804  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 8007E8C8 0007B808  64 69 F3 00 */	oris r9, r3, 0xf300
/* 8007E8CC 0007B80C  55 28 46 3E */	srwi r8, r9, 0x18
/* 8007E8D0 0007B810  80 85 00 08 */	lwz r4, 8(r5)
/* 8007E8D4 0007B814  55 27 86 3E */	rlwinm r7, r9, 0x10, 0x18, 0x1f
/* 8007E8D8 0007B818  55 26 C6 3E */	rlwinm r6, r9, 0x18, 0x18, 0x1f
/* 8007E8DC 0007B81C  38 64 00 01 */	addi r3, r4, 1
/* 8007E8E0 0007B820  90 65 00 08 */	stw r3, 8(r5)
/* 8007E8E4 0007B824  99 04 00 00 */	stb r8, 0(r4)
/* 8007E8E8 0007B828  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 8007E8EC 0007B82C  80 85 00 08 */	lwz r4, 8(r5)
/* 8007E8F0 0007B830  38 64 00 01 */	addi r3, r4, 1
/* 8007E8F4 0007B834  90 65 00 08 */	stw r3, 8(r5)
/* 8007E8F8 0007B838  98 E4 00 00 */	stb r7, 0(r4)
/* 8007E8FC 0007B83C  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 8007E900 0007B840  80 85 00 08 */	lwz r4, 8(r5)
/* 8007E904 0007B844  38 64 00 01 */	addi r3, r4, 1
/* 8007E908 0007B848  90 65 00 08 */	stw r3, 8(r5)
/* 8007E90C 0007B84C  98 C4 00 00 */	stb r6, 0(r4)
/* 8007E910 0007B850  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 8007E914 0007B854  80 85 00 08 */	lwz r4, 8(r5)
/* 8007E918 0007B858  38 64 00 01 */	addi r3, r4, 1
/* 8007E91C 0007B85C  90 65 00 08 */	stw r3, 8(r5)
/* 8007E920 0007B860  99 24 00 00 */	stb r9, 0(r4)
/* 8007E924 0007B864  81 4D 8E A8 */	lwz r10, __GDCurrentDL@sda21(r13)
/* 8007E928 0007B868  88 9F 00 08 */	lbz r4, 8(r31)
/* 8007E92C 0007B86C  81 2A 00 08 */	lwz r9, 8(r10)
/* 8007E930 0007B870  88 7F 00 0F */	lbz r3, 0xf(r31)
/* 8007E934 0007B874  2C 04 00 01 */	cmpwi r4, 1
/* 8007E938 0007B878  88 FF 00 0B */	lbz r7, 0xb(r31)
/* 8007E93C 0007B87C  39 09 00 01 */	addi r8, r9, 1
/* 8007E940 0007B880  88 DF 00 0A */	lbz r6, 0xa(r31)
/* 8007E944 0007B884  88 BF 00 09 */	lbz r5, 9(r31)
/* 8007E948 0007B888  91 0A 00 08 */	stw r8, 8(r10)
/* 8007E94C 0007B88C  98 09 00 00 */	stb r0, 0(r9)
/* 8007E950 0007B890  81 4D 8E A8 */	lwz r10, __GDCurrentDL@sda21(r13)
/* 8007E954 0007B894  81 2A 00 08 */	lwz r9, 8(r10)
/* 8007E958 0007B898  39 09 00 01 */	addi r8, r9, 1
/* 8007E95C 0007B89C  91 0A 00 08 */	stw r8, 8(r10)
/* 8007E960 0007B8A0  9B A9 00 00 */	stb r29, 0(r9)
/* 8007E964 0007B8A4  81 4D 8E A8 */	lwz r10, __GDCurrentDL@sda21(r13)
/* 8007E968 0007B8A8  81 2A 00 08 */	lwz r9, 8(r10)
/* 8007E96C 0007B8AC  39 09 00 01 */	addi r8, r9, 1
/* 8007E970 0007B8B0  91 0A 00 08 */	stw r8, 8(r10)
/* 8007E974 0007B8B4  9B C9 00 00 */	stb r30, 0(r9)
/* 8007E978 0007B8B8  81 4D 8E A8 */	lwz r10, __GDCurrentDL@sda21(r13)
/* 8007E97C 0007B8BC  81 2A 00 08 */	lwz r9, 8(r10)
/* 8007E980 0007B8C0  39 09 00 01 */	addi r8, r9, 1
/* 8007E984 0007B8C4  91 0A 00 08 */	stw r8, 8(r10)
/* 8007E988 0007B8C8  99 89 00 00 */	stb r12, 0(r9)
/* 8007E98C 0007B8CC  81 4D 8E A8 */	lwz r10, __GDCurrentDL@sda21(r13)
/* 8007E990 0007B8D0  81 2A 00 08 */	lwz r9, 8(r10)
/* 8007E994 0007B8D4  39 09 00 01 */	addi r8, r9, 1
/* 8007E998 0007B8D8  91 0A 00 08 */	stw r8, 8(r10)
/* 8007E99C 0007B8DC  99 69 00 00 */	stb r11, 0(r9)
/* 8007E9A0 0007B8E0  81 4D 8E A8 */	lwz r10, __GDCurrentDL@sda21(r13)
/* 8007E9A4 0007B8E4  81 2A 00 08 */	lwz r9, 8(r10)
/* 8007E9A8 0007B8E8  39 09 00 01 */	addi r8, r9, 1
/* 8007E9AC 0007B8EC  91 0A 00 08 */	stw r8, 8(r10)
/* 8007E9B0 0007B8F0  98 09 00 00 */	stb r0, 0(r9)
/* 8007E9B4 0007B8F4  41 82 00 0C */	beq .L_8007E9C0
/* 8007E9B8 0007B8F8  2C 04 00 03 */	cmpwi r4, 3
/* 8007E9BC 0007B8FC  40 82 00 08 */	bne .L_8007E9C4
.L_8007E9C0:
/* 8007E9C0 0007B900  3B C0 00 01 */	li r30, 1
.L_8007E9C4:
/* 8007E9C4 0007B904  21 24 00 03 */	subfic r9, r4, 3
/* 8007E9C8 0007B908  57 C8 06 3E */	clrlwi r8, r30, 0x18
/* 8007E9CC 0007B90C  20 04 00 02 */	subfic r0, r4, 2
/* 8007E9D0 0007B910  81 6D 8E A8 */	lwz r11, __GDCurrentDL@sda21(r13)
/* 8007E9D4 0007B914  7C 00 00 34 */	cntlzw r0, r0
/* 8007E9D8 0007B918  54 63 15 BA */	rlwinm r3, r3, 2, 0x16, 0x1d
/* 8007E9DC 0007B91C  54 00 E5 FC */	rlwinm r0, r0, 0x1c, 0x17, 0x1e
/* 8007E9E0 0007B920  54 C6 28 34 */	slwi r6, r6, 5
/* 8007E9E4 0007B924  7C 08 43 78 */	or r8, r0, r8
/* 8007E9E8 0007B928  7D 3E 00 34 */	cntlzw r30, r9
/* 8007E9EC 0007B92C  7C 68 43 78 */	or r8, r3, r8
/* 8007E9F0 0007B930  81 4B 00 08 */	lwz r10, 8(r11)
/* 8007E9F4 0007B934  7C CC 43 78 */	or r12, r6, r8
/* 8007E9F8 0007B938  54 A5 40 2E */	slwi r5, r5, 8
/* 8007E9FC 0007B93C  57 C8 33 68 */	rlwinm r8, r30, 6, 0xd, 0x14
/* 8007EA00 0007B940  39 2A 00 01 */	addi r9, r10, 1
/* 8007EA04 0007B944  7C AC 63 78 */	or r12, r5, r12
/* 8007EA08 0007B948  54 E7 60 26 */	slwi r7, r7, 0xc
/* 8007EA0C 0007B94C  7D 0C 63 78 */	or r12, r8, r12
/* 8007EA10 0007B950  91 2B 00 08 */	stw r9, 8(r11)
/* 8007EA14 0007B954  7C E9 63 78 */	or r9, r7, r12
/* 8007EA18 0007B958  2C 04 00 01 */	cmpwi r4, 1
/* 8007EA1C 0007B95C  65 29 41 00 */	oris r9, r9, 0x4100
/* 8007EA20 0007B960  55 29 46 3E */	srwi r9, r9, 0x18
/* 8007EA24 0007B964  99 2A 00 00 */	stb r9, 0(r10)
/* 8007EA28 0007B968  39 20 00 00 */	li r9, 0
/* 8007EA2C 0007B96C  41 82 00 0C */	beq .L_8007EA38
/* 8007EA30 0007B970  2C 04 00 03 */	cmpwi r4, 3
/* 8007EA34 0007B974  40 82 00 08 */	bne .L_8007EA3C
.L_8007EA38:
/* 8007EA38 0007B978  39 20 00 01 */	li r9, 1
.L_8007EA3C:
/* 8007EA3C 0007B97C  55 29 06 3E */	clrlwi r9, r9, 0x18
/* 8007EA40 0007B980  81 8D 8E A8 */	lwz r12, __GDCurrentDL@sda21(r13)
/* 8007EA44 0007B984  7C 09 4B 78 */	or r9, r0, r9
/* 8007EA48 0007B988  2C 04 00 01 */	cmpwi r4, 1
/* 8007EA4C 0007B98C  7C 69 4B 78 */	or r9, r3, r9
/* 8007EA50 0007B990  81 6C 00 08 */	lwz r11, 8(r12)
/* 8007EA54 0007B994  7C CA 4B 78 */	or r10, r6, r9
/* 8007EA58 0007B998  39 20 00 00 */	li r9, 0
/* 8007EA5C 0007B99C  7C BE 53 78 */	or r30, r5, r10
/* 8007EA60 0007B9A0  39 4B 00 01 */	addi r10, r11, 1
/* 8007EA64 0007B9A4  7D 1E F3 78 */	or r30, r8, r30
/* 8007EA68 0007B9A8  91 4C 00 08 */	stw r10, 8(r12)
/* 8007EA6C 0007B9AC  7C EA F3 78 */	or r10, r7, r30
/* 8007EA70 0007B9B0  65 4A 41 00 */	oris r10, r10, 0x4100
/* 8007EA74 0007B9B4  55 4A 86 3E */	rlwinm r10, r10, 0x10, 0x18, 0x1f
/* 8007EA78 0007B9B8  99 4B 00 00 */	stb r10, 0(r11)
/* 8007EA7C 0007B9BC  41 82 00 0C */	beq .L_8007EA88
/* 8007EA80 0007B9C0  2C 04 00 03 */	cmpwi r4, 3
/* 8007EA84 0007B9C4  40 82 00 08 */	bne .L_8007EA8C
.L_8007EA88:
/* 8007EA88 0007B9C8  39 20 00 01 */	li r9, 1
.L_8007EA8C:
/* 8007EA8C 0007B9CC  55 29 06 3E */	clrlwi r9, r9, 0x18
/* 8007EA90 0007B9D0  81 8D 8E A8 */	lwz r12, __GDCurrentDL@sda21(r13)
/* 8007EA94 0007B9D4  7C 09 4B 78 */	or r9, r0, r9
/* 8007EA98 0007B9D8  2C 04 00 01 */	cmpwi r4, 1
/* 8007EA9C 0007B9DC  7C 69 4B 78 */	or r9, r3, r9
/* 8007EAA0 0007B9E0  81 6C 00 08 */	lwz r11, 8(r12)
/* 8007EAA4 0007B9E4  7C CA 4B 78 */	or r10, r6, r9
/* 8007EAA8 0007B9E8  39 20 00 00 */	li r9, 0
/* 8007EAAC 0007B9EC  7C BE 53 78 */	or r30, r5, r10
/* 8007EAB0 0007B9F0  39 4B 00 01 */	addi r10, r11, 1
/* 8007EAB4 0007B9F4  7D 1E F3 78 */	or r30, r8, r30
/* 8007EAB8 0007B9F8  91 4C 00 08 */	stw r10, 8(r12)
/* 8007EABC 0007B9FC  7C EA F3 78 */	or r10, r7, r30
/* 8007EAC0 0007BA00  65 4A 41 00 */	oris r10, r10, 0x4100
/* 8007EAC4 0007BA04  55 4A C6 3E */	rlwinm r10, r10, 0x18, 0x18, 0x1f
/* 8007EAC8 0007BA08  99 4B 00 00 */	stb r10, 0(r11)
/* 8007EACC 0007BA0C  41 82 00 0C */	beq .L_8007EAD8
/* 8007EAD0 0007BA10  2C 04 00 03 */	cmpwi r4, 3
/* 8007EAD4 0007BA14  40 82 00 08 */	bne .L_8007EADC
.L_8007EAD8:
/* 8007EAD8 0007BA18  39 20 00 01 */	li r9, 1
.L_8007EADC:
/* 8007EADC 0007BA1C  7C 00 4B 78 */	or r0, r0, r9
/* 8007EAE0 0007BA20  81 4D 8E A8 */	lwz r10, __GDCurrentDL@sda21(r13)
/* 8007EAE4 0007BA24  7C 60 03 78 */	or r0, r3, r0
/* 8007EAE8 0007BA28  3C 60 80 51 */	lis r3, j3dZModeTable@ha
/* 8007EAEC 0007BA2C  7C C0 03 78 */	or r0, r6, r0
/* 8007EAF0 0007BA30  80 8A 00 08 */	lwz r4, 8(r10)
/* 8007EAF4 0007BA34  7C A0 03 78 */	or r0, r5, r0
/* 8007EAF8 0007BA38  39 23 20 94 */	addi r9, r3, j3dZModeTable@l
/* 8007EAFC 0007BA3C  7D 03 03 78 */	or r3, r8, r0
/* 8007EB00 0007BA40  38 C0 00 00 */	li r6, 0
/* 8007EB04 0007BA44  7C E3 1B 78 */	or r3, r7, r3
/* 8007EB08 0007BA48  38 04 00 01 */	addi r0, r4, 1
/* 8007EB0C 0007BA4C  90 0A 00 08 */	stw r0, 8(r10)
/* 8007EB10 0007BA50  60 63 00 00 */	ori r3, r3, 0
/* 8007EB14 0007BA54  38 00 00 61 */	li r0, 0x61
/* 8007EB18 0007BA58  38 E0 00 FE */	li r7, 0xfe
/* 8007EB1C 0007BA5C  98 64 00 00 */	stb r3, 0(r4)
/* 8007EB20 0007BA60  A0 7F 00 0C */	lhz r3, 0xc(r31)
/* 8007EB24 0007BA64  81 0D 8E A8 */	lwz r8, __GDCurrentDL@sda21(r13)
/* 8007EB28 0007BA68  1C 63 00 03 */	mulli r3, r3, 3
/* 8007EB2C 0007BA6C  80 A8 00 08 */	lwz r5, 8(r8)
/* 8007EB30 0007BA70  7C 89 1A 14 */	add r4, r9, r3
/* 8007EB34 0007BA74  7D 69 18 AE */	lbzx r11, r9, r3
/* 8007EB38 0007BA78  89 44 00 02 */	lbz r10, 2(r4)
/* 8007EB3C 0007BA7C  38 65 00 01 */	addi r3, r5, 1
/* 8007EB40 0007BA80  89 24 00 01 */	lbz r9, 1(r4)
/* 8007EB44 0007BA84  55 44 25 36 */	rlwinm r4, r10, 4, 0x14, 0x1b
/* 8007EB48 0007BA88  90 68 00 08 */	stw r3, 8(r8)
/* 8007EB4C 0007BA8C  55 23 08 3C */	slwi r3, r9, 1
/* 8007EB50 0007BA90  7D 63 1B 78 */	or r3, r11, r3
/* 8007EB54 0007BA94  98 05 00 00 */	stb r0, 0(r5)
/* 8007EB58 0007BA98  7C 83 1B 78 */	or r3, r4, r3
/* 8007EB5C 0007BA9C  64 6B 40 00 */	oris r11, r3, 0x4000
/* 8007EB60 0007BAA0  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 8007EB64 0007BAA4  55 6A 46 3E */	srwi r10, r11, 0x18
/* 8007EB68 0007BAA8  55 69 86 3E */	rlwinm r9, r11, 0x10, 0x18, 0x1f
/* 8007EB6C 0007BAAC  55 68 C6 3E */	rlwinm r8, r11, 0x18, 0x18, 0x1f
/* 8007EB70 0007BAB0  80 85 00 08 */	lwz r4, 8(r5)
/* 8007EB74 0007BAB4  38 64 00 01 */	addi r3, r4, 1
/* 8007EB78 0007BAB8  90 65 00 08 */	stw r3, 8(r5)
/* 8007EB7C 0007BABC  99 44 00 00 */	stb r10, 0(r4)
/* 8007EB80 0007BAC0  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 8007EB84 0007BAC4  80 85 00 08 */	lwz r4, 8(r5)
/* 8007EB88 0007BAC8  38 64 00 01 */	addi r3, r4, 1
/* 8007EB8C 0007BACC  90 65 00 08 */	stw r3, 8(r5)
/* 8007EB90 0007BAD0  99 24 00 00 */	stb r9, 0(r4)
/* 8007EB94 0007BAD4  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 8007EB98 0007BAD8  80 85 00 08 */	lwz r4, 8(r5)
/* 8007EB9C 0007BADC  38 64 00 01 */	addi r3, r4, 1
/* 8007EBA0 0007BAE0  90 65 00 08 */	stw r3, 8(r5)
/* 8007EBA4 0007BAE4  99 04 00 00 */	stb r8, 0(r4)
/* 8007EBA8 0007BAE8  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 8007EBAC 0007BAEC  80 85 00 08 */	lwz r4, 8(r5)
/* 8007EBB0 0007BAF0  38 64 00 01 */	addi r3, r4, 1
/* 8007EBB4 0007BAF4  90 65 00 08 */	stw r3, 8(r5)
/* 8007EBB8 0007BAF8  99 64 00 00 */	stb r11, 0(r4)
/* 8007EBBC 0007BAFC  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 8007EBC0 0007BB00  89 3F 00 0E */	lbz r9, 0xe(r31)
/* 8007EBC4 0007BB04  80 85 00 08 */	lwz r4, 8(r5)
/* 8007EBC8 0007BB08  38 64 00 01 */	addi r3, r4, 1
/* 8007EBCC 0007BB0C  90 65 00 08 */	stw r3, 8(r5)
/* 8007EBD0 0007BB10  98 04 00 00 */	stb r0, 0(r4)
/* 8007EBD4 0007BB14  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 8007EBD8 0007BB18  80 85 00 08 */	lwz r4, 8(r5)
/* 8007EBDC 0007BB1C  38 64 00 01 */	addi r3, r4, 1
/* 8007EBE0 0007BB20  90 65 00 08 */	stw r3, 8(r5)
/* 8007EBE4 0007BB24  98 E4 00 00 */	stb r7, 0(r4)
/* 8007EBE8 0007BB28  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 8007EBEC 0007BB2C  80 85 00 08 */	lwz r4, 8(r5)
/* 8007EBF0 0007BB30  38 64 00 01 */	addi r3, r4, 1
/* 8007EBF4 0007BB34  90 65 00 08 */	stw r3, 8(r5)
/* 8007EBF8 0007BB38  98 C4 00 00 */	stb r6, 0(r4)
/* 8007EBFC 0007BB3C  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 8007EC00 0007BB40  80 85 00 08 */	lwz r4, 8(r5)
/* 8007EC04 0007BB44  38 64 00 01 */	addi r3, r4, 1
/* 8007EC08 0007BB48  90 65 00 08 */	stw r3, 8(r5)
/* 8007EC0C 0007BB4C  98 C4 00 00 */	stb r6, 0(r4)
/* 8007EC10 0007BB50  81 0D 8E A8 */	lwz r8, __GDCurrentDL@sda21(r13)
/* 8007EC14 0007BB54  55 23 34 B2 */	rlwinm r3, r9, 6, 0x12, 0x19
/* 8007EC18 0007BB58  64 6A 43 00 */	oris r10, r3, 0x4300
/* 8007EC1C 0007BB5C  39 20 00 40 */	li r9, 0x40
/* 8007EC20 0007BB60  80 88 00 08 */	lwz r4, 8(r8)
/* 8007EC24 0007BB64  55 47 46 3E */	srwi r7, r10, 0x18
/* 8007EC28 0007BB68  55 46 86 3E */	rlwinm r6, r10, 0x10, 0x18, 0x1f
/* 8007EC2C 0007BB6C  55 45 C6 3E */	rlwinm r5, r10, 0x18, 0x18, 0x1f
/* 8007EC30 0007BB70  38 64 00 01 */	addi r3, r4, 1
/* 8007EC34 0007BB74  90 68 00 08 */	stw r3, 8(r8)
/* 8007EC38 0007BB78  99 24 00 00 */	stb r9, 0(r4)
/* 8007EC3C 0007BB7C  81 0D 8E A8 */	lwz r8, __GDCurrentDL@sda21(r13)
/* 8007EC40 0007BB80  80 88 00 08 */	lwz r4, 8(r8)
/* 8007EC44 0007BB84  38 64 00 01 */	addi r3, r4, 1
/* 8007EC48 0007BB88  90 68 00 08 */	stw r3, 8(r8)
/* 8007EC4C 0007BB8C  98 04 00 00 */	stb r0, 0(r4)
/* 8007EC50 0007BB90  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 8007EC54 0007BB94  80 64 00 08 */	lwz r3, 8(r4)
/* 8007EC58 0007BB98  38 03 00 01 */	addi r0, r3, 1
/* 8007EC5C 0007BB9C  90 04 00 08 */	stw r0, 8(r4)
/* 8007EC60 0007BBA0  98 E3 00 00 */	stb r7, 0(r3)
/* 8007EC64 0007BBA4  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 8007EC68 0007BBA8  80 64 00 08 */	lwz r3, 8(r4)
/* 8007EC6C 0007BBAC  38 03 00 01 */	addi r0, r3, 1
/* 8007EC70 0007BBB0  90 04 00 08 */	stw r0, 8(r4)
/* 8007EC74 0007BBB4  98 C3 00 00 */	stb r6, 0(r3)
/* 8007EC78 0007BBB8  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 8007EC7C 0007BBBC  80 64 00 08 */	lwz r3, 8(r4)
/* 8007EC80 0007BBC0  38 03 00 01 */	addi r0, r3, 1
/* 8007EC84 0007BBC4  90 04 00 08 */	stw r0, 8(r4)
/* 8007EC88 0007BBC8  98 A3 00 00 */	stb r5, 0(r3)
/* 8007EC8C 0007BBCC  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 8007EC90 0007BBD0  80 64 00 08 */	lwz r3, 8(r4)
/* 8007EC94 0007BBD4  38 03 00 01 */	addi r0, r3, 1
/* 8007EC98 0007BBD8  90 04 00 08 */	stw r0, 8(r4)
/* 8007EC9C 0007BBDC  99 43 00 00 */	stb r10, 0(r3)
/* 8007ECA0 0007BBE0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8007ECA4 0007BBE4  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8007ECA8 0007BBE8  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8007ECAC 0007BBEC  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8007ECB0 0007BBF0  7C 08 03 A6 */	mtlr r0
/* 8007ECB4 0007BBF4  38 21 00 20 */	addi r1, r1, 0x20
/* 8007ECB8 0007BBF8  4E 80 00 20 */	blr 
.endfn load__16J3DPEBlockFogOffFv

.fn diffBlend__16J3DPEBlockFogOffFv, global
/* 8007ECBC 0007BBFC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8007ECC0 0007BC00  7C 08 02 A6 */	mflr r0
/* 8007ECC4 0007BC04  90 01 00 24 */	stw r0, 0x24(r1)
/* 8007ECC8 0007BC08  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8007ECCC 0007BC0C  7C 7F 1B 78 */	mr r31, r3
/* 8007ECD0 0007BC10  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8007ECD4 0007BC14  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8007ECD8 0007BC18  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 8007ECDC 0007BC1C  80 64 00 08 */	lwz r3, 8(r4)
/* 8007ECE0 0007BC20  80 04 00 0C */	lwz r0, 0xc(r4)
/* 8007ECE4 0007BC24  38 63 00 0F */	addi r3, r3, 0xf
/* 8007ECE8 0007BC28  7C 03 00 40 */	cmplw r3, r0
/* 8007ECEC 0007BC2C  40 81 00 08 */	ble .L_8007ECF4
/* 8007ECF0 0007BC30  48 06 2F 51 */	bl GDOverflowed
.L_8007ECF4:
/* 8007ECF4 0007BC34  81 4D 8E A8 */	lwz r10, __GDCurrentDL@sda21(r13)
/* 8007ECF8 0007BC38  38 00 00 61 */	li r0, 0x61
/* 8007ECFC 0007BC3C  88 9F 00 08 */	lbz r4, 8(r31)
/* 8007ED00 0007BC40  3B A0 00 FE */	li r29, 0xfe
/* 8007ED04 0007BC44  81 2A 00 08 */	lwz r9, 8(r10)
/* 8007ED08 0007BC48  3B C0 00 00 */	li r30, 0
/* 8007ED0C 0007BC4C  88 7F 00 0F */	lbz r3, 0xf(r31)
/* 8007ED10 0007BC50  39 80 00 1F */	li r12, 0x1f
/* 8007ED14 0007BC54  88 FF 00 0B */	lbz r7, 0xb(r31)
/* 8007ED18 0007BC58  39 09 00 01 */	addi r8, r9, 1
/* 8007ED1C 0007BC5C  88 DF 00 0A */	lbz r6, 0xa(r31)
/* 8007ED20 0007BC60  39 60 00 E7 */	li r11, 0xe7
/* 8007ED24 0007BC64  88 BF 00 09 */	lbz r5, 9(r31)
/* 8007ED28 0007BC68  2C 04 00 01 */	cmpwi r4, 1
/* 8007ED2C 0007BC6C  91 0A 00 08 */	stw r8, 8(r10)
/* 8007ED30 0007BC70  98 09 00 00 */	stb r0, 0(r9)
/* 8007ED34 0007BC74  81 4D 8E A8 */	lwz r10, __GDCurrentDL@sda21(r13)
/* 8007ED38 0007BC78  81 2A 00 08 */	lwz r9, 8(r10)
/* 8007ED3C 0007BC7C  39 09 00 01 */	addi r8, r9, 1
/* 8007ED40 0007BC80  91 0A 00 08 */	stw r8, 8(r10)
/* 8007ED44 0007BC84  9B A9 00 00 */	stb r29, 0(r9)
/* 8007ED48 0007BC88  81 4D 8E A8 */	lwz r10, __GDCurrentDL@sda21(r13)
/* 8007ED4C 0007BC8C  81 2A 00 08 */	lwz r9, 8(r10)
/* 8007ED50 0007BC90  39 09 00 01 */	addi r8, r9, 1
/* 8007ED54 0007BC94  91 0A 00 08 */	stw r8, 8(r10)
/* 8007ED58 0007BC98  9B C9 00 00 */	stb r30, 0(r9)
/* 8007ED5C 0007BC9C  81 4D 8E A8 */	lwz r10, __GDCurrentDL@sda21(r13)
/* 8007ED60 0007BCA0  81 2A 00 08 */	lwz r9, 8(r10)
/* 8007ED64 0007BCA4  39 09 00 01 */	addi r8, r9, 1
/* 8007ED68 0007BCA8  91 0A 00 08 */	stw r8, 8(r10)
/* 8007ED6C 0007BCAC  99 89 00 00 */	stb r12, 0(r9)
/* 8007ED70 0007BCB0  81 4D 8E A8 */	lwz r10, __GDCurrentDL@sda21(r13)
/* 8007ED74 0007BCB4  81 2A 00 08 */	lwz r9, 8(r10)
/* 8007ED78 0007BCB8  39 09 00 01 */	addi r8, r9, 1
/* 8007ED7C 0007BCBC  91 0A 00 08 */	stw r8, 8(r10)
/* 8007ED80 0007BCC0  99 69 00 00 */	stb r11, 0(r9)
/* 8007ED84 0007BCC4  81 4D 8E A8 */	lwz r10, __GDCurrentDL@sda21(r13)
/* 8007ED88 0007BCC8  81 2A 00 08 */	lwz r9, 8(r10)
/* 8007ED8C 0007BCCC  39 09 00 01 */	addi r8, r9, 1
/* 8007ED90 0007BCD0  91 0A 00 08 */	stw r8, 8(r10)
/* 8007ED94 0007BCD4  98 09 00 00 */	stb r0, 0(r9)
/* 8007ED98 0007BCD8  41 82 00 0C */	beq .L_8007EDA4
/* 8007ED9C 0007BCDC  2C 04 00 03 */	cmpwi r4, 3
/* 8007EDA0 0007BCE0  40 82 00 08 */	bne .L_8007EDA8
.L_8007EDA4:
/* 8007EDA4 0007BCE4  3B C0 00 01 */	li r30, 1
.L_8007EDA8:
/* 8007EDA8 0007BCE8  21 24 00 03 */	subfic r9, r4, 3
/* 8007EDAC 0007BCEC  57 C8 06 3E */	clrlwi r8, r30, 0x18
/* 8007EDB0 0007BCF0  20 04 00 02 */	subfic r0, r4, 2
/* 8007EDB4 0007BCF4  81 6D 8E A8 */	lwz r11, __GDCurrentDL@sda21(r13)
/* 8007EDB8 0007BCF8  7C 00 00 34 */	cntlzw r0, r0
/* 8007EDBC 0007BCFC  54 63 15 BA */	rlwinm r3, r3, 2, 0x16, 0x1d
/* 8007EDC0 0007BD00  54 00 E5 FC */	rlwinm r0, r0, 0x1c, 0x17, 0x1e
/* 8007EDC4 0007BD04  54 C6 28 34 */	slwi r6, r6, 5
/* 8007EDC8 0007BD08  7C 08 43 78 */	or r8, r0, r8
/* 8007EDCC 0007BD0C  7D 3E 00 34 */	cntlzw r30, r9
/* 8007EDD0 0007BD10  7C 68 43 78 */	or r8, r3, r8
/* 8007EDD4 0007BD14  81 4B 00 08 */	lwz r10, 8(r11)
/* 8007EDD8 0007BD18  7C CC 43 78 */	or r12, r6, r8
/* 8007EDDC 0007BD1C  54 A5 40 2E */	slwi r5, r5, 8
/* 8007EDE0 0007BD20  57 C8 33 68 */	rlwinm r8, r30, 6, 0xd, 0x14
/* 8007EDE4 0007BD24  39 2A 00 01 */	addi r9, r10, 1
/* 8007EDE8 0007BD28  7C AC 63 78 */	or r12, r5, r12
/* 8007EDEC 0007BD2C  54 E7 60 26 */	slwi r7, r7, 0xc
/* 8007EDF0 0007BD30  7D 0C 63 78 */	or r12, r8, r12
/* 8007EDF4 0007BD34  91 2B 00 08 */	stw r9, 8(r11)
/* 8007EDF8 0007BD38  7C E9 63 78 */	or r9, r7, r12
/* 8007EDFC 0007BD3C  2C 04 00 01 */	cmpwi r4, 1
/* 8007EE00 0007BD40  65 29 41 00 */	oris r9, r9, 0x4100
/* 8007EE04 0007BD44  55 29 46 3E */	srwi r9, r9, 0x18
/* 8007EE08 0007BD48  99 2A 00 00 */	stb r9, 0(r10)
/* 8007EE0C 0007BD4C  39 20 00 00 */	li r9, 0
/* 8007EE10 0007BD50  41 82 00 0C */	beq .L_8007EE1C
/* 8007EE14 0007BD54  2C 04 00 03 */	cmpwi r4, 3
/* 8007EE18 0007BD58  40 82 00 08 */	bne .L_8007EE20
.L_8007EE1C:
/* 8007EE1C 0007BD5C  39 20 00 01 */	li r9, 1
.L_8007EE20:
/* 8007EE20 0007BD60  55 29 06 3E */	clrlwi r9, r9, 0x18
/* 8007EE24 0007BD64  81 8D 8E A8 */	lwz r12, __GDCurrentDL@sda21(r13)
/* 8007EE28 0007BD68  7C 09 4B 78 */	or r9, r0, r9
/* 8007EE2C 0007BD6C  2C 04 00 01 */	cmpwi r4, 1
/* 8007EE30 0007BD70  7C 69 4B 78 */	or r9, r3, r9
/* 8007EE34 0007BD74  81 6C 00 08 */	lwz r11, 8(r12)
/* 8007EE38 0007BD78  7C CA 4B 78 */	or r10, r6, r9
/* 8007EE3C 0007BD7C  39 20 00 00 */	li r9, 0
/* 8007EE40 0007BD80  7C BE 53 78 */	or r30, r5, r10
/* 8007EE44 0007BD84  39 4B 00 01 */	addi r10, r11, 1
/* 8007EE48 0007BD88  7D 1E F3 78 */	or r30, r8, r30
/* 8007EE4C 0007BD8C  91 4C 00 08 */	stw r10, 8(r12)
/* 8007EE50 0007BD90  7C EA F3 78 */	or r10, r7, r30
/* 8007EE54 0007BD94  65 4A 41 00 */	oris r10, r10, 0x4100
/* 8007EE58 0007BD98  55 4A 86 3E */	rlwinm r10, r10, 0x10, 0x18, 0x1f
/* 8007EE5C 0007BD9C  99 4B 00 00 */	stb r10, 0(r11)
/* 8007EE60 0007BDA0  41 82 00 0C */	beq .L_8007EE6C
/* 8007EE64 0007BDA4  2C 04 00 03 */	cmpwi r4, 3
/* 8007EE68 0007BDA8  40 82 00 08 */	bne .L_8007EE70
.L_8007EE6C:
/* 8007EE6C 0007BDAC  39 20 00 01 */	li r9, 1
.L_8007EE70:
/* 8007EE70 0007BDB0  55 29 06 3E */	clrlwi r9, r9, 0x18
/* 8007EE74 0007BDB4  81 8D 8E A8 */	lwz r12, __GDCurrentDL@sda21(r13)
/* 8007EE78 0007BDB8  7C 09 4B 78 */	or r9, r0, r9
/* 8007EE7C 0007BDBC  2C 04 00 01 */	cmpwi r4, 1
/* 8007EE80 0007BDC0  7C 69 4B 78 */	or r9, r3, r9
/* 8007EE84 0007BDC4  81 6C 00 08 */	lwz r11, 8(r12)
/* 8007EE88 0007BDC8  7C CA 4B 78 */	or r10, r6, r9
/* 8007EE8C 0007BDCC  39 20 00 00 */	li r9, 0
/* 8007EE90 0007BDD0  7C BE 53 78 */	or r30, r5, r10
/* 8007EE94 0007BDD4  39 4B 00 01 */	addi r10, r11, 1
/* 8007EE98 0007BDD8  7D 1E F3 78 */	or r30, r8, r30
/* 8007EE9C 0007BDDC  91 4C 00 08 */	stw r10, 8(r12)
/* 8007EEA0 0007BDE0  7C EA F3 78 */	or r10, r7, r30
/* 8007EEA4 0007BDE4  65 4A 41 00 */	oris r10, r10, 0x4100
/* 8007EEA8 0007BDE8  55 4A C6 3E */	rlwinm r10, r10, 0x18, 0x18, 0x1f
/* 8007EEAC 0007BDEC  99 4B 00 00 */	stb r10, 0(r11)
/* 8007EEB0 0007BDF0  41 82 00 0C */	beq .L_8007EEBC
/* 8007EEB4 0007BDF4  2C 04 00 03 */	cmpwi r4, 3
/* 8007EEB8 0007BDF8  40 82 00 08 */	bne .L_8007EEC0
.L_8007EEBC:
/* 8007EEBC 0007BDFC  39 20 00 01 */	li r9, 1
.L_8007EEC0:
/* 8007EEC0 0007BE00  7C 00 4B 78 */	or r0, r0, r9
/* 8007EEC4 0007BE04  81 4D 8E A8 */	lwz r10, __GDCurrentDL@sda21(r13)
/* 8007EEC8 0007BE08  7C 60 03 78 */	or r0, r3, r0
/* 8007EECC 0007BE0C  3C 60 80 51 */	lis r3, j3dZModeTable@ha
/* 8007EED0 0007BE10  7C C0 03 78 */	or r0, r6, r0
/* 8007EED4 0007BE14  80 8A 00 08 */	lwz r4, 8(r10)
/* 8007EED8 0007BE18  7C A0 03 78 */	or r0, r5, r0
/* 8007EEDC 0007BE1C  39 23 20 94 */	addi r9, r3, j3dZModeTable@l
/* 8007EEE0 0007BE20  7D 03 03 78 */	or r3, r8, r0
/* 8007EEE4 0007BE24  38 C0 00 61 */	li r6, 0x61
/* 8007EEE8 0007BE28  38 04 00 01 */	addi r0, r4, 1
/* 8007EEEC 0007BE2C  7C E3 1B 78 */	or r3, r7, r3
/* 8007EEF0 0007BE30  90 0A 00 08 */	stw r0, 8(r10)
/* 8007EEF4 0007BE34  60 60 00 00 */	ori r0, r3, 0
/* 8007EEF8 0007BE38  98 04 00 00 */	stb r0, 0(r4)
/* 8007EEFC 0007BE3C  A0 1F 00 0C */	lhz r0, 0xc(r31)
/* 8007EF00 0007BE40  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 8007EF04 0007BE44  1C 00 00 03 */	mulli r0, r0, 3
/* 8007EF08 0007BE48  80 85 00 08 */	lwz r4, 8(r5)
/* 8007EF0C 0007BE4C  7C 69 02 14 */	add r3, r9, r0
/* 8007EF10 0007BE50  7D 29 00 AE */	lbzx r9, r9, r0
/* 8007EF14 0007BE54  89 03 00 02 */	lbz r8, 2(r3)
/* 8007EF18 0007BE58  38 04 00 01 */	addi r0, r4, 1
/* 8007EF1C 0007BE5C  88 E3 00 01 */	lbz r7, 1(r3)
/* 8007EF20 0007BE60  55 03 25 36 */	rlwinm r3, r8, 4, 0x14, 0x1b
/* 8007EF24 0007BE64  90 05 00 08 */	stw r0, 8(r5)
/* 8007EF28 0007BE68  54 E0 08 3C */	slwi r0, r7, 1
/* 8007EF2C 0007BE6C  7D 20 03 78 */	or r0, r9, r0
/* 8007EF30 0007BE70  98 C4 00 00 */	stb r6, 0(r4)
/* 8007EF34 0007BE74  7C 60 03 78 */	or r0, r3, r0
/* 8007EF38 0007BE78  64 08 40 00 */	oris r8, r0, 0x4000
/* 8007EF3C 0007BE7C  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 8007EF40 0007BE80  55 07 46 3E */	srwi r7, r8, 0x18
/* 8007EF44 0007BE84  55 06 86 3E */	rlwinm r6, r8, 0x10, 0x18, 0x1f
/* 8007EF48 0007BE88  55 05 C6 3E */	rlwinm r5, r8, 0x18, 0x18, 0x1f
/* 8007EF4C 0007BE8C  80 64 00 08 */	lwz r3, 8(r4)
/* 8007EF50 0007BE90  38 03 00 01 */	addi r0, r3, 1
/* 8007EF54 0007BE94  90 04 00 08 */	stw r0, 8(r4)
/* 8007EF58 0007BE98  98 E3 00 00 */	stb r7, 0(r3)
/* 8007EF5C 0007BE9C  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 8007EF60 0007BEA0  80 64 00 08 */	lwz r3, 8(r4)
/* 8007EF64 0007BEA4  38 03 00 01 */	addi r0, r3, 1
/* 8007EF68 0007BEA8  90 04 00 08 */	stw r0, 8(r4)
/* 8007EF6C 0007BEAC  98 C3 00 00 */	stb r6, 0(r3)
/* 8007EF70 0007BEB0  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 8007EF74 0007BEB4  80 64 00 08 */	lwz r3, 8(r4)
/* 8007EF78 0007BEB8  38 03 00 01 */	addi r0, r3, 1
/* 8007EF7C 0007BEBC  90 04 00 08 */	stw r0, 8(r4)
/* 8007EF80 0007BEC0  98 A3 00 00 */	stb r5, 0(r3)
/* 8007EF84 0007BEC4  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 8007EF88 0007BEC8  80 64 00 08 */	lwz r3, 8(r4)
/* 8007EF8C 0007BECC  38 03 00 01 */	addi r0, r3, 1
/* 8007EF90 0007BED0  90 04 00 08 */	stw r0, 8(r4)
/* 8007EF94 0007BED4  99 03 00 00 */	stb r8, 0(r3)
/* 8007EF98 0007BED8  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8007EF9C 0007BEDC  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8007EFA0 0007BEE0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8007EFA4 0007BEE4  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8007EFA8 0007BEE8  7C 08 03 A6 */	mtlr r0
/* 8007EFAC 0007BEEC  38 21 00 20 */	addi r1, r1, 0x20
/* 8007EFB0 0007BEF0  4E 80 00 20 */	blr 
.endfn diffBlend__16J3DPEBlockFogOffFv

.fn load__14J3DPEBlockFullFv, global
/* 8007EFB4 0007BEF4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8007EFB8 0007BEF8  7C 08 02 A6 */	mflr r0
/* 8007EFBC 0007BEFC  90 01 00 24 */	stw r0, 0x24(r1)
/* 8007EFC0 0007BF00  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8007EFC4 0007BF04  7C 7F 1B 78 */	mr r31, r3
/* 8007EFC8 0007BF08  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8007EFCC 0007BF0C  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8007EFD0 0007BF10  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 8007EFD4 0007BF14  80 64 00 00 */	lwz r3, 0(r4)
/* 8007EFD8 0007BF18  80 04 00 08 */	lwz r0, 8(r4)
/* 8007EFDC 0007BF1C  7C 03 00 50 */	subf r0, r3, r0
/* 8007EFE0 0007BF20  90 1F 00 3C */	stw r0, 0x3c(r31)
/* 8007EFE4 0007BF24  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 8007EFE8 0007BF28  80 64 00 08 */	lwz r3, 8(r4)
/* 8007EFEC 0007BF2C  80 04 00 0C */	lwz r0, 0xc(r4)
/* 8007EFF0 0007BF30  38 63 00 55 */	addi r3, r3, 0x55
/* 8007EFF4 0007BF34  7C 03 00 40 */	cmplw r3, r0
/* 8007EFF8 0007BF38  40 81 00 08 */	ble .L_8007F000
/* 8007EFFC 0007BF3C  48 06 2C 45 */	bl GDOverflowed
.L_8007F000:
/* 8007F000 0007BF40  80 1F 00 18 */	lwz r0, 0x18(r31)
/* 8007F004 0007BF44  38 81 00 08 */	addi r4, r1, 8
/* 8007F008 0007BF48  90 01 00 08 */	stw r0, 8(r1)
/* 8007F00C 0007BF4C  88 7F 00 04 */	lbz r3, 4(r31)
/* 8007F010 0007BF50  C0 3F 00 08 */	lfs f1, 8(r31)
/* 8007F014 0007BF54  C0 5F 00 0C */	lfs f2, 0xc(r31)
/* 8007F018 0007BF58  C0 7F 00 10 */	lfs f3, 0x10(r31)
/* 8007F01C 0007BF5C  C0 9F 00 14 */	lfs f4, 0x14(r31)
/* 8007F020 0007BF60  4B FF 79 FD */	bl J3DGDSetFog__F10_GXFogTypeffff8_GXColor
/* 8007F024 0007BF64  88 7F 00 05 */	lbz r3, 5(r31)
/* 8007F028 0007BF68  38 BF 00 1C */	addi r5, r31, 0x1c
/* 8007F02C 0007BF6C  A0 9F 00 06 */	lhz r4, 6(r31)
/* 8007F030 0007BF70  4B FF 7D 4D */	bl J3DGDSetFogRangeAdj__FUcUsP14_GXFogAdjTable
/* 8007F034 0007BF74  A0 1F 00 30 */	lhz r0, 0x30(r31)
/* 8007F038 0007BF78  3C 60 80 51 */	lis r3, j3dAlphaCmpTable@ha
/* 8007F03C 0007BF7C  81 0D 8E A8 */	lwz r8, __GDCurrentDL@sda21(r13)
/* 8007F040 0007BF80  38 83 1D 94 */	addi r4, r3, j3dAlphaCmpTable@l
/* 8007F044 0007BF84  1C A0 00 03 */	mulli r5, r0, 3
/* 8007F048 0007BF88  89 5F 00 33 */	lbz r10, 0x33(r31)
/* 8007F04C 0007BF8C  80 E8 00 08 */	lwz r7, 8(r8)
/* 8007F050 0007BF90  38 00 00 61 */	li r0, 0x61
/* 8007F054 0007BF94  3B A0 00 FE */	li r29, 0xfe
/* 8007F058 0007BF98  7C 64 2A 14 */	add r3, r4, r5
/* 8007F05C 0007BF9C  7D 24 28 AE */	lbzx r9, r4, r5
/* 8007F060 0007BFA0  38 A7 00 01 */	addi r5, r7, 1
/* 8007F064 0007BFA4  88 83 00 02 */	lbz r4, 2(r3)
/* 8007F068 0007BFA8  3B C0 00 00 */	li r30, 0
/* 8007F06C 0007BFAC  88 C3 00 01 */	lbz r6, 1(r3)
/* 8007F070 0007BFB0  55 43 44 2E */	rlwinm r3, r10, 8, 0x10, 0x17
/* 8007F074 0007BFB4  89 5F 00 32 */	lbz r10, 0x32(r31)
/* 8007F078 0007BFB8  54 84 98 18 */	slwi r4, r4, 0x13
/* 8007F07C 0007BFBC  54 C6 B0 12 */	slwi r6, r6, 0x16
/* 8007F080 0007BFC0  39 80 00 1F */	li r12, 0x1f
/* 8007F084 0007BFC4  90 A8 00 08 */	stw r5, 8(r8)
/* 8007F088 0007BFC8  51 43 06 3E */	rlwimi r3, r10, 0, 0x18, 0x1f
/* 8007F08C 0007BFCC  51 23 82 1E */	rlwimi r3, r9, 0x10, 8, 0xf
/* 8007F090 0007BFD0  39 60 00 E7 */	li r11, 0xe7
/* 8007F094 0007BFD4  98 07 00 00 */	stb r0, 0(r7)
/* 8007F098 0007BFD8  7C 83 1B 78 */	or r3, r4, r3
/* 8007F09C 0007BFDC  7C C3 1B 78 */	or r3, r6, r3
/* 8007F0A0 0007BFE0  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 8007F0A4 0007BFE4  64 69 F3 00 */	oris r9, r3, 0xf300
/* 8007F0A8 0007BFE8  55 28 46 3E */	srwi r8, r9, 0x18
/* 8007F0AC 0007BFEC  80 85 00 08 */	lwz r4, 8(r5)
/* 8007F0B0 0007BFF0  55 27 86 3E */	rlwinm r7, r9, 0x10, 0x18, 0x1f
/* 8007F0B4 0007BFF4  55 26 C6 3E */	rlwinm r6, r9, 0x18, 0x18, 0x1f
/* 8007F0B8 0007BFF8  38 64 00 01 */	addi r3, r4, 1
/* 8007F0BC 0007BFFC  90 65 00 08 */	stw r3, 8(r5)
/* 8007F0C0 0007C000  99 04 00 00 */	stb r8, 0(r4)
/* 8007F0C4 0007C004  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 8007F0C8 0007C008  80 85 00 08 */	lwz r4, 8(r5)
/* 8007F0CC 0007C00C  38 64 00 01 */	addi r3, r4, 1
/* 8007F0D0 0007C010  90 65 00 08 */	stw r3, 8(r5)
/* 8007F0D4 0007C014  98 E4 00 00 */	stb r7, 0(r4)
/* 8007F0D8 0007C018  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 8007F0DC 0007C01C  80 85 00 08 */	lwz r4, 8(r5)
/* 8007F0E0 0007C020  38 64 00 01 */	addi r3, r4, 1
/* 8007F0E4 0007C024  90 65 00 08 */	stw r3, 8(r5)
/* 8007F0E8 0007C028  98 C4 00 00 */	stb r6, 0(r4)
/* 8007F0EC 0007C02C  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 8007F0F0 0007C030  80 85 00 08 */	lwz r4, 8(r5)
/* 8007F0F4 0007C034  38 64 00 01 */	addi r3, r4, 1
/* 8007F0F8 0007C038  90 65 00 08 */	stw r3, 8(r5)
/* 8007F0FC 0007C03C  99 24 00 00 */	stb r9, 0(r4)
/* 8007F100 0007C040  81 4D 8E A8 */	lwz r10, __GDCurrentDL@sda21(r13)
/* 8007F104 0007C044  88 9F 00 34 */	lbz r4, 0x34(r31)
/* 8007F108 0007C048  81 2A 00 08 */	lwz r9, 8(r10)
/* 8007F10C 0007C04C  88 7F 00 3B */	lbz r3, 0x3b(r31)
/* 8007F110 0007C050  2C 04 00 01 */	cmpwi r4, 1
/* 8007F114 0007C054  88 FF 00 37 */	lbz r7, 0x37(r31)
/* 8007F118 0007C058  39 09 00 01 */	addi r8, r9, 1
/* 8007F11C 0007C05C  88 DF 00 36 */	lbz r6, 0x36(r31)
/* 8007F120 0007C060  88 BF 00 35 */	lbz r5, 0x35(r31)
/* 8007F124 0007C064  91 0A 00 08 */	stw r8, 8(r10)
/* 8007F128 0007C068  98 09 00 00 */	stb r0, 0(r9)
/* 8007F12C 0007C06C  81 4D 8E A8 */	lwz r10, __GDCurrentDL@sda21(r13)
/* 8007F130 0007C070  81 2A 00 08 */	lwz r9, 8(r10)
/* 8007F134 0007C074  39 09 00 01 */	addi r8, r9, 1
/* 8007F138 0007C078  91 0A 00 08 */	stw r8, 8(r10)
/* 8007F13C 0007C07C  9B A9 00 00 */	stb r29, 0(r9)
/* 8007F140 0007C080  81 4D 8E A8 */	lwz r10, __GDCurrentDL@sda21(r13)
/* 8007F144 0007C084  81 2A 00 08 */	lwz r9, 8(r10)
/* 8007F148 0007C088  39 09 00 01 */	addi r8, r9, 1
/* 8007F14C 0007C08C  91 0A 00 08 */	stw r8, 8(r10)
/* 8007F150 0007C090  9B C9 00 00 */	stb r30, 0(r9)
/* 8007F154 0007C094  81 4D 8E A8 */	lwz r10, __GDCurrentDL@sda21(r13)
/* 8007F158 0007C098  81 2A 00 08 */	lwz r9, 8(r10)
/* 8007F15C 0007C09C  39 09 00 01 */	addi r8, r9, 1
/* 8007F160 0007C0A0  91 0A 00 08 */	stw r8, 8(r10)
/* 8007F164 0007C0A4  99 89 00 00 */	stb r12, 0(r9)
/* 8007F168 0007C0A8  81 4D 8E A8 */	lwz r10, __GDCurrentDL@sda21(r13)
/* 8007F16C 0007C0AC  81 2A 00 08 */	lwz r9, 8(r10)
/* 8007F170 0007C0B0  39 09 00 01 */	addi r8, r9, 1
/* 8007F174 0007C0B4  91 0A 00 08 */	stw r8, 8(r10)
/* 8007F178 0007C0B8  99 69 00 00 */	stb r11, 0(r9)
/* 8007F17C 0007C0BC  81 4D 8E A8 */	lwz r10, __GDCurrentDL@sda21(r13)
/* 8007F180 0007C0C0  81 2A 00 08 */	lwz r9, 8(r10)
/* 8007F184 0007C0C4  39 09 00 01 */	addi r8, r9, 1
/* 8007F188 0007C0C8  91 0A 00 08 */	stw r8, 8(r10)
/* 8007F18C 0007C0CC  98 09 00 00 */	stb r0, 0(r9)
/* 8007F190 0007C0D0  41 82 00 0C */	beq .L_8007F19C
/* 8007F194 0007C0D4  2C 04 00 03 */	cmpwi r4, 3
/* 8007F198 0007C0D8  40 82 00 08 */	bne .L_8007F1A0
.L_8007F19C:
/* 8007F19C 0007C0DC  3B C0 00 01 */	li r30, 1
.L_8007F1A0:
/* 8007F1A0 0007C0E0  21 24 00 03 */	subfic r9, r4, 3
/* 8007F1A4 0007C0E4  57 C8 06 3E */	clrlwi r8, r30, 0x18
/* 8007F1A8 0007C0E8  20 04 00 02 */	subfic r0, r4, 2
/* 8007F1AC 0007C0EC  81 6D 8E A8 */	lwz r11, __GDCurrentDL@sda21(r13)
/* 8007F1B0 0007C0F0  7C 00 00 34 */	cntlzw r0, r0
/* 8007F1B4 0007C0F4  54 63 15 BA */	rlwinm r3, r3, 2, 0x16, 0x1d
/* 8007F1B8 0007C0F8  54 00 E5 FC */	rlwinm r0, r0, 0x1c, 0x17, 0x1e
/* 8007F1BC 0007C0FC  54 C6 28 34 */	slwi r6, r6, 5
/* 8007F1C0 0007C100  7C 08 43 78 */	or r8, r0, r8
/* 8007F1C4 0007C104  7D 3E 00 34 */	cntlzw r30, r9
/* 8007F1C8 0007C108  7C 68 43 78 */	or r8, r3, r8
/* 8007F1CC 0007C10C  81 4B 00 08 */	lwz r10, 8(r11)
/* 8007F1D0 0007C110  7C CC 43 78 */	or r12, r6, r8
/* 8007F1D4 0007C114  54 A5 40 2E */	slwi r5, r5, 8
/* 8007F1D8 0007C118  57 C8 33 68 */	rlwinm r8, r30, 6, 0xd, 0x14
/* 8007F1DC 0007C11C  39 2A 00 01 */	addi r9, r10, 1
/* 8007F1E0 0007C120  7C AC 63 78 */	or r12, r5, r12
/* 8007F1E4 0007C124  54 E7 60 26 */	slwi r7, r7, 0xc
/* 8007F1E8 0007C128  7D 0C 63 78 */	or r12, r8, r12
/* 8007F1EC 0007C12C  91 2B 00 08 */	stw r9, 8(r11)
/* 8007F1F0 0007C130  7C E9 63 78 */	or r9, r7, r12
/* 8007F1F4 0007C134  2C 04 00 01 */	cmpwi r4, 1
/* 8007F1F8 0007C138  65 29 41 00 */	oris r9, r9, 0x4100
/* 8007F1FC 0007C13C  55 29 46 3E */	srwi r9, r9, 0x18
/* 8007F200 0007C140  99 2A 00 00 */	stb r9, 0(r10)
/* 8007F204 0007C144  39 20 00 00 */	li r9, 0
/* 8007F208 0007C148  41 82 00 0C */	beq .L_8007F214
/* 8007F20C 0007C14C  2C 04 00 03 */	cmpwi r4, 3
/* 8007F210 0007C150  40 82 00 08 */	bne .L_8007F218
.L_8007F214:
/* 8007F214 0007C154  39 20 00 01 */	li r9, 1
.L_8007F218:
/* 8007F218 0007C158  55 29 06 3E */	clrlwi r9, r9, 0x18
/* 8007F21C 0007C15C  81 8D 8E A8 */	lwz r12, __GDCurrentDL@sda21(r13)
/* 8007F220 0007C160  7C 09 4B 78 */	or r9, r0, r9
/* 8007F224 0007C164  2C 04 00 01 */	cmpwi r4, 1
/* 8007F228 0007C168  7C 69 4B 78 */	or r9, r3, r9
/* 8007F22C 0007C16C  81 6C 00 08 */	lwz r11, 8(r12)
/* 8007F230 0007C170  7C CA 4B 78 */	or r10, r6, r9
/* 8007F234 0007C174  39 20 00 00 */	li r9, 0
/* 8007F238 0007C178  7C BE 53 78 */	or r30, r5, r10
/* 8007F23C 0007C17C  39 4B 00 01 */	addi r10, r11, 1
/* 8007F240 0007C180  7D 1E F3 78 */	or r30, r8, r30
/* 8007F244 0007C184  91 4C 00 08 */	stw r10, 8(r12)
/* 8007F248 0007C188  7C EA F3 78 */	or r10, r7, r30
/* 8007F24C 0007C18C  65 4A 41 00 */	oris r10, r10, 0x4100
/* 8007F250 0007C190  55 4A 86 3E */	rlwinm r10, r10, 0x10, 0x18, 0x1f
/* 8007F254 0007C194  99 4B 00 00 */	stb r10, 0(r11)
/* 8007F258 0007C198  41 82 00 0C */	beq .L_8007F264
/* 8007F25C 0007C19C  2C 04 00 03 */	cmpwi r4, 3
/* 8007F260 0007C1A0  40 82 00 08 */	bne .L_8007F268
.L_8007F264:
/* 8007F264 0007C1A4  39 20 00 01 */	li r9, 1
.L_8007F268:
/* 8007F268 0007C1A8  55 29 06 3E */	clrlwi r9, r9, 0x18
/* 8007F26C 0007C1AC  81 8D 8E A8 */	lwz r12, __GDCurrentDL@sda21(r13)
/* 8007F270 0007C1B0  7C 09 4B 78 */	or r9, r0, r9
/* 8007F274 0007C1B4  2C 04 00 01 */	cmpwi r4, 1
/* 8007F278 0007C1B8  7C 69 4B 78 */	or r9, r3, r9
/* 8007F27C 0007C1BC  81 6C 00 08 */	lwz r11, 8(r12)
/* 8007F280 0007C1C0  7C CA 4B 78 */	or r10, r6, r9
/* 8007F284 0007C1C4  39 20 00 00 */	li r9, 0
/* 8007F288 0007C1C8  7C BE 53 78 */	or r30, r5, r10
/* 8007F28C 0007C1CC  39 4B 00 01 */	addi r10, r11, 1
/* 8007F290 0007C1D0  7D 1E F3 78 */	or r30, r8, r30
/* 8007F294 0007C1D4  91 4C 00 08 */	stw r10, 8(r12)
/* 8007F298 0007C1D8  7C EA F3 78 */	or r10, r7, r30
/* 8007F29C 0007C1DC  65 4A 41 00 */	oris r10, r10, 0x4100
/* 8007F2A0 0007C1E0  55 4A C6 3E */	rlwinm r10, r10, 0x18, 0x18, 0x1f
/* 8007F2A4 0007C1E4  99 4B 00 00 */	stb r10, 0(r11)
/* 8007F2A8 0007C1E8  41 82 00 0C */	beq .L_8007F2B4
/* 8007F2AC 0007C1EC  2C 04 00 03 */	cmpwi r4, 3
/* 8007F2B0 0007C1F0  40 82 00 08 */	bne .L_8007F2B8
.L_8007F2B4:
/* 8007F2B4 0007C1F4  39 20 00 01 */	li r9, 1
.L_8007F2B8:
/* 8007F2B8 0007C1F8  7C 00 4B 78 */	or r0, r0, r9
/* 8007F2BC 0007C1FC  81 4D 8E A8 */	lwz r10, __GDCurrentDL@sda21(r13)
/* 8007F2C0 0007C200  7C 60 03 78 */	or r0, r3, r0
/* 8007F2C4 0007C204  3C 60 80 51 */	lis r3, j3dZModeTable@ha
/* 8007F2C8 0007C208  7C C0 03 78 */	or r0, r6, r0
/* 8007F2CC 0007C20C  80 8A 00 08 */	lwz r4, 8(r10)
/* 8007F2D0 0007C210  7C A0 03 78 */	or r0, r5, r0
/* 8007F2D4 0007C214  39 23 20 94 */	addi r9, r3, j3dZModeTable@l
/* 8007F2D8 0007C218  7D 03 03 78 */	or r3, r8, r0
/* 8007F2DC 0007C21C  38 C0 00 00 */	li r6, 0
/* 8007F2E0 0007C220  7C E3 1B 78 */	or r3, r7, r3
/* 8007F2E4 0007C224  38 04 00 01 */	addi r0, r4, 1
/* 8007F2E8 0007C228  90 0A 00 08 */	stw r0, 8(r10)
/* 8007F2EC 0007C22C  60 63 00 00 */	ori r3, r3, 0
/* 8007F2F0 0007C230  38 00 00 61 */	li r0, 0x61
/* 8007F2F4 0007C234  38 E0 00 FE */	li r7, 0xfe
/* 8007F2F8 0007C238  98 64 00 00 */	stb r3, 0(r4)
/* 8007F2FC 0007C23C  A0 7F 00 38 */	lhz r3, 0x38(r31)
/* 8007F300 0007C240  81 0D 8E A8 */	lwz r8, __GDCurrentDL@sda21(r13)
/* 8007F304 0007C244  1C 63 00 03 */	mulli r3, r3, 3
/* 8007F308 0007C248  80 A8 00 08 */	lwz r5, 8(r8)
/* 8007F30C 0007C24C  7C 89 1A 14 */	add r4, r9, r3
/* 8007F310 0007C250  7D 69 18 AE */	lbzx r11, r9, r3
/* 8007F314 0007C254  89 44 00 02 */	lbz r10, 2(r4)
/* 8007F318 0007C258  38 65 00 01 */	addi r3, r5, 1
/* 8007F31C 0007C25C  89 24 00 01 */	lbz r9, 1(r4)
/* 8007F320 0007C260  55 44 25 36 */	rlwinm r4, r10, 4, 0x14, 0x1b
/* 8007F324 0007C264  90 68 00 08 */	stw r3, 8(r8)
/* 8007F328 0007C268  55 23 08 3C */	slwi r3, r9, 1
/* 8007F32C 0007C26C  7D 63 1B 78 */	or r3, r11, r3
/* 8007F330 0007C270  98 05 00 00 */	stb r0, 0(r5)
/* 8007F334 0007C274  7C 83 1B 78 */	or r3, r4, r3
/* 8007F338 0007C278  64 6B 40 00 */	oris r11, r3, 0x4000
/* 8007F33C 0007C27C  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 8007F340 0007C280  55 6A 46 3E */	srwi r10, r11, 0x18
/* 8007F344 0007C284  55 69 86 3E */	rlwinm r9, r11, 0x10, 0x18, 0x1f
/* 8007F348 0007C288  55 68 C6 3E */	rlwinm r8, r11, 0x18, 0x18, 0x1f
/* 8007F34C 0007C28C  80 85 00 08 */	lwz r4, 8(r5)
/* 8007F350 0007C290  38 64 00 01 */	addi r3, r4, 1
/* 8007F354 0007C294  90 65 00 08 */	stw r3, 8(r5)
/* 8007F358 0007C298  99 44 00 00 */	stb r10, 0(r4)
/* 8007F35C 0007C29C  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 8007F360 0007C2A0  80 85 00 08 */	lwz r4, 8(r5)
/* 8007F364 0007C2A4  38 64 00 01 */	addi r3, r4, 1
/* 8007F368 0007C2A8  90 65 00 08 */	stw r3, 8(r5)
/* 8007F36C 0007C2AC  99 24 00 00 */	stb r9, 0(r4)
/* 8007F370 0007C2B0  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 8007F374 0007C2B4  80 85 00 08 */	lwz r4, 8(r5)
/* 8007F378 0007C2B8  38 64 00 01 */	addi r3, r4, 1
/* 8007F37C 0007C2BC  90 65 00 08 */	stw r3, 8(r5)
/* 8007F380 0007C2C0  99 04 00 00 */	stb r8, 0(r4)
/* 8007F384 0007C2C4  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 8007F388 0007C2C8  80 85 00 08 */	lwz r4, 8(r5)
/* 8007F38C 0007C2CC  38 64 00 01 */	addi r3, r4, 1
/* 8007F390 0007C2D0  90 65 00 08 */	stw r3, 8(r5)
/* 8007F394 0007C2D4  99 64 00 00 */	stb r11, 0(r4)
/* 8007F398 0007C2D8  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 8007F39C 0007C2DC  89 3F 00 3A */	lbz r9, 0x3a(r31)
/* 8007F3A0 0007C2E0  80 85 00 08 */	lwz r4, 8(r5)
/* 8007F3A4 0007C2E4  38 64 00 01 */	addi r3, r4, 1
/* 8007F3A8 0007C2E8  90 65 00 08 */	stw r3, 8(r5)
/* 8007F3AC 0007C2EC  98 04 00 00 */	stb r0, 0(r4)
/* 8007F3B0 0007C2F0  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 8007F3B4 0007C2F4  80 85 00 08 */	lwz r4, 8(r5)
/* 8007F3B8 0007C2F8  38 64 00 01 */	addi r3, r4, 1
/* 8007F3BC 0007C2FC  90 65 00 08 */	stw r3, 8(r5)
/* 8007F3C0 0007C300  98 E4 00 00 */	stb r7, 0(r4)
/* 8007F3C4 0007C304  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 8007F3C8 0007C308  80 85 00 08 */	lwz r4, 8(r5)
/* 8007F3CC 0007C30C  38 64 00 01 */	addi r3, r4, 1
/* 8007F3D0 0007C310  90 65 00 08 */	stw r3, 8(r5)
/* 8007F3D4 0007C314  98 C4 00 00 */	stb r6, 0(r4)
/* 8007F3D8 0007C318  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 8007F3DC 0007C31C  80 85 00 08 */	lwz r4, 8(r5)
/* 8007F3E0 0007C320  38 64 00 01 */	addi r3, r4, 1
/* 8007F3E4 0007C324  90 65 00 08 */	stw r3, 8(r5)
/* 8007F3E8 0007C328  98 C4 00 00 */	stb r6, 0(r4)
/* 8007F3EC 0007C32C  81 0D 8E A8 */	lwz r8, __GDCurrentDL@sda21(r13)
/* 8007F3F0 0007C330  55 23 34 B2 */	rlwinm r3, r9, 6, 0x12, 0x19
/* 8007F3F4 0007C334  64 6A 43 00 */	oris r10, r3, 0x4300
/* 8007F3F8 0007C338  39 20 00 40 */	li r9, 0x40
/* 8007F3FC 0007C33C  80 88 00 08 */	lwz r4, 8(r8)
/* 8007F400 0007C340  55 47 46 3E */	srwi r7, r10, 0x18
/* 8007F404 0007C344  55 46 86 3E */	rlwinm r6, r10, 0x10, 0x18, 0x1f
/* 8007F408 0007C348  55 45 C6 3E */	rlwinm r5, r10, 0x18, 0x18, 0x1f
/* 8007F40C 0007C34C  38 64 00 01 */	addi r3, r4, 1
/* 8007F410 0007C350  90 68 00 08 */	stw r3, 8(r8)
/* 8007F414 0007C354  99 24 00 00 */	stb r9, 0(r4)
/* 8007F418 0007C358  81 0D 8E A8 */	lwz r8, __GDCurrentDL@sda21(r13)
/* 8007F41C 0007C35C  80 88 00 08 */	lwz r4, 8(r8)
/* 8007F420 0007C360  38 64 00 01 */	addi r3, r4, 1
/* 8007F424 0007C364  90 68 00 08 */	stw r3, 8(r8)
/* 8007F428 0007C368  98 04 00 00 */	stb r0, 0(r4)
/* 8007F42C 0007C36C  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 8007F430 0007C370  80 64 00 08 */	lwz r3, 8(r4)
/* 8007F434 0007C374  38 03 00 01 */	addi r0, r3, 1
/* 8007F438 0007C378  90 04 00 08 */	stw r0, 8(r4)
/* 8007F43C 0007C37C  98 E3 00 00 */	stb r7, 0(r3)
/* 8007F440 0007C380  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 8007F444 0007C384  80 64 00 08 */	lwz r3, 8(r4)
/* 8007F448 0007C388  38 03 00 01 */	addi r0, r3, 1
/* 8007F44C 0007C38C  90 04 00 08 */	stw r0, 8(r4)
/* 8007F450 0007C390  98 C3 00 00 */	stb r6, 0(r3)
/* 8007F454 0007C394  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 8007F458 0007C398  80 64 00 08 */	lwz r3, 8(r4)
/* 8007F45C 0007C39C  38 03 00 01 */	addi r0, r3, 1
/* 8007F460 0007C3A0  90 04 00 08 */	stw r0, 8(r4)
/* 8007F464 0007C3A4  98 A3 00 00 */	stb r5, 0(r3)
/* 8007F468 0007C3A8  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 8007F46C 0007C3AC  80 64 00 08 */	lwz r3, 8(r4)
/* 8007F470 0007C3B0  38 03 00 01 */	addi r0, r3, 1
/* 8007F474 0007C3B4  90 04 00 08 */	stw r0, 8(r4)
/* 8007F478 0007C3B8  99 43 00 00 */	stb r10, 0(r3)
/* 8007F47C 0007C3BC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8007F480 0007C3C0  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8007F484 0007C3C4  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8007F488 0007C3C8  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8007F48C 0007C3CC  7C 08 03 A6 */	mtlr r0
/* 8007F490 0007C3D0  38 21 00 20 */	addi r1, r1, 0x20
/* 8007F494 0007C3D4  4E 80 00 20 */	blr 
.endfn load__14J3DPEBlockFullFv

.fn patch__14J3DPEBlockFullFv, global
/* 8007F498 0007C3D8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8007F49C 0007C3DC  7C 08 02 A6 */	mflr r0
/* 8007F4A0 0007C3E0  90 01 00 24 */	stw r0, 0x24(r1)
/* 8007F4A4 0007C3E4  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8007F4A8 0007C3E8  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8007F4AC 0007C3EC  7C 7E 1B 78 */	mr r30, r3
/* 8007F4B0 0007C3F0  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 8007F4B4 0007C3F4  80 03 00 3C */	lwz r0, 0x3c(r3)
/* 8007F4B8 0007C3F8  80 64 00 00 */	lwz r3, 0(r4)
/* 8007F4BC 0007C3FC  7C 03 02 14 */	add r0, r3, r0
/* 8007F4C0 0007C400  90 04 00 08 */	stw r0, 8(r4)
/* 8007F4C4 0007C404  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 8007F4C8 0007C408  80 64 00 08 */	lwz r3, 8(r4)
/* 8007F4CC 0007C40C  80 04 00 0C */	lwz r0, 0xc(r4)
/* 8007F4D0 0007C410  38 63 00 37 */	addi r3, r3, 0x37
/* 8007F4D4 0007C414  7C 03 00 40 */	cmplw r3, r0
/* 8007F4D8 0007C418  40 81 00 08 */	ble .L_8007F4E0
/* 8007F4DC 0007C41C  48 06 27 65 */	bl GDOverflowed
.L_8007F4E0:
/* 8007F4E0 0007C420  80 6D 8E A8 */	lwz r3, __GDCurrentDL@sda21(r13)
/* 8007F4E4 0007C424  38 81 00 08 */	addi r4, r1, 8
/* 8007F4E8 0007C428  80 1E 00 18 */	lwz r0, 0x18(r30)
/* 8007F4EC 0007C42C  83 E3 00 08 */	lwz r31, 8(r3)
/* 8007F4F0 0007C430  90 01 00 08 */	stw r0, 8(r1)
/* 8007F4F4 0007C434  88 7E 00 04 */	lbz r3, 4(r30)
/* 8007F4F8 0007C438  C0 3E 00 08 */	lfs f1, 8(r30)
/* 8007F4FC 0007C43C  C0 5E 00 0C */	lfs f2, 0xc(r30)
/* 8007F500 0007C440  C0 7E 00 10 */	lfs f3, 0x10(r30)
/* 8007F504 0007C444  C0 9E 00 14 */	lfs f4, 0x14(r30)
/* 8007F508 0007C448  4B FF 75 15 */	bl J3DGDSetFog__F10_GXFogTypeffff8_GXColor
/* 8007F50C 0007C44C  88 7E 00 05 */	lbz r3, 5(r30)
/* 8007F510 0007C450  38 BE 00 1C */	addi r5, r30, 0x1c
/* 8007F514 0007C454  A0 9E 00 06 */	lhz r4, 6(r30)
/* 8007F518 0007C458  4B FF 78 65 */	bl J3DGDSetFogRangeAdj__FUcUsP14_GXFogAdjTable
/* 8007F51C 0007C45C  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 8007F520 0007C460  7F E3 FB 78 */	mr r3, r31
/* 8007F524 0007C464  80 04 00 08 */	lwz r0, 8(r4)
/* 8007F528 0007C468  7C 9F 00 50 */	subf r4, r31, r0
/* 8007F52C 0007C46C  48 06 D2 1D */	bl DCStoreRange
/* 8007F530 0007C470  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8007F534 0007C474  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8007F538 0007C478  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8007F53C 0007C47C  7C 08 03 A6 */	mtlr r0
/* 8007F540 0007C480  38 21 00 20 */	addi r1, r1, 0x20
/* 8007F544 0007C484  4E 80 00 20 */	blr 
.endfn patch__14J3DPEBlockFullFv

.fn diffFog__14J3DPEBlockFullFv, global
/* 8007F548 0007C488  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8007F54C 0007C48C  7C 08 02 A6 */	mflr r0
/* 8007F550 0007C490  90 01 00 24 */	stw r0, 0x24(r1)
/* 8007F554 0007C494  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8007F558 0007C498  7C 7F 1B 78 */	mr r31, r3
/* 8007F55C 0007C49C  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 8007F560 0007C4A0  80 64 00 08 */	lwz r3, 8(r4)
/* 8007F564 0007C4A4  80 04 00 0C */	lwz r0, 0xc(r4)
/* 8007F568 0007C4A8  38 63 00 37 */	addi r3, r3, 0x37
/* 8007F56C 0007C4AC  7C 03 00 40 */	cmplw r3, r0
/* 8007F570 0007C4B0  40 81 00 08 */	ble .L_8007F578
/* 8007F574 0007C4B4  48 06 26 CD */	bl GDOverflowed
.L_8007F578:
/* 8007F578 0007C4B8  80 1F 00 18 */	lwz r0, 0x18(r31)
/* 8007F57C 0007C4BC  38 81 00 08 */	addi r4, r1, 8
/* 8007F580 0007C4C0  90 01 00 08 */	stw r0, 8(r1)
/* 8007F584 0007C4C4  88 7F 00 04 */	lbz r3, 4(r31)
/* 8007F588 0007C4C8  C0 3F 00 08 */	lfs f1, 8(r31)
/* 8007F58C 0007C4CC  C0 5F 00 0C */	lfs f2, 0xc(r31)
/* 8007F590 0007C4D0  C0 7F 00 10 */	lfs f3, 0x10(r31)
/* 8007F594 0007C4D4  C0 9F 00 14 */	lfs f4, 0x14(r31)
/* 8007F598 0007C4D8  4B FF 74 85 */	bl J3DGDSetFog__F10_GXFogTypeffff8_GXColor
/* 8007F59C 0007C4DC  88 7F 00 05 */	lbz r3, 5(r31)
/* 8007F5A0 0007C4E0  38 BF 00 1C */	addi r5, r31, 0x1c
/* 8007F5A4 0007C4E4  A0 9F 00 06 */	lhz r4, 6(r31)
/* 8007F5A8 0007C4E8  4B FF 77 D5 */	bl J3DGDSetFogRangeAdj__FUcUsP14_GXFogAdjTable
/* 8007F5AC 0007C4EC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8007F5B0 0007C4F0  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8007F5B4 0007C4F4  7C 08 03 A6 */	mtlr r0
/* 8007F5B8 0007C4F8  38 21 00 20 */	addi r1, r1, 0x20
/* 8007F5BC 0007C4FC  4E 80 00 20 */	blr 
.endfn diffFog__14J3DPEBlockFullFv

.fn diffBlend__14J3DPEBlockFullFv, global
/* 8007F5C0 0007C500  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8007F5C4 0007C504  7C 08 02 A6 */	mflr r0
/* 8007F5C8 0007C508  90 01 00 24 */	stw r0, 0x24(r1)
/* 8007F5CC 0007C50C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8007F5D0 0007C510  7C 7F 1B 78 */	mr r31, r3
/* 8007F5D4 0007C514  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8007F5D8 0007C518  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8007F5DC 0007C51C  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 8007F5E0 0007C520  80 64 00 08 */	lwz r3, 8(r4)
/* 8007F5E4 0007C524  80 04 00 0C */	lwz r0, 0xc(r4)
/* 8007F5E8 0007C528  38 63 00 0F */	addi r3, r3, 0xf
/* 8007F5EC 0007C52C  7C 03 00 40 */	cmplw r3, r0
/* 8007F5F0 0007C530  40 81 00 08 */	ble .L_8007F5F8
/* 8007F5F4 0007C534  48 06 26 4D */	bl GDOverflowed
.L_8007F5F8:
/* 8007F5F8 0007C538  81 4D 8E A8 */	lwz r10, __GDCurrentDL@sda21(r13)
/* 8007F5FC 0007C53C  38 00 00 61 */	li r0, 0x61
/* 8007F600 0007C540  88 9F 00 34 */	lbz r4, 0x34(r31)
/* 8007F604 0007C544  3B A0 00 FE */	li r29, 0xfe
/* 8007F608 0007C548  81 2A 00 08 */	lwz r9, 8(r10)
/* 8007F60C 0007C54C  3B C0 00 00 */	li r30, 0
/* 8007F610 0007C550  88 7F 00 3B */	lbz r3, 0x3b(r31)
/* 8007F614 0007C554  39 80 00 1F */	li r12, 0x1f
/* 8007F618 0007C558  88 FF 00 37 */	lbz r7, 0x37(r31)
/* 8007F61C 0007C55C  39 09 00 01 */	addi r8, r9, 1
/* 8007F620 0007C560  88 DF 00 36 */	lbz r6, 0x36(r31)
/* 8007F624 0007C564  39 60 00 E7 */	li r11, 0xe7
/* 8007F628 0007C568  88 BF 00 35 */	lbz r5, 0x35(r31)
/* 8007F62C 0007C56C  2C 04 00 01 */	cmpwi r4, 1
/* 8007F630 0007C570  91 0A 00 08 */	stw r8, 8(r10)
/* 8007F634 0007C574  98 09 00 00 */	stb r0, 0(r9)
/* 8007F638 0007C578  81 4D 8E A8 */	lwz r10, __GDCurrentDL@sda21(r13)
/* 8007F63C 0007C57C  81 2A 00 08 */	lwz r9, 8(r10)
/* 8007F640 0007C580  39 09 00 01 */	addi r8, r9, 1
/* 8007F644 0007C584  91 0A 00 08 */	stw r8, 8(r10)
/* 8007F648 0007C588  9B A9 00 00 */	stb r29, 0(r9)
/* 8007F64C 0007C58C  81 4D 8E A8 */	lwz r10, __GDCurrentDL@sda21(r13)
/* 8007F650 0007C590  81 2A 00 08 */	lwz r9, 8(r10)
/* 8007F654 0007C594  39 09 00 01 */	addi r8, r9, 1
/* 8007F658 0007C598  91 0A 00 08 */	stw r8, 8(r10)
/* 8007F65C 0007C59C  9B C9 00 00 */	stb r30, 0(r9)
/* 8007F660 0007C5A0  81 4D 8E A8 */	lwz r10, __GDCurrentDL@sda21(r13)
/* 8007F664 0007C5A4  81 2A 00 08 */	lwz r9, 8(r10)
/* 8007F668 0007C5A8  39 09 00 01 */	addi r8, r9, 1
/* 8007F66C 0007C5AC  91 0A 00 08 */	stw r8, 8(r10)
/* 8007F670 0007C5B0  99 89 00 00 */	stb r12, 0(r9)
/* 8007F674 0007C5B4  81 4D 8E A8 */	lwz r10, __GDCurrentDL@sda21(r13)
/* 8007F678 0007C5B8  81 2A 00 08 */	lwz r9, 8(r10)
/* 8007F67C 0007C5BC  39 09 00 01 */	addi r8, r9, 1
/* 8007F680 0007C5C0  91 0A 00 08 */	stw r8, 8(r10)
/* 8007F684 0007C5C4  99 69 00 00 */	stb r11, 0(r9)
/* 8007F688 0007C5C8  81 4D 8E A8 */	lwz r10, __GDCurrentDL@sda21(r13)
/* 8007F68C 0007C5CC  81 2A 00 08 */	lwz r9, 8(r10)
/* 8007F690 0007C5D0  39 09 00 01 */	addi r8, r9, 1
/* 8007F694 0007C5D4  91 0A 00 08 */	stw r8, 8(r10)
/* 8007F698 0007C5D8  98 09 00 00 */	stb r0, 0(r9)
/* 8007F69C 0007C5DC  41 82 00 0C */	beq .L_8007F6A8
/* 8007F6A0 0007C5E0  2C 04 00 03 */	cmpwi r4, 3
/* 8007F6A4 0007C5E4  40 82 00 08 */	bne .L_8007F6AC
.L_8007F6A8:
/* 8007F6A8 0007C5E8  3B C0 00 01 */	li r30, 1
.L_8007F6AC:
/* 8007F6AC 0007C5EC  21 24 00 03 */	subfic r9, r4, 3
/* 8007F6B0 0007C5F0  57 C8 06 3E */	clrlwi r8, r30, 0x18
/* 8007F6B4 0007C5F4  20 04 00 02 */	subfic r0, r4, 2
/* 8007F6B8 0007C5F8  81 6D 8E A8 */	lwz r11, __GDCurrentDL@sda21(r13)
/* 8007F6BC 0007C5FC  7C 00 00 34 */	cntlzw r0, r0
/* 8007F6C0 0007C600  54 63 15 BA */	rlwinm r3, r3, 2, 0x16, 0x1d
/* 8007F6C4 0007C604  54 00 E5 FC */	rlwinm r0, r0, 0x1c, 0x17, 0x1e
/* 8007F6C8 0007C608  54 C6 28 34 */	slwi r6, r6, 5
/* 8007F6CC 0007C60C  7C 08 43 78 */	or r8, r0, r8
/* 8007F6D0 0007C610  7D 3E 00 34 */	cntlzw r30, r9
/* 8007F6D4 0007C614  7C 68 43 78 */	or r8, r3, r8
/* 8007F6D8 0007C618  81 4B 00 08 */	lwz r10, 8(r11)
/* 8007F6DC 0007C61C  7C CC 43 78 */	or r12, r6, r8
/* 8007F6E0 0007C620  54 A5 40 2E */	slwi r5, r5, 8
/* 8007F6E4 0007C624  57 C8 33 68 */	rlwinm r8, r30, 6, 0xd, 0x14
/* 8007F6E8 0007C628  39 2A 00 01 */	addi r9, r10, 1
/* 8007F6EC 0007C62C  7C AC 63 78 */	or r12, r5, r12
/* 8007F6F0 0007C630  54 E7 60 26 */	slwi r7, r7, 0xc
/* 8007F6F4 0007C634  7D 0C 63 78 */	or r12, r8, r12
/* 8007F6F8 0007C638  91 2B 00 08 */	stw r9, 8(r11)
/* 8007F6FC 0007C63C  7C E9 63 78 */	or r9, r7, r12
/* 8007F700 0007C640  2C 04 00 01 */	cmpwi r4, 1
/* 8007F704 0007C644  65 29 41 00 */	oris r9, r9, 0x4100
/* 8007F708 0007C648  55 29 46 3E */	srwi r9, r9, 0x18
/* 8007F70C 0007C64C  99 2A 00 00 */	stb r9, 0(r10)
/* 8007F710 0007C650  39 20 00 00 */	li r9, 0
/* 8007F714 0007C654  41 82 00 0C */	beq .L_8007F720
/* 8007F718 0007C658  2C 04 00 03 */	cmpwi r4, 3
/* 8007F71C 0007C65C  40 82 00 08 */	bne .L_8007F724
.L_8007F720:
/* 8007F720 0007C660  39 20 00 01 */	li r9, 1
.L_8007F724:
/* 8007F724 0007C664  55 29 06 3E */	clrlwi r9, r9, 0x18
/* 8007F728 0007C668  81 8D 8E A8 */	lwz r12, __GDCurrentDL@sda21(r13)
/* 8007F72C 0007C66C  7C 09 4B 78 */	or r9, r0, r9
/* 8007F730 0007C670  2C 04 00 01 */	cmpwi r4, 1
/* 8007F734 0007C674  7C 69 4B 78 */	or r9, r3, r9
/* 8007F738 0007C678  81 6C 00 08 */	lwz r11, 8(r12)
/* 8007F73C 0007C67C  7C CA 4B 78 */	or r10, r6, r9
/* 8007F740 0007C680  39 20 00 00 */	li r9, 0
/* 8007F744 0007C684  7C BE 53 78 */	or r30, r5, r10
/* 8007F748 0007C688  39 4B 00 01 */	addi r10, r11, 1
/* 8007F74C 0007C68C  7D 1E F3 78 */	or r30, r8, r30
/* 8007F750 0007C690  91 4C 00 08 */	stw r10, 8(r12)
/* 8007F754 0007C694  7C EA F3 78 */	or r10, r7, r30
/* 8007F758 0007C698  65 4A 41 00 */	oris r10, r10, 0x4100
/* 8007F75C 0007C69C  55 4A 86 3E */	rlwinm r10, r10, 0x10, 0x18, 0x1f
/* 8007F760 0007C6A0  99 4B 00 00 */	stb r10, 0(r11)
/* 8007F764 0007C6A4  41 82 00 0C */	beq .L_8007F770
/* 8007F768 0007C6A8  2C 04 00 03 */	cmpwi r4, 3
/* 8007F76C 0007C6AC  40 82 00 08 */	bne .L_8007F774
.L_8007F770:
/* 8007F770 0007C6B0  39 20 00 01 */	li r9, 1
.L_8007F774:
/* 8007F774 0007C6B4  55 29 06 3E */	clrlwi r9, r9, 0x18
/* 8007F778 0007C6B8  81 8D 8E A8 */	lwz r12, __GDCurrentDL@sda21(r13)
/* 8007F77C 0007C6BC  7C 09 4B 78 */	or r9, r0, r9
/* 8007F780 0007C6C0  2C 04 00 01 */	cmpwi r4, 1
/* 8007F784 0007C6C4  7C 69 4B 78 */	or r9, r3, r9
/* 8007F788 0007C6C8  81 6C 00 08 */	lwz r11, 8(r12)
/* 8007F78C 0007C6CC  7C CA 4B 78 */	or r10, r6, r9
/* 8007F790 0007C6D0  39 20 00 00 */	li r9, 0
/* 8007F794 0007C6D4  7C BE 53 78 */	or r30, r5, r10
/* 8007F798 0007C6D8  39 4B 00 01 */	addi r10, r11, 1
/* 8007F79C 0007C6DC  7D 1E F3 78 */	or r30, r8, r30
/* 8007F7A0 0007C6E0  91 4C 00 08 */	stw r10, 8(r12)
/* 8007F7A4 0007C6E4  7C EA F3 78 */	or r10, r7, r30
/* 8007F7A8 0007C6E8  65 4A 41 00 */	oris r10, r10, 0x4100
/* 8007F7AC 0007C6EC  55 4A C6 3E */	rlwinm r10, r10, 0x18, 0x18, 0x1f
/* 8007F7B0 0007C6F0  99 4B 00 00 */	stb r10, 0(r11)
/* 8007F7B4 0007C6F4  41 82 00 0C */	beq .L_8007F7C0
/* 8007F7B8 0007C6F8  2C 04 00 03 */	cmpwi r4, 3
/* 8007F7BC 0007C6FC  40 82 00 08 */	bne .L_8007F7C4
.L_8007F7C0:
/* 8007F7C0 0007C700  39 20 00 01 */	li r9, 1
.L_8007F7C4:
/* 8007F7C4 0007C704  7C 00 4B 78 */	or r0, r0, r9
/* 8007F7C8 0007C708  81 4D 8E A8 */	lwz r10, __GDCurrentDL@sda21(r13)
/* 8007F7CC 0007C70C  7C 60 03 78 */	or r0, r3, r0
/* 8007F7D0 0007C710  3C 60 80 51 */	lis r3, j3dZModeTable@ha
/* 8007F7D4 0007C714  7C C0 03 78 */	or r0, r6, r0
/* 8007F7D8 0007C718  80 8A 00 08 */	lwz r4, 8(r10)
/* 8007F7DC 0007C71C  7C A0 03 78 */	or r0, r5, r0
/* 8007F7E0 0007C720  39 23 20 94 */	addi r9, r3, j3dZModeTable@l
/* 8007F7E4 0007C724  7D 03 03 78 */	or r3, r8, r0
/* 8007F7E8 0007C728  38 C0 00 61 */	li r6, 0x61
/* 8007F7EC 0007C72C  38 04 00 01 */	addi r0, r4, 1
/* 8007F7F0 0007C730  7C E3 1B 78 */	or r3, r7, r3
/* 8007F7F4 0007C734  90 0A 00 08 */	stw r0, 8(r10)
/* 8007F7F8 0007C738  60 60 00 00 */	ori r0, r3, 0
/* 8007F7FC 0007C73C  98 04 00 00 */	stb r0, 0(r4)
/* 8007F800 0007C740  A0 1F 00 38 */	lhz r0, 0x38(r31)
/* 8007F804 0007C744  80 AD 8E A8 */	lwz r5, __GDCurrentDL@sda21(r13)
/* 8007F808 0007C748  1C 00 00 03 */	mulli r0, r0, 3
/* 8007F80C 0007C74C  80 85 00 08 */	lwz r4, 8(r5)
/* 8007F810 0007C750  7C 69 02 14 */	add r3, r9, r0
/* 8007F814 0007C754  7D 29 00 AE */	lbzx r9, r9, r0
/* 8007F818 0007C758  89 03 00 02 */	lbz r8, 2(r3)
/* 8007F81C 0007C75C  38 04 00 01 */	addi r0, r4, 1
/* 8007F820 0007C760  88 E3 00 01 */	lbz r7, 1(r3)
/* 8007F824 0007C764  55 03 25 36 */	rlwinm r3, r8, 4, 0x14, 0x1b
/* 8007F828 0007C768  90 05 00 08 */	stw r0, 8(r5)
/* 8007F82C 0007C76C  54 E0 08 3C */	slwi r0, r7, 1
/* 8007F830 0007C770  7D 20 03 78 */	or r0, r9, r0
/* 8007F834 0007C774  98 C4 00 00 */	stb r6, 0(r4)
/* 8007F838 0007C778  7C 60 03 78 */	or r0, r3, r0
/* 8007F83C 0007C77C  64 08 40 00 */	oris r8, r0, 0x4000
/* 8007F840 0007C780  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 8007F844 0007C784  55 07 46 3E */	srwi r7, r8, 0x18
/* 8007F848 0007C788  55 06 86 3E */	rlwinm r6, r8, 0x10, 0x18, 0x1f
/* 8007F84C 0007C78C  55 05 C6 3E */	rlwinm r5, r8, 0x18, 0x18, 0x1f
/* 8007F850 0007C790  80 64 00 08 */	lwz r3, 8(r4)
/* 8007F854 0007C794  38 03 00 01 */	addi r0, r3, 1
/* 8007F858 0007C798  90 04 00 08 */	stw r0, 8(r4)
/* 8007F85C 0007C79C  98 E3 00 00 */	stb r7, 0(r3)
/* 8007F860 0007C7A0  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 8007F864 0007C7A4  80 64 00 08 */	lwz r3, 8(r4)
/* 8007F868 0007C7A8  38 03 00 01 */	addi r0, r3, 1
/* 8007F86C 0007C7AC  90 04 00 08 */	stw r0, 8(r4)
/* 8007F870 0007C7B0  98 C3 00 00 */	stb r6, 0(r3)
/* 8007F874 0007C7B4  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 8007F878 0007C7B8  80 64 00 08 */	lwz r3, 8(r4)
/* 8007F87C 0007C7BC  38 03 00 01 */	addi r0, r3, 1
/* 8007F880 0007C7C0  90 04 00 08 */	stw r0, 8(r4)
/* 8007F884 0007C7C4  98 A3 00 00 */	stb r5, 0(r3)
/* 8007F888 0007C7C8  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 8007F88C 0007C7CC  80 64 00 08 */	lwz r3, 8(r4)
/* 8007F890 0007C7D0  38 03 00 01 */	addi r0, r3, 1
/* 8007F894 0007C7D4  90 04 00 08 */	stw r0, 8(r4)
/* 8007F898 0007C7D8  99 03 00 00 */	stb r8, 0(r3)
/* 8007F89C 0007C7DC  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8007F8A0 0007C7E0  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8007F8A4 0007C7E4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8007F8A8 0007C7E8  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8007F8AC 0007C7EC  7C 08 03 A6 */	mtlr r0
/* 8007F8B0 0007C7F0  38 21 00 20 */	addi r1, r1, 0x20
/* 8007F8B4 0007C7F4  4E 80 00 20 */	blr 
.endfn diffBlend__14J3DPEBlockFullFv

.fn diff__14J3DPEBlockFullFUl, global
/* 8007F8B8 0007C7F8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8007F8BC 0007C7FC  7C 08 02 A6 */	mflr r0
/* 8007F8C0 0007C800  90 01 00 14 */	stw r0, 0x14(r1)
/* 8007F8C4 0007C804  54 80 00 C7 */	rlwinm. r0, r4, 0, 3, 3
/* 8007F8C8 0007C808  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8007F8CC 0007C80C  7C 9F 23 78 */	mr r31, r4
/* 8007F8D0 0007C810  93 C1 00 08 */	stw r30, 8(r1)
/* 8007F8D4 0007C814  7C 7E 1B 78 */	mr r30, r3
/* 8007F8D8 0007C818  41 82 00 14 */	beq .L_8007F8EC
/* 8007F8DC 0007C81C  81 83 00 00 */	lwz r12, 0(r3)
/* 8007F8E0 0007C820  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8007F8E4 0007C824  7D 89 03 A6 */	mtctr r12
/* 8007F8E8 0007C828  4E 80 04 21 */	bctrl 
.L_8007F8EC:
/* 8007F8EC 0007C82C  57 E0 00 85 */	rlwinm. r0, r31, 0, 2, 2
/* 8007F8F0 0007C830  41 82 00 18 */	beq .L_8007F908
/* 8007F8F4 0007C834  7F C3 F3 78 */	mr r3, r30
/* 8007F8F8 0007C838  81 9E 00 00 */	lwz r12, 0(r30)
/* 8007F8FC 0007C83C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8007F900 0007C840  7D 89 03 A6 */	mtctr r12
/* 8007F904 0007C844  4E 80 04 21 */	bctrl 
.L_8007F908:
/* 8007F908 0007C848  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8007F90C 0007C84C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8007F910 0007C850  83 C1 00 08 */	lwz r30, 8(r1)
/* 8007F914 0007C854  7C 08 03 A6 */	mtlr r0
/* 8007F918 0007C858  38 21 00 10 */	addi r1, r1, 0x10
/* 8007F91C 0007C85C  4E 80 00 20 */	blr 
.endfn diff__14J3DPEBlockFullFUl

.fn reset__21J3DColorBlockLightOffFP13J3DColorBlock, global
/* 8007F920 0007C860  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8007F924 0007C864  7C 08 02 A6 */	mflr r0
/* 8007F928 0007C868  90 01 00 24 */	stw r0, 0x24(r1)
/* 8007F92C 0007C86C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8007F930 0007C870  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8007F934 0007C874  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8007F938 0007C878  7C 9D 23 78 */	mr r29, r4
/* 8007F93C 0007C87C  93 81 00 10 */	stw r28, 0x10(r1)
/* 8007F940 0007C880  7C 7C 1B 78 */	mr r28, r3
/* 8007F944 0007C884  7F A3 EB 78 */	mr r3, r29
/* 8007F948 0007C888  81 9D 00 00 */	lwz r12, 0(r29)
/* 8007F94C 0007C88C  81 8C 00 50 */	lwz r12, 0x50(r12)
/* 8007F950 0007C890  7D 89 03 A6 */	mtctr r12
/* 8007F954 0007C894  4E 80 04 21 */	bctrl 
/* 8007F958 0007C898  98 7C 00 0C */	stb r3, 0xc(r28)
/* 8007F95C 0007C89C  7F 9F E3 78 */	mr r31, r28
/* 8007F960 0007C8A0  3B C0 00 00 */	li r30, 0
.L_8007F964:
/* 8007F964 0007C8A4  7F A3 EB 78 */	mr r3, r29
/* 8007F968 0007C8A8  7F C4 F3 78 */	mr r4, r30
/* 8007F96C 0007C8AC  81 9D 00 00 */	lwz r12, 0(r29)
/* 8007F970 0007C8B0  81 8C 00 38 */	lwz r12, 0x38(r12)
/* 8007F974 0007C8B4  7D 89 03 A6 */	mtctr r12
/* 8007F978 0007C8B8  4E 80 04 21 */	bctrl 
/* 8007F97C 0007C8BC  88 03 00 00 */	lbz r0, 0(r3)
/* 8007F980 0007C8C0  3B DE 00 01 */	addi r30, r30, 1
/* 8007F984 0007C8C4  28 1E 00 02 */	cmplwi r30, 2
/* 8007F988 0007C8C8  98 1F 00 04 */	stb r0, 4(r31)
/* 8007F98C 0007C8CC  88 03 00 01 */	lbz r0, 1(r3)
/* 8007F990 0007C8D0  98 1F 00 05 */	stb r0, 5(r31)
/* 8007F994 0007C8D4  88 03 00 02 */	lbz r0, 2(r3)
/* 8007F998 0007C8D8  98 1F 00 06 */	stb r0, 6(r31)
/* 8007F99C 0007C8DC  88 03 00 03 */	lbz r0, 3(r3)
/* 8007F9A0 0007C8E0  98 1F 00 07 */	stb r0, 7(r31)
/* 8007F9A4 0007C8E4  3B FF 00 04 */	addi r31, r31, 4
/* 8007F9A8 0007C8E8  41 80 FF BC */	blt .L_8007F964
/* 8007F9AC 0007C8EC  3B C0 00 00 */	li r30, 0
/* 8007F9B0 0007C8F0  7F 9F E3 78 */	mr r31, r28
.L_8007F9B4:
/* 8007F9B4 0007C8F4  7F A3 EB 78 */	mr r3, r29
/* 8007F9B8 0007C8F8  7F C4 F3 78 */	mr r4, r30
/* 8007F9BC 0007C8FC  81 9D 00 00 */	lwz r12, 0(r29)
/* 8007F9C0 0007C900  81 8C 00 5C */	lwz r12, 0x5c(r12)
/* 8007F9C4 0007C904  7D 89 03 A6 */	mtctr r12
/* 8007F9C8 0007C908  4E 80 04 21 */	bctrl 
/* 8007F9CC 0007C90C  A0 03 00 00 */	lhz r0, 0(r3)
/* 8007F9D0 0007C910  3B DE 00 01 */	addi r30, r30, 1
/* 8007F9D4 0007C914  28 1E 00 04 */	cmplwi r30, 4
/* 8007F9D8 0007C918  B0 1F 00 0E */	sth r0, 0xe(r31)
/* 8007F9DC 0007C91C  3B FF 00 02 */	addi r31, r31, 2
/* 8007F9E0 0007C920  41 80 FF D4 */	blt .L_8007F9B4
/* 8007F9E4 0007C924  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8007F9E8 0007C928  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8007F9EC 0007C92C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8007F9F0 0007C930  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8007F9F4 0007C934  83 81 00 10 */	lwz r28, 0x10(r1)
/* 8007F9F8 0007C938  7C 08 03 A6 */	mtlr r0
/* 8007F9FC 0007C93C  38 21 00 20 */	addi r1, r1, 0x20
/* 8007FA00 0007C940  4E 80 00 20 */	blr 
.endfn reset__21J3DColorBlockLightOffFP13J3DColorBlock

.fn reset__22J3DColorBlockAmbientOnFP13J3DColorBlock, global
/* 8007FA04 0007C944  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8007FA08 0007C948  7C 08 02 A6 */	mflr r0
/* 8007FA0C 0007C94C  90 01 00 24 */	stw r0, 0x24(r1)
/* 8007FA10 0007C950  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8007FA14 0007C954  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8007FA18 0007C958  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8007FA1C 0007C95C  7C 9D 23 78 */	mr r29, r4
/* 8007FA20 0007C960  93 81 00 10 */	stw r28, 0x10(r1)
/* 8007FA24 0007C964  7C 7C 1B 78 */	mr r28, r3
/* 8007FA28 0007C968  7F A3 EB 78 */	mr r3, r29
/* 8007FA2C 0007C96C  81 9D 00 00 */	lwz r12, 0(r29)
/* 8007FA30 0007C970  81 8C 00 50 */	lwz r12, 0x50(r12)
/* 8007FA34 0007C974  7D 89 03 A6 */	mtctr r12
/* 8007FA38 0007C978  4E 80 04 21 */	bctrl 
/* 8007FA3C 0007C97C  98 7C 00 0C */	stb r3, 0xc(r28)
/* 8007FA40 0007C980  7F 9F E3 78 */	mr r31, r28
/* 8007FA44 0007C984  3B C0 00 00 */	li r30, 0
.L_8007FA48:
/* 8007FA48 0007C988  7F A3 EB 78 */	mr r3, r29
/* 8007FA4C 0007C98C  7F C4 F3 78 */	mr r4, r30
/* 8007FA50 0007C990  81 9D 00 00 */	lwz r12, 0(r29)
/* 8007FA54 0007C994  81 8C 00 38 */	lwz r12, 0x38(r12)
/* 8007FA58 0007C998  7D 89 03 A6 */	mtctr r12
/* 8007FA5C 0007C99C  4E 80 04 21 */	bctrl 
/* 8007FA60 0007C9A0  88 03 00 00 */	lbz r0, 0(r3)
/* 8007FA64 0007C9A4  3B DE 00 01 */	addi r30, r30, 1
/* 8007FA68 0007C9A8  28 1E 00 02 */	cmplwi r30, 2
/* 8007FA6C 0007C9AC  98 1F 00 04 */	stb r0, 4(r31)
/* 8007FA70 0007C9B0  88 03 00 01 */	lbz r0, 1(r3)
/* 8007FA74 0007C9B4  98 1F 00 05 */	stb r0, 5(r31)
/* 8007FA78 0007C9B8  88 03 00 02 */	lbz r0, 2(r3)
/* 8007FA7C 0007C9BC  98 1F 00 06 */	stb r0, 6(r31)
/* 8007FA80 0007C9C0  88 03 00 03 */	lbz r0, 3(r3)
/* 8007FA84 0007C9C4  98 1F 00 07 */	stb r0, 7(r31)
/* 8007FA88 0007C9C8  3B FF 00 04 */	addi r31, r31, 4
/* 8007FA8C 0007C9CC  41 80 FF BC */	blt .L_8007FA48
/* 8007FA90 0007C9D0  3B C0 00 00 */	li r30, 0
/* 8007FA94 0007C9D4  7F 9F E3 78 */	mr r31, r28
.L_8007FA98:
/* 8007FA98 0007C9D8  7F A3 EB 78 */	mr r3, r29
/* 8007FA9C 0007C9DC  7F C4 F3 78 */	mr r4, r30
/* 8007FAA0 0007C9E0  81 9D 00 00 */	lwz r12, 0(r29)
/* 8007FAA4 0007C9E4  81 8C 00 5C */	lwz r12, 0x5c(r12)
/* 8007FAA8 0007C9E8  7D 89 03 A6 */	mtctr r12
/* 8007FAAC 0007C9EC  4E 80 04 21 */	bctrl 
/* 8007FAB0 0007C9F0  A0 03 00 00 */	lhz r0, 0(r3)
/* 8007FAB4 0007C9F4  3B DE 00 01 */	addi r30, r30, 1
/* 8007FAB8 0007C9F8  28 1E 00 04 */	cmplwi r30, 4
/* 8007FABC 0007C9FC  B0 1F 00 0E */	sth r0, 0xe(r31)
/* 8007FAC0 0007CA00  3B FF 00 02 */	addi r31, r31, 2
/* 8007FAC4 0007CA04  41 80 FF D4 */	blt .L_8007FA98
/* 8007FAC8 0007CA08  3B C0 00 00 */	li r30, 0
/* 8007FACC 0007CA0C  7F 9F E3 78 */	mr r31, r28
.L_8007FAD0:
/* 8007FAD0 0007CA10  7F A3 EB 78 */	mr r3, r29
/* 8007FAD4 0007CA14  7F C4 F3 78 */	mr r4, r30
/* 8007FAD8 0007CA18  81 9D 00 00 */	lwz r12, 0(r29)
/* 8007FADC 0007CA1C  81 8C 00 44 */	lwz r12, 0x44(r12)
/* 8007FAE0 0007CA20  7D 89 03 A6 */	mtctr r12
/* 8007FAE4 0007CA24  4E 80 04 21 */	bctrl 
/* 8007FAE8 0007CA28  28 03 00 00 */	cmplwi r3, 0
/* 8007FAEC 0007CA2C  41 82 00 3C */	beq .L_8007FB28
/* 8007FAF0 0007CA30  7F A3 EB 78 */	mr r3, r29
/* 8007FAF4 0007CA34  7F C4 F3 78 */	mr r4, r30
/* 8007FAF8 0007CA38  81 9D 00 00 */	lwz r12, 0(r29)
/* 8007FAFC 0007CA3C  81 8C 00 44 */	lwz r12, 0x44(r12)
/* 8007FB00 0007CA40  7D 89 03 A6 */	mtctr r12
/* 8007FB04 0007CA44  4E 80 04 21 */	bctrl 
/* 8007FB08 0007CA48  88 03 00 00 */	lbz r0, 0(r3)
/* 8007FB0C 0007CA4C  98 1F 00 20 */	stb r0, 0x20(r31)
/* 8007FB10 0007CA50  88 03 00 01 */	lbz r0, 1(r3)
/* 8007FB14 0007CA54  98 1F 00 21 */	stb r0, 0x21(r31)
/* 8007FB18 0007CA58  88 03 00 02 */	lbz r0, 2(r3)
/* 8007FB1C 0007CA5C  98 1F 00 22 */	stb r0, 0x22(r31)
/* 8007FB20 0007CA60  88 03 00 03 */	lbz r0, 3(r3)
/* 8007FB24 0007CA64  98 1F 00 23 */	stb r0, 0x23(r31)
.L_8007FB28:
/* 8007FB28 0007CA68  3B DE 00 01 */	addi r30, r30, 1
/* 8007FB2C 0007CA6C  3B FF 00 04 */	addi r31, r31, 4
/* 8007FB30 0007CA70  28 1E 00 02 */	cmplwi r30, 2
/* 8007FB34 0007CA74  41 80 FF 9C */	blt .L_8007FAD0
/* 8007FB38 0007CA78  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8007FB3C 0007CA7C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8007FB40 0007CA80  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8007FB44 0007CA84  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8007FB48 0007CA88  83 81 00 10 */	lwz r28, 0x10(r1)
/* 8007FB4C 0007CA8C  7C 08 03 A6 */	mtlr r0
/* 8007FB50 0007CA90  38 21 00 20 */	addi r1, r1, 0x20
/* 8007FB54 0007CA94  4E 80 00 20 */	blr 
.endfn reset__22J3DColorBlockAmbientOnFP13J3DColorBlock

.fn reset__20J3DColorBlockLightOnFP13J3DColorBlock, global
/* 8007FB58 0007CA98  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8007FB5C 0007CA9C  7C 08 02 A6 */	mflr r0
/* 8007FB60 0007CAA0  90 01 00 24 */	stw r0, 0x24(r1)
/* 8007FB64 0007CAA4  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8007FB68 0007CAA8  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8007FB6C 0007CAAC  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8007FB70 0007CAB0  7C 9D 23 78 */	mr r29, r4
/* 8007FB74 0007CAB4  93 81 00 10 */	stw r28, 0x10(r1)
/* 8007FB78 0007CAB8  7C 7C 1B 78 */	mr r28, r3
/* 8007FB7C 0007CABC  7F A3 EB 78 */	mr r3, r29
/* 8007FB80 0007CAC0  81 9D 00 00 */	lwz r12, 0(r29)
/* 8007FB84 0007CAC4  81 8C 00 50 */	lwz r12, 0x50(r12)
/* 8007FB88 0007CAC8  7D 89 03 A6 */	mtctr r12
/* 8007FB8C 0007CACC  4E 80 04 21 */	bctrl 
/* 8007FB90 0007CAD0  98 7C 00 14 */	stb r3, 0x14(r28)
/* 8007FB94 0007CAD4  7F 9F E3 78 */	mr r31, r28
/* 8007FB98 0007CAD8  3B C0 00 00 */	li r30, 0
.L_8007FB9C:
/* 8007FB9C 0007CADC  7F A3 EB 78 */	mr r3, r29
/* 8007FBA0 0007CAE0  7F C4 F3 78 */	mr r4, r30
/* 8007FBA4 0007CAE4  81 9D 00 00 */	lwz r12, 0(r29)
/* 8007FBA8 0007CAE8  81 8C 00 38 */	lwz r12, 0x38(r12)
/* 8007FBAC 0007CAEC  7D 89 03 A6 */	mtctr r12
/* 8007FBB0 0007CAF0  4E 80 04 21 */	bctrl 
/* 8007FBB4 0007CAF4  88 03 00 00 */	lbz r0, 0(r3)
/* 8007FBB8 0007CAF8  3B DE 00 01 */	addi r30, r30, 1
/* 8007FBBC 0007CAFC  28 1E 00 02 */	cmplwi r30, 2
/* 8007FBC0 0007CB00  98 1F 00 04 */	stb r0, 4(r31)
/* 8007FBC4 0007CB04  88 03 00 01 */	lbz r0, 1(r3)
/* 8007FBC8 0007CB08  98 1F 00 05 */	stb r0, 5(r31)
/* 8007FBCC 0007CB0C  88 03 00 02 */	lbz r0, 2(r3)
/* 8007FBD0 0007CB10  98 1F 00 06 */	stb r0, 6(r31)
/* 8007FBD4 0007CB14  88 03 00 03 */	lbz r0, 3(r3)
/* 8007FBD8 0007CB18  98 1F 00 07 */	stb r0, 7(r31)
/* 8007FBDC 0007CB1C  3B FF 00 04 */	addi r31, r31, 4
/* 8007FBE0 0007CB20  41 80 FF BC */	blt .L_8007FB9C
/* 8007FBE4 0007CB24  3B C0 00 00 */	li r30, 0
/* 8007FBE8 0007CB28  7F 9F E3 78 */	mr r31, r28
.L_8007FBEC:
/* 8007FBEC 0007CB2C  7F A3 EB 78 */	mr r3, r29
/* 8007FBF0 0007CB30  7F C4 F3 78 */	mr r4, r30
/* 8007FBF4 0007CB34  81 9D 00 00 */	lwz r12, 0(r29)
/* 8007FBF8 0007CB38  81 8C 00 5C */	lwz r12, 0x5c(r12)
/* 8007FBFC 0007CB3C  7D 89 03 A6 */	mtctr r12
/* 8007FC00 0007CB40  4E 80 04 21 */	bctrl 
/* 8007FC04 0007CB44  A0 03 00 00 */	lhz r0, 0(r3)
/* 8007FC08 0007CB48  3B DE 00 01 */	addi r30, r30, 1
/* 8007FC0C 0007CB4C  28 1E 00 04 */	cmplwi r30, 4
/* 8007FC10 0007CB50  B0 1F 00 16 */	sth r0, 0x16(r31)
/* 8007FC14 0007CB54  3B FF 00 02 */	addi r31, r31, 2
/* 8007FC18 0007CB58  41 80 FF D4 */	blt .L_8007FBEC
/* 8007FC1C 0007CB5C  3B C0 00 00 */	li r30, 0
/* 8007FC20 0007CB60  7F 9F E3 78 */	mr r31, r28
.L_8007FC24:
/* 8007FC24 0007CB64  7F A3 EB 78 */	mr r3, r29
/* 8007FC28 0007CB68  7F C4 F3 78 */	mr r4, r30
/* 8007FC2C 0007CB6C  81 9D 00 00 */	lwz r12, 0(r29)
/* 8007FC30 0007CB70  81 8C 00 44 */	lwz r12, 0x44(r12)
/* 8007FC34 0007CB74  7D 89 03 A6 */	mtctr r12
/* 8007FC38 0007CB78  4E 80 04 21 */	bctrl 
/* 8007FC3C 0007CB7C  28 03 00 00 */	cmplwi r3, 0
/* 8007FC40 0007CB80  41 82 00 3C */	beq .L_8007FC7C
/* 8007FC44 0007CB84  7F A3 EB 78 */	mr r3, r29
/* 8007FC48 0007CB88  7F C4 F3 78 */	mr r4, r30
/* 8007FC4C 0007CB8C  81 9D 00 00 */	lwz r12, 0(r29)
/* 8007FC50 0007CB90  81 8C 00 44 */	lwz r12, 0x44(r12)
/* 8007FC54 0007CB94  7D 89 03 A6 */	mtctr r12
/* 8007FC58 0007CB98  4E 80 04 21 */	bctrl 
/* 8007FC5C 0007CB9C  88 03 00 00 */	lbz r0, 0(r3)
/* 8007FC60 0007CBA0  98 1F 00 0C */	stb r0, 0xc(r31)
/* 8007FC64 0007CBA4  88 03 00 01 */	lbz r0, 1(r3)
/* 8007FC68 0007CBA8  98 1F 00 0D */	stb r0, 0xd(r31)
/* 8007FC6C 0007CBAC  88 03 00 02 */	lbz r0, 2(r3)
/* 8007FC70 0007CBB0  98 1F 00 0E */	stb r0, 0xe(r31)
/* 8007FC74 0007CBB4  88 03 00 03 */	lbz r0, 3(r3)
/* 8007FC78 0007CBB8  98 1F 00 0F */	stb r0, 0xf(r31)
.L_8007FC7C:
/* 8007FC7C 0007CBBC  3B DE 00 01 */	addi r30, r30, 1
/* 8007FC80 0007CBC0  3B FF 00 04 */	addi r31, r31, 4
/* 8007FC84 0007CBC4  28 1E 00 02 */	cmplwi r30, 2
/* 8007FC88 0007CBC8  41 80 FF 9C */	blt .L_8007FC24
/* 8007FC8C 0007CBCC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8007FC90 0007CBD0  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8007FC94 0007CBD4  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8007FC98 0007CBD8  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8007FC9C 0007CBDC  83 81 00 10 */	lwz r28, 0x10(r1)
/* 8007FCA0 0007CBE0  7C 08 03 A6 */	mtlr r0
/* 8007FCA4 0007CBE4  38 21 00 20 */	addi r1, r1, 0x20
/* 8007FCA8 0007CBE8  4E 80 00 20 */	blr 
.endfn reset__20J3DColorBlockLightOnFP13J3DColorBlock

.fn reset__21J3DTexGenBlockPatchedFP14J3DTexGenBlock, global
/* 8007FCAC 0007CBEC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8007FCB0 0007CBF0  7C 08 02 A6 */	mflr r0
/* 8007FCB4 0007CBF4  90 01 00 24 */	stw r0, 0x24(r1)
/* 8007FCB8 0007CBF8  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8007FCBC 0007CBFC  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8007FCC0 0007CC00  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8007FCC4 0007CC04  7C 9D 23 78 */	mr r29, r4
/* 8007FCC8 0007CC08  93 81 00 10 */	stw r28, 0x10(r1)
/* 8007FCCC 0007CC0C  7C 7C 1B 78 */	mr r28, r3
/* 8007FCD0 0007CC10  7F A3 EB 78 */	mr r3, r29
/* 8007FCD4 0007CC14  81 9D 00 00 */	lwz r12, 0(r29)
/* 8007FCD8 0007CC18  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 8007FCDC 0007CC1C  7D 89 03 A6 */	mtctr r12
/* 8007FCE0 0007CC20  4E 80 04 21 */	bctrl 
/* 8007FCE4 0007CC24  90 7C 00 04 */	stw r3, 4(r28)
/* 8007FCE8 0007CC28  7F 9F E3 78 */	mr r31, r28
/* 8007FCEC 0007CC2C  3B C0 00 00 */	li r30, 0
.L_8007FCF0:
/* 8007FCF0 0007CC30  7F A3 EB 78 */	mr r3, r29
/* 8007FCF4 0007CC34  7F C4 F3 78 */	mr r4, r30
/* 8007FCF8 0007CC38  81 9D 00 00 */	lwz r12, 0(r29)
/* 8007FCFC 0007CC3C  81 8C 00 48 */	lwz r12, 0x48(r12)
/* 8007FD00 0007CC40  7D 89 03 A6 */	mtctr r12
/* 8007FD04 0007CC44  4E 80 04 21 */	bctrl 
/* 8007FD08 0007CC48  88 03 00 00 */	lbz r0, 0(r3)
/* 8007FD0C 0007CC4C  3B DE 00 01 */	addi r30, r30, 1
/* 8007FD10 0007CC50  28 1E 00 08 */	cmplwi r30, 8
/* 8007FD14 0007CC54  98 1F 00 08 */	stb r0, 8(r31)
/* 8007FD18 0007CC58  88 03 00 01 */	lbz r0, 1(r3)
/* 8007FD1C 0007CC5C  98 1F 00 09 */	stb r0, 9(r31)
/* 8007FD20 0007CC60  88 03 00 02 */	lbz r0, 2(r3)
/* 8007FD24 0007CC64  98 1F 00 0A */	stb r0, 0xa(r31)
/* 8007FD28 0007CC68  3B FF 00 06 */	addi r31, r31, 6
/* 8007FD2C 0007CC6C  41 80 FF C4 */	blt .L_8007FCF0
/* 8007FD30 0007CC70  3B C0 00 00 */	li r30, 0
/* 8007FD34 0007CC74  7F 9F E3 78 */	mr r31, r28
.L_8007FD38:
/* 8007FD38 0007CC78  7F A3 EB 78 */	mr r3, r29
/* 8007FD3C 0007CC7C  7F C4 F3 78 */	mr r4, r30
/* 8007FD40 0007CC80  81 9D 00 00 */	lwz r12, 0(r29)
/* 8007FD44 0007CC84  81 8C 00 50 */	lwz r12, 0x50(r12)
/* 8007FD48 0007CC88  7D 89 03 A6 */	mtctr r12
/* 8007FD4C 0007CC8C  4E 80 04 21 */	bctrl 
/* 8007FD50 0007CC90  28 03 00 00 */	cmplwi r3, 0
/* 8007FD54 0007CC94  41 82 00 44 */	beq .L_8007FD98
/* 8007FD58 0007CC98  80 1F 00 38 */	lwz r0, 0x38(r31)
/* 8007FD5C 0007CC9C  28 00 00 00 */	cmplwi r0, 0
/* 8007FD60 0007CCA0  41 82 00 38 */	beq .L_8007FD98
/* 8007FD64 0007CCA4  7F A3 EB 78 */	mr r3, r29
/* 8007FD68 0007CCA8  7F C4 F3 78 */	mr r4, r30
/* 8007FD6C 0007CCAC  81 9D 00 00 */	lwz r12, 0(r29)
/* 8007FD70 0007CCB0  81 8C 00 50 */	lwz r12, 0x50(r12)
/* 8007FD74 0007CCB4  7D 89 03 A6 */	mtctr r12
/* 8007FD78 0007CCB8  4E 80 04 21 */	bctrl 
/* 8007FD7C 0007CCBC  7C 64 1B 78 */	mr r4, r3
/* 8007FD80 0007CCC0  80 7F 00 38 */	lwz r3, 0x38(r31)
/* 8007FD84 0007CCC4  38 A0 00 94 */	li r5, 0x94
/* 8007FD88 0007CCC8  4B F8 54 15 */	bl memcpy
/* 8007FD8C 0007CCCC  80 7F 00 38 */	lwz r3, 0x38(r31)
/* 8007FD90 0007CCD0  38 80 00 94 */	li r4, 0x94
/* 8007FD94 0007CCD4  48 06 C9 B5 */	bl DCStoreRange
.L_8007FD98:
/* 8007FD98 0007CCD8  3B DE 00 01 */	addi r30, r30, 1
/* 8007FD9C 0007CCDC  3B FF 00 04 */	addi r31, r31, 4
/* 8007FDA0 0007CCE0  28 1E 00 08 */	cmplwi r30, 8
/* 8007FDA4 0007CCE4  41 80 FF 94 */	blt .L_8007FD38
/* 8007FDA8 0007CCE8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8007FDAC 0007CCEC  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8007FDB0 0007CCF0  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8007FDB4 0007CCF4  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8007FDB8 0007CCF8  83 81 00 10 */	lwz r28, 0x10(r1)
/* 8007FDBC 0007CCFC  7C 08 03 A6 */	mtlr r0
/* 8007FDC0 0007CD00  38 21 00 20 */	addi r1, r1, 0x20
/* 8007FDC4 0007CD04  4E 80 00 20 */	blr 
.endfn reset__21J3DTexGenBlockPatchedFP14J3DTexGenBlock

.fn reset__15J3DTexGenBlock4FP14J3DTexGenBlock, global
/* 8007FDC8 0007CD08  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8007FDCC 0007CD0C  7C 08 02 A6 */	mflr r0
/* 8007FDD0 0007CD10  90 01 00 24 */	stw r0, 0x24(r1)
/* 8007FDD4 0007CD14  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8007FDD8 0007CD18  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8007FDDC 0007CD1C  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8007FDE0 0007CD20  7C 9D 23 78 */	mr r29, r4
/* 8007FDE4 0007CD24  93 81 00 10 */	stw r28, 0x10(r1)
/* 8007FDE8 0007CD28  7C 7C 1B 78 */	mr r28, r3
/* 8007FDEC 0007CD2C  7F A3 EB 78 */	mr r3, r29
/* 8007FDF0 0007CD30  81 9D 00 00 */	lwz r12, 0(r29)
/* 8007FDF4 0007CD34  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 8007FDF8 0007CD38  7D 89 03 A6 */	mtctr r12
/* 8007FDFC 0007CD3C  4E 80 04 21 */	bctrl 
/* 8007FE00 0007CD40  90 7C 00 04 */	stw r3, 4(r28)
/* 8007FE04 0007CD44  7F 9F E3 78 */	mr r31, r28
/* 8007FE08 0007CD48  3B C0 00 00 */	li r30, 0
.L_8007FE0C:
/* 8007FE0C 0007CD4C  7F A3 EB 78 */	mr r3, r29
/* 8007FE10 0007CD50  7F C4 F3 78 */	mr r4, r30
/* 8007FE14 0007CD54  81 9D 00 00 */	lwz r12, 0(r29)
/* 8007FE18 0007CD58  81 8C 00 48 */	lwz r12, 0x48(r12)
/* 8007FE1C 0007CD5C  7D 89 03 A6 */	mtctr r12
/* 8007FE20 0007CD60  4E 80 04 21 */	bctrl 
/* 8007FE24 0007CD64  88 03 00 00 */	lbz r0, 0(r3)
/* 8007FE28 0007CD68  3B DE 00 01 */	addi r30, r30, 1
/* 8007FE2C 0007CD6C  28 1E 00 04 */	cmplwi r30, 4
/* 8007FE30 0007CD70  98 1F 00 08 */	stb r0, 8(r31)
/* 8007FE34 0007CD74  88 03 00 01 */	lbz r0, 1(r3)
/* 8007FE38 0007CD78  98 1F 00 09 */	stb r0, 9(r31)
/* 8007FE3C 0007CD7C  88 03 00 02 */	lbz r0, 2(r3)
/* 8007FE40 0007CD80  98 1F 00 0A */	stb r0, 0xa(r31)
/* 8007FE44 0007CD84  3B FF 00 06 */	addi r31, r31, 6
/* 8007FE48 0007CD88  41 80 FF C4 */	blt .L_8007FE0C
/* 8007FE4C 0007CD8C  3B C0 00 00 */	li r30, 0
/* 8007FE50 0007CD90  7F 9F E3 78 */	mr r31, r28
.L_8007FE54:
/* 8007FE54 0007CD94  7F A3 EB 78 */	mr r3, r29
/* 8007FE58 0007CD98  7F C4 F3 78 */	mr r4, r30
/* 8007FE5C 0007CD9C  81 9D 00 00 */	lwz r12, 0(r29)
/* 8007FE60 0007CDA0  81 8C 00 50 */	lwz r12, 0x50(r12)
/* 8007FE64 0007CDA4  7D 89 03 A6 */	mtctr r12
/* 8007FE68 0007CDA8  4E 80 04 21 */	bctrl 
/* 8007FE6C 0007CDAC  28 03 00 00 */	cmplwi r3, 0
/* 8007FE70 0007CDB0  41 82 00 44 */	beq .L_8007FEB4
/* 8007FE74 0007CDB4  80 1F 00 38 */	lwz r0, 0x38(r31)
/* 8007FE78 0007CDB8  28 00 00 00 */	cmplwi r0, 0
/* 8007FE7C 0007CDBC  41 82 00 38 */	beq .L_8007FEB4
/* 8007FE80 0007CDC0  7F A3 EB 78 */	mr r3, r29
/* 8007FE84 0007CDC4  7F C4 F3 78 */	mr r4, r30
/* 8007FE88 0007CDC8  81 9D 00 00 */	lwz r12, 0(r29)
/* 8007FE8C 0007CDCC  81 8C 00 50 */	lwz r12, 0x50(r12)
/* 8007FE90 0007CDD0  7D 89 03 A6 */	mtctr r12
/* 8007FE94 0007CDD4  4E 80 04 21 */	bctrl 
/* 8007FE98 0007CDD8  7C 64 1B 78 */	mr r4, r3
/* 8007FE9C 0007CDDC  80 7F 00 38 */	lwz r3, 0x38(r31)
/* 8007FEA0 0007CDE0  38 A0 00 94 */	li r5, 0x94
/* 8007FEA4 0007CDE4  4B F8 52 F9 */	bl memcpy
/* 8007FEA8 0007CDE8  80 7F 00 38 */	lwz r3, 0x38(r31)
/* 8007FEAC 0007CDEC  38 80 00 94 */	li r4, 0x94
/* 8007FEB0 0007CDF0  48 06 C8 99 */	bl DCStoreRange
.L_8007FEB4:
/* 8007FEB4 0007CDF4  3B DE 00 01 */	addi r30, r30, 1
/* 8007FEB8 0007CDF8  3B FF 00 04 */	addi r31, r31, 4
/* 8007FEBC 0007CDFC  28 1E 00 04 */	cmplwi r30, 4
/* 8007FEC0 0007CE00  41 80 FF 94 */	blt .L_8007FE54
/* 8007FEC4 0007CE04  7F A3 EB 78 */	mr r3, r29
/* 8007FEC8 0007CE08  81 9D 00 00 */	lwz r12, 0(r29)
/* 8007FECC 0007CE0C  81 8C 00 5C */	lwz r12, 0x5c(r12)
/* 8007FED0 0007CE10  7D 89 03 A6 */	mtctr r12
/* 8007FED4 0007CE14  4E 80 04 21 */	bctrl 
/* 8007FED8 0007CE18  88 03 00 00 */	lbz r0, 0(r3)
/* 8007FEDC 0007CE1C  98 1C 00 5C */	stb r0, 0x5c(r28)
/* 8007FEE0 0007CE20  C0 03 00 04 */	lfs f0, 4(r3)
/* 8007FEE4 0007CE24  D0 1C 00 60 */	stfs f0, 0x60(r28)
/* 8007FEE8 0007CE28  C0 03 00 08 */	lfs f0, 8(r3)
/* 8007FEEC 0007CE2C  D0 1C 00 64 */	stfs f0, 0x64(r28)
/* 8007FEF0 0007CE30  C0 03 00 0C */	lfs f0, 0xc(r3)
/* 8007FEF4 0007CE34  D0 1C 00 68 */	stfs f0, 0x68(r28)
/* 8007FEF8 0007CE38  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8007FEFC 0007CE3C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8007FF00 0007CE40  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8007FF04 0007CE44  83 81 00 10 */	lwz r28, 0x10(r1)
/* 8007FF08 0007CE48  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8007FF0C 0007CE4C  7C 08 03 A6 */	mtlr r0
/* 8007FF10 0007CE50  38 21 00 20 */	addi r1, r1, 0x20
/* 8007FF14 0007CE54  4E 80 00 20 */	blr 
.endfn reset__15J3DTexGenBlock4FP14J3DTexGenBlock

.fn reset__19J3DTexGenBlockBasicFP14J3DTexGenBlock, global
/* 8007FF18 0007CE58  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8007FF1C 0007CE5C  7C 08 02 A6 */	mflr r0
/* 8007FF20 0007CE60  90 01 00 24 */	stw r0, 0x24(r1)
/* 8007FF24 0007CE64  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8007FF28 0007CE68  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8007FF2C 0007CE6C  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8007FF30 0007CE70  7C 9D 23 78 */	mr r29, r4
/* 8007FF34 0007CE74  93 81 00 10 */	stw r28, 0x10(r1)
/* 8007FF38 0007CE78  7C 7C 1B 78 */	mr r28, r3
/* 8007FF3C 0007CE7C  7F A3 EB 78 */	mr r3, r29
/* 8007FF40 0007CE80  81 9D 00 00 */	lwz r12, 0(r29)
/* 8007FF44 0007CE84  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 8007FF48 0007CE88  7D 89 03 A6 */	mtctr r12
/* 8007FF4C 0007CE8C  4E 80 04 21 */	bctrl 
/* 8007FF50 0007CE90  90 7C 00 04 */	stw r3, 4(r28)
/* 8007FF54 0007CE94  7F 9F E3 78 */	mr r31, r28
/* 8007FF58 0007CE98  3B C0 00 00 */	li r30, 0
.L_8007FF5C:
/* 8007FF5C 0007CE9C  7F A3 EB 78 */	mr r3, r29
/* 8007FF60 0007CEA0  7F C4 F3 78 */	mr r4, r30
/* 8007FF64 0007CEA4  81 9D 00 00 */	lwz r12, 0(r29)
/* 8007FF68 0007CEA8  81 8C 00 48 */	lwz r12, 0x48(r12)
/* 8007FF6C 0007CEAC  7D 89 03 A6 */	mtctr r12
/* 8007FF70 0007CEB0  4E 80 04 21 */	bctrl 
/* 8007FF74 0007CEB4  88 03 00 00 */	lbz r0, 0(r3)
/* 8007FF78 0007CEB8  3B DE 00 01 */	addi r30, r30, 1
/* 8007FF7C 0007CEBC  28 1E 00 08 */	cmplwi r30, 8
/* 8007FF80 0007CEC0  98 1F 00 08 */	stb r0, 8(r31)
/* 8007FF84 0007CEC4  88 03 00 01 */	lbz r0, 1(r3)
/* 8007FF88 0007CEC8  98 1F 00 09 */	stb r0, 9(r31)
/* 8007FF8C 0007CECC  88 03 00 02 */	lbz r0, 2(r3)
/* 8007FF90 0007CED0  98 1F 00 0A */	stb r0, 0xa(r31)
/* 8007FF94 0007CED4  3B FF 00 06 */	addi r31, r31, 6
/* 8007FF98 0007CED8  41 80 FF C4 */	blt .L_8007FF5C
/* 8007FF9C 0007CEDC  3B C0 00 00 */	li r30, 0
/* 8007FFA0 0007CEE0  7F 9F E3 78 */	mr r31, r28
.L_8007FFA4:
/* 8007FFA4 0007CEE4  7F A3 EB 78 */	mr r3, r29
/* 8007FFA8 0007CEE8  7F C4 F3 78 */	mr r4, r30
/* 8007FFAC 0007CEEC  81 9D 00 00 */	lwz r12, 0(r29)
/* 8007FFB0 0007CEF0  81 8C 00 50 */	lwz r12, 0x50(r12)
/* 8007FFB4 0007CEF4  7D 89 03 A6 */	mtctr r12
/* 8007FFB8 0007CEF8  4E 80 04 21 */	bctrl 
/* 8007FFBC 0007CEFC  28 03 00 00 */	cmplwi r3, 0
/* 8007FFC0 0007CF00  41 82 00 44 */	beq .L_80080004
/* 8007FFC4 0007CF04  80 1F 00 38 */	lwz r0, 0x38(r31)
/* 8007FFC8 0007CF08  28 00 00 00 */	cmplwi r0, 0
/* 8007FFCC 0007CF0C  41 82 00 38 */	beq .L_80080004
/* 8007FFD0 0007CF10  7F A3 EB 78 */	mr r3, r29
/* 8007FFD4 0007CF14  7F C4 F3 78 */	mr r4, r30
/* 8007FFD8 0007CF18  81 9D 00 00 */	lwz r12, 0(r29)
/* 8007FFDC 0007CF1C  81 8C 00 50 */	lwz r12, 0x50(r12)
/* 8007FFE0 0007CF20  7D 89 03 A6 */	mtctr r12
/* 8007FFE4 0007CF24  4E 80 04 21 */	bctrl 
/* 8007FFE8 0007CF28  7C 64 1B 78 */	mr r4, r3
/* 8007FFEC 0007CF2C  80 7F 00 38 */	lwz r3, 0x38(r31)
/* 8007FFF0 0007CF30  38 A0 00 94 */	li r5, 0x94
/* 8007FFF4 0007CF34  4B F8 51 A9 */	bl memcpy
/* 8007FFF8 0007CF38  80 7F 00 38 */	lwz r3, 0x38(r31)
/* 8007FFFC 0007CF3C  38 80 00 94 */	li r4, 0x94
/* 80080000 0007CF40  48 06 C7 49 */	bl DCStoreRange
.L_80080004:
/* 80080004 0007CF44  3B DE 00 01 */	addi r30, r30, 1
/* 80080008 0007CF48  3B FF 00 04 */	addi r31, r31, 4
/* 8008000C 0007CF4C  28 1E 00 08 */	cmplwi r30, 8
/* 80080010 0007CF50  41 80 FF 94 */	blt .L_8007FFA4
/* 80080014 0007CF54  7F A3 EB 78 */	mr r3, r29
/* 80080018 0007CF58  81 9D 00 00 */	lwz r12, 0(r29)
/* 8008001C 0007CF5C  81 8C 00 5C */	lwz r12, 0x5c(r12)
/* 80080020 0007CF60  7D 89 03 A6 */	mtctr r12
/* 80080024 0007CF64  4E 80 04 21 */	bctrl 
/* 80080028 0007CF68  88 03 00 00 */	lbz r0, 0(r3)
/* 8008002C 0007CF6C  98 1C 00 5C */	stb r0, 0x5c(r28)
/* 80080030 0007CF70  C0 03 00 04 */	lfs f0, 4(r3)
/* 80080034 0007CF74  D0 1C 00 60 */	stfs f0, 0x60(r28)
/* 80080038 0007CF78  C0 03 00 08 */	lfs f0, 8(r3)
/* 8008003C 0007CF7C  D0 1C 00 64 */	stfs f0, 0x64(r28)
/* 80080040 0007CF80  C0 03 00 0C */	lfs f0, 0xc(r3)
/* 80080044 0007CF84  D0 1C 00 68 */	stfs f0, 0x68(r28)
/* 80080048 0007CF88  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8008004C 0007CF8C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80080050 0007CF90  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80080054 0007CF94  83 81 00 10 */	lwz r28, 0x10(r1)
/* 80080058 0007CF98  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8008005C 0007CF9C  7C 08 03 A6 */	mtlr r0
/* 80080060 0007CFA0  38 21 00 20 */	addi r1, r1, 0x20
/* 80080064 0007CFA4  4E 80 00 20 */	blr 
.endfn reset__19J3DTexGenBlockBasicFP14J3DTexGenBlock

.fn reset__18J3DTevBlockPatchedFP11J3DTevBlock, global
/* 80080068 0007CFA8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8008006C 0007CFAC  7C 08 02 A6 */	mflr r0
/* 80080070 0007CFB0  90 01 00 24 */	stw r0, 0x24(r1)
/* 80080074 0007CFB4  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80080078 0007CFB8  7C 9F 23 78 */	mr r31, r4
/* 8008007C 0007CFBC  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80080080 0007CFC0  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80080084 0007CFC4  93 81 00 10 */	stw r28, 0x10(r1)
/* 80080088 0007CFC8  7C 7C 1B 78 */	mr r28, r3
/* 8008008C 0007CFCC  7F E3 FB 78 */	mr r3, r31
/* 80080090 0007CFD0  81 9F 00 00 */	lwz r12, 0(r31)
/* 80080094 0007CFD4  81 8C 00 98 */	lwz r12, 0x98(r12)
/* 80080098 0007CFD8  7D 89 03 A6 */	mtctr r12
/* 8008009C 0007CFDC  4E 80 04 21 */	bctrl 
/* 800800A0 0007CFE0  98 7C 00 D0 */	stb r3, 0xd0(r28)
/* 800800A4 0007CFE4  7F 9E E3 78 */	mr r30, r28
/* 800800A8 0007CFE8  3B A0 00 00 */	li r29, 0
.L_800800AC:
/* 800800AC 0007CFEC  7F E3 FB 78 */	mr r3, r31
/* 800800B0 0007CFF0  7F A4 EB 78 */	mr r4, r29
/* 800800B4 0007CFF4  81 9F 00 00 */	lwz r12, 0(r31)
/* 800800B8 0007CFF8  81 8C 00 50 */	lwz r12, 0x50(r12)
/* 800800BC 0007CFFC  7D 89 03 A6 */	mtctr r12
/* 800800C0 0007D000  4E 80 04 21 */	bctrl 
/* 800800C4 0007D004  3B BD 00 01 */	addi r29, r29, 1
/* 800800C8 0007D008  B0 7E 00 08 */	sth r3, 8(r30)
/* 800800CC 0007D00C  28 1D 00 08 */	cmplwi r29, 8
/* 800800D0 0007D010  3B DE 00 02 */	addi r30, r30, 2
/* 800800D4 0007D014  41 80 FF D8 */	blt .L_800800AC
/* 800800D8 0007D018  3B A0 00 00 */	li r29, 0
/* 800800DC 0007D01C  7F 9E E3 78 */	mr r30, r28
.L_800800E0:
/* 800800E0 0007D020  7F E3 FB 78 */	mr r3, r31
/* 800800E4 0007D024  7F A4 EB 78 */	mr r4, r29
/* 800800E8 0007D028  81 9F 00 00 */	lwz r12, 0(r31)
/* 800800EC 0007D02C  81 8C 00 68 */	lwz r12, 0x68(r12)
/* 800800F0 0007D030  7D 89 03 A6 */	mtctr r12
/* 800800F4 0007D034  4E 80 04 21 */	bctrl 
/* 800800F8 0007D038  A8 03 00 00 */	lha r0, 0(r3)
/* 800800FC 0007D03C  3B BD 00 01 */	addi r29, r29, 1
/* 80080100 0007D040  28 1D 00 04 */	cmplwi r29, 4
/* 80080104 0007D044  B0 1E 00 98 */	sth r0, 0x98(r30)
/* 80080108 0007D048  A8 03 00 02 */	lha r0, 2(r3)
/* 8008010C 0007D04C  B0 1E 00 9A */	sth r0, 0x9a(r30)
/* 80080110 0007D050  A8 03 00 04 */	lha r0, 4(r3)
/* 80080114 0007D054  B0 1E 00 9C */	sth r0, 0x9c(r30)
/* 80080118 0007D058  A8 03 00 06 */	lha r0, 6(r3)
/* 8008011C 0007D05C  B0 1E 00 9E */	sth r0, 0x9e(r30)
/* 80080120 0007D060  3B DE 00 08 */	addi r30, r30, 8
/* 80080124 0007D064  41 80 FF BC */	blt .L_800800E0
/* 80080128 0007D068  3B A0 00 00 */	li r29, 0
/* 8008012C 0007D06C  7F 9E E3 78 */	mr r30, r28
.L_80080130:
/* 80080130 0007D070  7F E3 FB 78 */	mr r3, r31
/* 80080134 0007D074  7F A4 EB 78 */	mr r4, r29
/* 80080138 0007D078  81 9F 00 00 */	lwz r12, 0(r31)
/* 8008013C 0007D07C  81 8C 00 74 */	lwz r12, 0x74(r12)
/* 80080140 0007D080  7D 89 03 A6 */	mtctr r12
/* 80080144 0007D084  4E 80 04 21 */	bctrl 
/* 80080148 0007D088  88 03 00 00 */	lbz r0, 0(r3)
/* 8008014C 0007D08C  3B BD 00 01 */	addi r29, r29, 1
/* 80080150 0007D090  28 1D 00 04 */	cmplwi r29, 4
/* 80080154 0007D094  98 1E 00 B8 */	stb r0, 0xb8(r30)
/* 80080158 0007D098  88 03 00 01 */	lbz r0, 1(r3)
/* 8008015C 0007D09C  98 1E 00 B9 */	stb r0, 0xb9(r30)
/* 80080160 0007D0A0  88 03 00 02 */	lbz r0, 2(r3)
/* 80080164 0007D0A4  98 1E 00 BA */	stb r0, 0xba(r30)
/* 80080168 0007D0A8  88 03 00 03 */	lbz r0, 3(r3)
/* 8008016C 0007D0AC  98 1E 00 BB */	stb r0, 0xbb(r30)
/* 80080170 0007D0B0  3B DE 00 04 */	addi r30, r30, 4
/* 80080174 0007D0B4  41 80 FF BC */	blt .L_80080130
/* 80080178 0007D0B8  7F 9E E3 78 */	mr r30, r28
/* 8008017C 0007D0BC  7F 9D E3 78 */	mr r29, r28
/* 80080180 0007D0C0  3B 80 00 00 */	li r28, 0
.L_80080184:
/* 80080184 0007D0C4  7F E3 FB 78 */	mr r3, r31
/* 80080188 0007D0C8  7F 84 E3 78 */	mr r4, r28
/* 8008018C 0007D0CC  81 9F 00 00 */	lwz r12, 0(r31)
/* 80080190 0007D0D0  81 8C 00 A4 */	lwz r12, 0xa4(r12)
/* 80080194 0007D0D4  7D 89 03 A6 */	mtctr r12
/* 80080198 0007D0D8  4E 80 04 21 */	bctrl 
/* 8008019C 0007D0DC  88 03 00 01 */	lbz r0, 1(r3)
/* 800801A0 0007D0E0  7F 84 E3 78 */	mr r4, r28
/* 800801A4 0007D0E4  98 1E 00 39 */	stb r0, 0x39(r30)
/* 800801A8 0007D0E8  88 03 00 02 */	lbz r0, 2(r3)
/* 800801AC 0007D0EC  98 1E 00 3A */	stb r0, 0x3a(r30)
/* 800801B0 0007D0F0  88 03 00 03 */	lbz r0, 3(r3)
/* 800801B4 0007D0F4  98 1E 00 3B */	stb r0, 0x3b(r30)
/* 800801B8 0007D0F8  88 03 00 05 */	lbz r0, 5(r3)
/* 800801BC 0007D0FC  98 1E 00 3D */	stb r0, 0x3d(r30)
/* 800801C0 0007D100  88 03 00 06 */	lbz r0, 6(r3)
/* 800801C4 0007D104  98 1E 00 3E */	stb r0, 0x3e(r30)
/* 800801C8 0007D108  88 03 00 07 */	lbz r0, 7(r3)
/* 800801CC 0007D10C  7F E3 FB 78 */	mr r3, r31
/* 800801D0 0007D110  98 1E 00 3F */	stb r0, 0x3f(r30)
/* 800801D4 0007D114  81 9F 00 00 */	lwz r12, 0(r31)
/* 800801D8 0007D118  81 8C 00 C4 */	lwz r12, 0xc4(r12)
/* 800801DC 0007D11C  7D 89 03 A6 */	mtctr r12
/* 800801E0 0007D120  4E 80 04 21 */	bctrl 
/* 800801E4 0007D124  80 03 00 00 */	lwz r0, 0(r3)
/* 800801E8 0007D128  3B 9C 00 01 */	addi r28, r28, 1
/* 800801EC 0007D12C  28 1C 00 08 */	cmplwi r28, 8
/* 800801F0 0007D130  3B DE 00 08 */	addi r30, r30, 8
/* 800801F4 0007D134  90 1D 00 78 */	stw r0, 0x78(r29)
/* 800801F8 0007D138  3B BD 00 04 */	addi r29, r29, 4
/* 800801FC 0007D13C  41 80 FF 88 */	blt .L_80080184
/* 80080200 0007D140  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80080204 0007D144  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80080208 0007D148  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8008020C 0007D14C  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80080210 0007D150  83 81 00 10 */	lwz r28, 0x10(r1)
/* 80080214 0007D154  7C 08 03 A6 */	mtlr r0
/* 80080218 0007D158  38 21 00 20 */	addi r1, r1, 0x20
/* 8008021C 0007D15C  4E 80 00 20 */	blr 
.endfn reset__18J3DTevBlockPatchedFP11J3DTevBlock

.fn reset__12J3DTevBlock1FP11J3DTevBlock, global
/* 80080220 0007D160  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80080224 0007D164  7C 08 02 A6 */	mflr r0
/* 80080228 0007D168  90 01 00 14 */	stw r0, 0x14(r1)
/* 8008022C 0007D16C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80080230 0007D170  7C 9F 23 78 */	mr r31, r4
/* 80080234 0007D174  38 80 00 00 */	li r4, 0
/* 80080238 0007D178  93 C1 00 08 */	stw r30, 8(r1)
/* 8008023C 0007D17C  7C 7E 1B 78 */	mr r30, r3
/* 80080240 0007D180  7F E3 FB 78 */	mr r3, r31
/* 80080244 0007D184  81 9F 00 00 */	lwz r12, 0(r31)
/* 80080248 0007D188  81 8C 00 50 */	lwz r12, 0x50(r12)
/* 8008024C 0007D18C  7D 89 03 A6 */	mtctr r12
/* 80080250 0007D190  4E 80 04 21 */	bctrl 
/* 80080254 0007D194  B0 7E 00 08 */	sth r3, 8(r30)
/* 80080258 0007D198  7F E3 FB 78 */	mr r3, r31
/* 8008025C 0007D19C  38 80 00 00 */	li r4, 0
/* 80080260 0007D1A0  81 9F 00 00 */	lwz r12, 0(r31)
/* 80080264 0007D1A4  81 8C 00 5C */	lwz r12, 0x5c(r12)
/* 80080268 0007D1A8  7D 89 03 A6 */	mtctr r12
/* 8008026C 0007D1AC  4E 80 04 21 */	bctrl 
/* 80080270 0007D1B0  88 03 00 00 */	lbz r0, 0(r3)
/* 80080274 0007D1B4  38 80 00 00 */	li r4, 0
/* 80080278 0007D1B8  98 1E 00 0A */	stb r0, 0xa(r30)
/* 8008027C 0007D1BC  88 03 00 01 */	lbz r0, 1(r3)
/* 80080280 0007D1C0  98 1E 00 0B */	stb r0, 0xb(r30)
/* 80080284 0007D1C4  88 03 00 02 */	lbz r0, 2(r3)
/* 80080288 0007D1C8  7F E3 FB 78 */	mr r3, r31
/* 8008028C 0007D1CC  98 1E 00 0C */	stb r0, 0xc(r30)
/* 80080290 0007D1D0  81 9F 00 00 */	lwz r12, 0(r31)
/* 80080294 0007D1D4  81 8C 00 A4 */	lwz r12, 0xa4(r12)
/* 80080298 0007D1D8  7D 89 03 A6 */	mtctr r12
/* 8008029C 0007D1DC  4E 80 04 21 */	bctrl 
/* 800802A0 0007D1E0  88 03 00 01 */	lbz r0, 1(r3)
/* 800802A4 0007D1E4  38 80 00 00 */	li r4, 0
/* 800802A8 0007D1E8  98 1E 00 0F */	stb r0, 0xf(r30)
/* 800802AC 0007D1EC  88 03 00 02 */	lbz r0, 2(r3)
/* 800802B0 0007D1F0  98 1E 00 10 */	stb r0, 0x10(r30)
/* 800802B4 0007D1F4  88 03 00 03 */	lbz r0, 3(r3)
/* 800802B8 0007D1F8  98 1E 00 11 */	stb r0, 0x11(r30)
/* 800802BC 0007D1FC  88 03 00 05 */	lbz r0, 5(r3)
/* 800802C0 0007D200  98 1E 00 13 */	stb r0, 0x13(r30)
/* 800802C4 0007D204  88 03 00 06 */	lbz r0, 6(r3)
/* 800802C8 0007D208  98 1E 00 14 */	stb r0, 0x14(r30)
/* 800802CC 0007D20C  88 03 00 07 */	lbz r0, 7(r3)
/* 800802D0 0007D210  7F E3 FB 78 */	mr r3, r31
/* 800802D4 0007D214  98 1E 00 15 */	stb r0, 0x15(r30)
/* 800802D8 0007D218  81 9F 00 00 */	lwz r12, 0(r31)
/* 800802DC 0007D21C  81 8C 00 C4 */	lwz r12, 0xc4(r12)
/* 800802E0 0007D220  7D 89 03 A6 */	mtctr r12
/* 800802E4 0007D224  4E 80 04 21 */	bctrl 
/* 800802E8 0007D228  80 03 00 00 */	lwz r0, 0(r3)
/* 800802EC 0007D22C  90 1E 00 18 */	stw r0, 0x18(r30)
/* 800802F0 0007D230  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800802F4 0007D234  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 800802F8 0007D238  83 C1 00 08 */	lwz r30, 8(r1)
/* 800802FC 0007D23C  7C 08 03 A6 */	mtlr r0
/* 80080300 0007D240  38 21 00 10 */	addi r1, r1, 0x10
/* 80080304 0007D244  4E 80 00 20 */	blr 
.endfn reset__12J3DTevBlock1FP11J3DTevBlock

.fn reset__12J3DTevBlock2FP11J3DTevBlock, global
/* 80080308 0007D248  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8008030C 0007D24C  7C 08 02 A6 */	mflr r0
/* 80080310 0007D250  90 01 00 24 */	stw r0, 0x24(r1)
/* 80080314 0007D254  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80080318 0007D258  7C 9F 23 78 */	mr r31, r4
/* 8008031C 0007D25C  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80080320 0007D260  7C 7E 1B 78 */	mr r30, r3
/* 80080324 0007D264  7F E3 FB 78 */	mr r3, r31
/* 80080328 0007D268  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8008032C 0007D26C  93 81 00 10 */	stw r28, 0x10(r1)
/* 80080330 0007D270  81 9F 00 00 */	lwz r12, 0(r31)
/* 80080334 0007D274  81 8C 00 98 */	lwz r12, 0x98(r12)
/* 80080338 0007D278  7D 89 03 A6 */	mtctr r12
/* 8008033C 0007D27C  4E 80 04 21 */	bctrl 
/* 80080340 0007D280  98 7E 00 34 */	stb r3, 0x34(r30)
/* 80080344 0007D284  7F E3 FB 78 */	mr r3, r31
/* 80080348 0007D288  38 80 00 00 */	li r4, 0
/* 8008034C 0007D28C  81 9F 00 00 */	lwz r12, 0(r31)
/* 80080350 0007D290  81 8C 00 50 */	lwz r12, 0x50(r12)
/* 80080354 0007D294  7D 89 03 A6 */	mtctr r12
/* 80080358 0007D298  4E 80 04 21 */	bctrl 
/* 8008035C 0007D29C  B0 7E 00 08 */	sth r3, 8(r30)
/* 80080360 0007D2A0  7F E3 FB 78 */	mr r3, r31
/* 80080364 0007D2A4  38 80 00 01 */	li r4, 1
/* 80080368 0007D2A8  81 9F 00 00 */	lwz r12, 0(r31)
/* 8008036C 0007D2AC  81 8C 00 50 */	lwz r12, 0x50(r12)
/* 80080370 0007D2B0  7D 89 03 A6 */	mtctr r12
/* 80080374 0007D2B4  4E 80 04 21 */	bctrl 
/* 80080378 0007D2B8  B0 7E 00 0A */	sth r3, 0xa(r30)
/* 8008037C 0007D2BC  7F E3 FB 78 */	mr r3, r31
/* 80080380 0007D2C0  38 80 00 00 */	li r4, 0
/* 80080384 0007D2C4  81 9F 00 00 */	lwz r12, 0(r31)
/* 80080388 0007D2C8  81 8C 00 A4 */	lwz r12, 0xa4(r12)
/* 8008038C 0007D2CC  7D 89 03 A6 */	mtctr r12
/* 80080390 0007D2D0  4E 80 04 21 */	bctrl 
/* 80080394 0007D2D4  88 03 00 01 */	lbz r0, 1(r3)
/* 80080398 0007D2D8  38 80 00 01 */	li r4, 1
/* 8008039C 0007D2DC  98 1E 00 36 */	stb r0, 0x36(r30)
/* 800803A0 0007D2E0  88 03 00 02 */	lbz r0, 2(r3)
/* 800803A4 0007D2E4  98 1E 00 37 */	stb r0, 0x37(r30)
/* 800803A8 0007D2E8  88 03 00 03 */	lbz r0, 3(r3)
/* 800803AC 0007D2EC  98 1E 00 38 */	stb r0, 0x38(r30)
/* 800803B0 0007D2F0  88 03 00 05 */	lbz r0, 5(r3)
/* 800803B4 0007D2F4  98 1E 00 3A */	stb r0, 0x3a(r30)
/* 800803B8 0007D2F8  88 03 00 06 */	lbz r0, 6(r3)
/* 800803BC 0007D2FC  98 1E 00 3B */	stb r0, 0x3b(r30)
/* 800803C0 0007D300  88 03 00 07 */	lbz r0, 7(r3)
/* 800803C4 0007D304  7F E3 FB 78 */	mr r3, r31
/* 800803C8 0007D308  98 1E 00 3C */	stb r0, 0x3c(r30)
/* 800803CC 0007D30C  81 9F 00 00 */	lwz r12, 0(r31)
/* 800803D0 0007D310  81 8C 00 A4 */	lwz r12, 0xa4(r12)
/* 800803D4 0007D314  7D 89 03 A6 */	mtctr r12
/* 800803D8 0007D318  4E 80 04 21 */	bctrl 
/* 800803DC 0007D31C  88 03 00 01 */	lbz r0, 1(r3)
/* 800803E0 0007D320  38 80 00 00 */	li r4, 0
/* 800803E4 0007D324  98 1E 00 3E */	stb r0, 0x3e(r30)
/* 800803E8 0007D328  88 03 00 02 */	lbz r0, 2(r3)
/* 800803EC 0007D32C  98 1E 00 3F */	stb r0, 0x3f(r30)
/* 800803F0 0007D330  88 03 00 03 */	lbz r0, 3(r3)
/* 800803F4 0007D334  98 1E 00 40 */	stb r0, 0x40(r30)
/* 800803F8 0007D338  88 03 00 05 */	lbz r0, 5(r3)
/* 800803FC 0007D33C  98 1E 00 42 */	stb r0, 0x42(r30)
/* 80080400 0007D340  88 03 00 06 */	lbz r0, 6(r3)
/* 80080404 0007D344  98 1E 00 43 */	stb r0, 0x43(r30)
/* 80080408 0007D348  88 03 00 07 */	lbz r0, 7(r3)
/* 8008040C 0007D34C  7F E3 FB 78 */	mr r3, r31
/* 80080410 0007D350  98 1E 00 44 */	stb r0, 0x44(r30)
/* 80080414 0007D354  81 9F 00 00 */	lwz r12, 0(r31)
/* 80080418 0007D358  81 8C 00 C4 */	lwz r12, 0xc4(r12)
/* 8008041C 0007D35C  7D 89 03 A6 */	mtctr r12
/* 80080420 0007D360  4E 80 04 21 */	bctrl 
/* 80080424 0007D364  80 03 00 00 */	lwz r0, 0(r3)
/* 80080428 0007D368  7F E3 FB 78 */	mr r3, r31
/* 8008042C 0007D36C  38 80 00 01 */	li r4, 1
/* 80080430 0007D370  90 1E 00 60 */	stw r0, 0x60(r30)
/* 80080434 0007D374  81 9F 00 00 */	lwz r12, 0(r31)
/* 80080438 0007D378  81 8C 00 C4 */	lwz r12, 0xc4(r12)
/* 8008043C 0007D37C  7D 89 03 A6 */	mtctr r12
/* 80080440 0007D380  4E 80 04 21 */	bctrl 
/* 80080444 0007D384  80 03 00 00 */	lwz r0, 0(r3)
/* 80080448 0007D388  7F E3 FB 78 */	mr r3, r31
/* 8008044C 0007D38C  38 80 00 00 */	li r4, 0
/* 80080450 0007D390  90 1E 00 64 */	stw r0, 0x64(r30)
/* 80080454 0007D394  81 9F 00 00 */	lwz r12, 0(r31)
/* 80080458 0007D398  81 8C 00 5C */	lwz r12, 0x5c(r12)
/* 8008045C 0007D39C  7D 89 03 A6 */	mtctr r12
/* 80080460 0007D3A0  4E 80 04 21 */	bctrl 
/* 80080464 0007D3A4  88 03 00 00 */	lbz r0, 0(r3)
/* 80080468 0007D3A8  38 80 00 01 */	li r4, 1
/* 8008046C 0007D3AC  98 1E 00 0C */	stb r0, 0xc(r30)
/* 80080470 0007D3B0  88 03 00 01 */	lbz r0, 1(r3)
/* 80080474 0007D3B4  98 1E 00 0D */	stb r0, 0xd(r30)
/* 80080478 0007D3B8  88 03 00 02 */	lbz r0, 2(r3)
/* 8008047C 0007D3BC  7F E3 FB 78 */	mr r3, r31
/* 80080480 0007D3C0  98 1E 00 0E */	stb r0, 0xe(r30)
/* 80080484 0007D3C4  81 9F 00 00 */	lwz r12, 0(r31)
/* 80080488 0007D3C8  81 8C 00 5C */	lwz r12, 0x5c(r12)
/* 8008048C 0007D3CC  7D 89 03 A6 */	mtctr r12
/* 80080490 0007D3D0  4E 80 04 21 */	bctrl 
/* 80080494 0007D3D4  88 03 00 00 */	lbz r0, 0(r3)
/* 80080498 0007D3D8  38 80 00 00 */	li r4, 0
/* 8008049C 0007D3DC  98 1E 00 10 */	stb r0, 0x10(r30)
/* 800804A0 0007D3E0  88 03 00 01 */	lbz r0, 1(r3)
/* 800804A4 0007D3E4  98 1E 00 11 */	stb r0, 0x11(r30)
/* 800804A8 0007D3E8  88 03 00 02 */	lbz r0, 2(r3)
/* 800804AC 0007D3EC  7F E3 FB 78 */	mr r3, r31
/* 800804B0 0007D3F0  98 1E 00 12 */	stb r0, 0x12(r30)
/* 800804B4 0007D3F4  81 9F 00 00 */	lwz r12, 0(r31)
/* 800804B8 0007D3F8  81 8C 00 80 */	lwz r12, 0x80(r12)
/* 800804BC 0007D3FC  7D 89 03 A6 */	mtctr r12
/* 800804C0 0007D400  4E 80 04 21 */	bctrl 
/* 800804C4 0007D404  98 7E 00 55 */	stb r3, 0x55(r30)
/* 800804C8 0007D408  7F E3 FB 78 */	mr r3, r31
/* 800804CC 0007D40C  38 80 00 01 */	li r4, 1
/* 800804D0 0007D410  81 9F 00 00 */	lwz r12, 0(r31)
/* 800804D4 0007D414  81 8C 00 80 */	lwz r12, 0x80(r12)
/* 800804D8 0007D418  7D 89 03 A6 */	mtctr r12
/* 800804DC 0007D41C  4E 80 04 21 */	bctrl 
/* 800804E0 0007D420  98 7E 00 56 */	stb r3, 0x56(r30)
/* 800804E4 0007D424  7F E3 FB 78 */	mr r3, r31
/* 800804E8 0007D428  38 80 00 00 */	li r4, 0
/* 800804EC 0007D42C  81 9F 00 00 */	lwz r12, 0(r31)
/* 800804F0 0007D430  81 8C 00 8C */	lwz r12, 0x8c(r12)
/* 800804F4 0007D434  7D 89 03 A6 */	mtctr r12
/* 800804F8 0007D438  4E 80 04 21 */	bctrl 
/* 800804FC 0007D43C  98 7E 00 57 */	stb r3, 0x57(r30)
/* 80080500 0007D440  7F E3 FB 78 */	mr r3, r31
/* 80080504 0007D444  38 80 00 01 */	li r4, 1
/* 80080508 0007D448  81 9F 00 00 */	lwz r12, 0(r31)
/* 8008050C 0007D44C  81 8C 00 8C */	lwz r12, 0x8c(r12)
/* 80080510 0007D450  7D 89 03 A6 */	mtctr r12
/* 80080514 0007D454  4E 80 04 21 */	bctrl 
/* 80080518 0007D458  98 7E 00 58 */	stb r3, 0x58(r30)
/* 8008051C 0007D45C  7F DD F3 78 */	mr r29, r30
/* 80080520 0007D460  3B 80 00 00 */	li r28, 0
.L_80080524:
/* 80080524 0007D464  7F E3 FB 78 */	mr r3, r31
/* 80080528 0007D468  7F 84 E3 78 */	mr r4, r28
/* 8008052C 0007D46C  81 9F 00 00 */	lwz r12, 0(r31)
/* 80080530 0007D470  81 8C 00 68 */	lwz r12, 0x68(r12)
/* 80080534 0007D474  7D 89 03 A6 */	mtctr r12
/* 80080538 0007D478  4E 80 04 21 */	bctrl 
/* 8008053C 0007D47C  A8 03 00 00 */	lha r0, 0(r3)
/* 80080540 0007D480  3B 9C 00 01 */	addi r28, r28, 1
/* 80080544 0007D484  28 1C 00 04 */	cmplwi r28, 4
/* 80080548 0007D488  B0 1D 00 14 */	sth r0, 0x14(r29)
/* 8008054C 0007D48C  A8 03 00 02 */	lha r0, 2(r3)
/* 80080550 0007D490  B0 1D 00 16 */	sth r0, 0x16(r29)
/* 80080554 0007D494  A8 03 00 04 */	lha r0, 4(r3)
/* 80080558 0007D498  B0 1D 00 18 */	sth r0, 0x18(r29)
/* 8008055C 0007D49C  A8 03 00 06 */	lha r0, 6(r3)
/* 80080560 0007D4A0  B0 1D 00 1A */	sth r0, 0x1a(r29)
/* 80080564 0007D4A4  3B BD 00 08 */	addi r29, r29, 8
/* 80080568 0007D4A8  41 80 FF BC */	blt .L_80080524
/* 8008056C 0007D4AC  3B 80 00 00 */	li r28, 0
/* 80080570 0007D4B0  7F DD F3 78 */	mr r29, r30
.L_80080574:
/* 80080574 0007D4B4  7F E3 FB 78 */	mr r3, r31
/* 80080578 0007D4B8  7F 84 E3 78 */	mr r4, r28
/* 8008057C 0007D4BC  81 9F 00 00 */	lwz r12, 0(r31)
/* 80080580 0007D4C0  81 8C 00 74 */	lwz r12, 0x74(r12)
/* 80080584 0007D4C4  7D 89 03 A6 */	mtctr r12
/* 80080588 0007D4C8  4E 80 04 21 */	bctrl 
/* 8008058C 0007D4CC  88 03 00 00 */	lbz r0, 0(r3)
/* 80080590 0007D4D0  3B 9C 00 01 */	addi r28, r28, 1
/* 80080594 0007D4D4  28 1C 00 04 */	cmplwi r28, 4
/* 80080598 0007D4D8  98 1D 00 45 */	stb r0, 0x45(r29)
/* 8008059C 0007D4DC  88 03 00 01 */	lbz r0, 1(r3)
/* 800805A0 0007D4E0  98 1D 00 46 */	stb r0, 0x46(r29)
/* 800805A4 0007D4E4  88 03 00 02 */	lbz r0, 2(r3)
/* 800805A8 0007D4E8  98 1D 00 47 */	stb r0, 0x47(r29)
/* 800805AC 0007D4EC  88 03 00 03 */	lbz r0, 3(r3)
/* 800805B0 0007D4F0  98 1D 00 48 */	stb r0, 0x48(r29)
/* 800805B4 0007D4F4  3B BD 00 04 */	addi r29, r29, 4
/* 800805B8 0007D4F8  41 80 FF BC */	blt .L_80080574
/* 800805BC 0007D4FC  3B 80 00 00 */	li r28, 0
.L_800805C0:
/* 800805C0 0007D500  7F E3 FB 78 */	mr r3, r31
/* 800805C4 0007D504  7F 84 E3 78 */	mr r4, r28
/* 800805C8 0007D508  81 9F 00 00 */	lwz r12, 0(r31)
/* 800805CC 0007D50C  81 8C 00 B8 */	lwz r12, 0xb8(r12)
/* 800805D0 0007D510  7D 89 03 A6 */	mtctr r12
/* 800805D4 0007D514  4E 80 04 21 */	bctrl 
/* 800805D8 0007D518  38 1C 00 59 */	addi r0, r28, 0x59
/* 800805DC 0007D51C  88 63 00 00 */	lbz r3, 0(r3)
/* 800805E0 0007D520  3B 9C 00 01 */	addi r28, r28, 1
/* 800805E4 0007D524  28 1C 00 04 */	cmplwi r28, 4
/* 800805E8 0007D528  7C 7E 01 AE */	stbx r3, r30, r0
/* 800805EC 0007D52C  41 80 FF D4 */	blt .L_800805C0
/* 800805F0 0007D530  80 01 00 24 */	lwz r0, 0x24(r1)
/* 800805F4 0007D534  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 800805F8 0007D538  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 800805FC 0007D53C  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80080600 0007D540  83 81 00 10 */	lwz r28, 0x10(r1)
/* 80080604 0007D544  7C 08 03 A6 */	mtlr r0
/* 80080608 0007D548  38 21 00 20 */	addi r1, r1, 0x20
/* 8008060C 0007D54C  4E 80 00 20 */	blr 
.endfn reset__12J3DTevBlock2FP11J3DTevBlock

.fn reset__12J3DTevBlock4FP11J3DTevBlock, global
/* 80080610 0007D550  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80080614 0007D554  7C 08 02 A6 */	mflr r0
/* 80080618 0007D558  90 01 00 24 */	stw r0, 0x24(r1)
/* 8008061C 0007D55C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80080620 0007D560  7C 9F 23 78 */	mr r31, r4
/* 80080624 0007D564  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80080628 0007D568  7C 7E 1B 78 */	mr r30, r3
/* 8008062C 0007D56C  7F E3 FB 78 */	mr r3, r31
/* 80080630 0007D570  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80080634 0007D574  93 81 00 10 */	stw r28, 0x10(r1)
/* 80080638 0007D578  81 9F 00 00 */	lwz r12, 0(r31)
/* 8008063C 0007D57C  81 8C 00 98 */	lwz r12, 0x98(r12)
/* 80080640 0007D580  7D 89 03 A6 */	mtctr r12
/* 80080644 0007D584  4E 80 04 21 */	bctrl 
/* 80080648 0007D588  98 7E 00 20 */	stb r3, 0x20(r30)
/* 8008064C 0007D58C  7F E3 FB 78 */	mr r3, r31
/* 80080650 0007D590  38 80 00 00 */	li r4, 0
/* 80080654 0007D594  81 9F 00 00 */	lwz r12, 0(r31)
/* 80080658 0007D598  81 8C 00 50 */	lwz r12, 0x50(r12)
/* 8008065C 0007D59C  7D 89 03 A6 */	mtctr r12
/* 80080660 0007D5A0  4E 80 04 21 */	bctrl 
/* 80080664 0007D5A4  B0 7E 00 08 */	sth r3, 8(r30)
/* 80080668 0007D5A8  7F E3 FB 78 */	mr r3, r31
/* 8008066C 0007D5AC  38 80 00 01 */	li r4, 1
/* 80080670 0007D5B0  81 9F 00 00 */	lwz r12, 0(r31)
/* 80080674 0007D5B4  81 8C 00 50 */	lwz r12, 0x50(r12)
/* 80080678 0007D5B8  7D 89 03 A6 */	mtctr r12
/* 8008067C 0007D5BC  4E 80 04 21 */	bctrl 
/* 80080680 0007D5C0  B0 7E 00 0A */	sth r3, 0xa(r30)
/* 80080684 0007D5C4  7F E3 FB 78 */	mr r3, r31
/* 80080688 0007D5C8  38 80 00 02 */	li r4, 2
/* 8008068C 0007D5CC  81 9F 00 00 */	lwz r12, 0(r31)
/* 80080690 0007D5D0  81 8C 00 50 */	lwz r12, 0x50(r12)
/* 80080694 0007D5D4  7D 89 03 A6 */	mtctr r12
/* 80080698 0007D5D8  4E 80 04 21 */	bctrl 
/* 8008069C 0007D5DC  B0 7E 00 0C */	sth r3, 0xc(r30)
/* 800806A0 0007D5E0  7F E3 FB 78 */	mr r3, r31
/* 800806A4 0007D5E4  38 80 00 03 */	li r4, 3
/* 800806A8 0007D5E8  81 9F 00 00 */	lwz r12, 0(r31)
/* 800806AC 0007D5EC  81 8C 00 50 */	lwz r12, 0x50(r12)
/* 800806B0 0007D5F0  7D 89 03 A6 */	mtctr r12
/* 800806B4 0007D5F4  4E 80 04 21 */	bctrl 
/* 800806B8 0007D5F8  B0 7E 00 0E */	sth r3, 0xe(r30)
/* 800806BC 0007D5FC  7F E3 FB 78 */	mr r3, r31
/* 800806C0 0007D600  38 80 00 00 */	li r4, 0
/* 800806C4 0007D604  81 9F 00 00 */	lwz r12, 0(r31)
/* 800806C8 0007D608  81 8C 00 A4 */	lwz r12, 0xa4(r12)
/* 800806CC 0007D60C  7D 89 03 A6 */	mtctr r12
/* 800806D0 0007D610  4E 80 04 21 */	bctrl 
/* 800806D4 0007D614  88 03 00 01 */	lbz r0, 1(r3)
/* 800806D8 0007D618  38 80 00 01 */	li r4, 1
/* 800806DC 0007D61C  98 1E 00 22 */	stb r0, 0x22(r30)
/* 800806E0 0007D620  88 03 00 02 */	lbz r0, 2(r3)
/* 800806E4 0007D624  98 1E 00 23 */	stb r0, 0x23(r30)
/* 800806E8 0007D628  88 03 00 03 */	lbz r0, 3(r3)
/* 800806EC 0007D62C  98 1E 00 24 */	stb r0, 0x24(r30)
/* 800806F0 0007D630  88 03 00 05 */	lbz r0, 5(r3)
/* 800806F4 0007D634  98 1E 00 26 */	stb r0, 0x26(r30)
/* 800806F8 0007D638  88 03 00 06 */	lbz r0, 6(r3)
/* 800806FC 0007D63C  98 1E 00 27 */	stb r0, 0x27(r30)
/* 80080700 0007D640  88 03 00 07 */	lbz r0, 7(r3)
/* 80080704 0007D644  7F E3 FB 78 */	mr r3, r31
/* 80080708 0007D648  98 1E 00 28 */	stb r0, 0x28(r30)
/* 8008070C 0007D64C  81 9F 00 00 */	lwz r12, 0(r31)
/* 80080710 0007D650  81 8C 00 A4 */	lwz r12, 0xa4(r12)
/* 80080714 0007D654  7D 89 03 A6 */	mtctr r12
/* 80080718 0007D658  4E 80 04 21 */	bctrl 
/* 8008071C 0007D65C  88 03 00 01 */	lbz r0, 1(r3)
/* 80080720 0007D660  38 80 00 02 */	li r4, 2
/* 80080724 0007D664  98 1E 00 2A */	stb r0, 0x2a(r30)
/* 80080728 0007D668  88 03 00 02 */	lbz r0, 2(r3)
/* 8008072C 0007D66C  98 1E 00 2B */	stb r0, 0x2b(r30)
/* 80080730 0007D670  88 03 00 03 */	lbz r0, 3(r3)
/* 80080734 0007D674  98 1E 00 2C */	stb r0, 0x2c(r30)
/* 80080738 0007D678  88 03 00 05 */	lbz r0, 5(r3)
/* 8008073C 0007D67C  98 1E 00 2E */	stb r0, 0x2e(r30)
/* 80080740 0007D680  88 03 00 06 */	lbz r0, 6(r3)
/* 80080744 0007D684  98 1E 00 2F */	stb r0, 0x2f(r30)
/* 80080748 0007D688  88 03 00 07 */	lbz r0, 7(r3)
/* 8008074C 0007D68C  7F E3 FB 78 */	mr r3, r31
/* 80080750 0007D690  98 1E 00 30 */	stb r0, 0x30(r30)
/* 80080754 0007D694  81 9F 00 00 */	lwz r12, 0(r31)
/* 80080758 0007D698  81 8C 00 A4 */	lwz r12, 0xa4(r12)
/* 8008075C 0007D69C  7D 89 03 A6 */	mtctr r12
/* 80080760 0007D6A0  4E 80 04 21 */	bctrl 
/* 80080764 0007D6A4  88 03 00 01 */	lbz r0, 1(r3)
/* 80080768 0007D6A8  38 80 00 03 */	li r4, 3
/* 8008076C 0007D6AC  98 1E 00 32 */	stb r0, 0x32(r30)
/* 80080770 0007D6B0  88 03 00 02 */	lbz r0, 2(r3)
/* 80080774 0007D6B4  98 1E 00 33 */	stb r0, 0x33(r30)
/* 80080778 0007D6B8  88 03 00 03 */	lbz r0, 3(r3)
/* 8008077C 0007D6BC  98 1E 00 34 */	stb r0, 0x34(r30)
/* 80080780 0007D6C0  88 03 00 05 */	lbz r0, 5(r3)
/* 80080784 0007D6C4  98 1E 00 36 */	stb r0, 0x36(r30)
/* 80080788 0007D6C8  88 03 00 06 */	lbz r0, 6(r3)
/* 8008078C 0007D6CC  98 1E 00 37 */	stb r0, 0x37(r30)
/* 80080790 0007D6D0  88 03 00 07 */	lbz r0, 7(r3)
/* 80080794 0007D6D4  7F E3 FB 78 */	mr r3, r31
/* 80080798 0007D6D8  98 1E 00 38 */	stb r0, 0x38(r30)
/* 8008079C 0007D6DC  81 9F 00 00 */	lwz r12, 0(r31)
/* 800807A0 0007D6E0  81 8C 00 A4 */	lwz r12, 0xa4(r12)
/* 800807A4 0007D6E4  7D 89 03 A6 */	mtctr r12
/* 800807A8 0007D6E8  4E 80 04 21 */	bctrl 
/* 800807AC 0007D6EC  88 03 00 01 */	lbz r0, 1(r3)
/* 800807B0 0007D6F0  38 80 00 00 */	li r4, 0
/* 800807B4 0007D6F4  98 1E 00 3A */	stb r0, 0x3a(r30)
/* 800807B8 0007D6F8  88 03 00 02 */	lbz r0, 2(r3)
/* 800807BC 0007D6FC  98 1E 00 3B */	stb r0, 0x3b(r30)
/* 800807C0 0007D700  88 03 00 03 */	lbz r0, 3(r3)
/* 800807C4 0007D704  98 1E 00 3C */	stb r0, 0x3c(r30)
/* 800807C8 0007D708  88 03 00 05 */	lbz r0, 5(r3)
/* 800807CC 0007D70C  98 1E 00 3E */	stb r0, 0x3e(r30)
/* 800807D0 0007D710  88 03 00 06 */	lbz r0, 6(r3)
/* 800807D4 0007D714  98 1E 00 3F */	stb r0, 0x3f(r30)
/* 800807D8 0007D718  88 03 00 07 */	lbz r0, 7(r3)
/* 800807DC 0007D71C  7F E3 FB 78 */	mr r3, r31
/* 800807E0 0007D720  98 1E 00 40 */	stb r0, 0x40(r30)
/* 800807E4 0007D724  81 9F 00 00 */	lwz r12, 0(r31)
/* 800807E8 0007D728  81 8C 00 C4 */	lwz r12, 0xc4(r12)
/* 800807EC 0007D72C  7D 89 03 A6 */	mtctr r12
/* 800807F0 0007D730  4E 80 04 21 */	bctrl 
/* 800807F4 0007D734  80 03 00 00 */	lwz r0, 0(r3)
/* 800807F8 0007D738  7F E3 FB 78 */	mr r3, r31
/* 800807FC 0007D73C  38 80 00 01 */	li r4, 1
/* 80080800 0007D740  90 1E 00 80 */	stw r0, 0x80(r30)
/* 80080804 0007D744  81 9F 00 00 */	lwz r12, 0(r31)
/* 80080808 0007D748  81 8C 00 C4 */	lwz r12, 0xc4(r12)
/* 8008080C 0007D74C  7D 89 03 A6 */	mtctr r12
/* 80080810 0007D750  4E 80 04 21 */	bctrl 
/* 80080814 0007D754  80 03 00 00 */	lwz r0, 0(r3)
/* 80080818 0007D758  7F E3 FB 78 */	mr r3, r31
/* 8008081C 0007D75C  38 80 00 02 */	li r4, 2
/* 80080820 0007D760  90 1E 00 84 */	stw r0, 0x84(r30)
/* 80080824 0007D764  81 9F 00 00 */	lwz r12, 0(r31)
/* 80080828 0007D768  81 8C 00 C4 */	lwz r12, 0xc4(r12)
/* 8008082C 0007D76C  7D 89 03 A6 */	mtctr r12
/* 80080830 0007D770  4E 80 04 21 */	bctrl 
/* 80080834 0007D774  80 03 00 00 */	lwz r0, 0(r3)
/* 80080838 0007D778  7F E3 FB 78 */	mr r3, r31
/* 8008083C 0007D77C  38 80 00 03 */	li r4, 3
/* 80080840 0007D780  90 1E 00 88 */	stw r0, 0x88(r30)
/* 80080844 0007D784  81 9F 00 00 */	lwz r12, 0(r31)
/* 80080848 0007D788  81 8C 00 C4 */	lwz r12, 0xc4(r12)
/* 8008084C 0007D78C  7D 89 03 A6 */	mtctr r12
/* 80080850 0007D790  4E 80 04 21 */	bctrl 
/* 80080854 0007D794  80 03 00 00 */	lwz r0, 0(r3)
/* 80080858 0007D798  7F E3 FB 78 */	mr r3, r31
/* 8008085C 0007D79C  38 80 00 00 */	li r4, 0
/* 80080860 0007D7A0  90 1E 00 8C */	stw r0, 0x8c(r30)
/* 80080864 0007D7A4  81 9F 00 00 */	lwz r12, 0(r31)
/* 80080868 0007D7A8  81 8C 00 5C */	lwz r12, 0x5c(r12)
/* 8008086C 0007D7AC  7D 89 03 A6 */	mtctr r12
/* 80080870 0007D7B0  4E 80 04 21 */	bctrl 
/* 80080874 0007D7B4  88 03 00 00 */	lbz r0, 0(r3)
/* 80080878 0007D7B8  38 80 00 01 */	li r4, 1
/* 8008087C 0007D7BC  98 1E 00 10 */	stb r0, 0x10(r30)
/* 80080880 0007D7C0  88 03 00 01 */	lbz r0, 1(r3)
/* 80080884 0007D7C4  98 1E 00 11 */	stb r0, 0x11(r30)
/* 80080888 0007D7C8  88 03 00 02 */	lbz r0, 2(r3)
/* 8008088C 0007D7CC  7F E3 FB 78 */	mr r3, r31
/* 80080890 0007D7D0  98 1E 00 12 */	stb r0, 0x12(r30)
/* 80080894 0007D7D4  81 9F 00 00 */	lwz r12, 0(r31)
/* 80080898 0007D7D8  81 8C 00 5C */	lwz r12, 0x5c(r12)
/* 8008089C 0007D7DC  7D 89 03 A6 */	mtctr r12
/* 800808A0 0007D7E0  4E 80 04 21 */	bctrl 
/* 800808A4 0007D7E4  88 03 00 00 */	lbz r0, 0(r3)
/* 800808A8 0007D7E8  38 80 00 02 */	li r4, 2
/* 800808AC 0007D7EC  98 1E 00 14 */	stb r0, 0x14(r30)
/* 800808B0 0007D7F0  88 03 00 01 */	lbz r0, 1(r3)
/* 800808B4 0007D7F4  98 1E 00 15 */	stb r0, 0x15(r30)
/* 800808B8 0007D7F8  88 03 00 02 */	lbz r0, 2(r3)
/* 800808BC 0007D7FC  7F E3 FB 78 */	mr r3, r31
/* 800808C0 0007D800  98 1E 00 16 */	stb r0, 0x16(r30)
/* 800808C4 0007D804  81 9F 00 00 */	lwz r12, 0(r31)
/* 800808C8 0007D808  81 8C 00 5C */	lwz r12, 0x5c(r12)
/* 800808CC 0007D80C  7D 89 03 A6 */	mtctr r12
/* 800808D0 0007D810  4E 80 04 21 */	bctrl 
/* 800808D4 0007D814  88 03 00 00 */	lbz r0, 0(r3)
/* 800808D8 0007D818  38 80 00 03 */	li r4, 3
/* 800808DC 0007D81C  98 1E 00 18 */	stb r0, 0x18(r30)
/* 800808E0 0007D820  88 03 00 01 */	lbz r0, 1(r3)
/* 800808E4 0007D824  98 1E 00 19 */	stb r0, 0x19(r30)
/* 800808E8 0007D828  88 03 00 02 */	lbz r0, 2(r3)
/* 800808EC 0007D82C  7F E3 FB 78 */	mr r3, r31
/* 800808F0 0007D830  98 1E 00 1A */	stb r0, 0x1a(r30)
/* 800808F4 0007D834  81 9F 00 00 */	lwz r12, 0(r31)
/* 800808F8 0007D838  81 8C 00 5C */	lwz r12, 0x5c(r12)
/* 800808FC 0007D83C  7D 89 03 A6 */	mtctr r12
/* 80080900 0007D840  4E 80 04 21 */	bctrl 
/* 80080904 0007D844  88 03 00 00 */	lbz r0, 0(r3)
/* 80080908 0007D848  38 80 00 00 */	li r4, 0
/* 8008090C 0007D84C  98 1E 00 1C */	stb r0, 0x1c(r30)
/* 80080910 0007D850  88 03 00 01 */	lbz r0, 1(r3)
/* 80080914 0007D854  98 1E 00 1D */	stb r0, 0x1d(r30)
/* 80080918 0007D858  88 03 00 02 */	lbz r0, 2(r3)
/* 8008091C 0007D85C  7F E3 FB 78 */	mr r3, r31
/* 80080920 0007D860  98 1E 00 1E */	stb r0, 0x1e(r30)
/* 80080924 0007D864  81 9F 00 00 */	lwz r12, 0(r31)
/* 80080928 0007D868  81 8C 00 80 */	lwz r12, 0x80(r12)
/* 8008092C 0007D86C  7D 89 03 A6 */	mtctr r12
/* 80080930 0007D870  4E 80 04 21 */	bctrl 
/* 80080934 0007D874  98 7E 00 72 */	stb r3, 0x72(r30)
/* 80080938 0007D878  7F E3 FB 78 */	mr r3, r31
/* 8008093C 0007D87C  38 80 00 01 */	li r4, 1
/* 80080940 0007D880  81 9F 00 00 */	lwz r12, 0(r31)
/* 80080944 0007D884  81 8C 00 80 */	lwz r12, 0x80(r12)
/* 80080948 0007D888  7D 89 03 A6 */	mtctr r12
/* 8008094C 0007D88C  4E 80 04 21 */	bctrl 
/* 80080950 0007D890  98 7E 00 73 */	stb r3, 0x73(r30)
/* 80080954 0007D894  7F E3 FB 78 */	mr r3, r31
/* 80080958 0007D898  38 80 00 02 */	li r4, 2
/* 8008095C 0007D89C  81 9F 00 00 */	lwz r12, 0(r31)
/* 80080960 0007D8A0  81 8C 00 80 */	lwz r12, 0x80(r12)
/* 80080964 0007D8A4  7D 89 03 A6 */	mtctr r12
/* 80080968 0007D8A8  4E 80 04 21 */	bctrl 
/* 8008096C 0007D8AC  98 7E 00 74 */	stb r3, 0x74(r30)
/* 80080970 0007D8B0  7F E3 FB 78 */	mr r3, r31
/* 80080974 0007D8B4  38 80 00 03 */	li r4, 3
/* 80080978 0007D8B8  81 9F 00 00 */	lwz r12, 0(r31)
/* 8008097C 0007D8BC  81 8C 00 80 */	lwz r12, 0x80(r12)
/* 80080980 0007D8C0  7D 89 03 A6 */	mtctr r12
/* 80080984 0007D8C4  4E 80 04 21 */	bctrl 
/* 80080988 0007D8C8  98 7E 00 75 */	stb r3, 0x75(r30)
/* 8008098C 0007D8CC  7F E3 FB 78 */	mr r3, r31
/* 80080990 0007D8D0  38 80 00 00 */	li r4, 0
/* 80080994 0007D8D4  81 9F 00 00 */	lwz r12, 0(r31)
/* 80080998 0007D8D8  81 8C 00 8C */	lwz r12, 0x8c(r12)
/* 8008099C 0007D8DC  7D 89 03 A6 */	mtctr r12
/* 800809A0 0007D8E0  4E 80 04 21 */	bctrl 
/* 800809A4 0007D8E4  98 7E 00 76 */	stb r3, 0x76(r30)
/* 800809A8 0007D8E8  7F E3 FB 78 */	mr r3, r31
/* 800809AC 0007D8EC  38 80 00 01 */	li r4, 1
/* 800809B0 0007D8F0  81 9F 00 00 */	lwz r12, 0(r31)
/* 800809B4 0007D8F4  81 8C 00 8C */	lwz r12, 0x8c(r12)
/* 800809B8 0007D8F8  7D 89 03 A6 */	mtctr r12
/* 800809BC 0007D8FC  4E 80 04 21 */	bctrl 
/* 800809C0 0007D900  98 7E 00 77 */	stb r3, 0x77(r30)
/* 800809C4 0007D904  7F E3 FB 78 */	mr r3, r31
/* 800809C8 0007D908  38 80 00 02 */	li r4, 2
/* 800809CC 0007D90C  81 9F 00 00 */	lwz r12, 0(r31)
/* 800809D0 0007D910  81 8C 00 8C */	lwz r12, 0x8c(r12)
/* 800809D4 0007D914  7D 89 03 A6 */	mtctr r12
/* 800809D8 0007D918  4E 80 04 21 */	bctrl 
/* 800809DC 0007D91C  98 7E 00 78 */	stb r3, 0x78(r30)
/* 800809E0 0007D920  7F E3 FB 78 */	mr r3, r31
/* 800809E4 0007D924  38 80 00 03 */	li r4, 3
/* 800809E8 0007D928  81 9F 00 00 */	lwz r12, 0(r31)
/* 800809EC 0007D92C  81 8C 00 8C */	lwz r12, 0x8c(r12)
/* 800809F0 0007D930  7D 89 03 A6 */	mtctr r12
/* 800809F4 0007D934  4E 80 04 21 */	bctrl 
/* 800809F8 0007D938  98 7E 00 79 */	stb r3, 0x79(r30)
/* 800809FC 0007D93C  7F DD F3 78 */	mr r29, r30
/* 80080A00 0007D940  3B 80 00 00 */	li r28, 0
.L_80080A04:
/* 80080A04 0007D944  7F E3 FB 78 */	mr r3, r31
/* 80080A08 0007D948  7F 84 E3 78 */	mr r4, r28
/* 80080A0C 0007D94C  81 9F 00 00 */	lwz r12, 0(r31)
/* 80080A10 0007D950  81 8C 00 68 */	lwz r12, 0x68(r12)
/* 80080A14 0007D954  7D 89 03 A6 */	mtctr r12
/* 80080A18 0007D958  4E 80 04 21 */	bctrl 
/* 80080A1C 0007D95C  A8 03 00 00 */	lha r0, 0(r3)
/* 80080A20 0007D960  3B 9C 00 01 */	addi r28, r28, 1
/* 80080A24 0007D964  28 1C 00 04 */	cmplwi r28, 4
/* 80080A28 0007D968  B0 1D 00 42 */	sth r0, 0x42(r29)
/* 80080A2C 0007D96C  A8 03 00 02 */	lha r0, 2(r3)
/* 80080A30 0007D970  B0 1D 00 44 */	sth r0, 0x44(r29)
/* 80080A34 0007D974  A8 03 00 04 */	lha r0, 4(r3)
/* 80080A38 0007D978  B0 1D 00 46 */	sth r0, 0x46(r29)
/* 80080A3C 0007D97C  A8 03 00 06 */	lha r0, 6(r3)
/* 80080A40 0007D980  B0 1D 00 48 */	sth r0, 0x48(r29)
/* 80080A44 0007D984  3B BD 00 08 */	addi r29, r29, 8
/* 80080A48 0007D988  41 80 FF BC */	blt .L_80080A04
/* 80080A4C 0007D98C  3B 80 00 00 */	li r28, 0
/* 80080A50 0007D990  7F DD F3 78 */	mr r29, r30
.L_80080A54:
/* 80080A54 0007D994  7F E3 FB 78 */	mr r3, r31
/* 80080A58 0007D998  7F 84 E3 78 */	mr r4, r28
/* 80080A5C 0007D99C  81 9F 00 00 */	lwz r12, 0(r31)
/* 80080A60 0007D9A0  81 8C 00 74 */	lwz r12, 0x74(r12)
/* 80080A64 0007D9A4  7D 89 03 A6 */	mtctr r12
/* 80080A68 0007D9A8  4E 80 04 21 */	bctrl 
/* 80080A6C 0007D9AC  88 03 00 00 */	lbz r0, 0(r3)
/* 80080A70 0007D9B0  3B 9C 00 01 */	addi r28, r28, 1
/* 80080A74 0007D9B4  28 1C 00 04 */	cmplwi r28, 4
/* 80080A78 0007D9B8  98 1D 00 62 */	stb r0, 0x62(r29)
/* 80080A7C 0007D9BC  88 03 00 01 */	lbz r0, 1(r3)
/* 80080A80 0007D9C0  98 1D 00 63 */	stb r0, 0x63(r29)
/* 80080A84 0007D9C4  88 03 00 02 */	lbz r0, 2(r3)
/* 80080A88 0007D9C8  98 1D 00 64 */	stb r0, 0x64(r29)
/* 80080A8C 0007D9CC  88 03 00 03 */	lbz r0, 3(r3)
/* 80080A90 0007D9D0  98 1D 00 65 */	stb r0, 0x65(r29)
/* 80080A94 0007D9D4  3B BD 00 04 */	addi r29, r29, 4
/* 80080A98 0007D9D8  41 80 FF BC */	blt .L_80080A54
/* 80080A9C 0007D9DC  3B 80 00 00 */	li r28, 0
.L_80080AA0:
/* 80080AA0 0007D9E0  7F E3 FB 78 */	mr r3, r31
/* 80080AA4 0007D9E4  7F 84 E3 78 */	mr r4, r28
/* 80080AA8 0007D9E8  81 9F 00 00 */	lwz r12, 0(r31)
/* 80080AAC 0007D9EC  81 8C 00 B8 */	lwz r12, 0xb8(r12)
/* 80080AB0 0007D9F0  7D 89 03 A6 */	mtctr r12
/* 80080AB4 0007D9F4  4E 80 04 21 */	bctrl 
/* 80080AB8 0007D9F8  38 1C 00 7A */	addi r0, r28, 0x7a
/* 80080ABC 0007D9FC  88 63 00 00 */	lbz r3, 0(r3)
/* 80080AC0 0007DA00  3B 9C 00 01 */	addi r28, r28, 1
/* 80080AC4 0007DA04  28 1C 00 04 */	cmplwi r28, 4
/* 80080AC8 0007DA08  7C 7E 01 AE */	stbx r3, r30, r0
/* 80080ACC 0007DA0C  41 80 FF D4 */	blt .L_80080AA0
/* 80080AD0 0007DA10  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80080AD4 0007DA14  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80080AD8 0007DA18  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80080ADC 0007DA1C  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80080AE0 0007DA20  83 81 00 10 */	lwz r28, 0x10(r1)
/* 80080AE4 0007DA24  7C 08 03 A6 */	mtlr r0
/* 80080AE8 0007DA28  38 21 00 20 */	addi r1, r1, 0x20
/* 80080AEC 0007DA2C  4E 80 00 20 */	blr 
.endfn reset__12J3DTevBlock4FP11J3DTevBlock

.fn reset__13J3DTevBlock16FP11J3DTevBlock, global
/* 80080AF0 0007DA30  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80080AF4 0007DA34  7C 08 02 A6 */	mflr r0
/* 80080AF8 0007DA38  90 01 00 24 */	stw r0, 0x24(r1)
/* 80080AFC 0007DA3C  BF 61 00 0C */	stmw r27, 0xc(r1)
/* 80080B00 0007DA40  7C 9F 23 78 */	mr r31, r4
/* 80080B04 0007DA44  7C 7E 1B 78 */	mr r30, r3
/* 80080B08 0007DA48  7F E3 FB 78 */	mr r3, r31
/* 80080B0C 0007DA4C  81 9F 00 00 */	lwz r12, 0(r31)
/* 80080B10 0007DA50  81 8C 00 98 */	lwz r12, 0x98(r12)
/* 80080B14 0007DA54  7D 89 03 A6 */	mtctr r12
/* 80080B18 0007DA58  4E 80 04 21 */	bctrl 
/* 80080B1C 0007DA5C  98 7E 00 58 */	stb r3, 0x58(r30)
/* 80080B20 0007DA60  7F DD F3 78 */	mr r29, r30
/* 80080B24 0007DA64  3B 80 00 00 */	li r28, 0
.L_80080B28:
/* 80080B28 0007DA68  7F E3 FB 78 */	mr r3, r31
/* 80080B2C 0007DA6C  7F 84 E3 78 */	mr r4, r28
/* 80080B30 0007DA70  81 9F 00 00 */	lwz r12, 0(r31)
/* 80080B34 0007DA74  81 8C 00 50 */	lwz r12, 0x50(r12)
/* 80080B38 0007DA78  7D 89 03 A6 */	mtctr r12
/* 80080B3C 0007DA7C  4E 80 04 21 */	bctrl 
/* 80080B40 0007DA80  3B 9C 00 01 */	addi r28, r28, 1
/* 80080B44 0007DA84  B0 7D 00 08 */	sth r3, 8(r29)
/* 80080B48 0007DA88  28 1C 00 08 */	cmplwi r28, 8
/* 80080B4C 0007DA8C  3B BD 00 02 */	addi r29, r29, 2
/* 80080B50 0007DA90  41 80 FF D8 */	blt .L_80080B28
/* 80080B54 0007DA94  3B 80 00 00 */	li r28, 0
/* 80080B58 0007DA98  7F DD F3 78 */	mr r29, r30
.L_80080B5C:
/* 80080B5C 0007DA9C  7F E3 FB 78 */	mr r3, r31
/* 80080B60 0007DAA0  7F 84 E3 78 */	mr r4, r28
/* 80080B64 0007DAA4  81 9F 00 00 */	lwz r12, 0(r31)
/* 80080B68 0007DAA8  81 8C 00 5C */	lwz r12, 0x5c(r12)
/* 80080B6C 0007DAAC  7D 89 03 A6 */	mtctr r12
/* 80080B70 0007DAB0  4E 80 04 21 */	bctrl 
/* 80080B74 0007DAB4  88 03 00 00 */	lbz r0, 0(r3)
/* 80080B78 0007DAB8  3B 9C 00 01 */	addi r28, r28, 1
/* 80080B7C 0007DABC  28 1C 00 10 */	cmplwi r28, 0x10
/* 80080B80 0007DAC0  98 1D 00 18 */	stb r0, 0x18(r29)
/* 80080B84 0007DAC4  88 03 00 01 */	lbz r0, 1(r3)
/* 80080B88 0007DAC8  98 1D 00 19 */	stb r0, 0x19(r29)
/* 80080B8C 0007DACC  88 03 00 02 */	lbz r0, 2(r3)
/* 80080B90 0007DAD0  98 1D 00 1A */	stb r0, 0x1a(r29)
/* 80080B94 0007DAD4  3B BD 00 04 */	addi r29, r29, 4
/* 80080B98 0007DAD8  41 80 FF C4 */	blt .L_80080B5C
/* 80080B9C 0007DADC  7F DD F3 78 */	mr r29, r30
/* 80080BA0 0007DAE0  7F DC F3 78 */	mr r28, r30
/* 80080BA4 0007DAE4  3B 60 00 00 */	li r27, 0
.L_80080BA8:
/* 80080BA8 0007DAE8  7F E3 FB 78 */	mr r3, r31
/* 80080BAC 0007DAEC  7F 64 DB 78 */	mr r4, r27
/* 80080BB0 0007DAF0  81 9F 00 00 */	lwz r12, 0(r31)
/* 80080BB4 0007DAF4  81 8C 00 A4 */	lwz r12, 0xa4(r12)
/* 80080BB8 0007DAF8  7D 89 03 A6 */	mtctr r12
/* 80080BBC 0007DAFC  4E 80 04 21 */	bctrl 
/* 80080BC0 0007DB00  88 03 00 01 */	lbz r0, 1(r3)
/* 80080BC4 0007DB04  7F 64 DB 78 */	mr r4, r27
/* 80080BC8 0007DB08  98 1D 00 5A */	stb r0, 0x5a(r29)
/* 80080BCC 0007DB0C  88 03 00 02 */	lbz r0, 2(r3)
/* 80080BD0 0007DB10  98 1D 00 5B */	stb r0, 0x5b(r29)
/* 80080BD4 0007DB14  88 03 00 03 */	lbz r0, 3(r3)
/* 80080BD8 0007DB18  98 1D 00 5C */	stb r0, 0x5c(r29)
/* 80080BDC 0007DB1C  88 03 00 05 */	lbz r0, 5(r3)
/* 80080BE0 0007DB20  98 1D 00 5E */	stb r0, 0x5e(r29)
/* 80080BE4 0007DB24  88 03 00 06 */	lbz r0, 6(r3)
/* 80080BE8 0007DB28  98 1D 00 5F */	stb r0, 0x5f(r29)
/* 80080BEC 0007DB2C  88 03 00 07 */	lbz r0, 7(r3)
/* 80080BF0 0007DB30  7F E3 FB 78 */	mr r3, r31
/* 80080BF4 0007DB34  98 1D 00 60 */	stb r0, 0x60(r29)
/* 80080BF8 0007DB38  81 9F 00 00 */	lwz r12, 0(r31)
/* 80080BFC 0007DB3C  81 8C 00 C4 */	lwz r12, 0xc4(r12)
/* 80080C00 0007DB40  7D 89 03 A6 */	mtctr r12
/* 80080C04 0007DB44  4E 80 04 21 */	bctrl 
/* 80080C08 0007DB48  80 03 00 00 */	lwz r0, 0(r3)
/* 80080C0C 0007DB4C  3B 7B 00 01 */	addi r27, r27, 1
/* 80080C10 0007DB50  28 1B 00 10 */	cmplwi r27, 0x10
/* 80080C14 0007DB54  3B BD 00 08 */	addi r29, r29, 8
/* 80080C18 0007DB58  90 1C 01 30 */	stw r0, 0x130(r28)
/* 80080C1C 0007DB5C  3B 9C 00 04 */	addi r28, r28, 4
/* 80080C20 0007DB60  41 80 FF 88 */	blt .L_80080BA8
/* 80080C24 0007DB64  3B 60 00 00 */	li r27, 0
/* 80080C28 0007DB68  7F DC F3 78 */	mr r28, r30
.L_80080C2C:
/* 80080C2C 0007DB6C  7F E3 FB 78 */	mr r3, r31
/* 80080C30 0007DB70  7F 64 DB 78 */	mr r4, r27
/* 80080C34 0007DB74  81 9F 00 00 */	lwz r12, 0(r31)
/* 80080C38 0007DB78  81 8C 00 68 */	lwz r12, 0x68(r12)
/* 80080C3C 0007DB7C  7D 89 03 A6 */	mtctr r12
/* 80080C40 0007DB80  4E 80 04 21 */	bctrl 
/* 80080C44 0007DB84  A8 03 00 00 */	lha r0, 0(r3)
/* 80080C48 0007DB88  3B 7B 00 01 */	addi r27, r27, 1
/* 80080C4C 0007DB8C  28 1B 00 04 */	cmplwi r27, 4
/* 80080C50 0007DB90  B0 1C 00 DA */	sth r0, 0xda(r28)
/* 80080C54 0007DB94  A8 03 00 02 */	lha r0, 2(r3)
/* 80080C58 0007DB98  B0 1C 00 DC */	sth r0, 0xdc(r28)
/* 80080C5C 0007DB9C  A8 03 00 04 */	lha r0, 4(r3)
/* 80080C60 0007DBA0  B0 1C 00 DE */	sth r0, 0xde(r28)
/* 80080C64 0007DBA4  A8 03 00 06 */	lha r0, 6(r3)
/* 80080C68 0007DBA8  B0 1C 00 E0 */	sth r0, 0xe0(r28)
/* 80080C6C 0007DBAC  3B 9C 00 08 */	addi r28, r28, 8
/* 80080C70 0007DBB0  41 80 FF BC */	blt .L_80080C2C
/* 80080C74 0007DBB4  3B 60 00 00 */	li r27, 0
/* 80080C78 0007DBB8  7F DC F3 78 */	mr r28, r30
.L_80080C7C:
/* 80080C7C 0007DBBC  7F E3 FB 78 */	mr r3, r31
/* 80080C80 0007DBC0  7F 64 DB 78 */	mr r4, r27
/* 80080C84 0007DBC4  81 9F 00 00 */	lwz r12, 0(r31)
/* 80080C88 0007DBC8  81 8C 00 74 */	lwz r12, 0x74(r12)
/* 80080C8C 0007DBCC  7D 89 03 A6 */	mtctr r12
/* 80080C90 0007DBD0  4E 80 04 21 */	bctrl 
/* 80080C94 0007DBD4  88 03 00 00 */	lbz r0, 0(r3)
/* 80080C98 0007DBD8  3B 7B 00 01 */	addi r27, r27, 1
/* 80080C9C 0007DBDC  28 1B 00 04 */	cmplwi r27, 4
/* 80080CA0 0007DBE0  98 1C 00 FA */	stb r0, 0xfa(r28)
/* 80080CA4 0007DBE4  88 03 00 01 */	lbz r0, 1(r3)
/* 80080CA8 0007DBE8  98 1C 00 FB */	stb r0, 0xfb(r28)
/* 80080CAC 0007DBEC  88 03 00 02 */	lbz r0, 2(r3)
/* 80080CB0 0007DBF0  98 1C 00 FC */	stb r0, 0xfc(r28)
/* 80080CB4 0007DBF4  88 03 00 03 */	lbz r0, 3(r3)
/* 80080CB8 0007DBF8  98 1C 00 FD */	stb r0, 0xfd(r28)
/* 80080CBC 0007DBFC  3B 9C 00 04 */	addi r28, r28, 4
/* 80080CC0 0007DC00  41 80 FF BC */	blt .L_80080C7C
/* 80080CC4 0007DC04  3B 60 00 00 */	li r27, 0
.L_80080CC8:
/* 80080CC8 0007DC08  7F E3 FB 78 */	mr r3, r31
/* 80080CCC 0007DC0C  7F 64 DB 78 */	mr r4, r27
/* 80080CD0 0007DC10  81 9F 00 00 */	lwz r12, 0(r31)
/* 80080CD4 0007DC14  81 8C 00 80 */	lwz r12, 0x80(r12)
/* 80080CD8 0007DC18  7D 89 03 A6 */	mtctr r12
/* 80080CDC 0007DC1C  4E 80 04 21 */	bctrl 
/* 80080CE0 0007DC20  38 1B 01 0A */	addi r0, r27, 0x10a
/* 80080CE4 0007DC24  3B 7B 00 01 */	addi r27, r27, 1
/* 80080CE8 0007DC28  28 1B 00 10 */	cmplwi r27, 0x10
/* 80080CEC 0007DC2C  7C 7E 01 AE */	stbx r3, r30, r0
/* 80080CF0 0007DC30  41 80 FF D8 */	blt .L_80080CC8
/* 80080CF4 0007DC34  3B 60 00 00 */	li r27, 0
.L_80080CF8:
/* 80080CF8 0007DC38  7F E3 FB 78 */	mr r3, r31
/* 80080CFC 0007DC3C  7F 64 DB 78 */	mr r4, r27
/* 80080D00 0007DC40  81 9F 00 00 */	lwz r12, 0(r31)
/* 80080D04 0007DC44  81 8C 00 8C */	lwz r12, 0x8c(r12)
/* 80080D08 0007DC48  7D 89 03 A6 */	mtctr r12
/* 80080D0C 0007DC4C  4E 80 04 21 */	bctrl 
/* 80080D10 0007DC50  38 1B 01 1A */	addi r0, r27, 0x11a
/* 80080D14 0007DC54  3B 7B 00 01 */	addi r27, r27, 1
/* 80080D18 0007DC58  28 1B 00 10 */	cmplwi r27, 0x10
/* 80080D1C 0007DC5C  7C 7E 01 AE */	stbx r3, r30, r0
/* 80080D20 0007DC60  41 80 FF D8 */	blt .L_80080CF8
/* 80080D24 0007DC64  3B 60 00 00 */	li r27, 0
.L_80080D28:
/* 80080D28 0007DC68  7F E3 FB 78 */	mr r3, r31
/* 80080D2C 0007DC6C  7F 64 DB 78 */	mr r4, r27
/* 80080D30 0007DC70  81 9F 00 00 */	lwz r12, 0(r31)
/* 80080D34 0007DC74  81 8C 00 B8 */	lwz r12, 0xb8(r12)
/* 80080D38 0007DC78  7D 89 03 A6 */	mtctr r12
/* 80080D3C 0007DC7C  4E 80 04 21 */	bctrl 
/* 80080D40 0007DC80  38 1B 01 2A */	addi r0, r27, 0x12a
/* 80080D44 0007DC84  88 63 00 00 */	lbz r3, 0(r3)
/* 80080D48 0007DC88  3B 7B 00 01 */	addi r27, r27, 1
/* 80080D4C 0007DC8C  28 1B 00 04 */	cmplwi r27, 4
/* 80080D50 0007DC90  7C 7E 01 AE */	stbx r3, r30, r0
/* 80080D54 0007DC94  41 80 FF D4 */	blt .L_80080D28
/* 80080D58 0007DC98  BB 61 00 0C */	lmw r27, 0xc(r1)
/* 80080D5C 0007DC9C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80080D60 0007DCA0  7C 08 03 A6 */	mtlr r0
/* 80080D64 0007DCA4  38 21 00 20 */	addi r1, r1, 0x20
/* 80080D68 0007DCA8  4E 80 00 20 */	blr 
.endfn reset__13J3DTevBlock16FP11J3DTevBlock

.fn reset__15J3DIndBlockFullFP11J3DIndBlock, global
/* 80080D6C 0007DCAC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80080D70 0007DCB0  7C 08 02 A6 */	mflr r0
/* 80080D74 0007DCB4  90 01 00 24 */	stw r0, 0x24(r1)
/* 80080D78 0007DCB8  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80080D7C 0007DCBC  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80080D80 0007DCC0  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80080D84 0007DCC4  7C 9D 23 78 */	mr r29, r4
/* 80080D88 0007DCC8  93 81 00 10 */	stw r28, 0x10(r1)
/* 80080D8C 0007DCCC  7C 7C 1B 78 */	mr r28, r3
/* 80080D90 0007DCD0  7F A3 EB 78 */	mr r3, r29
/* 80080D94 0007DCD4  81 9D 00 00 */	lwz r12, 0(r29)
/* 80080D98 0007DCD8  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80080D9C 0007DCDC  7D 89 03 A6 */	mtctr r12
/* 80080DA0 0007DCE0  4E 80 04 21 */	bctrl 
/* 80080DA4 0007DCE4  98 7C 00 04 */	stb r3, 4(r28)
/* 80080DA8 0007DCE8  7F 9F E3 78 */	mr r31, r28
/* 80080DAC 0007DCEC  3B C0 00 00 */	li r30, 0
.L_80080DB0:
/* 80080DB0 0007DCF0  7F A3 EB 78 */	mr r3, r29
/* 80080DB4 0007DCF4  7F C4 F3 78 */	mr r4, r30
/* 80080DB8 0007DCF8  81 9D 00 00 */	lwz r12, 0(r29)
/* 80080DBC 0007DCFC  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 80080DC0 0007DD00  7D 89 03 A6 */	mtctr r12
/* 80080DC4 0007DD04  4E 80 04 21 */	bctrl 
/* 80080DC8 0007DD08  88 03 00 00 */	lbz r0, 0(r3)
/* 80080DCC 0007DD0C  3B DE 00 01 */	addi r30, r30, 1
/* 80080DD0 0007DD10  28 1E 00 04 */	cmplwi r30, 4
/* 80080DD4 0007DD14  98 1F 00 05 */	stb r0, 5(r31)
/* 80080DD8 0007DD18  88 03 00 01 */	lbz r0, 1(r3)
/* 80080DDC 0007DD1C  98 1F 00 06 */	stb r0, 6(r31)
/* 80080DE0 0007DD20  3B FF 00 04 */	addi r31, r31, 4
/* 80080DE4 0007DD24  41 80 FF CC */	blt .L_80080DB0
/* 80080DE8 0007DD28  3B C0 00 00 */	li r30, 0
/* 80080DEC 0007DD2C  7F 9F E3 78 */	mr r31, r28
.L_80080DF0:
/* 80080DF0 0007DD30  7F A3 EB 78 */	mr r3, r29
/* 80080DF4 0007DD34  7F C4 F3 78 */	mr r4, r30
/* 80080DF8 0007DD38  81 9D 00 00 */	lwz r12, 0(r29)
/* 80080DFC 0007DD3C  81 8C 00 38 */	lwz r12, 0x38(r12)
/* 80080E00 0007DD40  7D 89 03 A6 */	mtctr r12
/* 80080E04 0007DD44  4E 80 04 21 */	bctrl 
/* 80080E08 0007DD48  C0 03 00 00 */	lfs f0, 0(r3)
/* 80080E0C 0007DD4C  3B DE 00 01 */	addi r30, r30, 1
/* 80080E10 0007DD50  28 1E 00 03 */	cmplwi r30, 3
/* 80080E14 0007DD54  D0 1F 00 18 */	stfs f0, 0x18(r31)
/* 80080E18 0007DD58  C0 03 00 04 */	lfs f0, 4(r3)
/* 80080E1C 0007DD5C  D0 1F 00 1C */	stfs f0, 0x1c(r31)
/* 80080E20 0007DD60  C0 03 00 08 */	lfs f0, 8(r3)
/* 80080E24 0007DD64  D0 1F 00 20 */	stfs f0, 0x20(r31)
/* 80080E28 0007DD68  C0 03 00 0C */	lfs f0, 0xc(r3)
/* 80080E2C 0007DD6C  D0 1F 00 24 */	stfs f0, 0x24(r31)
/* 80080E30 0007DD70  C0 03 00 10 */	lfs f0, 0x10(r3)
/* 80080E34 0007DD74  D0 1F 00 28 */	stfs f0, 0x28(r31)
/* 80080E38 0007DD78  C0 03 00 14 */	lfs f0, 0x14(r3)
/* 80080E3C 0007DD7C  D0 1F 00 2C */	stfs f0, 0x2c(r31)
/* 80080E40 0007DD80  88 03 00 18 */	lbz r0, 0x18(r3)
/* 80080E44 0007DD84  98 1F 00 30 */	stb r0, 0x30(r31)
/* 80080E48 0007DD88  3B FF 00 1C */	addi r31, r31, 0x1c
/* 80080E4C 0007DD8C  41 80 FF A4 */	blt .L_80080DF0
/* 80080E50 0007DD90  3B C0 00 00 */	li r30, 0
/* 80080E54 0007DD94  7F 9F E3 78 */	mr r31, r28
.L_80080E58:
/* 80080E58 0007DD98  7F A3 EB 78 */	mr r3, r29
/* 80080E5C 0007DD9C  7F C4 F3 78 */	mr r4, r30
/* 80080E60 0007DDA0  81 9D 00 00 */	lwz r12, 0(r29)
/* 80080E64 0007DDA4  81 8C 00 44 */	lwz r12, 0x44(r12)
/* 80080E68 0007DDA8  7D 89 03 A6 */	mtctr r12
/* 80080E6C 0007DDAC  4E 80 04 21 */	bctrl 
/* 80080E70 0007DDB0  88 03 00 00 */	lbz r0, 0(r3)
/* 80080E74 0007DDB4  3B DE 00 01 */	addi r30, r30, 1
/* 80080E78 0007DDB8  28 1E 00 04 */	cmplwi r30, 4
/* 80080E7C 0007DDBC  98 1F 00 6C */	stb r0, 0x6c(r31)
/* 80080E80 0007DDC0  88 03 00 01 */	lbz r0, 1(r3)
/* 80080E84 0007DDC4  98 1F 00 6D */	stb r0, 0x6d(r31)
/* 80080E88 0007DDC8  3B FF 00 04 */	addi r31, r31, 4
/* 80080E8C 0007DDCC  41 80 FF CC */	blt .L_80080E58
/* 80080E90 0007DDD0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80080E94 0007DDD4  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80080E98 0007DDD8  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80080E9C 0007DDDC  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80080EA0 0007DDE0  83 81 00 10 */	lwz r28, 0x10(r1)
/* 80080EA4 0007DDE4  7C 08 03 A6 */	mtlr r0
/* 80080EA8 0007DDE8  38 21 00 20 */	addi r1, r1, 0x20
/* 80080EAC 0007DDEC  4E 80 00 20 */	blr 
.endfn reset__15J3DIndBlockFullFP11J3DIndBlock

.fn reset__16J3DPEBlockFogOffFP10J3DPEBlock, global
/* 80080EB0 0007DDF0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80080EB4 0007DDF4  7C 08 02 A6 */	mflr r0
/* 80080EB8 0007DDF8  90 01 00 14 */	stw r0, 0x14(r1)
/* 80080EBC 0007DDFC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80080EC0 0007DE00  7C 9F 23 78 */	mr r31, r4
/* 80080EC4 0007DE04  93 C1 00 08 */	stw r30, 8(r1)
/* 80080EC8 0007DE08  7C 7E 1B 78 */	mr r30, r3
/* 80080ECC 0007DE0C  7F E3 FB 78 */	mr r3, r31
/* 80080ED0 0007DE10  81 9F 00 00 */	lwz r12, 0(r31)
/* 80080ED4 0007DE14  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 80080ED8 0007DE18  7D 89 03 A6 */	mtctr r12
/* 80080EDC 0007DE1C  4E 80 04 21 */	bctrl 
/* 80080EE0 0007DE20  3C 80 50 45 */	lis r4, 0x5045464C@ha
/* 80080EE4 0007DE24  38 04 46 4C */	addi r0, r4, 0x5045464C@l
/* 80080EE8 0007DE28  7C 03 00 00 */	cmpw r3, r0
/* 80080EEC 0007DE2C  41 82 00 18 */	beq .L_80080F04
/* 80080EF0 0007DE30  40 80 00 A8 */	bge .L_80080F98
/* 80080EF4 0007DE34  38 04 46 47 */	addi r0, r4, 0x4647
/* 80080EF8 0007DE38  7C 03 00 00 */	cmpw r3, r0
/* 80080EFC 0007DE3C  41 82 00 08 */	beq .L_80080F04
/* 80080F00 0007DE40  48 00 00 98 */	b .L_80080F98
.L_80080F04:
/* 80080F04 0007DE44  7F E3 FB 78 */	mr r3, r31
/* 80080F08 0007DE48  81 9F 00 00 */	lwz r12, 0(r31)
/* 80080F0C 0007DE4C  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 80080F10 0007DE50  7D 89 03 A6 */	mtctr r12
/* 80080F14 0007DE54  4E 80 04 21 */	bctrl 
/* 80080F18 0007DE58  A0 03 00 00 */	lhz r0, 0(r3)
/* 80080F1C 0007DE5C  B0 1E 00 04 */	sth r0, 4(r30)
/* 80080F20 0007DE60  88 03 00 02 */	lbz r0, 2(r3)
/* 80080F24 0007DE64  98 1E 00 06 */	stb r0, 6(r30)
/* 80080F28 0007DE68  88 03 00 03 */	lbz r0, 3(r3)
/* 80080F2C 0007DE6C  7F E3 FB 78 */	mr r3, r31
/* 80080F30 0007DE70  98 1E 00 07 */	stb r0, 7(r30)
/* 80080F34 0007DE74  81 9F 00 00 */	lwz r12, 0(r31)
/* 80080F38 0007DE78  81 8C 00 48 */	lwz r12, 0x48(r12)
/* 80080F3C 0007DE7C  7D 89 03 A6 */	mtctr r12
/* 80080F40 0007DE80  4E 80 04 21 */	bctrl 
/* 80080F44 0007DE84  88 03 00 00 */	lbz r0, 0(r3)
/* 80080F48 0007DE88  98 1E 00 08 */	stb r0, 8(r30)
/* 80080F4C 0007DE8C  88 03 00 01 */	lbz r0, 1(r3)
/* 80080F50 0007DE90  98 1E 00 09 */	stb r0, 9(r30)
/* 80080F54 0007DE94  88 03 00 02 */	lbz r0, 2(r3)
/* 80080F58 0007DE98  98 1E 00 0A */	stb r0, 0xa(r30)
/* 80080F5C 0007DE9C  88 03 00 03 */	lbz r0, 3(r3)
/* 80080F60 0007DEA0  7F E3 FB 78 */	mr r3, r31
/* 80080F64 0007DEA4  98 1E 00 0B */	stb r0, 0xb(r30)
/* 80080F68 0007DEA8  81 9F 00 00 */	lwz r12, 0(r31)
/* 80080F6C 0007DEAC  81 8C 00 54 */	lwz r12, 0x54(r12)
/* 80080F70 0007DEB0  7D 89 03 A6 */	mtctr r12
/* 80080F74 0007DEB4  4E 80 04 21 */	bctrl 
/* 80080F78 0007DEB8  A0 03 00 00 */	lhz r0, 0(r3)
/* 80080F7C 0007DEBC  7F E3 FB 78 */	mr r3, r31
/* 80080F80 0007DEC0  B0 1E 00 0C */	sth r0, 0xc(r30)
/* 80080F84 0007DEC4  81 9F 00 00 */	lwz r12, 0(r31)
/* 80080F88 0007DEC8  81 8C 00 60 */	lwz r12, 0x60(r12)
/* 80080F8C 0007DECC  7D 89 03 A6 */	mtctr r12
/* 80080F90 0007DED0  4E 80 04 21 */	bctrl 
/* 80080F94 0007DED4  98 7E 00 0E */	stb r3, 0xe(r30)
.L_80080F98:
/* 80080F98 0007DED8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80080F9C 0007DEDC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80080FA0 0007DEE0  83 C1 00 08 */	lwz r30, 8(r1)
/* 80080FA4 0007DEE4  7C 08 03 A6 */	mtlr r0
/* 80080FA8 0007DEE8  38 21 00 10 */	addi r1, r1, 0x10
/* 80080FAC 0007DEEC  4E 80 00 20 */	blr 
.endfn reset__16J3DPEBlockFogOffFP10J3DPEBlock

.fn reset__14J3DPEBlockFullFP10J3DPEBlock, global
/* 80080FB0 0007DEF0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80080FB4 0007DEF4  7C 08 02 A6 */	mflr r0
/* 80080FB8 0007DEF8  90 01 00 14 */	stw r0, 0x14(r1)
/* 80080FBC 0007DEFC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80080FC0 0007DF00  7C 9F 23 78 */	mr r31, r4
/* 80080FC4 0007DF04  93 C1 00 08 */	stw r30, 8(r1)
/* 80080FC8 0007DF08  7C 7E 1B 78 */	mr r30, r3
/* 80080FCC 0007DF0C  7F E3 FB 78 */	mr r3, r31
/* 80080FD0 0007DF10  81 9F 00 00 */	lwz r12, 0(r31)
/* 80080FD4 0007DF14  81 8C 00 30 */	lwz r12, 0x30(r12)
/* 80080FD8 0007DF18  7D 89 03 A6 */	mtctr r12
/* 80080FDC 0007DF1C  4E 80 04 21 */	bctrl 
/* 80080FE0 0007DF20  28 03 00 00 */	cmplwi r3, 0
/* 80080FE4 0007DF24  41 82 00 C0 */	beq .L_800810A4
/* 80080FE8 0007DF28  7F E3 FB 78 */	mr r3, r31
/* 80080FEC 0007DF2C  81 9F 00 00 */	lwz r12, 0(r31)
/* 80080FF0 0007DF30  81 8C 00 30 */	lwz r12, 0x30(r12)
/* 80080FF4 0007DF34  7D 89 03 A6 */	mtctr r12
/* 80080FF8 0007DF38  4E 80 04 21 */	bctrl 
/* 80080FFC 0007DF3C  88 03 00 00 */	lbz r0, 0(r3)
/* 80081000 0007DF40  98 1E 00 04 */	stb r0, 4(r30)
/* 80081004 0007DF44  88 03 00 01 */	lbz r0, 1(r3)
/* 80081008 0007DF48  98 1E 00 05 */	stb r0, 5(r30)
/* 8008100C 0007DF4C  A0 03 00 02 */	lhz r0, 2(r3)
/* 80081010 0007DF50  B0 1E 00 06 */	sth r0, 6(r30)
/* 80081014 0007DF54  C0 03 00 04 */	lfs f0, 4(r3)
/* 80081018 0007DF58  D0 1E 00 08 */	stfs f0, 8(r30)
/* 8008101C 0007DF5C  C0 03 00 08 */	lfs f0, 8(r3)
/* 80081020 0007DF60  D0 1E 00 0C */	stfs f0, 0xc(r30)
/* 80081024 0007DF64  C0 03 00 0C */	lfs f0, 0xc(r3)
/* 80081028 0007DF68  D0 1E 00 10 */	stfs f0, 0x10(r30)
/* 8008102C 0007DF6C  C0 03 00 10 */	lfs f0, 0x10(r3)
/* 80081030 0007DF70  D0 1E 00 14 */	stfs f0, 0x14(r30)
/* 80081034 0007DF74  88 03 00 14 */	lbz r0, 0x14(r3)
/* 80081038 0007DF78  98 1E 00 18 */	stb r0, 0x18(r30)
/* 8008103C 0007DF7C  88 03 00 15 */	lbz r0, 0x15(r3)
/* 80081040 0007DF80  98 1E 00 19 */	stb r0, 0x19(r30)
/* 80081044 0007DF84  88 03 00 16 */	lbz r0, 0x16(r3)
/* 80081048 0007DF88  98 1E 00 1A */	stb r0, 0x1a(r30)
/* 8008104C 0007DF8C  88 03 00 17 */	lbz r0, 0x17(r3)
/* 80081050 0007DF90  98 1E 00 1B */	stb r0, 0x1b(r30)
/* 80081054 0007DF94  A0 03 00 18 */	lhz r0, 0x18(r3)
/* 80081058 0007DF98  B0 1E 00 1C */	sth r0, 0x1c(r30)
/* 8008105C 0007DF9C  A0 03 00 1A */	lhz r0, 0x1a(r3)
/* 80081060 0007DFA0  B0 1E 00 1E */	sth r0, 0x1e(r30)
/* 80081064 0007DFA4  A0 03 00 1C */	lhz r0, 0x1c(r3)
/* 80081068 0007DFA8  B0 1E 00 20 */	sth r0, 0x20(r30)
/* 8008106C 0007DFAC  A0 03 00 1E */	lhz r0, 0x1e(r3)
/* 80081070 0007DFB0  B0 1E 00 22 */	sth r0, 0x22(r30)
/* 80081074 0007DFB4  A0 03 00 20 */	lhz r0, 0x20(r3)
/* 80081078 0007DFB8  B0 1E 00 24 */	sth r0, 0x24(r30)
/* 8008107C 0007DFBC  A0 03 00 22 */	lhz r0, 0x22(r3)
/* 80081080 0007DFC0  B0 1E 00 26 */	sth r0, 0x26(r30)
/* 80081084 0007DFC4  A0 03 00 24 */	lhz r0, 0x24(r3)
/* 80081088 0007DFC8  B0 1E 00 28 */	sth r0, 0x28(r30)
/* 8008108C 0007DFCC  A0 03 00 26 */	lhz r0, 0x26(r3)
/* 80081090 0007DFD0  B0 1E 00 2A */	sth r0, 0x2a(r30)
/* 80081094 0007DFD4  A0 03 00 28 */	lhz r0, 0x28(r3)
/* 80081098 0007DFD8  B0 1E 00 2C */	sth r0, 0x2c(r30)
/* 8008109C 0007DFDC  A0 03 00 2A */	lhz r0, 0x2a(r3)
/* 800810A0 0007DFE0  B0 1E 00 2E */	sth r0, 0x2e(r30)
.L_800810A4:
/* 800810A4 0007DFE4  7F E3 FB 78 */	mr r3, r31
/* 800810A8 0007DFE8  81 9F 00 00 */	lwz r12, 0(r31)
/* 800810AC 0007DFEC  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 800810B0 0007DFF0  7D 89 03 A6 */	mtctr r12
/* 800810B4 0007DFF4  4E 80 04 21 */	bctrl 
/* 800810B8 0007DFF8  3C 80 50 45 */	lis r4, 0x5045464C@ha
/* 800810BC 0007DFFC  38 04 46 4C */	addi r0, r4, 0x5045464C@l
/* 800810C0 0007E000  7C 03 00 00 */	cmpw r3, r0
/* 800810C4 0007E004  41 82 00 18 */	beq .L_800810DC
/* 800810C8 0007E008  40 80 00 A8 */	bge .L_80081170
/* 800810CC 0007E00C  38 04 46 47 */	addi r0, r4, 0x4647
/* 800810D0 0007E010  7C 03 00 00 */	cmpw r3, r0
/* 800810D4 0007E014  41 82 00 08 */	beq .L_800810DC
/* 800810D8 0007E018  48 00 00 98 */	b .L_80081170
.L_800810DC:
/* 800810DC 0007E01C  7F E3 FB 78 */	mr r3, r31
/* 800810E0 0007E020  81 9F 00 00 */	lwz r12, 0(r31)
/* 800810E4 0007E024  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 800810E8 0007E028  7D 89 03 A6 */	mtctr r12
/* 800810EC 0007E02C  4E 80 04 21 */	bctrl 
/* 800810F0 0007E030  A0 03 00 00 */	lhz r0, 0(r3)
/* 800810F4 0007E034  B0 1E 00 30 */	sth r0, 0x30(r30)
/* 800810F8 0007E038  88 03 00 02 */	lbz r0, 2(r3)
/* 800810FC 0007E03C  98 1E 00 32 */	stb r0, 0x32(r30)
/* 80081100 0007E040  88 03 00 03 */	lbz r0, 3(r3)
/* 80081104 0007E044  7F E3 FB 78 */	mr r3, r31
/* 80081108 0007E048  98 1E 00 33 */	stb r0, 0x33(r30)
/* 8008110C 0007E04C  81 9F 00 00 */	lwz r12, 0(r31)
/* 80081110 0007E050  81 8C 00 48 */	lwz r12, 0x48(r12)
/* 80081114 0007E054  7D 89 03 A6 */	mtctr r12
/* 80081118 0007E058  4E 80 04 21 */	bctrl 
/* 8008111C 0007E05C  88 03 00 00 */	lbz r0, 0(r3)
/* 80081120 0007E060  98 1E 00 34 */	stb r0, 0x34(r30)
/* 80081124 0007E064  88 03 00 01 */	lbz r0, 1(r3)
/* 80081128 0007E068  98 1E 00 35 */	stb r0, 0x35(r30)
/* 8008112C 0007E06C  88 03 00 02 */	lbz r0, 2(r3)
/* 80081130 0007E070  98 1E 00 36 */	stb r0, 0x36(r30)
/* 80081134 0007E074  88 03 00 03 */	lbz r0, 3(r3)
/* 80081138 0007E078  7F E3 FB 78 */	mr r3, r31
/* 8008113C 0007E07C  98 1E 00 37 */	stb r0, 0x37(r30)
/* 80081140 0007E080  81 9F 00 00 */	lwz r12, 0(r31)
/* 80081144 0007E084  81 8C 00 54 */	lwz r12, 0x54(r12)
/* 80081148 0007E088  7D 89 03 A6 */	mtctr r12
/* 8008114C 0007E08C  4E 80 04 21 */	bctrl 
/* 80081150 0007E090  A0 03 00 00 */	lhz r0, 0(r3)
/* 80081154 0007E094  7F E3 FB 78 */	mr r3, r31
/* 80081158 0007E098  B0 1E 00 38 */	sth r0, 0x38(r30)
/* 8008115C 0007E09C  81 9F 00 00 */	lwz r12, 0(r31)
/* 80081160 0007E0A0  81 8C 00 60 */	lwz r12, 0x60(r12)
/* 80081164 0007E0A4  7D 89 03 A6 */	mtctr r12
/* 80081168 0007E0A8  4E 80 04 21 */	bctrl 
/* 8008116C 0007E0AC  98 7E 00 3A */	stb r3, 0x3a(r30)
.L_80081170:
/* 80081170 0007E0B0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80081174 0007E0B4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80081178 0007E0B8  83 C1 00 08 */	lwz r30, 8(r1)
/* 8008117C 0007E0BC  7C 08 03 A6 */	mtlr r0
/* 80081180 0007E0C0  38 21 00 10 */	addi r1, r1, 0x10
/* 80081184 0007E0C4  4E 80 00 20 */	blr 
.endfn reset__14J3DPEBlockFullFP10J3DPEBlock

.fn calc__21J3DTexGenBlockPatchedFPA4_Cf, global
/* 80081188 0007E0C8  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 8008118C 0007E0CC  7C 08 02 A6 */	mflr r0
/* 80081190 0007E0D0  3C A0 80 51 */	lis r5, j3dSys@ha
/* 80081194 0007E0D4  90 01 00 54 */	stw r0, 0x54(r1)
/* 80081198 0007E0D8  BF 61 00 3C */	stmw r27, 0x3c(r1)
/* 8008119C 0007E0DC  7C 9B 23 78 */	mr r27, r4
/* 800811A0 0007E0E0  3B 80 00 00 */	li r28, 0
/* 800811A4 0007E0E4  7C 7E 1B 78 */	mr r30, r3
/* 800811A8 0007E0E8  7C 7D 1B 78 */	mr r29, r3
/* 800811AC 0007E0EC  3B E5 F2 30 */	addi r31, r5, j3dSys@l
.L_800811B0:
/* 800811B0 0007E0F0  80 7E 00 38 */	lwz r3, 0x38(r30)
/* 800811B4 0007E0F4  28 03 00 00 */	cmplwi r3, 0
/* 800811B8 0007E0F8  41 82 01 58 */	beq .L_80081310
/* 800811BC 0007E0FC  88 63 00 01 */	lbz r3, 1(r3)
/* 800811C0 0007E100  88 1D 00 0A */	lbz r0, 0xa(r29)
/* 800811C4 0007E104  54 64 06 BE */	clrlwi r4, r3, 0x1a
/* 800811C8 0007E108  28 04 00 0B */	cmplwi r4, 0xb
/* 800811CC 0007E10C  B0 1D 00 0C */	sth r0, 0xc(r29)
/* 800811D0 0007E110  41 81 01 30 */	bgt .L_80081300
/* 800811D4 0007E114  3C 60 80 4A */	lis r3, lbl_804A20F0@ha
/* 800811D8 0007E118  54 80 10 3A */	slwi r0, r4, 2
/* 800811DC 0007E11C  38 63 20 F0 */	addi r3, r3, lbl_804A20F0@l
/* 800811E0 0007E120  7C 03 00 2E */	lwzx r0, r3, r0
/* 800811E4 0007E124  7C 09 03 A6 */	mtctr r0
/* 800811E8 0007E128  4E 80 04 20 */	bctr 
.L_800811EC:
/* 800811EC 0007E12C  80 1F 00 34 */	lwz r0, 0x34(r31)
/* 800811F0 0007E130  54 00 07 39 */	rlwinm. r0, r0, 0, 0x1c, 0x1c
/* 800811F4 0007E134  40 82 00 1C */	bne .L_80081210
/* 800811F8 0007E138  3C 60 80 51 */	lis r3, j3dSys@ha
/* 800811FC 0007E13C  7F 64 DB 78 */	mr r4, r27
/* 80081200 0007E140  38 63 F2 30 */	addi r3, r3, j3dSys@l
/* 80081204 0007E144  38 A1 00 08 */	addi r5, r1, 8
/* 80081208 0007E148  48 06 90 F9 */	bl PSMTXConcat
/* 8008120C 0007E14C  48 00 00 14 */	b .L_80081220
.L_80081210:
/* 80081210 0007E150  3C 60 80 51 */	lis r3, j3dSys@ha
/* 80081214 0007E154  38 81 00 08 */	addi r4, r1, 8
/* 80081218 0007E158  38 63 F2 30 */	addi r3, r3, j3dSys@l
/* 8008121C 0007E15C  48 06 90 B1 */	bl PSMTXCopy
.L_80081220:
/* 80081220 0007E160  C0 02 87 7C */	lfs f0, lbl_80516ADC@sda21(r2)
/* 80081224 0007E164  38 81 00 08 */	addi r4, r1, 8
/* 80081228 0007E168  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 8008122C 0007E16C  D0 01 00 24 */	stfs f0, 0x24(r1)
/* 80081230 0007E170  D0 01 00 34 */	stfs f0, 0x34(r1)
/* 80081234 0007E174  80 7E 00 38 */	lwz r3, 0x38(r30)
/* 80081238 0007E178  4B FE 3A BD */	bl calc__9J3DTexMtxFPA4_Cf
/* 8008123C 0007E17C  48 00 00 D4 */	b .L_80081310
.L_80081240:
/* 80081240 0007E180  80 1F 00 34 */	lwz r0, 0x34(r31)
/* 80081244 0007E184  54 00 07 7B */	rlwinm. r0, r0, 0, 0x1d, 0x1d
/* 80081248 0007E188  40 82 00 14 */	bne .L_8008125C
/* 8008124C 0007E18C  80 7E 00 38 */	lwz r3, 0x38(r30)
/* 80081250 0007E190  7F 64 DB 78 */	mr r4, r27
/* 80081254 0007E194  4B FE 3A A1 */	bl calc__9J3DTexMtxFPA4_Cf
/* 80081258 0007E198  48 00 00 B8 */	b .L_80081310
.L_8008125C:
/* 8008125C 0007E19C  3C 80 80 48 */	lis r4, j3dDefaultMtx@ha
/* 80081260 0007E1A0  80 7E 00 38 */	lwz r3, 0x38(r30)
/* 80081264 0007E1A4  38 84 88 6C */	addi r4, r4, j3dDefaultMtx@l
/* 80081268 0007E1A8  4B FE 3A 8D */	bl calc__9J3DTexMtxFPA4_Cf
/* 8008126C 0007E1AC  48 00 00 A4 */	b .L_80081310
.L_80081270:
/* 80081270 0007E1B0  80 1F 00 34 */	lwz r0, 0x34(r31)
/* 80081274 0007E1B4  54 00 07 7B */	rlwinm. r0, r0, 0, 0x1d, 0x1d
/* 80081278 0007E1B8  40 82 00 28 */	bne .L_800812A0
/* 8008127C 0007E1BC  3C 60 80 51 */	lis r3, j3dSys@ha
/* 80081280 0007E1C0  7F 64 DB 78 */	mr r4, r27
/* 80081284 0007E1C4  38 63 F2 30 */	addi r3, r3, j3dSys@l
/* 80081288 0007E1C8  38 A1 00 08 */	addi r5, r1, 8
/* 8008128C 0007E1CC  48 06 90 75 */	bl PSMTXConcat
/* 80081290 0007E1D0  80 7E 00 38 */	lwz r3, 0x38(r30)
/* 80081294 0007E1D4  38 81 00 08 */	addi r4, r1, 8
/* 80081298 0007E1D8  4B FE 3A 5D */	bl calc__9J3DTexMtxFPA4_Cf
/* 8008129C 0007E1DC  48 00 00 74 */	b .L_80081310
.L_800812A0:
/* 800812A0 0007E1E0  3C 80 80 51 */	lis r4, j3dSys@ha
/* 800812A4 0007E1E4  80 7E 00 38 */	lwz r3, 0x38(r30)
/* 800812A8 0007E1E8  38 84 F2 30 */	addi r4, r4, j3dSys@l
/* 800812AC 0007E1EC  4B FE 3A 49 */	bl calc__9J3DTexMtxFPA4_Cf
/* 800812B0 0007E1F0  48 00 00 60 */	b .L_80081310
.L_800812B4:
/* 800812B4 0007E1F4  80 1F 00 34 */	lwz r0, 0x34(r31)
/* 800812B8 0007E1F8  54 00 07 39 */	rlwinm. r0, r0, 0, 0x1c, 0x1c
/* 800812BC 0007E1FC  40 82 00 30 */	bne .L_800812EC
/* 800812C0 0007E200  7F 63 DB 78 */	mr r3, r27
/* 800812C4 0007E204  38 81 00 08 */	addi r4, r1, 8
/* 800812C8 0007E208  48 06 90 05 */	bl PSMTXCopy
/* 800812CC 0007E20C  C0 02 87 7C */	lfs f0, lbl_80516ADC@sda21(r2)
/* 800812D0 0007E210  38 81 00 08 */	addi r4, r1, 8
/* 800812D4 0007E214  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 800812D8 0007E218  D0 01 00 24 */	stfs f0, 0x24(r1)
/* 800812DC 0007E21C  D0 01 00 34 */	stfs f0, 0x34(r1)
/* 800812E0 0007E220  80 7E 00 38 */	lwz r3, 0x38(r30)
/* 800812E4 0007E224  4B FE 3A 11 */	bl calc__9J3DTexMtxFPA4_Cf
/* 800812E8 0007E228  48 00 00 28 */	b .L_80081310
.L_800812EC:
/* 800812EC 0007E22C  3C 80 80 48 */	lis r4, j3dDefaultMtx@ha
/* 800812F0 0007E230  80 7E 00 38 */	lwz r3, 0x38(r30)
/* 800812F4 0007E234  38 84 88 6C */	addi r4, r4, j3dDefaultMtx@l
/* 800812F8 0007E238  4B FE 39 FD */	bl calc__9J3DTexMtxFPA4_Cf
/* 800812FC 0007E23C  48 00 00 14 */	b .L_80081310
.L_80081300:
/* 80081300 0007E240  3C 80 80 48 */	lis r4, j3dDefaultMtx@ha
/* 80081304 0007E244  80 7E 00 38 */	lwz r3, 0x38(r30)
/* 80081308 0007E248  38 84 88 6C */	addi r4, r4, j3dDefaultMtx@l
/* 8008130C 0007E24C  4B FE 39 E9 */	bl calc__9J3DTexMtxFPA4_Cf
.L_80081310:
/* 80081310 0007E250  3B 9C 00 01 */	addi r28, r28, 1
/* 80081314 0007E254  3B BD 00 06 */	addi r29, r29, 6
/* 80081318 0007E258  2C 1C 00 08 */	cmpwi r28, 8
/* 8008131C 0007E25C  3B DE 00 04 */	addi r30, r30, 4
/* 80081320 0007E260  41 80 FE 90 */	blt .L_800811B0
/* 80081324 0007E264  BB 61 00 3C */	lmw r27, 0x3c(r1)
/* 80081328 0007E268  80 01 00 54 */	lwz r0, 0x54(r1)
/* 8008132C 0007E26C  7C 08 03 A6 */	mtlr r0
/* 80081330 0007E270  38 21 00 50 */	addi r1, r1, 0x50
/* 80081334 0007E274  4E 80 00 20 */	blr 
.endfn calc__21J3DTexGenBlockPatchedFPA4_Cf

.fn calcWithoutViewMtx__21J3DTexGenBlockPatchedFPA4_Cf, global
/* 80081338 0007E278  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 8008133C 0007E27C  7C 08 02 A6 */	mflr r0
/* 80081340 0007E280  3C A0 80 51 */	lis r5, j3dSys@ha
/* 80081344 0007E284  90 01 00 54 */	stw r0, 0x54(r1)
/* 80081348 0007E288  BF 61 00 3C */	stmw r27, 0x3c(r1)
/* 8008134C 0007E28C  7C 9B 23 78 */	mr r27, r4
/* 80081350 0007E290  3B 80 00 00 */	li r28, 0
/* 80081354 0007E294  7C 7E 1B 78 */	mr r30, r3
/* 80081358 0007E298  7C 7D 1B 78 */	mr r29, r3
/* 8008135C 0007E29C  3B E5 F2 30 */	addi r31, r5, j3dSys@l
.L_80081360:
/* 80081360 0007E2A0  80 7E 00 38 */	lwz r3, 0x38(r30)
/* 80081364 0007E2A4  28 03 00 00 */	cmplwi r3, 0
/* 80081368 0007E2A8  41 82 00 E8 */	beq .L_80081450
/* 8008136C 0007E2AC  88 63 00 01 */	lbz r3, 1(r3)
/* 80081370 0007E2B0  88 1D 00 0A */	lbz r0, 0xa(r29)
/* 80081374 0007E2B4  54 64 06 BE */	clrlwi r4, r3, 0x1a
/* 80081378 0007E2B8  28 04 00 0B */	cmplwi r4, 0xb
/* 8008137C 0007E2BC  B0 1D 00 0C */	sth r0, 0xc(r29)
/* 80081380 0007E2C0  41 81 00 C0 */	bgt .L_80081440
/* 80081384 0007E2C4  3C 60 80 4A */	lis r3, lbl_804A2120@ha
/* 80081388 0007E2C8  54 80 10 3A */	slwi r0, r4, 2
/* 8008138C 0007E2CC  38 63 21 20 */	addi r3, r3, lbl_804A2120@l
/* 80081390 0007E2D0  7C 03 00 2E */	lwzx r0, r3, r0
/* 80081394 0007E2D4  7C 09 03 A6 */	mtctr r0
/* 80081398 0007E2D8  4E 80 04 20 */	bctr 
.L_8008139C:
/* 8008139C 0007E2DC  3C 80 80 48 */	lis r4, j3dDefaultMtx@ha
/* 800813A0 0007E2E0  80 7E 00 38 */	lwz r3, 0x38(r30)
/* 800813A4 0007E2E4  38 84 88 6C */	addi r4, r4, j3dDefaultMtx@l
/* 800813A8 0007E2E8  4B FE 39 4D */	bl calc__9J3DTexMtxFPA4_Cf
/* 800813AC 0007E2EC  48 00 00 A4 */	b .L_80081450
.L_800813B0:
/* 800813B0 0007E2F0  80 1F 00 34 */	lwz r0, 0x34(r31)
/* 800813B4 0007E2F4  54 00 07 7B */	rlwinm. r0, r0, 0, 0x1d, 0x1d
/* 800813B8 0007E2F8  40 82 00 14 */	bne .L_800813CC
/* 800813BC 0007E2FC  80 7E 00 38 */	lwz r3, 0x38(r30)
/* 800813C0 0007E300  7F 64 DB 78 */	mr r4, r27
/* 800813C4 0007E304  4B FE 39 31 */	bl calc__9J3DTexMtxFPA4_Cf
/* 800813C8 0007E308  48 00 00 88 */	b .L_80081450
.L_800813CC:
/* 800813CC 0007E30C  3C 80 80 48 */	lis r4, j3dDefaultMtx@ha
/* 800813D0 0007E310  80 7E 00 38 */	lwz r3, 0x38(r30)
/* 800813D4 0007E314  38 84 88 6C */	addi r4, r4, j3dDefaultMtx@l
/* 800813D8 0007E318  4B FE 39 1D */	bl calc__9J3DTexMtxFPA4_Cf
/* 800813DC 0007E31C  48 00 00 74 */	b .L_80081450
.L_800813E0:
/* 800813E0 0007E320  3C 80 80 48 */	lis r4, j3dDefaultMtx@ha
/* 800813E4 0007E324  80 7E 00 38 */	lwz r3, 0x38(r30)
/* 800813E8 0007E328  38 84 88 6C */	addi r4, r4, j3dDefaultMtx@l
/* 800813EC 0007E32C  4B FE 39 09 */	bl calc__9J3DTexMtxFPA4_Cf
/* 800813F0 0007E330  48 00 00 60 */	b .L_80081450
.L_800813F4:
/* 800813F4 0007E334  80 1F 00 34 */	lwz r0, 0x34(r31)
/* 800813F8 0007E338  54 00 07 39 */	rlwinm. r0, r0, 0, 0x1c, 0x1c
/* 800813FC 0007E33C  40 82 00 30 */	bne .L_8008142C
/* 80081400 0007E340  7F 63 DB 78 */	mr r3, r27
/* 80081404 0007E344  38 81 00 08 */	addi r4, r1, 8
/* 80081408 0007E348  48 06 8E C5 */	bl PSMTXCopy
/* 8008140C 0007E34C  C0 02 87 7C */	lfs f0, lbl_80516ADC@sda21(r2)
/* 80081410 0007E350  38 81 00 08 */	addi r4, r1, 8
/* 80081414 0007E354  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 80081418 0007E358  D0 01 00 24 */	stfs f0, 0x24(r1)
/* 8008141C 0007E35C  D0 01 00 34 */	stfs f0, 0x34(r1)
/* 80081420 0007E360  80 7E 00 38 */	lwz r3, 0x38(r30)
/* 80081424 0007E364  4B FE 38 D1 */	bl calc__9J3DTexMtxFPA4_Cf
/* 80081428 0007E368  48 00 00 28 */	b .L_80081450
.L_8008142C:
/* 8008142C 0007E36C  3C 80 80 48 */	lis r4, j3dDefaultMtx@ha
/* 80081430 0007E370  80 7E 00 38 */	lwz r3, 0x38(r30)
/* 80081434 0007E374  38 84 88 6C */	addi r4, r4, j3dDefaultMtx@l
/* 80081438 0007E378  4B FE 38 BD */	bl calc__9J3DTexMtxFPA4_Cf
/* 8008143C 0007E37C  48 00 00 14 */	b .L_80081450
.L_80081440:
/* 80081440 0007E380  3C 80 80 48 */	lis r4, j3dDefaultMtx@ha
/* 80081444 0007E384  80 7E 00 38 */	lwz r3, 0x38(r30)
/* 80081448 0007E388  38 84 88 6C */	addi r4, r4, j3dDefaultMtx@l
/* 8008144C 0007E38C  4B FE 38 A9 */	bl calc__9J3DTexMtxFPA4_Cf
.L_80081450:
/* 80081450 0007E390  3B 9C 00 01 */	addi r28, r28, 1
/* 80081454 0007E394  3B BD 00 06 */	addi r29, r29, 6
/* 80081458 0007E398  2C 1C 00 08 */	cmpwi r28, 8
/* 8008145C 0007E39C  3B DE 00 04 */	addi r30, r30, 4
/* 80081460 0007E3A0  41 80 FF 00 */	blt .L_80081360
/* 80081464 0007E3A4  BB 61 00 3C */	lmw r27, 0x3c(r1)
/* 80081468 0007E3A8  80 01 00 54 */	lwz r0, 0x54(r1)
/* 8008146C 0007E3AC  7C 08 03 A6 */	mtlr r0
/* 80081470 0007E3B0  38 21 00 50 */	addi r1, r1, 0x50
/* 80081474 0007E3B4  4E 80 00 20 */	blr 
.endfn calcWithoutViewMtx__21J3DTexGenBlockPatchedFPA4_Cf

.fn calcPostTexMtx__21J3DTexGenBlockPatchedFPA4_Cf, global
/* 80081478 0007E3B8  94 21 FF 80 */	stwu r1, -0x80(r1)
/* 8008147C 0007E3BC  7C 08 02 A6 */	mflr r0
/* 80081480 0007E3C0  90 01 00 84 */	stw r0, 0x84(r1)
/* 80081484 0007E3C4  93 E1 00 7C */	stw r31, 0x7c(r1)
/* 80081488 0007E3C8  7C 7F 1B 78 */	mr r31, r3
/* 8008148C 0007E3CC  93 C1 00 78 */	stw r30, 0x78(r1)
/* 80081490 0007E3D0  7C 7E 1B 78 */	mr r30, r3
/* 80081494 0007E3D4  93 A1 00 74 */	stw r29, 0x74(r1)
/* 80081498 0007E3D8  3B A0 00 00 */	li r29, 0
.L_8008149C:
/* 8008149C 0007E3DC  80 7F 00 38 */	lwz r3, 0x38(r31)
/* 800814A0 0007E3E0  28 03 00 00 */	cmplwi r3, 0
/* 800814A4 0007E3E4  41 82 00 E4 */	beq .L_80081588
/* 800814A8 0007E3E8  88 63 00 01 */	lbz r3, 1(r3)
/* 800814AC 0007E3EC  88 1E 00 0A */	lbz r0, 0xa(r30)
/* 800814B0 0007E3F0  54 64 06 BE */	clrlwi r4, r3, 0x1a
/* 800814B4 0007E3F4  28 04 00 0B */	cmplwi r4, 0xb
/* 800814B8 0007E3F8  B0 1E 00 0C */	sth r0, 0xc(r30)
/* 800814BC 0007E3FC  41 81 00 B4 */	bgt .L_80081570
/* 800814C0 0007E400  3C 60 80 4A */	lis r3, lbl_804A2150@ha
/* 800814C4 0007E404  54 80 10 3A */	slwi r0, r4, 2
/* 800814C8 0007E408  38 63 21 50 */	addi r3, r3, lbl_804A2150@l
/* 800814CC 0007E40C  7C 03 00 2E */	lwzx r0, r3, r0
/* 800814D0 0007E410  7C 09 03 A6 */	mtctr r0
/* 800814D4 0007E414  4E 80 04 20 */	bctr 
.L_800814D8:
/* 800814D8 0007E418  38 00 00 1E */	li r0, 0x1e
/* 800814DC 0007E41C  3C 60 80 48 */	lis r3, j3dDefaultMtx@ha
/* 800814E0 0007E420  B0 1E 00 0C */	sth r0, 0xc(r30)
/* 800814E4 0007E424  38 83 88 6C */	addi r4, r3, j3dDefaultMtx@l
/* 800814E8 0007E428  80 7F 00 38 */	lwz r3, 0x38(r31)
/* 800814EC 0007E42C  4B FE 3B 15 */	bl calcPostTexMtx__9J3DTexMtxFPA4_Cf
/* 800814F0 0007E430  48 00 00 98 */	b .L_80081588
.L_800814F4:
/* 800814F4 0007E434  3C 60 80 51 */	lis r3, j3dSys@ha
/* 800814F8 0007E438  38 81 00 38 */	addi r4, r1, 0x38
/* 800814FC 0007E43C  38 63 F2 30 */	addi r3, r3, j3dSys@l
/* 80081500 0007E440  48 06 8F 1D */	bl PSMTXInverse
/* 80081504 0007E444  38 00 00 00 */	li r0, 0
/* 80081508 0007E448  38 81 00 38 */	addi r4, r1, 0x38
/* 8008150C 0007E44C  B0 1E 00 0C */	sth r0, 0xc(r30)
/* 80081510 0007E450  80 7F 00 38 */	lwz r3, 0x38(r31)
/* 80081514 0007E454  4B FE 3A ED */	bl calcPostTexMtx__9J3DTexMtxFPA4_Cf
/* 80081518 0007E458  48 00 00 70 */	b .L_80081588
.L_8008151C:
/* 8008151C 0007E45C  38 00 00 00 */	li r0, 0
/* 80081520 0007E460  3C 60 80 48 */	lis r3, j3dDefaultMtx@ha
/* 80081524 0007E464  B0 1E 00 0C */	sth r0, 0xc(r30)
/* 80081528 0007E468  38 83 88 6C */	addi r4, r3, j3dDefaultMtx@l
/* 8008152C 0007E46C  80 7F 00 38 */	lwz r3, 0x38(r31)
/* 80081530 0007E470  4B FE 3A D1 */	bl calcPostTexMtx__9J3DTexMtxFPA4_Cf
/* 80081534 0007E474  48 00 00 54 */	b .L_80081588
.L_80081538:
/* 80081538 0007E478  3C 60 80 51 */	lis r3, j3dSys@ha
/* 8008153C 0007E47C  38 81 00 08 */	addi r4, r1, 8
/* 80081540 0007E480  38 63 F2 30 */	addi r3, r3, j3dSys@l
/* 80081544 0007E484  48 06 8E D9 */	bl PSMTXInverse
/* 80081548 0007E488  C0 02 87 7C */	lfs f0, lbl_80516ADC@sda21(r2)
/* 8008154C 0007E48C  38 00 00 1E */	li r0, 0x1e
/* 80081550 0007E490  38 81 00 08 */	addi r4, r1, 8
/* 80081554 0007E494  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 80081558 0007E498  D0 01 00 24 */	stfs f0, 0x24(r1)
/* 8008155C 0007E49C  D0 01 00 34 */	stfs f0, 0x34(r1)
/* 80081560 0007E4A0  B0 1E 00 0C */	sth r0, 0xc(r30)
/* 80081564 0007E4A4  80 7F 00 38 */	lwz r3, 0x38(r31)
/* 80081568 0007E4A8  4B FE 3A 99 */	bl calcPostTexMtx__9J3DTexMtxFPA4_Cf
/* 8008156C 0007E4AC  48 00 00 1C */	b .L_80081588
.L_80081570:
/* 80081570 0007E4B0  38 00 00 3C */	li r0, 0x3c
/* 80081574 0007E4B4  3C 60 80 48 */	lis r3, j3dDefaultMtx@ha
/* 80081578 0007E4B8  B0 1E 00 0C */	sth r0, 0xc(r30)
/* 8008157C 0007E4BC  38 83 88 6C */	addi r4, r3, j3dDefaultMtx@l
/* 80081580 0007E4C0  80 7F 00 38 */	lwz r3, 0x38(r31)
/* 80081584 0007E4C4  4B FE 3A 7D */	bl calcPostTexMtx__9J3DTexMtxFPA4_Cf
.L_80081588:
/* 80081588 0007E4C8  3B BD 00 01 */	addi r29, r29, 1
/* 8008158C 0007E4CC  3B DE 00 06 */	addi r30, r30, 6
/* 80081590 0007E4D0  2C 1D 00 08 */	cmpwi r29, 8
/* 80081594 0007E4D4  3B FF 00 04 */	addi r31, r31, 4
/* 80081598 0007E4D8  41 80 FF 04 */	blt .L_8008149C
/* 8008159C 0007E4DC  80 01 00 84 */	lwz r0, 0x84(r1)
/* 800815A0 0007E4E0  83 E1 00 7C */	lwz r31, 0x7c(r1)
/* 800815A4 0007E4E4  83 C1 00 78 */	lwz r30, 0x78(r1)
/* 800815A8 0007E4E8  83 A1 00 74 */	lwz r29, 0x74(r1)
/* 800815AC 0007E4EC  7C 08 03 A6 */	mtlr r0
/* 800815B0 0007E4F0  38 21 00 80 */	addi r1, r1, 0x80
/* 800815B4 0007E4F4  4E 80 00 20 */	blr 
.endfn calcPostTexMtx__21J3DTexGenBlockPatchedFPA4_Cf

.fn calcPostTexMtxWithoutViewMtx__21J3DTexGenBlockPatchedFPA4_Cf, global
/* 800815B8 0007E4F8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 800815BC 0007E4FC  7C 08 02 A6 */	mflr r0
/* 800815C0 0007E500  90 01 00 24 */	stw r0, 0x24(r1)
/* 800815C4 0007E504  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 800815C8 0007E508  7C 7F 1B 78 */	mr r31, r3
/* 800815CC 0007E50C  93 C1 00 18 */	stw r30, 0x18(r1)
/* 800815D0 0007E510  7C 7E 1B 78 */	mr r30, r3
/* 800815D4 0007E514  93 A1 00 14 */	stw r29, 0x14(r1)
/* 800815D8 0007E518  3B A0 00 00 */	li r29, 0
.L_800815DC:
/* 800815DC 0007E51C  80 7F 00 38 */	lwz r3, 0x38(r31)
/* 800815E0 0007E520  28 03 00 00 */	cmplwi r3, 0
/* 800815E4 0007E524  41 82 00 BC */	beq .L_800816A0
/* 800815E8 0007E528  88 63 00 01 */	lbz r3, 1(r3)
/* 800815EC 0007E52C  88 1E 00 0A */	lbz r0, 0xa(r30)
/* 800815F0 0007E530  54 64 06 BE */	clrlwi r4, r3, 0x1a
/* 800815F4 0007E534  28 04 00 0B */	cmplwi r4, 0xb
/* 800815F8 0007E538  B0 1E 00 0C */	sth r0, 0xc(r30)
/* 800815FC 0007E53C  41 81 00 8C */	bgt .L_80081688
/* 80081600 0007E540  3C 60 80 4A */	lis r3, lbl_804A2180@ha
/* 80081604 0007E544  54 80 10 3A */	slwi r0, r4, 2
/* 80081608 0007E548  38 63 21 80 */	addi r3, r3, lbl_804A2180@l
/* 8008160C 0007E54C  7C 03 00 2E */	lwzx r0, r3, r0
/* 80081610 0007E550  7C 09 03 A6 */	mtctr r0
/* 80081614 0007E554  4E 80 04 20 */	bctr 
.L_80081618:
/* 80081618 0007E558  38 00 00 1E */	li r0, 0x1e
/* 8008161C 0007E55C  3C 60 80 48 */	lis r3, j3dDefaultMtx@ha
/* 80081620 0007E560  B0 1E 00 0C */	sth r0, 0xc(r30)
/* 80081624 0007E564  38 83 88 6C */	addi r4, r3, j3dDefaultMtx@l
/* 80081628 0007E568  80 7F 00 38 */	lwz r3, 0x38(r31)
/* 8008162C 0007E56C  4B FE 39 D5 */	bl calcPostTexMtx__9J3DTexMtxFPA4_Cf
/* 80081630 0007E570  48 00 00 70 */	b .L_800816A0
.L_80081634:
/* 80081634 0007E574  38 00 00 00 */	li r0, 0
/* 80081638 0007E578  3C 60 80 48 */	lis r3, j3dDefaultMtx@ha
/* 8008163C 0007E57C  B0 1E 00 0C */	sth r0, 0xc(r30)
/* 80081640 0007E580  38 83 88 6C */	addi r4, r3, j3dDefaultMtx@l
/* 80081644 0007E584  80 7F 00 38 */	lwz r3, 0x38(r31)
/* 80081648 0007E588  4B FE 39 B9 */	bl calcPostTexMtx__9J3DTexMtxFPA4_Cf
/* 8008164C 0007E58C  48 00 00 54 */	b .L_800816A0
.L_80081650:
/* 80081650 0007E590  38 00 00 00 */	li r0, 0
/* 80081654 0007E594  3C 60 80 48 */	lis r3, j3dDefaultMtx@ha
/* 80081658 0007E598  B0 1E 00 0C */	sth r0, 0xc(r30)
/* 8008165C 0007E59C  38 83 88 6C */	addi r4, r3, j3dDefaultMtx@l
/* 80081660 0007E5A0  80 7F 00 38 */	lwz r3, 0x38(r31)
/* 80081664 0007E5A4  4B FE 39 9D */	bl calcPostTexMtx__9J3DTexMtxFPA4_Cf
/* 80081668 0007E5A8  48 00 00 38 */	b .L_800816A0
.L_8008166C:
/* 8008166C 0007E5AC  38 00 00 1E */	li r0, 0x1e
/* 80081670 0007E5B0  3C 60 80 48 */	lis r3, j3dDefaultMtx@ha
/* 80081674 0007E5B4  B0 1E 00 0C */	sth r0, 0xc(r30)
/* 80081678 0007E5B8  38 83 88 6C */	addi r4, r3, j3dDefaultMtx@l
/* 8008167C 0007E5BC  80 7F 00 38 */	lwz r3, 0x38(r31)
/* 80081680 0007E5C0  4B FE 39 81 */	bl calcPostTexMtx__9J3DTexMtxFPA4_Cf
/* 80081684 0007E5C4  48 00 00 1C */	b .L_800816A0
.L_80081688:
/* 80081688 0007E5C8  38 00 00 3C */	li r0, 0x3c
/* 8008168C 0007E5CC  3C 60 80 48 */	lis r3, j3dDefaultMtx@ha
/* 80081690 0007E5D0  B0 1E 00 0C */	sth r0, 0xc(r30)
/* 80081694 0007E5D4  38 83 88 6C */	addi r4, r3, j3dDefaultMtx@l
/* 80081698 0007E5D8  80 7F 00 38 */	lwz r3, 0x38(r31)
/* 8008169C 0007E5DC  4B FE 39 65 */	bl calcPostTexMtx__9J3DTexMtxFPA4_Cf
.L_800816A0:
/* 800816A0 0007E5E0  3B BD 00 01 */	addi r29, r29, 1
/* 800816A4 0007E5E4  3B DE 00 06 */	addi r30, r30, 6
/* 800816A8 0007E5E8  2C 1D 00 08 */	cmpwi r29, 8
/* 800816AC 0007E5EC  3B FF 00 04 */	addi r31, r31, 4
/* 800816B0 0007E5F0  41 80 FF 2C */	blt .L_800815DC
/* 800816B4 0007E5F4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 800816B8 0007E5F8  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 800816BC 0007E5FC  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 800816C0 0007E600  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 800816C4 0007E604  7C 08 03 A6 */	mtlr r0
/* 800816C8 0007E608  38 21 00 20 */	addi r1, r1, 0x20
/* 800816CC 0007E60C  4E 80 00 20 */	blr 
.endfn calcPostTexMtxWithoutViewMtx__21J3DTexGenBlockPatchedFPA4_Cf

.fn getType__14J3DPEBlockFullFv, weak
/* 800816D0 0007E610  3C 60 50 45 */	lis r3, 0x5045464C@ha
/* 800816D4 0007E614  38 63 46 4C */	addi r3, r3, 0x5045464C@l
/* 800816D8 0007E618  4E 80 00 20 */	blr 
.endfn getType__14J3DPEBlockFullFv

.fn setFog__14J3DPEBlockFullFP6J3DFog, weak
/* 800816DC 0007E61C  88 04 00 00 */	lbz r0, 0(r4)
/* 800816E0 0007E620  98 03 00 04 */	stb r0, 4(r3)
/* 800816E4 0007E624  88 04 00 01 */	lbz r0, 1(r4)
/* 800816E8 0007E628  98 03 00 05 */	stb r0, 5(r3)
/* 800816EC 0007E62C  A0 04 00 02 */	lhz r0, 2(r4)
/* 800816F0 0007E630  B0 03 00 06 */	sth r0, 6(r3)
/* 800816F4 0007E634  C0 04 00 04 */	lfs f0, 4(r4)
/* 800816F8 0007E638  D0 03 00 08 */	stfs f0, 8(r3)
/* 800816FC 0007E63C  C0 04 00 08 */	lfs f0, 8(r4)
/* 80081700 0007E640  D0 03 00 0C */	stfs f0, 0xc(r3)
/* 80081704 0007E644  C0 04 00 0C */	lfs f0, 0xc(r4)
/* 80081708 0007E648  D0 03 00 10 */	stfs f0, 0x10(r3)
/* 8008170C 0007E64C  C0 04 00 10 */	lfs f0, 0x10(r4)
/* 80081710 0007E650  D0 03 00 14 */	stfs f0, 0x14(r3)
/* 80081714 0007E654  88 04 00 14 */	lbz r0, 0x14(r4)
/* 80081718 0007E658  98 03 00 18 */	stb r0, 0x18(r3)
/* 8008171C 0007E65C  88 04 00 15 */	lbz r0, 0x15(r4)
/* 80081720 0007E660  98 03 00 19 */	stb r0, 0x19(r3)
/* 80081724 0007E664  88 04 00 16 */	lbz r0, 0x16(r4)
/* 80081728 0007E668  98 03 00 1A */	stb r0, 0x1a(r3)
/* 8008172C 0007E66C  88 04 00 17 */	lbz r0, 0x17(r4)
/* 80081730 0007E670  98 03 00 1B */	stb r0, 0x1b(r3)
/* 80081734 0007E674  A0 04 00 18 */	lhz r0, 0x18(r4)
/* 80081738 0007E678  B0 03 00 1C */	sth r0, 0x1c(r3)
/* 8008173C 0007E67C  A0 04 00 1A */	lhz r0, 0x1a(r4)
/* 80081740 0007E680  B0 03 00 1E */	sth r0, 0x1e(r3)
/* 80081744 0007E684  A0 04 00 1C */	lhz r0, 0x1c(r4)
/* 80081748 0007E688  B0 03 00 20 */	sth r0, 0x20(r3)
/* 8008174C 0007E68C  A0 04 00 1E */	lhz r0, 0x1e(r4)
/* 80081750 0007E690  B0 03 00 22 */	sth r0, 0x22(r3)
/* 80081754 0007E694  A0 04 00 20 */	lhz r0, 0x20(r4)
/* 80081758 0007E698  B0 03 00 24 */	sth r0, 0x24(r3)
/* 8008175C 0007E69C  A0 04 00 22 */	lhz r0, 0x22(r4)
/* 80081760 0007E6A0  B0 03 00 26 */	sth r0, 0x26(r3)
/* 80081764 0007E6A4  A0 04 00 24 */	lhz r0, 0x24(r4)
/* 80081768 0007E6A8  B0 03 00 28 */	sth r0, 0x28(r3)
/* 8008176C 0007E6AC  A0 04 00 26 */	lhz r0, 0x26(r4)
/* 80081770 0007E6B0  B0 03 00 2A */	sth r0, 0x2a(r3)
/* 80081774 0007E6B4  A0 04 00 28 */	lhz r0, 0x28(r4)
/* 80081778 0007E6B8  B0 03 00 2C */	sth r0, 0x2c(r3)
/* 8008177C 0007E6BC  A0 04 00 2A */	lhz r0, 0x2a(r4)
/* 80081780 0007E6C0  B0 03 00 2E */	sth r0, 0x2e(r3)
/* 80081784 0007E6C4  4E 80 00 20 */	blr 
.endfn setFog__14J3DPEBlockFullFP6J3DFog

.fn setFog__14J3DPEBlockFullF6J3DFog, weak
/* 80081788 0007E6C8  88 04 00 00 */	lbz r0, 0(r4)
/* 8008178C 0007E6CC  88 A4 00 01 */	lbz r5, 1(r4)
/* 80081790 0007E6D0  98 03 00 04 */	stb r0, 4(r3)
/* 80081794 0007E6D4  A0 04 00 02 */	lhz r0, 2(r4)
/* 80081798 0007E6D8  98 A3 00 05 */	stb r5, 5(r3)
/* 8008179C 0007E6DC  C0 24 00 04 */	lfs f1, 4(r4)
/* 800817A0 0007E6E0  B0 03 00 06 */	sth r0, 6(r3)
/* 800817A4 0007E6E4  C0 04 00 08 */	lfs f0, 8(r4)
/* 800817A8 0007E6E8  D0 23 00 08 */	stfs f1, 8(r3)
/* 800817AC 0007E6EC  C0 24 00 0C */	lfs f1, 0xc(r4)
/* 800817B0 0007E6F0  D0 03 00 0C */	stfs f0, 0xc(r3)
/* 800817B4 0007E6F4  C0 04 00 10 */	lfs f0, 0x10(r4)
/* 800817B8 0007E6F8  D0 23 00 10 */	stfs f1, 0x10(r3)
/* 800817BC 0007E6FC  88 A4 00 14 */	lbz r5, 0x14(r4)
/* 800817C0 0007E700  D0 03 00 14 */	stfs f0, 0x14(r3)
/* 800817C4 0007E704  88 04 00 15 */	lbz r0, 0x15(r4)
/* 800817C8 0007E708  98 A3 00 18 */	stb r5, 0x18(r3)
/* 800817CC 0007E70C  88 A4 00 16 */	lbz r5, 0x16(r4)
/* 800817D0 0007E710  98 03 00 19 */	stb r0, 0x19(r3)
/* 800817D4 0007E714  88 04 00 17 */	lbz r0, 0x17(r4)
/* 800817D8 0007E718  98 A3 00 1A */	stb r5, 0x1a(r3)
/* 800817DC 0007E71C  A0 C4 00 18 */	lhz r6, 0x18(r4)
/* 800817E0 0007E720  98 03 00 1B */	stb r0, 0x1b(r3)
/* 800817E4 0007E724  A0 A4 00 1A */	lhz r5, 0x1a(r4)
/* 800817E8 0007E728  B0 C3 00 1C */	sth r6, 0x1c(r3)
/* 800817EC 0007E72C  A0 04 00 1C */	lhz r0, 0x1c(r4)
/* 800817F0 0007E730  B0 A3 00 1E */	sth r5, 0x1e(r3)
/* 800817F4 0007E734  A0 A4 00 1E */	lhz r5, 0x1e(r4)
/* 800817F8 0007E738  B0 03 00 20 */	sth r0, 0x20(r3)
/* 800817FC 0007E73C  A0 04 00 20 */	lhz r0, 0x20(r4)
/* 80081800 0007E740  B0 A3 00 22 */	sth r5, 0x22(r3)
/* 80081804 0007E744  A0 C4 00 22 */	lhz r6, 0x22(r4)
/* 80081808 0007E748  B0 03 00 24 */	sth r0, 0x24(r3)
/* 8008180C 0007E74C  A0 A4 00 24 */	lhz r5, 0x24(r4)
/* 80081810 0007E750  B0 C3 00 26 */	sth r6, 0x26(r3)
/* 80081814 0007E754  A0 04 00 26 */	lhz r0, 0x26(r4)
/* 80081818 0007E758  B0 A3 00 28 */	sth r5, 0x28(r3)
/* 8008181C 0007E75C  A0 A4 00 28 */	lhz r5, 0x28(r4)
/* 80081820 0007E760  B0 03 00 2A */	sth r0, 0x2a(r3)
/* 80081824 0007E764  A0 04 00 2A */	lhz r0, 0x2a(r4)
/* 80081828 0007E768  B0 A3 00 2C */	sth r5, 0x2c(r3)
/* 8008182C 0007E76C  B0 03 00 2E */	sth r0, 0x2e(r3)
/* 80081830 0007E770  4E 80 00 20 */	blr 
.endfn setFog__14J3DPEBlockFullF6J3DFog

.fn getFog__14J3DPEBlockFullFv, weak
/* 80081834 0007E774  38 63 00 04 */	addi r3, r3, 4
/* 80081838 0007E778  4E 80 00 20 */	blr 
.endfn getFog__14J3DPEBlockFullFv

.fn setAlphaComp__14J3DPEBlockFullFRC12J3DAlphaComp, weak
/* 8008183C 0007E77C  A0 04 00 00 */	lhz r0, 0(r4)
/* 80081840 0007E780  88 A4 00 02 */	lbz r5, 2(r4)
/* 80081844 0007E784  B0 03 00 30 */	sth r0, 0x30(r3)
/* 80081848 0007E788  88 04 00 03 */	lbz r0, 3(r4)
/* 8008184C 0007E78C  98 A3 00 32 */	stb r5, 0x32(r3)
/* 80081850 0007E790  98 03 00 33 */	stb r0, 0x33(r3)
/* 80081854 0007E794  4E 80 00 20 */	blr 
.endfn setAlphaComp__14J3DPEBlockFullFRC12J3DAlphaComp

.fn setAlphaComp__14J3DPEBlockFullFPC12J3DAlphaComp, weak
/* 80081858 0007E798  A0 04 00 00 */	lhz r0, 0(r4)
/* 8008185C 0007E79C  88 A4 00 02 */	lbz r5, 2(r4)
/* 80081860 0007E7A0  B0 03 00 30 */	sth r0, 0x30(r3)
/* 80081864 0007E7A4  88 04 00 03 */	lbz r0, 3(r4)
/* 80081868 0007E7A8  98 A3 00 32 */	stb r5, 0x32(r3)
/* 8008186C 0007E7AC  98 03 00 33 */	stb r0, 0x33(r3)
/* 80081870 0007E7B0  4E 80 00 20 */	blr 
.endfn setAlphaComp__14J3DPEBlockFullFPC12J3DAlphaComp

.fn getAlphaComp__14J3DPEBlockFullFv, weak
/* 80081874 0007E7B4  38 63 00 30 */	addi r3, r3, 0x30
/* 80081878 0007E7B8  4E 80 00 20 */	blr 
.endfn getAlphaComp__14J3DPEBlockFullFv

.fn setBlend__14J3DPEBlockFullFRC8J3DBlend, weak
/* 8008187C 0007E7BC  88 A4 00 00 */	lbz r5, 0(r4)
/* 80081880 0007E7C0  88 04 00 01 */	lbz r0, 1(r4)
/* 80081884 0007E7C4  98 A3 00 34 */	stb r5, 0x34(r3)
/* 80081888 0007E7C8  88 A4 00 02 */	lbz r5, 2(r4)
/* 8008188C 0007E7CC  98 03 00 35 */	stb r0, 0x35(r3)
/* 80081890 0007E7D0  88 04 00 03 */	lbz r0, 3(r4)
/* 80081894 0007E7D4  98 A3 00 36 */	stb r5, 0x36(r3)
/* 80081898 0007E7D8  98 03 00 37 */	stb r0, 0x37(r3)
/* 8008189C 0007E7DC  4E 80 00 20 */	blr 
.endfn setBlend__14J3DPEBlockFullFRC8J3DBlend

.fn setBlend__14J3DPEBlockFullFPC8J3DBlend, weak
/* 800818A0 0007E7E0  88 A4 00 00 */	lbz r5, 0(r4)
/* 800818A4 0007E7E4  88 04 00 01 */	lbz r0, 1(r4)
/* 800818A8 0007E7E8  98 A3 00 34 */	stb r5, 0x34(r3)
/* 800818AC 0007E7EC  88 A4 00 02 */	lbz r5, 2(r4)
/* 800818B0 0007E7F0  98 03 00 35 */	stb r0, 0x35(r3)
/* 800818B4 0007E7F4  88 04 00 03 */	lbz r0, 3(r4)
/* 800818B8 0007E7F8  98 A3 00 36 */	stb r5, 0x36(r3)
/* 800818BC 0007E7FC  98 03 00 37 */	stb r0, 0x37(r3)
/* 800818C0 0007E800  4E 80 00 20 */	blr 
.endfn setBlend__14J3DPEBlockFullFPC8J3DBlend

.fn getBlend__14J3DPEBlockFullFv, weak
/* 800818C4 0007E804  38 63 00 34 */	addi r3, r3, 0x34
/* 800818C8 0007E808  4E 80 00 20 */	blr 
.endfn getBlend__14J3DPEBlockFullFv

.fn setZMode__14J3DPEBlockFullF8J3DZMode, weak
/* 800818CC 0007E80C  A0 04 00 00 */	lhz r0, 0(r4)
/* 800818D0 0007E810  B0 03 00 38 */	sth r0, 0x38(r3)
/* 800818D4 0007E814  4E 80 00 20 */	blr 
.endfn setZMode__14J3DPEBlockFullF8J3DZMode

.fn setZMode__14J3DPEBlockFullFPC8J3DZMode, weak
/* 800818D8 0007E818  A0 04 00 00 */	lhz r0, 0(r4)
/* 800818DC 0007E81C  B0 03 00 38 */	sth r0, 0x38(r3)
/* 800818E0 0007E820  4E 80 00 20 */	blr 
.endfn setZMode__14J3DPEBlockFullFPC8J3DZMode

.fn getZMode__14J3DPEBlockFullFv, weak
/* 800818E4 0007E824  38 63 00 38 */	addi r3, r3, 0x38
/* 800818E8 0007E828  4E 80 00 20 */	blr 
.endfn getZMode__14J3DPEBlockFullFv

.fn setZCompLoc__14J3DPEBlockFullFUc, weak
/* 800818EC 0007E82C  98 83 00 3A */	stb r4, 0x3a(r3)
/* 800818F0 0007E830  4E 80 00 20 */	blr 
.endfn setZCompLoc__14J3DPEBlockFullFUc

.fn setZCompLoc__14J3DPEBlockFullFPCUc, weak
/* 800818F4 0007E834  88 04 00 00 */	lbz r0, 0(r4)
/* 800818F8 0007E838  98 03 00 3A */	stb r0, 0x3a(r3)
/* 800818FC 0007E83C  4E 80 00 20 */	blr 
.endfn setZCompLoc__14J3DPEBlockFullFPCUc

.fn getZCompLoc__14J3DPEBlockFullCFv, weak
/* 80081900 0007E840  88 63 00 3A */	lbz r3, 0x3a(r3)
/* 80081904 0007E844  4E 80 00 20 */	blr 
.endfn getZCompLoc__14J3DPEBlockFullCFv

.fn setDither__14J3DPEBlockFullFUc, weak
/* 80081908 0007E848  98 83 00 3B */	stb r4, 0x3b(r3)
/* 8008190C 0007E84C  4E 80 00 20 */	blr 
.endfn setDither__14J3DPEBlockFullFUc

.fn setDither__14J3DPEBlockFullFPCUc, weak
/* 80081910 0007E850  88 04 00 00 */	lbz r0, 0(r4)
/* 80081914 0007E854  98 03 00 3B */	stb r0, 0x3b(r3)
/* 80081918 0007E858  4E 80 00 20 */	blr 
.endfn setDither__14J3DPEBlockFullFPCUc

.fn getDither__14J3DPEBlockFullCFv, weak
/* 8008191C 0007E85C  88 63 00 3B */	lbz r3, 0x3b(r3)
/* 80081920 0007E860  4E 80 00 20 */	blr 
.endfn getDither__14J3DPEBlockFullCFv

.fn getFogOffset__14J3DPEBlockFullCFv, weak
/* 80081924 0007E864  80 63 00 3C */	lwz r3, 0x3c(r3)
/* 80081928 0007E868  4E 80 00 20 */	blr 
.endfn getFogOffset__14J3DPEBlockFullCFv

.fn setFogOffset__14J3DPEBlockFullFUl, weak
/* 8008192C 0007E86C  90 83 00 3C */	stw r4, 0x3c(r3)
/* 80081930 0007E870  4E 80 00 20 */	blr 
.endfn setFogOffset__14J3DPEBlockFullFUl

.fn __dt__14J3DPEBlockFullFv, weak
/* 80081934 0007E874  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80081938 0007E878  7C 08 02 A6 */	mflr r0
/* 8008193C 0007E87C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80081940 0007E880  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80081944 0007E884  7C 7F 1B 79 */	or. r31, r3, r3
/* 80081948 0007E888  41 82 00 30 */	beq .L_80081978
/* 8008194C 0007E88C  3C 60 80 4A */	lis r3, __vt__14J3DPEBlockFull@ha
/* 80081950 0007E890  38 03 21 B0 */	addi r0, r3, __vt__14J3DPEBlockFull@l
/* 80081954 0007E894  90 1F 00 00 */	stw r0, 0(r31)
/* 80081958 0007E898  41 82 00 10 */	beq .L_80081968
/* 8008195C 0007E89C  3C 60 80 4A */	lis r3, __vt__10J3DPEBlock@ha
/* 80081960 0007E8A0  38 03 16 08 */	addi r0, r3, __vt__10J3DPEBlock@l
/* 80081964 0007E8A4  90 1F 00 00 */	stw r0, 0(r31)
.L_80081968:
/* 80081968 0007E8A8  7C 80 07 35 */	extsh. r0, r4
/* 8008196C 0007E8AC  40 81 00 0C */	ble .L_80081978
/* 80081970 0007E8B0  7F E3 FB 78 */	mr r3, r31
/* 80081974 0007E8B4  4B FA 27 41 */	bl __dl__FPv
.L_80081978:
/* 80081978 0007E8B8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8008197C 0007E8BC  7F E3 FB 78 */	mr r3, r31
/* 80081980 0007E8C0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80081984 0007E8C4  7C 08 03 A6 */	mtlr r0
/* 80081988 0007E8C8  38 21 00 10 */	addi r1, r1, 0x10
/* 8008198C 0007E8CC  4E 80 00 20 */	blr 
.endfn __dt__14J3DPEBlockFullFv

.fn diff__16J3DPEBlockFogOffFUl, weak
/* 80081990 0007E8D0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80081994 0007E8D4  7C 08 02 A6 */	mflr r0
/* 80081998 0007E8D8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8008199C 0007E8DC  54 80 00 85 */	rlwinm. r0, r4, 0, 2, 2
/* 800819A0 0007E8E0  41 82 00 14 */	beq .L_800819B4
/* 800819A4 0007E8E4  81 83 00 00 */	lwz r12, 0(r3)
/* 800819A8 0007E8E8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 800819AC 0007E8EC  7D 89 03 A6 */	mtctr r12
/* 800819B0 0007E8F0  4E 80 04 21 */	bctrl 
.L_800819B4:
/* 800819B4 0007E8F4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800819B8 0007E8F8  7C 08 03 A6 */	mtlr r0
/* 800819BC 0007E8FC  38 21 00 10 */	addi r1, r1, 0x10
/* 800819C0 0007E900  4E 80 00 20 */	blr 
.endfn diff__16J3DPEBlockFogOffFUl

.fn getType__16J3DPEBlockFogOffFv, weak
/* 800819C4 0007E904  3C 60 50 45 */	lis r3, 0x50454647@ha
/* 800819C8 0007E908  38 63 46 47 */	addi r3, r3, 0x50454647@l
/* 800819CC 0007E90C  4E 80 00 20 */	blr 
.endfn getType__16J3DPEBlockFogOffFv

.fn setAlphaComp__16J3DPEBlockFogOffFRC12J3DAlphaComp, weak
/* 800819D0 0007E910  A0 04 00 00 */	lhz r0, 0(r4)
/* 800819D4 0007E914  88 A4 00 02 */	lbz r5, 2(r4)
/* 800819D8 0007E918  B0 03 00 04 */	sth r0, 4(r3)
/* 800819DC 0007E91C  88 04 00 03 */	lbz r0, 3(r4)
/* 800819E0 0007E920  98 A3 00 06 */	stb r5, 6(r3)
/* 800819E4 0007E924  98 03 00 07 */	stb r0, 7(r3)
/* 800819E8 0007E928  4E 80 00 20 */	blr 
.endfn setAlphaComp__16J3DPEBlockFogOffFRC12J3DAlphaComp

.fn setAlphaComp__16J3DPEBlockFogOffFPC12J3DAlphaComp, weak
/* 800819EC 0007E92C  A0 04 00 00 */	lhz r0, 0(r4)
/* 800819F0 0007E930  88 A4 00 02 */	lbz r5, 2(r4)
/* 800819F4 0007E934  B0 03 00 04 */	sth r0, 4(r3)
/* 800819F8 0007E938  88 04 00 03 */	lbz r0, 3(r4)
/* 800819FC 0007E93C  98 A3 00 06 */	stb r5, 6(r3)
/* 80081A00 0007E940  98 03 00 07 */	stb r0, 7(r3)
/* 80081A04 0007E944  4E 80 00 20 */	blr 
.endfn setAlphaComp__16J3DPEBlockFogOffFPC12J3DAlphaComp

.fn getAlphaComp__16J3DPEBlockFogOffFv, weak
/* 80081A08 0007E948  38 63 00 04 */	addi r3, r3, 4
/* 80081A0C 0007E94C  4E 80 00 20 */	blr 
.endfn getAlphaComp__16J3DPEBlockFogOffFv

.fn setBlend__16J3DPEBlockFogOffFRC8J3DBlend, weak
/* 80081A10 0007E950  88 A4 00 00 */	lbz r5, 0(r4)
/* 80081A14 0007E954  88 04 00 01 */	lbz r0, 1(r4)
/* 80081A18 0007E958  98 A3 00 08 */	stb r5, 8(r3)
/* 80081A1C 0007E95C  88 A4 00 02 */	lbz r5, 2(r4)
/* 80081A20 0007E960  98 03 00 09 */	stb r0, 9(r3)
/* 80081A24 0007E964  88 04 00 03 */	lbz r0, 3(r4)
/* 80081A28 0007E968  98 A3 00 0A */	stb r5, 0xa(r3)
/* 80081A2C 0007E96C  98 03 00 0B */	stb r0, 0xb(r3)
/* 80081A30 0007E970  4E 80 00 20 */	blr 
.endfn setBlend__16J3DPEBlockFogOffFRC8J3DBlend

.fn setBlend__16J3DPEBlockFogOffFPC8J3DBlend, weak
/* 80081A34 0007E974  88 A4 00 00 */	lbz r5, 0(r4)
/* 80081A38 0007E978  88 04 00 01 */	lbz r0, 1(r4)
/* 80081A3C 0007E97C  98 A3 00 08 */	stb r5, 8(r3)
/* 80081A40 0007E980  88 A4 00 02 */	lbz r5, 2(r4)
/* 80081A44 0007E984  98 03 00 09 */	stb r0, 9(r3)
/* 80081A48 0007E988  88 04 00 03 */	lbz r0, 3(r4)
/* 80081A4C 0007E98C  98 A3 00 0A */	stb r5, 0xa(r3)
/* 80081A50 0007E990  98 03 00 0B */	stb r0, 0xb(r3)
/* 80081A54 0007E994  4E 80 00 20 */	blr 
.endfn setBlend__16J3DPEBlockFogOffFPC8J3DBlend

.fn getBlend__16J3DPEBlockFogOffFv, weak
/* 80081A58 0007E998  38 63 00 08 */	addi r3, r3, 8
/* 80081A5C 0007E99C  4E 80 00 20 */	blr 
.endfn getBlend__16J3DPEBlockFogOffFv

.fn setZMode__16J3DPEBlockFogOffF8J3DZMode, weak
/* 80081A60 0007E9A0  A0 04 00 00 */	lhz r0, 0(r4)
/* 80081A64 0007E9A4  B0 03 00 0C */	sth r0, 0xc(r3)
/* 80081A68 0007E9A8  4E 80 00 20 */	blr 
.endfn setZMode__16J3DPEBlockFogOffF8J3DZMode

.fn setZMode__16J3DPEBlockFogOffFPC8J3DZMode, weak
/* 80081A6C 0007E9AC  A0 04 00 00 */	lhz r0, 0(r4)
/* 80081A70 0007E9B0  B0 03 00 0C */	sth r0, 0xc(r3)
/* 80081A74 0007E9B4  4E 80 00 20 */	blr 
.endfn setZMode__16J3DPEBlockFogOffFPC8J3DZMode

.fn getZMode__16J3DPEBlockFogOffFv, weak
/* 80081A78 0007E9B8  38 63 00 0C */	addi r3, r3, 0xc
/* 80081A7C 0007E9BC  4E 80 00 20 */	blr 
.endfn getZMode__16J3DPEBlockFogOffFv

.fn setZCompLoc__16J3DPEBlockFogOffFUc, weak
/* 80081A80 0007E9C0  98 83 00 0E */	stb r4, 0xe(r3)
/* 80081A84 0007E9C4  4E 80 00 20 */	blr 
.endfn setZCompLoc__16J3DPEBlockFogOffFUc

.fn setZCompLoc__16J3DPEBlockFogOffFPCUc, weak
/* 80081A88 0007E9C8  88 04 00 00 */	lbz r0, 0(r4)
/* 80081A8C 0007E9CC  98 03 00 0E */	stb r0, 0xe(r3)
/* 80081A90 0007E9D0  4E 80 00 20 */	blr 
.endfn setZCompLoc__16J3DPEBlockFogOffFPCUc

.fn getZCompLoc__16J3DPEBlockFogOffCFv, weak
/* 80081A94 0007E9D4  88 63 00 0E */	lbz r3, 0xe(r3)
/* 80081A98 0007E9D8  4E 80 00 20 */	blr 
.endfn getZCompLoc__16J3DPEBlockFogOffCFv

.fn setDither__16J3DPEBlockFogOffFUc, weak
/* 80081A9C 0007E9DC  98 83 00 0F */	stb r4, 0xf(r3)
/* 80081AA0 0007E9E0  4E 80 00 20 */	blr 
.endfn setDither__16J3DPEBlockFogOffFUc

.fn setDither__16J3DPEBlockFogOffFPCUc, weak
/* 80081AA4 0007E9E4  88 04 00 00 */	lbz r0, 0(r4)
/* 80081AA8 0007E9E8  98 03 00 0F */	stb r0, 0xf(r3)
/* 80081AAC 0007E9EC  4E 80 00 20 */	blr 
.endfn setDither__16J3DPEBlockFogOffFPCUc

.fn getDither__16J3DPEBlockFogOffCFv, weak
/* 80081AB0 0007E9F0  88 63 00 0F */	lbz r3, 0xf(r3)
/* 80081AB4 0007E9F4  4E 80 00 20 */	blr 
.endfn getDither__16J3DPEBlockFogOffCFv

.fn __dt__16J3DPEBlockFogOffFv, weak
/* 80081AB8 0007E9F8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80081ABC 0007E9FC  7C 08 02 A6 */	mflr r0
/* 80081AC0 0007EA00  90 01 00 14 */	stw r0, 0x14(r1)
/* 80081AC4 0007EA04  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80081AC8 0007EA08  7C 7F 1B 79 */	or. r31, r3, r3
/* 80081ACC 0007EA0C  41 82 00 30 */	beq .L_80081AFC
/* 80081AD0 0007EA10  3C 60 80 4A */	lis r3, __vt__16J3DPEBlockFogOff@ha
/* 80081AD4 0007EA14  38 03 22 2C */	addi r0, r3, __vt__16J3DPEBlockFogOff@l
/* 80081AD8 0007EA18  90 1F 00 00 */	stw r0, 0(r31)
/* 80081ADC 0007EA1C  41 82 00 10 */	beq .L_80081AEC
/* 80081AE0 0007EA20  3C 60 80 4A */	lis r3, __vt__10J3DPEBlock@ha
/* 80081AE4 0007EA24  38 03 16 08 */	addi r0, r3, __vt__10J3DPEBlock@l
/* 80081AE8 0007EA28  90 1F 00 00 */	stw r0, 0(r31)
.L_80081AEC:
/* 80081AEC 0007EA2C  7C 80 07 35 */	extsh. r0, r4
/* 80081AF0 0007EA30  40 81 00 0C */	ble .L_80081AFC
/* 80081AF4 0007EA34  7F E3 FB 78 */	mr r3, r31
/* 80081AF8 0007EA38  4B FA 25 BD */	bl __dl__FPv
.L_80081AFC:
/* 80081AFC 0007EA3C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80081B00 0007EA40  7F E3 FB 78 */	mr r3, r31
/* 80081B04 0007EA44  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80081B08 0007EA48  7C 08 03 A6 */	mtlr r0
/* 80081B0C 0007EA4C  38 21 00 10 */	addi r1, r1, 0x10
/* 80081B10 0007EA50  4E 80 00 20 */	blr 
.endfn __dt__16J3DPEBlockFogOffFv

.fn indexToPtr__13J3DTevBlock16Fv, weak
/* 80081B14 0007EA54  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80081B18 0007EA58  7C 08 02 A6 */	mflr r0
/* 80081B1C 0007EA5C  90 01 00 24 */	stw r0, 0x24(r1)
/* 80081B20 0007EA60  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80081B24 0007EA64  3B E0 00 00 */	li r31, 0
/* 80081B28 0007EA68  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80081B2C 0007EA6C  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80081B30 0007EA70  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 80081B34 0007EA74  80 03 00 04 */	lwz r0, 4(r3)
/* 80081B38 0007EA78  80 64 00 00 */	lwz r3, 0(r4)
/* 80081B3C 0007EA7C  7C 03 02 14 */	add r0, r3, r0
/* 80081B40 0007EA80  90 04 00 08 */	stw r0, 8(r4)
/* 80081B44 0007EA84  80 6D 8E A8 */	lwz r3, __GDCurrentDL@sda21(r13)
/* 80081B48 0007EA88  83 C3 00 08 */	lwz r30, 8(r3)
.L_80081B4C:
/* 80081B4C 0007EA8C  80 6D 8E A8 */	lwz r3, __GDCurrentDL@sda21(r13)
/* 80081B50 0007EA90  83 A3 00 08 */	lwz r29, 8(r3)
/* 80081B54 0007EA94  7F A3 EB 78 */	mr r3, r29
/* 80081B58 0007EA98  4B FE 38 01 */	bl isTexNoReg__FPv
/* 80081B5C 0007EA9C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80081B60 0007EAA0  41 82 00 24 */	beq .L_80081B84
/* 80081B64 0007EAA4  7F A3 EB 78 */	mr r3, r29
/* 80081B68 0007EAA8  4B FE 38 15 */	bl getTexNoReg__FPv
/* 80081B6C 0007EAAC  B0 61 00 08 */	sth r3, 8(r1)
/* 80081B70 0007EAB0  7F E3 FB 78 */	mr r3, r31
/* 80081B74 0007EAB4  38 81 00 08 */	addi r4, r1, 8
/* 80081B78 0007EAB8  4B FE 38 11 */	bl loadTexNo__FUlRCUs
/* 80081B7C 0007EABC  3B FF 00 01 */	addi r31, r31, 1
/* 80081B80 0007EAC0  4B FF FF CC */	b .L_80081B4C
.L_80081B84:
/* 80081B84 0007EAC4  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 80081B88 0007EAC8  7F C3 F3 78 */	mr r3, r30
/* 80081B8C 0007EACC  80 04 00 08 */	lwz r0, 8(r4)
/* 80081B90 0007EAD0  7C 9E 00 50 */	subf r4, r30, r0
/* 80081B94 0007EAD4  48 06 AB B5 */	bl DCStoreRange
/* 80081B98 0007EAD8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80081B9C 0007EADC  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80081BA0 0007EAE0  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80081BA4 0007EAE4  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80081BA8 0007EAE8  7C 08 03 A6 */	mtlr r0
/* 80081BAC 0007EAEC  38 21 00 20 */	addi r1, r1, 0x20
/* 80081BB0 0007EAF0  4E 80 00 20 */	blr 
.endfn indexToPtr__13J3DTevBlock16Fv

.fn getType__13J3DTevBlock16Fv, weak
/* 80081BB4 0007EAF4  3C 60 54 56 */	lis r3, 0x54563136@ha
/* 80081BB8 0007EAF8  38 63 31 36 */	addi r3, r3, 0x54563136@l
/* 80081BBC 0007EAFC  4E 80 00 20 */	blr 
.endfn getType__13J3DTevBlock16Fv

.fn setTexNo__13J3DTevBlock16FUlUs, weak
/* 80081BC0 0007EB00  54 80 08 3C */	slwi r0, r4, 1
/* 80081BC4 0007EB04  7C 63 02 14 */	add r3, r3, r0
/* 80081BC8 0007EB08  B0 A3 00 08 */	sth r5, 8(r3)
/* 80081BCC 0007EB0C  4E 80 00 20 */	blr 
.endfn setTexNo__13J3DTevBlock16FUlUs

.fn setTexNo__13J3DTevBlock16FUlPCUs, weak
/* 80081BD0 0007EB10  54 80 08 3C */	slwi r0, r4, 1
/* 80081BD4 0007EB14  A0 85 00 00 */	lhz r4, 0(r5)
/* 80081BD8 0007EB18  7C 63 02 14 */	add r3, r3, r0
/* 80081BDC 0007EB1C  B0 83 00 08 */	sth r4, 8(r3)
/* 80081BE0 0007EB20  4E 80 00 20 */	blr 
.endfn setTexNo__13J3DTevBlock16FUlPCUs

.fn getTexNo__13J3DTevBlock16CFUl, weak
/* 80081BE4 0007EB24  54 80 08 3C */	slwi r0, r4, 1
/* 80081BE8 0007EB28  7C 63 02 14 */	add r3, r3, r0
/* 80081BEC 0007EB2C  A0 63 00 08 */	lhz r3, 8(r3)
/* 80081BF0 0007EB30  4E 80 00 20 */	blr 
.endfn getTexNo__13J3DTevBlock16CFUl

.fn setTevOrder__13J3DTevBlock16FUl11J3DTevOrder, weak
/* 80081BF4 0007EB34  54 84 10 3A */	slwi r4, r4, 2
/* 80081BF8 0007EB38  88 05 00 00 */	lbz r0, 0(r5)
/* 80081BFC 0007EB3C  7C 83 22 14 */	add r4, r3, r4
/* 80081C00 0007EB40  88 65 00 01 */	lbz r3, 1(r5)
/* 80081C04 0007EB44  98 04 00 18 */	stb r0, 0x18(r4)
/* 80081C08 0007EB48  88 05 00 02 */	lbz r0, 2(r5)
/* 80081C0C 0007EB4C  98 64 00 19 */	stb r3, 0x19(r4)
/* 80081C10 0007EB50  98 04 00 1A */	stb r0, 0x1a(r4)
/* 80081C14 0007EB54  4E 80 00 20 */	blr 
.endfn setTevOrder__13J3DTevBlock16FUl11J3DTevOrder

.fn setTevOrder__13J3DTevBlock16FUlPC11J3DTevOrder, weak
/* 80081C18 0007EB58  54 84 10 3A */	slwi r4, r4, 2
/* 80081C1C 0007EB5C  88 05 00 00 */	lbz r0, 0(r5)
/* 80081C20 0007EB60  7C 83 22 14 */	add r4, r3, r4
/* 80081C24 0007EB64  88 65 00 01 */	lbz r3, 1(r5)
/* 80081C28 0007EB68  98 04 00 18 */	stb r0, 0x18(r4)
/* 80081C2C 0007EB6C  88 05 00 02 */	lbz r0, 2(r5)
/* 80081C30 0007EB70  98 64 00 19 */	stb r3, 0x19(r4)
/* 80081C34 0007EB74  98 04 00 1A */	stb r0, 0x1a(r4)
/* 80081C38 0007EB78  4E 80 00 20 */	blr 
.endfn setTevOrder__13J3DTevBlock16FUlPC11J3DTevOrder

.fn getTevOrder__13J3DTevBlock16FUl, weak
/* 80081C3C 0007EB7C  54 84 10 3A */	slwi r4, r4, 2
/* 80081C40 0007EB80  7C 60 1B 78 */	mr r0, r3
/* 80081C44 0007EB84  38 64 00 18 */	addi r3, r4, 0x18
/* 80081C48 0007EB88  7C 60 1A 14 */	add r3, r0, r3
/* 80081C4C 0007EB8C  4E 80 00 20 */	blr 
.endfn getTevOrder__13J3DTevBlock16FUl

.fn setTevColor__13J3DTevBlock16FUl13J3DGXColorS10, weak
/* 80081C50 0007EB90  54 80 18 38 */	slwi r0, r4, 3
/* 80081C54 0007EB94  A8 C5 00 00 */	lha r6, 0(r5)
/* 80081C58 0007EB98  7C 83 02 14 */	add r4, r3, r0
/* 80081C5C 0007EB9C  A8 05 00 02 */	lha r0, 2(r5)
/* 80081C60 0007EBA0  B0 C4 00 DA */	sth r6, 0xda(r4)
/* 80081C64 0007EBA4  A8 65 00 04 */	lha r3, 4(r5)
/* 80081C68 0007EBA8  B0 04 00 DC */	sth r0, 0xdc(r4)
/* 80081C6C 0007EBAC  A8 05 00 06 */	lha r0, 6(r5)
/* 80081C70 0007EBB0  B0 64 00 DE */	sth r3, 0xde(r4)
/* 80081C74 0007EBB4  B0 04 00 E0 */	sth r0, 0xe0(r4)
/* 80081C78 0007EBB8  4E 80 00 20 */	blr 
.endfn setTevColor__13J3DTevBlock16FUl13J3DGXColorS10

.fn setTevColor__13J3DTevBlock16FUlPC13J3DGXColorS10, weak
/* 80081C7C 0007EBBC  54 80 18 38 */	slwi r0, r4, 3
/* 80081C80 0007EBC0  A8 C5 00 00 */	lha r6, 0(r5)
/* 80081C84 0007EBC4  7C 83 02 14 */	add r4, r3, r0
/* 80081C88 0007EBC8  A8 05 00 02 */	lha r0, 2(r5)
/* 80081C8C 0007EBCC  B0 C4 00 DA */	sth r6, 0xda(r4)
/* 80081C90 0007EBD0  A8 65 00 04 */	lha r3, 4(r5)
/* 80081C94 0007EBD4  B0 04 00 DC */	sth r0, 0xdc(r4)
/* 80081C98 0007EBD8  A8 05 00 06 */	lha r0, 6(r5)
/* 80081C9C 0007EBDC  B0 64 00 DE */	sth r3, 0xde(r4)
/* 80081CA0 0007EBE0  B0 04 00 E0 */	sth r0, 0xe0(r4)
/* 80081CA4 0007EBE4  4E 80 00 20 */	blr 
.endfn setTevColor__13J3DTevBlock16FUlPC13J3DGXColorS10

.fn getTevColor__13J3DTevBlock16FUl, weak
/* 80081CA8 0007EBE8  54 84 18 38 */	slwi r4, r4, 3
/* 80081CAC 0007EBEC  7C 60 1B 78 */	mr r0, r3
/* 80081CB0 0007EBF0  38 64 00 DA */	addi r3, r4, 0xda
/* 80081CB4 0007EBF4  7C 60 1A 14 */	add r3, r0, r3
/* 80081CB8 0007EBF8  4E 80 00 20 */	blr 
.endfn getTevColor__13J3DTevBlock16FUl

.fn setTevKColor__13J3DTevBlock16FUl10J3DGXColor, weak
/* 80081CBC 0007EBFC  54 80 10 3A */	slwi r0, r4, 2
/* 80081CC0 0007EC00  88 C5 00 00 */	lbz r6, 0(r5)
/* 80081CC4 0007EC04  7C 83 02 14 */	add r4, r3, r0
/* 80081CC8 0007EC08  88 05 00 01 */	lbz r0, 1(r5)
/* 80081CCC 0007EC0C  98 C4 00 FA */	stb r6, 0xfa(r4)
/* 80081CD0 0007EC10  88 65 00 02 */	lbz r3, 2(r5)
/* 80081CD4 0007EC14  98 04 00 FB */	stb r0, 0xfb(r4)
/* 80081CD8 0007EC18  88 05 00 03 */	lbz r0, 3(r5)
/* 80081CDC 0007EC1C  98 64 00 FC */	stb r3, 0xfc(r4)
/* 80081CE0 0007EC20  98 04 00 FD */	stb r0, 0xfd(r4)
/* 80081CE4 0007EC24  4E 80 00 20 */	blr 
.endfn setTevKColor__13J3DTevBlock16FUl10J3DGXColor

.fn setTevKColor__13J3DTevBlock16FUlPC10J3DGXColor, weak
/* 80081CE8 0007EC28  54 80 10 3A */	slwi r0, r4, 2
/* 80081CEC 0007EC2C  88 C5 00 00 */	lbz r6, 0(r5)
/* 80081CF0 0007EC30  7C 83 02 14 */	add r4, r3, r0
/* 80081CF4 0007EC34  88 05 00 01 */	lbz r0, 1(r5)
/* 80081CF8 0007EC38  98 C4 00 FA */	stb r6, 0xfa(r4)
/* 80081CFC 0007EC3C  88 65 00 02 */	lbz r3, 2(r5)
/* 80081D00 0007EC40  98 04 00 FB */	stb r0, 0xfb(r4)
/* 80081D04 0007EC44  88 05 00 03 */	lbz r0, 3(r5)
/* 80081D08 0007EC48  98 64 00 FC */	stb r3, 0xfc(r4)
/* 80081D0C 0007EC4C  98 04 00 FD */	stb r0, 0xfd(r4)
/* 80081D10 0007EC50  4E 80 00 20 */	blr 
.endfn setTevKColor__13J3DTevBlock16FUlPC10J3DGXColor

.fn getTevKColor__13J3DTevBlock16FUl, weak
/* 80081D14 0007EC54  54 84 10 3A */	slwi r4, r4, 2
/* 80081D18 0007EC58  7C 60 1B 78 */	mr r0, r3
/* 80081D1C 0007EC5C  38 64 00 FA */	addi r3, r4, 0xfa
/* 80081D20 0007EC60  7C 60 1A 14 */	add r3, r0, r3
/* 80081D24 0007EC64  4E 80 00 20 */	blr 
.endfn getTevKColor__13J3DTevBlock16FUl

.fn setTevKColorSel__13J3DTevBlock16FUlUc, weak
/* 80081D28 0007EC68  7C 63 22 14 */	add r3, r3, r4
/* 80081D2C 0007EC6C  98 A3 01 0A */	stb r5, 0x10a(r3)
/* 80081D30 0007EC70  4E 80 00 20 */	blr 
.endfn setTevKColorSel__13J3DTevBlock16FUlUc

.fn setTevKColorSel__13J3DTevBlock16FUlPCUc, weak
/* 80081D34 0007EC74  88 05 00 00 */	lbz r0, 0(r5)
/* 80081D38 0007EC78  7C 63 22 14 */	add r3, r3, r4
/* 80081D3C 0007EC7C  98 03 01 0A */	stb r0, 0x10a(r3)
/* 80081D40 0007EC80  4E 80 00 20 */	blr 
.endfn setTevKColorSel__13J3DTevBlock16FUlPCUc

.fn getTevKColorSel__13J3DTevBlock16FUl, weak
/* 80081D44 0007EC84  7C 63 22 14 */	add r3, r3, r4
/* 80081D48 0007EC88  88 63 01 0A */	lbz r3, 0x10a(r3)
/* 80081D4C 0007EC8C  4E 80 00 20 */	blr 
.endfn getTevKColorSel__13J3DTevBlock16FUl

.fn setTevKAlphaSel__13J3DTevBlock16FUlUc, weak
/* 80081D50 0007EC90  7C 63 22 14 */	add r3, r3, r4
/* 80081D54 0007EC94  98 A3 01 1A */	stb r5, 0x11a(r3)
/* 80081D58 0007EC98  4E 80 00 20 */	blr 
.endfn setTevKAlphaSel__13J3DTevBlock16FUlUc

.fn setTevKAlphaSel__13J3DTevBlock16FUlPCUc, weak
/* 80081D5C 0007EC9C  88 05 00 00 */	lbz r0, 0(r5)
/* 80081D60 0007ECA0  7C 63 22 14 */	add r3, r3, r4
/* 80081D64 0007ECA4  98 03 01 1A */	stb r0, 0x11a(r3)
/* 80081D68 0007ECA8  4E 80 00 20 */	blr 
.endfn setTevKAlphaSel__13J3DTevBlock16FUlPCUc

.fn getTevKAlphaSel__13J3DTevBlock16FUl, weak
/* 80081D6C 0007ECAC  7C 63 22 14 */	add r3, r3, r4
/* 80081D70 0007ECB0  88 63 01 1A */	lbz r3, 0x11a(r3)
/* 80081D74 0007ECB4  4E 80 00 20 */	blr 
.endfn getTevKAlphaSel__13J3DTevBlock16FUl

.fn setTevStageNum__13J3DTevBlock16FUc, weak
/* 80081D78 0007ECB8  98 83 00 58 */	stb r4, 0x58(r3)
/* 80081D7C 0007ECBC  4E 80 00 20 */	blr 
.endfn setTevStageNum__13J3DTevBlock16FUc

.fn setTevStageNum__13J3DTevBlock16FPCUc, weak
/* 80081D80 0007ECC0  88 04 00 00 */	lbz r0, 0(r4)
/* 80081D84 0007ECC4  98 03 00 58 */	stb r0, 0x58(r3)
/* 80081D88 0007ECC8  4E 80 00 20 */	blr 
.endfn setTevStageNum__13J3DTevBlock16FPCUc

.fn getTevStageNum__13J3DTevBlock16CFv, weak
/* 80081D8C 0007ECCC  88 63 00 58 */	lbz r3, 0x58(r3)
/* 80081D90 0007ECD0  4E 80 00 20 */	blr 
.endfn getTevStageNum__13J3DTevBlock16CFv

.fn setTevStage__13J3DTevBlock16FUl11J3DTevStage, weak
/* 80081D94 0007ECD4  54 80 18 38 */	slwi r0, r4, 3
/* 80081D98 0007ECD8  88 C5 00 01 */	lbz r6, 1(r5)
/* 80081D9C 0007ECDC  7C 83 02 14 */	add r4, r3, r0
/* 80081DA0 0007ECE0  88 05 00 02 */	lbz r0, 2(r5)
/* 80081DA4 0007ECE4  98 C4 00 5A */	stb r6, 0x5a(r4)
/* 80081DA8 0007ECE8  88 65 00 03 */	lbz r3, 3(r5)
/* 80081DAC 0007ECEC  98 04 00 5B */	stb r0, 0x5b(r4)
/* 80081DB0 0007ECF0  88 05 00 05 */	lbz r0, 5(r5)
/* 80081DB4 0007ECF4  98 64 00 5C */	stb r3, 0x5c(r4)
/* 80081DB8 0007ECF8  88 65 00 06 */	lbz r3, 6(r5)
/* 80081DBC 0007ECFC  98 04 00 5E */	stb r0, 0x5e(r4)
/* 80081DC0 0007ED00  88 05 00 07 */	lbz r0, 7(r5)
/* 80081DC4 0007ED04  98 64 00 5F */	stb r3, 0x5f(r4)
/* 80081DC8 0007ED08  98 04 00 60 */	stb r0, 0x60(r4)
/* 80081DCC 0007ED0C  4E 80 00 20 */	blr 
.endfn setTevStage__13J3DTevBlock16FUl11J3DTevStage

.fn setTevStage__13J3DTevBlock16FUlPC11J3DTevStage, weak
/* 80081DD0 0007ED10  54 80 18 38 */	slwi r0, r4, 3
/* 80081DD4 0007ED14  88 C5 00 01 */	lbz r6, 1(r5)
/* 80081DD8 0007ED18  7C 83 02 14 */	add r4, r3, r0
/* 80081DDC 0007ED1C  88 05 00 02 */	lbz r0, 2(r5)
/* 80081DE0 0007ED20  98 C4 00 5A */	stb r6, 0x5a(r4)
/* 80081DE4 0007ED24  88 65 00 03 */	lbz r3, 3(r5)
/* 80081DE8 0007ED28  98 04 00 5B */	stb r0, 0x5b(r4)
/* 80081DEC 0007ED2C  88 05 00 05 */	lbz r0, 5(r5)
/* 80081DF0 0007ED30  98 64 00 5C */	stb r3, 0x5c(r4)
/* 80081DF4 0007ED34  88 65 00 06 */	lbz r3, 6(r5)
/* 80081DF8 0007ED38  98 04 00 5E */	stb r0, 0x5e(r4)
/* 80081DFC 0007ED3C  88 05 00 07 */	lbz r0, 7(r5)
/* 80081E00 0007ED40  98 64 00 5F */	stb r3, 0x5f(r4)
/* 80081E04 0007ED44  98 04 00 60 */	stb r0, 0x60(r4)
/* 80081E08 0007ED48  4E 80 00 20 */	blr 
.endfn setTevStage__13J3DTevBlock16FUlPC11J3DTevStage

.fn getTevStage__13J3DTevBlock16FUl, weak
/* 80081E0C 0007ED4C  54 84 18 38 */	slwi r4, r4, 3
/* 80081E10 0007ED50  7C 60 1B 78 */	mr r0, r3
/* 80081E14 0007ED54  38 64 00 59 */	addi r3, r4, 0x59
/* 80081E18 0007ED58  7C 60 1A 14 */	add r3, r0, r3
/* 80081E1C 0007ED5C  4E 80 00 20 */	blr 
.endfn getTevStage__13J3DTevBlock16FUl

.fn setTevSwapModeInfo__13J3DTevBlock16FUl18J3DTevSwapModeInfo, weak
/* 80081E20 0007ED60  54 80 18 38 */	slwi r0, r4, 3
/* 80081E24 0007ED64  88 85 00 01 */	lbz r4, 1(r5)
/* 80081E28 0007ED68  7C C3 02 14 */	add r6, r3, r0
/* 80081E2C 0007ED6C  88 05 00 00 */	lbz r0, 0(r5)
/* 80081E30 0007ED70  88 A6 00 60 */	lbz r5, 0x60(r6)
/* 80081E34 0007ED74  54 83 10 3A */	slwi r3, r4, 2
/* 80081E38 0007ED78  54 A4 07 B6 */	rlwinm r4, r5, 0, 0x1e, 0x1b
/* 80081E3C 0007ED7C  7C 83 1B 78 */	or r3, r4, r3
/* 80081E40 0007ED80  98 66 00 60 */	stb r3, 0x60(r6)
/* 80081E44 0007ED84  88 66 00 60 */	lbz r3, 0x60(r6)
/* 80081E48 0007ED88  54 63 00 3A */	rlwinm r3, r3, 0, 0, 0x1d
/* 80081E4C 0007ED8C  7C 60 03 78 */	or r0, r3, r0
/* 80081E50 0007ED90  98 06 00 60 */	stb r0, 0x60(r6)
/* 80081E54 0007ED94  4E 80 00 20 */	blr 
.endfn setTevSwapModeInfo__13J3DTevBlock16FUl18J3DTevSwapModeInfo

.fn setTevSwapModeInfo__13J3DTevBlock16FUlPC18J3DTevSwapModeInfo, weak
/* 80081E58 0007ED98  54 80 18 38 */	slwi r0, r4, 3
/* 80081E5C 0007ED9C  88 85 00 01 */	lbz r4, 1(r5)
/* 80081E60 0007EDA0  7C C3 02 14 */	add r6, r3, r0
/* 80081E64 0007EDA4  88 05 00 00 */	lbz r0, 0(r5)
/* 80081E68 0007EDA8  88 A6 00 60 */	lbz r5, 0x60(r6)
/* 80081E6C 0007EDAC  54 83 10 3A */	slwi r3, r4, 2
/* 80081E70 0007EDB0  54 A4 07 B6 */	rlwinm r4, r5, 0, 0x1e, 0x1b
/* 80081E74 0007EDB4  7C 83 1B 78 */	or r3, r4, r3
/* 80081E78 0007EDB8  98 66 00 60 */	stb r3, 0x60(r6)
/* 80081E7C 0007EDBC  88 66 00 60 */	lbz r3, 0x60(r6)
/* 80081E80 0007EDC0  54 63 00 3A */	rlwinm r3, r3, 0, 0, 0x1d
/* 80081E84 0007EDC4  7C 60 03 78 */	or r0, r3, r0
/* 80081E88 0007EDC8  98 06 00 60 */	stb r0, 0x60(r6)
/* 80081E8C 0007EDCC  4E 80 00 20 */	blr 
.endfn setTevSwapModeInfo__13J3DTevBlock16FUlPC18J3DTevSwapModeInfo

.fn setTevSwapModeTable__13J3DTevBlock16FUl19J3DTevSwapModeTable, weak
/* 80081E90 0007EDD0  88 05 00 00 */	lbz r0, 0(r5)
/* 80081E94 0007EDD4  7C 63 22 14 */	add r3, r3, r4
/* 80081E98 0007EDD8  98 03 01 2A */	stb r0, 0x12a(r3)
/* 80081E9C 0007EDDC  4E 80 00 20 */	blr 
.endfn setTevSwapModeTable__13J3DTevBlock16FUl19J3DTevSwapModeTable

.fn setTevSwapModeTable__13J3DTevBlock16FUlPC19J3DTevSwapModeTable, weak
/* 80081EA0 0007EDE0  88 05 00 00 */	lbz r0, 0(r5)
/* 80081EA4 0007EDE4  7C 63 22 14 */	add r3, r3, r4
/* 80081EA8 0007EDE8  98 03 01 2A */	stb r0, 0x12a(r3)
/* 80081EAC 0007EDEC  4E 80 00 20 */	blr 
.endfn setTevSwapModeTable__13J3DTevBlock16FUlPC19J3DTevSwapModeTable

.fn getTevSwapModeTable__13J3DTevBlock16FUl, weak
/* 80081EB0 0007EDF0  7C 60 1B 78 */	mr r0, r3
/* 80081EB4 0007EDF4  38 64 01 2A */	addi r3, r4, 0x12a
/* 80081EB8 0007EDF8  7C 60 1A 14 */	add r3, r0, r3
/* 80081EBC 0007EDFC  4E 80 00 20 */	blr 
.endfn getTevSwapModeTable__13J3DTevBlock16FUl

.fn setIndTevStage__13J3DTevBlock16FUl14J3DIndTevStage, weak
/* 80081EC0 0007EE00  54 80 10 3A */	slwi r0, r4, 2
/* 80081EC4 0007EE04  80 85 00 00 */	lwz r4, 0(r5)
/* 80081EC8 0007EE08  7C 63 02 14 */	add r3, r3, r0
/* 80081ECC 0007EE0C  90 83 01 30 */	stw r4, 0x130(r3)
/* 80081ED0 0007EE10  4E 80 00 20 */	blr 
.endfn setIndTevStage__13J3DTevBlock16FUl14J3DIndTevStage

.fn setIndTevStage__13J3DTevBlock16FUlPC14J3DIndTevStage, weak
/* 80081ED4 0007EE14  54 80 10 3A */	slwi r0, r4, 2
/* 80081ED8 0007EE18  80 85 00 00 */	lwz r4, 0(r5)
/* 80081EDC 0007EE1C  7C 63 02 14 */	add r3, r3, r0
/* 80081EE0 0007EE20  90 83 01 30 */	stw r4, 0x130(r3)
/* 80081EE4 0007EE24  4E 80 00 20 */	blr 
.endfn setIndTevStage__13J3DTevBlock16FUlPC14J3DIndTevStage

.fn getIndTevStage__13J3DTevBlock16FUl, weak
/* 80081EE8 0007EE28  54 84 10 3A */	slwi r4, r4, 2
/* 80081EEC 0007EE2C  7C 60 1B 78 */	mr r0, r3
/* 80081EF0 0007EE30  38 64 01 30 */	addi r3, r4, 0x130
/* 80081EF4 0007EE34  7C 60 1A 14 */	add r3, r0, r3
/* 80081EF8 0007EE38  4E 80 00 20 */	blr 
.endfn getIndTevStage__13J3DTevBlock16FUl

.fn getTexNoOffset__13J3DTevBlock16CFv, weak
/* 80081EFC 0007EE3C  80 63 00 04 */	lwz r3, 4(r3)
/* 80081F00 0007EE40  4E 80 00 20 */	blr 
.endfn getTexNoOffset__13J3DTevBlock16CFv

.fn getTevRegOffset__13J3DTevBlock16CFv, weak
/* 80081F04 0007EE44  80 63 01 70 */	lwz r3, 0x170(r3)
/* 80081F08 0007EE48  4E 80 00 20 */	blr 
.endfn getTevRegOffset__13J3DTevBlock16CFv

.fn setTevRegOffset__13J3DTevBlock16FUl, weak
/* 80081F0C 0007EE4C  90 83 01 70 */	stw r4, 0x170(r3)
/* 80081F10 0007EE50  4E 80 00 20 */	blr 
.endfn setTevRegOffset__13J3DTevBlock16FUl

.fn __dt__13J3DTevBlock16Fv, weak
/* 80081F14 0007EE54  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80081F18 0007EE58  7C 08 02 A6 */	mflr r0
/* 80081F1C 0007EE5C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80081F20 0007EE60  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80081F24 0007EE64  7C 7F 1B 79 */	or. r31, r3, r3
/* 80081F28 0007EE68  41 82 00 30 */	beq .L_80081F58
/* 80081F2C 0007EE6C  3C 60 80 4A */	lis r3, __vt__13J3DTevBlock16@ha
/* 80081F30 0007EE70  38 03 22 A8 */	addi r0, r3, __vt__13J3DTevBlock16@l
/* 80081F34 0007EE74  90 1F 00 00 */	stw r0, 0(r31)
/* 80081F38 0007EE78  41 82 00 10 */	beq .L_80081F48
/* 80081F3C 0007EE7C  3C 60 80 4A */	lis r3, __vt__11J3DTevBlock@ha
/* 80081F40 0007EE80  38 03 2B 08 */	addi r0, r3, __vt__11J3DTevBlock@l
/* 80081F44 0007EE84  90 1F 00 00 */	stw r0, 0(r31)
.L_80081F48:
/* 80081F48 0007EE88  7C 80 07 35 */	extsh. r0, r4
/* 80081F4C 0007EE8C  40 81 00 0C */	ble .L_80081F58
/* 80081F50 0007EE90  7F E3 FB 78 */	mr r3, r31
/* 80081F54 0007EE94  4B FA 21 61 */	bl __dl__FPv
.L_80081F58:
/* 80081F58 0007EE98  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80081F5C 0007EE9C  7F E3 FB 78 */	mr r3, r31
/* 80081F60 0007EEA0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80081F64 0007EEA4  7C 08 03 A6 */	mtlr r0
/* 80081F68 0007EEA8  38 21 00 10 */	addi r1, r1, 0x10
/* 80081F6C 0007EEAC  4E 80 00 20 */	blr 
.endfn __dt__13J3DTevBlock16Fv

.fn ptrToIndex__12J3DTevBlock4Fv, weak
/* 80081F70 0007EEB0  4E 80 00 20 */	blr 
.endfn ptrToIndex__12J3DTevBlock4Fv

.fn indexToPtr__12J3DTevBlock4Fv, weak
/* 80081F74 0007EEB4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80081F78 0007EEB8  7C 08 02 A6 */	mflr r0
/* 80081F7C 0007EEBC  90 01 00 24 */	stw r0, 0x24(r1)
/* 80081F80 0007EEC0  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80081F84 0007EEC4  3B E0 00 00 */	li r31, 0
/* 80081F88 0007EEC8  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80081F8C 0007EECC  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80081F90 0007EED0  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 80081F94 0007EED4  80 03 00 04 */	lwz r0, 4(r3)
/* 80081F98 0007EED8  80 64 00 00 */	lwz r3, 0(r4)
/* 80081F9C 0007EEDC  7C 03 02 14 */	add r0, r3, r0
/* 80081FA0 0007EEE0  90 04 00 08 */	stw r0, 8(r4)
/* 80081FA4 0007EEE4  80 6D 8E A8 */	lwz r3, __GDCurrentDL@sda21(r13)
/* 80081FA8 0007EEE8  83 C3 00 08 */	lwz r30, 8(r3)
.L_80081FAC:
/* 80081FAC 0007EEEC  80 6D 8E A8 */	lwz r3, __GDCurrentDL@sda21(r13)
/* 80081FB0 0007EEF0  83 A3 00 08 */	lwz r29, 8(r3)
/* 80081FB4 0007EEF4  7F A3 EB 78 */	mr r3, r29
/* 80081FB8 0007EEF8  4B FE 33 A1 */	bl isTexNoReg__FPv
/* 80081FBC 0007EEFC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80081FC0 0007EF00  41 82 00 24 */	beq .L_80081FE4
/* 80081FC4 0007EF04  7F A3 EB 78 */	mr r3, r29
/* 80081FC8 0007EF08  4B FE 33 B5 */	bl getTexNoReg__FPv
/* 80081FCC 0007EF0C  B0 61 00 08 */	sth r3, 8(r1)
/* 80081FD0 0007EF10  7F E3 FB 78 */	mr r3, r31
/* 80081FD4 0007EF14  38 81 00 08 */	addi r4, r1, 8
/* 80081FD8 0007EF18  4B FE 33 B1 */	bl loadTexNo__FUlRCUs
/* 80081FDC 0007EF1C  3B FF 00 01 */	addi r31, r31, 1
/* 80081FE0 0007EF20  4B FF FF CC */	b .L_80081FAC
.L_80081FE4:
/* 80081FE4 0007EF24  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 80081FE8 0007EF28  7F C3 F3 78 */	mr r3, r30
/* 80081FEC 0007EF2C  80 04 00 08 */	lwz r0, 8(r4)
/* 80081FF0 0007EF30  7C 9E 00 50 */	subf r4, r30, r0
/* 80081FF4 0007EF34  48 06 A7 55 */	bl DCStoreRange
/* 80081FF8 0007EF38  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80081FFC 0007EF3C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80082000 0007EF40  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80082004 0007EF44  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80082008 0007EF48  7C 08 03 A6 */	mtlr r0
/* 8008200C 0007EF4C  38 21 00 20 */	addi r1, r1, 0x20
/* 80082010 0007EF50  4E 80 00 20 */	blr 
.endfn indexToPtr__12J3DTevBlock4Fv

.fn getType__12J3DTevBlock4Fv, weak
/* 80082014 0007EF54  3C 60 54 56 */	lis r3, 0x54564234@ha
/* 80082018 0007EF58  38 63 42 34 */	addi r3, r3, 0x54564234@l
/* 8008201C 0007EF5C  4E 80 00 20 */	blr 
.endfn getType__12J3DTevBlock4Fv

.fn setTexNo__12J3DTevBlock4FUlUs, weak
/* 80082020 0007EF60  54 80 08 3C */	slwi r0, r4, 1
/* 80082024 0007EF64  7C 63 02 14 */	add r3, r3, r0
/* 80082028 0007EF68  B0 A3 00 08 */	sth r5, 8(r3)
/* 8008202C 0007EF6C  4E 80 00 20 */	blr 
.endfn setTexNo__12J3DTevBlock4FUlUs

.fn setTexNo__12J3DTevBlock4FUlPCUs, weak
/* 80082030 0007EF70  54 80 08 3C */	slwi r0, r4, 1
/* 80082034 0007EF74  A0 85 00 00 */	lhz r4, 0(r5)
/* 80082038 0007EF78  7C 63 02 14 */	add r3, r3, r0
/* 8008203C 0007EF7C  B0 83 00 08 */	sth r4, 8(r3)
/* 80082040 0007EF80  4E 80 00 20 */	blr 
.endfn setTexNo__12J3DTevBlock4FUlPCUs

.fn getTexNo__12J3DTevBlock4CFUl, weak
/* 80082044 0007EF84  54 80 08 3C */	slwi r0, r4, 1
/* 80082048 0007EF88  7C 63 02 14 */	add r3, r3, r0
/* 8008204C 0007EF8C  A0 63 00 08 */	lhz r3, 8(r3)
/* 80082050 0007EF90  4E 80 00 20 */	blr 
.endfn getTexNo__12J3DTevBlock4CFUl

.fn setTevOrder__12J3DTevBlock4FUl11J3DTevOrder, weak
/* 80082054 0007EF94  54 84 10 3A */	slwi r4, r4, 2
/* 80082058 0007EF98  88 05 00 00 */	lbz r0, 0(r5)
/* 8008205C 0007EF9C  7C 83 22 14 */	add r4, r3, r4
/* 80082060 0007EFA0  88 65 00 01 */	lbz r3, 1(r5)
/* 80082064 0007EFA4  98 04 00 10 */	stb r0, 0x10(r4)
/* 80082068 0007EFA8  88 05 00 02 */	lbz r0, 2(r5)
/* 8008206C 0007EFAC  98 64 00 11 */	stb r3, 0x11(r4)
/* 80082070 0007EFB0  98 04 00 12 */	stb r0, 0x12(r4)
/* 80082074 0007EFB4  4E 80 00 20 */	blr 
.endfn setTevOrder__12J3DTevBlock4FUl11J3DTevOrder

.fn setTevOrder__12J3DTevBlock4FUlPC11J3DTevOrder, weak
/* 80082078 0007EFB8  54 84 10 3A */	slwi r4, r4, 2
/* 8008207C 0007EFBC  88 05 00 00 */	lbz r0, 0(r5)
/* 80082080 0007EFC0  7C 83 22 14 */	add r4, r3, r4
/* 80082084 0007EFC4  88 65 00 01 */	lbz r3, 1(r5)
/* 80082088 0007EFC8  98 04 00 10 */	stb r0, 0x10(r4)
/* 8008208C 0007EFCC  88 05 00 02 */	lbz r0, 2(r5)
/* 80082090 0007EFD0  98 64 00 11 */	stb r3, 0x11(r4)
/* 80082094 0007EFD4  98 04 00 12 */	stb r0, 0x12(r4)
/* 80082098 0007EFD8  4E 80 00 20 */	blr 
.endfn setTevOrder__12J3DTevBlock4FUlPC11J3DTevOrder

.fn getTevOrder__12J3DTevBlock4FUl, weak
/* 8008209C 0007EFDC  54 84 10 3A */	slwi r4, r4, 2
/* 800820A0 0007EFE0  7C 60 1B 78 */	mr r0, r3
/* 800820A4 0007EFE4  38 64 00 10 */	addi r3, r4, 0x10
/* 800820A8 0007EFE8  7C 60 1A 14 */	add r3, r0, r3
/* 800820AC 0007EFEC  4E 80 00 20 */	blr 
.endfn getTevOrder__12J3DTevBlock4FUl

.fn setTevColor__12J3DTevBlock4FUl13J3DGXColorS10, weak
/* 800820B0 0007EFF0  54 80 18 38 */	slwi r0, r4, 3
/* 800820B4 0007EFF4  A8 C5 00 00 */	lha r6, 0(r5)
/* 800820B8 0007EFF8  7C 83 02 14 */	add r4, r3, r0
/* 800820BC 0007EFFC  A8 05 00 02 */	lha r0, 2(r5)
/* 800820C0 0007F000  B0 C4 00 42 */	sth r6, 0x42(r4)
/* 800820C4 0007F004  A8 65 00 04 */	lha r3, 4(r5)
/* 800820C8 0007F008  B0 04 00 44 */	sth r0, 0x44(r4)
/* 800820CC 0007F00C  A8 05 00 06 */	lha r0, 6(r5)
/* 800820D0 0007F010  B0 64 00 46 */	sth r3, 0x46(r4)
/* 800820D4 0007F014  B0 04 00 48 */	sth r0, 0x48(r4)
/* 800820D8 0007F018  4E 80 00 20 */	blr 
.endfn setTevColor__12J3DTevBlock4FUl13J3DGXColorS10

.fn setTevColor__12J3DTevBlock4FUlPC13J3DGXColorS10, weak
/* 800820DC 0007F01C  54 80 18 38 */	slwi r0, r4, 3
/* 800820E0 0007F020  A8 C5 00 00 */	lha r6, 0(r5)
/* 800820E4 0007F024  7C 83 02 14 */	add r4, r3, r0
/* 800820E8 0007F028  A8 05 00 02 */	lha r0, 2(r5)
/* 800820EC 0007F02C  B0 C4 00 42 */	sth r6, 0x42(r4)
/* 800820F0 0007F030  A8 65 00 04 */	lha r3, 4(r5)
/* 800820F4 0007F034  B0 04 00 44 */	sth r0, 0x44(r4)
/* 800820F8 0007F038  A8 05 00 06 */	lha r0, 6(r5)
/* 800820FC 0007F03C  B0 64 00 46 */	sth r3, 0x46(r4)
/* 80082100 0007F040  B0 04 00 48 */	sth r0, 0x48(r4)
/* 80082104 0007F044  4E 80 00 20 */	blr 
.endfn setTevColor__12J3DTevBlock4FUlPC13J3DGXColorS10

.fn getTevColor__12J3DTevBlock4FUl, weak
/* 80082108 0007F048  54 84 18 38 */	slwi r4, r4, 3
/* 8008210C 0007F04C  7C 60 1B 78 */	mr r0, r3
/* 80082110 0007F050  38 64 00 42 */	addi r3, r4, 0x42
/* 80082114 0007F054  7C 60 1A 14 */	add r3, r0, r3
/* 80082118 0007F058  4E 80 00 20 */	blr 
.endfn getTevColor__12J3DTevBlock4FUl

.fn setTevKColor__12J3DTevBlock4FUl10J3DGXColor, weak
/* 8008211C 0007F05C  54 80 10 3A */	slwi r0, r4, 2
/* 80082120 0007F060  88 C5 00 00 */	lbz r6, 0(r5)
/* 80082124 0007F064  7C 83 02 14 */	add r4, r3, r0
/* 80082128 0007F068  88 05 00 01 */	lbz r0, 1(r5)
/* 8008212C 0007F06C  98 C4 00 62 */	stb r6, 0x62(r4)
/* 80082130 0007F070  88 65 00 02 */	lbz r3, 2(r5)
/* 80082134 0007F074  98 04 00 63 */	stb r0, 0x63(r4)
/* 80082138 0007F078  88 05 00 03 */	lbz r0, 3(r5)
/* 8008213C 0007F07C  98 64 00 64 */	stb r3, 0x64(r4)
/* 80082140 0007F080  98 04 00 65 */	stb r0, 0x65(r4)
/* 80082144 0007F084  4E 80 00 20 */	blr 
.endfn setTevKColor__12J3DTevBlock4FUl10J3DGXColor

.fn setTevKColor__12J3DTevBlock4FUlPC10J3DGXColor, weak
/* 80082148 0007F088  54 80 10 3A */	slwi r0, r4, 2
/* 8008214C 0007F08C  88 C5 00 00 */	lbz r6, 0(r5)
/* 80082150 0007F090  7C 83 02 14 */	add r4, r3, r0
/* 80082154 0007F094  88 05 00 01 */	lbz r0, 1(r5)
/* 80082158 0007F098  98 C4 00 62 */	stb r6, 0x62(r4)
/* 8008215C 0007F09C  88 65 00 02 */	lbz r3, 2(r5)
/* 80082160 0007F0A0  98 04 00 63 */	stb r0, 0x63(r4)
/* 80082164 0007F0A4  88 05 00 03 */	lbz r0, 3(r5)
/* 80082168 0007F0A8  98 64 00 64 */	stb r3, 0x64(r4)
/* 8008216C 0007F0AC  98 04 00 65 */	stb r0, 0x65(r4)
/* 80082170 0007F0B0  4E 80 00 20 */	blr 
.endfn setTevKColor__12J3DTevBlock4FUlPC10J3DGXColor

.fn getTevKColor__12J3DTevBlock4FUl, weak
/* 80082174 0007F0B4  54 84 10 3A */	slwi r4, r4, 2
/* 80082178 0007F0B8  7C 60 1B 78 */	mr r0, r3
/* 8008217C 0007F0BC  38 64 00 62 */	addi r3, r4, 0x62
/* 80082180 0007F0C0  7C 60 1A 14 */	add r3, r0, r3
/* 80082184 0007F0C4  4E 80 00 20 */	blr 
.endfn getTevKColor__12J3DTevBlock4FUl

.fn setTevKColorSel__12J3DTevBlock4FUlUc, weak
/* 80082188 0007F0C8  7C 63 22 14 */	add r3, r3, r4
/* 8008218C 0007F0CC  98 A3 00 72 */	stb r5, 0x72(r3)
/* 80082190 0007F0D0  4E 80 00 20 */	blr 
.endfn setTevKColorSel__12J3DTevBlock4FUlUc

.fn setTevKColorSel__12J3DTevBlock4FUlPCUc, weak
/* 80082194 0007F0D4  88 05 00 00 */	lbz r0, 0(r5)
/* 80082198 0007F0D8  7C 63 22 14 */	add r3, r3, r4
/* 8008219C 0007F0DC  98 03 00 72 */	stb r0, 0x72(r3)
/* 800821A0 0007F0E0  4E 80 00 20 */	blr 
.endfn setTevKColorSel__12J3DTevBlock4FUlPCUc

.fn getTevKColorSel__12J3DTevBlock4FUl, weak
/* 800821A4 0007F0E4  7C 63 22 14 */	add r3, r3, r4
/* 800821A8 0007F0E8  88 63 00 72 */	lbz r3, 0x72(r3)
/* 800821AC 0007F0EC  4E 80 00 20 */	blr 
.endfn getTevKColorSel__12J3DTevBlock4FUl

.fn setTevKAlphaSel__12J3DTevBlock4FUlUc, weak
/* 800821B0 0007F0F0  7C 63 22 14 */	add r3, r3, r4
/* 800821B4 0007F0F4  98 A3 00 76 */	stb r5, 0x76(r3)
/* 800821B8 0007F0F8  4E 80 00 20 */	blr 
.endfn setTevKAlphaSel__12J3DTevBlock4FUlUc

.fn setTevKAlphaSel__12J3DTevBlock4FUlPCUc, weak
/* 800821BC 0007F0FC  88 05 00 00 */	lbz r0, 0(r5)
/* 800821C0 0007F100  7C 63 22 14 */	add r3, r3, r4
/* 800821C4 0007F104  98 03 00 76 */	stb r0, 0x76(r3)
/* 800821C8 0007F108  4E 80 00 20 */	blr 
.endfn setTevKAlphaSel__12J3DTevBlock4FUlPCUc

.fn getTevKAlphaSel__12J3DTevBlock4FUl, weak
/* 800821CC 0007F10C  7C 63 22 14 */	add r3, r3, r4
/* 800821D0 0007F110  88 63 00 76 */	lbz r3, 0x76(r3)
/* 800821D4 0007F114  4E 80 00 20 */	blr 
.endfn getTevKAlphaSel__12J3DTevBlock4FUl

.fn setTevStageNum__12J3DTevBlock4FUc, weak
/* 800821D8 0007F118  98 83 00 20 */	stb r4, 0x20(r3)
/* 800821DC 0007F11C  4E 80 00 20 */	blr 
.endfn setTevStageNum__12J3DTevBlock4FUc

.fn setTevStageNum__12J3DTevBlock4FPCUc, weak
/* 800821E0 0007F120  88 04 00 00 */	lbz r0, 0(r4)
/* 800821E4 0007F124  98 03 00 20 */	stb r0, 0x20(r3)
/* 800821E8 0007F128  4E 80 00 20 */	blr 
.endfn setTevStageNum__12J3DTevBlock4FPCUc

.fn getTevStageNum__12J3DTevBlock4CFv, weak
/* 800821EC 0007F12C  88 63 00 20 */	lbz r3, 0x20(r3)
/* 800821F0 0007F130  4E 80 00 20 */	blr 
.endfn getTevStageNum__12J3DTevBlock4CFv

.fn setTevStage__12J3DTevBlock4FUl11J3DTevStage, weak
/* 800821F4 0007F134  54 80 18 38 */	slwi r0, r4, 3
/* 800821F8 0007F138  88 C5 00 01 */	lbz r6, 1(r5)
/* 800821FC 0007F13C  7C 83 02 14 */	add r4, r3, r0
/* 80082200 0007F140  88 05 00 02 */	lbz r0, 2(r5)
/* 80082204 0007F144  98 C4 00 22 */	stb r6, 0x22(r4)
/* 80082208 0007F148  88 65 00 03 */	lbz r3, 3(r5)
/* 8008220C 0007F14C  98 04 00 23 */	stb r0, 0x23(r4)
/* 80082210 0007F150  88 05 00 05 */	lbz r0, 5(r5)
/* 80082214 0007F154  98 64 00 24 */	stb r3, 0x24(r4)
/* 80082218 0007F158  88 65 00 06 */	lbz r3, 6(r5)
/* 8008221C 0007F15C  98 04 00 26 */	stb r0, 0x26(r4)
/* 80082220 0007F160  88 05 00 07 */	lbz r0, 7(r5)
/* 80082224 0007F164  98 64 00 27 */	stb r3, 0x27(r4)
/* 80082228 0007F168  98 04 00 28 */	stb r0, 0x28(r4)
/* 8008222C 0007F16C  4E 80 00 20 */	blr 
.endfn setTevStage__12J3DTevBlock4FUl11J3DTevStage

.fn setTevStage__12J3DTevBlock4FUlPC11J3DTevStage, weak
/* 80082230 0007F170  54 80 18 38 */	slwi r0, r4, 3
/* 80082234 0007F174  88 C5 00 01 */	lbz r6, 1(r5)
/* 80082238 0007F178  7C 83 02 14 */	add r4, r3, r0
/* 8008223C 0007F17C  88 05 00 02 */	lbz r0, 2(r5)
/* 80082240 0007F180  98 C4 00 22 */	stb r6, 0x22(r4)
/* 80082244 0007F184  88 65 00 03 */	lbz r3, 3(r5)
/* 80082248 0007F188  98 04 00 23 */	stb r0, 0x23(r4)
/* 8008224C 0007F18C  88 05 00 05 */	lbz r0, 5(r5)
/* 80082250 0007F190  98 64 00 24 */	stb r3, 0x24(r4)
/* 80082254 0007F194  88 65 00 06 */	lbz r3, 6(r5)
/* 80082258 0007F198  98 04 00 26 */	stb r0, 0x26(r4)
/* 8008225C 0007F19C  88 05 00 07 */	lbz r0, 7(r5)
/* 80082260 0007F1A0  98 64 00 27 */	stb r3, 0x27(r4)
/* 80082264 0007F1A4  98 04 00 28 */	stb r0, 0x28(r4)
/* 80082268 0007F1A8  4E 80 00 20 */	blr 
.endfn setTevStage__12J3DTevBlock4FUlPC11J3DTevStage

.fn getTevStage__12J3DTevBlock4FUl, weak
/* 8008226C 0007F1AC  54 84 18 38 */	slwi r4, r4, 3
/* 80082270 0007F1B0  7C 60 1B 78 */	mr r0, r3
/* 80082274 0007F1B4  38 64 00 21 */	addi r3, r4, 0x21
/* 80082278 0007F1B8  7C 60 1A 14 */	add r3, r0, r3
/* 8008227C 0007F1BC  4E 80 00 20 */	blr 
.endfn getTevStage__12J3DTevBlock4FUl

.fn setTevSwapModeInfo__12J3DTevBlock4FUl18J3DTevSwapModeInfo, weak
/* 80082280 0007F1C0  54 80 18 38 */	slwi r0, r4, 3
/* 80082284 0007F1C4  88 85 00 01 */	lbz r4, 1(r5)
/* 80082288 0007F1C8  7C C3 02 14 */	add r6, r3, r0
/* 8008228C 0007F1CC  88 05 00 00 */	lbz r0, 0(r5)
/* 80082290 0007F1D0  88 A6 00 28 */	lbz r5, 0x28(r6)
/* 80082294 0007F1D4  54 83 10 3A */	slwi r3, r4, 2
/* 80082298 0007F1D8  54 A4 07 B6 */	rlwinm r4, r5, 0, 0x1e, 0x1b
/* 8008229C 0007F1DC  7C 83 1B 78 */	or r3, r4, r3
/* 800822A0 0007F1E0  98 66 00 28 */	stb r3, 0x28(r6)
/* 800822A4 0007F1E4  88 66 00 28 */	lbz r3, 0x28(r6)
/* 800822A8 0007F1E8  54 63 00 3A */	rlwinm r3, r3, 0, 0, 0x1d
/* 800822AC 0007F1EC  7C 60 03 78 */	or r0, r3, r0
/* 800822B0 0007F1F0  98 06 00 28 */	stb r0, 0x28(r6)
/* 800822B4 0007F1F4  4E 80 00 20 */	blr 
.endfn setTevSwapModeInfo__12J3DTevBlock4FUl18J3DTevSwapModeInfo

.fn setTevSwapModeInfo__12J3DTevBlock4FUlPC18J3DTevSwapModeInfo, weak
/* 800822B8 0007F1F8  54 80 18 38 */	slwi r0, r4, 3
/* 800822BC 0007F1FC  88 85 00 01 */	lbz r4, 1(r5)
/* 800822C0 0007F200  7C C3 02 14 */	add r6, r3, r0
/* 800822C4 0007F204  88 05 00 00 */	lbz r0, 0(r5)
/* 800822C8 0007F208  88 A6 00 28 */	lbz r5, 0x28(r6)
/* 800822CC 0007F20C  54 83 10 3A */	slwi r3, r4, 2
/* 800822D0 0007F210  54 A4 07 B6 */	rlwinm r4, r5, 0, 0x1e, 0x1b
/* 800822D4 0007F214  7C 83 1B 78 */	or r3, r4, r3
/* 800822D8 0007F218  98 66 00 28 */	stb r3, 0x28(r6)
/* 800822DC 0007F21C  88 66 00 28 */	lbz r3, 0x28(r6)
/* 800822E0 0007F220  54 63 00 3A */	rlwinm r3, r3, 0, 0, 0x1d
/* 800822E4 0007F224  7C 60 03 78 */	or r0, r3, r0
/* 800822E8 0007F228  98 06 00 28 */	stb r0, 0x28(r6)
/* 800822EC 0007F22C  4E 80 00 20 */	blr 
.endfn setTevSwapModeInfo__12J3DTevBlock4FUlPC18J3DTevSwapModeInfo

.fn setTevSwapModeTable__12J3DTevBlock4FUl19J3DTevSwapModeTable, weak
/* 800822F0 0007F230  88 05 00 00 */	lbz r0, 0(r5)
/* 800822F4 0007F234  7C 63 22 14 */	add r3, r3, r4
/* 800822F8 0007F238  98 03 00 7A */	stb r0, 0x7a(r3)
/* 800822FC 0007F23C  4E 80 00 20 */	blr 
.endfn setTevSwapModeTable__12J3DTevBlock4FUl19J3DTevSwapModeTable

.fn setTevSwapModeTable__12J3DTevBlock4FUlPC19J3DTevSwapModeTable, weak
/* 80082300 0007F240  88 05 00 00 */	lbz r0, 0(r5)
/* 80082304 0007F244  7C 63 22 14 */	add r3, r3, r4
/* 80082308 0007F248  98 03 00 7A */	stb r0, 0x7a(r3)
/* 8008230C 0007F24C  4E 80 00 20 */	blr 
.endfn setTevSwapModeTable__12J3DTevBlock4FUlPC19J3DTevSwapModeTable

.fn getTevSwapModeTable__12J3DTevBlock4FUl, weak
/* 80082310 0007F250  7C 60 1B 78 */	mr r0, r3
/* 80082314 0007F254  38 64 00 7A */	addi r3, r4, 0x7a
/* 80082318 0007F258  7C 60 1A 14 */	add r3, r0, r3
/* 8008231C 0007F25C  4E 80 00 20 */	blr 
.endfn getTevSwapModeTable__12J3DTevBlock4FUl

.fn setIndTevStage__12J3DTevBlock4FUl14J3DIndTevStage, weak
/* 80082320 0007F260  54 80 10 3A */	slwi r0, r4, 2
/* 80082324 0007F264  80 85 00 00 */	lwz r4, 0(r5)
/* 80082328 0007F268  7C 63 02 14 */	add r3, r3, r0
/* 8008232C 0007F26C  90 83 00 80 */	stw r4, 0x80(r3)
/* 80082330 0007F270  4E 80 00 20 */	blr 
.endfn setIndTevStage__12J3DTevBlock4FUl14J3DIndTevStage

.fn setIndTevStage__12J3DTevBlock4FUlPC14J3DIndTevStage, weak
/* 80082334 0007F274  54 80 10 3A */	slwi r0, r4, 2
/* 80082338 0007F278  80 85 00 00 */	lwz r4, 0(r5)
/* 8008233C 0007F27C  7C 63 02 14 */	add r3, r3, r0
/* 80082340 0007F280  90 83 00 80 */	stw r4, 0x80(r3)
/* 80082344 0007F284  4E 80 00 20 */	blr 
.endfn setIndTevStage__12J3DTevBlock4FUlPC14J3DIndTevStage

.fn getIndTevStage__12J3DTevBlock4FUl, weak
/* 80082348 0007F288  54 84 10 3A */	slwi r4, r4, 2
/* 8008234C 0007F28C  7C 60 1B 78 */	mr r0, r3
/* 80082350 0007F290  38 64 00 80 */	addi r3, r4, 0x80
/* 80082354 0007F294  7C 60 1A 14 */	add r3, r0, r3
/* 80082358 0007F298  4E 80 00 20 */	blr 
.endfn getIndTevStage__12J3DTevBlock4FUl

.fn getTexNoOffset__12J3DTevBlock4CFv, weak
/* 8008235C 0007F29C  80 63 00 04 */	lwz r3, 4(r3)
/* 80082360 0007F2A0  4E 80 00 20 */	blr 
.endfn getTexNoOffset__12J3DTevBlock4CFv

.fn getTevRegOffset__12J3DTevBlock4CFv, weak
/* 80082364 0007F2A4  80 63 00 90 */	lwz r3, 0x90(r3)
/* 80082368 0007F2A8  4E 80 00 20 */	blr 
.endfn getTevRegOffset__12J3DTevBlock4CFv

.fn setTevRegOffset__12J3DTevBlock4FUl, weak
/* 8008236C 0007F2AC  90 83 00 90 */	stw r4, 0x90(r3)
/* 80082370 0007F2B0  4E 80 00 20 */	blr 
.endfn setTevRegOffset__12J3DTevBlock4FUl

.fn __dt__12J3DTevBlock4Fv, weak
/* 80082374 0007F2B4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80082378 0007F2B8  7C 08 02 A6 */	mflr r0
/* 8008237C 0007F2BC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80082380 0007F2C0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80082384 0007F2C4  7C 7F 1B 79 */	or. r31, r3, r3
/* 80082388 0007F2C8  41 82 00 30 */	beq .L_800823B8
/* 8008238C 0007F2CC  3C 60 80 4A */	lis r3, __vt__12J3DTevBlock4@ha
/* 80082390 0007F2D0  38 03 23 84 */	addi r0, r3, __vt__12J3DTevBlock4@l
/* 80082394 0007F2D4  90 1F 00 00 */	stw r0, 0(r31)
/* 80082398 0007F2D8  41 82 00 10 */	beq .L_800823A8
/* 8008239C 0007F2DC  3C 60 80 4A */	lis r3, __vt__11J3DTevBlock@ha
/* 800823A0 0007F2E0  38 03 2B 08 */	addi r0, r3, __vt__11J3DTevBlock@l
/* 800823A4 0007F2E4  90 1F 00 00 */	stw r0, 0(r31)
.L_800823A8:
/* 800823A8 0007F2E8  7C 80 07 35 */	extsh. r0, r4
/* 800823AC 0007F2EC  40 81 00 0C */	ble .L_800823B8
/* 800823B0 0007F2F0  7F E3 FB 78 */	mr r3, r31
/* 800823B4 0007F2F4  4B FA 1D 01 */	bl __dl__FPv
.L_800823B8:
/* 800823B8 0007F2F8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800823BC 0007F2FC  7F E3 FB 78 */	mr r3, r31
/* 800823C0 0007F300  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 800823C4 0007F304  7C 08 03 A6 */	mtlr r0
/* 800823C8 0007F308  38 21 00 10 */	addi r1, r1, 0x10
/* 800823CC 0007F30C  4E 80 00 20 */	blr 
.endfn __dt__12J3DTevBlock4Fv

.fn ptrToIndex__12J3DTevBlock2Fv, weak
/* 800823D0 0007F310  4E 80 00 20 */	blr 
.endfn ptrToIndex__12J3DTevBlock2Fv

.fn indexToPtr__12J3DTevBlock2Fv, weak
/* 800823D4 0007F314  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 800823D8 0007F318  7C 08 02 A6 */	mflr r0
/* 800823DC 0007F31C  90 01 00 24 */	stw r0, 0x24(r1)
/* 800823E0 0007F320  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 800823E4 0007F324  3B E0 00 00 */	li r31, 0
/* 800823E8 0007F328  93 C1 00 18 */	stw r30, 0x18(r1)
/* 800823EC 0007F32C  93 A1 00 14 */	stw r29, 0x14(r1)
/* 800823F0 0007F330  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 800823F4 0007F334  80 03 00 04 */	lwz r0, 4(r3)
/* 800823F8 0007F338  80 64 00 00 */	lwz r3, 0(r4)
/* 800823FC 0007F33C  7C 03 02 14 */	add r0, r3, r0
/* 80082400 0007F340  90 04 00 08 */	stw r0, 8(r4)
/* 80082404 0007F344  80 6D 8E A8 */	lwz r3, __GDCurrentDL@sda21(r13)
/* 80082408 0007F348  83 C3 00 08 */	lwz r30, 8(r3)
.L_8008240C:
/* 8008240C 0007F34C  80 6D 8E A8 */	lwz r3, __GDCurrentDL@sda21(r13)
/* 80082410 0007F350  83 A3 00 08 */	lwz r29, 8(r3)
/* 80082414 0007F354  7F A3 EB 78 */	mr r3, r29
/* 80082418 0007F358  4B FE 2F 41 */	bl isTexNoReg__FPv
/* 8008241C 0007F35C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80082420 0007F360  41 82 00 24 */	beq .L_80082444
/* 80082424 0007F364  7F A3 EB 78 */	mr r3, r29
/* 80082428 0007F368  4B FE 2F 55 */	bl getTexNoReg__FPv
/* 8008242C 0007F36C  B0 61 00 08 */	sth r3, 8(r1)
/* 80082430 0007F370  7F E3 FB 78 */	mr r3, r31
/* 80082434 0007F374  38 81 00 08 */	addi r4, r1, 8
/* 80082438 0007F378  4B FE 2F 51 */	bl loadTexNo__FUlRCUs
/* 8008243C 0007F37C  3B FF 00 01 */	addi r31, r31, 1
/* 80082440 0007F380  4B FF FF CC */	b .L_8008240C
.L_80082444:
/* 80082444 0007F384  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 80082448 0007F388  7F C3 F3 78 */	mr r3, r30
/* 8008244C 0007F38C  80 04 00 08 */	lwz r0, 8(r4)
/* 80082450 0007F390  7C 9E 00 50 */	subf r4, r30, r0
/* 80082454 0007F394  48 06 A2 F5 */	bl DCStoreRange
/* 80082458 0007F398  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8008245C 0007F39C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80082460 0007F3A0  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80082464 0007F3A4  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80082468 0007F3A8  7C 08 03 A6 */	mtlr r0
/* 8008246C 0007F3AC  38 21 00 20 */	addi r1, r1, 0x20
/* 80082470 0007F3B0  4E 80 00 20 */	blr 
.endfn indexToPtr__12J3DTevBlock2Fv

.fn getType__12J3DTevBlock2Fv, weak
/* 80082474 0007F3B4  3C 60 54 56 */	lis r3, 0x54564232@ha
/* 80082478 0007F3B8  38 63 42 32 */	addi r3, r3, 0x54564232@l
/* 8008247C 0007F3BC  4E 80 00 20 */	blr 
.endfn getType__12J3DTevBlock2Fv

.fn setTexNo__12J3DTevBlock2FUlUs, weak
/* 80082480 0007F3C0  54 80 08 3C */	slwi r0, r4, 1
/* 80082484 0007F3C4  7C 63 02 14 */	add r3, r3, r0
/* 80082488 0007F3C8  B0 A3 00 08 */	sth r5, 8(r3)
/* 8008248C 0007F3CC  4E 80 00 20 */	blr 
.endfn setTexNo__12J3DTevBlock2FUlUs

.fn setTexNo__12J3DTevBlock2FUlPCUs, weak
/* 80082490 0007F3D0  54 80 08 3C */	slwi r0, r4, 1
/* 80082494 0007F3D4  A0 85 00 00 */	lhz r4, 0(r5)
/* 80082498 0007F3D8  7C 63 02 14 */	add r3, r3, r0
/* 8008249C 0007F3DC  B0 83 00 08 */	sth r4, 8(r3)
/* 800824A0 0007F3E0  4E 80 00 20 */	blr 
.endfn setTexNo__12J3DTevBlock2FUlPCUs

.fn getTexNo__12J3DTevBlock2CFUl, weak
/* 800824A4 0007F3E4  54 80 08 3C */	slwi r0, r4, 1
/* 800824A8 0007F3E8  7C 63 02 14 */	add r3, r3, r0
/* 800824AC 0007F3EC  A0 63 00 08 */	lhz r3, 8(r3)
/* 800824B0 0007F3F0  4E 80 00 20 */	blr 
.endfn getTexNo__12J3DTevBlock2CFUl

.fn setTevOrder__12J3DTevBlock2FUl11J3DTevOrder, weak
/* 800824B4 0007F3F4  54 84 10 3A */	slwi r4, r4, 2
/* 800824B8 0007F3F8  88 05 00 00 */	lbz r0, 0(r5)
/* 800824BC 0007F3FC  7C 83 22 14 */	add r4, r3, r4
/* 800824C0 0007F400  88 65 00 01 */	lbz r3, 1(r5)
/* 800824C4 0007F404  98 04 00 0C */	stb r0, 0xc(r4)
/* 800824C8 0007F408  88 05 00 02 */	lbz r0, 2(r5)
/* 800824CC 0007F40C  98 64 00 0D */	stb r3, 0xd(r4)
/* 800824D0 0007F410  98 04 00 0E */	stb r0, 0xe(r4)
/* 800824D4 0007F414  4E 80 00 20 */	blr 
.endfn setTevOrder__12J3DTevBlock2FUl11J3DTevOrder

.fn setTevOrder__12J3DTevBlock2FUlPC11J3DTevOrder, weak
/* 800824D8 0007F418  54 84 10 3A */	slwi r4, r4, 2
/* 800824DC 0007F41C  88 05 00 00 */	lbz r0, 0(r5)
/* 800824E0 0007F420  7C 83 22 14 */	add r4, r3, r4
/* 800824E4 0007F424  88 65 00 01 */	lbz r3, 1(r5)
/* 800824E8 0007F428  98 04 00 0C */	stb r0, 0xc(r4)
/* 800824EC 0007F42C  88 05 00 02 */	lbz r0, 2(r5)
/* 800824F0 0007F430  98 64 00 0D */	stb r3, 0xd(r4)
/* 800824F4 0007F434  98 04 00 0E */	stb r0, 0xe(r4)
/* 800824F8 0007F438  4E 80 00 20 */	blr 
.endfn setTevOrder__12J3DTevBlock2FUlPC11J3DTevOrder

.fn getTevOrder__12J3DTevBlock2FUl, weak
/* 800824FC 0007F43C  54 84 10 3A */	slwi r4, r4, 2
/* 80082500 0007F440  7C 60 1B 78 */	mr r0, r3
/* 80082504 0007F444  38 64 00 0C */	addi r3, r4, 0xc
/* 80082508 0007F448  7C 60 1A 14 */	add r3, r0, r3
/* 8008250C 0007F44C  4E 80 00 20 */	blr 
.endfn getTevOrder__12J3DTevBlock2FUl

.fn setTevColor__12J3DTevBlock2FUl13J3DGXColorS10, weak
/* 80082510 0007F450  54 80 18 38 */	slwi r0, r4, 3
/* 80082514 0007F454  A8 C5 00 00 */	lha r6, 0(r5)
/* 80082518 0007F458  7C 83 02 14 */	add r4, r3, r0
/* 8008251C 0007F45C  A8 05 00 02 */	lha r0, 2(r5)
/* 80082520 0007F460  B0 C4 00 14 */	sth r6, 0x14(r4)
/* 80082524 0007F464  A8 65 00 04 */	lha r3, 4(r5)
/* 80082528 0007F468  B0 04 00 16 */	sth r0, 0x16(r4)
/* 8008252C 0007F46C  A8 05 00 06 */	lha r0, 6(r5)
/* 80082530 0007F470  B0 64 00 18 */	sth r3, 0x18(r4)
/* 80082534 0007F474  B0 04 00 1A */	sth r0, 0x1a(r4)
/* 80082538 0007F478  4E 80 00 20 */	blr 
.endfn setTevColor__12J3DTevBlock2FUl13J3DGXColorS10

.fn setTevColor__12J3DTevBlock2FUlPC13J3DGXColorS10, weak
/* 8008253C 0007F47C  54 80 18 38 */	slwi r0, r4, 3
/* 80082540 0007F480  A8 C5 00 00 */	lha r6, 0(r5)
/* 80082544 0007F484  7C 83 02 14 */	add r4, r3, r0
/* 80082548 0007F488  A8 05 00 02 */	lha r0, 2(r5)
/* 8008254C 0007F48C  B0 C4 00 14 */	sth r6, 0x14(r4)
/* 80082550 0007F490  A8 65 00 04 */	lha r3, 4(r5)
/* 80082554 0007F494  B0 04 00 16 */	sth r0, 0x16(r4)
/* 80082558 0007F498  A8 05 00 06 */	lha r0, 6(r5)
/* 8008255C 0007F49C  B0 64 00 18 */	sth r3, 0x18(r4)
/* 80082560 0007F4A0  B0 04 00 1A */	sth r0, 0x1a(r4)
/* 80082564 0007F4A4  4E 80 00 20 */	blr 
.endfn setTevColor__12J3DTevBlock2FUlPC13J3DGXColorS10

.fn getTevColor__12J3DTevBlock2FUl, weak
/* 80082568 0007F4A8  54 84 18 38 */	slwi r4, r4, 3
/* 8008256C 0007F4AC  7C 60 1B 78 */	mr r0, r3
/* 80082570 0007F4B0  38 64 00 14 */	addi r3, r4, 0x14
/* 80082574 0007F4B4  7C 60 1A 14 */	add r3, r0, r3
/* 80082578 0007F4B8  4E 80 00 20 */	blr 
.endfn getTevColor__12J3DTevBlock2FUl

.fn setTevKColor__12J3DTevBlock2FUl10J3DGXColor, weak
/* 8008257C 0007F4BC  54 80 10 3A */	slwi r0, r4, 2
/* 80082580 0007F4C0  88 C5 00 00 */	lbz r6, 0(r5)
/* 80082584 0007F4C4  7C 83 02 14 */	add r4, r3, r0
/* 80082588 0007F4C8  88 05 00 01 */	lbz r0, 1(r5)
/* 8008258C 0007F4CC  98 C4 00 45 */	stb r6, 0x45(r4)
/* 80082590 0007F4D0  88 65 00 02 */	lbz r3, 2(r5)
/* 80082594 0007F4D4  98 04 00 46 */	stb r0, 0x46(r4)
/* 80082598 0007F4D8  88 05 00 03 */	lbz r0, 3(r5)
/* 8008259C 0007F4DC  98 64 00 47 */	stb r3, 0x47(r4)
/* 800825A0 0007F4E0  98 04 00 48 */	stb r0, 0x48(r4)
/* 800825A4 0007F4E4  4E 80 00 20 */	blr 
.endfn setTevKColor__12J3DTevBlock2FUl10J3DGXColor

.fn setTevKColor__12J3DTevBlock2FUlPC10J3DGXColor, weak
/* 800825A8 0007F4E8  54 80 10 3A */	slwi r0, r4, 2
/* 800825AC 0007F4EC  88 C5 00 00 */	lbz r6, 0(r5)
/* 800825B0 0007F4F0  7C 83 02 14 */	add r4, r3, r0
/* 800825B4 0007F4F4  88 05 00 01 */	lbz r0, 1(r5)
/* 800825B8 0007F4F8  98 C4 00 45 */	stb r6, 0x45(r4)
/* 800825BC 0007F4FC  88 65 00 02 */	lbz r3, 2(r5)
/* 800825C0 0007F500  98 04 00 46 */	stb r0, 0x46(r4)
/* 800825C4 0007F504  88 05 00 03 */	lbz r0, 3(r5)
/* 800825C8 0007F508  98 64 00 47 */	stb r3, 0x47(r4)
/* 800825CC 0007F50C  98 04 00 48 */	stb r0, 0x48(r4)
/* 800825D0 0007F510  4E 80 00 20 */	blr 
.endfn setTevKColor__12J3DTevBlock2FUlPC10J3DGXColor

.fn getTevKColor__12J3DTevBlock2FUl, weak
/* 800825D4 0007F514  54 84 10 3A */	slwi r4, r4, 2
/* 800825D8 0007F518  7C 60 1B 78 */	mr r0, r3
/* 800825DC 0007F51C  38 64 00 45 */	addi r3, r4, 0x45
/* 800825E0 0007F520  7C 60 1A 14 */	add r3, r0, r3
/* 800825E4 0007F524  4E 80 00 20 */	blr 
.endfn getTevKColor__12J3DTevBlock2FUl

.fn setTevKColorSel__12J3DTevBlock2FUlUc, weak
/* 800825E8 0007F528  7C 63 22 14 */	add r3, r3, r4
/* 800825EC 0007F52C  98 A3 00 55 */	stb r5, 0x55(r3)
/* 800825F0 0007F530  4E 80 00 20 */	blr 
.endfn setTevKColorSel__12J3DTevBlock2FUlUc

.fn setTevKColorSel__12J3DTevBlock2FUlPCUc, weak
/* 800825F4 0007F534  88 05 00 00 */	lbz r0, 0(r5)
/* 800825F8 0007F538  7C 63 22 14 */	add r3, r3, r4
/* 800825FC 0007F53C  98 03 00 55 */	stb r0, 0x55(r3)
/* 80082600 0007F540  4E 80 00 20 */	blr 
.endfn setTevKColorSel__12J3DTevBlock2FUlPCUc

.fn getTevKColorSel__12J3DTevBlock2FUl, weak
/* 80082604 0007F544  7C 63 22 14 */	add r3, r3, r4
/* 80082608 0007F548  88 63 00 55 */	lbz r3, 0x55(r3)
/* 8008260C 0007F54C  4E 80 00 20 */	blr 
.endfn getTevKColorSel__12J3DTevBlock2FUl

.fn setTevKAlphaSel__12J3DTevBlock2FUlUc, weak
/* 80082610 0007F550  7C 63 22 14 */	add r3, r3, r4
/* 80082614 0007F554  98 A3 00 57 */	stb r5, 0x57(r3)
/* 80082618 0007F558  4E 80 00 20 */	blr 
.endfn setTevKAlphaSel__12J3DTevBlock2FUlUc

.fn setTevKAlphaSel__12J3DTevBlock2FUlPCUc, weak
/* 8008261C 0007F55C  88 05 00 00 */	lbz r0, 0(r5)
/* 80082620 0007F560  7C 63 22 14 */	add r3, r3, r4
/* 80082624 0007F564  98 03 00 57 */	stb r0, 0x57(r3)
/* 80082628 0007F568  4E 80 00 20 */	blr 
.endfn setTevKAlphaSel__12J3DTevBlock2FUlPCUc

.fn getTevKAlphaSel__12J3DTevBlock2FUl, weak
/* 8008262C 0007F56C  7C 63 22 14 */	add r3, r3, r4
/* 80082630 0007F570  88 63 00 57 */	lbz r3, 0x57(r3)
/* 80082634 0007F574  4E 80 00 20 */	blr 
.endfn getTevKAlphaSel__12J3DTevBlock2FUl

.fn setTevStageNum__12J3DTevBlock2FUc, weak
/* 80082638 0007F578  98 83 00 34 */	stb r4, 0x34(r3)
/* 8008263C 0007F57C  4E 80 00 20 */	blr 
.endfn setTevStageNum__12J3DTevBlock2FUc

.fn setTevStageNum__12J3DTevBlock2FPCUc, weak
/* 80082640 0007F580  88 04 00 00 */	lbz r0, 0(r4)
/* 80082644 0007F584  98 03 00 34 */	stb r0, 0x34(r3)
/* 80082648 0007F588  4E 80 00 20 */	blr 
.endfn setTevStageNum__12J3DTevBlock2FPCUc

.fn getTevStageNum__12J3DTevBlock2CFv, weak
/* 8008264C 0007F58C  88 63 00 34 */	lbz r3, 0x34(r3)
/* 80082650 0007F590  4E 80 00 20 */	blr 
.endfn getTevStageNum__12J3DTevBlock2CFv

.fn setTevStage__12J3DTevBlock2FUl11J3DTevStage, weak
/* 80082654 0007F594  54 80 18 38 */	slwi r0, r4, 3
/* 80082658 0007F598  88 C5 00 01 */	lbz r6, 1(r5)
/* 8008265C 0007F59C  7C 83 02 14 */	add r4, r3, r0
/* 80082660 0007F5A0  88 05 00 02 */	lbz r0, 2(r5)
/* 80082664 0007F5A4  98 C4 00 36 */	stb r6, 0x36(r4)
/* 80082668 0007F5A8  88 65 00 03 */	lbz r3, 3(r5)
/* 8008266C 0007F5AC  98 04 00 37 */	stb r0, 0x37(r4)
/* 80082670 0007F5B0  88 05 00 05 */	lbz r0, 5(r5)
/* 80082674 0007F5B4  98 64 00 38 */	stb r3, 0x38(r4)
/* 80082678 0007F5B8  88 65 00 06 */	lbz r3, 6(r5)
/* 8008267C 0007F5BC  98 04 00 3A */	stb r0, 0x3a(r4)
/* 80082680 0007F5C0  88 05 00 07 */	lbz r0, 7(r5)
/* 80082684 0007F5C4  98 64 00 3B */	stb r3, 0x3b(r4)
/* 80082688 0007F5C8  98 04 00 3C */	stb r0, 0x3c(r4)
/* 8008268C 0007F5CC  4E 80 00 20 */	blr 
.endfn setTevStage__12J3DTevBlock2FUl11J3DTevStage

.fn setTevStage__12J3DTevBlock2FUlPC11J3DTevStage, weak
/* 80082690 0007F5D0  54 80 18 38 */	slwi r0, r4, 3
/* 80082694 0007F5D4  88 C5 00 01 */	lbz r6, 1(r5)
/* 80082698 0007F5D8  7C 83 02 14 */	add r4, r3, r0
/* 8008269C 0007F5DC  88 05 00 02 */	lbz r0, 2(r5)
/* 800826A0 0007F5E0  98 C4 00 36 */	stb r6, 0x36(r4)
/* 800826A4 0007F5E4  88 65 00 03 */	lbz r3, 3(r5)
/* 800826A8 0007F5E8  98 04 00 37 */	stb r0, 0x37(r4)
/* 800826AC 0007F5EC  88 05 00 05 */	lbz r0, 5(r5)
/* 800826B0 0007F5F0  98 64 00 38 */	stb r3, 0x38(r4)
/* 800826B4 0007F5F4  88 65 00 06 */	lbz r3, 6(r5)
/* 800826B8 0007F5F8  98 04 00 3A */	stb r0, 0x3a(r4)
/* 800826BC 0007F5FC  88 05 00 07 */	lbz r0, 7(r5)
/* 800826C0 0007F600  98 64 00 3B */	stb r3, 0x3b(r4)
/* 800826C4 0007F604  98 04 00 3C */	stb r0, 0x3c(r4)
/* 800826C8 0007F608  4E 80 00 20 */	blr 
.endfn setTevStage__12J3DTevBlock2FUlPC11J3DTevStage

.fn getTevStage__12J3DTevBlock2FUl, weak
/* 800826CC 0007F60C  54 84 18 38 */	slwi r4, r4, 3
/* 800826D0 0007F610  7C 60 1B 78 */	mr r0, r3
/* 800826D4 0007F614  38 64 00 35 */	addi r3, r4, 0x35
/* 800826D8 0007F618  7C 60 1A 14 */	add r3, r0, r3
/* 800826DC 0007F61C  4E 80 00 20 */	blr 
.endfn getTevStage__12J3DTevBlock2FUl

.fn setTevSwapModeInfo__12J3DTevBlock2FUl18J3DTevSwapModeInfo, weak
/* 800826E0 0007F620  54 80 18 38 */	slwi r0, r4, 3
/* 800826E4 0007F624  88 85 00 01 */	lbz r4, 1(r5)
/* 800826E8 0007F628  7C C3 02 14 */	add r6, r3, r0
/* 800826EC 0007F62C  88 05 00 00 */	lbz r0, 0(r5)
/* 800826F0 0007F630  88 A6 00 3C */	lbz r5, 0x3c(r6)
/* 800826F4 0007F634  54 83 10 3A */	slwi r3, r4, 2
/* 800826F8 0007F638  54 A4 07 B6 */	rlwinm r4, r5, 0, 0x1e, 0x1b
/* 800826FC 0007F63C  7C 83 1B 78 */	or r3, r4, r3
/* 80082700 0007F640  98 66 00 3C */	stb r3, 0x3c(r6)
/* 80082704 0007F644  88 66 00 3C */	lbz r3, 0x3c(r6)
/* 80082708 0007F648  54 63 00 3A */	rlwinm r3, r3, 0, 0, 0x1d
/* 8008270C 0007F64C  7C 60 03 78 */	or r0, r3, r0
/* 80082710 0007F650  98 06 00 3C */	stb r0, 0x3c(r6)
/* 80082714 0007F654  4E 80 00 20 */	blr 
.endfn setTevSwapModeInfo__12J3DTevBlock2FUl18J3DTevSwapModeInfo

.fn setTevSwapModeInfo__12J3DTevBlock2FUlPC18J3DTevSwapModeInfo, weak
/* 80082718 0007F658  54 80 18 38 */	slwi r0, r4, 3
/* 8008271C 0007F65C  88 85 00 01 */	lbz r4, 1(r5)
/* 80082720 0007F660  7C C3 02 14 */	add r6, r3, r0
/* 80082724 0007F664  88 05 00 00 */	lbz r0, 0(r5)
/* 80082728 0007F668  88 A6 00 3C */	lbz r5, 0x3c(r6)
/* 8008272C 0007F66C  54 83 10 3A */	slwi r3, r4, 2
/* 80082730 0007F670  54 A4 07 B6 */	rlwinm r4, r5, 0, 0x1e, 0x1b
/* 80082734 0007F674  7C 83 1B 78 */	or r3, r4, r3
/* 80082738 0007F678  98 66 00 3C */	stb r3, 0x3c(r6)
/* 8008273C 0007F67C  88 66 00 3C */	lbz r3, 0x3c(r6)
/* 80082740 0007F680  54 63 00 3A */	rlwinm r3, r3, 0, 0, 0x1d
/* 80082744 0007F684  7C 60 03 78 */	or r0, r3, r0
/* 80082748 0007F688  98 06 00 3C */	stb r0, 0x3c(r6)
/* 8008274C 0007F68C  4E 80 00 20 */	blr 
.endfn setTevSwapModeInfo__12J3DTevBlock2FUlPC18J3DTevSwapModeInfo

.fn setTevSwapModeTable__12J3DTevBlock2FUl19J3DTevSwapModeTable, weak
/* 80082750 0007F690  88 05 00 00 */	lbz r0, 0(r5)
/* 80082754 0007F694  7C 63 22 14 */	add r3, r3, r4
/* 80082758 0007F698  98 03 00 59 */	stb r0, 0x59(r3)
/* 8008275C 0007F69C  4E 80 00 20 */	blr 
.endfn setTevSwapModeTable__12J3DTevBlock2FUl19J3DTevSwapModeTable

.fn setTevSwapModeTable__12J3DTevBlock2FUlPC19J3DTevSwapModeTable, weak
/* 80082760 0007F6A0  88 05 00 00 */	lbz r0, 0(r5)
/* 80082764 0007F6A4  7C 63 22 14 */	add r3, r3, r4
/* 80082768 0007F6A8  98 03 00 59 */	stb r0, 0x59(r3)
/* 8008276C 0007F6AC  4E 80 00 20 */	blr 
.endfn setTevSwapModeTable__12J3DTevBlock2FUlPC19J3DTevSwapModeTable

.fn getTevSwapModeTable__12J3DTevBlock2FUl, weak
/* 80082770 0007F6B0  7C 60 1B 78 */	mr r0, r3
/* 80082774 0007F6B4  38 64 00 59 */	addi r3, r4, 0x59
/* 80082778 0007F6B8  7C 60 1A 14 */	add r3, r0, r3
/* 8008277C 0007F6BC  4E 80 00 20 */	blr 
.endfn getTevSwapModeTable__12J3DTevBlock2FUl

.fn setIndTevStage__12J3DTevBlock2FUl14J3DIndTevStage, weak
/* 80082780 0007F6C0  54 80 10 3A */	slwi r0, r4, 2
/* 80082784 0007F6C4  80 85 00 00 */	lwz r4, 0(r5)
/* 80082788 0007F6C8  7C 63 02 14 */	add r3, r3, r0
/* 8008278C 0007F6CC  90 83 00 60 */	stw r4, 0x60(r3)
/* 80082790 0007F6D0  4E 80 00 20 */	blr 
.endfn setIndTevStage__12J3DTevBlock2FUl14J3DIndTevStage

.fn setIndTevStage__12J3DTevBlock2FUlPC14J3DIndTevStage, weak
/* 80082794 0007F6D4  54 80 10 3A */	slwi r0, r4, 2
/* 80082798 0007F6D8  80 85 00 00 */	lwz r4, 0(r5)
/* 8008279C 0007F6DC  7C 63 02 14 */	add r3, r3, r0
/* 800827A0 0007F6E0  90 83 00 60 */	stw r4, 0x60(r3)
/* 800827A4 0007F6E4  4E 80 00 20 */	blr 
.endfn setIndTevStage__12J3DTevBlock2FUlPC14J3DIndTevStage

.fn getIndTevStage__12J3DTevBlock2FUl, weak
/* 800827A8 0007F6E8  54 84 10 3A */	slwi r4, r4, 2
/* 800827AC 0007F6EC  7C 60 1B 78 */	mr r0, r3
/* 800827B0 0007F6F0  38 64 00 60 */	addi r3, r4, 0x60
/* 800827B4 0007F6F4  7C 60 1A 14 */	add r3, r0, r3
/* 800827B8 0007F6F8  4E 80 00 20 */	blr 
.endfn getIndTevStage__12J3DTevBlock2FUl

.fn getTexNoOffset__12J3DTevBlock2CFv, weak
/* 800827BC 0007F6FC  80 63 00 04 */	lwz r3, 4(r3)
/* 800827C0 0007F700  4E 80 00 20 */	blr 
.endfn getTexNoOffset__12J3DTevBlock2CFv

.fn getTevRegOffset__12J3DTevBlock2CFv, weak
/* 800827C4 0007F704  80 63 00 68 */	lwz r3, 0x68(r3)
/* 800827C8 0007F708  4E 80 00 20 */	blr 
.endfn getTevRegOffset__12J3DTevBlock2CFv

.fn setTevRegOffset__12J3DTevBlock2FUl, weak
/* 800827CC 0007F70C  90 83 00 68 */	stw r4, 0x68(r3)
/* 800827D0 0007F710  4E 80 00 20 */	blr 
.endfn setTevRegOffset__12J3DTevBlock2FUl

.fn __dt__12J3DTevBlock2Fv, weak
/* 800827D4 0007F714  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800827D8 0007F718  7C 08 02 A6 */	mflr r0
/* 800827DC 0007F71C  90 01 00 14 */	stw r0, 0x14(r1)
/* 800827E0 0007F720  93 E1 00 0C */	stw r31, 0xc(r1)
/* 800827E4 0007F724  7C 7F 1B 79 */	or. r31, r3, r3
/* 800827E8 0007F728  41 82 00 30 */	beq .L_80082818
/* 800827EC 0007F72C  3C 60 80 4A */	lis r3, __vt__12J3DTevBlock2@ha
/* 800827F0 0007F730  38 03 24 60 */	addi r0, r3, __vt__12J3DTevBlock2@l
/* 800827F4 0007F734  90 1F 00 00 */	stw r0, 0(r31)
/* 800827F8 0007F738  41 82 00 10 */	beq .L_80082808
/* 800827FC 0007F73C  3C 60 80 4A */	lis r3, __vt__11J3DTevBlock@ha
/* 80082800 0007F740  38 03 2B 08 */	addi r0, r3, __vt__11J3DTevBlock@l
/* 80082804 0007F744  90 1F 00 00 */	stw r0, 0(r31)
.L_80082808:
/* 80082808 0007F748  7C 80 07 35 */	extsh. r0, r4
/* 8008280C 0007F74C  40 81 00 0C */	ble .L_80082818
/* 80082810 0007F750  7F E3 FB 78 */	mr r3, r31
/* 80082814 0007F754  4B FA 18 A1 */	bl __dl__FPv
.L_80082818:
/* 80082818 0007F758  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8008281C 0007F75C  7F E3 FB 78 */	mr r3, r31
/* 80082820 0007F760  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80082824 0007F764  7C 08 03 A6 */	mtlr r0
/* 80082828 0007F768  38 21 00 10 */	addi r1, r1, 0x10
/* 8008282C 0007F76C  4E 80 00 20 */	blr 
.endfn __dt__12J3DTevBlock2Fv

.fn ptrToIndex__12J3DTevBlock1Fv, weak
/* 80082830 0007F770  4E 80 00 20 */	blr 
.endfn ptrToIndex__12J3DTevBlock1Fv

.fn indexToPtr__12J3DTevBlock1Fv, weak
/* 80082834 0007F774  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80082838 0007F778  7C 08 02 A6 */	mflr r0
/* 8008283C 0007F77C  90 01 00 24 */	stw r0, 0x24(r1)
/* 80082840 0007F780  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80082844 0007F784  3B E0 00 00 */	li r31, 0
/* 80082848 0007F788  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8008284C 0007F78C  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80082850 0007F790  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 80082854 0007F794  80 03 00 04 */	lwz r0, 4(r3)
/* 80082858 0007F798  80 64 00 00 */	lwz r3, 0(r4)
/* 8008285C 0007F79C  7C 03 02 14 */	add r0, r3, r0
/* 80082860 0007F7A0  90 04 00 08 */	stw r0, 8(r4)
/* 80082864 0007F7A4  80 6D 8E A8 */	lwz r3, __GDCurrentDL@sda21(r13)
/* 80082868 0007F7A8  83 C3 00 08 */	lwz r30, 8(r3)
.L_8008286C:
/* 8008286C 0007F7AC  80 6D 8E A8 */	lwz r3, __GDCurrentDL@sda21(r13)
/* 80082870 0007F7B0  83 A3 00 08 */	lwz r29, 8(r3)
/* 80082874 0007F7B4  7F A3 EB 78 */	mr r3, r29
/* 80082878 0007F7B8  4B FE 2A E1 */	bl isTexNoReg__FPv
/* 8008287C 0007F7BC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80082880 0007F7C0  41 82 00 24 */	beq .L_800828A4
/* 80082884 0007F7C4  7F A3 EB 78 */	mr r3, r29
/* 80082888 0007F7C8  4B FE 2A F5 */	bl getTexNoReg__FPv
/* 8008288C 0007F7CC  B0 61 00 08 */	sth r3, 8(r1)
/* 80082890 0007F7D0  7F E3 FB 78 */	mr r3, r31
/* 80082894 0007F7D4  38 81 00 08 */	addi r4, r1, 8
/* 80082898 0007F7D8  4B FE 2A F1 */	bl loadTexNo__FUlRCUs
/* 8008289C 0007F7DC  3B FF 00 01 */	addi r31, r31, 1
/* 800828A0 0007F7E0  4B FF FF CC */	b .L_8008286C
.L_800828A4:
/* 800828A4 0007F7E4  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 800828A8 0007F7E8  7F C3 F3 78 */	mr r3, r30
/* 800828AC 0007F7EC  80 04 00 08 */	lwz r0, 8(r4)
/* 800828B0 0007F7F0  7C 9E 00 50 */	subf r4, r30, r0
/* 800828B4 0007F7F4  48 06 9E 95 */	bl DCStoreRange
/* 800828B8 0007F7F8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 800828BC 0007F7FC  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 800828C0 0007F800  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 800828C4 0007F804  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 800828C8 0007F808  7C 08 03 A6 */	mtlr r0
/* 800828CC 0007F80C  38 21 00 20 */	addi r1, r1, 0x20
/* 800828D0 0007F810  4E 80 00 20 */	blr 
.endfn indexToPtr__12J3DTevBlock1Fv

.fn getType__12J3DTevBlock1Fv, weak
/* 800828D4 0007F814  3C 60 54 56 */	lis r3, 0x54564231@ha
/* 800828D8 0007F818  38 63 42 31 */	addi r3, r3, 0x54564231@l
/* 800828DC 0007F81C  4E 80 00 20 */	blr 
.endfn getType__12J3DTevBlock1Fv

.fn setTexNo__12J3DTevBlock1FUlUs, weak
/* 800828E0 0007F820  54 80 08 3C */	slwi r0, r4, 1
/* 800828E4 0007F824  7C 63 02 14 */	add r3, r3, r0
/* 800828E8 0007F828  B0 A3 00 08 */	sth r5, 8(r3)
/* 800828EC 0007F82C  4E 80 00 20 */	blr 
.endfn setTexNo__12J3DTevBlock1FUlUs

.fn setTexNo__12J3DTevBlock1FUlPCUs, weak
/* 800828F0 0007F830  54 80 08 3C */	slwi r0, r4, 1
/* 800828F4 0007F834  A0 85 00 00 */	lhz r4, 0(r5)
/* 800828F8 0007F838  7C 63 02 14 */	add r3, r3, r0
/* 800828FC 0007F83C  B0 83 00 08 */	sth r4, 8(r3)
/* 80082900 0007F840  4E 80 00 20 */	blr 
.endfn setTexNo__12J3DTevBlock1FUlPCUs

.fn getTexNo__12J3DTevBlock1CFUl, weak
/* 80082904 0007F844  54 80 08 3C */	slwi r0, r4, 1
/* 80082908 0007F848  7C 63 02 14 */	add r3, r3, r0
/* 8008290C 0007F84C  A0 63 00 08 */	lhz r3, 8(r3)
/* 80082910 0007F850  4E 80 00 20 */	blr 
.endfn getTexNo__12J3DTevBlock1CFUl

.fn setTevOrder__12J3DTevBlock1FUl11J3DTevOrder, weak
/* 80082914 0007F854  54 84 10 3A */	slwi r4, r4, 2
/* 80082918 0007F858  88 05 00 00 */	lbz r0, 0(r5)
/* 8008291C 0007F85C  7C 83 22 14 */	add r4, r3, r4
/* 80082920 0007F860  88 65 00 01 */	lbz r3, 1(r5)
/* 80082924 0007F864  98 04 00 0A */	stb r0, 0xa(r4)
/* 80082928 0007F868  88 05 00 02 */	lbz r0, 2(r5)
/* 8008292C 0007F86C  98 64 00 0B */	stb r3, 0xb(r4)
/* 80082930 0007F870  98 04 00 0C */	stb r0, 0xc(r4)
/* 80082934 0007F874  4E 80 00 20 */	blr 
.endfn setTevOrder__12J3DTevBlock1FUl11J3DTevOrder

.fn setTevOrder__12J3DTevBlock1FUlPC11J3DTevOrder, weak
/* 80082938 0007F878  54 84 10 3A */	slwi r4, r4, 2
/* 8008293C 0007F87C  88 05 00 00 */	lbz r0, 0(r5)
/* 80082940 0007F880  7C 83 22 14 */	add r4, r3, r4
/* 80082944 0007F884  88 65 00 01 */	lbz r3, 1(r5)
/* 80082948 0007F888  98 04 00 0A */	stb r0, 0xa(r4)
/* 8008294C 0007F88C  88 05 00 02 */	lbz r0, 2(r5)
/* 80082950 0007F890  98 64 00 0B */	stb r3, 0xb(r4)
/* 80082954 0007F894  98 04 00 0C */	stb r0, 0xc(r4)
/* 80082958 0007F898  4E 80 00 20 */	blr 
.endfn setTevOrder__12J3DTevBlock1FUlPC11J3DTevOrder

.fn getTevOrder__12J3DTevBlock1FUl, weak
/* 8008295C 0007F89C  54 84 10 3A */	slwi r4, r4, 2
/* 80082960 0007F8A0  7C 60 1B 78 */	mr r0, r3
/* 80082964 0007F8A4  38 64 00 0A */	addi r3, r4, 0xa
/* 80082968 0007F8A8  7C 60 1A 14 */	add r3, r0, r3
/* 8008296C 0007F8AC  4E 80 00 20 */	blr 
.endfn getTevOrder__12J3DTevBlock1FUl

.fn setTevStageNum__12J3DTevBlock1FUc, weak
/* 80082970 0007F8B0  4E 80 00 20 */	blr 
.endfn setTevStageNum__12J3DTevBlock1FUc

.fn setTevStageNum__12J3DTevBlock1FPCUc, weak
/* 80082974 0007F8B4  4E 80 00 20 */	blr 
.endfn setTevStageNum__12J3DTevBlock1FPCUc

.fn getTevStageNum__12J3DTevBlock1CFv, weak
/* 80082978 0007F8B8  38 60 00 01 */	li r3, 1
/* 8008297C 0007F8BC  4E 80 00 20 */	blr 
.endfn getTevStageNum__12J3DTevBlock1CFv

.fn setTevStage__12J3DTevBlock1FUl11J3DTevStage, weak
/* 80082980 0007F8C0  54 80 18 38 */	slwi r0, r4, 3
/* 80082984 0007F8C4  88 C5 00 01 */	lbz r6, 1(r5)
/* 80082988 0007F8C8  7C 83 02 14 */	add r4, r3, r0
/* 8008298C 0007F8CC  88 05 00 02 */	lbz r0, 2(r5)
/* 80082990 0007F8D0  98 C4 00 0F */	stb r6, 0xf(r4)
/* 80082994 0007F8D4  88 65 00 03 */	lbz r3, 3(r5)
/* 80082998 0007F8D8  98 04 00 10 */	stb r0, 0x10(r4)
/* 8008299C 0007F8DC  88 05 00 05 */	lbz r0, 5(r5)
/* 800829A0 0007F8E0  98 64 00 11 */	stb r3, 0x11(r4)
/* 800829A4 0007F8E4  88 65 00 06 */	lbz r3, 6(r5)
/* 800829A8 0007F8E8  98 04 00 13 */	stb r0, 0x13(r4)
/* 800829AC 0007F8EC  88 05 00 07 */	lbz r0, 7(r5)
/* 800829B0 0007F8F0  98 64 00 14 */	stb r3, 0x14(r4)
/* 800829B4 0007F8F4  98 04 00 15 */	stb r0, 0x15(r4)
/* 800829B8 0007F8F8  4E 80 00 20 */	blr 
.endfn setTevStage__12J3DTevBlock1FUl11J3DTevStage

.fn setTevStage__12J3DTevBlock1FUlPC11J3DTevStage, weak
/* 800829BC 0007F8FC  54 80 18 38 */	slwi r0, r4, 3
/* 800829C0 0007F900  88 C5 00 01 */	lbz r6, 1(r5)
/* 800829C4 0007F904  7C 83 02 14 */	add r4, r3, r0
/* 800829C8 0007F908  88 05 00 02 */	lbz r0, 2(r5)
/* 800829CC 0007F90C  98 C4 00 0F */	stb r6, 0xf(r4)
/* 800829D0 0007F910  88 65 00 03 */	lbz r3, 3(r5)
/* 800829D4 0007F914  98 04 00 10 */	stb r0, 0x10(r4)
/* 800829D8 0007F918  88 05 00 05 */	lbz r0, 5(r5)
/* 800829DC 0007F91C  98 64 00 11 */	stb r3, 0x11(r4)
/* 800829E0 0007F920  88 65 00 06 */	lbz r3, 6(r5)
/* 800829E4 0007F924  98 04 00 13 */	stb r0, 0x13(r4)
/* 800829E8 0007F928  88 05 00 07 */	lbz r0, 7(r5)
/* 800829EC 0007F92C  98 64 00 14 */	stb r3, 0x14(r4)
/* 800829F0 0007F930  98 04 00 15 */	stb r0, 0x15(r4)
/* 800829F4 0007F934  4E 80 00 20 */	blr 
.endfn setTevStage__12J3DTevBlock1FUlPC11J3DTevStage

.fn getTevStage__12J3DTevBlock1FUl, weak
/* 800829F8 0007F938  54 84 18 38 */	slwi r4, r4, 3
/* 800829FC 0007F93C  7C 60 1B 78 */	mr r0, r3
/* 80082A00 0007F940  38 64 00 0E */	addi r3, r4, 0xe
/* 80082A04 0007F944  7C 60 1A 14 */	add r3, r0, r3
/* 80082A08 0007F948  4E 80 00 20 */	blr 
.endfn getTevStage__12J3DTevBlock1FUl

.fn setIndTevStage__12J3DTevBlock1FUl14J3DIndTevStage, weak
/* 80082A0C 0007F94C  54 80 10 3A */	slwi r0, r4, 2
/* 80082A10 0007F950  80 85 00 00 */	lwz r4, 0(r5)
/* 80082A14 0007F954  7C 63 02 14 */	add r3, r3, r0
/* 80082A18 0007F958  90 83 00 18 */	stw r4, 0x18(r3)
/* 80082A1C 0007F95C  4E 80 00 20 */	blr 
.endfn setIndTevStage__12J3DTevBlock1FUl14J3DIndTevStage

.fn setIndTevStage__12J3DTevBlock1FUlPC14J3DIndTevStage, weak
/* 80082A20 0007F960  54 80 10 3A */	slwi r0, r4, 2
/* 80082A24 0007F964  80 85 00 00 */	lwz r4, 0(r5)
/* 80082A28 0007F968  7C 63 02 14 */	add r3, r3, r0
/* 80082A2C 0007F96C  90 83 00 18 */	stw r4, 0x18(r3)
/* 80082A30 0007F970  4E 80 00 20 */	blr 
.endfn setIndTevStage__12J3DTevBlock1FUlPC14J3DIndTevStage

.fn getIndTevStage__12J3DTevBlock1FUl, weak
/* 80082A34 0007F974  54 84 10 3A */	slwi r4, r4, 2
/* 80082A38 0007F978  7C 60 1B 78 */	mr r0, r3
/* 80082A3C 0007F97C  38 64 00 18 */	addi r3, r4, 0x18
/* 80082A40 0007F980  7C 60 1A 14 */	add r3, r0, r3
/* 80082A44 0007F984  4E 80 00 20 */	blr 
.endfn getIndTevStage__12J3DTevBlock1FUl

.fn getTexNoOffset__12J3DTevBlock1CFv, weak
/* 80082A48 0007F988  80 63 00 04 */	lwz r3, 4(r3)
/* 80082A4C 0007F98C  4E 80 00 20 */	blr 
.endfn getTexNoOffset__12J3DTevBlock1CFv

.fn __dt__12J3DTevBlock1Fv, weak
/* 80082A50 0007F990  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80082A54 0007F994  7C 08 02 A6 */	mflr r0
/* 80082A58 0007F998  90 01 00 14 */	stw r0, 0x14(r1)
/* 80082A5C 0007F99C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80082A60 0007F9A0  7C 7F 1B 79 */	or. r31, r3, r3
/* 80082A64 0007F9A4  41 82 00 30 */	beq .L_80082A94
/* 80082A68 0007F9A8  3C 60 80 4A */	lis r3, __vt__12J3DTevBlock1@ha
/* 80082A6C 0007F9AC  38 03 25 3C */	addi r0, r3, __vt__12J3DTevBlock1@l
/* 80082A70 0007F9B0  90 1F 00 00 */	stw r0, 0(r31)
/* 80082A74 0007F9B4  41 82 00 10 */	beq .L_80082A84
/* 80082A78 0007F9B8  3C 60 80 4A */	lis r3, __vt__11J3DTevBlock@ha
/* 80082A7C 0007F9BC  38 03 2B 08 */	addi r0, r3, __vt__11J3DTevBlock@l
/* 80082A80 0007F9C0  90 1F 00 00 */	stw r0, 0(r31)
.L_80082A84:
/* 80082A84 0007F9C4  7C 80 07 35 */	extsh. r0, r4
/* 80082A88 0007F9C8  40 81 00 0C */	ble .L_80082A94
/* 80082A8C 0007F9CC  7F E3 FB 78 */	mr r3, r31
/* 80082A90 0007F9D0  4B FA 16 25 */	bl __dl__FPv
.L_80082A94:
/* 80082A94 0007F9D4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80082A98 0007F9D8  7F E3 FB 78 */	mr r3, r31
/* 80082A9C 0007F9DC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80082AA0 0007F9E0  7C 08 03 A6 */	mtlr r0
/* 80082AA4 0007F9E4  38 21 00 10 */	addi r1, r1, 0x10
/* 80082AA8 0007F9E8  4E 80 00 20 */	blr 
.endfn __dt__12J3DTevBlock1Fv

.fn load__18J3DTevBlockPatchedFv, weak
/* 80082AAC 0007F9EC  4E 80 00 20 */	blr 
.endfn load__18J3DTevBlockPatchedFv

.fn indexToPtr__18J3DTevBlockPatchedFv, weak
/* 80082AB0 0007F9F0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80082AB4 0007F9F4  7C 08 02 A6 */	mflr r0
/* 80082AB8 0007F9F8  90 01 00 24 */	stw r0, 0x24(r1)
/* 80082ABC 0007F9FC  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80082AC0 0007FA00  3B E0 00 00 */	li r31, 0
/* 80082AC4 0007FA04  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80082AC8 0007FA08  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80082ACC 0007FA0C  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 80082AD0 0007FA10  80 03 00 04 */	lwz r0, 4(r3)
/* 80082AD4 0007FA14  80 64 00 00 */	lwz r3, 0(r4)
/* 80082AD8 0007FA18  7C 03 02 14 */	add r0, r3, r0
/* 80082ADC 0007FA1C  90 04 00 08 */	stw r0, 8(r4)
/* 80082AE0 0007FA20  80 6D 8E A8 */	lwz r3, __GDCurrentDL@sda21(r13)
/* 80082AE4 0007FA24  83 C3 00 08 */	lwz r30, 8(r3)
.L_80082AE8:
/* 80082AE8 0007FA28  80 6D 8E A8 */	lwz r3, __GDCurrentDL@sda21(r13)
/* 80082AEC 0007FA2C  83 A3 00 08 */	lwz r29, 8(r3)
/* 80082AF0 0007FA30  7F A3 EB 78 */	mr r3, r29
/* 80082AF4 0007FA34  4B FE 28 65 */	bl isTexNoReg__FPv
/* 80082AF8 0007FA38  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80082AFC 0007FA3C  41 82 00 24 */	beq .L_80082B20
/* 80082B00 0007FA40  7F A3 EB 78 */	mr r3, r29
/* 80082B04 0007FA44  4B FE 28 79 */	bl getTexNoReg__FPv
/* 80082B08 0007FA48  B0 61 00 08 */	sth r3, 8(r1)
/* 80082B0C 0007FA4C  7F E3 FB 78 */	mr r3, r31
/* 80082B10 0007FA50  38 81 00 08 */	addi r4, r1, 8
/* 80082B14 0007FA54  4B FE 28 75 */	bl loadTexNo__FUlRCUs
/* 80082B18 0007FA58  3B FF 00 01 */	addi r31, r31, 1
/* 80082B1C 0007FA5C  4B FF FF CC */	b .L_80082AE8
.L_80082B20:
/* 80082B20 0007FA60  80 8D 8E A8 */	lwz r4, __GDCurrentDL@sda21(r13)
/* 80082B24 0007FA64  7F C3 F3 78 */	mr r3, r30
/* 80082B28 0007FA68  80 04 00 08 */	lwz r0, 8(r4)
/* 80082B2C 0007FA6C  7C 9E 00 50 */	subf r4, r30, r0
/* 80082B30 0007FA70  48 06 9C 19 */	bl DCStoreRange
/* 80082B34 0007FA74  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80082B38 0007FA78  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80082B3C 0007FA7C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80082B40 0007FA80  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80082B44 0007FA84  7C 08 03 A6 */	mtlr r0
/* 80082B48 0007FA88  38 21 00 20 */	addi r1, r1, 0x20
/* 80082B4C 0007FA8C  4E 80 00 20 */	blr 
.endfn indexToPtr__18J3DTevBlockPatchedFv

.fn getType__18J3DTevBlockPatchedFv, weak
/* 80082B50 0007FA90  3C 60 54 56 */	lis r3, 0x54565054@ha
/* 80082B54 0007FA94  38 63 50 54 */	addi r3, r3, 0x54565054@l
/* 80082B58 0007FA98  4E 80 00 20 */	blr 
.endfn getType__18J3DTevBlockPatchedFv

.fn setTevStageNum__18J3DTevBlockPatchedFUc, weak
/* 80082B5C 0007FA9C  98 83 00 D0 */	stb r4, 0xd0(r3)
/* 80082B60 0007FAA0  4E 80 00 20 */	blr 
.endfn setTevStageNum__18J3DTevBlockPatchedFUc

.fn setTevStageNum__18J3DTevBlockPatchedFPCUc, weak
/* 80082B64 0007FAA4  88 04 00 00 */	lbz r0, 0(r4)
/* 80082B68 0007FAA8  98 03 00 D0 */	stb r0, 0xd0(r3)
/* 80082B6C 0007FAAC  4E 80 00 20 */	blr 
.endfn setTevStageNum__18J3DTevBlockPatchedFPCUc

.fn getTevStageNum__18J3DTevBlockPatchedCFv, weak
/* 80082B70 0007FAB0  88 63 00 D0 */	lbz r3, 0xd0(r3)
/* 80082B74 0007FAB4  4E 80 00 20 */	blr 
.endfn getTevStageNum__18J3DTevBlockPatchedCFv

.fn setTexNo__18J3DTevBlockPatchedFUlUs, weak
/* 80082B78 0007FAB8  54 80 08 3C */	slwi r0, r4, 1
/* 80082B7C 0007FABC  7C 63 02 14 */	add r3, r3, r0
/* 80082B80 0007FAC0  B0 A3 00 08 */	sth r5, 8(r3)
/* 80082B84 0007FAC4  4E 80 00 20 */	blr 
.endfn setTexNo__18J3DTevBlockPatchedFUlUs

.fn setTexNo__18J3DTevBlockPatchedFUlPCUs, weak
/* 80082B88 0007FAC8  54 80 08 3C */	slwi r0, r4, 1
/* 80082B8C 0007FACC  A0 85 00 00 */	lhz r4, 0(r5)
/* 80082B90 0007FAD0  7C 63 02 14 */	add r3, r3, r0
/* 80082B94 0007FAD4  B0 83 00 08 */	sth r4, 8(r3)
/* 80082B98 0007FAD8  4E 80 00 20 */	blr 
.endfn setTexNo__18J3DTevBlockPatchedFUlPCUs

.fn getTexNo__18J3DTevBlockPatchedCFUl, weak
/* 80082B9C 0007FADC  54 80 08 3C */	slwi r0, r4, 1
/* 80082BA0 0007FAE0  7C 63 02 14 */	add r3, r3, r0
/* 80082BA4 0007FAE4  A0 63 00 08 */	lhz r3, 8(r3)
/* 80082BA8 0007FAE8  4E 80 00 20 */	blr 
.endfn getTexNo__18J3DTevBlockPatchedCFUl

.fn setTevOrder__18J3DTevBlockPatchedFUl11J3DTevOrder, weak
/* 80082BAC 0007FAEC  54 84 10 3A */	slwi r4, r4, 2
/* 80082BB0 0007FAF0  88 05 00 00 */	lbz r0, 0(r5)
/* 80082BB4 0007FAF4  7C 83 22 14 */	add r4, r3, r4
/* 80082BB8 0007FAF8  88 65 00 01 */	lbz r3, 1(r5)
/* 80082BBC 0007FAFC  98 04 00 18 */	stb r0, 0x18(r4)
/* 80082BC0 0007FB00  88 05 00 02 */	lbz r0, 2(r5)
/* 80082BC4 0007FB04  98 64 00 19 */	stb r3, 0x19(r4)
/* 80082BC8 0007FB08  98 04 00 1A */	stb r0, 0x1a(r4)
/* 80082BCC 0007FB0C  4E 80 00 20 */	blr 
.endfn setTevOrder__18J3DTevBlockPatchedFUl11J3DTevOrder

.fn setTevOrder__18J3DTevBlockPatchedFUlPC11J3DTevOrder, weak
/* 80082BD0 0007FB10  54 84 10 3A */	slwi r4, r4, 2
/* 80082BD4 0007FB14  88 05 00 00 */	lbz r0, 0(r5)
/* 80082BD8 0007FB18  7C 83 22 14 */	add r4, r3, r4
/* 80082BDC 0007FB1C  88 65 00 01 */	lbz r3, 1(r5)
/* 80082BE0 0007FB20  98 04 00 18 */	stb r0, 0x18(r4)
/* 80082BE4 0007FB24  88 05 00 02 */	lbz r0, 2(r5)
/* 80082BE8 0007FB28  98 64 00 19 */	stb r3, 0x19(r4)
/* 80082BEC 0007FB2C  98 04 00 1A */	stb r0, 0x1a(r4)
/* 80082BF0 0007FB30  4E 80 00 20 */	blr 
.endfn setTevOrder__18J3DTevBlockPatchedFUlPC11J3DTevOrder

.fn getTevOrder__18J3DTevBlockPatchedFUl, weak
/* 80082BF4 0007FB34  54 84 10 3A */	slwi r4, r4, 2
/* 80082BF8 0007FB38  7C 60 1B 78 */	mr r0, r3
/* 80082BFC 0007FB3C  38 64 00 18 */	addi r3, r4, 0x18
/* 80082C00 0007FB40  7C 60 1A 14 */	add r3, r0, r3
/* 80082C04 0007FB44  4E 80 00 20 */	blr 
.endfn getTevOrder__18J3DTevBlockPatchedFUl

.fn setTevStage__18J3DTevBlockPatchedFUl11J3DTevStage, weak
/* 80082C08 0007FB48  54 80 18 38 */	slwi r0, r4, 3
/* 80082C0C 0007FB4C  88 C5 00 01 */	lbz r6, 1(r5)
/* 80082C10 0007FB50  7C 83 02 14 */	add r4, r3, r0
/* 80082C14 0007FB54  88 05 00 02 */	lbz r0, 2(r5)
/* 80082C18 0007FB58  98 C4 00 39 */	stb r6, 0x39(r4)
/* 80082C1C 0007FB5C  88 65 00 03 */	lbz r3, 3(r5)
/* 80082C20 0007FB60  98 04 00 3A */	stb r0, 0x3a(r4)
/* 80082C24 0007FB64  88 05 00 05 */	lbz r0, 5(r5)
/* 80082C28 0007FB68  98 64 00 3B */	stb r3, 0x3b(r4)
/* 80082C2C 0007FB6C  88 65 00 06 */	lbz r3, 6(r5)
/* 80082C30 0007FB70  98 04 00 3D */	stb r0, 0x3d(r4)
/* 80082C34 0007FB74  88 05 00 07 */	lbz r0, 7(r5)
/* 80082C38 0007FB78  98 64 00 3E */	stb r3, 0x3e(r4)
/* 80082C3C 0007FB7C  98 04 00 3F */	stb r0, 0x3f(r4)
/* 80082C40 0007FB80  4E 80 00 20 */	blr 
.endfn setTevStage__18J3DTevBlockPatchedFUl11J3DTevStage

.fn setTevStage__18J3DTevBlockPatchedFUlPC11J3DTevStage, weak
/* 80082C44 0007FB84  54 80 18 38 */	slwi r0, r4, 3
/* 80082C48 0007FB88  88 C5 00 01 */	lbz r6, 1(r5)
/* 80082C4C 0007FB8C  7C 83 02 14 */	add r4, r3, r0
/* 80082C50 0007FB90  88 05 00 02 */	lbz r0, 2(r5)
/* 80082C54 0007FB94  98 C4 00 39 */	stb r6, 0x39(r4)
/* 80082C58 0007FB98  88 65 00 03 */	lbz r3, 3(r5)
/* 80082C5C 0007FB9C  98 04 00 3A */	stb r0, 0x3a(r4)
/* 80082C60 0007FBA0  88 05 00 05 */	lbz r0, 5(r5)
/* 80082C64 0007FBA4  98 64 00 3B */	stb r3, 0x3b(r4)
/* 80082C68 0007FBA8  88 65 00 06 */	lbz r3, 6(r5)
/* 80082C6C 0007FBAC  98 04 00 3D */	stb r0, 0x3d(r4)
/* 80082C70 0007FBB0  88 05 00 07 */	lbz r0, 7(r5)
/* 80082C74 0007FBB4  98 64 00 3E */	stb r3, 0x3e(r4)
/* 80082C78 0007FBB8  98 04 00 3F */	stb r0, 0x3f(r4)
/* 80082C7C 0007FBBC  4E 80 00 20 */	blr 
.endfn setTevStage__18J3DTevBlockPatchedFUlPC11J3DTevStage

.fn getTevStage__18J3DTevBlockPatchedFUl, weak
/* 80082C80 0007FBC0  54 84 18 38 */	slwi r4, r4, 3
/* 80082C84 0007FBC4  7C 60 1B 78 */	mr r0, r3
/* 80082C88 0007FBC8  38 64 00 38 */	addi r3, r4, 0x38
/* 80082C8C 0007FBCC  7C 60 1A 14 */	add r3, r0, r3
/* 80082C90 0007FBD0  4E 80 00 20 */	blr 
.endfn getTevStage__18J3DTevBlockPatchedFUl

.fn setIndTevStage__18J3DTevBlockPatchedFUl14J3DIndTevStage, weak
/* 80082C94 0007FBD4  54 80 10 3A */	slwi r0, r4, 2
/* 80082C98 0007FBD8  80 85 00 00 */	lwz r4, 0(r5)
/* 80082C9C 0007FBDC  7C 63 02 14 */	add r3, r3, r0
/* 80082CA0 0007FBE0  90 83 00 78 */	stw r4, 0x78(r3)
/* 80082CA4 0007FBE4  4E 80 00 20 */	blr 
.endfn setIndTevStage__18J3DTevBlockPatchedFUl14J3DIndTevStage

.fn setIndTevStage__18J3DTevBlockPatchedFUlPC14J3DIndTevStage, weak
/* 80082CA8 0007FBE8  54 80 10 3A */	slwi r0, r4, 2
/* 80082CAC 0007FBEC  80 85 00 00 */	lwz r4, 0(r5)
/* 80082CB0 0007FBF0  7C 63 02 14 */	add r3, r3, r0
/* 80082CB4 0007FBF4  90 83 00 78 */	stw r4, 0x78(r3)
/* 80082CB8 0007FBF8  4E 80 00 20 */	blr 
.endfn setIndTevStage__18J3DTevBlockPatchedFUlPC14J3DIndTevStage

.fn getIndTevStage__18J3DTevBlockPatchedFUl, weak
/* 80082CBC 0007FBFC  54 84 10 3A */	slwi r4, r4, 2
/* 80082CC0 0007FC00  7C 60 1B 78 */	mr r0, r3
/* 80082CC4 0007FC04  38 64 00 78 */	addi r3, r4, 0x78
/* 80082CC8 0007FC08  7C 60 1A 14 */	add r3, r0, r3
/* 80082CCC 0007FC0C  4E 80 00 20 */	blr 
.endfn getIndTevStage__18J3DTevBlockPatchedFUl

.fn setTevColor__18J3DTevBlockPatchedFUl13J3DGXColorS10, weak
/* 80082CD0 0007FC10  54 80 18 38 */	slwi r0, r4, 3
/* 80082CD4 0007FC14  A8 C5 00 00 */	lha r6, 0(r5)
/* 80082CD8 0007FC18  7C 83 02 14 */	add r4, r3, r0
/* 80082CDC 0007FC1C  A8 05 00 02 */	lha r0, 2(r5)
/* 80082CE0 0007FC20  B0 C4 00 98 */	sth r6, 0x98(r4)
/* 80082CE4 0007FC24  A8 65 00 04 */	lha r3, 4(r5)
/* 80082CE8 0007FC28  B0 04 00 9A */	sth r0, 0x9a(r4)
/* 80082CEC 0007FC2C  A8 05 00 06 */	lha r0, 6(r5)
/* 80082CF0 0007FC30  B0 64 00 9C */	sth r3, 0x9c(r4)
/* 80082CF4 0007FC34  B0 04 00 9E */	sth r0, 0x9e(r4)
/* 80082CF8 0007FC38  4E 80 00 20 */	blr 
.endfn setTevColor__18J3DTevBlockPatchedFUl13J3DGXColorS10

.fn setTevColor__18J3DTevBlockPatchedFUlPC13J3DGXColorS10, weak
/* 80082CFC 0007FC3C  54 80 18 38 */	slwi r0, r4, 3
/* 80082D00 0007FC40  A8 C5 00 00 */	lha r6, 0(r5)
/* 80082D04 0007FC44  7C 83 02 14 */	add r4, r3, r0
/* 80082D08 0007FC48  A8 05 00 02 */	lha r0, 2(r5)
/* 80082D0C 0007FC4C  B0 C4 00 98 */	sth r6, 0x98(r4)
/* 80082D10 0007FC50  A8 65 00 04 */	lha r3, 4(r5)
/* 80082D14 0007FC54  B0 04 00 9A */	sth r0, 0x9a(r4)
/* 80082D18 0007FC58  A8 05 00 06 */	lha r0, 6(r5)
/* 80082D1C 0007FC5C  B0 64 00 9C */	sth r3, 0x9c(r4)
/* 80082D20 0007FC60  B0 04 00 9E */	sth r0, 0x9e(r4)
/* 80082D24 0007FC64  4E 80 00 20 */	blr 
.endfn setTevColor__18J3DTevBlockPatchedFUlPC13J3DGXColorS10

.fn getTevColor__18J3DTevBlockPatchedFUl, weak
/* 80082D28 0007FC68  54 84 18 38 */	slwi r4, r4, 3
/* 80082D2C 0007FC6C  7C 60 1B 78 */	mr r0, r3
/* 80082D30 0007FC70  38 64 00 98 */	addi r3, r4, 0x98
/* 80082D34 0007FC74  7C 60 1A 14 */	add r3, r0, r3
/* 80082D38 0007FC78  4E 80 00 20 */	blr 
.endfn getTevColor__18J3DTevBlockPatchedFUl

.fn setTevKColor__18J3DTevBlockPatchedFUl10J3DGXColor, weak
/* 80082D3C 0007FC7C  54 80 10 3A */	slwi r0, r4, 2
/* 80082D40 0007FC80  88 C5 00 00 */	lbz r6, 0(r5)
/* 80082D44 0007FC84  7C 83 02 14 */	add r4, r3, r0
/* 80082D48 0007FC88  88 05 00 01 */	lbz r0, 1(r5)
/* 80082D4C 0007FC8C  98 C4 00 B8 */	stb r6, 0xb8(r4)
/* 80082D50 0007FC90  88 65 00 02 */	lbz r3, 2(r5)
/* 80082D54 0007FC94  98 04 00 B9 */	stb r0, 0xb9(r4)
/* 80082D58 0007FC98  88 05 00 03 */	lbz r0, 3(r5)
/* 80082D5C 0007FC9C  98 64 00 BA */	stb r3, 0xba(r4)
/* 80082D60 0007FCA0  98 04 00 BB */	stb r0, 0xbb(r4)
/* 80082D64 0007FCA4  4E 80 00 20 */	blr 
.endfn setTevKColor__18J3DTevBlockPatchedFUl10J3DGXColor

.fn setTevKColor__18J3DTevBlockPatchedFUlPC10J3DGXColor, weak
/* 80082D68 0007FCA8  54 80 10 3A */	slwi r0, r4, 2
/* 80082D6C 0007FCAC  88 C5 00 00 */	lbz r6, 0(r5)
/* 80082D70 0007FCB0  7C 83 02 14 */	add r4, r3, r0
/* 80082D74 0007FCB4  88 05 00 01 */	lbz r0, 1(r5)
/* 80082D78 0007FCB8  98 C4 00 B8 */	stb r6, 0xb8(r4)
/* 80082D7C 0007FCBC  88 65 00 02 */	lbz r3, 2(r5)
/* 80082D80 0007FCC0  98 04 00 B9 */	stb r0, 0xb9(r4)
/* 80082D84 0007FCC4  88 05 00 03 */	lbz r0, 3(r5)
/* 80082D88 0007FCC8  98 64 00 BA */	stb r3, 0xba(r4)
/* 80082D8C 0007FCCC  98 04 00 BB */	stb r0, 0xbb(r4)
/* 80082D90 0007FCD0  4E 80 00 20 */	blr 
.endfn setTevKColor__18J3DTevBlockPatchedFUlPC10J3DGXColor

.fn getTevKColor__18J3DTevBlockPatchedFUl, weak
/* 80082D94 0007FCD4  54 84 10 3A */	slwi r4, r4, 2
/* 80082D98 0007FCD8  7C 60 1B 78 */	mr r0, r3
/* 80082D9C 0007FCDC  38 64 00 B8 */	addi r3, r4, 0xb8
/* 80082DA0 0007FCE0  7C 60 1A 14 */	add r3, r0, r3
/* 80082DA4 0007FCE4  4E 80 00 20 */	blr 
.endfn getTevKColor__18J3DTevBlockPatchedFUl

.fn setTevKColorSel__18J3DTevBlockPatchedFUlUc, weak
/* 80082DA8 0007FCE8  7C 63 22 14 */	add r3, r3, r4
/* 80082DAC 0007FCEC  98 A3 00 C8 */	stb r5, 0xc8(r3)
/* 80082DB0 0007FCF0  4E 80 00 20 */	blr 
.endfn setTevKColorSel__18J3DTevBlockPatchedFUlUc

.fn setTevKColorSel__18J3DTevBlockPatchedFUlPCUc, weak
/* 80082DB4 0007FCF4  88 05 00 00 */	lbz r0, 0(r5)
/* 80082DB8 0007FCF8  7C 63 22 14 */	add r3, r3, r4
/* 80082DBC 0007FCFC  98 03 00 C8 */	stb r0, 0xc8(r3)
/* 80082DC0 0007FD00  4E 80 00 20 */	blr 
.endfn setTevKColorSel__18J3DTevBlockPatchedFUlPCUc

.fn getTevKColorSel__18J3DTevBlockPatchedFUl, weak
/* 80082DC4 0007FD04  7C 63 22 14 */	add r3, r3, r4
/* 80082DC8 0007FD08  88 63 00 C8 */	lbz r3, 0xc8(r3)
/* 80082DCC 0007FD0C  4E 80 00 20 */	blr 
.endfn getTevKColorSel__18J3DTevBlockPatchedFUl

.fn getTexNoOffset__18J3DTevBlockPatchedCFv, weak
/* 80082DD0 0007FD10  80 63 00 04 */	lwz r3, 4(r3)
/* 80082DD4 0007FD14  4E 80 00 20 */	blr 
.endfn getTexNoOffset__18J3DTevBlockPatchedCFv

.fn getTevRegOffset__18J3DTevBlockPatchedCFv, weak
/* 80082DD8 0007FD18  80 63 00 D4 */	lwz r3, 0xd4(r3)
/* 80082DDC 0007FD1C  4E 80 00 20 */	blr 
.endfn getTevRegOffset__18J3DTevBlockPatchedCFv

.fn setTevRegOffset__18J3DTevBlockPatchedFUl, weak
/* 80082DE0 0007FD20  90 83 00 D4 */	stw r4, 0xd4(r3)
/* 80082DE4 0007FD24  4E 80 00 20 */	blr 
.endfn setTevRegOffset__18J3DTevBlockPatchedFUl

.fn __dt__18J3DTevBlockPatchedFv, weak
/* 80082DE8 0007FD28  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80082DEC 0007FD2C  7C 08 02 A6 */	mflr r0
/* 80082DF0 0007FD30  90 01 00 14 */	stw r0, 0x14(r1)
/* 80082DF4 0007FD34  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80082DF8 0007FD38  7C 7F 1B 79 */	or. r31, r3, r3
/* 80082DFC 0007FD3C  41 82 00 30 */	beq .L_80082E2C
/* 80082E00 0007FD40  3C 60 80 4A */	lis r3, __vt__18J3DTevBlockPatched@ha
/* 80082E04 0007FD44  38 03 26 18 */	addi r0, r3, __vt__18J3DTevBlockPatched@l
/* 80082E08 0007FD48  90 1F 00 00 */	stw r0, 0(r31)
/* 80082E0C 0007FD4C  41 82 00 10 */	beq .L_80082E1C
/* 80082E10 0007FD50  3C 60 80 4A */	lis r3, __vt__11J3DTevBlock@ha
/* 80082E14 0007FD54  38 03 2B 08 */	addi r0, r3, __vt__11J3DTevBlock@l
/* 80082E18 0007FD58  90 1F 00 00 */	stw r0, 0(r31)
.L_80082E1C:
/* 80082E1C 0007FD5C  7C 80 07 35 */	extsh. r0, r4
/* 80082E20 0007FD60  40 81 00 0C */	ble .L_80082E2C
/* 80082E24 0007FD64  7F E3 FB 78 */	mr r3, r31
/* 80082E28 0007FD68  4B FA 12 8D */	bl __dl__FPv
.L_80082E2C:
/* 80082E2C 0007FD6C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80082E30 0007FD70  7F E3 FB 78 */	mr r3, r31
/* 80082E34 0007FD74  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80082E38 0007FD78  7C 08 03 A6 */	mtlr r0
/* 80082E3C 0007FD7C  38 21 00 10 */	addi r1, r1, 0x10
/* 80082E40 0007FD80  4E 80 00 20 */	blr 
.endfn __dt__18J3DTevBlockPatchedFv

.fn getType__19J3DTexGenBlockBasicFv, weak
/* 80082E44 0007FD84  3C 60 54 47 */	lis r3, 0x54474243@ha
/* 80082E48 0007FD88  38 63 42 43 */	addi r3, r3, 0x54474243@l
/* 80082E4C 0007FD8C  4E 80 00 20 */	blr 
.endfn getType__19J3DTexGenBlockBasicFv

.fn setNBTScale__19J3DTexGenBlockBasicF11J3DNBTScale, weak
/* 80082E50 0007FD90  88 04 00 00 */	lbz r0, 0(r4)
/* 80082E54 0007FD94  C0 04 00 04 */	lfs f0, 4(r4)
/* 80082E58 0007FD98  98 03 00 5C */	stb r0, 0x5c(r3)
/* 80082E5C 0007FD9C  C0 24 00 08 */	lfs f1, 8(r4)
/* 80082E60 0007FDA0  D0 03 00 60 */	stfs f0, 0x60(r3)
/* 80082E64 0007FDA4  C0 04 00 0C */	lfs f0, 0xc(r4)
/* 80082E68 0007FDA8  D0 23 00 64 */	stfs f1, 0x64(r3)
/* 80082E6C 0007FDAC  D0 03 00 68 */	stfs f0, 0x68(r3)
/* 80082E70 0007FDB0  4E 80 00 20 */	blr 
.endfn setNBTScale__19J3DTexGenBlockBasicF11J3DNBTScale

.fn setNBTScale__19J3DTexGenBlockBasicFPC11J3DNBTScale, weak
/* 80082E74 0007FDB4  88 04 00 00 */	lbz r0, 0(r4)
/* 80082E78 0007FDB8  C0 04 00 04 */	lfs f0, 4(r4)
/* 80082E7C 0007FDBC  98 03 00 5C */	stb r0, 0x5c(r3)
/* 80082E80 0007FDC0  C0 24 00 08 */	lfs f1, 8(r4)
/* 80082E84 0007FDC4  D0 03 00 60 */	stfs f0, 0x60(r3)
/* 80082E88 0007FDC8  C0 04 00 0C */	lfs f0, 0xc(r4)
/* 80082E8C 0007FDCC  D0 23 00 64 */	stfs f1, 0x64(r3)
/* 80082E90 0007FDD0  D0 03 00 68 */	stfs f0, 0x68(r3)
/* 80082E94 0007FDD4  4E 80 00 20 */	blr 
.endfn setNBTScale__19J3DTexGenBlockBasicFPC11J3DNBTScale

.fn getNBTScale__19J3DTexGenBlockBasicFv, weak
/* 80082E98 0007FDD8  38 63 00 5C */	addi r3, r3, 0x5c
/* 80082E9C 0007FDDC  4E 80 00 20 */	blr 
.endfn getNBTScale__19J3DTexGenBlockBasicFv

.fn __dt__19J3DTexGenBlockBasicFv, weak
/* 80082EA0 0007FDE0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80082EA4 0007FDE4  7C 08 02 A6 */	mflr r0
/* 80082EA8 0007FDE8  90 01 00 14 */	stw r0, 0x14(r1)
/* 80082EAC 0007FDEC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80082EB0 0007FDF0  7C 7F 1B 79 */	or. r31, r3, r3
/* 80082EB4 0007FDF4  41 82 00 40 */	beq .L_80082EF4
/* 80082EB8 0007FDF8  3C 60 80 4A */	lis r3, __vt__19J3DTexGenBlockBasic@ha
/* 80082EBC 0007FDFC  38 03 26 F4 */	addi r0, r3, __vt__19J3DTexGenBlockBasic@l
/* 80082EC0 0007FE00  90 1F 00 00 */	stw r0, 0(r31)
/* 80082EC4 0007FE04  41 82 00 20 */	beq .L_80082EE4
/* 80082EC8 0007FE08  3C 60 80 4A */	lis r3, __vt__21J3DTexGenBlockPatched@ha
/* 80082ECC 0007FE0C  38 03 27 CC */	addi r0, r3, __vt__21J3DTexGenBlockPatched@l
/* 80082ED0 0007FE10  90 1F 00 00 */	stw r0, 0(r31)
/* 80082ED4 0007FE14  41 82 00 10 */	beq .L_80082EE4
/* 80082ED8 0007FE18  3C 60 80 4A */	lis r3, __vt__14J3DTexGenBlock@ha
/* 80082EDC 0007FE1C  38 03 17 1C */	addi r0, r3, __vt__14J3DTexGenBlock@l
/* 80082EE0 0007FE20  90 1F 00 00 */	stw r0, 0(r31)
.L_80082EE4:
/* 80082EE4 0007FE24  7C 80 07 35 */	extsh. r0, r4
/* 80082EE8 0007FE28  40 81 00 0C */	ble .L_80082EF4
/* 80082EEC 0007FE2C  7F E3 FB 78 */	mr r3, r31
/* 80082EF0 0007FE30  4B FA 11 C5 */	bl __dl__FPv
.L_80082EF4:
/* 80082EF4 0007FE34  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80082EF8 0007FE38  7F E3 FB 78 */	mr r3, r31
/* 80082EFC 0007FE3C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80082F00 0007FE40  7C 08 03 A6 */	mtlr r0
/* 80082F04 0007FE44  38 21 00 10 */	addi r1, r1, 0x10
/* 80082F08 0007FE48  4E 80 00 20 */	blr 
.endfn __dt__19J3DTexGenBlockBasicFv

.fn setTexGenNum__21J3DTexGenBlockPatchedFUl, weak
/* 80082F0C 0007FE4C  90 83 00 04 */	stw r4, 4(r3)
/* 80082F10 0007FE50  4E 80 00 20 */	blr 
.endfn setTexGenNum__21J3DTexGenBlockPatchedFUl

.fn setTexGenNum__21J3DTexGenBlockPatchedFPCUl, weak
/* 80082F14 0007FE54  80 04 00 00 */	lwz r0, 0(r4)
/* 80082F18 0007FE58  90 03 00 04 */	stw r0, 4(r3)
/* 80082F1C 0007FE5C  4E 80 00 20 */	blr 
.endfn setTexGenNum__21J3DTexGenBlockPatchedFPCUl

.fn getTexGenNum__21J3DTexGenBlockPatchedCFv, weak
/* 80082F20 0007FE60  80 63 00 04 */	lwz r3, 4(r3)
/* 80082F24 0007FE64  4E 80 00 20 */	blr 
.endfn getTexGenNum__21J3DTexGenBlockPatchedCFv

.fn setTexCoord__21J3DTexGenBlockPatchedFUlPC11J3DTexCoord, weak
/* 80082F28 0007FE68  1C E4 00 06 */	mulli r7, r4, 6
/* 80082F2C 0007FE6C  88 C5 00 00 */	lbz r6, 0(r5)
/* 80082F30 0007FE70  88 85 00 01 */	lbz r4, 1(r5)
/* 80082F34 0007FE74  88 05 00 02 */	lbz r0, 2(r5)
/* 80082F38 0007FE78  7C 63 3A 14 */	add r3, r3, r7
/* 80082F3C 0007FE7C  98 C3 00 08 */	stb r6, 8(r3)
/* 80082F40 0007FE80  98 83 00 09 */	stb r4, 9(r3)
/* 80082F44 0007FE84  98 03 00 0A */	stb r0, 0xa(r3)
/* 80082F48 0007FE88  4E 80 00 20 */	blr 
.endfn setTexCoord__21J3DTexGenBlockPatchedFUlPC11J3DTexCoord

.fn getTexCoord__21J3DTexGenBlockPatchedFUl, weak
/* 80082F4C 0007FE8C  1C 84 00 06 */	mulli r4, r4, 6
/* 80082F50 0007FE90  7C 60 1B 78 */	mr r0, r3
/* 80082F54 0007FE94  38 64 00 08 */	addi r3, r4, 8
/* 80082F58 0007FE98  7C 60 1A 14 */	add r3, r0, r3
/* 80082F5C 0007FE9C  4E 80 00 20 */	blr 
.endfn getTexCoord__21J3DTexGenBlockPatchedFUl

.fn setTexMtx__21J3DTexGenBlockPatchedFUlP9J3DTexMtx, weak
/* 80082F60 0007FEA0  54 80 10 3A */	slwi r0, r4, 2
/* 80082F64 0007FEA4  7C 63 02 14 */	add r3, r3, r0
/* 80082F68 0007FEA8  90 A3 00 38 */	stw r5, 0x38(r3)
/* 80082F6C 0007FEAC  4E 80 00 20 */	blr 
.endfn setTexMtx__21J3DTexGenBlockPatchedFUlP9J3DTexMtx

.fn getTexMtx__21J3DTexGenBlockPatchedFUl, weak
/* 80082F70 0007FEB0  54 80 10 3A */	slwi r0, r4, 2
/* 80082F74 0007FEB4  7C 63 02 14 */	add r3, r3, r0
/* 80082F78 0007FEB8  80 63 00 38 */	lwz r3, 0x38(r3)
/* 80082F7C 0007FEBC  4E 80 00 20 */	blr 
.endfn getTexMtx__21J3DTexGenBlockPatchedFUl

.fn getTexMtxOffset__21J3DTexGenBlockPatchedCFv, weak
/* 80082F80 0007FEC0  80 63 00 58 */	lwz r3, 0x58(r3)
/* 80082F84 0007FEC4  4E 80 00 20 */	blr 
.endfn getTexMtxOffset__21J3DTexGenBlockPatchedCFv

.fn setTexMtxOffset__21J3DTexGenBlockPatchedFUl, weak
/* 80082F88 0007FEC8  90 83 00 58 */	stw r4, 0x58(r3)
/* 80082F8C 0007FECC  4E 80 00 20 */	blr 
.endfn setTexMtxOffset__21J3DTexGenBlockPatchedFUl

.fn getType__15J3DTexGenBlock4Fv, weak
/* 80082F90 0007FED0  3C 60 54 47 */	lis r3, 0x54474234@ha
/* 80082F94 0007FED4  38 63 42 34 */	addi r3, r3, 0x54474234@l
/* 80082F98 0007FED8  4E 80 00 20 */	blr 
.endfn getType__15J3DTexGenBlock4Fv

.fn setNBTScale__15J3DTexGenBlock4F11J3DNBTScale, weak
/* 80082F9C 0007FEDC  88 04 00 00 */	lbz r0, 0(r4)
/* 80082FA0 0007FEE0  C0 04 00 04 */	lfs f0, 4(r4)
/* 80082FA4 0007FEE4  98 03 00 5C */	stb r0, 0x5c(r3)
/* 80082FA8 0007FEE8  C0 24 00 08 */	lfs f1, 8(r4)
/* 80082FAC 0007FEEC  D0 03 00 60 */	stfs f0, 0x60(r3)
/* 80082FB0 0007FEF0  C0 04 00 0C */	lfs f0, 0xc(r4)
/* 80082FB4 0007FEF4  D0 23 00 64 */	stfs f1, 0x64(r3)
/* 80082FB8 0007FEF8  D0 03 00 68 */	stfs f0, 0x68(r3)
/* 80082FBC 0007FEFC  4E 80 00 20 */	blr 
.endfn setNBTScale__15J3DTexGenBlock4F11J3DNBTScale

.fn setNBTScale__15J3DTexGenBlock4FPC11J3DNBTScale, weak
/* 80082FC0 0007FF00  88 04 00 00 */	lbz r0, 0(r4)
/* 80082FC4 0007FF04  C0 04 00 04 */	lfs f0, 4(r4)
/* 80082FC8 0007FF08  98 03 00 5C */	stb r0, 0x5c(r3)
/* 80082FCC 0007FF0C  C0 24 00 08 */	lfs f1, 8(r4)
/* 80082FD0 0007FF10  D0 03 00 60 */	stfs f0, 0x60(r3)
/* 80082FD4 0007FF14  C0 04 00 0C */	lfs f0, 0xc(r4)
/* 80082FD8 0007FF18  D0 23 00 64 */	stfs f1, 0x64(r3)
/* 80082FDC 0007FF1C  D0 03 00 68 */	stfs f0, 0x68(r3)
/* 80082FE0 0007FF20  4E 80 00 20 */	blr 
.endfn setNBTScale__15J3DTexGenBlock4FPC11J3DNBTScale

.fn getNBTScale__15J3DTexGenBlock4Fv, weak
/* 80082FE4 0007FF24  38 63 00 5C */	addi r3, r3, 0x5c
/* 80082FE8 0007FF28  4E 80 00 20 */	blr 
.endfn getNBTScale__15J3DTexGenBlock4Fv

.fn __dt__15J3DTexGenBlock4Fv, weak
/* 80082FEC 0007FF2C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80082FF0 0007FF30  7C 08 02 A6 */	mflr r0
/* 80082FF4 0007FF34  90 01 00 14 */	stw r0, 0x14(r1)
/* 80082FF8 0007FF38  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80082FFC 0007FF3C  7C 7F 1B 79 */	or. r31, r3, r3
/* 80083000 0007FF40  41 82 00 40 */	beq .L_80083040
/* 80083004 0007FF44  3C 60 80 4A */	lis r3, __vt__15J3DTexGenBlock4@ha
/* 80083008 0007FF48  38 03 27 60 */	addi r0, r3, __vt__15J3DTexGenBlock4@l
/* 8008300C 0007FF4C  90 1F 00 00 */	stw r0, 0(r31)
/* 80083010 0007FF50  41 82 00 20 */	beq .L_80083030
/* 80083014 0007FF54  3C 60 80 4A */	lis r3, __vt__21J3DTexGenBlockPatched@ha
/* 80083018 0007FF58  38 03 27 CC */	addi r0, r3, __vt__21J3DTexGenBlockPatched@l
/* 8008301C 0007FF5C  90 1F 00 00 */	stw r0, 0(r31)
/* 80083020 0007FF60  41 82 00 10 */	beq .L_80083030
/* 80083024 0007FF64  3C 60 80 4A */	lis r3, __vt__14J3DTexGenBlock@ha
/* 80083028 0007FF68  38 03 17 1C */	addi r0, r3, __vt__14J3DTexGenBlock@l
/* 8008302C 0007FF6C  90 1F 00 00 */	stw r0, 0(r31)
.L_80083030:
/* 80083030 0007FF70  7C 80 07 35 */	extsh. r0, r4
/* 80083034 0007FF74  40 81 00 0C */	ble .L_80083040
/* 80083038 0007FF78  7F E3 FB 78 */	mr r3, r31
/* 8008303C 0007FF7C  4B FA 10 79 */	bl __dl__FPv
.L_80083040:
/* 80083040 0007FF80  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80083044 0007FF84  7F E3 FB 78 */	mr r3, r31
/* 80083048 0007FF88  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8008304C 0007FF8C  7C 08 03 A6 */	mtlr r0
/* 80083050 0007FF90  38 21 00 10 */	addi r1, r1, 0x10
/* 80083054 0007FF94  4E 80 00 20 */	blr 
.endfn __dt__15J3DTexGenBlock4Fv

.fn load__21J3DTexGenBlockPatchedFv, weak
/* 80083058 0007FF98  4E 80 00 20 */	blr 
.endfn load__21J3DTexGenBlockPatchedFv

.fn getType__21J3DTexGenBlockPatchedFv, weak
/* 8008305C 0007FF9C  3C 60 54 47 */	lis r3, 0x54475054@ha
/* 80083060 0007FFA0  38 63 50 54 */	addi r3, r3, 0x54475054@l
/* 80083064 0007FFA4  4E 80 00 20 */	blr 
.endfn getType__21J3DTexGenBlockPatchedFv

.fn getType__20J3DColorBlockLightOnFv, weak
/* 80083068 0007FFA8  3C 60 43 4C */	lis r3, 0x434C4F4E@ha
/* 8008306C 0007FFAC  38 63 4F 4E */	addi r3, r3, 0x434C4F4E@l
/* 80083070 0007FFB0  4E 80 00 20 */	blr 
.endfn getType__20J3DColorBlockLightOnFv

.fn setMatColor__20J3DColorBlockLightOnFUl10J3DGXColor, weak
/* 80083074 0007FFB4  54 80 10 3A */	slwi r0, r4, 2
/* 80083078 0007FFB8  88 C5 00 00 */	lbz r6, 0(r5)
/* 8008307C 0007FFBC  7C 83 02 14 */	add r4, r3, r0
/* 80083080 0007FFC0  88 05 00 01 */	lbz r0, 1(r5)
/* 80083084 0007FFC4  98 C4 00 04 */	stb r6, 4(r4)
/* 80083088 0007FFC8  88 65 00 02 */	lbz r3, 2(r5)
/* 8008308C 0007FFCC  98 04 00 05 */	stb r0, 5(r4)
/* 80083090 0007FFD0  88 05 00 03 */	lbz r0, 3(r5)
/* 80083094 0007FFD4  98 64 00 06 */	stb r3, 6(r4)
/* 80083098 0007FFD8  98 04 00 07 */	stb r0, 7(r4)
/* 8008309C 0007FFDC  4E 80 00 20 */	blr 
.endfn setMatColor__20J3DColorBlockLightOnFUl10J3DGXColor

.fn setMatColor__20J3DColorBlockLightOnFUlPC10J3DGXColor, weak
/* 800830A0 0007FFE0  54 80 10 3A */	slwi r0, r4, 2
/* 800830A4 0007FFE4  88 C5 00 00 */	lbz r6, 0(r5)
/* 800830A8 0007FFE8  7C 83 02 14 */	add r4, r3, r0
/* 800830AC 0007FFEC  88 05 00 01 */	lbz r0, 1(r5)
/* 800830B0 0007FFF0  98 C4 00 04 */	stb r6, 4(r4)
/* 800830B4 0007FFF4  88 65 00 02 */	lbz r3, 2(r5)
/* 800830B8 0007FFF8  98 04 00 05 */	stb r0, 5(r4)
/* 800830BC 0007FFFC  88 05 00 03 */	lbz r0, 3(r5)
/* 800830C0 00080000  98 64 00 06 */	stb r3, 6(r4)
/* 800830C4 00080004  98 04 00 07 */	stb r0, 7(r4)
/* 800830C8 00080008  4E 80 00 20 */	blr 
.endfn setMatColor__20J3DColorBlockLightOnFUlPC10J3DGXColor

.fn getMatColor__20J3DColorBlockLightOnFUl, weak
/* 800830CC 0008000C  54 84 10 3A */	slwi r4, r4, 2
/* 800830D0 00080010  7C 60 1B 78 */	mr r0, r3
/* 800830D4 00080014  38 64 00 04 */	addi r3, r4, 4
/* 800830D8 00080018  7C 60 1A 14 */	add r3, r0, r3
/* 800830DC 0008001C  4E 80 00 20 */	blr 
.endfn getMatColor__20J3DColorBlockLightOnFUl

.fn setAmbColor__20J3DColorBlockLightOnFUl10J3DGXColor, weak
/* 800830E0 00080020  54 80 10 3A */	slwi r0, r4, 2
/* 800830E4 00080024  88 C5 00 00 */	lbz r6, 0(r5)
/* 800830E8 00080028  7C 83 02 14 */	add r4, r3, r0
/* 800830EC 0008002C  88 05 00 01 */	lbz r0, 1(r5)
/* 800830F0 00080030  98 C4 00 0C */	stb r6, 0xc(r4)
/* 800830F4 00080034  88 65 00 02 */	lbz r3, 2(r5)
/* 800830F8 00080038  98 04 00 0D */	stb r0, 0xd(r4)
/* 800830FC 0008003C  88 05 00 03 */	lbz r0, 3(r5)
/* 80083100 00080040  98 64 00 0E */	stb r3, 0xe(r4)
/* 80083104 00080044  98 04 00 0F */	stb r0, 0xf(r4)
/* 80083108 00080048  4E 80 00 20 */	blr 
.endfn setAmbColor__20J3DColorBlockLightOnFUl10J3DGXColor

.fn setAmbColor__20J3DColorBlockLightOnFUlPC10J3DGXColor, weak
/* 8008310C 0008004C  54 80 10 3A */	slwi r0, r4, 2
/* 80083110 00080050  88 C5 00 00 */	lbz r6, 0(r5)
/* 80083114 00080054  7C 83 02 14 */	add r4, r3, r0
/* 80083118 00080058  88 05 00 01 */	lbz r0, 1(r5)
/* 8008311C 0008005C  98 C4 00 0C */	stb r6, 0xc(r4)
/* 80083120 00080060  88 65 00 02 */	lbz r3, 2(r5)
/* 80083124 00080064  98 04 00 0D */	stb r0, 0xd(r4)
/* 80083128 00080068  88 05 00 03 */	lbz r0, 3(r5)
/* 8008312C 0008006C  98 64 00 0E */	stb r3, 0xe(r4)
/* 80083130 00080070  98 04 00 0F */	stb r0, 0xf(r4)
/* 80083134 00080074  4E 80 00 20 */	blr 
.endfn setAmbColor__20J3DColorBlockLightOnFUlPC10J3DGXColor

.fn getAmbColor__20J3DColorBlockLightOnFUl, weak
/* 80083138 00080078  54 84 10 3A */	slwi r4, r4, 2
/* 8008313C 0008007C  7C 60 1B 78 */	mr r0, r3
/* 80083140 00080080  38 64 00 0C */	addi r3, r4, 0xc
/* 80083144 00080084  7C 60 1A 14 */	add r3, r0, r3
/* 80083148 00080088  4E 80 00 20 */	blr 
.endfn getAmbColor__20J3DColorBlockLightOnFUl

.fn setColorChanNum__20J3DColorBlockLightOnFPCUc, weak
/* 8008314C 0008008C  88 04 00 00 */	lbz r0, 0(r4)
/* 80083150 00080090  98 03 00 14 */	stb r0, 0x14(r3)
/* 80083154 00080094  4E 80 00 20 */	blr 
.endfn setColorChanNum__20J3DColorBlockLightOnFPCUc

.fn setColorChanNum__20J3DColorBlockLightOnFUc, weak
/* 80083158 00080098  98 83 00 14 */	stb r4, 0x14(r3)
/* 8008315C 0008009C  4E 80 00 20 */	blr 
.endfn setColorChanNum__20J3DColorBlockLightOnFUc

.fn getColorChanNum__20J3DColorBlockLightOnCFv, weak
/* 80083160 000800A0  88 63 00 14 */	lbz r3, 0x14(r3)
/* 80083164 000800A4  4E 80 00 20 */	blr 
.endfn getColorChanNum__20J3DColorBlockLightOnCFv

.fn setColorChan__20J3DColorBlockLightOnFUlPC12J3DColorChan, weak
/* 80083168 000800A8  54 80 08 3C */	slwi r0, r4, 1
/* 8008316C 000800AC  A0 85 00 00 */	lhz r4, 0(r5)
/* 80083170 000800B0  7C 63 02 14 */	add r3, r3, r0
/* 80083174 000800B4  B0 83 00 16 */	sth r4, 0x16(r3)
/* 80083178 000800B8  4E 80 00 20 */	blr 
.endfn setColorChan__20J3DColorBlockLightOnFUlPC12J3DColorChan

.fn setColorChan__20J3DColorBlockLightOnFUlRC12J3DColorChan, weak
/* 8008317C 000800BC  54 80 08 3C */	slwi r0, r4, 1
/* 80083180 000800C0  A0 85 00 00 */	lhz r4, 0(r5)
/* 80083184 000800C4  7C 63 02 14 */	add r3, r3, r0
/* 80083188 000800C8  B0 83 00 16 */	sth r4, 0x16(r3)
/* 8008318C 000800CC  4E 80 00 20 */	blr 
.endfn setColorChan__20J3DColorBlockLightOnFUlRC12J3DColorChan

.fn getColorChan__20J3DColorBlockLightOnFUl, weak
/* 80083190 000800D0  54 84 08 3C */	slwi r4, r4, 1
/* 80083194 000800D4  7C 60 1B 78 */	mr r0, r3
/* 80083198 000800D8  38 64 00 16 */	addi r3, r4, 0x16
/* 8008319C 000800DC  7C 60 1A 14 */	add r3, r0, r3
/* 800831A0 000800E0  4E 80 00 20 */	blr 
.endfn getColorChan__20J3DColorBlockLightOnFUl

.fn setLight__20J3DColorBlockLightOnFUlP11J3DLightObj, weak
/* 800831A4 000800E4  54 80 10 3A */	slwi r0, r4, 2
/* 800831A8 000800E8  7C 63 02 14 */	add r3, r3, r0
/* 800831AC 000800EC  90 A3 00 20 */	stw r5, 0x20(r3)
/* 800831B0 000800F0  4E 80 00 20 */	blr 
.endfn setLight__20J3DColorBlockLightOnFUlP11J3DLightObj

.fn getLight__20J3DColorBlockLightOnFUl, weak
/* 800831B4 000800F4  54 80 10 3A */	slwi r0, r4, 2
/* 800831B8 000800F8  7C 63 02 14 */	add r3, r3, r0
/* 800831BC 000800FC  80 63 00 20 */	lwz r3, 0x20(r3)
/* 800831C0 00080100  4E 80 00 20 */	blr 
.endfn getLight__20J3DColorBlockLightOnFUl

.fn setCullMode__20J3DColorBlockLightOnFUc, weak
/* 800831C4 00080104  98 83 00 40 */	stb r4, 0x40(r3)
/* 800831C8 00080108  4E 80 00 20 */	blr 
.endfn setCullMode__20J3DColorBlockLightOnFUc

.fn setCullMode__20J3DColorBlockLightOnFPCUc, weak
/* 800831CC 0008010C  88 04 00 00 */	lbz r0, 0(r4)
/* 800831D0 00080110  98 03 00 40 */	stb r0, 0x40(r3)
/* 800831D4 00080114  4E 80 00 20 */	blr 
.endfn setCullMode__20J3DColorBlockLightOnFPCUc

.fn getCullMode__20J3DColorBlockLightOnCFv, weak
/* 800831D8 00080118  88 63 00 40 */	lbz r3, 0x40(r3)
/* 800831DC 0008011C  4E 80 00 20 */	blr 
.endfn getCullMode__20J3DColorBlockLightOnCFv

.fn getMatColorOffset__20J3DColorBlockLightOnCFv, weak
/* 800831E0 00080120  80 63 00 44 */	lwz r3, 0x44(r3)
/* 800831E4 00080124  4E 80 00 20 */	blr 
.endfn getMatColorOffset__20J3DColorBlockLightOnCFv

.fn getColorChanOffset__20J3DColorBlockLightOnCFv, weak
/* 800831E8 00080128  80 63 00 48 */	lwz r3, 0x48(r3)
/* 800831EC 0008012C  4E 80 00 20 */	blr 
.endfn getColorChanOffset__20J3DColorBlockLightOnCFv

.fn setMatColorOffset__20J3DColorBlockLightOnFUl, weak
/* 800831F0 00080130  90 83 00 44 */	stw r4, 0x44(r3)
/* 800831F4 00080134  4E 80 00 20 */	blr 
.endfn setMatColorOffset__20J3DColorBlockLightOnFUl

.fn setColorChanOffset__20J3DColorBlockLightOnFUl, weak
/* 800831F8 00080138  90 83 00 48 */	stw r4, 0x48(r3)
/* 800831FC 0008013C  4E 80 00 20 */	blr 
.endfn setColorChanOffset__20J3DColorBlockLightOnFUl

.fn __dt__20J3DColorBlockLightOnFv, weak
/* 80083200 00080140  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80083204 00080144  7C 08 02 A6 */	mflr r0
/* 80083208 00080148  90 01 00 14 */	stw r0, 0x14(r1)
/* 8008320C 0008014C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80083210 00080150  7C 7F 1B 79 */	or. r31, r3, r3
/* 80083214 00080154  41 82 00 30 */	beq .L_80083244
/* 80083218 00080158  3C 60 80 4A */	lis r3, __vt__20J3DColorBlockLightOn@ha
/* 8008321C 0008015C  38 03 28 38 */	addi r0, r3, __vt__20J3DColorBlockLightOn@l
/* 80083220 00080160  90 1F 00 00 */	stw r0, 0(r31)
/* 80083224 00080164  41 82 00 10 */	beq .L_80083234
/* 80083228 00080168  3C 60 80 4A */	lis r3, __vt__13J3DColorBlock@ha
/* 8008322C 0008016C  38 03 17 88 */	addi r0, r3, __vt__13J3DColorBlock@l
/* 80083230 00080170  90 1F 00 00 */	stw r0, 0(r31)
.L_80083234:
/* 80083234 00080174  7C 80 07 35 */	extsh. r0, r4
/* 80083238 00080178  40 81 00 0C */	ble .L_80083244
/* 8008323C 0008017C  7F E3 FB 78 */	mr r3, r31
/* 80083240 00080180  4B FA 0E 75 */	bl __dl__FPv
.L_80083244:
/* 80083244 00080184  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80083248 00080188  7F E3 FB 78 */	mr r3, r31
/* 8008324C 0008018C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80083250 00080190  7C 08 03 A6 */	mtlr r0
/* 80083254 00080194  38 21 00 10 */	addi r1, r1, 0x10
/* 80083258 00080198  4E 80 00 20 */	blr 
.endfn __dt__20J3DColorBlockLightOnFv

.fn getType__22J3DColorBlockAmbientOnFv, weak
/* 8008325C 0008019C  3C 60 43 4C */	lis r3, 0x434C4142@ha
/* 80083260 000801A0  38 63 41 42 */	addi r3, r3, 0x434C4142@l
/* 80083264 000801A4  4E 80 00 20 */	blr 
.endfn getType__22J3DColorBlockAmbientOnFv

.fn setAmbColor__22J3DColorBlockAmbientOnFUl10J3DGXColor, weak
/* 80083268 000801A8  54 80 10 3A */	slwi r0, r4, 2
/* 8008326C 000801AC  88 C5 00 00 */	lbz r6, 0(r5)
/* 80083270 000801B0  7C 83 02 14 */	add r4, r3, r0
/* 80083274 000801B4  88 05 00 01 */	lbz r0, 1(r5)
/* 80083278 000801B8  98 C4 00 20 */	stb r6, 0x20(r4)
/* 8008327C 000801BC  88 65 00 02 */	lbz r3, 2(r5)
/* 80083280 000801C0  98 04 00 21 */	stb r0, 0x21(r4)
/* 80083284 000801C4  88 05 00 03 */	lbz r0, 3(r5)
/* 80083288 000801C8  98 64 00 22 */	stb r3, 0x22(r4)
/* 8008328C 000801CC  98 04 00 23 */	stb r0, 0x23(r4)
/* 80083290 000801D0  4E 80 00 20 */	blr 
.endfn setAmbColor__22J3DColorBlockAmbientOnFUl10J3DGXColor

.fn setAmbColor__22J3DColorBlockAmbientOnFUlPC10J3DGXColor, weak
/* 80083294 000801D4  54 80 10 3A */	slwi r0, r4, 2
/* 80083298 000801D8  88 C5 00 00 */	lbz r6, 0(r5)
/* 8008329C 000801DC  7C 83 02 14 */	add r4, r3, r0
/* 800832A0 000801E0  88 05 00 01 */	lbz r0, 1(r5)
/* 800832A4 000801E4  98 C4 00 20 */	stb r6, 0x20(r4)
/* 800832A8 000801E8  88 65 00 02 */	lbz r3, 2(r5)
/* 800832AC 000801EC  98 04 00 21 */	stb r0, 0x21(r4)
/* 800832B0 000801F0  88 05 00 03 */	lbz r0, 3(r5)
/* 800832B4 000801F4  98 64 00 22 */	stb r3, 0x22(r4)
/* 800832B8 000801F8  98 04 00 23 */	stb r0, 0x23(r4)
/* 800832BC 000801FC  4E 80 00 20 */	blr 
.endfn setAmbColor__22J3DColorBlockAmbientOnFUlPC10J3DGXColor

.fn getAmbColor__22J3DColorBlockAmbientOnFUl, weak
/* 800832C0 00080200  54 84 10 3A */	slwi r4, r4, 2
/* 800832C4 00080204  7C 60 1B 78 */	mr r0, r3
/* 800832C8 00080208  38 64 00 20 */	addi r3, r4, 0x20
/* 800832CC 0008020C  7C 60 1A 14 */	add r3, r0, r3
/* 800832D0 00080210  4E 80 00 20 */	blr 
.endfn getAmbColor__22J3DColorBlockAmbientOnFUl

.fn __dt__22J3DColorBlockAmbientOnFv, weak
/* 800832D4 00080214  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800832D8 00080218  7C 08 02 A6 */	mflr r0
/* 800832DC 0008021C  90 01 00 14 */	stw r0, 0x14(r1)
/* 800832E0 00080220  93 E1 00 0C */	stw r31, 0xc(r1)
/* 800832E4 00080224  7C 7F 1B 79 */	or. r31, r3, r3
/* 800832E8 00080228  41 82 00 40 */	beq .L_80083328
/* 800832EC 0008022C  3C 60 80 4A */	lis r3, __vt__22J3DColorBlockAmbientOn@ha
/* 800832F0 00080230  38 03 28 C0 */	addi r0, r3, __vt__22J3DColorBlockAmbientOn@l
/* 800832F4 00080234  90 1F 00 00 */	stw r0, 0(r31)
/* 800832F8 00080238  41 82 00 20 */	beq .L_80083318
/* 800832FC 0008023C  3C 60 80 4A */	lis r3, __vt__21J3DColorBlockLightOff@ha
/* 80083300 00080240  38 03 2B E4 */	addi r0, r3, __vt__21J3DColorBlockLightOff@l
/* 80083304 00080244  90 1F 00 00 */	stw r0, 0(r31)
/* 80083308 00080248  41 82 00 10 */	beq .L_80083318
/* 8008330C 0008024C  3C 60 80 4A */	lis r3, __vt__13J3DColorBlock@ha
/* 80083310 00080250  38 03 17 88 */	addi r0, r3, __vt__13J3DColorBlock@l
/* 80083314 00080254  90 1F 00 00 */	stw r0, 0(r31)
.L_80083318:
/* 80083318 00080258  7C 80 07 35 */	extsh. r0, r4
/* 8008331C 0008025C  40 81 00 0C */	ble .L_80083328
/* 80083320 00080260  7F E3 FB 78 */	mr r3, r31
/* 80083324 00080264  4B FA 0D 91 */	bl __dl__FPv
.L_80083328:
/* 80083328 00080268  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8008332C 0008026C  7F E3 FB 78 */	mr r3, r31
/* 80083330 00080270  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80083334 00080274  7C 08 03 A6 */	mtlr r0
/* 80083338 00080278  38 21 00 10 */	addi r1, r1, 0x10
/* 8008333C 0008027C  4E 80 00 20 */	blr 
.endfn __dt__22J3DColorBlockAmbientOnFv

.fn setMatColor__21J3DColorBlockLightOffFUl10J3DGXColor, weak
/* 80083340 00080280  54 80 10 3A */	slwi r0, r4, 2
/* 80083344 00080284  88 C5 00 00 */	lbz r6, 0(r5)
/* 80083348 00080288  7C 83 02 14 */	add r4, r3, r0
/* 8008334C 0008028C  88 05 00 01 */	lbz r0, 1(r5)
/* 80083350 00080290  98 C4 00 04 */	stb r6, 4(r4)
/* 80083354 00080294  88 65 00 02 */	lbz r3, 2(r5)
/* 80083358 00080298  98 04 00 05 */	stb r0, 5(r4)
/* 8008335C 0008029C  88 05 00 03 */	lbz r0, 3(r5)
/* 80083360 000802A0  98 64 00 06 */	stb r3, 6(r4)
/* 80083364 000802A4  98 04 00 07 */	stb r0, 7(r4)
/* 80083368 000802A8  4E 80 00 20 */	blr 
.endfn setMatColor__21J3DColorBlockLightOffFUl10J3DGXColor

.fn setMatColor__21J3DColorBlockLightOffFUlPC10J3DGXColor, weak
/* 8008336C 000802AC  54 80 10 3A */	slwi r0, r4, 2
/* 80083370 000802B0  88 C5 00 00 */	lbz r6, 0(r5)
/* 80083374 000802B4  7C 83 02 14 */	add r4, r3, r0
/* 80083378 000802B8  88 05 00 01 */	lbz r0, 1(r5)
/* 8008337C 000802BC  98 C4 00 04 */	stb r6, 4(r4)
/* 80083380 000802C0  88 65 00 02 */	lbz r3, 2(r5)
/* 80083384 000802C4  98 04 00 05 */	stb r0, 5(r4)
/* 80083388 000802C8  88 05 00 03 */	lbz r0, 3(r5)
/* 8008338C 000802CC  98 64 00 06 */	stb r3, 6(r4)
/* 80083390 000802D0  98 04 00 07 */	stb r0, 7(r4)
/* 80083394 000802D4  4E 80 00 20 */	blr 
.endfn setMatColor__21J3DColorBlockLightOffFUlPC10J3DGXColor

.fn getMatColor__21J3DColorBlockLightOffFUl, weak
/* 80083398 000802D8  54 84 10 3A */	slwi r4, r4, 2
/* 8008339C 000802DC  7C 60 1B 78 */	mr r0, r3
/* 800833A0 000802E0  38 64 00 04 */	addi r3, r4, 4
/* 800833A4 000802E4  7C 60 1A 14 */	add r3, r0, r3
/* 800833A8 000802E8  4E 80 00 20 */	blr 
.endfn getMatColor__21J3DColorBlockLightOffFUl

.fn setColorChanNum__21J3DColorBlockLightOffFPCUc, weak
/* 800833AC 000802EC  88 04 00 00 */	lbz r0, 0(r4)
/* 800833B0 000802F0  98 03 00 0C */	stb r0, 0xc(r3)
/* 800833B4 000802F4  4E 80 00 20 */	blr 
.endfn setColorChanNum__21J3DColorBlockLightOffFPCUc

.fn setColorChanNum__21J3DColorBlockLightOffFUc, weak
/* 800833B8 000802F8  98 83 00 0C */	stb r4, 0xc(r3)
/* 800833BC 000802FC  4E 80 00 20 */	blr 
.endfn setColorChanNum__21J3DColorBlockLightOffFUc

.fn getColorChanNum__21J3DColorBlockLightOffCFv, weak
/* 800833C0 00080300  88 63 00 0C */	lbz r3, 0xc(r3)
/* 800833C4 00080304  4E 80 00 20 */	blr 
.endfn getColorChanNum__21J3DColorBlockLightOffCFv

.fn setColorChan__21J3DColorBlockLightOffFUlPC12J3DColorChan, weak
/* 800833C8 00080308  54 80 08 3C */	slwi r0, r4, 1
/* 800833CC 0008030C  A0 85 00 00 */	lhz r4, 0(r5)
/* 800833D0 00080310  7C 63 02 14 */	add r3, r3, r0
/* 800833D4 00080314  B0 83 00 0E */	sth r4, 0xe(r3)
/* 800833D8 00080318  4E 80 00 20 */	blr 
.endfn setColorChan__21J3DColorBlockLightOffFUlPC12J3DColorChan

.fn setColorChan__21J3DColorBlockLightOffFUlRC12J3DColorChan, weak
/* 800833DC 0008031C  54 80 08 3C */	slwi r0, r4, 1
/* 800833E0 00080320  A0 85 00 00 */	lhz r4, 0(r5)
/* 800833E4 00080324  7C 63 02 14 */	add r3, r3, r0
/* 800833E8 00080328  B0 83 00 0E */	sth r4, 0xe(r3)
/* 800833EC 0008032C  4E 80 00 20 */	blr 
.endfn setColorChan__21J3DColorBlockLightOffFUlRC12J3DColorChan

.fn getColorChan__21J3DColorBlockLightOffFUl, weak
/* 800833F0 00080330  54 84 08 3C */	slwi r4, r4, 1
/* 800833F4 00080334  7C 60 1B 78 */	mr r0, r3
/* 800833F8 00080338  38 64 00 0E */	addi r3, r4, 0xe
/* 800833FC 0008033C  7C 60 1A 14 */	add r3, r0, r3
/* 80083400 00080340  4E 80 00 20 */	blr 
.endfn getColorChan__21J3DColorBlockLightOffFUl

.fn setCullMode__21J3DColorBlockLightOffFUc, weak
/* 80083404 00080344  98 83 00 16 */	stb r4, 0x16(r3)
/* 80083408 00080348  4E 80 00 20 */	blr 
.endfn setCullMode__21J3DColorBlockLightOffFUc

.fn setCullMode__21J3DColorBlockLightOffFPCUc, weak
/* 8008340C 0008034C  88 04 00 00 */	lbz r0, 0(r4)
/* 80083410 00080350  98 03 00 16 */	stb r0, 0x16(r3)
/* 80083414 00080354  4E 80 00 20 */	blr 
.endfn setCullMode__21J3DColorBlockLightOffFPCUc

.fn getCullMode__21J3DColorBlockLightOffCFv, weak
/* 80083418 00080358  88 63 00 16 */	lbz r3, 0x16(r3)
/* 8008341C 0008035C  4E 80 00 20 */	blr 
.endfn getCullMode__21J3DColorBlockLightOffCFv

.fn getMatColorOffset__21J3DColorBlockLightOffCFv, weak
/* 80083420 00080360  80 63 00 18 */	lwz r3, 0x18(r3)
/* 80083424 00080364  4E 80 00 20 */	blr 
.endfn getMatColorOffset__21J3DColorBlockLightOffCFv

.fn getColorChanOffset__21J3DColorBlockLightOffCFv, weak
/* 80083428 00080368  80 63 00 1C */	lwz r3, 0x1c(r3)
/* 8008342C 0008036C  4E 80 00 20 */	blr 
.endfn getColorChanOffset__21J3DColorBlockLightOffCFv

.fn setMatColorOffset__21J3DColorBlockLightOffFUl, weak
/* 80083430 00080370  90 83 00 18 */	stw r4, 0x18(r3)
/* 80083434 00080374  4E 80 00 20 */	blr 
.endfn setMatColorOffset__21J3DColorBlockLightOffFUl

.fn setColorChanOffset__21J3DColorBlockLightOffFUl, weak
/* 80083438 00080378  90 83 00 1C */	stw r4, 0x1c(r3)
/* 8008343C 0008037C  4E 80 00 20 */	blr 
.endfn setColorChanOffset__21J3DColorBlockLightOffFUl

.fn getType__13J3DPEBlockXluFv, weak
/* 80083440 00080380  3C 60 50 45 */	lis r3, 0x5045584C@ha
/* 80083444 00080384  38 63 58 4C */	addi r3, r3, 0x5045584C@l
/* 80083448 00080388  4E 80 00 20 */	blr 
.endfn getType__13J3DPEBlockXluFv

.fn __dt__13J3DPEBlockXluFv, weak
/* 8008344C 0008038C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80083450 00080390  7C 08 02 A6 */	mflr r0
/* 80083454 00080394  90 01 00 14 */	stw r0, 0x14(r1)
/* 80083458 00080398  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8008345C 0008039C  7C 7F 1B 79 */	or. r31, r3, r3
/* 80083460 000803A0  41 82 00 30 */	beq .L_80083490
/* 80083464 000803A4  3C 60 80 4A */	lis r3, __vt__13J3DPEBlockXlu@ha
/* 80083468 000803A8  38 03 29 48 */	addi r0, r3, __vt__13J3DPEBlockXlu@l
/* 8008346C 000803AC  90 1F 00 00 */	stw r0, 0(r31)
/* 80083470 000803B0  41 82 00 10 */	beq .L_80083480
/* 80083474 000803B4  3C 60 80 4A */	lis r3, __vt__10J3DPEBlock@ha
/* 80083478 000803B8  38 03 16 08 */	addi r0, r3, __vt__10J3DPEBlock@l
/* 8008347C 000803BC  90 1F 00 00 */	stw r0, 0(r31)
.L_80083480:
/* 80083480 000803C0  7C 80 07 35 */	extsh. r0, r4
/* 80083484 000803C4  40 81 00 0C */	ble .L_80083490
/* 80083488 000803C8  7F E3 FB 78 */	mr r3, r31
/* 8008348C 000803CC  4B FA 0C 29 */	bl __dl__FPv
.L_80083490:
/* 80083490 000803D0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80083494 000803D4  7F E3 FB 78 */	mr r3, r31
/* 80083498 000803D8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8008349C 000803DC  7C 08 03 A6 */	mtlr r0
/* 800834A0 000803E0  38 21 00 10 */	addi r1, r1, 0x10
/* 800834A4 000803E4  4E 80 00 20 */	blr 
.endfn __dt__13J3DPEBlockXluFv

.fn getType__17J3DPEBlockTexEdgeFv, weak
/* 800834A8 000803E8  3C 60 50 45 */	lis r3, 0x50454544@ha
/* 800834AC 000803EC  38 63 45 44 */	addi r3, r3, 0x50454544@l
/* 800834B0 000803F0  4E 80 00 20 */	blr 
.endfn getType__17J3DPEBlockTexEdgeFv

.fn __dt__17J3DPEBlockTexEdgeFv, weak
/* 800834B4 000803F4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800834B8 000803F8  7C 08 02 A6 */	mflr r0
/* 800834BC 000803FC  90 01 00 14 */	stw r0, 0x14(r1)
/* 800834C0 00080400  93 E1 00 0C */	stw r31, 0xc(r1)
/* 800834C4 00080404  7C 7F 1B 79 */	or. r31, r3, r3
/* 800834C8 00080408  41 82 00 30 */	beq .L_800834F8
/* 800834CC 0008040C  3C 60 80 4A */	lis r3, __vt__17J3DPEBlockTexEdge@ha
/* 800834D0 00080410  38 03 29 C4 */	addi r0, r3, __vt__17J3DPEBlockTexEdge@l
/* 800834D4 00080414  90 1F 00 00 */	stw r0, 0(r31)
/* 800834D8 00080418  41 82 00 10 */	beq .L_800834E8
/* 800834DC 0008041C  3C 60 80 4A */	lis r3, __vt__10J3DPEBlock@ha
/* 800834E0 00080420  38 03 16 08 */	addi r0, r3, __vt__10J3DPEBlock@l
/* 800834E4 00080424  90 1F 00 00 */	stw r0, 0(r31)
.L_800834E8:
/* 800834E8 00080428  7C 80 07 35 */	extsh. r0, r4
/* 800834EC 0008042C  40 81 00 0C */	ble .L_800834F8
/* 800834F0 00080430  7F E3 FB 78 */	mr r3, r31
/* 800834F4 00080434  4B FA 0B C1 */	bl __dl__FPv
.L_800834F8:
/* 800834F8 00080438  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800834FC 0008043C  7F E3 FB 78 */	mr r3, r31
/* 80083500 00080440  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80083504 00080444  7C 08 03 A6 */	mtlr r0
/* 80083508 00080448  38 21 00 10 */	addi r1, r1, 0x10
/* 8008350C 0008044C  4E 80 00 20 */	blr 
.endfn __dt__17J3DPEBlockTexEdgeFv

.fn getType__13J3DPEBlockOpaFv, weak
/* 80083510 00080450  3C 60 50 45 */	lis r3, 0x50454F50@ha
/* 80083514 00080454  38 63 4F 50 */	addi r3, r3, 0x50454F50@l
/* 80083518 00080458  4E 80 00 20 */	blr 
.endfn getType__13J3DPEBlockOpaFv

.fn __dt__13J3DPEBlockOpaFv, weak
/* 8008351C 0008045C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80083520 00080460  7C 08 02 A6 */	mflr r0
/* 80083524 00080464  90 01 00 14 */	stw r0, 0x14(r1)
/* 80083528 00080468  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8008352C 0008046C  7C 7F 1B 79 */	or. r31, r3, r3
/* 80083530 00080470  41 82 00 30 */	beq .L_80083560
/* 80083534 00080474  3C 60 80 4A */	lis r3, __vt__13J3DPEBlockOpa@ha
/* 80083538 00080478  38 03 2A 40 */	addi r0, r3, __vt__13J3DPEBlockOpa@l
/* 8008353C 0008047C  90 1F 00 00 */	stw r0, 0(r31)
/* 80083540 00080480  41 82 00 10 */	beq .L_80083550
/* 80083544 00080484  3C 60 80 4A */	lis r3, __vt__10J3DPEBlock@ha
/* 80083548 00080488  38 03 16 08 */	addi r0, r3, __vt__10J3DPEBlock@l
/* 8008354C 0008048C  90 1F 00 00 */	stw r0, 0(r31)
.L_80083550:
/* 80083550 00080490  7C 80 07 35 */	extsh. r0, r4
/* 80083554 00080494  40 81 00 0C */	ble .L_80083560
/* 80083558 00080498  7F E3 FB 78 */	mr r3, r31
/* 8008355C 0008049C  4B FA 0B 59 */	bl __dl__FPv
.L_80083560:
/* 80083560 000804A0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80083564 000804A4  7F E3 FB 78 */	mr r3, r31
/* 80083568 000804A8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8008356C 000804AC  7C 08 03 A6 */	mtlr r0
/* 80083570 000804B0  38 21 00 10 */	addi r1, r1, 0x10
/* 80083574 000804B4  4E 80 00 20 */	blr 
.endfn __dt__13J3DPEBlockOpaFv

.fn getType__15J3DIndBlockFullFv, weak
/* 80083578 000804B8  3C 60 49 42 */	lis r3, 0x49424C46@ha
/* 8008357C 000804BC  38 63 4C 46 */	addi r3, r3, 0x49424C46@l
/* 80083580 000804C0  4E 80 00 20 */	blr 
.endfn getType__15J3DIndBlockFullFv

.fn setIndTexStageNum__15J3DIndBlockFullFUc, weak
/* 80083584 000804C4  98 83 00 04 */	stb r4, 4(r3)
/* 80083588 000804C8  4E 80 00 20 */	blr 
.endfn setIndTexStageNum__15J3DIndBlockFullFUc

.fn getIndTexStageNum__15J3DIndBlockFullCFv, weak
/* 8008358C 000804CC  88 63 00 04 */	lbz r3, 4(r3)
/* 80083590 000804D0  4E 80 00 20 */	blr 
.endfn getIndTexStageNum__15J3DIndBlockFullCFv

.fn setIndTexOrder__15J3DIndBlockFullFUl14J3DIndTexOrder, weak
/* 80083594 000804D4  54 80 10 3A */	slwi r0, r4, 2
/* 80083598 000804D8  88 85 00 00 */	lbz r4, 0(r5)
/* 8008359C 000804DC  7C 63 02 14 */	add r3, r3, r0
/* 800835A0 000804E0  88 05 00 01 */	lbz r0, 1(r5)
/* 800835A4 000804E4  98 83 00 05 */	stb r4, 5(r3)
/* 800835A8 000804E8  98 03 00 06 */	stb r0, 6(r3)
/* 800835AC 000804EC  4E 80 00 20 */	blr 
.endfn setIndTexOrder__15J3DIndBlockFullFUl14J3DIndTexOrder

.fn setIndTexOrder__15J3DIndBlockFullFUlPC14J3DIndTexOrder, weak
/* 800835B0 000804F0  54 80 10 3A */	slwi r0, r4, 2
/* 800835B4 000804F4  88 85 00 00 */	lbz r4, 0(r5)
/* 800835B8 000804F8  7C 63 02 14 */	add r3, r3, r0
/* 800835BC 000804FC  88 05 00 01 */	lbz r0, 1(r5)
/* 800835C0 00080500  98 83 00 05 */	stb r4, 5(r3)
/* 800835C4 00080504  98 03 00 06 */	stb r0, 6(r3)
/* 800835C8 00080508  4E 80 00 20 */	blr 
.endfn setIndTexOrder__15J3DIndBlockFullFUlPC14J3DIndTexOrder

.fn getIndTexOrder__15J3DIndBlockFullFUl, weak
/* 800835CC 0008050C  54 84 10 3A */	slwi r4, r4, 2
/* 800835D0 00080510  7C 60 1B 78 */	mr r0, r3
/* 800835D4 00080514  38 64 00 05 */	addi r3, r4, 5
/* 800835D8 00080518  7C 60 1A 14 */	add r3, r0, r3
/* 800835DC 0008051C  4E 80 00 20 */	blr 
.endfn getIndTexOrder__15J3DIndBlockFullFUl

.fn setIndTexMtx__15J3DIndBlockFullFUl12J3DIndTexMtx, weak
/* 800835E0 00080520  1C 04 00 1C */	mulli r0, r4, 0x1c
/* 800835E4 00080524  C0 45 00 00 */	lfs f2, 0(r5)
/* 800835E8 00080528  C0 25 00 04 */	lfs f1, 4(r5)
/* 800835EC 0008052C  C0 05 00 08 */	lfs f0, 8(r5)
/* 800835F0 00080530  7C 63 02 14 */	add r3, r3, r0
/* 800835F4 00080534  88 05 00 18 */	lbz r0, 0x18(r5)
/* 800835F8 00080538  D0 43 00 18 */	stfs f2, 0x18(r3)
/* 800835FC 0008053C  C0 45 00 0C */	lfs f2, 0xc(r5)
/* 80083600 00080540  D0 23 00 1C */	stfs f1, 0x1c(r3)
/* 80083604 00080544  C0 25 00 10 */	lfs f1, 0x10(r5)
/* 80083608 00080548  D0 03 00 20 */	stfs f0, 0x20(r3)
/* 8008360C 0008054C  C0 05 00 14 */	lfs f0, 0x14(r5)
/* 80083610 00080550  D0 43 00 24 */	stfs f2, 0x24(r3)
/* 80083614 00080554  D0 23 00 28 */	stfs f1, 0x28(r3)
/* 80083618 00080558  D0 03 00 2C */	stfs f0, 0x2c(r3)
/* 8008361C 0008055C  98 03 00 30 */	stb r0, 0x30(r3)
/* 80083620 00080560  4E 80 00 20 */	blr 
.endfn setIndTexMtx__15J3DIndBlockFullFUl12J3DIndTexMtx

.fn setIndTexMtx__15J3DIndBlockFullFUlPC12J3DIndTexMtx, weak
/* 80083624 00080564  1C 04 00 1C */	mulli r0, r4, 0x1c
/* 80083628 00080568  C0 45 00 00 */	lfs f2, 0(r5)
/* 8008362C 0008056C  C0 25 00 04 */	lfs f1, 4(r5)
/* 80083630 00080570  C0 05 00 08 */	lfs f0, 8(r5)
/* 80083634 00080574  7C 63 02 14 */	add r3, r3, r0
/* 80083638 00080578  88 05 00 18 */	lbz r0, 0x18(r5)
/* 8008363C 0008057C  D0 43 00 18 */	stfs f2, 0x18(r3)
/* 80083640 00080580  C0 45 00 0C */	lfs f2, 0xc(r5)
/* 80083644 00080584  D0 23 00 1C */	stfs f1, 0x1c(r3)
/* 80083648 00080588  C0 25 00 10 */	lfs f1, 0x10(r5)
/* 8008364C 0008058C  D0 03 00 20 */	stfs f0, 0x20(r3)
/* 80083650 00080590  C0 05 00 14 */	lfs f0, 0x14(r5)
/* 80083654 00080594  D0 43 00 24 */	stfs f2, 0x24(r3)
/* 80083658 00080598  D0 23 00 28 */	stfs f1, 0x28(r3)
/* 8008365C 0008059C  D0 03 00 2C */	stfs f0, 0x2c(r3)
/* 80083660 000805A0  98 03 00 30 */	stb r0, 0x30(r3)
/* 80083664 000805A4  4E 80 00 20 */	blr 
.endfn setIndTexMtx__15J3DIndBlockFullFUlPC12J3DIndTexMtx

.fn getIndTexMtx__15J3DIndBlockFullFUl, weak
/* 80083668 000805A8  1C 84 00 1C */	mulli r4, r4, 0x1c
/* 8008366C 000805AC  7C 60 1B 78 */	mr r0, r3
/* 80083670 000805B0  38 64 00 18 */	addi r3, r4, 0x18
/* 80083674 000805B4  7C 60 1A 14 */	add r3, r0, r3
/* 80083678 000805B8  4E 80 00 20 */	blr 
.endfn getIndTexMtx__15J3DIndBlockFullFUl

.fn setIndTexCoordScale__15J3DIndBlockFullFUl19J3DIndTexCoordScale, weak
/* 8008367C 000805BC  54 80 10 3A */	slwi r0, r4, 2
/* 80083680 000805C0  88 85 00 00 */	lbz r4, 0(r5)
/* 80083684 000805C4  7C 63 02 14 */	add r3, r3, r0
/* 80083688 000805C8  88 05 00 01 */	lbz r0, 1(r5)
/* 8008368C 000805CC  98 83 00 6C */	stb r4, 0x6c(r3)
/* 80083690 000805D0  98 03 00 6D */	stb r0, 0x6d(r3)
/* 80083694 000805D4  4E 80 00 20 */	blr 
.endfn setIndTexCoordScale__15J3DIndBlockFullFUl19J3DIndTexCoordScale

.fn setIndTexCoordScale__15J3DIndBlockFullFUlPC19J3DIndTexCoordScale, weak
/* 80083698 000805D8  54 80 10 3A */	slwi r0, r4, 2
/* 8008369C 000805DC  88 85 00 00 */	lbz r4, 0(r5)
/* 800836A0 000805E0  7C 63 02 14 */	add r3, r3, r0
/* 800836A4 000805E4  88 05 00 01 */	lbz r0, 1(r5)
/* 800836A8 000805E8  98 83 00 6C */	stb r4, 0x6c(r3)
/* 800836AC 000805EC  98 03 00 6D */	stb r0, 0x6d(r3)
/* 800836B0 000805F0  4E 80 00 20 */	blr 
.endfn setIndTexCoordScale__15J3DIndBlockFullFUlPC19J3DIndTexCoordScale

.fn getIndTexCoordScale__15J3DIndBlockFullFUl, weak
/* 800836B4 000805F4  54 84 10 3A */	slwi r4, r4, 2
/* 800836B8 000805F8  7C 60 1B 78 */	mr r0, r3
/* 800836BC 000805FC  38 64 00 6C */	addi r3, r4, 0x6c
/* 800836C0 00080600  7C 60 1A 14 */	add r3, r0, r3
/* 800836C4 00080604  4E 80 00 20 */	blr 
.endfn getIndTexCoordScale__15J3DIndBlockFullFUl

.fn __dt__15J3DIndBlockFullFv, weak
/* 800836C8 00080608  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800836CC 0008060C  7C 08 02 A6 */	mflr r0
/* 800836D0 00080610  90 01 00 14 */	stw r0, 0x14(r1)
/* 800836D4 00080614  93 E1 00 0C */	stw r31, 0xc(r1)
/* 800836D8 00080618  7C 9F 23 78 */	mr r31, r4
/* 800836DC 0008061C  93 C1 00 08 */	stw r30, 8(r1)
/* 800836E0 00080620  7C 7E 1B 79 */	or. r30, r3, r3
/* 800836E4 00080624  41 82 00 64 */	beq .L_80083748
/* 800836E8 00080628  3C 60 80 4A */	lis r3, __vt__15J3DIndBlockFull@ha
/* 800836EC 0008062C  3C 80 80 06 */	lis r4, __dt__19J3DIndTexCoordScaleFv@ha
/* 800836F0 00080630  38 03 2A BC */	addi r0, r3, __vt__15J3DIndBlockFull@l
/* 800836F4 00080634  38 A0 00 04 */	li r5, 4
/* 800836F8 00080638  90 1E 00 00 */	stw r0, 0(r30)
/* 800836FC 0008063C  38 7E 00 6C */	addi r3, r30, 0x6c
/* 80083700 00080640  38 84 22 64 */	addi r4, r4, __dt__19J3DIndTexCoordScaleFv@l
/* 80083704 00080644  38 C0 00 04 */	li r6, 4
/* 80083708 00080648  48 03 E0 BD */	bl __destroy_arr
/* 8008370C 0008064C  3C 80 80 06 */	lis r4, __dt__12J3DIndTexMtxFv@ha
/* 80083710 00080650  38 7E 00 18 */	addi r3, r30, 0x18
/* 80083714 00080654  38 84 22 B8 */	addi r4, r4, __dt__12J3DIndTexMtxFv@l
/* 80083718 00080658  38 A0 00 1C */	li r5, 0x1c
/* 8008371C 0008065C  38 C0 00 03 */	li r6, 3
/* 80083720 00080660  48 03 E0 A5 */	bl __destroy_arr
/* 80083724 00080664  28 1E 00 00 */	cmplwi r30, 0
/* 80083728 00080668  41 82 00 10 */	beq .L_80083738
/* 8008372C 0008066C  3C 60 80 4A */	lis r3, __vt__11J3DIndBlock@ha
/* 80083730 00080670  38 03 16 D0 */	addi r0, r3, __vt__11J3DIndBlock@l
/* 80083734 00080674  90 1E 00 00 */	stw r0, 0(r30)
.L_80083738:
/* 80083738 00080678  7F E0 07 35 */	extsh. r0, r31
/* 8008373C 0008067C  40 81 00 0C */	ble .L_80083748
/* 80083740 00080680  7F C3 F3 78 */	mr r3, r30
/* 80083744 00080684  4B FA 09 71 */	bl __dl__FPv
.L_80083748:
/* 80083748 00080688  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8008374C 0008068C  7F C3 F3 78 */	mr r3, r30
/* 80083750 00080690  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80083754 00080694  83 C1 00 08 */	lwz r30, 8(r1)
/* 80083758 00080698  7C 08 03 A6 */	mtlr r0
/* 8008375C 0008069C  38 21 00 10 */	addi r1, r1, 0x10
/* 80083760 000806A0  4E 80 00 20 */	blr 
.endfn __dt__15J3DIndBlockFullFv

.fn getType__21J3DColorBlockLightOffFv, weak
/* 80083764 000806A4  3C 60 43 4C */	lis r3, 0x434C4F46@ha
/* 80083768 000806A8  38 63 4F 46 */	addi r3, r3, 0x434C4F46@l
/* 8008376C 000806AC  4E 80 00 20 */	blr 
.endfn getType__21J3DColorBlockLightOffFv

.fn __sinit_J3DMatBlock_cpp, local
/* 80083770 000806B0  80 6D 80 B8 */	lwz r3, SizeOfLoadColorChans@sda21(r13)
/* 80083774 000806B4  80 0D 80 B4 */	lwz r0, SizeOfLoadAmbColors@sda21(r13)
/* 80083778 000806B8  80 8D 80 B0 */	lwz r4, SizeOfLoadMatColors@sda21(r13)
/* 8008377C 000806BC  7C 00 1A 14 */	add r0, r0, r3
/* 80083780 000806C0  7C 64 1A 14 */	add r3, r4, r3
/* 80083784 000806C4  7C 04 02 14 */	add r0, r4, r0
/* 80083788 000806C8  90 6D 89 98 */	stw r3, SizeOfJ3DColorBlockLightOffLoad@sda21(r13)
/* 8008378C 000806CC  90 0D 89 9C */	stw r0, SizeOfJ3DColorBlockAmbientOnLoad@sda21(r13)
/* 80083790 000806D0  4E 80 00 20 */	blr 
.endfn __sinit_J3DMatBlock_cpp
