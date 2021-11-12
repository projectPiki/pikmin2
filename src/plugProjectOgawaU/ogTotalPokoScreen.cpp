#include "types.h"

/*
    Generated from dpostproc

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q32og6Screen15TotalPokoScreen
    __vt__Q32og6Screen15TotalPokoScreen:
        .4byte 0
        .4byte 0
        .4byte __dt__Q32og6Screen15TotalPokoScreenFv
        .4byte getTypeID__9J2DScreenCFv
        .4byte move__7J2DPaneFff
        .4byte add__7J2DPaneFff
        .4byte resize__7J2DPaneFff
        .4byte setCullBack__7J2DPaneFb
        .4byte setCullBack__7J2DPaneF11_GXCullMode
        .4byte setAlpha__7J2DPaneFUc
        .4byte setConnectParent__7J2DPaneFb
        .4byte calcMtx__9J2DScreenFv
        .4byte update__Q32og6Screen15TotalPokoScreenFv
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
        .4byte
   createPane__9J2DScreenFRC18J2DScrnBlockHeaderP20JSURandomInputStreamP7J2DPaneUl
        .4byte
   createPane__9J2DScreenFRC18J2DScrnBlockHeaderP20JSURandomInputStreamP7J2DPaneUlP10JKRArchive
        .4byte draw__Q29P2DScreen10Mgr_tuningFR8GraphicsR14J2DGrafContext
        .4byte setCallBack__Q32og6Screen15TotalPokoScreenFP10JKRArchiveffff
        .4byte 0

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051DF28
    lbl_8051DF28:
        .4byte 0x00000000
    .global lbl_8051DF2C
    lbl_8051DF2C:
        .4byte 0x3F4CCCCD
    .global lbl_8051DF30
    lbl_8051DF30:
        .4byte 0x41A00000
    .global lbl_8051DF34
    lbl_8051DF34:
        .float 0.3
    .global lbl_8051DF38
    lbl_8051DF38:
        .float 0.5
    .global lbl_8051DF3C
    lbl_8051DF3C:
        .4byte 0xC2A00000
*/

namespace og {

namespace Screen {

