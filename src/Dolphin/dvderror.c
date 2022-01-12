#include "Dolphin/dvd.h"
#include "Dolphin/os.h"

u32 ErrorTable[18] = { 0x00000000, 0x00023A00, 0x00062800, 0x00030200, 0x00031100, 0x00052000, 0x00052001, 0x00052100, 0x00052400,
	                   0x00052401, 0x00052402, 0x000B5A01, 0x00056300, 0x00020401, 0x00020400, 0x00040800, 0x00100007, 0x00000000 };
#pragma dont_inline on
/*
 * --INFO--
 * Address:	800DF654
 * Size:	00011C
 */
u8 ErrorCode2Num(u32 errorCode)
{
	int i;

	for (i = 0; i < 18; i++) {
		if (errorCode == ErrorTable[i]) {
			return i;
		}
	}

	if (errorCode >= 0x100000 && errorCode <= 0x100008) {
		return 17;
	}

	return 29;
}
#pragma dont_inline off
/*
 * --INFO--
 * Address:	800DF770
 * Size:	00007C
 */
void __DVDStoreErrorCode(u32 errCode)
{
	u8 storedCode;
	u8* sramPtr;
	u32 upperByte;

	if (errCode == 0x1234567) {
		storedCode = -1;
	} else if (errCode == 0x1234568) {
		storedCode = -2;
	} else {
		upperByte  = errCode >> 0x18;
		storedCode = ErrorCode2Num(errCode & 0xffffff);
		if (errCode >> 0x18 >= 6) {
			upperByte = 6;
		}
		storedCode = storedCode + upperByte * 30;
	}

	sramPtr     = (u8*)__OSLockSramEx();
	sramPtr[36] = storedCode;
	__OSUnlockSramEx(1);
}
