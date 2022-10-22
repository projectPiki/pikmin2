#include "Dolphin/float.h"
#include "Dolphin/mtx.h"
#include "Dolphin/vec.h"
#include "JSystem/JPA/JPABlock.h"
#include "JSystem/JPA/JPAEmitter.h"
#include "JSystem/JPA/JPAResource.h"
#include "JSystem/JPA/JPAShape.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__19JPAParticleCallBack
    __vt__19JPAParticleCallBack:
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte
   execute__19JPAParticleCallBackFP14JPABaseEmitterP15JPABaseParticle .4byte
   draw__19JPAParticleCallBackFP14JPABaseEmitterP15JPABaseParticle .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80516C30
    lbl_80516C30:
        .float 1.0
    .global lbl_80516C34
    lbl_80516C34:
        .4byte 0x00000000
    .global lbl_80516C38
    lbl_80516C38:
        .4byte 0x42000000
    .global lbl_80516C3C
    lbl_80516C3C:
        .float 0.5
    .global lbl_80516C40
    lbl_80516C40:
        .4byte 0x40400000
    .global lbl_80516C44
    lbl_80516C44:
        .4byte 0x47000000
    .global lbl_80516C48
    lbl_80516C48:
        .4byte 0x43300000
        .4byte 0x80000000
    .global lbl_80516C50
    lbl_80516C50:
        .4byte 0x43300000
        .4byte 0x00000000
*/

/*
 * --INFO--
 * Address:	80094028
 * Size:	000048
 */
JPAParticleCallBack::~JPAParticleCallBack()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	or.      r31, r3, r3
	beq      lbl_80094058
	lis      r5, __vt__19JPAParticleCallBack@ha
	extsh.   r0, r4
	addi     r0, r5, __vt__19JPAParticleCallBack@l
	stw      r0, 0(r31)
	ble      lbl_80094058
	bl       __dl__FPv

lbl_80094058:
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
 * Address:	80094070
 * Size:	0008C4
 */