	/*
	 * --INFO--
	 * Address:	8032C3AC
	 * Size:	0000A0
	 */
	TotalPokoScreen::TotalPokoScreen(void)
	{
		/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       __ct__Q29P2DScreen10Mgr_tuningFv
	lis      r3, __vt__Q32og6Screen15TotalPokoScreen@ha
	li       r4, 0
	addi     r3, r3, __vt__Q32og6Screen15TotalPokoScreen@l
	li       r0, 0x9a5
	stw      r3, 0(r31)
	li       r3, 0x1c
	lfs      f0, lbl_8051DF28@sda21(r2)
	stb      r4, 0x154(r31)
	stw      r0, 0x148(r31)
	lwz      r0, 0x148(r31)
	stw      r0, 0x14c(r31)
	lwz      r0, 0x148(r31)
	stw      r0, 0x150(r31)
	stw      r4, 0x158(r31)
	stw      r4, 0x15c(r31)
	stfs     f0, 0x160(r31)
	stfs     f0, 0x164(r31)
	stfs     f0, 0x168(r31)
	stfs     f0, 0x16c(r31)
	stfs     f0, 0x170(r31)
	stfs     f0, 0x174(r31)
	stb      r4, 0x178(r31)
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8032C430
	bl       __ct__Q32og6Screen8ScaleMgrFv
	mr       r0, r3

lbl_8032C430:
	stw      r0, 0x17c(r31)
	mr       r3, r31
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	8032C44C
	 * Size:	000070
	 */
	void TotalPokoScreen::showTotalPoko(void)
	{
		/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lbz      r0, 0x154(r3)
	cmplwi   r0, 0
	bne      lbl_8032C4A8
	li       r0, 1
	lfs      f0, lbl_8051DF2C@sda21(r2)
	stb      r0, 0x154(r31)
	stfs     f0, 0x174(r31)
	stb      r0, 0x178(r31)
	bl       checkMovieActive__Q22og9newScreenFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_8032C494
	lwz      r3, ogSound__2og@sda21(r13)
	bl       setOpenTotalPoko__Q22og5SoundFv

lbl_8032C494:
	lwz      r3, 0x14c(r31)
	li       r0, 1
	stw      r3, 0x150(r31)
	lwz      r3, 0x15c(r31)
	stb      r0, 0xb0(r3)

lbl_8032C4A8:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	8032C4BC
	 * Size:	000070
	 */
	void TotalPokoScreen::setTotalPoko(unsigned long)
	{
		/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r0, 0x148(r3)
	stw      r0, 0x14c(r3)
	stw      r4, 0x148(r3)
	lbz      r0, 0x154(r3)
	cmplwi   r0, 0
	beq      lbl_8032C51C
	lfs      f1, 0x174(r3)
	lfs      f0, lbl_8051DF28@sda21(r2)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_8032C51C
	lbz      r0, 0x178(r3)
	cmplwi   r0, 0
	bne      lbl_8032C51C
	li       r0, 1
	stb      r0, 0x178(r3)
	bl       checkMovieActive__Q22og9newScreenFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_8032C51C
	lwz      r3, ogSound__2og@sda21(r13)
	bl       setPlusTotalPoko__Q22og5SoundFv

lbl_8032C51C:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	8032C52C
	 * Size:	000044
	 */
	void TotalPokoScreen::closeTotalPoko(void)
	{
		/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lbz      r0, 0x154(r3)
	cmplwi   r0, 0
	beq      lbl_8032C55C
	lwz      r3, ogSound__2og@sda21(r13)
	bl       setCloseTotalPoko__Q22og5SoundFv
	li       r0, 0
	stb      r0, 0x154(r31)

lbl_8032C55C:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	8032C570
	 * Size:	000010
	 */
	void TotalPokoScreen::hideTotalPoko(void)
	{
		/*
	lwz      r3, 0x15c(r3)
	li       r0, 0
	stb      r0, 0xb0(r3)
	blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	8032C580
	 * Size:	000138
	 */
	void TotalPokoScreen::setCallBack(JKRArchive*, float, float, float, float)
	{
		/*
	stwu     r1, -0x60(r1)
	mflr     r0
	stw      r0, 0x64(r1)
	stfd     f31, 0x50(r1)
	psq_st   f31, 88(r1), 0, qr0
	stfd     f30, 0x40(r1)
	psq_st   f30, 72(r1), 0, qr0
	stfd     f29, 0x30(r1)
	psq_st   f29, 56(r1), 0, qr0
	stfd     f28, 0x20(r1)
	psq_st   f28, 40(r1), 0, qr0
	stw      r31, 0x1c(r1)
	fmr      f28, f1
	mr       r31, r3
	lis      r6, 0x6B6F3031@ha
	lis      r5, 0x0050706F@ha
	fmr      f29, f2
	stw      r4, 8(r1)
	fmr      f30, f3
	addi     r6, r6, 0x6B6F3031@l
	fmr      f31, f4
	addi     r5, r5, 0x0050706F@l
	addi     r7, r31, 0x150
	li       r8, 0xa
	li       r9, 0
	li       r10, 1
	bl
	setCallBack_CounterRV__Q22og6ScreenFPQ29P2DScreen3MgrUxPUlUsbbP10JKRArchive
	stw      r3, 0x158(r31)
	mr       r3, r31
	lis      r4, 0x706F6B6F@ha
	li       r5, 0x4e
	lwz      r12, 0(r31)
	addi     r6, r4, 0x706F6B6F@l
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x15c(r31)
	lfs      f0, lbl_8051DF28@sda21(r2)
	stfs     f0, 0x160(r31)
	lwz      r3, 0x15c(r31)
	lfs      f0, 0xd4(r3)
	fadds    f0, f28, f0
	stfs     f0, 0x164(r31)
	lwz      r3, 0x15c(r31)
	lfs      f0, 0xd8(r3)
	fadds    f0, f29, f0
	stfs     f0, 0x168(r31)
	lfs      f0, 0x164(r31)
	stfs     f0, 0x16c(r31)
	lfs      f0, 0x168(r31)
	stfs     f0, 0x170(r31)
	lwz      r3, 0x15c(r31)
	lfs      f1, 0x16c(r31)
	lwz      r12, 0(r3)
	lfs      f2, 0x170(r31)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x15c(r31)
	stfs     f30, 0xcc(r3)
	stfs     f31, 0xd0(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	psq_l    f31, 88(r1), 0, qr0
	lfd      f31, 0x50(r1)
	psq_l    f30, 72(r1), 0, qr0
	lfd      f30, 0x40(r1)
	psq_l    f29, 56(r1), 0, qr0
	lfd      f29, 0x30(r1)
	psq_l    f28, 40(r1), 0, qr0
	lfd      f28, 0x20(r1)
	lwz      r0, 0x64(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x60
	blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	8032C6B8
	 * Size:	000144
	 */
	void TotalPokoScreen::update(void)
	{
		/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       update__Q29P2DScreen3MgrFv
	lbz      r0, 0x154(r31)
	cmplwi   r0, 0
	beq      lbl_8032C78C
	lwz      r3, sys@sda21(r13)
	lfs      f1, 0x174(r31)
	lfs      f0, 0x54(r3)
	fsubs    f0, f1, f0
	stfs     f0, 0x174(r31)
	lfs      f1, 0x170(r31)
	lfs      f0, 0x168(r31)
	fcmpo    cr0, f1, f0
	bge      lbl_8032C738
	lfs      f2, lbl_8051DF30@sda21(r2)
	fadds    f0, f1, f2
	stfs     f0, 0x170(r31)
	lfs      f0, 0x170(r31)
	lfs      f1, 0x168(r31)
	fcmpo    cr0, f0, f1
	cror     2, 1, 2
	bne      lbl_8032C738
	stfs     f1, 0x170(r31)
	lfs      f1, lbl_8051DF34@sda21(r2)
	lwz      r3, 0x17c(r31)
	lfs      f3, lbl_8051DF38@sda21(r2)
	lfs      f4, lbl_8051DF28@sda21(r2)
	bl       up__Q32og6Screen8ScaleMgrFffff

lbl_8032C738:
	lfs      f1, 0x174(r31)
	lfs      f0, lbl_8051DF28@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_8032C7A8
	stfs     f0, 0x174(r31)
	lbz      r0, 0x178(r31)
	cmplwi   r0, 0
	beq      lbl_8032C7A8
	lwz      r0, 0x148(r31)
	lfs      f1, lbl_8051DF30@sda21(r2)
	stw      r0, 0x150(r31)
	lwz      r3, 0x158(r31)
	bl       startPuyoUp__Q32og6Screen18CallBack_CounterRVFf
	bl       checkMovieActive__Q22og9newScreenFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_8032C780
	lwz      r3, ogSound__2og@sda21(r13)
	bl       setPlusTotalPoko__Q22og5SoundFv

lbl_8032C780:
	li       r0, 0
	stb      r0, 0x178(r31)
	b        lbl_8032C7A8

lbl_8032C78C:
	lfs      f1, 0x170(r31)
	lfs      f0, lbl_8051DF3C@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_8032C7A8
	lfs      f0, lbl_8051DF30@sda21(r2)
	fsubs    f0, f1, f0
	stfs     f0, 0x170(r31)

lbl_8032C7A8:
	lwz      r3, 0x17c(r31)
	bl       calc__Q32og6Screen8ScaleMgrFv
	lwz      r3, 0x15c(r31)
	stfs     f1, 0xcc(r3)
	stfs     f1, 0xd0(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x15c(r31)
	lfs      f1, 0x16c(r31)
	lwz      r12, 0(r3)
	lfs      f2, 0x170(r31)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	8032C7FC
	 * Size:	0000A4
	 */
	TotalPokoScreen::~TotalPokoScreen(void)
	{
		/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_8032C884
	lis      r3, __vt__Q32og6Screen15TotalPokoScreen@ha
	addi     r0, r3, __vt__Q32og6Screen15TotalPokoScreen@l
	stw      r0, 0(r30)
	beq      lbl_8032C874
	lis      r3, __vt__Q29P2DScreen10Mgr_tuning@ha
	addi     r0, r3, __vt__Q29P2DScreen10Mgr_tuning@l
	stw      r0, 0(r30)
	beq      lbl_8032C874
	lis      r3, __vt__Q29P2DScreen3Mgr@ha
	addic.   r0, r30, 0x118
	addi     r0, r3, __vt__Q29P2DScreen3Mgr@l
	stw      r0, 0(r30)
	beq      lbl_8032C868
	lis      r4, __vt__Q29P2DScreen4Node@ha
	addi     r3, r30, 0x118
	addi     r0, r4, __vt__Q29P2DScreen4Node@l
	li       r4, 0
	stw      r0, 0x118(r30)
	bl       __dt__5CNodeFv

lbl_8032C868:
	mr       r3, r30
	li       r4, 0
	bl       __dt__9J2DScreenFv

lbl_8032C874:
	extsh.   r0, r31
	ble      lbl_8032C884
	mr       r3, r30
	bl       __dl__FPv

lbl_8032C884:
	lwz      r0, 0x14(r1)
	mr       r3, r30
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
		*/
	}
} // namespace Screen
} // namespace og
