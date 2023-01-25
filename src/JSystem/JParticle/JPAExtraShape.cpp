#include "JSystem/JMath.h"
#include "JSystem/JPA/JPAEmitter.h"
#include "JSystem/JPA/JPAShape.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80516BD0
    lbl_80516BD0:
        .float 1.0
        .4byte 0x00000000
    .global lbl_80516BD8
    lbl_80516BD8:
        .4byte 0x43300000
        .4byte 0x80000000
    .global lbl_80516BE0
    lbl_80516BE0:
        .4byte 0x40000000
    .global lbl_80516BE4
    lbl_80516BE4:
        .4byte 0x437F0000
    .global lbl_80516BE8
    lbl_80516BE8:
        .float 0.5
    .global lbl_80516BEC
    lbl_80516BEC:
        .4byte 0x46800000
    .global lbl_80516BF0
    lbl_80516BF0:
        .4byte 0x00000000
        .4byte 0x00000000
*/

/*
 * --INFO--
 * Address:	80091030
 * Size:	000070
 */
void JPACalcScaleX(JPAEmitterWorkData* workData, JPABaseParticle* particle)
{
	JPAExtraShape* shape = workData->m_resource->_20;
	if (workData->_1FC < shape->castData()->_0C) {
		particle->_60 = particle->_68 * (workData->_1FC * shape->_0C + shape->castData()->_14);
		return;
	}
	if (workData->_1FC > shape->castData()->_10) {
		particle->_60 = particle->_68 * (shape->_14 * (workData->_1FC - shape->castData()->_10) + 1.0f);
		return;
	}
	particle->_60 = particle->_68;
}

/*
 * --INFO--
 * Address:	800910A0
 * Size:	000070
 */
void JPACalcScaleY(JPAEmitterWorkData* workData, JPABaseParticle* particle)
{
	JPAExtraShape* shape = workData->m_resource->_20;
	if (workData->_1FC < shape->castData()->_0C) {
		particle->_64 = particle->_68 * (workData->_1FC * shape->_10 + shape->castData()->_1C);
		return;
	}
	if (workData->_1FC > shape->castData()->_10) {
		particle->_64 = particle->_68 * (shape->_18 * (workData->_1FC - shape->castData()->_10) + 1.0f);
		return;
	}
	particle->_64 = particle->_68;
}

/*
 * --INFO--
 * Address:	80091110
 * Size:	00000C
 */
void JPACalcScaleCopy(JPAEmitterWorkData* workData, JPABaseParticle* particle) { particle->_64 = particle->_60; }

/*
 * --INFO--
 * Address:	8009111C
 * Size:	00000C
 */
void JPACalcScaleAnmNormal(JPAEmitterWorkData* workData, JPABaseParticle* particle) { workData->_1FC = particle->_84; }

/*
 * --INFO--
 * Address:	80091128
 * Size:	000064
 */