void JPABaseParticle::init_p(JPAEmitterWorkData* workData)
{
	JPAResource* resource           = workData->m_resource;
	JPABaseEmitter* emitter         = workData->m_emitter;
	JPAExtraShape* extraShape       = resource->_20;
	JPABaseShape* baseShape         = resource->_1C;
	JPADynamicsBlock* dynamicsBlock = resource->_2C;

	_80        = 0xFFFF;
	u32 random = emitter->m_rng.next();
	_82        = (float)emitter->_52 * -(dynamicsBlock->castData()->_54 * emitter->m_rng.nextFloat_0_1() - 1.0f);
	_84        = 0.0f;
	_7C        = 0;
	PSMTXMultVecSR(workData->_D8, (Vec*)&workData->_10, (Vec*)&m_position);
	if ((emitter->m_resource->_2C->castData()->_08 & 8) != 0) {
		_7C |= 0x20;
	}
	_18   = workData->_138;
	_00.x = m_position.x * workData->_12C.x + _18.x;
	_00.y = m_position.y * workData->_12C.y + _18.y;
	_00.z = m_position.z * workData->_12C.z + _18.z;
	if (emitter->_34 != 0.0f) {
		// float mag = SQUARE(workData->_24) + SQUARE(workData->_1C) + SQUARE(workData->_20);
		// if (__float_epsilon * 32.0f < mag) {
		// 	if (mag < 0.0f) {
		// 		float v1;
		// 		FRSQRTE(&v1);
		// 		mag = v1 * 0.5f * -(mag * v1 * v1 - 3.0f);
		// 	}
		// 	mag *= emitter->_34;

		// }
		// float mag = PSVECSquareMag((Vec*)&workData->_1C);
		// if (__float_epsilon * 32.0f < mag) {

		// }
	}
	/*
	stwu     r1, -0x100(r1)
	mflr     r0
	stw      r0, 0x104(r1)
	stfd     f31, 0xf0(r1)
	psq_st   f31, 248(r1), 0, qr0
	stfd     f30, 0xe0(r1)
	psq_st   f30, 232(r1), 0, qr0
	stfd     f29, 0xd0(r1)
	psq_st   f29, 216(r1), 0, qr0
	stfd     f28, 0xc0(r1)
	psq_st   f28, 200(r1), 0, qr0
	stfd     f27, 0xb0(r1)
	psq_st   f27, 184(r1), 0, qr0
	stfd     f26, 0xa0(r1)
	psq_st   f26, 168(r1), 0, qr0
	stmw     r26, 0x88(r1)
	mr       r27, r4
	mr       r26, r3
	lwz      r5, 4(r4)
	lis      r3, 0x0019660D@ha
	lis      r6, 0x4330
	lwz      r30, 0(r4)
	lwz      r31, 0x20(r5)
	li       r4, -1
	lwz      r29, 0x1c(r5)
	addi     r7, r3, 0x0019660D@l
	lwz      r28, 0x2c(r5)
	li       r0, 0
	lfs      f2, lbl_80516C30@sda21(r2)
	addi     r3, r27, 0xd8
	sth      r4, 0x80(r26)
	addi     r4, r27, 0x10
	lfd      f5, lbl_80516C48@sda21(r2)
	addi     r5, r26, 0xc
	lwz      r8, 0xc4(r30)
	stw      r6, 0x70(r1)
	mullw    r6, r8, r7
	lfs      f0, lbl_80516C34@sda21(r2)
	addis    r6, r6, 0x3c6f
	addi     r6, r6, -3233
	stw      r6, 0xc4(r30)
	srwi     r6, r6, 9
	oris     r6, r6, 0x3f80
	stw      r6, 0x38(r1)
	lha      r6, 0x52(r30)
	lfs      f1, 0x38(r1)
	xoris    r7, r6, 0x8000
	lwz      r6, 0(r28)
	stw      r7, 0x74(r1)
	fsubs    f1, f1, f2
	lfs      f3, 0x54(r6)
	lfd      f4, 0x70(r1)
	fnmsubs  f1, f3, f1, f2
	fsubs    f2, f4, f5
	fmuls    f1, f2, f1
	fctiwz   f1, f1
	stfd     f1, 0x78(r1)
	lwz      r6, 0x7c(r1)
	sth      r6, 0x82(r26)
	stfs     f0, 0x84(r26)
	stw      r0, 0x7c(r26)
	bl       PSMTXMultVecSR
	lwz      r3, 0xe8(r30)
	lwz      r3, 0x2c(r3)
	lwz      r3, 0(r3)
	lwz      r0, 8(r3)
	rlwinm.  r0, r0, 0, 0x1c, 0x1c
	beq      lbl_8009418C
	lwz      r0, 0x7c(r26)
	ori      r0, r0, 0x20
	stw      r0, 0x7c(r26)

lbl_8009418C:
	lfs      f0, 0x138(r27)
	lfs      f31, lbl_80516C34@sda21(r2)
	stfs     f0, 0x18(r26)
	lfs      f0, 0x13c(r27)
	stfs     f0, 0x1c(r26)
	lfs      f0, 0x140(r27)
	stfs     f0, 0x20(r26)
	lfs      f2, 0xc(r26)
	lfs      f1, 0x12c(r27)
	lfs      f0, 0x18(r26)
	lfs      f3, 0x10(r26)
	fmadds   f0, f2, f1, f0
	lfs      f2, 0x130(r27)
	lfs      f1, 0x1c(r26)
	lfs      f5, 0x14(r26)
	lfs      f4, 0x134(r27)
	fmadds   f2, f3, f2, f1
	lfs      f1, 0x20(r26)
	stfs     f0, 0(r26)
	fmadds   f0, f5, f4, f1
	stfs     f2, 4(r26)
	stfs     f0, 8(r26)
	lfs      f5, 0x34(r30)
	fcmpu    cr0, f5, f31
	beq      lbl_80094288
	lfs      f1, 0x1c(r27)
	lis      r3, __float_epsilon@ha
	lfs      f0, 0x20(r27)
	fmuls    f3, f1, f1
	lfs      f4, 0x24(r27)
	fmuls    f2, f0, f0
	lfs      f1, lbl_80516C38@sda21(r2)
	lfs      f0, __float_epsilon@l(r3)
	fmuls    f4, f4, f4
	fadds    f2, f3, f2
	fmuls    f0, f1, f0
	fadds    f4, f4, f2
	fcmpo    cr0, f4, f0
	cror     2, 0, 2
	bne      lbl_80094238
	fmr      f30, f31
	fmr      f29, f31
	b        lbl_80094290

lbl_80094238:
	fcmpo    cr0, f4, f31
	cror     2, 0, 2
	bne      lbl_80094248
	b        lbl_80094268

lbl_80094248:
	frsqrte  f3, f4
	lfs      f2, lbl_80516C3C@sda21(r2)
	lfs      f0, lbl_80516C40@sda21(r2)
	frsp     f3, f3
	fmuls    f1, f3, f3
	fmuls    f2, f2, f3
	fnmsubs  f0, f4, f1, f0
	fmuls    f4, f2, f0

lbl_80094268:
	fmuls    f3, f4, f5
	lfs      f2, 0x1c(r27)
	lfs      f1, 0x20(r27)
	lfs      f0, 0x24(r27)
	fmuls    f29, f2, f3
	fmuls    f30, f1, f3
	fmuls    f31, f0, f3
	b        lbl_80094290

lbl_80094288:
	fmr      f30, f31
	fmr      f29, f31

lbl_80094290:
	lfs      f5, 0x38(r30)
	lfs      f28, lbl_80516C34@sda21(r2)
	fcmpu    cr0, f5, f28
	beq      lbl_80094338
	lfs      f1, 0x28(r27)
	lis      r3, __float_epsilon@ha
	lfs      f0, 0x2c(r27)
	fmuls    f3, f1, f1
	lfs      f4, 0x30(r27)
	fmuls    f2, f0, f0
	lfs      f1, lbl_80516C38@sda21(r2)
	lfs      f0, __float_epsilon@l(r3)
	fmuls    f4, f4, f4
	fadds    f2, f3, f2
	fmuls    f0, f1, f0
	fadds    f4, f4, f2
	fcmpo    cr0, f4, f0
	cror     2, 0, 2
	bne      lbl_800942E8
	fmr      f27, f28
	fmr      f26, f28
	b        lbl_80094340

lbl_800942E8:
	fcmpo    cr0, f4, f28
	cror     2, 0, 2
	bne      lbl_800942F8
	b        lbl_80094318

lbl_800942F8:
	frsqrte  f3, f4
	lfs      f2, lbl_80516C3C@sda21(r2)
	lfs      f0, lbl_80516C40@sda21(r2)
	frsp     f3, f3
	fmuls    f1, f3, f3
	fmuls    f2, f2, f3
	fnmsubs  f0, f4, f1, f0
	fmuls    f4, f2, f0

lbl_80094318:
	fmuls    f3, f4, f5
	lfs      f2, 0x28(r27)
	lfs      f1, 0x2c(r27)
	lfs      f0, 0x30(r27)
	fmuls    f26, f2, f3
	fmuls    f27, f1, f3
	fmuls    f28, f0, f3
	b        lbl_80094340

lbl_80094338:
	fmr      f27, f28
	fmr      f26, f28

lbl_80094340:
	lfs      f0, 0x3c(r30)
	lfs      f2, lbl_80516C34@sda21(r2)
	fcmpu    cr0, f0, f2
	beq      lbl_800943FC
	lis      r3, 0x0019660D@ha
	lwz      r0, 0xc4(r30)
	addi     r6, r3, 0x0019660D@l
	lfs      f3, lbl_80516C30@sda21(r2)
	mullw    r3, r0, r6
	lfs      f1, lbl_80516C44@sda21(r2)
	addi     r5, r1, 0x3c
	addis    r3, r3, 0x3c6f
	addi     r0, r3, -3233
	stw      r0, 0xc4(r30)
	srwi     r0, r0, 0x10
	extsh    r4, r0
	lwz      r0, 0xc4(r30)
	mullw    r3, r0, r6
	addis    r3, r3, 0x3c6f
	addi     r3, r3, -3233
	srwi     r0, r3, 9
	stw      r3, 0xc4(r30)
	oris     r0, r0, 0x3f80
	stw      r0, 0x2c(r1)
	lfs      f2, 0x40(r30)
	lfs      f0, 0x2c(r1)
	fsubs    f0, f0, f3
	fadds    f0, f0, f0
	fsubs    f0, f0, f3
	fmuls    f0, f1, f0
	fmuls    f0, f2, f0
	fctiwz   f0, f0
	stfd     f0, 0x78(r1)
	lwz      r3, 0x7c(r1)
	bl       JPAGetYZRotateMtx__FssPA4_f
	addi     r4, r1, 0x3c
	addi     r3, r27, 0x48
	mr       r5, r4
	bl       PSMTXConcat
	lfs      f3, 0x3c(r30)
	lfs      f0, 0x44(r1)
	lfs      f1, 0x54(r1)
	lfs      f2, 0x64(r1)
	fmuls    f0, f3, f0
	fmuls    f1, f3, f1
	fmuls    f2, f3, f2
	b        lbl_80094404

lbl_800943FC:
	fmr      f1, f2
	fmr      f0, f2

lbl_80094404:
	lfs      f4, 0x44(r30)
	lfs      f3, lbl_80516C34@sda21(r2)
	fcmpu    cr0, f4, f3
	beq      lbl_800944C4
	lis      r3, 0x0019660D@ha
	lwz      r0, 0xc4(r30)
	addi     r4, r3, 0x0019660D@l
	lfs      f7, lbl_80516C30@sda21(r2)
	mullw    r3, r0, r4
	lfs      f6, lbl_80516C3C@sda21(r2)
	addis    r3, r3, 0x3c6f
	addi     r0, r3, -3233
	stw      r0, 0xc4(r30)
	srwi     r0, r0, 9
	oris     r3, r0, 0x3f80
	lwz      r0, 0xc4(r30)
	stw      r3, 0x10(r1)
	mullw    r3, r0, r4
	lfs      f4, 0x44(r30)
	lfs      f3, 0x10(r1)
	fsubs    f3, f3, f7
	addis    r3, r3, 0x3c6f
	addi     r0, r3, -3233
	fsubs    f3, f3, f6
	stw      r0, 0xc4(r30)
	srwi     r0, r0, 9
	oris     r3, r0, 0x3f80
	lwz      r0, 0xc4(r30)
	fmuls    f3, f4, f3
	stw      r3, 0xc(r1)
	mullw    r3, r0, r4
	lfs      f5, 0x44(r30)
	lfs      f4, 0xc(r1)
	fsubs    f4, f4, f7
	addis    r3, r3, 0x3c6f
	addi     r3, r3, -3233
	fsubs    f4, f4, f6
	srwi     r0, r3, 9
	stw      r3, 0xc4(r30)
	oris     r0, r0, 0x3f80
	stw      r0, 8(r1)
	fmuls    f9, f5, f4
	lfs      f5, 0x44(r30)
	lfs      f4, 8(r1)
	fsubs    f4, f4, f7
	fsubs    f4, f4, f6
	fmuls    f8, f5, f4
	b        lbl_800944CC

lbl_800944C4:
	fmr      f9, f3
	fmr      f8, f3

lbl_800944CC:
	lis      r3, 0x0019660D@ha
	lwz      r4, 0xc4(r30)
	addi     r0, r3, 0x0019660D@l
	fadds    f6, f29, f26
	mullw    r3, r4, r0
	fadds    f5, f30, f27
	fadds    f4, f31, f28
	lfs      f7, lbl_80516C30@sda21(r2)
	fadds    f6, f0, f6
	fadds    f1, f1, f5
	addis    r3, r3, 0x3c6f
	fadds    f0, f2, f4
	addi     r3, r3, -3233
	fadds    f2, f8, f6
	srwi     r0, r3, 9
	stw      r3, 0xc4(r30)
	oris     r0, r0, 0x3f80
	stw      r0, 0x28(r1)
	fadds    f0, f3, f0
	lwz      r3, 0(r28)
	fadds    f1, f9, f1
	lfs      f4, 0x28(r1)
	lfs      f3, 0x48(r3)
	fsubs    f4, f4, f7
	fadds    f4, f4, f4
	fsubs    f4, f4, f7
	fmadds   f3, f4, f3, f7
	fmuls    f2, f3, f2
	fmuls    f1, f3, f1
	fmuls    f0, f3, f0
	stfs     f2, 0x30(r26)
	stfs     f1, 0x34(r26)
	stfs     f0, 0x38(r26)
	lwz      r3, 0xe8(r30)
	lwz      r3, 0x2c(r3)
	lwz      r3, 0(r3)
	lwz      r0, 8(r3)
	rlwinm.  r0, r0, 0, 0x1d, 0x1d
	beq      lbl_80094598
	lfs      f1, 0x30(r26)
	lfs      f0, 0(r30)
	fmuls    f0, f1, f0
	stfs     f0, 0x30(r26)
	lfs      f1, 0x34(r26)
	lfs      f0, 4(r30)
	fmuls    f0, f1, f0
	stfs     f0, 0x34(r26)
	lfs      f1, 0x38(r26)
	lfs      f0, 8(r30)
	fmuls    f0, f1, f0
	stfs     f0, 0x38(r26)

lbl_80094598:
	addi     r4, r26, 0x30
	addi     r3, r27, 0xa8
	mr       r5, r4
	bl       PSMTXMultVecSR
	lfs      f0, lbl_80516C34@sda21(r2)
	lis      r4, 0x0019660D@ha
	lis      r3, 0x4330
	lfs      f3, lbl_80516C30@sda21(r2)
	stfs     f0, 0x44(r26)
	addi     r0, r4, 0x0019660D@l
	li       r4, 0
	lfd      f1, lbl_80516C50@sda21(r2)
	stfs     f0, 0x40(r26)
	cmplwi   r31, 0
	stfs     f0, 0x3c(r26)
	lwz      r5, 0xc4(r30)
	stw      r3, 0x78(r1)
	mullw    r3, r5, r0
	addis    r3, r3, 0x3c6f
	addi     r5, r3, -3233
	srwi     r3, r5, 9
	stw      r5, 0xc4(r30)
	oris     r3, r3, 0x3f80
	stw      r3, 0x34(r1)
	lwz      r3, 0(r28)
	lfs      f0, 0x34(r1)
	lfs      f2, 0x64(r3)
	fsubs    f0, f0, f3
	fnmsubs  f0, f2, f0, f3
	stfs     f0, 0x70(r26)
	stfs     f3, 0x74(r26)
	stw      r4, 0x78(r26)
	lfs      f4, 0xcc(r27)
	lfs      f2, 0xbc(r27)
	lfs      f0, 0xac(r27)
	stfs     f0, 0x54(r26)
	stfs     f2, 0x58(r26)
	stfs     f4, 0x5c(r26)
	lbz      r3, 0x108(r30)
	stb      r3, 0x8c(r26)
	lbz      r3, 0x109(r30)
	stb      r3, 0x8d(r26)
	lbz      r3, 0x10a(r30)
	stb      r3, 0x8e(r26)
	lbz      r3, 0x10b(r30)
	stb      r3, 0x8f(r26)
	lbz      r3, 0x10c(r30)
	stb      r3, 0x90(r26)
	lbz      r3, 0x10d(r30)
	stb      r3, 0x91(r26)
	lbz      r3, 0x10e(r30)
	stb      r3, 0x92(r26)
	lbz      r3, 0x10f(r30)
	stb      r3, 0x93(r26)
	lwz      r3, 0xc4(r30)
	lwz      r4, 0(r29)
	mullw    r3, r3, r0
	lbz      r4, 0x2e(r4)
	stw      r4, 0x7c(r1)
	addis    r3, r3, 0x3c6f
	lfd      f0, 0x78(r1)
	addi     r4, r3, -3233
	srwi     r3, r4, 9
	fsubs    f0, f0, f1
	oris     r3, r3, 0x3f80
	stw      r4, 0xc4(r30)
	stw      r3, 0x30(r1)
	lfs      f1, 0x30(r1)
	fsubs    f1, f1, f3
	fmuls    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 0x70(r1)
	lwz      r3, 0x74(r1)
	stb      r3, 0x95(r26)
	beq      lbl_80094728
	lwz      r3, 0(r31)
	lwz      r3, 8(r3)
	clrlwi.  r3, r3, 0x1f
	beq      lbl_80094728
	lwz      r3, 0xc4(r30)
	mullw    r3, r3, r0
	addis    r3, r3, 0x3c6f
	addi     r3, r3, -3233
	srwi     r0, r3, 9
	stw      r3, 0xc4(r30)
	oris     r0, r0, 0x3f80
	stw      r0, 0x24(r1)
	lwz      r3, 0(r31)
	lfs      f1, 0x24(r1)
	lfs      f0, 0x24(r3)
	fsubs    f1, f1, f3
	lfs      f2, 0xfc(r30)
	fadds    f1, f1, f1
	fsubs    f1, f1, f3
	fmadds   f0, f1, f0, f3
	fmuls    f0, f2, f0
	stfs     f0, 0x68(r26)
	stfs     f0, 0x64(r26)
	stfs     f0, 0x60(r26)
	b        lbl_80094738

lbl_80094728:
	lfs      f0, 0xfc(r30)
	stfs     f0, 0x68(r26)
	stfs     f0, 0x64(r26)
	stfs     f0, 0x60(r26)

lbl_80094738:
	li       r0, 0xff
	cmplwi   r31, 0
	stb      r0, 0x96(r26)
	beq      lbl_800947A8
	lwz      r3, 0(r31)
	lwz      r0, 8(r3)
	rlwinm.  r0, r0, 0, 0xe, 0xe
	beq      lbl_800947A8
	lis      r3, 0x0019660D@ha
	lwz      r4, 0xc4(r30)
	addi     r0, r3, 0x0019660D@l
	lfs      f2, lbl_80516C30@sda21(r2)
	mullw    r3, r4, r0
	addis    r3, r3, 0x3c6f
	addi     r3, r3, -3233
	srwi     r0, r3, 9
	stw      r3, 0xc4(r30)
	oris     r0, r0, 0x3f80
	stw      r0, 0x20(r1)
	lwz      r3, 0(r31)
	lfs      f1, 0x20(r1)
	lfs      f0, 0x44(r3)
	fsubs    f1, f1, f2
	fadds    f1, f1, f1
	fsubs    f1, f1, f2
	fmadds   f0, f1, f0, f2
	stfs     f0, 0x6c(r26)
	b        lbl_800947B0

lbl_800947A8:
	lfs      f0, lbl_80516C30@sda21(r2)
	stfs     f0, 0x6c(r26)

lbl_800947B0:
	cmplwi   r31, 0
	beq      lbl_800948E4
	lwz      r3, 0(r31)
	lwz      r0, 8(r3)
	rlwinm.  r0, r0, 0, 7, 7
	beq      lbl_800948D4
	lis      r3, 0x0019660D@ha
	lwz      r0, 0xc4(r30)
	addi     r4, r3, 0x0019660D@l
	lfs      f3, lbl_80516C30@sda21(r2)
	mullw    r3, r0, r4
	lfs      f1, lbl_80516C3C@sda21(r2)
	addis    r3, r3, 0x3c6f
	addi     r3, r3, -3233
	srwi     r0, r3, 9
	stw      r3, 0xc4(r30)
	oris     r0, r0, 0x3f80
	stw      r0, 0x1c(r1)
	lwz      r3, 0(r31)
	lfs      f0, 0x1c(r1)
	lfs      f4, 0x50(r3)
	fsubs    f2, f0, f3
	lfs      f0, 0x4c(r3)
	fsubs    f1, f2, f1
	fmadds   f0, f4, f1, f0
	fctiwz   f0, f0
	stfd     f0, 0x78(r1)
	lwz      r0, 0x7c(r1)
	sth      r0, 0x88(r26)
	lwz      r0, 0xc4(r30)
	mullw    r3, r0, r4
	addis    r3, r3, 0x3c6f
	addi     r3, r3, -3233
	srwi     r0, r3, 9
	stw      r3, 0xc4(r30)
	oris     r0, r0, 0x3f80
	stw      r0, 0x18(r1)
	lwz      r3, 0(r31)
	lfs      f0, 0x18(r1)
	lfs      f1, 0x58(r3)
	fsubs    f0, f0, f3
	lfs      f2, 0x54(r3)
	fadds    f0, f0, f0
	fsubs    f0, f0, f3
	fmadds   f0, f1, f0, f3
	fmuls    f0, f2, f0
	fctiwz   f0, f0
	stfd     f0, 0x70(r1)
	lwz      r0, 0x74(r1)
	sth      r0, 0x8a(r26)
	lwz      r0, 0xc4(r30)
	mullw    r3, r0, r4
	addis    r3, r3, 0x3c6f
	addi     r3, r3, -3233
	srwi     r0, r3, 9
	stw      r3, 0xc4(r30)
	oris     r0, r0, 0x3f80
	stw      r0, 0x14(r1)
	lwz      r3, 0(r31)
	lfs      f1, 0x14(r1)
	lfs      f0, 0x5c(r3)
	fsubs    f1, f1, f3
	fadds    f1, f1, f1
	fsubs    f1, f1, f3
	fcmpo    cr0, f1, f0
	bge      lbl_800948C0
	lha      r0, 0x8a(r26)
	b        lbl_800948CC

lbl_800948C0:
	lha      r0, 0x8a(r26)
	neg      r0, r0
	extsh    r0, r0

lbl_800948CC:
	sth      r0, 0x8a(r26)
	b        lbl_800948F0

lbl_800948D4:
	li       r0, 0
	sth      r0, 0x88(r26)
	sth      r0, 0x8a(r26)
	b        lbl_800948F0

lbl_800948E4:
	li       r0, 0
	sth      r0, 0x88(r26)
	sth      r0, 0x8a(r26)

lbl_800948F0:
	psq_l    f31, 248(r1), 0, qr0
	lfd      f31, 0xf0(r1)
	psq_l    f30, 232(r1), 0, qr0
	lfd      f30, 0xe0(r1)
	psq_l    f29, 216(r1), 0, qr0
	lfd      f29, 0xd0(r1)
	psq_l    f28, 200(r1), 0, qr0
	lfd      f28, 0xc0(r1)
	psq_l    f27, 184(r1), 0, qr0
	lfd      f27, 0xb0(r1)
	psq_l    f26, 168(r1), 0, qr0
	lfd      f26, 0xa0(r1)
	lmw      r26, 0x88(r1)
	lwz      r0, 0x104(r1)
	mtlr     r0
	addi     r1, r1, 0x100
	blr
	*/
}

