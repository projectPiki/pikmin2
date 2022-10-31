#include "JSystem/J2D/J2DPane.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_804786C8
    lbl_804786C8:
        .4byte 0x0F080A0F
        .4byte 0x0204080F
        .4byte 0x0F0A000F
        .4byte 0x07040507
        .4byte 0x01020407
        .4byte 0x07050007
        .4byte 0x00000001
        .4byte 0x00000000
        .4byte 0x01000000
        .4byte 0x00010000
        .4byte 0x00000001
        .4byte 0x00000000
        .4byte 0x01000000
        .4byte 0x00010000

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__12J2DTextBoxEx
    __vt__12J2DTextBoxEx:
        .4byte 0
        .4byte 0
        .4byte __dt__12J2DTextBoxExFv
        .4byte getTypeID__10J2DTextBoxCFv
        .4byte move__7J2DPaneFff
        .4byte add__7J2DPaneFff
        .4byte resize__10J2DTextBoxFff
        .4byte setCullBack__12J2DTextBoxExFb
        .4byte setCullBack__12J2DTextBoxExF11_GXCullMode
        .4byte setAlpha__12J2DTextBoxExFUc
        .4byte setConnectParent__10J2DTextBoxFb
        .4byte calcMtx__7J2DPaneFv
        .4byte update__7J2DPaneFv
        .4byte drawSelf__10J2DTextBoxFff
        .4byte drawSelf__12J2DTextBoxExFffPA3_A4_f
        .4byte search__7J2DPaneFUx
        .4byte searchUserInfo__7J2DPaneFUx
        .4byte makeMatrix__7J2DPaneFff
        .4byte makeMatrix__7J2DPaneFffff
        .4byte isUsed__12J2DTextBoxExFPC7ResTIMG
        .4byte isUsed__12J2DTextBoxExFPC7ResFONT
        .4byte clearAnmTransform__7J2DPaneFv
        .4byte rewriteAlpha__12J2DTextBoxExFv
        .4byte setAnimation__12J2DTextBoxExFP10J2DAnmBase
        .4byte setAnimation__12J2DTextBoxExFP15J2DAnmTransform
        .4byte setAnimation__12J2DTextBoxExFP11J2DAnmColor
        .4byte setAnimation__12J2DTextBoxExFP16J2DAnmTexPattern
        .4byte setAnimation__12J2DTextBoxExFP19J2DAnmTextureSRTKey
        .4byte setAnimation__12J2DTextBoxExFP15J2DAnmTevRegKey
        .4byte setAnimation__12J2DTextBoxExFP20J2DAnmVisibilityFull
        .4byte setAnimation__12J2DTextBoxExFP14J2DAnmVtxColor
        .4byte animationTransform__7J2DPaneFPC15J2DAnmTransform
        .4byte setVisibileAnimation__7J2DPaneFP20J2DAnmVisibilityFull
        .4byte setAnimationVF__7J2DPaneFP20J2DAnmVisibilityFull
        .4byte setVtxColorAnimation__7J2DPaneFP14J2DAnmVtxColor
        .4byte setAnimationVC__7J2DPaneFP14J2DAnmVtxColor
        .4byte animationPane__12J2DTextBoxExFPC15J2DAnmTransform
        .4byte draw__12J2DTextBoxExFff
        .4byte draw__12J2DTextBoxExFfff18J2DTextBoxHBinding
        .4byte setFont__12J2DTextBoxExFP7JUTFont
        .4byte getFont__12J2DTextBoxExCFv
        .4byte setBlack__12J2DTextBoxExFQ28JUtility6TColor
        .4byte setWhite__12J2DTextBoxExFQ28JUtility6TColor
        .4byte
   setBlackWhite__12J2DTextBoxExFQ28JUtility6TColorQ28JUtility6TColor .4byte
   getBlack__12J2DTextBoxExCFv .4byte getWhite__12J2DTextBoxExCFv .4byte
   getMaterial__12J2DTextBoxExCFv .4byte 0

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80516940
    lbl_80516940:
        .4byte 0x00000000
        .4byte 0x00000000
    .global lbl_80516948
    lbl_80516948:
        .4byte 0x43300000
        .4byte 0x80000000
    .global lbl_80516950
    lbl_80516950:
        .4byte 0x43300000
        .4byte 0x00000000
    .global lbl_80516958
    lbl_80516958:
        .4byte 0x38D1B717
    .global lbl_8051695C
    lbl_8051695C:
        .4byte 0x25730000
*/

/*
 * --INFO--
 * Address:	800596A8
 * Size:	000330
 */
