.include "macros.inc"
.section .ctors, "wa"  # 0x80472F00 - 0x804732C0
lbl_constructor:
.4byte __sinit_hurryUp2D_cpp

.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
.obj lbl_80490280, local
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj lbl_80490280
.balign 4
.obj lbl_8049028C, local
	.asciz "hurryUp2D"
.endobj lbl_8049028C
.balign 4
.obj lbl_80490298, local
	.asciz "HurryUp2D"
.endobj lbl_80490298
.balign 4
.obj lbl_804902A4, local
	.asciz "sund.blo"
.endobj lbl_804902A4
.balign 4
.obj lbl_804902B0, local
	.asciz "hurryUp2D.cpp"
.endobj lbl_804902B0
.balign 4
.obj lbl_804902C0, local
	.asciz "P2Assert"
.endobj lbl_804902C0
.balign 4
.obj lbl_804902CC, local
	.asciz "sunh_w.bti"
.endobj lbl_804902CC
.balign 4
.obj lbl_804902D8, local
	.asciz "g09_first_sunset"
.endobj lbl_804902D8
.balign 4
.obj lbl_804902EC, local
	.asciz "screenObj.h"
.endobj lbl_804902EC

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.obj govNAN___Q24Game5P2JST, local
	.float 0.0
	.float 0.0
	.float 0.0
.endobj govNAN___Q24Game5P2JST
.obj __vt__Q28Morimura10THurryUp2D, global
	.4byte 0
	.4byte 0
	.4byte __dt__Q28Morimura10THurryUp2DFv
	.4byte getChildCount__5CNodeFv
	.4byte 0
	.4byte 0
	.4byte "@24@__dt__Q28Morimura10THurryUp2DFv"
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
	.4byte doStart__Q28Morimura10THurryUp2DFPCQ26Screen13StartSceneArg
	.4byte doEnd__Q28Morimura9TTestBaseFPCQ26Screen11EndSceneArg
	.4byte doCreate__Q28Morimura10THurryUp2DFP10JKRArchive
	.4byte doUpdateFadein__Q28Morimura9TTestBaseFv
	.4byte doUpdateFadeinFinish__Q28Morimura9TTestBaseFv
	.4byte doUpdate__Q28Morimura10THurryUp2DFv
	.4byte doUpdateFinish__Q28Morimura9TTestBaseFv
	.4byte doUpdateFadeout__Q28Morimura9TTestBaseFv
	.4byte doUpdateFadeoutFinish__Q26Screen7ObjBaseFv
	.4byte doDraw__Q28Morimura10THurryUp2DFR8Graphics
	.4byte doConfirmSetScene__Q26Screen7ObjBaseFRQ26Screen11SetSceneArg
	.4byte doConfirmStartScene__Q26Screen7ObjBaseFPQ26Screen13StartSceneArg
	.4byte doConfirmEndScene__Q26Screen7ObjBaseFRPQ26Screen11EndSceneArg
	.4byte getDispMemberBase__Q28Morimura10THurryUp2DFv
.endobj __vt__Q28Morimura10THurryUp2D
.obj __vt__Q28Morimura15THuWhitePaneSet, global
	.4byte 0
	.4byte 0
	.4byte __dt__Q28Morimura15THuWhitePaneSetFv
	.4byte getTypeID__10J2DPictureCFv
	.4byte move__7J2DPaneFff
	.4byte add__7J2DPaneFff
	.4byte resize__7J2DPaneFff
	.4byte setCullBack__12J2DPictureExFb
	.4byte setCullBack__12J2DPictureExF11_GXCullMode
	.4byte setAlpha__12J2DPictureExFUc
	.4byte setConnectParent__7J2DPaneFb
	.4byte calcMtx__7J2DPaneFv
	.4byte update__7J2DPaneFv
	.4byte drawSelf__10J2DPictureFff
	.4byte drawSelf__Q28Morimura15THuWhitePaneSetFffPA3_A4_f
	.4byte search__7J2DPaneFUx
	.4byte searchUserInfo__7J2DPaneFUx
	.4byte makeMatrix__7J2DPaneFff
	.4byte makeMatrix__7J2DPaneFffff
	.4byte isUsed__12J2DPictureExFPC7ResTIMG
	.4byte isUsed__12J2DPictureExFPC7ResFONT
	.4byte clearAnmTransform__7J2DPaneFv
	.4byte rewriteAlpha__12J2DPictureExFv
	.4byte setAnimation__12J2DPictureExFP10J2DAnmBase
	.4byte setAnimation__12J2DPictureExFP15J2DAnmTransform
	.4byte setAnimation__12J2DPictureExFP11J2DAnmColor
	.4byte setAnimation__12J2DPictureExFP16J2DAnmTexPattern
	.4byte setAnimation__12J2DPictureExFP19J2DAnmTextureSRTKey
	.4byte setAnimation__12J2DPictureExFP15J2DAnmTevRegKey
	.4byte setAnimation__12J2DPictureExFP20J2DAnmVisibilityFull
	.4byte setAnimation__12J2DPictureExFP14J2DAnmVtxColor
	.4byte animationTransform__7J2DPaneFPC15J2DAnmTransform
	.4byte setVisibileAnimation__7J2DPaneFP20J2DAnmVisibilityFull
	.4byte setAnimationVF__7J2DPaneFP20J2DAnmVisibilityFull
	.4byte setVtxColorAnimation__7J2DPaneFP14J2DAnmVtxColor
	.4byte setAnimationVC__7J2DPaneFP14J2DAnmVtxColor
	.4byte animationPane__12J2DPictureExFPC15J2DAnmTransform
	.4byte initiate__12J2DPictureExFPC7ResTIMGPC7ResTLUT
	.4byte prepareTexture__12J2DPictureExFUc
	.4byte append__12J2DPictureExFPC7ResTIMGf
	.4byte append__12J2DPictureExFPC7ResTIMGP10JUTPalettef
	.4byte append__12J2DPictureExFPCcf
	.4byte append__12J2DPictureExFPCcP10JUTPalettef
	.4byte append__12J2DPictureExFP10JUTTexturef
	.4byte prepend__12J2DPictureExFPC7ResTIMGf
	.4byte prepend__12J2DPictureExFPC7ResTIMGP10JUTPalettef
	.4byte prepend__12J2DPictureExFPCcf
	.4byte prepend__12J2DPictureExFPCcP10JUTPalettef
	.4byte prepend__12J2DPictureExFP10JUTTexturef
	.4byte insert__12J2DPictureExFPC7ResTIMGUcf
	.4byte insert__12J2DPictureExFPC7ResTIMGP10JUTPaletteUcf
	.4byte insert__12J2DPictureExFPCcUcf
	.4byte insert__12J2DPictureExFPCcP10JUTPaletteUcf
	.4byte insert__12J2DPictureExFP10JUTTextureUcf
	.4byte remove__12J2DPictureExFUc
	.4byte remove__12J2DPictureExFv
	.4byte remove__12J2DPictureExFP10JUTTexture
	.4byte draw__12J2DPictureExFffbbb
	.4byte draw__12J2DPictureExFffUcbbb
	.4byte draw__12J2DPictureExFffffbbb
	.4byte drawOut__12J2DPictureExFffffff
	.4byte drawOut__12J2DPictureExFffffffff
	.4byte "drawOut__12J2DPictureExFRCQ29JGeometry8TBox2<f>RCQ29JGeometry8TBox2<f>"
	.4byte load__12J2DPictureExF11_GXTexMapIDUc
	.4byte load__12J2DPictureExFUc
	.4byte setBlendRatio__10J2DPictureFffffffff
	.4byte setBlendColorRatio__12J2DPictureExFffffffff
	.4byte setBlendAlphaRatio__12J2DPictureExFffffffff
	.4byte changeTexture__12J2DPictureExFPC7ResTIMGUc
	.4byte changeTexture__12J2DPictureExFPCcUc
	.4byte changeTexture__12J2DPictureExFPC7ResTIMGUcP10JUTPalette
	.4byte changeTexture__12J2DPictureExFPCcUcP10JUTPalette
	.4byte getTexture__12J2DPictureExCFUc
	.4byte getTextureCount__12J2DPictureExCFv
	.4byte setBlack__12J2DPictureExFQ28JUtility6TColor
	.4byte setWhite__12J2DPictureExFQ28JUtility6TColor
	.4byte setBlackWhite__12J2DPictureExFQ28JUtility6TColorQ28JUtility6TColor
	.4byte getBlack__12J2DPictureExCFv
	.4byte getWhite__12J2DPictureExCFv
	.4byte getMaterial__12J2DPictureExCFv
	.4byte drawFullSet__12J2DPictureExFffffPA3_A4_f
	.4byte drawTexCoord__12J2DPictureExFffffssssssssPA3_A4_f
	.4byte getUsableTlut__12J2DPictureExFUc
.endobj __vt__Q28Morimura15THuWhitePaneSet

.section .sdata, "wa"  # 0x80514680 - 0x80514D80
.balign 8
.obj mInitPosX__Q28Morimura10THurryUp2D, global
	.float 900.0
.endobj mInitPosX__Q28Morimura10THurryUp2D
.obj mMoveSp__Q28Morimura10THurryUp2D, global
	.float 12.0
.endobj mMoveSp__Q28Morimura10THurryUp2D
.obj mScaleSp1__Q28Morimura10THurryUp2D, global
	.float 0.01
.endobj mScaleSp1__Q28Morimura10THurryUp2D
.obj mScaleSp2__Q28Morimura10THurryUp2D, global
	.float 0.1
.endobj mScaleSp2__Q28Morimura10THurryUp2D
.obj mScaleRate__Q28Morimura10THurryUp2D, global
	.float 1.02
.endobj mScaleRate__Q28Morimura10THurryUp2D
.obj mColorUpSp__Q28Morimura10THurryUp2D, global
	.float 1.0
.endobj mColorUpSp__Q28Morimura10THurryUp2D

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
.obj lbl_8051E258, local
	.float 0.0
.endobj lbl_8051E258
.obj lbl_8051E25C, local
	.float 255.0
.endobj lbl_8051E25C
.obj lbl_8051E260, local
	.float 0.5
.endobj lbl_8051E260
.balign 8
.obj lbl_8051E268, local
	.8byte 0x4330000080000000
.endobj lbl_8051E268
.obj lbl_8051E270, local
	.float 1.0
.endobj lbl_8051E270
.obj lbl_8051E274, local
	.float 0.8
.endobj lbl_8051E274
.obj lbl_8051E278, local
	.float 1.0E-5
.endobj lbl_8051E278
.obj lbl_8051E27C, local
	.float 0.803
.endobj lbl_8051E27C
.obj lbl_8051E280, local
	.float 10.0
.endobj lbl_8051E280
.obj lbl_8051E284, local # RGBA?
	.4byte 0xFFFFFF00
.endobj lbl_8051E284
.obj lbl_8051E288, local
	.float 56.0
.endobj lbl_8051E288
.obj lbl_8051E28C, local # tau
	.float 6.2831855
.endobj lbl_8051E28C
.obj lbl_8051E290, local
	.float 360.0
.endobj lbl_8051E290
.obj lbl_8051E294, local
	.float 80.0
.endobj lbl_8051E294
.obj lbl_8051E298, local
	.float -325.9493
.endobj lbl_8051E298
.obj lbl_8051E29C, local
	.float 325.9493
.endobj lbl_8051E29C
.obj lbl_8051E2A0, local
	.float -1.0
.endobj lbl_8051E2A0
.balign 8
.obj lbl_8051E2A8, local
	.8byte 0x4330000000000000
.endobj lbl_8051E2A8
.obj lbl_8051E2B0, local
	.float 4.3E-5
.endobj lbl_8051E2B0
.obj lbl_8051E2B4, local
	.float 1.0E-4
.endobj lbl_8051E2B4
.obj lbl_8051E2B8, local
	.float 0.9
.endobj lbl_8051E2B8
.obj lbl_8051E2BC, local
	.float 1.05
.endobj lbl_8051E2BC
.obj lbl_8051E2C0, local
	.float 2.0
.endobj lbl_8051E2C0
.obj lbl_8051E2C4, local
	.float 60.0
.endobj lbl_8051E2C4
.obj lbl_8051E2C8, local
	.float 120.0
.endobj lbl_8051E2C8

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.fn drawSelf__Q28Morimura15THuWhitePaneSetFffPA3_A4_f, global
/* 80346178 003430B8  94 21 FF 70 */	stwu r1, -0x90(r1)
/* 8034617C 003430BC  7C 08 02 A6 */	mflr r0
/* 80346180 003430C0  90 01 00 94 */	stw r0, 0x94(r1)
/* 80346184 003430C4  DB E1 00 80 */	stfd f31, 0x80(r1)
/* 80346188 003430C8  F3 E1 00 88 */	psq_st f31, 136(r1), 0, qr0
/* 8034618C 003430CC  DB C1 00 70 */	stfd f30, 0x70(r1)
/* 80346190 003430D0  F3 C1 00 78 */	psq_st f30, 120(r1), 0, qr0
/* 80346194 003430D4  DB A1 00 60 */	stfd f29, 0x60(r1)
/* 80346198 003430D8  F3 A1 00 68 */	psq_st f29, 104(r1), 0, qr0
/* 8034619C 003430DC  DB 81 00 50 */	stfd f28, 0x50(r1)
/* 803461A0 003430E0  F3 81 00 58 */	psq_st f28, 88(r1), 0, qr0
/* 803461A4 003430E4  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 803461A8 003430E8  93 C1 00 48 */	stw r30, 0x48(r1)
/* 803461AC 003430EC  FF E0 08 90 */	fmr f31, f1
/* 803461B0 003430F0  7C 7E 1B 78 */	mr r30, r3
/* 803461B4 003430F4  FF C0 10 90 */	fmr f30, f2
/* 803461B8 003430F8  7C 9F 23 78 */	mr r31, r4
/* 803461BC 003430FC  48 00 01 E1 */	bl gxSet__Q28Morimura15THuWhitePaneSetFv
/* 803461C0 00343100  38 60 00 00 */	li r3, 0
/* 803461C4 00343104  4B DA 2F 69 */	bl GXSetColorUpdate
/* 803461C8 00343108  38 60 00 01 */	li r3, 1
/* 803461CC 0034310C  4B DA 2F 8D */	bl GXSetAlphaUpdate
/* 803461D0 00343110  38 60 00 01 */	li r3, 1
/* 803461D4 00343114  38 80 00 00 */	li r4, 0
/* 803461D8 00343118  4B DA 31 15 */	bl GXSetDstAlpha
/* 803461DC 0034311C  C0 7E 00 28 */	lfs f3, 0x28(r30)
/* 803461E0 00343120  7F E3 FB 78 */	mr r3, r31
/* 803461E4 00343124  C0 5E 00 20 */	lfs f2, 0x20(r30)
/* 803461E8 00343128  38 9E 00 80 */	addi r4, r30, 0x80
/* 803461EC 0034312C  C0 3E 00 2C */	lfs f1, 0x2c(r30)
/* 803461F0 00343130  38 A1 00 08 */	addi r5, r1, 8
/* 803461F4 00343134  C0 1E 00 24 */	lfs f0, 0x24(r30)
/* 803461F8 00343138  EC 43 10 28 */	fsubs f2, f3, f2
/* 803461FC 0034313C  EC 01 00 28 */	fsubs f0, f1, f0
/* 80346200 00343140  EF BE 10 2A */	fadds f29, f30, f2
/* 80346204 00343144  EF 9F 00 2A */	fadds f28, f31, f0
/* 80346208 00343148  4B DA 40 F9 */	bl PSMTXConcat
/* 8034620C 0034314C  38 61 00 08 */	addi r3, r1, 8
/* 80346210 00343150  38 80 00 00 */	li r4, 0
/* 80346214 00343154  4B DA 33 65 */	bl GXLoadPosMtxImm
/* 80346218 00343158  38 60 00 80 */	li r3, 0x80
/* 8034621C 0034315C  38 80 00 00 */	li r4, 0
/* 80346220 00343160  38 A0 00 04 */	li r5, 4
/* 80346224 00343164  4B D9 F7 65 */	bl GXBegin
/* 80346228 00343168  3C A0 CC 01 */	lis r5, 0xCC008000@ha
/* 8034622C 0034316C  C0 02 FE F8 */	lfs f0, lbl_8051E258@sda21(r2)
/* 80346230 00343170  D3 C5 80 00 */	stfs f30, 0xCC008000@l(r5)
/* 80346234 00343174  38 60 00 00 */	li r3, 0
/* 80346238 00343178  38 80 00 00 */	li r4, 0
/* 8034623C 0034317C  D3 E5 80 00 */	stfs f31, 0xCC008000@l(r5)
/* 80346240 00343180  D0 05 80 00 */	stfs f0, 0xCC008000@l(r5)
/* 80346244 00343184  D3 A5 80 00 */	stfs f29, 0xCC008000@l(r5)
/* 80346248 00343188  D3 E5 80 00 */	stfs f31, 0xCC008000@l(r5)
/* 8034624C 0034318C  D0 05 80 00 */	stfs f0, 0xCC008000@l(r5)
/* 80346250 00343190  D3 A5 80 00 */	stfs f29, 0xCC008000@l(r5)
/* 80346254 00343194  D3 85 80 00 */	stfs f28, 0xCC008000@l(r5)
/* 80346258 00343198  D0 05 80 00 */	stfs f0, 0xCC008000@l(r5)
/* 8034625C 0034319C  D3 C5 80 00 */	stfs f30, 0xCC008000@l(r5)
/* 80346260 003431A0  D3 85 80 00 */	stfs f28, 0xCC008000@l(r5)
/* 80346264 003431A4  D0 05 80 00 */	stfs f0, 0xCC008000@l(r5)
/* 80346268 003431A8  4B DA 30 85 */	bl GXSetDstAlpha
/* 8034626C 003431AC  FC 20 F8 90 */	fmr f1, f31
/* 80346270 003431B0  7F C3 F3 78 */	mr r3, r30
/* 80346274 003431B4  FC 40 F0 90 */	fmr f2, f30
/* 80346278 003431B8  7F E4 FB 78 */	mr r4, r31
/* 8034627C 003431BC  4B D0 F1 59 */	bl drawSelf__12J2DPictureExFffPA3_A4_f
/* 80346280 003431C0  7F C3 F3 78 */	mr r3, r30
/* 80346284 003431C4  48 00 01 19 */	bl gxSet__Q28Morimura15THuWhitePaneSetFv
/* 80346288 003431C8  38 60 00 01 */	li r3, 1
/* 8034628C 003431CC  38 80 00 00 */	li r4, 0
/* 80346290 003431D0  4B DA 30 5D */	bl GXSetDstAlpha
/* 80346294 003431D4  88 9E 01 E0 */	lbz r4, 0x1e0(r30)
/* 80346298 003431D8  3C 00 43 30 */	lis r0, 0x4330
/* 8034629C 003431DC  90 01 00 38 */	stw r0, 0x38(r1)
/* 803462A0 003431E0  38 61 00 08 */	addi r3, r1, 8
/* 803462A4 003431E4  20 04 00 FF */	subfic r0, r4, 0xff
/* 803462A8 003431E8  C8 62 FF 08 */	lfd f3, lbl_8051E268@sda21(r2)
/* 803462AC 003431EC  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 803462B0 003431F0  C0 3E 00 28 */	lfs f1, 0x28(r30)
/* 803462B4 003431F4  90 01 00 3C */	stw r0, 0x3c(r1)
/* 803462B8 003431F8  38 80 00 00 */	li r4, 0
/* 803462BC 003431FC  C0 1E 00 20 */	lfs f0, 0x20(r30)
/* 803462C0 00343200  C8 41 00 38 */	lfd f2, 0x38(r1)
/* 803462C4 00343204  EC 21 00 28 */	fsubs f1, f1, f0
/* 803462C8 00343208  C0 02 FE FC */	lfs f0, lbl_8051E25C@sda21(r2)
/* 803462CC 0034320C  EC 42 18 28 */	fsubs f2, f2, f3
/* 803462D0 00343210  EC 22 00 72 */	fmuls f1, f2, f1
/* 803462D4 00343214  EF C1 00 24 */	fdivs f30, f1, f0
/* 803462D8 00343218  4B DA 32 A1 */	bl GXLoadPosMtxImm
/* 803462DC 0034321C  38 60 00 80 */	li r3, 0x80
/* 803462E0 00343220  38 80 00 00 */	li r4, 0
/* 803462E4 00343224  38 A0 00 04 */	li r5, 4
/* 803462E8 00343228  4B D9 F6 A1 */	bl GXBegin
/* 803462EC 0034322C  EF DD F0 28 */	fsubs f30, f29, f30
/* 803462F0 00343230  3C A0 CC 01 */	lis r5, 0xCC008000@ha
/* 803462F4 00343234  C0 02 FE F8 */	lfs f0, lbl_8051E258@sda21(r2)
/* 803462F8 00343238  38 60 00 00 */	li r3, 0
/* 803462FC 0034323C  38 80 00 00 */	li r4, 0
/* 80346300 00343240  D3 C5 80 00 */	stfs f30, 0xCC008000@l(r5)
/* 80346304 00343244  D3 E5 80 00 */	stfs f31, 0xCC008000@l(r5)
/* 80346308 00343248  D0 05 80 00 */	stfs f0, 0xCC008000@l(r5)
/* 8034630C 0034324C  D3 A5 80 00 */	stfs f29, 0xCC008000@l(r5)
/* 80346310 00343250  D3 E5 80 00 */	stfs f31, 0xCC008000@l(r5)
/* 80346314 00343254  D0 05 80 00 */	stfs f0, 0xCC008000@l(r5)
/* 80346318 00343258  D3 A5 80 00 */	stfs f29, 0xCC008000@l(r5)
/* 8034631C 0034325C  D3 85 80 00 */	stfs f28, 0xCC008000@l(r5)
/* 80346320 00343260  D0 05 80 00 */	stfs f0, 0xCC008000@l(r5)
/* 80346324 00343264  D3 C5 80 00 */	stfs f30, 0xCC008000@l(r5)
/* 80346328 00343268  D3 85 80 00 */	stfs f28, 0xCC008000@l(r5)
/* 8034632C 0034326C  D0 05 80 00 */	stfs f0, 0xCC008000@l(r5)
/* 80346330 00343270  4B DA 2F BD */	bl GXSetDstAlpha
/* 80346334 00343274  38 60 00 01 */	li r3, 1
/* 80346338 00343278  4B DA 2D F5 */	bl GXSetColorUpdate
/* 8034633C 0034327C  38 61 00 08 */	addi r3, r1, 8
/* 80346340 00343280  38 9E 01 B0 */	addi r4, r30, 0x1b0
/* 80346344 00343284  4B DA 3F 89 */	bl PSMTXCopy
/* 80346348 00343288  C0 3E 00 2C */	lfs f1, 0x2c(r30)
/* 8034634C 0034328C  C0 1E 00 24 */	lfs f0, 0x24(r30)
/* 80346350 00343290  C0 42 FF 00 */	lfs f2, lbl_8051E260@sda21(r2)
/* 80346354 00343294  EC 01 00 28 */	fsubs f0, f1, f0
/* 80346358 00343298  D3 DE 01 A8 */	stfs f30, 0x1a8(r30)
/* 8034635C 0034329C  EC 02 E0 3C */	fnmsubs f0, f2, f0, f28
/* 80346360 003432A0  D0 1E 01 AC */	stfs f0, 0x1ac(r30)
/* 80346364 003432A4  E3 E1 00 88 */	psq_l f31, 136(r1), 0, qr0
/* 80346368 003432A8  CB E1 00 80 */	lfd f31, 0x80(r1)
/* 8034636C 003432AC  E3 C1 00 78 */	psq_l f30, 120(r1), 0, qr0
/* 80346370 003432B0  CB C1 00 70 */	lfd f30, 0x70(r1)
/* 80346374 003432B4  E3 A1 00 68 */	psq_l f29, 104(r1), 0, qr0
/* 80346378 003432B8  CB A1 00 60 */	lfd f29, 0x60(r1)
/* 8034637C 003432BC  E3 81 00 58 */	psq_l f28, 88(r1), 0, qr0
/* 80346380 003432C0  CB 81 00 50 */	lfd f28, 0x50(r1)
/* 80346384 003432C4  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 80346388 003432C8  80 01 00 94 */	lwz r0, 0x94(r1)
/* 8034638C 003432CC  83 C1 00 48 */	lwz r30, 0x48(r1)
/* 80346390 003432D0  7C 08 03 A6 */	mtlr r0
/* 80346394 003432D4  38 21 00 90 */	addi r1, r1, 0x90
/* 80346398 003432D8  4E 80 00 20 */	blr 
.endfn drawSelf__Q28Morimura15THuWhitePaneSetFffPA3_A4_f

