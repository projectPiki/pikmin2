#include "Dolphin/os.h"
#include "JSystem/JKernel/JKRDecomp.h"
#include "JSystem/JKernel/JKRAram.h"
#include "JSystem/JKernel/JKRHeap.h"
#include "types.h"

void* JKRDecomp::sMessageBuffer[4]      = { 0 };
OSMessageQueue JKRDecomp::sMessageQueue = { 0 };
JKRDecomp* JKRDecomp::sDecompObject;

/*
 * --INFO--
 * Address:	8001C934
 * Size:	000060
 */
JKRDecomp* JKRDecomp::create(long priority)
{

	if (sDecompObject == nullptr) {
		sDecompObject = new (JKRHeap::sSystemHeap, 0) JKRDecomp(priority);
	}
	return sDecompObject;
}

/*
 * --INFO--
 * Address:	8001C994
 * Size:	000050
 * __ct
 */
JKRDecomp::JKRDecomp(long priority)
    : JKRThread(0x4000, 0x10, priority)
{
	OSResumeThread(mThread);
}

/*
 * --INFO--
 * Address:	8001C9E4
 * Size:	000060
 */
JKRDecomp::~JKRDecomp() { }

/*
 * --INFO--
 * Address:	8001CA44
 * Size:	0000C8
 */
void* JKRDecomp::run()
{
	void* inputBuffer[1];
	JKRDecompCommand* command;
	OSInitMessageQueue(&sMessageQueue, sMessageBuffer, 4);
	while (true) {
		while (true) {
			while (true) {
				OSReceiveMessage(&sMessageQueue, inputBuffer, TRUE);
				command = static_cast<JKRDecompCommand*>(inputBuffer[0]);
				decode(command->mSourceBuffer, command->mDestBuffer, command->mSourceLength, command->mDestLength);
				if (command->_20 == 0) {
					break;
				}
				if (command->_20 == 1) {
					JKRAramPiece::sendCommand(command->mAMCommand);
				}
			}
			if (command->mCallback == nullptr) {
				break;
			}
			command->mCallback(command);
		}
		if (command->_1C) {
			// outMessage = 1;
			OSSendMessage(command->_1C, (void*)1, FALSE);
		} else {
			// outMessage = 1;
			OSSendMessage(&command->mMessageQueue, (void*)1, FALSE);
		}
	}
}

/*
 * --INFO--
 * Address:	8001CB0C
 * Size:	000030
 */
BOOL JKRDecomp::sendCommand(JKRDecompCommand* command) { return OSSendMessage(&sMessageQueue, command, TRUE); }

/*
 * --INFO--
 * Address:	8001CB3C
 * Size:	0000A0
 */
bool JKRDecomp::orderSync(u8* srcBuffer, u8* destBuffer, u32 srcLen, u32 destLen)
{
	JKRDecompCommand* command = new (JKRHeap::sSystemHeap, -4) JKRDecompCommand();
	command->mSourceBuffer    = srcBuffer;
	command->mDestBuffer      = destBuffer;
	command->mSourceLength    = srcLen;
	command->mDestLength      = destLen;
	command->mCallback        = nullptr;
	OSSendMessage(&sMessageQueue, command, TRUE);
	void* inputBuffer[1];
	OSReceiveMessage(&command->mMessageQueue, inputBuffer, TRUE);
	delete command;
	return true;
}

/*
 * --INFO--
 * Address:	8001CBDC
 * Size:	00008C
 */
void JKRDecomp::decode(u8* p1, u8* p2, u32 p3, u32 p4)
{
	JKRCompression compression = checkCompressed(p1);
	if (compression == COMPRESSION_YAY0)
		decodeSZP(p1, p2, p3, p4);
	else if (compression == COMPRESSION_YAZ0)
		decodeSZS(p1, p2, p3, p4);
}

/*
 * --INFO--
 * Address:	8001CC68
 * Size:	0001A4
 */
