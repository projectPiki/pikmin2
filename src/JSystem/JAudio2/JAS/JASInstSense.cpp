#include "JSystem/JAS/JASInst.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__12JASInstSense
    __vt__12JASInstSense:
        .4byte 0
        .4byte 0
        .4byte getY__12JASInstSenseCFii
        .4byte 0

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80516CF8
    lbl_80516CF8:
        .4byte 0x42FE0000
    .global lbl_80516CFC
    lbl_80516CFC:
        .float 1.0
    .global lbl_80516D00
    lbl_80516D00:
        .4byte 0x43300000
        .4byte 0x80000000
    .global lbl_80516D08
    lbl_80516D08:
        .4byte 0x43300000
        .4byte 0x00000000
*/

/*
 * --INFO--
 * Address:	8009B58C
 * Size:	000124
 */
float JASInstSense::getY(int p1, int p2) const
{
	int v1 = 0;
	switch (_08) {
	case 1:
		v1 = p2;
		break;
	case 2:
		v1 = p1;
		break;
	}
	if (_09 == 0x7F || _09 == 0) {
		return _0C + (v1 * (_10 - _0C)) / 127.0f;
	} else if (v1 < _09) {
		return (1.0f - _0C) * ((float)v1 / (float)_09) + _0C;
	} else {
		return (_10 - 1.0f) * ((float)(v1 - _09) / (float)(0x7F - _09)) + 1.0f;
	}
	// switch (_08) {
	// 	case 2:
	// 		break;
	// 	case 1:
	// 		p1 = p2;
	// 		break;
	// 	default:
	// 		p1 = 0;
	// 		break;
	// }
	// if (_09 == 0x7F || _09 == 0) {
	// 	return _0C + (p1 * (_10 - _0C)) / 127.0f;
	// } else if (p1 < _09) {
	// 	return (1.0f - _0C) * ((float)p1 / (float)_09) + _0C;
	// } else {
	// 	return (_10 - 1.0f) * ((float)(p1 - _09) / (float)(0x7F - _09)) + 1.0f;
	// }

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

/*
 * --INFO--
 * Address:	8009B6B0
 * Size:	000014
 */
void JASInstSense::setParams(int p1, int p2, float p3, float p4)
{
	_08 = p1;
	_09 = p2;
	_0C = p3;
	_10 = p4;
}
