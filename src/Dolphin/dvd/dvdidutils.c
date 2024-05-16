#include "types.h"
#include "string.h"
#include "Dolphin/dvd.h"

/**
 * @note Address: N/A
 * @note Size: 0x38
 */
void strnlen(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x800DF7EC
 * @note Size: 0xF8
 */
BOOL DVDCompareDiskID(DVDDiskID* discID1, DVDDiskID* discID2)
{
	u8 temp_r0;
	u8 temp_r3;

	if ((discID1->gameName[0] != 0) && (discID2->gameName[0] != 0) && (strncmp(discID1->gameName, discID2->gameName, 4) != 0)) {
		return FALSE;
	}
	if ((discID1->company[0] == 0) || (discID2->company[0] == 0) || (strncmp(discID1->company, discID2->company, 2) != 0)) {
		return FALSE;
	}

	temp_r3 = discID1->diskNumber;
	temp_r0 = temp_r3;
	if (temp_r3 != 0xFF) {
		temp_r0 = discID2->diskNumber;
		if ((temp_r0 != 0xFF) && (temp_r3 != temp_r0)) {
			return FALSE;
		}
	}
	temp_r3 = discID1->gameVersion;
	temp_r0 = temp_r3;
	if (temp_r3 != 0xFF) {
		temp_r0 = discID2->gameVersion;
		if ((temp_r0 != 0xFF) && (temp_r3 != temp_r0)) {
			return FALSE;
		}
	}
	return TRUE;
}

/**
 * @note Address: N/A
 * @note Size: 0x80
 */
void DVDGenerateDiskID(void)
{
	// UNUSED FUNCTION
}
