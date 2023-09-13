#include "THP/THPVideoDecode.h"
#include "THP/THPPlayer.h"
#include "types.h"

#define STACK_SIZE   0x1000
#define BUFFER_COUNT 3

static OSThread VideoDecodeThread;
static u8 VideoDecodeThreadStack[STACK_SIZE];
static OSMessageQueue FreeTextureSetQueue;
static OSMessageQueue DecodedTextureSetQueue;
static OSMessage FreeTextureSetMessage[BUFFER_COUNT];
static OSMessage DecodedTextureSetMessage[BUFFER_COUNT];

static BOOL VideoDecodeThreadCreated;
static BOOL First;

/*
 * --INFO--
 * Address:	8044F8B4
 * Size:	0000D8
 */
BOOL CreateVideoDecodeThread(OSPriority priority, void* task)
{
	BOOL res;
	if (task) {
		res = OSCreateThread(&VideoDecodeThread, VideoDecoderForOnMemory, task, VideoDecodeThreadStack + STACK_SIZE, STACK_SIZE, priority,
		                     1);
		if (res == FALSE)
			return FALSE;
	} else {
		res = OSCreateThread(&VideoDecodeThread, VideoDecoder, NULL, VideoDecodeThreadStack + STACK_SIZE, STACK_SIZE, priority, 1);
		if (res == FALSE)
			return FALSE;
	}

	OSInitMessageQueue(&FreeTextureSetQueue, FreeTextureSetMessage, BUFFER_COUNT);
	OSInitMessageQueue(&DecodedTextureSetQueue, DecodedTextureSetMessage, BUFFER_COUNT);
	VideoDecodeThreadCreated = TRUE;
	First                    = TRUE;
	return TRUE;
}

/*
 * --INFO--
 * Address:	8044F98C
 * Size:	000034
 */
void VideoDecodeThreadStart()
{
	if (VideoDecodeThreadCreated)
		OSResumeThread(&VideoDecodeThread);
}

/*
 * --INFO--
 * Address:	8044F9C0
 * Size:	00003C
 */
void VideoDecodeThreadCancel()
{
	if (VideoDecodeThreadCreated) {
		OSCancelThread(&VideoDecodeThread);
		VideoDecodeThreadCreated = FALSE;
	}
}

/*
 * --INFO--
 * Address:	8044F9FC
 * Size:	0000C8
 */
static void* VideoDecoder(void* arg)
{
	BOOL old;
	THPReadBuffer* thpBuffer;
	int decodedFrame = ActivePlayer.mVideoDecodeCount;

	while (TRUE) {
		if (ActivePlayer.mAudioExist) {
			for (; ActivePlayer.mVideoDecodeCount < 0; decodedFrame--) {
				thpBuffer     = (THPReadBuffer*)PopReadedBuffer2();
				s32 curFrame  = (thpBuffer->mFrameNumber + ActivePlayer.mInitReadFrame);
				s32 remaining = (curFrame % ActivePlayer.mHeader.mNumFrames);
				if (remaining == (ActivePlayer.mHeader.mNumFrames - 1) && (ActivePlayer.mPlayFlag & 1) == 0)
					VideoDecode(thpBuffer);

				PushFreeReadBuffer((OSMessage*)thpBuffer);
				old = OSDisableInterrupts();
				ActivePlayer.mVideoDecodeCount++;
				OSRestoreInterrupts(old);
			}
		}

		if (ActivePlayer.mAudioExist)
			thpBuffer = (THPReadBuffer*)PopReadedBuffer2();
		else
			thpBuffer = (THPReadBuffer*)PopReadedBuffer();

		VideoDecode(thpBuffer);
		PushFreeReadBuffer((OSMessage*)thpBuffer);
	}
}

/*
 * --INFO--
 * Address:	8044FAC4
 * Size:	000134
 */
