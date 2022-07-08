#include "types.h"
#include "stream.h"
#include "Dolphin/string.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_80499660
    lbl_80499660:
        .asciz "stream.cpp"
        .skip 0x1
    .global lbl_8049966C
    lbl_8049966C:
        .asciz "Reached EOF\n"
        .skip 0x3
    .global readByteTokErr
    readByteTokErr:
        .asciz "readByte:Token Error\n"
        .skip 0x2
    .global readShortTokErr
    readShortTokErr:
        .asciz "readShort:Token Error\n"
        .skip 0x1
    .global readIntTokErr
    readIntTokErr:
        .asciz "readInt:Token Error\n"
        .skip 0x3
    .global readFloatTokErr
    readFloatTokErr:
        .asciz "readFloat:Token Error\n"
        .skip 0x1
    .global "assert@3391"
    "assert@3391":
        .asciz "P2Assert"
        .skip 0x3
        .asciz "can not use readFixedString in text mode\n"
        .skip 0x2
        .asciz "can not use writeFixedString in text mode\n"
        .skip 0x1
    .global lbl_80499740
    lbl_80499740:
        .asciz "RamStream::read out of bounds (pos=%d,bound=%d)\n"
        .skip 0x3
    .global lbl_80499774
    lbl_80499774:
        .asciz "RamStream::write out of bounds (pos=%d,bound=%d)\n"
        .skip 0x2

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__9RamStream
    __vt__9RamStream:
        .4byte 0
        .4byte 0
        .4byte read__9RamStreamFPvi
        .4byte write__9RamStreamFPvi
        .4byte eof__9RamStreamFv
        .4byte getPending__6StreamFv
    .global __vt__6Stream
    __vt__6Stream:
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte eof__6StreamFv
        .4byte getPending__6StreamFv

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_805202E0
    lbl_805202E0:
        .4byte 0x23202573
        .4byte 0x0D0A0000
    .global lbl_805202E8
    lbl_805202E8:
        .4byte 0x7B0D0A00
    .global lbl_805202EC
    lbl_805202EC:
        .4byte 0x7D0D0A00
    .global lbl_805202F0
    lbl_805202F0:
        .4byte 0x25640000
    .global lbl_805202F4
    lbl_805202F4:
        .4byte 0x25660000
    .global lbl_805202F8
    lbl_805202F8:
        .4byte 0x20000000
    .global lbl_805202FC
    lbl_805202FC:
        .4byte 0x25642000
    .global lbl_80520300
    lbl_80520300:
        .4byte 0x25662000
        .4byte 0x00000000
*/

/*
 * --INFO--
 * Address:	........
 * Size:	000034
 */
Stream::Stream()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000030
 */
Stream::Stream(int)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000018
 */
void Stream::differentEndian()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000048
 */
