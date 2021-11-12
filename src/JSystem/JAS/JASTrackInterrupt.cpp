#include "types.h"

/*
    Generated from dpostproc
*/

/*
 * --INFO--
 * Address:	800A29F8
 * Size:	000044
 */
void JASIntrMgr::init()
{
	/*
	li       r4, 1
	li       r0, 0
	stb      r4, 0(r3)
	stb      r0, 1(r3)
	stb      r0, 2(r3)
	stb      r0, 3(r3)
	stw      r0, 4(r3)
	stw      r0, 8(r3)
	stw      r0, 0xc(r3)
	stw      r0, 0x10(r3)
	stw      r0, 0x14(r3)
	stw      r0, 0x18(r3)
	stw      r0, 0x1c(r3)
	stw      r0, 0x20(r3)
	stw      r0, 0x24(r3)
	stw      r0, 0x28(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	800A2A3C
 * Size:	000024
 */
void JASIntrMgr::request(unsigned long)
{
	/*
	li       r0, 1
	lbz      r5, 2(r3)
	slw      r4, r0, r4
	and.     r0, r5, r4
	beqlr
	lbz      r0, 1(r3)
	or       r0, r0, r4
	stb      r0, 1(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	800A2A60
 * Size:	000024
 */
void JASIntrMgr::setIntr(unsigned long, void*)
{
	/*
	li       r0, 1
	lbz      r7, 2(r3)
	slw      r6, r0, r4
	slwi     r0, r4, 2
	or       r4, r7, r6
	stb      r4, 2(r3)
	add      r3, r3, r0
	stw      r5, 0xc(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	800A2A84
 * Size:	000018
 */
void JASIntrMgr::resetInter(unsigned long)
{
	/*
	li       r0, 1
	lbz      r5, 2(r3)
	slw      r0, r0, r4
	andc     r0, r5, r0
	stb      r0, 2(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	800A2A9C
 * Size:	00006C
 */
void JASIntrMgr::checkIntr()
{
	/*
	lbz      r0, 0(r3)
	cmplwi   r0, 0
	bne      lbl_800A2AB0
	li       r3, 0
	blr

lbl_800A2AB0:
	lbz      r4, 2(r3)
	li       r6, 0
	lbz      r0, 1(r3)
	and      r4, r4, r0
	b        lbl_800A2AF8

lbl_800A2AC4:
	clrlwi.  r0, r4, 0x1f
	beq      lbl_800A2AF0
	li       r0, 1
	lbz      r5, 1(r3)
	slw      r4, r0, r6
	andc     r4, r5, r4
	slwi     r0, r6, 2
	stb      r4, 1(r3)
	add      r3, r3, r0
	lwz      r3, 0xc(r3)
	blr

lbl_800A2AF0:
	srwi     r4, r4, 1
	addi     r6, r6, 1

lbl_800A2AF8:
	cmplwi   r4, 0
	bne      lbl_800A2AC4
	li       r3, 0
	blr
	*/
}

/*
 * --INFO--
 * Address:	800A2B08
 * Size:	000070
 */
void JASIntrMgr::timerProcess()
{
	/*
	lwz      r4, 4(r3)
	cmplwi   r4, 0
	beqlr
	addi     r0, r4, -1
	stw      r0, 4(r3)
	lwz      r0, 4(r3)
	cmplwi   r0, 0
	bnelr
	lbz      r0, 2(r3)
	rlwinm.  r0, r0, 0, 0x19, 0x19
	beq      lbl_800A2B40
	lbz      r0, 1(r3)
	ori      r0, r0, 0x40
	stb      r0, 1(r3)

lbl_800A2B40:
	lbz      r4, 3(r3)
	cmplwi   r4, 0
	beq      lbl_800A2B6C
	addi     r0, r4, -1
	stb      r0, 3(r3)
	lbz      r0, 3(r3)
	cmplwi   r0, 0
	beqlr
	lwz      r0, 8(r3)
	stw      r0, 4(r3)
	blr

lbl_800A2B6C:
	lwz      r0, 8(r3)
	stw      r0, 4(r3)
	blr
	*/
}
