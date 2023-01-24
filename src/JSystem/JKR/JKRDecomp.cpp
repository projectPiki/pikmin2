#include "Dolphin/os.h"
#include "JSystem/JKR/JKRDecomp.h"
#include "JSystem/JKR/Aram.h"
#include "JSystem/JKR/JKRHeap.h"
#include "types.h"

void * JKRDecomp::sMessageBuffer[4] = {0};
OSMessageQueue JKRDecomp::sMessageQueue = {0};
JKRDecomp *JKRDecomp::sDecompObject;

/*
 * --INFO--
 * Address:	8001C934
 * Size:	000060
 */
JKRDecomp* JKRDecomp::create(long p1)
{

	if (sDecompObject == nullptr) {
		sDecompObject = new (JKRHeap::sSystemHeap, 0) JKRDecomp(p1);
	}
	return sDecompObject;
}

/*
 * --INFO--
 * Address:	8001C994
 * Size:	000050
 * __ct
 */
JKRDecomp::JKRDecomp(long p1)
    : JKRThread(0x4000, 0x10, p1)
{
	OSResumeThread(m_thread);
}

/*
 * --INFO--
 * Address:	8001C9E4
 * Size:	000060
 */
JKRDecomp::~JKRDecomp()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_8001CA28
	lis      r5, __vt__9JKRDecomp@ha
	li       r4, 0
	addi     r0, r5, __vt__9JKRDecomp@l
	stw      r0, 0(r30)
	bl       __dt__9JKRThreadFv
	extsh.   r0, r31
	ble      lbl_8001CA28
	mr       r3, r30
	bl       __dl__FPv

lbl_8001CA28:
	lwz      r0, 0x14(r1)
	mr       r3, r30
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8001CA44
 * Size:	0000C8
 */
