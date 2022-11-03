.include "macros.inc"
.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
lbl_8049B3C0:
	.asciz "demoSection.cpp"
.balign 4
lbl_8049B3D0:
	.asciz "TitleSection::init"
.balign 4
lbl_8049B3E4:
	.asciz "JMANewSinTable"
.balign 4
lbl_8049B3F4: # Shift-JIS
	.4byte 0x54485083 # "THPƒZƒNƒVƒ‡ƒ“"
	.4byte 0x5A834E83
	.4byte 0x56838783
	.2byte 0x9300
.balign 4
lbl_8049B404:
	.asciz "frameBuffer"
.balign 4
lbl_8049B410:
	.asciz "PSGame.h"
.balign 4
lbl_8049B41C:
	.asciz "P2Assert"
.balign 4
lbl_8049B428:
	.asciz "/user/yamashita/arc/demoMovieLogo_us.szs"
.balign 4
lbl_8049B454:
	.asciz "/data/timg/pikmin2_logo.bti"

.section .data, "wa"	# 0x8049E220 - 0x804EFC20
.balign 8
"sLogoLocate__Q24Demo25@unnamed@demoSection_cpp@":
	.4byte 0x0172000F
	.4byte 0x0172000F
	.4byte 0x0172000F
	.4byte 0x01720028
	.4byte 0x0172000F
	.4byte 0x0172000F
	.4byte 0x0172000F
	.4byte 0x01720028
lbl_804ED348:
	.4byte 0x00000000
	.4byte 0xFFFFFFFF
	.4byte loadResource__Q24Demo7SectionFv
.global "__vt__25Delegate<Q24Demo7Section>"
"__vt__25Delegate<Q24Demo7Section>":
	.4byte 0
	.4byte 0
	.4byte "invoke__25Delegate<Q24Demo7Section>Fv"
.global __vt__Q24Demo11HIORootNode
__vt__Q24Demo11HIORootNode:
	.4byte 0
	.4byte 0
	.4byte __dt__Q24Demo11HIORootNodeFv
	.4byte getChildCount__5CNodeFv
.global __vt__Q24Demo7Section
__vt__Q24Demo7Section:
	.4byte 0
	.4byte 0
	.4byte __dt__Q24Demo7SectionFv
	.4byte run__7SectionFv
	.4byte update__7SectionFv
	.4byte draw__7SectionFR8Graphics
	.4byte init__Q24Demo7SectionFv
	.4byte drawInit__7SectionFR8Graphics
	.4byte drawInit__7SectionFR8GraphicsQ27Section13EDrawInitMode
	.4byte doExit__Q24Demo7SectionFv
	.4byte forceFinish__7SectionFv
	.4byte forceReset__Q24Demo7SectionFv
	.4byte getCurrentSection__7SectionFv
	.4byte doLoadingStart__Q24Demo7SectionFv
	.4byte doLoading__Q24Demo7SectionFv
	.4byte doUpdate__Q24Demo7SectionFv
	.4byte doDraw__Q24Demo7SectionFR8Graphics
	.4byte isFinishable__7SectionFv
	.4byte initHIO__Q24Game14BaseHIOSectionFPQ24Game11HIORootNode
	.4byte refreshHIO__Q24Game14BaseHIOSectionFv

.section .sdata, "wa"  # 0x80514680 - 0x80514D80
.balign 8
"sMovieIndexTable__Q24Demo25@unnamed@demoSection_cpp@":
	.byte 0x05
	.byte 0x06
	.byte 0x07
	.byte 0x00
	.byte 0x08
	.byte 0x09
	.byte 0x0A
	.byte 0x00
"sMovieIndex__Q24Demo25@unnamed@demoSection_cpp@":
	.byte 0xFF
	.byte 0x00
	.byte 0x00
	.byte 0x00

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
lbl_80520AB0:
	.float 0.0
lbl_80520AB4:
	.float 0.5
lbl_80520AB8:
	.float 32768.0
lbl_80520ABC:
	.float 8.0
.balign 8
lbl_80520AC0:
	.4byte 0x43300000
	.4byte 0x80000000
.balign 8
lbl_80520AC8:
	.4byte 0x43300000
	.4byte 0x00000000

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.if version == 1
.global __ct__Q24Demo7SectionFP7JKRHeap
__ct__Q24Demo7SectionFP7JKRHeap:
/* 8044CBB8 00449AF8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8044CBBC 00449AFC  7C 08 02 A6 */	mflr r0
/* 8044CBC0 00449B00  90 01 00 14 */	stw r0, 0x14(r1)
/* 8044CBC4 00449B04  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8044CBC8 00449B08  7C 7F 1B 78 */	mr r31, r3
/* 8044CBCC 00449B0C  4B D1 80 25 */	bl __ct__Q24Game14BaseHIOSectionFP7JKRHeap
/* 8044CBD0 00449B10  3C 80 80 4F */	lis r4, __vt__Q24Demo7Section@ha
/* 8044CBD4 00449B14  38 7F 00 48 */	addi r3, r31, 0x68
/* 8044CBD8 00449B18  38 04 D3 70 */	addi r0, r4, __vt__Q24Demo7Section@l
/* 8044CBDC 00449B1C  90 1F 00 00 */	stw r0, 0(r31)
/* 8044CBE0 00449B20  4B FD 7C 39 */	bl __ct__16DvdThreadCommandFv
/* 8044CBE4 00449B24  C0 02 27 50 */	lfs f0, lbl_80520AB0@sda21(r2)
/* 8044CBE8 00449B28  38 7F 00 C0 */	addi r3, r31, 0xe0
/* 8044CBEC 00449B2C  D0 1F 00 BC */	stfs f0, 0xdc(r31)
/* 8044CBF0 00449B30  48 00 32 01 */	bl __ct__Q24Game9THPPlayerFv
/* 8044CBF4 00449B34  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8044CBF8 00449B38  7F E3 FB 78 */	mr r3, r31
/* 8044CBFC 00449B3C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8044CC00 00449B40  7C 08 03 A6 */	mtlr r0
/* 8044CC04 00449B44  38 21 00 10 */	addi r1, r1, 0x10
/* 8044CC08 00449B48  4E 80 00 20 */	blr 
.else
.global __ct__Q24Demo7SectionFP7JKRHeap
__ct__Q24Demo7SectionFP7JKRHeap:
/* 8044CBB8 00449AF8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8044CBBC 00449AFC  7C 08 02 A6 */	mflr r0
/* 8044CBC0 00449B00  90 01 00 14 */	stw r0, 0x14(r1)
/* 8044CBC4 00449B04  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8044CBC8 00449B08  7C 7F 1B 78 */	mr r31, r3
/* 8044CBCC 00449B0C  4B D1 80 25 */	bl __ct__Q24Game14BaseHIOSectionFP7JKRHeap
/* 8044CBD0 00449B10  3C 80 80 4F */	lis r4, __vt__Q24Demo7Section@ha
/* 8044CBD4 00449B14  38 7F 00 48 */	addi r3, r31, 0x48
/* 8044CBD8 00449B18  38 04 D3 70 */	addi r0, r4, __vt__Q24Demo7Section@l
/* 8044CBDC 00449B1C  90 1F 00 00 */	stw r0, 0(r31)
/* 8044CBE0 00449B20  4B FD 7C 39 */	bl __ct__16DvdThreadCommandFv
/* 8044CBE4 00449B24  C0 02 27 50 */	lfs f0, lbl_80520AB0@sda21(r2)
/* 8044CBE8 00449B28  38 7F 00 C0 */	addi r3, r31, 0xc0
/* 8044CBEC 00449B2C  D0 1F 00 BC */	stfs f0, 0xbc(r31)
/* 8044CBF0 00449B30  48 00 32 01 */	bl __ct__Q24Game9THPPlayerFv
/* 8044CBF4 00449B34  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8044CBF8 00449B38  7F E3 FB 78 */	mr r3, r31
/* 8044CBFC 00449B3C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8044CC00 00449B40  7C 08 03 A6 */	mtlr r0
/* 8044CC04 00449B44  38 21 00 10 */	addi r1, r1, 0x10
/* 8044CC08 00449B48  4E 80 00 20 */	blr 
.endif

