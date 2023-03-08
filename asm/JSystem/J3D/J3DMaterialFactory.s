.include "macros.inc"
.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.obj __vt__14J3DPEBlockNull, weak
	.4byte 0
	.4byte 0
	.4byte reset__10J3DPEBlockFP10J3DPEBlock
	.4byte load__14J3DPEBlockNullFv
	.4byte patch__10J3DPEBlockFv
	.4byte diff__10J3DPEBlockFUl
	.4byte diffFog__10J3DPEBlockFv
	.4byte diffBlend__10J3DPEBlockFv
	.4byte countDLSize__10J3DPEBlockFv
	.4byte getType__14J3DPEBlockNullFv
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
	.4byte __dt__14J3DPEBlockNullFv
.endobj __vt__14J3DPEBlockNull
.obj __vt__15J3DTevBlockNull, weak
	.4byte 0
	.4byte 0
	.4byte reset__15J3DTevBlockNullFP11J3DTevBlock
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
	.4byte ptrToIndex__15J3DTevBlockNullFv
	.4byte indexToPtr__15J3DTevBlockNullFv
	.4byte getType__15J3DTevBlockNullFv
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
	.4byte __dt__15J3DTevBlockNullFv
.endobj __vt__15J3DTevBlockNull
.obj __vt__18J3DTexGenBlockNull, weak
	.4byte 0
	.4byte 0
	.4byte reset__14J3DTexGenBlockFP14J3DTexGenBlock
	.4byte calc__18J3DTexGenBlockNullFPA4_Cf
	.4byte calcWithoutViewMtx__18J3DTexGenBlockNullFPA4_Cf
	.4byte calcPostTexMtx__18J3DTexGenBlockNullFPA4_Cf
	.4byte calcPostTexMtxWithoutViewMtx__18J3DTexGenBlockNullFPA4_Cf
	.4byte load__18J3DTexGenBlockNullFv
	.4byte patch__18J3DTexGenBlockNullFv
	.4byte diff__18J3DTexGenBlockNullFUl
	.4byte diffTexMtx__18J3DTexGenBlockNullFv
	.4byte diffTexGen__18J3DTexGenBlockNullFv
	.4byte countDLSize__14J3DTexGenBlockFv
	.4byte getType__18J3DTexGenBlockNullFv
	.4byte setTexGenNum__14J3DTexGenBlockFPCUl
	.4byte setTexGenNum__14J3DTexGenBlockFUl
	.4byte getTexGenNum__14J3DTexGenBlockCFv
	.4byte setTexCoord__14J3DTexGenBlockFUlPC11J3DTexCoord
	.4byte getTexCoord__14J3DTexGenBlockFUl
	.4byte setTexMtx__14J3DTexGenBlockFUlP9J3DTexMtx
	.4byte getTexMtx__14J3DTexGenBlockFUl
	.4byte setNBTScale__14J3DTexGenBlockFPC11J3DNBTScale
	.4byte setNBTScale__14J3DTexGenBlockF11J3DNBTScale
	.4byte getNBTScale__14J3DTexGenBlockFv
	.4byte getTexMtxOffset__14J3DTexGenBlockCFv
	.4byte setTexMtxOffset__14J3DTexGenBlockFUl
	.4byte __dt__18J3DTexGenBlockNullFv
.endobj __vt__18J3DTexGenBlockNull
.obj __vt__17J3DColorBlockNull, weak
	.4byte 0
	.4byte 0
	.4byte load__13J3DColorBlockFv
	.4byte reset__13J3DColorBlockFP13J3DColorBlock
	.4byte patch__13J3DColorBlockFv
	.4byte patchMatColor__13J3DColorBlockFv
	.4byte patchLight__13J3DColorBlockFv
	.4byte diff__13J3DColorBlockFUl
	.4byte diffMatColor__13J3DColorBlockFv
	.4byte diffLight__13J3DColorBlockFv
	.4byte countDLSize__13J3DColorBlockFv
	.4byte getType__17J3DColorBlockNullFv
	.4byte setMatColor__13J3DColorBlockFUlPC10J3DGXColor
	.4byte setMatColor__13J3DColorBlockFUl10J3DGXColor
	.4byte getMatColor__13J3DColorBlockFUl
	.4byte setAmbColor__13J3DColorBlockFUlPC10J3DGXColor
	.4byte setAmbColor__13J3DColorBlockFUl10J3DGXColor
	.4byte getAmbColor__13J3DColorBlockFUl
	.4byte setColorChanNum__13J3DColorBlockFUc
	.4byte setColorChanNum__13J3DColorBlockFPCUc
	.4byte getColorChanNum__13J3DColorBlockCFv
	.4byte setColorChan__13J3DColorBlockFUlRC12J3DColorChan
	.4byte setColorChan__13J3DColorBlockFUlPC12J3DColorChan
	.4byte getColorChan__13J3DColorBlockFUl
	.4byte setLight__13J3DColorBlockFUlP11J3DLightObj
	.4byte getLight__13J3DColorBlockFUl
	.4byte setCullMode__13J3DColorBlockFPCUc
	.4byte setCullMode__13J3DColorBlockFUc
	.4byte getCullMode__13J3DColorBlockCFv
	.4byte getMatColorOffset__13J3DColorBlockCFv
	.4byte getColorChanOffset__13J3DColorBlockCFv
	.4byte setMatColorOffset__13J3DColorBlockFUl
	.4byte setColorChanOffset__13J3DColorBlockFUl
	.4byte __dt__17J3DColorBlockNullFv
.endobj __vt__17J3DColorBlockNull

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
.obj lbl_80516A80, local
	.4byte 0xFFFFFFFF
.endobj lbl_80516A80
.obj lbl_80516A84, local
	.4byte 0x32323232
.endobj lbl_80516A84
.obj lbl_80516A88, local
	.4byte 0xFFFFFFFF
.endobj lbl_80516A88

.section .sbss2, "", @nobits # 0x80520E40 - 0x80520ED8
.obj lbl_80520E48, local
	.skip 0x8
.endobj lbl_80520E48

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.fn __ct__18J3DMaterialFactoryFRC16J3DMaterialBlock, global
/* 8006C3A4 000692E4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8006C3A8 000692E8  7C 08 02 A6 */	mflr r0
/* 8006C3AC 000692EC  90 01 00 14 */	stw r0, 0x14(r1)
/* 8006C3B0 000692F0  A0 04 00 08 */	lhz r0, 8(r4)
/* 8006C3B4 000692F4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8006C3B8 000692F8  7C 9F 23 78 */	mr r31, r4
/* 8006C3BC 000692FC  80 84 00 0C */	lwz r4, 0xc(r4)
/* 8006C3C0 00069300  93 C1 00 08 */	stw r30, 8(r1)
/* 8006C3C4 00069304  7C 7E 1B 78 */	mr r30, r3
/* 8006C3C8 00069308  7F E3 FB 78 */	mr r3, r31
/* 8006C3CC 0006930C  B0 1E 00 00 */	sth r0, 0(r30)
/* 8006C3D0 00069310  48 00 34 A1 */	bl "JSUConvertOffsetToPtr<19J3DMaterialInitData>__FPCvPCv"
/* 8006C3D4 00069314  90 7E 00 04 */	stw r3, 4(r30)
/* 8006C3D8 00069318  7F E3 FB 78 */	mr r3, r31
/* 8006C3DC 0006931C  80 9F 00 10 */	lwz r4, 0x10(r31)
/* 8006C3E0 00069320  4B FD D0 A5 */	bl "JSUConvertOffsetToPtr<Us>__FPCvPCv"
/* 8006C3E4 00069324  80 9F 00 18 */	lwz r4, 0x18(r31)
/* 8006C3E8 00069328  90 7E 00 08 */	stw r3, 8(r30)
/* 8006C3EC 0006932C  28 04 00 00 */	cmplwi r4, 0
/* 8006C3F0 00069330  41 82 00 24 */	beq .L_8006C414
/* 8006C3F4 00069334  80 1F 00 14 */	lwz r0, 0x14(r31)
/* 8006C3F8 00069338  7C 00 20 50 */	subf r0, r0, r4
/* 8006C3FC 0006933C  28 00 00 04 */	cmplwi r0, 4
/* 8006C400 00069340  40 81 00 14 */	ble .L_8006C414
/* 8006C404 00069344  7F E3 FB 78 */	mr r3, r31
/* 8006C408 00069348  48 00 34 51 */	bl "JSUConvertOffsetToPtr<14J3DIndInitData>__FPCvPCv"
/* 8006C40C 0006934C  90 7E 00 0C */	stw r3, 0xc(r30)
/* 8006C410 00069350  48 00 00 0C */	b .L_8006C41C
.L_8006C414:
/* 8006C414 00069354  38 00 00 00 */	li r0, 0
/* 8006C418 00069358  90 1E 00 0C */	stw r0, 0xc(r30)
.L_8006C41C:
/* 8006C41C 0006935C  80 9F 00 1C */	lwz r4, 0x1c(r31)
/* 8006C420 00069360  7F E3 FB 78 */	mr r3, r31
/* 8006C424 00069364  4B FE 86 85 */	bl "JSUConvertOffsetToPtr<11_GXCullMode>__FPCvPCv"
/* 8006C428 00069368  90 7E 00 3C */	stw r3, 0x3c(r30)
/* 8006C42C 0006936C  7F E3 FB 78 */	mr r3, r31
/* 8006C430 00069370  80 9F 00 20 */	lwz r4, 0x20(r31)
/* 8006C434 00069374  4B FE 86 5D */	bl "JSUConvertOffsetToPtr<8_GXColor>__FPCvPCv"
/* 8006C438 00069378  90 7E 00 10 */	stw r3, 0x10(r30)
/* 8006C43C 0006937C  7F E3 FB 78 */	mr r3, r31
/* 8006C440 00069380  80 9F 00 24 */	lwz r4, 0x24(r31)
/* 8006C444 00069384  4B FD D0 11 */	bl "JSUConvertOffsetToPtr<Uc>__FPCvPCv"
/* 8006C448 00069388  90 7E 00 14 */	stw r3, 0x14(r30)
/* 8006C44C 0006938C  7F E3 FB 78 */	mr r3, r31
/* 8006C450 00069390  80 9F 00 28 */	lwz r4, 0x28(r31)
/* 8006C454 00069394  48 00 33 ED */	bl "JSUConvertOffsetToPtr<16J3DColorChanInfo>__FPCvPCv"
/* 8006C458 00069398  90 7E 00 18 */	stw r3, 0x18(r30)
/* 8006C45C 0006939C  7F E3 FB 78 */	mr r3, r31
/* 8006C460 000693A0  80 9F 00 2C */	lwz r4, 0x2c(r31)
/* 8006C464 000693A4  4B FE 86 2D */	bl "JSUConvertOffsetToPtr<8_GXColor>__FPCvPCv"
/* 8006C468 000693A8  90 7E 00 1C */	stw r3, 0x1c(r30)
/* 8006C46C 000693AC  7F E3 FB 78 */	mr r3, r31
/* 8006C470 000693B0  80 9F 00 30 */	lwz r4, 0x30(r31)
/* 8006C474 000693B4  48 00 33 B5 */	bl "JSUConvertOffsetToPtr<12J3DLightInfo>__FPCvPCv"
/* 8006C478 000693B8  90 7E 00 20 */	stw r3, 0x20(r30)
/* 8006C47C 000693BC  7F E3 FB 78 */	mr r3, r31
/* 8006C480 000693C0  80 9F 00 34 */	lwz r4, 0x34(r31)
/* 8006C484 000693C4  4B FD CF D1 */	bl "JSUConvertOffsetToPtr<Uc>__FPCvPCv"
/* 8006C488 000693C8  90 7E 00 24 */	stw r3, 0x24(r30)
/* 8006C48C 000693CC  7F E3 FB 78 */	mr r3, r31
/* 8006C490 000693D0  80 9F 00 38 */	lwz r4, 0x38(r31)
/* 8006C494 000693D4  48 00 33 7D */	bl "JSUConvertOffsetToPtr<15J3DTexCoordInfo>__FPCvPCv"
/* 8006C498 000693D8  90 7E 00 28 */	stw r3, 0x28(r30)
/* 8006C49C 000693DC  7F E3 FB 78 */	mr r3, r31
/* 8006C4A0 000693E0  80 9F 00 3C */	lwz r4, 0x3c(r31)
/* 8006C4A4 000693E4  48 00 33 55 */	bl "JSUConvertOffsetToPtr<16J3DTexCoord2Info>__FPCvPCv"
/* 8006C4A8 000693E8  90 7E 00 2C */	stw r3, 0x2c(r30)
/* 8006C4AC 000693EC  7F E3 FB 78 */	mr r3, r31
/* 8006C4B0 000693F0  80 9F 00 40 */	lwz r4, 0x40(r31)
/* 8006C4B4 000693F4  48 00 33 2D */	bl "JSUConvertOffsetToPtr<13J3DTexMtxInfo>__FPCvPCv"
/* 8006C4B8 000693F8  90 7E 00 30 */	stw r3, 0x30(r30)
/* 8006C4BC 000693FC  7F E3 FB 78 */	mr r3, r31
/* 8006C4C0 00069400  80 9F 00 44 */	lwz r4, 0x44(r31)
/* 8006C4C4 00069404  48 00 33 1D */	bl "JSUConvertOffsetToPtr<13J3DTexMtxInfo>__FPCvPCv"
/* 8006C4C8 00069408  90 7E 00 34 */	stw r3, 0x34(r30)
/* 8006C4CC 0006940C  7F E3 FB 78 */	mr r3, r31
/* 8006C4D0 00069410  80 9F 00 48 */	lwz r4, 0x48(r31)
/* 8006C4D4 00069414  4B FD CF B1 */	bl "JSUConvertOffsetToPtr<Us>__FPCvPCv"
/* 8006C4D8 00069418  90 7E 00 38 */	stw r3, 0x38(r30)
/* 8006C4DC 0006941C  7F E3 FB 78 */	mr r3, r31
/* 8006C4E0 00069420  80 9F 00 4C */	lwz r4, 0x4c(r31)
/* 8006C4E4 00069424  48 00 32 E5 */	bl "JSUConvertOffsetToPtr<15J3DTevOrderInfo>__FPCvPCv"
/* 8006C4E8 00069428  90 7E 00 40 */	stw r3, 0x40(r30)
/* 8006C4EC 0006942C  7F E3 FB 78 */	mr r3, r31
/* 8006C4F0 00069430  80 9F 00 50 */	lwz r4, 0x50(r31)
/* 8006C4F4 00069434  4B FE 85 25 */	bl "JSUConvertOffsetToPtr<11_GXColorS10>__FPCvPCv"
/* 8006C4F8 00069438  90 7E 00 44 */	stw r3, 0x44(r30)
/* 8006C4FC 0006943C  7F E3 FB 78 */	mr r3, r31
/* 8006C500 00069440  80 9F 00 54 */	lwz r4, 0x54(r31)
/* 8006C504 00069444  4B FE 85 8D */	bl "JSUConvertOffsetToPtr<8_GXColor>__FPCvPCv"
/* 8006C508 00069448  90 7E 00 48 */	stw r3, 0x48(r30)
/* 8006C50C 0006944C  7F E3 FB 78 */	mr r3, r31
/* 8006C510 00069450  80 9F 00 58 */	lwz r4, 0x58(r31)
/* 8006C514 00069454  4B FD CF 41 */	bl "JSUConvertOffsetToPtr<Uc>__FPCvPCv"
/* 8006C518 00069458  90 7E 00 4C */	stw r3, 0x4c(r30)
/* 8006C51C 0006945C  7F E3 FB 78 */	mr r3, r31
/* 8006C520 00069460  80 9F 00 5C */	lwz r4, 0x5c(r31)
/* 8006C524 00069464  48 00 32 8D */	bl "JSUConvertOffsetToPtr<15J3DTevStageInfo>__FPCvPCv"
/* 8006C528 00069468  90 7E 00 50 */	stw r3, 0x50(r30)
/* 8006C52C 0006946C  7F E3 FB 78 */	mr r3, r31
/* 8006C530 00069470  80 9F 00 60 */	lwz r4, 0x60(r31)
/* 8006C534 00069474  48 00 32 65 */	bl "JSUConvertOffsetToPtr<18J3DTevSwapModeInfo>__FPCvPCv"
/* 8006C538 00069478  90 7E 00 54 */	stw r3, 0x54(r30)
/* 8006C53C 0006947C  7F E3 FB 78 */	mr r3, r31
/* 8006C540 00069480  80 9F 00 64 */	lwz r4, 0x64(r31)
/* 8006C544 00069484  48 00 32 3D */	bl "JSUConvertOffsetToPtr<23J3DTevSwapModeTableInfo>__FPCvPCv"
/* 8006C548 00069488  90 7E 00 58 */	stw r3, 0x58(r30)
/* 8006C54C 0006948C  7F E3 FB 78 */	mr r3, r31
/* 8006C550 00069490  80 9F 00 68 */	lwz r4, 0x68(r31)
/* 8006C554 00069494  48 00 32 15 */	bl "JSUConvertOffsetToPtr<10J3DFogInfo>__FPCvPCv"
/* 8006C558 00069498  90 7E 00 5C */	stw r3, 0x5c(r30)
/* 8006C55C 0006949C  7F E3 FB 78 */	mr r3, r31
/* 8006C560 000694A0  80 9F 00 6C */	lwz r4, 0x6c(r31)
/* 8006C564 000694A4  48 00 31 ED */	bl "JSUConvertOffsetToPtr<16J3DAlphaCompInfo>__FPCvPCv"
/* 8006C568 000694A8  90 7E 00 60 */	stw r3, 0x60(r30)
/* 8006C56C 000694AC  7F E3 FB 78 */	mr r3, r31
/* 8006C570 000694B0  80 9F 00 70 */	lwz r4, 0x70(r31)
/* 8006C574 000694B4  48 00 31 C5 */	bl "JSUConvertOffsetToPtr<12J3DBlendInfo>__FPCvPCv"
/* 8006C578 000694B8  90 7E 00 64 */	stw r3, 0x64(r30)
/* 8006C57C 000694BC  7F E3 FB 78 */	mr r3, r31
/* 8006C580 000694C0  80 9F 00 74 */	lwz r4, 0x74(r31)
/* 8006C584 000694C4  48 00 31 9D */	bl "JSUConvertOffsetToPtr<12J3DZModeInfo>__FPCvPCv"
/* 8006C588 000694C8  90 7E 00 68 */	stw r3, 0x68(r30)
/* 8006C58C 000694CC  7F E3 FB 78 */	mr r3, r31
/* 8006C590 000694D0  80 9F 00 78 */	lwz r4, 0x78(r31)
/* 8006C594 000694D4  4B FD CE C1 */	bl "JSUConvertOffsetToPtr<Uc>__FPCvPCv"
/* 8006C598 000694D8  90 7E 00 6C */	stw r3, 0x6c(r30)
/* 8006C59C 000694DC  7F E3 FB 78 */	mr r3, r31
/* 8006C5A0 000694E0  80 9F 00 7C */	lwz r4, 0x7c(r31)
/* 8006C5A4 000694E4  4B FD CE B1 */	bl "JSUConvertOffsetToPtr<Uc>__FPCvPCv"
/* 8006C5A8 000694E8  90 7E 00 70 */	stw r3, 0x70(r30)
/* 8006C5AC 000694EC  7F E3 FB 78 */	mr r3, r31
/* 8006C5B0 000694F0  80 9F 00 80 */	lwz r4, 0x80(r31)
/* 8006C5B4 000694F4  48 00 31 55 */	bl "JSUConvertOffsetToPtr<15J3DNBTScaleInfo>__FPCvPCv"
/* 8006C5B8 000694F8  90 7E 00 74 */	stw r3, 0x74(r30)
/* 8006C5BC 000694FC  38 00 00 00 */	li r0, 0
/* 8006C5C0 00069500  7F C3 F3 78 */	mr r3, r30
/* 8006C5C4 00069504  90 1E 00 78 */	stw r0, 0x78(r30)
/* 8006C5C8 00069508  90 1E 00 7C */	stw r0, 0x7c(r30)
/* 8006C5CC 0006950C  90 1E 00 80 */	stw r0, 0x80(r30)
/* 8006C5D0 00069510  90 1E 00 84 */	stw r0, 0x84(r30)
/* 8006C5D4 00069514  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8006C5D8 00069518  83 C1 00 08 */	lwz r30, 8(r1)
/* 8006C5DC 0006951C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8006C5E0 00069520  7C 08 03 A6 */	mtlr r0
/* 8006C5E4 00069524  38 21 00 10 */	addi r1, r1, 0x10
/* 8006C5E8 00069528  4E 80 00 20 */	blr 
.endfn __ct__18J3DMaterialFactoryFRC16J3DMaterialBlock

.fn __ct__18J3DMaterialFactoryFRC18J3DMaterialDLBlock, global
/* 8006C5EC 0006952C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8006C5F0 00069530  7C 08 02 A6 */	mflr r0
/* 8006C5F4 00069534  A0 A4 00 08 */	lhz r5, 8(r4)
/* 8006C5F8 00069538  90 01 00 14 */	stw r0, 0x14(r1)
/* 8006C5FC 0006953C  38 00 00 00 */	li r0, 0
/* 8006C600 00069540  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8006C604 00069544  7C 9F 23 78 */	mr r31, r4
/* 8006C608 00069548  80 84 00 0C */	lwz r4, 0xc(r4)
/* 8006C60C 0006954C  93 C1 00 08 */	stw r30, 8(r1)
/* 8006C610 00069550  7C 7E 1B 78 */	mr r30, r3
/* 8006C614 00069554  7F E3 FB 78 */	mr r3, r31
/* 8006C618 00069558  B0 BE 00 00 */	sth r5, 0(r30)
/* 8006C61C 0006955C  90 1E 00 04 */	stw r0, 4(r30)
/* 8006C620 00069560  48 00 30 D1 */	bl "JSUConvertOffsetToPtr<18J3DDisplayListInit>__FPCvPCv"
/* 8006C624 00069564  90 7E 00 78 */	stw r3, 0x78(r30)
/* 8006C628 00069568  7F E3 FB 78 */	mr r3, r31
/* 8006C62C 0006956C  80 9F 00 10 */	lwz r4, 0x10(r31)
/* 8006C630 00069570  48 00 30 A9 */	bl "JSUConvertOffsetToPtr<15J3DPatchingInfo>__FPCvPCv"
/* 8006C634 00069574  90 7E 00 7C */	stw r3, 0x7c(r30)
/* 8006C638 00069578  7F E3 FB 78 */	mr r3, r31
/* 8006C63C 0006957C  80 9F 00 14 */	lwz r4, 0x14(r31)
/* 8006C640 00069580  48 00 30 81 */	bl "JSUConvertOffsetToPtr<17J3DCurrentMtxInfo>__FPCvPCv"
/* 8006C644 00069584  90 7E 00 80 */	stw r3, 0x80(r30)
/* 8006C648 00069588  7F E3 FB 78 */	mr r3, r31
/* 8006C64C 0006958C  80 9F 00 18 */	lwz r4, 0x18(r31)
/* 8006C650 00069590  4B FD CE 05 */	bl "JSUConvertOffsetToPtr<Uc>__FPCvPCv"
/* 8006C654 00069594  90 7E 00 84 */	stw r3, 0x84(r30)
/* 8006C658 00069598  7F C3 F3 78 */	mr r3, r30
/* 8006C65C 0006959C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8006C660 000695A0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8006C664 000695A4  83 C1 00 08 */	lwz r30, 8(r1)
/* 8006C668 000695A8  7C 08 03 A6 */	mtlr r0
/* 8006C66C 000695AC  38 21 00 10 */	addi r1, r1, 0x10
/* 8006C670 000695B0  4E 80 00 20 */	blr 
.endfn __ct__18J3DMaterialFactoryFRC18J3DMaterialDLBlock

.fn countUniqueMaterials__18J3DMaterialFactoryFv, global
/* 8006C674 000695B4  A0 A3 00 00 */	lhz r5, 0(r3)
/* 8006C678 000695B8  38 C0 00 00 */	li r6, 0
/* 8006C67C 000695BC  38 E0 FF FF */	li r7, -1
/* 8006C680 000695C0  39 00 00 00 */	li r8, 0
/* 8006C684 000695C4  48 00 00 24 */	b .L_8006C6A8
.L_8006C688:
/* 8006C688 000695C8  80 83 00 08 */	lwz r4, 8(r3)
/* 8006C68C 000695CC  55 00 0B FC */	rlwinm r0, r8, 1, 0xf, 0x1e
/* 8006C690 000695D0  7C 04 02 2E */	lhzx r0, r4, r0
/* 8006C694 000695D4  7C 07 00 00 */	cmpw r7, r0
/* 8006C698 000695D8  40 80 00 0C */	bge .L_8006C6A4
/* 8006C69C 000695DC  7C 07 03 78 */	mr r7, r0
/* 8006C6A0 000695E0  38 C6 00 01 */	addi r6, r6, 1
.L_8006C6A4:
/* 8006C6A4 000695E4  39 08 00 01 */	addi r8, r8, 1
.L_8006C6A8:
/* 8006C6A8 000695E8  55 00 04 3E */	clrlwi r0, r8, 0x10
/* 8006C6AC 000695EC  7C 00 28 40 */	cmplw r0, r5
/* 8006C6B0 000695F0  41 80 FF D8 */	blt .L_8006C688
/* 8006C6B4 000695F4  7C C3 33 78 */	mr r3, r6
/* 8006C6B8 000695F8  4E 80 00 20 */	blr 
.endfn countUniqueMaterials__18J3DMaterialFactoryFv

.fn create__18J3DMaterialFactoryCFP11J3DMaterialQ218J3DMaterialFactory12MaterialTypeiUl, global
/* 8006C6BC 000695FC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8006C6C0 00069600  7C 08 02 A6 */	mflr r0
/* 8006C6C4 00069604  2C 05 00 01 */	cmpwi r5, 1
/* 8006C6C8 00069608  90 01 00 14 */	stw r0, 0x14(r1)
/* 8006C6CC 0006960C  41 82 00 34 */	beq .L_8006C700
/* 8006C6D0 00069610  40 80 00 10 */	bge .L_8006C6E0
/* 8006C6D4 00069614  2C 05 00 00 */	cmpwi r5, 0
/* 8006C6D8 00069618  40 80 00 14 */	bge .L_8006C6EC
/* 8006C6DC 0006961C  48 00 00 48 */	b .L_8006C724
.L_8006C6E0:
/* 8006C6E0 00069620  2C 05 00 03 */	cmpwi r5, 3
/* 8006C6E4 00069624  40 80 00 40 */	bge .L_8006C724
/* 8006C6E8 00069628  48 00 00 2C */	b .L_8006C714
.L_8006C6EC:
/* 8006C6EC 0006962C  7C C5 33 78 */	mr r5, r6
/* 8006C6F0 00069630  7C E6 3B 78 */	mr r6, r7
/* 8006C6F4 00069634  48 00 00 45 */	bl createNormalMaterial__18J3DMaterialFactoryCFP11J3DMaterialiUl
/* 8006C6F8 00069638  7C 64 1B 78 */	mr r4, r3
/* 8006C6FC 0006963C  48 00 00 28 */	b .L_8006C724
.L_8006C700:
/* 8006C700 00069640  7C C5 33 78 */	mr r5, r6
/* 8006C704 00069644  7C E6 3B 78 */	mr r6, r7
/* 8006C708 00069648  48 00 15 79 */	bl createLockedMaterial__18J3DMaterialFactoryCFP11J3DMaterialiUl
/* 8006C70C 0006964C  7C 64 1B 78 */	mr r4, r3
/* 8006C710 00069650  48 00 00 14 */	b .L_8006C724
.L_8006C714:
/* 8006C714 00069654  7C C5 33 78 */	mr r5, r6
/* 8006C718 00069658  7C E6 3B 78 */	mr r6, r7
/* 8006C71C 0006965C  48 00 0A 55 */	bl createPatchedMaterial__18J3DMaterialFactoryCFP11J3DMaterialiUl
/* 8006C720 00069660  7C 64 1B 78 */	mr r4, r3
.L_8006C724:
/* 8006C724 00069664  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8006C728 00069668  7C 83 23 78 */	mr r3, r4
/* 8006C72C 0006966C  7C 08 03 A6 */	mtlr r0
/* 8006C730 00069670  38 21 00 10 */	addi r1, r1, 0x10
/* 8006C734 00069674  4E 80 00 20 */	blr 
.endfn create__18J3DMaterialFactoryCFP11J3DMaterialQ218J3DMaterialFactory12MaterialTypeiUl

.fn createNormalMaterial__18J3DMaterialFactoryCFP11J3DMaterialiUl, global
/* 8006C738 00069678  94 21 FE E0 */	stwu r1, -0x120(r1)
/* 8006C73C 0006967C  7C 08 02 A6 */	mflr r0
/* 8006C740 00069680  90 01 01 24 */	stw r0, 0x124(r1)
/* 8006C744 00069684  80 03 00 78 */	lwz r0, 0x78(r3)
/* 8006C748 00069688  BE 61 00 EC */	stmw r19, 0xec(r1)
/* 8006C74C 0006968C  7C 7E 1B 78 */	mr r30, r3
/* 8006C750 00069690  28 00 00 00 */	cmplwi r0, 0
/* 8006C754 00069694  7C 9F 23 78 */	mr r31, r4
/* 8006C758 00069698  7C BD 2B 78 */	mr r29, r5
/* 8006C75C 0006969C  41 82 00 0C */	beq .L_8006C768
/* 8006C760 000696A0  48 00 15 21 */	bl createLockedMaterial__18J3DMaterialFactoryCFP11J3DMaterialiUl
/* 8006C764 000696A4  48 00 09 CC */	b .L_8006D130
.L_8006C768:
/* 8006C768 000696A8  80 7E 00 08 */	lwz r3, 8(r30)
/* 8006C76C 000696AC  57 BB 08 3C */	slwi r27, r29, 1
/* 8006C770 000696B0  38 A0 00 00 */	li r5, 0
/* 8006C774 000696B4  80 9E 00 04 */	lwz r4, 4(r30)
/* 8006C778 000696B8  7C 03 DA 2E */	lhzx r0, r3, r27
/* 8006C77C 000696BC  7C A3 2B 78 */	mr r3, r5
/* 8006C780 000696C0  1C 00 01 4C */	mulli r0, r0, 0x14c
/* 8006C784 000696C4  7C 84 02 14 */	add r4, r4, r0
/* 8006C788 000696C8  88 04 00 04 */	lbz r0, 4(r4)
/* 8006C78C 000696CC  28 00 00 FF */	cmplwi r0, 0xff
/* 8006C790 000696D0  41 82 00 0C */	beq .L_8006C79C
/* 8006C794 000696D4  80 7E 00 4C */	lwz r3, 0x4c(r30)
/* 8006C798 000696D8  7C 63 00 AE */	lbzx r3, r3, r0
.L_8006C79C:
/* 8006C79C 000696DC  A0 04 00 84 */	lhz r0, 0x84(r4)
/* 8006C7A0 000696E0  28 00 FF FF */	cmplwi r0, 0xffff
/* 8006C7A4 000696E4  41 82 00 08 */	beq .L_8006C7AC
/* 8006C7A8 000696E8  38 A0 00 01 */	li r5, 1
.L_8006C7AC:
/* 8006C7AC 000696EC  A0 04 00 86 */	lhz r0, 0x86(r4)
/* 8006C7B0 000696F0  28 00 FF FF */	cmplwi r0, 0xffff
/* 8006C7B4 000696F4  41 82 00 08 */	beq .L_8006C7BC
/* 8006C7B8 000696F8  38 A5 00 01 */	addi r5, r5, 1
.L_8006C7BC:
/* 8006C7BC 000696FC  A0 04 00 88 */	lhz r0, 0x88(r4)
/* 8006C7C0 00069700  28 00 FF FF */	cmplwi r0, 0xffff
/* 8006C7C4 00069704  41 82 00 08 */	beq .L_8006C7CC
/* 8006C7C8 00069708  38 A5 00 01 */	addi r5, r5, 1
.L_8006C7CC:
/* 8006C7CC 0006970C  A0 04 00 8A */	lhz r0, 0x8a(r4)
/* 8006C7D0 00069710  28 00 FF FF */	cmplwi r0, 0xffff
/* 8006C7D4 00069714  41 82 00 08 */	beq .L_8006C7DC
/* 8006C7D8 00069718  38 A5 00 01 */	addi r5, r5, 1
.L_8006C7DC:
/* 8006C7DC 0006971C  A0 04 00 8C */	lhz r0, 0x8c(r4)
/* 8006C7E0 00069720  28 00 FF FF */	cmplwi r0, 0xffff
/* 8006C7E4 00069724  41 82 00 08 */	beq .L_8006C7EC
/* 8006C7E8 00069728  38 A5 00 01 */	addi r5, r5, 1
.L_8006C7EC:
/* 8006C7EC 0006972C  A0 04 00 8E */	lhz r0, 0x8e(r4)
/* 8006C7F0 00069730  28 00 FF FF */	cmplwi r0, 0xffff
/* 8006C7F4 00069734  41 82 00 08 */	beq .L_8006C7FC
/* 8006C7F8 00069738  38 A5 00 01 */	addi r5, r5, 1
.L_8006C7FC:
/* 8006C7FC 0006973C  A0 04 00 90 */	lhz r0, 0x90(r4)
/* 8006C800 00069740  28 00 FF FF */	cmplwi r0, 0xffff
/* 8006C804 00069744  41 82 00 08 */	beq .L_8006C80C
/* 8006C808 00069748  38 A5 00 01 */	addi r5, r5, 1
.L_8006C80C:
/* 8006C80C 0006974C  A0 04 00 92 */	lhz r0, 0x92(r4)
/* 8006C810 00069750  28 00 FF FF */	cmplwi r0, 0xffff
/* 8006C814 00069754  41 82 00 08 */	beq .L_8006C81C
/* 8006C818 00069758  38 A5 00 01 */	addi r5, r5, 1
.L_8006C81C:
/* 8006C81C 0006975C  7C 03 28 40 */	cmplw r3, r5
/* 8006C820 00069760  41 82 00 1C */	beq .L_8006C83C
/* 8006C824 00069764  28 05 00 00 */	cmplwi r5, 0
/* 8006C828 00069768  41 82 00 14 */	beq .L_8006C83C
/* 8006C82C 0006976C  7C 03 28 40 */	cmplw r3, r5
/* 8006C830 00069770  40 81 00 10 */	ble .L_8006C840
/* 8006C834 00069774  7C 65 1B 78 */	mr r5, r3
/* 8006C838 00069778  48 00 00 08 */	b .L_8006C840
.L_8006C83C:
/* 8006C83C 0006977C  7C 65 1B 78 */	mr r5, r3
.L_8006C840:
/* 8006C840 00069780  54 DC 86 FE */	rlwinm r28, r6, 0x10, 0x1b, 0x1f
/* 8006C844 00069784  7C 05 E0 40 */	cmplw r5, r28
/* 8006C848 00069788  40 81 00 08 */	ble .L_8006C850
/* 8006C84C 0006978C  7C BC 2B 78 */	mr r28, r5
.L_8006C850:
/* 8006C850 00069790  28 1C 00 08 */	cmplwi r28, 8
/* 8006C854 00069794  3B 20 00 08 */	li r25, 8
/* 8006C858 00069798  41 81 00 08 */	bgt .L_8006C860
/* 8006C85C 0006979C  7F 99 E3 78 */	mr r25, r28
.L_8006C860:
/* 8006C860 000697A0  88 04 00 03 */	lbz r0, 3(r4)
/* 8006C864 000697A4  28 00 00 FF */	cmplwi r0, 0xff
/* 8006C868 000697A8  41 82 00 10 */	beq .L_8006C878
/* 8006C86C 000697AC  80 7E 00 24 */	lwz r3, 0x24(r30)
/* 8006C870 000697B0  7F 43 00 AE */	lbzx r26, r3, r0
/* 8006C874 000697B4  48 00 00 08 */	b .L_8006C87C
.L_8006C878:
/* 8006C878 000697B8  3B 40 00 00 */	li r26, 0
.L_8006C87C:
/* 8006C87C 000697BC  38 00 00 04 */	li r0, 4
/* 8006C880 000697C0  28 1F 00 00 */	cmplwi r31, 0
/* 8006C884 000697C4  7C 7A 00 10 */	subfc r3, r26, r0
/* 8006C888 000697C8  54 D7 00 02 */	rlwinm r23, r6, 0, 0, 1
/* 8006C88C 000697CC  54 C0 01 0A */	rlwinm r0, r6, 0, 4, 5
/* 8006C890 000697D0  54 D6 00 86 */	rlwinm r22, r6, 0, 2, 3
/* 8006C894 000697D4  7C 63 19 10 */	subfe r3, r3, r3
/* 8006C898 000697D8  54 D5 47 FE */	rlwinm r21, r6, 8, 0x1f, 0x1f
/* 8006C89C 000697DC  7C 18 18 78 */	andc r24, r0, r3
/* 8006C8A0 000697E0  40 82 00 3C */	bne .L_8006C8DC
/* 8006C8A4 000697E4  38 60 00 4C */	li r3, 0x4c
/* 8006C8A8 000697E8  4B FB 75 FD */	bl __nw__FUl
/* 8006C8AC 000697EC  7C 7F 1B 79 */	or. r31, r3, r3
/* 8006C8B0 000697F0  41 82 00 2C */	beq .L_8006C8DC
/* 8006C8B4 000697F4  3C 80 80 4A */	lis r4, __vt__11J3DMaterial@ha
/* 8006C8B8 000697F8  3C A0 3C F4 */	lis r5, 0x3CF3CF00@ha
/* 8006C8BC 000697FC  38 04 15 D8 */	addi r0, r4, __vt__11J3DMaterial@l
/* 8006C8C0 00069800  3C 80 00 F4 */	lis r4, 0x00F3CF3C@ha
/* 8006C8C4 00069804  90 1F 00 00 */	stw r0, 0(r31)
/* 8006C8C8 00069808  38 A5 CF 00 */	addi r5, r5, 0x3CF3CF00@l
/* 8006C8CC 0006980C  38 04 CF 3C */	addi r0, r4, 0x00F3CF3C@l
/* 8006C8D0 00069810  90 BF 00 40 */	stw r5, 0x40(r31)
/* 8006C8D4 00069814  90 1F 00 44 */	stw r0, 0x44(r31)
/* 8006C8D8 00069818  4B FF 5E C1 */	bl initialize__11J3DMaterialFv
.L_8006C8DC:
/* 8006C8DC 0006981C  7E E3 BB 78 */	mr r3, r23
/* 8006C8E0 00069820  4B FF 4C 01 */	bl createColorBlock__11J3DMaterialFUl
/* 8006C8E4 00069824  90 7F 00 24 */	stw r3, 0x24(r31)
/* 8006C8E8 00069828  7F 03 C3 78 */	mr r3, r24
/* 8006C8EC 0006982C  4B FF 4F 51 */	bl createTexGenBlock__11J3DMaterialFUl
/* 8006C8F0 00069830  90 7F 00 28 */	stw r3, 0x28(r31)
/* 8006C8F4 00069834  57 83 04 3E */	clrlwi r3, r28, 0x10
/* 8006C8F8 00069838  4B FF 51 75 */	bl createTevBlock__11J3DMaterialFi
/* 8006C8FC 0006983C  90 7F 00 2C */	stw r3, 0x2c(r31)
/* 8006C900 00069840  7E A3 AB 78 */	mr r3, r21
/* 8006C904 00069844  4B FF 58 79 */	bl createIndBlock__11J3DMaterialFi
/* 8006C908 00069848  90 7F 00 30 */	stw r3, 0x30(r31)
/* 8006C90C 0006984C  7E C3 B3 78 */	mr r3, r22
/* 8006C910 00069850  80 9E 00 08 */	lwz r4, 8(r30)
/* 8006C914 00069854  80 BE 00 04 */	lwz r5, 4(r30)
/* 8006C918 00069858  7C 04 DA 2E */	lhzx r0, r4, r27
/* 8006C91C 0006985C  1C 00 01 4C */	mulli r0, r0, 0x14c
/* 8006C920 00069860  7C 85 00 AE */	lbzx r4, r5, r0
/* 8006C924 00069864  4B FF 5A 71 */	bl createPEBlock__11J3DMaterialFUlUl
/* 8006C928 00069868  90 7F 00 34 */	stw r3, 0x34(r31)
/* 8006C92C 0006986C  7F C3 F3 78 */	mr r3, r30
/* 8006C930 00069870  80 BE 00 08 */	lwz r5, 8(r30)
/* 8006C934 00069874  7F A4 EB 78 */	mr r4, r29
/* 8006C938 00069878  B3 BF 00 14 */	sth r29, 0x14(r31)
/* 8006C93C 0006987C  80 DE 00 04 */	lwz r6, 4(r30)
/* 8006C940 00069880  7C 05 DA 2E */	lhzx r0, r5, r27
/* 8006C944 00069884  1C 00 01 4C */	mulli r0, r0, 0x14c
/* 8006C948 00069888  7C 06 00 AE */	lbzx r0, r6, r0
/* 8006C94C 0006988C  90 1F 00 10 */	stw r0, 0x10(r31)
/* 8006C950 00069890  48 00 1A B1 */	bl newColorChanNum__18J3DMaterialFactoryCFi
/* 8006C954 00069894  7C 64 1B 78 */	mr r4, r3
/* 8006C958 00069898  80 7F 00 24 */	lwz r3, 0x24(r31)
/* 8006C95C 0006989C  81 83 00 00 */	lwz r12, 0(r3)
/* 8006C960 000698A0  81 8C 00 48 */	lwz r12, 0x48(r12)
/* 8006C964 000698A4  7D 89 03 A6 */	mtctr r12
/* 8006C968 000698A8  4E 80 04 21 */	bctrl 
/* 8006C96C 000698AC  7F C3 F3 78 */	mr r3, r30
/* 8006C970 000698B0  7F A4 EB 78 */	mr r4, r29
/* 8006C974 000698B4  48 00 1E FD */	bl newCullMode__18J3DMaterialFactoryCFi
/* 8006C978 000698B8  7C 64 1B 78 */	mr r4, r3
/* 8006C97C 000698BC  80 7F 00 24 */	lwz r3, 0x24(r31)
/* 8006C980 000698C0  81 83 00 00 */	lwz r12, 0(r3)
/* 8006C984 000698C4  81 8C 00 6C */	lwz r12, 0x6c(r12)
/* 8006C988 000698C8  7D 89 03 A6 */	mtctr r12
/* 8006C98C 000698CC  4E 80 04 21 */	bctrl 
/* 8006C990 000698D0  7F C3 F3 78 */	mr r3, r30
/* 8006C994 000698D4  7F A4 EB 78 */	mr r4, r29
/* 8006C998 000698D8  48 00 1C C5 */	bl newTexGenNum__18J3DMaterialFactoryCFi
/* 8006C99C 000698DC  7C 64 1B 78 */	mr r4, r3
/* 8006C9A0 000698E0  80 7F 00 28 */	lwz r3, 0x28(r31)
/* 8006C9A4 000698E4  81 83 00 00 */	lwz r12, 0(r3)
/* 8006C9A8 000698E8  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8006C9AC 000698EC  7D 89 03 A6 */	mtctr r12
/* 8006C9B0 000698F0  4E 80 04 21 */	bctrl 
/* 8006C9B4 000698F4  7F C4 F3 78 */	mr r4, r30
/* 8006C9B8 000698F8  7F A5 EB 78 */	mr r5, r29
/* 8006C9BC 000698FC  38 61 00 78 */	addi r3, r1, 0x78
/* 8006C9C0 00069900  48 00 29 DD */	bl newNBTScale__18J3DMaterialFactoryCFi
/* 8006C9C4 00069904  80 C1 00 78 */	lwz r6, 0x78(r1)
/* 8006C9C8 00069908  38 81 00 88 */	addi r4, r1, 0x88
/* 8006C9CC 0006990C  80 A1 00 7C */	lwz r5, 0x7c(r1)
/* 8006C9D0 00069910  80 61 00 80 */	lwz r3, 0x80(r1)
/* 8006C9D4 00069914  80 01 00 84 */	lwz r0, 0x84(r1)
/* 8006C9D8 00069918  90 C1 00 88 */	stw r6, 0x88(r1)
/* 8006C9DC 0006991C  90 A1 00 8C */	stw r5, 0x8c(r1)
/* 8006C9E0 00069920  90 61 00 90 */	stw r3, 0x90(r1)
/* 8006C9E4 00069924  90 01 00 94 */	stw r0, 0x94(r1)
/* 8006C9E8 00069928  80 7F 00 28 */	lwz r3, 0x28(r31)
/* 8006C9EC 0006992C  81 83 00 00 */	lwz r12, 0(r3)
/* 8006C9F0 00069930  81 8C 00 58 */	lwz r12, 0x58(r12)
/* 8006C9F4 00069934  7D 89 03 A6 */	mtctr r12
/* 8006C9F8 00069938  4E 80 04 21 */	bctrl 
/* 8006C9FC 0006993C  7F C4 F3 78 */	mr r4, r30
/* 8006CA00 00069940  7F A5 EB 78 */	mr r5, r29
/* 8006CA04 00069944  38 61 00 B4 */	addi r3, r1, 0xb4
/* 8006CA08 00069948  48 00 25 7D */	bl newFog__18J3DMaterialFactoryCFi
/* 8006CA0C 0006994C  80 7F 00 34 */	lwz r3, 0x34(r31)
/* 8006CA10 00069950  38 81 00 B4 */	addi r4, r1, 0xb4
/* 8006CA14 00069954  81 83 00 00 */	lwz r12, 0(r3)
/* 8006CA18 00069958  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 8006CA1C 0006995C  7D 89 03 A6 */	mtctr r12
/* 8006CA20 00069960  4E 80 04 21 */	bctrl 
/* 8006CA24 00069964  7F C4 F3 78 */	mr r4, r30
/* 8006CA28 00069968  7F A5 EB 78 */	mr r5, r29
/* 8006CA2C 0006996C  38 61 00 4C */	addi r3, r1, 0x4c
/* 8006CA30 00069970  48 00 27 A1 */	bl newAlphaComp__18J3DMaterialFactoryCFi
/* 8006CA34 00069974  80 7F 00 34 */	lwz r3, 0x34(r31)
/* 8006CA38 00069978  38 81 00 4C */	addi r4, r1, 0x4c
/* 8006CA3C 0006997C  81 83 00 00 */	lwz r12, 0(r3)
/* 8006CA40 00069980  81 8C 00 38 */	lwz r12, 0x38(r12)
/* 8006CA44 00069984  7D 89 03 A6 */	mtctr r12
/* 8006CA48 00069988  4E 80 04 21 */	bctrl 
/* 8006CA4C 0006998C  7F C4 F3 78 */	mr r4, r30
/* 8006CA50 00069990  7F A5 EB 78 */	mr r5, r29
/* 8006CA54 00069994  38 61 00 48 */	addi r3, r1, 0x48
/* 8006CA58 00069998  48 00 27 F9 */	bl newBlend__18J3DMaterialFactoryCFi
/* 8006CA5C 0006999C  80 7F 00 34 */	lwz r3, 0x34(r31)
/* 8006CA60 000699A0  38 81 00 48 */	addi r4, r1, 0x48
/* 8006CA64 000699A4  81 83 00 00 */	lwz r12, 0(r3)
/* 8006CA68 000699A8  81 8C 00 44 */	lwz r12, 0x44(r12)
/* 8006CA6C 000699AC  7D 89 03 A6 */	mtctr r12
/* 8006CA70 000699B0  4E 80 04 21 */	bctrl 
/* 8006CA74 000699B4  7F C4 F3 78 */	mr r4, r30
/* 8006CA78 000699B8  7F A5 EB 78 */	mr r5, r29
/* 8006CA7C 000699BC  38 61 00 14 */	addi r3, r1, 0x14
/* 8006CA80 000699C0  48 00 28 4D */	bl newZMode__18J3DMaterialFactoryCFi
/* 8006CA84 000699C4  A0 01 00 14 */	lhz r0, 0x14(r1)
/* 8006CA88 000699C8  38 81 00 18 */	addi r4, r1, 0x18
/* 8006CA8C 000699CC  B0 01 00 18 */	sth r0, 0x18(r1)
/* 8006CA90 000699D0  80 7F 00 34 */	lwz r3, 0x34(r31)
/* 8006CA94 000699D4  81 83 00 00 */	lwz r12, 0(r3)
/* 8006CA98 000699D8  81 8C 00 50 */	lwz r12, 0x50(r12)
/* 8006CA9C 000699DC  7D 89 03 A6 */	mtctr r12
/* 8006CAA0 000699E0  4E 80 04 21 */	bctrl 
/* 8006CAA4 000699E4  7F C3 F3 78 */	mr r3, r30
/* 8006CAA8 000699E8  7F A4 EB 78 */	mr r4, r29
/* 8006CAAC 000699EC  48 00 28 81 */	bl newZCompLoc__18J3DMaterialFactoryCFi
/* 8006CAB0 000699F0  7C 64 1B 78 */	mr r4, r3
/* 8006CAB4 000699F4  80 7F 00 34 */	lwz r3, 0x34(r31)
/* 8006CAB8 000699F8  81 83 00 00 */	lwz r12, 0(r3)
/* 8006CABC 000699FC  81 8C 00 5C */	lwz r12, 0x5c(r12)
/* 8006CAC0 00069A00  7D 89 03 A6 */	mtctr r12
/* 8006CAC4 00069A04  4E 80 04 21 */	bctrl 
/* 8006CAC8 00069A08  7F C3 F3 78 */	mr r3, r30
/* 8006CACC 00069A0C  7F A4 EB 78 */	mr r4, r29
/* 8006CAD0 00069A10  48 00 28 95 */	bl newDither__18J3DMaterialFactoryCFi
/* 8006CAD4 00069A14  7C 64 1B 78 */	mr r4, r3
/* 8006CAD8 00069A18  80 7F 00 34 */	lwz r3, 0x34(r31)
/* 8006CADC 00069A1C  81 83 00 00 */	lwz r12, 0(r3)
/* 8006CAE0 00069A20  81 8C 00 68 */	lwz r12, 0x68(r12)
/* 8006CAE4 00069A24  7D 89 03 A6 */	mtctr r12
/* 8006CAE8 00069A28  4E 80 04 21 */	bctrl 
/* 8006CAEC 00069A2C  7F C3 F3 78 */	mr r3, r30
/* 8006CAF0 00069A30  7F A4 EB 78 */	mr r4, r29
/* 8006CAF4 00069A34  48 00 1F A1 */	bl newTevStageNum__18J3DMaterialFactoryCFi
/* 8006CAF8 00069A38  7C 64 1B 78 */	mr r4, r3
/* 8006CAFC 00069A3C  80 7F 00 2C */	lwz r3, 0x2c(r31)
/* 8006CB00 00069A40  81 83 00 00 */	lwz r12, 0(r3)
/* 8006CB04 00069A44  81 8C 00 94 */	lwz r12, 0x94(r12)
/* 8006CB08 00069A48  7D 89 03 A6 */	mtctr r12
/* 8006CB0C 00069A4C  4E 80 04 21 */	bctrl 
/* 8006CB10 00069A50  3A 60 00 00 */	li r19, 0
/* 8006CB14 00069A54  48 00 00 30 */	b .L_8006CB44
.L_8006CB18:
/* 8006CB18 00069A58  7F C3 F3 78 */	mr r3, r30
/* 8006CB1C 00069A5C  7F A4 EB 78 */	mr r4, r29
/* 8006CB20 00069A60  48 00 1D 91 */	bl newTexNo__18J3DMaterialFactoryCFii
/* 8006CB24 00069A64  7C 65 1B 78 */	mr r5, r3
/* 8006CB28 00069A68  80 7F 00 2C */	lwz r3, 0x2c(r31)
/* 8006CB2C 00069A6C  56 64 06 3E */	clrlwi r4, r19, 0x18
/* 8006CB30 00069A70  81 83 00 00 */	lwz r12, 0(r3)
/* 8006CB34 00069A74  81 8C 00 4C */	lwz r12, 0x4c(r12)
/* 8006CB38 00069A78  7D 89 03 A6 */	mtctr r12
/* 8006CB3C 00069A7C  4E 80 04 21 */	bctrl 
/* 8006CB40 00069A80  3A 73 00 01 */	addi r19, r19, 1
.L_8006CB44:
/* 8006CB44 00069A84  56 65 06 3E */	clrlwi r5, r19, 0x18
/* 8006CB48 00069A88  7C 05 C8 40 */	cmplw r5, r25
/* 8006CB4C 00069A8C  41 80 FF CC */	blt .L_8006CB18
/* 8006CB50 00069A90  3A 60 00 00 */	li r19, 0
/* 8006CB54 00069A94  48 00 00 3C */	b .L_8006CB90
.L_8006CB58:
/* 8006CB58 00069A98  7F C4 F3 78 */	mr r4, r30
/* 8006CB5C 00069A9C  7F A5 EB 78 */	mr r5, r29
/* 8006CB60 00069AA0  38 61 00 40 */	addi r3, r1, 0x40
/* 8006CB64 00069AA4  48 00 1D 95 */	bl newTevOrder__18J3DMaterialFactoryCFii
/* 8006CB68 00069AA8  80 01 00 40 */	lwz r0, 0x40(r1)
/* 8006CB6C 00069AAC  56 64 06 3E */	clrlwi r4, r19, 0x18
/* 8006CB70 00069AB0  38 A1 00 44 */	addi r5, r1, 0x44
/* 8006CB74 00069AB4  90 01 00 44 */	stw r0, 0x44(r1)
/* 8006CB78 00069AB8  80 7F 00 2C */	lwz r3, 0x2c(r31)
/* 8006CB7C 00069ABC  81 83 00 00 */	lwz r12, 0(r3)
/* 8006CB80 00069AC0  81 8C 00 58 */	lwz r12, 0x58(r12)
/* 8006CB84 00069AC4  7D 89 03 A6 */	mtctr r12
/* 8006CB88 00069AC8  4E 80 04 21 */	bctrl 
/* 8006CB8C 00069ACC  3A 73 00 01 */	addi r19, r19, 1
.L_8006CB90:
/* 8006CB90 00069AD0  56 66 06 3E */	clrlwi r6, r19, 0x18
/* 8006CB94 00069AD4  7C 06 E0 40 */	cmplw r6, r28
/* 8006CB98 00069AD8  41 80 FF C0 */	blt .L_8006CB58
/* 8006CB9C 00069ADC  83 1E 00 04 */	lwz r24, 4(r30)
/* 8006CBA0 00069AE0  3A E0 00 00 */	li r23, 0
/* 8006CBA4 00069AE4  83 3E 00 08 */	lwz r25, 8(r30)
/* 8006CBA8 00069AE8  48 00 00 DC */	b .L_8006CC84
.L_8006CBAC:
/* 8006CBAC 00069AEC  7C 1B CA 2E */	lhzx r0, r27, r25
/* 8006CBB0 00069AF0  7F C4 F3 78 */	mr r4, r30
/* 8006CBB4 00069AF4  7F A5 EB 78 */	mr r5, r29
/* 8006CBB8 00069AF8  38 61 00 60 */	addi r3, r1, 0x60
/* 8006CBBC 00069AFC  1C 00 01 4C */	mulli r0, r0, 0x14c
/* 8006CBC0 00069B00  7E 98 02 14 */	add r20, r24, r0
/* 8006CBC4 00069B04  48 00 1F 09 */	bl newTevStage__18J3DMaterialFactoryCFii
/* 8006CBC8 00069B08  80 61 00 60 */	lwz r3, 0x60(r1)
/* 8006CBCC 00069B0C  56 F5 06 3E */	clrlwi r21, r23, 0x18
/* 8006CBD0 00069B10  80 01 00 64 */	lwz r0, 0x64(r1)
/* 8006CBD4 00069B14  7E A4 AB 78 */	mr r4, r21
/* 8006CBD8 00069B18  90 61 00 68 */	stw r3, 0x68(r1)
/* 8006CBDC 00069B1C  38 A1 00 68 */	addi r5, r1, 0x68
/* 8006CBE0 00069B20  90 01 00 6C */	stw r0, 0x6c(r1)
/* 8006CBE4 00069B24  80 7F 00 2C */	lwz r3, 0x2c(r31)
/* 8006CBE8 00069B28  81 83 00 00 */	lwz r12, 0(r3)
/* 8006CBEC 00069B2C  81 8C 00 A0 */	lwz r12, 0xa0(r12)
/* 8006CBF0 00069B30  7D 89 03 A6 */	mtctr r12
/* 8006CBF4 00069B34  4E 80 04 21 */	bctrl 
/* 8006CBF8 00069B38  56 A3 08 3C */	slwi r3, r21, 1
/* 8006CBFC 00069B3C  3A C3 01 04 */	addi r22, r3, 0x104
/* 8006CC00 00069B40  7C 14 B2 2E */	lhzx r0, r20, r22
/* 8006CC04 00069B44  28 00 FF FF */	cmplwi r0, 0xffff
/* 8006CC08 00069B48  41 82 00 78 */	beq .L_8006CC80
/* 8006CC0C 00069B4C  80 7F 00 2C */	lwz r3, 0x2c(r31)
/* 8006CC10 00069B50  54 04 13 BA */	rlwinm r4, r0, 2, 0xe, 0x1d
/* 8006CC14 00069B54  80 BE 00 54 */	lwz r5, 0x54(r30)
/* 8006CC18 00069B58  38 04 00 01 */	addi r0, r4, 1
/* 8006CC1C 00069B5C  81 83 00 00 */	lwz r12, 0(r3)
/* 8006CC20 00069B60  7E A4 AB 78 */	mr r4, r21
/* 8006CC24 00069B64  7E 65 00 AE */	lbzx r19, r5, r0
/* 8006CC28 00069B68  81 8C 00 A4 */	lwz r12, 0xa4(r12)
/* 8006CC2C 00069B6C  7D 89 03 A6 */	mtctr r12
/* 8006CC30 00069B70  4E 80 04 21 */	bctrl 
/* 8006CC34 00069B74  88 C3 00 07 */	lbz r6, 7(r3)
/* 8006CC38 00069B78  56 60 15 BA */	rlwinm r0, r19, 2, 0x16, 0x1d
/* 8006CC3C 00069B7C  80 BE 00 54 */	lwz r5, 0x54(r30)
/* 8006CC40 00069B80  7E A4 AB 78 */	mr r4, r21
/* 8006CC44 00069B84  54 C6 07 B6 */	rlwinm r6, r6, 0, 0x1e, 0x1b
/* 8006CC48 00069B88  7C C0 03 78 */	or r0, r6, r0
/* 8006CC4C 00069B8C  98 03 00 07 */	stb r0, 7(r3)
/* 8006CC50 00069B90  80 7F 00 2C */	lwz r3, 0x2c(r31)
/* 8006CC54 00069B94  7C 14 B2 2E */	lhzx r0, r20, r22
/* 8006CC58 00069B98  81 83 00 00 */	lwz r12, 0(r3)
/* 8006CC5C 00069B9C  54 00 10 3A */	slwi r0, r0, 2
/* 8006CC60 00069BA0  81 8C 00 A4 */	lwz r12, 0xa4(r12)
/* 8006CC64 00069BA4  7E 65 00 AE */	lbzx r19, r5, r0
/* 8006CC68 00069BA8  7D 89 03 A6 */	mtctr r12
/* 8006CC6C 00069BAC  4E 80 04 21 */	bctrl 
/* 8006CC70 00069BB0  88 03 00 07 */	lbz r0, 7(r3)
/* 8006CC74 00069BB4  54 00 00 3A */	rlwinm r0, r0, 0, 0, 0x1d
/* 8006CC78 00069BB8  7C 00 9B 78 */	or r0, r0, r19
/* 8006CC7C 00069BBC  98 03 00 07 */	stb r0, 7(r3)
.L_8006CC80:
/* 8006CC80 00069BC0  3A F7 00 01 */	addi r23, r23, 1
.L_8006CC84:
/* 8006CC84 00069BC4  56 E6 06 3E */	clrlwi r6, r23, 0x18
/* 8006CC88 00069BC8  7C 06 E0 40 */	cmplw r6, r28
/* 8006CC8C 00069BCC  41 80 FF 20 */	blt .L_8006CBAC
/* 8006CC90 00069BD0  3A 60 00 00 */	li r19, 0
/* 8006CC94 00069BD4  48 00 00 38 */	b .L_8006CCCC
.L_8006CC98:
/* 8006CC98 00069BD8  7F C4 F3 78 */	mr r4, r30
/* 8006CC9C 00069BDC  7F A5 EB 78 */	mr r5, r29
/* 8006CCA0 00069BE0  38 61 00 3C */	addi r3, r1, 0x3c
/* 8006CCA4 00069BE4  56 66 06 3E */	clrlwi r6, r19, 0x18
/* 8006CCA8 00069BE8  48 00 1D 5D */	bl newTevKColor__18J3DMaterialFactoryCFii
/* 8006CCAC 00069BEC  80 7F 00 2C */	lwz r3, 0x2c(r31)
/* 8006CCB0 00069BF0  56 64 06 3E */	clrlwi r4, r19, 0x18
/* 8006CCB4 00069BF4  38 A1 00 3C */	addi r5, r1, 0x3c
/* 8006CCB8 00069BF8  81 83 00 00 */	lwz r12, 0(r3)
/* 8006CCBC 00069BFC  81 8C 00 70 */	lwz r12, 0x70(r12)
/* 8006CCC0 00069C00  7D 89 03 A6 */	mtctr r12
/* 8006CCC4 00069C04  4E 80 04 21 */	bctrl 
/* 8006CCC8 00069C08  3A 73 00 01 */	addi r19, r19, 1
.L_8006CCCC:
/* 8006CCCC 00069C0C  56 60 06 3E */	clrlwi r0, r19, 0x18
/* 8006CCD0 00069C10  28 00 00 04 */	cmplwi r0, 4
/* 8006CCD4 00069C14  41 80 FF C4 */	blt .L_8006CC98
/* 8006CCD8 00069C18  3A 60 00 00 */	li r19, 0
/* 8006CCDC 00069C1C  48 00 00 38 */	b .L_8006CD14
.L_8006CCE0:
/* 8006CCE0 00069C20  7F C4 F3 78 */	mr r4, r30
/* 8006CCE4 00069C24  7F A5 EB 78 */	mr r5, r29
/* 8006CCE8 00069C28  38 61 00 58 */	addi r3, r1, 0x58
/* 8006CCEC 00069C2C  56 66 06 3E */	clrlwi r6, r19, 0x18
/* 8006CCF0 00069C30  48 00 1C 7D */	bl newTevColor__18J3DMaterialFactoryCFii
/* 8006CCF4 00069C34  80 7F 00 2C */	lwz r3, 0x2c(r31)
/* 8006CCF8 00069C38  56 64 06 3E */	clrlwi r4, r19, 0x18
/* 8006CCFC 00069C3C  38 A1 00 58 */	addi r5, r1, 0x58
/* 8006CD00 00069C40  81 83 00 00 */	lwz r12, 0(r3)
/* 8006CD04 00069C44  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 8006CD08 00069C48  7D 89 03 A6 */	mtctr r12
/* 8006CD0C 00069C4C  4E 80 04 21 */	bctrl 
/* 8006CD10 00069C50  3A 73 00 01 */	addi r19, r19, 1
.L_8006CD14:
/* 8006CD14 00069C54  56 60 06 3E */	clrlwi r0, r19, 0x18
/* 8006CD18 00069C58  28 00 00 04 */	cmplwi r0, 4
/* 8006CD1C 00069C5C  41 80 FF C4 */	blt .L_8006CCE0
/* 8006CD20 00069C60  3A 60 00 00 */	li r19, 0
/* 8006CD24 00069C64  48 00 00 40 */	b .L_8006CD64
.L_8006CD28:
/* 8006CD28 00069C68  7F C4 F3 78 */	mr r4, r30
/* 8006CD2C 00069C6C  7F A5 EB 78 */	mr r5, r29
/* 8006CD30 00069C70  38 61 00 08 */	addi r3, r1, 8
/* 8006CD34 00069C74  56 66 06 3E */	clrlwi r6, r19, 0x18
/* 8006CD38 00069C78  48 00 1E 55 */	bl newTevSwapModeTable__18J3DMaterialFactoryCFii
/* 8006CD3C 00069C7C  88 01 00 08 */	lbz r0, 8(r1)
/* 8006CD40 00069C80  56 64 06 3E */	clrlwi r4, r19, 0x18
/* 8006CD44 00069C84  38 A1 00 0C */	addi r5, r1, 0xc
/* 8006CD48 00069C88  98 01 00 0C */	stb r0, 0xc(r1)
/* 8006CD4C 00069C8C  80 7F 00 2C */	lwz r3, 0x2c(r31)
/* 8006CD50 00069C90  81 83 00 00 */	lwz r12, 0(r3)
/* 8006CD54 00069C94  81 8C 00 B4 */	lwz r12, 0xb4(r12)
/* 8006CD58 00069C98  7D 89 03 A6 */	mtctr r12
/* 8006CD5C 00069C9C  4E 80 04 21 */	bctrl 
/* 8006CD60 00069CA0  3A 73 00 01 */	addi r19, r19, 1
.L_8006CD64:
/* 8006CD64 00069CA4  56 60 06 3E */	clrlwi r0, r19, 0x18
/* 8006CD68 00069CA8  28 00 00 04 */	cmplwi r0, 4
/* 8006CD6C 00069CAC  41 80 FF BC */	blt .L_8006CD28
/* 8006CD70 00069CB0  3A 60 00 00 */	li r19, 0
/* 8006CD74 00069CB4  48 00 00 38 */	b .L_8006CDAC
.L_8006CD78:
/* 8006CD78 00069CB8  7F C4 F3 78 */	mr r4, r30
/* 8006CD7C 00069CBC  7F A5 EB 78 */	mr r5, r29
/* 8006CD80 00069CC0  38 61 00 38 */	addi r3, r1, 0x38
/* 8006CD84 00069CC4  56 66 06 3E */	clrlwi r6, r19, 0x18
/* 8006CD88 00069CC8  48 00 18 45 */	bl newAmbColor__18J3DMaterialFactoryCFii
/* 8006CD8C 00069CCC  80 7F 00 24 */	lwz r3, 0x24(r31)
/* 8006CD90 00069CD0  56 64 06 3E */	clrlwi r4, r19, 0x18
/* 8006CD94 00069CD4  38 A1 00 38 */	addi r5, r1, 0x38
/* 8006CD98 00069CD8  81 83 00 00 */	lwz r12, 0(r3)
/* 8006CD9C 00069CDC  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 8006CDA0 00069CE0  7D 89 03 A6 */	mtctr r12
/* 8006CDA4 00069CE4  4E 80 04 21 */	bctrl 
/* 8006CDA8 00069CE8  3A 73 00 01 */	addi r19, r19, 1
.L_8006CDAC:
/* 8006CDAC 00069CEC  56 60 06 3E */	clrlwi r0, r19, 0x18
/* 8006CDB0 00069CF0  28 00 00 02 */	cmplwi r0, 2
/* 8006CDB4 00069CF4  41 80 FF C4 */	blt .L_8006CD78
/* 8006CDB8 00069CF8  3A 60 00 00 */	li r19, 0
/* 8006CDBC 00069CFC  48 00 00 38 */	b .L_8006CDF4
.L_8006CDC0:
/* 8006CDC0 00069D00  7F C4 F3 78 */	mr r4, r30
/* 8006CDC4 00069D04  7F A5 EB 78 */	mr r5, r29
/* 8006CDC8 00069D08  38 61 00 34 */	addi r3, r1, 0x34
/* 8006CDCC 00069D0C  56 66 06 3E */	clrlwi r6, r19, 0x18
/* 8006CDD0 00069D10  48 00 15 A1 */	bl newMatColor__18J3DMaterialFactoryCFii
/* 8006CDD4 00069D14  80 7F 00 24 */	lwz r3, 0x24(r31)
/* 8006CDD8 00069D18  56 64 06 3E */	clrlwi r4, r19, 0x18
/* 8006CDDC 00069D1C  38 A1 00 34 */	addi r5, r1, 0x34
/* 8006CDE0 00069D20  81 83 00 00 */	lwz r12, 0(r3)
/* 8006CDE4 00069D24  81 8C 00 34 */	lwz r12, 0x34(r12)
/* 8006CDE8 00069D28  7D 89 03 A6 */	mtctr r12
/* 8006CDEC 00069D2C  4E 80 04 21 */	bctrl 
/* 8006CDF0 00069D30  3A 73 00 01 */	addi r19, r19, 1
.L_8006CDF4:
/* 8006CDF4 00069D34  56 60 06 3E */	clrlwi r0, r19, 0x18
/* 8006CDF8 00069D38  28 00 00 02 */	cmplwi r0, 2
/* 8006CDFC 00069D3C  41 80 FF C4 */	blt .L_8006CDC0
/* 8006CE00 00069D40  3A 60 00 00 */	li r19, 0
/* 8006CE04 00069D44  48 00 00 40 */	b .L_8006CE44
.L_8006CE08:
/* 8006CE08 00069D48  7F C4 F3 78 */	mr r4, r30
/* 8006CE0C 00069D4C  7F A5 EB 78 */	mr r5, r29
/* 8006CE10 00069D50  38 61 00 10 */	addi r3, r1, 0x10
/* 8006CE14 00069D54  56 66 06 3E */	clrlwi r6, r19, 0x18
/* 8006CE18 00069D58  48 00 16 21 */	bl newColorChan__18J3DMaterialFactoryCFii
/* 8006CE1C 00069D5C  A0 01 00 10 */	lhz r0, 0x10(r1)
/* 8006CE20 00069D60  56 64 06 3E */	clrlwi r4, r19, 0x18
/* 8006CE24 00069D64  38 A1 00 1C */	addi r5, r1, 0x1c
/* 8006CE28 00069D68  B0 01 00 1C */	sth r0, 0x1c(r1)
/* 8006CE2C 00069D6C  80 7F 00 24 */	lwz r3, 0x24(r31)
/* 8006CE30 00069D70  81 83 00 00 */	lwz r12, 0(r3)
/* 8006CE34 00069D74  81 8C 00 54 */	lwz r12, 0x54(r12)
/* 8006CE38 00069D78  7D 89 03 A6 */	mtctr r12
/* 8006CE3C 00069D7C  4E 80 04 21 */	bctrl 
/* 8006CE40 00069D80  3A 73 00 01 */	addi r19, r19, 1
.L_8006CE44:
/* 8006CE44 00069D84  56 60 06 3E */	clrlwi r0, r19, 0x18
/* 8006CE48 00069D88  28 00 00 04 */	cmplwi r0, 4
/* 8006CE4C 00069D8C  41 80 FF BC */	blt .L_8006CE08
/* 8006CE50 00069D90  3A 60 00 00 */	li r19, 0
/* 8006CE54 00069D94  48 00 00 44 */	b .L_8006CE98
.L_8006CE58:
/* 8006CE58 00069D98  7F C4 F3 78 */	mr r4, r30
/* 8006CE5C 00069D9C  7F A5 EB 78 */	mr r5, r29
/* 8006CE60 00069DA0  38 61 00 50 */	addi r3, r1, 0x50
/* 8006CE64 00069DA4  48 00 18 31 */	bl newTexCoord__18J3DMaterialFactoryCFii
/* 8006CE68 00069DA8  80 61 00 50 */	lwz r3, 0x50(r1)
/* 8006CE6C 00069DAC  56 64 06 3E */	clrlwi r4, r19, 0x18
/* 8006CE70 00069DB0  A0 01 00 54 */	lhz r0, 0x54(r1)
/* 8006CE74 00069DB4  38 A1 00 70 */	addi r5, r1, 0x70
/* 8006CE78 00069DB8  90 61 00 70 */	stw r3, 0x70(r1)
/* 8006CE7C 00069DBC  B0 01 00 74 */	sth r0, 0x74(r1)
/* 8006CE80 00069DC0  80 7F 00 28 */	lwz r3, 0x28(r31)
/* 8006CE84 00069DC4  81 83 00 00 */	lwz r12, 0(r3)
/* 8006CE88 00069DC8  81 8C 00 44 */	lwz r12, 0x44(r12)
/* 8006CE8C 00069DCC  7D 89 03 A6 */	mtctr r12
/* 8006CE90 00069DD0  4E 80 04 21 */	bctrl 
/* 8006CE94 00069DD4  3A 73 00 01 */	addi r19, r19, 1
.L_8006CE98:
/* 8006CE98 00069DD8  56 66 06 3E */	clrlwi r6, r19, 0x18
/* 8006CE9C 00069DDC  7C 06 D0 40 */	cmplw r6, r26
/* 8006CEA0 00069DE0  41 80 FF B8 */	blt .L_8006CE58
/* 8006CEA4 00069DE4  3A 60 00 00 */	li r19, 0
/* 8006CEA8 00069DE8  48 00 00 34 */	b .L_8006CEDC
.L_8006CEAC:
/* 8006CEAC 00069DEC  7F C3 F3 78 */	mr r3, r30
/* 8006CEB0 00069DF0  7F A4 EB 78 */	mr r4, r29
/* 8006CEB4 00069DF4  56 65 06 3E */	clrlwi r5, r19, 0x18
/* 8006CEB8 00069DF8  48 00 18 61 */	bl newTexMtx__18J3DMaterialFactoryCFii
/* 8006CEBC 00069DFC  7C 65 1B 78 */	mr r5, r3
/* 8006CEC0 00069E00  80 7F 00 28 */	lwz r3, 0x28(r31)
/* 8006CEC4 00069E04  56 64 06 3E */	clrlwi r4, r19, 0x18
/* 8006CEC8 00069E08  81 83 00 00 */	lwz r12, 0(r3)
/* 8006CECC 00069E0C  81 8C 00 4C */	lwz r12, 0x4c(r12)
/* 8006CED0 00069E10  7D 89 03 A6 */	mtctr r12
/* 8006CED4 00069E14  4E 80 04 21 */	bctrl 
/* 8006CED8 00069E18  3A 73 00 01 */	addi r19, r19, 1
.L_8006CEDC:
/* 8006CEDC 00069E1C  56 60 06 3E */	clrlwi r0, r19, 0x18
/* 8006CEE0 00069E20  28 00 00 08 */	cmplwi r0, 8
/* 8006CEE4 00069E24  41 80 FF C8 */	blt .L_8006CEAC
/* 8006CEE8 00069E28  80 7E 00 08 */	lwz r3, 8(r30)
/* 8006CEEC 00069E2C  3A 80 00 00 */	li r20, 0
/* 8006CEF0 00069E30  80 9E 00 04 */	lwz r4, 4(r30)
/* 8006CEF4 00069E34  7C 03 DA 2E */	lhzx r0, r3, r27
/* 8006CEF8 00069E38  1C 00 01 4C */	mulli r0, r0, 0x14c
/* 8006CEFC 00069E3C  7E 64 02 14 */	add r19, r4, r0
/* 8006CF00 00069E40  48 00 00 4C */	b .L_8006CF4C
.L_8006CF04:
/* 8006CF04 00069E44  56 84 06 3E */	clrlwi r4, r20, 0x18
/* 8006CF08 00069E48  38 04 00 9C */	addi r0, r4, 0x9c
/* 8006CF0C 00069E4C  7C B3 00 AE */	lbzx r5, r19, r0
/* 8006CF10 00069E50  28 05 00 FF */	cmplwi r5, 0xff
/* 8006CF14 00069E54  41 82 00 1C */	beq .L_8006CF30
/* 8006CF18 00069E58  80 7F 00 2C */	lwz r3, 0x2c(r31)
/* 8006CF1C 00069E5C  81 83 00 00 */	lwz r12, 0(r3)
/* 8006CF20 00069E60  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 8006CF24 00069E64  7D 89 03 A6 */	mtctr r12
/* 8006CF28 00069E68  4E 80 04 21 */	bctrl 
/* 8006CF2C 00069E6C  48 00 00 1C */	b .L_8006CF48
.L_8006CF30:
/* 8006CF30 00069E70  80 7F 00 2C */	lwz r3, 0x2c(r31)
/* 8006CF34 00069E74  38 A0 00 0C */	li r5, 0xc
/* 8006CF38 00069E78  81 83 00 00 */	lwz r12, 0(r3)
/* 8006CF3C 00069E7C  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 8006CF40 00069E80  7D 89 03 A6 */	mtctr r12
/* 8006CF44 00069E84  4E 80 04 21 */	bctrl 
.L_8006CF48:
/* 8006CF48 00069E88  3A 94 00 01 */	addi r20, r20, 1
.L_8006CF4C:
/* 8006CF4C 00069E8C  56 80 06 3E */	clrlwi r0, r20, 0x18
/* 8006CF50 00069E90  7C 00 E0 40 */	cmplw r0, r28
/* 8006CF54 00069E94  41 80 FF B0 */	blt .L_8006CF04
/* 8006CF58 00069E98  3A 80 00 00 */	li r20, 0
/* 8006CF5C 00069E9C  48 00 00 4C */	b .L_8006CFA8
.L_8006CF60:
/* 8006CF60 00069EA0  56 84 06 3E */	clrlwi r4, r20, 0x18
/* 8006CF64 00069EA4  38 04 00 AC */	addi r0, r4, 0xac
/* 8006CF68 00069EA8  7C B3 00 AE */	lbzx r5, r19, r0
/* 8006CF6C 00069EAC  28 05 00 FF */	cmplwi r5, 0xff
/* 8006CF70 00069EB0  41 82 00 1C */	beq .L_8006CF8C
/* 8006CF74 00069EB4  80 7F 00 2C */	lwz r3, 0x2c(r31)
/* 8006CF78 00069EB8  81 83 00 00 */	lwz r12, 0(r3)
/* 8006CF7C 00069EBC  81 8C 00 88 */	lwz r12, 0x88(r12)
/* 8006CF80 00069EC0  7D 89 03 A6 */	mtctr r12
/* 8006CF84 00069EC4  4E 80 04 21 */	bctrl 
/* 8006CF88 00069EC8  48 00 00 1C */	b .L_8006CFA4
.L_8006CF8C:
/* 8006CF8C 00069ECC  80 7F 00 2C */	lwz r3, 0x2c(r31)
/* 8006CF90 00069ED0  38 A0 00 1C */	li r5, 0x1c
/* 8006CF94 00069ED4  81 83 00 00 */	lwz r12, 0(r3)
/* 8006CF98 00069ED8  81 8C 00 88 */	lwz r12, 0x88(r12)
/* 8006CF9C 00069EDC  7D 89 03 A6 */	mtctr r12
/* 8006CFA0 00069EE0  4E 80 04 21 */	bctrl 
.L_8006CFA4:
/* 8006CFA4 00069EE4  3A 94 00 01 */	addi r20, r20, 1
.L_8006CFA8:
/* 8006CFA8 00069EE8  56 80 06 3E */	clrlwi r0, r20, 0x18
/* 8006CFAC 00069EEC  7C 00 E0 40 */	cmplw r0, r28
/* 8006CFB0 00069EF0  41 80 FF B0 */	blt .L_8006CF60
/* 8006CFB4 00069EF4  80 1E 00 0C */	lwz r0, 0xc(r30)
/* 8006CFB8 00069EF8  28 00 00 00 */	cmplwi r0, 0
/* 8006CFBC 00069EFC  41 82 01 70 */	beq .L_8006D12C
/* 8006CFC0 00069F00  7F C3 F3 78 */	mr r3, r30
/* 8006CFC4 00069F04  7F A4 EB 78 */	mr r4, r29
/* 8006CFC8 00069F08  48 00 1C 61 */	bl newIndTexStageNum__18J3DMaterialFactoryCFi
/* 8006CFCC 00069F0C  7C 75 1B 78 */	mr r21, r3
/* 8006CFD0 00069F10  7F C3 F3 78 */	mr r3, r30
/* 8006CFD4 00069F14  7F A4 EB 78 */	mr r4, r29
/* 8006CFD8 00069F18  48 00 1C 51 */	bl newIndTexStageNum__18J3DMaterialFactoryCFi
/* 8006CFDC 00069F1C  7C 64 1B 78 */	mr r4, r3
/* 8006CFE0 00069F20  80 7F 00 30 */	lwz r3, 0x30(r31)
/* 8006CFE4 00069F24  81 83 00 00 */	lwz r12, 0(r3)
/* 8006CFE8 00069F28  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8006CFEC 00069F2C  7D 89 03 A6 */	mtctr r12
/* 8006CFF0 00069F30  4E 80 04 21 */	bctrl 
/* 8006CFF4 00069F34  56 B4 06 3E */	clrlwi r20, r21, 0x18
/* 8006CFF8 00069F38  3A 60 00 00 */	li r19, 0
/* 8006CFFC 00069F3C  48 00 00 38 */	b .L_8006D034
.L_8006D000:
/* 8006D000 00069F40  7F C4 F3 78 */	mr r4, r30
/* 8006D004 00069F44  7F A5 EB 78 */	mr r5, r29
/* 8006D008 00069F48  38 61 00 98 */	addi r3, r1, 0x98
/* 8006D00C 00069F4C  56 66 06 3E */	clrlwi r6, r19, 0x18
/* 8006D010 00069F50  48 00 1C A1 */	bl newIndTexMtx__18J3DMaterialFactoryCFii
/* 8006D014 00069F54  80 7F 00 30 */	lwz r3, 0x30(r31)
/* 8006D018 00069F58  56 64 06 3E */	clrlwi r4, r19, 0x18
/* 8006D01C 00069F5C  38 A1 00 98 */	addi r5, r1, 0x98
/* 8006D020 00069F60  81 83 00 00 */	lwz r12, 0(r3)
/* 8006D024 00069F64  81 8C 00 34 */	lwz r12, 0x34(r12)
/* 8006D028 00069F68  7D 89 03 A6 */	mtctr r12
/* 8006D02C 00069F6C  4E 80 04 21 */	bctrl 
/* 8006D030 00069F70  3A 73 00 01 */	addi r19, r19, 1
.L_8006D034:
/* 8006D034 00069F74  56 60 06 3E */	clrlwi r0, r19, 0x18
/* 8006D038 00069F78  7C 00 A0 40 */	cmplw r0, r20
/* 8006D03C 00069F7C  41 80 FF C4 */	blt .L_8006D000
/* 8006D040 00069F80  56 B4 06 3E */	clrlwi r20, r21, 0x18
/* 8006D044 00069F84  3A 60 00 00 */	li r19, 0
/* 8006D048 00069F88  48 00 00 40 */	b .L_8006D088
.L_8006D04C:
/* 8006D04C 00069F8C  7F C4 F3 78 */	mr r4, r30
/* 8006D050 00069F90  7F A5 EB 78 */	mr r5, r29
/* 8006D054 00069F94  38 61 00 2C */	addi r3, r1, 0x2c
/* 8006D058 00069F98  56 66 06 3E */	clrlwi r6, r19, 0x18
/* 8006D05C 00069F9C  48 00 1B F5 */	bl newIndTexOrder__18J3DMaterialFactoryCFii
/* 8006D060 00069FA0  80 01 00 2C */	lwz r0, 0x2c(r1)
/* 8006D064 00069FA4  56 64 06 3E */	clrlwi r4, r19, 0x18
/* 8006D068 00069FA8  38 A1 00 30 */	addi r5, r1, 0x30
/* 8006D06C 00069FAC  90 01 00 30 */	stw r0, 0x30(r1)
/* 8006D070 00069FB0  80 7F 00 30 */	lwz r3, 0x30(r31)
/* 8006D074 00069FB4  81 83 00 00 */	lwz r12, 0(r3)
/* 8006D078 00069FB8  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8006D07C 00069FBC  7D 89 03 A6 */	mtctr r12
/* 8006D080 00069FC0  4E 80 04 21 */	bctrl 
/* 8006D084 00069FC4  3A 73 00 01 */	addi r19, r19, 1
.L_8006D088:
/* 8006D088 00069FC8  56 60 06 3E */	clrlwi r0, r19, 0x18
/* 8006D08C 00069FCC  7C 00 A0 40 */	cmplw r0, r20
/* 8006D090 00069FD0  41 80 FF BC */	blt .L_8006D04C
/* 8006D094 00069FD4  56 B4 06 3E */	clrlwi r20, r21, 0x18
/* 8006D098 00069FD8  3A 60 00 00 */	li r19, 0
/* 8006D09C 00069FDC  48 00 00 38 */	b .L_8006D0D4
.L_8006D0A0:
/* 8006D0A0 00069FE0  7F C4 F3 78 */	mr r4, r30
/* 8006D0A4 00069FE4  7F A5 EB 78 */	mr r5, r29
/* 8006D0A8 00069FE8  38 61 00 28 */	addi r3, r1, 0x28
/* 8006D0AC 00069FEC  56 66 06 3E */	clrlwi r6, r19, 0x18
/* 8006D0B0 00069FF0  48 00 1E 75 */	bl newIndTexCoordScale__18J3DMaterialFactoryCFii
/* 8006D0B4 00069FF4  80 7F 00 30 */	lwz r3, 0x30(r31)
/* 8006D0B8 00069FF8  56 64 06 3E */	clrlwi r4, r19, 0x18
/* 8006D0BC 00069FFC  38 A1 00 28 */	addi r5, r1, 0x28
/* 8006D0C0 0006A000  81 83 00 00 */	lwz r12, 0(r3)
/* 8006D0C4 0006A004  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 8006D0C8 0006A008  7D 89 03 A6 */	mtctr r12
/* 8006D0CC 0006A00C  4E 80 04 21 */	bctrl 
/* 8006D0D0 0006A010  3A 73 00 01 */	addi r19, r19, 1
.L_8006D0D4:
/* 8006D0D4 0006A014  56 60 06 3E */	clrlwi r0, r19, 0x18
/* 8006D0D8 0006A018  7C 00 A0 40 */	cmplw r0, r20
/* 8006D0DC 0006A01C  41 80 FF C4 */	blt .L_8006D0A0
/* 8006D0E0 0006A020  3A 60 00 00 */	li r19, 0
/* 8006D0E4 0006A024  48 00 00 3C */	b .L_8006D120
.L_8006D0E8:
/* 8006D0E8 0006A028  7F C4 F3 78 */	mr r4, r30
/* 8006D0EC 0006A02C  7F A5 EB 78 */	mr r5, r29
/* 8006D0F0 0006A030  38 61 00 20 */	addi r3, r1, 0x20
/* 8006D0F4 0006A034  48 00 1C 9D */	bl newIndTevStage__18J3DMaterialFactoryCFii
/* 8006D0F8 0006A038  80 01 00 20 */	lwz r0, 0x20(r1)
/* 8006D0FC 0006A03C  56 64 06 3E */	clrlwi r4, r19, 0x18
/* 8006D100 0006A040  38 A1 00 24 */	addi r5, r1, 0x24
/* 8006D104 0006A044  90 01 00 24 */	stw r0, 0x24(r1)
/* 8006D108 0006A048  80 7F 00 2C */	lwz r3, 0x2c(r31)
/* 8006D10C 0006A04C  81 83 00 00 */	lwz r12, 0(r3)
/* 8006D110 0006A050  81 8C 00 C0 */	lwz r12, 0xc0(r12)
/* 8006D114 0006A054  7D 89 03 A6 */	mtctr r12
/* 8006D118 0006A058  4E 80 04 21 */	bctrl 
/* 8006D11C 0006A05C  3A 73 00 01 */	addi r19, r19, 1
.L_8006D120:
/* 8006D120 0006A060  56 66 06 3E */	clrlwi r6, r19, 0x18
/* 8006D124 0006A064  7C 06 E0 40 */	cmplw r6, r28
/* 8006D128 0006A068  41 80 FF C0 */	blt .L_8006D0E8
.L_8006D12C:
/* 8006D12C 0006A06C  7F E3 FB 78 */	mr r3, r31
.L_8006D130:
/* 8006D130 0006A070  BA 61 00 EC */	lmw r19, 0xec(r1)
/* 8006D134 0006A074  80 01 01 24 */	lwz r0, 0x124(r1)
/* 8006D138 0006A078  7C 08 03 A6 */	mtlr r0
/* 8006D13C 0006A07C  38 21 01 20 */	addi r1, r1, 0x120
/* 8006D140 0006A080  4E 80 00 20 */	blr 
.endfn createNormalMaterial__18J3DMaterialFactoryCFP11J3DMaterialiUl

.fn setIndTevStage__11J3DTevBlockFUl14J3DIndTevStage, weak
/* 8006D144 0006A084  4E 80 00 20 */	blr 
.endfn setIndTevStage__11J3DTevBlockFUl14J3DIndTevStage

.fn setTevKAlphaSel__11J3DTevBlockFUlUc, weak
/* 8006D148 0006A088  4E 80 00 20 */	blr 
.endfn setTevKAlphaSel__11J3DTevBlockFUlUc

.fn setTevKColorSel__11J3DTevBlockFUlUc, weak
/* 8006D14C 0006A08C  4E 80 00 20 */	blr 
.endfn setTevKColorSel__11J3DTevBlockFUlUc

.fn setTevSwapModeTable__11J3DTevBlockFUl19J3DTevSwapModeTable, weak
/* 8006D150 0006A090  4E 80 00 20 */	blr 
.endfn setTevSwapModeTable__11J3DTevBlockFUl19J3DTevSwapModeTable

.fn setTevColor__11J3DTevBlockFUl13J3DGXColorS10, weak
/* 8006D154 0006A094  4E 80 00 20 */	blr 
.endfn setTevColor__11J3DTevBlockFUl13J3DGXColorS10

.fn setTevKColor__11J3DTevBlockFUl10J3DGXColor, weak
/* 8006D158 0006A098  4E 80 00 20 */	blr 
.endfn setTevKColor__11J3DTevBlockFUl10J3DGXColor

.fn getTevStage__11J3DTevBlockFUl, weak
/* 8006D15C 0006A09C  38 60 00 00 */	li r3, 0
/* 8006D160 0006A0A0  4E 80 00 20 */	blr 
.endfn getTevStage__11J3DTevBlockFUl

.fn setTevStage__11J3DTevBlockFUl11J3DTevStage, weak
/* 8006D164 0006A0A4  4E 80 00 20 */	blr 
.endfn setTevStage__11J3DTevBlockFUl11J3DTevStage

.fn setTevOrder__11J3DTevBlockFUl11J3DTevOrder, weak
/* 8006D168 0006A0A8  4E 80 00 20 */	blr 
.endfn setTevOrder__11J3DTevBlockFUl11J3DTevOrder

.fn setTevStageNum__11J3DTevBlockFUc, weak
/* 8006D16C 0006A0AC  4E 80 00 20 */	blr 
.endfn setTevStageNum__11J3DTevBlockFUc

.fn createPatchedMaterial__18J3DMaterialFactoryCFP11J3DMaterialiUl, global
/* 8006D170 0006A0B0  94 21 FF 10 */	stwu r1, -0xf0(r1)
/* 8006D174 0006A0B4  7C 08 02 A6 */	mflr r0
/* 8006D178 0006A0B8  90 01 00 F4 */	stw r0, 0xf4(r1)
/* 8006D17C 0006A0BC  BE 41 00 B8 */	stmw r18, 0xb8(r1)
/* 8006D180 0006A0C0  7C 9F 23 79 */	or. r31, r4, r4
/* 8006D184 0006A0C4  7C 7E 1B 78 */	mr r30, r3
/* 8006D188 0006A0C8  7C BD 2B 78 */	mr r29, r5
/* 8006D18C 0006A0CC  7C D2 33 78 */	mr r18, r6
/* 8006D190 0006A0D0  40 82 00 54 */	bne .L_8006D1E4
/* 8006D194 0006A0D4  38 60 00 4C */	li r3, 0x4c
/* 8006D198 0006A0D8  4B FB 6D 0D */	bl __nw__FUl
/* 8006D19C 0006A0DC  7C 73 1B 79 */	or. r19, r3, r3
/* 8006D1A0 0006A0E0  41 82 00 40 */	beq .L_8006D1E0
/* 8006D1A4 0006A0E4  3C 80 80 4A */	lis r4, __vt__11J3DMaterial@ha
/* 8006D1A8 0006A0E8  3C A0 3C F4 */	lis r5, 0x3CF3CF00@ha
/* 8006D1AC 0006A0EC  38 04 15 D8 */	addi r0, r4, __vt__11J3DMaterial@l
/* 8006D1B0 0006A0F0  90 13 00 00 */	stw r0, 0(r19)
/* 8006D1B4 0006A0F4  38 A5 CF 00 */	addi r5, r5, 0x3CF3CF00@l
/* 8006D1B8 0006A0F8  3C 80 00 F4 */	lis r4, 0x00F3CF3C@ha
/* 8006D1BC 0006A0FC  90 B3 00 40 */	stw r5, 0x40(r19)
/* 8006D1C0 0006A100  38 04 CF 3C */	addi r0, r4, 0x00F3CF3C@l
/* 8006D1C4 0006A104  90 13 00 44 */	stw r0, 0x44(r19)
/* 8006D1C8 0006A108  4B FF 55 D1 */	bl initialize__11J3DMaterialFv
/* 8006D1CC 0006A10C  3C 80 80 4A */	lis r4, __vt__18J3DPatchedMaterial@ha
/* 8006D1D0 0006A110  7E 63 9B 78 */	mr r3, r19
/* 8006D1D4 0006A114  38 04 15 A8 */	addi r0, r4, __vt__18J3DPatchedMaterial@l
/* 8006D1D8 0006A118  90 13 00 00 */	stw r0, 0(r19)
/* 8006D1DC 0006A11C  4B FF 66 05 */	bl initialize__18J3DPatchedMaterialFv
.L_8006D1E0:
/* 8006D1E0 0006A120  7E 7F 9B 78 */	mr r31, r19
.L_8006D1E4:
/* 8006D1E4 0006A124  56 44 01 8E */	rlwinm r4, r18, 0, 6, 7
/* 8006D1E8 0006A128  3C 60 40 00 */	lis r3, 0x4000
/* 8006D1EC 0006A12C  7C 04 00 D0 */	neg r0, r4
/* 8006D1F0 0006A130  7C 00 23 78 */	or r0, r0, r4
/* 8006D1F4 0006A134  54 1C 0F FE */	srwi r28, r0, 0x1f
/* 8006D1F8 0006A138  4B FF 42 E9 */	bl createColorBlock__11J3DMaterialFUl
/* 8006D1FC 0006A13C  90 7F 00 24 */	stw r3, 0x24(r31)
/* 8006D200 0006A140  38 60 00 5C */	li r3, 0x5c
/* 8006D204 0006A144  4B FB 6C A1 */	bl __nw__FUl
/* 8006D208 0006A148  7C 73 1B 79 */	or. r19, r3, r3
/* 8006D20C 0006A14C  41 82 00 44 */	beq .L_8006D250
/* 8006D210 0006A150  3C 80 80 4A */	lis r4, __vt__14J3DTexGenBlock@ha
/* 8006D214 0006A154  3C 60 80 4A */	lis r3, __vt__21J3DTexGenBlockPatched@ha
/* 8006D218 0006A158  38 04 17 1C */	addi r0, r4, __vt__14J3DTexGenBlock@l
/* 8006D21C 0006A15C  7E 72 9B 78 */	mr r18, r19
/* 8006D220 0006A160  90 13 00 00 */	stw r0, 0(r19)
/* 8006D224 0006A164  38 03 27 CC */	addi r0, r3, __vt__21J3DTexGenBlockPatched@l
/* 8006D228 0006A168  3C 80 80 06 */	lis r4, __ct__11J3DTexCoordFv@ha
/* 8006D22C 0006A16C  38 72 00 08 */	addi r3, r18, 8
/* 8006D230 0006A170  90 13 00 00 */	stw r0, 0(r19)
/* 8006D234 0006A174  38 84 19 FC */	addi r4, r4, __ct__11J3DTexCoordFv@l
/* 8006D238 0006A178  38 A0 00 00 */	li r5, 0
/* 8006D23C 0006A17C  38 C0 00 06 */	li r6, 6
/* 8006D240 0006A180  38 E0 00 08 */	li r7, 8
/* 8006D244 0006A184  48 05 45 F9 */	bl __construct_array
/* 8006D248 0006A188  7E 43 93 78 */	mr r3, r18
/* 8006D24C 0006A18C  48 00 A0 D5 */	bl initialize__21J3DTexGenBlockPatchedFv
.L_8006D250:
/* 8006D250 0006A190  92 7F 00 28 */	stw r19, 0x28(r31)
/* 8006D254 0006A194  38 60 00 D8 */	li r3, 0xd8
/* 8006D258 0006A198  4B FB 6C 4D */	bl __nw__FUl
/* 8006D25C 0006A19C  7C 79 1B 79 */	or. r25, r3, r3
/* 8006D260 0006A1A0  41 82 00 B4 */	beq .L_8006D314
/* 8006D264 0006A1A4  3C 80 80 4A */	lis r4, __vt__11J3DTevBlock@ha
/* 8006D268 0006A1A8  3C 60 80 4A */	lis r3, __vt__18J3DTevBlockPatched@ha
/* 8006D26C 0006A1AC  38 04 2B 08 */	addi r0, r4, __vt__11J3DTevBlock@l
/* 8006D270 0006A1B0  7F 34 CB 78 */	mr r20, r25
/* 8006D274 0006A1B4  90 19 00 00 */	stw r0, 0(r25)
/* 8006D278 0006A1B8  38 03 26 18 */	addi r0, r3, __vt__18J3DTevBlockPatched@l
/* 8006D27C 0006A1BC  3C 80 80 06 */	lis r4, __ct__11J3DTevOrderFv@ha
/* 8006D280 0006A1C0  38 74 00 18 */	addi r3, r20, 0x18
/* 8006D284 0006A1C4  90 19 00 00 */	stw r0, 0(r25)
/* 8006D288 0006A1C8  38 84 21 14 */	addi r4, r4, __ct__11J3DTevOrderFv@l
/* 8006D28C 0006A1CC  38 A0 00 00 */	li r5, 0
/* 8006D290 0006A1D0  38 C0 00 04 */	li r6, 4
/* 8006D294 0006A1D4  38 E0 00 08 */	li r7, 8
/* 8006D298 0006A1D8  48 05 45 A5 */	bl __construct_array
/* 8006D29C 0006A1DC  3C 80 80 06 */	lis r4, __ct__11J3DTevStageFv@ha
/* 8006D2A0 0006A1E0  38 74 00 38 */	addi r3, r20, 0x38
/* 8006D2A4 0006A1E4  38 84 1E D4 */	addi r4, r4, __ct__11J3DTevStageFv@l
/* 8006D2A8 0006A1E8  38 A0 00 00 */	li r5, 0
/* 8006D2AC 0006A1EC  38 C0 00 08 */	li r6, 8
/* 8006D2B0 0006A1F0  38 E0 00 08 */	li r7, 8
/* 8006D2B4 0006A1F4  48 05 45 89 */	bl __construct_array
/* 8006D2B8 0006A1F8  3C 80 80 06 */	lis r4, __ct__14J3DIndTevStageFv@ha
/* 8006D2BC 0006A1FC  38 74 00 78 */	addi r3, r20, 0x78
/* 8006D2C0 0006A200  38 84 1D F0 */	addi r4, r4, __ct__14J3DIndTevStageFv@l
/* 8006D2C4 0006A204  38 A0 00 00 */	li r5, 0
/* 8006D2C8 0006A208  38 C0 00 04 */	li r6, 4
/* 8006D2CC 0006A20C  38 E0 00 08 */	li r7, 8
/* 8006D2D0 0006A210  48 05 45 6D */	bl __construct_array
/* 8006D2D4 0006A214  3C 80 80 06 */	lis r4, __ct__13J3DGXColorS10Fv@ha
/* 8006D2D8 0006A218  38 74 00 98 */	addi r3, r20, 0x98
/* 8006D2DC 0006A21C  38 84 1D EC */	addi r4, r4, __ct__13J3DGXColorS10Fv@l
/* 8006D2E0 0006A220  38 A0 00 00 */	li r5, 0
/* 8006D2E4 0006A224  38 C0 00 08 */	li r6, 8
/* 8006D2E8 0006A228  38 E0 00 04 */	li r7, 4
/* 8006D2EC 0006A22C  48 05 45 51 */	bl __construct_array
/* 8006D2F0 0006A230  3C 80 80 06 */	lis r4, __ct__10J3DGXColorFv@ha
/* 8006D2F4 0006A234  38 74 00 B8 */	addi r3, r20, 0xb8
/* 8006D2F8 0006A238  38 84 17 F0 */	addi r4, r4, __ct__10J3DGXColorFv@l
/* 8006D2FC 0006A23C  38 A0 00 00 */	li r5, 0
/* 8006D300 0006A240  38 C0 00 04 */	li r6, 4
/* 8006D304 0006A244  38 E0 00 04 */	li r7, 4
/* 8006D308 0006A248  48 05 45 35 */	bl __construct_array
/* 8006D30C 0006A24C  7E 83 A3 78 */	mr r3, r20
/* 8006D310 0006A250  48 00 A0 9D */	bl initialize__18J3DTevBlockPatchedFv
.L_8006D314:
/* 8006D314 0006A254  93 3F 00 2C */	stw r25, 0x2c(r31)
/* 8006D318 0006A258  7F 83 E3 78 */	mr r3, r28
/* 8006D31C 0006A25C  4B FF 4E 61 */	bl createIndBlock__11J3DMaterialFi
/* 8006D320 0006A260  90 7F 00 30 */	stw r3, 0x30(r31)
/* 8006D324 0006A264  57 B8 08 3C */	slwi r24, r29, 1
/* 8006D328 0006A268  80 9E 00 08 */	lwz r4, 8(r30)
/* 8006D32C 0006A26C  3C 60 10 00 */	lis r3, 0x1000
/* 8006D330 0006A270  80 BE 00 04 */	lwz r5, 4(r30)
/* 8006D334 0006A274  7C 04 C2 2E */	lhzx r0, r4, r24
/* 8006D338 0006A278  1C 00 01 4C */	mulli r0, r0, 0x14c
/* 8006D33C 0006A27C  7C 85 00 AE */	lbzx r4, r5, r0
/* 8006D340 0006A280  4B FF 50 55 */	bl createPEBlock__11J3DMaterialFUlUl
/* 8006D344 0006A284  90 7F 00 34 */	stw r3, 0x34(r31)
/* 8006D348 0006A288  7F C3 F3 78 */	mr r3, r30
/* 8006D34C 0006A28C  80 BE 00 08 */	lwz r5, 8(r30)
/* 8006D350 0006A290  7F A4 EB 78 */	mr r4, r29
/* 8006D354 0006A294  B3 BF 00 14 */	sth r29, 0x14(r31)
/* 8006D358 0006A298  80 DE 00 04 */	lwz r6, 4(r30)
/* 8006D35C 0006A29C  7C 05 C2 2E */	lhzx r0, r5, r24
/* 8006D360 0006A2A0  1C 00 01 4C */	mulli r0, r0, 0x14c
/* 8006D364 0006A2A4  7C 06 00 AE */	lbzx r0, r6, r0
/* 8006D368 0006A2A8  90 1F 00 10 */	stw r0, 0x10(r31)
/* 8006D36C 0006A2AC  48 00 17 29 */	bl newTevStageNum__18J3DMaterialFactoryCFi
/* 8006D370 0006A2B0  7C 64 1B 78 */	mr r4, r3
/* 8006D374 0006A2B4  80 7F 00 2C */	lwz r3, 0x2c(r31)
/* 8006D378 0006A2B8  81 83 00 00 */	lwz r12, 0(r3)
/* 8006D37C 0006A2BC  81 8C 00 94 */	lwz r12, 0x94(r12)
/* 8006D380 0006A2C0  7D 89 03 A6 */	mtctr r12
/* 8006D384 0006A2C4  4E 80 04 21 */	bctrl 
/* 8006D388 0006A2C8  7F C3 F3 78 */	mr r3, r30
/* 8006D38C 0006A2CC  7F A4 EB 78 */	mr r4, r29
/* 8006D390 0006A2D0  48 00 10 71 */	bl newColorChanNum__18J3DMaterialFactoryCFi
/* 8006D394 0006A2D4  7C 64 1B 78 */	mr r4, r3
/* 8006D398 0006A2D8  80 7F 00 24 */	lwz r3, 0x24(r31)
/* 8006D39C 0006A2DC  81 83 00 00 */	lwz r12, 0(r3)
/* 8006D3A0 0006A2E0  81 8C 00 48 */	lwz r12, 0x48(r12)
/* 8006D3A4 0006A2E4  7D 89 03 A6 */	mtctr r12
/* 8006D3A8 0006A2E8  4E 80 04 21 */	bctrl 
/* 8006D3AC 0006A2EC  7F C3 F3 78 */	mr r3, r30
/* 8006D3B0 0006A2F0  7F A4 EB 78 */	mr r4, r29
/* 8006D3B4 0006A2F4  48 00 14 BD */	bl newCullMode__18J3DMaterialFactoryCFi
/* 8006D3B8 0006A2F8  7C 64 1B 78 */	mr r4, r3
/* 8006D3BC 0006A2FC  80 7F 00 24 */	lwz r3, 0x24(r31)
/* 8006D3C0 0006A300  81 83 00 00 */	lwz r12, 0(r3)
/* 8006D3C4 0006A304  81 8C 00 6C */	lwz r12, 0x6c(r12)
/* 8006D3C8 0006A308  7D 89 03 A6 */	mtctr r12
/* 8006D3CC 0006A30C  4E 80 04 21 */	bctrl 
/* 8006D3D0 0006A310  7F C4 F3 78 */	mr r4, r30
/* 8006D3D4 0006A314  7F A5 EB 78 */	mr r5, r29
/* 8006D3D8 0006A318  38 61 00 88 */	addi r3, r1, 0x88
/* 8006D3DC 0006A31C  48 00 1B A9 */	bl newFog__18J3DMaterialFactoryCFi
/* 8006D3E0 0006A320  80 7F 00 34 */	lwz r3, 0x34(r31)
/* 8006D3E4 0006A324  38 81 00 88 */	addi r4, r1, 0x88
/* 8006D3E8 0006A328  81 83 00 00 */	lwz r12, 0(r3)
/* 8006D3EC 0006A32C  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 8006D3F0 0006A330  7D 89 03 A6 */	mtctr r12
/* 8006D3F4 0006A334  4E 80 04 21 */	bctrl 
/* 8006D3F8 0006A338  7F C4 F3 78 */	mr r4, r30
/* 8006D3FC 0006A33C  7F A5 EB 78 */	mr r5, r29
/* 8006D400 0006A340  38 61 00 40 */	addi r3, r1, 0x40
/* 8006D404 0006A344  48 00 1D CD */	bl newAlphaComp__18J3DMaterialFactoryCFi
/* 8006D408 0006A348  80 7F 00 34 */	lwz r3, 0x34(r31)
/* 8006D40C 0006A34C  38 81 00 40 */	addi r4, r1, 0x40
/* 8006D410 0006A350  81 83 00 00 */	lwz r12, 0(r3)
/* 8006D414 0006A354  81 8C 00 38 */	lwz r12, 0x38(r12)
/* 8006D418 0006A358  7D 89 03 A6 */	mtctr r12
/* 8006D41C 0006A35C  4E 80 04 21 */	bctrl 
/* 8006D420 0006A360  7F C4 F3 78 */	mr r4, r30
/* 8006D424 0006A364  7F A5 EB 78 */	mr r5, r29
/* 8006D428 0006A368  38 61 00 3C */	addi r3, r1, 0x3c
/* 8006D42C 0006A36C  48 00 1E 25 */	bl newBlend__18J3DMaterialFactoryCFi
/* 8006D430 0006A370  80 7F 00 34 */	lwz r3, 0x34(r31)
/* 8006D434 0006A374  38 81 00 3C */	addi r4, r1, 0x3c
/* 8006D438 0006A378  81 83 00 00 */	lwz r12, 0(r3)
/* 8006D43C 0006A37C  81 8C 00 44 */	lwz r12, 0x44(r12)
/* 8006D440 0006A380  7D 89 03 A6 */	mtctr r12
/* 8006D444 0006A384  4E 80 04 21 */	bctrl 
/* 8006D448 0006A388  7F C4 F3 78 */	mr r4, r30
/* 8006D44C 0006A38C  7F A5 EB 78 */	mr r5, r29
/* 8006D450 0006A390  38 61 00 0C */	addi r3, r1, 0xc
/* 8006D454 0006A394  48 00 1E 79 */	bl newZMode__18J3DMaterialFactoryCFi
/* 8006D458 0006A398  A0 01 00 0C */	lhz r0, 0xc(r1)
/* 8006D45C 0006A39C  38 81 00 10 */	addi r4, r1, 0x10
/* 8006D460 0006A3A0  B0 01 00 10 */	sth r0, 0x10(r1)
/* 8006D464 0006A3A4  80 7F 00 34 */	lwz r3, 0x34(r31)
/* 8006D468 0006A3A8  81 83 00 00 */	lwz r12, 0(r3)
/* 8006D46C 0006A3AC  81 8C 00 50 */	lwz r12, 0x50(r12)
/* 8006D470 0006A3B0  7D 89 03 A6 */	mtctr r12
/* 8006D474 0006A3B4  4E 80 04 21 */	bctrl 
/* 8006D478 0006A3B8  7F C3 F3 78 */	mr r3, r30
/* 8006D47C 0006A3BC  7F A4 EB 78 */	mr r4, r29
/* 8006D480 0006A3C0  48 00 1E AD */	bl newZCompLoc__18J3DMaterialFactoryCFi
/* 8006D484 0006A3C4  7C 64 1B 78 */	mr r4, r3
/* 8006D488 0006A3C8  80 7F 00 34 */	lwz r3, 0x34(r31)
/* 8006D48C 0006A3CC  81 83 00 00 */	lwz r12, 0(r3)
/* 8006D490 0006A3D0  81 8C 00 5C */	lwz r12, 0x5c(r12)
/* 8006D494 0006A3D4  7D 89 03 A6 */	mtctr r12
/* 8006D498 0006A3D8  4E 80 04 21 */	bctrl 
/* 8006D49C 0006A3DC  7F C3 F3 78 */	mr r3, r30
/* 8006D4A0 0006A3E0  7F A4 EB 78 */	mr r4, r29
/* 8006D4A4 0006A3E4  48 00 1E C1 */	bl newDither__18J3DMaterialFactoryCFi
/* 8006D4A8 0006A3E8  7C 64 1B 78 */	mr r4, r3
/* 8006D4AC 0006A3EC  80 7F 00 34 */	lwz r3, 0x34(r31)
/* 8006D4B0 0006A3F0  81 83 00 00 */	lwz r12, 0(r3)
/* 8006D4B4 0006A3F4  81 8C 00 68 */	lwz r12, 0x68(r12)
/* 8006D4B8 0006A3F8  7D 89 03 A6 */	mtctr r12
/* 8006D4BC 0006A3FC  4E 80 04 21 */	bctrl 
/* 8006D4C0 0006A400  80 7F 00 2C */	lwz r3, 0x2c(r31)
/* 8006D4C4 0006A404  81 83 00 00 */	lwz r12, 0(r3)
/* 8006D4C8 0006A408  81 8C 00 98 */	lwz r12, 0x98(r12)
/* 8006D4CC 0006A40C  7D 89 03 A6 */	mtctr r12
/* 8006D4D0 0006A410  4E 80 04 21 */	bctrl 
/* 8006D4D4 0006A414  7C 79 1B 78 */	mr r25, r3
/* 8006D4D8 0006A418  3A 40 00 00 */	li r18, 0
/* 8006D4DC 0006A41C  48 00 00 34 */	b .L_8006D510
.L_8006D4E0:
/* 8006D4E0 0006A420  7F C3 F3 78 */	mr r3, r30
/* 8006D4E4 0006A424  7F A4 EB 78 */	mr r4, r29
/* 8006D4E8 0006A428  56 45 06 3E */	clrlwi r5, r18, 0x18
/* 8006D4EC 0006A42C  48 00 13 C5 */	bl newTexNo__18J3DMaterialFactoryCFii
/* 8006D4F0 0006A430  7C 65 1B 78 */	mr r5, r3
/* 8006D4F4 0006A434  80 7F 00 2C */	lwz r3, 0x2c(r31)
/* 8006D4F8 0006A438  56 44 06 3E */	clrlwi r4, r18, 0x18
/* 8006D4FC 0006A43C  81 83 00 00 */	lwz r12, 0(r3)
/* 8006D500 0006A440  81 8C 00 4C */	lwz r12, 0x4c(r12)
/* 8006D504 0006A444  7D 89 03 A6 */	mtctr r12
/* 8006D508 0006A448  4E 80 04 21 */	bctrl 
/* 8006D50C 0006A44C  3A 52 00 01 */	addi r18, r18, 1
.L_8006D510:
/* 8006D510 0006A450  56 40 06 3E */	clrlwi r0, r18, 0x18
/* 8006D514 0006A454  28 00 00 08 */	cmplwi r0, 8
/* 8006D518 0006A458  41 80 FF C8 */	blt .L_8006D4E0
/* 8006D51C 0006A45C  57 33 06 3E */	clrlwi r19, r25, 0x18
/* 8006D520 0006A460  3A 40 00 00 */	li r18, 0
/* 8006D524 0006A464  48 00 00 40 */	b .L_8006D564
.L_8006D528:
/* 8006D528 0006A468  7F C4 F3 78 */	mr r4, r30
/* 8006D52C 0006A46C  7F A5 EB 78 */	mr r5, r29
/* 8006D530 0006A470  38 61 00 34 */	addi r3, r1, 0x34
/* 8006D534 0006A474  56 46 06 3E */	clrlwi r6, r18, 0x18
/* 8006D538 0006A478  48 00 13 C1 */	bl newTevOrder__18J3DMaterialFactoryCFii
/* 8006D53C 0006A47C  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8006D540 0006A480  56 44 06 3E */	clrlwi r4, r18, 0x18
/* 8006D544 0006A484  38 A1 00 38 */	addi r5, r1, 0x38
/* 8006D548 0006A488  90 01 00 38 */	stw r0, 0x38(r1)
/* 8006D54C 0006A48C  80 7F 00 2C */	lwz r3, 0x2c(r31)
/* 8006D550 0006A490  81 83 00 00 */	lwz r12, 0(r3)
/* 8006D554 0006A494  81 8C 00 58 */	lwz r12, 0x58(r12)
/* 8006D558 0006A498  7D 89 03 A6 */	mtctr r12
/* 8006D55C 0006A49C  4E 80 04 21 */	bctrl 
/* 8006D560 0006A4A0  3A 52 00 01 */	addi r18, r18, 1
.L_8006D564:
/* 8006D564 0006A4A4  56 40 06 3E */	clrlwi r0, r18, 0x18
/* 8006D568 0006A4A8  7C 00 98 40 */	cmplw r0, r19
/* 8006D56C 0006A4AC  41 80 FF BC */	blt .L_8006D528
/* 8006D570 0006A4B0  3A 40 00 00 */	li r18, 0
/* 8006D574 0006A4B4  48 00 00 38 */	b .L_8006D5AC
.L_8006D578:
/* 8006D578 0006A4B8  7F C4 F3 78 */	mr r4, r30
/* 8006D57C 0006A4BC  7F A5 EB 78 */	mr r5, r29
/* 8006D580 0006A4C0  38 61 00 30 */	addi r3, r1, 0x30
/* 8006D584 0006A4C4  56 46 06 3E */	clrlwi r6, r18, 0x18
/* 8006D588 0006A4C8  48 00 14 7D */	bl newTevKColor__18J3DMaterialFactoryCFii
/* 8006D58C 0006A4CC  80 7F 00 2C */	lwz r3, 0x2c(r31)
/* 8006D590 0006A4D0  56 44 06 3E */	clrlwi r4, r18, 0x18
/* 8006D594 0006A4D4  38 A1 00 30 */	addi r5, r1, 0x30
/* 8006D598 0006A4D8  81 83 00 00 */	lwz r12, 0(r3)
/* 8006D59C 0006A4DC  81 8C 00 70 */	lwz r12, 0x70(r12)
/* 8006D5A0 0006A4E0  7D 89 03 A6 */	mtctr r12
/* 8006D5A4 0006A4E4  4E 80 04 21 */	bctrl 
/* 8006D5A8 0006A4E8  3A 52 00 01 */	addi r18, r18, 1
.L_8006D5AC:
/* 8006D5AC 0006A4EC  56 40 06 3E */	clrlwi r0, r18, 0x18
/* 8006D5B0 0006A4F0  28 00 00 04 */	cmplwi r0, 4
/* 8006D5B4 0006A4F4  41 80 FF C4 */	blt .L_8006D578
/* 8006D5B8 0006A4F8  3A 40 00 00 */	li r18, 0
/* 8006D5BC 0006A4FC  48 00 00 38 */	b .L_8006D5F4
.L_8006D5C0:
/* 8006D5C0 0006A500  7F C4 F3 78 */	mr r4, r30
/* 8006D5C4 0006A504  7F A5 EB 78 */	mr r5, r29
/* 8006D5C8 0006A508  38 61 00 5C */	addi r3, r1, 0x5c
/* 8006D5CC 0006A50C  56 46 06 3E */	clrlwi r6, r18, 0x18
/* 8006D5D0 0006A510  48 00 13 9D */	bl newTevColor__18J3DMaterialFactoryCFii
/* 8006D5D4 0006A514  80 7F 00 2C */	lwz r3, 0x2c(r31)
/* 8006D5D8 0006A518  56 44 06 3E */	clrlwi r4, r18, 0x18
/* 8006D5DC 0006A51C  38 A1 00 5C */	addi r5, r1, 0x5c
/* 8006D5E0 0006A520  81 83 00 00 */	lwz r12, 0(r3)
/* 8006D5E4 0006A524  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 8006D5E8 0006A528  7D 89 03 A6 */	mtctr r12
/* 8006D5EC 0006A52C  4E 80 04 21 */	bctrl 
/* 8006D5F0 0006A530  3A 52 00 01 */	addi r18, r18, 1
.L_8006D5F4:
/* 8006D5F4 0006A534  56 40 06 3E */	clrlwi r0, r18, 0x18
/* 8006D5F8 0006A538  28 00 00 04 */	cmplwi r0, 4
/* 8006D5FC 0006A53C  41 80 FF C4 */	blt .L_8006D5C0
/* 8006D600 0006A540  83 5E 00 04 */	lwz r26, 4(r30)
/* 8006D604 0006A544  57 33 06 3E */	clrlwi r19, r25, 0x18
/* 8006D608 0006A548  83 7E 00 08 */	lwz r27, 8(r30)
/* 8006D60C 0006A54C  3A A0 00 00 */	li r21, 0
/* 8006D610 0006A550  48 00 00 E0 */	b .L_8006D6F0
.L_8006D614:
/* 8006D614 0006A554  7C 18 DA 2E */	lhzx r0, r24, r27
/* 8006D618 0006A558  7F C4 F3 78 */	mr r4, r30
/* 8006D61C 0006A55C  7F A5 EB 78 */	mr r5, r29
/* 8006D620 0006A560  38 61 00 4C */	addi r3, r1, 0x4c
/* 8006D624 0006A564  1C 00 01 4C */	mulli r0, r0, 0x14c
/* 8006D628 0006A568  56 A6 06 3E */	clrlwi r6, r21, 0x18
/* 8006D62C 0006A56C  7E 9A 02 14 */	add r20, r26, r0
/* 8006D630 0006A570  48 00 14 9D */	bl newTevStage__18J3DMaterialFactoryCFii
/* 8006D634 0006A574  80 61 00 4C */	lwz r3, 0x4c(r1)
/* 8006D638 0006A578  56 B7 06 3E */	clrlwi r23, r21, 0x18
/* 8006D63C 0006A57C  80 01 00 50 */	lwz r0, 0x50(r1)
/* 8006D640 0006A580  7E E4 BB 78 */	mr r4, r23
/* 8006D644 0006A584  90 61 00 54 */	stw r3, 0x54(r1)
/* 8006D648 0006A588  38 A1 00 54 */	addi r5, r1, 0x54
/* 8006D64C 0006A58C  90 01 00 58 */	stw r0, 0x58(r1)
/* 8006D650 0006A590  80 7F 00 2C */	lwz r3, 0x2c(r31)
/* 8006D654 0006A594  81 83 00 00 */	lwz r12, 0(r3)
/* 8006D658 0006A598  81 8C 00 A0 */	lwz r12, 0xa0(r12)
/* 8006D65C 0006A59C  7D 89 03 A6 */	mtctr r12
/* 8006D660 0006A5A0  4E 80 04 21 */	bctrl 
/* 8006D664 0006A5A4  56 E3 08 3C */	slwi r3, r23, 1
/* 8006D668 0006A5A8  3A C3 01 04 */	addi r22, r3, 0x104
/* 8006D66C 0006A5AC  7C 14 B2 2E */	lhzx r0, r20, r22
/* 8006D670 0006A5B0  28 00 FF FF */	cmplwi r0, 0xffff
/* 8006D674 0006A5B4  41 82 00 78 */	beq .L_8006D6EC
/* 8006D678 0006A5B8  80 7F 00 2C */	lwz r3, 0x2c(r31)
/* 8006D67C 0006A5BC  54 04 13 BA */	rlwinm r4, r0, 2, 0xe, 0x1d
/* 8006D680 0006A5C0  80 BE 00 54 */	lwz r5, 0x54(r30)
/* 8006D684 0006A5C4  38 04 00 01 */	addi r0, r4, 1
/* 8006D688 0006A5C8  81 83 00 00 */	lwz r12, 0(r3)
/* 8006D68C 0006A5CC  7E E4 BB 78 */	mr r4, r23
/* 8006D690 0006A5D0  7E 45 00 AE */	lbzx r18, r5, r0
/* 8006D694 0006A5D4  81 8C 00 A4 */	lwz r12, 0xa4(r12)
/* 8006D698 0006A5D8  7D 89 03 A6 */	mtctr r12
/* 8006D69C 0006A5DC  4E 80 04 21 */	bctrl 
/* 8006D6A0 0006A5E0  88 C3 00 07 */	lbz r6, 7(r3)
/* 8006D6A4 0006A5E4  56 40 15 BA */	rlwinm r0, r18, 2, 0x16, 0x1d
/* 8006D6A8 0006A5E8  80 BE 00 54 */	lwz r5, 0x54(r30)
/* 8006D6AC 0006A5EC  7E E4 BB 78 */	mr r4, r23
/* 8006D6B0 0006A5F0  54 C6 07 B6 */	rlwinm r6, r6, 0, 0x1e, 0x1b
/* 8006D6B4 0006A5F4  7C C0 03 78 */	or r0, r6, r0
/* 8006D6B8 0006A5F8  98 03 00 07 */	stb r0, 7(r3)
/* 8006D6BC 0006A5FC  80 7F 00 2C */	lwz r3, 0x2c(r31)
/* 8006D6C0 0006A600  7C 14 B2 2E */	lhzx r0, r20, r22
/* 8006D6C4 0006A604  81 83 00 00 */	lwz r12, 0(r3)
/* 8006D6C8 0006A608  54 00 10 3A */	slwi r0, r0, 2
/* 8006D6CC 0006A60C  81 8C 00 A4 */	lwz r12, 0xa4(r12)
/* 8006D6D0 0006A610  7E 45 00 AE */	lbzx r18, r5, r0
/* 8006D6D4 0006A614  7D 89 03 A6 */	mtctr r12
/* 8006D6D8 0006A618  4E 80 04 21 */	bctrl 
/* 8006D6DC 0006A61C  88 03 00 07 */	lbz r0, 7(r3)
/* 8006D6E0 0006A620  54 00 00 3A */	rlwinm r0, r0, 0, 0, 0x1d
/* 8006D6E4 0006A624  7C 00 93 78 */	or r0, r0, r18
/* 8006D6E8 0006A628  98 03 00 07 */	stb r0, 7(r3)
.L_8006D6EC:
/* 8006D6EC 0006A62C  3A B5 00 01 */	addi r21, r21, 1
.L_8006D6F0:
/* 8006D6F0 0006A630  56 A0 06 3E */	clrlwi r0, r21, 0x18
/* 8006D6F4 0006A634  7C 00 98 40 */	cmplw r0, r19
/* 8006D6F8 0006A638  41 80 FF 1C */	blt .L_8006D614
/* 8006D6FC 0006A63C  80 7E 00 08 */	lwz r3, 8(r30)
/* 8006D700 0006A640  57 34 06 3E */	clrlwi r20, r25, 0x18
/* 8006D704 0006A644  80 9E 00 04 */	lwz r4, 4(r30)
/* 8006D708 0006A648  3A 60 00 00 */	li r19, 0
/* 8006D70C 0006A64C  7C 03 C2 2E */	lhzx r0, r3, r24
/* 8006D710 0006A650  1C 00 01 4C */	mulli r0, r0, 0x14c
/* 8006D714 0006A654  7E 44 02 14 */	add r18, r4, r0
/* 8006D718 0006A658  48 00 00 4C */	b .L_8006D764
.L_8006D71C:
/* 8006D71C 0006A65C  56 64 06 3E */	clrlwi r4, r19, 0x18
/* 8006D720 0006A660  38 04 00 9C */	addi r0, r4, 0x9c
/* 8006D724 0006A664  7C B2 00 AE */	lbzx r5, r18, r0
/* 8006D728 0006A668  28 05 00 FF */	cmplwi r5, 0xff
/* 8006D72C 0006A66C  41 82 00 1C */	beq .L_8006D748
/* 8006D730 0006A670  80 7F 00 2C */	lwz r3, 0x2c(r31)
/* 8006D734 0006A674  81 83 00 00 */	lwz r12, 0(r3)
/* 8006D738 0006A678  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 8006D73C 0006A67C  7D 89 03 A6 */	mtctr r12
/* 8006D740 0006A680  4E 80 04 21 */	bctrl 
/* 8006D744 0006A684  48 00 00 1C */	b .L_8006D760
.L_8006D748:
/* 8006D748 0006A688  80 7F 00 2C */	lwz r3, 0x2c(r31)
/* 8006D74C 0006A68C  38 A0 00 0C */	li r5, 0xc
/* 8006D750 0006A690  81 83 00 00 */	lwz r12, 0(r3)
/* 8006D754 0006A694  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 8006D758 0006A698  7D 89 03 A6 */	mtctr r12
/* 8006D75C 0006A69C  4E 80 04 21 */	bctrl 
.L_8006D760:
/* 8006D760 0006A6A0  3A 73 00 01 */	addi r19, r19, 1
.L_8006D764:
/* 8006D764 0006A6A4  56 60 06 3E */	clrlwi r0, r19, 0x18
/* 8006D768 0006A6A8  7C 00 A0 40 */	cmplw r0, r20
/* 8006D76C 0006A6AC  41 80 FF B0 */	blt .L_8006D71C
/* 8006D770 0006A6B0  3A 40 00 00 */	li r18, 0
/* 8006D774 0006A6B4  48 00 00 38 */	b .L_8006D7AC
.L_8006D778:
/* 8006D778 0006A6B8  7F C4 F3 78 */	mr r4, r30
/* 8006D77C 0006A6BC  7F A5 EB 78 */	mr r5, r29
/* 8006D780 0006A6C0  38 61 00 2C */	addi r3, r1, 0x2c
/* 8006D784 0006A6C4  56 46 06 3E */	clrlwi r6, r18, 0x18
/* 8006D788 0006A6C8  48 00 0B E9 */	bl newMatColor__18J3DMaterialFactoryCFii
/* 8006D78C 0006A6CC  80 7F 00 24 */	lwz r3, 0x24(r31)
/* 8006D790 0006A6D0  56 44 06 3E */	clrlwi r4, r18, 0x18
/* 8006D794 0006A6D4  38 A1 00 2C */	addi r5, r1, 0x2c
/* 8006D798 0006A6D8  81 83 00 00 */	lwz r12, 0(r3)
/* 8006D79C 0006A6DC  81 8C 00 34 */	lwz r12, 0x34(r12)
/* 8006D7A0 0006A6E0  7D 89 03 A6 */	mtctr r12
/* 8006D7A4 0006A6E4  4E 80 04 21 */	bctrl 
/* 8006D7A8 0006A6E8  3A 52 00 01 */	addi r18, r18, 1
.L_8006D7AC:
/* 8006D7AC 0006A6EC  56 40 06 3E */	clrlwi r0, r18, 0x18
/* 8006D7B0 0006A6F0  28 00 00 02 */	cmplwi r0, 2
/* 8006D7B4 0006A6F4  41 80 FF C4 */	blt .L_8006D778
/* 8006D7B8 0006A6F8  3A 40 00 00 */	li r18, 0
/* 8006D7BC 0006A6FC  48 00 00 40 */	b .L_8006D7FC
.L_8006D7C0:
/* 8006D7C0 0006A700  7F C4 F3 78 */	mr r4, r30
/* 8006D7C4 0006A704  7F A5 EB 78 */	mr r5, r29
/* 8006D7C8 0006A708  38 61 00 08 */	addi r3, r1, 8
/* 8006D7CC 0006A70C  56 46 06 3E */	clrlwi r6, r18, 0x18
/* 8006D7D0 0006A710  48 00 0C 69 */	bl newColorChan__18J3DMaterialFactoryCFii
/* 8006D7D4 0006A714  A0 01 00 08 */	lhz r0, 8(r1)
/* 8006D7D8 0006A718  56 44 06 3E */	clrlwi r4, r18, 0x18
/* 8006D7DC 0006A71C  38 A1 00 14 */	addi r5, r1, 0x14
/* 8006D7E0 0006A720  B0 01 00 14 */	sth r0, 0x14(r1)
/* 8006D7E4 0006A724  80 7F 00 24 */	lwz r3, 0x24(r31)
/* 8006D7E8 0006A728  81 83 00 00 */	lwz r12, 0(r3)
/* 8006D7EC 0006A72C  81 8C 00 54 */	lwz r12, 0x54(r12)
/* 8006D7F0 0006A730  7D 89 03 A6 */	mtctr r12
/* 8006D7F4 0006A734  4E 80 04 21 */	bctrl 
/* 8006D7F8 0006A738  3A 52 00 01 */	addi r18, r18, 1
.L_8006D7FC:
/* 8006D7FC 0006A73C  56 40 06 3E */	clrlwi r0, r18, 0x18
/* 8006D800 0006A740  28 00 00 04 */	cmplwi r0, 4
/* 8006D804 0006A744  41 80 FF BC */	blt .L_8006D7C0
/* 8006D808 0006A748  80 7E 00 08 */	lwz r3, 8(r30)
/* 8006D80C 0006A74C  80 9E 00 04 */	lwz r4, 4(r30)
/* 8006D810 0006A750  7C 03 C2 2E */	lhzx r0, r3, r24
/* 8006D814 0006A754  1C 60 01 4C */	mulli r3, r0, 0x14c
/* 8006D818 0006A758  38 03 00 03 */	addi r0, r3, 3
/* 8006D81C 0006A75C  7C 04 00 AE */	lbzx r0, r4, r0
/* 8006D820 0006A760  28 00 00 FF */	cmplwi r0, 0xff
/* 8006D824 0006A764  41 82 00 10 */	beq .L_8006D834
/* 8006D828 0006A768  80 7E 00 24 */	lwz r3, 0x24(r30)
/* 8006D82C 0006A76C  7E 43 00 AE */	lbzx r18, r3, r0
/* 8006D830 0006A770  48 00 00 08 */	b .L_8006D838
.L_8006D834:
/* 8006D834 0006A774  3A 40 00 00 */	li r18, 0
.L_8006D838:
/* 8006D838 0006A778  7F C3 F3 78 */	mr r3, r30
/* 8006D83C 0006A77C  7F A4 EB 78 */	mr r4, r29
/* 8006D840 0006A780  48 00 0E 1D */	bl newTexGenNum__18J3DMaterialFactoryCFi
/* 8006D844 0006A784  7C 64 1B 78 */	mr r4, r3
/* 8006D848 0006A788  80 7F 00 28 */	lwz r3, 0x28(r31)
/* 8006D84C 0006A78C  81 83 00 00 */	lwz r12, 0(r3)
/* 8006D850 0006A790  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8006D854 0006A794  7D 89 03 A6 */	mtctr r12
/* 8006D858 0006A798  4E 80 04 21 */	bctrl 
/* 8006D85C 0006A79C  3A 60 00 00 */	li r19, 0
/* 8006D860 0006A7A0  48 00 00 34 */	b .L_8006D894
.L_8006D864:
/* 8006D864 0006A7A4  7F C3 F3 78 */	mr r3, r30
/* 8006D868 0006A7A8  7F A4 EB 78 */	mr r4, r29
/* 8006D86C 0006A7AC  56 65 06 3E */	clrlwi r5, r19, 0x18
/* 8006D870 0006A7B0  48 00 0E A9 */	bl newTexMtx__18J3DMaterialFactoryCFii
/* 8006D874 0006A7B4  7C 65 1B 78 */	mr r5, r3
/* 8006D878 0006A7B8  80 7F 00 28 */	lwz r3, 0x28(r31)
/* 8006D87C 0006A7BC  56 64 06 3E */	clrlwi r4, r19, 0x18
/* 8006D880 0006A7C0  81 83 00 00 */	lwz r12, 0(r3)
/* 8006D884 0006A7C4  81 8C 00 4C */	lwz r12, 0x4c(r12)
/* 8006D888 0006A7C8  7D 89 03 A6 */	mtctr r12
/* 8006D88C 0006A7CC  4E 80 04 21 */	bctrl 
/* 8006D890 0006A7D0  3A 73 00 01 */	addi r19, r19, 1
.L_8006D894:
/* 8006D894 0006A7D4  56 60 06 3E */	clrlwi r0, r19, 0x18
/* 8006D898 0006A7D8  28 00 00 08 */	cmplwi r0, 8
/* 8006D89C 0006A7DC  41 80 FF C8 */	blt .L_8006D864
/* 8006D8A0 0006A7E0  3A 60 00 00 */	li r19, 0
/* 8006D8A4 0006A7E4  48 00 00 44 */	b .L_8006D8E8
.L_8006D8A8:
/* 8006D8A8 0006A7E8  7F C4 F3 78 */	mr r4, r30
/* 8006D8AC 0006A7EC  7F A5 EB 78 */	mr r5, r29
/* 8006D8B0 0006A7F0  38 61 00 44 */	addi r3, r1, 0x44
/* 8006D8B4 0006A7F4  48 00 0D E1 */	bl newTexCoord__18J3DMaterialFactoryCFii
/* 8006D8B8 0006A7F8  80 61 00 44 */	lwz r3, 0x44(r1)
/* 8006D8BC 0006A7FC  56 64 06 3E */	clrlwi r4, r19, 0x18
/* 8006D8C0 0006A800  A0 01 00 48 */	lhz r0, 0x48(r1)
/* 8006D8C4 0006A804  38 A1 00 64 */	addi r5, r1, 0x64
/* 8006D8C8 0006A808  90 61 00 64 */	stw r3, 0x64(r1)
/* 8006D8CC 0006A80C  B0 01 00 68 */	sth r0, 0x68(r1)
/* 8006D8D0 0006A810  80 7F 00 28 */	lwz r3, 0x28(r31)
/* 8006D8D4 0006A814  81 83 00 00 */	lwz r12, 0(r3)
/* 8006D8D8 0006A818  81 8C 00 44 */	lwz r12, 0x44(r12)
/* 8006D8DC 0006A81C  7D 89 03 A6 */	mtctr r12
/* 8006D8E0 0006A820  4E 80 04 21 */	bctrl 
/* 8006D8E4 0006A824  3A 73 00 01 */	addi r19, r19, 1
.L_8006D8E8:
/* 8006D8E8 0006A828  56 66 06 3E */	clrlwi r6, r19, 0x18
/* 8006D8EC 0006A82C  7C 06 90 40 */	cmplw r6, r18
/* 8006D8F0 0006A830  41 80 FF B8 */	blt .L_8006D8A8
/* 8006D8F4 0006A834  28 1C 00 00 */	cmplwi r28, 0
/* 8006D8F8 0006A838  41 82 01 84 */	beq .L_8006DA7C
/* 8006D8FC 0006A83C  80 1E 00 0C */	lwz r0, 0xc(r30)
/* 8006D900 0006A840  28 00 00 00 */	cmplwi r0, 0
/* 8006D904 0006A844  41 82 01 78 */	beq .L_8006DA7C
/* 8006D908 0006A848  7F C3 F3 78 */	mr r3, r30
/* 8006D90C 0006A84C  7F A4 EB 78 */	mr r4, r29
/* 8006D910 0006A850  48 00 13 19 */	bl newIndTexStageNum__18J3DMaterialFactoryCFi
/* 8006D914 0006A854  7C 75 1B 78 */	mr r21, r3
/* 8006D918 0006A858  7F C3 F3 78 */	mr r3, r30
/* 8006D91C 0006A85C  7F A4 EB 78 */	mr r4, r29
/* 8006D920 0006A860  48 00 13 09 */	bl newIndTexStageNum__18J3DMaterialFactoryCFi
/* 8006D924 0006A864  7C 64 1B 78 */	mr r4, r3
/* 8006D928 0006A868  80 7F 00 30 */	lwz r3, 0x30(r31)
/* 8006D92C 0006A86C  81 83 00 00 */	lwz r12, 0(r3)
/* 8006D930 0006A870  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8006D934 0006A874  7D 89 03 A6 */	mtctr r12
/* 8006D938 0006A878  4E 80 04 21 */	bctrl 
/* 8006D93C 0006A87C  56 B4 06 3E */	clrlwi r20, r21, 0x18
/* 8006D940 0006A880  3A 40 00 00 */	li r18, 0
/* 8006D944 0006A884  48 00 00 38 */	b .L_8006D97C
.L_8006D948:
/* 8006D948 0006A888  7F C4 F3 78 */	mr r4, r30
/* 8006D94C 0006A88C  7F A5 EB 78 */	mr r5, r29
/* 8006D950 0006A890  38 61 00 6C */	addi r3, r1, 0x6c
/* 8006D954 0006A894  56 46 06 3E */	clrlwi r6, r18, 0x18
/* 8006D958 0006A898  48 00 13 59 */	bl newIndTexMtx__18J3DMaterialFactoryCFii
/* 8006D95C 0006A89C  80 7F 00 30 */	lwz r3, 0x30(r31)
/* 8006D960 0006A8A0  56 44 06 3E */	clrlwi r4, r18, 0x18
/* 8006D964 0006A8A4  38 A1 00 6C */	addi r5, r1, 0x6c
/* 8006D968 0006A8A8  81 83 00 00 */	lwz r12, 0(r3)
/* 8006D96C 0006A8AC  81 8C 00 34 */	lwz r12, 0x34(r12)
/* 8006D970 0006A8B0  7D 89 03 A6 */	mtctr r12
/* 8006D974 0006A8B4  4E 80 04 21 */	bctrl 
/* 8006D978 0006A8B8  3A 52 00 01 */	addi r18, r18, 1
.L_8006D97C:
/* 8006D97C 0006A8BC  56 40 06 3E */	clrlwi r0, r18, 0x18
/* 8006D980 0006A8C0  7C 00 A0 40 */	cmplw r0, r20
/* 8006D984 0006A8C4  41 80 FF C4 */	blt .L_8006D948
/* 8006D988 0006A8C8  56 B4 06 3E */	clrlwi r20, r21, 0x18
/* 8006D98C 0006A8CC  3A 40 00 00 */	li r18, 0
/* 8006D990 0006A8D0  48 00 00 40 */	b .L_8006D9D0
.L_8006D994:
/* 8006D994 0006A8D4  7F C4 F3 78 */	mr r4, r30
/* 8006D998 0006A8D8  7F A5 EB 78 */	mr r5, r29
/* 8006D99C 0006A8DC  38 61 00 24 */	addi r3, r1, 0x24
/* 8006D9A0 0006A8E0  56 46 06 3E */	clrlwi r6, r18, 0x18
/* 8006D9A4 0006A8E4  48 00 12 AD */	bl newIndTexOrder__18J3DMaterialFactoryCFii
/* 8006D9A8 0006A8E8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8006D9AC 0006A8EC  56 44 06 3E */	clrlwi r4, r18, 0x18
/* 8006D9B0 0006A8F0  38 A1 00 28 */	addi r5, r1, 0x28
/* 8006D9B4 0006A8F4  90 01 00 28 */	stw r0, 0x28(r1)
/* 8006D9B8 0006A8F8  80 7F 00 30 */	lwz r3, 0x30(r31)
/* 8006D9BC 0006A8FC  81 83 00 00 */	lwz r12, 0(r3)
/* 8006D9C0 0006A900  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8006D9C4 0006A904  7D 89 03 A6 */	mtctr r12
/* 8006D9C8 0006A908  4E 80 04 21 */	bctrl 
/* 8006D9CC 0006A90C  3A 52 00 01 */	addi r18, r18, 1
.L_8006D9D0:
/* 8006D9D0 0006A910  56 40 06 3E */	clrlwi r0, r18, 0x18
/* 8006D9D4 0006A914  7C 00 A0 40 */	cmplw r0, r20
/* 8006D9D8 0006A918  41 80 FF BC */	blt .L_8006D994
/* 8006D9DC 0006A91C  56 B4 06 3E */	clrlwi r20, r21, 0x18
/* 8006D9E0 0006A920  3A 40 00 00 */	li r18, 0
/* 8006D9E4 0006A924  48 00 00 38 */	b .L_8006DA1C
.L_8006D9E8:
/* 8006D9E8 0006A928  7F C4 F3 78 */	mr r4, r30
/* 8006D9EC 0006A92C  7F A5 EB 78 */	mr r5, r29
/* 8006D9F0 0006A930  38 61 00 20 */	addi r3, r1, 0x20
/* 8006D9F4 0006A934  56 46 06 3E */	clrlwi r6, r18, 0x18
/* 8006D9F8 0006A938  48 00 15 2D */	bl newIndTexCoordScale__18J3DMaterialFactoryCFii
/* 8006D9FC 0006A93C  80 7F 00 30 */	lwz r3, 0x30(r31)
/* 8006DA00 0006A940  56 44 06 3E */	clrlwi r4, r18, 0x18
/* 8006DA04 0006A944  38 A1 00 20 */	addi r5, r1, 0x20
/* 8006DA08 0006A948  81 83 00 00 */	lwz r12, 0(r3)
/* 8006DA0C 0006A94C  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 8006DA10 0006A950  7D 89 03 A6 */	mtctr r12
/* 8006DA14 0006A954  4E 80 04 21 */	bctrl 
/* 8006DA18 0006A958  3A 52 00 01 */	addi r18, r18, 1
.L_8006DA1C:
/* 8006DA1C 0006A95C  56 40 06 3E */	clrlwi r0, r18, 0x18
/* 8006DA20 0006A960  7C 00 A0 40 */	cmplw r0, r20
/* 8006DA24 0006A964  41 80 FF C4 */	blt .L_8006D9E8
/* 8006DA28 0006A968  57 34 06 3E */	clrlwi r20, r25, 0x18
/* 8006DA2C 0006A96C  3A 40 00 00 */	li r18, 0
/* 8006DA30 0006A970  48 00 00 40 */	b .L_8006DA70
.L_8006DA34:
/* 8006DA34 0006A974  7F C4 F3 78 */	mr r4, r30
/* 8006DA38 0006A978  7F A5 EB 78 */	mr r5, r29
/* 8006DA3C 0006A97C  38 61 00 18 */	addi r3, r1, 0x18
/* 8006DA40 0006A980  56 46 06 3E */	clrlwi r6, r18, 0x18
/* 8006DA44 0006A984  48 00 13 4D */	bl newIndTevStage__18J3DMaterialFactoryCFii
/* 8006DA48 0006A988  80 01 00 18 */	lwz r0, 0x18(r1)
/* 8006DA4C 0006A98C  56 44 06 3E */	clrlwi r4, r18, 0x18
/* 8006DA50 0006A990  38 A1 00 1C */	addi r5, r1, 0x1c
/* 8006DA54 0006A994  90 01 00 1C */	stw r0, 0x1c(r1)
/* 8006DA58 0006A998  80 7F 00 2C */	lwz r3, 0x2c(r31)
/* 8006DA5C 0006A99C  81 83 00 00 */	lwz r12, 0(r3)
/* 8006DA60 0006A9A0  81 8C 00 C0 */	lwz r12, 0xc0(r12)
/* 8006DA64 0006A9A4  7D 89 03 A6 */	mtctr r12
/* 8006DA68 0006A9A8  4E 80 04 21 */	bctrl 
/* 8006DA6C 0006A9AC  3A 52 00 01 */	addi r18, r18, 1
.L_8006DA70:
/* 8006DA70 0006A9B0  56 40 06 3E */	clrlwi r0, r18, 0x18
/* 8006DA74 0006A9B4  7C 00 A0 40 */	cmplw r0, r20
/* 8006DA78 0006A9B8  41 80 FF BC */	blt .L_8006DA34
.L_8006DA7C:
/* 8006DA7C 0006A9BC  7F E3 FB 78 */	mr r3, r31
/* 8006DA80 0006A9C0  BA 41 00 B8 */	lmw r18, 0xb8(r1)
/* 8006DA84 0006A9C4  80 01 00 F4 */	lwz r0, 0xf4(r1)
/* 8006DA88 0006A9C8  7C 08 03 A6 */	mtlr r0
/* 8006DA8C 0006A9CC  38 21 00 F0 */	addi r1, r1, 0xf0
/* 8006DA90 0006A9D0  4E 80 00 20 */	blr 
.endfn createPatchedMaterial__18J3DMaterialFactoryCFP11J3DMaterialiUl

.fn __dt__11J3DMaterialFv, weak
/* 8006DA94 0006A9D4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8006DA98 0006A9D8  7C 08 02 A6 */	mflr r0
/* 8006DA9C 0006A9DC  90 01 00 14 */	stw r0, 0x14(r1)
/* 8006DAA0 0006A9E0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8006DAA4 0006A9E4  7C 7F 1B 79 */	or. r31, r3, r3
/* 8006DAA8 0006A9E8  41 82 00 1C */	beq .L_8006DAC4
/* 8006DAAC 0006A9EC  3C A0 80 4A */	lis r5, __vt__11J3DMaterial@ha
/* 8006DAB0 0006A9F0  7C 80 07 35 */	extsh. r0, r4
/* 8006DAB4 0006A9F4  38 05 15 D8 */	addi r0, r5, __vt__11J3DMaterial@l
/* 8006DAB8 0006A9F8  90 1F 00 00 */	stw r0, 0(r31)
/* 8006DABC 0006A9FC  40 81 00 08 */	ble .L_8006DAC4
/* 8006DAC0 0006AA00  4B FB 65 F5 */	bl __dl__FPv
.L_8006DAC4:
/* 8006DAC4 0006AA04  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8006DAC8 0006AA08  7F E3 FB 78 */	mr r3, r31
/* 8006DACC 0006AA0C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8006DAD0 0006AA10  7C 08 03 A6 */	mtlr r0
/* 8006DAD4 0006AA14  38 21 00 10 */	addi r1, r1, 0x10
/* 8006DAD8 0006AA18  4E 80 00 20 */	blr 
.endfn __dt__11J3DMaterialFv

.fn modifyPatchedCurrentMtx__18J3DMaterialFactoryCFP11J3DMateriali, global
/* 8006DADC 0006AA1C  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 8006DAE0 0006AA20  7C 08 02 A6 */	mflr r0
/* 8006DAE4 0006AA24  3C C0 80 48 */	lis r6, j3dDefaultTexCoordInfo@ha
/* 8006DAE8 0006AA28  90 01 00 64 */	stw r0, 0x64(r1)
/* 8006DAEC 0006AA2C  54 A0 08 3C */	slwi r0, r5, 1
/* 8006DAF0 0006AA30  38 C6 88 A8 */	addi r6, r6, j3dDefaultTexCoordInfo@l
/* 8006DAF4 0006AA34  BF 61 00 4C */	stmw r27, 0x4c(r1)
/* 8006DAF8 0006AA38  7C 7D 1B 78 */	mr r29, r3
/* 8006DAFC 0006AA3C  80 63 00 08 */	lwz r3, 8(r3)
/* 8006DB00 0006AA40  7C BF 2B 78 */	mr r31, r5
/* 8006DB04 0006AA44  7C 9E 23 78 */	mr r30, r4
/* 8006DB08 0006AA48  80 BD 00 04 */	lwz r5, 4(r29)
/* 8006DB0C 0006AA4C  7C 03 02 2E */	lhzx r0, r3, r0
/* 8006DB10 0006AA50  88 E6 00 02 */	lbz r7, 2(r6)
/* 8006DB14 0006AA54  1C 60 01 4C */	mulli r3, r0, 0x14c
/* 8006DB18 0006AA58  88 86 00 00 */	lbz r4, 0(r6)
/* 8006DB1C 0006AA5C  88 C6 00 01 */	lbz r6, 1(r6)
/* 8006DB20 0006AA60  98 81 00 10 */	stb r4, 0x10(r1)
/* 8006DB24 0006AA64  38 03 00 03 */	addi r0, r3, 3
/* 8006DB28 0006AA68  7C 05 00 AE */	lbzx r0, r5, r0
/* 8006DB2C 0006AA6C  98 C1 00 11 */	stb r6, 0x11(r1)
/* 8006DB30 0006AA70  28 00 00 FF */	cmplwi r0, 0xff
/* 8006DB34 0006AA74  98 E1 00 12 */	stb r7, 0x12(r1)
/* 8006DB38 0006AA78  B0 E1 00 14 */	sth r7, 0x14(r1)
/* 8006DB3C 0006AA7C  98 81 00 16 */	stb r4, 0x16(r1)
/* 8006DB40 0006AA80  98 C1 00 17 */	stb r6, 0x17(r1)
/* 8006DB44 0006AA84  98 E1 00 18 */	stb r7, 0x18(r1)
/* 8006DB48 0006AA88  B0 E1 00 1A */	sth r7, 0x1a(r1)
/* 8006DB4C 0006AA8C  98 81 00 1C */	stb r4, 0x1c(r1)
/* 8006DB50 0006AA90  98 C1 00 1D */	stb r6, 0x1d(r1)
/* 8006DB54 0006AA94  98 E1 00 1E */	stb r7, 0x1e(r1)
/* 8006DB58 0006AA98  B0 E1 00 20 */	sth r7, 0x20(r1)
/* 8006DB5C 0006AA9C  98 81 00 22 */	stb r4, 0x22(r1)
/* 8006DB60 0006AAA0  98 C1 00 23 */	stb r6, 0x23(r1)
/* 8006DB64 0006AAA4  98 E1 00 24 */	stb r7, 0x24(r1)
/* 8006DB68 0006AAA8  B0 E1 00 26 */	sth r7, 0x26(r1)
/* 8006DB6C 0006AAAC  98 81 00 28 */	stb r4, 0x28(r1)
/* 8006DB70 0006AAB0  98 C1 00 29 */	stb r6, 0x29(r1)
/* 8006DB74 0006AAB4  98 E1 00 2A */	stb r7, 0x2a(r1)
/* 8006DB78 0006AAB8  B0 E1 00 2C */	sth r7, 0x2c(r1)
/* 8006DB7C 0006AABC  98 81 00 2E */	stb r4, 0x2e(r1)
/* 8006DB80 0006AAC0  98 C1 00 2F */	stb r6, 0x2f(r1)
/* 8006DB84 0006AAC4  98 E1 00 30 */	stb r7, 0x30(r1)
/* 8006DB88 0006AAC8  B0 E1 00 32 */	sth r7, 0x32(r1)
/* 8006DB8C 0006AACC  98 81 00 34 */	stb r4, 0x34(r1)
/* 8006DB90 0006AAD0  98 C1 00 35 */	stb r6, 0x35(r1)
/* 8006DB94 0006AAD4  98 E1 00 36 */	stb r7, 0x36(r1)
/* 8006DB98 0006AAD8  B0 E1 00 38 */	sth r7, 0x38(r1)
/* 8006DB9C 0006AADC  98 81 00 3A */	stb r4, 0x3a(r1)
/* 8006DBA0 0006AAE0  98 C1 00 3B */	stb r6, 0x3b(r1)
/* 8006DBA4 0006AAE4  98 E1 00 3C */	stb r7, 0x3c(r1)
/* 8006DBA8 0006AAE8  B0 E1 00 3E */	sth r7, 0x3e(r1)
/* 8006DBAC 0006AAEC  41 82 00 10 */	beq .L_8006DBBC
/* 8006DBB0 0006AAF0  80 7D 00 24 */	lwz r3, 0x24(r29)
/* 8006DBB4 0006AAF4  7F 83 00 AE */	lbzx r28, r3, r0
/* 8006DBB8 0006AAF8  48 00 00 08 */	b .L_8006DBC0
.L_8006DBBC:
/* 8006DBBC 0006AAFC  3B 80 00 00 */	li r28, 0
.L_8006DBC0:
/* 8006DBC0 0006AB00  3B 60 00 00 */	li r27, 0
/* 8006DBC4 0006AB04  48 00 00 40 */	b .L_8006DC04
.L_8006DBC8:
/* 8006DBC8 0006AB08  7F A4 EB 78 */	mr r4, r29
/* 8006DBCC 0006AB0C  7F E5 FB 78 */	mr r5, r31
/* 8006DBD0 0006AB10  38 61 00 08 */	addi r3, r1, 8
/* 8006DBD4 0006AB14  48 00 0A C1 */	bl newTexCoord__18J3DMaterialFactoryCFii
/* 8006DBD8 0006AB18  57 60 06 3E */	clrlwi r0, r27, 0x18
/* 8006DBDC 0006AB1C  38 C1 00 10 */	addi r6, r1, 0x10
/* 8006DBE0 0006AB20  1C 80 00 06 */	mulli r4, r0, 6
/* 8006DBE4 0006AB24  88 A1 00 08 */	lbz r5, 8(r1)
/* 8006DBE8 0006AB28  88 61 00 09 */	lbz r3, 9(r1)
/* 8006DBEC 0006AB2C  3B 7B 00 01 */	addi r27, r27, 1
/* 8006DBF0 0006AB30  88 01 00 0A */	lbz r0, 0xa(r1)
/* 8006DBF4 0006AB34  7C C6 22 14 */	add r6, r6, r4
/* 8006DBF8 0006AB38  98 A6 00 00 */	stb r5, 0(r6)
/* 8006DBFC 0006AB3C  98 66 00 01 */	stb r3, 1(r6)
/* 8006DC00 0006AB40  98 06 00 02 */	stb r0, 2(r6)
.L_8006DC04:
/* 8006DC04 0006AB44  57 66 06 3E */	clrlwi r6, r27, 0x18
/* 8006DC08 0006AB48  7C 06 E0 40 */	cmplw r6, r28
/* 8006DC0C 0006AB4C  41 80 FF BC */	blt .L_8006DBC8
/* 8006DC10 0006AB50  88 61 00 12 */	lbz r3, 0x12(r1)
/* 8006DC14 0006AB54  88 01 00 18 */	lbz r0, 0x18(r1)
/* 8006DC18 0006AB58  88 81 00 1E */	lbz r4, 0x1e(r1)
/* 8006DC1C 0006AB5C  54 63 30 32 */	slwi r3, r3, 6
/* 8006DC20 0006AB60  54 00 60 26 */	slwi r0, r0, 0xc
/* 8006DC24 0006AB64  88 E1 00 30 */	lbz r7, 0x30(r1)
/* 8006DC28 0006AB68  88 A1 00 24 */	lbz r5, 0x24(r1)
/* 8006DC2C 0006AB6C  54 84 90 1A */	slwi r4, r4, 0x12
/* 8006DC30 0006AB70  7C 60 03 78 */	or r0, r3, r0
/* 8006DC34 0006AB74  88 61 00 36 */	lbz r3, 0x36(r1)
/* 8006DC38 0006AB78  88 C1 00 3C */	lbz r6, 0x3c(r1)
/* 8006DC3C 0006AB7C  54 A5 C0 0E */	slwi r5, r5, 0x18
/* 8006DC40 0006AB80  7C 84 03 78 */	or r4, r4, r0
/* 8006DC44 0006AB84  89 01 00 2A */	lbz r8, 0x2a(r1)
/* 8006DC48 0006AB88  54 E0 34 B2 */	rlwinm r0, r7, 6, 0x12, 0x19
/* 8006DC4C 0006AB8C  54 63 63 26 */	rlwinm r3, r3, 0xc, 0xc, 0x13
/* 8006DC50 0006AB90  7C A5 23 78 */	or r5, r5, r4
/* 8006DC54 0006AB94  54 C4 91 9A */	rlwinm r4, r6, 0x12, 6, 0xd
/* 8006DC58 0006AB98  7D 00 03 78 */	or r0, r8, r0
/* 8006DC5C 0006AB9C  90 BE 00 40 */	stw r5, 0x40(r30)
/* 8006DC60 0006ABA0  7C 60 03 78 */	or r0, r3, r0
/* 8006DC64 0006ABA4  7C 80 03 78 */	or r0, r4, r0
/* 8006DC68 0006ABA8  90 1E 00 44 */	stw r0, 0x44(r30)
/* 8006DC6C 0006ABAC  BB 61 00 4C */	lmw r27, 0x4c(r1)
/* 8006DC70 0006ABB0  80 01 00 64 */	lwz r0, 0x64(r1)
/* 8006DC74 0006ABB4  7C 08 03 A6 */	mtlr r0
/* 8006DC78 0006ABB8  38 21 00 60 */	addi r1, r1, 0x60
/* 8006DC7C 0006ABBC  4E 80 00 20 */	blr 
.endfn modifyPatchedCurrentMtx__18J3DMaterialFactoryCFP11J3DMateriali

.fn createLockedMaterial__18J3DMaterialFactoryCFP11J3DMaterialiUl, global
/* 8006DC80 0006ABC0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8006DC84 0006ABC4  7C 08 02 A6 */	mflr r0
/* 8006DC88 0006ABC8  90 01 00 24 */	stw r0, 0x24(r1)
/* 8006DC8C 0006ABCC  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8006DC90 0006ABD0  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8006DC94 0006ABD4  7C BE 2B 78 */	mr r30, r5
/* 8006DC98 0006ABD8  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8006DC9C 0006ABDC  7C 9D 23 79 */	or. r29, r4, r4
/* 8006DCA0 0006ABE0  93 81 00 10 */	stw r28, 0x10(r1)
/* 8006DCA4 0006ABE4  7C 7C 1B 78 */	mr r28, r3
/* 8006DCA8 0006ABE8  40 82 01 40 */	bne .L_8006DDE8
/* 8006DCAC 0006ABEC  38 60 00 4C */	li r3, 0x4c
/* 8006DCB0 0006ABF0  4B FB 61 F5 */	bl __nw__FUl
/* 8006DCB4 0006ABF4  7C 7D 1B 79 */	or. r29, r3, r3
/* 8006DCB8 0006ABF8  41 82 00 40 */	beq .L_8006DCF8
/* 8006DCBC 0006ABFC  3C 80 80 4A */	lis r4, __vt__11J3DMaterial@ha
/* 8006DCC0 0006AC00  3C A0 3C F4 */	lis r5, 0x3CF3CF00@ha
/* 8006DCC4 0006AC04  38 04 15 D8 */	addi r0, r4, __vt__11J3DMaterial@l
/* 8006DCC8 0006AC08  90 1D 00 00 */	stw r0, 0(r29)
/* 8006DCCC 0006AC0C  38 A5 CF 00 */	addi r5, r5, 0x3CF3CF00@l
/* 8006DCD0 0006AC10  3C 80 00 F4 */	lis r4, 0x00F3CF3C@ha
/* 8006DCD4 0006AC14  90 BD 00 40 */	stw r5, 0x40(r29)
/* 8006DCD8 0006AC18  38 04 CF 3C */	addi r0, r4, 0x00F3CF3C@l
/* 8006DCDC 0006AC1C  90 1D 00 44 */	stw r0, 0x44(r29)
/* 8006DCE0 0006AC20  4B FF 4A B9 */	bl initialize__11J3DMaterialFv
/* 8006DCE4 0006AC24  3C 80 80 4A */	lis r4, __vt__17J3DLockedMaterial@ha
/* 8006DCE8 0006AC28  7F A3 EB 78 */	mr r3, r29
/* 8006DCEC 0006AC2C  38 04 15 78 */	addi r0, r4, __vt__17J3DLockedMaterial@l
/* 8006DCF0 0006AC30  90 1D 00 00 */	stw r0, 0(r29)
/* 8006DCF4 0006AC34  4B FF 5B A9 */	bl initialize__17J3DLockedMaterialFv
.L_8006DCF8:
/* 8006DCF8 0006AC38  38 60 00 04 */	li r3, 4
/* 8006DCFC 0006AC3C  4B FB 61 A9 */	bl __nw__FUl
/* 8006DD00 0006AC40  28 03 00 00 */	cmplwi r3, 0
/* 8006DD04 0006AC44  41 82 00 1C */	beq .L_8006DD20
/* 8006DD08 0006AC48  3C A0 80 4A */	lis r5, __vt__13J3DColorBlock@ha
/* 8006DD0C 0006AC4C  3C 80 80 4A */	lis r4, __vt__17J3DColorBlockNull@ha
/* 8006DD10 0006AC50  38 05 17 88 */	addi r0, r5, __vt__13J3DColorBlock@l
/* 8006DD14 0006AC54  90 03 00 00 */	stw r0, 0(r3)
/* 8006DD18 0006AC58  38 04 1D A4 */	addi r0, r4, __vt__17J3DColorBlockNull@l
/* 8006DD1C 0006AC5C  90 03 00 00 */	stw r0, 0(r3)
.L_8006DD20:
/* 8006DD20 0006AC60  90 7D 00 24 */	stw r3, 0x24(r29)
/* 8006DD24 0006AC64  38 60 00 04 */	li r3, 4
/* 8006DD28 0006AC68  4B FB 61 7D */	bl __nw__FUl
/* 8006DD2C 0006AC6C  28 03 00 00 */	cmplwi r3, 0
/* 8006DD30 0006AC70  41 82 00 1C */	beq .L_8006DD4C
/* 8006DD34 0006AC74  3C A0 80 4A */	lis r5, __vt__14J3DTexGenBlock@ha
/* 8006DD38 0006AC78  3C 80 80 4A */	lis r4, __vt__18J3DTexGenBlockNull@ha
/* 8006DD3C 0006AC7C  38 05 17 1C */	addi r0, r5, __vt__14J3DTexGenBlock@l
/* 8006DD40 0006AC80  90 03 00 00 */	stw r0, 0(r3)
/* 8006DD44 0006AC84  38 04 1D 38 */	addi r0, r4, __vt__18J3DTexGenBlockNull@l
/* 8006DD48 0006AC88  90 03 00 00 */	stw r0, 0(r3)
.L_8006DD4C:
/* 8006DD4C 0006AC8C  90 7D 00 28 */	stw r3, 0x28(r29)
/* 8006DD50 0006AC90  38 60 00 08 */	li r3, 8
/* 8006DD54 0006AC94  4B FB 61 51 */	bl __nw__FUl
/* 8006DD58 0006AC98  7C 7F 1B 79 */	or. r31, r3, r3
/* 8006DD5C 0006AC9C  41 82 00 20 */	beq .L_8006DD7C
/* 8006DD60 0006ACA0  3C A0 80 4A */	lis r5, __vt__11J3DTevBlock@ha
/* 8006DD64 0006ACA4  3C 80 80 4A */	lis r4, __vt__15J3DTevBlockNull@ha
/* 8006DD68 0006ACA8  38 05 2B 08 */	addi r0, r5, __vt__11J3DTevBlock@l
/* 8006DD6C 0006ACAC  90 1F 00 00 */	stw r0, 0(r31)
/* 8006DD70 0006ACB0  38 04 1C 5C */	addi r0, r4, __vt__15J3DTevBlockNull@l
/* 8006DD74 0006ACB4  90 1F 00 00 */	stw r0, 0(r31)
/* 8006DD78 0006ACB8  48 00 96 29 */	bl initialize__15J3DTevBlockNullFv
.L_8006DD7C:
/* 8006DD7C 0006ACBC  93 FD 00 2C */	stw r31, 0x2c(r29)
/* 8006DD80 0006ACC0  38 60 00 04 */	li r3, 4
/* 8006DD84 0006ACC4  4B FB 61 21 */	bl __nw__FUl
/* 8006DD88 0006ACC8  28 03 00 00 */	cmplwi r3, 0
/* 8006DD8C 0006ACCC  41 82 00 1C */	beq .L_8006DDA8
/* 8006DD90 0006ACD0  3C A0 80 4A */	lis r5, __vt__11J3DIndBlock@ha
/* 8006DD94 0006ACD4  3C 80 80 4A */	lis r4, __vt__15J3DIndBlockNull@ha
/* 8006DD98 0006ACD8  38 05 16 D0 */	addi r0, r5, __vt__11J3DIndBlock@l
/* 8006DD9C 0006ACDC  90 03 00 00 */	stw r0, 0(r3)
/* 8006DDA0 0006ACE0  38 04 16 84 */	addi r0, r4, __vt__15J3DIndBlockNull@l
/* 8006DDA4 0006ACE4  90 03 00 00 */	stw r0, 0(r3)
.L_8006DDA8:
/* 8006DDA8 0006ACE8  90 7D 00 30 */	stw r3, 0x30(r29)
/* 8006DDAC 0006ACEC  38 60 00 04 */	li r3, 4
/* 8006DDB0 0006ACF0  4B FB 60 F5 */	bl __nw__FUl
/* 8006DDB4 0006ACF4  28 03 00 00 */	cmplwi r3, 0
/* 8006DDB8 0006ACF8  41 82 00 1C */	beq .L_8006DDD4
/* 8006DDBC 0006ACFC  3C A0 80 4A */	lis r5, __vt__10J3DPEBlock@ha
/* 8006DDC0 0006AD00  3C 80 80 4A */	lis r4, __vt__14J3DPEBlockNull@ha
/* 8006DDC4 0006AD04  38 05 16 08 */	addi r0, r5, __vt__10J3DPEBlock@l
/* 8006DDC8 0006AD08  90 03 00 00 */	stw r0, 0(r3)
/* 8006DDCC 0006AD0C  38 04 1B E0 */	addi r0, r4, __vt__14J3DPEBlockNull@l
/* 8006DDD0 0006AD10  90 03 00 00 */	stw r0, 0(r3)
.L_8006DDD4:
/* 8006DDD4 0006AD14  90 7D 00 34 */	stw r3, 0x34(r29)
/* 8006DDD8 0006AD18  80 7C 00 84 */	lwz r3, 0x84(r28)
/* 8006DDDC 0006AD1C  B3 DD 00 14 */	sth r30, 0x14(r29)
/* 8006DDE0 0006AD20  7C 03 F0 AE */	lbzx r0, r3, r30
/* 8006DDE4 0006AD24  90 1D 00 10 */	stw r0, 0x10(r29)
.L_8006DDE8:
/* 8006DDE8 0006AD28  80 1C 00 80 */	lwz r0, 0x80(r28)
/* 8006DDEC 0006AD2C  57 DF 18 38 */	slwi r31, r30, 3
/* 8006DDF0 0006AD30  80 9C 00 7C */	lwz r4, 0x7c(r28)
/* 8006DDF4 0006AD34  57 DE 20 36 */	slwi r30, r30, 4
/* 8006DDF8 0006AD38  7C 60 FA 14 */	add r3, r0, r31
/* 8006DDFC 0006AD3C  80 03 00 00 */	lwz r0, 0(r3)
/* 8006DE00 0006AD40  90 1D 00 40 */	stw r0, 0x40(r29)
/* 8006DE04 0006AD44  80 03 00 04 */	lwz r0, 4(r3)
/* 8006DE08 0006AD48  90 1D 00 44 */	stw r0, 0x44(r29)
/* 8006DE0C 0006AD4C  80 7D 00 24 */	lwz r3, 0x24(r29)
/* 8006DE10 0006AD50  7C 84 F2 2E */	lhzx r4, r4, r30
/* 8006DE14 0006AD54  81 83 00 00 */	lwz r12, 0(r3)
/* 8006DE18 0006AD58  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 8006DE1C 0006AD5C  7D 89 03 A6 */	mtctr r12
/* 8006DE20 0006AD60  4E 80 04 21 */	bctrl 
/* 8006DE24 0006AD64  80 7D 00 24 */	lwz r3, 0x24(r29)
/* 8006DE28 0006AD68  80 1C 00 7C */	lwz r0, 0x7c(r28)
/* 8006DE2C 0006AD6C  81 83 00 00 */	lwz r12, 0(r3)
/* 8006DE30 0006AD70  7C 80 F2 14 */	add r4, r0, r30
/* 8006DE34 0006AD74  81 8C 00 80 */	lwz r12, 0x80(r12)
/* 8006DE38 0006AD78  A0 84 00 02 */	lhz r4, 2(r4)
/* 8006DE3C 0006AD7C  7D 89 03 A6 */	mtctr r12
/* 8006DE40 0006AD80  4E 80 04 21 */	bctrl 
/* 8006DE44 0006AD84  80 7D 00 28 */	lwz r3, 0x28(r29)
/* 8006DE48 0006AD88  80 1C 00 7C */	lwz r0, 0x7c(r28)
/* 8006DE4C 0006AD8C  81 83 00 00 */	lwz r12, 0(r3)
/* 8006DE50 0006AD90  7C 80 F2 14 */	add r4, r0, r30
/* 8006DE54 0006AD94  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 8006DE58 0006AD98  A0 84 00 04 */	lhz r4, 4(r4)
/* 8006DE5C 0006AD9C  7D 89 03 A6 */	mtctr r12
/* 8006DE60 0006ADA0  4E 80 04 21 */	bctrl 
/* 8006DE64 0006ADA4  80 7D 00 2C */	lwz r3, 0x2c(r29)
/* 8006DE68 0006ADA8  80 1C 00 7C */	lwz r0, 0x7c(r28)
/* 8006DE6C 0006ADAC  81 83 00 00 */	lwz r12, 0(r3)
/* 8006DE70 0006ADB0  7C 80 F2 14 */	add r4, r0, r30
/* 8006DE74 0006ADB4  81 8C 00 D0 */	lwz r12, 0xd0(r12)
/* 8006DE78 0006ADB8  A0 84 00 06 */	lhz r4, 6(r4)
/* 8006DE7C 0006ADBC  7D 89 03 A6 */	mtctr r12
/* 8006DE80 0006ADC0  4E 80 04 21 */	bctrl 
/* 8006DE84 0006ADC4  80 7D 00 2C */	lwz r3, 0x2c(r29)
/* 8006DE88 0006ADC8  80 1C 00 7C */	lwz r0, 0x7c(r28)
/* 8006DE8C 0006ADCC  81 83 00 00 */	lwz r12, 0(r3)
/* 8006DE90 0006ADD0  7C 80 F2 14 */	add r4, r0, r30
/* 8006DE94 0006ADD4  81 8C 00 D4 */	lwz r12, 0xd4(r12)
/* 8006DE98 0006ADD8  A0 84 00 08 */	lhz r4, 8(r4)
/* 8006DE9C 0006ADDC  7D 89 03 A6 */	mtctr r12
/* 8006DEA0 0006ADE0  4E 80 04 21 */	bctrl 
/* 8006DEA4 0006ADE4  80 7D 00 34 */	lwz r3, 0x34(r29)
/* 8006DEA8 0006ADE8  80 1C 00 7C */	lwz r0, 0x7c(r28)
/* 8006DEAC 0006ADEC  81 83 00 00 */	lwz r12, 0(r3)
/* 8006DEB0 0006ADF0  7C 80 F2 14 */	add r4, r0, r30
/* 8006DEB4 0006ADF4  81 8C 00 74 */	lwz r12, 0x74(r12)
/* 8006DEB8 0006ADF8  A0 84 00 0A */	lhz r4, 0xa(r4)
/* 8006DEBC 0006ADFC  7D 89 03 A6 */	mtctr r12
/* 8006DEC0 0006AE00  4E 80 04 21 */	bctrl 
/* 8006DEC4 0006AE04  80 1D 00 48 */	lwz r0, 0x48(r29)
/* 8006DEC8 0006AE08  28 00 00 00 */	cmplwi r0, 0
/* 8006DECC 0006AE0C  40 82 00 48 */	bne .L_8006DF14
/* 8006DED0 0006AE10  38 60 00 10 */	li r3, 0x10
/* 8006DED4 0006AE14  4B FB 5F D1 */	bl __nw__FUl
/* 8006DED8 0006AE18  28 03 00 00 */	cmplwi r3, 0
/* 8006DEDC 0006AE1C  41 82 00 18 */	beq .L_8006DEF4
/* 8006DEE0 0006AE20  38 00 00 00 */	li r0, 0
/* 8006DEE4 0006AE24  90 03 00 00 */	stw r0, 0(r3)
/* 8006DEE8 0006AE28  90 03 00 04 */	stw r0, 4(r3)
/* 8006DEEC 0006AE2C  90 03 00 08 */	stw r0, 8(r3)
/* 8006DEF0 0006AE30  90 03 00 0C */	stw r0, 0xc(r3)
.L_8006DEF4:
/* 8006DEF4 0006AE34  80 1C 00 78 */	lwz r0, 0x78(r28)
/* 8006DEF8 0006AE38  90 7D 00 48 */	stw r3, 0x48(r29)
/* 8006DEFC 0006AE3C  7C 80 FA 14 */	add r4, r0, r31
/* 8006DF00 0006AE40  80 04 00 00 */	lwz r0, 0(r4)
/* 8006DF04 0006AE44  80 7D 00 48 */	lwz r3, 0x48(r29)
/* 8006DF08 0006AE48  80 A4 00 04 */	lwz r5, 4(r4)
/* 8006DF0C 0006AE4C  7C 80 22 14 */	add r4, r0, r4
/* 8006DF10 0006AE50  4B FF 1A 3D */	bl setSingleDisplayList__17J3DDisplayListObjFPvUl
.L_8006DF14:
/* 8006DF14 0006AE54  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8006DF18 0006AE58  7F A3 EB 78 */	mr r3, r29
/* 8006DF1C 0006AE5C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8006DF20 0006AE60  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8006DF24 0006AE64  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8006DF28 0006AE68  83 81 00 10 */	lwz r28, 0x10(r1)
/* 8006DF2C 0006AE6C  7C 08 03 A6 */	mtlr r0
/* 8006DF30 0006AE70  38 21 00 20 */	addi r1, r1, 0x20
/* 8006DF34 0006AE74  4E 80 00 20 */	blr 
.endfn createLockedMaterial__18J3DMaterialFactoryCFP11J3DMaterialiUl

.fn setTevRegOffset__11J3DTevBlockFUl, weak
/* 8006DF38 0006AE78  4E 80 00 20 */	blr 
.endfn setTevRegOffset__11J3DTevBlockFUl

.fn setTexNoOffset__11J3DTevBlockFUl, weak
/* 8006DF3C 0006AE7C  90 83 00 04 */	stw r4, 4(r3)
/* 8006DF40 0006AE80  4E 80 00 20 */	blr 
.endfn setTexNoOffset__11J3DTevBlockFUl

.fn calcSize__18J3DMaterialFactoryCFP11J3DMaterialQ218J3DMaterialFactory12MaterialTypeiUl, global
/* 8006DF44 0006AE84  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8006DF48 0006AE88  7C 08 02 A6 */	mflr r0
/* 8006DF4C 0006AE8C  2C 05 00 01 */	cmpwi r5, 1
/* 8006DF50 0006AE90  90 01 00 14 */	stw r0, 0x14(r1)
/* 8006DF54 0006AE94  38 00 00 00 */	li r0, 0
/* 8006DF58 0006AE98  41 82 00 34 */	beq .L_8006DF8C
/* 8006DF5C 0006AE9C  40 80 00 10 */	bge .L_8006DF6C
/* 8006DF60 0006AEA0  2C 05 00 00 */	cmpwi r5, 0
/* 8006DF64 0006AEA4  40 80 00 14 */	bge .L_8006DF78
/* 8006DF68 0006AEA8  48 00 00 48 */	b .L_8006DFB0
.L_8006DF6C:
/* 8006DF6C 0006AEAC  2C 05 00 03 */	cmpwi r5, 3
/* 8006DF70 0006AEB0  40 80 00 40 */	bge .L_8006DFB0
/* 8006DF74 0006AEB4  48 00 00 2C */	b .L_8006DFA0
.L_8006DF78:
/* 8006DF78 0006AEB8  7C C5 33 78 */	mr r5, r6
/* 8006DF7C 0006AEBC  7C E6 3B 78 */	mr r6, r7
/* 8006DF80 0006AEC0  48 00 00 45 */	bl calcSizeNormalMaterial__18J3DMaterialFactoryCFP11J3DMaterialiUl
/* 8006DF84 0006AEC4  7C 60 1B 78 */	mr r0, r3
/* 8006DF88 0006AEC8  48 00 00 28 */	b .L_8006DFB0
.L_8006DF8C:
/* 8006DF8C 0006AECC  7C C5 33 78 */	mr r5, r6
/* 8006DF90 0006AED0  7C E6 3B 78 */	mr r6, r7
/* 8006DF94 0006AED4  48 00 03 C5 */	bl calcSizeLockedMaterial__18J3DMaterialFactoryCFP11J3DMaterialiUl
/* 8006DF98 0006AED8  7C 60 1B 78 */	mr r0, r3
/* 8006DF9C 0006AEDC  48 00 00 14 */	b .L_8006DFB0
.L_8006DFA0:
/* 8006DFA0 0006AEE0  7C C5 33 78 */	mr r5, r6
/* 8006DFA4 0006AEE4  7C E6 3B 78 */	mr r6, r7
/* 8006DFA8 0006AEE8  48 00 02 75 */	bl calcSizePatchedMaterial__18J3DMaterialFactoryCFP11J3DMaterialiUl
/* 8006DFAC 0006AEEC  7C 60 1B 78 */	mr r0, r3
.L_8006DFB0:
/* 8006DFB0 0006AEF0  7C 03 03 78 */	mr r3, r0
/* 8006DFB4 0006AEF4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8006DFB8 0006AEF8  7C 08 03 A6 */	mtlr r0
/* 8006DFBC 0006AEFC  38 21 00 10 */	addi r1, r1, 0x10
/* 8006DFC0 0006AF00  4E 80 00 20 */	blr 
.endfn calcSize__18J3DMaterialFactoryCFP11J3DMaterialQ218J3DMaterialFactory12MaterialTypeiUl

.fn calcSizeNormalMaterial__18J3DMaterialFactoryCFP11J3DMaterialiUl, global
/* 8006DFC4 0006AF04  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8006DFC8 0006AF08  7C 08 02 A6 */	mflr r0
/* 8006DFCC 0006AF0C  90 01 00 34 */	stw r0, 0x34(r1)
/* 8006DFD0 0006AF10  80 03 00 78 */	lwz r0, 0x78(r3)
/* 8006DFD4 0006AF14  BF 21 00 14 */	stmw r25, 0x14(r1)
/* 8006DFD8 0006AF18  7C 7D 1B 78 */	mr r29, r3
/* 8006DFDC 0006AF1C  28 00 00 00 */	cmplwi r0, 0
/* 8006DFE0 0006AF20  3B C0 00 00 */	li r30, 0
/* 8006DFE4 0006AF24  41 82 00 0C */	beq .L_8006DFF0
/* 8006DFE8 0006AF28  48 00 03 71 */	bl calcSizeLockedMaterial__18J3DMaterialFactoryCFP11J3DMaterialiUl
/* 8006DFEC 0006AF2C  48 00 02 1C */	b .L_8006E208
.L_8006DFF0:
/* 8006DFF0 0006AF30  80 7D 00 08 */	lwz r3, 8(r29)
/* 8006DFF4 0006AF34  54 BF 08 3C */	slwi r31, r5, 1
/* 8006DFF8 0006AF38  38 E0 00 00 */	li r7, 0
/* 8006DFFC 0006AF3C  80 BD 00 04 */	lwz r5, 4(r29)
/* 8006E000 0006AF40  7C 03 FA 2E */	lhzx r0, r3, r31
/* 8006E004 0006AF44  7C E3 3B 78 */	mr r3, r7
/* 8006E008 0006AF48  1C 00 01 4C */	mulli r0, r0, 0x14c
/* 8006E00C 0006AF4C  7C A5 02 14 */	add r5, r5, r0
/* 8006E010 0006AF50  88 05 00 04 */	lbz r0, 4(r5)
/* 8006E014 0006AF54  28 00 00 FF */	cmplwi r0, 0xff
/* 8006E018 0006AF58  41 82 00 0C */	beq .L_8006E024
/* 8006E01C 0006AF5C  80 7D 00 4C */	lwz r3, 0x4c(r29)
/* 8006E020 0006AF60  7C 63 00 AE */	lbzx r3, r3, r0
.L_8006E024:
/* 8006E024 0006AF64  A0 05 00 84 */	lhz r0, 0x84(r5)
/* 8006E028 0006AF68  28 00 FF FF */	cmplwi r0, 0xffff
/* 8006E02C 0006AF6C  41 82 00 08 */	beq .L_8006E034
/* 8006E030 0006AF70  38 E0 00 01 */	li r7, 1
.L_8006E034:
/* 8006E034 0006AF74  A0 05 00 86 */	lhz r0, 0x86(r5)
/* 8006E038 0006AF78  28 00 FF FF */	cmplwi r0, 0xffff
/* 8006E03C 0006AF7C  41 82 00 08 */	beq .L_8006E044
/* 8006E040 0006AF80  38 E7 00 01 */	addi r7, r7, 1
.L_8006E044:
/* 8006E044 0006AF84  A0 05 00 88 */	lhz r0, 0x88(r5)
/* 8006E048 0006AF88  28 00 FF FF */	cmplwi r0, 0xffff
/* 8006E04C 0006AF8C  41 82 00 08 */	beq .L_8006E054
/* 8006E050 0006AF90  38 E7 00 01 */	addi r7, r7, 1
.L_8006E054:
/* 8006E054 0006AF94  A0 05 00 8A */	lhz r0, 0x8a(r5)
/* 8006E058 0006AF98  28 00 FF FF */	cmplwi r0, 0xffff
/* 8006E05C 0006AF9C  41 82 00 08 */	beq .L_8006E064
/* 8006E060 0006AFA0  38 E7 00 01 */	addi r7, r7, 1
.L_8006E064:
/* 8006E064 0006AFA4  A0 05 00 8C */	lhz r0, 0x8c(r5)
/* 8006E068 0006AFA8  28 00 FF FF */	cmplwi r0, 0xffff
/* 8006E06C 0006AFAC  41 82 00 08 */	beq .L_8006E074
/* 8006E070 0006AFB0  38 E7 00 01 */	addi r7, r7, 1
.L_8006E074:
/* 8006E074 0006AFB4  A0 05 00 8E */	lhz r0, 0x8e(r5)
/* 8006E078 0006AFB8  28 00 FF FF */	cmplwi r0, 0xffff
/* 8006E07C 0006AFBC  41 82 00 08 */	beq .L_8006E084
/* 8006E080 0006AFC0  38 E7 00 01 */	addi r7, r7, 1
.L_8006E084:
/* 8006E084 0006AFC4  A0 05 00 90 */	lhz r0, 0x90(r5)
/* 8006E088 0006AFC8  28 00 FF FF */	cmplwi r0, 0xffff
/* 8006E08C 0006AFCC  41 82 00 08 */	beq .L_8006E094
/* 8006E090 0006AFD0  38 E7 00 01 */	addi r7, r7, 1
.L_8006E094:
/* 8006E094 0006AFD4  A0 05 00 92 */	lhz r0, 0x92(r5)
/* 8006E098 0006AFD8  28 00 FF FF */	cmplwi r0, 0xffff
/* 8006E09C 0006AFDC  41 82 00 08 */	beq .L_8006E0A4
/* 8006E0A0 0006AFE0  38 E7 00 01 */	addi r7, r7, 1
.L_8006E0A4:
/* 8006E0A4 0006AFE4  7C 03 38 40 */	cmplw r3, r7
/* 8006E0A8 0006AFE8  41 82 00 1C */	beq .L_8006E0C4
/* 8006E0AC 0006AFEC  28 07 00 00 */	cmplwi r7, 0
/* 8006E0B0 0006AFF0  41 82 00 14 */	beq .L_8006E0C4
/* 8006E0B4 0006AFF4  7C 03 38 40 */	cmplw r3, r7
/* 8006E0B8 0006AFF8  40 81 00 10 */	ble .L_8006E0C8
/* 8006E0BC 0006AFFC  7C 67 1B 78 */	mr r7, r3
/* 8006E0C0 0006B000  48 00 00 08 */	b .L_8006E0C8
.L_8006E0C4:
/* 8006E0C4 0006B004  7C 67 1B 78 */	mr r7, r3
.L_8006E0C8:
/* 8006E0C8 0006B008  54 DC 86 FE */	rlwinm r28, r6, 0x10, 0x1b, 0x1f
/* 8006E0CC 0006B00C  7C 07 E0 40 */	cmplw r7, r28
/* 8006E0D0 0006B010  40 81 00 08 */	ble .L_8006E0D8
/* 8006E0D4 0006B014  7C FC 3B 78 */	mr r28, r7
.L_8006E0D8:
/* 8006E0D8 0006B018  88 05 00 03 */	lbz r0, 3(r5)
/* 8006E0DC 0006B01C  28 00 00 FF */	cmplwi r0, 0xff
/* 8006E0E0 0006B020  41 82 00 10 */	beq .L_8006E0F0
/* 8006E0E4 0006B024  80 7D 00 24 */	lwz r3, 0x24(r29)
/* 8006E0E8 0006B028  7C 63 00 AE */	lbzx r3, r3, r0
/* 8006E0EC 0006B02C  48 00 00 08 */	b .L_8006E0F4
.L_8006E0F0:
/* 8006E0F0 0006B030  38 60 00 00 */	li r3, 0
.L_8006E0F4:
/* 8006E0F4 0006B034  38 00 00 04 */	li r0, 4
/* 8006E0F8 0006B038  28 04 00 00 */	cmplwi r4, 0
/* 8006E0FC 0006B03C  7C 63 00 10 */	subfc r3, r3, r0
/* 8006E100 0006B040  54 DA 00 86 */	rlwinm r26, r6, 0, 2, 3
/* 8006E104 0006B044  7C 83 19 10 */	subfe r4, r3, r3
/* 8006E108 0006B048  54 C0 01 0A */	rlwinm r0, r6, 0, 4, 5
/* 8006E10C 0006B04C  54 C3 00 02 */	rlwinm r3, r6, 0, 0, 1
/* 8006E110 0006B050  54 D9 47 FE */	rlwinm r25, r6, 8, 0x1f, 0x1f
/* 8006E114 0006B054  7C 1B 20 78 */	andc r27, r0, r4
/* 8006E118 0006B058  40 82 00 08 */	bne .L_8006E120
/* 8006E11C 0006B05C  3B C0 00 4C */	li r30, 0x4c
.L_8006E120:
/* 8006E120 0006B060  4B FF 45 39 */	bl calcSizeColorBlock__11J3DMaterialFUl
/* 8006E124 0006B064  7F DE 1A 14 */	add r30, r30, r3
/* 8006E128 0006B068  7F 63 DB 78 */	mr r3, r27
/* 8006E12C 0006B06C  4B FF 45 7D */	bl calcSizeTexGenBlock__11J3DMaterialFUl
/* 8006E130 0006B070  57 80 04 3E */	clrlwi r0, r28, 0x10
/* 8006E134 0006B074  7F DE 1A 14 */	add r30, r30, r3
/* 8006E138 0006B078  7C 03 03 78 */	mr r3, r0
/* 8006E13C 0006B07C  4B FF 45 99 */	bl calcSizeTevBlock__11J3DMaterialFi
/* 8006E140 0006B080  7F DE 1A 14 */	add r30, r30, r3
/* 8006E144 0006B084  7F 23 CB 78 */	mr r3, r25
/* 8006E148 0006B088  4B FF 45 D5 */	bl calcSizeIndBlock__11J3DMaterialFi
/* 8006E14C 0006B08C  80 9D 00 08 */	lwz r4, 8(r29)
/* 8006E150 0006B090  7F DE 1A 14 */	add r30, r30, r3
/* 8006E154 0006B094  80 BD 00 04 */	lwz r5, 4(r29)
/* 8006E158 0006B098  7F 43 D3 78 */	mr r3, r26
/* 8006E15C 0006B09C  7C 04 FA 2E */	lhzx r0, r4, r31
/* 8006E160 0006B0A0  1C 00 01 4C */	mulli r0, r0, 0x14c
/* 8006E164 0006B0A4  7C 85 00 AE */	lbzx r4, r5, r0
/* 8006E168 0006B0A8  4B FF 45 C9 */	bl calcSizePEBlock__11J3DMaterialFUlUl
/* 8006E16C 0006B0AC  80 9D 00 08 */	lwz r4, 8(r29)
/* 8006E170 0006B0B0  7F DE 1A 14 */	add r30, r30, r3
/* 8006E174 0006B0B4  80 7D 00 04 */	lwz r3, 4(r29)
/* 8006E178 0006B0B8  7C 04 FA 2E */	lhzx r0, r4, r31
/* 8006E17C 0006B0BC  1C 00 01 4C */	mulli r0, r0, 0x14c
/* 8006E180 0006B0C0  7C 63 02 14 */	add r3, r3, r0
/* 8006E184 0006B0C4  A0 03 00 48 */	lhz r0, 0x48(r3)
/* 8006E188 0006B0C8  28 00 FF FF */	cmplwi r0, 0xffff
/* 8006E18C 0006B0CC  41 82 00 08 */	beq .L_8006E194
/* 8006E190 0006B0D0  3B DE 00 94 */	addi r30, r30, 0x94
.L_8006E194:
/* 8006E194 0006B0D4  A0 03 00 4A */	lhz r0, 0x4a(r3)
/* 8006E198 0006B0D8  28 00 FF FF */	cmplwi r0, 0xffff
/* 8006E19C 0006B0DC  41 82 00 08 */	beq .L_8006E1A4
/* 8006E1A0 0006B0E0  3B DE 00 94 */	addi r30, r30, 0x94
.L_8006E1A4:
/* 8006E1A4 0006B0E4  A0 03 00 4C */	lhz r0, 0x4c(r3)
/* 8006E1A8 0006B0E8  28 00 FF FF */	cmplwi r0, 0xffff
/* 8006E1AC 0006B0EC  41 82 00 08 */	beq .L_8006E1B4
/* 8006E1B0 0006B0F0  3B DE 00 94 */	addi r30, r30, 0x94
.L_8006E1B4:
/* 8006E1B4 0006B0F4  A0 03 00 4E */	lhz r0, 0x4e(r3)
/* 8006E1B8 0006B0F8  28 00 FF FF */	cmplwi r0, 0xffff
/* 8006E1BC 0006B0FC  41 82 00 08 */	beq .L_8006E1C4
/* 8006E1C0 0006B100  3B DE 00 94 */	addi r30, r30, 0x94
.L_8006E1C4:
/* 8006E1C4 0006B104  A0 03 00 50 */	lhz r0, 0x50(r3)
/* 8006E1C8 0006B108  28 00 FF FF */	cmplwi r0, 0xffff
/* 8006E1CC 0006B10C  41 82 00 08 */	beq .L_8006E1D4
/* 8006E1D0 0006B110  3B DE 00 94 */	addi r30, r30, 0x94
.L_8006E1D4:
/* 8006E1D4 0006B114  A0 03 00 52 */	lhz r0, 0x52(r3)
/* 8006E1D8 0006B118  28 00 FF FF */	cmplwi r0, 0xffff
/* 8006E1DC 0006B11C  41 82 00 08 */	beq .L_8006E1E4
/* 8006E1E0 0006B120  3B DE 00 94 */	addi r30, r30, 0x94
.L_8006E1E4:
/* 8006E1E4 0006B124  A0 03 00 54 */	lhz r0, 0x54(r3)
/* 8006E1E8 0006B128  28 00 FF FF */	cmplwi r0, 0xffff
/* 8006E1EC 0006B12C  41 82 00 08 */	beq .L_8006E1F4
/* 8006E1F0 0006B130  3B DE 00 94 */	addi r30, r30, 0x94
.L_8006E1F4:
/* 8006E1F4 0006B134  A0 03 00 56 */	lhz r0, 0x56(r3)
/* 8006E1F8 0006B138  28 00 FF FF */	cmplwi r0, 0xffff
/* 8006E1FC 0006B13C  41 82 00 08 */	beq .L_8006E204
/* 8006E200 0006B140  3B DE 00 94 */	addi r30, r30, 0x94
.L_8006E204:
/* 8006E204 0006B144  7F C3 F3 78 */	mr r3, r30
.L_8006E208:
/* 8006E208 0006B148  BB 21 00 14 */	lmw r25, 0x14(r1)
/* 8006E20C 0006B14C  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8006E210 0006B150  7C 08 03 A6 */	mtlr r0
/* 8006E214 0006B154  38 21 00 30 */	addi r1, r1, 0x30
/* 8006E218 0006B158  4E 80 00 20 */	blr 
.endfn calcSizeNormalMaterial__18J3DMaterialFactoryCFP11J3DMaterialiUl

.fn calcSizePatchedMaterial__18J3DMaterialFactoryCFP11J3DMaterialiUl, global
/* 8006E21C 0006B15C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8006E220 0006B160  7C 08 02 A6 */	mflr r0
/* 8006E224 0006B164  28 04 00 00 */	cmplwi r4, 0
/* 8006E228 0006B168  90 01 00 24 */	stw r0, 0x24(r1)
/* 8006E22C 0006B16C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8006E230 0006B170  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8006E234 0006B174  3B C0 00 00 */	li r30, 0
/* 8006E238 0006B178  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8006E23C 0006B17C  7C BD 2B 78 */	mr r29, r5
/* 8006E240 0006B180  93 81 00 10 */	stw r28, 0x10(r1)
/* 8006E244 0006B184  7C 7C 1B 78 */	mr r28, r3
/* 8006E248 0006B188  40 82 00 08 */	bne .L_8006E250
/* 8006E24C 0006B18C  3B C0 00 4C */	li r30, 0x4c
.L_8006E250:
/* 8006E250 0006B190  54 C4 01 8E */	rlwinm r4, r6, 0, 6, 7
/* 8006E254 0006B194  3C 60 40 00 */	lis r3, 0x4000
/* 8006E258 0006B198  7C 04 00 D0 */	neg r0, r4
/* 8006E25C 0006B19C  7C 00 23 78 */	or r0, r0, r4
/* 8006E260 0006B1A0  54 1F 0F FE */	srwi r31, r0, 0x1f
/* 8006E264 0006B1A4  4B FF 43 F5 */	bl calcSizeColorBlock__11J3DMaterialFUl
/* 8006E268 0006B1A8  7F DE 1A 14 */	add r30, r30, r3
/* 8006E26C 0006B1AC  7F E3 FB 78 */	mr r3, r31
/* 8006E270 0006B1B0  3B DE 01 34 */	addi r30, r30, 0x134
/* 8006E274 0006B1B4  4B FF 44 A9 */	bl calcSizeIndBlock__11J3DMaterialFi
/* 8006E278 0006B1B8  80 9C 00 08 */	lwz r4, 8(r28)
/* 8006E27C 0006B1BC  57 BF 08 3C */	slwi r31, r29, 1
/* 8006E280 0006B1C0  7F DE 1A 14 */	add r30, r30, r3
/* 8006E284 0006B1C4  80 BC 00 04 */	lwz r5, 4(r28)
/* 8006E288 0006B1C8  7C 04 FA 2E */	lhzx r0, r4, r31
/* 8006E28C 0006B1CC  3C 60 10 00 */	lis r3, 0x1000
/* 8006E290 0006B1D0  1C 00 01 4C */	mulli r0, r0, 0x14c
/* 8006E294 0006B1D4  7C 85 00 AE */	lbzx r4, r5, r0
/* 8006E298 0006B1D8  4B FF 44 99 */	bl calcSizePEBlock__11J3DMaterialFUlUl
/* 8006E29C 0006B1DC  80 9C 00 08 */	lwz r4, 8(r28)
/* 8006E2A0 0006B1E0  7F DE 1A 14 */	add r30, r30, r3
/* 8006E2A4 0006B1E4  80 7C 00 04 */	lwz r3, 4(r28)
/* 8006E2A8 0006B1E8  7C 04 FA 2E */	lhzx r0, r4, r31
/* 8006E2AC 0006B1EC  1C 00 01 4C */	mulli r0, r0, 0x14c
/* 8006E2B0 0006B1F0  7C 63 02 14 */	add r3, r3, r0
/* 8006E2B4 0006B1F4  A0 03 00 48 */	lhz r0, 0x48(r3)
/* 8006E2B8 0006B1F8  28 00 FF FF */	cmplwi r0, 0xffff
/* 8006E2BC 0006B1FC  41 82 00 08 */	beq .L_8006E2C4
/* 8006E2C0 0006B200  3B DE 00 94 */	addi r30, r30, 0x94
.L_8006E2C4:
/* 8006E2C4 0006B204  A0 03 00 4A */	lhz r0, 0x4a(r3)
/* 8006E2C8 0006B208  28 00 FF FF */	cmplwi r0, 0xffff
/* 8006E2CC 0006B20C  41 82 00 08 */	beq .L_8006E2D4
/* 8006E2D0 0006B210  3B DE 00 94 */	addi r30, r30, 0x94
.L_8006E2D4:
/* 8006E2D4 0006B214  A0 03 00 4C */	lhz r0, 0x4c(r3)
/* 8006E2D8 0006B218  28 00 FF FF */	cmplwi r0, 0xffff
/* 8006E2DC 0006B21C  41 82 00 08 */	beq .L_8006E2E4
/* 8006E2E0 0006B220  3B DE 00 94 */	addi r30, r30, 0x94
.L_8006E2E4:
/* 8006E2E4 0006B224  A0 03 00 4E */	lhz r0, 0x4e(r3)
/* 8006E2E8 0006B228  28 00 FF FF */	cmplwi r0, 0xffff
/* 8006E2EC 0006B22C  41 82 00 08 */	beq .L_8006E2F4
/* 8006E2F0 0006B230  3B DE 00 94 */	addi r30, r30, 0x94
.L_8006E2F4:
/* 8006E2F4 0006B234  A0 03 00 50 */	lhz r0, 0x50(r3)
/* 8006E2F8 0006B238  28 00 FF FF */	cmplwi r0, 0xffff
/* 8006E2FC 0006B23C  41 82 00 08 */	beq .L_8006E304
/* 8006E300 0006B240  3B DE 00 94 */	addi r30, r30, 0x94
.L_8006E304:
/* 8006E304 0006B244  A0 03 00 52 */	lhz r0, 0x52(r3)
/* 8006E308 0006B248  28 00 FF FF */	cmplwi r0, 0xffff
/* 8006E30C 0006B24C  41 82 00 08 */	beq .L_8006E314
/* 8006E310 0006B250  3B DE 00 94 */	addi r30, r30, 0x94
.L_8006E314:
/* 8006E314 0006B254  A0 03 00 54 */	lhz r0, 0x54(r3)
/* 8006E318 0006B258  28 00 FF FF */	cmplwi r0, 0xffff
/* 8006E31C 0006B25C  41 82 00 08 */	beq .L_8006E324
/* 8006E320 0006B260  3B DE 00 94 */	addi r30, r30, 0x94
.L_8006E324:
/* 8006E324 0006B264  A0 03 00 56 */	lhz r0, 0x56(r3)
/* 8006E328 0006B268  28 00 FF FF */	cmplwi r0, 0xffff
/* 8006E32C 0006B26C  41 82 00 08 */	beq .L_8006E334
/* 8006E330 0006B270  3B DE 00 94 */	addi r30, r30, 0x94
.L_8006E334:
/* 8006E334 0006B274  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8006E338 0006B278  7F C3 F3 78 */	mr r3, r30
/* 8006E33C 0006B27C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8006E340 0006B280  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8006E344 0006B284  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8006E348 0006B288  83 81 00 10 */	lwz r28, 0x10(r1)
/* 8006E34C 0006B28C  7C 08 03 A6 */	mtlr r0
/* 8006E350 0006B290  38 21 00 20 */	addi r1, r1, 0x20
/* 8006E354 0006B294  4E 80 00 20 */	blr 
.endfn calcSizePatchedMaterial__18J3DMaterialFactoryCFP11J3DMaterialiUl

.fn calcSizeLockedMaterial__18J3DMaterialFactoryCFP11J3DMaterialiUl, global
/* 8006E358 0006B298  28 04 00 00 */	cmplwi r4, 0
/* 8006E35C 0006B29C  38 60 00 00 */	li r3, 0
/* 8006E360 0006B2A0  40 82 00 08 */	bne .L_8006E368
/* 8006E364 0006B2A4  38 60 00 64 */	li r3, 0x64
.L_8006E368:
/* 8006E368 0006B2A8  38 63 00 10 */	addi r3, r3, 0x10
/* 8006E36C 0006B2AC  4E 80 00 20 */	blr 
.endfn calcSizeLockedMaterial__18J3DMaterialFactoryCFP11J3DMaterialiUl

.fn newMatColor__18J3DMaterialFactoryCFii, global
/* 8006E370 0006B2B0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8006E374 0006B2B4  54 C0 08 3C */	slwi r0, r6, 1
/* 8006E378 0006B2B8  80 E4 00 08 */	lwz r7, 8(r4)
/* 8006E37C 0006B2BC  54 A5 08 3C */	slwi r5, r5, 1
/* 8006E380 0006B2C0  81 02 87 20 */	lwz r8, lbl_80516A80@sda21(r2)
/* 8006E384 0006B2C4  7C A7 2A 2E */	lhzx r5, r7, r5
/* 8006E388 0006B2C8  91 01 00 08 */	stw r8, 8(r1)
/* 8006E38C 0006B2CC  1C A5 01 4C */	mulli r5, r5, 0x14c
/* 8006E390 0006B2D0  80 C4 00 04 */	lwz r6, 4(r4)
/* 8006E394 0006B2D4  88 E1 00 09 */	lbz r7, 9(r1)
/* 8006E398 0006B2D8  89 01 00 0A */	lbz r8, 0xa(r1)
/* 8006E39C 0006B2DC  38 A5 00 08 */	addi r5, r5, 8
/* 8006E3A0 0006B2E0  89 21 00 0B */	lbz r9, 0xb(r1)
/* 8006E3A4 0006B2E4  7C 05 02 14 */	add r0, r5, r0
/* 8006E3A8 0006B2E8  7C 06 02 2E */	lhzx r0, r6, r0
/* 8006E3AC 0006B2EC  28 00 FF FF */	cmplwi r0, 0xffff
/* 8006E3B0 0006B2F0  41 82 00 34 */	beq .L_8006E3E4
/* 8006E3B4 0006B2F4  80 84 00 10 */	lwz r4, 0x10(r4)
/* 8006E3B8 0006B2F8  54 00 13 BA */	rlwinm r0, r0, 2, 0xe, 0x1d
/* 8006E3BC 0006B2FC  7C 84 02 14 */	add r4, r4, r0
/* 8006E3C0 0006B300  88 04 00 00 */	lbz r0, 0(r4)
/* 8006E3C4 0006B304  98 03 00 00 */	stb r0, 0(r3)
/* 8006E3C8 0006B308  88 04 00 01 */	lbz r0, 1(r4)
/* 8006E3CC 0006B30C  98 03 00 01 */	stb r0, 1(r3)
/* 8006E3D0 0006B310  88 04 00 02 */	lbz r0, 2(r4)
/* 8006E3D4 0006B314  98 03 00 02 */	stb r0, 2(r3)
/* 8006E3D8 0006B318  88 04 00 03 */	lbz r0, 3(r4)
/* 8006E3DC 0006B31C  98 03 00 03 */	stb r0, 3(r3)
/* 8006E3E0 0006B320  48 00 00 18 */	b .L_8006E3F8
.L_8006E3E4:
/* 8006E3E4 0006B324  88 01 00 08 */	lbz r0, 8(r1)
/* 8006E3E8 0006B328  98 03 00 00 */	stb r0, 0(r3)
/* 8006E3EC 0006B32C  98 E3 00 01 */	stb r7, 1(r3)
/* 8006E3F0 0006B330  99 03 00 02 */	stb r8, 2(r3)
/* 8006E3F4 0006B334  99 23 00 03 */	stb r9, 3(r3)
.L_8006E3F8:
/* 8006E3F8 0006B338  38 21 00 10 */	addi r1, r1, 0x10
/* 8006E3FC 0006B33C  4E 80 00 20 */	blr 
.endfn newMatColor__18J3DMaterialFactoryCFii

.fn newColorChanNum__18J3DMaterialFactoryCFi, global
/* 8006E400 0006B340  80 A3 00 08 */	lwz r5, 8(r3)
/* 8006E404 0006B344  54 80 08 3C */	slwi r0, r4, 1
/* 8006E408 0006B348  80 C3 00 04 */	lwz r6, 4(r3)
/* 8006E40C 0006B34C  7C 05 02 2E */	lhzx r0, r5, r0
/* 8006E410 0006B350  1C 80 01 4C */	mulli r4, r0, 0x14c
/* 8006E414 0006B354  38 04 00 02 */	addi r0, r4, 2
/* 8006E418 0006B358  7C 06 00 AE */	lbzx r0, r6, r0
/* 8006E41C 0006B35C  28 00 00 FF */	cmplwi r0, 0xff
/* 8006E420 0006B360  41 82 00 10 */	beq .L_8006E430
/* 8006E424 0006B364  80 63 00 14 */	lwz r3, 0x14(r3)
/* 8006E428 0006B368  7C 63 00 AE */	lbzx r3, r3, r0
/* 8006E42C 0006B36C  4E 80 00 20 */	blr 
.L_8006E430:
/* 8006E430 0006B370  38 60 00 00 */	li r3, 0
/* 8006E434 0006B374  4E 80 00 20 */	blr 
.endfn newColorChanNum__18J3DMaterialFactoryCFi

.fn newColorChan__18J3DMaterialFactoryCFii, global
/* 8006E438 0006B378  80 E4 00 08 */	lwz r7, 8(r4)
/* 8006E43C 0006B37C  54 A5 08 3C */	slwi r5, r5, 1
/* 8006E440 0006B380  54 C0 08 3C */	slwi r0, r6, 1
/* 8006E444 0006B384  80 C4 00 04 */	lwz r6, 4(r4)
/* 8006E448 0006B388  7C A7 2A 2E */	lhzx r5, r7, r5
/* 8006E44C 0006B38C  1C A5 01 4C */	mulli r5, r5, 0x14c
/* 8006E450 0006B390  38 A5 00 0C */	addi r5, r5, 0xc
/* 8006E454 0006B394  7C 05 02 14 */	add r0, r5, r0
/* 8006E458 0006B398  7C 06 02 2E */	lhzx r0, r6, r0
/* 8006E45C 0006B39C  28 00 FF FF */	cmplwi r0, 0xffff
/* 8006E460 0006B3A0  41 82 00 B8 */	beq .L_8006E518
/* 8006E464 0006B3A4  80 84 00 18 */	lwz r4, 0x18(r4)
/* 8006E468 0006B3A8  54 00 1B 78 */	rlwinm r0, r0, 3, 0xd, 0x1c
/* 8006E46C 0006B3AC  7D 04 02 14 */	add r8, r4, r0
/* 8006E470 0006B3B0  89 48 00 05 */	lbz r10, 5(r8)
/* 8006E474 0006B3B4  88 08 00 02 */	lbz r0, 2(r8)
/* 8006E478 0006B3B8  88 A8 00 00 */	lbz r5, 0(r8)
/* 8006E47C 0006B3BC  38 EA FF 01 */	addi r7, r10, -255
/* 8006E480 0006B3C0  20 CA 00 FF */	subfic r6, r10, 0xff
/* 8006E484 0006B3C4  88 88 00 01 */	lbz r4, 1(r8)
/* 8006E488 0006B3C8  7C E6 30 F8 */	nor r6, r7, r6
/* 8006E48C 0006B3CC  54 A7 0B FC */	rlwinm r7, r5, 1, 0xf, 0x1e
/* 8006E490 0006B3D0  7C C5 FE 70 */	srawi r5, r6, 0x1f
/* 8006E494 0006B3D4  89 28 00 04 */	lbz r9, 4(r8)
/* 8006E498 0006B3D8  7D 45 28 78 */	andc r5, r10, r5
/* 8006E49C 0006B3DC  7C E4 23 78 */	or r4, r7, r4
/* 8006E4A0 0006B3E0  54 86 06 B0 */	rlwinm r6, r4, 0, 0x1a, 0x18
/* 8006E4A4 0006B3E4  54 0B 3C A4 */	rlwinm r11, r0, 7, 0x12, 0x12
/* 8006E4A8 0006B3E8  54 A5 34 B2 */	rlwinm r5, r5, 6, 0x12, 0x19
/* 8006E4AC 0006B3EC  7D 24 00 34 */	cntlzw r4, r9
/* 8006E4B0 0006B3F0  7C CC 2B 78 */	or r12, r6, r5
/* 8006E4B4 0006B3F4  88 C8 00 03 */	lbz r6, 3(r8)
/* 8006E4B8 0006B3F8  54 85 DF FE */	rlwinm r5, r4, 0x1b, 0x1f, 0x1f
/* 8006E4BC 0006B3FC  7C 89 00 D0 */	neg r4, r9
/* 8006E4C0 0006B400  50 0C 17 7A */	rlwimi r12, r0, 2, 0x1d, 0x1d
/* 8006E4C4 0006B404  54 0A 3C 62 */	rlwinm r10, r0, 7, 0x11, 0x11
/* 8006E4C8 0006B408  50 0C 17 38 */	rlwimi r12, r0, 2, 0x1c, 0x1c
/* 8006E4CC 0006B40C  7C A5 00 D0 */	neg r5, r5
/* 8006E4D0 0006B410  7C C5 28 78 */	andc r5, r6, r5
/* 8006E4D4 0006B414  20 C9 00 02 */	subfic r6, r9, 2
/* 8006E4D8 0006B418  50 0C 16 F6 */	rlwimi r12, r0, 2, 0x1b, 0x1b
/* 8006E4DC 0006B41C  7C 84 4B 78 */	or r4, r4, r9
/* 8006E4E0 0006B420  50 0C 16 B4 */	rlwimi r12, r0, 2, 0x1a, 0x1a
/* 8006E4E4 0006B424  54 A7 38 30 */	slwi r7, r5, 7
/* 8006E4E8 0006B428  50 0C 3D 28 */	rlwimi r12, r0, 7, 0x14, 0x14
/* 8006E4EC 0006B42C  38 A9 FF FE */	addi r5, r9, -2
/* 8006E4F0 0006B430  50 0C 3C E6 */	rlwimi r12, r0, 7, 0x13, 0x13
/* 8006E4F4 0006B434  51 8B 04 FE */	rlwimi r11, r12, 0, 0x13, 0x1f
/* 8006E4F8 0006B438  7C C0 2B 78 */	or r0, r6, r5
/* 8006E4FC 0006B43C  51 6A 04 BE */	rlwimi r10, r11, 0, 0x12, 0x1f
/* 8006E500 0006B440  55 45 06 6C */	rlwinm r5, r10, 0, 0x19, 0x16
/* 8006E504 0006B444  7C A5 3B 78 */	or r5, r5, r7
/* 8006E508 0006B448  50 05 55 AC */	rlwimi r5, r0, 0xa, 0x16, 0x16
/* 8006E50C 0006B44C  50 85 5D 6A */	rlwimi r5, r4, 0xb, 0x15, 0x15
/* 8006E510 0006B450  B0 A3 00 00 */	sth r5, 0(r3)
/* 8006E514 0006B454  4E 80 00 20 */	blr 
.L_8006E518:
/* 8006E518 0006B458  39 02 86 90 */	addi r8, r2, j3dDefaultColorChanInfo@sda21
/* 8006E51C 0006B45C  3C 80 00 01 */	lis r4, 0x0000FFFF@ha
/* 8006E520 0006B460  89 48 00 05 */	lbz r10, 5(r8)
/* 8006E524 0006B464  38 84 FF FF */	addi r4, r4, 0x0000FFFF@l
/* 8006E528 0006B468  88 08 00 02 */	lbz r0, 2(r8)
/* 8006E52C 0006B46C  88 A2 86 90 */	lbz r5, j3dDefaultColorChanInfo@sda21(r2)
/* 8006E530 0006B470  7C E4 50 50 */	subf r7, r4, r10
/* 8006E534 0006B474  7C CA 20 50 */	subf r6, r10, r4
/* 8006E538 0006B478  88 88 00 01 */	lbz r4, 1(r8)
/* 8006E53C 0006B47C  7C E6 30 F8 */	nor r6, r7, r6
/* 8006E540 0006B480  54 A7 0B FC */	rlwinm r7, r5, 1, 0xf, 0x1e
/* 8006E544 0006B484  7C C5 FE 70 */	srawi r5, r6, 0x1f
/* 8006E548 0006B488  89 28 00 04 */	lbz r9, 4(r8)
/* 8006E54C 0006B48C  7D 45 28 78 */	andc r5, r10, r5
/* 8006E550 0006B490  7C E4 23 78 */	or r4, r7, r4
/* 8006E554 0006B494  54 86 06 B0 */	rlwinm r6, r4, 0, 0x1a, 0x18
/* 8006E558 0006B498  54 0B 3C A4 */	rlwinm r11, r0, 7, 0x12, 0x12
/* 8006E55C 0006B49C  54 A5 34 B2 */	rlwinm r5, r5, 6, 0x12, 0x19
/* 8006E560 0006B4A0  7D 24 00 34 */	cntlzw r4, r9
/* 8006E564 0006B4A4  7C CC 2B 78 */	or r12, r6, r5
/* 8006E568 0006B4A8  88 C8 00 03 */	lbz r6, 3(r8)
/* 8006E56C 0006B4AC  54 85 DF FE */	rlwinm r5, r4, 0x1b, 0x1f, 0x1f
/* 8006E570 0006B4B0  7C 89 00 D0 */	neg r4, r9
/* 8006E574 0006B4B4  50 0C 17 7A */	rlwimi r12, r0, 2, 0x1d, 0x1d
/* 8006E578 0006B4B8  54 0A 3C 62 */	rlwinm r10, r0, 7, 0x11, 0x11
/* 8006E57C 0006B4BC  50 0C 17 38 */	rlwimi r12, r0, 2, 0x1c, 0x1c
/* 8006E580 0006B4C0  7C A5 00 D0 */	neg r5, r5
/* 8006E584 0006B4C4  7C C5 28 78 */	andc r5, r6, r5
/* 8006E588 0006B4C8  20 C9 00 02 */	subfic r6, r9, 2
/* 8006E58C 0006B4CC  50 0C 16 F6 */	rlwimi r12, r0, 2, 0x1b, 0x1b
/* 8006E590 0006B4D0  7C 84 4B 78 */	or r4, r4, r9
/* 8006E594 0006B4D4  50 0C 16 B4 */	rlwimi r12, r0, 2, 0x1a, 0x1a
/* 8006E598 0006B4D8  54 A7 38 30 */	slwi r7, r5, 7
/* 8006E59C 0006B4DC  50 0C 3D 28 */	rlwimi r12, r0, 7, 0x14, 0x14
/* 8006E5A0 0006B4E0  38 A9 FF FE */	addi r5, r9, -2
/* 8006E5A4 0006B4E4  50 0C 3C E6 */	rlwimi r12, r0, 7, 0x13, 0x13
/* 8006E5A8 0006B4E8  51 8B 04 FE */	rlwimi r11, r12, 0, 0x13, 0x1f
/* 8006E5AC 0006B4EC  7C C0 2B 78 */	or r0, r6, r5
/* 8006E5B0 0006B4F0  51 6A 04 BE */	rlwimi r10, r11, 0, 0x12, 0x1f
/* 8006E5B4 0006B4F4  55 45 06 6C */	rlwinm r5, r10, 0, 0x19, 0x16
/* 8006E5B8 0006B4F8  7C A5 3B 78 */	or r5, r5, r7
/* 8006E5BC 0006B4FC  50 05 55 AC */	rlwimi r5, r0, 0xa, 0x16, 0x16
/* 8006E5C0 0006B500  50 85 5D 6A */	rlwimi r5, r4, 0xb, 0x15, 0x15
/* 8006E5C4 0006B504  B0 A3 00 00 */	sth r5, 0(r3)
/* 8006E5C8 0006B508  4E 80 00 20 */	blr 
.endfn newColorChan__18J3DMaterialFactoryCFii

.fn newAmbColor__18J3DMaterialFactoryCFii, global
/* 8006E5CC 0006B50C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8006E5D0 0006B510  54 C0 08 3C */	slwi r0, r6, 1
/* 8006E5D4 0006B514  80 E4 00 08 */	lwz r7, 8(r4)
/* 8006E5D8 0006B518  54 A5 08 3C */	slwi r5, r5, 1
/* 8006E5DC 0006B51C  81 02 87 24 */	lwz r8, lbl_80516A84@sda21(r2)
/* 8006E5E0 0006B520  7C A7 2A 2E */	lhzx r5, r7, r5
/* 8006E5E4 0006B524  91 01 00 08 */	stw r8, 8(r1)
/* 8006E5E8 0006B528  1C A5 01 4C */	mulli r5, r5, 0x14c
/* 8006E5EC 0006B52C  80 C4 00 04 */	lwz r6, 4(r4)
/* 8006E5F0 0006B530  88 E1 00 09 */	lbz r7, 9(r1)
/* 8006E5F4 0006B534  89 01 00 0A */	lbz r8, 0xa(r1)
/* 8006E5F8 0006B538  38 A5 00 14 */	addi r5, r5, 0x14
/* 8006E5FC 0006B53C  89 21 00 0B */	lbz r9, 0xb(r1)
/* 8006E600 0006B540  7C 05 02 14 */	add r0, r5, r0
/* 8006E604 0006B544  7C 06 02 2E */	lhzx r0, r6, r0
/* 8006E608 0006B548  28 00 FF FF */	cmplwi r0, 0xffff
/* 8006E60C 0006B54C  41 82 00 34 */	beq .L_8006E640
/* 8006E610 0006B550  80 84 00 1C */	lwz r4, 0x1c(r4)
/* 8006E614 0006B554  54 00 13 BA */	rlwinm r0, r0, 2, 0xe, 0x1d
/* 8006E618 0006B558  7C 84 02 14 */	add r4, r4, r0
/* 8006E61C 0006B55C  88 04 00 00 */	lbz r0, 0(r4)
/* 8006E620 0006B560  98 03 00 00 */	stb r0, 0(r3)
/* 8006E624 0006B564  88 04 00 01 */	lbz r0, 1(r4)
/* 8006E628 0006B568  98 03 00 01 */	stb r0, 1(r3)
/* 8006E62C 0006B56C  88 04 00 02 */	lbz r0, 2(r4)
/* 8006E630 0006B570  98 03 00 02 */	stb r0, 2(r3)
/* 8006E634 0006B574  88 04 00 03 */	lbz r0, 3(r4)
/* 8006E638 0006B578  98 03 00 03 */	stb r0, 3(r3)
/* 8006E63C 0006B57C  48 00 00 18 */	b .L_8006E654
.L_8006E640:
/* 8006E640 0006B580  88 01 00 08 */	lbz r0, 8(r1)
/* 8006E644 0006B584  98 03 00 00 */	stb r0, 0(r3)
/* 8006E648 0006B588  98 E3 00 01 */	stb r7, 1(r3)
/* 8006E64C 0006B58C  99 03 00 02 */	stb r8, 2(r3)
/* 8006E650 0006B590  99 23 00 03 */	stb r9, 3(r3)
.L_8006E654:
/* 8006E654 0006B594  38 21 00 10 */	addi r1, r1, 0x10
/* 8006E658 0006B598  4E 80 00 20 */	blr 
.endfn newAmbColor__18J3DMaterialFactoryCFii

.fn newTexGenNum__18J3DMaterialFactoryCFi, global
/* 8006E65C 0006B59C  80 A3 00 08 */	lwz r5, 8(r3)
/* 8006E660 0006B5A0  54 80 08 3C */	slwi r0, r4, 1
/* 8006E664 0006B5A4  80 C3 00 04 */	lwz r6, 4(r3)
/* 8006E668 0006B5A8  7C 05 02 2E */	lhzx r0, r5, r0
/* 8006E66C 0006B5AC  1C 80 01 4C */	mulli r4, r0, 0x14c
/* 8006E670 0006B5B0  38 04 00 03 */	addi r0, r4, 3
/* 8006E674 0006B5B4  7C 06 00 AE */	lbzx r0, r6, r0
/* 8006E678 0006B5B8  28 00 00 FF */	cmplwi r0, 0xff
/* 8006E67C 0006B5BC  41 82 00 10 */	beq .L_8006E68C
/* 8006E680 0006B5C0  80 63 00 24 */	lwz r3, 0x24(r3)
/* 8006E684 0006B5C4  7C 63 00 AE */	lbzx r3, r3, r0
/* 8006E688 0006B5C8  4E 80 00 20 */	blr 
.L_8006E68C:
/* 8006E68C 0006B5CC  38 60 00 00 */	li r3, 0
/* 8006E690 0006B5D0  4E 80 00 20 */	blr 
.endfn newTexGenNum__18J3DMaterialFactoryCFi

.fn newTexCoord__18J3DMaterialFactoryCFii, global
/* 8006E694 0006B5D4  80 E4 00 08 */	lwz r7, 8(r4)
/* 8006E698 0006B5D8  54 A5 08 3C */	slwi r5, r5, 1
/* 8006E69C 0006B5DC  54 C0 08 3C */	slwi r0, r6, 1
/* 8006E6A0 0006B5E0  80 C4 00 04 */	lwz r6, 4(r4)
/* 8006E6A4 0006B5E4  7C A7 2A 2E */	lhzx r5, r7, r5
/* 8006E6A8 0006B5E8  1C A5 01 4C */	mulli r5, r5, 0x14c
/* 8006E6AC 0006B5EC  38 A5 00 28 */	addi r5, r5, 0x28
/* 8006E6B0 0006B5F0  7C 05 02 14 */	add r0, r5, r0
/* 8006E6B4 0006B5F4  7C 06 02 2E */	lhzx r0, r6, r0
/* 8006E6B8 0006B5F8  28 00 FF FF */	cmplwi r0, 0xffff
/* 8006E6BC 0006B5FC  41 82 00 34 */	beq .L_8006E6F0
/* 8006E6C0 0006B600  80 84 00 28 */	lwz r4, 0x28(r4)
/* 8006E6C4 0006B604  54 00 13 BA */	rlwinm r0, r0, 2, 0xe, 0x1d
/* 8006E6C8 0006B608  7C 84 02 14 */	add r4, r4, r0
/* 8006E6CC 0006B60C  88 04 00 00 */	lbz r0, 0(r4)
/* 8006E6D0 0006B610  98 03 00 00 */	stb r0, 0(r3)
/* 8006E6D4 0006B614  88 04 00 01 */	lbz r0, 1(r4)
/* 8006E6D8 0006B618  98 03 00 01 */	stb r0, 1(r3)
/* 8006E6DC 0006B61C  88 04 00 02 */	lbz r0, 2(r4)
/* 8006E6E0 0006B620  98 03 00 02 */	stb r0, 2(r3)
/* 8006E6E4 0006B624  88 03 00 02 */	lbz r0, 2(r3)
/* 8006E6E8 0006B628  B0 03 00 04 */	sth r0, 4(r3)
/* 8006E6EC 0006B62C  4E 80 00 20 */	blr 
.L_8006E6F0:
/* 8006E6F0 0006B630  3C 80 80 48 */	lis r4, j3dDefaultTexCoordInfo@ha
/* 8006E6F4 0006B634  8C 04 88 A8 */	lbzu r0, j3dDefaultTexCoordInfo@l(r4)
/* 8006E6F8 0006B638  98 03 00 00 */	stb r0, 0(r3)
/* 8006E6FC 0006B63C  88 04 00 01 */	lbz r0, 1(r4)
/* 8006E700 0006B640  98 03 00 01 */	stb r0, 1(r3)
/* 8006E704 0006B644  88 04 00 02 */	lbz r0, 2(r4)
/* 8006E708 0006B648  98 03 00 02 */	stb r0, 2(r3)
/* 8006E70C 0006B64C  88 03 00 02 */	lbz r0, 2(r3)
/* 8006E710 0006B650  B0 03 00 04 */	sth r0, 4(r3)
/* 8006E714 0006B654  4E 80 00 20 */	blr 
.endfn newTexCoord__18J3DMaterialFactoryCFii

.fn newTexMtx__18J3DMaterialFactoryCFii, global
/* 8006E718 0006B658  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8006E71C 0006B65C  7C 08 02 A6 */	mflr r0
/* 8006E720 0006B660  80 C3 00 08 */	lwz r6, 8(r3)
/* 8006E724 0006B664  54 84 08 3C */	slwi r4, r4, 1
/* 8006E728 0006B668  90 01 00 24 */	stw r0, 0x24(r1)
/* 8006E72C 0006B66C  54 A0 08 3C */	slwi r0, r5, 1
/* 8006E730 0006B670  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8006E734 0006B674  83 E3 00 04 */	lwz r31, 4(r3)
/* 8006E738 0006B678  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8006E73C 0006B67C  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8006E740 0006B680  7C 7D 1B 78 */	mr r29, r3
/* 8006E744 0006B684  38 60 00 00 */	li r3, 0
/* 8006E748 0006B688  7C 86 22 2E */	lhzx r4, r6, r4
/* 8006E74C 0006B68C  1C 84 01 4C */	mulli r4, r4, 0x14c
/* 8006E750 0006B690  38 84 00 48 */	addi r4, r4, 0x48
/* 8006E754 0006B694  7F C4 02 14 */	add r30, r4, r0
/* 8006E758 0006B698  7C 1F F2 2E */	lhzx r0, r31, r30
/* 8006E75C 0006B69C  28 00 FF FF */	cmplwi r0, 0xffff
/* 8006E760 0006B6A0  41 82 00 F4 */	beq .L_8006E854
/* 8006E764 0006B6A4  38 60 00 94 */	li r3, 0x94
/* 8006E768 0006B6A8  4B FB 57 3D */	bl __nw__FUl
/* 8006E76C 0006B6AC  28 03 00 00 */	cmplwi r3, 0
/* 8006E770 0006B6B0  41 82 00 E4 */	beq .L_8006E854
/* 8006E774 0006B6B4  7C 1F F2 2E */	lhzx r0, r31, r30
/* 8006E778 0006B6B8  80 9D 00 30 */	lwz r4, 0x30(r29)
/* 8006E77C 0006B6BC  1C 00 00 64 */	mulli r0, r0, 0x64
/* 8006E780 0006B6C0  7C 84 02 14 */	add r4, r4, r0
/* 8006E784 0006B6C4  C0 04 00 24 */	lfs f0, 0x24(r4)
/* 8006E788 0006B6C8  D0 03 00 24 */	stfs f0, 0x24(r3)
/* 8006E78C 0006B6CC  C0 04 00 28 */	lfs f0, 0x28(r4)
/* 8006E790 0006B6D0  D0 03 00 28 */	stfs f0, 0x28(r3)
/* 8006E794 0006B6D4  C0 04 00 2C */	lfs f0, 0x2c(r4)
/* 8006E798 0006B6D8  D0 03 00 2C */	stfs f0, 0x2c(r3)
/* 8006E79C 0006B6DC  C0 04 00 30 */	lfs f0, 0x30(r4)
/* 8006E7A0 0006B6E0  D0 03 00 30 */	stfs f0, 0x30(r3)
/* 8006E7A4 0006B6E4  C0 04 00 34 */	lfs f0, 0x34(r4)
/* 8006E7A8 0006B6E8  D0 03 00 34 */	stfs f0, 0x34(r3)
/* 8006E7AC 0006B6EC  C0 04 00 38 */	lfs f0, 0x38(r4)
/* 8006E7B0 0006B6F0  D0 03 00 38 */	stfs f0, 0x38(r3)
/* 8006E7B4 0006B6F4  C0 04 00 3C */	lfs f0, 0x3c(r4)
/* 8006E7B8 0006B6F8  D0 03 00 3C */	stfs f0, 0x3c(r3)
/* 8006E7BC 0006B6FC  C0 04 00 40 */	lfs f0, 0x40(r4)
/* 8006E7C0 0006B700  D0 03 00 40 */	stfs f0, 0x40(r3)
/* 8006E7C4 0006B704  C0 04 00 44 */	lfs f0, 0x44(r4)
/* 8006E7C8 0006B708  D0 03 00 44 */	stfs f0, 0x44(r3)
/* 8006E7CC 0006B70C  C0 04 00 48 */	lfs f0, 0x48(r4)
/* 8006E7D0 0006B710  D0 03 00 48 */	stfs f0, 0x48(r3)
/* 8006E7D4 0006B714  C0 04 00 4C */	lfs f0, 0x4c(r4)
/* 8006E7D8 0006B718  D0 03 00 4C */	stfs f0, 0x4c(r3)
/* 8006E7DC 0006B71C  C0 04 00 50 */	lfs f0, 0x50(r4)
/* 8006E7E0 0006B720  D0 03 00 50 */	stfs f0, 0x50(r3)
/* 8006E7E4 0006B724  C0 04 00 54 */	lfs f0, 0x54(r4)
/* 8006E7E8 0006B728  D0 03 00 54 */	stfs f0, 0x54(r3)
/* 8006E7EC 0006B72C  C0 04 00 58 */	lfs f0, 0x58(r4)
/* 8006E7F0 0006B730  D0 03 00 58 */	stfs f0, 0x58(r3)
/* 8006E7F4 0006B734  C0 04 00 5C */	lfs f0, 0x5c(r4)
/* 8006E7F8 0006B738  D0 03 00 5C */	stfs f0, 0x5c(r3)
/* 8006E7FC 0006B73C  C0 04 00 60 */	lfs f0, 0x60(r4)
/* 8006E800 0006B740  D0 03 00 60 */	stfs f0, 0x60(r3)
/* 8006E804 0006B744  C0 04 00 04 */	lfs f0, 4(r4)
/* 8006E808 0006B748  D0 03 00 04 */	stfs f0, 4(r3)
/* 8006E80C 0006B74C  C0 04 00 08 */	lfs f0, 8(r4)
/* 8006E810 0006B750  D0 03 00 08 */	stfs f0, 8(r3)
/* 8006E814 0006B754  C0 04 00 0C */	lfs f0, 0xc(r4)
/* 8006E818 0006B758  D0 03 00 0C */	stfs f0, 0xc(r3)
/* 8006E81C 0006B75C  88 04 00 00 */	lbz r0, 0(r4)
/* 8006E820 0006B760  98 03 00 00 */	stb r0, 0(r3)
/* 8006E824 0006B764  88 04 00 01 */	lbz r0, 1(r4)
/* 8006E828 0006B768  98 03 00 01 */	stb r0, 1(r3)
/* 8006E82C 0006B76C  C0 04 00 10 */	lfs f0, 0x10(r4)
/* 8006E830 0006B770  D0 03 00 10 */	stfs f0, 0x10(r3)
/* 8006E834 0006B774  C0 04 00 14 */	lfs f0, 0x14(r4)
/* 8006E838 0006B778  D0 03 00 14 */	stfs f0, 0x14(r3)
/* 8006E83C 0006B77C  A8 04 00 18 */	lha r0, 0x18(r4)
/* 8006E840 0006B780  B0 03 00 18 */	sth r0, 0x18(r3)
/* 8006E844 0006B784  C0 04 00 1C */	lfs f0, 0x1c(r4)
/* 8006E848 0006B788  D0 03 00 1C */	stfs f0, 0x1c(r3)
/* 8006E84C 0006B78C  C0 04 00 20 */	lfs f0, 0x20(r4)
/* 8006E850 0006B790  D0 03 00 20 */	stfs f0, 0x20(r3)
.L_8006E854:
/* 8006E854 0006B794  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8006E858 0006B798  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8006E85C 0006B79C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8006E860 0006B7A0  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8006E864 0006B7A4  7C 08 03 A6 */	mtlr r0
/* 8006E868 0006B7A8  38 21 00 20 */	addi r1, r1, 0x20
/* 8006E86C 0006B7AC  4E 80 00 20 */	blr 
.endfn newTexMtx__18J3DMaterialFactoryCFii

.fn newCullMode__18J3DMaterialFactoryCFi, global
/* 8006E870 0006B7B0  80 A3 00 08 */	lwz r5, 8(r3)
/* 8006E874 0006B7B4  54 80 08 3C */	slwi r0, r4, 1
/* 8006E878 0006B7B8  80 C3 00 04 */	lwz r6, 4(r3)
/* 8006E87C 0006B7BC  7C 05 02 2E */	lhzx r0, r5, r0
/* 8006E880 0006B7C0  1C 80 01 4C */	mulli r4, r0, 0x14c
/* 8006E884 0006B7C4  38 04 00 01 */	addi r0, r4, 1
/* 8006E888 0006B7C8  7C 06 00 AE */	lbzx r0, r6, r0
/* 8006E88C 0006B7CC  28 00 00 FF */	cmplwi r0, 0xff
/* 8006E890 0006B7D0  41 82 00 18 */	beq .L_8006E8A8
/* 8006E894 0006B7D4  80 63 00 3C */	lwz r3, 0x3c(r3)
/* 8006E898 0006B7D8  54 00 15 BA */	rlwinm r0, r0, 2, 0x16, 0x1d
/* 8006E89C 0006B7DC  7C 03 00 2E */	lwzx r0, r3, r0
/* 8006E8A0 0006B7E0  54 03 06 3E */	clrlwi r3, r0, 0x18
/* 8006E8A4 0006B7E4  4E 80 00 20 */	blr 
.L_8006E8A8:
/* 8006E8A8 0006B7E8  38 60 00 FF */	li r3, 0xff
/* 8006E8AC 0006B7EC  4E 80 00 20 */	blr 
.endfn newCullMode__18J3DMaterialFactoryCFi

.fn newTexNo__18J3DMaterialFactoryCFii, global
/* 8006E8B0 0006B7F0  80 C3 00 08 */	lwz r6, 8(r3)
/* 8006E8B4 0006B7F4  54 84 08 3C */	slwi r4, r4, 1
/* 8006E8B8 0006B7F8  54 A0 08 3C */	slwi r0, r5, 1
/* 8006E8BC 0006B7FC  80 A3 00 04 */	lwz r5, 4(r3)
/* 8006E8C0 0006B800  7C 86 22 2E */	lhzx r4, r6, r4
/* 8006E8C4 0006B804  1C 84 01 4C */	mulli r4, r4, 0x14c
/* 8006E8C8 0006B808  38 84 00 84 */	addi r4, r4, 0x84
/* 8006E8CC 0006B80C  7C 04 02 14 */	add r0, r4, r0
/* 8006E8D0 0006B810  7C 05 02 2E */	lhzx r0, r5, r0
/* 8006E8D4 0006B814  28 00 FF FF */	cmplwi r0, 0xffff
/* 8006E8D8 0006B818  41 82 00 14 */	beq .L_8006E8EC
/* 8006E8DC 0006B81C  80 63 00 38 */	lwz r3, 0x38(r3)
/* 8006E8E0 0006B820  54 00 0B FC */	rlwinm r0, r0, 1, 0xf, 0x1e
/* 8006E8E4 0006B824  7C 63 02 2E */	lhzx r3, r3, r0
/* 8006E8E8 0006B828  4E 80 00 20 */	blr 
.L_8006E8EC:
/* 8006E8EC 0006B82C  3C 60 00 01 */	lis r3, 0x0000FFFF@ha
/* 8006E8F0 0006B830  38 63 FF FF */	addi r3, r3, 0x0000FFFF@l
/* 8006E8F4 0006B834  4E 80 00 20 */	blr 
.endfn newTexNo__18J3DMaterialFactoryCFii

.fn newTevOrder__18J3DMaterialFactoryCFii, global
/* 8006E8F8 0006B838  80 E4 00 08 */	lwz r7, 8(r4)
/* 8006E8FC 0006B83C  54 A5 08 3C */	slwi r5, r5, 1
/* 8006E900 0006B840  54 C0 08 3C */	slwi r0, r6, 1
/* 8006E904 0006B844  80 C4 00 04 */	lwz r6, 4(r4)
/* 8006E908 0006B848  7C A7 2A 2E */	lhzx r5, r7, r5
/* 8006E90C 0006B84C  1C A5 01 4C */	mulli r5, r5, 0x14c
/* 8006E910 0006B850  38 A5 00 BC */	addi r5, r5, 0xbc
/* 8006E914 0006B854  7C 05 02 14 */	add r0, r5, r0
/* 8006E918 0006B858  7C 06 02 2E */	lhzx r0, r6, r0
/* 8006E91C 0006B85C  28 00 FF FF */	cmplwi r0, 0xffff
/* 8006E920 0006B860  41 82 00 2C */	beq .L_8006E94C
/* 8006E924 0006B864  80 84 00 40 */	lwz r4, 0x40(r4)
/* 8006E928 0006B868  54 00 13 BA */	rlwinm r0, r0, 2, 0xe, 0x1d
/* 8006E92C 0006B86C  7C 84 02 14 */	add r4, r4, r0
/* 8006E930 0006B870  88 04 00 00 */	lbz r0, 0(r4)
/* 8006E934 0006B874  98 03 00 00 */	stb r0, 0(r3)
/* 8006E938 0006B878  88 04 00 01 */	lbz r0, 1(r4)
/* 8006E93C 0006B87C  98 03 00 01 */	stb r0, 1(r3)
/* 8006E940 0006B880  88 04 00 02 */	lbz r0, 2(r4)
/* 8006E944 0006B884  98 03 00 02 */	stb r0, 2(r3)
/* 8006E948 0006B888  4E 80 00 20 */	blr 
.L_8006E94C:
/* 8006E94C 0006B88C  88 02 86 6C */	lbz r0, j3dDefaultTevOrderInfoNull@sda21(r2)
/* 8006E950 0006B890  38 82 86 6C */	addi r4, r2, j3dDefaultTevOrderInfoNull@sda21
/* 8006E954 0006B894  98 03 00 00 */	stb r0, 0(r3)
/* 8006E958 0006B898  88 04 00 01 */	lbz r0, 1(r4)
/* 8006E95C 0006B89C  98 03 00 01 */	stb r0, 1(r3)
/* 8006E960 0006B8A0  88 04 00 02 */	lbz r0, 2(r4)
/* 8006E964 0006B8A4  98 03 00 02 */	stb r0, 2(r3)
/* 8006E968 0006B8A8  4E 80 00 20 */	blr 
.endfn newTevOrder__18J3DMaterialFactoryCFii

.fn newTevColor__18J3DMaterialFactoryCFii, global
/* 8006E96C 0006B8AC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8006E970 0006B8B0  54 C0 08 3C */	slwi r0, r6, 1
/* 8006E974 0006B8B4  80 E4 00 08 */	lwz r7, 8(r4)
/* 8006E978 0006B8B8  54 A5 08 3C */	slwi r5, r5, 1
/* 8006E97C 0006B8BC  81 02 2A E8 */	lwz r8, lbl_80520E48@sda21(r2)
/* 8006E980 0006B8C0  7C A7 2A 2E */	lhzx r5, r7, r5
/* 8006E984 0006B8C4  80 E2 2A EC */	lwz r7, (lbl_80520E48+4)@sda21(r2)
/* 8006E988 0006B8C8  1C A5 01 4C */	mulli r5, r5, 0x14c
/* 8006E98C 0006B8CC  80 C4 00 04 */	lwz r6, 4(r4)
/* 8006E990 0006B8D0  91 01 00 08 */	stw r8, 8(r1)
/* 8006E994 0006B8D4  38 A5 00 DC */	addi r5, r5, 0xdc
/* 8006E998 0006B8D8  90 E1 00 0C */	stw r7, 0xc(r1)
/* 8006E99C 0006B8DC  7C 05 02 14 */	add r0, r5, r0
/* 8006E9A0 0006B8E0  A8 E1 00 0A */	lha r7, 0xa(r1)
/* 8006E9A4 0006B8E4  7C 06 02 2E */	lhzx r0, r6, r0
/* 8006E9A8 0006B8E8  A8 A1 00 0C */	lha r5, 0xc(r1)
/* 8006E9AC 0006B8EC  28 00 FF FF */	cmplwi r0, 0xffff
/* 8006E9B0 0006B8F0  A8 C1 00 0E */	lha r6, 0xe(r1)
/* 8006E9B4 0006B8F4  41 82 00 34 */	beq .L_8006E9E8
/* 8006E9B8 0006B8F8  80 84 00 44 */	lwz r4, 0x44(r4)
/* 8006E9BC 0006B8FC  54 00 1B 78 */	rlwinm r0, r0, 3, 0xd, 0x1c
/* 8006E9C0 0006B900  7C 84 02 14 */	add r4, r4, r0
/* 8006E9C4 0006B904  A8 04 00 00 */	lha r0, 0(r4)
/* 8006E9C8 0006B908  B0 03 00 00 */	sth r0, 0(r3)
/* 8006E9CC 0006B90C  A8 04 00 02 */	lha r0, 2(r4)
/* 8006E9D0 0006B910  B0 03 00 02 */	sth r0, 2(r3)
/* 8006E9D4 0006B914  A8 04 00 04 */	lha r0, 4(r4)
/* 8006E9D8 0006B918  B0 03 00 04 */	sth r0, 4(r3)
/* 8006E9DC 0006B91C  A8 04 00 06 */	lha r0, 6(r4)
/* 8006E9E0 0006B920  B0 03 00 06 */	sth r0, 6(r3)
/* 8006E9E4 0006B924  48 00 00 18 */	b .L_8006E9FC
.L_8006E9E8:
/* 8006E9E8 0006B928  A8 01 00 08 */	lha r0, 8(r1)
/* 8006E9EC 0006B92C  B0 03 00 00 */	sth r0, 0(r3)
/* 8006E9F0 0006B930  B0 E3 00 02 */	sth r7, 2(r3)
/* 8006E9F4 0006B934  B0 A3 00 04 */	sth r5, 4(r3)
/* 8006E9F8 0006B938  B0 C3 00 06 */	sth r6, 6(r3)
.L_8006E9FC:
/* 8006E9FC 0006B93C  38 21 00 10 */	addi r1, r1, 0x10
/* 8006EA00 0006B940  4E 80 00 20 */	blr 
.endfn newTevColor__18J3DMaterialFactoryCFii

.fn newTevKColor__18J3DMaterialFactoryCFii, global
/* 8006EA04 0006B944  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8006EA08 0006B948  54 C0 08 3C */	slwi r0, r6, 1
/* 8006EA0C 0006B94C  80 E4 00 08 */	lwz r7, 8(r4)
/* 8006EA10 0006B950  54 A5 08 3C */	slwi r5, r5, 1
/* 8006EA14 0006B954  81 02 87 28 */	lwz r8, lbl_80516A88@sda21(r2)
/* 8006EA18 0006B958  7C A7 2A 2E */	lhzx r5, r7, r5
/* 8006EA1C 0006B95C  91 01 00 08 */	stw r8, 8(r1)
/* 8006EA20 0006B960  1C A5 01 4C */	mulli r5, r5, 0x14c
/* 8006EA24 0006B964  80 C4 00 04 */	lwz r6, 4(r4)
/* 8006EA28 0006B968  88 E1 00 09 */	lbz r7, 9(r1)
/* 8006EA2C 0006B96C  89 01 00 0A */	lbz r8, 0xa(r1)
/* 8006EA30 0006B970  38 A5 00 94 */	addi r5, r5, 0x94
/* 8006EA34 0006B974  89 21 00 0B */	lbz r9, 0xb(r1)
/* 8006EA38 0006B978  7C 05 02 14 */	add r0, r5, r0
/* 8006EA3C 0006B97C  7C 06 02 2E */	lhzx r0, r6, r0
/* 8006EA40 0006B980  28 00 FF FF */	cmplwi r0, 0xffff
/* 8006EA44 0006B984  41 82 00 34 */	beq .L_8006EA78
/* 8006EA48 0006B988  80 84 00 48 */	lwz r4, 0x48(r4)
/* 8006EA4C 0006B98C  54 00 13 BA */	rlwinm r0, r0, 2, 0xe, 0x1d
/* 8006EA50 0006B990  7C 84 02 14 */	add r4, r4, r0
/* 8006EA54 0006B994  88 04 00 00 */	lbz r0, 0(r4)
/* 8006EA58 0006B998  98 03 00 00 */	stb r0, 0(r3)
/* 8006EA5C 0006B99C  88 04 00 01 */	lbz r0, 1(r4)
/* 8006EA60 0006B9A0  98 03 00 01 */	stb r0, 1(r3)
/* 8006EA64 0006B9A4  88 04 00 02 */	lbz r0, 2(r4)
/* 8006EA68 0006B9A8  98 03 00 02 */	stb r0, 2(r3)
/* 8006EA6C 0006B9AC  88 04 00 03 */	lbz r0, 3(r4)
/* 8006EA70 0006B9B0  98 03 00 03 */	stb r0, 3(r3)
/* 8006EA74 0006B9B4  48 00 00 18 */	b .L_8006EA8C
.L_8006EA78:
/* 8006EA78 0006B9B8  88 01 00 08 */	lbz r0, 8(r1)
/* 8006EA7C 0006B9BC  98 03 00 00 */	stb r0, 0(r3)
/* 8006EA80 0006B9C0  98 E3 00 01 */	stb r7, 1(r3)
/* 8006EA84 0006B9C4  99 03 00 02 */	stb r8, 2(r3)
/* 8006EA88 0006B9C8  99 23 00 03 */	stb r9, 3(r3)
.L_8006EA8C:
/* 8006EA8C 0006B9CC  38 21 00 10 */	addi r1, r1, 0x10
/* 8006EA90 0006B9D0  4E 80 00 20 */	blr 
.endfn newTevKColor__18J3DMaterialFactoryCFii

.fn newTevStageNum__18J3DMaterialFactoryCFi, global
/* 8006EA94 0006B9D4  80 A3 00 08 */	lwz r5, 8(r3)
/* 8006EA98 0006B9D8  54 80 08 3C */	slwi r0, r4, 1
/* 8006EA9C 0006B9DC  80 C3 00 04 */	lwz r6, 4(r3)
/* 8006EAA0 0006B9E0  7C 05 02 2E */	lhzx r0, r5, r0
/* 8006EAA4 0006B9E4  1C 80 01 4C */	mulli r4, r0, 0x14c
/* 8006EAA8 0006B9E8  38 04 00 04 */	addi r0, r4, 4
/* 8006EAAC 0006B9EC  7C 06 00 AE */	lbzx r0, r6, r0
/* 8006EAB0 0006B9F0  28 00 00 FF */	cmplwi r0, 0xff
/* 8006EAB4 0006B9F4  41 82 00 10 */	beq .L_8006EAC4
/* 8006EAB8 0006B9F8  80 63 00 4C */	lwz r3, 0x4c(r3)
/* 8006EABC 0006B9FC  7C 63 00 AE */	lbzx r3, r3, r0
/* 8006EAC0 0006BA00  4E 80 00 20 */	blr 
.L_8006EAC4:
/* 8006EAC4 0006BA04  38 60 00 FF */	li r3, 0xff
/* 8006EAC8 0006BA08  4E 80 00 20 */	blr 
.endfn newTevStageNum__18J3DMaterialFactoryCFi

.fn newTevStage__18J3DMaterialFactoryCFii, global
/* 8006EACC 0006BA0C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8006EAD0 0006BA10  7C 08 02 A6 */	mflr r0
/* 8006EAD4 0006BA14  80 E4 00 08 */	lwz r7, 8(r4)
/* 8006EAD8 0006BA18  54 A5 08 3C */	slwi r5, r5, 1
/* 8006EADC 0006BA1C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8006EAE0 0006BA20  54 C0 08 3C */	slwi r0, r6, 1
/* 8006EAE4 0006BA24  80 C4 00 04 */	lwz r6, 4(r4)
/* 8006EAE8 0006BA28  7C A7 2A 2E */	lhzx r5, r7, r5
/* 8006EAEC 0006BA2C  1C A5 01 4C */	mulli r5, r5, 0x14c
/* 8006EAF0 0006BA30  38 A5 00 E4 */	addi r5, r5, 0xe4
/* 8006EAF4 0006BA34  7C 05 02 14 */	add r0, r5, r0
/* 8006EAF8 0006BA38  7C 06 02 2E */	lhzx r0, r6, r0
/* 8006EAFC 0006BA3C  28 00 FF FF */	cmplwi r0, 0xffff
/* 8006EB00 0006BA40  41 82 00 18 */	beq .L_8006EB18
/* 8006EB04 0006BA44  1C 00 00 14 */	mulli r0, r0, 0x14
/* 8006EB08 0006BA48  80 84 00 50 */	lwz r4, 0x50(r4)
/* 8006EB0C 0006BA4C  7C 84 02 14 */	add r4, r4, r0
/* 8006EB10 0006BA50  48 00 00 1D */	bl __ct__11J3DTevStageFRC15J3DTevStageInfo
/* 8006EB14 0006BA54  48 00 00 08 */	b .L_8006EB1C
.L_8006EB18:
/* 8006EB18 0006BA58  4B FF 33 BD */	bl __ct__11J3DTevStageFv
.L_8006EB1C:
/* 8006EB1C 0006BA5C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8006EB20 0006BA60  7C 08 03 A6 */	mtlr r0
/* 8006EB24 0006BA64  38 21 00 10 */	addi r1, r1, 0x10
/* 8006EB28 0006BA68  4E 80 00 20 */	blr 
.endfn newTevStage__18J3DMaterialFactoryCFii

.fn __ct__11J3DTevStageFRC15J3DTevStageInfo, weak
/* 8006EB2C 0006BA6C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8006EB30 0006BA70  7C 08 02 A6 */	mflr r0
/* 8006EB34 0006BA74  90 01 00 14 */	stw r0, 0x14(r1)
/* 8006EB38 0006BA78  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8006EB3C 0006BA7C  7C 7F 1B 78 */	mr r31, r3
/* 8006EB40 0006BA80  4B FF 33 FD */	bl setTevStageInfo__11J3DTevStageFRC15J3DTevStageInfo
/* 8006EB44 0006BA84  38 62 86 84 */	addi r3, r2, j3dDefaultTevSwapMode@sda21
/* 8006EB48 0006BA88  88 9F 00 07 */	lbz r4, 7(r31)
/* 8006EB4C 0006BA8C  88 03 00 01 */	lbz r0, 1(r3)
/* 8006EB50 0006BA90  7F E3 FB 78 */	mr r3, r31
/* 8006EB54 0006BA94  54 84 07 B6 */	rlwinm r4, r4, 0, 0x1e, 0x1b
/* 8006EB58 0006BA98  54 00 10 3A */	slwi r0, r0, 2
/* 8006EB5C 0006BA9C  7C 80 03 78 */	or r0, r4, r0
/* 8006EB60 0006BAA0  98 1F 00 07 */	stb r0, 7(r31)
/* 8006EB64 0006BAA4  88 9F 00 07 */	lbz r4, 7(r31)
/* 8006EB68 0006BAA8  88 02 86 84 */	lbz r0, j3dDefaultTevSwapMode@sda21(r2)
/* 8006EB6C 0006BAAC  54 84 00 3A */	rlwinm r4, r4, 0, 0, 0x1d
/* 8006EB70 0006BAB0  7C 80 03 78 */	or r0, r4, r0
/* 8006EB74 0006BAB4  98 1F 00 07 */	stb r0, 7(r31)
/* 8006EB78 0006BAB8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8006EB7C 0006BABC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8006EB80 0006BAC0  7C 08 03 A6 */	mtlr r0
/* 8006EB84 0006BAC4  38 21 00 10 */	addi r1, r1, 0x10
/* 8006EB88 0006BAC8  4E 80 00 20 */	blr 
.endfn __ct__11J3DTevStageFRC15J3DTevStageInfo

.fn newTevSwapModeTable__18J3DMaterialFactoryCFii, global
/* 8006EB8C 0006BACC  80 E4 00 08 */	lwz r7, 8(r4)
/* 8006EB90 0006BAD0  54 A5 08 3C */	slwi r5, r5, 1
/* 8006EB94 0006BAD4  54 C0 08 3C */	slwi r0, r6, 1
/* 8006EB98 0006BAD8  80 C4 00 04 */	lwz r6, 4(r4)
/* 8006EB9C 0006BADC  7C A7 2A 2E */	lhzx r5, r7, r5
/* 8006EBA0 0006BAE0  1C A5 01 4C */	mulli r5, r5, 0x14c
/* 8006EBA4 0006BAE4  38 A5 01 24 */	addi r5, r5, 0x124
/* 8006EBA8 0006BAE8  7C 05 02 14 */	add r0, r5, r0
/* 8006EBAC 0006BAEC  7C 06 02 2E */	lhzx r0, r6, r0
/* 8006EBB0 0006BAF0  28 00 FF FF */	cmplwi r0, 0xffff
/* 8006EBB4 0006BAF4  41 82 00 40 */	beq .L_8006EBF4
/* 8006EBB8 0006BAF8  80 84 00 58 */	lwz r4, 0x58(r4)
/* 8006EBBC 0006BAFC  54 00 13 BA */	rlwinm r0, r0, 2, 0xe, 0x1d
/* 8006EBC0 0006BB00  7C C4 02 14 */	add r6, r4, r0
/* 8006EBC4 0006BB04  88 A6 00 02 */	lbz r5, 2(r6)
/* 8006EBC8 0006BB08  88 06 00 01 */	lbz r0, 1(r6)
/* 8006EBCC 0006BB0C  88 86 00 00 */	lbz r4, 0(r6)
/* 8006EBD0 0006BB10  54 A5 10 3A */	slwi r5, r5, 2
/* 8006EBD4 0006BB14  54 00 20 36 */	slwi r0, r0, 4
/* 8006EBD8 0006BB18  88 C6 00 03 */	lbz r6, 3(r6)
/* 8006EBDC 0006BB1C  7C 00 2A 14 */	add r0, r0, r5
/* 8006EBE0 0006BB20  54 84 30 32 */	slwi r4, r4, 6
/* 8006EBE4 0006BB24  7C 00 32 14 */	add r0, r0, r6
/* 8006EBE8 0006BB28  7C 04 02 14 */	add r0, r4, r0
/* 8006EBEC 0006BB2C  98 03 00 00 */	stb r0, 0(r3)
/* 8006EBF0 0006BB30  4E 80 00 20 */	blr 
.L_8006EBF4:
/* 8006EBF4 0006BB34  38 C2 86 88 */	addi r6, r2, j3dDefaultTevSwapModeTable@sda21
/* 8006EBF8 0006BB38  88 82 86 88 */	lbz r4, j3dDefaultTevSwapModeTable@sda21(r2)
/* 8006EBFC 0006BB3C  88 A6 00 02 */	lbz r5, 2(r6)
/* 8006EC00 0006BB40  88 06 00 01 */	lbz r0, 1(r6)
/* 8006EC04 0006BB44  54 84 30 32 */	slwi r4, r4, 6
/* 8006EC08 0006BB48  54 A5 10 3A */	slwi r5, r5, 2
/* 8006EC0C 0006BB4C  88 C6 00 03 */	lbz r6, 3(r6)
/* 8006EC10 0006BB50  54 00 20 36 */	slwi r0, r0, 4
/* 8006EC14 0006BB54  7C 00 2A 14 */	add r0, r0, r5
/* 8006EC18 0006BB58  7C 00 32 14 */	add r0, r0, r6
/* 8006EC1C 0006BB5C  7C 04 02 14 */	add r0, r4, r0
/* 8006EC20 0006BB60  98 03 00 00 */	stb r0, 0(r3)
/* 8006EC24 0006BB64  4E 80 00 20 */	blr 
.endfn newTevSwapModeTable__18J3DMaterialFactoryCFii

.fn newIndTexStageNum__18J3DMaterialFactoryCFi, global
/* 8006EC28 0006BB68  1C 84 01 38 */	mulli r4, r4, 0x138
/* 8006EC2C 0006BB6C  80 63 00 0C */	lwz r3, 0xc(r3)
/* 8006EC30 0006BB70  7C 03 20 AE */	lbzx r0, r3, r4
/* 8006EC34 0006BB74  28 00 00 01 */	cmplwi r0, 1
/* 8006EC38 0006BB78  40 82 00 10 */	bne .L_8006EC48
/* 8006EC3C 0006BB7C  7C 63 22 14 */	add r3, r3, r4
/* 8006EC40 0006BB80  88 63 00 01 */	lbz r3, 1(r3)
/* 8006EC44 0006BB84  4E 80 00 20 */	blr 
.L_8006EC48:
/* 8006EC48 0006BB88  38 60 00 00 */	li r3, 0
/* 8006EC4C 0006BB8C  4E 80 00 20 */	blr 
.endfn newIndTexStageNum__18J3DMaterialFactoryCFi

.fn newIndTexOrder__18J3DMaterialFactoryCFii, global
/* 8006EC50 0006BB90  1C 05 01 38 */	mulli r0, r5, 0x138
/* 8006EC54 0006BB94  80 84 00 0C */	lwz r4, 0xc(r4)
/* 8006EC58 0006BB98  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8006EC5C 0006BB9C  38 A2 86 70 */	addi r5, r2, j3dDefaultIndTexOrderNull@sda21
/* 8006EC60 0006BBA0  7D 04 02 14 */	add r8, r4, r0
/* 8006EC64 0006BBA4  88 E2 86 70 */	lbz r7, j3dDefaultIndTexOrderNull@sda21(r2)
/* 8006EC68 0006BBA8  88 08 00 00 */	lbz r0, 0(r8)
/* 8006EC6C 0006BBAC  88 A5 00 01 */	lbz r5, 1(r5)
/* 8006EC70 0006BBB0  28 00 00 01 */	cmplwi r0, 1
/* 8006EC74 0006BBB4  98 E1 00 08 */	stb r7, 8(r1)
/* 8006EC78 0006BBB8  98 A1 00 09 */	stb r5, 9(r1)
/* 8006EC7C 0006BBBC  40 82 00 24 */	bne .L_8006ECA0
/* 8006EC80 0006BBC0  54 C4 10 3A */	slwi r4, r6, 2
/* 8006EC84 0006BBC4  38 84 00 04 */	addi r4, r4, 4
/* 8006EC88 0006BBC8  7C 88 22 14 */	add r4, r8, r4
/* 8006EC8C 0006BBCC  88 04 00 00 */	lbz r0, 0(r4)
/* 8006EC90 0006BBD0  98 03 00 00 */	stb r0, 0(r3)
/* 8006EC94 0006BBD4  88 04 00 01 */	lbz r0, 1(r4)
/* 8006EC98 0006BBD8  98 03 00 01 */	stb r0, 1(r3)
/* 8006EC9C 0006BBDC  48 00 00 0C */	b .L_8006ECA8
.L_8006ECA0:
/* 8006ECA0 0006BBE0  80 01 00 08 */	lwz r0, 8(r1)
/* 8006ECA4 0006BBE4  90 03 00 00 */	stw r0, 0(r3)
.L_8006ECA8:
/* 8006ECA8 0006BBE8  38 21 00 10 */	addi r1, r1, 0x10
/* 8006ECAC 0006BBEC  4E 80 00 20 */	blr 
.endfn newIndTexOrder__18J3DMaterialFactoryCFii

.fn newIndTexMtx__18J3DMaterialFactoryCFii, global
/* 8006ECB0 0006BBF0  1C 05 01 38 */	mulli r0, r5, 0x138
/* 8006ECB4 0006BBF4  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8006ECB8 0006BBF8  80 84 00 0C */	lwz r4, 0xc(r4)
/* 8006ECBC 0006BBFC  3C A0 80 48 */	lis r5, j3dDefaultIndTexMtxInfo@ha
/* 8006ECC0 0006BC00  C4 45 89 2C */	lfsu f2, j3dDefaultIndTexMtxInfo@l(r5)
/* 8006ECC4 0006BC04  7C E4 02 14 */	add r7, r4, r0
/* 8006ECC8 0006BC08  C0 25 00 04 */	lfs f1, 4(r5)
/* 8006ECCC 0006BC0C  C0 05 00 08 */	lfs f0, 8(r5)
/* 8006ECD0 0006BC10  88 07 00 00 */	lbz r0, 0(r7)
/* 8006ECD4 0006BC14  D0 41 00 08 */	stfs f2, 8(r1)
/* 8006ECD8 0006BC18  C0 45 00 0C */	lfs f2, 0xc(r5)
/* 8006ECDC 0006BC1C  28 00 00 01 */	cmplwi r0, 1
/* 8006ECE0 0006BC20  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 8006ECE4 0006BC24  C0 25 00 10 */	lfs f1, 0x10(r5)
/* 8006ECE8 0006BC28  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 8006ECEC 0006BC2C  C0 05 00 14 */	lfs f0, 0x14(r5)
/* 8006ECF0 0006BC30  88 05 00 18 */	lbz r0, 0x18(r5)
/* 8006ECF4 0006BC34  D0 41 00 14 */	stfs f2, 0x14(r1)
/* 8006ECF8 0006BC38  D0 21 00 18 */	stfs f1, 0x18(r1)
/* 8006ECFC 0006BC3C  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 8006ED00 0006BC40  98 01 00 20 */	stb r0, 0x20(r1)
/* 8006ED04 0006BC44  40 82 00 4C */	bne .L_8006ED50
/* 8006ED08 0006BC48  1C 86 00 1C */	mulli r4, r6, 0x1c
/* 8006ED0C 0006BC4C  38 84 00 14 */	addi r4, r4, 0x14
/* 8006ED10 0006BC50  7C 87 22 14 */	add r4, r7, r4
/* 8006ED14 0006BC54  C0 04 00 00 */	lfs f0, 0(r4)
/* 8006ED18 0006BC58  D0 03 00 00 */	stfs f0, 0(r3)
/* 8006ED1C 0006BC5C  C0 04 00 04 */	lfs f0, 4(r4)
/* 8006ED20 0006BC60  D0 03 00 04 */	stfs f0, 4(r3)
/* 8006ED24 0006BC64  C0 04 00 08 */	lfs f0, 8(r4)
/* 8006ED28 0006BC68  D0 03 00 08 */	stfs f0, 8(r3)
/* 8006ED2C 0006BC6C  C0 04 00 0C */	lfs f0, 0xc(r4)
/* 8006ED30 0006BC70  D0 03 00 0C */	stfs f0, 0xc(r3)
/* 8006ED34 0006BC74  C0 04 00 10 */	lfs f0, 0x10(r4)
/* 8006ED38 0006BC78  D0 03 00 10 */	stfs f0, 0x10(r3)
/* 8006ED3C 0006BC7C  C0 04 00 14 */	lfs f0, 0x14(r4)
/* 8006ED40 0006BC80  D0 03 00 14 */	stfs f0, 0x14(r3)
/* 8006ED44 0006BC84  88 04 00 18 */	lbz r0, 0x18(r4)
/* 8006ED48 0006BC88  98 03 00 18 */	stb r0, 0x18(r3)
/* 8006ED4C 0006BC8C  48 00 00 3C */	b .L_8006ED88
.L_8006ED50:
/* 8006ED50 0006BC90  80 01 00 08 */	lwz r0, 8(r1)
/* 8006ED54 0006BC94  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8006ED58 0006BC98  90 03 00 00 */	stw r0, 0(r3)
/* 8006ED5C 0006BC9C  80 01 00 10 */	lwz r0, 0x10(r1)
/* 8006ED60 0006BCA0  90 83 00 04 */	stw r4, 4(r3)
/* 8006ED64 0006BCA4  80 81 00 14 */	lwz r4, 0x14(r1)
/* 8006ED68 0006BCA8  90 03 00 08 */	stw r0, 8(r3)
/* 8006ED6C 0006BCAC  80 01 00 18 */	lwz r0, 0x18(r1)
/* 8006ED70 0006BCB0  90 83 00 0C */	stw r4, 0xc(r3)
/* 8006ED74 0006BCB4  80 81 00 1C */	lwz r4, 0x1c(r1)
/* 8006ED78 0006BCB8  90 03 00 10 */	stw r0, 0x10(r3)
/* 8006ED7C 0006BCBC  80 01 00 20 */	lwz r0, 0x20(r1)
/* 8006ED80 0006BCC0  90 83 00 14 */	stw r4, 0x14(r3)
/* 8006ED84 0006BCC4  90 03 00 18 */	stw r0, 0x18(r3)
.L_8006ED88:
/* 8006ED88 0006BCC8  38 21 00 30 */	addi r1, r1, 0x30
/* 8006ED8C 0006BCCC  4E 80 00 20 */	blr 
.endfn newIndTexMtx__18J3DMaterialFactoryCFii

.fn newIndTevStage__18J3DMaterialFactoryCFii, global
/* 8006ED90 0006BCD0  3C E0 80 48 */	lis r7, j3dDefaultIndTevStageInfo@ha
/* 8006ED94 0006BCD4  80 84 00 0C */	lwz r4, 0xc(r4)
/* 8006ED98 0006BCD8  39 47 89 5C */	addi r10, r7, j3dDefaultIndTevStageInfo@l
/* 8006ED9C 0006BCDC  89 0A 00 00 */	lbz r8, 0(r10)
/* 8006EDA0 0006BCE0  1C 05 01 38 */	mulli r0, r5, 0x138
/* 8006EDA4 0006BCE4  88 AA 00 01 */	lbz r5, 1(r10)
/* 8006EDA8 0006BCE8  88 EA 00 02 */	lbz r7, 2(r10)
/* 8006EDAC 0006BCEC  55 09 07 B6 */	rlwinm r9, r8, 0, 0x1e, 0x1b
/* 8006EDB0 0006BCF0  54 A8 10 3A */	slwi r8, r5, 2
/* 8006EDB4 0006BCF4  88 AA 00 03 */	lbz r5, 3(r10)
/* 8006EDB8 0006BCF8  7D 28 43 78 */	or r8, r9, r8
/* 8006EDBC 0006BCFC  54 E7 20 36 */	slwi r7, r7, 4
/* 8006EDC0 0006BD00  55 08 07 30 */	rlwinm r8, r8, 0, 0x1c, 0x18
/* 8006EDC4 0006BD04  54 A9 48 2C */	slwi r9, r5, 9
/* 8006EDC8 0006BD08  7D 08 3B 78 */	or r8, r8, r7
/* 8006EDCC 0006BD0C  88 EA 00 04 */	lbz r7, 4(r10)
/* 8006EDD0 0006BD10  51 09 05 FE */	rlwimi r9, r8, 0, 0x17, 0x1f
/* 8006EDD4 0006BD14  88 AA 00 05 */	lbz r5, 5(r10)
/* 8006EDD8 0006BD18  54 E8 68 24 */	slwi r8, r7, 0xd
/* 8006EDDC 0006BD1C  88 EA 00 06 */	lbz r7, 6(r10)
/* 8006EDE0 0006BD20  55 29 04 DE */	rlwinm r9, r9, 0, 0x13, 0xf
/* 8006EDE4 0006BD24  54 A5 80 1E */	slwi r5, r5, 0x10
/* 8006EDE8 0006BD28  7D 28 43 78 */	or r8, r9, r8
/* 8006EDEC 0006BD2C  54 E7 A0 16 */	slwi r7, r7, 0x14
/* 8006EDF0 0006BD30  7D 24 02 14 */	add r9, r4, r0
/* 8006EDF4 0006BD34  55 08 04 18 */	rlwinm r8, r8, 0, 0x10, 0xc
/* 8006EDF8 0006BD38  88 09 00 00 */	lbz r0, 0(r9)
/* 8006EDFC 0006BD3C  7D 04 2B 78 */	or r4, r8, r5
/* 8006EE00 0006BD40  88 AA 00 07 */	lbz r5, 7(r10)
/* 8006EE04 0006BD44  54 88 03 14 */	rlwinm r8, r4, 0, 0xc, 0xa
/* 8006EE08 0006BD48  88 8A 00 08 */	lbz r4, 8(r10)
/* 8006EE0C 0006BD4C  7D 07 3B 78 */	or r7, r8, r7
/* 8006EE10 0006BD50  28 00 00 01 */	cmplwi r0, 1
/* 8006EE14 0006BD54  54 A5 98 18 */	slwi r5, r5, 0x13
/* 8006EE18 0006BD58  54 80 38 30 */	slwi r0, r4, 7
/* 8006EE1C 0006BD5C  54 E7 03 56 */	rlwinm r7, r7, 0, 0xd, 0xb
/* 8006EE20 0006BD60  7C E5 2B 78 */	or r5, r7, r5
/* 8006EE24 0006BD64  54 A4 06 6C */	rlwinm r4, r5, 0, 0x19, 0x16
/* 8006EE28 0006BD68  7C 80 03 78 */	or r0, r4, r0
/* 8006EE2C 0006BD6C  40 82 00 F0 */	bne .L_8006EF1C
/* 8006EE30 0006BD70  1C 86 00 0C */	mulli r4, r6, 0xc
/* 8006EE34 0006BD74  38 00 00 00 */	li r0, 0
/* 8006EE38 0006BD78  90 03 00 00 */	stw r0, 0(r3)
/* 8006EE3C 0006BD7C  38 84 00 78 */	addi r4, r4, 0x78
/* 8006EE40 0006BD80  80 A3 00 00 */	lwz r5, 0(r3)
/* 8006EE44 0006BD84  7C 89 22 14 */	add r4, r9, r4
/* 8006EE48 0006BD88  88 04 00 00 */	lbz r0, 0(r4)
/* 8006EE4C 0006BD8C  54 A5 00 3A */	rlwinm r5, r5, 0, 0, 0x1d
/* 8006EE50 0006BD90  7C A0 03 78 */	or r0, r5, r0
/* 8006EE54 0006BD94  90 03 00 00 */	stw r0, 0(r3)
/* 8006EE58 0006BD98  80 A3 00 00 */	lwz r5, 0(r3)
/* 8006EE5C 0006BD9C  88 04 00 01 */	lbz r0, 1(r4)
/* 8006EE60 0006BDA0  54 A5 07 B6 */	rlwinm r5, r5, 0, 0x1e, 0x1b
/* 8006EE64 0006BDA4  54 00 10 3A */	slwi r0, r0, 2
/* 8006EE68 0006BDA8  7C A0 03 78 */	or r0, r5, r0
/* 8006EE6C 0006BDAC  90 03 00 00 */	stw r0, 0(r3)
/* 8006EE70 0006BDB0  80 A3 00 00 */	lwz r5, 0(r3)
/* 8006EE74 0006BDB4  88 04 00 02 */	lbz r0, 2(r4)
/* 8006EE78 0006BDB8  54 A5 07 30 */	rlwinm r5, r5, 0, 0x1c, 0x18
/* 8006EE7C 0006BDBC  54 00 20 36 */	slwi r0, r0, 4
/* 8006EE80 0006BDC0  7C A0 03 78 */	or r0, r5, r0
/* 8006EE84 0006BDC4  90 03 00 00 */	stw r0, 0(r3)
/* 8006EE88 0006BDC8  80 A3 00 00 */	lwz r5, 0(r3)
/* 8006EE8C 0006BDCC  88 04 00 03 */	lbz r0, 3(r4)
/* 8006EE90 0006BDD0  54 A5 05 E4 */	rlwinm r5, r5, 0, 0x17, 0x12
/* 8006EE94 0006BDD4  54 00 48 2C */	slwi r0, r0, 9
/* 8006EE98 0006BDD8  7C A0 03 78 */	or r0, r5, r0
/* 8006EE9C 0006BDDC  90 03 00 00 */	stw r0, 0(r3)
/* 8006EEA0 0006BDE0  80 A3 00 00 */	lwz r5, 0(r3)
/* 8006EEA4 0006BDE4  88 04 00 04 */	lbz r0, 4(r4)
/* 8006EEA8 0006BDE8  54 A5 04 DE */	rlwinm r5, r5, 0, 0x13, 0xf
/* 8006EEAC 0006BDEC  54 00 68 24 */	slwi r0, r0, 0xd
/* 8006EEB0 0006BDF0  7C A0 03 78 */	or r0, r5, r0
/* 8006EEB4 0006BDF4  90 03 00 00 */	stw r0, 0(r3)
/* 8006EEB8 0006BDF8  80 A3 00 00 */	lwz r5, 0(r3)
/* 8006EEBC 0006BDFC  88 04 00 05 */	lbz r0, 5(r4)
/* 8006EEC0 0006BE00  54 A5 04 18 */	rlwinm r5, r5, 0, 0x10, 0xc
/* 8006EEC4 0006BE04  54 00 80 1E */	slwi r0, r0, 0x10
/* 8006EEC8 0006BE08  7C A0 03 78 */	or r0, r5, r0
/* 8006EECC 0006BE0C  90 03 00 00 */	stw r0, 0(r3)
/* 8006EED0 0006BE10  80 A3 00 00 */	lwz r5, 0(r3)
/* 8006EED4 0006BE14  88 04 00 06 */	lbz r0, 6(r4)
/* 8006EED8 0006BE18  54 A5 03 14 */	rlwinm r5, r5, 0, 0xc, 0xa
/* 8006EEDC 0006BE1C  54 00 A0 16 */	slwi r0, r0, 0x14
/* 8006EEE0 0006BE20  7C A0 03 78 */	or r0, r5, r0
/* 8006EEE4 0006BE24  90 03 00 00 */	stw r0, 0(r3)
/* 8006EEE8 0006BE28  80 A3 00 00 */	lwz r5, 0(r3)
/* 8006EEEC 0006BE2C  88 04 00 07 */	lbz r0, 7(r4)
/* 8006EEF0 0006BE30  54 A5 03 56 */	rlwinm r5, r5, 0, 0xd, 0xb
/* 8006EEF4 0006BE34  54 00 98 18 */	slwi r0, r0, 0x13
/* 8006EEF8 0006BE38  7C A0 03 78 */	or r0, r5, r0
/* 8006EEFC 0006BE3C  90 03 00 00 */	stw r0, 0(r3)
/* 8006EF00 0006BE40  80 A3 00 00 */	lwz r5, 0(r3)
/* 8006EF04 0006BE44  88 04 00 08 */	lbz r0, 8(r4)
/* 8006EF08 0006BE48  54 A4 06 6C */	rlwinm r4, r5, 0, 0x19, 0x16
/* 8006EF0C 0006BE4C  54 00 38 30 */	slwi r0, r0, 7
/* 8006EF10 0006BE50  7C 80 03 78 */	or r0, r4, r0
/* 8006EF14 0006BE54  90 03 00 00 */	stw r0, 0(r3)
/* 8006EF18 0006BE58  4E 80 00 20 */	blr 
.L_8006EF1C:
/* 8006EF1C 0006BE5C  90 03 00 00 */	stw r0, 0(r3)
/* 8006EF20 0006BE60  4E 80 00 20 */	blr 
.endfn newIndTevStage__18J3DMaterialFactoryCFii

.fn newIndTexCoordScale__18J3DMaterialFactoryCFii, global
/* 8006EF24 0006BE64  1C 05 01 38 */	mulli r0, r5, 0x138
/* 8006EF28 0006BE68  80 84 00 0C */	lwz r4, 0xc(r4)
/* 8006EF2C 0006BE6C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8006EF30 0006BE70  38 A2 86 7C */	addi r5, r2, j3dDefaultIndTexCoordScaleInfo@sda21
/* 8006EF34 0006BE74  7D 04 02 14 */	add r8, r4, r0
/* 8006EF38 0006BE78  88 E2 86 7C */	lbz r7, j3dDefaultIndTexCoordScaleInfo@sda21(r2)
/* 8006EF3C 0006BE7C  88 08 00 00 */	lbz r0, 0(r8)
/* 8006EF40 0006BE80  88 A5 00 01 */	lbz r5, 1(r5)
/* 8006EF44 0006BE84  28 00 00 01 */	cmplwi r0, 1
/* 8006EF48 0006BE88  98 E1 00 08 */	stb r7, 8(r1)
/* 8006EF4C 0006BE8C  98 A1 00 09 */	stb r5, 9(r1)
/* 8006EF50 0006BE90  40 82 00 24 */	bne .L_8006EF74
/* 8006EF54 0006BE94  54 C4 10 3A */	slwi r4, r6, 2
/* 8006EF58 0006BE98  38 84 00 68 */	addi r4, r4, 0x68
/* 8006EF5C 0006BE9C  7C 88 22 14 */	add r4, r8, r4
/* 8006EF60 0006BEA0  88 04 00 00 */	lbz r0, 0(r4)
/* 8006EF64 0006BEA4  98 03 00 00 */	stb r0, 0(r3)
/* 8006EF68 0006BEA8  88 04 00 01 */	lbz r0, 1(r4)
/* 8006EF6C 0006BEAC  98 03 00 01 */	stb r0, 1(r3)
/* 8006EF70 0006BEB0  48 00 00 0C */	b .L_8006EF7C
.L_8006EF74:
/* 8006EF74 0006BEB4  80 01 00 08 */	lwz r0, 8(r1)
/* 8006EF78 0006BEB8  90 03 00 00 */	stw r0, 0(r3)
.L_8006EF7C:
/* 8006EF7C 0006BEBC  38 21 00 10 */	addi r1, r1, 0x10
/* 8006EF80 0006BEC0  4E 80 00 20 */	blr 
.endfn newIndTexCoordScale__18J3DMaterialFactoryCFii

.fn newFog__18J3DMaterialFactoryCFi, global
/* 8006EF84 0006BEC4  94 21 FF 80 */	stwu r1, -0x80(r1)
/* 8006EF88 0006BEC8  54 A0 08 3C */	slwi r0, r5, 1
/* 8006EF8C 0006BECC  80 C4 00 08 */	lwz r6, 8(r4)
/* 8006EF90 0006BED0  3C A0 80 48 */	lis r5, j3dDefaultFogInfo@ha
/* 8006EF94 0006BED4  BF 41 00 68 */	stmw r26, 0x68(r1)
/* 8006EF98 0006BED8  3B E5 89 68 */	addi r31, r5, j3dDefaultFogInfo@l
/* 8006EF9C 0006BEDC  80 E4 00 04 */	lwz r7, 4(r4)
/* 8006EFA0 0006BEE0  7C 06 02 2E */	lhzx r0, r6, r0
/* 8006EFA4 0006BEE4  A1 5F 00 18 */	lhz r10, 0x18(r31)
/* 8006EFA8 0006BEE8  1C A0 01 4C */	mulli r5, r0, 0x14c
/* 8006EFAC 0006BEEC  A1 3F 00 1A */	lhz r9, 0x1a(r31)
/* 8006EFB0 0006BEF0  A1 1F 00 1C */	lhz r8, 0x1c(r31)
/* 8006EFB4 0006BEF4  A0 DF 00 1E */	lhz r6, 0x1e(r31)
/* 8006EFB8 0006BEF8  38 05 01 44 */	addi r0, r5, 0x144
/* 8006EFBC 0006BEFC  A0 BF 00 20 */	lhz r5, 0x20(r31)
/* 8006EFC0 0006BF00  7F 47 02 2E */	lhzx r26, r7, r0
/* 8006EFC4 0006BF04  B1 41 00 4C */	sth r10, 0x4c(r1)
/* 8006EFC8 0006BF08  8B DF 00 00 */	lbz r30, 0(r31)
/* 8006EFCC 0006BF0C  28 1A FF FF */	cmplwi r26, 0xffff
/* 8006EFD0 0006BF10  B1 21 00 4E */	sth r9, 0x4e(r1)
/* 8006EFD4 0006BF14  8B BF 00 01 */	lbz r29, 1(r31)
/* 8006EFD8 0006BF18  B1 01 00 50 */	sth r8, 0x50(r1)
/* 8006EFDC 0006BF1C  A3 9F 00 02 */	lhz r28, 2(r31)
/* 8006EFE0 0006BF20  B0 C1 00 52 */	sth r6, 0x52(r1)
/* 8006EFE4 0006BF24  C0 7F 00 04 */	lfs f3, 4(r31)
/* 8006EFE8 0006BF28  B0 A1 00 54 */	sth r5, 0x54(r1)
/* 8006EFEC 0006BF2C  C0 5F 00 08 */	lfs f2, 8(r31)
/* 8006EFF0 0006BF30  C0 3F 00 0C */	lfs f1, 0xc(r31)
/* 8006EFF4 0006BF34  C0 1F 00 10 */	lfs f0, 0x10(r31)
/* 8006EFF8 0006BF38  89 9F 00 14 */	lbz r12, 0x14(r31)
/* 8006EFFC 0006BF3C  89 7F 00 15 */	lbz r11, 0x15(r31)
/* 8006F000 0006BF40  88 FF 00 16 */	lbz r7, 0x16(r31)
/* 8006F004 0006BF44  88 1F 00 17 */	lbz r0, 0x17(r31)
/* 8006F008 0006BF48  A1 5F 00 22 */	lhz r10, 0x22(r31)
/* 8006F00C 0006BF4C  A1 3F 00 24 */	lhz r9, 0x24(r31)
/* 8006F010 0006BF50  A1 1F 00 26 */	lhz r8, 0x26(r31)
/* 8006F014 0006BF54  A0 DF 00 28 */	lhz r6, 0x28(r31)
/* 8006F018 0006BF58  A0 BF 00 2A */	lhz r5, 0x2a(r31)
/* 8006F01C 0006BF5C  9B C1 00 34 */	stb r30, 0x34(r1)
/* 8006F020 0006BF60  9B A1 00 35 */	stb r29, 0x35(r1)
/* 8006F024 0006BF64  B3 81 00 36 */	sth r28, 0x36(r1)
/* 8006F028 0006BF68  D0 61 00 38 */	stfs f3, 0x38(r1)
/* 8006F02C 0006BF6C  D0 41 00 3C */	stfs f2, 0x3c(r1)
/* 8006F030 0006BF70  D0 21 00 40 */	stfs f1, 0x40(r1)
/* 8006F034 0006BF74  D0 01 00 44 */	stfs f0, 0x44(r1)
/* 8006F038 0006BF78  99 81 00 48 */	stb r12, 0x48(r1)
/* 8006F03C 0006BF7C  99 61 00 49 */	stb r11, 0x49(r1)
/* 8006F040 0006BF80  98 E1 00 4A */	stb r7, 0x4a(r1)
/* 8006F044 0006BF84  98 01 00 4B */	stb r0, 0x4b(r1)
/* 8006F048 0006BF88  B1 41 00 56 */	sth r10, 0x56(r1)
/* 8006F04C 0006BF8C  B1 21 00 58 */	sth r9, 0x58(r1)
/* 8006F050 0006BF90  B1 01 00 5A */	sth r8, 0x5a(r1)
/* 8006F054 0006BF94  B0 C1 00 5C */	sth r6, 0x5c(r1)
/* 8006F058 0006BF98  B0 A1 00 5E */	sth r5, 0x5e(r1)
/* 8006F05C 0006BF9C  41 82 01 10 */	beq .L_8006F16C
/* 8006F060 0006BFA0  1C 1A 00 2C */	mulli r0, r26, 0x2c
/* 8006F064 0006BFA4  80 84 00 5C */	lwz r4, 0x5c(r4)
/* 8006F068 0006BFA8  7D 04 02 14 */	add r8, r4, r0
/* 8006F06C 0006BFAC  80 08 00 18 */	lwz r0, 0x18(r8)
/* 8006F070 0006BFB0  80 88 00 1C */	lwz r4, 0x1c(r8)
/* 8006F074 0006BFB4  90 01 00 20 */	stw r0, 0x20(r1)
/* 8006F078 0006BFB8  80 08 00 20 */	lwz r0, 0x20(r8)
/* 8006F07C 0006BFBC  90 81 00 24 */	stw r4, 0x24(r1)
/* 8006F080 0006BFC0  80 88 00 00 */	lwz r4, 0(r8)
/* 8006F084 0006BFC4  90 01 00 28 */	stw r0, 0x28(r1)
/* 8006F088 0006BFC8  80 E8 00 04 */	lwz r7, 4(r8)
/* 8006F08C 0006BFCC  90 81 00 08 */	stw r4, 8(r1)
/* 8006F090 0006BFD0  80 C8 00 08 */	lwz r6, 8(r8)
/* 8006F094 0006BFD4  80 A8 00 0C */	lwz r5, 0xc(r8)
/* 8006F098 0006BFD8  80 88 00 10 */	lwz r4, 0x10(r8)
/* 8006F09C 0006BFDC  80 08 00 14 */	lwz r0, 0x14(r8)
/* 8006F0A0 0006BFE0  83 88 00 24 */	lwz r28, 0x24(r8)
/* 8006F0A4 0006BFE4  90 01 00 1C */	stw r0, 0x1c(r1)
/* 8006F0A8 0006BFE8  83 A8 00 28 */	lwz r29, 0x28(r8)
/* 8006F0AC 0006BFEC  90 E1 00 0C */	stw r7, 0xc(r1)
/* 8006F0B0 0006BFF0  A0 E1 00 20 */	lhz r7, 0x20(r1)
/* 8006F0B4 0006BFF4  90 C1 00 10 */	stw r6, 0x10(r1)
/* 8006F0B8 0006BFF8  A0 C1 00 22 */	lhz r6, 0x22(r1)
/* 8006F0BC 0006BFFC  90 A1 00 14 */	stw r5, 0x14(r1)
/* 8006F0C0 0006C000  A0 A1 00 24 */	lhz r5, 0x24(r1)
/* 8006F0C4 0006C004  90 81 00 18 */	stw r4, 0x18(r1)
/* 8006F0C8 0006C008  A0 81 00 26 */	lhz r4, 0x26(r1)
/* 8006F0CC 0006C00C  A0 01 00 28 */	lhz r0, 0x28(r1)
/* 8006F0D0 0006C010  B0 E1 00 4C */	sth r7, 0x4c(r1)
/* 8006F0D4 0006C014  8B C1 00 08 */	lbz r30, 8(r1)
/* 8006F0D8 0006C018  8B E1 00 09 */	lbz r31, 9(r1)
/* 8006F0DC 0006C01C  A1 81 00 0A */	lhz r12, 0xa(r1)
/* 8006F0E0 0006C020  C0 61 00 0C */	lfs f3, 0xc(r1)
/* 8006F0E4 0006C024  C0 41 00 10 */	lfs f2, 0x10(r1)
/* 8006F0E8 0006C028  C0 21 00 14 */	lfs f1, 0x14(r1)
/* 8006F0EC 0006C02C  C0 01 00 18 */	lfs f0, 0x18(r1)
/* 8006F0F0 0006C030  89 61 00 1C */	lbz r11, 0x1c(r1)
/* 8006F0F4 0006C034  89 41 00 1D */	lbz r10, 0x1d(r1)
/* 8006F0F8 0006C038  89 21 00 1E */	lbz r9, 0x1e(r1)
/* 8006F0FC 0006C03C  89 01 00 1F */	lbz r8, 0x1f(r1)
/* 8006F100 0006C040  A0 E1 00 2A */	lhz r7, 0x2a(r1)
/* 8006F104 0006C044  93 81 00 2C */	stw r28, 0x2c(r1)
/* 8006F108 0006C048  B0 C1 00 4E */	sth r6, 0x4e(r1)
/* 8006F10C 0006C04C  A0 C1 00 2C */	lhz r6, 0x2c(r1)
/* 8006F110 0006C050  B0 A1 00 50 */	sth r5, 0x50(r1)
/* 8006F114 0006C054  A0 A1 00 2E */	lhz r5, 0x2e(r1)
/* 8006F118 0006C058  93 A1 00 30 */	stw r29, 0x30(r1)
/* 8006F11C 0006C05C  B0 81 00 52 */	sth r4, 0x52(r1)
/* 8006F120 0006C060  A0 81 00 30 */	lhz r4, 0x30(r1)
/* 8006F124 0006C064  B0 01 00 54 */	sth r0, 0x54(r1)
/* 8006F128 0006C068  A0 01 00 32 */	lhz r0, 0x32(r1)
/* 8006F12C 0006C06C  9B C1 00 34 */	stb r30, 0x34(r1)
/* 8006F130 0006C070  9B E1 00 35 */	stb r31, 0x35(r1)
/* 8006F134 0006C074  B1 81 00 36 */	sth r12, 0x36(r1)
/* 8006F138 0006C078  D0 61 00 38 */	stfs f3, 0x38(r1)
/* 8006F13C 0006C07C  D0 41 00 3C */	stfs f2, 0x3c(r1)
/* 8006F140 0006C080  D0 21 00 40 */	stfs f1, 0x40(r1)
/* 8006F144 0006C084  D0 01 00 44 */	stfs f0, 0x44(r1)
/* 8006F148 0006C088  99 61 00 48 */	stb r11, 0x48(r1)
/* 8006F14C 0006C08C  99 41 00 49 */	stb r10, 0x49(r1)
/* 8006F150 0006C090  99 21 00 4A */	stb r9, 0x4a(r1)
/* 8006F154 0006C094  99 01 00 4B */	stb r8, 0x4b(r1)
/* 8006F158 0006C098  B0 E1 00 56 */	sth r7, 0x56(r1)
/* 8006F15C 0006C09C  B0 C1 00 58 */	sth r6, 0x58(r1)
/* 8006F160 0006C0A0  B0 A1 00 5A */	sth r5, 0x5a(r1)
/* 8006F164 0006C0A4  B0 81 00 5C */	sth r4, 0x5c(r1)
/* 8006F168 0006C0A8  B0 01 00 5E */	sth r0, 0x5e(r1)
.L_8006F16C:
/* 8006F16C 0006C0AC  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8006F170 0006C0B0  80 81 00 38 */	lwz r4, 0x38(r1)
/* 8006F174 0006C0B4  90 03 00 00 */	stw r0, 0(r3)
/* 8006F178 0006C0B8  80 01 00 3C */	lwz r0, 0x3c(r1)
/* 8006F17C 0006C0BC  90 83 00 04 */	stw r4, 4(r3)
/* 8006F180 0006C0C0  80 81 00 40 */	lwz r4, 0x40(r1)
/* 8006F184 0006C0C4  90 03 00 08 */	stw r0, 8(r3)
/* 8006F188 0006C0C8  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8006F18C 0006C0CC  90 83 00 0C */	stw r4, 0xc(r3)
/* 8006F190 0006C0D0  80 81 00 48 */	lwz r4, 0x48(r1)
/* 8006F194 0006C0D4  90 03 00 10 */	stw r0, 0x10(r3)
/* 8006F198 0006C0D8  80 01 00 4C */	lwz r0, 0x4c(r1)
/* 8006F19C 0006C0DC  90 83 00 14 */	stw r4, 0x14(r3)
/* 8006F1A0 0006C0E0  80 81 00 50 */	lwz r4, 0x50(r1)
/* 8006F1A4 0006C0E4  90 03 00 18 */	stw r0, 0x18(r3)
/* 8006F1A8 0006C0E8  80 01 00 54 */	lwz r0, 0x54(r1)
/* 8006F1AC 0006C0EC  90 83 00 1C */	stw r4, 0x1c(r3)
/* 8006F1B0 0006C0F0  80 81 00 58 */	lwz r4, 0x58(r1)
/* 8006F1B4 0006C0F4  90 03 00 20 */	stw r0, 0x20(r3)
/* 8006F1B8 0006C0F8  80 01 00 5C */	lwz r0, 0x5c(r1)
/* 8006F1BC 0006C0FC  90 83 00 24 */	stw r4, 0x24(r3)
/* 8006F1C0 0006C100  90 03 00 28 */	stw r0, 0x28(r3)
/* 8006F1C4 0006C104  BB 41 00 68 */	lmw r26, 0x68(r1)
/* 8006F1C8 0006C108  38 21 00 80 */	addi r1, r1, 0x80
/* 8006F1CC 0006C10C  4E 80 00 20 */	blr 
.endfn newFog__18J3DMaterialFactoryCFi

.fn newAlphaComp__18J3DMaterialFactoryCFi, global
/* 8006F1D0 0006C110  80 C4 00 08 */	lwz r6, 8(r4)
/* 8006F1D4 0006C114  54 A0 08 3C */	slwi r0, r5, 1
/* 8006F1D8 0006C118  80 E4 00 04 */	lwz r7, 4(r4)
/* 8006F1DC 0006C11C  7C 06 02 2E */	lhzx r0, r6, r0
/* 8006F1E0 0006C120  1C A0 01 4C */	mulli r5, r0, 0x14c
/* 8006F1E4 0006C124  38 05 01 46 */	addi r0, r5, 0x146
/* 8006F1E8 0006C128  7C 07 02 2E */	lhzx r0, r7, r0
/* 8006F1EC 0006C12C  28 00 FF FF */	cmplwi r0, 0xffff
/* 8006F1F0 0006C130  41 82 00 44 */	beq .L_8006F234
/* 8006F1F4 0006C134  80 84 00 60 */	lwz r4, 0x60(r4)
/* 8006F1F8 0006C138  54 00 1B 78 */	rlwinm r0, r0, 3, 0xd, 0x1c
/* 8006F1FC 0006C13C  7C C4 02 14 */	add r6, r4, r0
/* 8006F200 0006C140  88 06 00 02 */	lbz r0, 2(r6)
/* 8006F204 0006C144  88 86 00 00 */	lbz r4, 0(r6)
/* 8006F208 0006C148  88 A6 00 03 */	lbz r5, 3(r6)
/* 8006F20C 0006C14C  54 00 18 38 */	slwi r0, r0, 3
/* 8006F210 0006C150  54 84 28 34 */	slwi r4, r4, 5
/* 8006F214 0006C154  7C 00 2A 14 */	add r0, r0, r5
/* 8006F218 0006C158  7C 04 02 14 */	add r0, r4, r0
/* 8006F21C 0006C15C  B0 03 00 00 */	sth r0, 0(r3)
/* 8006F220 0006C160  88 06 00 01 */	lbz r0, 1(r6)
/* 8006F224 0006C164  98 03 00 02 */	stb r0, 2(r3)
/* 8006F228 0006C168  88 06 00 04 */	lbz r0, 4(r6)
/* 8006F22C 0006C16C  98 03 00 03 */	stb r0, 3(r3)
/* 8006F230 0006C170  4E 80 00 20 */	blr 
.L_8006F234:
/* 8006F234 0006C174  3C 80 00 01 */	lis r4, 0x0000FFFF@ha
/* 8006F238 0006C178  38 00 00 00 */	li r0, 0
/* 8006F23C 0006C17C  38 84 FF FF */	addi r4, r4, 0x0000FFFF@l
/* 8006F240 0006C180  B0 83 00 00 */	sth r4, 0(r3)
/* 8006F244 0006C184  98 03 00 02 */	stb r0, 2(r3)
/* 8006F248 0006C188  98 03 00 03 */	stb r0, 3(r3)
/* 8006F24C 0006C18C  4E 80 00 20 */	blr 
.endfn newAlphaComp__18J3DMaterialFactoryCFi

.fn newBlend__18J3DMaterialFactoryCFi, global
/* 8006F250 0006C190  80 C4 00 08 */	lwz r6, 8(r4)
/* 8006F254 0006C194  54 A0 08 3C */	slwi r0, r5, 1
/* 8006F258 0006C198  80 E4 00 04 */	lwz r7, 4(r4)
/* 8006F25C 0006C19C  7C 06 02 2E */	lhzx r0, r6, r0
/* 8006F260 0006C1A0  1C A0 01 4C */	mulli r5, r0, 0x14c
/* 8006F264 0006C1A4  38 05 01 48 */	addi r0, r5, 0x148
/* 8006F268 0006C1A8  7C 07 02 2E */	lhzx r0, r7, r0
/* 8006F26C 0006C1AC  28 00 FF FF */	cmplwi r0, 0xffff
/* 8006F270 0006C1B0  41 82 00 34 */	beq .L_8006F2A4
/* 8006F274 0006C1B4  80 84 00 64 */	lwz r4, 0x64(r4)
/* 8006F278 0006C1B8  54 00 13 BA */	rlwinm r0, r0, 2, 0xe, 0x1d
/* 8006F27C 0006C1BC  7C 84 02 14 */	add r4, r4, r0
/* 8006F280 0006C1C0  88 04 00 00 */	lbz r0, 0(r4)
/* 8006F284 0006C1C4  98 03 00 00 */	stb r0, 0(r3)
/* 8006F288 0006C1C8  88 04 00 01 */	lbz r0, 1(r4)
/* 8006F28C 0006C1CC  98 03 00 01 */	stb r0, 1(r3)
/* 8006F290 0006C1D0  88 04 00 02 */	lbz r0, 2(r4)
/* 8006F294 0006C1D4  98 03 00 02 */	stb r0, 2(r3)
/* 8006F298 0006C1D8  88 04 00 03 */	lbz r0, 3(r4)
/* 8006F29C 0006C1DC  98 03 00 03 */	stb r0, 3(r3)
/* 8006F2A0 0006C1E0  4E 80 00 20 */	blr 
.L_8006F2A4:
/* 8006F2A4 0006C1E4  88 02 86 8C */	lbz r0, j3dDefaultBlendInfo@sda21(r2)
/* 8006F2A8 0006C1E8  38 82 86 8C */	addi r4, r2, j3dDefaultBlendInfo@sda21
/* 8006F2AC 0006C1EC  98 03 00 00 */	stb r0, 0(r3)
/* 8006F2B0 0006C1F0  88 04 00 01 */	lbz r0, 1(r4)
/* 8006F2B4 0006C1F4  98 03 00 01 */	stb r0, 1(r3)
/* 8006F2B8 0006C1F8  88 04 00 02 */	lbz r0, 2(r4)
/* 8006F2BC 0006C1FC  98 03 00 02 */	stb r0, 2(r3)
/* 8006F2C0 0006C200  88 04 00 03 */	lbz r0, 3(r4)
/* 8006F2C4 0006C204  98 03 00 03 */	stb r0, 3(r3)
/* 8006F2C8 0006C208  4E 80 00 20 */	blr 
.endfn newBlend__18J3DMaterialFactoryCFi

.fn newZMode__18J3DMaterialFactoryCFi, global
/* 8006F2CC 0006C20C  80 C4 00 08 */	lwz r6, 8(r4)
/* 8006F2D0 0006C210  54 A0 08 3C */	slwi r0, r5, 1
/* 8006F2D4 0006C214  80 E4 00 04 */	lwz r7, 4(r4)
/* 8006F2D8 0006C218  7C 06 02 2E */	lhzx r0, r6, r0
/* 8006F2DC 0006C21C  1C A0 01 4C */	mulli r5, r0, 0x14c
/* 8006F2E0 0006C220  38 05 00 06 */	addi r0, r5, 6
/* 8006F2E4 0006C224  7C 07 00 AE */	lbzx r0, r7, r0
/* 8006F2E8 0006C228  28 00 00 FF */	cmplwi r0, 0xff
/* 8006F2EC 0006C22C  41 82 00 34 */	beq .L_8006F320
/* 8006F2F0 0006C230  80 84 00 68 */	lwz r4, 0x68(r4)
/* 8006F2F4 0006C234  54 00 15 BA */	rlwinm r0, r0, 2, 0x16, 0x1d
/* 8006F2F8 0006C238  7C A4 02 14 */	add r5, r4, r0
/* 8006F2FC 0006C23C  88 05 00 00 */	lbz r0, 0(r5)
/* 8006F300 0006C240  88 85 00 01 */	lbz r4, 1(r5)
/* 8006F304 0006C244  88 A5 00 02 */	lbz r5, 2(r5)
/* 8006F308 0006C248  54 00 20 36 */	slwi r0, r0, 4
/* 8006F30C 0006C24C  54 84 08 3C */	slwi r4, r4, 1
/* 8006F310 0006C250  7C 00 2A 14 */	add r0, r0, r5
/* 8006F314 0006C254  7C 04 02 14 */	add r0, r4, r0
/* 8006F318 0006C258  B0 03 00 00 */	sth r0, 0(r3)
/* 8006F31C 0006C25C  4E 80 00 20 */	blr 
.L_8006F320:
/* 8006F320 0006C260  A0 02 86 9C */	lhz r0, j3dDefaultZModeID@sda21(r2)
/* 8006F324 0006C264  B0 03 00 00 */	sth r0, 0(r3)
/* 8006F328 0006C268  4E 80 00 20 */	blr 
.endfn newZMode__18J3DMaterialFactoryCFi

.fn newZCompLoc__18J3DMaterialFactoryCFi, global
/* 8006F32C 0006C26C  80 A3 00 08 */	lwz r5, 8(r3)
/* 8006F330 0006C270  54 80 08 3C */	slwi r0, r4, 1
/* 8006F334 0006C274  80 C3 00 04 */	lwz r6, 4(r3)
/* 8006F338 0006C278  7C 05 02 2E */	lhzx r0, r5, r0
/* 8006F33C 0006C27C  1C 80 01 4C */	mulli r4, r0, 0x14c
/* 8006F340 0006C280  38 04 00 05 */	addi r0, r4, 5
/* 8006F344 0006C284  7C 06 00 AE */	lbzx r0, r6, r0
/* 8006F348 0006C288  28 00 00 FF */	cmplwi r0, 0xff
/* 8006F34C 0006C28C  41 82 00 10 */	beq .L_8006F35C
/* 8006F350 0006C290  80 63 00 6C */	lwz r3, 0x6c(r3)
/* 8006F354 0006C294  7C 63 00 AE */	lbzx r3, r3, r0
/* 8006F358 0006C298  4E 80 00 20 */	blr 
.L_8006F35C:
/* 8006F35C 0006C29C  38 60 00 00 */	li r3, 0
/* 8006F360 0006C2A0  4E 80 00 20 */	blr 
.endfn newZCompLoc__18J3DMaterialFactoryCFi

.fn newDither__18J3DMaterialFactoryCFi, global
/* 8006F364 0006C2A4  80 A3 00 08 */	lwz r5, 8(r3)
/* 8006F368 0006C2A8  54 80 08 3C */	slwi r0, r4, 1
/* 8006F36C 0006C2AC  80 C3 00 04 */	lwz r6, 4(r3)
/* 8006F370 0006C2B0  7C 05 02 2E */	lhzx r0, r5, r0
/* 8006F374 0006C2B4  1C 80 01 4C */	mulli r4, r0, 0x14c
/* 8006F378 0006C2B8  38 04 00 07 */	addi r0, r4, 7
/* 8006F37C 0006C2BC  7C 06 00 AE */	lbzx r0, r6, r0
/* 8006F380 0006C2C0  28 00 00 FF */	cmplwi r0, 0xff
/* 8006F384 0006C2C4  41 82 00 10 */	beq .L_8006F394
/* 8006F388 0006C2C8  80 63 00 70 */	lwz r3, 0x70(r3)
/* 8006F38C 0006C2CC  7C 63 00 AE */	lbzx r3, r3, r0
/* 8006F390 0006C2D0  4E 80 00 20 */	blr 
.L_8006F394:
/* 8006F394 0006C2D4  38 60 00 01 */	li r3, 1
/* 8006F398 0006C2D8  4E 80 00 20 */	blr 
.endfn newDither__18J3DMaterialFactoryCFi

.fn newNBTScale__18J3DMaterialFactoryCFi, global
/* 8006F39C 0006C2DC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8006F3A0 0006C2E0  54 A0 08 3C */	slwi r0, r5, 1
/* 8006F3A4 0006C2E4  80 C4 00 08 */	lwz r6, 8(r4)
/* 8006F3A8 0006C2E8  3C A0 80 48 */	lis r5, j3dDefaultNBTScaleInfo@ha
/* 8006F3AC 0006C2EC  39 05 89 94 */	addi r8, r5, j3dDefaultNBTScaleInfo@l
/* 8006F3B0 0006C2F0  80 E4 00 04 */	lwz r7, 4(r4)
/* 8006F3B4 0006C2F4  7C 06 02 2E */	lhzx r0, r6, r0
/* 8006F3B8 0006C2F8  88 C8 00 00 */	lbz r6, 0(r8)
/* 8006F3BC 0006C2FC  1C A0 01 4C */	mulli r5, r0, 0x14c
/* 8006F3C0 0006C300  C0 48 00 04 */	lfs f2, 4(r8)
/* 8006F3C4 0006C304  C0 28 00 08 */	lfs f1, 8(r8)
/* 8006F3C8 0006C308  C0 08 00 0C */	lfs f0, 0xc(r8)
/* 8006F3CC 0006C30C  38 05 01 4A */	addi r0, r5, 0x14a
/* 8006F3D0 0006C310  98 C1 00 08 */	stb r6, 8(r1)
/* 8006F3D4 0006C314  7C 07 02 2E */	lhzx r0, r7, r0
/* 8006F3D8 0006C318  D0 41 00 0C */	stfs f2, 0xc(r1)
/* 8006F3DC 0006C31C  28 00 FF FF */	cmplwi r0, 0xffff
/* 8006F3E0 0006C320  D0 21 00 10 */	stfs f1, 0x10(r1)
/* 8006F3E4 0006C324  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 8006F3E8 0006C328  41 82 00 34 */	beq .L_8006F41C
/* 8006F3EC 0006C32C  80 84 00 74 */	lwz r4, 0x74(r4)
/* 8006F3F0 0006C330  54 00 23 36 */	rlwinm r0, r0, 4, 0xc, 0x1b
/* 8006F3F4 0006C334  7C 84 02 14 */	add r4, r4, r0
/* 8006F3F8 0006C338  88 04 00 00 */	lbz r0, 0(r4)
/* 8006F3FC 0006C33C  98 03 00 00 */	stb r0, 0(r3)
/* 8006F400 0006C340  C0 04 00 04 */	lfs f0, 4(r4)
/* 8006F404 0006C344  D0 03 00 04 */	stfs f0, 4(r3)
/* 8006F408 0006C348  C0 04 00 08 */	lfs f0, 8(r4)
/* 8006F40C 0006C34C  D0 03 00 08 */	stfs f0, 8(r3)
/* 8006F410 0006C350  C0 04 00 0C */	lfs f0, 0xc(r4)
/* 8006F414 0006C354  D0 03 00 0C */	stfs f0, 0xc(r3)
/* 8006F418 0006C358  48 00 00 24 */	b .L_8006F43C
.L_8006F41C:
/* 8006F41C 0006C35C  80 81 00 08 */	lwz r4, 8(r1)
/* 8006F420 0006C360  80 01 00 0C */	lwz r0, 0xc(r1)
/* 8006F424 0006C364  90 83 00 00 */	stw r4, 0(r3)
/* 8006F428 0006C368  80 81 00 10 */	lwz r4, 0x10(r1)
/* 8006F42C 0006C36C  90 03 00 04 */	stw r0, 4(r3)
/* 8006F430 0006C370  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8006F434 0006C374  90 83 00 08 */	stw r4, 8(r3)
/* 8006F438 0006C378  90 03 00 0C */	stw r0, 0xc(r3)
.L_8006F43C:
/* 8006F43C 0006C37C  38 21 00 20 */	addi r1, r1, 0x20
/* 8006F440 0006C380  4E 80 00 20 */	blr 
.endfn newNBTScale__18J3DMaterialFactoryCFi

.fn load__14J3DPEBlockNullFv, weak
/* 8006F444 0006C384  4E 80 00 20 */	blr 
.endfn load__14J3DPEBlockNullFv

.fn getType__14J3DPEBlockNullFv, weak
/* 8006F448 0006C388  3C 60 50 45 */	lis r3, 0x50454E4C@ha
/* 8006F44C 0006C38C  38 63 4E 4C */	addi r3, r3, 0x50454E4C@l
/* 8006F450 0006C390  4E 80 00 20 */	blr 
.endfn getType__14J3DPEBlockNullFv

.fn __dt__14J3DPEBlockNullFv, weak
/* 8006F454 0006C394  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8006F458 0006C398  7C 08 02 A6 */	mflr r0
/* 8006F45C 0006C39C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8006F460 0006C3A0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8006F464 0006C3A4  7C 7F 1B 79 */	or. r31, r3, r3
/* 8006F468 0006C3A8  41 82 00 30 */	beq .L_8006F498
/* 8006F46C 0006C3AC  3C 60 80 4A */	lis r3, __vt__14J3DPEBlockNull@ha
/* 8006F470 0006C3B0  38 03 1B E0 */	addi r0, r3, __vt__14J3DPEBlockNull@l
/* 8006F474 0006C3B4  90 1F 00 00 */	stw r0, 0(r31)
/* 8006F478 0006C3B8  41 82 00 10 */	beq .L_8006F488
/* 8006F47C 0006C3BC  3C 60 80 4A */	lis r3, __vt__10J3DPEBlock@ha
/* 8006F480 0006C3C0  38 03 16 08 */	addi r0, r3, __vt__10J3DPEBlock@l
/* 8006F484 0006C3C4  90 1F 00 00 */	stw r0, 0(r31)
.L_8006F488:
/* 8006F488 0006C3C8  7C 80 07 35 */	extsh. r0, r4
/* 8006F48C 0006C3CC  40 81 00 0C */	ble .L_8006F498
/* 8006F490 0006C3D0  7F E3 FB 78 */	mr r3, r31
/* 8006F494 0006C3D4  4B FB 4C 21 */	bl __dl__FPv
.L_8006F498:
/* 8006F498 0006C3D8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8006F49C 0006C3DC  7F E3 FB 78 */	mr r3, r31
/* 8006F4A0 0006C3E0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8006F4A4 0006C3E4  7C 08 03 A6 */	mtlr r0
/* 8006F4A8 0006C3E8  38 21 00 10 */	addi r1, r1, 0x10
/* 8006F4AC 0006C3EC  4E 80 00 20 */	blr 
.endfn __dt__14J3DPEBlockNullFv

.fn reset__15J3DTevBlockNullFP11J3DTevBlock, weak
/* 8006F4B0 0006C3F0  4E 80 00 20 */	blr 
.endfn reset__15J3DTevBlockNullFP11J3DTevBlock

.fn ptrToIndex__15J3DTevBlockNullFv, weak
/* 8006F4B4 0006C3F4  4E 80 00 20 */	blr 
.endfn ptrToIndex__15J3DTevBlockNullFv

.fn indexToPtr__15J3DTevBlockNullFv, weak
/* 8006F4B8 0006C3F8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8006F4BC 0006C3FC  7C 08 02 A6 */	mflr r0
/* 8006F4C0 0006C400  90 01 00 14 */	stw r0, 0x14(r1)
/* 8006F4C4 0006C404  80 83 00 04 */	lwz r4, 4(r3)
/* 8006F4C8 0006C408  48 00 E7 65 */	bl indexToPtr_private__11J3DTevBlockFUl
/* 8006F4CC 0006C40C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8006F4D0 0006C410  7C 08 03 A6 */	mtlr r0
/* 8006F4D4 0006C414  38 21 00 10 */	addi r1, r1, 0x10
/* 8006F4D8 0006C418  4E 80 00 20 */	blr 
.endfn indexToPtr__15J3DTevBlockNullFv

.fn getType__15J3DTevBlockNullFv, weak
/* 8006F4DC 0006C41C  3C 60 54 56 */	lis r3, 0x54564E4C@ha
/* 8006F4E0 0006C420  38 63 4E 4C */	addi r3, r3, 0x54564E4C@l
/* 8006F4E4 0006C424  4E 80 00 20 */	blr 
.endfn getType__15J3DTevBlockNullFv

.fn __dt__15J3DTevBlockNullFv, weak
/* 8006F4E8 0006C428  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8006F4EC 0006C42C  7C 08 02 A6 */	mflr r0
/* 8006F4F0 0006C430  90 01 00 14 */	stw r0, 0x14(r1)
/* 8006F4F4 0006C434  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8006F4F8 0006C438  7C 7F 1B 79 */	or. r31, r3, r3
/* 8006F4FC 0006C43C  41 82 00 30 */	beq .L_8006F52C
/* 8006F500 0006C440  3C 60 80 4A */	lis r3, __vt__15J3DTevBlockNull@ha
/* 8006F504 0006C444  38 03 1C 5C */	addi r0, r3, __vt__15J3DTevBlockNull@l
/* 8006F508 0006C448  90 1F 00 00 */	stw r0, 0(r31)
/* 8006F50C 0006C44C  41 82 00 10 */	beq .L_8006F51C
/* 8006F510 0006C450  3C 60 80 4A */	lis r3, __vt__11J3DTevBlock@ha
/* 8006F514 0006C454  38 03 2B 08 */	addi r0, r3, __vt__11J3DTevBlock@l
/* 8006F518 0006C458  90 1F 00 00 */	stw r0, 0(r31)
.L_8006F51C:
/* 8006F51C 0006C45C  7C 80 07 35 */	extsh. r0, r4
/* 8006F520 0006C460  40 81 00 0C */	ble .L_8006F52C
/* 8006F524 0006C464  7F E3 FB 78 */	mr r3, r31
/* 8006F528 0006C468  4B FB 4B 8D */	bl __dl__FPv
.L_8006F52C:
/* 8006F52C 0006C46C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8006F530 0006C470  7F E3 FB 78 */	mr r3, r31
/* 8006F534 0006C474  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8006F538 0006C478  7C 08 03 A6 */	mtlr r0
/* 8006F53C 0006C47C  38 21 00 10 */	addi r1, r1, 0x10
/* 8006F540 0006C480  4E 80 00 20 */	blr 
.endfn __dt__15J3DTevBlockNullFv

.fn diffTexNo__11J3DTevBlockFv, weak
/* 8006F544 0006C484  4E 80 00 20 */	blr 
.endfn diffTexNo__11J3DTevBlockFv

.fn diffTevReg__11J3DTevBlockFv, weak
/* 8006F548 0006C488  4E 80 00 20 */	blr 
.endfn diffTevReg__11J3DTevBlockFv

.fn diffTexCoordScale__11J3DTevBlockFv, weak
/* 8006F54C 0006C48C  4E 80 00 20 */	blr 
.endfn diffTexCoordScale__11J3DTevBlockFv

.fn diffTevStage__11J3DTevBlockFv, weak
/* 8006F550 0006C490  4E 80 00 20 */	blr 
.endfn diffTevStage__11J3DTevBlockFv

.fn diffTevStageIndirect__11J3DTevBlockFv, weak
/* 8006F554 0006C494  4E 80 00 20 */	blr 
.endfn diffTevStageIndirect__11J3DTevBlockFv

.fn patchTexNo__11J3DTevBlockFv, weak
/* 8006F558 0006C498  4E 80 00 20 */	blr 
.endfn patchTexNo__11J3DTevBlockFv

.fn patchTevReg__11J3DTevBlockFv, weak
/* 8006F55C 0006C49C  4E 80 00 20 */	blr 
.endfn patchTevReg__11J3DTevBlockFv

.fn patchTexNoAndTexCoordScale__11J3DTevBlockFv, weak
/* 8006F560 0006C4A0  4E 80 00 20 */	blr 
.endfn patchTexNoAndTexCoordScale__11J3DTevBlockFv

.fn setTexNo__11J3DTevBlockFUlPCUs, weak
/* 8006F564 0006C4A4  4E 80 00 20 */	blr 
.endfn setTexNo__11J3DTevBlockFUlPCUs

.fn setTevOrder__11J3DTevBlockFUlPC11J3DTevOrder, weak
/* 8006F568 0006C4A8  4E 80 00 20 */	blr 
.endfn setTevOrder__11J3DTevBlockFUlPC11J3DTevOrder

.fn getTevOrder__11J3DTevBlockFUl, weak
/* 8006F56C 0006C4AC  38 60 00 00 */	li r3, 0
/* 8006F570 0006C4B0  4E 80 00 20 */	blr 
.endfn getTevOrder__11J3DTevBlockFUl

.fn setTevColor__11J3DTevBlockFUlPC13J3DGXColorS10, weak
/* 8006F574 0006C4B4  4E 80 00 20 */	blr 
.endfn setTevColor__11J3DTevBlockFUlPC13J3DGXColorS10

.fn setTevKColor__11J3DTevBlockFUlPC10J3DGXColor, weak
/* 8006F578 0006C4B8  4E 80 00 20 */	blr 
.endfn setTevKColor__11J3DTevBlockFUlPC10J3DGXColor

.fn setTevKColorSel__11J3DTevBlockFUlPCUc, weak
/* 8006F57C 0006C4BC  4E 80 00 20 */	blr 
.endfn setTevKColorSel__11J3DTevBlockFUlPCUc

.fn getTevKColorSel__11J3DTevBlockFUl, weak
/* 8006F580 0006C4C0  38 60 00 00 */	li r3, 0
/* 8006F584 0006C4C4  4E 80 00 20 */	blr 
.endfn getTevKColorSel__11J3DTevBlockFUl

.fn setTevKAlphaSel__11J3DTevBlockFUlPCUc, weak
/* 8006F588 0006C4C8  4E 80 00 20 */	blr 
.endfn setTevKAlphaSel__11J3DTevBlockFUlPCUc

.fn getTevKAlphaSel__11J3DTevBlockFUl, weak
/* 8006F58C 0006C4CC  38 60 00 00 */	li r3, 0
/* 8006F590 0006C4D0  4E 80 00 20 */	blr 
.endfn getTevKAlphaSel__11J3DTevBlockFUl

.fn setTevStageNum__11J3DTevBlockFPCUc, weak
/* 8006F594 0006C4D4  4E 80 00 20 */	blr 
.endfn setTevStageNum__11J3DTevBlockFPCUc

.fn setTevStage__11J3DTevBlockFUlPC11J3DTevStage, weak
/* 8006F598 0006C4D8  4E 80 00 20 */	blr 
.endfn setTevStage__11J3DTevBlockFUlPC11J3DTevStage

.fn setTevSwapModeInfo__11J3DTevBlockFUl18J3DTevSwapModeInfo, weak
/* 8006F59C 0006C4DC  4E 80 00 20 */	blr 
.endfn setTevSwapModeInfo__11J3DTevBlockFUl18J3DTevSwapModeInfo

.fn setTevSwapModeInfo__11J3DTevBlockFUlPC18J3DTevSwapModeInfo, weak
/* 8006F5A0 0006C4E0  4E 80 00 20 */	blr 
.endfn setTevSwapModeInfo__11J3DTevBlockFUlPC18J3DTevSwapModeInfo

.fn setTevSwapModeTable__11J3DTevBlockFUlPC19J3DTevSwapModeTable, weak
/* 8006F5A4 0006C4E4  4E 80 00 20 */	blr 
.endfn setTevSwapModeTable__11J3DTevBlockFUlPC19J3DTevSwapModeTable

.fn getTevSwapModeTable__11J3DTevBlockFUl, weak
/* 8006F5A8 0006C4E8  38 60 00 00 */	li r3, 0
/* 8006F5AC 0006C4EC  4E 80 00 20 */	blr 
.endfn getTevSwapModeTable__11J3DTevBlockFUl

.fn setIndTevStage__11J3DTevBlockFUlPC14J3DIndTevStage, weak
/* 8006F5B0 0006C4F0  4E 80 00 20 */	blr 
.endfn setIndTevStage__11J3DTevBlockFUlPC14J3DIndTevStage

.fn getIndTevStage__11J3DTevBlockFUl, weak
/* 8006F5B4 0006C4F4  38 60 00 00 */	li r3, 0
/* 8006F5B8 0006C4F8  4E 80 00 20 */	blr 
.endfn getIndTevStage__11J3DTevBlockFUl

.fn getTexNoOffset__11J3DTevBlockCFv, weak
/* 8006F5BC 0006C4FC  38 60 00 00 */	li r3, 0
/* 8006F5C0 0006C500  4E 80 00 20 */	blr 
.endfn getTexNoOffset__11J3DTevBlockCFv

.fn getTevRegOffset__11J3DTevBlockCFv, weak
/* 8006F5C4 0006C504  38 60 00 00 */	li r3, 0
/* 8006F5C8 0006C508  4E 80 00 20 */	blr 
.endfn getTevRegOffset__11J3DTevBlockCFv

.fn calc__18J3DTexGenBlockNullFPA4_Cf, weak
/* 8006F5CC 0006C50C  4E 80 00 20 */	blr 
.endfn calc__18J3DTexGenBlockNullFPA4_Cf

.fn calcWithoutViewMtx__18J3DTexGenBlockNullFPA4_Cf, weak
/* 8006F5D0 0006C510  4E 80 00 20 */	blr 
.endfn calcWithoutViewMtx__18J3DTexGenBlockNullFPA4_Cf

.fn calcPostTexMtx__18J3DTexGenBlockNullFPA4_Cf, weak
/* 8006F5D4 0006C514  4E 80 00 20 */	blr 
.endfn calcPostTexMtx__18J3DTexGenBlockNullFPA4_Cf

.fn calcPostTexMtxWithoutViewMtx__18J3DTexGenBlockNullFPA4_Cf, weak
/* 8006F5D8 0006C518  4E 80 00 20 */	blr 
.endfn calcPostTexMtxWithoutViewMtx__18J3DTexGenBlockNullFPA4_Cf

.fn load__18J3DTexGenBlockNullFv, weak
/* 8006F5DC 0006C51C  4E 80 00 20 */	blr 
.endfn load__18J3DTexGenBlockNullFv

.fn patch__18J3DTexGenBlockNullFv, weak
/* 8006F5E0 0006C520  4E 80 00 20 */	blr 
.endfn patch__18J3DTexGenBlockNullFv

.fn diff__18J3DTexGenBlockNullFUl, weak
/* 8006F5E4 0006C524  4E 80 00 20 */	blr 
.endfn diff__18J3DTexGenBlockNullFUl

.fn diffTexMtx__18J3DTexGenBlockNullFv, weak
/* 8006F5E8 0006C528  4E 80 00 20 */	blr 
.endfn diffTexMtx__18J3DTexGenBlockNullFv

.fn diffTexGen__18J3DTexGenBlockNullFv, weak
/* 8006F5EC 0006C52C  4E 80 00 20 */	blr 
.endfn diffTexGen__18J3DTexGenBlockNullFv

.fn getType__18J3DTexGenBlockNullFv, weak
/* 8006F5F0 0006C530  3C 60 54 47 */	lis r3, 0x54474E4C@ha
/* 8006F5F4 0006C534  38 63 4E 4C */	addi r3, r3, 0x54474E4C@l
/* 8006F5F8 0006C538  4E 80 00 20 */	blr 
.endfn getType__18J3DTexGenBlockNullFv

.fn __dt__18J3DTexGenBlockNullFv, weak
/* 8006F5FC 0006C53C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8006F600 0006C540  7C 08 02 A6 */	mflr r0
/* 8006F604 0006C544  90 01 00 14 */	stw r0, 0x14(r1)
/* 8006F608 0006C548  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8006F60C 0006C54C  7C 7F 1B 79 */	or. r31, r3, r3
/* 8006F610 0006C550  41 82 00 30 */	beq .L_8006F640
/* 8006F614 0006C554  3C 60 80 4A */	lis r3, __vt__18J3DTexGenBlockNull@ha
/* 8006F618 0006C558  38 03 1D 38 */	addi r0, r3, __vt__18J3DTexGenBlockNull@l
/* 8006F61C 0006C55C  90 1F 00 00 */	stw r0, 0(r31)
/* 8006F620 0006C560  41 82 00 10 */	beq .L_8006F630
/* 8006F624 0006C564  3C 60 80 4A */	lis r3, __vt__14J3DTexGenBlock@ha
/* 8006F628 0006C568  38 03 17 1C */	addi r0, r3, __vt__14J3DTexGenBlock@l
/* 8006F62C 0006C56C  90 1F 00 00 */	stw r0, 0(r31)
.L_8006F630:
/* 8006F630 0006C570  7C 80 07 35 */	extsh. r0, r4
/* 8006F634 0006C574  40 81 00 0C */	ble .L_8006F640
/* 8006F638 0006C578  7F E3 FB 78 */	mr r3, r31
/* 8006F63C 0006C57C  4B FB 4A 79 */	bl __dl__FPv
.L_8006F640:
/* 8006F640 0006C580  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8006F644 0006C584  7F E3 FB 78 */	mr r3, r31
/* 8006F648 0006C588  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8006F64C 0006C58C  7C 08 03 A6 */	mtlr r0
/* 8006F650 0006C590  38 21 00 10 */	addi r1, r1, 0x10
/* 8006F654 0006C594  4E 80 00 20 */	blr 
.endfn __dt__18J3DTexGenBlockNullFv

.fn getType__17J3DColorBlockNullFv, weak
/* 8006F658 0006C598  3C 60 43 4C */	lis r3, 0x434C4E4C@ha
/* 8006F65C 0006C59C  38 63 4E 4C */	addi r3, r3, 0x434C4E4C@l
/* 8006F660 0006C5A0  4E 80 00 20 */	blr 
.endfn getType__17J3DColorBlockNullFv

.fn __dt__17J3DColorBlockNullFv, weak
/* 8006F664 0006C5A4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8006F668 0006C5A8  7C 08 02 A6 */	mflr r0
/* 8006F66C 0006C5AC  90 01 00 14 */	stw r0, 0x14(r1)
/* 8006F670 0006C5B0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8006F674 0006C5B4  7C 7F 1B 79 */	or. r31, r3, r3
/* 8006F678 0006C5B8  41 82 00 30 */	beq .L_8006F6A8
/* 8006F67C 0006C5BC  3C 60 80 4A */	lis r3, __vt__17J3DColorBlockNull@ha
/* 8006F680 0006C5C0  38 03 1D A4 */	addi r0, r3, __vt__17J3DColorBlockNull@l
/* 8006F684 0006C5C4  90 1F 00 00 */	stw r0, 0(r31)
/* 8006F688 0006C5C8  41 82 00 10 */	beq .L_8006F698
/* 8006F68C 0006C5CC  3C 60 80 4A */	lis r3, __vt__13J3DColorBlock@ha
/* 8006F690 0006C5D0  38 03 17 88 */	addi r0, r3, __vt__13J3DColorBlock@l
/* 8006F694 0006C5D4  90 1F 00 00 */	stw r0, 0(r31)
.L_8006F698:
/* 8006F698 0006C5D8  7C 80 07 35 */	extsh. r0, r4
/* 8006F69C 0006C5DC  40 81 00 0C */	ble .L_8006F6A8
/* 8006F6A0 0006C5E0  7F E3 FB 78 */	mr r3, r31
/* 8006F6A4 0006C5E4  4B FB 4A 11 */	bl __dl__FPv
.L_8006F6A8:
/* 8006F6A8 0006C5E8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8006F6AC 0006C5EC  7F E3 FB 78 */	mr r3, r31
/* 8006F6B0 0006C5F0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8006F6B4 0006C5F4  7C 08 03 A6 */	mtlr r0
/* 8006F6B8 0006C5F8  38 21 00 10 */	addi r1, r1, 0x10
/* 8006F6BC 0006C5FC  4E 80 00 20 */	blr 
.endfn __dt__17J3DColorBlockNullFv

.fn "JSUConvertOffsetToPtr<17J3DCurrentMtxInfo>__FPCvPCv", weak
/* 8006F6C0 0006C600  28 04 00 00 */	cmplwi r4, 0
/* 8006F6C4 0006C604  40 82 00 0C */	bne .L_8006F6D0
/* 8006F6C8 0006C608  38 60 00 00 */	li r3, 0
/* 8006F6CC 0006C60C  4E 80 00 20 */	blr 
.L_8006F6D0:
/* 8006F6D0 0006C610  7C 63 22 14 */	add r3, r3, r4
/* 8006F6D4 0006C614  4E 80 00 20 */	blr 
.endfn "JSUConvertOffsetToPtr<17J3DCurrentMtxInfo>__FPCvPCv"

.fn "JSUConvertOffsetToPtr<15J3DPatchingInfo>__FPCvPCv", weak
/* 8006F6D8 0006C618  28 04 00 00 */	cmplwi r4, 0
/* 8006F6DC 0006C61C  40 82 00 0C */	bne .L_8006F6E8
/* 8006F6E0 0006C620  38 60 00 00 */	li r3, 0
/* 8006F6E4 0006C624  4E 80 00 20 */	blr 
.L_8006F6E8:
/* 8006F6E8 0006C628  7C 63 22 14 */	add r3, r3, r4
/* 8006F6EC 0006C62C  4E 80 00 20 */	blr 
.endfn "JSUConvertOffsetToPtr<15J3DPatchingInfo>__FPCvPCv"

.fn "JSUConvertOffsetToPtr<18J3DDisplayListInit>__FPCvPCv", weak
/* 8006F6F0 0006C630  28 04 00 00 */	cmplwi r4, 0
/* 8006F6F4 0006C634  40 82 00 0C */	bne .L_8006F700
/* 8006F6F8 0006C638  38 60 00 00 */	li r3, 0
/* 8006F6FC 0006C63C  4E 80 00 20 */	blr 
.L_8006F700:
/* 8006F700 0006C640  7C 63 22 14 */	add r3, r3, r4
/* 8006F704 0006C644  4E 80 00 20 */	blr 
.endfn "JSUConvertOffsetToPtr<18J3DDisplayListInit>__FPCvPCv"

.fn "JSUConvertOffsetToPtr<15J3DNBTScaleInfo>__FPCvPCv", weak
/* 8006F708 0006C648  28 04 00 00 */	cmplwi r4, 0
/* 8006F70C 0006C64C  40 82 00 0C */	bne .L_8006F718
/* 8006F710 0006C650  38 60 00 00 */	li r3, 0
/* 8006F714 0006C654  4E 80 00 20 */	blr 
.L_8006F718:
/* 8006F718 0006C658  7C 63 22 14 */	add r3, r3, r4
/* 8006F71C 0006C65C  4E 80 00 20 */	blr 
.endfn "JSUConvertOffsetToPtr<15J3DNBTScaleInfo>__FPCvPCv"

.fn "JSUConvertOffsetToPtr<12J3DZModeInfo>__FPCvPCv", weak
/* 8006F720 0006C660  28 04 00 00 */	cmplwi r4, 0
/* 8006F724 0006C664  40 82 00 0C */	bne .L_8006F730
/* 8006F728 0006C668  38 60 00 00 */	li r3, 0
/* 8006F72C 0006C66C  4E 80 00 20 */	blr 
.L_8006F730:
/* 8006F730 0006C670  7C 63 22 14 */	add r3, r3, r4
/* 8006F734 0006C674  4E 80 00 20 */	blr 
.endfn "JSUConvertOffsetToPtr<12J3DZModeInfo>__FPCvPCv"

.fn "JSUConvertOffsetToPtr<12J3DBlendInfo>__FPCvPCv", weak
/* 8006F738 0006C678  28 04 00 00 */	cmplwi r4, 0
/* 8006F73C 0006C67C  40 82 00 0C */	bne .L_8006F748
/* 8006F740 0006C680  38 60 00 00 */	li r3, 0
/* 8006F744 0006C684  4E 80 00 20 */	blr 
.L_8006F748:
/* 8006F748 0006C688  7C 63 22 14 */	add r3, r3, r4
/* 8006F74C 0006C68C  4E 80 00 20 */	blr 
.endfn "JSUConvertOffsetToPtr<12J3DBlendInfo>__FPCvPCv"

.fn "JSUConvertOffsetToPtr<16J3DAlphaCompInfo>__FPCvPCv", weak
/* 8006F750 0006C690  28 04 00 00 */	cmplwi r4, 0
/* 8006F754 0006C694  40 82 00 0C */	bne .L_8006F760
/* 8006F758 0006C698  38 60 00 00 */	li r3, 0
/* 8006F75C 0006C69C  4E 80 00 20 */	blr 
.L_8006F760:
/* 8006F760 0006C6A0  7C 63 22 14 */	add r3, r3, r4
/* 8006F764 0006C6A4  4E 80 00 20 */	blr 
.endfn "JSUConvertOffsetToPtr<16J3DAlphaCompInfo>__FPCvPCv"

.fn "JSUConvertOffsetToPtr<10J3DFogInfo>__FPCvPCv", weak
/* 8006F768 0006C6A8  28 04 00 00 */	cmplwi r4, 0
/* 8006F76C 0006C6AC  40 82 00 0C */	bne .L_8006F778
/* 8006F770 0006C6B0  38 60 00 00 */	li r3, 0
/* 8006F774 0006C6B4  4E 80 00 20 */	blr 
.L_8006F778:
/* 8006F778 0006C6B8  7C 63 22 14 */	add r3, r3, r4
/* 8006F77C 0006C6BC  4E 80 00 20 */	blr 
.endfn "JSUConvertOffsetToPtr<10J3DFogInfo>__FPCvPCv"

.fn "JSUConvertOffsetToPtr<23J3DTevSwapModeTableInfo>__FPCvPCv", weak
/* 8006F780 0006C6C0  28 04 00 00 */	cmplwi r4, 0
/* 8006F784 0006C6C4  40 82 00 0C */	bne .L_8006F790
/* 8006F788 0006C6C8  38 60 00 00 */	li r3, 0
/* 8006F78C 0006C6CC  4E 80 00 20 */	blr 
.L_8006F790:
/* 8006F790 0006C6D0  7C 63 22 14 */	add r3, r3, r4
/* 8006F794 0006C6D4  4E 80 00 20 */	blr 
.endfn "JSUConvertOffsetToPtr<23J3DTevSwapModeTableInfo>__FPCvPCv"

.fn "JSUConvertOffsetToPtr<18J3DTevSwapModeInfo>__FPCvPCv", weak
/* 8006F798 0006C6D8  28 04 00 00 */	cmplwi r4, 0
/* 8006F79C 0006C6DC  40 82 00 0C */	bne .L_8006F7A8
/* 8006F7A0 0006C6E0  38 60 00 00 */	li r3, 0
/* 8006F7A4 0006C6E4  4E 80 00 20 */	blr 
.L_8006F7A8:
/* 8006F7A8 0006C6E8  7C 63 22 14 */	add r3, r3, r4
/* 8006F7AC 0006C6EC  4E 80 00 20 */	blr 
.endfn "JSUConvertOffsetToPtr<18J3DTevSwapModeInfo>__FPCvPCv"

.fn "JSUConvertOffsetToPtr<15J3DTevStageInfo>__FPCvPCv", weak
/* 8006F7B0 0006C6F0  28 04 00 00 */	cmplwi r4, 0
/* 8006F7B4 0006C6F4  40 82 00 0C */	bne .L_8006F7C0
/* 8006F7B8 0006C6F8  38 60 00 00 */	li r3, 0
/* 8006F7BC 0006C6FC  4E 80 00 20 */	blr 
.L_8006F7C0:
/* 8006F7C0 0006C700  7C 63 22 14 */	add r3, r3, r4
/* 8006F7C4 0006C704  4E 80 00 20 */	blr 
.endfn "JSUConvertOffsetToPtr<15J3DTevStageInfo>__FPCvPCv"

.fn "JSUConvertOffsetToPtr<15J3DTevOrderInfo>__FPCvPCv", weak
/* 8006F7C8 0006C708  28 04 00 00 */	cmplwi r4, 0
/* 8006F7CC 0006C70C  40 82 00 0C */	bne .L_8006F7D8
/* 8006F7D0 0006C710  38 60 00 00 */	li r3, 0
/* 8006F7D4 0006C714  4E 80 00 20 */	blr 
.L_8006F7D8:
/* 8006F7D8 0006C718  7C 63 22 14 */	add r3, r3, r4
/* 8006F7DC 0006C71C  4E 80 00 20 */	blr 
.endfn "JSUConvertOffsetToPtr<15J3DTevOrderInfo>__FPCvPCv"

.fn "JSUConvertOffsetToPtr<13J3DTexMtxInfo>__FPCvPCv", weak
/* 8006F7E0 0006C720  28 04 00 00 */	cmplwi r4, 0
/* 8006F7E4 0006C724  40 82 00 0C */	bne .L_8006F7F0
/* 8006F7E8 0006C728  38 60 00 00 */	li r3, 0
/* 8006F7EC 0006C72C  4E 80 00 20 */	blr 
.L_8006F7F0:
/* 8006F7F0 0006C730  7C 63 22 14 */	add r3, r3, r4
/* 8006F7F4 0006C734  4E 80 00 20 */	blr 
.endfn "JSUConvertOffsetToPtr<13J3DTexMtxInfo>__FPCvPCv"

.fn "JSUConvertOffsetToPtr<16J3DTexCoord2Info>__FPCvPCv", weak
/* 8006F7F8 0006C738  28 04 00 00 */	cmplwi r4, 0
/* 8006F7FC 0006C73C  40 82 00 0C */	bne .L_8006F808
/* 8006F800 0006C740  38 60 00 00 */	li r3, 0
/* 8006F804 0006C744  4E 80 00 20 */	blr 
.L_8006F808:
/* 8006F808 0006C748  7C 63 22 14 */	add r3, r3, r4
/* 8006F80C 0006C74C  4E 80 00 20 */	blr 
.endfn "JSUConvertOffsetToPtr<16J3DTexCoord2Info>__FPCvPCv"

.fn "JSUConvertOffsetToPtr<15J3DTexCoordInfo>__FPCvPCv", weak
/* 8006F810 0006C750  28 04 00 00 */	cmplwi r4, 0
/* 8006F814 0006C754  40 82 00 0C */	bne .L_8006F820
/* 8006F818 0006C758  38 60 00 00 */	li r3, 0
/* 8006F81C 0006C75C  4E 80 00 20 */	blr 
.L_8006F820:
/* 8006F820 0006C760  7C 63 22 14 */	add r3, r3, r4
/* 8006F824 0006C764  4E 80 00 20 */	blr 
.endfn "JSUConvertOffsetToPtr<15J3DTexCoordInfo>__FPCvPCv"

.fn "JSUConvertOffsetToPtr<12J3DLightInfo>__FPCvPCv", weak
/* 8006F828 0006C768  28 04 00 00 */	cmplwi r4, 0
/* 8006F82C 0006C76C  40 82 00 0C */	bne .L_8006F838
/* 8006F830 0006C770  38 60 00 00 */	li r3, 0
/* 8006F834 0006C774  4E 80 00 20 */	blr 
.L_8006F838:
/* 8006F838 0006C778  7C 63 22 14 */	add r3, r3, r4
/* 8006F83C 0006C77C  4E 80 00 20 */	blr 
.endfn "JSUConvertOffsetToPtr<12J3DLightInfo>__FPCvPCv"

.fn "JSUConvertOffsetToPtr<16J3DColorChanInfo>__FPCvPCv", weak
/* 8006F840 0006C780  28 04 00 00 */	cmplwi r4, 0
/* 8006F844 0006C784  40 82 00 0C */	bne .L_8006F850
/* 8006F848 0006C788  38 60 00 00 */	li r3, 0
/* 8006F84C 0006C78C  4E 80 00 20 */	blr 
.L_8006F850:
/* 8006F850 0006C790  7C 63 22 14 */	add r3, r3, r4
/* 8006F854 0006C794  4E 80 00 20 */	blr 
.endfn "JSUConvertOffsetToPtr<16J3DColorChanInfo>__FPCvPCv"

.fn "JSUConvertOffsetToPtr<14J3DIndInitData>__FPCvPCv", weak
/* 8006F858 0006C798  28 04 00 00 */	cmplwi r4, 0
/* 8006F85C 0006C79C  40 82 00 0C */	bne .L_8006F868
/* 8006F860 0006C7A0  38 60 00 00 */	li r3, 0
/* 8006F864 0006C7A4  4E 80 00 20 */	blr 
.L_8006F868:
/* 8006F868 0006C7A8  7C 63 22 14 */	add r3, r3, r4
/* 8006F86C 0006C7AC  4E 80 00 20 */	blr 
.endfn "JSUConvertOffsetToPtr<14J3DIndInitData>__FPCvPCv"

.fn "JSUConvertOffsetToPtr<19J3DMaterialInitData>__FPCvPCv", weak
/* 8006F870 0006C7B0  28 04 00 00 */	cmplwi r4, 0
/* 8006F874 0006C7B4  40 82 00 0C */	bne .L_8006F880
/* 8006F878 0006C7B8  38 60 00 00 */	li r3, 0
/* 8006F87C 0006C7BC  4E 80 00 20 */	blr 
.L_8006F880:
/* 8006F880 0006C7C0  7C 63 22 14 */	add r3, r3, r4
/* 8006F884 0006C7C4  4E 80 00 20 */	blr 
.endfn "JSUConvertOffsetToPtr<19J3DMaterialInitData>__FPCvPCv"
