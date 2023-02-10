#include "Dolphin/card.h"

u16 __CARDVendorID = 0xFFFF;
u8 __CARDPermMask  = 28;

/*
 * --INFO--
 * Address:	800DAB00
 * Size:	0000C4
 */
s32 CARDGetSerialNo(s32 channel, u64* serialNo)
{
	CARDControl* card;
	CARDID* id;
	int i;
	u64 code;
	s32 result;

	if (!(0 <= channel && channel < 2)) {
		return CARD_RESULT_FATAL_ERROR;
	}

	result = __CARDGetControlBlock(channel, &card);
	if (result < 0) {
		return result;
	}

	id = &card->workArea->header.id;
	for (code = 0, i = 0; i < sizeof(id->serial) / sizeof(u64); ++i) {
		code ^= *(u64*)&id->serial[sizeof(u64) * i];
	}
	*serialNo = code;

	return __CARDPutControlBlock(card, CARD_RESULT_READY);
}
