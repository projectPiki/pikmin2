#include "JSystem/JAS/JASSeqCtrl.h"
#include "types.h"

/*
    Generated from dpostproc
*/

/*
 * --INFO--
 * Address:	8009C858
 * Size:	000060
 */
void JASSeqCtrl::init()
{
	/*
	li       r0, 0
	stw      r0, 0(r3)
	stw      r0, 4(r3)
	stw      r0, 8(r3)
	stw      r0, 0xc(r3)
	stw      r0, 0x10(r3)
	sth      r0, 0x30(r3)
	stw      r0, 0x14(r3)
	sth      r0, 0x32(r3)
	stw      r0, 0x18(r3)
	sth      r0, 0x34(r3)
	stw      r0, 0x1c(r3)
	sth      r0, 0x36(r3)
	stw      r0, 0x20(r3)
	sth      r0, 0x38(r3)
	stw      r0, 0x24(r3)
	sth      r0, 0x3a(r3)
	stw      r0, 0x28(r3)
	sth      r0, 0x3c(r3)
	stw      r0, 0x2c(r3)
	sth      r0, 0x3e(r3)
	stw      r0, 0x40(r3)
	stw      r0, 0x44(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8009C8B8
 * Size:	000014
 */
void JASSeqCtrl::start(void*, unsigned long)
{
	/*
	stw      r4, 0(r3)
	lwz      r0, 0(r3)
	add      r0, r0, r5
	stw      r0, 4(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8009C8CC
 * Size:	00006C
 */
void JASSeqCtrl::loopEnd()
{
	/*
	lwz      r0, 0xc(r3)
	cmplwi   r0, 0
	bne      lbl_8009C8E0
	li       r3, 0
	blr

lbl_8009C8E0:
	slwi     r0, r0, 1
	add      r4, r3, r0
	lhz      r5, 0x2e(r4)
	cmplwi   r5, 0
	beq      lbl_8009C8FC
	addi     r0, r5, -1
	clrlwi   r5, r0, 0x10

lbl_8009C8FC:
	clrlwi.  r0, r5, 0x10
	bne      lbl_8009C918
	lwz      r4, 0xc(r3)
	addi     r0, r4, -1
	stw      r0, 0xc(r3)
	li       r3, 1
	blr

lbl_8009C918:
	sth      r5, 0x2e(r4)
	lwz      r0, 0xc(r3)
	slwi     r0, r0, 2
	add      r4, r3, r0
	lwz      r0, 0xc(r4)
	stw      r0, 4(r3)
	li       r3, 1
	blr
	*/
}

/*
 * --INFO--
 * Address:	8009C938
 * Size:	000030
 */
void JASSeqCtrl::waitCountDown()
{
	/*
	lwz      r4, 8(r3)
	cmpwi    r4, 0
	ble      lbl_8009C960
	addi     r0, r4, -1
	stw      r0, 8(r3)
	lwz      r0, 8(r3)
	cmpwi    r0, 0
	beq      lbl_8009C960
	li       r3, 0
	blr

lbl_8009C960:
	li       r3, 1
	blr
	*/
}

/*
 * --INFO--
 * Address:	8009C968
 * Size:	000038
 */
bool JASSeqCtrl::callIntr(void*)
{
	/*
	lwz      r0, 0x44(r3)
	cmplwi   r0, 0
	beq      lbl_8009C97C
	li       r3, 0
	blr

lbl_8009C97C:
	lwz      r5, 4(r3)
	li       r0, 0
	stw      r5, 0x44(r3)
	stw      r4, 4(r3)
	lwz      r4, 8(r3)
	stw      r4, 0x40(r3)
	stw      r0, 8(r3)
	li       r3, 1
	blr
	*/
}

/*
 * --INFO--
 * Address:	8009C9A0
 * Size:	000034
 */
void JASSeqCtrl::retIntr()
{
	/*
	lwz      r0, 0x44(r3)
	cmplwi   r0, 0
	bne      lbl_8009C9B4
	li       r3, 0
	blr

lbl_8009C9B4:
	lwz      r4, 0x40(r3)
	li       r0, 0
	stw      r4, 8(r3)
	lwz      r4, 0x44(r3)
	stw      r4, 4(r3)
	stw      r0, 0x44(r3)
	li       r3, 1
	blr
	*/
}

/*
 * --INFO--
 * Address:	8009C9D4
 * Size:	000018
 */
void JASSeqCtrl::get16(unsigned long) const
{
	/*
	lwz      r3, 0(r3)
	addi     r0, r4, 1
	lbzx     r4, r3, r4
	lbzx     r3, r3, r0
	rlwimi   r3, r4, 8, 0x10, 0x17
	blr
	*/
}

/*
 * --INFO--
 * Address:	8009C9EC
 * Size:	000028
 */
void JASSeqCtrl::get24(unsigned long) const
{
	/*
	lwz      r5, 0(r3)
	addi     r6, r4, 1
	lbzx     r4, r5, r4
	lbzx     r3, r5, r6
	addi     r6, r6, 1
	rlwimi   r3, r4, 8, 0x10, 0x17
	lbzx     r0, r5, r6
	slwi     r3, r3, 8
	or       r3, r3, r0
	blr
	*/
}

/*
 * --INFO--
 * Address:	8009CA14
 * Size:	000038
 */
void JASSeqCtrl::get32(unsigned long) const
{
	/*
	lwz      r6, 0(r3)
	addi     r7, r4, 1
	lbzx     r5, r6, r4
	lbzx     r3, r6, r7
	addi     r7, r7, 1
	lbzx     r4, r6, r7
	rlwimi   r3, r5, 8, 0x10, 0x17
	addi     r7, r7, 1
	slwi     r3, r3, 8
	lbzx     r0, r6, r7
	or       r3, r3, r4
	slwi     r3, r3, 8
	or       r3, r3, r0
	blr
	*/
}

/*
 * --INFO--
 * Address:	8009CA4C
 * Size:	000028
 */
void JASSeqCtrl::read16()
{
	/*
	lwz      r5, 4(r3)
	addi     r0, r5, 1
	stw      r0, 4(r3)
	lwz      r4, 4(r3)
	lbz      r5, 0(r5)
	addi     r0, r4, 1
	stw      r0, 4(r3)
	lbz      r3, 0(r4)
	rlwimi   r3, r5, 8, 0x10, 0x17
	blr
	*/
}

/*
 * --INFO--
 * Address:	8009CA74
 * Size:	000044
 */
void JASSeqCtrl::read24()
{
	/*
	lwz      r4, 4(r3)
	addi     r0, r4, 1
	stw      r0, 4(r3)
	lwz      r5, 4(r3)
	lbz      r6, 0(r4)
	addi     r0, r5, 1
	stw      r0, 4(r3)
	lwz      r4, 4(r3)
	lbz      r5, 0(r5)
	addi     r0, r4, 1
	stw      r0, 4(r3)
	mr       r3, r5
	rlwimi   r3, r6, 8, 0x10, 0x17
	lbz      r0, 0(r4)
	slwi     r3, r3, 8
	or       r3, r3, r0
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00005C
 */
void JASSeqCtrl::read32()
{
	// UNUSED FUNCTION
}
