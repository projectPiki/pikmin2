#include "JSystem/JKR/Aram.h"
#include "JSystem/JSupport/JSUStream.h"
#include "Dolphin/os.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .balign 8
    lbl_80473598:
        .asciz "JKRAramStream.cpp"
    .balign 4
    lbl_804735AC:
        .asciz ":::Cannot alloc memory\n"

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .balign 8
    .global sMessageBuffer__13JKRAramStream
    sMessageBuffer__13JKRAramStream:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
    .global sMessageQueue__13JKRAramStream
    sMessageQueue__13JKRAramStream:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
    .global __vt__13JKRAramStream
    __vt__13JKRAramStream:
        .4byte 0
        .4byte 0
        .4byte __dt__13JKRAramStreamFv
        .4byte run__13JKRAramStreamFv

    .section .sbss # 0x80514D80 - 0x80516360
    .balign 8
    .global sAramStreamObject__13JKRAramStream
    sAramStreamObject__13JKRAramStream:
        .skip 0x4
    .global transBuffer__13JKRAramStream
    transBuffer__13JKRAramStream:
        .skip 0x4
    .global transSize__13JKRAramStream
    transSize__13JKRAramStream:
        .skip 0x4
    .global transHeap__13JKRAramStream
    transHeap__13JKRAramStream:
        .skip 0x4

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .balign 8
    lbl_805164E0:
        .asciz "%s"
*/

/*
 * --INFO--
 * Address:	80019F20
 * Size:	000070
 */
JKRHeap* sSystemHeap;

JKRAramStream* JKRAramStream::create(s32 param)
{
	if (JKRAramStream::sAramStreamObject == nullptr) {
		JKRAramStream::sAramStreamObject = new (JKRHeap::sSystemHeap, 0) JKRAramStream(param);
		setTransBuffer(nullptr, 0, nullptr);
	}
	return JKRAramStream::sAramStreamObject;
}

/*
 * --INFO--
 * Address:	80019F90
 * Size:	000050
 */
JKRAramStream::JKRAramStream(s32 priority)
    : JKRThread(0x4000, 0x10, priority)
{
	OSResumeThread(m_thread);
}

/*
 * --INFO--
 * Address:	80019FE0
 * Size:	000060
 */
JKRAramStream::~JKRAramStream() {};

/*
 * --INFO--
 * Address:	8001A040
 * Size:	000070
 */
void JKRAramStream::run(void)
{
	OSMessage result;
	OSInitMessageQueue(&JKRAramStream::sMessageQueue, (void**)JKRAramStream::sMessageBuffer,
	                   ARRAY_SIZE(sMessageBuffer)); // jank cast to void** to satisfy prototype
	while (true) {
		OSReceiveMessage(&JKRAramStream::sMessageQueue, &result, OS_MESSAGE_BLOCKING);
		JKRAramStreamCommand* command = static_cast<JKRAramStreamCommand*>(result.message);
		switch (command->type) {
		case ECT_READ:
			readFromAram();
			break;
		case ECT_WRITE:
			writeToAram(command);
			break;
		}
	}
}

/*
 * --INFO--
 * Address:	8001A0B0
 * Size:	000008
 */
u32 JKRAramStream::readFromAram() { return 1; } // probably a define evaluating to 1

/*
 * --INFO--
 * Address:	8001A0B8
 * Size:	0001EC
 */