.if version == 1
.global __dt__Q24Demo7SectionFv
__dt__Q24Demo7SectionFv:
/* 8044CC0C 00449B4C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8044CC10 00449B50  7C 08 02 A6 */	mflr r0
/* 8044CC14 00449B54  90 01 00 14 */	stw r0, 0x14(r1)
/* 8044CC18 00449B58  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8044CC1C 00449B5C  7C 9F 23 78 */	mr r31, r4
/* 8044CC20 00449B60  93 C1 00 08 */	stw r30, 8(r1)
/* 8044CC24 00449B64  7C 7E 1B 79 */	or. r30, r3, r3
/* 8044CC28 00449B68  41 82 00 50 */	beq .L_8044CC78
/* 8044CC2C 00449B6C  3C 80 80 4F */	lis r4, __vt__Q24Demo7Section@ha
/* 8044CC30 00449B70  38 7E 00 C0 */	addi r3, r30, 0xe0
/* 8044CC34 00449B74  38 04 D3 70 */	addi r0, r4, __vt__Q24Demo7Section@l
/* 8044CC38 00449B78  38 80 FF FF */	li r4, -1
/* 8044CC3C 00449B7C  90 1E 00 00 */	stw r0, 0(r30)
/* 8044CC40 00449B80  48 00 32 C9 */	bl __dt__Q24Game9THPPlayerFv
/* 8044CC44 00449B84  34 1E 00 48 */	addic. r0, r30, 0x68
/* 8044CC48 00449B88  41 82 00 14 */	beq .L_8044CC5C
/* 8044CC4C 00449B8C  34 7E 00 A4 */	addic. r3, r30, 0xc4
/* 8044CC50 00449B90  41 82 00 0C */	beq .L_8044CC5C
/* 8044CC54 00449B94  38 80 00 00 */	li r4, 0
/* 8044CC58 00449B98  4B BD 9B 79 */	bl __dt__10JSUPtrLinkFv
.L_8044CC5C:
/* 8044CC5C 00449B9C  7F C3 F3 78 */	mr r3, r30
/* 8044CC60 00449BA0  38 80 00 00 */	li r4, 0
/* 8044CC64 00449BA4  4B D1 80 4D */	bl __dt__Q24Game14BaseHIOSectionFv
/* 8044CC68 00449BA8  7F E0 07 35 */	extsh. r0, r31
/* 8044CC6C 00449BAC  40 81 00 0C */	ble .L_8044CC78
/* 8044CC70 00449BB0  7F C3 F3 78 */	mr r3, r30
/* 8044CC74 00449BB4  4B BD 74 41 */	bl __dl__FPv
.L_8044CC78:
/* 8044CC78 00449BB8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8044CC7C 00449BBC  7F C3 F3 78 */	mr r3, r30
/* 8044CC80 00449BC0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8044CC84 00449BC4  83 C1 00 08 */	lwz r30, 8(r1)
/* 8044CC88 00449BC8  7C 08 03 A6 */	mtlr r0
/* 8044CC8C 00449BCC  38 21 00 10 */	addi r1, r1, 0x10
/* 8044CC90 00449BD0  4E 80 00 20 */	blr 
.else
.global __dt__Q24Demo7SectionFv
__dt__Q24Demo7SectionFv:
/* 8044CC0C 00449B4C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8044CC10 00449B50  7C 08 02 A6 */	mflr r0
/* 8044CC14 00449B54  90 01 00 14 */	stw r0, 0x14(r1)
/* 8044CC18 00449B58  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8044CC1C 00449B5C  7C 9F 23 78 */	mr r31, r4
/* 8044CC20 00449B60  93 C1 00 08 */	stw r30, 8(r1)
/* 8044CC24 00449B64  7C 7E 1B 79 */	or. r30, r3, r3
/* 8044CC28 00449B68  41 82 00 50 */	beq .L_8044CC78
/* 8044CC2C 00449B6C  3C 80 80 4F */	lis r4, __vt__Q24Demo7Section@ha
/* 8044CC30 00449B70  38 7E 00 C0 */	addi r3, r30, 0xc0
/* 8044CC34 00449B74  38 04 D3 70 */	addi r0, r4, __vt__Q24Demo7Section@l
/* 8044CC38 00449B78  38 80 FF FF */	li r4, -1
/* 8044CC3C 00449B7C  90 1E 00 00 */	stw r0, 0(r30)
/* 8044CC40 00449B80  48 00 32 C9 */	bl __dt__Q24Game9THPPlayerFv
/* 8044CC44 00449B84  34 1E 00 48 */	addic. r0, r30, 0x48
/* 8044CC48 00449B88  41 82 00 14 */	beq .L_8044CC5C
/* 8044CC4C 00449B8C  34 7E 00 A4 */	addic. r3, r30, 0xa4
/* 8044CC50 00449B90  41 82 00 0C */	beq .L_8044CC5C
/* 8044CC54 00449B94  38 80 00 00 */	li r4, 0
/* 8044CC58 00449B98  4B BD 9B 79 */	bl __dt__10JSUPtrLinkFv
.L_8044CC5C:
/* 8044CC5C 00449B9C  7F C3 F3 78 */	mr r3, r30
/* 8044CC60 00449BA0  38 80 00 00 */	li r4, 0
/* 8044CC64 00449BA4  4B D1 80 4D */	bl __dt__Q24Game14BaseHIOSectionFv
/* 8044CC68 00449BA8  7F E0 07 35 */	extsh. r0, r31
/* 8044CC6C 00449BAC  40 81 00 0C */	ble .L_8044CC78
/* 8044CC70 00449BB0  7F C3 F3 78 */	mr r3, r30
/* 8044CC74 00449BB4  4B BD 74 41 */	bl __dl__FPv
.L_8044CC78:
/* 8044CC78 00449BB8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8044CC7C 00449BBC  7F C3 F3 78 */	mr r3, r30
/* 8044CC80 00449BC0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8044CC84 00449BC4  83 C1 00 08 */	lwz r30, 8(r1)
/* 8044CC88 00449BC8  7C 08 03 A6 */	mtlr r0
/* 8044CC8C 00449BCC  38 21 00 10 */	addi r1, r1, 0x10
/* 8044CC90 00449BD0  4E 80 00 20 */	blr 
.endif

