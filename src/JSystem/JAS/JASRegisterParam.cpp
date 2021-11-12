#include "types.h"

/*
    Generated from dpostproc
*/

/*
 * --INFO--
 * Address:	8009C714
 * Size:	000050
 */
JASRegisterParam::JASRegisterParam()
{
	/*
	li       r0, 0
	sth      r0, 0(r3)
	sth      r0, 2(r3)
	sth      r0, 4(r3)
	sth      r0, 6(r3)
	sth      r0, 8(r3)
	sth      r0, 0xa(r3)
	sth      r0, 0xc(r3)
	sth      r0, 0xe(r3)
	sth      r0, 0x1a(r3)
	sth      r0, 0x10(r3)
	sth      r0, 0x12(r3)
	sth      r0, 0x14(r3)
	sth      r0, 0x16(r3)
	sth      r0, 0x18(r3)
	stw      r0, 0x20(r3)
	stw      r0, 0x24(r3)
	stw      r0, 0x28(r3)
	stw      r0, 0x2c(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8009C764
 * Size:	000068
 */
void JASRegisterParam::init()
{
	/*
	li       r9, 0
	li       r8, 0xf0
	sth      r9, 0(r3)
	li       r7, 0xc
	li       r6, 0x40
	li       r5, 1
	sth      r9, 2(r3)
	li       r4, 0x7fff
	li       r0, 0x4000
	sth      r9, 4(r3)
	sth      r9, 6(r3)
	sth      r9, 8(r3)
	sth      r9, 0xa(r3)
	sth      r8, 0xc(r3)
	sth      r7, 0xe(r3)
	sth      r6, 0x1a(r3)
	sth      r9, 0x10(r3)
	sth      r5, 0x12(r3)
	sth      r5, 0x14(r3)
	sth      r4, 0x16(r3)
	sth      r0, 0x18(r3)
	stw      r9, 0x20(r3)
	stw      r9, 0x24(r3)
	stw      r9, 0x28(r3)
	stw      r9, 0x2c(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8009C7CC
 * Size:	000070
 */
void JASRegisterParam::inherit(const JASRegisterParam&)
{
	/*
	li       r11, 0
	lhz      r0, 0xc(r4)
	sth      r11, 0(r3)
	lhz      r10, 0xe(r4)
	sth      r11, 2(r3)
	lhz      r9, 0x1a(r4)
	sth      r11, 4(r3)
	lhz      r8, 0x10(r4)
	sth      r11, 6(r3)
	lhz      r7, 0x12(r4)
	sth      r11, 8(r3)
	lhz      r6, 0x14(r4)
	sth      r11, 0xa(r3)
	lhz      r5, 0x16(r4)
	sth      r0, 0xc(r3)
	lhz      r0, 0x18(r4)
	sth      r10, 0xe(r3)
	sth      r9, 0x1a(r3)
	sth      r8, 0x10(r3)
	sth      r7, 0x12(r3)
	sth      r6, 0x14(r3)
	sth      r5, 0x16(r3)
	sth      r0, 0x18(r3)
	stw      r11, 0x20(r3)
	stw      r11, 0x24(r3)
	stw      r11, 0x28(r3)
	stw      r11, 0x2c(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00002C
 */
void JASRegisterParam::setBankNumber(unsigned char)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8009C83C
 * Size:	000010
 */
void JASRegisterParam::getBankNumber() const
{
	/*
	lhz      r0, 0xc(r3)
	srawi    r0, r0, 8
	clrlwi   r3, r0, 0x18
	blr
	*/
}

/*
 * --INFO--
 * Address:	8009C84C
 * Size:	00000C
 */
void JASRegisterParam::getProgramNumber() const
{
	/*
	lhz      r0, 0xc(r3)
	clrlwi   r3, r0, 0x18
	blr
	*/
}
