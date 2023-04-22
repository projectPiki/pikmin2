#include "types.h"

#ifndef _MSL_WIDE_CHAR
#define _MSL_WIDE_CHAR
#endif

#include "PowerPC_EABI_Support/MSL_C/MSL_Common/ansi_files.h"

/*
 * --INFO--
 * Address:	........
 * Size:	0000C8
 */
void putwc(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000CC
 */
void putwchar(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000C8
 */
void fputwc(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000C4
 */
void getwc(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000CC
 */
void getwchar(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000C4
 */
void fgetwc(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000154
 */
void ungetwc(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000110
 */
void fputws(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000150
 */
void fgetws(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800CC258
 * Size:	000088
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
