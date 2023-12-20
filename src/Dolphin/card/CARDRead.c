#include "Dolphin/card.h"

/**
 * @note Address: 0x800D9E48
 * @note Size: 0x1B8
 */
s32 __CARDSeek(CARDFileInfo* fileInfo, s32 length, s32 offset, CARDControl** outCard)
{
	CARDControl* card;
	CARDDirectoryBlock* dir;
	CARDDir* ent;
	s32 result;
	CARDFatBlock* fat;

	result = __CARDGetControlBlock(fileInfo->chan, &card);
	if (result < 0) {
		return result;
	}

	if (!CARDIsValidBlockNo(card, fileInfo->iBlock) || card->cBlock * card->sectorSize <= fileInfo->offset) {
		return __CARDPutControlBlock(card, CARD_RESULT_FATAL_ERROR);
	}

	dir = __CARDGetDirBlock(card);
	ent = &dir->entries[fileInfo->fileNo];
	if (ent->length * card->sectorSize <= offset || ent->length * card->sectorSize < offset + length) {
		return __CARDPutControlBlock(card, CARD_RESULT_LIMIT);
	}

	card->fileInfo   = fileInfo;
	fileInfo->length = length;
	if (offset < fileInfo->offset) {
		fileInfo->offset = 0;
		fileInfo->iBlock = ent->startBlock;
		if (!CARDIsValidBlockNo(card, fileInfo->iBlock)) {
			return __CARDPutControlBlock(card, CARD_RESULT_BROKEN);
		}
	}
	fat = __CARDGetFatBlock(card);
	while (fileInfo->offset < TRUNC(offset, card->sectorSize)) {
		fileInfo->offset += card->sectorSize;
		fileInfo->iBlock = ((u16*)fat)[fileInfo->iBlock];
		if (!CARDIsValidBlockNo(card, fileInfo->iBlock)) {
			return __CARDPutControlBlock(card, CARD_RESULT_BROKEN);
		}
	}

	fileInfo->offset = offset;

	*outCard = card;
	return CARD_RESULT_READY;
}

/**
 * @note Address: 0x800DA000
 * @note Size: 0x130
 */
static void ReadCallback(s32 channel, s32 result)
{
	CARDControl* card;
	CARDCallback callback;
	CARDFatBlock* fat;
	CARDFileInfo* fileInfo;
	s32 length;

	card = &__CARDBlock[channel];
	if (result < 0) {
		goto error;
	}

	fileInfo = card->fileInfo;
	if (fileInfo->length < 0) {
		result = CARD_RESULT_CANCELED;
		goto error;
	}

	length = (s32)TRUNC(fileInfo->offset + card->sectorSize, card->sectorSize) - fileInfo->offset;
	fileInfo->length -= length;
	if (fileInfo->length <= 0) {
		goto error;
	}

	fat = __CARDGetFatBlock(card);
	fileInfo->offset += length;
	fileInfo->iBlock = ((u16*)fat)[fileInfo->iBlock];
	if (!CARDIsValidBlockNo(card, fileInfo->iBlock)) {
		result = CARD_RESULT_BROKEN;
		goto error;
	}

	result = __CARDRead(channel, card->sectorSize * (u32)fileInfo->iBlock,
	                    (fileInfo->length < card->sectorSize) ? fileInfo->length : card->sectorSize, card->buffer, ReadCallback);
	if (result < 0) {
		goto error;
	}

	return;

error:
	callback          = card->apiCallback;
	card->apiCallback = nullptr;
	__CARDPutControlBlock(card, result);
	callback(channel, result);
}

/**
 * @note Address: 0x800DA130
 * @note Size: 0x144
 */
s32 CARDReadAsync(CARDFileInfo* fileInfo, void* buffer, s32 length, s32 offset, CARDCallback callback)
{
	CARDControl* card;
	s32 result;
	CARDDirectoryBlock* dir;
	CARDDir* ent;

	if (OFFSET(offset, CARD_SEG_SIZE) != 0 || OFFSET(length, CARD_SEG_SIZE) != 0) {
		return CARD_RESULT_FATAL_ERROR;
	}
	result = __CARDSeek(fileInfo, length, offset, &card);
	if (result < 0) {
		return result;
	}

	dir    = __CARDGetDirBlock(card);
	ent    = &dir->entries[fileInfo->fileNo];
	result = __CARDIsReadable(card, ent);

	if (result < 0) {
		return __CARDPutControlBlock(card, result);
	}

	DCInvalidateRange(buffer, (u32)length);
	card->apiCallback = callback ? callback : __CARDDefaultApiCallback;

	offset = (s32)OFFSET(fileInfo->offset, card->sectorSize);
	length = (length < card->sectorSize - offset) ? length : card->sectorSize - offset;
	result = __CARDRead(fileInfo->chan, card->sectorSize * (u32)fileInfo->iBlock + offset, length, buffer, ReadCallback);
	if (result < 0) {
		__CARDPutControlBlock(card, result);
	}
	return result;
}

/**
 * @note Address: 0x800DA274
 * @note Size: 0x48
 */
s32 CARDRead(CARDFileInfo* fileInfo, void* buffer, s32 length, s32 offset)
{
	s32 result = CARDReadAsync(fileInfo, buffer, length, offset, __CARDSyncCallback);

	if (result < 0) {
		return result;
	}

	return __CARDSync(fileInfo->chan);
}
