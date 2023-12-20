#include "Dolphin/gba.h"

/**
 * @note Address: 0x800FEE64
 * @note Size: 0x30
 */
void WriteProc(s32 chan)
{
	GBAControl* gba = &__GBA[chan];
	if (gba->ret == 0) {
		*gba->status = gba->input[0] & 0x3A;
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x94
 */
int GBWriteAsync(s32 chan, u8* ptr, u8* statusPtr)
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

/**
 * @note Address: 0x800FEE94
 * @note Size: 0xC4
 */
int GBAWrite(s32 chan, u8* ptr, u8* statusPtr)
{
	int _unused; // for stack size, probably commented out code
	int status = GBWriteAsync(chan, ptr, statusPtr);
	return (status != 0) ? status : __GBASync(chan);
}
