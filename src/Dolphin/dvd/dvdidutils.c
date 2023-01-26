#include "types.h"
#include "Dolphin/string.h"

/*
 * --INFO--
 * Address:	........
 * Size:	000038
 */
void strnlen(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800DF7EC
 * Size:	0000F8
 */
BOOL DVDCompareDiskID(const char* arg0, const char* arg1) // these are probably pointers to dvd id structs
{
	u8 temp_r0;
	u8 temp_r3;

	if ((arg0[0] != 0) && (arg1[0] != 0) && (strncmp(arg0, arg1, 4) != 0)) {
		return FALSE;
	}
	if ((arg0[4] == 0) || (arg1[4] == 0) || (strncmp(arg0 + 4, arg1 + 4, 2) != 0)) {
		return FALSE;
	}
	temp_r3 = arg0[6];
	temp_r0 = temp_r3;
	if (temp_r3 != 0xFF) {
		temp_r0 = arg1[6];
		if ((temp_r0 != 0xFF) && (temp_r3 != temp_r0)) {
			return FALSE;
		}
	}
	temp_r3 = arg0[7];
	temp_r0 = temp_r3;
	if (temp_r3 != 0xFF) {
		temp_r0 = arg1[7];
		if ((temp_r0 != 0xFF) && (temp_r3 != temp_r0)) {
			return FALSE;
		}
	}
	return TRUE;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000080
 */
void DVDGenerateDiskID(void)
{
	// UNUSED FUNCTION
}