/*
 * --INFO--
 * Address:	80094934
 * Size:	0006A8
 */
void JPABaseParticle::init_c(JPAEmitterWorkData*, JPABaseParticle*)
{
	/*
	stwu     r1, -0x90(r1)
	li       r7, -1
	lfs      f7, lbl_80516C34@sda21(r2)
	li       r0, 4
	lwz      r6, 4(r4)
	lwz      r4, 0(r4)
	lwz      r6, 0x24(r6)
	sth      r7, 0x80(r3)
	lwz      r7, 0(r6)
	lha      r7, 0x40(r7)
	sth      r7, 0x82(r3)
	stfs     f7, 0x84(r3)
	stw      r0, 0x7c(r3)
	lfs      f0, 0xc(r5)
	stfs     f0, 0xc(r3)
	lfs      f0, 0x10(r5)
	stfs     f0, 0x10(r3)
	lfs      f0, 0x14(r5)
	stfs     f0, 0x14(r3)
	lwz      r7, 0(r6)
	lfs      f8, 0xc(r7)
	fcmpu    cr0, f7, f8
	beq      lbl_80094AD8
	lis      r7, 0x0019660D@ha
	lwz      r0, 0xc4(r4)
	addi     r9, r7, 0x0019660D@l
	lfs      f6, lbl_80516C30@sda21(r2)
	mullw    r8, r0, r9
	lfs      f5, lbl_80516C3C@sda21(r2)
	lis      r7, __float_epsilon@ha
	lfs      f2, lbl_80516C38@sda21(r2)
	addis    r8, r8, 0x3c6f
	addi     r0, r8, -3233
	stw      r0, 0xc4(r4)
	srwi     r0, r0, 9
	oris     r8, r0, 0x3f80
	lwz      r0, 0xc4(r4)
	stw      r8, 0x1c(r1)
	mullw    r8, r0, r9
	lfs      f0, 0x1c(r1)
	fsubs    f0, f0, f6
	addis    r8, r8, 0x3c6f
	addi     r0, r8, -3233
	fsubs    f0, f0, f5
	stw      r0, 0xc4(r4)
	srwi     r0, r0, 9
	oris     r8, r0, 0x3f80
	lwz      r0, 0xc4(r4)
	stw      r8, 0x18(r1)
	mullw    r8, r0, r9
	lfs      f1, 0x18(r1)
	fsubs    f1, f1, f6
	addis    r8, r8, 0x3c6f
	addi     r0, r8, -3233
	fsubs    f10, f1, f5
	stw      r0, 0xc4(r4)
	srwi     r0, r0, 9
	oris     r8, r0, 0x3f80
	lwz      r0, 0xc4(r4)
	fmuls    f1, f10, f10
	stw      r8, 0x14(r1)
	mullw    r8, r0, r9
	lfs      f3, 0x14(r1)
	fsubs    f3, f3, f6
	addis    r8, r8, 0x3c6f
	addi     r8, r8, -3233
	fsubs    f9, f3, f5
	srwi     r0, r8, 9
	stw      r8, 0xc4(r4)
	oris     r0, r0, 0x3f80
	fmadds   f3, f9, f9, f1
	stw      r0, 0x24(r1)
	lfs      f1, __float_epsilon@l(r7)
	lfs      f4, 0x24(r1)
	fmuls    f1, f2, f1
	fmadds   f11, f0, f0, f3
	fsubs    f2, f4, f6
	fcmpo    cr0, f11, f1
	fmuls    f4, f8, f2
	cror     2, 0, 2
	beq      lbl_80094AB4
	fcmpo    cr0, f11, f7
	cror     2, 0, 2
	bne      lbl_80094A88
	b        lbl_80094AA4

lbl_80094A88:
	frsqrte  f3, f11
	lfs      f1, lbl_80516C40@sda21(r2)
	frsp     f3, f3
	fmuls    f2, f3, f3
	fmuls    f3, f5, f3
	fnmsubs  f1, f11, f2, f1
	fmuls    f11, f3, f1

lbl_80094AA4:
	fmuls    f1, f11, f4
	fmuls    f9, f9, f1
	fmuls    f10, f10, f1
	fmuls    f0, f0, f1

lbl_80094AB4:
	lfs      f1, 0xc(r3)
	fadds    f1, f1, f9
	stfs     f1, 0xc(r3)
	lfs      f1, 0x10(r3)
	fadds    f1, f1, f10
	stfs     f1, 0x10(r3)
	lfs      f1, 0x14(r3)
	fadds    f0, f1, f0
	stfs     f0, 0x14(r3)

lbl_80094AD8:
	lwz      r7, 0xe8(r4)
	lwz      r7, 0x2c(r7)
	lwz      r7, 0(r7)
	lwz      r0, 8(r7)
	rlwinm.  r0, r0, 0, 0x1b, 0x1b
	beq      lbl_80094AFC
	lwz      r0, 0x7c(r3)
	ori      r0, r0, 0x20
	stw      r0, 0x7c(r3)

lbl_80094AFC:
	lfs      f0, 0x18(r5)
	lis      r8, 0x0019660D@ha
	addi     r10, r8, 0x0019660D@l
	lfs      f5, lbl_80516C30@sda21(r2)
	stfs     f0, 0x18(r3)
	lis      r7, __float_epsilon@ha
	lfs      f2, lbl_80516C38@sda21(r2)
	lfs      f0, 0x1c(r5)
	stfs     f0, 0x1c(r3)
	lfs      f0, 0x20(r5)
	stfs     f0, 0x20(r3)
	lwz      r0, 0xc4(r4)
	mullw    r8, r0, r10
	addis    r8, r8, 0x3c6f
	addi     r0, r8, -3233
	stw      r0, 0xc4(r4)
	srwi     r0, r0, 9
	oris     r9, r0, 0x3f80
	lwz      r0, 0xc4(r4)
	lwz      r11, 0(r6)
	mullw    r8, r0, r10
	stw      r9, 0x20(r1)
	lfs      f4, 0x10(r11)
	lfs      f0, 0x20(r1)
	lfs      f3, 0x14(r11)
	fsubs    f0, f0, f5
	addis    r8, r8, 0x3c6f
	addi     r0, r8, -3233
	fadds    f0, f0, f0
	stw      r0, 0xc4(r4)
	srwi     r0, r0, 9
	oris     r8, r0, 0x3f80
	lwz      r0, 0xc4(r4)
	fsubs    f1, f0, f5
	stw      r8, 0x10(r1)
	mullw    r8, r0, r10
	fmadds   f1, f3, f1, f5
	lfs      f0, 0x10(r1)
	fsubs    f0, f0, f5
	fmuls    f8, f4, f1
	addis    r8, r8, 0x3c6f
	addi     r0, r8, -3233
	fadds    f0, f0, f0
	stw      r0, 0xc4(r4)
	srwi     r0, r0, 9
	oris     r8, r0, 0x3f80
	lwz      r0, 0xc4(r4)
	fsubs    f0, f0, f5
	stw      r8, 0xc(r1)
	mullw    r8, r0, r10
	lfs      f1, 0xc(r1)
	fsubs    f1, f1, f5
	addis    r8, r8, 0x3c6f
	addi     r8, r8, -3233
	fadds    f1, f1, f1
	srwi     r0, r8, 9
	stw      r8, 0xc4(r4)
	oris     r0, r0, 0x3f80
	stw      r0, 8(r1)
	fsubs    f6, f1, f5
	lfs      f1, __float_epsilon@l(r7)
	lfs      f4, 8(r1)
	fmuls    f1, f2, f1
	fsubs    f4, f4, f5
	fmuls    f3, f6, f6
	fadds    f2, f4, f4
	fsubs    f5, f2, f5
	fmadds   f2, f5, f5, f3
	fmadds   f7, f0, f0, f2
	fcmpo    cr0, f7, f1
	cror     2, 0, 2
	beq      lbl_80094C60
	lfs      f1, lbl_80516C34@sda21(r2)
	fcmpo    cr0, f7, f1
	cror     2, 0, 2
	bne      lbl_80094C30
	b        lbl_80094C50

lbl_80094C30:
	frsqrte  f4, f7
	lfs      f3, lbl_80516C3C@sda21(r2)
	lfs      f1, lbl_80516C40@sda21(r2)
	frsp     f4, f4
	fmuls    f2, f4, f4
	fmuls    f3, f3, f4
	fnmsubs  f1, f7, f2, f1
	fmuls    f7, f3, f1

lbl_80094C50:
	fmuls    f1, f7, f8
	fmuls    f5, f5, f1
	fmuls    f6, f6, f1
	fmuls    f0, f0, f1

lbl_80094C60:
	lwz      r4, 0(r6)
	lfs      f1, 0x30(r5)
	lfs      f2, 0x18(r4)
	fmadds   f1, f1, f2, f5
	stfs     f1, 0x30(r3)
	lfs      f1, 0x34(r5)
	fmadds   f1, f1, f2, f6
	stfs     f1, 0x34(r3)
	lfs      f1, 0x38(r5)
	fmadds   f0, f1, f2, f0
	stfs     f0, 0x38(r3)
	lwz      r4, 0(r6)
	lfs      f0, 0x48(r5)
	lfs      f1, 0x18(r4)
	fmuls    f0, f0, f1
	stfs     f0, 0x3c(r3)
	lfs      f0, 0x4c(r5)
	fmuls    f0, f0, f1
	stfs     f0, 0x40(r3)
	lfs      f0, 0x50(r5)
	fmuls    f0, f0, f1
	stfs     f0, 0x44(r3)
	lfs      f0, 0x70(r5)
	stfs     f0, 0x70(r3)
	lwz      r4, 0(r6)
	lwz      r0, 8(r4)
	rlwinm.  r0, r0, 0, 0xa, 0xa
	beq      lbl_80094CDC
	lfs      f0, 0x74(r5)
	stfs     f0, 0x74(r3)
	b        lbl_80094CF0

lbl_80094CDC:
	lwz      r0, 0x7c(r3)
	lfs      f0, lbl_80516C30@sda21(r2)
	ori      r0, r0, 0x40
	stw      r0, 0x7c(r3)
	stfs     f0, 0x74(r3)

lbl_80094CF0:
	lwz      r0, 0x78(r5)
	stw      r0, 0x78(r3)
	lfs      f0, 0x3c(r3)
	stfs     f0, 0x48(r3)
	lfs      f0, 0x40(r3)
	stfs     f0, 0x4c(r3)
	lfs      f0, 0x44(r3)
	stfs     f0, 0x50(r3)
	lfs      f3, 0x70(r3)
	lfs      f2, 0x74(r3)
	lfs      f1, 0x30(r3)
	fmuls    f4, f3, f2
	lfs      f0, 0x48(r3)
	lfs      f2, 0x34(r3)
	fadds    f0, f1, f0
	lfs      f1, 0x4c(r3)
	lfs      f3, 0x38(r3)
	fadds    f1, f2, f1
	lfs      f2, 0x50(r3)
	fmuls    f0, f4, f0
	fadds    f2, f3, f2
	fmuls    f1, f4, f1
	stfs     f0, 0x24(r3)
	fmuls    f0, f4, f2
	stfs     f1, 0x28(r3)
	stfs     f0, 0x2c(r3)
	lfs      f0, 0x54(r5)
	stfs     f0, 0x54(r3)
	lfs      f0, 0x58(r5)
	stfs     f0, 0x58(r3)
	lfs      f0, 0x5c(r5)
	stfs     f0, 0x5c(r3)
	lwz      r4, 0(r6)
	lwz      r0, 8(r4)
	rlwinm.  r0, r0, 0, 0xf, 0xf
	beq      lbl_80094DB0
	lfs      f1, 0x60(r5)
	lfs      f0, 0x28(r4)
	fmuls    f0, f1, f0
	stfs     f0, 0x68(r3)
	stfs     f0, 0x60(r3)
	lwz      r4, 0(r6)
	lfs      f1, 0x64(r5)
	lfs      f0, 0x28(r4)
	fmuls    f0, f1, f0
	stfs     f0, 0x6c(r3)
	stfs     f0, 0x64(r3)
	b        lbl_80094DC4

lbl_80094DB0:
	lfs      f0, lbl_80516C30@sda21(r2)
	stfs     f0, 0x6c(r3)
	stfs     f0, 0x64(r3)
	stfs     f0, 0x68(r3)
	stfs     f0, 0x60(r3)

lbl_80094DC4:
	lwz      r7, 0(r6)
	lwz      r0, 8(r7)
	rlwinm.  r0, r0, 0, 0xd, 0xd
	beq      lbl_80094EFC
	lbz      r4, 0x8c(r5)
	lis      r0, 0x4330
	stw      r0, 0x28(r1)
	lfd      f2, lbl_80516C50@sda21(r2)
	stw      r4, 0x2c(r1)
	lfs      f0, 0x30(r7)
	lfd      f1, 0x28(r1)
	stw      r0, 0x38(r1)
	fsubs    f1, f1, f2
	stw      r0, 0x48(r1)
	fmuls    f0, f1, f0
	stw      r0, 0x58(r1)
	stw      r0, 0x68(r1)
	fctiwz   f0, f0
	stw      r0, 0x78(r1)
	stfd     f0, 0x30(r1)
	lwz      r0, 0x34(r1)
	stb      r0, 0x8c(r3)
	lbz      r0, 0x8d(r5)
	lwz      r4, 0(r6)
	stw      r0, 0x3c(r1)
	lfs      f0, 0x30(r4)
	lfd      f1, 0x38(r1)
	fsubs    f1, f1, f2
	fmuls    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 0x40(r1)
	lwz      r0, 0x44(r1)
	stb      r0, 0x8d(r3)
	lbz      r0, 0x8e(r5)
	lwz      r4, 0(r6)
	stw      r0, 0x4c(r1)
	lfs      f0, 0x30(r4)
	lfd      f1, 0x48(r1)
	fsubs    f1, f1, f2
	fmuls    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 0x50(r1)
	lwz      r0, 0x54(r1)
	stb      r0, 0x8e(r3)
	lbz      r0, 0x90(r5)
	lwz      r4, 0(r6)
	stw      r0, 0x5c(r1)
	lfs      f0, 0x30(r4)
	lfd      f1, 0x58(r1)
	fsubs    f1, f1, f2
	fmuls    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 0x60(r1)
	lwz      r0, 0x64(r1)
	stb      r0, 0x90(r3)
	lbz      r0, 0x91(r5)
	lwz      r4, 0(r6)
	stw      r0, 0x6c(r1)
	lfs      f0, 0x30(r4)
	lfd      f1, 0x68(r1)
	fsubs    f1, f1, f2
	fmuls    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 0x70(r1)
	lwz      r0, 0x74(r1)
	stb      r0, 0x91(r3)
	lbz      r0, 0x92(r5)
	lwz      r4, 0(r6)
	stw      r0, 0x7c(r1)
	lfs      f0, 0x30(r4)
	lfd      f1, 0x78(r1)
	fsubs    f1, f1, f2
	fmuls    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 0x80(r1)
	lwz      r0, 0x84(r1)
	stb      r0, 0x92(r3)
	b        lbl_80094F40

lbl_80094EFC:
	lbz      r0, 0x34(r7)
	stb      r0, 0x8c(r3)
	lbz      r0, 0x35(r7)
	stb      r0, 0x8d(r3)
	lbz      r0, 0x36(r7)
	stb      r0, 0x8e(r3)
	lbz      r0, 0x37(r7)
	stb      r0, 0x8f(r3)
	lwz      r4, 0(r6)
	lbz      r0, 0x38(r4)
	stb      r0, 0x90(r3)
	lbz      r0, 0x39(r4)
	stb      r0, 0x91(r3)
	lbz      r0, 0x3a(r4)
	stb      r0, 0x92(r3)
	lbz      r0, 0x3b(r4)
	stb      r0, 0x93(r3)

lbl_80094F40:
	li       r0, 0xff
	stb      r0, 0x96(r3)
	lwz      r8, 0(r6)
	lwz      r0, 8(r8)
	rlwinm.  r0, r0, 0, 0xe, 0xe
	beq      lbl_80094FA0
	lbz      r4, 0x96(r5)
	lis      r0, 0x4330
	lbz      r7, 0x8f(r5)
	addi     r4, r4, 1
	stw      r0, 0x80(r1)
	mullw    r0, r7, r4
	lfd      f2, lbl_80516C50@sda21(r2)
	lfs      f0, 0x2c(r8)
	rlwinm   r0, r0, 0x18, 0x18, 0x1f
	stw      r0, 0x84(r1)
	lfd      f1, 0x80(r1)
	fsubs    f1, f1, f2
	fmuls    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 0x78(r1)
	lwz      r0, 0x7c(r1)
	stb      r0, 0x8f(r3)
	b        lbl_80094FA8

lbl_80094FA0:
	lbz      r0, 0x37(r8)
	stb      r0, 0x8f(r3)

lbl_80094FA8:
	lhz      r0, 0x88(r5)
	sth      r0, 0x88(r3)
	lwz      r4, 0(r6)
	lwz      r0, 8(r4)
	rlwinm.  r0, r0, 0, 7, 7
	beq      lbl_80094FCC
	lha      r0, 0x46(r4)
	sth      r0, 0x8a(r3)
	b        lbl_80094FD4

lbl_80094FCC:
	li       r0, 0
	sth      r0, 0x8a(r3)

lbl_80094FD4:
	addi     r1, r1, 0x90
	blr
	*/
}

