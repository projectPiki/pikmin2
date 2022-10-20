#include "types.h"

#ifndef _MSL_WIDE_CHAR
#define _MSL_WIDE_CHAR
#endif

#include "Dolphin/ansi_files.h"

/*
 * --INFO--
 * Address:	800CC258
 * Size:	000088
 */
int fwide(FILE* stream, int mode)
{
	int orientation;

	if (stream == nullptr || stream->m_mode.file_kind == __closed_file)
		return 0;

	orientation = stream->m_mode.file_orientation;
	switch (orientation) {
	case __unoriented:
		if (mode > 0)
			stream->m_mode.file_orientation = __wide_oriented;
		else if (mode < 0)
			stream->m_mode.file_orientation = __char_oriented;

		return mode;

	case __wide_oriented:
		return 1;

	case __char_oriented:
		return -1;
	}
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
 * Size:	000154
 */
void ungetwc(void)
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
void getwc(void)
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
void putwc(void)
{
	// UNUSED FUNCTION
}