.if version == 1
.global init__Q24Demo7SectionFv
init__Q24Demo7SectionFv:
/* 8044CC94 00449BD4  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8044CC98 00449BD8  7C 08 02 A6 */	mflr r0
/* 8044CC9C 00449BDC  3C 80 80 4A */	lis r4, lbl_8049B3C0@ha
/* 8044CCA0 00449BE0  38 A0 00 00 */	li r5, 0
/* 8044CCA4 00449BE4  90 01 00 34 */	stw r0, 0x34(r1)
/* 8044CCA8 00449BE8  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 8044CCAC 00449BEC  3B E4 B3 C0 */	addi r31, r4, lbl_8049B3C0@l
/* 8044CCB0 00449BF0  38 9F 00 10 */	addi r4, r31, 0x10
/* 8044CCB4 00449BF4  93 C1 00 28 */	stw r30, 0x28(r1)
/* 8044CCB8 00449BF8  93 A1 00 24 */	stw r29, 0x24(r1)
/* 8044CCBC 00449BFC  7C 7D 1B 78 */	mr r29, r3
/* 8044CCC0 00449C00  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8044CCC4 00449C04  4B FD 66 99 */	bl heapStatusStart__6SystemFPcP7JKRHeap
/* 8044CCC8 00449C08  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8044CCCC 00449C0C  38 9F 00 24 */	addi r4, r31, 0x24
/* 8044CCD0 00449C10  38 A0 00 00 */	li r5, 0
/* 8044CCD4 00449C14  4B FD 66 89 */	bl heapStatusStart__6SystemFPcP7JKRHeap
/* 8044CCD8 00449C18  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8044CCDC 00449C1C  38 9F 00 24 */	addi r4, r31, 0x24
/* 8044CCE0 00449C20  4B FD 66 85 */	bl heapStatusEnd__6SystemFPc
/* 8044CCE4 00449C24  38 60 00 1C */	li r3, 0x1c
/* 8044CCE8 00449C28  4B BD 71 BD */	bl __nw__FUl
/* 8044CCEC 00449C2C  7C 7E 1B 79 */	or. r30, r3, r3
/* 8044CCF0 00449C30  41 82 00 20 */	beq .L_8044CD10
/* 8044CCF4 00449C34  7F A4 EB 78 */	mr r4, r29
/* 8044CCF8 00449C38  4B D1 82 E1 */	bl __ct__Q24Game11HIORootNodeFP7Section
/* 8044CCFC 00449C3C  3C 60 80 4F */	lis r3, __vt__Q24Demo11HIORootNode@ha
/* 8044CD00 00449C40  38 1F 00 34 */	addi r0, r31, 0x34
/* 8044CD04 00449C44  38 63 D3 60 */	addi r3, r3, __vt__Q24Demo11HIORootNode@l
/* 8044CD08 00449C48  90 7E 00 00 */	stw r3, 0(r30)
/* 8044CD0C 00449C4C  90 1E 00 14 */	stw r0, 0x14(r30)
.L_8044CD10:
/* 8044CD10 00449C50  7F A3 EB 78 */	mr r3, r29
/* 8044CD14 00449C54  7F C4 F3 78 */	mr r4, r30
/* 8044CD18 00449C58  81 9D 00 00 */	lwz r12, 0(r29)
/* 8044CD1C 00449C5C  81 8C 00 48 */	lwz r12, 0x48(r12)
/* 8044CD20 00449C60  7D 89 03 A6 */	mtctr r12
/* 8044CD24 00449C64  4E 80 04 21 */	bctrl 
/* 8044CD28 00449C68  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8044CD2C 00449C6C  38 9F 00 44 */	addi r4, r31, 0x44
/* 8044CD30 00449C70  38 A0 00 00 */	li r5, 0
/* 8044CD34 00449C74  4B FD 66 29 */	bl heapStatusStart__6SystemFPcP7JKRHeap
/* 8044CD38 00449C78  80 9D 00 1C */	lwz r4, 0x1c(r29)
/* 8044CD3C 00449C7C  38 60 00 00 */	li r3, 0
/* 8044CD40 00449C80  38 A0 00 02 */	li r5, 2
/* 8044CD44 00449C84  38 C0 00 00 */	li r6, 0
/* 8044CD48 00449C88  4B C3 CD E1 */	bl createManager__10JFWDisplayFPC16_GXRenderModeObjP7JKRHeapQ26JUTXfb10EXfbNumberb
/* 8044CD4C 00449C8C  7C 64 1B 78 */	mr r4, r3
/* 8044CD50 00449C90  7F A3 EB 78 */	mr r3, r29
/* 8044CD54 00449C94  38 A0 00 01 */	li r5, 1
/* 8044CD58 00449C98  4B D1 80 7D */	bl setDisplay__Q24Game14BaseHIOSectionFP10JFWDisplayi
/* 8044CD5C 00449C9C  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8044CD60 00449CA0  38 9F 00 44 */	addi r4, r31, 0x44
/* 8044CD64 00449CA4  4B FD 66 01 */	bl heapStatusEnd__6SystemFPc
/* 8044CD68 00449CA8  38 60 00 B0 */	li r3, 0xb0
/* 8044CD6C 00449CAC  4B BD 71 39 */	bl __nw__FUl
/* 8044CD70 00449CB0  7C 60 1B 79 */	or. r0, r3, r3
/* 8044CD74 00449CB4  41 82 00 10 */	beq .L_8044CD84
/* 8044CD78 00449CB8  38 80 00 00 */	li r4, 0
/* 8044CD7C 00449CBC  4B FD 80 D9 */	bl __ct__10ControllerFQ210JUTGamePad8EPadPort
/* 8044CD80 00449CC0  7C 60 1B 78 */	mr r0, r3
.L_8044CD84:
/* 8044CD84 00449CC4  90 1D 00 B8 */	stw r0, 0xd8(r29)
/* 8044CD88 00449CC8  38 80 00 02 */	li r4, 2
/* 8044CD8C 00449CCC  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8044CD90 00449CD0  4B FD 67 9D */	bl setFrameRate__6SystemFi
/* 8044CD94 00449CD4  80 9D 00 1C */	lwz r4, 0x1c(r29)
/* 8044CD98 00449CD8  38 7D 00 C0 */	addi r3, r29, 0xe0
/* 8044CD9C 00449CDC  48 00 36 29 */	bl init__Q24Game9THPPlayerFP7JKRHeap
/* 8044CDA0 00449CE0  7F A3 EB 78 */	mr r3, r29
/* 8044CDA4 00449CE4  38 9D 00 D8 */	addi r4, r29, 0xf8
/* 8044CDA8 00449CE8  4B D1 82 09 */	bl addGenNode__Q24Game14BaseHIOSectionFP5CNode
/* 8044CDAC 00449CEC  C0 02 27 54 */	lfs f0, lbl_80520AB4@sda21(r2)
/* 8044CDB0 00449CF0  38 00 00 00 */	li r0, 0
/* 8044CDB4 00449CF4  D0 1D 00 30 */	stfs f0, 0x30(r29)
/* 8044CDB8 00449CF8  80 6D 88 F8 */	lwz r3, sManager__10JUTProcBar@sda21(r13)
/* 8044CDBC 00449CFC  98 03 01 0C */	stb r0, 0x10c(r3)
/* 8044CDC0 00449D00  80 6D 88 F8 */	lwz r3, sManager__10JUTProcBar@sda21(r13)
/* 8044CDC4 00449D04  98 03 01 30 */	stb r0, 0x130(r3)
/* 8044CDC8 00449D08  88 0D 86 A8 */	lbz r0, "sMovieIndex__Q24Demo25@unnamed@demoSection_cpp@"@sda21(r13)
/* 8044CDCC 00449D0C  7C 00 07 74 */	extsb r0, r0
/* 8044CDD0 00449D10  2C 00 FF FF */	cmpwi r0, -1
/* 8044CDD4 00449D14  40 82 00 44 */	bne .L_8044CE18
/* 8044CDD8 00449D18  4B C7 C7 C9 */	bl rand
/* 8044CDDC 00449D1C  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 8044CDE0 00449D20  3C 00 43 30 */	lis r0, 0x4330
/* 8044CDE4 00449D24  90 61 00 0C */	stw r3, 0xc(r1)
/* 8044CDE8 00449D28  C8 62 27 60 */	lfd f3, lbl_80520AC0@sda21(r2)
/* 8044CDEC 00449D2C  90 01 00 08 */	stw r0, 8(r1)
/* 8044CDF0 00449D30  C0 22 27 58 */	lfs f1, lbl_80520AB8@sda21(r2)
/* 8044CDF4 00449D34  C8 41 00 08 */	lfd f2, 8(r1)
/* 8044CDF8 00449D38  C0 02 27 5C */	lfs f0, lbl_80520ABC@sda21(r2)
/* 8044CDFC 00449D3C  EC 42 18 28 */	fsubs f2, f2, f3
/* 8044CE00 00449D40  EC 22 08 24 */	fdivs f1, f2, f1
/* 8044CE04 00449D44  EC 00 00 72 */	fmuls f0, f0, f1
/* 8044CE08 00449D48  FC 00 00 1E */	fctiwz f0, f0
/* 8044CE0C 00449D4C  D8 01 00 10 */	stfd f0, 0x10(r1)
/* 8044CE10 00449D50  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8044CE14 00449D54  98 0D 86 A8 */	stb r0, "sMovieIndex__Q24Demo25@unnamed@demoSection_cpp@"@sda21(r13)
.L_8044CE18:
/* 8044CE18 00449D58  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8044CE1C 00449D5C  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 8044CE20 00449D60  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 8044CE24 00449D64  83 A1 00 24 */	lwz r29, 0x24(r1)
/* 8044CE28 00449D68  7C 08 03 A6 */	mtlr r0
/* 8044CE2C 00449D6C  38 21 00 30 */	addi r1, r1, 0x30
/* 8044CE30 00449D70  4E 80 00 20 */	blr 
.else
.global init__Q24Demo7SectionFv
init__Q24Demo7SectionFv:
/* 8044CC94 00449BD4  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8044CC98 00449BD8  7C 08 02 A6 */	mflr r0
/* 8044CC9C 00449BDC  3C 80 80 4A */	lis r4, lbl_8049B3C0@ha
/* 8044CCA0 00449BE0  38 A0 00 00 */	li r5, 0
/* 8044CCA4 00449BE4  90 01 00 34 */	stw r0, 0x34(r1)
/* 8044CCA8 00449BE8  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 8044CCAC 00449BEC  3B E4 B3 C0 */	addi r31, r4, lbl_8049B3C0@l
/* 8044CCB0 00449BF0  38 9F 00 10 */	addi r4, r31, 0x10
/* 8044CCB4 00449BF4  93 C1 00 28 */	stw r30, 0x28(r1)
/* 8044CCB8 00449BF8  93 A1 00 24 */	stw r29, 0x24(r1)
/* 8044CCBC 00449BFC  7C 7D 1B 78 */	mr r29, r3
/* 8044CCC0 00449C00  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8044CCC4 00449C04  4B FD 66 99 */	bl heapStatusStart__6SystemFPcP7JKRHeap
/* 8044CCC8 00449C08  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8044CCCC 00449C0C  38 9F 00 24 */	addi r4, r31, 0x24
/* 8044CCD0 00449C10  38 A0 00 00 */	li r5, 0
/* 8044CCD4 00449C14  4B FD 66 89 */	bl heapStatusStart__6SystemFPcP7JKRHeap
/* 8044CCD8 00449C18  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8044CCDC 00449C1C  38 9F 00 24 */	addi r4, r31, 0x24
/* 8044CCE0 00449C20  4B FD 66 85 */	bl heapStatusEnd__6SystemFPc
/* 8044CCE4 00449C24  38 60 00 1C */	li r3, 0x1c
/* 8044CCE8 00449C28  4B BD 71 BD */	bl __nw__FUl
/* 8044CCEC 00449C2C  7C 7E 1B 79 */	or. r30, r3, r3
/* 8044CCF0 00449C30  41 82 00 20 */	beq .L_8044CD10
/* 8044CCF4 00449C34  7F A4 EB 78 */	mr r4, r29
/* 8044CCF8 00449C38  4B D1 82 E1 */	bl __ct__Q24Game11HIORootNodeFP7Section
/* 8044CCFC 00449C3C  3C 60 80 4F */	lis r3, __vt__Q24Demo11HIORootNode@ha
/* 8044CD00 00449C40  38 1F 00 34 */	addi r0, r31, 0x34
/* 8044CD04 00449C44  38 63 D3 60 */	addi r3, r3, __vt__Q24Demo11HIORootNode@l
/* 8044CD08 00449C48  90 7E 00 00 */	stw r3, 0(r30)
/* 8044CD0C 00449C4C  90 1E 00 14 */	stw r0, 0x14(r30)
.L_8044CD10:
/* 8044CD10 00449C50  7F A3 EB 78 */	mr r3, r29
/* 8044CD14 00449C54  7F C4 F3 78 */	mr r4, r30
/* 8044CD18 00449C58  81 9D 00 00 */	lwz r12, 0(r29)
/* 8044CD1C 00449C5C  81 8C 00 48 */	lwz r12, 0x48(r12)
/* 8044CD20 00449C60  7D 89 03 A6 */	mtctr r12
/* 8044CD24 00449C64  4E 80 04 21 */	bctrl 
/* 8044CD28 00449C68  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8044CD2C 00449C6C  38 9F 00 44 */	addi r4, r31, 0x44
/* 8044CD30 00449C70  38 A0 00 00 */	li r5, 0
/* 8044CD34 00449C74  4B FD 66 29 */	bl heapStatusStart__6SystemFPcP7JKRHeap
/* 8044CD38 00449C78  80 9D 00 1C */	lwz r4, 0x1c(r29)
/* 8044CD3C 00449C7C  38 60 00 00 */	li r3, 0
/* 8044CD40 00449C80  38 A0 00 02 */	li r5, 2
/* 8044CD44 00449C84  38 C0 00 00 */	li r6, 0
/* 8044CD48 00449C88  4B C3 CD E1 */	bl createManager__10JFWDisplayFPC16_GXRenderModeObjP7JKRHeapQ26JUTXfb10EXfbNumberb
/* 8044CD4C 00449C8C  7C 64 1B 78 */	mr r4, r3
/* 8044CD50 00449C90  7F A3 EB 78 */	mr r3, r29
/* 8044CD54 00449C94  38 A0 00 01 */	li r5, 1
/* 8044CD58 00449C98  4B D1 80 7D */	bl setDisplay__Q24Game14BaseHIOSectionFP10JFWDisplayi
/* 8044CD5C 00449C9C  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8044CD60 00449CA0  38 9F 00 44 */	addi r4, r31, 0x44
/* 8044CD64 00449CA4  4B FD 66 01 */	bl heapStatusEnd__6SystemFPc
/* 8044CD68 00449CA8  38 60 00 B0 */	li r3, 0xb0
/* 8044CD6C 00449CAC  4B BD 71 39 */	bl __nw__FUl
/* 8044CD70 00449CB0  7C 60 1B 79 */	or. r0, r3, r3
/* 8044CD74 00449CB4  41 82 00 10 */	beq .L_8044CD84
/* 8044CD78 00449CB8  38 80 00 00 */	li r4, 0
/* 8044CD7C 00449CBC  4B FD 80 D9 */	bl __ct__10ControllerFQ210JUTGamePad8EPadPort
/* 8044CD80 00449CC0  7C 60 1B 78 */	mr r0, r3
.L_8044CD84:
/* 8044CD84 00449CC4  90 1D 00 B8 */	stw r0, 0xb8(r29)
/* 8044CD88 00449CC8  38 80 00 02 */	li r4, 2
/* 8044CD8C 00449CCC  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8044CD90 00449CD0  4B FD 67 9D */	bl setFrameRate__6SystemFi
/* 8044CD94 00449CD4  80 9D 00 1C */	lwz r4, 0x1c(r29)
/* 8044CD98 00449CD8  38 7D 00 C0 */	addi r3, r29, 0xc0
/* 8044CD9C 00449CDC  48 00 36 29 */	bl init__Q24Game9THPPlayerFP7JKRHeap
/* 8044CDA0 00449CE0  7F A3 EB 78 */	mr r3, r29
/* 8044CDA4 00449CE4  38 9D 00 D8 */	addi r4, r29, 0xd8
/* 8044CDA8 00449CE8  4B D1 82 09 */	bl addGenNode__Q24Game14BaseHIOSectionFP5CNode
/* 8044CDAC 00449CEC  C0 02 27 54 */	lfs f0, lbl_80520AB4@sda21(r2)
/* 8044CDB0 00449CF0  38 00 00 00 */	li r0, 0
/* 8044CDB4 00449CF4  D0 1D 00 30 */	stfs f0, 0x30(r29)
/* 8044CDB8 00449CF8  80 6D 88 F8 */	lwz r3, sManager__10JUTProcBar@sda21(r13)
/* 8044CDBC 00449CFC  98 03 01 0C */	stb r0, 0x10c(r3)
/* 8044CDC0 00449D00  80 6D 88 F8 */	lwz r3, sManager__10JUTProcBar@sda21(r13)
/* 8044CDC4 00449D04  98 03 01 30 */	stb r0, 0x130(r3)
/* 8044CDC8 00449D08  88 0D 86 A8 */	lbz r0, "sMovieIndex__Q24Demo25@unnamed@demoSection_cpp@"@sda21(r13)
/* 8044CDCC 00449D0C  7C 00 07 74 */	extsb r0, r0
/* 8044CDD0 00449D10  2C 00 FF FF */	cmpwi r0, -1
/* 8044CDD4 00449D14  40 82 00 44 */	bne .L_8044CE18
/* 8044CDD8 00449D18  4B C7 C7 C9 */	bl rand
/* 8044CDDC 00449D1C  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 8044CDE0 00449D20  3C 00 43 30 */	lis r0, 0x4330
/* 8044CDE4 00449D24  90 61 00 0C */	stw r3, 0xc(r1)
/* 8044CDE8 00449D28  C8 62 27 60 */	lfd f3, lbl_80520AC0@sda21(r2)
/* 8044CDEC 00449D2C  90 01 00 08 */	stw r0, 8(r1)
/* 8044CDF0 00449D30  C0 22 27 58 */	lfs f1, lbl_80520AB8@sda21(r2)
/* 8044CDF4 00449D34  C8 41 00 08 */	lfd f2, 8(r1)
/* 8044CDF8 00449D38  C0 02 27 5C */	lfs f0, lbl_80520ABC@sda21(r2)
/* 8044CDFC 00449D3C  EC 42 18 28 */	fsubs f2, f2, f3
/* 8044CE00 00449D40  EC 22 08 24 */	fdivs f1, f2, f1
/* 8044CE04 00449D44  EC 00 00 72 */	fmuls f0, f0, f1
/* 8044CE08 00449D48  FC 00 00 1E */	fctiwz f0, f0
/* 8044CE0C 00449D4C  D8 01 00 10 */	stfd f0, 0x10(r1)
/* 8044CE10 00449D50  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8044CE14 00449D54  98 0D 86 A8 */	stb r0, "sMovieIndex__Q24Demo25@unnamed@demoSection_cpp@"@sda21(r13)
.L_8044CE18:
/* 8044CE18 00449D58  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8044CE1C 00449D5C  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 8044CE20 00449D60  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 8044CE24 00449D64  83 A1 00 24 */	lwz r29, 0x24(r1)
/* 8044CE28 00449D68  7C 08 03 A6 */	mtlr r0
/* 8044CE2C 00449D6C  38 21 00 30 */	addi r1, r1, 0x30
/* 8044CE30 00449D70  4E 80 00 20 */	blr 
.endif

