#include "types.h"
#include "stream.h"
#include "string.h"

/**
 * Checks if the given character is a whitespace character.
 *
 * @note Also checks if the character is a comment or scope character. (i.e. '#', '{', '}')
 * @param currByte The character to check.
 * @return True if the character is a whitespace character, false otherwise.
 *
 * @note Address: N/A
 * @note Size: 0x48
 */
bool Stream::isSpace(char currByte)
{
	return ((currByte == '\r') || (currByte == ' ') || (currByte == '\n') || (currByte == '\t') || (currByte == '#') || (currByte == '{')
	        || (currByte == '}'));
}

/**
 * Skips any leading whitespace characters in the stream and returns the first non-whitespace character encountered.
 *
 * @return The first non-whitespace character encountered, or 0 if not text mode / EOF.
 *
 * @note Address: N/A
 * @note Size: 0xEC
 */
char Stream::skipSpace()
{
	bool isComment = false;
	mBufferPos     = 0;

	// Spaces only occur in text mode
	if (mMode == STREAM_MODE_TEXT) {
		while (!eof()) {
			char currentChar = _readByte();

			// If inside a comment, skip until a new line is encountered
			if (isComment) {
				if (currentChar == '\r' || currentChar == '\n') {
					isComment = false;
				}

				continue;
			}

			// The start of a comment is indicated by a '#'
			if (currentChar == '#') {
				isComment = true;
				continue;
			}

			// If the byte is not a space, return it
			if (!isSpace(currentChar)) {
				return currentChar;
			}
		}
	}

	return 0;
}

/**
 * @note Address: 0x80413DEC
 * @note Size: 0x8
 */
bool Stream::eof() { return false; }

/**
 * Copies the contents of the stream to the text buffer.
 *
 * This function reads bytes from the stream and copies them to the text buffer until it encounters a space character.
 * If the space character is a '#' character, it treats the remaining bytes as a comment and stops copying.
 *
 * @note This function assumes that the text buffer has enough space to hold the copied bytes.
 *
 * @note Address: N/A
 * @note Size: 0x214
 */
inline void Stream::copyToTextBuffer()
{
	char nextByte;

	// Skip any leading whitespace
	mBuffer[mBufferPos++] = skipSpace();
	while (!eof()) {
		nextByte = _readByte();

		// If the next byte is a space, check if comment and null terminate the buffer
		if (isSpace(nextByte)) {
			mBuffer[mBufferPos++] = 0;

			if (nextByte == '#') {
				while (!eof()) {
					nextByte = _readByte();
					if ((nextByte != '\r') && (nextByte != '\n')) {
						continue;
					} else {
						return;
					}
				}
				return;
			}
			return;
		} else {
			// If the next byte is not a space, add it to the buffer
			mBuffer[mBufferPos++] = nextByte;

			if (!nextByte) {
				return;
			}
		}
	}

	JUT_PANICLINE(98, "Reached EOF\n");
}

/**
 * @note Address: 0x80413DF4
 * @note Size: 0x228
 */
char* Stream::getNextToken()
{
	if (mMode == STREAM_MODE_BINARY) {
		// No tokenizing in binary mode
		return nullptr;
	} else {
		copyToTextBuffer();
		return mBuffer;
	}
}

/**
 * @note Address: 0x8041401C
 * @note Size: 0x84
 */
void Stream::textBeginGroup(char* groupName)
{
	if (mMode != STREAM_MODE_BINARY) {
		textWriteTab(mTabCount);
		textWriteText("# %s\r\n", groupName);
		textWriteTab(mTabCount);
		textWriteText("{\r\n");
		mTabCount++;
	}
}

/**
 * @note Address: 0x804140A0
 * @note Size: 0x58
 */
void Stream::textEndGroup()
{
	if (mMode != STREAM_MODE_BINARY) {
		mTabCount--;
		textWriteTab(mTabCount);
		textWriteText("}\r\n");
	}
}

/**
 * Prints formatted text to the stream.
 *
 * This function takes a format string and a variable number of arguments, similar to the standard
 * C library function `printf`. The formatted text is written to the stream.
 *
 * @param format The format string specifying the text to be printed.
 * @param ... The variable arguments to be formatted and printed.
 *
 * @note Address: 0x804140F8
 * @note Size: 0xE4
 */
