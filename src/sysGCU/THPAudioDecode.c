#include "THP/THPRead.h"
#include "THP/THPAudioDecode.h"
#include "THP/THPPlayer.h"

#define STACK_SIZE   0x1000
#define BUFFER_COUNT 3

static OSThread AudioDecodeThread;
static u8 AudioDecodeThreadStack[STACK_SIZE];
static OSMessageQueue FreeAudioBufferQueue;
static OSMessageQueue DecodedAudioBufferQueue;
static OSMessage FreeAudioBufferMessage[BUFFER_COUNT];
static OSMessage DecodedAudioBufferMessage[BUFFER_COUNT];

static BOOL AudioDecodeThreadCreated;

/*
 * --INFO--
 * Address:	8044D2C4
 * Size:	0000D4
 */
BOOL CreateAudioDecodeThread(OSPriority prio, void* param)
{
	BOOL res;
	if (param) {
		res = OSCreateThread(&AudioDecodeThread, AudioDecoderForOnMemory, param, AudioDecodeThreadStack + STACK_SIZE, STACK_SIZE, prio,
		                     OS_THREAD_ATTR_DETACH);
		if (res == FALSE)
			return FALSE;
	} else {
		res = OSCreateThread(&AudioDecodeThread, AudioDecoder, NULL, AudioDecodeThreadStack + STACK_SIZE, STACK_SIZE, prio,
		                     OS_THREAD_ATTR_DETACH);
		if (res == FALSE)
			return FALSE;
	}

	OSInitMessageQueue(&FreeAudioBufferQueue, FreeAudioBufferMessage, BUFFER_COUNT);
	OSInitMessageQueue(&DecodedAudioBufferQueue, DecodedAudioBufferMessage, BUFFER_COUNT);
	AudioDecodeThreadCreated = TRUE;
	return TRUE;
}

/*
 * --INFO--
 * Address:	8044D398
 * Size:	000034
 */
void AudioDecodeThreadStart()
{
	if (AudioDecodeThreadCreated) {
		OSResumeThread(&AudioDecodeThread);
	}
}

/*
 * --INFO--
 * Address:	8044D3CC
 * Size:	00003C
 */
void AudioDecodeThreadCancel()
{
	if (AudioDecodeThreadCreated) {
		OSCancelThread(&AudioDecodeThread);
		AudioDecodeThreadCreated = FALSE;
	}
}

/*
 * --INFO--
 * Address:	8044D408
 * Size:	000028
 */
static void* AudioDecoder(void* _)
{
	THPReadBuffer* buf;
	while (TRUE) {
		buf = (THPReadBuffer*)PopReadedBuffer();
		AudioDecode(buf);
		PushReadedBuffer2((OSMessage*)buf);
	}
}

/*
 * --INFO--
 * Address:	8044D430
 * Size:	0000A8
 */
static void* AudioDecoderForOnMemory(void* bufPtr)
{
	s32 readSize;
	s32 frame;
	THPReadBuffer readBuffer;

	frame           = 0;
	readSize        = ActivePlayer.mInitReadSize;
	readBuffer.mPtr = (u8*)bufPtr;

	while (TRUE) {
		s32 remaining;
		readBuffer.mFrameNumber = frame;
		AudioDecode(&readBuffer);

		remaining = (frame + ActivePlayer.mInitReadFrame) % ActivePlayer.mHeader.mNumFrames;

		if (remaining == ActivePlayer.mHeader.mNumFrames - 1) {
			if ((ActivePlayer.mPlayFlag & 1)) {
				readSize        = *(s32*)readBuffer.mPtr;
				readBuffer.mPtr = ActivePlayer.mMovieData;
			} else {
				OSSuspendThread(&AudioDecodeThread);
			}
		} else {
			s32 size = *(s32*)readBuffer.mPtr;
			readBuffer.mPtr += readSize;
			readSize = size;
		}
		frame++;
	}
}

/*
 * --INFO--
 * Address:	8044D4D8
 * Size:	0000D4
 */
static void AudioDecode(THPReadBuffer* readBuffer)
{
	THPAudioBuffer* audioBuf;
	s32 i;
	u32* offsets;
	u8* audioData;

	offsets   = (u32*)(readBuffer->mPtr + 8);
	audioData = &readBuffer->mPtr[ActivePlayer.mCompInfo.mNumComponents * 4] + 8;
	audioBuf  = (THPAudioBuffer*)PopFreeAudioBuffer();

	for (i = 0; i < ActivePlayer.mCompInfo.mNumComponents; i++) {
		switch (ActivePlayer.mCompInfo.mFrameComp[i]) {
		case 1: {
			audioBuf->mValidSample = THPAudioDecode(audioBuf->mBuffer, (audioData + *offsets * ActivePlayer.mCurAudioTrack), 0);
			audioBuf->mCurPtr      = audioBuf->mBuffer;
			PushDecodedAudioBuffer(audioBuf);
			return;
		}
		}

		audioData += *offsets;
		offsets++;
	}
}

/*
 * --INFO--
 * Address:	8044D5AC
 * Size:	000034
 */
void* PopFreeAudioBuffer()
{
	void* buf;
	OSReceiveMessage(&FreeAudioBufferQueue, &buf, 1);
	return buf;
}

/*
 * --INFO--
 * Address:	8044D5E0
 * Size:	000030
 */
void PushFreeAudioBuffer(void* buf) { OSSendMessage(&FreeAudioBufferQueue, buf, OS_MESSAGE_NOBLOCK); }

/*
 * --INFO--
 * Address:	8044D610
 * Size:	000044
 */
void* PopDecodedAudioBuffer(s32 flags)
{
	void* buf;
	s32 res = OSReceiveMessage(&DecodedAudioBufferQueue, &buf, flags);
	if (res == 1) {
		return buf;
	}
	return NULL;
}

/*
 * --INFO--
 * Address:	8044D654
 * Size:	000030
 */
void PushDecodedAudioBuffer(void* buf) { OSSendMessage(&DecodedAudioBufferQueue, buf, 1); }
