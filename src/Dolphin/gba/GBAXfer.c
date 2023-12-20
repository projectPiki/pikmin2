#include "Dolphin/gba.h"
#include "Dolphin/os.h"
#include "Dolphin/si.h"

/**
 * @note Address: 0x800FEF58
 * @note Size: 0xDC
 */
static void __GBAHandler(s32 chan, u32 flag, OSContext* context)
{
	GBASyncCallback syncCallback;
	GBAProcHandler procHandler;
	GBAControl* gba = &__GBA[chan];
	OSContext syncContext;

	if (__GBAReset == FALSE) {
		if (flag & 0xF) {
			gba->ret = 1;
		} else {
			gba->ret = 0;
		}
		procHandler = getGBAHandler(gba);
		if (procHandler) {
			gba->proc = nullptr;
			procHandler(chan);
		}
		if (gba->callback) {
			OSClearContext(&syncContext);
			OSSetCurrentContext(&syncContext);
			syncCallback  = gba->callback;
			gba->callback = nullptr;
			syncCallback(chan, gba->ret);
			OSClearContext(&syncContext);
			OSSetCurrentContext(context);
		}
	}
}

/**
 * @note Address: 0x800FF034
 * @note Size: 0x34
 */
void __GBASyncCallback(s32 chan, int ret) { OSWakeupThread(&__GBA[chan].threadQueue); }

/**
 * @note Address: 0x800FF068
 * @note Size: 0x6C
 */
int __GBASync(s32 chan)
{
	int result;
	GBAControl* gba = &__GBA[chan];
	int interrupts  = OSDisableInterrupts();
	while (gba->callback) {
		OSSleepThread(&gba->threadQueue);
	}
	result = gba->ret;
	OSRestoreInterrupts(interrupts);
	return result;
}

/**
 * @note Address: 0x800FF0D4
 * @note Size: 0x124
 */
static void TypeAndStatusCallback(s32 chan, u32 flags)
{
	GBAControl* gba = &__GBA[chan];
	OSContext* osContext;
	GBAProcHandler procHandler;
	OSContext newContext;
	GBASyncCallback syncCallback;

	if (__GBAReset == FALSE) {
		if ((u8)flags != 0 || ((flags & 0xFFFF0000) + 0xFFFC0000) != 0) {
			gba->ret = 1;
		} else {
			if (SITransfer(chan, gba->output, gba->outputBytes, gba->input, gba->inputBytes, &__GBAHandler, gba->delay) != 0) {
				return;
			}
			gba->ret = 2;
		}
		procHandler = getGBAHandler(gba);
		if (procHandler) {
			gba->proc = nullptr;
			procHandler(chan);
		}
		if (gba->callback) {
			osContext = OSGetCurrentContext();
			OSClearContext(&newContext);
			OSSetCurrentContext(&newContext);
			syncCallback  = gba->callback;
			gba->callback = nullptr;
			syncCallback(chan, gba->ret);
			OSClearContext(&newContext);
			OSSetCurrentContext(osContext);
			__OSReschedule();
		}
	}
}

/**
 * @note Address: 0x800FF1F8
 * @note Size: 0x74
 */
BOOL __GBATransfer(s32 chan, u32 outputBytes, u32 inputBytes, GBAProcHandler gbaProcHandler)
{
	u32 interruptsTemp;
	GBAControl* gba = &__GBA[chan];

	interruptsTemp   = OSDisableInterrupts();
	gba->proc        = gbaProcHandler;
	gba->outputBytes = outputBytes;
	gba->inputBytes  = inputBytes;
	SIGetTypeAsync(chan, &TypeAndStatusCallback);
	OSRestoreInterrupts(interruptsTemp);
	return FALSE;
}
