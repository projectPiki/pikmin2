#include "JSystem/J2D/J2DPane.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_80478498
    lbl_80478498:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
    .global lbl_804784A8
    lbl_804784A8:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
    .global lbl_804784B8
    lbl_804784B8:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
    .global lbl_804784C8
    lbl_804784C8:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__9J2DWindow
    __vt__9J2DWindow:
        .4byte 0
        .4byte 0
        .4byte __dt__9J2DWindowFv
        .4byte getTypeID__9J2DWindowCFv
        .4byte move__7J2DPaneFff
        .4byte add__7J2DPaneFff
        .4byte resize__9J2DWindowFff
        .4byte setCullBack__7J2DPaneFb
        .4byte setCullBack__7J2DPaneF11_GXCullMode
        .4byte setAlpha__7J2DPaneFUc
        .4byte setConnectParent__7J2DPaneFb
        .4byte calcMtx__7J2DPaneFv
        .4byte update__7J2DPaneFv
        .4byte drawSelf__9J2DWindowFff
        .4byte drawSelf__9J2DWindowFffPA3_A4_f
        .4byte search__7J2DPaneFUx
        .4byte searchUserInfo__7J2DPaneFUx
        .4byte makeMatrix__7J2DPaneFff
        .4byte makeMatrix__7J2DPaneFffff
        .4byte isUsed__9J2DWindowFPC7ResTIMG
        .4byte isUsed__9J2DWindowFPC7ResFONT
        .4byte clearAnmTransform__7J2DPaneFv
        .4byte rewriteAlpha__9J2DWindowFv
        .4byte setAnimation__7J2DPaneFP10J2DAnmBase
        .4byte setAnimation__7J2DPaneFP15J2DAnmTransform
        .4byte setAnimation__7J2DPaneFP11J2DAnmColor
        .4byte setAnimation__7J2DPaneFP16J2DAnmTexPattern
        .4byte setAnimation__7J2DPaneFP19J2DAnmTextureSRTKey
        .4byte setAnimation__7J2DPaneFP15J2DAnmTevRegKey
        .4byte setAnimation__7J2DPaneFP20J2DAnmVisibilityFull
        .4byte setAnimation__7J2DPaneFP14J2DAnmVtxColor
        .4byte animationTransform__7J2DPaneFPC15J2DAnmTransform
        .4byte setVisibileAnimation__7J2DPaneFP20J2DAnmVisibilityFull
        .4byte setAnimationVF__7J2DPaneFP20J2DAnmVisibilityFull
        .4byte setVtxColorAnimation__7J2DPaneFP14J2DAnmVtxColor
        .4byte setAnimationVC__7J2DPaneFP14J2DAnmVtxColor
        .4byte animationPane__7J2DPaneFPC15J2DAnmTransform
        .4byte "draw__9J2DWindowFRCQ29JGeometry8TBox2<f>"
        .4byte "draw__9J2DWindowFRCQ29JGeometry8TBox2<f>RCQ29JGeometry8TBox2<f>"
        .4byte draw__9J2DWindowFffff
        .4byte setBlack__9J2DWindowFQ28JUtility6TColor
        .4byte setWhite__9J2DWindowFQ28JUtility6TColor
        .4byte setBlackWhite__9J2DWindowFQ28JUtility6TColorQ28JUtility6TColor
        .4byte getBlack__9J2DWindowCFv
        .4byte getWhite__9J2DWindowCFv
        .4byte getFrameTexture__9J2DWindowCFUcUc
        .4byte getContentsTexture__9J2DWindowCFUc
        .4byte getMaterial__9J2DWindowCFRQ29J2DWindow9TMaterial
        .4byte getFrameMaterial__9J2DWindowCFUc
        .4byte getContentsMaterial__9J2DWindowCFv
        .4byte "drawContents__9J2DWindowFRCQ29JGeometry8TBox2<f>"
        .4byte 0

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80516880
    lbl_80516880:
        .4byte 0x43300000
        .4byte 0x80000000
    .global lbl_80516888
    lbl_80516888:
        .4byte 0x43300000
        .4byte 0x00000000
    .global lbl_80516890
    lbl_80516890:
        .4byte 0x00000000
    .global lbl_80516894
    lbl_80516894:
        .float 1.0
    .global lbl_80516898
    lbl_80516898:
        .float 0.5
        .4byte 0x00000000
*/

/*
 * --INFO--
 * Address:	80042544
 * Size:	0000F8
 */
