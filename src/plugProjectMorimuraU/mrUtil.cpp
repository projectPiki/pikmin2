#include "types.h"
#include "Morimura/mrUtil.h"
#include "Morimura/Bases.h"
#include "og/Screen/ogScreen.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_804951F8
    lbl_804951F8:
        .4byte 0x6D725574
        .4byte 0x696C2E63
        .4byte 0x70700000
    .global lbl_80495204
    lbl_80495204:
        .asciz "P2Assert"
        .skip 3

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q28Morimura12TScissorPane
    __vt__Q28Morimura12TScissorPane:
        .4byte 0
        .4byte 0
        .4byte __dt__Q28Morimura12TScissorPaneFv
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
        .4byte drawSelf__Q28Morimura12TScissorPaneFffPA3_A4_f
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
        .4byte
   "drawOut__12J2DPictureExFRCQ29JGeometry8TBox2<f>RCQ29JGeometry8TBox2<f>"
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
        .4byte
   setBlackWhite__12J2DPictureExFQ28JUtility6TColorQ28JUtility6TColor .4byte
   getBlack__12J2DPictureExCFv .4byte getWhite__12J2DPictureExCFv .4byte
   getMaterial__12J2DPictureExCFv .4byte
   drawFullSet__12J2DPictureExFffffPA3_A4_f .4byte
   drawTexCoord__12J2DPictureExFffffssssssssPA3_A4_f .4byte
   getUsableTlut__12J2DPictureExFUc .global __vt__Q28Morimura15TScaleUpCounter
    __vt__Q28Morimura15TScaleUpCounter:
        .4byte 0
        .4byte 0
        .4byte __dt__Q28Morimura15TScaleUpCounterFv
        .4byte getChildCount__5CNodeFv
        .4byte update__Q32og6Screen18CallBack_CounterRVFv
        .4byte
   draw__Q32og6Screen18CallBack_CounterRVFR8GraphicsR14J2DGrafContext .4byte
   doInit__Q29P2DScreen4NodeFv .4byte
   init__Q28Morimura15TScaleUpCounterFP9J2DScreenUxUxUxPUlb .4byte
   show__Q32og6Screen18CallBack_CounterRVFv .4byte
   hide__Q32og6Screen18CallBack_CounterRVFv .4byte
   setValue__Q28Morimura15TScaleUpCounterFbb .4byte
   setValue__Q32og6Screen18CallBack_CounterRVFv .global
   __vt__Q28Morimura8TIndPane
    __vt__Q28Morimura8TIndPane:
        .4byte 0
        .4byte 0
        .4byte __dt__Q28Morimura8TIndPaneFv
        .4byte getChildCount__5CNodeFv
        .4byte draw__Q28Morimura8TIndPaneFv
    .global __vt__Q28Morimura15TTestAnimScreen
    __vt__Q28Morimura15TTestAnimScreen:
        .4byte 0
        .4byte 0
        .4byte start__Q32og6Screen10AnimScreenFv
        .4byte moveAnim__Q32og6Screen10AnimScreenFv
    .global __vt__Q28Morimura11TScreenBase
    __vt__Q28Morimura11TScreenBase:
        .4byte 0
        .4byte 0
        .4byte create__Q28Morimura11TScreenBaseFPCcUl
        .4byte update__Q28Morimura11TScreenBaseFv
        .4byte draw__Q28Morimura11TScreenBaseFR8GraphicsP13J2DPerspGraph
    .global __vt__Q28Morimura16TCallbackScissor
    __vt__Q28Morimura16TCallbackScissor:
        .4byte 0
        .4byte 0
        .4byte __dt__Q28Morimura16TCallbackScissorFv
        .4byte getChildCount__5CNodeFv
        .4byte update__Q29P2DScreen12CallBackNodeFv
        .4byte draw__Q28Morimura16TCallbackScissorFR8GraphicsR14J2DGrafContext
        .4byte doInit__Q29P2DScreen4NodeFv

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051F2C0
    lbl_8051F2C0:
        .4byte 0x40240000
        .4byte 0x00000000
    .global lbl_8051F2C8
    lbl_8051F2C8:
        .4byte 0x43300000
        .4byte 0x80000000
    .global lbl_8051F2D0
    lbl_8051F2D0:
        .float 0.5
    .global lbl_8051F2D4
    lbl_8051F2D4:
        .4byte 0x696E6470
        .4byte 0x616E6500
    .global lbl_8051F2DC
    lbl_8051F2DC:
        .4byte 0x00000000
    .global lbl_8051F2E0
    lbl_8051F2E0:
        .4byte 0x3CA3D70A
    .global lbl_8051F2E4
    lbl_8051F2E4:
        .4byte 0x44200000
    .global lbl_8051F2E8
    lbl_8051F2E8:
        .4byte 0x43F00000
    .global lbl_8051F2EC
    lbl_8051F2EC:
        .4byte 0xBF800000
    .global lbl_8051F2F0
    lbl_8051F2F0:
        .float 1.0
    .global lbl_8051F2F4
    lbl_8051F2F4:
        .4byte 0x3C8EFA35
*/

