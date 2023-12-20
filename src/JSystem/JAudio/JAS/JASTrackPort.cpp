#include "JSystem/JAudio/JAS/JASTrack.h"
#include "types.h"

/*
    Generated from dpostproc
*/

/**
 * @note Address: 0x8009C310
 * @note Size: 0x88
 */
void JASTrackPort::init()
{
	for (int i = 0; i < 0x10; i++) {
		_00[i] = 0;
		_10[i] = 0;
		_20[i] = 0;
	}
}

/**
 * @note Address: 0x8009C398
 * @note Size: 0x18
 */
u16 JASTrackPort::readImport(int p1)
{
	_00[p1] = 0;
	return _20[p1];
}

/**
 * @note Address: 0x8009C3B0
 * @note Size: 0x1C
 */
u16 JASTrackPort::readExport(int p1)
{
	_10[p1] = 0;
	return _20[p1];
}

/**
 * @note Address: 0x8009C3CC
 * @note Size: 0x18
 */
void JASTrackPort::writeImport(int p1, u16 p2)
{
	_00[p1] = 1;
	_20[p1] = p2;
}

/**
 * @note Address: 0x8009C3E4
 * @note Size: 0x1C
 */
void JASTrackPort::writeExport(int p1, u16 p2)
{
	_10[p1] = 1;
	_20[p1] = p2;
}
