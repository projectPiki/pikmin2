#include "Dolphin/os.h"
#include "Dolphin/hw_regs.h"

void __DVDLowSetWAType(unknown, unknown);

static BOOL FirstRead                    = TRUE;
static volatile BOOL StopAtNextInt       = FALSE;
static u32 LastLength                    = 0;
static DVDLowCallback Callback           = NULL;
static DVDLowCallback ResetCoverCallback = NULL;
static volatile OSTime LastResetEnd      = 0;
static vu32 ResetOccurred                = FALSE;
static volatile BOOL WaitingCoverClose   = FALSE;
static BOOL Breaking                     = FALSE;
static vu32 WorkAroundType               = 0;
static u32 WorkAroundSeekLocation        = 0;
static volatile OSTime LastReadFinished  = 0;
static OSTime LastReadIssued             = 0;
static volatile BOOL LastCommandWasRead  = FALSE;
static vu32 NextCommandNumber            = 0;

typedef struct DVDBuffer {
	void* addr;
	u32 length;
	u32 offset;
} DVDBuffer;

typedef struct DVDCommand {
	s32 cmd;
	void* addr;
	u32 length;
	u32 offset;
	DVDLowCallback callback;
} DVDCommand;

static DVDCommand CommandList[3];
static OSAlarm AlarmForWA;
static OSAlarm AlarmForTimeout;
static OSAlarm AlarmForBreak;
static DVDBuffer Prev;
static DVDBuffer Curr;

/**
 * @note Address: 0x800DB2B0
 * @note Size: 0x40
 */
WEAKFUNC void __DVDInitWA()
{
	NextCommandNumber  = 0;
	CommandList[0].cmd = -1;
	__DVDLowSetWAType(0, 0);
	OSInitAlarm();
}

static void Read(void* addr, u32 length, u32 offset, DVDLowCallback callback);

/**
 * @note Address: N/A
 * @note Size: 0x94
 */
static BOOL ProcessNextCommand()
{
	s32 n = NextCommandNumber;

	if (CommandList[n].cmd == 1) {
		++NextCommandNumber;
		Read(CommandList[n].addr, CommandList[n].length, CommandList[n].offset, CommandList[n].callback);
		return TRUE;
	} else if (CommandList[n].cmd == 2) {
		++NextCommandNumber;
		DVDLowSeek(CommandList[n].offset, CommandList[n].callback);
		return TRUE;
	}

	return FALSE;
}

/**
 * @note Address: 0x800DB2F0
 * @note Size: 0x2E0
 */
WEAKFUNC void __DVDInterruptHandler(__OSInterrupt interrupt, OSContext* context)
{
	DVDLowCallback cb;
	OSContext exceptionContext;
	u32 cause = 0;
	u32 reg;
	u32 intr;
	u32 mask;

	if (LastCommandWasRead) {
		LastReadFinished = __OSGetSystemTime();
		FirstRead        = FALSE;
		Prev.addr        = Curr.addr;
		Prev.length      = Curr.length;
		Prev.offset      = Curr.offset;
		if (StopAtNextInt == TRUE) {
			cause |= 8;
		}
	}

	LastCommandWasRead = FALSE;
	StopAtNextInt      = FALSE;
	reg                = __DIRegs[0];
	mask               = reg & 0x2a;
	intr               = (reg & 0x54) & (mask << 1);

	if (intr & 0x40) {
		cause |= 8;
	}

	if (intr & 0x10) {
		cause |= 1;
	}

	if (intr & 4) {
		cause |= 2;
	}

	if (cause) {
		ResetOccurred = FALSE;
		OSCancelAlarm(&AlarmForTimeout);
	}

	__DIRegs[0] = intr | mask;

	if (ResetOccurred && (__OSGetSystemTime() - LastResetEnd) < OSMillisecondsToTicks(200)) {
		reg  = __DIRegs[1];
		mask = reg & 0x2;
		intr = (reg & 4) & (mask << 1);
		if (intr & 4) {
			if (ResetCoverCallback) {
				ResetCoverCallback(4);
			}
			ResetCoverCallback = NULL;
		}

		__DIRegs[1] = __DIRegs[1];
	} else if (WaitingCoverClose) {
		reg  = __DIRegs[1];
		mask = reg & 2;
		intr = (reg & 4) & (mask << 1);

		if (intr & 4) {
			cause |= 4;
		}

		__DIRegs[1]       = intr | mask;
		WaitingCoverClose = FALSE;
	} else {
		__DIRegs[1] = 0;
	}

	if ((cause & 8) && !Breaking) {
		cause &= ~8;
	}

	if ((cause & 1)) {
		if (ProcessNextCommand()) {
			return;
		}
	} else {
		CommandList[0].cmd = -1;
		NextCommandNumber  = 0;
	}

	OSClearContext(&exceptionContext);
	OSSetCurrentContext(&exceptionContext);

	if (cause) {
		cb       = Callback;
		Callback = NULL;
		if (cb) {
			cb(cause);
		}

		Breaking = FALSE;
	}

	OSClearContext(&exceptionContext);
	OSSetCurrentContext(context);
}

