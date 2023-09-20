#include "Dolphin/gba.h"

/*
 * --INFO--
 * Address:	800FEE64
 * Size:	000030
 */
void WriteProc(int chan)
{
	GBAControl* gba = &__GBA[chan];
	if (gba->ret == 0) {
		*gba->status = gba->input[0] & 0x3A;
	}
}

/*
 * --INFO--
 * Address:	........
 * Size:	000094
 */
int GBWriteAsync(int chan, u8* ptr, u8* statusPtr)
{
	GBAControl* gba = &__GBA[chan];
	if (gba->callback) {
		return 2;
	}
	gba->output[0] = 0x15;
	memcpy(&gba->output[1], ptr, 4);
	gba->ptr      = ptr;
	gba->status   = statusPtr;
	gba->callback = __GBASyncCallback;
	return __GBATransfer(chan, 5, 1, WriteProc);
}

/*
 * --INFO--
 * Address:	800FEE94
 * Size:	0000C4
 */
int GBAWrite(int chan, u8* ptr, u8* statusPtr)
{
	int _unused; // for stack size, probably commented out code
	int status = GBWriteAsync(chan, ptr, statusPtr);
	return (status != 0) ? status : __GBASync(chan);
}