/*
 * --INFO--
 * Address:	80094FDC
 * Size:	0002A8
 */
void JPABaseParticle::calc_p(JPAEmitterWorkData*)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	mr       r31, r4
	stw      r30, 0x28(r1)
	mr       r30, r3
	stw      r29, 0x24(r1)
	lha      r3, 0x80(r3)
	addi     r0, r3, 1
	sth      r0, 0x80(r30)
	extsh    r3, r0
	lha      r0, 0x82(r30)
	cmpw     r3, r0
	blt      lbl_80095020
	li       r3, 1
	b        lbl_80095268

lbl_80095020:
	lha      r4, 0x80(r30)
	lis      r3, 0x4330
	xoris    r0, r0, 0x8000
	stw      r3, 8(r1)
	xoris    r4, r4, 0x8000
	lfd      f2, lbl_80516C48@sda21(r2)
	stw      r4, 0xc(r1)
	lfd      f0, 8(r1)
	stw      r0, 0x14(r1)
	fsubs    f1, f0, f2
	stw      r3, 0x10(r1)
	lfd      f0, 0x10(r1)
	fsubs    f0, f0, f2
	fdivs    f0, f1, f0
	stfs     f0, 0x84(r30)
	lwz      r0, 0x7c(r30)
	rlwinm.  r0, r0, 0, 0x1a, 0x1a
	beq      lbl_80095080
	lfs      f0, 0x138(r31)
	stfs     f0, 0x18(r30)
	lfs      f0, 0x13c(r31)
	stfs     f0, 0x1c(r30)
	lfs      f0, 0x140(r31)
	stfs     f0, 0x20(r30)

