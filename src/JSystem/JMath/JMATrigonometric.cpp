#include "Dolphin/math.h"
#include "JSystem/JMath.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .ctors, "wa"  # 0x80472F00 - 0x804732C0
    .4byte __sinit_JMATrigonometric_cpp

    .section .bss  # 0x804EFC20 - 0x8051467C
    .global sincosTable___5JMath
    sincosTable___5JMath:
        .skip 0x6040
    .global atanTable___5JMath
    atanTable___5JMath:
        .skip 0x1020
    .global asinAcosTable___5JMath
    asinAcosTable___5JMath:
        .skip 0x1020

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80516738
    lbl_80516738:
        .4byte 0x00000000
    .global lbl_8051673C
    lbl_8051673C:
        .4byte 0x3FC90FDB
    .global lbl_80516740
    lbl_80516740:
        .float 0.5
    .global lbl_80516744
    lbl_80516744:
        .4byte 0x44800000
    .global lbl_80516748
    lbl_80516748:
        .4byte 0xBFC90FDB
    .global lbl_8051674C
    lbl_8051674C:
        .4byte 0x40490FDB
    .global lbl_80516750
    lbl_80516750:
        .4byte 0xC0490FDB
        .4byte 0x00000000
    .global lbl_80516758
    lbl_80516758:
        .4byte 0x401921FB
        .4byte 0x60000000
    .global lbl_80516760
    lbl_80516760:
        .4byte 0x40A00000
        .4byte 0x00000000
    .global lbl_80516768
    lbl_80516768:
        .4byte 0x3F500000
        .4byte 0x00000000
    .global lbl_80516770
    lbl_80516770:
        .4byte 0x3F490FDB
        .4byte 0x00000000
    .global lbl_80516778
    lbl_80516778:
        .4byte 0x43300000
        .4byte 0x80000000
*/

/*
 * --INFO--
 * Address:	........
 * Size:	0000D4
 */
// void atan___Q25JMath18TAtanTable<1024, float> CFf(void)
float JMath::TAtanTable<1024, float>::atan_(float) const
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80035108
 * Size:	000258
 */