.fn gxSet__Q28Morimura15THuWhitePaneSetFv, global
/* 8034639C 003432DC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803463A0 003432E0  7C 08 02 A6 */	mflr r0
/* 803463A4 003432E4  90 01 00 14 */	stw r0, 0x14(r1)
/* 803463A8 003432E8  4B D9 E3 29 */	bl GXClearVtxDesc
/* 803463AC 003432EC  38 60 00 09 */	li r3, 9
/* 803463B0 003432F0  38 80 00 01 */	li r4, 1
/* 803463B4 003432F4  4B D9 DE D1 */	bl GXSetVtxDesc
/* 803463B8 003432F8  38 60 00 00 */	li r3, 0
/* 803463BC 003432FC  38 80 00 09 */	li r4, 9
/* 803463C0 00343300  38 A0 00 01 */	li r5, 1
/* 803463C4 00343304  38 C0 00 04 */	li r6, 4
/* 803463C8 00343308  38 E0 00 00 */	li r7, 0
/* 803463CC 0034330C  4B D9 E3 3D */	bl GXSetVtxAttrFmt
/* 803463D0 00343310  38 60 00 01 */	li r3, 1
/* 803463D4 00343314  4B DA 0A 91 */	bl GXSetNumChans
/* 803463D8 00343318  38 60 00 04 */	li r3, 4
/* 803463DC 0034331C  38 80 00 00 */	li r4, 0
/* 803463E0 00343320  38 A0 00 00 */	li r5, 0
/* 803463E4 00343324  38 C0 00 00 */	li r6, 0
/* 803463E8 00343328  38 E0 00 00 */	li r7, 0
/* 803463EC 0034332C  39 00 00 00 */	li r8, 0
/* 803463F0 00343330  39 20 00 02 */	li r9, 2
/* 803463F4 00343334  4B DA 0A AD */	bl GXSetChanCtrl
/* 803463F8 00343338  38 60 00 01 */	li r3, 1
/* 803463FC 0034333C  4B DA 27 BD */	bl GXSetNumTevStages
/* 80346400 00343340  38 60 00 00 */	li r3, 0
/* 80346404 00343344  38 80 00 FF */	li r4, 0xff
/* 80346408 00343348  38 A0 00 FF */	li r5, 0xff
/* 8034640C 0034334C  38 C0 00 04 */	li r6, 4
/* 80346410 00343350  4B DA 26 0D */	bl GXSetTevOrder
/* 80346414 00343354  38 60 00 00 */	li r3, 0
/* 80346418 00343358  38 80 00 04 */	li r4, 4
/* 8034641C 0034335C  4B DA 20 61 */	bl GXSetTevOp
/* 80346420 00343360  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80346424 00343364  7C 08 03 A6 */	mtlr r0
/* 80346428 00343368  38 21 00 10 */	addi r1, r1, 0x10
/* 8034642C 0034336C  4E 80 00 20 */	blr 
.endfn gxSet__Q28Morimura15THuWhitePaneSetFv

.fn __ct__Q28Morimura10THurryUp2DFv, global
/* 80346430 00343370  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80346434 00343374  7C 08 02 A6 */	mflr r0
/* 80346438 00343378  3C 80 80 49 */	lis r4, lbl_80490298@ha
/* 8034643C 0034337C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80346440 00343380  38 84 02 98 */	addi r4, r4, lbl_80490298@l
/* 80346444 00343384  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80346448 00343388  7C 7F 1B 78 */	mr r31, r3
/* 8034644C 0034338C  48 00 2D 7D */	bl __ct__Q28Morimura9TTestBaseFPc
/* 80346450 00343390  3C 80 80 4E */	lis r4, __vt__Q28Morimura10THurryUp2D@ha
/* 80346454 00343394  39 00 00 00 */	li r8, 0
/* 80346458 00343398  38 84 B2 F4 */	addi r4, r4, __vt__Q28Morimura10THurryUp2D@l
/* 8034645C 0034339C  C0 02 FE F8 */	lfs f0, lbl_8051E258@sda21(r2)
/* 80346460 003433A0  90 9F 00 00 */	stw r4, 0(r31)
/* 80346464 003433A4  38 04 00 10 */	addi r0, r4, 0x10
/* 80346468 003433A8  3C 60 80 34 */	lis r3, __ct__Q38Morimura10THurryUp2D11TStateParamFv@ha
/* 8034646C 003433AC  38 A0 00 00 */	li r5, 0
/* 80346470 003433B0  90 1F 00 18 */	stw r0, 0x18(r31)
/* 80346474 003433B4  38 83 64 E0 */	addi r4, r3, __ct__Q38Morimura10THurryUp2D11TStateParamFv@l
/* 80346478 003433B8  38 00 00 01 */	li r0, 1
/* 8034647C 003433BC  38 7F 00 D0 */	addi r3, r31, 0xd0
/* 80346480 003433C0  91 1F 00 7C */	stw r8, 0x7c(r31)
/* 80346484 003433C4  38 C0 00 0C */	li r6, 0xc
/* 80346488 003433C8  38 E0 00 06 */	li r7, 6
/* 8034648C 003433CC  91 1F 00 80 */	stw r8, 0x80(r31)
/* 80346490 003433D0  91 1F 00 84 */	stw r8, 0x84(r31)
/* 80346494 003433D4  91 1F 00 88 */	stw r8, 0x88(r31)
/* 80346498 003433D8  91 1F 00 8C */	stw r8, 0x8c(r31)
/* 8034649C 003433DC  91 1F 00 90 */	stw r8, 0x90(r31)
/* 803464A0 003433E0  91 1F 00 94 */	stw r8, 0x94(r31)
/* 803464A4 003433E4  91 1F 00 98 */	stw r8, 0x98(r31)
/* 803464A8 003433E8  91 1F 00 B0 */	stw r8, 0xb0(r31)
/* 803464AC 003433EC  D0 1F 00 B4 */	stfs f0, 0xb4(r31)
/* 803464B0 003433F0  B1 1F 00 C0 */	sth r8, 0xc0(r31)
/* 803464B4 003433F4  B1 1F 00 C2 */	sth r8, 0xc2(r31)
/* 803464B8 003433F8  98 1F 00 C4 */	stb r0, 0xc4(r31)
/* 803464BC 003433FC  D0 1F 00 C8 */	stfs f0, 0xc8(r31)
/* 803464C0 00343400  D0 1F 00 CC */	stfs f0, 0xcc(r31)
/* 803464C4 00343404  4B D7 B3 79 */	bl __construct_array
/* 803464C8 00343408  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803464CC 0034340C  7F E3 FB 78 */	mr r3, r31
/* 803464D0 00343410  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803464D4 00343414  7C 08 03 A6 */	mtlr r0
/* 803464D8 00343418  38 21 00 10 */	addi r1, r1, 0x10
/* 803464DC 0034341C  4E 80 00 20 */	blr 
.endfn __ct__Q28Morimura10THurryUp2DFv

.fn __ct__Q38Morimura10THurryUp2D11TStateParamFv, weak
/* 803464E0 00343420  38 80 00 00 */	li r4, 0
/* 803464E4 00343424  38 00 00 FF */	li r0, 0xff
/* 803464E8 00343428  98 83 00 00 */	stb r4, 0(r3)
/* 803464EC 0034342C  C0 22 FE F8 */	lfs f1, lbl_8051E258@sda21(r2)
/* 803464F0 00343430  98 03 00 01 */	stb r0, 1(r3)
/* 803464F4 00343434  C0 02 FF 10 */	lfs f0, lbl_8051E270@sda21(r2)
/* 803464F8 00343438  D0 23 00 04 */	stfs f1, 4(r3)
/* 803464FC 0034343C  D0 03 00 08 */	stfs f0, 8(r3)
/* 80346500 00343440  4E 80 00 20 */	blr 
.endfn __ct__Q38Morimura10THurryUp2D11TStateParamFv

.fn doCreate__Q28Morimura10THurryUp2DFP10JKRArchive, global
/* 80346504 00343444  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80346508 00343448  7C 08 02 A6 */	mflr r0
/* 8034650C 0034344C  90 01 00 34 */	stw r0, 0x34(r1)
/* 80346510 00343450  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 80346514 00343454  93 C1 00 28 */	stw r30, 0x28(r1)
/* 80346518 00343458  7C 9E 23 78 */	mr r30, r4
/* 8034651C 0034345C  3C 80 80 49 */	lis r4, lbl_80490280@ha
/* 80346520 00343460  93 A1 00 24 */	stw r29, 0x24(r1)
/* 80346524 00343464  7C 7D 1B 78 */	mr r29, r3
/* 80346528 00343468  3B E4 02 80 */	addi r31, r4, lbl_80490280@l
/* 8034652C 0034346C  93 81 00 20 */	stw r28, 0x20(r1)
/* 80346530 00343470  93 C3 00 78 */	stw r30, 0x78(r3)
/* 80346534 00343474  48 10 DA 75 */	bl getDispMember__Q26Screen7ObjBaseFv
/* 80346538 00343478  3C 80 00 4F */	lis r4, 0x004F4741@ha
/* 8034653C 0034347C  3C C0 4F 55 */	lis r6, 0x4F554E44@ha
/* 80346540 00343480  7C 7C 1B 78 */	mr r28, r3
/* 80346544 00343484  38 A0 47 52 */	li r5, 0x4752
/* 80346548 00343488  38 84 47 41 */	addi r4, r4, 0x004F4741@l
/* 8034654C 0034348C  38 C6 4E 44 */	addi r6, r6, 0x4F554E44@l
/* 80346550 00343490  4B FC 8D CD */	bl isID__Q32og6Screen14DispMemberBaseFUlUx
/* 80346554 00343494  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80346558 00343498  41 82 00 10 */	beq .L_80346568
/* 8034655C 0034349C  38 1C 00 78 */	addi r0, r28, 0x78
/* 80346560 003434A0  90 1D 00 AC */	stw r0, 0xac(r29)
/* 80346564 003434A4  48 00 00 4C */	b .L_803465B0
.L_80346568:
/* 80346568 003434A8  38 60 00 10 */	li r3, 0x10
/* 8034656C 003434AC  4B CD D9 39 */	bl __nw__FUl
/* 80346570 003434B0  28 03 00 00 */	cmplwi r3, 0
/* 80346574 003434B4  41 82 00 30 */	beq .L_803465A4
/* 80346578 003434B8  3C A0 80 4B */	lis r5, __vt__Q32og6Screen14DispMemberBase@ha
/* 8034657C 003434BC  3C 80 80 4B */	lis r4, __vt__Q32og6Screen17DispMemberHurryUp@ha
/* 80346580 003434C0  38 05 11 48 */	addi r0, r5, __vt__Q32og6Screen14DispMemberBase@l
/* 80346584 003434C4  38 A0 00 00 */	li r5, 0
/* 80346588 003434C8  90 03 00 00 */	stw r0, 0(r3)
/* 8034658C 003434CC  38 04 10 AC */	addi r0, r4, __vt__Q32og6Screen17DispMemberHurryUp@l
/* 80346590 003434D0  C0 02 FF 14 */	lfs f0, lbl_8051E274@sda21(r2)
/* 80346594 003434D4  90 A3 00 04 */	stw r5, 4(r3)
/* 80346598 003434D8  90 03 00 00 */	stw r0, 0(r3)
/* 8034659C 003434DC  D0 03 00 0C */	stfs f0, 0xc(r3)
/* 803465A0 003434E0  D0 03 00 08 */	stfs f0, 8(r3)
.L_803465A4:
/* 803465A4 003434E4  90 7D 00 AC */	stw r3, 0xac(r29)
/* 803465A8 003434E8  38 00 00 01 */	li r0, 1
/* 803465AC 003434EC  98 0D 98 A0 */	stb r0, mIsSection__Q28Morimura9TTestBase@sda21(r13)
.L_803465B0:
/* 803465B0 003434F0  38 60 01 48 */	li r3, 0x148
/* 803465B4 003434F4  4B CD D8 F1 */	bl __nw__FUl
/* 803465B8 003434F8  7C 60 1B 79 */	or. r0, r3, r3
/* 803465BC 003434FC  41 82 00 0C */	beq .L_803465C8
/* 803465C0 00343500  48 0E E7 ED */	bl __ct__Q29P2DScreen10Mgr_tuningFv
/* 803465C4 00343504  7C 60 1B 78 */	mr r0, r3
.L_803465C8:
/* 803465C8 00343508  90 1D 00 7C */	stw r0, 0x7c(r29)
/* 803465CC 0034350C  7F C6 F3 78 */	mr r6, r30
/* 803465D0 00343510  38 9F 00 24 */	addi r4, r31, 0x24
/* 803465D4 00343514  3C A0 00 02 */	lis r5, 2
/* 803465D8 00343518  80 7D 00 7C */	lwz r3, 0x7c(r29)
/* 803465DC 0034351C  4B CF 90 49 */	bl set__9J2DScreenFPCcUlP10JKRArchive
/* 803465E0 00343520  80 7D 00 7C */	lwz r3, 0x7c(r29)
/* 803465E4 00343524  3C 80 68 75 */	lis r4, 0x68757272@ha
/* 803465E8 00343528  38 C4 72 72 */	addi r6, r4, 0x68757272@l
/* 803465EC 0034352C  38 A0 00 00 */	li r5, 0
/* 803465F0 00343530  81 83 00 00 */	lwz r12, 0(r3)
/* 803465F4 00343534  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 803465F8 00343538  7D 89 03 A6 */	mtctr r12
/* 803465FC 0034353C  4E 80 04 21 */	bctrl 
/* 80346600 00343540  90 7D 00 80 */	stw r3, 0x80(r29)
/* 80346604 00343544  80 1D 00 80 */	lwz r0, 0x80(r29)
/* 80346608 00343548  28 00 00 00 */	cmplwi r0, 0
/* 8034660C 0034354C  40 82 00 18 */	bne .L_80346624
/* 80346610 00343550  38 7F 00 30 */	addi r3, r31, 0x30
/* 80346614 00343554  38 BF 00 40 */	addi r5, r31, 0x40
/* 80346618 00343558  38 80 00 96 */	li r4, 0x96
/* 8034661C 0034355C  4C C6 31 82 */	crclr 6
/* 80346620 00343560  4B CE 40 21 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80346624:
/* 80346624 00343564  80 7D 00 7C */	lwz r3, 0x7c(r29)
/* 80346628 00343568  3C 80 73 75 */	lis r4, 0x73756E64@ha
/* 8034662C 0034356C  38 C4 6E 64 */	addi r6, r4, 0x73756E64@l
/* 80346630 00343570  38 A0 00 00 */	li r5, 0
/* 80346634 00343574  81 83 00 00 */	lwz r12, 0(r3)
/* 80346638 00343578  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8034663C 0034357C  7D 89 03 A6 */	mtctr r12
/* 80346640 00343580  4E 80 04 21 */	bctrl 
/* 80346644 00343584  90 7D 00 84 */	stw r3, 0x84(r29)
/* 80346648 00343588  80 1D 00 84 */	lwz r0, 0x84(r29)
/* 8034664C 0034358C  28 00 00 00 */	cmplwi r0, 0
/* 80346650 00343590  40 82 00 18 */	bne .L_80346668
/* 80346654 00343594  38 7F 00 30 */	addi r3, r31, 0x30
/* 80346658 00343598  38 BF 00 40 */	addi r5, r31, 0x40
/* 8034665C 0034359C  38 80 00 99 */	li r4, 0x99
/* 80346660 003435A0  4C C6 31 82 */	crclr 6
/* 80346664 003435A4  4B CE 3F DD */	bl panic_f__12JUTExceptionFPCciPCce
.L_80346668:
/* 80346668 003435A8  80 7D 00 7C */	lwz r3, 0x7c(r29)
/* 8034666C 003435AC  3C 80 73 75 */	lis r4, 0x73756E6C@ha
/* 80346670 003435B0  38 C4 6E 6C */	addi r6, r4, 0x73756E6C@l
/* 80346674 003435B4  38 A0 00 00 */	li r5, 0
/* 80346678 003435B8  81 83 00 00 */	lwz r12, 0(r3)
/* 8034667C 003435BC  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 80346680 003435C0  7D 89 03 A6 */	mtctr r12
/* 80346684 003435C4  4E 80 04 21 */	bctrl 
/* 80346688 003435C8  90 7D 00 90 */	stw r3, 0x90(r29)
/* 8034668C 003435CC  80 1D 00 90 */	lwz r0, 0x90(r29)
/* 80346690 003435D0  28 00 00 00 */	cmplwi r0, 0
/* 80346694 003435D4  40 82 00 18 */	bne .L_803466AC
/* 80346698 003435D8  38 7F 00 30 */	addi r3, r31, 0x30
/* 8034669C 003435DC  38 BF 00 40 */	addi r5, r31, 0x40
/* 803466A0 003435E0  38 80 00 9C */	li r4, 0x9c
/* 803466A4 003435E4  4C C6 31 82 */	crclr 6
/* 803466A8 003435E8  4B CE 3F 99 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803466AC:
/* 803466AC 003435EC  80 7D 00 7C */	lwz r3, 0x7c(r29)
/* 803466B0 003435F0  3C 80 73 75 */	lis r4, 0x73756E77@ha
/* 803466B4 003435F4  38 C4 6E 77 */	addi r6, r4, 0x73756E77@l
/* 803466B8 003435F8  38 A0 00 00 */	li r5, 0
/* 803466BC 003435FC  81 83 00 00 */	lwz r12, 0(r3)
/* 803466C0 00343600  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 803466C4 00343604  7D 89 03 A6 */	mtctr r12
/* 803466C8 00343608  4E 80 04 21 */	bctrl 
/* 803466CC 0034360C  90 7D 00 88 */	stw r3, 0x88(r29)
/* 803466D0 00343610  80 1D 00 88 */	lwz r0, 0x88(r29)
/* 803466D4 00343614  28 00 00 00 */	cmplwi r0, 0
/* 803466D8 00343618  40 82 00 18 */	bne .L_803466F0
/* 803466DC 0034361C  38 7F 00 30 */	addi r3, r31, 0x30
/* 803466E0 00343620  38 BF 00 40 */	addi r5, r31, 0x40
/* 803466E4 00343624  38 80 00 9F */	li r4, 0x9f
/* 803466E8 00343628  4C C6 31 82 */	crclr 6
/* 803466EC 0034362C  4B CE 3F 55 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803466F0:
/* 803466F0 00343630  80 7D 00 7C */	lwz r3, 0x7c(r29)
/* 803466F4 00343634  3C 80 68 75 */	lis r4, 0x68757232@ha
/* 803466F8 00343638  38 C4 72 32 */	addi r6, r4, 0x68757232@l
/* 803466FC 0034363C  38 A0 00 00 */	li r5, 0
/* 80346700 00343640  81 83 00 00 */	lwz r12, 0(r3)
/* 80346704 00343644  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 80346708 00343648  7D 89 03 A6 */	mtctr r12
/* 8034670C 0034364C  4E 80 04 21 */	bctrl 
/* 80346710 00343650  90 7D 00 94 */	stw r3, 0x94(r29)
/* 80346714 00343654  80 1D 00 94 */	lwz r0, 0x94(r29)
/* 80346718 00343658  28 00 00 00 */	cmplwi r0, 0
/* 8034671C 0034365C  40 82 00 18 */	bne .L_80346734
/* 80346720 00343660  38 7F 00 30 */	addi r3, r31, 0x30
/* 80346724 00343664  38 BF 00 40 */	addi r5, r31, 0x40
/* 80346728 00343668  38 80 00 A2 */	li r4, 0xa2
/* 8034672C 0034366C  4C C6 31 82 */	crclr 6
/* 80346730 00343670  4B CE 3F 11 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80346734:
/* 80346734 00343674  80 7D 00 7C */	lwz r3, 0x7c(r29)
/* 80346738 00343678  3C 80 73 75 */	lis r4, 0x73756E32@ha
/* 8034673C 0034367C  38 C4 6E 32 */	addi r6, r4, 0x73756E32@l
/* 80346740 00343680  38 A0 00 00 */	li r5, 0
/* 80346744 00343684  81 83 00 00 */	lwz r12, 0(r3)
/* 80346748 00343688  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8034674C 0034368C  7D 89 03 A6 */	mtctr r12
/* 80346750 00343690  4E 80 04 21 */	bctrl 
/* 80346754 00343694  90 7D 00 98 */	stw r3, 0x98(r29)
/* 80346758 00343698  80 1D 00 98 */	lwz r0, 0x98(r29)
/* 8034675C 0034369C  28 00 00 00 */	cmplwi r0, 0
/* 80346760 003436A0  40 82 00 18 */	bne .L_80346778
/* 80346764 003436A4  38 7F 00 30 */	addi r3, r31, 0x30
/* 80346768 003436A8  38 BF 00 40 */	addi r5, r31, 0x40
/* 8034676C 003436AC  38 80 00 A5 */	li r4, 0xa5
/* 80346770 003436B0  4C C6 31 82 */	crclr 6
/* 80346774 003436B4  4B CE 3E CD */	bl panic_f__12JUTExceptionFPCciPCce
.L_80346778:
/* 80346778 003436B8  38 60 01 E8 */	li r3, 0x1e8
/* 8034677C 003436BC  4B CD D7 29 */	bl __nw__FUl
/* 80346780 003436C0  7C 7E 1B 79 */	or. r30, r3, r3
/* 80346784 003436C4  41 82 00 68 */	beq .L_803467EC
/* 80346788 003436C8  81 3D 00 88 */	lwz r9, 0x88(r29)
/* 8034678C 003436CC  3C 80 74 65 */	lis r4, 0x74657374@ha
/* 80346790 003436D0  C0 02 FE F8 */	lfs f0, lbl_8051E258@sda21(r2)
/* 80346794 003436D4  38 C4 73 74 */	addi r6, r4, 0x74657374@l
/* 80346798 003436D8  C0 89 00 2C */	lfs f4, 0x2c(r9)
/* 8034679C 003436DC  38 E1 00 08 */	addi r7, r1, 8
/* 803467A0 003436E0  C0 69 00 24 */	lfs f3, 0x24(r9)
/* 803467A4 003436E4  39 1F 00 4C */	addi r8, r31, 0x4c
/* 803467A8 003436E8  C0 49 00 28 */	lfs f2, 0x28(r9)
/* 803467AC 003436EC  38 A0 00 00 */	li r5, 0
/* 803467B0 003436F0  C0 29 00 20 */	lfs f1, 0x20(r9)
/* 803467B4 003436F4  EC 64 18 28 */	fsubs f3, f4, f3
/* 803467B8 003436F8  3D 20 01 10 */	lis r9, 0x110
/* 803467BC 003436FC  EC 22 08 28 */	fsubs f1, f2, f1
/* 803467C0 00343700  D0 01 00 08 */	stfs f0, 8(r1)
/* 803467C4 00343704  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 803467C8 00343708  D0 21 00 10 */	stfs f1, 0x10(r1)
/* 803467CC 0034370C  D0 61 00 14 */	stfs f3, 0x14(r1)
/* 803467D0 00343710  4B D0 E9 6D */	bl "__ct__12J2DPictureExFUxRCQ29JGeometry8TBox2<f>PCcUl"
/* 803467D4 00343714  3C 60 80 4E */	lis r3, __vt__Q28Morimura15THuWhitePaneSet@ha
/* 803467D8 00343718  C0 02 FE F8 */	lfs f0, lbl_8051E258@sda21(r2)
/* 803467DC 0034371C  38 03 B3 70 */	addi r0, r3, __vt__Q28Morimura15THuWhitePaneSet@l
/* 803467E0 00343720  90 1E 00 00 */	stw r0, 0(r30)
/* 803467E4 00343724  D0 1E 01 A8 */	stfs f0, 0x1a8(r30)
/* 803467E8 00343728  D0 1E 01 AC */	stfs f0, 0x1ac(r30)
.L_803467EC:
/* 803467EC 0034372C  93 DD 00 8C */	stw r30, 0x8c(r29)
/* 803467F0 00343730  80 1D 00 88 */	lwz r0, 0x88(r29)
/* 803467F4 00343734  28 00 00 00 */	cmplwi r0, 0
/* 803467F8 00343738  40 82 00 18 */	bne .L_80346810
/* 803467FC 0034373C  38 7F 00 30 */	addi r3, r31, 0x30
/* 80346800 00343740  38 BF 00 40 */	addi r5, r31, 0x40
/* 80346804 00343744  38 80 00 A9 */	li r4, 0xa9
/* 80346808 00343748  4C C6 31 82 */	crclr 6
/* 8034680C 0034374C  4B CE 3E 35 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80346810:
/* 80346810 00343750  80 7D 00 8C */	lwz r3, 0x8c(r29)
/* 80346814 00343754  38 80 00 04 */	li r4, 4
/* 80346818 00343758  4B CF 24 A5 */	bl setBasePosition__7J2DPaneF15J2DBasePosition
/* 8034681C 0034375C  80 7D 00 8C */	lwz r3, 0x8c(r29)
/* 80346820 00343760  38 80 00 00 */	li r4, 0
/* 80346824 00343764  81 83 00 00 */	lwz r12, 0(r3)
/* 80346828 00343768  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8034682C 0034376C  7D 89 03 A6 */	mtctr r12
/* 80346830 00343770  4E 80 04 21 */	bctrl 
/* 80346834 00343774  80 7D 00 8C */	lwz r3, 0x8c(r29)
/* 80346838 00343778  38 00 00 00 */	li r0, 0
/* 8034683C 0034377C  98 03 01 E0 */	stb r0, 0x1e0(r3)
/* 80346840 00343780  80 7D 00 90 */	lwz r3, 0x90(r29)
/* 80346844 00343784  80 9D 00 8C */	lwz r4, 0x8c(r29)
/* 80346848 00343788  4B CF 0E 7D */	bl appendChild__7J2DPaneFP7J2DPane
/* 8034684C 0034378C  80 7D 00 80 */	lwz r3, 0x80(r29)
/* 80346850 00343790  C0 23 00 D8 */	lfs f1, 0xd8(r3)
/* 80346854 00343794  C0 03 00 D4 */	lfs f0, 0xd4(r3)
/* 80346858 00343798  D0 1D 00 9C */	stfs f0, 0x9c(r29)
/* 8034685C 0034379C  D0 3D 00 A0 */	stfs f1, 0xa0(r29)
/* 80346860 003437A0  80 7D 00 84 */	lwz r3, 0x84(r29)
/* 80346864 003437A4  C0 23 00 D8 */	lfs f1, 0xd8(r3)
/* 80346868 003437A8  C0 03 00 D4 */	lfs f0, 0xd4(r3)
/* 8034686C 003437AC  D0 1D 00 A4 */	stfs f0, 0xa4(r29)
/* 80346870 003437B0  D0 3D 00 A8 */	stfs f1, 0xa8(r29)
/* 80346874 003437B4  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 80346878 003437B8  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 8034687C 003437BC  83 A1 00 24 */	lwz r29, 0x24(r1)
/* 80346880 003437C0  83 81 00 20 */	lwz r28, 0x20(r1)
/* 80346884 003437C4  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80346888 003437C8  7C 08 03 A6 */	mtlr r0
/* 8034688C 003437CC  38 21 00 30 */	addi r1, r1, 0x30
/* 80346890 003437D0  4E 80 00 20 */	blr 
.endfn doCreate__Q28Morimura10THurryUp2DFP10JKRArchive