void Stream::printf(char* format, ...)
{
	char tempText[0x400];
	va_list args;

	va_start(args, format);
	vsprintf(tempText, format, args);

	int len = strlen(tempText);
	if (len > 0) {
		char* textPtr = tempText;

		for (int i = 0; i < len; i++) {
			_writeByte(*textPtr);
			textPtr++;
		}
	}
}

/**
 * Writes formatted text to the stream.
 *
 * This function writes formatted text to the stream using the specified format string and variable arguments.
 * The format string is similar to the one used in the standard C library's `printf` function.
 *
 * @param format The format string specifying the text to be written.
 * @param ... The variable arguments to be formatted and written to the stream.
 *
 * @remarks This function only writes text to the stream if the stream mode is not set to `STREAM_MODE_BINARY`.
 *          If the stream mode is `STREAM_MODE_BINARY`, this function does nothing.
 *
 * @note Address: 0x804141DC
 * @note Size: 0xEC
 */
void Stream::textWriteText(char* format, ...)
{
	char tempText[0x400];
	va_list args;

	if (mMode == STREAM_MODE_BINARY) {
		return;
	}

	va_start(args, format);
	vsprintf(tempText, format, args);

	int len = strlen(tempText);
	if (len > 0) {
		char* textPtr = tempText;

		for (int i = 0; i < len; i++) {
			_writeByte(*textPtr);
			textPtr++;
		}
	}
}

/**
 * Skips reading a specified number of bytes from the stream.
 *
 * @param len The number of bytes to skip.
 *
 * @note Address: 0x804142C8
 * @note Size: 0xC4
 */
void Stream::skipReading(u32 len)
{
	if (mMode == STREAM_MODE_TEXT) {
		while (!eof()) {
			s8 currByte = _readByte();

			// If it isn't whitespace, continue
			if (currByte != '\r' && currByte != '\n') {
				continue;
			}

			// If it is whitespace, return (skipped text)
			return;
		}
	} else {
		for (int i = 0; i < len && !eof(); i++) {
			readByte();
		}
	}
}

/**
 * @brief Skips reading text or bytes from the stream based on the stream mode.
 *
 * This function handles two different modes: STREAM_MODE_TEXT and other modes.
 * In STREAM_MODE_TEXT, it reads bytes until it encounters a newline ('\n') or carriage return ('\r') character.
 * In other modes, it reads bytes until it encounters a null byte (0).
 *
 * @note Address: 0x8041438C
 * @note Size: 0xA8
 */
