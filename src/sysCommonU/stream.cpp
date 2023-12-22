#include "types.h"
#include "stream.h"
#include "string.h"

/**
 * @note Address: N/A
 * @note Size: 0x48
 */
bool Stream::isSpace(char currByte)
{
	// check if current byte is whitespace/newline/hash/brackets
	return ((currByte == '\r') || (currByte == ' ') || (currByte == '\n') || (currByte == '\t') || (currByte == '#') || (currByte == '{')
	        || (currByte == '}'));
}

/**
 * @note Address: N/A
 * @note Size: 0xEC
 */
// INLINE
char Stream::skipSpace()
{
	// return next byte that isn't a 'space' or a comment
	// if in binary mode (or end of file), return 0
	char byte;
	bool isComment = false;

	mBufferPos = 0;
	if (mMode == STREAM_MODE_TEXT) {
		// check we're not at the end of the file
		while (!eof()) {
			char byte = _readByte(); // at 0x8
			// if we're in a comment line, skip until we hit a new line
			if (isComment) {
				if (byte == '\r' || byte == '\n') {
					isComment = 0;
				}
				continue;
			}
			// flag if we're starting a comment line
			if (byte == '#') {
				isComment = true;
				continue;
			}
			// so long as we don't hit newline/whitespace/hash/{ or }, we have a token!
			if (!isSpace(byte)) {
				return byte;
			}
		}
	}
	// if we reach eof or are in binary mode, return a 0
	return 0;
}

/**
 * @note Address: 0x80413DEC
 * @note Size: 0x8
 */
bool Stream::eof() { return false; }

/**
 * @note Address: N/A
 * @note Size: 0x214
 */
// INLINE
inline void Stream::copyToTextBuffer()
{
	// copy next token (not starting with a 'space', not in a comment) to buffer
	// panic if we hit eof
	char nextByte;

	mBuffer[mBufferPos++] = skipSpace();
	while (!eof()) {
		nextByte = _readByte(); // at 0xA
		// if we hit a newline, whitespace, hash, { or }, put 0s until we hit something else
		if (isSpace(nextByte)) {
			mBuffer[mBufferPos++] = 0;
			// check if comment line
			if (nextByte == '#') {
				while (!eof()) {
					nextByte = _readByte(); // at 0x9
					if ((nextByte != '\r') && (nextByte != '\n')) {
						// skip through comment line
						continue;
					} else {
						// we hit a new line! we're free from the comment
						return;
					}
				}
				return;
			}
			return;
		} else { // we hit something else!

			mBuffer[mBufferPos++] = nextByte;

			// if we hit a 0, exit
			if (!nextByte) {
				return;
			}
		}
	}
	// if we reach eof, panic
	JUT_PANICLINE(98, "Reached EOF\n");
}

/**
 * @note Address: 0x80413DF4
 * @note Size: 0x228
 */
char* Stream::getNextToken()
{
	// if we're in text mode:
	//     - writes next (non-comment/whitespace/newline/bracket) token into buffer
	//     - returns a pointer to start of buffer
	// if we're in binary mode:
	//     - returns null pointer

	// if we're in binary mode, exit
	if (mMode == STREAM_MODE_BINARY) {
		return 0;
	}

	// check next byte(s)
	copyToTextBuffer();

	// return a pointer to beginning of buffer
	return mBuffer;
}

/**
 * @note Address: 0x8041401C
 * @note Size: 0x84
 */
void Stream::textBeginGroup(char* groupName)
{
	// if in text mode, write 'beginning' characters
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
	// if in text mode, write 'ending' characters
	if (mMode != STREAM_MODE_BINARY) {
		mTabCount--;
		textWriteTab(mTabCount);
		textWriteText("}\r\n");
	}
}

/**
 * @note Address: 0x804140F8
 * @note Size: 0xE4
 */