.fn doUpdate__Q28Morimura10THurryUp2DFv, global
/* 80346894 003437D4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80346898 003437D8  7C 08 02 A6 */	mflr r0
/* 8034689C 003437DC  90 01 00 14 */	stw r0, 0x14(r1)
/* 803468A0 003437E0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803468A4 003437E4  7C 7F 1B 78 */	mr r31, r3
/* 803468A8 003437E8  88 0D 98 A0 */	lbz r0, mIsSection__Q28Morimura9TTestBase@sda21(r13)
/* 803468AC 003437EC  28 00 00 00 */	cmplwi r0, 0
/* 803468B0 003437F0  41 82 00 54 */	beq .L_80346904
/* 803468B4 003437F4  80 7F 00 AC */	lwz r3, 0xac(r31)
/* 803468B8 003437F8  C0 03 00 08 */	lfs f0, 8(r3)
/* 803468BC 003437FC  C0 23 00 0C */	lfs f1, 0xc(r3)
/* 803468C0 00343800  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 803468C4 00343804  40 80 00 08 */	bge .L_803468CC
/* 803468C8 00343808  D0 23 00 08 */	stfs f1, 8(r3)
.L_803468CC:
/* 803468CC 0034380C  80 7F 00 AC */	lwz r3, 0xac(r31)
/* 803468D0 00343810  C0 22 FF 18 */	lfs f1, lbl_8051E278@sda21(r2)
/* 803468D4 00343814  C0 43 00 08 */	lfs f2, 8(r3)
/* 803468D8 00343818  C0 02 FF 1C */	lfs f0, lbl_8051E27C@sda21(r2)
/* 803468DC 0034381C  EC 22 08 2A */	fadds f1, f2, f1
/* 803468E0 00343820  D0 23 00 08 */	stfs f1, 8(r3)
/* 803468E4 00343824  80 7F 00 AC */	lwz r3, 0xac(r31)
/* 803468E8 00343828  C0 23 00 08 */	lfs f1, 8(r3)
/* 803468EC 0034382C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 803468F0 00343830  40 81 00 14 */	ble .L_80346904
/* 803468F4 00343834  C0 03 00 0C */	lfs f0, 0xc(r3)
/* 803468F8 00343838  38 00 00 00 */	li r0, 0
/* 803468FC 0034383C  D0 03 00 08 */	stfs f0, 8(r3)
/* 80346900 00343840  90 1F 00 B0 */	stw r0, 0xb0(r31)
.L_80346904:
/* 80346904 00343844  80 1F 00 B0 */	lwz r0, 0xb0(r31)
/* 80346908 00343848  2C 00 00 02 */	cmpwi r0, 2
/* 8034690C 0034384C  41 82 00 98 */	beq .L_803469A4
/* 80346910 00343850  40 80 00 14 */	bge .L_80346924
/* 80346914 00343854  2C 00 00 00 */	cmpwi r0, 0
/* 80346918 00343858  41 82 00 1C */	beq .L_80346934
/* 8034691C 0034385C  40 80 00 34 */	bge .L_80346950
/* 80346920 00343860  48 00 00 A4 */	b .L_803469C4
.L_80346924:
/* 80346924 00343864  2C 00 00 04 */	cmpwi r0, 4
/* 80346928 00343868  41 82 00 94 */	beq .L_803469BC
/* 8034692C 0034386C  40 80 00 98 */	bge .L_803469C4
/* 80346930 00343870  48 00 00 80 */	b .L_803469B0
.L_80346934:
/* 80346934 00343874  7F E3 FB 78 */	mr r3, r31
/* 80346938 00343878  48 00 05 51 */	bl init__Q28Morimura10THurryUp2DFv
/* 8034693C 0034387C  C0 22 FE F8 */	lfs f1, lbl_8051E258@sda21(r2)
/* 80346940 00343880  7F E3 FB 78 */	mr r3, r31
/* 80346944 00343884  38 80 00 01 */	li r4, 1
/* 80346948 00343888  48 00 12 25 */	bl changeState__Q28Morimura10THurryUp2DFif
/* 8034694C 0034388C  48 00 00 78 */	b .L_803469C4
.L_80346950:
/* 80346950 00343890  C0 22 FF 20 */	lfs f1, lbl_8051E280@sda21(r2)
/* 80346954 00343894  C0 1F 00 B4 */	lfs f0, 0xb4(r31)
/* 80346958 00343898  FC 01 00 00 */	fcmpu cr0, f1, f0
/* 8034695C 0034389C  40 82 00 3C */	bne .L_80346998
/* 80346960 003438A0  80 0D 98 58 */	lwz r0, spSysIF__8PSSystem@sda21(r13)
/* 80346964 003438A4  28 00 00 00 */	cmplwi r0, 0
/* 80346968 003438A8  40 82 00 20 */	bne .L_80346988
/* 8034696C 003438AC  3C 60 80 49 */	lis r3, lbl_804902B0@ha
/* 80346970 003438B0  3C A0 80 49 */	lis r5, lbl_804902C0@ha
/* 80346974 003438B4  38 63 02 B0 */	addi r3, r3, lbl_804902B0@l
/* 80346978 003438B8  38 80 00 D2 */	li r4, 0xd2
/* 8034697C 003438BC  38 A5 02 C0 */	addi r5, r5, lbl_804902C0@l
/* 80346980 003438C0  4C C6 31 82 */	crclr 6
/* 80346984 003438C4  4B CE 3C BD */	bl panic_f__12JUTExceptionFPCciPCce
.L_80346988:
/* 80346988 003438C8  80 6D 98 58 */	lwz r3, spSysIF__8PSSystem@sda21(r13)
/* 8034698C 003438CC  38 80 18 17 */	li r4, 0x1817
/* 80346990 003438D0  38 A0 00 00 */	li r5, 0
/* 80346994 003438D4  4B FF 1C 9D */	bl playSystemSe__Q28PSSystem5SysIFFUlUl
.L_80346998:
/* 80346998 003438D8  7F E3 FB 78 */	mr r3, r31
/* 8034699C 003438DC  48 00 09 AD */	bl move__Q28Morimura10THurryUp2DFv
/* 803469A0 003438E0  48 00 00 24 */	b .L_803469C4
.L_803469A4:
/* 803469A4 003438E4  7F E3 FB 78 */	mr r3, r31
/* 803469A8 003438E8  48 00 0C 6D */	bl scaleUp1__Q28Morimura10THurryUp2DFv
/* 803469AC 003438EC  48 00 00 18 */	b .L_803469C4
.L_803469B0:
/* 803469B0 003438F0  7F E3 FB 78 */	mr r3, r31
/* 803469B4 003438F4  48 00 0D C9 */	bl colorUp__Q28Morimura10THurryUp2DFv
/* 803469B8 003438F8  48 00 00 0C */	b .L_803469C4
.L_803469BC:
/* 803469BC 003438FC  7F E3 FB 78 */	mr r3, r31
/* 803469C0 00343900  48 00 0F 6D */	bl scaleUp2__Q28Morimura10THurryUp2DFv
.L_803469C4:
/* 803469C4 00343904  80 7F 00 AC */	lwz r3, 0xac(r31)
/* 803469C8 00343908  C0 3F 00 CC */	lfs f1, 0xcc(r31)
/* 803469CC 0034390C  C0 03 00 08 */	lfs f0, 8(r3)
/* 803469D0 00343910  FC 01 00 00 */	fcmpu cr0, f1, f0
/* 803469D4 00343914  41 82 00 14 */	beq .L_803469E8
/* 803469D8 00343918  C0 3F 00 B4 */	lfs f1, 0xb4(r31)
/* 803469DC 0034391C  C0 02 FF 10 */	lfs f0, lbl_8051E270@sda21(r2)
/* 803469E0 00343920  EC 01 00 2A */	fadds f0, f1, f0
/* 803469E4 00343924  D0 1F 00 B4 */	stfs f0, 0xb4(r31)
.L_803469E8:
/* 803469E8 00343928  80 7F 00 AC */	lwz r3, 0xac(r31)
/* 803469EC 0034392C  C0 03 00 08 */	lfs f0, 8(r3)
/* 803469F0 00343930  D0 1F 00 CC */	stfs f0, 0xcc(r31)
/* 803469F4 00343934  80 7F 00 7C */	lwz r3, 0x7c(r31)
/* 803469F8 00343938  81 83 00 00 */	lwz r12, 0(r3)
/* 803469FC 0034393C  81 8C 00 30 */	lwz r12, 0x30(r12)
/* 80346A00 00343940  7D 89 03 A6 */	mtctr r12
/* 80346A04 00343944  4E 80 04 21 */	bctrl 
/* 80346A08 00343948  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80346A0C 0034394C  38 60 00 00 */	li r3, 0
/* 80346A10 00343950  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80346A14 00343954  7C 08 03 A6 */	mtlr r0
/* 80346A18 00343958  38 21 00 10 */	addi r1, r1, 0x10
/* 80346A1C 0034395C  4E 80 00 20 */	blr 
.endfn doUpdate__Q28Morimura10THurryUp2DFv