lbl_80095080:
	lfs      f0, lbl_80516C34@sda21(r2)
	stfs     f0, 0x50(r30)
	stfs     f0, 0x4c(r30)
	stfs     f0, 0x48(r30)
	lwz      r0, 0x7c(r30)
	rlwinm.  r0, r0, 0, 0x19, 0x19
	bne      lbl_800950AC
	lwz      r3, 4(r31)
	mr       r4, r31
	mr       r5, r30
	bl       calcField__11JPAResourceFP18JPAEmitterWorkDataP15JPABaseParticle

lbl_800950AC:
	lfs      f1, 0x48(r30)
	lfs      f0, 0x3c(r30)
	fadds    f0, f1, f0
	stfs     f0, 0x48(r30)
	lfs      f1, 0x4c(r30)
	lfs      f0, 0x40(r30)
	fadds    f0, f1, f0
	stfs     f0, 0x4c(r30)
	lfs      f1, 0x50(r30)
	lfs      f0, 0x44(r30)
	fadds    f0, f1, f0
	stfs     f0, 0x50(r30)
	lwz      r3, 0(r31)
	lfs      f0, 0x30(r30)
	lfs      f1, 0x48(r3)
	fmuls    f0, f0, f1
	stfs     f0, 0x30(r30)
	lfs      f0, 0x34(r30)
	fmuls    f0, f0, f1
	stfs     f0, 0x34(r30)
	lfs      f0, 0x38(r30)
	fmuls    f0, f0, f1
	stfs     f0, 0x38(r30)
	lfs      f3, 0x70(r30)
	lfs      f2, 0x74(r30)
	lfs      f1, 0x30(r30)
	lfs      f0, 0x48(r30)
	fmuls    f4, f3, f2
	lfs      f2, 0x34(r30)
	fadds    f0, f1, f0
	lfs      f1, 0x4c(r30)
	lfs      f3, 0x38(r30)
	fadds    f1, f2, f1
	lfs      f2, 0x50(r30)
	fmuls    f0, f4, f0
	fadds    f2, f3, f2
	fmuls    f1, f4, f1
	stfs     f0, 0x24(r30)
	fmuls    f0, f4, f2
	stfs     f1, 0x28(r30)
	stfs     f0, 0x2c(r30)
	lwz      r4, 0(r31)
	lwz      r3, 0xf0(r4)
	cmplwi   r3, 0
	beq      lbl_80095174
	lwz      r12, 0(r3)
	mr       r5, r30
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl

