#include "types.h"

/*
    Generated from dpostproc

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__12MapCollision
    __vt__12MapCollision:
        .4byte 0
        .4byte 0
        .4byte __dt__12MapCollisionFv
        .4byte getChildCount__5CNodeFv
        .4byte getBoundBox__12MapCollisionFR8BoundBox
        .4byte getCurrTri__12MapCollisionFRQ24Game11CurrTriInfo
        .4byte createTriangles__12MapCollisionFRQ23Sys17CreateTriangleArg
        .4byte 0

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80520350
    lbl_80520350:
        .4byte 0x47000000
    .global lbl_80520354
    lbl_80520354:
        .4byte 0xC7000000
*/

/*
 * --INFO--
 * Address:	8041A030
 * Size:	000030
 */
void MapCollision::getCurrTri(Game::CurrTriInfo&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x18(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
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
 * Address:	8041A060
 * Size:	0000B4
 */
void MapCollision::read(Stream&)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r30, r4
	stw      r29, 0x14(r1)
	mr       r29, r3
	li       r3, 0x4c
	bl       __nw__FUl
	or.      r31, r3, r3
	beq      lbl_8041A0DC
	bl       __ct__5CNodeFv
	lis      r4, __vt__Q23Sys10TriDivider@ha
	lis      r3, __vt__Q23Sys11GridDivider@ha
	addi     r0, r4, __vt__Q23Sys10TriDivider@l
	lfs      f1, lbl_80520350@sda21(r2)
	stw      r0, 0(r31)
	addi     r3, r3, __vt__Q23Sys11GridDivider@l
	lfs      f0, lbl_80520354@sda21(r2)
	li       r0, 0
	stw      r3, 0(r31)
	stfs     f1, 0x2c(r31)
	stfs     f1, 0x30(r31)
	stfs     f1, 0x34(r31)
	stfs     f0, 0x38(r31)
	stfs     f0, 0x3c(r31)
	stfs     f0, 0x40(r31)
	stw      r0, 0x28(r31)
	stw      r0, 0x24(r31)
	stw      r0, 0x20(r31)

lbl_8041A0DC:
	stw      r31, 0x18(r29)
	mr       r4, r30
	lwz      r3, 0x18(r29)
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
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
 * Address:	8041A114
 * Size:	00007C
 */
void MapCollision::clone(Matrixf&)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r30, r4
	stw      r29, 0x14(r1)
	mr       r29, r3
	li       r3, 0x1c
	bl       __nw__FUl
	or.      r31, r3, r3
	beq      lbl_8041A154
	bl       __ct__5CNodeFv
	lis      r3, __vt__12MapCollision@ha
	addi     r0, r3, __vt__12MapCollision@l
	stw      r0, 0(r31)

lbl_8041A154:
	lwz      r3, 0x18(r29)
	mr       r4, r30
	lwz      r12, 0(r3)
	lwz      r12, 0x28(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x18(r31)
	mr       r3, r31
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}