void JPACalcScaleAnmRepeatX(JPAEmitterWorkData* workData, JPABaseParticle* particle)
{
	s32 v1         = workData->m_resource->_20->castData()->_28;
	workData->_1FC = (float)(particle->_80 - (particle->_80 / v1) * v1) / (float)v1;
	/*
	stwu     r1, -0x20(r1)
	lis      r0, 0x4330
	lfd      f2, lbl_80516BD8@sda21(r2)
	lwz      r6, 4(r3)
	lha      r5, 0x80(r4)
	lwz      r4, 0x20(r6)
	stw      r0, 8(r1)
	lwz      r4, 0(r4)
	stw      r0, 0x10(r1)
	lha      r6, 0x28(r4)
	divw     r4, r5, r6
	xoris    r0, r6, 0x8000
	stw      r0, 0x14(r1)
	lfd      f0, 0x10(r1)
	fsubs    f0, f0, f2
	mullw    r0, r4, r6
	subf     r0, r0, r5
	xoris    r0, r0, 0x8000
	stw      r0, 0xc(r1)
	lfd      f1, 8(r1)
	fsubs    f1, f1, f2
	fdivs    f0, f1, f0
	stfs     f0, 0x1fc(r3)
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8009118C
 * Size:	000064
 */
void JPACalcScaleAnmRepeatY(JPAEmitterWorkData* workData, JPABaseParticle* particle)
{
	s32 v1         = workData->m_resource->_20->castData()->_2A;
	s32 v2         = particle->_80 / v1;
	workData->_1FC = (float)(particle->_80 - v2 * v1) / (float)v1;
	/*
	stwu     r1, -0x20(r1)
	lis      r0, 0x4330
	lfd      f2, lbl_80516BD8@sda21(r2)
	lwz      r6, 4(r3)
	lha      r5, 0x80(r4)
	lwz      r4, 0x20(r6)
	stw      r0, 8(r1)
	lwz      r4, 0(r4)
	stw      r0, 0x10(r1)
	lha      r6, 0x2a(r4)
	divw     r4, r5, r6
	xoris    r0, r6, 0x8000
	stw      r0, 0x14(r1)
	lfd      f0, 0x10(r1)
	fsubs    f0, f0, f2
	mullw    r0, r4, r6
	subf     r0, r0, r5
	xoris    r0, r0, 0x8000
	stw      r0, 0xc(r1)
	lfd      f1, 8(r1)
	fsubs    f1, f1, f2
	fdivs    f0, f1, f0
	stfs     f0, 0x1fc(r3)
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	800911F0
 * Size:	00008C
 */
void JPACalcScaleAnmReverseX(JPAEmitterWorkData* workData, JPABaseParticle* particle)
{
	s32 v1         = workData->m_resource->_20->castData()->_28;
	s32 v2         = particle->_80 / v1;
	float v3       = (float)(particle->_80 - v2 * v1) / (float)v1;
	workData->_1FC = (float)(v2 & 1) * -(v3 * 2.0f - 1.0f) + v3;
}

/*
 * --INFO--
 * Address:	8009127C
 * Size:	00008C
 */
void JPACalcScaleAnmReverseY(JPAEmitterWorkData* workData, JPABaseParticle* particle)
{
	s32 v1         = workData->m_resource->_20->castData()->_2A;
	s32 v2         = particle->_80 / v1;
	float v3       = (float)(particle->_80 - v2 * v1) / (float)v1;
	workData->_1FC = (float)(v2 & 1) * -(v3 * 2.0f - 1.0f) + v3;
}

/*
 * --INFO--
 * Address:	80091308
 * Size:	000080
 */
void JPACalcAlphaAnm(JPAEmitterWorkData* workData, JPABaseParticle* particle)
{
	float v1             = particle->_84;
	JPAExtraShape* shape = workData->m_resource->_20;
	if (v1 < shape->castData()->_2C) {
		v1 = (v1 * shape->_04 + shape->castData()->_34) * 255.0f;
	} else {
		if (v1 > shape->castData()->_30) {
			v1 = ((v1 - shape->castData()->_30) * shape->_08 + shape->castData()->_38) * 255.0f;
		} else {
			v1 = shape->castData()->_38 * 255.0f;
		}
	}
	particle->_96 = (u8)v1;
	/*
	stwu     r1, -0x10(r1)
	lwz      r3, 4(r3)
	lfs      f3, 0x84(r4)
	lwz      r5, 0x20(r3)
	lwz      r3, 0(r5)
	lfs      f0, 0x2c(r3)
	fcmpo    cr0, f3, f0
	bge      lbl_80091340
	lfs      f1, 4(r5)
	lfs      f0, 0x34(r3)
	lfs      f2, lbl_80516BE4@sda21(r2)
	fmadds   f0, f3, f1, f0
	fmuls    f4, f2, f0
	b        lbl_80091374

lbl_80091340:
	lfs      f0, 0x30(r3)
	fcmpo    cr0, f3, f0
	ble      lbl_80091368
	fsubs    f2, f3, f0
	lfs      f1, 8(r5)
	lfs      f0, 0x38(r3)
	lfs      f3, lbl_80516BE4@sda21(r2)
	fmadds   f0, f2, f1, f0
	fmuls    f4, f3, f0
	b        lbl_80091374

lbl_80091368:
	lfs      f1, lbl_80516BE4@sda21(r2)
	lfs      f0, 0x38(r3)
	fmuls    f4, f1, f0

lbl_80091374:
	psq_st   f4, 8(r1), 1, qr2
	lbz      r0, 8(r1)
	stb      r0, 0x96(r4)
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80091388
 * Size:	0000E4
 */
void JPACalcAlphaFlickAnm(JPAEmitterWorkData* workData, JPABaseParticle* particle)
{
	float v1             = particle->_84;
	JPAExtraShape* shape = workData->m_resource->_20;
	if (v1 < shape->castData()->_2C) {
		v1 = (v1 * shape->_04 + shape->castData()->_34);
	} else {
		if (v1 > shape->castData()->_30) {
			v1 = ((v1 - shape->castData()->_30) * shape->_08 + shape->castData()->_38);
		} else {
			v1 = shape->castData()->_38;
		}
	}
	const JMath::TSinCosTable<2048, float>* tbl = JMath::getSinCosTable();
	// float v2 = tbl->sin(particle->_6C * particle->_80 * (1.0f - shape->castData()->_40)) - 1.0f;
	// float v3 = (v1 * ((v2 * shape->castData()->_48) * 0.5f + 1.0f)) * 255.0f;
	// particle->_96 = (u8)v3;
	float v2
	    = (v1
	       * (((tbl->sin(particle->_6C * particle->_80 * (1.0f - shape->castData()->_40)) - 1.0f) * shape->castData()->_48) * 0.5f + 1.0f));
	particle->_96 = v2 * 255;
	/*
	stwu     r1, -0x20(r1)
	lwz      r3, 4(r3)
	lfs      f2, 0x84(r4)
	lwz      r3, 0x20(r3)
	lwz      r6, 0(r3)
	lfs      f0, 0x2c(r6)
	fcmpo    cr0, f2, f0
	bge      lbl_800913B8
	lfs      f1, 4(r3)
	lfs      f0, 0x34(r6)
	fmadds   f7, f2, f1, f0
	b        lbl_800913DC

lbl_800913B8:
	lfs      f0, 0x30(r6)
	fcmpo    cr0, f2, f0
	ble      lbl_800913D8
	fsubs    f2, f2, f0
	lfs      f1, 8(r3)
	lfs      f0, 0x38(r6)
	fmadds   f7, f2, f1, f0
	b        lbl_800913DC

lbl_800913D8:
	lfs      f7, 0x38(r6)

lbl_800913DC:
	lha      r5, 0x80(r4)
	lis      r0, 0x4330
	stw      r0, 0x10(r1)
	lis      r3, sincosTable___5JMath@ha
	xoris    r0, r5, 0x8000
	lfd      f1, lbl_80516BD8@sda21(r2)
	stw      r0, 0x14(r1)
	addi     r3, r3, sincosTable___5JMath@l
	lfs      f4, 0x6c(r4)
	lfd      f0, 0x10(r1)
	lfs      f5, lbl_80516BEC@sda21(r2)
	fsubs    f3, f0, f1
	lfs      f2, lbl_80516BD0@sda21(r2)
	lfs      f1, 0x40(r6)
	lfs      f0, 0x48(r6)
	fmuls    f3, f4, f3
	lfs      f4, lbl_80516BE8@sda21(r2)
	fsubs    f1, f2, f1
	lfs      f6, lbl_80516BE4@sda21(r2)
	fmuls    f3, f5, f3
	fmuls    f1, f3, f1
	fctiwz   f1, f1
	stfd     f1, 0x18(r1)
	lwz      r0, 0x1c(r1)
	rlwinm   r0, r0, 0x1e, 0x12, 0x1c
	lfsx     f1, r3, r0
	fsubs    f1, f1, f2
	fmuls    f0, f1, f0
	fmadds   f0, f4, f0, f2
	fmuls    f0, f6, f0
	fmuls    f7, f7, f0
	psq_st   f7, 8(r1), 1, qr2
	lbz      r0, 8(r1)
	stb      r0, 0x96(r4)
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8009146C
 * Size:	000034
 * __ct
 */
JPAExtraShape::JPAExtraShape(const unsigned char* data)
{
	m_data = data;
	init();
}

/*
 * --INFO--
 * Address:	........
 * Size:	0001FC
 */
void JPAExtraShape::init_jpa(const unsigned char*, JKRHeap*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800914A0
 * Size:	000100
 * init__13JPAExtraShapeFv
 */
void JPAExtraShape::init()
{
	_04 = (castData()->_2C != 0.0f) ? ((castData()->_38 - castData()->_34) / castData()->_2C) : 1.0f;
	_08 = (castData()->_30 != 1.0f) ? ((castData()->_3C - castData()->_38) / (1.0f - castData()->_30)) : 1.0f;
	if (castData()->_0C != 0.0f) {
		_0C = (1.0f - castData()->_14) / castData()->_0C;
		_10 = (1.0f - castData()->_1C) / castData()->_0C;
	} else {
		_10 = 1.0f;
		_0C = 1.0f;
	}
	if (castData()->_10 != 1.0f) {
		_14 = (castData()->_18 - 1.0f) / (1.0f - castData()->_10);
		_18 = (castData()->_20 - 1.0f) / (1.0f - castData()->_10);
	} else {
		_18 = 1.0f;
		_14 = 1.0f;
	}
}