// 'UNUSED FUNCTION'/INLINE
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
// 'UNUSED FUNCTION'/INLINE
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
// 'UNUSED FUNCTION'/INLINE
void Stream::copyToTextBuffer()
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
#line 98
	JUT_PANIC("Reached EOF\n");
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
	if (m_mode) {
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
	if (m_mode) {
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
void Stream::printf(char*, ...)
// in progress: https://decomp.me/scratch/0UIB3
{
	/*
	stwu     r1, -0x490(r1)
	mflr     r0
	stw      r0, 0x494(r1)
	stw      r31, 0x48c(r1)
	stw      r30, 0x488(r1)
	stw      r29, 0x484(r1)
	stw      r28, 0x480(r1)
	mr       r28, r3
	bne      cr1, lbl_8041413C
	stfd     f1, 0x28(r1)
	stfd     f2, 0x30(r1)
	stfd     f3, 0x38(r1)
	stfd     f4, 0x40(r1)
	stfd     f5, 0x48(r1)
	stfd     f6, 0x50(r1)
	stfd     f7, 0x58(r1)
	stfd     f8, 0x60(r1)

lbl_8041413C:
	addi     r11, r1, 0x498
	addi     r0, r1, 8
	lis      r12, 0x200
	stw      r3, 8(r1)
	addi     r31, r1, 0x68
	addi     r3, r1, 0x74
	stw      r5, 0x10(r1)
	mr       r5, r31
	stw      r4, 0xc(r1)
	stw      r6, 0x14(r1)
	stw      r7, 0x18(r1)
	stw      r8, 0x1c(r1)
	stw      r9, 0x20(r1)
	stw      r10, 0x24(r1)
	stw      r12, 0x68(r1)
	stw      r11, 0x6c(r1)
	stw      r0, 0x70(r1)
	bl       vsprintf
	addi     r3, r1, 0x74
	bl       strlen
	or.      r31, r3, r3
	ble      lbl_804141BC
	addi     r30, r1, 0x74
	li       r29, 0
	b        lbl_804141B4

lbl_804141A0:
	lbz      r4, 0(r30)
	mr       r3, r28
	bl       _writeByte__6StreamFUc
	addi     r30, r30, 1
	addi     r29, r29, 1

lbl_804141B4:
	cmpw     r29, r31
	blt      lbl_804141A0

lbl_804141BC:
	lwz      r0, 0x494(r1)
	lwz      r31, 0x48c(r1)
	lwz      r30, 0x488(r1)
	lwz      r29, 0x484(r1)
	lwz      r28, 0x480(r1)
	mtlr     r0
	addi     r1, r1, 0x490
	blr
	*/
}

/*
 * --INFO--
 * Address:	804141DC
 * Size:	0000EC
 */
void Stream::textWriteText(char*, ...)
// in progress: https://decomp.me/scratch/hBCOf
{
	/*
	stwu     r1, -0x490(r1)
	mflr     r0
	stw      r0, 0x494(r1)
	stw      r31, 0x48c(r1)
	stw      r30, 0x488(r1)
	stw      r29, 0x484(r1)
	stw      r28, 0x480(r1)
	mr       r28, r3
	bne      cr1, lbl_80414220
	stfd     f1, 0x28(r1)
	stfd     f2, 0x30(r1)
	stfd     f3, 0x38(r1)
	stfd     f4, 0x40(r1)
	stfd     f5, 0x48(r1)
	stfd     f6, 0x50(r1)
	stfd     f7, 0x58(r1)
	stfd     f8, 0x60(r1)

lbl_80414220:
	stw      r3, 8(r1)
	stw      r4, 0xc(r1)
	stw      r5, 0x10(r1)
	stw      r6, 0x14(r1)
	stw      r7, 0x18(r1)
	stw      r8, 0x1c(r1)
	stw      r9, 0x20(r1)
	stw      r10, 0x24(r1)
	lwz      r0, 0xc(r28)
	cmpwi    r0, 0
	beq      lbl_804142A8
	addi     r6, r1, 0x498
	addi     r0, r1, 8
	lis      r3, 0x200
	stw      r6, 0x6c(r1)
	addi     r5, r1, 0x68
	stw      r3, 0x68(r1)
	addi     r3, r1, 0x74
	stw      r0, 0x70(r1)
	bl       vsprintf
	addi     r3, r1, 0x74
	bl       strlen
	or.      r31, r3, r3
	ble      lbl_804142A8
	addi     r30, r1, 0x74
	li       r29, 0
	b        lbl_804142A0

lbl_8041428C:
	lbz      r4, 0(r30)
	mr       r3, r28
	bl       _writeByte__6StreamFUc
	addi     r30, r30, 1
	addi     r29, r29, 1

lbl_804142A0:
	cmpw     r29, r31
	blt      lbl_8041428C

lbl_804142A8:
	lwz      r0, 0x494(r1)
	lwz      r31, 0x48c(r1)
	lwz      r30, 0x488(r1)
	lwz      r29, 0x484(r1)
	lwz      r28, 0x480(r1)
	mtlr     r0
	addi     r1, r1, 0x490
	blr
	*/
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
void Stream::skipPadding(u32)
{
	// UNUSED FUNCTION
}

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
void Stream::_read(void*, int)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000050
 */
void Stream::_write(void*, int)
{
	// UNUSED FUNCTION
}

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
#line 260
			JUT_PANIC("readByte:Token Error\n");
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

	u8 currByte;        // place to store byte being read
	read(&currByte, 1); // read in 1 byte
	m_position++;       // increment stream position
	return currByte;
}

/*
 * --INFO--
 * Address:	80414764
 * Size:	00032C
 */
s16 Stream::readShort()
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
#line 284
			JUT_PANIC("readShort:Token Error\n");
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
#line 306
			JUT_PANIC("readInt:Token Error\n");
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
#line 324
			JUT_PANIC("readFloat:Token Error\n");
		}

		// take bytes from bufferPtr and put it into outFloat
		sscanf(nextToken, "%d", &outFloat);
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
char* Stream::readString(char*, int)
// in progress: https://decomp.me/scratch/eGMDM
{
	/*
	stwu     r1, -0x430(r1)
	mflr     r0
	stw      r0, 0x434(r1)
	stmw     r24, 0x410(r1)
	mr       r26, r3
	lis      r3, lbl_80499660@ha
	mr       r27, r4
	mr       r28, r5
	addi     r31, r3, lbl_80499660@l
	lwz      r0, 0xc(r26)
	cmpwi    r0, 1
	bne      lbl_80415450
	cmpwi    r0, 0
	bne      lbl_80415114
	li       r30, 0
	b        lbl_8041535C

lbl_80415114:
	li       r29, 0
	stw      r29, 0x10(r26)
	lwz      r0, 0xc(r26)
	cmpwi    r0, 1
	bne      lbl_804151F4
	b        lbl_804151D8

lbl_8041512C:
	mr       r3, r26
	addi     r4, r1, 8
	lwz      r12, 0(r26)
	li       r5, 1
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r3, 8(r26)
	clrlwi.  r0, r29, 0x18
	addi     r0, r3, 1
	stw      r0, 8(r26)
	lbz      r0, 8(r1)
	extsb    r4, r0
	beq      lbl_8041517C
	cmpwi    r4, 0xd
	beq      lbl_80415174
	cmpwi    r4, 0xa
	bne      lbl_804151D8

lbl_80415174:
	li       r29, 0
	b        lbl_804151D8

lbl_8041517C:
	cmpwi    r4, 0x23
	bne      lbl_8041518C
	li       r29, 1
	b        lbl_804151D8

lbl_8041518C:
	cmpwi    r4, 0xd
	li       r0, 0
	beq      lbl_804151C8
	cmpwi    r4, 0x20
	beq      lbl_804151C8
	cmpwi    r4, 0xa
	beq      lbl_804151C8
	cmpwi    r4, 9
	beq      lbl_804151C8
	cmpwi    r4, 0x23
	beq      lbl_804151C8
	cmpwi    r4, 0x7b
	beq      lbl_804151C8
	cmpwi    r4, 0x7d
	bne      lbl_804151CC

lbl_804151C8:
	li       r0, 1

lbl_804151CC:
	clrlwi.  r0, r0, 0x18
	bne      lbl_804151D8
	b        lbl_804151F8

lbl_804151D8:
	mr       r3, r26
	lwz      r12, 0(r26)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8041512C

lbl_804151F4:
	li       r4, 0

lbl_804151F8:
	lwz      r3, 0x10(r26)
	addi     r0, r3, 1
	add      r3, r26, r3
	stw      r0, 0x10(r26)
	stb      r4, 0x14(r3)
	b        lbl_80415328

lbl_80415210:
	mr       r3, r26
	addi     r4, r1, 0xa
	lwz      r12, 0(r26)
	li       r5, 1
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r3, 8(r26)
	li       r0, 0
	addi     r3, r3, 1
	stw      r3, 8(r26)
	lbz      r3, 0xa(r1)
	extsb    r5, r3
	cmpwi    r5, 0xd
	beq      lbl_8041527C
	cmpwi    r5, 0x20
	beq      lbl_8041527C
	cmpwi    r5, 0xa
	beq      lbl_8041527C
	cmpwi    r5, 9
	beq      lbl_8041527C
	cmpwi    r5, 0x23
	beq      lbl_8041527C
	cmpwi    r5, 0x7b
	beq      lbl_8041527C
	cmpwi    r5, 0x7d
	bne      lbl_80415280

lbl_8041527C:
	li       r0, 1

lbl_80415280:
	clrlwi.  r0, r0, 0x18
	beq      lbl_8041530C
	lwz      r3, 0x10(r26)
	cmpwi    r5, 0x23
	li       r4, 0
	addi     r0, r3, 1
	add      r3, r26, r3
	stw      r0, 0x10(r26)
	stb      r4, 0x14(r3)
	bne      lbl_80415358
	b        lbl_804152EC

lbl_804152AC:
	mr       r3, r26
	addi     r4, r1, 9
	lwz      r12, 0(r26)
	li       r5, 1
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r3, 8(r26)
	addi     r0, r3, 1
	stw      r0, 8(r26)
	lbz      r0, 9(r1)
	extsb    r0, r0
	cmpwi    r0, 0xd
	beq      lbl_80415358
	cmpwi    r0, 0xa
	beq      lbl_80415358

lbl_804152EC:
	mr       r3, r26
	lwz      r12, 0(r26)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_804152AC
	b        lbl_80415358

lbl_8041530C:
	lwz      r4, 0x10(r26)
	extsb.   r0, r5
	addi     r3, r4, 1
	addi     r0, r4, 0x14
	stw      r3, 0x10(r26)
	stbx     r5, r26, r0
	beq      lbl_80415358

lbl_80415328:
	mr       r3, r26
	lwz      r12, 0(r26)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80415210
	addi     r3, r31, 0
	addi     r5, r31, 0xc
	li       r4, 0x62
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80415358:
	addi     r30, r26, 0x14

lbl_8041535C:
	mr       r3, r30
	bl       strlen
	cmplwi   r27, 0
	mr       r26, r3
	beq      lbl_80415394
	cmpw     r28, r26
	bge      lbl_8041538C
	addi     r3, r31, 0
	addi     r5, r31, 0x7c
	li       r4, 0x160
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8041538C:
	mr       r3, r27
	b        lbl_8041539C

lbl_80415394:
	addi     r3, r26, 1
	bl       __nwa__FUl

lbl_8041539C:
	addic.   r0, r26, 1
	li       r7, 0
	ble      lbl_804155B8
	addi     r0, r26, 1
	addi     r4, r26, -7
	cmpwi    r0, 8
	ble      lbl_8041541C
	addi     r0, r4, 7
	srwi     r0, r0, 3
	mtctr    r0
	cmpwi    r4, 0
	ble      lbl_8041541C

lbl_804153CC:
	add      r4, r30, r7
	add      r5, r3, r7
	lbz      r0, 0(r4)
	addi     r7, r7, 8
	stb      r0, 0(r5)
	lbz      r0, 1(r4)
	stb      r0, 1(r5)
	lbz      r0, 2(r4)
	stb      r0, 2(r5)
	lbz      r0, 3(r4)
	stb      r0, 3(r5)
	lbz      r0, 4(r4)
	stb      r0, 4(r5)
	lbz      r0, 5(r4)
	stb      r0, 5(r5)
	lbz      r0, 6(r4)
	stb      r0, 6(r5)
	lbz      r0, 7(r4)
	stb      r0, 7(r5)
	bdnz     lbl_804153CC

lbl_8041541C:
	addi     r6, r26, 1
	add      r5, r30, r7
	subf     r0, r7, r6
	add      r4, r3, r7
	mtctr    r0
	cmpw     r7, r6
	bge      lbl_804155B8

lbl_80415438:
	lbz      r0, 0(r5)
	addi     r5, r5, 1
	stb      r0, 0(r4)
	addi     r4, r4, 1
	bdnz     lbl_80415438
	b        lbl_804155B8

lbl_80415450:
	addi     r30, r1, 0xc
	li       r29, 0
	mr       r25, r30
	li       r24, 0
	b        lbl_804154AC

lbl_80415464:
	mr       r3, r26
	addi     r4, r1, 0xb
	lwz      r12, 0(r26)
	li       r5, 1
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r3, 8(r26)
	addi     r0, r3, 1
	stw      r0, 8(r26)
	lbz      r0, 0xb(r1)
	stb      r0, 0(r25)
	lbz      r0, 0(r25)
	extsb.   r0, r0
	beq      lbl_804154D0
	addi     r29, r29, 1
	addi     r25, r25, 1
	addi     r24, r24, 1

lbl_804154AC:
	cmpwi    r24, 0x400
	blt      lbl_80415464
	mr       r3, r26
	lwz      r12, 0(r26)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80415464

lbl_804154D0:
	cmplwi   r27, 0
	beq      lbl_804154FC
	cmpw     r28, r29
	bge      lbl_804154F4
	addi     r3, r31, 0
	addi     r5, r31, 0x7c
	li       r4, 0x174
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_804154F4:
	mr       r3, r27
	b        lbl_80415504

lbl_804154FC:
	addi     r3, r29, 1
	bl       __nwa__FUl

lbl_80415504:
	cmpwi    r29, 0
	mr       r6, r3
	li       r5, 0
	ble      lbl_804155B0
	cmpwi    r29, 8
	addi     r4, r29, -8
	ble      lbl_80415584
	addi     r0, r4, 7
	srwi     r0, r0, 3
	mtctr    r0
	cmpwi    r4, 0
	ble      lbl_80415584

lbl_80415534:
	lbz      r4, 0(r30)
	addi     r5, r5, 8
	lbz      r0, 1(r30)
	stb      r4, 0(r6)
	lbz      r4, 2(r30)
	stb      r0, 1(r6)
	lbz      r0, 3(r30)
	stb      r4, 2(r6)
	lbz      r4, 4(r30)
	stb      r0, 3(r6)
	lbz      r0, 5(r30)
	stb      r4, 4(r6)
	lbz      r4, 6(r30)
	stb      r0, 5(r6)
	lbz      r0, 7(r30)
	addi     r30, r30, 8
	stb      r4, 6(r6)
	stb      r0, 7(r6)
	addi     r6, r6, 8
	bdnz     lbl_80415534

lbl_80415584:
	addi     r4, r1, 0xc
	subf     r0, r5, r29
	add      r4, r4, r5
	mtctr    r0
	cmpw     r5, r29
	bge      lbl_804155B0

lbl_8041559C:
	lbz      r0, 0(r4)
	addi     r4, r4, 1
	stb      r0, 0(r6)
	addi     r6, r6, 1
	bdnz     lbl_8041559C

lbl_804155B0:
	li       r0, 0
	stb      r0, 0(r6)

lbl_804155B8:
	lmw      r24, 0x410(r1)
	lwz      r0, 0x434(r1)
	mtlr     r0
	addi     r1, r1, 0x430
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00064C
 */
char* Stream::readFixedString()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	804155CC
 * Size:	0000A4
 */
void Stream::writeString(char* inputStr)
// REGSWAP BETWEEN r30 and r31
{
	// write input string byte by byte
	// binary output ends with 0, text with " "

	// check length of string then loop over length
	int len      = strlen(inputStr); //
	char* strPtr = inputStr;         // this is here for the mr at 30
	for (int i = 0; i < len; i++, strPtr++) {
		// write byte with no checks
		_writeByte(*strPtr);
	}

	if (m_mode == STREAM_MODE_TEXT) {
		// end text mode output with space
		printf(" ");
		return;
	}
	// end binary mode output with 0
	_writeByte(0);

	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r4
	stw      r28, 0x10(r1)
	mr       r28, r3
	mr       r3, r29
	bl       strlen
	mr       r30, r3
	mr       r31, r29
	li       r29, 0
	b        lbl_8041561C

lbl_80415608:
	lbz      r4, 0(r31)
	mr       r3, r28
	bl       _writeByte__6StreamFUc
	addi     r29, r29, 1
	addi     r31, r31, 1

lbl_8041561C:
	cmpw     r29, r30
	blt      lbl_80415608
	lwz      r0, 0xc(r28)
	cmpwi    r0, 1
	bne      lbl_80415644
	mr       r3, r28
	addi     r4, r2, lbl_805202F8@sda21
	crclr    6
	bl       printf__6StreamFPce
	b        lbl_80415650

lbl_80415644:
	mr       r3, r28
	li       r4, 0
	bl       _writeByte__6StreamFUc

lbl_80415650:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r28, 0x10(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000BC
 */
void Stream::writeFixedString(char*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80415670
 * Size:	000070
 */
void Stream::writeByte(u8 c)
{
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
	u8 buffer = c;
	write(&buffer, 1);
	m_position++;
}

/*
 * --INFO--
 * Address:	80415730
 * Size:	000090
 */
// ENDIAN CONVERSION DOES NOT MATCH (but is correct)
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
		// this is oversimplifying to a sthbrx rather than rlwinm/rlwimi
		s32 byte1 = ((u32)inputShort >> 8) & 0x000000FF;
		s32 byte2 = ((u32)inputShort << 8) & 0x0000FF00;
		outVal    = (s16)(byte2 | byte1);
		// outVal = ((inputShort << 8) & 0xFF00) | ((inputShort >> 8) & 0x00FF);
	}

	// write short (2 bytes) and increment stream position
	write(&outVal, 2);
	m_position += 2;

	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	sth      r4, 8(r1)
	lwz      r0, 0xc(r3)
	cmpwi    r0, 1
	bne      lbl_80415768
	extsh    r5, r4
	addi     r4, r2, lbl_805202FC@sda21
	crclr    6
	bl       printf__6StreamFPce
	b        lbl_804157AC

lbl_80415768:
	lwz      r0, 4(r31)
	cmpwi    r0, 1
	beq      lbl_80415784
	extsh    r3, r4
	rlwinm   r0, r3, 0x18, 0x18, 0x1f
	rlwimi   r0, r3, 8, 0x10, 0x17
	sth      r0, 8(r1)

lbl_80415784:
	mr       r3, r31
	addi     r4, r1, 8
	lwz      r12, 0(r31)
	li       r5, 2
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	lwz      r3, 8(r31)
	addi     r0, r3, 2
	stw      r0, 8(r31)

lbl_804157AC:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
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
RamStream::RamStream(void* arg0, int arg1)
// __vt things need doing
// in progress: https://decomp.me/scratch/zz5xI
{
	// __vt = &__vt;
	m_endian = STREAM_BIG_ENDIAN;

	m_mode = STREAM_MODE_BINARY;
	if (m_mode == STREAM_MODE_TEXT) {
		m_tabCount = 0;
	}
	// this->unk0 = &__vt__9RamStream;
	_418       = arg0;
	bounds     = arg1;
	m_position = 0;
	/*
	lis      r6, __vt__6Stream@ha
	li       r0, 1
	addi     r6, r6, __vt__6Stream@l
	stw      r6, 0(r3)
	li       r6, 0
	stw      r0, 4(r3)
	stw      r6, 8(r3)
	stw      r6, 0xc(r3)
	lwz      r0, 0xc(r3)
	cmpwi    r0, 1
	bne      lbl_80415928
	stw      r6, 0x414(r3)

lbl_80415928:
	lis      r6, __vt__9RamStream@ha
	li       r0, 0
	addi     r6, r6, __vt__9RamStream@l
	stw      r6, 0(r3)
	stw      r4, 0x418(r3)
	stw      r5, 0x41c(r3)
	stw      r0, 8(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000014
 */
void RamStream::set(u8*, int)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80415948
 * Size:	000094
 */
void RamStream::read(void* destMem, int numBytes)
// memcpy srcMem argument isn't handled correctly just yet
// in progress: https://decomp.me/scratch/cpYeK
{
	if (eof()) { // if we're past the end of the file, panic
#line 523
		JUT_PANIC("RamStream::read out of bounds (pos=%d,bound=%d)\n", m_position, bounds);
	}
	// read numBytes bytes from _418 + m_position in ram to destMem in mem
	// this is handled wrong
	u32* srcMem = &((u32*)_418)[m_position];
	memcpy(destMem, srcMem, numBytes);

	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r5
	stw      r30, 0x18(r1)
	mr       r30, r4
	stw      r29, 0x14(r1)
	mr       r29, r3
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_804159A8
	lis      r3, lbl_80499660@ha
	lis      r4, lbl_80499740@ha
	addi     r5, r4, lbl_80499740@l
	lwz      r6, 8(r29)
	lwz      r7, 0x41c(r29)
	addi     r3, r3, lbl_80499660@l
	li       r4, 0x20b
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_804159A8:
	lwz      r4, 0x418(r29)
	mr       r3, r30
	lwz      r0, 8(r29)
	mr       r5, r31
	add      r4, r4, r0
	bl       memcpy
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	804159DC
 * Size:	000094
 */
void RamStream::write(void* srcMem, int numBytes)
// memcpy destMem argument isn't handled correctly just yet
// in progress: https://decomp.me/scratch/Dph0v
{
	if (eof()) { // if we're past the end of the file, panic
#line 534
		JUT_PANIC("RamStream::write out of bounds (pos=%d,bound=%d)\n", m_position, bounds);
	}
	// write numBytes bytes from srcMem to _418 + m_position
	// this isn't handled correctly
	memcpy(&((u32*)_418)[m_position], srcMem, numBytes);

	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r5
	stw      r30, 0x18(r1)
	mr       r30, r4
	stw      r29, 0x14(r1)
	mr       r29, r3
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80415A3C
	lis      r3, lbl_80499660@ha
	lis      r4, lbl_80499774@ha
	addi     r5, r4, lbl_80499774@l
	lwz      r6, 8(r29)
	lwz      r7, 0x41c(r29)
	addi     r3, r3, lbl_80499660@l
	li       r4, 0x216
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80415A3C:
	lwz      r3, 0x418(r29)
	mr       r4, r30
	lwz      r0, 8(r29)
	mr       r5, r31
	add      r3, r3, r0
	bl       memcpy
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80415A70
 * Size:	00002C
 */
bool RamStream::eof()
{
	// check if we're at the end of the 'file'
	if (bounds != -1) {
		return (bounds <= m_position);
	}
	return 0;
}

/*
 * --INFO--
 * Address:	80415A9C
 * Size:	000008
 */
u32 Stream::getPending() { return 0; }
