#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global "cJointModRatio__Q24Game27@unnamed@SnakeJointMgr_cpp@"
    "cJointModRatio__Q24Game27@unnamed@SnakeJointMgr_cpp@":
        .float 0.0
        .float 0.2
        .float 0.4
        .float 0.6
        .float 0.8
        .float 1.0
    .global lbl_8048BCD8
    lbl_8048BCD8:
        .asciz "bodyjnt3"
        .skip 3
    .global lbl_8048BCE4
    lbl_8048BCE4:
        .asciz "bodyjnt4"
        .skip 3
    .global lbl_8048BCF0
    lbl_8048BCF0:
        .asciz "bodyjnt5"
        .skip 3
    .global lbl_8048BCFC
    lbl_8048BCFC:
        .asciz "bodyjnt6"
        .skip 3
    .global lbl_8048BD08
    lbl_8048BD08:
        .asciz "bodyjnt7"
        .skip 3
    .global lbl_8048BD14
    lbl_8048BD14:
        .asciz "bodyjnt8"
        .skip 3
    .global lbl_8048BD20
    lbl_8048BD20:
        .4byte lbl_8048BCD8
        .4byte lbl_8048BCE4
        .4byte lbl_8048BCF0
        .4byte lbl_8048BCFC
        .4byte lbl_8048BD08
        .4byte lbl_8048BD14

    .section .sbss # 0x80514D80 - 0x80516360
    .global sSnakeJointMgr__4Game
    sSnakeJointMgr__4Game:
        .skip 0x8

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051C8D8
    lbl_8051C8D8:
        .4byte 0x00000000
    .global lbl_8051C8DC
    lbl_8051C8DC:
        .float 1.0
    .global lbl_8051C8E0
    lbl_8051C8E0:
        .4byte 0x41F00000
        .4byte 0x00000000
*/

