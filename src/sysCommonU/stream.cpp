#include "types.h"
#include "stream.h"
#include "Dolphin/string.h"
#include "Dolphin/stl.h"

/*
 * --INFO--
 * Address:	........
 * Size:	000048
 */
bool Stream::isSpace(char currByte)
{
	// check if current byte is whitespace/newline/hash/brackets
	return ((currByte == '\r') || (currByte == ' ') || (currByte == '\n') || (currByte == '\t') || (currByte == '#') || (currByte == '{')
	        || (currByte == '}'));
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000EC
 */
// INLINE
char Stream::skipSpace()
{
	// return next byte that isn't a 'space' or a comment
	// if in binary mode (or end of file), return 0
	char byte;
	bool isComment = false;

	m_bufferPos = 0;
	if (m_mode == STREAM_MODE_TEXT) {
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

/*
 * --INFO--
 * Address:	80413DEC
 * Size:	000008
 */
bool Stream::eof() { return false; }

/*
 * --INFO--
 * Address:	........
 * Size:	000214
 */
// INLINE
inline void Stream::copyToTextBuffer()
{
	// copy next token (not starting with a 'space', not in a comment) to buffer
	// panic if we hit eof
	char nextByte;

	m_buffer[m_bufferPos++] = skipSpace();
	while (!eof()) {
		nextByte = _readByte(); // at 0xA
		// if we hit a newline, whitespace, hash, { or }, put 0s until we hit something else
		if (isSpace(nextByte)) {
			m_buffer[m_bufferPos++] = 0;
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

			m_buffer[m_bufferPos++] = nextByte;

			// if we hit a 0, exit
			if (!nextByte) {
				return;
			}
		}
	}
	// if we reach eof, panic
	JUT_PANICLINE(98, "Reached EOF\n");
}

/*
 * --INFO--
 * Address:	80413DF4
 * Size:	000228
 */
char* Stream::getNextToken()
{
	// if we're in text mode:
	//     - writes next (non-comment/whitespace/newline/bracket) token into buffer
	//     - returns a pointer to start of buffer
	// if we're in binary mode:
	//     - returns null pointer

	// if we're in binary mode, exit
	if (m_mode == STREAM_MODE_BINARY) {
		return 0;
	}

	// check next byte(s)
	copyToTextBuffer();

	// return a pointer to beginning of buffer
	return m_buffer;
}

/*
 * --INFO--
 * Address:	8041401C
 * Size:	000084
 */
void Stream::textBeginGroup(char* groupName)
{
	// if in text mode, write 'beginning' characters
	if (m_mode != STREAM_MODE_BINARY) {
		textWriteTab(m_tabCount);
		textWriteText("# %s\r\n", groupName);
		textWriteTab(m_tabCount);
		textWriteText("{\r\n");
		m_tabCount++;
	}
}

/*
 * --INFO--
 * Address:	804140A0
 * Size:	000058
 */
void Stream::textEndGroup()
{
	// if in text mode, write 'ending' characters
	if (m_mode != STREAM_MODE_BINARY) {
		m_tabCount--;
		textWriteTab(m_tabCount);
		textWriteText("}\r\n");
	}
}

/*
 * --INFO--
 * Address:	804140F8
 * Size:	0000E4
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

/*
 * --INFO--
 * Address:	804141DC
 * Size:	0000EC
 */
void Stream::textWriteText(char* format, ...)
{
	// prints text with given format information
	// only prints text - won't print binary
	char tempText[0x400];
	va_list args;

	if (m_mode != STREAM_MODE_BINARY) {
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

// /*
//  * --INFO--
//  * Address:	........
//  * Size:	000070
//  */
// void Stream::writePadding(u32)
// {
// 	// UNUSED FUNCTION - in stream.h header
// }

/*
 * --INFO--
 * Address:	........
 * Size:	00006C
 */
// void Stream::skipPadding(u32)
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	804142C8
 * Size:	0000C4
 */
void Stream::skipReading(u32 len)
{
	// 'skips' whatever is being streamed byte by byte
	// need to handle differently if in text or binary mode
	// skips to next line in text mode
	// this version comes with a length 'len' for binary mode

	// check mode
	if (m_mode == STREAM_MODE_TEXT) { // we're in text mode
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

/*
 * --INFO--
 * Address:	8041438C
 * Size:	0000A8
 */
void Stream::skipReadingText()
{
	// 'skips' whatever is being streamed byte by byte
	// need to handle differently if in text or binary mode
	// skips to next line in text mode
	// this version doesn't come with a length for binary mode

	// check mode
	if (m_mode == STREAM_MODE_TEXT) { // we're in text mode
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

/*
 * --INFO--
 * Address:	........
 * Size:	000050
 */
// void Stream::_read(void*, int)
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	........
 * Size:	000050
 */
// void Stream::_write(void*, int)
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	80414434
 * Size:	000068
 */
void Stream::textWriteTab(int tabCount)
{
	if (m_mode == 1) {
		for (int i = 0; i < tabCount; i++) {
			_writeByte('\t');
		}
	}
}

/*
 * --INFO--
 * Address:	8041449C
 * Size:	000278
 */
u8 Stream::readByte()
{
	// if we're in text mode:
	//     - returns next byte (assuming it's not a comment or special character)
	// if we're in binary mode:
	//     - returns next byte with no checks

	int scanOut;

	// check if we're in text mode or binary mode
	if (m_mode == STREAM_MODE_TEXT) { // we're in text mode, need to do more checks

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

/*
 * --INFO--
 * Address:	80414714
 * Size:	000050
 */
u8 Stream::_readByte()
{
	// reads in the next byte with no checks
	// returns byte being read and increments stream position

	u8 currByte;
	read(&currByte, 1);
	m_position++;
	return currByte;
}

/*
 * --INFO--
 * Address:	80414764
 * Size:	00032C
 */
short Stream::readShort()
{
	// if we're in text mode:
	//     - returns next 2 bytes, treated as short (assuming it's not a comment or special character)
	// if we're in binary mode:
	//     - returns next 2 bytes with no checks

	u16 outVal;

	if (m_mode == STREAM_MODE_TEXT) { // we're in text mode, need to do more checks

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
	m_position += 2;
	// swap endian if necessary
	if (m_endian != STREAM_BIG_ENDIAN) {
		u32 byte1 = (outVal >> 8) & 0x000000FF;
		u32 byte2 = (outVal << 8) & 0x0000FF00;
		outVal    = (byte2 | byte1);
	}

	return outVal;
}

/*
 * --INFO--
 * Address:	80414A90
 * Size:	00031C
 */
int Stream::readInt()
{
	// if we're in text mode:
	//     - returns next 4 bytes, treated as int (assuming it's not a comment or special character)
	// if we're in binary mode:
	//     - returns next 4 bytes with no checks

	int outVal;

	if (m_mode == STREAM_MODE_TEXT) { // we're in text mode, need to do more checks

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
	m_position += 4;
	// swap endian if necessary
	if (m_endian != STREAM_BIG_ENDIAN) {
		int byte1 = ((u32)outVal >> 24) & 0x000000FF;
		int byte2 = ((u32)outVal >> 8) & 0x0000FF00;
		int byte3 = ((u32)outVal << 8) & 0x00FF0000;
		int byte4 = ((u32)outVal << 24) & 0xFF000000;
		outVal    = (byte4 | byte3 | byte2 | byte1);
	}

	return outVal;
}

/*
 * --INFO--
 * Address:	80414DAC
 * Size:	000328
 */
float Stream::readFloat()
{
	// if we're in text mode:
	//     - returns next 4 bytes, treated as float (assuming it's not a comment or special character)
	// if we're in binary mode:
	//     - returns next 4 bytes with no checks
	float outFloat;
	int outInt;

	if (m_mode == STREAM_MODE_TEXT) { // we're in text mode, need to do more checks
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
	m_position += 4;
	// swap endian if necessary
	if (m_endian != STREAM_BIG_ENDIAN) {
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

/*
 * --INFO--
 * Address:	804150D4
 * Size:	0004F8
 */
// only final for loop not matching
char* Stream::readString(char* str, int strLength)
{
	// reads string from stream
	// if str provided, stores in str text of length strLength
	// if str 0, returns string to next token

	char* outStr;

	if (m_mode == STREAM_MODE_TEXT) { // we're in text mode, need to do more checks

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

/*
 * --INFO--
 * Address:	........
 * Size:	00064C
 */
// void Stream::readFixedString()
// {
//
// }

const char UNUSED_readFixedString[] = "can not use readFixedString in text mode\n";

/*
 * --INFO--
 * Address:	804155CC
 * Size:	0000A4
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

	if (m_mode == STREAM_MODE_TEXT) {
		// end text mode output with space
		printf(" ");
		return;
	}
	// end binary mode output with 0
	_writeByte(0);
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000BC
 */
// void Stream::writeFixedString(char*)
// {
// 	// UNUSED FUNCTION
// }

const char UNUSED_writeFixedString[] = "can not use writeFixedString in text mode\n";

/*
 * --INFO--
 * Address:	80415670
 * Size:	000070
 */
void Stream::writeByte(u8 c)
{
	// write next byte + increment position
	// check if we're in text or binary and write "%d " if in text
	u8 buffer = c;
	if (m_mode == 1) {
		printf("%d ", c);
	} else {
		write(&buffer, 1);
		m_position++;
	}
}

/*
 * --INFO--
 * Address:	804156E0
 * Size:	000050
 */
void Stream::_writeByte(u8 c)
{
	// write next byte + increment position
	// no checks for mode type
	u8 buffer = c;
	write(&buffer, 1);
	m_position++;
}

/*
 * --INFO--
 * Address:	80415730
 * Size:	000090
 */
void Stream::writeShort(short inputShort)
{
	// write short (s16)
	// need to handle text and binary mode differently

	// by default, value to write should be inputShort
	s16 outVal = inputShort;
	if (m_mode == STREAM_MODE_TEXT) {
		// in text mode, write with "%d "
		printf("%d ", inputShort);
		return;
	}
	// make sure stream value is big endian
	if (m_endian != STREAM_BIG_ENDIAN) {
		// if it's not big endian, swap bytes to make it big endian
		outVal = bswap16((s16)inputShort);
	}

	// write short (2 bytes) and increment stream position
	write(&outVal, 2);
	m_position += 2;
}

/*
 * --INFO--
 * Address:	804157C0
 * Size:	000088
 */
void Stream::writeInt(int inputInt)
{
	// write int (4 bytes)
	// need to handle text and binary mode differently

	// by default, value to write should be inputInt
	int outVal = inputInt;
	if (m_mode == STREAM_MODE_TEXT) {
		// in text mode, write with "%d "
		printf("%d ", inputInt);
		return;
	}
	// make sure stream value is big endian
	if (m_endian != STREAM_BIG_ENDIAN) {
		// if it's not big endian, swap bytes to make it big endian
		int byte1 = ((u32)inputInt >> 24) & 0x000000FF;
		int byte2 = ((u32)inputInt >> 8) & 0x0000FF00;
		int byte3 = ((u32)inputInt << 8) & 0x00FF0000;
		int byte4 = ((u32)inputInt << 24) & 0xFF000000;
		outVal    = (byte4 | byte3 | byte2 | byte1);
	}
	// write int (4 bytes) and increment stream position
	write(&outVal, 4);
	m_position += 4;
}

/*
 * --INFO--
 * Address:	80415848
 * Size:	0000B0
 */
void Stream::writeFloat(float inputFloat)
{
	// write float (4 bytes)
	// need to handle text and binary mode differently

	// by default, value to write should be inputFloat
	if (m_mode == STREAM_MODE_TEXT) {
		// in text mode, write with "%f "
		printf("%f ", inputFloat);
		return;
	}
	// check if stream value is big endian
	if (m_endian != STREAM_BIG_ENDIAN) {
		// if it's not big endian, swap bytes
		u32 data   = *(u32*)&inputFloat;
		int byte1  = (data >> 24) & 0x000000FF;
		int byte2  = (data >> 8) & 0x0000FF00;
		int byte3  = (data << 8) & 0x00FF0000;
		int byte4  = (data << 24) & 0xFF000000;
		int intVal = (byte4 | byte3 | byte2 | byte1);
		// write float (4 bytes) and increment stream position
		write(&intVal, 4);
		m_position += 4;
		return;
	}

	// write float (4 bytes) and increment stream position
	write(&inputFloat, 4);
	m_position += 4;
}

/*
 * --INFO--
 * Address:	804158F8
 * Size:	000050
 */
RamStream::RamStream(void* RamBufferPtr, int bounds)
{
	m_ramBufferStart = RamBufferPtr;
	m_bounds         = bounds;
	m_position       = 0;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000014
 */
// void RamStream::set(u8*, int)
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	80415948
 * Size:	000094
 */
void RamStream::read(void* destMem, int numBytes)
{
	if (eof()) { // if we're past the end of the file, panic
		JUT_PANICLINE(523, "RamStream::read out of bounds (pos=%d,bound=%d)\n", m_position, m_bounds);
	}
	// read numBytes bytes from m_ramBufferStart + m_position to destMem in mem
	memcpy(destMem, ((u8*)m_ramBufferStart) + m_position, numBytes);
}

/*
 * --INFO--
 * Address:	804159DC
 * Size:	000094
 */

void RamStream::write(void* srcMem, int numBytes)
{
	if (eof()) { // if we're past the end of the file, panic
		JUT_PANICLINE(534, "RamStream::write out of bounds (pos=%d,bound=%d)\n", m_position, m_bounds);
	}
	// write numBytes bytes from srcMem to m_ramBufferStart + m_position
	memcpy(((u8*)m_ramBufferStart) + m_position, srcMem, numBytes);
}

/*
 * --INFO--
 * Address:	80415A70
 * Size:	00002C
 */
bool RamStream::eof()
{
	// check if we're at the end of the 'file'
	if (m_bounds != -1) {
		return (m_bounds <= m_position);
	}
	return 0;
}

/*
 * --INFO--
 * Address:	80415A9C
 * Size:	000008
 */
u32 Stream::getPending() { return 0; }