// void atan2___Q25JMath18TAtanTable<1024, float> CFff(void)
float JMath::TAtanTable<1024, float>::atan2_(float param_1, float param_2) const
{
	// const register float zero = 0.0f;
	// float fVar1 = 0.0f;
	float result;
	if (param_1 >= 0.0f) {
		if (param_2 >= 0.0f) {
			if (param_2 >= param_1) {
				// if (param_2 != 0.0f) {
				// 	fVar1 = m_table[(int)((param_1 * 1024.0f) / param_2 +
				// 0.5f)];
				// }
				// return param_2 == 0.0f ? fVar1 : m_table[(int)((param_1 *
				// 1024.0f) / param_2 + 0.5f)]; fVar1 = param_2 == 0.0f ? fVar1
				// : m_table[(int)((param_1 * 1024.0f) / param_2 + 0.5f)];
				// return (param_2 == 0.0f ? 0.0f : m_table[(int)((param_1 *
				// 1024.0f) / param_2 + 0.5f)]);
				result = (param_2 == 0.0f ? 0.0f : m_table[(int)((param_1 * 1024.0f) / param_2 + 0.5f)]);
			} else {
				// if (param_1 != 0.0f) {
				// 	fVar1 = m_table[(int)((param_2 * 1024.0f) / param_1 +
				// 0.5f)];
				// }
				// fVar1 = HALF_PI - fVar1;
				// return HALF_PI - (param_1 == 0.0f ? 0.0f :
				// m_table[(int)((param_2 * 1024.0f) / param_1 + 0.5f)]);
				result = HALF_PI - (param_1 == 0.0f ? 0.0f : m_table[(int)((param_2 * 1024.0f) / param_1 + 0.5f)]);
			}
		} else {
			float fVar2 = -param_2;
			if (fVar2 < param_1) {
				// if (param_1 != 0.0f) {
				// 	fVar1 = m_table[(int)((fVar2 * 1024.0f) / param_1 + 0.5f)];
				// }
				// fVar1 = fVar1 + HALF_PI;
				// return (param_1 == 0.0f ? 0.0f : m_table[(int)((fVar2 *
				// 1024.0f) / param_1 + 0.5f)]) + HALF_PI;
				result = (param_1 == 0.0f ? 0.0f : m_table[(int)((fVar2 * 1024.0f) / param_1 + 0.5f)]) + HALF_PI;
			} else {
				// if (fVar2 != 0.0f) {
				// 	fVar1 = m_table[(int)((param_1 * 1024.0f) / fVar2 + 0.5f)];
				// }
				// fVar1 = PI - fVar1;
				// return PI - (fVar2 == 0.0f ? 0.0f : m_table[(int)((param_1 *
				// 1024.0f) / fVar2 + 0.5f)]);
				result = PI - (fVar2 == 0.0f ? 0.0f : m_table[(int)((param_1 * 1024.0f) / fVar2 + 0.5f)]);
			}
		}
	} else {
		float fVar2 = -param_1;
		if (param_2 < 0.0f) {
			float fVar3 = -param_2;
			if (fVar3 >= fVar2) {
				// if (fVar3 != 0.0f) {
				// 	fVar1 = m_table[(int)((fVar2 * 1024.0f) / fVar3 + 0.5f)];
				// }
				// fVar1 = fVar1 + -PI;
				// return (fVar3 == 0.0f ? 0.0f : m_table[(int)((fVar2 *
				// 1024.0f) / fVar3 + 0.5f)]) + -PI;
				result = (fVar3 == 0.0f ? 0.0f : m_table[(int)((fVar2 * 1024.0f) / fVar3 + 0.5f)]) + -PI;
			} else {
				// if (fVar2 != 0.0f) {
				// 	fVar1 = m_table[(int)((fVar3 * 1024.0f) / fVar2 + 0.5f)];
				// }
				// fVar1 = -HALF_PI - fVar1;
				// return -HALF_PI - (fVar2 == 0.0f ? 0.0f :
				// m_table[(int)((fVar3 * 1024.0f) / fVar2 + 0.5f)]);
				result = -HALF_PI - (fVar2 == 0.0f ? 0.0f : m_table[(int)((fVar3 * 1024.0f) / fVar2 + 0.5f)]);
			}
		} else {
			if (param_2 < fVar2) {
				// if (fVar2 != 0.0f) {
				// 	fVar1 = m_table[(int)((param_2 * 1024.0f) / fVar2 + 0.5f)];
				// }
				// fVar1 = fVar1 + -HALF_PI;
				// return (fVar2 == 0.0f ? 0.0f : m_table[(int)((param_2 *
				// 1024.0f) / fVar2 + 0.5f)]) + -HALF_PI;
				result = (fVar2 == 0.0f ? 0.0f : m_table[(int)((param_2 * 1024.0f) / fVar2 + 0.5f)]) + -HALF_PI;
			} else {
				// if (param_2 != 0.0f) {
				// 	fVar1 = m_table[(int)((fVar2 * 1024.0f) / param_2 + 0.5f)];
				// }
				// fVar1 = -fVar1;
				// return -(param_2 == 0.0f ? 0.0f : m_table[(int)((fVar2 *
				// 1024.0f) / param_2 + 0.5f)]);
				result = -(param_2 == 0.0f ? 0.0f : m_table[(int)((fVar2 * 1024.0f) / param_2 + 0.5f)]);
			}
		}
	}
	// return fVar1;
	return result;
	/*
	lfs      f0, lbl_80516738@sda21(r2)
	stwu     r1, -0x10(r1)
	fcmpo    cr0, f1, f0
	cror     2, 1, 2
	bne      lbl_80035238
	fcmpo    cr0, f2, f0
	cror     2, 1, 2
	bne      lbl_800351AC
	fcmpo    cr0, f2, f1
	cror     2, 1, 2
	bne      lbl_8003516C
	fcmpu    cr0, f0, f2
	bne      lbl_80035140
	b        lbl_80035354

lbl_80035140:
	lfs      f0, lbl_80516744@sda21(r2)
	lfs      f3, lbl_80516740@sda21(r2)
	fmuls    f0, f0, f1
	fdivs    f0, f0, f2
	fadds    f0, f3, f0
	fctiwz   f0, f0
	stfd     f0, 8(r1)
	lwz      r0, 0xc(r1)
	slwi     r0, r0, 2
	lfsx     f0, r3, r0
	b        lbl_80035354

lbl_8003516C:
	fcmpu    cr0, f0, f1
	lfs      f4, lbl_8051673C@sda21(r2)
	bne      lbl_8003517C
	b        lbl_800351A4

lbl_8003517C:
	lfs      f0, lbl_80516744@sda21(r2)
	lfs      f3, lbl_80516740@sda21(r2)
	fmuls    f0, f0, f2
	fdivs    f0, f0, f1
	fadds    f0, f3, f0
	fctiwz   f0, f0
	stfd     f0, 8(r1)
	lwz      r0, 0xc(r1)
	slwi     r0, r0, 2
	lfsx     f0, r3, r0

lbl_800351A4:
	fsubs    f0, f4, f0
	b        lbl_80035354

lbl_800351AC:
	fneg     f4, f2
	fcmpo    cr0, f4, f1
	bge      lbl_800351F8
	fcmpu    cr0, f0, f1
	lfs      f3, lbl_8051673C@sda21(r2)
	bne      lbl_800351C8
	b        lbl_800351F0

lbl_800351C8:
	lfs      f0, lbl_80516744@sda21(r2)
	lfs      f2, lbl_80516740@sda21(r2)
	fmuls    f0, f0, f4
	fdivs    f0, f0, f1
	fadds    f0, f2, f0
	fctiwz   f0, f0
	stfd     f0, 8(r1)
	lwz      r0, 0xc(r1)
	slwi     r0, r0, 2
	lfsx     f0, r3, r0

lbl_800351F0:
	fadds    f0, f3, f0
	b        lbl_80035354

lbl_800351F8:
	fcmpu    cr0, f0, f4
	lfs      f3, lbl_8051674C@sda21(r2)
	bne      lbl_80035208
	b        lbl_80035230

lbl_80035208:
	lfs      f0, lbl_80516744@sda21(r2)
	lfs      f2, lbl_80516740@sda21(r2)
	fmuls    f0, f0, f1
	fdivs    f0, f0, f4
	fadds    f0, f2, f0
	fctiwz   f0, f0
	stfd     f0, 8(r1)
	lwz      r0, 0xc(r1)
	slwi     r0, r0, 2
	lfsx     f0, r3, r0

lbl_80035230:
	fsubs    f0, f3, f0
	b        lbl_80035354

lbl_80035238:
	fcmpo    cr0, f2, f0
	fneg     f4, f1
	bge      lbl_800352D4
	fneg     f3, f2
	fcmpo    cr0, f3, f4
	cror     2, 1, 2
	bne      lbl_80035294
	fcmpu    cr0, f0, f3
	lfs      f2, lbl_80516750@sda21(r2)
	bne      lbl_80035264
	b        lbl_8003528C

lbl_80035264:
	lfs      f0, lbl_80516744@sda21(r2)
	lfs      f1, lbl_80516740@sda21(r2)
	fmuls    f0, f0, f4
	fdivs    f0, f0, f3
	fadds    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 8(r1)
	lwz      r0, 0xc(r1)
	slwi     r0, r0, 2
	lfsx     f0, r3, r0

lbl_8003528C:
	fadds    f0, f2, f0
	b        lbl_80035354

lbl_80035294:
	fcmpu    cr0, f0, f4
	lfs      f2, lbl_80516748@sda21(r2)
	bne      lbl_800352A4
	b        lbl_800352CC

lbl_800352A4:
	lfs      f0, lbl_80516744@sda21(r2)
	lfs      f1, lbl_80516740@sda21(r2)
	fmuls    f0, f0, f3
	fdivs    f0, f0, f4
	fadds    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 8(r1)
	lwz      r0, 0xc(r1)
	slwi     r0, r0, 2
	lfsx     f0, r3, r0

lbl_800352CC:
	fsubs    f0, f2, f0
	b        lbl_80035354

lbl_800352D4:
	fcmpo    cr0, f2, f4
	bge      lbl_8003531C
	fcmpu    cr0, f0, f4
	lfs      f3, lbl_80516748@sda21(r2)
	bne      lbl_800352EC
	b        lbl_80035314

lbl_800352EC:
	lfs      f0, lbl_80516744@sda21(r2)
	lfs      f1, lbl_80516740@sda21(r2)
	fmuls    f0, f0, f2
	fdivs    f0, f0, f4
	fadds    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 8(r1)
	lwz      r0, 0xc(r1)
	slwi     r0, r0, 2
	lfsx     f0, r3, r0

lbl_80035314:
	fadds    f0, f3, f0
	b        lbl_80035354

lbl_8003531C:
	fcmpu    cr0, f0, f2
	bne      lbl_80035328
	b        lbl_80035350

lbl_80035328:
	lfs      f0, lbl_80516744@sda21(r2)
	lfs      f1, lbl_80516740@sda21(r2)
	fmuls    f0, f0, f4
	fdivs    f0, f0, f2
	fadds    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 8(r1)
	lwz      r0, 0xc(r1)
	slwi     r0, r0, 2
	lfsx     f0, r3, r0

lbl_80035350:
	fneg     f0, f0

lbl_80035354:
	fmr      f1, f0
	addi     r1, r1, 0x10
	blr
	*/
}

