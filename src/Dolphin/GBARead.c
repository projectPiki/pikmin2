#include "Dolphin/gba.h"
#include "Dolphin/stl.h"

/*
 * --INFO--
 * Address:	800FED70
 * Size:	000060
 */
void ReadProc(int portIndex)
{
	GBA* gba = &__GBA[portIndex];
	if (gba->_20 == 0) {
		memcpy(gba->_18, &gba->_05, 4);
		*gba->_14 = gba->_08[1] & 0x3A;
	}
}

/*
 * --INFO--
 * Address:	........
 * Size:	00006C
 */
int GBAReadAsync(int portIndex, u8* p2, u8* p3)
{
	// UNUSED FUNCTION
	GBA* gba = &__GBA[portIndex];
	if (gba->m_syncCallback) {
		return 2;
	}
	gba->_00[0]         = 0x14;
	gba->_18            = p2;
	gba->_14            = p3;
	gba->m_syncCallback = __GBASyncCallback;
	return __GBATransfer(portIndex, 1, 5, ReadProc);
}

/*
 * --INFO--
 * Address:	800FEDD0
 * Size:	000094
 */
int GBARead(int portIndex, u8* p2, u8* p3)
{
	int _unused;
	int status = GBAReadAsync(portIndex, p2, p3);
	return (status != 0) ? status : __GBASync(portIndex);
}
