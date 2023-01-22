#include "types.h"
#include "JSystem/J3D/J3DModel.h"
#include "JSystem/J3D/J3DVtxColorCalc.h"

/*
 * --INFO--
 * Address:	80088658
 * Size:	000088
 */
void J3DSkinDeform::deform(J3DModel* model)
{
	if (IS_FLAG(model->_08.typeView, 4)) {
		SET_FLAG(_14.typeView, 2);
	} else {
		RESET_FLAG(_14.typeView, 2);
	}

	if (IS_FLAG(model->_08.typeView, 8)) {
		SET_FLAG(_14.typeView, 1);
	} else {
		RESET_FLAG(_14.typeView, 1);
	}
	model->update();
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r5, r4
	stw      r0, 0x14(r1)
	lwz      r0, 8(r4)
	rlwinm.  r0, r0, 0, 0x1d, 0x1d
	beq      lbl_80088684
	lwz      r0, 0x14(r3)
	ori      r0, r0, 2
	stw      r0, 0x14(r3)
	b        lbl_80088690

lbl_80088684:
	lwz      r0, 0x14(r3)
	rlwinm   r0, r0, 0, 0x1f, 0x1d
	stw      r0, 0x14(r3)

lbl_80088690:
	lwz      r0, 8(r5)
	rlwinm.  r0, r0, 0, 0x1c, 0x1c
	beq      lbl_800886AC
	lwz      r0, 0x14(r3)
	ori      r0, r0, 1
	stw      r0, 0x14(r3)
	b        lbl_800886B8

lbl_800886AC:
	lwz      r0, 0x14(r3)
	rlwinm   r0, r0, 0, 0, 0x1e
	stw      r0, 0x14(r3)

lbl_800886B8:
	lwz      r12, 0(r3)
	addi     r4, r5, 0x88
	lwz      r5, 0x84(r5)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800886E0
 * Size:	000030
 */
void J3DVtxColorCalc::calc(J3DModel* model) { calc(&model->m_vertexBuffer); }

/*
 * --INFO--
 * Address:	80088710
 * Size:	0000F4
 */
void J3DVtxColorCalc::calc(J3DVertexBuffer* buffer)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stmw     r27, 0x1c(r1)
	mr       r29, r3
	mr       r30, r4
	lwz      r0, 4(r3)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_800887F0
	lwz      r0, 8(r29)
	cmplwi   r0, 0
	beq      lbl_800887F0
	lwz      r3, 0x14(r30)
	li       r31, 0
	lwz      r0, 0x18(r30)
	stw      r0, 0x14(r30)
	stw      r3, 0x18(r30)
	lwz      r3, 8(r29)
	lwz      r27, 0x14(r30)
	lhz      r28, 0xc(r3)
	b        lbl_800887CC

lbl_80088764:
	lwz      r3, 8(r29)
	mr       r5, r31
	addi     r6, r1, 8
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r3, 8(r29)
	rlwinm   r0, r31, 3, 0xd, 0x1c
	li       r7, 0
	li       r6, 0
	lwz      r3, 0x10(r3)
	add      r5, r3, r0
	b        lbl_800887BC

lbl_800887A0:
	lwz      r3, 4(r5)
	addi     r7, r7, 1
	lwz      r4, 8(r1)
	lhzx     r0, r3, r6
	addi     r6, r6, 2
	slwi     r0, r0, 2
	stwx     r4, r27, r0

lbl_800887BC:
	lhz      r0, 0(r5)
	cmplw    r7, r0
	blt      lbl_800887A0
	addi     r31, r31, 1

lbl_800887CC:
	clrlwi   r0, r31, 0x10
	cmplw    r0, r28
	blt      lbl_80088764
	lwz      r4, 0(r30)
	mr       r3, r27
	lwz      r0, 8(r4)
	slwi     r4, r0, 2
	bl       DCStoreRange
	stw      r27, 0x34(r30)

lbl_800887F0:
	lmw      r27, 0x1c(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}