s32 JKRAramStream::writeToAram(JKRAramStreamCommand* command)
{
	u32 dstSize       = command->mSize;
	u32 offset        = command->mOffset;
	u32 writtenLength = 0;
	u32 destination   = command->mAddress;
	u8* buffer        = command->mTransferBuffer;
	u32 bufferSize    = command->mTransferBufferSize;
	JKRHeap* heap     = command->mHeap;
	if (buffer) {
		bufferSize = (bufferSize) ? bufferSize : 0x8000;

		command->mTransferBufferSize      = bufferSize;
		command->mAllocatedTransferBuffer = false;
	} else {
		bufferSize = (bufferSize) ? bufferSize : 0x8000;

		if (heap) {
			buffer                   = (u8*)heap->JKRHeap::JKRAllocFromHeap(bufferSize, -0x20);
			command->mTransferBuffer = buffer;
		} else {
			buffer                   = (u8*)JKRAllocFromSysHeap(bufferSize, -0x20);
			command->mTransferBuffer = buffer;
		}

		command->mTransferBufferSize      = bufferSize;
		command->mAllocatedTransferBuffer = true;
	}

	if (!buffer) {
		if (!heap) {
			JKRHeap::sCurrentHeap->dump();
		} else {
			heap->dump();
		}

		JUT_PANICLINE(172, "%s", ":::Cannot alloc memory\n");
	}

	if (buffer) {
		command->mStream->seek(offset, SEEK_SET);
		while (dstSize != 0) {
			u32 length = (dstSize > bufferSize) ? bufferSize : dstSize;

			s32 readLength = command->mStream->read(buffer, length);
			if (readLength == 0) {
				writtenLength = 0;
				break;
			}

			JKRAramPiece::orderSync(0, (int)buffer, destination, length, nullptr);
			dstSize -= length;
			writtenLength += length;
			destination += length;

			if (command->mReturnSize) {
				*command->mReturnSize += length;
			}
		}

		if (command->mAllocatedTransferBuffer) {
			JKRHeap::free(buffer, (JKRHeap*)nullptr);
			command->mAllocatedTransferBuffer = false;
		}
	}

	OSSendMessage(&command->mMessageQueue, (void*)writtenLength, OS_MESSAGE_NON_BLOCKING);
	return writtenLength;

	/*
	 * --INFO--
	 * Address:	8001A2A4
	 * Size:	00005C
	 * void JSURandomInputStream::getAvailable() const
	 * Weak function, lives in JSUStream.h
	 */

	/*
	 * --INFO--
	 * Address:	8001A300
	 * Size:	0000C8
	 */
	JKRAramStreamCommand* JKRAramStream::write_StreamToAram_Async(JSUFileInputStream * stream, u32 addr, u32 size, u32 offset,
	                                                              u32 * returnSize)
	{
		JKRAramStreamCommand* command = new (JKRHeap::sSystemHeap, -4) JKRAramStreamCommand();
		command->type                 = ECT_WRITE;
		command->mAddress             = addr;
		command->mSize                = size;
		command->mStream              = stream;
		command->field_0x2c           = 0;
		command->mOffset              = offset;
		command->mTransferBuffer      = transBuffer;
		command->mHeap                = transHeap;
		command->mTransferBufferSize  = transSize;
		command->mReturnSize          = returnSize;
		if (returnSize) {
			*returnSize = 0;
		}

		OSInitMessageQueue(&command->mMessageQueue, &command->mMessage, 1);
		OSSendMessage(&sMessageQueue, command, OS_MESSAGE_BLOCKING);
		return command;
	}

	/*
	 * --INFO--
	 * Address:	8001A3C8
	 * Size:	000094
	 */
	JKRAramStreamCommand* JKRAramStream::sync(JKRAramStreamCommand * command, BOOL isNonBlocking)
	{
		OSMessage msg;
		if (isNonBlocking == FALSE) {
			OSReceiveMessage(&command->mMessageQueue, &msg.message, OS_MESSAGE_BLOCKING);
			if (msg.message == nullptr) {
				command = nullptr;
				return command;
			} else {
				return command;
			}
		} else {
			BOOL receiveResult = OSReceiveMessage(&command->mMessageQueue, &msg.message, OS_MESSAGE_NON_BLOCKING);
			if (receiveResult == FALSE) {
				command = nullptr;
				return command;
			} else if (msg.message == nullptr) {
				command = nullptr;
				return command;
			} else {
				return command;
			}
		}
	}

	/*
	 * --INFO--
	 * Address:	8001A45C
	 * Size:	000054
	 */
	void JKRAramStream::setTransBuffer(unsigned char*, unsigned long, JKRHeap*)
	{
		/*
		lis      r6, 0x00008000@ha
		li       r7, 0
		addi     r0, r6, 0x00008000@l
		cmplwi   r3, 0
		stw      r7, transBuffer__13JKRAramStream@sda21(r13)
		stw      r0, transSize__13JKRAramStream@sda21(r13)
		stw      r7, transHeap__13JKRAramStream@sda21(r13)
		beq      lbl_8001A488
		addi     r0, r3, 0x1f
		rlwinm   r0, r0, 0, 0, 0x1a
		stw      r0, transBuffer__13JKRAramStream@sda21(r13)

	lbl_8001A488:
		cmplwi   r4, 0
		beq      lbl_8001A498
		rlwinm   r0, r4, 0, 0, 0x1a
		stw      r0, transSize__13JKRAramStream@sda21(r13)

	lbl_8001A498:
		cmplwi   r5, 0
		beqlr
		cmplwi   r3, 0
		bnelr
		stw      r5, transHeap__13JKRAramStream@sda21(r13)
		blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	8001A4B0
	 * Size:	00000C
	 */
	JKRAramStreamCommand::JKRAramStreamCommand()
	{
		// Generated from stb r0, 0x28(r3)
		mAllocatedTransferBuffer = false;
	}
