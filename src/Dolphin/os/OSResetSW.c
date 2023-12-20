#include "Dolphin/os.h"
#include "Dolphin/hw_regs.h"

static OSResetCallback ResetCallback;
static BOOL Down;
static BOOL LastState;
static OSTime HoldUp;
static OSTime HoldDown;

/**
 * @note Address: 0x800F06D0
 * @note Size: 0xF4
 */
void __OSResetSWInterruptHandler(__OSInterrupt interrupt, OSContext* context)
{
	OSResetCallback callback;

	HoldDown = __OSGetSystemTime();
	while (__OSGetSystemTime() - HoldDown < OSMicrosecondsToTicks(100) && !(__PIRegs[PI_INTRPT_SRC] & PI_INTRPT_RSWST)) {
		;
	}
	if (!(__PIRegs[PI_INTRPT_SRC] & PI_INTRPT_RSWST)) {
		LastState = Down = TRUE;
		__OSMaskInterrupts(OS_INTERRUPTMASK_PI_RSW);
		if (ResetCallback) {
			callback      = ResetCallback;
			ResetCallback = nullptr;
			callback();
		}
	}
	__PIRegs[PI_INTRPT_SRC] = 2;
}

/**
 * @note Address: 0x800F07C4
 * @note Size: 0x298
 */
BOOL OSGetResetButtonState()
{
	BOOL enabled;
	BOOL state;
	u32 reg;
	OSTime now;

	enabled = OSDisableInterrupts();

	now = __OSGetSystemTime();

	reg = __PIRegs[PI_INTRPT_SRC];
	if (!(reg & PI_INTRPT_RSWST)) {
		if (!Down) {
			Down     = TRUE;
			state    = HoldUp ? TRUE : FALSE;
			HoldDown = now;
		} else {
			state = (HoldUp || (OSMicrosecondsToTicks(100) < now - HoldDown)) ? TRUE : FALSE;
		}
	} else if (Down) {
		Down  = FALSE;
		state = LastState;
		if (state) {
			HoldUp = now;
		} else {
			HoldUp = 0;
		}
	} else if (HoldUp && (now - HoldUp < OSMillisecondsToTicks(40))) {
		state = TRUE;
	} else {
		state  = FALSE;
		HoldUp = 0;
	}

	LastState = state;

	if (GameChoice & 0x1F) {
		OSTime fire = (GameChoice & 0x1F) * 60;
		fire        = __OSStartTime + OSSecondsToTicks(fire);
		if (fire < now) {
			now -= fire;
			now = OSTicksToSeconds(now) / 2;
			if ((now & 1) == 0) {
				state = TRUE;
			} else {
				state = FALSE;
			}
		}
	}

	OSRestoreInterrupts(enabled);
	return state;
}

/**
 * @note Address: 0x800F0A5C
 * @note Size: 0x20
 */
BOOL OSGetResetSwitchState() { return OSGetResetButtonState(); }