void Stream::skipReadingText()
{
	if (mMode == STREAM_MODE_TEXT) {
		while (!eof()) {
			s8 currByte = _readByte();

			// If it isn't whitespace, continue
			if (currByte != '\r' && currByte != '\n') {
				continue;
			}

			// If it is whitespace, return (skipped text)
			return;
		}
	} else {
		while (!eof()) {
			if (readByte() == 0) {
				break;
			}
		}
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x50
 */
void Stream::_read(void* buffer, int length)
{
	read(buffer, length);
	mPosition += length;
}

/**
 * @note Address: N/A
 * @note Size: 0x50
 */
void Stream::_write(void* buffer, int length)
{
	write(buffer, length);
	mPosition += length;
}

/**
 * @note Address: 0x80414434
 * @note Size: 0x68
 */
void Stream::textWriteTab(int tabCount)
{
	if (mMode == 1) {
		for (int i = 0; i < tabCount; i++) {
			_writeByte('\t');
		}
	}
}

/**
 * @note Address: 0x8041449C
 * @note Size: 0x278
 */
u8 Stream::readByte()
{
	int scanOut;

	if (mMode == STREAM_MODE_TEXT) {

		char* nextToken = getNextToken();
		if (!nextToken) {
			JUT_PANICLINE(260, "readByte:Token Error\n");
		}

		sscanf(nextToken, "%d", &scanOut);
		return (u8)scanOut;
	}

	return _readByte();
}

/**
 * @note Address: 0x80414714
 * @note Size: 0x50
 */
u8 Stream::_readByte()
{
	u8 currByte;
	_read(&currByte, 1);
	return currByte;
}

/**
 * @note Address: 0x80414764
 * @note Size: 0x32C
 */
short Stream::readShort()
{
	u16 outVal;

	if (mMode == STREAM_MODE_TEXT) {
		char* nextToken = getNextToken();
		if (!nextToken) {
			JUT_PANICLINE(284, "readShort:Token Error\n");
		}

		int scanOut;
		sscanf(nextToken, "%d", &scanOut);

		outVal = scanOut;
		return outVal;
	}

	_read(&outVal, sizeof(short));

	if (differentEndian()) {
		outVal = ((outVal << 8) & 0xFF00 | (outVal >> 8) & 0xFF);
	}

	return outVal;
}

/**
 * @note Address: 0x80414A90
 * @note Size: 0x31C
 */
int Stream::readInt()
{
	int outVal;

	if (mMode == STREAM_MODE_TEXT) {
		char* nextToken = getNextToken();
		if (!nextToken) {
			JUT_PANICLINE(306, "readInt:Token Error\n");
		}

		sscanf(nextToken, "%d", &outVal);
		return outVal;
	}

	_read(&outVal, sizeof(int));

	if (differentEndian()) {
		int byte1 = ((u32)outVal >> 24) & 0x000000FF;
		int byte2 = ((u32)outVal >> 8) & 0x0000FF00;
		int byte3 = ((u32)outVal << 8) & 0x00FF0000;
		int byte4 = ((u32)outVal << 24) & 0xFF000000;

		outVal = (byte4 | byte3 | byte2 | byte1);
	}

	return outVal;
}

/**
 * @note Address: 0x80414DAC
 * @note Size: 0x328
 */
f32 Stream::readFloat()
{
	f32 outFloat;
	int outInt;

	if (mMode == STREAM_MODE_TEXT) {
		char* nextToken = getNextToken();
		if (!nextToken) {
			JUT_PANICLINE(324, "readFloat:Token Error\n");
		}

		sscanf(nextToken, "%f", &outFloat);
		return outFloat;
	}

	_read(&outFloat, sizeof(float));

	if (differentEndian()) {
		int outInt = *(u32*)&outFloat;
		int byte1  = ((u32)outInt >> 24) & 0x000000FF;
		int byte2  = ((u32)outInt >> 8) & 0x0000FF00;
		int byte3  = ((u32)outInt << 8) & 0x00FF0000;
		int byte4  = ((u32)outInt << 24) & 0xFF000000;

		outInt   = (byte4 | byte3 | byte2 | byte1);
		outFloat = *(f32*)&outInt;
	}

	return outFloat;
}

/**
 * @note Address: 0x804150D4
 * @note Size: 0x4F8
 */
char* Stream::readString(char* str, int strLength)
{
	char* outStr;

	if (mMode == STREAM_MODE_TEXT) {
		char* nextToken = getNextToken();
		int strSize     = strlen(nextToken);

		if (str) {
			P2ASSERTLINE(352, strLength >= strSize);
			outStr = str;
		} else {
			outStr = new char[strSize + 1];
		}

		for (int readLen = 0; readLen < strSize + 1; readLen++) {
			outStr[readLen] = nextToken[readLen];
		}

		return outStr;
	} else /* Binary mode */ {
		char tokenStore[0x400];
		int readLen = 0;
		for (int i = 0; i < 0x400 || !eof(); i++) {
			tokenStore[i] = _readByte();
			if (tokenStore[i] == '\0') {
				break;
			}

			readLen++;
		}

		if (str) {
			P2ASSERTLINE(372, strLength >= readLen);
			outStr = str;
		} else {
			outStr = new char[readLen + 1];
		}

		int i           = 0;
		char* outStrPtr = outStr;
		for (i; i < readLen; i++) {
			*outStrPtr = tokenStore[i];
			outStrPtr++;
		}
		outStrPtr[0] = '\0';
	}

	return outStr;
}

/**
 * @note Address: N/A
 * @note Size: 0x64C
 */
const char UNUSED_readFixedString[] = "can not use readFixedString in text mode\n";
// void Stream::readFixedString()
// {
//
// }

/**
 * @note Address: 0x804155CC
 * @note Size: 0xA4
 */
void Stream::writeString(char* inputStr)
{
	int len = strlen(inputStr);
	for (int i = 0; i < len; i++) {
		_writeByte(inputStr[i]);
	}

	if (mMode == STREAM_MODE_TEXT) {
		printf(" ");
	} else {
		_writeByte('\0');
	}
}

/**
 * @note Address: N/A
 * @note Size: 0xBC
 */
const char UNUSED_writeFixedString[] = "can not use writeFixedString in text mode\n";
// void Stream::writeFixedString(char*)
// {
// 	// UNUSED FUNCTION
// }

/**
 * @note Address: 0x80415670
 * @note Size: 0x70
 */
void Stream::writeByte(u8 c)
{
	if (mMode == STREAM_MODE_TEXT) {
		printf("%d ", c);
	} else {
		_write(&c, sizeof(u8));
	}
}

/**
 * @note Address: 0x804156E0
 * @note Size: 0x50
 */
void Stream::_writeByte(u8 c)
{
	u8 buffer = c;
	_write(&buffer, sizeof(u8));
}

/**
 * @note Address: 0x80415730
 * @note Size: 0x90
 */
void Stream::writeShort(s16 inputShort)
{
	s16 outVal = inputShort;

	if (mMode == STREAM_MODE_TEXT) {
		printf("%d ", inputShort);
	} else {
		if (differentEndian()) {
			outVal = bswap16((s16)inputShort);
		}

		_write(&outVal, sizeof(s16));
	}
}

/**
 * @note Address: 0x804157C0
 * @note Size: 0x88
 */
void Stream::writeInt(int inputInt)
{
	int outVal = inputInt;

	if (mMode == STREAM_MODE_TEXT) {
		printf("%d ", inputInt);
	} else {
		if (differentEndian()) {
			int byte1 = ((u32)inputInt >> 24) & 0xFF;
			int byte2 = ((u32)inputInt >> 8) & 0xFF00;
			int byte3 = ((u32)inputInt << 8) & 0xFF0000;
			int byte4 = ((u32)inputInt << 24) & 0xFF000000;
			outVal    = (byte4 | byte3 | byte2 | byte1);
		}

		_write(&outVal, sizeof(int));
	}
}

/**
 * @note Address: 0x80415848
 * @note Size: 0xB0
 */
void Stream::writeFloat(f32 inputFloat)
{
	if (mMode == STREAM_MODE_TEXT) {
		printf("%f ", inputFloat);
	} else {
		if (differentEndian()) {
			u32 data   = *(u32*)&inputFloat;
			int byte1  = (data >> 24) & 0x000000FF;
			int byte2  = (data >> 8) & 0x0000FF00;
			int byte3  = (data << 8) & 0x00FF0000;
			int byte4  = (data << 24) & 0xFF000000;
			int intVal = (byte4 | byte3 | byte2 | byte1);

			_write(&intVal, sizeof(float));
			return;
		}

		_write(&inputFloat, sizeof(float));
	}
}

/**
 * @note Address: 0x804158F8
 * @note Size: 0x50
 */
RamStream::RamStream(void* RamBufferPtr, int bounds)
{
	mRamBufferStart = RamBufferPtr;
	mBounds         = bounds;
	mPosition       = 0;
}

/**
 * @note Address: N/A
 * @note Size: 0x14
 */
// void RamStream::set(u8*, int)
// {
// 	// UNUSED FUNCTION
// }

/**
 * @note Address: 0x80415948
 * @note Size: 0x94
 */
void RamStream::read(void* destMem, int numBytes)
{
	if (eof()) {
		JUT_PANICLINE(523, "RamStream::read out of bounds (pos=%d,bound=%d)\n", mPosition, mBounds);
	}

	memcpy(destMem, ((u8*)mRamBufferStart) + mPosition, numBytes);
}

/**
 * @note Address: 0x804159DC
 * @note Size: 0x94
 */

void RamStream::write(void* srcMem, int numBytes)
{
	if (eof()) {
		JUT_PANICLINE(534, "RamStream::write out of bounds (pos=%d,bound=%d)\n", mPosition, mBounds);
	}

	memcpy(((u8*)mRamBufferStart) + mPosition, srcMem, numBytes);
}

/**
 * @note Address: 0x80415A70
 * @note Size: 0x2C
 */
bool RamStream::eof()
{
	if (mBounds != -1) {
		return (mBounds <= mPosition);
	}

	return 0;
}

/**
 * @note Address: 0x80415A9C
 * @note Size: 0x8
 */
u32 Stream::getPending() { return 0; }
