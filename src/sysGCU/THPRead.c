#include "THP/THPRead.h"
#include "THP/THPPlayer.h"
#include "THP/THPVideoDecode.h"
#include "Dolphin/os.h"
#include "types.h"

#define STACK_SIZE   0x1000
#define BUFFER_COUNT 10

static OSMessageQueue FreeReadBufferQueue;
static OSMessageQueue ReadedBufferQueue;
static OSMessageQueue ReadedBufferQueue2;

static OSMessage FreeReadBufferMessage[BUFFER_COUNT];
static OSMessage ReadedBufferMessage[BUFFER_COUNT];
static OSMessage ReadedBufferMessage2[BUFFER_COUNT];

u8 gTHPReaderDvdAccess;

static OSThread ReadThread;
static BOOL ReadThreadCreated;
static u8 ReadThreadStack[STACK_SIZE];

/**
 * @note Address: 0x8044F58C
 * @note Size: 0xA0
 */

BOOL CreateReadThread(OSPriority priority)
{
	if (OSCreateThread(&ReadThread, Reader, NULL, ReadThreadStack + STACK_SIZE, STACK_SIZE, priority, 1) == FALSE) {
		return FALSE;
	}

	OSInitMessageQueue(&FreeReadBufferQueue, FreeReadBufferMessage, BUFFER_COUNT);
	OSInitMessageQueue(&ReadedBufferQueue, ReadedBufferMessage, BUFFER_COUNT);
	OSInitMessageQueue(&ReadedBufferQueue2, ReadedBufferMessage2, BUFFER_COUNT);
	ReadThreadCreated = TRUE;

	return TRUE;
}

/**
 * @note Address: 0x8044F62C
 * @note Size: 0x34
 */
void ReadThreadStart()
{
	if (ReadThreadCreated != FALSE) {
		OSResumeThread(&ReadThread);
	}
}

/**
 * @note Address: 0x8044F660
 * @note Size: 0x3C
 */
void ReadThreadCancel()
{
	if (ReadThreadCreated != FALSE) {
		OSCancelThread(&ReadThread);
		ReadThreadCreated = FALSE;
	}
}

/**
 * @note Address: 0x8044F69C
 * @note Size: 0xEC
 */
static void* Reader(void* arg)
{
	THPReadBuffer* buf;
	s32 curFrame;
	s32 status;
	s32 offset       = ActivePlayer.mInitOffset;
	s32 initReadSize = ActivePlayer.mInitReadSize;
	s32 frame        = 0;

	while (TRUE) {
		buf                 = (THPReadBuffer*)PopFreeReadBuffer();
		gTHPReaderDvdAccess = TRUE;
		status              = DVDReadPrio(&ActivePlayer.mFileInfo, buf->mPtr, initReadSize, offset, 2);
		gTHPReaderDvdAccess = FALSE;
		if (status != initReadSize) {
			if (status == -1)
				ActivePlayer.mDvdError = -1;
			if (frame == 0)
				PrepareReady(FALSE);

			OSSuspendThread(&ReadThread);
		}

		buf->mFrameNumber = frame;
		PushReadedBuffer((OSMessage*)buf);
		offset += initReadSize;
		initReadSize = *(s32*)buf->mPtr;

		curFrame = (frame + ActivePlayer.mInitReadFrame) % ActivePlayer.mHeader.mNumFrames;
		if (curFrame == ActivePlayer.mHeader.mNumFrames - 1) {
			if ((ActivePlayer.mPlayFlag & 1))
				offset = ActivePlayer.mHeader.mMovieDataOffsets;
			else
				OSSuspendThread(&ReadThread);
		}

		frame++;
	}
}

/**
 * @note Address: 0x8044F788
 * @note Size: 0x34
 */
OSMessage PopReadedBuffer()
{
	OSMessage msg;
	OSReceiveMessage(&ReadedBufferQueue, &msg, OS_MESSAGE_BLOCK);
	return msg;
}

/**
 * @note Address: 0x8044F7BC
 * @note Size: 0x30
 */
BOOL PushReadedBuffer(OSMessage* msg) { return OSSendMessage(&ReadedBufferQueue, msg, OS_MESSAGE_BLOCK); }

/**
 * @note Address: 0x8044F7EC
 * @note Size: 0x34
 */
OSMessage PopFreeReadBuffer()
{
	OSMessage msg;
	OSReceiveMessage(&FreeReadBufferQueue, &msg, OS_MESSAGE_BLOCK);
	return msg;
}

/**
 * @note Address: 0x8044F820
 * @note Size: 0x30
 */
BOOL PushFreeReadBuffer(OSMessage* msg) { return OSSendMessage(&FreeReadBufferQueue, msg, OS_MESSAGE_BLOCK); }

/**
 * @note Address: 0x8044F850
 * @note Size: 0x34
 */
OSMessage PopReadedBuffer2()
{
	OSMessage msg;
	OSReceiveMessage(&ReadedBufferQueue2, &msg, OS_MESSAGE_BLOCK);
	return msg;
}

/**
 * @note Address: 0x8044F884
 * @note Size: 0x30
 */
BOOL PushReadedBuffer2(OSMessage* msg) { return OSSendMessage(&ReadedBufferQueue2, msg, OS_MESSAGE_BLOCK); }
