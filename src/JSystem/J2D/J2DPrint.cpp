#include "JSystem/J2D/J2DPrint.h"
#include "JSystem/JKernel/JKRHeap.h"
#include "PowerPC_EABI_Support\MSL_C\MSL_Common\strtold.h"
#include "PowerPC_EABI_Support\MSL_C\MSL_Common\strtoul.h"
#include "Dolphin/stl.h"

const u8* J2DPrint::mStrBuff;
bool J2DPrint::mHeapFlag;
size_t J2DPrint::mStrBuffSize;
bool J2DPrint::mBufferNotEnough;

/**
 * @note Address: 0x8003D750
 * @note Size: 0x94
 */
J2DPrint::J2DPrint(JUTFont* font, f32 width)
{
	private_initiate(font, width, 0.0f, TCOLOR_WHITE_U32, TCOLOR_WHITE_U32, TCOLOR_BLACK_U32, TCOLOR_WHITE_U32, true);
}

/**
 * @note Address: 0x8003D7E4
 * @note Size: 0x98
 */
J2DPrint::J2DPrint(JUTFont* font, JUtility::TColor charColor, JUtility::TColor gradColor)
{
	private_initiate(font, 0.0f, 0.0f, charColor, gradColor, TCOLOR_BLACK_U32, TCOLOR_WHITE_U32, true);
}

/**
 * @note Address: 0x8003D87C
 * @note Size: 0x94
 */
J2DPrint::J2DPrint(JUTFont* font, f32 width, f32 height, JUtility::TColor charColor, JUtility::TColor gradColor,
                   JUtility::TColor blackColor, JUtility::TColor whiteColor)
{
	private_initiate(font, width, height, charColor, gradColor, blackColor, whiteColor, false);
}

/**
 * @note Address: 0x8003D910
 * @note Size: 0x48
 */
J2DPrint::~J2DPrint() { }

/**
 * @note Address: 0x8003D958
 * @note Size: 0x54
 */
void J2DPrint::initiate()
{
	if (mFont) {
		mFont->setGX(mColorBlack, mColorWhite);
	}
}

/**
 * @note Address: 0x8003D9AC
 * @note Size: 0x1E8
 */
void J2DPrint::private_initiate(JUTFont* font, f32 width, f32 height, JUtility::TColor charColor, JUtility::TColor gradColor,
                                JUtility::TColor whiteColor, JUtility::TColor blackColor, bool doUseFontHeight)
{
	if (!mStrBuff) {
		setBuffer(0x400);
	}
	mFont       = font;
	mFontScaleX = width;
	mFontScaleY = 32.0f;
	if (mFont) {
		mFontScaleY = (!doUseFontHeight) ? height : mFont->getLeading();
	}
	mIsGradient = true;
	locate(0.0f, 0.0f);

	mCharColor     = (charColor);
	mGradientColor = (gradColor);
	mColorBlack    = (whiteColor);
	mColorWhite    = (blackColor);

	if (!mFont) {
		mFontWidth = 80;
	} else {
		mFontWidth = mFont->getWidth() * 4;
	}

	if (mFont) {
		setFontSize();
		mFont->setGX(mColorBlack, mColorWhite);
	}

	initchar();
}

/**
 * @note Address: 0x8003DB94
 * @note Size: 0x44
 */
JUTFont* J2DPrint::setFont(JUTFont* font)
{
	JUTFont* old = mFont;
	if (font) {
		mFont = font;
	}

	if (!old) {
		setFontSize();
	}
	return old;
}

/**
 * @note Address: 0x8003DBD8
 * @note Size: 0x6C
 */
const u8* J2DPrint::setBuffer(u32 size)
{
	const u8* buffer = mStrBuff;
	if (mHeapFlag) {
		delete mStrBuff;
	}
	mStrBuff     = new (JKRGetSystemHeap(), 0) u8[size];
	mStrBuffSize = size;
	mHeapFlag    = true;
	return buffer;
}

/**
 * @note Address: 0x8003DC44
 * @note Size: 0x98
 */
void J2DPrint::setFontSize()
{
	if (mFont) {
		mGlyphWidth  = mFont->getCellWidth();
		mGlyphHeight = mFont->getCellHeight();
	}
}

/**
 * @note Address: 0x8003DCDC
 * @note Size: 0x1C
 */
void J2DPrint::locate(f32 x, f32 y)
{
	mPositionX = x;
	mPositionY = y;
	mCursorX   = x;
	mCursorY   = y;
	mRotation  = 0.0f;
}