.if version == 1
.global doDraw__Q24Demo7SectionFR8Graphics
doDraw__Q24Demo7SectionFR8Graphics:
/* 8044CE34 00449D74  94 21 FE 70 */	stwu r1, -0x190(r1)
/* 8044CE38 00449D78  7C 08 02 A6 */	mflr r0
/* 8044CE3C 00449D7C  90 01 01 94 */	stw r0, 0x194(r1)
/* 8044CE40 00449D80  93 E1 01 8C */	stw r31, 0x18c(r1)
/* 8044CE44 00449D84  7C 9F 23 78 */	mr r31, r4
/* 8044CE48 00449D88  93 C1 01 88 */	stw r30, 0x188(r1)
/* 8044CE4C 00449D8C  7C 7E 1B 78 */	mr r30, r3
/* 8044CE50 00449D90  38 7E 00 C0 */	addi r3, r30, 0xe0
/* 8044CE54 00449D94  81 9E 00 C0 */	lwz r12, 0xe0(r30)
/* 8044CE58 00449D98  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8044CE5C 00449D9C  7D 89 03 A6 */	mtctr r12
/* 8044CE60 00449DA0  4E 80 04 21 */	bctrl 
/* 8044CE64 00449DA4  38 7F 00 BC */	addi r3, r31, 0xbc
/* 8044CE68 00449DA8  81 9F 00 BC */	lwz r12, 0xbc(r31)
/* 8044CE6C 00449DAC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8044CE70 00449DB0  7D 89 03 A6 */	mtctr r12
/* 8044CE74 00449DB4  4E 80 04 21 */	bctrl 
/* 8044CE78 00449DB8  80 9E 01 AC */	lwz r4, 0x1cc(r30)
/* 8044CE7C 00449DBC  38 61 00 08 */	addi r3, r1, 8
/* 8044CE80 00449DC0  4B BE D6 91 */	bl __ct__10J2DPictureFP10JUTTexture
/* 8044CE84 00449DC4  88 8D 86 A8 */	lbz r4, "sMovieIndex__Q24Demo25@unnamed@demoSection_cpp@"@sda21(r13)
/* 8044CE88 00449DC8  3C 00 43 30 */	lis r0, 0x4330
/* 8044CE8C 00449DCC  3C 60 80 4F */	lis r3, "sLogoLocate__Q24Demo25@unnamed@demoSection_cpp@"@ha
/* 8044CE90 00449DD0  90 01 01 70 */	stw r0, 0x170(r1)
/* 8044CE94 00449DD4  7C 84 07 74 */	extsb r4, r4
/* 8044CE98 00449DD8  C8 42 27 68 */	lfd f2, lbl_80520AC8@sda21(r2)
/* 8044CE9C 00449DDC  54 84 10 3A */	slwi r4, r4, 2
/* 8044CEA0 00449DE0  38 63 D3 28 */	addi r3, r3, "sLogoLocate__Q24Demo25@unnamed@demoSection_cpp@"@l
/* 8044CEA4 00449DE4  7C 83 22 14 */	add r4, r3, r4
/* 8044CEA8 00449DE8  90 01 01 78 */	stw r0, 0x178(r1)
/* 8044CEAC 00449DEC  A0 A4 00 00 */	lhz r5, 0(r4)
/* 8044CEB0 00449DF0  38 61 00 08 */	addi r3, r1, 8
/* 8044CEB4 00449DF4  A0 04 00 02 */	lhz r0, 2(r4)
/* 8044CEB8 00449DF8  38 80 00 00 */	li r4, 0
/* 8044CEBC 00449DFC  90 A1 01 74 */	stw r5, 0x174(r1)
/* 8044CEC0 00449E00  38 A0 00 00 */	li r5, 0
/* 8044CEC4 00449E04  C0 A1 00 30 */	lfs f5, 0x30(r1)
/* 8044CEC8 00449E08  38 C0 00 00 */	li r6, 0
/* 8044CECC 00449E0C  90 01 01 7C */	stw r0, 0x17c(r1)
/* 8044CED0 00449E10  C8 21 01 70 */	lfd f1, 0x170(r1)
/* 8044CED4 00449E14  C8 01 01 78 */	lfd f0, 0x178(r1)
/* 8044CED8 00449E18  C0 61 00 28 */	lfs f3, 0x28(r1)
/* 8044CEDC 00449E1C  EC 21 10 28 */	fsubs f1, f1, f2
/* 8044CEE0 00449E20  C0 81 00 34 */	lfs f4, 0x34(r1)
/* 8044CEE4 00449E24  EC 40 10 28 */	fsubs f2, f0, f2
/* 8044CEE8 00449E28  C0 01 00 2C */	lfs f0, 0x2c(r1)
/* 8044CEEC 00449E2C  EC 65 18 28 */	fsubs f3, f5, f3
/* 8044CEF0 00449E30  EC 84 00 28 */	fsubs f4, f4, f0
/* 8044CEF4 00449E34  4B BE EC C1 */	bl draw__10J2DPictureFffffbbb
/* 8044CEF8 00449E38  38 61 00 08 */	addi r3, r1, 8
/* 8044CEFC 00449E3C  38 80 FF FF */	li r4, -1
/* 8044CF00 00449E40  4B BE DF E1 */	bl __dt__10J2DPictureFv
/* 8044CF04 00449E44  80 01 01 94 */	lwz r0, 0x194(r1)
/* 8044CF08 00449E48  83 E1 01 8C */	lwz r31, 0x18c(r1)
/* 8044CF0C 00449E4C  83 C1 01 88 */	lwz r30, 0x188(r1)
/* 8044CF10 00449E50  7C 08 03 A6 */	mtlr r0
/* 8044CF14 00449E54  38 21 01 90 */	addi r1, r1, 0x190
/* 8044CF18 00449E58  4E 80 00 20 */	blr 
.else
.global doDraw__Q24Demo7SectionFR8Graphics
doDraw__Q24Demo7SectionFR8Graphics:
/* 8044CE34 00449D74  94 21 FE 70 */	stwu r1, -0x190(r1)
/* 8044CE38 00449D78  7C 08 02 A6 */	mflr r0
/* 8044CE3C 00449D7C  90 01 01 94 */	stw r0, 0x194(r1)
/* 8044CE40 00449D80  93 E1 01 8C */	stw r31, 0x18c(r1)
/* 8044CE44 00449D84  7C 9F 23 78 */	mr r31, r4
/* 8044CE48 00449D88  93 C1 01 88 */	stw r30, 0x188(r1)
/* 8044CE4C 00449D8C  7C 7E 1B 78 */	mr r30, r3
/* 8044CE50 00449D90  38 7E 00 C0 */	addi r3, r30, 0xc0
/* 8044CE54 00449D94  81 9E 00 C0 */	lwz r12, 0xc0(r30)
/* 8044CE58 00449D98  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8044CE5C 00449D9C  7D 89 03 A6 */	mtctr r12
/* 8044CE60 00449DA0  4E 80 04 21 */	bctrl 
/* 8044CE64 00449DA4  38 7F 00 BC */	addi r3, r31, 0xbc
/* 8044CE68 00449DA8  81 9F 00 BC */	lwz r12, 0xbc(r31)
/* 8044CE6C 00449DAC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8044CE70 00449DB0  7D 89 03 A6 */	mtctr r12
/* 8044CE74 00449DB4  4E 80 04 21 */	bctrl 
/* 8044CE78 00449DB8  80 9E 01 AC */	lwz r4, 0x1ac(r30)
/* 8044CE7C 00449DBC  38 61 00 08 */	addi r3, r1, 8
/* 8044CE80 00449DC0  4B BE D6 91 */	bl __ct__10J2DPictureFP10JUTTexture
/* 8044CE84 00449DC4  88 8D 86 A8 */	lbz r4, "sMovieIndex__Q24Demo25@unnamed@demoSection_cpp@"@sda21(r13)
/* 8044CE88 00449DC8  3C 00 43 30 */	lis r0, 0x4330
/* 8044CE8C 00449DCC  3C 60 80 4F */	lis r3, "sLogoLocate__Q24Demo25@unnamed@demoSection_cpp@"@ha
/* 8044CE90 00449DD0  90 01 01 70 */	stw r0, 0x170(r1)
/* 8044CE94 00449DD4  7C 84 07 74 */	extsb r4, r4
/* 8044CE98 00449DD8  C8 42 27 68 */	lfd f2, lbl_80520AC8@sda21(r2)
/* 8044CE9C 00449DDC  54 84 10 3A */	slwi r4, r4, 2
/* 8044CEA0 00449DE0  38 63 D3 28 */	addi r3, r3, "sLogoLocate__Q24Demo25@unnamed@demoSection_cpp@"@l
/* 8044CEA4 00449DE4  7C 83 22 14 */	add r4, r3, r4
/* 8044CEA8 00449DE8  90 01 01 78 */	stw r0, 0x178(r1)
/* 8044CEAC 00449DEC  A0 A4 00 00 */	lhz r5, 0(r4)
/* 8044CEB0 00449DF0  38 61 00 08 */	addi r3, r1, 8
/* 8044CEB4 00449DF4  A0 04 00 02 */	lhz r0, 2(r4)
/* 8044CEB8 00449DF8  38 80 00 00 */	li r4, 0
/* 8044CEBC 00449DFC  90 A1 01 74 */	stw r5, 0x174(r1)
/* 8044CEC0 00449E00  38 A0 00 00 */	li r5, 0
/* 8044CEC4 00449E04  C0 A1 00 30 */	lfs f5, 0x30(r1)
/* 8044CEC8 00449E08  38 C0 00 00 */	li r6, 0
/* 8044CECC 00449E0C  90 01 01 7C */	stw r0, 0x17c(r1)
/* 8044CED0 00449E10  C8 21 01 70 */	lfd f1, 0x170(r1)
/* 8044CED4 00449E14  C8 01 01 78 */	lfd f0, 0x178(r1)
/* 8044CED8 00449E18  C0 61 00 28 */	lfs f3, 0x28(r1)
/* 8044CEDC 00449E1C  EC 21 10 28 */	fsubs f1, f1, f2
/* 8044CEE0 00449E20  C0 81 00 34 */	lfs f4, 0x34(r1)
/* 8044CEE4 00449E24  EC 40 10 28 */	fsubs f2, f0, f2
/* 8044CEE8 00449E28  C0 01 00 2C */	lfs f0, 0x2c(r1)
/* 8044CEEC 00449E2C  EC 65 18 28 */	fsubs f3, f5, f3
/* 8044CEF0 00449E30  EC 84 00 28 */	fsubs f4, f4, f0
/* 8044CEF4 00449E34  4B BE EC C1 */	bl draw__10J2DPictureFffffbbb
/* 8044CEF8 00449E38  38 61 00 08 */	addi r3, r1, 8
/* 8044CEFC 00449E3C  38 80 FF FF */	li r4, -1
/* 8044CF00 00449E40  4B BE DF E1 */	bl __dt__10J2DPictureFv
/* 8044CF04 00449E44  80 01 01 94 */	lwz r0, 0x194(r1)
/* 8044CF08 00449E48  83 E1 01 8C */	lwz r31, 0x18c(r1)
/* 8044CF0C 00449E4C  83 C1 01 88 */	lwz r30, 0x188(r1)
/* 8044CF10 00449E50  7C 08 03 A6 */	mtlr r0
/* 8044CF14 00449E54  38 21 01 90 */	addi r1, r1, 0x190
/* 8044CF18 00449E58  4E 80 00 20 */	blr 
.endif

