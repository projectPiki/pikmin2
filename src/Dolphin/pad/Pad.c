#include "Dolphin/pad.h"
#include "Dolphin/si.h"
#include "Dolphin/os.h"

const char* __PADVersion = "<< Dolphin SDK - PAD\trelease build: Aug  6 2003 04:30:02 (0x2301) >>";

// forward declarations of static functions.
static void SPEC0_MakeStatus(s32 chan, PADStatus* status, u32 data[2]);
static void SPEC1_MakeStatus(s32 chan, PADStatus* status, u32 data[2]);
static void SPEC2_MakeStatus(s32 chan, PADStatus* status, u32 data[2]);
static void PADTypeAndStatusCallback(s32 chan, u32 type);
static BOOL OnReset(BOOL final);

// static symbols.
static u32 Type[SI_MAX_CHAN];
static PADStatus Origin[SI_MAX_CHAN];
static u32 CmdProbeDevice[SI_MAX_CHAN];

static s32 ResettingChan                           = 32;
static u32 XPatchBits                              = PAD_CHAN0_BIT | PAD_CHAN1_BIT | PAD_CHAN2_BIT | PAD_CHAN3_BIT;
static u32 AnalogMode                              = 0x00000300u;
static u32 Spec                                    = 5;
static void (*MakeStatus)(s32, PADStatus*, u32[2]) = SPEC2_MakeStatus;

static u32 CmdReadOrigin = 0x41 << 24;
static u32 CmdCalibrate  = 0x42 << 24;

static OSResetFunctionInfo ResetFunctionInfo = { OnReset, 127 };

static BOOL Initialized;

static u32 EnabledBits;
static u32 ResettingBits;
static u32 RecalibrateBits;
static u32 WaitingBits;
static u32 CheckingBits;
static u32 PendingBits;
static u32 BarrelBits;

static void (*SamplingCallback)(void);

// global symbols
u32 __PADSpec;

// useful macros
#define offsetof(type, memb) ((u32) & ((type*)0)->memb)

/**
 * @note Address: N/A
 * @note Size: 0x60
 */
static void PADEnable(s32 chan)
{
	u32 cmd;
	u32 chanBit;
	u32 data[2];

	chanBit = PAD_CHAN0_BIT >> chan;
	EnabledBits |= chanBit;
	SIGetResponse(chan, data);
	cmd = (0x40 << 16) | AnalogMode;
	SISetCommand(chan, cmd);
	SIEnablePolling(EnabledBits);
}

/**
 * @note Address: N/A
 * @note Size: 0xA4
 */
static void PADDisable(s32 chan)
{
	BOOL enabled;
	u32 chanBit;

	enabled = OSDisableInterrupts();

	chanBit = PAD_CHAN0_BIT >> chan;
	SIDisablePolling(chanBit);
	EnabledBits &= ~chanBit;
	WaitingBits &= ~chanBit;
	CheckingBits &= ~chanBit;
	PendingBits &= ~chanBit;
	BarrelBits &= ~chanBit;
	OSSetWirelessID(chan, 0);

	OSRestoreInterrupts(enabled);
}

/**
 * @note Address: N/A
 * @note Size: 0x70
 */
static void DoReset(void)
{
	u32 chanBit;

	ResettingChan = __cntlzw(ResettingBits);
	if (ResettingChan == 32) {
		return;
	}

	ASSERT(0 <= ResettingChan && ResettingChan < SI_MAX_CHAN);

	chanBit = PAD_CHAN0_BIT >> ResettingChan;
	ResettingBits &= ~chanBit;

	memset(&Origin[ResettingChan], 0, sizeof(PADStatus));
	SIGetTypeAsync(ResettingChan, (SITypeAndStatusCallback)PADTypeAndStatusCallback);
}

/**
 * @note Address: 0x800F3540
 * @note Size: 0x1A4
 */
static void UpdateOrigin(s32 chan)
{
	PADStatus* origin;
	u32 chanBit = PAD_CHAN0_BIT >> chan;

	origin = &Origin[chan];
	switch (AnalogMode & 0x00000700u) {
	case 0x00000000u:
	case 0x00000500u:
	case 0x00000600u:
	case 0x00000700u:
		origin->triggerLeft &= ~15;
		origin->triggerRight &= ~15;
		origin->analogA &= ~15;
		origin->analogB &= ~15;
		break;
	case 0x00000100u:
		origin->substickX &= ~15;
		origin->substickY &= ~15;
		origin->analogA &= ~15;
		origin->analogB &= ~15;
		break;
	case 0x00000200u:
		origin->substickX &= ~15;
		origin->substickY &= ~15;
		origin->triggerLeft &= ~15;
		origin->triggerRight &= ~15;
		break;
	case 0x00000300u:
		break;
	case 0x00000400u:
		break;
	}

	origin->stickX -= 128;
	origin->stickY -= 128;
	origin->substickX -= 128;
	origin->substickY -= 128;

	if (XPatchBits & chanBit) {
		if (64 < origin->stickX && (SIGetType(chan) & 0xffff0000) == SI_GC_CONTROLLER) {
			origin->stickX = 0;
		}
	}
}

/**
 * @note Address: 0x800F36E4
 * @note Size: 0xC4
 */
static void PADOriginCallback(s32 chan, u32 error, OSContext* context)
{
	ASSERT(0 <= ResettingChan && ResettingChan < SI_MAX_CHAN);
	ASSERT(chan == ResettingChan);
	if (!(error & (SI_ERROR_UNDER_RUN | SI_ERROR_OVER_RUN | SI_ERROR_NO_RESPONSE | SI_ERROR_COLLISION))) {
		UpdateOrigin(ResettingChan);
		PADEnable(ResettingChan);
	}
	DoReset();
}