.fn doDraw__Q28Morimura10THurryUp2DFR8Graphics, global
/* 80346A20 00343960  94 21 FF 60 */	stwu r1, -0xa0(r1)
/* 80346A24 00343964  7C 08 02 A6 */	mflr r0
/* 80346A28 00343968  90 01 00 A4 */	stw r0, 0xa4(r1)
/* 80346A2C 0034396C  DB E1 00 90 */	stfd f31, 0x90(r1)
/* 80346A30 00343970  F3 E1 00 98 */	psq_st f31, 152(r1), 0, qr0
/* 80346A34 00343974  DB C1 00 80 */	stfd f30, 0x80(r1)
/* 80346A38 00343978  F3 C1 00 88 */	psq_st f30, 136(r1), 0, qr0
/* 80346A3C 0034397C  DB A1 00 70 */	stfd f29, 0x70(r1)
/* 80346A40 00343980  F3 A1 00 78 */	psq_st f29, 120(r1), 0, qr0
/* 80346A44 00343984  DB 81 00 60 */	stfd f28, 0x60(r1)
/* 80346A48 00343988  F3 81 00 68 */	psq_st f28, 104(r1), 0, qr0
/* 80346A4C 0034398C  93 E1 00 5C */	stw r31, 0x5c(r1)
/* 80346A50 00343990  93 C1 00 58 */	stw r30, 0x58(r1)
/* 80346A54 00343994  88 0D 98 A0 */	lbz r0, mIsSection__Q28Morimura9TTestBase@sda21(r13)
/* 80346A58 00343998  7C 7E 1B 78 */	mr r30, r3
/* 80346A5C 0034399C  7C 9F 23 78 */	mr r31, r4
/* 80346A60 003439A0  28 00 00 00 */	cmplwi r0, 0
/* 80346A64 003439A4  41 82 00 10 */	beq .L_80346A74
/* 80346A68 003439A8  38 60 00 01 */	li r3, 1
/* 80346A6C 003439AC  38 80 00 00 */	li r4, 0
/* 80346A70 003439B0  4B DA 27 7D */	bl GXSetPixelFmt
.L_80346A74:
/* 80346A74 003439B4  38 7F 01 90 */	addi r3, r31, 0x190
/* 80346A78 003439B8  81 9F 01 90 */	lwz r12, 0x190(r31)
/* 80346A7C 003439BC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80346A80 003439C0  7D 89 03 A6 */	mtctr r12
/* 80346A84 003439C4  4E 80 04 21 */	bctrl 
/* 80346A88 003439C8  80 7E 00 7C */	lwz r3, 0x7c(r30)
/* 80346A8C 003439CC  7F E4 FB 78 */	mr r4, r31
/* 80346A90 003439D0  38 BF 01 90 */	addi r5, r31, 0x190
/* 80346A94 003439D4  81 83 00 00 */	lwz r12, 0(r3)
/* 80346A98 003439D8  81 8C 00 9C */	lwz r12, 0x9c(r12)
/* 80346A9C 003439DC  7D 89 03 A6 */	mtctr r12
/* 80346AA0 003439E0  4E 80 04 21 */	bctrl 
/* 80346AA4 003439E4  80 1E 00 B0 */	lwz r0, 0xb0(r30)
/* 80346AA8 003439E8  2C 00 00 03 */	cmpwi r0, 3
/* 80346AAC 003439EC  40 82 03 48 */	bne .L_80346DF4
/* 80346AB0 003439F0  88 1E 00 C4 */	lbz r0, 0xc4(r30)
/* 80346AB4 003439F4  28 00 00 00 */	cmplwi r0, 0
/* 80346AB8 003439F8  41 82 03 3C */	beq .L_80346DF4
/* 80346ABC 003439FC  80 9E 00 88 */	lwz r4, 0x88(r30)
/* 80346AC0 00343A00  80 7E 00 8C */	lwz r3, 0x8c(r30)
/* 80346AC4 00343A04  C0 02 FF 28 */	lfs f0, lbl_8051E288@sda21(r2)
/* 80346AC8 00343A08  C0 23 01 A8 */	lfs f1, 0x1a8(r3)
/* 80346ACC 00343A0C  C0 64 00 2C */	lfs f3, 0x2c(r4)
/* 80346AD0 00343A10  C0 44 00 24 */	lfs f2, 0x24(r4)
/* 80346AD4 00343A14  EF E1 00 28 */	fsubs f31, f1, f0
/* 80346AD8 00343A18  C0 24 00 28 */	lfs f1, 0x28(r4)
/* 80346ADC 00343A1C  C0 04 00 20 */	lfs f0, 0x20(r4)
/* 80346AE0 00343A20  EF 83 10 28 */	fsubs f28, f3, f2
/* 80346AE4 00343A24  C3 C3 01 AC */	lfs f30, 0x1ac(r3)
/* 80346AE8 00343A28  EF A1 00 28 */	fsubs f29, f1, f0
/* 80346AEC 00343A2C  4B D9 DB E5 */	bl GXClearVtxDesc
/* 80346AF0 00343A30  38 60 00 09 */	li r3, 9
/* 80346AF4 00343A34  38 80 00 01 */	li r4, 1
/* 80346AF8 00343A38  4B D9 D7 8D */	bl GXSetVtxDesc
/* 80346AFC 00343A3C  38 60 00 00 */	li r3, 0
/* 80346B00 00343A40  38 80 00 09 */	li r4, 9
/* 80346B04 00343A44  38 A0 00 01 */	li r5, 1
/* 80346B08 00343A48  38 C0 00 04 */	li r6, 4
/* 80346B0C 00343A4C  38 E0 00 00 */	li r7, 0
/* 80346B10 00343A50  4B D9 DB F9 */	bl GXSetVtxAttrFmt
/* 80346B14 00343A54  38 60 00 01 */	li r3, 1
/* 80346B18 00343A58  4B DA 03 4D */	bl GXSetNumChans
/* 80346B1C 00343A5C  38 60 00 04 */	li r3, 4
/* 80346B20 00343A60  38 80 00 00 */	li r4, 0
/* 80346B24 00343A64  38 A0 00 00 */	li r5, 0
/* 80346B28 00343A68  38 C0 00 00 */	li r6, 0
/* 80346B2C 00343A6C  38 E0 00 00 */	li r7, 0
/* 80346B30 00343A70  39 00 00 00 */	li r8, 0
/* 80346B34 00343A74  39 20 00 02 */	li r9, 2
/* 80346B38 00343A78  4B DA 03 69 */	bl GXSetChanCtrl
/* 80346B3C 00343A7C  38 60 00 01 */	li r3, 1
/* 80346B40 00343A80  4B DA 20 79 */	bl GXSetNumTevStages
/* 80346B44 00343A84  38 60 00 00 */	li r3, 0
/* 80346B48 00343A88  38 80 00 FF */	li r4, 0xff
/* 80346B4C 00343A8C  38 A0 00 FF */	li r5, 0xff
/* 80346B50 00343A90  38 C0 00 04 */	li r6, 4
/* 80346B54 00343A94  4B DA 1E C9 */	bl GXSetTevOrder
/* 80346B58 00343A98  38 60 00 00 */	li r3, 0
/* 80346B5C 00343A9C  38 80 00 04 */	li r4, 4
/* 80346B60 00343AA0  4B DA 19 1D */	bl GXSetTevOp
/* 80346B64 00343AA4  80 7E 00 8C */	lwz r3, 0x8c(r30)
/* 80346B68 00343AA8  88 03 01 E0 */	lbz r0, 0x1e0(r3)
/* 80346B6C 00343AAC  54 00 FE 3E */	rlwinm r0, r0, 0x1f, 0x18, 0x1f
/* 80346B70 00343AB0  28 00 00 80 */	cmplwi r0, 0x80
/* 80346B74 00343AB4  40 81 00 08 */	ble .L_80346B7C
/* 80346B78 00343AB8  38 00 00 80 */	li r0, 0x80
.L_80346B7C:
/* 80346B7C 00343ABC  54 03 06 3E */	clrlwi r3, r0, 0x18
/* 80346B80 00343AC0  3C 00 43 30 */	lis r0, 0x4330
/* 80346B84 00343AC4  90 61 00 14 */	stw r3, 0x14(r1)
/* 80346B88 00343AC8  38 81 00 0C */	addi r4, r1, 0xc
/* 80346B8C 00343ACC  80 A2 FF 24 */	lwz r5, lbl_8051E284@sda21(r2)
/* 80346B90 00343AD0  38 60 00 04 */	li r3, 4
/* 80346B94 00343AD4  90 01 00 10 */	stw r0, 0x10(r1)
/* 80346B98 00343AD8  C8 42 FF 48 */	lfd f2, lbl_8051E2A8@sda21(r2)
/* 80346B9C 00343ADC  C8 21 00 10 */	lfd f1, 0x10(r1)
/* 80346BA0 00343AE0  C0 1E 00 40 */	lfs f0, 0x40(r30)
/* 80346BA4 00343AE4  EC 21 10 28 */	fsubs f1, f1, f2
/* 80346BA8 00343AE8  90 A1 00 08 */	stw r5, 8(r1)
/* 80346BAC 00343AEC  EC 01 00 32 */	fmuls f0, f1, f0
/* 80346BB0 00343AF0  FC 00 00 1E */	fctiwz f0, f0
/* 80346BB4 00343AF4  D8 01 00 18 */	stfd f0, 0x18(r1)
/* 80346BB8 00343AF8  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 80346BBC 00343AFC  98 01 00 0B */	stb r0, 0xb(r1)
/* 80346BC0 00343B00  80 01 00 08 */	lwz r0, 8(r1)
/* 80346BC4 00343B04  90 01 00 0C */	stw r0, 0xc(r1)
/* 80346BC8 00343B08  4B DA 01 AD */	bl GXSetChanMatColor
/* 80346BCC 00343B0C  38 60 00 00 */	li r3, 0
/* 80346BD0 00343B10  4B D9 EF D9 */	bl GXSetCullMode
/* 80346BD4 00343B14  80 7E 00 8C */	lwz r3, 0x8c(r30)
/* 80346BD8 00343B18  38 80 00 00 */	li r4, 0
/* 80346BDC 00343B1C  38 63 01 B0 */	addi r3, r3, 0x1b0
/* 80346BE0 00343B20  4B DA 29 99 */	bl GXLoadPosMtxImm
/* 80346BE4 00343B24  C0 02 FF 20 */	lfs f0, lbl_8051E280@sda21(r2)
/* 80346BE8 00343B28  38 A0 01 68 */	li r5, 0x168
/* 80346BEC 00343B2C  38 60 00 90 */	li r3, 0x90
/* 80346BF0 00343B30  38 80 00 00 */	li r4, 0
/* 80346BF4 00343B34  FC 00 00 1E */	fctiwz f0, f0
/* 80346BF8 00343B38  D8 01 00 20 */	stfd f0, 0x20(r1)
/* 80346BFC 00343B3C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80346C00 00343B40  7C 05 03 D6 */	divw r0, r5, r0
/* 80346C04 00343B44  54 1F 04 3E */	clrlwi r31, r0, 0x10
/* 80346C08 00343B48  1C 1F 00 06 */	mulli r0, r31, 6
/* 80346C0C 00343B4C  54 05 04 3E */	clrlwi r5, r0, 0x10
/* 80346C10 00343B50  4B D9 ED 79 */	bl GXBegin
/* 80346C14 00343B54  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 80346C18 00343B58  C0 A2 FF 2C */	lfs f5, lbl_8051E28C@sda21(r2)
/* 80346C1C 00343B5C  38 C3 71 A0 */	addi r6, r3, sincosTable___5JMath@l
/* 80346C20 00343B60  C0 82 FF 20 */	lfs f4, lbl_8051E280@sda21(r2)
/* 80346C24 00343B64  C8 62 FF 08 */	lfd f3, lbl_8051E268@sda21(r2)
/* 80346C28 00343B68  38 60 00 00 */	li r3, 0
/* 80346C2C 00343B6C  C0 42 FF 30 */	lfs f2, lbl_8051E290@sda21(r2)
/* 80346C30 00343B70  3C E0 43 30 */	lis r7, 0x4330
/* 80346C34 00343B74  C0 22 FF 34 */	lfs f1, lbl_8051E294@sda21(r2)
/* 80346C38 00343B78  3C 80 CC 01 */	lis r4, 0xcc01
/* 80346C3C 00343B7C  C0 02 FE F8 */	lfs f0, lbl_8051E258@sda21(r2)
/* 80346C40 00343B80  C1 22 FF 3C */	lfs f9, lbl_8051E29C@sda21(r2)
/* 80346C44 00343B84  C0 E2 FF 40 */	lfs f7, lbl_8051E2A0@sda21(r2)
/* 80346C48 00343B88  7F E9 03 A6 */	mtctr r31
/* 80346C4C 00343B8C  2C 1F 00 00 */	cmpwi r31, 0
/* 80346C50 00343B90  40 81 01 A4 */	ble .L_80346DF4
.L_80346C54:
/* 80346C54 00343B94  6C 65 80 00 */	xoris r5, r3, 0x8000
/* 80346C58 00343B98  38 03 00 01 */	addi r0, r3, 1
/* 80346C5C 00343B9C  90 A1 00 24 */	stw r5, 0x24(r1)
/* 80346C60 00343BA0  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 80346C64 00343BA4  90 E1 00 20 */	stw r7, 0x20(r1)
/* 80346C68 00343BA8  C8 C1 00 20 */	lfd f6, 0x20(r1)
/* 80346C6C 00343BAC  90 01 00 1C */	stw r0, 0x1c(r1)
/* 80346C70 00343BB0  ED 06 18 28 */	fsubs f8, f6, f3
/* 80346C74 00343BB4  90 E1 00 18 */	stw r7, 0x18(r1)
/* 80346C78 00343BB8  C8 C1 00 18 */	lfd f6, 0x18(r1)
/* 80346C7C 00343BBC  ED 04 02 32 */	fmuls f8, f4, f8
/* 80346C80 00343BC0  EC C6 18 28 */	fsubs f6, f6, f3
/* 80346C84 00343BC4  ED 05 02 32 */	fmuls f8, f5, f8
/* 80346C88 00343BC8  EC C4 01 B2 */	fmuls f6, f4, f6
/* 80346C8C 00343BCC  ED 48 10 24 */	fdivs f10, f8, f2
/* 80346C90 00343BD0  EC C5 01 B2 */	fmuls f6, f5, f6
/* 80346C94 00343BD4  FC 0A 00 40 */	fcmpo cr0, f10, f0
/* 80346C98 00343BD8  EC C6 10 24 */	fdivs f6, f6, f2
/* 80346C9C 00343BDC  40 80 00 30 */	bge .L_80346CCC
/* 80346CA0 00343BE0  C1 02 FF 38 */	lfs f8, lbl_8051E298@sda21(r2)
/* 80346CA4 00343BE4  3C A0 80 50 */	lis r5, sincosTable___5JMath@ha
/* 80346CA8 00343BE8  38 A5 71 A0 */	addi r5, r5, sincosTable___5JMath@l
/* 80346CAC 00343BEC  ED 0A 02 32 */	fmuls f8, f10, f8
/* 80346CB0 00343BF0  FD 00 40 1E */	fctiwz f8, f8
/* 80346CB4 00343BF4  D9 01 00 10 */	stfd f8, 0x10(r1)
/* 80346CB8 00343BF8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80346CBC 00343BFC  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 80346CC0 00343C00  7D 05 04 2E */	lfsx f8, r5, r0
/* 80346CC4 00343C04  FD 00 40 50 */	fneg f8, f8
/* 80346CC8 00343C08  48 00 00 28 */	b .L_80346CF0
.L_80346CCC:
/* 80346CCC 00343C0C  C1 02 FF 3C */	lfs f8, lbl_8051E29C@sda21(r2)
/* 80346CD0 00343C10  3C A0 80 50 */	lis r5, sincosTable___5JMath@ha
/* 80346CD4 00343C14  38 A5 71 A0 */	addi r5, r5, sincosTable___5JMath@l
/* 80346CD8 00343C18  ED 0A 02 32 */	fmuls f8, f10, f8
/* 80346CDC 00343C1C  FD 00 40 1E */	fctiwz f8, f8
/* 80346CE0 00343C20  D9 01 00 28 */	stfd f8, 0x28(r1)
/* 80346CE4 00343C24  80 01 00 2C */	lwz r0, 0x2c(r1)
/* 80346CE8 00343C28  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 80346CEC 00343C2C  7D 05 04 2E */	lfsx f8, r5, r0
.L_80346CF0:
/* 80346CF0 00343C30  FC 0A 00 40 */	fcmpo cr0, f10, f0
/* 80346CF4 00343C34  ED 61 FA 3A */	fmadds f11, f1, f8, f31
/* 80346CF8 00343C38  40 80 00 08 */	bge .L_80346D00
/* 80346CFC 00343C3C  FD 40 50 50 */	fneg f10, f10
.L_80346D00:
/* 80346D00 00343C40  ED 0A 02 72 */	fmuls f8, f10, f9
/* 80346D04 00343C44  FC 06 00 40 */	fcmpo cr0, f6, f0
/* 80346D08 00343C48  FD 00 40 1E */	fctiwz f8, f8
/* 80346D0C 00343C4C  D9 01 00 30 */	stfd f8, 0x30(r1)
/* 80346D10 00343C50  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80346D14 00343C54  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 80346D18 00343C58  7C A6 02 14 */	add r5, r6, r0
/* 80346D1C 00343C5C  C1 05 00 04 */	lfs f8, 4(r5)
/* 80346D20 00343C60  ED 41 F2 3C */	fnmsubs f10, f1, f8, f30
/* 80346D24 00343C64  40 80 00 30 */	bge .L_80346D54
/* 80346D28 00343C68  C1 02 FF 38 */	lfs f8, lbl_8051E298@sda21(r2)
/* 80346D2C 00343C6C  3C A0 80 50 */	lis r5, sincosTable___5JMath@ha
/* 80346D30 00343C70  38 A5 71 A0 */	addi r5, r5, sincosTable___5JMath@l
/* 80346D34 00343C74  ED 06 02 32 */	fmuls f8, f6, f8
/* 80346D38 00343C78  FD 00 40 1E */	fctiwz f8, f8
/* 80346D3C 00343C7C  D9 01 00 38 */	stfd f8, 0x38(r1)
/* 80346D40 00343C80  80 01 00 3C */	lwz r0, 0x3c(r1)
/* 80346D44 00343C84  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 80346D48 00343C88  7D 05 04 2E */	lfsx f8, r5, r0
/* 80346D4C 00343C8C  FD 00 40 50 */	fneg f8, f8
/* 80346D50 00343C90  48 00 00 24 */	b .L_80346D74
.L_80346D54:
/* 80346D54 00343C94  ED 06 02 72 */	fmuls f8, f6, f9
/* 80346D58 00343C98  3C A0 80 50 */	lis r5, sincosTable___5JMath@ha
/* 80346D5C 00343C9C  38 A5 71 A0 */	addi r5, r5, sincosTable___5JMath@l
/* 80346D60 00343CA0  FD 00 40 1E */	fctiwz f8, f8
/* 80346D64 00343CA4  D9 01 00 40 */	stfd f8, 0x40(r1)
/* 80346D68 00343CA8  80 01 00 44 */	lwz r0, 0x44(r1)
/* 80346D6C 00343CAC  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 80346D70 00343CB0  7D 05 04 2E */	lfsx f8, r5, r0
.L_80346D74:
/* 80346D74 00343CB4  FC 06 00 40 */	fcmpo cr0, f6, f0
/* 80346D78 00343CB8  ED 01 FA 3A */	fmadds f8, f1, f8, f31
/* 80346D7C 00343CBC  40 80 00 08 */	bge .L_80346D84
/* 80346D80 00343CC0  FC C0 30 50 */	fneg f6, f6
.L_80346D84:
/* 80346D84 00343CC4  EC C6 02 72 */	fmuls f6, f6, f9
/* 80346D88 00343CC8  38 63 00 01 */	addi r3, r3, 1
/* 80346D8C 00343CCC  FC C0 30 1E */	fctiwz f6, f6
/* 80346D90 00343CD0  D8 C1 00 48 */	stfd f6, 0x48(r1)
/* 80346D94 00343CD4  80 01 00 4C */	lwz r0, 0x4c(r1)
/* 80346D98 00343CD8  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 80346D9C 00343CDC  7C A6 02 14 */	add r5, r6, r0
/* 80346DA0 00343CE0  C0 C5 00 04 */	lfs f6, 4(r5)
/* 80346DA4 00343CE4  D3 E4 80 00 */	stfs f31, 0xCC008000@l(r4)
/* 80346DA8 00343CE8  EC C1 F1 BC */	fnmsubs f6, f1, f6, f30
/* 80346DAC 00343CEC  D3 C4 80 00 */	stfs f30, 0xCC008000@l(r4)
/* 80346DB0 00343CF0  D0 04 80 00 */	stfs f0, 0xCC008000@l(r4)
/* 80346DB4 00343CF4  D1 64 80 00 */	stfs f11, 0xCC008000@l(r4)
/* 80346DB8 00343CF8  D1 44 80 00 */	stfs f10, 0xCC008000@l(r4)
/* 80346DBC 00343CFC  D0 04 80 00 */	stfs f0, 0xCC008000@l(r4)
/* 80346DC0 00343D00  D1 04 80 00 */	stfs f8, 0xCC008000@l(r4)
/* 80346DC4 00343D04  D0 C4 80 00 */	stfs f6, 0xCC008000@l(r4)
/* 80346DC8 00343D08  D0 04 80 00 */	stfs f0, 0xCC008000@l(r4)
/* 80346DCC 00343D0C  D3 A4 80 00 */	stfs f29, 0xCC008000@l(r4)
/* 80346DD0 00343D10  D3 84 80 00 */	stfs f28, 0xCC008000@l(r4)
/* 80346DD4 00343D14  D0 E4 80 00 */	stfs f7, 0xCC008000@l(r4)
/* 80346DD8 00343D18  D1 64 80 00 */	stfs f11, 0xCC008000@l(r4)
/* 80346DDC 00343D1C  D1 44 80 00 */	stfs f10, 0xCC008000@l(r4)
/* 80346DE0 00343D20  D0 04 80 00 */	stfs f0, 0xCC008000@l(r4)
/* 80346DE4 00343D24  D1 04 80 00 */	stfs f8, 0xCC008000@l(r4)
/* 80346DE8 00343D28  D0 C4 80 00 */	stfs f6, 0xCC008000@l(r4)
/* 80346DEC 00343D2C  D0 04 80 00 */	stfs f0, 0xCC008000@l(r4)
/* 80346DF0 00343D30  42 00 FE 64 */	bdnz .L_80346C54
.L_80346DF4:
/* 80346DF4 00343D34  E3 E1 00 98 */	psq_l f31, 152(r1), 0, qr0
/* 80346DF8 00343D38  CB E1 00 90 */	lfd f31, 0x90(r1)
/* 80346DFC 00343D3C  E3 C1 00 88 */	psq_l f30, 136(r1), 0, qr0
/* 80346E00 00343D40  CB C1 00 80 */	lfd f30, 0x80(r1)
/* 80346E04 00343D44  E3 A1 00 78 */	psq_l f29, 120(r1), 0, qr0
/* 80346E08 00343D48  CB A1 00 70 */	lfd f29, 0x70(r1)
/* 80346E0C 00343D4C  E3 81 00 68 */	psq_l f28, 104(r1), 0, qr0
/* 80346E10 00343D50  CB 81 00 60 */	lfd f28, 0x60(r1)
/* 80346E14 00343D54  83 E1 00 5C */	lwz r31, 0x5c(r1)
/* 80346E18 00343D58  80 01 00 A4 */	lwz r0, 0xa4(r1)
/* 80346E1C 00343D5C  83 C1 00 58 */	lwz r30, 0x58(r1)
/* 80346E20 00343D60  7C 08 03 A6 */	mtlr r0
/* 80346E24 00343D64  38 21 00 A0 */	addi r1, r1, 0xa0
/* 80346E28 00343D68  4E 80 00 20 */	blr 
.endfn doDraw__Q28Morimura10THurryUp2DFR8Graphics

.fn doStart__Q28Morimura10THurryUp2DFPCQ26Screen13StartSceneArg, global
/* 80346E2C 00343D6C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80346E30 00343D70  7C 08 02 A6 */	mflr r0
/* 80346E34 00343D74  90 01 00 14 */	stw r0, 0x14(r1)
/* 80346E38 00343D78  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80346E3C 00343D7C  93 C1 00 08 */	stw r30, 8(r1)
/* 80346E40 00343D80  7C 7E 1B 78 */	mr r30, r3
/* 80346E44 00343D84  48 00 24 09 */	bl doStart__Q28Morimura9TTestBaseFPCQ26Screen13StartSceneArg
/* 80346E48 00343D88  7C 60 1B 78 */	mr r0, r3
/* 80346E4C 00343D8C  7F C3 F3 78 */	mr r3, r30
/* 80346E50 00343D90  7C 1F 03 78 */	mr r31, r0
/* 80346E54 00343D94  48 00 00 35 */	bl init__Q28Morimura10THurryUp2DFv
/* 80346E58 00343D98  7F C3 F3 78 */	mr r3, r30
/* 80346E5C 00343D9C  81 9E 00 00 */	lwz r12, 0(r30)
/* 80346E60 00343DA0  81 8C 00 58 */	lwz r12, 0x58(r12)
/* 80346E64 00343DA4  7D 89 03 A6 */	mtctr r12
/* 80346E68 00343DA8  4E 80 04 21 */	bctrl 
/* 80346E6C 00343DAC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80346E70 00343DB0  7F E3 FB 78 */	mr r3, r31
/* 80346E74 00343DB4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80346E78 00343DB8  83 C1 00 08 */	lwz r30, 8(r1)
/* 80346E7C 00343DBC  7C 08 03 A6 */	mtlr r0
/* 80346E80 00343DC0  38 21 00 10 */	addi r1, r1, 0x10
/* 80346E84 00343DC4  4E 80 00 20 */	blr 
.endfn doStart__Q28Morimura10THurryUp2DFPCQ26Screen13StartSceneArg