J2DTextBoxEx::J2DTextBoxEx(J2DPane*, JSURandomInputStream*, unsigned long, J2DMaterial*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x80(r1)
	  mflr      r0
	  stw       r0, 0x84(r1)
	  stmw      r25, 0x64(r1)
	  mr        r27, r3
	  mr        r25, r4
	  mr        r28, r5
	  mr        r29, r6
	  mr        r30, r7
	  bl        -0x18758
	  lis       r3, 0x804A
	  li        r0, 0
	  addi      r4, r3, 0x1300
	  mr        r3, r28
	  stw       r4, 0x0(r27)
	  stw       r0, 0x144(r27)
	  lwz       r12, 0x0(r28)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  mr        r31, r3
	  mr        r3, r28
	  addi      r4, r1, 0x18
	  li        r5, 0x8
	  bl        -0x33334
	  lwz       r0, 0x18(r1)
	  mr        r3, r28
	  stw       r0, 0x8(r27)
	  lwz       r12, 0x0(r28)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  mr        r26, r3
	  mr        r3, r28
	  addi      r4, r1, 0x10
	  li        r5, 0x8
	  bl        -0x330EC
	  mr        r3, r27
	  mr        r4, r25
	  mr        r5, r28
	  bl        -0x2064C
	  lwz       r0, 0x14(r1)
	  mr        r3, r28
	  li        r5, 0
	  add       r4, r26, r0
	  bl        -0x33054
	  mr        r3, r28
	  addi      r4, r1, 0x20
	  li        r5, 0x20
	  bl        -0x33398
	  lhz       r3, 0x22(r1)
	  li        r0, 0
	  sth       r3, 0x13C(r27)
	  lhz       r3, 0x24(r1)
	  sth       r3, 0x13E(r27)
	  stw       r0, 0x138(r27)
	  lhz       r0, 0x13E(r27)
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0x148
	  mulli     r0, r0, 0x88
	  mr        r3, r27
	  add       r0, r30, r0
	  stw       r0, 0x138(r27)
	  lhz       r0, 0x13E(r27)
	  mulli     r0, r0, 0x88
	  add       r4, r30, r0
	  stw       r27, 0x4(r4)
	  lwz       r12, 0x0(r27)
	  lwz       r12, 0x58(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x138(r27)
	  cmplwi    r3, 0
	  beq-      .loc_0x148
	  lwz       r3, 0x70(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x148
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x100(r27)

	.loc_0x148:
	  lha       r0, 0x26(r1)
	  lis       r4, 0x4330
	  stw       r4, 0x40(r1)
	  mr        r3, r27
	  xoris     r0, r0, 0x8000
	  lfd       f2, -0x7A18(r2)
	  stw       r0, 0x44(r1)
	  lfd       f1, -0x7A10(r2)
	  lfd       f0, 0x40(r1)
	  stw       r4, 0x48(r1)
	  fsubs     f0, f0, f2
	  stw       r4, 0x50(r1)
	  stfs      f0, 0x114(r27)
	  lha       r0, 0x28(r1)
	  stw       r4, 0x58(r1)
	  xoris     r0, r0, 0x8000
	  stw       r0, 0x4C(r1)
	  lfd       f0, 0x48(r1)
	  fsubs     f0, f0, f2
	  stfs      f0, 0x118(r27)
	  lhz       r0, 0x2A(r1)
	  stw       r0, 0x54(r1)
	  lfd       f0, 0x50(r1)
	  fsubs     f0, f0, f1
	  stfs      f0, 0x11C(r27)
	  lhz       r0, 0x2C(r1)
	  stw       r0, 0x5C(r1)
	  lfd       f0, 0x58(r1)
	  fsubs     f0, f0, f1
	  stfs      f0, 0x120(r27)
	  lbz       r4, 0x2E(r1)
	  lbz       r0, 0x2F(r1)
	  rlwinm    r4,r4,2,0,29
	  or        r0, r4, r0
	  stb       r0, 0x130(r27)
	  lwz       r0, 0x30(r1)
	  stw       r0, 0xC(r1)
	  lbz       r4, 0xC(r1)
	  lbz       r0, 0xD(r1)
	  stb       r4, 0x104(r27)
	  lbz       r4, 0xE(r1)
	  stb       r0, 0x105(r27)
	  lbz       r0, 0xF(r1)
	  stb       r4, 0x106(r27)
	  stb       r0, 0x107(r27)
	  lwz       r0, 0x34(r1)
	  stw       r0, 0x8(r1)
	  lbz       r4, 0x8(r1)
	  lbz       r0, 0x9(r1)
	  stb       r4, 0x108(r27)
	  lbz       r4, 0xA(r1)
	  stb       r0, 0x109(r27)
	  lbz       r0, 0xB(r1)
	  stb       r4, 0x10A(r27)
	  stb       r0, 0x10B(r27)
	  lbz       r4, 0x38(r1)
	  lwz       r12, 0x0(r27)
	  neg       r0, r4
	  or        r0, r0, r4
	  lwz       r12, 0x28(r12)
	  rlwinm    r4,r0,1,31,31
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r29,0,6,6
	  li        r26, 0
	  bne-      .loc_0x270
	  lhz       r3, 0x3C(r1)
	  extsh     r0, r3
	  mr        r26, r3
	  cmpwi     r0, -0x1
	  bne-      .loc_0x270
	  lhz       r3, 0x3E(r1)
	  addi      r0, r3, 0x1
	  rlwinm    r26,r0,0,16,31

	.loc_0x270:
	  li        r0, 0
	  rlwinm.   r3,r26,0,16,31
	  sth       r0, 0x132(r27)
	  stw       r0, 0x124(r27)
	  beq-      .loc_0x28C
	  bl        -0x35980
	  stw       r3, 0x124(r27)

	.loc_0x28C:
	  lwz       r0, 0x124(r27)
	  cmplwi    r0, 0
	  beq-      .loc_0x2D4
	  sth       r26, 0x132(r27)
	  rlwinm    r3,r26,0,16,31
	  subi      r0, r3, 0x1
	  lhz       r26, 0x3E(r1)
	  cmpw      r0, r26
	  bge-      .loc_0x2B4
	  rlwinm    r26,r0,0,16,31

	.loc_0x2B4:
	  lwz       r4, 0x124(r27)
	  mr        r3, r28
	  rlwinm    r5,r26,0,16,31
	  bl        -0x3331C
	  lwz       r3, 0x124(r27)
	  rlwinm    r0,r26,0,16,31
	  li        r4, 0
	  stbx      r4, r3, r0

	.loc_0x2D4:
	  mr        r3, r28
	  lhz       r4, 0x3E(r1)
	  lwz       r12, 0x0(r28)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x1C(r1)
	  mr        r3, r28
	  li        r5, 0
	  add       r4, r31, r0
	  bl        -0x3329C
	  lfs       f0, -0x7A20(r2)
	  li        r0, 0
	  mr        r3, r27
	  stfs      f0, 0x10C(r27)
	  stfs      f0, 0x110(r27)
	  stb       r0, 0x131(r27)
	  stb       r0, 0x140(r27)
	  lmw       r25, 0x64(r1)
	  lwz       r0, 0x84(r1)
	  mtlr      r0
	  addi      r1, r1, 0x80
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800599D8
 * Size:	000090
 */
J2DTextBoxEx::~J2DTextBoxEx()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_80059A4C
	lis      r3, __vt__12J2DTextBoxEx@ha
	addi     r0, r3, __vt__12J2DTextBoxEx@l
	stw      r0, 0(r30)
	lbz      r0, 0x140(r30)
	cmplwi   r0, 0
	beq      lbl_80059A30
	lwz      r3, 0x138(r30)
	cmplwi   r3, 0
	beq      lbl_80059A30
	lwz      r12, 0(r3)
	li       r4, 1
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl

lbl_80059A30:
	mr       r3, r30
	li       r4, 0
	bl       __dt__10J2DTextBoxFv
	extsh.   r0, r31
	ble      lbl_80059A4C
	mr       r3, r30
	bl       __dl__FPv

lbl_80059A4C:
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
 * Address:	80059A68
 * Size:	000300
 */
void J2DTextBoxEx::drawSelf(float, float, float (*)[3][4])
{
	/*
	stwu     r1, -0x120(r1)
	mflr     r0
	stw      r0, 0x124(r1)
	stfd     f31, 0x110(r1)
	psq_st   f31, 280(r1), 0, qr0
	stfd     f30, 0x100(r1)
	psq_st   f30, 264(r1), 0, qr0
	stw      r31, 0xfc(r1)
	stw      r30, 0xf8(r1)
	mr       r30, r3
	fmr      f30, f1
	lwz      r3, 0x138(r3)
	fmr      f31, f2
	mr       r31, r4
	li       r4, 0
	cmplwi   r3, 0
	beq      lbl_80059ACC
	lwz      r3, 0x70(r3)
	cmplwi   r3, 0
	beq      lbl_80059ACC
	lwz      r12, 0(r3)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	mr       r4, r3

lbl_80059ACC:
	lwz      r5, 0x128(r30)
	lis      r0, 0x4330
	stw      r0, 0xb8(r1)
	addi     r3, r1, 0x50
	lfd      f2, lbl_80516948@sda21(r2)
	addi     r6, r1, 0x18
	stw      r5, 0x10(r1)
	addi     r5, r1, 0x1c
	addi     r7, r1, 0x14
	addi     r8, r1, 0x10
	lwz      r9, 0x12c(r30)
	stw      r0, 0xc8(r1)
	stw      r9, 0x14(r1)
	lwz      r0, 0x108(r30)
	stw      r0, 0x18(r1)
	lwz      r0, 0x104(r30)
	stw      r0, 0x1c(r1)
	lfs      f1, 0x114(r30)
	lfs      f0, 0x118(r30)
	fctiwz   f1, f1
	fctiwz   f0, f0
	stfd     f1, 0xb0(r1)
	stfd     f0, 0xc0(r1)
	lwz      r9, 0xb4(r1)
	lwz      r0, 0xc4(r1)
	xoris    r9, r9, 0x8000
	xoris    r0, r0, 0x8000
	stw      r9, 0xbc(r1)
	stw      r0, 0xcc(r1)
	lfd      f1, 0xb8(r1)
	lfd      f0, 0xc8(r1)
	fsubs    f1, f1, f2
	fsubs    f2, f0, f2
	bl
__ct__8J2DPrintFP7JUTFontffQ28JUtility6TColorQ28JUtility6TColorQ28JUtility6TColorQ28JUtility6TColor
	lfs      f0, 0x11c(r30)
	lis      r0, 0x4330
	lfs      f2, 0x120(r30)
	fctiwz   f1, f0
	stw      r0, 0xe8(r1)
	fctiwz   f3, f2
	lfd      f2, lbl_80516948@sda21(r2)
	stw      r0, 0xd8(r1)
	lfs      f0, lbl_80516940@sda21(r2)
	stfd     f1, 0xe0(r1)
	lwz      r0, 0xe4(r1)
	stfd     f3, 0xd0(r1)
	xoris    r0, r0, 0x8000
	stw      r0, 0xec(r1)
	lwz      r0, 0xd4(r1)
	lfd      f1, 0xe8(r1)
	xoris    r0, r0, 0x8000
	stw      r0, 0xdc(r1)
	fsubs    f3, f1, f2
	lfd      f1, 0xd8(r1)
	fcmpo    cr0, f3, f0
	fsubs    f1, f1, f2
	ble      lbl_80059BB4
	b        lbl_80059BB8

lbl_80059BB4:
	fmr      f3, f0

lbl_80059BB8:
	lfs      f0, lbl_80516940@sda21(r2)
	stfs     f3, 0xa0(r1)
	fcmpo    cr0, f1, f0
	ble      lbl_80059BCC
	b        lbl_80059BD0

lbl_80059BCC:
	fmr      f1, f0

lbl_80059BD0:
	stfs     f1, 0xa4(r1)
	lwz      r3, 0x138(r30)
	cmplwi   r3, 0
	beq      lbl_80059D34
	bl       setGX__11J2DMaterialFv
	mr       r3, r31
	addi     r4, r30, 0x80
	addi     r5, r1, 0x20
	bl       PSMTXConcat
	addi     r3, r1, 0x20
	li       r4, 0
	bl       GXLoadPosMtxImm
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
	lfs      f1, 0x20(r30)
	addi     r3, r1, 0x50
	lfs      f0, 0x24(r30)
	fadds    f1, f30, f1
	fadds    f2, f31, f0
	bl       locate__8J2DPrintFff
	lwz      r3, 0x138(r30)
	lbz      r0, 0xe(r3)
	cmplwi   r0, 0
	beq      lbl_80059D34
	lwz      r0, 0x124(r30)
	cmplwi   r0, 0
	beq      lbl_80059D34
	lhz      r0, 0x1c(r3)
	li       r31, 0xff
	clrlwi   r0, r0, 0x1f
	cmplwi   r0, 1
	bne      lbl_80059C84
	lbz      r0, 0xf(r3)
	cmpwi    r0, 1
	bne      lbl_80059CA8
	lbz      r31, 0xb3(r30)
	b        lbl_80059CA8

lbl_80059C84:
	lbz      r0, 0xb4(r30)
	cmplwi   r0, 0
	beq      lbl_80059CA8
	lbz      r0, 0xb3(r30)
	addi     r4, r1, 0xc
	li       r3, 2
	stw      r0, 8(r1)
	stw      r0, 0xc(r1)
	bl       GXSetChanMatColor

lbl_80059CA8:
	lfs      f1, 0x28(r30)
	lis      r0, 0x4330
	lfs      f0, 0x20(r30)
	mr       r7, r31
	lbz      r4, 0x130(r30)
	addi     r3, r1, 0x50
	fsubs    f2, f1, f0
	lfs      f3, lbl_80516958@sda21(r2)
	lfs      f1, 0x2c(r30)
	rlwinm   r5, r4, 0x1e, 0x1e, 0x1f
	lfs      f0, 0x24(r30)
	clrlwi   r6, r4, 0x1e
	fadds    f3, f3, f2
	stw      r0, 0xe0(r1)
	fsubs    f0, f1, f0
	lfd      f2, lbl_80516948@sda21(r2)
	stw      r0, 0xd0(r1)
	fctiwz   f1, f3
	fctiwz   f0, f0
	lwz      r4, 0x124(r30)
	lfs      f3, 0x10c(r30)
	stfd     f1, 0xe8(r1)
	lfs      f4, 0x110(r30)
	stfd     f0, 0xd8(r1)
	lwz      r8, 0xec(r1)
	lwz      r0, 0xdc(r1)
	xoris    r8, r8, 0x8000
	xoris    r0, r0, 0x8000
	stw      r8, 0xe4(r1)
	stw      r0, 0xd4(r1)
	lfd      f1, 0xe0(r1)
	lfd      f0, 0xd0(r1)
	fsubs    f1, f1, f2
	fsubs    f2, f0, f2
	bl printReturn__8J2DPrintFPCcff18J2DTextBoxHBinding18J2DTextBoxVBindingffUc

lbl_80059D34:
	addi     r3, r1, 0x50
	li       r4, -1
	bl       __dt__8J2DPrintFv
	psq_l    f31, 280(r1), 0, qr0
	lfd      f31, 0x110(r1)
	psq_l    f30, 264(r1), 0, qr0
	lfd      f30, 0x100(r1)
	lwz      r31, 0xfc(r1)
	lwz      r0, 0x124(r1)
	lwz      r30, 0xf8(r1)
	mtlr     r0
	addi     r1, r1, 0x120
	blr
	*/
}

/*
 * --INFO--
 * Address:	80059D68
 * Size:	000240
 */
void J2DTextBoxEx::draw(float, float)
{
	/*
	stwu     r1, -0xd0(r1)
	mflr     r0
	stw      r0, 0xd4(r1)
	stfd     f31, 0xc0(r1)
	psq_st   f31, 200(r1), 0, qr0
	stfd     f30, 0xb0(r1)
	psq_st   f30, 184(r1), 0, qr0
	stw      r31, 0xac(r1)
	mr       r31, r3
	fmr      f30, f1
	lbz      r0, 0xb0(r3)
	fmr      f31, f2
	cmplwi   r0, 0
	beq      lbl_80059F84
	lwz      r3, 0x138(r31)
	li       r4, 0
	cmplwi   r3, 0
	beq      lbl_80059DD0
	lwz      r3, 0x70(r3)
	cmplwi   r3, 0
	beq      lbl_80059DD0
	lwz      r12, 0(r3)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	mr       r4, r3

lbl_80059DD0:
	lwz      r0, 0x128(r31)
	addi     r3, r1, 0x48
	addi     r5, r1, 0x14
	addi     r6, r1, 0x10
	stw      r0, 8(r1)
	addi     r7, r1, 0xc
	addi     r8, r1, 8
	lwz      r0, 0x12c(r31)
	stw      r0, 0xc(r1)
	lwz      r0, 0x108(r31)
	stw      r0, 0x10(r1)
	lwz      r0, 0x104(r31)
	stw      r0, 0x14(r1)
	lfs      f1, 0x114(r31)
	lfs      f2, 0x118(r31)
	bl
__ct__8J2DPrintFP7JUTFontffQ28JUtility6TColorQ28JUtility6TColorQ28JUtility6TColorQ28JUtility6TColor
	lfs      f1, 0x11c(r31)
	lfs      f0, lbl_80516940@sda21(r2)
	lfs      f2, 0x120(r31)
	fcmpo    cr0, f1, f0
	ble      lbl_80059E28
	b        lbl_80059E2C

lbl_80059E28:
	fmr      f1, f0

lbl_80059E2C:
	lfs      f0, lbl_80516940@sda21(r2)
	stfs     f1, 0x98(r1)
	fcmpo    cr0, f2, f0
	ble      lbl_80059E40
	b        lbl_80059E44

lbl_80059E40:
	fmr      f2, f0

lbl_80059E44:
	stfs     f2, 0x9c(r1)
	lbz      r0, 0xb2(r31)
	stb      r0, 0xb3(r31)
	lwz      r3, 0x138(r31)
	cmplwi   r3, 0
	beq      lbl_80059F78
	bl       setGX__11J2DMaterialFv
	mr       r3, r31
	lfs      f3, lbl_80516940@sda21(r2)
	lwz      r12, 0(r31)
	fmr      f1, f30
	fmr      f2, f31
	lwz      r12, 0x48(r12)
	fmr      f4, f3
	mtctr    r12
	bctrl
	addi     r3, r31, 0x50
	li       r4, 0
	bl       GXLoadPosMtxImm
	li       r3, 0
	bl       GXSetCurrentMtx
	lwz      r3, 0x138(r31)
	lbz      r0, 0xe(r3)
	cmplwi   r0, 0
	bne      lbl_80059EB8
	addi     r3, r1, 0x48
	li       r4, -1
	bl       __dt__8J2DPrintFv
	b        lbl_80059F84

lbl_80059EB8:
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
	lwz      r6, 0x124(r31)
	cmplwi   r6, 0
	beq      lbl_80059F1C
	lwz      r3, 0x138(r31)
	li       r4, 0xff
	lbz      r0, 0xf(r3)
	cmpwi    r0, 1
	bne      lbl_80059F04
	lbz      r4, 0xb3(r31)

lbl_80059F04:
	lfs      f1, lbl_80516940@sda21(r2)
	addi     r3, r1, 0x48
	addi     r5, r2, lbl_8051695C@sda21
	fmr      f2, f1
	crset    6
	bl       print__8J2DPrintFffUcPCce

lbl_80059F1C:
	li       r31, 0

lbl_80059F20:
	mr       r3, r31
	li       r4, 0
	li       r5, 1
	li       r6, 2
	li       r7, 3
	bl       GXSetTevSwapModeTable
	addi     r31, r31, 1
	cmpwi    r31, 4
	blt      lbl_80059F20
	li       r3, 0
	bl       GXSetNumIndStages
	li       r31, 0

lbl_80059F50:
	mr       r3, r31
	bl       GXSetTevDirect
	addi     r31, r31, 1
	cmpwi    r31, 0x10
	blt      lbl_80059F50
	addi     r3, r1, 0x18
	bl       PSMTXIdentity
	addi     r3, r1, 0x18
	li       r4, 0
	bl       GXLoadPosMtxImm

lbl_80059F78:
	addi     r3, r1, 0x48
	li       r4, -1
	bl       __dt__8J2DPrintFv

lbl_80059F84:
	psq_l    f31, 200(r1), 0, qr0
	lfd      f31, 0xc0(r1)
	psq_l    f30, 184(r1), 0, qr0
	lfd      f30, 0xb0(r1)
	lwz      r0, 0xd4(r1)
	lwz      r31, 0xac(r1)
	mtlr     r0
	addi     r1, r1, 0xd0
	blr
	*/
}

/*
 * --INFO--
 * Address:	80059FA8
 * Size:	00026C
 */
void J2DTextBoxEx::draw(float, float, float, J2DTextBoxHBinding)
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
	stw      r31, 0xac(r1)
	stw      r30, 0xa8(r1)
	mr       r30, r3
	fmr      f29, f1
	lbz      r0, 0xb0(r3)
	fmr      f30, f2
	fmr      f31, f3
	mr       r31, r4
	cmplwi   r0, 0
	beq      lbl_8005A1E4
	lwz      r3, 0x138(r30)
	li       r4, 0
	cmplwi   r3, 0
	beq      lbl_8005A024
	lwz      r3, 0x70(r3)
	cmplwi   r3, 0
	beq      lbl_8005A024
	lwz      r12, 0(r3)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	mr       r4, r3

lbl_8005A024:
	lwz      r0, 0x128(r30)
	addi     r3, r1, 0x48
	addi     r5, r1, 0x14
	addi     r6, r1, 0x10
	stw      r0, 8(r1)
	addi     r7, r1, 0xc
	addi     r8, r1, 8
	lwz      r0, 0x12c(r30)
	stw      r0, 0xc(r1)
	lwz      r0, 0x108(r30)
	stw      r0, 0x10(r1)
	lwz      r0, 0x104(r30)
	stw      r0, 0x14(r1)
	lfs      f1, 0x114(r30)
	lfs      f2, 0x118(r30)
	bl
__ct__8J2DPrintFP7JUTFontffQ28JUtility6TColorQ28JUtility6TColorQ28JUtility6TColorQ28JUtility6TColor
	lfs      f1, 0x11c(r30)
	lfs      f0, lbl_80516940@sda21(r2)
	lfs      f2, 0x120(r30)
	fcmpo    cr0, f1, f0
	ble      lbl_8005A07C
	b        lbl_8005A080

lbl_8005A07C:
	fmr      f1, f0

lbl_8005A080:
	lfs      f0, lbl_80516940@sda21(r2)
	stfs     f1, 0x98(r1)
	fcmpo    cr0, f2, f0
	ble      lbl_8005A094
	b        lbl_8005A098

lbl_8005A094:
	fmr      f2, f0

lbl_8005A098:
	stfs     f2, 0x9c(r1)
	lbz      r0, 0xb2(r30)
	stb      r0, 0xb3(r30)
	lwz      r3, 0x138(r30)
	cmplwi   r3, 0
	beq      lbl_8005A1D8
	bl       setGX__11J2DMaterialFv
	mr       r3, r30
	lfs      f3, lbl_80516940@sda21(r2)
	lwz      r12, 0(r30)
	fmr      f1, f29
	fmr      f2, f30
	lwz      r12, 0x48(r12)
	fmr      f4, f3
	mtctr    r12
	bctrl
	addi     r3, r30, 0x50
	li       r4, 0
	bl       GXLoadPosMtxImm
	li       r3, 0
	bl       GXSetCurrentMtx
	lwz      r3, 0x138(r30)
	lbz      r0, 0xe(r3)
	cmplwi   r0, 0
	bne      lbl_8005A10C
	addi     r3, r1, 0x48
	li       r4, -1
	bl       __dt__8J2DPrintFv
	b        lbl_8005A1E4

lbl_8005A10C:
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
	lwz      r4, 0x124(r30)
	cmplwi   r4, 0
	beq      lbl_8005A17C
	lwz      r3, 0x138(r30)
	li       r7, 0xff
	lbz      r0, 0xf(r3)
	cmpwi    r0, 1
	bne      lbl_8005A158
	lbz      r7, 0xb3(r30)

lbl_8005A158:
	lfs      f2, lbl_80516940@sda21(r2)
	fmr      f1, f31
	lfs      f0, 0x120(r30)
	mr       r5, r31
	fmr      f3, f2
	addi     r3, r1, 0x48
	fneg     f4, f0
	li       r6, 2
	bl printReturn__8J2DPrintFPCcff18J2DTextBoxHBinding18J2DTextBoxVBindingffUc

lbl_8005A17C:
	li       r30, 0

lbl_8005A180:
	mr       r3, r30
	li       r4, 0
	li       r5, 1
	li       r6, 2
	li       r7, 3
	bl       GXSetTevSwapModeTable
	addi     r30, r30, 1
	cmpwi    r30, 4
	blt      lbl_8005A180
	li       r3, 0
	bl       GXSetNumIndStages
	li       r30, 0

lbl_8005A1B0:
	mr       r3, r30
	bl       GXSetTevDirect
	addi     r30, r30, 1
	cmpwi    r30, 0x10
	blt      lbl_8005A1B0
	addi     r3, r1, 0x18
	bl       PSMTXIdentity
	addi     r3, r1, 0x18
	li       r4, 0
	bl       GXLoadPosMtxImm

lbl_8005A1D8:
	addi     r3, r1, 0x48
	li       r4, -1
	bl       __dt__8J2DPrintFv

lbl_8005A1E4:
	psq_l    f31, 216(r1), 0, qr0
	lfd      f31, 0xd0(r1)
	psq_l    f30, 200(r1), 0, qr0
	lfd      f30, 0xc0(r1)
	psq_l    f29, 184(r1), 0, qr0
	lfd      f29, 0xb0(r1)
	lwz      r31, 0xac(r1)
	lwz      r0, 0xe4(r1)
	lwz      r30, 0xa8(r1)
	mtlr     r0
	addi     r1, r1, 0xe0
	blr
	*/
}

/*
 * --INFO--
 * Address:	8005A214
 * Size:	000064
 */
void J2DTextBoxEx::setFont(JUTFont*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	or.      r31, r4, r4
	stw      r30, 8(r1)
	mr       r30, r3
	beq      lbl_8005A260
	lwz      r3, 0x138(r30)
	cmplwi   r3, 0
	beq      lbl_8005A260
	lwz      r3, 0x70(r3)
	cmplwi   r3, 0
	beq      lbl_8005A260
	lwz      r12, 0(r3)
	lwz      r12, 0x94(r12)
	mtctr    r12
	bctrl
	stw      r31, 0x100(r30)

lbl_8005A260:
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
 * Address:	8005A278
 * Size:	00004C
 */
JUTResFont* J2DTextBoxEx::getFont() const
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lwz      r3, 0x138(r3)
	stw      r0, 0x14(r1)
	cmplwi   r3, 0
	beq      lbl_8005A2B0
	lwz      r3, 0x70(r3)
	cmplwi   r3, 0
	beq      lbl_8005A2B0
	lwz      r12, 0(r3)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	b        lbl_8005A2B4

lbl_8005A2B0:
	li       r3, 0

lbl_8005A2B4:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8005A2C4
 * Size:	0000A4
 */
void J2DTextBoxEx::setTevStage(bool)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	li       r4, 0
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r3, 0x138(r3)
	lwz      r3, 0x70(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x60(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r31, 0x18
	mr       r4, r3
	bne      lbl_8005A318
	mr       r3, r30
	li       r5, 0
	bl       setStage__12J2DTextBoxExFP11J2DTevStageQ212J2DTextBoxEx10stage_enum
	b        lbl_8005A350

lbl_8005A318:
	mr       r3, r30
	li       r5, 1
	bl       setStage__12J2DTextBoxExFP11J2DTevStageQ212J2DTextBoxEx10stage_enum
	lwz      r3, 0x138(r30)
	li       r4, 1
	lwz      r3, 0x70(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x60(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	mr       r3, r30
	li       r5, 2
	bl       setStage__12J2DTextBoxExFP11J2DTevStageQ212J2DTextBoxEx10stage_enum

lbl_8005A350:
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
 * Address:	8005A368
 * Size:	0002B0
 */
void J2DTextBoxEx::setStage(J2DTevStage*, J2DTextBoxEx::stage_enum)
{
	/*
	stwu     r1, -0x80(r1)
	lis      r3, lbl_804786C8@ha
	stmw     r18, 0x48(r1)
	addi     r28, r3, lbl_804786C8@l
	slwi     r27, r5, 2
	addi     r6, r1, 0x34
	addi     r3, r1, 0x35
	addi     r19, r1, 0x36
	mulli    r26, r5, 5
	addi     r20, r1, 0x37
	addi     r25, r1, 0x18
	addi     r21, r1, 0x1c
	addi     r22, r1, 0x1b
	addi     r23, r1, 0x1a
	addi     r24, r1, 0x19
	lwz      r8, 0(r28)
	lwz      r7, 4(r28)
	lwz      r0, 8(r28)
	stw      r8, 0x34(r1)
	lwz      r29, 0xc(r28)
	stw      r7, 0x38(r1)
	lwz      r30, 0x10(r28)
	stw      r0, 0x3c(r1)
	lwz      r31, 0x14(r28)
	lbzx     r0, r6, r27
	lwz      r12, 0x18(r28)
	slwi     r5, r0, 4
	lbzx     r0, r3, r27
	lwz      r11, 0x1c(r28)
	or       r18, r5, r0
	lwz      r10, 0x20(r28)
	lhz      r9, 0x24(r28)
	lbz      r8, 0x26(r28)
	lwz      r7, 0x28(r28)
	lwz      r6, 0x2c(r28)
	lwz      r5, 0x30(r28)
	lhz      r3, 0x34(r28)
	lbz      r0, 0x36(r28)
	lbzx     r19, r19, r27
	lbzx     r28, r20, r27
	slwi     r20, r19, 4
	stb      r18, 2(r4)
	or       r28, r20, r28
	stb      r28, 3(r4)
	stw      r12, 0x18(r1)
	lbz      r28, 1(r4)
	stw      r11, 0x1c(r1)
	rlwinm   r12, r28, 0, 0x1e, 0x1c
	stw      r10, 0x20(r1)
	sth      r9, 0x24(r1)
	stb      r8, 0x26(r1)
	lbzx     r11, r25, r26
	stw      r7, 8(r1)
	rlwinm   r8, r11, 2, 0x16, 0x1d
	cmplwi   r11, 1
	or       r10, r12, r8
	stw      r6, 0xc(r1)
	lbzx     r9, r21, r26
	stw      r29, 0x28(r1)
	lbzx     r8, r22, r26
	stw      r30, 0x2c(r1)
	lbzx     r7, r23, r26
	stw      r31, 0x30(r1)
	lbzx     r6, r24, r26
	stw      r5, 0x10(r1)
	sth      r3, 0x14(r1)
	stb      r0, 0x16(r1)
	stb      r10, 1(r4)
	bgt      lbl_8005A4A4
	lbz      r3, 1(r4)
	rlwinm   r0, r7, 4, 0x14, 0x1b
	rlwinm   r3, r3, 0, 0x1c, 0x19
	or       r0, r3, r0
	stb      r0, 1(r4)
	lbz      r0, 1(r4)
	rlwinm   r0, r0, 0, 0, 0x1d
	or       r0, r0, r6
	stb      r0, 1(r4)
	b        lbl_8005A4C0

lbl_8005A4A4:
	lbz      r0, 1(r4)
	rlwimi   r0, r11, 3, 0x1a, 0x1b
	stb      r0, 1(r4)
	lbz      r0, 1(r4)
	rlwinm   r0, r0, 0, 0, 0x1d
	ori      r0, r0, 3
	stb      r0, 1(r4)

lbl_8005A4C0:
	lbz      r0, 1(r4)
	addi     r3, r1, 0x28
	rlwinm   r7, r9, 6, 0x12, 0x19
	addi     r5, r1, 0x29
	rlwinm   r6, r0, 0, 0x1d, 0x1b
	rlwinm   r0, r8, 3, 0x15, 0x1c
	or       r6, r6, r0
	lbzx     r9, r5, r27
	lbzx     r0, r3, r27
	addi     r3, r1, 0x2a
	stb      r6, 1(r4)
	addi     r8, r1, 0x2b
	slwi     r6, r0, 5
	lbzx     r11, r3, r27
	lbz      r0, 1(r4)
	addi     r5, r1, 0xc
	lbzx     r18, r8, r27
	rlwinm   r12, r9, 2, 0x16, 0x1d
	rlwimi   r7, r0, 0, 0x1a, 0x1f
	rlwinm   r10, r11, 7, 0x11, 0x18
	stb      r7, 1(r4)
	addi     r3, r1, 8
	lbzx     r0, r3, r26
	addi     r3, r1, 0xb
	lbz      r7, 6(r4)
	addi     r8, r1, 0xa
	rlwinm   r9, r18, 4, 0x14, 0x1b
	rlwinm   r11, r11, 0x1f, 0x19, 0x1f
	rlwimi   r6, r7, 0, 0x1b, 0x1f
	addi     r7, r1, 9
	stb      r6, 6(r4)
	rlwinm   r6, r0, 2, 0x16, 0x1d
	lbzx     r18, r8, r26
	cmplwi   r0, 1
	lbz      r27, 6(r4)
	lbzx     r5, r5, r26
	rlwinm   r27, r27, 0, 0x1e, 0x1a
	lbzx     r3, r3, r26
	or       r12, r27, r12
	stb      r12, 6(r4)
	lbz      r12, 6(r4)
	rlwinm   r8, r12, 0, 0, 0x1d
	lbzx     r12, r7, r26
	or       r7, r8, r11
	stb      r7, 6(r4)
	lbz      r7, 7(r4)
	rlwimi   r10, r7, 0, 0x19, 0x1f
	stb      r10, 7(r4)
	lbz      r7, 7(r4)
	rlwinm   r7, r7, 0, 0x1c, 0x18
	or       r7, r7, r9
	stb      r7, 7(r4)
	lbz      r7, 5(r4)
	rlwinm   r7, r7, 0, 0x1e, 0x1c
	or       r6, r7, r6
	stb      r6, 5(r4)
	bgt      lbl_8005A5CC
	lbz      r6, 5(r4)
	rlwinm   r0, r18, 4, 0x14, 0x1b
	rlwinm   r6, r6, 0, 0, 0x1d
	or       r6, r6, r12
	stb      r6, 5(r4)
	lbz      r6, 5(r4)
	rlwinm   r6, r6, 0, 0x1c, 0x19
	or       r0, r6, r0
	stb      r0, 5(r4)
	b        lbl_8005A5E8

lbl_8005A5CC:
	lbz      r6, 5(r4)
	rlwimi   r6, r0, 3, 0x1a, 0x1b
	stb      r6, 5(r4)
	lbz      r0, 5(r4)
	rlwinm   r0, r0, 0, 0, 0x1d
	ori      r0, r0, 3
	stb      r0, 5(r4)

lbl_8005A5E8:
	lbz      r6, 5(r4)
	rlwinm   r0, r5, 6, 0x12, 0x19
	rlwinm   r3, r3, 3, 0x15, 0x1c
	rlwinm   r5, r6, 0, 0x1d, 0x1b
	or       r3, r5, r3
	stb      r3, 5(r4)
	lbz      r3, 5(r4)
	rlwimi   r0, r3, 0, 0x1a, 0x1f
	stb      r0, 5(r4)
	lmw      r18, 0x48(r1)
	addi     r1, r1, 0x80
	blr
	*/
}

/*
 * --INFO--
 * Address:	8005A618
 * Size:	000088
 */
void J2DTextBoxEx::setBlack(JUtility::TColor)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	li       r0, -1
	addi     r5, r1, 0x10
	stw      r31, 0x1c(r1)
	mr       r31, r4
	addi     r4, r1, 0x14
	stw      r30, 0x18(r1)
	mr       r30, r3
	stw      r0, 0x14(r1)
	stw      r0, 0x10(r1)
	bl getBlackWhite__12J2DTextBoxExCFPQ28JUtility6TColorPQ28JUtility6TColor
	clrlwi.  r0, r3, 0x18
	bne      lbl_8005A65C
	li       r3, 0
	b        lbl_8005A688

lbl_8005A65C:
	lwz      r5, 0x10(r1)
	mr       r3, r30
	lwz      r0, 0(r31)
	addi     r4, r1, 0xc
	stw      r5, 8(r1)
	addi     r5, r1, 8
	stw      r0, 0xc(r1)
	lwz      r12, 0(r30)
	lwz      r12, 0xac(r12)
	mtctr    r12
	bctrl

lbl_8005A688:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8005A6A0
 * Size:	000088
 */
void J2DTextBoxEx::setWhite(JUtility::TColor)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	li       r0, -1
	addi     r5, r1, 0x10
	stw      r31, 0x1c(r1)
	mr       r31, r4
	addi     r4, r1, 0x14
	stw      r30, 0x18(r1)
	mr       r30, r3
	stw      r0, 0x14(r1)
	stw      r0, 0x10(r1)
	bl getBlackWhite__12J2DTextBoxExCFPQ28JUtility6TColorPQ28JUtility6TColor
	clrlwi.  r0, r3, 0x18
	bne      lbl_8005A6E4
	li       r3, 0
	b        lbl_8005A710

lbl_8005A6E4:
	lwz      r5, 0(r31)
	mr       r3, r30
	lwz      r0, 0x14(r1)
	addi     r4, r1, 0xc
	stw      r5, 8(r1)
	addi     r5, r1, 8
	stw      r0, 0xc(r1)
	lwz      r12, 0(r30)
	lwz      r12, 0xac(r12)
	mtctr    r12
	bctrl

lbl_8005A710:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8005A728
 * Size:	000224
 */
void J2DTextBoxEx::setBlackWhite(JUtility::TColor, JUtility::TColor)
{
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	stmw     r27, 0x3c(r1)
	mr       r29, r4
	mr       r28, r3
	mr       r30, r5
	lwz      r4, 0x138(r3)
	cmplwi   r4, 0
	bne      lbl_8005A758
	li       r3, 0
	b        lbl_8005A938

lbl_8005A758:
	lwz      r0, 0x70(r4)
	cmplwi   r0, 0
	bne      lbl_8005A76C
	li       r3, 0
	b        lbl_8005A938

lbl_8005A76C:
	lwz      r6, 0(r30)
	addi     r4, r1, 0x18
	lwz      r0, 0(r29)
	addi     r5, r1, 0x14
	stw      r6, 0x14(r1)
	stw      r0, 0x18(r1)
	bl isSetBlackWhite__12J2DTextBoxExCFQ28JUtility6TColorQ28JUtility6TColor
	clrlwi.  r0, r3, 0x18
	bne      lbl_8005A798
	li       r3, 0
	b        lbl_8005A938

lbl_8005A798:
	lwz      r0, 0(r29)
	li       r31, 0
	cmplwi   r0, 0
	bne      lbl_8005A7B8
	lwz      r3, 0(r30)
	addis    r0, r3, 1
	cmplwi   r0, 0xffff
	beq      lbl_8005A7BC

lbl_8005A7B8:
	li       r31, 1

lbl_8005A7BC:
	lwz      r3, 0x138(r28)
	clrlwi   r4, r31, 0x18
	neg      r0, r4
	lwz      r3, 0x70(r3)
	or       r0, r0, r4
	srwi     r4, r0, 0x1f
	lwz      r12, 0(r3)
	addi     r0, r4, 1
	clrlwi   r4, r0, 0x18
	lwz      r12, 0x54(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r31, 0x18
	bne      lbl_8005A80C
	lis      r3, 0x0000FFFF@ha
	li       r4, 4
	addi     r0, r3, 0x0000FFFF@l
	sth      r4, 8(r1)
	sth      r0, 0xa(r1)
	b        lbl_8005A820

lbl_8005A80C:
	lis      r3, 0x0000FF04@ha
	li       r4, 0xff
	addi     r0, r3, 0x0000FF04@l
	sth      r4, 8(r1)
	sth      r0, 0xa(r1)

lbl_8005A820:
	li       r27, 0
	b        lbl_8005A894

lbl_8005A828:
	lwz      r3, 0x138(r28)
	lwz      r3, 0x70(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	clrlwi   r0, r3, 0x18
	clrlwi   r4, r27, 0x18
	cmplw    r0, r4
	ble      lbl_8005A890
	rlwinm   r0, r27, 1, 0x17, 0x1e
	addi     r3, r1, 8
	lhzx     r3, r3, r0
	addi     r5, r1, 0x10
	srawi    r0, r3, 8
	stb      r3, 0xe(r1)
	stb      r0, 0xc(r1)
	stb      r0, 0xd(r1)
	lwz      r0, 0xc(r1)
	stw      r0, 0x10(r1)
	lwz      r3, 0x138(r28)
	lwz      r3, 0x70(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl

lbl_8005A890:
	addi     r27, r27, 1

lbl_8005A894:
	clrlwi   r0, r27, 0x18
	cmplwi   r0, 2
	blt      lbl_8005A828
	mr       r3, r28
	mr       r4, r31
	bl       setTevStage__12J2DTextBoxExFb
	clrlwi.  r0, r31, 0x18
	beq      lbl_8005A934
	lbz      r3, 1(r29)
	addi     r5, r1, 0x24
	lbz      r6, 2(r29)
	li       r4, 0
	lbz      r7, 3(r29)
	lbz      r0, 0(r29)
	sth      r3, 0x26(r1)
	sth      r0, 0x24(r1)
	sth      r6, 0x28(r1)
	sth      r7, 0x2a(r1)
	lwz      r3, 0x138(r28)
	lwz      r3, 0x70(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x34(r12)
	mtctr    r12
	bctrl
	lbz      r3, 1(r30)
	addi     r5, r1, 0x1c
	lbz      r6, 2(r30)
	li       r4, 1
	lbz      r7, 3(r30)
	lbz      r0, 0(r30)
	sth      r3, 0x1e(r1)
	sth      r0, 0x1c(r1)
	sth      r6, 0x20(r1)
	sth      r7, 0x22(r1)
	lwz      r3, 0x138(r28)
	lwz      r3, 0x70(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x34(r12)
	mtctr    r12
	bctrl

lbl_8005A934:
	li       r3, 1

lbl_8005A938:
	lmw      r27, 0x3c(r1)
	lwz      r0, 0x54(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

/*
 * --INFO--
 * Address:	8005A94C
 * Size:	000194
 */
void J2DTextBoxEx::getBlackWhite(JUtility::TColor*, JUtility::TColor*) const
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stmw     r26, 0x18(r1)
	mr       r29, r3
	lwz      r3, 0x138(r3)
	mr       r30, r4
	mr       r31, r5
	cmplwi   r3, 0
	bne      lbl_8005A97C
	li       r3, 0
	b        lbl_8005AACC

lbl_8005A97C:
	lwz      r3, 0x70(r3)
	cmplwi   r3, 0
	bne      lbl_8005A990
	li       r3, 0
	b        lbl_8005AACC

lbl_8005A990:
	lwz      r12, 0(r3)
	lwz      r12, 0x58(r12)
	mtctr    r12
	bctrl
	li       r0, 0
	clrlwi   r3, r3, 0x18
	stw      r0, 0x14(r1)
	li       r0, -1
	subfic   r5, r3, 1
	addi     r4, r3, -1
	lbz      r3, 0x14(r1)
	or       r4, r5, r4
	stw      r0, 0x10(r1)
	rlwinm.  r4, r4, 1, 0x1f, 0x1f
	lbz      r0, 0x15(r1)
	stb      r3, 0(r30)
	lbz      r3, 0x16(r1)
	stb      r0, 1(r30)
	lbz      r0, 0x17(r1)
	stb      r3, 2(r30)
	lbz      r3, 0x10(r1)
	stb      r0, 3(r30)
	lbz      r0, 0x11(r1)
	stb      r3, 0(r31)
	lbz      r3, 0x12(r1)
	stb      r0, 1(r31)
	lbz      r0, 0x13(r1)
	stb      r3, 2(r31)
	stb      r0, 3(r31)
	beq      lbl_8005AAC8
	lwz      r3, 0x138(r29)
	li       r4, 0
	lwz      r3, 0x70(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x38(r12)
	mtctr    r12
	bctrl
	lwz      r5, 0x138(r29)
	li       r4, 1
	lha      r29, 0(r3)
	lha      r28, 2(r3)
	lha      r27, 4(r3)
	lha      r26, 6(r3)
	lwz      r3, 0x70(r5)
	lwz      r12, 0(r3)
	lwz      r12, 0x38(r12)
	mtctr    r12
	bctrl
	rlwinm   r4, r28, 0x10, 8, 0xf
	lha      r0, 2(r3)
	rlwimi   r4, r29, 0x18, 0, 7
	lha      r5, 0(r3)
	rlwimi   r4, r27, 8, 0x10, 0x17
	rlwinm   r0, r0, 0x10, 8, 0xf
	rlwimi   r4, r26, 0, 0x18, 0x1f
	lha      r6, 4(r3)
	stw      r4, 0xc(r1)
	rlwimi   r0, r5, 0x18, 0, 7
	lha      r7, 6(r3)
	rlwimi   r0, r6, 8, 0x10, 0x17
	lbz      r3, 0xc(r1)
	lbz      r5, 0xd(r1)
	rlwimi   r0, r7, 0, 0x18, 0x1f
	stb      r3, 0(r30)
	lbz      r4, 0xe(r1)
	stb      r5, 1(r30)
	lbz      r3, 0xf(r1)
	stw      r0, 8(r1)
	stb      r4, 2(r30)
	lbz      r0, 8(r1)
	stb      r3, 3(r30)
	lbz      r4, 9(r1)
	stb      r0, 0(r31)
	lbz      r3, 0xa(r1)
	stb      r4, 1(r31)
	lbz      r0, 0xb(r1)
	stb      r3, 2(r31)
	stb      r0, 3(r31)

lbl_8005AAC8:
	li       r3, 1

lbl_8005AACC:
	lmw      r26, 0x18(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	8005AAE0
 * Size:	000094
 */
void J2DTextBoxEx::isSetBlackWhite(JUtility::TColor, JUtility::TColor) const
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r0, 0(r4)
	stw      r31, 0xc(r1)
	mr       r31, r3
	cmplwi   r0, 0
	bne      lbl_8005AB18
	lwz      r3, 0(r5)
	addis    r0, r3, 1
	cmplwi   r0, 0xffff
	bne      lbl_8005AB18
	li       r3, 1
	b        lbl_8005AB60

lbl_8005AB18:
	lwz      r3, 0x138(r31)
	lwz      r3, 0x70(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x58(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x138(r31)
	lwz      r3, 0x70(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	clrlwi   r0, r3, 0x18
	cmplwi   r0, 1
	bne      lbl_8005AB5C
	li       r3, 0
	b        lbl_8005AB60

lbl_8005AB5C:
	li       r3, 1

lbl_8005AB60:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}