void Stream::printf(char* format, ...)
{
	// prints text with given format information
	// doesn't check for text or binary, prints just the same
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
 * @note Address: 0x804141DC
 * @note Size: 0xEC
 */
void Stream::textWriteText(char* format, ...)
{
	// prints text with given format information
	// only prints text - won't print binary
	char tempText[0x400];
	va_list args;

	if (mMode != STREAM_MODE_BINARY) {
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
}

// /**
//  * @note Address: N/A
//  * @note Size: 0x70
//  */
// void Stream::writePadding(u32)
// {
// 	// UNUSED FUNCTION - in stream.h header
// }

/**
 * @note Address: N/A
 * @note Size: 0x6C
 */
// void Stream::skipPadding(u32)
// {
// 	// UNUSED FUNCTION
// }

/**
 * @note Address: 0x804142C8
 * @note Size: 0xC4
 */
void Stream::skipReading(u32 len)
{
	// 'skips' whatever is being streamed byte by byte
	// need to handle differently if in text or binary mode
	// skips to next line in text mode
	// this version comes with a length 'len' for binary mode

	// check mode
	if (mMode == STREAM_MODE_TEXT) { // we're in text mode
		// 'skip' through, but need to look out for new lines
		while (!eof()) {
			s8 currByte = _readByte();
			if (currByte != '\r' && currByte != '\n') {
				continue;
			} else {
				return;
			}
		}
	} else { // we're in binary mode
		// loop through the stream up to 'len' and 'skip' it
		for (int i = 0; i < len && !eof(); i++) {
			readByte();
		}
	}
	return;
}

/**
 * @note Address: 0x8041438C
 * @note Size: 0xA8
 */
void Stream::skipReadingText()
{
	// 'skips' whatever is being streamed byte by byte
	// need to handle differently if in text or binary mode
	// skips to next line in text mode
	// this version doesn't come with a length for binary mode

	// check mode
	if (mMode == STREAM_MODE_TEXT) { // we're in text mode
		// 'skip' through, but need to look out for 0xD and 0xA markers
		while (!eof()) {
			s8 currByte = _readByte();
			if (currByte != '\r' && currByte != '\n') {
				continue;
			} else {
				return;
			}
		}
	} else { // we're in binary mode
		// we can just loop through the whole stream and 'skip' it
		// so long as readByte returns something
		while (!eof()) {
			if (!readByte()) {
				break;
			}
		}
	}
	return;
}

/**
 * @note Address: N/A
 * @note Size: 0x50
 */
// void Stream::_read(void*, int)
// {
// 	// UNUSED FUNCTION
// }

/**
 * @note Address: N/A
 * @note Size: 0x50
 */
// void Stream::_write(void*, int)
// {
// 	// UNUSED FUNCTION
// }

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
	// if we're in text mode:
	//     - returns next byte (assuming it's not a comment or special character)
	// if we're in binary mode:
	//     - returns next byte with no checks

	int scanOut;

	// check if we're in text mode or binary mode
	if (mMode == STREAM_MODE_TEXT) { // we're in text mode, need to do more checks

		char* nextToken = getNextToken();
		// if we have a null pointer, panic
		if (!nextToken) {
			JUT_PANICLINE(260, "readByte:Token Error\n");
		}

		// take byte from nextToken and put it into scanOut
		sscanf(nextToken, "%d", &scanOut);
		// return byte
		return (u8)scanOut;
	}

	// we're in binary mode, who needs checks
	return _readByte();
}

/**
 * @note Address: 0x80414714
 * @note Size: 0x50
 */
u8 Stream::_readByte()
{
	// reads in the next byte with no checks
	// returns byte being read and increments stream position

	u8 currByte;
	read(&currByte, 1);
	mPosition++;
	return currByte;
}

/**
 * @note Address: 0x80414764
 * @note Size: 0x32C
 */
s16 Stream::readShort()
{
	// if we're in text mode:
	//     - returns next 2 bytes, treated as short (assuming it's not a comment or special character)
	// if we're in binary mode:
	//     - returns next 2 bytes with no checks

	u16 outVal;

	if (mMode == STREAM_MODE_TEXT) { // we're in text mode, need to do more checks

		char* nextToken = getNextToken();
		// if we have a null pointer, panic
		if (!nextToken) {
			JUT_PANICLINE(284, "readShort:Token Error\n");
		}
		int scanOut;
		// take bytes from nextToken and put it into scanOut
		sscanf(nextToken, "%d", &scanOut);
		// return result
		outVal = scanOut;
		return outVal;
	}

	// we're in binary mode, who needs checks
	read(&outVal, 2);
	mPosition += 2;
	// swap endian if necessary
	if (mEndian != STREAM_BIG_ENDIAN) {
		u32 byte1 = (outVal >> 8) & 0x000000FF;
		u32 byte2 = (outVal << 8) & 0x0000FF00;
		outVal    = (byte2 | byte1);
	}

	return outVal;
}

/**
 * @note Address: 0x80414A90
 * @note Size: 0x31C
 */
int Stream::readInt()
{
	// if we're in text mode:
	//     - returns next 4 bytes, treated as int (assuming it's not a comment or special character)
	// if we're in binary mode:
	//     - returns next 4 bytes with no checks

	int outVal;

	if (mMode == STREAM_MODE_TEXT) { // we're in text mode, need to do more checks

		char* nextToken = getNextToken();

		// if we have a null pointer, panic
		if (!nextToken) {
			JUT_PANICLINE(306, "readInt:Token Error\n");
		}

		// take bytes from nextToken and put it into outVal
		sscanf(nextToken, "%d", &outVal);
		// return result
		return outVal;
	}

	// we're in binary mode, who needs checks
	read(&outVal, 4);
	mPosition += 4;
	// swap endian if necessary
	if (mEndian != STREAM_BIG_ENDIAN) {
		int byte1 = ((u32)outVal >> 24) & 0x000000FF;
		int byte2 = ((u32)outVal >> 8) & 0x0000FF00;
		int byte3 = ((u32)outVal << 8) & 0x00FF0000;
		int byte4 = ((u32)outVal << 24) & 0xFF000000;
		outVal    = (byte4 | byte3 | byte2 | byte1);
	}

	return outVal;
}

/**
 * @note Address: 0x80414DAC
 * @note Size: 0x328
 */
f32 Stream::readFloat()
{
	// if we're in text mode:
	//     - returns next 4 bytes, treated as float (assuming it's not a comment or special character)
	// if we're in binary mode:
	//     - returns next 4 bytes with no checks
	f32 outFloat;
	int outInt;

	if (mMode == STREAM_MODE_TEXT) { // we're in text mode, need to do more checks
		char* nextToken = getNextToken();

		// if we have a null pointer, panic
		if (!nextToken) {
			JUT_PANICLINE(324, "readFloat:Token Error\n");
		}

		// take bytes from bufferPtr and put it into outFloat
		sscanf(nextToken, "%f", &outFloat);
		// return result
		return outFloat;
	}

	// we're in binary mode, who needs checks
	read(&outFloat, 4);
	mPosition += 4;
	// swap endian if necessary
	if (mEndian != STREAM_BIG_ENDIAN) {
		int outInt = *(u32*)&outFloat;
		int byte1  = ((u32)outInt >> 24) & 0x000000FF;
		int byte2  = ((u32)outInt >> 8) & 0x0000FF00;
		int byte3  = ((u32)outInt << 8) & 0x00FF0000;
		int byte4  = ((u32)outInt << 24) & 0xFF000000;
		outInt     = (byte4 | byte3 | byte2 | byte1);
		outFloat   = *(f32*)&outInt;
	}

	return outFloat;
}

/**
 * @note Address: 0x804150D4
 * @note Size: 0x4F8
 */
// only final for loop not matching
char* Stream::readString(char* str, int strLength)
{
	// reads string from stream
	// if str provided, stores in str text of length strLength
	// if str 0, returns string to next token

	char* outStr;

	if (mMode == STREAM_MODE_TEXT) { // we're in text mode, need to do more checks

		// get text
		char* nextToken = getNextToken();

		int strSize = strlen(nextToken);
		if (str) { // str provided, check size compared to text
			P2ASSERTLINE(352, strLength >= strSize);
			outStr = str;
		} else { // no str provided, read in whole nextToken
			outStr = new char[strSize + 1];
		}

		// put text byte by byte into outStr
		for (int readLen = 0; readLen < strSize + 1; readLen++) {
			outStr[readLen] = nextToken[readLen];
		}

	} else { // we're in binary mode, free-for-all
		// read max of 0x400 bytes
		char tokenStore[0x400];

		// read up to 0x400 bytes into tokenStore
		int readLen = 0;
		for (int i = 0; i < 0x400 || !eof(); i++) {
			u8 byte       = _readByte();
			tokenStore[i] = byte;
			if (!(tokenStore[i]))
				break;
			readLen++;
		}

		if (str) { // str provided, check size compared to text
			P2ASSERTLINE(372, strLength >= readLen);
			outStr = str;
		} else { // no str provided, read in whole tokenStore
			outStr = new char[readLen + 1];
		}

		// put text byte by byte into outStr
		int i           = 0;
		char* outStrPtr = outStr;
		for (i; i < readLen; i++) {
			*outStrPtr = tokenStore[i];
			outStrPtr++;
		}
		*outStrPtr = 0;
	}

	return outStr;
}

/**
 * @note Address: N/A
 * @note Size: 0x64C
 */
// void Stream::readFixedString()
// {
//
// }

const char UNUSED_readFixedString[] = "can not use readFixedString in text mode\n";

/**
 * @note Address: 0x804155CC
 * @note Size: 0xA4
 */
void Stream::writeString(char* inputStr)
{
	// write input string byte by byte
	// binary output ends with 0, text with " "

	// check length of string then loop over length
	int len = strlen(inputStr);
	for (int i = 0; i < len; i++) {
		// write byte with no checks
		_writeByte(inputStr[i]);
	}

	if (mMode == STREAM_MODE_TEXT) {
		// end text mode output with space
		printf(" ");
		return;
	}
	// end binary mode output with 0
	_writeByte(0);
}

/**
 * @note Address: N/A
 * @note Size: 0xBC
 */
// void Stream::writeFixedString(char*)
// {
// 	// UNUSED FUNCTION
// }

const char UNUSED_writeFixedString[] = "can not use writeFixedString in text mode\n";

/**
 * @note Address: 0x80415670
 * @note Size: 0x70
 */
void Stream::writeByte(u8 c)
{
	// write next byte + increment position
	// check if we're in text or binary and write "%d " if in text
	u8 buffer = c;
	if (mMode == 1) {
		printf("%d ", c);
	} else {
		write(&buffer, 1);
		mPosition++;
	}
}

/**
 * @note Address: 0x804156E0
 * @note Size: 0x50
 */
void Stream::_writeByte(u8 c)
{
	// write next byte + increment position
	// no checks for mode type
	u8 buffer = c;
	write(&buffer, 1);
	mPosition++;
}

/**
 * @note Address: 0x80415730
 * @note Size: 0x90
 */
void Stream::writeShort(s16 inputShort)
{
	// write s16 (s16)
	// need to handle text and binary mode differently

	// by default, value to write should be inputShort
	s16 outVal = inputShort;
	if (mMode == STREAM_MODE_TEXT) {
		// in text mode, write with "%d "
		printf("%d ", inputShort);
		return;
	}
	// make sure stream value is big endian
	if (mEndian != STREAM_BIG_ENDIAN) {
		// if it's not big endian, swap bytes to make it big endian
		outVal = bswap16((s16)inputShort);
	}

	// write s16 (2 bytes) and increment stream position
	write(&outVal, 2);
	mPosition += 2;
}

/**
 * @note Address: 0x804157C0
 * @note Size: 0x88
 */
void Stream::writeInt(int inputInt)
{
	// write int (4 bytes)
	// need to handle text and binary mode differently

	// by default, value to write should be inputInt
	int outVal = inputInt;
	if (mMode == STREAM_MODE_TEXT) {
		// in text mode, write with "%d "
		printf("%d ", inputInt);
		return;
	}
	// make sure stream value is big endian
	if (mEndian != STREAM_BIG_ENDIAN) {
		// if it's not big endian, swap bytes to make it big endian
		int byte1 = ((u32)inputInt >> 24) & 0x000000FF;
		int byte2 = ((u32)inputInt >> 8) & 0x0000FF00;
		int byte3 = ((u32)inputInt << 8) & 0x00FF0000;
		int byte4 = ((u32)inputInt << 24) & 0xFF000000;
		outVal    = (byte4 | byte3 | byte2 | byte1);
	}
	// write int (4 bytes) and increment stream position
	write(&outVal, 4);
	mPosition += 4;
}

/**
 * @note Address: 0x80415848
 * @note Size: 0xB0
 */
void Stream::writeFloat(f32 inputFloat)
{
	// write float (4 bytes)
	// need to handle text and binary mode differently

	// by default, value to write should be inputFloat
	if (mMode == STREAM_MODE_TEXT) {
		// in text mode, write with "%f "
		printf("%f ", inputFloat);
		return;
	}
	// check if stream value is big endian
	if (mEndian != STREAM_BIG_ENDIAN) {
		// if it's not big endian, swap bytes
		u32 data   = *(u32*)&inputFloat;
		int byte1  = (data >> 24) & 0x000000FF;
		int byte2  = (data >> 8) & 0x0000FF00;
		int byte3  = (data << 8) & 0x00FF0000;
		int byte4  = (data << 24) & 0xFF000000;
		int intVal = (byte4 | byte3 | byte2 | byte1);
		// write float (4 bytes) and increment stream position
		write(&intVal, 4);
		mPosition += 4;
		return;
	}

	// write float (4 bytes) and increment stream position
	write(&inputFloat, 4);
	mPosition += 4;
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
	if (eof()) { // if we're past the end of the file, panic
		JUT_PANICLINE(523, "RamStream::read out of bounds (pos=%d,bound=%d)\n", mPosition, mBounds);
	}
	// read numBytes bytes from mRamBufferStart + mPosition to destMem in mem
	memcpy(destMem, ((u8*)mRamBufferStart) + mPosition, numBytes);
}

/**
 * @note Address: 0x804159DC
 * @note Size: 0x94
 */

void RamStream::write(void* srcMem, int numBytes)
{
	if (eof()) { // if we're past the end of the file, panic
		JUT_PANICLINE(534, "RamStream::write out of bounds (pos=%d,bound=%d)\n", mPosition, mBounds);
	}
	// write numBytes bytes from srcMem to mRamBufferStart + mPosition
	memcpy(((u8*)mRamBufferStart) + mPosition, srcMem, numBytes);
}

/**
 * @note Address: 0x80415A70
 * @note Size: 0x2C
 */
bool RamStream::eof()
{
	// check if we're at the end of the 'file'
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