/**
 * @note Address: 0x800F37A8
 * @note Size: 0xCC
 */
static void PADOriginUpdateCallback(s32 chan, u32 error, OSContext* context)
{
	ASSERT(0 <= chan && chan < SI_MAX_CHAN);

	if (!(EnabledBits & (PAD_CHAN0_BIT >> chan))) {
		return;
	}

	if (!(error & (SI_ERROR_UNDER_RUN | SI_ERROR_OVER_RUN | SI_ERROR_NO_RESPONSE | SI_ERROR_COLLISION))) {
		UpdateOrigin(chan);
	}

	if (error & SI_ERROR_NO_RESPONSE) {
		PADDisable(chan);
	}
}

/**
 * @note Address: 0x800F3874
 * @note Size: 0xD8
 */
static void PADProbeCallback(s32 chan, u32 error, OSContext* context)
{
	ASSERT(0 <= ResettingChan && ResettingChan < SI_MAX_CHAN);
	ASSERT(chan == ResettingChan);
	ASSERT((Type[chan] & SI_WIRELESS_CONT_MASK) == SI_WIRELESS_CONT && !(Type[chan] & SI_WIRELESS_LITE));
	if (!(error & (SI_ERROR_UNDER_RUN | SI_ERROR_OVER_RUN | SI_ERROR_NO_RESPONSE | SI_ERROR_COLLISION))) {
		PADEnable(ResettingChan);
		WaitingBits |= PAD_CHAN0_BIT >> ResettingChan;
	}
	DoReset();
}

/**
 * @note Address: 0x800F394C
 * @note Size: 0x32C
 */
static void PADTypeAndStatusCallback(s32 chan, u32 type)
{
	u32 chanBit;
	u32 recalibrate;
	BOOL rc = TRUE;
	u32 error;

	ASSERT(0 <= ResettingChan && ResettingChan < SI_MAX_CHAN);
	ASSERT(chan == ResettingChan);

	chanBit     = PAD_CHAN0_BIT >> ResettingChan;
	error       = type & 0xFF;
	recalibrate = RecalibrateBits & chanBit;
	RecalibrateBits &= ~chanBit;

	if (error & (SI_ERROR_UNDER_RUN | SI_ERROR_OVER_RUN | SI_ERROR_NO_RESPONSE | SI_ERROR_COLLISION)) {
		DoReset();
		return;
	}

	type &= ~0xFF;

	Type[ResettingChan] = type;

	if ((type & SI_TYPE_MASK) != SI_TYPE_GC || !(type & SI_GC_STANDARD)) {
		DoReset();
		return;
	}

	if (Spec < PAD_SPEC_2) {
		PADEnable(ResettingChan);
		DoReset();
		return;
	}

	if (!(type & SI_GC_WIRELESS) || (type & SI_WIRELESS_IR)) {
		if (recalibrate) {
			rc = SITransfer(ResettingChan, &CmdCalibrate, 3, &Origin[ResettingChan], 10, (SICallback)PADOriginCallback, 0);
		} else {
			rc = SITransfer(ResettingChan, &CmdReadOrigin, 1, &Origin[ResettingChan], 10, (SICallback)PADOriginCallback, 0);
		}
	} else if ((type & SI_WIRELESS_FIX_ID) && (type & SI_WIRELESS_CONT_MASK) == SI_WIRELESS_CONT && !(type & SI_WIRELESS_LITE)) {
		if (type & SI_WIRELESS_RECEIVED) {
			rc = SITransfer(ResettingChan, &CmdReadOrigin, 1, &Origin[ResettingChan], 10, (SICallback)PADOriginCallback, 0);
		} else {
			rc = SITransfer(ResettingChan, &CmdProbeDevice[ResettingChan], 3, &Origin[ResettingChan], 8, (SICallback)PADProbeCallback, 0);
		}
	}
	if (!rc) {
		PendingBits |= chanBit;
		DoReset();
		return;
	}
}

/**
 * @note Address: 0x800F3C78
 * @note Size: 0x140
 */
static void PADReceiveCheckCallback(s32 chan, u32 type)
{
	u32 error;
	u32 chanBit;

	chanBit = PAD_CHAN0_BIT >> chan;
	if (!(EnabledBits & chanBit)) {
		return;
	}

	error = type & 0xFF;
	type &= ~0xFF;

	WaitingBits &= ~chanBit;
	CheckingBits &= ~chanBit;

	if (!(error & (SI_ERROR_UNDER_RUN | SI_ERROR_OVER_RUN | SI_ERROR_NO_RESPONSE | SI_ERROR_COLLISION)) && (type & SI_GC_WIRELESS)
	    && (type & SI_WIRELESS_FIX_ID) && (type & SI_WIRELESS_RECEIVED) && !(type & SI_WIRELESS_IR)
	    && (type & SI_WIRELESS_CONT_MASK) == SI_WIRELESS_CONT && !(type & SI_WIRELESS_LITE)) {
		SITransfer(chan, &CmdReadOrigin, 1, &Origin[chan], 10, (SICallback)PADOriginUpdateCallback, 0);
	} else {
		PADDisable(chan);
	}
}

/**
 * @note Address: 0x800F3DB8
 * @note Size: 0x110
 */