.fn init__Q28Morimura10THurryUp2DFv, global
/* 80346E88 00343DC8  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80346E8C 00343DCC  7C 08 02 A6 */	mflr r0
/* 80346E90 00343DD0  38 80 00 00 */	li r4, 0
/* 80346E94 00343DD4  C0 02 FE F8 */	lfs f0, lbl_8051E258@sda21(r2)
/* 80346E98 00343DD8  90 01 00 34 */	stw r0, 0x34(r1)
/* 80346E9C 00343DDC  38 00 00 FF */	li r0, 0xff
/* 80346EA0 00343DE0  C0 82 FF 00 */	lfs f4, lbl_8051E260@sda21(r2)
/* 80346EA4 00343DE4  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 80346EA8 00343DE8  7C 7F 1B 78 */	mr r31, r3
/* 80346EAC 00343DEC  C0 62 FF 10 */	lfs f3, lbl_8051E270@sda21(r2)
/* 80346EB0 00343DF0  90 83 00 B0 */	stw r4, 0xb0(r3)
/* 80346EB4 00343DF4  38 60 00 64 */	li r3, 0x64
/* 80346EB8 00343DF8  C0 42 FF 58 */	lfs f2, lbl_8051E2B8@sda21(r2)
/* 80346EBC 00343DFC  D0 1F 00 B4 */	stfs f0, 0xb4(r31)
/* 80346EC0 00343E00  C0 22 FF 5C */	lfs f1, lbl_8051E2BC@sda21(r2)
/* 80346EC4 00343E04  D0 1F 00 CC */	stfs f0, 0xcc(r31)
/* 80346EC8 00343E08  C0 02 FF 60 */	lfs f0, lbl_8051E2C0@sda21(r2)
/* 80346ECC 00343E0C  98 7F 00 DC */	stb r3, 0xdc(r31)
/* 80346ED0 00343E10  98 1F 00 DD */	stb r0, 0xdd(r31)
/* 80346ED4 00343E14  D0 9F 00 E0 */	stfs f4, 0xe0(r31)
/* 80346ED8 00343E18  D0 7F 00 E4 */	stfs f3, 0xe4(r31)
/* 80346EDC 00343E1C  98 7F 00 E8 */	stb r3, 0xe8(r31)
/* 80346EE0 00343E20  98 1F 00 E9 */	stb r0, 0xe9(r31)
/* 80346EE4 00343E24  D0 5F 00 EC */	stfs f2, 0xec(r31)
/* 80346EE8 00343E28  D0 3F 00 F0 */	stfs f1, 0xf0(r31)
/* 80346EEC 00343E2C  98 1F 01 00 */	stb r0, 0x100(r31)
/* 80346EF0 00343E30  98 9F 01 01 */	stb r4, 0x101(r31)
/* 80346EF4 00343E34  D0 7F 01 04 */	stfs f3, 0x104(r31)
/* 80346EF8 00343E38  D0 1F 01 08 */	stfs f0, 0x108(r31)
/* 80346EFC 00343E3C  80 7F 00 80 */	lwz r3, 0x80(r31)
/* 80346F00 00343E40  98 83 00 B0 */	stb r4, 0xb0(r3)
/* 80346F04 00343E44  C0 3F 00 9C */	lfs f1, 0x9c(r31)
/* 80346F08 00343E48  C0 0D 85 78 */	lfs f0, mInitPosX__Q28Morimura10THurryUp2D@sda21(r13)
/* 80346F0C 00343E4C  80 7F 00 80 */	lwz r3, 0x80(r31)
/* 80346F10 00343E50  EC 01 00 2A */	fadds f0, f1, f0
/* 80346F14 00343E54  C0 3F 00 A0 */	lfs f1, 0xa0(r31)
/* 80346F18 00343E58  D0 03 00 D4 */	stfs f0, 0xd4(r3)
/* 80346F1C 00343E5C  D0 23 00 D8 */	stfs f1, 0xd8(r3)
/* 80346F20 00343E60  81 83 00 00 */	lwz r12, 0(r3)
/* 80346F24 00343E64  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 80346F28 00343E68  7D 89 03 A6 */	mtctr r12
/* 80346F2C 00343E6C  4E 80 04 21 */	bctrl 
/* 80346F30 00343E70  80 7F 00 80 */	lwz r3, 0x80(r31)
/* 80346F34 00343E74  38 80 00 04 */	li r4, 4
/* 80346F38 00343E78  4B CF 1D 85 */	bl setBasePosition__7J2DPaneF15J2DBasePosition
/* 80346F3C 00343E7C  80 7F 00 80 */	lwz r3, 0x80(r31)
/* 80346F40 00343E80  C0 02 FF 00 */	lfs f0, lbl_8051E260@sda21(r2)
/* 80346F44 00343E84  D0 03 00 CC */	stfs f0, 0xcc(r3)
/* 80346F48 00343E88  D0 03 00 D0 */	stfs f0, 0xd0(r3)
/* 80346F4C 00343E8C  81 83 00 00 */	lwz r12, 0(r3)
/* 80346F50 00343E90  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 80346F54 00343E94  7D 89 03 A6 */	mtctr r12
/* 80346F58 00343E98  4E 80 04 21 */	bctrl 
/* 80346F5C 00343E9C  80 7F 00 80 */	lwz r3, 0x80(r31)
/* 80346F60 00343EA0  38 80 00 64 */	li r4, 0x64
/* 80346F64 00343EA4  81 83 00 00 */	lwz r12, 0(r3)
/* 80346F68 00343EA8  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 80346F6C 00343EAC  7D 89 03 A6 */	mtctr r12
/* 80346F70 00343EB0  4E 80 04 21 */	bctrl 
/* 80346F74 00343EB4  80 7F 00 84 */	lwz r3, 0x84(r31)
/* 80346F78 00343EB8  38 00 00 00 */	li r0, 0
/* 80346F7C 00343EBC  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 80346F80 00343EC0  C0 3F 00 A4 */	lfs f1, 0xa4(r31)
/* 80346F84 00343EC4  C0 0D 85 78 */	lfs f0, mInitPosX__Q28Morimura10THurryUp2D@sda21(r13)
/* 80346F88 00343EC8  80 7F 00 84 */	lwz r3, 0x84(r31)
/* 80346F8C 00343ECC  EC 01 00 28 */	fsubs f0, f1, f0
/* 80346F90 00343ED0  C0 3F 00 A8 */	lfs f1, 0xa8(r31)
/* 80346F94 00343ED4  D0 03 00 D4 */	stfs f0, 0xd4(r3)
/* 80346F98 00343ED8  D0 23 00 D8 */	stfs f1, 0xd8(r3)
/* 80346F9C 00343EDC  81 83 00 00 */	lwz r12, 0(r3)
/* 80346FA0 00343EE0  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 80346FA4 00343EE4  7D 89 03 A6 */	mtctr r12
/* 80346FA8 00343EE8  4E 80 04 21 */	bctrl 
/* 80346FAC 00343EEC  80 7F 00 84 */	lwz r3, 0x84(r31)
/* 80346FB0 00343EF0  38 80 00 04 */	li r4, 4
/* 80346FB4 00343EF4  4B CF 1D 09 */	bl setBasePosition__7J2DPaneF15J2DBasePosition
/* 80346FB8 00343EF8  80 7F 00 84 */	lwz r3, 0x84(r31)
/* 80346FBC 00343EFC  C0 02 FF 00 */	lfs f0, lbl_8051E260@sda21(r2)
/* 80346FC0 00343F00  D0 03 00 CC */	stfs f0, 0xcc(r3)
/* 80346FC4 00343F04  D0 03 00 D0 */	stfs f0, 0xd0(r3)
/* 80346FC8 00343F08  81 83 00 00 */	lwz r12, 0(r3)
/* 80346FCC 00343F0C  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 80346FD0 00343F10  7D 89 03 A6 */	mtctr r12
/* 80346FD4 00343F14  4E 80 04 21 */	bctrl 
/* 80346FD8 00343F18  80 7F 00 84 */	lwz r3, 0x84(r31)
/* 80346FDC 00343F1C  38 80 00 64 */	li r4, 0x64
/* 80346FE0 00343F20  81 83 00 00 */	lwz r12, 0(r3)
/* 80346FE4 00343F24  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 80346FE8 00343F28  7D 89 03 A6 */	mtctr r12
/* 80346FEC 00343F2C  4E 80 04 21 */	bctrl 
/* 80346FF0 00343F30  80 7F 00 90 */	lwz r3, 0x90(r31)
/* 80346FF4 00343F34  38 80 00 04 */	li r4, 4
/* 80346FF8 00343F38  4B CF 1C C5 */	bl setBasePosition__7J2DPaneF15J2DBasePosition
/* 80346FFC 00343F3C  80 7F 00 90 */	lwz r3, 0x90(r31)
/* 80347000 00343F40  C0 1F 00 EC */	lfs f0, 0xec(r31)
/* 80347004 00343F44  D0 03 00 CC */	stfs f0, 0xcc(r3)
/* 80347008 00343F48  D0 03 00 D0 */	stfs f0, 0xd0(r3)
/* 8034700C 00343F4C  81 83 00 00 */	lwz r12, 0(r3)
/* 80347010 00343F50  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 80347014 00343F54  7D 89 03 A6 */	mtctr r12
/* 80347018 00343F58  4E 80 04 21 */	bctrl 
/* 8034701C 00343F5C  80 7F 00 90 */	lwz r3, 0x90(r31)
/* 80347020 00343F60  38 80 00 64 */	li r4, 0x64
/* 80347024 00343F64  81 83 00 00 */	lwz r12, 0(r3)
/* 80347028 00343F68  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8034702C 00343F6C  7D 89 03 A6 */	mtctr r12
/* 80347030 00343F70  4E 80 04 21 */	bctrl 
/* 80347034 00343F74  80 7F 00 90 */	lwz r3, 0x90(r31)
/* 80347038 00343F78  38 00 00 00 */	li r0, 0
/* 8034703C 00343F7C  38 80 00 04 */	li r4, 4
/* 80347040 00343F80  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 80347044 00343F84  80 7F 00 88 */	lwz r3, 0x88(r31)
/* 80347048 00343F88  4B CF 1C 75 */	bl setBasePosition__7J2DPaneF15J2DBasePosition
/* 8034704C 00343F8C  80 7F 00 88 */	lwz r3, 0x88(r31)
/* 80347050 00343F90  C0 02 FF 10 */	lfs f0, lbl_8051E270@sda21(r2)
/* 80347054 00343F94  D0 03 00 CC */	stfs f0, 0xcc(r3)
/* 80347058 00343F98  D0 03 00 D0 */	stfs f0, 0xd0(r3)
/* 8034705C 00343F9C  81 83 00 00 */	lwz r12, 0(r3)
/* 80347060 00343FA0  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 80347064 00343FA4  7D 89 03 A6 */	mtctr r12
/* 80347068 00343FA8  4E 80 04 21 */	bctrl 
/* 8034706C 00343FAC  80 7F 00 88 */	lwz r3, 0x88(r31)
/* 80347070 00343FB0  38 00 00 00 */	li r0, 0
/* 80347074 00343FB4  38 80 00 04 */	li r4, 4
/* 80347078 00343FB8  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 8034707C 00343FBC  80 7F 00 94 */	lwz r3, 0x94(r31)
/* 80347080 00343FC0  4B CF 1C 3D */	bl setBasePosition__7J2DPaneF15J2DBasePosition
/* 80347084 00343FC4  80 7F 00 94 */	lwz r3, 0x94(r31)
/* 80347088 00343FC8  C0 02 FF 00 */	lfs f0, lbl_8051E260@sda21(r2)
/* 8034708C 00343FCC  D0 03 00 CC */	stfs f0, 0xcc(r3)
/* 80347090 00343FD0  D0 03 00 D0 */	stfs f0, 0xd0(r3)
/* 80347094 00343FD4  81 83 00 00 */	lwz r12, 0(r3)
/* 80347098 00343FD8  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 8034709C 00343FDC  7D 89 03 A6 */	mtctr r12
/* 803470A0 00343FE0  4E 80 04 21 */	bctrl 
/* 803470A4 00343FE4  80 7F 00 94 */	lwz r3, 0x94(r31)
/* 803470A8 00343FE8  38 00 00 00 */	li r0, 0
/* 803470AC 00343FEC  38 80 00 64 */	li r4, 0x64
/* 803470B0 00343FF0  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 803470B4 00343FF4  80 7F 00 94 */	lwz r3, 0x94(r31)
/* 803470B8 00343FF8  81 83 00 00 */	lwz r12, 0(r3)
/* 803470BC 00343FFC  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 803470C0 00344000  7D 89 03 A6 */	mtctr r12
/* 803470C4 00344004  4E 80 04 21 */	bctrl 
/* 803470C8 00344008  80 7F 00 98 */	lwz r3, 0x98(r31)
/* 803470CC 0034400C  38 80 00 04 */	li r4, 4
/* 803470D0 00344010  4B CF 1B ED */	bl setBasePosition__7J2DPaneF15J2DBasePosition
/* 803470D4 00344014  80 7F 00 98 */	lwz r3, 0x98(r31)
/* 803470D8 00344018  C0 02 FF 00 */	lfs f0, lbl_8051E260@sda21(r2)
/* 803470DC 0034401C  D0 03 00 CC */	stfs f0, 0xcc(r3)
/* 803470E0 00344020  D0 03 00 D0 */	stfs f0, 0xd0(r3)
/* 803470E4 00344024  81 83 00 00 */	lwz r12, 0(r3)
/* 803470E8 00344028  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 803470EC 0034402C  7D 89 03 A6 */	mtctr r12
/* 803470F0 00344030  4E 80 04 21 */	bctrl 
/* 803470F4 00344034  80 7F 00 98 */	lwz r3, 0x98(r31)
/* 803470F8 00344038  38 00 00 00 */	li r0, 0
/* 803470FC 0034403C  38 80 00 64 */	li r4, 0x64
/* 80347100 00344040  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 80347104 00344044  80 7F 00 98 */	lwz r3, 0x98(r31)
/* 80347108 00344048  81 83 00 00 */	lwz r12, 0(r3)
/* 8034710C 0034404C  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 80347110 00344050  7D 89 03 A6 */	mtctr r12
/* 80347114 00344054  4E 80 04 21 */	bctrl 
/* 80347118 00344058  88 1F 00 C4 */	lbz r0, 0xc4(r31)
/* 8034711C 0034405C  28 00 00 00 */	cmplwi r0, 0
/* 80347120 00344060  41 82 00 CC */	beq .L_803471EC
/* 80347124 00344064  80 7F 00 8C */	lwz r3, 0x8c(r31)
/* 80347128 00344068  38 C0 00 01 */	li r6, 1
/* 8034712C 0034406C  38 A0 00 06 */	li r5, 6
/* 80347130 00344070  38 80 00 07 */	li r4, 7
/* 80347134 00344074  98 C3 00 B0 */	stb r6, 0xb0(r3)
/* 80347138 00344078  38 00 00 00 */	li r0, 0
/* 8034713C 0034407C  80 7F 00 88 */	lwz r3, 0x88(r31)
/* 80347140 00344080  98 C1 00 1C */	stb r6, 0x1c(r1)
/* 80347144 00344084  81 83 00 00 */	lwz r12, 0(r3)
/* 80347148 00344088  98 A1 00 1D */	stb r5, 0x1d(r1)
/* 8034714C 0034408C  81 8C 01 3C */	lwz r12, 0x13c(r12)
/* 80347150 00344090  98 81 00 1E */	stb r4, 0x1e(r1)
/* 80347154 00344094  98 01 00 1F */	stb r0, 0x1f(r1)
/* 80347158 00344098  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 8034715C 0034409C  90 01 00 10 */	stw r0, 0x10(r1)
/* 80347160 003440A0  7D 89 03 A6 */	mtctr r12
/* 80347164 003440A4  4E 80 04 21 */	bctrl 
/* 80347168 003440A8  88 C1 00 10 */	lbz r6, 0x10(r1)
/* 8034716C 003440AC  38 80 00 01 */	li r4, 1
/* 80347170 003440B0  38 00 00 00 */	li r0, 0
/* 80347174 003440B4  88 A1 00 11 */	lbz r5, 0x11(r1)
/* 80347178 003440B8  98 C3 00 7C */	stb r6, 0x7c(r3)
/* 8034717C 003440BC  88 C1 00 12 */	lbz r6, 0x12(r1)
/* 80347180 003440C0  98 A3 00 7D */	stb r5, 0x7d(r3)
/* 80347184 003440C4  88 A1 00 13 */	lbz r5, 0x13(r1)
/* 80347188 003440C8  98 C3 00 7E */	stb r6, 0x7e(r3)
/* 8034718C 003440CC  98 A3 00 7F */	stb r5, 0x7f(r3)
/* 80347190 003440D0  80 7F 00 8C */	lwz r3, 0x8c(r31)
/* 80347194 003440D4  98 81 00 18 */	stb r4, 0x18(r1)
/* 80347198 003440D8  81 83 00 00 */	lwz r12, 0(r3)
/* 8034719C 003440DC  98 81 00 19 */	stb r4, 0x19(r1)
/* 803471A0 003440E0  81 8C 01 3C */	lwz r12, 0x13c(r12)
/* 803471A4 003440E4  98 01 00 1A */	stb r0, 0x1a(r1)
/* 803471A8 003440E8  98 01 00 1B */	stb r0, 0x1b(r1)
/* 803471AC 003440EC  80 01 00 18 */	lwz r0, 0x18(r1)
/* 803471B0 003440F0  90 01 00 0C */	stw r0, 0xc(r1)
/* 803471B4 003440F4  7D 89 03 A6 */	mtctr r12
/* 803471B8 003440F8  4E 80 04 21 */	bctrl 
/* 803471BC 003440FC  88 A1 00 0C */	lbz r5, 0xc(r1)
/* 803471C0 00344100  38 00 00 00 */	li r0, 0
/* 803471C4 00344104  88 81 00 0D */	lbz r4, 0xd(r1)
/* 803471C8 00344108  98 A3 00 7C */	stb r5, 0x7c(r3)
/* 803471CC 0034410C  88 A1 00 0E */	lbz r5, 0xe(r1)
/* 803471D0 00344110  98 83 00 7D */	stb r4, 0x7d(r3)
/* 803471D4 00344114  88 81 00 0F */	lbz r4, 0xf(r1)
/* 803471D8 00344118  98 A3 00 7E */	stb r5, 0x7e(r3)
/* 803471DC 0034411C  98 83 00 7F */	stb r4, 0x7f(r3)
/* 803471E0 00344120  80 7F 00 8C */	lwz r3, 0x8c(r31)
/* 803471E4 00344124  98 03 01 E0 */	stb r0, 0x1e0(r3)
/* 803471E8 00344128  48 00 00 88 */	b .L_80347270
.L_803471EC:
/* 803471EC 0034412C  80 7F 00 7C */	lwz r3, 0x7c(r31)
/* 803471F0 00344130  38 C0 00 01 */	li r6, 1
/* 803471F4 00344134  38 A0 00 04 */	li r5, 4
/* 803471F8 00344138  38 E0 00 05 */	li r7, 5
/* 803471FC 0034413C  81 83 00 00 */	lwz r12, 0(r3)
/* 80347200 00344140  38 00 00 00 */	li r0, 0
/* 80347204 00344144  3C 80 73 75 */	lis r4, 0x73756E77@ha
/* 80347208 00344148  98 C1 00 14 */	stb r6, 0x14(r1)
/* 8034720C 0034414C  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 80347210 00344150  38 C4 6E 77 */	addi r6, r4, 0x73756E77@l
/* 80347214 00344154  98 A1 00 15 */	stb r5, 0x15(r1)
/* 80347218 00344158  38 A0 00 00 */	li r5, 0
/* 8034721C 0034415C  98 E1 00 16 */	stb r7, 0x16(r1)
/* 80347220 00344160  98 01 00 17 */	stb r0, 0x17(r1)
/* 80347224 00344164  7D 89 03 A6 */	mtctr r12
/* 80347228 00344168  4E 80 04 21 */	bctrl 
/* 8034722C 0034416C  81 83 00 00 */	lwz r12, 0(r3)
/* 80347230 00344170  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80347234 00344174  81 8C 01 3C */	lwz r12, 0x13c(r12)
/* 80347238 00344178  90 01 00 08 */	stw r0, 8(r1)
/* 8034723C 0034417C  7D 89 03 A6 */	mtctr r12
/* 80347240 00344180  4E 80 04 21 */	bctrl 
/* 80347244 00344184  88 A1 00 08 */	lbz r5, 8(r1)
/* 80347248 00344188  38 00 00 00 */	li r0, 0
/* 8034724C 0034418C  88 81 00 09 */	lbz r4, 9(r1)
/* 80347250 00344190  98 A3 00 7C */	stb r5, 0x7c(r3)
/* 80347254 00344194  88 A1 00 0A */	lbz r5, 0xa(r1)
/* 80347258 00344198  98 83 00 7D */	stb r4, 0x7d(r3)
/* 8034725C 0034419C  88 81 00 0B */	lbz r4, 0xb(r1)
/* 80347260 003441A0  98 A3 00 7E */	stb r5, 0x7e(r3)
/* 80347264 003441A4  98 83 00 7F */	stb r4, 0x7f(r3)
/* 80347268 003441A8  80 7F 00 8C */	lwz r3, 0x8c(r31)
/* 8034726C 003441AC  98 03 00 B0 */	stb r0, 0xb0(r3)
.L_80347270:
/* 80347270 003441B0  88 0D 98 A0 */	lbz r0, mIsSection__Q28Morimura9TTestBase@sda21(r13)
/* 80347274 003441B4  38 C0 00 4B */	li r6, 0x4b
/* 80347278 003441B8  C0 42 FF 50 */	lfs f2, lbl_8051E2B0@sda21(r2)
/* 8034727C 003441BC  38 80 00 09 */	li r4, 9
/* 80347280 003441C0  28 00 00 00 */	cmplwi r0, 0
/* 80347284 003441C4  38 60 00 40 */	li r3, 0x40
/* 80347288 003441C8  38 00 00 06 */	li r0, 6
/* 8034728C 003441CC  41 82 00 08 */	beq .L_80347294
/* 80347290 003441D0  C0 42 FF 54 */	lfs f2, lbl_8051E2B4@sda21(r2)
.L_80347294:
/* 80347294 003441D4  80 FF 00 AC */	lwz r7, 0xac(r31)
/* 80347298 003441D8  38 A0 00 01 */	li r5, 1
/* 8034729C 003441DC  C0 27 00 08 */	lfs f1, 8(r7)
/* 803472A0 003441E0  C0 07 00 0C */	lfs f0, 0xc(r7)
/* 803472A4 003441E4  EC 01 00 28 */	fsubs f0, f1, f0
/* 803472A8 003441E8  90 BF 00 B0 */	stw r5, 0xb0(r31)
/* 803472AC 003441EC  EC 00 10 24 */	fdivs f0, f0, f2
/* 803472B0 003441F0  FC 00 00 1E */	fctiwz f0, f0
/* 803472B4 003441F4  D8 01 00 20 */	stfd f0, 0x20(r1)
/* 803472B8 003441F8  80 E1 00 24 */	lwz r7, 0x24(r1)
/* 803472BC 003441FC  7C 07 30 00 */	cmpw r7, r6
/* 803472C0 00344200  41 80 00 44 */	blt .L_80347304
/* 803472C4 00344204  7C E6 38 50 */	subf r7, r6, r7
/* 803472C8 00344208  38 A0 00 02 */	li r5, 2
/* 803472CC 0034420C  7C 07 20 00 */	cmpw r7, r4
/* 803472D0 00344210  90 BF 00 B0 */	stw r5, 0xb0(r31)
/* 803472D4 00344214  41 80 00 30 */	blt .L_80347304
/* 803472D8 00344218  7C E4 38 50 */	subf r7, r4, r7
/* 803472DC 0034421C  38 A0 00 03 */	li r5, 3
/* 803472E0 00344220  7C 07 18 00 */	cmpw r7, r3
/* 803472E4 00344224  90 BF 00 B0 */	stw r5, 0xb0(r31)
/* 803472E8 00344228  41 80 00 1C */	blt .L_80347304
/* 803472EC 0034422C  7C E3 38 50 */	subf r7, r3, r7
/* 803472F0 00344230  38 A0 00 04 */	li r5, 4
/* 803472F4 00344234  7C 07 00 00 */	cmpw r7, r0
/* 803472F8 00344238  90 BF 00 B0 */	stw r5, 0xb0(r31)
/* 803472FC 0034423C  41 80 00 08 */	blt .L_80347304
/* 80347300 00344240  7C E0 38 50 */	subf r7, r0, r7
.L_80347304:
/* 80347304 00344244  6C E3 80 00 */	xoris r3, r7, 0x8000
/* 80347308 00344248  3C 00 43 30 */	lis r0, 0x4330
/* 8034730C 0034424C  90 61 00 24 */	stw r3, 0x24(r1)
/* 80347310 00344250  7F E3 FB 78 */	mr r3, r31
/* 80347314 00344254  C8 22 FF 08 */	lfd f1, lbl_8051E268@sda21(r2)
/* 80347318 00344258  90 01 00 20 */	stw r0, 0x20(r1)
/* 8034731C 0034425C  C8 01 00 20 */	lfd f0, 0x20(r1)
/* 80347320 00344260  EC 00 08 28 */	fsubs f0, f0, f1
/* 80347324 00344264  D0 1F 00 B4 */	stfs f0, 0xb4(r31)
/* 80347328 00344268  80 9F 00 B0 */	lwz r4, 0xb0(r31)
/* 8034732C 0034426C  C0 3F 00 B4 */	lfs f1, 0xb4(r31)
/* 80347330 00344270  48 00 08 3D */	bl changeState__Q28Morimura10THurryUp2DFif
/* 80347334 00344274  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80347338 00344278  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 8034733C 0034427C  7C 08 03 A6 */	mtlr r0
/* 80347340 00344280  38 21 00 30 */	addi r1, r1, 0x30
/* 80347344 00344284  4E 80 00 20 */	blr 
.endfn init__Q28Morimura10THurryUp2DFv