.if version == 1
.global doUpdate__Q24Demo7SectionFv
doUpdate__Q24Demo7SectionFv:
/* 8044CF1C 00449E5C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8044CF20 00449E60  7C 08 02 A6 */	mflr r0
/* 8044CF24 00449E64  90 01 00 14 */	stw r0, 0x14(r1)
/* 8044CF28 00449E68  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8044CF2C 00449E6C  7C 7F 1B 78 */	mr r31, r3
/* 8044CF30 00449E70  80 8D 9A EC */	lwz r4, sys@sda21(r13)
/* 8044CF34 00449E74  C0 23 00 BC */	lfs f1, 0xdc(r3)
/* 8044CF38 00449E78  C0 04 00 54 */	lfs f0, 0x54(r4)
/* 8044CF3C 00449E7C  EC 01 00 2A */	fadds f0, f1, f0
/* 8044CF40 00449E80  D0 03 00 BC */	stfs f0, 0xdc(r3)
/* 8044CF44 00449E84  4B D1 80 65 */	bl doUpdate__Q24Game14BaseHIOSectionFv
/* 8044CF48 00449E88  38 7F 00 C0 */	addi r3, r31, 0xe0
/* 8044CF4C 00449E8C  48 00 39 49 */	bl isFinishPlaying__Q24Game9THPPlayerFv
/* 8044CF50 00449E90  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8044CF54 00449E94  41 82 00 0C */	beq .L_8044CF60
/* 8044CF58 00449E98  38 00 00 00 */	li r0, 0
/* 8044CF5C 00449E9C  98 1F 00 34 */	stb r0, 0x34(r31)
.L_8044CF60:
/* 8044CF60 00449EA0  80 7F 00 B8 */	lwz r3, 0xd8(r31)
/* 8044CF64 00449EA4  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 8044CF68 00449EA8  54 00 00 3F */	rotlwi. r0, r0, 0
/* 8044CF6C 00449EAC  41 82 00 28 */	beq .L_8044CF94
/* 8044CF70 00449EB0  88 1F 00 34 */	lbz r0, 0x34(r31)
/* 8044CF74 00449EB4  28 00 00 00 */	cmplwi r0, 0
/* 8044CF78 00449EB8  41 82 00 1C */	beq .L_8044CF94
/* 8044CF7C 00449EBC  80 6D 98 58 */	lwz r3, spSysIF__8PSSystem@sda21(r13)
/* 8044CF80 00449EC0  38 80 18 01 */	li r4, 0x1801
/* 8044CF84 00449EC4  38 A0 00 00 */	li r5, 0
/* 8044CF88 00449EC8  4B EE B6 A9 */	bl playSystemSe__Q28PSSystem5SysIFFUlUl
/* 8044CF8C 00449ECC  38 00 00 00 */	li r0, 0
/* 8044CF90 00449ED0  98 1F 00 34 */	stb r0, 0x34(r31)
.L_8044CF94:
/* 8044CF94 00449ED4  38 7F 00 C0 */	addi r3, r31, 0xe0
/* 8044CF98 00449ED8  48 00 34 ED */	bl play__Q24Game9THPPlayerFv
/* 8044CF9C 00449EDC  38 7F 00 C0 */	addi r3, r31, 0xe0
/* 8044CFA0 00449EE0  81 9F 00 C0 */	lwz r12, 0xe0(r31)
/* 8044CFA4 00449EE4  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8044CFA8 00449EE8  7D 89 03 A6 */	mtctr r12
/* 8044CFAC 00449EEC  4E 80 04 21 */	bctrl 
/* 8044CFB0 00449EF0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8044CFB4 00449EF4  88 7F 00 34 */	lbz r3, 0x34(r31)
/* 8044CFB8 00449EF8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8044CFBC 00449EFC  7C 08 03 A6 */	mtlr r0
/* 8044CFC0 00449F00  38 21 00 10 */	addi r1, r1, 0x10
/* 8044CFC4 00449F04  4E 80 00 20 */	blr 
.else
.global doUpdate__Q24Demo7SectionFv
doUpdate__Q24Demo7SectionFv:
/* 8044CF1C 00449E5C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8044CF20 00449E60  7C 08 02 A6 */	mflr r0
/* 8044CF24 00449E64  90 01 00 14 */	stw r0, 0x14(r1)
/* 8044CF28 00449E68  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8044CF2C 00449E6C  7C 7F 1B 78 */	mr r31, r3
/* 8044CF30 00449E70  80 8D 9A EC */	lwz r4, sys@sda21(r13)
/* 8044CF34 00449E74  C0 23 00 BC */	lfs f1, 0xbc(r3)
/* 8044CF38 00449E78  C0 04 00 54 */	lfs f0, 0x54(r4)
/* 8044CF3C 00449E7C  EC 01 00 2A */	fadds f0, f1, f0
/* 8044CF40 00449E80  D0 03 00 BC */	stfs f0, 0xbc(r3)
/* 8044CF44 00449E84  4B D1 80 65 */	bl doUpdate__Q24Game14BaseHIOSectionFv
/* 8044CF48 00449E88  38 7F 00 C0 */	addi r3, r31, 0xc0
/* 8044CF4C 00449E8C  48 00 39 49 */	bl isFinishPlaying__Q24Game9THPPlayerFv
/* 8044CF50 00449E90  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8044CF54 00449E94  41 82 00 0C */	beq .L_8044CF60
/* 8044CF58 00449E98  38 00 00 00 */	li r0, 0
/* 8044CF5C 00449E9C  98 1F 00 34 */	stb r0, 0x34(r31)
.L_8044CF60:
/* 8044CF60 00449EA0  80 7F 00 B8 */	lwz r3, 0xb8(r31)
/* 8044CF64 00449EA4  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 8044CF68 00449EA8  54 00 00 3F */	rotlwi. r0, r0, 0
/* 8044CF6C 00449EAC  41 82 00 28 */	beq .L_8044CF94
/* 8044CF70 00449EB0  88 1F 00 34 */	lbz r0, 0x34(r31)
/* 8044CF74 00449EB4  28 00 00 00 */	cmplwi r0, 0
/* 8044CF78 00449EB8  41 82 00 1C */	beq .L_8044CF94
/* 8044CF7C 00449EBC  80 6D 98 58 */	lwz r3, spSysIF__8PSSystem@sda21(r13)
/* 8044CF80 00449EC0  38 80 18 01 */	li r4, 0x1801
/* 8044CF84 00449EC4  38 A0 00 00 */	li r5, 0
/* 8044CF88 00449EC8  4B EE B6 A9 */	bl playSystemSe__Q28PSSystem5SysIFFUlUl
/* 8044CF8C 00449ECC  38 00 00 00 */	li r0, 0
/* 8044CF90 00449ED0  98 1F 00 34 */	stb r0, 0x34(r31)
.L_8044CF94:
/* 8044CF94 00449ED4  38 7F 00 C0 */	addi r3, r31, 0xc0
/* 8044CF98 00449ED8  48 00 34 ED */	bl play__Q24Game9THPPlayerFv
/* 8044CF9C 00449EDC  38 7F 00 C0 */	addi r3, r31, 0xc0
/* 8044CFA0 00449EE0  81 9F 00 C0 */	lwz r12, 0xc0(r31)
/* 8044CFA4 00449EE4  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8044CFA8 00449EE8  7D 89 03 A6 */	mtctr r12
/* 8044CFAC 00449EEC  4E 80 04 21 */	bctrl 
/* 8044CFB0 00449EF0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8044CFB4 00449EF4  88 7F 00 34 */	lbz r3, 0x34(r31)
/* 8044CFB8 00449EF8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8044CFBC 00449EFC  7C 08 03 A6 */	mtlr r0
/* 8044CFC0 00449F00  38 21 00 10 */	addi r1, r1, 0x10
/* 8044CFC4 00449F04  4E 80 00 20 */	blr 
.endif