BOOL PADReset(u32 mask)
{
	BOOL enabled;
	u32 diableBits;

	ASSERTMSG((mask & ~(PAD_CHAN0_BIT | PAD_CHAN1_BIT | PAD_CHAN2_BIT | PAD_CHAN3_BIT)) == 0, "PADReset(): invalid mask");

	enabled = OSDisableInterrupts();

	mask |= PendingBits;
	PendingBits = 0;
	mask &= ~(WaitingBits | CheckingBits);
	ResettingBits |= mask;
	diableBits = ResettingBits & EnabledBits;
	EnabledBits &= ~mask;
	BarrelBits &= ~mask;

	if (Spec == PAD_SPEC_4) {
		RecalibrateBits |= mask;
	}

	SIDisablePolling(diableBits);

	if (ResettingChan == 32) {
		DoReset();
	}
	OSRestoreInterrupts(enabled);
	return TRUE;
}

/**
 * @note Address: 0x800F3EC8
 * @note Size: 0x114
 */
BOOL PADRecalibrate(u32 mask)
{
	BOOL enabled;
	u32 disableBits;

	ASSERTMSG((mask & ~(PAD_CHAN0_BIT | PAD_CHAN1_BIT | PAD_CHAN2_BIT | PAD_CHAN3_BIT)) == 0, "PADReset(): invalid mask");
	enabled = OSDisableInterrupts();

	mask |= PendingBits;
	PendingBits = 0;
	mask &= ~(WaitingBits | CheckingBits);
	ResettingBits |= mask;
	disableBits = ResettingBits & EnabledBits;
	EnabledBits &= ~mask;
	BarrelBits &= ~mask;

	if (!(GameChoice & 0x40)) {
		RecalibrateBits |= mask;
	}

	SIDisablePolling(disableBits);
	if (ResettingChan == 32) {
		DoReset();
	}
	OSRestoreInterrupts(enabled);
	return TRUE;
}

/**
 * @note Address: 0x800F3FDC
 * @note Size: 0x150
 */
BOOL PADInit(void)
{
	s32 chan;
	if (Initialized) {
		return TRUE;
	}

	OSRegisterVersion(__PADVersion);

	if (__PADSpec) {
		PADSetSpec(__PADSpec);
	}

	Initialized = TRUE;

	if (__PADFixBits != 0) {
		OSTime time = OSGetTime();
		__OSWirelessPadFixMode
		    = (u16)((((time)&0xffff) + ((time >> 16) & 0xffff) + ((time >> 32) & 0xffff) + ((time >> 48) & 0xffff)) & 0x3fffu);
		RecalibrateBits = PAD_CHAN0_BIT | PAD_CHAN1_BIT | PAD_CHAN2_BIT | PAD_CHAN3_BIT;
	}

	for (chan = 0; chan < SI_MAX_CHAN; ++chan) {
		CmdProbeDevice[chan] = (0x4D << 24) | (chan << 22) | ((__OSWirelessPadFixMode & 0x3fffu) << 8);
	}

	SIRefreshSamplingRate();
	OSRegisterResetFunction(&ResetFunctionInfo);
	return PADReset(PAD_CHAN0_BIT | PAD_CHAN1_BIT | PAD_CHAN2_BIT | PAD_CHAN3_BIT);
}

/**
 * @note Address: 0x800F412C
 * @note Size: 0x300
 */
u32 PADRead(PADStatus* status)
{
	BOOL enabled;
	s32 chan;
	u32 data[2];
	u32 chanBit;
	u32 sr;
	s32 chanShift;
	u32 motor;

	enabled = OSDisableInterrupts();

	motor = 0;
	for (chan = 0; chan < SI_MAX_CHAN; chan++, status++) {
		chanBit   = PAD_CHAN0_BIT >> chan;
		chanShift = 8 * (SI_MAX_CHAN - 1 - chan);

		if (PendingBits & chanBit) {
			PADReset(0);
			status->err = PAD_ERR_NOT_READY;
			memset(status, 0, offsetof(PADStatus, err));
			continue;
		}

		if ((ResettingBits & chanBit) || ResettingChan == chan) {
			status->err = PAD_ERR_NOT_READY;
			memset(status, 0, offsetof(PADStatus, err));
			continue;
		}

		if (!(EnabledBits & chanBit)) {
			status->err = (s8)PAD_ERR_NO_CONTROLLER;
			memset(status, 0, offsetof(PADStatus, err));
			continue;
		}

		if (SIIsChanBusy(chan)) {
			status->err = PAD_ERR_TRANSFER;
			memset(status, 0, offsetof(PADStatus, err));
			continue;
		}

		sr = SIGetStatus(chan);
		if (sr & SI_ERROR_NO_RESPONSE) {
			SIGetResponse(chan, data);

			if (WaitingBits & chanBit) {
				status->err = (s8)PAD_ERR_NONE;
				memset(status, 0, offsetof(PADStatus, err));

				if (!(CheckingBits & chanBit)) {
					CheckingBits |= chanBit;
					SIGetTypeAsync(chan, (SITypeAndStatusCallback)PADReceiveCheckCallback);
				}
				continue;
			}

			PADDisable(chan);

			status->err = (s8)PAD_ERR_NO_CONTROLLER;
			memset(status, 0, offsetof(PADStatus, err));
			continue;
		}

		if (!(SIGetType(chan) & SI_GC_NOMOTOR)) {
			motor |= chanBit;
		}

		if (!SIGetResponse(chan, data)) {
			status->err = PAD_ERR_TRANSFER;
			memset(status, 0, offsetof(PADStatus, err));
			continue;
		}

		if (data[0] & 0x80000000) {
			status->err = PAD_ERR_TRANSFER;
			memset(status, 0, offsetof(PADStatus, err));
			continue;
		}

		MakeStatus(chan, status, data);

		// Check and clear PAD_ORIGIN bit
		if (status->button & 0x2000) {
			status->err = PAD_ERR_TRANSFER;
			memset(status, 0, offsetof(PADStatus, err));

			// Get origin. It is okay if the following transfer fails
			// since the PAD_ORIGIN bit remains until the read origin
			// command complete.
			SITransfer(chan, &CmdReadOrigin, 1, &Origin[chan], 10, (SICallback)PADOriginUpdateCallback, 0);
			continue;
		}

		status->err = PAD_ERR_NONE;

		// Clear PAD_INTERFERE bit
		status->button &= ~0x0080;
	}

	OSRestoreInterrupts(enabled);
	return motor;
}

