#include "types.h"

/*
    Generated from dpostproc

    .section .ctors, "wa"  # 0x80472F00 - 0x804732C0
    .4byte __sinit_mapMgrTraceMove_cpp

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global lbl_804BEF00
    lbl_804BEF00:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000

    .section .sdata, "wa"  # 0x80514680 - 0x80514D80
    .global mTraceMoveOptLevel__Q24Game6MapMgr
    mTraceMoveOptLevel__Q24Game6MapMgr:
        .4byte 0x01000000

    .section .sbss # 0x80514D80 - 0x80516360
    .global lbl_80515BB0
    lbl_80515BB0:
        .skip 0x4
    .global lbl_80515BB4
    lbl_80515BB4:
        .skip 0x4

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80519D60
    lbl_80519D60:
        .4byte 0x00000000
    .global lbl_80519D64
    lbl_80519D64:
        .float 0.5
    .global lbl_80519D68
    lbl_80519D68:
        .float 1.0
        .4byte 0x00000000
*/

namespace Game {

/*
 * --INFO--
 * Address:	8020508C
 * Size:	000114
 */
void ShapeMapMgr::traceMove(Game::MoveInfo&, float)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stfd     f31, 0x20(r1)
	psq_st   f31, 40(r1), 0, qr0
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	stw      r28, 0x10(r1)
	lwz      r5, 0x14(r3)
	fmr      f31, f1
	lfs      f2, lbl_80519D60@sda21(r2)
	mr       r29, r4
	addi     r0, r5, 1
	mr       r28, r3
	stw      r0, 0x14(r3)
	li       r31, 1
	lwz      r5, 4(r4)
	lwz      r4, 0(r4)
	lfs      f3, 0(r5)
	lfs      f1, 4(r5)
	fmuls    f0, f3, f3
	lfs      f4, 8(r5)
	fmuls    f1, f1, f1
	lfs      f5, 0xc(r4)
	fmuls    f4, f4, f4
	fadds    f0, f0, f1
	fadds    f0, f4, f0
	fcmpo    cr0, f0, f2
	ble      lbl_80205120
	fmadds   f0, f3, f3, f1
	fadds    f3, f4, f0
	fcmpo    cr0, f3, f2
	ble      lbl_80205124
	frsqrte  f0, f3
	fmuls    f3, f0, f3
	b        lbl_80205124

lbl_80205120:
	fmr      f3, f2

lbl_80205124:
	lfs      f0, lbl_80519D64@sda21(r2)

lbl_80205128:
	fmuls    f1, f31, f3
	fcmpo    cr0, f1, f5
	ble      lbl_80205144
	slwi     r31, r31, 1
	fmuls    f31, f31, f0
	cmpwi    r31, 8
	ble      lbl_80205128

lbl_80205144:
	li       r30, 0
	b        lbl_80205164

lbl_8020514C:
	fmr      f1, f31
	mr       r3, r28
	mr       r5, r29
	addi     r4, r28, 0x38
	bl       traceMove__Q24Game6MapMgrFR12MapCollisionRQ24Game8MoveInfof
	addi     r30, r30, 1

lbl_80205164:
	cmpw     r30, r31
	blt      lbl_8020514C
	lwz      r0, 0x18(r28)
	add      r0, r0, r31
	stw      r0, 0x18(r28)
	psq_l    f31, 40(r1), 0, qr0
	lwz      r0, 0x34(r1)
	lfd      f31, 0x20(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r28, 0x10(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	802051A0
 * Size:	000020
 */
void MapMgr::traceMove(MapCollision&, Game::MoveInfo&, float)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	bl
	traceMove_test1203_cylinder__Q24Game6MapMgrFR12MapCollisionRQ24Game8MoveInfof
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00030C
 */
void MapMgr::traceMove_test1030_1(MapCollision&, Game::MoveInfo&, float)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	802051C0
 * Size:	0003BC
 */
void MapMgr::traceMove_test1203_cylinder(MapCollision&, Game::MoveInfo&, float)
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
	stmw     r19, 0x6c(r1)
	mr       r19, r4
	lbz      r0, traceMoveDebug__Q24Game6MapMgr@sda21(r13)
	lwz      r4, 0x18(r4)
	mr       r31, r5
	fmr      f28, f1
	cmplwi   r0, 0
	lwz      r26, 0(r5)
	mr       r30, r3
	lwz      r25, 4(r5)
	lwz      r24, 0x18(r4)
	beq      lbl_80205230
	lwz      r12, 4(r3)
	mr       r4, r26
	lwz      r12, 0x28(r12)
	mtctr    r12
	bctrl

lbl_80205230:
	lfs      f0, 0(r25)
	mr       r4, r26
	lfs      f1, 4(r25)
	fmuls    f0, f0, f28
	lfs      f29, 0(r26)
	lfs      f2, 8(r25)
	fmuls    f1, f1, f28
	lfs      f30, 4(r26)
	fadds    f0, f29, f0
	lfs      f31, 8(r26)
	fmuls    f2, f2, f28
	fadds    f1, f30, f1
	stfs     f0, 0(r26)
	fadds    f0, f31, f2
	stfs     f1, 4(r26)
	stfs     f0, 8(r26)
	lwz      r3, 0x18(r19)
	lwz      r12, 0(r3)
	lwz      r19, 0x1c(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	addi     r27, r1, 0x4c
	addi     r20, r1, 0x5c
	mr       r23, r3
	b        lbl_8020553C

lbl_80205298:
	lwz      r3, 0x1c(r30)
	li       r22, 0
	lwz      r0, 0x1c(r23)
	li       r28, 0
	add      r0, r3, r0
	stw      r0, 0x1c(r30)
	b        lbl_8020552C

lbl_802052B4:
	lwz      r3, 0x24(r23)
	lbz      r0, mTraceMoveOptLevel__Q24Game6MapMgr@sda21(r13)
	lwzx     r21, r3, r28
	cmplwi   r0, 1
	lwz      r3, 0x24(r19)
	mulli    r0, r21, 0x60
	add      r29, r3, r0
	blt      lbl_802052F8
	mr       r3, r29
	mr       r4, r26
	bl       fastIntersect__Q23Sys8TriangleFRQ23Sys6Sphere
	clrlwi.  r0, r3, 0x18
	bne      lbl_802052F8
	lwz      r3, 0x20(r30)
	addi     r0, r3, 1
	stw      r0, 0x20(r30)
	b        lbl_80205524

lbl_802052F8:
	lbz      r0, traceMoveDebug__Q24Game6MapMgr@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_8020530C
	li       r0, 1
	stb      r0, debug__Q23Sys8Triangle@sda21(r13)

lbl_8020530C:
	li       r0, 0
	stfs     f29, 0x2c(r1)
	stb      r0, 0x48(r1)
	stfs     f30, 0x30(r1)
	stfs     f31, 0x34(r1)
	lfs      f0, 0(r26)
	stfs     f0, 0x38(r1)
	lfs      f0, 4(r26)
	stfs     f0, 0x3c(r1)
	lfs      f0, 8(r26)
	stfs     f0, 0x40(r1)
	lfs      f0, 0xc(r26)
	stfs     f0, 0x44(r1)
	lbz      r0, 0x19(r31)
	cmplwi   r0, 0
	beq      lbl_80205354
	li       r0, 1
	stb      r0, 0x48(r1)

lbl_80205354:
	lbz      r0, 0x1a(r31)
	cmplwi   r0, 0
	beq      lbl_802053C4
	lfs      f1, 0x28(r31)
	mr       r4, r26
	lfs      f2, 0xc(r26)
	addi     r3, r1, 0xc
	addi     r5, r31, 0x1c
	bl       "__ct__Q23Sys8CylinderFRC10Vector3<f>RC10Vector3<f>f"
	mr       r4, r29
	addi     r3, r1, 0xc
	addi     r5, r1, 8
	bl       intersect__Q23Sys8CylinderFRCQ23Sys8TriangleRf
	lfs      f1, 0xc(r29)
	lfs      f0, 8(r1)
	stfs     f1, 0(r27)
	lfs      f1, 0x10(r29)
	stfs     f1, 0x50(r1)
	lfs      f1, 0x14(r29)
	stfs     f1, 0x54(r1)
	stfs     f0, 0x58(r1)
	lfs      f0, 0(r26)
	stfs     f0, 0(r20)
	lfs      f0, 4(r26)
	stfs     f0, 0x60(r1)
	lfs      f0, 8(r26)
	stfs     f0, 0x64(r1)
	b        lbl_802053D4

lbl_802053C4:
	mr       r3, r29
	mr       r4, r24
	addi     r5, r1, 0x2c
	bl
intersect__Q23Sys8TriangleFRQ23Sys11VertexTableRQ33Sys8Triangle11SphereSweep

lbl_802053D4:
	clrlwi.  r0, r3, 0x18
	beq      lbl_8020551C
	lwz      r3, 0x94(r31)
	cmplwi   r3, 0
	beq      lbl_802053F8
	mr       r4, r29
	mr       r5, r24
	mr       r6, r21
	bl store__Q24Game18TDispTriangleArrayFRQ23Sys8TriangleRQ23Sys11VertexTablei

lbl_802053F8:
	lwz      r3, 0x10(r31)
	cmplwi   r3, 0
	beq      lbl_8020541C
	lwz      r12, 0(r3)
	mr       r4, r20
	mr       r5, r27
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl

lbl_8020541C:
	lfs      f1, 0x50(r1)
	lfs      f0, 0x30(r31)
	fcmpo    cr0, f1, f0
	cror     2, 1, 2
	bne      lbl_80205450
	stw      r29, 0x44(r31)
	lfs      f0, 0(r27)
	stfs     f0, 0x50(r31)
	lfs      f0, 0x50(r1)
	stfs     f0, 0x54(r31)
	lfs      f0, 0x54(r1)
	stfs     f0, 0x58(r31)
	b        lbl_80205484

lbl_80205450:
	fabs     f1, f1
	lfs      f0, 0x2c(r31)
	frsp     f1, f1
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_80205484
	stw      r29, 0x48(r31)
	lfs      f0, 0(r27)
	stfs     f0, 0x5c(r31)
	lfs      f0, 0x50(r1)
	stfs     f0, 0x60(r31)
	lfs      f0, 0x54(r1)
	stfs     f0, 0x64(r31)

lbl_80205484:
	lfs      f4, 0x50(r1)
	lfs      f7, 4(r25)
	lfs      f5, 0(r27)
	fmuls    f0, f4, f7
	lfs      f8, 0(r25)
	lfs      f3, 0x54(r1)
	lfs      f6, 8(r25)
	fmadds   f2, f5, f8, f0
	lfs      f1, lbl_80519D68@sda21(r2)
	lfs      f0, 8(r31)
	fmadds   f2, f3, f6, f2
	fadds    f0, f1, f0
	fmuls    f2, f0, f2
	fmuls    f1, f5, f2
	fmuls    f0, f4, f2
	fmuls    f3, f3, f2
	fsubs    f2, f8, f1
	fsubs    f1, f7, f0
	fsubs    f0, f6, f3
	stfs     f2, 0(r25)
	stfs     f1, 4(r25)
	stfs     f0, 8(r25)
	lfs      f5, 0x58(r1)
	lfs      f0, 0(r27)
	lfs      f2, 0x50(r1)
	lfs      f4, 0x54(r1)
	fmuls    f0, f0, f5
	lfs      f1, 0(r26)
	fmuls    f2, f2, f5
	lfs      f3, 4(r26)
	fmuls    f4, f4, f5
	lfs      f5, 8(r26)
	fadds    f0, f1, f0
	fadds    f1, f3, f2
	fadds    f2, f5, f4
	stfs     f0, 0(r26)
	stfs     f1, 4(r26)
	stfs     f2, 8(r26)

lbl_8020551C:
	li       r0, 0
	stb      r0, debug__Q23Sys8Triangle@sda21(r13)

lbl_80205524:
	addi     r28, r28, 4
	addi     r22, r22, 1

lbl_8020552C:
	lwz      r0, 0x1c(r23)
	cmpw     r22, r0
	blt      lbl_802052B4
	lwz      r23, 4(r23)

lbl_8020553C:
	cmplwi   r23, 0
	bne      lbl_80205298
	mr       r3, r23
	psq_l    f31, 216(r1), 0, qr0
	lfd      f31, 0xd0(r1)
	psq_l    f30, 200(r1), 0, qr0
	lfd      f30, 0xc0(r1)
	psq_l    f29, 184(r1), 0, qr0
	lfd      f29, 0xb0(r1)
	psq_l    f28, 168(r1), 0, qr0
	lfd      f28, 0xa0(r1)
	lmw      r19, 0x6c(r1)
	lwz      r0, 0xe4(r1)
	mtlr     r0
	addi     r1, r1, 0xe0
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000464
 */
void MapMgr::traceMove_test(MapCollision&, Game::MoveInfo&, float)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000464
 */
void MapMgr::traceMove_original(MapCollision&, Game::MoveInfo&, float)
{
	// UNUSED FUNCTION
}

} // namespace Game

/*
 * --INFO--
 * Address:	8020557C
 * Size:	000028
 */
void __sinit_mapMgrTraceMove_cpp(void)
{
	/*
	lis      r4, __float_nan@ha
	li       r0, -1
	lfs      f0, __float_nan@l(r4)
	lis      r3, lbl_804BEF00@ha
	stw      r0, lbl_80515BB0@sda21(r13)
	stfsu    f0, lbl_804BEF00@l(r3)
	stfs     f0, lbl_80515BB4@sda21(r13)
	stfs     f0, 4(r3)
	stfs     f0, 8(r3)
	blr
	*/
}