lbl_80095174:
	lwz      r0, 0x7c(r30)
	rlwinm.  r0, r0, 0, 0x1e, 0x1e
	beq      lbl_80095188
	li       r3, 1
	b        lbl_80095268

lbl_80095188:
	lwz      r3, 4(r31)
	mr       r4, r31
	mr       r5, r30
	bl       calc_p__11JPAResourceFP18JPAEmitterWorkDataP15JPABaseParticle
	lhz      r3, 0x88(r30)
	lha      r0, 0x8a(r30)
	add      r0, r3, r0
	sth      r0, 0x88(r30)
	lwz      r3, 4(r31)
	lwz      r0, 0x24(r3)
	cmplwi   r0, 0
	beq      lbl_800951F8
	mr       r3, r30
	mr       r4, r31
	bl       canCreateChild__15JPABaseParticleFP18JPAEmitterWorkData
	clrlwi.  r0, r3, 0x18
	beq      lbl_800951F8
	lwz      r3, 4(r31)
	lwz      r3, 0x24(r3)
	lwz      r3, 0(r3)
	lha      r29, 0x42(r3)
	b        lbl_800951F0

lbl_800951E0:
	lwz      r3, 0(r31)
	mr       r4, r30
	bl       createChild__14JPABaseEmitterFP15JPABaseParticle
	addi     r29, r29, -1

