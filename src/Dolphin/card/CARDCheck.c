#include "Dolphin/card.h"

/**
 * @note Address: 0x800D73CC
 * @note Size: 0x1B0
 */
void __CARDCheckSum(void* ptr, int length, u16* checksum, u16* checksumInv)
{
	u16* p;
	int i;

	length /= sizeof(u16);
	*checksum = *checksumInv = 0;
	for (i = 0, p = ptr; i < length; i++, p++) {
		*checksum += *p;
		*checksumInv += ~*p;
	}
	if (*checksum == 0xffff) {
		*checksum = 0;
	}
	if (*checksumInv == 0xffff) {
		*checksumInv = 0;
	}
}

/**
 * @note Address: 0x800D757C
 * @note Size: 0x284
 */
static s32 VerifyID(CARDControl* card)
{
	CARDID* id;
	u16 checksum;
	u16 checksumInv;
	OSSramEx* sramEx;
	OSTime rand;
	int i;

	id = &card->workArea->header.id;

	if (id->deviceID != 0 || id->size != card->size) {
		return CARD_RESULT_BROKEN;
	}

	__CARDCheckSum(id, sizeof(CARDID) - sizeof(u32), &checksum, &checksumInv);
	if (id->checkSum != checksum || id->checkSumInv != checksumInv) {
		return CARD_RESULT_BROKEN;
	}

	rand   = *(OSTime*)&id->serial[12];
	sramEx = __OSLockSramEx();

	for (i = 0; i < 12; i++) {
		rand = (rand * 1103515245 + 12345) >> 16;
		if (id->serial[i] != (u8)(sramEx->flashID[card - __CARDBlock][i] + rand)) {
			__OSUnlockSramEx(FALSE);
			return CARD_RESULT_BROKEN;
		}
		rand = ((rand * 1103515245 + 12345) >> 16) & 0x7FFF;
	}

	__OSUnlockSramEx(FALSE);
	if (id->encode != __CARDGetFontEncode()) {
		return CARD_RESULT_ENCODING;
	}

	return CARD_RESULT_READY;
}

/**
 * @note Address: 0x800D7800
 * @note Size: 0x240
 */
static s32 VerifyDir(CARDControl* card, int* outCurrent)
{
	CARDDirectoryBlock* dir[2];
	CARDDirCheck* check[2];
	u16 checkSum;
	u16 checkSumInv;
	int i;
	int errors;
	int current;

	current = errors = 0;
	for (i = 0; i < 2; i++) {
		dir[i]   = CARDGetDirectoryBlock(card, i);
		check[i] = &dir[i]->check;
		__CARDCheckSum(dir[i], CARD_SYSTEM_BLOCK_SIZE - sizeof(u32), &checkSum, &checkSumInv);
		if (check[i]->checkSum != checkSum || check[i]->checkSumInv != checkSumInv) {
			++errors;
			current          = i;
			card->currentDir = nullptr;
		}
	}

	if (errors == 0) {
		if (card->currentDir == 0) {
			if ((check[0]->checkCode - check[1]->checkCode) < 0) {
				current = 0;
			} else {
				current = 1;
			}
			card->currentDir = dir[current];
			memcpy(dir[current], dir[current ^ 1], CARD_SYSTEM_BLOCK_SIZE);
		} else {
			current = (card->currentDir == dir[0]) ? 0 : 1;
		}
	}

	if (outCurrent) {
		*outCurrent = current;
	}
	return errors;
}

/**
 * @note Address: 0x800D7A40
 * @note Size: 0x284
 */
static s32 VerifyFAT(CARDControl* card, int* outCurrent)
{
	CARDFatBlock* fat[2];
	CARDFatBlock* fatp;
	u16 nBlock;
	u16 cFree;
	int i;
	u16 checkSum;
	u16 checkSumInv;
	int errors;
	int current;

	current = errors = 0;
	for (i = 0; i < 2; i++) {
		fatp = fat[i] = CARDGetFatBlock(card, i);

		__CARDCheckSum(&fatp->checkCode, CARD_SYSTEM_BLOCK_SIZE - sizeof(u32), &checkSum, &checkSumInv);
		if (fatp->checkSum != checkSum || fatp->checkSumInv != checkSumInv) {
			++errors;
			current          = i;
			card->currentFat = nullptr;
			continue;
		}

		cFree = 0;
		for (nBlock = CARD_NUM_SYSTEM_BLOCK; nBlock < card->cBlock; nBlock++) {
			if (((u16*)fatp)[nBlock] == CARD_FAT_AVAIL) {
				cFree++;
			}
		}
		if (cFree != fatp->freeBlocks) {
			++errors;
			current          = i;
			card->currentFat = nullptr;
			continue;
		}
	}

	if (0 == errors) {
		if (card->currentFat == 0) {
			if (((s16)fat[0]->checkCode - (s16)fat[1]->checkCode) < 0) {
				current = 0;
			} else {
				current = 1;
			}
			card->currentFat = fat[current];
			memcpy(fat[current], fat[current ^ 1], CARD_SYSTEM_BLOCK_SIZE);
		} else {
			current = (card->currentFat == fat[0]) ? 0 : 1;
		}
	}
	if (outCurrent) {
		*outCurrent = current;
	}
	return errors;
}

/**
 * @note Address: 0x800D7CC4
 * @note Size: 0x8C
 */