void* JKRDecomp::run()
{
	void* inputBuffer[1];
	JKRDecompCommand* command;
	// int outMessage;
	OSInitMessageQueue(&sMessageQueue, sMessageBuffer, 4);
	while (true) {
		while (true) {
			while (true) {
				OSReceiveMessage(&sMessageQueue, inputBuffer, TRUE);
				command = static_cast<JKRDecompCommand*>(inputBuffer[0]);
				decode(command->_04, command->_08, command->_0C, command->_10);
				if (command->_20 == 0) {
					break;
				}
				if (command->_20 == 1) {
					JKRAramPiece::sendCommand(command->_24);
				}
			}
			if (command->m_callback == nullptr) {
				break;
			}
			command->m_callback(command);
		}
		if (command->_1C) {
			// outMessage = 1;
			OSSendMessage(command->_1C, (void*)1, FALSE);
		} else {
			// outMessage = 1;
			OSSendMessage(&command->_28, (void*)1, FALSE);
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
bool JKRDecomp::orderSync(u8* p1, u8* p2, u32 p3, u32 p4)
{
	JKRDecompCommand* command = new (JKRHeap::sSystemHeap, -4) JKRDecompCommand();
	command->_04              = p1;
	command->_08              = p2;
	command->_0C              = p3;
	command->_10              = p4;
	command->m_callback       = nullptr;
	OSSendMessage(&sMessageQueue, command, TRUE);
	void* inputBuffer[1];
	OSReceiveMessage(&command->_28, inputBuffer, TRUE);
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
	CompressionMode compression = checkCompressed(p1);
	if (compression ==  YAY0)
		decodeSZP(p1, p2, p3, p4);
	else if (compression == YAZ0)
		decodeSZS(p1, p2, p3, p4);
}

/*
 * --INFO--
 * Address:	8001CC68
 * Size:	0001A4
 */
void JKRDecomp::decodeSZP(u8 *src, u8 *dst, u32 srcLength, u32 dstLength)
{
    // s32 decodedSize;
    s32 srcChunkOffset;
    u32 count;
    s32 dstOffset;
    u32 length;
    s32 linkInfo;
    s32 offset;
    s32 i;
    s32 decodedSize = read_big_endian_u32(src + 4);
    s32 linkTableOffset = read_big_endian_u32(src + 8);
    s32 srcDataOffset = read_big_endian_u32(src + 12);

    dstOffset = 0;
    u32 counter = 0;
    srcChunkOffset = 16;

    u32 chunkBits;
    if (srcLength == 0)
        return;
    if (dstLength > decodedSize)
        return;

    length = srcLength;
    do
    {
        if (counter == 0)
        {
            chunkBits = read_big_endian_u32(src + srcChunkOffset);
            srcChunkOffset += sizeof(u32);
            counter = sizeof(u32) * 8;
        }

        if (chunkBits & 0x80000000)
        {
            if (dstLength == 0)
            {
                dst[dstOffset] = src[srcDataOffset];
                length--;
                if (length == 0)
                    return;
            }
            else
            {
                dstLength--;
            }
            dstOffset++;
            srcDataOffset++;
        }
        else
        {
            linkInfo = src[linkTableOffset] << 8 | src[linkTableOffset + 1];
            linkTableOffset += sizeof(u16);

            offset = dstOffset - (linkInfo & 0xFFF);
            // rlwinm. r28,r29,0x14,0x1c,0x1f
            count = (linkInfo >> 12);
            if (count == 0)
            {
                count = (u32)src[srcDataOffset] + 0x12;
                srcDataOffset++;
            }
            else
                count += 2;

            if ((s32)count > decodedSize - dstOffset)
                count = decodedSize - dstOffset;

            for (i = 0; i < (s32)count; i++, dstOffset++, offset++)
            {
                if (dstLength == 0)
                {
                    dst[dstOffset] = dst[offset - 1];
                    length--;
                    if (length == 0)
                        return;
                }
                else
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
void JKRDecomp::decodeSZS(u8 *src_buffer, u8 *dst_buffer, u32 srcSize, u32 dstSize) {

    u8 *decompEnd = dst_buffer + *(int *)(src_buffer + 4) - dstSize;    
    u8 *copyStart;
    s32 copyByteCount;    
    s32 chunkBitsLeft = 0;
    s32 chunkBits;

    if (srcSize == 0)
        return;
    if (dstSize > *(u32 *)src_buffer)
        return;
    
    u8 *curSrcPos = src_buffer + 0x10;
    do {


        if (chunkBitsLeft == 0) {
            chunkBits = *curSrcPos;
            chunkBitsLeft = 8;
            curSrcPos++;
        }
        if ((chunkBits & 0x80) != 0) {
            if (dstSize == 0)
            {
                *dst_buffer = *curSrcPos;
                srcSize--;
                dst_buffer++;
                if (srcSize == 0)
                    return;
            }
            else {
                dstSize--;
            }
            curSrcPos++;
        }
        else {
            u8 curVal = *curSrcPos;
            // load is inversed
            copyStart = dst_buffer - ((curVal & 0xF) << 8 | curSrcPos[1]);
            // copyByteCount = ;
            curSrcPos += 2;
            // instruction order differences
            if (curVal >> 4 == 0) {
                copyByteCount = *curSrcPos + 0x12;
                curSrcPos++;
            }
            else {
                copyByteCount = (curVal >> 4) + 2;
            }
            do {
                if (dstSize == 0) {
                    *dst_buffer = *(copyStart - 1);
                    srcSize--;
                    dst_buffer++;
                    if (srcSize == 0)
                        return;
                }
                else {
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
JKRDecomp::CompressionMode JKRDecomp::checkCompressed(u8* p1)
{
	if (p1[0] == 'Y' && p1[1] == 'a' && p1[3] == '0') {
		if (p1[2] == 'y') {
			return YAY0;
		}
		if (p1[2] == 'z') {
			return YAZ0;
		}
	}
	return NOT_COMPRESSED;
}

/*
 * --INFO--
 * Address:	8001CF40
 * Size:	000050
 */
JKRDecompCommand::JKRDecompCommand()
{
	OSInitMessageQueue(&_28, m_messageBuffer, 1);
	m_callback = nullptr;
	_1C        = nullptr;
	_18        = this;
	_20        = 0;
}

/*
 * --INFO--
 * Address:	8001CF90
 * Size:	00003C
 */
JKRDecompCommand::~JKRDecompCommand()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	or.      r31, r3, r3
	beq      lbl_8001CFB4
	extsh.   r0, r4
	ble      lbl_8001CFB4
	bl       __dl__FPv

lbl_8001CFB4:
	lwz      r0, 0x14(r1)
	mr       r3, r31
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}