namespace JMath {
const TSinCosTable<2048, float> sincosTable_;
const TAtanTable<1024, float> atanTable_;
} // namespace JMath

/*
 * --INFO--
 * Address:	80035360
 * Size:	0001C0
 */
// void __sinit_JMATrigonometric_cpp(void)
// {
// 	/*
// 	stwu     r1, -0x60(r1)
// 	mflr     r0
// 	stw      r0, 0x64(r1)
// 	stfd     f31, 0x50(r1)
// 	psq_st   f31, 88(r1), 0, qr0
// 	stfd     f30, 0x40(r1)
// 	psq_st   f30, 72(r1), 0, qr0
// 	stfd     f29, 0x30(r1)
// 	psq_st   f29, 56(r1), 0, qr0
// 	stfd     f28, 0x20(r1)
// 	psq_st   f28, 40(r1), 0, qr0
// 	stw      r31, 0x1c(r1)
// 	stw      r30, 0x18(r1)
// 	stw      r29, 0x14(r1)
// 	lis      r3, sincosTable___5JMath@ha
// 	lis      r4, "__ct__Q23std9pair<f,f>Fv"@ha
// 	addi     r3, r3, sincosTable___5JMath@l
// 	li       r5, 0
// 	addi     r4, r4, "__ct__Q23std9pair<f,f>Fv"@l
// 	li       r6, 8
// 	li       r7, 0x800
// 	bl       __construct_array
// 	lis      r3, sincosTable___5JMath@ha
// 	lfd      f29, lbl_80516778@sda21(r2)
// 	lfd      f31, lbl_80516758@sda21(r2)
// 	addi     r29, r3, sincosTable___5JMath@l
// 	lfd      f30, lbl_80516760@sda21(r2)
// 	li       r30, 0
// 	lis      r31, 0x4330

