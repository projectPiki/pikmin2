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

/**
 * @note Address: 0x8044D2C4
 * @note Size: 0xD4
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

/**
 * @note Address: 0x8044D398
 * @note Size: 0x34
 */
void AudioDecodeThreadStart()
{
	if (AudioDecodeThreadCreated) {
		OSResumeThread(&AudioDecodeThread);
	}
}

/**
 * @note Address: 0x8044D3CC
 * @note Size: 0x3C
 */
void AudioDecodeThreadCancel()
{
	if (AudioDecodeThreadCreated) {
		OSCancelThread(&AudioDecodeThread);
		AudioDecodeThreadCreated = FALSE;
	}
}

/**
 * @note Address: 0x8044D408
 * @note Size: 0x28
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

/**
 * @note Address: 0x8044D430
 * @note Size: 0xA8
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

/**
 * @note Address: 0x8044D4D8
 * @note Size: 0xD4
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

/**
 * @note Address: 0x8044D5AC
 * @note Size: 0x34
 */
void* PopFreeAudioBuffer()
{
	void* buf;
	OSReceiveMessage(&FreeAudioBufferQueue, &buf, OS_MESSAGE_BLOCK);
	return buf;
}

/**
 * @note Address: 0x8044D5E0
 * @note Size: 0x30
 */
void PushFreeAudioBuffer(void* buf) { OSSendMessage(&FreeAudioBufferQueue, buf, OS_MESSAGE_NOBLOCK); }

/**
 * @note Address: 0x8044D610
 * @note Size: 0x44
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

/**
 * @note Address: 0x8044D654
 * @note Size: 0x30
 */
void PushDecodedAudioBuffer(void* buf) { OSSendMessage(&DecodedAudioBufferQueue, buf, 1); }
