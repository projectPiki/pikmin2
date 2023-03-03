#include "JSystem/JUtility/TColor.h"
#include "types.h"
#include "JSystem/JUtility/JUTFont.h"

/*
 * --INFO--
 * Address:	8002D144
 * Size:	00002C
 * Matches
 */
JUTFont::JUTFont() { mIsValid = false; }

/*
 * --INFO--
 * Address:	8002D170
 * Size:	00004C
 * Matches
 */
void JUTFont::initialize_state()
{
	setCharColor(JUtility::TColor());
	mIsFixed    = false;
	mFixedWidth = 0;
	mIsValid    = false;
}

/*
 * --INFO--
 * Address:	8002D1BC
 * Size:	000054
 * Matches
 */
void JUTFont::setCharColor(JUtility::TColor color)
{
	mColor1 = color;
	mColor2 = color;
	mColor3 = color;
	mColor4 = color;
}

/*
 * --INFO--
 * Address:	8002D210
 * Size:	000064
 * Matches
 */
void JUTFont::setGradColor(JUtility::TColor color, JUtility::TColor color2)
{
	mColor1 = color;
	mColor2 = color;
	mColor3 = color2;
	mColor4 = color2;
}

/*
 * --INFO--
 * Address:	8002D274
 * Size:	000118
 * Matches
 */
f32 JUTFont::drawString_size_scale(f32 w, f32 x, f32 y, f32 z, const char* str, u32 u, bool flag)
{
	int str_int;
	f32 w_old = w;

	for (; u != 0; u--, str++) {
		u8 temp = str[0];
		str_int = temp;
		if (isLeadByte(str_int)) {
			u--;
			u8 byte_char = *(++str);
			str_int      = str_int << 8; // moves high byte to low byte
			str_int |= byte_char;
		}
		w += (drawChar_scale(w, x, y, z, str_int, flag));
		flag = true;
	}
	return w - w_old;
}
