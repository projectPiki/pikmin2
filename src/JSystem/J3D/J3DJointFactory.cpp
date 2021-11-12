#include "types.h"

/*
    Generated from dpostproc
*/

/*
 * --INFO--
 * Address:	80071B20
 * Size:	000058
 */
J3DJointFactory::J3DJointFactory(const J3DJointBlock&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	lwz      r4, 0xc(r4)
	stw      r30, 8(r1)
	mr       r30, r3
	mr       r3, r31
	bl       "JSUConvertOffsetToPtr<16J3DJointInitData>__FPCvUl"
	stw      r3, 0(r30)
	mr       r3, r31
	lwz      r4, 0x10(r31)
	bl       "JSUConvertOffsetToPtr<Us>__FPCvUl"
	stw      r3, 4(r30)
	mr       r3, r30
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80071B78
 * Size:	000180
 */
void J3DJointFactory::create(int)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	li       r3, 0x5c
	stw      r30, 8(r1)
	mr       r30, r4
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_80071BAC
	bl       __ct__8J3DJointFv
	mr       r4, r3

lbl_80071BAC:
	sth      r30, 0x14(r4)
	slwi     r0, r30, 1
	li       r3, 0
	lwz      r5, 4(r31)
	lwz      r6, 0(r31)
	lhzx     r5, r5, r0
	slwi     r5, r5, 6
	lhzx     r5, r6, r5
	stb      r5, 0x16(r4)
	lwz      r5, 4(r31)
	lwz      r6, 0(r31)
	lhzx     r5, r5, r0
	slwi     r5, r5, 6
	add      r5, r6, r5
	lbz      r5, 2(r5)
	stb      r5, 0x17(r4)
	lwz      r5, 4(r31)
	lwz      r6, 0(r31)
	lhzx     r5, r5, r0
	slwi     r5, r5, 6
	addi     r7, r5, 4
	add      r7, r6, r7
	lfs      f0, 0(r7)
	stfs     f0, 0x18(r4)
	lfs      f0, 4(r7)
	stfs     f0, 0x1c(r4)
	lfs      f0, 8(r7)
	stfs     f0, 0x20(r4)
	lha      r5, 0xc(r7)
	sth      r5, 0x24(r4)
	lha      r5, 0xe(r7)
	sth      r5, 0x26(r4)
	lha      r5, 0x10(r7)
	sth      r5, 0x28(r4)
	lfs      f0, 0x14(r7)
	stfs     f0, 0x2c(r4)
	lfs      f0, 0x18(r7)
	stfs     f0, 0x30(r4)
	lfs      f0, 0x1c(r7)
	stfs     f0, 0x34(r4)
	lwz      r5, 4(r31)
	lwz      r6, 0(r31)
	lhzx     r5, r5, r0
	slwi     r5, r5, 6
	add      r5, r6, r5
	lfs      f0, 0x24(r5)
	stfs     f0, 0x38(r4)
	lwz      r5, 4(r31)
	lwz      r6, 0(r31)
	lhzx     r5, r5, r0
	slwi     r5, r5, 6
	addi     r5, r5, 0x28
	add      r5, r6, r5
	lfs      f0, 0(r5)
	stfs     f0, 0x3c(r4)
	lfs      f0, 4(r5)
	stfs     f0, 0x40(r4)
	lfs      f0, 8(r5)
	stfs     f0, 0x44(r4)
	lwz      r5, 4(r31)
	lwz      r6, 0(r31)
	lhzx     r0, r5, r0
	slwi     r5, r0, 6
	addi     r5, r5, 0x34
	add      r5, r6, r5
	lfs      f0, 0(r5)
	stfs     f0, 0x48(r4)
	lfs      f0, 4(r5)
	stfs     f0, 0x4c(r4)
	lfs      f0, 8(r5)
	stfs     f0, 0x50(r4)
	stw      r3, 0x54(r4)
	lbz      r0, 0x17(r4)
	cmplwi   r0, 0xff
	bne      lbl_80071CDC
	stb      r3, 0x17(r4)

lbl_80071CDC:
	lwz      r0, 0x14(r1)
	mr       r3, r4
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80071CF8
 * Size:	000018
 */
void JSUConvertOffsetToPtr<J3DJointInitData>(const void*, unsigned long)
{
	/*
	cmplwi   r4, 0
	bne      lbl_80071D08
	li       r3, 0
	blr

lbl_80071D08:
	add      r3, r3, r4
	blr
	*/
}
