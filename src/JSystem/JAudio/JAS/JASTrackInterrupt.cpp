#include "JSystem/JAudio/JAS/JASTrack.h"

/**
 * @note Address: 0x800A29F8
 * @note Size: 0x44
 */
void JASIntrMgr::init()
{
	_00 = 1;
	_01 = 0;
	_02 = 0;
	_03 = 0;
	_04 = 0;
	_08 = 0;
	for (int i = 0; i < 8; i++) {
		_0C[i] = nullptr;
	}
}

/**
 * @note Address: 0x800A2A3C
 * @note Size: 0x24
 */
void JASIntrMgr::request(u32 interrupt)
{
	if ((_02 & (1 << interrupt)) == 0) {
		return;
	}
	_01 |= 1 << interrupt;
}

/**
 * @note Address: 0x800A2A60
 * @note Size: 0x24
 */
void JASIntrMgr::setIntr(u32 interrupt, void* data)
{
	_02 |= 1 << interrupt;
	_0C[interrupt] = data;
}

/**
 * @note Address: 0x800A2A84
 * @note Size: 0x18
 */
void JASIntrMgr::resetInter(u32 interrupt) { _02 &= ~(1 << interrupt); }

/**
 * @note Address: 0x800A2A9C
 * @note Size: 0x6C
 */
void* JASIntrMgr::checkIntr()
{
	if (_00 == 0) {
		return nullptr;
	}
	for (u32 i = 0, v1 = _02 & _01; v1 != 0; v1 >>= 1, i++) {
		if (v1 & 1) {
			_01 &= ~(1 << i);
			return _0C[i];
		}
	}
	return nullptr;
}

/**
 * @note Address: 0x800A2B08
 * @note Size: 0x70
 */
void JASIntrMgr::timerProcess()
{
	if (_04 == 0) {
		return;
	}
	_04--;
	if (_04 != 0) {
		return;
	}
	if ((_02 & 0x40) != 0) {
		_01 |= 0x40;
	}
	if (_03) {
		_03--;
		if (_03 == 0) {
			return;
		}
		_04 = _08;
		return;
	}
	_04 = _08;
	return;
}
