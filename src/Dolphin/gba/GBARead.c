#include "Dolphin/gba.h"

/**
 * @note Address: 0x800FED70
 * @note Size: 0x60
 */
void ReadProc(s32 chan)
{
	GBAControl* gba = &__GBA[chan];
	if (gba->ret == 0) {
		memcpy(gba->ptr, &gba->input, 4);
		*gba->status = gba->input[4] & 0x3A;
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x6C
 */
int GBAReadAsync(s32 chan, u8* ptr, u8* statusPtr)
{
	GBAControl* gba = &__GBA[chan];
	if (gba->callback) {
		return 2;
	}
	gba->output[0] = 0x14;
	gba->ptr       = ptr;
	gba->status    = statusPtr;
	gba->callback  = __GBASyncCallback;
	return __GBATransfer(chan, 1, 5, ReadProc);
}

/**
 * @note Address: 0x800FEDD0
 * @note Size: 0x94
 */
int GBARead(s32 chan, u8* ptr, u8* statusPtr)
{
	int _unused; // for stack size, probably commented out code
	int status = GBAReadAsync(chan, ptr, statusPtr);
	return (status != 0) ? status : __GBASync(chan);
}