lbl_800951F0:
	cmpwi    r29, 0
	bgt      lbl_800951E0

lbl_800951F8:
	lfs      f1, 0xc(r30)
	li       r3, 0
	lfs      f0, 0x24(r30)
	fadds    f0, f1, f0
	stfs     f0, 0xc(r30)
	lfs      f1, 0x10(r30)
	lfs      f0, 0x28(r30)
	fadds    f0, f1, f0
	stfs     f0, 0x10(r30)
	lfs      f1, 0x14(r30)
	lfs      f0, 0x2c(r30)
	fadds    f0, f1, f0
	stfs     f0, 0x14(r30)
	lfs      f2, 0xc(r30)
	lfs      f1, 0x12c(r31)
	lfs      f0, 0x18(r30)
	lfs      f3, 0x10(r30)
	fmadds   f0, f2, f1, f0
	lfs      f2, 0x130(r31)
	lfs      f1, 0x1c(r30)
	lfs      f5, 0x14(r30)
	lfs      f4, 0x134(r31)
	fmadds   f2, f3, f2, f1
	lfs      f1, 0x20(r30)
	stfs     f0, 0(r30)
	fmadds   f0, f5, f4, f1
	stfs     f2, 4(r30)
	stfs     f0, 8(r30)

lbl_80095268:
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	lwz      r29, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	80095284
 * Size:	000004
 */
void JPAParticleCallBack::execute(JPABaseEmitter*, JPABaseParticle*) { }

/*
 * --INFO--
 * Address:	80095288
 * Size:	000278
 */