/**
 * @note Address: 0x8003DCF8
 * @note Size: 0x114
 */
f32 J2DPrint::print(f32 x, f32 y, const char* format, ...)
{
	locate(x, y);

	va_list args;
	va_start(args, format);
	TSize size;

	initchar();
	int len = vsnprintf((char*)mStrBuff, mStrBuffSize, format, args);
	if (len < 0) {
		return 0.0f;
	} else {
		if (len >= mStrBuffSize) {
			len              = mStrBuffSize - 1;
			mBufferNotEnough = true;
		}
		parse(mStrBuff, len, 0x7fffffff, nullptr, size, 255, true);
	}
	return size.mWidth;
}

/**
 * @note Address: 0x8003DE0C
 * @note Size: 0x120
 */
f32 J2DPrint::print(f32 x, f32 y, u8 alpha, const char* format, ...)
{
	locate(x, y);

	va_list args;
	va_start(args, format);
	TSize size;

	initchar();
	int len = vsnprintf((char*)mStrBuff, mStrBuffSize, format, args);
	if (len < 0) {
		return 0.0f;
	} else {
		if (len >= mStrBuffSize) {
			len              = mStrBuffSize - 1;
			mBufferNotEnough = true;
		}
		parse(mStrBuff, len, 0x7fffffff, nullptr, size, alpha, true);
	}
	return size.mWidth;
}

/**
 * @note Address: 0x8003DF2C
 * @note Size: 0xEC
 */
f32 J2DPrint::getWidth(const char* format, ...)
{
	initchar();
	va_list args;
	va_start(args, format);
	TSize size;

	int len = vsnprintf((char*)mStrBuff, mStrBuffSize, format, args);
	if (len < 0 || len > mStrBuffSize) {
		len = mStrBuffSize;
	}
	parse(mStrBuff, len, 0x7fffffff, nullptr, size, 255, false);
	return size.mWidth;
}

/**
 * @note Address: 0x8003E018
 * @note Size: 0x31C
 */
void J2DPrint::printReturn(const char* str, f32 x, f32 y, J2DTextBoxHBinding hbind, J2DTextBoxVBinding vbind, f32 x2, f32 y2, u8 alpha)
{
	if (!mFont) {
		return;
	}

	initchar();
	mPositionX = mCursorX;
	mPositionY = mCursorY;
	u32 len    = strlen(str);
	if (len >= mStrBuffSize) {
		len              = mStrBuffSize - 1;
		mBufferNotEnough = true;
	}
	u16 buffer[260]; // needs to be more than 256
	TSize size;
	f32 a2     = parse((const u8*)str, len, (int)x, buffer, size, alpha, false);
	f32 height = mFont->getAscent() * (mGlyphHeight / mFont->getCellHeight());
	f32 sum    = a2 + height;

	switch (vbind) {
	case J2DVBIND_Top:
		break;
	case J2DVBIND_Bottom:
		y2 += (int)((y - sum) - 0.5f);
		break;
	case J2DVBIND_Center:
		y2 += (int)(((y - sum) - 0.5f)) / 2;
		break;
	default:
		break;
	}
	for (int i = 0; buffer[i] != 0xFFFF; i++) {
		switch (hbind) {
		case J2DHBIND_Left:
			buffer[i] = 0;
			break;
		case J2DHBIND_Right:
			buffer[i] = int(x - buffer[i]);
			break;
		case J2DHBIND_Center:
			buffer[i] = (x - buffer[i]) / 2;
			break;
		}
	}
	initchar();
	mCursorX += x2;
	mCursorY += y2 + height;
	mPositionX = mCursorX;
	mPositionY = mCursorY;
	parse((const u8*)str, len, x, buffer, size, alpha, true);
}

/**
 * @note Address: 0x8003E334
 * @note Size: 0x7BC
 */
