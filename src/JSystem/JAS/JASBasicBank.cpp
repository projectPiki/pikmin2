#include "types.h"

/*
    Generated from dpostproc

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__12JASBasicBank
    __vt__12JASBasicBank:
        .4byte 0
        .4byte 0
        .4byte __dt__12JASBasicBankFv
        .4byte getInst__12JASBasicBankCFi
        .4byte getType__12JASBasicBankCFv
    .global __vt__7JASBank
    __vt__7JASBank:
        .4byte 0
        .4byte 0
        .4byte __dt__7JASBankFv
        .4byte 0
        .4byte 0
*/

/*
 * --INFO--
 * Address:	800996FC
 * Size:	00002C
 */
JASBasicBank::JASBasicBank()
{
	/*
	lis      r6, __vt__7JASBank@ha
	lis      r4, __vt__12JASBasicBank@ha
	addi     r6, r6, __vt__7JASBank@l
	li       r5, 0
	stw      r6, 0(r3)
	addi     r0, r4, __vt__12JASBasicBank@l
	stw      r5, 4(r3)
	stw      r0, 0(r3)
	stw      r5, 8(r3)
	stw      r5, 0xc(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80099728
 * Size:	000048
 */
JASBank::~JASBank()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	or.      r31, r3, r3
	beq      lbl_80099758
	lis      r5, __vt__7JASBank@ha
	extsh.   r0, r4
	addi     r0, r5, __vt__7JASBank@l
	stw      r0, 0(r31)
	ble      lbl_80099758
	bl       __dl__FPv

lbl_80099758:
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
 * Address:	80099770
 * Size:	000074
 */
JASBasicBank::~JASBasicBank()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_800997C8
	lis      r3, __vt__12JASBasicBank@ha
	addi     r0, r3, __vt__12JASBasicBank@l
	stw      r0, 0(r30)
	lwz      r3, 8(r30)
	bl       __dla__FPv
	cmplwi   r30, 0
	beq      lbl_800997B8
	lis      r3, __vt__7JASBank@ha
	addi     r0, r3, __vt__7JASBank@l
	stw      r0, 0(r30)

lbl_800997B8:
	extsh.   r0, r31
	ble      lbl_800997C8
	mr       r3, r30
	bl       __dl__FPv

lbl_800997C8:
	lwz      r0, 0x14(r1)
	mr       r3, r30
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800997E4
 * Size:	000064
 */
void JASBasicBank::setInstCount(unsigned long)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r3, 8(r3)
	bl       __dla__FPv
	bl       getCurrentHeap__7JASBankFv
	mr       r4, r3
	slwi     r3, r31, 2
	li       r5, 0
	bl       __nwa__FUlP7JKRHeapi
	stw      r3, 8(r30)
	slwi     r4, r31, 2
	lwz      r3, 8(r30)
	bl       bzero__7JASCalcFPvUl
	stw      r31, 0xc(r30)
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
 * Address:	80099848
 * Size:	000010
 */
void JASBasicBank::setInst(int, JASInst*)
{
	/*
	lwz      r3, 8(r3)
	slwi     r0, r4, 2
	stwx     r5, r3, r0
	blr
	*/
}

/*
 * --INFO--
 * Address:	80099858
 * Size:	000024
 */
void JASBasicBank::getInst(int) const
{
	/*
	lwz      r0, 0xc(r3)
	cmplw    r4, r0
	blt      lbl_8009986C
	li       r3, 0
	blr

lbl_8009986C:
	lwz      r3, 8(r3)
	slwi     r0, r4, 2
	lwzx     r3, r3, r0
	blr
	*/
}

/*
 * --INFO--
 * Address:	8009987C
 * Size:	00000C
 */
void JASBasicBank::getType() const
{
	/*
	lis      r3, 0x42534943@ha
	addi     r3, r3, 0x42534943@l
	blr
	*/
}
