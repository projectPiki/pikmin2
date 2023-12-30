#include "JSystem/JAudio/JAS/JASSeqCtrl.h"

/**
 * @note Address: 0x8009C858
 * @note Size: 0x60
 */
void JASSeqCtrl::init()
{
	_00 = nullptr;
	_04 = nullptr;
	_08 = 0;
	_0C = 0;
	for (int i = 0; i < 8; i++) {
		_10[i] = nullptr;
		_30[i] = 0;
	}
	mState.w = 0;
	_44      = nullptr;
}

/**
 * @note Address: 0x8009C8B8
 * @note Size: 0x14
 */
void JASSeqCtrl::start(void* p1, u32 p2)
{
	_00 = static_cast<u8*>(p1);
	_04 = _00 + p2;
}

/**
 * @note Address: 0x8009C8CC
 * @note Size: 0x6C
 */
bool JASSeqCtrl::loopEnd()
{
	u32 v1 = _0C;
	if (v1 == 0) {
		return false;
	}
	u16 v2 = _30[v1 - 1];
	if (v2 != 0) {
		v2--;
	}
	if (v2 == 0) {
		_0C--;
		return true;
	}
	_30[v1 - 1] = v2;
	_04         = _10[_0C - 1];
	return true;
}

/**
 * @note Address: 0x8009C938
 * @note Size: 0x30
 */
bool JASSeqCtrl::waitCountDown()
{
	if (0 < _08) {
		_08--;
		if (_08 != 0) {
			return false;
		}
	}
	return true;
}

/**
 * @note Address: 0x8009C968
 * @note Size: 0x38
 */
bool JASSeqCtrl::callIntr(void* p1)
{
	if (_44 != nullptr) {
		return false;
	}
	_44      = _04;
	_04      = static_cast<u8*>(p1);
	mState.w = _08;
	_08      = 0;
	return true;
}

/**
 * @note Address: 0x8009C9A0
 * @note Size: 0x34
 */
bool JASSeqCtrl::retIntr()
{
	if (_44 == nullptr) {
		return false;
	}
	_08 = mState.w;
	_04 = _44;
	_44 = nullptr;
	return true;
}

/**
 * @note Address: 0x8009C9D4
 * @note Size: 0x18
 */
u16 JASSeqCtrl::get16(u32 p1) const
{
	u16 result = _00[p1++] << 8;
	result |= _00[p1++];
	return result;
}

/**
 * @note Address: 0x8009C9EC
 * @note Size: 0x28
 */
u32 JASSeqCtrl::get24(u32 p1) const
{
	u32 result = _00[p1++] << 8;
	result |= _00[p1++];
	result <<= 8;
	result |= _00[p1++];
	return result;
}

/**
 * @note Address: 0x8009CA14
 * @note Size: 0x38
 */
u32 JASSeqCtrl::get32(u32 p1) const
{
	u32 result = _00[p1++] << 8;
	result |= _00[p1++];
	result <<= 8;
	result |= _00[p1++];
	result <<= 8;
	result |= _00[p1++];
	return result;
}

/**
 * @note Address: 0x8009CA4C
 * @note Size: 0x28
 */
u32 JASSeqCtrl::read16()
{
	u32 result = *(_04++) << 8;
	result |= *(_04++);
	return result;
}

/**
 * @note Address: 0x8009CA74
 * @note Size: 0x44
 */
u32 JASSeqCtrl::read24()
{
	u32 result = *(_04++) << 8;
	result |= *(_04++);
	result <<= 8;
	result |= *(_04++);
	return result;
}

/**
 * @note Address: N/A
 * @note Size: 0x5C
 */
u32 JASSeqCtrl::read32()
{
	// UNUSED FUNCTION
}
