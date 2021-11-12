#include "types.h"

/*
    Generated from dpostproc

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__13J2DPerspGraph
    __vt__13J2DPerspGraph:
        .4byte 0
        .4byte 0
        .4byte __dt__13J2DPerspGraphFv
        .4byte "place__14J2DGrafContextFRCQ29JGeometry8TBox2<f>"
        .4byte place__14J2DGrafContextFffff
        .4byte setPort__13J2DPerspGraphFv
        .4byte setup2D__14J2DGrafContextFv
        .4byte setScissor__14J2DGrafContextFv
        .4byte getGrafType__13J2DPerspGraphCFv
        .4byte setLookat__13J2DPerspGraphFv

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80516788
    lbl_80516788:
        .4byte 0x00000000
    .global lbl_8051678C
    lbl_8051678C:
        .float 1.0
    .global lbl_80516790
    lbl_80516790:
        .4byte 0x43330000
    .global lbl_80516794
    lbl_80516794:
        .4byte 0x40490FDB
    .global lbl_80516798
    lbl_80516798:
        .4byte 0x43B40000
    .global lbl_8051679C
    lbl_8051679C:
        .float 0.5
    .global lbl_805167A0
    lbl_805167A0:
        .float -1.0
        .4byte 0x00000000
*/

/*
 * --INFO--
 * Address:	80035DC8
 * Size:	00004C
 */
J2DPerspGraph::J2DPerspGraph()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lfs      f1, lbl_80516788@sda21(r2)
	stw      r0, 0x14(r1)
	fmr      f2, f1
	stw      r31, 0xc(r1)
	fmr      f3, f1
	fmr      f4, f1
	mr       r31, r3
	bl       __ct__14J2DGrafContextFffff
	lis      r4, __vt__13J2DPerspGraph@ha
	mr       r3, r31
	addi     r0, r4, __vt__13J2DPerspGraph@l
	stw      r0, 0(r31)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80035E14
 * Size:	000060
 */
void J2DPerspGraph::set(float, float, float)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stfd     f31, 0x18(r1)
	fmr      f31, f3
	stfd     f30, 0x10(r1)
	fmr      f30, f2
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       setFovy__13J2DPerspGraphFf
	stfs     f30, 0xc0(r31)
	mr       r3, r31
	stfs     f31, 0xc4(r31)
	lwz      r12, 0(r31)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x24(r1)
	lfd      f31, 0x18(r1)
	lfd      f30, 0x10(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80035E74
 * Size:	00002C
 */
void J2DPerspGraph::setFovy(float)
{
	/*
	lfs      f0, lbl_8051678C@sda21(r2)
	stfs     f1, 0xbc(r3)
	fcmpo    cr0, f1, f0
	bge      lbl_80035E8C
	stfs     f0, 0xbc(r3)
	blr

lbl_80035E8C:
	lfs      f0, lbl_80516790@sda21(r2)
	fcmpo    cr0, f1, f0
	blelr
	stfs     f0, 0xbc(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80035EA0
 * Size:	000068
 */
void J2DPerspGraph::setPort()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       setPort__14J2DGrafContextFv
	lfs      f3, 0xc(r31)
	addi     r3, r31, 0x40
	lfs      f1, 4(r31)
	lfs      f2, 0x10(r31)
	lfs      f0, 8(r31)
	fsubs    f5, f3, f1
	lfs      f1, 0xbc(r31)
	fsubs    f0, f2, f0
	lfs      f3, 0xc0(r31)
	lfs      f4, 0xc4(r31)
	fdivs    f2, f5, f0
	bl       C_MTXPerspective
	addi     r3, r31, 0x40
	li       r4, 0
	bl       GXSetProjection
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80035F08
 * Size:	000068
 */
void J2DPerspGraph::setLookat()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lfs      f2, lbl_80516794@sda21(r2)
	stw      r0, 0x14(r1)
	lfs      f0, lbl_80516798@sda21(r2)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lfs      f1, 0xbc(r3)
	fmuls    f1, f2, f1
	fdivs    f1, f1, f0
	bl       tan
	lfs      f2, 0x10(r31)
	frsp     f3, f1
	lfs      f1, 8(r31)
	mr       r3, r31
	lfs      f0, lbl_8051679C@sda21(r2)
	fsubs    f1, f2, f1
	fmuls    f0, f1, f0
	fdivs    f0, f0, f3
	stfs     f0, 0xc8(r31)
	bl       makeLookat__13J2DPerspGraphFv
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80035F70
 * Size:	0000A0
 */
void J2DPerspGraph::makeLookat()
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	lfs      f3, lbl_8051679C@sda21(r2)
	stw      r0, 0x44(r1)
	addi     r4, r1, 0x20
	addi     r5, r1, 8
	addi     r6, r1, 0x14
	stw      r31, 0x3c(r1)
	mr       r31, r3
	lfs      f4, 0xc(r3)
	addi     r3, r31, 0x80
	lfs      f1, 4(r31)
	lfs      f2, 0x10(r31)
	fadds    f4, f4, f1
	lfs      f0, 8(r31)
	lfs      f1, lbl_80516788@sda21(r2)
	fadds    f2, f2, f0
	lfs      f0, lbl_805167A0@sda21(r2)
	fmuls    f4, f4, f3
	fmuls    f3, f2, f3
	stfs     f4, 0x20(r1)
	stfs     f3, 0x24(r1)
	lfs      f2, 0xc8(r31)
	fneg     f2, f2
	stfs     f4, 0x14(r1)
	stfs     f3, 0x18(r1)
	stfs     f2, 0x28(r1)
	stfs     f1, 0x1c(r1)
	stfs     f1, 8(r1)
	stfs     f0, 0xc(r1)
	stfs     f1, 0x10(r1)
	bl       C_MTXLookAt
	addi     r3, r31, 0x80
	li       r4, 0
	bl       GXLoadPosMtxImm
	lwz      r0, 0x44(r1)
	lwz      r31, 0x3c(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	80036010
 * Size:	00005C
 */
J2DPerspGraph::~J2DPerspGraph()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	or.      r31, r3, r3
	beq      lbl_80036054
	lis      r3, __vt__13J2DPerspGraph@ha
	addi     r0, r3, __vt__13J2DPerspGraph@l
	stw      r0, 0(r31)
	beq      lbl_80036044
	lis      r3, __vt__14J2DGrafContext@ha
	addi     r0, r3, __vt__14J2DGrafContext@l
	stw      r0, 0(r31)

lbl_80036044:
	extsh.   r0, r4
	ble      lbl_80036054
	mr       r3, r31
	bl       __dl__FPv

lbl_80036054:
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
 * Address:	8003606C
 * Size:	000008
 */
u32 J2DPerspGraph::getGrafType() const { return 0x2; }
