#include "Dolphin/card.h"

/**
 * @note Address: 0x800D7168
 * @note Size: 0x8
 */
CARDDirectoryBlock* __CARDGetDirBlock(CARDControl* card) { return card->currentDir; }

/**
 * @note Address: 0x800D7170
 * @note Size: 0xD0
 */
static void WriteCallback(s32 channel, s32 result)
{
	CARDControl* card;
	CARDCallback callback;

	card = &__CARDBlock[channel];
	if (0 <= result) {
		CARDDirectoryBlock* dir     = &card->workArea->dirBlock;
		CARDDirectoryBlock* dirBack = &card->workArea->dirBlockBackup;

		if (card->currentDir == dir) {
			card->currentDir = dirBack;
			memcpy(dirBack, dir, 0x2000);
		} else {
			card->currentDir = dir;
			memcpy(dir, dirBack, 0x2000);
		}
	}

error:
	if (card->apiCallback == nullptr) {
		__CARDPutControlBlock(card, result);
	}
	callback = card->eraseCallback;
	if (callback) {
		card->eraseCallback = nullptr;
		callback(channel, result);
	}
}

/**
 * @note Address: 0x800D7240
 * @note Size: 0xC8
 */
static void EraseCallback(s32 channel, s32 result)
{
	CARDControl* card;
	CARDCallback callback;
	CARDDirectoryBlock* dir;
	u32 tmp[2];
	u32 addr;

	card = &__CARDBlock[channel];
	if (result < 0) {
		goto error;
	}

	dir    = __CARDGetDirBlock(card);
	addr   = ((u32)dir - (u32)card->workArea) / CARD_SYSTEM_BLOCK_SIZE * card->sectorSize;
	result = __CARDWrite(channel, addr, CARD_SYSTEM_BLOCK_SIZE, dir, WriteCallback);
	if (result < 0) {
		goto error;
	}

	return;

error:
	if (card->apiCallback == 0) {
		__CARDPutControlBlock(card, result);
	}
	callback = card->eraseCallback;
	if (callback) {
		card->eraseCallback = nullptr;
		callback(channel, result);
	}
}

/**
 * @note Address: 0x800D7308
 * @note Size: 0xC4
 */
s32 __CARDUpdateDir(s32 channel, CARDCallback callback)
{
	CARDControl* card;
	CARDDirCheck* check;
	u32 tmp[2];
	u32 addr;
	CARDDirectoryBlock* dir;

	card = &__CARDBlock[channel];
	if (!card->attached) {
		return CARD_RESULT_NOCARD;
	}

	dir   = __CARDGetDirBlock(card);
	check = &dir->check;
	++check->checkCode;
	__CARDCheckSum(dir, CARD_SYSTEM_BLOCK_SIZE - sizeof(u32), &check->checkSum, &check->checkSumInv);
	DCStoreRange(dir, CARD_SYSTEM_BLOCK_SIZE);

	card->eraseCallback = callback;
	addr                = ((u32)dir - (u32)card->workArea) / CARD_SYSTEM_BLOCK_SIZE * card->sectorSize;
	return __CARDEraseSector(channel, addr, EraseCallback);
}
