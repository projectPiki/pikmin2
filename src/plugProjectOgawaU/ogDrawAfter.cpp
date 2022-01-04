#include "og/Screen/callbackNodes.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q32og6Screen18CallBack_DrawAfter
    __vt__Q32og6Screen18CallBack_DrawAfter:
        .4byte 0
        .4byte 0
        .4byte __dt__Q32og6Screen18CallBack_DrawAfterFv
        .4byte getChildCount__5CNodeFv
        .4byte update__Q32og6Screen18CallBack_DrawAfterFv
        .4byte
   draw__Q32og6Screen18CallBack_DrawAfterFR8GraphicsR14J2DGrafContext .4byte
   doInit__Q29P2DScreen4NodeFv .4byte 0
*/

namespace og {

namespace Screen {

	/*
	 * --INFO--
	 * Address:	........
	 * Size:	0000B4
	 */
	CallBack_DrawAfter::CallBack_DrawAfter(P2DScreen::Mgr*, u64)
	{
		// UNUSED FUNCTION
	}

	/*
	 * --INFO--
	 * Address:	8032D684
	 * Size:	000004
	 */
	void CallBack_DrawAfter::update(void) { }

	/*
	 * --INFO--
	 * Address:	8032D688
	 * Size:	0000FC
	 */
	void CallBack_DrawAfter::draw(Graphics&, J2DGrafContext&)
	{
		/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	stw      r31, 0x4c(r1)
	mr       r31, r5
	stw      r30, 0x48(r1)
	mr       r30, r4
	stw      r29, 0x44(r1)
	mr       r29, r3
	lbz      r0, 0x24(r3)
	cmplwi   r0, 0
	beq      lbl_8032D768
	lwz      r4, 0x1c(r29)
	addi     r3, r1, 0x14
	li       r5, 0
	bl       getGlbVtx__7J2DPaneCFUc
	lwz      r4, 0x14(r1)
	addi     r3, r1, 8
	lwz      r6, 0x18(r1)
	li       r5, 3
	lwz      r0, 0x1c(r1)
	stw      r4, 0x2c(r1)
	lwz      r4, 0x1c(r29)
	stw      r6, 0x30(r1)
	stw      r0, 0x34(r1)
	bl       getGlbVtx__7J2DPaneCFUc
	addi     r3, r30, 0xbc
	lwz      r5, 8(r1)
	lwz      r12, 0xbc(r30)
	lwz      r4, 0xc(r1)
	lwz      r0, 0x10(r1)
	lwz      r12, 0x14(r12)
	stw      r5, 0x20(r1)
	stw      r4, 0x24(r1)
	stw      r0, 0x28(r1)
	mtctr    r12
	bctrl
	lwz      r3, 0x20(r29)
	li       r4, 0
	lfs      f2, 0x30(r1)
	li       r5, 0
	lwz      r12, 0(r3)
	li       r6, 0
	lfs      f0, 0x24(r1)
	lfs      f1, 0x2c(r1)
	lfs      f3, 0x20(r1)
	fsubs    f4, f0, f2
	lwz      r12, 0xec(r12)
	fsubs    f3, f3, f1
	mtctr    r12
	bctrl
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl

lbl_8032D768:
	lwz      r0, 0x54(r1)
	lwz      r31, 0x4c(r1)
	lwz      r30, 0x48(r1)
	lwz      r29, 0x44(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	8032D784
	 * Size:	0000E4
	 */
	void setCallBack_DrawAfter(P2DScreen::Mgr*, unsigned long long)
	{
		/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r30, r5
	stw      r29, 0x14(r1)
	mr       r29, r6
	stw      r28, 0x10(r1)
	mr       r28, r3
	li       r3, 0x28
	bl       __nw__FUl
	or.      r31, r3, r3
	beq      lbl_8032D830
	bl       __ct__5CNodeFv
	lis      r3, __vt__Q29P2DScreen4Node@ha
	lis      r4, __vt__Q29P2DScreen12CallBackNode@ha
	addi     r0, r3, __vt__Q29P2DScreen4Node@l
	lis      r3, __vt__Q32og6Screen18CallBack_DrawAfter@ha
	stw      r0, 0(r31)
	li       r5, 0
	addi     r4, r4, __vt__Q29P2DScreen12CallBackNode@l
	addi     r0, r3, __vt__Q32og6Screen18CallBack_DrawAfter@l
	stw      r5, 0x18(r31)
	mr       r3, r28
	mr       r6, r29
	mr       r5, r30
	stw      r4, 0(r31)
	stw      r0, 0(r31)
	bl       TagSearch__Q22og6ScreenFP9J2DScreenUx
	stw      r3, 0x1c(r31)
	lis      r5, 0x636F7079@ha
	lis      r4, 0x6F674441@ha
	lwz      r3, 0x1c(r31)
	addi     r6, r5, 0x636F7079@l
	addi     r5, r4, 0x6F674441@l
	bl       CopyPicture__Q22og6ScreenFP12J2DPictureExUx
	stw      r3, 0x20(r31)
	li       r4, 0
	li       r0, 1
	lwz      r3, 0x1c(r31)
	stb      r4, 0xb0(r3)
	stb      r0, 0x24(r31)

lbl_8032D830:
	mr       r3, r28
	mr       r6, r29
	mr       r5, r30
	mr       r7, r31
	bl       addCallBack__Q29P2DScreen3MgrFUxPQ29P2DScreen4Node
	lwz      r0, 0x24(r1)
	mr       r3, r31
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
	 * Address:	8032D868
	 * Size:	000080
	 */
	CallBack_DrawAfter::~CallBack_DrawAfter(void)
	{
		/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_8032D8CC
	lis      r4, __vt__Q32og6Screen18CallBack_DrawAfter@ha
	addi     r0, r4, __vt__Q32og6Screen18CallBack_DrawAfter@l
	stw      r0, 0(r30)
	beq      lbl_8032D8BC
	lis      r4, __vt__Q29P2DScreen12CallBackNode@ha
	addi     r0, r4, __vt__Q29P2DScreen12CallBackNode@l
	stw      r0, 0(r30)
	beq      lbl_8032D8BC
	lis      r5, __vt__Q29P2DScreen4Node@ha
	li       r4, 0
	addi     r0, r5, __vt__Q29P2DScreen4Node@l
	stw      r0, 0(r30)
	bl       __dt__5CNodeFv

lbl_8032D8BC:
	extsh.   r0, r31
	ble      lbl_8032D8CC
	mr       r3, r30
	bl       __dl__FPv

lbl_8032D8CC:
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
