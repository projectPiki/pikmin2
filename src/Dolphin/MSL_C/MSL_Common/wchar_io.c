#include "types.h"

#ifndef _MSL_WIDE_CHAR
#define _MSL_WIDE_CHAR
#endif

#include "PowerPC_EABI_Support/MSL_C/MSL_Common/ansi_files.h"

/**
 * @note Address: N/A
 * @note Size: 0xC8
 */
void putwc(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0xCC
 */
void putwchar(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0xC8
 */
void fputwc(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0xC4
 */
void getwc(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0xCC
 */
void getwchar(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0xC4
 */
void fgetwc(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x154
 */
void ungetwc(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x110
 */
void fputws(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x150
 */
void fgetws(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x800CC258
 * @note Size: 0x88
 */
int fwide(FILE* stream, int mode)
{
	int orientation;

	if (stream == nullptr || stream->mMode.file_kind == __closed_file)
		return 0;

	orientation = stream->mMode.file_orientation;
	switch (orientation) {
	case __unoriented:
		if (mode > 0)
			stream->mMode.file_orientation = __wide_oriented;
		else if (mode < 0)
			stream->mMode.file_orientation = __char_oriented;

		return mode;

	case __wide_oriented:
		return 1;

	case __char_oriented:
		return -1;
	}
}