/**
 * @note Address: N/A
 * @note Size: 0xCC
 */
void PADControlAllMotors(u32* commandArray)
{
	BOOL enabled;
	s32 chan;
	u32 command;
	BOOL commit;
	u32 chanBit;

	enabled = OSDisableInterrupts();
	commit  = FALSE;
	for (chan = 0; chan < SI_MAX_CHAN; chan++, commandArray++) {
		chanBit = PAD_CHAN0_BIT >> chan;
		if ((EnabledBits & chanBit) && !(SIGetType(chan) & SI_GC_NOMOTOR)) {
			command = *commandArray;
			if (Spec < PAD_SPEC_2 && command == PAD_MOTOR_STOP_HARD) {
				command = PAD_MOTOR_STOP;
			}

			SISetCommand(chan, (0x40 << 16) | AnalogMode | (command & (0x00000001 | 0x00000002)));
			commit = TRUE;
		}
	}
	if (commit) {
		SITransferCommands();
	}
	OSRestoreInterrupts(enabled);
}

/**
 * @note Address: 0x800F442C
 * @note Size: 0xB8
 */
void PADControlMotor(s32 chan, u32 command)
{
	BOOL enabled;
	u32 chanBit;

	enabled = OSDisableInterrupts();
	chanBit = PAD_CHAN0_BIT >> chan;
	if ((EnabledBits & chanBit) && !(SIGetType(chan) & SI_GC_NOMOTOR)) {
		if (Spec < PAD_SPEC_2 && command == PAD_MOTOR_STOP_HARD) {
			command = PAD_MOTOR_STOP;
		}
		if (GameChoice & 0x20) {
			command = PAD_MOTOR_STOP;
		}

		SISetCommand(chan, (0x40 << 16) | AnalogMode | (command & (0x00000001 | 0x00000002)));
		SITransferCommands();
	}
	OSRestoreInterrupts(enabled);
}

/**
 * @note Address: 0x800F44E4
 * @note Size: 0x60
 */
void PADSetSpec(u32 spec)
{
	__PADSpec = 0;
	switch (spec) {
	case PAD_SPEC_0:
		MakeStatus = SPEC0_MakeStatus;
		break;
	case PAD_SPEC_1:
		MakeStatus = SPEC1_MakeStatus;
		break;
	case PAD_SPEC_2:
	case PAD_SPEC_3:
	case PAD_SPEC_4:
	case PAD_SPEC_5:
		MakeStatus = SPEC2_MakeStatus;
		break;
	}
	Spec = spec;
}

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
u32 PADGetSpec(void) { return Spec; }

/**
 * @note Address: 0x800F4544
 * @note Size: 0x174
 */
static void SPEC0_MakeStatus(s32 chan, PADStatus* status, u32 data[2])
{
	status->button = 0;
	status->button |= ((data[0] >> 16) & 0x0008) ? PAD_BUTTON_A : 0;
	status->button |= ((data[0] >> 16) & 0x0020) ? PAD_BUTTON_B : 0;
	status->button |= ((data[0] >> 16) & 0x0100) ? PAD_BUTTON_X : 0;
	status->button |= ((data[0] >> 16) & 0x0001) ? PAD_BUTTON_Y : 0;
	status->button |= ((data[0] >> 16) & 0x0010) ? PAD_BUTTON_START : 0;
	status->stickX       = (s8)(data[1] >> 16);
	status->stickY       = (s8)(data[1] >> 24);
	status->substickX    = (s8)(data[1]);
	status->substickY    = (s8)(data[1] >> 8);
	status->triggerLeft  = (u8)(data[0] >> 8);
	status->triggerRight = (u8)data[0];
	status->analogA      = 0;
	status->analogB      = 0;
	if (170 <= status->triggerLeft) {
		status->button |= PAD_TRIGGER_L;
	}
	if (170 <= status->triggerRight) {
		status->button |= PAD_TRIGGER_R;
	}
	status->stickX -= 128;
	status->stickY -= 128;
	status->substickX -= 128;
	status->substickY -= 128;
}

/**
 * @note Address: 0x800F46B8
 * @note Size: 0x174
 */
