#include "Dolphin/card.h"

static u32 SectorSizeTable[8] = {
	8 * 1024, 16 * 1024, 32 * 1024, 64 * 1024, 128 * 1024, 256 * 1024, 0, 0,
};

static u32 LatencyTable[8] = {
	4, 8, 16, 32, 64, 128, 256, 512,
};

void __CARDMountCallback(s32 channel, s32 result);
static void DoUnmount(s32 channel, s32 result);

/**
 * @note Address: 0x800D8334
 * @note Size: 0xCC
 */
static BOOL IsCard(u32 id)
{
	u32 size;
	s32 sectorSize;
	if (id & (0xFFFF0000) && (id != 0x80000004 || __CARDVendorID == 0xFFFF)) {
		return FALSE;
	}

	if ((id & 3) != 0) {
		return FALSE;
	}

	size = id & 0xfc;
	switch (size) {
	case 4:
	case 8:
	case 16:
	case 32:
	case 64:
	case 128:
		break;
	default:
		return FALSE;
		break;
	}

	sectorSize = SectorSizeTable[(id & 0x00003800) >> 11];
	if (sectorSize == 0) {
		return FALSE;
	}

	if ((size * 1024 * 1024 / 8) / sectorSize < 8) {
		return FALSE;
	}

	return TRUE;
}

/**
 * @note Address: 0x800D8400
 * @note Size: 0x38
 */
BOOL CARDProbe(s32 channel)
{
	if (GameChoice & 0x80) {
		return CARD_RESULT_READY;
	}

	return EXIProbe(channel);
}

/**
 * @note Address: 0x800D8438
 * @note Size: 0x17C
 */
s32 CARDProbeEx(s32 channel, s32* memSize, s32* sectorSize)
{
	u32 id;
	CARDControl* card;
	BOOL enabled;
	s32 result;
	int probe;

	if (channel < 0 || 2 <= channel) {
		return CARD_RESULT_FATAL_ERROR;
	}

	if (GameChoice & 0x80) {
		return CARD_RESULT_NOCARD;
	}

	card    = &__CARDBlock[channel];
	enabled = OSDisableInterrupts();

	probe = EXIProbeEx(channel);
	if (probe == -1) {
		result = CARD_RESULT_NOCARD;
	} else if (probe == 0) {
		result = CARD_RESULT_BUSY;
	} else if (card->attached) {
		if (card->mountStep < 1) {
			result = CARD_RESULT_BUSY;
		} else {
			if (memSize) {
				*memSize = card->size;
			}
			if (sectorSize) {
				*sectorSize = card->sectorSize;
			}
			result = CARD_RESULT_READY;
		}
	} else if ((EXIGetState(channel) & 8)) {
		result = CARD_RESULT_WRONGDEVICE;
	} else if (!EXIGetID(channel, 0, &id)) {
		result = CARD_RESULT_BUSY;
	} else if (IsCard(id)) {
		if (memSize) {
			*memSize = (s32)(id & 0xfc);
		}
		if (sectorSize) {
			*sectorSize = SectorSizeTable[(id & 0x00003800) >> 11];
		}
		result = CARD_RESULT_READY;
	} else {
		result = CARD_RESULT_WRONGDEVICE;
	}

	OSRestoreInterrupts(enabled);
	return result;
}

/**
 * @note Address: 0x800D85B4
 * @note Size: 0x410
 */
static s32 DoMount(s32 channel)
{
	CARDControl* card;
	u32 id;
	u8 status;
	s32 result;
	OSSramEx* sram;
	int i;
	u8 checkSum;
	int step;

	card = &__CARDBlock[channel];

	if (card->mountStep == 0) {
		if (EXIGetID(channel, 0, &id) == 0) {
			result = CARD_RESULT_NOCARD;
		} else if (IsCard(id)) {
			result = CARD_RESULT_READY;
		} else {
			result = CARD_RESULT_WRONGDEVICE;
		}
		if (result < 0) {
			goto error;
		}

		card->cid = id;

		card->size       = (u16)(id & 0xFC);
		card->sectorSize = SectorSizeTable[(id & 0x00003800) >> 11];
		card->cBlock     = (u16)((card->size * 1024 * 1024 / 8) / card->sectorSize);
		card->latency    = LatencyTable[(id & 0x00000700) >> 8];

		result = __CARDClearStatus(channel);
		if (result < 0) {
			goto error;
		}
		result = __CARDReadStatus(channel, &status);
		if (result < 0) {
			goto error;
		}

		if (!EXIProbe(channel)) {
			result = CARD_RESULT_NOCARD;
			goto error;
		}

		if (!(status & 0x40)) {
			result = __CARDUnlock(channel, card->id);
			if (result < 0) {
				goto error;
			}

			checkSum = 0;
			sram     = __OSLockSramEx();
			for (i = 0; i < 12; i++) {
				sram->flashID[channel][i] = card->id[i];
				checkSum += card->id[i];
			}
			sram->flashIDCheckSum[channel] = (u8)~checkSum;
			__OSUnlockSramEx(TRUE);

			return result;
		} else {
			card->mountStep = 1;

			checkSum = 0;
			sram     = __OSLockSramEx();
			for (i = 0; i < 12; i++) {
				checkSum += sram->flashID[channel][i];
			}
			__OSUnlockSramEx(FALSE);
			if (sram->flashIDCheckSum[channel] != (u8)~checkSum) {
				result = CARD_RESULT_IOERROR;
				goto error;
			}
		}
	}

	if (card->mountStep == 1) {
		if (card->cid == 0x80000004) {
			u16 vendorID;

			sram     = __OSLockSramEx();
			vendorID = *(u16*)sram->flashID[channel];
			__OSUnlockSramEx(FALSE);

			if (__CARDVendorID == 0xffff || vendorID != __CARDVendorID) {
				result = CARD_RESULT_WRONGDEVICE;
				goto error;
			}
		}

		card->mountStep = 2;

		result = __CARDEnableInterrupt(channel, TRUE);
		if (result < 0) {
			goto error;
		}

		EXISetExiCallback(channel, __CARDExiHandler);
		EXIUnlock(channel);
		DCInvalidateRange(card->workArea, CARD_WORKAREA_SIZE);
	}

	step   = card->mountStep - 2;
	result = __CARDRead(channel, (u32)card->sectorSize * step, CARD_SYSTEM_BLOCK_SIZE,
	                    (u8*)card->workArea + (CARD_SYSTEM_BLOCK_SIZE * step), __CARDMountCallback);
	if (result < 0) {
		__CARDPutControlBlock(card, result);
	}
	return result;

error:
	EXIUnlock(channel);
	DoUnmount(channel, result);
	return result;
}

