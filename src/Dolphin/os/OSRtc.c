#include "Dolphin/os.h"

// forward declarations.
static BOOL WriteSram(void* buffer, u32 offset, u32 size);

static SramControlBlock Scb ATTRIBUTE_ALIGN(32);

/**
 * @note Address: N/A
 * @note Size: 0x118
 */
static BOOL GetRTC(u32* rtc)
{
	BOOL err;
	u32 cmd;

	if (!EXILock(RTC_CHAN, RTC_DEV, 0)) {
		return FALSE;
	}
	if (!EXISelect(RTC_CHAN, RTC_DEV, RTC_FREQ)) {
		EXIUnlock(RTC_CHAN);
		return FALSE;
	}

	cmd = RTC_CMD_READ;
	err = FALSE;
	err |= !EXIImm(RTC_CHAN, &cmd, 4, 1, nullptr);
	err |= !EXISync(RTC_CHAN);
	err |= !EXIImm(RTC_CHAN, &cmd, 4, 0, nullptr);
	err |= !EXISync(RTC_CHAN);
	err |= !EXIDeselect(RTC_CHAN);
	EXIUnlock(RTC_CHAN);

	*rtc = cmd;

	return !err;
}

/**
 * @note Address: N/A
 * @note Size: 0x22C
 */
static BOOL __OSGetRTC(u32* rtc)
{
	BOOL err;
	u32 t0;
	u32 t1;
	int i;

	for (i = 0; i < 16; i++) {
		err = FALSE;
		err |= !GetRTC(&t0);
		err |= !GetRTC(&t1);
		if (err) {
			break;
		}
		if (t0 == t1) {
			*rtc = t0;
			return TRUE;
		}
	}
	return FALSE;
}

/**
 * @note Address: N/A
 * @note Size: 0x108
 */
static BOOL __OSSetRTC(u32 rtc)
{
	BOOL err;
	u32 cmd;

	if (!EXILock(RTC_CHAN, RTC_DEV, 0)) {
		return FALSE;
	}
	if (!EXISelect(RTC_CHAN, RTC_DEV, RTC_FREQ)) {
		EXIUnlock(RTC_CHAN);
		return FALSE;
	}

	cmd = RTC_CMD_WRITE;
	err = FALSE;
	err |= !EXIImm(RTC_CHAN, &cmd, 4, 1, nullptr);
	err |= !EXISync(RTC_CHAN);
	err |= !EXIImm(RTC_CHAN, &rtc, 4, 1, nullptr);
	err |= !EXISync(RTC_CHAN);
	err |= !EXIDeselect(RTC_CHAN);
	EXIUnlock(RTC_CHAN);

	return !err;
}

/**
 * @note Address: N/A
 * @note Size: 0x11C
 */
static BOOL ReadSram(void* buffer)
{
	BOOL err;
	u32 cmd;

	DCInvalidateRange(buffer, RTC_SRAM_SIZE);

	if (!EXILock(RTC_CHAN, RTC_DEV, 0)) {
		return FALSE;
	}
	if (!EXISelect(RTC_CHAN, RTC_DEV, RTC_FREQ)) {
		EXIUnlock(RTC_CHAN);
		return FALSE;
	}

	cmd = RTC_CMD_READ | RTC_SRAM_ADDR;
	err = FALSE;
	err |= !EXIImm(RTC_CHAN, &cmd, 4, 1, nullptr);
	err |= !EXISync(RTC_CHAN);
	err |= !EXIDma(RTC_CHAN, buffer, RTC_SRAM_SIZE, 0, nullptr);
	err |= !EXISync(RTC_CHAN);
	err |= !EXIDeselect(RTC_CHAN);
	EXIUnlock(RTC_CHAN);

	return !err;
}

/**
 * @note Address: 0x800F0A7C
 * @note Size: 0x60
 */
static void WriteSramCallback(s32 channel, OSContext* context)
{
	Scb.sync = WriteSram(Scb.sram + Scb.offset, Scb.offset, RTC_SRAM_SIZE - Scb.offset);
	if (Scb.sync) {
		Scb.offset = RTC_SRAM_SIZE;
	}
}

/**
 * @note Address: 0x800F0ADC
 * @note Size: 0x118
 */