// lbl_800353D4:
// 	xoris    r0, r30, 0x8000
// 	stw      r31, 8(r1)
// 	stw      r0, 0xc(r1)
// 	lfd      f0, 8(r1)
// 	fsub     f0, f0, f29
// 	fmul     f0, f0, f31
// 	fdiv     f28, f0, f30
// 	fmr      f1, f28
// 	bl       sin
// 	frsp     f0, f1
// 	fmr      f1, f28
// 	stfs     f0, 0(r29)
// 	bl       cos
// 	frsp     f0, f1
// 	addi     r30, r30, 1
// 	cmpwi    r30, 0x800
// 	stfs     f0, 4(r29)
// 	addi     r29, r29, 8
// 	blt      lbl_800353D4
// 	lis      r3, atanTable___5JMath@ha
// 	lfd      f31, lbl_80516778@sda21(r2)
// 	lfd      f30, lbl_80516768@sda21(r2)
// 	addi     r29, r3, atanTable___5JMath@l
// 	li       r30, 0
// 	lis      r31, 0x4330

// lbl_80035438:
// 	xoris    r0, r30, 0x8000
// 	stw      r31, 8(r1)
// 	stw      r0, 0xc(r1)
// 	lfd      f0, 8(r1)
// 	fsub     f0, f0, f31
// 	fmul     f1, f0, f30
// 	bl       atan
// 	frsp     f0, f1
// 	addi     r30, r30, 1
// 	cmplwi   r30, 0x400
// 	stfs     f0, 0(r29)
// 	addi     r29, r29, 4
// 	blt      lbl_80035438
// 	lis      r3, atanTable___5JMath@ha
// 	lfs      f1, lbl_80516738@sda21(r2)
// 	addi     r4, r3, atanTable___5JMath@l
// 	lfs      f0, lbl_80516770@sda21(r2)
// 	lis      r3, asinAcosTable___5JMath@ha
// 	stfs     f1, 0(r4)
// 	lfd      f30, lbl_80516778@sda21(r2)
// 	addi     r29, r3, asinAcosTable___5JMath@l
// 	stfs     f0, 0x1000(r4)
// 	li       r30, 0
// 	lfd      f31, lbl_80516768@sda21(r2)
// 	lis      r31, 0x4330