f32 J2DPrint::parse(const u8* str, int length, int x, u16* buffer, J2DPrint::TSize& size, u8 alpha, bool param_7)
{
	if (!mFont) {
		return 0.0f;
	}

	const u8* inputStr = str;
	u16 bufferPos      = 0;

	f32 cursorX  = mCursorX;
	f32 cursorY  = mCursorY;
	f32 f31      = mCursorX;
	f32 local_a8 = mCursorY;
	int currChar = *(str++);
	f32 f29      = mCursorX;

	f32 local_ac = mCursorX;
	f32 local_b0 = mCursorY;
	f32 local_b4 = mCursorY;

	JUtility::TColor activeCharColor = mActiveCharColor;
	JUtility::TColor activeGradColor = mActiveGradColor;

	f32 local_c0;
	activeCharColor.a = activeCharColor.a * alpha / 255;
	activeGradColor.a = activeGradColor.a * alpha / 255;
	JUtility::TColor* topColor;
	if (mActiveIsGradient) {
		topColor = &activeGradColor;
	} else {
		topColor = &activeCharColor;
	}
	mFont->setGradColor(activeCharColor, *topColor);
	bool isLead;
	bool r25;
	do {
		isLead = false;
		if (mFont->isLeadByte(currChar)) {
			currChar = (currChar << 8) | (*(str++));
			isLead   = true;
		}

		if (currChar == 0 || ((u32)str - (u32)inputStr) > length) {
			if (!param_7 && buffer != nullptr) {
				buffer[bufferPos] = 0.5f + f31;
			}
			bufferPos++;
			break;

		} else {
			r25      = true;
			local_c0 = mCursorX;
			if (currChar < ASCII_PRINTABLE_MIN) {
				if (currChar == 0x1B) { // cancel ASCII code
					u16 escapeCode = doEscapeCode(&str, alpha);
					if (escapeCode == 'HM') {
						if (!param_7 && buffer) {
							buffer[bufferPos] = 0.5f + f31;
						}
						mCursorX = cursorX;
						mCursorY = cursorY;
						bufferPos++;
						if (bufferPos == 0x100) {
							break;
						}
						f31 = 0.0f;
					}
					if (escapeCode != 0) {
						r25 = false;
					}
				} else {
					doCtrlCode(currChar);
					r25 = false;
					if (currChar == 10) {
						if (!param_7 && buffer) {
							buffer[bufferPos] = 0.5f + f31;
						}
						bufferPos++;
						if (bufferPos == 0x100) {
							break;
						}
						f31 = 0.0f;
					}
				}

			} else if (isLead && ((u32)str - (u32)inputStr > (u32)length)) {
				if (!param_7 && buffer) {
					buffer[bufferPos] = 0.5f + f31;
				}
				bufferPos++;
				break;

			} else {
				if (mFont->isFixed()) {
					mRotation = mFont->getFixedWidth();
				} else {
					JUTFont::TWidth uStack_ec;
					mFont->getWidthEntry(currChar, &uStack_ec);
					mRotation = uStack_ec.w1;
				}

				mRotation *= mActiveGlyphWidth / mFont->getCellWidth();
				f32 fVar6    = ((mCursorX + mRotation) - mPositionX);
				fVar6        = 10000.0f * fVar6;
				f32 local_90 = ((s32)fVar6) / 10000.0f;
				if (local_90 > x && mCursorX > cursorX) {
					u32 local_e4;
					if (isLead) {
						local_e4 = 2;
					} else {
						local_e4 = 1;
					}
					str -= local_e4;
					mCursorY += mActiveScaleY;
					if (!param_7 && (buffer != nullptr)) {
						buffer[bufferPos] = 0.5f + f31;
					}
					bufferPos++;
					if (bufferPos == 0x100) {
						break;
					}
					mCursorX = mPositionX;
					f31      = 0.0f;
					r25      = false;
				} else {
					if (param_7) {
						if (buffer != nullptr) {
							mFont->drawChar_scale(mCursorX + (f32)(s16)buffer[bufferPos], mCursorY, (int)mActiveGlyphWidth,
							                      (int)mActiveGlyphHeight, currChar, true);
						} else {
							mFont->drawChar_scale(mCursorX, mCursorY, (int)mActiveGlyphWidth, (int)mActiveGlyphHeight, currChar, true);
						}
					}
					mCursorX += mRotation;
				}
			}
		}

		if (r25) {
			if (mCursorX - cursorX > f31) {
				f31 = mCursorX - cursorX;
			}
			mCursorX += mActiveScaleX;
			mRotation += mActiveScaleX;
			f32 local_cc = (mActiveGlyphHeight / mFont->getHeight()) * mFont->getDescent();
			if (local_a8 < mCursorY + local_cc) {
				local_a8 = mCursorY + local_cc;
			}
			if (mCursorX > local_ac) {
				local_ac = mCursorX;
			}
			if (mCursorX < f29) {
				f29 = mCursorX;
			}
			if (local_c0 < f29) {
				f29 = local_c0;
			}
			if (mCursorY > local_b4) {
				local_b4 = mCursorY;
			}
			if (mCursorY < local_b0) {
				local_b0 = mCursorY;
			}
		}
		currChar = *(str++);

	} while (true);

	if (buffer != nullptr) {
		buffer[bufferPos] = 0xFFFF;
	}

	size.mWidth  = local_ac - f29;
	size.mHeight = local_b4 - local_b0 + mFont->getLeading();

	if (!param_7) {
		mCursorX = cursorX;
		mCursorY = cursorY;
	}
	return local_a8 - cursorY;
}