static BOOL WriteSram(void* buffer, u32 offset, u32 size)
{
	BOOL err;
	u32 cmd;

	if (!EXILock(RTC_CHAN, RTC_DEV, WriteSramCallback)) {
		return FALSE;
	}
	if (!EXISelect(RTC_CHAN, RTC_DEV, RTC_FREQ)) {
		EXIUnlock(RTC_CHAN);
		return FALSE;
	}

	offset <<= 6;
	cmd = RTC_CMD_WRITE | RTC_SRAM_ADDR + offset;
	err = FALSE;
	err |= !EXIImm(RTC_CHAN, &cmd, 4, 1, nullptr);
	err |= !EXISync(RTC_CHAN);
	err |= !EXIImmEx(RTC_CHAN, buffer, (s32)size, 1);
	err |= !EXIDeselect(RTC_CHAN);
	EXIUnlock(RTC_CHAN);

	return !err;
}

/**
 * @note Address: 0x800F0BF4
 * @note Size: 0x13C
 */
void __OSInitSram()
{
	Scb.locked = Scb.enabled = FALSE;
	Scb.sync                 = ReadSram(Scb.sram);
	Scb.offset               = RTC_SRAM_SIZE;
	OSSetGbsMode(OSGetGbsMode());
}

/**
 * @note Address: N/A
 * @note Size: 0x68
 */
static void* LockSram(u32 offset)
{
	BOOL enabled;
	enabled = OSDisableInterrupts();

	if (Scb.locked != FALSE) {
		OSRestoreInterrupts(enabled);
		return nullptr;
	}

	Scb.enabled = enabled;
	Scb.locked  = TRUE;

	return Scb.sram + offset;
}

/**
 * @note Address: 0x800F0D30
 * @note Size: 0x5C
 */
OSSram* __OSLockSram() { return LockSram(0); }

/**
 * @note Address: 0x800F0D8C
 * @note Size: 0x5C
 */
OSSramEx* __OSLockSramEx() { return LockSram(sizeof(OSSram)); }

/**
 * @note Address: 0x800F0DE8
 * @note Size: 0x33C
 */
static BOOL UnlockSram(BOOL commit, u32 offset)
{
	u16* p;
	u16* ptr2;

	if (commit) {
		if (offset == 0) {
			OSSram* sram = (OSSram*)Scb.sram;

			if (2u < (sram->flags & 3)) {
				sram->flags &= ~3;
			}

			sram->checkSum = sram->checkSumInv = 0;
			for (p = (u16*)&sram->counterBias; p < (u16*)(Scb.sram + sizeof(OSSram)); p++) {
				sram->checkSum += *p;
				sram->checkSumInv += ~*p;
			}
		}

		if (offset < Scb.offset) {
			Scb.offset = offset;
		}

		// this isn't in prime?
		if (Scb.offset <= 20) {
			// this seems to work? esp. since we have GbsMode functions when prime doesn't
			// wacky tho
			OSSramEx* sramEx = (OSSramEx*)(&Scb.sram[20]);
			if ((u32)(sramEx->gbs & 0x7C00) == 0x5000 || (u32)(sramEx->gbs & 0xC0) == 0xC0) {
				sramEx->gbs = 0;
			}
		}

		Scb.sync = WriteSram(Scb.sram + Scb.offset, Scb.offset, RTC_SRAM_SIZE - Scb.offset);
		if (Scb.sync) {
			Scb.offset = RTC_SRAM_SIZE;
		}
	}
	Scb.locked = FALSE;
	OSRestoreInterrupts(Scb.enabled);
	return Scb.sync;
}

/**
 * @note Address: 0x800F1124
 * @note Size: 0x24
 */
BOOL __OSUnlockSram(BOOL commit) { return UnlockSram(commit, 0); }

/**
 * @note Address: 0x800F1148
 * @note Size: 0x24
 */
BOOL __OSUnlockSramEx(BOOL commit) { return UnlockSram(commit, sizeof(OSSram)); }

/**
 * @note Address: 0x800F116C
 * @note Size: 0x10
 */
BOOL __OSSyncSram() { return Scb.sync; }

/**
 * @note Address: 0x800F117C
 * @note Size: 0x124
 */
BOOL __OSReadROM(void* buffer, s32 length, s32 offset)
{
	BOOL err;
	u32 cmd;

	DCInvalidateRange(buffer, (u32)length);

	if (!EXILock(RTC_CHAN, RTC_DEV, 0)) {
		return FALSE;
	}
	if (!EXISelect(RTC_CHAN, RTC_DEV, RTC_FREQ)) {
		EXIUnlock(RTC_CHAN);
		return FALSE;
	}

	cmd = (u32)(offset << 6);
	err = FALSE;
	err |= !EXIImm(RTC_CHAN, &cmd, 4, 1, nullptr);
	err |= !EXISync(RTC_CHAN);
	err |= !EXIDma(RTC_CHAN, buffer, length, 0, nullptr);
	err |= !EXISync(RTC_CHAN);
	err |= !EXIDeselect(RTC_CHAN);
	EXIUnlock(RTC_CHAN);

	return !err;
}