static void* VideoDecoderForOnMemory(void* arg)
{
	s32 readSize;
	s32 frame;
	u32 i;
	THPReadBuffer readBuffer;

	frame    = 0;
	i        = 0;
	readSize = ActivePlayer.mInitReadSize;

	readBuffer.mPtr = (u8*)arg;
	while (TRUE) {
		if (ActivePlayer.mAudioExist) {
			while (ActivePlayer.mVideoDecodeCount < 0) {
				BOOL old = OSDisableInterrupts();
				ActivePlayer.mVideoDecodeCount++;
				OSRestoreInterrupts(old);
				s32 remaining = (frame + ActivePlayer.mInitReadFrame) % ActivePlayer.mHeader.mNumFrames;
				if (remaining == ActivePlayer.mHeader.mNumFrames - 1) {
					if ((ActivePlayer.mPlayFlag & 1) == 0)
						break;

					readSize        = *(s32*)readBuffer.mPtr;
					readBuffer.mPtr = ActivePlayer.mMovieData;
				} else {
					s32 size = *(s32*)readBuffer.mPtr;
					readBuffer.mPtr += readSize;
					readSize = size;
				}
				frame++;
			}
		}

		readBuffer.mFrameNumber = frame;

		VideoDecode(&readBuffer);

		s32 remaining = (frame + ActivePlayer.mInitReadFrame) % ActivePlayer.mHeader.mNumFrames;
		if (remaining == ActivePlayer.mHeader.mNumFrames - 1) {
			if ((ActivePlayer.mPlayFlag & 1)) {
				readSize        = *(s32*)readBuffer.mPtr;
				readBuffer.mPtr = ActivePlayer.mMovieData;
			} else {
				OSSuspendThread(&VideoDecodeThread);
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
 * Address:	8044FBF8
 * Size:	000120
 */
static void VideoDecode(THPReadBuffer* readBuffer)
{
	THPTextureSet* textureSet;
	s32 i;
	u32* tileOffsets;
	u8* tile;
	BOOL old;

	tileOffsets = (u32*)(readBuffer->mPtr + 8);
	tile        = &readBuffer->mPtr[ActivePlayer.mCompInfo.mNumComponents * 4] + 8;
	textureSet  = (THPTextureSet*)PopFreeTextureSet();

	for (i = 0; i < ActivePlayer.mCompInfo.mNumComponents; i++) {
		switch (ActivePlayer.mCompInfo.mFrameComp[i]) {
		case 0: {
			ActivePlayer.mVideoError
			    = THPVideoDecode(tile, textureSet->mYTexture, textureSet->mUTexture, textureSet->mVTexture, ActivePlayer.mThpWorkArea);
			if (ActivePlayer.mVideoError) {
				if (First) {
					PrepareReady(FALSE);
					First = FALSE;
				}
				OSSuspendThread(&VideoDecodeThread);
			}
			textureSet->mFrameNumber = readBuffer->mFrameNumber;
			PushDecodedTextureSet((OSMessage*)textureSet);
			old = OSDisableInterrupts();
			ActivePlayer.mVideoDecodeCount++;
			OSRestoreInterrupts(old);
		}
		}

		tile += *tileOffsets;
		tileOffsets++;
	}

	if (First) {
		PrepareReady(TRUE);
		First = FALSE;
	}
}

/*
 * --INFO--
 * Address:	8044FD18
 * Size:	000034
 */
OSMessage PopFreeTextureSet()
{
	void* msg;
	OSReceiveMessage(&FreeTextureSetQueue, &msg, 1);
	return msg;
}

/*
 * --INFO--
 * Address:	8044FD4C
 * Size:	000030
 */
BOOL PushFreeTextureSet(OSMessage* msg) { OSSendMessage(&FreeTextureSetQueue, msg, 0); }

/*
 * --INFO--
 * Address:	8044FD7C
 * Size:	000044
 */
OSMessage PopDecodedTextureSet(s32 flags)
{
	void* msg;
	if (OSReceiveMessage(&DecodedTextureSetQueue, &msg, flags) == TRUE) {
		return msg;
	}
	return NULL;
}

/*
 * --INFO--
 * Address:	8044FDC0
 * Size:	000030
 */
BOOL PushDecodedTextureSet(OSMessage* msg) { OSSendMessage(&DecodedTextureSetQueue, msg, OS_MESSAGE_BLOCK); }
