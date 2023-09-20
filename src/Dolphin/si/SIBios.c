#include "Dolphin/si.h"
#include "Dolphin/hw_regs.h"

char* __SIVersion = "<< Dolphin SDK - SI\trelease build: Apr 17 2003 12:33:19 (0x2301) >>";

static SIControl Si = { -1, 0, 0, nullptr, nullptr };
static SIPacket Packet[SI_MAX_CHAN];
static OSAlarm Alarm[SI_MAX_CHAN];
static u32 Type[SI_MAX_CHAN] = {
	SI_ERROR_NO_RESPONSE,
	SI_ERROR_NO_RESPONSE,
	SI_ERROR_NO_RESPONSE,
	SI_ERROR_NO_RESPONSE,
};
static OSTime TypeTime[SI_MAX_CHAN];
static OSTime XferTime[SI_MAX_CHAN];
static SITypeAndStatusCallback TypeCallback[SI_MAX_CHAN][4];
static __OSInterruptHandler RDSTHandler[4];
static BOOL InputBufferValid[SI_MAX_CHAN];
static u32 InputBuffer[SI_MAX_CHAN][2];
static vu32 InputBufferVcount[SI_MAX_CHAN];

u32 __PADFixBits;

// forward-declared static functions.
static BOOL __SITransfer(int chan, void* output, u32 outputBytes, void* input, u32 inputBytes, SICallback callback);
static BOOL SIGetResponseRaw(int chan);
static void GetTypeCallback(int chan, u32 error, OSContext* context);

// useful macros.
#define ROUND(n, a) (((u32)(n) + (a)-1) & ~((a)-1))

/*
 * --INFO--
 * Address:	800F4EFC
 * Size:	000020
 */
BOOL SIBusy() { return Si.chan != -1 ? TRUE : FALSE; }

/*
 * --INFO--
 * Address:	800F4F1C
 * Size:	00003C
 */
BOOL SIIsChanBusy(int chan) { return Packet[chan].chan != -1 || Si.chan == chan; }

/*
 * --INFO--
 * Address:	........
 * Size:	00001C
 */
void SIClearTCInterrupt(void)
{
	u32 reg;

	reg = __SIRegs[SI_CC_STAT];
	reg |= 0x80000000;
	reg &= ~0x00000001;
	__SIRegs[SI_CC_STAT] = reg;
}

/*
 * --INFO--
 * Address:	800F4F58
 * Size:	0002FC
 */
