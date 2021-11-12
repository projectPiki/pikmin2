#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_8047BF30
    lbl_8047BF30:
        .4byte 0x77616C6B
        .4byte 0x536D6F6B
        .4byte 0x65000000
        .4byte 0x77616C6B
        .4byte 0x536D6F6B
        .4byte 0x65456666
        .4byte 0x6563742E
        .4byte 0x63707000
        .4byte 0x616C6C6F
        .4byte 0x63206572
        .4byte 0x726F720A
        .4byte 0x00000000
        .4byte 0x7365636F
        .4byte 0x6E642061
        .4byte 0x6C6C6F63
        .4byte 0x00000000
        .4byte 0x41726745
        .4byte 0x6E656D79
        .4byte 0x54797065
        .4byte 0x00000000

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80518048
    lbl_80518048:
        .4byte 0x00000000
        .4byte 0x00000000
*/

namespace Game {

/*
 * --INFO--
 * Address:	8012A320
 * Size:	000034
 */
WalkSmokeEffect::Obj::Obj()
{
	/*
	li       r0, 0
	lfs      f0, lbl_80518048@sda21(r2)
	stb      r0, 0(r3)
	lis      r4, "zero__10Vector3<f>"@ha
	stw      r0, 4(r3)
	stfs     f0, 8(r3)
	lfsu     f0, "zero__10Vector3<f>"@l(r4)
	stfs     f0, 0xc(r3)
	lfs      f0, 4(r4)
	stfs     f0, 0x10(r3)
	lfs      f0, 8(r4)
	stfs     f0, 0x14(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8012A354
 * Size:	000010
 */
WalkSmokeEffect::Mgr::Mgr()
{
	/*
	li       r0, 0
	stw      r0, 0(r3)
	stw      r0, 4(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8012A364
 * Size:	0000B4
 */
void WalkSmokeEffect::Mgr::alloc(int)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r3
	lis      r3, lbl_8047BF30@ha
	lwz      r0, 4(r29)
	addi     r31, r3, lbl_8047BF30@l
	cmplwi   r0, 0
	bne      lbl_8012A3E8
	stw      r4, 0(r29)
	lwz      r30, 0(r29)
	mulli    r3, r30, 0x18
	addi     r3, r3, 0x10
	bl       __nwa__FUl
	lis      r4, __ct__Q34Game15WalkSmokeEffect3ObjFv@ha
	mr       r7, r30
	addi     r4, r4, __ct__Q34Game15WalkSmokeEffect3ObjFv@l
	li       r5, 0
	li       r6, 0x18
	bl       __construct_new_array
	stw      r3, 4(r29)
	lwz      r0, 4(r29)
	cmplwi   r0, 0
	bne      lbl_8012A3FC
	addi     r3, r31, 0xc
	addi     r5, r31, 0x20
	li       r4, 0xa8
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce
	b        lbl_8012A3FC

lbl_8012A3E8:
	addi     r3, r31, 0xc
	addi     r5, r31, 0x30
	li       r4, 0xad
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8012A3FC:
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
 * Address:	8012A418
 * Size:	0001C8
 */
void WalkSmokeEffect::Mgr::update(Game::EnemyBase*)
{
	/*
	stwu     r1, -0x70(r1)
	mflr     r0
	stw      r0, 0x74(r1)
	stfd     f31, 0x60(r1)
	psq_st   f31, 104(r1), 0, qr0
	stmw     r27, 0x4c(r1)
	mr       r27, r3
	mr       r28, r4
	li       r29, 0
	li       r30, 0
	b        lbl_8012A5B8

lbl_8012A444:
	lwz      r0, 4(r27)
	add      r31, r0, r30
	lwz      r3, 4(r31)
	lfs      f0, 0xc(r3)
	stfs     f0, 0xc(r1)
	lfs      f1, 0x1c(r3)
	stfs     f1, 0x10(r1)
	lfs      f0, 0x2c(r3)
	stfs     f0, 0x14(r1)
	lfs      f0, 8(r31)
	fsubs    f2, f1, f0
	stfs     f2, 0x10(r1)
	lbz      r0, 0(r31)
	cmplwi   r0, 0
	bne      lbl_8012A56C
	lfs      f1, 0x10(r31)
	lfs      f0, lbl_80518048@sda21(r2)
	fsubs    f1, f2, f1
	fcmpo    cr0, f1, f0
	bge      lbl_8012A598
	lwz      r3, mapMgr__4Game@sda21(r13)
	addi     r4, r1, 0xc
	lwz      r12, 4(r3)
	lwz      r12, 0x28(r12)
	mtctr    r12
	bctrl
	lfs      f0, 0x10(r1)
	fcmpo    cr0, f0, f1
	bge      lbl_8012A598
	mr       r3, r28
	lwz      r12, 0(r28)
	lwz      r12, 0x8c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8012A560
	mr       r3, r28
	lfs      f31, 0x1f8(r28)
	lwz      r12, 0(r28)
	lwz      r12, 0x258(r12)
	mtctr    r12
	bctrl
	lwz      r6, 0xc(r1)
	lis      r5, __vt__Q23efx3Arg@ha
	lwz      r0, 0x10(r1)
	lis      r4, __vt__Q23efx5TBase@ha
	lwz      r8, 0x14(r1)
	addi     r7, r5, __vt__Q23efx3Arg@l
	stw      r6, 0x18(r1)
	addi     r5, r4, __vt__Q23efx5TBase@l
	lis      r6, __vt__Q23efx12ArgEnemyType@ha
	lis      r4, __vt__Q23efx15TEnemyWalkSmoke@ha
	stw      r0, 0x1c(r1)
	addi     r6, r6, __vt__Q23efx12ArgEnemyType@l
	lfs      f2, 0x18(r1)
	addi     r0, r4, __vt__Q23efx15TEnemyWalkSmoke@l
	stw      r8, 0x20(r1)
	addi     r4, r1, 0x24
	lfs      f1, 0x1c(r1)
	stw      r7, 0x24(r1)
	lfs      f0, 0x20(r1)
	stw      r5, 8(r1)
	stw      r3, 0x34(r1)
	addi     r3, r1, 8
	stfs     f2, 0x28(r1)
	stfs     f1, 0x2c(r1)
	stfs     f0, 0x30(r1)
	stw      r6, 0x24(r1)
	stfs     f31, 0x38(r1)
	stw      r0, 8(r1)
	bl       create__Q23efx15TEnemyWalkSmokeFPQ23efx3Arg

lbl_8012A560:
	li       r0, 1
	stb      r0, 0(r31)
	b        lbl_8012A598

lbl_8012A56C:
	lwz      r3, mapMgr__4Game@sda21(r13)
	addi     r4, r1, 0xc
	lwz      r12, 4(r3)
	lwz      r12, 0x28(r12)
	mtctr    r12
	bctrl
	lfs      f0, 0x10(r1)
	fcmpo    cr0, f0, f1
	ble      lbl_8012A598
	li       r0, 0
	stb      r0, 0(r31)

lbl_8012A598:
	lfs      f0, 0xc(r1)
	addi     r30, r30, 0x18
	addi     r29, r29, 1
	stfs     f0, 0xc(r31)
	lfs      f0, 0x10(r1)
	stfs     f0, 0x10(r31)
	lfs      f0, 0x14(r1)
	stfs     f0, 0x14(r31)

lbl_8012A5B8:
	lwz      r0, 0(r27)
	cmpw     r29, r0
	blt      lbl_8012A444
	psq_l    f31, 104(r1), 0, qr0
	lfd      f31, 0x60(r1)
	lmw      r27, 0x4c(r1)
	lwz      r0, 0x74(r1)
	mtlr     r0
	addi     r1, r1, 0x70
	blr
	*/
}

/*
 * --INFO--
 * Address:	8012A5E0
 * Size:	000090
 */
void WalkSmokeEffect::Mgr::setup(int, SysShape::Model*, char*, float)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stfd     f31, 0x10(r1)
	psq_st   f31, 24(r1), 0, qr0
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	fmr      f31, f1
	mr       r30, r3
	mr       r31, r4
	mr       r3, r5
	mr       r4, r6
	bl       getJoint__Q28SysShape5ModelFPc
	bl       getWorldMatrix__Q28SysShape5JointFv
	mulli    r4, r31, 0x18
	lwz      r5, 4(r30)
	li       r0, 1
	add      r4, r5, r4
	stw      r3, 4(r4)
	stfs     f31, 8(r4)
	lwz      r3, 4(r4)
	lfs      f0, 0xc(r3)
	stfs     f0, 0xc(r4)
	lfs      f0, 0x1c(r3)
	stfs     f0, 0x10(r4)
	lfs      f0, 0x2c(r3)
	stfs     f0, 0x14(r4)
	stb      r0, 0(r4)
	psq_l    f31, 24(r1), 0, qr0
	lwz      r0, 0x24(r1)
	lfd      f31, 0x10(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}
} // namespace Game
