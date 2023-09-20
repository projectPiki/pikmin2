#include "Dolphin/gba.h"

/*
 * --INFO--
 * Address:	800FED70
 * Size:	000060
 */
void ReadProc(int chan)
{
	GBAControl* gba = &__GBA[chan];
	if (gba->ret == 0) {
		memcpy(gba->ptr, &gba->input, 4);
		*gba->status = gba->input[4] & 0x3A;
	}
}

/*
 * --INFO--
 * Address:	........
 * Size:	00006C
 */
int GBAReadAsync(int chan, u8* ptr, u8* statusPtr)
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

/*
 * --INFO--
 * Address:	800FEDD0
 * Size:	000094
 */
int GBARead(int chan, u8* ptr, u8* statusPtr)
{
	int _unused; // for stack size, probably commented out code
	int status = GBAReadAsync(chan, ptr, statusPtr);
	return (status != 0) ? status : __GBASync(chan);
}