.if version == 1
.global doExit__Q24Demo7SectionFv
doExit__Q24Demo7SectionFv:
/* 8044CFC8 00449F08  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8044CFCC 00449F0C  7C 08 02 A6 */	mflr r0
/* 8044CFD0 00449F10  90 01 00 14 */	stw r0, 0x14(r1)
/* 8044CFD4 00449F14  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8044CFD8 00449F18  93 C1 00 08 */	stw r30, 8(r1)
/* 8044CFDC 00449F1C  7C 7E 1B 78 */	mr r30, r3
/* 8044CFE0 00449F20  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 8044CFE4 00449F24  28 00 00 00 */	cmplwi r0, 0
/* 8044CFE8 00449F28  40 82 00 20 */	bne .L_8044D008
/* 8044CFEC 00449F2C  3C 60 80 4A */	lis r3, lbl_8049B410@ha
/* 8044CFF0 00449F30  3C A0 80 4A */	lis r5, lbl_8049B41C@ha
/* 8044CFF4 00449F34  38 63 B4 10 */	addi r3, r3, lbl_8049B410@l
/* 8044CFF8 00449F38  38 80 01 D3 */	li r4, 0x1d3
/* 8044CFFC 00449F3C  38 A5 B4 1C */	addi r5, r5, lbl_8049B41C@l
/* 8044D000 00449F40  4C C6 31 82 */	crclr 6
/* 8044D004 00449F44  4B BD D6 3D */	bl panic_f__12JUTExceptionFPCciPCce
.L_8044D008:
/* 8044D008 00449F48  83 ED 98 80 */	lwz r31, spSceneMgr__8PSSystem@sda21(r13)
/* 8044D00C 00449F4C  28 1F 00 00 */	cmplwi r31, 0
/* 8044D010 00449F50  40 82 00 20 */	bne .L_8044D030
/* 8044D014 00449F54  3C 60 80 4A */	lis r3, lbl_8049B410@ha
/* 8044D018 00449F58  3C A0 80 4A */	lis r5, lbl_8049B41C@ha
/* 8044D01C 00449F5C  38 63 B4 10 */	addi r3, r3, lbl_8049B410@l
/* 8044D020 00449F60  38 80 01 DC */	li r4, 0x1dc
/* 8044D024 00449F64  38 A5 B4 1C */	addi r5, r5, lbl_8049B41C@l
/* 8044D028 00449F68  4C C6 31 82 */	crclr 6
/* 8044D02C 00449F6C  4B BD D6 15 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8044D030:
/* 8044D030 00449F70  7F E3 FB 78 */	mr r3, r31
/* 8044D034 00449F74  4B EF 51 AD */	bl deleteCurrentScene__Q28PSSystem8SceneMgrFv
/* 8044D038 00449F78  88 6D 86 A8 */	lbz r3, "sMovieIndex__Q24Demo25@unnamed@demoSection_cpp@"@sda21(r13)
/* 8044D03C 00449F7C  38 63 00 01 */	addi r3, r3, 1
/* 8044D040 00449F80  7C 60 07 74 */	extsb r0, r3
/* 8044D044 00449F84  98 6D 86 A8 */	stb r3, "sMovieIndex__Q24Demo25@unnamed@demoSection_cpp@"@sda21(r13)
/* 8044D048 00449F88  28 00 00 08 */	cmplwi r0, 8
/* 8044D04C 00449F8C  41 80 00 0C */	blt .L_8044D058
/* 8044D050 00449F90  38 00 00 00 */	li r0, 0
/* 8044D054 00449F94  98 0D 86 A8 */	stb r0, "sMovieIndex__Q24Demo25@unnamed@demoSection_cpp@"@sda21(r13)
.L_8044D058:
/* 8044D058 00449F98  38 7E 00 C0 */	addi r3, r30, 0xe0
/* 8044D05C 00449F9C  48 00 35 01 */	bl stop__Q24Game9THPPlayerFv
/* 8044D060 00449FA0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8044D064 00449FA4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8044D068 00449FA8  83 C1 00 08 */	lwz r30, 8(r1)
/* 8044D06C 00449FAC  7C 08 03 A6 */	mtlr r0
/* 8044D070 00449FB0  38 21 00 10 */	addi r1, r1, 0x10
/* 8044D074 00449FB4  4E 80 00 20 */	blr 
.else
.global doExit__Q24Demo7SectionFv
doExit__Q24Demo7SectionFv:
/* 8044CFC8 00449F08  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8044CFCC 00449F0C  7C 08 02 A6 */	mflr r0
/* 8044CFD0 00449F10  90 01 00 14 */	stw r0, 0x14(r1)
/* 8044CFD4 00449F14  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8044CFD8 00449F18  93 C1 00 08 */	stw r30, 8(r1)
/* 8044CFDC 00449F1C  7C 7E 1B 78 */	mr r30, r3
/* 8044CFE0 00449F20  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 8044CFE4 00449F24  28 00 00 00 */	cmplwi r0, 0
/* 8044CFE8 00449F28  40 82 00 20 */	bne .L_8044D008
/* 8044CFEC 00449F2C  3C 60 80 4A */	lis r3, lbl_8049B410@ha
/* 8044CFF0 00449F30  3C A0 80 4A */	lis r5, lbl_8049B41C@ha
/* 8044CFF4 00449F34  38 63 B4 10 */	addi r3, r3, lbl_8049B410@l
/* 8044CFF8 00449F38  38 80 01 D3 */	li r4, 0x1d3
/* 8044CFFC 00449F3C  38 A5 B4 1C */	addi r5, r5, lbl_8049B41C@l
/* 8044D000 00449F40  4C C6 31 82 */	crclr 6
/* 8044D004 00449F44  4B BD D6 3D */	bl panic_f__12JUTExceptionFPCciPCce
.L_8044D008:
/* 8044D008 00449F48  83 ED 98 80 */	lwz r31, spSceneMgr__8PSSystem@sda21(r13)
/* 8044D00C 00449F4C  28 1F 00 00 */	cmplwi r31, 0
/* 8044D010 00449F50  40 82 00 20 */	bne .L_8044D030
/* 8044D014 00449F54  3C 60 80 4A */	lis r3, lbl_8049B410@ha
/* 8044D018 00449F58  3C A0 80 4A */	lis r5, lbl_8049B41C@ha
/* 8044D01C 00449F5C  38 63 B4 10 */	addi r3, r3, lbl_8049B410@l
/* 8044D020 00449F60  38 80 01 DC */	li r4, 0x1dc
/* 8044D024 00449F64  38 A5 B4 1C */	addi r5, r5, lbl_8049B41C@l
/* 8044D028 00449F68  4C C6 31 82 */	crclr 6
/* 8044D02C 00449F6C  4B BD D6 15 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8044D030:
/* 8044D030 00449F70  7F E3 FB 78 */	mr r3, r31
/* 8044D034 00449F74  4B EF 51 AD */	bl deleteCurrentScene__Q28PSSystem8SceneMgrFv
/* 8044D038 00449F78  88 6D 86 A8 */	lbz r3, "sMovieIndex__Q24Demo25@unnamed@demoSection_cpp@"@sda21(r13)
/* 8044D03C 00449F7C  38 63 00 01 */	addi r3, r3, 1
/* 8044D040 00449F80  7C 60 07 74 */	extsb r0, r3
/* 8044D044 00449F84  98 6D 86 A8 */	stb r3, "sMovieIndex__Q24Demo25@unnamed@demoSection_cpp@"@sda21(r13)
/* 8044D048 00449F88  28 00 00 08 */	cmplwi r0, 8
/* 8044D04C 00449F8C  41 80 00 0C */	blt .L_8044D058
/* 8044D050 00449F90  38 00 00 00 */	li r0, 0
/* 8044D054 00449F94  98 0D 86 A8 */	stb r0, "sMovieIndex__Q24Demo25@unnamed@demoSection_cpp@"@sda21(r13)
.L_8044D058:
/* 8044D058 00449F98  38 7E 00 C0 */	addi r3, r30, 0xc0
/* 8044D05C 00449F9C  48 00 35 01 */	bl stop__Q24Game9THPPlayerFv
/* 8044D060 00449FA0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8044D064 00449FA4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8044D068 00449FA8  83 C1 00 08 */	lwz r30, 8(r1)
/* 8044D06C 00449FAC  7C 08 03 A6 */	mtlr r0
/* 8044D070 00449FB0  38 21 00 10 */	addi r1, r1, 0x10
/* 8044D074 00449FB4  4E 80 00 20 */	blr 
.endif