/**
 * @note Address: 0x8003EAF0
 * @note Size: 0x128
 */
void J2DPrint::doCtrlCode(int inputChar)
{
	switch (inputChar) {
	case 8:
		mCursorX -= mRotation;
		mRotation = 0.0f;
		break;
	case 9:
		s16 width = mActiveFontWidth;
		if (width > 0) {
			f32 oldX  = mCursorX;
			mCursorX  = f32(width + width * ((int)mCursorX / width));
			mRotation = mCursorX - oldX;
		}
		break;
	case 10:
		mRotation = 0.0f;
		mCursorX  = mPositionX;
		mCursorY  = mCursorY + mActiveScaleY;
		break;
	case 13:
		mRotation = 0.0f;
		mCursorX  = mPositionX;
		break;
	case 0x1C:
		mCursorX += 1.0f;
		break;
	case 0x1D:
		mCursorX -= 1.0f;
		break;
	case 0x1E:
		mCursorY -= 1.0f;
		break;
	case 0x1F:
		mCursorY += 1.0f;
		break;
	}
}

/**
 * @note Address: 0x8003EC18
 * @note Size: 0x5A0
 */
u16 J2DPrint::doEscapeCode(const u8** strPtr, u8 alpha)
{
	const u8* inputStr = *strPtr;
	u16 code           = 0;
	u16 currChar;

	// assemble escape code byte-by-byte, checking if lead or outside printable range
	for (int i = 0; i < 2; i++) {
		if (mFont->isLeadByte(*strPtr[0])) {
			currChar = ((*strPtr)[0] << 8) | (*strPtr)[1];
			(*strPtr) += 2;
		} else {
			currChar = **strPtr;
			(*strPtr)++;
		}
		if (currChar >= ASCII_PRINTABLE_MAX || currChar < ASCII_PRINTABLE_MIN) {
			*strPtr = inputStr; // reset string
			return 0;
		}
		code = ((code) << 8) | currChar;
	}

	JUtility::TColor charColor = mActiveCharColor;
	JUtility::TColor gradColor = mActiveGradColor;
	switch (code) {
	case 'CU': // cursor up
		mCursorY -= getNumberF32(strPtr, 1.0f, 0.0f, 10);
		break;

	case 'CD': // cursor down
		mCursorY += getNumberF32(strPtr, 1.0f, 0.0f, 10);
		break;

	case 'CL': // cursor left
		mCursorX -= getNumberF32(strPtr, 1.0f, 0.0f, 10);
		break;

	case 'CR': // cursor right
		mCursorX += getNumberF32(strPtr, 1.0f, 0.0f, 10);
		break;

	case 'LU': // ?? up
		mCursorY -= mActiveScaleY;
		break;

	case 'LD': // ?? down
		mCursorY += mActiveScaleY;
		break;

	case 'ST': // ??
		s32 width = getNumberS32(strPtr, mActiveFontWidth, mActiveFontWidth, 10);
		if (width > 0) {
			mActiveFontWidth = width;
		}
		break;

	case 'CC': { // char color
		mActiveCharColor = getNumberS32(strPtr, *(u32*)&mCharColor, *(u32*)&mActiveCharColor, 16);
		charColor        = mActiveCharColor;
		charColor.a      = charColor.a * alpha / 255;
		gradColor.a      = gradColor.a * alpha / 255;
		JUtility::TColor* topColor;
		if (mActiveIsGradient) {
			topColor = &gradColor;
		} else {
			topColor = &charColor;
		}
		mFont->setGradColor(charColor, *topColor);
	} break;

	case 'GC': { // grad color
		mActiveGradColor = getNumberS32(strPtr, *(u32*)&mGradientColor, *(u32*)&mActiveGradColor, 16);
		gradColor        = mActiveGradColor;
		charColor.a      = charColor.a * alpha / 255;
		gradColor.a      = gradColor.a * alpha / 255;
		JUtility::TColor* topColor;
		if (mActiveIsGradient) {
			topColor = &gradColor;
		} else {
			topColor = &charColor;
		}
		mFont->setGradColor(charColor, *topColor);
	} break;

	case 'FX': { // float x
		f32 width = getNumberF32(strPtr, mGlyphWidth, mActiveGlyphWidth, 10);
		if (width >= 0) {

			mActiveGlyphWidth = width;
		}
	} break;

	case 'FY': // float y
		f32 height = getNumberF32(strPtr, mGlyphHeight, mActiveGlyphHeight, 10);
		if (height >= 0) {
			mActiveGlyphHeight = height;
		}
		break;

	case 'SH': // scale horizontal
		mActiveScaleX = getNumberF32(strPtr, mFontScaleX, mActiveScaleX, 10);
		break;

	case 'SV': // scale vertical
		mActiveScaleY = getNumberF32(strPtr, mFontScaleY, mActiveScaleY, 10);
		break;

	case 'GM': { // grad ??
		BOOL noGradient   = getNumberS32(strPtr, mActiveIsGradient == 0, mActiveIsGradient, 10) == 0;
		mActiveIsGradient = !noGradient;
		charColor.a       = charColor.a * alpha / 255;
		gradColor.a       = gradColor.a * alpha / 255;
		JUtility::TColor* topColor;
		if (mActiveIsGradient) {
			topColor = &gradColor;
		} else {
			topColor = &charColor;
		}
		mFont->setGradColor(charColor, *topColor);
	} break;

	case 'HM': // ??
		break;

	default:
		*strPtr = inputStr; // reset string
		code    = 0;
		break;
	}

	return code;
}

