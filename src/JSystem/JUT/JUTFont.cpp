#include "JSystem/JUtility.h"
#include "types.h"
#include "JSystem/JUT/JUTFont.h"

/*
    Generated from dpostproc

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__7JUTFont
    __vt__7JUTFont:
        .4byte 0
        .4byte 0
        .4byte __dt__7JUTFontFv
        .4byte 0
        .4byte setGX__7JUTFontFQ28JUtility6TColorQ28JUtility6TColor
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte getCellWidth__7JUTFontCFv
        .4byte getCellHeight__7JUTFontCFv
        .4byte 0
        .4byte 0
        .4byte 0
*/

/*
 * --INFO--
 * Address:	8002D144
 * Size:	00002C
 * Matches
 */
JUTFont::JUTFont()
    : _0C()
    , _10()
    , _14()
    , _18()
{
	_04 = 0;
}

/*
 * --INFO--
 * Address:	8002D170
 * Size:	00004C
 * Matches
 */
void JUTFont::initialize_state()
{
	setCharColor(JUtility::TColor());
	_05 = 0;
	_08 = 0;
	_04 = 0;
}

/*
 * --INFO--
 * Address:	8002D1BC
 * Size:	000054
 * Matches
 */
void JUTFont::setCharColor(JUtility::TColor color)
{
	_0C.channels.r = color.channels.r;
	_0C.channels.g = color.channels.g;
	_0C.channels.b = color.channels.b;
	_0C.channels.a = color.channels.a;

	_10.channels.r = color.channels.r;
	_10.channels.g = color.channels.g;
	_10.channels.b = color.channels.b;
	_10.channels.a = color.channels.a;

	_14.channels.r = color.channels.r;
	_14.channels.g = color.channels.g;
	_14.channels.b = color.channels.b;
	_14.channels.a = color.channels.a;

	_18.channels.r = color.channels.r;
	_18.channels.g = color.channels.g;
	_18.channels.b = color.channels.b;
	_18.channels.a = color.channels.a;
}

/*
 * --INFO--
 * Address:	8002D210
 * Size:	000064
 * Matches
 */
void JUTFont::setGradColor(JUtility::TColor color, JUtility::TColor color2)
{
	_0C.channels.r = color.channels.r;
	_0C.channels.g = color.channels.g;
	_0C.channels.b = color.channels.b;
	_0C.channels.a = color.channels.a;

	_10.channels.r = color.channels.r;
	_10.channels.g = color.channels.g;
	_10.channels.b = color.channels.b;
	_10.channels.a = color.channels.a;

	_14.channels.r = color2.channels.r;
	_14.channels.g = color2.channels.g;
	_14.channels.b = color2.channels.b;
	_14.channels.a = color2.channels.a;

	_18.channels.r = color2.channels.r;
	_18.channels.g = color2.channels.g;
	_18.channels.b = color2.channels.b;
	_18.channels.a = color2.channels.a;
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

/*
 * --INFO--
 * Address:	8002D38C
 * Size:	000048
 * JUTFont::~JUTFont()
 * Weak function.
 */

/*
 * --INFO--
 * Address:	8002D3D4
 * Size:	00002C
 * void JUTFont::setGX(JUtility::TColor, JUtility::TColor)
 * Weak function.
 */

/*
 * --INFO--
 * Address:	8002D400
 * Size:	00002C
 * u16 JUTFont::getCellWidth() const
 * Weak function.
 */

/*
 * --INFO--
 * Address:	8002D42C
 * Size:	00002C
 * u16 JUTFont::getCellHeight() const
 * Weak function.
 */
