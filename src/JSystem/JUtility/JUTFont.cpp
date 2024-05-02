#include "JSystem/JUtility/TColor.h"
#include "types.h"
#include "JSystem/JUtility/JUTFont.h"

/**
 * @note Address: 0x8002D144
 * @note Size: 0x2C
 * Matches
 */
JUTFont::JUTFont() { mIsValid = false; }

/**
 * @note Address: 0x8002D170
 * @note Size: 0x4C
 * Matches
 */
void JUTFont::initialize_state()
{
	setCharColor(JUtility::TColor());
	mIsFixed    = false;
	mFixedWidth = 0;
	mIsValid    = false;
}

/**
 * @note Address: 0x8002D1BC
 * @note Size: 0x54
 * Matches
 */
void JUTFont::setCharColor(JUtility::TColor color)
{
	mColor1 = color;
	mColor2 = color;
	mColor3 = color;
	mColor4 = color;
}

/**
 * @note Address: 0x8002D210
 * @note Size: 0x64
 * Matches
 */
void JUTFont::setGradColor(JUtility::TColor bottomColor, JUtility::TColor topColor)
{
	mColor1 = bottomColor;
	mColor2 = bottomColor;
	mColor3 = topColor;
	mColor4 = topColor;
}

/**
 * @note Address: 0x8002D274
 * @note Size: 0x118
 * Matches
 */
f32 JUTFont::drawString_size_scale(f32 posX, f32 posY, f32 scaleX, f32 scaleY, const char* string, u32 length, bool unused)
{
	int currentChar;
	f32 initialWidth = posX;

	for (; length != 0; length--, string++) {
		u8 temp     = string[0];
		currentChar = temp;

		if (isLeadByte(currentChar)) {
			length--;
			u8 nextChar = *(++string);
			currentChar = currentChar << 8; // moves high byte to low byte
			currentChar |= nextChar;
		}

		posX += (drawChar_scale(posX, posY, scaleX, scaleY, currentChar, unused));
		unused = true;
	}
	return posX - initialWidth;
}