namespace Game {

/*
 * --INFO--
 * Address:	802D1634
 * Size:	000038
 */
void SnakeJointCallBack(J3DJoint*, int)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	cmpwi    r4, 0
	stw      r0, 0x14(r1)
	bne      lbl_802D1658
	lwz      r3, sSnakeJointMgr__4Game@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_802D1658
	bl       makeMatrix__Q24Game13SnakeJointMgrFv

lbl_802D1658:
	lwz      r0, 0x14(r1)
	li       r3, 0
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802D166C
 * Size:	00003C
 */
SnakeJointMgr::SnakeJointMgr(Game::EnemyBase*)
{
	/*
	li       r0, 0
	lfs      f0, lbl_8051C8D8@sda21(r2)
	stw      r0, sSnakeJointMgr__4Game@sda21(r13)
	stw      r4, 0(r3)
	stw      r0, 4(r3)
	stw      r0, 8(r3)
	stw      r0, 0xc(r3)
	stw      r0, 0x10(r3)
	stw      r0, 0x14(r3)
	stw      r0, 0x18(r3)
	stw      r0, 0x1c(r3)
	stfs     f0, 0x20(r3)
	stfs     f0, 0x28(r3)
	stfs     f0, 0x24(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	802D16A8
 * Size:	0000B8
 */
void SnakeJointMgr::setupCallBackJoint()
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	lis      r4, lbl_8048BD20@ha
	stw      r0, 0x44(r1)
	addi     r10, r4, lbl_8048BD20@l
	lis      r4, SnakeJointCallBack__4GameFP8J3DJointi@ha
	stmw     r26, 0x28(r1)
	mr       r27, r3
	addi     r28, r1, 8
	addi     r31, r4, SnakeJointCallBack__4GameFP8J3DJointi@l
	li       r26, 0
	lwz      r5, 0(r3)
	lwz      r9, 0(r10)
	lwz      r8, 4(r10)
	lwz      r7, 8(r10)
	lwz      r6, 0xc(r10)
	lwz      r3, 0x10(r10)
	lwz      r0, 0x14(r10)
	stw      r9, 8(r1)
	lwz      r29, 0x174(r5)
	stw      r8, 0xc(r1)
	stw      r7, 0x10(r1)
	stw      r6, 0x14(r1)
	stw      r3, 0x18(r1)
	stw      r0, 0x1c(r1)

lbl_802D170C:
	lwz      r4, 0(r28)
	mr       r3, r29
	bl       getJoint__Q28SysShape5ModelFPc
	or.      r30, r3, r3
	beq      lbl_802D1738
	bl       getWorldMatrix__Q28SysShape5JointFv
	cmpwi    r26, 5
	stw      r3, 4(r27)
	bne      lbl_802D1738
	lwz      r3, 0x18(r30)
	stw      r31, 4(r3)

lbl_802D1738:
	addi     r26, r26, 1
	addi     r27, r27, 4
	cmpwi    r26, 6
	addi     r28, r28, 4
	blt      lbl_802D170C
	lmw      r26, 0x28(r1)
	lwz      r0, 0x44(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	802D1760
 * Size:	000020
 */
void SnakeJointMgr::startModify(float, float)
{
	/*
	li       r0, 1
	lfs      f0, lbl_8051C8D8@sda21(r2)
	stw      r0, 0x1c(r3)
	stfs     f1, 0x20(r3)
	stfs     f2, 0x28(r3)
	stfs     f2, 0x24(r3)
	stfs     f0, 0x2c(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	802D1780
 * Size:	00001C
 */
void SnakeJointMgr::returnModify(float)
{
	/*
	li       r0, 2
	lfs      f0, lbl_8051C8DC@sda21(r2)
	stw      r0, 0x1c(r3)
	stfs     f1, 0x28(r3)
	stfs     f1, 0x24(r3)
	stfs     f0, 0x2c(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	802D179C
 * Size:	00000C
 */
void SnakeJointMgr::finishModify()
{
	// Generated from stw r0, 0x1C(r3)
	_1C = 0;
}

/*
 * --INFO--
 * Address:	802D17A8
 * Size:	000080
 */
void SnakeJointMgr::doAnimation()
{
	/*
	stw      r3, sSnakeJointMgr__4Game@sda21(r13)
	lwz      r0, 0x1c(r3)
	cmpwi    r0, 0
	beqlr
	lwz      r4, sys@sda21(r13)
	lfs      f3, lbl_8051C8E0@sda21(r2)
	lfs      f2, 0x54(r4)
	lfs      f1, 0x28(r3)
	lfs      f0, lbl_8051C8D8@sda21(r2)
	fnmsubs  f1, f3, f2, f1
	stfs     f1, 0x28(r3)
	lfs      f1, 0x28(r3)
	fcmpo    cr0, f1, f0
	bge      lbl_802D17E4
	stfs     f0, 0x28(r3)

lbl_802D17E4:
	lwz      r0, 0x1c(r3)
	cmpwi    r0, 1
	bne      lbl_802D180C
	lfs      f1, 0x28(r3)
	lfs      f0, 0x24(r3)
	lfs      f2, lbl_8051C8DC@sda21(r2)
	fdivs    f0, f1, f0
	fsubs    f0, f2, f0
	stfs     f0, 0x2c(r3)
	blr

lbl_802D180C:
	cmpwi    r0, 2
	bnelr
	lfs      f1, 0x28(r3)
	lfs      f0, 0x24(r3)
	fdivs    f0, f1, f0
	stfs     f0, 0x2c(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	802D1828
 * Size:	00000C
 */
void SnakeJointMgr::finishAnimation()
{
	/*
	li       r0, 0
	stw      r0, sSnakeJointMgr__4Game@sda21(r13)
	blr
	*/
}

/*
 * --INFO--
 * Address:	802D1834
 * Size:	0002AC
 */
void SnakeJointMgr::makeMatrix()
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stfd     f31, 0x20(r1)
	psq_st   f31, 40(r1), 0, qr0
	lwz      r0, 0x1c(r3)
	cmpwi    r0, 0
	beq      lbl_802D1AC8
	lis      r4, "cJointModRatio__Q24Game27@unnamed@SnakeJointMgr_cpp@"@ha
	addi     r8, r1, 8
	li       r0, 6
	mr       r5, r3
	addi     r7, r4, "cJointModRatio__Q24Game27@unnamed@SnakeJointMgr_cpp@"@l
	mr       r6, r8
	li       r9, 0
	mtctr    r0

lbl_802D1874:
	lwz      r4, 4(r5)
	cmpwi    r9, 5
	lfs      f4, 0xc(r4)
	lfs      f5, 0x1c(r4)
	lfs      f6, 0x2c(r4)
	bge      lbl_802D18DC
	lwz      r4, 8(r5)
	lfs      f0, lbl_8051C8D8@sda21(r2)
	lfs      f1, 0x1c(r4)
	lfs      f2, 0xc(r4)
	fsubs    f3, f5, f1
	lfs      f1, 0x2c(r4)
	fsubs    f2, f4, f2
	fsubs    f1, f6, f1
	fmuls    f3, f3, f3
	fmuls    f7, f1, f1
	fmadds   f1, f2, f2, f3
	fadds    f1, f7, f1
	fcmpo    cr0, f1, f0
	ble      lbl_802D18D4
	ble      lbl_802D18D8
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_802D18D8

lbl_802D18D4:
	fmr      f1, f0

lbl_802D18D8:
	stfs     f1, 0(r6)

lbl_802D18DC:
	lfs      f0, 0(r7)
	addi     r6, r6, 4
	lfs      f1, 0x20(r3)
	addi     r7, r7, 4
	lfs      f2, 0x2c(r3)
	addi     r9, r9, 1
	fmuls    f0, f1, f0
	lwzu     r4, 4(r5)
	stfs     f4, 0xc(r4)
	fmadds   f5, f2, f0, f5
	stfs     f5, 0x1c(r4)
	stfs     f6, 0x2c(r4)
	bdnz     lbl_802D1874
	lfs      f12, lbl_8051C8D8@sda21(r2)
	li       r0, 5
	mr       r5, r3
	fmr      f11, f12
	fmr      f10, f12
	mtctr    r0

lbl_802D1928:
	lwz      r6, 4(r5)
	lwz      r4, 8(r5)
	lfs      f0, 0xc(r6)
	lfs      f3, 0xc(r4)
	lfs      f2, 0x1c(r4)
	lfs      f1, 0x1c(r6)
	fsubs    f0, f3, f0
	lfs      f7, 0x18(r6)
	fsubs    f1, f2, f1
	lfs      f8, 0x28(r6)
	lfs      f3, 0x2c(r4)
	fmuls    f4, f7, f0
	lfs      f2, 0x2c(r6)
	lfs      f5, 8(r6)
	fsubs    f2, f3, f2
	fmuls    f3, f8, f1
	fmuls    f13, f1, f1
	fmuls    f6, f5, f2
	fmsubs   f3, f7, f2, f3
	fmsubs   f5, f5, f1, f4
	fmsubs   f4, f8, f0, f6
	fmuls    f9, f1, f3
	fmuls    f7, f0, f5
	fmuls    f6, f2, f4
	fmuls    f31, f2, f2
	fmadds   f8, f0, f0, f13
	fmsubs   f6, f1, f5, f6
	fmsubs   f7, f2, f3, f7
	fadds    f13, f31, f8
	fmsubs   f8, f0, f4, f9
	fcmpo    cr0, f13, f12
	ble      lbl_802D19B8
	ble      lbl_802D19BC
	frsqrte  f9, f13
	fmuls    f13, f9, f13
	b        lbl_802D19BC

lbl_802D19B8:
	fmr      f13, f12

lbl_802D19BC:
	fcmpo    cr0, f13, f12
	ble      lbl_802D19DC
	lfs      f9, lbl_8051C8DC@sda21(r2)
	fdivs    f9, f9, f13
	fmuls    f0, f0, f9
	fmuls    f1, f1, f9
	fmuls    f2, f2, f9
	b        lbl_802D19E0

lbl_802D19DC:
	fmr      f13, f12

lbl_802D19E0:
	fmuls    f9, f4, f4
	fmuls    f31, f5, f5
	fmadds   f9, f3, f3, f9
	fadds    f31, f31, f9
	fcmpo    cr0, f31, f11
	ble      lbl_802D1A08
	ble      lbl_802D1A0C
	frsqrte  f9, f31
	fmuls    f31, f9, f31
	b        lbl_802D1A0C

lbl_802D1A08:
	fmr      f31, f11

lbl_802D1A0C:
	fcmpo    cr0, f31, f12
	ble      lbl_802D1A28
	lfs      f9, lbl_8051C8DC@sda21(r2)
	fdivs    f9, f9, f31
	fmuls    f3, f3, f9
	fmuls    f4, f4, f9
	fmuls    f5, f5, f9

lbl_802D1A28:
	fmuls    f9, f7, f7
	fmuls    f31, f8, f8
	fmadds   f9, f6, f6, f9
	fadds    f31, f31, f9
	fcmpo    cr0, f31, f10
	ble      lbl_802D1A50
	ble      lbl_802D1A54
	frsqrte  f9, f31
	fmuls    f31, f9, f31
	b        lbl_802D1A54

lbl_802D1A50:
	fmr      f31, f10

lbl_802D1A54:
	fcmpo    cr0, f31, f12
	ble      lbl_802D1A70
	lfs      f9, lbl_8051C8DC@sda21(r2)
	fdivs    f9, f9, f31
	fmuls    f6, f6, f9
	fmuls    f7, f7, f9
	fmuls    f8, f8, f9

lbl_802D1A70:
	lfs      f9, 0(r8)
	addi     r8, r8, 4
	fdivs    f9, f13, f9
	fmuls    f0, f0, f9
	fmuls    f1, f1, f9
	fmuls    f2, f2, f9
	stfs     f0, 0(r6)
	stfs     f1, 0x10(r6)
	stfs     f2, 0x20(r6)
	lwz      r4, 4(r5)
	stfs     f3, 4(r4)
	stfs     f4, 0x14(r4)
	stfs     f5, 0x24(r4)
	lwzu     r4, 4(r5)
	stfs     f6, 8(r4)
	stfs     f7, 0x18(r4)
	stfs     f8, 0x28(r4)
	bdnz     lbl_802D1928
	lis      r4, mCurrentMtx__6J3DSys@ha
	lwz      r3, 0x18(r3)
	addi     r4, r4, mCurrentMtx__6J3DSys@l
	bl       PSMTXCopy

lbl_802D1AC8:
	psq_l    f31, 40(r1), 0, qr0
	lwz      r0, 0x34(r1)
	lfd      f31, 0x20(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}
} // namespace Game
