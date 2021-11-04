#include "types.h"

/*
 * --INFO--
 * Address:	8009C714
 * Size:	000050
 */
JASRegisterParam::JASRegisterParam()
{
	/*
	.loc_0x0:
	  li        r0, 0
	  sth       r0, 0x0(r3)
	  sth       r0, 0x2(r3)
	  sth       r0, 0x4(r3)
	  sth       r0, 0x6(r3)
	  sth       r0, 0x8(r3)
	  sth       r0, 0xA(r3)
	  sth       r0, 0xC(r3)
	  sth       r0, 0xE(r3)
	  sth       r0, 0x1A(r3)
	  sth       r0, 0x10(r3)
	  sth       r0, 0x12(r3)
	  sth       r0, 0x14(r3)
	  sth       r0, 0x16(r3)
	  sth       r0, 0x18(r3)
	  stw       r0, 0x20(r3)
	  stw       r0, 0x24(r3)
	  stw       r0, 0x28(r3)
	  stw       r0, 0x2C(r3)
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
	.loc_0x0:
	  li        r9, 0
	  li        r8, 0xF0
	  sth       r9, 0x0(r3)
	  li        r7, 0xC
	  li        r6, 0x40
	  li        r5, 0x1
	  sth       r9, 0x2(r3)
	  li        r4, 0x7FFF
	  li        r0, 0x4000
	  sth       r9, 0x4(r3)
	  sth       r9, 0x6(r3)
	  sth       r9, 0x8(r3)
	  sth       r9, 0xA(r3)
	  sth       r8, 0xC(r3)
	  sth       r7, 0xE(r3)
	  sth       r6, 0x1A(r3)
	  sth       r9, 0x10(r3)
	  sth       r5, 0x12(r3)
	  sth       r5, 0x14(r3)
	  sth       r4, 0x16(r3)
	  sth       r0, 0x18(r3)
	  stw       r9, 0x20(r3)
	  stw       r9, 0x24(r3)
	  stw       r9, 0x28(r3)
	  stw       r9, 0x2C(r3)
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
	.loc_0x0:
	  li        r11, 0
	  lhz       r0, 0xC(r4)
	  sth       r11, 0x0(r3)
	  lhz       r10, 0xE(r4)
	  sth       r11, 0x2(r3)
	  lhz       r9, 0x1A(r4)
	  sth       r11, 0x4(r3)
	  lhz       r8, 0x10(r4)
	  sth       r11, 0x6(r3)
	  lhz       r7, 0x12(r4)
	  sth       r11, 0x8(r3)
	  lhz       r6, 0x14(r4)
	  sth       r11, 0xA(r3)
	  lhz       r5, 0x16(r4)
	  sth       r0, 0xC(r3)
	  lhz       r0, 0x18(r4)
	  sth       r10, 0xE(r3)
	  sth       r9, 0x1A(r3)
	  sth       r8, 0x10(r3)
	  sth       r7, 0x12(r3)
	  sth       r6, 0x14(r3)
	  sth       r5, 0x16(r3)
	  sth       r0, 0x18(r3)
	  stw       r11, 0x20(r3)
	  stw       r11, 0x24(r3)
	  stw       r11, 0x28(r3)
	  stw       r11, 0x2C(r3)
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
	.loc_0x0:
	  lhz       r0, 0xC(r3)
	  srawi     r0, r0, 0x8
	  rlwinm    r3,r0,0,24,31
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
	.loc_0x0:
	  lhz       r0, 0xC(r3)
	  rlwinm    r3,r0,0,24,31
	  blr
	*/
}