/**
 * @note Address: 0x800D89C4
 * @note Size: 0x138
 */
void __CARDMountCallback(s32 channel, s32 result)
{
	CARDControl* card;
	CARDCallback callback;

	card = &__CARDBlock[channel];

	switch (result) {
	case CARD_RESULT_READY:
		if (++card->mountStep < CARD_MAX_MOUNT_STEP) {
			result = DoMount(channel);
			if (0 <= result) {
				return;
			}
		} else {
			result = __CARDVerify(card);
		}
		break;
	case CARD_RESULT_UNLOCKED:
		card->unlockCallback = __CARDMountCallback;
		if (!EXILock(channel, 0, __CARDUnlockedHandler)) {
			return;
		}
		card->unlockCallback = nullptr;

		result = DoMount(channel);
		if (0 <= result) {
			return;
		}
		break;
	case CARD_RESULT_IOERROR:
	case CARD_RESULT_NOCARD:
		DoUnmount(channel, result);
		break;
	}

	callback          = card->apiCallback;
	card->apiCallback = nullptr;
	__CARDPutControlBlock(card, result);
	callback(channel, result);
}

/**
 * @note Address: 0x800D8AFC
 * @note Size: 0x1A0
 */
s32 CARDMountAsync(s32 channel, CARDMemoryCard* workArea, CARDCallback detachCallback, CARDCallback attachCallback)
{
	CARDControl* card;
	BOOL enabled;

	if (channel < 0 || 2 <= channel) {
		return CARD_RESULT_FATAL_ERROR;
	}
	if (GameChoice & 0x80) {
		return CARD_RESULT_NOCARD;
	}
	card = &__CARDBlock[channel];

	enabled = OSDisableInterrupts();
	if (card->result == CARD_RESULT_BUSY) {
		OSRestoreInterrupts(enabled);
		return CARD_RESULT_BUSY;
	}

	if (!card->attached && (EXIGetState(channel) & 0x08)) {
		OSRestoreInterrupts(enabled);
		return CARD_RESULT_WRONGDEVICE;
	}

	card->result      = CARD_RESULT_BUSY;
	card->workArea    = workArea;
	card->extCallback = detachCallback;
	card->apiCallback = attachCallback ? attachCallback : __CARDDefaultApiCallback;
	card->exiCallback = nullptr;

	if (!card->attached && !EXIAttach(channel, __CARDExtHandler)) {
		card->result = CARD_RESULT_NOCARD;
		OSRestoreInterrupts(enabled);
		return CARD_RESULT_NOCARD;
	}

	card->mountStep = 0;
	card->attached  = TRUE;
	EXISetExiCallback(channel, 0);
	OSCancelAlarm(&card->alarm);

	card->currentDir = 0;
	card->currentFat = 0;

	OSRestoreInterrupts(enabled);

	card->unlockCallback = __CARDMountCallback;
	if (!EXILock(channel, 0, __CARDUnlockedHandler)) {
		return CARD_RESULT_READY;
	}
	card->unlockCallback = nullptr;

	return DoMount(channel);
}

/**
 * @note Address: 0x800D8C9C
 * @note Size: 0x48
 */
s32 CARDMount(s32 channel, CARDMemoryCard* workArea, CARDCallback detachCallback)
{
	s32 result = CARDMountAsync(channel, workArea, detachCallback, __CARDSyncCallback);
	if (result < 0) {
		return result;
	}

	return __CARDSync(channel);
}

/**
 * @note Address: 0x800D8CE4
 * @note Size: 0x9C
 */
static void DoUnmount(s32 channel, s32 result)
{
	CARDControl* card;
	BOOL enabled;

	card    = &__CARDBlock[channel];
	enabled = OSDisableInterrupts();
	if (card->attached) {
		EXISetExiCallback(channel, 0);
		EXIDetach(channel);
		OSCancelAlarm(&card->alarm);
		card->attached  = FALSE;
		card->result    = result;
		card->mountStep = 0;
	}
	OSRestoreInterrupts(enabled);
}

/**
 * @note Address: 0x800D8D80
 * @note Size: 0xAC
 */
s32 CARDUnmount(s32 channel)
{
	CARDControl* card;
	s32 result;

	result = __CARDGetControlBlock(channel, &card);
	if (result < 0) {
		return result;
	}
	DoUnmount(channel, CARD_RESULT_NOCARD);
	return CARD_RESULT_READY;
}
