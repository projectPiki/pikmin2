#include "types.h"

/*
    Generated from dpostproc

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q32og6Screen14ContenaCounter
    __vt__Q32og6Screen14ContenaCounter:
        .4byte 0
        .4byte 0
        .4byte __dt__Q32og6Screen14ContenaCounterFv
        .4byte getTypeID__9J2DScreenCFv
        .4byte move__7J2DPaneFff
        .4byte add__7J2DPaneFff
        .4byte resize__7J2DPaneFff
        .4byte setCullBack__7J2DPaneFb
        .4byte setCullBack__7J2DPaneF11_GXCullMode
        .4byte setAlpha__7J2DPaneFUc
        .4byte setConnectParent__7J2DPaneFb
        .4byte calcMtx__9J2DScreenFv
        .4byte update__Q29P2DScreen3MgrFv
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
*/

namespace og {

namespace Screen {

	/*
	 * --INFO--
	 * Address:	80307B58
	 * Size:	000090
	 */
	ContenaCounter::ContenaCounter(og::Screen::DispMemberContena*)
	{
		/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	bl       __ct__Q29P2DScreen10Mgr_tuningFv
	lis      r3, __vt__Q32og6Screen14ContenaCounter@ha
	li       r0, 0
	addi     r4, r3, __vt__Q32og6Screen14ContenaCounter@l
	mr       r3, r30
	stw      r4, 0(r30)
	stw      r31, 0x148(r30)
	lwz      r4, 0x148(r30)
	addi     r4, r4, 0xc
	stw      r4, 0x164(r30)
	lwz      r4, 0x148(r30)
	addi     r4, r4, 0x28
	stw      r4, 0x168(r30)
	lwz      r4, 0x148(r30)
	addi     r4, r4, 0x14
	stw      r4, 0x16c(r30)
	lwz      r4, 0x148(r30)
	addi     r4, r4, 0x20
	stw      r4, 0x170(r30)
	stw      r0, 0x14c(r30)
	stw      r0, 0x150(r30)
	stw      r0, 0x154(r30)
	stw      r0, 0x158(r30)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	80307BE8
	 * Size:	000140
	 */
	void ContenaCounter::setblo(char*, JKRArchive*)
	{
		/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r5
	mr       r6, r31
	lis      r5, 0x104
	stw      r30, 0x18(r1)
	mr       r30, r3
	bl       set__9J2DScreenFPCcUlP10JKRArchive
	li       r3, 4
	oris     r3, r3, 4
	mtspr    0x392, r3
	li       r3, 5
	oris     r3, r3, 5
	mtspr    0x393, r3
	li       r3, 6
	oris     r3, r3, 6
	mtspr    0x394, r3
	li       r3, 7
	oris     r3, r3, 7
	mtspr    0x395, r3
	mr       r3, r30
	bl       setAlphaScreen__Q22og6ScreenFP7J2DPane
	mr       r3, r30
	li       r4, 0xff
	lwz      r12, 0(r30)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	stw      r31, 8(r1)
	lis      r4, 0x615F6B31@ha
	mr       r3, r30
	li       r5, 0
	lwz      r7, 0x164(r30)
	addi     r6, r4, 0x615F6B31@l
	li       r8, 5
	li       r9, 1
	li       r10, 1
	bl
	setCallBack_CounterRV__Q22og6ScreenFPQ29P2DScreen3MgrUxPUlUsbbP10JKRArchive
	stw      r3, 0x14c(r30)
	lis      r4, 0x625F6B31@ha
	mr       r3, r30
	li       r5, 0
	stw      r31, 8(r1)
	addi     r6, r4, 0x625F6B31@l
	li       r8, 4
	li       r9, 0
	lwz      r7, 0x168(r30)
	li       r10, 1
	bl
	setCallBack_CounterRV__Q22og6ScreenFPQ29P2DScreen3MgrUxPUlUsbbP10JKRArchive
	stw      r3, 0x150(r30)
	lis      r4, 0x635F6B31@ha
	mr       r3, r30
	li       r5, 0
	stw      r31, 8(r1)
	addi     r6, r4, 0x635F6B31@l
	li       r8, 4
	li       r9, 1
	lwz      r7, 0x16c(r30)
	li       r10, 1
	bl
	setCallBack_CounterRV__Q22og6ScreenFPQ29P2DScreen3MgrUxPUlUsbbP10JKRArchive
	stw      r3, 0x154(r30)
	lis      r4, 0x645F6B31@ha
	mr       r3, r30
	li       r5, 0
	stw      r31, 8(r1)
	addi     r6, r4, 0x645F6B31@l
	li       r8, 4
	li       r9, 1
	lwz      r7, 0x170(r30)
	li       r10, 1
	bl
	setCallBack_CounterRV__Q22og6ScreenFPQ29P2DScreen3MgrUxPUlUsbbP10JKRArchive
	stw      r3, 0x158(r30)
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
	 * Address:	80307D28
	 * Size:	0000A4
	 */
	ContenaCounter::~ContenaCounter(void)
	{
		/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_80307DB0
	lis      r3, __vt__Q32og6Screen14ContenaCounter@ha
	addi     r0, r3, __vt__Q32og6Screen14ContenaCounter@l
	stw      r0, 0(r30)
	beq      lbl_80307DA0
	lis      r3, __vt__Q29P2DScreen10Mgr_tuning@ha
	addi     r0, r3, __vt__Q29P2DScreen10Mgr_tuning@l
	stw      r0, 0(r30)
	beq      lbl_80307DA0
	lis      r3, __vt__Q29P2DScreen3Mgr@ha
	addic.   r0, r30, 0x118
	addi     r0, r3, __vt__Q29P2DScreen3Mgr@l
	stw      r0, 0(r30)
	beq      lbl_80307D94
	lis      r4, __vt__Q29P2DScreen4Node@ha
	addi     r3, r30, 0x118
	addi     r0, r4, __vt__Q29P2DScreen4Node@l
	li       r4, 0
	stw      r0, 0x118(r30)
	bl       __dt__5CNodeFv

lbl_80307D94:
	mr       r3, r30
	li       r4, 0
	bl       __dt__9J2DScreenFv

lbl_80307DA0:
	extsh.   r0, r31
	ble      lbl_80307DB0
	mr       r3, r30
	bl       __dl__FPv

lbl_80307DB0:
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