/**
 * @note Address: 0x8003F1B8
 * @note Size: 0x74
 */
void J2DPrint::initchar()
{
	mActiveCharColor = mCharColor;
	mActiveGradColor = mGradientColor;

	mActiveScaleX      = mFontScaleX;
	mActiveScaleY      = mFontScaleY;
	mActiveIsGradient  = mIsGradient;
	mActiveFontWidth   = mFontWidth;
	mActiveGlyphWidth  = mGlyphWidth;
	mActiveGlyphHeight = mGlyphHeight;
}

/**
 * @note Address: 0x8003F22C
 * @note Size: 0x114
 */
s32 J2DPrint::getNumberS32(const u8** strPtr, s32 min, s32 max, int base)
{
	const u8* inputStr = *strPtr;

	// number needs to be enclosed with []s to be valid
	if (inputStr[0] != '[') {
		return min;
	}

	(*strPtr)++;

	s32 value = 0;
	char* endStr;

	if (base == 10) { // base 10, do as signed
		value = strtol((char*)*strPtr, &endStr, base);

	} else if (base == 16) { // base 16, do as unsigned
		value = strtoul((char*)*strPtr, &endStr, base);

		if ((u32)endStr - (u32)*strPtr != 8) {
			if ((u32)endStr - (u32)*strPtr == 6) {
				value = (value << 8) | 255;
			} else {
				*strPtr = inputStr;
				return max;
			}
		}
	}

	// number needs to be enclosed with []s to be valid
	if (endStr[0] != ']') {
		*strPtr = inputStr;
		return max;
	}

	// no number found, string didn't change
	if ((char*)*strPtr == (char*)endStr) {
		*strPtr = (const u8*)endStr + 1; // advance string
		return min;
	}

	*strPtr = (const u8*)endStr + 1; // advance string past number (and brackets)
	return value;
}

/**
 * @note Address: 0x8003F340
 * @note Size: 0x134
 */
f32 J2DPrint::getNumberF32(const u8** strPtr, f32 min, f32 max, int base)
{
	const u8* inputStr = *strPtr;

	// number needs to be enclosed with []s to be valid
	if (inputStr[0] != '[') {
		return min;
	}

	(*strPtr)++;

	s32 value = 0;
	char* endStr;

	if (base == 10) { // base 10, do as signed
		value = strtol((char*)*strPtr, &endStr, base);

	} else if (base == 16) { // base 16, do as unsigned
		value = strtoul((char*)*strPtr, &endStr, base);

		if ((u32)endStr - (u32)*strPtr != 8) {
			if ((u32)endStr - (u32)*strPtr == 6) {
				value = (value << 8) | 255;
			} else {
				*strPtr = inputStr;
				return max;
			}
		}
	}

	// number needs to be enclosed with []s to be valid
	if (endStr[0] != ']') {
		*strPtr = inputStr;
		return max;
	}

	// no number found, string didn't change
	if ((char*)*strPtr == (char*)endStr) {
		*strPtr = (const u8*)endStr + 1; // advance string
		return min;
	}

	*strPtr = (const u8*)endStr + 1; // advance string past number (and brackets)
	return value;
}
