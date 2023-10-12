#include "Game/Entities/MiniHoudai.h"
#include "nans.h"

namespace Game {
namespace MiniHoudai {

static MiniHoudaiShotGunMgr* sMiniHoudaiShotGunMgr;

/*
 * --INFO--
 * Address:	802EDCA0
 * Size:	00003C
 */
static bool verticalRotationCallBack(J3DJoint* joint, int idx)
{
	if (idx == 0 && sMiniHoudaiShotGunMgr) {
		sMiniHoudaiShotGunMgr->rotateVertical(joint);
	}
	return false;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000054
 */
MiniHoudaiShotGunNode::MiniHoudaiShotGunNode(Obj* obj)
{
	_18    = 0;
	mOwner = obj;
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000E8
 */
void MiniHoudaiShotGunNode::create()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00001C
 */
void MiniHoudaiShotGunNode::setPosition(Vector3f&)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00001C
 */
void MiniHoudaiShotGunNode::setVelocity(Vector3f&)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000DC
 */
void MiniHoudaiShotGunNode::startShotGun(bool)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	802EDCDC
 * Size:	000D14
 */
bool MiniHoudaiShotGunNode::update()
{
	/*
	stwu     r1, -0x380(r1)
	mflr     r0
	stw      r0, 0x384(r1)
	stfd     f31, 0x370(r1)
	psq_st   f31, 888(r1), 0, qr0
	stfd     f30, 0x360(r1)
	psq_st   f30, 872(r1), 0, qr0
	stfd     f29, 0x350(r1)
	psq_st   f29, 856(r1), 0, qr0
	stfd     f28, 0x340(r1)
	psq_st   f28, 840(r1), 0, qr0
	stfd     f27, 0x330(r1)
	psq_st   f27, 824(r1), 0, qr0
	stfd     f26, 0x320(r1)
	psq_st   f26, 808(r1), 0, qr0
	stfd     f25, 0x310(r1)
	psq_st   f25, 792(r1), 0, qr0
	stfd     f24, 0x300(r1)
	psq_st   f24, 776(r1), 0, qr0
	stfd     f23, 0x2f0(r1)
	psq_st   f23, 760(r1), 0, qr0
	stfd     f22, 0x2e0(r1)
	psq_st   f22, 744(r1), 0, qr0
	stfd     f21, 0x2d0(r1)
	psq_st   f21, 728(r1), 0, qr0
	stfd     f20, 0x2c0(r1)
	psq_st   f20, 712(r1), 0, qr0
	stfd     f19, 0x2b0(r1)
	psq_st   f19, 696(r1), 0, qr0
	stfd     f18, 0x2a0(r1)
	psq_st   f18, 680(r1), 0, qr0
	stfd     f17, 0x290(r1)
	psq_st   f17, 664(r1), 0, qr0
	stfd     f16, 0x280(r1)
	psq_st   f16, 648(r1), 0, qr0
	stfd     f15, 0x270(r1)
	psq_st   f15, 632(r1), 0, qr0
	stfd     f14, 0x260(r1)
	psq_st   f14, 616(r1), 0, qr0
	stmw     r27, 0x24c(r1)
	mr       r28, r3
	lis      r4, sincosTable___5JMath@ha
	lfs      f0, 0x24(r28)
	addi     r3, r4, sincosTable___5JMath@l
	lfs      f2, 0x800(r3)
	addi     r8, r1, 0x64
	stfs     f0, 0x230(r1)
	li       r6, 0
	lfs      f0, 0x28(r28)
	addi     r7, r28, 0x30
	lfs      f3, lbl_8051D020@sda21(r2)
	li       r0, -1
	stfs     f0, 0x240(r1)
	addi     r4, r1, 0x188
	lfs      f0, 0x2c(r28)
	li       r30, 0
	lfs      f4, lbl_8051D028@sda21(r2)
	stfs     f0, 0x23c(r1)
	lfs      f0, 0x230(r1)
	lfs      f1, lbl_8051D02C@sda21(r2)
	stfs     f0, 0x64(r1)
	lfs      f0, 0x240(r1)
	stfs     f4, 0x70(r1)
	lwz      r3, mapMgr__4Game@sda21(r13)
	stfs     f0, 0x68(r1)
	lfs      f0, 0x23c(r1)
	stw      r8, 0x188(r1)
	lwz      r5, sys@sda21(r13)
	stfs     f0, 0x6c(r1)
	stw      r7, 0x18c(r1)
	stfs     f3, 0x190(r1)
	stfs     f3, 0x194(r1)
	stw      r6, 0x198(r1)
	stw      r6, 0x1cc(r1)
	stb      r6, 0x1fc(r1)
	stb      r6, 0x1a1(r1)
	stb      r6, 0x1a0(r1)
	stw      r6, 0x1d0(r1)
	stw      r6, 0x19c(r1)
	stb      r6, 0x218(r1)
	stw      r6, 0x21c(r1)
	stfs     f2, 0x1b4(r1)
	stfs     f1, 0x1b8(r1)
	stw      r0, 0x220(r1)
	stw      r6, 0x1d4(r1)
	stb      r6, 0x1a2(r1)
	lwz      r0, 0x1c(r28)
	stw      r0, 0x19c(r1)
	lwz      r12, 4(r3)
	lfs      f1, 0x54(r5)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0x64(r1)
	lfs      f0, lbl_8051D030@sda21(r2)
	stfs     f1, 0x24(r28)
	lfs      f1, 0x68(r1)
	stfs     f1, 0x28(r28)
	lfs      f1, 0x6c(r1)
	stfs     f1, 0x2c(r28)
	lfs      f1, 0x34(r28)
	fsubs    f0, f1, f0
	stfs     f0, 0x34(r28)
	lwz      r0, 0x1cc(r1)
	cmplwi   r0, 0
	bne      lbl_802EDE90
	lwz      r0, 0x1d0(r1)
	cmplwi   r0, 0
	beq      lbl_802EE120

lbl_802EDE90:
	lfs      f0, 0x24(r28)
	addi     r4, r1, 0x58
	lwz      r3, mapMgr__4Game@sda21(r13)
	stfs     f0, 0x58(r1)
	lfs      f0, 0x28(r28)
	stfs     f0, 0x5c(r1)
	lfs      f0, 0x2c(r28)
	stfs     f0, 0x60(r1)
	lwz      r12, 4(r3)
	lwz      r12, 0x28(r12)
	mtctr    r12
	bctrl
	stfs     f1, 0x5c(r1)
	frsp     f2, f1
	lfs      f0, lbl_8051D030@sda21(r2)
	lfs      f1, 0x28(r28)
	fsubs    f1, f1, f2
	fcmpo    cr0, f1, f0
	bge      lbl_802EDEE8
	lfs      f0, lbl_8051D028@sda21(r2)
	fadds    f0, f0, f2
	stfs     f0, 0x28(r28)

lbl_802EDEE8:
	lfs      f1, 0x24(r28)
	addi     r4, r1, 0x64
	lfs      f0, lbl_8051D028@sda21(r2)
	stfs     f1, 0x4c(r1)
	lwz      r3, mapMgr__4Game@sda21(r13)
	lfs      f1, 0x28(r28)
	stfs     f1, 0x50(r1)
	fsubs    f0, f1, f0
	lfs      f1, 0x2c(r28)
	stfs     f1, 0x54(r1)
	stfs     f0, 0x50(r1)
	bl       findWater__Q24Game6MapMgrFRQ23Sys6Sphere
	cmplwi   r3, 0
	beq      lbl_802EE010
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0(r3)
	lis      r3, __vt__Q23efx5TBase@ha
	addi     r0, r3, __vt__Q23efx5TBase@l
	li       r5, 0
	lis      r3, __vt__Q23efx8TSimple4@ha
	stw      r0, 0x124(r1)
	addi     r0, r3, __vt__Q23efx8TSimple4@l
	lfs      f1, 0x4c(r1)
	lfs      f0, 0x54(r1)
	lis      r4, __vt__Q23efx3Arg@ha
	lis      r3, __vt__Q23efx10THdamaHit3@ha
	li       r9, 0x97
	addi     r10, r4, __vt__Q23efx3Arg@l
	li       r8, 0x98
	li       r7, 0x99
	li       r6, 0x9a
	stw      r0, 0x124(r1)
	addi     r0, r3, __vt__Q23efx10THdamaHit3@l
	addi     r3, r1, 0x124
	addi     r4, r1, 0x3c
	stfs     f2, 0x50(r1)
	stw      r10, 0x3c(r1)
	stfs     f1, 0x40(r1)
	stfs     f2, 0x44(r1)
	stfs     f0, 0x48(r1)
	sth      r9, 0x128(r1)
	sth      r8, 0x12a(r1)
	sth      r7, 0x12c(r1)
	sth      r6, 0x12e(r1)
	stw      r5, 0x130(r1)
	stw      r5, 0x134(r1)
	stw      r5, 0x138(r1)
	stw      r5, 0x13c(r1)
	stw      r0, 0x124(r1)
	bl       create__Q23efx8TSimple4FPQ23efx3Arg
	addi     r4, r28, 0x24
	li       r3, 0x380d
	bl       PSStartSoundVec__FUlP3Vec
	or.      r29, r3, r3
	beq      lbl_802EE0C4
	lwz      r12, 0x10(r3)
	li       r4, 0
	lfs      f1, lbl_8051D034@sda21(r2)
	li       r5, 0
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	mr       r3, r29
	lfs      f1, lbl_8051D038@sda21(r2)
	lwz      r12, 0x10(r29)
	li       r4, 0
	li       r5, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_802EE0C4

lbl_802EE010:
	lwz      r4, 0x4c(r1)
	lis      r3, __vt__Q23efx5TBase@ha
	lwz      r7, 0x50(r1)
	addi     r0, r3, __vt__Q23efx5TBase@l
	lwz      r6, 0x54(r1)
	lis      r3, __vt__Q23efx3Arg@ha
	stw      r4, 0x20(r1)
	lis      r4, __vt__Q23efx8TSimple4@ha
	addi     r12, r3, __vt__Q23efx3Arg@l
	lfs      f0, lbl_8051D024@sda21(r2)
	li       r5, 0
	stw      r7, 0x24(r1)
	lfs      f3, 0x20(r1)
	lis      r11, __vt__Q23efx8ArgScale@ha
	stw      r6, 0x28(r1)
	lis      r3, __vt__Q23efx9TChibiHit@ha
	lfs      f2, 0x24(r1)
	li       r9, 0x235
	lfs      f1, 0x28(r1)
	li       r8, 0x236
	li       r7, 0x237
	li       r6, 0x238
	stw      r0, 0xf4(r1)
	addi     r10, r4, __vt__Q23efx8TSimple4@l
	addi     r11, r11, __vt__Q23efx8ArgScale@l
	addi     r0, r3, __vt__Q23efx9TChibiHit@l
	stw      r12, 0x110(r1)
	addi     r3, r1, 0xf4
	addi     r4, r1, 0x110
	stw      r10, 0xf4(r1)
	stfs     f3, 0x114(r1)
	stfs     f2, 0x118(r1)
	stfs     f1, 0x11c(r1)
	stw      r11, 0x110(r1)
	stfs     f0, 0x120(r1)
	sth      r9, 0xf8(r1)
	sth      r8, 0xfa(r1)
	sth      r7, 0xfc(r1)
	sth      r6, 0xfe(r1)
	stw      r5, 0x100(r1)
	stw      r5, 0x104(r1)
	stw      r5, 0x108(r1)
	stw      r5, 0x10c(r1)
	stw      r0, 0xf4(r1)
	bl       create__Q23efx9TChibiHitFPQ23efx3Arg

lbl_802EE0C4:
	lwz      r3, 0x20(r28)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	addi     r4, r28, 0x24
	li       r3, 0x5800
	bl       PSStartSoundVec__FUlP3Vec
	lbz      r0, 0x18(r28)
	cmplwi   r0, 0
	beq      lbl_802EE118
	lwz      r3, cameraMgr__4Game@sda21(r13)
	addi     r5, r1, 0x4c
	li       r4, 0xf
	li       r6, 2
	bl       "startVibration__Q24Game9CameraMgrFiR10Vector3<f>i"
	lwz      r3, rumbleMgr__4Game@sda21(r13)
	addi     r5, r1, 0x4c
	li       r4, 0xe
	li       r6, 2
	bl       "startRumble__Q24Game9RumbleMgrFiR10Vector3<f>i"

lbl_802EE118:
	li       r30, 1
	b        lbl_802EE1D4

lbl_802EE120:
	lwz      r4, 0x1c(r28)
	addi     r3, r1, 0x14
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0x14(r1)
	lfs      f1, 0x24(r28)
	lfs      f0, lbl_8051D020@sda21(r2)
	fsubs    f1, f2, f1
	lfs      f2, 0x18(r1)
	lfs      f3, 0x1c(r1)
	fcmpo    cr0, f1, f0
	ble      lbl_802EE15C
	b        lbl_802EE160

lbl_802EE15C:
	fneg     f1, f1

lbl_802EE160:
	lfs      f0, lbl_8051D03C@sda21(r2)
	fcmpo    cr0, f1, f0
	bgt      lbl_802EE1BC
	lfs      f1, 0x28(r28)
	lfs      f0, lbl_8051D020@sda21(r2)
	fsubs    f1, f2, f1
	fcmpo    cr0, f1, f0
	ble      lbl_802EE184
	b        lbl_802EE188

lbl_802EE184:
	fneg     f1, f1

lbl_802EE188:
	lfs      f0, lbl_8051D03C@sda21(r2)
	fcmpo    cr0, f1, f0
	bgt      lbl_802EE1BC
	lfs      f1, 0x2c(r28)
	lfs      f0, lbl_8051D020@sda21(r2)
	fsubs    f1, f3, f1
	fcmpo    cr0, f1, f0
	ble      lbl_802EE1AC
	b        lbl_802EE1B0

lbl_802EE1AC:
	fneg     f1, f1

lbl_802EE1B0:
	lfs      f0, lbl_8051D03C@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_802EE1D4

lbl_802EE1BC:
	lwz      r3, 0x20(r28)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	li       r30, 1

lbl_802EE1D4:
	lfs      f1, lbl_8051D028@sda21(r2)
	lfs      f0, 0x240(r1)
	lfs      f30, 0x28(r28)
	fsubs    f0, f0, f1
	lfs      f31, 0x24(r28)
	fsubs    f30, f30, f1
	lfs      f29, 0x2c(r28)
	lfs      f1, lbl_8051D020@sda21(r2)
	stfs     f0, 0x240(r1)
	lfs      f0, 0x230(r1)
	fsubs    f3, f0, f31
	lfs      f0, 0x240(r1)
	fsubs    f2, f0, f30
	lfs      f0, 0x23c(r1)
	fsubs    f0, f0, f29
	fmuls    f2, f2, f2
	fmuls    f4, f0, f0
	fmadds   f0, f3, f3, f2
	fadds    f3, f4, f0
	fcmpo    cr0, f3, f1
	ble      lbl_802EE238
	ble      lbl_802EE23C
	frsqrte  f0, f3
	fmuls    f3, f0, f3
	b        lbl_802EE23C

lbl_802EE238:
	fmr      f3, f1

lbl_802EE23C:
	lwz      r3, 0x1c(r28)
	lfs      f6, lbl_8051D020@sda21(r2)
	lwz      r3, 0xc0(r3)
	fcmpo    cr0, f3, f6
	lfs      f0, 0x5dc(r3)
	lfs      f17, 0x5b4(r3)
	stfs     f0, 0x22c(r1)
	ble      lbl_802EE930
	lfs      f0, 0x240(r1)
	lfs      f5, lbl_8051D040@sda21(r2)
	fsubs    f27, f30, f0
	lfs      f0, 0x23c(r1)
	fsubs    f26, f29, f0
	lfs      f0, 0x230(r1)
	fmuls    f1, f27, f27
	fsubs    f28, f31, f0
	lfs      f0, 0x23c(r1)
	fmuls    f7, f26, f26
	fadds    f2, f0, f29
	lfs      f0, 0x240(r1)
	fmadds   f1, f28, f28, f1
	fadds    f4, f0, f30
	lfs      f0, 0x230(r1)
	fmuls    f2, f5, f2
	fadds    f7, f7, f1
	fmuls    f1, f5, f4
	fadds    f4, f3, f17
	fadds    f0, f0, f31
	fcmpo    cr0, f7, f6
	stfs     f4, 0x228(r1)
	lfs      f4, 0x22c(r1)
	fmuls    f0, f5, f0
	fmuls    f4, f4, f4
	stfs     f4, 0x224(r1)
	ble      lbl_802EE2D8
	ble      lbl_802EE2DC
	frsqrte  f4, f7
	fmuls    f7, f4, f7
	b        lbl_802EE2DC

lbl_802EE2D8:
	fmr      f7, f6

lbl_802EE2DC:
	lfs      f4, lbl_8051D020@sda21(r2)
	fcmpo    cr0, f7, f4
	ble      lbl_802EE2FC
	lfs      f4, lbl_8051D024@sda21(r2)
	fdivs    f4, f4, f7
	fmuls    f28, f28, f4
	fmuls    f27, f27, f4
	fmuls    f26, f26, f4

lbl_802EE2FC:
	lfs      f5, lbl_8051D020@sda21(r2)
	lfs      f6, lbl_8051D024@sda21(r2)
	fmuls    f4, f5, f26
	fmuls    f7, f5, f27
	fmsubs   f22, f5, f28, f4
	fnmsubs  f21, f6, f28, f7
	fmsubs   f23, f6, f26, f7
	fmuls    f4, f22, f22
	fmuls    f6, f21, f21
	fmadds   f4, f23, f23, f4
	fadds    f6, f6, f4
	fcmpo    cr0, f6, f5
	ble      lbl_802EE340
	ble      lbl_802EE344
	frsqrte  f4, f6
	fmuls    f6, f4, f6
	b        lbl_802EE344

lbl_802EE340:
	fmr      f6, f5

lbl_802EE344:
	lfs      f4, lbl_8051D020@sda21(r2)
	fcmpo    cr0, f6, f4
	ble      lbl_802EE364
	lfs      f4, lbl_8051D024@sda21(r2)
	fdivs    f4, f4, f6
	fmuls    f23, f23, f4
	fmuls    f22, f22, f4
	fmuls    f21, f21, f4

lbl_802EE364:
	fmuls    f4, f28, f21
	lfs      f5, lbl_8051D020@sda21(r2)
	fmuls    f7, f26, f22
	fmuls    f6, f27, f23
	fmsubs   f25, f26, f23, f4
	fmsubs   f4, f27, f21, f7
	fmsubs   f24, f28, f22, f6
	fmuls    f6, f25, f25
	stfs     f4, 0x238(r1)
	frsp     f4, f4
	fmuls    f7, f24, f24
	fmadds   f4, f4, f4, f6
	fadds    f6, f7, f4
	fcmpo    cr0, f6, f5
	ble      lbl_802EE3B0
	ble      lbl_802EE3B4
	frsqrte  f4, f6
	fmuls    f6, f4, f6
	b        lbl_802EE3B4

lbl_802EE3B0:
	fmr      f6, f5

lbl_802EE3B4:
	lfs      f4, lbl_8051D020@sda21(r2)
	fcmpo    cr0, f6, f4
	ble      lbl_802EE3DC
	lfs      f4, lbl_8051D024@sda21(r2)
	fdivs    f5, f4, f6
	lfs      f4, 0x238(r1)
	fmuls    f4, f4, f5
	fmuls    f25, f25, f5
	fmuls    f24, f24, f5
	stfs     f4, 0x238(r1)

lbl_802EE3DC:
	lfs      f4, 0x22c(r1)
	addi     r3, r1, 0xd4
	stfs     f0, 0x2c(r1)
	addi     r4, r1, 0x2c
	fadds    f3, f3, f4
	stfs     f1, 0x30(r1)
	stfs     f2, 0x34(r1)
	stfs     f3, 0x38(r1)
	bl       __ct__Q24Game15CellIteratorArgFRQ23Sys6Sphere
	li       r0, 1
	addi     r3, r1, 0x140
	stb      r0, 0xf0(r1)
	addi     r4, r1, 0xd4
	bl       __ct__Q24Game12CellIteratorFRQ24Game15CellIteratorArg
	addi     r3, r1, 0x140
	bl       first__Q24Game12CellIteratorFv
	fneg     f0, f17
	lis      r3, "zero__10Vector3<f>"@ha
	addi     r31, r3, "zero__10Vector3<f>"@l
	stfs     f0, 0x234(r1)
	b        lbl_802EE920

lbl_802EE430:
	addi     r3, r1, 0x140
	bl       __ml__Q24Game12CellIteratorFv
	lwz      r12, 0(r3)
	mr       r29, r3
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802EE918
	mr       r4, r29
	addi     r3, r1, 8
	lwz      r12, 0(r29)
	li       r27, 1
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f15, 0xc(r1)
	lfs      f0, 0x240(r1)
	lfs      f18, 8(r1)
	fsubs    f4, f15, f0
	lfs      f0, 0x230(r1)
	lfs      f14, 0x10(r1)
	fsubs    f3, f18, f0
	lfs      f0, 0x23c(r1)
	lfs      f1, lbl_8051D020@sda21(r2)
	fsubs    f5, f14, f0
	fmuls    f0, f22, f4
	fmadds   f0, f23, f3, f0
	fmadds   f16, f21, f5, f0
	fcmpo    cr0, f16, f1
	ble      lbl_802EE4B4
	fmr      f0, f16
	b        lbl_802EE4B8

lbl_802EE4B4:
	fneg     f0, f16

lbl_802EE4B8:
	fcmpo    cr0, f0, f17
	bge      lbl_802EE6D4
	fmuls    f2, f25, f4
	lfs      f0, 0x238(r1)
	lfs      f1, lbl_8051D020@sda21(r2)
	fmadds   f0, f0, f3, f2
	fmadds   f0, f24, f5, f0
	fcmpo    cr0, f0, f1
	ble      lbl_802EE4E0
	b        lbl_802EE4E4

lbl_802EE4E0:
	fneg     f0, f0

lbl_802EE4E4:
	fcmpo    cr0, f0, f17
	bge      lbl_802EE6D4
	fmuls    f0, f27, f4
	fmadds   f0, f28, f3, f0
	fmadds   f1, f26, f5, f0
	lfs      f0, 0x234(r1)
	fcmpo    cr0, f1, f0
	ble      lbl_802EE6D4
	lfs      f0, 0x228(r1)
	fcmpo    cr0, f1, f0
	bge      lbl_802EE6D4
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_802EE564
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802EE644
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0x1c0(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802EE644

lbl_802EE564:
	fmuls    f19, f16, f21
	lfs      f20, lbl_8051D020@sda21(r2)
	fmuls    f16, f16, f23
	fmuls    f1, f19, f19
	fmadds   f0, f16, f16, f20
	fadds    f1, f1, f0
	fcmpo    cr0, f1, f20
	ble      lbl_802EE594
	ble      lbl_802EE598
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_802EE598

lbl_802EE594:
	fmr      f1, f20

lbl_802EE598:
	lfs      f0, lbl_8051D020@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_802EE5B8
	lfs      f0, lbl_8051D024@sda21(r2)
	fdivs    f0, f0, f1
	fmuls    f16, f16, f0
	fmuls    f20, f20, f0
	fmuls    f19, f19, f0

lbl_802EE5B8:
	mr       r3, r29
	lfs      f0, lbl_8051D044@sda21(r2)
	lwz      r12, 0(r29)
	fmuls    f16, f16, f0
	lwz      r12, 0x18(r12)
	fmuls    f19, f19, f0
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802EE5E4
	lfs      f20, lbl_8051D048@sda21(r2)

lbl_802EE5E4:
	lwz      r8, 0x1c(r28)
	lis      r5, __vt__Q24Game11Interaction@ha
	lis      r4, __vt__Q24Game12InteractWind@ha
	lis      r3, __vt__Q24Game12InteractBomb@ha
	lwz      r7, 0xc0(r8)
	addi     r6, r5, __vt__Q24Game11Interaction@l
	addi     r5, r4, __vt__Q24Game12InteractWind@l
	addi     r0, r3, __vt__Q24Game12InteractBomb@l
	lfs      f0, 0x604(r7)
	mr       r3, r29
	addi     r4, r1, 0xbc
	stw      r6, 0xbc(r1)
	stw      r5, 0xbc(r1)
	stw      r8, 0xc0(r1)
	stfs     f0, 0xc4(r1)
	stfs     f16, 0xc8(r1)
	stfs     f20, 0xcc(r1)
	stfs     f19, 0xd0(r1)
	stw      r0, 0xbc(r1)
	lwz      r12, 0(r29)
	lwz      r12, 0x1a4(r12)
	mtctr    r12
	bctrl
	b        lbl_802EE6D0

lbl_802EE644:
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802EE6D0
	lwz      r5, 0x1c(r28)
	cmplw    r29, r5
	beq      lbl_802EE6D0
	lis      r3, __vt__Q24Game11Interaction@ha
	lis      r4, __vt__Q24Game12InteractWind@ha
	addi     r0, r3, __vt__Q24Game11Interaction@l
	lfs      f3, lbl_8051D048@sda21(r2)
	stw      r0, 0xa4(r1)
	lis      r3, "zero__10Vector3<f>"@ha
	addi     r4, r4, __vt__Q24Game12InteractWind@l
	lfs      f2, "zero__10Vector3<f>"@l(r3)
	lis      r3, __vt__Q24Game12InteractBomb@ha
	lfs      f1, 4(r31)
	stw      r4, 0xa4(r1)
	addi     r0, r3, __vt__Q24Game12InteractBomb@l
	lfs      f0, 8(r31)
	mr       r3, r29
	stw      r5, 0xa8(r1)
	addi     r4, r1, 0xa4
	stfs     f3, 0xac(r1)
	stfs     f2, 0xb0(r1)
	stfs     f1, 0xb4(r1)
	stfs     f0, 0xb8(r1)
	stw      r0, 0xa4(r1)
	lwz      r12, 0(r29)
	lwz      r12, 0x1a4(r12)
	mtctr    r12
	bctrl

lbl_802EE6D0:
	li       r27, 0

lbl_802EE6D4:
	clrlwi.  r0, r30, 0x18
	beq      lbl_802EE918
	clrlwi.  r0, r27, 0x18
	beq      lbl_802EE918
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_802EE71C
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802EE850

lbl_802EE71C:
	fsubs    f0, f30, f15
	fsubs    f2, f31, f18
	fsubs    f1, f29, f14
	fmuls    f0, f0, f0
	fmadds   f0, f2, f2, f0
	fmadds   f1, f1, f1, f0
	lfs      f0, 0x224(r1)
	fcmpo    cr0, f1, f0
	bge      lbl_802EE918
	lfs      f0, lbl_8051D020@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_802EE75C
	ble      lbl_802EE760
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_802EE760

lbl_802EE75C:
	fmr      f1, f0

lbl_802EE760:
	lfs      f0, 0x22c(r1)
	fsubs    f16, f14, f29
	fsubs    f14, f18, f31
	lfs      f15, lbl_8051D020@sda21(r2)
	fdivs    f4, f1, f0
	lfs      f1, lbl_8051D024@sda21(r2)
	lfs      f0, lbl_8051D04C@sda21(r2)
	lfs      f3, lbl_8051D044@sda21(r2)
	fsubs    f2, f1, f4
	fmuls    f1, f0, f4
	fmuls    f4, f16, f16
	fmadds   f0, f14, f14, f15
	fmadds   f18, f3, f2, f1
	fadds    f4, f4, f0
	fcmpo    cr0, f4, f15
	ble      lbl_802EE7B0
	ble      lbl_802EE7B4
	frsqrte  f0, f4
	fmuls    f4, f0, f4
	b        lbl_802EE7B4

lbl_802EE7B0:
	fmr      f4, f15

lbl_802EE7B4:
	lfs      f0, lbl_8051D020@sda21(r2)
	fcmpo    cr0, f4, f0
	ble      lbl_802EE7D4
	lfs      f0, lbl_8051D024@sda21(r2)
	fdivs    f0, f0, f4
	fmuls    f14, f14, f0
	fmuls    f15, f15, f0
	fmuls    f16, f16, f0

lbl_802EE7D4:
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802EE7F4
	lfs      f15, lbl_8051D024@sda21(r2)

lbl_802EE7F4:
	lwz      r5, 0x1c(r28)
	lis      r3, __vt__Q24Game11Interaction@ha
	fmuls    f14, f14, f18
	addi     r0, r3, __vt__Q24Game11Interaction@l
	fmuls    f15, f15, f18
	lfs      f0, lbl_8051D020@sda21(r2)
	fmuls    f16, f16, f18
	lis      r3, __vt__Q24Game12InteractWind@ha
	stw      r0, 0x8c(r1)
	addi     r0, r3, __vt__Q24Game12InteractWind@l
	mr       r3, r29
	addi     r4, r1, 0x8c
	stw      r5, 0x90(r1)
	stw      r0, 0x8c(r1)
	stfs     f0, 0x94(r1)
	stfs     f14, 0x98(r1)
	stfs     f15, 0x9c(r1)
	stfs     f16, 0xa0(r1)
	lwz      r12, 0(r29)
	lwz      r12, 0x1a4(r12)
	mtctr    r12
	bctrl
	b        lbl_802EE918

lbl_802EE850:
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802EE918
	lwz      r0, 0x1c(r28)
	cmplw    r29, r0
	beq      lbl_802EE918
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0x58(r12)
	mtctr    r12
	bctrl
	fsubs    f0, f30, f15
	fsubs    f4, f31, f18
	fsubs    f3, f29, f14
	fmuls    f2, f0, f0
	fmuls    f0, f1, f1
	fmadds   f1, f4, f4, f2
	fmadds   f1, f3, f3, f1
	fcmpo    cr0, f1, f0
	bge      lbl_802EE918
	lwz      r5, 0x1c(r28)
	lis      r3, __vt__Q24Game11Interaction@ha
	addi     r0, r3, __vt__Q24Game11Interaction@l
	lis      r4, __vt__Q24Game12InteractWind@ha
	stw      r0, 0x74(r1)
	lis      r3, "zero__10Vector3<f>"@ha
	addi     r4, r4, __vt__Q24Game12InteractWind@l
	lfs      f2, "zero__10Vector3<f>"@l(r3)
	lfs      f3, lbl_8051D048@sda21(r2)
	lis      r3, __vt__Q24Game12InteractBomb@ha
	lfs      f1, 4(r31)
	addi     r0, r3, __vt__Q24Game12InteractBomb@l
	stw      r4, 0x74(r1)
	mr       r3, r29
	lfs      f0, 8(r31)
	addi     r4, r1, 0x74
	stw      r5, 0x78(r1)
	stfs     f3, 0x7c(r1)
	stfs     f2, 0x80(r1)
	stfs     f1, 0x84(r1)
	stfs     f0, 0x88(r1)
	stw      r0, 0x74(r1)
	lwz      r12, 0(r29)
	lwz      r12, 0x1a4(r12)
	mtctr    r12
	bctrl

lbl_802EE918:
	addi     r3, r1, 0x140
	bl       next__Q24Game12CellIteratorFv

lbl_802EE920:
	addi     r3, r1, 0x140
	bl       isDone__Q24Game12CellIteratorFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_802EE430

lbl_802EE930:
	lbz      r0, 0x18(r28)
	cmplwi   r0, 0
	beq      lbl_802EE948
	addi     r4, r28, 0x24
	li       r3, 0x5125
	bl       PSStartSoundVec__FUlP3Vec

lbl_802EE948:
	mr       r3, r30
	psq_l    f31, 888(r1), 0, qr0
	lfd      f31, 0x370(r1)
	psq_l    f30, 872(r1), 0, qr0
	lfd      f30, 0x360(r1)
	psq_l    f29, 856(r1), 0, qr0
	lfd      f29, 0x350(r1)
	psq_l    f28, 840(r1), 0, qr0
	lfd      f28, 0x340(r1)
	psq_l    f27, 824(r1), 0, qr0
	lfd      f27, 0x330(r1)
	psq_l    f26, 808(r1), 0, qr0
	lfd      f26, 0x320(r1)
	psq_l    f25, 792(r1), 0, qr0
	lfd      f25, 0x310(r1)
	psq_l    f24, 776(r1), 0, qr0
	lfd      f24, 0x300(r1)
	psq_l    f23, 760(r1), 0, qr0
	lfd      f23, 0x2f0(r1)
	psq_l    f22, 744(r1), 0, qr0
	lfd      f22, 0x2e0(r1)
	psq_l    f21, 728(r1), 0, qr0
	lfd      f21, 0x2d0(r1)
	psq_l    f20, 712(r1), 0, qr0
	lfd      f20, 0x2c0(r1)
	psq_l    f19, 696(r1), 0, qr0
	lfd      f19, 0x2b0(r1)
	psq_l    f18, 680(r1), 0, qr0
	lfd      f18, 0x2a0(r1)
	psq_l    f17, 664(r1), 0, qr0
	lfd      f17, 0x290(r1)
	psq_l    f16, 648(r1), 0, qr0
	lfd      f16, 0x280(r1)
	psq_l    f15, 632(r1), 0, qr0
	lfd      f15, 0x270(r1)
	psq_l    f14, 616(r1), 0, qr0
	lfd      f14, 0x260(r1)
	lmw      r27, 0x24c(r1)
	lwz      r0, 0x384(r1)
	mtlr     r0
	addi     r1, r1, 0x380
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000030
 */
void MiniHoudaiShotGunNode::effectDrawOn()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000030
 */
void MiniHoudaiShotGunNode::effectDrawOff()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000004
 */
void MiniHoudaiShotGunNode::doDebugDraw(Graphics&)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	802EE9F0
 * Size:	0001E0
 */
MiniHoudaiShotGunMgr::MiniHoudaiShotGunMgr(Obj* obj)
{
	mOwner             = obj;
	mIsShotGunRotation = false;
	mIsShotGunLockedOn = false;
	mIsShotGunFinished = false;
	_08                = 0.0f;
	_0C                = 0.0f;
	_2C                = new MiniHoudaiShotGunNode(mOwner);
	_30                = new MiniHoudaiShotGunNode(mOwner);

	for (int i = 0; i < 6; i++) {
		MiniHoudaiShotGunNode* node = new MiniHoudaiShotGunNode(mOwner);
		node->mEfxShell             = new efx::TChibiShell;
		node->_24                   = Vector3f::zero;
		node->_30                   = Vector3f::zero;
		_30->add(node);
	}

	sMiniHoudaiShotGunMgr = nullptr;
}

/*
 * --INFO--
 * Address:	802EEBD0
 * Size:	00006C
 */
void MiniHoudaiShotGunMgr::setupShotGun()
{
	mIsShotGunRotation     = false;
	mIsShotGunLockedOn     = false;
	mIsShotGunFinished     = false;
	_08                    = 0.0f;
	_0C                    = 0.0f;
	SysShape::Joint* joint = mOwner->mModel->getJoint("kuti");
	joint->mJ3d->mFunction = &verticalRotationCallBack;
	_10                    = joint->getWorldMatrix();
}

/*
 * --INFO--
 * Address:	802EEC3C
 * Size:	00000C
 */
void MiniHoudaiShotGunMgr::resetCallBack() { sMiniHoudaiShotGunMgr = nullptr; }

/*
 * --INFO--
 * Address:	802EEC48
 * Size:	000008
 */
void MiniHoudaiShotGunMgr::setCallBack() { sMiniHoudaiShotGunMgr = this; }

/*
 * --INFO--
 * Address:	802EEC50
 * Size:	000024
 */
void MiniHoudaiShotGunMgr::startRotation()
{
	mIsShotGunRotation = true;
	mIsShotGunLockedOn = false;
	mIsShotGunFinished = false;
	_08                = 0.0f;
	_0C                = 0.0f;
}

/*
 * --INFO--
 * Address:	802EEC74
 * Size:	000014
 */
void MiniHoudaiShotGunMgr::finishRotation()
{
	mIsShotGunLockedOn = false;
	mIsShotGunFinished = true;
}

/*
 * --INFO--
 * Address:	802EEC88
 * Size:	000008
 */
bool MiniHoudaiShotGunMgr::isShotGunRotation() { return mIsShotGunRotation; }

/*
 * --INFO--
 * Address:	802EEC90
 * Size:	000008
 */
bool MiniHoudaiShotGunMgr::isShotGunLockOn() { return mIsShotGunLockedOn; }

/*
 * --INFO--
 * Address:	802EEC98
 * Size:	000008
 */
bool MiniHoudaiShotGunMgr::isFinishShotGun() { return mIsShotGunFinished; }

/*
 * --INFO--
 * Address:	802EECA0
 * Size:	00001C
 */
void MiniHoudaiShotGunMgr::setShotGunTarget(Vector3f& targetPos) { mTargetPosition = targetPos; }

/*
 * --INFO--
 * Address:	802EECBC
 * Size:	0004C4
 */
void MiniHoudaiShotGunMgr::emitShotGun()
{
	/*
	stwu     r1, -0x110(r1)
	mflr     r0
	stw      r0, 0x114(r1)
	stfd     f31, 0x100(r1)
	psq_st   f31, 264(r1), 0, qr0
	stfd     f30, 0xf0(r1)
	psq_st   f30, 248(r1), 0, qr0
	stfd     f29, 0xe0(r1)
	psq_st   f29, 232(r1), 0, qr0
	stfd     f28, 0xd0(r1)
	psq_st   f28, 216(r1), 0, qr0
	stfd     f27, 0xc0(r1)
	psq_st   f27, 200(r1), 0, qr0
	stfd     f26, 0xb0(r1)
	psq_st   f26, 184(r1), 0, qr0
	stfd     f25, 0xa0(r1)
	psq_st   f25, 168(r1), 0, qr0
	stfd     f24, 0x90(r1)
	psq_st   f24, 152(r1), 0, qr0
	stw      r31, 0x8c(r1)
	stw      r30, 0x88(r1)
	stw      r29, 0x84(r1)
	stw      r28, 0x80(r1)
	lis      r4, lbl_8048CDD8@ha
	mr       r28, r3
	addi     r5, r4, lbl_8048CDD8@l
	addi     r31, r1, 8
	lwz      r4, 0(r5)
	li       r30, 0
	lwz      r3, 4(r5)
	lwz      r0, 8(r5)
	stw      r4, 8(r1)
	stw      r3, 0xc(r1)
	stw      r0, 0x10(r1)

lbl_802EED44:
	lwz      r3, 0x30(r28)
	lwz      r29, 0x10(r3)
	cmplwi   r29, 0
	beq      lbl_802EF0A4
	lwz      r3, 0x10(r28)
	lfs      f0, lbl_8051D020@sda21(r2)
	lfs      f30, 0x10(r3)
	lfs      f29, 0x20(r3)
	fmuls    f1, f30, f30
	lfs      f31, 0(r3)
	fmuls    f2, f29, f29
	lfs      f28, 0xc(r3)
	lfs      f27, 0x1c(r3)
	fmadds   f1, f31, f31, f1
	lfs      f26, 0x2c(r3)
	fadds    f1, f2, f1
	fcmpo    cr0, f1, f0
	ble      lbl_802EED9C
	ble      lbl_802EEDA0
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_802EEDA0

lbl_802EED9C:
	fmr      f1, f0

lbl_802EEDA0:
	lfs      f0, lbl_8051D020@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_802EEDC0
	lfs      f0, lbl_8051D024@sda21(r2)
	fdivs    f0, f0, f1
	fmuls    f31, f31, f0
	fmuls    f30, f30, f0
	fmuls    f29, f29, f0

lbl_802EEDC0:
	lfs      f1, lbl_8051D058@sda21(r2)
	lfs      f25, 0(r31)
	fmuls    f2, f31, f1
	lfs      f0, lbl_8051D05C@sda21(r2)
	fmuls    f3, f30, f1
	fmuls    f1, f29, f1
	fadds    f28, f28, f2
	fadds    f27, f27, f3
	fadds    f26, f26, f1
	fmuls    f24, f0, f25
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x6c(r1)
	lfd      f2, lbl_8051D068@sda21(r2)
	stw      r0, 0x68(r1)
	lfs      f0, lbl_8051D060@sda21(r2)
	lfd      f1, 0x68(r1)
	fsubs    f1, f1, f2
	fmuls    f1, f24, f1
	fdivs    f0, f1, f0
	fsubs    f0, f0, f25
	fadds    f31, f31, f0
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x74(r1)
	lfd      f2, lbl_8051D068@sda21(r2)
	stw      r0, 0x70(r1)
	lfs      f0, lbl_8051D060@sda21(r2)
	lfd      f1, 0x70(r1)
	fsubs    f1, f1, f2
	fmuls    f1, f24, f1
	fdivs    f0, f1, f0
	fsubs    f0, f0, f25
	fadds    f30, f30, f0
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x7c(r1)
	fmuls    f0, f30, f30
	lfd      f4, lbl_8051D068@sda21(r2)
	stw      r0, 0x78(r1)
	lfs      f2, lbl_8051D060@sda21(r2)
	fmadds   f1, f31, f31, f0
	lfd      f3, 0x78(r1)
	lfs      f0, lbl_8051D020@sda21(r2)
	fsubs    f3, f3, f4
	fmuls    f3, f24, f3
	fdivs    f2, f3, f2
	fsubs    f2, f2, f25
	fadds    f29, f29, f2
	fmuls    f2, f29, f29
	fadds    f1, f2, f1
	fcmpo    cr0, f1, f0
	ble      lbl_802EEEB0
	ble      lbl_802EEEB4
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_802EEEB4

lbl_802EEEB0:
	fmr      f1, f0

lbl_802EEEB4:
	lfs      f0, lbl_8051D020@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_802EEED4
	lfs      f0, lbl_8051D024@sda21(r2)
	fdivs    f0, f0, f1
	fmuls    f31, f31, f0
	fmuls    f30, f30, f0
	fmuls    f29, f29, f0

lbl_802EEED4:
	lfs      f0, 8(r28)
	cmpwi    r30, 0
	stfs     f28, 0x24(r29)
	fmuls    f31, f31, f0
	fmuls    f30, f30, f0
	stfs     f27, 0x28(r29)
	fmuls    f29, f29, f0
	stfs     f26, 0x2c(r29)
	stfs     f31, 0x30(r29)
	stfs     f30, 0x34(r29)
	stfs     f29, 0x38(r29)
	bne      lbl_802EEFCC
	li       r0, 1
	lfs      f0, lbl_8051D020@sda21(r2)
	stb      r0, 0x18(r29)
	lfs      f3, 0x34(r29)
	lfs      f4, 0x38(r29)
	fmuls    f1, f3, f3
	lfs      f2, 0x30(r29)
	fmuls    f5, f4, f4
	fmadds   f1, f2, f2, f1
	fadds    f1, f5, f1
	fcmpo    cr0, f1, f0
	ble      lbl_802EEF44
	ble      lbl_802EEF48
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_802EEF48

lbl_802EEF44:
	fmr      f1, f0

lbl_802EEF48:
	lfs      f0, lbl_8051D020@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_802EEF68
	lfs      f0, lbl_8051D024@sda21(r2)
	fdivs    f0, f0, f1
	fmuls    f2, f2, f0
	fmuls    f3, f3, f0
	fmuls    f4, f4, f0

lbl_802EEF68:
	lis      r4, __vt__Q23efx3Arg@ha
	lis      r3, __vt__Q23efx6ArgDir@ha
	addi     r4, r4, __vt__Q23efx3Arg@l
	addi     r0, r29, 0x24
	stw      r4, 0x30(r1)
	addi     r3, r3, __vt__Q23efx6ArgDir@l
	addi     r4, r1, 0x30
	lfs      f0, 0x24(r29)
	stfs     f0, 0x34(r1)
	lfs      f0, 0x28(r29)
	stfs     f0, 0x38(r1)
	lfs      f0, 0x2c(r29)
	stfs     f0, 0x3c(r1)
	stw      r3, 0x30(r1)
	stfs     f2, 0x40(r1)
	stfs     f3, 0x44(r1)
	stfs     f4, 0x48(r1)
	lwz      r3, 0x20(r29)
	stw      r0, 0x10(r3)
	lwz      r3, 0x20(r29)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	b        lbl_802EF090

lbl_802EEFCC:
	li       r0, 0
	lfs      f0, lbl_8051D020@sda21(r2)
	stb      r0, 0x18(r29)
	lfs      f3, 0x34(r29)
	lfs      f4, 0x38(r29)
	fmuls    f1, f3, f3
	lfs      f2, 0x30(r29)
	fmuls    f5, f4, f4
	fmadds   f1, f2, f2, f1
	fadds    f1, f5, f1
	fcmpo    cr0, f1, f0
	ble      lbl_802EF00C
	ble      lbl_802EF010
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_802EF010

lbl_802EF00C:
	fmr      f1, f0

lbl_802EF010:
	lfs      f0, lbl_8051D020@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_802EF030
	lfs      f0, lbl_8051D024@sda21(r2)
	fdivs    f0, f0, f1
	fmuls    f2, f2, f0
	fmuls    f3, f3, f0
	fmuls    f4, f4, f0

lbl_802EF030:
	lis      r4, __vt__Q23efx3Arg@ha
	lis      r3, __vt__Q23efx6ArgDir@ha
	addi     r4, r4, __vt__Q23efx3Arg@l
	addi     r0, r29, 0x24
	stw      r4, 0x14(r1)
	addi     r3, r3, __vt__Q23efx6ArgDir@l
	addi     r4, r1, 0x14
	lfs      f0, 0x24(r29)
	stfs     f0, 0x18(r1)
	lfs      f0, 0x28(r29)
	stfs     f0, 0x1c(r1)
	lfs      f0, 0x2c(r29)
	stfs     f0, 0x20(r1)
	stw      r3, 0x14(r1)
	stfs     f2, 0x24(r1)
	stfs     f3, 0x28(r1)
	stfs     f4, 0x2c(r1)
	lwz      r3, 0x20(r29)
	stw      r0, 0x10(r3)
	lwz      r3, 0x20(r29)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl

lbl_802EF090:
	mr       r3, r29
	bl       del__5CNodeFv
	lwz      r3, 0x2c(r28)
	mr       r4, r29
	bl       add__5CNodeFP5CNode

lbl_802EF0A4:
	addi     r30, r30, 1
	addi     r31, r31, 4
	cmpwi    r30, 3
	blt      lbl_802EED44
	lwz      r8, 0x10(r28)
	lis      r3, __vt__Q23efx5TBase@ha
	addi     r0, r3, __vt__Q23efx5TBase@l
	li       r5, 0
	lis      r3, __vt__Q23efx8TSimple3@ha
	stw      r0, 0x4c(r1)
	addi     r0, r3, __vt__Q23efx8TSimple3@l
	lis      r3, __vt__Q23efx11TSimpleMtx3@ha
	stw      r0, 0x4c(r1)
	addi     r0, r3, __vt__Q23efx11TSimpleMtx3@l
	lis      r3, __vt__Q23efx11TChibiShoot@ha
	li       r4, 0x23a
	stw      r0, 0x4c(r1)
	addi     r0, r3, __vt__Q23efx11TChibiShoot@l
	li       r7, 0x23b
	li       r6, 0x23c
	sth      r4, 0x50(r1)
	addi     r3, r1, 0x4c
	li       r4, 0
	sth      r7, 0x52(r1)
	sth      r6, 0x54(r1)
	stw      r5, 0x58(r1)
	stw      r5, 0x5c(r1)
	stw      r5, 0x60(r1)
	stw      r8, 0x64(r1)
	stw      r0, 0x4c(r1)
	bl       create__Q23efx11TSimpleMtx3FPQ23efx3Arg
	psq_l    f31, 264(r1), 0, qr0
	lfd      f31, 0x100(r1)
	psq_l    f30, 248(r1), 0, qr0
	lfd      f30, 0xf0(r1)
	psq_l    f29, 232(r1), 0, qr0
	lfd      f29, 0xe0(r1)
	psq_l    f28, 216(r1), 0, qr0
	lfd      f28, 0xd0(r1)
	psq_l    f27, 200(r1), 0, qr0
	lfd      f27, 0xc0(r1)
	psq_l    f26, 184(r1), 0, qr0
	lfd      f26, 0xb0(r1)
	psq_l    f25, 168(r1), 0, qr0
	lfd      f25, 0xa0(r1)
	psq_l    f24, 152(r1), 0, qr0
	lfd      f24, 0x90(r1)
	lwz      r31, 0x8c(r1)
	lwz      r30, 0x88(r1)
	lwz      r29, 0x84(r1)
	lwz      r0, 0x114(r1)
	lwz      r28, 0x80(r1)
	mtlr     r0
	addi     r1, r1, 0x110
	blr
	*/
}

/*
 * --INFO--
 * Address:	802EF180
 * Size:	000074
 */
void MiniHoudaiShotGunMgr::doUpdate()
{
	if (mIsShotGunRotation) {
		if (mIsShotGunFinished) {
			if (returnShotGunRotation()) {
				mIsShotGunRotation = false;
				mIsShotGunLockedOn = true;
			}
		} else if (searchShotGunRotation()) {
			mIsShotGunLockedOn = true;
		}
	}
}

/*
 * --INFO--
 * Address:	802EF1F4
 * Size:	000078
 */
void MiniHoudaiShotGunMgr::doUpdateCommon()
{
	MiniHoudaiShotGunNode* nextNode;
	MiniHoudaiShotGunNode* node = static_cast<MiniHoudaiShotGunNode*>(_2C->mChild);
	while (node) {
		nextNode = static_cast<MiniHoudaiShotGunNode*>(node->mNext);
		if (node->update()) {
			node->del();
			_30->add(node);
		}
		node = nextNode;
	}
}

/*
 * --INFO--
 * Address:	802EF26C
 * Size:	00007C
 */
void MiniHoudaiShotGunMgr::forceFinishShotGun()
{
	MiniHoudaiShotGunNode* nextNode;
	MiniHoudaiShotGunNode* node = static_cast<MiniHoudaiShotGunNode*>(_2C->mChild);
	while (node) {
		nextNode = static_cast<MiniHoudaiShotGunNode*>(node->mNext);
		node->mEfxShell->fade();
		node->del();
		_30->add(node);
		node = nextNode;
	}
}

/*
 * --INFO--
 * Address:	802EF2E8
 * Size:	000020
 */
Vector3f MiniHoudaiShotGunMgr::getShotGunPosition() { return _10->getBasis(3); }

/*
 * --INFO--
 * Address:	802EF308
 * Size:	0001C4
 */
bool MiniHoudaiShotGunMgr::searchShotGunRotation()
{
	Vector3f pos = getShotGunPosition();
	Vector3f sep = pos - mTargetPosition;
	Vector2f sep2D(sep.x, sep.z);
	f32 dist = sep2D.length() - 50.0f;
	if (dist < 1.0f) {
		dist = 1.0f;
	}

	f32 val         = 250.0f;
	f32 searchLimit = CG_PARMS(mOwner)->mGeneral.mSearchDistance.mValue / 2;
	if (dist < searchLimit) {
		f32 ratio = dist / searchLimit;
		val       = val * ratio + (1.0f - ratio);
		if (dist < CG_PARMS(mOwner)->mGeneral.mAttackRadius.mValue) {
			dist *= 0.1f;
		}
	}

	Vector2f vec2D(((0.45f * dist) / ((val / sys->mDeltaTime) / 20.0f)) / sys->mDeltaTime, (val / sys->mDeltaTime) / 20.0f);
	_08 = vec2D.length();

	f32 angleDist = angDist(_0C, HALF_PI - JMAAtan2Radian(vec2D.x, vec2D.y));

	f32 absAng = absVal(angleDist);

	if (absAng > 0.1f) {
		_0C -= 0.1f * (angleDist / absAng);
	} else {
		_0C -= angleDist;
	}

	_0C = (_0C < 0.0f) ? TAU + _0C : (_0C >= TAU) ? _0C - TAU : _0C;

	return (absAng < 0.01f);
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lfs      f0, lbl_8051D020@sda21(r2)
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, 0x10(r3)
	lfs      f1, 0x1c(r31)
	lfs      f2, 0x2c(r3)
	lfs      f3, 0xc(r3)
	fsubs    f2, f2, f1
	lfs      f1, 0x14(r31)
	fsubs    f3, f3, f1
	fmuls    f1, f2, f2
	fmadds   f2, f3, f3, f1
	fcmpo    cr0, f2, f0
	ble      lbl_802EF35C
	ble      lbl_802EF360
	frsqrte  f0, f2
	fmuls    f2, f0, f2
	b        lbl_802EF360

lbl_802EF35C:
	fmr      f2, f0

lbl_802EF360:
	lfs      f1, lbl_8051D070@sda21(r2)
	lfs      f0, lbl_8051D024@sda21(r2)
	fsubs    f2, f2, f1
	fcmpo    cr0, f2, f0
	bge      lbl_802EF378
	fmr      f2, f0

lbl_802EF378:
	lwz      r3, 0(r31)
	lfs      f0, lbl_8051D040@sda21(r2)
	lwz      r3, 0xc0(r3)
	lfs      f5, lbl_8051D074@sda21(r2)
	lfs      f1, 0x44c(r3)
	fmuls    f0, f1, f0
	fcmpo    cr0, f2, f0
	bge      lbl_802EF3BC
	fdivs    f3, f2, f0
	lfs      f1, lbl_8051D024@sda21(r2)
	lfs      f0, 0x5b4(r3)
	fsubs    f1, f1, f3
	fcmpo    cr0, f2, f0
	fmadds   f5, f5, f3, f1
	bge      lbl_802EF3BC
	lfs      f0, lbl_8051D078@sda21(r2)
	fmuls    f2, f2, f0

lbl_802EF3BC:
	lwz      r3, sys@sda21(r13)
	lfs      f0, lbl_8051D07C@sda21(r2)
	lfs      f4, 0x54(r3)
	lfs      f1, lbl_8051D030@sda21(r2)
	fmuls    f3, f0, f2
	fdivs    f2, f5, f4
	lfs      f0, lbl_8051D020@sda21(r2)
	fdivs    f2, f2, f1
	fdivs    f1, f2, f1
	fdivs    f1, f3, f1
	fdivs    f1, f1, f4
	fmuls    f3, f1, f1
	fmadds   f3, f2, f2, f3
	fcmpo    cr0, f3, f0
	ble      lbl_802EF408
	ble      lbl_802EF40C
	frsqrte  f0, f3
	fmuls    f3, f0, f3
	b        lbl_802EF40C

lbl_802EF408:
	fmr      f3, f0

lbl_802EF40C:
	lis      r3, atanTable___5JMath@ha
	stfs     f3, 8(r31)
	addi     r3, r3, atanTable___5JMath@l
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	fmr      f2, f1
	lfs      f0, lbl_8051D080@sda21(r2)
	lfs      f1, 0xc(r31)
	fsubs    f2, f0, f2
	bl       angDist__Fff
	lfs      f0, lbl_8051D020@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_802EF444
	fmr      f3, f1
	b        lbl_802EF448

lbl_802EF444:
	fneg     f3, f1

lbl_802EF448:
	lfs      f2, lbl_8051D078@sda21(r2)
	fcmpo    cr0, f3, f2
	ble      lbl_802EF468
	fdivs    f1, f1, f3
	lfs      f0, 0xc(r31)
	fnmsubs  f0, f2, f1, f0
	stfs     f0, 0xc(r31)
	b        lbl_802EF474

lbl_802EF468:
	lfs      f0, 0xc(r31)
	fsubs    f0, f0, f1
	stfs     f0, 0xc(r31)

lbl_802EF474:
	lfs      f1, 0xc(r31)
	lfs      f0, lbl_8051D020@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_802EF490
	lfs      f0, lbl_8051D084@sda21(r2)
	fadds    f1, f0, f1
	b        lbl_802EF4A4

lbl_802EF490:
	lfs      f0, lbl_8051D084@sda21(r2)
	fcmpo    cr0, f1, f0
	cror     2, 1, 2
	bne      lbl_802EF4A4
	fsubs    f1, f1, f0

lbl_802EF4A4:
	lfs      f0, lbl_8051D088@sda21(r2)
	stfs     f1, 0xc(r31)
	fcmpo    cr0, f3, f0
	mfcr     r0
	lwz      r31, 0xc(r1)
	srwi     r3, r0, 0x1f
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802EF4CC
 * Size:	0000C4
 */
bool MiniHoudaiShotGunMgr::returnShotGunRotation()
{
	/*
	lfs      f3, lbl_8051D020@sda21(r2)
	lfs      f4, 0xc(r3)
	fcmpo    cr0, f3, f4
	cror     2, 1, 2
	bne      lbl_802EF4FC
	fsubs    f2, f3, f4
	lfs      f1, lbl_8051D084@sda21(r2)
	fsubs    f0, f1, f2
	fcmpo    cr0, f0, f2
	bge      lbl_802EF514
	fsubs    f3, f3, f1
	b        lbl_802EF514

lbl_802EF4FC:
	fsubs    f2, f4, f3
	lfs      f1, lbl_8051D084@sda21(r2)
	fsubs    f0, f1, f2
	fcmpo    cr0, f0, f2
	bge      lbl_802EF514
	fadds    f3, f3, f1

lbl_802EF514:
	fsubs    f1, f4, f3
	lfs      f0, lbl_8051D020@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_802EF528
	b        lbl_802EF52C

lbl_802EF528:
	fneg     f1, f1

lbl_802EF52C:
	lfs      f0, lbl_8051D08C@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_802EF540
	fmr      f0, f3
	b        lbl_802EF554

lbl_802EF540:
	fcmpo    cr0, f4, f3
	bge      lbl_802EF550
	fadds    f0, f4, f0
	b        lbl_802EF554

lbl_802EF550:
	fsubs    f0, f4, f0

lbl_802EF554:
	stfs     f0, 0xc(r3)
	lfs      f0, lbl_8051D020@sda21(r2)
	lfs      f1, 0xc(r3)
	fsubs    f1, f1, f3
	fcmpo    cr0, f1, f0
	ble      lbl_802EF570
	b        lbl_802EF574

lbl_802EF570:
	fneg     f1, f1

lbl_802EF574:
	lfs      f0, lbl_8051D088@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_802EF588
	li       r3, 1
	blr

lbl_802EF588:
	li       r3, 0
	blr
	*/
}

/*
 * --INFO--
 * Address:	802EF590
 * Size:	000258
 */
void MiniHoudaiShotGunMgr::rotateVertical(J3DJoint*)
{
	/*
	stwu     r1, -0x70(r1)
	mflr     r0
	stw      r0, 0x74(r1)
	stfd     f31, 0x60(r1)
	psq_st   f31, 104(r1), 0, qr0
	stfd     f30, 0x50(r1)
	psq_st   f30, 88(r1), 0, qr0
	stfd     f29, 0x40(r1)
	psq_st   f29, 72(r1), 0, qr0
	stw      r31, 0x3c(r1)
	mr       r31, r3
	lbz      r0, 4(r3)
	cmplwi   r0, 0
	beq      lbl_802EF7BC
	lwz      r5, 0x10(r31)
	lfs      f9, lbl_8051D020@sda21(r2)
	lfs      f1, 0x10(r5)
	lfs      f2, 0x20(r5)
	fmuls    f5, f1, f1
	lfs      f0, 0(r5)
	fmuls    f8, f2, f2
	lfs      f3, 4(r5)
	lfs      f4, 0x14(r5)
	fmadds   f7, f0, f0, f5
	lfs      f5, 0x24(r5)
	lfs      f6, 8(r5)
	fadds    f31, f8, f7
	lfs      f7, 0x18(r5)
	lfs      f8, 0x28(r5)
	fcmpo    cr0, f31, f9
	ble      lbl_802EF61C
	ble      lbl_802EF620
	frsqrte  f9, f31
	fmuls    f31, f9, f31
	b        lbl_802EF620

lbl_802EF61C:
	fmr      f31, f9

lbl_802EF620:
	lfs      f9, lbl_8051D020@sda21(r2)
	fcmpo    cr0, f31, f9
	ble      lbl_802EF644
	lfs      f9, lbl_8051D024@sda21(r2)
	fdivs    f9, f9, f31
	fmuls    f0, f0, f9
	fmuls    f1, f1, f9
	fmuls    f2, f2, f9
	b        lbl_802EF648

lbl_802EF644:
	fmr      f31, f9

lbl_802EF648:
	fmuls    f10, f4, f4
	lfs      f9, lbl_8051D020@sda21(r2)
	fmuls    f11, f5, f5
	fmadds   f10, f3, f3, f10
	fadds    f30, f11, f10
	fcmpo    cr0, f30, f9
	ble      lbl_802EF674
	ble      lbl_802EF678
	frsqrte  f9, f30
	fmuls    f30, f9, f30
	b        lbl_802EF678

lbl_802EF674:
	fmr      f30, f9

lbl_802EF678:
	lfs      f9, lbl_8051D020@sda21(r2)
	fcmpo    cr0, f30, f9
	ble      lbl_802EF69C
	lfs      f9, lbl_8051D024@sda21(r2)
	fdivs    f9, f9, f30
	fmuls    f3, f3, f9
	fmuls    f4, f4, f9
	fmuls    f5, f5, f9
	b        lbl_802EF6A0

lbl_802EF69C:
	fmr      f30, f9

lbl_802EF6A0:
	fmuls    f10, f7, f7
	lfs      f9, lbl_8051D020@sda21(r2)
	fmuls    f11, f8, f8
	fmadds   f10, f6, f6, f10
	fadds    f29, f11, f10
	fcmpo    cr0, f29, f9
	ble      lbl_802EF6CC
	ble      lbl_802EF6D0
	frsqrte  f9, f29
	fmuls    f29, f9, f29
	b        lbl_802EF6D0

lbl_802EF6CC:
	fmr      f29, f9

lbl_802EF6D0:
	lfs      f9, lbl_8051D020@sda21(r2)
	fcmpo    cr0, f29, f9
	ble      lbl_802EF6F4
	lfs      f9, lbl_8051D024@sda21(r2)
	fdivs    f9, f9, f29
	fmuls    f6, f6, f9
	fmuls    f7, f7, f9
	fmuls    f8, f8, f9
	b        lbl_802EF6F8

lbl_802EF6F4:
	fmr      f29, f9

lbl_802EF6F8:
	stfs     f0, 0(r5)
	addi     r3, r1, 8
	li       r4, 0x5a
	stfs     f1, 0x10(r5)
	stfs     f2, 0x20(r5)
	stfs     f3, 4(r5)
	stfs     f4, 0x14(r5)
	stfs     f5, 0x24(r5)
	stfs     f6, 8(r5)
	stfs     f7, 0x18(r5)
	stfs     f8, 0x28(r5)
	lfs      f1, 0xc(r31)
	bl       PSMTXRotRad
	lwz      r3, 0x10(r31)
	addi     r4, r1, 8
	mr       r5, r3
	bl       PSMTXConcat
	lwz      r5, 0x10(r31)
	lis      r3, mCurrentMtx__6J3DSys@ha
	addi     r4, r3, mCurrentMtx__6J3DSys@l
	lfs      f0, 0(r5)
	lfs      f1, 0x10(r5)
	fmuls    f0, f0, f31
	lfs      f2, 0x20(r5)
	lfs      f3, 4(r5)
	fmuls    f1, f1, f31
	lfs      f4, 0x14(r5)
	fmuls    f2, f2, f31
	lfs      f5, 0x24(r5)
	fmuls    f3, f3, f30
	lfs      f6, 8(r5)
	fmuls    f4, f4, f30
	lfs      f7, 0x18(r5)
	fmuls    f5, f5, f30
	lfs      f8, 0x28(r5)
	fmuls    f6, f6, f29
	stfs     f0, 0(r5)
	fmuls    f7, f7, f29
	fmuls    f8, f8, f29
	stfs     f1, 0x10(r5)
	stfs     f2, 0x20(r5)
	stfs     f3, 4(r5)
	stfs     f4, 0x14(r5)
	stfs     f5, 0x24(r5)
	stfs     f6, 8(r5)
	stfs     f7, 0x18(r5)
	stfs     f8, 0x28(r5)
	lwz      r3, 0x10(r31)
	bl       PSMTXCopy

lbl_802EF7BC:
	psq_l    f31, 104(r1), 0, qr0
	lfd      f31, 0x60(r1)
	psq_l    f30, 88(r1), 0, qr0
	lfd      f30, 0x50(r1)
	psq_l    f29, 72(r1), 0, qr0
	lfd      f29, 0x40(r1)
	lwz      r0, 0x74(r1)
	lwz      r31, 0x3c(r1)
	mtlr     r0
	addi     r1, r1, 0x70
	blr
	*/
}

/*
 * --INFO--
 * Address:	802EF7E8
 * Size:	000088
 */
void MiniHoudaiShotGunMgr::effectDrawOn()
{
	FOREACH_NODE(MiniHoudaiShotGunNode, _2C->mChild, node) { node->mEfxShell->endDemoDrawOn(); }

	FOREACH_NODE(MiniHoudaiShotGunNode, _30->mChild, node) { node->mEfxShell->endDemoDrawOn(); }
}

/*
 * --INFO--
 * Address:	802EF870
 * Size:	000088
 */
void MiniHoudaiShotGunMgr::effectDrawOff()
{
	FOREACH_NODE(MiniHoudaiShotGunNode, _2C->mChild, node) { node->mEfxShell->startDemoDrawOff(); }

	FOREACH_NODE(MiniHoudaiShotGunNode, _30->mChild, node) { node->mEfxShell->startDemoDrawOff(); }
}

/*
 * --INFO--
 * Address:	........
 * Size:	000004
 */
void MiniHoudaiShotGunMgr::doDebugDraw(Graphics&)
{
	// UNUSED FUNCTION
}

} // namespace MiniHoudai
} // namespace Game
