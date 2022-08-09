#include "Dolphin/float.h"
#include "JSystem/JAL/JALCalc.h"
#include "JSystem/JAS/JASInst.h"
#include "JSystem/JMath.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__11JASInstRand
    __vt__11JASInstRand:
        .4byte 0
        .4byte 0
        .4byte getY__11JASInstRandCFii
        .4byte 0

    .section .sbss # 0x80514D80 - 0x80516360
    .global init$644
    init$644:
        .skip 0x4
    .global oRandom$643
    oRandom$643:
        .skip 0x4

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80516CF0
    lbl_80516CF0:
        .4byte 0x40000000
    .global lbl_80516CF4
    lbl_80516CF4:
        .float 1.0
*/

/*
 * --INFO--
 * Address:	8009B4E8
 * Size:	0000A4
 */
float JASInstRand::getY(int, int) const
{
	// static JMath::TRandom_fast_ oRandom(0);
	// oRandom.value = oRandom.value * 1664525 + 1013904223;
	// return -((1.0f - __float_epsilon) * 1.0f - ((float)(oRandom.value >> 9 | 0x3f800000) - 1.0f) * 2.0f) * _0C + _08;

	float v = -((1.0f - __float_epsilon) * 1.0f - JALCalc::getRandom_0_1() * 2.0f);
	v *= _0C;
	v += _08;
	return v;
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	lbz      r0, init$644@sda21(r13)
	extsb.   r0, r0
	bne      lbl_8009B51C
	addi     r3, r13, oRandom$643@sda21
	li       r4, 0
	bl       __ct__Q25JMath13TRandom_fast_FUl
	li       r0, 1
	stb      r0, init$644@sda21(r13)

lbl_8009B51C:
	lis      r3, 0x0019660D@ha
	lwz      r4, oRandom$643@sda21(r13)
	addi     r0, r3, 0x0019660D@l
	lis      r5, __float_epsilon@ha
	mullw    r3, r4, r0
	lfs      f5, lbl_80516CF4@sda21(r2)
	lfs      f0, __float_epsilon@l(r5)
	lfs      f3, lbl_80516CF0@sda21(r2)
	fsubs    f4, f5, f0
	lfs      f2, 0xc(r31)
	addis    r3, r3, 0x3c6f
	lfs      f0, 8(r31)
	addi     r3, r3, -3233
	srwi     r0, r3, 9
	stw      r3, oRandom$643@sda21(r13)
	oris     r0, r0, 0x3f80
	stw      r0, 8(r1)
	lwz      r0, 0x24(r1)
	lfs      f1, 8(r1)
	lwz      r31, 0x1c(r1)
	fsubs    f1, f1, f5
	fmuls    f1, f3, f1
	fnmsubs  f1, f5, f4, f1
	fmuls    f1, f1, f2
	fadds    f1, f1, f0
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}