/**
 * @note Address: 0x800DB5D0
 * @note Size: 0x84
 */
static void AlarmHandler(OSAlarm* alarm, OSContext* context) { BOOL error = ProcessNextCommand(); }

/**
 * @note Address: 0x800DB654
 * @note Size: 0x70
 */
static void AlarmHandlerForTimeout(OSAlarm* alarm, OSContext* context)
{
	OSContext tmpContext;
	DVDLowCallback callback;
	__OSMaskInterrupts(0x400);
	OSClearContext(&tmpContext);
	OSSetCurrentContext(&tmpContext);
	callback = Callback;
	Callback = NULL;
	if (callback != NULL) {
		callback(0x10);
	}
	OSClearContext(&tmpContext);
	OSSetCurrentContext(context);
}

/**
 * @note Address: N/A
 * @note Size: 0x64
 */
static void SetTimeoutAlarm(OSTime timeout)
{
	OSCreateAlarm(&AlarmForTimeout);
	OSSetAlarm(&AlarmForTimeout, timeout, AlarmHandlerForTimeout);
}

/**
 * @note Address: 0x800DB6C4
 * @note Size: 0x110
 */
static void Read(void* addr, u32 length, u32 offset, DVDLowCallback callback)
{
	StopAtNextInt      = FALSE;
	LastCommandWasRead = TRUE;
	Callback           = callback;
	LastReadIssued     = __OSGetSystemTime();

	__DIRegs[2] = 0xa8000000;
	__DIRegs[3] = offset / 4;
	__DIRegs[4] = length;
	__DIRegs[5] = (u32)addr;
	__DIRegs[6] = length;
	LastLength  = length;
	__DIRegs[7] = 3;

	if (length > 0xa00000) {
		SetTimeoutAlarm(OSSecondsToTicks(20));
	} else {
		SetTimeoutAlarm(OSSecondsToTicks(10));
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x38
 */
void AudioBufferOn(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0xA0
 */
BOOL HitCache(DVDBuffer* cur, DVDBuffer* prev)
{
	u32 uVar1 = (prev->offset + prev->length - 1) >> 15;
	u32 uVar2 = (cur->offset >> 15);
	u32 iVar3 = (DVDGetCurrentDiskID()->streaming ? TRUE : FALSE) ? 5 : 15;

	if ((uVar2 > uVar1 - 2) || (uVar2 < uVar1 + iVar3 + 3)) {
		return TRUE;
	}
	return FALSE;
}

/**
 * @note Address: N/A
 * @note Size: 0x34
 */
static void DoJustRead(void* addr, u32 length, u32 offset, DVDLowCallback callback)
{
	CommandList[0].cmd = -1;
	NextCommandNumber  = 0;
	Read(addr, length, offset, callback);
}

/**
 * @note Address: 0x800DB7D4
 * @note Size: 0x80
 */
static void SeekTwiceBeforeRead(void* addr, u32 length, u32 offset, DVDLowCallback callback)
{
	u32 newOffset = offset & ~0x7FFF;
	if (!newOffset) {
		newOffset = 0;
	} else {
		newOffset += WorkAroundSeekLocation;
	}
	CommandList[0].cmd      = 2;
	CommandList[0].offset   = newOffset;
	CommandList[0].callback = callback;
	CommandList[1].cmd      = 1;
	CommandList[1].addr     = addr;
	CommandList[1].length   = length;
	CommandList[1].offset   = offset;
	CommandList[1].callback = callback;
	CommandList[2].cmd      = -1;
	NextCommandNumber       = 0;
	DVDLowSeek(newOffset, callback);
}

/**
 * @note Address: N/A
 * @note Size: 0x8C
 */
static void WaitBeforeRead(void* addr, u32 length, u32 offset, DVDLowCallback callback, OSTime timeout)
{
	CommandList[0].cmd      = 1;
	CommandList[0].addr     = addr;
	CommandList[0].length   = length;
	CommandList[0].offset   = offset;
	CommandList[0].callback = callback;
	CommandList[1].cmd      = -1;
	NextCommandNumber       = 0;
	OSCreateAlarm(&AlarmForWA);
	OSSetAlarm(&AlarmForWA, timeout, AlarmHandler);
}

/**
 * @note Address: 0x800DB854
 * @note Size: 0x298
 */
WEAKFUNC BOOL DVDLowRead(void* addr, u32 length, u32 offset, DVDLowCallback callback)
{
	OSTime diff;
	u32 prev;

	__DIRegs[6] = length;
	Curr.addr   = addr;
	Curr.length = length;
	Curr.offset = offset;

	if (WorkAroundType == 0) {
		DoJustRead(addr, length, offset, callback);
	} else if (WorkAroundType == 1) {
		if (FirstRead) {
			SeekTwiceBeforeRead(addr, length, offset, callback);
		} else {
			if (!HitCache(&Curr, &Prev)) {
				DoJustRead(addr, length, offset, callback);
			} else {
				prev = (Prev.offset + Prev.length - 1) >> 15;
				if (prev == Curr.offset >> 15 || prev + 1 == Curr.offset >> 15) {
					diff = __OSGetSystemTime() - LastReadFinished;
					if (OSMillisecondsToTicks(5) < diff) {
						DoJustRead(addr, length, offset, callback);
					} else {
						WaitBeforeRead(addr, length, offset, callback, OSMillisecondsToTicks(5) - diff + OSMicrosecondsToTicks(500));
					}
				} else {
					SeekTwiceBeforeRead(addr, length, offset, callback);
				}
			}
		}
	}
	return TRUE;
}

/**
 * @note Address: 0x800DBAEC
 * @note Size: 0x94
 */
WEAKFUNC BOOL DVDLowSeek(u32 offset, DVDLowCallback callback)
{
	StopAtNextInt = FALSE;
	Callback      = callback;
	__DIRegs[2]   = 0xab000000;
	__DIRegs[3]   = offset / 4;
	__DIRegs[7]   = 1;
	SetTimeoutAlarm(OSSecondsToTicks(10));
	return TRUE;
}

/**
 * @note Address: 0x800DBB80
 * @note Size: 0x2C
 */
WEAKFUNC BOOL DVDLowWaitCoverClose(DVDLowCallback callback)
{
	Callback          = callback;
	WaitingCoverClose = TRUE;
	StopAtNextInt     = FALSE;
	__DIRegs[1]       = 2;
	return TRUE;
}

/**
 * @note Address: 0x800DBBAC
 * @note Size: 0xA4
 */
WEAKFUNC BOOL DVDLowReadDiskID(DVDDiskID* diskID, DVDLowCallback callback)
{
	StopAtNextInt = FALSE;
	Callback      = callback;
	__DIRegs[2]   = 0xa8000040;
	__DIRegs[3]   = 0;
	__DIRegs[4]   = sizeof(DVDDiskID);
	__DIRegs[5]   = (u32)diskID;
	__DIRegs[6]   = sizeof(DVDDiskID);
	__DIRegs[7]   = 3;
	SetTimeoutAlarm(OSSecondsToTicks(10));
	return TRUE;
}

/**
 * @note Address: 0x800DBC50
 * @note Size: 0x8C
 */
WEAKFUNC BOOL DVDLowStopMotor(DVDLowCallback callback)
{
	StopAtNextInt = FALSE;
	Callback      = callback;
	__DIRegs[2]   = 0xe3000000;
	__DIRegs[7]   = 1;
	SetTimeoutAlarm(OSSecondsToTicks(10));
	return TRUE;
}

/**
 * @note Address: 0x800DBCDC
 * @note Size: 0x8C
 */
WEAKFUNC BOOL DVDLowRequestError(DVDLowCallback callback)
{
	StopAtNextInt = FALSE;
	Callback      = callback;
	__DIRegs[2]   = 0xe0000000;
	__DIRegs[7]   = 1;
	SetTimeoutAlarm(OSSecondsToTicks(10));
	return TRUE;
}

/**
 * @note Address: 0x800DBD68
 * @note Size: 0x9C
 */
WEAKFUNC BOOL DVDLowInquiry(DVDDriveInfo* info, DVDLowCallback callback)
{
	StopAtNextInt = FALSE;
	Callback      = callback;
	__DIRegs[2]   = 0x12000000;
	__DIRegs[4]   = sizeof(DVDDriveInfo);
	__DIRegs[5]   = (u32)info;
	__DIRegs[6]   = sizeof(DVDDriveInfo);
	__DIRegs[7]   = 3;
	SetTimeoutAlarm(OSSecondsToTicks(10));
	return TRUE;
}

/**
 * @note Address: 0x800DBE04
 * @note Size: 0x98
 */
WEAKFUNC BOOL DVDLowAudioStream(u32 subcmd, u32 length, u32 offset, DVDLowCallback callback)
{
	StopAtNextInt = FALSE;
	Callback      = callback;
	__DIRegs[2]   = subcmd | 0xe1000000;
	__DIRegs[3]   = offset >> 2;
	__DIRegs[4]   = length;
	__DIRegs[7]   = 1;
	SetTimeoutAlarm(OSSecondsToTicks(10));
	return TRUE;
}

/**
 * @note Address: 0x800DBE9C
 * @note Size: 0x8C
 */
WEAKFUNC BOOL DVDLowRequestAudioStatus(u32 subcmd, DVDLowCallback callback)
{
	StopAtNextInt = FALSE;
	Callback      = callback;
	__DIRegs[2]   = subcmd | 0xe2000000;
	__DIRegs[7]   = 1;
	SetTimeoutAlarm(OSSecondsToTicks(10));
	return TRUE;
}

/**
 * @note Address: 0x800DBF28
 * @note Size: 0x9C
 */
WEAKFUNC BOOL DVDLowAudioBufferConfig(BOOL enable, u32 size, DVDLowCallback callback)
{
	StopAtNextInt = FALSE;
	Callback      = callback;
	__DIRegs[2]   = 0xe4000000 | (enable != 0 ? 0x10000 : 0) | size;
	__DIRegs[7]   = 1;
	SetTimeoutAlarm(OSSecondsToTicks(10));
	return TRUE;
}

/**
 * @note Address: 0x800DBFC4
 * @note Size: 0xBC
 */
WEAKFUNC void DVDLowReset()
{
	u32 reg;
	OSTime resetStart;

	__DIRegs[1] = 2;
	reg         = __PIRegs[9];
	__PIRegs[9] = (reg & ~4) | 1;

	resetStart = __OSGetSystemTime();
	while ((__OSGetSystemTime() - resetStart) < OSMicrosecondsToTicks(12))
		;

	__PIRegs[9]   = reg | 5;
	ResetOccurred = TRUE;
	LastResetEnd  = __OSGetSystemTime();
}

/**
 * @note Address: N/A
 * @note Size: 0x44
 */
void DVDLowSetResetCoverCallback(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x1C
 */
void DoBreak(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x74
 */
void AlarmHandlerForBreak(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x64
 */
void SetBreakAlarm(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x800DC080
 * @note Size: 0x14
 */
WEAKFUNC BOOL DVDLowBreak()
{
	StopAtNextInt = TRUE;
	Breaking      = TRUE;
	return TRUE;
}

/**
 * @note Address: 0x800DC094
 * @note Size: 0x1C
 */
WEAKFUNC DVDLowCallback DVDLowClearCallback()
{
	DVDLowCallback old;
	__DIRegs[1]       = 0;
	old               = Callback;
	Callback          = NULL;
	WaitingCoverClose = FALSE;
	return old;
}

/**
 * @note Address: N/A
 * @note Size: 0x94
 */
void DVDLowGetCoverStatus(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x800DC0B0
 * @note Size: 0x44
 */

WEAKFUNC void __DVDLowSetWAType(u32 type, u32 location)
{
	BOOL enabled;
	enabled                = OSDisableInterrupts();
	WorkAroundType         = type;
	WorkAroundSeekLocation = location;
	OSRestoreInterrupts(enabled);
}

/**
 * @note Address: 0x800DC0F4
 * @note Size: 0x38
 */
BOOL __DVDLowTestAlarm(OSAlarm* alarm)
{
	if (alarm == &AlarmForBreak) {
		return TRUE;
	} else if (alarm == &AlarmForTimeout) {
		return TRUE;
	} else {
		return FALSE;
	}
}
