#include "types.h"
#include "Dolphin/wchar_io.h"

/*
 * --INFO--
 * Address:	800CC258
 * Size:	000088
 */
int fwide(FILE* stream, int mode)
{
	int orientation;
	int result;
    
	if (stream == nullptr)
		goto early_exit;
	if (stream->mode.file_kind == __closed_file)
	early_exit:
		return 0;
	orientation = stream->mode.file_orientation;
	switch (orientation)
	{
		case __unoriented:
			if (mode > 0)
				stream->mode.file_orientation = __wide_oriented;
			else if (mode < 0)
				stream->mode.file_orientation = __char_oriented;
			result = mode;
			break;
			
		case __wide_oriented:
			result = 1;
			break;
			
		case __char_oriented:
			result = -1;
			break;
	}
	return result;
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