void JKRDecomp::decodeSZP(u8* src, u8* dst, u32 srcLength, u32 dstLength)
{
	// s32 decodedSize;
	s32 srcChunkOffset;
	u32 count;
	s32 dstOffset;
	u32 length;
	s32 linkInfo;
	s32 offset;
	s32 i;
	s32 decodedSize     = read_big_endian_u32(src + 4);
	s32 linkTableOffset = read_big_endian_u32(src + 8);
	s32 srcDataOffset   = read_big_endian_u32(src + 12);

	dstOffset      = 0;
	u32 counter    = 0;
	srcChunkOffset = 16;

	u32 chunkBits;
	if (srcLength == 0)
		return;
	if (dstLength > decodedSize)
		return;

	length = srcLength;
	do {
		if (counter == 0) {
			chunkBits = read_big_endian_u32(src + srcChunkOffset);
			srcChunkOffset += sizeof(u32);
			counter = sizeof(u32) * 8;
		}

		if (chunkBits & 0x80000000) {
			if (dstLength == 0) {
				dst[dstOffset] = src[srcDataOffset];
				length--;
				if (length == 0)
					return;
			} else {
				dstLength--;
			}
			dstOffset++;
			srcDataOffset++;
		} else {
			linkInfo = src[linkTableOffset] << 8 | src[linkTableOffset + 1];
			linkTableOffset += sizeof(u16);

			offset = dstOffset - (linkInfo & 0xFFF);
			// rlwinm. r28,r29,0x14,0x1c,0x1f
			count = (linkInfo >> 12);
			if (count == 0) {
				count = (u32)src[srcDataOffset] + 0x12;
				srcDataOffset++;
			} else
				count += 2;

			if ((s32)count > decodedSize - dstOffset)
				count = decodedSize - dstOffset;

			for (i = 0; i < (s32)count; i++, dstOffset++, offset++) {
				if (dstLength == 0) {
					dst[dstOffset] = dst[offset - 1];
					length--;
					if (length == 0)
						return;
				} else
					dstLength--;
			}
		}

		chunkBits <<= 1;
		counter--;
	} while (dstOffset < decodedSize);
}

/*
 * --INFO--
 * Address:	8001CE0C
 * Size:	0000E4
 */
void JKRDecomp::decodeSZS(u8* src_buffer, u8* dst_buffer, u32 srcSize, u32 dstSize)
{

	u8* decompEnd = dst_buffer + *(int*)(src_buffer + 4) - dstSize;
	u8* copyStart;
	s32 copyByteCount;
	s32 chunkBitsLeft = 0;
	s32 chunkBits;

	if (srcSize == 0)
		return;
	if (dstSize > *(u32*)src_buffer)
		return;

	u8* curSrcPos = src_buffer + 0x10;
	do {

		if (chunkBitsLeft == 0) {
			chunkBits     = *curSrcPos;
			chunkBitsLeft = 8;
			curSrcPos++;
		}
		if ((chunkBits & 0x80) != 0) {
			if (dstSize == 0) {
				*dst_buffer = *curSrcPos;
				srcSize--;
				dst_buffer++;
				if (srcSize == 0)
					return;
			} else {
				dstSize--;
			}
			curSrcPos++;
		} else {
			u8 curVal = *curSrcPos;
			// load is inversed
			copyStart = dst_buffer - ((curVal & 0xF) << 8 | curSrcPos[1]);
			// copyByteCount = ;
			curSrcPos += 2;
			// instruction order differences
			if (curVal >> 4 == 0) {
				copyByteCount = *curSrcPos + 0x12;
				curSrcPos++;
			} else {
				copyByteCount = (curVal >> 4) + 2;
			}
			do {
				if (dstSize == 0) {
					*dst_buffer = *(copyStart - 1);
					srcSize--;
					dst_buffer++;
					if (srcSize == 0)
						return;
				} else {
					dstSize--;
				}
				copyByteCount--;
				copyStart++;
			} while (copyByteCount != 0);
		}
		chunkBits <<= 1;
		chunkBitsLeft--;
	} while (dst_buffer != decompEnd);
}

/*
 * --INFO--
 * Address:	8001CEF0
 * Size:	000050
 */
JKRCompression JKRDecomp::checkCompressed(u8* p1)
{
	if (p1[0] == 'Y' && p1[1] == 'a' && p1[3] == '0') {
		if (p1[2] == 'y') {
			return COMPRESSION_YAY0;
		}
		if (p1[2] == 'z') {
			return COMPRESSION_YAZ0;
		}
	}
	return COMPRESSION_None;
}

/*
 * --INFO--
 * Address:	8001CF40
 * Size:	000050
 */
JKRDecompCommand::JKRDecompCommand()
{
	OSInitMessageQueue(&mMessageQueue, mMessageBuffer, 1);
	mCallback = nullptr;
	_1C       = nullptr;
	mSelf     = this;
	_20       = 0;
}

/*
 * --INFO--
 * Address:	8001CF90
 * Size:	00003C
 */
JKRDecompCommand::~JKRDecompCommand() { }
