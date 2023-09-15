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

/*
 * --INFO--
 * Address:	8044F58C
 * Size:	0000A0
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

/*
 * --INFO--
 * Address:	8044F62C
 * Size:	000034
 */
void ReadThreadStart()
{
	if (ReadThreadCreated != FALSE) {
		OSResumeThread(&ReadThread);
	}
}

/*
 * --INFO--
 * Address:	8044F660
 * Size:	00003C
 */
void ReadThreadCancel()
{
	if (ReadThreadCreated != FALSE) {
		OSCancelThread(&ReadThread);
		ReadThreadCreated = FALSE;
	}
}

/*
 * --INFO--
 * Address:	8044F69C
 * Size:	0000EC
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

/*
 * --INFO--
 * Address:	8044F788
 * Size:	000034
 */
OSMessage PopReadedBuffer()
{
	OSMessage msg;
	OSReceiveMessage(&ReadedBufferQueue, &msg, OS_MESSAGE_BLOCK);
	return msg;
}

/*
 * --INFO--
 * Address:	8044F7BC
 * Size:	000030
 */
BOOL PushReadedBuffer(OSMessage* msg) { return OSSendMessage(&ReadedBufferQueue, msg, OS_MESSAGE_BLOCK); }

/*
 * --INFO--
 * Address:	8044F7EC
 * Size:	000034
 */
OSMessage PopFreeReadBuffer()
{
	OSMessage msg;
	OSReceiveMessage(&FreeReadBufferQueue, &msg, OS_MESSAGE_BLOCK);
	return msg;
}

/*
 * --INFO--
 * Address:	8044F820
 * Size:	000030
 */
BOOL PushFreeReadBuffer(OSMessage* msg) { return OSSendMessage(&FreeReadBufferQueue, msg, OS_MESSAGE_BLOCK); }

/*
 * --INFO--
 * Address:	8044F850
 * Size:	000034
 */
OSMessage PopReadedBuffer2()
{
	OSMessage msg;
	OSReceiveMessage(&ReadedBufferQueue2, &msg, OS_MESSAGE_BLOCK);
	return msg;
}

/*
 * --INFO--
 * Address:	8044F884
 * Size:	000030
 */
BOOL PushReadedBuffer2(OSMessage* msg) { return OSSendMessage(&ReadedBufferQueue2, msg, OS_MESSAGE_BLOCK); }
