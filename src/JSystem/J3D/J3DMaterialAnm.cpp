#include "JSystem/J3D/J3DTevBlock.h"
#include "JSystem/J3D/J3DTypes.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__14J3DMaterialAnm
    __vt__14J3DMaterialAnm:
        .4byte 0
        .4byte 0
        .4byte __dt__14J3DMaterialAnmFv
        .4byte calc__14J3DMaterialAnmCFP11J3DMaterial
    .global __vt__11J3DTexNoAnm
    __vt__11J3DTexNoAnm:
        .4byte 0
        .4byte 0
        .4byte calc__11J3DTexNoAnmCFPUs
        .4byte 0
*/

/*
 * --INFO--
 * Address:	8006A0F4
 * Size:	000070
 */
void J3DMaterialAnm::initialize()
{
	/*
	li       r0, 0
	sth      r0, 6(r3)
	sth      r0, 0xe(r3)
	sth      r0, 0x5a(r3)
	sth      r0, 0x66(r3)
	sth      r0, 0x72(r3)
	sth      r0, 0x7e(r3)
	sth      r0, 0x8a(r3)
	sth      r0, 0x96(r3)
	sth      r0, 0xa2(r3)
	sth      r0, 0xae(r3)
	sth      r0, 0xb6(r3)
	sth      r0, 0xbe(r3)
	sth      r0, 0xc6(r3)
	sth      r0, 0xce(r3)
	sth      r0, 0xd6(r3)
	sth      r0, 0xde(r3)
	sth      r0, 0xe6(r3)
	sth      r0, 0xee(r3)
	sth      r0, 0x16(r3)
	sth      r0, 0x1e(r3)
	sth      r0, 0x26(r3)
	sth      r0, 0x2e(r3)
	sth      r0, 0x36(r3)
	sth      r0, 0x3e(r3)
	sth      r0, 0x46(r3)
	sth      r0, 0x4e(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8006A164
 * Size:	0001EC
 */
void J3DMaterialAnm::calc(J3DMaterial*) const
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r4
	stw      r30, 0x18(r1)
	mr       r30, r3
	stw      r29, 0x14(r1)
	mr       r29, r30
	stw      r28, 0x10(r1)
	li       r28, 0

lbl_8006A190:
	lhz      r0, 6(r29)
	cmplwi   r0, 0
	beq      lbl_8006A1D4
	lwz      r3, 0x24(r31)
	mr       r4, r28
	lwz      r12, 0(r3)
	lwz      r12, 0x38(r12)
	mtctr    r12
	bctrl
	mr       r0, r3
	lwz      r3, 8(r29)
	mr       r5, r0
	lhz      r4, 4(r29)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl

lbl_8006A1D4:
	addi     r28, r28, 1
	addi     r29, r29, 8
	cmplwi   r28, 2
	blt      lbl_8006A190
	li       r28, 0
	mr       r29, r30

lbl_8006A1EC:
	lhz      r0, 0x5a(r29)
	cmplwi   r0, 0
	beq      lbl_8006A22C
	addi     r3, r29, 0x54
	addi     r4, r1, 8
	lwz      r12, 0x54(r29)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x2c(r31)
	mr       r4, r28
	lhz      r5, 8(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x4c(r12)
	mtctr    r12
	bctrl

lbl_8006A22C:
	addi     r28, r28, 1
	addi     r29, r29, 0xc
	cmplwi   r28, 8
	blt      lbl_8006A1EC
	li       r28, 0
	mr       r29, r30

lbl_8006A244:
	lhz      r0, 0xb6(r29)
	cmplwi   r0, 0
	beq      lbl_8006A27C
	lwz      r3, 0x2c(r31)
	mr       r4, r28
	lwz      r12, 0(r3)
	lwz      r12, 0x68(r12)
	mtctr    r12
	bctrl
	mr       r0, r3
	lwz      r3, 0xb8(r29)
	lhz      r4, 0xb4(r29)
	mr       r5, r0
	bl       getTevColorReg__15J3DAnmTevRegKeyCFUsP11_GXColorS10

lbl_8006A27C:
	addi     r28, r28, 1
	addi     r29, r29, 8
	cmplwi   r28, 3
	blt      lbl_8006A244
	li       r28, 0
	mr       r29, r30

lbl_8006A294:
	lhz      r0, 0xd6(r29)
	cmplwi   r0, 0
	beq      lbl_8006A2CC
	lwz      r3, 0x2c(r31)
	mr       r4, r28
	lwz      r12, 0(r3)
	lwz      r12, 0x74(r12)
	mtctr    r12
	bctrl
	mr       r0, r3
	lwz      r3, 0xd8(r29)
	lhz      r4, 0xd4(r29)
	mr       r5, r0
	bl       getTevKonstReg__15J3DAnmTevRegKeyCFUsP8_GXColor

lbl_8006A2CC:
	addi     r28, r28, 1
	addi     r29, r29, 8
	cmplwi   r28, 4
	blt      lbl_8006A294
	li       r28, 0
	mr       r29, r30

lbl_8006A2E4:
	lhz      r0, 0x16(r29)
	cmplwi   r0, 0
	beq      lbl_8006A320
	lwz      r3, 0x28(r31)
	mr       r4, r28
	lwz      r12, 0(r3)
	lwz      r12, 0x50(r12)
	mtctr    r12
	bctrl
	lwz      r6, 0x18(r29)
	addi     r5, r3, 0x10
	lhz      r4, 0x14(r29)
	lfs      f1, 8(r6)
	mr       r3, r6
	bl       calcTransform__19J3DAnmTextureSRTKeyCFfUsP17J3DTextureSRTInfo

lbl_8006A320:
	addi     r28, r28, 1
	addi     r29, r29, 8
	cmplwi   r28, 8
	blt      lbl_8006A2E4
	lwz      r0, 0x24(r1)
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
 * Address:	8006A350
 * Size:	000008
 */
J3DGXColor J3DTevBlock::getTevKColor(unsigned long) { return 0x0; }

/*
 * --INFO--
 * Address:	8006A358
 * Size:	000008
 */
J3DGXColor J3DTevBlock::getTevColor(unsigned long) { return 0x0; }

/*
 * --INFO--
 * Address:	8006A360
 * Size:	000004
 */
void J3DTevBlock::setTexNo(unsigned long, unsigned short) { }

/*
 * --INFO--
 * Address:	8006A364
 * Size:	000030
 */
void J3DTexNoAnm::calc(unsigned short*) const
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r6, r3
	mr       r5, r4
	stw      r0, 0x14(r1)
	lwz      r3, 8(r3)
	lhz      r4, 4(r6)
	bl       getTexNo__16J3DAnmTexPatternCFUsPUs
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8006A394
 * Size:	0000D0
 */
J3DMaterialAnm::~J3DMaterialAnm()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_8006A448
	lis      r3, __vt__14J3DMaterialAnm@ha
	lis      r4, __dt__15J3DTevKColorAnmFv@ha
	addi     r0, r3, __vt__14J3DMaterialAnm@l
	li       r5, 8
	stw      r0, 0(r30)
	addi     r3, r30, 0xd4
	addi     r4, r4, __dt__15J3DTevKColorAnmFv@l
	li       r6, 4
	bl       __destroy_arr
	lis      r4, __dt__14J3DTevColorAnmFv@ha
	addi     r3, r30, 0xb4
	addi     r4, r4, __dt__14J3DTevColorAnmFv@l
	li       r5, 8
	li       r6, 4
	bl       __destroy_arr
	lis      r4, __dt__11J3DTexNoAnmFv@ha
	addi     r3, r30, 0x54
	addi     r4, r4, __dt__11J3DTexNoAnmFv@l
	li       r5, 0xc
	li       r6, 8
	bl       __destroy_arr
	lis      r4, __dt__12J3DTexMtxAnmFv@ha
	addi     r3, r30, 0x14
	addi     r4, r4, __dt__12J3DTexMtxAnmFv@l
	li       r5, 8
	li       r6, 8
	bl       __destroy_arr
	lis      r4, __dt__14J3DMatColorAnmFv@ha
	addi     r3, r30, 4
	addi     r4, r4, __dt__14J3DMatColorAnmFv@l
	li       r5, 8
	li       r6, 2
	bl       __destroy_arr
	extsh.   r0, r31
	ble      lbl_8006A448
	mr       r3, r30
	bl       __dl__FPv

lbl_8006A448:
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
 * Address:	8006A464
 * Size:	00003C
 */
J3DMatColorAnm::~J3DMatColorAnm()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	or.      r31, r3, r3
	beq      lbl_8006A488
	extsh.   r0, r4
	ble      lbl_8006A488
	bl       __dl__FPv

lbl_8006A488:
	lwz      r0, 0x14(r1)
	mr       r3, r31
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8006A4A0
 * Size:	00003C
 */
J3DTexMtxAnm::~J3DTexMtxAnm()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	or.      r31, r3, r3
	beq      lbl_8006A4C4
	extsh.   r0, r4
	ble      lbl_8006A4C4
	bl       __dl__FPv

lbl_8006A4C4:
	lwz      r0, 0x14(r1)
	mr       r3, r31
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8006A4DC
 * Size:	000048
 */
J3DTexNoAnm::~J3DTexNoAnm()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	or.      r31, r3, r3
	beq      lbl_8006A50C
	lis      r5, __vt__11J3DTexNoAnm@ha
	extsh.   r0, r4
	addi     r0, r5, __vt__11J3DTexNoAnm@l
	stw      r0, 0(r31)
	ble      lbl_8006A50C
	bl       __dl__FPv

lbl_8006A50C:
	lwz      r0, 0x14(r1)
	mr       r3, r31
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8006A524
 * Size:	00003C
 */
J3DTevColorAnm::~J3DTevColorAnm()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	or.      r31, r3, r3
	beq      lbl_8006A548
	extsh.   r0, r4
	ble      lbl_8006A548
	bl       __dl__FPv

lbl_8006A548:
	lwz      r0, 0x14(r1)
	mr       r3, r31
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8006A560
 * Size:	00003C
 */
J3DTevKColorAnm::~J3DTevKColorAnm()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	or.      r31, r3, r3
	beq      lbl_8006A584
	extsh.   r0, r4
	ble      lbl_8006A584
	bl       __dl__FPv

lbl_8006A584:
	lwz      r0, 0x14(r1)
	mr       r3, r31
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}
