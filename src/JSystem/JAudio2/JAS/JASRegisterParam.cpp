#include "JSystem/JAS/JASRegisterParam.h"
#include "JSystem/JSupport/JSU.h"
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
	_00[0] = 0;
	_00[1] = 0;
	_00[2] = 0;
	_00[3] = 0;
	_00[4] = 0;
	_00[5] = 0;
	_0C    = 0;
	_0E    = 0;
	_16[2] = 0;
	_10    = 0;
	_12    = 0;
	_14    = 0;
	_16[0] = 0;
	_16[1] = 0;
	_20    = 0;
	_24    = 0;
	_28    = 0;
	_2C    = 0;
}

/*
 * --INFO--
 * Address:	8009C764
 * Size:	000068
 */
void JASRegisterParam::init()
{
	_00[0] = 0;
	_00[1] = 0;
	_00[2] = 0;
	_00[3] = 0;
	_00[4] = 0;
	_00[5] = 0;
	_0C    = 0xF0;
	_0E    = 0x0C;
	_16[2] = 0x40;
	_10    = 0;
	_12    = 1;
	_14    = 1;
	_16[0] = 0x7FFF;
	_16[1] = 0x4000;
	_20    = 0;
	_24    = 0;
	_28    = 0;
	_2C    = 0;
}

/*
 * --INFO--
 * Address:	8009C7CC
 * Size:	000070
 */
void JASRegisterParam::inherit(const JASRegisterParam& other)
{
	_00[0] = 0;
	_00[1] = 0;
	_00[2] = 0;
	_00[3] = 0;
	_00[4] = 0;
	_00[5] = 0;
	_0C    = other._0C;
	_0E    = other._0E;
	_16[2] = other._16[2];
	_10    = other._10;
	_12    = other._12;
	_14    = other._14;
	_16[0] = other._16[0];
	_16[1] = other._16[1];
	_20    = 0;
	_24    = 0;
	_28    = 0;
	_2C    = 0;
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
u8 JASRegisterParam::getBankNumber() const
{
	return JSUHiByte(_0C);
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
u8 JASRegisterParam::getProgramNumber() const
{
	return JSULoByte(_0C);
	// return *JSULoByte(&_0C);
}