.fn move__Q28Morimura10THurryUp2DFv, global
/* 80347348 00344288  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 8034734C 0034428C  7C 08 02 A6 */	mflr r0
/* 80347350 00344290  90 01 00 54 */	stw r0, 0x54(r1)
/* 80347354 00344294  DB E1 00 40 */	stfd f31, 0x40(r1)
/* 80347358 00344298  F3 E1 00 48 */	psq_st f31, 72(r1), 0, qr0
/* 8034735C 0034429C  DB C1 00 30 */	stfd f30, 0x30(r1)
/* 80347360 003442A0  F3 C1 00 38 */	psq_st f30, 56(r1), 0, qr0
/* 80347364 003442A4  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 80347368 003442A8  93 C1 00 28 */	stw r30, 0x28(r1)
/* 8034736C 003442AC  C0 22 FF 64 */	lfs f1, lbl_8051E2C4@sda21(r2)
/* 80347370 003442B0  7C 7F 1B 78 */	mr r31, r3
/* 80347374 003442B4  C0 0D 85 7C */	lfs f0, mMoveSp__Q28Morimura10THurryUp2D@sda21(r13)
/* 80347378 003442B8  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8034737C 003442BC  EC 61 00 32 */	fmuls f3, f1, f0
/* 80347380 003442C0  C0 3F 00 9C */	lfs f1, 0x9c(r31)
/* 80347384 003442C4  C0 43 00 54 */	lfs f2, 0x54(r3)
/* 80347388 003442C8  C0 0D 85 78 */	lfs f0, mInitPosX__Q28Morimura10THurryUp2D@sda21(r13)
/* 8034738C 003442CC  EF E3 00 B2 */	fmuls f31, f3, f2
/* 80347390 003442D0  C0 5F 00 B4 */	lfs f2, 0xb4(r31)
/* 80347394 003442D4  EC 01 00 2A */	fadds f0, f1, f0
/* 80347398 003442D8  80 7F 00 80 */	lwz r3, 0x80(r31)
/* 8034739C 003442DC  C0 3F 00 A0 */	lfs f1, 0xa0(r31)
/* 803473A0 003442E0  EC 1F 00 BC */	fnmsubs f0, f31, f2, f0
/* 803473A4 003442E4  D0 03 00 D4 */	stfs f0, 0xd4(r3)
/* 803473A8 003442E8  D0 23 00 D8 */	stfs f1, 0xd8(r3)
/* 803473AC 003442EC  81 83 00 00 */	lwz r12, 0(r3)
/* 803473B0 003442F0  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 803473B4 003442F4  7D 89 03 A6 */	mtctr r12
/* 803473B8 003442F8  4E 80 04 21 */	bctrl 
/* 803473BC 003442FC  C0 3F 00 A4 */	lfs f1, 0xa4(r31)
/* 803473C0 00344300  C0 0D 85 78 */	lfs f0, mInitPosX__Q28Morimura10THurryUp2D@sda21(r13)
/* 803473C4 00344304  80 7F 00 84 */	lwz r3, 0x84(r31)
/* 803473C8 00344308  EC 01 00 28 */	fsubs f0, f1, f0
/* 803473CC 0034430C  C0 3F 00 B4 */	lfs f1, 0xb4(r31)
/* 803473D0 00344310  C0 5F 00 A8 */	lfs f2, 0xa8(r31)
/* 803473D4 00344314  EC 1F 00 7A */	fmadds f0, f31, f1, f0
/* 803473D8 00344318  D0 03 00 D4 */	stfs f0, 0xd4(r3)
/* 803473DC 0034431C  D0 43 00 D8 */	stfs f2, 0xd8(r3)
/* 803473E0 00344320  81 83 00 00 */	lwz r12, 0(r3)
/* 803473E4 00344324  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 803473E8 00344328  7D 89 03 A6 */	mtctr r12
/* 803473EC 0034432C  4E 80 04 21 */	bctrl 
/* 803473F0 00344330  88 9F 00 DC */	lbz r4, 0xdc(r31)
/* 803473F4 00344334  3C 00 43 30 */	lis r0, 0x4330
/* 803473F8 00344338  80 7F 00 80 */	lwz r3, 0x80(r31)
/* 803473FC 0034433C  90 81 00 0C */	stw r4, 0xc(r1)
/* 80347400 00344340  81 83 00 00 */	lwz r12, 0(r3)
/* 80347404 00344344  90 01 00 08 */	stw r0, 8(r1)
/* 80347408 00344348  C8 42 FF 48 */	lfd f2, lbl_8051E2A8@sda21(r2)
/* 8034740C 0034434C  C8 21 00 08 */	lfd f1, 8(r1)
/* 80347410 00344350  C0 1F 00 40 */	lfs f0, 0x40(r31)
/* 80347414 00344354  EC 21 10 28 */	fsubs f1, f1, f2
/* 80347418 00344358  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8034741C 0034435C  EC 01 00 32 */	fmuls f0, f1, f0
/* 80347420 00344360  FC 00 00 1E */	fctiwz f0, f0
/* 80347424 00344364  D8 01 00 10 */	stfd f0, 0x10(r1)
/* 80347428 00344368  83 C1 00 14 */	lwz r30, 0x14(r1)
/* 8034742C 0034436C  7F C4 F3 78 */	mr r4, r30
/* 80347430 00344370  7D 89 03 A6 */	mtctr r12
/* 80347434 00344374  4E 80 04 21 */	bctrl 
/* 80347438 00344378  80 7F 00 84 */	lwz r3, 0x84(r31)
/* 8034743C 0034437C  7F C4 F3 78 */	mr r4, r30
/* 80347440 00344380  81 83 00 00 */	lwz r12, 0(r3)
/* 80347444 00344384  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 80347448 00344388  7D 89 03 A6 */	mtctr r12
/* 8034744C 0034438C  4E 80 04 21 */	bctrl 
/* 80347450 00344390  80 7F 00 80 */	lwz r3, 0x80(r31)
/* 80347454 00344394  C0 1F 00 9C */	lfs f0, 0x9c(r31)
/* 80347458 00344398  C0 23 00 D4 */	lfs f1, 0xd4(r3)
/* 8034745C 0034439C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80347460 003443A0  40 80 01 3C */	bge .L_8034759C
/* 80347464 003443A4  80 7F 00 94 */	lwz r3, 0x94(r31)
/* 80347468 003443A8  38 00 00 01 */	li r0, 1
/* 8034746C 003443AC  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 80347470 003443B0  80 7F 00 98 */	lwz r3, 0x98(r31)
/* 80347474 003443B4  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 80347478 003443B8  80 7F 00 80 */	lwz r3, 0x80(r31)
/* 8034747C 003443BC  80 1F 00 B0 */	lwz r0, 0xb0(r31)
/* 80347480 003443C0  C0 3F 00 9C */	lfs f1, 0x9c(r31)
/* 80347484 003443C4  C0 03 00 D4 */	lfs f0, 0xd4(r3)
/* 80347488 003443C8  1C 00 00 0C */	mulli r0, r0, 0xc
/* 8034748C 003443CC  C0 4D 85 88 */	lfs f2, mScaleRate__Q28Morimura10THurryUp2D@sda21(r13)
/* 80347490 003443D0  EC 01 00 28 */	fsubs f0, f1, f0
/* 80347494 003443D4  7C 7F 02 14 */	add r3, r31, r0
/* 80347498 003443D8  C3 C3 00 D4 */	lfs f30, 0xd4(r3)
/* 8034749C 003443DC  FC 00 02 10 */	fabs f0, f0
/* 803474A0 003443E0  C0 23 00 D8 */	lfs f1, 0xd8(r3)
/* 803474A4 003443E4  FC 00 00 18 */	frsp f0, f0
/* 803474A8 003443E8  EC 00 F8 24 */	fdivs f0, f0, f31
/* 803474AC 003443EC  FC 00 00 1E */	fctiwz f0, f0
/* 803474B0 003443F0  D8 01 00 10 */	stfd f0, 0x10(r1)
/* 803474B4 003443F4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803474B8 003443F8  7C 09 03 A6 */	mtctr r0
/* 803474BC 003443FC  2C 00 00 00 */	cmpwi r0, 0
/* 803474C0 00344400  40 81 00 20 */	ble .L_803474E0
.L_803474C4:
/* 803474C4 00344404  FC 1E 08 40 */	fcmpo cr0, f30, f1
/* 803474C8 00344408  40 80 00 08 */	bge .L_803474D0
/* 803474CC 0034440C  EF DE 00 B2 */	fmuls f30, f30, f2
.L_803474D0:
/* 803474D0 00344410  FC 1E 08 40 */	fcmpo cr0, f30, f1
/* 803474D4 00344414  40 81 00 08 */	ble .L_803474DC
/* 803474D8 00344418  FF C0 08 90 */	fmr f30, f1
.L_803474DC:
/* 803474DC 0034441C  42 00 FF E8 */	bdnz .L_803474C4
.L_803474E0:
/* 803474E0 00344420  80 7F 00 94 */	lwz r3, 0x94(r31)
/* 803474E4 00344424  88 03 00 B2 */	lbz r0, 0xb2(r3)
/* 803474E8 00344428  28 00 00 FF */	cmplwi r0, 0xff
/* 803474EC 0034442C  40 80 00 78 */	bge .L_80347564
/* 803474F0 00344430  C0 3F 00 B8 */	lfs f1, 0xb8(r31)
/* 803474F4 00344434  3C 00 43 30 */	lis r0, 0x4330
/* 803474F8 00344438  C0 1F 00 BC */	lfs f0, 0xbc(r31)
/* 803474FC 0034443C  81 83 00 00 */	lwz r12, 0(r3)
/* 80347500 00344440  EC 01 07 BA */	fmadds f0, f1, f30, f0
/* 80347504 00344444  90 01 00 08 */	stw r0, 8(r1)
/* 80347508 00344448  C8 22 FF 48 */	lfd f1, lbl_8051E2A8@sda21(r2)
/* 8034750C 0034444C  C0 5F 00 40 */	lfs f2, 0x40(r31)
/* 80347510 00344450  FC 00 00 1E */	fctiwz f0, f0
/* 80347514 00344454  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 80347518 00344458  D8 01 00 10 */	stfd f0, 0x10(r1)
/* 8034751C 0034445C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80347520 00344460  54 00 06 3E */	clrlwi r0, r0, 0x18
/* 80347524 00344464  90 01 00 0C */	stw r0, 0xc(r1)
/* 80347528 00344468  C8 01 00 08 */	lfd f0, 8(r1)
/* 8034752C 0034446C  EC 00 08 28 */	fsubs f0, f0, f1
/* 80347530 00344470  EC 02 00 32 */	fmuls f0, f2, f0
/* 80347534 00344474  FC 00 00 1E */	fctiwz f0, f0
/* 80347538 00344478  D8 01 00 18 */	stfd f0, 0x18(r1)
/* 8034753C 0034447C  83 C1 00 1C */	lwz r30, 0x1c(r1)
/* 80347540 00344480  7F C4 F3 78 */	mr r4, r30
/* 80347544 00344484  7D 89 03 A6 */	mtctr r12
/* 80347548 00344488  4E 80 04 21 */	bctrl 
/* 8034754C 0034448C  80 7F 00 98 */	lwz r3, 0x98(r31)
/* 80347550 00344490  7F C4 F3 78 */	mr r4, r30
/* 80347554 00344494  81 83 00 00 */	lwz r12, 0(r3)
/* 80347558 00344498  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8034755C 0034449C  7D 89 03 A6 */	mtctr r12
/* 80347560 003444A0  4E 80 04 21 */	bctrl 
.L_80347564:
/* 80347564 003444A4  80 7F 00 94 */	lwz r3, 0x94(r31)
/* 80347568 003444A8  D3 C3 00 CC */	stfs f30, 0xcc(r3)
/* 8034756C 003444AC  D3 C3 00 D0 */	stfs f30, 0xd0(r3)
/* 80347570 003444B0  81 83 00 00 */	lwz r12, 0(r3)
/* 80347574 003444B4  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 80347578 003444B8  7D 89 03 A6 */	mtctr r12
/* 8034757C 003444BC  4E 80 04 21 */	bctrl 
/* 80347580 003444C0  80 7F 00 98 */	lwz r3, 0x98(r31)
/* 80347584 003444C4  D3 C3 00 CC */	stfs f30, 0xcc(r3)
/* 80347588 003444C8  D3 C3 00 D0 */	stfs f30, 0xd0(r3)
/* 8034758C 003444CC  81 83 00 00 */	lwz r12, 0(r3)
/* 80347590 003444D0  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 80347594 003444D4  7D 89 03 A6 */	mtctr r12
/* 80347598 003444D8  4E 80 04 21 */	bctrl 
.L_8034759C:
/* 8034759C 003444DC  C0 3F 00 9C */	lfs f1, 0x9c(r31)
/* 803475A0 003444E0  C0 0D 85 78 */	lfs f0, mInitPosX__Q28Morimura10THurryUp2D@sda21(r13)
/* 803475A4 003444E4  80 7F 00 80 */	lwz r3, 0x80(r31)
/* 803475A8 003444E8  EC 01 00 28 */	fsubs f0, f1, f0
/* 803475AC 003444EC  C0 23 00 D4 */	lfs f1, 0xd4(r3)
/* 803475B0 003444F0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 803475B4 003444F4  40 80 00 38 */	bge .L_803475EC
/* 803475B8 003444F8  80 1F 00 B0 */	lwz r0, 0xb0(r31)
/* 803475BC 003444FC  80 7F 00 94 */	lwz r3, 0x94(r31)
/* 803475C0 00344500  1C 00 00 0C */	mulli r0, r0, 0xc
/* 803475C4 00344504  C0 23 00 CC */	lfs f1, 0xcc(r3)
/* 803475C8 00344508  7C 7F 02 14 */	add r3, r31, r0
/* 803475CC 0034450C  C0 03 00 D8 */	lfs f0, 0xd8(r3)
/* 803475D0 00344510  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 803475D4 00344514  4C 41 13 82 */	cror 2, 1, 2
/* 803475D8 00344518  40 82 00 14 */	bne .L_803475EC
/* 803475DC 0034451C  C0 22 FE F8 */	lfs f1, lbl_8051E258@sda21(r2)
/* 803475E0 00344520  7F E3 FB 78 */	mr r3, r31
/* 803475E4 00344524  38 80 00 02 */	li r4, 2
/* 803475E8 00344528  48 00 05 85 */	bl changeState__Q28Morimura10THurryUp2DFif
.L_803475EC:
/* 803475EC 0034452C  E3 E1 00 48 */	psq_l f31, 72(r1), 0, qr0
/* 803475F0 00344530  CB E1 00 40 */	lfd f31, 0x40(r1)
/* 803475F4 00344534  E3 C1 00 38 */	psq_l f30, 56(r1), 0, qr0
/* 803475F8 00344538  CB C1 00 30 */	lfd f30, 0x30(r1)
/* 803475FC 0034453C  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 80347600 00344540  80 01 00 54 */	lwz r0, 0x54(r1)
/* 80347604 00344544  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 80347608 00344548  7C 08 03 A6 */	mtlr r0
/* 8034760C 0034454C  38 21 00 50 */	addi r1, r1, 0x50
/* 80347610 00344550  4E 80 00 20 */	blr 
.endfn move__Q28Morimura10THurryUp2DFv

.fn scaleUp1__Q28Morimura10THurryUp2DFv, global
/* 80347614 00344554  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 80347618 00344558  7C 08 02 A6 */	mflr r0
/* 8034761C 0034455C  90 01 00 44 */	stw r0, 0x44(r1)
/* 80347620 00344560  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 80347624 00344564  F3 E1 00 38 */	psq_st f31, 56(r1), 0, qr0
/* 80347628 00344568  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 8034762C 0034456C  93 C1 00 28 */	stw r30, 0x28(r1)
/* 80347630 00344570  7C 7E 1B 78 */	mr r30, r3
/* 80347634 00344574  80 03 00 B0 */	lwz r0, 0xb0(r3)
/* 80347638 00344578  80 A3 00 90 */	lwz r5, 0x90(r3)
/* 8034763C 0034457C  1C 00 00 0C */	mulli r0, r0, 0xc
/* 80347640 00344580  C0 05 00 CC */	lfs f0, 0xcc(r5)
/* 80347644 00344584  7C 9E 02 14 */	add r4, r30, r0
/* 80347648 00344588  C0 84 00 D8 */	lfs f4, 0xd8(r4)
/* 8034764C 0034458C  FC 00 20 40 */	fcmpo cr0, f0, f4
/* 80347650 00344590  40 80 00 98 */	bge .L_803476E8
/* 80347654 00344594  C0 3E 00 B4 */	lfs f1, 0xb4(r30)
/* 80347658 00344598  C0 0D 85 80 */	lfs f0, mScaleSp1__Q28Morimura10THurryUp2D@sda21(r13)
/* 8034765C 0034459C  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80347660 003445A0  EC 41 00 32 */	fmuls f2, f1, f0
/* 80347664 003445A4  C0 62 FF 64 */	lfs f3, lbl_8051E2C4@sda21(r2)
/* 80347668 003445A8  C0 23 00 54 */	lfs f1, 0x54(r3)
/* 8034766C 003445AC  C0 04 00 D4 */	lfs f0, 0xd4(r4)
/* 80347670 003445B0  EC 43 00 B2 */	fmuls f2, f3, f2
/* 80347674 003445B4  EF E2 00 7A */	fmadds f31, f2, f1, f0
/* 80347678 003445B8  FC 1F 20 40 */	fcmpo cr0, f31, f4
/* 8034767C 003445BC  4C 41 13 82 */	cror 2, 1, 2
/* 80347680 003445C0  40 82 00 08 */	bne .L_80347688
/* 80347684 003445C4  FF E0 20 90 */	fmr f31, f4
.L_80347688:
/* 80347688 003445C8  C0 3E 00 B8 */	lfs f1, 0xb8(r30)
/* 8034768C 003445CC  3C 00 43 30 */	lis r0, 0x4330
/* 80347690 003445D0  C0 1E 00 BC */	lfs f0, 0xbc(r30)
/* 80347694 003445D4  7C A3 2B 78 */	mr r3, r5
/* 80347698 003445D8  81 85 00 00 */	lwz r12, 0(r5)
/* 8034769C 003445DC  EC 01 07 FA */	fmadds f0, f1, f31, f0
/* 803476A0 003445E0  90 01 00 10 */	stw r0, 0x10(r1)
/* 803476A4 003445E4  C8 22 FF 48 */	lfd f1, lbl_8051E2A8@sda21(r2)
/* 803476A8 003445E8  C0 5E 00 40 */	lfs f2, 0x40(r30)
/* 803476AC 003445EC  FC 00 00 1E */	fctiwz f0, f0
/* 803476B0 003445F0  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 803476B4 003445F4  D8 01 00 08 */	stfd f0, 8(r1)
/* 803476B8 003445F8  80 01 00 0C */	lwz r0, 0xc(r1)
/* 803476BC 003445FC  54 00 06 3E */	clrlwi r0, r0, 0x18
/* 803476C0 00344600  90 01 00 14 */	stw r0, 0x14(r1)
/* 803476C4 00344604  C8 01 00 10 */	lfd f0, 0x10(r1)
/* 803476C8 00344608  EC 00 08 28 */	fsubs f0, f0, f1
/* 803476CC 0034460C  EC 02 00 32 */	fmuls f0, f2, f0
/* 803476D0 00344610  FC 00 00 1E */	fctiwz f0, f0
/* 803476D4 00344614  D8 01 00 18 */	stfd f0, 0x18(r1)
/* 803476D8 00344618  80 81 00 1C */	lwz r4, 0x1c(r1)
/* 803476DC 0034461C  7D 89 03 A6 */	mtctr r12
/* 803476E0 00344620  4E 80 04 21 */	bctrl 
/* 803476E4 00344624  48 00 00 14 */	b .L_803476F8
.L_803476E8:
/* 803476E8 00344628  C3 E2 FF 10 */	lfs f31, lbl_8051E270@sda21(r2)
/* 803476EC 0034462C  38 80 00 03 */	li r4, 3
/* 803476F0 00344630  C0 22 FE F8 */	lfs f1, lbl_8051E258@sda21(r2)
/* 803476F4 00344634  48 00 04 79 */	bl changeState__Q28Morimura10THurryUp2DFif
.L_803476F8:
/* 803476F8 00344638  80 7E 00 90 */	lwz r3, 0x90(r30)
/* 803476FC 0034463C  D3 E3 00 CC */	stfs f31, 0xcc(r3)
/* 80347700 00344640  D3 E3 00 D0 */	stfs f31, 0xd0(r3)
/* 80347704 00344644  81 83 00 00 */	lwz r12, 0(r3)
/* 80347708 00344648  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 8034770C 0034464C  7D 89 03 A6 */	mtctr r12
/* 80347710 00344650  4E 80 04 21 */	bctrl 
/* 80347714 00344654  C0 22 FE FC */	lfs f1, lbl_8051E25C@sda21(r2)
/* 80347718 00344658  C0 1E 00 40 */	lfs f0, 0x40(r30)
/* 8034771C 0034465C  80 7E 00 94 */	lwz r3, 0x94(r30)
/* 80347720 00344660  EC 01 00 32 */	fmuls f0, f1, f0
/* 80347724 00344664  81 83 00 00 */	lwz r12, 0(r3)
/* 80347728 00344668  FC 00 00 1E */	fctiwz f0, f0
/* 8034772C 0034466C  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 80347730 00344670  D8 01 00 18 */	stfd f0, 0x18(r1)
/* 80347734 00344674  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80347738 00344678  7F E4 FB 78 */	mr r4, r31
/* 8034773C 0034467C  7D 89 03 A6 */	mtctr r12
/* 80347740 00344680  4E 80 04 21 */	bctrl 
/* 80347744 00344684  80 7E 00 98 */	lwz r3, 0x98(r30)
/* 80347748 00344688  7F E4 FB 78 */	mr r4, r31
/* 8034774C 0034468C  81 83 00 00 */	lwz r12, 0(r3)
/* 80347750 00344690  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 80347754 00344694  7D 89 03 A6 */	mtctr r12
/* 80347758 00344698  4E 80 04 21 */	bctrl 
/* 8034775C 0034469C  E3 E1 00 38 */	psq_l f31, 56(r1), 0, qr0
/* 80347760 003446A0  80 01 00 44 */	lwz r0, 0x44(r1)
/* 80347764 003446A4  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 80347768 003446A8  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 8034776C 003446AC  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 80347770 003446B0  7C 08 03 A6 */	mtlr r0
/* 80347774 003446B4  38 21 00 40 */	addi r1, r1, 0x40
/* 80347778 003446B8  4E 80 00 20 */	blr 
.endfn scaleUp1__Q28Morimura10THurryUp2DFv

