#include "Dolphin/os.h"

// forward declarations.
static BOOL WriteSram(void* buffer, u32 offset, u32 size);

static SramControlBlock Scb ATTRIBUTE_ALIGN(32);

/*
 * --INFO--
 * Address:	........
 * Size:	000118
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

/*
 * --INFO--
 * Address:	........
 * Size:	00022C
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

/*
 * --INFO--
 * Address:	........
 * Size:	000108
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

/*
 * --INFO--
 * Address:	........
 * Size:	00011C
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

/*
 * --INFO--
 * Address:	800F0A7C
 * Size:	000060
 */
static void WriteSramCallback(s32 channel, OSContext* context)
{
	Scb.sync = WriteSram(Scb.sram + Scb.offset, Scb.offset, RTC_SRAM_SIZE - Scb.offset);
	if (Scb.sync) {
		Scb.offset = RTC_SRAM_SIZE;
	}
}

/*
 * --INFO--
 * Address:	800F0ADC
 * Size:	000118
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

/*
 * --INFO--
 * Address:	800F0BF4
 * Size:	00013C
 */
void __OSInitSram()
{
	Scb.locked = Scb.enabled = FALSE;
	Scb.sync                 = ReadSram(Scb.sram);
	Scb.offset               = RTC_SRAM_SIZE;
	OSSetGbsMode(OSGetGbsMode());
}

/*
 * --INFO--
 * Address:	........
 * Size:	000068
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

/*
 * --INFO--
 * Address:	800F0D30
 * Size:	00005C
 */
OSSram* __OSLockSram() { return LockSram(0); }

/*
 * --INFO--
 * Address:	800F0D8C
 * Size:	00005C
 */
OSSramEx* __OSLockSramEx() { return LockSram(sizeof(OSSram)); }

/*
 * --INFO--
 * Address:	800F0DE8
 * Size:	00033C
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

/*
 * --INFO--
 * Address:	800F1124
 * Size:	000024
 */
BOOL __OSUnlockSram(BOOL commit) { return UnlockSram(commit, 0); }

/*
 * --INFO--
 * Address:	800F1148
 * Size:	000024
 */
BOOL __OSUnlockSramEx(BOOL commit) { return UnlockSram(commit, sizeof(OSSram)); }

/*
 * --INFO--
 * Address:	800F116C
 * Size:	000010
 */
BOOL __OSSyncSram() { return Scb.sync; }

/*
 * --INFO--
 * Address:	800F117C
 * Size:	000124
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

/*
 * --INFO--
 * Address:	800F12A0
 * Size:	000080
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

/*
 * --INFO--
 * Address:	800F1320
 * Size:	0000A4
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

/*
 * --INFO--
 * Address:	800F13C4
 * Size:	000070
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

/*
 * --INFO--
 * Address:	800F1434
 * Size:	0000A4
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

/*
 * --INFO--
 * Address:	800F14D8
 * Size:	0000A4
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

/*
 * --INFO--
 * Address:	800F157C
 * Size:	000084
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

/*
 * --INFO--
 * Address:	800F1600
 * Size:	0000AC
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

/*
 * --INFO--
 * Address:	800F16AC
 * Size:	000070
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

/*
 * --INFO--
 * Address:	800F171C
 * Size:	0000B8
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
