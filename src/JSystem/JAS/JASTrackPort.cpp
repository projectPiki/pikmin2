#include "JSystem/JAS/JASTrack.h"
#include "types.h"

/*
    Generated from dpostproc
*/

/*
 * --INFO--
 * Address:	8009C310
 * Size:	000088
 */
void JASTrackPort::init()
{
	for (int i = 0; i < 0x10; i++) {
		_00[i] = 0;
		_10[i] = 0;
		_20[i] = 0;
	}
}

/*
 * --INFO--
 * Address:	8009C398
 * Size:	000018
 */
u16 JASTrackPort::readImport(int p1)
{
	_00[p1] = 0;
	return _20[p1];
}

/*
 * --INFO--
 * Address:	8009C3B0
 * Size:	00001C
 */
u16 JASTrackPort::readExport(int p1)
{
	_10[p1] = 0;
	return _20[p1];
}

/*
 * --INFO--
 * Address:	8009C3CC
 * Size:	000018
 */
void JASTrackPort::writeImport(int p1, u16 p2)
{
	_00[p1] = 1;
	_20[p1] = p2;
}

/*
 * --INFO--
 * Address:	8009C3E4
 * Size:	00001C
 */
void JASTrackPort::writeExport(int p1, u16 p2)
{
	_10[p1] = 1;
	_20[p1] = p2;
}
