#include "Dolphin/card.h"

/**
 * @note Address: 0x800DA638
 * @note Size: 0x1F8
 */
static void UpdateIconOffsets(CARDDir* entry, CARDStat* state)
{
	u32 offset;
	BOOL iconTlut;
	int i;

	offset = entry->iconAddr;
	if (offset == 0xffffffff) {
		state->bannerFormat = 0;
		state->iconFormat   = 0;
		state->iconSpeed    = 0;
		offset              = 0;
	}

	iconTlut = FALSE;
	switch (CARDGetBannerFormat(entry)) {
	case CARD_STAT_BANNER_C8:
		state->offsetBanner = offset;
		offset += CARD_BANNER_WIDTH * CARD_BANNER_HEIGHT;
		state->offsetBannerTlut = offset;
		offset += 2 * 256;
		break;
	case CARD_STAT_BANNER_RGB5A3:
		state->offsetBanner = offset;
		offset += 2 * CARD_BANNER_WIDTH * CARD_BANNER_HEIGHT;
		state->offsetBannerTlut = 0xffffffff;
		break;
	default:
		state->offsetBanner     = 0xffffffff;
		state->offsetBannerTlut = 0xffffffff;
		break;
	}
	for (i = 0; i < CARD_ICON_MAX; ++i) {
		switch (CARDGetIconFormat(entry, i)) {
		case CARD_STAT_ICON_C8:
			state->offsetIcon[i] = offset;
			offset += CARD_ICON_WIDTH * CARD_ICON_HEIGHT;
			iconTlut = TRUE;
			break;
		case CARD_STAT_ICON_RGB5A3:
			state->offsetIcon[i] = offset;
			offset += 2 * CARD_ICON_WIDTH * CARD_ICON_HEIGHT;
			break;
		default:
			state->offsetIcon[i] = 0xffffffff;
			break;
		}
	}
	if (iconTlut) {
		state->offsetIconTlut = offset;
		offset += 2 * 256;
	} else {
		state->offsetIconTlut = 0xffffffff;
	}
	state->offsetData = offset;
}

/**
 * @note Address: 0x800DA830
 * @note Size: 0x114
 */
s32 CARDGetStatus(s32 channel, s32 fileNo, CARDStat* state)
{
	CARDControl* card;
	CARDDirectoryBlock* dir;
	CARDDir* ent;
	s32 result;

	if (fileNo < 0 || CARD_MAX_FILE <= fileNo) {
		return CARD_RESULT_FATAL_ERROR;
	}
	result = __CARDGetControlBlock(channel, &card);
	if (result < 0) {
		return result;
	}

	dir    = __CARDGetDirBlock(card);
	ent    = &dir->entries[fileNo];
	result = __CARDIsReadable(card, ent);

	if (result >= 0) {
		memcpy(state->gameName, ent->gameName, sizeof(state->gameName));
		memcpy(state->company, ent->company, sizeof(state->company));
		state->length = (u32)ent->length * card->sectorSize;
		memcpy(state->fileName, ent->fileName, CARD_FILENAME_MAX);
		state->time = ent->time;

		state->bannerFormat = ent->bannerFormat;
		state->iconAddr     = ent->iconAddr;
		state->iconFormat   = ent->iconFormat;
		state->iconSpeed    = ent->iconSpeed;
		state->commentAddr  = ent->commentAddr;

		UpdateIconOffsets(ent, state);
	}
	return __CARDPutControlBlock(card, result);
}

/**
 * @note Address: 0x800DA944
 * @note Size: 0x174
 */
s32 CARDSetStatusAsync(s32 channel, s32 fileNo, CARDStat* state, CARDCallback callback)
{
	CARDControl* card;
	CARDDirectoryBlock* dir;
	CARDDir* ent;
	s32 result;

	if (fileNo < 0 || CARD_MAX_FILE <= fileNo || (state->iconAddr != 0xffffffff && CARD_READ_SIZE <= state->iconAddr)
	    || (state->commentAddr != 0xffffffff && CARD_SYSTEM_BLOCK_SIZE - CARD_COMMENT_SIZE < state->commentAddr % CARD_SYSTEM_BLOCK_SIZE)) {
		return CARD_RESULT_FATAL_ERROR;
	}
	result = __CARDGetControlBlock(channel, &card);
	if (result < 0) {
		return result;
	}

	dir    = __CARDGetDirBlock(card);
	ent    = &dir->entries[fileNo];
	result = __CARDIsWritable(card, ent);
	if (result < 0) {
		return __CARDPutControlBlock(card, result);
	}

	ent->bannerFormat = state->bannerFormat;
	ent->iconAddr     = state->iconAddr;
	ent->iconFormat   = state->iconFormat;
	ent->iconSpeed    = state->iconSpeed;
	ent->commentAddr  = state->commentAddr;
	UpdateIconOffsets(ent, state);

	if (ent->iconAddr == 0xffffffff) {
		CARDSetIconSpeed(ent, 0, CARD_STAT_SPEED_FAST);
	}

	ent->time = (u32)OSTicksToSeconds(OSGetTime());
	result    = __CARDUpdateDir(channel, callback);
	if (result < 0) {
		__CARDPutControlBlock(card, result);
	}
	return result;
}

/**
 * @note Address: 0x800DAAB8
 * @note Size: 0x48
 */
s32 CARDSetStatus(s32 channel, s32 fileNo, CARDStat* state)
{
	s32 result = CARDSetStatusAsync(channel, fileNo, state, __CARDSyncCallback);
	if (result < 0) {
		return result;
	}

	return __CARDSync(channel);
}