J2DWindow::J2DWindow()
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	mr       r31, r3
	bl       __ct__7J2DPaneFv
	lis      r3, __vt__9J2DWindow@ha
	li       r0, -1
	addi     r3, r3, __vt__9J2DWindow@l
	li       r8, 0
	stw      r3, 0(r31)
	mr       r3, r31
	addi     r4, r1, 0xc
	addi     r5, r1, 0x10
	stw      r8, 0x100(r31)
	addi     r6, r1, 0x14
	addi     r7, r1, 0x18
	stw      r8, 0x104(r31)
	stw      r8, 0x108(r31)
	stw      r8, 0x10c(r31)
	stw      r8, 0x110(r31)
	stw      r8, 0x124(r31)
	stw      r0, 0x128(r31)
	stw      r0, 0x12c(r31)
	stw      r0, 0x130(r31)
	stw      r0, 0x134(r31)
	stw      r0, 0x138(r31)
	stw      r0, 0x13c(r31)
	stb      r8, 0x144(r31)
	stw      r0, 0x24(r1)
	stw      r0, 8(r1)
	stw      r0, 0x18(r1)
	stw      r0, 0x14(r1)
	stw      r0, 0x10(r1)
	stw      r0, 0xc(r1)
	bl
	setContentsColor__9J2DWindowFQ28JUtility6TColorQ28JUtility6TColorQ28JUtility6TColorQ28JUtility6TColor
	li       r3, 0
	li       r0, -1
	stw      r3, 0x20(r1)
	mr       r3, r31
	lbz      r4, 0x20(r1)
	stw      r0, 0x1c(r1)
	lbz      r0, 0x21(r1)
	stb      r4, 0x13c(r31)
	lbz      r4, 0x22(r1)
	stb      r0, 0x13d(r31)
	lbz      r0, 0x23(r1)
	stb      r4, 0x13e(r31)
	lbz      r4, 0x1c(r1)
	stb      r0, 0x13f(r31)
	lbz      r0, 0x1d(r1)
	stb      r4, 0x138(r31)
	lbz      r4, 0x1e(r1)
	stb      r0, 0x139(r31)
	lbz      r0, 0x1f(r1)
	stb      r4, 0x13a(r31)
	stb      r0, 0x13b(r31)
	lwz      r31, 0x2c(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	8004263C
 * Size:	0000AC
 */
J2DWindow::J2DWindow(J2DPane*, JSURandomInputStream*, JKRArchive*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r6
	stw      r30, 0x18(r1)
	mr       r30, r5
	stw      r29, 0x14(r1)
	mr       r29, r4
	stw      r28, 0x10(r1)
	mr       r28, r3
	bl       __ct__7J2DPaneFv
	lis      r3, __vt__9J2DWindow@ha
	li       r7, 0
	addi     r3, r3, __vt__9J2DWindow@l
	li       r0, -1
	stw      r3, 0(r28)
	mr       r3, r28
	mr       r4, r29
	mr       r5, r30
	stw      r7, 0x100(r28)
	mr       r6, r31
	stw      r7, 0x104(r28)
	stw      r7, 0x108(r28)
	stw      r7, 0x10c(r28)
	stw      r7, 0x110(r28)
	stw      r7, 0x124(r28)
	stw      r0, 0x128(r28)
	stw      r0, 0x12c(r28)
	stw      r0, 0x130(r28)
	stw      r0, 0x134(r28)
	stw      r0, 0x138(r28)
	stw      r0, 0x13c(r28)
	bl
	private_readStream__9J2DWindowFP7J2DPaneP20JSURandomInputStreamP10JKRArchive
	lwz      r0, 0x24(r1)
	mr       r3, r28
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
 * Address:	800426E8
 * Size:	000560
 */
J2DWindow::J2DWindow(J2DPane*, JSURandomInputStream*, J2DMaterial*)
{
	/*
	stwu     r1, -0xe0(r1)
	mflr     r0
	stw      r0, 0xe4(r1)
	stmw     r26, 0xc8(r1)
	mr       r31, r3
	mr       r29, r4
	mr       r27, r5
	mr       r28, r6
	bl       __ct__7J2DPaneFv
	lis      r3, __vt__9J2DWindow@ha
	li       r4, 0
	addi     r3, r3, __vt__9J2DWindow@l
	li       r0, -1
	stw      r3, 0(r31)
	mr       r3, r27
	stw      r4, 0x100(r31)
	stw      r4, 0x104(r31)
	stw      r4, 0x108(r31)
	stw      r4, 0x10c(r31)
	stw      r4, 0x110(r31)
	stw      r4, 0x124(r31)
	stw      r0, 0x128(r31)
	stw      r0, 0x12c(r31)
	stw      r0, 0x130(r31)
	stw      r0, 0x134(r31)
	stw      r0, 0x138(r31)
	stw      r0, 0x13c(r31)
	lwz      r12, 0(r27)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	mr       r30, r3
	mr       r3, r27
	addi     r4, r1, 0x2c
	li       r5, 8
	bl       read__14JSUInputStreamFPvl
	lis      r4, 0x57494E31@ha
	mr       r3, r27
	addi     r0, r4, 0x57494E31@l
	stw      r0, 8(r31)
	lwz      r12, 0(r27)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	mr       r26, r3
	mr       r3, r27
	addi     r4, r1, 0x24
	li       r5, 8
	bl       peek__20JSURandomInputStreamFPvl
	mr       r3, r31
	mr       r4, r29
	mr       r5, r27
	bl       makePaneExStream__7J2DPaneFP7J2DPaneP20JSURandomInputStream
	lwz      r0, 0x28(r1)
	mr       r3, r27
	li       r5, 0
	add      r4, r26, r0
	bl       seek__20JSURandomInputStreamFl17JSUStreamSeekFrom
	mr       r3, r27
	addi     r4, r1, 0x64
	li       r5, 0x40
	bl       read__14JSUInputStreamFPvl
	lis      r3, lbl_80478498@ha
	addi     r7, r1, 0x64
	addi     r5, r3, lbl_80478498@l
	addi     r12, r31, 0x128
	lwz      r3, 0(r5)
	addi     r11, r31, 0x12c
	lwz      r4, 4(r5)
	addi     r10, r31, 0x130
	stw      r3, 0x54(r1)
	addi     r9, r31, 0x134
	lwz      r26, 8(r5)
	li       r0, 2
	lwz      r29, 0xc(r5)
	mr       r5, r7
	stw      r4, 0x58(r1)
	addi     r3, r1, 0x1c
	addi     r4, r1, 0x44
	addi     r6, r1, 0x54
	stw      r26, 0x5c(r1)
	li       r8, 0
	stw      r29, 0x60(r1)
	stw      r12, 0x54(r1)
	stw      r11, 0x58(r1)
	stw      r10, 0x5c(r1)
	stw      r9, 0x60(r1)
	mtctr    r0

lbl_80042848:
	lhz      r0, 0x10(r7)
	li       r10, 0
	stw      r10, 0(r4)
	sth      r0, 0(r3)
	lhz      r0, 0(r3)
	cmplwi   r0, 0xffff
	beq      lbl_80042870
	mulli    r0, r0, 0x88
	add      r0, r28, r0
	stw      r0, 0(r4)

lbl_80042870:
	lwz      r0, 0x30(r5)
	li       r10, 0
	lwz      r11, 0(r6)
	stw      r0, 0x18(r1)
	lbz      r9, 0x18(r1)
	lbz      r0, 0x19(r1)
	stb      r9, 0(r11)
	lbz      r9, 0x1a(r1)
	stb      r0, 1(r11)
	lbz      r0, 0x1b(r1)
	stb      r9, 2(r11)
	stb      r0, 3(r11)
	lhz      r0, 0x12(r7)
	stw      r10, 4(r4)
	sth      r0, 2(r3)
	lhz      r0, 2(r3)
	cmplwi   r0, 0xffff
	beq      lbl_800428C4
	mulli    r0, r0, 0x88
	add      r0, r28, r0
	stw      r0, 4(r4)

lbl_800428C4:
	lwz      r0, 0x34(r5)
	addi     r7, r7, 4
	lwz      r11, 4(r6)
	addi     r3, r3, 4
	stw      r0, 0x18(r1)
	addi     r4, r4, 8
	addi     r5, r5, 8
	addi     r6, r6, 8
	lbz      r9, 0x18(r1)
	addi     r8, r8, 1
	lbz      r0, 0x19(r1)
	stb      r9, 0(r11)
	lbz      r9, 0x1a(r1)
	stb      r0, 1(r11)
	lbz      r0, 0x1b(r1)
	stb      r9, 2(r11)
	stb      r0, 3(r11)
	bdnz     lbl_80042848
	lbz      r0, 0x7c(r1)
	lis      r3, 0x4330
	stw      r3, 0xb8(r1)
	li       r29, 0
	lfd      f2, lbl_80516888@sda21(r2)
	stb      r0, 0x144(r31)
	lfd      f3, lbl_80516880@sda21(r2)
	lhz      r6, 0x7e(r1)
	lhz      r5, 0x80(r1)
	stw      r6, 0xbc(r1)
	lhz      r0, 0x82(r1)
	lhz      r4, 0x84(r1)
	add      r0, r6, r0
	lfd      f0, 0xb8(r1)
	xoris    r0, r0, 0x8000
	add      r4, r5, r4
	fsubs    f1, f0, f2
	xoris    r4, r4, 0x8000
	stw      r5, 0xc4(r1)
	stw      r3, 0xc0(r1)
	lfd      f0, 0xc0(r1)
	stw      r0, 0xb4(r1)
	fsubs    f0, f0, f2
	stw      r3, 0xb0(r1)
	lfd      f2, 0xb0(r1)
	stfs     f1, 0x114(r31)
	fsubs    f1, f2, f3
	stfs     f0, 0x118(r31)
	stw      r4, 0xac(r1)
	stw      r3, 0xa8(r1)
	lfd      f0, 0xa8(r1)
	stfs     f1, 0x11c(r31)
	fsubs    f0, f0, f3
	stfs     f0, 0x120(r31)
	lhz      r0, 0x88(r1)
	cmplwi   r0, 0xffff
	beq      lbl_800429A8
	mulli    r0, r0, 0x88
	add      r29, r28, r0

lbl_800429A8:
	lwz      r0, 0x30(r1)
	mr       r3, r27
	li       r5, 0
	add      r4, r30, r0
	bl       seek__20JSURandomInputStreamFl17JSUStreamSeekFrom
	lwz      r3, 0x44(r1)
	cmplwi   r3, 0
	beq      lbl_800429D0
	lbz      r0, 0x13(r3)
	stb      r0, 0xb2(r31)

lbl_800429D0:
	li       r3, 0
	li       r0, -1
	stw      r3, 0x14(r1)
	lwz      r4, 0x44(r1)
	lbz      r3, 0x14(r1)
	stw      r0, 0x10(r1)
	cmplwi   r4, 0
	lbz      r0, 0x15(r1)
	stb      r3, 0x13c(r31)
	lbz      r3, 0x16(r1)
	stb      r0, 0x13d(r31)
	lbz      r0, 0x17(r1)
	stb      r3, 0x13e(r31)
	lbz      r3, 0x10(r1)
	stb      r0, 0x13f(r31)
	lbz      r0, 0x11(r1)
	stb      r3, 0x138(r31)
	lbz      r3, 0x12(r1)
	stb      r0, 0x139(r31)
	lbz      r0, 0x13(r1)
	stb      r3, 0x13a(r31)
	stb      r0, 0x13b(r31)
	beq      lbl_80042B14
	lwz      r3, 0x70(r4)
	cmplwi   r3, 0
	beq      lbl_80042B14
	lwz      r12, 0(r3)
	lwz      r12, 0x58(r12)
	mtctr    r12
	bctrl
	clrlwi   r0, r3, 0x18
	cmplwi   r0, 1
	beq      lbl_80042B14
	lwz      r3, 0x44(r1)
	li       r4, 0
	lwz      r3, 0x70(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x38(r12)
	mtctr    r12
	bctrl
	lwz      r5, 0x44(r1)
	li       r4, 1
	lha      r26, 0(r3)
	lha      r27, 2(r3)
	lha      r28, 4(r3)
	lha      r30, 6(r3)
	lwz      r3, 0x70(r5)
	lwz      r12, 0(r3)
	lwz      r12, 0x38(r12)
	mtctr    r12
	bctrl
	rlwinm   r4, r27, 0x10, 8, 0xf
	lha      r0, 2(r3)
	rlwimi   r4, r26, 0x18, 0, 7
	lha      r5, 0(r3)
	rlwimi   r4, r28, 8, 0x10, 0x17
	rlwinm   r0, r0, 0x10, 8, 0xf
	rlwimi   r4, r30, 0, 0x18, 0x1f
	lha      r6, 4(r3)
	stw      r4, 0xc(r1)
	rlwimi   r0, r5, 0x18, 0, 7
	lha      r7, 6(r3)
	rlwimi   r0, r6, 8, 0x10, 0x17
	lbz      r3, 0xc(r1)
	lbz      r5, 0xd(r1)
	rlwimi   r0, r7, 0, 0x18, 0x1f
	stb      r3, 0x13c(r31)
	lbz      r4, 0xe(r1)
	stb      r5, 0x13d(r31)
	lbz      r3, 0xf(r1)
	stw      r0, 8(r1)
	stb      r4, 0x13e(r31)
	lbz      r0, 8(r1)
	stb      r3, 0x13f(r31)
	lbz      r4, 9(r1)
	stb      r0, 0x138(r31)
	lbz      r3, 0xa(r1)
	stb      r4, 0x139(r31)
	lbz      r0, 0xb(r1)
	stb      r3, 0x13a(r31)
	stb      r0, 0x13b(r31)

lbl_80042B14:
	lis      r3, lbl_804784A8@ha
	addi     r5, r31, 0x100
	addi     r6, r3, lbl_804784A8@l
	addi     r4, r31, 0x104
	lwz      r9, 0(r6)
	addi     r3, r31, 0x108
	lwz      r8, 4(r6)
	addi     r0, r31, 0x10c
	lwz      r7, 8(r6)
	addi     r26, r1, 0x44
	lwz      r6, 0xc(r6)
	addi     r27, r1, 0x34
	stw      r9, 0x34(r1)
	li       r28, 0
	stw      r8, 0x38(r1)
	stw      r7, 0x3c(r1)
	stw      r6, 0x40(r1)
	stw      r5, 0x34(r1)
	stw      r4, 0x38(r1)
	stw      r3, 0x3c(r1)
	stw      r0, 0x40(r1)

lbl_80042B68:
	lwz      r3, 0(r26)
	cmplwi   r3, 0
	beq      lbl_80042BC0
	lwz      r3, 0x70(r3)
	cmplwi   r3, 0
	beq      lbl_80042BC0
	lwz      r12, 0(r3)
	li       r4, 0
	lwz      r12, 0xa0(r12)
	mtctr    r12
	bctrl
	cmplwi   r3, 0
	beq      lbl_80042BC0
	lwz      r6, 0(r27)
	li       r4, 0xfe
	lwz      r5, 0(r26)
	stw      r3, 0(r6)
	lwz      r3, 0x70(r5)
	lwz      r12, 0(r3)
	lwz      r12, 0xb0(r12)
	mtctr    r12
	bctrl

lbl_80042BC0:
	addi     r28, r28, 1
	addi     r27, r27, 4
	cmplwi   r28, 4
	addi     r26, r26, 4
	blt      lbl_80042B68
	li       r0, 0
	cmplwi   r29, 0
	stw      r0, 0x110(r31)
	beq      lbl_80042C28
	lwz      r3, 0x70(r29)
	cmplwi   r3, 0
	beq      lbl_80042C28
	lwz      r12, 0(r3)
	li       r4, 0
	lwz      r12, 0xa0(r12)
	mtctr    r12
	bctrl
	cmplwi   r3, 0
	beq      lbl_80042C28
	stw      r3, 0x110(r31)
	li       r4, 0xfe
	lwz      r3, 0x70(r29)
	lwz      r12, 0(r3)
	lwz      r12, 0xb0(r12)
	mtctr    r12
	bctrl

lbl_80042C28:
	mr       r3, r31
	bl       initinfo2__9J2DWindowFv
	mr       r3, r31
	lmw      r26, 0xc8(r1)
	lwz      r0, 0xe4(r1)
	mtlr     r0
	addi     r1, r1, 0xe0
	blr
	*/
}

/*
 * --INFO--
 * Address:	80042C48
 * Size:	0004E4
 */
void J2DWindow::private_readStream(J2DPane*, JSURandomInputStream*, JKRArchive*)
{
	/*
	stwu     r1, -0xc0(r1)
	mflr     r0
	stw      r0, 0xc4(r1)
	stfd     f31, 0xb0(r1)
	psq_st   f31, 184(r1), 0, qr0
	stfd     f30, 0xa0(r1)
	psq_st   f30, 168(r1), 0, qr0
	stfd     f29, 0x90(r1)
	psq_st   f29, 152(r1), 0, qr0
	stmw     r25, 0x74(r1)
	mr       r28, r5
	mr       r27, r3
	mr       r3, r28
	mr       r25, r4
	lwz      r12, 0(r28)
	mr       r29, r6
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	mr       r31, r3
	mr       r3, r28
	addi     r4, r1, 0x3c
	li       r5, 8
	bl       read__14JSUInputStreamFPvl
	lwz      r0, 0x3c(r1)
	mr       r3, r27
	mr       r4, r25
	mr       r5, r28
	stw      r0, 8(r27)
	bl       makePaneStream__7J2DPaneFP7J2DPaneP20JSURandomInputStream
	mr       r3, r28
	addi     r4, r1, 9
	li       r5, 1
	bl       read__14JSUInputStreamFPvl
	lbz      r30, 9(r1)
	mr       r3, r28
	addi     r4, r1, 0x10
	li       r5, 2
	bl       read__14JSUInputStreamFPvl
	lhz      r5, 0x10(r1)
	lis      r0, 0x4330
	stw      r0, 0x48(r1)
	mr       r3, r28
	lfd      f1, lbl_80516888@sda21(r2)
	addi     r4, r1, 0xe
	stw      r5, 0x4c(r1)
	li       r5, 2
	lfd      f0, 0x48(r1)
	fsubs    f31, f0, f1
	bl       read__14JSUInputStreamFPvl
	lhz      r5, 0xe(r1)
	lis      r0, 0x4330
	stw      r0, 0x50(r1)
	mr       r3, r28
	lfd      f1, lbl_80516888@sda21(r2)
	addi     r4, r1, 0xc
	stw      r5, 0x54(r1)
	li       r5, 2
	lfd      f0, 0x50(r1)
	fsubs    f30, f0, f1
	bl       read__14JSUInputStreamFPvl
	lhz      r5, 0xc(r1)
	lis      r0, 0x4330
	stw      r0, 0x58(r1)
	mr       r3, r28
	lfd      f1, lbl_80516888@sda21(r2)
	addi     r4, r1, 0xa
	stw      r5, 0x5c(r1)
	li       r5, 2
	lfd      f0, 0x58(r1)
	fsubs    f0, f0, f1
	fadds    f29, f31, f0
	bl       read__14JSUInputStreamFPvl
	lhz      r4, 0xa(r1)
	lis      r0, 0x4330
	lis      r5, 0x54494D47@ha
	stw      r0, 0x60(r1)
	lfd      f1, lbl_80516888@sda21(r2)
	mr       r3, r27
	stw      r4, 0x64(r1)
	mr       r4, r28
	mr       r6, r29
	addi     r5, r5, 0x54494D47@l
	lfd      f0, 0x60(r1)
	stfs     f31, 0x114(r27)
	fsubs    f0, f0, f1
	stfs     f30, 0x118(r27)
	fadds    f0, f30, f0
	stfs     f29, 0x11c(r27)
	stfs     f0, 0x120(r27)
	bl       getPointer__7J2DPaneFP20JSURandomInputStreamUlP10JKRArchive
	or.      r25, r3, r3
	beq      lbl_80042DF0
	li       r3, 0x40
	bl       __nw__FUl
	or.      r26, r3, r3
	beq      lbl_80042DEC
	li       r0, 0
	mr       r4, r25
	stw      r0, 0x28(r26)
	li       r5, 0
	bl       storeTIMG__10JUTTextureFPC7ResTIMGUc
	lbz      r0, 0x3b(r26)
	rlwinm   r0, r0, 0, 0x1e, 0x1e
	stb      r0, 0x3b(r26)

lbl_80042DEC:
	stw      r26, 0x100(r27)

lbl_80042DF0:
	lis      r5, 0x54494D47@ha
	mr       r3, r27
	mr       r4, r28
	mr       r6, r29
	addi     r5, r5, 0x54494D47@l
	bl       getPointer__7J2DPaneFP20JSURandomInputStreamUlP10JKRArchive
	or.      r25, r3, r3
	beq      lbl_80042E44
	li       r3, 0x40
	bl       __nw__FUl
	or.      r26, r3, r3
	beq      lbl_80042E40
	li       r0, 0
	mr       r4, r25
	stw      r0, 0x28(r26)
	li       r5, 0
	bl       storeTIMG__10JUTTextureFPC7ResTIMGUc
	lbz      r0, 0x3b(r26)
	rlwinm   r0, r0, 0, 0x1e, 0x1e
	stb      r0, 0x3b(r26)

lbl_80042E40:
	stw      r26, 0x104(r27)

lbl_80042E44:
	lis      r5, 0x54494D47@ha
	mr       r3, r27
	mr       r4, r28
	mr       r6, r29
	addi     r5, r5, 0x54494D47@l
	bl       getPointer__7J2DPaneFP20JSURandomInputStreamUlP10JKRArchive
	or.      r25, r3, r3
	beq      lbl_80042E98
	li       r3, 0x40
	bl       __nw__FUl
	or.      r26, r3, r3
	beq      lbl_80042E94
	li       r0, 0
	mr       r4, r25
	stw      r0, 0x28(r26)
	li       r5, 0
	bl       storeTIMG__10JUTTextureFPC7ResTIMGUc
	lbz      r0, 0x3b(r26)
	rlwinm   r0, r0, 0, 0x1e, 0x1e
	stb      r0, 0x3b(r26)

lbl_80042E94:
	stw      r26, 0x108(r27)

lbl_80042E98:
	lis      r5, 0x54494D47@ha
	mr       r3, r27
	mr       r4, r28
	mr       r6, r29
	addi     r5, r5, 0x54494D47@l
	bl       getPointer__7J2DPaneFP20JSURandomInputStreamUlP10JKRArchive
	or.      r25, r3, r3
	beq      lbl_80042EEC
	li       r3, 0x40
	bl       __nw__FUl
	or.      r26, r3, r3
	beq      lbl_80042EE8
	li       r0, 0
	mr       r4, r25
	stw      r0, 0x28(r26)
	li       r5, 0
	bl       storeTIMG__10JUTTextureFPC7ResTIMGUc
	lbz      r0, 0x3b(r26)
	rlwinm   r0, r0, 0, 0x1e, 0x1e
	stb      r0, 0x3b(r26)

lbl_80042EE8:
	stw      r26, 0x10c(r27)

lbl_80042EEC:
	lis      r5, 0x544C5554@ha
	mr       r3, r27
	mr       r4, r28
	mr       r6, r29
	addi     r5, r5, 0x544C5554@l
	bl       getPointer__7J2DPaneFP20JSURandomInputStreamUlP10JKRArchive
	or.      r25, r3, r3
	beq      lbl_80042F2C
	li       r3, 0x18
	bl       __nw__FUl
	or.      r26, r3, r3
	beq      lbl_80042F28
	mr       r5, r25
	li       r4, 0
	bl       storeTLUT__10JUTPaletteF7_GXTlutP7ResTLUT

lbl_80042F28:
	stw      r26, 0x124(r27)

lbl_80042F2C:
	mr       r3, r28
	addi     r4, r1, 8
	li       r5, 1
	bl       read__14JSUInputStreamFPvl
	lbz      r0, 8(r1)
	mr       r3, r28
	addi     r4, r1, 0x28
	li       r5, 4
	stb      r0, 0x144(r27)
	bl       read__14JSUInputStreamFPvl
	lwz      r0, 0x28(r1)
	mr       r3, r28
	addi     r4, r1, 0x24
	li       r5, 4
	stw      r0, 0x128(r27)
	bl       read__14JSUInputStreamFPvl
	lwz      r0, 0x24(r1)
	mr       r3, r28
	addi     r4, r1, 0x20
	li       r5, 4
	stw      r0, 0x12c(r27)
	bl       read__14JSUInputStreamFPvl
	lwz      r0, 0x20(r1)
	mr       r3, r28
	addi     r4, r1, 0x1c
	li       r5, 4
	stw      r0, 0x130(r27)
	bl       read__14JSUInputStreamFPvl
	lwz      r4, 0x1c(r1)
	addi     r30, r30, -14
	clrlwi.  r0, r30, 0x18
	li       r3, 0
	stw      r4, 0x134(r27)
	stw      r3, 0x110(r27)
	beq      lbl_80043010
	lis      r5, 0x54494D47@ha
	mr       r3, r27
	mr       r4, r28
	mr       r6, r29
	addi     r5, r5, 0x54494D47@l
	bl       getPointer__7J2DPaneFP20JSURandomInputStreamUlP10JKRArchive
	or.      r26, r3, r3
	beq      lbl_8004300C
	li       r3, 0x40
	bl       __nw__FUl
	or.      r29, r3, r3
	beq      lbl_80043008
	li       r0, 0
	mr       r4, r26
	stw      r0, 0x28(r29)
	li       r5, 0
	bl       storeTIMG__10JUTTextureFPC7ResTIMGUc
	lbz      r0, 0x3b(r29)
	rlwinm   r0, r0, 0, 0x1e, 0x1e
	stb      r0, 0x3b(r29)

lbl_80043008:
	stw      r29, 0x110(r27)

lbl_8004300C:
	addi     r30, r30, -1

lbl_80043010:
	li       r0, 0
	li       r3, -1
	stw      r0, 0x38(r1)
	clrlwi.  r0, r30, 0x18
	lbz      r4, 0x38(r1)
	stw      r3, 0x34(r1)
	lbz      r0, 0x39(r1)
	stb      r4, 0x13c(r27)
	lbz      r3, 0x3a(r1)
	stb      r0, 0x13d(r27)
	lbz      r0, 0x3b(r1)
	stb      r3, 0x13e(r27)
	lbz      r3, 0x34(r1)
	stb      r0, 0x13f(r27)
	lbz      r0, 0x35(r1)
	stb      r3, 0x138(r27)
	lbz      r3, 0x36(r1)
	stb      r0, 0x139(r27)
	lbz      r0, 0x37(r1)
	stb      r3, 0x13a(r27)
	stb      r0, 0x13b(r27)
	beq      lbl_800430A4
	mr       r3, r28
	addi     r4, r1, 0x18
	li       r5, 4
	bl       read__14JSUInputStreamFPvl
	lwz      r0, 0x18(r1)
	addi     r30, r30, -1
	stw      r0, 0x30(r1)
	lbz      r3, 0x30(r1)
	lbz      r0, 0x31(r1)
	stb      r3, 0x13c(r27)
	lbz      r3, 0x32(r1)
	stb      r0, 0x13d(r27)
	lbz      r0, 0x33(r1)
	stb      r3, 0x13e(r27)
	stb      r0, 0x13f(r27)

lbl_800430A4:
	clrlwi.  r0, r30, 0x18
	beq      lbl_800430E4
	mr       r3, r28
	addi     r4, r1, 0x14
	li       r5, 4
	bl       read__14JSUInputStreamFPvl
	lwz      r0, 0x14(r1)
	stw      r0, 0x2c(r1)
	lbz      r3, 0x2c(r1)
	lbz      r0, 0x2d(r1)
	stb      r3, 0x138(r27)
	lbz      r3, 0x2e(r1)
	stb      r0, 0x139(r27)
	lbz      r0, 0x2f(r1)
	stb      r3, 0x13a(r27)
	stb      r0, 0x13b(r27)

lbl_800430E4:
	lwz      r0, 0x40(r1)
	mr       r3, r28
	li       r5, 0
	add      r4, r31, r0
	bl       seek__20JSURandomInputStreamFl17JSUStreamSeekFrom
	mr       r3, r27
	bl       initinfo2__9J2DWindowFv
	psq_l    f31, 184(r1), 0, qr0
	lfd      f31, 0xb0(r1)
	psq_l    f30, 168(r1), 0, qr0
	lfd      f30, 0xa0(r1)
	psq_l    f29, 152(r1), 0, qr0
	lfd      f29, 0x90(r1)
	lmw      r25, 0x74(r1)
	lwz      r0, 0xc4(r1)
	mtlr     r0
	addi     r1, r1, 0xc0
	blr
	*/
}

/*
 * --INFO--
 * Address:	8004312C
 * Size:	00027C
 */
void J2DWindow::initinfo2()
{
	/*
	lwz      r5, 0x100(r3)
	cmplwi   r5, 0
	beq      lbl_80043198
	lwz      r4, 0x104(r3)
	cmplwi   r4, 0
	beq      lbl_80043198
	lwz      r0, 0x108(r3)
	cmplwi   r0, 0
	beq      lbl_80043198
	lwz      r0, 0x10c(r3)
	cmplwi   r0, 0
	beq      lbl_80043198
	lwz      r5, 0x20(r5)
	lwz      r4, 0x20(r4)
	lhz      r5, 2(r5)
	lhz      r0, 2(r4)
	add      r0, r5, r0
	sth      r0, 0x140(r3)
	lwz      r5, 0x100(r3)
	lwz      r4, 0x108(r3)
	lwz      r5, 0x20(r5)
	lwz      r4, 0x20(r4)
	lhz      r5, 4(r5)
	lhz      r0, 4(r4)
	add      r0, r5, r0
	sth      r0, 0x142(r3)
	b        lbl_800431A8

lbl_80043198:
	li       r0, 1
	sth      r0, 0x140(r3)
	sth      r0, 0x142(r3)
	blr

lbl_800431A8:
	li       r6, 0
	stb      r6, 0x145(r3)
	lwz      r4, 0x100(r3)
	lwz      r7, 0x104(r3)
	lwz      r0, 0x20(r4)
	lwz      r5, 0x20(r7)
	cmplw    r5, r0
	bne      lbl_80043240
	lwz      r5, 0x2c(r7)
	lwz      r0, 0x2c(r4)
	cmplw    r5, r0
	bne      lbl_80043240
	lbz      r5, 0x30(r7)
	lbz      r0, 0x30(r4)
	cmplw    r5, r0
	bne      lbl_80043240
	lbz      r5, 0x31(r7)
	lbz      r0, 0x31(r4)
	cmplw    r5, r0
	bne      lbl_80043240
	lbz      r5, 0x32(r7)
	lbz      r0, 0x32(r4)
	cmplw    r5, r0
	bne      lbl_80043240
	lbz      r5, 0x33(r7)
	lbz      r0, 0x33(r4)
	cmplw    r5, r0
	bne      lbl_80043240
	lhz      r5, 0x34(r7)
	lhz      r0, 0x34(r4)
	cmplw    r5, r0
	bne      lbl_80043240
	bne      lbl_80043240
	lha      r5, 0x38(r7)
	lha      r0, 0x38(r4)
	cmpw     r5, r0
	bne      lbl_80043240
	li       r6, 1

lbl_80043240:
	clrlwi.  r0, r6, 0x18
	bne      lbl_80043258
	lbz      r0, 0x145(r3)
	ori      r0, r0, 1
	stb      r0, 0x145(r3)
	lwz      r4, 0x104(r3)

lbl_80043258:
	lwz      r7, 0x10c(r3)
	li       r6, 0
	lwz      r0, 0x20(r4)
	lwz      r5, 0x20(r7)
	cmplw    r5, r0
	bne      lbl_800432E8
	lwz      r5, 0x2c(r7)
	lwz      r0, 0x2c(r4)
	cmplw    r5, r0
	bne      lbl_800432E8
	lbz      r5, 0x30(r7)
	lbz      r0, 0x30(r4)
	cmplw    r5, r0
	bne      lbl_800432E8
	lbz      r5, 0x31(r7)
	lbz      r0, 0x31(r4)
	cmplw    r5, r0
	bne      lbl_800432E8
	lbz      r5, 0x32(r7)
	lbz      r0, 0x32(r4)
	cmplw    r5, r0
	bne      lbl_800432E8
	lbz      r5, 0x33(r7)
	lbz      r0, 0x33(r4)
	cmplw    r5, r0
	bne      lbl_800432E8
	lhz      r5, 0x34(r7)
	lhz      r0, 0x34(r4)
	cmplw    r5, r0
	bne      lbl_800432E8
	bne      lbl_800432E8
	lha      r5, 0x38(r7)
	lha      r0, 0x38(r4)
	cmpw     r5, r0
	bne      lbl_800432E8
	li       r6, 1

lbl_800432E8:
	clrlwi.  r0, r6, 0x18
	bne      lbl_80043300
	lbz      r0, 0x145(r3)
	ori      r0, r0, 2
	stb      r0, 0x145(r3)
	lwz      r4, 0x10c(r3)

lbl_80043300:
	lwz      r7, 0x108(r3)
	li       r6, 0
	lwz      r0, 0x20(r4)
	lwz      r5, 0x20(r7)
	cmplw    r5, r0
	bne      lbl_80043390
	lwz      r5, 0x2c(r7)
	lwz      r0, 0x2c(r4)
	cmplw    r5, r0
	bne      lbl_80043390
	lbz      r5, 0x30(r7)
	lbz      r0, 0x30(r4)
	cmplw    r5, r0
	bne      lbl_80043390
	lbz      r5, 0x31(r7)
	lbz      r0, 0x31(r4)
	cmplw    r5, r0
	bne      lbl_80043390
	lbz      r5, 0x32(r7)
	lbz      r0, 0x32(r4)
	cmplw    r5, r0
	bne      lbl_80043390
	lbz      r5, 0x33(r7)
	lbz      r0, 0x33(r4)
	cmplw    r5, r0
	bne      lbl_80043390
	lhz      r5, 0x34(r7)
	lhz      r0, 0x34(r4)
	cmplw    r5, r0
	bne      lbl_80043390
	bne      lbl_80043390
	lha      r5, 0x38(r7)
	lha      r0, 0x38(r4)
	cmpw     r5, r0
	bne      lbl_80043390
	li       r6, 1

lbl_80043390:
	clrlwi.  r0, r6, 0x18
	bnelr
	lbz      r0, 0x145(r3)
	ori      r0, r0, 4
	stb      r0, 0x145(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	800433A8
 * Size:	0000A8
 */
J2DWindow::~J2DWindow()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_80043434
	lis      r3, __vt__9J2DWindow@ha
	li       r4, 1
	addi     r0, r3, __vt__9J2DWindow@l
	stw      r0, 0(r30)
	lwz      r3, 0x100(r30)
	bl       __dt__10JUTTextureFv
	lwz      r3, 0x104(r30)
	li       r4, 1
	bl       __dt__10JUTTextureFv
	lwz      r3, 0x108(r30)
	li       r4, 1
	bl       __dt__10JUTTextureFv
	lwz      r3, 0x10c(r30)
	li       r4, 1
	bl       __dt__10JUTTextureFv
	lwz      r3, 0x124(r30)
	bl       __dl__FPv
	lwz      r3, 0x110(r30)
	li       r4, 1
	bl       __dt__10JUTTextureFv
	mr       r3, r30
	li       r4, 0
	bl       __dt__7J2DPaneFv
	extsh.   r0, r31
	ble      lbl_80043434
	mr       r3, r30
	bl       __dl__FPv

lbl_80043434:
	lwz      r0, 0x14(r1)
	mr       r3, r30
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80043450
 * Size:	000134
 */
void J2DWindow::draw(const JGeometry::TBox2<float>&)
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	lwz      r9, 0x100(r3)
	cmplwi   r9, 0
	beq      lbl_80043534
	lwz      r8, 0x104(r3)
	cmplwi   r8, 0
	beq      lbl_80043534
	lwz      r5, 0x108(r3)
	cmplwi   r5, 0
	beq      lbl_80043534
	lwz      r0, 0x10c(r3)
	cmplwi   r0, 0
	beq      lbl_80043534
	lwz      r6, 0x20(r5)
	lis      r7, 0x4330
	lwz      r5, 0x20(r8)
	lhz      r6, 4(r6)
	lwz      r10, 0x20(r9)
	lhz      r0, 2(r5)
	xoris    r8, r6, 0x8000
	lhz      r9, 4(r10)
	xoris    r6, r0, 0x8000
	lhz      r5, 2(r10)
	xoris    r0, r9, 0x8000
	stw      r8, 0x1c(r1)
	xoris    r5, r5, 0x8000
	lfs      f1, 0xc(r4)
	stw      r7, 0x18(r1)
	lfs      f0, 4(r4)
	stw      r6, 0x24(r1)
	lfd      f5, lbl_80516880@sda21(r2)
	fsubs    f6, f1, f0
	stw      r7, 0x20(r1)
	lfd      f1, 0x18(r1)
	lfd      f0, 0x20(r1)
	fsubs    f4, f1, f5
	lfs      f3, 8(r4)
	lfs      f2, 0(r4)
	fsubs    f1, f0, f5
	stw      r5, 0x2c(r1)
	fsubs    f2, f3, f2
	stw      r7, 0x28(r1)
	fsubs    f3, f6, f4
	lfd      f0, 0x28(r1)
	fsubs    f2, f2, f1
	stw      r0, 0x34(r1)
	fsubs    f1, f0, f5
	stw      r7, 0x30(r1)
	lfd      f0, 0x30(r1)
	stfs     f1, 8(r1)
	fsubs    f0, f0, f5
	stfs     f2, 0x10(r1)
	stfs     f0, 0xc(r1)
	stfs     f3, 0x14(r1)
	b        lbl_80043560

lbl_80043534:
	lfs      f3, 0xc(r4)
	lfs      f1, 4(r4)
	lfs      f2, 8(r4)
	lfs      f0, lbl_80516890@sda21(r2)
	fsubs    f3, f3, f1
	lfs      f1, 0(r4)
	stfs     f0, 8(r1)
	fsubs    f1, f2, f1
	stfs     f0, 0xc(r1)
	stfs     f1, 0x10(r1)
	stfs     f3, 0x14(r1)

lbl_80043560:
	lwz      r12, 0(r3)
	addi     r5, r1, 8
	lwz      r12, 0x98(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x44(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	80043584
 * Size:	000484
 */
void J2DWindow::draw_private(const JGeometry::TBox2<float>&, const JGeometry::TBox2<float>&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0xD0(r1)
	  mflr      r0
	  stw       r0, 0xD4(r1)
	  stfd      f31, 0xC0(r1)
	  psq_st    f31,0xC8(r1),0,0
	  stfd      f30, 0xB0(r1)
	  psq_st    f30,0xB8(r1),0,0
	  stfd      f29, 0xA0(r1)
	  psq_st    f29,0xA8(r1),0,0
	  stfd      f28, 0x90(r1)
	  psq_st    f28,0x98(r1),0,0
	  stfd      f27, 0x80(r1)
	  psq_st    f27,0x88(r1),0,0
	  stfd      f26, 0x70(r1)
	  psq_st    f26,0x78(r1),0,0
	  stfd      f25, 0x60(r1)
	  psq_st    f25,0x68(r1),0,0
	  stw       r31, 0x5C(r1)
	  stw       r30, 0x58(r1)
	  mr        r30, r4
	  lfs       f2, 0x0(r5)
	  lfs       f6, 0x4(r5)
	  mr        r31, r3
	  lfs       f5, 0x8(r5)
	  addi      r4, r1, 0x8
	  lfs       f1, 0x0(r30)
	  lfs       f4, 0xC(r5)
	  lfs       f0, 0x4(r30)
	  fadds     f3, f2, f1
	  stfs      f2, 0x8(r1)
	  fadds     f1, f5, f1
	  fadds     f2, f6, f0
	  stfs      f6, 0xC(r1)
	  fadds     f0, f4, f0
	  stfs      f5, 0x10(r1)
	  stfs      f4, 0x14(r1)
	  stfs      f3, 0x8(r1)
	  stfs      f2, 0xC(r1)
	  stfs      f1, 0x10(r1)
	  stfs      f0, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC8(r12)
	  mtctr     r12
	  bctrl
	  bl        0xA109C
	  li        r3, 0x9
	  li        r4, 0x1
	  bl        0xA0C44
	  li        r3, 0xB
	  li        r4, 0x1
	  bl        0xA0C38
	  li        r3, 0xD
	  li        r4, 0x1
	  bl        0xA0C2C
	  li        r3, 0x1
	  bl        0xA193C
	  lwz       r4, 0x100(r31)
	  cmplwi    r4, 0
	  beq-      .loc_0x400
	  lwz       r0, 0x104(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x400
	  lwz       r0, 0x108(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x400
	  lwz       r3, 0x10C(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x400
	  lwz       r5, 0x20(r3)
	  lis       r10, 0x4330
	  lwz       r9, 0x20(r4)
	  mr        r3, r31
	  lhz       r0, 0x2(r5)
	  li        r7, 0x1
	  lhz       r8, 0x2(r9)
	  xoris     r6, r0, 0x8000
	  lhz       r0, 0x4(r9)
	  stw       r6, 0x1C(r1)
	  xoris     r8, r8, 0x8000
	  lhz       r5, 0x4(r5)
	  xoris     r0, r0, 0x8000
	  stw       r10, 0x18(r1)
	  lfd       f5, -0x7AE0(r2)
	  xoris     r9, r5, 0x8000
	  lfd       f0, 0x18(r1)
	  lfs       f3, 0x8(r30)
	  fsubs     f0, f0, f5
	  stw       r9, 0x24(r1)
	  lfs       f31, 0x0(r30)
	  stw       r10, 0x20(r1)
	  fsubs     f30, f3, f0
	  lfs       f28, 0x4(r30)
	  lfd       f0, 0x20(r1)
	  fmr       f1, f31
	  stw       r8, 0x2C(r1)
	  fmr       f2, f28
	  stw       r10, 0x28(r1)
	  fsubs     f3, f0, f5
	  lfs       f4, 0xC(r30)
	  lfd       f0, 0x28(r1)
	  fsubs     f27, f4, f3
	  stw       r0, 0x34(r1)
	  fsubs     f3, f0, f5
	  lbz       r6, 0x144(r31)
	  stw       r10, 0x30(r1)
	  rlwinm    r5,r6,25,31,31
	  lfd       f0, 0x30(r1)
	  fadds     f26, f31, f3
	  rlwinm    r6,r6,26,31,31
	  fsubs     f0, f0, f5
	  fadds     f25, f28, f0
	  bl        0xBF4
	  lbz       r3, 0x144(r31)
	  fmr       f1, f30
	  lbz       r0, 0x145(r31)
	  fmr       f2, f28
	  lwz       r4, 0x104(r31)
	  rlwinm    r5,r3,27,31,31
	  rlwinm    r6,r3,28,31,31
	  rlwinm    r7,r0,0,31,31
	  mr        r3, r31
	  bl        0xBCC
	  lwz       r4, 0x104(r31)
	  lis       r0, 0x4330
	  lbz       r7, 0x144(r31)
	  fsubs     f29, f30, f26
	  lwz       r3, 0x20(r4)
	  lis       r6, 0x1
	  stw       r0, 0x38(r1)
	  rlwinm    r5,r7,28,31,31
	  lhz       r3, 0x4(r3)
	  rlwinm    r8,r7,27,31,31
	  lfd       f4, -0x7AE0(r2)
	  xoris     r0, r3, 0x8000
	  subi      r7, r6, 0x8000
	  stw       r0, 0x3C(r1)
	  neg       r3, r5
	  andc      r6, r7, r3
	  neg       r0, r8
	  lfd       f0, 0x38(r1)
	  and       r5, r7, r0
	  xori      r0, r6, 0x8000
	  fmr       f1, f26
	  fmr       f2, f28
	  mr        r3, r31
	  fmr       f3, f29
	  mr        r7, r5
	  fsubs     f4, f0, f4
	  rlwinm    r8,r0,0,16,31
	  li        r9, 0
	  bl        0x9D8
	  lbz       r3, 0x144(r31)
	  fmr       f1, f30
	  lbz       r0, 0x145(r31)
	  fmr       f2, f27
	  lwz       r4, 0x10C(r31)
	  rlwinm    r5,r3,31,31,31
	  rlwinm    r6,r3,0,31,31
	  rlwinm    r7,r0,31,31,31
	  mr        r3, r31
	  bl        0xB30
	  lwz       r4, 0x10C(r31)
	  lis       r5, 0x1
	  lbz       r6, 0x144(r31)
	  subi      r7, r5, 0x8000
	  lwz       r3, 0x20(r4)
	  lis       r0, 0x4330
	  rlwinm    r5,r6,0,31,31
	  rlwinm    r8,r6,31,31,31
	  lhz       r9, 0x4(r3)
	  neg       r3, r5
	  andc      r6, r7, r3
	  stw       r0, 0x40(r1)
	  xoris     r3, r9, 0x8000
	  neg       r5, r8
	  stw       r3, 0x44(r1)
	  and       r5, r7, r5
	  xori      r0, r6, 0x8000
	  lfd       f4, -0x7AE0(r2)
	  lfd       f0, 0x40(r1)
	  fmr       f1, f26
	  fmr       f2, f27
	  mr        r3, r31
	  fmr       f3, f29
	  mr        r7, r5
	  fsubs     f4, f0, f4
	  rlwinm    r8,r0,0,16,31
	  li        r9, 0
	  bl        0x940
	  lwz       r4, 0x10C(r31)
	  lis       r0, 0x4330
	  lbz       r6, 0x144(r31)
	  fsubs     f29, f27, f25
	  lwz       r3, 0x20(r4)
	  lis       r5, 0x1
	  rlwinm    r7,r6,31,31,31
	  stw       r0, 0x48(r1)
	  lhz       r8, 0x2(r3)
	  neg       r3, r7
	  subi      r7, r5, 0x8000
	  xoris     r0, r8, 0x8000
	  lfd       f3, -0x7AE0(r2)
	  stw       r0, 0x4C(r1)
	  rlwinm    r6,r6,0,31,31
	  andc      r5, r7, r3
	  fmr       f1, f30
	  lfd       f0, 0x48(r1)
	  neg       r0, r6
	  and       r6, r7, r0
	  xori      r3, r5, 0x8000
	  fmr       f2, f25
	  fmr       f4, f29
	  rlwinm    r7,r3,0,16,31
	  fsubs     f3, f0, f3
	  mr        r3, r31
	  mr        r8, r6
	  li        r9, 0
	  bl        0x8CC
	  lbz       r3, 0x144(r31)
	  fmr       f1, f31
	  lbz       r0, 0x145(r31)
	  fmr       f2, f27
	  lwz       r4, 0x108(r31)
	  rlwinm    r5,r3,29,31,31
	  rlwinm    r6,r3,30,31,31
	  rlwinm    r7,r0,30,31,31
	  mr        r3, r31
	  bl        0xA24
	  lwz       r4, 0x108(r31)
	  lis       r5, 0x1
	  lis       r0, 0x4330
	  lbz       r6, 0x144(r31)
	  lwz       r3, 0x20(r4)
	  subi      r7, r5, 0x8000
	  rlwinm    r5,r6,29,31,31
	  rlwinm    r6,r6,30,31,31
	  lhz       r8, 0x2(r3)
	  neg       r3, r5
	  andc      r5, r7, r3
	  stw       r0, 0x50(r1)
	  xoris     r3, r8, 0x8000
	  neg       r6, r6
	  stw       r3, 0x54(r1)
	  and       r6, r7, r6
	  xori      r0, r5, 0x8000
	  lfd       f3, -0x7AE0(r2)
	  lfd       f0, 0x50(r1)
	  fmr       f1, f31
	  fmr       f2, f25
	  rlwinm    r7,r0,0,16,31
	  fmr       f4, f29
	  mr        r3, r31
	  fsubs     f3, f0, f3
	  mr        r8, r6
	  li        r9, 0
	  bl        0x834

	.loc_0x400:
	  li        r3, 0
	  li        r4, 0x4
	  bl        0xA4AF0
	  li        r3, 0
	  li        r4, 0xFF
	  li        r5, 0xFF
	  li        r6, 0x4
	  bl        0xA507C
	  li        r3, 0
	  bl        0xA15F4
	  li        r3, 0xD
	  li        r4, 0
	  bl        0xA08D0
	  psq_l     f31,0xC8(r1),0,0
	  lfd       f31, 0xC0(r1)
	  psq_l     f30,0xB8(r1),0,0
	  lfd       f30, 0xB0(r1)
	  psq_l     f29,0xA8(r1),0,0
	  lfd       f29, 0xA0(r1)
	  psq_l     f28,0x98(r1),0,0
	  lfd       f28, 0x90(r1)
	  psq_l     f27,0x88(r1),0,0
	  lfd       f27, 0x80(r1)
	  psq_l     f26,0x78(r1),0,0
	  lfd       f26, 0x70(r1)
	  psq_l     f25,0x68(r1),0,0
	  lfd       f25, 0x60(r1)
	  lwz       r31, 0x5C(r1)
	  lwz       r0, 0xD4(r1)
	  lwz       r30, 0x58(r1)
	  mtlr      r0
	  addi      r1, r1, 0xD0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80043A08
 * Size:	000138
 */
void J2DWindow::draw(const JGeometry::TBox2<float>&, const JGeometry::TBox2<float>&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x60(r1)
	  mflr      r0
	  lfd       f4, -0x7AE0(r2)
	  stw       r0, 0x64(r1)
	  stw       r31, 0x5C(r1)
	  mr        r31, r5
	  stw       r30, 0x58(r1)
	  mr        r30, r4
	  lis       r4, 0x4330
	  lfs       f2, 0x8(r30)
	  stw       r29, 0x54(r1)
	  mr        r29, r3
	  lfs       f1, 0x0(r30)
	  lha       r0, 0x140(r3)
	  stw       r4, 0x48(r1)
	  fsubs     f2, f2, f1
	  xoris     r0, r0, 0x8000
	  stw       r0, 0x4C(r1)
	  lfd       f0, 0x48(r1)
	  fsubs     f0, f0, f4
	  fcmpo     cr0, f2, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x11C
	  lha       r0, 0x142(r29)
	  stw       r4, 0x48(r1)
	  xoris     r0, r0, 0x8000
	  lfs       f3, 0xC(r30)
	  stw       r0, 0x4C(r1)
	  lfs       f2, 0x4(r30)
	  lfd       f0, 0x48(r1)
	  fsubs     f3, f3, f2
	  fsubs     f0, f0, f4
	  fcmpo     cr0, f3, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x11C
	  lbz       r0, 0xB0(r29)
	  cmplwi    r0, 0
	  beq-      .loc_0x11C
	  lwz       r12, 0x0(r3)
	  lfs       f3, -0x7AD0(r2)
	  lwz       r12, 0x48(r12)
	  fmr       f4, f3
	  mtctr     r12
	  bctrl
	  addi      r3, r29, 0x50
	  li        r4, 0
	  bl        0xA5AB8
	  li        r3, 0
	  bl        0xA5B50
	  lfs       f1, 0xC(r30)
	  mr        r3, r29
	  lfs       f0, 0x4(r30)
	  mr        r5, r31
	  lbz       r0, 0xB2(r29)
	  addi      r4, r1, 0x8
	  lfs       f2, 0x8(r30)
	  fsubs     f3, f1, f0
	  lfs       f1, 0x0(r30)
	  stb       r0, 0xB3(r29)
	  lfs       f0, -0x7AD0(r2)
	  fsubs     f1, f2, f1
	  stfs      f3, 0x14(r1)
	  stfs      f0, 0x8(r1)
	  stfs      f0, 0xC(r1)
	  stfs      f1, 0x10(r1)
	  bl        -0x588
	  addi      r3, r1, 0x18
	  bl        0xA678C
	  addi      r3, r1, 0x18
	  li        r4, 0
	  bl        0xA5A58

	.loc_0x11C:
	  lwz       r0, 0x64(r1)
	  lwz       r31, 0x5C(r1)
	  lwz       r30, 0x58(r1)
	  lwz       r29, 0x54(r1)
	  mtlr      r0
	  addi      r1, r1, 0x60
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80043B40
 * Size:	00012C
 */
void J2DWindow::resize(float, float)
{
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	stfd     f31, 0x40(r1)
	psq_st   f31, 72(r1), 0, qr0
	stfd     f30, 0x30(r1)
	psq_st   f30, 56(r1), 0, qr0
	stfd     f29, 0x20(r1)
	psq_st   f29, 40(r1), 0, qr0
	stfd     f28, 0x10(r1)
	psq_st   f28, 24(r1), 0, qr0
	stw      r31, 0xc(r1)
	mr       r31, r3
	fmr      f28, f1
	lfs      f5, 0x28(r3)
	fmr      f29, f2
	lfs      f4, 0x20(r3)
	lfs      f3, 0x2c(r3)
	lfs      f0, 0x24(r3)
	fsubs    f31, f5, f4
	fsubs    f30, f3, f0
	bl       resize__7J2DPaneFff
	fsubs    f31, f28, f31
	lfs      f0, 0x11c(r31)
	fsubs    f30, f29, f30
	fadds    f0, f0, f31
	stfs     f0, 0x11c(r31)
	lfs      f0, 0x120(r31)
	fadds    f0, f0, f30
	stfs     f0, 0x120(r31)
	lwz      r31, 0xdc(r31)
	cmplwi   r31, 0
	beq      lbl_80043C30
	addi     r31, r31, -12
	b        lbl_80043C30

lbl_80043BCC:
	lwz      r3, 0xc(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	clrlwi   r0, r3, 0x10
	cmplwi   r0, 0x13
	bne      lbl_80043C20
	lwz      r3, 0xc(r31)
	lbz      r0, 0xb5(r3)
	cmplwi   r0, 0
	beq      lbl_80043C20
	lfs      f3, 0x28(r3)
	lfs      f2, 0x20(r3)
	lfs      f1, 0x2c(r3)
	lfs      f0, 0x24(r3)
	fsubs    f2, f3, f2
	fsubs    f0, f1, f0
	fadds    f1, f31, f2
	fadds    f2, f30, f0
	bl       resize__7J2DPaneFff

lbl_80043C20:
	lwz      r31, 0x18(r31)
	cmplwi   r31, 0
	beq      lbl_80043C30
	addi     r31, r31, -12

lbl_80043C30:
	cmplwi   r31, 0
	bne      lbl_80043BCC
	psq_l    f31, 72(r1), 0, qr0
	lfd      f31, 0x40(r1)
	psq_l    f30, 56(r1), 0, qr0
	lfd      f30, 0x30(r1)
	psq_l    f29, 40(r1), 0, qr0
	lfd      f29, 0x20(r1)
	psq_l    f28, 24(r1), 0, qr0
	lfd      f28, 0x10(r1)
	lwz      r0, 0x54(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

/*
 * --INFO--
 * Address:	80043C6C
 * Size:	0000AC
 */
void J2DWindow::setContentsColor(JUtility::TColor, JUtility::TColor, JUtility::TColor, JUtility::TColor)
{
	/*
	.loc_0x0:
	  lwz       r0, 0x0(r4)
	  stwu      r1, -0x20(r1)
	  lwz       r4, 0x0(r5)
	  stw       r0, 0x14(r1)
	  lwz       r0, 0x0(r6)
	  lbz       r6, 0x14(r1)
	  lbz       r5, 0x15(r1)
	  stb       r6, 0x128(r3)
	  stw       r4, 0x10(r1)
	  lbz       r4, 0x16(r1)
	  stb       r5, 0x129(r3)
	  lbz       r5, 0x17(r1)
	  stb       r4, 0x12A(r3)
	  lbz       r4, 0x10(r1)
	  stb       r5, 0x12B(r3)
	  lbz       r5, 0x11(r1)
	  stb       r4, 0x12C(r3)
	  lbz       r4, 0x12(r1)
	  stb       r5, 0x12D(r3)
	  lbz       r5, 0x13(r1)
	  stw       r0, 0xC(r1)
	  lwz       r0, 0x0(r7)
	  stb       r4, 0x12E(r3)
	  lbz       r4, 0xC(r1)
	  stb       r5, 0x12F(r3)
	  lbz       r6, 0xD(r1)
	  stb       r4, 0x130(r3)
	  lbz       r5, 0xE(r1)
	  stb       r6, 0x131(r3)
	  lbz       r4, 0xF(r1)
	  stw       r0, 0x8(r1)
	  stb       r5, 0x132(r3)
	  lbz       r0, 0x8(r1)
	  stb       r4, 0x133(r3)
	  lbz       r5, 0x9(r1)
	  stb       r0, 0x134(r3)
	  lbz       r4, 0xA(r1)
	  stb       r5, 0x135(r3)
	  lbz       r0, 0xB(r1)
	  stb       r4, 0x136(r3)
	  stb       r0, 0x137(r3)
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80043D18
 * Size:	000068
 */
void J2DWindow::drawSelf(float, float)
{
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	stfd     f31, 0x48(r1)
	fmr      f31, f2
	stfd     f30, 0x40(r1)
	fmr      f30, f1
	stw      r31, 0x3c(r1)
	mr       r31, r3
	addi     r3, r1, 8
	bl       PSMTXIdentity
	mr       r3, r31
	fmr      f1, f30
	lwz      r12, 0(r31)
	fmr      f2, f31
	addi     r4, r1, 8
	lwz      r12, 0x38(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x54(r1)
	lfd      f31, 0x48(r1)
	lfd      f30, 0x40(r1)
	lwz      r31, 0x3c(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

/*
 * --INFO--
 * Address:	80043D80
 * Size:	0000F8
 */
void J2DWindow::drawSelf(float, float, float (*)[3][4])
{
	/*
	stwu     r1, -0x60(r1)
	mflr     r0
	lfd      f3, lbl_80516880@sda21(r2)
	stw      r0, 0x64(r1)
	stw      r31, 0x5c(r1)
	mr       r31, r3
	lis      r3, 0x4330
	lfs      f0, 0x20(r31)
	stw      r3, 0x48(r1)
	fadds    f5, f0, f1
	stfs     f0, 8(r1)
	lfs      f0, 0x24(r31)
	stfs     f0, 0xc(r1)
	fadds    f4, f0, f2
	lfs      f0, 0x28(r31)
	stfs     f0, 0x10(r1)
	fadds    f0, f0, f1
	lfs      f6, 0x2c(r31)
	fsubs    f1, f0, f5
	fadds    f2, f6, f2
	stfs     f6, 0x14(r1)
	stfs     f5, 8(r1)
	stfs     f4, 0xc(r1)
	stfs     f0, 0x10(r1)
	stfs     f2, 0x14(r1)
	lha      r0, 0x140(r31)
	xoris    r0, r0, 0x8000
	stw      r0, 0x4c(r1)
	lfd      f0, 0x48(r1)
	fsubs    f0, f0, f3
	fcmpo    cr0, f1, f0
	cror     2, 1, 2
	bne      lbl_80043E58
	lha      r0, 0x142(r31)
	fsubs    f1, f2, f4
	stw      r3, 0x48(r1)
	xoris    r0, r0, 0x8000
	stw      r0, 0x4c(r1)
	lfd      f0, 0x48(r1)
	fsubs    f0, f0, f3
	fcmpo    cr0, f1, f0
	cror     2, 1, 2
	bne      lbl_80043E58
	mr       r3, r4
	addi     r4, r31, 0x80
	addi     r5, r1, 0x18
	bl       PSMTXConcat
	addi     r3, r1, 0x18
	li       r4, 0
	bl       GXLoadPosMtxImm
	mr       r3, r31
	addi     r4, r1, 8
	addi     r5, r31, 0x114
	bl "draw_private__9J2DWindowFRCQ29JGeometry8TBox2<f>RCQ29JGeometry8TBox2<f>"

lbl_80043E58:
	mr       r3, r31
	addi     r4, r31, 0x114
	bl       "clip__7J2DPaneFRCQ29JGeometry8TBox2<f>"
	lwz      r0, 0x64(r1)
	lwz      r31, 0x5c(r1)
	mtlr     r0
	addi     r1, r1, 0x60
	blr
	*/
}

/*
 * --INFO--
 * Address:	80043E78
 * Size:	00033C
 */
void J2DWindow::drawContents(const JGeometry::TBox2<float>&)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	lfs      f1, 8(r4)
	stw      r0, 0x34(r1)
	li       r0, 0
	lfs      f0, 0(r4)
	stw      r31, 0x2c(r1)
	mr       r31, r4
	fcmpo    cr0, f1, f0
	stw      r30, 0x28(r1)
	mr       r30, r3
	stw      r29, 0x24(r1)
	cror     2, 1, 2
	bne      lbl_80043EC8
	lfs      f1, 0xc(r31)
	lfs      f0, 4(r31)
	fcmpo    cr0, f1, f0
	cror     2, 1, 2
	bne      lbl_80043EC8
	li       r0, 1

lbl_80043EC8:
	clrlwi.  r0, r0, 0x18
	beq      lbl_80044198
	li       r3, 1
	bl       GXSetNumChans
	li       r3, 0
	bl       GXSetNumTexGens
	li       r3, 1
	bl       GXSetNumTevStages
	li       r3, 0
	li       r4, 4
	bl       GXSetTevOp
	li       r3, 0
	li       r4, 0xff
	li       r5, 0xff
	li       r6, 4
	bl       GXSetTevOrder
	lwz      r0, 0x128(r30)
	clrlwi   r0, r0, 0x18
	cmplwi   r0, 0xff
	bne      lbl_80043F6C
	lwz      r0, 0x12c(r30)
	clrlwi   r0, r0, 0x18
	cmplwi   r0, 0xff
	bne      lbl_80043F6C
	lwz      r0, 0x130(r30)
	clrlwi   r0, r0, 0x18
	cmplwi   r0, 0xff
	bne      lbl_80043F6C
	lwz      r0, 0x134(r30)
	clrlwi   r0, r0, 0x18
	cmplwi   r0, 0xff
	bne      lbl_80043F6C
	lbz      r0, 0xb3(r30)
	cmplwi   r0, 0xff
	bne      lbl_80043F6C
	li       r3, 0
	li       r4, 1
	li       r5, 0
	li       r6, 0xf
	bl       GXSetBlendMode
	b        lbl_80043F80

lbl_80043F6C:
	li       r3, 1
	li       r4, 4
	li       r5, 5
	li       r6, 0xf
	bl       GXSetBlendMode

lbl_80043F80:
	bl       GXClearVtxDesc
	li       r3, 9
	li       r4, 1
	bl       GXSetVtxDesc
	li       r3, 0xb
	li       r4, 1
	bl       GXSetVtxDesc
	li       r3, 4
	li       r4, 0
	li       r5, 0
	li       r6, 1
	li       r7, 0
	li       r8, 0
	li       r9, 2
	bl       GXSetChanCtrl
	li       r3, 0
	bl       GXSetNumIndStages
	li       r29, 0

lbl_80043FC8:
	mr       r3, r29
	bl       GXSetTevDirect
	addi     r29, r29, 1
	cmpwi    r29, 0x10
	blt      lbl_80043FC8
	lwz      r0, 0x110(r30)
	cmplwi   r0, 0
	bne      lbl_80044148
	lbz      r7, 0xb3(r30)
	lwz      r5, 0x128(r30)
	lwz      r4, 0x130(r30)
	cmplwi   r7, 0xff
	lwz      r3, 0x12c(r30)
	lwz      r0, 0x134(r30)
	stw      r5, 0x14(r1)
	stw      r4, 0x10(r1)
	stw      r3, 0xc(r1)
	stw      r0, 8(r1)
	beq      lbl_8004409C
	lbz      r0, 0x17(r1)
	lis      r3, 0x80808081@ha
	lbz      r4, 0x13(r1)
	addi     r9, r3, 0x80808081@l
	mullw    r5, r0, r7
	lbz      r0, 0xb(r1)
	lbz      r3, 0xf(r1)
	mullw    r6, r4, r7
	mullw    r4, r3, r7
	mullw    r0, r0, r7
	mulhw    r7, r9, r5
	mulhw    r3, r9, r6
	add      r5, r7, r5
	srawi    r7, r5, 7
	mulhw    r5, r9, r4
	srwi     r8, r7, 0x1f
	add      r3, r3, r6
	add      r7, r7, r8
	srawi    r6, r3, 7
	stb      r7, 0x17(r1)
	add      r4, r5, r4
	srwi     r5, r6, 0x1f
	mulhw    r3, r9, r0
	add      r6, r6, r5
	srawi    r4, r4, 7
	stb      r6, 0x13(r1)
	srwi     r5, r4, 0x1f
	add      r0, r3, r0
	srawi    r0, r0, 7
	add      r4, r4, r5
	srwi     r3, r0, 0x1f
	stb      r4, 0xf(r1)
	add      r0, r0, r3
	stb      r0, 0xb(r1)

lbl_8004409C:
	li       r3, 0
	li       r4, 9
	li       r5, 1
	li       r6, 4
	li       r7, 0
	bl       GXSetVtxAttrFmt
	li       r3, 0x80
	li       r4, 0
	li       r5, 4
	bl       GXBegin
	lfs      f2, 0(r31)
	lis      r10, 0xCC008000@ha
	lfs      f3, 4(r31)
	li       r3, 0
	stfs     f2, 0xCC008000@l(r10)
	li       r4, 9
	lfs      f1, lbl_80516890@sda21(r2)
	li       r5, 1
	stfs     f3, -0x8000(r10)
	li       r6, 3
	lwz      r0, 0x14(r1)
	li       r7, 0
	stfs     f1, -0x8000(r10)
	lfs      f0, 8(r31)
	stw      r0, -0x8000(r10)
	lwz      r9, 0xc(r1)
	stfs     f0, -0x8000(r10)
	lfs      f4, 0xc(r31)
	stfs     f3, -0x8000(r10)
	lwz      r8, 8(r1)
	stfs     f1, -0x8000(r10)
	lwz      r0, 0x10(r1)
	stw      r9, -0x8000(r10)
	stfs     f0, -0x8000(r10)
	stfs     f4, -0x8000(r10)
	stfs     f1, -0x8000(r10)
	stw      r8, -0x8000(r10)
	stfs     f2, -0x8000(r10)
	stfs     f4, -0x8000(r10)
	stfs     f1, -0x8000(r10)
	stw      r0, -0x8000(r10)
	bl       GXSetVtxAttrFmt
	b        lbl_80044198

lbl_80044148:
	bl       GXClearVtxDesc
	li       r3, 9
	li       r4, 1
	bl       GXSetVtxDesc
	li       r3, 0xb
	li       r4, 1
	bl       GXSetVtxDesc
	li       r3, 0xd
	li       r4, 1
	bl       GXSetVtxDesc
	li       r3, 1
	bl       GXSetNumTexGens
	lfs      f2, 4(r31)
	mr       r3, r30
	lfs      f0, 0xc(r31)
	lfs      f1, 0(r31)
	lfs      f3, 8(r31)
	fsubs    f4, f0, f2
	fsubs    f3, f3, f1
	bl       drawContentsTexture__9J2DWindowFffff

lbl_80044198:
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	lwz      r29, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	800441B4
 * Size:	000180
 */
void J2DWindow::drawFrameTexture(JUTTexture*, float, float, float, float, unsigned short, unsigned short, unsigned short, unsigned short,
                                 bool)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x70(r1)
	  mflr      r0
	  stw       r0, 0x74(r1)
	  stfd      f31, 0x60(r1)
	  psq_st    f31,0x68(r1),0,0
	  stfd      f30, 0x50(r1)
	  psq_st    f30,0x58(r1),0,0
	  stfd      f29, 0x40(r1)
	  psq_st    f29,0x48(r1),0,0
	  stfd      f28, 0x30(r1)
	  psq_st    f28,0x38(r1),0,0
	  stmw      r26, 0x18(r1)
	  fmr       f28, f1
	  rlwinm.   r0,r9,0,24,31
	  fmr       f29, f2
	  mr        r26, r3
	  mr        r27, r4
	  mr        r28, r5
	  fadds     f31, f28, f3
	  mr        r29, r6
	  fadds     f30, f29, f4
	  mr        r30, r7
	  mr        r31, r8
	  beq-      .loc_0x90
	  mr        r3, r27
	  li        r4, 0
	  bl        -0x10BEC
	  lwz       r0, 0x138(r26)
	  mr        r3, r26
	  mr        r4, r27
	  addi      r5, r1, 0xC
	  stw       r0, 0x8(r1)
	  addi      r6, r1, 0x8
	  lwz       r0, 0x13C(r26)
	  stw       r0, 0xC(r1)
	  bl        0x680

	.loc_0x90:
	  lbz       r5, 0xB3(r26)
	  li        r0, -0x100
	  li        r3, 0
	  li        r4, 0x9
	  or        r0, r5, r0
	  li        r5, 0x1
	  stw       r0, 0x10(r1)
	  li        r6, 0x4
	  li        r7, 0
	  bl        0xA04A0
	  li        r3, 0x80
	  li        r4, 0
	  li        r5, 0x4
	  bl        0xA1710
	  lis       r8, 0xCC01
	  lfs       f0, -0x7AD0(r2)
	  stfs      f28, -0x8000(r8)
	  li        r3, 0
	  lwz       r0, 0x10(r1)
	  li        r4, 0x9
	  stfs      f29, -0x8000(r8)
	  li        r5, 0x1
	  li        r6, 0x3
	  li        r7, 0
	  stfs      f0, -0x8000(r8)
	  stw       r0, -0x8000(r8)
	  sth       r30, -0x8000(r8)
	  sth       r31, -0x8000(r8)
	  stfs      f31, -0x8000(r8)
	  stfs      f29, -0x8000(r8)
	  stfs      f0, -0x8000(r8)
	  stw       r0, -0x8000(r8)
	  sth       r28, -0x8000(r8)
	  sth       r31, -0x8000(r8)
	  stfs      f31, -0x8000(r8)
	  stfs      f30, -0x8000(r8)
	  stfs      f0, -0x8000(r8)
	  stw       r0, -0x8000(r8)
	  sth       r28, -0x8000(r8)
	  sth       r29, -0x8000(r8)
	  stfs      f28, -0x8000(r8)
	  stfs      f30, -0x8000(r8)
	  stfs      f0, -0x8000(r8)
	  stw       r0, -0x8000(r8)
	  sth       r30, -0x8000(r8)
	  sth       r29, -0x8000(r8)
	  bl        0xA040C
	  psq_l     f31,0x68(r1),0,0
	  lfd       f31, 0x60(r1)
	  psq_l     f30,0x58(r1),0,0
	  lfd       f30, 0x50(r1)
	  psq_l     f29,0x48(r1),0,0
	  lfd       f29, 0x40(r1)
	  psq_l     f28,0x38(r1),0,0
	  lfd       f28, 0x30(r1)
	  lmw       r26, 0x18(r1)
	  lwz       r0, 0x74(r1)
	  mtlr      r0
	  addi      r1, r1, 0x70
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80044334
 * Size:	00022C
 */
void J2DWindow::drawFrameTexture(JUTTexture*, float, float, bool, bool, bool)
{
	/*
	stwu     r1, -0x80(r1)
	mflr     r0
	stw      r0, 0x84(r1)
	stfd     f31, 0x70(r1)
	psq_st   f31, 120(r1), 0, qr0
	stfd     f30, 0x60(r1)
	psq_st   f30, 104(r1), 0, qr0
	stfd     f29, 0x50(r1)
	psq_st   f29, 88(r1), 0, qr0
	stfd     f28, 0x40(r1)
	psq_st   f28, 72(r1), 0, qr0
	stw      r31, 0x3c(r1)
	stw      r30, 0x38(r1)
	stw      r29, 0x34(r1)
	stw      r28, 0x30(r1)
	mr       r31, r4
	lwz      r4, 0x20(r4)
	lis      r8, 0x4330
	clrlwi.  r0, r7, 0x18
	lhz      r7, 2(r4)
	fmr      f29, f2
	lhz      r4, 4(r4)
	fmr      f28, f1
	xoris    r7, r7, 0x8000
	stw      r8, 0x18(r1)
	xoris    r0, r4, 0x8000
	stw      r7, 0x1c(r1)
	mr       r28, r3
	lfd      f2, lbl_80516880@sda21(r2)
	mr       r30, r5
	lfd      f0, 0x18(r1)
	mr       r29, r6
	stw      r0, 0x24(r1)
	fsubs    f1, f0, f2
	stw      r8, 0x20(r1)
	lfd      f0, 0x20(r1)
	fadds    f30, f28, f1
	fsubs    f0, f0, f2
	fadds    f31, f29, f0
	beq      lbl_80044404
	mr       r3, r31
	li       r4, 0
	bl       load__10JUTTextureF11_GXTexMapID
	lwz      r0, 0x138(r28)
	mr       r3, r28
	mr       r4, r31
	addi     r5, r1, 0xc
	stw      r0, 0x10(r1)
	addi     r6, r1, 0x10
	lwz      r0, 0x13c(r28)
	stw      r0, 0xc(r1)
	bl setTevMode__9J2DWindowFP10JUTTextureQ28JUtility6TColorQ28JUtility6TColor

lbl_80044404:
	lbz      r5, 0xb3(r28)
	li       r0, -256
	li       r3, 0
	li       r4, 9
	or       r0, r5, r0
	li       r5, 1
	stw      r0, 8(r1)
	li       r6, 4
	li       r7, 0
	bl       GXSetVtxAttrFmt
	li       r3, 0x80
	li       r4, 0
	li       r5, 4
	bl       GXBegin
	lis      r31, 0xCC008000@ha
	clrlwi   r3, r30, 0x18
	stfs     f28, 0xCC008000@l(r31)
	neg      r0, r3
	or       r11, r0, r3
	clrlwi   r3, r29, 0x18
	stfs     f29, -0x8000(r31)
	lis      r4, 0x00008000@ha
	lfs      f0, lbl_80516890@sda21(r2)
	neg      r0, r3
	lwz      r12, 8(r1)
	srawi    r5, r11, 0x1f
	stfs     f0, -0x8000(r31)
	addi     r10, r4, 0x00008000@l
	or       r9, r0, r3
	li       r3, 0
	stw      r12, -0x8000(r31)
	and      r5, r10, r5
	srawi    r0, r9, 0x1f
	li       r4, 9
	sth      r5, -0x8000(r31)
	and      r0, r10, r0
	srawi    r6, r11, 0x1f
	li       r5, 1
	sth      r0, -0x8000(r31)
	srawi    r0, r9, 0x1f
	srawi    r8, r11, 0x1f
	andc     r30, r10, r6
	stfs     f30, -0x8000(r31)
	srawi    r7, r9, 0x1f
	srawi    r6, r11, 0x1f
	and      r11, r10, r0
	stfs     f29, -0x8000(r31)
	srawi    r0, r9, 0x1f
	andc     r8, r10, r8
	andc     r9, r10, r7
	stfs     f0, -0x8000(r31)
	and      r29, r10, r6
	andc     r0, r10, r0
	li       r6, 3
	stw      r12, -0x8000(r31)
	li       r7, 0
	sth      r30, -0x8000(r31)
	sth      r11, -0x8000(r31)
	stfs     f30, -0x8000(r31)
	stfs     f31, -0x8000(r31)
	stfs     f0, -0x8000(r31)
	stw      r12, -0x8000(r31)
	sth      r8, -0x8000(r31)
	sth      r9, -0x8000(r31)
	stfs     f28, -0x8000(r31)
	stfs     f31, -0x8000(r31)
	stfs     f0, -0x8000(r31)
	stw      r12, -0x8000(r31)
	sth      r29, -0x8000(r31)
	sth      r0, -0x8000(r31)
	bl       GXSetVtxAttrFmt
	psq_l    f31, 120(r1), 0, qr0
	lfd      f31, 0x70(r1)
	psq_l    f30, 104(r1), 0, qr0
	lfd      f30, 0x60(r1)
	psq_l    f29, 88(r1), 0, qr0
	lfd      f29, 0x50(r1)
	psq_l    f28, 72(r1), 0, qr0
	lfd      f28, 0x40(r1)
	lwz      r31, 0x3c(r1)
	lwz      r30, 0x38(r1)
	lwz      r29, 0x34(r1)
	lwz      r0, 0x84(r1)
	lwz      r28, 0x30(r1)
	mtlr     r0
	addi     r1, r1, 0x80
	blr
	*/
}

/*
 * --INFO--
 * Address:	80044560
 * Size:	000360
 */
void J2DWindow::drawContentsTexture(float, float, float, float)
{
	/*
	stwu     r1, -0xe0(r1)
	mflr     r0
	stw      r0, 0xe4(r1)
	stfd     f31, 0xd0(r1)
	psq_st   f31, 216(r1), 0, qr0
	stfd     f30, 0xc0(r1)
	psq_st   f30, 200(r1), 0, qr0
	stfd     f29, 0xb0(r1)
	psq_st   f29, 184(r1), 0, qr0
	stfd     f28, 0xa0(r1)
	psq_st   f28, 168(r1), 0, qr0
	stfd     f27, 0x90(r1)
	psq_st   f27, 152(r1), 0, qr0
	stfd     f26, 0x80(r1)
	psq_st   f26, 136(r1), 0, qr0
	stfd     f25, 0x70(r1)
	psq_st   f25, 120(r1), 0, qr0
	stfd     f24, 0x60(r1)
	psq_st   f24, 104(r1), 0, qr0
	stmw     r25, 0x44(r1)
	mr       r31, r3
	li       r3, -1
	lwz      r4, 0x110(r31)
	lis      r5, 0x4330
	fmr      f30, f1
	lbz      r0, 0xb3(r31)
	lwz      r4, 0x20(r4)
	fmr      f31, f2
	stw      r5, 0x28(r1)
	cmplwi   r0, 0xff
	lhz      r6, 2(r4)
	fadds    f29, f30, f3
	lhz      r4, 4(r4)
	fadds    f28, f31, f4
	xoris    r6, r6, 0x8000
	stw      r5, 0x30(r1)
	xoris    r4, r4, 0x8000
	stw      r6, 0x2c(r1)
	lfd      f6, lbl_80516880@sda21(r2)
	stw      r4, 0x34(r1)
	lfd      f1, 0x28(r1)
	lfd      f0, 0x30(r1)
	fsubs    f2, f1, f6
	lfs      f5, lbl_80516894@sda21(r2)
	fsubs    f0, f0, f6
	lfs      f1, lbl_80516898@sda21(r2)
	stw      r3, 0x18(r1)
	fdivs    f3, f3, f2
	lbz      r25, 0x128(r31)
	lbz      r26, 0x129(r31)
	lbz      r27, 0x12a(r31)
	lbz      r28, 0x12b(r31)
	stw      r3, 0x1c(r1)
	fdivs    f4, f4, f0
	lbz      r29, 0x12c(r31)
	lbz      r30, 0x12d(r31)
	lbz      r12, 0x12e(r31)
	lbz      r11, 0x12f(r31)
	stw      r3, 0x20(r1)
	fsubs    f2, f3, f5
	lbz      r10, 0x130(r31)
	fsubs    f0, f4, f5
	lbz      r9, 0x131(r31)
	lbz      r8, 0x132(r31)
	fneg     f2, f2
	fneg     f0, f0
	lbz      r7, 0x133(r31)
	stw      r3, 0x24(r1)
	fmuls    f27, f2, f1
	lbz      r5, 0x134(r31)
	fmuls    f26, f0, f1
	lbz      r4, 0x135(r31)
	lbz      r3, 0x136(r31)
	fadds    f25, f27, f3
	lbz      r6, 0x137(r31)
	fadds    f24, f26, f4
	stb      r25, 0x18(r1)
	stb      r26, 0x19(r1)
	stb      r27, 0x1a(r1)
	stb      r28, 0x1b(r1)
	stb      r29, 0x1c(r1)
	stb      r30, 0x1d(r1)
	stb      r12, 0x1e(r1)
	stb      r11, 0x1f(r1)
	stb      r10, 0x20(r1)
	stb      r9, 0x21(r1)
	stb      r8, 0x22(r1)
	stb      r7, 0x23(r1)
	stb      r5, 0x24(r1)
	stb      r4, 0x25(r1)
	stb      r3, 0x26(r1)
	stb      r6, 0x27(r1)
	beq      lbl_8004474C
	lis      r3, 0x80808081@ha
	addi     r9, r3, 0x80808081@l
	mullw    r5, r28, r0
	mullw    r4, r7, r0
	mullw    r3, r11, r0
	mulhw    r7, r9, r5
	mullw    r0, r6, r0
	add      r5, r7, r5
	srawi    r7, r5, 7
	mulhw    r6, r9, r3
	srwi     r8, r7, 0x1f
	add      r7, r7, r8
	stb      r7, 0x1b(r1)
	mulhw    r5, r9, r4
	add      r3, r6, r3
	srawi    r6, r3, 7
	add      r4, r5, r4
	mulhw    r3, r9, r0
	srwi     r5, r6, 0x1f
	srawi    r4, r4, 7
	add      r6, r6, r5
	srwi     r5, r4, 0x1f
	stb      r6, 0x1f(r1)
	add      r0, r3, r0
	add      r4, r4, r5
	srawi    r0, r0, 7
	stb      r4, 0x23(r1)
	srwi     r3, r0, 0x1f
	add      r0, r0, r3
	stb      r0, 0x27(r1)

lbl_8004474C:
	lwz      r3, 0x110(r31)
	li       r4, 0
	bl       load__10JUTTextureF11_GXTexMapID
	li       r4, -1
	li       r0, 0
	stw      r4, 0xc(r1)
	mr       r3, r31
	addi     r5, r1, 0x14
	addi     r6, r1, 0xc
	stw      r0, 0x14(r1)
	stw      r4, 8(r1)
	lwz      r4, 0x110(r31)
	stw      r0, 0x10(r1)
	bl setTevMode__9J2DWindowFP10JUTTextureQ28JUtility6TColorQ28JUtility6TColor
	li       r3, 0
	li       r4, 0xd
	li       r5, 1
	li       r6, 4
	li       r7, 0
	bl       GXSetVtxAttrFmt
	li       r3, 0
	li       r4, 9
	li       r5, 1
	li       r6, 4
	li       r7, 0
	bl       GXSetVtxAttrFmt
	li       r3, 0x80
	li       r4, 0
	li       r5, 4
	bl       GXBegin
	lis      r10, 0xCC008000@ha
	lfs      f0, lbl_80516890@sda21(r2)
	stfs     f30, 0xCC008000@l(r10)
	li       r3, 0
	lwz      r0, 0x18(r1)
	li       r4, 0xd
	stfs     f31, -0x8000(r10)
	li       r5, 1
	lwz      r9, 0x1c(r1)
	li       r6, 2
	stfs     f0, -0x8000(r10)
	li       r7, 0xf
	lwz      r8, 0x24(r1)
	stw      r0, -0x8000(r10)
	lwz      r0, 0x20(r1)
	stfs     f27, -0x8000(r10)
	stfs     f26, -0x8000(r10)
	stfs     f29, -0x8000(r10)
	stfs     f31, -0x8000(r10)
	stfs     f0, -0x8000(r10)
	stw      r9, -0x8000(r10)
	stfs     f25, -0x8000(r10)
	stfs     f26, -0x8000(r10)
	stfs     f29, -0x8000(r10)
	stfs     f28, -0x8000(r10)
	stfs     f0, -0x8000(r10)
	stw      r8, -0x8000(r10)
	stfs     f25, -0x8000(r10)
	stfs     f24, -0x8000(r10)
	stfs     f30, -0x8000(r10)
	stfs     f28, -0x8000(r10)
	stfs     f0, -0x8000(r10)
	stw      r0, -0x8000(r10)
	stfs     f27, -0x8000(r10)
	stfs     f24, -0x8000(r10)
	bl       GXSetVtxAttrFmt
	li       r3, 0
	li       r4, 9
	li       r5, 1
	li       r6, 3
	li       r7, 0
	bl       GXSetVtxAttrFmt
	psq_l    f31, 216(r1), 0, qr0
	lfd      f31, 0xd0(r1)
	psq_l    f30, 200(r1), 0, qr0
	lfd      f30, 0xc0(r1)
	psq_l    f29, 184(r1), 0, qr0
	lfd      f29, 0xb0(r1)
	psq_l    f28, 168(r1), 0, qr0
	lfd      f28, 0xa0(r1)
	psq_l    f27, 152(r1), 0, qr0
	lfd      f27, 0x90(r1)
	psq_l    f26, 136(r1), 0, qr0
	lfd      f26, 0x80(r1)
	psq_l    f25, 120(r1), 0, qr0
	lfd      f25, 0x70(r1)
	psq_l    f24, 104(r1), 0, qr0
	lfd      f24, 0x60(r1)
	lmw      r25, 0x44(r1)
	lwz      r0, 0xe4(r1)
	mtlr     r0
	addi     r1, r1, 0xe0
	blr
	*/
}

/*
 * --INFO--
 * Address:	800448C0
 * Size:	0002D8
 */
void J2DWindow::setTevMode(JUTTexture*, JUtility::TColor, JUtility::TColor)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	lwz      r0, 0(r5)
	stw      r31, 0x2c(r1)
	mr       r31, r6
	cmplwi   r0, 0
	stw      r30, 0x28(r1)
	mr       r30, r5
	stw      r29, 0x24(r1)
	mr       r29, r4
	bne      lbl_800449E0
	lwz      r3, 0(r31)
	addis    r0, r3, 1
	cmplwi   r0, 0xffff
	bne      lbl_800449E0
	li       r3, 0
	li       r4, 0
	li       r5, 0
	li       r6, 4
	bl       GXSetTevOrder
	li       r3, 0
	li       r4, 0xf
	li       r5, 8
	li       r6, 0xa
	li       r7, 0xf
	bl       GXSetTevColorIn
	lwz      r3, 0x20(r29)
	lbz      r0, 1(r3)
	cmpwi    r0, 0
	beq      lbl_80044958
	li       r3, 0
	li       r4, 7
	li       r5, 4
	li       r6, 5
	li       r7, 7
	bl       GXSetTevAlphaIn
	b        lbl_80044988

lbl_80044958:
	li       r0, -1
	addi     r4, r1, 0x1c
	stw      r0, 0x18(r1)
	li       r3, 3
	stw      r0, 0x1c(r1)
	bl       GXSetTevColor
	li       r3, 0
	li       r4, 7
	li       r5, 3
	li       r6, 5
	li       r7, 7
	bl       GXSetTevAlphaIn

lbl_80044988:
	li       r3, 0
	li       r4, 0
	li       r5, 0
	li       r6, 0
	li       r7, 1
	li       r8, 0
	bl       GXSetTevColorOp
	li       r3, 0
	li       r4, 0
	li       r5, 0
	li       r6, 0
	li       r7, 1
	li       r8, 0
	bl       GXSetTevAlphaOp
	li       r3, 1
	bl       GXSetNumTevStages
	li       r3, 1
	li       r4, 4
	li       r5, 5
	li       r6, 0xf
	bl       GXSetBlendMode
	b        lbl_80044B4C

lbl_800449E0:
	li       r3, 0
	li       r4, 0
	li       r5, 0
	li       r6, 0xff
	bl       GXSetTevOrder
	lwz      r0, 0(r30)
	addi     r4, r1, 0x14
	li       r3, 1
	stw      r0, 0x14(r1)
	bl       GXSetTevColor
	lwz      r0, 0(r31)
	addi     r4, r1, 0x10
	li       r3, 2
	stw      r0, 0x10(r1)
	bl       GXSetTevColor
	li       r3, 0
	li       r4, 2
	li       r5, 4
	li       r6, 8
	li       r7, 0xf
	bl       GXSetTevColorIn
	lwz      r3, 0x20(r29)
	lbz      r0, 1(r3)
	cmpwi    r0, 0
	beq      lbl_80044A60
	li       r3, 0
	li       r4, 1
	li       r5, 2
	li       r6, 4
	li       r7, 7
	bl       GXSetTevAlphaIn
	b        lbl_80044A90

lbl_80044A60:
	li       r0, -1
	addi     r4, r1, 0xc
	stw      r0, 8(r1)
	li       r3, 3
	stw      r0, 0xc(r1)
	bl       GXSetTevColor
	li       r3, 0
	li       r4, 1
	li       r5, 2
	li       r6, 3
	li       r7, 7
	bl       GXSetTevAlphaIn

lbl_80044A90:
	li       r3, 0
	li       r4, 0
	li       r5, 0
	li       r6, 0
	li       r7, 1
	li       r8, 0
	bl       GXSetTevColorOp
	li       r3, 0
	li       r4, 0
	li       r5, 0
	li       r6, 0
	li       r7, 1
	li       r8, 0
	bl       GXSetTevAlphaOp
	li       r3, 1
	li       r4, 0xff
	li       r5, 0xff
	li       r6, 4
	bl       GXSetTevOrder
	li       r3, 1
	li       r4, 0xf
	li       r5, 0
	li       r6, 0xa
	li       r7, 0xf
	bl       GXSetTevColorIn
	li       r3, 1
	li       r4, 7
	li       r5, 0
	li       r6, 5
	li       r7, 7
	bl       GXSetTevAlphaIn
	li       r3, 1
	li       r4, 0
	li       r5, 0
	li       r6, 0
	li       r7, 1
	li       r8, 0
	bl       GXSetTevColorOp
	li       r3, 1
	li       r4, 0
	li       r5, 0
	li       r6, 0
	li       r7, 1
	li       r8, 0
	bl       GXSetTevAlphaOp
	li       r3, 2
	bl       GXSetNumTevStages

lbl_80044B4C:
	li       r3, 0
	li       r4, 1
	li       r5, 4
	li       r6, 0x3c
	li       r7, 0
	li       r8, 0x7d
	bl       GXSetTexCoordGen2
	li       r3, 1
	li       r4, 4
	li       r5, 5
	li       r6, 0xf
	bl       GXSetBlendMode
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	lwz      r29, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	80044B98
 * Size:	00007C
 */
void J2DWindow::getFrameTexture(unsigned char, unsigned char) const
{
	/*
	lis      r6, lbl_804784B8@ha
	stwu     r1, -0x20(r1)
	addi     r9, r6, lbl_804784B8@l
	clrlwi   r0, r4, 0x18
	lwz      r7, 0(r9)
	cmplwi   r0, 4
	lwz      r6, 4(r9)
	lwz      r0, 8(r9)
	lwz      r9, 0xc(r9)
	stw      r7, 8(r1)
	lwz      r8, 0x100(r3)
	stw      r6, 0xc(r1)
	lwz      r7, 0x104(r3)
	stw      r0, 0x10(r1)
	lwz      r6, 0x108(r3)
	lwz      r0, 0x10c(r3)
	stw      r9, 0x14(r1)
	stw      r8, 8(r1)
	stw      r7, 0xc(r1)
	stw      r6, 0x10(r1)
	stw      r0, 0x14(r1)
	bge      lbl_80044BF8
	clrlwi.  r0, r5, 0x18
	beq      lbl_80044C00

lbl_80044BF8:
	li       r3, 0
	b        lbl_80044C0C

lbl_80044C00:
	rlwinm   r0, r4, 2, 0x16, 0x1d
	addi     r3, r1, 8
	lwzx     r3, r3, r0

lbl_80044C0C:
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80044C14
 * Size:	0000B8
 */
bool J2DWindow::isUsed(const ResTIMG*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r5, lbl_804784C8@ha
	li       r11, 0
	stw      r0, 0x24(r1)
	addi     r10, r5, lbl_804784C8@l
	addi     r5, r1, 8
	lwz      r8, 0(r10)
	lwz      r7, 4(r10)
	lwz      r6, 8(r10)
	lwz      r0, 0xc(r10)
	lwz      r10, 0x10(r10)
	stw      r8, 8(r1)
	lwz      r9, 0x100(r3)
	stw      r7, 0xc(r1)
	lwz      r8, 0x104(r3)
	stw      r6, 0x10(r1)
	lwz      r7, 0x108(r3)
	stw      r0, 0x14(r1)
	lwz      r6, 0x10c(r3)
	lwz      r0, 0x110(r3)
	stw      r10, 0x18(r1)
	stw      r9, 8(r1)
	stw      r8, 0xc(r1)
	stw      r7, 0x10(r1)
	stw      r6, 0x14(r1)
	stw      r0, 0x18(r1)
	b        lbl_80044CAC

lbl_80044C84:
	rlwinm   r0, r11, 2, 0x16, 0x1d
	lwzx     r6, r5, r0
	cmplwi   r6, 0
	beq      lbl_80044CA8
	lwz      r0, 0x20(r6)
	cmplw    r0, r4
	bne      lbl_80044CA8
	li       r3, 1
	b        lbl_80044CBC

lbl_80044CA8:
	addi     r11, r11, 1

lbl_80044CAC:
	clrlwi   r0, r11, 0x18
	cmplwi   r0, 5
	blt      lbl_80044C84
	bl       isUsed__7J2DPaneFPC7ResTIMG

lbl_80044CBC:
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80044CCC
 * Size:	000008
 */
u32 J2DWindow::getTypeID() const { return 0x11; }

/*
 * --INFO--
 * Address:	80044CD4
 * Size:	000048
 */
void J2DWindow::draw(float, float, float, float)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	fadds    f3, f1, f3
	stw      r0, 0x24(r1)
	fadds    f0, f2, f4
	addi     r4, r1, 8
	stfs     f1, 8(r1)
	stfs     f2, 0xc(r1)
	stfs     f3, 0x10(r1)
	stfs     f0, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x94(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80044D1C
 * Size:	000028
 */
void J2DWindow::setBlack(JUtility::TColor)
{
	/*
	lbz      r5, 0(r4)
	lbz      r0, 1(r4)
	stb      r5, 0x13c(r3)
	lbz      r5, 2(r4)
	stb      r0, 0x13d(r3)
	lbz      r0, 3(r4)
	stb      r5, 0x13e(r3)
	stb      r0, 0x13f(r3)
	li       r3, 1
	blr
	*/
}

/*
 * --INFO--
 * Address:	80044D44
 * Size:	000028
 */
void J2DWindow::setWhite(JUtility::TColor)
{
	/*
	lbz      r5, 0(r4)
	lbz      r0, 1(r4)
	stb      r5, 0x138(r3)
	lbz      r5, 2(r4)
	stb      r0, 0x139(r3)
	lbz      r0, 3(r4)
	stb      r5, 0x13a(r3)
	stb      r0, 0x13b(r3)
	li       r3, 1
	blr
	*/
}

/*
 * --INFO--
 * Address:	80044D6C
 * Size:	000048
 */
void J2DWindow::setBlackWhite(JUtility::TColor, JUtility::TColor)
{
	/*
	lbz      r6, 0(r4)
	lbz      r0, 1(r4)
	stb      r6, 0x13c(r3)
	lbz      r6, 2(r4)
	stb      r0, 0x13d(r3)
	lbz      r0, 3(r4)
	stb      r6, 0x13e(r3)
	lbz      r4, 0(r5)
	stb      r0, 0x13f(r3)
	lbz      r0, 1(r5)
	stb      r4, 0x138(r3)
	lbz      r4, 2(r5)
	stb      r0, 0x139(r3)
	lbz      r0, 3(r5)
	stb      r4, 0x13a(r3)
	stb      r0, 0x13b(r3)
	li       r3, 1
	blr
	*/
}

/*
 * --INFO--
 * Address:	80044DB4
 * Size:	00000C
 */
void J2DWindow::getBlack() const
{
	/*
	lwz      r0, 0x13c(r4)
	stw      r0, 0(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80044DC0
 * Size:	00000C
 */
void J2DWindow::getWhite() const
{
	/*
	lwz      r0, 0x138(r4)
	stw      r0, 0(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80044DCC
 * Size:	000018
 */
void J2DWindow::getContentsTexture(unsigned char) const
{
	/*
	clrlwi.  r0, r4, 0x18
	beq      lbl_80044DDC
	li       r3, 0
	blr

lbl_80044DDC:
	lwz      r3, 0x110(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80044DE4
 * Size:	00001C
 */
void J2DWindow::getMaterial(J2DWindow::TMaterial&) const
{
	/*
	li       r0, 0
	stw      r0, 0(r4)
	stw      r0, 4(r4)
	stw      r0, 8(r4)
	stw      r0, 0xc(r4)
	stw      r0, 0x10(r4)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80044E00
 * Size:	000008
 */
u32 J2DWindow::getFrameMaterial(unsigned char) const { return 0x0; }

/*
 * --INFO--
 * Address:	80044E08
 * Size:	000008
 */
u32 J2DWindow::getContentsMaterial() const { return 0x0; }

/*
 * --INFO--
 * Address:	80044E10
 * Size:	000020
 */
void J2DWindow::isUsed(const ResFONT*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	bl       isUsed__7J2DPaneFPC7ResFONT
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80044E30
 * Size:	000004
 */
void J2DWindow::rewriteAlpha() { }