// lbl_8003549C:
// 	xoris    r0, r30, 0x8000
// 	stw      r31, 8(r1)
// 	stw      r0, 0xc(r1)
// 	lfd      f0, 8(r1)
// 	fsub     f0, f0, f30
// 	fmul     f1, f0, f31
// 	bl       asin
// 	frsp     f0, f1
// 	addi     r30, r30, 1
// 	cmpwi    r30, 0x400
// 	stfs     f0, 0(r29)
// 	addi     r29, r29, 4
// 	blt      lbl_8003549C
// 	lfs      f1, lbl_80516738@sda21(r2)
// 	lis      r3, asinAcosTable___5JMath@ha
// 	lfs      f0, lbl_80516770@sda21(r2)
// 	stfsu    f1, asinAcosTable___5JMath@l(r3)
// 	stfs     f0, 0x1000(r3)
// 	psq_l    f31, 88(r1), 0, qr0
// 	lfd      f31, 0x50(r1)
// 	psq_l    f30, 72(r1), 0, qr0
// 	lfd      f30, 0x40(r1)
// 	psq_l    f29, 56(r1), 0, qr0
// 	lfd      f29, 0x30(r1)
// 	psq_l    f28, 40(r1), 0, qr0
// 	lfd      f28, 0x20(r1)
// 	lwz      r31, 0x1c(r1)
// 	lwz      r30, 0x18(r1)
// 	lwz      r0, 0x64(r1)
// 	lwz      r29, 0x14(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x60
// 	blr
// 	*/
// }

/*
 * --INFO--
 * Address:	80035520
 * Size:	000010
 */
// void __ct__Q23std9pair<float, float> Fv(void)
// std::pair<float, float>::pair()
// {
// 	/*
// 	lfs      f0, lbl_80516738@sda21(r2)
// 	stfs     f0, 0(r3)
// 	stfs     f0, 4(r3)
// 	blr
// 	*/
// }