static void SPEC1_MakeStatus(s32 chan, PADStatus* status, u32 data[2])
{
	status->button = 0;
	status->button |= ((data[0] >> 16) & 0x0080) ? PAD_BUTTON_A : 0;
	status->button |= ((data[0] >> 16) & 0x0100) ? PAD_BUTTON_B : 0;
	status->button |= ((data[0] >> 16) & 0x0020) ? PAD_BUTTON_X : 0;
	status->button |= ((data[0] >> 16) & 0x0010) ? PAD_BUTTON_Y : 0;
	status->button |= ((data[0] >> 16) & 0x0200) ? PAD_BUTTON_START : 0;

	status->stickX    = (s8)(data[1] >> 16);
	status->stickY    = (s8)(data[1] >> 24);
	status->substickX = (s8)(data[1]);
	status->substickY = (s8)(data[1] >> 8);

	status->triggerLeft  = (u8)(data[0] >> 8);
	status->triggerRight = (u8)data[0];

	status->analogA = 0;
	status->analogB = 0;

	if (170 <= status->triggerLeft) {
		status->button |= PAD_TRIGGER_L;
	}
	if (170 <= status->triggerRight) {
		status->button |= PAD_TRIGGER_R;
	}

	status->stickX -= 128;
	status->stickY -= 128;
	status->substickX -= 128;
	status->substickY -= 128;
}

/**
 * @note Address: N/A
 * @note Size: 0x54
 */
static s8 ClampS8(s8 var, s8 org)
{
	if (0 < org) {
		s8 min = (s8)(-128 + org);
		if (var < min) {
			var = min;
		}
	} else if (org < 0) {
		s8 max = (s8)(127 + org);
		if (max < var) {
			var = max;
		}
	}
	return var -= org;
}

/**
 * @note Address: N/A
 * @note Size: 0x1C
 */
static u8 ClampU8(u8 var, u8 org)
{
	if (var < org) {
		var = org;
	}
	return var -= org;
}

/**
 * @note Address: 0x800F482C
 * @note Size: 0x470
 */