void JPABaseParticle::calc_c(JPAEmitterWorkData*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r4
	stw      r30, 0x18(r1)
	mr       r30, r3
	lha      r3, 0x80(r3)
	addi     r0, r3, 1
	sth      r0, 0x80(r30)
	extsh    r3, r0
	lha      r0, 0x82(r30)
	cmpw     r3, r0
	blt      lbl_800952C8
	li       r3, 1
	b        lbl_800954E8

lbl_800952C8:
	lha      r4, 0x80(r30)
	lis      r3, 0x4330
	xoris    r0, r0, 0x8000
	stw      r3, 8(r1)
	xoris    r4, r4, 0x8000
	lfd      f2, lbl_80516C48@sda21(r2)
	stw      r4, 0xc(r1)
	lfd      f0, 8(r1)
	stw      r0, 0x14(r1)
	fsubs    f1, f0, f2
	stw      r3, 0x10(r1)
	lfd      f0, 0x10(r1)
	fsubs    f0, f0, f2
	fdivs    f0, f1, f0
	stfs     f0, 0x84(r30)
	lha      r0, 0x80(r30)
	cmpwi    r0, 0
	beq      lbl_80095420
	lwz      r0, 0x7c(r30)
	rlwinm.  r0, r0, 0, 0x1a, 0x1a
	beq      lbl_80095334
	lfs      f0, 0x138(r31)
	stfs     f0, 0x18(r30)
	lfs      f0, 0x13c(r31)
	stfs     f0, 0x1c(r30)
	lfs      f0, 0x140(r31)
	stfs     f0, 0x20(r30)

lbl_80095334:
	lwz      r3, 4(r31)
	lfs      f2, 0x34(r30)
	lwz      r3, 0x24(r3)
	lfs      f0, lbl_80516C34@sda21(r2)
	lwz      r3, 0(r3)
	lfs      f1, 0x1c(r3)
	fsubs    f1, f2, f1
	stfs     f1, 0x34(r30)
	stfs     f0, 0x50(r30)
	stfs     f0, 0x4c(r30)
	stfs     f0, 0x48(r30)
	lwz      r0, 0x7c(r30)
	rlwinm.  r0, r0, 0, 0x19, 0x19
	bne      lbl_8009537C
	lwz      r3, 4(r31)
	mr       r4, r31
	mr       r5, r30
	bl       calcField__11JPAResourceFP18JPAEmitterWorkDataP15JPABaseParticle

lbl_8009537C:
	lfs      f1, 0x48(r30)
	lfs      f0, 0x3c(r30)
	fadds    f0, f1, f0
	stfs     f0, 0x48(r30)
	lfs      f1, 0x4c(r30)
	lfs      f0, 0x40(r30)
	fadds    f0, f1, f0
	stfs     f0, 0x4c(r30)
	lfs      f1, 0x50(r30)
	lfs      f0, 0x44(r30)
	fadds    f0, f1, f0
	stfs     f0, 0x50(r30)
	lwz      r3, 0(r31)
	lfs      f0, 0x30(r30)
	lfs      f1, 0x48(r3)
	fmuls    f0, f0, f1
	stfs     f0, 0x30(r30)
	lfs      f0, 0x34(r30)
	fmuls    f0, f0, f1
	stfs     f0, 0x34(r30)
	lfs      f0, 0x38(r30)
	fmuls    f0, f0, f1
	stfs     f0, 0x38(r30)
	lfs      f3, 0x70(r30)
	lfs      f2, 0x74(r30)
	lfs      f1, 0x30(r30)
	lfs      f0, 0x48(r30)
	fmuls    f4, f3, f2
	lfs      f2, 0x34(r30)
	fadds    f0, f1, f0
	lfs      f1, 0x4c(r30)
	lfs      f3, 0x38(r30)
	fadds    f1, f2, f1
	lfs      f2, 0x50(r30)
	fmuls    f0, f4, f0
	fadds    f2, f3, f2
	fmuls    f1, f4, f1
	stfs     f0, 0x24(r30)
	fmuls    f0, f4, f2
	stfs     f1, 0x28(r30)
	stfs     f0, 0x2c(r30)

lbl_80095420:
	lwz      r4, 0(r31)
	lwz      r3, 0xf0(r4)
	cmplwi   r3, 0
	beq      lbl_80095444
	lwz      r12, 0(r3)
	mr       r5, r30
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl

lbl_80095444:
	lwz      r0, 0x7c(r30)
	rlwinm.  r0, r0, 0, 0x1e, 0x1e
	beq      lbl_80095458
	li       r3, 1
	b        lbl_800954E8

lbl_80095458:
	lwz      r3, 4(r31)
	mr       r4, r31
	mr       r5, r30
	bl       calc_c__11JPAResourceFP18JPAEmitterWorkDataP15JPABaseParticle
	lhz      r4, 0x88(r30)
	li       r3, 0
	lha      r0, 0x8a(r30)
	add      r0, r4, r0
	sth      r0, 0x88(r30)
	lfs      f1, 0xc(r30)
	lfs      f0, 0x24(r30)
	fadds    f0, f1, f0
	stfs     f0, 0xc(r30)
	lfs      f1, 0x10(r30)
	lfs      f0, 0x28(r30)
	fadds    f0, f1, f0
	stfs     f0, 0x10(r30)
	lfs      f1, 0x14(r30)
	lfs      f0, 0x2c(r30)
	fadds    f0, f1, f0
	stfs     f0, 0x14(r30)
	lfs      f2, 0xc(r30)
	lfs      f1, 0x12c(r31)
	lfs      f0, 0x18(r30)
	lfs      f3, 0x10(r30)
	fmadds   f0, f2, f1, f0
	lfs      f2, 0x130(r31)
	lfs      f1, 0x1c(r30)
	lfs      f5, 0x14(r30)
	fmadds   f2, f3, f2, f1
	lfs      f4, 0x134(r31)
	lfs      f1, 0x20(r30)
	stfs     f0, 0(r30)
	fmadds   f0, f5, f4, f1
	stfs     f2, 4(r30)
	stfs     f0, 8(r30)

lbl_800954E8:
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
 * Address:	80095500
 * Size:	000080
 */
bool JPABaseParticle::canCreateChild(JPAEmitterWorkData*)
{
	/*
	stwu     r1, -0x20(r1)
	lis      r0, 0x4330
	lfd      f2, lbl_80516C48@sda21(r2)
	li       r6, 0
	lha      r5, 0x82(r3)
	lwz      r4, 4(r4)
	addi     r5, r5, -1
	stw      r0, 8(r1)
	xoris    r0, r5, 0x8000
	lwz      r4, 0x24(r4)
	stw      r0, 0xc(r1)
	lwz      r4, 0(r4)
	lfd      f1, 8(r1)
	lfs      f0, 0x3c(r4)
	fsubs    f1, f1, f2
	lha      r0, 0x80(r3)
	fmuls    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 0x10(r1)
	lwz      r3, 0x14(r1)
	subf.    r5, r3, r0
	blt      lbl_80095574
	lbz      r3, 0x44(r4)
	addi     r3, r3, 1
	divw     r0, r5, r3
	mullw    r0, r0, r3
	subf.    r0, r0, r5
	bne      lbl_80095574
	li       r6, 1

lbl_80095574:
	mr       r3, r6
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80095580
 * Size:	000024
 */
float JPABaseParticle::getCalcCurrentPositionX(const JPABaseEmitter*) const
{
	/*
	lwz      r4, 0xe4(r4)
	lfs      f1, 0xc(r3)
	lfs      f0, 0x24(r3)
	lwz      r4, 0x20(r4)
	fadds    f1, f1, f0
	lfs      f0, 0x18(r3)
	lfs      f2, 0x12c(r4)
	fmadds   f1, f2, f1, f0
	blr
	*/
}

/*
 * --INFO--
 * Address:	800955A4
 * Size:	000024
 */
float JPABaseParticle::getCalcCurrentPositionY(const JPABaseEmitter*) const
{
	/*
	lwz      r4, 0xe4(r4)
	lfs      f1, 0x10(r3)
	lfs      f0, 0x28(r3)
	lwz      r4, 0x20(r4)
	fadds    f1, f1, f0
	lfs      f0, 0x1c(r3)
	lfs      f2, 0x130(r4)
	fmadds   f1, f2, f1, f0
	blr
	*/
}

/*
 * --INFO--
 * Address:	800955C8
 * Size:	000024
 */
float JPABaseParticle::getCalcCurrentPositionZ(const JPABaseEmitter*) const
{
	/*
	lwz      r4, 0xe4(r4)
	lfs      f1, 0x14(r3)
	lfs      f0, 0x2c(r3)
	lwz      r4, 0x20(r4)
	fadds    f1, f1, f0
	lfs      f0, 0x20(r3)
	lfs      f2, 0x134(r4)
	fmadds   f1, f2, f1, f0
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000020
 */
float JPABaseParticle::getWidth(const JPABaseEmitter*) const
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000020
 */
float JPABaseParticle::getHeight(const JPABaseEmitter*) const
{
	// UNUSED FUNCTION
}
