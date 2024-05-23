#include "JSystem/JAudio/JAS/JASRegisterParam.h"
#include "JSystem/JSupport/JSU.h"

/**
 * @note Address: 0x8009C714
 * @note Size: 0x50
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
	for (int i = 0; i < 4; i++) {
		_20[i] = 0;
	}
}

/**
 * @note Address: 0x8009C764
 * @note Size: 0x68
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
	for (int i = 0; i < 4; i++) {
		_20[i] = 0;
	}
}

/**
 * @note Address: 0x8009C7CC
 * @note Size: 0x70
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
	for (int i = 0; i < 4; i++) {
		_20[i] = 0;
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x2C
 */
void JASRegisterParam::setBankNumber(u8)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x8009C83C
 * @note Size: 0x10
 */
u8 JASRegisterParam::getBankNumber() const
{
	// should be JSUHiByte but doesnt match when used
	return _0C >> 8;
}

/**
 * @note Address: 0x8009C84C
 * @note Size: 0xC
 */
u8 JASRegisterParam::getProgramNumber() const
{
	return JSULoByte(_0C);
	// return *JSULoByte(&_0C);
}