static void SPEC2_MakeStatus(s32 chan, PADStatus* status, u32 data[2])
{
	PADStatus* origin;
	u32 type;

	status->button = (u16)((data[0] >> 16) & PAD_ALL);
	status->stickX = (s8)(data[0] >> 8);
	status->stickY = (s8)(data[0]);

	switch (AnalogMode & 0x00000700) {
	case 0x00000000:
	case 0x00000500:
	case 0x00000600:
	case 0x00000700:
		status->substickX    = (s8)(data[1] >> 24);
		status->substickY    = (s8)(data[1] >> 16);
		status->triggerLeft  = (u8)(((data[1] >> 12) & 0x0f) << 4);
		status->triggerRight = (u8)(((data[1] >> 8) & 0x0f) << 4);
		status->analogA      = (u8)(((data[1] >> 4) & 0x0f) << 4);
		status->analogB      = (u8)(((data[1] >> 0) & 0x0f) << 4);
		break;
	case 0x00000100:
		status->substickX    = (s8)(((data[1] >> 28) & 0x0f) << 4);
		status->substickY    = (s8)(((data[1] >> 24) & 0x0f) << 4);
		status->triggerLeft  = (u8)(data[1] >> 16);
		status->triggerRight = (u8)(data[1] >> 8);
		status->analogA      = (u8)(((data[1] >> 4) & 0x0f) << 4);
		status->analogB      = (u8)(((data[1] >> 0) & 0x0f) << 4);
		break;
	case 0x00000200:
		status->substickX    = (s8)(((data[1] >> 28) & 0x0f) << 4);
		status->substickY    = (s8)(((data[1] >> 24) & 0x0f) << 4);
		status->triggerLeft  = (u8)(((data[1] >> 20) & 0x0f) << 4);
		status->triggerRight = (u8)(((data[1] >> 16) & 0x0f) << 4);
		status->analogA      = (u8)(data[1] >> 8);
		status->analogB      = (u8)(data[1] >> 0);
		break;
	case 0x00000300:
		status->substickX    = (s8)(data[1] >> 24);
		status->substickY    = (s8)(data[1] >> 16);
		status->triggerLeft  = (u8)(data[1] >> 8);
		status->triggerRight = (u8)(data[1] >> 0);
		status->analogA      = 0;
		status->analogB      = 0;
		break;
	case 0x00000400:
		status->substickX    = (s8)(data[1] >> 24);
		status->substickY    = (s8)(data[1] >> 16);
		status->triggerLeft  = 0;
		status->triggerRight = 0;
		status->analogA      = (u8)(data[1] >> 8);
		status->analogB      = (u8)(data[1] >> 0);
		break;
	}

	status->stickX -= 128;
	status->stickY -= 128;
	status->substickX -= 128;
	status->substickY -= 128;

	type = Type[chan];

	if (((Type[chan] & 0xffff0000) == SI_GC_CONTROLLER) && ((status->button & 0x80) ^ 0x80)) {
		BarrelBits |= (PAD_CHAN0_BIT >> chan);
		status->stickX    = 0;
		status->stickY    = 0;
		status->substickX = 0;
		status->substickY = 0;
		return;
	} else {
		BarrelBits &= ~(PAD_CHAN0_BIT >> chan);
	}

	origin               = &Origin[chan];
	status->stickX       = ClampS8(status->stickX, origin->stickX);
	status->stickY       = ClampS8(status->stickY, origin->stickY);
	status->substickX    = ClampS8(status->substickX, origin->substickX);
	status->substickY    = ClampS8(status->substickY, origin->substickY);
	status->triggerLeft  = ClampU8(status->triggerLeft, origin->triggerLeft);
	status->triggerRight = ClampU8(status->triggerRight, origin->triggerRight);
	/*
	.loc_0x0:
	  lwz       r0, 0x0(r5)
	  rlwinm    r0,r0,16,18,31
	  sth       r0, 0x0(r4)
	  lwz       r0, 0x0(r5)
	  rlwinm    r0,r0,24,8,31
	  extsb     r0, r0
	  stb       r0, 0x2(r4)
	  lwz       r0, 0x0(r5)
	  extsb     r0, r0
	  stb       r0, 0x3(r4)
	  lwz       r0, -0x7C74(r13)
	  rlwinm    r0,r0,0,21,23
	  cmpwi     r0, 0x400
	  beq-      .loc_0x1CC
	  bge-      .loc_0x6C
	  cmpwi     r0, 0x200
	  beq-      .loc_0x138
	  bge-      .loc_0x60
	  cmpwi     r0, 0x100
	  beq-      .loc_0xE4
	  bge-      .loc_0x20C
	  cmpwi     r0, 0
	  beq-      .loc_0x90
	  b         .loc_0x20C

	.loc_0x60:
	  cmpwi     r0, 0x300
	  beq-      .loc_0x188
	  b         .loc_0x20C

	.loc_0x6C:
	  cmpwi     r0, 0x600
	  beq-      .loc_0x90
	  bge-      .loc_0x84
	  cmpwi     r0, 0x500
	  beq-      .loc_0x90
	  b         .loc_0x20C

	.loc_0x84:
	  cmpwi     r0, 0x700
	  beq-      .loc_0x90
	  b         .loc_0x20C

	.loc_0x90:
	  lwz       r0, 0x4(r5)
	  rlwinm    r0,r0,8,24,31
	  extsb     r0, r0
	  stb       r0, 0x4(r4)
	  lwz       r0, 0x4(r5)
	  rlwinm    r0,r0,16,16,31
	  extsb     r0, r0
	  stb       r0, 0x5(r4)
	  lwz       r0, 0x4(r5)
	  rlwinm    r0,r0,24,24,27
	  stb       r0, 0x6(r4)
	  lwz       r0, 0x4(r5)
	  rlwinm    r0,r0,28,24,27
	  stb       r0, 0x7(r4)
	  lwz       r0, 0x4(r5)
	  rlwinm    r0,r0,0,24,27
	  stb       r0, 0x8(r4)
	  lwz       r0, 0x4(r5)
	  rlwinm    r0,r0,4,24,27
	  stb       r0, 0x9(r4)
	  b         .loc_0x20C

	.loc_0xE4:
	  lwz       r0, 0x4(r5)
	  rlwinm    r0,r0,8,24,27
	  extsb     r0, r0
	  stb       r0, 0x4(r4)
	  lwz       r0, 0x4(r5)
	  rlwinm    r0,r0,12,24,27
	  extsb     r0, r0
	  stb       r0, 0x5(r4)
	  lwz       r0, 0x4(r5)
	  rlwinm    r0,r0,16,24,31
	  stb       r0, 0x6(r4)
	  lwz       r0, 0x4(r5)
	  rlwinm    r0,r0,24,24,31
	  stb       r0, 0x7(r4)
	  lwz       r0, 0x4(r5)
	  rlwinm    r0,r0,0,24,27
	  stb       r0, 0x8(r4)
	  lwz       r0, 0x4(r5)
	  rlwinm    r0,r0,4,24,27
	  stb       r0, 0x9(r4)
	  b         .loc_0x20C

	.loc_0x138:
	  lwz       r0, 0x4(r5)
	  rlwinm    r0,r0,8,24,27
	  extsb     r0, r0
	  stb       r0, 0x4(r4)
	  lwz       r0, 0x4(r5)
	  rlwinm    r0,r0,12,24,27
	  extsb     r0, r0
	  stb       r0, 0x5(r4)
	  lwz       r0, 0x4(r5)
	  rlwinm    r0,r0,16,24,27
	  stb       r0, 0x6(r4)
	  lwz       r0, 0x4(r5)
	  rlwinm    r0,r0,20,24,27
	  stb       r0, 0x7(r4)
	  lwz       r0, 0x4(r5)
	  rlwinm    r0,r0,24,24,31
	  stb       r0, 0x8(r4)
	  lwz       r0, 0x4(r5)
	  stb       r0, 0x9(r4)
	  b         .loc_0x20C

	.loc_0x188:
	  lwz       r6, 0x4(r5)
	  li        r0, 0
	  rlwinm    r6,r6,8,24,31
	  extsb     r6, r6
	  stb       r6, 0x4(r4)
	  lwz       r6, 0x4(r5)
	  rlwinm    r6,r6,16,16,31
	  extsb     r6, r6
	  stb       r6, 0x5(r4)
	  lwz       r6, 0x4(r5)
	  rlwinm    r6,r6,24,24,31
	  stb       r6, 0x6(r4)
	  lwz       r5, 0x4(r5)
	  stb       r5, 0x7(r4)
	  stb       r0, 0x8(r4)
	  stb       r0, 0x9(r4)
	  b         .loc_0x20C

	.loc_0x1CC:
	  lwz       r6, 0x4(r5)
	  li        r0, 0
	  rlwinm    r6,r6,8,24,31
	  extsb     r6, r6
	  stb       r6, 0x4(r4)
	  lwz       r6, 0x4(r5)
	  rlwinm    r6,r6,16,16,31
	  extsb     r6, r6
	  stb       r6, 0x5(r4)
	  stb       r0, 0x6(r4)
	  stb       r0, 0x7(r4)
	  lwz       r0, 0x4(r5)
	  rlwinm    r0,r0,24,24,31
	  stb       r0, 0x8(r4)
	  lwz       r0, 0x4(r5)
	  stb       r0, 0x9(r4)

	.loc_0x20C:
	  lbz       r7, 0x2(r4)
	  lis       r5, 0x804F
	  rlwinm    r6,r3,2,0,29
	  subi      r0, r7, 0x80
	  stb       r0, 0x2(r4)
	  addi      r0, r5, 0x7130
	  add       r5, r0, r6
	  lbz       r6, 0x3(r4)
	  subi      r0, r6, 0x80
	  stb       r0, 0x3(r4)
	  lbz       r6, 0x4(r4)
	  subi      r0, r6, 0x80
	  stb       r0, 0x4(r4)
	  lbz       r6, 0x5(r4)
	  subi      r0, r6, 0x80
	  stb       r0, 0x5(r4)
	  lwz       r0, 0x0(r5)
	  rlwinm    r5,r0,0,0,15
	  subis     r0, r5, 0x900
	  cmplwi    r0, 0
	  bne-      .loc_0x2A0
	  lhz       r0, 0x0(r4)
	  rlwinm    r0,r0,0,24,24
	  xori      r0, r0, 0x80
	  cmpwi     r0, 0
	  beq-      .loc_0x2A0
	  lis       r0, 0x8000
	  lwz       r5, -0x6FF4(r13)
	  srw       r0, r0, r3
	  or        r0, r5, r0
	  stw       r0, -0x6FF4(r13)
	  li        r0, 0
	  stb       r0, 0x2(r4)
	  stb       r0, 0x3(r4)
	  stb       r0, 0x4(r4)
	  stb       r0, 0x5(r4)
	  blr

	.loc_0x2A0:
	  lis       r0, 0x8000
	  lwz       r5, -0x6FF4(r13)
	  srw       r0, r0, r3
	  andc      r0, r5, r0
	  stw       r0, -0x6FF4(r13)
	  lis       r5, 0x804F
	  mulli     r3, r3, 0xC
	  lbz       r6, 0x2(r4)
	  addi      r0, r5, 0x7140
	  add       r3, r0, r3
	  lbz       r7, 0x2(r3)
	  extsb.    r0, r7
	  ble-      .loc_0x2F4
	  extsb     r5, r7
	  subi      r0, r5, 0x80
	  extsb     r5, r0
	  extsb     r0, r6
	  cmpw      r0, r5
	  bge-      .loc_0x318
	  mr        r6, r5
	  b         .loc_0x318

	.loc_0x2F4:
	  extsb.    r0, r7
	  bge-      .loc_0x318
	  extsb     r5, r7
	  addi      r0, r5, 0x7F
	  extsb     r5, r0
	  extsb     r0, r6
	  cmpw      r5, r0
	  bge-      .loc_0x318
	  mr        r6, r5

	.loc_0x318:
	  sub       r6, r6, r7
	  stb       r6, 0x2(r4)
	  lbz       r7, 0x3(r3)
	  lbz       r6, 0x3(r4)
	  extsb.    r0, r7
	  ble-      .loc_0x350
	  extsb     r5, r7
	  subi      r0, r5, 0x80
	  extsb     r5, r0
	  extsb     r0, r6
	  cmpw      r0, r5
	  bge-      .loc_0x374
	  mr        r6, r5
	  b         .loc_0x374

	.loc_0x350:
	  extsb.    r0, r7
	  bge-      .loc_0x374
	  extsb     r5, r7
	  addi      r0, r5, 0x7F
	  extsb     r5, r0
	  extsb     r0, r6
	  cmpw      r5, r0
	  bge-      .loc_0x374
	  mr        r6, r5

	.loc_0x374:
	  sub       r6, r6, r7
	  stb       r6, 0x3(r4)
	  lbz       r7, 0x4(r3)
	  lbz       r6, 0x4(r4)
	  extsb.    r0, r7
	  ble-      .loc_0x3AC
	  extsb     r5, r7
	  subi      r0, r5, 0x80
	  extsb     r5, r0
	  extsb     r0, r6
	  cmpw      r0, r5
	  bge-      .loc_0x3D0
	  mr        r6, r5
	  b         .loc_0x3D0

	.loc_0x3AC:
	  extsb.    r0, r7
	  bge-      .loc_0x3D0
	  extsb     r5, r7
	  addi      r0, r5, 0x7F
	  extsb     r5, r0
	  extsb     r0, r6
	  cmpw      r5, r0
	  bge-      .loc_0x3D0
	  mr        r6, r5

	.loc_0x3D0:
	  sub       r6, r6, r7
	  stb       r6, 0x4(r4)
	  lbz       r7, 0x5(r3)
	  lbz       r6, 0x5(r4)
	  extsb.    r0, r7
	  ble-      .loc_0x408
	  extsb     r5, r7
	  subi      r0, r5, 0x80
	  extsb     r5, r0
	  extsb     r0, r6
	  cmpw      r0, r5
	  bge-      .loc_0x42C
	  mr        r6, r5
	  b         .loc_0x42C

	.loc_0x408:
	  extsb.    r0, r7
	  bge-      .loc_0x42C
	  extsb     r5, r7
	  addi      r0, r5, 0x7F
	  extsb     r5, r0
	  extsb     r0, r6
	  cmpw      r5, r0
	  bge-      .loc_0x42C
	  mr        r6, r5

	.loc_0x42C:
	  sub       r6, r6, r7
	  stb       r6, 0x5(r4)
	  lbz       r0, 0x6(r3)
	  lbz       r5, 0x6(r4)
	  cmplw     r5, r0
	  bge-      .loc_0x448
	  mr        r5, r0

	.loc_0x448:
	  sub       r5, r5, r0
	  stb       r5, 0x6(r4)
	  lbz       r0, 0x7(r3)
	  lbz       r3, 0x7(r4)
	  cmplw     r3, r0
	  bge-      .loc_0x464
	  mr        r3, r0

	.loc_0x464:
	  sub       r3, r3, r0
	  stb       r3, 0x7(r4)
	  blr
	*/
}