/**
 * @note Address: 0x800F12A0
 * @note Size: 0x80
 */
u32 OSGetSoundMode()
{
	OSSram* sram;
	u32 mode;
	u32 tmp; // dumbass compiler

	sram = LockSram(0);
	mode = (sram->flags & 0x4) ? OS_SOUND_MODE_STEREO : OS_SOUND_MODE_MONO;
	__OSUnlockSram(FALSE);
	return mode;
}

/**
 * @note Address: 0x800F1320
 * @note Size: 0xA4
 */
void OSSetSoundMode(u32 mode)
{
	OSSram* sram;
	u32 tmp; // dumbass compiler

	mode <<= 2;
	mode &= 4;

	sram = LockSram(0);
	if (mode == (sram->flags & 4)) {
		__OSUnlockSram(FALSE);
		return;
	}

	sram->flags &= ~4;
	sram->flags |= mode;
	__OSUnlockSram(TRUE);
}

/**
 * @note Address: 0x800F13C4
 * @note Size: 0x70
 */
u32 OSGetProgressiveMode()
{
	OSSram* sram;
	u32 mode;
	u32 tmp; // dumbass compiler

	sram = LockSram(0);
	mode = (sram->flags & 0x80) >> 7;
	__OSUnlockSram(FALSE);
	return mode;
}

/**
 * @note Address: 0x800F1434
 * @note Size: 0xA4
 */
void OSSetProgressiveMode(u32 mode)
{
	OSSram* sram;
	u32 tmp; // dumbass compiler

	mode <<= 7;
	mode &= 0x80;

	sram = LockSram(0);
	if (mode == (sram->flags & 0x80)) {
		__OSUnlockSram(FALSE);
		return;
	}

	sram->flags &= ~0x80;
	sram->flags |= mode;
	__OSUnlockSram(TRUE);
}

/**
 * @note Address: 0x800F14D8
 * @note Size: 0xA4
 */
void OSSetEuRgb60Mode(u32 on)
{
	OSSram* sram;
	u32 tmp; // dumbass compiler

	on <<= 6;
	on &= 0x40;

	sram = LockSram(0);
	if (on == (sram->ntd & 0x40)) {
		__OSUnlockSram(FALSE);
		return;
	}

	sram->ntd &= ~0x40;
	sram->ntd |= on;
	__OSUnlockSram(TRUE);
}

/**
 * @note Address: 0x800F157C
 * @note Size: 0x84
 */
u16 OSGetWirelessID(s32 channel)
{
	OSSramEx* sram;
	u16 id;

	sram = __OSLockSramEx();
	id   = sram->wirelessPadID[channel];
	__OSUnlockSramEx(FALSE);
	return id;
}

/**
 * @note Address: 0x800F1600
 * @note Size: 0xAC
 */
void OSSetWirelessID(s32 channel, u16 id)
{
	OSSramEx* sram;

	sram = __OSLockSramEx();
	if (sram->wirelessPadID[channel] != id) {
		sram->wirelessPadID[channel] = id;
		__OSUnlockSramEx(TRUE);
		return;
	}

	__OSUnlockSramEx(FALSE);
}

/**
 * @note Address: 0x800F16AC
 * @note Size: 0x70
 */
u16 OSGetGbsMode()
{
	OSSramEx* sram;
	u16 id;

	sram = __OSLockSramEx();
	id   = sram->gbs;
	__OSUnlockSramEx(FALSE);
	return id;
}

/**
 * @note Address: 0x800F171C
 * @note Size: 0xB8
 */
void OSSetGbsMode(u16 mode)
{
	OSSramEx* sram;

	// same odd code as in UnlockSram?
	if ((u32)(mode & 0x7C00) == 0x5000 || (u32)(mode & 0xC0) == 0xC0) {
		mode = 0;
	}

	sram = __OSLockSramEx();
	if (mode == sram->gbs) {
		__OSUnlockSramEx(FALSE);
		return;
	}

	sram->gbs = mode;
	__OSUnlockSramEx(TRUE);
}