static u32 CompleteTransfer(void)
{
	u32 sr;
	u32 i;
	u32 rLen;
	u8* input;

	sr = __SIRegs[SI_STAT];

	SIClearTCInterrupt();

	if (Si.chan != -1) {
		XferTime[Si.chan] = __OSGetSystemTime();

		input = Si.input;
		rLen  = Si.inputBytes / 4;

		for (i = 0; i < rLen; i++) {
			*(u32*)input = __SIRegs[SI_IO_BUFFER + i];
			input += 4;
		}

		rLen = Si.inputBytes & 3;
		if (rLen) {
			u32 temp = __SIRegs[SI_IO_BUFFER + i];

			for (i = 0; i < rLen; i++) {
				*input++ = (u8)((temp >> ((3 - i) * 8)) & 0xff);
			}
		}

		if (__SIRegs[SI_CC_STAT] & 0x20000000) {
			sr >>= 8 * (3 - Si.chan);
			sr &= 0xf;

			if ((sr & SI_ERROR_NO_RESPONSE) && !(Type[Si.chan] & SI_ERROR_BUSY)) {
				Type[Si.chan] = SI_ERROR_NO_RESPONSE;
			}

			if (sr == 0) {
				sr = SI_ERROR_COLLISION;
			}
		} else {
			TypeTime[Si.chan] = __OSGetSystemTime();
			sr                = 0;
		}

		Si.chan = -1;
	}
	return sr;
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000F0
 */
void SITransferNext(int chan)
{
	int i;
	SIPacket* packet;

	for (i = 0; i < SI_MAX_CHAN; ++i) {
		++chan;
		chan %= SI_MAX_CHAN;
		packet = &Packet[chan];
		if (packet->chan != -1 && packet->fire <= __OSGetSystemTime()) {
			if (__SITransfer(packet->chan, packet->output, packet->outputBytes, packet->input, packet->inputBytes, packet->callback)) {
				OSCancelAlarm(&Alarm[chan]);
				packet->chan = -1;
			}
			break;
		}
	}
}

/*
 * --INFO--
 * Address:	800F5254
 * Size:	000344
 */
static void SIInterruptHandler(__OSInterrupt interrupt, OSContext* context)
{
	u32 reg;

	reg = __SIRegs[SI_CC_STAT];

	if ((reg & 0xc0000000) == 0xc0000000) {
		s32 chan;
		u32 sr;
		SICallback callback;

		chan        = Si.chan;
		sr          = CompleteTransfer();
		callback    = Si.callback;
		Si.callback = 0;

		SITransferNext(chan);

		if (callback) {
			callback(chan, sr, context);
		}

		sr = __SIRegs[SI_STAT];
		sr &= 0xf000000 >> (8 * chan);
		__SIRegs[SI_STAT] = sr;

		if (Type[chan] == SI_ERROR_BUSY && !SIIsChanBusy(chan)) {
			static u32 cmdTypeAndStatus = 0 << 24;
			SITransfer(chan, &cmdTypeAndStatus, 1, &Type[chan], 3, GetTypeCallback, OSMicrosecondsToTicks(65));
		}
	}

	if ((reg & 0x18000000) == 0x18000000) {

		int i;
		u32 vcount;
		u32 x;

		vcount = VIGetCurrentLine() + 1;
		x      = (Si.poll & 0x03ff0000) >> 16;

		for (i = 0; i < SI_MAX_CHAN; ++i) {
			if (SIGetResponseRaw(i)) {
				InputBufferVcount[i] = vcount;
			}
		}

		for (i = 0; i < SI_MAX_CHAN; ++i) {
			if (!(Si.poll & (SI_CHAN0_BIT >> (31 - 7 + i)))) {
				continue;
			}

			if (InputBufferVcount[i] == 0 || InputBufferVcount[i] + (x / 2) < vcount) {
				return;
			}
		}

		for (i = 0; i < SI_MAX_CHAN; ++i) {
			InputBufferVcount[i] = 0;
		}

		for (i = 0; i < 4; ++i) {
			if (RDSTHandler[i]) {
				RDSTHandler[i](interrupt, context);
			}
		}
	}
}

/*
 * --INFO--
 * Address:	800F5598
 * Size:	000098
 */
static BOOL SIEnablePollingInterrupt(BOOL doEnable)
{
	BOOL enabled;
	BOOL rc;
	u32 reg;
	int i;

	enabled = OSDisableInterrupts();
	reg     = __SIRegs[SI_CC_STAT];
	rc      = (reg & 0x08000000) ? TRUE : FALSE;

	if (doEnable) {
		reg |= 0x08000000;
		for (i = 0; i < SI_MAX_CHAN; ++i) {
			InputBufferVcount[i] = 0;
		}

	} else {
		reg &= ~0x08000000;
	}

	reg &= ~0x80000001;
	__SIRegs[SI_CC_STAT] = reg;

	OSRestoreInterrupts(enabled);
	return rc;
}

/*
 * --INFO--
 * Address:	800F5630
 * Size:	0000CC
 */
BOOL SIRegisterPollingHandler(__OSInterruptHandler handler)
{
	BOOL enabled;
	int i;

	enabled = OSDisableInterrupts();

	for (i = 0; i < 4; ++i) {
		if (RDSTHandler[i] == handler) {
			OSRestoreInterrupts(enabled);
			return TRUE;
		}
	}

	for (i = 0; i < 4; ++i) {
		if (RDSTHandler[i] == 0) {
			RDSTHandler[i] = handler;
			SIEnablePollingInterrupt(TRUE);
			OSRestoreInterrupts(enabled);
			return TRUE;
		}
	}

	OSRestoreInterrupts(enabled);
	return FALSE;
}

/*
 * --INFO--
 * Address:	800F56FC
 * Size:	0000F4
 */
BOOL SIUnregisterPollingHandler(__OSInterruptHandler handler)
{
	BOOL enabled;
	int i;

	enabled = OSDisableInterrupts();

	for (i = 0; i < 4; ++i) {
		if (RDSTHandler[i] == handler) {
			RDSTHandler[i] = 0;
			for (i = 0; i < 4; ++i) {
				if (RDSTHandler[i]) {
					break;
				}
			}

			if (i == 4) {
				SIEnablePollingInterrupt(FALSE);
			}

			OSRestoreInterrupts(enabled);
			return TRUE;
		}
	}

	OSRestoreInterrupts(enabled);
	return FALSE;
}

/*
 * --INFO--
 * Address:	800F57F0
 * Size:	0000B4
 */
void SIInit(void)
{
	OSRegisterVersion(__SIVersion);

	Packet[0].chan = Packet[1].chan = Packet[2].chan = Packet[3].chan = -1;

	Si.poll = 0;
	SISetSamplingRate(0);

	while (__SIRegs[SI_CC_STAT] & 1) {
		;
	}

	__SIRegs[SI_CC_STAT] = 0x80000000;

	__OSSetInterruptHandler(__OS_INTERRUPT_PI_SI, SIInterruptHandler);
	__OSUnmaskInterrupts(OS_INTERRUPTMASK_PI_SI);

	SIGetType(0);
	SIGetType(1);
	SIGetType(2);
	SIGetType(3);
}

/*
 * --INFO--
 * Address:	800F58A4
 * Size:	00020C
 */
static BOOL __SITransfer(int chan, void* output, u32 outputBytes, void* input, u32 inputBytes, SICallback callback)
{
	BOOL enabled;
	u32 rLen;
	u32 i;
	u32 sr;
	SIComm comcsr;

	enabled = OSDisableInterrupts();
	if (Si.chan != -1) {
		OSRestoreInterrupts(enabled);
		return FALSE;
	}

	sr = __SIRegs[SI_STAT];
	sr &= (0xF000000) >> (8 * chan);
	__SIRegs[SI_STAT] = sr;

	Si.chan       = chan;
	Si.callback   = callback;
	Si.inputBytes = inputBytes;
	Si.input      = input;

	rLen = ROUND(outputBytes, 4) / 4;
	for (i = 0; i < rLen; i++) {
		__SIRegs[SI_IO_BUFFER + i] = ((u32*)output)[i];
	}

	comcsr.val            = __SIRegs[SI_CC_STAT];
	comcsr.flags.tcint    = 1;
	comcsr.flags.tcintmsk = callback ? 1 : 0;
	comcsr.flags.outlngth = (outputBytes == SI_MAX_COMCSR_OUTLNGTH) ? 0 : outputBytes;
	comcsr.flags.inlngth  = (inputBytes == SI_MAX_COMCSR_INLNGTH) ? 0 : inputBytes;
	comcsr.flags.channel  = chan;
	comcsr.flags.tstart   = 1;
	__SIRegs[SI_CC_STAT]  = comcsr.val;

	OSRestoreInterrupts(enabled);

	return TRUE;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000108
 */
u32 SISync(void)
{
	BOOL enabled;
	u32 sr;

	while (__SIRegs[SI_CC_STAT] & 1) {
		;
	}

	enabled = OSDisableInterrupts();
	sr      = CompleteTransfer();

	SITransferNext(SI_MAX_CHAN);

	OSRestoreInterrupts(enabled);

	return sr;
}

/*
 * --INFO--
 * Address:	800F5AB0
 * Size:	00007C
 */
u32 SIGetStatus(int chan)
{
	BOOL enabled;
	u32 sr;
	int chanShift;

	enabled = OSDisableInterrupts();

	sr        = __SIRegs[SI_STAT];
	chanShift = 8 * (SI_MAX_CHAN - 1 - chan);
	sr >>= chanShift;
	if (sr & SI_ERROR_NO_RESPONSE) {
		if (!(Type[chan] & SI_ERROR_BUSY)) {
			Type[chan] = SI_ERROR_NO_RESPONSE;
		}
	}

	OSRestoreInterrupts(enabled);
	return sr;
}

/*
 * --INFO--
 * Address:	800F5B2C
 * Size:	000014
 */
void SISetCommand(int chan, u32 command) { __SIRegs[3 * chan] = command; }

/*
 * --INFO--
 * Address:	........
 * Size:	000014
 */
u32 SIGetCommand(int chan) { return __SIRegs[3 * chan]; }

/*
 * --INFO--
 * Address:	800F5B40
 * Size:	000010
 */
void SITransferCommands(void) { __SIRegs[SI_STAT] = 0x80000000; }

/*
 * --INFO--
 * Address:	800F5B50
 * Size:	00006C
 */
u32 SISetXY(u32 x, u32 y)
{
	u32 poll;
	BOOL enabled;

	poll = x << 16;
	poll |= y << 8;

	enabled = OSDisableInterrupts();

	Si.poll &= ~(0x03FF0000 | 0x0000FF00);
	Si.poll |= poll;
	poll              = Si.poll;
	__SIRegs[SI_POLL] = poll;

	OSRestoreInterrupts(enabled);
	return poll;
}

/*
 * --INFO--
 * Address:	800F5BBC
 * Size:	00009C
 */
u32 SIEnablePolling(u32 poll)
{
	BOOL enabled;
	u32 en;

	if (poll == 0) {
		return Si.poll;
	}

	enabled = OSDisableInterrupts();

	poll >>= (31 - 7);
	en = poll & 0xF0;

	poll &= (en >> 4) | 0x03FFFFF0;

	poll &= ~0x03FFFF00;

	Si.poll &= ~(en >> 4);

	Si.poll |= poll;

	poll = Si.poll;

	SITransferCommands();

	__SIRegs[SI_POLL] = poll;

	OSRestoreInterrupts(enabled);

	return poll;
}

/*
 * --INFO--
 * Address:	800F5C58
 * Size:	00006C
 */
u32 SIDisablePolling(u32 poll)
{
	BOOL enabled;

	if (poll == 0) {
		return Si.poll;
	}

	enabled = OSDisableInterrupts();

	poll >>= (31 - 7);
	poll &= 0xF0;

	poll = Si.poll & ~poll;

	__SIRegs[SI_POLL] = poll;
	Si.poll           = poll;

	OSRestoreInterrupts(enabled);
	return poll;
}

/*
 * --INFO--
 * Address:	800F5CC4
 * Size:	0000D4
 */
static BOOL SIGetResponseRaw(int chan)
{
	u32 sr;

	sr = SIGetStatus(chan);
	if (sr & SI_ERROR_RDST) {
		InputBuffer[chan][0]   = __SIRegs[3 * chan + 1];
		InputBuffer[chan][1]   = __SIRegs[3 * chan + 2];
		InputBufferValid[chan] = TRUE;
		return TRUE;
	}
	return FALSE;
}

/*
 * --INFO--
 * Address:	800F5D98
 * Size:	0000C4
 */
BOOL SIGetResponse(int chan, void* data)
{
	BOOL rc;
	BOOL enabled;

	enabled = OSDisableInterrupts();
	SIGetResponseRaw(chan);
	rc                     = InputBufferValid[chan];
	InputBufferValid[chan] = FALSE;
	if (rc) {
		((u32*)data)[0] = InputBuffer[chan][0];
		((u32*)data)[1] = InputBuffer[chan][1];
	}
	OSRestoreInterrupts(enabled);
	return rc;
}

/*
 * --INFO--
 * Address:	800F5E5C
 * Size:	00008C
 */
static void AlarmHandler(OSAlarm* alarm, OSContext* context)
{
	s32 chan;
	SIPacket* packet;

	chan   = alarm - Alarm;
	packet = &Packet[chan];
	if (packet->chan != -1) {
		if (__SITransfer(packet->chan, packet->output, packet->outputBytes, packet->input, packet->inputBytes, packet->callback)) {

			packet->chan = -1;
		}
	}
}

/*
 * --INFO--
 * Address:	800F5EE8
 * Size:	00016C
 */
BOOL SITransfer(int chan, void* output, u32 outputBytes, void* input, u32 inputBytes, SICallback callback, OSTime delay)
{
	BOOL enabled;
	SIPacket* packet = &Packet[chan];
	OSTime now;
	OSTime fire;

	enabled = OSDisableInterrupts();
	if (packet->chan != -1 || Si.chan == chan) {
		OSRestoreInterrupts(enabled);
		return FALSE;
	}

	now = __OSGetSystemTime();
	if (delay == 0) {
		fire = now;
	} else {
		fire = XferTime[chan] + delay;
	}
	if (now < fire) {
		delay = fire - now;
		OSSetAlarm(&Alarm[chan], delay, AlarmHandler);
	} else if (__SITransfer(chan, output, outputBytes, input, inputBytes, callback)) {
		OSRestoreInterrupts(enabled);
		return TRUE;
	}

	packet->chan        = chan;
	packet->output      = output;
	packet->outputBytes = outputBytes;
	packet->input       = input;
	packet->inputBytes  = inputBytes;
	packet->callback    = callback;
	packet->fire        = fire;

	OSRestoreInterrupts(enabled);
	return TRUE;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000078
 */
void CallTypeAndStatusCallback(int chan, u32 type)
{
	SITypeAndStatusCallback callback;
	int i;

	for (i = 0; i < 4; ++i) {
		callback = TypeCallback[chan][i];
		if (callback) {
			TypeCallback[chan][i] = 0;
			callback(chan, type);
		}
	}
}

/*
 * --INFO--
 * Address:	800F6054
 * Size:	000298
 */
static void GetTypeCallback(int chan, u32 error, OSContext* context)
{
	static u32 cmdFixDevice[SI_MAX_CHAN];
	u32 type;
	u32 chanBit;
	BOOL fix;
	u32 id;

	Type[chan] &= ~SI_ERROR_BUSY;
	Type[chan] |= error;
	TypeTime[chan] = __OSGetSystemTime();

	type = Type[chan];

	chanBit = SI_CHAN0_BIT >> chan;
	fix     = (BOOL)(__PADFixBits & chanBit);
	__PADFixBits &= ~chanBit;

	if ((error & (SI_ERROR_UNDER_RUN | SI_ERROR_OVER_RUN | SI_ERROR_NO_RESPONSE | SI_ERROR_COLLISION))
	    || (type & SI_TYPE_MASK) != SI_TYPE_DOLPHIN || !(type & SI_GC_WIRELESS) || (type & SI_WIRELESS_IR)) {
		OSSetWirelessID(chan, 0);
		CallTypeAndStatusCallback(chan, Type[chan]);
		return;
	}

	id = (u32)(OSGetWirelessID(chan) << 8);

	if (fix && (id & SI_WIRELESS_FIX_ID)) {
		cmdFixDevice[chan] = 0x4Eu << 24 | (id & SI_WIRELESS_TYPE_ID) | SI_WIRELESS_FIX_ID;
		Type[chan]         = SI_ERROR_BUSY;
		SITransfer(chan, &cmdFixDevice[chan], 3, &Type[chan], 3, GetTypeCallback, 0);
		return;
	}

	if (type & SI_WIRELESS_FIX_ID) {
		if ((id & SI_WIRELESS_TYPE_ID) != (type & SI_WIRELESS_TYPE_ID)) {
			if (!(id & SI_WIRELESS_FIX_ID)) {
				id = type & SI_WIRELESS_TYPE_ID;
				id |= SI_WIRELESS_FIX_ID;
				OSSetWirelessID(chan, (u16)((id >> 8) & 0xffff));
			}

			cmdFixDevice[chan] = 0x4E << 24 | id;
			Type[chan]         = SI_ERROR_BUSY;
			SITransfer(chan, &cmdFixDevice[chan], 3, &Type[chan], 3, GetTypeCallback, 0);
			return;
		}

	} else if (type & SI_WIRELESS_RECEIVED) {
		id = type & SI_WIRELESS_TYPE_ID;
		id |= SI_WIRELESS_FIX_ID;

		OSSetWirelessID(chan, (u16)((id >> 8) & 0xffff));

		cmdFixDevice[chan] = 0x4E << 24 | id;
		Type[chan]         = SI_ERROR_BUSY;
		SITransfer(chan, &cmdFixDevice[chan], 3, &Type[chan], 3, GetTypeCallback, 0);
		return;
	} else {
		OSSetWirelessID(chan, 0);
	}

	CallTypeAndStatusCallback(chan, Type[chan]);
}

/*
 * --INFO--
 * Address:	800F62EC
 * Size:	0001C4
 */
u32 SIGetType(int chan)
{
	static u32 cmdTypeAndStatus;
	BOOL enabled;
	u32 type;
	OSTime diff;

	enabled = OSDisableInterrupts();

	type = Type[chan];
	diff = __OSGetSystemTime() - TypeTime[chan];
	if (Si.poll & (0x80 >> chan)) {
		if (type != SI_ERROR_NO_RESPONSE) {
			TypeTime[chan] = __OSGetSystemTime();
			OSRestoreInterrupts(enabled);
			return type;
		} else {
			type = Type[chan] = SI_ERROR_BUSY;
		}

	} else if (diff <= OSMillisecondsToTicks(50) && type != SI_ERROR_NO_RESPONSE) {
		OSRestoreInterrupts(enabled);
		return type;
	} else if (diff <= OSMillisecondsToTicks(75)) {
		Type[chan] = SI_ERROR_BUSY;
	} else {
		type = Type[chan] = SI_ERROR_BUSY;
	}

	TypeTime[chan] = __OSGetSystemTime();

	SITransfer(chan, &cmdTypeAndStatus, 1, &Type[chan], 3, GetTypeCallback, OSMicrosecondsToTicks(65));

	OSRestoreInterrupts(enabled);
	return type;
}

/*
 * --INFO--
 * Address:	800F64B0
 * Size:	00013C
 */
u32 SIGetTypeAsync(int chan, SITypeAndStatusCallback callback)
{
	BOOL enabled;
	u32 type;

	enabled = OSDisableInterrupts();
	type    = SIGetType(chan);
	if (Type[chan] & SI_ERROR_BUSY) {
		int i;

		for (i = 0; i < 4; ++i) {
			if (TypeCallback[chan][i] == callback) {
				break;
			}
			if (TypeCallback[chan][i] == 0) {
				TypeCallback[chan][i] = callback;
				break;
			}
		}
	} else {
		callback(chan, type);
	}
	OSRestoreInterrupts(enabled);
	return type;
}

/*
 * --INFO--
 * Address:	800F65EC
 * Size:	00014C
 */
u32 SIDecodeType(u32 type)
{
	u32 error;

	error = type & 0xff;
	type &= ~0xff;

	if (error & SI_ERROR_NO_RESPONSE) {
		return SI_ERROR_NO_RESPONSE;
	}

	if (error & (SI_ERROR_UNDER_RUN | SI_ERROR_OVER_RUN | SI_ERROR_COLLISION | SI_ERROR_UNKNOWN)) {
		return SI_ERROR_UNKNOWN;
	}

	if (error) {
		return SI_ERROR_BUSY;
	}

	if ((type & SI_TYPE_MASK) == SI_TYPE_N64) {
		switch (type & 0xffff0000) {
		case SI_N64_CONTROLLER:
		case SI_N64_MIC:
		case SI_N64_KEYBOARD:
		case SI_N64_MOUSE:
		case SI_GBA:
			return type & 0xffff0000;
		}

		return SI_ERROR_UNKNOWN;
	}

	if ((type & SI_TYPE_MASK) != SI_TYPE_GC) {
		return SI_ERROR_UNKNOWN;
	}

	switch (type & 0xffff0000) {
	case SI_GC_CONTROLLER:
	case SI_GC_STEERING:
		return type & 0xffff0000;
	}

	if ((type & 0xffe00000) == SI_GC_KEYBOARD) {
		return SI_GC_KEYBOARD;
	}

	if ((type & SI_GC_WIRELESS) && !(type & SI_WIRELESS_IR)) {
		if ((type & SI_GC_WAVEBIRD) == SI_GC_WAVEBIRD) {
			return SI_GC_WAVEBIRD;

		} else if (!(type & SI_WIRELESS_STATE)) {
			return SI_GC_RECEIVER;
		}
	}

	if ((type & SI_GC_CONTROLLER) == SI_GC_CONTROLLER) {
		return SI_GC_CONTROLLER;
	}

	return SI_ERROR_UNKNOWN;
}

/*
 * --INFO--
 * Address:	800F6738
 * Size:	000024
 */
u32 SIProbe(int chan) { return SIDecodeType(SIGetType(chan)); }

/*
 * --INFO--
 * Address:	........
 * Size:	000158
 */
char* SIGetTypeString(u32 type)
{
	switch (SIDecodeType(type)) {
	case SI_ERROR_NO_RESPONSE:
		return "No response";
	case SI_N64_CONTROLLER:
		return "N64 controller";
	case SI_N64_MIC:
		return "N64 microphone";
	case SI_N64_KEYBOARD:
		return "N64 keyboard";
	case SI_N64_MOUSE:
		return "N64 mouse";
	case SI_GBA:
		return "GameBoy Advance";
	case SI_GC_CONTROLLER:
		return "Standard controller";
	case SI_GC_RECEIVER:
		return "Wireless receiver";
	case SI_GC_WAVEBIRD:
		return "WaveBird controller";
	case SI_GC_KEYBOARD:
		return "Keyboard";
	case SI_GC_STEERING:
		return "Steering";
	}
}