.if version == 1
.global doLoadingStart__Q24Demo7SectionFv
doLoadingStart__Q24Demo7SectionFv:
/* 8044D078 00449FB8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8044D07C 00449FBC  7C 08 02 A6 */	mflr r0
/* 8044D080 00449FC0  38 8D 86 A0 */	addi r4, r13, "sMovieIndexTable__Q24Demo25@unnamed@demoSection_cpp@"@sda21
/* 8044D084 00449FC4  90 01 00 24 */	stw r0, 0x24(r1)
/* 8044D088 00449FC8  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8044D08C 00449FCC  7C 7F 1B 78 */	mr r31, r3
/* 8044D090 00449FD0  38 7F 00 C0 */	addi r3, r31, 0xe0
/* 8044D094 00449FD4  88 0D 86 A8 */	lbz r0, "sMovieIndex__Q24Demo25@unnamed@demoSection_cpp@"@sda21(r13)
/* 8044D098 00449FD8  7C 00 07 74 */	extsb r0, r0
/* 8044D09C 00449FDC  7C 84 00 AE */	lbzx r4, r4, r0
/* 8044D0A0 00449FE0  48 00 2F 01 */	bl load__Q24Game9THPPlayerFQ34Game9THPPlayer11EMovieIndex
/* 8044D0A4 00449FE4  38 60 00 14 */	li r3, 0x14
/* 8044D0A8 00449FE8  4B BD 6D FD */	bl __nw__FUl
/* 8044D0AC 00449FEC  7C 65 1B 79 */	or. r5, r3, r3
/* 8044D0B0 00449FF0  41 82 00 4C */	beq .L_8044D0FC
/* 8044D0B4 00449FF4  3C 60 80 4F */	lis r3, lbl_804ED348@ha
/* 8044D0B8 00449FF8  3C 80 80 4B */	lis r4, __vt__9IDelegate@ha
/* 8044D0BC 00449FFC  39 03 D3 48 */	addi r8, r3, lbl_804ED348@l
/* 8044D0C0 0044A000  3C 60 80 4F */	lis r3, "__vt__25Delegate<Q24Demo7Section>"@ha
/* 8044D0C4 0044A004  80 E8 00 00 */	lwz r7, 0(r8)
/* 8044D0C8 0044A008  38 84 0F 00 */	addi r4, r4, __vt__9IDelegate@l
/* 8044D0CC 0044A00C  80 C8 00 04 */	lwz r6, 4(r8)
/* 8044D0D0 0044A010  38 03 D3 54 */	addi r0, r3, "__vt__25Delegate<Q24Demo7Section>"@l
/* 8044D0D4 0044A014  80 68 00 08 */	lwz r3, 8(r8)
/* 8044D0D8 0044A018  90 E1 00 08 */	stw r7, 8(r1)
/* 8044D0DC 0044A01C  90 85 00 00 */	stw r4, 0(r5)
/* 8044D0E0 0044A020  90 05 00 00 */	stw r0, 0(r5)
/* 8044D0E4 0044A024  93 E5 00 04 */	stw r31, 4(r5)
/* 8044D0E8 0044A028  90 E5 00 08 */	stw r7, 8(r5)
/* 8044D0EC 0044A02C  90 C5 00 0C */	stw r6, 0xc(r5)
/* 8044D0F0 0044A030  90 C1 00 0C */	stw r6, 0xc(r1)
/* 8044D0F4 0044A034  90 61 00 10 */	stw r3, 0x10(r1)
/* 8044D0F8 0044A038  90 65 00 10 */	stw r3, 0x10(r5)
.L_8044D0FC:
/* 8044D0FC 0044A03C  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8044D100 0044A040  38 9F 00 48 */	addi r4, r31, 0x68
/* 8044D104 0044A044  4B FD 5E 35 */	bl dvdLoadUseCallBack__6SystemFP16DvdThreadCommandP9IDelegate
/* 8044D108 0044A048  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8044D10C 0044A04C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8044D110 0044A050  7C 08 03 A6 */	mtlr r0
/* 8044D114 0044A054  38 21 00 20 */	addi r1, r1, 0x20
/* 8044D118 0044A058  4E 80 00 20 */	blr 
.else
.global doLoadingStart__Q24Demo7SectionFv
doLoadingStart__Q24Demo7SectionFv:
/* 8044D078 00449FB8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8044D07C 00449FBC  7C 08 02 A6 */	mflr r0
/* 8044D080 00449FC0  38 8D 86 A0 */	addi r4, r13, "sMovieIndexTable__Q24Demo25@unnamed@demoSection_cpp@"@sda21
/* 8044D084 00449FC4  90 01 00 24 */	stw r0, 0x24(r1)
/* 8044D088 00449FC8  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8044D08C 00449FCC  7C 7F 1B 78 */	mr r31, r3
/* 8044D090 00449FD0  38 7F 00 C0 */	addi r3, r31, 0xc0
/* 8044D094 00449FD4  88 0D 86 A8 */	lbz r0, "sMovieIndex__Q24Demo25@unnamed@demoSection_cpp@"@sda21(r13)
/* 8044D098 00449FD8  7C 00 07 74 */	extsb r0, r0
/* 8044D09C 00449FDC  7C 84 00 AE */	lbzx r4, r4, r0
/* 8044D0A0 00449FE0  48 00 2F 01 */	bl load__Q24Game9THPPlayerFQ34Game9THPPlayer11EMovieIndex
/* 8044D0A4 00449FE4  38 60 00 14 */	li r3, 0x14
/* 8044D0A8 00449FE8  4B BD 6D FD */	bl __nw__FUl
/* 8044D0AC 00449FEC  7C 65 1B 79 */	or. r5, r3, r3
/* 8044D0B0 00449FF0  41 82 00 4C */	beq .L_8044D0FC
/* 8044D0B4 00449FF4  3C 60 80 4F */	lis r3, lbl_804ED348@ha
/* 8044D0B8 00449FF8  3C 80 80 4B */	lis r4, __vt__9IDelegate@ha
/* 8044D0BC 00449FFC  39 03 D3 48 */	addi r8, r3, lbl_804ED348@l
/* 8044D0C0 0044A000  3C 60 80 4F */	lis r3, "__vt__25Delegate<Q24Demo7Section>"@ha
/* 8044D0C4 0044A004  80 E8 00 00 */	lwz r7, 0(r8)
/* 8044D0C8 0044A008  38 84 0F 00 */	addi r4, r4, __vt__9IDelegate@l
/* 8044D0CC 0044A00C  80 C8 00 04 */	lwz r6, 4(r8)
/* 8044D0D0 0044A010  38 03 D3 54 */	addi r0, r3, "__vt__25Delegate<Q24Demo7Section>"@l
/* 8044D0D4 0044A014  80 68 00 08 */	lwz r3, 8(r8)
/* 8044D0D8 0044A018  90 E1 00 08 */	stw r7, 8(r1)
/* 8044D0DC 0044A01C  90 85 00 00 */	stw r4, 0(r5)
/* 8044D0E0 0044A020  90 05 00 00 */	stw r0, 0(r5)
/* 8044D0E4 0044A024  93 E5 00 04 */	stw r31, 4(r5)
/* 8044D0E8 0044A028  90 E5 00 08 */	stw r7, 8(r5)
/* 8044D0EC 0044A02C  90 C5 00 0C */	stw r6, 0xc(r5)
/* 8044D0F0 0044A030  90 C1 00 0C */	stw r6, 0xc(r1)
/* 8044D0F4 0044A034  90 61 00 10 */	stw r3, 0x10(r1)
/* 8044D0F8 0044A038  90 65 00 10 */	stw r3, 0x10(r5)
.L_8044D0FC:
/* 8044D0FC 0044A03C  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8044D100 0044A040  38 9F 00 48 */	addi r4, r31, 0x48
/* 8044D104 0044A044  4B FD 5E 35 */	bl dvdLoadUseCallBack__6SystemFP16DvdThreadCommandP9IDelegate
/* 8044D108 0044A048  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8044D10C 0044A04C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8044D110 0044A050  7C 08 03 A6 */	mtlr r0
/* 8044D114 0044A054  38 21 00 20 */	addi r1, r1, 0x20
/* 8044D118 0044A058  4E 80 00 20 */	blr 
.endif

.if version == 1
.global doLoading__Q24Demo7SectionFv
doLoading__Q24Demo7SectionFv:
/* 8044D11C 0044A05C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8044D120 0044A060  7C 08 02 A6 */	mflr r0
/* 8044D124 0044A064  7C 64 1B 78 */	mr r4, r3
/* 8044D128 0044A068  90 01 00 14 */	stw r0, 0x14(r1)
/* 8044D12C 0044A06C  38 84 00 48 */	addi r4, r4, 0x68
/* 8044D130 0044A070  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8044D134 0044A074  4B FD 64 A1 */	bl dvdLoadSyncNoBlock__6SystemFP16DvdThreadCommand
/* 8044D138 0044A078  54 60 06 3E */	clrlwi r0, r3, 0x18
/* 8044D13C 0044A07C  7C 00 00 34 */	cntlzw r0, r0
/* 8044D140 0044A080  54 03 D9 7E */	srwi r3, r0, 5
/* 8044D144 0044A084  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8044D148 0044A088  7C 08 03 A6 */	mtlr r0
/* 8044D14C 0044A08C  38 21 00 10 */	addi r1, r1, 0x10
/* 8044D150 0044A090  4E 80 00 20 */	blr 
.else
.global doLoading__Q24Demo7SectionFv
doLoading__Q24Demo7SectionFv:
/* 8044D11C 0044A05C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8044D120 0044A060  7C 08 02 A6 */	mflr r0
/* 8044D124 0044A064  7C 64 1B 78 */	mr r4, r3
/* 8044D128 0044A068  90 01 00 14 */	stw r0, 0x14(r1)
/* 8044D12C 0044A06C  38 84 00 48 */	addi r4, r4, 0x48
/* 8044D130 0044A070  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8044D134 0044A074  4B FD 64 A1 */	bl dvdLoadSyncNoBlock__6SystemFP16DvdThreadCommand
/* 8044D138 0044A078  54 60 06 3E */	clrlwi r0, r3, 0x18
/* 8044D13C 0044A07C  7C 00 00 34 */	cntlzw r0, r0
/* 8044D140 0044A080  54 03 D9 7E */	srwi r3, r0, 5
/* 8044D144 0044A084  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8044D148 0044A088  7C 08 03 A6 */	mtlr r0
/* 8044D14C 0044A08C  38 21 00 10 */	addi r1, r1, 0x10
/* 8044D150 0044A090  4E 80 00 20 */	blr 
.endif