.fn colorUp__Q28Morimura10THurryUp2DFv, global
/* 8034777C 003446BC  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80347780 003446C0  7C 08 02 A6 */	mflr r0
/* 80347784 003446C4  3C A0 43 30 */	lis r5, 0x4330
/* 80347788 003446C8  C0 22 FF 68 */	lfs f1, lbl_8051E2C8@sda21(r2)
/* 8034778C 003446CC  90 01 00 34 */	stw r0, 0x34(r1)
/* 80347790 003446D0  C8 62 FF 08 */	lfd f3, lbl_8051E268@sda21(r2)
/* 80347794 003446D4  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 80347798 003446D8  3B E0 00 FF */	li r31, 0xff
/* 8034779C 003446DC  93 C1 00 28 */	stw r30, 0x28(r1)
/* 803477A0 003446E0  7C 7E 1B 78 */	mr r30, r3
/* 803477A4 003446E4  80 8D 9A EC */	lwz r4, sys@sda21(r13)
/* 803477A8 003446E8  80 03 00 B0 */	lwz r0, 0xb0(r3)
/* 803477AC 003446EC  C0 04 00 54 */	lfs f0, 0x54(r4)
/* 803477B0 003446F0  1C 00 00 0C */	mulli r0, r0, 0xc
/* 803477B4 003446F4  C0 4D 85 8C */	lfs f2, mColorUpSp__Q28Morimura10THurryUp2D@sda21(r13)
/* 803477B8 003446F8  EC 01 00 32 */	fmuls f0, f1, f0
/* 803477BC 003446FC  90 A1 00 10 */	stw r5, 0x10(r1)
/* 803477C0 00344700  C0 83 00 B4 */	lfs f4, 0xb4(r3)
/* 803477C4 00344704  7C 9E 02 14 */	add r4, r30, r0
/* 803477C8 00344708  EC 02 00 32 */	fmuls f0, f2, f0
/* 803477CC 0034470C  88 04 00 D1 */	lbz r0, 0xd1(r4)
/* 803477D0 00344710  90 A1 00 18 */	stw r5, 0x18(r1)
/* 803477D4 00344714  C8 42 FF 48 */	lfd f2, lbl_8051E2A8@sda21(r2)
/* 803477D8 00344718  FC 20 00 1E */	fctiwz f1, f0
/* 803477DC 0034471C  90 01 00 1C */	stw r0, 0x1c(r1)
/* 803477E0 00344720  C8 01 00 18 */	lfd f0, 0x18(r1)
/* 803477E4 00344724  D8 21 00 08 */	stfd f1, 8(r1)
/* 803477E8 00344728  EC 00 10 28 */	fsubs f0, f0, f2
/* 803477EC 0034472C  80 01 00 0C */	lwz r0, 0xc(r1)
/* 803477F0 00344730  6C 06 80 00 */	xoris r6, r0, 0x8000
/* 803477F4 00344734  90 C1 00 14 */	stw r6, 0x14(r1)
/* 803477F8 00344738  C8 21 00 10 */	lfd f1, 0x10(r1)
/* 803477FC 0034473C  EC 21 18 28 */	fsubs f1, f1, f3
/* 80347800 00344740  EC 21 01 32 */	fmuls f1, f1, f4
/* 80347804 00344744  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80347808 00344748  40 80 00 3C */	bge .L_80347844
/* 8034780C 0034474C  88 04 00 D0 */	lbz r0, 0xd0(r4)
/* 80347810 00344750  90 C1 00 1C */	stw r6, 0x1c(r1)
/* 80347814 00344754  90 A1 00 18 */	stw r5, 0x18(r1)
/* 80347818 00344758  C8 01 00 18 */	lfd f0, 0x18(r1)
/* 8034781C 0034475C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80347820 00344760  EC 20 18 28 */	fsubs f1, f0, f3
/* 80347824 00344764  90 A1 00 10 */	stw r5, 0x10(r1)
/* 80347828 00344768  C8 01 00 10 */	lfd f0, 0x10(r1)
/* 8034782C 0034476C  EC 00 10 28 */	fsubs f0, f0, f2
/* 80347830 00344770  EC 04 00 7A */	fmadds f0, f4, f1, f0
/* 80347834 00344774  FC 00 00 1E */	fctiwz f0, f0
/* 80347838 00344778  D8 01 00 08 */	stfd f0, 8(r1)
/* 8034783C 0034477C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80347840 00344780  48 00 00 10 */	b .L_80347850
.L_80347844:
/* 80347844 00344784  C0 22 FE F8 */	lfs f1, lbl_8051E258@sda21(r2)
/* 80347848 00344788  38 80 00 04 */	li r4, 4
/* 8034784C 0034478C  48 00 03 21 */	bl changeState__Q28Morimura10THurryUp2DFif
.L_80347850:
/* 80347850 00344790  80 7E 00 8C */	lwz r3, 0x8c(r30)
/* 80347854 00344794  38 80 00 FF */	li r4, 0xff
/* 80347858 00344798  81 83 00 00 */	lwz r12, 0(r3)
/* 8034785C 0034479C  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 80347860 003447A0  7D 89 03 A6 */	mtctr r12
/* 80347864 003447A4  4E 80 04 21 */	bctrl 
/* 80347868 003447A8  57 E3 06 3E */	clrlwi r3, r31, 0x18
/* 8034786C 003447AC  3C 00 43 30 */	lis r0, 0x4330
/* 80347870 003447B0  90 61 00 1C */	stw r3, 0x1c(r1)
/* 80347874 003447B4  80 7E 00 8C */	lwz r3, 0x8c(r30)
/* 80347878 003447B8  90 01 00 18 */	stw r0, 0x18(r1)
/* 8034787C 003447BC  C8 42 FF 48 */	lfd f2, lbl_8051E2A8@sda21(r2)
/* 80347880 003447C0  9B E3 01 E0 */	stb r31, 0x1e0(r3)
/* 80347884 003447C4  C8 21 00 18 */	lfd f1, 0x18(r1)
/* 80347888 003447C8  C0 1E 00 40 */	lfs f0, 0x40(r30)
/* 8034788C 003447CC  EC 21 10 28 */	fsubs f1, f1, f2
/* 80347890 003447D0  80 7E 00 90 */	lwz r3, 0x90(r30)
/* 80347894 003447D4  81 83 00 00 */	lwz r12, 0(r3)
/* 80347898 003447D8  EC 01 00 32 */	fmuls f0, f1, f0
/* 8034789C 003447DC  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 803478A0 003447E0  FC 00 00 1E */	fctiwz f0, f0
/* 803478A4 003447E4  D8 01 00 10 */	stfd f0, 0x10(r1)
/* 803478A8 003447E8  80 81 00 14 */	lwz r4, 0x14(r1)
/* 803478AC 003447EC  7D 89 03 A6 */	mtctr r12
/* 803478B0 003447F0  4E 80 04 21 */	bctrl 
/* 803478B4 003447F4  80 7E 00 88 */	lwz r3, 0x88(r30)
/* 803478B8 003447F8  38 80 00 FF */	li r4, 0xff
/* 803478BC 003447FC  81 83 00 00 */	lwz r12, 0(r3)
/* 803478C0 00344800  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 803478C4 00344804  7D 89 03 A6 */	mtctr r12
/* 803478C8 00344808  4E 80 04 21 */	bctrl 
/* 803478CC 0034480C  C0 22 FE FC */	lfs f1, lbl_8051E25C@sda21(r2)
/* 803478D0 00344810  C0 1E 00 40 */	lfs f0, 0x40(r30)
/* 803478D4 00344814  80 7E 00 94 */	lwz r3, 0x94(r30)
/* 803478D8 00344818  EC 01 00 32 */	fmuls f0, f1, f0
/* 803478DC 0034481C  81 83 00 00 */	lwz r12, 0(r3)
/* 803478E0 00344820  FC 00 00 1E */	fctiwz f0, f0
/* 803478E4 00344824  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 803478E8 00344828  D8 01 00 08 */	stfd f0, 8(r1)
/* 803478EC 0034482C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803478F0 00344830  7F E4 FB 78 */	mr r4, r31
/* 803478F4 00344834  7D 89 03 A6 */	mtctr r12
/* 803478F8 00344838  4E 80 04 21 */	bctrl 
/* 803478FC 0034483C  80 7E 00 98 */	lwz r3, 0x98(r30)
/* 80347900 00344840  7F E4 FB 78 */	mr r4, r31
/* 80347904 00344844  81 83 00 00 */	lwz r12, 0(r3)
/* 80347908 00344848  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8034790C 0034484C  7D 89 03 A6 */	mtctr r12
/* 80347910 00344850  4E 80 04 21 */	bctrl 
/* 80347914 00344854  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80347918 00344858  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 8034791C 0034485C  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 80347920 00344860  7C 08 03 A6 */	mtlr r0
/* 80347924 00344864  38 21 00 30 */	addi r1, r1, 0x30
/* 80347928 00344868  4E 80 00 20 */	blr 
.endfn colorUp__Q28Morimura10THurryUp2DFv

.fn scaleUp2__Q28Morimura10THurryUp2DFv, global
/* 8034792C 0034486C  94 21 FF 90 */	stwu r1, -0x70(r1)
/* 80347930 00344870  7C 08 02 A6 */	mflr r0
/* 80347934 00344874  90 01 00 74 */	stw r0, 0x74(r1)
/* 80347938 00344878  DB E1 00 60 */	stfd f31, 0x60(r1)
/* 8034793C 0034487C  F3 E1 00 68 */	psq_st f31, 104(r1), 0, qr0
/* 80347940 00344880  93 E1 00 5C */	stw r31, 0x5c(r1)
/* 80347944 00344884  93 C1 00 58 */	stw r30, 0x58(r1)
/* 80347948 00344888  7C 7E 1B 78 */	mr r30, r3
/* 8034794C 0034488C  80 03 00 B0 */	lwz r0, 0xb0(r3)
/* 80347950 00344890  80 63 00 90 */	lwz r3, 0x90(r3)
/* 80347954 00344894  1C 00 00 0C */	mulli r0, r0, 0xc
/* 80347958 00344898  C0 03 00 CC */	lfs f0, 0xcc(r3)
/* 8034795C 0034489C  7C 9E 02 14 */	add r4, r30, r0
/* 80347960 003448A0  C0 84 00 D8 */	lfs f4, 0xd8(r4)
/* 80347964 003448A4  FC 00 20 40 */	fcmpo cr0, f0, f4
/* 80347968 003448A8  40 80 01 14 */	bge .L_80347A7C
/* 8034796C 003448AC  C0 3E 00 B4 */	lfs f1, 0xb4(r30)
/* 80347970 003448B0  C0 0D 85 84 */	lfs f0, mScaleSp2__Q28Morimura10THurryUp2D@sda21(r13)
/* 80347974 003448B4  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80347978 003448B8  EC 41 00 32 */	fmuls f2, f1, f0
/* 8034797C 003448BC  C0 62 FF 64 */	lfs f3, lbl_8051E2C4@sda21(r2)
/* 80347980 003448C0  C0 23 00 54 */	lfs f1, 0x54(r3)
/* 80347984 003448C4  C0 04 00 D4 */	lfs f0, 0xd4(r4)
/* 80347988 003448C8  EC 43 00 B2 */	fmuls f2, f3, f2
/* 8034798C 003448CC  EF E2 00 7A */	fmadds f31, f2, f1, f0
/* 80347990 003448D0  FC 1F 20 40 */	fcmpo cr0, f31, f4
/* 80347994 003448D4  40 81 00 08 */	ble .L_8034799C
/* 80347998 003448D8  FF E0 20 90 */	fmr f31, f4
.L_8034799C:
/* 8034799C 003448DC  C0 3E 00 B8 */	lfs f1, 0xb8(r30)
/* 803479A0 003448E0  3C 00 43 30 */	lis r0, 0x4330
/* 803479A4 003448E4  C0 1E 00 BC */	lfs f0, 0xbc(r30)
/* 803479A8 003448E8  80 7E 00 94 */	lwz r3, 0x94(r30)
/* 803479AC 003448EC  EC 01 07 FA */	fmadds f0, f1, f31, f0
/* 803479B0 003448F0  90 01 00 48 */	stw r0, 0x48(r1)
/* 803479B4 003448F4  81 83 00 00 */	lwz r12, 0(r3)
/* 803479B8 003448F8  C8 22 FF 48 */	lfd f1, lbl_8051E2A8@sda21(r2)
/* 803479BC 003448FC  FC 00 00 1E */	fctiwz f0, f0
/* 803479C0 00344900  C0 5E 00 40 */	lfs f2, 0x40(r30)
/* 803479C4 00344904  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 803479C8 00344908  D8 01 00 40 */	stfd f0, 0x40(r1)
/* 803479CC 0034490C  80 01 00 44 */	lwz r0, 0x44(r1)
/* 803479D0 00344910  54 00 06 3E */	clrlwi r0, r0, 0x18
/* 803479D4 00344914  90 01 00 4C */	stw r0, 0x4c(r1)
/* 803479D8 00344918  C8 01 00 48 */	lfd f0, 0x48(r1)
/* 803479DC 0034491C  EC 00 08 28 */	fsubs f0, f0, f1
/* 803479E0 00344920  EC 02 00 32 */	fmuls f0, f2, f0
/* 803479E4 00344924  FC 00 00 1E */	fctiwz f0, f0
/* 803479E8 00344928  D8 01 00 50 */	stfd f0, 0x50(r1)
/* 803479EC 0034492C  83 E1 00 54 */	lwz r31, 0x54(r1)
/* 803479F0 00344930  7F E4 FB 78 */	mr r4, r31
/* 803479F4 00344934  7D 89 03 A6 */	mtctr r12
/* 803479F8 00344938  4E 80 04 21 */	bctrl 
/* 803479FC 0034493C  80 7E 00 98 */	lwz r3, 0x98(r30)
/* 80347A00 00344940  7F E4 FB 78 */	mr r4, r31
/* 80347A04 00344944  81 83 00 00 */	lwz r12, 0(r3)
/* 80347A08 00344948  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 80347A0C 0034494C  7D 89 03 A6 */	mtctr r12
/* 80347A10 00344950  4E 80 04 21 */	bctrl 
/* 80347A14 00344954  80 7E 00 90 */	lwz r3, 0x90(r30)
/* 80347A18 00344958  7F E4 FB 78 */	mr r4, r31
/* 80347A1C 0034495C  81 83 00 00 */	lwz r12, 0(r3)
/* 80347A20 00344960  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 80347A24 00344964  7D 89 03 A6 */	mtctr r12
/* 80347A28 00344968  4E 80 04 21 */	bctrl 
/* 80347A2C 0034496C  80 7E 00 88 */	lwz r3, 0x88(r30)
/* 80347A30 00344970  7F E4 FB 78 */	mr r4, r31
/* 80347A34 00344974  81 83 00 00 */	lwz r12, 0(r3)
/* 80347A38 00344978  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 80347A3C 0034497C  7D 89 03 A6 */	mtctr r12
/* 80347A40 00344980  4E 80 04 21 */	bctrl 
/* 80347A44 00344984  80 7E 00 8C */	lwz r3, 0x8c(r30)
/* 80347A48 00344988  38 80 00 00 */	li r4, 0
/* 80347A4C 0034498C  81 83 00 00 */	lwz r12, 0(r3)
/* 80347A50 00344990  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 80347A54 00344994  7D 89 03 A6 */	mtctr r12
/* 80347A58 00344998  4E 80 04 21 */	bctrl 
/* 80347A5C 0034499C  80 7E 00 90 */	lwz r3, 0x90(r30)
/* 80347A60 003449A0  D3 E3 00 CC */	stfs f31, 0xcc(r3)
/* 80347A64 003449A4  D3 E3 00 D0 */	stfs f31, 0xd0(r3)
/* 80347A68 003449A8  81 83 00 00 */	lwz r12, 0(r3)
/* 80347A6C 003449AC  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 80347A70 003449B0  7D 89 03 A6 */	mtctr r12
/* 80347A74 003449B4  4E 80 04 21 */	bctrl 
/* 80347A78 003449B8  48 00 00 D4 */	b .L_80347B4C
.L_80347A7C:
/* 80347A7C 003449BC  88 8D 98 A0 */	lbz r4, mIsSection__Q28Morimura9TTestBase@sda21(r13)
/* 80347A80 003449C0  28 04 00 00 */	cmplwi r4, 0
/* 80347A84 003449C4  40 82 00 C8 */	bne .L_80347B4C
/* 80347A88 003449C8  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80347A8C 003449CC  88 03 00 3C */	lbz r0, 0x3c(r3)
/* 80347A90 003449D0  54 00 06 B5 */	rlwinm. r0, r0, 0, 0x1a, 0x1a
/* 80347A94 003449D4  41 82 00 B8 */	beq .L_80347B4C
/* 80347A98 003449D8  28 04 00 00 */	cmplwi r4, 0
/* 80347A9C 003449DC  40 82 00 B0 */	bne .L_80347B4C
/* 80347AA0 003449E0  80 0D 9B 54 */	lwz r0, moviePlayer__4Game@sda21(r13)
/* 80347AA4 003449E4  28 00 00 00 */	cmplwi r0, 0
/* 80347AA8 003449E8  41 82 00 A4 */	beq .L_80347B4C
/* 80347AAC 003449EC  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80347AB0 003449F0  38 80 00 15 */	li r4, 0x15
/* 80347AB4 003449F4  4B E9 F9 2D */	bl isDemoFlag__Q24Game8PlayDataFi
/* 80347AB8 003449F8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80347ABC 003449FC  40 82 00 90 */	bne .L_80347B4C
/* 80347AC0 00344A00  C0 02 FE F8 */	lfs f0, lbl_8051E258@sda21(r2)
/* 80347AC4 00344A04  3C 80 80 49 */	lis r4, lbl_804902D8@ha
/* 80347AC8 00344A08  38 00 00 00 */	li r0, 0
/* 80347ACC 00344A0C  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 80347AD0 00344A10  38 84 02 D8 */	addi r4, r4, lbl_804902D8@l
/* 80347AD4 00344A14  90 01 00 0C */	stw r0, 0xc(r1)
/* 80347AD8 00344A18  90 81 00 08 */	stw r4, 8(r1)
/* 80347ADC 00344A1C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80347AE0 00344A20  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 80347AE4 00344A24  D0 01 00 24 */	stfs f0, 0x24(r1)
/* 80347AE8 00344A28  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 80347AEC 00344A2C  D0 01 00 2C */	stfs f0, 0x2c(r1)
/* 80347AF0 00344A30  90 01 00 30 */	stw r0, 0x30(r1)
/* 80347AF4 00344A34  90 01 00 18 */	stw r0, 0x18(r1)
/* 80347AF8 00344A38  90 01 00 10 */	stw r0, 0x10(r1)
/* 80347AFC 00344A3C  90 01 00 34 */	stw r0, 0x34(r1)
/* 80347B00 00344A40  90 01 00 1C */	stw r0, 0x1c(r1)
/* 80347B04 00344A44  90 01 00 38 */	stw r0, 0x38(r1)
/* 80347B08 00344A48  4B E1 31 19 */	bl getActiveNavi__Q24Game7NaviMgrFv
/* 80347B0C 00344A4C  7C 7F 1B 79 */	or. r31, r3, r3
/* 80347B10 00344A50  41 82 00 3C */	beq .L_80347B4C
/* 80347B14 00344A54  80 1F 02 80 */	lwz r0, 0x280(r31)
/* 80347B18 00344A58  28 00 00 00 */	cmplwi r0, 0
/* 80347B1C 00344A5C  41 82 00 30 */	beq .L_80347B4C
/* 80347B20 00344A60  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80347B24 00344A64  38 80 00 15 */	li r4, 0x15
/* 80347B28 00344A68  4B E9 F8 7D */	bl setDemoFlag__Q24Game8PlayDataFi
/* 80347B2C 00344A6C  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 80347B30 00344A70  38 81 00 08 */	addi r4, r1, 8
/* 80347B34 00344A74  93 E3 01 8C */	stw r31, 0x18c(r3)
/* 80347B38 00344A78  80 1F 02 80 */	lwz r0, 0x280(r31)
/* 80347B3C 00344A7C  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 80347B40 00344A80  90 03 01 90 */	stw r0, 0x190(r3)
/* 80347B44 00344A84  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 80347B48 00344A88  48 0E 4E 89 */	bl play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
.L_80347B4C:
/* 80347B4C 00344A8C  E3 E1 00 68 */	psq_l f31, 104(r1), 0, qr0
/* 80347B50 00344A90  80 01 00 74 */	lwz r0, 0x74(r1)
/* 80347B54 00344A94  CB E1 00 60 */	lfd f31, 0x60(r1)
/* 80347B58 00344A98  83 E1 00 5C */	lwz r31, 0x5c(r1)
/* 80347B5C 00344A9C  83 C1 00 58 */	lwz r30, 0x58(r1)
/* 80347B60 00344AA0  7C 08 03 A6 */	mtlr r0
/* 80347B64 00344AA4  38 21 00 70 */	addi r1, r1, 0x70
/* 80347B68 00344AA8  4E 80 00 20 */	blr 
.endfn scaleUp2__Q28Morimura10THurryUp2DFv

