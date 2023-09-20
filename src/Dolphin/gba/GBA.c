#include "Dolphin/gba.h"

char* __GBAVersion                           = "<< Dolphin SDK - GBA\trelease build: Dec  3 2003 18:41:55 (0x2301) >>";
static OSResetFunctionInfo ResetFunctionInfo = { OnReset, 0x7E };
static GBASecParam SecParams[4] ATTRIBUTE_ALIGN(32);
GBAControl __GBA[4];
static BOOL Initialized;
BOOL __GBAReset;

/*
 * --INFO--
 * Address:	800FEB2C
 * Size:	000054
 */
static void ShortCommandProc(int chan)
{
	GBAControl* port = &__GBA[chan];
	if (port->ret != 0) {
		return;
	}
	if ((port->input[0] != 0) || (port->input[1] != 4)) {
		port->ret = 1;
		return;
	}
	*port->status = port->input[2] & 0x3A;
}

/*
 * --INFO--
 * Address:	800FEB80
 * Size:	0000C0
 */
void GBAInit(void)
{
	GBAControl* gba;
	int chan;

	if (Initialized == FALSE) {
		Initialized = TRUE;
		OSRegisterVersion(__GBAVersion);
		for (chan = 0; chan < 4; ++chan) {
			gba        = &__GBA[chan];
			gba->delay = OSMicrosecondsToTicks(60);
			OSInitThreadQueue(&gba->threadQueue);
			gba->param = &SecParams[chan];
		}
		OSInitAlarm();

		DSPInit();

		__GBAReset = FALSE;
		OSRegisterResetFunction(&ResetFunctionInfo);
	}
}

/*
 * --INFO--
 * Address:	........
 * Size:	000064
 */
int GBAGetStatusAsync(int chan, u8* statusPtr)
{
	GBAControl* gba = &__GBA[chan];
	if (gba->callback) {
		return 2;
	}

	gba->output[0] = 0;
	gba->status    = statusPtr;
	gba->callback  = __GBASyncCallback;
	return __GBATransfer(chan, 1, 3, ShortCommandProc);
}

/*
 * --INFO--
 * Address:	800FEC40
 * Size:	000090
 */
int GBAGetStatus(int chan, u8* statusPtr)
{
	int status = GBAGetStatusAsync(chan, statusPtr);
	return (status != 0) ? status : __GBASync(chan);
}

/*
 * --INFO--
 * Address:	........
 * Size:	000064
 */
int GBAResetAsync(int chan, u8* statusPtr)
{
	GBAControl* gba = &__GBA[chan];
	if (gba->callback) {
		return 2;
	}

	gba->output[0] = 0xFF;
	gba->status    = statusPtr;
	gba->callback  = __GBASyncCallback;
	return __GBATransfer(chan, 1, 3, ShortCommandProc);
}

/*
 * --INFO--
 * Address:	800FECD0
 * Size:	000090
 */
int GBAReset(int chan, u8* statusPtr)
{
	int status = GBAResetAsync(chan, statusPtr);
	return (status != 0) ? status : __GBASync(chan);
}

/*
 * --INFO--
 * Address:	800FED60
 * Size:	000010
 */
static int OnReset(void)
{
	__GBAReset = TRUE;
	return 1;
}