.if version == 1
.global loadResource__Q24Demo7SectionFv
loadResource__Q24Demo7SectionFv:
/* 8044D154 0044A094  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8044D158 0044A098  7C 08 02 A6 */	mflr r0
/* 8044D15C 0044A09C  3C 80 80 4A */	lis r4, lbl_8049B3C0@ha
/* 8044D160 0044A0A0  38 A0 00 00 */	li r5, 0
/* 8044D164 0044A0A4  90 01 00 24 */	stw r0, 0x24(r1)
/* 8044D168 0044A0A8  38 C0 00 01 */	li r6, 1
/* 8044D16C 0044A0AC  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8044D170 0044A0B0  3B E4 B3 C0 */	addi r31, r4, lbl_8049B3C0@l
/* 8044D174 0044A0B4  38 80 00 01 */	li r4, 1
/* 8044D178 0044A0B8  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8044D17C 0044A0BC  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8044D180 0044A0C0  7C 7D 1B 78 */	mr r29, r3
/* 8044D184 0044A0C4  38 7F 00 68 */	addi r3, r31, 0x68
/* 8044D188 0044A0C8  4B BC DF A9 */	bl mount__10JKRArchiveFPCcQ210JKRArchive10EMountModeP7JKRHeapQ210JKRArchive15EMountDirection
/* 8044D18C 0044A0CC  28 03 00 00 */	cmplwi r3, 0
/* 8044D190 0044A0D0  40 82 00 18 */	bne .L_8044D1A8
/* 8044D194 0044A0D4  38 7F 00 00 */	addi r3, r31, 0
/* 8044D198 0044A0D8  38 BF 00 5C */	addi r5, r31, 0x5c
/* 8044D19C 0044A0DC  38 80 01 AC */	li r4, 0x1ac
/* 8044D1A0 0044A0E0  4C C6 31 82 */	crclr 6
/* 8044D1A4 0044A0E4  4B BD D4 9D */	bl panic_f__12JUTExceptionFPCciPCce
.L_8044D1A8:
/* 8044D1A8 0044A0E8  38 7F 00 94 */	addi r3, r31, 0x94
/* 8044D1AC 0044A0EC  4B BD 5E 21 */	bl getGlbResource__13JKRFileLoaderFPCc
/* 8044D1B0 0044A0F0  7C 7E 1B 79 */	or. r30, r3, r3
/* 8044D1B4 0044A0F4  40 82 00 18 */	bne .L_8044D1CC
/* 8044D1B8 0044A0F8  38 7F 00 00 */	addi r3, r31, 0
/* 8044D1BC 0044A0FC  38 BF 00 5C */	addi r5, r31, 0x5c
/* 8044D1C0 0044A100  38 80 01 B1 */	li r4, 0x1b1
/* 8044D1C4 0044A104  4C C6 31 82 */	crclr 6
/* 8044D1C8 0044A108  4B BD D4 79 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8044D1CC:
/* 8044D1CC 0044A10C  38 60 00 40 */	li r3, 0x40
/* 8044D1D0 0044A110  4B BD 6C D5 */	bl __nw__FUl
/* 8044D1D4 0044A114  7C 7F 1B 79 */	or. r31, r3, r3
/* 8044D1D8 0044A118  41 82 00 24 */	beq .L_8044D1FC
/* 8044D1DC 0044A11C  38 00 00 00 */	li r0, 0
/* 8044D1E0 0044A120  7F C4 F3 78 */	mr r4, r30
/* 8044D1E4 0044A124  90 1F 00 28 */	stw r0, 0x28(r31)
/* 8044D1E8 0044A128  38 A0 00 00 */	li r5, 0
/* 8044D1EC 0044A12C  4B BE 5E 99 */	bl storeTIMG__10JUTTextureFPC7ResTIMGUc
/* 8044D1F0 0044A130  88 1F 00 3B */	lbz r0, 0x3b(r31)
/* 8044D1F4 0044A134  54 00 07 BC */	rlwinm r0, r0, 0, 0x1e, 0x1e
/* 8044D1F8 0044A138  98 1F 00 3B */	stb r0, 0x3b(r31)
.L_8044D1FC:
/* 8044D1FC 0044A13C  93 FD 01 AC */	stw r31, 0x1cc(r29)
/* 8044D200 0044A140  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8044D204 0044A144  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8044D208 0044A148  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8044D20C 0044A14C  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8044D210 0044A150  7C 08 03 A6 */	mtlr r0
/* 8044D214 0044A154  38 21 00 20 */	addi r1, r1, 0x20
/* 8044D218 0044A158  4E 80 00 20 */	blr 
.else
.global loadResource__Q24Demo7SectionFv
loadResource__Q24Demo7SectionFv:
/* 8044D154 0044A094  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8044D158 0044A098  7C 08 02 A6 */	mflr r0
/* 8044D15C 0044A09C  3C 80 80 4A */	lis r4, lbl_8049B3C0@ha
/* 8044D160 0044A0A0  38 A0 00 00 */	li r5, 0
/* 8044D164 0044A0A4  90 01 00 24 */	stw r0, 0x24(r1)
/* 8044D168 0044A0A8  38 C0 00 01 */	li r6, 1
/* 8044D16C 0044A0AC  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8044D170 0044A0B0  3B E4 B3 C0 */	addi r31, r4, lbl_8049B3C0@l
/* 8044D174 0044A0B4  38 80 00 01 */	li r4, 1
/* 8044D178 0044A0B8  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8044D17C 0044A0BC  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8044D180 0044A0C0  7C 7D 1B 78 */	mr r29, r3
/* 8044D184 0044A0C4  38 7F 00 68 */	addi r3, r31, 0x68
/* 8044D188 0044A0C8  4B BC DF A9 */	bl mount__10JKRArchiveFPCcQ210JKRArchive10EMountModeP7JKRHeapQ210JKRArchive15EMountDirection
/* 8044D18C 0044A0CC  28 03 00 00 */	cmplwi r3, 0
/* 8044D190 0044A0D0  40 82 00 18 */	bne .L_8044D1A8
/* 8044D194 0044A0D4  38 7F 00 00 */	addi r3, r31, 0
/* 8044D198 0044A0D8  38 BF 00 5C */	addi r5, r31, 0x5c
/* 8044D19C 0044A0DC  38 80 01 AC */	li r4, 0x1ac
/* 8044D1A0 0044A0E0  4C C6 31 82 */	crclr 6
/* 8044D1A4 0044A0E4  4B BD D4 9D */	bl panic_f__12JUTExceptionFPCciPCce
.L_8044D1A8:
/* 8044D1A8 0044A0E8  38 7F 00 94 */	addi r3, r31, 0x94
/* 8044D1AC 0044A0EC  4B BD 5E 21 */	bl getGlbResource__13JKRFileLoaderFPCc
/* 8044D1B0 0044A0F0  7C 7E 1B 79 */	or. r30, r3, r3
/* 8044D1B4 0044A0F4  40 82 00 18 */	bne .L_8044D1CC
/* 8044D1B8 0044A0F8  38 7F 00 00 */	addi r3, r31, 0
/* 8044D1BC 0044A0FC  38 BF 00 5C */	addi r5, r31, 0x5c
/* 8044D1C0 0044A100  38 80 01 B1 */	li r4, 0x1b1
/* 8044D1C4 0044A104  4C C6 31 82 */	crclr 6
/* 8044D1C8 0044A108  4B BD D4 79 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8044D1CC:
/* 8044D1CC 0044A10C  38 60 00 40 */	li r3, 0x40
/* 8044D1D0 0044A110  4B BD 6C D5 */	bl __nw__FUl
/* 8044D1D4 0044A114  7C 7F 1B 79 */	or. r31, r3, r3
/* 8044D1D8 0044A118  41 82 00 24 */	beq .L_8044D1FC
/* 8044D1DC 0044A11C  38 00 00 00 */	li r0, 0
/* 8044D1E0 0044A120  7F C4 F3 78 */	mr r4, r30
/* 8044D1E4 0044A124  90 1F 00 28 */	stw r0, 0x28(r31)
/* 8044D1E8 0044A128  38 A0 00 00 */	li r5, 0
/* 8044D1EC 0044A12C  4B BE 5E 99 */	bl storeTIMG__10JUTTextureFPC7ResTIMGUc
/* 8044D1F0 0044A130  88 1F 00 3B */	lbz r0, 0x3b(r31)
/* 8044D1F4 0044A134  54 00 07 BC */	rlwinm r0, r0, 0, 0x1e, 0x1e
/* 8044D1F8 0044A138  98 1F 00 3B */	stb r0, 0x3b(r31)
.L_8044D1FC:
/* 8044D1FC 0044A13C  93 FD 01 AC */	stw r31, 0x1ac(r29)
/* 8044D200 0044A140  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8044D204 0044A144  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8044D208 0044A148  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8044D20C 0044A14C  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8044D210 0044A150  7C 08 03 A6 */	mtlr r0
/* 8044D214 0044A154  38 21 00 20 */	addi r1, r1, 0x20
/* 8044D218 0044A158  4E 80 00 20 */	blr 
.endif

.global __dt__Q24Demo11HIORootNodeFv
__dt__Q24Demo11HIORootNodeFv:
/* 8044D21C 0044A15C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8044D220 0044A160  7C 08 02 A6 */	mflr r0
/* 8044D224 0044A164  90 01 00 14 */	stw r0, 0x14(r1)
/* 8044D228 0044A168  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8044D22C 0044A16C  7C 9F 23 78 */	mr r31, r4
/* 8044D230 0044A170  93 C1 00 08 */	stw r30, 8(r1)
/* 8044D234 0044A174  7C 7E 1B 79 */	or. r30, r3, r3
/* 8044D238 0044A178  41 82 00 38 */	beq .L_8044D270
/* 8044D23C 0044A17C  3C 80 80 4F */	lis r4, __vt__Q24Demo11HIORootNode@ha
/* 8044D240 0044A180  38 04 D3 60 */	addi r0, r4, __vt__Q24Demo11HIORootNode@l
/* 8044D244 0044A184  90 1E 00 00 */	stw r0, 0(r30)
/* 8044D248 0044A188  41 82 00 18 */	beq .L_8044D260
/* 8044D24C 0044A18C  3C A0 80 4B */	lis r5, __vt__Q24Game11HIORootNode@ha
/* 8044D250 0044A190  38 80 00 00 */	li r4, 0
/* 8044D254 0044A194  38 05 19 FC */	addi r0, r5, __vt__Q24Game11HIORootNode@l
/* 8044D258 0044A198  90 1E 00 00 */	stw r0, 0(r30)
/* 8044D25C 0044A19C  4B FC 43 2D */	bl __dt__5CNodeFv
.L_8044D260:
/* 8044D260 0044A1A0  7F E0 07 35 */	extsh. r0, r31
/* 8044D264 0044A1A4  40 81 00 0C */	ble .L_8044D270
/* 8044D268 0044A1A8  7F C3 F3 78 */	mr r3, r30
/* 8044D26C 0044A1AC  4B BD 6E 49 */	bl __dl__FPv
.L_8044D270:
/* 8044D270 0044A1B0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8044D274 0044A1B4  7F C3 F3 78 */	mr r3, r30
/* 8044D278 0044A1B8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8044D27C 0044A1BC  83 C1 00 08 */	lwz r30, 8(r1)
/* 8044D280 0044A1C0  7C 08 03 A6 */	mtlr r0
/* 8044D284 0044A1C4  38 21 00 10 */	addi r1, r1, 0x10
/* 8044D288 0044A1C8  4E 80 00 20 */	blr 

.global forceReset__Q24Demo7SectionFv
forceReset__Q24Demo7SectionFv:
/* 8044D28C 0044A1CC  38 60 00 00 */	li r3, 0
/* 8044D290 0044A1D0  4E 80 00 20 */	blr 

.global "invoke__25Delegate<Q24Demo7Section>Fv"
"invoke__25Delegate<Q24Demo7Section>Fv":
/* 8044D294 0044A1D4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8044D298 0044A1D8  7C 08 02 A6 */	mflr r0
/* 8044D29C 0044A1DC  7C 64 1B 78 */	mr r4, r3
/* 8044D2A0 0044A1E0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8044D2A4 0044A1E4  39 84 00 08 */	addi r12, r4, 8
/* 8044D2A8 0044A1E8  80 63 00 04 */	lwz r3, 4(r3)
/* 8044D2AC 0044A1EC  4B C7 48 79 */	bl __ptmf_scall
/* 8044D2B0 0044A1F0  60 00 00 00 */	nop 
/* 8044D2B4 0044A1F4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8044D2B8 0044A1F8  7C 08 03 A6 */	mtlr r0
/* 8044D2BC 0044A1FC  38 21 00 10 */	addi r1, r1, 0x10
/* 8044D2C0 0044A200  4E 80 00 20 */	blr 
