#include "Dolphin/gba.h"
#include "Dolphin/stl.h"

/*
 * --INFO--
 * Address:	800FEE64
 * Size:	000030
 */
void WriteProc(int portIndex)
{
	GBA* gba = &__GBA[portIndex];
	if (gba->_20 == 0) {
		*gba->_14 = gba->_05 & 0x3A;
	}
}

/*
 * --INFO--
 * Address:	........
 * Size:	000094
 */
int GBWriteAsync(int portIndex, u8* p2, u8* p3)
{
	// UNUSED FUNCTION
	GBA* gba = &__GBA[portIndex];
	if (gba->m_syncCallback) {
		return 2;
	}
	gba->_00[0] = 0x15;
	memcpy(&gba->_00[1], p2, 4);
	gba->_18            = p2;
	gba->_14            = p3;
	gba->m_syncCallback = __GBASyncCallback;
	return __GBATransfer(portIndex, 5, 1, WriteProc);
}

/*
 * --INFO--
 * Address:	800FEE94
 * Size:	0000C4
 */
int GBAWrite(int portIndex, u8* p2, u8* p3)
{
	int status = GBWriteAsync(portIndex, p2, p3);
	int _unused;
	return (status != 0) ? status : __GBASync(portIndex);
}
