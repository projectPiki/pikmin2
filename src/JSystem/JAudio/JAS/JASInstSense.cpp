#include "JSystem/JAudio/JAS/JASInst.h"

/**
 * @note Address: 0x8009B58C
 * @note Size: 0x124
 */
f32 JASInstSense::getY(int p1, int p2) const
{
	int v1 = 0;
	switch (mRegister) {
	case 1:
		v1 = p2;
		break;
	case 2:
		v1 = p1;
		break;
	}

	if (mKey == 0x7F || mKey == 0) {
		return mFloor + (v1 * (mCeiling - mFloor)) / 127.0f;
	} else if (v1 < mKey) {
		return (1.0f - mFloor) * ((f32)v1 / (f32)mKey) + mFloor;
	} else {
		return (mCeiling - 1.0f) * ((f32)(v1 - mKey) / (f32)(0x7F - mKey)) + 1.0f;
	}

	/*
	lbz      r0, 8(r3)
	li       r7, 0
	stwu     r1, -0x20(r1)
	cmpwi    r0, 2
	beq      lbl_8009B5B8
	bge      lbl_8009B5BC
	cmpwi    r0, 1
	bge      lbl_8009B5B0
	b        lbl_8009B5BC

lbl_8009B5B0:
	mr       r7, r5
	b        lbl_8009B5BC

lbl_8009B5B8:
	mr       r7, r4

lbl_8009B5BC:
	lbz      r6, 9(r3)
	cmplwi   r6, 0x7f
	beq      lbl_8009B5D0
	cmplwi   r6, 0
	bne      lbl_8009B60C

lbl_8009B5D0:
	xoris    r4, r7, 0x8000
	lis      r0, 0x4330
	stw      r4, 0xc(r1)
	lfs      f4, 0xc(r3)
	stw      r0, 8(r1)
	lfs      f0, 0x10(r3)
	lfd      f3, lbl_80516D00@sda21(r2)
	lfd      f2, 8(r1)
	fsubs    f1, f0, f4
	lfs      f0, lbl_80516CF8@sda21(r2)
	fsubs    f2, f2, f3
	fmuls    f1, f2, f1
	fdivs    f0, f1, f0
	fadds    f1, f4, f0
	b        lbl_8009B6A8

lbl_8009B60C:
	cmpw     r7, r6
	bge      lbl_8009B65C
	lis      r0, 0x4330
	xoris    r4, r7, 0x8000
	stw      r4, 0xc(r1)
	lfd      f2, lbl_80516D00@sda21(r2)
	stw      r0, 8(r1)
	lfd      f1, lbl_80516D08@sda21(r2)
	lfd      f0, 8(r1)
	stw      r6, 0x14(r1)
	fsubs    f2, f0, f2
	lfs      f4, 0xc(r3)
	stw      r0, 0x10(r1)
	lfs      f3, lbl_80516CFC@sda21(r2)
	lfd      f0, 0x10(r1)
	fsubs    f3, f3, f4
	fsubs    f0, f0, f1
	fdivs    f0, f2, f0
	fmadds   f1, f3, f0, f4
	b        lbl_8009B6A8

lbl_8009B65C:
	subf     r5, r6, r7
	subfic   r0, r6, 0x7f
	lis      r4, 0x4330
	lfd      f2, lbl_80516D00@sda21(r2)
	xoris    r5, r5, 0x8000
	xoris    r0, r0, 0x8000
	stw      r5, 0x14(r1)
	lfs      f1, 0x10(r3)
	stw      r4, 0x10(r1)
	lfs      f4, lbl_80516CFC@sda21(r2)
	lfd      f0, 0x10(r1)
	stw      r0, 0xc(r1)
	fsubs    f3, f1, f4
	fsubs    f1, f0, f2
	stw      r4, 8(r1)
	lfd      f0, 8(r1)
	fsubs    f0, f0, f2
	fdivs    f0, f1, f0
	fmadds   f1, f3, f0, f4

lbl_8009B6A8:
	addi     r1, r1, 0x20
	blr
	*/
}

/**
 * @note Address: 0x8009B6B0
 * @note Size: 0x14
 */
void JASInstSense::setParams(int reg, int key, f32 floor, f32 ceiling)
{
	mRegister = reg;
	mKey      = key;
	mFloor    = floor;
	mCeiling  = ceiling;
}