namespace Morimura {
/*
 * --INFO--
 * Address:	803A102C
 * Size:	0000B8
 */
void TCallbackScissor::draw(Graphics& gfx, J2DGrafContext& graf)
{
	gfx.m_perspGraph.setPort();
	GXSetScissor(m_X1, m_Y1, m_X2 - m_X1, m_Y2 - m_Y1);

	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stfd     f31, 0x30(r1)
	psq_st   f31, 56(r1), 0, qr0
	stfd     f30, 0x20(r1)
	psq_st   f30, 40(r1), 0, qr0
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r3
	addi     r3, r4, 0x190
	lwz      r12, 0x190(r4)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lfs      f31, 0x20(r29)
	lfs      f0, 0x28(r29)
	lfs      f30, 0x1c(r29)
	fsubs    f1, f0, f31
	bl       __cvt_fp2unsigned
	lfs      f0, 0x24(r29)
	mr       r29, r3
	fsubs    f1, f0, f30
	bl       __cvt_fp2unsigned
	fmr      f1, f31
	mr       r30, r3
	bl       __cvt_fp2unsigned
	fmr      f1, f30
	mr       r31, r3
	bl       __cvt_fp2unsigned
	mr       r4, r31
	mr       r5, r30
	mr       r6, r29
	bl       GXSetScissor
	psq_l    f31, 56(r1), 0, qr0
	lfd      f31, 0x30(r1)
	psq_l    f30, 40(r1), 0, qr0
	lfd      f30, 0x20(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r0, 0x44(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	803A10E4
 * Size:	0000C0
 */
TOffsetMsgSet::TOffsetMsgSet(u64* taglist, u64 newtag, int size)
{
	m_tagList = nullptr;
	m_msgID   = newtag;
	m_size    = size;

	m_tagList = new u64[size];
	_04       = new int[size];
	for (int i = 0; i < m_size; i++) {
		u64 temp     = taglist[i];
		u64* currTag = &m_tagList[i];

		*currTag = temp - m_msgID;
	}
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  li        r0, 0
	  stw       r31, 0x1C(r1)
	  mr        r31, r7
	  stw       r30, 0x18(r1)
	  mr        r30, r4
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  stw       r0, 0x0(r3)
	  stw       r6, 0xC(r3)
	  rlwinm    r3,r7,3,0,28
	  stw       r5, 0x8(r29)
	  stw       r31, 0x10(r29)
	  bl        -0x37D174
	  stw       r3, 0x0(r29)
	  rlwinm    r3,r31,2,0,29
	  bl        -0x37D180
	  stw       r3, 0x4(r29)
	  mr        r8, r30
	  li        r10, 0
	  li        r9, 0
	  b         .loc_0x94

	.loc_0x60:
	  lwz       r0, 0x0(r29)
	  addi      r10, r10, 0x1
	  lwz       r7, 0x4(r8)
	  lwz       r6, 0x0(r8)
	  add       r3, r0, r9
	  lwz       r5, 0xC(r29)
	  addi      r8, r8, 0x8
	  lwz       r4, 0x8(r29)
	  addi      r9, r9, 0x8
	  subc      r0, r7, r5
	  stw       r0, 0x4(r3)
	  subfe     r0, r4, r6
	  stw       r0, 0x0(r3)

	.loc_0x94:
	  lwz       r0, 0x10(r29)
	  cmpw      r10, r0
	  blt+      .loc_0x60
	  lwz       r0, 0x24(r1)
	  mr        r3, r29
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803A11A4
 * Size:	000068
 */
TOffsetMsgSet::TOffsetMsgSet(u64* taglist, u64 newtag, int size, u64* taglist2, int* alloc)
{
	m_tagList = nullptr;
	m_msgID   = newtag;
	m_size    = size;
	m_tagList = taglist2;
	_04       = alloc;

	for (int i = 0; i < m_size; i++) {
		u64 temp     = taglist[i];
		u64* currTag = &m_tagList[i];

		*currTag = temp - m_msgID;
	}
	/*
	.loc_0x0:
	  li        r10, 0
	  li        r11, 0
	  stw       r10, 0x0(r3)
	  stw       r6, 0xC(r3)
	  stw       r5, 0x8(r3)
	  stw       r7, 0x10(r3)
	  stw       r8, 0x0(r3)
	  stw       r9, 0x4(r3)
	  b         .loc_0x58

	.loc_0x24:
	  lwz       r0, 0x0(r3)
	  addi      r11, r11, 0x1
	  lwz       r9, 0x4(r4)
	  lwz       r8, 0x0(r4)
	  add       r5, r0, r10
	  lwz       r7, 0xC(r3)
	  addi      r4, r4, 0x8
	  lwz       r6, 0x8(r3)
	  addi      r10, r10, 0x8
	  subc      r0, r9, r7
	  stw       r0, 0x4(r5)
	  subfe     r0, r6, r8
	  stw       r0, 0x0(r5)

	.loc_0x58:
	  lwz       r0, 0x10(r3)
	  cmpw      r11, r0
	  blt+      .loc_0x24
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803A120C
 * Size:	00019C
 */
u64 TOffsetMsgSet::getMsgID(int index)
{
	for (int i = 0; i < m_size; i++) {
		_04[i] = 0;
	}

	int counter = 1;
	for (int i = index + 1; i >= 10; i /= 10) {
		counter++;
	}
	JUT_ASSERTLINE(91, counter <= m_size, nullptr);

	int offs = index + 1;
	for (; counter > 1; counter--) {
		f64 calc     = pow(10.0f, counter);
		int calc2    = offs / (int)calc;
		_04[counter] = calc2;
		offs -= calc2 * (int)calc;
	}
	_04[0]     = offs;
	u64 retTag = m_msgID;

	for (int i = m_size; i > 0; i--) {
		int curr = _04[i];
		if (curr) {
			u64* currTag = &m_tagList[i];

			retTag += *currTag * curr;
		}
	}
	return retTag;
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	li       r5, 0
	stw      r0, 0x44(r1)
	mr       r0, r5
	stfd     f31, 0x38(r1)
	stmw     r27, 0x24(r1)
	mr       r28, r4
	mr       r31, r3
	li       r4, 0
	b        lbl_803A1248

lbl_803A1238:
	lwz      r3, 4(r31)
	addi     r4, r4, 1
	stwx     r0, r3, r5
	addi     r5, r5, 4

lbl_803A1248:
	lwz      r6, 0x10(r31)
	cmpw     r4, r6
	blt      lbl_803A1238
	lis      r3, 0x66666667@ha
	addi     r0, r28, 1
	addi     r4, r3, 0x66666667@l
	li       r29, 1
	b        lbl_803A127C

lbl_803A1268:
	mulhw    r0, r4, r0
	addi     r29, r29, 1
	srawi    r0, r0, 2
	srwi     r3, r0, 0x1f
	add      r0, r0, r3

lbl_803A127C:
	cmpwi    r0, 0xa
	bge      lbl_803A1268
	cmpw     r29, r6
	ble      lbl_803A12A4
	lis      r3, lbl_804951F8@ha
	li       r4, 0x5b
	addi     r3, r3, lbl_804951F8@l
	li       r5, 0
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803A12A4:
	lfd      f31, lbl_8051F2C8@sda21(r2)
	mr       r27, r29
	addi     r28, r28, 1
	slwi     r29, r29, 2
	lis      r30, 0x4330
	b        lbl_803A1308

lbl_803A12BC:
	addi     r0, r27, -1
	stw      r30, 8(r1)
	xoris    r0, r0, 0x8000
	lfd      f1, lbl_8051F2C0@sda21(r2)
	stw      r0, 0xc(r1)
	lfd      f0, 8(r1)
	fsub     f2, f0, f31
	bl       pow
	fctiwz   f0, f1
	addi     r0, r29, -4
	lwz      r3, 4(r31)
	addi     r29, r29, -4
	addi     r27, r27, -1
	stfd     f0, 0x10(r1)
	lwz      r4, 0x14(r1)
	divw     r5, r28, r4
	mullw    r4, r5, r4
	stwx     r5, r3, r0
	subf     r28, r4, r28

lbl_803A1308:
	cmpwi    r27, 1
	bgt      lbl_803A12BC
	lwz      r3, 4(r31)
	li       r10, 0
	mr       r11, r10
	stw      r28, 0(r3)
	lwz      r0, 0x10(r31)
	lwz      r3, 8(r31)
	lwz      r4, 0xc(r31)
	mtctr    r0
	cmpwi    r0, 0
	ble      lbl_803A1390

lbl_803A1338:
	lwz      r5, 4(r31)
	lwzx     r6, r5, r10
	cmpwi    r6, 0
	beq      lbl_803A1384
	lwz      r0, 0(r31)
	srawi    r8, r6, 0x1f
	add      r9, r0, r11
	lwz      r0, 0(r9)
	lwz      r9, 4(r9)
	mullw    r5, r0, r6
	mulhwu   r0, r9, r6
	mullw    r7, r9, r6
	add      r6, r0, r5
	mullw    r5, r9, r8
	addc     r0, r4, r7
	mr       r4, r0
	add      r0, r6, r5
	adde     r0, r3, r0
	mr       r3, r0

lbl_803A1384:
	addi     r10, r10, 4
	addi     r11, r11, 8
	bdnz     lbl_803A1338

lbl_803A1390:
	lfd      f31, 0x38(r1)
	lmw      r27, 0x24(r1)
	lwz      r0, 0x44(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	803A13A8
 * Size:	000028
 */
TScreenBase::TScreenBase(JKRArchive* arc, int anims)
{
	m_animScreens        = nullptr;
	m_screenObj          = nullptr;
	m_archive            = arc;
	m_animScreenCountMax = anims;
	m_currEntries        = 0;
	/*
	lis      r6, __vt__Q28Morimura11TScreenBase@ha
	li       r0, 0
	addi     r6, r6, __vt__Q28Morimura11TScreenBase@l
	stw      r6, 0(r3)
	stw      r0, 4(r3)
	stw      r0, 8(r3)
	stw      r4, 0xc(r3)
	stw      r5, 0x10(r3)
	stw      r0, 0x14(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	803A13D0
 * Size:	000090
 */
void TScreenBase::create(char const* name, unsigned long flags)
{
	m_screenObj = new P2DScreen::Mgr_tuning;
	m_screenObj->set(name, flags, m_archive);
	::og::Screen::setCallBackMessage(m_screenObj);

	m_animScreens = new ::og::Screen::AnimScreen*[m_animScreenCountMax];

	::og::Screen::setAlphaScreen(m_screenObj);

	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r5
	stw      r30, 0x18(r1)
	mr       r30, r4
	stw      r29, 0x14(r1)
	mr       r29, r3
	li       r3, 0x148
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_803A140C
	bl       __ct__Q29P2DScreen10Mgr_tuningFv
	mr       r0, r3

lbl_803A140C:
	stw      r0, 8(r29)
	mr       r4, r30
	mr       r5, r31
	lwz      r3, 8(r29)
	lwz      r6, 0xc(r29)
	bl       set__9J2DScreenFPCcUlP10JKRArchive
	lwz      r3, 8(r29)
	bl       setCallBackMessage__Q22og6ScreenFPQ29P2DScreen3Mgr
	lwz      r0, 0x10(r29)
	slwi     r3, r0, 2
	bl       __nwa__FUl
	stw      r3, 4(r29)
	lwz      r3, 8(r29)
	bl       setAlphaScreen__Q22og6ScreenFP7J2DPane
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
 * Address:	803A1460
 * Size:	0000B0
 */
void TScreenBase::addAnim(char* name)
{
	m_animScreens[m_currEntries] = new TTestAnimScreen;

	m_animScreens[m_currEntries]->init(m_archive, m_screenObj, name);
	m_animScreens[m_currEntries]->_20 = 0.5f;
	m_currEntries++;
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r30, r4
	stw      r29, 0x14(r1)
	mr       r29, r3
	li       r3, 0x44
	bl       __nw__FUl
	or.      r31, r3, r3
	beq      lbl_803A14A0
	bl       __ct__Q32og6Screen10AnimScreenFv
	lis      r3, __vt__Q28Morimura15TTestAnimScreen@ha
	addi     r0, r3, __vt__Q28Morimura15TTestAnimScreen@l
	stw      r0, 0(r31)

lbl_803A14A0:
	lwz      r0, 0x14(r29)
	mr       r6, r30
	lwz      r3, 4(r29)
	slwi     r0, r0, 2
	stwx     r31, r3, r0
	lwz      r0, 0x14(r29)
	lwz      r3, 4(r29)
	slwi     r0, r0, 2
	lwz      r4, 0xc(r29)
	lwzx     r3, r3, r0
	lwz      r5, 8(r29)
	bl       init__Q32og6Screen10AnimScreenFP10JKRArchiveP9J2DScreenPc
	lwz      r0, 0x14(r29)
	lwz      r3, 4(r29)
	slwi     r0, r0, 2
	lfs      f0, lbl_8051F2D0@sda21(r2)
	lwzx     r3, r3, r0
	stfs     f0, 0x20(r3)
	lwz      r3, 0x14(r29)
	addi     r0, r3, 1
	stw      r0, 0x14(r29)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000048
 */
// AnimScreen::~AnimScreen(void)
//{
// UNUSED FUNCTION
//}

/*
 * --INFO--
 * Address:	803A1510
 * Size:	000088
 */
void TScreenBase::update(void)
{
	if (m_screenObj) {
		m_screenObj->update();
		for (int i = 0; i < m_animScreenCountMax; i++) {
			m_animScreens[i]->update();
		}
		m_screenObj->animation();
	}
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r3
	lwz      r3, 8(r3)
	cmplwi   r3, 0
	beq      lbl_803A157C
	lwz      r12, 0(r3)
	lwz      r12, 0x30(r12)
	mtctr    r12
	bctrl
	li       r30, 0
	li       r31, 0
	b        lbl_803A1568

lbl_803A1554:
	lwz      r3, 4(r29)
	lwzx     r3, r3, r31
	bl       update__Q32og6Screen12AnimBaseBaseFv
	addi     r31, r31, 4
	addi     r30, r30, 1

lbl_803A1568:
	lwz      r0, 0x10(r29)
	cmpw     r30, r0
	blt      lbl_803A1554
	lwz      r3, 8(r29)
	bl       animation__9J2DScreenFv

lbl_803A157C:
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
 * Address:	803A1598
 * Size:	000038
 */
void TScreenBase::draw(Graphics& gfx, J2DPerspGraph* graf)
{
	if (m_screenObj) {
		m_screenObj->draw(gfx, *graf);
	}
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 8(r3)
	cmplwi   r3, 0
	beq      lbl_803A15C0
	lwz      r12, 0(r3)
	lwz      r12, 0x9c(r12)
	mtctr    r12
	bctrl

lbl_803A15C0:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803A15D0
 * Size:	000124
 */
TIndPane::TIndPane(char const* name, f32 x, f32 y)
{
	m_texture1 = nullptr;
	m_texture2 = nullptr;
	m_texture3 = nullptr;
	_34        = 0.0f;
	_38        = 0.0f;
	_3C        = 0;
	_40        = 0.0f;
	_44        = true;
	m_texture1 = new JUTTexture;

	_38 = 0.02f;
	_34 = 0.02f;
	_24 = 0.0f;
	_28 = 0.0f;
	_2C = x;
	_30 = y;
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stfd     f31, 0x30(r1)
	psq_st   f31, 56(r1), 0, qr0
	stfd     f30, 0x20(r1)
	psq_st   f30, 40(r1), 0, qr0
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	lis      r5, __vt__5CNode@ha
	mr       r29, r3
	addi     r0, r5, __vt__5CNode@l
	lis      r3, __vt__Q28Morimura8TIndPane@ha
	stw      r0, 0(r29)
	li       r7, 0
	addi     r6, r2, lbl_8051F2D4@sda21
	addi     r5, r3, __vt__Q28Morimura8TIndPane@l
	stw      r7, 0x10(r29)
	fmr      f30, f1
	lfs      f0, lbl_8051F2DC@sda21(r2)
	fmr      f31, f2
	stw      r7, 0xc(r29)
	li       r0, 1
	mr       r30, r4
	stw      r7, 8(r29)
	li       r3, 0x40
	stw      r7, 4(r29)
	stw      r6, 0x14(r29)
	stw      r5, 0(r29)
	stw      r7, 0x18(r29)
	stw      r7, 0x1c(r29)
	stw      r7, 0x20(r29)
	stfs     f0, 0x34(r29)
	stfs     f0, 0x38(r29)
	sth      r7, 0x3c(r29)
	stfs     f0, 0x40(r29)
	stb      r0, 0x44(r29)
	bl       __nw__FUl
	or.      r31, r3, r3
	beq      lbl_803A16A0
	mr       r3, r30
	bl       getNameResource__9J2DScreenFPCc
	li       r0, 0
	mr       r4, r3
	stw      r0, 0x28(r31)
	mr       r3, r31
	li       r5, 0
	bl       storeTIMG__10JUTTextureFPC7ResTIMGUc
	lbz      r0, 0x3b(r31)
	rlwinm   r0, r0, 0, 0x1e, 0x1e
	stb      r0, 0x3b(r31)

lbl_803A16A0:
	stw      r31, 0x18(r29)
	mr       r3, r29
	lfs      f1, lbl_8051F2E0@sda21(r2)
	lfs      f0, lbl_8051F2DC@sda21(r2)
	stfs     f1, 0x38(r29)
	stfs     f1, 0x34(r29)
	stfs     f0, 0x24(r29)
	stfs     f0, 0x28(r29)
	stfs     f30, 0x2c(r29)
	stfs     f31, 0x30(r29)
	psq_l    f31, 56(r1), 0, qr0
	lfd      f31, 0x30(r1)
	psq_l    f30, 40(r1), 0, qr0
	lfd      f30, 0x20(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r0, 0x44(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	803A16F4
 * Size:	0000A4
 */
void TIndPane::createIndTexture(char const* name)
{
	m_texture1 = new JUTTexture;

	P2ASSERTLINE(232, m_texture1);
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r30, r4
	stw      r29, 0x14(r1)
	mr       r29, r3
	li       r3, 0x40
	bl       __nw__FUl
	or.      r31, r3, r3
	beq      lbl_803A1750
	mr       r3, r30
	bl       getNameResource__9J2DScreenFPCc
	li       r0, 0
	mr       r4, r3
	stw      r0, 0x28(r31)
	mr       r3, r31
	li       r5, 0
	bl       storeTIMG__10JUTTextureFPC7ResTIMGUc
	lbz      r0, 0x3b(r31)
	rlwinm   r0, r0, 0, 0x1e, 0x1e
	stb      r0, 0x3b(r31)

lbl_803A1750:
	stw      r31, 0x1c(r29)
	lwz      r0, 0x1c(r29)
	cmplwi   r0, 0
	bne      lbl_803A177C
	lis      r3, lbl_804951F8@ha
	lis      r5, lbl_80495204@ha
	addi     r3, r3, lbl_804951F8@l
	li       r4, 0xe8
	addi     r5, r5, lbl_80495204@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803A177C:
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
 * Address:	803A1798
 * Size:	000074
 */
void TIndPane::createCaptureTexture(_GXTexFmt fmt)
{
	m_texture3 = new JUTTexture(_2C, _30, fmt);
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r4
	stw      r30, 0x18(r1)
	mr       r30, r3
	li       r3, 0x40
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_803A17F0
	lfs      f1, 0x2c(r30)
	mr       r6, r31
	lfs      f0, 0x30(r30)
	fctiwz   f1, f1
	fctiwz   f0, f0
	stfd     f1, 8(r1)
	stfd     f0, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r5, 0x14(r1)
	bl       __ct__10JUTTextureFii9_GXTexFmt
	mr       r0, r3

lbl_803A17F0:
	stw      r0, 0x20(r30)
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
 * Address:	803A180C
 * Size:	000308
 */
void TIndPane::draw(void)
{
	J2DOrthoGraph graf(0.0, 0.0, 640.0, 480.0, -1.0, 1.0);
	graf.setPort();
	P2ASSERTLINE(261, m_texture1);
	P2ASSERTLINE(262, m_texture2);
	m_texture1->load(GX_TEXMAP0);
	m_texture2->load(GX_TEXMAP1);

	GXSetNumTevStages(1);
	GXSetNumIndStages(1);
	GXSetNumChans(0);
	GXSetNumTexGens(1);
	GXSetTexCoordGen2(GX_TEXCOORD0, GX_TG_MTX3X4, GX_TG_TEX0, 0x1e, GX_FALSE, 0x7d);
	GXSetIndTexOrder(GX_IND_TEX_STAGE_ID_0, GX_TEXCOORD0, GX_TEXMAP1);
	GXSetIndTexCoordScale(GX_IND_TEX_STAGE_ID_0, GX_IND_TEX_SCALE_0, GX_IND_TEX_SCALE_0);
	f32 mtx[6];

	if (_44) {
		mtx[0] = _34;
		mtx[1] = 0.0f;
		mtx[3] = 0.0f;
		mtx[4] = _38;
	} else {
		Matrixf temp;
		PSMTXRotRad(temp.m_matrix.mtxView, 'z', _40 * 0.01745329);
		mtx[0] = temp.m_matrix.structView.xx * 0.5f;
		mtx[1] = temp.m_matrix.structView.xy * 0.5f;
		mtx[3] = temp.m_matrix.structView.yx * 0.5f;
		mtx[4] = temp.m_matrix.structView.yy * 0.5f;
	}

	mtx[5] = 0.0f;
	mtx[2] = 0.0f;
	GXSetIndTexMtx(GX_IND_TEX_MTX_ID_1, mtx, _3C);
	GXSetTevIndWarp(GX_TEVSTAGE0, GX_IND_TEX_STAGE_ID_0, 1, 0, GX_IND_TEX_MTX_ID_1);
	GXSetTevOrder(GX_TEVSTAGE0, GX_TEXCOORD_NULL, GX_TEXMAP0, GX_COLOR0);
	GXSetTevOp(GX_TEVSTAGE0, GX_REPLACE);
	GXClearVtxDesc();
	GXSetVtxDesc(GX_VA_POS, GX_DIRECT);
	GXSetVtxDesc(GX_VA_TEX0, GX_DIRECT);
	GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_POS, GX_POS_XY, GX_F32, 0);
	GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_TEX0, GX_POS_XY, GX_F32, 0);
	Matrixf mtx2;
	PSMTXIdentity(mtx2.m_matrix.mtxView);
	GXLoadPosMtxImm(mtx2.m_matrix.mtxView, 0);
	GXLoadTexMtxImm(mtx2.m_matrix.mtxView, 0x1e, GX_MTX3x4);
	GXSetCurrentMtx(0);
	GXBegin(GX_QUADS, GX_VTXFMT0, 4);
	// GX Register setting

	/*
	stwu     r1, -0x160(r1)
	mflr     r0
	lfs      f1, lbl_8051F2DC@sda21(r2)
	stw      r0, 0x164(r1)
	fmr      f2, f1
	lfs      f3, lbl_8051F2E4@sda21(r2)
	stw      r31, 0x15c(r1)
	mr       r31, r3
	lfs      f4, lbl_8051F2E8@sda21(r2)
	addi     r3, r1, 0x80
	lfs      f5, lbl_8051F2EC@sda21(r2)
	lfs      f6, lbl_8051F2F0@sda21(r2)
	bl       __ct__13J2DOrthoGraphFffffff
	addi     r3, r1, 0x80
	bl       setPort__13J2DOrthoGraphFv
	lwz      r0, 0x18(r31)
	cmplwi   r0, 0
	bne      lbl_803A1870
	lis      r3, lbl_804951F8@ha
	lis      r5, lbl_80495204@ha
	addi     r3, r3, lbl_804951F8@l
	li       r4, 0x105
	addi     r5, r5, lbl_80495204@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803A1870:
	lwz      r0, 0x1c(r31)
	cmplwi   r0, 0
	bne      lbl_803A1898
	lis      r3, lbl_804951F8@ha
	lis      r5, lbl_80495204@ha
	addi     r3, r3, lbl_804951F8@l
	li       r4, 0x106
	addi     r5, r5, lbl_80495204@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803A1898:
	lwz      r3, 0x18(r31)
	li       r4, 0
	bl       load__10JUTTextureF11_GXTexMapID
	lwz      r3, 0x1c(r31)
	li       r4, 1
	bl       load__10JUTTextureF11_GXTexMapID
	li       r3, 1
	bl       GXSetNumTevStages
	li       r3, 1
	bl       GXSetNumIndStages
	li       r3, 0
	bl       GXSetNumChans
	li       r3, 1
	bl       GXSetNumTexGens
	li       r3, 0
	li       r4, 1
	li       r5, 4
	li       r6, 0x1e
	li       r7, 0
	li       r8, 0x7d
	bl       GXSetTexCoordGen2
	li       r3, 0
	li       r4, 0
	li       r5, 1
	bl       GXSetIndTexOrder
	li       r3, 0
	li       r4, 0
	li       r5, 0
	bl       GXSetIndTexCoordScale
	lbz      r0, 0x44(r31)
	cmplwi   r0, 0
	beq      lbl_803A1940
	lfs      f0, 0x34(r31)
	lfs      f1, lbl_8051F2DC@sda21(r2)
	stfs     f0, 8(r1)
	stfs     f1, 0xc(r1)
	stfs     f1, 0x10(r1)
	stfs     f1, 0x14(r1)
	lfs      f0, 0x38(r31)
	stfs     f0, 0x18(r1)
	stfs     f1, 0x1c(r1)
	b        lbl_803A1998

lbl_803A1940:
	lfs      f1, lbl_8051F2F4@sda21(r2)
	addi     r3, r1, 0x50
	lfs      f0, 0x40(r31)
	li       r4, 0x7a
	fmuls    f1, f1, f0
	bl       PSMTXRotRad
	lfs      f5, lbl_8051F2D0@sda21(r2)
	lfs      f1, 0x50(r1)
	lfs      f0, 0x54(r1)
	lfs      f2, lbl_8051F2DC@sda21(r2)
	fmuls    f4, f5, f1
	lfs      f1, 0x60(r1)
	fmuls    f3, f5, f0
	lfs      f0, 0x64(r1)
	fmuls    f1, f5, f1
	stfs     f4, 8(r1)
	fmuls    f0, f5, f0
	stfs     f3, 0xc(r1)
	stfs     f2, 0x10(r1)
	stfs     f1, 0x14(r1)
	stfs     f0, 0x18(r1)
	stfs     f2, 0x1c(r1)

lbl_803A1998:
	lha      r0, 0x3c(r31)
	addi     r4, r1, 8
	li       r3, 1
	extsb    r5, r0
	bl       GXSetIndTexMtx
	li       r3, 0
	li       r4, 0
	li       r5, 1
	li       r6, 0
	li       r7, 1
	bl       GXSetTevIndWarp
	li       r3, 0
	li       r4, 0
	li       r5, 0
	li       r6, 0xff
	bl       GXSetTevOrder
	li       r3, 0
	li       r4, 3
	bl       GXSetTevOp
	bl       GXClearVtxDesc
	li       r3, 9
	li       r4, 1
	bl       GXSetVtxDesc
	li       r3, 0xd
	li       r4, 1
	bl       GXSetVtxDesc
	li       r3, 0
	li       r4, 9
	li       r5, 1
	li       r6, 4
	li       r7, 0
	bl       GXSetVtxAttrFmt
	li       r3, 0
	li       r4, 0xd
	li       r5, 1
	li       r6, 4
	li       r7, 0
	bl       GXSetVtxAttrFmt
	addi     r3, r1, 0x20
	bl       PSMTXIdentity
	addi     r3, r1, 0x20
	li       r4, 0
	bl       GXLoadPosMtxImm
	addi     r3, r1, 0x20
	li       r4, 0x1e
	li       r5, 1
	bl       GXLoadTexMtxImm
	li       r3, 0
	bl       GXSetCurrentMtx
	li       r3, 0x80
	li       r4, 0
	li       r5, 4
	bl       GXBegin
	lfs      f3, 0x28(r31)
	lis      r4, __vt__13J2DOrthoGraph@ha
	lfs      f0, 0x24(r31)
	lis      r5, 0xCC008000@ha
	lis      r3, __vt__14J2DGrafContext@ha
	lfs      f2, lbl_8051F2DC@sda21(r2)
	stfs     f0, 0xCC008000@l(r5)
	addi     r4, r4, __vt__13J2DOrthoGraph@l
	lfs      f1, lbl_8051F2F0@sda21(r2)
	addi     r0, r3, __vt__14J2DGrafContext@l
	stfs     f3, -0x8000(r5)
	stfs     f2, -0x8000(r5)
	stfs     f2, -0x8000(r5)
	stfs     f2, -0x8000(r5)
	lfs      f3, 0x28(r31)
	lfs      f0, 0x2c(r31)
	stfs     f0, -0x8000(r5)
	stfs     f3, -0x8000(r5)
	stfs     f2, -0x8000(r5)
	stfs     f1, -0x8000(r5)
	stfs     f2, -0x8000(r5)
	lfs      f3, 0x30(r31)
	lfs      f0, 0x2c(r31)
	stfs     f0, -0x8000(r5)
	stfs     f3, -0x8000(r5)
	stfs     f2, -0x8000(r5)
	stfs     f1, -0x8000(r5)
	stfs     f1, -0x8000(r5)
	lfs      f3, 0x30(r31)
	lfs      f0, 0x24(r31)
	stfs     f0, -0x8000(r5)
	stfs     f3, -0x8000(r5)
	stfs     f2, -0x8000(r5)
	stfs     f2, -0x8000(r5)
	stfs     f1, -0x8000(r5)
	stw      r4, 0x80(r1)
	stw      r0, 0x80(r1)
	lwz      r31, 0x15c(r1)
	lwz      r0, 0x164(r1)
	mtlr     r0
	addi     r1, r1, 0x160
	blr
	*/
}

/*
 * --INFO--
 * Address:	803A1B14
 * Size:	0000A8
 */
void TScaleUpCounter::setValue(bool flag1, bool flag2)
{
	if (_A9) {
		og::Screen::CallBack_CounterRV::setValue(false, false);
	} else {
		if ((!flag1 && !flag2) && !_A8) {
			og::Screen::CallBack_CounterRV::setValue(false, false);
		} else {
			_A8 = false;
			if (_AA) {
				og::Screen::CallBack_CounterRV::setValue(true, false);
				_AA = false;
			} else {
				og::Screen::CallBack_CounterRV::setValue(false, true);
			}
		}
	}
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lbz      r0, 0xa9(r3)
	cmplwi   r0, 0
	beq      lbl_803A1B44
	li       r4, 0
	li       r5, 0
	bl       setValue__Q32og6Screen18CallBack_CounterRVFbb
	b        lbl_803A1BA8

lbl_803A1B44:
	clrlwi.  r0, r4, 0x18
	bne      lbl_803A1B60
	clrlwi.  r0, r5, 0x18
	bne      lbl_803A1B60
	lbz      r0, 0xa8(r31)
	cmplwi   r0, 0
	beq      lbl_803A1BA4

lbl_803A1B60:
	li       r0, 0
	stb      r0, 0xa8(r31)
	lbz      r0, 0xaa(r31)
	cmplwi   r0, 0
	beq      lbl_803A1B90
	mr       r3, r31
	li       r4, 1
	li       r5, 0
	bl       setValue__Q32og6Screen18CallBack_CounterRVFbb
	li       r0, 0
	stb      r0, 0xaa(r31)
	b        lbl_803A1BA8

lbl_803A1B90:
	mr       r3, r31
	li       r4, 0
	li       r5, 1
	bl       setValue__Q32og6Screen18CallBack_CounterRVFbb
	b        lbl_803A1BA8

lbl_803A1BA4:
	bl       setValue__Q32og6Screen18CallBack_CounterRVFbb

lbl_803A1BA8:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803A1BBC
 * Size:	000060
 */
void TScaleUpCounter::forceScaleUp(bool flag)
{
	if (!m_isBlind) {
		setPuyoAnim(true);
		_A8 = true;
	} else {
		setPuyoAnim(false);
	}
	_AA = flag;
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	lbz      r0, 0x86(r3)
	cmplwi   r0, 0
	bne      lbl_803A1BF8
	li       r4, 1
	bl       setPuyoAnim__Q32og6Screen18CallBack_CounterRVFb
	li       r0, 1
	stb      r0, 0xa8(r30)
	b        lbl_803A1C00

lbl_803A1BF8:
	li       r4, 0
	bl       setPuyoAnim__Q32og6Screen18CallBack_CounterRVFb

lbl_803A1C00:
	stb      r31, 0xaa(r30)
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
 * Address:	803A1C1C
 * Size:	000040
 */
void TScaleUpCounter::setScale(float scale, float scalesub)
{
	_34 = _AC * scale;
	for (int i = 0; i < _2C; i++) {
		og::Screen::CounterKeta* keta = m_counters[i];
		keta->_0C                     = scale;
		keta->_10                     = scalesub;
	}
	/*
	lfs      f0, 0xac(r3)
	li       r6, 0
	li       r5, 0
	fmuls    f0, f0, f1
	stfs     f0, 0x34(r3)
	b        lbl_803A1C4C

lbl_803A1C34:
	lwz      r4, 0x7c(r3)
	addi     r6, r6, 1
	lwzx     r4, r4, r5
	addi     r5, r5, 4
	stfs     f1, 0xc(r4)
	stfs     f2, 0x10(r4)

lbl_803A1C4C:
	lhz      r0, 0x2c(r3)
	cmpw     r6, r0
	blt      lbl_803A1C34
	blr
	*/
}

/*
 * --INFO--
 * Address:	803A1C5C
 * Size:	0001A4
 */
TScaleUpCounter* setScaleUpCounter(P2DScreen::Mgr* screen, u64 inTag, u32* data, u16 flag, JKRArchive* arc)
{
	u64 tagSub1 = og::Screen::maskTag(inTag, 1, 1);
	u64 tagSub2 = og::Screen::maskTag(inTag, 1, 2);
	u64 tagSub3;

	int offs = 1;
	for (int i = 3; (i & 0xffff) <= 10; i++) {
		u64 tagSub3   = og::Screen::maskTag(inTag, 1, i);
		J2DPane* pane = screen->search(tagSub3);
		if (!pane) {
			offs = i - 1;
			break;
		}
		pane->m_isVisible = false;
	}

	TScaleUpCounter* counter = new TScaleUpCounter(const_cast<char**>(og::Screen::SujiTex32), flag, offs, arc);
	counter->init(screen, tagSub1, tagSub2, tagSub3, data, true);
	counter->setPuyoAnim(true);
	screen->addCallBack(inTag, counter);
	return counter;
	/*
	.loc_0x0:
	  stwu      r1, -0x50(r1)
	  mflr      r0
	  stw       r0, 0x54(r1)
	  stmw      r16, 0x10(r1)
	  mr        r26, r6
	  mr        r27, r5
	  mr        r25, r3
	  mr        r28, r7
	  mr        r29, r8
	  mr        r30, r9
	  mr        r4, r26
	  mr        r3, r27
	  li        r5, 0x1
	  li        r6, 0x1
	  bl        -0x9F374
	  mr        r22, r4
	  mr        r23, r3
	  mr        r4, r26
	  mr        r3, r27
	  li        r5, 0x1
	  li        r6, 0x2
	  bl        -0x9F390
	  mr        r20, r4
	  mr        r21, r3
	  li        r31, 0x1
	  li        r24, 0x3
	  mr        r18, r20
	  mr        r19, r21
	  b         .loc_0xD8

	.loc_0x74:
	  mr        r4, r26
	  mr        r3, r27
	  mr        r6, r24
	  li        r5, 0x1
	  bl        -0x9F3C0
	  lwz       r12, 0x0(r25)
	  mr        r0, r3
	  mr        r17, r4
	  mr        r3, r25
	  lwz       r12, 0x3C(r12)
	  mr        r16, r0
	  mr        r6, r17
	  mr        r5, r16
	  mtctr     r12
	  bctrl
	  cmplwi    r3, 0
	  bne-      .loc_0xC4
	  subi      r0, r24, 0x1
	  rlwinm    r31,r0,0,16,31
	  b         .loc_0xE4

	.loc_0xC4:
	  li        r0, 0
	  mr        r18, r17
	  stb       r0, 0xB0(r3)
	  mr        r19, r16
	  addi      r24, r24, 0x1

	.loc_0xD8:
	  rlwinm    r0,r24,0,16,31
	  cmplwi    r0, 0xA
	  ble+      .loc_0x74

	.loc_0xE4:
	  li        r3, 0xB0
	  bl        -0x37DEA0
	  mr.       r24, r3
	  beq-      .loc_0x130
	  lis       r4, 0x804D
	  mr        r5, r29
	  addi      r4, r4, 0x7E18
	  mr        r6, r31
	  mr        r7, r30
	  bl        -0x96840
	  lis       r3, 0x804E
	  li        r0, 0
	  addi      r3, r3, 0x583C
	  lfs       f0, 0xF7C(r2)
	  stw       r3, 0x0(r24)
	  stb       r0, 0xA8(r24)
	  stb       r0, 0xA9(r24)
	  stb       r0, 0xAA(r24)
	  stfs      f0, 0xAC(r24)

	.loc_0x130:
	  stw       r28, 0x8(r1)
	  li        r0, 0x1
	  mr        r3, r24
	  mr        r4, r25
	  stw       r0, 0xC(r1)
	  mr        r6, r22
	  mr        r5, r23
	  mr        r8, r20
	  lwz       r12, 0x0(r24)
	  mr        r7, r21
	  mr        r10, r18
	  mr        r9, r19
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r24
	  li        r4, 0x1
	  bl        -0x965F8
	  mr        r3, r25
	  mr        r6, r26
	  mr        r5, r27
	  mr        r7, r24
	  bl        0x92D40
	  mr        r3, r24
	  lmw       r16, 0x10(r1)
	  lwz       r0, 0x54(r1)
	  mtlr      r0
	  addi      r1, r1, 0x50
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803A1E00
 * Size:	00012C
 */
TScaleUpCounter* setScaleUpCounter2(P2DScreen::Mgr* screen, u64 inTag, u64 searchTag, u32* data, u16 flag, JKRArchive* arc)
{
	J2DPane* pane     = screen->search(inTag);
	pane->m_isVisible = false;
	pane              = screen->search(searchTag);
	pane->m_isVisible = false;

	TScaleUpCounter* counter = new TScaleUpCounter(const_cast<char**>(og::Screen::SujiTex32), flag, 2, arc);
	counter->init(screen, inTag, searchTag, searchTag, data, true);
	counter->setPuyoAnim(true);
	screen->addCallBack(inTag, counter);
	return counter;
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  stmw      r23, 0x1C(r1)
	  mr        r26, r3
	  mr        r28, r5
	  mr        r27, r6
	  mr        r30, r7
	  mr        r29, r8
	  mr        r31, r9
	  mr        r23, r10
	  lwz       r24, 0x48(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  li        r0, 0
	  mr        r6, r29
	  stb       r0, 0xB0(r3)
	  mr        r3, r26
	  mr        r5, r30
	  lwz       r12, 0x0(r26)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  li        r0, 0
	  stb       r0, 0xB0(r3)
	  li        r3, 0xB0
	  bl        -0x37DFCC
	  mr.       r25, r3
	  beq-      .loc_0xB8
	  lis       r4, 0x804D
	  mr        r5, r23
	  addi      r4, r4, 0x7E18
	  mr        r7, r24
	  li        r6, 0x2
	  bl        -0x9696C
	  lis       r3, 0x804E
	  li        r0, 0
	  addi      r3, r3, 0x583C
	  lfs       f0, 0xF7C(r2)
	  stw       r3, 0x0(r25)
	  stb       r0, 0xA8(r25)
	  stb       r0, 0xA9(r25)
	  stb       r0, 0xAA(r25)
	  stfs      f0, 0xAC(r25)

	.loc_0xB8:
	  stw       r31, 0x8(r1)
	  li        r0, 0x1
	  mr        r3, r25
	  mr        r4, r26
	  stw       r0, 0xC(r1)
	  mr        r6, r27
	  mr        r5, r28
	  mr        r8, r29
	  lwz       r12, 0x0(r25)
	  mr        r7, r30
	  mr        r10, r29
	  mr        r9, r30
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r25
	  li        r4, 0x1
	  bl        -0x96724
	  mr        r3, r26
	  mr        r6, r27
	  mr        r5, r28
	  mr        r7, r25
	  bl        0x92C14
	  mr        r3, r25
	  lmw       r23, 0x1C(r1)
	  lwz       r0, 0x44(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803A1F2C
 * Size:	0000B8
 */
void TScissorPane::drawSelf(float, float, float (*)[3][4])
{
	Matrixf mtx;
	PSMTXIdentity(mtx.m_matrix.mtxView);
	GXLoadPosMtxImm(mtx.m_matrix.mtxView, 0);

	GXSetScissor(_1A8, _1AC, _1B0 - _1A8, _1B4 - _1AC);
	/*
	stwu     r1, -0x70(r1)
	mflr     r0
	stw      r0, 0x74(r1)
	stfd     f31, 0x60(r1)
	psq_st   f31, 104(r1), 0, qr0
	stfd     f30, 0x50(r1)
	psq_st   f30, 88(r1), 0, qr0
	stw      r31, 0x4c(r1)
	stw      r30, 0x48(r1)
	stw      r29, 0x44(r1)
	mr       r29, r3
	addi     r3, r1, 8
	bl       PSMTXIdentity
	addi     r3, r1, 8
	li       r4, 0
	bl       GXLoadPosMtxImm
	lfs      f31, 0x1ac(r29)
	lfs      f0, 0x1b4(r29)
	lfs      f30, 0x1a8(r29)
	fsubs    f1, f0, f31
	bl       __cvt_fp2unsigned
	lfs      f0, 0x1b0(r29)
	mr       r29, r3
	fsubs    f1, f0, f30
	bl       __cvt_fp2unsigned
	fmr      f1, f31
	mr       r30, r3
	bl       __cvt_fp2unsigned
	fmr      f1, f30
	mr       r31, r3
	bl       __cvt_fp2unsigned
	mr       r4, r31
	mr       r5, r30
	mr       r6, r29
	bl       GXSetScissor
	psq_l    f31, 104(r1), 0, qr0
	lfd      f31, 0x60(r1)
	psq_l    f30, 88(r1), 0, qr0
	lfd      f30, 0x50(r1)
	lwz      r31, 0x4c(r1)
	lwz      r30, 0x48(r1)
	lwz      r0, 0x74(r1)
	lwz      r29, 0x44(r1)
	mtlr     r0
	addi     r1, r1, 0x70
	blr
	*/
}

/*
 * --INFO--
 * Address:	803A1FE4
 * Size:	000060
 */
TScissorPane::~TScissorPane(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_803A2028
	lis      r5, __vt__Q28Morimura12TScissorPane@ha
	li       r4, 0
	addi     r0, r5, __vt__Q28Morimura12TScissorPane@l
	stw      r0, 0(r30)
	bl       __dt__12J2DPictureExFv
	extsh.   r0, r31
	ble      lbl_803A2028
	mr       r3, r30
	bl       __dl__FPv

lbl_803A2028:
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
 * Address:	803A2044
 * Size:	000090
 */
TScaleUpCounter::~TScaleUpCounter(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_803A20B8
	lis      r4, __vt__Q28Morimura15TScaleUpCounter@ha
	addi     r0, r4, __vt__Q28Morimura15TScaleUpCounter@l
	stw      r0, 0(r30)
	beq      lbl_803A20A8
	lis      r4, __vt__Q32og6Screen18CallBack_CounterRV@ha
	addi     r0, r4, __vt__Q32og6Screen18CallBack_CounterRV@l
	stw      r0, 0(r30)
	beq      lbl_803A20A8
	lis      r4, __vt__Q29P2DScreen12CallBackNode@ha
	addi     r0, r4, __vt__Q29P2DScreen12CallBackNode@l
	stw      r0, 0(r30)
	beq      lbl_803A20A8
	lis      r5, __vt__Q29P2DScreen4Node@ha
	li       r4, 0
	addi     r0, r5, __vt__Q29P2DScreen4Node@l
	stw      r0, 0(r30)
	bl       __dt__5CNodeFv

lbl_803A20A8:
	extsh.   r0, r31
	ble      lbl_803A20B8
	mr       r3, r30
	bl       __dl__FPv

lbl_803A20B8:
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
 * Address:	803A20D4
 * Size:	000080
 */
TCallbackScissor::~TCallbackScissor(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_803A2138
	lis      r4, __vt__Q28Morimura16TCallbackScissor@ha
	addi     r0, r4, __vt__Q28Morimura16TCallbackScissor@l
	stw      r0, 0(r30)
	beq      lbl_803A2128
	lis      r4, __vt__Q29P2DScreen12CallBackNode@ha
	addi     r0, r4, __vt__Q29P2DScreen12CallBackNode@l
	stw      r0, 0(r30)
	beq      lbl_803A2128
	lis      r5, __vt__Q29P2DScreen4Node@ha
	li       r4, 0
	addi     r0, r5, __vt__Q29P2DScreen4Node@l
	stw      r0, 0(r30)
	bl       __dt__5CNodeFv

lbl_803A2128:
	extsh.   r0, r31
	ble      lbl_803A2138
	mr       r3, r30
	bl       __dl__FPv

lbl_803A2138:
	lwz      r0, 0x14(r1)
	mr       r3, r30
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

} // namespace Morimura
