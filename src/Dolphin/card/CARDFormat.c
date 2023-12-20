#include "Dolphin/card.h"
#include "Dolphin/hw_regs.h"

/**
 * @note Address: 0x800D8E2C
 * @note Size: 0x144
 */
static void FormatCallback(s32 channel, s32 result)
{
	CARDControl* card;
	CARDCallback callback;

	card = &__CARDBlock[channel];
	if (result < 0) {
		goto error;
	}

	++card->formatStep;
	if (card->formatStep < CARD_NUM_SYSTEM_BLOCK) {
		result = __CARDEraseSector(channel, (u32)card->sectorSize * card->formatStep, FormatCallback);
		if (0 <= result) {
			return;
		}
	} else if (card->formatStep < 2 * CARD_NUM_SYSTEM_BLOCK) {
		int step = card->formatStep - CARD_NUM_SYSTEM_BLOCK;
		result   = __CARDWrite(channel, (u32)card->sectorSize * step, CARD_SYSTEM_BLOCK_SIZE,
                             (u8*)card->workArea + (CARD_SYSTEM_BLOCK_SIZE * step), FormatCallback);
		if (result >= 0) {
			return;
		}
	} else {
		card->currentDir = &card->workArea->dirBlock;
		memcpy(card->currentDir, &card->workArea->dirBlockBackup, CARD_SYSTEM_BLOCK_SIZE);

		card->currentFat = &card->workArea->blockAllocMap;
		memcpy(card->currentFat, &card->workArea->blockAllocMapBackup, CARD_SYSTEM_BLOCK_SIZE);
	}

error:
	callback          = card->apiCallback;
	card->apiCallback = nullptr;
	__CARDPutControlBlock(card, result);
	callback(channel, result);
}

/**
 * @note Address: 0x800D8F70
 * @note Size: 0x658
 */
s32 __CARDFormatRegionAsync(s32 channel, u16 encode, CARDCallback callback)
{
	CARDControl* card;
	CARDID* id;
	CARDDirectoryBlock* dir;
	CARDFatBlock* fat;
	s16 i;
	s32 result;
	OSSram* sram;
	OSSramEx* sramEx;
	u16 viDTVStatus;
	OSTime time;
	OSTime rand;

	result = __CARDGetControlBlock(channel, &card);
	if (result < 0) {
		return result;
	}

	id = &card->workArea->header.id;
	memset(id, 0xff, CARD_SYSTEM_BLOCK_SIZE);
	viDTVStatus = __VIRegs[55];

	id->encode = encode;

	sram                   = __OSLockSram();
	*(u32*)&id->serial[20] = sram->counterBias;
	*(u32*)&id->serial[24] = sram->language;
	__OSUnlockSram(FALSE);

	rand = time = OSGetTime();

	sramEx = __OSLockSramEx();
	for (i = 0; i < 12; i++) {
		rand          = (rand * 1103515245 + 12345) >> 16;
		id->serial[i] = (u8)(sramEx->flashID[channel][i] + rand);
		rand          = ((rand * 1103515245 + 12345) >> 16) & 0x7FFF;
	}
	__OSUnlockSramEx(FALSE);

	*(u32*)&id->serial[28]    = viDTVStatus;
	*(OSTime*)&id->serial[12] = time;

	id->deviceID = 0;
	id->size     = card->size;
	__CARDCheckSum(id, sizeof(CARDID) - sizeof(u32), &id->checkSum, &id->checkSumInv);

	for (i = 0; i < 2; i++) {
		CARDDirCheck* check;

		dir = CARDGetDirectoryBlock(card, i);
		memset(dir, 0xff, CARD_SYSTEM_BLOCK_SIZE);
		check            = &dir->check;
		check->checkCode = i;
		__CARDCheckSum(dir, CARD_SYSTEM_BLOCK_SIZE - sizeof(u32), &check->checkSum, &check->checkSumInv);
	}
	for (i = 0; i < 2; i++) {
		fat = CARDGetFatBlock(card, i);
		memset(fat, 0x00, CARD_SYSTEM_BLOCK_SIZE);
		fat->checkCode      = (u16)i;
		fat->freeBlocks     = (u16)(card->cBlock - CARD_NUM_SYSTEM_BLOCK);
		fat->lastAllocBlock = CARD_NUM_SYSTEM_BLOCK - 1;
		__CARDCheckSum(&fat->checkCode, CARD_SYSTEM_BLOCK_SIZE - sizeof(u32), &fat->checkSum, &fat->checkSumInv);
	}

	card->apiCallback = callback ? callback : __CARDDefaultApiCallback;
	DCStoreRange(card->workArea, CARD_WORKAREA_SIZE);

	card->formatStep = 0;
	result           = __CARDEraseSector(channel, (u32)card->sectorSize * card->formatStep, FormatCallback);
	if (result < 0) {
		__CARDPutControlBlock(card, result);
	}
	return result;
}

/**
 * @note Address: 0x800D95C8
 * @note Size: 0x54
 */
s32 CARDFormat(s32 channel)
{
	s32 result = __CARDFormatRegionAsync(channel, __CARDGetFontEncode(), __CARDSyncCallback);
	if (result < 0) {
		return result;
	}
	return __CARDSync(channel);
}
