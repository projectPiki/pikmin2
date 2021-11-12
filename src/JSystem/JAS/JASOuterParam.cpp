#include "types.h"

/*
    Generated from dpostproc

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80516D10
    lbl_80516D10:
        .4byte 0x00000000
        .4byte 0x00000000
*/

/*
 * --INFO--
 * Address:	8009C400
 * Size:	00004C
 */
JASOuterParam::JASOuterParam()
{
	/*
	li       r0, 0
	lfs      f0, lbl_80516D10@sda21(r2)
	sth      r0, 0(r3)
	sth      r0, 2(r3)
	stfs     f0, 4(r3)
	stfs     f0, 8(r3)
	stfs     f0, 0xc(r3)
	stfs     f0, 0x10(r3)
	stfs     f0, 0x14(r3)
	stfs     f0, 0x18(r3)
	sth      r0, 0x1c(r3)
	sth      r0, 0x1e(r3)
	sth      r0, 0x20(r3)
	sth      r0, 0x22(r3)
	sth      r0, 0x24(r3)
	sth      r0, 0x26(r3)
	sth      r0, 0x28(r3)
	sth      r0, 0x2a(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8009C44C
 * Size:	000010
 */
void JASOuterParam::initExtBuffer()
{
	/*
	li       r0, 0
	sth      r0, 0(r3)
	sth      r0, 2(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8009C45C
 * Size:	000008
 */
void JASOuterParam::setOuterSwitch(unsigned short a1)
{
	// Generated from sth r4, 0x0(r3)
	_00 = a1;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void JASOuterParam::getSwitch()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8009C464
 * Size:	00001C
 */
void JASOuterParam::checkOuterSwitch(unsigned short)
{
	/*
	lhz      r3, 0(r3)
	clrlwi   r0, r4, 0x10
	and      r3, r3, r0
	neg      r0, r3
	or       r0, r0, r3
	srwi     r3, r0, 0x1f
	blr
	*/
}

/*
 * --INFO--
 * Address:	8009C480
 * Size:	000008
 */
void JASOuterParam::setOuterUpdate(unsigned short a1)
{
	// Generated from sth r4, 0x2(r3)
	_02 = a1;
}

/*
 * --INFO--
 * Address:	8009C488
 * Size:	000008
 */
void JASOuterParam::getOuterUpdate()
{
	/*
	lhz      r3, 2(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000010
 */
void JASOuterParam::setIntFirFilter(short, unsigned char)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8009C490
 * Size:	000010
 */
void JASOuterParam::getIntFirFilter(unsigned char)
{
	/*
	rlwinm   r0, r4, 1, 0x17, 0x1e
	add      r3, r3, r0
	lha      r3, 0x1c(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8009C4A0
 * Size:	00009C
 */
void JASOuterParam::setParam(unsigned char, float)
{
	/*
	clrlwi   r0, r4, 0x18
	cmpwi    r0, 8
	beq      lbl_8009C510
	bge      lbl_8009C4D8
	cmpwi    r0, 3
	beqlr
	bge      lbl_8009C4CC
	cmpwi    r0, 1
	beq      lbl_8009C4F0
	bge      lbl_8009C4F8
	blr

lbl_8009C4CC:
	cmpwi    r0, 5
	bgelr
	b        lbl_8009C500

lbl_8009C4D8:
	cmpwi    r0, 0x40
	beq      lbl_8009C518
	bgelr
	cmpwi    r0, 0x10
	beq      lbl_8009C508
	blr

lbl_8009C4F0:
	addi     r5, r3, 4
	b        lbl_8009C524

lbl_8009C4F8:
	addi     r5, r3, 8
	b        lbl_8009C524

lbl_8009C500:
	addi     r5, r3, 0xc
	b        lbl_8009C524

lbl_8009C508:
	addi     r5, r3, 0x10
	b        lbl_8009C524

lbl_8009C510:
	addi     r5, r3, 0x14
	b        lbl_8009C524

lbl_8009C518:
	addi     r5, r3, 0x18
	b        lbl_8009C524
	blr

lbl_8009C524:
	stfs     f1, 0(r5)
	clrlwi   r0, r4, 0x18
	lhz      r4, 2(r3)
	or       r0, r4, r0
	sth      r0, 2(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8009C53C
 * Size:	00001C
 */
void JASOuterParam::onSwitch(unsigned short)
{
	/*
	lhz      r0, 0(r3)
	or       r0, r0, r4
	sth      r0, 0(r3)
	lhz      r0, 2(r3)
	or       r0, r0, r4
	sth      r0, 2(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8009C558
 * Size:	00005C
 */
void JASOuterParam::setFirFilter(short*)
{
	/*
	lhz      r0, 2(r3)
	ori      r0, r0, 0x80
	sth      r0, 2(r3)
	lhz      r0, 0(r3)
	ori      r0, r0, 0x80
	sth      r0, 0(r3)
	lha      r0, 0(r4)
	sth      r0, 0x1c(r3)
	lha      r0, 2(r4)
	sth      r0, 0x1e(r3)
	lha      r0, 4(r4)
	sth      r0, 0x20(r3)
	lha      r0, 6(r4)
	sth      r0, 0x22(r3)
	lha      r0, 8(r4)
	sth      r0, 0x24(r3)
	lha      r0, 0xa(r4)
	sth      r0, 0x26(r3)
	lha      r0, 0xc(r4)
	sth      r0, 0x28(r3)
	lha      r0, 0xe(r4)
	sth      r0, 0x2a(r3)
	blr
	*/
}