s32 __CARDVerify(CARDControl* card)
{
	s32 result;
	int errors;

	result = VerifyID(card);
	if (result < 0) {
		return result;
	}

	errors = VerifyDir(card, NULL);
	errors += VerifyFAT(card, NULL);
	switch (errors) {
	case 0:
		return CARD_RESULT_READY;
	case 1:
		return CARD_RESULT_BROKEN;
	default:
		return CARD_RESULT_BROKEN;
	}
}

/**
 * @note Address: 0x800D7D50
 * @note Size: 0x590
 */
s32 CARDCheckExAsync(s32 channel, s32* xferBytes, CARDCallback callback)
{
	CARDControl* card;
	CARDDirectoryBlock* dir[2];
	CARDFatBlock* fat[2];
	u16* map;
	s32 result;
	int errors;
	int currentFat;
	int currentDir;
	s32 fileNo;
	u16 iBlock;
	u16 cBlock;
	u16 cFree;
	BOOL updateFat    = FALSE;
	BOOL updateDir    = FALSE;
	BOOL updateOrphan = FALSE;

	if (xferBytes) {
		*xferBytes = 0;
	}

	result = __CARDGetControlBlock(channel, &card);
	if (result < 0) {
		return result;
	}

	result = VerifyID(card);
	if (result < 0) {
		return __CARDPutControlBlock(card, result);
	}

	errors = VerifyDir(card, &currentDir);
	errors += VerifyFAT(card, &currentFat);
	if (1 < errors) {
		return __CARDPutControlBlock(card, CARD_RESULT_BROKEN);
	}

	dir[0] = &card->workArea->dirBlock;
	dir[1] = &card->workArea->dirBlockBackup;
	fat[0] = &card->workArea->blockAllocMap;
	fat[1] = &card->workArea->blockAllocMapBackup;

	switch (errors) {
	case 0:
		break;
	case 1:
		if (!card->currentDir) {
			card->currentDir = dir[currentDir];
			memcpy(dir[currentDir], dir[currentDir ^ 1], CARD_SYSTEM_BLOCK_SIZE);
			updateDir = TRUE;
		} else {
			card->currentFat = fat[currentFat];
			memcpy(fat[currentFat], fat[currentFat ^ 1], CARD_SYSTEM_BLOCK_SIZE);
			updateFat = TRUE;
		}
		break;
	}

	map = (u16*)fat[currentFat ^ 1];
	memset(map, 0, CARD_SYSTEM_BLOCK_SIZE);

	for (fileNo = 0; fileNo < CARD_MAX_FILE; fileNo++) {
		CARDDir* ent;

		ent = &card->currentDir->entries[fileNo];
		if (ent->gameName[0] == 0xff) {
			continue;
		}

		for (iBlock = ent->startBlock, cBlock = 0; iBlock != 0xFFFF && cBlock < ent->length;
		     iBlock = ((u16*)card->currentFat)[iBlock], ++cBlock) {
			if (!CARDIsValidBlockNo(card, iBlock) || 1 < ++map[iBlock]) {
				return __CARDPutControlBlock(card, CARD_RESULT_BROKEN);
			}
		}
		if (cBlock != ent->length || iBlock != 0xFFFF) {
			return __CARDPutControlBlock(card, CARD_RESULT_BROKEN);
		}
	}

	cFree = 0;
	for (iBlock = CARD_NUM_SYSTEM_BLOCK; iBlock < card->cBlock; iBlock++) {
		u16 nextBlock;

		nextBlock = ((u16*)card->currentFat)[iBlock];
		if (map[iBlock] == 0) {
			if (nextBlock != CARD_FAT_AVAIL) {
				((u16*)card->currentFat)[iBlock] = CARD_FAT_AVAIL;
				updateOrphan                     = TRUE;
			}
			cFree++;
		} else if (!CARDIsValidBlockNo(card, nextBlock) && nextBlock != 0xFFFF) {
			return __CARDPutControlBlock(card, CARD_RESULT_BROKEN);
		}
	}
	if (cFree != card->currentFat->freeBlocks) {
		card->currentFat->freeBlocks = cFree;
		updateOrphan                 = TRUE;
	}
	if (updateOrphan) {
		__CARDCheckSum(&card->currentFat->checkCode, CARD_SYSTEM_BLOCK_SIZE - sizeof(u32), &card->currentFat->checkSum,
		               &card->currentFat->checkSumInv);
	}

	memcpy(fat[currentFat ^ 1], fat[currentFat], CARD_SYSTEM_BLOCK_SIZE);

	if (updateDir) {
		if (xferBytes) {
			*xferBytes = CARD_SYSTEM_BLOCK_SIZE;
		}
		return __CARDUpdateDir(channel, callback);
	}

	if (updateFat | updateOrphan) {
		if (xferBytes) {
			*xferBytes = CARD_SYSTEM_BLOCK_SIZE;
		}
		return __CARDUpdateFatBlock(channel, card->currentFat, callback);
	}

	__CARDPutControlBlock(card, CARD_RESULT_READY);
	if (callback) {
		BOOL enabled = OSDisableInterrupts();
		callback(channel, CARD_RESULT_READY);
		OSRestoreInterrupts(enabled);
	}
	return CARD_RESULT_READY;
}

/**
 * @note Address: 0x800D82E0
 * @note Size: 0x54
 */
s32 CARDCheck(s32 channel)
{
	s32 result;
	s32 xferBytes;

	result = CARDCheckExAsync(channel, &xferBytes, __CARDSyncCallback);

	if (result < 0 || &xferBytes == nullptr) {
		return result;
	}

	return __CARDSync(channel);
}