/**
 * @note Address: N/A
 * @note Size: 0x74
 */
BOOL PADGetType(s32 chan, u32* type)
{
	u32 chanBit;

	*type   = SIGetType(chan);
	chanBit = PAD_CHAN0_BIT >> chan;
	if ((ResettingBits & chanBit) || ResettingChan == chan || !(EnabledBits & chanBit)) {
		return FALSE;
	}
	return TRUE;
}

/**
 * @note Address: N/A
 * @note Size: 0x64
 */
BOOL PADSync(void) { return ResettingBits == 0 && ResettingChan == 32 && !SIBusy(); }

/**
 * @note Address: 0x800F4C9C
 * @note Size: 0x74
 */
void PADSetAnalogMode(u32 mode)
{
	BOOL enabled;
	u32 mask;

	enabled    = OSDisableInterrupts();
	AnalogMode = mode << 8;
	mask       = EnabledBits;

	EnabledBits &= ~mask;
	WaitingBits &= ~mask;
	CheckingBits &= ~mask;

	SIDisablePolling(mask);
	OSRestoreInterrupts(enabled);
}

/**
 * @note Address: 0x800F4D10
 * @note Size: 0xBC
 */
static BOOL OnReset(BOOL f)
{
	static BOOL recalibrated = FALSE;
	BOOL sync;

	if (SamplingCallback) {
		PADSetSamplingCallback(NULL);
	}

	if (!f) {
		sync = PADSync();
		if (!recalibrated && sync) {
			recalibrated = PADRecalibrate(PAD_CHAN0_BIT | PAD_CHAN1_BIT | PAD_CHAN2_BIT | PAD_CHAN3_BIT);
			return FALSE;
		}
		return sync;
	} else {
		recalibrated = FALSE;
	}

	return TRUE;
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x20(r1)
	  stw       r31, 0x1C(r1)
	  addi      r31, r3, 0
	  lwz       r0, -0x6FF0(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0x28
	  li        r3, 0
	  bl        0xF8

	.loc_0x28:
	  cmpwi     r31, 0
	  bne-      .loc_0x9C
	  lwz       r0, -0x7008(r13)
	  li        r31, 0
	  addi      r3, r31, 0
	  cmplwi    r0, 0
	  bne-      .loc_0x54
	  lwz       r0, -0x7C7C(r13)
	  cmpwi     r0, 0x20
	  bne-      .loc_0x54
	  li        r3, 0x1

	.loc_0x54:
	  cmpwi     r3, 0
	  beq-      .loc_0x6C
	  bl        0x190
	  cmpwi     r3, 0
	  bne-      .loc_0x6C
	  li        r31, 0x1

	.loc_0x6C:
	  lwz       r0, -0x6FEC(r13)
	  cmpwi     r0, 0
	  bne-      .loc_0x94
	  cmpwi     r31, 0
	  beq-      .loc_0x94
	  lis       r3, 0xF000
	  bl        -0xECC
	  stw       r3, -0x6FEC(r13)
	  li        r3, 0
	  b         .loc_0xA8

	.loc_0x94:
	  mr        r3, r31
	  b         .loc_0xA8

	.loc_0x9C:
	  li        r0, 0
	  stw       r0, -0x6FEC(r13)
	  li        r3, 0x1

	.loc_0xA8:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  addi      r1, r1, 0x20
	  mtlr      r0
	  blr
	*/
}

/**
 * @note Address: N/A
 * @note Size: 0xC
 */
void __PADDisableXPatch(void) { XPatchBits = 0; }

/**
 * @note Address: 0x800F4DCC
 * @note Size: 0x60
 */
static void SamplingHandler(__OSInterrupt interrupt, OSContext* context)
{
	OSContext exceptionContext;

	if (SamplingCallback) {
		OSClearContext(&exceptionContext);
		OSSetCurrentContext(&exceptionContext);
		SamplingCallback();
		OSClearContext(&exceptionContext);
		OSSetCurrentContext(context);
	}
}

/**
 * @note Address: 0x800F4E2C
 * @note Size: 0x54
 */
PADSamplingCallback PADSetSamplingCallback(PADSamplingCallback callback)
{
	PADSamplingCallback prev;

	prev             = SamplingCallback;
	SamplingCallback = callback;
	if (callback) {
		SIRegisterPollingHandler(SamplingHandler);
	} else {
		SIUnregisterPollingHandler(SamplingHandler);
	}
	return prev;
}

/**
 * @note Address: 0x800F4E80
 * @note Size: 0x7C
 */
BOOL __PADDisableRecalibration(BOOL disable)
{
	BOOL enabled;
	BOOL prev;

	enabled = OSDisableInterrupts();
	prev    = (GameChoice & 0x40) ? TRUE : FALSE;
	GameChoice &= ~0x40;
	if (disable) {
		GameChoice |= 0x40;
	}
	OSRestoreInterrupts(enabled);
	return prev;
}
