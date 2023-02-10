#include "Dolphin/card.h"

/*
 * --INFO--
 * Address:	800D6B80
 * Size:	0000DC
 */
static void BlockReadCallback(s32 channel, s32 result)
{
	CARDControl* card;
	CARDCallback callback;

	card = &__CARDBlock[channel];
	if (result < 0) {
		goto error;
	}

	card->xferred += CARD_SEG_SIZE;

	card->addr += CARD_SEG_SIZE;
	(u8*)card->buffer += CARD_SEG_SIZE;
	if (--card->repeat <= 0) {
		goto error;
	}

	result = __CARDReadSegment(channel, BlockReadCallback);
	if (result < 0) {
		goto error;
	}
	return;

error:
	if (card->apiCallback == nullptr) {
		__CARDPutControlBlock(card, result);
	}
	callback = card->xferCallback;
	if (callback) {
		card->xferCallback = nullptr;
		callback(channel, result);
	}
}

/*
 * --INFO--
 * Address:	800D6C5C
 * Size:	000064
 */
int __CARDRead(s32 channel, u32 addr, s32 length, void* dst, CARDCallback callback)
{
	CARDControl* card;
	card = &__CARDBlock[channel];
	if (!card->attached) {
		return CARD_RESULT_NOCARD;
	}

	card->xferCallback = callback;
	card->repeat       = (int)(length / CARD_SEG_SIZE);
	card->addr         = addr;
	card->buffer       = dst;

	return __CARDReadSegment(channel, BlockReadCallback);
}

/*
 * --INFO--
 * Address:	800D6CC0
 * Size:	0000DC
 */
static void BlockWriteCallback(s32 channel, s32 result)
{
	CARDControl* card;
	CARDCallback callback;

	card = &__CARDBlock[channel];
	if (result < 0) {
		goto error;
	}

	card->xferred += CARD_PAGE_SIZE;

	card->addr += CARD_PAGE_SIZE;
	(u8*)card->buffer += CARD_PAGE_SIZE;
	if (--card->repeat <= 0) {
		goto error;
	}

	result = __CARDWritePage(channel, BlockWriteCallback);
	if (result < 0) {
		goto error;
	}
	return;

error:
	if (card->apiCallback == nullptr) {
		__CARDPutControlBlock(card, result);
	}
	callback = card->xferCallback;
	if (callback) {
		card->xferCallback = nullptr;
		callback(channel, result);
	}
}

/*
 * --INFO--
 * Address:	800D6D9C
 * Size:	000064
 */
s32 __CARDWrite(s32 channel, u32 addr, s32 length, void* dst, CARDCallback callback)
{
	CARDControl* card;
	card = &__CARDBlock[channel];
	if (!card->attached) {
		return CARD_RESULT_NOCARD;
	}

	card->xferCallback = callback;
	card->repeat       = (int)(length / CARD_PAGE_SIZE);
	card->addr         = addr;
	card->buffer       = dst;

	return __CARDWritePage(channel, BlockWriteCallback);
}