.fn changeState__Q28Morimura10THurryUp2DFif, global
/* 80347B6C 00344AAC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80347B70 00344AB0  7C 08 02 A6 */	mflr r0
/* 80347B74 00344AB4  C8 82 FF 48 */	lfd f4, lbl_8051E2A8@sda21(r2)
/* 80347B78 00344AB8  90 01 00 24 */	stw r0, 0x24(r1)
/* 80347B7C 00344ABC  3C 00 43 30 */	lis r0, 0x4330
/* 80347B80 00344AC0  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80347B84 00344AC4  7C 7F 1B 78 */	mr r31, r3
/* 80347B88 00344AC8  90 83 00 B0 */	stw r4, 0xb0(r3)
/* 80347B8C 00344ACC  D0 23 00 B4 */	stfs f1, 0xb4(r3)
/* 80347B90 00344AD0  80 63 00 B0 */	lwz r3, 0xb0(r3)
/* 80347B94 00344AD4  90 01 00 08 */	stw r0, 8(r1)
/* 80347B98 00344AD8  1C 63 00 0C */	mulli r3, r3, 0xc
/* 80347B9C 00344ADC  90 01 00 10 */	stw r0, 0x10(r1)
/* 80347BA0 00344AE0  7C 9F 1A 14 */	add r4, r31, r3
/* 80347BA4 00344AE4  88 64 00 D1 */	lbz r3, 0xd1(r4)
/* 80347BA8 00344AE8  88 04 00 D0 */	lbz r0, 0xd0(r4)
/* 80347BAC 00344AEC  90 61 00 0C */	stw r3, 0xc(r1)
/* 80347BB0 00344AF0  C0 24 00 D8 */	lfs f1, 0xd8(r4)
/* 80347BB4 00344AF4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80347BB8 00344AF8  C8 61 00 08 */	lfd f3, 8(r1)
/* 80347BBC 00344AFC  C8 41 00 10 */	lfd f2, 0x10(r1)
/* 80347BC0 00344B00  C0 04 00 D4 */	lfs f0, 0xd4(r4)
/* 80347BC4 00344B04  EC 63 20 28 */	fsubs f3, f3, f4
/* 80347BC8 00344B08  EC 42 20 28 */	fsubs f2, f2, f4
/* 80347BCC 00344B0C  EC 01 00 28 */	fsubs f0, f1, f0
/* 80347BD0 00344B10  EC 23 10 28 */	fsubs f1, f3, f2
/* 80347BD4 00344B14  EC 01 00 24 */	fdivs f0, f1, f0
/* 80347BD8 00344B18  D0 1F 00 B8 */	stfs f0, 0xb8(r31)
/* 80347BDC 00344B1C  80 1F 00 B0 */	lwz r0, 0xb0(r31)
/* 80347BE0 00344B20  C0 3F 00 B8 */	lfs f1, 0xb8(r31)
/* 80347BE4 00344B24  1C 00 00 0C */	mulli r0, r0, 0xc
/* 80347BE8 00344B28  7C 7F 02 14 */	add r3, r31, r0
/* 80347BEC 00344B2C  C0 03 00 D8 */	lfs f0, 0xd8(r3)
/* 80347BF0 00344B30  EC 01 18 3C */	fnmsubs f0, f1, f0, f3
/* 80347BF4 00344B34  D0 1F 00 BC */	stfs f0, 0xbc(r31)
/* 80347BF8 00344B38  80 1F 00 B0 */	lwz r0, 0xb0(r31)
/* 80347BFC 00344B3C  2C 00 00 02 */	cmpwi r0, 2
/* 80347C00 00344B40  41 82 00 4C */	beq .L_80347C4C
/* 80347C04 00344B44  40 80 00 14 */	bge .L_80347C18
/* 80347C08 00344B48  2C 00 00 00 */	cmpwi r0, 0
/* 80347C0C 00344B4C  41 82 00 18 */	beq .L_80347C24
/* 80347C10 00344B50  40 80 00 24 */	bge .L_80347C34
/* 80347C14 00344B54  48 00 01 98 */	b .L_80347DAC
.L_80347C18:
/* 80347C18 00344B58  2C 00 00 05 */	cmpwi r0, 5
/* 80347C1C 00344B5C  40 80 01 90 */	bge .L_80347DAC
/* 80347C20 00344B60  48 00 00 B8 */	b .L_80347CD8
.L_80347C24:
/* 80347C24 00344B64  80 7F 00 8C */	lwz r3, 0x8c(r31)
/* 80347C28 00344B68  38 00 00 00 */	li r0, 0
/* 80347C2C 00344B6C  98 03 01 E0 */	stb r0, 0x1e0(r3)
/* 80347C30 00344B70  48 00 01 7C */	b .L_80347DAC
.L_80347C34:
/* 80347C34 00344B74  80 7F 00 80 */	lwz r3, 0x80(r31)
/* 80347C38 00344B78  38 00 00 01 */	li r0, 1
/* 80347C3C 00344B7C  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 80347C40 00344B80  80 7F 00 84 */	lwz r3, 0x84(r31)
/* 80347C44 00344B84  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 80347C48 00344B88  48 00 01 64 */	b .L_80347DAC
.L_80347C4C:
/* 80347C4C 00344B8C  80 7F 00 80 */	lwz r3, 0x80(r31)
/* 80347C50 00344B90  38 00 00 00 */	li r0, 0
/* 80347C54 00344B94  C0 02 FF 10 */	lfs f0, lbl_8051E270@sda21(r2)
/* 80347C58 00344B98  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 80347C5C 00344B9C  80 7F 00 84 */	lwz r3, 0x84(r31)
/* 80347C60 00344BA0  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 80347C64 00344BA4  80 7F 00 94 */	lwz r3, 0x94(r31)
/* 80347C68 00344BA8  D0 03 00 CC */	stfs f0, 0xcc(r3)
/* 80347C6C 00344BAC  D0 03 00 D0 */	stfs f0, 0xd0(r3)
/* 80347C70 00344BB0  81 83 00 00 */	lwz r12, 0(r3)
/* 80347C74 00344BB4  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 80347C78 00344BB8  7D 89 03 A6 */	mtctr r12
/* 80347C7C 00344BBC  4E 80 04 21 */	bctrl 
/* 80347C80 00344BC0  80 7F 00 98 */	lwz r3, 0x98(r31)
/* 80347C84 00344BC4  C0 02 FF 10 */	lfs f0, lbl_8051E270@sda21(r2)
/* 80347C88 00344BC8  D0 03 00 CC */	stfs f0, 0xcc(r3)
/* 80347C8C 00344BCC  D0 03 00 D0 */	stfs f0, 0xd0(r3)
/* 80347C90 00344BD0  81 83 00 00 */	lwz r12, 0(r3)
/* 80347C94 00344BD4  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 80347C98 00344BD8  7D 89 03 A6 */	mtctr r12
/* 80347C9C 00344BDC  4E 80 04 21 */	bctrl 
/* 80347CA0 00344BE0  80 7F 00 94 */	lwz r3, 0x94(r31)
/* 80347CA4 00344BE4  38 00 00 01 */	li r0, 1
/* 80347CA8 00344BE8  38 80 00 00 */	li r4, 0
/* 80347CAC 00344BEC  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 80347CB0 00344BF0  80 7F 00 98 */	lwz r3, 0x98(r31)
/* 80347CB4 00344BF4  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 80347CB8 00344BF8  80 7F 00 90 */	lwz r3, 0x90(r31)
/* 80347CBC 00344BFC  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 80347CC0 00344C00  80 7F 00 90 */	lwz r3, 0x90(r31)
/* 80347CC4 00344C04  81 83 00 00 */	lwz r12, 0(r3)
/* 80347CC8 00344C08  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 80347CCC 00344C0C  7D 89 03 A6 */	mtctr r12
/* 80347CD0 00344C10  4E 80 04 21 */	bctrl 
/* 80347CD4 00344C14  48 00 00 D8 */	b .L_80347DAC
.L_80347CD8:
/* 80347CD8 00344C18  80 7F 00 90 */	lwz r3, 0x90(r31)
/* 80347CDC 00344C1C  38 80 00 00 */	li r4, 0
/* 80347CE0 00344C20  81 83 00 00 */	lwz r12, 0(r3)
/* 80347CE4 00344C24  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 80347CE8 00344C28  7D 89 03 A6 */	mtctr r12
/* 80347CEC 00344C2C  4E 80 04 21 */	bctrl 
/* 80347CF0 00344C30  80 7F 00 88 */	lwz r3, 0x88(r31)
/* 80347CF4 00344C34  38 80 00 00 */	li r4, 0
/* 80347CF8 00344C38  81 83 00 00 */	lwz r12, 0(r3)
/* 80347CFC 00344C3C  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 80347D00 00344C40  7D 89 03 A6 */	mtctr r12
/* 80347D04 00344C44  4E 80 04 21 */	bctrl 
/* 80347D08 00344C48  80 7F 00 94 */	lwz r3, 0x94(r31)
/* 80347D0C 00344C4C  C0 02 FF 10 */	lfs f0, lbl_8051E270@sda21(r2)
/* 80347D10 00344C50  D0 03 00 CC */	stfs f0, 0xcc(r3)
/* 80347D14 00344C54  D0 03 00 D0 */	stfs f0, 0xd0(r3)
/* 80347D18 00344C58  81 83 00 00 */	lwz r12, 0(r3)
/* 80347D1C 00344C5C  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 80347D20 00344C60  7D 89 03 A6 */	mtctr r12
/* 80347D24 00344C64  4E 80 04 21 */	bctrl 
/* 80347D28 00344C68  80 7F 00 98 */	lwz r3, 0x98(r31)
/* 80347D2C 00344C6C  C0 02 FF 10 */	lfs f0, lbl_8051E270@sda21(r2)
/* 80347D30 00344C70  D0 03 00 CC */	stfs f0, 0xcc(r3)
/* 80347D34 00344C74  D0 03 00 D0 */	stfs f0, 0xd0(r3)
/* 80347D38 00344C78  81 83 00 00 */	lwz r12, 0(r3)
/* 80347D3C 00344C7C  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 80347D40 00344C80  7D 89 03 A6 */	mtctr r12
/* 80347D44 00344C84  4E 80 04 21 */	bctrl 
/* 80347D48 00344C88  80 7F 00 90 */	lwz r3, 0x90(r31)
/* 80347D4C 00344C8C  C0 02 FF 10 */	lfs f0, lbl_8051E270@sda21(r2)
/* 80347D50 00344C90  D0 03 00 CC */	stfs f0, 0xcc(r3)
/* 80347D54 00344C94  D0 03 00 D0 */	stfs f0, 0xd0(r3)
/* 80347D58 00344C98  81 83 00 00 */	lwz r12, 0(r3)
/* 80347D5C 00344C9C  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 80347D60 00344CA0  7D 89 03 A6 */	mtctr r12
/* 80347D64 00344CA4  4E 80 04 21 */	bctrl 
/* 80347D68 00344CA8  80 7F 00 88 */	lwz r3, 0x88(r31)
/* 80347D6C 00344CAC  C0 02 FF 10 */	lfs f0, lbl_8051E270@sda21(r2)
/* 80347D70 00344CB0  D0 03 00 CC */	stfs f0, 0xcc(r3)
/* 80347D74 00344CB4  D0 03 00 D0 */	stfs f0, 0xd0(r3)
/* 80347D78 00344CB8  81 83 00 00 */	lwz r12, 0(r3)
/* 80347D7C 00344CBC  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 80347D80 00344CC0  7D 89 03 A6 */	mtctr r12
/* 80347D84 00344CC4  4E 80 04 21 */	bctrl 
/* 80347D88 00344CC8  80 7F 00 94 */	lwz r3, 0x94(r31)
/* 80347D8C 00344CCC  38 00 00 01 */	li r0, 1
/* 80347D90 00344CD0  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 80347D94 00344CD4  80 7F 00 98 */	lwz r3, 0x98(r31)
/* 80347D98 00344CD8  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 80347D9C 00344CDC  80 7F 00 90 */	lwz r3, 0x90(r31)
/* 80347DA0 00344CE0  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 80347DA4 00344CE4  80 7F 00 88 */	lwz r3, 0x88(r31)
/* 80347DA8 00344CE8  98 03 00 B0 */	stb r0, 0xb0(r3)
.L_80347DAC:
/* 80347DAC 00344CEC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80347DB0 00344CF0  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80347DB4 00344CF4  7C 08 03 A6 */	mtlr r0
/* 80347DB8 00344CF8  38 21 00 20 */	addi r1, r1, 0x20
/* 80347DBC 00344CFC  4E 80 00 20 */	blr 
.endfn changeState__Q28Morimura10THurryUp2DFif

.fn getDispMemberBase__Q28Morimura10THurryUp2DFv, weak
/* 80347DC0 00344D00  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80347DC4 00344D04  7C 08 02 A6 */	mflr r0
/* 80347DC8 00344D08  90 01 00 14 */	stw r0, 0x14(r1)
/* 80347DCC 00344D0C  88 0D 98 A0 */	lbz r0, mIsSection__Q28Morimura9TTestBase@sda21(r13)
/* 80347DD0 00344D10  28 00 00 00 */	cmplwi r0, 0
/* 80347DD4 00344D14  41 82 00 0C */	beq .L_80347DE0
/* 80347DD8 00344D18  80 63 00 AC */	lwz r3, 0xac(r3)
/* 80347DDC 00344D1C  48 00 00 08 */	b .L_80347DE4
.L_80347DE0:
/* 80347DE0 00344D20  48 10 C1 C9 */	bl getDispMember__Q26Screen7ObjBaseFv
.L_80347DE4:
/* 80347DE4 00344D24  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80347DE8 00344D28  7C 08 03 A6 */	mtlr r0
/* 80347DEC 00344D2C  38 21 00 10 */	addi r1, r1, 0x10
/* 80347DF0 00344D30  4E 80 00 20 */	blr 
.endfn getDispMemberBase__Q28Morimura10THurryUp2DFv

.fn __dt__Q28Morimura10THurryUp2DFv, weak
/* 80347DF4 00344D34  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80347DF8 00344D38  7C 08 02 A6 */	mflr r0
/* 80347DFC 00344D3C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80347E00 00344D40  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80347E04 00344D44  7C 9F 23 78 */	mr r31, r4
/* 80347E08 00344D48  93 C1 00 08 */	stw r30, 8(r1)
/* 80347E0C 00344D4C  7C 7E 1B 79 */	or. r30, r3, r3
/* 80347E10 00344D50  41 82 00 8C */	beq .L_80347E9C
/* 80347E14 00344D54  3C 80 80 4E */	lis r4, __vt__Q28Morimura10THurryUp2D@ha
/* 80347E18 00344D58  38 84 B2 F4 */	addi r4, r4, __vt__Q28Morimura10THurryUp2D@l
/* 80347E1C 00344D5C  90 9E 00 00 */	stw r4, 0(r30)
/* 80347E20 00344D60  38 04 00 10 */	addi r0, r4, 0x10
/* 80347E24 00344D64  90 1E 00 18 */	stw r0, 0x18(r30)
/* 80347E28 00344D68  41 82 00 64 */	beq .L_80347E8C
/* 80347E2C 00344D6C  3C 80 80 4E */	lis r4, __vt__Q28Morimura9TTestBase@ha
/* 80347E30 00344D70  38 84 B8 F8 */	addi r4, r4, __vt__Q28Morimura9TTestBase@l
/* 80347E34 00344D74  90 9E 00 00 */	stw r4, 0(r30)
/* 80347E38 00344D78  38 04 00 10 */	addi r0, r4, 0x10
/* 80347E3C 00344D7C  90 1E 00 18 */	stw r0, 0x18(r30)
/* 80347E40 00344D80  41 82 00 4C */	beq .L_80347E8C
/* 80347E44 00344D84  3C 80 80 4F */	lis r4, __vt__Q26Screen7ObjBase@ha
/* 80347E48 00344D88  38 84 D7 58 */	addi r4, r4, __vt__Q26Screen7ObjBase@l
/* 80347E4C 00344D8C  90 9E 00 00 */	stw r4, 0(r30)
/* 80347E50 00344D90  38 04 00 10 */	addi r0, r4, 0x10
/* 80347E54 00344D94  90 1E 00 18 */	stw r0, 0x18(r30)
/* 80347E58 00344D98  41 82 00 34 */	beq .L_80347E8C
/* 80347E5C 00344D9C  3C 80 80 4E */	lis r4, __vt__Q26Screen8IObjBase@ha
/* 80347E60 00344DA0  38 84 82 40 */	addi r4, r4, __vt__Q26Screen8IObjBase@l
/* 80347E64 00344DA4  90 9E 00 00 */	stw r4, 0(r30)
/* 80347E68 00344DA8  38 04 00 10 */	addi r0, r4, 0x10
/* 80347E6C 00344DAC  90 1E 00 18 */	stw r0, 0x18(r30)
/* 80347E70 00344DB0  48 0C 97 61 */	bl del__5CNodeFv
/* 80347E74 00344DB4  38 7E 00 18 */	addi r3, r30, 0x18
/* 80347E78 00344DB8  38 80 00 00 */	li r4, 0
/* 80347E7C 00344DBC  4B CD 51 B9 */	bl __dt__11JKRDisposerFv
/* 80347E80 00344DC0  7F C3 F3 78 */	mr r3, r30
/* 80347E84 00344DC4  38 80 00 00 */	li r4, 0
/* 80347E88 00344DC8  48 0C 97 01 */	bl __dt__5CNodeFv
.L_80347E8C:
/* 80347E8C 00344DCC  7F E0 07 35 */	extsh. r0, r31
/* 80347E90 00344DD0  40 81 00 0C */	ble .L_80347E9C
/* 80347E94 00344DD4  7F C3 F3 78 */	mr r3, r30
/* 80347E98 00344DD8  4B CD C2 1D */	bl __dl__FPv
.L_80347E9C:
/* 80347E9C 00344DDC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80347EA0 00344DE0  7F C3 F3 78 */	mr r3, r30
/* 80347EA4 00344DE4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80347EA8 00344DE8  83 C1 00 08 */	lwz r30, 8(r1)
/* 80347EAC 00344DEC  7C 08 03 A6 */	mtlr r0
/* 80347EB0 00344DF0  38 21 00 10 */	addi r1, r1, 0x10
/* 80347EB4 00344DF4  4E 80 00 20 */	blr 
.endfn __dt__Q28Morimura10THurryUp2DFv

.fn __dt__Q28Morimura15THuWhitePaneSetFv, weak
/* 80347EB8 00344DF8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80347EBC 00344DFC  7C 08 02 A6 */	mflr r0
/* 80347EC0 00344E00  90 01 00 14 */	stw r0, 0x14(r1)
/* 80347EC4 00344E04  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80347EC8 00344E08  7C 9F 23 78 */	mr r31, r4
/* 80347ECC 00344E0C  93 C1 00 08 */	stw r30, 8(r1)
/* 80347ED0 00344E10  7C 7E 1B 79 */	or. r30, r3, r3
/* 80347ED4 00344E14  41 82 00 28 */	beq .L_80347EFC
/* 80347ED8 00344E18  3C A0 80 4E */	lis r5, __vt__Q28Morimura15THuWhitePaneSet@ha
/* 80347EDC 00344E1C  38 80 00 00 */	li r4, 0
/* 80347EE0 00344E20  38 05 B3 70 */	addi r0, r5, __vt__Q28Morimura15THuWhitePaneSet@l
/* 80347EE4 00344E24  90 1E 00 00 */	stw r0, 0(r30)
/* 80347EE8 00344E28  4B D0 D3 65 */	bl __dt__12J2DPictureExFv
/* 80347EEC 00344E2C  7F E0 07 35 */	extsh. r0, r31
/* 80347EF0 00344E30  40 81 00 0C */	ble .L_80347EFC
/* 80347EF4 00344E34  7F C3 F3 78 */	mr r3, r30
/* 80347EF8 00344E38  4B CD C1 BD */	bl __dl__FPv
.L_80347EFC:
/* 80347EFC 00344E3C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80347F00 00344E40  7F C3 F3 78 */	mr r3, r30
/* 80347F04 00344E44  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80347F08 00344E48  83 C1 00 08 */	lwz r30, 8(r1)
/* 80347F0C 00344E4C  7C 08 03 A6 */	mtlr r0
/* 80347F10 00344E50  38 21 00 10 */	addi r1, r1, 0x10
/* 80347F14 00344E54  4E 80 00 20 */	blr 
.endfn __dt__Q28Morimura15THuWhitePaneSetFv

.fn __sinit_hurryUp2D_cpp, local
/* 80347F18 00344E58  3C 80 80 51 */	lis r4, __float_nan@ha
/* 80347F1C 00344E5C  38 00 FF FF */	li r0, -1
/* 80347F20 00344E60  C0 04 48 B0 */	lfs f0, __float_nan@l(r4)
/* 80347F24 00344E64  3C 60 80 4E */	lis r3, govNAN___Q24Game5P2JST@ha
/* 80347F28 00344E68  90 0D 98 98 */	stw r0, gu32NAN___Q24Game5P2JST@sda21(r13)
/* 80347F2C 00344E6C  D4 03 B2 E8 */	stfsu f0, govNAN___Q24Game5P2JST@l(r3)
/* 80347F30 00344E70  D0 0D 98 9C */	stfs f0, gfNAN___Q24Game5P2JST@sda21(r13)
/* 80347F34 00344E74  D0 03 00 04 */	stfs f0, 4(r3)
/* 80347F38 00344E78  D0 03 00 08 */	stfs f0, 8(r3)
/* 80347F3C 00344E7C  4E 80 00 20 */	blr 
.endfn __sinit_hurryUp2D_cpp

.fn @24@__dt__Q28Morimura10THurryUp2DFv, weak
/* 80347F40 00344E80  38 63 FF E8 */	addi r3, r3, -24
/* 80347F44 00344E84  4B FF FE B0 */	b __dt__Q28Morimura10THurryUp2DFv
.endfn @24@__dt__Q28Morimura10THurryUp2DFv
